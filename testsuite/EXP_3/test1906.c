#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x3 = INT32_MIN;
int32_t t0 = 33;
uint8_t x5 = 1U;
uint64_t x8 = UINT64_MAX;
volatile int32_t t1 = -4;
uint8_t x16 = 100U;
static int16_t x17 = -1;
volatile uint32_t x26 = 7259198U;
int32_t x31 = -1;
int8_t x32 = -3;
int32_t x33 = INT32_MIN;
uint8_t x36 = 2U;
int32_t t9 = 294192003;
volatile uint8_t x52 = 28U;
int32_t t13 = -12587;
static int16_t x63 = INT16_MIN;
int32_t x76 = -48629;
volatile int16_t x81 = INT16_MIN;
int32_t t19 = -1702;
int64_t x92 = INT64_MAX;
volatile int32_t x95 = INT32_MAX;
int16_t x101 = INT16_MIN;
int64_t x107 = INT64_MIN;
static int64_t x108 = INT64_MAX;
int16_t x109 = INT16_MIN;
int8_t x111 = INT8_MIN;
volatile uint64_t x126 = UINT64_MAX;
volatile int64_t x131 = INT64_MAX;
static uint64_t x136 = 181083267353111573LLU;
int32_t t32 = -3029;
uint16_t x137 = 27241U;
int32_t x142 = -121895;
int8_t x143 = INT8_MAX;
static volatile int32_t x147 = INT32_MIN;
static int8_t x150 = INT8_MIN;
static volatile int32_t t36 = 213;
int64_t x158 = INT64_MAX;
static int32_t x163 = INT32_MAX;
volatile int8_t x165 = -1;
int32_t x166 = 1;
uint8_t x168 = 48U;
int32_t t39 = -21;
int16_t x173 = -1;
static int32_t x176 = -37;
volatile uint8_t x181 = UINT8_MAX;
int8_t x191 = -1;
int8_t x197 = INT8_MIN;
int16_t x201 = INT16_MIN;
uint64_t x202 = UINT64_MAX;
int8_t x213 = 59;
volatile int32_t x219 = INT32_MIN;
int32_t x238 = INT32_MAX;
int8_t x242 = INT8_MIN;
volatile int64_t x248 = -1LL;
int8_t x252 = INT8_MIN;
int64_t x261 = INT64_MIN;
static int32_t x263 = INT32_MIN;
int16_t x267 = INT16_MIN;
volatile int32_t x270 = INT32_MIN;
int64_t x273 = -339689041798763LL;
uint8_t x276 = UINT8_MAX;
int32_t x279 = INT32_MIN;
int32_t x281 = INT32_MIN;
int64_t x287 = INT64_MAX;
uint8_t x288 = 1U;
uint16_t x293 = 1489U;
uint8_t x295 = 45U;
int32_t x301 = 360823;
int16_t x302 = INT16_MIN;
uint16_t x305 = 259U;
volatile int32_t x306 = INT32_MIN;
static int32_t t75 = -571;
uint8_t x317 = 13U;
int8_t x319 = INT8_MAX;
int8_t x322 = -1;
static int64_t x325 = -1LL;
int8_t x327 = -1;
static volatile int8_t x329 = INT8_MIN;
int32_t t80 = -18282126;
volatile int32_t x356 = INT32_MIN;
int64_t x357 = INT64_MIN;
int64_t x361 = INT64_MAX;
int8_t x373 = -3;
int8_t x376 = -1;
int64_t x377 = INT64_MIN;
static volatile int32_t t91 = -11545;
static volatile uint8_t x385 = UINT8_MAX;
volatile int16_t x389 = -1;
static int64_t x395 = 1399431252LL;
int32_t x397 = -2043;
uint8_t x402 = 103U;
volatile int32_t t98 = -193929125;
int32_t t99 = 22;


