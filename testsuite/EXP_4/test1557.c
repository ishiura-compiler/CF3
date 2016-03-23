
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

static uint64_t x1 = 9021590LLU;
uint16_t x2 = 31423U;
int8_t x12 = INT8_MIN;
uint16_t x21 = 59U;
int64_t x33 = INT64_MAX;
volatile uint64_t t5 = 1495889LLU;
int8_t x50 = INT8_MAX;
int32_t t8 = 30254;
static int32_t x55 = INT32_MIN;
volatile uint32_t x58 = UINT32_MAX;
uint32_t t10 = UINT32_MAX;
uint8_t x65 = 33U;
uint32_t x66 = UINT32_MAX;
uint16_t x69 = UINT16_MAX;
uint32_t x72 = UINT32_MAX;
int32_t t12 = 68;
int32_t x73 = -1;
static uint32_t x81 = 7328U;
uint64_t x84 = 2344161575727660210LLU;
uint32_t t14 = 49U;
volatile uint8_t x85 = 119U;
uint64_t t15 = 7034991021LLU;
uint64_t x89 = 6596308901LLU;
int8_t x91 = INT8_MIN;
int32_t x98 = -7042677;
uint32_t t18 = 40U;
int64_t x110 = 5758714634179LL;
uint16_t x117 = 5004U;
uint8_t x121 = 0U;
int64_t x127 = -1LL;
int8_t x128 = 22;
volatile int32_t t26 = -61927892;
static int8_t x143 = INT8_MIN;
int16_t x159 = INT16_MIN;
int16_t x171 = -1;
int32_t x180 = INT32_MIN;
int32_t t33 = -42;
static uint8_t x191 = 1U;
int32_t t36 = 25062;
int16_t x214 = INT16_MIN;
static volatile int32_t x216 = -1;
int32_t x226 = -1;
volatile int8_t x231 = 1;
int8_t x232 = INT8_MIN;
volatile int32_t t42 = 1;
int32_t t43 = -427624;
int32_t x243 = -1;
uint32_t x250 = UINT32_MAX;
int16_t x266 = INT16_MIN;
static uint16_t x286 = 80U;
volatile uint32_t t51 = 2596003U;
int8_t x301 = INT8_MIN;
uint64_t x311 = UINT64_MAX;
static uint16_t x312 = UINT16_MAX;
static int32_t x322 = 1538;
uint16_t x323 = 2U;
int32_t t55 = -9;
uint16_t x332 = 6U;
static volatile int32_t t57 = 0;
int16_t x354 = -236;
int8_t x357 = 44;
int32_t x359 = INT32_MIN;
int32_t t63 = 0;
int32_t x363 = INT32_MIN;
uint16_t x365 = 7U;
int32_t x374 = INT32_MIN;
uint64_t x375 = 1LLU;
volatile uint32_t x376 = UINT32_MAX;
int8_t x377 = INT8_MIN;
volatile uint64_t x387 = 89LLU;
volatile int32_t x397 = -1;
volatile int64_t t74 = -1791105393399080LL;
int32_t x410 = -1;
int16_t x412 = INT16_MIN;
uint16_t x416 = 1U;
volatile int16_t x418 = INT16_MIN;
uint32_t x422 = UINT32_MAX;
uint64_t x423 = 1LLU;
volatile uint64_t t78 = 28LLU;
uint16_t x426 = 226U;
static int16_t x437 = -1;
int32_t t82 = 26721626;
uint32_t x446 = UINT32_MAX;
uint8_t x448 = 7U;
static uint64_t t84 = 12689LLU;
volatile int16_t x464 = -104;
static int32_t x469 = 889;
static uint8_t x482 = UINT8_MAX;
static int8_t x490 = INT8_MAX;
uint8_t x513 = 3U;
int16_t x518 = -18;
int16_t x520 = -167;
int64_t t97 = -3585LL;
int64_t x533 = -1LL;
int8_t x535 = INT8_MIN;
int64_t x536 = 1LL;
volatile int64_t t100 = -162088LL;
uint32_t x544 = UINT32_MAX;
int64_t x546 = -1LL;
static int16_t x548 = INT16_MAX;
volatile int64_t t103 = -7345029896313LL;
volatile uint64_t x554 = 8100752456373308LLU;
uint16_t x563 = 31U;
int32_t x564 = INT32_MAX;
volatile int32_t t109 = -83054;
static int16_t x616 = INT16_MIN;
int32_t x619 = INT32_MIN;
static uint16_t x620 = 20U;
uint32_t t117 = 1392927611U;
uint32_t x630 = 4996U;
uint64_t x635 = UINT64_MAX;
int8_t x637 = -1;
uint16_t x649 = UINT16_MAX;
uint8_t x654 = UINT8_MAX;
static uint32_t x658 = 12460U;
uint64_t x670 = 26894119858LLU;
int8_t x683 = -1;
static volatile uint64_t t129 = 1714LLU;
int32_t x699 = INT32_MIN;
uint64_t x713 = 366173644LLU;
static int32_t x724 = INT32_MAX;
static volatile int64_t x734 = -1LL;
int8_t x741 = -1;
int64_t x745 = -1LL;
uint16_t x747 = 1898U;
uint32_t t140 = 44495440U;
int64_t x754 = -1LL;
uint16_t x758 = 10825U;
int32_t x759 = -1;
int32_t x765 = -1;
volatile int32_t t144 = 7167577;
static uint32_t t145 = 1U;
volatile int64_t x787 = INT64_MIN;
int8_t x789 = -1;
uint32_t t147 = 37795255U;
static volatile int16_t x828 = -1;
volatile uint32_t t154 = 11U;
volatile uint32_t x833 = 2U;
int64_t x843 = 3046902739406LL;
int16_t x849 = 14636;
int64_t x850 = -1LL;
volatile int64_t t158 = 6315373LL;
int16_t x861 = -1;
volatile uint8_t x864 = 6U;
int8_t x870 = INT8_MIN;
volatile int64_t t162 = -1601820890311901880LL;
static uint16_t x883 = 15460U;
int8_t x886 = INT8_MIN;
static volatile int64_t t164 = 117867350LL;
uint16_t x903 = 11756U;
static int64_t x904 = 472LL;
int16_t x910 = -387;
uint16_t x937 = 1U;
int8_t x942 = INT8_MIN;
uint64_t x946 = UINT64_MAX;
int16_t x950 = 17;
uint64_t x952 = 2665157LLU;
int64_t t177 = -2LL;
int32_t t180 = 16576;
static int16_t x970 = INT16_MIN;
int64_t x971 = -24175026LL;
uint64_t x978 = UINT64_MAX;
int8_t x1004 = -1;
int32_t x1005 = INT32_MAX;
volatile int32_t t188 = -47317;
volatile uint32_t x1013 = UINT32_MAX;
int8_t x1020 = INT8_MIN;
int64_t x1023 = INT64_MIN;
uint64_t x1026 = UINT64_MAX;
uint64_t t192 = 24684935914011091LLU;
int64_t x1031 = -1LL;
volatile uint16_t x1044 = 32U;
static int8_t x1055 = 0;
int32_t x1059 = INT32_MAX;
uint8_t x1060 = UINT8_MAX;


