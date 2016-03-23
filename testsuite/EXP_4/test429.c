
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

static int8_t x10 = INT8_MAX;
int8_t x16 = INT8_MIN;
int16_t x24 = INT16_MIN;
int16_t x27 = INT16_MAX;
uint8_t x34 = 9U;
volatile int64_t x37 = 967568924892074438LL;
int16_t x40 = INT16_MIN;
volatile int8_t x46 = INT8_MIN;
int16_t x48 = INT16_MAX;
int64_t x52 = -1LL;
int32_t x53 = INT32_MAX;
int32_t t11 = 835221074;
int16_t x58 = 119;
static volatile uint16_t x60 = UINT16_MAX;
static int64_t x69 = -161LL;
static int8_t x70 = 27;
static uint16_t x73 = UINT16_MAX;
int8_t x93 = 0;
static volatile int32_t x110 = INT32_MIN;
volatile int8_t x111 = 0;
uint64_t x129 = UINT64_MAX;
int8_t x132 = INT8_MAX;
static uint32_t x136 = UINT32_MAX;
int64_t x143 = -887537LL;
uint64_t x156 = UINT64_MAX;
int32_t x158 = 966280;
int32_t x159 = 0;
uint16_t x161 = UINT16_MAX;
static uint8_t x163 = 1U;
volatile int32_t x169 = -14772387;
static int8_t x195 = -1;
volatile int16_t x196 = 86;
uint32_t x199 = 10U;
static int32_t x200 = INT32_MIN;
uint32_t x209 = UINT32_MAX;
int64_t x218 = INT64_MIN;
int8_t x228 = 12;
int16_t x243 = -1;
volatile int32_t t42 = 16;
static int32_t t43 = 57;
volatile int32_t t45 = 69749987;
int8_t x267 = -1;
uint32_t x268 = 44U;
uint8_t x271 = 0U;
static uint8_t x281 = 1U;
static volatile int16_t x284 = -40;
uint64_t x292 = 1462511363570LLU;
int16_t x299 = -1;
int8_t x302 = 28;
volatile int32_t t52 = 266140;
int32_t x306 = -1;
uint32_t x341 = 7724U;
uint64_t x344 = UINT64_MAX;
int64_t x345 = 255519604835482LL;
uint32_t x353 = 2599U;
volatile int32_t x354 = 43067380;
uint64_t x356 = 2140140420662168LLU;
static int32_t t59 = 237522;
volatile int8_t x359 = -1;
static uint32_t x366 = 14981545U;
volatile int8_t x367 = -1;
uint32_t x368 = 49952624U;
uint8_t x375 = UINT8_MAX;
uint8_t x380 = 2U;
uint64_t x384 = UINT64_MAX;
int8_t x385 = INT8_MIN;
static int8_t x400 = INT8_MAX;
int16_t x427 = INT16_MAX;
static uint32_t x428 = 4780251U;
int32_t x438 = -123;
uint16_t x445 = UINT16_MAX;
static uint32_t x448 = UINT32_MAX;
int32_t t75 = 271;
uint64_t x470 = 272972221975330LLU;
uint16_t x499 = 2U;
int16_t x500 = INT16_MIN;
uint32_t x503 = 948922U;
static volatile int16_t x520 = -1;
volatile uint8_t x521 = UINT8_MAX;
int16_t x530 = -1;
static int32_t t86 = -477601376;
static int8_t x541 = 58;
int32_t x560 = -244;
int16_t x562 = INT16_MIN;
uint64_t x567 = UINT64_MAX;
static int16_t x584 = INT16_MIN;
volatile int32_t t93 = -3;
static volatile uint32_t x588 = 3693U;
int32_t t97 = 1321556;
int64_t x636 = -1LL;
static int32_t t102 = 13487784;
volatile int16_t x640 = 10862;
int16_t x642 = 3;
volatile uint16_t x654 = 2U;
int8_t x655 = 4;
uint64_t x664 = 15874552LLU;
int32_t t107 = -9219357;
volatile int8_t x667 = 23;
static int8_t x673 = -1;
volatile int32_t t111 = 82;
int32_t x693 = INT32_MIN;
uint8_t x696 = 122U;
volatile int64_t x708 = 169310734574LL;
static uint32_t x720 = 100620682U;
int16_t x722 = -1;
int32_t t119 = 6748;
volatile int16_t x725 = 43;
volatile int32_t t120 = -5;
int16_t x734 = -7150;
int8_t x735 = -1;
int16_t x736 = 13041;
uint64_t x739 = 516879285827LLU;
static int32_t t122 = 3845670;
uint8_t x765 = 11U;
uint8_t x769 = 2U;
int8_t x788 = INT8_MAX;
int32_t x792 = INT32_MIN;
static volatile int32_t t130 = 99709525;
int16_t x802 = 1;
static int64_t x803 = 4869LL;
volatile int32_t t131 = -57826;
static int32_t x821 = INT32_MIN;
volatile int32_t t132 = 5505316;
uint64_t x855 = UINT64_MAX;
int32_t t135 = 10;
int16_t x857 = -628;
static volatile uint16_t x859 = 9757U;
uint32_t x874 = 18055U;
volatile int64_t x885 = 61449423684925656LL;
int16_t x898 = 505;
int64_t x900 = -1LL;
static int8_t x919 = INT8_MIN;
int32_t t145 = -2278098;
int16_t x945 = -19;
static int8_t x946 = -1;
static uint32_t x948 = 53904U;
static volatile int32_t t147 = 222777;
volatile int8_t x955 = 0;
volatile uint64_t x964 = UINT64_MAX;
int32_t t149 = 497637124;
uint16_t x978 = UINT16_MAX;
static int16_t x979 = -1;
int32_t t151 = -905297680;
volatile int32_t t154 = 235907;
static uint64_t x1009 = UINT64_MAX;
volatile int8_t x1013 = INT8_MIN;
int16_t x1014 = INT16_MIN;
uint32_t x1019 = UINT32_MAX;
volatile int32_t t158 = 44;
volatile uint8_t x1032 = 9U;
static int64_t x1041 = INT64_MIN;
int64_t x1042 = 220LL;
static uint64_t x1047 = 23105078883271872LLU;
int32_t t162 = 242756276;
volatile int8_t x1054 = -1;
int32_t t164 = 1;
int16_t x1065 = INT16_MIN;
int8_t x1066 = -1;
int64_t x1069 = INT64_MAX;
uint8_t x1071 = 12U;
volatile int32_t t168 = 344272;
int16_t x1088 = INT16_MAX;
volatile int32_t t169 = -3904;
volatile uint8_t x1090 = 1U;
volatile int8_t x1092 = INT8_MAX;
int16_t x1096 = -1;
volatile uint8_t x1098 = UINT8_MAX;
int8_t x1109 = 0;
static int32_t t175 = 749949028;
int8_t x1128 = INT8_MAX;
volatile int16_t x1130 = -1;
uint32_t x1132 = 1260660226U;
uint8_t x1134 = 0U;
int16_t x1138 = -1;
int16_t x1139 = INT16_MIN;
int16_t x1149 = INT16_MIN;
static int64_t x1180 = -1LL;
volatile int16_t x1181 = -4753;
volatile int16_t x1190 = INT16_MIN;
uint8_t x1191 = UINT8_MAX;
int16_t x1201 = INT16_MIN;
int8_t x1214 = INT8_MAX;
int16_t x1215 = 2;
volatile uint32_t x1219 = 8620U;
uint32_t x1225 = 6376U;
int16_t x1233 = INT16_MIN;
uint64_t x1236 = UINT64_MAX;


