#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x5 = 10396U;
uint32_t x6 = 2918939U;
int16_t x10 = 49;
uint8_t x14 = UINT8_MAX;
static volatile int16_t x16 = -1076;
uint16_t x18 = 2046U;
static uint8_t x30 = UINT8_MAX;
int32_t t7 = 39;
static int8_t x34 = INT8_MAX;
volatile uint64_t t9 = 21809598182360LLU;
int32_t x43 = 198791;
uint16_t x46 = 2U;
uint64_t t13 = 132878205494205860LLU;
int8_t x58 = INT8_MAX;
static int64_t x60 = INT64_MIN;
volatile int64_t t16 = -8LL;
uint64_t x86 = UINT64_MAX;
static int8_t x91 = -1;
uint32_t t22 = 3U;
volatile int16_t x105 = -463;
static int8_t x121 = -47;
uint32_t x126 = UINT32_MAX;
int64_t x129 = INT64_MIN;
uint16_t x133 = 0U;
volatile int8_t x134 = INT8_MIN;
static uint64_t t34 = 57838397766891LLU;
int32_t t35 = 3195;
uint64_t x152 = UINT64_MAX;
int32_t x162 = -1;
static int32_t x174 = -1;
volatile uint8_t x175 = UINT8_MAX;
volatile int16_t x176 = -830;
int16_t x178 = 80;
int8_t x182 = INT8_MAX;
int64_t x192 = INT64_MAX;
int64_t x193 = INT64_MIN;
static int16_t x195 = 1;
uint32_t x200 = UINT32_MAX;
int8_t x201 = -5;
static int64_t t49 = 1040897LL;
int32_t x205 = INT32_MAX;
int64_t x210 = INT64_MAX;
uint32_t x224 = 130801398U;
int32_t x226 = -10729232;
int16_t x227 = -1;
int32_t t55 = -21;
volatile int32_t x229 = INT32_MIN;
static volatile int64_t x236 = INT64_MIN;
int32_t x240 = INT32_MIN;
int32_t x244 = -3;
int32_t x247 = INT32_MIN;
volatile int16_t x249 = -1;
uint32_t x251 = UINT32_MAX;
uint64_t x254 = 64938LLU;
int64_t x255 = -1LL;
uint16_t x256 = 147U;
int8_t x257 = INT8_MIN;
int16_t x260 = 459;
int32_t t63 = -391;
volatile uint16_t x270 = UINT16_MAX;
int8_t x271 = INT8_MIN;
uint32_t x272 = 57520611U;
static int32_t x283 = -256;
static uint64_t x292 = 1003500132LLU;
uint8_t x293 = UINT8_MAX;
static uint64_t x295 = 8582836152770845987LLU;
int32_t t72 = -112974;
uint8_t x302 = UINT8_MAX;
int64_t x304 = INT64_MIN;
int64_t x308 = 47812LL;
uint8_t x309 = 0U;
static int64_t x312 = -19LL;
int32_t x313 = -536;
uint16_t x318 = 0U;
int64_t x323 = -1LL;
static volatile int64_t x325 = INT64_MIN;
volatile int64_t x326 = INT64_MAX;
int32_t x344 = -1;
static uint64_t t84 = 1859LLU;
static int64_t x351 = INT64_MIN;
static volatile int64_t t85 = 246LL;
int32_t x360 = -1;
int32_t t87 = -7464;
static uint8_t x369 = 0U;
int64_t x374 = -73986582084174LL;
volatile int16_t x375 = INT16_MAX;
int8_t x376 = INT8_MIN;
int8_t x378 = INT8_MIN;
volatile int32_t t92 = 315348569;
int16_t x388 = 629;
int64_t t96 = -7LL;
int64_t x398 = 11956957227055381LL;
int32_t t97 = -89347;
int16_t x403 = INT16_MIN;
int8_t x405 = -1;


