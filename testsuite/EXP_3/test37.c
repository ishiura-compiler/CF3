
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

int16_t x2 = INT16_MAX;
int8_t x4 = INT8_MIN;
uint8_t x20 = UINT8_MAX;
volatile int32_t t2 = 41752;
int16_t x23 = -1;
int32_t t3 = -159254;
int8_t x26 = INT8_MAX;
uint16_t x27 = 284U;
int8_t x41 = INT8_MAX;
int32_t t7 = 22542619;
int16_t x47 = INT16_MIN;
static volatile int32_t t9 = 23;
int8_t x72 = INT8_MAX;
int32_t t11 = -3;
int64_t x77 = -1LL;
static int64_t x95 = 10LL;
int16_t x98 = -7717;
volatile int64_t x99 = 3094LL;
static uint32_t x105 = 73U;
static volatile uint32_t x107 = 2323693U;
uint64_t x129 = 16241798370429839LLU;
int32_t x145 = INT32_MIN;
uint16_t x148 = UINT16_MAX;
static int64_t x156 = INT64_MIN;
uint32_t x158 = UINT32_MAX;
int32_t x162 = INT32_MAX;
int32_t t27 = 3470;
volatile uint32_t x172 = 413495U;
int32_t x180 = -47;
volatile int32_t t30 = 911927568;
int16_t x189 = -7124;
int32_t x200 = INT32_MAX;
static int32_t x215 = -1;
volatile int32_t t35 = -25;
static int16_t x240 = INT16_MIN;
volatile int32_t t38 = -118389596;
static int16_t x251 = INT16_MIN;
int16_t x267 = -1736;
int8_t x268 = INT8_MAX;
int32_t t42 = -40415386;
int16_t x296 = INT16_MIN;
int32_t t43 = -127951625;
static int8_t x307 = -1;
uint32_t x313 = UINT32_MAX;
int32_t t45 = -3804815;
uint32_t x322 = 18468216U;
static uint64_t x324 = 842536815996491118LLU;
int32_t t47 = 2;
int16_t x339 = INT16_MAX;
int32_t t48 = 321920;
int32_t x341 = -1;
int32_t t49 = 10360243;
uint8_t x361 = UINT8_MAX;
volatile int8_t x365 = INT8_MIN;
volatile int32_t t55 = -189385511;
uint32_t x382 = 1593435367U;
volatile int32_t t56 = 587;
static volatile uint8_t x395 = 5U;
int64_t x396 = 0LL;
uint32_t x406 = UINT32_MAX;
int8_t x408 = -1;
int8_t x420 = -8;
volatile uint8_t x428 = 0U;
uint16_t x431 = 12U;
volatile int32_t t63 = -426844996;
uint16_t x445 = 23736U;
volatile int32_t t65 = 168;
int16_t x455 = -1;
uint64_t x458 = UINT64_MAX;
int32_t t68 = -4970229;
static uint8_t x466 = 46U;
static int32_t x468 = -1;
static int32_t t70 = 89;
int32_t x476 = INT32_MAX;
int16_t x490 = INT16_MAX;
uint8_t x491 = 3U;
uint8_t x492 = 1U;
static int16_t x499 = -126;
volatile uint32_t x512 = 202827836U;
int8_t x518 = -1;
int64_t x519 = 12588625604LL;
static volatile int32_t t80 = 27987190;
int32_t x521 = -5160657;
static int32_t t81 = -381059;
uint32_t x531 = 32676U;
volatile uint64_t x534 = 24684153767LLU;
static uint32_t x535 = UINT32_MAX;
uint32_t x536 = 721U;
volatile int8_t x537 = -1;
int8_t x545 = -1;
volatile uint16_t x548 = 3U;
volatile int32_t t85 = 460;
int64_t x551 = INT64_MAX;
volatile int16_t x580 = -1;
static uint32_t x589 = 4069U;
uint16_t x593 = 5700U;
static volatile int32_t t95 = 98814;
int8_t x605 = 27;
static uint32_t x610 = UINT32_MAX;
uint32_t x612 = 16572694U;
volatile int32_t t97 = -199609438;
static int8_t x616 = INT8_MIN;
volatile int32_t t98 = -322880;
volatile int16_t x621 = INT16_MIN;
int8_t x625 = -1;
uint8_t x626 = UINT8_MAX;
int8_t x630 = INT8_MAX;
volatile uint8_t x657 = UINT8_MAX;
int8_t x658 = INT8_MAX;
int8_t x686 = 2;
int8_t x691 = INT8_MIN;
int16_t x702 = INT16_MAX;
int8_t x708 = INT8_MIN;
uint64_t x710 = UINT64_MAX;
volatile uint8_t x714 = 7U;
uint8_t x725 = UINT8_MAX;
int8_t x726 = INT8_MIN;
volatile uint8_t x727 = UINT8_MAX;
int32_t t117 = -10307;
static volatile int32_t t118 = -239044767;
volatile uint64_t x749 = 26872LLU;
int64_t x751 = INT64_MAX;
volatile int32_t t121 = -39746;
int32_t t123 = -116464550;
uint64_t x768 = 4LLU;
volatile int32_t t127 = 3763;
int32_t t128 = 29;
int8_t x801 = INT8_MIN;
volatile int16_t x811 = 2518;
int32_t x821 = -1;
int16_t x822 = 30;
uint16_t x830 = 29334U;
int32_t t137 = -85203866;
int16_t x846 = 26;
int16_t x852 = -135;
uint32_t x859 = 3648U;
volatile uint8_t x860 = 24U;
int32_t t141 = -29084;
uint8_t x869 = UINT8_MAX;
int32_t t142 = -4364;
int16_t x892 = -1;
static uint64_t x894 = 117LLU;
uint64_t x895 = UINT64_MAX;
uint32_t x899 = 11215969U;
int32_t t146 = 34350294;
int8_t x902 = -1;
int64_t x922 = 194LL;
uint8_t x931 = UINT8_MAX;
uint8_t x944 = UINT8_MAX;
volatile uint64_t x964 = 549487654265LLU;
static int32_t t154 = 5074;
volatile int32_t x980 = 5887;
int8_t x993 = INT8_MIN;
static uint64_t x994 = 559403LLU;
static int32_t t160 = 16553336;
volatile uint64_t x1006 = 136908772952LLU;
volatile int32_t t162 = -172791;
int8_t x1026 = INT8_MIN;
static int16_t x1027 = INT16_MIN;
uint8_t x1028 = 118U;
int16_t x1044 = 89;
int32_t x1048 = -33515660;
static int64_t x1051 = -1LL;
uint64_t x1052 = 121177571860LLU;
int32_t t170 = -145002;
int16_t x1072 = 31;
volatile uint64_t x1075 = 980059602496999LLU;
int32_t t172 = 0;
static int32_t x1089 = -2;
int32_t x1091 = INT32_MAX;
static uint16_t x1101 = 2595U;
int16_t x1106 = 460;
volatile int8_t x1107 = INT8_MAX;
uint8_t x1112 = 0U;
uint32_t x1119 = 92572301U;
static volatile int8_t x1121 = INT8_MIN;
volatile int8_t x1126 = -1;
int32_t t180 = 220200;
static volatile int32_t x1138 = INT32_MIN;
int64_t x1141 = -1LL;
int64_t x1146 = -1LL;
int32_t t186 = 1858;
volatile uint64_t x1185 = 8763282842837413LLU;
static uint32_t x1202 = 1U;
int64_t x1210 = -1LL;
int16_t x1212 = 112;
int8_t x1242 = INT8_MAX;
int8_t x1243 = -1;
uint64_t x1246 = 1600LLU;
volatile int32_t t198 = -854;


