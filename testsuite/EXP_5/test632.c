#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x3 = INT32_MIN;
uint16_t x5 = 34U;
uint8_t x10 = UINT8_MAX;
uint8_t x11 = 25U;
int16_t x14 = -1;
int32_t x20 = -1;
static int8_t x25 = INT8_MAX;
uint32_t x28 = 2U;
volatile int32_t t8 = -81497655;
int64_t x38 = -11LL;
uint32_t x52 = UINT32_MAX;
static volatile int16_t x55 = INT16_MIN;
int16_t x57 = INT16_MIN;
static volatile int32_t t14 = -109851;
uint32_t x64 = UINT32_MAX;
volatile int8_t x67 = INT8_MIN;
uint8_t x68 = 9U;
volatile int8_t x69 = -1;
int16_t x72 = INT16_MIN;
uint64_t x76 = UINT64_MAX;
volatile int16_t x77 = INT16_MIN;
uint8_t x83 = 105U;
int64_t x85 = -53993088992LL;
uint16_t x87 = UINT16_MAX;
static int8_t x88 = -1;
static int32_t t21 = -5;
int8_t x89 = INT8_MIN;
int64_t x94 = -306LL;
volatile int32_t t25 = -119;
volatile uint8_t x107 = 59U;
uint64_t x110 = UINT64_MAX;
int32_t x111 = -1;
uint16_t x112 = 0U;
int32_t x119 = INT32_MIN;
int16_t x120 = INT16_MIN;
static volatile int32_t t32 = 1;
int32_t x134 = INT32_MIN;
int32_t t33 = 1729;
uint16_t x147 = UINT16_MAX;
int16_t x148 = -1;
int32_t t36 = 1;
static int8_t x150 = INT8_MIN;
static int8_t x163 = INT8_MIN;
uint8_t x166 = 1U;
volatile int32_t t41 = 515;
int64_t x171 = -1LL;
int32_t x172 = INT32_MAX;
static int32_t x174 = -7;
static int64_t x175 = 214LL;
volatile int32_t t43 = -286576;
static volatile int32_t t44 = 1788636;
uint32_t x193 = 15547340U;
int32_t t47 = 568;
volatile uint8_t x207 = 8U;
static volatile int32_t t49 = 366539290;
int64_t x215 = -1391047932351749864LL;
int64_t x217 = INT64_MIN;
int32_t t52 = -202538066;
int32_t t53 = -10903843;
int8_t x228 = INT8_MIN;
uint8_t x235 = UINT8_MAX;
int64_t x238 = -2375381853686LL;
static volatile uint8_t x243 = UINT8_MAX;
volatile int32_t t58 = 0;
int64_t x253 = -1LL;
int64_t x254 = -14430083701LL;
static int64_t x255 = -3688191230LL;
int8_t x256 = 0;
volatile int32_t t61 = -780123;
volatile int32_t t63 = -584;
volatile int32_t t64 = -65848815;
int16_t x271 = 1202;
static int64_t x273 = -1LL;
volatile int32_t t66 = 136;
volatile int8_t x281 = 27;
uint32_t x284 = UINT32_MAX;
int64_t x295 = -1LL;
int32_t x296 = INT32_MIN;
volatile int32_t t71 = 6429975;
int8_t x299 = INT8_MIN;
int8_t x302 = -6;
static int32_t t76 = -9463;
int64_t x322 = INT64_MAX;
volatile int32_t t78 = -857148139;
volatile uint8_t x332 = 1U;
int8_t x337 = INT8_MAX;
static int32_t x338 = -922152;
volatile int32_t t83 = -1;
int64_t x348 = INT64_MIN;
int32_t t84 = -3458998;
int32_t x357 = -3399902;
uint32_t x358 = UINT32_MAX;
volatile int32_t t87 = 185;
static int64_t x369 = INT64_MIN;
static uint8_t x373 = UINT8_MAX;
static int16_t x380 = INT16_MIN;
volatile int32_t t92 = -116400;
static volatile uint64_t x383 = 1369906206086370536LLU;
uint8_t x386 = 0U;
static uint64_t x388 = 13627662694338LLU;
volatile int16_t x391 = INT16_MIN;
int32_t x400 = INT32_MIN;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int8_t x2 = 1;
	volatile int16_t x4 = -1;
	volatile int32_t t0 = -1;

	t0 = (x1==((x2/x3)<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x6 = UINT16_MAX;
	int32_t x7 = -1;
	static volatile int64_t x8 = INT64_MAX;
	static volatile int32_t t1 = 16347;

	t1 = (x5==((x6/x7)<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -10205;
	uint32_t x12 = UINT32_MAX;
	volatile int32_t t2 = 6;

	t2 = (x9==((x10/x11)<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MAX;
	int64_t x15 = -7556LL;
	volatile int8_t x16 = -16;
	static volatile int32_t t3 = 27470163;

	t3 = (x13==((x14/x15)<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x17 = 24842985346LLU;
	volatile uint64_t x18 = 2284LLU;
	static volatile int32_t x19 = INT32_MIN;
	int32_t t4 = -1;

	t4 = (x17==((x18/x19)<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	volatile int8_t x22 = INT8_MIN;
	uint64_t x23 = 12570466093035646LLU;
	static volatile int64_t x24 = 0LL;
	int32_t t5 = 27709224;

	t5 = (x21==((x22/x23)<=x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = INT8_MIN;
	int64_t x27 = -1LL;
	int32_t t6 = -29756133;

	t6 = (x25==((x26/x27)<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	int16_t x30 = INT16_MAX;
	int64_t x31 = INT64_MIN;
	volatile uint8_t x32 = 80U;
	static volatile int32_t t7 = 7;

	t7 = (x29==((x30/x31)<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x33 = 18U;
	volatile int8_t x34 = INT8_MIN;
	uint64_t x35 = UINT64_MAX;
	volatile uint64_t x36 = 21246162308487790LLU;

	t8 = (x33==((x34/x35)<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = 1773890;
	int16_t x39 = INT16_MAX;
	uint8_t x40 = UINT8_MAX;
	int32_t t9 = 74;

	t9 = (x37==((x38/x39)<=x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 617U;
	static volatile uint8_t x42 = 12U;
	uint64_t x43 = 3104668158193LLU;
	static int16_t x44 = -1;
	volatile int32_t t10 = -12817;

	t10 = (x41==((x42/x43)<=x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x45 = 207750U;
	volatile int16_t x46 = INT16_MIN;
	int8_t x47 = INT8_MIN;
	int16_t x48 = 127;
	volatile int32_t t11 = -1;

	t11 = (x45==((x46/x47)<=x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	static uint32_t x50 = UINT32_MAX;
	uint64_t x51 = 309511726657645927LLU;
	int32_t t12 = 757994343;

	t12 = (x49==((x50/x51)<=x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -1;
	static uint32_t x54 = UINT32_MAX;
	volatile uint8_t x56 = 8U;
	volatile int32_t t13 = 3935;

	t13 = (x53==((x54/x55)<=x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x58 = 7U;
	int8_t x59 = INT8_MIN;
	uint16_t x60 = UINT16_MAX;

	t14 = (x57==((x58/x59)<=x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x61 = 41U;
	uint8_t x62 = 2U;
	static int16_t x63 = -1;
	static int32_t t15 = 403926;

	t15 = (x61==((x62/x63)<=x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	uint64_t x66 = UINT64_MAX;
	volatile int32_t t16 = 7298398;

	t16 = (x65==((x66/x67)<=x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x70 = 6;
	uint64_t x71 = UINT64_MAX;
	volatile int32_t t17 = -486054;

	t17 = (x69==((x70/x71)<=x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x73 = -1;
	uint64_t x74 = UINT64_MAX;
	int32_t x75 = -1;
	volatile int32_t t18 = 106913;

	t18 = (x73==((x74/x75)<=x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x78 = INT8_MAX;
	static int16_t x79 = INT16_MIN;
	int32_t x80 = INT32_MAX;
	volatile int32_t t19 = 5817796;

	t19 = (x77==((x78/x79)<=x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MIN;
	int64_t x82 = INT64_MIN;
	int8_t x84 = 8;
	static volatile int32_t t20 = -22255632;

	t20 = (x81==((x82/x83)<=x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x86 = -1;

	t21 = (x85==((x86/x87)<=x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x90 = 208LLU;
	int16_t x91 = 46;
	int8_t x92 = INT8_MAX;
	int32_t t22 = -166527103;

	t22 = (x89==((x90/x91)<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x93 = -17LL;
	int32_t x95 = INT32_MAX;
	int32_t x96 = 0;
	volatile int32_t t23 = 237;

	t23 = (x93==((x94/x95)<=x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -1LL;
	volatile int64_t x98 = INT64_MAX;
	volatile int16_t x99 = INT16_MIN;
	int64_t x100 = INT64_MIN;
	volatile int32_t t24 = 199387;

	t24 = (x97==((x98/x99)<=x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x101 = INT8_MAX;
	uint32_t x102 = 7959989U;
	uint16_t x103 = 16071U;
	int8_t x104 = INT8_MIN;

	t25 = (x101==((x102/x103)<=x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MAX;
	static volatile int64_t x106 = 792319612964LL;
	uint16_t x108 = UINT16_MAX;
	volatile int32_t t26 = -28;

	t26 = (x105==((x106/x107)<=x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = -1;
	int32_t t27 = -36;

	t27 = (x109==((x110/x111)<=x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	int64_t x114 = 1111602639LL;
	int32_t x115 = INT32_MIN;
	static int32_t x116 = -1;
	int32_t t28 = -16079373;

	t28 = (x113==((x114/x115)<=x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = 170112191U;
	volatile int32_t x118 = -118180;
	volatile int32_t t29 = -225;

	t29 = (x117==((x118/x119)<=x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x121 = 10196LL;
	volatile int8_t x122 = -1;
	static int32_t x123 = INT32_MIN;
	int64_t x124 = INT64_MAX;
	volatile int32_t t30 = -56767;

	t30 = (x121==((x122/x123)<=x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = 121091352873LLU;
	volatile int8_t x126 = INT8_MIN;
	uint8_t x127 = UINT8_MAX;
	int8_t x128 = INT8_MIN;
	int32_t t31 = -5;

	t31 = (x125==((x126/x127)<=x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 48374315654541LLU;
	uint8_t x130 = 4U;
	int16_t x131 = INT16_MAX;
	uint16_t x132 = UINT16_MAX;

	t32 = (x129==((x130/x131)<=x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x133 = -1;
	int64_t x135 = INT64_MIN;
	int8_t x136 = -1;

	t33 = (x133==((x134/x135)<=x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MIN;
	int16_t x138 = INT16_MIN;
	int64_t x139 = 4317642407316545LL;
	uint32_t x140 = UINT32_MAX;
	volatile int32_t t34 = 1523445;

	t34 = (x137==((x138/x139)<=x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MIN;
	uint8_t x142 = 78U;
	static volatile int16_t x143 = INT16_MIN;
	volatile uint8_t x144 = 3U;
	int32_t t35 = -12;

	t35 = (x141==((x142/x143)<=x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MIN;
	volatile int16_t x146 = INT16_MIN;

	t36 = (x145==((x146/x147)<=x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MIN;
	static int16_t x151 = 7;
	int32_t x152 = INT32_MIN;
	int32_t t37 = 337359;

	t37 = (x149==((x150/x151)<=x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = -1;
	int32_t x154 = INT32_MIN;
	volatile int16_t x155 = 3;
	volatile int64_t x156 = INT64_MAX;
	int32_t t38 = 7004537;

	t38 = (x153==((x154/x155)<=x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x157 = 1;
	uint64_t x158 = UINT64_MAX;
	uint16_t x159 = UINT16_MAX;
	uint8_t x160 = 1U;
	volatile int32_t t39 = -213;

	t39 = (x157==((x158/x159)<=x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x161 = INT16_MAX;
	int32_t x162 = -166;
	int64_t x164 = 13387971902LL;
	static volatile int32_t t40 = 554007966;

	t40 = (x161==((x162/x163)<=x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -327746316LL;
	volatile int64_t x167 = INT64_MAX;
	static int8_t x168 = INT8_MIN;

	t41 = (x165==((x166/x167)<=x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MAX;
	uint32_t x170 = UINT32_MAX;
	int32_t t42 = 107;

	t42 = (x169==((x170/x171)<=x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x173 = INT8_MIN;
	int64_t x176 = INT64_MAX;

	t43 = (x173==((x174/x175)<=x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x181 = -260915295621753LL;
	uint8_t x182 = UINT8_MAX;
	static int8_t x183 = -1;
	volatile int64_t x184 = 3327LL;

	t44 = (x181==((x182/x183)<=x184));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x185 = 50U;
	volatile uint8_t x186 = 4U;
	uint64_t x187 = 109959LLU;
	int8_t x188 = INT8_MIN;
	static int32_t t45 = -2;

	t45 = (x185==((x186/x187)<=x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x189 = UINT16_MAX;
	int8_t x190 = INT8_MIN;
	int16_t x191 = 204;
	static volatile int32_t x192 = INT32_MIN;
	volatile int32_t t46 = -12;

	t46 = (x189==((x190/x191)<=x192));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x194 = 0U;
	int16_t x195 = INT16_MAX;
	static volatile uint64_t x196 = UINT64_MAX;

	t47 = (x193==((x194/x195)<=x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x201 = 62U;
	volatile uint8_t x202 = UINT8_MAX;
	int8_t x203 = INT8_MIN;
	static uint64_t x204 = UINT64_MAX;
	int32_t t48 = 3627;

	t48 = (x201==((x202/x203)<=x204));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x205 = INT32_MAX;
	static int8_t x206 = INT8_MIN;
	int64_t x208 = -1LL;

	t49 = (x205==((x206/x207)<=x208));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x209 = -1LL;
	int64_t x210 = INT64_MIN;
	int8_t x211 = INT8_MAX;
	int64_t x212 = INT64_MIN;
	int32_t t50 = -959172893;

	t50 = (x209==((x210/x211)<=x212));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x213 = -35376262833LL;
	int16_t x214 = 3;
	static int32_t x216 = -795872;
	int32_t t51 = 416;

	t51 = (x213==((x214/x215)<=x216));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x218 = 5U;
	static int8_t x219 = INT8_MIN;
	uint16_t x220 = 3404U;

	t52 = (x217==((x218/x219)<=x220));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x221 = 353;
	int64_t x222 = -1LL;
	uint16_t x223 = UINT16_MAX;
	int64_t x224 = INT64_MIN;

	t53 = (x221==((x222/x223)<=x224));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x225 = INT16_MAX;
	static volatile int8_t x226 = INT8_MIN;
	volatile uint32_t x227 = 787711U;
	static int32_t t54 = 3267;

	t54 = (x225==((x226/x227)<=x228));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x229 = UINT32_MAX;
	int8_t x230 = -1;
	uint64_t x231 = UINT64_MAX;
	uint8_t x232 = UINT8_MAX;
	volatile int32_t t55 = 228628;

	t55 = (x229==((x230/x231)<=x232));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x233 = 175U;
	static uint8_t x234 = 0U;
	volatile int64_t x236 = INT64_MIN;
	int32_t t56 = -45218;

	t56 = (x233==((x234/x235)<=x236));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x237 = UINT16_MAX;
	volatile int8_t x239 = INT8_MIN;
	uint8_t x240 = 41U;
	volatile int32_t t57 = -52;

	t57 = (x237==((x238/x239)<=x240));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x241 = -1LL;
	static volatile int16_t x242 = INT16_MIN;
	uint64_t x244 = UINT64_MAX;

	t58 = (x241==((x242/x243)<=x244));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x245 = 0U;
	int64_t x246 = -1LL;
	int64_t x247 = INT64_MIN;
	volatile int8_t x248 = -1;
	int32_t t59 = -234681;

	t59 = (x245==((x246/x247)<=x248));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x249 = 140U;
	volatile uint64_t x250 = 110823550359778LLU;
	int64_t x251 = -1LL;
	static int64_t x252 = -911615529773350LL;
	volatile int32_t t60 = -55301;

	t60 = (x249==((x250/x251)<=x252));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {


	t61 = (x253==((x254/x255)<=x256));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x257 = 3884;
	int8_t x258 = INT8_MAX;
	static int64_t x259 = -2379976403LL;
	int16_t x260 = INT16_MIN;
	static int32_t t62 = 0;

	t62 = (x257==((x258/x259)<=x260));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x261 = 2U;
	uint64_t x262 = UINT64_MAX;
	uint16_t x263 = 500U;
	static int16_t x264 = INT16_MIN;

	t63 = (x261==((x262/x263)<=x264));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x265 = INT32_MAX;
	int16_t x266 = INT16_MAX;
	int8_t x267 = -1;
	static int16_t x268 = -1;

	t64 = (x265==((x266/x267)<=x268));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x269 = UINT8_MAX;
	int32_t x270 = INT32_MIN;
	int16_t x272 = -1;
	int32_t t65 = -8328074;

	t65 = (x269==((x270/x271)<=x272));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x274 = 106428LLU;
	int8_t x275 = -1;
	volatile int32_t x276 = -282857;

	t66 = (x273==((x274/x275)<=x276));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x277 = INT32_MIN;
	int16_t x278 = -1;
	int64_t x279 = INT64_MIN;
	static volatile int8_t x280 = 0;
	int32_t t67 = 1;

	t67 = (x277==((x278/x279)<=x280));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x282 = UINT64_MAX;
	uint32_t x283 = 791298U;
	int32_t t68 = -685325140;

	t68 = (x281==((x282/x283)<=x284));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x285 = -66017738;
	int64_t x286 = INT64_MAX;
	static uint64_t x287 = 17180411834LLU;
	int32_t x288 = -1373649;
	int32_t t69 = 886577;

	t69 = (x285==((x286/x287)<=x288));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x289 = INT32_MIN;
	volatile int32_t x290 = -31891152;
	volatile int16_t x291 = -1;
	uint16_t x292 = 6979U;
	volatile int32_t t70 = -1;

	t70 = (x289==((x290/x291)<=x292));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x293 = -1;
	static int16_t x294 = INT16_MAX;

	t71 = (x293==((x294/x295)<=x296));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x297 = 60U;
	static volatile int16_t x298 = -1;
	int8_t x300 = INT8_MIN;
	int32_t t72 = 135;

	t72 = (x297==((x298/x299)<=x300));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x301 = INT32_MIN;
	uint8_t x303 = UINT8_MAX;
	uint64_t x304 = 5422180951LLU;
	volatile int32_t t73 = -1069142612;

	t73 = (x301==((x302/x303)<=x304));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x305 = 1U;
	static uint16_t x306 = 1439U;
	volatile int64_t x307 = INT64_MIN;
	int16_t x308 = 0;
	volatile int32_t t74 = 1;

	t74 = (x305==((x306/x307)<=x308));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int32_t x309 = 1;
	int16_t x310 = INT16_MAX;
	int16_t x311 = -5;
	int64_t x312 = INT64_MAX;
	int32_t t75 = -61;

	t75 = (x309==((x310/x311)<=x312));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x313 = UINT16_MAX;
	int8_t x314 = INT8_MIN;
	int32_t x315 = INT32_MAX;
	uint32_t x316 = UINT32_MAX;

	t76 = (x313==((x314/x315)<=x316));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x317 = INT64_MIN;
	static int8_t x318 = -36;
	uint16_t x319 = UINT16_MAX;
	int32_t x320 = -1;
	int32_t t77 = -851300426;

	t77 = (x317==((x318/x319)<=x320));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x321 = 8060267U;
	static uint64_t x323 = 185LLU;
	uint64_t x324 = UINT64_MAX;

	t78 = (x321==((x322/x323)<=x324));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x325 = -13370;
	uint64_t x326 = 101LLU;
	int8_t x327 = -1;
	static volatile uint8_t x328 = 4U;
	static volatile int32_t t79 = 177;

	t79 = (x325==((x326/x327)<=x328));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x329 = UINT64_MAX;
	uint8_t x330 = UINT8_MAX;
	static volatile int32_t x331 = 250404231;
	int32_t t80 = -304733;

	t80 = (x329==((x330/x331)<=x332));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x333 = UINT32_MAX;
	int64_t x334 = INT64_MIN;
	volatile int8_t x335 = -14;
	static int64_t x336 = INT64_MIN;
	static volatile int32_t t81 = 13203;

	t81 = (x333==((x334/x335)<=x336));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x339 = INT8_MIN;
	volatile int16_t x340 = INT16_MAX;
	volatile int32_t t82 = 8522307;

	t82 = (x337==((x338/x339)<=x340));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x341 = -1;
	static uint32_t x342 = 7U;
	uint16_t x343 = UINT16_MAX;
	volatile int16_t x344 = -1;

	t83 = (x341==((x342/x343)<=x344));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x345 = INT8_MAX;
	int32_t x346 = INT32_MIN;
	uint32_t x347 = 3907U;

	t84 = (x345==((x346/x347)<=x348));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x349 = 113U;
	volatile int64_t x350 = 63LL;
	volatile int32_t x351 = -13780;
	static uint64_t x352 = 221LLU;
	static int32_t t85 = -3338;

	t85 = (x349==((x350/x351)<=x352));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x353 = 24702449218LLU;
	int16_t x354 = 24;
	volatile int8_t x355 = 3;
	int64_t x356 = INT64_MIN;
	volatile int32_t t86 = -7775528;

	t86 = (x353==((x354/x355)<=x356));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x359 = 518U;
	int64_t x360 = INT64_MAX;

	t87 = (x357==((x358/x359)<=x360));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x361 = INT64_MIN;
	int16_t x362 = INT16_MAX;
	volatile uint64_t x363 = 2119570381LLU;
	volatile int32_t x364 = INT32_MAX;
	volatile int32_t t88 = -22005298;

	t88 = (x361==((x362/x363)<=x364));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x365 = UINT8_MAX;
	int8_t x366 = -3;
	int16_t x367 = -1;
	int64_t x368 = -1LL;
	static volatile int32_t t89 = 34;

	t89 = (x365==((x366/x367)<=x368));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x370 = INT8_MAX;
	uint32_t x371 = 564248U;
	uint8_t x372 = 0U;
	int32_t t90 = 1839;

	t90 = (x369==((x370/x371)<=x372));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x374 = 1080690287839LL;
	static volatile int32_t x375 = -1;
	int16_t x376 = INT16_MAX;
	volatile int32_t t91 = 14;

	t91 = (x373==((x374/x375)<=x376));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x377 = INT16_MIN;
	uint64_t x378 = UINT64_MAX;
	int32_t x379 = 28414;

	t92 = (x377==((x378/x379)<=x380));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x381 = INT32_MIN;
	uint8_t x382 = UINT8_MAX;
	static int64_t x384 = 8685818745LL;
	volatile int32_t t93 = 5745;

	t93 = (x381==((x382/x383)<=x384));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x385 = INT16_MIN;
	int64_t x387 = -1635LL;
	volatile int32_t t94 = 214454;

	t94 = (x385==((x386/x387)<=x388));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x389 = 8;
	uint64_t x390 = 214984274LLU;
	uint32_t x392 = 31U;
	int32_t t95 = 0;

	t95 = (x389==((x390/x391)<=x392));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x393 = INT32_MIN;
	int16_t x394 = INT16_MIN;
	volatile int64_t x395 = -1LL;
	int8_t x396 = INT8_MIN;
	volatile int32_t t96 = 7;

	t96 = (x393==((x394/x395)<=x396));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x397 = INT16_MAX;
	int8_t x398 = INT8_MAX;
	static int64_t x399 = -95550953484884418LL;
	int32_t t97 = 619;

	t97 = (x397==((x398/x399)<=x400));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x401 = INT16_MIN;
	volatile int64_t x402 = -13779LL;
	int16_t x403 = -47;
	int32_t x404 = -2225296;
	volatile int32_t t98 = 324;

	t98 = (x401==((x402/x403)<=x404));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x405 = 23U;
	uint16_t x406 = 1376U;
	static int64_t x407 = INT64_MIN;
	int16_t x408 = INT16_MAX;
	volatile int32_t t99 = 3866;

	t99 = (x405==((x406/x407)<=x408));

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

