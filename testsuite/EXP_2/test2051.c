#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x8 = INT8_MIN;
static int8_t x11 = INT8_MAX;
volatile uint16_t x13 = 504U;
static uint64_t x15 = 10622312554LLU;
int32_t x22 = INT32_MAX;
uint32_t x25 = UINT32_MAX;
volatile int32_t t6 = -84;
int32_t x34 = INT32_MAX;
int32_t t8 = 312;
volatile int32_t x40 = INT32_MAX;
uint32_t x42 = UINT32_MAX;
static int16_t x43 = INT16_MIN;
int16_t x60 = 683;
static volatile int16_t x61 = 1029;
uint8_t x62 = 0U;
static volatile int16_t x67 = -1;
int32_t t17 = 610767666;
uint64_t x74 = 1LLU;
int64_t x75 = INT64_MIN;
int32_t x79 = INT32_MIN;
int32_t x80 = 342264709;
uint16_t x81 = UINT16_MAX;
int8_t x82 = INT8_MIN;
int32_t x84 = INT32_MAX;
static volatile uint16_t x92 = UINT16_MAX;
volatile uint8_t x94 = 30U;
int8_t x95 = INT8_MIN;
int16_t x97 = 37;
static int32_t x100 = INT32_MIN;
int8_t x102 = INT8_MAX;
int8_t x107 = INT8_MAX;
int16_t x108 = -1;
volatile int32_t x111 = -97796859;
volatile int16_t x112 = INT16_MIN;
volatile int8_t x114 = -1;
volatile int64_t x117 = -7459LL;
volatile int64_t x118 = INT64_MIN;
int32_t x120 = 1;
static int64_t x130 = INT64_MIN;
static int64_t x138 = -2219684375923265LL;
volatile int8_t x139 = INT8_MIN;
uint64_t x140 = 7174157832LLU;
volatile int64_t x142 = -119525LL;
int64_t x154 = INT64_MAX;
int8_t x156 = 6;
uint64_t x173 = 31324896187LLU;
int64_t x182 = INT64_MIN;
int64_t x184 = -1LL;
int32_t t42 = 20599;
volatile uint16_t x185 = 1U;
uint32_t x192 = 82664U;
int64_t x195 = -1LL;
static int32_t x196 = -3661;
int16_t x202 = INT16_MAX;
int64_t x205 = INT64_MAX;
volatile int16_t x212 = -4853;
uint32_t x221 = 48536189U;
uint32_t x224 = 1U;
int16_t x227 = INT16_MIN;
volatile uint32_t x237 = UINT32_MAX;
int8_t x247 = INT8_MAX;
uint16_t x248 = 931U;
volatile int32_t t58 = -48994399;
uint8_t x249 = 0U;
volatile int32_t t59 = 2250;
volatile uint8_t x256 = UINT8_MAX;
uint32_t x257 = 3376065U;
volatile uint64_t x258 = 9080284983012LLU;
volatile int16_t x271 = -1;
int32_t x286 = INT32_MIN;
volatile uint8_t x287 = UINT8_MAX;
static uint16_t x288 = UINT16_MAX;
volatile int32_t x289 = 0;
volatile int32_t t68 = -572;
static volatile int32_t x299 = INT32_MIN;
static volatile int8_t x304 = INT8_MIN;
int32_t t70 = 31607492;
int64_t x311 = -1LL;
int32_t x314 = 24547011;
uint64_t x319 = UINT64_MAX;
int64_t x324 = -1LL;
int32_t t75 = -532;
volatile uint16_t x325 = 14U;
int32_t x332 = -111787889;
volatile int32_t x336 = INT32_MAX;
volatile int32_t t78 = -2733746;
int64_t x340 = INT64_MIN;
int64_t x345 = -1LL;
int16_t x348 = INT16_MIN;
volatile int64_t x351 = INT64_MIN;
volatile uint64_t x353 = 6970228797643LLU;
int16_t x363 = INT16_MAX;
static uint32_t x365 = UINT32_MAX;
int32_t x366 = INT32_MIN;
static volatile int32_t t86 = -7179504;
int64_t x369 = INT64_MAX;
int8_t x374 = INT8_MIN;
volatile uint32_t x376 = 3275U;
static int64_t x377 = INT64_MIN;
int64_t x383 = INT64_MIN;
int32_t x389 = -1;
int8_t x393 = 4;
int32_t x398 = -3;
static volatile int32_t t94 = -4702;
static uint64_t x404 = UINT64_MAX;
volatile int8_t x409 = -31;
static int16_t x420 = 189;


