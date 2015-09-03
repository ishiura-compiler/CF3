#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x4 = 3538509LL;
int64_t t0 = -3914726520340927LL;
int32_t x8 = INT32_MIN;
uint32_t x12 = 217176U;
static volatile uint32_t t2 = 8169394U;
uint64_t x20 = 1239773454722744151LLU;
int16_t x22 = INT16_MIN;
int8_t x23 = INT8_MAX;
uint32_t t8 = 1489807994U;
static uint8_t x37 = 5U;
volatile uint32_t t10 = 8348078U;
volatile int8_t x46 = -1;
uint64_t x47 = 228LLU;
int64_t x48 = -310859383878849411LL;
int16_t x56 = INT16_MIN;
uint64_t t13 = 2144185341958LLU;
uint32_t x62 = 2034U;
int8_t x67 = -1;
volatile int32_t t19 = -1209189;
int8_t x87 = INT8_MIN;
volatile uint32_t t21 = 112U;
int32_t x93 = INT32_MIN;
static int16_t x98 = INT16_MIN;
static uint64_t x102 = 91945LLU;
uint8_t x105 = 6U;
int16_t x110 = -1;
int16_t x115 = -1;
int32_t t28 = 25468323;
int16_t x123 = 246;
int32_t x129 = INT32_MAX;
static int16_t x131 = -1;
int16_t x137 = INT16_MIN;
int8_t x139 = INT8_MIN;
volatile uint32_t t33 = 3U;
volatile int32_t t36 = -35618494;
volatile int32_t x154 = INT32_MIN;
static volatile uint64_t t37 = 2LLU;
uint16_t x158 = 862U;
int64_t t40 = 3470799300101212LL;
int16_t x170 = 59;
uint16_t x172 = UINT16_MAX;
uint16_t x175 = 21U;
uint16_t x184 = 3710U;
int32_t t44 = -2375;
static volatile uint32_t t47 = 1U;
int32_t x202 = -1;
int32_t t48 = -2635925;
uint16_t x208 = UINT16_MAX;
volatile int64_t x213 = INT64_MAX;
int32_t x217 = -1;
int32_t t52 = 2;
uint32_t x221 = 7685U;
int16_t x228 = INT16_MIN;
int8_t x235 = INT8_MIN;
volatile int8_t x236 = 6;
int8_t x240 = INT8_MIN;
volatile uint32_t x241 = 50892U;
volatile int64_t x243 = -726709171LL;
static int16_t x244 = INT16_MIN;
int64_t x249 = INT64_MAX;
int64_t x250 = INT64_MAX;
int8_t x251 = 15;
static uint32_t x252 = UINT32_MAX;
int8_t x257 = 0;
static uint32_t x263 = 14876U;
int32_t x267 = INT32_MIN;
uint64_t t65 = 25LLU;
int64_t x292 = INT64_MIN;
int32_t x300 = 836643;
int16_t x301 = -1;
uint64_t x302 = 143745LLU;
volatile uint16_t x308 = 60U;
uint8_t x309 = 27U;
uint16_t x310 = UINT16_MAX;
volatile int64_t t77 = -6270041749LL;
static int32_t t78 = -10037195;
static uint32_t x339 = 78755U;
volatile uint32_t t79 = 22U;
static int32_t x345 = INT32_MIN;
int32_t x349 = -4;
int8_t x358 = -10;
int32_t x365 = INT32_MIN;
int64_t x373 = -21336136LL;
int16_t x376 = -1;
int16_t x391 = 29;
static int16_t x392 = 56;
static volatile int32_t t92 = -13;
uint32_t x394 = 61528U;
int8_t x402 = INT8_MIN;
static volatile int64_t x404 = INT64_MIN;
static int8_t x408 = 20;
volatile uint64_t t97 = 8686711174LLU;
uint64_t x418 = 610769685LLU;


