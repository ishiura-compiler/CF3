#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x7 = 48458459;
int8_t x8 = -1;
uint8_t x14 = 92U;
int32_t x17 = INT32_MIN;
static int32_t x18 = -702116;
uint64_t x24 = 163LLU;
volatile int8_t x30 = INT8_MAX;
int32_t x36 = INT32_MIN;
static volatile int64_t x39 = INT64_MIN;
int8_t x46 = INT8_MAX;
volatile int8_t x47 = 1;
static int8_t x50 = INT8_MAX;
int16_t x51 = -1;
volatile int32_t t13 = 2;
int32_t t14 = -55560;
int32_t t15 = 2142105;
volatile int32_t x71 = -11;
static int16_t x77 = INT16_MIN;
static int8_t x92 = INT8_MIN;
int32_t t22 = -478485257;
int64_t x95 = -1LL;
int64_t x101 = INT64_MIN;
int16_t x107 = INT16_MAX;
uint32_t x116 = UINT32_MAX;
int32_t x123 = INT32_MIN;
int64_t x124 = INT64_MAX;
uint64_t x125 = UINT64_MAX;
volatile uint64_t x129 = 430733LLU;
volatile int8_t x131 = INT8_MIN;
static volatile int32_t t32 = -3229;
static volatile int8_t x136 = INT8_MIN;
volatile int32_t t36 = -337464;
uint16_t x150 = 7U;
int8_t x151 = -13;
int64_t x152 = INT64_MIN;
volatile uint32_t x156 = UINT32_MAX;
int32_t t38 = -129983;
static volatile int32_t t39 = -345101255;
static int16_t x161 = -1;
static uint16_t x164 = UINT16_MAX;
uint64_t x165 = 15040590LLU;
volatile int32_t t41 = 8;
int8_t x169 = INT8_MAX;
int32_t x175 = INT32_MAX;
volatile int32_t t45 = 1;
int64_t x188 = -1LL;
int8_t x191 = 1;
uint8_t x192 = UINT8_MAX;
volatile int32_t t47 = -92386182;
uint8_t x197 = 26U;
uint64_t x198 = UINT64_MAX;
volatile int16_t x199 = INT16_MIN;
uint16_t x200 = 1U;
static int8_t x215 = INT8_MAX;
uint64_t x219 = 3665841545610463LLU;
volatile int32_t x220 = -1;
static int32_t t54 = 15899;
int16_t x223 = INT16_MIN;
int32_t x238 = INT32_MIN;
uint32_t x241 = UINT32_MAX;
static uint64_t x251 = 674350266860970775LLU;
volatile int32_t t62 = 0;
volatile int32_t t66 = 101231;
uint32_t x285 = 7769000U;
int8_t x293 = INT8_MIN;
int32_t x298 = INT32_MIN;
volatile int64_t x305 = -18784017LL;
uint8_t x318 = 1U;
int16_t x355 = 3;
static uint8_t x360 = 1U;
static uint8_t x363 = 3U;
volatile int16_t x364 = 0;
static uint16_t x367 = 22U;
int32_t x368 = INT32_MAX;
int32_t t88 = -38721460;
int64_t x370 = INT64_MAX;
int16_t x382 = INT16_MIN;
volatile int32_t t93 = 120505;
int32_t t94 = -190;
int64_t x399 = -350188LL;
static int64_t x400 = INT64_MIN;
int8_t x404 = INT8_MIN;
volatile int32_t x416 = -1;
uint32_t x419 = 147U;


