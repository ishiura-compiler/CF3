#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t t1 = 11082342259657341LLU;
int16_t x10 = -5687;
int16_t x11 = 214;
static uint32_t x16 = 2U;
static uint32_t t3 = 132U;
static uint32_t x19 = 61243U;
volatile int16_t x22 = -3993;
volatile int32_t t5 = 1;
volatile int16_t x30 = 1;
int16_t x31 = -1;
int32_t x34 = -64;
int64_t t9 = 1110LL;
int64_t x42 = INT64_MAX;
uint16_t x52 = 1U;
static int16_t x55 = -1;
uint8_t x57 = 20U;
int16_t x68 = 934;
static int8_t x70 = -1;
static volatile int32_t t16 = 651;
static int16_t x75 = -152;
uint8_t x79 = 0U;
static uint32_t x89 = UINT32_MAX;
static int64_t x91 = 3872LL;
int64_t t21 = 33LL;
static int8_t x93 = -7;
int16_t x95 = -8;
int8_t x100 = INT8_MIN;
uint32_t t23 = 7563U;
int8_t x104 = -1;
uint64_t t25 = 122170LLU;
uint8_t x109 = 97U;
uint16_t x113 = 26U;
int32_t x114 = INT32_MIN;
uint16_t x117 = 140U;
int64_t x119 = -17723716812076235LL;
volatile int64_t t28 = -6964009LL;
int64_t x122 = INT64_MAX;
volatile uint16_t x133 = UINT16_MAX;
uint16_t x140 = UINT16_MAX;
static int32_t x141 = INT32_MIN;
volatile int32_t x142 = INT32_MIN;
int16_t x153 = 3;
volatile int32_t x176 = INT32_MIN;
int64_t x177 = -166168556608254508LL;
static int64_t x188 = 79866501785LL;
static volatile int64_t t44 = -2001165383593LL;
int16_t x194 = INT16_MIN;
volatile uint16_t x195 = UINT16_MAX;
volatile uint64_t t46 = 122409960078LLU;
uint16_t x203 = UINT16_MAX;
uint64_t x204 = UINT64_MAX;
int64_t x212 = -1LL;
volatile uint64_t t49 = 1676728744837389LLU;
uint64_t x215 = 25974663LLU;
int32_t t51 = 65760863;
static volatile int16_t x221 = INT16_MIN;
static volatile int64_t x222 = -1LL;
static volatile int8_t x226 = 27;
static int32_t t54 = -860889;
int16_t x238 = INT16_MIN;
uint64_t x239 = UINT64_MAX;
static volatile int32_t x242 = INT32_MIN;
volatile int8_t x248 = INT8_MIN;
int32_t t58 = 74948074;
int64_t x254 = -6166092LL;
uint64_t t59 = 73252134768692085LLU;
uint8_t x265 = UINT8_MAX;
uint64_t t63 = 2484LLU;
int16_t x275 = 2;
uint32_t x282 = 1670234896U;
volatile int16_t x284 = INT16_MIN;
int32_t x286 = INT32_MAX;
int8_t x288 = INT8_MAX;
static int16_t x291 = 0;
int8_t x294 = -1;
volatile int16_t x295 = -1;
uint64_t x298 = 804182552742LLU;
volatile uint32_t t70 = 422U;
volatile int8_t x314 = INT8_MAX;
uint64_t x315 = 16LLU;
int32_t x318 = INT32_MAX;
int64_t x324 = -1LL;
int32_t x325 = INT32_MIN;
static int32_t x327 = INT32_MAX;
static uint16_t x342 = 17217U;
static int8_t x347 = -1;
volatile int16_t x348 = INT16_MAX;
volatile int32_t t82 = -526459463;
int32_t x349 = -1;
static uint64_t x350 = 23LLU;
int32_t t84 = -1;
int16_t x358 = INT16_MIN;
int16_t x361 = -1;
static int16_t x363 = -2;
uint32_t x366 = UINT32_MAX;
static volatile int16_t x372 = -1;
int32_t x374 = -1;
volatile uint64_t t89 = 5731560388220352710LLU;
static int8_t x378 = 3;
int64_t x380 = INT64_MIN;
int32_t x386 = -1;
int32_t x390 = INT32_MIN;
int32_t x398 = -1;
uint32_t x419 = UINT32_MAX;
int64_t x420 = INT64_MIN;


