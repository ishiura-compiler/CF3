#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x3 = UINT16_MAX;
static int8_t x20 = INT8_MIN;
int8_t x28 = INT8_MIN;
int8_t x34 = INT8_MIN;
int64_t x36 = 24262697738LL;
static volatile int32_t t7 = 40;
static volatile int32_t x55 = -26621;
uint32_t x65 = UINT32_MAX;
volatile int16_t x72 = INT16_MIN;
volatile int32_t t14 = -2840;
int8_t x74 = 5;
uint8_t x80 = 74U;
int16_t x82 = 2155;
int8_t x83 = 4;
uint64_t x97 = UINT64_MAX;
static uint8_t x98 = 55U;
volatile int32_t t20 = 4348;
int16_t x104 = -10180;
volatile int32_t t21 = -51976423;
int64_t x109 = INT64_MIN;
static uint8_t x111 = 21U;
int32_t t23 = 2981;
int16_t x116 = INT16_MAX;
volatile int8_t x118 = INT8_MIN;
uint32_t x122 = 210U;
static volatile uint32_t x126 = 3596U;
uint16_t x128 = UINT16_MAX;
int32_t x129 = 13511835;
int16_t x131 = INT16_MIN;
static int64_t x132 = INT64_MIN;
volatile uint8_t x135 = 4U;
int32_t x137 = -1;
uint8_t x140 = UINT8_MAX;
int32_t x142 = 65086;
uint8_t x143 = 37U;
uint8_t x147 = UINT8_MAX;
int64_t x153 = INT64_MIN;
int16_t x155 = INT16_MIN;
volatile int32_t t34 = 56934688;
int32_t t35 = 43;
int64_t x168 = INT64_MAX;
volatile int32_t t37 = -4526995;
static uint8_t x175 = UINT8_MAX;
volatile uint16_t x176 = 635U;
int32_t t40 = -48;
volatile int32_t t41 = -25399;
int64_t x185 = -1LL;
static volatile int32_t x189 = INT32_MIN;
uint16_t x191 = 28290U;
volatile int32_t t43 = 375374;
int8_t x194 = INT8_MIN;
int32_t x204 = 372870;
uint8_t x207 = 13U;
volatile int32_t t47 = -80602077;
int16_t x210 = -25;
volatile uint32_t x212 = UINT32_MAX;
volatile int16_t x223 = INT16_MAX;
int64_t x232 = INT64_MIN;
static volatile int8_t x245 = INT8_MIN;
volatile int64_t x247 = -3765602359979762LL;
int32_t t55 = -133787;
int16_t x258 = 4429;
int32_t x265 = INT32_MIN;
static int8_t x269 = INT8_MAX;
static uint32_t x271 = 9636341U;
int8_t x272 = INT8_MIN;
volatile int32_t t58 = -155138294;
volatile uint16_t x273 = UINT16_MAX;
int32_t t59 = 318;
int16_t x277 = -1;
uint8_t x278 = 59U;
int16_t x281 = INT16_MIN;
static volatile int32_t t61 = 0;
int16_t x291 = 2057;
int64_t x293 = 694722687628754LL;
static int32_t x308 = INT32_MIN;
static volatile int32_t t64 = 0;
volatile int16_t x309 = INT16_MIN;
uint32_t x318 = 2895U;
int64_t x322 = 757681LL;
int32_t x329 = INT32_MAX;
uint8_t x331 = 13U;
int16_t x332 = INT16_MIN;
volatile int32_t t70 = -711;
volatile int32_t t72 = -200;
int32_t t75 = -386417;
volatile int16_t x359 = 10;
uint16_t x361 = UINT16_MAX;
uint32_t x367 = 1U;
uint64_t x368 = 254975357LLU;
static uint64_t x370 = 4865834766324165LLU;
int8_t x374 = 0;
int64_t x379 = 64771LL;
uint32_t x387 = 1255051632U;
volatile int32_t t83 = 420632;
uint8_t x393 = 0U;
int64_t x396 = -1LL;
int16_t x402 = -1;
int8_t x404 = -55;
int32_t t87 = 649913729;
int64_t x405 = INT64_MAX;
volatile int32_t t88 = -2554966;
int32_t x422 = 739;
static int64_t x423 = 320977096476759147LL;
volatile int32_t t91 = 1049;
int16_t x427 = INT16_MIN;
int16_t x428 = INT16_MAX;
static volatile int32_t t93 = 783198;
int16_t x435 = INT16_MIN;
static volatile int64_t x444 = INT64_MIN;
int16_t x446 = INT16_MAX;
uint64_t x447 = 425765013910LLU;
static uint16_t x450 = UINT16_MAX;
static int32_t x454 = -1;
int32_t x460 = INT32_MAX;
int32_t t99 = 2071689;