void f0(void) {
	int32_t x1 = INT32_MIN;
	int8_t x2 = 1;
	int16_t x3 = INT16_MIN;
	volatile uint32_t x4 = 141081154U;
	int32_t t0 = -14;

	t0 = ((x1/x2)<(x3==x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x5 = UINT8_MAX;
	int16_t x6 = -1;
	static int32_t t1 = -55546;

	t1 = ((x5/x6)<(x7==x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = -1;
	uint32_t x10 = 188498127U;
	int16_t x11 = -1;
	volatile int8_t x12 = 0;
	int32_t t2 = 0;

	t2 = ((x9/x10)<(x11==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = INT64_MIN;
	static int16_t x15 = INT16_MIN;
	volatile int32_t x16 = 1;
	int32_t t3 = 105337697;

	t3 = ((x13/x14)<(x15==x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x19 = -915464;
	volatile int8_t x20 = INT8_MIN;
	int32_t t4 = 0;

	t4 = ((x17/x18)<(x19==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = 14800;
	int64_t x22 = -1LL;
	int16_t x23 = INT16_MIN;
	volatile int32_t t5 = -117928;

	t5 = ((x21/x22)<(x23==x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x25 = 31892U;
	uint8_t x26 = UINT8_MAX;
	volatile int16_t x27 = -4675;
	int64_t x28 = INT64_MIN;
	volatile int32_t t6 = 2;

	t6 = ((x25/x26)<(x27==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = -1710684LL;
	int32_t x31 = -1;
	int8_t x32 = INT8_MAX;
	int32_t t7 = 24;

	t7 = ((x29/x30)<(x31==x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x33 = 7U;
	volatile int32_t x34 = INT32_MAX;
	static uint8_t x35 = UINT8_MAX;
	int32_t t8 = -135536971;

	t8 = ((x33/x34)<(x35==x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x37 = 50;
	static int16_t x38 = 4;
	uint32_t x40 = 298U;
	static volatile int32_t t9 = -69748;

	t9 = ((x37/x38)<(x39==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = UINT8_MAX;
	int8_t x42 = INT8_MIN;
	int64_t x43 = INT64_MAX;
	int64_t x44 = INT64_MAX;
	int32_t t10 = -6736456;

	t10 = ((x41/x42)<(x43==x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = UINT32_MAX;
	int16_t x48 = INT16_MAX;
	volatile int32_t t11 = -23574;

	t11 = ((x45/x46)<(x47==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	int16_t x52 = INT16_MIN;
	volatile int32_t t12 = 102198;

	t12 = ((x49/x50)<(x51==x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = UINT32_MAX;
	volatile int16_t x54 = -1;
	int64_t x55 = -1LL;
	int16_t x56 = 12;

	t13 = ((x53/x54)<(x55==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	int64_t x58 = -2507858857298606LL;
	uint8_t x59 = 1U;
	int8_t x60 = -1;

	t14 = ((x57/x58)<(x59==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MAX;
	int64_t x62 = INT64_MAX;
	int32_t x63 = 3;
	int32_t x64 = -1;

	t15 = ((x61/x62)<(x63==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 1U;
	volatile uint8_t x66 = 1U;
	uint16_t x67 = 3U;
	int8_t x68 = INT8_MIN;
	int32_t t16 = -129342451;

	t16 = ((x65/x66)<(x67==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 17875U;
	int32_t x70 = INT32_MIN;
	volatile uint8_t x72 = 108U;
	volatile int32_t t17 = -276;

	t17 = ((x69/x70)<(x71==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MAX;
	uint64_t x74 = UINT64_MAX;
	static uint16_t x75 = 0U;
	int8_t x76 = INT8_MIN;
	volatile int32_t t18 = 1;

	t18 = ((x73/x74)<(x75==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x78 = 115LL;
	uint32_t x79 = 3U;
	static int16_t x80 = INT16_MIN;
	volatile int32_t t19 = 1869868;

	t19 = ((x77/x78)<(x79==x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int32_t x81 = 683867;
	static volatile int32_t x82 = -1;
	int16_t x83 = INT16_MIN;
	int16_t x84 = INT16_MIN;
	int32_t t20 = -672933389;

	t20 = ((x81/x82)<(x83==x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 3408LLU;
	int8_t x86 = -15;
	int64_t x87 = INT64_MAX;
	uint64_t x88 = 648076088LLU;
	int32_t t21 = -75229291;

	t21 = ((x85/x86)<(x87==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MIN;
	static int8_t x90 = -1;
	static int16_t x91 = INT16_MIN;

	t22 = ((x89/x90)<(x91==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	int8_t x94 = -1;
	uint16_t x96 = UINT16_MAX;
	int32_t t23 = 261;

	t23 = ((x93/x94)<(x95==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MIN;
	static int8_t x98 = -1;
	uint8_t x99 = 28U;
	volatile uint8_t x100 = 57U;
	int32_t t24 = 705883;

	t24 = ((x97/x98)<(x99==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x102 = -28;
	int8_t x103 = -1;
	static int32_t x104 = -1;
	volatile int32_t t25 = 180;

	t25 = ((x101/x102)<(x103==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x105 = INT64_MIN;
	uint64_t x106 = 2881LLU;
	int64_t x108 = -1LL;
	int32_t t26 = 1735567;

	t26 = ((x105/x106)<(x107==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 194632538193406LLU;
	int8_t x110 = -4;
	uint16_t x111 = 6268U;
	int32_t x112 = INT32_MAX;
	volatile int32_t t27 = 4244;

	t27 = ((x109/x110)<(x111==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x113 = INT16_MAX;
	volatile uint8_t x114 = UINT8_MAX;
	static uint32_t x115 = 6079U;
	volatile int32_t t28 = -54885;

	t28 = ((x113/x114)<(x115==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = -1;
	int64_t x118 = 1LL;
	int8_t x119 = INT8_MAX;
	volatile int8_t x120 = INT8_MIN;
	int32_t t29 = 3371;

	t29 = ((x117/x118)<(x119==x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = -1;
	volatile int64_t x122 = INT64_MIN;
	static int32_t t30 = -158978;

	t30 = ((x121/x122)<(x123==x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x126 = 116U;
	int64_t x127 = -23LL;
	int32_t x128 = INT32_MIN;
	static volatile int32_t t31 = -3;

	t31 = ((x125/x126)<(x127==x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint16_t x130 = 456U;
	int32_t x132 = INT32_MAX;

	t32 = ((x129/x130)<(x131==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = UINT16_MAX;
	uint64_t x134 = 28LLU;
	static int16_t x135 = INT16_MIN;
	volatile int32_t t33 = 538942049;

	t33 = ((x133/x134)<(x135==x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x137 = INT32_MIN;
	static uint32_t x138 = 13789105U;
	int16_t x139 = INT16_MIN;
	static uint8_t x140 = 3U;
	volatile int32_t t34 = 20421891;

	t34 = ((x137/x138)<(x139==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = 910U;
	static int64_t x142 = 60030746224LL;
	int32_t x143 = INT32_MIN;
	int32_t x144 = INT32_MIN;
	int32_t t35 = 108061728;

	t35 = ((x141/x142)<(x143==x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MAX;
	volatile uint32_t x146 = UINT32_MAX;
	static int64_t x147 = -1LL;
	uint64_t x148 = 12LLU;

	t36 = ((x145/x146)<(x147==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = UINT8_MAX;
	static int32_t t37 = -426974718;

	t37 = ((x149/x150)<(x151==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MIN;
	uint8_t x154 = 65U;
	int8_t x155 = -1;

	t38 = ((x153/x154)<(x155==x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x157 = UINT32_MAX;
	uint64_t x158 = 443733505359322LLU;
	int8_t x159 = -59;
	static uint16_t x160 = 25739U;

	t39 = ((x157/x158)<(x159==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x162 = 76U;
	volatile int32_t x163 = INT32_MAX;
	volatile int32_t t40 = -2171;

	t40 = ((x161/x162)<(x163==x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x166 = -1;
	static uint8_t x167 = 68U;
	int32_t x168 = -1;

	t41 = ((x165/x166)<(x167==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x170 = 1836U;
	int32_t x171 = 1967;
	volatile int64_t x172 = INT64_MAX;
	volatile int32_t t42 = -818;

	t42 = ((x169/x170)<(x171==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = UINT64_MAX;
	uint8_t x174 = UINT8_MAX;
	int64_t x176 = INT64_MAX;
	int32_t t43 = 64087270;

	t43 = ((x173/x174)<(x175==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = 7782U;
	int64_t x178 = INT64_MIN;
	volatile uint32_t x179 = 8U;
	static uint8_t x180 = UINT8_MAX;
	volatile int32_t t44 = -58668840;

	t44 = ((x177/x178)<(x179==x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x181 = INT8_MIN;
	int8_t x182 = -1;
	static uint32_t x183 = UINT32_MAX;
	int16_t x184 = INT16_MAX;

	t45 = ((x181/x182)<(x183==x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = 254LLU;
	int64_t x186 = -1LL;
	uint16_t x187 = 14184U;
	int32_t t46 = 443476893;

	t46 = ((x185/x186)<(x187==x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = 127;
	int8_t x190 = INT8_MIN;

	t47 = ((x189/x190)<(x191==x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x193 = -7;
	int32_t x194 = 4;
	static int32_t x195 = -5225;
	int64_t x196 = INT64_MIN;
	int32_t t48 = -3145;

	t48 = ((x193/x194)<(x195==x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t t49 = -4908;

	t49 = ((x197/x198)<(x199==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MIN;
	int16_t x202 = INT16_MAX;
	uint16_t x203 = UINT16_MAX;
	volatile int32_t x204 = INT32_MAX;
	int32_t t50 = -160;

	t50 = ((x201/x202)<(x203==x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x205 = INT32_MAX;
	int32_t x206 = INT32_MIN;
	static volatile int64_t x207 = -24702LL;
	int16_t x208 = 1352;
	volatile int32_t t51 = 1;

	t51 = ((x205/x206)<(x207==x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x209 = -1LL;
	volatile uint8_t x210 = UINT8_MAX;
	uint64_t x211 = 303604471531LLU;
	int32_t x212 = -1;
	int32_t t52 = -50903088;

	t52 = ((x209/x210)<(x211==x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = -1;
	int64_t x214 = -1LL;
	uint8_t x216 = 1U;
	int32_t t53 = -4;

	t53 = ((x213/x214)<(x215==x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = -4;
	uint32_t x218 = UINT32_MAX;

	t54 = ((x217/x218)<(x219==x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int64_t x221 = -84996LL;
	int64_t x222 = 1106949687LL;
	int32_t x224 = -231810162;
	int32_t t55 = 800958;

	t55 = ((x221/x222)<(x223==x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x225 = 28;
	static volatile int64_t x226 = INT64_MIN;
	volatile int32_t x227 = INT32_MIN;
	int32_t x228 = -775703;
	int32_t t56 = 1;

	t56 = ((x225/x226)<(x227==x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x229 = -1;
	volatile int16_t x230 = INT16_MAX;
	uint32_t x231 = 4645255U;
	static int8_t x232 = -1;
	volatile int32_t t57 = -1;

	t57 = ((x229/x230)<(x231==x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x233 = -1;
	volatile int32_t x234 = -147;
	static volatile int32_t x235 = INT32_MIN;
	uint64_t x236 = UINT64_MAX;
	volatile int32_t t58 = -10;

	t58 = ((x233/x234)<(x235==x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MIN;
	static volatile int16_t x239 = INT16_MIN;
	int32_t x240 = -13;
	static volatile int32_t t59 = -24976490;

	t59 = ((x237/x238)<(x239==x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x242 = 292;
	volatile int8_t x243 = INT8_MAX;
	int16_t x244 = INT16_MIN;
	volatile int32_t t60 = 3;

	t60 = ((x241/x242)<(x243==x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MIN;
	int16_t x246 = INT16_MIN;
	int16_t x247 = INT16_MAX;
	static volatile uint64_t x248 = 2326995602872300LLU;
	volatile int32_t t61 = 21914462;

	t61 = ((x245/x246)<(x247==x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x249 = -1LL;
	int16_t x250 = INT16_MIN;
	int64_t x252 = -1LL;

	t62 = ((x249/x250)<(x251==x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x257 = 175U;
	int8_t x258 = INT8_MIN;
	int64_t x259 = 812LL;
	static int32_t x260 = 1911;
	int32_t t63 = 2664;

	t63 = ((x257/x258)<(x259==x260));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x261 = 2301LLU;
	int16_t x262 = INT16_MIN;
	int64_t x263 = -29LL;
	uint32_t x264 = UINT32_MAX;
	volatile int32_t t64 = 126;

	t64 = ((x261/x262)<(x263==x264));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x265 = INT64_MIN;
	uint16_t x266 = UINT16_MAX;
	int32_t x267 = INT32_MIN;
	static int16_t x268 = INT16_MAX;
	static int32_t t65 = 38;

	t65 = ((x265/x266)<(x267==x268));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x269 = INT8_MIN;
	volatile int16_t x270 = INT16_MIN;
	static int32_t x271 = INT32_MAX;
	static int32_t x272 = INT32_MIN;

	t66 = ((x269/x270)<(x271==x272));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x273 = INT16_MIN;
	int8_t x274 = INT8_MIN;
	static volatile uint64_t x275 = 1531531038LLU;
	int32_t x276 = INT32_MIN;
	static int32_t t67 = 11004253;

	t67 = ((x273/x274)<(x275==x276));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x277 = -1;
	int32_t x278 = 184698208;
	int16_t x279 = -17;
	int16_t x280 = INT16_MIN;
	volatile int32_t t68 = 0;

	t68 = ((x277/x278)<(x279==x280));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x281 = -1;
	static uint64_t x282 = UINT64_MAX;
	volatile int64_t x283 = 0LL;
	uint64_t x284 = 4681069377LLU;
	static int32_t t69 = 6;

	t69 = ((x281/x282)<(x283==x284));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x286 = 55LL;
	int8_t x287 = -1;
	int32_t x288 = 20647;
	volatile int32_t t70 = 92128;

	t70 = ((x285/x286)<(x287==x288));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x289 = 0;
	static int16_t x290 = -1;
	uint64_t x291 = UINT64_MAX;
	static volatile uint16_t x292 = 4349U;
	volatile int32_t t71 = -10028;

	t71 = ((x289/x290)<(x291==x292));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x294 = INT64_MIN;
	int16_t x295 = -1;
	static uint16_t x296 = 3504U;
	volatile int32_t t72 = -615838;

	t72 = ((x293/x294)<(x295==x296));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x297 = -1;
	int32_t x299 = INT32_MIN;
	static volatile int32_t x300 = INT32_MAX;
	volatile int32_t t73 = 416308933;

	t73 = ((x297/x298)<(x299==x300));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x301 = INT16_MIN;
	volatile int64_t x302 = INT64_MIN;
	int16_t x303 = INT16_MIN;
	int8_t x304 = INT8_MIN;
	int32_t t74 = 936;

	t74 = ((x301/x302)<(x303==x304));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x306 = UINT32_MAX;
	static int32_t x307 = INT32_MAX;
	static volatile int8_t x308 = INT8_MAX;
	volatile int32_t t75 = 71169;

	t75 = ((x305/x306)<(x307==x308));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int8_t x309 = INT8_MIN;
	int64_t x310 = INT64_MIN;
	int8_t x311 = -1;
	uint32_t x312 = 8U;
	int32_t t76 = -2;

	t76 = ((x309/x310)<(x311==x312));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x317 = -1;
	volatile int64_t x319 = INT64_MAX;
	static volatile int64_t x320 = 118LL;
	int32_t t77 = 145941503;

	t77 = ((x317/x318)<(x319==x320));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x321 = INT16_MAX;
	volatile int64_t x322 = 9335179359LL;
	static uint8_t x323 = 0U;
	volatile int8_t x324 = INT8_MIN;
	volatile int32_t t78 = -24;

	t78 = ((x321/x322)<(x323==x324));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x329 = INT16_MIN;
	int16_t x330 = -1;
	int32_t x331 = -1;
	static volatile int64_t x332 = 2310668009501981LL;
	int32_t t79 = -1147;

	t79 = ((x329/x330)<(x331==x332));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x333 = 486834U;
	int32_t x334 = INT32_MIN;
	int32_t x335 = -1;
	uint8_t x336 = 1U;
	static int32_t t80 = -1499790;

	t80 = ((x333/x334)<(x335==x336));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x337 = 10U;
	int8_t x338 = INT8_MAX;
	int16_t x339 = INT16_MIN;
	int8_t x340 = INT8_MAX;
	volatile int32_t t81 = 29;

	t81 = ((x337/x338)<(x339==x340));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x341 = -1;
	static int16_t x342 = -1;
	int16_t x343 = 92;
	static volatile int8_t x344 = INT8_MAX;
	volatile int32_t t82 = -958;

	t82 = ((x341/x342)<(x343==x344));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x345 = 1U;
	uint16_t x346 = UINT16_MAX;
	volatile int64_t x347 = INT64_MAX;
	uint64_t x348 = UINT64_MAX;
	int32_t t83 = 5;

	t83 = ((x345/x346)<(x347==x348));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x349 = 34637U;
	int64_t x350 = INT64_MAX;
	uint64_t x351 = 7366996867157176LLU;
	volatile int64_t x352 = INT64_MIN;
	volatile int32_t t84 = 2;

	t84 = ((x349/x350)<(x351==x352));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x353 = -324690121LL;
	int32_t x354 = INT32_MIN;
	uint64_t x356 = UINT64_MAX;
	int32_t t85 = -1467;

	t85 = ((x353/x354)<(x355==x356));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x357 = INT32_MAX;
	uint64_t x358 = UINT64_MAX;
	int32_t x359 = -1;
	static int32_t t86 = 6;

	t86 = ((x357/x358)<(x359==x360));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x361 = 0;
	volatile int8_t x362 = 5;
	int32_t t87 = -157;

	t87 = ((x361/x362)<(x363==x364));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x365 = INT16_MIN;
	int32_t x366 = INT32_MIN;

	t88 = ((x365/x366)<(x367==x368));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x369 = -91;
	volatile uint8_t x371 = UINT8_MAX;
	int32_t x372 = INT32_MIN;
	volatile int32_t t89 = 690774;

	t89 = ((x369/x370)<(x371==x372));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x373 = 35LLU;
	uint16_t x374 = 2U;
	uint16_t x375 = UINT16_MAX;
	static int64_t x376 = -11684333487211598LL;
	volatile int32_t t90 = -2;

	t90 = ((x373/x374)<(x375==x376));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int64_t x377 = INT64_MAX;
	int8_t x378 = 18;
	int32_t x379 = INT32_MAX;
	int8_t x380 = -1;
	int32_t t91 = 109628;

	t91 = ((x377/x378)<(x379==x380));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x381 = INT16_MAX;
	static int8_t x383 = INT8_MIN;
	int8_t x384 = INT8_MIN;
	int32_t t92 = 9696209;

	t92 = ((x381/x382)<(x383==x384));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x385 = UINT64_MAX;
	uint16_t x386 = 5U;
	volatile uint64_t x387 = 497144113707LLU;
	int8_t x388 = INT8_MIN;

	t93 = ((x385/x386)<(x387==x388));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x393 = 132470230U;
	int64_t x394 = -5058LL;
	int8_t x395 = 7;
	int32_t x396 = INT32_MAX;

	t94 = ((x393/x394)<(x395==x396));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x397 = -527266595111LL;
	int32_t x398 = 2145395;
	int32_t t95 = -7970;

	t95 = ((x397/x398)<(x399==x400));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x401 = INT8_MAX;
	volatile int16_t x402 = INT16_MIN;
	int64_t x403 = -220LL;
	int32_t t96 = -1;

	t96 = ((x401/x402)<(x403==x404));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x409 = -1;
	int64_t x410 = -456045357LL;
	int32_t x411 = -1554671;
	int16_t x412 = INT16_MIN;
	volatile int32_t t97 = -183069441;

	t97 = ((x409/x410)<(x411==x412));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x413 = 470185U;
	int32_t x414 = INT32_MAX;
	uint32_t x415 = UINT32_MAX;
	volatile int32_t t98 = -27395;

	t98 = ((x413/x414)<(x415==x416));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x417 = INT16_MAX;
	volatile int16_t x418 = INT16_MIN;
	volatile int64_t x420 = -485296367844568LL;
	int32_t t99 = -23299;

	t99 = ((x417/x418)<(x419==x420));

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

