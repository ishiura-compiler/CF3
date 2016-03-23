
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

static uint32_t x1 = 2U;
volatile int32_t t2 = 22;
int32_t x17 = -1;
int32_t t3 = -156;
int64_t x24 = INT64_MIN;
int64_t x27 = -4817808LL;
int16_t x28 = 877;
int16_t x33 = INT16_MIN;
int16_t x45 = INT16_MAX;
static int16_t x48 = INT16_MIN;
static volatile uint64_t t10 = 30LLU;
static int64_t x69 = 8LL;
uint8_t x81 = 2U;
static uint64_t t16 = 8LLU;
static uint64_t x96 = 1874817108988791723LLU;
int32_t x100 = INT32_MAX;
int16_t x101 = INT16_MIN;
volatile uint8_t x104 = UINT8_MAX;
static volatile uint16_t x109 = UINT16_MAX;
uint32_t x111 = 226553U;
static int16_t x127 = -1;
uint8_t x128 = 6U;
volatile int8_t x137 = -2;
static volatile int32_t x139 = -24721;
int32_t x145 = INT32_MIN;
static int8_t x155 = INT8_MIN;
static int16_t x158 = -1;
uint8_t x163 = 25U;
static int16_t x166 = -1;
volatile uint8_t x170 = 33U;
int16_t x177 = INT16_MIN;
int16_t x178 = -5;
static int8_t x179 = 0;
int8_t x182 = INT8_MAX;
int8_t x183 = -19;
uint8_t x190 = 4U;
volatile int16_t x194 = INT16_MIN;
static int16_t x203 = INT16_MIN;
volatile int64_t t39 = 247LL;
static int16_t x215 = 570;
volatile int32_t x228 = INT32_MIN;
uint64_t t46 = 113302528992856LLU;
static int8_t x241 = INT8_MAX;
uint8_t x251 = UINT8_MAX;
volatile int32_t t50 = -3504686;
int8_t x258 = -47;
volatile int16_t x263 = -3840;
int16_t x266 = INT16_MIN;
int8_t x267 = -1;
volatile int32_t x268 = INT32_MIN;
volatile int64_t t54 = -5160733628713LL;
uint64_t x271 = 0LLU;
uint8_t x273 = 1U;
static int8_t x277 = INT8_MAX;
static volatile uint32_t x285 = UINT32_MAX;
volatile int8_t x286 = -1;
int64_t x288 = 509912200LL;
uint8_t x289 = UINT8_MAX;
volatile int8_t x297 = -1;
int32_t x299 = -1550220;
int32_t x300 = -7;
volatile int32_t t62 = 41301915;
volatile int32_t x301 = 0;
static volatile int32_t t64 = 422914;
int8_t x324 = INT8_MIN;
static uint64_t x333 = 295857261880982052LLU;
static int32_t x335 = 2;
volatile int64_t t69 = 1LL;
static uint64_t x354 = UINT64_MAX;
volatile uint64_t t73 = 31334LLU;
int8_t x362 = -1;
uint64_t x366 = 24LLU;
int16_t x367 = -53;
volatile uint64_t t76 = 101789236LLU;
int8_t x369 = -3;
static int64_t x370 = -1LL;
uint64_t x375 = 4149LLU;
volatile uint64_t t78 = 1337274104LLU;
static uint8_t x379 = UINT8_MAX;
volatile int64_t t80 = -111LL;
uint64_t x389 = 5372389186182LLU;
static int64_t x390 = INT64_MAX;
int8_t x392 = INT8_MAX;
int16_t x396 = 121;
int64_t x410 = 3LL;
int16_t x411 = -39;
volatile int32_t x414 = 1;
static int32_t x418 = -1;
int8_t x420 = INT8_MIN;
static uint32_t x442 = 50515U;
volatile int8_t x443 = INT8_MAX;
uint64_t x451 = UINT64_MAX;
int64_t x456 = -1215312513742211LL;
static int32_t x458 = -3500;
int64_t x466 = -1LL;
static uint8_t x470 = 23U;
int8_t x471 = INT8_MAX;
int16_t x479 = -2;
static int32_t x483 = INT32_MIN;
uint32_t t104 = 3U;
uint16_t x492 = 1U;
uint32_t t105 = 24036U;
uint64_t x493 = 2LLU;
static int16_t x496 = -222;
static uint64_t x509 = UINT64_MAX;
int32_t x516 = INT32_MIN;
uint8_t x527 = 10U;
static int8_t x529 = 10;
volatile int16_t x539 = -11;
static int8_t x547 = INT8_MIN;
int8_t x563 = INT8_MAX;
uint8_t x571 = 3U;
int32_t x573 = 90436;
int32_t x577 = 2357;
uint64_t x585 = 1LLU;
uint64_t t123 = 26170356116LLU;
int32_t x589 = INT32_MIN;
static volatile int32_t x597 = INT32_MAX;
uint8_t x599 = 11U;
volatile uint64_t t126 = 20510888216LLU;
int8_t x609 = INT8_MIN;
int32_t x610 = 1;
static uint16_t x615 = 2U;
static int64_t x617 = -1LL;
int16_t x619 = 304;
volatile uint64_t t129 = 3857530680418LLU;
static volatile int64_t x631 = -15LL;
static volatile int8_t x632 = INT8_MAX;
uint32_t x639 = 76787U;
int32_t x640 = INT32_MAX;
volatile uint32_t t132 = 2538861U;
int8_t x645 = INT8_MAX;
volatile int8_t x649 = INT8_MIN;
int32_t t135 = 61510015;
int16_t x653 = 0;
uint16_t x654 = 0U;
static volatile uint64_t x656 = 755LLU;
int64_t x657 = -1LL;
int64_t x660 = INT64_MIN;
uint16_t x678 = 117U;
volatile int64_t t140 = -695570416631855130LL;
int8_t x691 = INT8_MAX;
volatile uint16_t x695 = UINT16_MAX;
volatile int16_t x699 = INT16_MIN;
int64_t t144 = -5828893LL;
uint32_t x703 = UINT32_MAX;
int8_t x704 = INT8_MIN;
static volatile uint32_t t145 = 0U;
volatile int32_t t147 = 2703;
volatile int64_t t149 = 21195LL;
volatile int64_t x725 = INT64_MAX;
int16_t x744 = -11;
static int64_t x752 = INT64_MIN;
int64_t t155 = 281LL;
int16_t x757 = -1;
int16_t x763 = -6;
volatile int64_t t160 = -5436702423LL;
int16_t x775 = INT16_MAX;
static int64_t x796 = INT64_MAX;
uint16_t x798 = UINT16_MAX;
volatile uint32_t t167 = 129U;
int32_t x805 = -1;
int8_t x806 = INT8_MAX;
int32_t x807 = 6;
static int32_t t168 = -14;
volatile int32_t x829 = INT32_MIN;
static uint32_t x831 = 3307922U;
volatile uint64_t t171 = 25551957630919902LLU;
static volatile int16_t x850 = -1841;
int8_t x866 = INT8_MAX;
uint32_t x867 = UINT32_MAX;
uint32_t x868 = 1U;
int32_t x873 = INT32_MIN;
uint64_t x886 = 11LLU;
int32_t x890 = 229473896;
static volatile int64_t t181 = 1530531296573347018LL;
static volatile int32_t x900 = -1;
static uint64_t t182 = 131316088592622LLU;
int16_t x904 = -1;
int32_t x910 = INT32_MIN;
int32_t x912 = -1;
int32_t x913 = INT32_MIN;
volatile int32_t x916 = INT32_MAX;
static uint64_t x919 = 8304904554LLU;
int8_t x922 = INT8_MIN;
int32_t x925 = INT32_MAX;
int8_t x930 = 2;
uint64_t t190 = 2373637593718LLU;
int32_t x933 = -1;
static uint64_t x934 = 652LLU;
int16_t x940 = 89;
static int16_t x942 = -5;
static volatile int32_t x946 = INT32_MIN;
int64_t t195 = -17273641615194LL;
static uint64_t x955 = 464274500428990LLU;
int32_t x958 = 19917194;
volatile int64_t t198 = 43LL;
uint16_t x974 = 3U;


