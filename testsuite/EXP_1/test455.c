
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

static int32_t t0 = -42;
int16_t x5 = -1;
uint16_t x9 = 0U;
static volatile int32_t t3 = -3110;
int32_t x29 = 1044230383;
int32_t x31 = -49258103;
int32_t x33 = 3;
uint32_t x35 = 5U;
volatile uint16_t x36 = 761U;
volatile int32_t t8 = -105;
static int8_t x53 = 6;
volatile int32_t t10 = -39;
int32_t x63 = -40045548;
volatile int32_t x69 = -5;
int64_t x71 = -30673981LL;
volatile int32_t x85 = -1;
static int64_t x87 = -1LL;
uint32_t x94 = UINT32_MAX;
volatile int32_t t17 = 12296412;
int64_t x97 = 55088380007384810LL;
uint16_t x105 = UINT16_MAX;
int8_t x107 = INT8_MAX;
volatile uint16_t x110 = 930U;
int32_t x112 = 6541;
int32_t t20 = -9782684;
int8_t x114 = -1;
volatile int8_t x116 = INT8_MIN;
uint16_t x117 = 1U;
static int8_t x118 = INT8_MAX;
volatile int16_t x134 = 0;
volatile int8_t x136 = -12;
static volatile int32_t t25 = 43539;
int16_t x149 = INT16_MAX;
static volatile int8_t x153 = INT8_MIN;
int32_t t29 = -238772211;
volatile int64_t x169 = INT64_MAX;
int64_t x191 = INT64_MAX;
int32_t t34 = 62;
uint8_t x195 = 11U;
uint32_t x208 = 13U;
static uint64_t x209 = 11151316435148517LLU;
volatile int8_t x212 = -63;
uint16_t x218 = 427U;
uint8_t x222 = 4U;
int32_t x223 = 22;
volatile int32_t t41 = 332237;
uint64_t x230 = 1LLU;
uint8_t x233 = UINT8_MAX;
uint8_t x238 = 80U;
static uint16_t x242 = UINT16_MAX;
volatile int32_t t46 = -1;
int32_t x254 = 0;
int32_t t47 = 658652311;
int8_t x262 = -1;
int16_t x275 = 105;
volatile int16_t x278 = 2914;
uint32_t x281 = UINT32_MAX;
int16_t x283 = INT16_MIN;
static volatile int32_t t54 = 40;
volatile int32_t x285 = -16;
int16_t x286 = -1;
static int16_t x288 = -83;
volatile int64_t x295 = -1LL;
int8_t x296 = INT8_MIN;
int64_t x297 = -2065428794165LL;
uint32_t x301 = 38U;
int32_t t58 = 78;
int16_t x311 = -12911;
int8_t x313 = INT8_MAX;
static int32_t x316 = INT32_MIN;
int32_t t61 = 225;
int64_t x319 = INT64_MIN;
int16_t x323 = -1;
int32_t x324 = 7;
int16_t x326 = INT16_MIN;
static volatile uint32_t x327 = 109254469U;
static uint8_t x339 = 13U;
static volatile int16_t x345 = 3;
int32_t t68 = -238862;
int32_t t70 = 1;
int32_t t71 = -18;
uint8_t x382 = 62U;
int32_t x405 = 722;
volatile int16_t x406 = INT16_MIN;
int8_t x410 = -1;
volatile uint32_t x415 = 2796834U;
uint32_t x416 = 112101964U;
volatile int32_t t78 = 1376;
int8_t x418 = INT8_MAX;
volatile int8_t x422 = -1;
int16_t x424 = -13;
volatile int32_t t81 = 1;
int32_t x433 = -1;
int8_t x434 = INT8_MIN;
int64_t x435 = -1LL;
uint8_t x445 = 57U;
static volatile int32_t t87 = 0;
uint64_t x463 = 255299LLU;
volatile int16_t x492 = -906;
uint8_t x494 = 21U;
volatile int32_t x509 = 4321;
uint64_t x510 = UINT64_MAX;
static volatile int32_t t94 = -343;
int8_t x546 = INT8_MIN;
int32_t t101 = -148;
int16_t x553 = 15750;
int32_t t103 = 26746697;
int64_t x575 = INT64_MIN;
static int8_t x576 = INT8_MIN;
static uint64_t x577 = UINT64_MAX;
volatile int8_t x579 = INT8_MAX;
int32_t x590 = -1;
volatile uint32_t x594 = UINT32_MAX;
static int64_t x596 = INT64_MIN;
int32_t t110 = -48606897;
int16_t x608 = -1;
int32_t x613 = 7122816;
static uint8_t x614 = 2U;
int16_t x615 = 34;
int8_t x632 = 8;
uint64_t x638 = UINT64_MAX;
static int8_t x648 = INT8_MIN;
volatile int32_t t122 = -319498;
static uint64_t x654 = UINT64_MAX;
volatile int16_t x671 = -1;
static int16_t x686 = INT16_MIN;
int16_t x687 = INT16_MAX;
static int8_t x690 = -1;
int32_t t129 = -46;
static int64_t x716 = -1LL;
int32_t t132 = -10918;
int32_t x717 = -1;
static int8_t x719 = -1;
uint8_t x724 = 2U;
volatile int32_t x741 = -1369233;
uint16_t x744 = 0U;
int16_t x755 = INT16_MAX;
int32_t t140 = 96;
static uint16_t x768 = 7U;
static volatile int64_t x773 = -1LL;
int16_t x774 = INT16_MIN;
static volatile int32_t x775 = INT32_MAX;
volatile int64_t x776 = -1LL;
uint16_t x777 = 17U;
volatile int32_t x779 = INT32_MIN;
int64_t x785 = -1LL;
int8_t x789 = -1;
int64_t x793 = 6435LL;
int64_t x794 = -1LL;
volatile int64_t x796 = INT64_MIN;
int32_t t148 = 271;
static volatile int32_t x803 = 226878;
int8_t x806 = INT8_MIN;
int32_t t150 = 93106540;
volatile uint16_t x814 = UINT16_MAX;
int16_t x818 = INT16_MAX;
int16_t x829 = INT16_MIN;
int8_t x853 = INT8_MIN;
volatile int8_t x859 = INT8_MIN;
static int32_t t159 = 38;
static int32_t x861 = 6;
int32_t x864 = -49924;
volatile int32_t t160 = 459684868;
uint16_t x871 = UINT16_MAX;
volatile int32_t t162 = 3250;
int64_t x891 = INT64_MIN;
volatile int8_t x902 = INT8_MIN;
int16_t x917 = INT16_MIN;
int32_t t169 = -405109;
uint64_t x923 = 4LLU;
int32_t x931 = -1;
volatile int32_t t171 = 1949;
int8_t x947 = INT8_MIN;
int16_t x950 = INT16_MAX;
uint16_t x956 = UINT16_MAX;
static int64_t x961 = 2869877443799572300LL;
int16_t x981 = -10764;
int16_t x994 = INT16_MIN;
volatile int64_t x995 = -1LL;
uint64_t x1004 = UINT64_MAX;
volatile int32_t x1005 = -1;
uint16_t x1008 = 470U;
int32_t x1015 = INT32_MIN;
int32_t x1026 = -176321;
uint8_t x1027 = UINT8_MAX;
volatile int32_t t190 = -46954852;
static uint32_t x1030 = UINT32_MAX;
int32_t t191 = 1;
uint64_t x1040 = UINT64_MAX;
static int32_t x1047 = INT32_MAX;
int64_t x1049 = -1LL;
volatile int32_t t197 = -1;