void f0(void) {
	static int64_t x1 = INT64_MIN;
	uint32_t x2 = 1009235451U;
	uint8_t x3 = 18U;

	t0 = (((x1<x2)+x3)%x4);

	if (t0 != 19LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	static int32_t x6 = -1;
	static int8_t x7 = INT8_MAX;
	int32_t t1 = -5;

	t1 = (((x5<x6)+x7)%x8);

	if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 5U;
	uint32_t x10 = 31704288U;
	int8_t x11 = INT8_MIN;

	t2 = (((x9<x10)+x11)%x12);

	if (t2 != 94593U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MAX;
	int16_t x14 = -1;
	int16_t x15 = INT16_MIN;
	volatile int8_t x16 = 33;
	int32_t t3 = 174;

	t3 = (((x13<x14)+x15)%x16);

	if (t3 != -32) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	volatile int64_t x18 = INT64_MIN;
	volatile int64_t x19 = INT64_MAX;
	volatile uint64_t t4 = 16068302085LLU;

	t4 = (((x17<x18)+x19)%x20);

	if (t4 != 544957853795566750LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = UINT64_MAX;
	uint8_t x24 = 21U;
	volatile int32_t t5 = 309006;

	t5 = (((x21<x22)+x23)%x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = 0;
	int32_t x26 = INT32_MAX;
	static int16_t x27 = 323;
	volatile int64_t x28 = INT64_MAX;
	int64_t t6 = -142936264196891401LL;

	t6 = (((x25<x26)+x27)%x28);

	if (t6 != 324LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = 3;
	static int16_t x30 = -1;
	uint32_t x31 = UINT32_MAX;
	volatile uint16_t x32 = 3U;
	uint32_t t7 = 33946124U;

	t7 = (((x29<x30)+x31)%x32);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -24;
	volatile int64_t x34 = INT64_MIN;
	static uint32_t x35 = 2049U;
	int16_t x36 = INT16_MAX;

	t8 = (((x33<x34)+x35)%x36);

	if (t8 != 2049U) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x38 = -42;
	static int16_t x39 = INT16_MIN;
	int16_t x40 = INT16_MAX;
	int32_t t9 = 1674480;

	t9 = (((x37<x38)+x39)%x40);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x41 = -1;
	static int64_t x42 = -3224955287911LL;
	uint32_t x43 = 5884U;
	int8_t x44 = INT8_MIN;

	t10 = (((x41<x42)+x43)%x44);

	if (t10 != 5884U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 63U;
	volatile uint64_t t11 = 124384649706LLU;

	t11 = (((x45<x46)+x47)%x48);

	if (t11 != 229LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = 121296185;
	int32_t x50 = INT32_MIN;
	static int32_t x51 = -959724859;
	int8_t x52 = -18;
	int32_t t12 = 98049;

	t12 = (((x49<x50)+x51)%x52);

	if (t12 != -13) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x53 = INT16_MAX;
	uint8_t x54 = 1U;
	uint64_t x55 = 674LLU;

	t13 = (((x53<x54)+x55)%x56);

	if (t13 != 674LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x61 = -1574;
	uint8_t x63 = 14U;
	int32_t x64 = INT32_MIN;
	static int32_t t14 = -27630471;

	t14 = (((x61<x62)+x63)%x64);

	if (t14 != 14) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x65 = 0U;
	int32_t x66 = 35053900;
	uint64_t x68 = 427106305853579LLU;
	static volatile uint64_t t15 = 68807453922715496LLU;

	t15 = (((x65<x66)+x67)%x68);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = -43;
	int64_t x70 = 245575735865067LL;
	static uint8_t x71 = 3U;
	static uint16_t x72 = UINT16_MAX;
	int32_t t16 = 1685643;

	t16 = (((x69<x70)+x71)%x72);

	if (t16 != 4) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x73 = UINT8_MAX;
	uint32_t x74 = 256678U;
	volatile int8_t x75 = INT8_MIN;
	int32_t x76 = INT32_MIN;
	static volatile int32_t t17 = -32355768;

	t17 = (((x73<x74)+x75)%x76);

	if (t17 != -127) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x77 = 3845U;
	int64_t x78 = INT64_MIN;
	static int8_t x79 = INT8_MIN;
	int8_t x80 = 1;
	int32_t t18 = -109355391;

	t18 = (((x77<x78)+x79)%x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x81 = UINT16_MAX;
	static volatile int64_t x82 = INT64_MAX;
	int8_t x83 = INT8_MIN;
	uint16_t x84 = UINT16_MAX;

	t19 = (((x81<x82)+x83)%x84);

	if (t19 != -127) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = INT64_MAX;
	int8_t x86 = INT8_MIN;
	int8_t x88 = -2;
	static volatile int32_t t20 = 8;

	t20 = (((x85<x86)+x87)%x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x89 = 0U;
	int8_t x90 = INT8_MIN;
	static int8_t x91 = -19;
	static uint32_t x92 = UINT32_MAX;

	t21 = (((x89<x90)+x91)%x92);

	if (t21 != 4294967277U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x94 = INT8_MIN;
	static volatile int8_t x95 = -1;
	int8_t x96 = INT8_MIN;
	static volatile int32_t t22 = 22754942;

	t22 = (((x93<x94)+x95)%x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x97 = INT8_MAX;
	volatile int32_t x99 = -1;
	volatile int32_t x100 = INT32_MIN;
	volatile int32_t t23 = -2;

	t23 = (((x97<x98)+x99)%x100);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x101 = 923181733102358200LLU;
	int16_t x103 = -20;
	uint16_t x104 = UINT16_MAX;
	volatile int32_t t24 = 801304;

	t24 = (((x101<x102)+x103)%x104);

	if (t24 != -20) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x106 = UINT32_MAX;
	static int64_t x107 = -167453919LL;
	uint16_t x108 = 16U;
	static int64_t t25 = -1853569260611422741LL;

	t25 = (((x105<x106)+x107)%x108);

	if (t25 != -14LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = 252383;
	int16_t x111 = INT16_MAX;
	uint32_t x112 = 1270U;
	volatile uint32_t t26 = 375900U;

	t26 = (((x109<x110)+x111)%x112);

	if (t26 != 1017U) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int16_t x113 = 705;
	uint8_t x114 = 2U;
	int32_t x116 = INT32_MIN;
	volatile int32_t t27 = -9495634;

	t27 = (((x113<x114)+x115)%x116);

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x117 = -1;
	int32_t x118 = 1;
	uint8_t x119 = 37U;
	uint8_t x120 = 4U;

	t28 = (((x117<x118)+x119)%x120);

	if (t28 != 2) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x121 = 1597706075718688LLU;
	int32_t x122 = INT32_MIN;
	static int16_t x124 = -5903;
	volatile int32_t t29 = -32813639;

	t29 = (((x121<x122)+x123)%x124);

	if (t29 != 247) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = -114LL;
	int16_t x126 = 7;
	uint64_t x127 = UINT64_MAX;
	uint32_t x128 = UINT32_MAX;
	uint64_t t30 = 9160LLU;

	t30 = (((x125<x126)+x127)%x128);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x130 = INT16_MIN;
	uint16_t x132 = UINT16_MAX;
	int32_t t31 = 14;

	t31 = (((x129<x130)+x131)%x132);

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x133 = UINT16_MAX;
	volatile uint8_t x134 = UINT8_MAX;
	uint64_t x135 = 105561940766099LLU;
	int32_t x136 = -3;
	uint64_t t32 = 127760620148LLU;

	t32 = (((x133<x134)+x135)%x136);

	if (t32 != 105561940766099LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x138 = 9;
	uint32_t x140 = 238247U;

	t33 = (((x137<x138)+x139)%x140);

	if (t33 != 88500U) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x141 = -1;
	volatile int8_t x142 = 1;
	int64_t x143 = INT64_MIN;
	volatile uint16_t x144 = 26U;
	int64_t t34 = 6179LL;

	t34 = (((x141<x142)+x143)%x144);

	if (t34 != -7LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x145 = UINT8_MAX;
	int32_t x146 = INT32_MAX;
	uint8_t x147 = UINT8_MAX;
	uint32_t x148 = 3U;
	uint32_t t35 = 35057U;

	t35 = (((x145<x146)+x147)%x148);

	if (t35 != 1U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x149 = 228334LL;
	volatile int8_t x150 = INT8_MIN;
	int8_t x151 = INT8_MAX;
	int32_t x152 = -1;

	t36 = (((x149<x150)+x151)%x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x153 = INT8_MIN;
	static int8_t x155 = INT8_MIN;
	uint64_t x156 = UINT64_MAX;

	t37 = (((x153<x154)+x155)%x156);

	if (t37 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x157 = 29;
	volatile int8_t x159 = -31;
	static uint32_t x160 = UINT32_MAX;
	volatile uint32_t t38 = 1U;

	t38 = (((x157<x158)+x159)%x160);

	if (t38 != 4294967266U) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x161 = -1;
	volatile int32_t x162 = INT32_MAX;
	int64_t x163 = 71557086LL;
	uint64_t x164 = 105530LLU;
	uint64_t t39 = 136LLU;

	t39 = (((x161<x162)+x163)%x164);

	if (t39 != 7747LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x165 = 0U;
	int16_t x166 = INT16_MIN;
	int64_t x167 = INT64_MAX;
	static volatile uint16_t x168 = 20U;

	t40 = (((x165<x166)+x167)%x168);

	if (t40 != 7LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x169 = 33589296506LLU;
	volatile uint32_t x171 = UINT32_MAX;
	volatile uint32_t t41 = 246058U;

	t41 = (((x169<x170)+x171)%x172);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x173 = INT32_MAX;
	int16_t x174 = INT16_MIN;
	uint8_t x176 = 6U;
	static int32_t t42 = 35;

	t42 = (((x173<x174)+x175)%x176);

	if (t42 != 3) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x177 = -1LL;
	volatile int16_t x178 = -1;
	int64_t x179 = INT64_MIN;
	static volatile uint8_t x180 = 13U;
	int64_t t43 = -57632LL;

	t43 = (((x177<x178)+x179)%x180);

	if (t43 != -8LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x181 = -5979;
	uint64_t x182 = 49222949847075LLU;
	static int32_t x183 = -95;

	t44 = (((x181<x182)+x183)%x184);

	if (t44 != -95) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x189 = -1;
	int64_t x190 = INT64_MIN;
	int16_t x191 = -1;
	int32_t x192 = -6594;
	volatile int32_t t45 = -1;

	t45 = (((x189<x190)+x191)%x192);

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x193 = INT64_MIN;
	uint8_t x194 = UINT8_MAX;
	int64_t x195 = -5LL;
	uint64_t x196 = 21132359694943LLU;
	uint64_t t46 = 3958LLU;

	t46 = (((x193<x194)+x195)%x196);

	if (t46 != 11442958077710LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x197 = INT8_MAX;
	int32_t x198 = INT32_MIN;
	volatile uint16_t x199 = 12U;
	uint32_t x200 = UINT32_MAX;

	t47 = (((x197<x198)+x199)%x200);

	if (t47 != 12U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x201 = UINT16_MAX;
	int8_t x203 = 0;
	static int32_t x204 = -598321;

	t48 = (((x201<x202)+x203)%x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x205 = -1;
	int8_t x206 = INT8_MIN;
	uint8_t x207 = 17U;
	volatile int32_t t49 = -288;

	t49 = (((x205<x206)+x207)%x208);

	if (t49 != 17) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x209 = -1;
	volatile int32_t x210 = -1;
	int8_t x211 = -1;
	volatile uint64_t x212 = 467326907LLU;
	uint64_t t50 = 44541474LLU;

	t50 = (((x209<x210)+x211)%x212);

	if (t50 != 180915033LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x214 = UINT32_MAX;
	int16_t x215 = -1;
	int16_t x216 = 2975;
	int32_t t51 = 420;

	t51 = (((x213<x214)+x215)%x216);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x218 = 22U;
	uint16_t x219 = 23U;
	uint16_t x220 = UINT16_MAX;

	t52 = (((x217<x218)+x219)%x220);

	if (t52 != 24) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x222 = 378U;
	volatile int8_t x223 = -1;
	static int16_t x224 = -1;
	volatile int32_t t53 = 419509627;

	t53 = (((x221<x222)+x223)%x224);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x225 = INT16_MAX;
	volatile int8_t x226 = INT8_MIN;
	volatile int16_t x227 = -53;
	int32_t t54 = 1076;

	t54 = (((x225<x226)+x227)%x228);

	if (t54 != -53) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint32_t x229 = UINT32_MAX;
	int8_t x230 = INT8_MIN;
	int64_t x231 = 7785820493LL;
	static int16_t x232 = INT16_MAX;
	int64_t t55 = 21LL;

	t55 = (((x229<x230)+x231)%x232);

	if (t55 != 20856LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x233 = 34406921440525037LL;
	uint64_t x234 = UINT64_MAX;
	static volatile int32_t t56 = -3;

	t56 = (((x233<x234)+x235)%x236);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x237 = -1LL;
	int16_t x238 = -1;
	int16_t x239 = -1;
	int32_t t57 = 1138;

	t57 = (((x237<x238)+x239)%x240);

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x242 = UINT16_MAX;
	volatile int64_t t58 = -10084533153LL;

	t58 = (((x241<x242)+x243)%x244);

	if (t58 != -13234LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x245 = INT32_MAX;
	uint16_t x246 = 3646U;
	volatile uint8_t x247 = 125U;
	uint32_t x248 = 49861U;
	uint32_t t59 = 1813U;

	t59 = (((x245<x246)+x247)%x248);

	if (t59 != 125U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t t60 = 16491U;

	t60 = (((x249<x250)+x251)%x252);

	if (t60 != 15U) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x253 = 106420U;
	static int8_t x254 = 16;
	volatile uint16_t x255 = 1U;
	volatile int16_t x256 = INT16_MIN;
	int32_t t61 = 9259318;

	t61 = (((x253<x254)+x255)%x256);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x258 = 1U;
	volatile uint64_t x259 = 202558LLU;
	static uint16_t x260 = UINT16_MAX;
	uint64_t t62 = 4LLU;

	t62 = (((x257<x258)+x259)%x260);

	if (t62 != 5954LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x261 = -1;
	volatile int32_t x262 = -64518726;
	static int64_t x264 = 44793610568LL;
	static volatile int64_t t63 = 775469LL;

	t63 = (((x261<x262)+x263)%x264);

	if (t63 != 14876LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x265 = INT64_MIN;
	uint64_t x266 = UINT64_MAX;
	int16_t x268 = -1;
	int32_t t64 = 30075998;

	t64 = (((x265<x266)+x267)%x268);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x269 = -152;
	static int8_t x270 = INT8_MAX;
	int32_t x271 = -1;
	static uint64_t x272 = UINT64_MAX;

	t65 = (((x269<x270)+x271)%x272);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x273 = UINT8_MAX;
	int8_t x274 = INT8_MAX;
	int8_t x275 = INT8_MIN;
	static volatile uint8_t x276 = 51U;
	volatile int32_t t66 = -53387120;

	t66 = (((x273<x274)+x275)%x276);

	if (t66 != -26) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x277 = 0;
	int8_t x278 = 1;
	int64_t x279 = 1402372226480LL;
	int32_t x280 = 697341566;
	static volatile int64_t t67 = 4042537364158841LL;

	t67 = (((x277<x278)+x279)%x280);

	if (t67 != 18337255LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x281 = -14;
	uint64_t x282 = 266456597089154657LLU;
	int32_t x283 = INT32_MIN;
	int8_t x284 = INT8_MAX;
	static volatile int32_t t68 = -3728232;

	t68 = (((x281<x282)+x283)%x284);

	if (t68 != -8) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x285 = -1;
	static int16_t x286 = 1128;
	static int64_t x287 = -363LL;
	int8_t x288 = -9;
	int64_t t69 = -501363666LL;

	t69 = (((x285<x286)+x287)%x288);

	if (t69 != -2LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x289 = -1;
	static uint16_t x290 = 240U;
	int16_t x291 = INT16_MIN;
	static int64_t t70 = 4024584LL;

	t70 = (((x289<x290)+x291)%x292);

	if (t70 != -32767LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x293 = UINT8_MAX;
	int64_t x294 = INT64_MIN;
	int16_t x295 = -9;
	static int64_t x296 = -1LL;
	int64_t t71 = -24526808926848LL;

	t71 = (((x293<x294)+x295)%x296);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x297 = INT32_MIN;
	int32_t x298 = -18;
	static int8_t x299 = INT8_MAX;
	int32_t t72 = 209645743;

	t72 = (((x297<x298)+x299)%x300);

	if (t72 != 128) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x303 = -1;
	uint64_t x304 = 247LLU;
	volatile uint64_t t73 = 27921678LLU;

	t73 = (((x301<x302)+x303)%x304);

	if (t73 != 54LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x305 = 3440U;
	int16_t x306 = INT16_MIN;
	int16_t x307 = INT16_MIN;
	static volatile int32_t t74 = 2;

	t74 = (((x305<x306)+x307)%x308);

	if (t74 != -8) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x311 = -1114332762901183LL;
	static int32_t x312 = -54756194;
	static int64_t t75 = 263932996157133LL;

	t75 = (((x309<x310)+x311)%x312);

	if (t75 != -26752624LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x317 = 3U;
	static int64_t x318 = INT64_MAX;
	uint16_t x319 = 6U;
	static int64_t x320 = -1LL;
	volatile int64_t t76 = 126006311967347LL;

	t76 = (((x317<x318)+x319)%x320);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x321 = INT16_MAX;
	uint8_t x322 = 85U;
	int8_t x323 = -1;
	volatile int64_t x324 = -11874891LL;

	t77 = (((x321<x322)+x323)%x324);

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x325 = 87U;
	int8_t x326 = 30;
	int8_t x327 = INT8_MIN;
	uint8_t x328 = 52U;

	t78 = (((x325<x326)+x327)%x328);

	if (t78 != -24) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x337 = 1326;
	volatile uint16_t x338 = UINT16_MAX;
	uint32_t x340 = 717066831U;

	t79 = (((x337<x338)+x339)%x340);

	if (t79 != 78756U) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x341 = -111399;
	int32_t x342 = -1;
	volatile int16_t x343 = INT16_MIN;
	static int32_t x344 = 7468;
	volatile int32_t t80 = -4872925;

	t80 = (((x341<x342)+x343)%x344);

	if (t80 != -2895) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x346 = 314803602;
	uint32_t x347 = UINT32_MAX;
	uint32_t x348 = 473095948U;
	static uint32_t t81 = 3U;

	t81 = (((x345<x346)+x347)%x348);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x350 = INT16_MAX;
	static uint8_t x351 = 1U;
	int64_t x352 = INT64_MIN;
	volatile int64_t t82 = -2364LL;

	t82 = (((x349<x350)+x351)%x352);

	if (t82 != 2LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x353 = -117LL;
	static uint8_t x354 = 4U;
	static uint16_t x355 = 1U;
	volatile int64_t x356 = -1LL;
	static int64_t t83 = -528982347829305299LL;

	t83 = (((x353<x354)+x355)%x356);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x357 = 0;
	int8_t x359 = INT8_MAX;
	int8_t x360 = INT8_MIN;
	static volatile int32_t t84 = 12990;

	t84 = (((x357<x358)+x359)%x360);

	if (t84 != 127) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x361 = -2758733566LL;
	int32_t x362 = INT32_MIN;
	volatile int32_t x363 = -1;
	int32_t x364 = 343;
	volatile int32_t t85 = -2;

	t85 = (((x361<x362)+x363)%x364);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x366 = -3162916036883LL;
	static int16_t x367 = -3;
	int16_t x368 = -1;
	int32_t t86 = -167;

	t86 = (((x365<x366)+x367)%x368);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x369 = 3U;
	int32_t x370 = 1039569132;
	uint32_t x371 = 224637U;
	volatile int64_t x372 = -1389961391LL;
	volatile int64_t t87 = -402836599LL;

	t87 = (((x369<x370)+x371)%x372);

	if (t87 != 224638LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x374 = -3;
	volatile int8_t x375 = 15;
	volatile int32_t t88 = 164;

	t88 = (((x373<x374)+x375)%x376);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x377 = INT32_MIN;
	uint16_t x378 = UINT16_MAX;
	int16_t x379 = INT16_MAX;
	int8_t x380 = INT8_MAX;
	volatile int32_t t89 = 182;

	t89 = (((x377<x378)+x379)%x380);

	if (t89 != 2) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x381 = 8062353327LLU;
	volatile uint8_t x382 = 13U;
	volatile int8_t x383 = INT8_MIN;
	volatile int16_t x384 = INT16_MAX;
	static volatile int32_t t90 = 743527;

	t90 = (((x381<x382)+x383)%x384);

	if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x385 = -1;
	static int8_t x386 = INT8_MIN;
	int64_t x387 = 422180969085LL;
	uint64_t x388 = UINT64_MAX;
	volatile uint64_t t91 = 22557151LLU;

	t91 = (((x385<x386)+x387)%x388);

	if (t91 != 422180969085LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x389 = INT64_MIN;
	int16_t x390 = INT16_MIN;

	t92 = (((x389<x390)+x391)%x392);

	if (t92 != 30) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x393 = 1778344727053LLU;
	uint64_t x395 = 20389321LLU;
	uint64_t x396 = 59538584337951503LLU;
	uint64_t t93 = 97LLU;

	t93 = (((x393<x394)+x395)%x396);

	if (t93 != 20389321LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x401 = INT32_MIN;
	int16_t x403 = 39;
	volatile int64_t t94 = -2849566530LL;

	t94 = (((x401<x402)+x403)%x404);

	if (t94 != 40LL) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int16_t x405 = 6679;
	uint16_t x406 = UINT16_MAX;
	uint32_t x407 = 556U;
	uint32_t t95 = 18477459U;

	t95 = (((x405<x406)+x407)%x408);

	if (t95 != 17U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x409 = -1;
	static int64_t x410 = -1LL;
	static int16_t x411 = INT16_MAX;
	int64_t x412 = -1027701110886449230LL;
	int64_t t96 = -123266460LL;

	t96 = (((x409<x410)+x411)%x412);

	if (t96 != 32767LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x413 = 435U;
	uint32_t x414 = UINT32_MAX;
	uint64_t x415 = 366271753081295897LLU;
	int32_t x416 = INT32_MIN;

	t97 = (((x413<x414)+x415)%x416);

	if (t97 != 366271753081295898LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x417 = -646886534110LL;
	int8_t x419 = INT8_MIN;
	uint64_t x420 = 6030501LLU;
	volatile uint64_t t98 = 302795292LLU;

	t98 = (((x417<x418)+x419)%x420);

	if (t98 != 4181087LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x421 = 1350562077U;
	int16_t x422 = INT16_MIN;
	uint32_t x423 = 3U;
	static int16_t x424 = -3902;
	volatile uint32_t t99 = 7U;

	t99 = (((x421<x422)+x423)%x424);

	if (t99 != 4U) { NG(); } else { ; }
	
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

