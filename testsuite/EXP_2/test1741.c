#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x10 = UINT64_MAX;
volatile uint64_t t1 = UINT64_MAX;
uint16_t x17 = 1U;
int16_t x18 = INT16_MAX;
uint32_t x23 = 71623279U;
uint8_t x25 = 1U;
static int16_t x26 = -142;
int16_t x27 = 55;
int64_t x28 = -1LL;
volatile int64_t t4 = -1LL;
static int8_t x40 = INT8_MAX;
volatile uint32_t t8 = 7U;
uint64_t x47 = UINT64_MAX;
uint64_t t9 = 410040985184700652LLU;
static int8_t x52 = -1;
static uint32_t x62 = UINT32_MAX;
int16_t x64 = 15;
volatile uint32_t t12 = 5226647U;
int32_t x66 = INT32_MIN;
static int64_t t13 = 13559383589LL;
uint32_t t14 = 908U;
volatile int64_t x76 = -18394916740LL;
static volatile int64_t x77 = INT64_MAX;
static volatile uint32_t t18 = 244080U;
int16_t x98 = -1;
int64_t x106 = 10006LL;
uint64_t t21 = 3522227176263794LLU;
volatile int16_t x121 = INT16_MIN;
int64_t x124 = INT64_MIN;
static volatile uint32_t x126 = UINT32_MAX;
static int16_t x150 = INT16_MAX;
uint32_t x151 = 933U;
uint32_t x156 = 6U;
int8_t x165 = INT8_MAX;
volatile uint8_t x171 = UINT8_MAX;
uint16_t x177 = 457U;
volatile int32_t t33 = 371;
int16_t x185 = -1;
uint64_t t35 = 2357LLU;
int8_t x194 = INT8_MAX;
int8_t x202 = -57;
int32_t x204 = INT32_MAX;
uint32_t t39 = 81801U;
static volatile int16_t x212 = INT16_MIN;
int16_t x215 = -1;
int64_t x222 = -84LL;
int16_t x224 = 12;
int8_t x225 = -5;
static int64_t x227 = INT64_MAX;
volatile int8_t x229 = INT8_MAX;
int8_t x244 = 1;
static int64_t x245 = INT64_MAX;
static int64_t x258 = -31469LL;
int64_t x260 = 7792772260696136LL;
uint32_t x265 = UINT32_MAX;
uint64_t x267 = 2442049617243LLU;
static int8_t x268 = -46;
int8_t x272 = 0;
volatile int64_t t52 = 778965354LL;
volatile int16_t x287 = 4;
int8_t x302 = -1;
uint64_t x305 = UINT64_MAX;
uint64_t t58 = UINT64_MAX;
volatile int32_t t60 = 123578459;
static int32_t x318 = -1;
int16_t x324 = INT16_MIN;
int16_t x329 = INT16_MAX;
static volatile uint8_t x330 = UINT8_MAX;
volatile int64_t x334 = -1LL;
uint64_t x345 = UINT64_MAX;
uint8_t x348 = 4U;
int8_t x362 = INT8_MIN;
volatile int32_t x368 = INT32_MIN;
static int32_t x377 = INT32_MAX;
int64_t x378 = 375LL;
int16_t x389 = INT16_MAX;
int16_t x392 = 0;
volatile int16_t x396 = -929;
volatile int64_t t74 = 18LL;
int8_t x400 = 1;
int16_t x403 = INT16_MIN;
int8_t x405 = 10;
int64_t x414 = INT64_MAX;
uint32_t x433 = UINT32_MAX;
volatile int32_t t84 = 1219376;
static volatile uint64_t t85 = 78663055LLU;
int8_t x459 = INT8_MAX;
static int8_t x469 = INT8_MIN;
uint64_t x471 = UINT64_MAX;
volatile uint64_t x475 = 204787549086119537LLU;
int8_t x476 = INT8_MIN;
static int32_t x482 = INT32_MAX;
static volatile int32_t x484 = -67897239;
volatile uint64_t t89 = 258079214LLU;
int8_t x491 = -1;
volatile uint8_t x496 = UINT8_MAX;
int16_t x503 = INT16_MIN;
int32_t x505 = INT32_MIN;
int8_t x515 = 9;
volatile int16_t x532 = -82;
int8_t x535 = INT8_MAX;


