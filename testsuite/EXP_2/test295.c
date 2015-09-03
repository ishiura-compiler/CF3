#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x12 = UINT32_MAX;
uint16_t x13 = UINT16_MAX;
int32_t x14 = -1;
int32_t x18 = -1;
int64_t x25 = 1LL;
int8_t x29 = 0;
int32_t t7 = 1252521;
int32_t t9 = 43764696;
volatile int64_t x51 = -1LL;
static int16_t x52 = 75;
static int64_t x55 = INT64_MAX;
int32_t t13 = 0;
static int32_t x58 = INT32_MIN;
int16_t x59 = -1;
volatile int32_t t16 = -156908;
uint8_t x69 = UINT8_MAX;
static uint16_t x76 = 357U;
volatile uint32_t x78 = 12984U;
volatile int8_t x84 = -1;
int8_t x85 = INT8_MIN;
uint8_t x89 = 84U;
volatile int32_t t22 = -26814;
int16_t x93 = INT16_MIN;
int32_t x100 = INT32_MAX;
int32_t t25 = 820017;
uint16_t x109 = UINT16_MAX;
int8_t x122 = INT8_MIN;
uint64_t x132 = 13522028225LLU;
volatile int8_t x137 = -1;
uint64_t x142 = 15242814214669LLU;
volatile uint64_t x143 = 51LLU;
int16_t x153 = 0;
int8_t x155 = INT8_MAX;
volatile uint32_t x160 = 1210U;
volatile int32_t x162 = 3117;
volatile int32_t t41 = 99496983;
int16_t x174 = INT16_MIN;
int16_t x177 = 0;
int32_t t45 = 0;
static int16_t x195 = INT16_MIN;
volatile uint16_t x197 = UINT16_MAX;
int8_t x199 = 1;
int32_t x204 = -1;
int8_t x212 = INT8_MAX;
int8_t x215 = INT8_MIN;
int32_t t53 = -22070688;
uint64_t x230 = 113244290560154LLU;
static volatile int32_t t54 = -32585;
int64_t x235 = 1LL;
static uint8_t x239 = UINT8_MAX;
uint64_t x241 = UINT64_MAX;
uint64_t x242 = UINT64_MAX;
int16_t x247 = -546;
int32_t x248 = INT32_MAX;
int32_t t58 = -71516908;
int16_t x259 = 4;
int32_t x263 = -1;
static volatile int32_t t61 = 2;
uint16_t x265 = UINT16_MAX;
int16_t x269 = -1022;
int64_t x271 = INT64_MIN;
volatile int64_t x272 = 8308597909071373LL;
volatile int32_t t63 = -145637938;
int16_t x281 = 0;
volatile int8_t x284 = 1;
static uint16_t x294 = 1633U;
uint8_t x295 = 2U;
volatile int32_t t69 = -25233;
int64_t x306 = -1061LL;
volatile int32_t t71 = 128;
int8_t x319 = INT8_MIN;
volatile int8_t x323 = INT8_MAX;
int32_t t73 = 453341;
static int16_t x337 = -1;
static uint64_t x338 = UINT64_MAX;
uint8_t x341 = 1U;
int32_t t77 = -8992;
int8_t x350 = INT8_MAX;
int32_t t79 = -33;
volatile uint16_t x358 = 0U;
int32_t x363 = -1;
volatile int32_t t81 = -44;
int8_t x365 = 6;
volatile int16_t x372 = -1;
int32_t t83 = -2973;
int32_t x378 = -1;
int16_t x381 = -3;
int32_t x397 = -1;
int64_t x402 = INT64_MIN;
uint16_t x409 = UINT16_MAX;
volatile int16_t x411 = -126;
int16_t x412 = -17;
uint8_t x413 = 5U;
uint16_t x419 = 21U;
int16_t x420 = INT16_MIN;
int64_t x422 = 209656789LL;
int16_t x423 = -1;
int16_t x424 = INT16_MIN;
uint8_t x429 = UINT8_MAX;
uint64_t x435 = UINT64_MAX;
volatile int16_t x436 = 126;
static int32_t t98 = 231299;
uint16_t x437 = 2548U;
int32_t t99 = -1918;


