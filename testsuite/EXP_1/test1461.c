#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = INT32_MAX;
int32_t x3 = -14073501;
int32_t x27 = -1;
static volatile int32_t x30 = INT32_MAX;
uint32_t x34 = UINT32_MAX;
volatile int32_t t8 = 23;
volatile int8_t x41 = INT8_MIN;
volatile uint32_t x52 = UINT32_MAX;
static volatile uint32_t t13 = 610U;
static volatile int64_t x58 = -65891844LL;
volatile int32_t t16 = -11060;
int16_t x69 = INT16_MIN;
int64_t x70 = INT64_MAX;
uint64_t t17 = 2619154160895LLU;
uint32_t x77 = UINT32_MAX;
int8_t x78 = -15;
int32_t t19 = 117554;
uint32_t x82 = 19U;
static int32_t t20 = -157865;
int64_t x86 = INT64_MIN;
int64_t x89 = INT64_MIN;
volatile int32_t x91 = INT32_MIN;
volatile uint32_t x93 = 149591U;
int64_t x94 = -1LL;
volatile int64_t x97 = -1LL;
int16_t x100 = 10;
int32_t x102 = INT32_MAX;
uint8_t x105 = UINT8_MAX;
uint32_t x106 = 10525U;
static int8_t x108 = INT8_MAX;
int16_t x110 = INT16_MAX;
int32_t x111 = 13673319;
static int64_t x112 = 6020425085938807LL;
uint64_t x117 = 123014256850LLU;
static int16_t x125 = -1;
int64_t x143 = 20275441LL;
uint8_t x144 = 6U;
volatile int8_t x146 = 0;
volatile int16_t x152 = -3241;
volatile int32_t x153 = -1;
int8_t x156 = INT8_MIN;
int32_t x158 = INT32_MIN;
volatile uint64_t x163 = 0LLU;
volatile uint32_t t38 = 1972U;
int32_t t39 = -58174;
int32_t x172 = INT32_MAX;
int32_t t41 = 663078;
int16_t x178 = INT16_MIN;
static volatile uint32_t x180 = 81U;
volatile uint32_t t42 = 946U;
int32_t x182 = INT32_MAX;
int32_t t47 = 41;
int32_t t48 = 681;
static uint32_t x208 = 72581572U;
volatile uint32_t t49 = 443759U;
int16_t x211 = -1;
int16_t x216 = -375;
static volatile int8_t x219 = INT8_MAX;
volatile int32_t x220 = -1;
int32_t x223 = INT32_MIN;
volatile int64_t t54 = -2280908LL;
static int16_t x236 = INT16_MIN;
uint16_t x239 = UINT16_MAX;
uint64_t x240 = UINT64_MAX;
static int16_t x241 = INT16_MIN;
int16_t x245 = -1;
int16_t x248 = INT16_MAX;
int16_t x252 = INT16_MIN;
int64_t x253 = INT64_MIN;
static volatile int32_t t61 = 351;
static volatile int64_t x258 = INT64_MIN;
uint8_t x273 = 2U;
volatile int64_t x280 = INT64_MIN;
volatile int32_t t68 = -90329227;
uint16_t x285 = 15536U;
static int64_t x291 = INT64_MIN;
static uint16_t x295 = UINT16_MAX;
int32_t x303 = INT32_MIN;
uint32_t x305 = 14U;
uint64_t x306 = 64306504560130LLU;
volatile int16_t x313 = -1;
uint16_t x322 = UINT16_MAX;
int32_t t78 = -106;
int8_t x336 = -1;
int32_t t81 = 283;
int64_t x349 = 92557766423946255LL;
int32_t x351 = -16052;
volatile uint16_t x352 = UINT16_MAX;
int32_t x353 = -18819;
int8_t x359 = INT8_MAX;
int32_t x380 = -1;
uint32_t x384 = 888955U;
volatile uint32_t t92 = 23904561U;
int16_t x385 = 6543;
volatile uint32_t t93 = 1363162U;
int8_t x391 = INT8_MIN;
static int64_t x393 = INT64_MIN;
int32_t x394 = INT32_MIN;
static int16_t x403 = 107;
int8_t x408 = INT8_MIN;
uint32_t x411 = 139703U;
int64_t x412 = 2038590LL;
int64_t t99 = 1LL;