void f0(void) {
	uint64_t x5 = UINT64_MAX;
	int64_t x6 = -1LL;
	int32_t x7 = INT32_MIN;
	int32_t x8 = -31;
	uint64_t t0 = 35227579LLU;

	t0 = ((x5/(x6&x7))|x8);

	if (t0 != 18446744073709551585LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x9 = 59U;
	int32_t x11 = -1;
	int16_t x12 = -1;

	t1 = ((x9/(x10&x11))|x12);

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x19 = 5U;
	uint16_t x20 = UINT16_MAX;
	volatile int32_t t2 = -1;

	t2 = ((x17/(x18&x19))|x20);

	if (t2 != 65535) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x21 = INT64_MIN;
	uint64_t x22 = 1852800744812LLU;
	volatile int32_t x24 = -1;
	volatile uint64_t t3 = UINT64_MAX;

	t3 = ((x21/(x22&x23))|x24);

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {


	t4 = ((x25/(x26&x27))|x28);

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x29 = UINT64_MAX;
	int8_t x30 = INT8_MIN;
	int8_t x31 = -1;
	uint32_t x32 = 257155968U;
	uint64_t t5 = 4042477LLU;

	t5 = ((x29/(x30&x31))|x32);

	if (t5 != 257155969LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x33 = 82081192U;
	uint32_t x34 = 1U;
	int8_t x35 = -1;
	int64_t x36 = INT64_MIN;
	static volatile int64_t t6 = 27301030207394LL;

	t6 = ((x33/(x34&x35))|x36);

	if (t6 != -9223372036772694616LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x37 = INT64_MAX;
	int8_t x38 = -1;
	int8_t x39 = INT8_MAX;
	volatile int64_t t7 = -6859536LL;

	t7 = ((x37/(x38&x39))|x40);

	if (t7 != 72624976668147967LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x41 = 1586062794U;
	uint32_t x42 = 11489U;
	int16_t x43 = INT16_MAX;
	volatile int32_t x44 = INT32_MIN;

	t8 = ((x41/(x42&x43))|x44);

	if (t8 != 2147621698U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x45 = -1;
	uint8_t x46 = 6U;
	uint16_t x48 = 27U;

	t9 = ((x45/(x46&x47))|x48);

	if (t9 != 3074457345618258619LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x49 = 37102507U;
	int16_t x50 = INT16_MIN;
	uint32_t x51 = UINT32_MAX;
	static volatile uint32_t t10 = UINT32_MAX;

	t10 = ((x49/(x50&x51))|x52);

	if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x57 = 1774U;
	volatile uint16_t x58 = 5U;
	int16_t x59 = INT16_MAX;
	uint16_t x60 = UINT16_MAX;
	static uint32_t t11 = 510053U;

	t11 = ((x57/(x58&x59))|x60);

	if (t11 != 65535U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x61 = INT32_MAX;
	int32_t x63 = 1;

	t12 = ((x61/(x62&x63))|x64);

	if (t12 != 2147483647U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x65 = INT64_MAX;
	static int64_t x67 = -1LL;
	int8_t x68 = 7;

	t13 = ((x65/(x66&x67))|x68);

	if (t13 != -4294967289LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x69 = 0;
	uint32_t x70 = 382127U;
	uint32_t x71 = UINT32_MAX;
	int32_t x72 = INT32_MIN;

	t14 = ((x69/(x70&x71))|x72);

	if (t14 != 2147483648U) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x73 = 0U;
	uint64_t x74 = 4947LLU;
	int8_t x75 = INT8_MIN;
	volatile uint64_t t15 = 1LLU;

	t15 = ((x73/(x74&x75))|x76);

	if (t15 != 18446744055314634876LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x78 = 12U;
	uint16_t x79 = UINT16_MAX;
	volatile int64_t x80 = -1LL;
	int64_t t16 = -5064182395LL;

	t16 = ((x77/(x78&x79))|x80);

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x81 = INT64_MIN;
	int16_t x82 = -15351;
	int64_t x83 = 1LL;
	int8_t x84 = -1;
	static int64_t t17 = -2888492144LL;

	t17 = ((x81/(x82&x83))|x84);

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x93 = INT8_MAX;
	static uint32_t x94 = 209114U;
	volatile int16_t x95 = INT16_MIN;
	int16_t x96 = INT16_MIN;

	t18 = ((x93/(x94&x95))|x96);

	if (t18 != 4294934528U) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x97 = INT16_MIN;
	uint64_t x99 = UINT64_MAX;
	static int8_t x100 = INT8_MIN;
	uint64_t t19 = 0LLU;

	t19 = ((x97/(x98&x99))|x100);

	if (t19 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x101 = 1;
	uint64_t x102 = 872767237LLU;
	static uint8_t x103 = 3U;
	int8_t x104 = INT8_MIN;
	uint64_t t20 = 135364913490926LLU;

	t20 = ((x101/(x102&x103))|x104);

	if (t20 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x105 = INT8_MAX;
	int8_t x107 = INT8_MAX;
	uint64_t x108 = 21007LLU;

	t21 = ((x105/(x106&x107))|x108);

	if (t21 != 21007LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x109 = INT8_MIN;
	volatile int64_t x110 = INT64_MIN;
	int32_t x111 = INT32_MIN;
	volatile uint8_t x112 = UINT8_MAX;
	int64_t t22 = -1084966LL;

	t22 = ((x109/(x110&x111))|x112);

	if (t22 != 255LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x113 = 385900475943432001LLU;
	volatile int8_t x114 = INT8_MIN;
	int64_t x115 = -5477714LL;
	uint16_t x116 = 93U;
	uint64_t t23 = 6LLU;

	t23 = ((x113/(x114&x115))|x116);

	if (t23 != 93LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x117 = 931;
	volatile int16_t x118 = 1;
	static uint16_t x119 = UINT16_MAX;
	volatile uint32_t x120 = 763871632U;
	static volatile uint32_t t24 = 7105931U;

	t24 = ((x117/(x118&x119))|x120);

	if (t24 != 763872179U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x122 = INT16_MAX;
	volatile uint16_t x123 = 170U;
	volatile int64_t t25 = -4LL;

	t25 = ((x121/(x122&x123))|x124);

	if (t25 != -192LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x125 = 1141496267362201680LLU;
	volatile int16_t x127 = -1;
	static int8_t x128 = -1;
	uint64_t t26 = UINT64_MAX;

	t26 = ((x125/(x126&x127))|x128);

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x141 = INT32_MIN;
	uint8_t x142 = 1U;
	uint64_t x143 = UINT64_MAX;
	static int16_t x144 = 199;
	volatile uint64_t t27 = 13LLU;

	t27 = ((x141/(x142&x143))|x144);

	if (t27 != 18446744071562068167LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x149 = INT16_MIN;
	int32_t x152 = -850628;
	volatile uint32_t t28 = 2U;

	t28 = ((x149/(x150&x151))|x152);

	if (t28 != 4294393343U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x153 = INT32_MIN;
	int64_t x154 = INT64_MAX;
	int16_t x155 = INT16_MIN;
	int64_t t29 = 0LL;

	t29 = ((x153/(x154&x155))|x156);

	if (t29 != 6LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x157 = INT16_MAX;
	int64_t x158 = -1LL;
	static int32_t x159 = -509;
	int16_t x160 = INT16_MIN;
	int64_t t30 = -434LL;

	t30 = ((x157/(x158&x159))|x160);

	if (t30 != -64LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x166 = UINT16_MAX;
	int32_t x167 = -1;
	int16_t x168 = 802;
	int32_t t31 = 9577;

	t31 = ((x165/(x166&x167))|x168);

	if (t31 != 802) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x169 = INT64_MIN;
	static uint32_t x170 = UINT32_MAX;
	int16_t x172 = 5187;
	int64_t t32 = 0LL;

	t32 = ((x169/(x170&x171))|x172);

	if (t32 != -36170086419038269LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x178 = INT32_MIN;
	int16_t x179 = -1;
	uint16_t x180 = UINT16_MAX;

	t33 = ((x177/(x178&x179))|x180);

	if (t33 != 65535) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint16_t x181 = UINT16_MAX;
	volatile int64_t x182 = 513917249LL;
	uint16_t x183 = 3U;
	uint16_t x184 = UINT16_MAX;
	volatile int64_t t34 = -1563500571999944LL;

	t34 = ((x181/(x182&x183))|x184);

	if (t34 != 65535LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x186 = -1;
	uint32_t x187 = UINT32_MAX;
	uint64_t x188 = 997823403780469LLU;

	t35 = ((x185/(x186&x187))|x188);

	if (t35 != 997823403780469LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x189 = -9;
	uint32_t x190 = 1068356538U;
	volatile int8_t x191 = INT8_MAX;
	int32_t x192 = -1;
	volatile uint32_t t36 = UINT32_MAX;

	t36 = ((x189/(x190&x191))|x192);

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x193 = 75446LL;
	int16_t x195 = 5336;
	int64_t x196 = 1LL;
	static int64_t t37 = -1LL;

	t37 = ((x193/(x194&x195))|x196);

	if (t37 != 857LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x197 = -27326286038LL;
	volatile int32_t x198 = INT32_MIN;
	int8_t x199 = -1;
	int32_t x200 = -1;
	int64_t t38 = -1084524675998101197LL;

	t38 = ((x197/(x198&x199))|x200);

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x201 = -1;
	uint32_t x203 = 353870132U;

	t39 = ((x201/(x202&x203))|x204);

	if (t39 != 2147483647U) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x205 = UINT8_MAX;
	int32_t x206 = -194914436;
	static volatile uint8_t x207 = UINT8_MAX;
	uint64_t x208 = 70171254938389434LLU;
	uint64_t t40 = 10557035558LLU;

	t40 = ((x205/(x206&x207))|x208);

	if (t40 != 70171254938389434LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x209 = -1;
	int32_t x210 = INT32_MAX;
	int8_t x211 = -31;
	volatile int32_t t41 = 1;

	t41 = ((x209/(x210&x211))|x212);

	if (t41 != -32768) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x213 = -1;
	int64_t x214 = INT64_MIN;
	int32_t x216 = -1329;
	int64_t t42 = 1095367487411042LL;

	t42 = ((x213/(x214&x215))|x216);

	if (t42 != -1329LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x221 = UINT64_MAX;
	uint64_t x223 = 5863178472883249LLU;
	static volatile uint64_t t43 = 15922878807458394LLU;

	t43 = ((x221/(x222&x223))|x224);

	if (t43 != 3150LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x226 = -1;
	int16_t x228 = -1;
	static volatile int64_t t44 = -6023795LL;

	t44 = ((x225/(x226&x227))|x228);

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x230 = -7490;
	static uint32_t x231 = UINT32_MAX;
	int8_t x232 = -1;
	volatile uint32_t t45 = UINT32_MAX;

	t45 = ((x229/(x230&x231))|x232);

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x241 = -3;
	int32_t x242 = INT32_MAX;
	uint32_t x243 = UINT32_MAX;
	volatile uint32_t t46 = 961541U;

	t46 = ((x241/(x242&x243))|x244);

	if (t46 != 1U) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x246 = INT8_MIN;
	uint32_t x247 = UINT32_MAX;
	volatile int16_t x248 = -35;
	volatile int64_t t47 = 61780957LL;

	t47 = ((x245/(x246&x247))|x248);

	if (t47 != -35LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x249 = INT8_MAX;
	volatile int8_t x250 = INT8_MIN;
	static volatile int64_t x251 = -1LL;
	static volatile int64_t x252 = INT64_MAX;
	int64_t t48 = INT64_MAX;

	t48 = ((x249/(x250&x251))|x252);

	if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x257 = -9;
	int8_t x259 = -1;
	volatile int64_t t49 = -4LL;

	t49 = ((x257/(x258&x259))|x260);

	if (t49 != 7792772260696136LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x266 = 24U;
	static uint64_t t50 = 866140415259LLU;

	t50 = ((x265/(x266&x267))|x268);

	if (t50 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x269 = INT16_MIN;
	int16_t x270 = INT16_MAX;
	static int32_t x271 = -1;
	int32_t t51 = -155890;

	t51 = ((x269/(x270&x271))|x272);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x273 = INT32_MAX;
	int16_t x274 = INT16_MIN;
	int32_t x275 = 64763;
	static int64_t x276 = -1LL;

	t52 = ((x273/(x274&x275))|x276);

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x277 = INT8_MIN;
	int16_t x278 = -1;
	uint32_t x279 = 11U;
	int32_t x280 = INT32_MAX;
	uint32_t t53 = 611459416U;

	t53 = ((x277/(x278&x279))|x280);

	if (t53 != 2147483647U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x281 = INT32_MAX;
	int8_t x282 = -1;
	volatile uint32_t x283 = 1125913784U;
	int16_t x284 = INT16_MIN;
	uint32_t t54 = 99749U;

	t54 = ((x281/(x282&x283))|x284);

	if (t54 != 4294934529U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x285 = -68174607;
	int16_t x286 = -1;
	static int16_t x288 = -561;
	volatile int32_t t55 = 99632241;

	t55 = ((x285/(x286&x287))|x288);

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x297 = -13;
	static volatile int16_t x298 = -13;
	static int32_t x299 = -1;
	uint32_t x300 = 13039058U;
	volatile uint32_t t56 = 11546781U;

	t56 = ((x297/(x298&x299))|x300);

	if (t56 != 13039059U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x301 = INT8_MAX;
	uint32_t x303 = 747U;
	int16_t x304 = INT16_MIN;
	uint32_t t57 = 20U;

	t57 = ((x301/(x302&x303))|x304);

	if (t57 != 4294934528U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x306 = INT16_MIN;
	int16_t x307 = INT16_MIN;
	int8_t x308 = -1;

	t58 = ((x305/(x306&x307))|x308);

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x309 = 114005;
	static int64_t x310 = -1LL;
	int8_t x311 = INT8_MAX;
	volatile uint8_t x312 = UINT8_MAX;
	volatile int64_t t59 = 134937761LL;

	t59 = ((x309/(x310&x311))|x312);

	if (t59 != 1023LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x313 = -1;
	volatile uint8_t x314 = UINT8_MAX;
	int8_t x315 = 1;
	static uint8_t x316 = UINT8_MAX;

	t60 = ((x313/(x314&x315))|x316);

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x317 = INT16_MAX;
	int32_t x319 = INT32_MIN;
	int8_t x320 = -1;
	volatile int32_t t61 = -45054;

	t61 = ((x317/(x318&x319))|x320);

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x321 = 23;
	volatile uint64_t x322 = UINT64_MAX;
	volatile int16_t x323 = -1;
	uint64_t t62 = 15LLU;

	t62 = ((x321/(x322&x323))|x324);

	if (t62 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x325 = INT64_MAX;
	static int64_t x326 = -1LL;
	uint32_t x327 = 1958500204U;
	int8_t x328 = INT8_MAX;
	static volatile int64_t t63 = -26336432737636LL;

	t63 = ((x325/(x326&x327))|x328);

	if (t63 != 4709405823LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x331 = -1;
	int8_t x332 = INT8_MIN;
	static int32_t t64 = 1810;

	t64 = ((x329/(x330&x331))|x332);

	if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x333 = INT64_MAX;
	uint32_t x335 = 9741U;
	volatile uint32_t x336 = 14854U;
	static int64_t t65 = -83699896569LL;

	t65 = ((x333/(x334&x335))|x336);

	if (t65 != 946860901022463LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x346 = -1LL;
	int32_t x347 = -6220105;
	volatile uint64_t t66 = 0LLU;

	t66 = ((x345/(x346&x347))|x348);

	if (t66 != 5LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x353 = INT16_MIN;
	volatile int32_t x354 = INT32_MIN;
	volatile int16_t x355 = -241;
	int16_t x356 = 10316;
	volatile int32_t t67 = 583;

	t67 = ((x353/(x354&x355))|x356);

	if (t67 != 10316) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x361 = -315786914918199592LL;
	uint16_t x363 = UINT16_MAX;
	uint32_t x364 = 1886U;
	volatile int64_t t68 = 16030LL;

	t68 = ((x361/(x362&x363))|x364);

	if (t68 != -4827955523745LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x365 = 1U;
	int16_t x366 = INT16_MIN;
	static int64_t x367 = INT64_MIN;
	volatile int64_t t69 = 1956452679220LL;

	t69 = ((x365/(x366&x367))|x368);

	if (t69 != -2147483648LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x373 = -972254LL;
	volatile int8_t x374 = INT8_MIN;
	static int64_t x375 = INT64_MIN;
	int32_t x376 = INT32_MAX;
	int64_t t70 = 458836539LL;

	t70 = ((x373/(x374&x375))|x376);

	if (t70 != 2147483647LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x379 = UINT16_MAX;
	volatile int32_t x380 = INT32_MIN;
	volatile int64_t t71 = -28LL;

	t71 = ((x377/(x378&x379))|x380);

	if (t71 != -2141757025LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x385 = INT16_MIN;
	static int8_t x386 = INT8_MAX;
	int16_t x387 = -1;
	int64_t x388 = INT64_MIN;
	volatile int64_t t72 = 2540960476133LL;

	t72 = ((x385/(x386&x387))|x388);

	if (t72 != -258LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x390 = -17;
	volatile int8_t x391 = -1;
	int32_t t73 = 6748;

	t73 = ((x389/(x390&x391))|x392);

	if (t73 != -1927) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x393 = INT64_MIN;
	static int8_t x394 = INT8_MIN;
	int64_t x395 = INT64_MIN;

	t74 = ((x393/(x394&x395))|x396);

	if (t74 != -929LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x397 = -1;
	int16_t x398 = INT16_MAX;
	static int32_t x399 = -1;
	volatile int32_t t75 = -14;

	t75 = ((x397/(x398&x399))|x400);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x401 = 3;
	uint16_t x402 = UINT16_MAX;
	int8_t x404 = -53;
	int32_t t76 = -8076399;

	t76 = ((x401/(x402&x403))|x404);

	if (t76 != -53) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int32_t x406 = -79820;
	static int32_t x407 = INT32_MIN;
	uint64_t x408 = 6158LLU;
	volatile uint64_t t77 = 6747LLU;

	t77 = ((x405/(x406&x407))|x408);

	if (t77 != 6158LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x413 = -1135;
	static uint16_t x415 = UINT16_MAX;
	static uint16_t x416 = 2U;
	static int64_t t78 = -940116258LL;

	t78 = ((x413/(x414&x415))|x416);

	if (t78 != 2LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x421 = 58U;
	int16_t x422 = 508;
	uint64_t x423 = 122643911LLU;
	static volatile uint8_t x424 = UINT8_MAX;
	uint64_t t79 = 546LLU;

	t79 = ((x421/(x422&x423))|x424);

	if (t79 != 255LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x425 = UINT64_MAX;
	uint32_t x426 = 28869U;
	int8_t x427 = 1;
	uint32_t x428 = 28U;
	volatile uint64_t t80 = UINT64_MAX;

	t80 = ((x425/(x426&x427))|x428);

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x429 = UINT16_MAX;
	volatile int32_t x430 = INT32_MAX;
	int16_t x431 = -1;
	static int64_t x432 = INT64_MIN;
	int64_t t81 = INT64_MIN;

	t81 = ((x429/(x430&x431))|x432);

	if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x434 = 19025LL;
	int8_t x435 = -1;
	int32_t x436 = INT32_MIN;
	volatile int64_t t82 = 705LL;

	t82 = ((x433/(x434&x435))|x436);

	if (t82 != -2147257895LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x437 = INT64_MAX;
	uint32_t x438 = 2487452U;
	static int64_t x439 = INT64_MAX;
	static int64_t x440 = -1LL;
	volatile int64_t t83 = 0LL;

	t83 = ((x437/(x438&x439))|x440);

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x445 = INT8_MIN;
	int32_t x446 = -1;
	volatile int16_t x447 = INT16_MIN;
	uint16_t x448 = UINT16_MAX;

	t84 = ((x445/(x446&x447))|x448);

	if (t84 != 65535) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x453 = 1421832U;
	uint64_t x454 = 961LLU;
	int64_t x455 = -44552598175032LL;
	int8_t x456 = INT8_MIN;

	t85 = ((x453/(x454&x455))|x456);

	if (t85 != 18446744073709551587LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x457 = INT64_MIN;
	static volatile uint32_t x458 = UINT32_MAX;
	uint64_t x460 = UINT64_MAX;
	volatile uint64_t t86 = UINT64_MAX;

	t86 = ((x457/(x458&x459))|x460);

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x470 = INT16_MIN;
	static int32_t x472 = INT32_MAX;
	uint64_t t87 = 1050LLU;

	t87 = ((x469/(x470&x471))|x472);

	if (t87 != 2147483647LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x473 = INT16_MIN;
	int64_t x474 = -235920848356LL;
	volatile uint64_t t88 = 21033566060LLU;

	t88 = ((x473/(x474&x475))|x476);

	if (t88 != 18446744073709551578LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x481 = INT16_MIN;
	uint64_t x483 = 1741062126LLU;

	t89 = ((x481/(x482&x483))|x484);

	if (t89 != 18446744073709026041LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x489 = UINT32_MAX;
	int16_t x490 = 63;
	static uint64_t x492 = UINT64_MAX;
	uint64_t t90 = UINT64_MAX;

	t90 = ((x489/(x490&x491))|x492);

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x493 = 7;
	uint32_t x494 = 4U;
	static volatile int32_t x495 = -1;
	uint32_t t91 = 10051414U;

	t91 = ((x493/(x494&x495))|x496);

	if (t91 != 255U) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x497 = 58LLU;
	uint8_t x498 = UINT8_MAX;
	volatile uint8_t x499 = 121U;
	int8_t x500 = -1;
	static uint64_t t92 = UINT64_MAX;

	t92 = ((x497/(x498&x499))|x500);

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x501 = 2U;
	uint32_t x502 = 54830500U;
	int16_t x504 = INT16_MAX;
	uint32_t t93 = 0U;

	t93 = ((x501/(x502&x503))|x504);

	if (t93 != 32767U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x506 = -1;
	static volatile int64_t x507 = -18337344LL;
	uint16_t x508 = 1764U;
	int64_t t94 = -107085627689750LL;

	t94 = ((x505/(x506&x507))|x508);

	if (t94 != 1781LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x509 = -4818060;
	volatile int32_t x510 = 476513019;
	int8_t x511 = INT8_MIN;
	int8_t x512 = INT8_MAX;
	volatile int32_t t95 = -42;

	t95 = ((x509/(x510&x511))|x512);

	if (t95 != 127) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x513 = INT16_MAX;
	uint32_t x514 = 1011806U;
	int32_t x516 = 14402907;
	volatile uint32_t t96 = 1367561U;

	t96 = ((x513/(x514&x515))|x516);

	if (t96 != 14405631U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x525 = INT8_MIN;
	int16_t x526 = 49;
	uint64_t x527 = UINT64_MAX;
	static volatile int64_t x528 = INT64_MAX;
	volatile uint64_t t97 = 5861404LLU;

	t97 = ((x525/(x526&x527))|x528);

	if (t97 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x529 = INT32_MIN;
	int16_t x530 = INT16_MAX;
	int32_t x531 = -47220;
	int32_t t98 = 81;

	t98 = ((x529/(x530&x531))|x532);

	if (t98 != -82) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x533 = UINT32_MAX;
	int32_t x534 = -1;
	int32_t x536 = INT32_MIN;
	volatile uint32_t t99 = 9873417U;

	t99 = ((x533/(x534&x535))|x536);

	if (t99 != 2181302288U) { NG(); } else { ; }
	
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

