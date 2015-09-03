#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = INT32_MIN;
static uint64_t x6 = 409521481LLU;
uint8_t x10 = UINT8_MAX;
int8_t x11 = -1;
volatile int8_t x12 = INT8_MIN;
int8_t x19 = -1;
int8_t x20 = -49;
int32_t t4 = -24070;
uint16_t x30 = 13810U;
static int64_t x34 = INT64_MIN;
int32_t x46 = 4;
volatile int8_t x49 = INT8_MIN;
static volatile int32_t t12 = 24;
static volatile int8_t x53 = -18;
int64_t x56 = 42618LL;
int64_t x60 = 3151LL;
volatile int64_t x67 = 462189732713269782LL;
uint16_t x87 = 554U;
uint32_t x89 = UINT32_MAX;
int32_t t22 = -1;
volatile int64_t x93 = INT64_MIN;
static int16_t x94 = 2009;
volatile uint64_t x96 = UINT64_MAX;
int32_t x102 = 177;
int64_t x105 = -3583358296938117128LL;
volatile uint32_t x108 = 423067720U;
volatile uint32_t t26 = 1839928118U;
static int8_t x109 = 0;
volatile int32_t t28 = -10931;
static int16_t x118 = INT16_MIN;
uint16_t x120 = 28U;
uint64_t x126 = 3928LLU;
static volatile int32_t t31 = -88220;
volatile uint16_t x140 = UINT16_MAX;
int32_t t34 = 4090;
int8_t x142 = INT8_MIN;
uint64_t x144 = UINT64_MAX;
int32_t t36 = 47959;
volatile int32_t t37 = INT32_MIN;
volatile int32_t t38 = -160517424;
int16_t x159 = INT16_MIN;
volatile uint64_t x161 = 7779894190095LLU;
int16_t x169 = -6644;
int16_t x171 = INT16_MIN;
int64_t x172 = -2966248329LL;
volatile uint32_t x176 = 855130532U;
static int16_t x177 = INT16_MIN;
int32_t x179 = 1;
int32_t t44 = -16272;
int8_t x181 = 1;
uint8_t x184 = UINT8_MAX;
volatile int32_t t46 = 14080628;
static int32_t x197 = INT32_MIN;
static uint8_t x201 = UINT8_MAX;
int16_t x202 = INT16_MIN;
int16_t x206 = 12;
static int64_t x212 = INT64_MIN;
volatile int32_t x216 = INT32_MIN;
static int32_t t53 = INT32_MIN;
static int64_t x221 = INT64_MIN;
int64_t x222 = INT64_MIN;
int64_t x224 = 102325978902321300LL;
int16_t x225 = -242;
volatile int32_t t56 = 1;
int64_t x234 = -2LL;
int32_t x235 = -1;
static int64_t x238 = -1LL;
static int64_t x240 = INT64_MIN;
int16_t x244 = 1929;
volatile int32_t t61 = -31520;
uint64_t x259 = 21985103LLU;
volatile uint64_t x260 = 126851532LLU;
volatile uint32_t x262 = 8U;
int32_t x264 = INT32_MIN;
int64_t t67 = 18084090LL;
uint16_t x274 = UINT16_MAX;
volatile uint64_t t68 = 232222LLU;
int8_t x280 = -1;
volatile int64_t t70 = INT64_MIN;
volatile int32_t t72 = INT32_MAX;
uint64_t x293 = UINT64_MAX;
int32_t x295 = INT32_MAX;
uint32_t x308 = UINT32_MAX;
int16_t x313 = -1;
uint32_t x315 = UINT32_MAX;
uint64_t x324 = UINT64_MAX;
volatile uint64_t x328 = 7475079358601LLU;
volatile uint64_t t80 = 219040339941379LLU;
int32_t x329 = INT32_MIN;
uint32_t x333 = 427545U;
static uint64_t x336 = 752LLU;
static volatile uint64_t t82 = 5LLU;
int64_t t84 = INT64_MAX;
uint16_t x346 = 35U;
uint64_t x358 = 5LLU;
uint64_t x365 = UINT64_MAX;
uint16_t x366 = 272U;
int8_t x370 = 61;
uint16_t x372 = 509U;
uint32_t x378 = 93698U;
static uint16_t x379 = 0U;
int32_t x381 = 109149988;
static int32_t x399 = INT32_MIN;
int32_t x403 = INT32_MIN;
volatile uint16_t x408 = UINT16_MAX;


