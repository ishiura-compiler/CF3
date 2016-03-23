
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

static int16_t x4 = INT16_MIN;
uint16_t x6 = UINT16_MAX;
uint32_t x11 = UINT32_MAX;
volatile uint32_t t2 = 1197681812U;
volatile int64_t t4 = -368LL;
int16_t x21 = -1;
int32_t t6 = -2255;
int16_t x31 = 15413;
volatile int32_t x35 = INT32_MIN;
uint64_t x40 = UINT64_MAX;
int8_t x53 = 5;
int64_t x55 = -336531395LL;
int16_t x56 = INT16_MIN;
int32_t x57 = 854951;
int8_t x61 = 0;
volatile uint32_t t15 = 2492224U;
uint64_t x77 = 7100324593LLU;
volatile int8_t x78 = 1;
int8_t x88 = INT8_MIN;
uint32_t x91 = 32338192U;
uint32_t t21 = 102802184U;
uint8_t x115 = 23U;
volatile int32_t t27 = 6323453;
volatile int8_t x122 = INT8_MIN;
static int64_t x126 = INT64_MIN;
int8_t x127 = INT8_MAX;
static uint32_t x137 = 10322U;
int32_t t34 = -2524;
int64_t x145 = INT64_MIN;
static volatile int8_t x153 = 1;
static volatile int32_t t38 = 6;
int32_t t39 = 6208;
uint16_t x174 = 0U;
int32_t x175 = INT32_MIN;
volatile int16_t x180 = INT16_MIN;
uint64_t x184 = UINT64_MAX;
volatile uint64_t t43 = 1929134964076774LLU;
static int64_t x186 = INT64_MIN;
int16_t x187 = -3;
int8_t x191 = INT8_MIN;
static int32_t x197 = 3165;
volatile int32_t t47 = 0;
int32_t x208 = -1;
volatile int32_t t49 = -1;
volatile uint32_t x218 = 316620U;
volatile int32_t t52 = 3307931;
int16_t x227 = INT16_MIN;
static int32_t x234 = INT32_MAX;
int32_t x235 = 31050;
volatile int32_t t56 = 238;
volatile int16_t x239 = -1561;
uint64_t x240 = 5509LLU;
uint64_t t57 = 31LLU;
uint32_t x242 = UINT32_MAX;
volatile int16_t x246 = -5816;
static uint8_t x247 = UINT8_MAX;
int32_t t60 = -4652;
static int64_t x255 = INT64_MAX;
int64_t x261 = INT64_MIN;
uint64_t t64 = 1098166026041250881LLU;
volatile int64_t x270 = 332257439005626635LL;
int64_t x274 = INT64_MIN;
int16_t x278 = INT16_MIN;
int64_t x279 = -27093118LL;
volatile int64_t t67 = 306LL;
volatile uint16_t x289 = UINT16_MAX;
static int32_t x292 = 4599;
int16_t x294 = -1;
volatile uint64_t x302 = 6241LLU;
static int8_t x307 = 0;
uint64_t t74 = 4LLU;
uint32_t x310 = UINT32_MAX;
int8_t x316 = INT8_MIN;
volatile int64_t t76 = 3061830LL;
int32_t x330 = INT32_MIN;
int16_t x332 = INT16_MIN;
int32_t x334 = INT32_MIN;
int64_t x341 = INT64_MIN;
int8_t x343 = INT8_MIN;
int16_t x344 = -1680;
uint32_t x347 = 816426999U;
uint32_t x368 = 18245760U;
uint32_t x371 = UINT32_MAX;
static volatile int32_t t91 = -194196;
static volatile uint32_t t92 = 376975490U;
volatile int16_t x384 = -1;
int64_t t94 = -79222LL;
volatile int16_t x397 = INT16_MAX;
volatile uint64_t t97 = 610127868413LLU;
volatile uint32_t x412 = UINT32_MAX;
int64_t t99 = 8185509925382363LL;
int32_t x417 = INT32_MIN;
int32_t x423 = INT32_MIN;
uint64_t x425 = 11102LLU;
uint64_t x433 = 53139973408041LLU;
volatile int64_t t103 = 7443090254287773LL;
volatile int64_t x439 = -1LL;
int32_t x440 = INT32_MAX;
int64_t x443 = INT64_MIN;
int32_t x444 = -3;
volatile uint16_t x448 = 3052U;
int32_t x453 = -1;
int8_t x454 = 0;
volatile uint64_t t109 = 248LLU;
int8_t x462 = -1;
static int16_t x468 = INT16_MAX;
int16_t x470 = 208;
int64_t x471 = -587193752860003880LL;
int16_t x475 = INT16_MIN;
volatile int32_t t114 = 2;
int8_t x490 = INT8_MIN;
int64_t t118 = 0LL;
int16_t x501 = INT16_MIN;
int64_t x502 = INT64_MAX;
static int8_t x508 = -1;
int64_t x509 = -1LL;
static int16_t x518 = -1;
volatile uint8_t x527 = UINT8_MAX;
int64_t x528 = -1LL;
uint32_t x531 = UINT32_MAX;
int16_t x539 = -1;
static int8_t x546 = INT8_MAX;
static int16_t x550 = -7708;
static int16_t x551 = INT16_MIN;
int8_t x556 = 3;
uint8_t x560 = UINT8_MAX;
volatile int8_t x563 = INT8_MAX;
volatile uint32_t x564 = 25455U;
static int16_t x565 = -2843;
volatile int8_t x566 = -1;
volatile int32_t x571 = -1;
static int32_t x576 = 3882412;
int64_t x577 = 819306LL;
int32_t x582 = -5;
int16_t x600 = -1192;
volatile int32_t t142 = -393;
uint16_t x601 = UINT16_MAX;
int16_t x605 = -544;
uint16_t x609 = 46U;
uint16_t x620 = 7070U;
static int64_t x627 = INT64_MIN;
volatile int8_t x628 = -2;
int8_t x629 = -1;
volatile uint64_t x630 = 130553735835918350LLU;
int32_t t151 = -1;
int64_t x644 = -1079419LL;
uint16_t x646 = 9U;
int8_t x647 = -1;
volatile uint8_t x651 = UINT8_MAX;
uint64_t x663 = UINT64_MAX;
volatile uint64_t t157 = 53020778162101LLU;
int32_t x666 = INT32_MIN;
volatile int32_t t158 = 15;
volatile int8_t x678 = INT8_MAX;
uint64_t x679 = 250288362891LLU;
int32_t x693 = INT32_MIN;
uint8_t x697 = 92U;
volatile int64_t t165 = 483LL;
volatile int64_t t166 = 1016003254777LL;
volatile uint16_t x710 = UINT16_MAX;
int16_t x712 = INT16_MIN;
static volatile int64_t t168 = 0LL;
uint64_t x714 = 15432436162725LLU;
static uint32_t x719 = 75883760U;
uint32_t t170 = 1U;
static int32_t x724 = INT32_MAX;
volatile int32_t t171 = 374;
volatile uint64_t x725 = 272366696385027LLU;
uint64_t x728 = 3934783850LLU;
static uint64_t t172 = 3435LLU;
static int64_t x730 = INT64_MIN;
volatile int32_t x731 = -1;
int64_t x734 = -504226666848LL;
volatile int64_t x741 = -1LL;
volatile uint8_t x742 = 3U;
int64_t x745 = 3681311097LL;
volatile uint64_t x748 = 1425133115LLU;
static int16_t x754 = INT16_MIN;
volatile uint8_t x756 = UINT8_MAX;
volatile int32_t t179 = 25403;
uint8_t x757 = 25U;
volatile uint64_t t180 = 1LLU;
static int16_t x764 = INT16_MAX;
uint32_t x766 = UINT32_MAX;
volatile int64_t x771 = -46818427958LL;
volatile uint64_t t185 = 107LLU;
int16_t x785 = INT16_MIN;
uint8_t x786 = 3U;
volatile uint64_t t187 = 62LLU;
int32_t t188 = -1479093;
volatile int64_t t189 = -3556350840LL;
int32_t x807 = INT32_MAX;
static int32_t x808 = 24830219;
int32_t x810 = -1;
int64_t x813 = -1LL;
uint8_t x817 = UINT8_MAX;
int16_t x822 = INT16_MIN;
int8_t x823 = 1;
static volatile int32_t t199 = 37;