void f0(void) {
    	int16_t x3 = INT16_MAX;
	static volatile uint64_t x4 = 202467008009LLU;
	volatile uint64_t t0 = 21443LLU;

    t0 = (x1*(x2^(x3==x4)));

    if (t0 != 283485422570LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint8_t x5 = 25U;
	int16_t x6 = 2200;
	volatile int16_t x7 = -17;
	int32_t x8 = INT32_MIN;
	int32_t t1 = 291553492;

    t1 = (x5*(x6^(x7==x8)));

    if (t1 != 55000) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MAX;
	volatile int16_t x10 = -1;
	volatile uint8_t x11 = 0U;
	volatile int32_t t2 = -775;

    t2 = (x9*(x10^(x11==x12)));

    if (t2 != -2147483647) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x17 = INT8_MIN;
	static volatile uint64_t x18 = 2669955131079LLU;
	int16_t x19 = -8109;
	int64_t x20 = INT64_MIN;
	volatile uint64_t t3 = 176825914LLU;

    t3 = (x17*(x18^(x19==x20)));

    if (t3 != 18446402319452773504LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x22 = INT16_MIN;
	uint32_t x23 = 3U;
	int8_t x24 = -1;
	int32_t t4 = -801855;

    t4 = (x21*(x22^(x23==x24)));

    if (t4 != -1933312) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x34 = 113960772208689277LLU;
	int32_t x35 = -2526949;
	int32_t x36 = INT32_MIN;

    t5 = (x33*(x34^(x35==x36)));

    if (t5 != 9109411264646086531LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x37 = -1392;
	uint16_t x38 = 115U;
	int16_t x39 = INT16_MIN;
	static int32_t x40 = INT32_MIN;
	int32_t t6 = -1153;

    t6 = (x37*(x38^(x39==x40)));

    if (t6 != -160080) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile uint8_t x41 = 5U;
	int32_t x42 = -1;
	static uint64_t x43 = 1892558LLU;
	volatile int16_t x44 = INT16_MIN;
	int32_t t7 = 27990;

    t7 = (x41*(x42^(x43==x44)));

    if (t7 != -5) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x49 = INT16_MIN;
	uint32_t x51 = 32049U;
	static int32_t x52 = -1;

    t8 = (x49*(x50^(x51==x52)));

    if (t8 != -4161536) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x53 = INT16_MIN;
	uint64_t x54 = UINT64_MAX;
	static int32_t x56 = -1;
	volatile uint64_t t9 = 667208LLU;

    t9 = (x53*(x54^(x55==x56)));

    if (t9 != 32768LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x57 = 1U;
	volatile int64_t x59 = INT64_MAX;
	static int16_t x60 = -1;

    t10 = (x57*(x58^(x59==x60)));

    if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x67 = 57;
	static int16_t x68 = -29;
	volatile uint32_t t11 = 249836U;

    t11 = (x65*(x66^(x67==x68)));

    if (t11 != 4294967263U) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x70 = INT8_MIN;
	uint16_t x71 = 1067U;

    t12 = (x69*(x70^(x71==x72)));

    if (t12 != -8388480) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x74 = 153428U;
	static int16_t x75 = 2007;
	uint16_t x76 = 13U;
	volatile uint32_t t13 = 2843873U;

    t13 = (x73*(x74^(x75==x76)));

    if (t13 != 4294813868U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x82 = UINT16_MAX;
	static int16_t x83 = -1;

    t14 = (x81*(x82^(x83==x84)));

    if (t14 != 480240480U) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint64_t x86 = 887LLU;
	uint32_t x87 = UINT32_MAX;
	int8_t x88 = 32;

    t15 = (x85*(x86^(x87==x88)));

    if (t15 != 105553LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x90 = 0U;
	volatile int16_t x92 = 0;
	volatile uint64_t t16 = 66707836LLU;

    t16 = (x89*(x90^(x91==x92)));

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint16_t x97 = 82U;
	volatile int8_t x99 = INT8_MAX;
	uint8_t x100 = 0U;
	static int32_t t17 = 287397;

    t17 = (x97*(x98^(x99==x100)));

    if (t17 != -577499514) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint32_t x101 = UINT32_MAX;
	uint32_t x102 = 1549749905U;
	static int64_t x103 = 60LL;
	volatile uint64_t x104 = 2LLU;

    t18 = (x101*(x102^(x103==x104)));

    if (t18 != 2745217391U) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x109 = 14;
	volatile int16_t x111 = -1;
	uint8_t x112 = UINT8_MAX;
	int64_t t19 = -2752LL;

    t19 = (x109*(x110^(x111==x112)));

    if (t19 != 80622004878506LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x113 = -1;
	uint8_t x114 = 1U;
	int8_t x115 = -1;
	uint16_t x116 = 6U;
	static volatile int32_t t20 = -98;

    t20 = (x113*(x114^(x115==x116)));

    if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x118 = 1982321570LLU;
	volatile int64_t x119 = 0LL;
	int32_t x120 = 1273567;
	uint64_t t21 = 15747783447LLU;

    t21 = (x117*(x118^(x119==x120)));

    if (t21 != 9919537136280LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x122 = 10U;
	static volatile int16_t x123 = INT16_MAX;
	static uint8_t x124 = 57U;
	volatile int32_t t22 = 32098;

    t22 = (x121*(x122^(x123==x124)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x125 = 3U;
	int8_t x126 = INT8_MIN;
	volatile uint32_t t23 = 925U;

    t23 = (x125*(x126^(x127==x128)));

    if (t23 != 4294966912U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x129 = 35339908358264LLU;
	uint32_t x130 = UINT32_MAX;
	int32_t x131 = -10475078;
	uint32_t x132 = 732U;
	static volatile uint64_t t24 = 7062258869704130LLU;

    t24 = (x129*(x130^(x131==x132)));

    if (t24 != 3940368558832279432LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x133 = INT32_MIN;
	uint16_t x134 = 0U;
	volatile int16_t x135 = 126;
	int64_t x136 = INT64_MAX;
	int32_t t25 = -16232979;

    t25 = (x133*(x134^(x135==x136)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x137 = 25999U;
	int8_t x138 = INT8_MIN;
	int8_t x139 = INT8_MAX;
	int32_t x140 = 4230718;

    t26 = (x137*(x138^(x139==x140)));

    if (t26 != -3327872) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile uint32_t x141 = 259608315U;
	int64_t x142 = -1LL;
	volatile uint8_t x144 = UINT8_MAX;
	int64_t t27 = -9164LL;

    t27 = (x141*(x142^(x143==x144)));

    if (t27 != -259608315LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x149 = 2427U;
	int64_t x150 = -1LL;
	static uint8_t x151 = UINT8_MAX;
	int64_t x152 = -121LL;
	static volatile int64_t t28 = -75034434804589052LL;

    t28 = (x149*(x150^(x151==x152)));

    if (t28 != -2427LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x157 = -1872273LL;
	volatile int8_t x158 = -1;
	static int64_t x160 = -5606404698493LL;
	int64_t t29 = 9342LL;

    t29 = (x157*(x158^(x159==x160)));

    if (t29 != 1872273LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x161 = INT16_MIN;
	volatile int16_t x162 = -1;
	int16_t x163 = INT16_MIN;
	volatile uint64_t x164 = 200263503LLU;
	int32_t t30 = -9;

    t30 = (x161*(x162^(x163==x164)));

    if (t30 != 32768) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x169 = 171179;
	int8_t x170 = -53;
	uint8_t x172 = 0U;
	volatile int32_t t31 = 397781099;

    t31 = (x169*(x170^(x171==x172)));

    if (t31 != -9072487) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x177 = INT16_MIN;
	volatile uint64_t x178 = UINT64_MAX;
	volatile uint32_t x179 = 4U;
	volatile uint64_t t32 = 11247853LLU;

    t32 = (x177*(x178^(x179==x180)));

    if (t32 != 32768LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x181 = -1;
	int16_t x182 = -1;
	int8_t x183 = 30;
	volatile int64_t x184 = -12350833509LL;

    t33 = (x181*(x182^(x183==x184)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x189 = INT64_MAX;
	uint64_t x190 = UINT64_MAX;
	int8_t x192 = -1;
	volatile uint64_t t34 = 638835LLU;

    t34 = (x189*(x190^(x191==x192)));

    if (t34 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x193 = 16364U;
	int8_t x194 = INT8_MIN;
	int8_t x195 = INT8_MAX;
	int8_t x196 = -1;
	volatile int32_t t35 = -28069531;

    t35 = (x193*(x194^(x195==x196)));

    if (t35 != -2094592) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x201 = 9U;
	volatile int8_t x202 = -1;
	int8_t x203 = INT8_MAX;
	int16_t x204 = -18;

    t36 = (x201*(x202^(x203==x204)));

    if (t36 != -9) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x205 = 3175U;
	int32_t x206 = -216281608;
	uint8_t x207 = UINT8_MAX;
	uint8_t x208 = 50U;
	volatile uint32_t t37 = 497637210U;

    t37 = (x205*(x206^(x207==x208)));

    if (t37 != 500661960U) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x213 = -61;
	uint64_t x215 = 235124LLU;
	volatile int32_t t38 = 8;

    t38 = (x213*(x214^(x215==x216)));

    if (t38 != 1998848) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x217 = -1;
	uint16_t x218 = 1U;
	int32_t x219 = -1;
	uint16_t x220 = UINT16_MAX;
	static volatile int32_t t39 = 100949;

    t39 = (x217*(x218^(x219==x220)));

    if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x221 = INT8_MIN;
	volatile uint16_t x222 = 121U;
	static int16_t x223 = INT16_MAX;
	int8_t x224 = INT8_MIN;
	static volatile int32_t t40 = 31;

    t40 = (x221*(x222^(x223==x224)));

    if (t40 != -15488) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x225 = UINT32_MAX;
	int32_t x227 = -1;
	int16_t x228 = 9;
	volatile uint32_t t41 = 0U;

    t41 = (x225*(x226^(x227==x228)));

    if (t41 != 1U) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x229 = 27U;
	static int8_t x230 = -1;

    t42 = (x229*(x230^(x231==x232)));

    if (t42 != -27) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint16_t x237 = 0U;
	int32_t x238 = INT32_MIN;
	int16_t x239 = -1;
	static int16_t x240 = INT16_MAX;

    t43 = (x237*(x238^(x239==x240)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x241 = 5857960515985586LL;
	int8_t x242 = 7;
	int16_t x244 = INT16_MIN;
	int64_t t44 = -133120115812285LL;

    t44 = (x241*(x242^(x243==x244)));

    if (t44 != 41005723611899102LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x249 = -1;
	static int64_t x251 = -1LL;
	static int64_t x252 = -2126586352LL;
	uint32_t t45 = 8464U;

    t45 = (x249*(x250^(x251==x252)));

    if (t45 != 1U) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x257 = -321245LL;
	int8_t x258 = -1;
	int8_t x259 = -14;
	volatile uint8_t x260 = 97U;
	volatile int64_t t46 = 1303839379084761985LL;

    t46 = (x257*(x258^(x259==x260)));

    if (t46 != 321245LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x261 = INT8_MIN;
	static int16_t x262 = -1;
	uint64_t x263 = 3415945927032087LLU;
	int64_t x264 = INT64_MIN;
	volatile int32_t t47 = 63064866;

    t47 = (x261*(x262^(x263==x264)));

    if (t47 != 128) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x265 = -6336;
	int64_t x267 = -1LL;
	int64_t x268 = -754357454546LL;
	int32_t t48 = 4;

    t48 = (x265*(x266^(x267==x268)));

    if (t48 != 207618048) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint64_t x273 = UINT64_MAX;
	static int64_t x274 = -1LL;
	int16_t x275 = INT16_MIN;
	int64_t x276 = INT64_MIN;
	uint64_t t49 = 3692418979280LLU;

    t49 = (x273*(x274^(x275==x276)));

    if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x285 = INT8_MIN;
	uint32_t x287 = UINT32_MAX;
	static uint16_t x288 = UINT16_MAX;
	int32_t t50 = -1745;

    t50 = (x285*(x286^(x287==x288)));

    if (t50 != -10240) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x289 = UINT32_MAX;
	uint16_t x290 = 27U;
	static int16_t x291 = -1;
	int64_t x292 = INT64_MIN;

    t51 = (x289*(x290^(x291==x292)));

    if (t51 != 4294967269U) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x297 = INT16_MAX;
	static int16_t x298 = 1;
	int64_t x299 = -1LL;
	int8_t x300 = INT8_MAX;
	volatile int32_t t52 = 297;

    t52 = (x297*(x298^(x299==x300)));

    if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x302 = 1U;
	static volatile int64_t x303 = INT64_MAX;
	int16_t x304 = -1;
	volatile uint32_t t53 = 1530794587U;

    t53 = (x301*(x302^(x303==x304)));

    if (t53 != 4294967168U) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint32_t x309 = UINT32_MAX;
	volatile uint16_t x310 = 28112U;
	volatile uint32_t t54 = 1096U;

    t54 = (x309*(x310^(x311==x312)));

    if (t54 != 4294939184U) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x321 = -14;
	static int8_t x324 = -51;

    t55 = (x321*(x322^(x323==x324)));

    if (t55 != -21532) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x325 = 893U;
	uint8_t x326 = UINT8_MAX;
	static int8_t x327 = INT8_MAX;
	uint32_t x328 = 197815U;
	volatile int32_t t56 = 50693;

    t56 = (x325*(x326^(x327==x328)));

    if (t56 != 227715) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x329 = INT16_MIN;
	int16_t x330 = -1;
	int64_t x331 = 1078584027094658LL;

    t57 = (x329*(x330^(x331==x332)));

    if (t57 != 32768) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint32_t x333 = 2U;
	int8_t x334 = INT8_MIN;
	uint32_t x335 = UINT32_MAX;
	static volatile int8_t x336 = INT8_MAX;
	volatile uint32_t t58 = 5107295U;

    t58 = (x333*(x334^(x335==x336)));

    if (t58 != 4294967040U) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x337 = -19;
	int32_t x338 = -21916;
	int8_t x339 = INT8_MAX;
	uint8_t x340 = UINT8_MAX;
	int32_t t59 = 1;

    t59 = (x337*(x338^(x339==x340)));

    if (t59 != 416404) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x341 = -1454;
	static uint64_t x342 = 123LLU;
	int32_t x343 = INT32_MIN;
	int8_t x344 = INT8_MIN;
	volatile uint64_t t60 = 10LLU;

    t60 = (x341*(x342^(x343==x344)));

    if (t60 != 18446744073709372774LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x349 = -1;
	uint8_t x350 = 7U;
	int64_t x351 = INT64_MAX;
	uint32_t x352 = 497U;
	int32_t t61 = -16334;

    t61 = (x349*(x350^(x351==x352)));

    if (t61 != -7) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint16_t x353 = UINT16_MAX;
	uint64_t x355 = UINT64_MAX;
	uint16_t x356 = 0U;
	volatile int32_t t62 = -348049;

    t62 = (x353*(x354^(x355==x356)));

    if (t62 != -15466260) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x358 = 0U;
	volatile int16_t x360 = 1457;

    t63 = (x357*(x358^(x359==x360)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x361 = INT16_MIN;
	static uint32_t x362 = 26971U;
	uint16_t x364 = 14746U;
	uint32_t t64 = 299407U;

    t64 = (x361*(x362^(x363==x364)));

    if (t64 != 3411181568U) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x366 = INT8_MIN;
	int32_t x367 = INT32_MIN;
	int16_t x368 = -1669;
	volatile int32_t t65 = 3231878;

    t65 = (x365*(x366^(x367==x368)));

    if (t65 != -896) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x369 = 63248594LL;
	int16_t x370 = INT16_MIN;
	int32_t x371 = INT32_MAX;
	int8_t x372 = -1;
	volatile int64_t t66 = 4125000938990LL;

    t66 = (x369*(x370^(x371==x372)));

    if (t66 != -2072529928192LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x373 = 2061276457LLU;
	uint64_t t67 = 2035577443LLU;

    t67 = (x373*(x374^(x375==x376)));

    if (t67 != 14020186588294676480LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x378 = 1U;
	int8_t x379 = INT8_MIN;
	int8_t x380 = 1;
	int32_t t68 = 426782;

    t68 = (x377*(x378^(x379==x380)));

    if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint64_t x381 = 741927138LLU;
	int32_t x382 = 70373;
	volatile int8_t x383 = 1;
	int16_t x384 = INT16_MIN;
	uint64_t t69 = 531880738742114585LLU;

    t69 = (x381*(x382^(x383==x384)));

    if (t69 != 52211638482474LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x385 = INT8_MIN;
	static volatile uint16_t x386 = 0U;
	uint32_t x388 = UINT32_MAX;
	volatile int32_t t70 = -54627634;

    t70 = (x385*(x386^(x387==x388)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x393 = UINT32_MAX;
	int8_t x394 = -14;
	uint16_t x395 = 4U;
	static uint8_t x396 = UINT8_MAX;
	static uint32_t t71 = 197219923U;

    t71 = (x393*(x394^(x395==x396)));

    if (t71 != 14U) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint64_t x398 = UINT64_MAX;
	int32_t x399 = INT32_MIN;
	volatile int32_t x400 = 0;
	uint64_t t72 = 2148533LLU;

    t72 = (x397*(x398^(x399==x400)));

    if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x401 = UINT32_MAX;
	int16_t x402 = INT16_MIN;
	uint16_t x403 = 137U;
	int32_t x404 = -1;
	volatile uint32_t t73 = 1976210037U;

    t73 = (x401*(x402^(x403==x404)));

    if (t73 != 32768U) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x405 = -14793702514348409LL;
	uint8_t x406 = 75U;
	volatile int32_t x407 = INT32_MAX;
	int32_t x408 = 7111;

    t74 = (x405*(x406^(x407==x408)));

    if (t74 != -1109527688576130675LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x409 = 269;
	uint8_t x411 = 5U;
	volatile int32_t t75 = -3535;

    t75 = (x409*(x410^(x411==x412)));

    if (t75 != -269) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint8_t x413 = UINT8_MAX;
	static volatile int16_t x414 = INT16_MIN;
	static volatile int16_t x415 = -107;
	int32_t t76 = 1114603;

    t76 = (x413*(x414^(x415==x416)));

    if (t76 != -8355840) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x417 = -3147;
	static int32_t x419 = INT32_MIN;
	int8_t x420 = -1;
	static volatile int32_t t77 = 235603553;

    t77 = (x417*(x418^(x419==x420)));

    if (t77 != 103120896) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint64_t x421 = 303405181LLU;
	int32_t x424 = -1;

    t78 = (x421*(x422^(x423==x424)));

    if (t78 != 1303115329528555395LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x425 = 3U;
	volatile uint64_t x427 = 8606288070843LLU;
	volatile uint64_t x428 = 200200872143213LLU;
	static volatile int32_t t79 = 24328;

    t79 = (x425*(x426^(x427==x428)));

    if (t79 != 678) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint16_t x429 = 1886U;
	int8_t x430 = INT8_MIN;
	uint8_t x431 = UINT8_MAX;
	int64_t x432 = INT64_MAX;
	int32_t t80 = 5792;

    t80 = (x429*(x430^(x431==x432)));

    if (t80 != -241408) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x438 = INT8_MIN;
	volatile int32_t x439 = INT32_MAX;
	volatile uint32_t x440 = 124266225U;
	int32_t t81 = 2;

    t81 = (x437*(x438^(x439==x440)));

    if (t81 != 128) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x441 = INT16_MAX;
	static int8_t x442 = INT8_MIN;
	uint16_t x443 = 700U;
	uint64_t x444 = UINT64_MAX;

    t82 = (x441*(x442^(x443==x444)));

    if (t82 != -4194176) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x445 = INT32_MIN;
	int32_t x447 = INT32_MIN;
	static uint32_t t83 = 285291U;

    t83 = (x445*(x446^(x447==x448)));

    if (t83 != 2147483648U) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x453 = INT16_MAX;
	uint64_t x454 = 1081LLU;
	int32_t x455 = INT32_MAX;
	int64_t x456 = 876310698LL;

    t84 = (x453*(x454^(x455==x456)));

    if (t84 != 35421127LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x457 = -1;
	uint16_t x458 = 28541U;
	int32_t x459 = INT32_MIN;
	volatile int8_t x460 = INT8_MIN;
	volatile int32_t t85 = -14;

    t85 = (x457*(x458^(x459==x460)));

    if (t85 != -28541) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x461 = 1;
	int8_t x462 = -31;
	static int8_t x463 = INT8_MIN;
	volatile int32_t t86 = 1678827;

    t86 = (x461*(x462^(x463==x464)));

    if (t86 != -31) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x465 = INT16_MIN;
	int16_t x466 = INT16_MIN;
	int8_t x467 = INT8_MIN;
	volatile int32_t x468 = 1857773;
	int32_t t87 = 7;

    t87 = (x465*(x466^(x467==x468)));

    if (t87 != 1073741824) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x470 = INT8_MIN;
	int32_t x471 = INT32_MAX;
	volatile int64_t x472 = -1LL;
	int32_t t88 = 33;

    t88 = (x469*(x470^(x471==x472)));

    if (t88 != -113792) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint64_t x473 = UINT64_MAX;
	uint16_t x474 = UINT16_MAX;
	int64_t x475 = INT64_MIN;
	static uint16_t x476 = 254U;
	uint64_t t89 = 27282405LLU;

    t89 = (x473*(x474^(x475==x476)));

    if (t89 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int64_t x477 = -1LL;
	volatile uint8_t x478 = UINT8_MAX;
	int8_t x479 = 1;
	uint16_t x480 = 692U;
	static int64_t t90 = 2163096545931397LL;

    t90 = (x477*(x478^(x479==x480)));

    if (t90 != -255LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x481 = INT16_MIN;
	uint16_t x483 = 9U;
	uint16_t x484 = UINT16_MAX;
	int32_t t91 = -103392984;

    t91 = (x481*(x482^(x483==x484)));

    if (t91 != -8355840) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int64_t x489 = -8LL;
	static uint16_t x491 = UINT16_MAX;
	int64_t x492 = INT64_MIN;
	volatile int64_t t92 = 33508912857810041LL;

    t92 = (x489*(x490^(x491==x492)));

    if (t92 != -1016LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x501 = UINT32_MAX;
	uint8_t x502 = 0U;
	int8_t x503 = -1;
	int16_t x504 = 279;
	uint32_t t93 = 156U;

    t93 = (x501*(x502^(x503==x504)));

    if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x505 = 6672U;
	uint64_t x506 = 9887202468346LLU;
	static uint32_t x507 = 59889647U;
	int32_t x508 = INT32_MIN;
	uint64_t t94 = 2472407931305LLU;

    t94 = (x505*(x506^(x507==x508)));

    if (t94 != 65967414868804512LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x514 = UINT32_MAX;
	volatile int32_t x515 = -3682;
	int8_t x516 = -44;
	volatile uint32_t t95 = 133003063U;

    t95 = (x513*(x514^(x515==x516)));

    if (t95 != 4294967293U) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x517 = 265002375715133LLU;
	static int64_t x519 = INT64_MAX;
	uint64_t t96 = 881LLU;

    t96 = (x517*(x518^(x519==x520)));

    if (t96 != 18441974030946679222LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x521 = -1LL;
	volatile int8_t x522 = 8;
	volatile int16_t x523 = 1722;
	uint32_t x524 = 34409240U;

    t97 = (x521*(x522^(x523==x524)));

    if (t97 != -8LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x525 = -1;
	volatile uint64_t x526 = 56687334410LLU;
	uint16_t x527 = 58U;
	volatile int16_t x528 = 8398;
	uint64_t t98 = 2700592047544445097LLU;

    t98 = (x525*(x526^(x527==x528)));

    if (t98 != 18446744017022217206LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x529 = INT8_MIN;
	volatile uint8_t x530 = UINT8_MAX;
	int32_t x531 = -1;
	volatile int16_t x532 = INT16_MAX;
	volatile int32_t t99 = 3135;

    t99 = (x529*(x530^(x531==x532)));

    if (t99 != -32640) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x534 = 1;

    t100 = (x533*(x534^(x535==x536)));

    if (t100 != -1LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x537 = INT16_MIN;
	uint64_t x538 = 92598428020111430LLU;
	int32_t x539 = -1;
	uint32_t x540 = 742968532U;
	uint64_t t101 = 6476642131427581LLU;

    t101 = (x537*(x538^(x539==x540)));

    if (t101 != 9447482799064678400LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint64_t x541 = UINT64_MAX;
	uint8_t x542 = UINT8_MAX;
	int16_t x543 = -11105;
	volatile uint64_t t102 = 2539540LLU;

    t102 = (x541*(x542^(x543==x544)));

    if (t102 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x545 = UINT8_MAX;
	uint64_t x547 = UINT64_MAX;

    t103 = (x545*(x546^(x547==x548)));

    if (t103 != -255LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x549 = -1;
	int32_t x550 = INT32_MAX;
	uint64_t x551 = 479911LLU;
	int16_t x552 = INT16_MAX;
	static volatile int32_t t104 = -678;

    t104 = (x549*(x550^(x551==x552)));

    if (t104 != -2147483647) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x553 = -1;
	volatile int32_t x555 = INT32_MAX;
	int8_t x556 = INT8_MIN;
	uint64_t t105 = 235354LLU;

    t105 = (x553*(x554^(x555==x556)));

    if (t105 != 18438643321253178308LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x557 = 477725763U;
	uint16_t x558 = 33U;
	static uint32_t x559 = UINT32_MAX;
	uint32_t x560 = UINT32_MAX;
	uint32_t t106 = 98384U;

    t106 = (x557*(x558^(x559==x560)));

    if (t106 != 2402322528U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x561 = 29U;
	static int64_t x562 = -11714329857252999LL;
	static volatile int64_t t107 = -210442695LL;

    t107 = (x561*(x562^(x563==x564)));

    if (t107 != -339715565860336971LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x565 = INT8_MIN;
	uint16_t x566 = 22U;
	int16_t x567 = -2001;
	volatile int32_t x568 = INT32_MAX;
	static int32_t t108 = -212890087;

    t108 = (x565*(x566^(x567==x568)));

    if (t108 != -2816) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint8_t x569 = 1U;
	static int8_t x570 = -31;
	uint32_t x571 = 51U;
	static volatile int32_t x572 = -26800;

    t109 = (x569*(x570^(x571==x572)));

    if (t109 != -31) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x573 = 1U;
	uint64_t x574 = 29452445732734LLU;
	int16_t x575 = INT16_MIN;
	volatile int16_t x576 = INT16_MIN;
	uint64_t t110 = 2LLU;

    t110 = (x573*(x574^(x575==x576)));

    if (t110 != 29452445732735LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x581 = -1;
	static int8_t x582 = INT8_MAX;
	int16_t x583 = 4083;
	int8_t x584 = INT8_MIN;
	volatile int32_t t111 = -411883338;

    t111 = (x581*(x582^(x583==x584)));

    if (t111 != -127) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x585 = -1;
	int64_t x586 = -1LL;
	uint64_t x587 = 3231776703814LLU;
	volatile int32_t x588 = INT32_MIN;
	static volatile int64_t t112 = -1432743917LL;

    t112 = (x585*(x586^(x587==x588)));

    if (t112 != 1LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x589 = -42LL;
	int16_t x590 = -7636;
	int64_t x591 = INT64_MIN;
	int8_t x592 = 1;
	int64_t t113 = 250169101423161721LL;

    t113 = (x589*(x590^(x591==x592)));

    if (t113 != 320712LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint64_t x601 = 26990447296LLU;
	volatile int8_t x602 = INT8_MAX;
	int16_t x603 = INT16_MAX;
	static int64_t x604 = INT64_MIN;
	static uint64_t t114 = 4035LLU;

    t114 = (x601*(x602^(x603==x604)));

    if (t114 != 3427786806592LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x605 = 829212520U;
	int32_t x606 = 42899;
	int64_t x607 = 22753LL;
	uint64_t x608 = 1LLU;
	volatile uint32_t t115 = 1259616U;

    t115 = (x605*(x606^(x607==x608)));

    if (t115 != 1468750008U) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x613 = UINT32_MAX;
	static volatile int32_t x614 = 1;
	volatile int8_t x615 = 1;
	static uint32_t t116 = UINT32_MAX;

    t116 = (x613*(x614^(x615==x616)));

    if (t116 != UINT32_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x617 = 1005360543U;
	static int32_t x618 = INT32_MIN;

    t117 = (x617*(x618^(x619==x620)));

    if (t117 != 2147483648U) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x625 = INT16_MIN;
	int64_t x626 = -13276LL;
	int8_t x627 = 0;
	int16_t x628 = INT16_MAX;
	int64_t t118 = 3566LL;

    t118 = (x625*(x626^(x627==x628)));

    if (t118 != 435027968LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x629 = UINT8_MAX;
	uint32_t x631 = UINT32_MAX;
	volatile int64_t x632 = INT64_MIN;
	uint32_t t119 = 1649U;

    t119 = (x629*(x630^(x631==x632)));

    if (t119 != 1273980U) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x633 = -1;
	uint8_t x634 = UINT8_MAX;
	volatile int16_t x636 = INT16_MIN;
	static volatile int32_t t120 = -29;

    t120 = (x633*(x634^(x635==x636)));

    if (t120 != -255) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x638 = UINT32_MAX;
	int64_t x639 = -1LL;
	int16_t x640 = 910;
	volatile uint32_t t121 = 3478687U;

    t121 = (x637*(x638^(x639==x640)));

    if (t121 != 1U) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x645 = -1;
	int8_t x646 = -1;
	int64_t x647 = INT64_MIN;
	static int16_t x648 = 1;
	static int32_t t122 = -115261628;

    t122 = (x645*(x646^(x647==x648)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x650 = UINT64_MAX;
	int8_t x651 = 3;
	uint32_t x652 = 857222357U;
	volatile uint64_t t123 = 551045305883LLU;

    t123 = (x649*(x650^(x651==x652)));

    if (t123 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x653 = INT16_MIN;
	int32_t x655 = INT32_MIN;
	uint64_t x656 = 17041733800848LLU;
	volatile int32_t t124 = 182;

    t124 = (x653*(x654^(x655==x656)));

    if (t124 != -8355840) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x657 = UINT32_MAX;
	static volatile uint32_t x659 = UINT32_MAX;
	int32_t x660 = 3730;
	uint32_t t125 = 2107233119U;

    t125 = (x657*(x658^(x659==x660)));

    if (t125 != 4294954836U) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x669 = 492;
	int8_t x671 = INT8_MAX;
	int64_t x672 = INT64_MIN;
	volatile uint64_t t126 = 31664547765216LLU;

    t126 = (x669*(x670^(x671==x672)));

    if (t126 != 13231906970136LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x677 = 625U;
	int32_t x678 = -1;
	int16_t x679 = -14659;
	int64_t x680 = -169937825652158929LL;
	volatile int32_t t127 = -558;

    t127 = (x677*(x678^(x679==x680)));

    if (t127 != -625) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x681 = INT64_MIN;
	int8_t x682 = 0;
	int8_t x684 = INT8_MIN;
	int64_t t128 = 243LL;

    t128 = (x681*(x682^(x683==x684)));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x693 = 0U;
	uint64_t x694 = 6LLU;
	int16_t x695 = INT16_MIN;
	int32_t x696 = -19;

    t129 = (x693*(x694^(x695==x696)));

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x697 = 1;
	static int16_t x698 = INT16_MIN;
	int16_t x700 = INT16_MIN;
	static int32_t t130 = 123134;

    t130 = (x697*(x698^(x699==x700)));

    if (t130 != -32768) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x701 = 3;
	int8_t x702 = INT8_MIN;
	int16_t x703 = INT16_MAX;
	volatile int64_t x704 = INT64_MIN;
	static volatile int32_t t131 = 15;

    t131 = (x701*(x702^(x703==x704)));

    if (t131 != -384) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x705 = -1;
	int32_t x706 = -113103070;
	static int32_t x707 = INT32_MAX;
	static int8_t x708 = -36;
	int32_t t132 = -4;

    t132 = (x705*(x706^(x707==x708)));

    if (t132 != 113103070) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x709 = 0;
	volatile int8_t x710 = INT8_MIN;
	uint32_t x711 = 157U;
	int16_t x712 = 0;
	volatile int32_t t133 = 50059;

    t133 = (x709*(x710^(x711==x712)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x714 = INT32_MIN;
	int16_t x715 = -8009;
	uint64_t x716 = UINT64_MAX;
	static volatile uint64_t t134 = 5489610238854337LLU;

    t134 = (x713*(x714^(x715==x716)));

    if (t134 != 17660392160890978304LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x721 = INT8_MAX;
	int16_t x722 = INT16_MIN;
	static int64_t x723 = INT64_MIN;
	volatile int32_t t135 = 7;

    t135 = (x721*(x722^(x723==x724)));

    if (t135 != -4161536) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint8_t x729 = 0U;
	int32_t x730 = 630033;
	int32_t x731 = -228220;
	int64_t x732 = INT64_MIN;
	int32_t t136 = -258;

    t136 = (x729*(x730^(x731==x732)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x733 = -1LL;
	static int16_t x735 = INT16_MIN;
	uint8_t x736 = 117U;
	static int64_t t137 = 0LL;

    t137 = (x733*(x734^(x735==x736)));

    if (t137 != 1LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x742 = 8;
	uint8_t x743 = 41U;
	int16_t x744 = 16;
	volatile int32_t t138 = 1;

    t138 = (x741*(x742^(x743==x744)));

    if (t138 != -8) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x746 = 0;
	volatile uint16_t x748 = 0U;
	int64_t t139 = 908542LL;

    t139 = (x745*(x746^(x747==x748)));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x749 = 41413U;
	static int16_t x750 = -48;
	static int64_t x751 = -1LL;
	uint64_t x752 = 5373285333595LLU;

    t140 = (x749*(x750^(x751==x752)));

    if (t140 != 4292979472U) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x753 = 2U;
	static int8_t x755 = INT8_MIN;
	static volatile int64_t x756 = INT64_MIN;
	volatile int64_t t141 = -2542089009LL;

    t141 = (x753*(x754^(x755==x756)));

    if (t141 != -2LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x757 = INT8_MIN;
	int64_t x760 = -14245694366338LL;
	volatile int32_t t142 = 77441612;

    t142 = (x757*(x758^(x759==x760)));

    if (t142 != -1385600) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x766 = INT8_MAX;
	int32_t x767 = INT32_MAX;
	static volatile int8_t x768 = 0;
	int32_t t143 = -66;

    t143 = (x765*(x766^(x767==x768)));

    if (t143 != -127) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x769 = -1;
	volatile uint8_t x770 = UINT8_MAX;
	int16_t x771 = -1;
	static int64_t x772 = -1LL;

    t144 = (x769*(x770^(x771==x772)));

    if (t144 != -254) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x773 = INT8_MIN;
	uint32_t x774 = 108U;
	uint32_t x775 = UINT32_MAX;
	uint64_t x776 = UINT64_MAX;

    t145 = (x773*(x774^(x775==x776)));

    if (t145 != 4294953472U) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x785 = -1;
	int8_t x786 = INT8_MIN;
	uint16_t x788 = UINT16_MAX;
	int32_t t146 = 38699610;

    t146 = (x785*(x786^(x787==x788)));

    if (t146 != 128) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x790 = 31356941U;
	int16_t x791 = INT16_MIN;
	int8_t x792 = -1;

    t147 = (x789*(x790^(x791==x792)));

    if (t147 != 4263610355U) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x797 = 0;
	uint16_t x798 = 17531U;
	int32_t x799 = 87396;
	int16_t x800 = -3181;
	volatile int32_t t148 = 0;

    t148 = (x797*(x798^(x799==x800)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x801 = -6;
	uint8_t x802 = 6U;
	static int64_t x803 = 68859163279661487LL;
	uint16_t x804 = 1U;
	volatile int32_t t149 = -2394242;

    t149 = (x801*(x802^(x803==x804)));

    if (t149 != -36) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x805 = INT8_MIN;
	volatile int64_t x806 = -1LL;
	volatile int8_t x807 = INT8_MIN;
	volatile int64_t x808 = -1LL;
	volatile int64_t t150 = 303LL;

    t150 = (x805*(x806^(x807==x808)));

    if (t150 != 128LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint64_t x809 = UINT64_MAX;
	volatile int64_t x810 = -31050LL;
	uint16_t x811 = UINT16_MAX;
	uint64_t x812 = UINT64_MAX;
	static volatile uint64_t t151 = 309645763478LLU;

    t151 = (x809*(x810^(x811==x812)));

    if (t151 != 31050LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x817 = INT64_MAX;
	int16_t x818 = -1;
	static int64_t x819 = INT64_MIN;
	static uint16_t x820 = 15545U;
	static volatile int64_t t152 = -47131281592657235LL;

    t152 = (x817*(x818^(x819==x820)));

    if (t152 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x821 = 8090840780890890926LLU;
	volatile int64_t x822 = 1437LL;
	int16_t x823 = -11;
	uint64_t x824 = UINT64_MAX;
	uint64_t t153 = 34425LLU;

    t153 = (x821*(x822^(x823==x824)));

    if (t153 != 5089435703192742582LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x825 = UINT8_MAX;
	volatile uint32_t x826 = 0U;
	volatile int32_t x827 = INT32_MAX;

    t154 = (x825*(x826^(x827==x828)));

    if (t154 != 0U) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint8_t x834 = UINT8_MAX;
	uint64_t x835 = 2160458334606LLU;
	int8_t x836 = -1;
	uint32_t t155 = 13049346U;

    t155 = (x833*(x834^(x835==x836)));

    if (t155 != 510U) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x837 = 9U;
	int32_t x838 = -55777;
	static uint16_t x839 = UINT16_MAX;
	static int64_t x840 = INT64_MIN;
	int32_t t156 = -20019465;

    t156 = (x837*(x838^(x839==x840)));

    if (t156 != -501993) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint8_t x841 = UINT8_MAX;
	int8_t x842 = INT8_MIN;
	volatile uint64_t x844 = 0LLU;
	int32_t t157 = 108;

    t157 = (x841*(x842^(x843==x844)));

    if (t157 != -32640) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint16_t x851 = 3U;
	uint8_t x852 = 0U;

    t158 = (x849*(x850^(x851==x852)));

    if (t158 != -14636LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint64_t x857 = 12LLU;
	int32_t x858 = -1;
	static uint8_t x859 = 1U;
	int32_t x860 = -1;
	uint64_t t159 = 4148LLU;

    t159 = (x857*(x858^(x859==x860)));

    if (t159 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x862 = UINT8_MAX;
	static int32_t x863 = 2;
	int32_t t160 = -63129;

    t160 = (x861*(x862^(x863==x864)));

    if (t160 != -255) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int16_t x869 = -322;
	uint64_t x871 = 36557713497230276LLU;
	int8_t x872 = INT8_MIN;
	volatile int32_t t161 = -593662108;

    t161 = (x869*(x870^(x871==x872)));

    if (t161 != 41216) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x873 = -1LL;
	uint32_t x874 = 5U;
	static int64_t x875 = INT64_MIN;
	static volatile int64_t x876 = -1LL;

    t162 = (x873*(x874^(x875==x876)));

    if (t162 != -5LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x881 = INT8_MIN;
	int16_t x882 = INT16_MIN;
	int8_t x884 = -6;
	volatile int32_t t163 = 114356511;

    t163 = (x881*(x882^(x883==x884)));

    if (t163 != 4194304) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x885 = -1LL;
	int16_t x887 = INT16_MAX;
	int8_t x888 = -17;

    t164 = (x885*(x886^(x887==x888)));

    if (t164 != 128LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint16_t x889 = 1U;
	static volatile uint32_t x890 = 4398542U;
	int64_t x891 = 11788937821625015LL;
	uint16_t x892 = 0U;
	uint32_t t165 = 809598U;

    t165 = (x889*(x890^(x891==x892)));

    if (t165 != 4398542U) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x893 = 2332;
	static uint32_t x894 = 0U;
	static int64_t x895 = -1LL;
	volatile int8_t x896 = 2;
	volatile uint32_t t166 = 144527076U;

    t166 = (x893*(x894^(x895==x896)));

    if (t166 != 0U) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x897 = -1;
	static volatile uint8_t x898 = 27U;
	int64_t x899 = -1LL;
	uint32_t x900 = UINT32_MAX;
	int32_t t167 = -30528738;

    t167 = (x897*(x898^(x899==x900)));

    if (t167 != -27) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x901 = -1;
	uint32_t x902 = 1U;
	volatile uint32_t t168 = UINT32_MAX;

    t168 = (x901*(x902^(x903==x904)));

    if (t168 != UINT32_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x905 = -1;
	int16_t x906 = INT16_MAX;
	static int16_t x907 = INT16_MIN;
	int8_t x908 = INT8_MAX;
	static volatile int32_t t169 = 133;

    t169 = (x905*(x906^(x907==x908)));

    if (t169 != -32767) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x909 = UINT32_MAX;
	volatile int8_t x911 = 8;
	static int8_t x912 = INT8_MIN;
	static volatile uint32_t t170 = 14U;

    t170 = (x909*(x910^(x911==x912)));

    if (t170 != 387U) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x913 = 1;
	uint16_t x914 = 11U;
	static int32_t x915 = 215;
	static uint8_t x916 = UINT8_MAX;
	int32_t t171 = -1;

    t171 = (x913*(x914^(x915==x916)));

    if (t171 != 11) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x917 = INT16_MIN;
	int32_t x918 = -1;
	int8_t x919 = -1;
	uint8_t x920 = 0U;
	int32_t t172 = 10016480;

    t172 = (x917*(x918^(x919==x920)));

    if (t172 != 32768) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x929 = 5093;
	int64_t x930 = -1LL;
	int16_t x931 = -1;
	int64_t x932 = INT64_MAX;
	volatile int64_t t173 = -449031064109710LL;

    t173 = (x929*(x930^(x931==x932)));

    if (t173 != -5093LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x938 = -1LL;
	uint16_t x939 = UINT16_MAX;
	uint32_t x940 = 1115534078U;
	int64_t t174 = 9508417LL;

    t174 = (x937*(x938^(x939==x940)));

    if (t174 != -1LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint32_t x941 = UINT32_MAX;
	volatile int32_t x943 = -11307;
	static volatile int64_t x944 = INT64_MIN;
	static uint32_t t175 = 0U;

    t175 = (x941*(x942^(x943==x944)));

    if (t175 != 128U) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x945 = -7169528078717LL;
	int16_t x947 = 0;
	uint16_t x948 = UINT16_MAX;
	static uint64_t t176 = 831237LLU;

    t176 = (x945*(x946^(x947==x948)));

    if (t176 != 7169528078717LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x949 = -1LL;
	volatile uint32_t x951 = 1230779185U;

    t177 = (x949*(x950^(x951==x952)));

    if (t177 != -17LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x953 = -411;
	uint16_t x954 = 14971U;
	static volatile int8_t x955 = -21;
	volatile int64_t x956 = INT64_MIN;
	static int32_t t178 = 142;

    t178 = (x953*(x954^(x955==x956)));

    if (t178 != -6153081) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint8_t x957 = UINT8_MAX;
	uint16_t x958 = 1U;
	int32_t x959 = INT32_MIN;
	static volatile uint64_t x960 = UINT64_MAX;
	volatile int32_t t179 = 2836;

    t179 = (x957*(x958^(x959==x960)));

    if (t179 != 255) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x961 = 1352U;
	static volatile int8_t x962 = INT8_MIN;
	static uint32_t x963 = UINT32_MAX;
	uint32_t x964 = UINT32_MAX;

    t180 = (x961*(x962^(x963==x964)));

    if (t180 != -171704) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint16_t x969 = 3076U;
	uint16_t x972 = 165U;
	int32_t t181 = 9;

    t181 = (x969*(x970^(x971==x972)));

    if (t181 != -100794368) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x973 = -28;
	int16_t x974 = INT16_MIN;
	volatile int8_t x975 = -13;
	int64_t x976 = INT64_MIN;
	int32_t t182 = -2399339;

    t182 = (x973*(x974^(x975==x976)));

    if (t182 != 917504) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint32_t x977 = 164U;
	volatile int16_t x979 = 222;
	int32_t x980 = INT32_MIN;
	uint64_t t183 = 119872968863556137LLU;

    t183 = (x977*(x978^(x979==x980)));

    if (t183 != 18446744073709551452LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x985 = INT8_MIN;
	int16_t x986 = -1;
	int16_t x987 = INT16_MAX;
	volatile uint8_t x988 = 3U;
	int32_t t184 = -1967518;

    t184 = (x985*(x986^(x987==x988)));

    if (t184 != 128) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x989 = INT16_MIN;
	int8_t x990 = -1;
	int64_t x991 = INT64_MIN;
	volatile int32_t x992 = -1;
	volatile int32_t t185 = 63730;

    t185 = (x989*(x990^(x991==x992)));

    if (t185 != 32768) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x1001 = 3LLU;
	int32_t x1002 = INT32_MIN;
	volatile int16_t x1003 = INT16_MIN;
	uint64_t t186 = 522859214LLU;

    t186 = (x1001*(x1002^(x1003==x1004)));

    if (t186 != 18446744067267100672LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x1006 = -1;
	static uint32_t x1007 = 5792856U;
	uint64_t x1008 = UINT64_MAX;
	volatile int32_t t187 = -404496;

    t187 = (x1005*(x1006^(x1007==x1008)));

    if (t187 != -2147483647) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x1009 = INT16_MIN;
	volatile int16_t x1010 = INT16_MIN;
	static int32_t x1011 = INT32_MAX;
	static int64_t x1012 = INT64_MAX;

    t188 = (x1009*(x1010^(x1011==x1012)));

    if (t188 != 1073741824) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x1014 = UINT32_MAX;
	volatile int8_t x1015 = -1;
	int16_t x1016 = INT16_MIN;
	uint32_t t189 = 17U;

    t189 = (x1013*(x1014^(x1015==x1016)));

    if (t189 != 1U) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint8_t x1017 = 27U;
	int16_t x1018 = -1;
	uint32_t x1019 = UINT32_MAX;
	int32_t t190 = -37238;

    t190 = (x1017*(x1018^(x1019==x1020)));

    if (t190 != -27) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x1021 = INT16_MIN;
	uint8_t x1022 = 21U;
	static int64_t x1024 = INT64_MIN;
	volatile int32_t t191 = -1;

    t191 = (x1021*(x1022^(x1023==x1024)));

    if (t191 != -655360) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x1025 = -1;
	int32_t x1027 = INT32_MIN;
	int32_t x1028 = INT32_MIN;

    t192 = (x1025*(x1026^(x1027==x1028)));

    if (t192 != 2LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile uint64_t x1029 = UINT64_MAX;
	int32_t x1030 = INT32_MIN;
	volatile int64_t x1032 = -1LL;
	uint64_t t193 = 656079LLU;

    t193 = (x1029*(x1030^(x1031==x1032)));

    if (t193 != 2147483647LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x1033 = UINT64_MAX;
	uint16_t x1034 = UINT16_MAX;
	static int8_t x1035 = -1;
	int32_t x1036 = 463863;
	volatile uint64_t t194 = 83052018961070LLU;

    t194 = (x1033*(x1034^(x1035==x1036)));

    if (t194 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x1037 = INT16_MAX;
	volatile int32_t x1038 = -1;
	int16_t x1039 = 1;
	int8_t x1040 = INT8_MIN;
	volatile int32_t t195 = 564;

    t195 = (x1037*(x1038^(x1039==x1040)));

    if (t195 != -32767) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x1041 = 208523U;
	volatile int32_t x1042 = INT32_MIN;
	uint32_t x1043 = 10964592U;
	volatile uint32_t t196 = 129220U;

    t196 = (x1041*(x1042^(x1043==x1044)));

    if (t196 != 2147483648U) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1045 = INT8_MIN;
	int32_t x1046 = -718562;
	static volatile uint16_t x1047 = UINT16_MAX;
	static int64_t x1048 = INT64_MIN;
	int32_t t197 = 3056;

    t197 = (x1045*(x1046^(x1047==x1048)));

    if (t197 != 91975936) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x1053 = INT16_MIN;
	uint32_t x1054 = 122973464U;
	uint64_t x1056 = 3584LLU;
	volatile uint32_t t198 = 19U;

    t198 = (x1053*(x1054^(x1055==x1056)));

    if (t198 != 3379822592U) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x1057 = UINT16_MAX;
	int32_t x1058 = -71;
	volatile int32_t t199 = -2126425;

    t199 = (x1057*(x1058^(x1059==x1060)));

    if (t199 != -4652985) { NG(); } else { ; }
	
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

