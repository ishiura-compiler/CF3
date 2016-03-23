
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

int32_t x1 = INT32_MIN;
int16_t x3 = -417;
int8_t x11 = INT8_MIN;
int8_t x32 = INT8_MAX;
uint32_t x42 = 3U;
volatile uint8_t x44 = 82U;
int8_t x46 = INT8_MIN;
static volatile uint8_t x56 = 2U;
uint32_t x62 = 19081U;
int16_t x63 = -129;
int8_t x67 = INT8_MIN;
int64_t x68 = -49LL;
static int8_t x69 = -1;
uint32_t x81 = UINT32_MAX;
int32_t x82 = 2;
int32_t t14 = -5;
uint64_t x86 = 638926924202LLU;
static int64_t x88 = INT64_MIN;
int8_t x105 = -1;
int16_t x106 = INT16_MAX;
int16_t x108 = -1;
int32_t x111 = -1;
int8_t x120 = -2;
static volatile uint8_t x127 = UINT8_MAX;
int32_t x128 = -402;
static uint64_t x134 = 244LLU;
int8_t x149 = INT8_MIN;
uint64_t t26 = 2646827994777LLU;
int16_t x159 = INT16_MIN;
int32_t x170 = -6242352;
uint64_t x171 = 1805934LLU;
int64_t x180 = INT64_MIN;
volatile uint64_t x181 = 1404LLU;
static int16_t x185 = INT16_MIN;
int8_t x186 = INT8_MIN;
volatile int64_t x197 = -1LL;
volatile int32_t t39 = 2841445;
static volatile uint8_t x238 = UINT8_MAX;
uint32_t x239 = UINT32_MAX;
volatile uint16_t x243 = UINT16_MAX;
int32_t t44 = -126794;
uint16_t x256 = UINT16_MAX;
int32_t t47 = -338380;
int32_t x259 = 4;
volatile int8_t x260 = INT8_MIN;
int32_t t48 = 1;
int16_t x262 = INT16_MAX;
volatile int32_t t49 = -897994223;
int8_t x269 = INT8_MIN;
int8_t x272 = -1;
int64_t x280 = 361612LL;
int8_t x293 = -33;
volatile uint8_t x296 = 2U;
int16_t x305 = INT16_MIN;
int16_t x307 = -2;
static uint16_t x308 = 29988U;
int32_t t55 = -66570339;
volatile uint32_t x320 = 120214U;
uint64_t x337 = 7853LLU;
volatile uint32_t x343 = UINT32_MAX;
volatile int32_t t62 = 24485;
uint32_t x358 = 6094851U;
volatile int64_t x363 = -1LL;
uint16_t x365 = UINT16_MAX;
static int32_t x366 = -1;
int32_t x372 = -1;
int32_t t66 = -61216;
int8_t x381 = INT8_MIN;
int16_t x388 = INT16_MAX;
int32_t t72 = -22579;
volatile int16_t x401 = 11295;
uint32_t x405 = 1216595076U;
static int64_t x410 = -951246162968LL;
int8_t x414 = INT8_MIN;
int16_t x427 = INT16_MIN;
volatile int32_t t81 = 254673;
static int32_t x469 = -11878090;
int32_t x472 = INT32_MAX;
int64_t x474 = -1LL;
uint8_t x487 = 5U;
static volatile uint64_t t86 = 2786073351805LLU;
uint32_t x493 = 34908216U;
static volatile int32_t x495 = 1;
static uint8_t x496 = 3U;
int32_t x501 = -1633632;
int8_t x505 = INT8_MIN;
int64_t t90 = 972LL;
int32_t x526 = INT32_MIN;
uint64_t x529 = 2960060438113078887LLU;
uint16_t x530 = 0U;
int32_t x544 = INT32_MIN;
volatile uint32_t t96 = 52034112U;
static volatile int64_t t97 = INT64_MIN;
static volatile uint32_t t98 = 23847U;
uint16_t x582 = 24331U;
static int32_t x583 = INT32_MIN;
static volatile uint16_t x588 = 49U;
volatile int32_t t101 = -632;
static int64_t x595 = INT64_MAX;
int8_t x601 = INT8_MIN;
int32_t t104 = 3144284;
volatile int32_t t105 = -735;
uint64_t x640 = 8488844240303LLU;
int32_t x660 = INT32_MIN;
volatile uint8_t x663 = UINT8_MAX;
volatile int64_t t112 = 318787836891486LL;
uint8_t x671 = 26U;
int64_t t114 = 3391LL;
int64_t x677 = -1LL;
int8_t x678 = -13;
int32_t x687 = -406812;
static uint32_t x688 = UINT32_MAX;
volatile int64_t x691 = 1LL;
int64_t x700 = INT64_MAX;
int32_t x701 = INT32_MIN;
volatile int64_t x706 = 312689919689LL;
static uint16_t x707 = 434U;
int32_t x708 = INT32_MAX;
int8_t x712 = INT8_MAX;
uint32_t x739 = 1602045U;
uint64_t x757 = UINT64_MAX;
volatile int32_t t131 = 66;
volatile uint8_t x772 = 11U;
static uint8_t x774 = 1U;
uint16_t x777 = UINT16_MAX;
int64_t x782 = -28450594055138LL;
static uint16_t x785 = 97U;
volatile int32_t x788 = INT32_MIN;
static int32_t t139 = -631571;
volatile uint64_t t141 = 214438969LLU;
volatile int64_t x813 = -475LL;
int64_t x824 = INT64_MIN;
static int16_t x836 = INT16_MAX;
uint64_t x837 = 25073202961237LLU;
volatile int64_t t148 = -1646192748906261661LL;
int32_t x850 = INT32_MIN;
volatile int32_t t150 = 1;
int8_t x863 = INT8_MIN;
volatile int32_t t153 = -184;
static int16_t x880 = -1;
uint8_t x886 = UINT8_MAX;
int8_t x890 = -1;
volatile int64_t x905 = -492119872580836LL;
volatile int64_t t162 = -427617947350LL;
int16_t x925 = -59;
volatile int32_t t164 = -323001;
volatile int32_t t165 = 5024659;
int8_t x949 = INT8_MAX;
int8_t x950 = INT8_MIN;
int16_t x953 = INT16_MIN;
volatile uint16_t x957 = UINT16_MAX;
volatile int8_t x958 = -1;
int8_t x959 = INT8_MIN;
uint16_t x968 = 15U;
static volatile uint8_t x970 = 4U;
static int32_t t173 = -1;
int8_t x993 = INT8_MIN;
uint64_t x995 = 870076427625495449LLU;
uint16_t x1001 = 0U;
int8_t x1010 = -7;
uint8_t x1011 = UINT8_MAX;
uint8_t x1014 = 0U;
int64_t x1015 = -1LL;
static volatile int32_t t178 = 16753;
uint64_t x1020 = 144LLU;
uint64_t x1026 = UINT64_MAX;
static uint64_t x1043 = UINT64_MAX;
int64_t x1044 = 2949558353LL;
volatile int16_t x1048 = -1;
uint16_t x1053 = UINT16_MAX;
uint8_t x1056 = 3U;
static int64_t x1060 = INT64_MIN;
volatile uint32_t t190 = UINT32_MAX;
int8_t x1085 = -38;
int32_t x1089 = -813160;
uint8_t x1090 = UINT8_MAX;
static volatile int32_t t192 = 0;
uint64_t x1101 = 1599236LLU;
int32_t x1115 = INT32_MIN;
int32_t t198 = -507413606;


