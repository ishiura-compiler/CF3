#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x8 = -1;
static volatile int32_t t2 = -11931790;
static uint8_t x13 = 83U;
int32_t t3 = 3580420;
uint16_t x20 = UINT16_MAX;
int16_t x23 = -1;
int16_t x27 = -1;
static int32_t x33 = -1;
uint8_t x34 = 99U;
uint16_t x36 = 25U;
volatile int32_t t8 = -15443;
int16_t x40 = INT16_MIN;
uint8_t x42 = 3U;
int32_t x48 = INT32_MIN;
uint16_t x52 = UINT16_MAX;
int32_t t12 = -2311098;
volatile uint32_t x54 = 48U;
uint16_t x56 = 184U;
volatile uint32_t x59 = 203750105U;
uint64_t x60 = 27454114514491LLU;
static int16_t x70 = INT16_MIN;
int8_t x74 = -1;
uint64_t x76 = 4810816322429890934LLU;
volatile int32_t t18 = -83509;
uint32_t x84 = 32463U;
int64_t x87 = -1LL;
int16_t x91 = -1;
volatile uint8_t x93 = 1U;
static volatile int8_t x94 = 1;
uint8_t x96 = 0U;
int32_t x106 = -22949251;
int32_t t25 = -367;
int32_t t27 = -2194421;
int64_t x124 = -1LL;
volatile int64_t x127 = 49609673592365LL;
static int16_t x130 = -412;
int32_t x133 = 2639;
int32_t t31 = 18;
int8_t x140 = INT8_MIN;
uint16_t x142 = 196U;
static int16_t x143 = INT16_MIN;
int8_t x152 = 11;
int64_t x155 = INT64_MAX;
int64_t x157 = -222675963491671LL;
int32_t t37 = -55700;
volatile int32_t t38 = -446970470;
int8_t x165 = 1;
volatile uint64_t x166 = 12190269083584LLU;
static int32_t x167 = INT32_MIN;
volatile int32_t t40 = 5634;
int64_t x175 = -1LL;
uint16_t x187 = 86U;
int64_t x199 = INT64_MAX;
uint64_t x200 = 14LLU;
volatile int32_t t46 = 137;
uint8_t x216 = UINT8_MAX;
int32_t x228 = -1;
static int32_t x233 = 1196;
volatile int64_t x238 = -1LL;
int64_t x257 = 50LL;
int32_t t61 = 572789567;
uint8_t x261 = UINT8_MAX;
int32_t t62 = -2865;
uint16_t x268 = 11717U;
static int8_t x269 = INT8_MAX;
int32_t t64 = -335028303;
uint16_t x280 = 3838U;
int64_t x284 = 7865884LL;
int8_t x289 = INT8_MAX;
int32_t x290 = INT32_MIN;
static volatile uint16_t x300 = UINT16_MAX;
int64_t x302 = INT64_MAX;
static int64_t x303 = -25LL;
static volatile int16_t x306 = 2387;
int32_t x309 = INT32_MIN;
static uint64_t x311 = UINT64_MAX;
volatile uint8_t x313 = 1U;
uint8_t x315 = UINT8_MAX;
uint16_t x320 = 4U;
int32_t x322 = INT32_MIN;
volatile int64_t x329 = INT64_MIN;
volatile int8_t x335 = INT8_MAX;
int32_t t80 = 229971;
static volatile int16_t x343 = INT16_MAX;
volatile int32_t t83 = 1868;
int16_t x352 = -21;
volatile int32_t t85 = -330629;
uint8_t x357 = 1U;
volatile uint64_t x359 = UINT64_MAX;
volatile int8_t x368 = INT8_MAX;
static int16_t x385 = INT16_MIN;
uint32_t x386 = UINT32_MAX;
static volatile int32_t t93 = -78;
uint16_t x397 = 4U;
static int8_t x402 = INT8_MIN;
static int8_t x407 = -1;
volatile int32_t t98 = -44376316;


