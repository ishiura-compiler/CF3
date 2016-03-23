
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

int64_t t2 = -1LL;
uint8_t x16 = 7U;
uint64_t t3 = 2426128189LLU;
int16_t x17 = 1825;
volatile int32_t x18 = -1;
volatile uint32_t x20 = 338856U;
int32_t x21 = INT32_MAX;
volatile uint32_t t7 = 4464982U;
uint64_t x38 = 201LLU;
uint64_t x47 = UINT64_MAX;
volatile uint64_t t11 = 6380LLU;
static int64_t x51 = -1LL;
int64_t x60 = INT64_MIN;
volatile int16_t x62 = INT16_MIN;
static uint32_t x70 = UINT32_MAX;
volatile int16_t x72 = -1;
uint64_t x75 = 110596811143LLU;
int8_t x82 = 6;
int64_t x85 = 218044887110LL;
static int64_t t21 = -1LL;
int32_t x89 = 3;
int8_t x97 = -1;
int32_t x100 = -37372;
volatile int8_t x104 = INT8_MIN;
uint64_t x107 = 212527821271399149LLU;
static int8_t x109 = INT8_MIN;
uint16_t x111 = 1441U;
int64_t x115 = -1LL;
int32_t x117 = -1286155;
uint8_t x118 = 6U;
int64_t x124 = -5804LL;
uint64_t t32 = 98612388LLU;
int32_t x137 = -1;
int8_t x141 = 43;
static uint32_t x143 = UINT32_MAX;
uint64_t x146 = 25970LLU;
int32_t x148 = 297;
uint32_t x153 = 65316916U;
volatile int8_t x154 = -54;
volatile uint32_t t37 = 455188674U;
int32_t x157 = 120130;
static int32_t x158 = -1005250580;
volatile int64_t t40 = -1LL;
static uint32_t x175 = 419926U;
volatile uint32_t t42 = 23515664U;
int8_t x180 = INT8_MIN;
int64_t t43 = -37505349098LL;
static int64_t t46 = -2133010962232452042LL;
volatile int8_t x204 = -3;
static int16_t x215 = INT16_MAX;
int16_t x224 = INT16_MIN;
uint16_t x236 = 261U;
volatile int64_t t54 = 3557151747LL;
uint32_t x239 = UINT32_MAX;
int16_t x241 = INT16_MIN;
int32_t x249 = INT32_MAX;
uint64_t x250 = 514373670LLU;
static volatile int64_t x252 = INT64_MIN;
int32_t x258 = INT32_MIN;
static uint8_t x266 = 4U;
int64_t x268 = -13373796LL;
static uint64_t x280 = UINT64_MAX;
int16_t x283 = INT16_MAX;
uint8_t x301 = UINT8_MAX;
uint16_t x307 = UINT16_MAX;
int16_t x309 = -58;
int64_t x311 = -1LL;
static int32_t x313 = 104;
static uint8_t x316 = UINT8_MAX;
int32_t x320 = INT32_MAX;
int64_t x330 = -1LL;
static int64_t x339 = INT64_MIN;
int16_t x344 = INT16_MIN;
static int8_t x350 = -1;
int64_t x360 = INT64_MAX;
volatile int64_t t83 = 107371LL;
static int64_t x369 = INT64_MIN;
uint64_t t85 = 417374882136066LLU;
int16_t x376 = INT16_MAX;
int64_t x384 = INT64_MIN;
static volatile int32_t x388 = 31086359;
int64_t x389 = -1LL;
volatile int64_t x395 = -1LL;
static int64_t t91 = -342LL;
volatile int8_t x407 = 0;
volatile int32_t x408 = -31192;
int8_t x424 = 55;
volatile uint8_t x425 = UINT8_MAX;
volatile uint64_t x429 = 3LLU;
int32_t x431 = INT32_MIN;
static int32_t x432 = INT32_MAX;
uint32_t t99 = 439506U;
static int64_t x438 = -1LL;
static uint64_t t100 = 16524667LLU;
volatile int8_t x442 = -13;
uint8_t x445 = 3U;
uint64_t t102 = 17LLU;
uint8_t x449 = 124U;
int16_t x451 = 653;
uint16_t x453 = UINT16_MAX;
int64_t x464 = 1677LL;
static uint32_t x465 = 32480U;
uint64_t x466 = 620299656LLU;
int32_t x473 = -1;
int8_t x476 = 18;
volatile int64_t t108 = -51117945039494437LL;
int64_t x499 = 61484548459LL;
static volatile int64_t t114 = -22203176338967LL;
uint16_t x512 = 11U;
static volatile uint8_t x519 = 30U;
static int8_t x524 = INT8_MAX;
int32_t x525 = INT32_MIN;
int64_t x539 = 1873841997LL;
volatile int32_t x551 = -1;
int8_t x554 = -15;
int8_t x560 = INT8_MIN;
uint32_t x566 = UINT32_MAX;
static volatile uint64_t t129 = 77795086861952729LLU;
volatile int32_t x569 = INT32_MAX;
int32_t t130 = -275103;
volatile uint8_t x576 = UINT8_MAX;
volatile uint64_t t132 = 1280042873744278417LLU;
int32_t x581 = INT32_MIN;
static volatile uint64_t x582 = 1385LLU;
int16_t x585 = INT16_MIN;
int64_t x586 = 32117280031LL;
int8_t x589 = INT8_MIN;
static uint8_t x594 = UINT8_MAX;
static int32_t x602 = INT32_MAX;
static volatile uint16_t x603 = 364U;
int8_t x604 = INT8_MIN;
uint64_t x608 = UINT64_MAX;
volatile int16_t x617 = -153;
static volatile int32_t x618 = 21;
int32_t x621 = -1;
uint64_t x624 = UINT64_MAX;
uint64_t t144 = 5943901LLU;
volatile int8_t x634 = 48;
uint32_t x635 = 1667U;
volatile uint32_t t146 = 1468808919U;
int8_t x640 = -1;
uint32_t x642 = 1U;
static int32_t x651 = INT32_MAX;
static int32_t x655 = -207088;
static uint32_t x664 = 1U;
static volatile int64_t x673 = -1LL;
uint8_t x674 = 51U;
int64_t x676 = -66286063618087254LL;
uint16_t x678 = 18U;
int16_t x680 = 3;
static volatile int64_t t157 = -37738489LL;
int32_t x682 = INT32_MIN;
volatile int64_t t158 = 9637264062396LL;
int8_t x689 = -2;
int64_t t160 = 619LL;
static volatile int8_t x697 = INT8_MIN;
int32_t x698 = -1;
static uint16_t x701 = UINT16_MAX;
int16_t x702 = INT16_MIN;
int32_t t162 = -86646;
uint8_t x711 = 4U;
int32_t x713 = INT32_MAX;
uint64_t x726 = 382486LLU;
static int8_t x731 = 7;
volatile uint32_t t167 = 3U;
int64_t x733 = -6LL;
int64_t x734 = 1LL;
volatile int16_t x738 = -38;
int32_t x742 = -1;
int64_t x743 = 3196340243239LL;
volatile int64_t t170 = -56375713756775102LL;
uint8_t x748 = UINT8_MAX;
int16_t x753 = INT16_MIN;
static volatile int64_t t173 = -32299130170990616LL;
static uint8_t x764 = 31U;
uint8_t x770 = 95U;
uint64_t x772 = 4LLU;
static uint8_t x773 = 13U;
volatile int8_t x774 = INT8_MIN;
static volatile int64_t x776 = INT64_MIN;
int64_t t179 = -231049LL;
static int8_t x790 = -37;
int8_t x806 = INT8_MIN;
static uint64_t x810 = 60275986LLU;
int32_t x813 = -1;
int8_t x814 = -1;
int32_t t186 = -4684;
uint8_t x820 = 1U;
int64_t x821 = 270664427547281505LL;
static uint16_t x823 = 1324U;
static int64_t x835 = INT64_MIN;
int8_t x840 = -1;
static uint64_t x842 = 241LLU;
uint64_t x846 = 25LLU;
volatile uint64_t t193 = 2486060142362153LLU;
int16_t x853 = -1;
static int8_t x855 = INT8_MIN;
uint64_t t196 = 89256868058190662LLU;
volatile int64_t x863 = INT64_MAX;
int64_t t197 = -146782857362568LL;
int8_t x868 = INT8_MIN;
uint8_t x870 = 9U;
int64_t t199 = 96809181262LL;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	volatile uint32_t x2 = 42U;
	uint64_t x3 = 6288165495LLU;
	volatile int16_t x4 = -1;
	volatile uint64_t t0 = 252293LLU;

    t0 = ((x1%x2)*(x3&x4));

    if (t0 != 12576330990LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x5 = INT32_MAX;
	int64_t x6 = -10LL;
	int16_t x7 = INT16_MAX;
	int64_t x8 = INT64_MIN;
	int64_t t1 = -32LL;

    t1 = ((x5%x6)*(x7&x8));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x9 = 4;
	int64_t x10 = -1LL;
	int32_t x11 = INT32_MIN;
	uint16_t x12 = UINT16_MAX;

    t2 = ((x9%x10)*(x11&x12));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MAX;
	int64_t x14 = 1LL;
	uint64_t x15 = 661922201501LLU;

    t3 = ((x13%x14)*(x15&x16));

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int32_t x19 = 456738;
	uint32_t t4 = 125827632U;

    t4 = ((x17%x18)*(x19&x20));

    if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x22 = INT64_MIN;
	uint16_t x23 = 15U;
	int64_t x24 = INT64_MIN;
	int64_t t5 = -3138LL;

    t5 = ((x21%x22)*(x23&x24));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x25 = 111LL;
	uint8_t x26 = 88U;
	int16_t x27 = INT16_MIN;
	int8_t x28 = INT8_MAX;
	int64_t t6 = -30562474755930407LL;

    t6 = ((x25%x26)*(x27&x28));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint32_t x29 = UINT32_MAX;
	volatile int32_t x30 = INT32_MAX;
	volatile int16_t x31 = INT16_MAX;
	int32_t x32 = -1;

    t7 = ((x29%x30)*(x31&x32));

    if (t7 != 32767U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x33 = 0U;
	static uint64_t x34 = 3LLU;
	static int8_t x35 = INT8_MIN;
	volatile int16_t x36 = -1;
	volatile uint64_t t8 = 0LLU;

    t8 = ((x33%x34)*(x35&x36));

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = INT32_MIN;
	static int64_t x39 = 2780887953LL;
	int16_t x40 = 7549;
	static uint64_t t9 = 225LLU;

    t9 = ((x37%x38)*(x39&x40));

    if (t9 != 648117LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int8_t x41 = INT8_MIN;
	uint16_t x42 = 3156U;
	int64_t x43 = -42717761887073236LL;
	int64_t x44 = 7228766LL;
	static int64_t t10 = 6LL;

    t10 = ((x41%x42)*(x43&x44));

    if (t10 != -117835264LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = -1;
	volatile int8_t x46 = INT8_MAX;
	int32_t x48 = -401121;

    t11 = ((x45%x46)*(x47&x48));

    if (t11 != 401121LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = 7;
	int8_t x50 = INT8_MIN;
	int8_t x52 = -17;
	int64_t t12 = -2262295988LL;

    t12 = ((x49%x50)*(x51&x52));

    if (t12 != -119LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x53 = UINT8_MAX;
	static uint16_t x54 = UINT16_MAX;
	uint16_t x55 = 3143U;
	volatile int8_t x56 = -4;
	int32_t t13 = -6;

    t13 = ((x53%x54)*(x55&x56));

    if (t13 != 800700) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint8_t x57 = 52U;
	int16_t x58 = INT16_MIN;
	uint32_t x59 = 2U;
	int64_t t14 = 89692659460621732LL;

    t14 = ((x57%x58)*(x59&x60));

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x61 = INT32_MAX;
	static uint64_t x63 = 173603283800346944LLU;
	volatile int8_t x64 = INT8_MIN;
	volatile uint64_t t15 = 1241192037LLU;

    t15 = ((x61%x62)*(x63&x64));

    if (t15 != 6861625583424319232LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x65 = -1LL;
	int32_t x66 = INT32_MIN;
	volatile uint16_t x67 = UINT16_MAX;
	static int32_t x68 = -691;
	volatile int64_t t16 = -1LL;

    t16 = ((x65%x66)*(x67&x68));

    if (t16 != -64845LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = INT16_MAX;
	int8_t x71 = INT8_MIN;
	uint32_t t17 = 358906U;

    t17 = ((x69%x70)*(x71&x72));

    if (t17 != 4290773120U) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x73 = -1;
	static uint32_t x74 = UINT32_MAX;
	int32_t x76 = -1;
	uint64_t t18 = 11LLU;

    t18 = ((x73%x74)*(x75&x76));

    if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = -1;
	int8_t x78 = INT8_MAX;
	int16_t x79 = INT16_MIN;
	int8_t x80 = -1;
	static int32_t t19 = 8;

    t19 = ((x77%x78)*(x79&x80));

    if (t19 != 32768) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = -3702125336LL;
	static int32_t x83 = -2268492;
	int32_t x84 = INT32_MAX;
	int64_t t20 = -18100638LL;

    t20 = ((x81%x82)*(x83&x84));

    if (t20 != -4290430312LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x86 = -7;
	volatile int8_t x87 = INT8_MAX;
	int32_t x88 = 97;

    t21 = ((x85%x86)*(x87&x88));

    if (t21 != 97LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x90 = -1240333;
	volatile int64_t x91 = 6LL;
	uint64_t x92 = 56453252812991LLU;
	uint64_t t22 = 0LLU;

    t22 = ((x89%x90)*(x91&x92));

    if (t22 != 18LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint16_t x93 = 19845U;
	int8_t x94 = INT8_MIN;
	uint8_t x95 = 4U;
	volatile int64_t x96 = INT64_MIN;
	static int64_t t23 = -629LL;

    t23 = ((x93%x94)*(x95&x96));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x98 = UINT64_MAX;
	uint8_t x99 = UINT8_MAX;
	uint64_t t24 = 898LLU;

    t24 = ((x97%x98)*(x99&x100));

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x101 = INT8_MIN;
	int8_t x102 = INT8_MIN;
	int8_t x103 = 3;
	volatile int32_t t25 = -512140820;

    t25 = ((x101%x102)*(x103&x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = INT8_MIN;
	uint32_t x106 = UINT32_MAX;
	int32_t x108 = INT32_MIN;
	volatile uint64_t t26 = 8LLU;

    t26 = ((x105%x106)*(x107&x108));

    if (t26 != 9689927256113152000LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x110 = INT32_MAX;
	int8_t x112 = -1;
	static int32_t t27 = -1;

    t27 = ((x109%x110)*(x111&x112));

    if (t27 != -184448) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint16_t x113 = UINT16_MAX;
	volatile uint8_t x114 = 121U;
	int64_t x116 = 7452791LL;
	static volatile int64_t t28 = 220232107045644719LL;

    t28 = ((x113%x114)*(x115&x116));

    if (t28 != 551506534LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint64_t x119 = UINT64_MAX;
	volatile int64_t x120 = INT64_MIN;
	volatile uint64_t t29 = 634401530LLU;

    t29 = ((x117%x118)*(x119&x120));

    if (t29 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint16_t x121 = 0U;
	static int16_t x122 = INT16_MIN;
	static volatile uint64_t x123 = 105756578LLU;
	static uint64_t t30 = 12269890784588LLU;

    t30 = ((x121%x122)*(x123&x124));

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = INT16_MAX;
	int32_t x126 = -1;
	uint16_t x127 = UINT16_MAX;
	int64_t x128 = -42825299398536LL;
	int64_t t31 = 238237668545763LL;

    t31 = ((x125%x126)*(x127&x128));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x133 = 8472677581343LLU;
	static volatile int64_t x134 = -4547128118830LL;
	int8_t x135 = 11;
	volatile int8_t x136 = INT8_MAX;

    t32 = ((x133%x134)*(x135&x136));

    if (t32 != 93199453394773LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x138 = UINT8_MAX;
	int8_t x139 = -1;
	int32_t x140 = -1;
	volatile int32_t t33 = -160;

    t33 = ((x137%x138)*(x139&x140));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int16_t x142 = -1;
	int32_t x144 = INT32_MIN;
	static volatile uint32_t t34 = 5636U;

    t34 = ((x141%x142)*(x143&x144));

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint8_t x145 = 0U;
	static int64_t x147 = -1LL;
	volatile uint64_t t35 = 9262LLU;

    t35 = ((x145%x146)*(x147&x148));

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x149 = -1;
	uint8_t x150 = 2U;
	uint16_t x151 = UINT16_MAX;
	uint32_t x152 = UINT32_MAX;
	volatile uint32_t t36 = 107658780U;

    t36 = ((x149%x150)*(x151&x152));

    if (t36 != 4294901761U) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint8_t x155 = 0U;
	int16_t x156 = INT16_MAX;

    t37 = ((x153%x154)*(x155&x156));

    if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x159 = 7206736U;
	volatile int16_t x160 = -1;
	uint32_t t38 = 10885U;

    t38 = ((x157%x158)*(x159&x160));

    if (t38 != 2456769184U) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x161 = UINT16_MAX;
	volatile int8_t x162 = -17;
	volatile int32_t x163 = INT32_MAX;
	volatile int64_t x164 = -546939060LL;
	volatile int64_t t39 = 6627145679LL;

    t39 = ((x161%x162)*(x163&x164));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x165 = 243864632;
	int64_t x166 = INT64_MAX;
	int64_t x167 = INT64_MIN;
	static volatile int64_t x168 = INT64_MAX;

    t40 = ((x165%x166)*(x167&x168));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint64_t x169 = UINT64_MAX;
	uint64_t x170 = UINT64_MAX;
	uint32_t x171 = UINT32_MAX;
	int16_t x172 = 0;
	uint64_t t41 = 7555LLU;

    t41 = ((x169%x170)*(x171&x172));

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x173 = UINT8_MAX;
	int16_t x174 = -20;
	uint16_t x176 = 384U;

    t42 = ((x173%x174)*(x175&x176));

    if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint8_t x177 = UINT8_MAX;
	int64_t x178 = -1LL;
	int8_t x179 = -6;

    t43 = ((x177%x178)*(x179&x180));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x181 = -1;
	static int64_t x182 = INT64_MIN;
	uint8_t x183 = 52U;
	uint8_t x184 = 6U;
	static volatile int64_t t44 = 6374653805332LL;

    t44 = ((x181%x182)*(x183&x184));

    if (t44 != -4LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x189 = UINT8_MAX;
	uint32_t x190 = UINT32_MAX;
	uint16_t x191 = UINT16_MAX;
	uint32_t x192 = 2634423U;
	uint32_t t45 = 155890U;

    t45 = ((x189%x190)*(x191&x192));

    if (t45 != 3310665U) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x193 = INT16_MIN;
	volatile int16_t x194 = -1;
	int64_t x195 = -5LL;
	int8_t x196 = INT8_MIN;

    t46 = ((x193%x194)*(x195&x196));

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x197 = -1;
	int16_t x198 = INT16_MIN;
	uint16_t x199 = 27129U;
	int8_t x200 = INT8_MAX;
	int32_t t47 = -811671;

    t47 = ((x197%x198)*(x199&x200));

    if (t47 != -121) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x201 = UINT64_MAX;
	int16_t x202 = -3;
	int16_t x203 = -9;
	volatile uint64_t t48 = 3LLU;

    t48 = ((x201%x202)*(x203&x204));

    if (t48 != 18446744073709551594LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x205 = INT8_MIN;
	int32_t x206 = 2350;
	int32_t x207 = 406;
	static int32_t x208 = INT32_MIN;
	int32_t t49 = 105;

    t49 = ((x205%x206)*(x207&x208));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint64_t x213 = 576727LLU;
	static int16_t x214 = -1;
	int64_t x216 = -1LL;
	volatile uint64_t t50 = 85LLU;

    t50 = ((x213%x214)*(x215&x216));

    if (t50 != 18897613609LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x221 = INT32_MAX;
	uint16_t x222 = 305U;
	int16_t x223 = -1;
	volatile int32_t t51 = 984480;

    t51 = ((x221%x222)*(x223&x224));

    if (t51 != -9895936) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x225 = 8U;
	static int16_t x226 = 3;
	volatile int16_t x227 = 4;
	int32_t x228 = INT32_MIN;
	volatile int32_t t52 = 28;

    t52 = ((x225%x226)*(x227&x228));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint8_t x229 = 6U;
	int8_t x230 = -45;
	int8_t x231 = 1;
	static int32_t x232 = -1;
	static int32_t t53 = 1263099;

    t53 = ((x229%x230)*(x231&x232));

    if (t53 != 6) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x233 = INT64_MIN;
	static volatile int16_t x234 = -4248;
	int16_t x235 = 10;

    t54 = ((x233%x234)*(x235&x236));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x237 = INT16_MIN;
	uint16_t x238 = 110U;
	int8_t x240 = INT8_MIN;
	uint32_t t55 = 216674U;

    t55 = ((x237%x238)*(x239&x240));

    if (t55 != 12544U) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x242 = -2472;
	uint64_t x243 = UINT64_MAX;
	uint32_t x244 = 8367888U;
	volatile uint64_t t56 = 959391LLU;

    t56 = ((x241%x242)*(x243&x244));

    if (t56 != 18446744068421046400LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile uint8_t x245 = UINT8_MAX;
	uint32_t x246 = UINT32_MAX;
	uint32_t x247 = 1782683020U;
	uint32_t x248 = UINT32_MAX;
	uint32_t t57 = 448059046U;

    t57 = ((x245%x246)*(x247&x248));

    if (t57 != 3612604020U) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x251 = INT16_MIN;
	static uint64_t t58 = 83LLU;

    t58 = ((x249%x250)*(x251&x252));

    if (t58 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint8_t x253 = 31U;
	int8_t x254 = INT8_MAX;
	uint16_t x255 = UINT16_MAX;
	int64_t x256 = 540232LL;
	int64_t t59 = -207LL;

    t59 = ((x253%x254)*(x255&x256));

    if (t59 != 494264LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x257 = INT8_MIN;
	int32_t x259 = INT32_MAX;
	uint16_t x260 = 3309U;
	int32_t t60 = 1632534;

    t60 = ((x257%x258)*(x259&x260));

    if (t60 != -423552) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x261 = 103;
	uint64_t x262 = UINT64_MAX;
	volatile int8_t x263 = -1;
	uint16_t x264 = UINT16_MAX;
	volatile uint64_t t61 = 3302502LLU;

    t61 = ((x261%x262)*(x263&x264));

    if (t61 != 6750105LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x265 = 2;
	int32_t x267 = -1;
	int64_t t62 = 35500LL;

    t62 = ((x265%x266)*(x267&x268));

    if (t62 != -26747592LL) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x269 = INT16_MAX;
	uint64_t x270 = 40871098LLU;
	static uint16_t x271 = 6245U;
	uint64_t x272 = 214LLU;
	volatile uint64_t t63 = 71299790LLU;

    t63 = ((x269%x270)*(x271&x272));

    if (t63 != 2228156LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x273 = INT64_MIN;
	static int8_t x274 = 6;
	int16_t x275 = -1;
	int16_t x276 = INT16_MAX;
	volatile int64_t t64 = 3302262524LL;

    t64 = ((x273%x274)*(x275&x276));

    if (t64 != -65534LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x277 = 1104;
	int32_t x278 = 20;
	volatile int64_t x279 = -64979781904LL;
	volatile uint64_t t65 = 34951240676917062LLU;

    t65 = ((x277%x278)*(x279&x280));

    if (t65 != 18446743813790424000LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x281 = 3952LLU;
	int16_t x282 = INT16_MIN;
	int64_t x284 = 242825595136828LL;
	volatile uint64_t t66 = 308340042470051LLU;

    t66 = ((x281%x282)*(x283&x284));

    if (t66 != 43740736LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x285 = UINT8_MAX;
	int64_t x286 = INT64_MAX;
	int32_t x287 = -4005971;
	int8_t x288 = 1;
	int64_t t67 = -31395LL;

    t67 = ((x285%x286)*(x287&x288));

    if (t67 != 255LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x289 = 0;
	int32_t x290 = INT32_MIN;
	int8_t x291 = -1;
	static uint32_t x292 = UINT32_MAX;
	volatile uint32_t t68 = 24803U;

    t68 = ((x289%x290)*(x291&x292));

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x293 = 7U;
	static uint32_t x294 = 5429U;
	int32_t x295 = INT32_MAX;
	volatile int64_t x296 = INT64_MIN;
	int64_t t69 = -13351LL;

    t69 = ((x293%x294)*(x295&x296));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x297 = 14LLU;
	int8_t x298 = INT8_MAX;
	volatile int16_t x299 = INT16_MAX;
	static uint16_t x300 = UINT16_MAX;
	static uint64_t t70 = 25LLU;

    t70 = ((x297%x298)*(x299&x300));

    if (t70 != 458738LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x302 = -1;
	static volatile int32_t x303 = 1943;
	int8_t x304 = INT8_MAX;
	static int32_t t71 = 1;

    t71 = ((x301%x302)*(x303&x304));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x305 = 77482798242LL;
	int64_t x306 = INT64_MIN;
	uint32_t x308 = 4763042U;
	int64_t t72 = 298378488LL;

    t72 = ((x305%x306)*(x307&x308));

    if (t72 != 3444110381856900LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x310 = 44U;
	int8_t x312 = INT8_MIN;
	volatile int64_t t73 = 71140501858LL;

    t73 = ((x309%x310)*(x311&x312));

    if (t73 != 1792LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x314 = 249888U;
	static int64_t x315 = INT64_MAX;
	int64_t t74 = 2378453719844LL;

    t74 = ((x313%x314)*(x315&x316));

    if (t74 != 26520LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x317 = INT8_MAX;
	uint64_t x318 = 29LLU;
	int64_t x319 = INT64_MAX;
	static volatile uint64_t t75 = 4314948153749LLU;

    t75 = ((x317%x318)*(x319&x320));

    if (t75 != 23622320117LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x321 = INT8_MAX;
	volatile uint8_t x322 = UINT8_MAX;
	uint32_t x323 = 953335U;
	uint32_t x324 = 9107174U;
	uint32_t t76 = 16441U;

    t76 = ((x321%x322)*(x323&x324));

    if (t76 != 87486490U) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x329 = -1;
	static int64_t x331 = -694LL;
	int16_t x332 = -1;
	volatile int64_t t77 = 2868780780204LL;

    t77 = ((x329%x330)*(x331&x332));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x337 = INT64_MIN;
	uint32_t x338 = UINT32_MAX;
	uint16_t x340 = UINT16_MAX;
	volatile int64_t t78 = -626810LL;

    t78 = ((x337%x338)*(x339&x340));

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x341 = INT8_MAX;
	uint32_t x342 = 3252U;
	uint32_t x343 = UINT32_MAX;
	volatile uint32_t t79 = 65U;

    t79 = ((x341%x342)*(x343&x344));

    if (t79 != 4290805760U) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x345 = 21953361817762LL;
	uint32_t x346 = 28951956U;
	static int32_t x347 = INT32_MAX;
	uint16_t x348 = 57U;
	static volatile int64_t t80 = -617866LL;

    t80 = ((x345%x346)*(x347&x348));

    if (t80 != 1142596578LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x349 = INT16_MAX;
	static volatile int16_t x351 = -9;
	uint16_t x352 = UINT16_MAX;
	int32_t t81 = 7207909;

    t81 = ((x349%x350)*(x351&x352));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x353 = 1;
	volatile int32_t x354 = -123401;
	static int16_t x355 = INT16_MIN;
	int8_t x356 = 61;
	volatile int32_t t82 = -92862506;

    t82 = ((x353%x354)*(x355&x356));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x357 = UINT8_MAX;
	uint16_t x358 = 3799U;
	uint16_t x359 = 259U;

    t83 = ((x357%x358)*(x359&x360));

    if (t83 != 66045LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x361 = 175646889;
	int32_t x362 = INT32_MIN;
	uint16_t x363 = UINT16_MAX;
	static volatile int16_t x364 = 3;
	static volatile int32_t t84 = -495718980;

    t84 = ((x361%x362)*(x363&x364));

    if (t84 != 526940667) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x370 = -1;
	volatile uint64_t x371 = UINT64_MAX;
	static uint8_t x372 = 3U;

    t85 = ((x369%x370)*(x371&x372));

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x373 = -1LL;
	volatile int8_t x374 = INT8_MIN;
	static int32_t x375 = INT32_MIN;
	int64_t t86 = -537293048LL;

    t86 = ((x373%x374)*(x375&x376));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x377 = INT8_MIN;
	static int16_t x378 = -8;
	static uint8_t x379 = UINT8_MAX;
	int32_t x380 = INT32_MAX;
	static volatile int32_t t87 = 1166707;

    t87 = ((x377%x378)*(x379&x380));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x381 = 3180LLU;
	static uint64_t x382 = 26959254838380LLU;
	static volatile int16_t x383 = INT16_MIN;
	uint64_t t88 = 17109284635751547LLU;

    t88 = ((x381%x382)*(x383&x384));

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x385 = 784005U;
	static int8_t x386 = INT8_MAX;
	static uint32_t x387 = 21U;
	volatile uint32_t t89 = 6791U;

    t89 = ((x385%x386)*(x387&x388));

    if (t89 != 714U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x390 = 11U;
	volatile uint16_t x391 = UINT16_MAX;
	int16_t x392 = INT16_MAX;
	volatile int64_t t90 = 57114237244LL;

    t90 = ((x389%x390)*(x391&x392));

    if (t90 != -32767LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint8_t x393 = 15U;
	uint16_t x394 = 598U;
	int16_t x396 = INT16_MIN;

    t91 = ((x393%x394)*(x395&x396));

    if (t91 != -491520LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x397 = INT8_MIN;
	uint32_t x398 = UINT32_MAX;
	int64_t x399 = -1LL;
	static int64_t x400 = -1LL;
	volatile int64_t t92 = 11721025358544956LL;

    t92 = ((x397%x398)*(x399&x400));

    if (t92 != -4294967168LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint8_t x401 = UINT8_MAX;
	volatile int64_t x402 = INT64_MIN;
	volatile uint16_t x403 = 120U;
	static int32_t x404 = INT32_MIN;
	volatile int64_t t93 = -31LL;

    t93 = ((x401%x402)*(x403&x404));

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x405 = INT32_MIN;
	int16_t x406 = -13;
	static int32_t t94 = 0;

    t94 = ((x405%x406)*(x407&x408));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x413 = INT8_MAX;
	int8_t x414 = -1;
	static int32_t x415 = 2523896;
	int64_t x416 = -553LL;
	volatile int64_t t95 = 55486806019843LL;

    t95 = ((x413%x414)*(x415&x416));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int64_t x421 = INT64_MIN;
	int8_t x422 = 2;
	static int16_t x423 = 16038;
	int64_t t96 = -608122LL;

    t96 = ((x421%x422)*(x423&x424));

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x426 = INT16_MIN;
	volatile int8_t x427 = 0;
	static uint64_t x428 = UINT64_MAX;
	static volatile uint64_t t97 = 3625390098719LLU;

    t97 = ((x425%x426)*(x427&x428));

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x430 = -1;
	volatile uint64_t t98 = 1360LLU;

    t98 = ((x429%x430)*(x431&x432));

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x433 = -30608501;
	int16_t x434 = -1;
	static int8_t x435 = INT8_MIN;
	uint32_t x436 = 0U;

    t99 = ((x433%x434)*(x435&x436));

    if (t99 != 0U) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x437 = 1279028LLU;
	int64_t x439 = 1876028510920312943LL;
	int32_t x440 = -1;

    t100 = ((x437%x438)*(x439&x440));

    if (t100 != 14312133542386856588LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x441 = UINT16_MAX;
	int32_t x443 = -1;
	uint16_t x444 = 5987U;
	int32_t t101 = -8;

    t101 = ((x441%x442)*(x443&x444));

    if (t101 != 11974) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x446 = -1;
	uint64_t x447 = 59538LLU;
	static uint32_t x448 = 0U;

    t102 = ((x445%x446)*(x447&x448));

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x450 = 15U;
	static uint16_t x452 = 7U;
	static int32_t t103 = 118236918;

    t103 = ((x449%x450)*(x451&x452));

    if (t103 != 20) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x454 = -1486;
	uint32_t x455 = 15157U;
	int64_t x456 = -1LL;
	static volatile int64_t t104 = -294981111760LL;

    t104 = ((x453%x454)*(x455&x456));

    if (t104 != 2288707LL) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x461 = 5921309LL;
	volatile int32_t x462 = INT32_MIN;
	uint16_t x463 = 0U;
	static volatile int64_t t105 = 148978590303LL;

    t105 = ((x461%x462)*(x463&x464));

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x467 = UINT32_MAX;
	int64_t x468 = 16360992806425LL;
	uint64_t t106 = 729038262296599LLU;

    t106 = ((x465%x466)*(x467&x468));

    if (t106 != 47497971213280LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x469 = 3;
	uint32_t x470 = UINT32_MAX;
	static int64_t x471 = INT64_MIN;
	uint32_t x472 = 636956U;
	int64_t t107 = -184355275537643120LL;

    t107 = ((x469%x470)*(x471&x472));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x474 = INT64_MAX;
	uint32_t x475 = UINT32_MAX;

    t108 = ((x473%x474)*(x475&x476));

    if (t108 != -18LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x477 = -91;
	volatile int8_t x478 = -30;
	uint16_t x479 = UINT16_MAX;
	int8_t x480 = INT8_MIN;
	volatile int32_t t109 = -118070201;

    t109 = ((x477%x478)*(x479&x480));

    if (t109 != -65408) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint8_t x481 = UINT8_MAX;
	int64_t x482 = 262111697107645258LL;
	static volatile int8_t x483 = 0;
	static volatile int16_t x484 = -1;
	volatile int64_t t110 = 2311LL;

    t110 = ((x481%x482)*(x483&x484));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x485 = INT8_MAX;
	int8_t x486 = INT8_MIN;
	volatile int8_t x487 = -1;
	uint8_t x488 = 22U;
	static volatile int32_t t111 = 823210632;

    t111 = ((x485%x486)*(x487&x488));

    if (t111 != 2794) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x489 = 0U;
	volatile uint16_t x490 = 863U;
	static int64_t x491 = -1LL;
	int8_t x492 = INT8_MAX;
	volatile int64_t t112 = 5549979177610LL;

    t112 = ((x489%x490)*(x491&x492));

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x493 = 5633U;
	static uint64_t x494 = 268LLU;
	static int16_t x495 = 104;
	int32_t x496 = INT32_MIN;
	uint64_t t113 = 886393662771LLU;

    t113 = ((x493%x494)*(x495&x496));

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x497 = UINT32_MAX;
	int32_t x498 = INT32_MAX;
	volatile uint16_t x500 = 1900U;

    t114 = ((x497%x498)*(x499&x500));

    if (t114 != 360LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x501 = -1;
	uint16_t x502 = 23211U;
	int8_t x503 = INT8_MAX;
	volatile int16_t x504 = 23;
	int32_t t115 = -130207369;

    t115 = ((x501%x502)*(x503&x504));

    if (t115 != -23) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x509 = INT32_MAX;
	int16_t x510 = INT16_MIN;
	volatile int8_t x511 = INT8_MIN;
	int32_t t116 = 12;

    t116 = ((x509%x510)*(x511&x512));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x513 = INT32_MIN;
	int32_t x514 = -1;
	int16_t x515 = INT16_MIN;
	int8_t x516 = -1;
	volatile int32_t t117 = 148509616;

    t117 = ((x513%x514)*(x515&x516));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x517 = -4834379970142775LL;
	int8_t x518 = 36;
	static volatile int32_t x520 = INT32_MIN;
	int64_t t118 = 13100766587LL;

    t118 = ((x517%x518)*(x519&x520));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x521 = INT64_MIN;
	uint16_t x522 = 971U;
	int64_t x523 = 312072505957540LL;
	static volatile int64_t t119 = -1LL;

    t119 = ((x521%x522)*(x523&x524));

    if (t119 != -11376LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint16_t x526 = UINT16_MAX;
	uint8_t x527 = 0U;
	int32_t x528 = 13522;
	int32_t t120 = -5873605;

    t120 = ((x525%x526)*(x527&x528));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x529 = INT8_MIN;
	volatile uint32_t x530 = 8012U;
	int16_t x531 = INT16_MIN;
	int32_t x532 = INT32_MAX;
	volatile uint32_t t121 = 25U;

    t121 = ((x529%x530)*(x531&x532));

    if (t121 != 4086038528U) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x533 = UINT16_MAX;
	static int8_t x534 = -4;
	int64_t x535 = INT64_MIN;
	volatile uint8_t x536 = 0U;
	static int64_t t122 = -2241LL;

    t122 = ((x533%x534)*(x535&x536));

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x537 = UINT16_MAX;
	int32_t x538 = INT32_MIN;
	volatile int64_t x540 = -917576716LL;
	volatile int64_t t123 = -18242331095772122LL;

    t123 = ((x537%x538)*(x539&x540));

    if (t123 != 80265326329020LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x541 = INT32_MIN;
	static int64_t x542 = -1LL;
	uint8_t x543 = UINT8_MAX;
	int32_t x544 = INT32_MAX;
	int64_t t124 = -161842295LL;

    t124 = ((x541%x542)*(x543&x544));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x545 = -129049;
	int16_t x546 = -1;
	uint16_t x547 = UINT16_MAX;
	uint32_t x548 = UINT32_MAX;
	static volatile uint32_t t125 = 10681U;

    t125 = ((x545%x546)*(x547&x548));

    if (t125 != 0U) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x549 = INT8_MAX;
	int32_t x550 = INT32_MIN;
	uint16_t x552 = 94U;
	int32_t t126 = 41;

    t126 = ((x549%x550)*(x551&x552));

    if (t126 != 11938) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x553 = INT32_MIN;
	uint16_t x555 = UINT16_MAX;
	int64_t x556 = INT64_MIN;
	int64_t t127 = 64369448159232LL;

    t127 = ((x553%x554)*(x555&x556));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x557 = INT32_MAX;
	int32_t x558 = INT32_MAX;
	uint16_t x559 = 25U;
	int32_t t128 = 99;

    t128 = ((x557%x558)*(x559&x560));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x565 = INT16_MIN;
	int16_t x567 = INT16_MIN;
	uint64_t x568 = 5826563464472173LLU;

    t129 = ((x565%x566)*(x567&x568));

    if (t129 != 3166660799796084736LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x570 = 24U;
	uint16_t x571 = UINT16_MAX;
	volatile int16_t x572 = INT16_MIN;

    t130 = ((x569%x570)*(x571&x572));

    if (t130 != 229376) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x573 = 46U;
	int32_t x574 = -1;
	static int16_t x575 = INT16_MIN;
	volatile int32_t t131 = -287;

    t131 = ((x573%x574)*(x575&x576));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x577 = INT64_MIN;
	uint64_t x578 = 683LLU;
	static int64_t x579 = -147165669LL;
	static volatile int32_t x580 = -1;

    t132 = ((x577%x578)*(x579&x580));

    if (t132 != 18446744010869810953LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static int64_t x583 = INT64_MIN;
	static int16_t x584 = 0;
	static uint64_t t133 = 128722205001224424LLU;

    t133 = ((x581%x582)*(x583&x584));

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x587 = INT8_MIN;
	int8_t x588 = INT8_MIN;
	volatile int64_t t134 = 460LL;

    t134 = ((x585%x586)*(x587&x588));

    if (t134 != 4194304LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x590 = 41811LLU;
	uint32_t x591 = 26U;
	volatile int16_t x592 = INT16_MIN;
	static uint64_t t135 = 1743792LLU;

    t135 = ((x589%x590)*(x591&x592));

    if (t135 != 0LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x593 = 2;
	uint16_t x595 = UINT16_MAX;
	int32_t x596 = 174492;
	int32_t t136 = 350;

    t136 = ((x593%x594)*(x595&x596));

    if (t136 != 86840) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x597 = INT8_MAX;
	static volatile uint8_t x598 = UINT8_MAX;
	int32_t x599 = INT32_MAX;
	uint8_t x600 = UINT8_MAX;
	volatile int32_t t137 = -19;

    t137 = ((x597%x598)*(x599&x600));

    if (t137 != 32385) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x601 = -1;
	volatile int32_t t138 = -30998;

    t138 = ((x601%x602)*(x603&x604));

    if (t138 != -256) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x605 = INT16_MAX;
	int16_t x606 = INT16_MAX;
	volatile uint32_t x607 = 1237258845U;
	volatile uint64_t t139 = 941993LLU;

    t139 = ((x605%x606)*(x607&x608));

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint16_t x609 = 2008U;
	int8_t x610 = 3;
	uint16_t x611 = 105U;
	static uint8_t x612 = 3U;
	volatile int32_t t140 = 2;

    t140 = ((x609%x610)*(x611&x612));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x613 = INT8_MAX;
	int32_t x614 = INT32_MIN;
	static int64_t x615 = INT64_MAX;
	uint32_t x616 = UINT32_MAX;
	int64_t t141 = 53265972LL;

    t141 = ((x613%x614)*(x615&x616));

    if (t141 != 545460846465LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x619 = 58933893LLU;
	volatile int16_t x620 = INT16_MIN;
	uint64_t t142 = 1352651LLU;

    t142 = ((x617%x618)*(x619&x620));

    if (t142 != 18446744073356050432LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x622 = 226U;
	static volatile uint8_t x623 = 1U;
	static uint64_t t143 = UINT64_MAX;

    t143 = ((x621%x622)*(x623&x624));

    if (t143 != UINT64_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x625 = UINT8_MAX;
	uint64_t x626 = 16LLU;
	uint64_t x627 = 1781235015307037LLU;
	uint64_t x628 = UINT64_MAX;

    t144 = ((x625%x626)*(x627&x628));

    if (t144 != 26718525229605555LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x629 = INT16_MIN;
	uint16_t x630 = UINT16_MAX;
	volatile uint32_t x631 = 64U;
	volatile int16_t x632 = INT16_MIN;
	uint32_t t145 = 159327762U;

    t145 = ((x629%x630)*(x631&x632));

    if (t145 != 0U) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x633 = INT8_MAX;
	static volatile int8_t x636 = -17;

    t146 = ((x633%x634)*(x635&x636));

    if (t146 != 51677U) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x637 = INT32_MAX;
	int8_t x638 = -1;
	int16_t x639 = 114;
	int32_t t147 = -2532987;

    t147 = ((x637%x638)*(x639&x640));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile uint8_t x641 = 94U;
	int64_t x643 = INT64_MIN;
	int8_t x644 = -1;
	int64_t t148 = 13277385624LL;

    t148 = ((x641%x642)*(x643&x644));

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x645 = INT16_MIN;
	int8_t x646 = 30;
	volatile uint64_t x647 = 157225590448996LLU;
	volatile int8_t x648 = -23;
	volatile uint64_t t149 = 883412607915LLU;

    t149 = ((x645%x646)*(x647&x648));

    if (t149 != 18445486268985959680LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x649 = INT8_MIN;
	volatile int16_t x650 = INT16_MIN;
	int64_t x652 = INT64_MIN;
	volatile int64_t t150 = -2725LL;

    t150 = ((x649%x650)*(x651&x652));

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x653 = INT64_MAX;
	uint8_t x654 = 7U;
	int64_t x656 = INT64_MAX;
	static volatile int64_t t151 = -272135LL;

    t151 = ((x653%x654)*(x655&x656));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x657 = INT8_MIN;
	int64_t x658 = INT64_MIN;
	uint16_t x659 = 6396U;
	uint16_t x660 = UINT16_MAX;
	int64_t t152 = -113341444943478LL;

    t152 = ((x657%x658)*(x659&x660));

    if (t152 != -818688LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x661 = -1;
	static uint16_t x662 = 593U;
	volatile int8_t x663 = INT8_MIN;
	volatile uint32_t t153 = 1102124162U;

    t153 = ((x661%x662)*(x663&x664));

    if (t153 != 0U) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x665 = 604864578LLU;
	int16_t x666 = INT16_MAX;
	int64_t x667 = INT64_MIN;
	volatile int32_t x668 = INT32_MIN;
	uint64_t t154 = 12804LLU;

    t154 = ((x665%x666)*(x667&x668));

    if (t154 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x669 = -1;
	static uint16_t x670 = UINT16_MAX;
	uint32_t x671 = 90495033U;
	int32_t x672 = INT32_MAX;
	static volatile uint32_t t155 = 205238802U;

    t155 = ((x669%x670)*(x671&x672));

    if (t155 != 4204472263U) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x675 = -5;
	int64_t t156 = 7379LL;

    t156 = ((x673%x674)*(x675&x676));

    if (t156 != 66286063618087254LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int64_t x677 = INT64_MIN;
	int64_t x679 = INT64_MAX;

    t157 = ((x677%x678)*(x679&x680));

    if (t157 != -24LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x681 = UINT8_MAX;
	int32_t x683 = -1;
	volatile int64_t x684 = -1LL;

    t158 = ((x681%x682)*(x683&x684));

    if (t158 != -255LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x685 = 2;
	uint64_t x686 = UINT64_MAX;
	volatile int16_t x687 = 100;
	int8_t x688 = -1;
	volatile uint64_t t159 = 4510497781232795681LLU;

    t159 = ((x685%x686)*(x687&x688));

    if (t159 != 200LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint16_t x690 = 8144U;
	static int64_t x691 = -43690LL;
	int16_t x692 = -545;

    t160 = ((x689%x690)*(x691&x692));

    if (t160 != 87380LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x699 = -615;
	static int16_t x700 = INT16_MAX;
	int32_t t161 = 278958494;

    t161 = ((x697%x698)*(x699&x700));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint8_t x703 = 10U;
	volatile int32_t x704 = INT32_MIN;

    t162 = ((x701%x702)*(x703&x704));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x705 = INT64_MIN;
	int32_t x706 = INT32_MIN;
	int16_t x707 = INT16_MIN;
	volatile int64_t x708 = INT64_MIN;
	static int64_t t163 = 126272292486756LL;

    t163 = ((x705%x706)*(x707&x708));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x709 = -59;
	static uint16_t x710 = 16242U;
	uint32_t x712 = 30615732U;
	volatile uint32_t t164 = 3307150U;

    t164 = ((x709%x710)*(x711&x712));

    if (t164 != 4294967060U) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint16_t x714 = UINT16_MAX;
	uint16_t x715 = 291U;
	int64_t x716 = INT64_MIN;
	int64_t t165 = 1415664597596164320LL;

    t165 = ((x713%x714)*(x715&x716));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x725 = -285;
	volatile int32_t x727 = 10;
	int8_t x728 = INT8_MAX;
	uint64_t t166 = 9382LLU;

    t166 = ((x725%x726)*(x727&x728));

    if (t166 != 2126970LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint32_t x729 = 57U;
	volatile int16_t x730 = 1;
	volatile int8_t x732 = -1;

    t167 = ((x729%x730)*(x731&x732));

    if (t167 != 0U) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x735 = 3;
	static volatile int16_t x736 = INT16_MAX;
	volatile int64_t t168 = -24450384412914299LL;

    t168 = ((x733%x734)*(x735&x736));

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x737 = INT8_MAX;
	static volatile int64_t x739 = INT64_MIN;
	volatile uint32_t x740 = UINT32_MAX;
	static volatile int64_t t169 = 568544833129408259LL;

    t169 = ((x737%x738)*(x739&x740));

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x741 = INT32_MIN;
	volatile uint16_t x744 = UINT16_MAX;

    t170 = ((x741%x742)*(x743&x744));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x745 = -2;
	volatile uint16_t x746 = 131U;
	uint64_t x747 = 2045LLU;
	volatile uint64_t t171 = 28841053LLU;

    t171 = ((x745%x746)*(x747&x748));

    if (t171 != 18446744073709551110LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint32_t x749 = UINT32_MAX;
	static uint64_t x750 = UINT64_MAX;
	static int8_t x751 = -1;
	uint64_t x752 = 8325354619370LLU;
	uint64_t t172 = 20295LLU;

    t172 = ((x749%x750)*(x751&x752));

    if (t172 != 7335794622212472342LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x754 = INT64_MAX;
	int16_t x755 = INT16_MIN;
	int16_t x756 = INT16_MAX;

    t173 = ((x753%x754)*(x755&x756));

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x757 = -2057764;
	uint8_t x758 = 48U;
	uint16_t x759 = 1U;
	int16_t x760 = INT16_MIN;
	static int32_t t174 = -6040;

    t174 = ((x757%x758)*(x759&x760));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x761 = 35707142043365LLU;
	int16_t x762 = -378;
	int64_t x763 = -2454922677254850LL;
	volatile uint64_t t175 = 14785298087LLU;

    t175 = ((x761%x762)*(x763&x764));

    if (t175 != 1071214261300950LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint32_t x769 = 143U;
	static int64_t x771 = INT64_MIN;
	volatile uint64_t t176 = 15802232783441249LLU;

    t176 = ((x769%x770)*(x771&x772));

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x775 = 8334658U;
	int64_t t177 = 117984633071LL;

    t177 = ((x773%x774)*(x775&x776));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x777 = INT16_MIN;
	int16_t x778 = INT16_MIN;
	static int32_t x779 = -1;
	int64_t x780 = INT64_MIN;
	volatile int64_t t178 = 3660859830269LL;

    t178 = ((x777%x778)*(x779&x780));

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x781 = -1LL;
	static int32_t x782 = -2585;
	static int32_t x783 = -1;
	uint32_t x784 = 215415328U;

    t179 = ((x781%x782)*(x783&x784));

    if (t179 != -215415328LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x785 = 40;
	int16_t x786 = -164;
	volatile int8_t x787 = INT8_MAX;
	uint32_t x788 = 3927660U;
	uint32_t t180 = 2594457U;

    t180 = ((x785%x786)*(x787&x788));

    if (t180 != 4320U) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x789 = INT8_MIN;
	volatile uint32_t x791 = 535154063U;
	int32_t x792 = -1;
	static uint32_t t181 = 48U;

    t181 = ((x789%x790)*(x791&x792));

    if (t181 != 3787282817U) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x793 = 30U;
	uint8_t x794 = 25U;
	static volatile int16_t x795 = INT16_MAX;
	int16_t x796 = 1098;
	static volatile uint32_t t182 = 2864U;

    t182 = ((x793%x794)*(x795&x796));

    if (t182 != 5490U) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x797 = INT32_MAX;
	uint8_t x798 = 31U;
	uint64_t x799 = UINT64_MAX;
	static int16_t x800 = 1;
	volatile uint64_t t183 = 300699843940LLU;

    t183 = ((x797%x798)*(x799&x800));

    if (t183 != 1LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x805 = 1;
	int16_t x807 = INT16_MIN;
	static uint16_t x808 = 3570U;
	volatile int32_t t184 = 2055425;

    t184 = ((x805%x806)*(x807&x808));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x809 = INT32_MIN;
	int32_t x811 = -33665552;
	uint32_t x812 = 163326U;
	uint64_t t185 = 379607134492LLU;

    t185 = ((x809%x810)*(x811&x812));

    if (t185 != 3127685292544LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x815 = INT16_MAX;
	uint16_t x816 = 4010U;

    t186 = ((x813%x814)*(x815&x816));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x817 = UINT16_MAX;
	int8_t x818 = INT8_MIN;
	int32_t x819 = -80797;
	static int32_t t187 = 9;

    t187 = ((x817%x818)*(x819&x820));

    if (t187 != 127) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x822 = -1;
	int64_t x824 = INT64_MIN;
	volatile int64_t t188 = -22124736LL;

    t188 = ((x821%x822)*(x823&x824));

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x825 = 93U;
	static int16_t x826 = -1;
	uint8_t x827 = 0U;
	int64_t x828 = -1LL;
	volatile int64_t t189 = 521245597702012LL;

    t189 = ((x825%x826)*(x827&x828));

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x833 = 24U;
	volatile int32_t x834 = -1;
	int16_t x836 = 2;
	volatile int64_t t190 = 4674167451629175LL;

    t190 = ((x833%x834)*(x835&x836));

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint8_t x837 = UINT8_MAX;
	volatile uint16_t x838 = 6U;
	static uint16_t x839 = 17U;
	int32_t t191 = -1020789;

    t191 = ((x837%x838)*(x839&x840));

    if (t191 != 51) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x841 = -1;
	static uint64_t x843 = 30041641238LLU;
	static volatile int8_t x844 = INT8_MAX;
	uint64_t t192 = 514212784893065352LLU;

    t192 = ((x841%x842)*(x843&x844));

    if (t192 != 4928LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x845 = INT64_MIN;
	int32_t x847 = INT32_MAX;
	uint32_t x848 = 7U;

    t193 = ((x845%x846)*(x847&x848));

    if (t193 != 56LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x849 = 2U;
	int8_t x850 = 26;
	static volatile uint8_t x851 = UINT8_MAX;
	volatile uint8_t x852 = UINT8_MAX;
	volatile int32_t t194 = 23636;

    t194 = ((x849%x850)*(x851&x852));

    if (t194 != 510) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x854 = -11LL;
	static int8_t x856 = INT8_MAX;
	static volatile int64_t t195 = 16439487139LL;

    t195 = ((x853%x854)*(x855&x856));

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x857 = INT64_MIN;
	int8_t x858 = -3;
	volatile uint32_t x859 = 1035092815U;
	volatile uint64_t x860 = 21304453139556LLU;

    t196 = ((x857%x858)*(x859&x860));

    if (t196 != 18446744073036365688LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x861 = INT32_MAX;
	uint8_t x862 = 28U;
	volatile uint32_t x864 = 1320115053U;

    t197 = ((x861%x862)*(x863&x864));

    if (t197 != 19801725795LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x865 = 0;
	static int16_t x866 = -1;
	int64_t x867 = INT64_MIN;
	int64_t t198 = -4919438981690308LL;

    t198 = ((x865%x866)*(x867&x868));

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x869 = 1011802;
	int32_t x871 = INT32_MAX;
	static int64_t x872 = 45282LL;

    t199 = ((x869%x870)*(x871&x872));

    if (t199 != 181128LL) { NG(); } else { ; }
	
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

