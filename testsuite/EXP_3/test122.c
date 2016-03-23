
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

volatile uint32_t x4 = UINT32_MAX;
int8_t x9 = INT8_MAX;
int64_t x12 = -29805935214LL;
int32_t x16 = -1;
int64_t x17 = INT64_MAX;
uint8_t x18 = 59U;
int32_t x30 = INT32_MIN;
static int64_t x31 = -1758583882LL;
volatile int32_t x34 = 1055;
int16_t x39 = INT16_MIN;
int32_t x49 = INT32_MAX;
static int16_t x51 = INT16_MIN;
int64_t x64 = 0LL;
uint8_t x70 = 71U;
int32_t t16 = -90921;
int64_t x75 = -1LL;
int32_t t17 = 391;
uint8_t x83 = UINT8_MAX;
static int16_t x84 = -83;
uint64_t x94 = 3LLU;
volatile uint64_t x106 = UINT64_MAX;
volatile int64_t x108 = INT64_MAX;
int16_t x116 = INT16_MIN;
int32_t x124 = INT32_MIN;
int8_t x125 = 0;
uint32_t x132 = 34086327U;
int8_t x138 = 7;
int16_t x140 = 1590;
int8_t x152 = INT8_MAX;
int64_t x156 = -1LL;
uint32_t x164 = 697226U;
uint8_t x166 = 79U;
static int16_t x177 = INT16_MIN;
int16_t x188 = -4158;
int32_t t41 = -1066;
volatile int32_t x194 = INT32_MIN;
int64_t x196 = -5745517432371LL;
int16_t x207 = INT16_MIN;
volatile int32_t x218 = INT32_MIN;
int64_t x219 = INT64_MAX;
uint8_t x232 = 36U;
static int64_t x234 = INT64_MIN;
uint32_t x237 = UINT32_MAX;
volatile int32_t x238 = -74;
static uint64_t x248 = 4085465622LLU;
volatile int32_t t57 = 504252249;
int32_t x257 = INT32_MIN;
int16_t x259 = -3268;
int64_t x261 = INT64_MIN;
static int8_t x269 = -1;
static volatile int8_t x277 = -7;
uint8_t x282 = 42U;
int64_t x287 = INT64_MIN;
int16_t x289 = INT16_MIN;
volatile int32_t t67 = -186;
uint32_t x300 = 0U;
int8_t x301 = INT8_MIN;
int8_t x303 = INT8_MIN;
int16_t x307 = INT16_MAX;
volatile uint16_t x308 = UINT16_MAX;
uint8_t x310 = 6U;
static int16_t x324 = -1;
uint16_t x355 = UINT16_MAX;
static int16_t x357 = -1;
int32_t x358 = INT32_MIN;
static int32_t t80 = 130;
uint8_t x363 = 1U;
int64_t x368 = 1963238718798LL;
static volatile int32_t t82 = 714481609;
int16_t x373 = 2;
int64_t x378 = INT64_MAX;
volatile uint8_t x379 = 23U;
int8_t x383 = -1;
int32_t t85 = 322;
static uint32_t x391 = 1786U;
volatile int8_t x393 = 0;
int32_t x396 = INT32_MIN;
int16_t x398 = INT16_MIN;
int64_t x400 = INT64_MAX;
int16_t x404 = 0;
int8_t x412 = INT8_MAX;
static int16_t x415 = INT16_MIN;
int8_t x425 = INT8_MIN;
uint32_t x448 = 6291U;
uint16_t x451 = UINT16_MAX;
volatile int32_t t100 = -3116;
static int32_t x453 = INT32_MIN;
uint16_t x456 = UINT16_MAX;
static volatile uint8_t x457 = 1U;
int8_t x458 = INT8_MIN;
uint16_t x460 = 205U;
int64_t x467 = INT64_MIN;
static uint64_t x472 = 544682964502LLU;
int32_t x475 = -9534132;
uint16_t x476 = 1U;
int16_t x484 = INT16_MAX;
int32_t t108 = 41;
uint32_t x494 = UINT32_MAX;
int32_t t111 = -2000;
static int8_t x499 = 45;
volatile int32_t t114 = -363668;
volatile int32_t t115 = -49;
int16_t x517 = INT16_MAX;
int64_t x520 = 67LL;
int32_t t116 = 189200;
volatile int16_t x526 = INT16_MAX;
uint16_t x527 = 326U;
int8_t x533 = INT8_MAX;
uint32_t x536 = 1372771U;
static int32_t t119 = 214;
volatile int32_t x537 = -3284;
int16_t x540 = INT16_MAX;
int64_t x558 = INT64_MIN;
int32_t t125 = -68;
static volatile int32_t t126 = 32059;
int16_t x572 = 3;
uint16_t x584 = UINT16_MAX;
int32_t t130 = -7;
volatile int8_t x593 = INT8_MIN;
uint32_t x601 = 18776413U;
int64_t x603 = -1LL;
int64_t x605 = INT64_MIN;
uint16_t x619 = 14378U;
uint16_t x620 = UINT16_MAX;
static volatile uint16_t x627 = 26673U;
volatile uint16_t x640 = 1U;
uint16_t x642 = 5431U;
int64_t x644 = -1LL;
int32_t t141 = 8146;
int16_t x648 = -1;
uint8_t x650 = 0U;
int16_t x652 = -59;
static int16_t x654 = 10;
int8_t x660 = -1;
int16_t x667 = 1021;
int64_t x668 = 1239560290199602471LL;
uint16_t x673 = UINT16_MAX;
int64_t x676 = INT64_MIN;
static volatile int32_t t150 = 2997487;
int64_t x681 = INT64_MAX;
static volatile int32_t t151 = 9359340;
uint32_t x685 = UINT32_MAX;
int32_t t153 = 26450027;
int16_t x700 = INT16_MIN;
volatile int32_t t155 = 31;
static int64_t x704 = INT64_MIN;
static uint16_t x707 = UINT16_MAX;
int32_t x708 = 28834;
static volatile uint8_t x711 = 4U;
volatile int16_t x728 = -1;
int16_t x729 = INT16_MAX;
static int32_t t163 = 3424;
volatile int32_t t164 = 92875442;
uint8_t x741 = 59U;
int8_t x745 = INT8_MAX;
int8_t x751 = INT8_MAX;
static volatile int32_t t167 = 98621;
static int32_t t168 = 16;
int8_t x765 = 26;
static volatile uint64_t x769 = UINT64_MAX;
uint8_t x772 = 2U;
int16_t x781 = INT16_MIN;
uint8_t x784 = 50U;
static int32_t t173 = -116;
int8_t x785 = -1;
int8_t x791 = 47;
int32_t t175 = 798842;
uint16_t x796 = UINT16_MAX;
int32_t x799 = INT32_MIN;
uint8_t x800 = 2U;
int32_t x803 = INT32_MIN;
int16_t x811 = INT16_MAX;
volatile int8_t x817 = 0;
int8_t x818 = -1;
static int64_t x825 = INT64_MAX;
int32_t t183 = -544515115;
static int32_t x831 = -1;
int32_t t185 = 1;
uint16_t x842 = 0U;
int32_t t188 = -66675821;
int32_t t189 = 59;
uint32_t x860 = 7U;
volatile int32_t t191 = -15961583;
volatile int16_t x866 = INT16_MIN;
static uint32_t x869 = UINT32_MAX;
static uint64_t x873 = 108633945073696118LLU;
int8_t x875 = INT8_MIN;
volatile int32_t t195 = -2779;
int8_t x877 = 0;
uint16_t x879 = 4U;
static int64_t x880 = INT64_MIN;
volatile int32_t t196 = 34019;
uint8_t x883 = 114U;
volatile uint8_t x884 = 3U;
int16_t x886 = INT16_MIN;
static int64_t x887 = INT64_MAX;
int16_t x888 = -1;
int32_t t198 = -804;


