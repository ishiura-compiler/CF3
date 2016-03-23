
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

static int32_t x11 = INT32_MAX;
uint32_t t1 = 11115599U;
uint64_t x14 = UINT64_MAX;
int8_t x18 = -21;
volatile int32_t t3 = 14;
int32_t x21 = -14810475;
int64_t x22 = -734306768806LL;
uint8_t x23 = 43U;
uint32_t x33 = 31U;
volatile uint8_t x34 = 1U;
static uint8_t x37 = 110U;
int64_t x41 = -1LL;
int64_t x42 = 3988192248611214058LL;
static volatile uint64_t t10 = 613909471988554LLU;
volatile uint64_t x58 = 7LLU;
int64_t x65 = -1LL;
volatile int64_t x67 = 333LL;
volatile int16_t x68 = INT16_MAX;
uint16_t x75 = 52U;
static volatile int64_t x76 = -1LL;
volatile uint64_t t14 = 119834877576148LLU;
volatile int64_t x78 = INT64_MIN;
uint32_t x80 = 2927U;
volatile int16_t x86 = INT16_MIN;
volatile int8_t x87 = INT8_MAX;
static uint8_t x88 = 1U;
uint32_t x89 = UINT32_MAX;
static volatile uint32_t t18 = 822559135U;
volatile int32_t t19 = -3496;
static uint64_t x97 = UINT64_MAX;
int64_t x100 = -21363448039LL;
int32_t x114 = 414;
int32_t x117 = 4943786;
static uint16_t x122 = 216U;
int16_t x125 = INT16_MIN;
static uint64_t x128 = UINT64_MAX;
static uint64_t t25 = 33624099433LLU;
volatile uint16_t x141 = 106U;
uint16_t x148 = 0U;
volatile uint32_t x152 = 31739282U;
int32_t x153 = -44892011;
int16_t x162 = INT16_MIN;
int64_t x163 = INT64_MAX;
int64_t t33 = 2872459878627340LL;
int32_t x183 = 16;
uint32_t x190 = 117U;
volatile int16_t x192 = INT16_MIN;
static int8_t x210 = INT8_MIN;
int16_t x226 = -3;
int64_t x237 = INT64_MIN;
static volatile uint16_t x239 = 1987U;
volatile int16_t x243 = 10202;
volatile int16_t x254 = INT16_MIN;
static int16_t x258 = INT16_MAX;
uint16_t x259 = UINT16_MAX;
static int16_t x261 = -1;
uint32_t x262 = 1908255U;
int16_t x265 = 304;
int8_t x267 = INT8_MIN;
int16_t x268 = -40;
static int64_t x269 = INT64_MIN;
static volatile uint64_t x270 = UINT64_MAX;
int64_t x271 = INT64_MAX;
static uint64_t t49 = UINT64_MAX;
int64_t x285 = -30863906826776037LL;
static int32_t x289 = 61141373;
static uint64_t x294 = 29977489402706121LLU;
int8_t x301 = -1;
uint16_t x303 = 211U;
static int8_t x309 = -1;
volatile int32_t t56 = 727;
int32_t x314 = INT32_MIN;
uint64_t x325 = 96766670753055827LLU;
static uint16_t x327 = 126U;
uint32_t x328 = 3376330U;
int8_t x331 = 3;
uint8_t x335 = 9U;
volatile int8_t x336 = INT8_MAX;
volatile uint64_t x337 = 224561986388449311LLU;
static uint64_t x339 = 217192LLU;
volatile int16_t x341 = INT16_MAX;
uint16_t x356 = UINT16_MAX;
uint64_t x359 = UINT64_MAX;
volatile int8_t x362 = INT8_MIN;
volatile int64_t x364 = INT64_MAX;
uint64_t x367 = 17884LLU;
int8_t x374 = INT8_MIN;
volatile int64_t t71 = -48205LL;
int64_t t74 = INT64_MAX;
uint64_t x405 = 69382195369345LLU;
int64_t x410 = INT64_MIN;
int64_t t78 = -6429141693LL;
int64_t x416 = INT64_MAX;
uint64_t t79 = 3LLU;
uint16_t x421 = 3U;
uint32_t x428 = 1U;
static volatile int64_t t83 = -3LL;
int64_t t85 = 1638LL;
int32_t x455 = INT32_MIN;
static int32_t x464 = INT32_MIN;
int64_t t91 = 3939787775227LL;
static uint16_t x495 = 17U;
volatile int32_t x501 = INT32_MAX;
volatile uint64_t x502 = UINT64_MAX;
int16_t x507 = -46;
int64_t t95 = -60LL;
int16_t x515 = INT16_MIN;
volatile int64_t t98 = -2799LL;
volatile uint32_t x532 = 3U;
uint16_t x570 = UINT16_MAX;
int64_t x595 = INT64_MIN;
int16_t x600 = INT16_MIN;
int8_t x601 = 1;
uint16_t x611 = UINT16_MAX;
volatile uint16_t x613 = 124U;
volatile uint64_t x614 = UINT64_MAX;
int64_t x615 = INT64_MAX;
int16_t x618 = INT16_MAX;
static volatile uint8_t x625 = UINT8_MAX;
int8_t x639 = INT8_MIN;
int32_t t117 = 250;
volatile int64_t t118 = -220LL;
volatile uint64_t t120 = 3569268494238358959LLU;
int64_t x662 = -1LL;
static uint64_t t121 = 55LLU;
volatile uint32_t x667 = 1633U;
uint16_t x673 = 2200U;
volatile uint32_t x675 = 998729U;
int8_t x676 = INT8_MIN;
static uint32_t t124 = 10446269U;
int8_t x681 = 1;
static int64_t x685 = INT64_MIN;
static volatile uint32_t x686 = 196489137U;
volatile int64_t t126 = -347843639489706LL;
int8_t x697 = 4;
uint8_t x700 = UINT8_MAX;
static int64_t x702 = -26932LL;
volatile int64_t t129 = -12LL;
volatile int16_t x705 = -521;
uint8_t x714 = 10U;
int16_t x720 = -5148;
int16_t x730 = -1;
int64_t t135 = 920777468979962LL;
volatile int64_t t136 = -18683979510123LL;
uint64_t x749 = 3LLU;
static int8_t x752 = INT8_MIN;
int64_t x761 = INT64_MIN;
uint8_t x773 = 14U;
int32_t x776 = INT32_MAX;
static int32_t x818 = INT32_MIN;
volatile int64_t t147 = 1014160468426LL;
volatile uint32_t x846 = 39U;
uint32_t x850 = 2173128U;
static int64_t x858 = -1LL;
static volatile uint32_t t153 = 7U;
uint8_t x868 = UINT8_MAX;
uint32_t t154 = 0U;
static int8_t x887 = INT8_MIN;
uint16_t x893 = 61U;
static int64_t x915 = INT64_MIN;
uint64_t x918 = 496226121186058527LLU;
static volatile uint64_t t160 = 2897352092LLU;
volatile int64_t t161 = 117LL;
volatile uint64_t t162 = 247745628913461567LLU;
int32_t x933 = INT32_MIN;
int32_t x939 = 1914;
int64_t t164 = 3344016916632909LL;
int16_t x953 = -1;
int16_t x954 = INT16_MIN;
static uint16_t x958 = 2582U;
int64_t x961 = 1663154LL;
int8_t x963 = 10;
volatile int32_t x971 = 2;
static int32_t x972 = -1;
volatile uint64_t t172 = UINT64_MAX;
uint16_t x973 = UINT16_MAX;
volatile uint64_t t173 = 281LLU;
int64_t x989 = -1LL;
volatile uint64_t x997 = 25LLU;
int64_t x1000 = -67372662417LL;
volatile uint64_t t176 = 216259516LLU;
volatile int64_t x1003 = INT64_MIN;
static uint32_t x1015 = 709U;
volatile uint32_t t179 = 43573U;
volatile int64_t t180 = 15770387286LL;
uint8_t x1022 = 60U;
static uint8_t x1025 = 96U;
uint8_t x1055 = UINT8_MAX;
static volatile int64_t t185 = 7126432932023969LL;
int16_t x1063 = -169;
uint64_t x1065 = UINT64_MAX;
uint16_t x1067 = 6U;
static volatile uint64_t x1070 = 658015948LLU;
volatile int32_t x1072 = INT32_MAX;
int16_t x1074 = -1;
uint8_t x1086 = 3U;
uint8_t x1090 = UINT8_MAX;
int64_t x1092 = INT64_MIN;
int64_t t193 = -248358507809LL;
uint16_t x1097 = 6529U;
int32_t x1101 = -1;
volatile int32_t x1111 = -6960335;
uint64_t x1125 = UINT64_MAX;
static int16_t x1127 = -31;
static int8_t x1137 = INT8_MAX;
static int16_t x1140 = INT16_MIN;


