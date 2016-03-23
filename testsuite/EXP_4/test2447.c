
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

static int32_t x3 = INT32_MIN;
uint16_t x4 = UINT16_MAX;
static int32_t x12 = INT32_MIN;
uint16_t x29 = 8U;
volatile int32_t x30 = INT32_MAX;
volatile int8_t x36 = INT8_MAX;
volatile int8_t x54 = -1;
static volatile uint16_t x55 = 2074U;
static volatile uint16_t x68 = 1U;
int64_t x74 = INT64_MAX;
uint8_t x77 = 76U;
static uint16_t x78 = 59U;
static int64_t x80 = -806672LL;
int16_t x83 = -1;
volatile uint32_t t16 = 515943175U;
uint8_t x107 = 62U;
int16_t x121 = 4190;
int32_t x122 = 27;
volatile int16_t x147 = 13209;
volatile int32_t t21 = 9086;
volatile int64_t x150 = INT64_MIN;
int32_t x152 = -1;
int8_t x155 = INT8_MIN;
volatile uint64_t x156 = 3372110751LLU;
static volatile int32_t t23 = 405428634;
int64_t x162 = -47140336190LL;
static int16_t x163 = 29;
int32_t x164 = 1;
uint32_t x172 = 27U;
static volatile int64_t x192 = -1LL;
uint64_t t29 = UINT64_MAX;
volatile int32_t t30 = -143189;
volatile int8_t x229 = 41;
static uint32_t x258 = UINT32_MAX;
uint32_t x259 = 705U;
uint8_t x262 = 11U;
static uint64_t x266 = UINT64_MAX;
int32_t t37 = -7214;
int32_t t38 = -129229;
static int16_t x276 = -1;
int64_t x284 = -204201743942LL;
int16_t x297 = 0;
int32_t x300 = -1;
int32_t x311 = -1;
static int16_t x318 = INT16_MIN;
static uint64_t x319 = 677LLU;
static uint32_t t47 = 564097U;
int64_t x341 = INT64_MAX;
volatile uint8_t x342 = 71U;
uint64_t x344 = UINT64_MAX;
volatile uint16_t x350 = 55U;
int64_t x376 = INT64_MIN;
uint32_t x377 = UINT32_MAX;
volatile int16_t x381 = INT16_MAX;
int64_t x383 = INT64_MIN;
static int32_t t53 = -499332305;
int16_t x386 = INT16_MIN;
volatile int32_t t56 = 45872631;
volatile int64_t x399 = -662952674996614LL;
int32_t x400 = INT32_MIN;
int64_t t57 = 120136LL;
int16_t x401 = INT16_MAX;
static int64_t x403 = INT64_MIN;
uint16_t x420 = UINT16_MAX;
static volatile int64_t x428 = INT64_MIN;
static int32_t t60 = 14;
uint16_t x436 = UINT16_MAX;
static int16_t x442 = INT16_MAX;
uint32_t x443 = 2551359U;
int32_t t63 = 30;
int64_t x447 = -1LL;
int8_t x449 = INT8_MAX;
uint32_t x452 = UINT32_MAX;
int32_t t66 = 0;
uint32_t x462 = 30633U;
int16_t x464 = INT16_MIN;
int32_t x470 = INT32_MAX;
int32_t x471 = -58363;
int32_t x473 = INT32_MAX;
static int32_t t71 = -194485764;
int8_t x488 = -7;
uint8_t x511 = 1U;
int32_t x520 = -828282;
int16_t x528 = 2;
int64_t x532 = -1LL;
int64_t x556 = INT64_MAX;
static uint64_t t80 = 641988033868794LLU;
static uint32_t x570 = 8687334U;
static int16_t x580 = -1;
int8_t x582 = INT8_MAX;
int32_t t83 = 1051405;
int8_t x590 = 16;
volatile int16_t x610 = INT16_MAX;
int32_t x619 = INT32_MIN;
int32_t t86 = -241;
int64_t x623 = INT64_MIN;
volatile int64_t t87 = -10083306192230787LL;
static uint64_t x625 = 1616479820378358LLU;
static uint16_t x634 = 3637U;
uint16_t x635 = 97U;
uint16_t x636 = 3779U;
volatile uint32_t x650 = 256959301U;
int64_t x652 = -1LL;
static volatile uint8_t x671 = 1U;
static volatile int32_t t98 = -95798949;
uint64_t x701 = UINT64_MAX;
int16_t x702 = -1;
volatile int32_t t101 = -2440682;
static uint16_t x717 = 0U;
int32_t x718 = 1;
volatile int64_t x725 = INT64_MAX;
int64_t x735 = -1LL;
static volatile int32_t t106 = 129;
uint32_t x741 = 2785210U;
uint16_t x747 = UINT16_MAX;
int64_t x748 = INT64_MAX;
int32_t t108 = 4;
int16_t x757 = INT16_MAX;
int16_t x759 = 1;
int32_t t109 = -165;
int32_t x764 = 961356903;
int64_t x778 = INT64_MIN;
volatile uint64_t t111 = 3900LLU;
int32_t x781 = 1049426424;
int8_t x782 = INT8_MIN;
int16_t x784 = INT16_MAX;
int16_t x806 = -1;
int32_t x808 = -739;
volatile int32_t t116 = -776;
int32_t x819 = INT32_MAX;
static uint64_t x853 = UINT64_MAX;
static int64_t x855 = INT64_MIN;
uint32_t x858 = UINT32_MAX;
static uint16_t x869 = 7U;
int64_t x871 = INT64_MIN;
static int64_t x874 = INT64_MIN;
int64_t x878 = INT64_MIN;
int64_t x880 = INT64_MIN;
volatile uint32_t x881 = 32469U;
uint64_t x894 = UINT64_MAX;
uint32_t x896 = 21557U;
int32_t x899 = INT32_MAX;
int8_t x902 = -1;
int32_t x908 = INT32_MIN;
uint16_t x918 = 27076U;
uint64_t t133 = 37837LLU;
int8_t x922 = INT8_MIN;
static uint8_t x930 = 64U;
volatile int64_t x934 = -1LL;
int8_t x940 = INT8_MIN;
static volatile int32_t t137 = 1818;
int64_t x948 = INT64_MAX;
volatile int32_t x951 = -1;
int32_t x954 = -1;
int16_t x955 = -1;
volatile int32_t t140 = -290;
uint32_t t142 = 4U;
static uint16_t x981 = UINT16_MAX;
int16_t x985 = INT16_MAX;
int8_t x997 = INT8_MAX;
volatile int32_t x1020 = -499;
volatile uint64_t t152 = 6128328476LLU;
volatile uint8_t x1026 = 4U;
static uint16_t x1028 = 37U;
volatile int32_t t153 = -158222988;
static volatile int16_t x1032 = -33;
int16_t x1034 = -16;
volatile int32_t t155 = 14794;
int8_t x1040 = 22;
uint64_t t156 = 1602LLU;
volatile int32_t t157 = -7074;
static uint32_t x1067 = 3U;
uint8_t x1077 = 0U;
uint16_t x1078 = 69U;
volatile int8_t x1080 = INT8_MIN;
static volatile int32_t t162 = 151745;
static volatile int16_t x1090 = INT16_MAX;
uint8_t x1105 = UINT8_MAX;
volatile int64_t x1108 = INT64_MIN;
volatile int16_t x1134 = 242;
uint64_t x1150 = 13369969114974468LLU;
int32_t t171 = -159171641;
volatile uint64_t x1161 = UINT64_MAX;
int32_t x1162 = INT32_MIN;
static volatile uint64_t t173 = 7908626339066320LLU;
int32_t t174 = -1710;
int16_t x1195 = INT16_MIN;
uint32_t x1209 = 8U;
int64_t t178 = 6907LL;
volatile uint16_t x1237 = UINT16_MAX;
static volatile int16_t x1247 = 0;
static volatile int8_t x1254 = INT8_MIN;
static int64_t x1258 = 2408061745604777LL;
uint16_t x1266 = 2604U;
volatile int8_t x1271 = 0;
uint8_t x1273 = 0U;
static int16_t x1276 = INT16_MAX;
int32_t x1280 = INT32_MIN;
int32_t t188 = 11318031;
uint64_t x1281 = UINT64_MAX;
uint16_t x1285 = 4U;
int64_t x1287 = -1LL;
int32_t x1290 = -1;
int8_t x1291 = INT8_MAX;
uint64_t x1292 = 142LLU;
int32_t t191 = -1474;
int8_t x1311 = -2;
int16_t x1320 = INT16_MIN;
volatile int8_t x1324 = -1;
uint64_t t196 = 52879101367LLU;
volatile int32_t t197 = -550896132;
uint32_t x1340 = UINT32_MAX;


