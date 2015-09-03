#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t t0 = -657931783LL;
int64_t x7 = -1LL;
static int32_t x8 = 125283;
int8_t x12 = -4;
volatile int32_t t2 = 64425633;
int16_t x16 = 2;
int8_t x17 = INT8_MIN;
int8_t x38 = INT8_MAX;
uint16_t x41 = UINT16_MAX;
volatile int32_t t10 = -314;
int16_t x49 = -4;
static int8_t x55 = INT8_MAX;
volatile int32_t t13 = -182912234;
uint32_t x60 = UINT32_MAX;
int8_t x64 = INT8_MIN;
uint64_t x66 = 447908366434109LLU;
uint64_t x68 = 1613793LLU;
volatile uint16_t x72 = 121U;
uint32_t t17 = 96029765U;
uint64_t x73 = 3LLU;
static int32_t x79 = 0;
static volatile int32_t t19 = -200099;
int32_t t20 = -2704207;
int16_t x96 = INT16_MIN;
int32_t x99 = INT32_MIN;
int32_t x101 = INT32_MIN;
static int8_t x104 = INT8_MAX;
static int8_t x112 = -3;
static int16_t x124 = -1;
int32_t x132 = INT32_MAX;
static int64_t x136 = -1LL;
volatile uint16_t x142 = 1249U;
int8_t x144 = INT8_MIN;
int32_t t34 = 4151;
uint64_t x148 = 13LLU;
volatile uint64_t t35 = 23819802975332540LLU;
volatile int64_t x149 = 2024400107666313357LL;
volatile int64_t t36 = -6212LL;
int64_t x160 = INT64_MAX;
int16_t x166 = INT16_MIN;
static int32_t t38 = 13327;
uint32_t x175 = 349924U;
static int32_t t41 = 3998311;
volatile int8_t x184 = INT8_MIN;
static int32_t t42 = 1273;
static int64_t x189 = -1LL;
int32_t x191 = 42;
uint32_t x192 = 1139133145U;
uint8_t x193 = 11U;
static int32_t x210 = -21931141;
int16_t x216 = INT16_MAX;
volatile int32_t t48 = 74;
uint16_t x226 = 21U;
uint32_t x232 = 39U;
volatile int8_t x234 = INT8_MAX;
uint32_t t53 = 482U;
volatile int32_t x241 = -272092;
volatile int32_t x243 = INT32_MIN;
int32_t t55 = 246;
uint32_t x247 = UINT32_MAX;
uint32_t t56 = 337111613U;
static int8_t x251 = 45;
volatile int8_t x254 = INT8_MIN;
int32_t x255 = 25663047;
int32_t x258 = INT32_MIN;
uint16_t x261 = 1538U;
uint64_t x268 = 2650132241772855412LLU;
uint64_t x271 = UINT64_MAX;
int8_t x272 = -3;
int32_t x273 = INT32_MAX;
int32_t x275 = 3384;
volatile int64_t x278 = INT64_MIN;
uint32_t x279 = UINT32_MAX;
static uint8_t x284 = UINT8_MAX;
int32_t t68 = 14471;
uint32_t x303 = UINT32_MAX;
uint64_t x312 = 39683LLU;
volatile int16_t x316 = -716;
int16_t x328 = INT16_MAX;
static volatile uint64_t t74 = 41619445639LLU;
int32_t x333 = INT32_MIN;
int32_t t77 = -13751;
int16_t x347 = INT16_MIN;
uint64_t x349 = 297385516997036999LLU;
uint32_t x350 = UINT32_MAX;
int32_t x352 = INT32_MIN;
volatile int16_t x353 = 323;
static int8_t x355 = INT8_MIN;
int8_t x356 = INT8_MIN;
static int8_t x366 = INT8_MIN;
int8_t x368 = 15;
uint32_t x370 = 684734U;
int8_t x378 = INT8_MIN;
int64_t x380 = INT64_MAX;
int16_t x389 = INT16_MAX;
uint64_t x399 = UINT64_MAX;
uint64_t t88 = 58990561014556LLU;
volatile int16_t x401 = INT16_MAX;
int32_t x406 = INT32_MAX;
int16_t x408 = INT16_MAX;
static uint64_t t90 = 20647076212771484LLU;
int8_t x411 = INT8_MAX;
uint32_t x412 = 1613U;
uint64_t x414 = 231335437466LLU;
static int16_t x434 = -1993;
volatile int32_t t96 = 501;
int32_t x437 = INT32_MAX;
int16_t x441 = -44;
volatile uint8_t x444 = 11U;
uint16_t x448 = 26082U;


