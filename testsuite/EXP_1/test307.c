#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = 860;
volatile uint64_t x14 = 53662874LLU;
static uint64_t x15 = 103226496258853LLU;
uint8_t x21 = 3U;
static int64_t x28 = -28182LL;
int32_t t5 = -1480;
static volatile int32_t x32 = INT32_MIN;
int8_t x33 = -1;
static volatile int8_t x35 = 0;
static volatile int32_t x37 = -1225;
volatile uint16_t x44 = 83U;
int32_t x45 = -1;
int64_t x49 = -1LL;
volatile int32_t t11 = 3956416;
static uint16_t x65 = UINT16_MAX;
static uint16_t x66 = 2731U;
volatile int64_t x70 = -373142678049228588LL;
static int32_t x75 = INT32_MAX;
uint8_t x76 = 37U;
volatile uint16_t x83 = UINT16_MAX;
uint64_t x88 = 23396LLU;
volatile int32_t t19 = 1;
int64_t x96 = -10LL;
uint8_t x97 = UINT8_MAX;
int32_t x99 = -1;
volatile int32_t t22 = -7;
uint16_t x108 = UINT16_MAX;
int8_t x117 = INT8_MIN;
int32_t t26 = -1545;
static int16_t x125 = 56;
static int32_t x141 = INT32_MAX;
int8_t x146 = INT8_MIN;
volatile uint64_t x148 = 777262677520480241LLU;
int32_t t31 = 47;
int8_t x153 = INT8_MAX;
volatile uint16_t x157 = 12U;
int8_t x160 = -1;
int32_t t34 = -1001326;
uint32_t x181 = UINT32_MAX;
uint64_t x183 = 7179249934LLU;
int16_t x186 = INT16_MIN;
int8_t x188 = -1;
static volatile int32_t t39 = 955873276;
uint16_t x193 = 0U;
volatile int32_t t41 = -4;
uint8_t x199 = 72U;
volatile int32_t t43 = -8;
int32_t x212 = INT32_MIN;
int32_t t47 = -435827387;
int16_t x224 = INT16_MIN;
volatile int16_t x230 = 251;
volatile int32_t t51 = 1813;
static int64_t x239 = -6915743LL;
int32_t x241 = -1;
volatile int64_t x242 = INT64_MIN;
volatile int32_t x249 = INT32_MIN;
uint8_t x265 = 1U;
static int32_t x270 = 0;
int32_t t62 = 5108;
int32_t x294 = INT32_MAX;
int32_t x298 = -125;
int32_t x300 = INT32_MAX;
volatile int8_t x304 = 1;
volatile int8_t x306 = 62;
volatile int32_t t68 = -578960;
uint64_t x310 = 72075516LLU;
volatile int16_t x311 = 10065;
int32_t x315 = INT32_MIN;
int16_t x320 = 3315;
int32_t t71 = 0;
int16_t x321 = -1;
static int64_t x323 = -674424129847896LL;
uint64_t x339 = UINT64_MAX;
int8_t x340 = INT8_MIN;
static uint32_t x341 = 1240U;
int32_t t75 = 242613;
uint32_t x345 = UINT32_MAX;
static int32_t t76 = 4940;
int32_t t78 = -12;
int32_t t79 = 107287807;
uint16_t x368 = UINT16_MAX;
uint16_t x369 = 104U;
volatile int32_t t81 = 3;
uint16_t x374 = 5U;
int8_t x375 = INT8_MAX;
int16_t x376 = INT16_MIN;
static int16_t x377 = -1;
int64_t x378 = INT64_MIN;
volatile int64_t x379 = INT64_MIN;
int8_t x382 = INT8_MAX;
static volatile uint64_t x383 = UINT64_MAX;
uint64_t x395 = UINT64_MAX;
volatile int32_t t85 = 1880935;
static volatile int32_t t86 = 31;
int32_t x407 = 865;
uint8_t x408 = 69U;
int64_t x416 = INT64_MIN;
static int64_t x419 = -1561LL;
int64_t x421 = INT64_MIN;
volatile uint64_t x428 = UINT64_MAX;
volatile int32_t t92 = -2964577;
static uint16_t x430 = UINT16_MAX;
static uint32_t x431 = 828552U;
uint8_t x433 = 22U;
volatile uint64_t x442 = 14701012LLU;
int64_t x444 = INT64_MIN;
volatile int16_t x448 = -20;
static uint64_t x452 = 29026083508541LLU;
volatile int32_t x453 = -1;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int64_t x2 = INT64_MIN;
	static uint16_t x4 = UINT16_MAX;
	volatile int32_t t0 = -391061887;

	t0 = (((x1-x2)&x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 308U;
	int16_t x6 = INT16_MIN;
	uint64_t x7 = UINT64_MAX;
	int16_t x8 = -107;
	int32_t t1 = 5;

	t1 = (((x5-x6)&x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	volatile int16_t x10 = INT16_MIN;
	static volatile int64_t x11 = -925LL;
	static uint64_t x12 = 140323300432LLU;
	int32_t t2 = 11;

	t2 = (((x9-x10)&x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = INT8_MIN;
	uint64_t x16 = UINT64_MAX;
	int32_t t3 = 13467165;

	t3 = (((x13-x14)&x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x22 = INT16_MIN;
	int32_t x23 = -1;
	int32_t x24 = INT32_MAX;
	volatile int32_t t4 = 8;

	t4 = (((x21-x22)&x23)==x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = 7786;
	int64_t x26 = 693264250726LL;
	static int8_t x27 = -1;

	t5 = (((x25-x26)&x27)==x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x29 = INT16_MAX;
	static int32_t x30 = INT32_MAX;
	uint8_t x31 = UINT8_MAX;
	int32_t t6 = -3708870;

	t6 = (((x29-x30)&x31)==x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x34 = INT8_MIN;
	int8_t x36 = -1;
	volatile int32_t t7 = -6315;

	t7 = (((x33-x34)&x35)==x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x38 = -1;
	uint16_t x39 = UINT16_MAX;
	int16_t x40 = INT16_MIN;
	static int32_t t8 = 1;

	t8 = (((x37-x38)&x39)==x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = INT16_MIN;
	volatile int8_t x42 = INT8_MIN;
	uint64_t x43 = UINT64_MAX;
	int32_t t9 = -174;

	t9 = (((x41-x42)&x43)==x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x46 = INT64_MAX;
	uint64_t x47 = 3861505271LLU;
	int64_t x48 = INT64_MIN;
	static int32_t t10 = 4113;

	t10 = (((x45-x46)&x47)==x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x50 = -6180319204475LL;
	static int32_t x51 = -226979208;
	static volatile int32_t x52 = INT32_MIN;

	t11 = (((x49-x50)&x51)==x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = INT16_MIN;
	uint8_t x54 = 1U;
	int64_t x55 = INT64_MIN;
	volatile int16_t x56 = -1;
	volatile int32_t t12 = 4194469;

	t12 = (((x53-x54)&x55)==x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x67 = UINT16_MAX;
	uint8_t x68 = UINT8_MAX;
	static int32_t t13 = 220;

	t13 = (((x65-x66)&x67)==x68);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x69 = INT16_MIN;
	volatile uint16_t x71 = UINT16_MAX;
	uint16_t x72 = UINT16_MAX;
	volatile int32_t t14 = 248538;

	t14 = (((x69-x70)&x71)==x72);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x73 = 1U;
	uint64_t x74 = UINT64_MAX;
	int32_t t15 = -22685833;

	t15 = (((x73-x74)&x75)==x76);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x77 = INT16_MAX;
	uint32_t x78 = UINT32_MAX;
	static int8_t x79 = -1;
	int16_t x80 = INT16_MIN;
	volatile int32_t t16 = -6;

	t16 = (((x77-x78)&x79)==x80);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = INT16_MAX;
	int32_t x82 = -1;
	uint8_t x84 = UINT8_MAX;
	static volatile int32_t t17 = 1123953;

	t17 = (((x81-x82)&x83)==x84);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = INT8_MIN;
	static volatile int16_t x86 = -38;
	int64_t x87 = INT64_MIN;
	int32_t t18 = 444326752;

	t18 = (((x85-x86)&x87)==x88);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x89 = -1;
	static int32_t x90 = INT32_MAX;
	static volatile int8_t x91 = INT8_MAX;
	volatile int64_t x92 = -1LL;

	t19 = (((x89-x90)&x91)==x92);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x93 = INT32_MAX;
	int32_t x94 = 66;
	uint32_t x95 = UINT32_MAX;
	int32_t t20 = 239129;

	t20 = (((x93-x94)&x95)==x96);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x98 = 3250U;
	int64_t x100 = -1LL;
	int32_t t21 = 0;

	t21 = (((x97-x98)&x99)==x100);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x101 = INT32_MAX;
	static int64_t x102 = -17515680169596083LL;
	int8_t x103 = INT8_MIN;
	static uint16_t x104 = 4568U;

	t22 = (((x101-x102)&x103)==x104);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x105 = 61106650512804LLU;
	int32_t x106 = INT32_MIN;
	volatile int64_t x107 = -1LL;
	int32_t t23 = -567954;

	t23 = (((x105-x106)&x107)==x108);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x109 = INT64_MIN;
	uint64_t x110 = 5LLU;
	int16_t x111 = INT16_MIN;
	static int16_t x112 = -1;
	volatile int32_t t24 = 13;

	t24 = (((x109-x110)&x111)==x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x113 = UINT32_MAX;
	volatile int16_t x114 = INT16_MAX;
	static uint64_t x115 = UINT64_MAX;
	int32_t x116 = -1;
	int32_t t25 = 2;

	t25 = (((x113-x114)&x115)==x116);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x118 = INT32_MIN;
	volatile int64_t x119 = -1LL;
	static int16_t x120 = INT16_MAX;

	t26 = (((x117-x118)&x119)==x120);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x126 = 4U;
	int64_t x127 = INT64_MIN;
	int16_t x128 = 742;
	int32_t t27 = -38300932;

	t27 = (((x125-x126)&x127)==x128);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x129 = 579U;
	uint64_t x130 = UINT64_MAX;
	int16_t x131 = INT16_MIN;
	int8_t x132 = INT8_MIN;
	volatile int32_t t28 = 48593010;

	t28 = (((x129-x130)&x131)==x132);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x137 = 48;
	static uint64_t x138 = UINT64_MAX;
	volatile uint8_t x139 = 26U;
	int8_t x140 = -2;
	volatile int32_t t29 = 0;

	t29 = (((x137-x138)&x139)==x140);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x142 = INT32_MAX;
	volatile uint8_t x143 = 8U;
	uint32_t x144 = UINT32_MAX;
	int32_t t30 = -13;

	t30 = (((x141-x142)&x143)==x144);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x145 = INT16_MIN;
	uint64_t x147 = UINT64_MAX;

	t31 = (((x145-x146)&x147)==x148);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x149 = INT16_MIN;
	uint64_t x150 = UINT64_MAX;
	volatile uint16_t x151 = 12123U;
	int32_t x152 = INT32_MIN;
	int32_t t32 = 2127098;

	t32 = (((x149-x150)&x151)==x152);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x154 = UINT8_MAX;
	volatile int64_t x155 = -1LL;
	int32_t x156 = 6096;
	static int32_t t33 = 0;

	t33 = (((x153-x154)&x155)==x156);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x158 = INT8_MIN;
	int64_t x159 = INT64_MIN;

	t34 = (((x157-x158)&x159)==x160);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x165 = -510;
	volatile uint16_t x166 = UINT16_MAX;
	uint8_t x167 = 31U;
	volatile int16_t x168 = -1;
	volatile int32_t t35 = -699796791;

	t35 = (((x165-x166)&x167)==x168);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x169 = INT8_MAX;
	static int8_t x170 = -1;
	int32_t x171 = 0;
	int8_t x172 = INT8_MAX;
	int32_t t36 = 1;

	t36 = (((x169-x170)&x171)==x172);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x173 = -245;
	static volatile int8_t x174 = INT8_MIN;
	static uint64_t x175 = UINT64_MAX;
	static int8_t x176 = 42;
	volatile int32_t t37 = 1058306307;

	t37 = (((x173-x174)&x175)==x176);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x182 = INT32_MAX;
	uint64_t x184 = UINT64_MAX;
	volatile int32_t t38 = 8159;

	t38 = (((x181-x182)&x183)==x184);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x185 = INT8_MAX;
	volatile int8_t x187 = INT8_MIN;

	t39 = (((x185-x186)&x187)==x188);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x189 = UINT64_MAX;
	int8_t x190 = 0;
	int16_t x191 = -2;
	static int32_t x192 = INT32_MIN;
	volatile int32_t t40 = -931803561;

	t40 = (((x189-x190)&x191)==x192);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x194 = INT16_MIN;
	int64_t x195 = INT64_MIN;
	int8_t x196 = INT8_MAX;

	t41 = (((x193-x194)&x195)==x196);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x197 = 630928LLU;
	int32_t x198 = INT32_MIN;
	int32_t x200 = INT32_MIN;
	volatile int32_t t42 = -335;

	t42 = (((x197-x198)&x199)==x200);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x201 = INT16_MIN;
	uint32_t x202 = 4U;
	int64_t x203 = INT64_MAX;
	static uint8_t x204 = 117U;

	t43 = (((x201-x202)&x203)==x204);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x205 = 968157U;
	int8_t x206 = INT8_MIN;
	static int8_t x207 = -1;
	uint32_t x208 = 769U;
	static int32_t t44 = 263401969;

	t44 = (((x205-x206)&x207)==x208);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x209 = -441593158077LL;
	static volatile int32_t x210 = 102394032;
	static volatile int32_t x211 = INT32_MIN;
	int32_t t45 = -5054;

	t45 = (((x209-x210)&x211)==x212);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x213 = 5236811770804LL;
	uint16_t x214 = 585U;
	int64_t x215 = INT64_MAX;
	static int16_t x216 = INT16_MAX;
	volatile int32_t t46 = -128;

	t46 = (((x213-x214)&x215)==x216);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x217 = 173244017543LL;
	int16_t x218 = -1347;
	uint8_t x219 = 2U;
	int64_t x220 = -1LL;

	t47 = (((x217-x218)&x219)==x220);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x221 = UINT16_MAX;
	volatile uint64_t x222 = 1255033334651873LLU;
	uint32_t x223 = 525270U;
	int32_t t48 = -72478;

	t48 = (((x221-x222)&x223)==x224);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x225 = 225U;
	static int16_t x226 = INT16_MIN;
	static int16_t x227 = INT16_MAX;
	int64_t x228 = -454876998827126963LL;
	static int32_t t49 = -2162609;

	t49 = (((x225-x226)&x227)==x228);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x229 = -1;
	int8_t x231 = 6;
	int16_t x232 = 116;
	int32_t t50 = 14;

	t50 = (((x229-x230)&x231)==x232);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x233 = 2;
	uint8_t x234 = 1U;
	int32_t x235 = -149808;
	static volatile int32_t x236 = INT32_MIN;

	t51 = (((x233-x234)&x235)==x236);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x237 = 11;
	int8_t x238 = -1;
	int16_t x240 = INT16_MAX;
	volatile int32_t t52 = 842;

	t52 = (((x237-x238)&x239)==x240);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x243 = 783U;
	uint16_t x244 = 405U;
	volatile int32_t t53 = -2499;

	t53 = (((x241-x242)&x243)==x244);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x250 = INT64_MIN;
	int16_t x251 = INT16_MIN;
	int16_t x252 = INT16_MAX;
	int32_t t54 = -7688;

	t54 = (((x249-x250)&x251)==x252);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x253 = INT32_MAX;
	static int64_t x254 = 145718702577464734LL;
	int32_t x255 = -1;
	int64_t x256 = INT64_MIN;
	static int32_t t55 = 1047033458;

	t55 = (((x253-x254)&x255)==x256);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x257 = 33U;
	uint32_t x258 = 71849915U;
	uint32_t x259 = UINT32_MAX;
	uint32_t x260 = 6597807U;
	int32_t t56 = 0;

	t56 = (((x257-x258)&x259)==x260);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x261 = -1LL;
	int32_t x262 = INT32_MIN;
	static int64_t x263 = INT64_MAX;
	static uint32_t x264 = 10415U;
	static int32_t t57 = 131;

	t57 = (((x261-x262)&x263)==x264);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x266 = 14LLU;
	int8_t x267 = INT8_MIN;
	uint16_t x268 = UINT16_MAX;
	volatile int32_t t58 = -689850138;

	t58 = (((x265-x266)&x267)==x268);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x269 = 2U;
	int64_t x271 = -27812505032LL;
	static volatile int16_t x272 = INT16_MIN;
	volatile int32_t t59 = 119890;

	t59 = (((x269-x270)&x271)==x272);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x273 = -13;
	int32_t x274 = INT32_MIN;
	int16_t x275 = INT16_MAX;
	int32_t x276 = INT32_MAX;
	static int32_t t60 = -19;

	t60 = (((x273-x274)&x275)==x276);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x277 = INT32_MIN;
	volatile uint64_t x278 = 2845894861LLU;
	int32_t x279 = -1;
	int64_t x280 = 4459072724651LL;
	int32_t t61 = 74;

	t61 = (((x277-x278)&x279)==x280);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x281 = 13;
	int8_t x282 = 0;
	int64_t x283 = INT64_MIN;
	uint64_t x284 = 32352628659763417LLU;

	t62 = (((x281-x282)&x283)==x284);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x285 = 3241889U;
	uint16_t x286 = 1528U;
	uint16_t x287 = 151U;
	uint16_t x288 = 9696U;
	static volatile int32_t t63 = -333205463;

	t63 = (((x285-x286)&x287)==x288);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x289 = 250823811868LLU;
	static int64_t x290 = INT64_MIN;
	volatile uint8_t x291 = UINT8_MAX;
	static int8_t x292 = INT8_MAX;
	volatile int32_t t64 = -288;

	t64 = (((x289-x290)&x291)==x292);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x293 = UINT64_MAX;
	int8_t x295 = 3;
	int16_t x296 = INT16_MAX;
	int32_t t65 = -7592;

	t65 = (((x293-x294)&x295)==x296);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x297 = -8;
	int16_t x299 = -1;
	int32_t t66 = -37996993;

	t66 = (((x297-x298)&x299)==x300);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x301 = -1259;
	volatile int64_t x302 = 129685308740367LL;
	volatile int64_t x303 = INT64_MIN;
	int32_t t67 = -50688443;

	t67 = (((x301-x302)&x303)==x304);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x305 = 117130;
	static int16_t x307 = INT16_MAX;
	static int32_t x308 = -7684;

	t68 = (((x305-x306)&x307)==x308);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x309 = 24082758LLU;
	static int16_t x312 = INT16_MAX;
	static volatile int32_t t69 = 59930;

	t69 = (((x309-x310)&x311)==x312);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x313 = UINT8_MAX;
	int8_t x314 = INT8_MIN;
	volatile int16_t x316 = -106;
	int32_t t70 = -35790;

	t70 = (((x313-x314)&x315)==x316);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x317 = 383LLU;
	volatile uint64_t x318 = 770802LLU;
	uint32_t x319 = 1501451U;

	t71 = (((x317-x318)&x319)==x320);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x322 = 113;
	static int16_t x324 = -1;
	volatile int32_t t72 = 3921;

	t72 = (((x321-x322)&x323)==x324);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x325 = 909542659340436561LLU;
	static int8_t x326 = INT8_MIN;
	static int64_t x327 = INT64_MAX;
	int16_t x328 = -1;
	int32_t t73 = 69734617;

	t73 = (((x325-x326)&x327)==x328);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x337 = 87;
	uint64_t x338 = UINT64_MAX;
	volatile int32_t t74 = -1;

	t74 = (((x337-x338)&x339)==x340);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x342 = -1;
	uint8_t x343 = 1U;
	static int32_t x344 = INT32_MIN;

	t75 = (((x341-x342)&x343)==x344);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint64_t x346 = 109732711LLU;
	volatile int16_t x347 = INT16_MIN;
	volatile int64_t x348 = INT64_MIN;

	t76 = (((x345-x346)&x347)==x348);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x349 = INT32_MAX;
	int16_t x350 = 0;
	int16_t x351 = INT16_MIN;
	uint32_t x352 = UINT32_MAX;
	static volatile int32_t t77 = -3194080;

	t77 = (((x349-x350)&x351)==x352);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x357 = -23;
	int16_t x358 = -1;
	int64_t x359 = INT64_MAX;
	uint32_t x360 = 482845423U;

	t78 = (((x357-x358)&x359)==x360);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x361 = 878;
	int16_t x362 = -1;
	int32_t x363 = INT32_MIN;
	int32_t x364 = INT32_MAX;

	t79 = (((x361-x362)&x363)==x364);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x365 = INT32_MAX;
	static uint64_t x366 = 131032LLU;
	uint32_t x367 = 8U;
	static volatile int32_t t80 = 27601073;

	t80 = (((x365-x366)&x367)==x368);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x370 = INT64_MAX;
	volatile int16_t x371 = 2909;
	volatile int8_t x372 = INT8_MIN;

	t81 = (((x369-x370)&x371)==x372);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x373 = 19U;
	volatile int32_t t82 = 61889;

	t82 = (((x373-x374)&x375)==x376);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint8_t x380 = 115U;
	volatile int32_t t83 = 125;

	t83 = (((x377-x378)&x379)==x380);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x381 = INT16_MIN;
	static int16_t x384 = 0;
	volatile int32_t t84 = -14495;

	t84 = (((x381-x382)&x383)==x384);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x393 = -1;
	int64_t x394 = INT64_MIN;
	int64_t x396 = -21117LL;

	t85 = (((x393-x394)&x395)==x396);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x397 = 90231967862LLU;
	int16_t x398 = -209;
	int32_t x399 = INT32_MIN;
	int32_t x400 = INT32_MIN;

	t86 = (((x397-x398)&x399)==x400);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x401 = -1;
	static int64_t x402 = INT64_MAX;
	uint16_t x403 = UINT16_MAX;
	int16_t x404 = -1;
	volatile int32_t t87 = -2;

	t87 = (((x401-x402)&x403)==x404);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x405 = UINT16_MAX;
	uint8_t x406 = 127U;
	static volatile int32_t t88 = 34167552;

	t88 = (((x405-x406)&x407)==x408);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint8_t x413 = 8U;
	volatile int8_t x414 = 1;
	uint16_t x415 = 1021U;
	volatile int32_t t89 = -1;

	t89 = (((x413-x414)&x415)==x416);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x417 = -1;
	uint8_t x418 = UINT8_MAX;
	int16_t x420 = -1;
	int32_t t90 = 626836;

	t90 = (((x417-x418)&x419)==x420);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x422 = -82;
	uint64_t x423 = 1254635772379016820LLU;
	uint8_t x424 = 28U;
	int32_t t91 = 4124;

	t91 = (((x421-x422)&x423)==x424);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x425 = INT16_MAX;
	int8_t x426 = INT8_MAX;
	int16_t x427 = 28;

	t92 = (((x425-x426)&x427)==x428);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x429 = 1LL;
	int8_t x432 = INT8_MAX;
	int32_t t93 = 136;

	t93 = (((x429-x430)&x431)==x432);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x434 = -1;
	int64_t x435 = INT64_MIN;
	static uint16_t x436 = UINT16_MAX;
	volatile int32_t t94 = -167799;

	t94 = (((x433-x434)&x435)==x436);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x437 = 1U;
	int64_t x438 = INT64_MAX;
	int8_t x439 = 1;
	uint16_t x440 = 25U;
	int32_t t95 = 567;

	t95 = (((x437-x438)&x439)==x440);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x441 = INT8_MIN;
	volatile uint8_t x443 = 56U;
	static int32_t t96 = 5;

	t96 = (((x441-x442)&x443)==x444);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x445 = INT8_MIN;
	uint8_t x446 = 39U;
	uint8_t x447 = UINT8_MAX;
	static int32_t t97 = -3604736;

	t97 = (((x445-x446)&x447)==x448);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x449 = -1LL;
	volatile int8_t x450 = -1;
	int16_t x451 = -1;
	static int32_t t98 = -472938;

	t98 = (((x449-x450)&x451)==x452);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x454 = UINT32_MAX;
	int8_t x455 = INT8_MAX;
	int64_t x456 = -46LL;
	volatile int32_t t99 = 1819067;

	t99 = (((x453-x454)&x455)==x456);

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