void f0(void) {
    	int64_t x1 = 3LL;
	static volatile int64_t x2 = -6388397065563LL;
	volatile int64_t t0 = -1689956270LL;

    t0 = (x1>>(x2!=(x3|x4)));

    if (t0 != 1LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x9 = INT64_MAX;
	volatile uint16_t x10 = 10892U;
	int32_t x11 = 33061;
	int64_t t1 = 3396450363509LL;

    t1 = (x9>>(x10!=(x11|x12)));

    if (t1 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint64_t x17 = 8400196862LLU;
	uint64_t x18 = UINT64_MAX;
	int64_t x19 = INT64_MIN;
	int16_t x20 = 126;
	volatile uint64_t t2 = 8527082248565859LLU;

    t2 = (x17>>(x18!=(x19|x20)));

    if (t2 != 4200098431LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x21 = 0;
	volatile uint32_t x22 = 299949U;
	static int16_t x23 = 1894;
	uint8_t x24 = 26U;
	volatile int32_t t3 = 35469;

    t3 = (x21>>(x22!=(x23|x24)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x31 = INT16_MAX;
	volatile uint64_t x32 = UINT64_MAX;
	volatile int32_t t4 = -30468;

    t4 = (x29>>(x30!=(x31|x32)));

    if (t4 != 4) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x33 = UINT32_MAX;
	static int8_t x34 = 1;
	int8_t x35 = INT8_MIN;
	volatile uint32_t t5 = 1U;

    t5 = (x33>>(x34!=(x35|x36)));

    if (t5 != 2147483647U) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x53 = 13597679197181LLU;
	int64_t x56 = 2LL;
	volatile uint64_t t6 = 4184050LLU;

    t6 = (x53>>(x54!=(x55|x56)));

    if (t6 != 6798839598590LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x57 = 11;
	static volatile int8_t x58 = INT8_MIN;
	int64_t x59 = INT64_MIN;
	volatile int64_t x60 = INT64_MAX;
	int32_t t7 = 355688;

    t7 = (x57>>(x58!=(x59|x60)));

    if (t7 != 5) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x61 = UINT16_MAX;
	int16_t x62 = INT16_MIN;
	int16_t x63 = -765;
	int64_t x64 = INT64_MIN;
	int32_t t8 = 13;

    t8 = (x61>>(x62!=(x63|x64)));

    if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x65 = INT16_MAX;
	int32_t x66 = 401039;
	volatile uint16_t x67 = UINT16_MAX;
	volatile int32_t t9 = -2094;

    t9 = (x65>>(x66!=(x67|x68)));

    if (t9 != 16383) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x69 = UINT8_MAX;
	int8_t x70 = INT8_MAX;
	uint32_t x71 = UINT32_MAX;
	int64_t x72 = INT64_MIN;
	volatile int32_t t10 = -986587062;

    t10 = (x69>>(x70!=(x71|x72)));

    if (t10 != 127) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint32_t x73 = UINT32_MAX;
	int16_t x75 = 79;
	int8_t x76 = INT8_MIN;
	static uint32_t t11 = 3109660U;

    t11 = (x73>>(x74!=(x75|x76)));

    if (t11 != 2147483647U) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x79 = 3405;
	int32_t t12 = -67657;

    t12 = (x77>>(x78!=(x79|x80)));

    if (t12 != 38) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x81 = INT16_MAX;
	static uint16_t x82 = UINT16_MAX;
	uint64_t x84 = 218266973LLU;
	static int32_t t13 = 50293;

    t13 = (x81>>(x82!=(x83|x84)));

    if (t13 != 16383) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x85 = INT32_MAX;
	int16_t x86 = INT16_MIN;
	volatile uint8_t x87 = 1U;
	static volatile uint64_t x88 = 1247501637581952LLU;
	int32_t t14 = -7642791;

    t14 = (x85>>(x86!=(x87|x88)));

    if (t14 != 1073741823) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x97 = 0U;
	int16_t x98 = INT16_MAX;
	int8_t x99 = INT8_MAX;
	volatile int8_t x100 = INT8_MIN;
	static int32_t t15 = -51468226;

    t15 = (x97>>(x98!=(x99|x100)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint32_t x101 = UINT32_MAX;
	uint8_t x102 = UINT8_MAX;
	uint8_t x103 = 104U;
	int32_t x104 = -1;

    t16 = (x101>>(x102!=(x103|x104)));

    if (t16 != 2147483647U) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x105 = 1U;
	uint64_t x106 = UINT64_MAX;
	volatile int16_t x108 = -1604;
	int32_t t17 = 0;

    t17 = (x105>>(x106!=(x107|x108)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x117 = INT32_MAX;
	int16_t x118 = -1047;
	int8_t x119 = -1;
	static volatile int32_t x120 = INT32_MIN;
	int32_t t18 = -750287044;

    t18 = (x117>>(x118!=(x119|x120)));

    if (t18 != 1073741823) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint16_t x123 = UINT16_MAX;
	uint32_t x124 = 846099U;
	int32_t t19 = 23419658;

    t19 = (x121>>(x122!=(x123|x124)));

    if (t19 != 2095) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint16_t x137 = UINT16_MAX;
	uint32_t x138 = 9U;
	uint32_t x139 = 579279U;
	static int16_t x140 = -1;
	volatile int32_t t20 = -37926358;

    t20 = (x137>>(x138!=(x139|x140)));

    if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile uint16_t x145 = 963U;
	uint8_t x146 = 20U;
	int32_t x148 = -37769;

    t21 = (x145>>(x146!=(x147|x148)));

    if (t21 != 481) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x149 = UINT64_MAX;
	int16_t x151 = 19;
	uint64_t t22 = 1163760564039LLU;

    t22 = (x149>>(x150!=(x151|x152)));

    if (t22 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x153 = INT8_MAX;
	volatile int32_t x154 = -1;

    t23 = (x153>>(x154!=(x155|x156)));

    if (t23 != 63) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x157 = 14347;
	volatile uint64_t x158 = UINT64_MAX;
	volatile uint32_t x159 = 237U;
	int32_t x160 = INT32_MIN;
	int32_t t24 = -19;

    t24 = (x157>>(x158!=(x159|x160)));

    if (t24 != 7173) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x161 = INT16_MAX;
	volatile int32_t t25 = 179;

    t25 = (x161>>(x162!=(x163|x164)));

    if (t25 != 16383) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x165 = INT16_MAX;
	int16_t x166 = -3;
	static int16_t x167 = INT16_MAX;
	int16_t x168 = 834;
	static volatile int32_t t26 = 6;

    t26 = (x165>>(x166!=(x167|x168)));

    if (t26 != 16383) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x169 = UINT16_MAX;
	int8_t x170 = -21;
	int8_t x171 = 0;
	volatile int32_t t27 = 225337909;

    t27 = (x169>>(x170!=(x171|x172)));

    if (t27 != 32767) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x189 = 1;
	int8_t x190 = INT8_MAX;
	int32_t x191 = -2;
	int32_t t28 = 386698;

    t28 = (x189>>(x190!=(x191|x192)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x197 = UINT64_MAX;
	int8_t x198 = -1;
	volatile uint16_t x199 = UINT16_MAX;
	int32_t x200 = -1;

    t29 = (x197>>(x198!=(x199|x200)));

    if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x201 = 2;
	int64_t x202 = INT64_MAX;
	volatile int64_t x203 = INT64_MIN;
	int64_t x204 = 217993LL;

    t30 = (x201>>(x202!=(x203|x204)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x213 = UINT32_MAX;
	volatile uint16_t x214 = 6710U;
	uint16_t x215 = 1941U;
	volatile int64_t x216 = INT64_MIN;
	uint32_t t31 = 3U;

    t31 = (x213>>(x214!=(x215|x216)));

    if (t31 != 2147483647U) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x230 = -1;
	int64_t x231 = 1530105608568LL;
	int16_t x232 = INT16_MIN;
	volatile int32_t t32 = -160262295;

    t32 = (x229>>(x230!=(x231|x232)));

    if (t32 != 20) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint16_t x233 = 1U;
	int64_t x234 = INT64_MAX;
	static int64_t x235 = INT64_MIN;
	int8_t x236 = INT8_MIN;
	volatile int32_t t33 = 31;

    t33 = (x233>>(x234!=(x235|x236)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint32_t x241 = 3010U;
	volatile uint32_t x242 = UINT32_MAX;
	int8_t x243 = INT8_MIN;
	uint16_t x244 = 1U;
	volatile uint32_t t34 = 252917U;

    t34 = (x241>>(x242!=(x243|x244)));

    if (t34 != 1505U) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int64_t x257 = INT64_MAX;
	uint64_t x260 = 136317290638LLU;
	int64_t t35 = -544420323LL;

    t35 = (x257>>(x258!=(x259|x260)));

    if (t35 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint8_t x261 = 0U;
	int64_t x263 = -1LL;
	static uint8_t x264 = UINT8_MAX;
	volatile int32_t t36 = -1074697;

    t36 = (x261>>(x262!=(x263|x264)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x265 = INT16_MAX;
	int8_t x267 = -1;
	static uint8_t x268 = 51U;

    t37 = (x265>>(x266!=(x267|x268)));

    if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x269 = 1001;
	volatile uint64_t x270 = UINT64_MAX;
	int8_t x271 = INT8_MIN;
	static uint32_t x272 = UINT32_MAX;

    t38 = (x269>>(x270!=(x271|x272)));

    if (t38 != 500) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x273 = INT16_MAX;
	volatile uint16_t x274 = 515U;
	int64_t x275 = INT64_MAX;
	int32_t t39 = -61839604;

    t39 = (x273>>(x274!=(x275|x276)));

    if (t39 != 16383) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x277 = INT64_MAX;
	uint16_t x278 = UINT16_MAX;
	static volatile int64_t x279 = INT64_MIN;
	uint16_t x280 = 0U;
	volatile int64_t t40 = -5922475777836LL;

    t40 = (x277>>(x278!=(x279|x280)));

    if (t40 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x281 = 10LLU;
	static int32_t x282 = INT32_MIN;
	volatile int64_t x283 = INT64_MIN;
	volatile uint64_t t41 = 255LLU;

    t41 = (x281>>(x282!=(x283|x284)));

    if (t41 != 5LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x289 = 6;
	static int16_t x290 = INT16_MAX;
	uint16_t x291 = 125U;
	uint32_t x292 = UINT32_MAX;
	static volatile int32_t t42 = -30310;

    t42 = (x289>>(x290!=(x291|x292)));

    if (t42 != 3) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x298 = 3U;
	static int8_t x299 = -15;
	volatile int32_t t43 = 777533380;

    t43 = (x297>>(x298!=(x299|x300)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x301 = INT32_MAX;
	volatile int64_t x302 = -1LL;
	static int32_t x303 = INT32_MAX;
	uint64_t x304 = UINT64_MAX;
	static int32_t t44 = INT32_MAX;

    t44 = (x301>>(x302!=(x303|x304)));

    if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint16_t x305 = 7U;
	int8_t x306 = 28;
	int8_t x307 = INT8_MIN;
	volatile int32_t x308 = 11;
	static int32_t t45 = -1;

    t45 = (x305>>(x306!=(x307|x308)));

    if (t45 != 3) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x309 = INT64_MAX;
	int8_t x310 = -1;
	volatile uint8_t x312 = 1U;
	volatile int64_t t46 = INT64_MAX;

    t46 = (x309>>(x310!=(x311|x312)));

    if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint32_t x317 = UINT32_MAX;
	int64_t x320 = -1LL;

    t47 = (x317>>(x318!=(x319|x320)));

    if (t47 != 2147483647U) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x329 = INT16_MAX;
	uint16_t x330 = UINT16_MAX;
	static uint32_t x331 = UINT32_MAX;
	uint32_t x332 = 137U;
	static volatile int32_t t48 = 167012;

    t48 = (x329>>(x330!=(x331|x332)));

    if (t48 != 16383) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint64_t x343 = 5591572370144844972LLU;
	int64_t t49 = -396102LL;

    t49 = (x341>>(x342!=(x343|x344)));

    if (t49 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint16_t x349 = UINT16_MAX;
	volatile int32_t x351 = -4;
	volatile int32_t x352 = -451;
	int32_t t50 = -1367;

    t50 = (x349>>(x350!=(x351|x352)));

    if (t50 != 32767) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x373 = UINT64_MAX;
	int8_t x374 = -26;
	static int32_t x375 = 30626;
	volatile uint64_t t51 = 65136396748LLU;

    t51 = (x373>>(x374!=(x375|x376)));

    if (t51 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x378 = INT64_MIN;
	uint32_t x379 = 7107U;
	static int16_t x380 = -3;
	uint32_t t52 = 1295222U;

    t52 = (x377>>(x378!=(x379|x380)));

    if (t52 != 2147483647U) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x382 = INT16_MIN;
	int64_t x384 = 677216923402602580LL;

    t53 = (x381>>(x382!=(x383|x384)));

    if (t53 != 16383) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x385 = 1503958180LLU;
	int16_t x387 = -1;
	int64_t x388 = INT64_MAX;
	uint64_t t54 = 124LLU;

    t54 = (x385>>(x386!=(x387|x388)));

    if (t54 != 751979090LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x389 = 15U;
	static int64_t x390 = 908845LL;
	int16_t x391 = INT16_MIN;
	int8_t x392 = -17;
	static volatile uint32_t t55 = 51254492U;

    t55 = (x389>>(x390!=(x391|x392)));

    if (t55 != 7U) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x393 = UINT8_MAX;
	int64_t x394 = INT64_MIN;
	volatile int64_t x395 = INT64_MIN;
	static volatile int32_t x396 = 3;

    t56 = (x393>>(x394!=(x395|x396)));

    if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x397 = INT64_MAX;
	int16_t x398 = 10;

    t57 = (x397>>(x398!=(x399|x400)));

    if (t57 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x402 = -91;
	uint8_t x404 = UINT8_MAX;
	volatile int32_t t58 = -1163783;

    t58 = (x401>>(x402!=(x403|x404)));

    if (t58 != 16383) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x417 = UINT32_MAX;
	volatile int32_t x418 = 135217809;
	int16_t x419 = -3472;
	volatile uint32_t t59 = 2568286U;

    t59 = (x417>>(x418!=(x419|x420)));

    if (t59 != 2147483647U) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x425 = INT32_MAX;
	int64_t x426 = INT64_MIN;
	int8_t x427 = INT8_MIN;

    t60 = (x425>>(x426!=(x427|x428)));

    if (t60 != 1073741823) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint8_t x433 = 1U;
	int16_t x434 = INT16_MIN;
	int32_t x435 = INT32_MIN;
	volatile int32_t t61 = 12233581;

    t61 = (x433>>(x434!=(x435|x436)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x437 = 6739;
	static int16_t x438 = 200;
	static int32_t x439 = -199996;
	static int32_t x440 = INT32_MAX;
	int32_t t62 = -105375;

    t62 = (x437>>(x438!=(x439|x440)));

    if (t62 != 3369) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x441 = 0U;
	uint32_t x444 = 1264469726U;

    t63 = (x441>>(x442!=(x443|x444)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x445 = INT32_MAX;
	uint8_t x446 = 0U;
	uint8_t x448 = 5U;
	volatile int32_t t64 = -31776;

    t64 = (x445>>(x446!=(x447|x448)));

    if (t64 != 1073741823) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x450 = 144593213303581442LLU;
	static uint64_t x451 = UINT64_MAX;
	int32_t t65 = 33;

    t65 = (x449>>(x450!=(x451|x452)));

    if (t65 != 63) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x453 = 15;
	static uint16_t x454 = UINT16_MAX;
	static int8_t x455 = -5;
	static uint16_t x456 = 0U;

    t66 = (x453>>(x454!=(x455|x456)));

    if (t66 != 7) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x461 = INT16_MAX;
	static int64_t x463 = 119137379034LL;
	int32_t t67 = 42755;

    t67 = (x461>>(x462!=(x463|x464)));

    if (t67 != 16383) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x469 = 166;
	static uint32_t x472 = 6343U;
	int32_t t68 = -1;

    t68 = (x469>>(x470!=(x471|x472)));

    if (t68 != 83) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x474 = -1;
	int8_t x475 = INT8_MIN;
	static uint64_t x476 = 1052147180668728633LLU;
	static volatile int32_t t69 = -18;

    t69 = (x473>>(x474!=(x475|x476)));

    if (t69 != 1073741823) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint8_t x477 = 19U;
	uint32_t x478 = UINT32_MAX;
	int16_t x479 = INT16_MIN;
	volatile uint64_t x480 = 1150979174665440LLU;
	volatile int32_t t70 = -3695;

    t70 = (x477>>(x478!=(x479|x480)));

    if (t70 != 9) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x481 = 13U;
	volatile int32_t x482 = 4;
	int32_t x483 = INT32_MAX;
	int32_t x484 = INT32_MIN;

    t71 = (x481>>(x482!=(x483|x484)));

    if (t71 != 6) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x485 = INT16_MAX;
	uint8_t x486 = UINT8_MAX;
	volatile int16_t x487 = 0;
	volatile int32_t t72 = -1;

    t72 = (x485>>(x486!=(x487|x488)));

    if (t72 != 16383) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x497 = 8U;
	uint32_t x498 = UINT32_MAX;
	uint8_t x499 = 60U;
	int8_t x500 = INT8_MIN;
	int32_t t73 = -961837615;

    t73 = (x497>>(x498!=(x499|x500)));

    if (t73 != 4) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x505 = UINT64_MAX;
	static int16_t x506 = INT16_MAX;
	int8_t x507 = INT8_MIN;
	int16_t x508 = 34;
	uint64_t t74 = 45308564LLU;

    t74 = (x505>>(x506!=(x507|x508)));

    if (t74 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x509 = UINT16_MAX;
	int32_t x510 = INT32_MIN;
	static uint8_t x512 = 48U;
	int32_t t75 = -268038470;

    t75 = (x509>>(x510!=(x511|x512)));

    if (t75 != 32767) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint16_t x517 = UINT16_MAX;
	volatile int8_t x518 = INT8_MIN;
	int64_t x519 = -3499738LL;
	static int32_t t76 = 1;

    t76 = (x517>>(x518!=(x519|x520)));

    if (t76 != 32767) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x525 = INT16_MAX;
	int16_t x526 = 1;
	uint64_t x527 = 24380611344LLU;
	volatile int32_t t77 = -29;

    t77 = (x525>>(x526!=(x527|x528)));

    if (t77 != 16383) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x529 = 724362210532441LL;
	int16_t x530 = INT16_MIN;
	static volatile uint16_t x531 = 1965U;
	static volatile int64_t t78 = 831202LL;

    t78 = (x529>>(x530!=(x531|x532)));

    if (t78 != 362181105266220LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x549 = 2605862278LLU;
	int16_t x550 = -1;
	uint32_t x551 = UINT32_MAX;
	int32_t x552 = 125;
	volatile uint64_t t79 = 1457550LLU;

    t79 = (x549>>(x550!=(x551|x552)));

    if (t79 != 2605862278LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x553 = 135287005434LLU;
	uint32_t x554 = UINT32_MAX;
	int8_t x555 = 1;

    t80 = (x553>>(x554!=(x555|x556)));

    if (t80 != 67643502717LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint32_t x569 = UINT32_MAX;
	static int64_t x571 = -12419LL;
	volatile int32_t x572 = INT32_MIN;
	static volatile uint32_t t81 = 52U;

    t81 = (x569>>(x570!=(x571|x572)));

    if (t81 != 2147483647U) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x577 = UINT64_MAX;
	int64_t x578 = INT64_MIN;
	static uint64_t x579 = UINT64_MAX;
	uint64_t t82 = 3422467590LLU;

    t82 = (x577>>(x578!=(x579|x580)));

    if (t82 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x581 = 270;
	uint32_t x583 = UINT32_MAX;
	uint8_t x584 = 13U;

    t83 = (x581>>(x582!=(x583|x584)));

    if (t83 != 135) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x589 = 154;
	volatile uint64_t x591 = 33900074LLU;
	int16_t x592 = -1;
	static volatile int32_t t84 = -20348;

    t84 = (x589>>(x590!=(x591|x592)));

    if (t84 != 77) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint8_t x609 = UINT8_MAX;
	int16_t x611 = INT16_MIN;
	uint32_t x612 = 54U;
	int32_t t85 = 658633;

    t85 = (x609>>(x610!=(x611|x612)));

    if (t85 != 127) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile uint8_t x617 = 10U;
	int8_t x618 = INT8_MIN;
	volatile uint32_t x620 = 2047933U;

    t86 = (x617>>(x618!=(x619|x620)));

    if (t86 != 5) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x621 = INT64_MAX;
	uint16_t x622 = UINT16_MAX;
	int64_t x624 = INT64_MIN;

    t87 = (x621>>(x622!=(x623|x624)));

    if (t87 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x626 = INT64_MIN;
	int16_t x627 = 2705;
	volatile int64_t x628 = INT64_MIN;
	static volatile uint64_t t88 = 586143LLU;

    t88 = (x625>>(x626!=(x627|x628)));

    if (t88 != 808239910189179LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x633 = UINT64_MAX;
	volatile uint64_t t89 = 148701079LLU;

    t89 = (x633>>(x634!=(x635|x636)));

    if (t89 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x641 = 94;
	uint8_t x642 = 4U;
	volatile int64_t x643 = -1LL;
	volatile int32_t x644 = INT32_MIN;
	int32_t t90 = 24104;

    t90 = (x641>>(x642!=(x643|x644)));

    if (t90 != 47) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x645 = 98486566170315682LLU;
	volatile uint8_t x646 = UINT8_MAX;
	static int8_t x647 = INT8_MIN;
	uint32_t x648 = 414510934U;
	uint64_t t91 = 274714355301568831LLU;

    t91 = (x645>>(x646!=(x647|x648)));

    if (t91 != 49243283085157841LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x649 = INT8_MAX;
	static int16_t x651 = INT16_MIN;
	volatile int32_t t92 = -3;

    t92 = (x649>>(x650!=(x651|x652)));

    if (t92 != 63) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x653 = 11565U;
	static int32_t x654 = 53738177;
	int64_t x655 = -1950721195LL;
	uint64_t x656 = 8694484692354651LLU;
	static int32_t t93 = 0;

    t93 = (x653>>(x654!=(x655|x656)));

    if (t93 != 5782) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x657 = INT8_MAX;
	int16_t x658 = -1;
	int8_t x659 = -1;
	volatile int32_t x660 = -1;
	volatile int32_t t94 = 820133;

    t94 = (x657>>(x658!=(x659|x660)));

    if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint32_t x661 = UINT32_MAX;
	int32_t x662 = 196343;
	static volatile int64_t x663 = -107616LL;
	volatile uint64_t x664 = 0LLU;
	volatile uint32_t t95 = 35U;

    t95 = (x661>>(x662!=(x663|x664)));

    if (t95 != 2147483647U) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x669 = 2;
	volatile uint32_t x670 = 1997906U;
	volatile int16_t x672 = -1;
	volatile int32_t t96 = -810814120;

    t96 = (x669>>(x670!=(x671|x672)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint32_t x677 = 4303109U;
	int64_t x678 = INT64_MAX;
	uint8_t x679 = 2U;
	static int8_t x680 = -1;
	uint32_t t97 = 7956853U;

    t97 = (x677>>(x678!=(x679|x680)));

    if (t97 != 2151554U) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x681 = 0;
	uint64_t x682 = UINT64_MAX;
	int8_t x683 = INT8_MAX;
	int64_t x684 = -1800LL;

    t98 = (x681>>(x682!=(x683|x684)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x685 = 1836U;
	static int32_t x686 = 3054;
	static uint32_t x687 = 109289U;
	uint32_t x688 = UINT32_MAX;
	int32_t t99 = -9;

    t99 = (x685>>(x686!=(x687|x688)));

    if (t99 != 918) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x703 = UINT16_MAX;
	static int32_t x704 = INT32_MAX;
	static volatile uint64_t t100 = 208985LLU;

    t100 = (x701>>(x702!=(x703|x704)));

    if (t100 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint8_t x705 = 1U;
	static int16_t x706 = INT16_MIN;
	uint8_t x707 = 0U;
	static uint8_t x708 = 2U;

    t101 = (x705>>(x706!=(x707|x708)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x709 = 767245LL;
	volatile int8_t x710 = INT8_MIN;
	static uint64_t x711 = 3LLU;
	int32_t x712 = -6378596;
	volatile int64_t t102 = -4584754066314509063LL;

    t102 = (x709>>(x710!=(x711|x712)));

    if (t102 != 383622LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x719 = INT8_MIN;
	uint32_t x720 = 476692U;
	volatile int32_t t103 = 9;

    t103 = (x717>>(x718!=(x719|x720)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x726 = INT8_MAX;
	int64_t x727 = INT64_MAX;
	int64_t x728 = INT64_MIN;
	static volatile int64_t t104 = -1356LL;

    t104 = (x725>>(x726!=(x727|x728)));

    if (t104 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x729 = UINT16_MAX;
	int16_t x730 = INT16_MIN;
	volatile uint16_t x731 = 3464U;
	uint32_t x732 = 670U;
	volatile int32_t t105 = 312047;

    t105 = (x729>>(x730!=(x731|x732)));

    if (t105 != 32767) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x733 = INT16_MAX;
	int16_t x734 = 497;
	volatile int16_t x736 = -12;

    t106 = (x733>>(x734!=(x735|x736)));

    if (t106 != 16383) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x742 = 10353U;
	int64_t x743 = INT64_MIN;
	volatile int64_t x744 = 1293872071LL;
	volatile uint32_t t107 = 743U;

    t107 = (x741>>(x742!=(x743|x744)));

    if (t107 != 1392605U) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x745 = 16U;
	int32_t x746 = 59;

    t108 = (x745>>(x746!=(x747|x748)));

    if (t108 != 8) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x758 = 7U;
	uint16_t x760 = 1U;

    t109 = (x757>>(x758!=(x759|x760)));

    if (t109 != 16383) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x761 = 1U;
	uint64_t x762 = 52452116348LLU;
	int64_t x763 = 243488411838LL;
	volatile int32_t t110 = -8095506;

    t110 = (x761>>(x762!=(x763|x764)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x777 = UINT64_MAX;
	int8_t x779 = INT8_MAX;
	uint16_t x780 = UINT16_MAX;

    t111 = (x777>>(x778!=(x779|x780)));

    if (t111 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x783 = INT8_MIN;
	int32_t t112 = -112374;

    t112 = (x781>>(x782!=(x783|x784)));

    if (t112 != 524713212) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x785 = INT32_MAX;
	uint64_t x786 = UINT64_MAX;
	uint64_t x787 = 5592445910051482LLU;
	int8_t x788 = -1;
	volatile int32_t t113 = INT32_MAX;

    t113 = (x785>>(x786!=(x787|x788)));

    if (t113 != INT32_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint8_t x801 = 1U;
	volatile int16_t x802 = 3730;
	int64_t x803 = INT64_MAX;
	volatile int16_t x804 = -52;
	int32_t t114 = 427437003;

    t114 = (x801>>(x802!=(x803|x804)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x805 = INT64_MAX;
	uint16_t x807 = 3U;
	volatile int64_t t115 = -20LL;

    t115 = (x805>>(x806!=(x807|x808)));

    if (t115 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint8_t x813 = UINT8_MAX;
	int32_t x814 = 4452;
	uint64_t x815 = 126069631LLU;
	uint16_t x816 = 13541U;

    t116 = (x813>>(x814!=(x815|x816)));

    if (t116 != 127) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x817 = 19U;
	static uint16_t x818 = 667U;
	int64_t x820 = -2482LL;
	volatile int32_t t117 = 701738668;

    t117 = (x817>>(x818!=(x819|x820)));

    if (t117 != 9) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x837 = 28007;
	volatile int8_t x838 = INT8_MAX;
	volatile uint32_t x839 = 27655053U;
	int64_t x840 = INT64_MIN;
	volatile int32_t t118 = -220933227;

    t118 = (x837>>(x838!=(x839|x840)));

    if (t118 != 14003) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x841 = INT16_MAX;
	static int8_t x842 = -51;
	int8_t x843 = -1;
	uint16_t x844 = UINT16_MAX;
	int32_t t119 = -128;

    t119 = (x841>>(x842!=(x843|x844)));

    if (t119 != 16383) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x854 = 136224673720735829LLU;
	uint16_t x856 = 1806U;
	uint64_t t120 = 1640962636662264759LLU;

    t120 = (x853>>(x854!=(x855|x856)));

    if (t120 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint16_t x857 = UINT16_MAX;
	uint16_t x859 = 216U;
	static int16_t x860 = 13640;
	volatile int32_t t121 = 2;

    t121 = (x857>>(x858!=(x859|x860)));

    if (t121 != 32767) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x870 = 41;
	uint8_t x872 = 1U;
	int32_t t122 = -10;

    t122 = (x869>>(x870!=(x871|x872)));

    if (t122 != 3) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x873 = 112U;
	static uint64_t x875 = 46090300930LLU;
	static uint16_t x876 = 190U;
	static uint32_t t123 = 32964007U;

    t123 = (x873>>(x874!=(x875|x876)));

    if (t123 != 56U) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x877 = 1;
	volatile uint16_t x879 = 5227U;
	volatile int32_t t124 = 98755447;

    t124 = (x877>>(x878!=(x879|x880)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x882 = -3;
	int32_t x883 = -1;
	int8_t x884 = -27;
	volatile uint32_t t125 = 0U;

    t125 = (x881>>(x882!=(x883|x884)));

    if (t125 != 16234U) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x885 = UINT16_MAX;
	int64_t x886 = -1LL;
	static volatile int16_t x887 = INT16_MIN;
	volatile int64_t x888 = INT64_MAX;
	int32_t t126 = -22;

    t126 = (x885>>(x886!=(x887|x888)));

    if (t126 != 65535) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint8_t x889 = UINT8_MAX;
	uint32_t x890 = 4976542U;
	volatile uint32_t x891 = 283U;
	int32_t x892 = INT32_MIN;
	volatile int32_t t127 = 983643914;

    t127 = (x889>>(x890!=(x891|x892)));

    if (t127 != 127) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x893 = 3927U;
	int8_t x895 = INT8_MIN;
	volatile uint32_t t128 = 0U;

    t128 = (x893>>(x894!=(x895|x896)));

    if (t128 != 1963U) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x897 = 1LLU;
	static int64_t x898 = -49183852172LL;
	int64_t x900 = INT64_MIN;
	static volatile uint64_t t129 = 890071647949935LLU;

    t129 = (x897>>(x898!=(x899|x900)));

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint64_t x901 = 13788LLU;
	int32_t x903 = -1;
	static int8_t x904 = 7;
	volatile uint64_t t130 = 4130107135426LLU;

    t130 = (x901>>(x902!=(x903|x904)));

    if (t130 != 13788LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x905 = INT8_MAX;
	int32_t x906 = 33478550;
	volatile uint32_t x907 = UINT32_MAX;
	volatile int32_t t131 = 11609377;

    t131 = (x905>>(x906!=(x907|x908)));

    if (t131 != 63) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x913 = 0;
	uint8_t x914 = 7U;
	int16_t x915 = 101;
	volatile int32_t x916 = -1;
	int32_t t132 = 1;

    t132 = (x913>>(x914!=(x915|x916)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x917 = 1371735204279990786LLU;
	uint32_t x919 = 972723370U;
	static uint8_t x920 = 10U;

    t133 = (x917>>(x918!=(x919|x920)));

    if (t133 != 685867602139995393LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x921 = UINT16_MAX;
	int16_t x923 = 1009;
	static int64_t x924 = INT64_MAX;
	int32_t t134 = 5383;

    t134 = (x921>>(x922!=(x923|x924)));

    if (t134 != 32767) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x929 = 0;
	int32_t x931 = 312;
	static uint64_t x932 = 244LLU;
	static int32_t t135 = -79745;

    t135 = (x929>>(x930!=(x931|x932)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x933 = UINT16_MAX;
	int16_t x935 = INT16_MAX;
	int8_t x936 = INT8_MIN;
	volatile int32_t t136 = -24403;

    t136 = (x933>>(x934!=(x935|x936)));

    if (t136 != 65535) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x937 = UINT8_MAX;
	int8_t x938 = INT8_MIN;
	int64_t x939 = INT64_MIN;

    t137 = (x937>>(x938!=(x939|x940)));

    if (t137 != 255) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x945 = 15U;
	static volatile int32_t x946 = INT32_MIN;
	volatile uint64_t x947 = UINT64_MAX;
	volatile uint32_t t138 = 29737213U;

    t138 = (x945>>(x946!=(x947|x948)));

    if (t138 != 7U) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x949 = 2121252U;
	uint32_t x950 = 1U;
	static uint64_t x952 = UINT64_MAX;
	static volatile uint32_t t139 = 8578U;

    t139 = (x949>>(x950!=(x951|x952)));

    if (t139 != 1060626U) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x953 = 218;
	volatile int64_t x956 = 6962LL;

    t140 = (x953>>(x954!=(x955|x956)));

    if (t140 != 218) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x957 = INT16_MAX;
	int32_t x958 = INT32_MAX;
	int32_t x959 = -1;
	uint64_t x960 = 3199423033692890615LLU;
	static int32_t t141 = -110;

    t141 = (x957>>(x958!=(x959|x960)));

    if (t141 != 16383) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x961 = UINT32_MAX;
	int16_t x962 = INT16_MIN;
	int64_t x963 = INT64_MAX;
	int8_t x964 = -1;

    t142 = (x961>>(x962!=(x963|x964)));

    if (t142 != 2147483647U) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint16_t x973 = 28273U;
	uint32_t x974 = 39989U;
	static volatile uint8_t x975 = UINT8_MAX;
	uint8_t x976 = UINT8_MAX;
	static int32_t t143 = -3819392;

    t143 = (x973>>(x974!=(x975|x976)));

    if (t143 != 14136) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x982 = UINT16_MAX;
	int32_t x983 = INT32_MIN;
	int32_t x984 = INT32_MIN;
	static volatile int32_t t144 = -1839;

    t144 = (x981>>(x982!=(x983|x984)));

    if (t144 != 32767) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x986 = INT16_MIN;
	static int64_t x987 = -266227556LL;
	int32_t x988 = INT32_MIN;
	int32_t t145 = 175;

    t145 = (x985>>(x986!=(x987|x988)));

    if (t145 != 16383) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x989 = 0LLU;
	uint16_t x990 = 1U;
	volatile uint64_t x991 = UINT64_MAX;
	uint8_t x992 = UINT8_MAX;
	volatile uint64_t t146 = 1LLU;

    t146 = (x989>>(x990!=(x991|x992)));

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint64_t x993 = 0LLU;
	int8_t x994 = 61;
	uint32_t x995 = UINT32_MAX;
	uint16_t x996 = 2014U;
	volatile uint64_t t147 = 21LLU;

    t147 = (x993>>(x994!=(x995|x996)));

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x998 = INT16_MAX;
	static volatile int16_t x999 = -1;
	int64_t x1000 = INT64_MAX;
	volatile int32_t t148 = 3644884;

    t148 = (x997>>(x998!=(x999|x1000)));

    if (t148 != 63) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x1005 = INT64_MAX;
	volatile int16_t x1006 = 2;
	uint8_t x1007 = 74U;
	int32_t x1008 = INT32_MIN;
	volatile int64_t t149 = 37144LL;

    t149 = (x1005>>(x1006!=(x1007|x1008)));

    if (t149 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x1013 = 144U;
	int64_t x1014 = -1LL;
	int8_t x1015 = INT8_MAX;
	int32_t x1016 = -1;
	volatile int32_t t150 = -6;

    t150 = (x1013>>(x1014!=(x1015|x1016)));

    if (t150 != 144) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x1017 = 14U;
	int8_t x1018 = 1;
	volatile int16_t x1019 = -1;
	volatile int32_t t151 = -16;

    t151 = (x1017>>(x1018!=(x1019|x1020)));

    if (t151 != 7) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x1021 = 970506LLU;
	int64_t x1022 = INT64_MIN;
	uint64_t x1023 = 16729988LLU;
	volatile int32_t x1024 = -1;

    t152 = (x1021>>(x1022!=(x1023|x1024)));

    if (t152 != 485253LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x1025 = 2U;
	static int64_t x1027 = INT64_MIN;

    t153 = (x1025>>(x1026!=(x1027|x1028)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x1029 = 0;
	int64_t x1030 = -17351222LL;
	uint32_t x1031 = UINT32_MAX;
	int32_t t154 = 0;

    t154 = (x1029>>(x1030!=(x1031|x1032)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint16_t x1033 = 18U;
	volatile uint16_t x1035 = 6U;
	uint32_t x1036 = UINT32_MAX;

    t155 = (x1033>>(x1034!=(x1035|x1036)));

    if (t155 != 9) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x1037 = 487782567774812384LLU;
	int64_t x1038 = INT64_MIN;
	volatile uint32_t x1039 = 10594880U;

    t156 = (x1037>>(x1038!=(x1039|x1040)));

    if (t156 != 243891283887406192LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint16_t x1041 = 1205U;
	int64_t x1042 = -1LL;
	volatile int16_t x1043 = 10785;
	static volatile uint8_t x1044 = 48U;

    t157 = (x1041>>(x1042!=(x1043|x1044)));

    if (t157 != 602) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x1061 = UINT8_MAX;
	static int64_t x1062 = -416LL;
	static uint16_t x1063 = 1U;
	volatile int32_t x1064 = 5530425;
	int32_t t158 = 58565;

    t158 = (x1061>>(x1062!=(x1063|x1064)));

    if (t158 != 127) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x1065 = 4374176330378002297LLU;
	volatile int8_t x1066 = INT8_MIN;
	int32_t x1068 = INT32_MAX;
	static volatile uint64_t t159 = 481592278726626076LLU;

    t159 = (x1065>>(x1066!=(x1067|x1068)));

    if (t159 != 2187088165189001148LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x1069 = 295;
	static int8_t x1070 = 18;
	int8_t x1071 = -13;
	int8_t x1072 = INT8_MAX;
	volatile int32_t t160 = 1661;

    t160 = (x1069>>(x1070!=(x1071|x1072)));

    if (t160 != 147) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x1079 = INT32_MIN;
	static volatile int32_t t161 = -786347771;

    t161 = (x1077>>(x1078!=(x1079|x1080)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x1081 = UINT8_MAX;
	int32_t x1082 = INT32_MIN;
	int8_t x1083 = INT8_MIN;
	int16_t x1084 = INT16_MAX;

    t162 = (x1081>>(x1082!=(x1083|x1084)));

    if (t162 != 127) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x1085 = 0U;
	volatile int64_t x1086 = -1LL;
	int16_t x1087 = 6;
	volatile uint16_t x1088 = 14710U;
	volatile int32_t t163 = -127;

    t163 = (x1085>>(x1086!=(x1087|x1088)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x1089 = 0U;
	int16_t x1091 = 12985;
	uint8_t x1092 = 53U;
	volatile int32_t t164 = -32995706;

    t164 = (x1089>>(x1090!=(x1091|x1092)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x1101 = 51206U;
	static volatile int32_t x1102 = -1;
	volatile int64_t x1103 = 330510193721318LL;
	uint64_t x1104 = UINT64_MAX;
	volatile uint32_t t165 = 509874891U;

    t165 = (x1101>>(x1102!=(x1103|x1104)));

    if (t165 != 51206U) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x1106 = INT16_MIN;
	int8_t x1107 = INT8_MIN;
	static volatile int32_t t166 = -1175;

    t166 = (x1105>>(x1106!=(x1107|x1108)));

    if (t166 != 127) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x1129 = 134078131U;
	int8_t x1130 = INT8_MIN;
	static uint16_t x1131 = UINT16_MAX;
	static uint8_t x1132 = 6U;
	static uint32_t t167 = 7502444U;

    t167 = (x1129>>(x1130!=(x1131|x1132)));

    if (t167 != 67039065U) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint32_t x1133 = UINT32_MAX;
	uint64_t x1135 = 3580775LLU;
	uint8_t x1136 = UINT8_MAX;
	static uint32_t t168 = 509U;

    t168 = (x1133>>(x1134!=(x1135|x1136)));

    if (t168 != 2147483647U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x1137 = UINT8_MAX;
	int16_t x1138 = INT16_MIN;
	volatile int64_t x1139 = -2144LL;
	static int16_t x1140 = -101;
	int32_t t169 = -295;

    t169 = (x1137>>(x1138!=(x1139|x1140)));

    if (t169 != 127) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x1141 = 3901468311071121794LL;
	int16_t x1142 = INT16_MAX;
	int64_t x1143 = INT64_MIN;
	int32_t x1144 = -107128;
	int64_t t170 = 77133922163561762LL;

    t170 = (x1141>>(x1142!=(x1143|x1144)));

    if (t170 != 1950734155535560897LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint8_t x1149 = 18U;
	volatile int8_t x1151 = INT8_MAX;
	static uint8_t x1152 = 34U;

    t171 = (x1149>>(x1150!=(x1151|x1152)));

    if (t171 != 9) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x1157 = UINT16_MAX;
	volatile uint8_t x1158 = UINT8_MAX;
	int32_t x1159 = INT32_MAX;
	volatile int32_t x1160 = 244337414;
	volatile int32_t t172 = -10724;

    t172 = (x1157>>(x1158!=(x1159|x1160)));

    if (t172 != 32767) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x1163 = 3338;
	static uint64_t x1164 = UINT64_MAX;

    t173 = (x1161>>(x1162!=(x1163|x1164)));

    if (t173 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int16_t x1169 = 0;
	int8_t x1170 = 0;
	int64_t x1171 = -35LL;
	int64_t x1172 = INT64_MIN;

    t174 = (x1169>>(x1170!=(x1171|x1172)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile uint8_t x1193 = 10U;
	uint32_t x1194 = UINT32_MAX;
	uint64_t x1196 = 2482295546729LLU;
	static volatile int32_t t175 = -596;

    t175 = (x1193>>(x1194!=(x1195|x1196)));

    if (t175 != 5) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x1210 = 14U;
	uint8_t x1211 = 72U;
	volatile int64_t x1212 = -495219646922391469LL;
	volatile uint32_t t176 = 1727330U;

    t176 = (x1209>>(x1210!=(x1211|x1212)));

    if (t176 != 4U) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint16_t x1221 = UINT16_MAX;
	int16_t x1222 = INT16_MIN;
	int32_t x1223 = -7004;
	int32_t x1224 = 14678732;
	static int32_t t177 = 0;

    t177 = (x1221>>(x1222!=(x1223|x1224)));

    if (t177 != 32767) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x1225 = INT64_MAX;
	static int64_t x1226 = 5892308913LL;
	int32_t x1227 = -1;
	int64_t x1228 = INT64_MIN;

    t178 = (x1225>>(x1226!=(x1227|x1228)));

    if (t178 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x1229 = 38U;
	int32_t x1230 = INT32_MAX;
	int16_t x1231 = INT16_MIN;
	int32_t x1232 = -1;
	volatile int32_t t179 = 64263;

    t179 = (x1229>>(x1230!=(x1231|x1232)));

    if (t179 != 19) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x1238 = INT16_MAX;
	volatile uint64_t x1239 = 197414524958LLU;
	uint32_t x1240 = 1945U;
	static volatile int32_t t180 = -7789249;

    t180 = (x1237>>(x1238!=(x1239|x1240)));

    if (t180 != 32767) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x1241 = INT8_MAX;
	static int64_t x1242 = 2990LL;
	int8_t x1243 = 6;
	static uint32_t x1244 = 110816110U;
	volatile int32_t t181 = -1;

    t181 = (x1241>>(x1242!=(x1243|x1244)));

    if (t181 != 63) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x1245 = INT64_MAX;
	volatile uint32_t x1246 = UINT32_MAX;
	volatile int8_t x1248 = -7;
	static volatile int64_t t182 = -466530392127LL;

    t182 = (x1245>>(x1246!=(x1247|x1248)));

    if (t182 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x1253 = 0LL;
	int64_t x1255 = 24370271432329248LL;
	int64_t x1256 = -17183601847305300LL;
	int64_t t183 = 2601486026625940194LL;

    t183 = (x1253>>(x1254!=(x1255|x1256)));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x1257 = INT64_MAX;
	uint8_t x1259 = 99U;
	int8_t x1260 = 12;
	int64_t t184 = 4794LL;

    t184 = (x1257>>(x1258!=(x1259|x1260)));

    if (t184 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int32_t x1265 = INT32_MAX;
	uint8_t x1267 = UINT8_MAX;
	int64_t x1268 = -1LL;
	volatile int32_t t185 = 31;

    t185 = (x1265>>(x1266!=(x1267|x1268)));

    if (t185 != 1073741823) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x1269 = INT64_MAX;
	int32_t x1270 = 1001660429;
	int16_t x1272 = INT16_MIN;
	volatile int64_t t186 = 224LL;

    t186 = (x1269>>(x1270!=(x1271|x1272)));

    if (t186 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x1274 = INT16_MIN;
	int32_t x1275 = -1;
	volatile int32_t t187 = 7;

    t187 = (x1273>>(x1274!=(x1275|x1276)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x1277 = INT16_MAX;
	static volatile uint64_t x1278 = 264495552546161871LLU;
	static uint64_t x1279 = UINT64_MAX;

    t188 = (x1277>>(x1278!=(x1279|x1280)));

    if (t188 != 16383) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x1282 = -358862019302382584LL;
	uint64_t x1283 = 759194435LLU;
	int32_t x1284 = -28497615;
	uint64_t t189 = 134157876LLU;

    t189 = (x1281>>(x1282!=(x1283|x1284)));

    if (t189 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x1286 = 62U;
	static int8_t x1288 = 1;
	volatile int32_t t190 = -69611;

    t190 = (x1285>>(x1286!=(x1287|x1288)));

    if (t190 != 2) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x1289 = 14799;

    t191 = (x1289>>(x1290!=(x1291|x1292)));

    if (t191 != 7399) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x1293 = 8365U;
	uint64_t x1294 = UINT64_MAX;
	static uint64_t x1295 = 8LLU;
	int32_t x1296 = 839;
	int32_t t192 = 872751911;

    t192 = (x1293>>(x1294!=(x1295|x1296)));

    if (t192 != 4182) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x1301 = 27704U;
	uint64_t x1302 = 37162439LLU;
	int64_t x1303 = INT64_MIN;
	uint16_t x1304 = 21817U;
	uint32_t t193 = 423U;

    t193 = (x1301>>(x1302!=(x1303|x1304)));

    if (t193 != 13852U) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint64_t x1309 = 258048725936062LLU;
	volatile int8_t x1310 = INT8_MIN;
	int32_t x1312 = INT32_MIN;
	uint64_t t194 = 25696673944230735LLU;

    t194 = (x1309>>(x1310!=(x1311|x1312)));

    if (t194 != 129024362968031LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x1317 = 918796814U;
	int8_t x1318 = -1;
	int64_t x1319 = INT64_MAX;
	static uint32_t t195 = 1044833U;

    t195 = (x1317>>(x1318!=(x1319|x1320)));

    if (t195 != 918796814U) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x1321 = 22863702098LLU;
	uint32_t x1322 = 3895U;
	volatile int32_t x1323 = -4217938;

    t196 = (x1321>>(x1322!=(x1323|x1324)));

    if (t196 != 11431851049LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x1329 = UINT8_MAX;
	volatile int32_t x1330 = -42;
	int16_t x1331 = -1;
	int64_t x1332 = -764760769LL;

    t197 = (x1329>>(x1330!=(x1331|x1332)));

    if (t197 != 127) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x1337 = 239722690U;
	int64_t x1338 = INT64_MIN;
	uint32_t x1339 = 8U;
	uint32_t t198 = 1951772U;

    t198 = (x1337>>(x1338!=(x1339|x1340)));

    if (t198 != 119861345U) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint8_t x1341 = UINT8_MAX;
	static uint64_t x1342 = 62LLU;
	uint8_t x1343 = UINT8_MAX;
	int16_t x1344 = INT16_MAX;
	int32_t t199 = -15558;

    t199 = (x1341>>(x1342!=(x1343|x1344)));

    if (t199 != 127) { NG(); } else { ; }
	
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

