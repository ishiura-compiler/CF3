#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x5 = UINT16_MAX;
volatile uint16_t x7 = 138U;
int32_t x13 = 5;
int32_t x17 = INT32_MIN;
uint64_t x32 = 2241707561005LLU;
int64_t x33 = INT64_MIN;
volatile int64_t x37 = -3093LL;
uint64_t x41 = 70288628338323LLU;
volatile int16_t x44 = -1;
uint32_t x47 = UINT32_MAX;
volatile int64_t x49 = -1LL;
static volatile int8_t x52 = INT8_MIN;
volatile int64_t x54 = INT64_MAX;
int16_t x61 = INT16_MIN;
int64_t x70 = INT64_MIN;
volatile int16_t x72 = -1;
uint64_t x79 = 8859930401594415LLU;
volatile int64_t x85 = INT64_MIN;
static volatile int8_t x86 = -3;
int64_t x108 = -1LL;
volatile uint16_t x110 = UINT16_MAX;
volatile uint8_t x125 = UINT8_MAX;
int32_t x129 = INT32_MAX;
static int32_t x134 = -9905;
uint32_t x135 = 2059745063U;
volatile uint64_t x142 = 3220447593824LLU;
volatile uint64_t x144 = 1338LLU;
int32_t t33 = 3965;
uint16_t x167 = UINT16_MAX;
int32_t t35 = 1610;
static volatile int32_t t36 = 5639;
static int8_t x173 = 59;
static uint8_t x174 = 0U;
volatile int32_t t37 = -5;
uint64_t x180 = 176269093312856671LLU;
static uint32_t x187 = 3U;
static int64_t x188 = INT64_MAX;
static volatile int32_t x189 = 151;
int16_t x192 = -1;
int8_t x196 = 7;
static int8_t x198 = INT8_MAX;
volatile uint32_t x206 = 6U;
volatile int64_t x208 = INT64_MIN;
uint64_t x211 = 62LLU;
int64_t x221 = -1LL;
volatile int64_t x228 = INT64_MIN;
int32_t t49 = 4085248;
int16_t x237 = -1;
int32_t x250 = INT32_MAX;
uint8_t x251 = 0U;
uint16_t x258 = UINT16_MAX;
volatile uint64_t x272 = 1602057226944646LLU;
uint8_t x274 = UINT8_MAX;
volatile int64_t x284 = -1LL;
int16_t x286 = -14741;
static int64_t x287 = -6LL;
int8_t x296 = -1;
int16_t x302 = -1;
int64_t x314 = INT64_MIN;
int16_t x315 = 16;
static volatile int32_t t69 = 16240684;
static int16_t x318 = 203;
uint64_t x324 = 503343526877789LLU;
int32_t t71 = 2;
volatile int8_t x325 = INT8_MIN;
int32_t x329 = INT32_MIN;
static int8_t x331 = 0;
static int32_t t73 = -230111;
int8_t x350 = 1;
static int8_t x352 = INT8_MAX;
int64_t x359 = -1LL;
int32_t x362 = INT32_MIN;
int8_t x370 = 3;
int32_t t83 = -1683312;
int8_t x374 = INT8_MAX;
static int8_t x376 = INT8_MAX;
volatile int8_t x377 = INT8_MAX;
static int16_t x383 = -1;
volatile int64_t x384 = INT64_MIN;
static volatile uint32_t x388 = 2U;
uint16_t x390 = 1U;
int16_t x396 = -1;
uint16_t x399 = 29U;
int32_t t91 = 535940;
volatile uint8_t x407 = UINT8_MAX;
static volatile int32_t t92 = 6;
static int32_t x409 = 666;
int32_t t93 = -58;
uint16_t x416 = UINT16_MAX;
uint8_t x429 = UINT8_MAX;