void f0(void) {
	volatile int8_t x2 = 56;
	uint64_t x3 = 1LLU;
	int64_t x4 = -266486706LL;
	static volatile int64_t t0 = -56LL;

	t0 = (((x1/x2)==x3)^x4);

	if (t0 != -266486706LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	volatile int8_t x7 = INT8_MIN;
	uint64_t x8 = 9LLU;
	volatile uint64_t t1 = 90797463LLU;

	t1 = (((x5/x6)==x7)^x8);

	if (t1 != 9LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 53811267219180312LL;
	volatile int32_t t2 = -46788;

	t2 = (((x9/x10)==x11)^x12);

	if (t2 != -128) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	static int64_t x14 = INT64_MAX;
	static volatile uint32_t x15 = UINT32_MAX;
	static uint8_t x16 = 39U;
	int32_t t3 = -213299;

	t3 = (((x13/x14)==x15)^x16);

	if (t3 != 39) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MAX;
	int32_t x18 = -1;

	t4 = (((x17/x18)==x19)^x20);

	if (t4 != -49) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MIN;
	int32_t x22 = INT32_MIN;
	static int32_t x23 = 22;
	static uint8_t x24 = 85U;
	int32_t t5 = 288164146;

	t5 = (((x21/x22)==x23)^x24);

	if (t5 != 85) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x25 = 222U;
	uint64_t x26 = 107LLU;
	uint8_t x27 = 16U;
	volatile uint32_t x28 = 11776U;
	volatile uint32_t t6 = 374U;

	t6 = (((x25/x26)==x27)^x28);

	if (t6 != 11776U) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = INT32_MAX;
	int16_t x31 = -2;
	uint64_t x32 = 3LLU;
	volatile uint64_t t7 = 57726070919780LLU;

	t7 = (((x29/x30)==x31)^x32);

	if (t7 != 3LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x33 = UINT8_MAX;
	static int8_t x35 = 8;
	int64_t x36 = INT64_MIN;
	volatile int64_t t8 = INT64_MIN;

	t8 = (((x33/x34)==x35)^x36);

	if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = 56;
	volatile uint32_t x38 = 246086U;
	static uint64_t x39 = 15137472202LLU;
	int8_t x40 = INT8_MIN;
	volatile int32_t t9 = -197413064;

	t9 = (((x37/x38)==x39)^x40);

	if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 169LLU;
	int16_t x42 = INT16_MIN;
	static int64_t x43 = INT64_MIN;
	volatile int16_t x44 = INT16_MIN;
	int32_t t10 = 2718;

	t10 = (((x41/x42)==x43)^x44);

	if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 848825LLU;
	volatile uint16_t x47 = UINT16_MAX;
	int32_t x48 = INT32_MIN;
	static volatile int32_t t11 = INT32_MIN;

	t11 = (((x45/x46)==x47)^x48);

	if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x50 = -530738789;
	int8_t x51 = -1;
	uint16_t x52 = 35U;

	t12 = (((x49/x50)==x51)^x52);

	if (t12 != 35) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x54 = 60LLU;
	int16_t x55 = INT16_MIN;
	volatile int64_t t13 = -24846049028LL;

	t13 = (((x53/x54)==x55)^x56);

	if (t13 != 42618LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	uint32_t x58 = 504U;
	int8_t x59 = 27;
	volatile int64_t t14 = 404LL;

	t14 = (((x57/x58)==x59)^x60);

	if (t14 != 3151LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -1;
	int8_t x62 = 1;
	int8_t x63 = INT8_MIN;
	uint16_t x64 = UINT16_MAX;
	int32_t t15 = 8947760;

	t15 = (((x61/x62)==x63)^x64);

	if (t15 != 65535) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -1;
	uint8_t x66 = UINT8_MAX;
	int16_t x68 = -1757;
	static volatile int32_t t16 = 27;

	t16 = (((x65/x66)==x67)^x68);

	if (t16 != -1757) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 197791U;
	static volatile int16_t x70 = -1;
	static uint16_t x71 = 1209U;
	volatile int64_t x72 = INT64_MIN;
	volatile int64_t t17 = INT64_MIN;

	t17 = (((x69/x70)==x71)^x72);

	if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 2992809LLU;
	static uint8_t x74 = UINT8_MAX;
	volatile int64_t x75 = 806576108898LL;
	int64_t x76 = INT64_MAX;
	int64_t t18 = INT64_MAX;

	t18 = (((x73/x74)==x75)^x76);

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x77 = UINT8_MAX;
	static int16_t x78 = INT16_MIN;
	volatile int32_t x79 = INT32_MAX;
	uint64_t x80 = UINT64_MAX;
	uint64_t t19 = UINT64_MAX;

	t19 = (((x77/x78)==x79)^x80);

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	int8_t x82 = INT8_MAX;
	static uint8_t x83 = 1U;
	uint64_t x84 = UINT64_MAX;
	uint64_t t20 = UINT64_MAX;

	t20 = (((x81/x82)==x83)^x84);

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MIN;
	static uint32_t x86 = UINT32_MAX;
	int64_t x88 = INT64_MIN;
	int64_t t21 = INT64_MIN;

	t21 = (((x85/x86)==x87)^x88);

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x90 = 1U;
	volatile uint16_t x91 = 1087U;
	int16_t x92 = 406;

	t22 = (((x89/x90)==x91)^x92);

	if (t22 != 406) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x95 = UINT8_MAX;
	uint64_t t23 = UINT64_MAX;

	t23 = (((x93/x94)==x95)^x96);

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x97 = -10LL;
	int64_t x98 = INT64_MIN;
	volatile uint64_t x99 = 198031892734672LLU;
	int16_t x100 = 31;
	volatile int32_t t24 = -135080451;

	t24 = (((x97/x98)==x99)^x100);

	if (t24 != 31) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 38501985266786LLU;
	volatile int8_t x103 = INT8_MIN;
	int64_t x104 = 1LL;
	static int64_t t25 = 1640402LL;

	t25 = (((x101/x102)==x103)^x104);

	if (t25 != 1LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x106 = INT64_MIN;
	uint64_t x107 = 467LLU;

	t26 = (((x105/x106)==x107)^x108);

	if (t26 != 423067720U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x110 = 959985138LL;
	int16_t x111 = INT16_MIN;
	volatile uint16_t x112 = UINT16_MAX;
	volatile int32_t t27 = 840;

	t27 = (((x109/x110)==x111)^x112);

	if (t27 != 65535) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = UINT8_MAX;
	int8_t x114 = -7;
	static volatile int32_t x115 = 151313;
	uint16_t x116 = 118U;

	t28 = (((x113/x114)==x115)^x116);

	if (t28 != 118) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int32_t x117 = INT32_MAX;
	static uint8_t x119 = 6U;
	volatile int32_t t29 = 1;

	t29 = (((x117/x118)==x119)^x120);

	if (t29 != 28) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MIN;
	volatile int32_t x122 = INT32_MIN;
	int32_t x123 = 1045795;
	static int32_t x124 = -1;
	int32_t t30 = -329;

	t30 = (((x121/x122)==x123)^x124);

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	int16_t x127 = -1;
	uint16_t x128 = 5U;

	t31 = (((x125/x126)==x127)^x128);

	if (t31 != 5) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x129 = 120U;
	uint64_t x130 = UINT64_MAX;
	static int32_t x131 = -522192910;
	uint64_t x132 = UINT64_MAX;
	uint64_t t32 = UINT64_MAX;

	t32 = (((x129/x130)==x131)^x132);

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -1;
	int8_t x134 = 1;
	static int64_t x135 = -705068420LL;
	static int64_t x136 = INT64_MIN;
	volatile int64_t t33 = INT64_MIN;

	t33 = (((x133/x134)==x135)^x136);

	if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x137 = 31863892900597749LLU;
	volatile uint8_t x138 = 7U;
	uint32_t x139 = 40839294U;

	t34 = (((x137/x138)==x139)^x140);

	if (t34 != 65535) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = 9;
	int64_t x143 = INT64_MIN;
	static volatile uint64_t t35 = UINT64_MAX;

	t35 = (((x141/x142)==x143)^x144);

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MAX;
	int8_t x146 = 16;
	int8_t x147 = 6;
	volatile int32_t x148 = -28820165;

	t36 = (((x145/x146)==x147)^x148);

	if (t36 != -28820165) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = 32656861LLU;
	uint64_t x150 = UINT64_MAX;
	int32_t x151 = INT32_MIN;
	int32_t x152 = INT32_MIN;

	t37 = (((x149/x150)==x151)^x152);

	if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MIN;
	uint8_t x154 = UINT8_MAX;
	int64_t x155 = 1LL;
	static uint8_t x156 = UINT8_MAX;

	t38 = (((x153/x154)==x155)^x156);

	if (t38 != 255) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = -2;
	uint32_t x158 = UINT32_MAX;
	int8_t x160 = INT8_MIN;
	int32_t t39 = 0;

	t39 = (((x157/x158)==x159)^x160);

	if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int8_t x162 = INT8_MAX;
	int32_t x163 = -1;
	int16_t x164 = -63;
	static int32_t t40 = -8089;

	t40 = (((x161/x162)==x163)^x164);

	if (t40 != -63) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MAX;
	int16_t x166 = -7865;
	int64_t x167 = -10LL;
	static int64_t x168 = -5LL;
	int64_t t41 = 285389732516LL;

	t41 = (((x165/x166)==x167)^x168);

	if (t41 != -5LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x170 = 7675016;
	volatile int64_t t42 = -2232058273265002060LL;

	t42 = (((x169/x170)==x171)^x172);

	if (t42 != -2966248329LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = UINT64_MAX;
	int64_t x174 = 1918596LL;
	volatile uint8_t x175 = 12U;
	uint32_t t43 = 6294886U;

	t43 = (((x173/x174)==x175)^x176);

	if (t43 != 855130532U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x178 = INT16_MIN;
	int32_t x180 = INT32_MAX;

	t44 = (((x177/x178)==x179)^x180);

	if (t44 != 2147483646) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x182 = -1;
	static int8_t x183 = 1;
	int32_t t45 = 49127;

	t45 = (((x181/x182)==x183)^x184);

	if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MIN;
	int16_t x186 = INT16_MIN;
	uint16_t x187 = UINT16_MAX;
	int16_t x188 = 0;

	t46 = (((x185/x186)==x187)^x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MAX;
	static int8_t x190 = INT8_MIN;
	uint16_t x191 = 7U;
	uint32_t x192 = UINT32_MAX;
	static volatile uint32_t t47 = UINT32_MAX;

	t47 = (((x189/x190)==x191)^x192);

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = UINT16_MAX;
	int16_t x194 = -37;
	int16_t x195 = -1;
	volatile int8_t x196 = INT8_MIN;
	static int32_t t48 = -346;

	t48 = (((x193/x194)==x195)^x196);

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x198 = 1137U;
	int8_t x199 = INT8_MAX;
	int32_t x200 = 2;
	int32_t t49 = 59709017;

	t49 = (((x197/x198)==x199)^x200);

	if (t49 != 2) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int8_t x203 = INT8_MIN;
	volatile int64_t x204 = INT64_MIN;
	static volatile int64_t t50 = INT64_MIN;

	t50 = (((x201/x202)==x203)^x204);

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MIN;
	int16_t x207 = INT16_MIN;
	uint16_t x208 = 292U;
	int32_t t51 = 161258918;

	t51 = (((x205/x206)==x207)^x208);

	if (t51 != 292) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = -300;
	volatile uint16_t x210 = 9U;
	uint16_t x211 = UINT16_MAX;
	int64_t t52 = INT64_MIN;

	t52 = (((x209/x210)==x211)^x212);

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x213 = 3U;
	static int64_t x214 = INT64_MIN;
	uint8_t x215 = UINT8_MAX;

	t53 = (((x213/x214)==x215)^x216);

	if (t53 != INT32_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = -1;
	static int16_t x218 = INT16_MAX;
	volatile int16_t x219 = -1;
	static int32_t x220 = INT32_MIN;
	volatile int32_t t54 = INT32_MIN;

	t54 = (((x217/x218)==x219)^x220);

	if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x223 = 892545338;
	int64_t t55 = -4868LL;

	t55 = (((x221/x222)==x223)^x224);

	if (t55 != 102325978902321300LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x226 = 289606U;
	int16_t x227 = -928;
	static volatile int8_t x228 = INT8_MIN;

	t56 = (((x225/x226)==x227)^x228);

	if (t56 != -128) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = 44;
	static int8_t x230 = INT8_MAX;
	volatile uint64_t x231 = 1809712708LLU;
	uint32_t x232 = UINT32_MAX;
	uint32_t t57 = UINT32_MAX;

	t57 = (((x229/x230)==x231)^x232);

	if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = 7LLU;
	volatile int32_t x236 = INT32_MIN;
	volatile int32_t t58 = INT32_MIN;

	t58 = (((x233/x234)==x235)^x236);

	if (t58 != INT32_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x237 = 0;
	volatile uint64_t x239 = 884595259369528656LLU;
	int64_t t59 = INT64_MIN;

	t59 = (((x237/x238)==x239)^x240);

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = 32663744528596LL;
	volatile int8_t x242 = -1;
	int8_t x243 = INT8_MIN;
	volatile int32_t t60 = -22;

	t60 = (((x241/x242)==x243)^x244);

	if (t60 != 1929) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = 0;
	volatile int32_t x246 = 7348822;
	int8_t x247 = INT8_MAX;
	uint8_t x248 = UINT8_MAX;

	t61 = (((x245/x246)==x247)^x248);

	if (t61 != 255) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x249 = -1;
	uint8_t x250 = 100U;
	volatile int16_t x251 = -1592;
	int64_t x252 = -11605476LL;
	int64_t t62 = 4LL;

	t62 = (((x249/x250)==x251)^x252);

	if (t62 != -11605476LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MIN;
	int64_t x254 = INT64_MIN;
	uint16_t x255 = UINT16_MAX;
	uint16_t x256 = 251U;
	int32_t t63 = 2875183;

	t63 = (((x253/x254)==x255)^x256);

	if (t63 != 251) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x257 = INT64_MIN;
	uint16_t x258 = 184U;
	uint64_t t64 = 5348888590613LLU;

	t64 = (((x257/x258)==x259)^x260);

	if (t64 != 126851532LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x261 = UINT16_MAX;
	int16_t x263 = -1;
	static volatile int32_t t65 = INT32_MIN;

	t65 = (((x261/x262)==x263)^x264);

	if (t65 != INT32_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = 3657163U;
	uint32_t x266 = 51793U;
	static uint8_t x267 = UINT8_MAX;
	int32_t x268 = -1;
	static int32_t t66 = 175;

	t66 = (((x265/x266)==x267)^x268);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = -1;
	uint32_t x270 = 738575U;
	volatile uint8_t x271 = 1U;
	int64_t x272 = -119006386101463LL;

	t67 = (((x269/x270)==x271)^x272);

	if (t67 != -119006386101463LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MIN;
	int16_t x275 = INT16_MAX;
	uint64_t x276 = 158241693200214455LLU;

	t68 = (((x273/x274)==x275)^x276);

	if (t68 != 158241693200214455LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x277 = INT8_MIN;
	volatile int64_t x278 = INT64_MIN;
	uint32_t x279 = UINT32_MAX;
	int32_t t69 = -933;

	t69 = (((x277/x278)==x279)^x280);

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = -31167454878319170LL;
	static int16_t x282 = 1;
	static int32_t x283 = INT32_MAX;
	static int64_t x284 = INT64_MIN;

	t70 = (((x281/x282)==x283)^x284);

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = 1;
	static volatile int8_t x286 = 3;
	int32_t x287 = INT32_MIN;
	volatile int32_t x288 = -1;
	static volatile int32_t t71 = -1;

	t71 = (((x285/x286)==x287)^x288);

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x289 = INT32_MIN;
	int32_t x290 = INT32_MAX;
	static int64_t x291 = 190112541LL;
	int32_t x292 = INT32_MAX;

	t72 = (((x289/x290)==x291)^x292);

	if (t72 != INT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x294 = INT64_MIN;
	uint8_t x296 = 7U;
	volatile int32_t t73 = -23;

	t73 = (((x293/x294)==x295)^x296);

	if (t73 != 7) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = 339699022LL;
	static int32_t x298 = -1;
	uint64_t x299 = 1614713LLU;
	volatile int8_t x300 = -1;
	static volatile int32_t t74 = -3458807;

	t74 = (((x297/x298)==x299)^x300);

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x305 = INT64_MAX;
	volatile int32_t x306 = INT32_MIN;
	int16_t x307 = INT16_MAX;
	volatile uint32_t t75 = UINT32_MAX;

	t75 = (((x305/x306)==x307)^x308);

	if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x309 = INT8_MAX;
	volatile int64_t x310 = -1LL;
	int64_t x311 = -186366818LL;
	volatile int64_t x312 = -651073021533446LL;
	int64_t t76 = -2LL;

	t76 = (((x309/x310)==x311)^x312);

	if (t76 != -651073021533446LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x314 = INT64_MIN;
	volatile uint64_t x316 = UINT64_MAX;
	uint64_t t77 = UINT64_MAX;

	t77 = (((x313/x314)==x315)^x316);

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x317 = -1060831648;
	volatile uint64_t x318 = UINT64_MAX;
	int16_t x319 = -1;
	int16_t x320 = INT16_MIN;
	volatile int32_t t78 = -1;

	t78 = (((x317/x318)==x319)^x320);

	if (t78 != -32768) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x321 = 252U;
	volatile int32_t x322 = -1;
	uint16_t x323 = 3U;
	volatile uint64_t t79 = UINT64_MAX;

	t79 = (((x321/x322)==x323)^x324);

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x325 = INT32_MIN;
	int16_t x326 = 5;
	volatile int64_t x327 = 4548902381904747LL;

	t80 = (((x325/x326)==x327)^x328);

	if (t80 != 7475079358601LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x330 = 666LLU;
	uint32_t x331 = UINT32_MAX;
	static uint64_t x332 = UINT64_MAX;
	uint64_t t81 = UINT64_MAX;

	t81 = (((x329/x330)==x331)^x332);

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x334 = -1596701LL;
	static int64_t x335 = INT64_MIN;

	t82 = (((x333/x334)==x335)^x336);

	if (t82 != 752LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x337 = -250590968LL;
	int8_t x338 = -1;
	uint16_t x339 = 30905U;
	uint32_t x340 = UINT32_MAX;
	static uint32_t t83 = UINT32_MAX;

	t83 = (((x337/x338)==x339)^x340);

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x341 = -1LL;
	int16_t x342 = INT16_MIN;
	static uint16_t x343 = 7036U;
	int64_t x344 = INT64_MAX;

	t84 = (((x341/x342)==x343)^x344);

	if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x345 = 29910U;
	int16_t x347 = 1;
	volatile uint8_t x348 = 3U;
	volatile int32_t t85 = 6;

	t85 = (((x345/x346)==x347)^x348);

	if (t85 != 3) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int32_t x349 = INT32_MIN;
	volatile int32_t x350 = -30612389;
	int64_t x351 = INT64_MIN;
	static uint8_t x352 = 113U;
	static volatile int32_t t86 = 1579335;

	t86 = (((x349/x350)==x351)^x352);

	if (t86 != 113) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x357 = 1143114144290LL;
	uint16_t x359 = 8U;
	static int32_t x360 = INT32_MAX;
	static int32_t t87 = INT32_MAX;

	t87 = (((x357/x358)==x359)^x360);

	if (t87 != INT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x367 = INT32_MIN;
	int32_t x368 = 137687405;
	volatile int32_t t88 = 64515574;

	t88 = (((x365/x366)==x367)^x368);

	if (t88 != 137687405) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x369 = 1LLU;
	uint8_t x371 = 1U;
	volatile int32_t t89 = 103;

	t89 = (((x369/x370)==x371)^x372);

	if (t89 != 509) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x373 = 5692;
	uint64_t x374 = 70033461793494LLU;
	static uint32_t x375 = 9U;
	int32_t x376 = INT32_MAX;
	static volatile int32_t t90 = INT32_MAX;

	t90 = (((x373/x374)==x375)^x376);

	if (t90 != INT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x377 = INT8_MIN;
	int64_t x380 = 24814LL;
	int64_t t91 = -184681212820560852LL;

	t91 = (((x377/x378)==x379)^x380);

	if (t91 != 24814LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x382 = INT32_MIN;
	int16_t x383 = INT16_MIN;
	volatile int16_t x384 = INT16_MIN;
	volatile int32_t t92 = 1778;

	t92 = (((x381/x382)==x383)^x384);

	if (t92 != -32768) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x385 = -1;
	uint32_t x386 = UINT32_MAX;
	int32_t x387 = INT32_MIN;
	int8_t x388 = INT8_MAX;
	static int32_t t93 = 2973;

	t93 = (((x385/x386)==x387)^x388);

	if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x389 = 16324U;
	volatile uint16_t x390 = 3U;
	int64_t x391 = INT64_MAX;
	uint8_t x392 = UINT8_MAX;
	volatile int32_t t94 = 2;

	t94 = (((x389/x390)==x391)^x392);

	if (t94 != 255) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x393 = INT32_MAX;
	int16_t x394 = -10854;
	volatile int8_t x395 = INT8_MAX;
	int32_t x396 = -1;
	int32_t t95 = -1026502454;

	t95 = (((x393/x394)==x395)^x396);

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x397 = 10;
	uint64_t x398 = UINT64_MAX;
	static volatile int64_t x400 = INT64_MAX;
	volatile int64_t t96 = INT64_MAX;

	t96 = (((x397/x398)==x399)^x400);

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x401 = 0U;
	uint32_t x402 = 306850U;
	int32_t x404 = -59;
	static volatile int32_t t97 = 1745;

	t97 = (((x401/x402)==x403)^x404);

	if (t97 != -59) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x405 = -375;
	static int32_t x406 = -1;
	uint32_t x407 = 2258U;
	volatile int32_t t98 = -1370;

	t98 = (((x405/x406)==x407)^x408);

	if (t98 != 65535) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x409 = 588955;
	uint8_t x410 = UINT8_MAX;
	uint8_t x411 = UINT8_MAX;
	static volatile int64_t x412 = -1LL;
	int64_t t99 = -32004285649644LL;

	t99 = (((x409/x410)==x411)^x412);

	if (t99 != -1LL) { NG(); } else { ; }
	
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

