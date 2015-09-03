#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = -1070;
volatile int32_t t0 = -74;
uint16_t x5 = 7U;
int64_t x8 = INT64_MIN;
int16_t x20 = INT16_MAX;
uint8_t x22 = UINT8_MAX;
int8_t x24 = INT8_MIN;
volatile uint8_t x26 = 8U;
int8_t x28 = INT8_MIN;
volatile uint16_t x32 = 110U;
volatile int32_t t8 = -19893;
volatile int8_t x42 = 1;
int8_t x44 = INT8_MIN;
int16_t x46 = -30;
volatile int32_t x48 = INT32_MIN;
int8_t x64 = INT8_MAX;
int32_t t15 = 0;
int32_t t16 = -172;
int64_t x69 = -8080394LL;
uint32_t x70 = 65820868U;
int32_t t17 = 213;
uint16_t x74 = 1U;
static volatile int64_t x80 = INT64_MAX;
uint64_t x81 = 0LLU;
static int8_t x85 = -6;
uint32_t x100 = UINT32_MAX;
int32_t t24 = -3343;
uint64_t x112 = UINT64_MAX;
uint16_t x113 = 3U;
static uint64_t x115 = UINT64_MAX;
volatile int32_t t27 = 11551;
int8_t x117 = 0;
int32_t t28 = 166;
uint16_t x121 = UINT16_MAX;
int32_t t29 = -7;
volatile int64_t x126 = 3947880689206111207LL;
int32_t x127 = -1;
int32_t t33 = 31590;
int16_t x146 = INT16_MIN;
int64_t x148 = INT64_MAX;
int16_t x151 = -1;
int16_t x157 = INT16_MIN;
int8_t x158 = INT8_MIN;
int64_t x162 = INT64_MIN;
volatile int64_t x164 = INT64_MAX;
int32_t t39 = -53729178;
int8_t x167 = INT8_MIN;
volatile int32_t t40 = 6;
static int32_t x177 = INT32_MIN;
volatile int8_t x182 = INT8_MAX;
uint8_t x187 = 0U;
uint64_t x193 = 4763241043LLU;
static volatile int32_t t50 = 5;
int8_t x220 = INT8_MIN;
volatile int32_t t54 = 57995;
uint16_t x230 = UINT16_MAX;
static int8_t x241 = INT8_MIN;
uint8_t x244 = UINT8_MAX;
static volatile int16_t x245 = -1;
int32_t x251 = 71724579;
uint16_t x254 = 6U;
volatile int8_t x257 = 0;
int16_t x259 = INT16_MIN;
uint8_t x263 = UINT8_MAX;
static int64_t x264 = -1LL;
uint16_t x265 = 208U;
volatile int8_t x267 = -1;
int64_t x268 = -1LL;
int32_t x273 = INT32_MAX;
uint16_t x284 = 859U;
int32_t t69 = 617301010;
int32_t x287 = -24;
int32_t t70 = -39598;
uint16_t x292 = 1U;
static int64_t x303 = -962LL;
int64_t x304 = INT64_MAX;
int8_t x311 = -1;
int64_t x312 = INT64_MIN;
static int16_t x313 = 0;
volatile int8_t x314 = INT8_MIN;
int8_t x323 = -1;
int32_t t79 = 56503014;
int32_t t82 = -116195;
int64_t x343 = -1LL;
static volatile int16_t x348 = -1;
static int32_t t85 = 712;
int8_t x351 = INT8_MIN;
volatile int64_t x352 = -1LL;
uint32_t x356 = 144U;
int8_t x359 = INT8_MIN;
static volatile int32_t t89 = 22;
static uint32_t x368 = 240U;
uint32_t x374 = 45026U;
int16_t x376 = 904;
int32_t x379 = INT32_MIN;
int8_t x380 = -1;
static int32_t t94 = -1;
int8_t x385 = -4;
static uint64_t x387 = UINT64_MAX;
volatile int64_t x389 = INT64_MIN;
static int16_t x390 = INT16_MIN;
static int8_t x403 = INT8_MIN;


