#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x7 = UINT64_MAX;
int32_t t1 = 0;
int32_t t2 = 175687629;
static int8_t x13 = -6;
int64_t x21 = INT64_MIN;
int16_t x24 = 5196;
int64_t x27 = INT64_MAX;
uint16_t x29 = 74U;
static int8_t x33 = INT8_MAX;
static int16_t x38 = -1;
int32_t x40 = -1361;
int8_t x45 = INT8_MIN;
static volatile int16_t x46 = INT16_MIN;
int16_t x48 = -9;
int32_t t11 = 105851;
int16_t x50 = INT16_MIN;
int8_t x53 = INT8_MAX;
uint64_t x57 = UINT64_MAX;
int32_t t14 = 5760329;
volatile uint16_t x65 = 114U;
uint64_t x66 = UINT64_MAX;
int32_t x67 = INT32_MAX;
static int16_t x71 = 0;
volatile uint32_t x74 = 23255010U;
uint8_t x78 = 11U;
volatile int64_t x80 = INT64_MAX;
volatile uint64_t x84 = 392089276LLU;
static volatile int8_t x86 = INT8_MIN;
volatile int8_t x90 = INT8_MIN;
volatile uint64_t x97 = 3913985634LLU;
uint16_t x99 = 22U;
volatile int16_t x103 = INT16_MAX;
static int64_t x107 = -533760859LL;
int8_t x108 = INT8_MIN;
int32_t t26 = -3867;
int8_t x114 = INT8_MAX;
int64_t x125 = INT64_MIN;
uint8_t x126 = 31U;
int32_t t34 = -30;
int32_t x145 = INT32_MIN;
volatile int32_t t38 = -1223;
static int32_t t39 = -2364614;
volatile int32_t t40 = -3;
int16_t x169 = 13393;
int8_t x170 = -1;
int16_t x180 = INT16_MIN;
int32_t x184 = -3;
int32_t x188 = INT32_MIN;
volatile int32_t t46 = -282688822;
volatile uint64_t x189 = 2132650798671586LLU;
uint16_t x192 = UINT16_MAX;
static volatile int32_t t47 = 479;
static int32_t x196 = -1;
int16_t x198 = 9959;
static uint64_t x200 = 27392092935825530LLU;
volatile int16_t x202 = INT16_MIN;
uint32_t x207 = UINT32_MAX;
uint16_t x214 = UINT16_MAX;
int16_t x223 = -115;
uint64_t x228 = 4LLU;
static int8_t x230 = INT8_MIN;
volatile int16_t x234 = INT16_MIN;
uint16_t x235 = 4075U;
uint32_t x236 = UINT32_MAX;
int8_t x237 = INT8_MIN;
static int8_t x239 = 3;
int16_t x242 = INT16_MAX;
int32_t x246 = INT32_MIN;
volatile uint32_t x250 = 133U;
uint16_t x252 = 3493U;
int32_t t62 = -94531630;
uint32_t x253 = UINT32_MAX;
uint32_t x258 = UINT32_MAX;
int8_t x262 = -1;
int32_t x265 = -49195;
volatile uint8_t x266 = UINT8_MAX;
uint64_t x269 = 244495LLU;
int8_t x272 = INT8_MIN;
uint64_t x276 = UINT64_MAX;
int16_t x283 = INT16_MIN;
int16_t x285 = -1;
int32_t t72 = 167543360;
int32_t x300 = INT32_MIN;
int32_t t74 = 13910;
static int32_t x306 = -2;
static int8_t x311 = -1;
int8_t x319 = 1;
int32_t x322 = INT32_MAX;
int32_t t80 = 3865;
static volatile int64_t x325 = INT64_MIN;
int8_t x329 = INT8_MAX;
static volatile uint8_t x334 = 15U;
int32_t x341 = -1;
int16_t x353 = INT16_MIN;
volatile int32_t t88 = -21;
uint16_t x361 = 10278U;
int32_t x363 = 40353170;
volatile int32_t t90 = -6;
static uint16_t x365 = 5058U;
int64_t x366 = INT64_MIN;
int16_t x368 = -1;
int8_t x383 = INT8_MIN;
static uint32_t x390 = 755564U;
uint8_t x391 = UINT8_MAX;
int64_t x392 = -1LL;
uint16_t x393 = 13809U;
int32_t t98 = -1496669;
int32_t x398 = INT32_MAX;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	uint16_t x2 = 4126U;
	int64_t x3 = -1LL;
	uint32_t x4 = UINT32_MAX;
	volatile int32_t t0 = -375;

	t0 = ((x1|(x2<=x3))<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x5 = UINT64_MAX;
	static int32_t x6 = INT32_MIN;
	volatile int32_t x8 = INT32_MIN;

	t1 = ((x5|(x6<=x7))<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -3023;
	int16_t x10 = INT16_MIN;
	uint16_t x11 = 43U;
	uint8_t x12 = 0U;

	t2 = ((x9|(x10<=x11))<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = INT16_MIN;
	int8_t x15 = -15;
	static uint64_t x16 = 185911676248856LLU;
	volatile int32_t t3 = -550010;

	t3 = ((x13|(x14<=x15))<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	int16_t x18 = 29;
	static int32_t x19 = INT32_MIN;
	int64_t x20 = -10031660188LL;
	volatile int32_t t4 = 7;

	t4 = ((x17|(x18<=x19))<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x22 = 2426971039841206204LLU;
	uint16_t x23 = UINT16_MAX;
	static volatile int32_t t5 = -7;

	t5 = ((x21|(x22<=x23))<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = INT8_MAX;
	int8_t x26 = INT8_MIN;
	int16_t x28 = -1;
	volatile int32_t t6 = -551;

	t6 = ((x25|(x26<=x27))<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x30 = UINT64_MAX;
	int32_t x31 = INT32_MAX;
	volatile int16_t x32 = INT16_MIN;
	volatile int32_t t7 = 36936;

	t7 = ((x29|(x30<=x31))<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x34 = -1;
	int64_t x35 = 8052651LL;
	static uint32_t x36 = UINT32_MAX;
	int32_t t8 = -992;

	t8 = ((x33|(x34<=x35))<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	uint8_t x39 = 1U;
	int32_t t9 = 8121440;

	t9 = ((x37|(x38<=x39))<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x41 = UINT8_MAX;
	uint16_t x42 = UINT16_MAX;
	int64_t x43 = -1LL;
	int32_t x44 = -1361;
	int32_t t10 = -1;

	t10 = ((x41|(x42<=x43))<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x47 = 367U;

	t11 = ((x45|(x46<=x47))<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x49 = 532112158447LLU;
	uint8_t x51 = UINT8_MAX;
	static uint64_t x52 = UINT64_MAX;
	int32_t t12 = 502607;

	t12 = ((x49|(x50<=x51))<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x54 = 39;
	int8_t x55 = INT8_MIN;
	uint64_t x56 = UINT64_MAX;
	static int32_t t13 = -214;

	t13 = ((x53|(x54<=x55))<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x58 = INT64_MAX;
	static int64_t x59 = INT64_MIN;
	static uint8_t x60 = UINT8_MAX;

	t14 = ((x57|(x58<=x59))<x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	static int8_t x62 = -1;
	int64_t x63 = 1001643LL;
	uint64_t x64 = 2982494137LLU;
	volatile int32_t t15 = 15;

	t15 = ((x61|(x62<=x63))<x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x68 = -475;
	volatile int32_t t16 = -97097501;

	t16 = ((x65|(x66<=x67))<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = INT64_MIN;
	int32_t x70 = INT32_MIN;
	int32_t x72 = -1;
	int32_t t17 = 9;

	t17 = ((x69|(x70<=x71))<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x73 = 13U;
	uint32_t x75 = 32022U;
	volatile int16_t x76 = -1;
	int32_t t18 = 2;

	t18 = ((x73|(x74<=x75))<x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 14904169U;
	int32_t x79 = INT32_MIN;
	volatile int32_t t19 = -49447976;

	t19 = ((x77|(x78<=x79))<x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x81 = INT16_MIN;
	volatile int8_t x82 = INT8_MIN;
	volatile uint16_t x83 = UINT16_MAX;
	volatile int32_t t20 = -15;

	t20 = ((x81|(x82<=x83))<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MAX;
	volatile uint64_t x87 = UINT64_MAX;
	uint16_t x88 = UINT16_MAX;
	volatile int32_t t21 = -1052136628;

	t21 = ((x85|(x86<=x87))<x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MIN;
	volatile int8_t x91 = 1;
	int64_t x92 = INT64_MIN;
	volatile int32_t t22 = 212075;

	t22 = ((x89|(x90<=x91))<x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int64_t x93 = -1LL;
	int8_t x94 = INT8_MIN;
	volatile int64_t x95 = INT64_MIN;
	volatile int64_t x96 = INT64_MIN;
	volatile int32_t t23 = -424565687;

	t23 = ((x93|(x94<=x95))<x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x98 = 1409U;
	int8_t x100 = -1;
	volatile int32_t t24 = -2067968;

	t24 = ((x97|(x98<=x99))<x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 1730933356340LLU;
	int8_t x102 = INT8_MIN;
	int64_t x104 = 7203LL;
	volatile int32_t t25 = -2;

	t25 = ((x101|(x102<=x103))<x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x105 = INT8_MAX;
	int16_t x106 = 49;

	t26 = ((x105|(x106<=x107))<x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MIN;
	int64_t x110 = -1LL;
	uint16_t x111 = UINT16_MAX;
	volatile int16_t x112 = -1;
	int32_t t27 = -29772216;

	t27 = ((x109|(x110<=x111))<x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = -1;
	int64_t x115 = -132098499578184LL;
	int32_t x116 = -1015;
	volatile int32_t t28 = 853;

	t28 = ((x113|(x114<=x115))<x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x117 = INT8_MIN;
	int16_t x118 = -21;
	static uint32_t x119 = 245U;
	uint32_t x120 = 28U;
	static volatile int32_t t29 = -10;

	t29 = ((x117|(x118<=x119))<x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x121 = 30;
	static uint8_t x122 = 14U;
	int64_t x123 = 19LL;
	int32_t x124 = -1421958;
	int32_t t30 = 1776;

	t30 = ((x121|(x122<=x123))<x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x127 = INT64_MIN;
	static uint32_t x128 = UINT32_MAX;
	static volatile int32_t t31 = 975355088;

	t31 = ((x125|(x126<=x127))<x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = UINT8_MAX;
	int16_t x130 = INT16_MAX;
	uint64_t x131 = 1332768865885LLU;
	int16_t x132 = -1;
	volatile int32_t t32 = 109923399;

	t32 = ((x129|(x130<=x131))<x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x133 = 180336U;
	uint16_t x134 = 1313U;
	uint32_t x135 = 0U;
	int64_t x136 = INT64_MIN;
	int32_t t33 = 1539582;

	t33 = ((x133|(x134<=x135))<x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x137 = 30;
	int16_t x138 = INT16_MAX;
	int8_t x139 = 27;
	uint32_t x140 = 5U;

	t34 = ((x137|(x138<=x139))<x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x141 = -53763;
	int16_t x142 = 0;
	uint16_t x143 = 55U;
	uint32_t x144 = 3U;
	volatile int32_t t35 = 46474860;

	t35 = ((x141|(x142<=x143))<x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x146 = INT16_MIN;
	int64_t x147 = INT64_MIN;
	uint16_t x148 = 1319U;
	int32_t t36 = 2057;

	t36 = ((x145|(x146<=x147))<x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = -1;
	int64_t x150 = INT64_MIN;
	static int64_t x151 = -1LL;
	uint8_t x152 = 46U;
	int32_t t37 = 3667;

	t37 = ((x149|(x150<=x151))<x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x153 = -470;
	static uint64_t x154 = 1LLU;
	static int16_t x155 = INT16_MAX;
	int32_t x156 = INT32_MAX;

	t38 = ((x153|(x154<=x155))<x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = -1266;
	static uint32_t x158 = UINT32_MAX;
	int16_t x159 = INT16_MIN;
	int32_t x160 = -1;

	t39 = ((x157|(x158<=x159))<x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = 10781LL;
	static int8_t x162 = 0;
	int8_t x163 = INT8_MIN;
	uint16_t x164 = 11U;

	t40 = ((x161|(x162<=x163))<x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = -1;
	uint16_t x166 = UINT16_MAX;
	uint64_t x167 = UINT64_MAX;
	volatile uint8_t x168 = UINT8_MAX;
	static volatile int32_t t41 = -25598705;

	t41 = ((x165|(x166<=x167))<x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x171 = 101U;
	volatile int8_t x172 = INT8_MIN;
	volatile int32_t t42 = -119655611;

	t42 = ((x169|(x170<=x171))<x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = -13446;
	volatile uint64_t x174 = UINT64_MAX;
	uint16_t x175 = 9U;
	volatile int32_t x176 = INT32_MIN;
	int32_t t43 = -171;

	t43 = ((x173|(x174<=x175))<x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint8_t x177 = 17U;
	int8_t x178 = 57;
	volatile uint64_t x179 = 1061817LLU;
	volatile int32_t t44 = 3;

	t44 = ((x177|(x178<=x179))<x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int64_t x181 = INT64_MAX;
	int64_t x182 = -1LL;
	volatile int32_t x183 = INT32_MIN;
	int32_t t45 = -2279;

	t45 = ((x181|(x182<=x183))<x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MIN;
	uint16_t x186 = 699U;
	int16_t x187 = -2095;

	t46 = ((x185|(x186<=x187))<x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x190 = 2885497105834LL;
	uint64_t x191 = UINT64_MAX;

	t47 = ((x189|(x190<=x191))<x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MIN;
	static int64_t x194 = -14533723201226487LL;
	int64_t x195 = INT64_MIN;
	int32_t t48 = -39789;

	t48 = ((x193|(x194<=x195))<x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = INT8_MIN;
	uint16_t x199 = 251U;
	volatile int32_t t49 = -7;

	t49 = ((x197|(x198<=x199))<x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = -1;
	int64_t x203 = -31LL;
	static uint64_t x204 = UINT64_MAX;
	int32_t t50 = 5;

	t50 = ((x201|(x202<=x203))<x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x205 = 776LL;
	int16_t x206 = INT16_MIN;
	int16_t x208 = INT16_MIN;
	volatile int32_t t51 = 0;

	t51 = ((x205|(x206<=x207))<x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MIN;
	uint64_t x210 = 14067793839LLU;
	volatile int16_t x211 = -1;
	volatile uint32_t x212 = 2036715U;
	int32_t t52 = 49667780;

	t52 = ((x209|(x210<=x211))<x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x213 = -95;
	volatile int64_t x215 = INT64_MIN;
	volatile int64_t x216 = -1LL;
	volatile int32_t t53 = 27;

	t53 = ((x213|(x214<=x215))<x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = 4U;
	int16_t x218 = INT16_MAX;
	uint64_t x219 = 12111LLU;
	uint16_t x220 = 3U;
	volatile int32_t t54 = -26;

	t54 = ((x217|(x218<=x219))<x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x221 = UINT32_MAX;
	volatile int8_t x222 = -1;
	int16_t x224 = INT16_MAX;
	int32_t t55 = -91;

	t55 = ((x221|(x222<=x223))<x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x225 = INT32_MIN;
	int16_t x226 = INT16_MIN;
	static int32_t x227 = INT32_MAX;
	int32_t t56 = 2006;

	t56 = ((x225|(x226<=x227))<x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x229 = 92714205U;
	volatile uint32_t x231 = 1U;
	int8_t x232 = 1;
	static volatile int32_t t57 = -52;

	t57 = ((x229|(x230<=x231))<x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = 623;
	static int32_t t58 = -3483;

	t58 = ((x233|(x234<=x235))<x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x238 = 1014U;
	volatile uint16_t x240 = 29U;
	int32_t t59 = 49612877;

	t59 = ((x237|(x238<=x239))<x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = 16341LLU;
	int16_t x243 = INT16_MIN;
	static volatile int32_t x244 = 16090259;
	int32_t t60 = 102;

	t60 = ((x241|(x242<=x243))<x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x245 = INT32_MAX;
	uint16_t x247 = 235U;
	int8_t x248 = INT8_MAX;
	volatile int32_t t61 = -21863;

	t61 = ((x245|(x246<=x247))<x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = UINT8_MAX;
	int64_t x251 = -1LL;

	t62 = ((x249|(x250<=x251))<x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x254 = INT16_MIN;
	volatile int32_t x255 = INT32_MIN;
	volatile int16_t x256 = -176;
	volatile int32_t t63 = -1503926;

	t63 = ((x253|(x254<=x255))<x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = 3076071333LLU;
	int64_t x259 = -1LL;
	uint16_t x260 = UINT16_MAX;
	int32_t t64 = -27189932;

	t64 = ((x257|(x258<=x259))<x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x261 = INT8_MAX;
	static int64_t x263 = INT64_MIN;
	int16_t x264 = INT16_MAX;
	volatile int32_t t65 = 1802;

	t65 = ((x261|(x262<=x263))<x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x267 = -1;
	int64_t x268 = INT64_MAX;
	static volatile int32_t t66 = -366;

	t66 = ((x265|(x266<=x267))<x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x270 = 3760575769863828897LL;
	int32_t x271 = INT32_MIN;
	int32_t t67 = -7904234;

	t67 = ((x269|(x270<=x271))<x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = 80609;
	volatile uint32_t x274 = 122137419U;
	volatile uint8_t x275 = UINT8_MAX;
	int32_t t68 = 469039891;

	t68 = ((x273|(x274<=x275))<x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x277 = -1;
	int64_t x278 = -132474846LL;
	int32_t x279 = 816139002;
	static volatile uint32_t x280 = 7U;
	volatile int32_t t69 = 0;

	t69 = ((x277|(x278<=x279))<x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x281 = 2U;
	volatile int64_t x282 = INT64_MAX;
	uint16_t x284 = 0U;
	static volatile int32_t t70 = -957669554;

	t70 = ((x281|(x282<=x283))<x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x286 = 22;
	int16_t x287 = 2733;
	uint8_t x288 = 39U;
	static volatile int32_t t71 = -35;

	t71 = ((x285|(x286<=x287))<x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x289 = -1;
	static int16_t x290 = 369;
	int8_t x291 = INT8_MIN;
	uint32_t x292 = UINT32_MAX;

	t72 = ((x289|(x290<=x291))<x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = -3293;
	int16_t x294 = 0;
	static uint64_t x295 = UINT64_MAX;
	int64_t x296 = INT64_MAX;
	volatile int32_t t73 = 793378002;

	t73 = ((x293|(x294<=x295))<x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = 1982;
	uint8_t x298 = 21U;
	int8_t x299 = -1;

	t74 = ((x297|(x298<=x299))<x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = 0U;
	static int32_t x302 = -1;
	uint8_t x303 = 7U;
	volatile int16_t x304 = 1;
	int32_t t75 = 17114;

	t75 = ((x301|(x302<=x303))<x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x305 = 0;
	static int8_t x307 = INT8_MIN;
	static volatile uint16_t x308 = 7U;
	int32_t t76 = 0;

	t76 = ((x305|(x306<=x307))<x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MIN;
	volatile uint16_t x310 = 2U;
	int8_t x312 = INT8_MIN;
	volatile int32_t t77 = -11263;

	t77 = ((x309|(x310<=x311))<x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = 290U;
	uint64_t x314 = 3926125LLU;
	uint16_t x315 = 1U;
	static int16_t x316 = 3;
	int32_t t78 = -821848;

	t78 = ((x313|(x314<=x315))<x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int32_t x317 = 1709;
	static int16_t x318 = 0;
	static uint32_t x320 = UINT32_MAX;
	int32_t t79 = -346531415;

	t79 = ((x317|(x318<=x319))<x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x321 = 500099U;
	int32_t x323 = 47857549;
	static uint8_t x324 = UINT8_MAX;

	t80 = ((x321|(x322<=x323))<x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x326 = 3U;
	volatile int32_t x327 = INT32_MAX;
	static int8_t x328 = -1;
	volatile int32_t t81 = 3;

	t81 = ((x325|(x326<=x327))<x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x330 = INT8_MIN;
	static int16_t x331 = INT16_MIN;
	int64_t x332 = -1LL;
	int32_t t82 = 73729136;

	t82 = ((x329|(x330<=x331))<x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x333 = 1420715LLU;
	static volatile int32_t x335 = INT32_MIN;
	static volatile int64_t x336 = INT64_MIN;
	int32_t t83 = 105362169;

	t83 = ((x333|(x334<=x335))<x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = -1;
	int8_t x338 = INT8_MIN;
	int32_t x339 = INT32_MAX;
	volatile int32_t x340 = -1;
	volatile int32_t t84 = -995084;

	t84 = ((x337|(x338<=x339))<x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x342 = 5U;
	int8_t x343 = 4;
	int64_t x344 = INT64_MIN;
	volatile int32_t t85 = -1;

	t85 = ((x341|(x342<=x343))<x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x345 = 3;
	volatile int64_t x346 = INT64_MIN;
	volatile uint32_t x347 = 5808388U;
	int8_t x348 = INT8_MAX;
	int32_t t86 = -16588911;

	t86 = ((x345|(x346<=x347))<x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = INT16_MIN;
	int8_t x350 = INT8_MIN;
	static int64_t x351 = INT64_MAX;
	volatile int8_t x352 = INT8_MIN;
	volatile int32_t t87 = -2950;

	t87 = ((x349|(x350<=x351))<x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x354 = INT64_MIN;
	static uint16_t x355 = UINT16_MAX;
	int16_t x356 = INT16_MIN;

	t88 = ((x353|(x354<=x355))<x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = UINT16_MAX;
	static int32_t x358 = -1;
	int8_t x359 = INT8_MAX;
	volatile int16_t x360 = INT16_MAX;
	volatile int32_t t89 = 1074816;

	t89 = ((x357|(x358<=x359))<x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x362 = 86025638U;
	int8_t x364 = 0;

	t90 = ((x361|(x362<=x363))<x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x367 = UINT64_MAX;
	int32_t t91 = -3540;

	t91 = ((x365|(x366<=x367))<x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = 63561LLU;
	static uint32_t x370 = 45075082U;
	static uint16_t x371 = UINT16_MAX;
	int32_t x372 = -1;
	volatile int32_t t92 = 1498479;

	t92 = ((x369|(x370<=x371))<x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x373 = 1U;
	static volatile uint16_t x374 = 288U;
	int8_t x375 = INT8_MAX;
	int8_t x376 = 2;
	volatile int32_t t93 = 1655;

	t93 = ((x373|(x374<=x375))<x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x377 = 1216863980701338LL;
	int16_t x378 = INT16_MIN;
	static volatile int64_t x379 = 20211LL;
	uint32_t x380 = 3531U;
	static int32_t t94 = 74679;

	t94 = ((x377|(x378<=x379))<x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = -1;
	static uint8_t x382 = 0U;
	int32_t x384 = 361565355;
	volatile int32_t t95 = 16977;

	t95 = ((x381|(x382<=x383))<x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x385 = 10U;
	static int64_t x386 = INT64_MAX;
	static int32_t x387 = INT32_MAX;
	uint32_t x388 = UINT32_MAX;
	volatile int32_t t96 = 2;

	t96 = ((x385|(x386<=x387))<x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = INT16_MIN;
	int32_t t97 = -38688816;

	t97 = ((x389|(x390<=x391))<x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x394 = 1;
	volatile int8_t x395 = -1;
	int32_t x396 = 39;

	t98 = ((x393|(x394<=x395))<x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MIN;
	int8_t x399 = -1;
	static uint8_t x400 = UINT8_MAX;
	int32_t t99 = 3612017;

	t99 = ((x397|(x398<=x399))<x400);

	if (t99 != 1) { NG(); } else { ; }
	
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

