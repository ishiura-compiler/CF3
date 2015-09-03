#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = UINT8_MAX;
volatile int32_t t1 = -317234276;
static uint16_t x11 = 1U;
uint16_t x13 = 149U;
uint8_t x15 = 7U;
static int16_t x20 = INT16_MAX;
int64_t x31 = INT64_MAX;
int64_t x36 = INT64_MAX;
static int32_t x38 = 0;
static volatile uint64_t t9 = 4866642841LLU;
volatile int32_t x46 = INT32_MIN;
uint64_t t12 = 3168647829LLU;
uint32_t x53 = UINT32_MAX;
int8_t x54 = INT8_MIN;
volatile int32_t x55 = INT32_MIN;
uint16_t x56 = 3736U;
static int8_t x63 = INT8_MIN;
uint16_t x67 = UINT16_MAX;
static volatile uint64_t x76 = 380657556334758LLU;
int16_t x84 = -12012;
int32_t t20 = 0;
int32_t t21 = 402653;
uint8_t x93 = 1U;
static volatile uint16_t x94 = 3U;
uint64_t x98 = 277537440LLU;
int8_t x103 = -7;
uint64_t x105 = 13300LLU;
uint32_t x107 = UINT32_MAX;
static int64_t x114 = INT64_MIN;
int64_t x116 = -1LL;
uint8_t x126 = 6U;
static int64_t x131 = INT64_MAX;
int32_t x134 = INT32_MIN;
int64_t t36 = 12028LL;
int32_t t37 = -109390185;
int64_t x157 = 4103511015952LL;
int32_t t40 = -54277955;
uint16_t x171 = UINT16_MAX;
int16_t x172 = -11;
int32_t t42 = 213036914;
static int32_t x173 = INT32_MIN;
int16_t x175 = INT16_MIN;
volatile int32_t t43 = -58;
volatile int64_t x180 = INT64_MIN;
uint16_t x181 = 221U;
uint16_t x184 = 20U;
int64_t x190 = INT64_MIN;
static volatile uint32_t x191 = 1U;
uint64_t x202 = UINT64_MAX;
static uint64_t t49 = 66079978348038729LLU;
uint64_t x206 = 770869925617LLU;
int64_t x213 = INT64_MIN;
int64_t x215 = INT64_MIN;
int32_t x216 = INT32_MIN;
int64_t x221 = INT64_MAX;
volatile int8_t x224 = INT8_MAX;
static int16_t x225 = -6;
static uint8_t x227 = 28U;
int32_t t54 = -29237527;
static uint64_t x230 = 186152568026861173LLU;
volatile uint8_t x243 = UINT8_MAX;
int16_t x251 = -11;
volatile int8_t x257 = INT8_MIN;
int8_t x265 = 5;
volatile int32_t x266 = INT32_MIN;
uint64_t x268 = UINT64_MAX;
static uint64_t x275 = 62214022325355580LLU;
volatile uint64_t t70 = 7211985LLU;
static int16_t x298 = INT16_MIN;
static volatile int16_t x301 = INT16_MAX;
int32_t x302 = -8813907;
static uint64_t x305 = 21406232386LLU;
static int16_t x306 = -12;
int32_t x313 = -58145926;
volatile int32_t t75 = 402015025;
static int64_t x326 = INT64_MIN;
int16_t x329 = INT16_MIN;
int16_t x339 = -1;
uint64_t x347 = 24412770302240LLU;
uint32_t x366 = 449176U;
int16_t x368 = INT16_MIN;
int32_t t88 = 2174;
int32_t x370 = 803630229;
int8_t x373 = INT8_MIN;
int64_t x375 = -2934608LL;
static uint32_t x376 = UINT32_MAX;
static volatile int64_t t90 = -74490618462582LL;
static int32_t x377 = -1;
uint32_t x382 = UINT32_MAX;
volatile int32_t t92 = 207780;
uint8_t x387 = 7U;
static volatile int64_t x394 = INT64_MAX;
int32_t x399 = 919;
static int64_t x409 = 209655028LL;
static int32_t x411 = -13704;