void f0(void) {
    	static int8_t x1 = -1;
	static int8_t x2 = INT8_MIN;
	int16_t x3 = INT16_MAX;
	int16_t x4 = INT16_MIN;

    t0 = (((x1*x2)%x3)!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x6 = INT8_MIN;
	int64_t x7 = 549281LL;
	volatile uint16_t x8 = 13399U;
	volatile int32_t t1 = 8;

    t1 = (((x5*x6)%x7)!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x10 = INT32_MAX;
	static int64_t x11 = INT64_MIN;
	static int8_t x12 = INT8_MIN;
	int32_t t2 = -130091;

    t2 = (((x9*x10)%x11)!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = -1;
	static uint32_t x14 = 489U;
	static int64_t x15 = INT64_MAX;
	int16_t x16 = -1;

    t3 = (((x13*x14)%x15)!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = -18837889LL;
	int16_t x18 = -1;
	static volatile uint16_t x19 = 4739U;
	int16_t x20 = INT16_MIN;
	int32_t t4 = 2858654;

    t4 = (((x17*x18)%x19)!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint64_t x25 = UINT64_MAX;
	int32_t x26 = INT32_MIN;
	int64_t x27 = 872163630184565763LL;
	int64_t x28 = INT64_MAX;
	volatile int32_t t5 = -187217309;

    t5 = (((x25*x26)%x27)!=x28);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x30 = 8156LL;
	uint8_t x32 = 1U;
	int32_t t6 = 671573405;

    t6 = (((x29*x30)%x31)!=x32);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint32_t x34 = UINT32_MAX;
	int32_t t7 = -1404;

    t7 = (((x33*x34)%x35)!=x36);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x37 = 1LLU;
	int8_t x38 = 2;
	volatile int16_t x39 = -1706;
	int32_t x40 = INT32_MIN;

    t8 = (((x37*x38)%x39)!=x40);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x45 = 1;
	static volatile uint64_t x46 = 0LLU;
	volatile int16_t x47 = 101;
	static volatile int64_t x48 = INT64_MIN;
	int32_t t9 = -841;

    t9 = (((x45*x46)%x47)!=x48);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x54 = 49U;
	static uint16_t x55 = 22353U;
	uint8_t x56 = UINT8_MAX;

    t10 = (((x53*x54)%x55)!=x56);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x61 = -1LL;
	uint32_t x62 = 3266963U;
	uint64_t x64 = 650556LLU;
	volatile int32_t t11 = 11914;

    t11 = (((x61*x62)%x63)!=x64);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x65 = INT8_MIN;
	int8_t x66 = -24;
	volatile int16_t x67 = INT16_MAX;
	volatile int16_t x68 = INT16_MIN;
	static volatile int32_t t12 = -84756;

    t12 = (((x65*x66)%x67)!=x68);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x70 = 327346LLU;
	int16_t x72 = INT16_MAX;
	int32_t t13 = -2457;

    t13 = (((x69*x70)%x71)!=x72);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x73 = 1599;
	int8_t x74 = -1;
	static int8_t x75 = INT8_MIN;
	uint16_t x76 = 3972U;
	volatile int32_t t14 = 142272495;

    t14 = (((x73*x74)%x75)!=x76);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x77 = 156008075;
	volatile uint64_t x78 = 494244LLU;
	int16_t x79 = 3325;
	static int64_t x80 = 170569434LL;
	int32_t t15 = -37572;

    t15 = (((x77*x78)%x79)!=x80);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x86 = INT8_MAX;
	int8_t x88 = INT8_MIN;
	volatile int32_t t16 = 2443;

    t16 = (((x85*x86)%x87)!=x88);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x93 = INT32_MAX;
	uint32_t x95 = UINT32_MAX;
	int64_t x96 = -462213LL;

    t17 = (((x93*x94)%x95)!=x96);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x98 = 3;
	int64_t x99 = -57004064352639479LL;
	volatile uint32_t x100 = 550U;
	volatile int32_t t18 = 45;

    t18 = (((x97*x98)%x99)!=x100);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x106 = UINT64_MAX;
	uint8_t x108 = 5U;
	volatile int32_t t19 = -3544840;

    t19 = (((x105*x106)%x107)!=x108);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x109 = -1;
	static int32_t x111 = INT32_MAX;

    t20 = (((x109*x110)%x111)!=x112);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int32_t x113 = -110;
	int8_t x115 = INT8_MIN;
	volatile int32_t t21 = -2206;

    t21 = (((x113*x114)%x115)!=x116);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x119 = INT16_MIN;
	uint64_t x120 = 1599545LLU;
	static int32_t t22 = 4955;

    t22 = (((x117*x118)%x119)!=x120);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x121 = -1;
	static uint16_t x122 = 26518U;
	volatile int16_t x123 = INT16_MIN;
	volatile int16_t x124 = -1;
	volatile int32_t t23 = -110915505;

    t23 = (((x121*x122)%x123)!=x124);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x125 = INT8_MIN;
	int8_t x126 = 44;
	static int32_t x127 = 184;
	uint32_t x128 = 12218533U;
	volatile int32_t t24 = 101399168;

    t24 = (((x125*x126)%x127)!=x128);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x133 = INT32_MIN;
	int16_t x135 = -1;

    t25 = (((x133*x134)%x135)!=x136);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x137 = 649815915614LL;
	int16_t x138 = -89;
	int16_t x139 = INT16_MAX;
	int8_t x140 = INT8_MAX;
	volatile int32_t t26 = -60927;

    t26 = (((x137*x138)%x139)!=x140);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x145 = UINT64_MAX;
	uint8_t x146 = UINT8_MAX;
	int64_t x147 = INT64_MIN;
	int8_t x148 = 63;
	volatile int32_t t27 = 5;

    t27 = (((x145*x146)%x147)!=x148);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x150 = INT8_MIN;
	static uint16_t x151 = UINT16_MAX;
	int32_t x152 = INT32_MIN;
	int32_t t28 = -42;

    t28 = (((x149*x150)%x151)!=x152);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x154 = -1736;
	static int64_t x155 = 126LL;
	int32_t x156 = 102844786;

    t29 = (((x153*x154)%x155)!=x156);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x157 = 1102281255562636LLU;
	int64_t x158 = INT64_MIN;
	int64_t x159 = INT64_MIN;
	uint32_t x160 = 1U;
	volatile int32_t t30 = -1249707;

    t30 = (((x157*x158)%x159)!=x160);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint8_t x161 = 44U;
	static int32_t x162 = -20716;
	int64_t x163 = INT64_MIN;
	static uint8_t x164 = UINT8_MAX;
	volatile int32_t t31 = 6136215;

    t31 = (((x161*x162)%x163)!=x164);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x170 = -1;
	static int8_t x171 = INT8_MIN;
	uint16_t x172 = UINT16_MAX;
	volatile int32_t t32 = -318;

    t32 = (((x169*x170)%x171)!=x172);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x173 = UINT16_MAX;
	int32_t x174 = -1;
	uint32_t x175 = 251U;
	int8_t x176 = -1;
	int32_t t33 = 1506862;

    t33 = (((x173*x174)%x175)!=x176);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x189 = 941534LL;
	int64_t x190 = -1LL;
	volatile uint8_t x192 = UINT8_MAX;

    t34 = (((x189*x190)%x191)!=x192);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x193 = 14U;
	uint32_t x194 = 37U;
	int8_t x196 = 4;
	int32_t t35 = -37755;

    t35 = (((x193*x194)%x195)!=x196);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x201 = INT16_MIN;
	volatile int8_t x202 = INT8_MAX;
	int32_t x203 = INT32_MAX;
	volatile uint16_t x204 = 12U;
	int32_t t36 = -5;

    t36 = (((x201*x202)%x203)!=x204);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint8_t x205 = 3U;
	int64_t x206 = 33148905LL;
	uint8_t x207 = 108U;
	volatile int32_t t37 = 222;

    t37 = (((x205*x206)%x207)!=x208);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint64_t x210 = 15347794529LLU;
	int8_t x211 = -1;
	static int32_t t38 = 46;

    t38 = (((x209*x210)%x211)!=x212);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x213 = INT64_MAX;
	volatile uint64_t x214 = UINT64_MAX;
	static volatile int16_t x215 = -30;
	volatile uint64_t x216 = 548978714766843517LLU;
	volatile int32_t t39 = -43776928;

    t39 = (((x213*x214)%x215)!=x216);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x217 = INT8_MIN;
	int16_t x219 = -1;
	int16_t x220 = -1;
	int32_t t40 = 4406873;

    t40 = (((x217*x218)%x219)!=x220);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x221 = 1319760530807776814LLU;
	uint64_t x224 = 1LLU;

    t41 = (((x221*x222)%x223)!=x224);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x229 = 5270;
	int32_t x231 = 167878;
	uint16_t x232 = 12U;
	static int32_t t42 = 52;

    t42 = (((x229*x230)%x231)!=x232);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x234 = UINT32_MAX;
	uint8_t x235 = 5U;
	static volatile int16_t x236 = 52;
	volatile int32_t t43 = -1795;

    t43 = (((x233*x234)%x235)!=x236);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x237 = INT16_MIN;
	int8_t x239 = INT8_MAX;
	int8_t x240 = INT8_MIN;
	int32_t t44 = -1;

    t44 = (((x237*x238)%x239)!=x240);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x241 = 57605759545009LLU;
	volatile int64_t x243 = 392082457184893983LL;
	static uint8_t x244 = 1U;
	int32_t t45 = -88797146;

    t45 = (((x241*x242)%x243)!=x244);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x249 = 277873784U;
	int8_t x250 = INT8_MAX;
	int8_t x251 = INT8_MIN;
	volatile int64_t x252 = 13LL;

    t46 = (((x249*x250)%x251)!=x252);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x253 = 12;
	static volatile uint16_t x255 = UINT16_MAX;
	uint8_t x256 = 3U;

    t47 = (((x253*x254)%x255)!=x256);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x257 = -1;
	static volatile int8_t x258 = -6;
	uint8_t x259 = 10U;
	int64_t x260 = INT64_MIN;
	int32_t t48 = 146;

    t48 = (((x257*x258)%x259)!=x260);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x261 = -545;
	uint16_t x263 = UINT16_MAX;
	uint16_t x264 = 1030U;
	volatile int32_t t49 = 3019304;

    t49 = (((x261*x262)%x263)!=x264);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x265 = INT8_MAX;
	int16_t x266 = 1;
	int32_t x267 = INT32_MAX;
	int32_t x268 = -3622411;
	volatile int32_t t50 = -332;

    t50 = (((x265*x266)%x267)!=x268);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x269 = -4;
	volatile int64_t x270 = -1688395377367LL;
	static int32_t x271 = INT32_MIN;
	int16_t x272 = INT16_MAX;
	volatile int32_t t51 = -4;

    t51 = (((x269*x270)%x271)!=x272);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint64_t x273 = UINT64_MAX;
	uint8_t x274 = 3U;
	int64_t x276 = 0LL;
	volatile int32_t t52 = 666485653;

    t52 = (((x273*x274)%x275)!=x276);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x277 = 60U;
	uint16_t x279 = 208U;
	uint64_t x280 = 13259740355847710LLU;
	int32_t t53 = 21;

    t53 = (((x277*x278)%x279)!=x280);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x282 = INT32_MAX;
	volatile int32_t x284 = 1765;

    t54 = (((x281*x282)%x283)!=x284);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x287 = -2;
	volatile int32_t t55 = -358718;

    t55 = (((x285*x286)%x287)!=x288);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x293 = -1;
	int64_t x294 = INT64_MAX;
	static int32_t t56 = 7;

    t56 = (((x293*x294)%x295)!=x296);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x298 = INT8_MIN;
	static int32_t x299 = -1;
	int16_t x300 = -1;
	int32_t t57 = -1;

    t57 = (((x297*x298)%x299)!=x300);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x302 = 89949054360LL;
	uint8_t x303 = 27U;
	volatile int8_t x304 = INT8_MIN;

    t58 = (((x301*x302)%x303)!=x304);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x305 = INT16_MIN;
	uint8_t x306 = UINT8_MAX;
	int8_t x307 = -2;
	int8_t x308 = INT8_MIN;
	volatile int32_t t59 = 0;

    t59 = (((x305*x306)%x307)!=x308);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x309 = 2921143664835LL;
	int16_t x310 = INT16_MAX;
	static uint32_t x312 = UINT32_MAX;
	static volatile int32_t t60 = 2158371;

    t60 = (((x309*x310)%x311)!=x312);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x314 = INT16_MIN;
	int16_t x315 = INT16_MIN;

    t61 = (((x313*x314)%x315)!=x316);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint32_t x317 = 548529526U;
	int32_t x318 = INT32_MAX;
	int32_t x320 = 1;
	int32_t t62 = -68601;

    t62 = (((x317*x318)%x319)!=x320);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x321 = -2069;
	volatile int16_t x322 = 3;
	static volatile int32_t t63 = 1556;

    t63 = (((x321*x322)%x323)!=x324);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x325 = -15109;
	uint32_t x328 = UINT32_MAX;
	volatile int32_t t64 = -6422;

    t64 = (((x325*x326)%x327)!=x328);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x329 = 100149210050LLU;
	static volatile int64_t x330 = INT64_MIN;
	int32_t x331 = -44731320;
	uint64_t x332 = 9068050731946162LLU;
	int32_t t65 = 2024987;

    t65 = (((x329*x330)%x331)!=x332);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int16_t x337 = INT16_MIN;
	static volatile uint8_t x338 = 4U;
	volatile uint16_t x340 = 0U;
	int32_t t66 = -177816;

    t66 = (((x337*x338)%x339)!=x340);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x341 = -1;
	uint64_t x342 = UINT64_MAX;
	static int16_t x343 = -175;
	int16_t x344 = -7;
	volatile int32_t t67 = 2624665;

    t67 = (((x341*x342)%x343)!=x344);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint8_t x346 = 6U;
	int8_t x347 = INT8_MIN;
	uint32_t x348 = 13U;

    t68 = (((x345*x346)%x347)!=x348);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x349 = UINT64_MAX;
	int8_t x350 = INT8_MIN;
	uint16_t x351 = 14U;
	uint32_t x352 = 90577U;
	static int32_t t69 = -99;

    t69 = (((x349*x350)%x351)!=x352);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x361 = 978057012770172LL;
	int8_t x362 = INT8_MAX;
	int8_t x363 = -31;
	int64_t x364 = INT64_MIN;

    t70 = (((x361*x362)%x363)!=x364);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x365 = INT32_MAX;
	int16_t x366 = -1;
	int32_t x367 = INT32_MIN;
	volatile int16_t x368 = 454;

    t71 = (((x365*x366)%x367)!=x368);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x369 = -1LL;
	int32_t x370 = INT32_MAX;
	volatile int8_t x371 = -1;
	int32_t x372 = -1;
	static int32_t t72 = -1;

    t72 = (((x369*x370)%x371)!=x372);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x373 = 12505LLU;
	volatile uint32_t x374 = UINT32_MAX;
	int64_t x375 = INT64_MAX;
	int16_t x376 = INT16_MIN;
	static int32_t t73 = 1;

    t73 = (((x373*x374)%x375)!=x376);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x381 = INT8_MAX;
	static volatile uint64_t x383 = UINT64_MAX;
	int8_t x384 = -1;
	int32_t t74 = 596052;

    t74 = (((x381*x382)%x383)!=x384);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int16_t x401 = -15738;
	int32_t x402 = -1;
	int32_t x403 = -58;
	volatile uint32_t x404 = UINT32_MAX;
	int32_t t75 = 71;

    t75 = (((x401*x402)%x403)!=x404);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x407 = 34U;
	int16_t x408 = INT16_MAX;
	static volatile int32_t t76 = -49;

    t76 = (((x405*x406)%x407)!=x408);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x409 = 42;
	volatile int16_t x411 = -88;
	volatile uint32_t x412 = 50941145U;
	volatile int32_t t77 = 679699834;

    t77 = (((x409*x410)%x411)!=x412);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x413 = 1U;
	int16_t x414 = 2532;

    t78 = (((x413*x414)%x415)!=x416);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x417 = 216LL;
	volatile uint64_t x419 = 341090167884765LLU;
	int8_t x420 = INT8_MIN;
	int32_t t79 = -3530;

    t79 = (((x417*x418)%x419)!=x420);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x421 = UINT64_MAX;
	uint32_t x423 = UINT32_MAX;
	static volatile int32_t t80 = 28941;

    t80 = (((x421*x422)%x423)!=x424);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x425 = -1LL;
	uint32_t x426 = 12857U;
	static uint32_t x427 = 401465U;
	int16_t x428 = INT16_MAX;

    t81 = (((x425*x426)%x427)!=x428);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x429 = 111;
	int8_t x430 = INT8_MAX;
	uint32_t x431 = 1174001958U;
	static int32_t x432 = -507;
	static int32_t t82 = -385;

    t82 = (((x429*x430)%x431)!=x432);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint64_t x436 = UINT64_MAX;
	volatile int32_t t83 = 126;

    t83 = (((x433*x434)%x435)!=x436);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint8_t x437 = 34U;
	volatile uint64_t x438 = 32063786378LLU;
	static uint16_t x439 = 791U;
	static volatile int64_t x440 = -19206107560LL;
	int32_t t84 = -62516;

    t84 = (((x437*x438)%x439)!=x440);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int32_t x446 = 45384;
	uint32_t x447 = UINT32_MAX;
	int64_t x448 = INT64_MAX;
	static int32_t t85 = 225982299;

    t85 = (((x445*x446)%x447)!=x448);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x449 = -220537LL;
	uint16_t x450 = UINT16_MAX;
	int16_t x451 = INT16_MIN;
	static uint8_t x452 = 5U;
	static int32_t t86 = 187;

    t86 = (((x449*x450)%x451)!=x452);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x453 = -8;
	uint8_t x454 = UINT8_MAX;
	volatile uint8_t x455 = UINT8_MAX;
	static int8_t x456 = INT8_MAX;

    t87 = (((x453*x454)%x455)!=x456);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x461 = INT8_MIN;
	volatile int16_t x462 = 1;
	volatile uint32_t x464 = 1U;
	int32_t t88 = 0;

    t88 = (((x461*x462)%x463)!=x464);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x469 = INT16_MAX;
	uint16_t x470 = 5U;
	int32_t x471 = INT32_MIN;
	volatile int32_t x472 = -1;
	volatile int32_t t89 = 113374;

    t89 = (((x469*x470)%x471)!=x472);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x473 = INT8_MIN;
	int16_t x474 = INT16_MIN;
	uint8_t x475 = UINT8_MAX;
	static volatile int16_t x476 = -632;
	int32_t t90 = 3839;

    t90 = (((x473*x474)%x475)!=x476);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint32_t x489 = 324251689U;
	int8_t x490 = INT8_MAX;
	static int32_t x491 = INT32_MAX;
	volatile int32_t t91 = -1;

    t91 = (((x489*x490)%x491)!=x492);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint16_t x493 = 953U;
	volatile int8_t x495 = -1;
	int8_t x496 = 61;
	volatile int32_t t92 = 21416134;

    t92 = (((x493*x494)%x495)!=x496);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x505 = INT8_MIN;
	uint64_t x506 = 1387LLU;
	volatile int64_t x507 = INT64_MIN;
	int64_t x508 = 126827LL;
	volatile int32_t t93 = 0;

    t93 = (((x505*x506)%x507)!=x508);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x511 = INT32_MIN;
	int32_t x512 = -153;

    t94 = (((x509*x510)%x511)!=x512);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x517 = -2185359311409751LL;
	uint64_t x518 = UINT64_MAX;
	int16_t x519 = INT16_MAX;
	int32_t x520 = INT32_MIN;
	int32_t t95 = 19;

    t95 = (((x517*x518)%x519)!=x520);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint8_t x521 = 5U;
	uint64_t x522 = 288242LLU;
	uint32_t x523 = UINT32_MAX;
	int64_t x524 = -1LL;
	int32_t t96 = 32;

    t96 = (((x521*x522)%x523)!=x524);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint32_t x525 = 57U;
	static int16_t x526 = 0;
	volatile int32_t x527 = -1;
	int32_t x528 = 130153;
	static int32_t t97 = 1;

    t97 = (((x525*x526)%x527)!=x528);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x529 = 39U;
	int64_t x530 = -1LL;
	int16_t x531 = INT16_MIN;
	static int64_t x532 = -1LL;
	static int32_t t98 = -31;

    t98 = (((x529*x530)%x531)!=x532);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x533 = 4049317924239398LLU;
	static volatile uint8_t x534 = 62U;
	static int64_t x535 = -1LL;
	volatile int64_t x536 = INT64_MIN;
	int32_t t99 = 172455;

    t99 = (((x533*x534)%x535)!=x536);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x537 = UINT8_MAX;
	int32_t x538 = 4594482;
	static int16_t x539 = -1;
	int16_t x540 = -1;
	volatile int32_t t100 = -84518;

    t100 = (((x537*x538)%x539)!=x540);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x545 = -410030480582LL;
	int64_t x547 = INT64_MAX;
	int16_t x548 = -1833;

    t101 = (((x545*x546)%x547)!=x548);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint16_t x554 = 2097U;
	int8_t x555 = -1;
	int8_t x556 = -1;
	int32_t t102 = 76589;

    t102 = (((x553*x554)%x555)!=x556);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x557 = INT8_MAX;
	int64_t x558 = 652011083619680LL;
	uint32_t x559 = 79675991U;
	uint64_t x560 = 8136619711541117655LLU;

    t103 = (((x557*x558)%x559)!=x560);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x561 = 2U;
	static int16_t x562 = INT16_MIN;
	int64_t x563 = INT64_MAX;
	int64_t x564 = INT64_MAX;
	int32_t t104 = 390;

    t104 = (((x561*x562)%x563)!=x564);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint16_t x569 = 20U;
	int64_t x570 = -1LL;
	uint16_t x571 = 107U;
	int16_t x572 = INT16_MIN;
	int32_t t105 = -41;

    t105 = (((x569*x570)%x571)!=x572);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x573 = 1;
	uint16_t x574 = 21923U;
	volatile int32_t t106 = -4892;

    t106 = (((x573*x574)%x575)!=x576);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x578 = UINT16_MAX;
	uint32_t x580 = 923817U;
	int32_t t107 = -5823;

    t107 = (((x577*x578)%x579)!=x580);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x581 = INT64_MAX;
	int8_t x582 = -1;
	uint64_t x583 = 20245987LLU;
	int16_t x584 = INT16_MIN;
	int32_t t108 = -61;

    t108 = (((x581*x582)%x583)!=x584);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint8_t x589 = UINT8_MAX;
	volatile int32_t x591 = 3;
	int32_t x592 = INT32_MIN;
	volatile int32_t t109 = -4;

    t109 = (((x589*x590)%x591)!=x592);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x593 = -82;
	volatile uint32_t x595 = UINT32_MAX;

    t110 = (((x593*x594)%x595)!=x596);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x597 = 1913922495LLU;
	int64_t x598 = INT64_MAX;
	int64_t x599 = 51097198LL;
	int8_t x600 = INT8_MAX;
	int32_t t111 = 12245;

    t111 = (((x597*x598)%x599)!=x600);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x601 = -1LL;
	int32_t x602 = INT32_MAX;
	uint64_t x603 = 13060517422LLU;
	int16_t x604 = INT16_MIN;
	int32_t t112 = -66618772;

    t112 = (((x601*x602)%x603)!=x604);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x605 = 0;
	int8_t x606 = INT8_MAX;
	int64_t x607 = INT64_MIN;
	static int32_t t113 = 173888;

    t113 = (((x605*x606)%x607)!=x608);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x616 = INT32_MIN;
	int32_t t114 = 120007236;

    t114 = (((x613*x614)%x615)!=x616);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x621 = 12U;
	static int8_t x622 = INT8_MIN;
	int16_t x623 = INT16_MAX;
	static int64_t x624 = INT64_MIN;
	volatile int32_t t115 = -33360832;

    t115 = (((x621*x622)%x623)!=x624);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x625 = UINT32_MAX;
	int32_t x626 = INT32_MIN;
	int16_t x627 = 6750;
	uint8_t x628 = 19U;
	int32_t t116 = -231;

    t116 = (((x625*x626)%x627)!=x628);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint16_t x629 = UINT16_MAX;
	uint16_t x630 = 0U;
	static uint64_t x631 = UINT64_MAX;
	int32_t t117 = 82;

    t117 = (((x629*x630)%x631)!=x632);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x633 = -3;
	uint64_t x634 = 173319374935007510LLU;
	int16_t x635 = INT16_MIN;
	uint16_t x636 = 30278U;
	volatile int32_t t118 = 13944;

    t118 = (((x633*x634)%x635)!=x636);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x637 = 48;
	int64_t x639 = -135627931865LL;
	int8_t x640 = INT8_MIN;
	volatile int32_t t119 = -52475;

    t119 = (((x637*x638)%x639)!=x640);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x641 = 73LLU;
	int64_t x642 = 90129087624LL;
	int16_t x643 = INT16_MIN;
	int64_t x644 = INT64_MIN;
	volatile int32_t t120 = 15;

    t120 = (((x641*x642)%x643)!=x644);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x645 = INT8_MAX;
	static volatile int16_t x646 = 16;
	int64_t x647 = 2647103604785106643LL;
	volatile int32_t t121 = -2880;

    t121 = (((x645*x646)%x647)!=x648);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x649 = INT8_MIN;
	uint32_t x650 = UINT32_MAX;
	int16_t x651 = INT16_MIN;
	uint16_t x652 = 60U;

    t122 = (((x649*x650)%x651)!=x652);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x653 = -1;
	volatile uint64_t x655 = 1324577115649958LLU;
	int64_t x656 = -2998271LL;
	int32_t t123 = 1064925244;

    t123 = (((x653*x654)%x655)!=x656);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x661 = INT16_MAX;
	static uint16_t x662 = 199U;
	int64_t x663 = -13832807560666404LL;
	int64_t x664 = 420LL;
	volatile int32_t t124 = 5032;

    t124 = (((x661*x662)%x663)!=x664);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x669 = INT32_MIN;
	volatile int64_t x670 = 1626LL;
	volatile int16_t x672 = INT16_MAX;
	int32_t t125 = -114;

    t125 = (((x669*x670)%x671)!=x672);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x681 = 782867LLU;
	int8_t x682 = INT8_MIN;
	int32_t x683 = INT32_MIN;
	int32_t x684 = -62603222;
	int32_t t126 = -1724838;

    t126 = (((x681*x682)%x683)!=x684);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x685 = INT16_MAX;
	int32_t x688 = 32915;
	static volatile int32_t t127 = 186;

    t127 = (((x685*x686)%x687)!=x688);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x689 = 1U;
	int32_t x691 = INT32_MAX;
	static volatile uint8_t x692 = UINT8_MAX;
	int32_t t128 = -4259;

    t128 = (((x689*x690)%x691)!=x692);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint32_t x693 = 117848U;
	uint32_t x694 = UINT32_MAX;
	static volatile int32_t x695 = INT32_MIN;
	int16_t x696 = INT16_MIN;

    t129 = (((x693*x694)%x695)!=x696);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint8_t x697 = 47U;
	int8_t x698 = -1;
	uint64_t x699 = 113325978929767973LLU;
	int64_t x700 = INT64_MAX;
	int32_t t130 = 82953648;

    t130 = (((x697*x698)%x699)!=x700);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x701 = INT32_MAX;
	uint32_t x702 = 13366U;
	uint16_t x703 = 689U;
	volatile uint32_t x704 = 11U;
	int32_t t131 = 5467;

    t131 = (((x701*x702)%x703)!=x704);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x713 = INT8_MIN;
	static uint16_t x714 = UINT16_MAX;
	int32_t x715 = INT32_MAX;

    t132 = (((x713*x714)%x715)!=x716);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x718 = UINT8_MAX;
	int32_t x720 = INT32_MIN;
	volatile int32_t t133 = -33441;

    t133 = (((x717*x718)%x719)!=x720);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x721 = INT8_MIN;
	volatile uint64_t x722 = UINT64_MAX;
	uint8_t x723 = UINT8_MAX;
	static int32_t t134 = -7357;

    t134 = (((x721*x722)%x723)!=x724);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x733 = UINT64_MAX;
	static int16_t x734 = INT16_MAX;
	uint16_t x735 = 10U;
	volatile uint16_t x736 = UINT16_MAX;
	int32_t t135 = 6180;

    t135 = (((x733*x734)%x735)!=x736);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x737 = INT8_MIN;
	int64_t x738 = -1LL;
	volatile int16_t x739 = INT16_MIN;
	static volatile uint16_t x740 = 71U;
	int32_t t136 = -10;

    t136 = (((x737*x738)%x739)!=x740);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint16_t x742 = 1U;
	static volatile int32_t x743 = INT32_MIN;
	int32_t t137 = 0;

    t137 = (((x741*x742)%x743)!=x744);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x745 = -17;
	static int16_t x746 = -122;
	volatile int32_t x747 = -40415;
	int8_t x748 = -1;
	static volatile int32_t t138 = -1416;

    t138 = (((x745*x746)%x747)!=x748);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x753 = UINT8_MAX;
	int64_t x754 = 65951LL;
	static uint16_t x756 = 83U;
	static int32_t t139 = 41;

    t139 = (((x753*x754)%x755)!=x756);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x757 = -12;
	int64_t x758 = -102426LL;
	int8_t x759 = INT8_MIN;
	uint16_t x760 = 16U;

    t140 = (((x757*x758)%x759)!=x760);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x765 = 10193;
	static int16_t x766 = -1;
	volatile int16_t x767 = -4296;
	int32_t t141 = -205003165;

    t141 = (((x765*x766)%x767)!=x768);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t t142 = -649332;

    t142 = (((x773*x774)%x775)!=x776);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint8_t x778 = UINT8_MAX;
	static uint8_t x780 = 6U;
	int32_t t143 = 1420774;

    t143 = (((x777*x778)%x779)!=x780);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x781 = 9U;
	int64_t x782 = 75074383LL;
	volatile uint64_t x783 = 1677985LLU;
	int8_t x784 = -1;
	static volatile int32_t t144 = 856522329;

    t144 = (((x781*x782)%x783)!=x784);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x786 = INT8_MIN;
	int64_t x787 = INT64_MAX;
	static volatile int8_t x788 = INT8_MAX;
	int32_t t145 = -6869;

    t145 = (((x785*x786)%x787)!=x788);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x790 = INT8_MAX;
	int64_t x791 = -1LL;
	volatile int8_t x792 = INT8_MIN;
	int32_t t146 = 6627;

    t146 = (((x789*x790)%x791)!=x792);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint64_t x795 = 5050508446223972LLU;
	volatile int32_t t147 = 2;

    t147 = (((x793*x794)%x795)!=x796);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x797 = UINT8_MAX;
	int64_t x798 = -1LL;
	volatile uint32_t x799 = 5U;
	int16_t x800 = INT16_MIN;

    t148 = (((x797*x798)%x799)!=x800);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x801 = -6;
	int16_t x802 = INT16_MAX;
	uint16_t x804 = 144U;
	static volatile int32_t t149 = 20892748;

    t149 = (((x801*x802)%x803)!=x804);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x805 = -180LL;
	static volatile int32_t x807 = INT32_MIN;
	int16_t x808 = INT16_MIN;

    t150 = (((x805*x806)%x807)!=x808);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x813 = -1;
	volatile int16_t x815 = INT16_MIN;
	static int16_t x816 = 0;
	volatile int32_t t151 = -62314151;

    t151 = (((x813*x814)%x815)!=x816);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x817 = 1;
	int16_t x819 = -1;
	volatile uint8_t x820 = 39U;
	static int32_t t152 = 48;

    t152 = (((x817*x818)%x819)!=x820);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x825 = 1LL;
	int16_t x826 = INT16_MIN;
	int64_t x827 = -1LL;
	uint32_t x828 = 36U;
	int32_t t153 = 313;

    t153 = (((x825*x826)%x827)!=x828);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x830 = 3;
	int16_t x831 = INT16_MIN;
	static int16_t x832 = 2378;
	volatile int32_t t154 = 16447114;

    t154 = (((x829*x830)%x831)!=x832);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x833 = -1;
	static int32_t x834 = -14;
	uint32_t x835 = 124075111U;
	int16_t x836 = INT16_MIN;
	static volatile int32_t t155 = 475175;

    t155 = (((x833*x834)%x835)!=x836);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x837 = INT32_MIN;
	int64_t x838 = -180LL;
	uint64_t x839 = 5741LLU;
	int64_t x840 = 189229335547679834LL;
	int32_t t156 = 1;

    t156 = (((x837*x838)%x839)!=x840);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint16_t x849 = 178U;
	uint8_t x850 = UINT8_MAX;
	int8_t x851 = INT8_MIN;
	static volatile uint64_t x852 = UINT64_MAX;
	int32_t t157 = 22469702;

    t157 = (((x849*x850)%x851)!=x852);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x854 = 1684305U;
	volatile int64_t x855 = 51975849LL;
	uint8_t x856 = 0U;
	static volatile int32_t t158 = -10972150;

    t158 = (((x853*x854)%x855)!=x856);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x857 = 22300505789756LLU;
	static uint64_t x858 = 1403187801229807LLU;
	uint32_t x860 = UINT32_MAX;

    t159 = (((x857*x858)%x859)!=x860);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int16_t x862 = INT16_MAX;
	int32_t x863 = -3;

    t160 = (((x861*x862)%x863)!=x864);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x869 = -2527;
	static uint16_t x870 = 36U;
	uint8_t x872 = 12U;
	int32_t t161 = -2;

    t161 = (((x869*x870)%x871)!=x872);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint16_t x885 = 1074U;
	static int16_t x886 = INT16_MIN;
	int8_t x887 = 12;
	int32_t x888 = INT32_MAX;

    t162 = (((x885*x886)%x887)!=x888);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x889 = INT16_MAX;
	static int8_t x890 = -1;
	int8_t x892 = INT8_MIN;
	static volatile int32_t t163 = 499;

    t163 = (((x889*x890)%x891)!=x892);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x893 = INT16_MIN;
	int16_t x894 = 10;
	static int32_t x895 = INT32_MIN;
	int8_t x896 = INT8_MIN;
	volatile int32_t t164 = -988750101;

    t164 = (((x893*x894)%x895)!=x896);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x897 = 5494817000LLU;
	int64_t x898 = -1LL;
	int16_t x899 = INT16_MAX;
	volatile uint8_t x900 = UINT8_MAX;
	static volatile int32_t t165 = 2891975;

    t165 = (((x897*x898)%x899)!=x900);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x901 = INT16_MAX;
	static int64_t x903 = -2079361LL;
	int32_t x904 = INT32_MAX;
	volatile int32_t t166 = 17;

    t166 = (((x901*x902)%x903)!=x904);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x909 = INT16_MAX;
	int64_t x910 = -1LL;
	uint64_t x911 = UINT64_MAX;
	int64_t x912 = 139841263579208LL;
	volatile int32_t t167 = 17;

    t167 = (((x909*x910)%x911)!=x912);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x913 = 1U;
	int32_t x914 = INT32_MAX;
	static int8_t x915 = -1;
	static int16_t x916 = 995;
	int32_t t168 = -46914;

    t168 = (((x913*x914)%x915)!=x916);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x918 = -1;
	int64_t x919 = INT64_MAX;
	int8_t x920 = -1;

    t169 = (((x917*x918)%x919)!=x920);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x921 = 1U;
	uint64_t x922 = UINT64_MAX;
	int16_t x924 = INT16_MIN;
	int32_t t170 = -143873;

    t170 = (((x921*x922)%x923)!=x924);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x929 = INT16_MAX;
	volatile int8_t x930 = 4;
	int64_t x932 = -26731640979148293LL;

    t171 = (((x929*x930)%x931)!=x932);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x933 = INT8_MIN;
	static uint32_t x934 = UINT32_MAX;
	int32_t x935 = INT32_MIN;
	volatile uint32_t x936 = 99884159U;
	int32_t t172 = -237381;

    t172 = (((x933*x934)%x935)!=x936);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x937 = 19291277;
	static int8_t x938 = 42;
	volatile int8_t x939 = 8;
	int16_t x940 = INT16_MIN;
	volatile int32_t t173 = 149;

    t173 = (((x937*x938)%x939)!=x940);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x945 = INT8_MIN;
	volatile int16_t x946 = INT16_MIN;
	int32_t x948 = INT32_MIN;
	volatile int32_t t174 = -27;

    t174 = (((x945*x946)%x947)!=x948);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x949 = INT16_MIN;
	static int8_t x951 = -17;
	static uint8_t x952 = 16U;
	static volatile int32_t t175 = -451131;

    t175 = (((x949*x950)%x951)!=x952);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x953 = 31954584912LLU;
	int16_t x954 = -1;
	volatile int16_t x955 = 4831;
	int32_t t176 = 2;

    t176 = (((x953*x954)%x955)!=x956);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x957 = INT8_MIN;
	volatile int64_t x958 = -1LL;
	static volatile uint64_t x959 = 4122080LLU;
	static int8_t x960 = 4;
	int32_t t177 = 465;

    t177 = (((x957*x958)%x959)!=x960);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x962 = -1;
	int64_t x963 = -1305360815730333LL;
	volatile uint64_t x964 = 4LLU;
	int32_t t178 = -386;

    t178 = (((x961*x962)%x963)!=x964);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x973 = INT8_MAX;
	volatile uint32_t x974 = UINT32_MAX;
	int64_t x975 = INT64_MIN;
	uint64_t x976 = 2042073248403793LLU;
	volatile int32_t t179 = -64784;

    t179 = (((x973*x974)%x975)!=x976);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x977 = 111163021LLU;
	uint32_t x978 = UINT32_MAX;
	int16_t x979 = -1;
	static uint64_t x980 = 587534LLU;
	volatile int32_t t180 = 1;

    t180 = (((x977*x978)%x979)!=x980);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x982 = 27849450U;
	int32_t x983 = INT32_MIN;
	uint32_t x984 = UINT32_MAX;
	static volatile int32_t t181 = 10;

    t181 = (((x981*x982)%x983)!=x984);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x985 = INT16_MIN;
	int8_t x986 = INT8_MAX;
	int16_t x987 = INT16_MIN;
	volatile int16_t x988 = -1;
	static int32_t t182 = 183;

    t182 = (((x985*x986)%x987)!=x988);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x989 = -1LL;
	static volatile int16_t x990 = INT16_MAX;
	uint32_t x991 = 3685U;
	static int8_t x992 = INT8_MIN;
	int32_t t183 = 143;

    t183 = (((x989*x990)%x991)!=x992);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x993 = 8U;
	volatile int8_t x996 = INT8_MAX;
	int32_t t184 = 1;

    t184 = (((x993*x994)%x995)!=x996);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x997 = UINT8_MAX;
	int8_t x998 = 4;
	int8_t x999 = -1;
	uint32_t x1000 = UINT32_MAX;
	static int32_t t185 = 215;

    t185 = (((x997*x998)%x999)!=x1000);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint8_t x1001 = 25U;
	int8_t x1002 = -1;
	uint32_t x1003 = 1908696U;
	int32_t t186 = 487672472;

    t186 = (((x1001*x1002)%x1003)!=x1004);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint16_t x1006 = UINT16_MAX;
	int16_t x1007 = INT16_MAX;
	static volatile int32_t t187 = -6;

    t187 = (((x1005*x1006)%x1007)!=x1008);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x1009 = UINT64_MAX;
	int64_t x1010 = INT64_MIN;
	int16_t x1011 = 3232;
	static int8_t x1012 = INT8_MIN;
	volatile int32_t t188 = 172732;

    t188 = (((x1009*x1010)%x1011)!=x1012);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x1013 = INT16_MIN;
	uint16_t x1014 = 970U;
	int64_t x1016 = -1LL;
	static int32_t t189 = 9;

    t189 = (((x1013*x1014)%x1015)!=x1016);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint8_t x1025 = 4U;
	int16_t x1028 = -1;

    t190 = (((x1025*x1026)%x1027)!=x1028);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x1029 = INT32_MAX;
	static int16_t x1031 = -2;
	int8_t x1032 = -1;

    t191 = (((x1029*x1030)%x1031)!=x1032);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x1033 = UINT16_MAX;
	int32_t x1034 = -1;
	static uint32_t x1035 = 6929U;
	int32_t x1036 = INT32_MIN;
	volatile int32_t t192 = -52;

    t192 = (((x1033*x1034)%x1035)!=x1036);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x1037 = 49224688691LL;
	int16_t x1038 = -1;
	static uint64_t x1039 = UINT64_MAX;
	static int32_t t193 = 1;

    t193 = (((x1037*x1038)%x1039)!=x1040);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x1041 = UINT32_MAX;
	int32_t x1042 = -1;
	int32_t x1043 = INT32_MIN;
	volatile int64_t x1044 = INT64_MAX;
	int32_t t194 = 221;

    t194 = (((x1041*x1042)%x1043)!=x1044);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x1045 = 4734090836710LLU;
	volatile int32_t x1046 = -402554845;
	int32_t x1048 = INT32_MAX;
	volatile int32_t t195 = -780662943;

    t195 = (((x1045*x1046)%x1047)!=x1048);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x1050 = UINT32_MAX;
	uint32_t x1051 = UINT32_MAX;
	uint32_t x1052 = 9619U;
	static int32_t t196 = -127560;

    t196 = (((x1049*x1050)%x1051)!=x1052);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1053 = 61;
	int16_t x1054 = -1;
	uint64_t x1055 = 163851871LLU;
	int16_t x1056 = INT16_MIN;

    t197 = (((x1053*x1054)%x1055)!=x1056);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1057 = INT64_MAX;
	volatile uint8_t x1058 = 1U;
	int16_t x1059 = -1;
	static int64_t x1060 = INT64_MAX;
	int32_t t198 = 1851715;

    t198 = (((x1057*x1058)%x1059)!=x1060);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1061 = INT16_MAX;
	int16_t x1062 = -1;
	int64_t x1063 = INT64_MIN;
	uint64_t x1064 = 15888103295116LLU;
	int32_t t199 = -10337;

    t199 = (((x1061*x1062)%x1063)!=x1064);

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

