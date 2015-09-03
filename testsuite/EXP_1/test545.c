#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint8_t x1 = 1U;
int16_t x3 = -3464;
volatile uint16_t x5 = UINT16_MAX;
uint64_t t1 = 73641119913037LLU;
int64_t x19 = INT64_MAX;
uint16_t x20 = 2780U;
volatile uint32_t t3 = 239931U;
volatile int32_t t5 = 109488;
int8_t x66 = 1;
int8_t x76 = 0;
volatile int64_t x88 = INT64_MIN;
volatile int32_t x90 = -59;
int8_t x91 = -29;
int64_t x110 = 1079232680603LL;
int16_t x117 = -1;
volatile uint64_t t19 = 9158LLU;
uint32_t x126 = UINT32_MAX;
static volatile uint32_t t21 = UINT32_MAX;
int64_t x129 = INT64_MAX;
int8_t x138 = INT8_MAX;
uint32_t x143 = 2U;
uint32_t x152 = 96383U;
uint8_t x155 = 4U;
int16_t x158 = INT16_MIN;
int64_t t29 = 255575332236985476LL;
uint16_t x170 = 5998U;
volatile int16_t x176 = -1;
int8_t x177 = INT8_MAX;
volatile uint64_t x178 = UINT64_MAX;
int32_t x180 = INT32_MIN;
int16_t x181 = INT16_MAX;
volatile uint32_t x199 = 29U;
int16_t x201 = INT16_MAX;
static int64_t x220 = -39814854399215LL;
int8_t x222 = -10;
int32_t x224 = INT32_MIN;
int32_t x226 = INT32_MIN;
uint16_t x239 = UINT16_MAX;
static int32_t t47 = 21988348;
int32_t x249 = -1;
static int16_t x252 = INT16_MIN;
static int16_t x264 = 214;
volatile uint8_t x270 = UINT8_MAX;
int64_t x282 = -12667LL;
int64_t x296 = -179850558LL;
static uint64_t t57 = 25973552876737LLU;
static uint32_t x309 = 0U;
int16_t x310 = INT16_MIN;
uint32_t x311 = UINT32_MAX;
int16_t x314 = INT16_MIN;
static uint16_t x316 = 6U;
uint8_t x320 = UINT8_MAX;
int8_t x321 = -11;
int64_t x322 = INT64_MIN;
int8_t x329 = -1;
uint16_t x330 = UINT16_MAX;
int64_t x331 = 23LL;
uint16_t x338 = 2U;
uint64_t t66 = 29LLU;
static uint64_t x346 = 2134843480200LLU;
volatile int64_t x357 = -1LL;
int32_t x364 = INT32_MAX;
volatile int64_t x381 = INT64_MIN;
int8_t x386 = INT8_MIN;
static uint64_t x399 = 1LLU;
volatile int64_t x400 = 44585098LL;
volatile uint64_t t79 = 98779LLU;
uint32_t x402 = 206838U;
uint32_t x404 = 32468U;
volatile int64_t t80 = -27182370814149LL;
static int64_t t81 = INT64_MAX;
uint64_t x410 = UINT64_MAX;
uint64_t x413 = UINT64_MAX;
static volatile uint64_t t84 = 225309LLU;
static uint64_t x423 = 2LLU;
uint64_t t85 = UINT64_MAX;
int8_t x428 = INT8_MAX;
volatile int64_t x430 = INT64_MIN;
int8_t x432 = -3;
volatile int64_t t87 = -877510LL;
volatile int8_t x435 = INT8_MIN;
volatile int64_t x441 = -1483825350LL;
int64_t x451 = -1LL;
int16_t x452 = INT16_MAX;
uint32_t x454 = 88124090U;
uint32_t x455 = UINT32_MAX;
uint64_t t93 = UINT64_MAX;
volatile uint64_t x458 = UINT64_MAX;
volatile uint64_t t94 = 4378772235709143LLU;
static int16_t x466 = INT16_MIN;
volatile uint8_t x475 = 1U;
int16_t x478 = -13669;
int16_t x479 = INT16_MIN;
int8_t x480 = -39;
volatile int64_t x483 = -1254218872443690LL;
volatile int64_t t99 = -7530981387LL;