void f0(void) {
    	static uint64_t x2 = 183625705959336LLU;
	int8_t x4 = -1;
	int32_t t0 = -7230268;

    t0 = (((x1*x2)<=x3)*x4);

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = 0U;
	int64_t x6 = INT64_MIN;
	int64_t x7 = INT64_MAX;
	volatile uint32_t x8 = 1U;
	uint32_t t1 = 7052709U;

    t1 = (((x5*x6)<=x7)*x8);

    if (t1 != 1U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 28U;
	int16_t x10 = 120;
	int32_t x12 = 0;
	volatile int32_t t2 = 245;

    t2 = (((x9*x10)<=x11)*x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	volatile uint64_t x14 = 5902LLU;
	uint16_t x15 = UINT16_MAX;
	int8_t x16 = INT8_MAX;
	static int32_t t3 = -954;

    t3 = (((x13*x14)<=x15)*x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x25 = 494;
	static uint8_t x26 = 0U;
	int32_t x27 = INT32_MIN;
	int64_t x28 = INT64_MIN;
	volatile int64_t t4 = -1116148218235080032LL;

    t4 = (((x25*x26)<=x27)*x28);

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x29 = 0;
	int16_t x30 = INT16_MIN;
	int16_t x31 = -1;
	volatile int32_t t5 = -73026729;

    t5 = (((x29*x30)<=x31)*x32);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x33 = -987;
	uint32_t x34 = UINT32_MAX;
	int16_t x35 = INT16_MIN;
	int32_t x36 = 265452;
	int32_t t6 = 6;

    t6 = (((x33*x34)<=x35)*x36);

    if (t6 != 265452) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile uint64_t x41 = 520895962728189LLU;
	static uint32_t x43 = 2070252379U;
	int32_t t7 = 95802572;

    t7 = (((x41*x42)<=x43)*x44);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x45 = 13;
	int16_t x47 = -1;
	static int8_t x48 = -7;
	volatile int32_t t8 = -27;

    t8 = (((x45*x46)<=x47)*x48);

    if (t8 != -7) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x53 = UINT32_MAX;
	int16_t x54 = -1;
	volatile int64_t x55 = INT64_MIN;
	volatile int32_t t9 = -389124606;

    t9 = (((x53*x54)<=x55)*x56);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint8_t x61 = 10U;
	int64_t x64 = -1LL;
	volatile int64_t t10 = 592843811285LL;

    t10 = (((x61*x62)<=x63)*x64);

    if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x65 = INT16_MIN;
	int64_t x66 = 56988646LL;
	int64_t t11 = 135985333701106985LL;

    t11 = (((x65*x66)<=x67)*x68);

    if (t11 != -49LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int64_t x70 = INT64_MAX;
	volatile int16_t x71 = INT16_MAX;
	uint16_t x72 = 2875U;
	volatile int32_t t12 = 0;

    t12 = (((x69*x70)<=x71)*x72);

    if (t12 != 2875) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x77 = INT64_MAX;
	int32_t x78 = -1;
	int16_t x79 = INT16_MIN;
	uint32_t x80 = 5632U;
	uint32_t t13 = 15U;

    t13 = (((x77*x78)<=x79)*x80);

    if (t13 != 5632U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x83 = 0U;
	int32_t x84 = INT32_MAX;

    t14 = (((x81*x82)<=x83)*x84);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x85 = INT64_MIN;
	int16_t x87 = INT16_MIN;
	static int64_t t15 = INT64_MIN;

    t15 = (((x85*x86)<=x87)*x88);

    if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x93 = 12;
	static uint8_t x94 = UINT8_MAX;
	uint64_t x95 = 82416812258168LLU;
	uint64_t x96 = UINT64_MAX;
	volatile uint64_t t16 = UINT64_MAX;

    t16 = (((x93*x94)<=x95)*x96);

    if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint8_t x107 = 8U;
	volatile int32_t t17 = 0;

    t17 = (((x105*x106)<=x107)*x108);

    if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint32_t x109 = 2364U;
	uint16_t x110 = 634U;
	int8_t x112 = INT8_MAX;
	volatile int32_t t18 = -491017483;

    t18 = (((x109*x110)<=x111)*x112);

    if (t18 != 127) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x113 = -1;
	volatile int16_t x114 = INT16_MIN;
	static int16_t x115 = INT16_MIN;
	int64_t x116 = -1LL;
	static volatile int64_t t19 = 9LL;

    t19 = (((x113*x114)<=x115)*x116);

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x117 = -1;
	static int8_t x118 = -1;
	static int64_t x119 = INT64_MIN;
	volatile int32_t t20 = -29511880;

    t20 = (((x117*x118)<=x119)*x120);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x125 = INT32_MIN;
	static uint32_t x126 = 31424U;
	static volatile int32_t t21 = 429581615;

    t21 = (((x125*x126)<=x127)*x128);

    if (t21 != -402) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x133 = -126641461616LL;
	int8_t x135 = 0;
	int16_t x136 = INT16_MIN;
	volatile int32_t t22 = -40;

    t22 = (((x133*x134)<=x135)*x136);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x137 = INT8_MAX;
	static uint64_t x138 = 14398329007233LLU;
	int32_t x139 = -1;
	static int64_t x140 = INT64_MIN;
	int64_t t23 = INT64_MIN;

    t23 = (((x137*x138)<=x139)*x140);

    if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x141 = INT8_MIN;
	int8_t x142 = -11;
	int8_t x143 = INT8_MIN;
	volatile uint32_t x144 = UINT32_MAX;
	static uint32_t t24 = 1244327U;

    t24 = (((x141*x142)<=x143)*x144);

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x150 = INT16_MIN;
	uint8_t x151 = UINT8_MAX;
	static int64_t x152 = -1LL;
	int64_t t25 = -96LL;

    t25 = (((x149*x150)<=x151)*x152);

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x153 = INT8_MAX;
	int8_t x154 = INT8_MIN;
	int16_t x155 = 0;
	uint64_t x156 = 3802LLU;

    t26 = (((x153*x154)<=x155)*x156);

    if (t26 != 3802LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x157 = -1420;
	volatile uint64_t x158 = 126LLU;
	int8_t x160 = INT8_MIN;
	int32_t t27 = 115;

    t27 = (((x157*x158)<=x159)*x160);

    if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x161 = INT8_MIN;
	static int64_t x162 = -6701517145414LL;
	static volatile int64_t x163 = INT64_MIN;
	uint32_t x164 = 109251403U;
	volatile uint32_t t28 = 337745395U;

    t28 = (((x161*x162)<=x163)*x164);

    if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x165 = 40721715795501LL;
	uint32_t x166 = 69040U;
	int32_t x167 = INT32_MAX;
	int64_t x168 = INT64_MIN;
	static volatile int64_t t29 = -7016892984483465LL;

    t29 = (((x165*x166)<=x167)*x168);

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x169 = UINT32_MAX;
	int8_t x172 = -1;
	static int32_t t30 = -27112088;

    t30 = (((x169*x170)<=x171)*x172);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x173 = INT16_MAX;
	static volatile int16_t x174 = -772;
	uint8_t x175 = UINT8_MAX;
	uint16_t x176 = UINT16_MAX;
	volatile int32_t t31 = 12684;

    t31 = (((x173*x174)<=x175)*x176);

    if (t31 != 65535) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int16_t x177 = INT16_MIN;
	int32_t x178 = 41;
	static volatile uint16_t x179 = UINT16_MAX;
	volatile int64_t t32 = INT64_MIN;

    t32 = (((x177*x178)<=x179)*x180);

    if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x182 = -31;
	int8_t x183 = INT8_MIN;
	volatile int8_t x184 = -1;
	static volatile int32_t t33 = 570156899;

    t33 = (((x181*x182)<=x183)*x184);

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x187 = INT16_MIN;
	int8_t x188 = INT8_MIN;
	int32_t t34 = -3369;

    t34 = (((x185*x186)<=x187)*x188);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x198 = UINT64_MAX;
	uint16_t x199 = 2U;
	static int8_t x200 = INT8_MIN;
	volatile int32_t t35 = 53696;

    t35 = (((x197*x198)<=x199)*x200);

    if (t35 != -128) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x201 = INT8_MIN;
	int64_t x202 = -8LL;
	volatile uint8_t x203 = 21U;
	int64_t x204 = -1LL;
	static int64_t t36 = -186LL;

    t36 = (((x201*x202)<=x203)*x204);

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x209 = 11LLU;
	int16_t x210 = -22;
	int64_t x211 = -1LL;
	uint16_t x212 = 731U;
	volatile int32_t t37 = 2213521;

    t37 = (((x209*x210)<=x211)*x212);

    if (t37 != 731) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint64_t x213 = UINT64_MAX;
	int64_t x214 = INT64_MIN;
	static int16_t x215 = -159;
	int64_t x216 = 5267LL;
	static volatile int64_t t38 = -16LL;

    t38 = (((x213*x214)<=x215)*x216);

    if (t38 != 5267LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x217 = -1;
	int64_t x218 = -106247855154LL;
	int8_t x219 = -15;
	int8_t x220 = -1;

    t39 = (((x217*x218)<=x219)*x220);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x221 = UINT32_MAX;
	int64_t x222 = -860550LL;
	uint32_t x223 = UINT32_MAX;
	int32_t x224 = INT32_MIN;
	int32_t t40 = INT32_MIN;

    t40 = (((x221*x222)<=x223)*x224);

    if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x229 = INT16_MIN;
	uint64_t x230 = 110892341567LLU;
	int32_t x231 = -131753725;
	uint64_t x232 = 456370544985935LLU;
	volatile uint64_t t41 = 11263994LLU;

    t41 = (((x229*x230)<=x231)*x232);

    if (t41 != 456370544985935LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x233 = 0;
	volatile int16_t x234 = 186;
	int32_t x235 = INT32_MAX;
	static volatile int16_t x236 = 315;
	static int32_t t42 = -434927985;

    t42 = (((x233*x234)<=x235)*x236);

    if (t42 != 315) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint16_t x237 = UINT16_MAX;
	uint8_t x240 = 0U;
	int32_t t43 = -27925;

    t43 = (((x237*x238)<=x239)*x240);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x241 = 14315020U;
	int16_t x242 = INT16_MIN;
	volatile int16_t x244 = 5;

    t44 = (((x241*x242)<=x243)*x244);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x245 = -1;
	volatile int64_t x246 = 2114279636LL;
	int8_t x247 = INT8_MAX;
	volatile uint32_t x248 = 1484075U;
	static uint32_t t45 = 5U;

    t45 = (((x245*x246)<=x247)*x248);

    if (t45 != 1484075U) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x249 = 363U;
	int64_t x250 = -24259020508054160LL;
	int64_t x251 = INT64_MIN;
	static volatile int16_t x252 = INT16_MAX;
	int32_t t46 = -2788783;

    t46 = (((x249*x250)<=x251)*x252);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x253 = 0;
	int32_t x254 = INT32_MIN;
	volatile int32_t x255 = INT32_MIN;

    t47 = (((x253*x254)<=x255)*x256);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x257 = 92346571LL;
	int8_t x258 = INT8_MIN;

    t48 = (((x257*x258)<=x259)*x260);

    if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint32_t x261 = UINT32_MAX;
	int64_t x263 = 10968704LL;
	uint8_t x264 = UINT8_MAX;

    t49 = (((x261*x262)<=x263)*x264);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x270 = 890;
	volatile int8_t x271 = INT8_MAX;
	static int32_t t50 = 24738;

    t50 = (((x269*x270)<=x271)*x272);

    if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x273 = 11869;
	volatile int16_t x274 = 116;
	uint64_t x275 = 19578511221LLU;
	int8_t x276 = 3;
	volatile int32_t t51 = 88203380;

    t51 = (((x273*x274)<=x275)*x276);

    if (t51 != 3) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x277 = 28U;
	int8_t x278 = -1;
	static int8_t x279 = 2;
	volatile int64_t t52 = -705087708480LL;

    t52 = (((x277*x278)<=x279)*x280);

    if (t52 != 361612LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x281 = INT8_MIN;
	static int16_t x282 = -847;
	uint32_t x283 = 48U;
	int64_t x284 = -1LL;
	volatile int64_t t53 = -966627075955969876LL;

    t53 = (((x281*x282)<=x283)*x284);

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x294 = -1;
	int8_t x295 = 9;
	volatile int32_t t54 = 308305;

    t54 = (((x293*x294)<=x295)*x296);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x306 = 184U;

    t55 = (((x305*x306)<=x307)*x308);

    if (t55 != 29988) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x309 = UINT32_MAX;
	int32_t x310 = 23471;
	volatile int64_t x311 = INT64_MIN;
	uint32_t x312 = 64299U;
	volatile uint32_t t56 = 875502584U;

    t56 = (((x309*x310)<=x311)*x312);

    if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x317 = 26857955;
	uint16_t x318 = 0U;
	int8_t x319 = 0;
	uint32_t t57 = 73386U;

    t57 = (((x317*x318)<=x319)*x320);

    if (t57 != 120214U) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x321 = INT32_MAX;
	int16_t x322 = 0;
	int32_t x323 = -8025916;
	int16_t x324 = -1;
	int32_t t58 = 69691585;

    t58 = (((x321*x322)<=x323)*x324);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x338 = 14986102U;
	uint16_t x339 = 6969U;
	volatile uint64_t x340 = 13465LLU;
	uint64_t t59 = 115013674744243438LLU;

    t59 = (((x337*x338)<=x339)*x340);

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x341 = -5072131352LL;
	static uint16_t x342 = 229U;
	volatile uint16_t x344 = 10U;
	int32_t t60 = -16;

    t60 = (((x341*x342)<=x343)*x344);

    if (t60 != 10) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint64_t x349 = 653119397377566117LLU;
	static int32_t x350 = INT32_MIN;
	int32_t x351 = INT32_MIN;
	int64_t x352 = INT64_MIN;
	int64_t t61 = INT64_MIN;

    t61 = (((x349*x350)<=x351)*x352);

    if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint16_t x353 = 51U;
	uint32_t x354 = 96U;
	int16_t x355 = INT16_MIN;
	int32_t x356 = -1;

    t62 = (((x353*x354)<=x355)*x356);

    if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x357 = 0U;
	int32_t x359 = INT32_MIN;
	static int32_t x360 = INT32_MIN;
	int32_t t63 = INT32_MIN;

    t63 = (((x357*x358)<=x359)*x360);

    if (t63 != INT32_MIN) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x361 = -1;
	int32_t x362 = 438;
	static int8_t x364 = 1;
	int32_t t64 = 5;

    t64 = (((x361*x362)<=x363)*x364);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x367 = -38;
	static volatile int64_t x368 = INT64_MAX;
	volatile int64_t t65 = INT64_MAX;

    t65 = (((x365*x366)<=x367)*x368);

    if (t65 != INT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x369 = 55;
	int16_t x370 = INT16_MIN;
	volatile uint64_t x371 = UINT64_MAX;

    t66 = (((x369*x370)<=x371)*x372);

    if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x373 = INT8_MAX;
	int8_t x374 = 11;
	volatile int16_t x375 = INT16_MIN;
	static int16_t x376 = INT16_MIN;
	int32_t t67 = 127869;

    t67 = (((x373*x374)<=x375)*x376);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x377 = -1LL;
	int16_t x378 = 1;
	int64_t x379 = -892713045874LL;
	volatile uint32_t x380 = 13U;
	uint32_t t68 = 180743U;

    t68 = (((x377*x378)<=x379)*x380);

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint32_t x382 = 539U;
	static int64_t x383 = INT64_MAX;
	static int16_t x384 = INT16_MIN;
	int32_t t69 = -120;

    t69 = (((x381*x382)<=x383)*x384);

    if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x385 = 14;
	int64_t x386 = -1LL;
	int64_t x387 = -1LL;
	int32_t t70 = 3121;

    t70 = (((x385*x386)<=x387)*x388);

    if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x393 = -1396;
	volatile int16_t x394 = INT16_MAX;
	volatile int32_t x395 = INT32_MAX;
	uint32_t x396 = UINT32_MAX;
	static uint32_t t71 = UINT32_MAX;

    t71 = (((x393*x394)<=x395)*x396);

    if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x397 = -145893028LL;
	static int8_t x398 = 38;
	volatile int64_t x399 = 18LL;
	int8_t x400 = -1;

    t72 = (((x397*x398)<=x399)*x400);

    if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x402 = UINT8_MAX;
	int16_t x403 = -1;
	int32_t x404 = INT32_MAX;
	static volatile int32_t t73 = 44;

    t73 = (((x401*x402)<=x403)*x404);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x406 = INT32_MIN;
	volatile uint8_t x407 = UINT8_MAX;
	int8_t x408 = -15;
	int32_t t74 = -10171954;

    t74 = (((x405*x406)<=x407)*x408);

    if (t74 != -15) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x409 = -1LL;
	uint16_t x411 = 101U;
	static int64_t x412 = INT64_MIN;
	int64_t t75 = 6101329LL;

    t75 = (((x409*x410)<=x411)*x412);

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x413 = 2LLU;
	uint8_t x415 = UINT8_MAX;
	int16_t x416 = 8063;
	int32_t t76 = 114;

    t76 = (((x413*x414)<=x415)*x416);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x417 = 1U;
	static volatile uint8_t x418 = 16U;
	static uint32_t x419 = UINT32_MAX;
	volatile int16_t x420 = INT16_MAX;
	int32_t t77 = -15620;

    t77 = (((x417*x418)<=x419)*x420);

    if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x425 = INT64_MAX;
	volatile int16_t x426 = -1;
	int32_t x428 = -28906;
	static int32_t t78 = -12516;

    t78 = (((x425*x426)<=x427)*x428);

    if (t78 != -28906) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x441 = 0U;
	static int64_t x442 = INT64_MAX;
	uint64_t x443 = UINT64_MAX;
	static uint64_t x444 = UINT64_MAX;
	uint64_t t79 = UINT64_MAX;

    t79 = (((x441*x442)<=x443)*x444);

    if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x445 = 26;
	int32_t x446 = -1;
	uint8_t x447 = 3U;
	int16_t x448 = -1;
	static int32_t t80 = -97442140;

    t80 = (((x445*x446)<=x447)*x448);

    if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x449 = -1;
	static volatile int8_t x450 = INT8_MIN;
	volatile int8_t x451 = 0;
	int8_t x452 = INT8_MAX;

    t81 = (((x449*x450)<=x451)*x452);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint8_t x461 = 2U;
	int32_t x462 = -1;
	int16_t x463 = INT16_MAX;
	uint8_t x464 = 52U;
	volatile int32_t t82 = -91135;

    t82 = (((x461*x462)<=x463)*x464);

    if (t82 != 52) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x470 = -1;
	static int8_t x471 = -1;
	volatile int32_t t83 = 94682659;

    t83 = (((x469*x470)<=x471)*x472);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x473 = -1LL;
	uint16_t x475 = UINT16_MAX;
	int8_t x476 = 0;
	int32_t t84 = -196713;

    t84 = (((x473*x474)<=x475)*x476);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint16_t x485 = 976U;
	uint64_t x486 = UINT64_MAX;
	int8_t x488 = INT8_MIN;
	volatile int32_t t85 = -1452;

    t85 = (((x485*x486)<=x487)*x488);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x489 = INT16_MIN;
	int16_t x490 = INT16_MIN;
	int8_t x491 = INT8_MIN;
	uint64_t x492 = UINT64_MAX;

    t86 = (((x489*x490)<=x491)*x492);

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x494 = -8116800606LL;
	int32_t t87 = -3;

    t87 = (((x493*x494)<=x495)*x496);

    if (t87 != 3) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x497 = 47;
	int16_t x498 = -19;
	static volatile uint16_t x499 = UINT16_MAX;
	int64_t x500 = -1LL;
	volatile int64_t t88 = -987018973173LL;

    t88 = (((x497*x498)<=x499)*x500);

    if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x502 = INT8_MIN;
	int64_t x503 = -13765096473314491LL;
	int16_t x504 = INT16_MIN;
	int32_t t89 = -10877;

    t89 = (((x501*x502)<=x503)*x504);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x506 = -1;
	uint8_t x507 = UINT8_MAX;
	int64_t x508 = -1LL;

    t90 = (((x505*x506)<=x507)*x508);

    if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x525 = 1;
	int64_t x527 = 44LL;
	int8_t x528 = 0;
	static volatile int32_t t91 = 1;

    t91 = (((x525*x526)<=x527)*x528);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x531 = 20U;
	int8_t x532 = 42;
	int32_t t92 = -49995;

    t92 = (((x529*x530)<=x531)*x532);

    if (t92 != 42) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint32_t x533 = 11225U;
	uint16_t x534 = 437U;
	volatile uint32_t x535 = UINT32_MAX;
	static volatile int32_t x536 = -1;
	volatile int32_t t93 = 0;

    t93 = (((x533*x534)<=x535)*x536);

    if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x537 = -47LL;
	volatile int16_t x538 = -13;
	int8_t x539 = INT8_MIN;
	uint32_t x540 = 63804545U;
	volatile uint32_t t94 = 11226U;

    t94 = (((x537*x538)<=x539)*x540);

    if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x541 = 0U;
	uint8_t x542 = 6U;
	volatile uint64_t x543 = UINT64_MAX;
	volatile int32_t t95 = INT32_MIN;

    t95 = (((x541*x542)<=x543)*x544);

    if (t95 != INT32_MIN) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint32_t x553 = 10824855U;
	int8_t x554 = INT8_MIN;
	static volatile int8_t x555 = 1;
	uint32_t x556 = 6521U;

    t96 = (((x553*x554)<=x555)*x556);

    if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x561 = -1;
	uint32_t x562 = 1U;
	int64_t x563 = 782324839442874318LL;
	int64_t x564 = INT64_MIN;

    t97 = (((x561*x562)<=x563)*x564);

    if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint32_t x565 = 4U;
	uint32_t x566 = 2451244U;
	static int16_t x567 = -6;
	uint32_t x568 = 1744197313U;

    t98 = (((x565*x566)<=x567)*x568);

    if (t98 != 1744197313U) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x573 = 6;
	uint16_t x574 = 8U;
	static uint8_t x575 = UINT8_MAX;
	volatile int64_t x576 = 12352LL;
	static int64_t t99 = -1LL;

    t99 = (((x573*x574)<=x575)*x576);

    if (t99 != 12352LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint32_t x581 = UINT32_MAX;
	int16_t x584 = INT16_MIN;
	volatile int32_t t100 = 754;

    t100 = (((x581*x582)<=x583)*x584);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x585 = 53LL;
	static uint64_t x586 = 637LLU;
	int16_t x587 = INT16_MIN;

    t101 = (((x585*x586)<=x587)*x588);

    if (t101 != 49) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x593 = UINT8_MAX;
	int16_t x594 = -1;
	uint8_t x596 = 105U;
	volatile int32_t t102 = 11489397;

    t102 = (((x593*x594)<=x595)*x596);

    if (t102 != 105) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint16_t x602 = 5933U;
	int64_t x603 = INT64_MAX;
	uint16_t x604 = 100U;
	volatile int32_t t103 = 867;

    t103 = (((x601*x602)<=x603)*x604);

    if (t103 != 100) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x609 = 4U;
	uint64_t x610 = UINT64_MAX;
	int16_t x611 = INT16_MIN;
	static int16_t x612 = INT16_MAX;

    t104 = (((x609*x610)<=x611)*x612);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x617 = -1;
	static int32_t x618 = 1;
	int8_t x619 = INT8_MIN;
	static int16_t x620 = INT16_MAX;

    t105 = (((x617*x618)<=x619)*x620);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint8_t x621 = 83U;
	int8_t x622 = -1;
	uint64_t x623 = UINT64_MAX;
	uint64_t x624 = 434482705LLU;
	volatile uint64_t t106 = 668981168LLU;

    t106 = (((x621*x622)<=x623)*x624);

    if (t106 != 434482705LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x629 = 4U;
	uint16_t x630 = 138U;
	static int16_t x631 = INT16_MAX;
	static int64_t x632 = -1LL;
	volatile int64_t t107 = -75LL;

    t107 = (((x629*x630)<=x631)*x632);

    if (t107 != -1LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x633 = -3;
	int8_t x634 = INT8_MAX;
	volatile int8_t x635 = INT8_MIN;
	uint8_t x636 = 36U;
	static volatile int32_t t108 = 0;

    t108 = (((x633*x634)<=x635)*x636);

    if (t108 != 36) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x637 = UINT8_MAX;
	static int32_t x638 = -1;
	volatile int64_t x639 = -2475593426604818945LL;
	uint64_t t109 = 242823585LLU;

    t109 = (((x637*x638)<=x639)*x640);

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x653 = 925U;
	volatile int32_t x654 = -42499;
	static int16_t x655 = 2200;
	int64_t x656 = -1LL;
	volatile int64_t t110 = 358475282741078438LL;

    t110 = (((x653*x654)<=x655)*x656);

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x657 = INT8_MIN;
	int8_t x658 = INT8_MAX;
	int16_t x659 = INT16_MAX;
	int32_t t111 = INT32_MIN;

    t111 = (((x657*x658)<=x659)*x660);

    if (t111 != INT32_MIN) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x661 = INT64_MAX;
	uint64_t x662 = 44972LLU;
	static volatile int64_t x664 = -27809800564LL;

    t112 = (((x661*x662)<=x663)*x664);

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x665 = -1;
	volatile uint16_t x666 = 56U;
	uint64_t x667 = UINT64_MAX;
	int8_t x668 = -8;
	int32_t t113 = -211;

    t113 = (((x665*x666)<=x667)*x668);

    if (t113 != -8) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint16_t x669 = 7U;
	int16_t x670 = 87;
	volatile int64_t x672 = INT64_MIN;

    t114 = (((x669*x670)<=x671)*x672);

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x679 = INT64_MIN;
	int16_t x680 = 13;
	static volatile int32_t t115 = -23198342;

    t115 = (((x677*x678)<=x679)*x680);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint64_t x681 = 83207616LLU;
	int16_t x682 = -61;
	int64_t x683 = -1LL;
	int8_t x684 = INT8_MAX;
	volatile int32_t t116 = 161001;

    t116 = (((x681*x682)<=x683)*x684);

    if (t116 != 127) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x685 = 0U;
	int8_t x686 = INT8_MIN;
	volatile uint32_t t117 = 933773U;

    t117 = (((x685*x686)<=x687)*x688);

    if (t117 != 0U) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x689 = -1LL;
	uint64_t x690 = UINT64_MAX;
	volatile uint64_t x692 = UINT64_MAX;
	uint64_t t118 = UINT64_MAX;

    t118 = (((x689*x690)<=x691)*x692);

    if (t118 != UINT64_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x693 = 1;
	static uint16_t x694 = UINT16_MAX;
	static int32_t x695 = -125110;
	int32_t x696 = INT32_MIN;
	static int32_t t119 = 37685512;

    t119 = (((x693*x694)<=x695)*x696);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint16_t x697 = UINT16_MAX;
	int16_t x698 = INT16_MIN;
	int16_t x699 = INT16_MAX;
	static volatile int64_t t120 = INT64_MAX;

    t120 = (((x697*x698)<=x699)*x700);

    if (t120 != INT64_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x702 = 1LLU;
	int8_t x703 = INT8_MIN;
	int32_t x704 = -1683916;
	int32_t t121 = -144740;

    t121 = (((x701*x702)<=x703)*x704);

    if (t121 != -1683916) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x705 = -1LL;
	int32_t t122 = INT32_MAX;

    t122 = (((x705*x706)<=x707)*x708);

    if (t122 != INT32_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int8_t x709 = 0;
	int8_t x710 = INT8_MIN;
	int32_t x711 = -2281871;
	static int32_t t123 = -159325;

    t123 = (((x709*x710)<=x711)*x712);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x717 = INT8_MIN;
	int16_t x718 = INT16_MIN;
	int64_t x719 = -1LL;
	volatile int16_t x720 = -151;
	int32_t t124 = 27768622;

    t124 = (((x717*x718)<=x719)*x720);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile uint16_t x721 = UINT16_MAX;
	volatile int32_t x722 = 49;
	int64_t x723 = -237215930LL;
	static volatile uint16_t x724 = 2U;
	int32_t t125 = -1;

    t125 = (((x721*x722)<=x723)*x724);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x729 = UINT64_MAX;
	int64_t x730 = INT64_MIN;
	uint32_t x731 = 192U;
	volatile uint32_t x732 = 679675201U;
	uint32_t t126 = 352525U;

    t126 = (((x729*x730)<=x731)*x732);

    if (t126 != 0U) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint16_t x733 = 6750U;
	int16_t x734 = INT16_MIN;
	int64_t x735 = INT64_MIN;
	volatile uint8_t x736 = UINT8_MAX;
	static int32_t t127 = -5415;

    t127 = (((x733*x734)<=x735)*x736);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x737 = 3345;
	int8_t x738 = INT8_MIN;
	static int16_t x740 = -1;
	static int32_t t128 = 2419;

    t128 = (((x737*x738)<=x739)*x740);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x749 = INT16_MIN;
	volatile int16_t x750 = INT16_MIN;
	uint8_t x751 = UINT8_MAX;
	static volatile int8_t x752 = INT8_MIN;
	static volatile int32_t t129 = -6473093;

    t129 = (((x749*x750)<=x751)*x752);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x758 = 2177U;
	int64_t x759 = -1LL;
	int32_t x760 = -1028380472;
	int32_t t130 = 17;

    t130 = (((x757*x758)<=x759)*x760);

    if (t130 != -1028380472) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x761 = -1;
	int8_t x762 = -1;
	uint8_t x763 = 0U;
	int8_t x764 = INT8_MIN;

    t131 = (((x761*x762)<=x763)*x764);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x765 = -295;
	uint16_t x766 = UINT16_MAX;
	static int8_t x767 = -13;
	int8_t x768 = INT8_MAX;
	volatile int32_t t132 = 5320774;

    t132 = (((x765*x766)<=x767)*x768);

    if (t132 != 127) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint16_t x769 = 2U;
	int8_t x770 = -4;
	int16_t x771 = -3;
	static int32_t t133 = 0;

    t133 = (((x769*x770)<=x771)*x772);

    if (t133 != 11) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x773 = 22U;
	int32_t x775 = INT32_MIN;
	int64_t x776 = -1699091479900652894LL;
	int64_t t134 = -5785LL;

    t134 = (((x773*x774)<=x775)*x776);

    if (t134 != -1699091479900652894LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x778 = -1;
	int8_t x779 = INT8_MIN;
	volatile int64_t x780 = 521971184872281LL;
	volatile int64_t t135 = 949LL;

    t135 = (((x777*x778)<=x779)*x780);

    if (t135 != 521971184872281LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x781 = INT8_MAX;
	int64_t x783 = INT64_MIN;
	uint64_t x784 = 264086306669213LLU;
	uint64_t t136 = 308120099934LLU;

    t136 = (((x781*x782)<=x783)*x784);

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int16_t x786 = 2074;
	static int8_t x787 = 0;
	static int32_t t137 = -38;

    t137 = (((x785*x786)<=x787)*x788);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x793 = INT8_MIN;
	static uint32_t x794 = 807417U;
	static uint64_t x795 = 1678272LLU;
	static int8_t x796 = -6;
	int32_t t138 = 484743946;

    t138 = (((x793*x794)<=x795)*x796);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x797 = 144748738;
	volatile int64_t x798 = -1LL;
	int64_t x799 = INT64_MIN;
	int32_t x800 = INT32_MIN;

    t139 = (((x797*x798)<=x799)*x800);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x805 = -1;
	int16_t x806 = INT16_MIN;
	int16_t x807 = INT16_MIN;
	static uint32_t x808 = UINT32_MAX;
	uint32_t t140 = 54U;

    t140 = (((x805*x806)<=x807)*x808);

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x809 = -109;
	static uint64_t x810 = UINT64_MAX;
	uint8_t x811 = 2U;
	uint64_t x812 = UINT64_MAX;

    t141 = (((x809*x810)<=x811)*x812);

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static int64_t x814 = -64877733221785LL;
	volatile uint64_t x815 = 7157161309359LLU;
	int32_t x816 = -1;
	volatile int32_t t142 = 2108003;

    t142 = (((x813*x814)<=x815)*x816);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x821 = INT16_MAX;
	int64_t x822 = 30862816LL;
	int32_t x823 = INT32_MIN;
	volatile int64_t t143 = -61133349507524LL;

    t143 = (((x821*x822)<=x823)*x824);

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x825 = -1;
	int32_t x826 = 5712;
	uint8_t x827 = 14U;
	uint8_t x828 = UINT8_MAX;
	int32_t t144 = -14145016;

    t144 = (((x825*x826)<=x827)*x828);

    if (t144 != 255) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x829 = INT8_MIN;
	volatile int16_t x830 = INT16_MAX;
	uint8_t x831 = 14U;
	int8_t x832 = 0;
	int32_t t145 = 128110;

    t145 = (((x829*x830)<=x831)*x832);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x833 = 115;
	static uint16_t x834 = UINT16_MAX;
	uint8_t x835 = 5U;
	int32_t t146 = -26155;

    t146 = (((x833*x834)<=x835)*x836);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x838 = 66U;
	int32_t x839 = INT32_MIN;
	volatile int16_t x840 = -1;
	static int32_t t147 = 382590787;

    t147 = (((x837*x838)<=x839)*x840);

    if (t147 != -1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x841 = -979;
	static volatile int8_t x842 = -1;
	volatile int32_t x843 = -22616;
	volatile int64_t x844 = INT64_MAX;

    t148 = (((x841*x842)<=x843)*x844);

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x845 = INT8_MIN;
	uint64_t x846 = 226390493674476101LLU;
	uint64_t x847 = UINT64_MAX;
	static uint8_t x848 = 7U;
	int32_t t149 = -5;

    t149 = (((x845*x846)<=x847)*x848);

    if (t149 != 7) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x849 = 235973LLU;
	uint32_t x851 = 7U;
	int8_t x852 = INT8_MIN;

    t150 = (((x849*x850)<=x851)*x852);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x857 = INT64_MAX;
	uint64_t x858 = 65960LLU;
	volatile int32_t x859 = INT32_MIN;
	int32_t x860 = INT32_MIN;
	static volatile int32_t t151 = -2;

    t151 = (((x857*x858)<=x859)*x860);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x861 = -1;
	uint16_t x862 = 8U;
	int32_t x864 = INT32_MIN;
	volatile int32_t t152 = 2;

    t152 = (((x861*x862)<=x863)*x864);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x873 = 3913432U;
	uint32_t x874 = 1700U;
	int8_t x875 = 0;
	static volatile int16_t x876 = INT16_MIN;

    t153 = (((x873*x874)<=x875)*x876);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x877 = -1LL;
	volatile uint32_t x878 = 365568777U;
	int64_t x879 = INT64_MAX;
	int32_t t154 = 55;

    t154 = (((x877*x878)<=x879)*x880);

    if (t154 != -1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x885 = 86U;
	volatile uint16_t x887 = 217U;
	int8_t x888 = INT8_MIN;
	static int32_t t155 = -1788;

    t155 = (((x885*x886)<=x887)*x888);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x889 = UINT8_MAX;
	volatile int32_t x891 = INT32_MIN;
	int8_t x892 = 1;
	int32_t t156 = -864784;

    t156 = (((x889*x890)<=x891)*x892);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x893 = INT16_MAX;
	uint8_t x894 = 0U;
	int16_t x895 = 4;
	int64_t x896 = INT64_MIN;
	volatile int64_t t157 = INT64_MIN;

    t157 = (((x893*x894)<=x895)*x896);

    if (t157 != INT64_MIN) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint32_t x897 = 6798146U;
	int8_t x898 = -31;
	int32_t x899 = INT32_MIN;
	static int16_t x900 = INT16_MIN;
	volatile int32_t t158 = 5743;

    t158 = (((x897*x898)<=x899)*x900);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x901 = INT64_MIN;
	volatile uint64_t x902 = UINT64_MAX;
	volatile int32_t x903 = 11623;
	int64_t x904 = -1LL;
	int64_t t159 = 784526LL;

    t159 = (((x901*x902)<=x903)*x904);

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x906 = -1;
	int32_t x907 = INT32_MAX;
	uint16_t x908 = 5U;
	volatile int32_t t160 = -752246;

    t160 = (((x905*x906)<=x907)*x908);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x909 = UINT16_MAX;
	volatile uint64_t x910 = 212501431982793510LLU;
	static volatile int32_t x911 = -1;
	static uint32_t x912 = UINT32_MAX;
	static uint32_t t161 = UINT32_MAX;

    t161 = (((x909*x910)<=x911)*x912);

    if (t161 != UINT32_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x913 = INT8_MIN;
	int16_t x914 = 132;
	uint32_t x915 = 614704983U;
	static int64_t x916 = INT64_MIN;

    t162 = (((x913*x914)<=x915)*x916);

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x926 = -1LL;
	int16_t x927 = INT16_MIN;
	uint32_t x928 = UINT32_MAX;
	uint32_t t163 = 1618U;

    t163 = (((x925*x926)<=x927)*x928);

    if (t163 != 0U) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int8_t x929 = -1;
	int32_t x930 = 177120;
	int8_t x931 = 1;
	int8_t x932 = -4;

    t164 = (((x929*x930)<=x931)*x932);

    if (t164 != -4) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x933 = INT16_MAX;
	static uint64_t x934 = 58977445631LLU;
	int32_t x935 = INT32_MAX;
	int16_t x936 = INT16_MIN;

    t165 = (((x933*x934)<=x935)*x936);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x945 = INT8_MAX;
	int64_t x946 = 8086042LL;
	uint8_t x947 = 0U;
	uint32_t x948 = UINT32_MAX;
	uint32_t t166 = 1808222817U;

    t166 = (((x945*x946)<=x947)*x948);

    if (t166 != 0U) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x951 = INT64_MIN;
	int8_t x952 = -10;
	int32_t t167 = -4963;

    t167 = (((x949*x950)<=x951)*x952);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint8_t x954 = 28U;
	int8_t x955 = 0;
	uint32_t x956 = 25U;
	volatile uint32_t t168 = 11U;

    t168 = (((x953*x954)<=x955)*x956);

    if (t168 != 25U) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x960 = -1;
	int32_t t169 = 160;

    t169 = (((x957*x958)<=x959)*x960);

    if (t169 != -1) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint64_t x965 = 171LLU;
	int8_t x966 = -15;
	uint8_t x967 = 4U;
	int32_t t170 = 11067476;

    t170 = (((x965*x966)<=x967)*x968);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x969 = UINT32_MAX;
	uint8_t x971 = 0U;
	uint16_t x972 = UINT16_MAX;
	int32_t t171 = 232;

    t171 = (((x969*x970)<=x971)*x972);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x977 = INT8_MIN;
	int16_t x978 = INT16_MAX;
	volatile int64_t x979 = INT64_MAX;
	volatile int64_t x980 = INT64_MAX;
	int64_t t172 = INT64_MAX;

    t172 = (((x977*x978)<=x979)*x980);

    if (t172 != INT64_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x985 = -1;
	int32_t x986 = -1;
	int8_t x987 = 0;
	static int32_t x988 = INT32_MIN;

    t173 = (((x985*x986)<=x987)*x988);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x994 = UINT64_MAX;
	static int32_t x996 = INT32_MIN;
	static volatile int32_t t174 = INT32_MIN;

    t174 = (((x993*x994)<=x995)*x996);

    if (t174 != INT32_MIN) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x1002 = INT32_MIN;
	volatile int16_t x1003 = 0;
	uint64_t x1004 = 11LLU;
	volatile uint64_t t175 = 3426725030LLU;

    t175 = (((x1001*x1002)<=x1003)*x1004);

    if (t175 != 11LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int8_t x1005 = INT8_MIN;
	volatile int16_t x1006 = 147;
	int64_t x1007 = -16653821LL;
	volatile int64_t x1008 = INT64_MIN;
	volatile int64_t t176 = -183037165174LL;

    t176 = (((x1005*x1006)<=x1007)*x1008);

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint64_t x1009 = 3820584739LLU;
	int32_t x1012 = 3175;
	volatile int32_t t177 = 1;

    t177 = (((x1009*x1010)<=x1011)*x1012);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x1013 = -6478;
	int16_t x1016 = 10030;

    t178 = (((x1013*x1014)<=x1015)*x1016);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x1017 = UINT32_MAX;
	uint8_t x1018 = UINT8_MAX;
	uint64_t x1019 = 2525LLU;
	volatile uint64_t t179 = 356358081875LLU;

    t179 = (((x1017*x1018)<=x1019)*x1020);

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile uint8_t x1021 = 83U;
	int32_t x1022 = -7742358;
	int32_t x1023 = -11;
	uint32_t x1024 = 113U;
	static uint32_t t180 = 29303U;

    t180 = (((x1021*x1022)<=x1023)*x1024);

    if (t180 != 113U) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint8_t x1025 = UINT8_MAX;
	static int8_t x1027 = INT8_MAX;
	uint32_t x1028 = 18U;
	volatile uint32_t t181 = 1006979703U;

    t181 = (((x1025*x1026)<=x1027)*x1028);

    if (t181 != 0U) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x1037 = INT8_MIN;
	int64_t x1038 = -53249726197LL;
	int16_t x1039 = INT16_MAX;
	int16_t x1040 = INT16_MIN;
	static int32_t t182 = 4302747;

    t182 = (((x1037*x1038)<=x1039)*x1040);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x1041 = -1;
	static int64_t x1042 = INT64_MAX;
	int64_t t183 = 2646916LL;

    t183 = (((x1041*x1042)<=x1043)*x1044);

    if (t183 != 2949558353LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x1045 = INT8_MAX;
	int8_t x1046 = 2;
	uint8_t x1047 = UINT8_MAX;
	int32_t t184 = -1063240641;

    t184 = (((x1045*x1046)<=x1047)*x1048);

    if (t184 != -1) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x1049 = INT8_MIN;
	volatile int8_t x1050 = -11;
	static int64_t x1051 = INT64_MIN;
	int8_t x1052 = INT8_MIN;
	static int32_t t185 = 18878689;

    t185 = (((x1049*x1050)<=x1051)*x1052);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x1054 = INT8_MAX;
	int8_t x1055 = -26;
	volatile int32_t t186 = 484;

    t186 = (((x1053*x1054)<=x1055)*x1056);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x1057 = -1LL;
	volatile int16_t x1058 = 1;
	int32_t x1059 = INT32_MIN;
	int64_t t187 = 1914905009968LL;

    t187 = (((x1057*x1058)<=x1059)*x1060);

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int64_t x1065 = 1LL;
	uint32_t x1066 = 53427U;
	int8_t x1067 = INT8_MIN;
	int32_t x1068 = -1;
	int32_t t188 = -35428214;

    t188 = (((x1065*x1066)<=x1067)*x1068);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x1073 = 815U;
	static int16_t x1074 = -3;
	static int8_t x1075 = -1;
	uint16_t x1076 = 385U;
	volatile int32_t t189 = -13;

    t189 = (((x1073*x1074)<=x1075)*x1076);

    if (t189 != 385) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x1077 = UINT16_MAX;
	int64_t x1078 = -1LL;
	volatile int8_t x1079 = INT8_MIN;
	uint32_t x1080 = UINT32_MAX;

    t190 = (((x1077*x1078)<=x1079)*x1080);

    if (t190 != UINT32_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint32_t x1086 = 902U;
	int32_t x1087 = INT32_MAX;
	static int64_t x1088 = INT64_MIN;
	int64_t t191 = -24200189LL;

    t191 = (((x1085*x1086)<=x1087)*x1088);

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x1091 = 7U;
	static int8_t x1092 = 0;

    t192 = (((x1089*x1090)<=x1091)*x1092);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x1102 = INT64_MIN;
	int64_t x1103 = 10874071170511637LL;
	static int16_t x1104 = -145;
	volatile int32_t t193 = 2;

    t193 = (((x1101*x1102)<=x1103)*x1104);

    if (t193 != -145) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x1109 = 1;
	volatile uint64_t x1110 = 0LLU;
	int8_t x1111 = INT8_MIN;
	int16_t x1112 = -1;
	volatile int32_t t194 = -7568;

    t194 = (((x1109*x1110)<=x1111)*x1112);

    if (t194 != -1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x1113 = 4908093192618LLU;
	static int8_t x1114 = INT8_MIN;
	uint64_t x1116 = 86918949LLU;
	static uint64_t t195 = 2484948LLU;

    t195 = (((x1113*x1114)<=x1115)*x1116);

    if (t195 != 86918949LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x1117 = 5U;
	int8_t x1118 = -1;
	int16_t x1119 = -1;
	static int32_t x1120 = INT32_MIN;
	static int32_t t196 = INT32_MIN;

    t196 = (((x1117*x1118)<=x1119)*x1120);

    if (t196 != INT32_MIN) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x1129 = INT64_MIN;
	uint64_t x1130 = 105LLU;
	int8_t x1131 = INT8_MIN;
	int16_t x1132 = -16182;
	static int32_t t197 = -6;

    t197 = (((x1129*x1130)<=x1131)*x1132);

    if (t197 != -16182) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1137 = INT8_MIN;
	static volatile int16_t x1138 = INT16_MIN;
	uint8_t x1139 = 1U;
	int8_t x1140 = INT8_MAX;

    t198 = (((x1137*x1138)<=x1139)*x1140);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x1141 = -1;
	volatile int64_t x1142 = 12407573LL;
	int16_t x1143 = 103;
	uint64_t x1144 = 737787LLU;
	uint64_t t199 = 420825085929LLU;

    t199 = (((x1141*x1142)<=x1143)*x1144);

    if (t199 != 737787LLU) { NG(); } else { ; }
	
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

