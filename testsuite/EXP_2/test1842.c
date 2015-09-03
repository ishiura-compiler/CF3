#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x2 = 0;
int64_t x8 = INT64_MIN;
int8_t x11 = INT8_MIN;
static uint8_t x20 = UINT8_MAX;
uint16_t x30 = 2U;
volatile int32_t t7 = 48565;
int32_t x33 = 192;
int8_t x41 = -1;
int32_t x42 = -357554013;
int32_t x45 = INT32_MIN;
int32_t t12 = 19142337;
uint16_t x55 = UINT16_MAX;
uint64_t x59 = UINT64_MAX;
static uint64_t x60 = 496LLU;
static int32_t t14 = 23388;
int32_t x63 = INT32_MAX;
uint8_t x66 = 2U;
uint32_t x73 = 12311U;
uint64_t x79 = 1163711106LLU;
int32_t t23 = -10;
static volatile int64_t x99 = -1LL;
int16_t x100 = 157;
volatile int32_t t24 = 2443823;
int32_t t25 = 3797898;
static int64_t x108 = -1LL;
volatile int32_t t28 = 181;
int8_t x120 = INT8_MIN;
int64_t x126 = INT64_MIN;
int16_t x127 = -1;
static int32_t x129 = 9830;
int8_t x132 = INT8_MAX;
volatile int32_t t32 = 206294418;
int8_t x133 = INT8_MIN;
int32_t x134 = -1;
int8_t x141 = INT8_MIN;
volatile int32_t t36 = -3;
uint32_t x150 = UINT32_MAX;
static volatile uint16_t x154 = 2552U;
uint16_t x156 = UINT16_MAX;
int32_t x158 = 172;
int64_t x161 = 12073867213901LL;
uint16_t x163 = UINT16_MAX;
volatile int64_t x164 = -428775319302927LL;
volatile uint32_t x165 = 37U;
static int64_t x166 = INT64_MAX;
volatile int8_t x167 = -9;
volatile int32_t x170 = INT32_MAX;
volatile int16_t x171 = -70;
int32_t x172 = INT32_MIN;
int16_t x180 = INT16_MIN;
int32_t x186 = 4;
int64_t x188 = 1024896LL;
uint8_t x189 = 1U;
volatile int32_t t47 = -351416;
uint64_t x195 = 403579235983327182LLU;
uint16_t x202 = 1009U;
volatile int16_t x207 = -4778;
volatile int32_t t52 = 119;
volatile int32_t t54 = -11125513;
static int16_t x224 = INT16_MIN;
static int64_t x228 = INT64_MIN;
int16_t x229 = INT16_MIN;
int64_t x241 = INT64_MIN;
volatile int8_t x243 = 0;
volatile int32_t t60 = -180201;
static int64_t x252 = -78162134066284LL;
int16_t x257 = INT16_MIN;
uint32_t x259 = UINT32_MAX;
volatile int32_t t64 = -5;
int64_t x261 = INT64_MAX;
static uint64_t x262 = UINT64_MAX;
static uint8_t x268 = 1U;
uint32_t x272 = UINT32_MAX;
static volatile int32_t t67 = 80167435;
int32_t x275 = INT32_MIN;
static int32_t x278 = INT32_MIN;
uint8_t x280 = UINT8_MAX;
static volatile int32_t t69 = -1;
uint32_t x281 = 0U;
int16_t x291 = INT16_MIN;
int32_t t72 = -340785;
volatile int32_t t73 = 172030;
static int64_t x298 = INT64_MIN;
uint64_t x301 = 1LLU;
int64_t x302 = INT64_MIN;
static int32_t x306 = 58;
static uint16_t x307 = 9U;
volatile int16_t x309 = -1;
int16_t x310 = INT16_MIN;
uint32_t x312 = 1827932741U;
volatile int32_t t77 = -48174634;
volatile int32_t t79 = 7;
static uint16_t x321 = 184U;
int16_t x322 = -7;
volatile int8_t x336 = 11;
volatile int16_t x338 = 77;
int8_t x344 = 7;
volatile uint8_t x348 = 0U;
static volatile int32_t x349 = INT32_MIN;
int32_t x353 = INT32_MAX;
int64_t x356 = INT64_MIN;
int32_t x359 = INT32_MIN;
int64_t x363 = -1LL;
uint8_t x365 = UINT8_MAX;
int32_t x372 = INT32_MIN;
int32_t t92 = -42;
uint32_t x376 = 14U;
int32_t t94 = 403006635;
int32_t x383 = -457207;
uint64_t x385 = UINT64_MAX;
static volatile int32_t t96 = -26896;
int32_t t99 = -13003149;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int32_t x3 = INT32_MIN;
	int32_t x4 = INT32_MAX;
	volatile int32_t t0 = 27440665;

	t0 = ((x1|(x2&x3))<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 44591U;
	uint32_t x6 = UINT32_MAX;
	volatile uint8_t x7 = 7U;
	int32_t t1 = 169007;

	t1 = ((x5|(x6&x7))<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint32_t x9 = UINT32_MAX;
	volatile int8_t x10 = INT8_MIN;
	static volatile int8_t x12 = -1;
	volatile int32_t t2 = -6666246;

	t2 = ((x9|(x10&x11))<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = INT8_MAX;
	uint8_t x14 = UINT8_MAX;
	static int16_t x15 = -3;
	uint8_t x16 = UINT8_MAX;
	int32_t t3 = 4;

	t3 = ((x13|(x14&x15))<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = 1;
	uint8_t x18 = 0U;
	int32_t x19 = 65082300;
	static int32_t t4 = -998149;

	t4 = ((x17|(x18&x19))<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = 8004212338LL;
	int16_t x22 = INT16_MIN;
	int8_t x23 = 35;
	int16_t x24 = -1;
	volatile int32_t t5 = -27;

	t5 = ((x21|(x22&x23))<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	int16_t x26 = -1;
	volatile int16_t x27 = -1;
	int8_t x28 = INT8_MAX;
	static volatile int32_t t6 = 62;

	t6 = ((x25|(x26&x27))<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 270915U;
	volatile uint16_t x31 = 1439U;
	int8_t x32 = 7;

	t7 = ((x29|(x30&x31))<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = INT64_MIN;
	volatile int32_t x35 = -1;
	uint64_t x36 = 1LLU;
	int32_t t8 = -1516918;

	t8 = ((x33|(x34&x35))<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = -7;
	volatile uint8_t x38 = UINT8_MAX;
	static int8_t x39 = INT8_MIN;
	static int8_t x40 = INT8_MIN;
	volatile int32_t t9 = 0;

	t9 = ((x37|(x38&x39))<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x43 = INT32_MIN;
	static int8_t x44 = INT8_MIN;
	int32_t t10 = 297942;

	t10 = ((x41|(x42&x43))<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x46 = -1;
	volatile int8_t x47 = -1;
	int64_t x48 = -1LL;
	volatile int32_t t11 = 901;

	t11 = ((x45|(x46&x47))<x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -765610360;
	static int8_t x50 = INT8_MIN;
	volatile int64_t x51 = -116560976158224LL;
	int8_t x52 = INT8_MIN;

	t12 = ((x49|(x50&x51))<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = UINT32_MAX;
	int32_t x54 = INT32_MIN;
	int32_t x56 = INT32_MIN;
	volatile int32_t t13 = 276208;

	t13 = ((x53|(x54&x55))<x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 19486U;
	uint64_t x58 = 20301LLU;

	t14 = ((x57|(x58&x59))<x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x61 = 70U;
	volatile int16_t x62 = INT16_MAX;
	int64_t x64 = 16126LL;
	int32_t t15 = 288;

	t15 = ((x61|(x62&x63))<x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x65 = 47622435791LL;
	volatile uint64_t x67 = 3301715378LLU;
	int16_t x68 = INT16_MIN;
	volatile int32_t t16 = 693297361;

	t16 = ((x65|(x66&x67))<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	static volatile uint64_t x70 = 1983352221846LLU;
	int8_t x71 = INT8_MIN;
	int8_t x72 = INT8_MAX;
	static volatile int32_t t17 = 1;

	t17 = ((x69|(x70&x71))<x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x74 = INT32_MIN;
	int8_t x75 = INT8_MIN;
	int32_t x76 = -1;
	int32_t t18 = 99371939;

	t18 = ((x73|(x74&x75))<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = UINT16_MAX;
	static uint16_t x78 = 14U;
	uint8_t x80 = 0U;
	int32_t t19 = 1186;

	t19 = ((x77|(x78&x79))<x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x81 = INT16_MAX;
	volatile uint32_t x82 = 137U;
	int64_t x83 = INT64_MIN;
	uint8_t x84 = UINT8_MAX;
	volatile int32_t t20 = 130;

	t20 = ((x81|(x82&x83))<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = UINT32_MAX;
	uint16_t x86 = UINT16_MAX;
	static int64_t x87 = -2576486755LL;
	volatile int8_t x88 = -1;
	int32_t t21 = -32002258;

	t21 = ((x85|(x86&x87))<x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x89 = UINT32_MAX;
	int64_t x90 = 148LL;
	int8_t x91 = -3;
	uint32_t x92 = 7U;
	volatile int32_t t22 = 60452113;

	t22 = ((x89|(x90&x91))<x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x93 = INT8_MAX;
	volatile int16_t x94 = -1;
	int16_t x95 = -2;
	volatile uint8_t x96 = UINT8_MAX;

	t23 = ((x93|(x94&x95))<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MAX;
	uint32_t x98 = UINT32_MAX;

	t24 = ((x97|(x98&x99))<x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	int64_t x102 = INT64_MIN;
	int16_t x103 = INT16_MAX;
	int8_t x104 = 52;

	t25 = ((x101|(x102&x103))<x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	int8_t x106 = INT8_MIN;
	uint64_t x107 = UINT64_MAX;
	int32_t t26 = 67849;

	t26 = ((x105|(x106&x107))<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = -1;
	int64_t x110 = 394817731119110974LL;
	uint32_t x111 = 2U;
	int16_t x112 = -1;
	int32_t t27 = 1064938494;

	t27 = ((x109|(x110&x111))<x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	uint32_t x114 = UINT32_MAX;
	volatile uint32_t x115 = UINT32_MAX;
	static int64_t x116 = INT64_MIN;

	t28 = ((x113|(x114&x115))<x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x117 = 13;
	uint64_t x118 = 502145485989114LLU;
	static int16_t x119 = -1;
	volatile int32_t t29 = -13;

	t29 = ((x117|(x118&x119))<x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x121 = UINT8_MAX;
	uint16_t x122 = 10U;
	int16_t x123 = INT16_MIN;
	uint16_t x124 = UINT16_MAX;
	volatile int32_t t30 = -12;

	t30 = ((x121|(x122&x123))<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = -1;
	volatile int32_t x128 = INT32_MAX;
	int32_t t31 = 48100009;

	t31 = ((x125|(x126&x127))<x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x130 = 17;
	uint16_t x131 = 1U;

	t32 = ((x129|(x130&x131))<x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x135 = -4377;
	uint8_t x136 = 65U;
	volatile int32_t t33 = -7222766;

	t33 = ((x133|(x134&x135))<x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MIN;
	int16_t x138 = INT16_MIN;
	volatile int16_t x139 = INT16_MIN;
	static int16_t x140 = INT16_MIN;
	int32_t t34 = -3;

	t34 = ((x137|(x138&x139))<x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x142 = 1U;
	int32_t x143 = INT32_MIN;
	static int16_t x144 = INT16_MIN;
	static int32_t t35 = -114062;

	t35 = ((x141|(x142&x143))<x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = 2;
	uint32_t x146 = UINT32_MAX;
	static int32_t x147 = -1;
	int32_t x148 = -34087742;

	t36 = ((x145|(x146&x147))<x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x149 = 10461782U;
	volatile uint8_t x151 = 3U;
	static volatile uint64_t x152 = 654LLU;
	volatile int32_t t37 = -100394;

	t37 = ((x149|(x150&x151))<x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MAX;
	static int32_t x155 = INT32_MIN;
	static volatile int32_t t38 = 21;

	t38 = ((x153|(x154&x155))<x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MAX;
	uint32_t x159 = 3U;
	int64_t x160 = -1LL;
	static int32_t t39 = 1;

	t39 = ((x157|(x158&x159))<x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x162 = -1LL;
	volatile int32_t t40 = 98;

	t40 = ((x161|(x162&x163))<x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x168 = UINT64_MAX;
	static int32_t t41 = 10;

	t41 = ((x165|(x166&x167))<x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = 37566917LLU;
	int32_t t42 = 3836665;

	t42 = ((x169|(x170&x171))<x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MIN;
	int16_t x174 = 5;
	static int8_t x175 = INT8_MIN;
	int8_t x176 = 1;
	volatile int32_t t43 = 1;

	t43 = ((x173|(x174&x175))<x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x177 = 325837255763209532LL;
	static int32_t x178 = -1;
	uint8_t x179 = 1U;
	volatile int32_t t44 = -8199155;

	t44 = ((x177|(x178&x179))<x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MIN;
	static uint16_t x182 = 14U;
	static uint8_t x183 = UINT8_MAX;
	int8_t x184 = 33;
	int32_t t45 = -228227695;

	t45 = ((x181|(x182&x183))<x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x185 = 930;
	uint8_t x187 = UINT8_MAX;
	int32_t t46 = 113;

	t46 = ((x185|(x186&x187))<x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x190 = INT32_MAX;
	uint32_t x191 = 72509647U;
	int64_t x192 = 75LL;

	t47 = ((x189|(x190&x191))<x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MAX;
	uint16_t x194 = 10U;
	int8_t x196 = 20;
	int32_t t48 = -247;

	t48 = ((x193|(x194&x195))<x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = INT8_MIN;
	static int16_t x198 = 0;
	uint16_t x199 = 18759U;
	int32_t x200 = -1;
	int32_t t49 = 134082623;

	t49 = ((x197|(x198&x199))<x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MIN;
	int32_t x203 = -20666;
	int16_t x204 = -1;
	int32_t t50 = 599;

	t50 = ((x201|(x202&x203))<x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MIN;
	int64_t x206 = 23LL;
	volatile int32_t x208 = INT32_MIN;
	int32_t t51 = -3;

	t51 = ((x205|(x206&x207))<x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MIN;
	int32_t x210 = INT32_MAX;
	uint16_t x211 = UINT16_MAX;
	static uint16_t x212 = UINT16_MAX;

	t52 = ((x209|(x210&x211))<x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x213 = UINT64_MAX;
	int64_t x214 = 14266354LL;
	static int8_t x215 = INT8_MAX;
	int64_t x216 = INT64_MIN;
	volatile int32_t t53 = 14;

	t53 = ((x213|(x214&x215))<x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = UINT16_MAX;
	uint32_t x218 = 2559197U;
	uint32_t x219 = 251U;
	uint32_t x220 = 1200141U;

	t54 = ((x217|(x218&x219))<x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MAX;
	int8_t x222 = -15;
	volatile int16_t x223 = 63;
	static int32_t t55 = -372;

	t55 = ((x221|(x222&x223))<x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x225 = 0U;
	int64_t x226 = INT64_MIN;
	int8_t x227 = INT8_MAX;
	static volatile int32_t t56 = -4;

	t56 = ((x225|(x226&x227))<x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x230 = UINT16_MAX;
	int32_t x231 = INT32_MIN;
	static int16_t x232 = INT16_MAX;
	static volatile int32_t t57 = -1;

	t57 = ((x229|(x230&x231))<x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = 32U;
	int8_t x234 = INT8_MIN;
	int8_t x235 = -1;
	static uint8_t x236 = 5U;
	volatile int32_t t58 = -393159;

	t58 = ((x233|(x234&x235))<x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = 0U;
	int16_t x238 = INT16_MIN;
	static int16_t x239 = INT16_MAX;
	static int16_t x240 = -1;
	volatile int32_t t59 = -424;

	t59 = ((x237|(x238&x239))<x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x242 = 19;
	uint32_t x244 = 3936U;

	t60 = ((x241|(x242&x243))<x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x245 = INT8_MAX;
	volatile int8_t x246 = INT8_MIN;
	uint64_t x247 = 39820942LLU;
	int16_t x248 = INT16_MIN;
	volatile int32_t t61 = 20109050;

	t61 = ((x245|(x246&x247))<x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x249 = INT32_MIN;
	static int64_t x250 = INT64_MIN;
	static int64_t x251 = INT64_MAX;
	int32_t t62 = 15277919;

	t62 = ((x249|(x250&x251))<x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = -2;
	uint64_t x254 = 974299967413308324LLU;
	uint8_t x255 = 1U;
	uint32_t x256 = UINT32_MAX;
	int32_t t63 = 92;

	t63 = ((x253|(x254&x255))<x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x258 = -56432;
	volatile int32_t x260 = INT32_MIN;

	t64 = ((x257|(x258&x259))<x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x263 = 150485288675064LLU;
	volatile uint64_t x264 = UINT64_MAX;
	volatile int32_t t65 = 26;

	t65 = ((x261|(x262&x263))<x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = INT8_MIN;
	volatile int16_t x266 = -1;
	int64_t x267 = INT64_MIN;
	int32_t t66 = -494903;

	t66 = ((x265|(x266&x267))<x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = UINT64_MAX;
	uint8_t x270 = 1U;
	int64_t x271 = INT64_MIN;

	t67 = ((x269|(x270&x271))<x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x273 = -1LL;
	int8_t x274 = INT8_MIN;
	static int8_t x276 = INT8_MIN;
	int32_t t68 = 93077;

	t68 = ((x273|(x274&x275))<x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x277 = 109U;
	volatile uint16_t x279 = UINT16_MAX;

	t69 = ((x277|(x278&x279))<x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint32_t x282 = UINT32_MAX;
	int64_t x283 = INT64_MIN;
	int8_t x284 = INT8_MIN;
	volatile int32_t t70 = -37729486;

	t70 = ((x281|(x282&x283))<x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = 54217167;
	static int16_t x286 = INT16_MIN;
	int8_t x287 = 5;
	int64_t x288 = -1LL;
	static int32_t t71 = -19;

	t71 = ((x285|(x286&x287))<x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = 8;
	int32_t x290 = 504;
	int16_t x292 = INT16_MAX;

	t72 = ((x289|(x290&x291))<x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = -1;
	uint64_t x294 = 1188532501481220LLU;
	volatile int64_t x295 = INT64_MIN;
	uint8_t x296 = UINT8_MAX;

	t73 = ((x293|(x294&x295))<x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = -1;
	int64_t x299 = INT64_MIN;
	volatile uint32_t x300 = 460328U;
	int32_t t74 = 19753850;

	t74 = ((x297|(x298&x299))<x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x303 = 261640770;
	int8_t x304 = INT8_MIN;
	volatile int32_t t75 = 195432501;

	t75 = ((x301|(x302&x303))<x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MIN;
	int8_t x308 = INT8_MIN;
	int32_t t76 = 0;

	t76 = ((x305|(x306&x307))<x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x311 = 1;

	t77 = ((x309|(x310&x311))<x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = INT16_MAX;
	int64_t x314 = INT64_MIN;
	int16_t x315 = INT16_MIN;
	int16_t x316 = -1;
	static int32_t t78 = 628;

	t78 = ((x313|(x314&x315))<x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x317 = 908;
	int32_t x318 = INT32_MIN;
	int16_t x319 = -1;
	static volatile int64_t x320 = INT64_MIN;

	t79 = ((x317|(x318&x319))<x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x323 = INT16_MAX;
	volatile int32_t x324 = INT32_MAX;
	volatile int32_t t80 = -205;

	t80 = ((x321|(x322&x323))<x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = 934LLU;
	int32_t x326 = -1;
	volatile int8_t x327 = -5;
	uint64_t x328 = UINT64_MAX;
	volatile int32_t t81 = 22;

	t81 = ((x325|(x326&x327))<x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x329 = INT64_MIN;
	int64_t x330 = INT64_MAX;
	static int16_t x331 = INT16_MIN;
	volatile int8_t x332 = INT8_MAX;
	volatile int32_t t82 = -684;

	t82 = ((x329|(x330&x331))<x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x333 = INT16_MIN;
	static int8_t x334 = 0;
	static uint32_t x335 = 1207208587U;
	volatile int32_t t83 = -25;

	t83 = ((x333|(x334&x335))<x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x337 = INT16_MAX;
	static int16_t x339 = INT16_MIN;
	int8_t x340 = -44;
	static volatile int32_t t84 = -639;

	t84 = ((x337|(x338&x339))<x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MIN;
	int32_t x342 = -777;
	int32_t x343 = -1;
	int32_t t85 = -1196591;

	t85 = ((x341|(x342&x343))<x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = UINT64_MAX;
	int32_t x346 = INT32_MIN;
	uint8_t x347 = UINT8_MAX;
	static int32_t t86 = -184148469;

	t86 = ((x345|(x346&x347))<x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x350 = -1;
	int64_t x351 = -6LL;
	static volatile uint64_t x352 = 14526LLU;
	volatile int32_t t87 = -1;

	t87 = ((x349|(x350&x351))<x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x354 = INT32_MAX;
	int64_t x355 = 2LL;
	int32_t t88 = 333777;

	t88 = ((x353|(x354&x355))<x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MIN;
	int32_t x358 = -328;
	int16_t x360 = INT16_MIN;
	int32_t t89 = 0;

	t89 = ((x357|(x358&x359))<x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 81U;
	uint64_t x362 = 71434604039159078LLU;
	int8_t x364 = INT8_MIN;
	static volatile int32_t t90 = 212354;

	t90 = ((x361|(x362&x363))<x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x366 = -1;
	volatile uint8_t x367 = 1U;
	static int8_t x368 = -3;
	static volatile int32_t t91 = 51;

	t91 = ((x365|(x366&x367))<x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x369 = UINT32_MAX;
	int64_t x370 = INT64_MIN;
	int64_t x371 = INT64_MIN;

	t92 = ((x369|(x370&x371))<x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x373 = -29;
	static uint8_t x374 = UINT8_MAX;
	volatile uint64_t x375 = UINT64_MAX;
	volatile int32_t t93 = -533139;

	t93 = ((x373|(x374&x375))<x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x377 = 6U;
	int32_t x378 = -113981404;
	int8_t x379 = -1;
	uint8_t x380 = 10U;

	t94 = ((x377|(x378&x379))<x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x381 = 54U;
	static volatile uint64_t x382 = 1LLU;
	int16_t x384 = 9;
	int32_t t95 = 963944;

	t95 = ((x381|(x382&x383))<x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x386 = 362595920;
	int64_t x387 = INT64_MAX;
	int16_t x388 = INT16_MAX;

	t96 = ((x385|(x386&x387))<x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = INT16_MIN;
	uint16_t x390 = 1U;
	uint64_t x391 = 22914LLU;
	int16_t x392 = -1;
	volatile int32_t t97 = -3276;

	t97 = ((x389|(x390&x391))<x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = -1;
	int64_t x394 = INT64_MIN;
	volatile uint16_t x395 = 464U;
	volatile int16_t x396 = 7813;
	int32_t t98 = 61072;

	t98 = ((x393|(x394&x395))<x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = 12;
	int16_t x398 = -1;
	uint64_t x399 = UINT64_MAX;
	static int16_t x400 = -1;

	t99 = ((x397|(x398&x399))<x400);

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