void f0(void) {
	int8_t x1 = -1;
	volatile uint64_t x4 = UINT64_MAX;
	uint64_t t0 = 303712459LLU;

	t0 = (((x1<x2)<x3)%x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	static volatile int8_t x6 = INT8_MIN;
	static int8_t x7 = -1;
	int32_t x8 = INT32_MIN;
	int32_t t1 = 113224145;

	t1 = (((x5<x6)<x7)%x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x9 = UINT32_MAX;
	static uint8_t x10 = 70U;
	volatile int16_t x11 = INT16_MIN;
	static uint32_t x12 = 4U;
	volatile uint32_t t2 = 600487U;

	t2 = (((x9<x10)<x11)%x12);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	int32_t x14 = INT32_MIN;
	uint32_t x15 = UINT32_MAX;
	int16_t x16 = INT16_MIN;
	int32_t t3 = -260858624;

	t3 = (((x13<x14)<x15)%x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x17 = 38U;
	static volatile uint32_t x18 = 0U;
	int16_t x19 = 0;
	uint64_t x20 = 2468743185376150LLU;
	static uint64_t t4 = 2338369392820835LLU;

	t4 = (((x17<x18)<x19)%x20);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MIN;
	uint32_t x22 = 199039U;
	uint64_t x23 = 27743628083086LLU;
	uint32_t x24 = 3U;
	uint32_t t5 = 3U;

	t5 = (((x21<x22)<x23)%x24);

	if (t5 != 1U) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 441U;
	uint8_t x26 = UINT8_MAX;
	volatile uint16_t x28 = 6U;
	int32_t t6 = 0;

	t6 = (((x25<x26)<x27)%x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 181543719163587063LLU;
	int32_t x31 = -1;
	uint16_t x32 = UINT16_MAX;
	volatile int32_t t7 = 5;

	t7 = (((x29<x30)<x31)%x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x33 = UINT16_MAX;
	volatile int16_t x35 = -1;
	int32_t x36 = -1;

	t8 = (((x33<x34)<x35)%x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1LL;
	uint8_t x38 = UINT8_MAX;
	uint8_t x39 = UINT8_MAX;
	static uint64_t x40 = 13406259468LLU;
	volatile uint64_t t9 = 873623570312229LLU;

	t9 = (((x37<x38)<x39)%x40);

	if (t9 != 1LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x42 = 11169U;
	int16_t x43 = INT16_MIN;
	int16_t x44 = 122;
	int32_t t10 = 1;

	t10 = (((x41<x42)<x43)%x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 246891382LLU;
	int64_t x46 = INT64_MIN;
	volatile uint32_t x47 = UINT32_MAX;
	uint8_t x48 = UINT8_MAX;
	volatile int32_t t11 = -35;

	t11 = (((x45<x46)<x47)%x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 1U;
	int8_t x50 = INT8_MIN;
	int64_t x51 = -1LL;
	volatile uint32_t t12 = 548368685U;

	t12 = (((x49<x50)<x51)%x52);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	static uint8_t x54 = 19U;
	int64_t x55 = -97858159297784618LL;
	uint32_t x56 = 729421U;

	t13 = (((x53<x54)<x55)%x56);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	static int64_t x59 = INT64_MIN;
	static uint8_t x60 = 7U;
	int32_t t14 = 466;

	t14 = (((x57<x58)<x59)%x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 9862U;
	volatile int16_t x62 = INT16_MAX;
	uint16_t x63 = UINT16_MAX;
	volatile uint32_t x64 = 16469067U;
	volatile uint32_t t15 = 15U;

	t15 = (((x61<x62)<x63)%x64);

	if (t15 != 1U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MAX;
	uint16_t x66 = UINT16_MAX;
	int64_t x67 = INT64_MIN;
	int32_t x68 = INT32_MIN;

	t16 = (((x65<x66)<x67)%x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x71 = 73U;
	uint64_t x72 = 481296320768479LLU;

	t17 = (((x69<x70)<x71)%x72);

	if (t17 != 1LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x73 = INT32_MIN;
	int32_t x74 = -1;
	uint32_t x75 = 52378368U;
	volatile int8_t x76 = INT8_MAX;
	int32_t t18 = 2;

	t18 = (((x73<x74)<x75)%x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x79 = INT8_MIN;
	int8_t x80 = INT8_MIN;

	t19 = (((x77<x78)<x79)%x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	static int16_t x83 = 766;
	static int8_t x84 = INT8_MAX;

	t20 = (((x81<x82)<x83)%x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 122LLU;
	uint8_t x87 = UINT8_MAX;
	static int16_t x88 = INT16_MIN;
	static volatile int32_t t21 = 910;

	t21 = (((x85<x86)<x87)%x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x90 = 56;
	int8_t x92 = -1;
	int32_t t22 = -112;

	t22 = (((x89<x90)<x91)%x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x95 = INT64_MIN;
	int64_t x96 = -3876416LL;
	volatile int64_t t23 = 243069LL;

	t23 = (((x93<x94)<x95)%x96);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x98 = 12U;
	int32_t x99 = 66300;
	int32_t t24 = 1869;

	t24 = (((x97<x98)<x99)%x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = 0LL;
	int64_t x103 = 2001LL;
	uint64_t x104 = 1898415935376LLU;
	volatile uint64_t t25 = 1104146LLU;

	t25 = (((x101<x102)<x103)%x104);

	if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x107 = 43;
	volatile int32_t t26 = -51;

	t26 = (((x105<x106)<x107)%x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = 4;
	volatile int64_t t27 = -119421LL;

	t27 = (((x109<x110)<x111)%x112);

	if (t27 != 1LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x113 = 10;
	uint64_t x114 = 1810440480196435LLU;
	int32_t x115 = INT32_MIN;
	volatile int16_t x116 = 1;
	int32_t t28 = 22484743;

	t28 = (((x113<x114)<x115)%x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x118 = INT32_MIN;
	uint16_t x119 = 1376U;
	uint64_t x120 = 3956730420184LLU;
	volatile uint64_t t29 = 13LLU;

	t29 = (((x117<x118)<x119)%x120);

	if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x121 = INT8_MAX;
	static uint64_t x122 = 205489069LLU;
	uint16_t x123 = UINT16_MAX;
	int64_t x124 = INT64_MAX;
	volatile int64_t t30 = -736107LL;

	t30 = (((x121<x122)<x123)%x124);

	if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int64_t x126 = -2060745160LL;
	static int16_t x127 = INT16_MIN;
	static int8_t x128 = INT8_MIN;
	int32_t t31 = -111;

	t31 = (((x125<x126)<x127)%x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x137 = INT64_MIN;
	int8_t x138 = -1;
	uint8_t x139 = 4U;
	uint32_t x140 = 1906887444U;
	static volatile uint32_t t32 = 1526U;

	t32 = (((x137<x138)<x139)%x140);

	if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x141 = INT16_MIN;
	uint8_t x142 = UINT8_MAX;
	int32_t t33 = 10;

	t33 = (((x141<x142)<x143)%x144);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x145 = 3515;
	volatile int8_t x147 = -1;
	int32_t x148 = -1;
	int32_t t34 = 117;

	t34 = (((x145<x146)<x147)%x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x149 = INT16_MIN;
	int8_t x150 = INT8_MIN;
	int16_t x151 = -2365;
	static int32_t t35 = 799300773;

	t35 = (((x149<x150)<x151)%x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x154 = 38;
	volatile int64_t x155 = -53LL;
	static int32_t t36 = 922;

	t36 = (((x153<x154)<x155)%x156);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x157 = INT8_MAX;
	uint64_t x159 = UINT64_MAX;
	uint16_t x160 = 874U;
	int32_t t37 = 11597237;

	t37 = (((x157<x158)<x159)%x160);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int64_t x161 = INT64_MIN;
	int16_t x162 = -2593;
	uint32_t x164 = UINT32_MAX;

	t38 = (((x161<x162)<x163)%x164);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x165 = INT32_MAX;
	uint16_t x166 = 1U;
	uint8_t x167 = 7U;
	int8_t x168 = INT8_MIN;

	t39 = (((x165<x166)<x167)%x168);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x169 = INT16_MIN;
	static uint16_t x170 = 10U;
	static int32_t x171 = -209247697;
	volatile int32_t t40 = 11056;

	t40 = (((x169<x170)<x171)%x172);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x173 = 1;
	int32_t x174 = INT32_MIN;
	int16_t x175 = -1;
	int32_t x176 = 52276393;

	t41 = (((x173<x174)<x175)%x176);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x177 = INT64_MIN;
	uint16_t x179 = 26U;

	t42 = (((x177<x178)<x179)%x180);

	if (t42 != 1U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x181 = 11900519U;
	uint8_t x183 = UINT8_MAX;
	static int8_t x184 = INT8_MIN;
	int32_t t43 = 65;

	t43 = (((x181<x182)<x183)%x184);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x185 = INT16_MIN;
	static uint16_t x186 = 24957U;
	int8_t x187 = INT8_MIN;
	int64_t x188 = -18335LL;
	int64_t t44 = -39650931LL;

	t44 = (((x185<x186)<x187)%x188);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x189 = 45U;
	static volatile int32_t x190 = -1;
	static int16_t x191 = INT16_MAX;
	volatile uint32_t x192 = 427U;
	uint32_t t45 = 4920U;

	t45 = (((x189<x190)<x191)%x192);

	if (t45 != 1U) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x193 = 22390U;
	int8_t x194 = INT8_MIN;
	static int64_t x195 = 38948521974915LL;
	static int64_t x196 = -1LL;
	static int64_t t46 = 1LL;

	t46 = (((x193<x194)<x195)%x196);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x197 = 14211030650LL;
	volatile int16_t x198 = -1;
	volatile int32_t x199 = INT32_MAX;
	volatile int32_t x200 = 6;

	t47 = (((x197<x198)<x199)%x200);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x201 = -1;
	volatile uint8_t x202 = 0U;
	int8_t x203 = INT8_MIN;
	uint8_t x204 = UINT8_MAX;

	t48 = (((x201<x202)<x203)%x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x205 = INT16_MAX;
	int32_t x206 = -2;
	int32_t x207 = 62574;

	t49 = (((x205<x206)<x207)%x208);

	if (t49 != 1U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x209 = -1;
	int8_t x210 = -1;
	int16_t x212 = -39;
	volatile int32_t t50 = 103;

	t50 = (((x209<x210)<x211)%x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x213 = INT8_MIN;
	static int16_t x214 = -884;
	static volatile uint64_t x215 = 37452915660477564LLU;
	static int32_t t51 = -1572247;

	t51 = (((x213<x214)<x215)%x216);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x217 = 0;
	int64_t x218 = -159995158LL;
	int32_t t52 = -5198251;

	t52 = (((x217<x218)<x219)%x220);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x221 = 24U;
	static uint8_t x222 = 1U;
	int64_t x224 = -264053079557LL;
	static volatile int64_t t53 = 211463675LL;

	t53 = (((x221<x222)<x223)%x224);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x225 = INT8_MIN;
	int16_t x226 = 725;
	static int64_t x227 = 8LL;
	static int64_t x228 = 4043510955LL;

	t54 = (((x225<x226)<x227)%x228);

	if (t54 != 1LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x229 = 0U;
	int64_t x230 = INT64_MIN;
	uint16_t x231 = 432U;
	static volatile uint8_t x232 = UINT8_MAX;
	volatile int32_t t55 = 721605;

	t55 = (((x229<x230)<x231)%x232);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x233 = -1;
	int8_t x234 = -50;
	int32_t x235 = 56841;
	volatile int32_t t56 = 98;

	t56 = (((x233<x234)<x235)%x236);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x237 = INT64_MAX;
	uint64_t x238 = 10LLU;
	uint64_t t57 = 254778896292LLU;

	t57 = (((x237<x238)<x239)%x240);

	if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x242 = 25;
	uint8_t x243 = UINT8_MAX;
	static volatile int16_t x244 = -14;
	volatile int32_t t58 = 0;

	t58 = (((x241<x242)<x243)%x244);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x246 = INT16_MIN;
	volatile int32_t x247 = 0;
	int32_t t59 = -65544878;

	t59 = (((x245<x246)<x247)%x248);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x249 = 27U;
	int64_t x250 = -1842564272663590354LL;
	int64_t x251 = -1LL;
	volatile int32_t t60 = 219;

	t60 = (((x249<x250)<x251)%x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x254 = -1;
	int16_t x255 = INT16_MIN;
	int32_t x256 = 268;

	t61 = (((x253<x254)<x255)%x256);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x257 = 81104U;
	uint32_t x259 = 499557U;
	volatile uint64_t x260 = UINT64_MAX;
	volatile uint64_t t62 = 885092870381LLU;

	t62 = (((x257<x258)<x259)%x260);

	if (t62 != 1LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x261 = UINT8_MAX;
	uint16_t x262 = 539U;
	static int8_t x263 = -1;
	int32_t x264 = INT32_MAX;
	volatile int32_t t63 = -148;

	t63 = (((x261<x262)<x263)%x264);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x265 = -1;
	uint16_t x266 = 8U;
	volatile int16_t x267 = INT16_MAX;
	uint32_t x268 = 12U;
	static uint32_t t64 = 388981U;

	t64 = (((x265<x266)<x267)%x268);

	if (t64 != 1U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x269 = 1;
	int64_t x270 = 309LL;
	static int64_t x271 = -46002666118LL;
	volatile uint8_t x272 = 5U;
	volatile int32_t t65 = -3068;

	t65 = (((x269<x270)<x271)%x272);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x274 = 3772033757423795306LLU;
	int32_t x275 = INT32_MIN;
	int64_t x276 = INT64_MIN;
	int64_t t66 = -1304333486905LL;

	t66 = (((x273<x274)<x275)%x276);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x277 = UINT8_MAX;
	static volatile int8_t x278 = -2;
	uint64_t x279 = 437381508009849LLU;
	static volatile int64_t t67 = -32587284LL;

	t67 = (((x277<x278)<x279)%x280);

	if (t67 != 1LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x281 = 64174655479LLU;
	volatile int64_t x282 = INT64_MIN;
	int8_t x283 = -1;
	int16_t x284 = 15;

	t68 = (((x281<x282)<x283)%x284);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x286 = INT8_MIN;
	int64_t x287 = 55526732225606621LL;
	uint8_t x288 = 3U;
	volatile int32_t t69 = -233355;

	t69 = (((x285<x286)<x287)%x288);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x289 = -1;
	uint64_t x290 = 212805LLU;
	int32_t x292 = -1;
	static int32_t t70 = -153664827;

	t70 = (((x289<x290)<x291)%x292);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x293 = 1;
	uint64_t x294 = 297742641749998170LLU;
	volatile uint64_t x296 = 12290766890174LLU;
	uint64_t t71 = 25503235429LLU;

	t71 = (((x293<x294)<x295)%x296);

	if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x301 = -1;
	volatile int16_t x302 = INT16_MIN;
	volatile uint64_t x304 = UINT64_MAX;
	volatile uint64_t t72 = 2024306171923LLU;

	t72 = (((x301<x302)<x303)%x304);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int32_t x307 = INT32_MIN;
	int64_t x308 = -605228388408121LL;
	volatile int64_t t73 = 34407985285611LL;

	t73 = (((x305<x306)<x307)%x308);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x309 = -2091506;
	volatile int32_t x310 = INT32_MIN;
	uint64_t x311 = 136732LLU;
	static int64_t x312 = -1LL;
	int64_t t74 = 1662LL;

	t74 = (((x309<x310)<x311)%x312);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x314 = INT64_MAX;
	volatile uint64_t x315 = 5915LLU;
	int16_t x316 = INT16_MAX;
	int32_t t75 = 20136;

	t75 = (((x313<x314)<x315)%x316);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x317 = -36;
	static uint16_t x318 = 385U;
	static uint8_t x319 = 3U;
	static volatile int16_t x320 = INT16_MIN;
	volatile int32_t t76 = 8;

	t76 = (((x317<x318)<x319)%x320);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x321 = INT64_MIN;
	volatile uint16_t x323 = 185U;
	int64_t x324 = -67LL;
	int64_t t77 = -402633LL;

	t77 = (((x321<x322)<x323)%x324);

	if (t77 != 1LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x325 = INT16_MIN;
	uint8_t x326 = UINT8_MAX;
	uint16_t x327 = UINT16_MAX;
	volatile int32_t x328 = 1862306;

	t78 = (((x325<x326)<x327)%x328);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x329 = 54U;
	int64_t x330 = 133LL;
	int32_t x331 = INT32_MAX;
	uint8_t x332 = 1U;
	int32_t t79 = 1786729;

	t79 = (((x329<x330)<x331)%x332);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x333 = 8U;
	int16_t x334 = INT16_MIN;
	static uint8_t x335 = 1U;
	static int32_t t80 = 4986028;

	t80 = (((x333<x334)<x335)%x336);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x337 = INT64_MIN;
	int8_t x338 = 7;
	int32_t x339 = INT32_MIN;
	int8_t x340 = INT8_MAX;

	t81 = (((x337<x338)<x339)%x340);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x341 = 0U;
	uint16_t x342 = 413U;
	uint64_t x343 = 107288569LLU;
	int8_t x344 = INT8_MIN;
	int32_t t82 = 549207;

	t82 = (((x341<x342)<x343)%x344);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x345 = INT8_MIN;
	static uint32_t x346 = 418552U;
	static volatile int32_t x347 = INT32_MAX;
	volatile int64_t x348 = 62LL;
	int64_t t83 = -94945637LL;

	t83 = (((x345<x346)<x347)%x348);

	if (t83 != 1LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x350 = 454210520820LLU;
	int32_t t84 = -131998112;

	t84 = (((x349<x350)<x351)%x352);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x354 = UINT64_MAX;
	int32_t x355 = -3396645;
	volatile int32_t x356 = -1;
	volatile int32_t t85 = -8;

	t85 = (((x353<x354)<x355)%x356);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x357 = 0;
	uint64_t x358 = UINT64_MAX;
	static volatile int32_t x360 = INT32_MIN;
	int32_t t86 = -627595580;

	t86 = (((x357<x358)<x359)%x360);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x361 = UINT16_MAX;
	uint64_t x362 = UINT64_MAX;
	volatile uint64_t x363 = 31301143LLU;
	uint32_t x364 = 56368U;
	volatile uint32_t t87 = 571886U;

	t87 = (((x361<x362)<x363)%x364);

	if (t87 != 1U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x365 = 0U;
	static int8_t x366 = INT8_MAX;
	int64_t x367 = -1LL;
	int32_t x368 = -1;
	int32_t t88 = 106;

	t88 = (((x365<x366)<x367)%x368);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x369 = -1;
	volatile int8_t x370 = 0;
	static uint64_t x371 = UINT64_MAX;
	int64_t x372 = -1LL;
	int64_t t89 = 505946202117LL;

	t89 = (((x369<x370)<x371)%x372);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint32_t x373 = 3315006U;
	volatile uint8_t x374 = UINT8_MAX;
	int32_t x375 = -673;
	int8_t x376 = INT8_MAX;
	int32_t t90 = -1;

	t90 = (((x373<x374)<x375)%x376);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x377 = INT64_MIN;
	int32_t x378 = 268626093;
	uint32_t x379 = UINT32_MAX;
	volatile int32_t t91 = 14;

	t91 = (((x377<x378)<x379)%x380);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x381 = 0;
	int16_t x382 = INT16_MAX;
	volatile int64_t x383 = INT64_MAX;

	t92 = (((x381<x382)<x383)%x384);

	if (t92 != 1U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x386 = INT64_MIN;
	static volatile int8_t x387 = INT8_MIN;
	volatile uint32_t x388 = 7849U;

	t93 = (((x385<x386)<x387)%x388);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x389 = -24;
	int64_t x390 = -1LL;
	volatile int64_t x392 = INT64_MAX;
	volatile int64_t t94 = 11394466627LL;

	t94 = (((x389<x390)<x391)%x392);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x395 = INT32_MAX;
	int16_t x396 = 1;
	int32_t t95 = 41808445;

	t95 = (((x393<x394)<x395)%x396);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x397 = 13U;
	uint8_t x398 = 51U;
	static uint32_t x399 = UINT32_MAX;
	uint64_t x400 = UINT64_MAX;
	static uint64_t t96 = 85595LLU;

	t96 = (((x397<x398)<x399)%x400);

	if (t96 != 1LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x401 = INT16_MIN;
	int32_t x402 = INT32_MIN;
	volatile int16_t x404 = 11;
	int32_t t97 = -22;

	t97 = (((x401<x402)<x403)%x404);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x405 = 68U;
	static uint8_t x406 = UINT8_MAX;
	static int64_t x407 = INT64_MIN;
	volatile int32_t t98 = -7703480;

	t98 = (((x405<x406)<x407)%x408);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x409 = INT8_MAX;
	static uint64_t x410 = 60LLU;

	t99 = (((x409<x410)<x411)%x412);

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