void f0(void) {
	int16_t x1 = INT16_MIN;
	uint32_t x2 = UINT32_MAX;
	uint64_t x4 = UINT64_MAX;

	t0 = ((x1%x2)<(x3<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint16_t x6 = 87U;
	static int64_t x7 = INT64_MIN;
	volatile int32_t t1 = 118121806;

	t1 = ((x5%x6)<(x7<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	uint32_t x10 = 511918U;
	volatile int64_t x11 = -1177LL;
	static int32_t x12 = INT32_MAX;
	int32_t t2 = 2018309;

	t2 = ((x9%x10)<(x11<x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = INT64_MIN;
	int64_t x14 = -1LL;
	int8_t x15 = INT8_MIN;
	static int64_t x16 = INT64_MAX;
	int32_t t3 = 27;

	t3 = ((x13%x14)<(x15<x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = 425170379174275LL;
	int64_t x18 = -1LL;
	static int16_t x19 = INT16_MIN;
	volatile int32_t t4 = 31;

	t4 = ((x17%x18)<(x19<x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	int32_t x23 = INT32_MAX;
	volatile int32_t t5 = -63673204;

	t5 = ((x21%x22)<(x23<x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = INT64_MIN;
	static volatile int16_t x27 = -1;
	volatile int32_t t6 = -71938394;

	t6 = ((x25%x26)<(x27<x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = UINT64_MAX;
	int32_t x30 = INT32_MIN;
	int8_t x31 = -3;
	static volatile int32_t t7 = 19405;

	t7 = ((x29%x30)<(x31<x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1;
	uint64_t x34 = 2244367116906866LLU;
	int16_t x35 = -1;
	static int64_t x36 = INT64_MAX;

	t8 = ((x33%x34)<(x35<x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = -1449;
	uint16_t x38 = UINT16_MAX;
	int64_t x39 = -1LL;
	static uint32_t x40 = 125U;
	volatile int32_t t9 = 15868;

	t9 = ((x37%x38)<(x39<x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 1LLU;
	volatile uint16_t x43 = UINT16_MAX;
	int32_t t10 = 14677;

	t10 = ((x41%x42)<(x43<x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x45 = 8543434U;
	int16_t x47 = -260;
	volatile int32_t t11 = 0;

	t11 = ((x45%x46)<(x47<x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x49 = INT32_MIN;
	uint8_t x50 = UINT8_MAX;
	int16_t x51 = INT16_MAX;
	uint16_t x52 = UINT16_MAX;
	volatile int32_t t12 = 7475304;

	t12 = ((x49%x50)<(x51<x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = 30197573052436LL;
	uint64_t x54 = 2684729027LLU;
	int32_t x55 = INT32_MAX;
	int64_t x56 = -1LL;
	volatile int32_t t13 = 52;

	t13 = ((x53%x54)<(x55<x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	int32_t x58 = INT32_MIN;
	int16_t x59 = 761;
	static int64_t x60 = INT64_MIN;
	int32_t t14 = -2645923;

	t14 = ((x57%x58)<(x59<x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -7386305544758307LL;
	int16_t x62 = INT16_MIN;
	static uint16_t x63 = 0U;

	t15 = ((x61%x62)<(x63<x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -2;
	volatile uint16_t x66 = 442U;
	static volatile int32_t x67 = -6261020;
	int8_t x68 = INT8_MIN;

	t16 = ((x65%x66)<(x67<x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x71 = -1LL;
	int32_t x72 = INT32_MAX;

	t17 = ((x69%x70)<(x71<x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x73 = 1152181003U;
	uint8_t x75 = 4U;
	uint32_t x76 = UINT32_MAX;
	int32_t t18 = 57;

	t18 = ((x73%x74)<(x75<x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x77 = INT16_MIN;
	int8_t x78 = -1;
	uint64_t x79 = 1997441412120558LLU;
	volatile int32_t t19 = 431994;

	t19 = ((x77%x78)<(x79<x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x82 = UINT32_MAX;
	static int32_t x83 = INT32_MIN;
	uint8_t x84 = UINT8_MAX;
	volatile int32_t t20 = -1;

	t20 = ((x81%x82)<(x83<x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x86 = 3U;
	static uint64_t x87 = UINT64_MAX;
	volatile int64_t x88 = INT64_MIN;
	int32_t t21 = 28;

	t21 = ((x85%x86)<(x87<x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = INT32_MIN;
	int64_t x94 = INT64_MAX;
	uint32_t x95 = UINT32_MAX;
	uint64_t x96 = UINT64_MAX;
	int32_t t22 = 1978432;

	t22 = ((x93%x94)<(x95<x96));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = 3859065841LL;
	int64_t x98 = -1LL;
	int64_t x99 = -1LL;
	volatile int32_t t23 = 11;

	t23 = ((x97%x98)<(x99<x100));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x101 = INT32_MIN;
	static int8_t x102 = -1;
	volatile int32_t x103 = -12027901;
	int16_t x104 = INT16_MIN;

	t24 = ((x101%x102)<(x103<x104));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x105 = UINT32_MAX;
	int8_t x106 = -4;
	static volatile int8_t x107 = -7;
	uint8_t x108 = 15U;
	volatile int32_t t25 = 5111;

	t25 = ((x105%x106)<(x107<x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = INT32_MIN;
	uint16_t x110 = 6U;
	int8_t x111 = INT8_MAX;
	static volatile int32_t t26 = -10;

	t26 = ((x109%x110)<(x111<x112));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x114 = 4033U;
	int16_t x116 = -1;

	t27 = ((x113%x114)<(x115<x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x118 = 1U;
	volatile int16_t x119 = INT16_MIN;
	int64_t x120 = -4016821301989419968LL;

	t28 = ((x117%x118)<(x119<x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x122 = -1;
	int16_t x123 = INT16_MAX;
	uint64_t x124 = UINT64_MAX;

	t29 = ((x121%x122)<(x123<x124));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x125 = UINT64_MAX;
	int32_t x128 = INT32_MIN;
	volatile int32_t t30 = 261441;

	t30 = ((x125%x126)<(x127<x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x129 = INT32_MAX;
	int16_t x130 = INT16_MAX;
	int8_t x131 = -1;
	int64_t x132 = 80362233274LL;
	static int32_t t31 = 570085;

	t31 = ((x129%x130)<(x131<x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x133 = INT64_MAX;
	int16_t x134 = INT16_MIN;
	int64_t x135 = INT64_MIN;
	uint32_t x136 = 26U;
	volatile int32_t t32 = -706;

	t32 = ((x133%x134)<(x135<x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = -1;
	int16_t x138 = 266;
	int8_t x139 = -5;
	uint16_t x140 = 3U;

	t33 = ((x137%x138)<(x139<x140));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x141 = INT64_MIN;
	uint8_t x142 = UINT8_MAX;
	volatile int64_t x143 = 682LL;
	volatile int16_t x144 = INT16_MAX;
	int32_t t34 = 1137189;

	t34 = ((x141%x142)<(x143<x144));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x145 = 79095111LL;
	int8_t x147 = INT8_MIN;
	int32_t t35 = 2191778;

	t35 = ((x145%x146)<(x147<x148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x149 = INT8_MIN;
	static volatile uint16_t x150 = UINT16_MAX;
	int32_t x152 = -6;
	int32_t t36 = -1;

	t36 = ((x149%x150)<(x151<x152));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x153 = UINT8_MAX;
	static int8_t x154 = -16;
	uint64_t x155 = 615664902331039732LLU;
	int32_t x156 = INT32_MIN;
	int32_t t37 = 105;

	t37 = ((x153%x154)<(x155<x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint32_t x159 = UINT32_MAX;
	uint64_t x160 = UINT64_MAX;
	static int32_t t38 = -806901729;

	t38 = ((x157%x158)<(x159<x160));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x161 = UINT64_MAX;
	static uint64_t x163 = 2021717750LLU;

	t39 = ((x161%x162)<(x163<x164));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x165 = INT8_MAX;
	uint64_t x166 = UINT64_MAX;
	int64_t x168 = INT64_MIN;

	t40 = ((x165%x166)<(x167<x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x169 = -5958;
	uint16_t x170 = 1U;
	uint32_t x171 = 12666268U;
	uint64_t x172 = UINT64_MAX;
	int32_t t41 = -688;

	t41 = ((x169%x170)<(x171<x172));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x173 = -1019;
	int64_t x174 = 1LL;
	int64_t x175 = INT64_MAX;
	int64_t x176 = INT64_MIN;
	static volatile int32_t t42 = 375;

	t42 = ((x173%x174)<(x175<x176));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x178 = -1;
	int32_t x179 = INT32_MAX;
	static uint64_t x180 = UINT64_MAX;
	int32_t t43 = -36461980;

	t43 = ((x177%x178)<(x179<x180));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x181 = INT16_MIN;
	static volatile int32_t x183 = INT32_MIN;
	int16_t x184 = -1;
	int32_t t44 = -516073;

	t44 = ((x181%x182)<(x183<x184));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x185 = -1;
	int8_t x186 = 46;
	int64_t x188 = INT64_MIN;
	int32_t t45 = 13;

	t45 = ((x185%x186)<(x187<x188));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x189 = 123419031548254LL;
	volatile int64_t x190 = -3062868938134LL;
	uint64_t x191 = 868884543083484734LLU;
	uint8_t x192 = UINT8_MAX;
	volatile int32_t t46 = -217057;

	t46 = ((x189%x190)<(x191<x192));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x194 = 446799936LLU;
	uint8_t x195 = UINT8_MAX;
	int16_t x196 = -1;
	static int32_t t47 = -2995;

	t47 = ((x193%x194)<(x195<x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x197 = 32527U;
	int16_t x198 = INT16_MAX;
	int8_t x199 = -1;
	int16_t x200 = -1987;
	volatile int32_t t48 = -5;

	t48 = ((x197%x198)<(x199<x200));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x201 = INT16_MAX;
	static uint64_t x202 = 8363986LLU;
	int64_t x203 = -387LL;
	int8_t x204 = INT8_MIN;
	int32_t t49 = 15784;

	t49 = ((x201%x202)<(x203<x204));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x205 = INT16_MIN;
	volatile uint32_t x206 = 64299U;
	static int64_t x207 = -7217LL;
	int8_t x208 = 2;

	t50 = ((x205%x206)<(x207<x208));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x209 = UINT32_MAX;
	uint64_t x210 = 109LLU;
	static uint8_t x211 = 2U;
	uint16_t x212 = 8588U;
	int32_t t51 = 11225614;

	t51 = ((x209%x210)<(x211<x212));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x213 = INT64_MIN;
	uint64_t x214 = UINT64_MAX;
	int16_t x215 = -1;
	int32_t x216 = -1;
	static int32_t t52 = -660083287;

	t52 = ((x213%x214)<(x215<x216));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x217 = -1;
	uint16_t x218 = UINT16_MAX;
	static uint8_t x219 = UINT8_MAX;
	int32_t t53 = -793893107;

	t53 = ((x217%x218)<(x219<x220));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x221 = -21;
	int32_t x222 = -2064743;
	int16_t x223 = 1;
	static int64_t x224 = INT64_MIN;

	t54 = ((x221%x222)<(x223<x224));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x225 = 13;
	int16_t x226 = INT16_MIN;
	volatile int8_t x227 = INT8_MAX;
	int16_t x228 = INT16_MAX;
	int32_t t55 = -13913;

	t55 = ((x225%x226)<(x227<x228));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x229 = 168632963238LL;
	int64_t x231 = INT64_MAX;
	volatile int32_t x232 = INT32_MIN;
	int32_t t56 = 598;

	t56 = ((x229%x230)<(x231<x232));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x233 = 9751;
	int64_t x234 = -132LL;
	int32_t x235 = INT32_MAX;
	volatile int64_t x236 = INT64_MAX;
	int32_t t57 = -181;

	t57 = ((x233%x234)<(x235<x236));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x237 = INT32_MIN;
	int64_t x238 = INT64_MAX;
	uint64_t x239 = UINT64_MAX;
	int32_t x240 = -1;
	static int32_t t58 = -1892611;

	t58 = ((x237%x238)<(x239<x240));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x242 = INT32_MAX;
	int32_t x243 = 161858;
	static volatile int32_t t59 = 20662;

	t59 = ((x241%x242)<(x243<x244));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x246 = INT64_MIN;
	int8_t x247 = INT8_MIN;
	uint16_t x248 = 10846U;
	volatile int32_t t60 = -163;

	t60 = ((x245%x246)<(x247<x248));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x249 = -1;
	int64_t x250 = INT64_MIN;
	static volatile int8_t x252 = INT8_MIN;
	static volatile int32_t t61 = 194;

	t61 = ((x249%x250)<(x251<x252));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x253 = UINT32_MAX;
	int32_t x255 = INT32_MAX;
	static int8_t x256 = 6;
	volatile int32_t t62 = 2846;

	t62 = ((x253%x254)<(x255<x256));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x258 = 449484;
	volatile int16_t x260 = INT16_MAX;
	static volatile int32_t t63 = -1036831;

	t63 = ((x257%x258)<(x259<x260));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x261 = 5U;
	volatile uint32_t x262 = 2526496U;
	volatile int32_t t64 = 62975;

	t64 = ((x261%x262)<(x263<x264));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x266 = INT8_MIN;
	volatile int32_t t65 = -118;

	t65 = ((x265%x266)<(x267<x268));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x269 = 1;
	int8_t x270 = 1;
	uint16_t x271 = 1U;
	int8_t x272 = INT8_MIN;
	volatile int32_t t66 = 238567357;

	t66 = ((x269%x270)<(x271<x272));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x274 = 558395349347LLU;
	int8_t x275 = 61;
	int8_t x276 = INT8_MIN;
	int32_t t67 = 1;

	t67 = ((x273%x274)<(x275<x276));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x277 = 552678962355372995LLU;
	static int64_t x278 = INT64_MAX;
	uint32_t x279 = UINT32_MAX;
	static int64_t x280 = -572284LL;
	int32_t t68 = 6775;

	t68 = ((x277%x278)<(x279<x280));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x281 = -1;
	int16_t x282 = INT16_MAX;
	uint32_t x283 = 19623811U;

	t69 = ((x281%x282)<(x283<x284));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x285 = INT8_MIN;
	int64_t x286 = -1LL;
	int64_t x288 = INT64_MAX;

	t70 = ((x285%x286)<(x287<x288));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x289 = 31943U;
	static uint8_t x290 = UINT8_MAX;
	uint8_t x291 = 3U;
	volatile int32_t t71 = 930;

	t71 = ((x289%x290)<(x291<x292));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x293 = -1;
	int16_t x294 = INT16_MIN;
	int8_t x295 = INT8_MIN;
	uint8_t x296 = 8U;
	static volatile int32_t t72 = 778863017;

	t72 = ((x293%x294)<(x295<x296));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x297 = 0U;
	int8_t x298 = INT8_MAX;
	volatile uint16_t x299 = 27672U;
	volatile int64_t x300 = -1LL;
	static volatile int32_t t73 = 84;

	t73 = ((x297%x298)<(x299<x300));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x301 = 1;
	static int8_t x302 = -1;
	volatile int32_t t74 = 2655;

	t74 = ((x301%x302)<(x303<x304));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x305 = -1LL;
	volatile int16_t x306 = -1;
	int32_t x307 = INT32_MAX;
	int16_t x308 = INT16_MIN;
	static int32_t t75 = -16858212;

	t75 = ((x305%x306)<(x307<x308));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x309 = INT32_MIN;
	int16_t x310 = 1;
	volatile int32_t t76 = -378624;

	t76 = ((x309%x310)<(x311<x312));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int32_t x315 = -1;
	int16_t x316 = INT16_MAX;
	volatile int32_t t77 = 1054326130;

	t77 = ((x313%x314)<(x315<x316));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x317 = 6U;
	uint32_t x318 = 20U;
	static volatile int32_t x319 = INT32_MIN;
	int64_t x320 = INT64_MAX;
	int32_t t78 = 3;

	t78 = ((x317%x318)<(x319<x320));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x321 = UINT16_MAX;
	int16_t x322 = INT16_MAX;
	int16_t x324 = -7;

	t79 = ((x321%x322)<(x323<x324));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x325 = 7;
	static int16_t x326 = -1;
	int64_t x327 = 134468270722277LL;
	static int32_t x328 = 1932;
	int32_t t80 = 1;

	t80 = ((x325%x326)<(x327<x328));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x329 = INT16_MIN;
	static int32_t x330 = 887458857;
	uint8_t x331 = 2U;
	static uint16_t x332 = 302U;
	volatile int32_t t81 = 517748151;

	t81 = ((x329%x330)<(x331<x332));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x333 = INT64_MIN;
	volatile uint32_t x334 = 290302043U;
	static int16_t x335 = INT16_MIN;
	uint32_t x336 = UINT32_MAX;

	t82 = ((x333%x334)<(x335<x336));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x337 = 1U;
	static uint16_t x338 = 1821U;
	uint16_t x339 = UINT16_MAX;
	int64_t x340 = INT64_MAX;
	int32_t t83 = -41;

	t83 = ((x337%x338)<(x339<x340));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x341 = 13U;
	uint32_t x342 = UINT32_MAX;
	int8_t x344 = INT8_MIN;
	int32_t t84 = -5;

	t84 = ((x341%x342)<(x343<x344));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x345 = INT8_MIN;
	static uint16_t x346 = 1874U;
	int8_t x347 = 11;

	t85 = ((x345%x346)<(x347<x348));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x349 = -1;
	volatile int8_t x350 = INT8_MIN;
	int32_t t86 = -649;

	t86 = ((x349%x350)<(x351<x352));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x353 = UINT8_MAX;
	int16_t x354 = INT16_MIN;
	int64_t x355 = INT64_MAX;
	volatile int32_t t87 = -69891;

	t87 = ((x353%x354)<(x355<x356));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x357 = 431886985LL;
	volatile int64_t x358 = -373361227634963LL;
	volatile uint16_t x360 = 18U;
	static int32_t t88 = 27;

	t88 = ((x357%x358)<(x359<x360));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x361 = INT8_MIN;
	int64_t x362 = INT64_MIN;
	uint16_t x363 = UINT16_MAX;
	volatile int32_t x364 = INT32_MAX;

	t89 = ((x361%x362)<(x363<x364));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x365 = -1;
	static int64_t x366 = INT64_MIN;
	volatile int8_t x367 = -2;
	int32_t t90 = 77707;

	t90 = ((x365%x366)<(x367<x368));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x369 = 5U;
	volatile int8_t x370 = -1;
	static volatile int8_t x371 = 6;
	volatile int32_t x372 = -1;
	volatile int32_t t91 = -376;

	t91 = ((x369%x370)<(x371<x372));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x373 = UINT32_MAX;
	int16_t x375 = -1;
	int32_t t92 = -21713020;

	t92 = ((x373%x374)<(x375<x376));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x377 = 23U;
	static int16_t x378 = INT16_MIN;
	static int32_t t93 = 8151044;

	t93 = ((x377%x378)<(x379<x380));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x381 = UINT32_MAX;
	static uint32_t x382 = 202U;
	int32_t x383 = INT32_MIN;
	static volatile int64_t x384 = INT64_MIN;

	t94 = ((x381%x382)<(x383<x384));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x386 = INT32_MAX;
	int16_t x388 = -1;
	int32_t t95 = -223685694;

	t95 = ((x385%x386)<(x387<x388));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x391 = INT16_MIN;
	volatile int16_t x392 = INT16_MIN;
	int32_t t96 = -534229;

	t96 = ((x389%x390)<(x391<x392));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x397 = INT64_MAX;
	volatile uint16_t x398 = UINT16_MAX;
	int32_t x399 = INT32_MIN;
	uint32_t x400 = UINT32_MAX;
	int32_t t97 = -6170;

	t97 = ((x397%x398)<(x399<x400));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x401 = INT8_MIN;
	int16_t x402 = -1;
	int64_t x404 = 42258457LL;
	volatile int32_t t98 = 14081;

	t98 = ((x401%x402)<(x403<x404));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x405 = INT32_MAX;
	uint8_t x406 = 26U;
	int8_t x407 = 3;
	int16_t x408 = 16;
	int32_t t99 = 35;

	t99 = ((x405%x406)<(x407<x408));

	if (t99 != 0) { NG(); } else { ; }
	
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