void f0(void) {
    	int32_t x1 = -1;
	int16_t x2 = -1;
	uint8_t x3 = 0U;
	int32_t x4 = -24920704;
	static int32_t t0 = -1918230;

    t0 = (x1>(x2*(x3*x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x9 = INT8_MIN;
	int8_t x11 = INT8_MIN;
	volatile int8_t x12 = INT8_MIN;
	volatile int32_t t1 = 1670896;

    t1 = (x9>(x10*(x11*x12)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x13 = UINT32_MAX;
	uint64_t x14 = 2503LLU;
	uint16_t x15 = 1U;
	volatile int32_t t2 = 437;

    t2 = (x13>(x14*(x15*x16)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x17 = INT8_MIN;
	uint32_t x18 = 1815U;
	volatile uint32_t x19 = UINT32_MAX;
	uint8_t x20 = 3U;
	volatile int32_t t3 = -116325865;

    t3 = (x17>(x18*(x19*x20)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint16_t x21 = 2U;
	volatile int16_t x22 = -1;
	uint8_t x23 = 0U;
	volatile int32_t t4 = -49;

    t4 = (x21>(x22*(x23*x24)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int64_t x25 = INT64_MAX;
	int8_t x26 = -1;
	volatile uint64_t x28 = UINT64_MAX;
	int32_t t5 = -2404860;

    t5 = (x25>(x26*(x27*x28)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x29 = INT8_MIN;
	int16_t x30 = INT16_MAX;
	int32_t x31 = -1;
	uint8_t x32 = UINT8_MAX;
	static int32_t t6 = 0;

    t6 = (x29>(x30*(x31*x32)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint64_t x33 = 247LLU;
	uint64_t x35 = 1663698674122827LLU;
	volatile int8_t x36 = INT8_MIN;
	int32_t t7 = -1;

    t7 = (x33>(x34*(x35*x36)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x38 = UINT8_MAX;
	int8_t x39 = -1;
	int32_t t8 = -473717657;

    t8 = (x37>(x38*(x39*x40)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint8_t x45 = 13U;
	int64_t x47 = -75205991LL;
	static int32_t t9 = 244258;

    t9 = (x45>(x46*(x47*x48)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x49 = 6U;
	static uint16_t x50 = 261U;
	int8_t x51 = INT8_MAX;
	static volatile int32_t t10 = 0;

    t10 = (x49>(x50*(x51*x52)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint32_t x54 = 16767906U;
	int8_t x55 = INT8_MIN;
	int8_t x56 = INT8_MIN;

    t11 = (x53>(x54*(x55*x56)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x57 = -1;
	static int16_t x59 = -4;
	static volatile int32_t t12 = -6987340;

    t12 = (x57>(x58*(x59*x60)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint8_t x61 = 25U;
	uint32_t x62 = 5867U;
	uint64_t x63 = 67820945631LLU;
	uint32_t x64 = 33250U;
	volatile int32_t t13 = 11501635;

    t13 = (x61>(x62*(x63*x64)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x65 = -1;
	int64_t x66 = -1LL;
	uint32_t x67 = UINT32_MAX;
	int8_t x68 = 0;
	volatile int32_t t14 = -749549134;

    t14 = (x65>(x66*(x67*x68)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x71 = INT32_MIN;
	int64_t x72 = -3LL;
	volatile int32_t t15 = 50256;

    t15 = (x69>(x70*(x71*x72)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x74 = -830326;
	uint32_t x75 = 48014533U;
	int16_t x76 = INT16_MIN;
	volatile int32_t t16 = 26302;

    t16 = (x73>(x74*(x75*x76)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint64_t x94 = 11018LLU;
	static uint8_t x95 = 30U;
	volatile int32_t x96 = -1;
	static int32_t t17 = -10;

    t17 = (x93>(x94*(x95*x96)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x97 = INT16_MIN;
	int16_t x98 = INT16_MAX;
	int32_t x99 = -1;
	static volatile int64_t x100 = -1LL;
	volatile int32_t t18 = -275;

    t18 = (x97>(x98*(x99*x100)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x109 = 61LL;
	int32_t x112 = -78979;
	int32_t t19 = 1110;

    t19 = (x109>(x110*(x111*x112)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x113 = INT8_MIN;
	volatile int16_t x114 = INT16_MIN;
	volatile int16_t x115 = -20;
	uint64_t x116 = 736LLU;
	int32_t t20 = -123737;

    t20 = (x113>(x114*(x115*x116)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x130 = 14;
	static int32_t x131 = -113983;
	volatile int32_t t21 = -58;

    t21 = (x129>(x130*(x131*x132)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x133 = UINT16_MAX;
	uint16_t x134 = 14172U;
	int32_t x135 = -29;
	volatile int32_t t22 = 14825;

    t22 = (x133>(x134*(x135*x136)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint16_t x141 = UINT16_MAX;
	int8_t x142 = INT8_MIN;
	static int32_t x144 = INT32_MIN;
	volatile int32_t t23 = -4759;

    t23 = (x141>(x142*(x143*x144)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x145 = -3;
	uint32_t x146 = 980U;
	int32_t x147 = 1397098;
	uint64_t x148 = 1507743314006396LLU;
	static volatile int32_t t24 = 9;

    t24 = (x145>(x146*(x147*x148)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x149 = 5642U;
	int8_t x150 = -1;
	int64_t x151 = -1LL;
	int64_t x152 = -1LL;
	volatile int32_t t25 = 219;

    t25 = (x149>(x150*(x151*x152)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x153 = INT32_MAX;
	int32_t x154 = -261480;
	int16_t x155 = -15309;
	int32_t t26 = -227156713;

    t26 = (x153>(x154*(x155*x156)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x157 = INT32_MIN;
	uint8_t x160 = 24U;
	volatile int32_t t27 = -224;

    t27 = (x157>(x158*(x159*x160)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x162 = 3;
	static int32_t x164 = 1;
	static int32_t t28 = -11723;

    t28 = (x161>(x162*(x163*x164)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x165 = -1804;
	static uint16_t x166 = 1411U;
	int16_t x167 = INT16_MAX;
	volatile uint32_t x168 = 123962531U;
	int32_t t29 = -292553133;

    t29 = (x165>(x166*(x167*x168)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x170 = -61016876110LL;
	static volatile int8_t x171 = -55;
	int16_t x172 = INT16_MAX;
	int32_t t30 = 181169;

    t30 = (x169>(x170*(x171*x172)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x185 = INT8_MIN;
	int64_t x186 = 60146976457751LL;
	int8_t x187 = INT8_MIN;
	static int32_t x188 = 1;
	static volatile int32_t t31 = 239038241;

    t31 = (x185>(x186*(x187*x188)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x193 = -1LL;
	int8_t x194 = -1;
	int32_t t32 = 11882609;

    t32 = (x193>(x194*(x195*x196)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x197 = INT16_MIN;
	static volatile int16_t x198 = -1;
	int32_t t33 = -150997695;

    t33 = (x197>(x198*(x199*x200)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x201 = INT64_MAX;
	int32_t x202 = 5798;
	int16_t x203 = -718;
	uint16_t x204 = 3U;
	static volatile int32_t t34 = 1;

    t34 = (x201>(x202*(x203*x204)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x205 = 1;
	int32_t x206 = INT32_MAX;
	static uint64_t x207 = 1LLU;
	static int16_t x208 = 6480;
	int32_t t35 = 414;

    t35 = (x205>(x206*(x207*x208)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x210 = INT8_MIN;
	int8_t x211 = INT8_MIN;
	uint64_t x212 = 826536739228291691LLU;
	volatile int32_t t36 = 11329;

    t36 = (x209>(x210*(x211*x212)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x213 = INT16_MAX;
	static volatile int8_t x214 = INT8_MIN;
	static int8_t x215 = INT8_MIN;
	uint8_t x216 = UINT8_MAX;
	static int32_t t37 = 302197351;

    t37 = (x213>(x214*(x215*x216)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile uint8_t x217 = 26U;
	static int16_t x219 = -1;
	int8_t x220 = -1;
	int32_t t38 = 1;

    t38 = (x217>(x218*(x219*x220)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x221 = INT64_MIN;
	uint64_t x222 = UINT64_MAX;
	volatile int64_t x223 = INT64_MAX;
	uint64_t x224 = 2261396453131955475LLU;
	static int32_t t39 = 32379519;

    t39 = (x221>(x222*(x223*x224)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x225 = -2;
	int64_t x226 = -1LL;
	uint8_t x227 = 55U;
	static int32_t t40 = 433;

    t40 = (x225>(x226*(x227*x228)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x241 = -619;
	int16_t x242 = INT16_MIN;
	static int32_t x244 = -1;
	int32_t t41 = 4868206;

    t41 = (x241>(x242*(x243*x244)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x249 = -1;
	volatile uint16_t x250 = 503U;
	uint64_t x251 = UINT64_MAX;
	uint32_t x252 = UINT32_MAX;

    t42 = (x249>(x250*(x251*x252)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x253 = -1;
	uint64_t x254 = UINT64_MAX;
	int64_t x255 = 1167209LL;
	int8_t x256 = INT8_MIN;

    t43 = (x253>(x254*(x255*x256)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x257 = -9;
	uint32_t x258 = UINT32_MAX;
	volatile int16_t x259 = INT16_MAX;
	int32_t x260 = -1;
	static volatile int32_t t44 = 120370932;

    t44 = (x257>(x258*(x259*x260)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x261 = 80031;
	int8_t x262 = -1;
	uint64_t x263 = 3417LLU;
	int16_t x264 = INT16_MIN;

    t45 = (x261>(x262*(x263*x264)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x265 = INT8_MAX;
	int16_t x266 = -1;
	int32_t t46 = -47;

    t46 = (x265>(x266*(x267*x268)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x269 = INT16_MIN;
	static uint8_t x270 = 2U;
	int16_t x272 = -1;
	volatile int32_t t47 = -1025266428;

    t47 = (x269>(x270*(x271*x272)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x282 = 238002746U;
	uint64_t x283 = UINT64_MAX;
	volatile int32_t t48 = 10;

    t48 = (x281>(x282*(x283*x284)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int64_t x289 = INT64_MAX;
	int16_t x290 = -1;
	int16_t x291 = -58;
	volatile int32_t t49 = -4;

    t49 = (x289>(x290*(x291*x292)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x293 = -62;
	static int32_t x294 = -1945459;
	uint64_t x295 = 28109936685515735LLU;
	static uint8_t x296 = 1U;
	volatile int32_t t50 = -789595;

    t50 = (x293>(x294*(x295*x296)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x297 = INT8_MIN;
	int16_t x298 = INT16_MIN;
	uint16_t x300 = 247U;
	volatile int32_t t51 = -56787;

    t51 = (x297>(x298*(x299*x300)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x301 = INT8_MAX;
	int64_t x303 = -1LL;
	uint64_t x304 = 20980LLU;

    t52 = (x301>(x302*(x303*x304)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x305 = 411;
	uint64_t x307 = 39893282837357929LLU;
	static int32_t x308 = INT32_MIN;
	int32_t t53 = 10843;

    t53 = (x305>(x306*(x307*x308)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x309 = INT32_MIN;
	volatile int8_t x310 = INT8_MIN;
	volatile int64_t x311 = -1LL;
	uint64_t x312 = UINT64_MAX;
	int32_t t54 = -113130982;

    t54 = (x309>(x310*(x311*x312)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x337 = INT8_MIN;
	int8_t x338 = INT8_MIN;
	static int16_t x339 = INT16_MAX;
	volatile uint16_t x340 = 1U;
	static volatile int32_t t55 = 23;

    t55 = (x337>(x338*(x339*x340)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x342 = -6150LL;
	uint64_t x343 = 50953184LLU;
	static int32_t t56 = 1;

    t56 = (x341>(x342*(x343*x344)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x346 = INT64_MIN;
	int32_t x347 = -1;
	int32_t x348 = -1;
	static volatile int32_t t57 = 534025;

    t57 = (x345>(x346*(x347*x348)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x349 = INT8_MIN;
	int32_t x350 = INT32_MIN;
	int64_t x351 = -1LL;
	int16_t x352 = INT16_MAX;
	int32_t t58 = 3;

    t58 = (x349>(x350*(x351*x352)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint32_t x355 = UINT32_MAX;

    t59 = (x353>(x354*(x355*x356)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile uint32_t x357 = 424U;
	int64_t x358 = -1LL;
	static int8_t x360 = -1;
	volatile int32_t t60 = -6925901;

    t60 = (x357>(x358*(x359*x360)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x365 = INT32_MAX;
	int32_t t61 = 105;

    t61 = (x365>(x366*(x367*x368)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint32_t x369 = UINT32_MAX;
	volatile uint16_t x370 = UINT16_MAX;
	uint32_t x371 = 1992U;
	static uint8_t x372 = UINT8_MAX;
	volatile int32_t t62 = 331705;

    t62 = (x369>(x370*(x371*x372)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x373 = INT64_MIN;
	volatile int32_t x374 = INT32_MIN;
	uint32_t x376 = UINT32_MAX;
	int32_t t63 = -3;

    t63 = (x373>(x374*(x375*x376)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x377 = 712977LL;
	int64_t x378 = -1LL;
	static int64_t x379 = -133688243030087LL;
	int32_t t64 = 4334;

    t64 = (x377>(x378*(x379*x380)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x381 = -1;
	static uint32_t x382 = 17999U;
	int32_t x383 = INT32_MIN;
	volatile int32_t t65 = 37830589;

    t65 = (x381>(x382*(x383*x384)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x386 = INT8_MAX;
	static uint64_t x387 = UINT64_MAX;
	int8_t x388 = -12;
	static int32_t t66 = -3826183;

    t66 = (x385>(x386*(x387*x388)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x389 = 1;
	static int32_t x390 = -1;
	volatile int8_t x391 = INT8_MIN;
	static volatile int16_t x392 = -1;
	volatile int32_t t67 = -1021042;

    t67 = (x389>(x390*(x391*x392)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x397 = INT64_MAX;
	volatile int64_t x398 = 11601278982901860LL;
	uint64_t x399 = 792439LLU;
	volatile int32_t t68 = -32643525;

    t68 = (x397>(x398*(x399*x400)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint32_t x409 = 1458U;
	static volatile uint8_t x410 = 2U;
	uint16_t x411 = UINT16_MAX;
	int64_t x412 = -11149LL;
	volatile int32_t t69 = -13241;

    t69 = (x409>(x410*(x411*x412)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x417 = -3;
	int16_t x418 = 7754;
	int16_t x419 = INT16_MIN;
	volatile int64_t x420 = 1213LL;
	static int32_t t70 = -588;

    t70 = (x417>(x418*(x419*x420)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x425 = INT64_MIN;
	int32_t x426 = -1;
	volatile int32_t t71 = -2287877;

    t71 = (x425>(x426*(x427*x428)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x429 = 41U;
	int64_t x430 = 87850518LL;
	uint16_t x431 = 6U;
	static int8_t x432 = -20;
	int32_t t72 = -67543;

    t72 = (x429>(x430*(x431*x432)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x433 = 7029U;
	static int8_t x434 = INT8_MAX;
	static volatile uint32_t x435 = UINT32_MAX;
	static volatile int16_t x436 = INT16_MIN;
	static volatile int32_t t73 = -3;

    t73 = (x433>(x434*(x435*x436)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x437 = INT8_MAX;
	static uint32_t x439 = UINT32_MAX;
	uint32_t x440 = UINT32_MAX;
	volatile int32_t t74 = 1979;

    t74 = (x437>(x438*(x439*x440)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint8_t x446 = 97U;
	int32_t x447 = INT32_MIN;

    t75 = (x445>(x446*(x447*x448)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x453 = -1;
	int64_t x454 = -19LL;
	int16_t x455 = 396;
	static int16_t x456 = -61;
	volatile int32_t t76 = 209714405;

    t76 = (x453>(x454*(x455*x456)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x461 = -1;
	int16_t x462 = -41;
	int16_t x463 = -1;
	int64_t x464 = -1LL;
	volatile int32_t t77 = -5;

    t77 = (x461>(x462*(x463*x464)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x469 = INT32_MIN;
	uint16_t x471 = 1455U;
	static int8_t x472 = -1;
	int32_t t78 = 0;

    t78 = (x469>(x470*(x471*x472)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x473 = INT32_MIN;
	volatile int32_t x474 = 49;
	int16_t x475 = INT16_MAX;
	volatile uint32_t x476 = 165932U;
	int32_t t79 = 1;

    t79 = (x473>(x474*(x475*x476)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x481 = 97U;
	volatile uint16_t x482 = 3644U;
	uint8_t x483 = 89U;
	int64_t x484 = -1LL;
	int32_t t80 = 84;

    t80 = (x481>(x482*(x483*x484)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x489 = 3143749309LL;
	uint8_t x490 = 11U;
	volatile int16_t x491 = INT16_MIN;
	int8_t x492 = INT8_MIN;
	int32_t t81 = 1;

    t81 = (x489>(x490*(x491*x492)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x497 = -1;
	int8_t x498 = INT8_MIN;
	int32_t t82 = -1;

    t82 = (x497>(x498*(x499*x500)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x501 = INT64_MIN;
	int64_t x502 = -1LL;
	uint32_t x504 = UINT32_MAX;
	volatile int32_t t83 = 176083;

    t83 = (x501>(x502*(x503*x504)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x517 = 269879048732025LLU;
	volatile uint8_t x518 = 12U;
	uint16_t x519 = UINT16_MAX;
	volatile int32_t t84 = -38722865;

    t84 = (x517>(x518*(x519*x520)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x522 = -421610695867188LL;
	static volatile int16_t x523 = -1;
	uint8_t x524 = 15U;
	volatile int32_t t85 = -2573945;

    t85 = (x521>(x522*(x523*x524)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x529 = UINT32_MAX;
	volatile int32_t x531 = -15;
	static int64_t x532 = -1LL;

    t86 = (x529>(x530*(x531*x532)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x542 = 269689298U;
	static int8_t x543 = -1;
	int16_t x544 = -86;
	int32_t t87 = -27597;

    t87 = (x541>(x542*(x543*x544)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x549 = INT32_MIN;
	static int16_t x550 = -1;
	int16_t x551 = -6;
	volatile int8_t x552 = -1;
	int32_t t88 = 371;

    t88 = (x549>(x550*(x551*x552)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x557 = INT16_MIN;
	static int16_t x558 = INT16_MAX;
	int8_t x559 = INT8_MAX;
	volatile int32_t t89 = -915;

    t89 = (x557>(x558*(x559*x560)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x561 = INT64_MIN;
	int16_t x563 = INT16_MIN;
	static uint8_t x564 = 1U;
	int32_t t90 = -23;

    t90 = (x561>(x562*(x563*x564)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x565 = INT16_MIN;
	int8_t x566 = INT8_MIN;
	volatile uint8_t x568 = 19U;
	static int32_t t91 = -1;

    t91 = (x565>(x566*(x567*x568)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x573 = INT16_MIN;
	uint32_t x574 = 26U;
	volatile int16_t x575 = INT16_MAX;
	uint32_t x576 = 465U;
	int32_t t92 = 1088283;

    t92 = (x573>(x574*(x575*x576)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x581 = 15U;
	uint64_t x582 = 1041433795LLU;
	int8_t x583 = -7;

    t93 = (x581>(x582*(x583*x584)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x585 = -1;
	uint8_t x586 = 0U;
	int8_t x587 = INT8_MIN;
	int32_t t94 = 1405;

    t94 = (x585>(x586*(x587*x588)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x589 = INT16_MIN;
	int64_t x590 = -1LL;
	uint64_t x591 = 3864326843LLU;
	int64_t x592 = INT64_MIN;
	volatile int32_t t95 = -78875;

    t95 = (x589>(x590*(x591*x592)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x593 = 20LLU;
	static int16_t x594 = INT16_MIN;
	uint16_t x595 = 275U;
	uint8_t x596 = 3U;
	static int32_t t96 = -102;

    t96 = (x593>(x594*(x595*x596)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x597 = -45;
	volatile uint8_t x598 = UINT8_MAX;
	int16_t x599 = INT16_MIN;
	volatile uint32_t x600 = 3317U;

    t97 = (x597>(x598*(x599*x600)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x601 = -2;
	uint8_t x602 = UINT8_MAX;
	int8_t x603 = 29;
	volatile uint64_t x604 = 32288746800683754LLU;
	static volatile int32_t t98 = 1;

    t98 = (x601>(x602*(x603*x604)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x605 = INT32_MIN;
	int32_t x606 = -1;
	volatile uint64_t x607 = UINT64_MAX;
	int32_t x608 = 586142;
	static int32_t t99 = -54656;

    t99 = (x605>(x606*(x607*x608)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint16_t x625 = 67U;
	int16_t x626 = INT16_MIN;
	int8_t x627 = INT8_MIN;
	int8_t x628 = 18;
	volatile int32_t t100 = -200899;

    t100 = (x625>(x626*(x627*x628)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x629 = 382168958866298LLU;
	volatile int64_t x630 = INT64_MIN;
	uint32_t x631 = UINT32_MAX;
	uint64_t x632 = UINT64_MAX;
	volatile int32_t t101 = -10;

    t101 = (x629>(x630*(x631*x632)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int8_t x633 = INT8_MIN;
	int32_t x634 = -2366;
	volatile int8_t x635 = INT8_MAX;

    t102 = (x633>(x634*(x635*x636)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x637 = -1;
	uint16_t x638 = 3U;
	uint8_t x639 = 2U;
	int32_t t103 = -240916;

    t103 = (x637>(x638*(x639*x640)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x641 = INT32_MIN;
	int64_t x643 = -426281887772LL;
	volatile uint16_t x644 = 7540U;
	static int32_t t104 = 224;

    t104 = (x641>(x642*(x643*x644)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x653 = -1;
	int32_t x656 = -1;
	volatile int32_t t105 = -1;

    t105 = (x653>(x654*(x655*x656)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x657 = -1;
	uint8_t x658 = UINT8_MAX;
	uint16_t x659 = 11U;
	volatile int32_t x660 = -1;
	static volatile int32_t t106 = -2154182;

    t106 = (x657>(x658*(x659*x660)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x661 = INT8_MAX;
	uint8_t x662 = 31U;
	static int32_t x663 = INT32_MIN;

    t107 = (x661>(x662*(x663*x664)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x665 = -1;
	uint8_t x666 = 52U;
	int8_t x668 = -1;
	volatile int32_t t108 = -30;

    t108 = (x665>(x666*(x667*x668)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x674 = 92004U;
	int16_t x675 = -1;
	int64_t x676 = -1LL;
	int32_t t109 = 527438592;

    t109 = (x673>(x674*(x675*x676)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x677 = INT8_MAX;
	uint8_t x678 = UINT8_MAX;
	int8_t x679 = 0;
	static int32_t x680 = 59863;
	volatile int32_t t110 = 313063;

    t110 = (x677>(x678*(x679*x680)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int8_t x681 = INT8_MIN;
	volatile uint16_t x682 = UINT16_MAX;
	uint32_t x683 = 15097U;
	static int16_t x684 = -1;

    t111 = (x681>(x682*(x683*x684)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x685 = 35190238758554907LLU;
	uint16_t x686 = 158U;
	int8_t x687 = -1;
	static uint16_t x688 = 15643U;
	volatile int32_t t112 = 5;

    t112 = (x685>(x686*(x687*x688)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x689 = -1;
	int8_t x690 = -1;
	volatile int64_t x691 = 15444481LL;
	static int16_t x692 = INT16_MIN;
	volatile int32_t t113 = 23724704;

    t113 = (x689>(x690*(x691*x692)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x694 = -1LL;
	int16_t x695 = INT16_MIN;
	volatile int32_t t114 = -35897;

    t114 = (x693>(x694*(x695*x696)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x701 = 52384271;
	int16_t x702 = -1;
	int8_t x703 = INT8_MIN;
	int8_t x704 = INT8_MAX;
	volatile int32_t t115 = 82;

    t115 = (x701>(x702*(x703*x704)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x705 = 6639;
	int16_t x706 = -2039;
	static int32_t x707 = 844;
	int32_t t116 = -860304719;

    t116 = (x705>(x706*(x707*x708)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x709 = 1;
	int32_t x710 = 4484;
	int64_t x711 = 592539LL;
	int8_t x712 = -13;
	int32_t t117 = 62137;

    t117 = (x709>(x710*(x711*x712)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x717 = -1;
	static int16_t x718 = -29;
	int8_t x719 = -14;
	volatile int32_t t118 = -678;

    t118 = (x717>(x718*(x719*x720)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x721 = 39899533556LL;
	int32_t x723 = -39;
	int8_t x724 = -1;

    t119 = (x721>(x722*(x723*x724)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x726 = INT8_MIN;
	int8_t x727 = -1;
	uint16_t x728 = UINT16_MAX;

    t120 = (x725>(x726*(x727*x728)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x733 = INT8_MIN;
	volatile int32_t t121 = -1172797;

    t121 = (x733>(x734*(x735*x736)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x737 = 8U;
	volatile int8_t x738 = -1;
	int64_t x740 = INT64_MIN;

    t122 = (x737>(x738*(x739*x740)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x741 = INT16_MAX;
	uint8_t x742 = 27U;
	volatile uint64_t x743 = 182957214666602216LLU;
	int64_t x744 = INT64_MAX;
	volatile int32_t t123 = 616291;

    t123 = (x741>(x742*(x743*x744)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x749 = INT8_MAX;
	uint8_t x750 = 1U;
	int64_t x751 = -1LL;
	uint8_t x752 = UINT8_MAX;
	volatile int32_t t124 = -491715;

    t124 = (x749>(x750*(x751*x752)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x766 = 299U;
	volatile int32_t x767 = INT32_MAX;
	volatile uint64_t x768 = 899003540099LLU;
	static int32_t t125 = -918637;

    t125 = (x765>(x766*(x767*x768)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x770 = 2020272825LLU;
	uint64_t x771 = 4371528LLU;
	volatile int32_t x772 = 816701;
	int32_t t126 = 30863351;

    t126 = (x769>(x770*(x771*x772)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint32_t x773 = 148U;
	static volatile int64_t x774 = INT64_MIN;
	int8_t x775 = INT8_MAX;
	uint64_t x776 = UINT64_MAX;
	volatile int32_t t127 = -19140;

    t127 = (x773>(x774*(x775*x776)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x785 = -1;
	int8_t x786 = 20;
	static volatile int8_t x787 = -13;
	int32_t t128 = -102943075;

    t128 = (x785>(x786*(x787*x788)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x789 = UINT64_MAX;
	static int16_t x790 = 498;
	int64_t x791 = -1LL;
	static volatile int32_t t129 = -486950;

    t129 = (x789>(x790*(x791*x792)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x793 = INT8_MIN;
	static int8_t x794 = INT8_MIN;
	int16_t x795 = INT16_MAX;
	uint32_t x796 = UINT32_MAX;

    t130 = (x793>(x794*(x795*x796)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x801 = 7LLU;
	volatile uint8_t x804 = 26U;

    t131 = (x801>(x802*(x803*x804)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x822 = 16;
	static uint64_t x823 = UINT64_MAX;
	int16_t x824 = 375;

    t132 = (x821>(x822*(x823*x824)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x833 = -1;
	static int16_t x834 = INT16_MIN;
	uint64_t x835 = UINT64_MAX;
	static uint16_t x836 = 1U;
	static int32_t t133 = 1;

    t133 = (x833>(x834*(x835*x836)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x849 = INT8_MIN;
	uint64_t x850 = 15721611LLU;
	int8_t x851 = INT8_MIN;
	int8_t x852 = INT8_MIN;
	static volatile int32_t t134 = 2965184;

    t134 = (x849>(x850*(x851*x852)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x853 = 68U;
	int16_t x854 = -3632;
	int8_t x856 = INT8_MIN;

    t135 = (x853>(x854*(x855*x856)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint8_t x858 = 3U;
	uint16_t x860 = 10U;
	volatile int32_t t136 = 0;

    t136 = (x857>(x858*(x859*x860)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x861 = 1;
	int64_t x862 = 102LL;
	static int16_t x863 = 289;
	volatile uint32_t x864 = 8409U;
	int32_t t137 = 1;

    t137 = (x861>(x862*(x863*x864)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x865 = 5743U;
	int32_t x866 = -1;
	int16_t x867 = INT16_MIN;
	static int16_t x868 = INT16_MIN;
	volatile int32_t t138 = 3042;

    t138 = (x865>(x866*(x867*x868)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x873 = -1;
	uint8_t x875 = UINT8_MAX;
	volatile uint64_t x876 = UINT64_MAX;
	volatile int32_t t139 = -4932;

    t139 = (x873>(x874*(x875*x876)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x886 = 350;
	int16_t x887 = INT16_MAX;
	uint32_t x888 = 1285336U;
	int32_t t140 = -1;

    t140 = (x885>(x886*(x887*x888)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x893 = UINT64_MAX;
	uint32_t x894 = 118U;
	uint16_t x895 = UINT16_MAX;
	uint16_t x896 = 1U;
	int32_t t141 = 5960;

    t141 = (x893>(x894*(x895*x896)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x897 = 3U;
	volatile int32_t x899 = INT32_MIN;
	int32_t t142 = -3930;

    t142 = (x897>(x898*(x899*x900)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x905 = -1;
	int8_t x906 = INT8_MIN;
	int8_t x907 = -1;
	uint16_t x908 = 428U;
	int32_t t143 = 56;

    t143 = (x905>(x906*(x907*x908)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x917 = INT8_MIN;
	int16_t x918 = 12252;
	uint64_t x920 = 11237LLU;
	int32_t t144 = 3;

    t144 = (x917>(x918*(x919*x920)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x925 = -1LL;
	static uint16_t x926 = 224U;
	int32_t x927 = -1;
	uint8_t x928 = UINT8_MAX;

    t145 = (x925>(x926*(x927*x928)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x947 = -1;
	volatile int32_t t146 = 85050;

    t146 = (x945>(x946*(x947*x948)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x949 = -1;
	int8_t x950 = INT8_MAX;
	int8_t x951 = INT8_MIN;
	static volatile int16_t x952 = 0;

    t147 = (x949>(x950*(x951*x952)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x953 = 28LLU;
	int8_t x954 = 6;
	uint32_t x956 = 146303U;
	int32_t t148 = 12;

    t148 = (x953>(x954*(x955*x956)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x961 = -1;
	int16_t x962 = INT16_MAX;
	int16_t x963 = INT16_MIN;

    t149 = (x961>(x962*(x963*x964)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x965 = -1;
	uint64_t x966 = 675066LLU;
	int8_t x967 = -1;
	int8_t x968 = -1;
	volatile int32_t t150 = -15228417;

    t150 = (x965>(x966*(x967*x968)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x977 = 5110170013838LL;
	uint64_t x980 = UINT64_MAX;

    t151 = (x977>(x978*(x979*x980)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x993 = INT8_MIN;
	int16_t x994 = -1;
	static uint8_t x995 = 2U;
	uint32_t x996 = 49U;
	volatile int32_t t152 = 10990;

    t152 = (x993>(x994*(x995*x996)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x1001 = INT8_MIN;
	uint8_t x1002 = UINT8_MAX;
	uint16_t x1003 = 1193U;
	int8_t x1004 = -1;
	int32_t t153 = -58;

    t153 = (x1001>(x1002*(x1003*x1004)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x1005 = 885;
	static uint64_t x1006 = 3405593622291835LLU;
	volatile int8_t x1007 = INT8_MAX;
	uint8_t x1008 = UINT8_MAX;

    t154 = (x1005>(x1006*(x1007*x1008)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x1010 = INT64_MIN;
	uint64_t x1011 = 4123148LLU;
	uint32_t x1012 = UINT32_MAX;
	static volatile int32_t t155 = -3719239;

    t155 = (x1009>(x1010*(x1011*x1012)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x1015 = 810773U;
	static int16_t x1016 = -1;
	volatile int32_t t156 = 30;

    t156 = (x1013>(x1014*(x1015*x1016)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x1017 = INT64_MAX;
	volatile uint8_t x1018 = UINT8_MAX;
	int32_t x1020 = INT32_MAX;
	volatile int32_t t157 = -3;

    t157 = (x1017>(x1018*(x1019*x1020)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x1021 = INT32_MAX;
	volatile int16_t x1022 = INT16_MAX;
	uint32_t x1023 = 110608659U;
	volatile uint8_t x1024 = 3U;

    t158 = (x1021>(x1022*(x1023*x1024)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x1029 = -1;
	uint16_t x1030 = 56U;
	int16_t x1031 = 3;
	int32_t t159 = 84221044;

    t159 = (x1029>(x1030*(x1031*x1032)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x1033 = 582LL;
	uint64_t x1034 = 560165LLU;
	uint32_t x1035 = UINT32_MAX;
	volatile uint64_t x1036 = UINT64_MAX;
	int32_t t160 = -4901142;

    t160 = (x1033>(x1034*(x1035*x1036)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x1043 = 1140772925LL;
	static uint32_t x1044 = 3U;
	int32_t t161 = 257189;

    t161 = (x1041>(x1042*(x1043*x1044)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x1045 = -85806904192LL;
	int8_t x1046 = -5;
	volatile int16_t x1048 = -1;

    t162 = (x1045>(x1046*(x1047*x1048)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x1049 = UINT16_MAX;
	int64_t x1050 = 916158LL;
	int8_t x1051 = INT8_MAX;
	uint8_t x1052 = 0U;
	int32_t t163 = -346449;

    t163 = (x1049>(x1050*(x1051*x1052)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x1053 = -1LL;
	volatile uint64_t x1055 = 1912191821LLU;
	static volatile int32_t x1056 = -1;

    t164 = (x1053>(x1054*(x1055*x1056)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x1061 = INT16_MIN;
	uint64_t x1062 = 207LLU;
	int16_t x1063 = INT16_MAX;
	int64_t x1064 = -1LL;
	int32_t t165 = -704999068;

    t165 = (x1061>(x1062*(x1063*x1064)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int32_t x1067 = -19795;
	uint8_t x1068 = 43U;
	volatile int32_t t166 = -533;

    t166 = (x1065>(x1066*(x1067*x1068)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x1070 = INT8_MAX;
	uint16_t x1072 = 3U;
	volatile int32_t t167 = 5;

    t167 = (x1069>(x1070*(x1071*x1072)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x1073 = UINT64_MAX;
	int16_t x1074 = INT16_MAX;
	uint32_t x1075 = 7U;
	int8_t x1076 = -2;

    t168 = (x1073>(x1074*(x1075*x1076)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x1085 = INT32_MIN;
	volatile int8_t x1086 = -1;
	int16_t x1087 = INT16_MIN;

    t169 = (x1085>(x1086*(x1087*x1088)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x1089 = 4699U;
	int8_t x1091 = 1;
	volatile int32_t t170 = 3;

    t170 = (x1089>(x1090*(x1091*x1092)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x1093 = 259;
	volatile int16_t x1094 = -1;
	int64_t x1095 = INT64_MAX;
	volatile int32_t t171 = 25123760;

    t171 = (x1093>(x1094*(x1095*x1096)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x1097 = INT64_MAX;
	int8_t x1099 = -1;
	static volatile int16_t x1100 = INT16_MAX;
	volatile int32_t t172 = 108;

    t172 = (x1097>(x1098*(x1099*x1100)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x1105 = 4;
	int16_t x1106 = INT16_MIN;
	int64_t x1107 = -1LL;
	int8_t x1108 = INT8_MIN;
	volatile int32_t t173 = 6378223;

    t173 = (x1105>(x1106*(x1107*x1108)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x1110 = -1;
	uint32_t x1111 = 2068223U;
	int64_t x1112 = 301555827LL;
	int32_t t174 = 80579800;

    t174 = (x1109>(x1110*(x1111*x1112)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x1113 = INT32_MIN;
	static uint32_t x1114 = UINT32_MAX;
	uint32_t x1115 = UINT32_MAX;
	int16_t x1116 = INT16_MIN;

    t175 = (x1113>(x1114*(x1115*x1116)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x1117 = INT32_MAX;
	static int8_t x1118 = INT8_MAX;
	int16_t x1119 = INT16_MAX;
	int64_t x1120 = -318036249LL;
	static volatile int32_t t176 = 485913426;

    t176 = (x1117>(x1118*(x1119*x1120)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x1125 = 48;
	int16_t x1126 = -1;
	static uint32_t x1127 = 111859U;
	volatile int32_t t177 = -2782664;

    t177 = (x1125>(x1126*(x1127*x1128)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x1129 = 0U;
	uint32_t x1131 = 0U;
	volatile int32_t t178 = -3061974;

    t178 = (x1129>(x1130*(x1131*x1132)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x1133 = 504695606;
	static int16_t x1135 = INT16_MAX;
	uint16_t x1136 = UINT16_MAX;
	static int32_t t179 = -4545;

    t179 = (x1133>(x1134*(x1135*x1136)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x1137 = INT8_MIN;
	volatile int16_t x1140 = 480;
	volatile int32_t t180 = -991691;

    t180 = (x1137>(x1138*(x1139*x1140)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint64_t x1145 = 636447715462545LLU;
	uint64_t x1146 = 268692128741936LLU;
	int8_t x1147 = INT8_MIN;
	static int32_t x1148 = -29;
	volatile int32_t t181 = 0;

    t181 = (x1145>(x1146*(x1147*x1148)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x1150 = INT8_MIN;
	int8_t x1151 = -2;
	int16_t x1152 = INT16_MIN;
	int32_t t182 = -318323;

    t182 = (x1149>(x1150*(x1151*x1152)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x1157 = INT16_MIN;
	uint64_t x1158 = UINT64_MAX;
	int16_t x1159 = -12;
	static int32_t x1160 = -1;
	volatile int32_t t183 = 25756588;

    t183 = (x1157>(x1158*(x1159*x1160)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x1161 = INT16_MIN;
	volatile int8_t x1162 = INT8_MIN;
	int16_t x1163 = -114;
	uint32_t x1164 = UINT32_MAX;
	volatile int32_t t184 = 31045325;

    t184 = (x1161>(x1162*(x1163*x1164)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x1169 = INT32_MIN;
	int32_t x1170 = -5481;
	volatile uint8_t x1171 = UINT8_MAX;
	int64_t x1172 = -1791082039LL;
	int32_t t185 = 15403380;

    t185 = (x1169>(x1170*(x1171*x1172)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint16_t x1173 = UINT16_MAX;
	int8_t x1174 = -12;
	uint8_t x1175 = 21U;
	int16_t x1176 = -63;
	int32_t t186 = -57;

    t186 = (x1173>(x1174*(x1175*x1176)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x1177 = -1;
	static uint64_t x1178 = UINT64_MAX;
	int16_t x1179 = -1;
	volatile int32_t t187 = -5321;

    t187 = (x1177>(x1178*(x1179*x1180)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x1182 = 242551U;
	int8_t x1183 = INT8_MIN;
	uint8_t x1184 = 113U;
	static volatile int32_t t188 = 5;

    t188 = (x1181>(x1182*(x1183*x1184)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x1185 = 22276815LLU;
	int32_t x1186 = -1;
	static int64_t x1187 = INT64_MAX;
	static volatile int8_t x1188 = -1;
	volatile int32_t t189 = -794756650;

    t189 = (x1185>(x1186*(x1187*x1188)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x1189 = 618683994U;
	int8_t x1192 = INT8_MAX;
	int32_t t190 = -1;

    t190 = (x1189>(x1190*(x1191*x1192)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x1193 = 765U;
	int32_t x1194 = 15426304;
	volatile int64_t x1195 = 2759256309LL;
	int16_t x1196 = -1;
	volatile int32_t t191 = 22648;

    t191 = (x1193>(x1194*(x1195*x1196)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x1202 = INT64_MAX;
	volatile int8_t x1203 = -1;
	uint32_t x1204 = UINT32_MAX;
	volatile int32_t t192 = 31;

    t192 = (x1201>(x1202*(x1203*x1204)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x1205 = 31;
	volatile int64_t x1206 = -9078LL;
	volatile int16_t x1207 = INT16_MAX;
	volatile uint16_t x1208 = 129U;
	int32_t t193 = 103312600;

    t193 = (x1205>(x1206*(x1207*x1208)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x1209 = 30178898LL;
	int8_t x1210 = INT8_MAX;
	static int16_t x1211 = INT16_MIN;
	volatile int8_t x1212 = INT8_MIN;
	volatile int32_t t194 = 1855;

    t194 = (x1209>(x1210*(x1211*x1212)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x1213 = INT8_MIN;
	int8_t x1216 = INT8_MAX;
	int32_t t195 = -89;

    t195 = (x1213>(x1214*(x1215*x1216)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x1217 = INT8_MAX;
	int16_t x1218 = 840;
	int16_t x1220 = 1185;
	volatile int32_t t196 = 0;

    t196 = (x1217>(x1218*(x1219*x1220)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x1226 = 2U;
	int8_t x1227 = 54;
	static uint32_t x1228 = UINT32_MAX;
	volatile int32_t t197 = -53;

    t197 = (x1225>(x1226*(x1227*x1228)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x1234 = UINT32_MAX;
	int32_t x1235 = -1;
	static int32_t t198 = -32663;

    t198 = (x1233>(x1234*(x1235*x1236)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint16_t x1237 = UINT16_MAX;
	volatile uint8_t x1238 = 1U;
	volatile uint32_t x1239 = 559338154U;
	static int8_t x1240 = INT8_MAX;
	static int32_t t199 = -28565546;

    t199 = (x1237>(x1238*(x1239*x1240)));

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

