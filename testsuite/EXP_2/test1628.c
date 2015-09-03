#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 1770;
int64_t x8 = -1LL;
int64_t t1 = -577918781359599LL;
int8_t x12 = INT8_MAX;
volatile uint16_t x17 = 240U;
static uint16_t x20 = UINT16_MAX;
static int16_t x21 = INT16_MIN;
uint64_t x25 = UINT64_MAX;
int8_t x29 = INT8_MIN;
volatile int64_t t7 = 1291685484751926LL;
int8_t x36 = 0;
int16_t x38 = -1;
uint32_t x40 = UINT32_MAX;
volatile uint32_t t9 = 14803U;
int16_t x48 = 6;
int64_t x49 = -131962986LL;
int64_t x56 = INT64_MIN;
volatile int64_t t14 = INT64_MIN;
static volatile int64_t x67 = 192205559682182LL;
static int32_t x68 = INT32_MAX;
volatile int32_t x73 = -61386342;
volatile int8_t x74 = INT8_MIN;
int32_t t18 = INT32_MIN;
int64_t x81 = 1461LL;
static int16_t x84 = -1;
static uint8_t x86 = UINT8_MAX;
volatile int32_t t21 = -2851;
uint16_t x91 = 63U;
volatile int32_t t24 = -1;
static int8_t x102 = -1;
volatile uint64_t x103 = 73895771LLU;
volatile int32_t t27 = 3300128;
int64_t x119 = INT64_MIN;
static int64_t t29 = 3371LL;
int64_t x123 = -542706LL;
static uint16_t x125 = 16U;
int64_t t32 = 3100987320073175604LL;
int32_t x134 = INT32_MIN;
uint8_t x135 = UINT8_MAX;
static int64_t x138 = INT64_MIN;
volatile int8_t x140 = -1;
int16_t x141 = INT16_MIN;
uint64_t x143 = 1974LLU;
static volatile uint32_t x146 = 79214099U;
static int8_t x148 = INT8_MIN;
int64_t x149 = -1LL;
volatile int16_t x153 = -1;
int64_t x154 = -273049709LL;
int32_t x155 = 26537421;
uint8_t x158 = UINT8_MAX;
uint32_t x159 = 16877U;
static volatile int32_t x161 = INT32_MIN;
uint64_t x162 = 100060LLU;
int8_t x163 = INT8_MIN;
volatile int16_t x179 = INT16_MAX;
static volatile int32_t t44 = -289906;
static int64_t x182 = INT64_MIN;
uint8_t x195 = 5U;
static int32_t x196 = INT32_MIN;
int32_t t48 = INT32_MIN;
int32_t t49 = -4;
volatile uint8_t x203 = UINT8_MAX;
int16_t x207 = INT16_MIN;
int16_t x210 = INT16_MIN;
volatile uint32_t x211 = 1330102U;
int32_t x220 = INT32_MIN;
volatile uint32_t x225 = UINT32_MAX;
static int32_t x228 = -1;
uint32_t x232 = 2715U;
volatile int32_t x234 = INT32_MAX;
int64_t x244 = -59LL;
volatile int64_t t60 = -10052664LL;
int32_t x245 = 20487159;
int64_t x248 = INT64_MIN;
int64_t x253 = INT64_MIN;
uint64_t x257 = UINT64_MAX;
int16_t x258 = 0;
static volatile int64_t x264 = -1LL;
uint64_t x266 = 60107LLU;
volatile int32_t t66 = 107110;
volatile uint16_t x271 = 5734U;
static volatile int32_t t70 = 6;
volatile int32_t t72 = -68029;
int16_t x296 = -1;
volatile int16_t x301 = INT16_MIN;
volatile int64_t x302 = INT64_MIN;
int64_t x303 = -22157871861LL;
int64_t x305 = -7LL;
volatile int32_t t77 = 6338088;
static int64_t x313 = INT64_MAX;
int32_t x314 = INT32_MIN;
int32_t x322 = INT32_MIN;
int64_t x324 = INT64_MIN;
volatile uint16_t x327 = UINT16_MAX;
volatile int32_t t81 = -637;
int32_t t82 = -862;
static int64_t x337 = INT64_MAX;
int32_t t85 = 8;
int16_t x345 = INT16_MIN;
int8_t x350 = INT8_MIN;
static int32_t t87 = 24;
volatile uint32_t x353 = UINT32_MAX;
uint64_t x359 = 24939LLU;
static volatile uint64_t t89 = 2593307LLU;
volatile int32_t x364 = -1;
volatile int8_t x365 = INT8_MIN;
static volatile int64_t x366 = INT64_MIN;
int8_t x369 = INT8_MIN;
int8_t x373 = INT8_MAX;
int8_t x379 = -40;
int8_t x400 = -1;