void f0(void) {
	int64_t x1 = -1LL;
	int64_t x2 = -3275137LL;
	int32_t x4 = INT32_MAX;
	volatile int32_t t0 = 37090343;

	t0 = (x1<((x2-x3)<=x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint64_t x5 = 460482299987LLU;
	int16_t x6 = INT16_MIN;
	int32_t x7 = -1;
	static uint64_t x8 = 3532LLU;
	volatile int32_t t1 = 14;

	t1 = (x5<((x6-x7)<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	uint16_t x10 = 1498U;
	static int8_t x11 = -1;
	volatile int16_t x12 = -1;
	int32_t t2 = -5121;

	t2 = (x9<((x10-x11)<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x17 = UINT8_MAX;
	volatile int8_t x18 = -1;
	int8_t x19 = INT8_MIN;
	static volatile int32_t t3 = -27;

	t3 = (x17<((x18-x19)<=x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = -21561086;
	static int16_t x22 = 118;
	volatile int32_t x23 = -1;
	int8_t x24 = INT8_MAX;
	volatile int32_t t4 = 56;

	t4 = (x21<((x22-x23)<=x24));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = -39;
	static uint8_t x26 = UINT8_MAX;
	uint32_t x27 = 1522U;
	int32_t t5 = 742;

	t5 = (x25<((x26-x27)<=x28));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x33 = UINT64_MAX;
	static int8_t x35 = INT8_MIN;
	volatile int32_t t6 = -74319;

	t6 = (x33<((x34-x35)<=x36));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x41 = 7540766410810622LLU;
	uint16_t x42 = UINT16_MAX;
	volatile uint32_t x43 = 28135U;
	static uint32_t x44 = 12U;

	t7 = (x41<((x42-x43)<=x44));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x45 = UINT64_MAX;
	int16_t x46 = -1;
	volatile int8_t x47 = INT8_MIN;
	int64_t x48 = INT64_MAX;
	volatile int32_t t8 = -1;

	t8 = (x45<((x46-x47)<=x48));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x49 = UINT8_MAX;
	int16_t x50 = -1;
	static int8_t x51 = INT8_MIN;
	int16_t x52 = -1;
	int32_t t9 = 3944518;

	t9 = (x49<((x50-x51)<=x52));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x53 = 11393U;
	int8_t x54 = INT8_MIN;
	static int32_t x56 = INT32_MAX;
	static volatile int32_t t10 = -4;

	t10 = (x53<((x54-x55)<=x56));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x57 = 920U;
	int64_t x58 = INT64_MIN;
	uint64_t x59 = 267871976168600707LLU;
	volatile int64_t x60 = INT64_MAX;
	int32_t t11 = 304611825;

	t11 = (x57<((x58-x59)<=x60));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x61 = -18;
	volatile uint32_t x62 = UINT32_MAX;
	static int64_t x63 = -939513667LL;
	static int16_t x64 = INT16_MIN;
	int32_t t12 = -15562318;

	t12 = (x61<((x62-x63)<=x64));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x66 = INT32_MIN;
	int32_t x67 = INT32_MIN;
	int16_t x68 = INT16_MAX;
	static int32_t t13 = 96347;

	t13 = (x65<((x66-x67)<=x68));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x69 = UINT16_MAX;
	int16_t x70 = INT16_MIN;
	volatile int32_t x71 = INT32_MIN;

	t14 = (x69<((x70-x71)<=x72));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x73 = -2LL;
	int64_t x75 = 0LL;
	static int32_t x76 = INT32_MIN;
	int32_t t15 = 81;

	t15 = (x73<((x74-x75)<=x76));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x77 = -5267;
	uint64_t x78 = UINT64_MAX;
	int8_t x79 = 30;
	int32_t t16 = 46782360;

	t16 = (x77<((x78-x79)<=x80));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x81 = UINT16_MAX;
	static uint32_t x84 = UINT32_MAX;
	int32_t t17 = -166932280;

	t17 = (x81<((x82-x83)<=x84));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x89 = 1370U;
	int16_t x90 = 8030;
	static uint32_t x91 = UINT32_MAX;
	volatile int8_t x92 = 1;
	int32_t t18 = 935945700;

	t18 = (x89<((x90-x91)<=x92));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x93 = INT16_MIN;
	int16_t x94 = -1;
	static volatile int16_t x95 = INT16_MIN;
	int16_t x96 = INT16_MAX;
	int32_t t19 = 11825;

	t19 = (x93<((x94-x95)<=x96));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x99 = INT8_MIN;
	static uint8_t x100 = 21U;

	t20 = (x97<((x98-x99)<=x100));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x101 = INT16_MAX;
	volatile int8_t x102 = INT8_MIN;
	uint16_t x103 = UINT16_MAX;

	t21 = (x101<((x102-x103)<=x104));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x105 = INT8_MIN;
	volatile int64_t x106 = 2620LL;
	uint64_t x107 = 503680LLU;
	int8_t x108 = INT8_MAX;
	int32_t t22 = 98493076;

	t22 = (x105<((x106-x107)<=x108));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x110 = UINT64_MAX;
	volatile int16_t x112 = INT16_MIN;

	t23 = (x109<((x110-x111)<=x112));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x113 = 7381249286LL;
	int16_t x114 = 5;
	uint16_t x115 = 2U;
	int32_t t24 = -47;

	t24 = (x113<((x114-x115)<=x116));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x117 = UINT32_MAX;
	uint32_t x119 = 875868311U;
	static volatile uint16_t x120 = UINT16_MAX;
	volatile int32_t t25 = -1578802;

	t25 = (x117<((x118-x119)<=x120));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x121 = UINT32_MAX;
	static int8_t x123 = INT8_MIN;
	int16_t x124 = 5284;
	volatile int32_t t26 = -717739622;

	t26 = (x121<((x122-x123)<=x124));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x125 = -1;
	static volatile uint64_t x127 = 419536LLU;
	int32_t t27 = -2;

	t27 = (x125<((x126-x127)<=x128));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x130 = 0;
	volatile int32_t t28 = -247843772;

	t28 = (x129<((x130-x131)<=x132));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x133 = 72U;
	int16_t x134 = INT16_MIN;
	uint16_t x136 = UINT16_MAX;
	static int32_t t29 = -283326;

	t29 = (x133<((x134-x135)<=x136));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x138 = -1;
	static uint16_t x139 = 7928U;
	int32_t t30 = 107298405;

	t30 = (x137<((x138-x139)<=x140));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x141 = UINT32_MAX;
	int32_t x144 = -1;
	int32_t t31 = 439265155;

	t31 = (x141<((x142-x143)<=x144));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x145 = INT8_MIN;
	static int16_t x146 = INT16_MIN;
	static int32_t x148 = INT32_MIN;
	int32_t t32 = 1968998;

	t32 = (x145<((x146-x147)<=x148));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x149 = -1;
	int8_t x150 = -1;
	uint16_t x151 = 1803U;
	static volatile int8_t x152 = -33;
	int32_t t33 = -4554;

	t33 = (x149<((x150-x151)<=x152));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x154 = UINT32_MAX;
	uint8_t x156 = UINT8_MAX;

	t34 = (x153<((x154-x155)<=x156));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x157 = 15U;
	int16_t x158 = INT16_MIN;
	int32_t x159 = -1;
	int32_t x160 = INT32_MIN;

	t35 = (x157<((x158-x159)<=x160));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x161 = 1746550U;
	uint64_t x162 = UINT64_MAX;
	int64_t x163 = INT64_MIN;
	int32_t x164 = INT32_MIN;
	volatile int32_t t36 = 51883102;

	t36 = (x161<((x162-x163)<=x164));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x165 = -1;
	volatile int64_t x166 = INT64_MAX;
	uint8_t x167 = UINT8_MAX;

	t37 = (x165<((x166-x167)<=x168));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x169 = 0;
	static int8_t x170 = INT8_MIN;
	uint16_t x171 = 1U;
	int64_t x172 = -52LL;
	static int32_t t38 = -125;

	t38 = (x169<((x170-x171)<=x172));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x173 = -30;
	int8_t x174 = -1;
	volatile int32_t t39 = -1;

	t39 = (x173<((x174-x175)<=x176));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x177 = -6;
	uint8_t x178 = 12U;
	volatile uint16_t x179 = 22999U;
	uint8_t x180 = UINT8_MAX;

	t40 = (x177<((x178-x179)<=x180));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x181 = 3055579LLU;
	static int8_t x182 = -1;
	volatile uint32_t x183 = 5543U;
	int32_t x184 = -1;

	t41 = (x181<((x182-x183)<=x184));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x186 = 114015LL;
	volatile int16_t x187 = INT16_MIN;
	volatile int16_t x188 = -15580;
	volatile int32_t t42 = -1004;

	t42 = (x185<((x186-x187)<=x188));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x190 = 0;
	volatile int64_t x192 = -3561432380616198187LL;

	t43 = (x189<((x190-x191)<=x192));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x193 = 20997960U;
	volatile int16_t x195 = INT16_MIN;
	int16_t x196 = INT16_MAX;
	static int32_t t44 = -2163273;

	t44 = (x193<((x194-x195)<=x196));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x197 = INT16_MAX;
	int16_t x198 = 4876;
	int32_t x199 = INT32_MAX;
	int8_t x200 = -14;
	volatile int32_t t45 = -114667652;

	t45 = (x197<((x198-x199)<=x200));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x201 = INT16_MIN;
	int16_t x202 = -1;
	static int64_t x203 = -1LL;
	volatile int32_t t46 = 6205477;

	t46 = (x201<((x202-x203)<=x204));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x205 = 893805404151918LL;
	static int16_t x206 = 612;
	int64_t x208 = INT64_MAX;

	t47 = (x205<((x206-x207)<=x208));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x209 = -1;
	volatile int32_t x211 = 1337913;
	static int32_t t48 = 42079521;

	t48 = (x209<((x210-x211)<=x212));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x213 = INT8_MAX;
	int8_t x214 = INT8_MAX;
	int8_t x215 = 28;
	int64_t x216 = -1582740964515LL;
	int32_t t49 = -7529393;

	t49 = (x213<((x214-x215)<=x216));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x217 = 0;
	uint32_t x218 = UINT32_MAX;
	int8_t x219 = 4;
	uint64_t x220 = UINT64_MAX;
	int32_t t50 = 4609;

	t50 = (x217<((x218-x219)<=x220));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x221 = UINT16_MAX;
	uint64_t x222 = UINT64_MAX;
	int8_t x224 = INT8_MIN;
	int32_t t51 = 201;

	t51 = (x221<((x222-x223)<=x224));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x229 = 2025781U;
	volatile int16_t x230 = -1;
	uint64_t x231 = 3576091735233080LLU;
	int32_t t52 = 58;

	t52 = (x229<((x230-x231)<=x232));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x241 = 2LLU;
	int8_t x242 = -1;
	int16_t x243 = -60;
	uint64_t x244 = UINT64_MAX;
	int32_t t53 = -265706449;

	t53 = (x241<((x242-x243)<=x244));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x246 = INT64_MIN;
	uint64_t x248 = UINT64_MAX;
	static int32_t t54 = -1;

	t54 = (x245<((x246-x247)<=x248));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x249 = INT32_MIN;
	volatile uint16_t x250 = UINT16_MAX;
	uint32_t x251 = UINT32_MAX;
	int32_t x252 = -1;

	t55 = (x249<((x250-x251)<=x252));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x257 = -1;
	int32_t x259 = -1;
	int32_t x260 = -7;
	static volatile int32_t t56 = -50;

	t56 = (x257<((x258-x259)<=x260));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x266 = UINT16_MAX;
	static uint8_t x267 = 126U;
	uint16_t x268 = 461U;
	volatile int32_t t57 = 1;

	t57 = (x265<((x266-x267)<=x268));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x270 = INT32_MIN;

	t58 = (x269<((x270-x271)<=x272));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x274 = INT8_MIN;
	static int64_t x275 = -27613317614LL;
	volatile int16_t x276 = INT16_MIN;

	t59 = (x273<((x274-x275)<=x276));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x279 = -2031169;
	int16_t x280 = -1;
	volatile int32_t t60 = 1852;

	t60 = (x277<((x278-x279)<=x280));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x282 = -1;
	int8_t x283 = -1;
	volatile int16_t x284 = INT16_MAX;

	t61 = (x281<((x282-x283)<=x284));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x289 = -1;
	int16_t x290 = INT16_MIN;
	int16_t x292 = INT16_MIN;
	int32_t t62 = 312;

	t62 = (x289<((x290-x291)<=x292));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x294 = 1842024U;
	int16_t x295 = 1454;
	static uint16_t x296 = UINT16_MAX;
	static int32_t t63 = 26081434;

	t63 = (x293<((x294-x295)<=x296));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x305 = -1;
	volatile uint32_t x306 = 235762U;
	int8_t x307 = INT8_MIN;

	t64 = (x305<((x306-x307)<=x308));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x310 = 2490LLU;
	uint64_t x311 = UINT64_MAX;
	volatile uint64_t x312 = 11LLU;
	volatile int32_t t65 = -64006032;

	t65 = (x309<((x310-x311)<=x312));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x313 = 17618693U;
	uint8_t x314 = 90U;
	volatile int8_t x315 = 37;
	uint32_t x316 = UINT32_MAX;
	int32_t t66 = -7541;

	t66 = (x313<((x314-x315)<=x316));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x317 = 1304560U;
	int32_t x319 = 199709674;
	int8_t x320 = -1;
	volatile int32_t t67 = -244515;

	t67 = (x317<((x318-x319)<=x320));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x321 = INT16_MIN;
	uint32_t x323 = 4158033U;
	uint32_t x324 = 122U;
	int32_t t68 = -1409731;

	t68 = (x321<((x322-x323)<=x324));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x325 = UINT64_MAX;
	uint8_t x326 = UINT8_MAX;
	static uint16_t x327 = 2711U;
	uint64_t x328 = 64661095LLU;
	int32_t t69 = -59678;

	t69 = (x325<((x326-x327)<=x328));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x330 = UINT16_MAX;

	t70 = (x329<((x330-x331)<=x332));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x333 = INT16_MIN;
	int64_t x334 = INT64_MIN;
	int8_t x335 = INT8_MIN;
	volatile uint64_t x336 = 6194432477509LLU;
	int32_t t71 = -513252151;

	t71 = (x333<((x334-x335)<=x336));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x337 = 10216027345LLU;
	int16_t x338 = -1;
	volatile int64_t x339 = INT64_MIN;
	int8_t x340 = 31;

	t72 = (x337<((x338-x339)<=x340));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x341 = 3;
	static int16_t x342 = INT16_MAX;
	volatile int16_t x343 = INT16_MIN;
	int32_t x344 = 255807;
	static int32_t t73 = -91217088;

	t73 = (x341<((x342-x343)<=x344));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x349 = INT16_MIN;
	int8_t x350 = -27;
	uint32_t x351 = 3054666U;
	int64_t x352 = INT64_MAX;
	volatile int32_t t74 = 4215637;

	t74 = (x349<((x350-x351)<=x352));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x353 = 373129;
	int16_t x354 = INT16_MIN;
	volatile int32_t x355 = INT32_MIN;
	uint16_t x356 = UINT16_MAX;

	t75 = (x353<((x354-x355)<=x356));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x357 = INT8_MIN;
	static int16_t x358 = -3677;
	static int16_t x360 = -567;
	static int32_t t76 = 4697;

	t76 = (x357<((x358-x359)<=x360));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x362 = INT64_MAX;
	uint32_t x363 = 0U;
	uint32_t x364 = 0U;
	static int32_t t77 = -55;

	t77 = (x361<((x362-x363)<=x364));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x365 = INT32_MIN;
	int32_t x366 = INT32_MIN;
	volatile int32_t t78 = -785;

	t78 = (x365<((x366-x367)<=x368));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x369 = -1;
	int8_t x371 = -1;
	int32_t x372 = -1;
	int32_t t79 = 56;

	t79 = (x369<((x370-x371)<=x372));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x373 = 13;
	static int8_t x375 = 39;
	static uint64_t x376 = 5279LLU;
	volatile int32_t t80 = 7507323;

	t80 = (x373<((x374-x375)<=x376));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x377 = 248;
	static uint8_t x378 = 12U;
	uint8_t x380 = UINT8_MAX;
	static volatile int32_t t81 = 265226527;

	t81 = (x377<((x378-x379)<=x380));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x381 = INT8_MIN;
	static int16_t x382 = INT16_MAX;
	int8_t x383 = -1;
	static volatile int16_t x384 = -1;
	volatile int32_t t82 = 1;

	t82 = (x381<((x382-x383)<=x384));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x385 = INT8_MIN;
	int64_t x386 = -3LL;
	volatile int32_t x388 = INT32_MIN;

	t83 = (x385<((x386-x387)<=x388));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x389 = -29;
	static uint32_t x390 = UINT32_MAX;
	int16_t x391 = 1;
	static uint32_t x392 = 1U;
	int32_t t84 = 18;

	t84 = (x389<((x390-x391)<=x392));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x394 = 0LLU;
	int64_t x395 = -12960339783401079LL;
	static volatile int32_t t85 = -155096;

	t85 = (x393<((x394-x395)<=x396));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x397 = 0U;
	int32_t x398 = INT32_MAX;
	static volatile int8_t x399 = 1;
	int16_t x400 = INT16_MAX;
	int32_t t86 = 215;

	t86 = (x397<((x398-x399)<=x400));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x401 = UINT32_MAX;
	uint16_t x403 = 1018U;

	t87 = (x401<((x402-x403)<=x404));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x406 = 61;
	int32_t x407 = -1;
	int32_t x408 = INT32_MIN;

	t88 = (x405<((x406-x407)<=x408));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x413 = UINT32_MAX;
	int16_t x414 = INT16_MIN;
	int8_t x415 = -1;
	static uint64_t x416 = UINT64_MAX;
	int32_t t89 = -14388;

	t89 = (x413<((x414-x415)<=x416));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x417 = INT8_MAX;
	int16_t x418 = INT16_MIN;
	uint16_t x419 = 8199U;
	int8_t x420 = -1;
	int32_t t90 = -3;

	t90 = (x417<((x418-x419)<=x420));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x421 = 1U;
	int16_t x424 = INT16_MAX;

	t91 = (x421<((x422-x423)<=x424));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x425 = 116767U;
	volatile uint16_t x426 = UINT16_MAX;
	int32_t t92 = -1;

	t92 = (x425<((x426-x427)<=x428));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x429 = 1U;
	int8_t x430 = -6;
	uint8_t x431 = UINT8_MAX;
	int16_t x432 = -1823;

	t93 = (x429<((x430-x431)<=x432));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x433 = INT8_MIN;
	int64_t x434 = INT64_MIN;
	volatile int16_t x436 = -1;
	static int32_t t94 = -9414962;

	t94 = (x433<((x434-x435)<=x436));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x441 = INT32_MIN;
	uint64_t x442 = UINT64_MAX;
	int8_t x443 = -1;
	int32_t t95 = -387392514;

	t95 = (x441<((x442-x443)<=x444));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x445 = 3850;
	int8_t x448 = INT8_MIN;
	int32_t t96 = 1798;

	t96 = (x445<((x446-x447)<=x448));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x449 = INT64_MIN;
	volatile uint64_t x451 = UINT64_MAX;
	static int64_t x452 = INT64_MIN;
	volatile int32_t t97 = 66143050;

	t97 = (x449<((x450-x451)<=x452));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x453 = 7;
	int8_t x455 = -6;
	uint32_t x456 = UINT32_MAX;
	volatile int32_t t98 = 53596838;

	t98 = (x453<((x454-x455)<=x456));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x457 = -1LL;
	int8_t x458 = -1;
	static volatile uint32_t x459 = 1803798586U;

	t99 = (x457<((x458-x459)<=x460));

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