void f0(void) {
	int32_t x1 = -1880;
	static int16_t x2 = INT16_MIN;
	int32_t x3 = INT32_MIN;
	uint16_t x4 = 5755U;
	volatile int32_t t0 = -836329703;

	t0 = ((x1-(x2^x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 274U;
	int8_t x6 = INT8_MAX;
	uint32_t x7 = 106U;
	int32_t t1 = 229044347;

	t1 = ((x5-(x6^x7))<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 0;
	uint8_t x10 = 0U;
	int32_t x12 = INT32_MIN;
	int32_t t2 = 14;

	t2 = ((x9-(x10^x11))<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x14 = INT16_MIN;
	volatile int8_t x16 = 1;
	static volatile int32_t t3 = 28;

	t3 = ((x13-(x14^x15))<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = INT16_MIN;
	int64_t x18 = 118484163LL;
	static uint8_t x19 = 2U;
	uint8_t x20 = 3U;
	int32_t t4 = 3944;

	t4 = ((x17-(x18^x19))<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	volatile uint64_t x23 = 1LLU;
	static int32_t x24 = INT32_MIN;
	int32_t t5 = -441098341;

	t5 = ((x21-(x22^x23))<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x26 = INT16_MIN;
	volatile int8_t x27 = INT8_MAX;
	static int32_t x28 = INT32_MAX;

	t6 = ((x25-(x26^x27))<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = INT16_MIN;
	int16_t x30 = INT16_MAX;
	volatile int64_t x31 = INT64_MAX;
	static volatile int32_t x32 = 95870;
	static volatile int32_t t7 = -470212442;

	t7 = ((x29-(x30^x31))<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 106U;
	uint16_t x35 = 341U;
	uint8_t x36 = 1U;

	t8 = ((x33-(x34^x35))<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x37 = 127U;
	static uint32_t x38 = 4U;
	volatile int16_t x39 = INT16_MIN;
	int32_t t9 = -6567623;

	t9 = ((x37-(x38^x39))<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x41 = 2U;
	int32_t x44 = 303747477;
	int32_t t10 = -252;

	t10 = ((x41-(x42^x43))<=x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = UINT32_MAX;
	static int64_t x46 = INT64_MIN;
	volatile uint64_t x47 = 1165LLU;
	static int64_t x48 = INT64_MAX;
	static int32_t t11 = 19043486;

	t11 = ((x45-(x46^x47))<=x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 21U;
	int64_t x50 = -1LL;
	int64_t x51 = -1LL;
	uint8_t x52 = 17U;
	int32_t t12 = -741990;

	t12 = ((x49-(x50^x51))<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = -1;
	int32_t x54 = INT32_MIN;
	volatile int64_t x55 = 17008349292976LL;
	static int16_t x56 = -1477;
	volatile int32_t t13 = 1815971;

	t13 = ((x53-(x54^x55))<=x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 5U;
	volatile uint8_t x58 = 7U;
	int64_t x59 = -1LL;
	int32_t t14 = 1;

	t14 = ((x57-(x58^x59))<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x63 = INT8_MIN;
	static uint8_t x64 = 0U;
	static volatile int32_t t15 = 6711;

	t15 = ((x61-(x62^x63))<=x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x65 = INT64_MIN;
	int8_t x66 = INT8_MAX;
	uint32_t x68 = 21U;
	int32_t t16 = 0;

	t16 = ((x65-(x66^x67))<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -1;
	int16_t x70 = INT16_MIN;
	int8_t x71 = -1;
	uint16_t x72 = UINT16_MAX;

	t17 = ((x69-(x70^x71))<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x73 = INT8_MAX;
	int8_t x76 = INT8_MAX;
	volatile int32_t t18 = -63;

	t18 = ((x73-(x74^x75))<=x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = 12;
	int64_t x78 = INT64_MIN;
	int32_t t19 = -6;

	t19 = ((x77-(x78^x79))<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x83 = 14U;
	int32_t t20 = 876;

	t20 = ((x81-(x82^x83))<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = INT64_MIN;
	int8_t x90 = INT8_MIN;
	uint64_t x91 = 525650959162LLU;
	int32_t t21 = -95161543;

	t21 = ((x89-(x90^x91))<=x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint16_t x93 = 2U;
	static int64_t x96 = -1LL;
	volatile int32_t t22 = 9;

	t22 = ((x93-(x94^x95))<=x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x98 = INT8_MIN;
	uint64_t x99 = 777851925101LLU;
	int32_t t23 = 158218492;

	t23 = ((x97-(x98^x99))<=x100);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x101 = 0U;
	int64_t x103 = -1LL;
	int16_t x104 = INT16_MIN;
	int32_t t24 = -355;

	t24 = ((x101-(x102^x103))<=x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x105 = INT64_MAX;
	int8_t x106 = INT8_MAX;
	volatile int32_t t25 = -1;

	t25 = ((x105-(x106^x107))<=x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x109 = 50U;
	static volatile int8_t x110 = -30;
	int32_t t26 = 28476;

	t26 = ((x109-(x110^x111))<=x112);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x113 = INT8_MIN;
	uint64_t x115 = UINT64_MAX;
	uint8_t x116 = 2U;
	int32_t t27 = -10;

	t27 = ((x113-(x114^x115))<=x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x119 = INT64_MAX;
	volatile int32_t t28 = 359;

	t28 = ((x117-(x118^x119))<=x120);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x121 = 59599458LL;
	static int32_t x122 = INT32_MIN;
	uint64_t x123 = UINT64_MAX;
	int32_t x124 = 15266;
	static volatile int32_t t29 = 12621;

	t29 = ((x121-(x122^x123))<=x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x125 = INT16_MIN;
	static volatile int8_t x126 = INT8_MIN;
	int8_t x127 = INT8_MIN;
	volatile uint16_t x128 = 116U;
	volatile int32_t t30 = -4182277;

	t30 = ((x125-(x126^x127))<=x128);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int16_t x129 = 1;
	uint64_t x131 = UINT64_MAX;
	int16_t x132 = -1;
	static volatile int32_t t31 = 1;

	t31 = ((x129-(x130^x131))<=x132);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x133 = 140106903784282LLU;
	uint8_t x134 = 11U;
	uint64_t x135 = UINT64_MAX;
	static int32_t x136 = INT32_MIN;
	volatile int32_t t32 = -50670;

	t32 = ((x133-(x134^x135))<=x136);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x137 = 120U;
	volatile int32_t t33 = -100;

	t33 = ((x137-(x138^x139))<=x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x141 = INT64_MAX;
	uint64_t x143 = 260559269529597676LLU;
	int16_t x144 = INT16_MIN;
	volatile int32_t t34 = 11956;

	t34 = ((x141-(x142^x143))<=x144);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x145 = -1LL;
	static int64_t x146 = INT64_MIN;
	uint32_t x147 = 511U;
	int8_t x148 = -53;
	int32_t t35 = 499;

	t35 = ((x145-(x146^x147))<=x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint64_t x149 = UINT64_MAX;
	int16_t x150 = -1;
	int16_t x151 = INT16_MIN;
	uint32_t x152 = 349781923U;
	int32_t t36 = -184324;

	t36 = ((x149-(x150^x151))<=x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = INT32_MIN;
	int16_t x155 = INT16_MIN;
	static volatile int32_t t37 = -1769511;

	t37 = ((x153-(x154^x155))<=x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x161 = UINT8_MAX;
	int8_t x162 = -5;
	int64_t x163 = -30083518006LL;
	int16_t x164 = -1;
	volatile int32_t t38 = 296281496;

	t38 = ((x161-(x162^x163))<=x164);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x165 = -1LL;
	volatile int32_t x166 = 40;
	static volatile uint32_t x167 = 166U;
	int32_t x168 = -1;
	int32_t t39 = 1;

	t39 = ((x165-(x166^x167))<=x168);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x169 = 1U;
	volatile uint64_t x170 = 0LLU;
	volatile int16_t x171 = -1;
	uint8_t x172 = 87U;
	volatile int32_t t40 = 6476;

	t40 = ((x169-(x170^x171))<=x172);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint16_t x174 = 396U;
	uint32_t x175 = 312895U;
	uint16_t x176 = 3635U;
	static int32_t t41 = -425;

	t41 = ((x173-(x174^x175))<=x176);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x181 = INT16_MIN;
	uint8_t x183 = UINT8_MAX;

	t42 = ((x181-(x182^x183))<=x184);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x186 = 0U;
	uint8_t x187 = 1U;
	volatile int32_t x188 = INT32_MIN;
	int32_t t43 = -338;

	t43 = ((x185-(x186^x187))<=x188);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x189 = UINT32_MAX;
	int16_t x190 = 6182;
	static int16_t x191 = -48;
	static volatile int32_t t44 = 0;

	t44 = ((x189-(x190^x191))<=x192);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x193 = 6462U;
	static int8_t x194 = -1;
	volatile int32_t t45 = 3124;

	t45 = ((x193-(x194^x195))<=x196);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x197 = -12;
	int32_t x198 = INT32_MAX;
	int16_t x199 = INT16_MIN;
	uint32_t x200 = 15461U;
	int32_t t46 = 164766727;

	t46 = ((x197-(x198^x199))<=x200);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x201 = -1;
	static uint16_t x203 = UINT16_MAX;
	int64_t x204 = INT64_MIN;
	int32_t t47 = -117338206;

	t47 = ((x201-(x202^x203))<=x204);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x206 = 302428483U;
	int8_t x207 = INT8_MAX;
	int16_t x208 = 1;
	int32_t t48 = 48727197;

	t48 = ((x205-(x206^x207))<=x208);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x209 = -1;
	int16_t x210 = 111;
	int16_t x211 = INT16_MIN;
	int32_t t49 = -433489972;

	t49 = ((x209-(x210^x211))<=x212);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x213 = INT64_MAX;
	uint8_t x214 = 12U;
	uint32_t x215 = UINT32_MAX;
	int8_t x216 = INT8_MIN;
	volatile int32_t t50 = 27;

	t50 = ((x213-(x214^x215))<=x216);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x217 = UINT64_MAX;
	int64_t x218 = -7199978780992LL;
	int8_t x219 = -12;
	volatile uint16_t x220 = 7025U;
	volatile int32_t t51 = -6609461;

	t51 = ((x217-(x218^x219))<=x220);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x222 = INT64_MAX;
	int16_t x223 = INT16_MAX;
	volatile int32_t t52 = -906;

	t52 = ((x221-(x222^x223))<=x224);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x225 = 3556;
	int64_t x226 = -3350892594436924496LL;
	int8_t x228 = INT8_MIN;
	int32_t t53 = 16;

	t53 = ((x225-(x226^x227))<=x228);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x229 = 4483952382411636LLU;
	volatile uint32_t x230 = 104701150U;
	uint64_t x231 = UINT64_MAX;
	static int8_t x232 = INT8_MAX;
	int32_t t54 = 28;

	t54 = ((x229-(x230^x231))<=x232);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x233 = 2U;
	uint16_t x234 = 0U;
	volatile int8_t x235 = -1;
	int32_t x236 = INT32_MAX;
	volatile int32_t t55 = -2777;

	t55 = ((x233-(x234^x235))<=x236);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x238 = 67U;
	uint32_t x239 = 19127U;
	uint64_t x240 = 6553LLU;
	int32_t t56 = 416076653;

	t56 = ((x237-(x238^x239))<=x240);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x241 = INT8_MIN;
	uint32_t x242 = 19152U;
	uint16_t x243 = 2766U;
	static int64_t x244 = -14075853LL;
	int32_t t57 = 6;

	t57 = ((x241-(x242^x243))<=x244);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x245 = INT64_MAX;
	uint32_t x246 = UINT32_MAX;

	t58 = ((x245-(x246^x247))<=x248);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x250 = 0U;
	int64_t x251 = 0LL;
	volatile int64_t x252 = INT64_MAX;

	t59 = ((x249-(x250^x251))<=x252);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x253 = 457100LLU;
	volatile int64_t x254 = INT64_MAX;
	int64_t x255 = INT64_MIN;
	volatile int32_t t60 = -192;

	t60 = ((x253-(x254^x255))<=x256);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x259 = 352808776U;
	int64_t x260 = 254875314918463LL;
	volatile int32_t t61 = -10;

	t61 = ((x257-(x258^x259))<=x260);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x261 = UINT64_MAX;
	int32_t x262 = INT32_MAX;
	int64_t x263 = -1LL;
	uint32_t x264 = 12791186U;
	int32_t t62 = 449553178;

	t62 = ((x261-(x262^x263))<=x264);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x265 = INT8_MIN;
	int32_t x266 = -3934173;
	int8_t x267 = INT8_MIN;
	int32_t x268 = INT32_MIN;
	static int32_t t63 = -329;

	t63 = ((x265-(x266^x267))<=x268);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x269 = INT32_MAX;
	int32_t x270 = INT32_MIN;
	uint32_t x272 = UINT32_MAX;
	int32_t t64 = -28;

	t64 = ((x269-(x270^x271))<=x272);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x273 = 4U;
	int16_t x274 = INT16_MIN;
	int64_t x275 = INT64_MIN;
	uint16_t x276 = UINT16_MAX;
	volatile int32_t t65 = 61537558;

	t65 = ((x273-(x274^x275))<=x276);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x281 = -1;
	uint32_t x282 = 203832U;
	uint16_t x283 = 104U;
	static int16_t x284 = INT16_MAX;
	volatile int32_t t66 = 580258;

	t66 = ((x281-(x282^x283))<=x284);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x285 = 93U;
	int32_t t67 = -2;

	t67 = ((x285-(x286^x287))<=x288);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x290 = 628126557056LL;
	volatile int8_t x291 = -1;
	int16_t x292 = -1;

	t68 = ((x289-(x290^x291))<=x292);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x297 = INT64_MAX;
	int64_t x298 = INT64_MIN;
	volatile uint8_t x300 = 80U;
	static volatile int32_t t69 = -61467;

	t69 = ((x297-(x298^x299))<=x300);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x301 = INT8_MIN;
	volatile uint16_t x302 = 8156U;
	uint32_t x303 = UINT32_MAX;

	t70 = ((x301-(x302^x303))<=x304);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x305 = 1U;
	static volatile int32_t x306 = 6;
	int64_t x307 = 500448189241141739LL;
	static int64_t x308 = INT64_MIN;
	volatile int32_t t71 = -12729594;

	t71 = ((x305-(x306^x307))<=x308);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x309 = 1;
	int16_t x310 = INT16_MIN;
	int16_t x312 = 48;
	int32_t t72 = 111063;

	t72 = ((x309-(x310^x311))<=x312);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x313 = UINT32_MAX;
	static int64_t x315 = -1836666259776386LL;
	int64_t x316 = INT64_MAX;
	int32_t t73 = -8645;

	t73 = ((x313-(x314^x315))<=x316);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x317 = INT16_MIN;
	int32_t x318 = -487927;
	static uint32_t x320 = 14854U;
	int32_t t74 = -2;

	t74 = ((x317-(x318^x319))<=x320);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x321 = INT32_MAX;
	int16_t x322 = -1;
	int64_t x323 = INT64_MIN;

	t75 = ((x321-(x322^x323))<=x324);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x326 = INT8_MIN;
	volatile int16_t x327 = INT16_MIN;
	static volatile uint32_t x328 = 3454U;
	int32_t t76 = 811;

	t76 = ((x325-(x326^x327))<=x328);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x329 = 1LLU;
	uint16_t x330 = UINT16_MAX;
	int64_t x331 = INT64_MAX;
	volatile int32_t t77 = 7018928;

	t77 = ((x329-(x330^x331))<=x332);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x333 = 1;
	int8_t x334 = -5;
	volatile int8_t x335 = 1;

	t78 = ((x333-(x334^x335))<=x336);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x337 = -1;
	int64_t x338 = 1200256378073419077LL;
	int16_t x339 = 256;
	static int32_t t79 = 15810;

	t79 = ((x337-(x338^x339))<=x340);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x341 = 758LL;
	uint8_t x342 = UINT8_MAX;
	uint8_t x343 = UINT8_MAX;
	int8_t x344 = INT8_MIN;
	volatile int32_t t80 = -28422;

	t80 = ((x341-(x342^x343))<=x344);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x346 = 84U;
	int32_t x347 = 1968128;
	volatile int32_t t81 = -3288;

	t81 = ((x345-(x346^x347))<=x348);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x349 = UINT16_MAX;
	int16_t x350 = INT16_MIN;
	int16_t x352 = -1;
	int32_t t82 = 1742435;

	t82 = ((x349-(x350^x351))<=x352);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x354 = INT16_MIN;
	uint8_t x355 = 98U;
	static uint32_t x356 = UINT32_MAX;
	static int32_t t83 = 1066851;

	t83 = ((x353-(x354^x355))<=x356);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x357 = 17U;
	int32_t x358 = INT32_MIN;
	int8_t x359 = -31;
	int64_t x360 = -1LL;
	static int32_t t84 = -119670;

	t84 = ((x357-(x358^x359))<=x360);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x361 = 1U;
	int64_t x362 = INT64_MAX;
	int8_t x364 = -10;
	volatile int32_t t85 = -1;

	t85 = ((x361-(x362^x363))<=x364);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x367 = -347;
	volatile int32_t x368 = INT32_MAX;

	t86 = ((x365-(x366^x367))<=x368);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x370 = INT32_MAX;
	static uint8_t x371 = UINT8_MAX;
	int16_t x372 = INT16_MAX;
	int32_t t87 = -686433;

	t87 = ((x369-(x370^x371))<=x372);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x373 = -1;
	int64_t x375 = -1LL;
	volatile int32_t t88 = -1;

	t88 = ((x373-(x374^x375))<=x376);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x378 = 1945004247LLU;
	int16_t x379 = -6303;
	int8_t x380 = INT8_MIN;
	static int32_t t89 = 12762;

	t89 = ((x377-(x378^x379))<=x380);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x381 = UINT32_MAX;
	int64_t x382 = -312244876464764686LL;
	uint64_t x384 = UINT64_MAX;
	volatile int32_t t90 = -53460086;

	t90 = ((x381-(x382^x383))<=x384);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x385 = 3633;
	static int32_t x386 = 1662391;
	uint8_t x387 = UINT8_MAX;
	volatile int8_t x388 = 1;
	static int32_t t91 = 535471047;

	t91 = ((x385-(x386^x387))<=x388);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint8_t x390 = 111U;
	uint32_t x391 = UINT32_MAX;
	volatile int16_t x392 = 6393;
	static volatile int32_t t92 = -152;

	t92 = ((x389-(x390^x391))<=x392);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x394 = -1;
	volatile uint8_t x395 = UINT8_MAX;
	uint64_t x396 = 161141926923637LLU;
	volatile int32_t t93 = 106604;

	t93 = ((x393-(x394^x395))<=x396);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x397 = UINT32_MAX;
	static int64_t x399 = INT64_MIN;
	volatile uint64_t x400 = 1331458LLU;

	t94 = ((x397-(x398^x399))<=x400);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x401 = -1;
	int32_t x402 = 2360190;
	volatile int32_t x403 = INT32_MIN;
	volatile int32_t t95 = 976;

	t95 = ((x401-(x402^x403))<=x404);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x405 = -1;
	static int8_t x406 = INT8_MAX;
	static int16_t x407 = 1;
	static int16_t x408 = -843;
	static int32_t t96 = -26493879;

	t96 = ((x405-(x406^x407))<=x408);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x410 = INT32_MIN;
	volatile uint64_t x411 = UINT64_MAX;
	uint16_t x412 = 6U;
	int32_t t97 = 1;

	t97 = ((x409-(x410^x411))<=x412);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x413 = -290354358315LL;
	int64_t x414 = -10731342404788199LL;
	uint8_t x415 = 5U;
	uint32_t x416 = UINT32_MAX;
	int32_t t98 = 43530518;

	t98 = ((x413-(x414^x415))<=x416);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x417 = -1;
	int16_t x418 = 4286;
	volatile uint32_t x419 = 535678510U;
	int32_t t99 = 10720;

	t99 = ((x417-(x418^x419))<=x420);

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

