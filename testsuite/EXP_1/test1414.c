#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 563803;
uint16_t x9 = UINT16_MAX;
static uint8_t x13 = UINT8_MAX;
int32_t x14 = INT32_MAX;
int32_t x18 = 20519612;
static int32_t t4 = 1068;
int32_t x24 = -1;
volatile int32_t x27 = INT32_MIN;
int32_t t7 = -39284;
uint64_t x35 = UINT64_MAX;
volatile int64_t x39 = -1LL;
int32_t x42 = -177069;
int8_t x43 = INT8_MIN;
volatile int32_t x49 = INT32_MIN;
volatile int32_t x51 = -1;
volatile int16_t x52 = INT16_MAX;
int64_t x56 = INT64_MIN;
volatile int32_t t12 = -49852;
volatile uint64_t x58 = UINT64_MAX;
static volatile int16_t x75 = -1;
volatile int32_t t17 = 215593671;
static uint64_t x81 = UINT64_MAX;
static int64_t x82 = INT64_MIN;
int8_t x84 = INT8_MIN;
int64_t x89 = -1LL;
int32_t x92 = INT32_MIN;
int8_t x95 = INT8_MIN;
int32_t x96 = 16088875;
volatile int32_t t22 = 53705;
int8_t x108 = INT8_MAX;
int64_t x113 = -1LL;
volatile int32_t t26 = -668;
static volatile int64_t x129 = INT64_MIN;
uint64_t x130 = 589281LLU;
static volatile int64_t x136 = 31657LL;
uint8_t x142 = 35U;
volatile int32_t t32 = 25580560;
int32_t x147 = -11943937;
volatile int8_t x149 = 28;
volatile int8_t x150 = INT8_MIN;
uint8_t x165 = UINT8_MAX;
int8_t x171 = INT8_MIN;
int32_t x172 = 17;
static int64_t x174 = -1LL;
uint16_t x176 = 681U;
int32_t x183 = INT32_MIN;
volatile uint16_t x184 = 15314U;
uint64_t x185 = UINT64_MAX;
int8_t x186 = INT8_MAX;
volatile int32_t t42 = 16872734;
static uint64_t x189 = 953952LLU;
volatile int8_t x194 = 0;
int64_t x208 = -1LL;
volatile int32_t t47 = 13685895;
int32_t x213 = -1553;
int32_t t50 = 126208329;
int64_t x221 = -1094555763231235LL;
volatile int32_t x223 = -1;
uint32_t x226 = 3546U;
volatile int32_t t52 = -37665;
int64_t x235 = 12LL;
int8_t x236 = 1;
volatile int64_t x244 = -273808464705016LL;
static uint32_t x252 = UINT32_MAX;
int16_t x260 = 205;
static int32_t x269 = INT32_MAX;
int8_t x279 = -1;
int32_t t63 = -630224152;
uint16_t x287 = 32271U;
volatile int64_t x288 = 78567562474137659LL;
int16_t x292 = INT16_MAX;
int32_t x308 = -577926;
static int32_t x309 = INT32_MIN;
volatile uint32_t x310 = 1285U;
int32_t x312 = INT32_MIN;
int64_t x315 = INT64_MIN;
volatile int32_t t72 = 6845094;
uint8_t x318 = 35U;
static uint16_t x319 = 1U;
volatile int16_t x328 = INT16_MIN;
int32_t t75 = 28;
static int32_t x334 = INT32_MIN;
int16_t x342 = -753;
int16_t x343 = INT16_MAX;
volatile int16_t x348 = INT16_MIN;
volatile int32_t t81 = -65183014;
static volatile int8_t x354 = -7;
int64_t x357 = INT64_MIN;
uint64_t x358 = 252287898LLU;
int32_t x363 = INT32_MIN;
static uint8_t x368 = 3U;
int8_t x376 = INT8_MIN;
int64_t x379 = 342191404294670LL;
int32_t x380 = -1;
static int32_t x386 = 3297741;
volatile int16_t x389 = INT16_MAX;
int16_t x399 = INT16_MAX;
static int16_t x404 = -1;
uint32_t x424 = UINT32_MAX;


