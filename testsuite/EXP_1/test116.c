#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x8 = INT32_MIN;
uint64_t x15 = 7470LLU;
static int64_t t4 = 43546LL;
int64_t x27 = INT64_MAX;
volatile int32_t t7 = 12155;
static volatile int32_t t8 = -120;
int64_t x46 = INT64_MIN;
uint32_t x51 = 1003052U;
int64_t x58 = -68LL;
uint16_t x60 = 26U;
int32_t t12 = -43162449;
uint32_t x64 = 2748U;
volatile int8_t x67 = 2;
static int8_t x68 = INT8_MIN;
int32_t x70 = -1;
volatile int16_t x77 = -2086;
uint32_t x90 = UINT32_MAX;
uint64_t x92 = 15292LLU;
static int32_t x99 = -1;
uint16_t x101 = 12071U;
int32_t x108 = INT32_MAX;
uint8_t x109 = 15U;
static uint8_t x110 = 47U;
volatile int64_t t23 = -186614LL;
uint32_t x113 = 195010743U;
int16_t x114 = INT16_MIN;
int32_t t25 = -733485;
int64_t x125 = -1LL;
int16_t x129 = -1;
uint64_t x135 = UINT64_MAX;
volatile int64_t x138 = INT64_MIN;
static volatile int32_t t29 = 20;
volatile int32_t t31 = 2510880;
volatile int64_t x153 = INT64_MAX;
uint8_t x160 = 6U;
int32_t t34 = 95259099;
uint64_t x167 = 129358454962242084LLU;
uint16_t x169 = 9U;
int8_t x170 = INT8_MIN;
int16_t x185 = -1;
int64_t x188 = INT64_MIN;
static volatile uint32_t t40 = 305U;
uint16_t x215 = UINT16_MAX;
int32_t t44 = 7713890;
static uint8_t x226 = 2U;
uint8_t x233 = 0U;
static int32_t x238 = INT32_MIN;
volatile int64_t x239 = INT64_MIN;
int32_t x240 = -2089;
int8_t x247 = -1;
int32_t t50 = 1;
int8_t x251 = INT8_MIN;
int64_t t51 = -8242LL;
static uint16_t x253 = UINT16_MAX;
int32_t x255 = INT32_MIN;
int32_t t53 = -11507;
volatile int8_t x262 = INT8_MAX;
uint16_t x265 = 9U;
static int64_t x267 = -52LL;
int64_t t55 = INT64_MIN;
uint8_t x271 = 29U;
int8_t x272 = INT8_MIN;
static uint32_t x284 = 23811313U;
static int64_t x287 = INT64_MIN;
volatile int32_t t61 = -201674;
uint64_t x298 = 12044014873220350LLU;
volatile int64_t x299 = INT64_MAX;
int64_t x306 = INT64_MIN;
int16_t x318 = 325;
static int64_t x320 = INT64_MIN;
static int8_t x322 = -41;
int32_t t68 = 59233;
int8_t x327 = INT8_MIN;
static int32_t t69 = 84;
static int32_t t71 = INT32_MIN;
volatile int64_t x337 = 95LL;
int64_t x341 = INT64_MIN;
uint64_t x347 = UINT64_MAX;
uint8_t x354 = 5U;
volatile int64_t x367 = 16651762393293110LL;
static int16_t x373 = -1;
uint32_t t80 = 196U;
static int64_t x389 = -1LL;
int16_t x392 = INT16_MIN;
uint16_t x400 = 0U;
volatile uint16_t x418 = 12U;
int8_t x419 = INT8_MAX;
int32_t x423 = 345007813;
int32_t t89 = -27908636;
uint32_t x428 = 216U;
int16_t x430 = -8;
static int32_t t91 = -55;
int64_t x440 = INT64_MIN;
int32_t x451 = INT32_MIN;
static int32_t x459 = -1;
volatile int32_t x469 = -12120;
volatile int64_t x470 = -1LL;
static int64_t x472 = INT64_MIN;