void f0(void) {
	int64_t x1 = 167831722890371105LL;
	int32_t x2 = INT32_MAX;
	volatile int8_t x3 = INT8_MIN;
	int64_t x4 = INT64_MAX;

	t0 = (((x1<x2)&x3)-x4);

	if (t0 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x5 = 1U;
	uint32_t x6 = 1015901516U;
	static int64_t t1 = -244LL;

	t1 = (((x5<x6)&x7)-x8);

	if (t1 != -125282LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 2016U;
	int8_t x10 = 24;
	volatile int8_t x11 = -1;

	t2 = (((x9<x10)&x11)-x12);

	if (t2 != 4) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	static uint16_t x14 = 26U;
	int64_t x15 = INT64_MIN;
	int64_t t3 = 5715908898637LL;

	t3 = (((x13<x14)&x15)-x16);

	if (t3 != -2LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int32_t x18 = 796;
	int32_t x19 = INT32_MIN;
	uint8_t x20 = 5U;
	static int32_t t4 = 200;

	t4 = (((x17<x18)&x19)-x20);

	if (t4 != -5) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	static uint64_t x22 = 5905146392598338LLU;
	static uint32_t x23 = 38541007U;
	static int8_t x24 = -10;
	volatile uint32_t t5 = 4932U;

	t5 = (((x21<x22)&x23)-x24);

	if (t5 != 10U) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 5298U;
	static int32_t x26 = INT32_MIN;
	int32_t x27 = INT32_MIN;
	uint64_t x28 = 17970LLU;
	volatile uint64_t t6 = 126LLU;

	t6 = (((x25<x26)&x27)-x28);

	if (t6 != 18446744073709533646LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = INT64_MIN;
	volatile int8_t x30 = 0;
	int64_t x31 = 328511244LL;
	static int32_t x32 = -1053;
	int64_t t7 = 1917524LL;

	t7 = (((x29<x30)&x31)-x32);

	if (t7 != 1053LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 1U;
	volatile int64_t x34 = INT64_MAX;
	int8_t x35 = -1;
	uint16_t x36 = 403U;
	int32_t t8 = -88185097;

	t8 = (((x33<x34)&x35)-x36);

	if (t8 != -402) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -124932891LL;
	volatile int8_t x39 = INT8_MIN;
	int16_t x40 = -1;
	volatile int32_t t9 = -22;

	t9 = (((x37<x38)&x39)-x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x42 = -1;
	volatile uint8_t x43 = UINT8_MAX;
	int32_t x44 = -7459515;

	t10 = (((x41<x42)&x43)-x44);

	if (t10 != 7459515) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 15134U;
	int8_t x46 = 0;
	int64_t x47 = INT64_MIN;
	int8_t x48 = INT8_MIN;
	int64_t t11 = -51857519373778275LL;

	t11 = (((x45<x46)&x47)-x48);

	if (t11 != 128LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x50 = -1;
	uint16_t x51 = UINT16_MAX;
	int8_t x52 = -1;
	static int32_t t12 = 6;

	t12 = (((x49<x50)&x51)-x52);

	if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -1LL;
	volatile int32_t x54 = INT32_MIN;
	uint8_t x56 = 38U;

	t13 = (((x53<x54)&x55)-x56);

	if (t13 != -38) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 304U;
	static int16_t x58 = -164;
	int8_t x59 = INT8_MIN;
	uint32_t t14 = 5117835U;

	t14 = (((x57<x58)&x59)-x60);

	if (t14 != 1U) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x61 = -1;
	volatile int64_t x62 = INT64_MAX;
	int16_t x63 = INT16_MIN;
	int32_t t15 = -6;

	t15 = (((x61<x62)&x63)-x64);

	if (t15 != 128) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x65 = -1;
	int32_t x67 = INT32_MIN;
	volatile uint64_t t16 = 101318LLU;

	t16 = (((x65<x66)&x67)-x68);

	if (t16 != 18446744073707937823LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x69 = INT32_MIN;
	uint32_t x70 = 82U;
	uint32_t x71 = 56U;

	t17 = (((x69<x70)&x71)-x72);

	if (t17 != 4294967175U) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x74 = UINT64_MAX;
	int16_t x75 = INT16_MAX;
	static volatile int16_t x76 = -54;
	volatile int32_t t18 = 82;

	t18 = (((x73<x74)&x75)-x76);

	if (t18 != 55) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x77 = 207671658798156LL;
	int32_t x78 = INT32_MAX;
	volatile int8_t x80 = 11;

	t19 = (((x77<x78)&x79)-x80);

	if (t19 != -11) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = INT32_MAX;
	static int16_t x86 = 55;
	int16_t x87 = INT16_MIN;
	uint16_t x88 = 8133U;

	t20 = (((x85<x86)&x87)-x88);

	if (t20 != -8133) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x89 = INT32_MIN;
	int32_t x90 = INT32_MIN;
	uint64_t x91 = 1789823653496721216LLU;
	static volatile int64_t x92 = INT64_MIN;
	static uint64_t t21 = 599LLU;

	t21 = (((x89<x90)&x91)-x92);

	if (t21 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x93 = INT16_MAX;
	static uint64_t x94 = UINT64_MAX;
	int8_t x95 = INT8_MIN;
	int32_t t22 = -507675;

	t22 = (((x93<x94)&x95)-x96);

	if (t22 != 32768) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x97 = -1;
	static uint32_t x98 = 51U;
	int16_t x100 = INT16_MAX;
	volatile int32_t t23 = -4050;

	t23 = (((x97<x98)&x99)-x100);

	if (t23 != -32767) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x102 = INT8_MIN;
	int16_t x103 = -1;
	volatile int32_t t24 = 18448;

	t24 = (((x101<x102)&x103)-x104);

	if (t24 != -126) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x105 = 1U;
	int8_t x106 = INT8_MIN;
	uint8_t x107 = UINT8_MAX;
	int8_t x108 = -10;
	volatile int32_t t25 = -6759;

	t25 = (((x105<x106)&x107)-x108);

	if (t25 != 10) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x109 = 6U;
	int16_t x110 = INT16_MIN;
	static int16_t x111 = 25;
	volatile int32_t t26 = -1570442;

	t26 = (((x109<x110)&x111)-x112);

	if (t26 != 3) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x113 = INT8_MIN;
	int16_t x114 = -9;
	int16_t x115 = INT16_MIN;
	uint64_t x116 = 24348380137202455LLU;
	uint64_t t27 = 49776LLU;

	t27 = (((x113<x114)&x115)-x116);

	if (t27 != 18422395693572349161LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x117 = 72074185420151072LLU;
	int16_t x118 = INT16_MIN;
	uint32_t x119 = 1407U;
	static int32_t x120 = INT32_MIN;
	static uint32_t t28 = 1666224U;

	t28 = (((x117<x118)&x119)-x120);

	if (t28 != 2147483649U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x121 = -1;
	int32_t x122 = -2;
	static volatile int64_t x123 = -363164887009228609LL;
	static int64_t t29 = 14489693LL;

	t29 = (((x121<x122)&x123)-x124);

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = INT16_MIN;
	int8_t x126 = INT8_MAX;
	uint16_t x127 = UINT16_MAX;
	int16_t x128 = INT16_MAX;
	volatile int32_t t30 = -39;

	t30 = (((x125<x126)&x127)-x128);

	if (t30 != -32766) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = -1;
	int8_t x130 = -1;
	uint32_t x131 = UINT32_MAX;
	uint32_t t31 = 133931U;

	t31 = (((x129<x130)&x131)-x132);

	if (t31 != 2147483649U) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x133 = INT32_MAX;
	volatile int64_t x134 = 15379325LL;
	int16_t x135 = -1;
	volatile int64_t t32 = 477LL;

	t32 = (((x133<x134)&x135)-x136);

	if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x137 = INT32_MAX;
	static uint16_t x138 = UINT16_MAX;
	uint64_t x139 = 2545880LLU;
	volatile int8_t x140 = INT8_MAX;
	uint64_t t33 = 38794LLU;

	t33 = (((x137<x138)&x139)-x140);

	if (t33 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x141 = 14288U;
	int32_t x143 = INT32_MAX;

	t34 = (((x141<x142)&x143)-x144);

	if (t34 != 128) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x145 = INT16_MIN;
	int64_t x146 = -1LL;
	volatile uint32_t x147 = 7770U;

	t35 = (((x145<x146)&x147)-x148);

	if (t35 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x150 = 2;
	static int64_t x151 = -6482223762857175LL;
	volatile int16_t x152 = INT16_MIN;

	t36 = (((x149<x150)&x151)-x152);

	if (t36 != 32768LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x157 = INT64_MIN;
	int16_t x158 = -1;
	int16_t x159 = INT16_MIN;
	volatile int64_t t37 = -336131541665LL;

	t37 = (((x157<x158)&x159)-x160);

	if (t37 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x165 = -1;
	static volatile uint16_t x167 = 0U;
	int8_t x168 = 12;

	t38 = (((x165<x166)&x167)-x168);

	if (t38 != -12) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x169 = INT32_MIN;
	uint32_t x170 = UINT32_MAX;
	uint16_t x171 = 444U;
	uint8_t x172 = 8U;
	int32_t t39 = 29400973;

	t39 = (((x169<x170)&x171)-x172);

	if (t39 != -8) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x173 = -45056;
	int8_t x174 = INT8_MAX;
	static int16_t x176 = INT16_MIN;
	uint32_t t40 = 1984U;

	t40 = (((x173<x174)&x175)-x176);

	if (t40 != 32768U) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x177 = UINT64_MAX;
	int32_t x178 = INT32_MAX;
	uint16_t x179 = 1575U;
	int32_t x180 = INT32_MAX;

	t41 = (((x177<x178)&x179)-x180);

	if (t41 != -2147483647) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x181 = -13766;
	int32_t x182 = INT32_MAX;
	int8_t x183 = INT8_MIN;

	t42 = (((x181<x182)&x183)-x184);

	if (t42 != 128) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x190 = 1LL;
	static volatile uint32_t t43 = 21U;

	t43 = (((x189<x190)&x191)-x192);

	if (t43 != 3155834151U) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x194 = UINT32_MAX;
	int16_t x195 = INT16_MIN;
	int8_t x196 = INT8_MIN;
	int32_t t44 = 11;

	t44 = (((x193<x194)&x195)-x196);

	if (t44 != 128) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x197 = -616;
	volatile uint8_t x198 = 77U;
	int8_t x199 = 1;
	int8_t x200 = INT8_MIN;
	int32_t t45 = -65278;

	t45 = (((x197<x198)&x199)-x200);

	if (t45 != 129) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x205 = INT32_MAX;
	uint64_t x206 = 375786816LLU;
	uint64_t x207 = 49LLU;
	int16_t x208 = -4;
	volatile uint64_t t46 = 45023550LLU;

	t46 = (((x205<x206)&x207)-x208);

	if (t46 != 4LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x209 = 14528671025LLU;
	uint32_t x211 = 179U;
	uint32_t x212 = 671U;
	uint32_t t47 = 54U;

	t47 = (((x209<x210)&x211)-x212);

	if (t47 != 4294966626U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x213 = 87U;
	static uint32_t x214 = 31875U;
	int8_t x215 = -1;

	t48 = (((x213<x214)&x215)-x216);

	if (t48 != -32766) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x217 = INT32_MAX;
	static volatile uint8_t x218 = 3U;
	uint32_t x219 = 682434U;
	volatile int64_t x220 = -1LL;
	static int64_t t49 = -354110365998918LL;

	t49 = (((x217<x218)&x219)-x220);

	if (t49 != 1LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x221 = UINT64_MAX;
	uint16_t x222 = 1034U;
	static int8_t x223 = -1;
	int64_t x224 = 3322LL;
	int64_t t50 = -5155688770LL;

	t50 = (((x221<x222)&x223)-x224);

	if (t50 != -3322LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x225 = INT64_MAX;
	int16_t x227 = 12;
	uint8_t x228 = UINT8_MAX;
	volatile int32_t t51 = 196814;

	t51 = (((x225<x226)&x227)-x228);

	if (t51 != -255) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x229 = -1;
	volatile int32_t x230 = INT32_MIN;
	uint32_t x231 = 1765U;
	static volatile uint32_t t52 = 25272535U;

	t52 = (((x229<x230)&x231)-x232);

	if (t52 != 4294967257U) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x233 = 23U;
	static uint32_t x235 = 167919585U;
	int16_t x236 = INT16_MIN;

	t53 = (((x233<x234)&x235)-x236);

	if (t53 != 32769U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x237 = 1176;
	uint16_t x238 = UINT16_MAX;
	static uint64_t x239 = UINT64_MAX;
	int64_t x240 = -12288534LL;
	uint64_t t54 = 14634416124238779LLU;

	t54 = (((x237<x238)&x239)-x240);

	if (t54 != 12288535LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x242 = UINT8_MAX;
	int32_t x244 = -1;

	t55 = (((x241<x242)&x243)-x244);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x245 = -3083978;
	static uint32_t x246 = 5U;
	uint8_t x248 = 0U;

	t56 = (((x245<x246)&x247)-x248);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x249 = -9;
	int32_t x250 = -1;
	int64_t x252 = INT64_MAX;
	volatile int64_t t57 = 110466LL;

	t57 = (((x249<x250)&x251)-x252);

	if (t57 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x253 = 1869658;
	static int64_t x256 = -1LL;
	volatile int64_t t58 = -1071421LL;

	t58 = (((x253<x254)&x255)-x256);

	if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x257 = INT32_MIN;
	volatile int64_t x259 = INT64_MIN;
	volatile uint32_t x260 = UINT32_MAX;
	int64_t t59 = -6174LL;

	t59 = (((x257<x258)&x259)-x260);

	if (t59 != -4294967295LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x262 = -18LL;
	int16_t x263 = INT16_MAX;
	int32_t x264 = -1;
	volatile int32_t t60 = 3;

	t60 = (((x261<x262)&x263)-x264);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x265 = 7558710;
	int32_t x266 = -1;
	static int32_t x267 = INT32_MIN;
	volatile uint64_t t61 = 4LLU;

	t61 = (((x265<x266)&x267)-x268);

	if (t61 != 15796611831936696204LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x269 = INT8_MIN;
	int32_t x270 = INT32_MIN;
	uint64_t t62 = 31720597937LLU;

	t62 = (((x269<x270)&x271)-x272);

	if (t62 != 3LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x274 = UINT16_MAX;
	volatile int8_t x276 = -1;
	volatile int32_t t63 = -391781389;

	t63 = (((x273<x274)&x275)-x276);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x277 = INT16_MIN;
	int32_t x280 = -72;
	uint32_t t64 = 103159U;

	t64 = (((x277<x278)&x279)-x280);

	if (t64 != 72U) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x281 = -3;
	static int16_t x282 = 23;
	int32_t x283 = -1;
	int32_t t65 = 93;

	t65 = (((x281<x282)&x283)-x284);

	if (t65 != -254) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x289 = 0U;
	static volatile int16_t x290 = INT16_MAX;
	int8_t x291 = INT8_MAX;
	int8_t x292 = -1;
	volatile int32_t t66 = 1851;

	t66 = (((x289<x290)&x291)-x292);

	if (t66 != 2) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x293 = INT16_MIN;
	int16_t x294 = INT16_MAX;
	uint32_t x295 = 1110U;
	uint8_t x296 = UINT8_MAX;
	static volatile uint32_t t67 = 0U;

	t67 = (((x293<x294)&x295)-x296);

	if (t67 != 4294967041U) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x297 = UINT8_MAX;
	int32_t x298 = INT32_MIN;
	volatile int16_t x299 = INT16_MAX;
	int32_t x300 = -1;

	t68 = (((x297<x298)&x299)-x300);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x301 = INT8_MIN;
	int16_t x302 = INT16_MIN;
	static volatile uint8_t x304 = UINT8_MAX;
	uint32_t t69 = 24062U;

	t69 = (((x301<x302)&x303)-x304);

	if (t69 != 4294967041U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x309 = INT8_MIN;
	uint8_t x310 = 26U;
	volatile int16_t x311 = 959;
	static volatile uint64_t t70 = 18966480289816554LLU;

	t70 = (((x309<x310)&x311)-x312);

	if (t70 != 18446744073709511934LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x313 = 700864U;
	int8_t x314 = -5;
	int32_t x315 = INT32_MAX;
	int32_t t71 = -44459139;

	t71 = (((x313<x314)&x315)-x316);

	if (t71 != 717) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x317 = UINT32_MAX;
	volatile int64_t x318 = INT64_MIN;
	static int16_t x319 = INT16_MIN;
	int32_t x320 = INT32_MAX;
	int32_t t72 = -2728092;

	t72 = (((x317<x318)&x319)-x320);

	if (t72 != -2147483647) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x321 = 0;
	volatile int64_t x322 = INT64_MIN;
	uint8_t x323 = UINT8_MAX;
	static int8_t x324 = INT8_MIN;
	volatile int32_t t73 = -61472;

	t73 = (((x321<x322)&x323)-x324);

	if (t73 != 128) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x325 = 1733009LL;
	int16_t x326 = INT16_MIN;
	uint64_t x327 = 8441781244007LLU;

	t74 = (((x325<x326)&x327)-x328);

	if (t74 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x329 = -1;
	int64_t x330 = 2945162LL;
	uint32_t x331 = UINT32_MAX;
	volatile uint64_t x332 = 252LLU;
	volatile uint64_t t75 = 328484102404324LLU;

	t75 = (((x329<x330)&x331)-x332);

	if (t75 != 18446744073709551365LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x334 = -414;
	volatile int64_t x335 = -19062590427231LL;
	uint16_t x336 = UINT16_MAX;
	int64_t t76 = 1709238336LL;

	t76 = (((x333<x334)&x335)-x336);

	if (t76 != -65534LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x341 = INT64_MAX;
	uint64_t x342 = 128565130LLU;
	uint16_t x343 = UINT16_MAX;
	uint8_t x344 = 33U;

	t77 = (((x341<x342)&x343)-x344);

	if (t77 != -33) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x345 = -3;
	uint8_t x346 = 30U;
	volatile int32_t x348 = INT32_MAX;
	static int32_t t78 = 1042;

	t78 = (((x345<x346)&x347)-x348);

	if (t78 != -2147483647) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x351 = INT64_MAX;
	volatile int64_t t79 = -96893626LL;

	t79 = (((x349<x350)&x351)-x352);

	if (t79 != 2147483648LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x354 = 1270U;
	int32_t t80 = -3;

	t80 = (((x353<x354)&x355)-x356);

	if (t80 != 128) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x365 = INT32_MIN;
	uint64_t x367 = UINT64_MAX;
	volatile uint64_t t81 = 16348890LLU;

	t81 = (((x365<x366)&x367)-x368);

	if (t81 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x369 = -170;
	int8_t x371 = INT8_MIN;
	uint16_t x372 = 1753U;
	volatile int32_t t82 = -1;

	t82 = (((x369<x370)&x371)-x372);

	if (t82 != -1753) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x373 = INT16_MIN;
	int64_t x374 = INT64_MIN;
	int16_t x375 = INT16_MAX;
	uint8_t x376 = 2U;
	volatile int32_t t83 = -2;

	t83 = (((x373<x374)&x375)-x376);

	if (t83 != -2) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x377 = 6091U;
	uint64_t x379 = UINT64_MAX;
	uint64_t t84 = 17509328LLU;

	t84 = (((x377<x378)&x379)-x380);

	if (t84 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x385 = INT8_MIN;
	static int16_t x386 = -209;
	int8_t x387 = -1;
	int32_t x388 = -1;
	volatile int32_t t85 = 9649;

	t85 = (((x385<x386)&x387)-x388);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x390 = 1517;
	uint8_t x391 = 91U;
	int8_t x392 = INT8_MAX;
	static int32_t t86 = -230;

	t86 = (((x389<x390)&x391)-x392);

	if (t86 != -127) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x393 = 67826LLU;
	uint8_t x394 = UINT8_MAX;
	int32_t x395 = INT32_MIN;
	int16_t x396 = INT16_MIN;
	static int32_t t87 = 5582043;

	t87 = (((x393<x394)&x395)-x396);

	if (t87 != 32768) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x397 = INT64_MIN;
	volatile uint64_t x398 = UINT64_MAX;
	int32_t x400 = INT32_MIN;

	t88 = (((x397<x398)&x399)-x400);

	if (t88 != 2147483649LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x402 = 40971190255299029LL;
	uint16_t x403 = UINT16_MAX;
	int16_t x404 = 2;
	int32_t t89 = -863375;

	t89 = (((x401<x402)&x403)-x404);

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x405 = INT32_MAX;
	uint64_t x407 = 25393808768LLU;

	t90 = (((x405<x406)&x407)-x408);

	if (t90 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x409 = INT8_MAX;
	volatile uint16_t x410 = UINT16_MAX;
	static volatile uint32_t t91 = 79074U;

	t91 = (((x409<x410)&x411)-x412);

	if (t91 != 4294965684U) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x413 = UINT16_MAX;
	uint32_t x415 = 61300952U;
	uint64_t x416 = 1LLU;
	uint64_t t92 = UINT64_MAX;

	t92 = (((x413<x414)&x415)-x416);

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x421 = INT8_MAX;
	int32_t x422 = INT32_MAX;
	uint64_t x423 = UINT64_MAX;
	volatile uint64_t x424 = 4LLU;
	uint64_t t93 = 82050876333LLU;

	t93 = (((x421<x422)&x423)-x424);

	if (t93 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x425 = -1;
	int8_t x426 = INT8_MAX;
	uint32_t x427 = UINT32_MAX;
	uint8_t x428 = 13U;
	volatile uint32_t t94 = 2U;

	t94 = (((x425<x426)&x427)-x428);

	if (t94 != 4294967284U) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x429 = INT64_MIN;
	uint64_t x430 = UINT64_MAX;
	volatile int8_t x431 = 47;
	int16_t x432 = INT16_MIN;
	int32_t t95 = -234211654;

	t95 = (((x429<x430)&x431)-x432);

	if (t95 != 32769) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x433 = INT64_MIN;
	int8_t x435 = INT8_MAX;
	uint16_t x436 = UINT16_MAX;

	t96 = (((x433<x434)&x435)-x436);

	if (t96 != -65534) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x438 = 118;
	volatile uint16_t x439 = UINT16_MAX;
	volatile uint64_t x440 = 11LLU;
	volatile uint64_t t97 = 1499788742LLU;

	t97 = (((x437<x438)&x439)-x440);

	if (t97 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x442 = 0U;
	int8_t x443 = -1;
	volatile int32_t t98 = 470;

	t98 = (((x441<x442)&x443)-x444);

	if (t98 != -10) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x445 = 40U;
	uint32_t x446 = 54841U;
	static int32_t x447 = 5800782;
	volatile int32_t t99 = -433126;

	t99 = (((x445<x446)&x447)-x448);

	if (t99 != -26082) { NG(); } else { ; }
	
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