void f0(void) {
	volatile uint32_t x2 = 7542598U;
	volatile int8_t x3 = -31;
	static uint16_t x4 = UINT16_MAX;
	int32_t t0 = 1099;

	t0 = ((x1<x2)+(x3/x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -24086481637064153LL;
	uint8_t x6 = 120U;
	int8_t x7 = -43;
	int16_t x8 = -4;

	t1 = ((x5<x6)+(x7/x8));

	if (t1 != 11) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = INT16_MAX;
	int64_t x10 = INT64_MIN;
	int64_t x12 = INT64_MIN;
	volatile int64_t t2 = -6761166944877167LL;

	t2 = ((x9<x10)+(x11/x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x14 = UINT64_MAX;
	int16_t x16 = -44;
	static volatile int32_t t3 = -96;

	t3 = ((x13<x14)+(x15/x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = INT8_MIN;
	static int16_t x18 = INT16_MAX;
	static int8_t x19 = -1;
	volatile int32_t t4 = 3275438;

	t4 = ((x17<x18)+(x19/x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	int8_t x22 = -1;
	int64_t x23 = -1LL;
	static volatile int64_t x24 = 61LL;
	volatile int64_t t5 = -1LL;

	t5 = ((x21<x22)+(x23/x24));

	if (t5 != 1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -1LL;
	volatile uint8_t x26 = 9U;
	int16_t x27 = INT16_MIN;
	int32_t x28 = INT32_MAX;
	static volatile int32_t t6 = 4487;

	t6 = ((x25<x26)+(x27/x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = INT64_MIN;
	int16_t x30 = INT16_MIN;
	int32_t x32 = INT32_MIN;
	volatile int64_t t7 = 16662058258442LL;

	t7 = ((x29<x30)+(x31/x32));

	if (t7 != -4294967294LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 1U;
	static int16_t x34 = INT16_MIN;
	int16_t x35 = INT16_MIN;
	volatile int64_t t8 = 15922826265LL;

	t8 = ((x33<x34)+(x35/x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = UINT64_MAX;
	uint16_t x39 = 0U;
	uint64_t x40 = 81LLU;

	t9 = ((x37<x38)+(x39/x40));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = 58;
	volatile uint32_t x42 = 12734U;
	uint64_t x43 = 546502263533774LLU;
	int8_t x44 = INT8_MIN;
	uint64_t t10 = 1LLU;

	t10 = ((x41<x42)+(x43/x44));

	if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x45 = 11U;
	static int32_t x47 = 5623789;
	int8_t x48 = INT8_MIN;
	int32_t t11 = -3292347;

	t11 = ((x45<x46)+(x47/x48));

	if (t11 != -43934) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -1;
	uint64_t x50 = UINT64_MAX;
	volatile uint64_t x51 = 982LLU;
	int8_t x52 = INT8_MIN;

	t12 = ((x49<x50)+(x51/x52));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t t13 = -976178654;

	t13 = ((x53<x54)+(x55/x56));

	if (t13 != -574808) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -1;
	int64_t x58 = INT64_MIN;
	int8_t x59 = INT8_MIN;
	volatile uint32_t x60 = UINT32_MAX;
	volatile uint32_t t14 = 4U;

	t14 = ((x57<x58)+(x59/x60));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int8_t x61 = 1;
	int32_t x62 = INT32_MIN;
	static volatile int16_t x64 = -1;
	static volatile int32_t t15 = -144725;

	t15 = ((x61<x62)+(x63/x64));

	if (t15 != 128) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x65 = INT32_MAX;
	uint32_t x66 = 0U;
	int32_t x68 = INT32_MAX;
	int32_t t16 = -130226589;

	t16 = ((x65<x66)+(x67/x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x69 = INT16_MIN;
	int64_t x70 = INT64_MIN;
	int64_t x71 = INT64_MIN;
	int8_t x72 = INT8_MIN;
	int64_t t17 = 472333811944LL;

	t17 = ((x69<x70)+(x71/x72));

	if (t17 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x73 = UINT8_MAX;
	uint16_t x74 = UINT16_MAX;
	volatile uint64_t x75 = UINT64_MAX;
	volatile uint64_t t18 = 3777966146667444LLU;

	t18 = ((x73<x74)+(x75/x76));

	if (t18 != 48461LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = -1;
	int16_t x78 = INT16_MAX;
	uint8_t x79 = 0U;
	static int64_t x80 = INT64_MAX;
	int64_t t19 = 5740101816LL;

	t19 = ((x77<x78)+(x79/x80));

	if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 6384U;
	uint16_t x82 = 0U;
	uint16_t x83 = 52U;

	t20 = ((x81<x82)+(x83/x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x85 = -1;
	int32_t x86 = INT32_MIN;
	int16_t x87 = -1;
	int16_t x88 = INT16_MIN;

	t21 = ((x85<x86)+(x87/x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MIN;
	int8_t x90 = INT8_MIN;
	int32_t x91 = -1870154;
	static int32_t x92 = INT32_MAX;
	int32_t t22 = -2;

	t22 = ((x89<x90)+(x91/x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x95 = -2942804411858220LL;
	int8_t x96 = -1;
	volatile int64_t t23 = 8168878501204730LL;

	t23 = ((x93<x94)+(x95/x96));

	if (t23 != 2942804411858221LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = UINT16_MAX;
	uint8_t x99 = 0U;
	uint64_t x100 = 1049971438LLU;
	volatile uint64_t t24 = 227206566170401475LLU;

	t24 = ((x97<x98)+(x99/x100));

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = 5;
	uint16_t x102 = 5924U;
	volatile int64_t x104 = INT64_MIN;
	int64_t t25 = 206804073LL;

	t25 = ((x101<x102)+(x103/x104));

	if (t25 != 1LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x106 = 48U;
	volatile int64_t x108 = -329611536723048804LL;
	static int64_t t26 = 54026250857LL;

	t26 = ((x105<x106)+(x107/x108));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = 0U;
	uint32_t x110 = 67U;
	int16_t x111 = 2625;
	volatile int32_t x112 = INT32_MAX;
	volatile int32_t t27 = 0;

	t27 = ((x109<x110)+(x111/x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = -495;
	int32_t x115 = INT32_MIN;
	volatile int64_t t28 = -305089023733271699LL;

	t28 = ((x113<x114)+(x115/x116));

	if (t28 != 2147483648LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x117 = -1;
	int8_t x118 = 6;
	uint32_t x119 = UINT32_MAX;
	int8_t x120 = INT8_MIN;
	uint32_t t29 = 201U;

	t29 = ((x117<x118)+(x119/x120));

	if (t29 != 2U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MAX;
	volatile int32_t x122 = -1;
	volatile int8_t x123 = -6;
	int32_t x124 = INT32_MIN;
	int32_t t30 = -463504;

	t30 = ((x121<x122)+(x123/x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = -1;
	uint8_t x127 = 9U;
	uint32_t x128 = UINT32_MAX;
	volatile uint32_t t31 = 23U;

	t31 = ((x125<x126)+(x127/x128));

	if (t31 != 1U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	volatile uint32_t x130 = 44294054U;
	uint64_t x132 = UINT64_MAX;
	volatile uint64_t t32 = 44294744427LLU;

	t32 = ((x129<x130)+(x131/x132));

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MIN;
	int64_t x135 = INT64_MAX;
	int64_t x136 = INT64_MIN;
	volatile int64_t t33 = 44LL;

	t33 = ((x133<x134)+(x135/x136));

	if (t33 != 1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = -1;
	int16_t x138 = INT16_MAX;
	uint8_t x139 = 43U;
	static int8_t x140 = -1;
	volatile int32_t t34 = 193743;

	t34 = ((x137<x138)+(x139/x140));

	if (t34 != -42) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x141 = UINT16_MAX;
	int16_t x142 = -1;
	volatile int32_t x143 = 1;
	int64_t x144 = 114628LL;
	int64_t t35 = 1051350760941LL;

	t35 = ((x141<x142)+(x143/x144));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MAX;
	int8_t x146 = INT8_MAX;
	volatile int64_t x147 = INT64_MIN;
	int32_t x148 = INT32_MAX;

	t36 = ((x145<x146)+(x147/x148));

	if (t36 != -4294967298LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MIN;
	volatile int64_t x150 = INT64_MIN;
	static volatile int8_t x151 = 2;
	int16_t x152 = INT16_MIN;

	t37 = ((x149<x150)+(x151/x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x153 = INT8_MIN;
	uint16_t x154 = UINT16_MAX;
	static int16_t x155 = -20;
	int16_t x156 = 171;
	static int32_t t38 = -1;

	t38 = ((x153<x154)+(x155/x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x158 = -1;
	static int64_t x159 = -1LL;
	static uint64_t x160 = 5551LLU;
	static uint64_t t39 = 64LLU;

	t39 = ((x157<x158)+(x159/x160));

	if (t39 != 3323138907171600LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MIN;
	uint32_t x162 = 1U;
	volatile int16_t x163 = INT16_MIN;
	volatile int16_t x164 = 488;

	t40 = ((x161<x162)+(x163/x164));

	if (t40 != -66) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x165 = INT32_MIN;
	int32_t x166 = INT32_MAX;
	int16_t x167 = -1;
	volatile uint32_t x168 = 316U;
	volatile uint32_t t41 = 97759U;

	t41 = ((x165<x166)+(x167/x168));

	if (t41 != 13591669U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = 2LL;
	int8_t x170 = -1;

	t42 = ((x169<x170)+(x171/x172));

	if (t42 != -5957) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x174 = 56325LLU;
	uint16_t x176 = 5681U;

	t43 = ((x173<x174)+(x175/x176));

	if (t43 != -5) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x177 = 182355U;
	int8_t x178 = INT8_MIN;
	uint32_t x179 = UINT32_MAX;
	volatile int64_t t44 = -918081315LL;

	t44 = ((x177<x178)+(x179/x180));

	if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x182 = -1;
	volatile int16_t x183 = 165;
	int32_t t45 = 2476436;

	t45 = ((x181<x182)+(x183/x184));

	if (t45 != 8) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MIN;
	volatile int32_t x186 = INT32_MIN;
	static uint8_t x187 = 25U;
	uint32_t x188 = 122958733U;
	static volatile uint32_t t46 = 80078262U;

	t46 = ((x185<x186)+(x187/x188));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = -242;
	volatile int64_t x192 = -1LL;
	volatile int64_t t47 = 48963LL;

	t47 = ((x189<x190)+(x191/x192));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x197 = 0;
	uint8_t x198 = 1U;
	volatile uint8_t x199 = 14U;
	int8_t x200 = INT8_MIN;
	int32_t t48 = -3104429;

	t48 = ((x197<x198)+(x199/x200));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x201 = -156002;
	uint64_t x203 = UINT64_MAX;
	uint32_t x204 = 360U;

	t49 = ((x201<x202)+(x203/x204));

	if (t49 != 51240955760304311LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x205 = -1;
	volatile int16_t x207 = INT16_MAX;
	static int64_t x208 = INT64_MAX;
	volatile int64_t t50 = -513216LL;

	t50 = ((x205<x206)+(x207/x208));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x214 = 0;
	volatile int64_t t51 = 135054333977LL;

	t51 = ((x213<x214)+(x215/x216));

	if (t51 != 4294967297LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x217 = -19938431356573753LL;
	int32_t x218 = -1;
	int64_t x219 = 9712141745LL;
	volatile int16_t x220 = 111;
	volatile int64_t t52 = -5009659712LL;

	t52 = ((x217<x218)+(x219/x220));

	if (t52 != 87496773LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x222 = 610360U;
	static int32_t x223 = 14;
	volatile int32_t t53 = 415916;

	t53 = ((x221<x222)+(x223/x224));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x226 = INT64_MIN;
	int32_t x228 = 144889065;

	t54 = ((x225<x226)+(x227/x228));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x229 = 322189955LL;
	uint16_t x231 = UINT16_MAX;
	uint16_t x232 = 109U;
	volatile int32_t t55 = 37;

	t55 = ((x229<x230)+(x231/x232));

	if (t55 != 602) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x233 = -1;
	int16_t x234 = -1;
	volatile uint64_t x235 = 1440226822597LLU;
	int64_t x236 = INT64_MIN;
	static uint64_t t56 = 2639100455899610LLU;

	t56 = ((x233<x234)+(x235/x236));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x237 = INT8_MIN;
	volatile int32_t x238 = INT32_MAX;
	volatile int32_t x239 = -1;
	uint32_t x240 = UINT32_MAX;
	uint32_t t57 = 4795U;

	t57 = ((x237<x238)+(x239/x240));

	if (t57 != 2U) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x241 = 0U;
	uint8_t x242 = 1U;
	volatile int32_t x244 = -1;
	int32_t t58 = 8701;

	t58 = ((x241<x242)+(x243/x244));

	if (t58 != -254) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x245 = 351U;
	volatile uint32_t x246 = UINT32_MAX;
	static int8_t x247 = 6;
	static volatile int32_t x248 = -1;
	volatile int32_t t59 = -30235;

	t59 = ((x245<x246)+(x247/x248));

	if (t59 != -5) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x249 = 2LL;
	volatile int64_t x250 = 301403997LL;
	static int16_t x252 = INT16_MIN;
	volatile int32_t t60 = 161298;

	t60 = ((x249<x250)+(x251/x252));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x253 = -1;
	volatile int8_t x254 = INT8_MIN;
	volatile int8_t x255 = -54;
	int16_t x256 = INT16_MIN;
	volatile int32_t t61 = 72786;

	t61 = ((x253<x254)+(x255/x256));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x258 = 31;
	int16_t x259 = INT16_MAX;
	int8_t x260 = INT8_MIN;
	volatile int32_t t62 = 818;

	t62 = ((x257<x258)+(x259/x260));

	if (t62 != -254) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x261 = INT64_MIN;
	static volatile int8_t x262 = INT8_MIN;
	uint8_t x263 = 48U;
	int64_t x264 = INT64_MIN;
	volatile int64_t t63 = -401222056LL;

	t63 = ((x261<x262)+(x263/x264));

	if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x267 = 541;
	volatile uint64_t t64 = 1538852444LLU;

	t64 = ((x265<x266)+(x267/x268));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x269 = INT32_MIN;
	volatile uint8_t x270 = UINT8_MAX;
	uint8_t x271 = 0U;
	uint8_t x272 = UINT8_MAX;
	static int32_t t65 = -6986583;

	t65 = ((x269<x270)+(x271/x272));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x273 = -209;
	int32_t x274 = INT32_MIN;
	volatile int8_t x276 = INT8_MIN;
	uint64_t t66 = 19167270LLU;

	t66 = ((x273<x274)+(x275/x276));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x277 = UINT16_MAX;
	uint8_t x278 = UINT8_MAX;
	int8_t x279 = -1;
	int16_t x280 = INT16_MIN;
	int32_t t67 = 535;

	t67 = ((x277<x278)+(x279/x280));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x281 = 147U;
	uint8_t x282 = UINT8_MAX;
	int32_t x283 = 40861876;
	volatile int8_t x284 = -1;
	int32_t t68 = -1019396;

	t68 = ((x281<x282)+(x283/x284));

	if (t68 != -40861875) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x285 = 209058U;
	uint64_t x286 = 226954244011332665LLU;
	volatile uint64_t x287 = UINT64_MAX;
	int16_t x288 = -1105;
	uint64_t t69 = 182519416499186LLU;

	t69 = ((x285<x286)+(x287/x288));

	if (t69 != 2LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x293 = INT64_MAX;
	int64_t x294 = INT64_MAX;
	uint64_t x295 = 17635242589LLU;
	static volatile int64_t x296 = -1LL;

	t70 = ((x293<x294)+(x295/x296));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x297 = INT64_MIN;
	volatile uint16_t x299 = UINT16_MAX;
	int32_t x300 = INT32_MIN;
	int32_t t71 = -965;

	t71 = ((x297<x298)+(x299/x300));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x303 = 2U;
	uint32_t x304 = UINT32_MAX;
	uint32_t t72 = 50U;

	t72 = ((x301<x302)+(x303/x304));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x307 = 1U;
	volatile int32_t x308 = -60;
	uint32_t t73 = 294441062U;

	t73 = ((x305<x306)+(x307/x308));

	if (t73 != 1U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x309 = -2;
	int8_t x310 = -1;
	int8_t x311 = 46;
	int32_t x312 = INT32_MIN;
	volatile int32_t t74 = 1;

	t74 = ((x309<x310)+(x311/x312));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int16_t x314 = -1;
	int8_t x315 = INT8_MIN;
	uint16_t x316 = 3U;

	t75 = ((x313<x314)+(x315/x316));

	if (t75 != -41) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x317 = 7U;
	uint32_t x318 = 930575U;
	volatile int32_t x319 = -1;
	volatile uint16_t x320 = 109U;
	int32_t t76 = 20104;

	t76 = ((x317<x318)+(x319/x320));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x321 = INT8_MIN;
	uint8_t x322 = 4U;
	uint8_t x323 = 0U;
	static int8_t x324 = -10;
	int32_t t77 = -29978;

	t77 = ((x321<x322)+(x323/x324));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x325 = 23U;
	int32_t x327 = 5896859;
	int8_t x328 = -26;
	static int32_t t78 = -1;

	t78 = ((x325<x326)+(x327/x328));

	if (t78 != -226802) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x330 = -1;
	uint32_t x331 = 198U;
	volatile int64_t x332 = -1LL;
	volatile int64_t t79 = -255471LL;

	t79 = ((x329<x330)+(x331/x332));

	if (t79 != -197LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x333 = INT8_MIN;
	uint8_t x334 = 3U;
	static int8_t x335 = INT8_MAX;
	uint32_t x336 = UINT32_MAX;
	uint32_t t80 = 1775535U;

	t80 = ((x333<x334)+(x335/x336));

	if (t80 != 1U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x337 = 6U;
	int8_t x338 = 4;
	uint64_t x340 = UINT64_MAX;
	volatile uint64_t t81 = 1912LLU;

	t81 = ((x337<x338)+(x339/x340));

	if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x341 = -6;
	static uint64_t x342 = UINT64_MAX;
	uint16_t x343 = UINT16_MAX;
	int64_t x344 = INT64_MAX;
	int64_t t82 = -4LL;

	t82 = ((x341<x342)+(x343/x344));

	if (t82 != 1LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x345 = 3U;
	int32_t x346 = INT32_MIN;
	volatile int8_t x348 = INT8_MIN;
	volatile uint64_t t83 = 3491913658902LLU;

	t83 = ((x345<x346)+(x347/x348));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x349 = UINT32_MAX;
	uint32_t x350 = 931248614U;
	uint32_t x351 = UINT32_MAX;
	uint32_t x352 = 9131U;
	uint32_t t84 = 1U;

	t84 = ((x349<x350)+(x351/x352));

	if (t84 != 470372U) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x353 = UINT64_MAX;
	static uint16_t x354 = 1548U;
	int16_t x355 = 45;
	int16_t x356 = -5335;
	int32_t t85 = 645241947;

	t85 = ((x353<x354)+(x355/x356));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x357 = 50U;
	volatile int16_t x358 = 152;
	uint64_t x359 = 15102172LLU;
	volatile int8_t x360 = INT8_MIN;
	volatile uint64_t t86 = 3LLU;

	t86 = ((x357<x358)+(x359/x360));

	if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x361 = -930;
	static int8_t x362 = INT8_MAX;
	uint8_t x363 = 31U;
	static int8_t x364 = INT8_MIN;
	int32_t t87 = -987375;

	t87 = ((x361<x362)+(x363/x364));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x365 = -1;
	int32_t x367 = INT32_MAX;

	t88 = ((x365<x366)+(x367/x368));

	if (t88 != -65535) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x369 = INT8_MIN;
	int16_t x371 = INT16_MAX;
	volatile int16_t x372 = -1;
	int32_t t89 = -26703557;

	t89 = ((x369<x370)+(x371/x372));

	if (t89 != -32766) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x374 = -1;

	t90 = ((x373<x374)+(x375/x376));

	if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x378 = INT32_MIN;
	uint16_t x379 = 2U;
	static volatile int16_t x380 = INT16_MAX;
	int32_t t91 = -1;

	t91 = ((x377<x378)+(x379/x380));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x381 = INT32_MIN;
	static volatile int16_t x383 = INT16_MIN;
	int8_t x384 = INT8_MAX;

	t92 = ((x381<x382)+(x383/x384));

	if (t92 != -257) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x385 = INT16_MIN;
	static int32_t x386 = 1454;
	int32_t x388 = -1;
	volatile int32_t t93 = 177189;

	t93 = ((x385<x386)+(x387/x388));

	if (t93 != -6) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x389 = -17760;
	int32_t x390 = INT32_MAX;
	int32_t x391 = INT32_MAX;
	volatile uint16_t x392 = 65U;
	int32_t t94 = -7969;

	t94 = ((x389<x390)+(x391/x392));

	if (t94 != 33038210) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x393 = INT64_MIN;
	volatile int64_t x395 = -1LL;
	volatile int8_t x396 = -1;
	volatile int64_t t95 = 6LL;

	t95 = ((x393<x394)+(x395/x396));

	if (t95 != 2LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x397 = UINT8_MAX;
	static uint32_t x398 = UINT32_MAX;
	int32_t x400 = INT32_MAX;
	volatile int32_t t96 = 14351628;

	t96 = ((x397<x398)+(x399/x400));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x401 = INT8_MAX;
	volatile int16_t x402 = -1;
	int8_t x403 = -1;
	uint64_t x404 = UINT64_MAX;
	volatile uint64_t t97 = 3440076357059LLU;

	t97 = ((x401<x402)+(x403/x404));

	if (t97 != 1LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint16_t x405 = 1U;
	volatile uint64_t x406 = 9204456623556304221LLU;
	uint64_t x407 = UINT64_MAX;
	uint64_t x408 = 81LLU;
	static volatile uint64_t t98 = 245LLU;

	t98 = ((x405<x406)+(x407/x408));

	if (t98 != 227737581156908045LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint32_t x410 = 13U;
	int64_t x412 = INT64_MIN;
	int64_t t99 = 3102793LL;

	t99 = ((x409<x410)+(x411/x412));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