void f0(void) {
	static volatile int32_t x1 = INT32_MAX;
	volatile uint32_t x2 = UINT32_MAX;
	int16_t x3 = INT16_MIN;
	uint32_t x4 = 84543U;
	volatile uint32_t t0 = 251529958U;

	t0 = (((x1<x2)|x3)%x4);

	if (t0 != 65586U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	int8_t x6 = INT8_MAX;
	int32_t x7 = INT32_MAX;
	uint64_t x8 = 33519LLU;

	t1 = (((x5<x6)|x7)%x8);

	if (t1 != 21874LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = 1U;
	int8_t x12 = INT8_MIN;
	int32_t t2 = 47897128;

	t2 = (((x9<x10)|x11)%x12);

	if (t2 != 86) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = -235;
	uint16_t x14 = 438U;
	static int8_t x15 = -1;

	t3 = (((x13<x14)|x15)%x16);

	if (t3 != 1U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 0;
	int16_t x18 = INT16_MIN;
	int8_t x20 = INT8_MAX;
	uint32_t t4 = 13982U;

	t4 = (((x17<x18)|x19)%x20);

	if (t4 != 29U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MAX;
	int16_t x23 = 1;
	static int16_t x24 = 2444;

	t5 = (((x21<x22)|x23)%x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = INT16_MIN;
	volatile int8_t x26 = -35;
	uint8_t x27 = 96U;
	uint64_t x28 = 2803552831LLU;
	static volatile uint64_t t6 = 1949473639LLU;

	t6 = (((x25<x26)|x27)%x28);

	if (t6 != 97LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -1749574;
	int32_t x32 = INT32_MIN;
	volatile int32_t t7 = 498808582;

	t7 = (((x29<x30)|x31)%x32);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = UINT16_MAX;
	int32_t x35 = -17050;
	volatile int32_t x36 = INT32_MIN;
	static int32_t t8 = -5254;

	t8 = (((x33<x34)|x35)%x36);

	if (t8 != -17050) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = UINT32_MAX;
	int32_t x38 = -1;
	int64_t x39 = INT64_MAX;
	int8_t x40 = INT8_MIN;

	t9 = (((x37<x38)|x39)%x40);

	if (t9 != 127LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = 1794239298855LL;
	uint16_t x43 = 16U;
	uint32_t x44 = 109509235U;
	volatile uint32_t t10 = 0U;

	t10 = (((x41<x42)|x43)%x44);

	if (t10 != 17U) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x49 = -48;
	int64_t x50 = -781790LL;
	int32_t x51 = 16592160;
	volatile int32_t t11 = 1248;

	t11 = (((x49<x50)|x51)%x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x53 = -1;
	int32_t x54 = 73;
	int8_t x56 = INT8_MIN;
	static volatile int32_t t12 = 1;

	t12 = (((x53<x54)|x55)%x56);

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x58 = 1U;
	int8_t x59 = INT8_MIN;
	int16_t x60 = -1;
	static int32_t t13 = -27181;

	t13 = (((x57<x58)|x59)%x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x61 = 2U;
	static uint64_t x62 = 3391190607648LLU;
	static int64_t x63 = INT64_MAX;
	static int16_t x64 = 1;
	volatile int64_t t14 = -53910211734607LL;

	t14 = (((x61<x62)|x63)%x64);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x65 = UINT16_MAX;
	volatile int16_t x66 = INT16_MIN;
	static uint16_t x67 = 2169U;
	volatile int32_t t15 = -23533;

	t15 = (((x65<x66)|x67)%x68);

	if (t15 != 301) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = INT64_MIN;
	static int16_t x71 = -162;
	static int32_t x72 = INT32_MAX;

	t16 = (((x69<x70)|x71)%x72);

	if (t16 != -161) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = 1486LL;
	uint32_t x74 = 973U;
	volatile int64_t x76 = INT64_MIN;
	volatile int64_t t17 = 4451857LL;

	t17 = (((x73<x74)|x75)%x76);

	if (t17 != -152LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = -14550933477570896LL;
	volatile int32_t x78 = -1;
	uint16_t x80 = UINT16_MAX;
	static int32_t t18 = -3;

	t18 = (((x77<x78)|x79)%x80);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x81 = 17946265915LLU;
	int16_t x82 = INT16_MIN;
	static uint64_t x83 = UINT64_MAX;
	int8_t x84 = INT8_MIN;
	static volatile uint64_t t19 = 24559348274004LLU;

	t19 = (((x81<x82)|x83)%x84);

	if (t19 != 127LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x85 = INT8_MAX;
	static int32_t x86 = -1;
	volatile int32_t x87 = INT32_MIN;
	volatile int8_t x88 = INT8_MIN;
	volatile int32_t t20 = -213651458;

	t20 = (((x85<x86)|x87)%x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x90 = -3;
	int32_t x92 = INT32_MAX;

	t21 = (((x89<x90)|x91)%x92);

	if (t21 != 3872LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x94 = INT8_MIN;
	uint32_t x96 = UINT32_MAX;
	uint32_t t22 = 163805126U;

	t22 = (((x93<x94)|x95)%x96);

	if (t22 != 4294967288U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x97 = 13U;
	uint16_t x98 = 375U;
	uint32_t x99 = UINT32_MAX;

	t23 = (((x97<x98)|x99)%x100);

	if (t23 != 127U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = INT8_MIN;
	int64_t x102 = -2659871667908756LL;
	int8_t x103 = -1;
	int32_t t24 = 20661;

	t24 = (((x101<x102)|x103)%x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x105 = INT32_MIN;
	static int64_t x106 = INT64_MAX;
	uint64_t x107 = 19LLU;
	int64_t x108 = INT64_MIN;

	t25 = (((x105<x106)|x107)%x108);

	if (t25 != 19LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x110 = INT32_MIN;
	volatile uint64_t x111 = 1907834740235435760LLU;
	static int64_t x112 = INT64_MIN;
	static volatile uint64_t t26 = 3776LLU;

	t26 = (((x109<x110)|x111)%x112);

	if (t26 != 1907834740235435760LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x115 = INT8_MAX;
	uint8_t x116 = 12U;
	volatile int32_t t27 = 1;

	t27 = (((x113<x114)|x115)%x116);

	if (t27 != 7) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x118 = UINT16_MAX;
	int8_t x120 = INT8_MIN;

	t28 = (((x117<x118)|x119)%x120);

	if (t28 != -75LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = INT64_MAX;
	static volatile int32_t x123 = INT32_MIN;
	static int64_t x124 = INT64_MIN;
	static volatile int64_t t29 = -25084LL;

	t29 = (((x121<x122)|x123)%x124);

	if (t29 != -2147483648LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = -435413127927062724LL;
	int64_t x126 = -26889606430210LL;
	uint32_t x127 = 1U;
	int64_t x128 = 1090681745851LL;
	int64_t t30 = -139926LL;

	t30 = (((x125<x126)|x127)%x128);

	if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = -10595;
	volatile int8_t x130 = INT8_MIN;
	volatile int16_t x131 = INT16_MAX;
	int32_t x132 = INT32_MAX;
	volatile int32_t t31 = -1;

	t31 = (((x129<x130)|x131)%x132);

	if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x134 = INT8_MIN;
	int8_t x135 = -59;
	int8_t x136 = -1;
	static int32_t t32 = 52624;

	t32 = (((x133<x134)|x135)%x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = 7;
	int64_t x138 = INT64_MIN;
	int64_t x139 = -1428065LL;
	volatile int64_t t33 = -891881360353019696LL;

	t33 = (((x137<x138)|x139)%x140);

	if (t33 != -51830LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x143 = INT16_MAX;
	int16_t x144 = INT16_MAX;
	int32_t t34 = -18734775;

	t34 = (((x141<x142)|x143)%x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x145 = -37152677LL;
	int16_t x146 = INT16_MAX;
	volatile int16_t x147 = -1;
	int64_t x148 = 893186122824LL;
	int64_t t35 = -271789536076910601LL;

	t35 = (((x145<x146)|x147)%x148);

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x154 = -1;
	uint64_t x155 = 2LLU;
	volatile int8_t x156 = 1;
	uint64_t t36 = 3LLU;

	t36 = (((x153<x154)|x155)%x156);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x157 = 3U;
	volatile int8_t x158 = INT8_MIN;
	int8_t x159 = -1;
	int32_t x160 = -1684;
	volatile int32_t t37 = 694696;

	t37 = (((x157<x158)|x159)%x160);

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x161 = INT64_MIN;
	volatile int8_t x162 = 14;
	static uint32_t x163 = UINT32_MAX;
	int32_t x164 = -1;
	uint32_t t38 = 1164851U;

	t38 = (((x161<x162)|x163)%x164);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x165 = 13U;
	volatile int8_t x166 = INT8_MIN;
	static volatile int64_t x167 = INT64_MIN;
	uint32_t x168 = 17267U;
	static volatile int64_t t39 = -245219992798689613LL;

	t39 = (((x165<x166)|x167)%x168);

	if (t39 != -15260LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x173 = 2;
	int16_t x174 = INT16_MIN;
	int64_t x175 = -1LL;
	static volatile int64_t t40 = 3095592416LL;

	t40 = (((x173<x174)|x175)%x176);

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x178 = 5158967U;
	int16_t x179 = -3262;
	int64_t x180 = -1LL;
	static int64_t t41 = -19108459524518956LL;

	t41 = (((x177<x178)|x179)%x180);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x181 = 6499331317914LLU;
	static uint32_t x182 = UINT32_MAX;
	uint32_t x183 = 1860071044U;
	static volatile uint8_t x184 = UINT8_MAX;
	static uint32_t t42 = 214U;

	t42 = (((x181<x182)|x183)%x184);

	if (t42 != 64U) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x185 = UINT64_MAX;
	static uint32_t x186 = 377U;
	volatile int32_t x187 = -1901;
	volatile int64_t t43 = 54LL;

	t43 = (((x185<x186)|x187)%x188);

	if (t43 != -1901LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x189 = UINT32_MAX;
	volatile int16_t x190 = -7908;
	int64_t x191 = 632661399181870714LL;
	static uint8_t x192 = UINT8_MAX;

	t44 = (((x189<x190)|x191)%x192);

	if (t44 != 139LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x193 = INT32_MIN;
	static int8_t x196 = -1;
	volatile int32_t t45 = 3883043;

	t45 = (((x193<x194)|x195)%x196);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x197 = -2283;
	static uint16_t x198 = UINT16_MAX;
	uint64_t x199 = 2527977752121233LLU;
	uint64_t x200 = 1LLU;

	t46 = (((x197<x198)|x199)%x200);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x201 = -1;
	static int32_t x202 = -2047948;
	volatile uint64_t t47 = 0LLU;

	t47 = (((x201<x202)|x203)%x204);

	if (t47 != 65535LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x205 = -1;
	int16_t x206 = -240;
	static int64_t x207 = INT64_MAX;
	int32_t x208 = -3390;
	static volatile int64_t t48 = -52194LL;

	t48 = (((x205<x206)|x207)%x208);

	if (t48 != 127LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x209 = UINT64_MAX;
	int32_t x210 = INT32_MIN;
	uint64_t x211 = 1109530659171328637LLU;

	t49 = (((x209<x210)|x211)%x212);

	if (t49 != 1109530659171328637LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x213 = INT64_MIN;
	int16_t x214 = INT16_MIN;
	int32_t x216 = INT32_MIN;
	volatile uint64_t t50 = 43026LLU;

	t50 = (((x213<x214)|x215)%x216);

	if (t50 != 25974663LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x217 = 20287;
	static int32_t x218 = -1;
	volatile uint8_t x219 = UINT8_MAX;
	volatile int32_t x220 = 5486;

	t51 = (((x217<x218)|x219)%x220);

	if (t51 != 255) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x223 = INT16_MIN;
	int8_t x224 = -1;
	volatile int32_t t52 = 1;

	t52 = (((x221<x222)|x223)%x224);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x225 = 22832;
	int64_t x227 = INT64_MIN;
	volatile int8_t x228 = -1;
	volatile int64_t t53 = 1186717620668977734LL;

	t53 = (((x225<x226)|x227)%x228);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x229 = -3465693LL;
	volatile int32_t x230 = INT32_MIN;
	int16_t x231 = -1;
	uint8_t x232 = 5U;

	t54 = (((x229<x230)|x231)%x232);

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x237 = -1;
	int32_t x240 = -639034037;
	uint64_t t55 = 1124917959LLU;

	t55 = (((x237<x238)|x239)%x240);

	if (t55 != 639034036LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x241 = INT16_MAX;
	int64_t x243 = -1LL;
	volatile int8_t x244 = 20;
	volatile int64_t t56 = -1410443057900LL;

	t56 = (((x241<x242)|x243)%x244);

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x245 = INT64_MIN;
	uint64_t x246 = UINT64_MAX;
	int16_t x247 = INT16_MAX;
	int32_t t57 = -172196263;

	t57 = (((x245<x246)|x247)%x248);

	if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x249 = INT64_MAX;
	int64_t x250 = -1LL;
	int16_t x251 = INT16_MIN;
	int16_t x252 = INT16_MAX;

	t58 = (((x249<x250)|x251)%x252);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x253 = -1;
	volatile uint32_t x255 = 69170U;
	uint64_t x256 = 249546995831274LLU;

	t59 = (((x253<x254)|x255)%x256);

	if (t59 != 69170LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x257 = INT16_MAX;
	int32_t x258 = INT32_MIN;
	static int8_t x259 = INT8_MIN;
	int8_t x260 = -6;
	volatile int32_t t60 = -13678697;

	t60 = (((x257<x258)|x259)%x260);

	if (t60 != -2) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x261 = 1;
	uint32_t x262 = UINT32_MAX;
	volatile int32_t x263 = INT32_MIN;
	int16_t x264 = INT16_MIN;
	volatile int32_t t61 = 707;

	t61 = (((x261<x262)|x263)%x264);

	if (t61 != -32767) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x266 = INT16_MIN;
	static uint16_t x267 = 100U;
	uint16_t x268 = 358U;
	int32_t t62 = 24;

	t62 = (((x265<x266)|x267)%x268);

	if (t62 != 100) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x269 = INT64_MAX;
	uint32_t x270 = 2120861741U;
	uint64_t x271 = 59259968LLU;
	uint8_t x272 = 24U;

	t63 = (((x269<x270)|x271)%x272);

	if (t63 != 8LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x273 = 2U;
	volatile int64_t x274 = -11LL;
	int16_t x276 = 1;
	static int32_t t64 = 13201;

	t64 = (((x273<x274)|x275)%x276);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x277 = INT16_MAX;
	uint64_t x278 = 1725LLU;
	int64_t x279 = -37659205486742271LL;
	uint32_t x280 = 517U;
	int64_t t65 = 30840526305LL;

	t65 = (((x277<x278)|x279)%x280);

	if (t65 != -487LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x281 = INT32_MAX;
	int64_t x283 = INT64_MIN;
	volatile int64_t t66 = -1LL;

	t66 = (((x281<x282)|x283)%x284);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x285 = 111LL;
	int32_t x287 = -1;
	int32_t t67 = 1646816;

	t67 = (((x285<x286)|x287)%x288);

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x289 = 1134218308LLU;
	uint32_t x290 = 118824U;
	static int32_t x292 = INT32_MAX;
	int32_t t68 = 46745600;

	t68 = (((x289<x290)|x291)%x292);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x293 = -371946722;
	static volatile uint64_t x296 = UINT64_MAX;
	uint64_t t69 = 984526122792LLU;

	t69 = (((x293<x294)|x295)%x296);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x297 = UINT64_MAX;
	static uint32_t x299 = 806723U;
	uint32_t x300 = 3805U;

	t70 = (((x297<x298)|x299)%x300);

	if (t70 != 63U) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x301 = UINT64_MAX;
	uint8_t x302 = 4U;
	int8_t x303 = INT8_MIN;
	int32_t x304 = INT32_MIN;
	int32_t t71 = 311;

	t71 = (((x301<x302)|x303)%x304);

	if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x305 = UINT32_MAX;
	uint64_t x306 = 65309709630571LLU;
	int64_t x307 = INT64_MIN;
	int16_t x308 = 193;
	int64_t t72 = -43910347LL;

	t72 = (((x305<x306)|x307)%x308);

	if (t72 != -41LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int64_t x309 = -48LL;
	int64_t x310 = INT64_MAX;
	int32_t x311 = INT32_MIN;
	int16_t x312 = 1914;
	static int32_t t73 = 288;

	t73 = (((x309<x310)|x311)%x312);

	if (t73 != -529) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x313 = -1LL;
	static volatile uint8_t x316 = 17U;
	volatile uint64_t t74 = 69273358706531608LLU;

	t74 = (((x313<x314)|x315)%x316);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x317 = INT64_MIN;
	int8_t x319 = INT8_MIN;
	int32_t x320 = -1336693;
	static int32_t t75 = -1;

	t75 = (((x317<x318)|x319)%x320);

	if (t75 != -127) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x321 = INT16_MIN;
	int32_t x322 = INT32_MIN;
	int64_t x323 = INT64_MIN;
	volatile int64_t t76 = 0LL;

	t76 = (((x321<x322)|x323)%x324);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x326 = 275LLU;
	int64_t x328 = -1LL;
	volatile int64_t t77 = -347LL;

	t77 = (((x325<x326)|x327)%x328);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x329 = INT16_MIN;
	static int16_t x330 = -1;
	uint16_t x331 = 16U;
	static volatile int32_t x332 = -1;
	int32_t t78 = -42;

	t78 = (((x329<x330)|x331)%x332);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x333 = -1590710;
	static int64_t x334 = INT64_MIN;
	uint64_t x335 = 5924290943LLU;
	int64_t x336 = 200714288376LL;
	static uint64_t t79 = 12291957389LLU;

	t79 = (((x333<x334)|x335)%x336);

	if (t79 != 5924290943LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x337 = 3U;
	uint16_t x338 = 212U;
	volatile int16_t x339 = INT16_MIN;
	volatile int32_t x340 = INT32_MIN;
	volatile int32_t t80 = 2562;

	t80 = (((x337<x338)|x339)%x340);

	if (t80 != -32767) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x341 = UINT64_MAX;
	uint32_t x343 = 1400356290U;
	int32_t x344 = INT32_MIN;
	volatile uint32_t t81 = 1U;

	t81 = (((x341<x342)|x343)%x344);

	if (t81 != 1400356290U) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x345 = UINT64_MAX;
	int32_t x346 = -1;

	t82 = (((x345<x346)|x347)%x348);

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x351 = -1;
	int32_t x352 = INT32_MAX;
	int32_t t83 = 502;

	t83 = (((x349<x350)|x351)%x352);

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x353 = INT8_MIN;
	static volatile int8_t x354 = -3;
	int32_t x355 = -1;
	uint16_t x356 = 758U;

	t84 = (((x353<x354)|x355)%x356);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint16_t x357 = 7445U;
	int8_t x359 = INT8_MIN;
	volatile int32_t x360 = -57092751;
	int32_t t85 = -1;

	t85 = (((x357<x358)|x359)%x360);

	if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x362 = 2928488703606LLU;
	int8_t x364 = -1;
	static volatile int32_t t86 = 10932;

	t86 = (((x361<x362)|x363)%x364);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x365 = INT16_MAX;
	volatile int8_t x367 = INT8_MIN;
	int32_t x368 = INT32_MIN;
	volatile int32_t t87 = 33738;

	t87 = (((x365<x366)|x367)%x368);

	if (t87 != -127) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x369 = INT32_MAX;
	int8_t x370 = INT8_MIN;
	uint8_t x371 = UINT8_MAX;
	int32_t t88 = 84;

	t88 = (((x369<x370)|x371)%x372);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x373 = INT64_MIN;
	int64_t x375 = 131201570499330LL;
	static uint64_t x376 = UINT64_MAX;

	t89 = (((x373<x374)|x375)%x376);

	if (t89 != 131201570499331LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x377 = -1;
	int16_t x379 = INT16_MIN;
	static volatile int64_t t90 = -311869468LL;

	t90 = (((x377<x378)|x379)%x380);

	if (t90 != -32767LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x381 = -14;
	int16_t x382 = INT16_MIN;
	uint8_t x383 = 0U;
	uint16_t x384 = 28490U;
	static volatile int32_t t91 = 2166;

	t91 = (((x381<x382)|x383)%x384);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x385 = 952833044531917LL;
	int32_t x387 = -1;
	volatile int16_t x388 = INT16_MIN;
	volatile int32_t t92 = -375146442;

	t92 = (((x385<x386)|x387)%x388);

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x389 = -1;
	int32_t x391 = INT32_MIN;
	int8_t x392 = INT8_MAX;
	volatile int32_t t93 = 40385;

	t93 = (((x389<x390)|x391)%x392);

	if (t93 != -8) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x393 = INT8_MIN;
	static volatile int16_t x394 = -1;
	int32_t x395 = -1;
	int16_t x396 = INT16_MIN;
	int32_t t94 = 88157;

	t94 = (((x393<x394)|x395)%x396);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x397 = UINT32_MAX;
	int16_t x399 = INT16_MIN;
	uint8_t x400 = 1U;
	volatile int32_t t95 = -5;

	t95 = (((x397<x398)|x399)%x400);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x401 = INT64_MAX;
	int32_t x402 = -1;
	int32_t x403 = 35098;
	volatile int64_t x404 = INT64_MIN;
	int64_t t96 = 152212022806161LL;

	t96 = (((x401<x402)|x403)%x404);

	if (t96 != 35098LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x405 = INT16_MIN;
	int64_t x406 = INT64_MIN;
	int64_t x407 = -2409583123384006004LL;
	int32_t x408 = 9698;
	volatile int64_t t97 = 1126865118890LL;

	t97 = (((x405<x406)|x407)%x408);

	if (t97 != -6792LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x413 = 159;
	int64_t x414 = -6112LL;
	int64_t x415 = 79476934599LL;
	uint64_t x416 = 5748LLU;
	volatile uint64_t t98 = 2750355519433LLU;

	t98 = (((x413<x414)|x415)%x416);

	if (t98 != 5367LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x417 = 485;
	int8_t x418 = -5;
	static volatile int64_t t99 = -587271023LL;

	t99 = (((x417<x418)|x419)%x420);

	if (t99 != 4294967295LL) { NG(); } else { ; }
	
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


    return 0;
}