void f0(void) {
    	uint8_t x2 = 64U;
	volatile uint64_t x3 = 1145102013934LLU;
	uint8_t x4 = UINT8_MAX;
	volatile uint64_t t0 = 6607157755220LLU;

    t0 = ((x1/(x2-x3))&x4);

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = -1LL;
	volatile int32_t x6 = INT32_MIN;
	int32_t x7 = -1;
	static int32_t x8 = INT32_MIN;
	int64_t t1 = -4003704404223581LL;

    t1 = ((x5/(x6-x7))&x8);

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x13 = 222;
	uint16_t x14 = 2U;
	uint16_t x15 = 6U;
	volatile uint16_t x16 = UINT16_MAX;

    t2 = ((x13/(x14-x15))&x16);

    if (t2 != 65481) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x18 = 0;
	int8_t x19 = INT8_MAX;
	volatile int8_t x20 = 26;

    t3 = ((x17/(x18-x19))&x20);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x21 = INT32_MIN;
	int8_t x22 = -1;
	static int16_t x23 = INT16_MIN;
	int64_t t4 = INT64_MIN;

    t4 = ((x21/(x22-x23))&x24);

    if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x25 = 12114U;
	uint64_t x26 = UINT64_MAX;
	uint64_t t5 = 14506402418500LLU;

    t5 = ((x25/(x26-x27))&x28);

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x34 = 34;
	int16_t x35 = INT16_MIN;
	volatile int8_t x36 = -6;
	int32_t t6 = 18848;

    t6 = ((x33/(x34-x35))&x36);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x37 = -1;
	volatile uint8_t x38 = UINT8_MAX;
	uint8_t x39 = 116U;
	uint8_t x40 = 49U;
	volatile int32_t t7 = 3756;

    t7 = ((x37/(x38-x39))&x40);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x41 = 15U;
	int64_t x42 = INT64_MIN;
	int8_t x43 = INT8_MIN;
	uint64_t x44 = 656LLU;
	uint64_t t8 = 536LLU;

    t8 = ((x41/(x42-x43))&x44);

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x46 = INT32_MIN;
	volatile int64_t x47 = INT64_MIN;
	static volatile int64_t t9 = -70624394LL;

    t9 = ((x45/(x46-x47))&x48);

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint8_t x49 = UINT8_MAX;
	volatile uint32_t x50 = 6U;
	uint64_t x51 = 59432614LLU;
	uint8_t x52 = 1U;

    t10 = ((x49/(x50-x51))&x52);

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x61 = UINT32_MAX;
	int8_t x62 = INT8_MIN;
	uint64_t x63 = 1205444110400LLU;
	volatile int64_t x64 = INT64_MIN;
	static uint64_t t11 = 47169324653277LLU;

    t11 = ((x61/(x62-x63))&x64);

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int32_t x65 = INT32_MAX;
	uint32_t x66 = 1653617721U;
	int8_t x67 = INT8_MIN;
	static uint32_t x68 = 1U;
	volatile uint32_t t12 = 100622354U;

    t12 = ((x65/(x66-x67))&x68);

    if (t12 != 1U) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x70 = 20979456013475492LL;
	volatile int8_t x71 = 5;
	int64_t x72 = INT64_MAX;
	volatile int64_t t13 = -132774995LL;

    t13 = ((x69/(x70-x71))&x72);

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x73 = UINT16_MAX;
	int8_t x74 = -1;
	int64_t x75 = INT64_MIN;
	int64_t x76 = INT64_MIN;
	volatile int64_t t14 = -1261LL;

    t14 = ((x73/(x74-x75))&x76);

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x82 = INT16_MAX;
	int64_t x83 = 266921495756LL;
	int32_t x84 = -437118827;
	int64_t t15 = 1150756945205LL;

    t15 = ((x81/(x82-x83))&x84);

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x85 = -4;
	volatile uint64_t x86 = 336LLU;
	static uint8_t x87 = UINT8_MAX;
	int64_t x88 = INT64_MAX;

    t16 = ((x85/(x86-x87))&x88);

    if (t16 != 227737581156908044LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x89 = INT32_MIN;
	static int32_t x90 = -1;
	volatile uint16_t x91 = UINT16_MAX;
	volatile int64_t x92 = INT64_MAX;
	volatile int64_t t17 = 13976614LL;

    t17 = ((x89/(x90-x91))&x92);

    if (t17 != 32768LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x93 = 369U;
	static int32_t x94 = INT32_MIN;
	int16_t x95 = INT16_MIN;
	volatile uint64_t t18 = 201126LLU;

    t18 = ((x93/(x94-x95))&x96);

    if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x97 = INT8_MAX;
	int16_t x98 = -3;
	uint16_t x99 = UINT16_MAX;
	static int32_t t19 = 825662;

    t19 = ((x97/(x98-x99))&x100);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x102 = -3;
	int64_t x103 = 85349792824808656LL;
	int64_t t20 = 7279878LL;

    t20 = ((x101/(x102-x103))&x104);

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x105 = INT16_MIN;
	static int8_t x106 = INT8_MIN;
	int64_t x107 = 23LL;
	int8_t x108 = 0;
	int64_t t21 = 80181576355LL;

    t21 = ((x105/(x106-x107))&x108);

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x110 = 462334;
	int32_t x112 = 61;
	volatile uint32_t t22 = 298U;

    t22 = ((x109/(x110-x111))&x112);

    if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x113 = UINT32_MAX;
	volatile int16_t x114 = INT16_MAX;
	static volatile uint8_t x115 = 26U;
	static uint16_t x116 = UINT16_MAX;
	uint32_t t23 = 1726269803U;

    t23 = ((x113/(x114-x115))&x116);

    if (t23 != 108U) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x117 = INT32_MAX;
	static int8_t x118 = INT8_MIN;
	int8_t x119 = -1;
	uint16_t x120 = UINT16_MAX;
	volatile int32_t t24 = 0;

    t24 = ((x117/(x118-x119))&x120);

    if (t24 != 64504) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x121 = INT32_MIN;
	uint32_t x122 = UINT32_MAX;
	int64_t x123 = 150079LL;
	uint16_t x124 = 30U;
	volatile int64_t t25 = 133382LL;

    t25 = ((x121/(x122-x123))&x124);

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x125 = 57U;
	volatile int8_t x126 = INT8_MAX;
	int32_t t26 = -3720496;

    t26 = ((x125/(x126-x127))&x128);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x133 = INT32_MIN;
	int16_t x134 = INT16_MIN;
	uint64_t x135 = UINT64_MAX;
	static int16_t x136 = INT16_MIN;
	uint64_t t27 = 12560950768268535LLU;

    t27 = ((x133/(x134-x135))&x136);

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x138 = 127U;
	int64_t x140 = -677498528292LL;
	static int64_t t28 = 30LL;

    t28 = ((x137/(x138-x139))&x140);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x146 = INT16_MAX;
	static int64_t x147 = 28770742877414892LL;
	static uint8_t x148 = 0U;
	volatile int64_t t29 = 15872942523LL;

    t29 = ((x145/(x146-x147))&x148);

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x153 = INT64_MIN;
	volatile int64_t x154 = -332938751692446LL;
	int64_t x156 = -12769831285426867LL;
	static int64_t t30 = 32200704LL;

    t30 = ((x153/(x154-x155))&x156);

    if (t30 != 25604LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x157 = 204;
	uint16_t x159 = UINT16_MAX;
	int64_t x160 = -19LL;
	volatile int64_t t31 = 8292854647563LL;

    t31 = ((x157/(x158-x159))&x160);

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x161 = INT64_MAX;
	static int8_t x162 = INT8_MAX;
	static int64_t x164 = INT64_MIN;
	volatile int64_t t32 = 930290110109969LL;

    t32 = ((x161/(x162-x163))&x164);

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int8_t x165 = -5;
	int8_t x167 = 1;
	int8_t x168 = INT8_MIN;
	static volatile int32_t t33 = -121222;

    t33 = ((x165/(x166-x167))&x168);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x169 = INT16_MIN;
	volatile int32_t x171 = INT32_MAX;
	int32_t x172 = INT32_MIN;
	volatile int32_t t34 = 917937073;

    t34 = ((x169/(x170-x171))&x172);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x180 = 20204U;
	volatile int32_t t35 = -18115;

    t35 = ((x177/(x178-x179))&x180);

    if (t35 != 2184) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x181 = INT64_MAX;
	volatile uint32_t x184 = 11266U;
	volatile int64_t t36 = -33519221242LL;

    t36 = ((x181/(x182-x183))&x184);

    if (t36 != 1026LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x189 = -2422;
	volatile int32_t x191 = INT32_MAX;
	static int8_t x192 = INT8_MIN;
	volatile int32_t t37 = 0;

    t37 = ((x189/(x190-x191))&x192);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x193 = INT64_MIN;
	volatile uint8_t x195 = 84U;
	static int16_t x196 = -1;
	volatile int64_t t38 = 41422406591591LL;

    t38 = ((x193/(x194-x195))&x196);

    if (t38 != 280755267163483LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x201 = 1;
	static int64_t x202 = INT64_MIN;
	static int32_t x204 = INT32_MIN;

    t39 = ((x201/(x202-x203))&x204);

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint16_t x209 = 136U;
	int16_t x210 = 7;
	static uint64_t x211 = 104LLU;
	int64_t x212 = INT64_MIN;
	uint64_t t40 = 2007803904349002551LLU;

    t40 = ((x209/(x210-x211))&x212);

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x213 = INT8_MAX;
	static int32_t x214 = -1220;
	volatile uint32_t x216 = 1064311155U;
	uint32_t t41 = 3021108U;

    t41 = ((x213/(x214-x215))&x216);

    if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint32_t x217 = 18286U;
	static int64_t x218 = -18196671090LL;
	uint64_t x219 = UINT64_MAX;
	volatile int32_t x220 = -1;
	uint64_t t42 = 1116972373709647LLU;

    t42 = ((x217/(x218-x219))&x220);

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x221 = INT64_MAX;
	int32_t x222 = INT32_MIN;
	static int64_t x223 = -1LL;
	uint64_t x224 = UINT64_MAX;
	uint64_t t43 = 1681606326692LLU;

    t43 = ((x221/(x222-x223))&x224);

    if (t43 != 18446744069414584318LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x225 = INT8_MIN;
	int8_t x226 = INT8_MAX;
	int32_t x227 = -1;
	volatile int32_t t44 = INT32_MIN;

    t44 = ((x225/(x226-x227))&x228);

    if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile uint32_t x229 = UINT32_MAX;
	int64_t x230 = 3689136LL;
	static int32_t x231 = INT32_MIN;
	uint64_t x232 = 462LLU;
	static uint64_t t45 = 2290644302994807LLU;

    t45 = ((x229/(x230-x231))&x232);

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x233 = 6U;
	uint64_t x234 = UINT64_MAX;
	int32_t x235 = 802659192;
	int32_t x236 = 1928177;

    t46 = ((x233/(x234-x235))&x236);

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x237 = INT16_MAX;
	volatile uint8_t x238 = 12U;
	uint8_t x239 = UINT8_MAX;
	int8_t x240 = 0;
	volatile int32_t t47 = -207;

    t47 = ((x237/(x238-x239))&x240);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int32_t x242 = INT32_MIN;
	int64_t x243 = 1447376LL;
	int64_t x244 = 2557926738LL;
	volatile int64_t t48 = -11179434760LL;

    t48 = ((x241/(x242-x243))&x244);

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x245 = 47U;
	int64_t x246 = -1LL;
	static int32_t x247 = -230157163;
	int32_t x248 = INT32_MIN;
	static volatile int64_t t49 = 1015941LL;

    t49 = ((x245/(x246-x247))&x248);

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint8_t x249 = 0U;
	int16_t x250 = -11186;
	volatile int8_t x252 = INT8_MAX;

    t50 = ((x249/(x250-x251))&x252);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x253 = -1;
	volatile uint64_t x254 = 179LLU;
	int8_t x255 = INT8_MAX;
	volatile int64_t x256 = -220665LL;
	volatile uint64_t t51 = 324848052LLU;

    t51 = ((x253/(x254-x255))&x256);

    if (t51 != 354745078340419588LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int64_t x257 = INT64_MIN;
	volatile int32_t x259 = INT32_MIN;
	int32_t x260 = INT32_MAX;
	volatile int64_t t52 = -847LL;

    t52 = ((x257/(x258-x259))&x260);

    if (t52 != 2147483554LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x261 = 2U;
	int8_t x262 = 5;
	uint64_t x264 = 6825LLU;
	uint64_t t53 = 3LLU;

    t53 = ((x261/(x262-x263))&x264);

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x265 = -1LL;

    t54 = ((x265/(x266-x267))&x268);

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x269 = -33463902;
	uint16_t x270 = 22500U;
	int16_t x272 = INT16_MAX;
	uint64_t t55 = 255994LLU;

    t55 = ((x269/(x270-x271))&x272);

    if (t55 != 25909LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x274 = 12227;
	static int8_t x275 = -1;
	uint32_t x276 = 726546797U;
	uint32_t t56 = 1U;

    t56 = ((x273/(x274-x275))&x276);

    if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x278 = -1LL;
	uint64_t x279 = 8LLU;
	int16_t x280 = 174;
	volatile uint64_t t57 = 51197LLU;

    t57 = ((x277/(x278-x279))&x280);

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x281 = INT64_MIN;
	volatile int8_t x282 = INT8_MIN;
	static int32_t x283 = -1;
	volatile int16_t x284 = INT16_MIN;
	volatile int64_t t58 = -29929617517007541LL;

    t58 = ((x281/(x282-x283))&x284);

    if (t58 != 72624976668131328LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x287 = 8682U;
	volatile int64_t t59 = 8467569691LL;

    t59 = ((x285/(x286-x287))&x288);

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x290 = -1;
	uint16_t x291 = 131U;
	int8_t x292 = INT8_MIN;
	volatile int32_t t60 = 75847;

    t60 = ((x289/(x290-x291))&x292);

    if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint8_t x293 = 3U;
	int8_t x294 = INT8_MIN;
	static volatile int16_t x295 = INT16_MAX;
	int8_t x296 = 2;
	static volatile int32_t t61 = -693665;

    t61 = ((x293/(x294-x295))&x296);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x298 = INT16_MIN;

    t62 = ((x297/(x298-x299))&x300);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x302 = INT64_MIN;
	uint64_t x303 = 2662003753515LLU;
	uint64_t x304 = 118092869974LLU;
	volatile uint64_t t63 = 8995820444312410544LLU;

    t63 = ((x301/(x302-x303))&x304);

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x305 = INT16_MIN;
	volatile int16_t x306 = INT16_MIN;
	volatile int32_t x307 = -41624547;
	int16_t x308 = 1269;

    t64 = ((x305/(x306-x307))&x308);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x313 = 84424596961235LLU;
	uint16_t x314 = 995U;
	volatile int32_t x315 = 14654;
	int32_t x316 = INT32_MIN;
	static volatile uint64_t t65 = 2943613151724684568LLU;

    t65 = ((x313/(x314-x315))&x316);

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x321 = -245280075;
	static int8_t x322 = INT8_MIN;
	static uint16_t x323 = UINT16_MAX;
	int32_t t66 = 223562966;

    t66 = ((x321/(x322-x323))&x324);

    if (t66 != 3712) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x325 = INT8_MIN;
	static int8_t x326 = INT8_MAX;
	int8_t x327 = INT8_MIN;
	uint32_t x328 = 0U;
	static volatile uint32_t t67 = 636692U;

    t67 = ((x325/(x326-x327))&x328);

    if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x334 = INT8_MIN;
	static uint32_t x336 = 14543U;
	volatile uint64_t t68 = 2570145640LLU;

    t68 = ((x333/(x334-x335))&x336);

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x337 = INT64_MAX;
	uint32_t x338 = UINT32_MAX;
	int16_t x339 = INT16_MAX;
	int32_t x340 = INT32_MIN;

    t69 = ((x337/(x338-x339))&x340);

    if (t69 != 2147483648LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x341 = INT8_MIN;
	volatile uint64_t x342 = UINT64_MAX;
	static int32_t x343 = INT32_MIN;
	uint16_t x344 = 48U;
	static volatile uint64_t t70 = 233LLU;

    t70 = ((x341/(x342-x343))&x344);

    if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint64_t x345 = 323244003LLU;
	uint64_t x346 = 756818879089652422LLU;
	volatile uint32_t x347 = 11U;
	int8_t x348 = INT8_MIN;
	volatile uint64_t t71 = 72689442958LLU;

    t71 = ((x345/(x346-x347))&x348);

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x349 = INT64_MIN;
	static int64_t x350 = INT64_MIN;
	int16_t x351 = INT16_MIN;
	uint8_t x352 = UINT8_MAX;
	int64_t t72 = -389247243562414LL;

    t72 = ((x349/(x350-x351))&x352);

    if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x353 = 20U;
	int16_t x355 = INT16_MAX;
	volatile int16_t x356 = INT16_MIN;

    t73 = ((x353/(x354-x355))&x356);

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x357 = 521;
	uint32_t x358 = 20379899U;
	int32_t x359 = INT32_MAX;
	static volatile int32_t x360 = INT32_MIN;
	volatile uint32_t t74 = 448395646U;

    t74 = ((x357/(x358-x359))&x360);

    if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x361 = INT32_MAX;
	int64_t x363 = INT64_MAX;
	volatile int32_t x364 = INT32_MIN;
	volatile int64_t t75 = -4105079996LL;

    t75 = ((x361/(x362-x363))&x364);

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int8_t x365 = INT8_MIN;
	uint64_t x368 = UINT64_MAX;

    t76 = ((x365/(x366-x367))&x368);

    if (t76 != 239568104853370798LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint16_t x371 = UINT16_MAX;
	static volatile uint64_t x372 = UINT64_MAX;
	volatile uint64_t t77 = 6544491247LLU;

    t77 = ((x369/(x370-x371))&x372);

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x373 = -1;
	uint32_t x374 = UINT32_MAX;
	static int32_t x376 = INT32_MAX;

    t78 = ((x373/(x374-x375))&x376);

    if (t78 != 4150LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x377 = INT32_MIN;
	uint16_t x378 = 468U;
	int32_t x380 = INT32_MIN;
	volatile int32_t t79 = INT32_MIN;

    t79 = ((x377/(x378-x379))&x380);

    if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x381 = 3568U;
	int32_t x382 = 5;
	int64_t x383 = 27698328981LL;
	uint16_t x384 = 931U;

    t80 = ((x381/(x382-x383))&x384);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x385 = -437584936058LL;
	static int32_t x386 = INT32_MIN;
	int16_t x387 = INT16_MIN;
	uint16_t x388 = UINT16_MAX;
	volatile int64_t t81 = 1151887LL;

    t81 = ((x385/(x386-x387))&x388);

    if (t81 != 203LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint8_t x391 = 27U;
	volatile uint64_t t82 = 25292578LLU;

    t82 = ((x389/(x390-x391))&x392);

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x393 = 1594335298LL;
	volatile uint32_t x394 = 1613U;
	volatile int32_t x395 = INT32_MAX;
	volatile int64_t t83 = 13152180LL;

    t83 = ((x393/(x394-x395))&x396);

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x401 = -244;
	int8_t x402 = -1;
	int8_t x403 = 1;
	int32_t x404 = 76966950;
	int32_t t84 = -4110;

    t84 = ((x401/(x402-x403))&x404);

    if (t84 != 34) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x405 = -29;
	volatile int16_t x406 = -1;
	volatile int64_t x407 = INT64_MAX;
	int8_t x408 = -1;
	int64_t t85 = 136528344LL;

    t85 = ((x405/(x406-x407))&x408);

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x409 = 24U;
	uint32_t x412 = UINT32_MAX;
	volatile int64_t t86 = 2730173021LL;

    t86 = ((x409/(x410-x411))&x412);

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x413 = 20U;
	int16_t x415 = 54;
	static int16_t x416 = -1463;
	static volatile int32_t t87 = 63;

    t87 = ((x413/(x414-x415))&x416);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x417 = INT64_MIN;
	static int64_t x419 = INT64_MIN;
	int64_t t88 = 1792700543793526440LL;

    t88 = ((x417/(x418-x419))&x420);

    if (t88 != -128LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x421 = INT16_MIN;
	int8_t x422 = INT8_MIN;
	uint8_t x423 = UINT8_MAX;
	uint64_t x424 = 1313116LLU;
	volatile uint64_t t89 = 16379676436LLU;

    t89 = ((x421/(x422-x423))&x424);

    if (t89 != 84LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint8_t x425 = 7U;
	int16_t x426 = -110;
	uint16_t x427 = 318U;
	int32_t x428 = 338793;
	volatile int32_t t90 = -235524914;

    t90 = ((x425/(x426-x427))&x428);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x429 = 0;
	int8_t x430 = INT8_MIN;
	static int16_t x431 = INT16_MIN;
	uint64_t x432 = 83859206LLU;
	volatile uint64_t t91 = 1014850350175LLU;

    t91 = ((x429/(x430-x431))&x432);

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x433 = 1U;
	static volatile int32_t x434 = -1;
	int16_t x435 = INT16_MIN;
	uint8_t x436 = 117U;
	volatile int32_t t92 = 8070497;

    t92 = ((x433/(x434-x435))&x436);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x441 = INT32_MIN;
	int64_t x444 = -343690765558395109LL;
	static volatile int64_t t93 = 2267729900LL;

    t93 = ((x441/(x442-x443))&x444);

    if (t93 != 1562LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint32_t x445 = 194654812U;
	volatile int16_t x446 = INT16_MIN;
	static uint64_t x447 = 79LLU;
	uint16_t x448 = 451U;
	uint64_t t94 = 611840412283LLU;

    t94 = ((x445/(x446-x447))&x448);

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x449 = -1LL;
	static uint32_t x450 = 6U;
	int64_t x452 = INT64_MIN;
	volatile uint64_t t95 = 259542LLU;

    t95 = ((x449/(x450-x451))&x452);

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x453 = -1;
	uint32_t x454 = UINT32_MAX;
	int16_t x455 = 160;
	static volatile int64_t t96 = 11451LL;

    t96 = ((x453/(x454-x455))&x456);

    if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint16_t x457 = 11326U;
	volatile uint64_t x459 = 20LLU;
	uint64_t x460 = 478LLU;
	uint64_t t97 = 6766LLU;

    t97 = ((x457/(x458-x459))&x460);

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int64_t x461 = INT64_MAX;
	int8_t x462 = -1;
	int64_t x463 = -204490100199LL;
	int64_t x464 = INT64_MIN;
	int64_t t98 = -41080280302730LL;

    t98 = ((x461/(x462-x463))&x464);

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x465 = INT32_MIN;
	volatile int64_t x467 = INT64_MAX;
	static int16_t x468 = -4743;
	int64_t t99 = 281041LL;

    t99 = ((x465/(x466-x467))&x468);

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x469 = -4;
	int8_t x472 = -1;
	int32_t t100 = -215869;

    t100 = ((x469/(x470-x471))&x472);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x473 = INT8_MAX;
	int16_t x474 = INT16_MIN;
	uint16_t x475 = UINT16_MAX;
	uint16_t x476 = 3U;
	volatile int32_t t101 = -140787;

    t101 = ((x473/(x474-x475))&x476);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile uint64_t x477 = 3282448296303580016LLU;
	static volatile int8_t x478 = -1;
	int8_t x480 = 1;
	uint64_t t102 = 6070473206957856574LLU;

    t102 = ((x477/(x478-x479))&x480);

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x481 = INT64_MIN;
	int64_t x482 = INT64_MIN;
	volatile uint16_t x484 = 13U;
	volatile int64_t t103 = -28641201785662LL;

    t103 = ((x481/(x482-x483))&x484);

    if (t103 != 1LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x485 = INT16_MIN;
	int16_t x486 = INT16_MIN;
	volatile uint16_t x487 = 2184U;
	static uint32_t x488 = 1125512837U;

    t104 = ((x485/(x486-x487))&x488);

    if (t104 != 0U) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint32_t x489 = 1877458682U;
	static int32_t x490 = -1;
	uint32_t x491 = 836302U;

    t105 = ((x489/(x490-x491))&x492);

    if (t105 != 0U) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint64_t x494 = 1544829056517LLU;
	volatile int8_t x495 = -1;
	uint64_t t106 = 2051770486LLU;

    t106 = ((x493/(x494-x495))&x496);

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint8_t x505 = 31U;
	int32_t x506 = INT32_MIN;
	volatile int8_t x507 = INT8_MIN;
	int16_t x508 = INT16_MAX;
	static int32_t t107 = 1;

    t107 = ((x505/(x506-x507))&x508);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x510 = 422694156474LLU;
	volatile uint8_t x511 = 94U;
	int8_t x512 = INT8_MAX;
	static volatile uint64_t t108 = 52983886LLU;

    t108 = ((x509/(x510-x511))&x512);

    if (t108 != 45LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x513 = -1;
	static volatile int32_t x514 = INT32_MIN;
	int16_t x515 = INT16_MIN;
	volatile int32_t t109 = 2650;

    t109 = ((x513/(x514-x515))&x516);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x517 = -1;
	int32_t x518 = INT32_MAX;
	volatile int64_t x519 = -1LL;
	volatile int32_t x520 = INT32_MAX;
	static volatile int64_t t110 = -6LL;

    t110 = ((x517/(x518-x519))&x520);

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x521 = -31;
	int8_t x522 = -4;
	volatile int32_t x523 = INT32_MIN;
	static uint32_t x524 = 5706U;
	uint32_t t111 = 1673882U;

    t111 = ((x521/(x522-x523))&x524);

    if (t111 != 0U) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x525 = INT8_MIN;
	uint16_t x526 = 5U;
	volatile int8_t x528 = 29;
	volatile int32_t t112 = -499659;

    t112 = ((x525/(x526-x527))&x528);

    if (t112 != 25) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint32_t x530 = 10793U;
	int32_t x531 = INT32_MIN;
	uint16_t x532 = 3U;
	uint32_t t113 = 234345U;

    t113 = ((x529/(x530-x531))&x532);

    if (t113 != 0U) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint32_t x533 = 97U;
	int16_t x534 = INT16_MIN;
	static uint32_t x535 = 3U;
	volatile int32_t x536 = -50493;
	volatile uint32_t t114 = 1U;

    t114 = ((x533/(x534-x535))&x536);

    if (t114 != 0U) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x537 = -1;
	uint16_t x538 = 3U;
	volatile uint32_t x540 = 1124194850U;
	static uint32_t t115 = 4707713U;

    t115 = ((x537/(x538-x539))&x540);

    if (t115 != 0U) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x545 = -10698754318LL;
	int32_t x546 = 12793;
	int8_t x548 = INT8_MIN;
	int64_t t116 = 3122303871978854355LL;

    t116 = ((x545/(x546-x547))&x548);

    if (t116 != -828032LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint8_t x549 = UINT8_MAX;
	static uint32_t x550 = 0U;
	static int8_t x551 = 58;
	volatile int16_t x552 = INT16_MIN;
	volatile uint32_t t117 = 501671344U;

    t117 = ((x549/(x550-x551))&x552);

    if (t117 != 0U) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x561 = INT32_MAX;
	static int16_t x562 = INT16_MIN;
	int64_t x564 = -1LL;
	volatile int64_t t118 = -1918LL;

    t118 = ((x561/(x562-x563))&x564);

    if (t118 != -65282LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint16_t x569 = 110U;
	static volatile uint32_t x570 = 175718U;
	static int64_t x572 = 46575627098209LL;
	volatile int64_t t119 = 3177413255564125999LL;

    t119 = ((x569/(x570-x571))&x572);

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x574 = -573;
	int16_t x575 = INT16_MIN;
	int16_t x576 = INT16_MAX;
	volatile int32_t t120 = -5131;

    t120 = ((x573/(x574-x575))&x576);

    if (t120 != 2) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x578 = -1;
	int32_t x579 = INT32_MIN;
	static int32_t x580 = -8;
	int32_t t121 = -6;

    t121 = ((x577/(x578-x579))&x580);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x581 = -3683948595958743472LL;
	int8_t x582 = INT8_MIN;
	uint8_t x583 = 52U;
	static volatile int32_t x584 = INT32_MIN;
	volatile int64_t t122 = 187316336200LL;

    t122 = ((x581/(x582-x583))&x584);

    if (t122 != 20466380306382848LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x586 = 1534264U;
	int8_t x587 = -1;
	int16_t x588 = INT16_MIN;

    t123 = ((x585/(x586-x587))&x588);

    if (t123 != 0LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x590 = -3779;
	uint64_t x591 = UINT64_MAX;
	int32_t x592 = 4;
	volatile uint64_t t124 = 23675402919LLU;

    t124 = ((x589/(x590-x591))&x592);

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x598 = 4;
	int64_t x600 = INT64_MAX;
	volatile int64_t t125 = -900744661538036335LL;

    t125 = ((x597/(x598-x599))&x600);

    if (t125 != 9223372036547992430LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x605 = UINT32_MAX;
	int16_t x606 = INT16_MAX;
	int32_t x607 = 30;
	uint64_t x608 = 42826339LLU;

    t126 = ((x605/(x606-x607))&x608);

    if (t126 != 96LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x611 = 51;
	static int16_t x612 = -27;
	volatile int32_t t127 = 63;

    t127 = ((x609/(x610-x611))&x612);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x613 = 229U;
	static uint8_t x614 = 95U;
	static uint64_t x616 = UINT64_MAX;
	uint64_t t128 = 2718LLU;

    t128 = ((x613/(x614-x615))&x616);

    if (t128 != 2LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x618 = INT64_MAX;
	static uint64_t x620 = 2825370742859619LLU;

    t129 = ((x617/(x618-x619))&x620);

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x625 = -429647767655662919LL;
	int8_t x626 = INT8_MIN;
	int64_t x627 = INT64_MIN;
	static int8_t x628 = INT8_MIN;
	volatile int64_t t130 = 31400819LL;

    t130 = ((x625/(x626-x627))&x628);

    if (t130 != 0LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x629 = 696U;
	int8_t x630 = INT8_MIN;
	int64_t t131 = -473268888829420LL;

    t131 = ((x629/(x630-x631))&x632);

    if (t131 != 122LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x637 = INT16_MIN;
	int32_t x638 = -2058565;

    t132 = ((x637/(x638-x639))&x640);

    if (t132 != 1U) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int16_t x641 = 113;
	static int8_t x642 = INT8_MIN;
	volatile uint64_t x643 = UINT64_MAX;
	volatile int64_t x644 = -1LL;
	volatile uint64_t t133 = 55LLU;

    t133 = ((x641/(x642-x643))&x644);

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x646 = -1;
	int32_t x647 = 10993063;
	int16_t x648 = 1577;
	volatile int32_t t134 = 10574;

    t134 = ((x645/(x646-x647))&x648);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x650 = -49;
	static int32_t x651 = -1;
	int16_t x652 = -1;

    t135 = ((x649/(x650-x651))&x652);

    if (t135 != 2) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x655 = 1U;
	static volatile uint64_t t136 = 1223413LLU;

    t136 = ((x653/(x654-x655))&x656);

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint8_t x658 = 1U;
	uint64_t x659 = 6854244780160298306LLU;
	volatile uint64_t t137 = 133759512300515LLU;

    t137 = ((x657/(x658-x659))&x660);

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x665 = INT32_MAX;
	int64_t x666 = -4003687656097796LL;
	int64_t x667 = INT64_MIN;
	int8_t x668 = 1;
	volatile int64_t t138 = 2568188LL;

    t138 = ((x665/(x666-x667))&x668);

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile uint32_t x673 = UINT32_MAX;
	int16_t x674 = INT16_MIN;
	int32_t x675 = -58468028;
	int64_t x676 = INT64_MIN;
	int64_t t139 = 24829LL;

    t139 = ((x673/(x674-x675))&x676);

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static int64_t x677 = 134921889LL;
	int16_t x679 = INT16_MIN;
	int16_t x680 = -53;

    t140 = ((x677/(x678-x679))&x680);

    if (t140 != 4098LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x681 = 10748590LLU;
	uint8_t x682 = 56U;
	uint8_t x683 = 55U;
	volatile int32_t x684 = -1;
	volatile uint64_t t141 = 238365381236LLU;

    t141 = ((x681/(x682-x683))&x684);

    if (t141 != 10748590LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x689 = -1LL;
	uint64_t x690 = 219145377481050467LLU;
	uint32_t x692 = 30686U;
	volatile uint64_t t142 = 106LLU;

    t142 = ((x689/(x690-x691))&x692);

    if (t142 != 84LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x693 = 0;
	static volatile int64_t x694 = 867270756523108LL;
	uint8_t x696 = UINT8_MAX;
	int64_t t143 = 13226037608LL;

    t143 = ((x693/(x694-x695))&x696);

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x697 = 24870290691LL;
	int32_t x698 = -1;
	int8_t x700 = -1;

    t144 = ((x697/(x698-x699))&x700);

    if (t144 != 759004LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x701 = INT8_MIN;
	volatile int16_t x702 = INT16_MIN;

    t145 = ((x701/(x702-x703))&x704);

    if (t145 != 0U) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x705 = -234829866456LL;
	int64_t x706 = 36943452567247LL;
	uint64_t x707 = 383789158545505450LLU;
	int32_t x708 = 7536648;
	volatile uint64_t t146 = 180484268LLU;

    t146 = ((x705/(x706-x707))&x708);

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x709 = INT32_MIN;
	uint16_t x710 = 13U;
	int16_t x711 = INT16_MAX;
	int16_t x712 = INT16_MAX;

    t147 = ((x709/(x710-x711))&x712);

    if (t147 != 28) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x713 = -1620;
	int64_t x714 = 29763100839LL;
	static uint64_t x715 = 8093LLU;
	volatile int16_t x716 = -1;
	uint64_t t148 = 32301983LLU;

    t148 = ((x713/(x714-x715))&x716);

    if (t148 != 619785861LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile uint16_t x717 = 337U;
	int32_t x718 = INT32_MIN;
	int16_t x719 = INT16_MIN;
	int64_t x720 = -14LL;

    t149 = ((x717/(x718-x719))&x720);

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint32_t x721 = 3326324U;
	static uint32_t x722 = 48U;
	int32_t x723 = INT32_MAX;
	static int64_t x724 = INT64_MIN;
	int64_t t150 = -61764151499LL;

    t150 = ((x721/(x722-x723))&x724);

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x726 = 10U;
	uint32_t x727 = 31130U;
	static int8_t x728 = INT8_MAX;
	static int64_t t151 = 10567561969LL;

    t151 = ((x725/(x726-x727))&x728);

    if (t151 != 72LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x729 = INT64_MAX;
	uint16_t x730 = 4042U;
	volatile int16_t x731 = -113;
	int16_t x732 = INT16_MAX;
	volatile int64_t t152 = 81LL;

    t152 = ((x729/(x730-x731))&x732);

    if (t152 != 10891LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x737 = INT8_MIN;
	int32_t x738 = INT32_MIN;
	uint64_t x739 = 2260522LLU;
	int64_t x740 = INT64_MIN;
	uint64_t t153 = 813858876LLU;

    t153 = ((x737/(x738-x739))&x740);

    if (t153 != 0LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x741 = -1;
	uint8_t x742 = 88U;
	volatile int16_t x743 = -2416;
	volatile int32_t t154 = 62638565;

    t154 = ((x741/(x742-x743))&x744);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint8_t x749 = 74U;
	int32_t x750 = INT32_MIN;
	volatile uint16_t x751 = 0U;

    t155 = ((x749/(x750-x751))&x752);

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x753 = 1U;
	int8_t x754 = INT8_MIN;
	int16_t x755 = 71;
	volatile int64_t x756 = -59LL;
	volatile int64_t t156 = 334LL;

    t156 = ((x753/(x754-x755))&x756);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x758 = 43U;
	volatile int8_t x759 = -55;
	int64_t x760 = -245821952430LL;
	volatile int64_t t157 = 15976071974LL;

    t157 = ((x757/(x758-x759))&x760);

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x761 = -1;
	int64_t x762 = INT64_MIN;
	volatile int8_t x764 = INT8_MAX;
	volatile int64_t t158 = -2102110634LL;

    t158 = ((x761/(x762-x763))&x764);

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x765 = UINT64_MAX;
	uint8_t x766 = 5U;
	static uint16_t x767 = UINT16_MAX;
	int8_t x768 = INT8_MIN;
	uint64_t t159 = 28738541LLU;

    t159 = ((x765/(x766-x767))&x768);

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x769 = -1;
	int64_t x770 = -953281172417098972LL;
	static int32_t x771 = INT32_MIN;
	int32_t x772 = INT32_MIN;

    t160 = ((x769/(x770-x771))&x772);

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x773 = INT16_MIN;
	int8_t x774 = INT8_MIN;
	int8_t x776 = 1;
	int32_t t161 = 6591938;

    t161 = ((x773/(x774-x775))&x776);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x777 = -1;
	volatile uint8_t x778 = 31U;
	int32_t x779 = 9481348;
	static int8_t x780 = -1;
	int32_t t162 = 204;

    t162 = ((x777/(x778-x779))&x780);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x781 = 109913726253517908LL;
	volatile uint32_t x782 = 2207818U;
	int32_t x783 = -1;
	int32_t x784 = INT32_MIN;
	volatile int64_t t163 = 1661013LL;

    t163 = ((x781/(x782-x783))&x784);

    if (t163 != 49392123904LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x789 = INT16_MIN;
	static volatile uint64_t x790 = 60753LLU;
	uint32_t x791 = UINT32_MAX;
	int32_t x792 = INT32_MAX;
	volatile uint64_t t164 = 196478LLU;

    t164 = ((x789/(x790-x791))&x792);

    if (t164 != 1LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x793 = INT16_MIN;
	static volatile int16_t x794 = 1;
	static uint16_t x795 = 9414U;
	static volatile int64_t t165 = 14182758940893LL;

    t165 = ((x793/(x794-x795))&x796);

    if (t165 != 3LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x797 = 4445089907740000151LL;
	uint8_t x799 = 50U;
	int16_t x800 = INT16_MIN;
	int64_t t166 = -1608974913LL;

    t166 = ((x797/(x798-x799))&x800);

    if (t166 != 67879512965120LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x801 = INT32_MIN;
	int32_t x802 = -108;
	uint32_t x803 = 22653636U;
	int16_t x804 = 16287;

    t167 = ((x801/(x802-x803))&x804);

    if (t167 != 0U) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x808 = INT32_MAX;

    t168 = ((x805/(x806-x807))&x808);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x809 = -1;
	static uint64_t x810 = UINT64_MAX;
	static int32_t x811 = INT32_MIN;
	static int32_t x812 = -1;
	uint64_t t169 = 8215974LLU;

    t169 = ((x809/(x810-x811))&x812);

    if (t169 != 8589934596LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int16_t x830 = INT16_MIN;
	int8_t x832 = 15;
	volatile uint32_t t170 = 16U;

    t170 = ((x829/(x830-x831))&x832);

    if (t170 != 0U) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x837 = 15925612398LLU;
	static volatile uint64_t x838 = UINT64_MAX;
	static uint8_t x839 = UINT8_MAX;
	uint8_t x840 = UINT8_MAX;

    t171 = ((x837/(x838-x839))&x840);

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x849 = 0;
	static int64_t x851 = INT64_MIN;
	uint64_t x852 = 54601289182LLU;
	volatile uint64_t t172 = 1LLU;

    t172 = ((x849/(x850-x851))&x852);

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x853 = -1LL;
	int8_t x854 = -1;
	int32_t x855 = INT32_MIN;
	int32_t x856 = INT32_MAX;
	int64_t t173 = -430909109318LL;

    t173 = ((x853/(x854-x855))&x856);

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint32_t x857 = 7778U;
	volatile int64_t x858 = -1LL;
	static uint8_t x859 = 80U;
	uint8_t x860 = 12U;
	static volatile int64_t t174 = -8445556918468071LL;

    t174 = ((x857/(x858-x859))&x860);

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x861 = 16;
	uint8_t x862 = 0U;
	uint64_t x863 = 1619473183935079370LLU;
	static int16_t x864 = 0;
	uint64_t t175 = 191LLU;

    t175 = ((x861/(x862-x863))&x864);

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int32_t x865 = INT32_MAX;
	volatile uint32_t t176 = 31086947U;

    t176 = ((x865/(x866-x867))&x868);

    if (t176 != 1U) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x874 = 60;
	static int32_t x875 = 923522276;
	static volatile int32_t x876 = -143763679;
	volatile int32_t t177 = 162140776;

    t177 = ((x873/(x874-x875))&x876);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x881 = INT8_MAX;
	static int8_t x882 = INT8_MIN;
	uint64_t x883 = 3362933507213134606LLU;
	uint8_t x884 = UINT8_MAX;
	volatile uint64_t t178 = 44313297200806LLU;

    t178 = ((x881/(x882-x883))&x884);

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x885 = INT8_MIN;
	int8_t x887 = 1;
	int16_t x888 = INT16_MIN;
	static volatile uint64_t t179 = 720534LLU;

    t179 = ((x885/(x886-x887))&x888);

    if (t179 != 1844674407370948608LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x889 = INT16_MIN;
	uint32_t x891 = 6907654U;
	int32_t x892 = -1;
	volatile uint32_t t180 = 759090U;

    t180 = ((x889/(x890-x891))&x892);

    if (t180 != 19U) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x893 = -1LL;
	volatile int32_t x894 = -1;
	int64_t x895 = 21828LL;
	volatile uint32_t x896 = 95997U;

    t181 = ((x893/(x894-x895))&x896);

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x897 = INT8_MIN;
	int8_t x898 = 0;
	uint64_t x899 = 23LLU;

    t182 = ((x897/(x898-x899))&x900);

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x901 = INT32_MIN;
	uint32_t x902 = 80U;
	uint16_t x903 = 819U;
	uint32_t t183 = 103081U;

    t183 = ((x901/(x902-x903))&x904);

    if (t183 != 0U) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x905 = UINT32_MAX;
	int8_t x906 = INT8_MIN;
	volatile int32_t x907 = INT32_MIN;
	int8_t x908 = -1;
	uint32_t t184 = 764009393U;

    t184 = ((x905/(x906-x907))&x908);

    if (t184 != 2U) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x909 = -61;
	int16_t x911 = -265;
	int32_t t185 = 356751;

    t185 = ((x909/(x910-x911))&x912);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x914 = INT16_MIN;
	volatile int64_t x915 = INT64_MIN;
	static int64_t t186 = -31754405LL;

    t186 = ((x913/(x914-x915))&x916);

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x917 = INT8_MAX;
	static volatile uint16_t x918 = UINT16_MAX;
	int64_t x920 = -7597229840543LL;
	uint64_t t187 = 1255973847098LLU;

    t187 = ((x917/(x918-x919))&x920);

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x921 = UINT16_MAX;
	int64_t x923 = -1LL;
	int8_t x924 = INT8_MAX;
	volatile int64_t t188 = -4LL;

    t188 = ((x921/(x922-x923))&x924);

    if (t188 != 124LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x926 = INT32_MIN;
	static int8_t x927 = -1;
	int32_t x928 = -1;
	static volatile int32_t t189 = 3805;

    t189 = ((x925/(x926-x927))&x928);

    if (t189 != -1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x929 = 2683LLU;
	uint16_t x931 = 78U;
	volatile uint64_t x932 = 12073085LLU;

    t190 = ((x929/(x930-x931))&x932);

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x935 = INT8_MIN;
	uint16_t x936 = 172U;
	static uint64_t t191 = 69270072597690547LLU;

    t191 = ((x933/(x934-x935))&x936);

    if (t191 != 4LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x937 = UINT32_MAX;
	static uint16_t x938 = 188U;
	uint8_t x939 = 3U;
	static uint32_t t192 = 2U;

    t192 = ((x937/(x938-x939))&x940);

    if (t192 != 1U) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x941 = INT8_MIN;
	volatile int32_t x943 = INT32_MIN;
	uint16_t x944 = UINT16_MAX;
	static volatile int32_t t193 = -175090127;

    t193 = ((x941/(x942-x943))&x944);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x945 = -1;
	volatile int16_t x947 = INT16_MIN;
	static uint8_t x948 = 13U;
	int32_t t194 = 486946589;

    t194 = ((x945/(x946-x947))&x948);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x949 = -1;
	int64_t x950 = INT64_MIN;
	int16_t x951 = INT16_MIN;
	volatile int16_t x952 = INT16_MAX;

    t195 = ((x949/(x950-x951))&x952);

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x953 = INT16_MAX;
	uint64_t x954 = UINT64_MAX;
	int8_t x956 = INT8_MAX;
	uint64_t t196 = 234171585727607LLU;

    t196 = ((x953/(x954-x955))&x956);

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x957 = 669056278882LLU;
	int8_t x959 = -9;
	uint32_t x960 = 2382537U;
	static uint64_t t197 = 12447456LLU;

    t197 = ((x957/(x958-x959))&x960);

    if (t197 != 513LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x961 = INT8_MIN;
	volatile int64_t x962 = INT64_MAX;
	int32_t x963 = 125447;
	uint32_t x964 = 898523061U;

    t198 = ((x961/(x962-x963))&x964);

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x973 = -42736341;
	uint64_t x975 = UINT64_MAX;
	uint64_t x976 = 99683LLU;
	volatile uint64_t t199 = 195695382214014LLU;

    t199 = ((x973/(x974-x975))&x976);

    if (t199 != 33090LLU) { NG(); } else { ; }
	
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