void f0(void) {
	uint64_t x1 = 264726848LLU;
	int32_t x2 = INT32_MAX;
	static int64_t x3 = INT64_MAX;
	uint16_t x4 = 422U;
	static volatile int32_t t0 = 991;

	t0 = ((x1<=(x2%x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x5 = 32008U;
	int16_t x6 = -1;
	int32_t x7 = INT32_MAX;
	int32_t t1 = 61;

	t1 = ((x5<=(x6%x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = 38U;
	uint8_t x10 = 1U;
	int32_t x11 = INT32_MIN;
	int16_t x12 = 3;

	t2 = ((x9<=(x10%x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = -1LL;
	uint8_t x15 = 2U;
	int16_t x16 = 1;

	t3 = ((x13<=(x14%x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = UINT16_MAX;
	volatile uint64_t x18 = 1885466176118054LLU;
	int16_t x19 = -1;
	static int32_t t4 = -162722;

	t4 = ((x17<=(x18%x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x21 = 2408911610LLU;
	int16_t x22 = INT16_MAX;
	volatile int16_t x24 = 25;
	volatile int32_t t5 = 3221;

	t5 = ((x21<=(x22%x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint16_t x25 = 29U;
	uint32_t x26 = 28586972U;
	int16_t x28 = -5221;
	volatile int32_t t6 = -2;

	t6 = ((x25<=(x26%x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = UINT64_MAX;
	int16_t x30 = INT16_MAX;
	int8_t x31 = -1;
	uint32_t x32 = UINT32_MAX;
	volatile int32_t t7 = -14;

	t7 = ((x29<=(x30%x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x35 = INT64_MIN;

	t8 = ((x33<=(x34%x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MAX;
	static volatile int8_t x38 = INT8_MIN;
	static int16_t x39 = INT16_MAX;
	static int32_t t9 = -16280;

	t9 = ((x37<=(x38%x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x41 = UINT32_MAX;
	volatile int8_t x43 = INT8_MAX;
	int16_t x44 = INT16_MAX;
	volatile int32_t t10 = -132740;

	t10 = ((x41<=(x42%x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	static uint16_t x46 = UINT16_MAX;
	static int16_t x47 = INT16_MAX;
	int32_t t11 = 699510;

	t11 = ((x45<=(x46%x47))==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = UINT16_MAX;
	int32_t x50 = INT32_MAX;
	int8_t x51 = -1;

	t12 = ((x49<=(x50%x51))==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = 10;
	volatile int16_t x55 = INT16_MIN;
	int32_t t13 = 1;

	t13 = ((x53<=(x54%x55))==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	volatile int16_t x58 = 1632;
	volatile int32_t t14 = 1;

	t14 = ((x57<=(x58%x59))==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = 0;
	uint64_t x62 = 28LLU;
	int64_t x63 = INT64_MIN;
	int32_t x64 = INT32_MIN;
	int32_t t15 = -14;

	t15 = ((x61<=(x62%x63))==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = 1;
	volatile uint32_t x66 = UINT32_MAX;
	static int32_t x67 = -325942328;
	int32_t x68 = INT32_MAX;
	volatile int32_t t16 = 10510976;

	t16 = ((x65<=(x66%x67))==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = UINT32_MAX;
	volatile int32_t x71 = 132536258;
	volatile uint64_t x72 = 910673954259226902LLU;
	volatile int32_t t17 = 473;

	t17 = ((x69<=(x70%x71))==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x73 = -202;
	int64_t x75 = -7713978427636LL;

	t18 = ((x73<=(x74%x75))==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = INT16_MIN;
	int16_t x82 = INT16_MIN;
	volatile int16_t x83 = -7816;
	volatile int32_t t19 = -2041;

	t19 = ((x81<=(x82%x83))==x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = INT8_MIN;
	volatile int16_t x86 = INT16_MIN;
	static int16_t x88 = INT16_MIN;
	volatile int32_t t20 = -4922979;

	t20 = ((x85<=(x86%x87))==x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x89 = 29U;
	int64_t x90 = INT64_MAX;
	int32_t x92 = INT32_MAX;
	int32_t t21 = -1;

	t21 = ((x89<=(x90%x91))==x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int64_t x95 = -3243663677LL;
	volatile int32_t t22 = 38;

	t22 = ((x93<=(x94%x95))==x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = INT8_MIN;
	uint16_t x98 = 8U;
	int8_t x99 = 28;
	int16_t x100 = INT16_MIN;
	int32_t t23 = 15470187;

	t23 = ((x97<=(x98%x99))==x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = -6096;
	static uint16_t x102 = 90U;
	int32_t x103 = -2125620;
	static int32_t x104 = INT32_MIN;
	int32_t t24 = 1;

	t24 = ((x101<=(x102%x103))==x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = INT8_MIN;
	int16_t x107 = INT16_MIN;
	volatile int16_t x108 = -1;

	t25 = ((x105<=(x106%x107))==x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x109 = 12U;
	int16_t x110 = INT16_MIN;
	int64_t x111 = INT64_MIN;
	int64_t x112 = -1LL;
	volatile int32_t t26 = -9;

	t26 = ((x109<=(x110%x111))==x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x117 = 3510U;
	static int32_t x118 = -1;
	int64_t x119 = -1LL;
	int32_t x120 = 7;

	t27 = ((x117<=(x118%x119))==x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x121 = 138LLU;
	uint32_t x122 = 0U;
	int64_t x123 = INT64_MIN;
	volatile int32_t t28 = 3935986;

	t28 = ((x121<=(x122%x123))==x124);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x125 = -51;
	static volatile uint16_t x126 = 314U;
	uint32_t x128 = UINT32_MAX;
	volatile int32_t t29 = -1;

	t29 = ((x125<=(x126%x127))==x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x129 = 1;
	static uint8_t x131 = 2U;
	volatile uint16_t x132 = 0U;
	int32_t t30 = -62199;

	t30 = ((x129<=(x130%x131))==x132);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x134 = -15108;
	int16_t x135 = -1;
	int32_t x136 = INT32_MAX;

	t31 = ((x133<=(x134%x135))==x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x137 = INT32_MIN;
	uint64_t x138 = 388751LLU;
	int16_t x139 = INT16_MIN;
	volatile int32_t t32 = 82;

	t32 = ((x137<=(x138%x139))==x140);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x141 = 1U;
	int64_t x144 = INT64_MIN;
	volatile int32_t t33 = 956798;

	t33 = ((x141<=(x142%x143))==x144);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x145 = 119934413U;
	uint16_t x146 = UINT16_MAX;
	uint64_t x147 = 303589LLU;
	static uint8_t x148 = 1U;
	int32_t t34 = -2488156;

	t34 = ((x145<=(x146%x147))==x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x149 = 0U;
	uint32_t x150 = UINT32_MAX;
	uint16_t x151 = UINT16_MAX;
	volatile int32_t t35 = 0;

	t35 = ((x149<=(x150%x151))==x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x153 = -5;
	static volatile int8_t x154 = -19;
	int32_t x156 = 340;
	volatile int32_t t36 = 14;

	t36 = ((x153<=(x154%x155))==x156);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x158 = UINT8_MAX;
	volatile int64_t x159 = INT64_MIN;
	volatile int64_t x160 = INT64_MIN;

	t37 = ((x157<=(x158%x159))==x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x161 = INT8_MIN;
	int32_t x162 = 648;
	int8_t x163 = INT8_MAX;
	static int8_t x164 = INT8_MIN;

	t38 = ((x161<=(x162%x163))==x164);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x168 = INT64_MIN;
	volatile int32_t t39 = 1;

	t39 = ((x165<=(x166%x167))==x168);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x169 = -1;
	uint32_t x170 = 0U;
	static uint16_t x171 = 2284U;
	uint16_t x172 = 282U;

	t40 = ((x169<=(x170%x171))==x172);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x173 = 2073U;
	int64_t x174 = 810LL;
	static int32_t x176 = -30234777;
	volatile int32_t t41 = 0;

	t41 = ((x173<=(x174%x175))==x176);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x177 = -4333;
	int16_t x178 = -24;
	int64_t x179 = 3194422268640307899LL;
	uint64_t x180 = UINT64_MAX;
	int32_t t42 = -538402002;

	t42 = ((x177<=(x178%x179))==x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x181 = 0U;
	int8_t x182 = INT8_MIN;
	int16_t x183 = INT16_MAX;
	int32_t x184 = -1;
	volatile int32_t t43 = 102;

	t43 = ((x181<=(x182%x183))==x184);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x185 = 96033068;
	volatile uint64_t x186 = UINT64_MAX;
	uint32_t x188 = 57145727U;
	int32_t t44 = 0;

	t44 = ((x185<=(x186%x187))==x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x189 = INT32_MAX;
	int32_t x190 = INT32_MIN;
	volatile int64_t x191 = -1320LL;
	int64_t x192 = INT64_MIN;
	int32_t t45 = -828593;

	t45 = ((x189<=(x190%x191))==x192);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x197 = INT64_MAX;
	uint8_t x198 = 2U;

	t46 = ((x197<=(x198%x199))==x200);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x201 = 6229U;
	int16_t x202 = -1;
	int64_t x203 = INT64_MAX;
	uint32_t x204 = 116704476U;
	int32_t t47 = -449131561;

	t47 = ((x201<=(x202%x203))==x204);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x205 = UINT64_MAX;
	int16_t x206 = -1017;
	int16_t x207 = 1;
	uint8_t x208 = UINT8_MAX;
	int32_t t48 = 0;

	t48 = ((x205<=(x206%x207))==x208);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x209 = 25928;
	static uint64_t x210 = 1396595977989LLU;
	volatile int64_t x211 = -1LL;
	uint32_t x212 = 8U;
	int32_t t49 = -728;

	t49 = ((x209<=(x210%x211))==x212);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x213 = -4;
	uint16_t x214 = 81U;
	uint8_t x215 = 3U;
	static volatile int32_t t50 = 42540366;

	t50 = ((x213<=(x214%x215))==x216);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x217 = 0U;
	static int16_t x218 = -1;
	static int16_t x219 = -1;
	int8_t x220 = -31;
	int32_t t51 = -30439049;

	t51 = ((x217<=(x218%x219))==x220);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x221 = -1313542LL;
	int64_t x222 = INT64_MIN;
	int8_t x223 = INT8_MIN;
	static uint32_t x224 = 144U;
	volatile int32_t t52 = 3144;

	t52 = ((x221<=(x222%x223))==x224);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x225 = INT32_MIN;
	static int64_t x226 = INT64_MIN;
	volatile uint16_t x227 = UINT16_MAX;
	int32_t t53 = -186;

	t53 = ((x225<=(x226%x227))==x228);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x229 = -1;
	uint32_t x230 = 24U;
	int32_t x231 = INT32_MIN;
	int64_t x232 = -1LL;
	static volatile int32_t t54 = -18;

	t54 = ((x229<=(x230%x231))==x232);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x234 = INT32_MIN;
	static volatile uint16_t x235 = 11U;
	static int16_t x236 = 21;
	volatile int32_t t55 = -712978;

	t55 = ((x233<=(x234%x235))==x236);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x237 = INT8_MIN;
	uint8_t x239 = UINT8_MAX;
	static uint8_t x240 = 1U;
	int32_t t56 = 252;

	t56 = ((x237<=(x238%x239))==x240);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x241 = 43U;
	volatile uint8_t x242 = 0U;
	int64_t x243 = INT64_MIN;
	uint32_t x244 = 163711890U;
	static int32_t t57 = -1;

	t57 = ((x241<=(x242%x243))==x244);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x245 = 3LLU;
	static uint16_t x246 = 33U;
	int32_t x247 = -1;
	volatile int32_t x248 = -7509122;
	volatile int32_t t58 = 26269355;

	t58 = ((x245<=(x246%x247))==x248);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x249 = INT64_MAX;
	uint32_t x250 = 28025U;
	int64_t x251 = INT64_MAX;
	uint16_t x252 = UINT16_MAX;
	volatile int32_t t59 = 2;

	t59 = ((x249<=(x250%x251))==x252);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x253 = -1;
	volatile int32_t x254 = INT32_MAX;
	int64_t x255 = INT64_MAX;
	uint64_t x256 = UINT64_MAX;
	int32_t t60 = 297;

	t60 = ((x253<=(x254%x255))==x256);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x258 = INT8_MIN;
	int32_t x259 = INT32_MIN;
	int16_t x260 = INT16_MIN;

	t61 = ((x257<=(x258%x259))==x260);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x262 = -1LL;
	uint16_t x263 = 3579U;
	volatile uint64_t x264 = 6418538067LLU;

	t62 = ((x261<=(x262%x263))==x264);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x265 = -1;
	int64_t x266 = INT64_MAX;
	volatile int64_t x267 = INT64_MAX;
	int32_t t63 = -49942;

	t63 = ((x265<=(x266%x267))==x268);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x270 = -1;
	int8_t x271 = INT8_MAX;
	int8_t x272 = INT8_MIN;

	t64 = ((x269<=(x270%x271))==x272);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x273 = -1LL;
	int8_t x274 = INT8_MAX;
	int32_t x275 = INT32_MAX;
	static int16_t x276 = INT16_MAX;
	int32_t t65 = 5286;

	t65 = ((x273<=(x274%x275))==x276);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x277 = INT8_MIN;
	int16_t x278 = 344;
	static uint32_t x279 = UINT32_MAX;
	volatile int32_t t66 = 58;

	t66 = ((x277<=(x278%x279))==x280);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x281 = INT16_MAX;
	uint64_t x282 = 7018634642LLU;
	static volatile int32_t x283 = INT32_MIN;
	volatile int32_t t67 = -3857169;

	t67 = ((x281<=(x282%x283))==x284);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x285 = INT8_MIN;
	volatile int32_t x286 = INT32_MIN;
	static volatile int32_t x287 = INT32_MIN;
	int8_t x288 = -6;
	volatile int32_t t68 = -3262;

	t68 = ((x285<=(x286%x287))==x288);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x291 = INT8_MAX;
	int32_t x292 = INT32_MAX;
	static int32_t t69 = 1939;

	t69 = ((x289<=(x290%x291))==x292);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x293 = -1;
	static int64_t x294 = -1LL;
	int32_t x295 = -1;
	volatile int16_t x296 = INT16_MIN;
	static int32_t t70 = 983610;

	t70 = ((x293<=(x294%x295))==x296);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x297 = INT32_MIN;
	int64_t x298 = -1LL;
	int8_t x299 = INT8_MAX;
	int32_t t71 = -1;

	t71 = ((x297<=(x298%x299))==x300);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x301 = 31;
	volatile uint16_t x304 = 38U;
	volatile int32_t t72 = -1135;

	t72 = ((x301<=(x302%x303))==x304);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x305 = 11U;
	static int16_t x307 = INT16_MIN;
	int64_t x308 = -562002739457858LL;
	static volatile int32_t t73 = -435689;

	t73 = ((x305<=(x306%x307))==x308);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x310 = -1;
	int32_t x312 = -1;
	volatile int32_t t74 = 15143;

	t74 = ((x309<=(x310%x311))==x312);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x314 = -2;
	int8_t x316 = 1;
	volatile int32_t t75 = -44;

	t75 = ((x313<=(x314%x315))==x316);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x317 = 14U;
	uint8_t x318 = UINT8_MAX;
	static int8_t x319 = -1;
	int32_t t76 = -1;

	t76 = ((x317<=(x318%x319))==x320);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x321 = INT64_MIN;
	uint32_t x323 = UINT32_MAX;
	int8_t x324 = INT8_MIN;
	volatile int32_t t77 = -579399139;

	t77 = ((x321<=(x322%x323))==x324);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x325 = INT16_MIN;
	static volatile uint32_t x326 = 483696U;
	static int8_t x327 = INT8_MAX;
	int64_t x328 = INT64_MIN;
	int32_t t78 = 27;

	t78 = ((x325<=(x326%x327))==x328);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x330 = 289233LLU;
	volatile int64_t x331 = INT64_MIN;
	int8_t x332 = INT8_MAX;
	int32_t t79 = 986354546;

	t79 = ((x329<=(x330%x331))==x332);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x333 = 28072U;
	int32_t x334 = -1;
	static int64_t x336 = -48640086811488LL;

	t80 = ((x333<=(x334%x335))==x336);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x337 = 235841LLU;
	uint32_t x338 = 534916430U;
	static uint32_t x339 = UINT32_MAX;
	static int64_t x340 = -2792050227LL;
	static volatile int32_t t81 = -1876;

	t81 = ((x337<=(x338%x339))==x340);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x341 = INT8_MIN;
	volatile int32_t x342 = 0;
	uint8_t x344 = 24U;
	volatile int32_t t82 = 15040606;

	t82 = ((x341<=(x342%x343))==x344);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x345 = -1943;
	int32_t x346 = INT32_MAX;
	static uint8_t x347 = UINT8_MAX;
	volatile int32_t x348 = -1084;

	t83 = ((x345<=(x346%x347))==x348);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x349 = 830745LLU;
	int32_t x350 = INT32_MIN;
	uint32_t x351 = 11777600U;
	volatile int32_t t84 = -27;

	t84 = ((x349<=(x350%x351))==x352);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x353 = UINT64_MAX;
	volatile int64_t x354 = 45887420LL;
	uint32_t x355 = UINT32_MAX;
	int16_t x356 = INT16_MAX;

	t85 = ((x353<=(x354%x355))==x356);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x358 = INT32_MAX;
	int32_t x360 = INT32_MIN;
	volatile int32_t t86 = -312052;

	t86 = ((x357<=(x358%x359))==x360);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x361 = INT8_MIN;
	volatile uint16_t x362 = 2099U;
	volatile int16_t x363 = INT16_MIN;
	volatile uint64_t x364 = UINT64_MAX;
	static int32_t t87 = -176;

	t87 = ((x361<=(x362%x363))==x364);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x365 = -7627;
	uint64_t x366 = UINT64_MAX;
	int16_t x367 = -1;
	int32_t t88 = 461857;

	t88 = ((x365<=(x366%x367))==x368);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x369 = -1;
	int32_t x370 = INT32_MIN;
	int16_t x371 = 1;
	static uint64_t x372 = 0LLU;
	volatile int32_t t89 = 146;

	t89 = ((x369<=(x370%x371))==x372);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x373 = 510041761U;
	volatile uint64_t x374 = UINT64_MAX;
	int64_t x375 = -1LL;
	uint32_t x376 = 116U;
	int32_t t90 = -15066381;

	t90 = ((x373<=(x374%x375))==x376);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x377 = -62353LL;
	static int64_t x378 = -1LL;
	volatile int32_t x379 = INT32_MIN;
	uint8_t x380 = 8U;
	static int32_t t91 = -43368769;

	t91 = ((x377<=(x378%x379))==x380);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x381 = 356814141LL;
	static int16_t x382 = -1380;
	static uint16_t x383 = UINT16_MAX;
	int64_t x384 = INT64_MIN;
	int32_t t92 = -4229305;

	t92 = ((x381<=(x382%x383))==x384);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x387 = INT16_MAX;
	uint16_t x388 = UINT16_MAX;

	t93 = ((x385<=(x386%x387))==x388);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x389 = 60;
	int8_t x390 = 1;
	uint64_t x391 = 195161329654LLU;
	static volatile int32_t x392 = -1;
	int32_t t94 = 1244865;

	t94 = ((x389<=(x390%x391))==x392);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x393 = INT64_MIN;
	int64_t x394 = INT64_MIN;
	volatile int16_t x395 = INT16_MIN;
	int32_t x396 = INT32_MIN;
	int32_t t95 = -56;

	t95 = ((x393<=(x394%x395))==x396);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x398 = 316U;
	uint16_t x399 = 2U;
	uint8_t x400 = 0U;
	static int32_t t96 = -432903028;

	t96 = ((x397<=(x398%x399))==x400);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x401 = -1;
	int16_t x403 = INT16_MIN;
	int64_t x404 = -106706988289LL;
	static int32_t t97 = -187;

	t97 = ((x401<=(x402%x403))==x404);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x405 = UINT64_MAX;
	static int16_t x406 = -15646;
	int8_t x408 = INT8_MAX;

	t98 = ((x405<=(x406%x407))==x408);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x409 = 1U;
	int16_t x410 = INT16_MIN;
	volatile uint32_t x411 = UINT32_MAX;
	volatile int64_t x412 = 7LL;
	int32_t t99 = 109810958;

	t99 = ((x409<=(x410%x411))==x412);

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