void f0(void) {
	volatile uint8_t x2 = 4U;
	static uint8_t x4 = 4U;
	volatile int32_t t0 = 8915740;

	t0 = (((x1/x2)*x3)|x4);

	if (t0 != 4) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x6 = 8404085U;
	static int64_t x7 = INT64_MIN;
	static uint64_t x8 = 497184LLU;

	t1 = (((x5/x6)*x7)|x8);

	if (t1 != 497184LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x17 = -1LL;
	static int64_t x18 = -752LL;
	volatile int64_t t2 = -8558592LL;

	t2 = (((x17/x18)*x19)|x20);

	if (t2 != 2780LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x21 = INT8_MAX;
	int32_t x22 = -1;
	uint8_t x23 = 3U;
	uint32_t x24 = 123599U;

	t3 = (((x21/x22)*x23)|x24);

	if (t3 != 4294966991U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x29 = -1LL;
	uint8_t x30 = 16U;
	int32_t x31 = INT32_MIN;
	int16_t x32 = INT16_MAX;
	volatile int64_t t4 = -1781LL;

	t4 = (((x29/x30)*x31)|x32);

	if (t4 != 32767LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x33 = UINT8_MAX;
	volatile int8_t x34 = 1;
	int16_t x35 = 4120;
	int16_t x36 = -1;

	t5 = (((x33/x34)*x35)|x36);

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x41 = -1;
	static int32_t x42 = INT32_MIN;
	int32_t x43 = -1;
	static volatile uint16_t x44 = UINT16_MAX;
	int32_t t6 = 53041045;

	t6 = (((x41/x42)*x43)|x44);

	if (t6 != 65535) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x53 = 61;
	uint64_t x54 = 20LLU;
	volatile uint64_t x55 = 3985857710874LLU;
	uint16_t x56 = 798U;
	volatile uint64_t t7 = 3347442089LLU;

	t7 = (((x53/x54)*x55)|x56);

	if (t7 != 11957573133150LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x57 = 4U;
	int32_t x58 = -1;
	int8_t x59 = -1;
	static uint32_t x60 = 71711U;
	static volatile uint32_t t8 = 6159651U;

	t8 = (((x57/x58)*x59)|x60);

	if (t8 != 71711U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x61 = INT16_MIN;
	volatile int32_t x62 = -1;
	uint16_t x63 = UINT16_MAX;
	int8_t x64 = 44;
	int32_t t9 = -524;

	t9 = (((x61/x62)*x63)|x64);

	if (t9 != 2147450924) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x65 = -1;
	uint64_t x67 = UINT64_MAX;
	volatile int32_t x68 = -56102769;
	volatile uint64_t t10 = 3016653823095199774LLU;

	t10 = (((x65/x66)*x67)|x68);

	if (t10 != 18446744073653448847LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x73 = INT64_MIN;
	int16_t x74 = INT16_MIN;
	uint8_t x75 = 103U;
	int64_t t11 = 183654655045LL;

	t11 = (((x73/x74)*x75)|x76);

	if (t11 != 28991922601197568LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x77 = -1;
	uint32_t x78 = 53902U;
	static uint16_t x79 = 4081U;
	static uint64_t x80 = 3716776832LLU;
	uint64_t t12 = 2061205LLU;

	t12 = (((x77/x78)*x79)|x80);

	if (t12 != 3756643249LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x81 = 0;
	int64_t x82 = INT64_MIN;
	volatile uint8_t x83 = 52U;
	volatile uint32_t x84 = UINT32_MAX;
	int64_t t13 = -13140783849287LL;

	t13 = (((x81/x82)*x83)|x84);

	if (t13 != 4294967295LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x85 = INT16_MAX;
	static uint64_t x86 = 60484885991854LLU;
	int16_t x87 = -3413;
	uint64_t t14 = 83LLU;

	t14 = (((x85/x86)*x87)|x88);

	if (t14 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x89 = INT8_MIN;
	int32_t x92 = INT32_MIN;
	volatile int32_t t15 = 670;

	t15 = (((x89/x90)*x91)|x92);

	if (t15 != -58) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x97 = 0;
	int16_t x98 = -1;
	int8_t x99 = -1;
	int64_t x100 = -1LL;
	int64_t t16 = -2917533356566662581LL;

	t16 = (((x97/x98)*x99)|x100);

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x101 = -1;
	int32_t x102 = -180;
	volatile uint32_t x103 = 11045905U;
	int64_t x104 = 444174728502LL;
	volatile int64_t t17 = -19685LL;

	t17 = (((x101/x102)*x103)|x104);

	if (t17 != 444174728502LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x109 = 29U;
	static uint16_t x111 = UINT16_MAX;
	int64_t x112 = -1LL;
	volatile int64_t t18 = 207747532LL;

	t18 = (((x109/x110)*x111)|x112);

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x118 = -286;
	int64_t x119 = INT64_MIN;
	uint64_t x120 = 8406517289666LLU;

	t19 = (((x117/x118)*x119)|x120);

	if (t19 != 8406517289666LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x121 = 1582174LLU;
	int16_t x122 = INT16_MIN;
	int16_t x123 = -1;
	volatile int64_t x124 = INT64_MIN;
	uint64_t t20 = 9657614LLU;

	t20 = (((x121/x122)*x123)|x124);

	if (t20 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x125 = INT32_MAX;
	static int32_t x127 = -1;
	int32_t x128 = -1;

	t21 = (((x125/x126)*x127)|x128);

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x130 = INT64_MIN;
	static volatile int8_t x131 = INT8_MIN;
	static volatile uint16_t x132 = UINT16_MAX;
	static volatile int64_t t22 = 61211LL;

	t22 = (((x129/x130)*x131)|x132);

	if (t22 != 65535LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x133 = -13;
	int32_t x134 = INT32_MIN;
	int64_t x135 = -1LL;
	volatile int64_t x136 = -1LL;
	int64_t t23 = -1LL;

	t23 = (((x133/x134)*x135)|x136);

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x137 = INT8_MIN;
	uint8_t x139 = 3U;
	static int8_t x140 = -12;
	int32_t t24 = -2601;

	t24 = (((x137/x138)*x139)|x140);

	if (t24 != -3) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x141 = 0;
	int8_t x142 = -25;
	int8_t x144 = INT8_MIN;
	static volatile uint32_t t25 = 390038316U;

	t25 = (((x141/x142)*x143)|x144);

	if (t25 != 4294967168U) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x145 = UINT8_MAX;
	int8_t x146 = INT8_MAX;
	uint64_t x147 = 34424833LLU;
	int16_t x148 = 0;
	volatile uint64_t t26 = 369909900269LLU;

	t26 = (((x145/x146)*x147)|x148);

	if (t26 != 68849666LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x149 = INT16_MIN;
	volatile int8_t x150 = 3;
	static int32_t x151 = 2;
	volatile uint32_t t27 = 4781619U;

	t27 = (((x149/x150)*x151)|x152);

	if (t27 != 4294966015U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x153 = 1;
	uint8_t x154 = 2U;
	volatile int64_t x156 = INT64_MAX;
	volatile int64_t t28 = INT64_MAX;

	t28 = (((x153/x154)*x155)|x156);

	if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x157 = 183;
	uint8_t x159 = 22U;
	int64_t x160 = 17088532312LL;

	t29 = (((x157/x158)*x159)|x160);

	if (t29 != 17088532312LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x161 = 1;
	int32_t x162 = INT32_MAX;
	int8_t x163 = INT8_MIN;
	uint16_t x164 = 222U;
	int32_t t30 = -708470348;

	t30 = (((x161/x162)*x163)|x164);

	if (t30 != 222) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x165 = -763308760;
	int64_t x166 = INT64_MAX;
	int64_t x167 = -1LL;
	static int8_t x168 = -1;
	static volatile int64_t t31 = -6488976910146805LL;

	t31 = (((x165/x166)*x167)|x168);

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x169 = -1LL;
	static int64_t x171 = 1LL;
	int16_t x172 = 112;
	volatile int64_t t32 = 1291744LL;

	t32 = (((x169/x170)*x171)|x172);

	if (t32 != 112LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x173 = -1;
	int64_t x174 = 757LL;
	int8_t x175 = INT8_MIN;
	volatile int64_t t33 = 48122186LL;

	t33 = (((x173/x174)*x175)|x176);

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x179 = -1;
	volatile uint64_t t34 = 1801831286964LLU;

	t34 = (((x177/x178)*x179)|x180);

	if (t34 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x182 = 55LLU;
	volatile int16_t x183 = INT16_MAX;
	volatile int32_t x184 = -1;
	volatile uint64_t t35 = UINT64_MAX;

	t35 = (((x181/x182)*x183)|x184);

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x185 = -1;
	int32_t x186 = 25786695;
	int32_t x187 = -5;
	static int16_t x188 = INT16_MAX;
	volatile int32_t t36 = 40;

	t36 = (((x185/x186)*x187)|x188);

	if (t36 != 32767) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x189 = -1;
	int32_t x190 = INT32_MIN;
	volatile int8_t x191 = INT8_MIN;
	int8_t x192 = INT8_MIN;
	static volatile int32_t t37 = 42628;

	t37 = (((x189/x190)*x191)|x192);

	if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x193 = 3453;
	static int64_t x194 = INT64_MIN;
	volatile int64_t x195 = -677620LL;
	int8_t x196 = -1;
	volatile int64_t t38 = -2632833334892LL;

	t38 = (((x193/x194)*x195)|x196);

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x197 = -1;
	int8_t x198 = INT8_MIN;
	volatile uint32_t x200 = 2U;
	volatile uint32_t t39 = 68312U;

	t39 = (((x197/x198)*x199)|x200);

	if (t39 != 2U) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x202 = 30017U;
	volatile int16_t x203 = -5084;
	volatile int64_t x204 = INT64_MIN;
	volatile int64_t t40 = -10467850LL;

	t40 = (((x201/x202)*x203)|x204);

	if (t40 != -9223372032559813596LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x205 = -40840806;
	uint16_t x206 = UINT16_MAX;
	static uint8_t x207 = UINT8_MAX;
	int8_t x208 = INT8_MIN;
	volatile int32_t t41 = -2819;

	t41 = (((x205/x206)*x207)|x208);

	if (t41 != -17) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x209 = INT16_MIN;
	int64_t x210 = INT64_MAX;
	volatile uint8_t x211 = UINT8_MAX;
	volatile int16_t x212 = 18;
	volatile int64_t t42 = -7654234179594LL;

	t42 = (((x209/x210)*x211)|x212);

	if (t42 != 18LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x213 = 230U;
	uint8_t x214 = 2U;
	volatile uint32_t x215 = 6259U;
	static int32_t x216 = -168648997;
	uint32_t t43 = 1129U;

	t43 = (((x213/x214)*x215)|x216);

	if (t43 != 4126867451U) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x217 = 94U;
	static int8_t x218 = INT8_MIN;
	int32_t x219 = INT32_MAX;
	static volatile int64_t t44 = -102784710088LL;

	t44 = (((x217/x218)*x219)|x220);

	if (t44 != -39814854399215LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x221 = -1;
	uint32_t x223 = 61100963U;
	uint32_t t45 = 0U;

	t45 = (((x221/x222)*x223)|x224);

	if (t45 != 2147483648U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x225 = -1LL;
	static uint32_t x227 = UINT32_MAX;
	uint64_t x228 = 1444531LLU;
	volatile uint64_t t46 = 276032207509LLU;

	t46 = (((x225/x226)*x227)|x228);

	if (t46 != 1444531LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x237 = 27796;
	volatile uint8_t x238 = 3U;
	int16_t x240 = INT16_MIN;

	t47 = (((x237/x238)*x239)|x240);

	if (t47 != -9265) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x241 = -1;
	volatile int16_t x242 = 2154;
	int8_t x243 = INT8_MIN;
	volatile int64_t x244 = INT64_MAX;
	int64_t t48 = INT64_MAX;

	t48 = (((x241/x242)*x243)|x244);

	if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x250 = INT32_MIN;
	volatile int16_t x251 = -109;
	static int32_t t49 = 137;

	t49 = (((x249/x250)*x251)|x252);

	if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x257 = -1LL;
	uint8_t x258 = UINT8_MAX;
	volatile uint32_t x259 = 17598U;
	int16_t x260 = INT16_MAX;
	int64_t t50 = 964858391262LL;

	t50 = (((x257/x258)*x259)|x260);

	if (t50 != 32767LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x261 = 6U;
	int16_t x262 = -715;
	uint64_t x263 = 121083LLU;
	volatile uint64_t t51 = 0LLU;

	t51 = (((x261/x262)*x263)|x264);

	if (t51 != 214LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x265 = INT32_MAX;
	int64_t x266 = 3383LL;
	uint64_t x267 = 372890220321246855LLU;
	int32_t x268 = INT32_MIN;
	volatile uint64_t t52 = 4LLU;

	t52 = (((x265/x266)*x267)|x268);

	if (t52 != 18446744073525295726LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x269 = 9701886LL;
	volatile int8_t x271 = INT8_MAX;
	int32_t x272 = INT32_MIN;
	static int64_t t53 = -5497311836279217LL;

	t53 = (((x269/x270)*x271)|x272);

	if (t53 != -2142651806LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x273 = -13;
	uint64_t x274 = UINT64_MAX;
	static volatile uint64_t x275 = 1453LLU;
	int8_t x276 = -10;
	volatile uint64_t t54 = 7LLU;

	t54 = (((x273/x274)*x275)|x276);

	if (t54 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x281 = -1LL;
	static int8_t x283 = INT8_MIN;
	uint16_t x284 = UINT16_MAX;
	int64_t t55 = 2135058072815469746LL;

	t55 = (((x281/x282)*x283)|x284);

	if (t55 != 65535LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x293 = INT16_MIN;
	static int32_t x294 = 257;
	uint16_t x295 = UINT16_MAX;
	volatile int64_t t56 = -32623LL;

	t56 = (((x293/x294)*x295)|x296);

	if (t56 != -3689729LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x297 = 0U;
	static uint8_t x298 = UINT8_MAX;
	uint64_t x299 = 416LLU;
	uint8_t x300 = 9U;

	t57 = (((x297/x298)*x299)|x300);

	if (t57 != 9LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x301 = -1595268LL;
	int32_t x302 = INT32_MIN;
	int8_t x303 = INT8_MAX;
	uint64_t x304 = 524556520268LLU;
	volatile uint64_t t58 = 258282706911973156LLU;

	t58 = (((x301/x302)*x303)|x304);

	if (t58 != 524556520268LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x305 = 32729473LLU;
	volatile uint8_t x306 = 19U;
	volatile int16_t x307 = -11281;
	volatile int64_t x308 = 1300670LL;
	volatile uint64_t t59 = 962LLU;

	t59 = (((x305/x306)*x307)|x308);

	if (t59 != 18446744054277070079LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x312 = 26U;
	volatile uint32_t t60 = 2U;

	t60 = (((x309/x310)*x311)|x312);

	if (t60 != 26U) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x313 = 105078U;
	volatile uint32_t x315 = UINT32_MAX;
	uint32_t t61 = 509537699U;

	t61 = (((x313/x314)*x315)|x316);

	if (t61 != 6U) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x317 = 4476962696135446705LLU;
	uint16_t x318 = 11770U;
	uint8_t x319 = 1U;
	uint64_t t62 = 145084366LLU;

	t62 = (((x317/x318)*x319)|x320);

	if (t62 != 380370662373631LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x323 = UINT32_MAX;
	volatile int8_t x324 = -1;
	int64_t t63 = 124385575887185LL;

	t63 = (((x321/x322)*x323)|x324);

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x325 = 384LLU;
	static uint64_t x326 = UINT64_MAX;
	uint32_t x327 = UINT32_MAX;
	volatile uint16_t x328 = 17030U;
	uint64_t t64 = 5LLU;

	t64 = (((x325/x326)*x327)|x328);

	if (t64 != 17030LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x332 = 417892U;
	volatile int64_t t65 = -2LL;

	t65 = (((x329/x330)*x331)|x332);

	if (t65 != 417892LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x337 = -4184724429887LL;
	uint8_t x339 = 48U;
	static volatile uint64_t x340 = 2850043098516724706LLU;

	t66 = (((x337/x338)*x339)|x340);

	if (t66 != 18446717380885208050LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x341 = UINT8_MAX;
	int32_t x342 = INT32_MAX;
	int16_t x343 = INT16_MAX;
	static volatile int8_t x344 = INT8_MAX;
	static int32_t t67 = 188914;

	t67 = (((x341/x342)*x343)|x344);

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint64_t x345 = UINT64_MAX;
	static uint32_t x347 = UINT32_MAX;
	int64_t x348 = INT64_MIN;
	volatile uint64_t t68 = 8123302709866LLU;

	t68 = (((x345/x346)*x347)|x348);

	if (t68 != 9260483964487608038LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int16_t x349 = INT16_MAX;
	int16_t x350 = INT16_MIN;
	int64_t x351 = -1LL;
	static volatile uint8_t x352 = 1U;
	static volatile int64_t t69 = 75668LL;

	t69 = (((x349/x350)*x351)|x352);

	if (t69 != 1LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x353 = UINT8_MAX;
	static uint32_t x354 = 687189U;
	uint16_t x355 = UINT16_MAX;
	int64_t x356 = -1LL;
	static volatile int64_t t70 = -2993LL;

	t70 = (((x353/x354)*x355)|x356);

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x358 = INT16_MIN;
	static int16_t x359 = 15;
	int16_t x360 = INT16_MIN;
	static volatile int64_t t71 = 279089451391LL;

	t71 = (((x357/x358)*x359)|x360);

	if (t71 != -32768LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x361 = -218;
	int64_t x362 = -1LL;
	int32_t x363 = 5613;
	int64_t t72 = 621047827467241LL;

	t72 = (((x361/x362)*x363)|x364);

	if (t72 != 2147483647LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x365 = -1;
	volatile int64_t x366 = 312240LL;
	uint16_t x367 = 458U;
	int64_t x368 = -1LL;
	volatile int64_t t73 = 90365284LL;

	t73 = (((x365/x366)*x367)|x368);

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x369 = INT64_MIN;
	uint16_t x370 = UINT16_MAX;
	static volatile int8_t x371 = INT8_MIN;
	static uint32_t x372 = 1005U;
	static int64_t t74 = -84626LL;

	t74 = (((x369/x370)*x371)|x372);

	if (t74 != 18014673391584237LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x377 = INT16_MIN;
	int32_t x378 = -2017063;
	uint32_t x379 = 430U;
	volatile int32_t x380 = INT32_MIN;
	uint32_t t75 = 11969390U;

	t75 = (((x377/x378)*x379)|x380);

	if (t75 != 2147483648U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x382 = UINT64_MAX;
	static int8_t x383 = INT8_MIN;
	int8_t x384 = 2;
	volatile uint64_t t76 = 11431804LLU;

	t76 = (((x381/x382)*x383)|x384);

	if (t76 != 2LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x385 = INT16_MIN;
	int32_t x387 = -140407;
	int16_t x388 = INT16_MIN;
	volatile int32_t t77 = -6236442;

	t77 = (((x385/x386)*x387)|x388);

	if (t77 != -30464) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x393 = INT32_MIN;
	int64_t x394 = INT64_MIN;
	volatile int16_t x395 = -1;
	static int16_t x396 = -1;
	static int64_t t78 = 1LL;

	t78 = (((x393/x394)*x395)|x396);

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x397 = INT8_MAX;
	uint64_t x398 = 3927608729LLU;

	t79 = (((x397/x398)*x399)|x400);

	if (t79 != 44585098LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x401 = -1LL;
	int8_t x403 = INT8_MIN;

	t80 = (((x401/x402)*x403)|x404);

	if (t80 != 32468LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x405 = UINT32_MAX;
	int64_t x406 = INT64_MIN;
	int16_t x407 = INT16_MIN;
	static int64_t x408 = INT64_MAX;

	t81 = (((x405/x406)*x407)|x408);

	if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint8_t x409 = 36U;
	volatile int8_t x411 = 11;
	int16_t x412 = 4720;
	volatile uint64_t t82 = 6228306LLU;

	t82 = (((x409/x410)*x411)|x412);

	if (t82 != 4720LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x414 = 5808576628725LL;
	uint16_t x415 = 22128U;
	int16_t x416 = INT16_MIN;
	uint64_t t83 = 40722189237276941LLU;

	t83 = (((x413/x414)*x415)|x416);

	if (t83 != 18446744073709547632LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x417 = 1069563961085LL;
	static uint64_t x418 = UINT64_MAX;
	volatile int32_t x419 = INT32_MIN;
	int64_t x420 = INT64_MAX;

	t84 = (((x417/x418)*x419)|x420);

	if (t84 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x421 = UINT32_MAX;
	volatile int32_t x422 = 207;
	int32_t x424 = -1;

	t85 = (((x421/x422)*x423)|x424);

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x425 = -467;
	uint64_t x426 = UINT64_MAX;
	static int32_t x427 = -1;
	volatile uint64_t t86 = 6378340LLU;

	t86 = (((x425/x426)*x427)|x428);

	if (t86 != 127LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x429 = INT64_MIN;
	int64_t x431 = INT64_MIN;

	t87 = (((x429/x430)*x431)|x432);

	if (t87 != -3LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x433 = 8;
	int8_t x434 = INT8_MIN;
	int64_t x436 = -1LL;
	static int64_t t88 = 13238LL;

	t88 = (((x433/x434)*x435)|x436);

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x437 = UINT64_MAX;
	int8_t x438 = INT8_MAX;
	int8_t x439 = INT8_MAX;
	volatile int8_t x440 = -1;
	volatile uint64_t t89 = UINT64_MAX;

	t89 = (((x437/x438)*x439)|x440);

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x442 = 429351266393LL;
	uint8_t x443 = UINT8_MAX;
	static int8_t x444 = INT8_MIN;
	int64_t t90 = 395049LL;

	t90 = (((x441/x442)*x443)|x444);

	if (t90 != -128LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x445 = 4993428LLU;
	int16_t x446 = INT16_MIN;
	int8_t x447 = INT8_MIN;
	int32_t x448 = 1223592;
	uint64_t t91 = 43442LLU;

	t91 = (((x445/x446)*x447)|x448);

	if (t91 != 1223592LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x449 = INT64_MIN;
	volatile uint32_t x450 = 2787812U;
	volatile int64_t t92 = -36193LL;

	t92 = (((x449/x450)*x451)|x452);

	if (t92 != 3308462735359LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x453 = INT32_MIN;
	volatile uint64_t x456 = UINT64_MAX;

	t93 = (((x453/x454)*x455)|x456);

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x457 = 22446543999127650LLU;
	int16_t x459 = INT16_MAX;
	volatile int8_t x460 = INT8_MIN;

	t94 = (((x457/x458)*x459)|x460);

	if (t94 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x465 = INT32_MIN;
	int16_t x467 = INT16_MIN;
	uint16_t x468 = 127U;
	static volatile int32_t t95 = 1;

	t95 = (((x465/x466)*x467)|x468);

	if (t95 != -2147483521) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x469 = INT64_MIN;
	uint64_t x470 = 4305LLU;
	uint32_t x471 = UINT32_MAX;
	volatile int64_t x472 = INT64_MAX;
	volatile uint64_t t96 = UINT64_MAX;

	t96 = (((x469/x470)*x471)|x472);

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x473 = -1;
	int16_t x474 = -1;
	int32_t x476 = INT32_MIN;
	volatile int32_t t97 = -262105924;

	t97 = (((x473/x474)*x475)|x476);

	if (t97 != -2147483647) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x477 = 68;
	volatile int32_t t98 = 7288;

	t98 = (((x477/x478)*x479)|x480);

	if (t98 != -39) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x481 = -1;
	static int32_t x482 = 13;
	int8_t x484 = 3;

	t99 = (((x481/x482)*x483)|x484);

	if (t99 != 3LL) { NG(); } else { ; }
	
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