void f0(void) {
    	int32_t x1 = INT32_MAX;
	static int16_t x2 = 0;
	uint32_t x3 = 1U;
	volatile int32_t t0 = 14;

    t0 = ((x1>x2)<=(x3+x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x10 = -1LL;
	int64_t x11 = -3974702540LL;
	volatile int32_t t1 = 1769;

    t1 = ((x9>x10)<=(x11+x12));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x13 = 210;
	int8_t x14 = INT8_MIN;
	uint32_t x15 = UINT32_MAX;
	int32_t t2 = -808190878;

    t2 = ((x13>x14)<=(x15+x16));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x19 = 3U;
	volatile int16_t x20 = INT16_MIN;
	int32_t t3 = -17;

    t3 = ((x17>x18)<=(x19+x20));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x21 = 3;
	static int32_t x22 = -1;
	int32_t x23 = INT32_MAX;
	static int64_t x24 = INT64_MIN;
	volatile int32_t t4 = 0;

    t4 = ((x21>x22)<=(x23+x24));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x25 = 27;
	uint8_t x26 = 40U;
	volatile uint16_t x27 = 4396U;
	volatile int64_t x28 = -1LL;
	static volatile int32_t t5 = 51830;

    t5 = ((x25>x26)<=(x27+x28));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x29 = INT64_MIN;
	static uint16_t x32 = 21649U;
	volatile int32_t t6 = -650321331;

    t6 = ((x29>x30)<=(x31+x32));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x33 = UINT16_MAX;
	int64_t x35 = INT64_MAX;
	int64_t x36 = -42293719844530075LL;
	int32_t t7 = 230001;

    t7 = ((x33>x34)<=(x35+x36));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int16_t x37 = -1;
	volatile int64_t x38 = -2LL;
	uint16_t x40 = 62U;
	volatile int32_t t8 = -266380138;

    t8 = ((x37>x38)<=(x39+x40));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x41 = -1;
	uint64_t x42 = UINT64_MAX;
	static int8_t x43 = 9;
	int16_t x44 = -1;
	int32_t t9 = -2236;

    t9 = ((x41>x42)<=(x43+x44));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x45 = 106U;
	static int64_t x46 = -1LL;
	static int32_t x47 = INT32_MAX;
	volatile int32_t x48 = INT32_MIN;
	volatile int32_t t10 = 11514;

    t10 = ((x45>x46)<=(x47+x48));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x50 = -1;
	static int8_t x52 = -46;
	int32_t t11 = 53280;

    t11 = ((x49>x50)<=(x51+x52));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x53 = 1640U;
	uint16_t x54 = 252U;
	uint16_t x55 = UINT16_MAX;
	static uint32_t x56 = 176513U;
	int32_t t12 = -27693795;

    t12 = ((x53>x54)<=(x55+x56));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x57 = 1;
	volatile int32_t x58 = -36649187;
	int16_t x59 = -1;
	volatile int32_t x60 = -1;
	volatile int32_t t13 = -30;

    t13 = ((x57>x58)<=(x59+x60));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x61 = -1LL;
	uint32_t x62 = 127U;
	int32_t x63 = -1839286;
	int32_t t14 = 150;

    t14 = ((x61>x62)<=(x63+x64));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x65 = -1LL;
	int16_t x66 = 0;
	static uint64_t x67 = 3970007737597LLU;
	int16_t x68 = -106;
	volatile int32_t t15 = 228439925;

    t15 = ((x65>x66)<=(x67+x68));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x69 = 1;
	static uint64_t x71 = 7470397745LLU;
	int8_t x72 = INT8_MAX;

    t16 = ((x69>x70)<=(x71+x72));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x73 = INT32_MIN;
	volatile int64_t x74 = -1LL;
	int64_t x76 = 9040846103LL;

    t17 = ((x73>x74)<=(x75+x76));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x77 = INT32_MAX;
	int8_t x78 = 1;
	static uint8_t x79 = 5U;
	int64_t x80 = -1LL;
	int32_t t18 = 233652;

    t18 = ((x77>x78)<=(x79+x80));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x81 = UINT64_MAX;
	uint8_t x82 = UINT8_MAX;
	int32_t t19 = -108001;

    t19 = ((x81>x82)<=(x83+x84));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x85 = -1;
	volatile uint32_t x86 = 3U;
	int32_t x87 = -73;
	uint8_t x88 = 46U;
	volatile int32_t t20 = 0;

    t20 = ((x85>x86)<=(x87+x88));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x93 = INT64_MAX;
	int16_t x95 = -1;
	int16_t x96 = -9899;
	volatile int32_t t21 = -142773253;

    t21 = ((x93>x94)<=(x95+x96));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x97 = 58404480584044LL;
	int64_t x98 = INT64_MIN;
	uint64_t x99 = UINT64_MAX;
	int8_t x100 = INT8_MAX;
	static volatile int32_t t22 = 3;

    t22 = ((x97>x98)<=(x99+x100));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x101 = 1003000LLU;
	static int64_t x102 = -17931626688062126LL;
	int8_t x103 = -1;
	volatile int16_t x104 = 7;
	int32_t t23 = -8488768;

    t23 = ((x101>x102)<=(x103+x104));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int16_t x105 = -5;
	int16_t x107 = INT16_MIN;
	static volatile int32_t t24 = -16034044;

    t24 = ((x105>x106)<=(x107+x108));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint32_t x113 = 170741080U;
	uint16_t x114 = 3U;
	volatile int64_t x115 = INT64_MAX;
	int32_t t25 = -13;

    t25 = ((x113>x114)<=(x115+x116));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x117 = 8086U;
	int64_t x118 = INT64_MIN;
	uint32_t x119 = UINT32_MAX;
	int16_t x120 = -1;
	int32_t t26 = 28;

    t26 = ((x117>x118)<=(x119+x120));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint64_t x121 = UINT64_MAX;
	static int8_t x122 = INT8_MIN;
	uint32_t x123 = 129443044U;
	int32_t t27 = -80;

    t27 = ((x121>x122)<=(x123+x124));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint64_t x126 = 1977305656LLU;
	volatile uint16_t x127 = 20908U;
	volatile int16_t x128 = -1;
	volatile int32_t t28 = 499415198;

    t28 = ((x125>x126)<=(x127+x128));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x129 = INT16_MAX;
	static int64_t x130 = INT64_MIN;
	uint16_t x131 = UINT16_MAX;
	int32_t t29 = -1;

    t29 = ((x129>x130)<=(x131+x132));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x133 = 507U;
	int8_t x134 = -1;
	int16_t x135 = -1;
	int16_t x136 = INT16_MAX;
	volatile int32_t t30 = -8747;

    t30 = ((x133>x134)<=(x135+x136));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x137 = 0;
	volatile int32_t x139 = INT32_MIN;
	int32_t t31 = -17520989;

    t31 = ((x137>x138)<=(x139+x140));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x141 = UINT8_MAX;
	volatile int32_t x142 = INT32_MIN;
	volatile int8_t x143 = -1;
	uint16_t x144 = 3U;
	int32_t t32 = 22686014;

    t32 = ((x141>x142)<=(x143+x144));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x145 = 2905;
	static volatile int32_t x146 = -1;
	int32_t x147 = -8316;
	uint16_t x148 = 4091U;
	int32_t t33 = -36737;

    t33 = ((x145>x146)<=(x147+x148));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x149 = INT16_MIN;
	volatile uint32_t x150 = 0U;
	static int8_t x151 = INT8_MIN;
	volatile int32_t t34 = 63;

    t34 = ((x149>x150)<=(x151+x152));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint16_t x153 = UINT16_MAX;
	int64_t x154 = INT64_MIN;
	int16_t x155 = -1;
	volatile int32_t t35 = 735;

    t35 = ((x153>x154)<=(x155+x156));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x157 = -1;
	uint32_t x158 = 1U;
	static volatile int8_t x159 = INT8_MIN;
	static volatile int64_t x160 = INT64_MAX;
	int32_t t36 = -63486;

    t36 = ((x157>x158)<=(x159+x160));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x161 = -16169630;
	volatile int8_t x162 = -10;
	volatile uint32_t x163 = UINT32_MAX;
	volatile int32_t t37 = -26718;

    t37 = ((x161>x162)<=(x163+x164));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x165 = 5255U;
	volatile uint16_t x167 = 972U;
	int64_t x168 = INT64_MIN;
	static int32_t t38 = 2;

    t38 = ((x165>x166)<=(x167+x168));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x173 = 7LLU;
	uint64_t x174 = UINT64_MAX;
	int16_t x175 = INT16_MIN;
	int32_t x176 = 36842;
	int32_t t39 = 336878073;

    t39 = ((x173>x174)<=(x175+x176));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint16_t x178 = 843U;
	int16_t x179 = INT16_MIN;
	uint8_t x180 = 5U;
	volatile int32_t t40 = 2;

    t40 = ((x177>x178)<=(x179+x180));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x185 = 7;
	uint32_t x186 = UINT32_MAX;
	static uint8_t x187 = UINT8_MAX;

    t41 = ((x185>x186)<=(x187+x188));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x193 = INT16_MAX;
	static volatile int8_t x195 = INT8_MAX;
	static volatile int32_t t42 = 916170258;

    t42 = ((x193>x194)<=(x195+x196));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x197 = INT64_MIN;
	uint16_t x198 = UINT16_MAX;
	int16_t x199 = INT16_MIN;
	uint64_t x200 = 0LLU;
	volatile int32_t t43 = -601479;

    t43 = ((x197>x198)<=(x199+x200));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x201 = INT64_MIN;
	uint8_t x202 = UINT8_MAX;
	uint64_t x203 = 25LLU;
	static int64_t x204 = INT64_MIN;
	int32_t t44 = -6673;

    t44 = ((x201>x202)<=(x203+x204));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x205 = INT8_MAX;
	int8_t x206 = INT8_MIN;
	uint64_t x208 = UINT64_MAX;
	int32_t t45 = 1;

    t45 = ((x205>x206)<=(x207+x208));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x209 = 372467U;
	int16_t x210 = INT16_MIN;
	uint16_t x211 = 0U;
	uint8_t x212 = 33U;
	int32_t t46 = 0;

    t46 = ((x209>x210)<=(x211+x212));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x213 = 8555U;
	volatile int32_t x214 = 3;
	volatile uint16_t x215 = UINT16_MAX;
	int32_t x216 = INT32_MIN;
	static int32_t t47 = 1;

    t47 = ((x213>x214)<=(x215+x216));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x217 = -404379947;
	int8_t x220 = -1;
	static volatile int32_t t48 = -10;

    t48 = ((x217>x218)<=(x219+x220));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x221 = -227;
	uint32_t x222 = UINT32_MAX;
	int16_t x223 = 38;
	volatile int16_t x224 = -1424;
	static int32_t t49 = 5;

    t49 = ((x221>x222)<=(x223+x224));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x225 = INT64_MIN;
	int16_t x226 = -1;
	static int8_t x227 = INT8_MIN;
	volatile uint8_t x228 = 22U;
	volatile int32_t t50 = 98673;

    t50 = ((x225>x226)<=(x227+x228));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x229 = INT64_MAX;
	int64_t x230 = -218939788203889361LL;
	uint8_t x231 = 0U;
	int32_t t51 = -404695091;

    t51 = ((x229>x230)<=(x231+x232));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x233 = INT32_MAX;
	int8_t x235 = 0;
	int32_t x236 = INT32_MIN;
	static volatile int32_t t52 = 1500593;

    t52 = ((x233>x234)<=(x235+x236));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x239 = INT64_MAX;
	int32_t x240 = INT32_MIN;
	int32_t t53 = 850731;

    t53 = ((x237>x238)<=(x239+x240));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x241 = INT64_MIN;
	int64_t x242 = -8566LL;
	volatile int32_t x243 = INT32_MAX;
	volatile int8_t x244 = -1;
	int32_t t54 = -845;

    t54 = ((x241>x242)<=(x243+x244));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x245 = UINT8_MAX;
	volatile uint16_t x246 = 97U;
	int16_t x247 = -646;
	static int32_t t55 = 334875;

    t55 = ((x245>x246)<=(x247+x248));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x249 = INT32_MAX;
	uint32_t x250 = 39555964U;
	uint16_t x251 = UINT16_MAX;
	int8_t x252 = -1;
	int32_t t56 = 1;

    t56 = ((x249>x250)<=(x251+x252));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint8_t x253 = 112U;
	int64_t x254 = -1LL;
	int8_t x255 = 3;
	volatile int16_t x256 = -2;

    t57 = ((x253>x254)<=(x255+x256));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x258 = 3844;
	uint64_t x260 = UINT64_MAX;
	int32_t t58 = -14632195;

    t58 = ((x257>x258)<=(x259+x260));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x262 = UINT32_MAX;
	int64_t x263 = INT64_MIN;
	static uint32_t x264 = 850182812U;
	int32_t t59 = 54;

    t59 = ((x261>x262)<=(x263+x264));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile uint64_t x265 = 256549266189LLU;
	int64_t x266 = INT64_MIN;
	volatile uint8_t x267 = UINT8_MAX;
	static int32_t x268 = -1;
	int32_t t60 = -6;

    t60 = ((x265>x266)<=(x267+x268));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x270 = INT16_MAX;
	int16_t x271 = INT16_MIN;
	volatile int16_t x272 = INT16_MAX;
	volatile int32_t t61 = 5;

    t61 = ((x269>x270)<=(x271+x272));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint64_t x273 = 32366536LLU;
	static int64_t x274 = 2742277603543956027LL;
	uint32_t x275 = 1189005661U;
	int8_t x276 = INT8_MAX;
	volatile int32_t t62 = -12937;

    t62 = ((x273>x274)<=(x275+x276));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x278 = INT64_MIN;
	uint64_t x279 = 850029119150340403LLU;
	int32_t x280 = -1;
	int32_t t63 = 5309557;

    t63 = ((x277>x278)<=(x279+x280));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x281 = UINT16_MAX;
	uint16_t x283 = 16U;
	int8_t x284 = INT8_MAX;
	int32_t t64 = 148833327;

    t64 = ((x281>x282)<=(x283+x284));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x285 = UINT8_MAX;
	uint64_t x286 = UINT64_MAX;
	int16_t x288 = INT16_MAX;
	volatile int32_t t65 = 26725454;

    t65 = ((x285>x286)<=(x287+x288));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x290 = -3;
	uint8_t x291 = 82U;
	int8_t x292 = INT8_MIN;
	int32_t t66 = 1;

    t66 = ((x289>x290)<=(x291+x292));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x293 = -2410;
	int8_t x294 = INT8_MAX;
	int8_t x295 = -1;
	static volatile int16_t x296 = INT16_MAX;

    t67 = ((x293>x294)<=(x295+x296));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint64_t x297 = 8898493582261844318LLU;
	int8_t x298 = INT8_MAX;
	int16_t x299 = 59;
	static volatile int32_t t68 = 3497582;

    t68 = ((x297>x298)<=(x299+x300));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x302 = -49;
	int8_t x304 = 11;
	volatile int32_t t69 = -1283836;

    t69 = ((x301>x302)<=(x303+x304));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x305 = -1LL;
	static int64_t x306 = INT64_MAX;
	int32_t t70 = -12;

    t70 = ((x305>x306)<=(x307+x308));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x309 = INT16_MIN;
	volatile int32_t x311 = -1;
	uint32_t x312 = UINT32_MAX;
	static volatile int32_t t71 = 237793003;

    t71 = ((x309>x310)<=(x311+x312));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x313 = 23;
	int32_t x314 = INT32_MIN;
	int32_t x315 = 0;
	int64_t x316 = -1LL;
	volatile int32_t t72 = 9388;

    t72 = ((x313>x314)<=(x315+x316));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x321 = UINT8_MAX;
	static uint64_t x322 = 16408LLU;
	int8_t x323 = INT8_MAX;
	int32_t t73 = 19024840;

    t73 = ((x321>x322)<=(x323+x324));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x325 = INT64_MIN;
	int64_t x326 = -1LL;
	uint32_t x327 = UINT32_MAX;
	int32_t x328 = 3617046;
	int32_t t74 = 1377;

    t74 = ((x325>x326)<=(x327+x328));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint8_t x329 = 123U;
	volatile uint16_t x330 = 3U;
	uint32_t x331 = UINT32_MAX;
	static int16_t x332 = INT16_MIN;
	int32_t t75 = 688000391;

    t75 = ((x329>x330)<=(x331+x332));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x341 = -327LL;
	int8_t x342 = INT8_MAX;
	uint64_t x343 = UINT64_MAX;
	int32_t x344 = INT32_MAX;
	volatile int32_t t76 = 3;

    t76 = ((x341>x342)<=(x343+x344));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x345 = -1932353;
	int32_t x346 = 1;
	int32_t x347 = -518682790;
	static uint64_t x348 = 47547661868009LLU;
	static int32_t t77 = 1344;

    t77 = ((x345>x346)<=(x347+x348));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x349 = 7;
	uint16_t x350 = 438U;
	int8_t x351 = -15;
	uint16_t x352 = 6137U;
	volatile int32_t t78 = -1532425;

    t78 = ((x349>x350)<=(x351+x352));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x353 = INT64_MAX;
	static int16_t x354 = -2265;
	uint16_t x356 = 2U;
	int32_t t79 = 216966720;

    t79 = ((x353>x354)<=(x355+x356));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x359 = -255579;
	static int16_t x360 = -1;

    t80 = ((x357>x358)<=(x359+x360));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int32_t x361 = INT32_MIN;
	volatile int16_t x362 = INT16_MIN;
	int16_t x364 = 14;
	volatile int32_t t81 = -1442924;

    t81 = ((x361>x362)<=(x363+x364));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x365 = INT32_MIN;
	uint16_t x366 = UINT16_MAX;
	uint8_t x367 = UINT8_MAX;

    t82 = ((x365>x366)<=(x367+x368));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x374 = -1;
	static int32_t x375 = INT32_MAX;
	int8_t x376 = INT8_MIN;
	volatile int32_t t83 = -1839;

    t83 = ((x373>x374)<=(x375+x376));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x377 = INT8_MIN;
	volatile int32_t x380 = -1;
	volatile int32_t t84 = -68518497;

    t84 = ((x377>x378)<=(x379+x380));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x381 = INT64_MAX;
	int32_t x382 = -123086;
	volatile int16_t x384 = 318;

    t85 = ((x381>x382)<=(x383+x384));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x389 = 5920LLU;
	volatile int8_t x390 = INT8_MAX;
	int8_t x392 = INT8_MIN;
	volatile int32_t t86 = -2205;

    t86 = ((x389>x390)<=(x391+x392));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x394 = INT8_MIN;
	uint64_t x395 = UINT64_MAX;
	static volatile int32_t t87 = 548380;

    t87 = ((x393>x394)<=(x395+x396));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x397 = INT8_MAX;
	uint64_t x399 = 100359787LLU;
	volatile int32_t t88 = 19;

    t88 = ((x397>x398)<=(x399+x400));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x401 = UINT64_MAX;
	uint8_t x402 = UINT8_MAX;
	int64_t x403 = 1339597LL;
	int32_t t89 = -642;

    t89 = ((x401>x402)<=(x403+x404));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x405 = 1;
	volatile uint64_t x406 = 1187LLU;
	int16_t x407 = INT16_MIN;
	volatile uint8_t x408 = 1U;
	int32_t t90 = -590;

    t90 = ((x405>x406)<=(x407+x408));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint64_t x409 = 5504209236LLU;
	static int32_t x410 = INT32_MIN;
	int64_t x411 = INT64_MIN;
	volatile int32_t t91 = 28;

    t91 = ((x409>x410)<=(x411+x412));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x413 = INT16_MAX;
	uint64_t x414 = UINT64_MAX;
	int8_t x416 = INT8_MIN;
	volatile int32_t t92 = 22448050;

    t92 = ((x413>x414)<=(x415+x416));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x421 = INT32_MIN;
	uint32_t x422 = 8U;
	uint64_t x423 = 19651394LLU;
	int16_t x424 = -1196;
	volatile int32_t t93 = 73;

    t93 = ((x421>x422)<=(x423+x424));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x426 = 8814103U;
	uint8_t x427 = 0U;
	uint8_t x428 = UINT8_MAX;
	int32_t t94 = 460099111;

    t94 = ((x425>x426)<=(x427+x428));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x429 = -2;
	int64_t x430 = INT64_MAX;
	uint32_t x431 = 18U;
	int8_t x432 = -1;
	static volatile int32_t t95 = 12412;

    t95 = ((x429>x430)<=(x431+x432));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x433 = -1;
	int64_t x434 = -59595LL;
	int16_t x435 = INT16_MAX;
	volatile int16_t x436 = INT16_MIN;
	int32_t t96 = -36812;

    t96 = ((x433>x434)<=(x435+x436));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x437 = 93464129836LLU;
	int16_t x438 = INT16_MIN;
	uint16_t x439 = 21464U;
	volatile int16_t x440 = INT16_MIN;
	volatile int32_t t97 = 704061;

    t97 = ((x437>x438)<=(x439+x440));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x441 = INT16_MIN;
	int32_t x442 = INT32_MAX;
	static int32_t x443 = -1;
	uint64_t x444 = 2678092934LLU;
	int32_t t98 = -185;

    t98 = ((x441>x442)<=(x443+x444));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x445 = -261159997LL;
	int16_t x446 = INT16_MIN;
	int64_t x447 = INT64_MIN;
	volatile int32_t t99 = 14239521;

    t99 = ((x445>x446)<=(x447+x448));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x449 = INT8_MIN;
	int32_t x450 = INT32_MIN;
	static int64_t x452 = -1LL;

    t100 = ((x449>x450)<=(x451+x452));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x454 = 168866755;
	int32_t x455 = INT32_MIN;
	volatile int32_t t101 = -25390;

    t101 = ((x453>x454)<=(x455+x456));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x459 = 1180214543U;
	int32_t t102 = 29845625;

    t102 = ((x457>x458)<=(x459+x460));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x461 = INT32_MAX;
	static int64_t x462 = INT64_MAX;
	static uint64_t x463 = 158LLU;
	static int16_t x464 = -1;
	volatile int32_t t103 = 25;

    t103 = ((x461>x462)<=(x463+x464));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x465 = -89881LL;
	int64_t x466 = INT64_MIN;
	int8_t x468 = INT8_MAX;
	volatile int32_t t104 = 13591324;

    t104 = ((x465>x466)<=(x467+x468));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x469 = INT32_MAX;
	static int16_t x470 = -12;
	int16_t x471 = 0;
	int32_t t105 = -776339456;

    t105 = ((x469>x470)<=(x471+x472));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x473 = 7679;
	volatile uint64_t x474 = 51809283110157777LLU;
	volatile int32_t t106 = -24457999;

    t106 = ((x473>x474)<=(x475+x476));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x477 = 0U;
	int32_t x478 = INT32_MIN;
	uint64_t x479 = 122LLU;
	static int64_t x480 = 967734221061982930LL;
	static int32_t t107 = -1;

    t107 = ((x477>x478)<=(x479+x480));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x481 = 22U;
	static int8_t x482 = -1;
	static volatile int32_t x483 = 156746;

    t108 = ((x481>x482)<=(x483+x484));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x485 = -3;
	int32_t x486 = INT32_MAX;
	static volatile int64_t x487 = INT64_MIN;
	static int32_t x488 = 42665076;
	volatile int32_t t109 = -56884943;

    t109 = ((x485>x486)<=(x487+x488));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x489 = INT16_MIN;
	int32_t x490 = 222543494;
	int64_t x491 = -1LL;
	static volatile int16_t x492 = -1;
	static volatile int32_t t110 = 125424;

    t110 = ((x489>x490)<=(x491+x492));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x493 = 1U;
	volatile uint8_t x495 = 5U;
	uint32_t x496 = 6390U;

    t111 = ((x493>x494)<=(x495+x496));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x497 = 4U;
	int8_t x498 = INT8_MIN;
	static int64_t x500 = -1LL;
	volatile int32_t t112 = -2511457;

    t112 = ((x497>x498)<=(x499+x500));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x501 = -53;
	int32_t x502 = 0;
	static int64_t x503 = INT64_MIN;
	int8_t x504 = 13;
	volatile int32_t t113 = -86;

    t113 = ((x501>x502)<=(x503+x504));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x505 = 533U;
	int16_t x506 = INT16_MIN;
	int8_t x507 = INT8_MIN;
	volatile uint32_t x508 = 116271445U;

    t114 = ((x505>x506)<=(x507+x508));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x513 = -1;
	uint64_t x514 = UINT64_MAX;
	int64_t x515 = -1888299504125131045LL;
	static int32_t x516 = INT32_MIN;

    t115 = ((x513>x514)<=(x515+x516));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x518 = INT64_MAX;
	uint8_t x519 = UINT8_MAX;

    t116 = ((x517>x518)<=(x519+x520));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x525 = 3;
	uint8_t x528 = UINT8_MAX;
	static int32_t t117 = -947337210;

    t117 = ((x525>x526)<=(x527+x528));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint16_t x529 = 2712U;
	uint8_t x530 = 38U;
	int8_t x531 = -1;
	uint16_t x532 = 30258U;
	int32_t t118 = -18367684;

    t118 = ((x529>x530)<=(x531+x532));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x534 = INT32_MIN;
	int32_t x535 = -956;

    t119 = ((x533>x534)<=(x535+x536));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x538 = INT32_MIN;
	static int32_t x539 = INT32_MIN;
	static int32_t t120 = 9594767;

    t120 = ((x537>x538)<=(x539+x540));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x541 = -1;
	uint64_t x542 = 43259894583206508LLU;
	static volatile uint64_t x543 = 415166889894912736LLU;
	int64_t x544 = 291787LL;
	volatile int32_t t121 = 3187;

    t121 = ((x541>x542)<=(x543+x544));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int32_t x545 = -136639;
	int16_t x546 = INT16_MIN;
	uint16_t x547 = 1355U;
	static uint16_t x548 = UINT16_MAX;
	volatile int32_t t122 = 228;

    t122 = ((x545>x546)<=(x547+x548));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x553 = 1;
	uint64_t x554 = 745237380517506643LLU;
	int64_t x555 = 109LL;
	uint32_t x556 = UINT32_MAX;
	int32_t t123 = 2963;

    t123 = ((x553>x554)<=(x555+x556));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int32_t x557 = INT32_MIN;
	int32_t x559 = INT32_MAX;
	int32_t x560 = INT32_MIN;
	int32_t t124 = 20647827;

    t124 = ((x557>x558)<=(x559+x560));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x561 = -54;
	int16_t x562 = INT16_MIN;
	uint32_t x563 = UINT32_MAX;
	volatile uint8_t x564 = 15U;

    t125 = ((x561>x562)<=(x563+x564));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int32_t x565 = -1736;
	volatile uint8_t x566 = UINT8_MAX;
	int8_t x567 = INT8_MAX;
	int8_t x568 = -14;

    t126 = ((x565>x566)<=(x567+x568));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x569 = 1U;
	static uint32_t x570 = UINT32_MAX;
	uint8_t x571 = UINT8_MAX;
	volatile int32_t t127 = -53165026;

    t127 = ((x569>x570)<=(x571+x572));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x581 = -1LL;
	static int64_t x582 = 142289528781LL;
	volatile int32_t x583 = 12123;
	volatile int32_t t128 = 9257114;

    t128 = ((x581>x582)<=(x583+x584));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint64_t x585 = 35LLU;
	uint32_t x586 = UINT32_MAX;
	int8_t x587 = INT8_MIN;
	uint64_t x588 = 2270432716LLU;
	int32_t t129 = 7783;

    t129 = ((x585>x586)<=(x587+x588));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x589 = -1;
	int16_t x590 = 1;
	uint32_t x591 = 1945401U;
	static int64_t x592 = INT64_MIN;

    t130 = ((x589>x590)<=(x591+x592));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x594 = INT32_MIN;
	static volatile int32_t x595 = -1000933;
	volatile int16_t x596 = INT16_MIN;
	volatile int32_t t131 = 1;

    t131 = ((x593>x594)<=(x595+x596));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x597 = -1;
	volatile int8_t x598 = INT8_MAX;
	int16_t x599 = -1;
	int8_t x600 = INT8_MAX;
	volatile int32_t t132 = 188814;

    t132 = ((x597>x598)<=(x599+x600));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x602 = 10;
	uint16_t x604 = 870U;
	static int32_t t133 = 1334506;

    t133 = ((x601>x602)<=(x603+x604));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x606 = INT32_MIN;
	uint16_t x607 = UINT16_MAX;
	static int16_t x608 = INT16_MIN;
	volatile int32_t t134 = -321;

    t134 = ((x605>x606)<=(x607+x608));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x609 = 632446694;
	int8_t x610 = -1;
	int32_t x611 = INT32_MAX;
	static uint32_t x612 = UINT32_MAX;
	int32_t t135 = 50453;

    t135 = ((x609>x610)<=(x611+x612));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x613 = INT8_MIN;
	int8_t x614 = -2;
	int32_t x615 = INT32_MIN;
	static int64_t x616 = 1LL;
	volatile int32_t t136 = -58896698;

    t136 = ((x613>x614)<=(x615+x616));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x617 = UINT8_MAX;
	int8_t x618 = INT8_MIN;
	static volatile int32_t t137 = -476;

    t137 = ((x617>x618)<=(x619+x620));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x625 = INT8_MIN;
	volatile uint64_t x626 = UINT64_MAX;
	volatile uint8_t x628 = UINT8_MAX;
	volatile int32_t t138 = 60609887;

    t138 = ((x625>x626)<=(x627+x628));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x633 = -7;
	int64_t x634 = 39085904151132LL;
	int8_t x635 = INT8_MIN;
	int16_t x636 = INT16_MAX;
	volatile int32_t t139 = -1835;

    t139 = ((x633>x634)<=(x635+x636));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x637 = INT32_MAX;
	static int64_t x638 = INT64_MAX;
	static int16_t x639 = -1;
	volatile int32_t t140 = 616;

    t140 = ((x637>x638)<=(x639+x640));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int64_t x641 = -60291802943709LL;
	static volatile int16_t x643 = -7;

    t141 = ((x641>x642)<=(x643+x644));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x645 = -426418183LL;
	int16_t x646 = INT16_MIN;
	int16_t x647 = INT16_MIN;
	int32_t t142 = 52058;

    t142 = ((x645>x646)<=(x647+x648));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x649 = -5;
	static int8_t x651 = -1;
	int32_t t143 = -655500851;

    t143 = ((x649>x650)<=(x651+x652));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int8_t x653 = -1;
	int32_t x655 = -49503795;
	int8_t x656 = 20;
	int32_t t144 = -95;

    t144 = ((x653>x654)<=(x655+x656));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x657 = -1LL;
	uint16_t x658 = UINT16_MAX;
	uint32_t x659 = UINT32_MAX;
	int32_t t145 = 70864;

    t145 = ((x657>x658)<=(x659+x660));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x661 = -1;
	int8_t x662 = -2;
	static int16_t x663 = 423;
	static int8_t x664 = -1;
	volatile int32_t t146 = -747124115;

    t146 = ((x661>x662)<=(x663+x664));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x665 = -1LL;
	uint64_t x666 = 380085LLU;
	int32_t t147 = -21677174;

    t147 = ((x665>x666)<=(x667+x668));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x669 = 3U;
	int32_t x670 = -1;
	int8_t x671 = 0;
	int16_t x672 = -1064;
	volatile int32_t t148 = 491;

    t148 = ((x669>x670)<=(x671+x672));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x674 = 66U;
	volatile uint64_t x675 = UINT64_MAX;
	static volatile int32_t t149 = -14189217;

    t149 = ((x673>x674)<=(x675+x676));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x677 = -908039530LL;
	int64_t x678 = INT64_MIN;
	volatile int64_t x679 = -1LL;
	volatile int32_t x680 = INT32_MAX;

    t150 = ((x677>x678)<=(x679+x680));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x682 = 3;
	volatile int16_t x683 = INT16_MIN;
	static int8_t x684 = 13;

    t151 = ((x681>x682)<=(x683+x684));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x686 = INT8_MIN;
	uint32_t x687 = UINT32_MAX;
	static uint8_t x688 = UINT8_MAX;
	int32_t t152 = 79838157;

    t152 = ((x685>x686)<=(x687+x688));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x689 = 9799760;
	volatile int64_t x690 = 59LL;
	int8_t x691 = INT8_MIN;
	int32_t x692 = 5;

    t153 = ((x689>x690)<=(x691+x692));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x693 = INT16_MIN;
	volatile int16_t x694 = INT16_MAX;
	uint64_t x695 = UINT64_MAX;
	static int16_t x696 = -1;
	int32_t t154 = -1;

    t154 = ((x693>x694)<=(x695+x696));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x697 = INT8_MIN;
	uint32_t x698 = 403U;
	int16_t x699 = 2195;

    t155 = ((x697>x698)<=(x699+x700));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint64_t x701 = UINT64_MAX;
	volatile uint32_t x702 = 811742575U;
	uint16_t x703 = UINT16_MAX;
	int32_t t156 = -154170925;

    t156 = ((x701>x702)<=(x703+x704));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x705 = INT8_MIN;
	int32_t x706 = -75804785;
	int32_t t157 = -72;

    t157 = ((x705>x706)<=(x707+x708));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x709 = INT16_MIN;
	int64_t x710 = -895LL;
	static int32_t x712 = INT32_MIN;
	int32_t t158 = -11674;

    t158 = ((x709>x710)<=(x711+x712));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x713 = INT64_MAX;
	static int32_t x714 = INT32_MIN;
	static int8_t x715 = 0;
	uint16_t x716 = 2U;
	volatile int32_t t159 = -37;

    t159 = ((x713>x714)<=(x715+x716));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x717 = 5U;
	static int16_t x718 = -4916;
	uint16_t x719 = 1U;
	uint16_t x720 = UINT16_MAX;
	int32_t t160 = 82034;

    t160 = ((x717>x718)<=(x719+x720));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x721 = -8228;
	uint8_t x722 = UINT8_MAX;
	int8_t x723 = 25;
	int16_t x724 = -404;
	volatile int32_t t161 = 0;

    t161 = ((x721>x722)<=(x723+x724));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x725 = 2058806LLU;
	volatile uint64_t x726 = 41288339153778LLU;
	static int16_t x727 = -30;
	int32_t t162 = -336;

    t162 = ((x725>x726)<=(x727+x728));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x730 = UINT8_MAX;
	static volatile int8_t x731 = -1;
	volatile int8_t x732 = -1;

    t163 = ((x729>x730)<=(x731+x732));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x733 = UINT32_MAX;
	static volatile int32_t x734 = INT32_MIN;
	uint8_t x735 = 26U;
	volatile uint64_t x736 = UINT64_MAX;

    t164 = ((x733>x734)<=(x735+x736));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x742 = INT8_MIN;
	volatile int8_t x743 = INT8_MAX;
	uint16_t x744 = UINT16_MAX;
	int32_t t165 = -31621940;

    t165 = ((x741>x742)<=(x743+x744));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x746 = UINT16_MAX;
	uint32_t x747 = 1279U;
	int32_t x748 = 15;
	static volatile int32_t t166 = -1;

    t166 = ((x745>x746)<=(x747+x748));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile uint16_t x749 = 8U;
	volatile int16_t x750 = 1;
	static int16_t x752 = -1;

    t167 = ((x749>x750)<=(x751+x752));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x757 = UINT32_MAX;
	int16_t x758 = INT16_MIN;
	static int16_t x759 = 1852;
	uint16_t x760 = 246U;

    t168 = ((x757>x758)<=(x759+x760));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x761 = -1LL;
	int16_t x762 = INT16_MIN;
	static int16_t x763 = -1;
	uint16_t x764 = 3022U;
	static volatile int32_t t169 = -181900;

    t169 = ((x761>x762)<=(x763+x764));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x766 = -3773;
	static int64_t x767 = INT64_MIN;
	volatile uint8_t x768 = 60U;
	int32_t t170 = 63;

    t170 = ((x765>x766)<=(x767+x768));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x770 = -744387;
	uint16_t x771 = UINT16_MAX;
	int32_t t171 = 232;

    t171 = ((x769>x770)<=(x771+x772));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x777 = -5331;
	static int32_t x778 = 128610;
	int32_t x779 = INT32_MIN;
	static uint64_t x780 = UINT64_MAX;
	int32_t t172 = -512142;

    t172 = ((x777>x778)<=(x779+x780));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x782 = 7;
	int8_t x783 = INT8_MIN;

    t173 = ((x781>x782)<=(x783+x784));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x786 = INT64_MIN;
	int16_t x787 = INT16_MIN;
	volatile uint16_t x788 = 559U;
	static volatile int32_t t174 = -19;

    t174 = ((x785>x786)<=(x787+x788));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x789 = -17;
	int16_t x790 = INT16_MIN;
	int32_t x792 = -1;

    t175 = ((x789>x790)<=(x791+x792));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x793 = 62229U;
	int8_t x794 = 1;
	volatile uint16_t x795 = 7031U;
	static volatile int32_t t176 = 5522822;

    t176 = ((x793>x794)<=(x795+x796));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x797 = INT32_MIN;
	uint16_t x798 = UINT16_MAX;
	int32_t t177 = -93300853;

    t177 = ((x797>x798)<=(x799+x800));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x801 = INT32_MIN;
	volatile int8_t x802 = -24;
	uint32_t x804 = UINT32_MAX;
	static volatile int32_t t178 = -1613;

    t178 = ((x801>x802)<=(x803+x804));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x805 = INT64_MIN;
	volatile int16_t x806 = -1;
	static int8_t x807 = INT8_MAX;
	int64_t x808 = INT64_MIN;
	int32_t t179 = 323086325;

    t179 = ((x805>x806)<=(x807+x808));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x809 = UINT64_MAX;
	static int16_t x810 = INT16_MIN;
	int16_t x812 = -1;
	volatile int32_t t180 = -1708;

    t180 = ((x809>x810)<=(x811+x812));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x813 = 1654685140U;
	uint64_t x814 = UINT64_MAX;
	int64_t x815 = INT64_MAX;
	static int8_t x816 = -8;
	volatile int32_t t181 = -67718764;

    t181 = ((x813>x814)<=(x815+x816));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint8_t x819 = UINT8_MAX;
	int64_t x820 = -1LL;
	volatile int32_t t182 = -1035834;

    t182 = ((x817>x818)<=(x819+x820));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x826 = -1LL;
	int64_t x827 = 322LL;
	int32_t x828 = INT32_MIN;

    t183 = ((x825>x826)<=(x827+x828));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x829 = INT32_MIN;
	int16_t x830 = INT16_MIN;
	volatile uint16_t x832 = 1U;
	volatile int32_t t184 = -876552677;

    t184 = ((x829>x830)<=(x831+x832));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x833 = 35952LL;
	int16_t x834 = INT16_MIN;
	int16_t x835 = -26;
	int8_t x836 = 2;

    t185 = ((x833>x834)<=(x835+x836));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x837 = UINT16_MAX;
	int64_t x838 = 201673317260348LL;
	volatile int64_t x839 = INT64_MIN;
	uint16_t x840 = UINT16_MAX;
	int32_t t186 = 6085;

    t186 = ((x837>x838)<=(x839+x840));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x841 = INT8_MIN;
	uint64_t x843 = 59799077853320LLU;
	static int8_t x844 = INT8_MIN;
	int32_t t187 = 48762;

    t187 = ((x841>x842)<=(x843+x844));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x845 = 2;
	volatile uint16_t x846 = 1U;
	static int8_t x847 = INT8_MIN;
	int32_t x848 = 1911;

    t188 = ((x845>x846)<=(x847+x848));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int32_t x849 = INT32_MIN;
	uint8_t x850 = 25U;
	static int64_t x851 = -17996964337914LL;
	uint32_t x852 = 349U;

    t189 = ((x849>x850)<=(x851+x852));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x853 = INT8_MIN;
	int32_t x854 = -1;
	volatile uint16_t x855 = UINT16_MAX;
	static uint16_t x856 = 5541U;
	static volatile int32_t t190 = -76224013;

    t190 = ((x853>x854)<=(x855+x856));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x857 = UINT8_MAX;
	static uint8_t x858 = UINT8_MAX;
	uint32_t x859 = 28848236U;

    t191 = ((x857>x858)<=(x859+x860));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x861 = -1;
	uint32_t x862 = UINT32_MAX;
	uint64_t x863 = 18LLU;
	uint8_t x864 = 22U;
	int32_t t192 = -746;

    t192 = ((x861>x862)<=(x863+x864));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x865 = INT8_MIN;
	uint16_t x867 = UINT16_MAX;
	uint8_t x868 = 9U;
	volatile int32_t t193 = -65920263;

    t193 = ((x865>x866)<=(x867+x868));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x870 = INT64_MIN;
	volatile int64_t x871 = -1LL;
	int8_t x872 = INT8_MIN;
	int32_t t194 = 89098167;

    t194 = ((x869>x870)<=(x871+x872));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x874 = 1765732LLU;
	uint16_t x876 = 3U;

    t195 = ((x873>x874)<=(x875+x876));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x878 = 43U;

    t196 = ((x877>x878)<=(x879+x880));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x881 = INT32_MIN;
	int64_t x882 = -1852LL;
	volatile int32_t t197 = 150255795;

    t197 = ((x881>x882)<=(x883+x884));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x885 = -13;

    t198 = ((x885>x886)<=(x887+x888));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x889 = 0U;
	int16_t x890 = INT16_MIN;
	uint64_t x891 = 2292845103383320968LLU;
	int8_t x892 = -1;
	volatile int32_t t199 = -11715251;

    t199 = ((x889>x890)<=(x891+x892));

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