void f0(void) {
    	int32_t x1 = 113397726;
	int32_t x2 = -1;
	uint16_t x3 = 115U;
	static int16_t x4 = -1;
	int32_t t0 = -31;

    t0 = ((x1%(x2%x3))+x4);

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x9 = 20269965U;
	static uint32_t x10 = UINT32_MAX;
	int8_t x12 = INT8_MIN;

    t1 = ((x9%(x10%x11))+x12);

    if (t1 != 4294967168U) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x13 = 7;
	int64_t x15 = 7856221244LL;
	volatile int64_t x16 = 27139444481LL;
	volatile uint64_t t2 = 1830009LLU;

    t2 = ((x13%(x14%x15))+x16);

    if (t2 != 27139444488LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x17 = INT8_MIN;
	static int16_t x19 = INT16_MIN;
	int32_t x20 = -1;

    t3 = ((x17%(x18%x19))+x20);

    if (t3 != -3) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x24 = 1LLU;
	volatile uint64_t t4 = 896474858263250LLU;

    t4 = ((x21%(x22%x23))+x24);

    if (t4 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x29 = INT8_MIN;
	int32_t x30 = INT32_MAX;
	uint64_t x31 = UINT64_MAX;
	volatile uint16_t x32 = UINT16_MAX;
	uint64_t t5 = 63749838891366LLU;

    t5 = ((x29%(x30%x31))+x32);

    if (t5 != 2147549058LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x35 = INT8_MIN;
	uint32_t x36 = UINT32_MAX;
	volatile uint32_t t6 = UINT32_MAX;

    t6 = ((x33%(x34%x35))+x36);

    if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x38 = 261438U;
	int64_t x39 = INT64_MAX;
	static int64_t x40 = 1986414414532LL;
	int64_t t7 = -125LL;

    t7 = ((x37%(x38%x39))+x40);

    if (t7 != 1986414414642LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x43 = UINT8_MAX;
	static int64_t x44 = -22055LL;
	int64_t t8 = -6452LL;

    t8 = ((x41%(x42%x43))+x44);

    if (t8 != -22056LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint8_t x45 = 7U;
	uint16_t x46 = 714U;
	static int16_t x47 = INT16_MIN;
	int8_t x48 = INT8_MIN;
	int32_t t9 = -468;

    t9 = ((x45%(x46%x47))+x48);

    if (t9 != -121) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x53 = 3776601013595080LLU;
	static volatile uint8_t x54 = UINT8_MAX;
	static volatile int8_t x55 = INT8_MIN;
	volatile uint8_t x56 = 58U;

    t10 = ((x53%(x54%x55))+x56);

    if (t10 != 105LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x57 = UINT8_MAX;
	uint64_t x59 = UINT64_MAX;
	int32_t x60 = -179842800;
	uint64_t t11 = 4011168928384277LLU;

    t11 = ((x57%(x58%x59))+x60);

    if (t11 != 18446744073529708819LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x61 = -843LL;
	volatile uint32_t x62 = UINT32_MAX;
	static volatile int8_t x63 = INT8_MAX;
	volatile int16_t x64 = -6320;
	static volatile int64_t t12 = 580174127146LL;

    t12 = ((x61%(x62%x63))+x64);

    if (t12 != -6323LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x66 = 11;
	int64_t t13 = 29177LL;

    t13 = ((x65%(x66%x67))+x68);

    if (t13 != 32766LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x73 = UINT64_MAX;
	int8_t x74 = INT8_MIN;

    t14 = ((x73%(x74%x75))+x76);

    if (t14 != 22LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x77 = INT8_MIN;
	volatile uint64_t x79 = 11283954273184LLU;
	uint64_t t15 = 80916LLU;

    t15 = ((x77%(x78%x79))+x80);

    if (t15 != 367323456367LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x81 = 4202167762721162506LLU;
	static uint8_t x82 = 33U;
	uint8_t x83 = 29U;
	int16_t x84 = -1;
	volatile uint64_t t16 = 19860131855LLU;

    t16 = ((x81%(x82%x83))+x84);

    if (t16 != 1LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x85 = -1;
	volatile int32_t t17 = 48710466;

    t17 = ((x85%(x86%x87))+x88);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x90 = 3U;
	int32_t x91 = INT32_MIN;
	int32_t x92 = INT32_MAX;

    t18 = ((x89%(x90%x91))+x92);

    if (t18 != 2147483647U) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x93 = 2;
	static int32_t x94 = -1;
	int32_t x95 = INT32_MIN;
	volatile int32_t x96 = 424;

    t19 = ((x93%(x94%x95))+x96);

    if (t19 != 424) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x98 = INT8_MAX;
	uint64_t x99 = 114635412800LLU;
	volatile uint64_t t20 = 16548LLU;

    t20 = ((x97%(x98%x99))+x100);

    if (t20 != 18446744052346103578LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x109 = INT16_MAX;
	int32_t x110 = -1;
	volatile int32_t x111 = -2;
	uint8_t x112 = UINT8_MAX;
	int32_t t21 = 4111;

    t21 = ((x109%(x110%x111))+x112);

    if (t21 != 255) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x113 = INT16_MAX;
	int64_t x115 = INT64_MIN;
	uint16_t x116 = 1U;
	volatile int64_t t22 = -1189479652163879452LL;

    t22 = ((x113%(x114%x115))+x116);

    if (t22 != 62LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x118 = -3356478895913567124LL;
	int32_t x119 = 475;
	static int8_t x120 = INT8_MIN;
	volatile int64_t t23 = -646929924032667LL;

    t23 = ((x117%(x118%x119))+x120);

    if (t23 != -126LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x121 = INT32_MIN;
	int64_t x123 = INT64_MIN;
	static uint32_t x124 = UINT32_MAX;
	int64_t t24 = 9438845LL;

    t24 = ((x121%(x122%x123))+x124);

    if (t24 != 4294967095LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x126 = 6U;
	int16_t x127 = INT16_MIN;

    t25 = ((x125%(x126%x127))+x128);

    if (t25 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int8_t x133 = 1;
	uint8_t x134 = 1U;
	volatile uint16_t x135 = UINT16_MAX;
	static uint8_t x136 = 40U;
	static int32_t t26 = 0;

    t26 = ((x133%(x134%x135))+x136);

    if (t26 != 40) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x137 = INT64_MAX;
	static int32_t x138 = 18;
	volatile uint32_t x139 = UINT32_MAX;
	uint8_t x140 = 4U;
	int64_t t27 = -46709346766LL;

    t27 = ((x137%(x138%x139))+x140);

    if (t27 != 11LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x142 = -1244142798446580LL;
	static int16_t x143 = INT16_MIN;
	static uint64_t x144 = UINT64_MAX;
	volatile uint64_t t28 = 5786828518187893LLU;

    t28 = ((x141%(x142%x143))+x144);

    if (t28 != 105LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x145 = UINT16_MAX;
	volatile int16_t x146 = INT16_MIN;
	uint64_t x147 = 2906462412014194069LLU;
	uint64_t t29 = 8978421649LLU;

    t29 = ((x145%(x146%x147))+x148);

    if (t29 != 65535LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x149 = -61;
	static int16_t x150 = -1;
	static volatile int8_t x151 = INT8_MIN;
	volatile uint32_t t30 = 41U;

    t30 = ((x149%(x150%x151))+x152);

    if (t30 != 31739282U) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x154 = 21524LLU;
	int32_t x155 = INT32_MAX;
	uint16_t x156 = UINT16_MAX;
	uint64_t t31 = 12LLU;

    t31 = ((x153%(x154%x155))+x156);

    if (t31 != 77492LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x157 = INT8_MIN;
	int64_t x158 = -81143569857756LL;
	static int32_t x159 = -16;
	uint64_t x160 = 67671995LLU;
	uint64_t t32 = 420456LLU;

    t32 = ((x157%(x158%x159))+x160);

    if (t32 != 67671987LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile uint32_t x161 = 6800410U;
	uint16_t x164 = UINT16_MAX;

    t33 = ((x161%(x162%x163))+x164);

    if (t33 != 82969LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x181 = INT32_MAX;
	uint32_t x182 = 758286513U;
	volatile int16_t x184 = -1;
	volatile uint32_t t34 = UINT32_MAX;

    t34 = ((x181%(x182%x183))+x184);

    if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x189 = 8U;
	int32_t x191 = 323158;
	volatile uint32_t t35 = 0U;

    t35 = ((x189%(x190%x191))+x192);

    if (t35 != 4294934536U) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x193 = INT32_MIN;
	volatile int8_t x194 = -1;
	volatile int32_t x195 = INT32_MIN;
	uint64_t x196 = 56961072485274LLU;
	static volatile uint64_t t36 = 6LLU;

    t36 = ((x193%(x194%x195))+x196);

    if (t36 != 56961072485274LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x197 = INT8_MIN;
	int8_t x198 = INT8_MIN;
	int16_t x199 = INT16_MAX;
	uint8_t x200 = 94U;
	static int32_t t37 = 272409;

    t37 = ((x197%(x198%x199))+x200);

    if (t37 != 94) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x201 = INT32_MIN;
	uint64_t x202 = 912809006175LLU;
	int32_t x203 = -759;
	int64_t x204 = -16978031913014LL;
	volatile uint64_t t38 = 4208946326LLU;

    t38 = ((x201%(x202%x203))+x204);

    if (t38 != 18446727558756576520LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x209 = INT16_MIN;
	int64_t x211 = -1790176094239137754LL;
	int8_t x212 = 23;
	int64_t t39 = -50555221473LL;

    t39 = ((x209%(x210%x211))+x212);

    if (t39 != 23LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x225 = INT32_MAX;
	uint64_t x227 = UINT64_MAX;
	static int64_t x228 = INT64_MIN;
	volatile uint64_t t40 = 4591707966059924886LLU;

    t40 = ((x225%(x226%x227))+x228);

    if (t40 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x229 = INT8_MIN;
	int8_t x230 = INT8_MIN;
	int64_t x231 = INT64_MIN;
	static int8_t x232 = INT8_MAX;
	int64_t t41 = 2930186926775253317LL;

    t41 = ((x229%(x230%x231))+x232);

    if (t41 != 127LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x233 = INT64_MIN;
	static int8_t x234 = INT8_MIN;
	volatile int16_t x235 = INT16_MIN;
	uint16_t x236 = 3U;
	volatile int64_t t42 = -1LL;

    t42 = ((x233%(x234%x235))+x236);

    if (t42 != 3LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x238 = INT64_MIN;
	int8_t x240 = INT8_MIN;
	volatile int64_t t43 = -6LL;

    t43 = ((x237%(x238%x239))+x240);

    if (t43 != -136LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x241 = UINT32_MAX;
	static volatile int32_t x242 = -7;
	int16_t x244 = INT16_MAX;
	uint32_t t44 = 2U;

    t44 = ((x241%(x242%x243))+x244);

    if (t44 != 32773U) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x253 = UINT64_MAX;
	int16_t x255 = INT16_MAX;
	uint64_t x256 = 980742280848576LLU;
	volatile uint64_t t45 = 796946809029LLU;

    t45 = ((x253%(x254%x255))+x256);

    if (t45 != 980742280848576LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x257 = -1;
	uint16_t x260 = UINT16_MAX;
	static int32_t t46 = 21185;

    t46 = ((x257%(x258%x259))+x260);

    if (t46 != 65534) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x263 = 167U;
	int16_t x264 = INT16_MIN;
	volatile uint32_t t47 = 7837U;

    t47 = ((x261%(x262%x263))+x264);

    if (t47 != 4294934543U) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x266 = -1;
	volatile int32_t t48 = -975389370;

    t48 = ((x265%(x266%x267))+x268);

    if (t48 != -40) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x272 = -1;

    t49 = ((x269%(x270%x271))+x272);

    if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x277 = UINT64_MAX;
	uint8_t x278 = UINT8_MAX;
	int32_t x279 = 2789371;
	int32_t x280 = INT32_MAX;
	static uint64_t t50 = 6617276066531996543LLU;

    t50 = ((x277%(x278%x279))+x280);

    if (t50 != 2147483647LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x286 = INT16_MAX;
	uint8_t x287 = 43U;
	int8_t x288 = INT8_MIN;
	int64_t t51 = 104750789801099405LL;

    t51 = ((x285%(x286%x287))+x288);

    if (t51 != -128LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x290 = INT32_MIN;
	uint64_t x291 = 83LLU;
	int8_t x292 = -51;
	uint64_t t52 = 283145978487103407LLU;

    t52 = ((x289%(x290%x291))+x292);

    if (t52 != 18446744073709551585LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x293 = 4;
	uint64_t x295 = 184402LLU;
	int32_t x296 = 35704649;
	uint64_t t53 = 8565686LLU;

    t53 = ((x293%(x294%x295))+x296);

    if (t53 != 35704653LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x302 = UINT16_MAX;
	volatile int32_t x304 = -1;
	volatile int32_t t54 = -983;

    t54 = ((x301%(x302%x303))+x304);

    if (t54 != -2) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x305 = INT8_MAX;
	int8_t x306 = INT8_MIN;
	volatile int32_t x307 = INT32_MAX;
	volatile int32_t x308 = INT32_MIN;
	volatile int32_t t55 = 13924302;

    t55 = ((x305%(x306%x307))+x308);

    if (t55 != -2147483521) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x310 = INT32_MIN;
	static int8_t x311 = 6;
	uint16_t x312 = 0U;

    t56 = ((x309%(x310%x311))+x312);

    if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint32_t x313 = 72U;
	int64_t x315 = -620063859775LL;
	int32_t x316 = INT32_MIN;
	volatile int64_t t57 = -577910093LL;

    t57 = ((x313%(x314%x315))+x316);

    if (t57 != -2147483576LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x321 = -1;
	int8_t x322 = INT8_MIN;
	uint32_t x323 = UINT32_MAX;
	uint8_t x324 = UINT8_MAX;
	volatile uint32_t t58 = 518280722U;

    t58 = ((x321%(x322%x323))+x324);

    if (t58 != 382U) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x326 = 1U;
	uint64_t t59 = 1082085519321099269LLU;

    t59 = ((x325%(x326%x327))+x328);

    if (t59 != 3376330LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint64_t x329 = 9654409103LLU;
	uint16_t x330 = 7U;
	int16_t x332 = INT16_MIN;
	volatile uint64_t t60 = 11686LLU;

    t60 = ((x329%(x330%x331))+x332);

    if (t60 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x333 = INT16_MAX;
	int8_t x334 = -1;
	volatile int32_t t61 = -17187;

    t61 = ((x333%(x334%x335))+x336);

    if (t61 != 127) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x338 = -1;
	volatile uint64_t x340 = 442060331046856LLU;
	volatile uint64_t t62 = 56407769225LLU;

    t62 = ((x337%(x338%x339))+x340);

    if (t62 != 442060331084062LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x342 = -1LL;
	static volatile int32_t x343 = 19;
	static int64_t x344 = -1LL;
	volatile int64_t t63 = -44623LL;

    t63 = ((x341%(x342%x343))+x344);

    if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int8_t x345 = -1;
	int32_t x346 = INT32_MIN;
	uint32_t x347 = UINT32_MAX;
	static int64_t x348 = INT64_MIN;
	int64_t t64 = 0LL;

    t64 = ((x345%(x346%x347))+x348);

    if (t64 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x353 = INT16_MIN;
	int64_t x354 = -787302652440085LL;
	int64_t x355 = INT64_MAX;
	int64_t t65 = 185952965161LL;

    t65 = ((x353%(x354%x355))+x356);

    if (t65 != 32767LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x357 = 0U;
	volatile int32_t x358 = INT32_MIN;
	int16_t x360 = INT16_MAX;
	uint64_t t66 = 96LLU;

    t66 = ((x357%(x358%x359))+x360);

    if (t66 != 32767LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x361 = -2057220172288621LL;
	static int32_t x363 = 21;
	volatile int64_t t67 = -718247LL;

    t67 = ((x361%(x362%x363))+x364);

    if (t67 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x365 = -501380266283984LL;
	int8_t x366 = -1;
	uint64_t x368 = 30LLU;
	static volatile uint64_t t68 = 14541600872556679LLU;

    t68 = ((x365%(x366%x367))+x368);

    if (t68 != 2745LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint16_t x369 = 0U;
	static int16_t x370 = 191;
	int8_t x371 = -14;
	uint8_t x372 = 15U;
	volatile int32_t t69 = -1;

    t69 = ((x369%(x370%x371))+x372);

    if (t69 != 15) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x373 = UINT64_MAX;
	int16_t x375 = -1252;
	int64_t x376 = INT64_MIN;
	volatile uint64_t t70 = 269031130292LLU;

    t70 = ((x373%(x374%x375))+x376);

    if (t70 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint8_t x381 = 58U;
	static int8_t x382 = INT8_MIN;
	int64_t x383 = -3965130LL;
	int32_t x384 = INT32_MIN;

    t71 = ((x381%(x382%x383))+x384);

    if (t71 != -2147483590LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x385 = 279;
	volatile int32_t x386 = INT32_MAX;
	static int64_t x387 = 202440LL;
	uint64_t x388 = 276105855448LLU;
	volatile uint64_t t72 = 100LLU;

    t72 = ((x385%(x386%x387))+x388);

    if (t72 != 276105855473LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x389 = 1;
	uint64_t x390 = 13648646LLU;
	volatile int64_t x391 = INT64_MAX;
	volatile int16_t x392 = INT16_MAX;
	uint64_t t73 = 143LLU;

    t73 = ((x389%(x390%x391))+x392);

    if (t73 != 32768LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x393 = INT32_MIN;
	int16_t x394 = -1;
	volatile int64_t x395 = INT64_MAX;
	int64_t x396 = INT64_MAX;

    t74 = ((x393%(x394%x395))+x396);

    if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x397 = INT32_MAX;
	int8_t x398 = INT8_MIN;
	static uint32_t x399 = UINT32_MAX;
	int16_t x400 = -1;
	volatile uint32_t t75 = 234U;

    t75 = ((x397%(x398%x399))+x400);

    if (t75 != 2147483646U) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint32_t x401 = 14232606U;
	volatile int64_t x402 = -1LL;
	uint64_t x403 = 125009822192LLU;
	uint32_t x404 = 333503U;
	uint64_t t76 = 166335553354LLU;

    t76 = ((x401%(x402%x403))+x404);

    if (t76 != 14566109LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static int64_t x406 = -3980LL;
	int8_t x407 = -23;
	uint64_t x408 = 112LLU;
	static uint64_t t77 = 677789LLU;

    t77 = ((x405%(x406%x407))+x408);

    if (t77 != 69382195369457LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x409 = UINT32_MAX;
	int64_t x411 = 902629256LL;
	static int64_t x412 = 1405107713324LL;

    t78 = ((x409%(x410%x411))+x412);

    if (t78 != 1405227456779LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x413 = -1LL;
	uint64_t x414 = UINT64_MAX;
	int16_t x415 = INT16_MIN;

    t79 = ((x413%(x414%x415))+x416);

    if (t79 != 9223372036854775822LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x417 = -155855035856LL;
	static int32_t x418 = 15981492;
	int8_t x419 = -7;
	static int8_t x420 = INT8_MIN;
	volatile int64_t t80 = 40918272LL;

    t80 = ((x417%(x418%x419))+x420);

    if (t80 != -128LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x422 = INT16_MIN;
	int64_t x423 = 69LL;
	uint64_t x424 = 2LLU;
	volatile uint64_t t81 = 305289447LLU;

    t81 = ((x421%(x422%x423))+x424);

    if (t81 != 5LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x425 = 2LLU;
	int32_t x426 = INT32_MIN;
	int8_t x427 = INT8_MAX;
	static volatile uint64_t t82 = 1292976024014LLU;

    t82 = ((x425%(x426%x427))+x428);

    if (t82 != 3LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x437 = -2LL;
	static int16_t x438 = INT16_MAX;
	volatile int8_t x439 = INT8_MIN;
	volatile int8_t x440 = 1;

    t83 = ((x437%(x438%x439))+x440);

    if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x441 = INT8_MIN;
	uint64_t x442 = 1725LLU;
	int8_t x443 = -1;
	int64_t x444 = INT64_MIN;
	volatile uint64_t t84 = 810199033405LLU;

    t84 = ((x441%(x442%x443))+x444);

    if (t84 != 9223372036854776146LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static int32_t x445 = INT32_MIN;
	volatile int32_t x446 = 244916;
	int64_t x447 = -4031056384418544LL;
	uint16_t x448 = UINT16_MAX;

    t85 = ((x445%(x446%x447))+x448);

    if (t85 != 5375LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x449 = UINT8_MAX;
	volatile int16_t x450 = INT16_MIN;
	int16_t x451 = INT16_MAX;
	int8_t x452 = -23;
	int32_t t86 = -4658593;

    t86 = ((x449%(x450%x451))+x452);

    if (t86 != -23) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x453 = -18;
	int64_t x454 = -1LL;
	int64_t x456 = 52093206713172LL;
	volatile int64_t t87 = -28991LL;

    t87 = ((x453%(x454%x455))+x456);

    if (t87 != 52093206713172LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint32_t x461 = 7U;
	int64_t x462 = INT64_MIN;
	volatile int64_t x463 = -24699093LL;
	volatile int64_t t88 = -194690LL;

    t88 = ((x461%(x462%x463))+x464);

    if (t88 != -2147483641LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x465 = 69;
	uint32_t x466 = 933171541U;
	uint64_t x467 = UINT64_MAX;
	volatile int16_t x468 = INT16_MIN;
	uint64_t t89 = 1701659357249539LLU;

    t89 = ((x465%(x466%x467))+x468);

    if (t89 != 18446744073709518917LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x473 = 0;
	int64_t x474 = INT64_MIN;
	uint8_t x475 = UINT8_MAX;
	volatile uint8_t x476 = 4U;
	volatile int64_t t90 = 4259811LL;

    t90 = ((x473%(x474%x475))+x476);

    if (t90 != 4LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x481 = 596224U;
	uint16_t x482 = UINT16_MAX;
	volatile int64_t x483 = 19LL;
	int16_t x484 = -1;

    t91 = ((x481%(x482%x483))+x484);

    if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x485 = INT32_MAX;
	volatile int64_t x486 = INT64_MIN;
	static uint16_t x487 = UINT16_MAX;
	volatile int32_t x488 = 4;
	volatile int64_t t92 = 9646LL;

    t92 = ((x485%(x486%x487))+x488);

    if (t92 != 32771LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile uint64_t x493 = 40LLU;
	int32_t x494 = INT32_MIN;
	int32_t x496 = -1;
	volatile uint64_t t93 = 369LLU;

    t93 = ((x493%(x494%x495))+x496);

    if (t93 != 39LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x503 = INT8_MIN;
	uint16_t x504 = UINT16_MAX;
	volatile uint64_t t94 = 536873LLU;

    t94 = ((x501%(x502%x503))+x504);

    if (t94 != 65542LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x505 = INT32_MAX;
	volatile int64_t x506 = 3412384899960626723LL;
	static volatile uint32_t x508 = UINT32_MAX;

    t95 = ((x505%(x506%x507))+x508);

    if (t95 != 4294967333LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x513 = UINT32_MAX;
	volatile uint16_t x514 = UINT16_MAX;
	uint64_t x516 = UINT64_MAX;
	static uint64_t t96 = 1842773LLU;

    t96 = ((x513%(x514%x515))+x516);

    if (t96 != 2LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x517 = -1LL;
	int16_t x518 = INT16_MIN;
	uint64_t x519 = 39106417LLU;
	int8_t x520 = -29;
	static volatile uint64_t t97 = 109012821981627LLU;

    t97 = ((x517%(x518%x519))+x520);

    if (t97 != 1279486LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x525 = -1;
	volatile int64_t x526 = -7LL;
	uint8_t x527 = 123U;
	int32_t x528 = -1;

    t98 = ((x525%(x526%x527))+x528);

    if (t98 != -2LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x529 = 701349588LLU;
	static uint64_t x530 = 2683591615509502LLU;
	int32_t x531 = INT32_MAX;
	static volatile uint64_t t99 = 149703730238LLU;

    t99 = ((x529%(x530%x531))+x532);

    if (t99 != 701349591LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x533 = 0U;
	uint32_t x534 = 4U;
	volatile int16_t x535 = INT16_MAX;
	static int8_t x536 = 5;
	volatile uint32_t t100 = 1U;

    t100 = ((x533%(x534%x535))+x536);

    if (t100 != 5U) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x541 = INT8_MIN;
	int64_t x542 = 1924376044LL;
	uint16_t x543 = 35U;
	int64_t x544 = -1LL;
	int64_t t101 = 220LL;

    t101 = ((x541%(x542%x543))+x544);

    if (t101 != -9LL) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x545 = INT16_MIN;
	int64_t x546 = -1LL;
	volatile int16_t x547 = INT16_MIN;
	static int32_t x548 = -1;
	volatile int64_t t102 = -1LL;

    t102 = ((x545%(x546%x547))+x548);

    if (t102 != -1LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x549 = INT32_MIN;
	static int32_t x550 = INT32_MIN;
	volatile uint16_t x551 = 1116U;
	volatile uint8_t x552 = 15U;
	volatile int32_t t103 = -115233;

    t103 = ((x549%(x550%x551))+x552);

    if (t103 != -113) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x561 = INT16_MIN;
	int32_t x562 = -15;
	volatile int16_t x563 = INT16_MAX;
	int64_t x564 = -383861LL;
	int64_t t104 = 172LL;

    t104 = ((x561%(x562%x563))+x564);

    if (t104 != -383869LL) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x565 = 26;
	int16_t x566 = -1;
	volatile uint64_t x567 = 2458020978996066LLU;
	static int32_t x568 = -811859;
	volatile uint64_t t105 = 958023083893333357LLU;

    t105 = ((x565%(x566%x567))+x568);

    if (t105 != 18446744073708739783LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint64_t x569 = UINT64_MAX;
	int64_t x571 = INT64_MIN;
	int64_t x572 = INT64_MAX;
	volatile uint64_t t106 = 879158895387000472LLU;

    t106 = ((x569%(x570%x571))+x572);

    if (t106 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x577 = 0LL;
	volatile int8_t x578 = -1;
	static volatile int64_t x579 = INT64_MIN;
	int8_t x580 = -1;
	volatile int64_t t107 = -80067391LL;

    t107 = ((x577%(x578%x579))+x580);

    if (t107 != -1LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x593 = INT32_MAX;
	int64_t x594 = 46601701896500LL;
	uint64_t x596 = 27645896505543LLU;
	volatile uint64_t t108 = 680521LLU;

    t108 = ((x593%(x594%x595))+x596);

    if (t108 != 27648043989190LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int64_t x597 = INT64_MIN;
	int32_t x598 = INT32_MAX;
	uint32_t x599 = UINT32_MAX;
	volatile int64_t t109 = -746671016492250LL;

    t109 = ((x597%(x598%x599))+x600);

    if (t109 != -32770LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x602 = INT32_MIN;
	int16_t x603 = 3;
	int32_t x604 = -1;
	static volatile int32_t t110 = 1;

    t110 = ((x601%(x602%x603))+x604);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x609 = 7;
	volatile int8_t x610 = INT8_MIN;
	int16_t x612 = INT16_MIN;
	int32_t t111 = -16596711;

    t111 = ((x609%(x610%x611))+x612);

    if (t111 != -32761) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x616 = INT8_MIN;
	volatile uint64_t t112 = 1LLU;

    t112 = ((x613%(x614%x615))+x616);

    if (t112 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x617 = INT64_MIN;
	volatile uint8_t x619 = UINT8_MAX;
	int16_t x620 = INT16_MIN;
	static int64_t t113 = 31603616822101LL;

    t113 = ((x617%(x618%x619))+x620);

    if (t113 != -32769LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x626 = -7;
	int16_t x627 = -86;
	uint32_t x628 = UINT32_MAX;
	uint32_t t114 = 645721U;

    t114 = ((x625%(x626%x627))+x628);

    if (t114 != 2U) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x633 = -7265LL;
	uint16_t x634 = UINT16_MAX;
	static int16_t x635 = INT16_MIN;
	static uint64_t x636 = 9346553017LLU;
	uint64_t t115 = 73601630LLU;

    t115 = ((x633%(x634%x635))+x636);

    if (t115 != 9346545752LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile uint16_t x637 = 58U;
	uint8_t x638 = UINT8_MAX;
	uint8_t x640 = UINT8_MAX;
	volatile int32_t t116 = 3;

    t116 = ((x637%(x638%x639))+x640);

    if (t116 != 313) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x641 = UINT8_MAX;
	int16_t x642 = INT16_MAX;
	int8_t x643 = 11;
	uint8_t x644 = 0U;

    t117 = ((x641%(x642%x643))+x644);

    if (t117 != 3) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x645 = -44927992859LL;
	int64_t x646 = INT64_MIN;
	int16_t x647 = 18;
	int64_t x648 = INT64_MAX;

    t118 = ((x645%(x646%x647))+x648);

    if (t118 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x653 = INT64_MIN;
	static volatile int8_t x654 = INT8_MIN;
	int64_t x655 = INT64_MIN;
	volatile uint16_t x656 = 1U;
	static int64_t t119 = 23170343LL;

    t119 = ((x653%(x654%x655))+x656);

    if (t119 != 1LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int8_t x657 = INT8_MAX;
	static uint64_t x658 = 6621LLU;
	int32_t x659 = 2267;
	int64_t x660 = -12171807341LL;

    t120 = ((x657%(x658%x659))+x660);

    if (t120 != 18446744061537744402LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint64_t x661 = 102392751867398945LLU;
	volatile uint32_t x663 = 107292409U;
	volatile uint8_t x664 = 36U;

    t121 = ((x661%(x662%x663))+x664);

    if (t121 != 102392751867398981LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x665 = INT8_MIN;
	uint32_t x666 = UINT32_MAX;
	uint8_t x668 = UINT8_MAX;
	volatile uint32_t t122 = 12693972U;

    t122 = ((x665%(x666%x667))+x668);

    if (t122 != 950U) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x669 = 72U;
	uint64_t x670 = 3816687177269LLU;
	static int32_t x671 = 96902827;
	int64_t x672 = INT64_MIN;
	volatile uint64_t t123 = 13735069680LLU;

    t123 = ((x669%(x670%x671))+x672);

    if (t123 != 9223372036854775880LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x674 = INT16_MAX;

    t124 = ((x673%(x674%x675))+x676);

    if (t124 != 2072U) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x682 = -519797651;
	int32_t x683 = -249;
	int32_t x684 = 51604851;
	volatile int32_t t125 = 81220;

    t125 = ((x681%(x682%x683))+x684);

    if (t125 != 51604852) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x687 = INT8_MIN;
	int64_t x688 = -198855958134320LL;

    t126 = ((x685%(x686%x687))+x688);

    if (t126 != -198855961034524LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x693 = 16837U;
	int16_t x694 = -5;
	uint8_t x695 = 26U;
	int16_t x696 = 0;
	int32_t t127 = -233075289;

    t127 = ((x693%(x694%x695))+x696);

    if (t127 != 2) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int8_t x698 = INT8_MIN;
	uint8_t x699 = UINT8_MAX;
	static volatile int32_t t128 = 205627;

    t128 = ((x697%(x698%x699))+x700);

    if (t128 != 259) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x701 = INT8_MIN;
	uint16_t x703 = 60U;
	int32_t x704 = INT32_MIN;

    t129 = ((x701%(x702%x703))+x704);

    if (t129 != -2147483672LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile uint8_t x706 = UINT8_MAX;
	int16_t x707 = INT16_MIN;
	volatile int8_t x708 = -1;
	volatile int32_t t130 = 131841;

    t130 = ((x705%(x706%x707))+x708);

    if (t130 != -12) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x713 = -1;
	uint8_t x715 = UINT8_MAX;
	uint64_t x716 = UINT64_MAX;
	volatile uint64_t t131 = 4033897692706707LLU;

    t131 = ((x713%(x714%x715))+x716);

    if (t131 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x717 = -1LL;
	uint32_t x718 = 85118U;
	int16_t x719 = 129;
	volatile int64_t t132 = 5631494656673LL;

    t132 = ((x717%(x718%x719))+x720);

    if (t132 != -5149LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static int64_t x721 = INT64_MAX;
	volatile int32_t x722 = 33186;
	int16_t x723 = -565;
	static uint64_t x724 = 31856017838010093LLU;
	uint64_t t133 = 2819202974912418LLU;

    t133 = ((x721%(x722%x723))+x724);

    if (t133 != 31856017838010412LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x725 = INT64_MIN;
	uint64_t x726 = UINT64_MAX;
	int64_t x727 = INT64_MAX;
	int64_t x728 = INT64_MAX;
	static volatile uint64_t t134 = 142671344555LLU;

    t134 = ((x725%(x726%x727))+x728);

    if (t134 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x729 = 126364160571989223LL;
	int64_t x731 = INT64_MIN;
	volatile int8_t x732 = INT8_MIN;

    t135 = ((x729%(x730%x731))+x732);

    if (t135 != -128LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x737 = -1LL;
	int64_t x738 = -336774545LL;
	uint16_t x739 = 307U;
	static int8_t x740 = -1;

    t136 = ((x737%(x738%x739))+x740);

    if (t136 != -2LL) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint16_t x741 = UINT16_MAX;
	int64_t x742 = INT64_MAX;
	volatile uint8_t x743 = UINT8_MAX;
	int64_t x744 = -529078778906024930LL;
	volatile int64_t t137 = -2156338375364361LL;

    t137 = ((x741%(x742%x743))+x744);

    if (t137 != -529078778906024927LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x750 = INT64_MIN;
	static volatile uint32_t x751 = 53684499U;
	static volatile uint64_t t138 = 131067011552459579LLU;

    t138 = ((x749%(x750%x751))+x752);

    if (t138 != 18446744073709551491LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x762 = INT16_MIN;
	uint8_t x763 = 3U;
	int64_t x764 = -18181946085LL;
	static int64_t t139 = 5LL;

    t139 = ((x761%(x762%x763))+x764);

    if (t139 != -18181946085LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x769 = 101U;
	uint8_t x770 = 68U;
	int32_t x771 = INT32_MIN;
	int8_t x772 = INT8_MIN;
	int32_t t140 = 864777;

    t140 = ((x769%(x770%x771))+x772);

    if (t140 != -95) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile uint16_t x774 = 37U;
	uint16_t x775 = 4U;
	volatile int32_t t141 = INT32_MAX;

    t141 = ((x773%(x774%x775))+x776);

    if (t141 != INT32_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x793 = UINT64_MAX;
	volatile int64_t x794 = INT64_MIN;
	static uint32_t x795 = 208U;
	int8_t x796 = INT8_MAX;
	uint64_t t142 = 122815078LLU;

    t142 = ((x793%(x794%x795))+x796);

    if (t142 != 238LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x805 = 0U;
	static uint64_t x806 = 225003679930LLU;
	static uint8_t x807 = 29U;
	volatile int32_t x808 = -79574;
	uint64_t t143 = 7965069LLU;

    t143 = ((x805%(x806%x807))+x808);

    if (t143 != 18446744073709472042LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x809 = INT64_MIN;
	int16_t x810 = INT16_MAX;
	uint32_t x811 = UINT32_MAX;
	static int32_t x812 = INT32_MAX;
	static int64_t t144 = 65642565434036726LL;

    t144 = ((x809%(x810%x811))+x812);

    if (t144 != 2147483639LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x817 = INT16_MAX;
	int32_t x819 = -7401359;
	volatile int8_t x820 = INT8_MIN;
	volatile int32_t t145 = 91543705;

    t145 = ((x817%(x818%x819))+x820);

    if (t145 != 32639) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x821 = INT16_MIN;
	static uint16_t x822 = 1316U;
	int16_t x823 = INT16_MIN;
	int64_t x824 = 3542LL;
	int64_t t146 = -31LL;

    t146 = ((x821%(x822%x823))+x824);

    if (t146 != 2358LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x829 = INT32_MAX;
	int64_t x830 = -36308315LL;
	static int64_t x831 = 2012LL;
	static volatile int64_t x832 = INT64_MIN;

    t147 = ((x829%(x830%x831))+x832);

    if (t147 != -9223372036854774136LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x837 = UINT8_MAX;
	int64_t x838 = INT64_MAX;
	uint16_t x839 = UINT16_MAX;
	static int64_t x840 = -1LL;
	volatile int64_t t148 = -216LL;

    t148 = ((x837%(x838%x839))+x840);

    if (t148 != 254LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x845 = -45427992541LL;
	int8_t x847 = INT8_MAX;
	int32_t x848 = -2;
	int64_t t149 = 262446596702824LL;

    t149 = ((x845%(x846%x847))+x848);

    if (t149 != -24LL) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x849 = -1;
	static uint16_t x851 = UINT16_MAX;
	int8_t x852 = INT8_MAX;
	uint32_t t150 = 0U;

    t150 = ((x849%(x850%x851))+x852);

    if (t150 != 595U) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x853 = INT64_MAX;
	static int32_t x854 = INT32_MAX;
	uint64_t x855 = UINT64_MAX;
	static uint16_t x856 = UINT16_MAX;
	uint64_t t151 = 5200353522LLU;

    t151 = ((x853%(x854%x855))+x856);

    if (t151 != 65536LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int8_t x857 = 0;
	uint8_t x859 = 3U;
	static int16_t x860 = -10551;
	volatile int64_t t152 = 2987LL;

    t152 = ((x857%(x858%x859))+x860);

    if (t152 != -10551LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x861 = 3785399;
	uint16_t x862 = UINT16_MAX;
	uint32_t x863 = 26U;
	uint32_t x864 = 615U;

    t153 = ((x861%(x862%x863))+x864);

    if (t153 != 629U) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x865 = -50;
	int32_t x866 = INT32_MIN;
	uint32_t x867 = 166320815U;

    t154 = ((x865%(x866%x867))+x868);

    if (t154 != 49219197U) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x885 = INT32_MAX;
	int16_t x886 = 150;
	static int32_t x888 = -1;
	int32_t t155 = -124887;

    t155 = ((x885%(x886%x887))+x888);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x889 = -1;
	uint64_t x890 = UINT64_MAX;
	volatile uint32_t x891 = 178994U;
	int8_t x892 = 1;
	static volatile uint64_t t156 = 124109165862LLU;

    t156 = ((x889%(x890%x891))+x892);

    if (t156 != 52132LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x894 = INT8_MAX;
	static uint64_t x895 = 967363046033LLU;
	int32_t x896 = -1;
	static volatile uint64_t t157 = 38462957LLU;

    t157 = ((x893%(x894%x895))+x896);

    if (t157 != 60LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x905 = INT16_MIN;
	static uint16_t x906 = UINT16_MAX;
	volatile int8_t x907 = -2;
	int64_t x908 = -1LL;
	int64_t t158 = 3LL;

    t158 = ((x905%(x906%x907))+x908);

    if (t158 != -1LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x913 = -1;
	uint64_t x914 = 98858460227233819LLU;
	int16_t x916 = INT16_MIN;
	uint64_t t159 = 34226LLU;

    t159 = ((x913%(x914%x915))+x916);

    if (t159 != 59070471444028513LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile uint8_t x917 = UINT8_MAX;
	uint8_t x919 = 22U;
	uint16_t x920 = 63U;

    t160 = ((x917%(x918%x919))+x920);

    if (t160 != 65LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x921 = INT16_MIN;
	static uint16_t x922 = 1557U;
	uint8_t x923 = UINT8_MAX;
	int64_t x924 = 65677282LL;

    t161 = ((x921%(x922%x923))+x924);

    if (t161 != 65677265LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x925 = INT64_MAX;
	static int16_t x926 = -12727;
	volatile uint64_t x927 = 47738736LLU;
	uint8_t x928 = 36U;

    t162 = ((x925%(x926%x927))+x928);

    if (t162 != 9865093LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint16_t x934 = UINT16_MAX;
	static int32_t x935 = INT32_MIN;
	static volatile uint64_t x936 = 155274LLU;
	static uint64_t t163 = 19262655135814169LLU;

    t163 = ((x933%(x934%x935))+x936);

    if (t163 != 122506LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x937 = INT8_MIN;
	static int64_t x938 = -1LL;
	int64_t x940 = -55131942LL;

    t164 = ((x937%(x938%x939))+x940);

    if (t164 != -55131942LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x941 = INT64_MAX;
	static int64_t x942 = -6LL;
	int8_t x943 = INT8_MIN;
	volatile int64_t x944 = INT64_MIN;
	int64_t t165 = -8171179384219LL;

    t165 = ((x941%(x942%x943))+x944);

    if (t165 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x945 = INT8_MIN;
	int32_t x946 = -1;
	int64_t x947 = INT64_MAX;
	static int8_t x948 = INT8_MIN;
	volatile int64_t t166 = -4LL;

    t166 = ((x945%(x946%x947))+x948);

    if (t166 != -128LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x949 = -1;
	static int16_t x950 = INT16_MIN;
	volatile uint32_t x951 = 27U;
	static int64_t x952 = -1LL;
	int64_t t167 = -1310717260LL;

    t167 = ((x949%(x950%x951))+x952);

    if (t167 != -1LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x955 = 12U;
	static int32_t x956 = -1;
	volatile int32_t t168 = 616325;

    t168 = ((x953%(x954%x955))+x956);

    if (t168 != -2) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint32_t x957 = UINT32_MAX;
	uint64_t x959 = 44207LLU;
	int16_t x960 = -1;
	volatile uint64_t t169 = 15097357687211996LLU;

    t169 = ((x957%(x958%x959))+x960);

    if (t169 != 1362LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x962 = -2;
	volatile uint64_t x964 = 264070472911698LLU;
	volatile uint64_t t170 = 5988455LLU;

    t170 = ((x961%(x962%x963))+x964);

    if (t170 != 264070472911698LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x965 = -7;
	uint64_t x966 = 53033068485839LLU;
	int32_t x967 = INT32_MIN;
	uint32_t x968 = UINT32_MAX;
	static volatile uint64_t t171 = 27000401147LLU;

    t171 = ((x965%(x966%x967))+x968);

    if (t171 != 39734301196178LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x969 = INT32_MAX;
	uint64_t x970 = UINT64_MAX;

    t172 = ((x969%(x970%x971))+x972);

    if (t172 != UINT64_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint64_t x974 = UINT64_MAX;
	volatile int32_t x975 = INT32_MIN;
	volatile uint8_t x976 = 14U;

    t173 = ((x973%(x974%x975))+x976);

    if (t173 != 65549LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x977 = -1;
	volatile int32_t x978 = -1;
	int32_t x979 = INT32_MIN;
	int16_t x980 = -3705;
	static volatile int32_t t174 = -19872;

    t174 = ((x977%(x978%x979))+x980);

    if (t174 != -3705) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x990 = -1;
	volatile int32_t x991 = -10;
	volatile int16_t x992 = INT16_MIN;
	volatile int64_t t175 = -509956036338333555LL;

    t175 = ((x989%(x990%x991))+x992);

    if (t175 != -32768LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint8_t x998 = 30U;
	int16_t x999 = INT16_MIN;

    t176 = ((x997%(x998%x999))+x1000);

    if (t176 != 18446744006336889224LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x1001 = -37929LL;
	volatile uint8_t x1002 = UINT8_MAX;
	int16_t x1004 = INT16_MIN;
	static volatile int64_t t177 = 567164LL;

    t177 = ((x1001%(x1002%x1003))+x1004);

    if (t177 != -32957LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint8_t x1005 = UINT8_MAX;
	int32_t x1006 = -1;
	volatile int32_t x1007 = INT32_MIN;
	uint16_t x1008 = UINT16_MAX;
	int32_t t178 = -8719255;

    t178 = ((x1005%(x1006%x1007))+x1008);

    if (t178 != 65535) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x1013 = 1;
	volatile uint16_t x1014 = 16U;
	static volatile int32_t x1016 = 2026;

    t179 = ((x1013%(x1014%x1015))+x1016);

    if (t179 != 2027U) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x1017 = -326865604;
	uint32_t x1018 = 12565U;
	int64_t x1019 = 172155880845LL;
	int32_t x1020 = INT32_MIN;

    t180 = ((x1017%(x1018%x1019))+x1020);

    if (t180 != -2147495907LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x1021 = INT16_MIN;
	int64_t x1023 = INT64_MAX;
	uint64_t x1024 = 186LLU;
	volatile uint64_t t181 = 1446745855LLU;

    t181 = ((x1021%(x1022%x1023))+x1024);

    if (t181 != 178LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x1026 = INT32_MIN;
	volatile uint64_t x1027 = UINT64_MAX;
	volatile int64_t x1028 = INT64_MAX;
	volatile uint64_t t182 = 22LLU;

    t182 = ((x1025%(x1026%x1027))+x1028);

    if (t182 != 9223372036854775903LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x1029 = INT8_MAX;
	static int8_t x1030 = INT8_MIN;
	int16_t x1031 = INT16_MAX;
	volatile int32_t x1032 = -6944;
	volatile int32_t t183 = 56846;

    t183 = ((x1029%(x1030%x1031))+x1032);

    if (t183 != -6817) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint8_t x1033 = UINT8_MAX;
	volatile uint32_t x1034 = 419U;
	int64_t x1035 = INT64_MIN;
	uint8_t x1036 = 40U;
	int64_t t184 = 1747217LL;

    t184 = ((x1033%(x1034%x1035))+x1036);

    if (t184 != 295LL) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x1053 = INT16_MIN;
	int64_t x1054 = INT64_MIN;
	int16_t x1056 = -1;

    t185 = ((x1053%(x1054%x1055))+x1056);

    if (t185 != -1LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x1061 = UINT8_MAX;
	uint64_t x1062 = 2LLU;
	int64_t x1064 = -35261637494LL;
	volatile uint64_t t186 = 60049474LLU;

    t186 = ((x1061%(x1062%x1063))+x1064);

    if (t186 != 18446744038447914123LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x1066 = INT64_MIN;
	volatile uint32_t x1068 = 8188U;
	volatile uint64_t t187 = 22397337662656868LLU;

    t187 = ((x1065%(x1066%x1067))+x1068);

    if (t187 != 8189LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x1069 = UINT64_MAX;
	volatile int16_t x1071 = INT16_MIN;
	uint64_t t188 = 1943432804011066714LLU;

    t188 = ((x1069%(x1070%x1071))+x1072);

    if (t188 != 2785091314LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x1073 = INT8_MAX;
	int16_t x1075 = INT16_MAX;
	static int32_t x1076 = INT32_MIN;
	volatile int32_t t189 = INT32_MIN;

    t189 = ((x1073%(x1074%x1075))+x1076);

    if (t189 != INT32_MIN) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint16_t x1077 = 219U;
	uint16_t x1078 = UINT16_MAX;
	int32_t x1079 = 33686375;
	int64_t x1080 = 819405644934867LL;
	int64_t t190 = 2401948070814LL;

    t190 = ((x1077%(x1078%x1079))+x1080);

    if (t190 != 819405644935086LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x1081 = -1;
	int32_t x1082 = -1;
	int8_t x1083 = INT8_MIN;
	int8_t x1084 = -2;
	int32_t t191 = -7516;

    t191 = ((x1081%(x1082%x1083))+x1084);

    if (t191 != -2) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x1085 = UINT64_MAX;
	uint32_t x1087 = 67U;
	int16_t x1088 = -112;
	volatile uint64_t t192 = 87467139818LLU;

    t192 = ((x1085%(x1086%x1087))+x1088);

    if (t192 != 18446744073709551504LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x1089 = 1U;
	uint16_t x1091 = UINT16_MAX;

    t193 = ((x1089%(x1090%x1091))+x1092);

    if (t193 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint32_t x1098 = UINT32_MAX;
	int64_t x1099 = -5317993436515LL;
	uint16_t x1100 = 20U;
	static int64_t t194 = 445LL;

    t194 = ((x1097%(x1098%x1099))+x1100);

    if (t194 != 6549LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x1102 = INT32_MAX;
	static int8_t x1103 = INT8_MIN;
	volatile int16_t x1104 = -13;
	volatile int32_t t195 = -25185;

    t195 = ((x1101%(x1102%x1103))+x1104);

    if (t195 != -14) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x1109 = -492506LL;
	uint16_t x1110 = 7687U;
	static uint64_t x1112 = 728039031988LLU;
	uint64_t t196 = 313875729758959981LLU;

    t196 = ((x1109%(x1110%x1111))+x1112);

    if (t196 != 728039031450LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x1113 = 2U;
	uint32_t x1114 = UINT32_MAX;
	int16_t x1115 = 2506;
	uint64_t x1116 = 8549LLU;
	uint64_t t197 = 94117595950302LLU;

    t197 = ((x1113%(x1114%x1115))+x1116);

    if (t197 != 8551LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x1126 = INT16_MIN;
	uint64_t x1128 = UINT64_MAX;
	volatile uint64_t t198 = UINT64_MAX;

    t198 = ((x1125%(x1126%x1127))+x1128);

    if (t198 != UINT64_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x1138 = 9;
	int8_t x1139 = INT8_MAX;
	int32_t t199 = 3;

    t199 = ((x1137%(x1138%x1139))+x1140);

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