void f0(void) {
	volatile uint64_t x1 = 139923848325249LLU;
	uint64_t x2 = 15921943053350LLU;
	int64_t x4 = 8LL;

	t0 = ((x1/x2)==(x3|x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = -1947;
	uint8_t x7 = 51U;

	t1 = ((x5/x6)==(x7|x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = INT32_MIN;
	int8_t x10 = INT8_MAX;
	uint16_t x11 = UINT16_MAX;
	volatile uint32_t x12 = 18715U;
	int32_t t2 = -1227048;

	t2 = ((x9/x10)==(x11|x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	static volatile int32_t x14 = -1;
	static int8_t x15 = -10;
	int32_t t3 = 353;

	t3 = ((x13/x14)==(x15|x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x18 = UINT16_MAX;
	uint64_t x19 = 9815LLU;
	int32_t x20 = -2244;
	volatile int32_t t4 = -82086348;

	t4 = ((x17/x18)==(x19|x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	int8_t x22 = 52;
	volatile int8_t x23 = -1;
	uint16_t x24 = UINT16_MAX;
	int32_t t5 = -333122;

	t5 = ((x21/x22)==(x23|x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = UINT16_MAX;
	uint8_t x27 = 43U;
	int32_t x28 = INT32_MIN;
	volatile int32_t t6 = 988356;

	t6 = ((x25/x26)==(x27|x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1;
	int8_t x30 = -1;
	volatile int32_t t7 = -1;

	t7 = ((x29/x30)==(x31|x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x34 = INT32_MIN;
	int16_t x35 = INT16_MIN;
	int32_t t8 = -6951062;

	t8 = ((x33/x34)==(x35|x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = INT8_MIN;
	static uint32_t x38 = 191895U;
	uint64_t x39 = 1556756LLU;
	uint8_t x40 = 19U;

	t9 = ((x37/x38)==(x39|x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	int16_t x42 = -121;
	int32_t x43 = INT32_MIN;
	int32_t x44 = 1;
	volatile int32_t t10 = 817;

	t10 = ((x41/x42)==(x43|x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -1;
	int32_t x46 = INT32_MIN;
	static uint16_t x47 = 3U;
	uint16_t x48 = UINT16_MAX;
	volatile int32_t t11 = -213;

	t11 = ((x45/x46)==(x47|x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x49 = 1U;
	int16_t x50 = INT16_MIN;
	int16_t x51 = -1;
	int32_t t12 = 103969;

	t12 = ((x49/x50)==(x51|x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = INT8_MIN;
	int64_t x54 = INT64_MIN;
	int64_t x55 = INT64_MIN;
	static int8_t x56 = INT8_MIN;

	t13 = ((x53/x54)==(x55|x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x57 = 2U;
	static int16_t x58 = INT16_MIN;
	int32_t x59 = -1;
	int16_t x60 = INT16_MAX;
	static int32_t t14 = 10287;

	t14 = ((x57/x58)==(x59|x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = 28484921629LL;
	int8_t x62 = INT8_MIN;
	uint64_t x64 = 1793LLU;
	volatile int32_t t15 = -2;

	t15 = ((x61/x62)==(x63|x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = 35998619;
	int64_t x66 = INT64_MAX;
	uint32_t x67 = 52U;
	uint8_t x68 = 1U;
	volatile int32_t t16 = -127339;

	t16 = ((x65/x66)==(x67|x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x73 = 379994977LLU;
	int32_t x74 = 2028;
	int64_t x75 = -511402518LL;
	int32_t t17 = 723;

	t17 = ((x73/x74)==(x75|x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x77 = -21;
	uint32_t x78 = 11542903U;
	uint32_t x79 = 15U;
	int8_t x80 = -10;
	volatile int32_t t18 = 516149;

	t18 = ((x77/x78)==(x79|x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x82 = INT8_MIN;
	static uint16_t x83 = 5U;
	int64_t x84 = -1LL;

	t19 = ((x81/x82)==(x83|x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = 1553098485809355011LL;
	static uint64_t x86 = UINT64_MAX;
	uint8_t x87 = UINT8_MAX;
	volatile uint64_t x88 = UINT64_MAX;
	static int32_t t20 = 1;

	t20 = ((x85/x86)==(x87|x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x89 = INT32_MIN;
	static int64_t x90 = INT64_MIN;
	int64_t x91 = INT64_MAX;
	int32_t t21 = -214883845;

	t21 = ((x89/x90)==(x91|x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x93 = 0U;
	uint64_t x94 = UINT64_MAX;
	static uint64_t x96 = UINT64_MAX;
	volatile int32_t t22 = -9257782;

	t22 = ((x93/x94)==(x95|x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = -1LL;
	int64_t x98 = -102LL;
	static int32_t x99 = -1;
	volatile int32_t x100 = INT32_MAX;
	volatile int32_t t23 = -1299485;

	t23 = ((x97/x98)==(x99|x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x102 = UINT32_MAX;
	int8_t x103 = INT8_MIN;
	int64_t x104 = -15509626LL;
	int32_t t24 = -1673;

	t24 = ((x101/x102)==(x103|x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x105 = INT16_MIN;
	static uint32_t x106 = 31061811U;
	static int32_t t25 = -20;

	t25 = ((x105/x106)==(x107|x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x110 = 1U;
	int32_t x112 = INT32_MAX;
	static int32_t t26 = 65466;

	t26 = ((x109/x110)==(x111|x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x113 = -1;
	int16_t x114 = INT16_MAX;
	int16_t x115 = INT16_MAX;
	int64_t x116 = 214560251328LL;
	int32_t t27 = -45417656;

	t27 = ((x113/x114)==(x115|x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int16_t x117 = 93;
	static volatile int32_t x118 = -1;
	int16_t x119 = INT16_MIN;
	uint8_t x120 = 0U;
	int32_t t28 = 17;

	t28 = ((x117/x118)==(x119|x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x121 = UINT32_MAX;
	int16_t x122 = INT16_MAX;
	uint32_t x123 = 21210221U;
	int64_t x124 = INT64_MAX;
	static volatile int32_t t29 = -4;

	t29 = ((x121/x122)==(x123|x124));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = -1;
	uint32_t x127 = 3190755U;
	int64_t x128 = INT64_MAX;
	int32_t t30 = 2;

	t30 = ((x125/x126)==(x127|x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x129 = 979674233375013LLU;
	uint8_t x130 = 22U;
	int8_t x132 = -1;
	volatile int32_t t31 = 56502;

	t31 = ((x129/x130)==(x131|x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x133 = -1;
	uint64_t x134 = 199207708LLU;
	uint64_t x135 = 278013182684342LLU;

	t32 = ((x133/x134)==(x135|x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x138 = INT64_MIN;
	static int32_t x139 = INT32_MIN;
	int64_t x140 = INT64_MIN;
	int32_t t33 = 368780389;

	t33 = ((x137/x138)==(x139|x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x141 = INT16_MAX;
	volatile int64_t x144 = 26415LL;
	static int32_t t34 = 45477;

	t34 = ((x141/x142)==(x143|x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x145 = 261670185;
	int32_t x146 = 89992;
	volatile int64_t x148 = INT64_MIN;
	int32_t t35 = 1;

	t35 = ((x145/x146)==(x147|x148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x149 = 100U;
	int32_t x151 = -1;
	static uint32_t x152 = 1248426U;

	t36 = ((x149/x150)==(x151|x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x157 = INT16_MIN;
	uint32_t x159 = UINT32_MAX;
	uint8_t x160 = UINT8_MAX;
	int32_t t37 = 8348;

	t37 = ((x157/x158)==(x159|x160));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x161 = 8145380;
	static uint8_t x162 = UINT8_MAX;
	int64_t x164 = -1478848377LL;
	static int32_t t38 = -978653581;

	t38 = ((x161/x162)==(x163|x164));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x167 = INT16_MAX;

	t39 = ((x165/x166)==(x167|x168));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x169 = INT8_MAX;
	static int8_t x170 = -1;
	static uint64_t x171 = 8840753136760329355LLU;
	volatile int32_t x172 = -1;
	static volatile int32_t t40 = -47902;

	t40 = ((x169/x170)==(x171|x172));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x174 = -2;
	int32_t x175 = -1;
	int32_t t41 = 43506;

	t41 = ((x173/x174)==(x175|x176));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x177 = 755106005445411809LL;
	static uint32_t x178 = 18877U;
	static int32_t x179 = -5414;
	uint64_t x180 = UINT64_MAX;
	static int32_t t42 = 0;

	t42 = ((x177/x178)==(x179|x180));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x182 = 14U;
	int16_t x183 = INT16_MIN;
	uint16_t x184 = UINT16_MAX;
	int32_t t43 = -8919630;

	t43 = ((x181/x182)==(x183|x184));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x185 = INT16_MAX;
	volatile int8_t x186 = INT8_MIN;
	volatile uint32_t x187 = 35460948U;
	volatile uint32_t x188 = UINT32_MAX;
	int32_t t44 = 9605150;

	t44 = ((x185/x186)==(x187|x188));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x189 = 4U;
	uint16_t x190 = 214U;
	volatile int16_t x192 = INT16_MAX;
	volatile int32_t t45 = 152;

	t45 = ((x189/x190)==(x191|x192));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x193 = -284839232937885196LL;
	int8_t x194 = 1;
	volatile int16_t x195 = INT16_MAX;
	static uint64_t x196 = UINT64_MAX;
	volatile int32_t t46 = 241;

	t46 = ((x193/x194)==(x195|x196));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x198 = UINT16_MAX;
	uint8_t x199 = 78U;
	int64_t x200 = -3909776LL;
	volatile int32_t t47 = -1;

	t47 = ((x197/x198)==(x199|x200));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x203 = INT32_MIN;
	int64_t x204 = INT64_MIN;
	int32_t t48 = 39;

	t48 = ((x201/x202)==(x203|x204));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x205 = 3LLU;
	uint32_t x206 = UINT32_MAX;
	int8_t x207 = 20;
	uint32_t x208 = 17812U;
	volatile int32_t t49 = 82;

	t49 = ((x205/x206)==(x207|x208));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x209 = INT8_MAX;
	static uint8_t x210 = 30U;
	int64_t x211 = -2624595690160LL;
	static uint8_t x212 = UINT8_MAX;
	volatile int32_t t50 = -1;

	t50 = ((x209/x210)==(x211|x212));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x214 = 10LL;
	static int32_t x215 = INT32_MIN;
	static uint8_t x216 = UINT8_MAX;
	int32_t t51 = -7730;

	t51 = ((x213/x214)==(x215|x216));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x217 = INT64_MAX;
	int32_t x218 = INT32_MIN;
	static volatile uint8_t x220 = 2U;
	int32_t t52 = -556851;

	t52 = ((x217/x218)==(x219|x220));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x221 = INT64_MIN;
	int16_t x222 = INT16_MIN;
	uint64_t x223 = UINT64_MAX;
	volatile int16_t x224 = 7909;
	static int32_t t53 = -55996;

	t53 = ((x221/x222)==(x223|x224));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x225 = INT8_MIN;
	int32_t x226 = -1;
	int8_t x227 = INT8_MIN;
	int16_t x228 = 627;
	volatile int32_t t54 = 14217;

	t54 = ((x225/x226)==(x227|x228));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x229 = -1;
	int16_t x230 = INT16_MIN;
	uint16_t x231 = UINT16_MAX;
	volatile uint64_t x232 = 189LLU;
	int32_t t55 = 14709;

	t55 = ((x229/x230)==(x231|x232));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x233 = 3;
	int8_t x234 = INT8_MAX;
	int16_t x235 = 15;
	volatile uint32_t x236 = 1U;
	int32_t t56 = 1734;

	t56 = ((x233/x234)==(x235|x236));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x237 = UINT16_MAX;
	int16_t x239 = INT16_MAX;
	static uint32_t x240 = 12159573U;
	volatile int32_t t57 = 63723320;

	t57 = ((x237/x238)==(x239|x240));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x241 = INT16_MIN;
	static int64_t x243 = -1LL;
	uint8_t x244 = 76U;
	volatile int32_t t58 = 63575;

	t58 = ((x241/x242)==(x243|x244));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x245 = INT32_MAX;
	volatile int64_t x246 = INT64_MIN;
	int16_t x247 = -1;
	volatile int32_t t59 = 1;

	t59 = ((x245/x246)==(x247|x248));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int8_t x249 = INT8_MIN;
	int16_t x250 = INT16_MIN;
	int16_t x251 = 473;
	int32_t t60 = -468;

	t60 = ((x249/x250)==(x251|x252));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x253 = 1882U;
	volatile uint32_t x254 = UINT32_MAX;
	static int32_t x255 = -1;
	uint64_t x256 = 12506804614LLU;
	static int32_t t61 = 41;

	t61 = ((x253/x254)==(x255|x256));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x257 = INT32_MIN;
	uint32_t x258 = UINT32_MAX;
	uint64_t x259 = 629384439305LLU;
	static volatile int32_t x260 = -6667;
	int32_t t62 = -1;

	t62 = ((x257/x258)==(x259|x260));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x262 = -109;
	uint32_t x264 = 42U;
	int32_t t63 = -2;

	t63 = ((x261/x262)==(x263|x264));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x265 = -1LL;
	int16_t x266 = INT16_MIN;
	static volatile int64_t x268 = 2551LL;
	int32_t t64 = -7978720;

	t64 = ((x265/x266)==(x267|x268));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x269 = 2;
	volatile int16_t x271 = INT16_MAX;
	int32_t x272 = 97130717;
	volatile int32_t t65 = -1;

	t65 = ((x269/x270)==(x271|x272));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x274 = UINT8_MAX;
	int64_t x275 = -8389LL;
	volatile int32_t t66 = 9605;

	t66 = ((x273/x274)==(x275|x276));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x277 = UINT8_MAX;
	int16_t x278 = INT16_MAX;
	volatile uint64_t x280 = 99687LLU;
	volatile int32_t t67 = 1;

	t67 = ((x277/x278)==(x279|x280));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint16_t x282 = UINT16_MAX;
	uint64_t x283 = 2272LLU;
	int32_t x284 = -16124091;
	volatile int32_t t68 = 196151;

	t68 = ((x281/x282)==(x283|x284));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x285 = INT64_MAX;
	int16_t x286 = 7762;
	static volatile int32_t t69 = 8819;

	t69 = ((x285/x286)==(x287|x288));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x289 = INT32_MAX;
	uint32_t x290 = UINT32_MAX;
	int16_t x291 = INT16_MIN;
	int16_t x292 = INT16_MIN;
	volatile int32_t t70 = 1904566;

	t70 = ((x289/x290)==(x291|x292));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x294 = INT8_MAX;
	volatile int8_t x296 = INT8_MAX;
	volatile int32_t t71 = 890668696;

	t71 = ((x293/x294)==(x295|x296));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x297 = INT8_MIN;
	uint16_t x298 = UINT16_MAX;
	int8_t x299 = -1;
	volatile int16_t x300 = 14578;
	volatile int32_t t72 = -3;

	t72 = ((x297/x298)==(x299|x300));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int8_t x303 = -4;
	int32_t x304 = INT32_MIN;
	static volatile int32_t t73 = -3397151;

	t73 = ((x301/x302)==(x303|x304));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x307 = INT8_MIN;
	uint32_t x308 = UINT32_MAX;
	static int32_t t74 = 89;

	t74 = ((x305/x306)==(x307|x308));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x309 = INT32_MIN;
	uint64_t x310 = 23679096853LLU;
	static volatile uint16_t x311 = 57U;
	static uint16_t x312 = 1275U;

	t75 = ((x309/x310)==(x311|x312));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x313 = 30545501LL;
	uint16_t x314 = 11U;
	int32_t x315 = INT32_MIN;
	uint32_t x316 = 273364514U;
	int32_t t76 = 1905;

	t76 = ((x313/x314)==(x315|x316));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x318 = 116;
	static volatile uint8_t x320 = 2U;
	volatile int32_t t77 = -90;

	t77 = ((x317/x318)==(x319|x320));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x321 = -8;
	static uint16_t x323 = 521U;
	uint8_t x324 = UINT8_MAX;
	static int32_t t78 = -538;

	t78 = ((x321/x322)==(x323|x324));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x326 = 29958755132LLU;
	uint64_t x328 = UINT64_MAX;
	static int32_t t79 = -1;

	t79 = ((x325/x326)==(x327|x328));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int64_t x330 = INT64_MAX;
	uint8_t x331 = 5U;
	uint32_t x332 = UINT32_MAX;

	t80 = ((x329/x330)==(x331|x332));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x333 = INT8_MIN;
	static volatile int8_t x334 = 1;
	volatile int64_t x335 = INT64_MAX;
	volatile uint64_t x336 = UINT64_MAX;
	volatile int32_t t81 = 80;

	t81 = ((x333/x334)==(x335|x336));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x337 = INT64_MAX;
	int64_t x338 = INT64_MAX;
	uint64_t x339 = 16160647251LLU;
	int16_t x340 = -1;
	static int32_t t82 = 0;

	t82 = ((x337/x338)==(x339|x340));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x341 = 1;
	uint32_t x342 = UINT32_MAX;
	volatile int8_t x343 = INT8_MIN;
	int16_t x344 = INT16_MIN;
	int32_t t83 = 136873;

	t83 = ((x341/x342)==(x343|x344));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x349 = -1LL;
	int64_t x350 = -957892290028LL;
	uint32_t x351 = 976U;
	static int16_t x352 = 10;
	volatile int32_t t84 = 0;

	t84 = ((x349/x350)==(x351|x352));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x353 = 1508U;
	static volatile int8_t x354 = -1;
	uint64_t x355 = 3LLU;
	int32_t t85 = -4;

	t85 = ((x353/x354)==(x355|x356));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x358 = -984694LL;
	static uint8_t x359 = 2U;
	volatile int64_t x360 = INT64_MIN;
	int32_t t86 = 3333;

	t86 = ((x357/x358)==(x359|x360));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x362 = -1;
	uint32_t x363 = UINT32_MAX;
	uint8_t x364 = 3U;
	static int32_t t87 = 3339;

	t87 = ((x361/x362)==(x363|x364));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x365 = INT8_MIN;
	int32_t x366 = INT32_MIN;
	int32_t x367 = INT32_MIN;
	int16_t x368 = INT16_MIN;
	volatile int32_t t88 = -960165;

	t88 = ((x365/x366)==(x367|x368));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x369 = 85U;
	int64_t x370 = -1887230581LL;
	uint8_t x371 = 24U;
	uint64_t x372 = 3690694LLU;
	static volatile int32_t t89 = 126577;

	t89 = ((x369/x370)==(x371|x372));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x374 = -1;
	int32_t x375 = -7;
	int32_t t90 = 0;

	t90 = ((x373/x374)==(x375|x376));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x378 = UINT64_MAX;
	uint64_t x379 = 75933LLU;
	int64_t x380 = INT64_MIN;

	t91 = ((x377/x378)==(x379|x380));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x381 = 39U;
	int64_t x382 = INT64_MAX;
	volatile int64_t x383 = INT64_MAX;
	int32_t x384 = 563129;
	volatile int32_t t92 = -109;

	t92 = ((x381/x382)==(x383|x384));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x386 = 802U;
	uint64_t x387 = 4949581997LLU;
	static uint8_t x388 = 9U;
	static int32_t t93 = 1;

	t93 = ((x385/x386)==(x387|x388));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x390 = INT8_MAX;
	int16_t x391 = -1;
	int16_t x392 = 724;
	int32_t t94 = 673958;

	t94 = ((x389/x390)==(x391|x392));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x393 = 31167038U;
	int64_t x394 = INT64_MAX;
	uint16_t x396 = 5960U;
	volatile int32_t t95 = 2300200;

	t95 = ((x393/x394)==(x395|x396));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x398 = -1LL;
	uint16_t x399 = UINT16_MAX;
	volatile int8_t x400 = 5;
	int32_t t96 = -1437;

	t96 = ((x397/x398)==(x399|x400));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x401 = UINT64_MAX;
	volatile int8_t x403 = -1;
	volatile int32_t x404 = INT32_MIN;
	static int32_t t97 = -288;

	t97 = ((x401/x402)==(x403|x404));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x405 = INT16_MAX;
	uint64_t x406 = 1175399955673LLU;
	uint32_t x407 = 84U;
	uint64_t x408 = 4008902994291LLU;

	t98 = ((x405/x406)==(x407|x408));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x409 = 575226538011LL;
	volatile int32_t x410 = INT32_MIN;
	uint8_t x411 = UINT8_MAX;
	static volatile int16_t x412 = INT16_MIN;

	t99 = ((x409/x410)==(x411|x412));

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