void f0(void) {
	int16_t x1 = 2;
	static volatile int32_t x2 = INT32_MIN;
	uint16_t x3 = UINT16_MAX;
	int16_t x4 = -1;

	t0 = ((x1<(x2<=x3))*x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = 69773187081LL;
	uint8_t x6 = 3U;
	int64_t x7 = 1LL;

	t1 = ((x5<(x6<=x7))*x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	int64_t x10 = INT64_MIN;
	int8_t x11 = INT8_MIN;
	volatile int32_t t2 = -259;

	t2 = ((x9<(x10<=x11))*x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = INT16_MIN;
	int8_t x14 = -1;
	volatile uint16_t x15 = 2642U;
	int32_t x16 = 451;
	int32_t t3 = -6018;

	t3 = ((x13<(x14<=x15))*x16);

	if (t3 != 451) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = -1;
	static volatile int8_t x19 = INT8_MIN;
	int32_t t4 = -141808175;

	t4 = ((x17<(x18<=x19))*x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x22 = 21U;
	int32_t x23 = 109;
	int64_t x24 = -6197LL;
	volatile int64_t t5 = 1218675403792423LL;

	t5 = ((x21<(x22<=x23))*x24);

	if (t5 != -6197LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x26 = INT64_MIN;
	int8_t x27 = INT8_MIN;
	int32_t x28 = -816111244;
	int32_t t6 = 989160056;

	t6 = ((x25<(x26<=x27))*x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x30 = 2987908U;
	static volatile int8_t x31 = -1;
	static int64_t x32 = -1LL;

	t7 = ((x29<(x30<=x31))*x32);

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x33 = 10;
	int8_t x34 = INT8_MIN;
	volatile uint64_t x35 = UINT64_MAX;
	int32_t t8 = 2496;

	t8 = ((x33<(x34<=x35))*x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = UINT32_MAX;
	int64_t x39 = 4665743906030LL;

	t9 = ((x37<(x38<=x39))*x40);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x41 = 4U;
	int32_t x42 = 44510546;
	int32_t x43 = INT32_MAX;
	int64_t x44 = INT64_MIN;
	volatile int64_t t10 = -22174581343LL;

	t10 = ((x41<(x42<=x43))*x44);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -1;
	uint64_t x46 = 25017839147024960LLU;
	uint8_t x47 = 23U;
	static volatile int32_t t11 = 35;

	t11 = ((x45<(x46<=x47))*x48);

	if (t11 != 6) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = INT64_MIN;
	uint16_t x51 = 4044U;
	static uint32_t x52 = 753940U;
	uint32_t t12 = 860801873U;

	t12 = ((x49<(x50<=x51))*x52);

	if (t12 != 753940U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	int8_t x54 = INT8_MIN;
	volatile int64_t x55 = INT64_MAX;
	volatile int64_t t13 = INT64_MIN;

	t13 = ((x53<(x54<=x55))*x56);

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -1;
	int64_t x58 = -1LL;
	uint64_t x59 = UINT64_MAX;
	int64_t x60 = INT64_MIN;

	t14 = ((x57<(x58<=x59))*x60);

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 1836U;
	static int64_t x62 = INT64_MAX;
	int8_t x63 = INT8_MIN;
	int16_t x64 = INT16_MAX;
	volatile int32_t t15 = -9695752;

	t15 = ((x61<(x62<=x63))*x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x65 = INT16_MIN;
	int32_t x66 = -470;
	int32_t t16 = INT32_MAX;

	t16 = ((x65<(x66<=x67))*x68);

	if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 10U;
	int64_t x70 = 8191525LL;
	volatile int32_t x71 = -432281943;
	static int32_t x72 = INT32_MAX;
	int32_t t17 = -472892;

	t17 = ((x69<(x70<=x71))*x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x75 = UINT32_MAX;
	int32_t x76 = INT32_MIN;

	t18 = ((x73<(x74<=x75))*x76);

	if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	int8_t x78 = INT8_MAX;
	int8_t x79 = INT8_MIN;
	volatile uint16_t x80 = 7U;
	int32_t t19 = 33199424;

	t19 = ((x77<(x78<=x79))*x80);

	if (t19 != 7) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x82 = UINT8_MAX;
	volatile uint32_t x83 = UINT32_MAX;
	int32_t t20 = 1815397;

	t20 = ((x81<(x82<=x83))*x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x85 = INT8_MIN;
	static int64_t x87 = INT64_MAX;
	uint16_t x88 = 882U;

	t21 = ((x85<(x86<=x87))*x88);

	if (t21 != 882) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x89 = UINT32_MAX;
	uint64_t x90 = 2417277924763LLU;
	int64_t x92 = -1LL;
	int64_t t22 = -2545065319282206530LL;

	t22 = ((x89<(x90<=x91))*x92);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = -2;
	uint16_t x94 = UINT16_MAX;
	int64_t x95 = INT64_MIN;
	volatile int32_t x96 = INT32_MAX;
	static volatile int32_t t23 = INT32_MAX;

	t23 = ((x93<(x94<=x95))*x96);

	if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 7U;
	int16_t x98 = INT16_MAX;
	int64_t x99 = -36LL;
	uint8_t x100 = 28U;

	t24 = ((x97<(x98<=x99))*x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = -47;
	uint8_t x104 = 1U;
	int32_t t25 = 115115176;

	t25 = ((x101<(x102<=x103))*x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -1LL;
	int32_t x106 = INT32_MIN;
	int32_t x107 = INT32_MIN;
	int32_t x108 = -1;
	int32_t t26 = 14561769;

	t26 = ((x105<(x106<=x107))*x108);

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MIN;
	static uint16_t x110 = 21444U;
	uint16_t x111 = UINT16_MAX;
	uint8_t x112 = 101U;

	t27 = ((x109<(x110<=x111))*x112);

	if (t27 != 101) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x113 = 12U;
	uint64_t x114 = 790136479289855LLU;
	uint64_t x115 = UINT64_MAX;
	uint16_t x116 = 1233U;
	static int32_t t28 = 79201;

	t28 = ((x113<(x114<=x115))*x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x117 = UINT16_MAX;
	static volatile int16_t x118 = INT16_MIN;
	static volatile int64_t x120 = INT64_MIN;

	t29 = ((x117<(x118<=x119))*x120);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	volatile uint64_t x122 = UINT64_MAX;
	int64_t x124 = -64124LL;
	static int64_t t30 = 1591648LL;

	t30 = ((x121<(x122<=x123))*x124);

	if (t30 != -64124LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x126 = 1288;
	int32_t x127 = -1;
	uint64_t x128 = 101883430LLU;
	uint64_t t31 = 95821LLU;

	t31 = ((x125<(x126<=x127))*x128);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x129 = UINT16_MAX;
	static int32_t x130 = 612;
	int64_t x131 = INT64_MIN;
	int64_t x132 = -3LL;

	t32 = ((x129<(x130<=x131))*x132);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = 452752565LLU;
	int32_t x136 = INT32_MAX;
	int32_t t33 = -11321845;

	t33 = ((x133<(x134<=x135))*x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x137 = INT32_MIN;
	uint64_t x139 = UINT64_MAX;
	int32_t t34 = -70635;

	t34 = ((x137<(x138<=x139))*x140);

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x142 = UINT16_MAX;
	volatile int16_t x144 = INT16_MAX;
	int32_t t35 = 6;

	t35 = ((x141<(x142<=x143))*x144);

	if (t35 != 32767) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MIN;
	uint16_t x147 = UINT16_MAX;
	static volatile int32_t t36 = -31;

	t36 = ((x145<(x146<=x147))*x148);

	if (t36 != -128) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x150 = UINT64_MAX;
	int32_t x151 = INT32_MIN;
	int16_t x152 = 73;
	static volatile int32_t t37 = 16;

	t37 = ((x149<(x150<=x151))*x152);

	if (t37 != 73) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x156 = 5309U;
	volatile int32_t t38 = 1;

	t38 = ((x153<(x154<=x155))*x156);

	if (t38 != 5309) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x157 = -1;
	static uint32_t x160 = 422U;
	volatile uint32_t t39 = 86483U;

	t39 = ((x157<(x158<=x159))*x160);

	if (t39 != 422U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x164 = 8913148LL;
	int64_t t40 = -431978517534857LL;

	t40 = ((x161<(x162<=x163))*x164);

	if (t40 != 8913148LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = -1;
	static volatile int64_t x166 = -1LL;
	uint64_t x167 = 27270878482LLU;
	volatile int32_t x168 = -370;
	int32_t t41 = 954866;

	t41 = ((x165<(x166<=x167))*x168);

	if (t41 != -370) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MAX;
	static int32_t x170 = -1;
	volatile uint16_t x171 = 13U;
	volatile int32_t x172 = INT32_MAX;
	static volatile int32_t t42 = -6;

	t42 = ((x169<(x170<=x171))*x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x173 = INT64_MAX;
	int64_t x174 = INT64_MIN;
	int64_t x175 = -1LL;
	int16_t x176 = 2415;
	static volatile int32_t t43 = 4;

	t43 = ((x173<(x174<=x175))*x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = UINT32_MAX;
	static int16_t x178 = 5537;
	volatile uint16_t x180 = UINT16_MAX;

	t44 = ((x177<(x178<=x179))*x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x181 = -1;
	uint32_t x183 = UINT32_MAX;
	int64_t x184 = INT64_MIN;
	static int64_t t45 = INT64_MIN;

	t45 = ((x181<(x182<=x183))*x184);

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = 4U;
	int32_t x186 = 233065;
	volatile int32_t x187 = 9;
	static volatile int64_t x188 = -1LL;
	int64_t t46 = -660557785LL;

	t46 = ((x185<(x186<=x187))*x188);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = 0U;
	uint64_t x190 = 8267LLU;
	static uint8_t x191 = UINT8_MAX;
	int16_t x192 = INT16_MIN;
	volatile int32_t t47 = -1;

	t47 = ((x189<(x190<=x191))*x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x193 = 0;
	int32_t x194 = INT32_MIN;

	t48 = ((x193<(x194<=x195))*x196);

	if (t48 != INT32_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MAX;
	volatile uint8_t x198 = 7U;
	int16_t x199 = INT16_MIN;
	int8_t x200 = INT8_MIN;

	t49 = ((x197<(x198<=x199))*x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = UINT8_MAX;
	int8_t x202 = -6;
	int16_t x204 = INT16_MIN;
	int32_t t50 = 5;

	t50 = ((x201<(x202<=x203))*x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MAX;
	int32_t x206 = 1191696;
	int32_t x208 = INT32_MIN;
	volatile int32_t t51 = -15102;

	t51 = ((x205<(x206<=x207))*x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MAX;
	int32_t x212 = INT32_MAX;
	static int32_t t52 = -40;

	t52 = ((x209<(x210<=x211))*x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x213 = UINT64_MAX;
	int16_t x214 = -5421;
	static int8_t x215 = 42;
	uint16_t x216 = 1569U;
	int32_t t53 = -9;

	t53 = ((x213<(x214<=x215))*x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	int32_t x218 = -1;
	static uint8_t x219 = 4U;
	int32_t t54 = INT32_MIN;

	t54 = ((x217<(x218<=x219))*x220);

	if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MIN;
	int16_t x222 = -12;
	int8_t x223 = INT8_MIN;
	int32_t x224 = 8;
	volatile int32_t t55 = -33317;

	t55 = ((x221<(x222<=x223))*x224);

	if (t55 != 8) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x226 = UINT8_MAX;
	static volatile uint8_t x227 = 58U;
	volatile int32_t t56 = 3768;

	t56 = ((x225<(x226<=x227))*x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x229 = 1412U;
	int8_t x230 = -1;
	uint8_t x231 = 0U;
	volatile uint32_t t57 = 521956014U;

	t57 = ((x229<(x230<=x231))*x232);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = -7149LL;
	uint32_t x235 = 238614719U;
	static volatile int8_t x236 = -1;
	static int32_t t58 = 115431700;

	t58 = ((x233<(x234<=x235))*x236);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = UINT32_MAX;
	int8_t x238 = 1;
	static int64_t x239 = 11LL;
	int8_t x240 = INT8_MIN;
	int32_t t59 = -1038165014;

	t59 = ((x237<(x238<=x239))*x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x241 = 88U;
	uint64_t x242 = 5927LLU;
	static volatile int16_t x243 = -1;

	t60 = ((x241<(x242<=x243))*x244);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x246 = UINT16_MAX;
	static volatile uint8_t x247 = 1U;
	int64_t t61 = -185LL;

	t61 = ((x245<(x246<=x247))*x248);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = -1759;
	int16_t x250 = INT16_MIN;
	int8_t x251 = -1;
	uint16_t x252 = UINT16_MAX;
	int32_t t62 = 32128450;

	t62 = ((x249<(x250<=x251))*x252);

	if (t62 != 65535) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x254 = 5U;
	static int64_t x255 = -491040147704465983LL;
	uint32_t x256 = UINT32_MAX;
	static uint32_t t63 = UINT32_MAX;

	t63 = ((x253<(x254<=x255))*x256);

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x259 = 943U;
	static uint16_t x260 = 820U;
	volatile int32_t t64 = -1380893;

	t64 = ((x257<(x258<=x259))*x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int16_t x261 = -1;
	static uint16_t x262 = 26U;
	uint8_t x263 = 125U;
	volatile int64_t t65 = 137679316LL;

	t65 = ((x261<(x262<=x263))*x264);

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = 947212394123970LLU;
	uint16_t x267 = UINT16_MAX;
	volatile int32_t x268 = INT32_MIN;

	t66 = ((x265<(x266<=x267))*x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x269 = UINT16_MAX;
	static volatile uint8_t x270 = 127U;
	volatile int8_t x272 = INT8_MIN;
	volatile int32_t t67 = -100088;

	t67 = ((x269<(x270<=x271))*x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x273 = 12U;
	int16_t x274 = -12;
	int32_t x275 = -812294489;
	int16_t x276 = INT16_MAX;
	volatile int32_t t68 = 29;

	t68 = ((x273<(x274<=x275))*x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = INT64_MAX;
	uint16_t x278 = UINT16_MAX;
	static uint64_t x279 = 30115LLU;
	uint32_t x280 = 9639U;
	volatile uint32_t t69 = 14477730U;

	t69 = ((x277<(x278<=x279))*x280);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = 1873U;
	int32_t x282 = -1;
	volatile uint16_t x283 = UINT16_MAX;
	int8_t x284 = INT8_MIN;

	t70 = ((x281<(x282<=x283))*x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x285 = 0;
	volatile uint16_t x286 = 201U;
	volatile int64_t x287 = INT64_MAX;
	uint32_t x288 = 916U;
	static volatile uint32_t t71 = 4599U;

	t71 = ((x285<(x286<=x287))*x288);

	if (t71 != 916U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x289 = 3LLU;
	uint32_t x290 = UINT32_MAX;
	int8_t x291 = INT8_MIN;
	static uint8_t x292 = 26U;

	t72 = ((x289<(x290<=x291))*x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = 27630511U;
	int32_t x294 = 1;
	int64_t x295 = INT64_MAX;
	int32_t t73 = -320482502;

	t73 = ((x293<(x294<=x295))*x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MIN;
	volatile int8_t x298 = -8;
	int32_t x299 = 9803571;
	int32_t x300 = INT32_MIN;
	volatile int32_t t74 = INT32_MIN;

	t74 = ((x297<(x298<=x299))*x300);

	if (t74 != INT32_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x304 = INT8_MIN;
	volatile int32_t t75 = 38451;

	t75 = ((x301<(x302<=x303))*x304);

	if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x306 = -1;
	int8_t x307 = -12;
	int32_t x308 = INT32_MAX;
	static int32_t t76 = INT32_MAX;

	t76 = ((x305<(x306<=x307))*x308);

	if (t76 != INT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x309 = INT16_MAX;
	volatile uint32_t x310 = 139236618U;
	static uint64_t x311 = UINT64_MAX;
	int16_t x312 = 47;

	t77 = ((x309<(x310<=x311))*x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x315 = -1;
	uint16_t x316 = 558U;
	volatile int32_t t78 = 1521993;

	t78 = ((x313<(x314<=x315))*x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x317 = -2;
	int16_t x318 = -15426;
	int16_t x319 = -1;
	volatile int64_t x320 = -1LL;
	volatile int64_t t79 = -56825LL;

	t79 = ((x317<(x318<=x319))*x320);

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = 9932LLU;
	uint8_t x323 = UINT8_MAX;
	volatile int64_t t80 = 14912LL;

	t80 = ((x321<(x322<=x323))*x324);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = UINT8_MAX;
	volatile int32_t x326 = 694;
	int16_t x328 = INT16_MIN;

	t81 = ((x325<(x326<=x327))*x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x329 = 66;
	int16_t x330 = -1;
	int32_t x331 = INT32_MIN;
	int32_t x332 = -3;

	t82 = ((x329<(x330<=x331))*x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x333 = 112558224374695LLU;
	uint64_t x334 = 185LLU;
	static uint64_t x335 = UINT64_MAX;
	uint8_t x336 = 6U;
	static volatile int32_t t83 = 52864935;

	t83 = ((x333<(x334<=x335))*x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x338 = INT16_MIN;
	static uint32_t x339 = 872U;
	uint8_t x340 = 4U;
	int32_t t84 = 482;

	t84 = ((x337<(x338<=x339))*x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MAX;
	int8_t x342 = -2;
	static int32_t x343 = INT32_MIN;
	int16_t x344 = INT16_MIN;

	t85 = ((x341<(x342<=x343))*x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x346 = 9130532726LLU;
	int32_t x347 = INT32_MIN;
	static uint16_t x348 = UINT16_MAX;
	volatile int32_t t86 = 250;

	t86 = ((x345<(x346<=x347))*x348);

	if (t86 != 65535) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = INT64_MAX;
	int32_t x351 = 13;
	uint16_t x352 = UINT16_MAX;

	t87 = ((x349<(x350<=x351))*x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x354 = INT16_MIN;
	uint64_t x355 = UINT64_MAX;
	int16_t x356 = -1;
	volatile int32_t t88 = 1;

	t88 = ((x353<(x354<=x355))*x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = 1001U;
	static int16_t x358 = -1;
	static volatile uint64_t x360 = 10804835810098LLU;

	t89 = ((x357<(x358<=x359))*x360);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MAX;
	int8_t x362 = 0;
	uint32_t x363 = 248754000U;
	int32_t t90 = -1;

	t90 = ((x361<(x362<=x363))*x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x367 = -36LL;
	static volatile int16_t x368 = -26;
	int32_t t91 = 424904;

	t91 = ((x365<(x366<=x367))*x368);

	if (t91 != -26) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x370 = -2547;
	int32_t x371 = INT32_MIN;
	int32_t x372 = 3;
	volatile int32_t t92 = -104480;

	t92 = ((x369<(x370<=x371))*x372);

	if (t92 != 3) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x374 = -13793190994593489LL;
	static volatile int64_t x375 = -580176452310790LL;
	static uint64_t x376 = 2189810804LLU;
	volatile uint64_t t93 = 6171493338980586LLU;

	t93 = ((x373<(x374<=x375))*x376);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x377 = INT8_MAX;
	static volatile int8_t x378 = INT8_MIN;
	int64_t x380 = INT64_MIN;
	int64_t t94 = 1588272117921LL;

	t94 = ((x377<(x378<=x379))*x380);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x381 = 696U;
	int32_t x382 = INT32_MAX;
	volatile uint16_t x383 = UINT16_MAX;
	volatile int8_t x384 = INT8_MIN;
	volatile int32_t t95 = 92;

	t95 = ((x381<(x382<=x383))*x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = 905235339122747LLU;
	static int16_t x386 = INT16_MIN;
	int32_t x387 = INT32_MIN;
	volatile int8_t x388 = INT8_MAX;
	volatile int32_t t96 = -123;

	t96 = ((x385<(x386<=x387))*x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = -1;
	int32_t x390 = -1342790;
	uint8_t x391 = 0U;
	int32_t x392 = 21;
	volatile int32_t t97 = -43337;

	t97 = ((x389<(x390<=x391))*x392);

	if (t97 != 21) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x393 = INT64_MIN;
	uint8_t x394 = 0U;
	volatile int16_t x395 = INT16_MIN;
	int32_t x396 = 422;
	volatile int32_t t98 = -7614;

	t98 = ((x393<(x394<=x395))*x396);

	if (t98 != 422) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = 785U;
	static int16_t x398 = -1;
	volatile int8_t x399 = INT8_MIN;
	int32_t t99 = 160967;

	t99 = ((x397<(x398<=x399))*x400);

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

