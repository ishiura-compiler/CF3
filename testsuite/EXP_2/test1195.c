
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

volatile int32_t t0 = 22;
int32_t x10 = -1;
volatile uint8_t x11 = UINT8_MAX;
static volatile uint64_t t3 = 370359518977137LLU;
volatile int32_t x20 = INT32_MAX;
int32_t x30 = INT32_MAX;
volatile int64_t t7 = 11007850850LL;
int8_t x47 = INT8_MIN;
uint64_t x57 = 6LLU;
int16_t x59 = INT16_MAX;
int32_t x64 = -1;
int16_t x70 = INT16_MAX;
uint8_t x76 = 23U;
uint32_t x77 = 45568U;
static uint8_t x78 = 7U;
volatile uint32_t t18 = 956968U;
volatile int32_t x101 = -6201;
int32_t t20 = -122;
volatile int32_t t22 = -103786;
volatile uint8_t x120 = 30U;
int32_t t24 = -1613;
static volatile int64_t x121 = 4924604413755126LL;
volatile int64_t x135 = INT64_MIN;
int64_t x136 = 201020LL;
int32_t x138 = INT32_MIN;
volatile int64_t x141 = -1146728344456LL;
volatile int8_t x145 = INT8_MIN;
int8_t x146 = -1;
volatile uint64_t t31 = 16315931649036751LLU;
volatile uint16_t x150 = UINT16_MAX;
static volatile uint64_t t32 = 22991470LLU;
int8_t x161 = 22;
int16_t x165 = -1;
uint32_t x168 = UINT32_MAX;
uint32_t t35 = 415274735U;
uint8_t x178 = UINT8_MAX;
static int64_t t38 = 223385992361LL;
int8_t x199 = INT8_MAX;
uint32_t x202 = UINT32_MAX;
uint16_t x206 = UINT16_MAX;
int64_t t45 = -278074165039594721LL;
uint32_t x219 = UINT32_MAX;
int32_t x226 = INT32_MIN;
uint16_t x230 = UINT16_MAX;
int8_t x234 = -1;
int32_t x235 = INT32_MIN;
uint8_t x237 = 11U;
static volatile int32_t x240 = -18310624;
uint32_t x244 = UINT32_MAX;
uint8_t x250 = 13U;
int8_t x255 = INT8_MAX;
int8_t x256 = INT8_MIN;
int32_t t55 = -5636;
int64_t x258 = 232824896LL;
volatile uint32_t x284 = 223U;
int32_t x299 = INT32_MAX;
uint32_t t64 = 326720U;
static volatile int32_t x325 = -3;
int64_t x326 = INT64_MIN;
int8_t x339 = INT8_MIN;
uint16_t x342 = UINT16_MAX;
volatile int32_t t71 = -1388;
uint8_t x347 = 5U;
volatile uint16_t x350 = 5U;
static volatile int32_t x366 = INT32_MIN;
uint8_t x368 = UINT8_MAX;
int32_t t76 = 50531490;
uint32_t x373 = UINT32_MAX;
static volatile int16_t x380 = -95;
volatile uint64_t x381 = UINT64_MAX;
static uint16_t x384 = 8191U;
uint64_t t80 = 123293606180654LLU;
uint16_t x389 = 6909U;
uint8_t x394 = UINT8_MAX;
int32_t x396 = INT32_MIN;
int32_t x400 = -1;
volatile int64_t t84 = -882176LL;
volatile int8_t x403 = INT8_MIN;
int16_t x413 = -1;
uint32_t x414 = 40384567U;
int8_t x415 = INT8_MIN;
uint64_t x419 = 78221368180443157LLU;
static int8_t x424 = INT8_MIN;
static int32_t t92 = 507247;
int16_t x447 = INT16_MAX;
volatile uint64_t t93 = 173927255286LLU;
int64_t x451 = -722071504840085LL;
int64_t t94 = 248LL;
static int16_t x453 = INT16_MIN;
static int64_t x455 = INT64_MAX;
int64_t x465 = 1455008803300797947LL;
int8_t x467 = 15;
int64_t t98 = -27800901293LL;
int32_t x469 = INT32_MAX;
uint32_t x476 = 150U;
int64_t x479 = INT64_MIN;
volatile int32_t x480 = INT32_MIN;
int32_t t101 = -227089;
volatile int8_t x484 = INT8_MIN;
volatile int32_t t102 = 107;
uint64_t x486 = 142570383LLU;
int64_t x492 = -1LL;
uint8_t x497 = 0U;
int32_t x501 = -1;
volatile int16_t x508 = INT16_MAX;
int64_t x512 = INT64_MAX;
int64_t x519 = -1LL;
int64_t t111 = 36LL;
static uint64_t x528 = UINT64_MAX;
volatile int64_t x535 = INT64_MIN;
static int32_t x536 = -1403696;
uint32_t t114 = 628672U;
int64_t x541 = -988936326210224112LL;
volatile int64_t x561 = 1066020119627LL;
volatile int64_t x563 = -1LL;
static int64_t t118 = 11LL;
int32_t x570 = INT32_MIN;
int16_t x582 = INT16_MAX;
int32_t x583 = 436435576;
uint64_t x598 = UINT64_MAX;
int64_t x601 = 1LL;
int8_t x604 = 25;
int64_t x605 = -13123LL;
int64_t t125 = -14205899217991637LL;
volatile int8_t x620 = INT8_MIN;
static int32_t t127 = 3591757;
static volatile int64_t x629 = 6623309LL;
uint64_t x640 = 15LLU;
int64_t x649 = INT64_MAX;
volatile int16_t x651 = -12;
volatile int16_t x654 = 8812;
static volatile uint32_t x658 = UINT32_MAX;
int8_t x660 = 1;
volatile uint8_t x663 = 16U;
int16_t x675 = -6;
volatile int16_t x677 = INT16_MIN;
volatile int64_t t142 = -15366516LL;
uint8_t x686 = 3U;
int16_t x688 = -16;
uint16_t x689 = 21812U;
uint16_t x695 = UINT16_MAX;
volatile int64_t x697 = -1LL;
uint64_t x699 = 11513266846LLU;
int64_t t147 = 2LL;
static uint8_t x701 = UINT8_MAX;
uint32_t t148 = 10286U;
static int64_t x707 = INT64_MIN;
int64_t x710 = -87717LL;
int64_t x713 = -1688233856315903LL;
volatile int64_t t151 = -3LL;
int8_t x719 = -1;
uint16_t x720 = 1960U;
static uint64_t x726 = UINT64_MAX;
volatile int16_t x738 = 1;
int64_t x739 = 95386LL;
static uint64_t x741 = 503227LLU;
int32_t x751 = INT32_MIN;
int32_t x755 = -5;
volatile int32_t t160 = -67157;
int16_t x762 = INT16_MIN;
int64_t t162 = -1LL;
int8_t x770 = -5;
volatile int16_t x772 = -1;
int8_t x779 = INT8_MIN;
int64_t x783 = -1LL;
int8_t x790 = -11;
static int64_t x797 = 315872519450126LL;
static int16_t x803 = INT16_MAX;
volatile uint64_t t170 = 13LLU;
uint64_t x810 = UINT64_MAX;
uint16_t x811 = UINT16_MAX;
static volatile uint64_t x813 = 509243LLU;
int16_t x814 = INT16_MAX;
volatile uint8_t x816 = UINT8_MAX;
uint64_t t172 = 45731878LLU;
static int8_t x819 = -1;
uint32_t x829 = 3037U;
int64_t x830 = INT64_MIN;
int8_t x832 = INT8_MAX;
volatile int32_t t178 = -53;
uint8_t x844 = 7U;
static int16_t x845 = 0;
int16_t x847 = INT16_MIN;
int64_t x850 = INT64_MIN;
int8_t x854 = 0;
int8_t x863 = INT8_MIN;
int8_t x865 = -1;
uint32_t x877 = UINT32_MAX;
uint64_t x880 = 185388LLU;
int8_t x882 = 17;
volatile uint64_t x887 = 498539965LLU;
int32_t t190 = 6;
volatile int16_t x892 = 9796;
static volatile int32_t t192 = 136768864;
volatile uint8_t x904 = 2U;
int64_t x905 = -1LL;
static volatile int64_t t194 = -1079LL;
uint16_t x909 = 20149U;
static int32_t x912 = 305665092;
int8_t x913 = -1;
volatile int64_t x924 = INT64_MIN;
volatile int64_t t197 = 339LL;
volatile int16_t x932 = -3372;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	int64_t x2 = INT64_MIN;
	int8_t x3 = INT8_MAX;
	int8_t x4 = -2;

    t0 = ((x1-(x2!=x3))%x4);

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 5436944U;
	static int32_t x6 = 478409746;
	volatile int32_t x7 = -1;
	int8_t x8 = -14;
	volatile uint32_t t1 = 1359121539U;

    t1 = ((x5-(x6!=x7))%x8);

    if (t1 != 5436943U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = UINT8_MAX;
	int32_t x12 = 6940;
	int32_t t2 = -440277828;

    t2 = ((x9-(x10!=x11))%x12);

    if (t2 != 254) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x13 = UINT64_MAX;
	uint16_t x14 = 490U;
	int64_t x15 = -2914LL;
	int32_t x16 = INT32_MIN;

    t3 = ((x13-(x14!=x15))%x16);

    if (t3 != 2147483646LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MIN;
	int16_t x18 = INT16_MAX;
	uint32_t x19 = UINT32_MAX;
	volatile int32_t t4 = 1;

    t4 = ((x17-(x18!=x19))%x20);

    if (t4 != -32769) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x25 = 3;
	volatile int64_t x26 = INT64_MAX;
	volatile int64_t x27 = INT64_MIN;
	uint32_t x28 = UINT32_MAX;
	static uint32_t t5 = 1U;

    t5 = ((x25-(x26!=x27))%x28);

    if (t5 != 2U) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x29 = INT8_MIN;
	uint8_t x31 = 28U;
	volatile int8_t x32 = INT8_MIN;
	static int32_t t6 = -441;

    t6 = ((x29-(x30!=x31))%x32);

    if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x37 = INT32_MAX;
	volatile int32_t x38 = -1674125;
	static volatile int8_t x39 = -1;
	volatile int64_t x40 = INT64_MAX;

    t7 = ((x37-(x38!=x39))%x40);

    if (t7 != 2147483646LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x45 = -13977;
	int32_t x46 = INT32_MIN;
	volatile int32_t x48 = INT32_MAX;
	int32_t t8 = -1702;

    t8 = ((x45-(x46!=x47))%x48);

    if (t8 != -13978) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x49 = -47042878LL;
	volatile int32_t x50 = -1;
	int64_t x51 = -6197LL;
	int8_t x52 = 3;
	int64_t t9 = 249250009968656162LL;

    t9 = ((x49-(x50!=x51))%x52);

    if (t9 != -2LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x53 = 2U;
	static int64_t x54 = INT64_MIN;
	volatile uint32_t x55 = 250U;
	uint64_t x56 = 1039798146683058262LLU;
	static volatile uint64_t t10 = 857314197LLU;

    t10 = ((x53-(x54!=x55))%x56);

    if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x58 = 6044;
	static uint8_t x60 = 11U;
	uint64_t t11 = 60708LLU;

    t11 = ((x57-(x58!=x59))%x60);

    if (t11 != 5LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x61 = -1;
	int64_t x62 = -2812058LL;
	volatile int8_t x63 = 0;
	static volatile int32_t t12 = -54818;

    t12 = ((x61-(x62!=x63))%x64);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x65 = 76U;
	int8_t x66 = INT8_MIN;
	int16_t x67 = 253;
	int8_t x68 = INT8_MIN;
	volatile uint32_t t13 = 97U;

    t13 = ((x65-(x66!=x67))%x68);

    if (t13 != 75U) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int64_t x69 = 71474650LL;
	static int16_t x71 = INT16_MIN;
	int16_t x72 = -118;
	volatile int64_t t14 = -491355110527LL;

    t14 = ((x69-(x70!=x71))%x72);

    if (t14 != 43LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x73 = -1;
	uint16_t x74 = 89U;
	int16_t x75 = 6354;
	volatile int32_t t15 = 0;

    t15 = ((x73-(x74!=x75))%x76);

    if (t15 != -2) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x79 = 17260048390LLU;
	int8_t x80 = INT8_MIN;
	uint32_t t16 = 2092567913U;

    t16 = ((x77-(x78!=x79))%x80);

    if (t16 != 45567U) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x85 = 978LLU;
	volatile int8_t x86 = -1;
	int64_t x87 = -1LL;
	int8_t x88 = INT8_MAX;
	static volatile uint64_t t17 = 157486LLU;

    t17 = ((x85-(x86!=x87))%x88);

    if (t17 != 89LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x93 = 25178U;
	volatile int8_t x94 = INT8_MIN;
	int8_t x95 = -1;
	uint8_t x96 = UINT8_MAX;

    t18 = ((x93-(x94!=x95))%x96);

    if (t18 != 187U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x97 = UINT64_MAX;
	uint64_t x98 = UINT64_MAX;
	static int64_t x99 = -1LL;
	int32_t x100 = INT32_MIN;
	volatile uint64_t t19 = 401395173310786836LLU;

    t19 = ((x97-(x98!=x99))%x100);

    if (t19 != 2147483647LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint16_t x102 = 8056U;
	uint8_t x103 = UINT8_MAX;
	static uint16_t x104 = UINT16_MAX;

    t20 = ((x101-(x102!=x103))%x104);

    if (t20 != -6202) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x105 = INT16_MAX;
	int64_t x106 = INT64_MAX;
	int16_t x107 = INT16_MAX;
	volatile int8_t x108 = INT8_MIN;
	volatile int32_t t21 = 69744;

    t21 = ((x105-(x106!=x107))%x108);

    if (t21 != 126) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x109 = INT16_MAX;
	uint64_t x110 = 1482645746751LLU;
	int16_t x111 = -1;
	volatile uint16_t x112 = 16U;

    t22 = ((x109-(x110!=x111))%x112);

    if (t22 != 14) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x113 = 13;
	int16_t x114 = INT16_MAX;
	int16_t x115 = INT16_MIN;
	int8_t x116 = INT8_MAX;
	int32_t t23 = -25;

    t23 = ((x113-(x114!=x115))%x116);

    if (t23 != 12) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x117 = 29;
	static volatile int64_t x118 = INT64_MAX;
	int32_t x119 = -1;

    t24 = ((x117-(x118!=x119))%x120);

    if (t24 != 28) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x122 = -1;
	volatile uint32_t x123 = 896148U;
	volatile int16_t x124 = -3960;
	static int64_t t25 = -48674LL;

    t25 = ((x121-(x122!=x123))%x124);

    if (t25 != 1925LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x125 = -604460416719LL;
	int8_t x126 = INT8_MAX;
	int64_t x127 = 70718LL;
	int8_t x128 = INT8_MIN;
	int64_t t26 = -5326299LL;

    t26 = ((x125-(x126!=x127))%x128);

    if (t26 != -80LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x129 = UINT16_MAX;
	int32_t x130 = INT32_MIN;
	uint64_t x131 = 48281165LLU;
	int64_t x132 = INT64_MIN;
	int64_t t27 = -1LL;

    t27 = ((x129-(x130!=x131))%x132);

    if (t27 != 65534LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x133 = INT8_MIN;
	static uint64_t x134 = UINT64_MAX;
	volatile int64_t t28 = 187126632226019LL;

    t28 = ((x133-(x134!=x135))%x136);

    if (t28 != -129LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint32_t x137 = 26059837U;
	static volatile int16_t x139 = 102;
	int16_t x140 = INT16_MAX;
	static uint32_t t29 = 32636U;

    t29 = ((x137-(x138!=x139))%x140);

    if (t29 != 10071U) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x142 = -1LL;
	static uint64_t x143 = 25950211631LLU;
	uint64_t x144 = 78LLU;
	uint64_t t30 = 0LLU;

    t30 = ((x141-(x142!=x143))%x144);

    if (t30 != 35LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x147 = 5;
	uint64_t x148 = 14227LLU;

    t31 = ((x145-(x146!=x147))%x148);

    if (t31 != 1773LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x149 = 357047382LLU;
	int8_t x151 = INT8_MAX;
	uint32_t x152 = UINT32_MAX;

    t32 = ((x149-(x150!=x151))%x152);

    if (t32 != 357047381LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint16_t x157 = UINT16_MAX;
	uint32_t x158 = 47U;
	uint16_t x159 = 5709U;
	int64_t x160 = INT64_MIN;
	volatile int64_t t33 = -2869LL;

    t33 = ((x157-(x158!=x159))%x160);

    if (t33 != 65534LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x162 = 12020971765304318LLU;
	static int64_t x163 = INT64_MAX;
	static int8_t x164 = 9;
	volatile int32_t t34 = -15366;

    t34 = ((x161-(x162!=x163))%x164);

    if (t34 != 3) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x166 = UINT16_MAX;
	volatile int32_t x167 = INT32_MIN;

    t35 = ((x165-(x166!=x167))%x168);

    if (t35 != 4294967294U) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x169 = INT16_MIN;
	volatile uint8_t x170 = 25U;
	int32_t x171 = INT32_MIN;
	static uint16_t x172 = 12U;
	int32_t t36 = 276818027;

    t36 = ((x169-(x170!=x171))%x172);

    if (t36 != -9) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x177 = INT16_MIN;
	uint16_t x179 = 33U;
	uint32_t x180 = 401025882U;
	uint32_t t37 = 4369U;

    t37 = ((x177-(x178!=x179))%x180);

    if (t37 != 284675707U) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x181 = 2789LL;
	static uint16_t x182 = 1500U;
	int32_t x183 = INT32_MAX;
	int8_t x184 = INT8_MAX;

    t38 = ((x181-(x182!=x183))%x184);

    if (t38 != 121LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x185 = -1LL;
	volatile int32_t x186 = -22259843;
	uint64_t x187 = 6676322271808727753LLU;
	volatile int32_t x188 = 6052798;
	int64_t t39 = 11157LL;

    t39 = ((x185-(x186!=x187))%x188);

    if (t39 != -2LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint32_t x189 = 730699525U;
	int64_t x190 = -105246793561959911LL;
	uint32_t x191 = UINT32_MAX;
	static int8_t x192 = -1;
	uint32_t t40 = 1U;

    t40 = ((x189-(x190!=x191))%x192);

    if (t40 != 730699524U) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile uint16_t x193 = 5U;
	int16_t x194 = INT16_MAX;
	static int16_t x195 = -34;
	int32_t x196 = INT32_MIN;
	static int32_t t41 = -10630;

    t41 = ((x193-(x194!=x195))%x196);

    if (t41 != 4) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint32_t x197 = 128333374U;
	int32_t x198 = -944101063;
	int64_t x200 = -1209948599285979290LL;
	volatile int64_t t42 = -32557928205041LL;

    t42 = ((x197-(x198!=x199))%x200);

    if (t42 != 128333373LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x201 = 0;
	int16_t x203 = 10093;
	uint8_t x204 = 7U;
	volatile int32_t t43 = -10019208;

    t43 = ((x201-(x202!=x203))%x204);

    if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint32_t x205 = 4469U;
	static int32_t x207 = 2067725;
	volatile uint32_t x208 = UINT32_MAX;
	volatile uint32_t t44 = 90590U;

    t44 = ((x205-(x206!=x207))%x208);

    if (t44 != 4468U) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint16_t x213 = UINT16_MAX;
	volatile uint8_t x214 = 125U;
	static int32_t x215 = -1;
	int64_t x216 = INT64_MAX;

    t45 = ((x213-(x214!=x215))%x216);

    if (t45 != 65534LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x217 = -4;
	static uint16_t x218 = 10100U;
	int32_t x220 = INT32_MIN;
	static int32_t t46 = -252443;

    t46 = ((x217-(x218!=x219))%x220);

    if (t46 != -5) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x221 = 15571U;
	uint16_t x222 = 14248U;
	uint32_t x223 = UINT32_MAX;
	int8_t x224 = INT8_MAX;
	int32_t t47 = 397868270;

    t47 = ((x221-(x222!=x223))%x224);

    if (t47 != 76) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint8_t x225 = 2U;
	static int64_t x227 = INT64_MIN;
	static int16_t x228 = INT16_MIN;
	int32_t t48 = -28540;

    t48 = ((x225-(x226!=x227))%x228);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x229 = -1;
	uint8_t x231 = 94U;
	uint32_t x232 = 53578U;
	volatile uint32_t t49 = 3U;

    t49 = ((x229-(x230!=x231))%x232);

    if (t49 != 47658U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x233 = 494640943U;
	static volatile uint64_t x236 = UINT64_MAX;
	uint64_t t50 = 66434525710LLU;

    t50 = ((x233-(x234!=x235))%x236);

    if (t50 != 494640942LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x238 = UINT16_MAX;
	int64_t x239 = INT64_MAX;
	static volatile int32_t t51 = -510911019;

    t51 = ((x237-(x238!=x239))%x240);

    if (t51 != 10) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x241 = -1;
	int16_t x242 = INT16_MIN;
	static volatile int16_t x243 = INT16_MAX;
	volatile uint32_t t52 = 231369089U;

    t52 = ((x241-(x242!=x243))%x244);

    if (t52 != 4294967294U) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x245 = -1;
	int8_t x246 = 57;
	uint64_t x247 = 9831020334888188LLU;
	volatile int8_t x248 = INT8_MIN;
	volatile int32_t t53 = -371;

    t53 = ((x245-(x246!=x247))%x248);

    if (t53 != -2) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x249 = 555LLU;
	static int8_t x251 = 0;
	static uint32_t x252 = UINT32_MAX;
	volatile uint64_t t54 = 199LLU;

    t54 = ((x249-(x250!=x251))%x252);

    if (t54 != 554LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x253 = -1;
	uint64_t x254 = 5495844098751523953LLU;

    t55 = ((x253-(x254!=x255))%x256);

    if (t55 != -2) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x257 = -1;
	int16_t x259 = -538;
	volatile int64_t x260 = INT64_MIN;
	int64_t t56 = -7735068LL;

    t56 = ((x257-(x258!=x259))%x260);

    if (t56 != -2LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x265 = -53;
	static uint16_t x266 = 75U;
	int16_t x267 = INT16_MIN;
	int16_t x268 = INT16_MIN;
	static int32_t t57 = 13722;

    t57 = ((x265-(x266!=x267))%x268);

    if (t57 != -54) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint16_t x269 = UINT16_MAX;
	volatile int32_t x270 = -1;
	int8_t x271 = -2;
	volatile uint64_t x272 = 42910518LLU;
	uint64_t t58 = 2904405561580076031LLU;

    t58 = ((x269-(x270!=x271))%x272);

    if (t58 != 65534LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x277 = INT64_MAX;
	uint8_t x278 = UINT8_MAX;
	static int16_t x279 = 0;
	uint64_t x280 = 19741608002727LLU;
	static uint64_t t59 = 0LLU;

    t59 = ((x277-(x278!=x279))%x280);

    if (t59 != 13811548710498LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int8_t x281 = INT8_MAX;
	volatile int8_t x282 = -1;
	uint8_t x283 = 43U;
	volatile uint32_t t60 = 68U;

    t60 = ((x281-(x282!=x283))%x284);

    if (t60 != 126U) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x285 = INT8_MAX;
	uint16_t x286 = 82U;
	int16_t x287 = 4;
	int32_t x288 = INT32_MIN;
	static volatile int32_t t61 = 208;

    t61 = ((x285-(x286!=x287))%x288);

    if (t61 != 126) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x289 = INT8_MIN;
	int16_t x290 = 43;
	uint64_t x291 = 3542265294LLU;
	int8_t x292 = INT8_MIN;
	volatile int32_t t62 = 1122929;

    t62 = ((x289-(x290!=x291))%x292);

    if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x293 = 216428458228LLU;
	volatile int8_t x294 = INT8_MIN;
	uint16_t x295 = UINT16_MAX;
	int32_t x296 = -1;
	uint64_t t63 = 2128350653LLU;

    t63 = ((x293-(x294!=x295))%x296);

    if (t63 != 216428458227LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x297 = -1;
	int64_t x298 = -192248LL;
	uint32_t x300 = 9667U;

    t64 = ((x297-(x298!=x299))%x300);

    if (t64 != 6197U) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int32_t x301 = INT32_MAX;
	int64_t x302 = INT64_MAX;
	volatile uint32_t x303 = 839665145U;
	static int64_t x304 = INT64_MIN;
	static int64_t t65 = 3358037605LL;

    t65 = ((x301-(x302!=x303))%x304);

    if (t65 != 2147483646LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x309 = UINT32_MAX;
	uint64_t x310 = 24720LLU;
	int32_t x311 = -1;
	static volatile uint32_t x312 = 601084359U;
	uint32_t t66 = 89966U;

    t66 = ((x309-(x310!=x311))%x312);

    if (t66 != 87376781U) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x313 = 36U;
	int32_t x314 = INT32_MAX;
	uint64_t x315 = 10LLU;
	uint16_t x316 = 1843U;
	volatile int32_t t67 = -29090701;

    t67 = ((x313-(x314!=x315))%x316);

    if (t67 != 35) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x327 = UINT64_MAX;
	volatile int32_t x328 = INT32_MIN;
	volatile int32_t t68 = -13;

    t68 = ((x325-(x326!=x327))%x328);

    if (t68 != -4) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x333 = UINT64_MAX;
	int32_t x334 = -849;
	int32_t x335 = INT32_MIN;
	int64_t x336 = INT64_MIN;
	volatile uint64_t t69 = 1073337832988LLU;

    t69 = ((x333-(x334!=x335))%x336);

    if (t69 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x337 = -4498;
	int64_t x338 = 651042631121488LL;
	uint32_t x340 = UINT32_MAX;
	volatile uint32_t t70 = 40U;

    t70 = ((x337-(x338!=x339))%x340);

    if (t70 != 4294962797U) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x341 = -1;
	int16_t x343 = -81;
	int32_t x344 = INT32_MIN;

    t71 = ((x341-(x342!=x343))%x344);

    if (t71 != -2) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x345 = INT16_MIN;
	int16_t x346 = 561;
	uint8_t x348 = 73U;
	static int32_t t72 = -1546;

    t72 = ((x345-(x346!=x347))%x348);

    if (t72 != -65) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x349 = UINT32_MAX;
	static uint16_t x351 = UINT16_MAX;
	int16_t x352 = -1;
	uint32_t t73 = 1U;

    t73 = ((x349-(x350!=x351))%x352);

    if (t73 != 4294967294U) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x357 = INT16_MAX;
	int8_t x358 = -23;
	static int16_t x359 = INT16_MAX;
	int32_t x360 = INT32_MIN;
	volatile int32_t t74 = 50547671;

    t74 = ((x357-(x358!=x359))%x360);

    if (t74 != 32766) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x361 = -10437256;
	static int32_t x362 = INT32_MIN;
	int8_t x363 = 1;
	int8_t x364 = INT8_MIN;
	volatile int32_t t75 = 2033;

    t75 = ((x361-(x362!=x363))%x364);

    if (t75 != -9) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x365 = INT8_MIN;
	int8_t x367 = 43;

    t76 = ((x365-(x366!=x367))%x368);

    if (t76 != -129) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x369 = INT8_MIN;
	int64_t x370 = INT64_MIN;
	uint8_t x371 = 5U;
	uint8_t x372 = 7U;
	int32_t t77 = 835;

    t77 = ((x369-(x370!=x371))%x372);

    if (t77 != -3) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x374 = INT32_MIN;
	int32_t x375 = INT32_MIN;
	int16_t x376 = INT16_MIN;
	static volatile uint32_t t78 = 345U;

    t78 = ((x373-(x374!=x375))%x376);

    if (t78 != 32767U) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint8_t x377 = 117U;
	uint64_t x378 = 14LLU;
	int32_t x379 = INT32_MAX;
	volatile int32_t t79 = 1;

    t79 = ((x377-(x378!=x379))%x380);

    if (t79 != 21) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x382 = 49;
	int64_t x383 = -1166288149810281LL;

    t80 = ((x381-(x382!=x383))%x384);

    if (t80 != 4094LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x385 = -1;
	int64_t x386 = INT64_MIN;
	int8_t x387 = INT8_MAX;
	uint64_t x388 = 755644LLU;
	volatile uint64_t t81 = 196026448516358LLU;

    t81 = ((x385-(x386!=x387))%x388);

    if (t81 != 29046LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int16_t x390 = INT16_MAX;
	volatile int64_t x391 = INT64_MAX;
	int64_t x392 = 53LL;
	int64_t t82 = -568LL;

    t82 = ((x389-(x390!=x391))%x392);

    if (t82 != 18LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x393 = 1;
	volatile uint8_t x395 = UINT8_MAX;
	volatile int32_t t83 = 131280998;

    t83 = ((x393-(x394!=x395))%x396);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x397 = INT64_MAX;
	static uint64_t x398 = 122339708082141LLU;
	int32_t x399 = 432177;

    t84 = ((x397-(x398!=x399))%x400);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x401 = -5;
	static int16_t x402 = -132;
	int64_t x404 = INT64_MAX;
	volatile int64_t t85 = 1811924168LL;

    t85 = ((x401-(x402!=x403))%x404);

    if (t85 != -6LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x405 = INT8_MIN;
	uint8_t x406 = 90U;
	static uint64_t x407 = UINT64_MAX;
	int8_t x408 = INT8_MAX;
	int32_t t86 = -209330;

    t86 = ((x405-(x406!=x407))%x408);

    if (t86 != -2) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x409 = 383;
	uint8_t x410 = 43U;
	uint8_t x411 = 50U;
	int16_t x412 = INT16_MAX;
	int32_t t87 = -366540557;

    t87 = ((x409-(x410!=x411))%x412);

    if (t87 != 382) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x416 = UINT64_MAX;
	static volatile uint64_t t88 = 1257101573LLU;

    t88 = ((x413-(x414!=x415))%x416);

    if (t88 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x417 = UINT8_MAX;
	static uint32_t x418 = UINT32_MAX;
	static volatile uint64_t x420 = UINT64_MAX;
	static volatile uint64_t t89 = 800145LLU;

    t89 = ((x417-(x418!=x419))%x420);

    if (t89 != 254LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint64_t x421 = UINT64_MAX;
	volatile int64_t x422 = -4473314097443LL;
	int8_t x423 = 0;
	static volatile uint64_t t90 = 94280097420LLU;

    t90 = ((x421-(x422!=x423))%x424);

    if (t90 != 126LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x437 = INT64_MIN;
	int32_t x438 = -1;
	int64_t x439 = -1LL;
	static volatile int32_t x440 = -1;
	int64_t t91 = 1904652751093LL;

    t91 = ((x437-(x438!=x439))%x440);

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint16_t x441 = 1U;
	static int32_t x442 = INT32_MAX;
	static volatile int8_t x443 = 1;
	static uint8_t x444 = UINT8_MAX;

    t92 = ((x441-(x442!=x443))%x444);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x445 = 5864182856269410978LLU;
	int32_t x446 = INT32_MIN;
	int8_t x448 = -32;

    t93 = ((x445-(x446!=x447))%x448);

    if (t93 != 5864182856269410977LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x449 = -3591LL;
	int32_t x450 = 325626;
	int8_t x452 = INT8_MIN;

    t94 = ((x449-(x450!=x451))%x452);

    if (t94 != -8LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x454 = INT32_MIN;
	uint16_t x456 = UINT16_MAX;
	int32_t t95 = -392260173;

    t95 = ((x453-(x454!=x455))%x456);

    if (t95 != -32769) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x457 = UINT8_MAX;
	int32_t x458 = INT32_MIN;
	int32_t x459 = INT32_MIN;
	int16_t x460 = -1;
	volatile int32_t t96 = 39961209;

    t96 = ((x457-(x458!=x459))%x460);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x461 = -1;
	int32_t x462 = INT32_MIN;
	uint8_t x463 = 0U;
	static volatile int64_t x464 = INT64_MAX;
	volatile int64_t t97 = -144987942694929227LL;

    t97 = ((x461-(x462!=x463))%x464);

    if (t97 != -2LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x466 = 336U;
	int16_t x468 = INT16_MIN;

    t98 = ((x465-(x466!=x467))%x468);

    if (t98 != 28154LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x470 = INT16_MAX;
	volatile int8_t x471 = INT8_MAX;
	uint8_t x472 = 13U;
	int32_t t99 = -572;

    t99 = ((x469-(x470!=x471))%x472);

    if (t99 != 9) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x473 = -1;
	static volatile int64_t x474 = INT64_MAX;
	volatile int32_t x475 = -1;
	uint32_t t100 = 1086508U;

    t100 = ((x473-(x474!=x475))%x476);

    if (t100 != 44U) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x477 = INT16_MIN;
	int16_t x478 = 14022;

    t101 = ((x477-(x478!=x479))%x480);

    if (t101 != -32769) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x481 = 5U;
	int32_t x482 = INT32_MIN;
	int8_t x483 = 0;

    t102 = ((x481-(x482!=x483))%x484);

    if (t102 != 4) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x485 = 58753143788846267LL;
	int64_t x487 = 1448LL;
	volatile int8_t x488 = 3;
	static int64_t t103 = -7000018166396447LL;

    t103 = ((x485-(x486!=x487))%x488);

    if (t103 != 1LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint64_t x489 = 646333LLU;
	uint32_t x490 = 1820950U;
	uint8_t x491 = UINT8_MAX;
	static uint64_t t104 = 1LLU;

    t104 = ((x489-(x490!=x491))%x492);

    if (t104 != 646332LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x498 = INT32_MIN;
	uint64_t x499 = UINT64_MAX;
	int64_t x500 = -1LL;
	static int64_t t105 = -11253LL;

    t105 = ((x497-(x498!=x499))%x500);

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint16_t x502 = UINT16_MAX;
	int8_t x503 = -2;
	int8_t x504 = 28;
	int32_t t106 = -2575;

    t106 = ((x501-(x502!=x503))%x504);

    if (t106 != -2) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x505 = 6644U;
	volatile int32_t x506 = INT32_MIN;
	static int64_t x507 = INT64_MIN;
	uint32_t t107 = 47U;

    t107 = ((x505-(x506!=x507))%x508);

    if (t107 != 6643U) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x509 = -100;
	uint16_t x510 = 37U;
	static uint16_t x511 = 9182U;
	volatile int64_t t108 = 63933094LL;

    t108 = ((x509-(x510!=x511))%x512);

    if (t108 != -101LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x513 = INT16_MIN;
	uint32_t x514 = 590327U;
	uint16_t x515 = 7U;
	volatile int32_t x516 = INT32_MIN;
	volatile int32_t t109 = -754228;

    t109 = ((x513-(x514!=x515))%x516);

    if (t109 != -32769) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x517 = UINT32_MAX;
	int16_t x518 = 14041;
	static int64_t x520 = INT64_MIN;
	int64_t t110 = 456755912322304LL;

    t110 = ((x517-(x518!=x519))%x520);

    if (t110 != 4294967294LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x521 = -1LL;
	volatile int64_t x522 = -13542005109867763LL;
	int32_t x523 = INT32_MAX;
	int64_t x524 = 1440498465617LL;

    t111 = ((x521-(x522!=x523))%x524);

    if (t111 != -2LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x525 = 3;
	int8_t x526 = INT8_MAX;
	uint16_t x527 = 602U;
	volatile uint64_t t112 = 1LLU;

    t112 = ((x525-(x526!=x527))%x528);

    if (t112 != 2LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x529 = INT16_MAX;
	int8_t x530 = INT8_MIN;
	uint8_t x531 = 2U;
	int64_t x532 = -2LL;
	int64_t t113 = 21165509797252LL;

    t113 = ((x529-(x530!=x531))%x532);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x533 = UINT32_MAX;
	static int32_t x534 = -1;

    t114 = ((x533-(x534!=x535))%x536);

    if (t114 != 1403694U) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x537 = INT16_MAX;
	uint16_t x538 = 388U;
	int8_t x539 = 0;
	uint8_t x540 = 12U;
	volatile int32_t t115 = 1393891;

    t115 = ((x537-(x538!=x539))%x540);

    if (t115 != 6) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x542 = 2;
	volatile int64_t x543 = -6286350LL;
	int64_t x544 = INT64_MAX;
	volatile int64_t t116 = -617003LL;

    t116 = ((x541-(x542!=x543))%x544);

    if (t116 != -988936326210224113LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x553 = INT8_MIN;
	int32_t x554 = INT32_MAX;
	int32_t x555 = INT32_MIN;
	volatile uint64_t x556 = 6LLU;
	uint64_t t117 = 331538LLU;

    t117 = ((x553-(x554!=x555))%x556);

    if (t117 != 1LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x562 = 8302318007566314348LLU;
	int64_t x564 = -1LL;

    t118 = ((x561-(x562!=x563))%x564);

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x565 = 2815959601750496LL;
	volatile uint32_t x566 = UINT32_MAX;
	static int64_t x567 = INT64_MAX;
	volatile int32_t x568 = 67043777;
	int64_t t119 = -27165584755LL;

    t119 = ((x565-(x566!=x567))%x568);

    if (t119 != 20776787LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x569 = INT16_MIN;
	int64_t x571 = -328523150558220760LL;
	int32_t x572 = INT32_MAX;
	int32_t t120 = -622;

    t120 = ((x569-(x570!=x571))%x572);

    if (t120 != -32769) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x573 = INT32_MAX;
	static uint8_t x574 = UINT8_MAX;
	int16_t x575 = -3447;
	uint32_t x576 = 55127U;
	uint32_t t121 = 55U;

    t121 = ((x573-(x574!=x575))%x576);

    if (t121 != 11361U) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x581 = -13LL;
	static volatile int64_t x584 = 499068LL;
	int64_t t122 = -1964463646055LL;

    t122 = ((x581-(x582!=x583))%x584);

    if (t122 != -14LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x597 = 1U;
	int64_t x599 = INT64_MIN;
	uint16_t x600 = 29515U;
	static volatile int32_t t123 = -899936335;

    t123 = ((x597-(x598!=x599))%x600);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x602 = -93477;
	uint32_t x603 = 44U;
	int64_t t124 = -63295914LL;

    t124 = ((x601-(x602!=x603))%x604);

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x606 = INT8_MIN;
	int32_t x607 = INT32_MAX;
	int8_t x608 = -3;

    t125 = ((x605-(x606!=x607))%x608);

    if (t125 != -2LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x613 = -1;
	static uint64_t x614 = 199LLU;
	uint32_t x615 = UINT32_MAX;
	volatile uint8_t x616 = UINT8_MAX;
	int32_t t126 = -504;

    t126 = ((x613-(x614!=x615))%x616);

    if (t126 != -2) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x617 = INT8_MIN;
	uint16_t x618 = 5U;
	int64_t x619 = INT64_MAX;

    t127 = ((x617-(x618!=x619))%x620);

    if (t127 != -1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x621 = -1;
	int32_t x622 = INT32_MAX;
	int8_t x623 = INT8_MIN;
	int8_t x624 = -1;
	volatile int32_t t128 = 1;

    t128 = ((x621-(x622!=x623))%x624);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x625 = INT8_MIN;
	volatile uint8_t x626 = 27U;
	uint64_t x627 = UINT64_MAX;
	uint32_t x628 = 4U;
	volatile uint32_t t129 = 2678U;

    t129 = ((x625-(x626!=x627))%x628);

    if (t129 != 3U) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint64_t x630 = UINT64_MAX;
	int64_t x631 = INT64_MIN;
	int64_t x632 = -172863065978LL;
	int64_t t130 = 3016626079803LL;

    t130 = ((x629-(x630!=x631))%x632);

    if (t130 != 6623308LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x633 = 230U;
	int8_t x634 = -4;
	int64_t x635 = INT64_MIN;
	static volatile int16_t x636 = INT16_MIN;
	volatile int32_t t131 = -2228414;

    t131 = ((x633-(x634!=x635))%x636);

    if (t131 != 229) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x637 = 120LLU;
	static volatile int64_t x638 = INT64_MAX;
	uint64_t x639 = 300LLU;
	uint64_t t132 = 3316066335LLU;

    t132 = ((x637-(x638!=x639))%x640);

    if (t132 != 14LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x641 = INT16_MIN;
	int32_t x642 = 9544;
	int16_t x643 = 3;
	static int64_t x644 = INT64_MAX;
	int64_t t133 = -424LL;

    t133 = ((x641-(x642!=x643))%x644);

    if (t133 != -32769LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x645 = 8;
	uint8_t x646 = UINT8_MAX;
	uint32_t x647 = 2098447U;
	int64_t x648 = INT64_MIN;
	int64_t t134 = -2950101109706LL;

    t134 = ((x645-(x646!=x647))%x648);

    if (t134 != 7LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x650 = INT32_MIN;
	uint8_t x652 = UINT8_MAX;
	int64_t t135 = 7743133297658729LL;

    t135 = ((x649-(x650!=x651))%x652);

    if (t135 != 126LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x653 = -2;
	uint64_t x655 = UINT64_MAX;
	volatile uint8_t x656 = UINT8_MAX;
	int32_t t136 = -1;

    t136 = ((x653-(x654!=x655))%x656);

    if (t136 != -3) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x657 = INT8_MIN;
	int64_t x659 = 1LL;
	volatile int32_t t137 = -6;

    t137 = ((x657-(x658!=x659))%x660);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile uint32_t x661 = UINT32_MAX;
	volatile uint16_t x662 = UINT16_MAX;
	int8_t x664 = INT8_MIN;
	volatile uint32_t t138 = 30U;

    t138 = ((x661-(x662!=x663))%x664);

    if (t138 != 126U) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x665 = INT16_MIN;
	uint8_t x666 = 3U;
	static int16_t x667 = -2367;
	int64_t x668 = -809215287409021566LL;
	volatile int64_t t139 = 6LL;

    t139 = ((x665-(x666!=x667))%x668);

    if (t139 != -32769LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x669 = 5771764172LLU;
	static int8_t x670 = 0;
	int64_t x671 = INT64_MIN;
	int8_t x672 = 27;
	static uint64_t t140 = 1724256LLU;

    t140 = ((x669-(x670!=x671))%x672);

    if (t140 != 10LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x673 = INT8_MIN;
	uint64_t x674 = 316901918887601LLU;
	static uint8_t x676 = 7U;
	volatile int32_t t141 = -5;

    t141 = ((x673-(x674!=x675))%x676);

    if (t141 != -3) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x678 = -2587;
	static volatile uint64_t x679 = 0LLU;
	static volatile int64_t x680 = 44639502LL;

    t142 = ((x677-(x678!=x679))%x680);

    if (t142 != -32769LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x681 = INT32_MAX;
	uint16_t x682 = UINT16_MAX;
	volatile int64_t x683 = 245762572069434LL;
	volatile int64_t x684 = INT64_MIN;
	int64_t t143 = -8345LL;

    t143 = ((x681-(x682!=x683))%x684);

    if (t143 != 2147483646LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x685 = UINT8_MAX;
	int8_t x687 = -1;
	int32_t t144 = -76057247;

    t144 = ((x685-(x686!=x687))%x688);

    if (t144 != 14) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x690 = INT64_MAX;
	static volatile int64_t x691 = -1LL;
	static int8_t x692 = INT8_MIN;
	static int32_t t145 = 22864;

    t145 = ((x689-(x690!=x691))%x692);

    if (t145 != 51) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint8_t x693 = UINT8_MAX;
	int16_t x694 = INT16_MAX;
	int32_t x696 = -43455;
	volatile int32_t t146 = -125881;

    t146 = ((x693-(x694!=x695))%x696);

    if (t146 != 254) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x698 = UINT16_MAX;
	int8_t x700 = INT8_MAX;

    t147 = ((x697-(x698!=x699))%x700);

    if (t147 != -2LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x702 = 816LLU;
	int16_t x703 = INT16_MIN;
	volatile uint32_t x704 = UINT32_MAX;

    t148 = ((x701-(x702!=x703))%x704);

    if (t148 != 254U) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x705 = INT16_MIN;
	int8_t x706 = INT8_MIN;
	volatile int16_t x708 = -1;
	volatile int32_t t149 = -14;

    t149 = ((x705-(x706!=x707))%x708);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint64_t x709 = 9762921587162102LLU;
	static int64_t x711 = INT64_MIN;
	uint64_t x712 = 415253033LLU;
	uint64_t t150 = 8431520281043764LLU;

    t150 = ((x709-(x710!=x711))%x712);

    if (t150 != 129725460LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x714 = 660U;
	int16_t x715 = INT16_MAX;
	int8_t x716 = INT8_MIN;

    t151 = ((x713-(x714!=x715))%x716);

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x717 = -377;
	int32_t x718 = -1;
	static volatile int32_t t152 = -1;

    t152 = ((x717-(x718!=x719))%x720);

    if (t152 != -377) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x721 = 8033312176LLU;
	volatile int64_t x722 = INT64_MIN;
	uint16_t x723 = 50U;
	int16_t x724 = -1;
	volatile uint64_t t153 = 641792350LLU;

    t153 = ((x721-(x722!=x723))%x724);

    if (t153 != 8033312175LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint16_t x725 = 47U;
	uint16_t x727 = 12U;
	volatile uint64_t x728 = 10519782966649091LLU;
	static volatile uint64_t t154 = 115497461848LLU;

    t154 = ((x725-(x726!=x727))%x728);

    if (t154 != 46LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint16_t x733 = UINT16_MAX;
	uint64_t x734 = 1416444511LLU;
	static volatile int8_t x735 = INT8_MIN;
	static int16_t x736 = INT16_MIN;
	int32_t t155 = -31449738;

    t155 = ((x733-(x734!=x735))%x736);

    if (t155 != 32766) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint16_t x737 = 543U;
	uint8_t x740 = UINT8_MAX;
	volatile int32_t t156 = -1837;

    t156 = ((x737-(x738!=x739))%x740);

    if (t156 != 32) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x742 = INT16_MAX;
	int8_t x743 = 3;
	int64_t x744 = INT64_MIN;
	uint64_t t157 = 358559592761080076LLU;

    t157 = ((x741-(x742!=x743))%x744);

    if (t157 != 503226LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x745 = 60U;
	int32_t x746 = INT32_MIN;
	uint64_t x747 = 12269941LLU;
	int64_t x748 = INT64_MIN;
	int64_t t158 = -269083211LL;

    t158 = ((x745-(x746!=x747))%x748);

    if (t158 != 59LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x749 = UINT32_MAX;
	static int64_t x750 = INT64_MIN;
	static volatile int32_t x752 = -12;
	static uint32_t t159 = 1853728878U;

    t159 = ((x749-(x750!=x751))%x752);

    if (t159 != 10U) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x753 = -4;
	int32_t x754 = 3;
	int8_t x756 = INT8_MIN;

    t160 = ((x753-(x754!=x755))%x756);

    if (t160 != -5) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint64_t x757 = 5501902920789628715LLU;
	uint32_t x758 = UINT32_MAX;
	int8_t x759 = -1;
	static volatile int64_t x760 = INT64_MAX;
	static uint64_t t161 = 757154658805853LLU;

    t161 = ((x757-(x758!=x759))%x760);

    if (t161 != 5501902920789628715LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x761 = -11156683;
	volatile uint8_t x763 = 13U;
	int64_t x764 = INT64_MAX;

    t162 = ((x761-(x762!=x763))%x764);

    if (t162 != -11156684LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x765 = -1;
	uint32_t x766 = 60U;
	volatile int32_t x767 = INT32_MAX;
	uint16_t x768 = 956U;
	volatile int32_t t163 = -34777;

    t163 = ((x765-(x766!=x767))%x768);

    if (t163 != -2) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x769 = INT16_MAX;
	uint16_t x771 = 0U;
	volatile int32_t t164 = 845102846;

    t164 = ((x769-(x770!=x771))%x772);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x777 = 8138;
	int32_t x778 = INT32_MIN;
	int64_t x780 = INT64_MIN;
	int64_t t165 = 373673744909856LL;

    t165 = ((x777-(x778!=x779))%x780);

    if (t165 != 8137LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x781 = 24143LLU;
	uint8_t x782 = UINT8_MAX;
	volatile int64_t x784 = 2383212852705971LL;
	uint64_t t166 = 126090LLU;

    t166 = ((x781-(x782!=x783))%x784);

    if (t166 != 24142LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x789 = 0U;
	int16_t x791 = 21;
	volatile int32_t x792 = -2;
	static int32_t t167 = -50713003;

    t167 = ((x789-(x790!=x791))%x792);

    if (t167 != -1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x793 = UINT8_MAX;
	int32_t x794 = INT32_MIN;
	uint16_t x795 = 3U;
	volatile int64_t x796 = INT64_MIN;
	static int64_t t168 = -26074111549747LL;

    t168 = ((x793-(x794!=x795))%x796);

    if (t168 != 254LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x798 = -1;
	static volatile uint64_t x799 = 4266938711LLU;
	int16_t x800 = INT16_MIN;
	volatile int64_t t169 = 61474504314168756LL;

    t169 = ((x797-(x798!=x799))%x800);

    if (t169 != 28173LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x801 = 374U;
	static int8_t x802 = INT8_MIN;
	uint64_t x804 = UINT64_MAX;

    t170 = ((x801-(x802!=x803))%x804);

    if (t170 != 373LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x809 = 13455U;
	volatile uint64_t x812 = 791617LLU;
	volatile uint64_t t171 = 121333708427207100LLU;

    t171 = ((x809-(x810!=x811))%x812);

    if (t171 != 13454LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x815 = 2631U;

    t172 = ((x813-(x814!=x815))%x816);

    if (t172 != 7LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x817 = 104LLU;
	int8_t x818 = INT8_MIN;
	int64_t x820 = -1LL;
	volatile uint64_t t173 = 552230362502474LLU;

    t173 = ((x817-(x818!=x819))%x820);

    if (t173 != 103LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int64_t x821 = INT64_MAX;
	static int64_t x822 = -21453463111503LL;
	volatile int32_t x823 = -41;
	volatile uint32_t x824 = 768U;
	volatile int64_t t174 = 113929LL;

    t174 = ((x821-(x822!=x823))%x824);

    if (t174 != 510LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x825 = 21229287638LL;
	int8_t x826 = INT8_MAX;
	int32_t x827 = INT32_MIN;
	volatile uint64_t x828 = 5719971474LLU;
	uint64_t t175 = 158424752237LLU;

    t175 = ((x825-(x826!=x827))%x828);

    if (t175 != 4069373215LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x831 = 1U;
	volatile uint32_t t176 = 77097882U;

    t176 = ((x829-(x830!=x831))%x832);

    if (t176 != 115U) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x833 = INT64_MAX;
	int16_t x834 = 0;
	uint32_t x835 = 26073U;
	int8_t x836 = INT8_MIN;
	int64_t t177 = 138308005709565LL;

    t177 = ((x833-(x834!=x835))%x836);

    if (t177 != 126LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x837 = -1;
	int64_t x838 = -1LL;
	int16_t x839 = 1;
	static int16_t x840 = -1;

    t178 = ((x837-(x838!=x839))%x840);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x841 = -1;
	uint16_t x842 = UINT16_MAX;
	uint64_t x843 = 2LLU;
	int32_t t179 = -5;

    t179 = ((x841-(x842!=x843))%x844);

    if (t179 != -2) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x846 = 254802673U;
	uint8_t x848 = UINT8_MAX;
	static volatile int32_t t180 = 5162;

    t180 = ((x845-(x846!=x847))%x848);

    if (t180 != -1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x849 = 1675328474109530LLU;
	static volatile int8_t x851 = INT8_MIN;
	uint64_t x852 = UINT64_MAX;
	volatile uint64_t t181 = 1161435LLU;

    t181 = ((x849-(x850!=x851))%x852);

    if (t181 != 1675328474109529LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x853 = INT8_MIN;
	int32_t x855 = INT32_MIN;
	static volatile uint8_t x856 = 10U;
	int32_t t182 = -260158044;

    t182 = ((x853-(x854!=x855))%x856);

    if (t182 != -9) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x857 = -1;
	int16_t x858 = -7509;
	int64_t x859 = -10LL;
	int32_t x860 = -1;
	int32_t t183 = -8280628;

    t183 = ((x857-(x858!=x859))%x860);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x861 = 635086296U;
	static uint64_t x862 = UINT64_MAX;
	static int8_t x864 = 7;
	uint32_t t184 = 43172431U;

    t184 = ((x861-(x862!=x863))%x864);

    if (t184 != 4U) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x866 = -365;
	static volatile int32_t x867 = INT32_MIN;
	int64_t x868 = -10093401888417LL;
	int64_t t185 = 3014557844192818LL;

    t185 = ((x865-(x866!=x867))%x868);

    if (t185 != -2LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint16_t x869 = UINT16_MAX;
	volatile int32_t x870 = -37;
	int32_t x871 = INT32_MAX;
	volatile int16_t x872 = INT16_MIN;
	volatile int32_t t186 = 40;

    t186 = ((x869-(x870!=x871))%x872);

    if (t186 != 32766) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x873 = -60858931LL;
	int8_t x874 = 1;
	uint32_t x875 = 99156145U;
	int8_t x876 = -1;
	volatile int64_t t187 = -2083250657LL;

    t187 = ((x873-(x874!=x875))%x876);

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x878 = INT64_MAX;
	int16_t x879 = -10631;
	static volatile uint64_t t188 = 10275090109LLU;

    t188 = ((x877-(x878!=x879))%x880);

    if (t188 != 83498LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x881 = INT32_MAX;
	static int16_t x883 = INT16_MIN;
	volatile uint32_t x884 = UINT32_MAX;
	volatile uint32_t t189 = 308U;

    t189 = ((x881-(x882!=x883))%x884);

    if (t189 != 2147483646U) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint16_t x885 = 48U;
	static int32_t x886 = 11157155;
	volatile int16_t x888 = 350;

    t190 = ((x885-(x886!=x887))%x888);

    if (t190 != 47) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x889 = -14908;
	uint8_t x890 = UINT8_MAX;
	int8_t x891 = 5;
	volatile int32_t t191 = -7289;

    t191 = ((x889-(x890!=x891))%x892);

    if (t191 != -5113) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile uint16_t x897 = 351U;
	int16_t x898 = INT16_MIN;
	static uint32_t x899 = 484U;
	int32_t x900 = INT32_MIN;

    t192 = ((x897-(x898!=x899))%x900);

    if (t192 != 350) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x901 = UINT64_MAX;
	int64_t x902 = -19938731LL;
	uint8_t x903 = 7U;
	volatile uint64_t t193 = 309683512192537699LLU;

    t193 = ((x901-(x902!=x903))%x904);

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x906 = -1LL;
	static uint64_t x907 = UINT64_MAX;
	uint8_t x908 = 8U;

    t194 = ((x905-(x906!=x907))%x908);

    if (t194 != -1LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x910 = -1;
	static volatile int32_t x911 = INT32_MIN;
	volatile int32_t t195 = -15;

    t195 = ((x909-(x910!=x911))%x912);

    if (t195 != 20148) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x914 = -1;
	volatile int8_t x915 = -1;
	static int16_t x916 = INT16_MAX;
	volatile int32_t t196 = -99774;

    t196 = ((x913-(x914!=x915))%x916);

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x921 = -1;
	uint8_t x922 = 1U;
	int8_t x923 = INT8_MAX;

    t197 = ((x921-(x922!=x923))%x924);

    if (t197 != -2LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint16_t x925 = 292U;
	int64_t x926 = -78LL;
	static volatile int32_t x927 = 3;
	static uint64_t x928 = 914630421841328608LLU;
	static volatile uint64_t t198 = 1048804083LLU;

    t198 = ((x925-(x926!=x927))%x928);

    if (t198 != 291LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x929 = -1;
	int32_t x930 = 5;
	int32_t x931 = INT32_MIN;
	volatile int32_t t199 = -104416585;

    t199 = ((x929-(x930!=x931))%x932);

    if (t199 != -2) { NG(); } else { ; }
	
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