void f0(void) {
	int8_t x1 = 1;
	volatile int16_t x2 = INT16_MAX;
	int64_t x3 = INT64_MIN;
	int64_t x4 = 248580419142026LL;
	volatile int64_t t0 = 313519LL;

	t0 = (((x1<x2)%x3)%x4);

	if (t0 != 1LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x7 = UINT16_MAX;
	uint64_t x8 = UINT64_MAX;
	volatile uint64_t t1 = 99781LLU;

	t1 = (((x5<x6)%x7)%x8);

	if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = -1;
	int64_t x11 = INT64_MIN;
	int8_t x12 = -1;
	static volatile int64_t t2 = 711814861823824154LL;

	t2 = (((x9<x10)%x11)%x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 13U;
	int32_t x15 = -1;
	volatile int32_t t3 = -10426;

	t3 = (((x13<x14)%x15)%x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x17 = UINT16_MAX;
	int64_t x19 = -30464088359517420LL;
	int32_t x20 = -395925014;
	volatile int64_t t4 = 1699324971LL;

	t4 = (((x17<x18)%x19)%x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x21 = 2LLU;
	int32_t x22 = INT32_MIN;
	uint8_t x23 = UINT8_MAX;
	int16_t x24 = 2466;
	int32_t t5 = 1;

	t5 = (((x21<x22)%x23)%x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = INT8_MAX;
	int16_t x26 = -122;
	int16_t x27 = 47;
	int16_t x28 = INT16_MIN;
	int32_t t6 = 12851;

	t6 = (((x25<x26)%x27)%x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 0U;
	uint16_t x31 = 1U;
	volatile int16_t x32 = INT16_MIN;

	t7 = (((x29<x30)%x31)%x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	volatile uint64_t x35 = UINT64_MAX;
	int32_t x36 = -665555;
	volatile uint64_t t8 = 1LLU;

	t8 = (((x33<x34)%x35)%x36);

	if (t8 != 1LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x37 = 8276050408680458266LLU;
	volatile int8_t x38 = 2;
	uint64_t x39 = 8484542816792LLU;
	volatile uint16_t x40 = UINT16_MAX;

	t9 = (((x37<x38)%x39)%x40);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 1610930327U;
	int32_t x42 = -1;
	volatile int32_t x44 = INT32_MIN;
	static int32_t t10 = -63;

	t10 = (((x41<x42)%x43)%x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 18U;
	int64_t x47 = -1LL;
	int16_t x48 = INT16_MIN;
	int64_t t11 = 24540492642LL;

	t11 = (((x45<x46)%x47)%x48);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 5U;
	int32_t x50 = -1;
	int64_t x51 = INT64_MIN;
	uint32_t x52 = 4254289U;
	int64_t t12 = 94258LL;

	t12 = (((x49<x50)%x51)%x52);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 2U;
	int64_t x54 = 35533857677643262LL;
	uint64_t x55 = UINT64_MAX;
	static int64_t x56 = -2870LL;

	t13 = (((x53<x54)%x55)%x56);

	if (t13 != 1LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x57 = UINT16_MAX;
	int32_t x59 = INT32_MIN;
	volatile int64_t t14 = -919985288LL;

	t14 = (((x57<x58)%x59)%x60);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -1;
	volatile int8_t x62 = -6;
	volatile int16_t x63 = INT16_MIN;
	uint64_t x64 = UINT64_MAX;
	volatile uint64_t t15 = 398719991LLU;

	t15 = (((x61<x62)%x63)%x64);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x65 = INT32_MIN;
	int32_t x66 = INT32_MIN;
	int16_t x67 = INT16_MAX;
	static int64_t x68 = -1LL;

	t16 = (((x65<x66)%x67)%x68);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = 3;
	int64_t x70 = 1759142348706516LL;
	int32_t x71 = -53788;
	static int8_t x72 = -1;
	volatile int32_t t17 = -4;

	t17 = (((x69<x70)%x71)%x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MIN;
	int8_t x74 = 1;
	uint16_t x75 = 24U;
	int8_t x76 = -1;
	volatile int32_t t18 = 2;

	t18 = (((x73<x74)%x75)%x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	volatile int64_t x78 = INT64_MIN;
	static int16_t x79 = -1;
	int32_t x80 = INT32_MIN;
	volatile int32_t t19 = 662266;

	t19 = (((x77<x78)%x79)%x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = UINT16_MAX;
	int8_t x82 = INT8_MIN;
	int32_t x83 = INT32_MIN;
	volatile int64_t x84 = INT64_MIN;
	volatile int64_t t20 = 128560500573LL;

	t20 = (((x81<x82)%x83)%x84);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MIN;
	static int8_t x87 = INT8_MIN;
	static uint64_t x88 = UINT64_MAX;
	uint64_t t21 = 3642034972189449LLU;

	t21 = (((x85<x86)%x87)%x88);

	if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x89 = INT16_MIN;
	static int32_t x90 = -69295;
	uint32_t x92 = 1U;

	t22 = (((x89<x90)%x91)%x92);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = 110U;
	int32_t x94 = -550;
	uint64_t x95 = UINT64_MAX;
	int16_t x96 = INT16_MIN;
	static volatile uint64_t t23 = 236767299427162583LLU;

	t23 = (((x93<x94)%x95)%x96);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x97 = UINT64_MAX;
	int32_t x98 = 15439;
	int8_t x99 = INT8_MIN;
	static int64_t x100 = -20LL;
	volatile int64_t t24 = -1879351LL;

	t24 = (((x97<x98)%x99)%x100);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MIN;
	uint16_t x102 = 288U;
	static int64_t x103 = -6LL;
	volatile uint64_t x104 = 1007345446931LLU;
	static volatile uint64_t t25 = 129728720095588LLU;

	t25 = (((x101<x102)%x103)%x104);

	if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x106 = 205U;
	int16_t x107 = INT16_MAX;
	int16_t x108 = INT16_MAX;
	int32_t t26 = 4;

	t26 = (((x105<x106)%x107)%x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MAX;
	uint32_t x110 = 4771U;
	int8_t x111 = INT8_MIN;
	int16_t x112 = INT16_MIN;
	static int32_t t27 = -10;

	t27 = (((x109<x110)%x111)%x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = 956935635752846240LLU;
	volatile int8_t x114 = INT8_MIN;
	volatile int16_t x115 = -689;
	int64_t x116 = INT64_MAX;
	int64_t t28 = -259405457330625LL;

	t28 = (((x113<x114)%x115)%x116);

	if (t28 != 1LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = UINT32_MAX;
	int16_t x118 = -62;
	int64_t x119 = INT64_MIN;
	int8_t x120 = -1;
	int64_t t29 = -4666744LL;

	t29 = (((x117<x118)%x119)%x120);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint32_t x122 = 10509U;
	int8_t x123 = 33;
	volatile uint8_t x124 = 10U;
	int32_t t30 = -1;

	t30 = (((x121<x122)%x123)%x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MAX;
	uint32_t x127 = 4148101U;
	uint16_t x128 = 15U;
	volatile uint32_t t31 = 31077U;

	t31 = (((x125<x126)%x127)%x128);

	if (t31 != 1U) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x130 = 4U;
	int8_t x131 = 27;
	int16_t x132 = INT16_MIN;
	volatile int32_t t32 = 267990;

	t32 = (((x129<x130)%x131)%x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x135 = UINT64_MAX;
	volatile int64_t x136 = INT64_MIN;
	uint64_t t33 = 5624709LLU;

	t33 = (((x133<x134)%x135)%x136);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = UINT16_MAX;
	int64_t x138 = -1LL;
	uint64_t x139 = 56080321LLU;
	int32_t x140 = INT32_MAX;

	t34 = (((x137<x138)%x139)%x140);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x141 = 12806064348LLU;
	int16_t x142 = 1;
	uint16_t x143 = 1U;
	volatile int16_t x144 = -1;

	t35 = (((x141<x142)%x143)%x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x149 = UINT64_MAX;
	int16_t x150 = INT16_MIN;
	uint16_t x151 = UINT16_MAX;
	volatile uint64_t t36 = 866456057666506LLU;

	t36 = (((x149<x150)%x151)%x152);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x153 = 1936063U;
	int16_t x154 = -1;
	int16_t x155 = INT16_MIN;
	int64_t x156 = INT64_MAX;
	static int64_t t37 = 16674720LL;

	t37 = (((x153<x154)%x155)%x156);

	if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x157 = INT8_MIN;
	uint8_t x158 = UINT8_MAX;
	int16_t x159 = -1;
	int64_t x160 = INT64_MIN;
	int64_t t38 = -414675944963LL;

	t38 = (((x157<x158)%x159)%x160);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x161 = 4470366686263525LLU;
	int8_t x163 = -1;
	int16_t x164 = INT16_MIN;
	static int32_t t39 = 6;

	t39 = (((x161<x162)%x163)%x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x165 = -14;
	int32_t x166 = -1;
	int16_t x167 = -1;
	int8_t x168 = -49;
	volatile int32_t t40 = 66458887;

	t40 = (((x165<x166)%x167)%x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x169 = INT8_MAX;
	int32_t x170 = -1;
	int16_t x171 = 88;
	int8_t x172 = INT8_MIN;
	int32_t t41 = -62;

	t41 = (((x169<x170)%x171)%x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x173 = -1;
	volatile int32_t t42 = 5995580;

	t42 = (((x173<x174)%x175)%x176);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x177 = 23;
	int64_t x179 = 2995677184035850849LL;
	int16_t x180 = INT16_MIN;
	static volatile int64_t t43 = -95750249648LL;

	t43 = (((x177<x178)%x179)%x180);

	if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int32_t x181 = INT32_MIN;
	int16_t x183 = INT16_MIN;
	static int64_t x184 = -29419LL;
	volatile int64_t t44 = 2237507461556561146LL;

	t44 = (((x181<x182)%x183)%x184);

	if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x185 = 1;
	int64_t x186 = INT64_MIN;
	int8_t x187 = INT8_MIN;
	int64_t x188 = INT64_MAX;
	volatile int64_t t45 = -1LL;

	t45 = (((x185<x186)%x187)%x188);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x189 = -1LL;
	static uint8_t x190 = UINT8_MAX;
	uint64_t x191 = 320168341073089188LLU;
	static volatile uint64_t t46 = 5336851500638585LLU;

	t46 = (((x189<x190)%x191)%x192);

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x194 = INT32_MIN;
	int8_t x196 = INT8_MAX;
	volatile int32_t t47 = -29366611;

	t47 = (((x193<x194)%x195)%x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x197 = -1;
	volatile int8_t x198 = INT8_MIN;
	uint32_t x199 = 2U;
	volatile uint32_t t48 = 11U;

	t48 = (((x197<x198)%x199)%x200);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x202 = INT16_MIN;
	int8_t x203 = INT8_MAX;
	volatile int64_t x204 = -1LL;

	t49 = (((x201<x202)%x203)%x204);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x206 = -1;
	int8_t x207 = -38;
	volatile int32_t x208 = INT32_MAX;
	int32_t t50 = -573760622;

	t50 = (((x205<x206)%x207)%x208);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x209 = 402U;
	int32_t x211 = INT32_MIN;
	int16_t x212 = INT16_MIN;
	volatile int32_t t51 = 62935399;

	t51 = (((x209<x210)%x211)%x212);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int32_t x213 = -1;
	int8_t x214 = 1;
	static uint64_t x215 = UINT64_MAX;
	int64_t x216 = INT64_MAX;
	volatile uint64_t t52 = 25046647926LLU;

	t52 = (((x213<x214)%x215)%x216);

	if (t52 != 1LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x217 = INT64_MIN;
	int16_t x218 = -1;
	static uint8_t x219 = 79U;
	int8_t x220 = 41;
	static volatile int32_t t53 = 24406282;

	t53 = (((x217<x218)%x219)%x220);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x221 = 87U;
	int16_t x222 = INT16_MIN;
	static int64_t x223 = INT64_MIN;
	volatile int64_t t54 = -3LL;

	t54 = (((x221<x222)%x223)%x224);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x225 = INT8_MIN;
	int8_t x228 = INT8_MAX;

	t55 = (((x225<x226)%x227)%x228);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x230 = 1U;
	volatile int64_t x231 = -1LL;
	uint32_t x232 = UINT32_MAX;
	static volatile int64_t t56 = -44990584469LL;

	t56 = (((x229<x230)%x231)%x232);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x233 = 6U;
	static volatile uint32_t x234 = UINT32_MAX;
	static int8_t x235 = INT8_MAX;
	static volatile int64_t t57 = 63219269718LL;

	t57 = (((x233<x234)%x235)%x236);

	if (t57 != 1LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x237 = -1;
	int16_t x238 = INT16_MAX;
	static int64_t x239 = 2487296618LL;
	volatile int64_t t58 = -659LL;

	t58 = (((x237<x238)%x239)%x240);

	if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x241 = 6;
	int32_t x242 = -1;
	uint16_t x243 = 223U;
	int32_t t59 = 31645;

	t59 = (((x241<x242)%x243)%x244);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x245 = 3;
	static uint16_t x246 = 3839U;
	int64_t x248 = INT64_MAX;
	volatile int64_t t60 = 15492LL;

	t60 = (((x245<x246)%x247)%x248);

	if (t60 != 1LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x250 = 37606771;
	int16_t x252 = INT16_MIN;
	uint32_t t61 = 0U;

	t61 = (((x249<x250)%x251)%x252);

	if (t61 != 1U) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x253 = 17382U;
	volatile int64_t t62 = 7721431914LL;

	t62 = (((x253<x254)%x255)%x256);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x258 = INT64_MIN;
	int32_t x259 = -174;

	t63 = (((x257<x258)%x259)%x260);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x261 = -702;
	static uint16_t x262 = UINT16_MAX;
	static uint8_t x263 = UINT8_MAX;
	int32_t x264 = -3617685;
	volatile int32_t t64 = 305706;

	t64 = (((x261<x262)%x263)%x264);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x269 = -255;
	uint32_t t65 = 1051143741U;

	t65 = (((x269<x270)%x271)%x272);

	if (t65 != 1U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x273 = -1017;
	uint64_t x274 = UINT64_MAX;
	uint8_t x275 = UINT8_MAX;
	int64_t x276 = INT64_MIN;
	volatile int64_t t66 = 5LL;

	t66 = (((x273<x274)%x275)%x276);

	if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint8_t x277 = 11U;
	int16_t x278 = INT16_MIN;
	int16_t x279 = INT16_MAX;
	int8_t x280 = INT8_MIN;
	volatile int32_t t67 = 20124278;

	t67 = (((x277<x278)%x279)%x280);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x281 = 1U;
	uint32_t x282 = 10691161U;
	uint16_t x284 = UINT16_MAX;
	static int32_t t68 = 40969;

	t68 = (((x281<x282)%x283)%x284);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x285 = -4942;
	uint8_t x286 = 54U;
	static int16_t x287 = -1;
	static int16_t x288 = -14;
	int32_t t69 = -7257583;

	t69 = (((x285<x286)%x287)%x288);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x289 = -1;
	volatile int8_t x290 = INT8_MAX;
	uint64_t x291 = 263370552118LLU;
	volatile uint64_t t70 = 14LLU;

	t70 = (((x289<x290)%x291)%x292);

	if (t70 != 1LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x294 = INT16_MIN;
	uint8_t x296 = 14U;
	volatile uint64_t t71 = 2874314618LLU;

	t71 = (((x293<x294)%x295)%x296);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x297 = INT16_MAX;
	uint8_t x298 = 52U;
	volatile uint16_t x299 = 1057U;
	int8_t x300 = -1;

	t72 = (((x297<x298)%x299)%x300);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x301 = -1;
	volatile int32_t x303 = -1;
	int64_t t73 = -205470279216721LL;

	t73 = (((x301<x302)%x303)%x304);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x305 = 0;
	volatile int16_t x306 = INT16_MIN;
	uint16_t x307 = 2U;
	static int64_t t74 = -2798329351739LL;

	t74 = (((x305<x306)%x307)%x308);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x310 = INT32_MIN;
	int64_t x311 = INT64_MAX;
	int64_t t75 = -461856640626438591LL;

	t75 = (((x309<x310)%x311)%x312);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x314 = INT32_MAX;
	int32_t x315 = INT32_MIN;
	volatile int8_t x316 = -1;
	volatile int32_t t76 = 28239;

	t76 = (((x313<x314)%x315)%x316);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x317 = INT64_MIN;
	int64_t x319 = -1LL;
	int8_t x320 = INT8_MIN;
	int64_t t77 = -127445LL;

	t77 = (((x317<x318)%x319)%x320);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x321 = 20U;
	int64_t x322 = -2000234800500LL;
	static int16_t x324 = 99;
	volatile int64_t t78 = -1LL;

	t78 = (((x321<x322)%x323)%x324);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x327 = 2U;
	int8_t x328 = INT8_MIN;
	int32_t t79 = -583293631;

	t79 = (((x325<x326)%x327)%x328);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x329 = 1U;
	int64_t x330 = -1LL;
	int32_t x331 = -1;
	uint16_t x332 = 13U;
	static volatile int32_t t80 = -342261;

	t80 = (((x329<x330)%x331)%x332);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x333 = UINT64_MAX;
	int32_t x334 = INT32_MIN;
	uint16_t x335 = 53U;
	static volatile uint8_t x336 = 2U;
	volatile int32_t t81 = -89640771;

	t81 = (((x333<x334)%x335)%x336);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x337 = 15U;
	int8_t x338 = INT8_MIN;
	int64_t x339 = -1382967506005926126LL;
	volatile uint16_t x340 = UINT16_MAX;
	int64_t t82 = -16731950161LL;

	t82 = (((x337<x338)%x339)%x340);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x341 = 3339U;
	int16_t x342 = INT16_MIN;
	volatile uint32_t x343 = 3U;
	uint32_t t83 = 25087377U;

	t83 = (((x341<x342)%x343)%x344);

	if (t83 != 1U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x345 = INT8_MIN;
	int64_t x346 = 3512903853106773LL;
	static uint64_t x347 = 165145314789LLU;
	int64_t x348 = -1LL;

	t84 = (((x345<x346)%x347)%x348);

	if (t84 != 1LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x349 = -1;
	volatile int64_t x350 = INT64_MAX;
	int16_t x352 = 1924;

	t85 = (((x349<x350)%x351)%x352);

	if (t85 != 1LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x353 = UINT64_MAX;
	int8_t x354 = INT8_MIN;
	int32_t x355 = INT32_MIN;
	uint32_t x356 = 1678786U;
	volatile uint32_t t86 = 1364889U;

	t86 = (((x353<x354)%x355)%x356);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x357 = -1;
	int32_t x358 = -181546;
	static volatile int32_t x359 = INT32_MAX;

	t87 = (((x357<x358)%x359)%x360);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x361 = 32904092U;
	static int16_t x362 = INT16_MIN;
	static volatile int64_t x363 = INT64_MIN;
	static int32_t x364 = 26497204;
	volatile int64_t t88 = 1708462LL;

	t88 = (((x361<x362)%x363)%x364);

	if (t88 != 1LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x365 = INT8_MIN;
	int16_t x366 = -12728;
	volatile int64_t x367 = -1LL;
	static int32_t x368 = INT32_MAX;
	volatile int64_t t89 = -840515115229770525LL;

	t89 = (((x365<x366)%x367)%x368);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x370 = INT32_MAX;
	int8_t x371 = 4;
	volatile uint8_t x372 = UINT8_MAX;
	static int32_t t90 = -3179;

	t90 = (((x369<x370)%x371)%x372);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x373 = UINT32_MAX;
	volatile int32_t t91 = 6;

	t91 = (((x373<x374)%x375)%x376);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x377 = INT8_MAX;
	int16_t x379 = -22;
	int32_t x380 = 124161205;

	t92 = (((x377<x378)%x379)%x380);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x381 = UINT32_MAX;
	static int64_t x382 = INT64_MIN;
	volatile int64_t x383 = -1LL;
	int64_t x384 = INT64_MIN;
	int64_t t93 = 0LL;

	t93 = (((x381<x382)%x383)%x384);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x385 = INT8_MAX;
	uint32_t x386 = UINT32_MAX;
	int8_t x387 = INT8_MAX;
	volatile int32_t t94 = 0;

	t94 = (((x385<x386)%x387)%x388);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x389 = INT16_MIN;
	volatile int64_t x390 = INT64_MAX;
	static int32_t x391 = INT32_MIN;
	static int8_t x392 = INT8_MIN;
	int32_t t95 = 8149;

	t95 = (((x389<x390)%x391)%x392);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x393 = 1U;
	volatile int8_t x394 = -1;
	volatile uint16_t x395 = 1U;
	volatile int64_t x396 = -1LL;

	t96 = (((x393<x394)%x395)%x396);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x397 = -1;
	uint8_t x399 = UINT8_MAX;
	int8_t x400 = INT8_MAX;

	t97 = (((x397<x398)%x399)%x400);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x401 = INT16_MIN;
	int32_t x402 = -1;
	int64_t x404 = -1LL;
	volatile int64_t t98 = -4924700LL;

	t98 = (((x401<x402)%x403)%x404);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x406 = 17U;
	int32_t x407 = -105;
	int64_t x408 = INT64_MIN;
	volatile int64_t t99 = -41183506533LL;

	t99 = (((x405<x406)%x407)%x408);

	if (t99 != 1LL) { NG(); } else { ; }
	
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