void f0(void) {
	int16_t x6 = INT16_MAX;
	uint8_t x8 = 1U;
	volatile int32_t t0 = -1182;

	t0 = ((x5|(x6+x7))<=x8);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x9 = UINT16_MAX;
	int32_t x10 = -1;
	volatile uint64_t x11 = UINT64_MAX;
	int8_t x12 = INT8_MIN;
	int32_t t1 = -2344733;

	t1 = ((x9|(x10+x11))<=x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x14 = INT8_MIN;
	uint32_t x15 = 2532088U;
	static int64_t x16 = INT64_MAX;
	volatile int32_t t2 = 88;

	t2 = ((x13|(x14+x15))<=x16);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x18 = INT16_MAX;
	static volatile int16_t x19 = INT16_MAX;
	static volatile int64_t x20 = 7022LL;
	volatile int32_t t3 = 5618678;

	t3 = ((x17|(x18+x19))<=x20);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x21 = 60U;
	uint16_t x22 = UINT16_MAX;
	static uint64_t x23 = 46680259LLU;
	uint16_t x24 = 1561U;
	int32_t t4 = 9710015;

	t4 = ((x21|(x22+x23))<=x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MIN;
	static volatile int32_t x26 = -6393321;
	int16_t x27 = -1372;
	uint8_t x28 = 0U;
	int32_t t5 = -1;

	t5 = ((x25|(x26+x27))<=x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = UINT32_MAX;
	uint32_t x30 = 164086287U;
	volatile uint64_t x31 = 411LLU;
	volatile int32_t t6 = -7;

	t6 = ((x29|(x30+x31))<=x32);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x34 = INT16_MIN;
	int8_t x35 = -1;
	int64_t x36 = INT64_MIN;
	int32_t t7 = -2461;

	t7 = ((x33|(x34+x35))<=x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x38 = 27U;
	int8_t x39 = -1;
	uint16_t x40 = UINT16_MAX;
	int32_t t8 = -112609509;

	t8 = ((x37|(x38+x39))<=x40);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x42 = -1LL;
	uint16_t x43 = 26U;
	int32_t t9 = -261370124;

	t9 = ((x41|(x42+x43))<=x44);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x45 = INT64_MIN;
	static int16_t x46 = INT16_MAX;
	int64_t x48 = INT64_MAX;
	static int32_t t10 = -2;

	t10 = ((x45|(x46+x47))<=x48);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x50 = UINT8_MAX;
	volatile uint64_t x51 = 171519LLU;
	static volatile int32_t t11 = 1053318135;

	t11 = ((x49|(x50+x51))<=x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = -373490LL;
	int8_t x55 = -1;
	int8_t x56 = -55;
	volatile int32_t t12 = -190;

	t12 = ((x53|(x54+x55))<=x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x57 = 62753933478LL;
	int64_t x58 = 375LL;
	uint64_t x59 = 255069612640807LLU;
	int8_t x60 = INT8_MIN;
	volatile int32_t t13 = -70286512;

	t13 = ((x57|(x58+x59))<=x60);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x62 = UINT8_MAX;
	static uint64_t x63 = UINT64_MAX;
	uint32_t x64 = 1155548646U;
	static int32_t t14 = 1455;

	t14 = ((x61|(x62+x63))<=x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x65 = UINT8_MAX;
	int64_t x66 = -18771095284758LL;
	int16_t x67 = 1938;
	int64_t x68 = 7312661763556LL;
	volatile int32_t t15 = 11;

	t15 = ((x65|(x66+x67))<=x68);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x69 = -1LL;
	int64_t x71 = INT64_MAX;
	volatile int32_t t16 = -4150456;

	t16 = ((x69|(x70+x71))<=x72);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x73 = UINT64_MAX;
	int64_t x74 = -1LL;
	static int32_t x75 = 1;
	int32_t x76 = 50176;
	static volatile int32_t t17 = 13208245;

	t17 = ((x73|(x74+x75))<=x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = INT16_MIN;
	int16_t x78 = INT16_MAX;
	volatile int64_t x80 = INT64_MAX;
	int32_t t18 = -7035;

	t18 = ((x77|(x78+x79))<=x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x87 = 34366845U;
	int64_t x88 = -11LL;
	volatile int32_t t19 = -6;

	t19 = ((x85|(x86+x87))<=x88);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x89 = -394;
	int16_t x90 = 44;
	static volatile int16_t x91 = 5;
	int8_t x92 = -20;
	static volatile int32_t t20 = -1756;

	t20 = ((x89|(x90+x91))<=x92);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x93 = INT32_MIN;
	uint32_t x94 = 178U;
	volatile uint16_t x95 = UINT16_MAX;
	uint8_t x96 = UINT8_MAX;
	int32_t t21 = -11323601;

	t21 = ((x93|(x94+x95))<=x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int64_t x97 = -799614LL;
	uint8_t x98 = 28U;
	int32_t x99 = -1;
	static uint32_t x100 = 8522U;
	static int32_t t22 = 512;

	t22 = ((x97|(x98+x99))<=x100);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x101 = UINT64_MAX;
	int8_t x102 = INT8_MAX;
	int8_t x103 = -1;
	int16_t x104 = -212;
	int32_t t23 = -1971;

	t23 = ((x101|(x102+x103))<=x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x105 = INT64_MAX;
	int16_t x106 = -1;
	int64_t x107 = 100563167521LL;
	int32_t t24 = -94273;

	t24 = ((x105|(x106+x107))<=x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x109 = 13U;
	volatile int16_t x111 = INT16_MIN;
	static volatile uint8_t x112 = 2U;
	int32_t t25 = -8;

	t25 = ((x109|(x110+x111))<=x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x117 = INT8_MIN;
	static uint32_t x118 = UINT32_MAX;
	uint16_t x119 = 494U;
	volatile uint64_t x120 = 7362219472LLU;
	int32_t t26 = -1700;

	t26 = ((x117|(x118+x119))<=x120);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x126 = 6U;
	uint16_t x127 = UINT16_MAX;
	uint16_t x128 = 0U;
	int32_t t27 = 7996447;

	t27 = ((x125|(x126+x127))<=x128);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x130 = -1;
	int16_t x131 = 445;
	static int16_t x132 = INT16_MIN;
	static volatile int32_t t28 = 39462113;

	t28 = ((x129|(x130+x131))<=x132);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x133 = -1;
	int64_t x136 = -1LL;
	volatile int32_t t29 = -470;

	t29 = ((x133|(x134+x135))<=x136);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x141 = 3236U;
	int64_t x143 = -762273077321394118LL;
	int32_t t30 = -516171252;

	t30 = ((x141|(x142+x143))<=x144);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x145 = 51411LLU;
	int64_t x146 = 225973LL;
	static int64_t x147 = -6LL;
	uint64_t x148 = 4672420759062105484LLU;
	volatile int32_t t31 = 34359;

	t31 = ((x145|(x146+x147))<=x148);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x149 = UINT16_MAX;
	int64_t x150 = -2LL;
	volatile int16_t x151 = INT16_MIN;
	int32_t x152 = -261336095;
	static int32_t t32 = -115;

	t32 = ((x149|(x150+x151))<=x152);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x153 = INT16_MAX;
	uint8_t x154 = UINT8_MAX;
	static volatile int16_t x155 = INT16_MIN;
	int8_t x156 = 1;

	t33 = ((x153|(x154+x155))<=x156);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x157 = -177;
	volatile int16_t x158 = -3;
	uint8_t x159 = 5U;
	static int8_t x160 = INT8_MIN;
	static volatile int32_t t34 = 122;

	t34 = ((x157|(x158+x159))<=x160);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x165 = INT32_MIN;
	static volatile int8_t x166 = INT8_MAX;
	uint32_t x168 = 5597U;

	t35 = ((x165|(x166+x167))<=x168);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x169 = INT32_MIN;
	uint16_t x170 = 16U;
	uint64_t x171 = 7903LLU;
	int64_t x172 = INT64_MIN;

	t36 = ((x169|(x170+x171))<=x172);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x175 = INT32_MIN;
	volatile int64_t x176 = -1LL;

	t37 = ((x173|(x174+x175))<=x176);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x177 = -1;
	static int16_t x178 = INT16_MIN;
	uint32_t x179 = 5373948U;
	volatile int32_t t38 = -36;

	t38 = ((x177|(x178+x179))<=x180);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x181 = INT16_MIN;
	uint8_t x182 = 13U;
	uint32_t x183 = 54U;
	static int16_t x184 = INT16_MAX;
	int32_t t39 = -1513;

	t39 = ((x181|(x182+x183))<=x184);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x185 = 3U;
	static uint16_t x186 = 742U;
	int32_t t40 = 7;

	t40 = ((x185|(x186+x187))<=x188);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x190 = 9499948423851289LL;
	int64_t x191 = INT64_MIN;
	volatile int32_t t41 = 169054;

	t41 = ((x189|(x190+x191))<=x192);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x193 = INT8_MIN;
	uint8_t x194 = 29U;
	uint8_t x195 = 1U;
	volatile int32_t t42 = 1916;

	t42 = ((x193|(x194+x195))<=x196);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x197 = 6;
	int64_t x199 = 7869LL;
	uint8_t x200 = 1U;
	static volatile int32_t t43 = -28;

	t43 = ((x197|(x198+x199))<=x200);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x205 = INT8_MIN;
	uint32_t x207 = UINT32_MAX;
	int32_t t44 = -28597119;

	t44 = ((x205|(x206+x207))<=x208);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x209 = 12955;
	int16_t x210 = -1;
	int16_t x212 = INT16_MAX;
	int32_t t45 = 27488;

	t45 = ((x209|(x210+x211))<=x212);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x213 = INT64_MIN;
	uint64_t x214 = 8918542LLU;
	uint32_t x215 = 168644379U;
	static uint32_t x216 = 292831U;
	int32_t t46 = 1208;

	t46 = ((x213|(x214+x215))<=x216);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x222 = -1LL;
	volatile int32_t x223 = INT32_MIN;
	static int64_t x224 = -4808LL;
	int32_t t47 = -7;

	t47 = ((x221|(x222+x223))<=x224);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x225 = 4539259167213094LLU;
	int16_t x226 = INT16_MIN;
	int64_t x227 = -2552534LL;
	volatile int32_t t48 = -128392738;

	t48 = ((x225|(x226+x227))<=x228);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x229 = -66;
	uint8_t x230 = UINT8_MAX;
	volatile uint64_t x231 = 32172391LLU;
	uint64_t x232 = UINT64_MAX;

	t49 = ((x229|(x230+x231))<=x232);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x233 = INT32_MIN;
	int32_t x234 = -1;
	int16_t x235 = 1;
	int32_t x236 = INT32_MIN;
	int32_t t50 = -9042757;

	t50 = ((x233|(x234+x235))<=x236);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x238 = 30U;
	uint8_t x239 = 87U;
	static int16_t x240 = INT16_MIN;
	int32_t t51 = 380420;

	t51 = ((x237|(x238+x239))<=x240);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x241 = UINT64_MAX;
	static int8_t x242 = INT8_MAX;
	int16_t x243 = INT16_MIN;
	int16_t x244 = INT16_MIN;
	volatile int32_t t52 = -270;

	t52 = ((x241|(x242+x243))<=x244);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x245 = UINT64_MAX;
	int16_t x246 = -1;
	int32_t x247 = 7195900;
	static int16_t x248 = INT16_MAX;
	volatile int32_t t53 = -96;

	t53 = ((x245|(x246+x247))<=x248);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x249 = -1;
	static volatile int32_t x252 = -1;
	int32_t t54 = 17269;

	t54 = ((x249|(x250+x251))<=x252);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x253 = -131687732;
	int32_t x254 = 0;
	int16_t x255 = INT16_MAX;
	volatile uint16_t x256 = 355U;
	volatile int32_t t55 = 2857615;

	t55 = ((x253|(x254+x255))<=x256);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x257 = INT64_MAX;
	int16_t x259 = INT16_MIN;
	int8_t x260 = -1;
	volatile int32_t t56 = 38510289;

	t56 = ((x257|(x258+x259))<=x260);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x261 = UINT8_MAX;
	uint8_t x262 = 0U;
	uint8_t x263 = UINT8_MAX;
	uint32_t x264 = 4634U;
	int32_t t57 = -31;

	t57 = ((x261|(x262+x263))<=x264);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x269 = INT16_MIN;
	int64_t x270 = 504870894158890999LL;
	static int16_t x271 = INT16_MIN;
	static volatile int32_t t58 = 0;

	t58 = ((x269|(x270+x271))<=x272);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x273 = INT32_MAX;
	static uint16_t x275 = 133U;
	int64_t x276 = INT64_MIN;
	volatile int32_t t59 = -74198;

	t59 = ((x273|(x274+x275))<=x276);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x277 = UINT8_MAX;
	int32_t x278 = INT32_MIN;
	uint64_t x279 = UINT64_MAX;
	uint64_t x280 = UINT64_MAX;
	static int32_t t60 = -15101;

	t60 = ((x277|(x278+x279))<=x280);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x281 = 6U;
	int64_t x282 = INT64_MIN;
	int64_t x283 = 1500364316346866181LL;
	volatile int32_t t61 = 372413830;

	t61 = ((x281|(x282+x283))<=x284);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x285 = INT32_MAX;
	static uint64_t x288 = UINT64_MAX;
	volatile int32_t t62 = -1435706;

	t62 = ((x285|(x286+x287))<=x288);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x289 = 7467046U;
	int16_t x290 = 410;
	int16_t x291 = -1;
	uint8_t x292 = UINT8_MAX;
	volatile int32_t t63 = 123;

	t63 = ((x289|(x290+x291))<=x292);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x293 = 53965;
	volatile int8_t x294 = 1;
	int32_t x295 = -1;
	int32_t t64 = 6576167;

	t64 = ((x293|(x294+x295))<=x296);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x297 = 18189U;
	static uint16_t x298 = 30U;
	volatile uint8_t x299 = 0U;
	int64_t x300 = INT64_MAX;
	volatile int32_t t65 = -842318549;

	t65 = ((x297|(x298+x299))<=x300);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x301 = -1;
	int8_t x303 = INT8_MIN;
	static volatile uint16_t x304 = UINT16_MAX;
	int32_t t66 = 684812;

	t66 = ((x301|(x302+x303))<=x304);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x305 = INT64_MIN;
	static int16_t x306 = -1;
	int8_t x307 = INT8_MAX;
	static uint8_t x308 = 11U;
	int32_t t67 = -225907552;

	t67 = ((x305|(x306+x307))<=x308);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x309 = -1;
	int32_t x310 = INT32_MIN;
	int32_t x311 = 1;
	uint64_t x312 = 10734175984735LLU;
	volatile int32_t t68 = 2817;

	t68 = ((x309|(x310+x311))<=x312);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x313 = 437U;
	int8_t x316 = -1;

	t69 = ((x313|(x314+x315))<=x316);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x317 = 207762LLU;
	uint64_t x319 = 8968LLU;
	int8_t x320 = 0;
	int32_t t70 = -1;

	t70 = ((x317|(x318+x319))<=x320);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x321 = 25;
	uint8_t x322 = 6U;
	uint8_t x323 = 7U;

	t71 = ((x321|(x322+x323))<=x324);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x326 = UINT32_MAX;
	static uint64_t x327 = 500643555166717366LLU;
	int16_t x328 = INT16_MAX;
	volatile int32_t t72 = 85805011;

	t72 = ((x325|(x326+x327))<=x328);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x330 = 407U;
	uint64_t x332 = 3342225647690LLU;

	t73 = ((x329|(x330+x331))<=x332);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x333 = INT64_MAX;
	uint32_t x334 = UINT32_MAX;
	uint8_t x335 = UINT8_MAX;
	uint64_t x336 = UINT64_MAX;
	static int32_t t74 = -239264;

	t74 = ((x333|(x334+x335))<=x336);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x337 = 31293;
	static uint8_t x338 = 31U;
	int64_t x339 = 1LL;
	volatile int8_t x340 = INT8_MIN;
	int32_t t75 = -15428;

	t75 = ((x337|(x338+x339))<=x340);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x341 = UINT8_MAX;
	int64_t x342 = -6LL;
	int16_t x343 = 110;
	int64_t x344 = 1032678933LL;
	int32_t t76 = 81788;

	t76 = ((x341|(x342+x343))<=x344);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x345 = INT16_MIN;
	int32_t x346 = 2498;
	static uint64_t x347 = 1461545612914716LLU;
	uint16_t x348 = 5U;
	static int32_t t77 = 129531;

	t77 = ((x345|(x346+x347))<=x348);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x349 = 7;
	int64_t x351 = INT64_MIN;
	int32_t t78 = 81;

	t78 = ((x349|(x350+x351))<=x352);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x353 = INT8_MAX;
	int32_t x354 = 385676;
	uint32_t x355 = 540766393U;
	volatile int32_t x356 = 832715560;
	volatile int32_t t79 = 103;

	t79 = ((x353|(x354+x355))<=x356);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x357 = 456245U;
	uint64_t x358 = UINT64_MAX;
	static uint8_t x360 = 3U;
	volatile int32_t t80 = 277382257;

	t80 = ((x357|(x358+x359))<=x360);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x361 = INT64_MIN;
	static int64_t x363 = 845750LL;
	int8_t x364 = INT8_MIN;
	int32_t t81 = 179482250;

	t81 = ((x361|(x362+x363))<=x364);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x365 = 46022959928LL;
	volatile int16_t x366 = INT16_MIN;
	uint64_t x367 = 186593547LLU;
	static uint32_t x368 = UINT32_MAX;
	volatile int32_t t82 = 330;

	t82 = ((x365|(x366+x367))<=x368);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint32_t x369 = 62012U;
	volatile uint16_t x371 = 34U;
	int64_t x372 = INT64_MIN;

	t83 = ((x369|(x370+x371))<=x372);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x373 = 55016;
	volatile int32_t x375 = -1;
	volatile int32_t t84 = 64140791;

	t84 = ((x373|(x374+x375))<=x376);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x378 = -102LL;
	int64_t x379 = -374390699LL;
	volatile int8_t x380 = INT8_MAX;
	int32_t t85 = 12734;

	t85 = ((x377|(x378+x379))<=x380);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x381 = 3;
	int16_t x382 = INT16_MIN;
	volatile int32_t t86 = 0;

	t86 = ((x381|(x382+x383))<=x384);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x385 = -11954;
	int64_t x386 = -1LL;
	int16_t x387 = -1;
	volatile int32_t t87 = -12;

	t87 = ((x385|(x386+x387))<=x388);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x389 = 422U;
	static int32_t x391 = 956628;
	uint8_t x392 = 82U;
	int32_t t88 = 158970;

	t88 = ((x389|(x390+x391))<=x392);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x393 = 1;
	int16_t x394 = INT16_MIN;
	int16_t x395 = -2;
	int32_t t89 = 2927383;

	t89 = ((x393|(x394+x395))<=x396);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x397 = -1;
	int32_t x398 = 1;
	static uint16_t x400 = 26U;
	int32_t t90 = -12;

	t90 = ((x397|(x398+x399))<=x400);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x401 = INT16_MAX;
	int16_t x402 = INT16_MIN;
	int16_t x403 = 4321;
	int64_t x404 = INT64_MIN;

	t91 = ((x401|(x402+x403))<=x404);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x405 = -1;
	static int16_t x406 = -1;
	int8_t x408 = INT8_MIN;

	t92 = ((x405|(x406+x407))<=x408);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x410 = 367;
	uint64_t x411 = 0LLU;
	int16_t x412 = 4;

	t93 = ((x409|(x410+x411))<=x412);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x413 = -1;
	uint32_t x414 = 156U;
	int64_t x415 = -1LL;
	volatile int32_t t94 = 471471;

	t94 = ((x413|(x414+x415))<=x416);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x417 = UINT64_MAX;
	int64_t x418 = -1115886767487450956LL;
	volatile int64_t x419 = -1LL;
	volatile int32_t x420 = 3555954;
	volatile int32_t t95 = 450350;

	t95 = ((x417|(x418+x419))<=x420);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x425 = INT8_MIN;
	uint64_t x426 = 9715LLU;
	volatile int8_t x427 = INT8_MIN;
	static int32_t x428 = 412;
	int32_t t96 = 734546;

	t96 = ((x425|(x426+x427))<=x428);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x430 = 10927U;
	int16_t x431 = INT16_MIN;
	int8_t x432 = INT8_MAX;
	int32_t t97 = 415;

	t97 = ((x429|(x430+x431))<=x432);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int32_t x433 = -1;
	static volatile int8_t x434 = -1;
	int8_t x435 = -1;
	uint64_t x436 = 11686LLU;
	int32_t t98 = 25760;

	t98 = ((x433|(x434+x435))<=x436);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x437 = 1;
	static int8_t x438 = INT8_MAX;
	uint32_t x439 = 382375130U;
	int16_t x440 = -1;
	static volatile int32_t t99 = -589075;

	t99 = ((x437|(x438+x439))<=x440);

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