void f0(void) {
    	volatile uint16_t x1 = 397U;
	volatile int8_t x2 = 22;
	volatile int16_t x3 = INT16_MIN;
	static volatile int32_t t0 = 88242009;

    t0 = ((x1!=x2)*(x3/x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = 0;
	uint8_t x7 = UINT8_MAX;
	static uint16_t x8 = UINT16_MAX;
	volatile int32_t t1 = 4;

    t1 = ((x5!=x6)*(x7/x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x9 = INT8_MIN;
	int32_t x10 = -4150064;
	uint32_t x12 = 3442U;

    t2 = ((x9!=x10)*(x11/x12));

    if (t2 != 1247811U) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = 817370U;
	int32_t x14 = INT32_MIN;
	int32_t x15 = INT32_MAX;
	int8_t x16 = -1;
	int32_t t3 = -29;

    t3 = ((x13!=x14)*(x15/x16));

    if (t3 != -2147483647) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x17 = INT64_MIN;
	int64_t x18 = -1LL;
	int64_t x19 = INT64_MAX;
	int8_t x20 = INT8_MAX;

    t4 = ((x17!=x18)*(x19/x20));

    if (t4 != 72624976668147841LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x22 = INT8_MAX;
	uint8_t x23 = 0U;
	int16_t x24 = INT16_MAX;
	int32_t t5 = -1035011422;

    t5 = ((x21!=x22)*(x23/x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = -4476727;
	int64_t x26 = -1LL;
	int32_t x27 = INT32_MIN;
	static int8_t x28 = INT8_MIN;

    t6 = ((x25!=x26)*(x27/x28));

    if (t6 != 16777216) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint16_t x29 = 14154U;
	uint8_t x30 = UINT8_MAX;
	int16_t x32 = -449;
	volatile int32_t t7 = -1;

    t7 = ((x29!=x30)*(x31/x32));

    if (t7 != -34) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = INT32_MIN;
	int8_t x34 = 1;
	int16_t x36 = INT16_MIN;
	int32_t t8 = 33186;

    t8 = ((x33!=x34)*(x35/x36));

    if (t8 != 65536) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint32_t x37 = 834048367U;
	int64_t x38 = 578115617LL;
	uint64_t x39 = UINT64_MAX;
	volatile uint64_t t9 = 921768920045LLU;

    t9 = ((x37!=x38)*(x39/x40));

    if (t9 != 1LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x41 = 5446802766LLU;
	static uint8_t x42 = UINT8_MAX;
	int64_t x43 = -7468LL;
	static uint64_t x44 = 61648539117LLU;
	static uint64_t t10 = 553LLU;

    t10 = ((x41!=x42)*(x43/x44));

    if (t10 != 299224350LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x45 = 11U;
	uint8_t x46 = UINT8_MAX;
	volatile uint64_t x47 = 4274855614888760LLU;
	volatile int16_t x48 = -1;
	volatile uint64_t t11 = 27195752LLU;

    t11 = ((x45!=x46)*(x47/x48));

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = INT8_MIN;
	volatile int8_t x50 = INT8_MAX;
	int64_t x51 = -13274LL;
	static uint16_t x52 = UINT16_MAX;
	static volatile int64_t t12 = 0LL;

    t12 = ((x49!=x50)*(x51/x52));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x54 = UINT16_MAX;
	volatile int64_t t13 = 2LL;

    t13 = ((x53!=x54)*(x55/x56));

    if (t13 != 10270LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int16_t x58 = -325;
	int64_t x59 = INT64_MAX;
	uint8_t x60 = 82U;
	int64_t t14 = -5LL;

    t14 = ((x57!=x58)*(x59/x60));

    if (t14 != 112480146790911900LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x62 = INT8_MIN;
	static volatile int16_t x63 = INT16_MIN;
	uint32_t x64 = UINT32_MAX;

    t15 = ((x61!=x62)*(x63/x64));

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x65 = 69170912065503LLU;
	static volatile int32_t x66 = -1;
	int8_t x67 = INT8_MIN;
	int32_t x68 = INT32_MIN;
	int32_t t16 = -7060218;

    t16 = ((x65!=x66)*(x67/x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x69 = INT64_MIN;
	uint8_t x70 = 1U;
	int64_t x71 = -7100LL;
	static int16_t x72 = 12;
	volatile int64_t t17 = 9884772109525152LL;

    t17 = ((x69!=x70)*(x71/x72));

    if (t17 != -591LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x79 = 247295317U;
	int32_t x80 = INT32_MIN;
	volatile uint32_t t18 = 15068U;

    t18 = ((x77!=x78)*(x79/x80));

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x81 = 122U;
	int32_t x82 = -1;
	static int8_t x83 = INT8_MAX;
	int8_t x84 = -4;
	volatile int32_t t19 = 434174763;

    t19 = ((x81!=x82)*(x83/x84));

    if (t19 != -31) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x85 = 105342016U;
	volatile int8_t x86 = INT8_MIN;
	int32_t x87 = INT32_MAX;
	int32_t t20 = -1;

    t20 = ((x85!=x86)*(x87/x88));

    if (t20 != -16777215) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x89 = UINT16_MAX;
	static int8_t x90 = INT8_MIN;
	int32_t x92 = -62110836;

    t21 = ((x89!=x90)*(x91/x92));

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int8_t x93 = -2;
	volatile uint64_t x94 = UINT64_MAX;
	int16_t x95 = 1;
	int16_t x96 = -1;
	int32_t t22 = -6;

    t22 = ((x93!=x94)*(x95/x96));

    if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint16_t x97 = 10U;
	uint16_t x98 = 118U;
	int8_t x99 = INT8_MAX;
	int32_t x100 = INT32_MAX;
	volatile int32_t t23 = 3307;

    t23 = ((x97!=x98)*(x99/x100));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x101 = 146029LL;
	static uint8_t x102 = UINT8_MAX;
	uint8_t x103 = UINT8_MAX;
	uint8_t x104 = UINT8_MAX;
	volatile int32_t t24 = -32;

    t24 = ((x101!=x102)*(x103/x104));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x105 = 2026667U;
	int64_t x106 = -1948382623LL;
	int16_t x107 = INT16_MIN;
	static uint8_t x108 = 48U;
	volatile int32_t t25 = 1038;

    t25 = ((x105!=x106)*(x107/x108));

    if (t25 != -682) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x109 = INT8_MIN;
	uint32_t x110 = UINT32_MAX;
	static uint32_t x111 = UINT32_MAX;
	int32_t x112 = -1;
	volatile uint32_t t26 = 22383U;

    t26 = ((x109!=x110)*(x111/x112));

    if (t26 != 1U) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x113 = UINT8_MAX;
	static uint8_t x114 = UINT8_MAX;
	static int8_t x116 = INT8_MIN;

    t27 = ((x113!=x114)*(x115/x116));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x117 = -1;
	uint16_t x118 = 0U;
	uint8_t x119 = UINT8_MAX;
	int16_t x120 = INT16_MIN;
	volatile int32_t t28 = -31949290;

    t28 = ((x117!=x118)*(x119/x120));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint16_t x121 = 0U;
	int32_t x123 = INT32_MIN;
	static uint32_t x124 = UINT32_MAX;
	static uint32_t t29 = 1812947U;

    t29 = ((x121!=x122)*(x123/x124));

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x125 = INT64_MAX;
	uint16_t x128 = 459U;
	int32_t t30 = 2205;

    t30 = ((x125!=x126)*(x127/x128));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x129 = INT16_MIN;
	static int64_t x130 = 460173LL;
	int64_t x131 = INT64_MAX;
	volatile int64_t x132 = -1LL;
	volatile int64_t t31 = 84LL;

    t31 = ((x129!=x130)*(x131/x132));

    if (t31 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x133 = -1;
	int16_t x134 = 0;
	static uint64_t x135 = 1LLU;
	volatile int8_t x136 = INT8_MIN;
	volatile uint64_t t32 = 19586041444742LLU;

    t32 = ((x133!=x134)*(x135/x136));

    if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x138 = INT32_MIN;
	int64_t x139 = INT64_MAX;
	int32_t x140 = INT32_MAX;
	int64_t t33 = 836076073468529749LL;

    t33 = ((x137!=x138)*(x139/x140));

    if (t33 != 4294967298LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x141 = INT8_MIN;
	int32_t x142 = 0;
	int32_t x143 = 1;
	int16_t x144 = INT16_MIN;

    t34 = ((x141!=x142)*(x143/x144));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x146 = -1347;
	int8_t x147 = INT8_MAX;
	int32_t x148 = INT32_MAX;
	static int32_t t35 = 0;

    t35 = ((x145!=x146)*(x147/x148));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int16_t x149 = -1577;
	int16_t x150 = 44;
	int8_t x151 = -1;
	int64_t x152 = -1LL;
	volatile int64_t t36 = -600355780900712LL;

    t36 = ((x149!=x150)*(x151/x152));

    if (t36 != 1LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x154 = INT32_MAX;
	int8_t x155 = 5;
	int32_t x156 = INT32_MAX;
	volatile int32_t t37 = 0;

    t37 = ((x153!=x154)*(x155/x156));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x157 = INT8_MIN;
	volatile uint8_t x158 = 0U;
	static uint8_t x159 = 31U;
	volatile int32_t x160 = INT32_MIN;

    t38 = ((x157!=x158)*(x159/x160));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x165 = INT8_MIN;
	static int64_t x166 = -322649402972LL;
	volatile int8_t x167 = -1;
	static int8_t x168 = -1;

    t39 = ((x165!=x166)*(x167/x168));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int16_t x169 = INT16_MIN;
	volatile uint32_t x170 = 967339539U;
	int64_t x171 = INT64_MAX;
	uint64_t x172 = UINT64_MAX;
	volatile uint64_t t40 = 1436080560LLU;

    t40 = ((x169!=x170)*(x171/x172));

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x173 = 3753LLU;
	int8_t x176 = INT8_MIN;
	int32_t t41 = 6983;

    t41 = ((x173!=x174)*(x175/x176));

    if (t41 != 16777216) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x177 = -3343978525LL;
	static uint16_t x178 = UINT16_MAX;
	volatile int16_t x179 = INT16_MIN;
	int32_t t42 = 1;

    t42 = ((x177!=x178)*(x179/x180));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x181 = 0U;
	int64_t x182 = INT64_MAX;
	uint16_t x183 = 222U;

    t43 = ((x181!=x182)*(x183/x184));

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x185 = INT32_MAX;
	volatile int8_t x188 = 29;
	volatile int32_t t44 = 2053;

    t44 = ((x185!=x186)*(x187/x188));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x189 = 185LLU;
	uint32_t x190 = 513010U;
	volatile int16_t x192 = -6873;
	volatile int32_t t45 = 488908096;

    t45 = ((x189!=x190)*(x191/x192));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x193 = INT64_MIN;
	int16_t x194 = INT16_MIN;
	int32_t x195 = -17584953;
	static int16_t x196 = INT16_MIN;
	int32_t t46 = 1136591;

    t46 = ((x193!=x194)*(x195/x196));

    if (t46 != 536) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x198 = UINT16_MAX;
	static int32_t x199 = INT32_MIN;
	volatile uint8_t x200 = UINT8_MAX;

    t47 = ((x197!=x198)*(x199/x200));

    if (t47 != -8421504) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x201 = 131969607;
	volatile uint16_t x202 = 32U;
	int64_t x203 = INT64_MAX;
	volatile int8_t x204 = INT8_MIN;
	static int64_t t48 = 977234602LL;

    t48 = ((x201!=x202)*(x203/x204));

    if (t48 != -72057594037927935LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x205 = INT16_MIN;
	static int8_t x206 = INT8_MAX;
	int8_t x207 = 53;

    t49 = ((x205!=x206)*(x207/x208));

    if (t49 != -53) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x209 = UINT16_MAX;
	int16_t x210 = INT16_MIN;
	static uint16_t x211 = 21033U;
	uint8_t x212 = 8U;
	int32_t t50 = 882;

    t50 = ((x209!=x210)*(x211/x212));

    if (t50 != 2629) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x213 = -890104;
	int32_t x214 = INT32_MIN;
	volatile int64_t x215 = INT64_MAX;
	int16_t x216 = -1;
	static int64_t t51 = -204280LL;

    t51 = ((x213!=x214)*(x215/x216));

    if (t51 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x217 = 166829099LLU;
	int32_t x219 = INT32_MAX;
	int16_t x220 = -5755;

    t52 = ((x217!=x218)*(x219/x220));

    if (t52 != -373150) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x221 = INT8_MIN;
	int16_t x222 = 99;
	uint64_t x223 = 3842180LLU;
	volatile int64_t x224 = INT64_MIN;
	uint64_t t53 = 1279LLU;

    t53 = ((x221!=x222)*(x223/x224));

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x225 = UINT32_MAX;
	uint16_t x226 = 308U;
	static uint32_t x228 = UINT32_MAX;
	static uint32_t t54 = 12402U;

    t54 = ((x225!=x226)*(x227/x228));

    if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x229 = -1LL;
	static int16_t x230 = -2;
	volatile int8_t x231 = 0;
	int8_t x232 = INT8_MIN;
	int32_t t55 = 7887;

    t55 = ((x229!=x230)*(x231/x232));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x233 = INT8_MAX;
	int32_t x236 = INT32_MAX;

    t56 = ((x233!=x234)*(x235/x236));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x237 = 3;
	volatile int32_t x238 = 11;

    t57 = ((x237!=x238)*(x239/x240));

    if (t57 != 3348474146616364LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x241 = UINT8_MAX;
	static volatile int64_t x243 = -2952LL;
	int32_t x244 = -1;
	int64_t t58 = -34462173303LL;

    t58 = ((x241!=x242)*(x243/x244));

    if (t58 != 2952LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint32_t x245 = 1410707335U;
	volatile int16_t x248 = 11212;
	volatile int32_t t59 = -12610;

    t59 = ((x245!=x246)*(x247/x248));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x249 = INT16_MIN;
	int32_t x250 = INT32_MIN;
	static int16_t x251 = INT16_MIN;
	volatile int8_t x252 = 1;

    t60 = ((x249!=x250)*(x251/x252));

    if (t60 != -32768) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x253 = -1;
	int16_t x254 = -1;
	int64_t x256 = -2298765532LL;
	int64_t t61 = 864118796LL;

    t61 = ((x253!=x254)*(x255/x256));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x257 = INT16_MAX;
	uint64_t x258 = UINT64_MAX;
	uint8_t x259 = 6U;
	int64_t x260 = -28515889LL;
	volatile int64_t t62 = -2625392721159805LL;

    t62 = ((x257!=x258)*(x259/x260));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x262 = 10999722951307656LL;
	volatile int8_t x263 = INT8_MIN;
	int16_t x264 = INT16_MIN;
	volatile int32_t t63 = -933192;

    t63 = ((x261!=x262)*(x263/x264));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x265 = 80U;
	int32_t x266 = -3224129;
	uint64_t x267 = 38110996LLU;
	volatile int64_t x268 = INT64_MIN;

    t64 = ((x265!=x266)*(x267/x268));

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x269 = UINT8_MAX;
	int16_t x271 = -1;
	static int64_t x272 = 5349192661978LL;
	volatile int64_t t65 = 50339340353530LL;

    t65 = ((x269!=x270)*(x271/x272));

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x273 = -344462LL;
	int32_t x275 = -13266;
	int8_t x276 = -1;
	int32_t t66 = 1;

    t66 = ((x273!=x274)*(x275/x276));

    if (t66 != 13266) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x277 = 8402;
	int8_t x280 = -1;

    t67 = ((x277!=x278)*(x279/x280));

    if (t67 != 27093118LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x281 = 0U;
	volatile int8_t x282 = INT8_MIN;
	static int16_t x283 = -211;
	int16_t x284 = INT16_MIN;
	static volatile int32_t t68 = 3559007;

    t68 = ((x281!=x282)*(x283/x284));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x285 = -288;
	static int64_t x286 = 266149235722842LL;
	int32_t x287 = INT32_MIN;
	static int8_t x288 = INT8_MIN;
	static int32_t t69 = 367514019;

    t69 = ((x285!=x286)*(x287/x288));

    if (t69 != 16777216) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x290 = 2U;
	volatile int16_t x291 = -1;
	static int32_t t70 = 3906592;

    t70 = ((x289!=x290)*(x291/x292));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x293 = 19428U;
	uint64_t x295 = UINT64_MAX;
	static uint8_t x296 = 94U;
	static uint64_t t71 = 568LLU;

    t71 = ((x293!=x294)*(x295/x296));

    if (t71 != 196241958230952676LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x297 = INT64_MAX;
	static volatile int64_t x298 = 1319236LL;
	static volatile int64_t x299 = -315192715LL;
	int16_t x300 = INT16_MAX;
	int64_t t72 = -6056639807587LL;

    t72 = ((x297!=x298)*(x299/x300));

    if (t72 != -9619LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x301 = 351U;
	int8_t x303 = 5;
	int8_t x304 = INT8_MIN;
	volatile int32_t t73 = -327646261;

    t73 = ((x301!=x302)*(x303/x304));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x305 = -18;
	int64_t x306 = INT64_MAX;
	uint64_t x308 = 540469100734LLU;

    t74 = ((x305!=x306)*(x307/x308));

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x309 = UINT64_MAX;
	uint8_t x311 = 66U;
	uint16_t x312 = 6551U;
	volatile int32_t t75 = 83237726;

    t75 = ((x309!=x310)*(x311/x312));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x313 = 0U;
	volatile int32_t x314 = -1;
	int64_t x315 = INT64_MIN;

    t76 = ((x313!=x314)*(x315/x316));

    if (t76 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x317 = INT16_MIN;
	volatile int64_t x318 = INT64_MIN;
	static uint8_t x319 = 35U;
	int16_t x320 = INT16_MIN;
	int32_t t77 = 37;

    t77 = ((x317!=x318)*(x319/x320));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x321 = 541U;
	uint64_t x322 = 25422753883973649LLU;
	int16_t x323 = 1;
	static volatile uint32_t x324 = UINT32_MAX;
	uint32_t t78 = 7323U;

    t78 = ((x321!=x322)*(x323/x324));

    if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint32_t x325 = 122161411U;
	uint8_t x326 = 10U;
	int32_t x327 = INT32_MAX;
	int32_t x328 = INT32_MIN;
	int32_t t79 = 4;

    t79 = ((x325!=x326)*(x327/x328));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x329 = INT32_MIN;
	int8_t x331 = INT8_MIN;
	int32_t t80 = -1043953938;

    t80 = ((x329!=x330)*(x331/x332));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x333 = 7U;
	static int8_t x335 = 12;
	uint8_t x336 = 9U;
	int32_t t81 = -24755;

    t81 = ((x333!=x334)*(x335/x336));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x337 = -15;
	int64_t x338 = -1LL;
	static int8_t x339 = 3;
	int32_t x340 = 1;
	static volatile int32_t t82 = 10;

    t82 = ((x337!=x338)*(x339/x340));

    if (t82 != 3) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x342 = INT64_MIN;
	volatile int32_t t83 = 17;

    t83 = ((x341!=x342)*(x343/x344));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x345 = -10;
	static int16_t x346 = 1955;
	uint16_t x348 = 1U;
	volatile uint32_t t84 = 0U;

    t84 = ((x345!=x346)*(x347/x348));

    if (t84 != 816426999U) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int32_t x349 = INT32_MAX;
	int64_t x350 = INT64_MIN;
	int8_t x351 = 6;
	volatile uint64_t x352 = 242980167316345LLU;
	volatile uint64_t t85 = 530337LLU;

    t85 = ((x349!=x350)*(x351/x352));

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x353 = -1340;
	int16_t x354 = INT16_MIN;
	int16_t x355 = INT16_MAX;
	uint64_t x356 = UINT64_MAX;
	static uint64_t t86 = 68286565576605LLU;

    t86 = ((x353!=x354)*(x355/x356));

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x357 = INT64_MAX;
	int8_t x358 = -55;
	uint16_t x359 = 810U;
	int32_t x360 = INT32_MIN;
	int32_t t87 = -687789;

    t87 = ((x357!=x358)*(x359/x360));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint8_t x361 = 7U;
	int32_t x362 = -1;
	int8_t x363 = 0;
	uint32_t x364 = UINT32_MAX;
	static volatile uint32_t t88 = 3708724U;

    t88 = ((x361!=x362)*(x363/x364));

    if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x365 = INT8_MIN;
	static volatile int64_t x366 = -1LL;
	volatile uint32_t x367 = 11901879U;
	volatile uint32_t t89 = 15652256U;

    t89 = ((x365!=x366)*(x367/x368));

    if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x369 = 349;
	int32_t x370 = -1106586;
	int8_t x372 = -19;
	uint32_t t90 = 16333U;

    t90 = ((x369!=x370)*(x371/x372));

    if (t90 != 1U) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint64_t x373 = 22006520338226168LLU;
	static uint64_t x374 = UINT64_MAX;
	int8_t x375 = -1;
	int8_t x376 = -1;

    t91 = ((x373!=x374)*(x375/x376));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x377 = 497250268693LLU;
	int32_t x378 = INT32_MAX;
	volatile uint16_t x379 = 7U;
	volatile uint32_t x380 = 822U;

    t92 = ((x377!=x378)*(x379/x380));

    if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x381 = -1;
	volatile int8_t x382 = INT8_MAX;
	static uint8_t x383 = UINT8_MAX;
	int32_t t93 = -80692;

    t93 = ((x381!=x382)*(x383/x384));

    if (t93 != -255) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x385 = 680U;
	uint64_t x386 = 582328LLU;
	static int64_t x387 = -8096892579LL;
	volatile int16_t x388 = -1;

    t94 = ((x385!=x386)*(x387/x388));

    if (t94 != 8096892579LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint32_t x389 = 981097179U;
	uint16_t x390 = 4226U;
	uint8_t x391 = 9U;
	uint64_t x392 = 7156341311105LLU;
	volatile uint64_t t95 = 259701408LLU;

    t95 = ((x389!=x390)*(x391/x392));

    if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x398 = INT32_MAX;
	volatile int64_t x399 = -1LL;
	volatile uint32_t x400 = UINT32_MAX;
	volatile int64_t t96 = 63690615661698LL;

    t96 = ((x397!=x398)*(x399/x400));

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x405 = UINT16_MAX;
	int8_t x406 = 3;
	static uint64_t x407 = 1LLU;
	int32_t x408 = INT32_MIN;

    t97 = ((x405!=x406)*(x407/x408));

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x409 = 0;
	uint32_t x410 = 1526U;
	volatile int64_t x411 = -1LL;
	volatile int64_t t98 = 1LL;

    t98 = ((x409!=x410)*(x411/x412));

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x413 = INT16_MIN;
	volatile int32_t x414 = INT32_MIN;
	int64_t x415 = -110049030244044LL;
	uint16_t x416 = UINT16_MAX;

    t99 = ((x413!=x414)*(x415/x416));

    if (t99 != -1679240562LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x418 = INT16_MIN;
	int32_t x419 = INT32_MIN;
	int32_t x420 = -327943;
	static int32_t t100 = -5109489;

    t100 = ((x417!=x418)*(x419/x420));

    if (t100 != 6548) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x421 = 1;
	static uint8_t x422 = UINT8_MAX;
	int64_t x424 = INT64_MIN;
	int64_t t101 = -245897821514174050LL;

    t101 = ((x421!=x422)*(x423/x424));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x426 = INT32_MIN;
	int16_t x427 = INT16_MIN;
	int8_t x428 = -1;
	static volatile int32_t t102 = 42820;

    t102 = ((x425!=x426)*(x427/x428));

    if (t102 != 32768) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x434 = UINT64_MAX;
	uint8_t x435 = 12U;
	int64_t x436 = INT64_MIN;

    t103 = ((x433!=x434)*(x435/x436));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x437 = UINT64_MAX;
	int64_t x438 = -1LL;
	int64_t t104 = -173998444977156734LL;

    t104 = ((x437!=x438)*(x439/x440));

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x441 = -1;
	volatile int32_t x442 = INT32_MIN;
	volatile int64_t t105 = 2737628LL;

    t105 = ((x441!=x442)*(x443/x444));

    if (t105 != 3074457345618258602LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint64_t x445 = UINT64_MAX;
	int16_t x446 = INT16_MIN;
	uint32_t x447 = UINT32_MAX;
	uint32_t t106 = 969098U;

    t106 = ((x445!=x446)*(x447/x448));

    if (t106 != 1407263U) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile uint16_t x449 = 3458U;
	uint8_t x450 = 10U;
	volatile uint32_t x451 = 905779U;
	int8_t x452 = -1;
	volatile uint32_t t107 = 56570858U;

    t107 = ((x449!=x450)*(x451/x452));

    if (t107 != 0U) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x455 = 145976078443385LL;
	int16_t x456 = INT16_MIN;
	int64_t t108 = -2481636644LL;

    t108 = ((x453!=x454)*(x455/x456));

    if (t108 != -4454836378LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x457 = -1;
	int32_t x458 = -50139010;
	static uint32_t x459 = 3076298U;
	static uint64_t x460 = 766064LLU;

    t109 = ((x457!=x458)*(x459/x460));

    if (t109 != 4LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x461 = -1;
	int64_t x463 = INT64_MIN;
	static uint16_t x464 = UINT16_MAX;
	int64_t t110 = 775LL;

    t110 = ((x461!=x462)*(x463/x464));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x465 = UINT64_MAX;
	static int8_t x466 = -2;
	volatile int8_t x467 = -2;
	int32_t t111 = 481698;

    t111 = ((x465!=x466)*(x467/x468));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x469 = 3U;
	int8_t x472 = INT8_MIN;
	volatile int64_t t112 = 0LL;

    t112 = ((x469!=x470)*(x471/x472));

    if (t112 != 4587451194218780LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x473 = 61U;
	int32_t x474 = -360173001;
	int16_t x476 = INT16_MAX;
	volatile int32_t t113 = 1109648;

    t113 = ((x473!=x474)*(x475/x476));

    if (t113 != -1) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint64_t x477 = 968134963621LLU;
	int32_t x478 = -1;
	volatile int16_t x479 = INT16_MAX;
	uint16_t x480 = UINT16_MAX;

    t114 = ((x477!=x478)*(x479/x480));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x485 = -22;
	uint64_t x486 = 122254597124968668LLU;
	int32_t x487 = 56727216;
	int64_t x488 = INT64_MIN;
	int64_t t115 = -2127009241LL;

    t115 = ((x485!=x486)*(x487/x488));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x489 = 50734616U;
	static int16_t x491 = INT16_MAX;
	static uint64_t x492 = 271351089080791LLU;
	uint64_t t116 = 3002652849646963044LLU;

    t116 = ((x489!=x490)*(x491/x492));

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x493 = -1;
	uint8_t x494 = 9U;
	volatile int64_t x495 = 4057663475679LL;
	volatile int64_t x496 = 44210657LL;
	static volatile int64_t t117 = -481710064218109LL;

    t117 = ((x493!=x494)*(x495/x496));

    if (t117 != 91780LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x497 = 138237LLU;
	int64_t x498 = INT64_MAX;
	volatile uint16_t x499 = UINT16_MAX;
	int64_t x500 = INT64_MIN;

    t118 = ((x497!=x498)*(x499/x500));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x503 = 12U;
	int64_t x504 = INT64_MIN;
	volatile int64_t t119 = 541218035514721LL;

    t119 = ((x501!=x502)*(x503/x504));

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x505 = INT64_MIN;
	volatile int8_t x506 = -1;
	static volatile int16_t x507 = INT16_MIN;
	int32_t t120 = 58985013;

    t120 = ((x505!=x506)*(x507/x508));

    if (t120 != 32768) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x510 = INT16_MAX;
	volatile int32_t x511 = INT32_MIN;
	volatile uint32_t x512 = 60086367U;
	uint32_t t121 = 1715U;

    t121 = ((x509!=x510)*(x511/x512));

    if (t121 != 35U) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x517 = 30364442U;
	static uint32_t x519 = 1448182655U;
	volatile uint64_t x520 = UINT64_MAX;
	static uint64_t t122 = 8LLU;

    t122 = ((x517!=x518)*(x519/x520));

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int16_t x521 = INT16_MIN;
	volatile uint16_t x522 = 7U;
	uint16_t x523 = 6U;
	int8_t x524 = -1;
	static int32_t t123 = -328;

    t123 = ((x521!=x522)*(x523/x524));

    if (t123 != -6) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x525 = -24701607016LL;
	int32_t x526 = INT32_MAX;
	static int64_t t124 = 50135058478534LL;

    t124 = ((x525!=x526)*(x527/x528));

    if (t124 != -255LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x529 = INT32_MIN;
	uint16_t x530 = 104U;
	int32_t x532 = INT32_MIN;
	volatile uint32_t t125 = 763874U;

    t125 = ((x529!=x530)*(x531/x532));

    if (t125 != 1U) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x533 = INT32_MIN;
	int32_t x534 = -1;
	static int64_t x535 = INT64_MIN;
	uint16_t x536 = UINT16_MAX;
	int64_t t126 = 432640797014814636LL;

    t126 = ((x533!=x534)*(x535/x536));

    if (t126 != -140739635871744LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint32_t x537 = 1555495305U;
	uint32_t x538 = UINT32_MAX;
	static int8_t x540 = 6;
	volatile int32_t t127 = -313365027;

    t127 = ((x537!=x538)*(x539/x540));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x541 = INT16_MIN;
	uint64_t x542 = UINT64_MAX;
	uint32_t x543 = UINT32_MAX;
	volatile uint32_t x544 = 95196658U;
	static uint32_t t128 = 231U;

    t128 = ((x541!=x542)*(x543/x544));

    if (t128 != 45U) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x545 = UINT16_MAX;
	int8_t x547 = 7;
	int32_t x548 = INT32_MAX;
	volatile int32_t t129 = 6;

    t129 = ((x545!=x546)*(x547/x548));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x549 = INT8_MIN;
	uint8_t x552 = UINT8_MAX;
	volatile int32_t t130 = 841714;

    t130 = ((x549!=x550)*(x551/x552));

    if (t130 != -128) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x553 = INT16_MIN;
	uint8_t x554 = 6U;
	uint16_t x555 = 3U;
	volatile int32_t t131 = 2985726;

    t131 = ((x553!=x554)*(x555/x556));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x557 = 47LL;
	int64_t x558 = -167119405LL;
	volatile uint64_t x559 = 1005327LLU;
	volatile uint64_t t132 = 130566861606974942LLU;

    t132 = ((x557!=x558)*(x559/x560));

    if (t132 != 3942LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x561 = INT64_MAX;
	int32_t x562 = INT32_MIN;
	uint32_t t133 = 135721097U;

    t133 = ((x561!=x562)*(x563/x564));

    if (t133 != 0U) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x567 = -1;
	uint16_t x568 = 29358U;
	static int32_t t134 = -19276318;

    t134 = ((x565!=x566)*(x567/x568));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x569 = INT8_MIN;
	static int32_t x570 = -1;
	int32_t x572 = INT32_MAX;
	volatile int32_t t135 = -38742610;

    t135 = ((x569!=x570)*(x571/x572));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x573 = INT8_MAX;
	int64_t x574 = INT64_MAX;
	uint64_t x575 = UINT64_MAX;
	static uint64_t t136 = 9484840176LLU;

    t136 = ((x573!=x574)*(x575/x576));

    if (t136 != 4751361801300LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x578 = 6;
	uint64_t x579 = UINT64_MAX;
	static volatile int8_t x580 = -28;
	uint64_t t137 = 2935194LLU;

    t137 = ((x577!=x578)*(x579/x580));

    if (t137 != 1LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x581 = -1;
	int64_t x583 = -1LL;
	int32_t x584 = -1;
	volatile int64_t t138 = 101104LL;

    t138 = ((x581!=x582)*(x583/x584));

    if (t138 != 1LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x585 = -1;
	static int16_t x586 = INT16_MIN;
	int32_t x587 = INT32_MIN;
	int32_t x588 = INT32_MIN;
	int32_t t139 = 6152;

    t139 = ((x585!=x586)*(x587/x588));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x589 = UINT64_MAX;
	uint64_t x590 = 178LLU;
	int32_t x591 = INT32_MIN;
	int64_t x592 = -1LL;
	volatile int64_t t140 = 4056053358289LL;

    t140 = ((x589!=x590)*(x591/x592));

    if (t140 != 2147483648LL) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x593 = 0;
	int32_t x594 = -1;
	int8_t x595 = -1;
	int16_t x596 = INT16_MIN;
	int32_t t141 = -1;

    t141 = ((x593!=x594)*(x595/x596));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x597 = -17;
	volatile int16_t x598 = INT16_MAX;
	uint16_t x599 = UINT16_MAX;

    t142 = ((x597!=x598)*(x599/x600));

    if (t142 != -54) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int8_t x602 = 1;
	int32_t x603 = 28;
	int64_t x604 = INT64_MIN;
	volatile int64_t t143 = -94LL;

    t143 = ((x601!=x602)*(x603/x604));

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile uint64_t x606 = UINT64_MAX;
	volatile int16_t x607 = INT16_MIN;
	static int8_t x608 = INT8_MAX;
	static volatile int32_t t144 = 860713;

    t144 = ((x605!=x606)*(x607/x608));

    if (t144 != -258) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x610 = INT32_MIN;
	volatile int64_t x611 = 30602LL;
	volatile int64_t x612 = 860448821LL;
	volatile int64_t t145 = -567667485538213LL;

    t145 = ((x609!=x610)*(x611/x612));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x613 = -1LL;
	int8_t x614 = INT8_MAX;
	int16_t x615 = -1;
	static int16_t x616 = 1;
	volatile int32_t t146 = -21;

    t146 = ((x613!=x614)*(x615/x616));

    if (t146 != -1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x617 = 2275503LLU;
	static int64_t x618 = 3289LL;
	static volatile int32_t x619 = -13;
	int32_t t147 = 487613829;

    t147 = ((x617!=x618)*(x619/x620));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x621 = -1;
	int32_t x622 = INT32_MIN;
	uint32_t x623 = UINT32_MAX;
	int8_t x624 = INT8_MAX;
	volatile uint32_t t148 = 224966033U;

    t148 = ((x621!=x622)*(x623/x624));

    if (t148 != 33818640U) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x625 = INT32_MAX;
	volatile int16_t x626 = INT16_MAX;
	volatile int64_t t149 = 130481624733LL;

    t149 = ((x625!=x626)*(x627/x628));

    if (t149 != 4611686018427387904LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x631 = -3;
	uint64_t x632 = 354449181734LLU;
	static uint64_t t150 = 174514206064902062LLU;

    t150 = ((x629!=x630)*(x631/x632));

    if (t150 != 52043409LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x633 = INT32_MIN;
	int16_t x634 = -232;
	volatile int32_t x635 = -21902027;
	int32_t x636 = 379015;

    t151 = ((x633!=x634)*(x635/x636));

    if (t151 != -57) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x641 = 37326358287LL;
	uint32_t x642 = UINT32_MAX;
	static volatile uint32_t x643 = UINT32_MAX;
	volatile int64_t t152 = 3520755870LL;

    t152 = ((x641!=x642)*(x643/x644));

    if (t152 != -3978LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x645 = UINT64_MAX;
	int16_t x648 = 248;
	volatile int32_t t153 = 30553;

    t153 = ((x645!=x646)*(x647/x648));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x649 = 0;
	int32_t x650 = INT32_MIN;
	int8_t x652 = -1;
	volatile int32_t t154 = 6028;

    t154 = ((x649!=x650)*(x651/x652));

    if (t154 != -255) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x653 = -6869780694252156LL;
	uint16_t x654 = UINT16_MAX;
	static uint64_t x655 = 171707735319LLU;
	int32_t x656 = 2290;
	volatile uint64_t t155 = 356742292590LLU;

    t155 = ((x653!=x654)*(x655/x656));

    if (t155 != 74981543LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static int32_t x657 = INT32_MAX;
	int8_t x658 = INT8_MIN;
	static volatile int8_t x659 = -1;
	int16_t x660 = 34;
	volatile int32_t t156 = -336;

    t156 = ((x657!=x658)*(x659/x660));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x661 = -171;
	static int64_t x662 = INT64_MIN;
	static uint64_t x664 = 604169LLU;

    t157 = ((x661!=x662)*(x663/x664));

    if (t157 != 30532423996778LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x665 = -1;
	int32_t x667 = INT32_MIN;
	static int16_t x668 = INT16_MIN;

    t158 = ((x665!=x666)*(x667/x668));

    if (t158 != 65536) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x673 = 1;
	static int64_t x674 = 499868265920325419LL;
	int32_t x675 = 2578858;
	static int64_t x676 = 41064223297LL;
	volatile int64_t t159 = -285LL;

    t159 = ((x673!=x674)*(x675/x676));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x677 = -7;
	int32_t x680 = INT32_MIN;
	uint64_t t160 = 146LLU;

    t160 = ((x677!=x678)*(x679/x680));

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint16_t x681 = 1269U;
	int16_t x682 = -1;
	int64_t x683 = INT64_MIN;
	int16_t x684 = INT16_MAX;
	static int64_t t161 = 26528346945354LL;

    t161 = ((x681!=x682)*(x683/x684));

    if (t161 != -281483566907400LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x685 = INT16_MAX;
	static int8_t x686 = INT8_MAX;
	uint32_t x687 = UINT32_MAX;
	int8_t x688 = INT8_MIN;
	volatile uint32_t t162 = 1248467799U;

    t162 = ((x685!=x686)*(x687/x688));

    if (t162 != 1U) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x689 = -1327;
	int8_t x690 = -1;
	static int16_t x691 = INT16_MIN;
	int16_t x692 = 3;
	volatile int32_t t163 = 21840;

    t163 = ((x689!=x690)*(x691/x692));

    if (t163 != -10922) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x694 = -1;
	uint8_t x695 = 0U;
	uint64_t x696 = 64493915LLU;
	uint64_t t164 = 32446242LLU;

    t164 = ((x693!=x694)*(x695/x696));

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x698 = -591;
	static volatile int64_t x699 = -1LL;
	int32_t x700 = -30598;

    t165 = ((x697!=x698)*(x699/x700));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x701 = INT32_MAX;
	int16_t x702 = INT16_MIN;
	int16_t x703 = -1;
	volatile int64_t x704 = 887990411415LL;

    t166 = ((x701!=x702)*(x703/x704));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x705 = INT8_MIN;
	volatile int8_t x706 = -1;
	int8_t x707 = -1;
	uint16_t x708 = 5440U;
	int32_t t167 = 228574454;

    t167 = ((x705!=x706)*(x707/x708));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x709 = INT32_MAX;
	volatile int64_t x711 = INT64_MIN;

    t168 = ((x709!=x710)*(x711/x712));

    if (t168 != 281474976710656LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int16_t x713 = 5574;
	uint16_t x715 = 12556U;
	static int8_t x716 = INT8_MIN;
	volatile int32_t t169 = -20;

    t169 = ((x713!=x714)*(x715/x716));

    if (t169 != -98) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x717 = INT8_MIN;
	uint32_t x718 = 66850U;
	static int8_t x720 = 12;

    t170 = ((x717!=x718)*(x719/x720));

    if (t170 != 6323646U) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x721 = 658379LL;
	int32_t x722 = INT32_MIN;
	int16_t x723 = -1;

    t171 = ((x721!=x722)*(x723/x724));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x726 = -30;
	static int8_t x727 = INT8_MIN;

    t172 = ((x725!=x726)*(x727/x728));

    if (t172 != 4688121324LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x729 = -1;
	volatile int64_t x732 = -1LL;
	int64_t t173 = -1128835700429326LL;

    t173 = ((x729!=x730)*(x731/x732));

    if (t173 != 1LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x733 = -1LL;
	static volatile uint32_t x735 = 14U;
	int8_t x736 = 50;
	volatile uint32_t t174 = 0U;

    t174 = ((x733!=x734)*(x735/x736));

    if (t174 != 0U) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x737 = -1LL;
	uint64_t x738 = 223305701654LLU;
	uint8_t x739 = 0U;
	int8_t x740 = INT8_MAX;
	volatile int32_t t175 = -1931731;

    t175 = ((x737!=x738)*(x739/x740));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint8_t x743 = 7U;
	int64_t x744 = -262244397376787607LL;
	int64_t t176 = -4048126777883574LL;

    t176 = ((x741!=x742)*(x743/x744));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint8_t x746 = 1U;
	int8_t x747 = INT8_MIN;
	uint64_t t177 = 2586749273325455501LLU;

    t177 = ((x745!=x746)*(x747/x748));

    if (t177 != 12943874420LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x749 = 0;
	volatile int8_t x750 = -61;
	uint32_t x751 = 371273191U;
	uint64_t x752 = 59383636LLU;
	static uint64_t t178 = 6053LLU;

    t178 = ((x749!=x750)*(x751/x752));

    if (t178 != 6LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x753 = 0U;
	uint16_t x755 = UINT16_MAX;

    t179 = ((x753!=x754)*(x755/x756));

    if (t179 != 257) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x758 = 52U;
	int32_t x759 = -3154;
	uint64_t x760 = 203455LLU;

    t180 = ((x757!=x758)*(x759/x760));

    if (t180 != 90667440336730LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint64_t x761 = UINT64_MAX;
	int8_t x762 = 1;
	int16_t x763 = -1;
	int32_t t181 = 1737526;

    t181 = ((x761!=x762)*(x763/x764));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x765 = -3;
	int32_t x767 = -534058645;
	static volatile uint64_t x768 = UINT64_MAX;
	static volatile uint64_t t182 = 22773351312559LLU;

    t182 = ((x765!=x766)*(x767/x768));

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x769 = INT8_MIN;
	uint32_t x770 = UINT32_MAX;
	uint32_t x772 = UINT32_MAX;
	int64_t t183 = -20LL;

    t183 = ((x769!=x770)*(x771/x772));

    if (t183 != -10LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x773 = INT8_MIN;
	int64_t x774 = INT64_MIN;
	uint16_t x775 = UINT16_MAX;
	uint16_t x776 = 141U;
	static int32_t t184 = -1934;

    t184 = ((x773!=x774)*(x775/x776));

    if (t184 != 464) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x777 = UINT16_MAX;
	uint16_t x778 = UINT16_MAX;
	uint64_t x779 = 8LLU;
	uint8_t x780 = 57U;

    t185 = ((x777!=x778)*(x779/x780));

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x781 = UINT16_MAX;
	int16_t x782 = -1;
	uint32_t x783 = 258346U;
	uint32_t x784 = UINT32_MAX;
	uint32_t t186 = 662682408U;

    t186 = ((x781!=x782)*(x783/x784));

    if (t186 != 0U) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int64_t x787 = INT64_MIN;
	uint64_t x788 = UINT64_MAX;

    t187 = ((x785!=x786)*(x787/x788));

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x789 = INT8_MAX;
	uint64_t x790 = UINT64_MAX;
	int16_t x791 = -1;
	uint8_t x792 = UINT8_MAX;

    t188 = ((x789!=x790)*(x791/x792));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int64_t x793 = -2328658LL;
	volatile uint32_t x794 = 128871084U;
	int8_t x795 = INT8_MIN;
	static int64_t x796 = -24035392615813712LL;

    t189 = ((x793!=x794)*(x795/x796));

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x797 = INT64_MIN;
	int64_t x798 = 60515994496LL;
	volatile uint32_t x799 = 54U;
	volatile int32_t x800 = -1;
	uint32_t t190 = 56491073U;

    t190 = ((x797!=x798)*(x799/x800));

    if (t190 != 0U) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile uint8_t x801 = 0U;
	int32_t x802 = INT32_MIN;
	static int16_t x803 = INT16_MIN;
	int64_t x804 = INT64_MIN;
	int64_t t191 = 826898LL;

    t191 = ((x801!=x802)*(x803/x804));

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int16_t x805 = INT16_MIN;
	int32_t x806 = INT32_MAX;
	volatile int32_t t192 = -632120236;

    t192 = ((x805!=x806)*(x807/x808));

    if (t192 != 86) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x809 = -458005552;
	static uint32_t x811 = UINT32_MAX;
	int8_t x812 = INT8_MIN;
	static volatile uint32_t t193 = 0U;

    t193 = ((x809!=x810)*(x811/x812));

    if (t193 != 1U) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x814 = -15396;
	int32_t x815 = INT32_MAX;
	static int32_t x816 = -114875;
	int32_t t194 = 5749;

    t194 = ((x813!=x814)*(x815/x816));

    if (t194 != -18694) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint64_t x818 = 5324LLU;
	static volatile int64_t x819 = -404631822753LL;
	int16_t x820 = INT16_MAX;
	int64_t t195 = -3835LL;

    t195 = ((x817!=x818)*(x819/x820));

    if (t195 != -12348760LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x821 = INT64_MIN;
	static int32_t x824 = INT32_MAX;
	volatile int32_t t196 = 0;

    t196 = ((x821!=x822)*(x823/x824));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint16_t x825 = UINT16_MAX;
	volatile uint32_t x826 = 44U;
	int64_t x827 = INT64_MIN;
	uint16_t x828 = 2U;
	static volatile int64_t t197 = 2456156883634269917LL;

    t197 = ((x825!=x826)*(x827/x828));

    if (t197 != -4611686018427387904LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint8_t x829 = UINT8_MAX;
	int64_t x830 = INT64_MAX;
	static int16_t x831 = INT16_MAX;
	int32_t x832 = 708;
	volatile int32_t t198 = 104089;

    t198 = ((x829!=x830)*(x831/x832));

    if (t198 != 46) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x833 = INT64_MIN;
	int16_t x834 = INT16_MIN;
	volatile int32_t x835 = -1;
	static uint8_t x836 = UINT8_MAX;

    t199 = ((x833!=x834)*(x835/x836));

    if (t199 != 0) { NG(); } else { ; }
	
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