void f0(void) {
	static volatile int64_t x1 = -1LL;
	int8_t x2 = -1;
	static volatile int8_t x3 = 1;
	static uint32_t x4 = UINT32_MAX;
	static int32_t t0 = 2215;

	t0 = ((x1<=(x2-x3))<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 1U;
	int8_t x6 = INT8_MIN;
	int32_t x7 = -3;
	int64_t x8 = -1LL;
	static volatile int32_t t1 = 0;

	t1 = ((x5<=(x6-x7))<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint16_t x9 = 26755U;
	int32_t x10 = INT32_MIN;
	int32_t x11 = INT32_MIN;
	static int32_t t2 = -615997413;

	t2 = ((x9<=(x10-x11))<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x15 = 3U;
	volatile int16_t x16 = -1;
	static volatile int32_t t3 = 1;

	t3 = ((x13<=(x14-x15))<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 7928;
	uint32_t x19 = UINT32_MAX;
	static int8_t x20 = -33;
	static int32_t t4 = 9;

	t4 = ((x17<=(x18-x19))<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 31168;
	volatile int32_t x22 = INT32_MAX;
	volatile int32_t x23 = INT32_MAX;
	static int32_t x24 = -1;
	volatile int32_t t5 = -81157350;

	t5 = ((x21<=(x22-x23))<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x26 = 31592U;
	int32_t x27 = INT32_MAX;
	volatile int8_t x28 = 6;
	int32_t t6 = 200;

	t6 = ((x25<=(x26-x27))<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x30 = INT16_MIN;
	int64_t x31 = -1LL;
	int32_t x32 = INT32_MIN;

	t7 = ((x29<=(x30-x31))<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1;
	static uint8_t x34 = 2U;
	int16_t x35 = INT16_MIN;
	int64_t x36 = INT64_MIN;
	int32_t t8 = -16093356;

	t8 = ((x33<=(x34-x35))<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	static volatile int32_t x38 = 48;
	static uint16_t x39 = UINT16_MAX;
	volatile uint64_t x40 = 23602180163899600LLU;

	t9 = ((x37<=(x38-x39))<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = -1LL;
	static int16_t x42 = 461;
	int16_t x43 = INT16_MIN;
	volatile int8_t x44 = -1;
	int32_t t10 = -377;

	t10 = ((x41<=(x42-x43))<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 32159U;
	static uint16_t x46 = UINT16_MAX;
	uint32_t x47 = UINT32_MAX;
	volatile uint32_t x48 = 15U;
	static int32_t t11 = -48349161;

	t11 = ((x45<=(x46-x47))<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x49 = 300596377737LL;
	uint64_t x50 = 1756547604LLU;
	static int32_t t12 = 690976529;

	t12 = ((x49<=(x50-x51))<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	uint8_t x54 = 1U;
	int8_t x56 = -11;

	t13 = ((x53<=(x54-x55))<x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x57 = UINT64_MAX;
	static volatile int8_t x60 = INT8_MIN;
	int32_t t14 = 63;

	t14 = ((x57<=(x58-x59))<x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -704206374LL;
	int16_t x62 = INT16_MIN;
	int32_t x63 = -2956554;
	static volatile uint32_t x64 = 5369534U;
	int32_t t15 = -2;

	t15 = ((x61<=(x62-x63))<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x65 = 15482;
	int8_t x66 = INT8_MIN;
	uint64_t x67 = 5231339441089398071LLU;
	int64_t x68 = INT64_MIN;

	t16 = ((x65<=(x66-x67))<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x70 = -1044;
	static int64_t x71 = INT64_MIN;
	int8_t x72 = INT8_MIN;
	volatile int32_t t17 = -663;

	t17 = ((x69<=(x70-x71))<x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x73 = 281048098U;
	volatile int8_t x74 = INT8_MIN;
	int16_t x75 = -1;
	int32_t t18 = 10675855;

	t18 = ((x73<=(x74-x75))<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x77 = INT16_MIN;
	uint64_t x79 = 5LLU;
	int32_t x80 = INT32_MAX;
	volatile int32_t t19 = 74;

	t19 = ((x77<=(x78-x79))<x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MAX;
	uint64_t x82 = 880LLU;
	uint16_t x83 = 95U;
	volatile int32_t t20 = -595850255;

	t20 = ((x81<=(x82-x83))<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x86 = 30;
	uint64_t x87 = UINT64_MAX;
	int8_t x88 = INT8_MIN;
	volatile int32_t t21 = 7222280;

	t21 = ((x85<=(x86-x87))<x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x90 = INT8_MIN;
	volatile int16_t x91 = -4847;
	int8_t x92 = INT8_MIN;

	t22 = ((x89<=(x90-x91))<x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x94 = 2160145190348195LLU;
	int8_t x95 = INT8_MAX;
	int32_t x96 = -4;
	volatile int32_t t23 = -25732507;

	t23 = ((x93<=(x94-x95))<x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -1LL;
	int16_t x98 = 222;
	volatile int64_t x99 = INT64_MAX;
	int32_t t24 = -136198517;

	t24 = ((x97<=(x98-x99))<x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -260333;
	int8_t x102 = INT8_MAX;
	volatile int16_t x103 = -72;
	volatile uint8_t x104 = 2U;

	t25 = ((x101<=(x102-x103))<x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MAX;
	static int16_t x106 = INT16_MIN;
	int8_t x107 = -1;
	int32_t x108 = INT32_MIN;
	static int32_t t26 = -70236;

	t26 = ((x105<=(x106-x107))<x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x110 = UINT64_MAX;
	int16_t x111 = -27;
	static uint16_t x112 = 0U;
	int32_t t27 = 476479;

	t27 = ((x109<=(x110-x111))<x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	uint8_t x114 = 28U;
	volatile int32_t x115 = INT32_MAX;
	uint64_t x116 = 2247667473LLU;
	int32_t t28 = 1305192;

	t28 = ((x113<=(x114-x115))<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x117 = 52U;
	int16_t x118 = INT16_MAX;
	static uint16_t x119 = 23U;
	static volatile uint16_t x120 = UINT16_MAX;
	volatile int32_t t29 = 11650;

	t29 = ((x117<=(x118-x119))<x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -1LL;
	volatile int64_t x123 = -1LL;
	int64_t x124 = 8LL;
	int32_t t30 = -536742720;

	t30 = ((x121<=(x122-x123))<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MIN;
	int16_t x126 = INT16_MIN;
	uint8_t x127 = UINT8_MAX;
	static int64_t x128 = INT64_MIN;
	volatile int32_t t31 = 0;

	t31 = ((x125<=(x126-x127))<x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x129 = UINT8_MAX;
	int64_t x130 = 340903401LL;
	uint8_t x131 = UINT8_MAX;
	static volatile int32_t t32 = -1;

	t32 = ((x129<=(x130-x131))<x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = UINT64_MAX;
	int32_t x134 = INT32_MIN;
	int8_t x135 = INT8_MIN;
	static volatile int8_t x136 = INT8_MIN;
	volatile int32_t t33 = -10;

	t33 = ((x133<=(x134-x135))<x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x138 = 34LLU;
	uint64_t x139 = 8LLU;
	volatile int32_t x140 = INT32_MAX;
	int32_t t34 = 1934;

	t34 = ((x137<=(x138-x139))<x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = 20LLU;
	int32_t x144 = -1;
	volatile int32_t t35 = -6031;

	t35 = ((x141<=(x142-x143))<x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x145 = INT32_MIN;
	uint32_t x146 = 13U;
	volatile uint64_t x147 = 2463957508076073881LLU;
	uint8_t x148 = 1U;
	volatile int32_t t36 = -26709117;

	t36 = ((x145<=(x146-x147))<x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = 1591417;
	uint8_t x150 = UINT8_MAX;
	int16_t x151 = -45;
	volatile int32_t x152 = -38014;
	int32_t t37 = 3706794;

	t37 = ((x149<=(x150-x151))<x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x154 = INT16_MIN;
	int32_t x156 = -9768050;
	int32_t t38 = -570234;

	t38 = ((x153<=(x154-x155))<x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x157 = 16244236913185561LLU;
	static int8_t x158 = 0;
	int16_t x159 = 0;
	volatile int32_t t39 = 953;

	t39 = ((x157<=(x158-x159))<x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x161 = UINT64_MAX;
	int64_t x163 = -1LL;
	uint32_t x164 = 1109318550U;
	int32_t t40 = 118;

	t40 = ((x161<=(x162-x163))<x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = UINT8_MAX;
	int8_t x166 = INT8_MIN;
	int16_t x167 = INT16_MAX;
	uint64_t x168 = 941055933319LLU;

	t41 = ((x165<=(x166-x167))<x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x173 = -18281352833LL;
	int16_t x175 = INT16_MIN;
	static uint8_t x176 = 0U;
	volatile int32_t t42 = -3;

	t42 = ((x173<=(x174-x175))<x176);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x178 = -1;
	static volatile uint32_t x179 = UINT32_MAX;
	int8_t x180 = INT8_MIN;
	static int32_t t43 = 201;

	t43 = ((x177<=(x178-x179))<x180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x185 = INT32_MIN;
	volatile uint8_t x186 = UINT8_MAX;
	int16_t x187 = INT16_MIN;
	volatile uint8_t x188 = 71U;
	int32_t t44 = 381;

	t44 = ((x185<=(x186-x187))<x188);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x189 = 5U;
	int16_t x190 = INT16_MAX;
	int8_t x191 = 15;
	int16_t x192 = -9;

	t45 = ((x189<=(x190-x191))<x192);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x193 = INT64_MIN;
	static int64_t x194 = -1LL;
	static volatile int64_t x196 = INT64_MIN;
	static volatile int32_t t46 = -582235346;

	t46 = ((x193<=(x194-x195))<x196);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x198 = -15;
	int8_t x200 = INT8_MIN;
	int32_t t47 = -848;

	t47 = ((x197<=(x198-x199))<x200);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x201 = INT8_MIN;
	uint64_t x202 = 5745644466LLU;
	int16_t x203 = INT16_MAX;
	int32_t t48 = 59;

	t48 = ((x201<=(x202-x203))<x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x205 = 1520;
	static int16_t x206 = INT16_MIN;
	int8_t x207 = 1;
	uint8_t x208 = 31U;
	int32_t t49 = 5;

	t49 = ((x205<=(x206-x207))<x208);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x209 = -6;
	volatile int32_t x210 = 123;
	uint16_t x211 = 0U;
	static int32_t t50 = -483;

	t50 = ((x209<=(x210-x211))<x212);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x213 = 1LLU;
	volatile int8_t x214 = INT8_MIN;
	int32_t x216 = INT32_MIN;
	volatile int32_t t51 = -54;

	t51 = ((x213<=(x214-x215))<x216);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x217 = INT64_MIN;
	int32_t x218 = -112410;
	static uint64_t x219 = 8575999LLU;
	int32_t x220 = 490;
	volatile int32_t t52 = 6475;

	t52 = ((x217<=(x218-x219))<x220);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x221 = 22304345LLU;
	static volatile uint32_t x222 = 14964489U;
	volatile int64_t x223 = -17512394LL;
	int32_t x224 = INT32_MIN;

	t53 = ((x221<=(x222-x223))<x224);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x229 = 66U;
	volatile uint64_t x231 = 4060369250LLU;
	int8_t x232 = INT8_MIN;

	t54 = ((x229<=(x230-x231))<x232);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x233 = 1018LLU;
	int32_t x234 = INT32_MIN;
	static int32_t x236 = 4;
	static volatile int32_t t55 = -23;

	t55 = ((x233<=(x234-x235))<x236);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x237 = -1;
	int8_t x238 = -1;
	int32_t x240 = -10430653;
	static int32_t t56 = -28425835;

	t56 = ((x237<=(x238-x239))<x240);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x243 = 23261158686085LL;
	uint16_t x244 = 29711U;
	int32_t t57 = -199899;

	t57 = ((x241<=(x242-x243))<x244);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x245 = -1;
	static int32_t x246 = -174480;

	t58 = ((x245<=(x246-x247))<x248);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x253 = 5824;
	volatile int8_t x254 = -1;
	static int64_t x255 = -2140251577407LL;
	int64_t x256 = -1LL;
	static volatile int32_t t59 = -1878;

	t59 = ((x253<=(x254-x255))<x256);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int8_t x257 = INT8_MIN;
	uint16_t x258 = UINT16_MAX;
	static int32_t x260 = 16629779;
	int32_t t60 = 11878584;

	t60 = ((x257<=(x258-x259))<x260);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x261 = 1264423702U;
	int16_t x262 = -1;
	uint64_t x264 = 246887105140LLU;

	t61 = ((x261<=(x262-x263))<x264);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x266 = -1;
	int8_t x267 = 2;
	volatile int64_t x268 = 33464030466532574LL;
	volatile int32_t t62 = 252397;

	t62 = ((x265<=(x266-x267))<x268);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x270 = -1LL;

	t63 = ((x269<=(x270-x271))<x272);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x277 = -4299;
	int8_t x278 = INT8_MIN;
	volatile int64_t x279 = -1LL;
	volatile int32_t x280 = INT32_MAX;
	static volatile int32_t t64 = 6548;

	t64 = ((x277<=(x278-x279))<x280);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x282 = 37522117U;
	int16_t x283 = -5;
	int32_t t65 = 444190;

	t65 = ((x281<=(x282-x283))<x284);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint8_t x285 = 20U;
	int16_t x286 = INT16_MIN;
	uint8_t x287 = 61U;
	int16_t x288 = INT16_MIN;
	volatile int32_t t66 = -41;

	t66 = ((x285<=(x286-x287))<x288);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x289 = -18940684;
	int16_t x290 = INT16_MAX;
	uint64_t x291 = 16541078538LLU;
	static int16_t x292 = 4038;
	volatile int32_t t67 = 31283769;

	t67 = ((x289<=(x290-x291))<x292);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x293 = UINT16_MAX;
	volatile int32_t x296 = INT32_MIN;
	int32_t t68 = -127;

	t68 = ((x293<=(x294-x295))<x296);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x301 = -1;
	uint64_t x302 = UINT64_MAX;
	int32_t x303 = 36535054;
	int16_t x304 = -218;

	t69 = ((x301<=(x302-x303))<x304);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x305 = UINT16_MAX;
	static volatile int32_t x307 = INT32_MAX;
	uint8_t x308 = 14U;
	int32_t t70 = 603848716;

	t70 = ((x305<=(x306-x307))<x308);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint32_t x309 = 21135455U;
	int64_t x310 = -40037720424LL;
	static int32_t x311 = 189096699;
	static uint64_t x312 = 172689LLU;

	t71 = ((x309<=(x310-x311))<x312);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x317 = INT32_MIN;
	int16_t x318 = INT16_MAX;
	int8_t x320 = -1;
	volatile int32_t t72 = 11225386;

	t72 = ((x317<=(x318-x319))<x320);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x321 = UINT8_MAX;
	int64_t x322 = -1LL;
	uint32_t x324 = UINT32_MAX;

	t73 = ((x321<=(x322-x323))<x324);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x329 = -3;
	int32_t x330 = INT32_MIN;
	int64_t x331 = -36901653749271LL;
	int64_t x332 = INT64_MIN;
	static volatile int32_t t74 = 0;

	t74 = ((x329<=(x330-x331))<x332);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x333 = 2;
	uint32_t x334 = UINT32_MAX;
	int16_t x335 = -8073;
	int64_t x336 = 506553443947143LL;
	volatile int32_t t75 = -117;

	t75 = ((x333<=(x334-x335))<x336);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x339 = INT64_MAX;
	uint64_t x340 = 3913955135796422LLU;
	volatile int32_t t76 = 1895;

	t76 = ((x337<=(x338-x339))<x340);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x342 = 61729U;
	static int8_t x343 = -7;
	static uint32_t x344 = 0U;

	t77 = ((x341<=(x342-x343))<x344);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x349 = -219;
	uint64_t x351 = 5894810201197863876LLU;
	static int16_t x352 = INT16_MIN;
	volatile int32_t t78 = 3842561;

	t78 = ((x349<=(x350-x351))<x352);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x353 = 19U;
	volatile int8_t x354 = 0;
	int32_t x355 = -319;
	volatile int32_t x356 = -1;

	t79 = ((x353<=(x354-x355))<x356);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x357 = -7487;
	int64_t x359 = INT64_MAX;
	static uint16_t x360 = UINT16_MAX;
	volatile int32_t t80 = 4858526;

	t80 = ((x357<=(x358-x359))<x360);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x361 = 3U;
	static int32_t x362 = 107346;
	int16_t x364 = -1;

	t81 = ((x361<=(x362-x363))<x364);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x366 = INT8_MAX;
	uint64_t x367 = UINT64_MAX;
	volatile int8_t x368 = INT8_MIN;
	int32_t t82 = -129716714;

	t82 = ((x365<=(x366-x367))<x368);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x369 = INT8_MIN;
	int32_t x370 = 63576496;
	volatile int16_t x371 = 1700;

	t83 = ((x369<=(x370-x371))<x372);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x373 = INT32_MIN;
	uint32_t x374 = UINT32_MAX;
	int32_t x375 = -1;
	volatile int8_t x376 = INT8_MAX;
	int32_t t84 = 300;

	t84 = ((x373<=(x374-x375))<x376);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x377 = INT16_MIN;
	int8_t x379 = -1;
	int64_t x380 = 890612732LL;
	int32_t t85 = 10267;

	t85 = ((x377<=(x378-x379))<x380);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x382 = INT64_MAX;
	volatile uint8_t x383 = UINT8_MAX;
	uint8_t x384 = UINT8_MAX;
	static int32_t t86 = -138908574;

	t86 = ((x381<=(x382-x383))<x384);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x385 = -13474955;
	uint32_t x386 = UINT32_MAX;
	uint16_t x387 = 41U;
	volatile uint16_t x388 = UINT16_MAX;
	volatile int32_t t87 = -5354235;

	t87 = ((x385<=(x386-x387))<x388);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x393 = 5970142LLU;
	int64_t x394 = INT64_MAX;
	int8_t x395 = INT8_MAX;
	volatile uint16_t x396 = 3239U;
	static int32_t t88 = 5322818;

	t88 = ((x393<=(x394-x395))<x396);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x398 = -1LL;
	static uint32_t x399 = 66U;
	int16_t x400 = INT16_MAX;
	int32_t t89 = -521040;

	t89 = ((x397<=(x398-x399))<x400);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x401 = UINT64_MAX;
	volatile int16_t x403 = -1;
	volatile int32_t x404 = INT32_MIN;
	int32_t t90 = -826247;

	t90 = ((x401<=(x402-x403))<x404);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x405 = UINT8_MAX;
	int64_t x406 = -769088546246433387LL;
	uint64_t x407 = 23LLU;
	static int32_t x408 = -1;
	int32_t t91 = 102;

	t91 = ((x405<=(x406-x407))<x408);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x410 = -43597923427956LL;
	volatile int32_t t92 = 404930;

	t92 = ((x409<=(x410-x411))<x412);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x414 = UINT64_MAX;
	int64_t x415 = -584810128737LL;
	static int64_t x416 = 1LL;
	volatile int32_t t93 = -925;

	t93 = ((x413<=(x414-x415))<x416);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x417 = INT16_MIN;
	volatile uint16_t x418 = 20764U;
	volatile int32_t t94 = 3011;

	t94 = ((x417<=(x418-x419))<x420);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x421 = UINT64_MAX;
	static int32_t t95 = -574351;

	t95 = ((x421<=(x422-x423))<x424);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x425 = 73557927LLU;
	static int32_t x426 = -266165167;
	int16_t x427 = INT16_MIN;
	int64_t x428 = -1LL;
	int32_t t96 = 213357;

	t96 = ((x425<=(x426-x427))<x428);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x430 = INT8_MIN;
	int16_t x431 = -1;
	uint64_t x432 = 1915159967LLU;
	int32_t t97 = 616848;

	t97 = ((x429<=(x430-x431))<x432);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x433 = INT32_MAX;
	volatile int32_t x434 = INT32_MIN;

	t98 = ((x433<=(x434-x435))<x436);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x438 = 8;
	static uint32_t x439 = 2148U;
	int64_t x440 = -1LL;

	t99 = ((x437<=(x438-x439))<x440);

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