void f0(void) {
    	uint64_t x1 = UINT64_MAX;
	int64_t x3 = 4566446269469759889LL;
	int32_t t0 = 10;

    t0 = ((x1*x2)>(x3+x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 36626U;
	uint8_t x6 = 10U;
	int8_t x7 = 0;
	uint16_t x8 = 0U;
	static int32_t t1 = 3184;

    t1 = ((x5*x6)>(x7+x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x17 = -3;
	uint8_t x18 = 27U;
	int32_t x19 = 1719126;

    t2 = ((x17*x18)>(x19+x20));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x21 = INT8_MIN;
	int16_t x22 = -1;
	int8_t x24 = -1;

    t3 = ((x21*x22)>(x23+x24));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x25 = INT16_MIN;
	int16_t x28 = -1;
	volatile int32_t t4 = 2;

    t4 = ((x25*x26)>(x27+x28));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x29 = 1U;
	int32_t x30 = -39371139;
	int32_t x31 = INT32_MAX;
	uint32_t x32 = 116888U;
	volatile int32_t t5 = 43188004;

    t5 = ((x29*x30)>(x31+x32));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint8_t x33 = 47U;
	uint8_t x34 = 7U;
	int8_t x35 = 3;
	int8_t x36 = -1;
	int32_t t6 = -203996;

    t6 = ((x33*x34)>(x35+x36));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint16_t x42 = UINT16_MAX;
	int64_t x43 = INT64_MAX;
	static volatile int32_t x44 = -10333589;

    t7 = ((x41*x42)>(x43+x44));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x45 = 31U;
	int8_t x46 = 44;
	volatile uint32_t x48 = 1U;
	int32_t t8 = -230;

    t8 = ((x45*x46)>(x47+x48));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint32_t x53 = UINT32_MAX;
	int16_t x54 = INT16_MAX;
	int16_t x55 = -1;
	static uint8_t x56 = 14U;

    t9 = ((x53*x54)>(x55+x56));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x57 = INT8_MIN;
	uint16_t x58 = UINT16_MAX;
	uint64_t x59 = UINT64_MAX;
	static int8_t x60 = INT8_MIN;
	int32_t t10 = 21;

    t10 = ((x57*x58)>(x59+x60));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x69 = 158LL;
	static int32_t x70 = INT32_MIN;
	int32_t x71 = 35480;

    t11 = ((x69*x70)>(x71+x72));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x73 = 1550LL;
	int8_t x74 = -1;
	int32_t x75 = INT32_MAX;
	volatile uint64_t x76 = 115569484LLU;
	static int32_t t12 = 3166070;

    t12 = ((x73*x74)>(x75+x76));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x78 = -1;
	uint32_t x79 = 1169U;
	volatile int16_t x80 = INT16_MIN;
	static volatile int32_t t13 = 22710156;

    t13 = ((x77*x78)>(x79+x80));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x81 = 13124666LLU;
	int8_t x82 = 11;
	int64_t x83 = -4607LL;
	int16_t x84 = INT16_MAX;
	int32_t t14 = -89376;

    t14 = ((x81*x82)>(x83+x84));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x93 = INT16_MIN;
	int8_t x94 = INT8_MIN;
	int32_t x96 = INT32_MIN;
	static volatile int32_t t15 = -6;

    t15 = ((x93*x94)>(x95+x96));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x97 = 478U;
	volatile uint16_t x100 = 1U;
	int32_t t16 = 3960;

    t16 = ((x97*x98)>(x99+x100));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x106 = -1;
	uint64_t x108 = UINT64_MAX;
	int32_t t17 = -17262;

    t17 = ((x105*x106)>(x107+x108));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x113 = INT16_MIN;
	int8_t x114 = INT8_MIN;
	volatile int64_t x115 = -1LL;
	static int64_t x116 = 6652522LL;
	int32_t t18 = 107951570;

    t18 = ((x113*x114)>(x115+x116));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x117 = 4U;
	uint32_t x118 = UINT32_MAX;
	int32_t x119 = -1;
	volatile int16_t x120 = -1;
	volatile int32_t t19 = -13;

    t19 = ((x117*x118)>(x119+x120));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint16_t x125 = 16U;
	int16_t x126 = 2;
	static int8_t x127 = -1;
	uint32_t x128 = UINT32_MAX;
	volatile int32_t t20 = -26607925;

    t20 = ((x125*x126)>(x127+x128));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x130 = INT64_MIN;
	uint16_t x131 = 0U;
	static int8_t x132 = INT8_MIN;
	int32_t t21 = 1622;

    t21 = ((x129*x130)>(x131+x132));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x133 = INT16_MIN;
	static uint64_t x134 = 1726270773388383979LLU;
	uint16_t x135 = 15U;
	static int16_t x136 = -7423;
	int32_t t22 = -5727;

    t22 = ((x133*x134)>(x135+x136));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x146 = 0;
	int16_t x147 = 6325;
	int32_t t23 = 103;

    t23 = ((x145*x146)>(x147+x148));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x149 = -1;
	volatile uint32_t x150 = 10205U;
	uint32_t x151 = UINT32_MAX;
	int8_t x152 = -1;
	volatile int32_t t24 = -8;

    t24 = ((x149*x150)>(x151+x152));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x153 = INT32_MAX;
	int32_t x154 = -1;
	uint16_t x155 = 2U;
	int32_t t25 = -676506395;

    t25 = ((x153*x154)>(x155+x156));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x157 = 1;
	int8_t x159 = 1;
	uint32_t x160 = UINT32_MAX;
	int32_t t26 = 153;

    t26 = ((x157*x158)>(x159+x160));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x161 = 6462LLU;
	int16_t x163 = -1;
	int8_t x164 = -1;

    t27 = ((x161*x162)>(x163+x164));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x169 = -29;
	int16_t x170 = -5637;
	static int8_t x171 = INT8_MIN;
	int32_t t28 = -12532;

    t28 = ((x169*x170)>(x171+x172));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile uint8_t x173 = 26U;
	uint16_t x174 = UINT16_MAX;
	volatile int16_t x175 = INT16_MIN;
	volatile uint32_t x176 = 433U;
	volatile int32_t t29 = -1472421;

    t29 = ((x173*x174)>(x175+x176));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x177 = 3482128U;
	int32_t x178 = -1;
	uint8_t x179 = 69U;

    t30 = ((x177*x178)>(x179+x180));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint32_t x185 = 3574U;
	volatile uint16_t x186 = 3U;
	int16_t x187 = 1;
	int8_t x188 = INT8_MAX;
	int32_t t31 = 462963654;

    t31 = ((x185*x186)>(x187+x188));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint32_t x190 = 428U;
	volatile int16_t x191 = 61;
	static volatile uint16_t x192 = 32683U;
	volatile int32_t t32 = 638939;

    t32 = ((x189*x190)>(x191+x192));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x197 = INT16_MIN;
	volatile int16_t x198 = 9171;
	int32_t x199 = INT32_MIN;
	volatile int32_t t33 = 3;

    t33 = ((x197*x198)>(x199+x200));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x205 = UINT32_MAX;
	int16_t x206 = -1;
	int32_t x207 = INT32_MIN;
	volatile int16_t x208 = INT16_MAX;
	volatile int32_t t34 = -1614;

    t34 = ((x205*x206)>(x207+x208));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x213 = 15710U;
	static volatile uint64_t x214 = 35659725092LLU;
	static uint8_t x216 = UINT8_MAX;

    t35 = ((x213*x214)>(x215+x216));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x217 = UINT64_MAX;
	volatile uint32_t x218 = 3U;
	int32_t x219 = -1;
	volatile uint8_t x220 = UINT8_MAX;
	int32_t t36 = 6;

    t36 = ((x217*x218)>(x219+x220));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x229 = INT32_MIN;
	volatile uint64_t x230 = 255LLU;
	static uint64_t x231 = 107273324752193LLU;
	uint64_t x232 = UINT64_MAX;
	static int32_t t37 = -2;

    t37 = ((x229*x230)>(x231+x232));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x237 = -1;
	volatile int64_t x238 = -1LL;
	int32_t x239 = INT32_MAX;

    t38 = ((x237*x238)>(x239+x240));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x245 = -8;
	int16_t x246 = INT16_MIN;
	int8_t x247 = INT8_MIN;
	int32_t x248 = INT32_MAX;
	volatile int32_t t39 = 6148;

    t39 = ((x245*x246)>(x247+x248));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x249 = INT8_MIN;
	int32_t x250 = -1;
	static int8_t x252 = INT8_MIN;
	volatile int32_t t40 = 3811820;

    t40 = ((x249*x250)>(x251+x252));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x261 = -10;
	int8_t x262 = INT8_MIN;
	uint8_t x263 = 20U;
	volatile int16_t x264 = INT16_MAX;
	static volatile int32_t t41 = 693646;

    t41 = ((x261*x262)>(x263+x264));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile uint64_t x265 = 3LLU;
	volatile uint64_t x266 = 5LLU;

    t42 = ((x265*x266)>(x267+x268));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x293 = UINT8_MAX;
	volatile uint16_t x294 = UINT16_MAX;
	int16_t x295 = INT16_MAX;

    t43 = ((x293*x294)>(x295+x296));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x305 = UINT32_MAX;
	volatile uint16_t x306 = 79U;
	uint16_t x308 = 29749U;
	int32_t t44 = 79;

    t44 = ((x305*x306)>(x307+x308));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x314 = INT16_MAX;
	volatile int32_t x315 = 68;
	volatile uint64_t x316 = UINT64_MAX;

    t45 = ((x313*x314)>(x315+x316));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x321 = 8671193866417LLU;
	static uint16_t x323 = 2266U;
	int32_t t46 = -116872088;

    t46 = ((x321*x322)>(x323+x324));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint16_t x325 = 0U;
	volatile int16_t x326 = -1;
	int16_t x327 = -13473;
	volatile uint64_t x328 = UINT64_MAX;

    t47 = ((x325*x326)>(x327+x328));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x337 = -10831;
	int8_t x338 = 1;
	uint8_t x340 = 6U;

    t48 = ((x337*x338)>(x339+x340));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x342 = 10484102LLU;
	static uint64_t x343 = UINT64_MAX;
	static uint32_t x344 = UINT32_MAX;

    t49 = ((x341*x342)>(x343+x344));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x349 = INT8_MIN;
	volatile uint8_t x350 = 37U;
	int32_t x351 = -1;
	volatile int16_t x352 = 95;
	int32_t t50 = 1165;

    t50 = ((x349*x350)>(x351+x352));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x357 = 0;
	int16_t x358 = INT16_MAX;
	int64_t x359 = -1LL;
	static uint32_t x360 = 1177U;
	volatile int32_t t51 = -3586524;

    t51 = ((x357*x358)>(x359+x360));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x362 = -1LL;
	int16_t x363 = 1;
	int32_t x364 = INT32_MIN;
	int32_t t52 = 5;

    t52 = ((x361*x362)>(x363+x364));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x366 = UINT8_MAX;
	volatile int8_t x367 = 1;
	int8_t x368 = -1;
	int32_t t53 = -50;

    t53 = ((x365*x366)>(x367+x368));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x369 = -58;
	int16_t x370 = -7;
	static volatile int16_t x371 = INT16_MIN;
	int16_t x372 = INT16_MIN;
	volatile int32_t t54 = 259;

    t54 = ((x369*x370)>(x371+x372));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x377 = 248495091377LL;
	int8_t x378 = -1;
	int16_t x379 = -1;
	volatile uint16_t x380 = 88U;

    t55 = ((x377*x378)>(x379+x380));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x381 = INT32_MAX;
	uint32_t x383 = UINT32_MAX;
	int64_t x384 = 451283LL;

    t56 = ((x381*x382)>(x383+x384));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x389 = 3129LLU;
	int8_t x390 = INT8_MIN;
	int16_t x391 = INT16_MIN;
	uint32_t x392 = 106539725U;
	int32_t t57 = 8732886;

    t57 = ((x389*x390)>(x391+x392));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x393 = INT16_MIN;
	int8_t x394 = INT8_MIN;
	volatile int32_t t58 = 358;

    t58 = ((x393*x394)>(x395+x396));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x405 = INT32_MAX;
	int64_t x407 = 2650872880019540LL;
	static int32_t t59 = -1490545;

    t59 = ((x405*x406)>(x407+x408));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x417 = 15;
	int16_t x418 = INT16_MIN;
	int16_t x419 = INT16_MIN;
	volatile int32_t t60 = 13758673;

    t60 = ((x417*x418)>(x419+x420));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x421 = INT8_MAX;
	volatile int32_t x422 = 237068;
	uint64_t x423 = 27997669834772297LLU;
	static int64_t x424 = 28963686390432051LL;
	static int32_t t61 = -52829;

    t61 = ((x421*x422)>(x423+x424));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint8_t x425 = UINT8_MAX;
	static int8_t x426 = INT8_MIN;
	static int8_t x427 = -1;
	int32_t t62 = -17898;

    t62 = ((x425*x426)>(x427+x428));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x429 = 41256039U;
	int8_t x430 = 7;
	int32_t x432 = -1;

    t63 = ((x429*x430)>(x431+x432));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint32_t x437 = 22U;
	volatile uint16_t x438 = 9425U;
	uint64_t x439 = 58LLU;
	volatile int16_t x440 = INT16_MAX;
	int32_t t64 = -1574;

    t64 = ((x437*x438)>(x439+x440));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x446 = UINT32_MAX;
	volatile int16_t x447 = INT16_MIN;
	int16_t x448 = INT16_MIN;

    t65 = ((x445*x446)>(x447+x448));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint8_t x453 = UINT8_MAX;
	uint8_t x454 = 61U;
	static volatile uint16_t x456 = 30U;
	int32_t t66 = -5;

    t66 = ((x453*x454)>(x455+x456));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x457 = INT16_MIN;
	int32_t x459 = -15852015;
	static int16_t x460 = 1;
	int32_t t67 = 89177;

    t67 = ((x457*x458)>(x459+x460));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x461 = 9759;
	static uint32_t x462 = UINT32_MAX;
	int16_t x463 = INT16_MAX;
	int8_t x464 = INT8_MIN;

    t68 = ((x461*x462)>(x463+x464));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x465 = -8387869468LL;
	int32_t x467 = -1;
	volatile int32_t t69 = -680;

    t69 = ((x465*x466)>(x467+x468));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint64_t x469 = 4252222LLU;
	int64_t x470 = INT64_MIN;
	int32_t x471 = INT32_MIN;
	static uint32_t x472 = UINT32_MAX;

    t70 = ((x469*x470)>(x471+x472));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x473 = INT8_MIN;
	volatile uint16_t x474 = 12772U;
	int32_t x475 = -10182194;
	volatile int32_t t71 = 941368665;

    t71 = ((x473*x474)>(x475+x476));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x481 = UINT8_MAX;
	int8_t x482 = INT8_MIN;
	int64_t x483 = -1LL;
	uint64_t x484 = UINT64_MAX;
	volatile int32_t t72 = -898886239;

    t72 = ((x481*x482)>(x483+x484));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x485 = 984U;
	int8_t x486 = INT8_MIN;
	uint16_t x487 = 1U;
	uint8_t x488 = 48U;
	int32_t t73 = -448;

    t73 = ((x485*x486)>(x487+x488));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x489 = 9U;
	static int32_t t74 = 1;

    t74 = ((x489*x490)>(x491+x492));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x493 = -1532;
	uint64_t x494 = 3084219812341053109LLU;
	static int8_t x495 = INT8_MIN;
	uint64_t x496 = 2LLU;
	volatile int32_t t75 = 418;

    t75 = ((x493*x494)>(x495+x496));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint8_t x497 = 15U;
	volatile int32_t x498 = -1;
	volatile uint16_t x500 = 15U;
	volatile int32_t t76 = 236;

    t76 = ((x497*x498)>(x499+x500));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x501 = UINT32_MAX;
	uint32_t x502 = UINT32_MAX;
	int8_t x503 = INT8_MAX;
	int16_t x504 = INT16_MIN;
	volatile int32_t t77 = 4379422;

    t77 = ((x501*x502)>(x503+x504));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x505 = UINT32_MAX;
	uint32_t x506 = 1777U;
	volatile int16_t x507 = -5;
	int8_t x508 = -16;
	int32_t t78 = -20642705;

    t78 = ((x505*x506)>(x507+x508));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x509 = INT8_MAX;
	int16_t x510 = INT16_MIN;
	uint16_t x511 = UINT16_MAX;
	static volatile int32_t t79 = -10852825;

    t79 = ((x509*x510)>(x511+x512));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x517 = UINT16_MAX;
	int16_t x520 = INT16_MAX;

    t80 = ((x517*x518)>(x519+x520));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x522 = INT8_MAX;
	uint8_t x523 = 2U;
	volatile int32_t x524 = -172;

    t81 = ((x521*x522)>(x523+x524));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint16_t x529 = 83U;
	int8_t x530 = INT8_MIN;
	static int8_t x532 = INT8_MAX;
	int32_t t82 = 1;

    t82 = ((x529*x530)>(x531+x532));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x533 = 2U;
	volatile int32_t t83 = 348077527;

    t83 = ((x533*x534)>(x535+x536));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x538 = -1;
	static volatile uint32_t x539 = 24588835U;
	static volatile int32_t x540 = -1;
	int32_t t84 = -655;

    t84 = ((x537*x538)>(x539+x540));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int8_t x546 = INT8_MIN;
	int16_t x547 = INT16_MIN;

    t85 = ((x545*x546)>(x547+x548));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x549 = 0;
	int8_t x550 = 0;
	int32_t x552 = 0;
	int32_t t86 = 8;

    t86 = ((x549*x550)>(x551+x552));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x553 = 18402205U;
	volatile int8_t x554 = -3;
	volatile int64_t x555 = 3896532574400071827LL;
	int8_t x556 = INT8_MIN;
	int32_t t87 = -5838;

    t87 = ((x553*x554)>(x555+x556));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x557 = 1U;
	int32_t x558 = INT32_MAX;
	int64_t x559 = 42117737579LL;
	uint16_t x560 = 12595U;
	int32_t t88 = 2289;

    t88 = ((x557*x558)>(x559+x560));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint16_t x561 = UINT16_MAX;
	uint16_t x562 = 55U;
	int64_t x563 = INT64_MAX;
	int64_t x564 = -1LL;
	volatile int32_t t89 = -189963975;

    t89 = ((x561*x562)>(x563+x564));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x577 = -17591098LL;
	int64_t x578 = 138LL;
	int32_t x579 = -10422;
	int32_t t90 = -2880799;

    t90 = ((x577*x578)>(x579+x580));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x581 = -1LL;
	int32_t x582 = INT32_MIN;
	uint16_t x583 = 1061U;
	uint64_t x584 = 269518818778839LLU;
	int32_t t91 = -451758766;

    t91 = ((x581*x582)>(x583+x584));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int16_t x590 = INT16_MAX;
	int64_t x591 = INT64_MAX;
	int16_t x592 = INT16_MIN;
	int32_t t92 = 90365977;

    t92 = ((x589*x590)>(x591+x592));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x594 = INT16_MIN;
	static volatile int8_t x595 = -1;
	int64_t x596 = 104116957LL;
	static int32_t t93 = -33426;

    t93 = ((x593*x594)>(x595+x596));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x597 = 108U;
	uint16_t x598 = 4571U;
	int16_t x599 = INT16_MIN;
	uint16_t x600 = 16U;
	int32_t t94 = 5;

    t94 = ((x597*x598)>(x599+x600));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x601 = -2;
	int8_t x602 = 1;
	int64_t x603 = -1LL;
	uint32_t x604 = UINT32_MAX;

    t95 = ((x601*x602)>(x603+x604));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x606 = -1;
	int16_t x607 = 0;
	static int64_t x608 = INT64_MIN;
	int32_t t96 = 108892220;

    t96 = ((x605*x606)>(x607+x608));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x609 = INT32_MIN;
	static int32_t x611 = 237;

    t97 = ((x609*x610)>(x611+x612));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x613 = INT32_MIN;
	uint32_t x614 = 535U;
	int64_t x615 = 1LL;

    t98 = ((x613*x614)>(x615+x616));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x617 = INT8_MIN;
	volatile uint32_t x618 = 15U;
	uint8_t x619 = 3U;
	uint16_t x620 = 97U;
	volatile int32_t t99 = 4807853;

    t99 = ((x617*x618)>(x619+x620));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x622 = 2U;
	volatile int8_t x623 = -1;
	int16_t x624 = 13;
	int32_t t100 = -3818;

    t100 = ((x621*x622)>(x623+x624));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x627 = 6588U;
	volatile int64_t x628 = INT64_MIN;
	static volatile int32_t t101 = 126577;

    t101 = ((x625*x626)>(x627+x628));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x629 = 2U;
	volatile uint8_t x631 = 10U;
	int8_t x632 = 38;
	static int32_t t102 = 36635467;

    t102 = ((x629*x630)>(x631+x632));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x633 = 275;
	int8_t x634 = INT8_MIN;
	int8_t x635 = -1;
	int16_t x636 = INT16_MAX;
	int32_t t103 = -721914;

    t103 = ((x633*x634)>(x635+x636));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint32_t x649 = 28783144U;
	volatile int64_t x650 = -1LL;
	int32_t x651 = 3228573;
	int8_t x652 = INT8_MIN;
	volatile int32_t t104 = 407336693;

    t104 = ((x649*x650)>(x651+x652));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint8_t x653 = 0U;
	int8_t x654 = -24;
	uint8_t x655 = 29U;
	uint64_t x656 = UINT64_MAX;
	int32_t t105 = 472577869;

    t105 = ((x653*x654)>(x655+x656));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x659 = UINT32_MAX;
	int8_t x660 = -1;
	static volatile int32_t t106 = -1382281;

    t106 = ((x657*x658)>(x659+x660));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x665 = -1;
	volatile uint16_t x666 = 980U;
	volatile uint8_t x667 = 5U;
	int8_t x668 = INT8_MIN;
	static volatile int32_t t107 = -1785;

    t107 = ((x665*x666)>(x667+x668));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x685 = INT8_MIN;
	uint8_t x687 = 4U;
	int16_t x688 = 10;
	static int32_t t108 = -13;

    t108 = ((x685*x686)>(x687+x688));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x689 = UINT64_MAX;
	int8_t x690 = 29;
	uint8_t x692 = 3U;
	volatile int32_t t109 = -311424323;

    t109 = ((x689*x690)>(x691+x692));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x697 = -1;
	int64_t x698 = 2988746290204LL;
	int8_t x699 = 13;
	int16_t x700 = -1;
	static int32_t t110 = 18235691;

    t110 = ((x697*x698)>(x699+x700));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x701 = INT8_MAX;
	uint8_t x703 = 122U;
	static int16_t x704 = 0;
	volatile int32_t t111 = -239;

    t111 = ((x701*x702)>(x703+x704));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x705 = UINT64_MAX;
	static int32_t x706 = INT32_MIN;
	int32_t x707 = -66480742;
	static int32_t t112 = 12025;

    t112 = ((x705*x706)>(x707+x708));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x709 = -1;
	int16_t x711 = 2667;
	int8_t x712 = -1;
	int32_t t113 = 14041;

    t113 = ((x709*x710)>(x711+x712));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x713 = -428;
	volatile int8_t x715 = INT8_MAX;
	uint16_t x716 = UINT16_MAX;
	static int32_t t114 = -6260;

    t114 = ((x713*x714)>(x715+x716));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint8_t x721 = 1U;
	static int64_t x722 = 272453575151255LL;
	int32_t x723 = INT32_MAX;
	int16_t x724 = INT16_MIN;
	int32_t t115 = 1986907;

    t115 = ((x721*x722)>(x723+x724));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x728 = INT64_MIN;
	int32_t t116 = 15907;

    t116 = ((x725*x726)>(x727+x728));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x729 = 59;
	int16_t x730 = INT16_MIN;
	int16_t x731 = INT16_MAX;
	uint64_t x732 = UINT64_MAX;

    t117 = ((x729*x730)>(x731+x732));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x733 = -52;
	uint64_t x734 = UINT64_MAX;
	int8_t x735 = INT8_MIN;
	static int16_t x736 = INT16_MAX;

    t118 = ((x733*x734)>(x735+x736));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x737 = -1;
	volatile int32_t x738 = -1;
	int16_t x739 = 16371;
	int32_t x740 = INT32_MIN;
	static volatile int32_t t119 = 0;

    t119 = ((x737*x738)>(x739+x740));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x745 = INT8_MAX;
	int8_t x746 = 13;
	static int16_t x747 = INT16_MAX;
	volatile uint64_t x748 = 6334372357LLU;
	volatile int32_t t120 = -1348;

    t120 = ((x745*x746)>(x747+x748));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint16_t x750 = 736U;
	int8_t x752 = INT8_MIN;

    t121 = ((x749*x750)>(x751+x752));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x753 = INT32_MIN;
	int64_t x754 = -1LL;
	int8_t x755 = -1;
	uint64_t x756 = 225294LLU;
	volatile int32_t t122 = -263290905;

    t122 = ((x753*x754)>(x755+x756));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x757 = 5U;
	static int32_t x758 = 239332;
	static uint32_t x759 = 854U;
	int32_t x760 = -2811;

    t123 = ((x757*x758)>(x759+x760));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x761 = 484081387104LLU;
	int8_t x762 = -6;
	uint16_t x763 = UINT16_MAX;
	uint64_t x764 = UINT64_MAX;
	static int32_t t124 = 6;

    t124 = ((x761*x762)>(x763+x764));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x765 = INT32_MIN;
	volatile uint32_t x766 = UINT32_MAX;
	int32_t x767 = -117;
	volatile int32_t t125 = -3657527;

    t125 = ((x765*x766)>(x767+x768));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x773 = INT16_MIN;
	volatile int32_t x774 = 33;
	int8_t x775 = -1;
	volatile uint8_t x776 = 26U;
	volatile int32_t t126 = 3;

    t126 = ((x773*x774)>(x775+x776));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile uint16_t x777 = UINT16_MAX;
	static int64_t x778 = -1LL;
	int8_t x779 = INT8_MIN;
	uint16_t x780 = 111U;

    t127 = ((x777*x778)>(x779+x780));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x781 = INT8_MAX;
	volatile uint64_t x782 = 28433LLU;
	int8_t x783 = INT8_MIN;
	int32_t x784 = -21726;

    t128 = ((x781*x782)>(x783+x784));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x785 = INT16_MAX;
	int16_t x786 = INT16_MIN;
	int32_t x787 = -7;
	int64_t x788 = -1LL;
	int32_t t129 = 0;

    t129 = ((x785*x786)>(x787+x788));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint64_t x797 = UINT64_MAX;
	uint16_t x798 = UINT16_MAX;
	int16_t x799 = INT16_MIN;
	int32_t x800 = -2123967;
	int32_t t130 = 6039;

    t130 = ((x797*x798)>(x799+x800));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x802 = 0U;
	uint8_t x803 = UINT8_MAX;
	static int8_t x804 = INT8_MIN;
	volatile int32_t t131 = 88262488;

    t131 = ((x801*x802)>(x803+x804));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x809 = -664603729LL;
	int32_t x810 = INT32_MIN;
	uint32_t x812 = 19991731U;
	int32_t t132 = -43887;

    t132 = ((x809*x810)>(x811+x812));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x817 = -1;
	volatile int32_t x818 = -1;
	int16_t x819 = -2;
	static int8_t x820 = 0;
	static volatile int32_t t133 = 26180831;

    t133 = ((x817*x818)>(x819+x820));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x823 = 6U;
	volatile int32_t x824 = INT32_MIN;
	int32_t t134 = 2351020;

    t134 = ((x821*x822)>(x823+x824));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x829 = INT16_MIN;
	int16_t x831 = INT16_MIN;
	int16_t x832 = INT16_MAX;
	int32_t t135 = 334888;

    t135 = ((x829*x830)>(x831+x832));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x837 = 3098U;
	static int16_t x838 = 0;
	static uint8_t x839 = 6U;
	int32_t x840 = -2502;
	int32_t t136 = 3478;

    t136 = ((x837*x838)>(x839+x840));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x841 = 20346U;
	int16_t x842 = -1;
	int32_t x843 = 0;
	static int8_t x844 = INT8_MAX;

    t137 = ((x841*x842)>(x843+x844));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x845 = 1;
	static uint32_t x847 = UINT32_MAX;
	static int8_t x848 = INT8_MAX;
	int32_t t138 = 3834;

    t138 = ((x845*x846)>(x847+x848));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x849 = UINT64_MAX;
	int32_t x850 = 0;
	int16_t x851 = 8885;
	int32_t t139 = -2582074;

    t139 = ((x849*x850)>(x851+x852));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x857 = 453;
	uint8_t x858 = 79U;
	int32_t t140 = 1;

    t140 = ((x857*x858)>(x859+x860));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x861 = INT32_MIN;
	uint64_t x862 = 99051016LLU;
	volatile int64_t x863 = INT64_MIN;
	uint64_t x864 = UINT64_MAX;

    t141 = ((x861*x862)>(x863+x864));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x870 = 553915463LL;
	uint32_t x871 = 13U;
	uint8_t x872 = 11U;

    t142 = ((x869*x870)>(x871+x872));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x873 = -1;
	int16_t x874 = INT16_MIN;
	int16_t x875 = 67;
	int32_t x876 = INT32_MIN;
	int32_t t143 = -988;

    t143 = ((x873*x874)>(x875+x876));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x889 = INT16_MIN;
	int8_t x890 = -3;
	uint16_t x891 = 3U;
	volatile int32_t t144 = 219893906;

    t144 = ((x889*x890)>(x891+x892));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x893 = INT32_MIN;
	uint16_t x896 = 1323U;
	volatile int32_t t145 = 518901;

    t145 = ((x893*x894)>(x895+x896));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint32_t x897 = 34932U;
	uint32_t x898 = UINT32_MAX;
	int16_t x900 = INT16_MIN;

    t146 = ((x897*x898)>(x899+x900));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint32_t x901 = 14U;
	static int64_t x903 = -1LL;
	volatile int16_t x904 = INT16_MIN;
	volatile int32_t t147 = 0;

    t147 = ((x901*x902)>(x903+x904));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x921 = INT32_MIN;
	uint32_t x923 = 527817246U;
	int32_t x924 = INT32_MIN;
	int32_t t148 = -3646;

    t148 = ((x921*x922)>(x923+x924));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint32_t x929 = UINT32_MAX;
	static volatile uint8_t x930 = 3U;
	uint16_t x932 = 1U;
	int32_t t149 = 4010;

    t149 = ((x929*x930)>(x931+x932));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x941 = UINT8_MAX;
	int64_t x942 = -148998033LL;
	static int32_t x943 = -1;
	volatile int32_t t150 = -1;

    t150 = ((x941*x942)>(x943+x944));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x945 = 128LLU;
	int32_t x946 = 140621;
	static volatile int16_t x947 = 26;
	int64_t x948 = INT64_MIN;
	volatile int32_t t151 = 8447;

    t151 = ((x945*x946)>(x947+x948));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int32_t x953 = -1;
	uint8_t x954 = UINT8_MAX;
	static uint8_t x955 = 1U;
	int64_t x956 = INT64_MIN;
	static int32_t t152 = 0;

    t152 = ((x953*x954)>(x955+x956));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x957 = 1LL;
	int16_t x958 = INT16_MIN;
	uint16_t x959 = 6U;
	volatile uint16_t x960 = 24476U;
	static volatile int32_t t153 = 210418;

    t153 = ((x957*x958)>(x959+x960));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x961 = -1;
	volatile int8_t x962 = 30;
	int8_t x963 = -56;

    t154 = ((x961*x962)>(x963+x964));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint32_t x965 = UINT32_MAX;
	volatile int16_t x966 = INT16_MAX;
	volatile int16_t x967 = -1;
	int64_t x968 = INT64_MAX;
	int32_t t155 = 1985983;

    t155 = ((x965*x966)>(x967+x968));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x973 = INT8_MAX;
	static int64_t x974 = -12435892527940360LL;
	int16_t x975 = INT16_MIN;
	int16_t x976 = -1;
	volatile int32_t t156 = -11710069;

    t156 = ((x973*x974)>(x975+x976));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x977 = -1;
	static int64_t x978 = -1LL;
	int16_t x979 = INT16_MIN;
	static int32_t t157 = -217772;

    t157 = ((x977*x978)>(x979+x980));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x981 = 6179LLU;
	int16_t x982 = -7154;
	int16_t x983 = INT16_MAX;
	static uint64_t x984 = 12724209046528971LLU;
	volatile int32_t t158 = -765391042;

    t158 = ((x981*x982)>(x983+x984));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x995 = -1;
	int8_t x996 = 14;
	volatile int32_t t159 = -11906580;

    t159 = ((x993*x994)>(x995+x996));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x997 = -778;
	uint32_t x998 = 998619U;
	volatile int32_t x999 = INT32_MAX;
	static uint64_t x1000 = 1344624LLU;

    t160 = ((x997*x998)>(x999+x1000));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x1005 = INT16_MAX;
	volatile int8_t x1007 = 1;
	int8_t x1008 = -1;
	static volatile int32_t t161 = 462;

    t161 = ((x1005*x1006)>(x1007+x1008));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x1009 = INT16_MIN;
	static int8_t x1010 = INT8_MIN;
	int8_t x1011 = -2;
	int16_t x1012 = -3;

    t162 = ((x1009*x1010)>(x1011+x1012));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint16_t x1021 = 29913U;
	int32_t x1022 = -20680;
	volatile int32_t x1023 = 0;
	int16_t x1024 = INT16_MAX;
	int32_t t163 = 23640;

    t163 = ((x1021*x1022)>(x1023+x1024));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x1025 = 6643012839792LLU;
	int32_t t164 = -2;

    t164 = ((x1025*x1026)>(x1027+x1028));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x1041 = UINT32_MAX;
	int32_t x1042 = 85;
	int8_t x1043 = -1;
	volatile int32_t t165 = -492533;

    t165 = ((x1041*x1042)>(x1043+x1044));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x1045 = UINT8_MAX;
	static int16_t x1046 = INT16_MIN;
	int32_t x1047 = INT32_MAX;
	volatile int32_t t166 = 239561207;

    t166 = ((x1045*x1046)>(x1047+x1048));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x1049 = 1403U;
	int8_t x1050 = INT8_MIN;
	int32_t t167 = -10663;

    t167 = ((x1049*x1050)>(x1051+x1052));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x1053 = INT8_MIN;
	uint32_t x1054 = 3440U;
	uint32_t x1055 = 21U;
	int32_t x1056 = -1;
	volatile int32_t t168 = 1;

    t168 = ((x1053*x1054)>(x1055+x1056));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x1061 = INT8_MAX;
	static int8_t x1062 = INT8_MIN;
	int8_t x1063 = INT8_MAX;
	int64_t x1064 = INT64_MIN;
	static int32_t t169 = -174833692;

    t169 = ((x1061*x1062)>(x1063+x1064));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x1065 = 195019557LLU;
	int32_t x1066 = -237480467;
	static volatile int32_t x1067 = INT32_MIN;
	static uint64_t x1068 = UINT64_MAX;

    t170 = ((x1065*x1066)>(x1067+x1068));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x1069 = -1;
	int64_t x1070 = -1LL;
	static uint8_t x1071 = UINT8_MAX;
	int32_t t171 = -3336;

    t171 = ((x1069*x1070)>(x1071+x1072));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x1073 = 48U;
	uint32_t x1074 = 120U;
	int16_t x1076 = INT16_MIN;

    t172 = ((x1073*x1074)>(x1075+x1076));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x1090 = INT8_MIN;
	static int16_t x1092 = -1831;
	volatile int32_t t173 = -26068021;

    t173 = ((x1089*x1090)>(x1091+x1092));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x1093 = 100939;
	int64_t x1094 = -46LL;
	int8_t x1095 = INT8_MIN;
	uint16_t x1096 = 29U;
	volatile int32_t t174 = -422323;

    t174 = ((x1093*x1094)>(x1095+x1096));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x1102 = INT16_MIN;
	int16_t x1103 = INT16_MIN;
	static int8_t x1104 = INT8_MIN;
	static int32_t t175 = -33;

    t175 = ((x1101*x1102)>(x1103+x1104));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int8_t x1105 = INT8_MIN;
	int16_t x1108 = INT16_MIN;
	volatile int32_t t176 = -8477476;

    t176 = ((x1105*x1106)>(x1107+x1108));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x1109 = 1700;
	static int16_t x1110 = 1;
	int32_t x1111 = -1;
	static volatile int32_t t177 = 771540630;

    t177 = ((x1109*x1110)>(x1111+x1112));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x1117 = 43U;
	uint16_t x1118 = 2316U;
	uint32_t x1120 = 458U;
	volatile int32_t t178 = -538;

    t178 = ((x1117*x1118)>(x1119+x1120));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x1122 = INT16_MIN;
	static uint32_t x1123 = UINT32_MAX;
	int64_t x1124 = -7091988612155756LL;
	int32_t t179 = 263917799;

    t179 = ((x1121*x1122)>(x1123+x1124));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x1125 = 73333909LL;
	uint8_t x1127 = 56U;
	uint8_t x1128 = 8U;

    t180 = ((x1125*x1126)>(x1127+x1128));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x1129 = UINT64_MAX;
	uint32_t x1130 = 8U;
	uint8_t x1131 = 4U;
	int32_t x1132 = -826338107;
	volatile int32_t t181 = 111949105;

    t181 = ((x1129*x1130)>(x1131+x1132));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x1133 = INT32_MAX;
	int32_t x1134 = -1;
	uint16_t x1135 = 79U;
	int64_t x1136 = INT64_MIN;
	static int32_t t182 = 0;

    t182 = ((x1133*x1134)>(x1135+x1136));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x1137 = -10812LL;
	volatile int16_t x1139 = INT16_MAX;
	uint32_t x1140 = UINT32_MAX;
	int32_t t183 = 468116070;

    t183 = ((x1137*x1138)>(x1139+x1140));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x1142 = 4U;
	int32_t x1143 = INT32_MIN;
	volatile uint16_t x1144 = 796U;
	int32_t t184 = -388;

    t184 = ((x1141*x1142)>(x1143+x1144));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x1145 = -661511910168122LL;
	static volatile uint32_t x1147 = 1391U;
	int32_t x1148 = INT32_MIN;
	volatile int32_t t185 = 3636;

    t185 = ((x1145*x1146)>(x1147+x1148));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x1149 = 81U;
	int32_t x1150 = INT32_MIN;
	int8_t x1151 = INT8_MAX;
	volatile int16_t x1152 = 30;

    t186 = ((x1149*x1150)>(x1151+x1152));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x1169 = INT8_MIN;
	volatile uint8_t x1170 = 1U;
	int32_t x1171 = INT32_MAX;
	volatile int64_t x1172 = INT64_MIN;
	volatile int32_t t187 = 126412717;

    t187 = ((x1169*x1170)>(x1171+x1172));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint8_t x1173 = UINT8_MAX;
	volatile int8_t x1174 = INT8_MIN;
	volatile int8_t x1175 = INT8_MIN;
	static volatile int64_t x1176 = -1LL;
	static int32_t t188 = 1211;

    t188 = ((x1173*x1174)>(x1175+x1176));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x1186 = 15U;
	uint16_t x1187 = UINT16_MAX;
	int16_t x1188 = -6765;
	static int32_t t189 = -676;

    t189 = ((x1185*x1186)>(x1187+x1188));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x1201 = INT64_MIN;
	int32_t x1203 = INT32_MIN;
	static volatile uint64_t x1204 = UINT64_MAX;
	int32_t t190 = 4;

    t190 = ((x1201*x1202)>(x1203+x1204));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x1209 = UINT16_MAX;
	int16_t x1211 = -8191;
	volatile int32_t t191 = 5823;

    t191 = ((x1209*x1210)>(x1211+x1212));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x1213 = INT16_MIN;
	int8_t x1214 = -2;
	static volatile uint8_t x1215 = 0U;
	uint16_t x1216 = 6U;
	int32_t t192 = -21760;

    t192 = ((x1213*x1214)>(x1215+x1216));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x1229 = -1;
	static volatile int16_t x1230 = INT16_MIN;
	uint8_t x1231 = 0U;
	int32_t x1232 = INT32_MIN;
	volatile int32_t t193 = 2079287;

    t193 = ((x1229*x1230)>(x1231+x1232));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x1233 = -17;
	static int16_t x1234 = INT16_MAX;
	static uint8_t x1235 = 12U;
	volatile int64_t x1236 = INT64_MIN;
	int32_t t194 = -1;

    t194 = ((x1233*x1234)>(x1235+x1236));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x1237 = -1;
	uint64_t x1238 = 23LLU;
	int8_t x1239 = -15;
	uint8_t x1240 = UINT8_MAX;
	volatile int32_t t195 = 26;

    t195 = ((x1237*x1238)>(x1239+x1240));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint64_t x1241 = 440082556710132132LLU;
	uint8_t x1244 = UINT8_MAX;
	static volatile int32_t t196 = 18;

    t196 = ((x1241*x1242)>(x1243+x1244));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x1245 = 4676;
	int32_t x1247 = 6352;
	uint32_t x1248 = 747723U;
	volatile int32_t t197 = 697530;

    t197 = ((x1245*x1246)>(x1247+x1248));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x1253 = 171U;
	volatile uint64_t x1254 = 246LLU;
	int8_t x1255 = -1;
	uint8_t x1256 = 1U;

    t198 = ((x1253*x1254)>(x1255+x1256));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint32_t x1269 = 3508U;
	static int16_t x1270 = INT16_MIN;
	int8_t x1271 = -50;
	uint32_t x1272 = 1U;
	static int32_t t199 = -963;

    t199 = ((x1269*x1270)>(x1271+x1272));

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