void f0(void) {
	uint16_t x5 = 29U;
	volatile int32_t x6 = INT32_MIN;
	int8_t x7 = INT8_MAX;
	volatile int32_t t0 = 878;

	t0 = (((x5+x6)<x7)|x8);

	if (t0 != -2147483647) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x9 = 3LLU;
	uint8_t x10 = UINT8_MAX;
	uint32_t x11 = UINT32_MAX;
	volatile int16_t x12 = 668;
	volatile int32_t t1 = -19207;

	t1 = (((x9+x10)<x11)|x12);

	if (t1 != 669) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = UINT64_MAX;
	uint32_t x14 = 4030763U;
	static uint32_t x16 = UINT32_MAX;
	volatile uint32_t t2 = UINT32_MAX;

	t2 = (((x13+x14)<x15)|x16);

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = INT8_MIN;
	static volatile int16_t x18 = -53;
	int64_t x19 = INT64_MIN;
	static uint64_t x20 = 9LLU;
	uint64_t t3 = 170LLU;

	t3 = (((x17+x18)<x19)|x20);

	if (t3 != 9LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x21 = 14565;
	static uint32_t x22 = UINT32_MAX;
	uint64_t x23 = 210LLU;
	int64_t x24 = -1714LL;

	t4 = (((x21+x22)<x23)|x24);

	if (t4 != -1714LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = UINT16_MAX;
	uint16_t x26 = 15827U;
	static volatile int32_t x28 = 1169;
	int32_t t5 = 3;

	t5 = (((x25+x26)<x27)|x28);

	if (t5 != 1169) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x29 = INT8_MIN;
	uint64_t x30 = UINT64_MAX;
	uint32_t x31 = 30560347U;
	uint32_t x32 = 1319179005U;
	uint32_t t6 = 149678369U;

	t6 = (((x29+x30)<x31)|x32);

	if (t6 != 1319179005U) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x33 = 121U;
	uint8_t x34 = UINT8_MAX;
	int8_t x35 = -1;
	int32_t x36 = -1;

	t7 = (((x33+x34)<x35)|x36);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = 13;
	int8_t x38 = 25;
	int64_t x39 = 12193LL;
	int8_t x40 = 1;

	t8 = (((x37+x38)<x39)|x40);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = 1;
	int8_t x42 = INT8_MAX;
	int32_t x43 = 178;
	int8_t x44 = INT8_MIN;
	volatile int32_t t9 = 38;

	t9 = (((x41+x42)<x43)|x44);

	if (t9 != -127) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = INT16_MAX;
	static uint8_t x47 = UINT8_MAX;
	static int64_t x48 = -1LL;
	volatile int64_t t10 = 55LL;

	t10 = (((x45+x46)<x47)|x48);

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x49 = 2U;
	int32_t x50 = -1;
	int64_t x52 = -1LL;
	int64_t t11 = 491348013234418LL;

	t11 = (((x49+x50)<x51)|x52);

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x57 = -11498LL;
	uint16_t x59 = 234U;

	t12 = (((x57+x58)<x59)|x60);

	if (t12 != 27) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x61 = 1U;
	uint8_t x62 = 59U;
	int32_t x63 = -6;
	uint32_t t13 = 1178968U;

	t13 = (((x61+x62)<x63)|x64);

	if (t13 != 2749U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x65 = -1LL;
	uint64_t x66 = 2599153LLU;
	static int32_t t14 = -2;

	t14 = (((x65+x66)<x67)|x68);

	if (t14 != -128) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x69 = INT16_MIN;
	int16_t x71 = 1;
	int64_t x72 = INT64_MIN;
	volatile int64_t t15 = 341LL;

	t15 = (((x69+x70)<x71)|x72);

	if (t15 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x78 = INT64_MAX;
	static int32_t x79 = 3818;
	int8_t x80 = INT8_MIN;
	volatile int32_t t16 = 1474787;

	t16 = (((x77+x78)<x79)|x80);

	if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = INT16_MIN;
	static uint16_t x82 = 2987U;
	volatile int64_t x83 = INT64_MAX;
	static int8_t x84 = INT8_MAX;
	static int32_t t17 = 24;

	t17 = (((x81+x82)<x83)|x84);

	if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x85 = -1LL;
	static uint32_t x86 = 174930U;
	static uint32_t x87 = 108005U;
	volatile int64_t x88 = INT64_MIN;
	volatile int64_t t18 = INT64_MIN;

	t18 = (((x85+x86)<x87)|x88);

	if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x89 = 1814853U;
	uint32_t x91 = 20857351U;
	volatile uint64_t t19 = 29LLU;

	t19 = (((x89+x90)<x91)|x92);

	if (t19 != 15293LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x97 = UINT8_MAX;
	int8_t x98 = 4;
	int8_t x100 = 1;
	static int32_t t20 = 66314;

	t20 = (((x97+x98)<x99)|x100);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int32_t x102 = -7939371;
	static volatile uint32_t x103 = UINT32_MAX;
	int32_t x104 = INT32_MIN;
	int32_t t21 = 26;

	t21 = (((x101+x102)<x103)|x104);

	if (t21 != -2147483647) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x105 = -2;
	int16_t x106 = -1;
	int8_t x107 = INT8_MIN;
	int32_t t22 = INT32_MAX;

	t22 = (((x105+x106)<x107)|x108);

	if (t22 != INT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint32_t x111 = 50151U;
	int64_t x112 = INT64_MIN;

	t23 = (((x109+x110)<x111)|x112);

	if (t23 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x115 = UINT64_MAX;
	volatile int16_t x116 = 4;
	static volatile int32_t t24 = -439;

	t24 = (((x113+x114)<x115)|x116);

	if (t24 != 5) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x121 = UINT16_MAX;
	static int64_t x122 = -1LL;
	static volatile int32_t x123 = 3;
	int16_t x124 = -10335;

	t25 = (((x121+x122)<x123)|x124);

	if (t25 != -10335) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x126 = INT32_MIN;
	int32_t x127 = INT32_MIN;
	static uint16_t x128 = UINT16_MAX;
	int32_t t26 = -95700;

	t26 = (((x125+x126)<x127)|x128);

	if (t26 != 65535) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x130 = -170836;
	int16_t x131 = INT16_MIN;
	volatile int8_t x132 = INT8_MIN;
	volatile int32_t t27 = 4;

	t27 = (((x129+x130)<x131)|x132);

	if (t27 != -127) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x133 = 62984247U;
	volatile int64_t x134 = -3LL;
	int32_t x136 = INT32_MIN;
	static int32_t t28 = 400159040;

	t28 = (((x133+x134)<x135)|x136);

	if (t28 != -2147483647) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x137 = INT32_MAX;
	uint16_t x139 = UINT16_MAX;
	int32_t x140 = INT32_MIN;

	t29 = (((x137+x138)<x139)|x140);

	if (t29 != -2147483647) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x141 = -1;
	int32_t x142 = -1;
	static int32_t x143 = INT32_MIN;
	uint64_t x144 = 69568541233LLU;
	uint64_t t30 = 10627LLU;

	t30 = (((x141+x142)<x143)|x144);

	if (t30 != 69568541233LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int64_t x145 = -471602189LL;
	int8_t x146 = 28;
	int8_t x147 = INT8_MIN;
	int32_t x148 = -1;

	t31 = (((x145+x146)<x147)|x148);

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x149 = -311;
	volatile uint64_t x150 = 7437LLU;
	static volatile int8_t x151 = INT8_MIN;
	uint64_t x152 = 125LLU;
	static uint64_t t32 = 6083795330247405LLU;

	t32 = (((x149+x150)<x151)|x152);

	if (t32 != 125LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x154 = INT8_MIN;
	uint16_t x155 = 0U;
	static int8_t x156 = INT8_MIN;
	int32_t t33 = 2;

	t33 = (((x153+x154)<x155)|x156);

	if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x157 = 13206581U;
	static int16_t x158 = -31;
	uint32_t x159 = UINT32_MAX;

	t34 = (((x157+x158)<x159)|x160);

	if (t34 != 7) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int64_t x161 = -1LL;
	static uint32_t x162 = 0U;
	volatile int32_t x163 = 1;
	volatile uint16_t x164 = 16971U;
	volatile int32_t t35 = 313244;

	t35 = (((x161+x162)<x163)|x164);

	if (t35 != 16971) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x165 = 183380U;
	int32_t x166 = -1254684;
	int64_t x168 = INT64_MAX;
	volatile int64_t t36 = INT64_MAX;

	t36 = (((x165+x166)<x167)|x168);

	if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x171 = INT16_MAX;
	int16_t x172 = -1;
	volatile int32_t t37 = 321;

	t37 = (((x169+x170)<x171)|x172);

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x181 = 1U;
	static int8_t x182 = 0;
	int32_t x183 = -1;
	static volatile uint64_t x184 = 710439554LLU;
	uint64_t t38 = 4894641748802LLU;

	t38 = (((x181+x182)<x183)|x184);

	if (t38 != 710439555LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x186 = -7398240915LL;
	int16_t x187 = 1901;
	volatile int64_t t39 = 16734196LL;

	t39 = (((x185+x186)<x187)|x188);

	if (t39 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x189 = 90856039941LLU;
	uint32_t x190 = UINT32_MAX;
	static int32_t x191 = -1;
	uint32_t x192 = 31428U;

	t40 = (((x189+x190)<x191)|x192);

	if (t40 != 31429U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x197 = INT16_MAX;
	int16_t x198 = 189;
	int8_t x199 = INT8_MIN;
	volatile int64_t x200 = INT64_MAX;
	int64_t t41 = INT64_MAX;

	t41 = (((x197+x198)<x199)|x200);

	if (t41 != INT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x205 = -371;
	static volatile int8_t x206 = 1;
	int8_t x207 = INT8_MAX;
	static int32_t x208 = INT32_MIN;
	int32_t t42 = -56333;

	t42 = (((x205+x206)<x207)|x208);

	if (t42 != -2147483647) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x213 = INT32_MIN;
	uint64_t x214 = UINT64_MAX;
	static volatile int64_t x216 = -11264850LL;
	int64_t t43 = 11692155561LL;

	t43 = (((x213+x214)<x215)|x216);

	if (t43 != -11264850LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x217 = UINT64_MAX;
	uint16_t x218 = 963U;
	int64_t x219 = -8054974339LL;
	int16_t x220 = 26;

	t44 = (((x217+x218)<x219)|x220);

	if (t44 != 27) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int16_t x221 = INT16_MIN;
	volatile int8_t x222 = 5;
	static int8_t x223 = INT8_MIN;
	static uint8_t x224 = 21U;
	static volatile int32_t t45 = -40;

	t45 = (((x221+x222)<x223)|x224);

	if (t45 != 21) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x225 = 0;
	volatile int8_t x227 = -22;
	volatile uint8_t x228 = UINT8_MAX;
	static volatile int32_t t46 = 1414564;

	t46 = (((x225+x226)<x227)|x228);

	if (t46 != 255) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x229 = 18U;
	int64_t x230 = INT64_MIN;
	static volatile uint16_t x231 = 409U;
	volatile int16_t x232 = -1;
	int32_t t47 = 51999;

	t47 = (((x229+x230)<x231)|x232);

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int32_t x234 = 22;
	int16_t x235 = -1;
	static int8_t x236 = 3;
	int32_t t48 = -2869511;

	t48 = (((x233+x234)<x235)|x236);

	if (t48 != 3) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x237 = INT8_MAX;
	int32_t t49 = -132;

	t49 = (((x237+x238)<x239)|x240);

	if (t49 != -2089) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint16_t x245 = 18858U;
	volatile int32_t x246 = INT32_MIN;
	int8_t x248 = 1;

	t50 = (((x245+x246)<x247)|x248);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x249 = INT16_MIN;
	uint32_t x250 = 16014716U;
	static int64_t x252 = INT64_MIN;

	t51 = (((x249+x250)<x251)|x252);

	if (t51 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x254 = 35398955U;
	int8_t x256 = 1;
	static volatile int32_t t52 = 638448792;

	t52 = (((x253+x254)<x255)|x256);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x257 = INT16_MAX;
	int8_t x258 = INT8_MAX;
	int32_t x259 = INT32_MIN;
	int16_t x260 = INT16_MAX;

	t53 = (((x257+x258)<x259)|x260);

	if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x261 = INT16_MIN;
	volatile uint16_t x263 = UINT16_MAX;
	int16_t x264 = 5;
	int32_t t54 = -13;

	t54 = (((x261+x262)<x263)|x264);

	if (t54 != 5) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x266 = UINT16_MAX;
	int64_t x268 = INT64_MIN;

	t55 = (((x265+x266)<x267)|x268);

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x269 = UINT32_MAX;
	int8_t x270 = -51;
	int32_t t56 = 375;

	t56 = (((x269+x270)<x271)|x272);

	if (t56 != -128) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x273 = 108U;
	int16_t x274 = -1;
	volatile uint8_t x275 = UINT8_MAX;
	uint8_t x276 = 43U;
	static volatile int32_t t57 = -3939;

	t57 = (((x273+x274)<x275)|x276);

	if (t57 != 43) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x281 = 1;
	int32_t x282 = -177631249;
	static uint8_t x283 = 5U;
	volatile uint32_t t58 = 884029796U;

	t58 = (((x281+x282)<x283)|x284);

	if (t58 != 23811313U) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x285 = 9200023U;
	volatile uint8_t x286 = 2U;
	uint64_t x288 = 198280860088516549LLU;
	uint64_t t59 = 1565440679131LLU;

	t59 = (((x285+x286)<x287)|x288);

	if (t59 != 198280860088516549LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x289 = UINT16_MAX;
	int16_t x290 = -1;
	uint8_t x291 = 0U;
	static uint64_t x292 = 790522LLU;
	volatile uint64_t t60 = 1391595201LLU;

	t60 = (((x289+x290)<x291)|x292);

	if (t60 != 790522LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x293 = 15U;
	int32_t x294 = INT32_MIN;
	static int8_t x295 = INT8_MAX;
	int8_t x296 = INT8_MIN;

	t61 = (((x293+x294)<x295)|x296);

	if (t61 != -127) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x297 = -1;
	static volatile int8_t x300 = INT8_MAX;
	volatile int32_t t62 = -361;

	t62 = (((x297+x298)<x299)|x300);

	if (t62 != 127) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x301 = 8715825U;
	static int16_t x302 = INT16_MAX;
	uint64_t x303 = 23415989LLU;
	int8_t x304 = -1;
	volatile int32_t t63 = 689010;

	t63 = (((x301+x302)<x303)|x304);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x305 = 1567U;
	volatile int8_t x307 = 17;
	static int8_t x308 = 0;
	volatile int32_t t64 = 8127;

	t64 = (((x305+x306)<x307)|x308);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x309 = UINT8_MAX;
	uint16_t x310 = UINT16_MAX;
	int64_t x311 = -394144LL;
	volatile int8_t x312 = -20;
	volatile int32_t t65 = -26027;

	t65 = (((x309+x310)<x311)|x312);

	if (t65 != -20) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x313 = 7596576U;
	static int16_t x314 = INT16_MAX;
	volatile int32_t x315 = -1;
	static int16_t x316 = INT16_MIN;
	int32_t t66 = 9668;

	t66 = (((x313+x314)<x315)|x316);

	if (t66 != -32767) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x317 = 7705082032LL;
	static uint64_t x319 = 235127584LLU;
	int64_t t67 = INT64_MIN;

	t67 = (((x317+x318)<x319)|x320);

	if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x321 = -2;
	int16_t x323 = -1;
	static int16_t x324 = 4054;

	t68 = (((x321+x322)<x323)|x324);

	if (t68 != 4055) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x325 = UINT64_MAX;
	int16_t x326 = -7203;
	int16_t x328 = 10;

	t69 = (((x325+x326)<x327)|x328);

	if (t69 != 11) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x329 = 1;
	int16_t x330 = 7119;
	static uint8_t x331 = 5U;
	static volatile int16_t x332 = 409;
	int32_t t70 = 240985;

	t70 = (((x329+x330)<x331)|x332);

	if (t70 != 409) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x333 = -1LL;
	uint32_t x334 = 9U;
	volatile int8_t x335 = INT8_MIN;
	int32_t x336 = INT32_MIN;

	t71 = (((x333+x334)<x335)|x336);

	if (t71 != INT32_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x338 = UINT16_MAX;
	volatile int16_t x339 = INT16_MAX;
	int16_t x340 = -30;
	volatile int32_t t72 = 11;

	t72 = (((x337+x338)<x339)|x340);

	if (t72 != -30) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x342 = INT8_MAX;
	volatile int32_t x343 = -53988;
	int8_t x344 = 58;
	volatile int32_t t73 = 0;

	t73 = (((x341+x342)<x343)|x344);

	if (t73 != 59) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x345 = INT8_MAX;
	int16_t x346 = -1;
	volatile int16_t x348 = INT16_MAX;
	int32_t t74 = -431651;

	t74 = (((x345+x346)<x347)|x348);

	if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x353 = INT32_MIN;
	uint32_t x355 = UINT32_MAX;
	int64_t x356 = INT64_MAX;
	volatile int64_t t75 = INT64_MAX;

	t75 = (((x353+x354)<x355)|x356);

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x357 = 28714U;
	static uint16_t x358 = 53U;
	volatile int32_t x359 = -2653795;
	volatile int32_t x360 = -1;
	volatile int32_t t76 = 178563281;

	t76 = (((x357+x358)<x359)|x360);

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x365 = 1607132LLU;
	volatile uint8_t x366 = 13U;
	volatile int8_t x368 = -1;
	static int32_t t77 = -38;

	t77 = (((x365+x366)<x367)|x368);

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x374 = 4554432LLU;
	uint32_t x375 = 27U;
	static uint32_t x376 = UINT32_MAX;
	uint32_t t78 = UINT32_MAX;

	t78 = (((x373+x374)<x375)|x376);

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x381 = 1U;
	volatile int8_t x382 = INT8_MIN;
	uint8_t x383 = 40U;
	int8_t x384 = 7;
	volatile int32_t t79 = -1;

	t79 = (((x381+x382)<x383)|x384);

	if (t79 != 7) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x385 = 0;
	int64_t x386 = INT64_MAX;
	int16_t x387 = INT16_MIN;
	uint32_t x388 = 52U;

	t80 = (((x385+x386)<x387)|x388);

	if (t80 != 52U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x390 = -512895LL;
	volatile uint32_t x391 = 32824782U;
	volatile int32_t t81 = -715186038;

	t81 = (((x389+x390)<x391)|x392);

	if (t81 != -32767) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x393 = 586868523U;
	static uint64_t x394 = 452081624173LLU;
	int8_t x395 = -60;
	uint64_t x396 = 14614577893LLU;
	static volatile uint64_t t82 = 368LLU;

	t82 = (((x393+x394)<x395)|x396);

	if (t82 != 14614577893LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x397 = INT32_MIN;
	static uint64_t x398 = UINT64_MAX;
	int8_t x399 = -1;
	volatile int32_t t83 = -18375;

	t83 = (((x397+x398)<x399)|x400);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x401 = 0U;
	volatile int16_t x402 = INT16_MAX;
	uint32_t x403 = UINT32_MAX;
	volatile int16_t x404 = -1;
	int32_t t84 = 6304;

	t84 = (((x401+x402)<x403)|x404);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x405 = INT8_MAX;
	int32_t x406 = -42;
	int8_t x407 = -1;
	uint8_t x408 = UINT8_MAX;
	int32_t t85 = 25;

	t85 = (((x405+x406)<x407)|x408);

	if (t85 != 255) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x409 = 2922LL;
	static int32_t x410 = 3358897;
	int32_t x411 = -55753945;
	uint64_t x412 = 97566636479950LLU;
	volatile uint64_t t86 = 96LLU;

	t86 = (((x409+x410)<x411)|x412);

	if (t86 != 97566636479950LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x413 = 356U;
	volatile int8_t x414 = INT8_MIN;
	int16_t x415 = INT16_MIN;
	uint8_t x416 = 56U;
	volatile int32_t t87 = -31529502;

	t87 = (((x413+x414)<x415)|x416);

	if (t87 != 56) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x417 = UINT32_MAX;
	int32_t x420 = -1;
	volatile int32_t t88 = -1749565;

	t88 = (((x417+x418)<x419)|x420);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x421 = 639812;
	uint16_t x422 = 564U;
	uint16_t x424 = 1U;

	t89 = (((x421+x422)<x423)|x424);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x425 = INT16_MIN;
	int8_t x426 = -1;
	volatile int16_t x427 = INT16_MIN;
	static uint32_t t90 = 1U;

	t90 = (((x425+x426)<x427)|x428);

	if (t90 != 217U) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x429 = -1;
	int8_t x431 = -1;
	static int32_t x432 = INT32_MIN;

	t91 = (((x429+x430)<x431)|x432);

	if (t91 != -2147483647) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x437 = INT32_MIN;
	int64_t x438 = -843723LL;
	int32_t x439 = INT32_MIN;
	static int64_t t92 = 536431624649035LL;

	t92 = (((x437+x438)<x439)|x440);

	if (t92 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x445 = -346;
	int8_t x446 = INT8_MIN;
	uint16_t x447 = 25567U;
	uint16_t x448 = 0U;
	int32_t t93 = 7;

	t93 = (((x445+x446)<x447)|x448);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x449 = INT8_MAX;
	volatile int8_t x450 = -1;
	int32_t x452 = -1;
	int32_t t94 = -769044;

	t94 = (((x449+x450)<x451)|x452);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x453 = -6779168LL;
	int16_t x454 = 2;
	uint64_t x455 = UINT64_MAX;
	int16_t x456 = -211;
	int32_t t95 = 131240064;

	t95 = (((x453+x454)<x455)|x456);

	if (t95 != -211) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x457 = 977846894420720LLU;
	int32_t x458 = -1;
	int8_t x460 = INT8_MIN;
	static volatile int32_t t96 = -217444;

	t96 = (((x457+x458)<x459)|x460);

	if (t96 != -127) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x461 = UINT64_MAX;
	static int16_t x462 = INT16_MAX;
	int16_t x463 = -1;
	int64_t x464 = INT64_MIN;
	volatile int64_t t97 = 7824LL;

	t97 = (((x461+x462)<x463)|x464);

	if (t97 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x465 = -1;
	int8_t x466 = -1;
	static int8_t x467 = INT8_MIN;
	static int8_t x468 = INT8_MAX;
	static int32_t t98 = -10;

	t98 = (((x465+x466)<x467)|x468);

	if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x471 = 0U;
	volatile int64_t t99 = 12674021035728546LL;

	t99 = (((x469+x470)<x471)|x472);

	if (t99 != -9223372036854775807LL) { NG(); } else { ; }
	
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