void f0(void) {
	int64_t x1 = INT64_MAX;
	int32_t x2 = -3185601;
	volatile uint16_t x3 = 15680U;
	static volatile uint32_t x4 = 3673128U;

	t0 = (((x1<x2)%x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x5 = 694U;
	volatile int64_t x6 = INT64_MIN;
	int32_t x7 = 1597618;
	int64_t x8 = INT64_MIN;
	volatile int32_t t1 = -1584390;

	t1 = (((x5<x6)%x7)<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x10 = -1;
	static int8_t x11 = INT8_MIN;
	int32_t x12 = -1;
	static int32_t t2 = 5994254;

	t2 = (((x9<x10)%x11)<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x15 = 95U;
	int32_t x16 = INT32_MIN;
	volatile int32_t t3 = -1948;

	t3 = (((x13<x14)%x15)<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = -1;
	static volatile uint8_t x19 = 61U;
	int32_t x20 = INT32_MIN;

	t4 = (((x17<x18)%x19)<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = 1793;
	volatile uint16_t x22 = 69U;
	uint64_t x23 = 3926704312679412693LLU;
	int32_t t5 = 74504623;

	t5 = (((x21<x22)%x23)<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -5704537039956235LL;
	int16_t x26 = INT16_MIN;
	int32_t x28 = INT32_MIN;
	volatile int32_t t6 = 259661030;

	t6 = (((x25<x26)%x27)<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x29 = INT16_MIN;
	int8_t x30 = -26;
	int16_t x31 = INT16_MAX;
	static int32_t x32 = -1;

	t7 = (((x29<x30)%x31)<=x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	int32_t x34 = 9;
	volatile int16_t x36 = INT16_MIN;
	int32_t t8 = -839;

	t8 = (((x33<x34)%x35)<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -1;
	volatile int32_t x38 = INT32_MIN;
	uint32_t x40 = 655145U;
	int32_t t9 = -55703979;

	t9 = (((x37<x38)%x39)<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 134715166528105086LLU;
	volatile uint16_t x44 = UINT16_MAX;
	static int32_t t10 = 24935;

	t10 = (((x41<x42)%x43)<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int64_t x50 = -1LL;
	int32_t t11 = 24;

	t11 = (((x49<x50)%x51)<=x52);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x53 = UINT32_MAX;
	volatile int8_t x54 = INT8_MIN;
	volatile uint16_t x55 = UINT16_MAX;

	t12 = (((x53<x54)%x55)<=x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x57 = UINT32_MAX;
	volatile uint64_t x59 = 6746634966LLU;
	int32_t x60 = INT32_MIN;
	int32_t t13 = 5;

	t13 = (((x57<x58)%x59)<=x60);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = 51;
	static volatile int64_t x62 = 108LL;
	static int8_t x63 = INT8_MIN;
	volatile int32_t x64 = 0;
	int32_t t14 = -42;

	t14 = (((x61<x62)%x63)<=x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x65 = 120U;
	volatile uint16_t x66 = UINT16_MAX;
	uint32_t x67 = 196955U;
	int32_t x68 = -3038939;
	volatile int32_t t15 = 249;

	t15 = (((x65<x66)%x67)<=x68);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x69 = UINT64_MAX;
	static int8_t x70 = INT8_MIN;
	static int8_t x71 = -1;
	volatile uint16_t x72 = 859U;
	int32_t t16 = 168;

	t16 = (((x69<x70)%x71)<=x72);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = 382LL;
	int32_t x74 = 5221;
	volatile int32_t x76 = INT32_MIN;

	t17 = (((x73<x74)%x75)<=x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x83 = INT64_MIN;
	int32_t t18 = 1;

	t18 = (((x81<x82)%x83)<=x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x85 = 9754LLU;
	uint64_t x86 = 3170322LLU;
	volatile int8_t x87 = -3;
	uint64_t x88 = UINT64_MAX;
	volatile int32_t t19 = 537279029;

	t19 = (((x85<x86)%x87)<=x88);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x90 = -2;
	int16_t x91 = -1;
	int32_t t20 = -34808904;

	t20 = (((x89<x90)%x91)<=x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x93 = 25325815175LL;
	int8_t x94 = INT8_MAX;
	volatile int32_t t21 = -54;

	t21 = (((x93<x94)%x95)<=x96);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x97 = INT32_MIN;
	int32_t x98 = -1;
	volatile int64_t x99 = -495522629261879LL;
	int32_t x100 = INT32_MIN;

	t22 = (((x97<x98)%x99)<=x100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x101 = 1831164307LLU;
	volatile uint32_t x102 = 75427930U;
	uint16_t x103 = 217U;
	uint16_t x104 = 12128U;
	static volatile int32_t t23 = -2835;

	t23 = (((x101<x102)%x103)<=x104);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x105 = -1;
	int64_t x106 = INT64_MIN;
	static volatile int8_t x107 = 4;
	int32_t t24 = -1;

	t24 = (((x105<x106)%x107)<=x108);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x109 = UINT64_MAX;
	volatile int32_t x110 = -53;
	int16_t x111 = 1;
	uint16_t x112 = UINT16_MAX;
	static int32_t t25 = -34195872;

	t25 = (((x109<x110)%x111)<=x112);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x114 = -1;
	int16_t x115 = INT16_MIN;
	static int16_t x116 = INT16_MIN;

	t26 = (((x113<x114)%x115)<=x116);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x117 = -1;
	volatile uint64_t x118 = UINT64_MAX;
	volatile uint16_t x119 = 3272U;
	int8_t x120 = -2;
	int32_t t27 = 175;

	t27 = (((x117<x118)%x119)<=x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x125 = 3U;
	uint8_t x126 = 36U;
	uint8_t x127 = UINT8_MAX;
	int64_t x128 = INT64_MAX;
	static volatile int32_t t28 = 422415764;

	t28 = (((x125<x126)%x127)<=x128);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x131 = INT16_MAX;
	int8_t x132 = -7;
	volatile int32_t t29 = -3;

	t29 = (((x129<x130)%x131)<=x132);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x133 = 6755242680877LL;
	int32_t x134 = INT32_MAX;
	static int8_t x135 = INT8_MIN;
	int32_t t30 = 1;

	t30 = (((x133<x134)%x135)<=x136);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x137 = UINT32_MAX;
	int8_t x138 = -21;
	volatile uint32_t x139 = 313273956U;
	uint8_t x140 = 26U;
	static int32_t t31 = -6;

	t31 = (((x137<x138)%x139)<=x140);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x141 = INT16_MIN;
	int64_t x143 = INT64_MIN;
	uint32_t x144 = 28U;

	t32 = (((x141<x142)%x143)<=x144);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x145 = -1LL;
	int16_t x146 = INT16_MIN;
	uint16_t x148 = UINT16_MAX;
	volatile int32_t t33 = -30766653;

	t33 = (((x145<x146)%x147)<=x148);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x151 = -1LL;
	int64_t x152 = 0LL;
	static volatile int32_t t34 = -61;

	t34 = (((x149<x150)%x151)<=x152);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x153 = INT8_MIN;
	static int8_t x154 = INT8_MIN;
	uint32_t x155 = UINT32_MAX;
	int64_t x156 = 6712602LL;
	int32_t t35 = -527825;

	t35 = (((x153<x154)%x155)<=x156);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x161 = -1;
	int16_t x162 = -3788;
	volatile int8_t x163 = INT8_MAX;
	uint64_t x164 = 419401889536740275LLU;
	volatile int32_t t36 = -1422;

	t36 = (((x161<x162)%x163)<=x164);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x166 = -1;
	int32_t x167 = INT32_MIN;
	volatile int64_t x168 = -664539135LL;
	volatile int32_t t37 = -105;

	t37 = (((x165<x166)%x167)<=x168);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x169 = 2;
	int8_t x170 = INT8_MAX;
	static int32_t t38 = 18;

	t38 = (((x169<x170)%x171)<=x172);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x173 = -1;
	int8_t x175 = -7;
	int32_t t39 = 0;

	t39 = (((x173<x174)%x175)<=x176);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x177 = 7158U;
	volatile int8_t x178 = -6;
	int16_t x179 = INT16_MAX;
	uint32_t x180 = 1644293118U;
	int32_t t40 = -842417193;

	t40 = (((x177<x178)%x179)<=x180);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x181 = UINT16_MAX;
	int64_t x182 = INT64_MIN;
	volatile int32_t t41 = 842902;

	t41 = (((x181<x182)%x183)<=x184);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x187 = 9;
	volatile int8_t x188 = -1;

	t42 = (((x185<x186)%x187)<=x188);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x190 = 29U;
	volatile int8_t x191 = INT8_MIN;
	int64_t x192 = INT64_MAX;
	int32_t t43 = -10957;

	t43 = (((x189<x190)%x191)<=x192);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x193 = 32059679LLU;
	int32_t x195 = INT32_MAX;
	uint16_t x196 = UINT16_MAX;
	int32_t t44 = -25097109;

	t44 = (((x193<x194)%x195)<=x196);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x197 = -7729360544543LL;
	int16_t x198 = -1;
	int16_t x199 = INT16_MAX;
	static uint32_t x200 = 2576196U;
	volatile int32_t t45 = 2135;

	t45 = (((x197<x198)%x199)<=x200);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x201 = -1LL;
	uint16_t x202 = 30084U;
	int64_t x203 = INT64_MAX;
	int64_t x204 = 2233067174415121LL;
	int32_t t46 = -128453;

	t46 = (((x201<x202)%x203)<=x204);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x205 = -36;
	int16_t x206 = INT16_MIN;
	int8_t x207 = -7;

	t47 = (((x205<x206)%x207)<=x208);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x209 = INT8_MIN;
	volatile int8_t x210 = -1;
	int8_t x211 = INT8_MIN;
	uint8_t x212 = 0U;
	static int32_t t48 = 14110;

	t48 = (((x209<x210)%x211)<=x212);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x214 = UINT16_MAX;
	uint32_t x215 = 9204280U;
	volatile uint16_t x216 = UINT16_MAX;
	int32_t t49 = 200;

	t49 = (((x213<x214)%x215)<=x216);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x217 = 6517U;
	static int32_t x218 = INT32_MIN;
	volatile int32_t x219 = INT32_MIN;
	static int16_t x220 = -1;

	t50 = (((x217<x218)%x219)<=x220);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x222 = 7306018;
	int32_t x224 = INT32_MAX;
	static volatile int32_t t51 = -1;

	t51 = (((x221<x222)%x223)<=x224);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x225 = UINT32_MAX;
	static volatile int16_t x227 = 199;
	uint64_t x228 = 13244426082568589LLU;

	t52 = (((x225<x226)%x227)<=x228);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x229 = UINT16_MAX;
	uint16_t x230 = 556U;
	int8_t x231 = 11;
	int32_t x232 = 7;
	int32_t t53 = 8;

	t53 = (((x229<x230)%x231)<=x232);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x233 = -1;
	static int32_t x234 = -411;
	static int32_t t54 = 67321972;

	t54 = (((x233<x234)%x235)<=x236);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x241 = 7456884970649473666LLU;
	uint8_t x242 = UINT8_MAX;
	uint32_t x243 = UINT32_MAX;
	volatile int32_t t55 = 1;

	t55 = (((x241<x242)%x243)<=x244);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x245 = UINT16_MAX;
	int32_t x246 = 549570363;
	uint8_t x247 = 32U;
	int8_t x248 = -35;
	int32_t t56 = -20245048;

	t56 = (((x245<x246)%x247)<=x248);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x249 = -1;
	int32_t x250 = INT32_MAX;
	int16_t x251 = -16085;
	int32_t t57 = -13;

	t57 = (((x249<x250)%x251)<=x252);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x253 = 7U;
	volatile uint16_t x254 = UINT16_MAX;
	static int8_t x255 = -42;
	uint16_t x256 = 41U;
	volatile int32_t t58 = -1;

	t58 = (((x253<x254)%x255)<=x256);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x257 = INT8_MAX;
	int8_t x258 = -1;
	int64_t x259 = INT64_MIN;
	volatile int32_t t59 = -2521174;

	t59 = (((x257<x258)%x259)<=x260);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x261 = INT8_MIN;
	int32_t x262 = INT32_MAX;
	uint32_t x263 = 7U;
	int32_t x264 = 1;
	int32_t t60 = -7;

	t60 = (((x261<x262)%x263)<=x264);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x270 = -1;
	static uint64_t x271 = 1281939LLU;
	static int8_t x272 = -1;
	int32_t t61 = -34;

	t61 = (((x269<x270)%x271)<=x272);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x273 = -1;
	int32_t x274 = 69051;
	static uint16_t x275 = UINT16_MAX;
	int64_t x276 = INT64_MIN;
	int32_t t62 = -400910795;

	t62 = (((x273<x274)%x275)<=x276);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x277 = INT32_MIN;
	uint16_t x278 = 24U;
	uint16_t x280 = 8001U;

	t63 = (((x277<x278)%x279)<=x280);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x281 = INT16_MIN;
	volatile int32_t x282 = INT32_MIN;
	volatile int32_t x283 = INT32_MAX;
	volatile uint8_t x284 = 22U;
	volatile int32_t t64 = -5672;

	t64 = (((x281<x282)%x283)<=x284);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x285 = 5699432233947104LL;
	static int8_t x286 = -1;
	volatile int32_t t65 = 46552;

	t65 = (((x285<x286)%x287)<=x288);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x289 = 0U;
	static int64_t x290 = INT64_MIN;
	int32_t x291 = INT32_MAX;
	int32_t t66 = 252;

	t66 = (((x289<x290)%x291)<=x292);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x293 = INT16_MAX;
	volatile int32_t x294 = INT32_MIN;
	int16_t x295 = INT16_MIN;
	int16_t x296 = INT16_MIN;
	int32_t t67 = -39;

	t67 = (((x293<x294)%x295)<=x296);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x297 = 110019608650550LLU;
	uint16_t x298 = UINT16_MAX;
	volatile uint64_t x299 = 47580LLU;
	static uint8_t x300 = 66U;
	static int32_t t68 = 11533205;

	t68 = (((x297<x298)%x299)<=x300);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x301 = 3467133067113092LLU;
	static uint16_t x302 = 1U;
	int8_t x303 = INT8_MAX;
	int32_t x304 = -12572;
	volatile int32_t t69 = 228973272;

	t69 = (((x301<x302)%x303)<=x304);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x305 = INT64_MAX;
	int32_t x306 = INT32_MIN;
	volatile uint32_t x307 = 215U;
	int32_t t70 = -7111;

	t70 = (((x305<x306)%x307)<=x308);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x311 = INT8_MIN;
	volatile int32_t t71 = 240;

	t71 = (((x309<x310)%x311)<=x312);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x313 = 4LLU;
	uint16_t x314 = 10116U;
	int16_t x316 = INT16_MAX;

	t72 = (((x313<x314)%x315)<=x316);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x317 = INT16_MAX;
	static int8_t x320 = 19;
	volatile int32_t t73 = 415853;

	t73 = (((x317<x318)%x319)<=x320);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x321 = 4;
	volatile int32_t x322 = INT32_MIN;
	int8_t x323 = -3;
	int16_t x324 = INT16_MAX;
	volatile int32_t t74 = -2914;

	t74 = (((x321<x322)%x323)<=x324);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x325 = 8119383495LL;
	static uint64_t x326 = 1043932366594LLU;
	int16_t x327 = INT16_MIN;

	t75 = (((x325<x326)%x327)<=x328);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x329 = INT64_MIN;
	int16_t x330 = 0;
	uint8_t x331 = UINT8_MAX;
	static int32_t x332 = 121;
	int32_t t76 = -98112182;

	t76 = (((x329<x330)%x331)<=x332);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x333 = INT8_MAX;
	uint16_t x335 = 847U;
	volatile int8_t x336 = INT8_MIN;
	static volatile int32_t t77 = -396768;

	t77 = (((x333<x334)%x335)<=x336);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x337 = 707119LLU;
	uint16_t x338 = 5017U;
	int64_t x339 = INT64_MIN;
	int32_t x340 = INT32_MIN;
	volatile int32_t t78 = -3;

	t78 = (((x337<x338)%x339)<=x340);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x341 = INT64_MIN;
	uint8_t x344 = 10U;
	int32_t t79 = -1253600;

	t79 = (((x341<x342)%x343)<=x344);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x345 = UINT8_MAX;
	int16_t x346 = -1;
	uint64_t x347 = 2412LLU;
	static volatile int32_t t80 = 3895123;

	t80 = (((x345<x346)%x347)<=x348);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int8_t x349 = INT8_MIN;
	int8_t x350 = INT8_MIN;
	volatile uint64_t x351 = 1969802464332LLU;
	int32_t x352 = -15652;

	t81 = (((x349<x350)%x351)<=x352);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x353 = 729905884U;
	volatile int16_t x355 = INT16_MIN;
	uint32_t x356 = UINT32_MAX;
	int32_t t82 = -922;

	t82 = (((x353<x354)%x355)<=x356);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x359 = INT32_MIN;
	int8_t x360 = INT8_MIN;
	volatile int32_t t83 = 2;

	t83 = (((x357<x358)%x359)<=x360);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x361 = -1;
	uint64_t x362 = 9748560LLU;
	int32_t x364 = INT32_MAX;
	volatile int32_t t84 = 113550410;

	t84 = (((x361<x362)%x363)<=x364);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x365 = 4U;
	uint64_t x366 = 175097865530702LLU;
	static uint16_t x367 = 4U;
	static volatile int32_t t85 = -389588;

	t85 = (((x365<x366)%x367)<=x368);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x369 = UINT32_MAX;
	static int64_t x370 = INT64_MAX;
	int8_t x371 = -1;
	static uint8_t x372 = 3U;
	static int32_t t86 = 26293355;

	t86 = (((x369<x370)%x371)<=x372);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x373 = -147015623483LL;
	uint16_t x374 = 2U;
	int8_t x375 = INT8_MIN;
	static volatile int32_t t87 = 18253414;

	t87 = (((x373<x374)%x375)<=x376);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x377 = 0;
	int16_t x378 = -1;
	static volatile int32_t t88 = -499584;

	t88 = (((x377<x378)%x379)<=x380);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x381 = 2098442600624LLU;
	uint32_t x382 = 24U;
	uint64_t x383 = UINT64_MAX;
	int64_t x384 = -6098580842978LL;
	int32_t t89 = -5803;

	t89 = (((x381<x382)%x383)<=x384);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x385 = INT64_MIN;
	int32_t x387 = -998185;
	int16_t x388 = -1;
	int32_t t90 = -225250;

	t90 = (((x385<x386)%x387)<=x388);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x390 = 179;
	int8_t x391 = -1;
	int64_t x392 = -1LL;
	volatile int32_t t91 = 23628;

	t91 = (((x389<x390)%x391)<=x392);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x393 = 110501248U;
	static int8_t x394 = -1;
	volatile uint32_t x395 = UINT32_MAX;
	static uint8_t x396 = 42U;
	int32_t t92 = -471559;

	t92 = (((x393<x394)%x395)<=x396);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x397 = UINT8_MAX;
	volatile int32_t x398 = INT32_MIN;
	int8_t x400 = 0;
	static volatile int32_t t93 = 86986306;

	t93 = (((x397<x398)%x399)<=x400);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x401 = INT16_MIN;
	int8_t x402 = -1;
	static int64_t x403 = -5734092217266LL;
	volatile int32_t t94 = 60;

	t94 = (((x401<x402)%x403)<=x404);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x405 = -1;
	int64_t x406 = -1LL;
	static int16_t x407 = INT16_MIN;
	int16_t x408 = 2;
	volatile int32_t t95 = -1901773;

	t95 = (((x405<x406)%x407)<=x408);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x409 = INT8_MAX;
	int16_t x410 = INT16_MIN;
	static int8_t x411 = -1;
	int16_t x412 = -1;
	int32_t t96 = 206525;

	t96 = (((x409<x410)%x411)<=x412);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x413 = -1;
	int8_t x414 = -1;
	int16_t x415 = INT16_MIN;
	int16_t x416 = INT16_MIN;
	static int32_t t97 = 391905;

	t97 = (((x413<x414)%x415)<=x416);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x421 = INT32_MAX;
	volatile int16_t x422 = INT16_MIN;
	int8_t x423 = -3;
	int32_t t98 = 3;

	t98 = (((x421<x422)%x423)<=x424);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x425 = 14;
	static volatile int32_t x426 = INT32_MAX;
	static int16_t x427 = INT16_MIN;
	static int8_t x428 = INT8_MIN;
	volatile int32_t t99 = 42;

	t99 = (((x425<x426)%x427)<=x428);

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

