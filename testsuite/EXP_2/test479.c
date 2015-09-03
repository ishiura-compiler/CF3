#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = INT8_MAX;
int32_t x5 = -16423453;
uint64_t x7 = UINT64_MAX;
uint64_t t1 = 590588233190115542LLU;
int16_t x10 = 3;
uint32_t x19 = 738715236U;
static int16_t x24 = INT16_MIN;
volatile int8_t x29 = 7;
int16_t x30 = -1;
volatile int8_t x31 = 0;
uint16_t x46 = 31630U;
uint16_t x53 = UINT16_MAX;
static int8_t x55 = INT8_MIN;
int64_t x61 = -1LL;
int32_t x63 = -1;
volatile int8_t x73 = INT8_MIN;
uint16_t x82 = 234U;
static volatile uint32_t t19 = 136321046U;
int8_t x113 = -20;
volatile int32_t t21 = 1898744;
int8_t x118 = INT8_MIN;
uint16_t x122 = 408U;
int8_t x123 = -1;
volatile uint16_t x124 = 10U;
volatile int64_t x125 = -1LL;
int32_t x127 = 140653533;
static volatile int8_t x132 = -1;
int8_t x137 = 0;
int16_t x141 = INT16_MIN;
static int32_t x147 = -1;
static volatile int64_t t28 = -23148711793780LL;
uint16_t x150 = 347U;
int64_t x152 = -1LL;
int64_t t29 = 69742040253539LL;
int64_t x176 = -9938316566231LL;
int64_t x190 = -1134000LL;
int16_t x194 = INT16_MIN;
uint64_t x201 = 5194400017LLU;
int8_t x202 = INT8_MIN;
volatile int32_t x210 = -154;
uint64_t t43 = 105637079LLU;
int16_t x253 = INT16_MIN;
uint32_t x261 = UINT32_MAX;
uint32_t t45 = 3536222U;
static uint64_t t47 = 1LLU;
int32_t t48 = -10;
int32_t x289 = -1;
uint8_t x290 = UINT8_MAX;
int8_t x295 = INT8_MIN;
uint64_t x311 = UINT64_MAX;
static uint32_t t53 = 1094U;
int8_t x317 = INT8_MAX;
static uint32_t x318 = 156670U;
int16_t x320 = INT16_MAX;
volatile int64_t t54 = 945760LL;
volatile uint64_t t55 = 440571882452LLU;
int32_t x325 = INT32_MIN;
static volatile int8_t x328 = -1;
int8_t x331 = 3;
int8_t x332 = INT8_MIN;
static volatile uint64_t t58 = 824948459724327611LLU;
int8_t x343 = 4;
uint16_t x345 = UINT16_MAX;
int64_t t62 = -32917749136674LL;
uint8_t x359 = 2U;
int16_t x368 = INT16_MAX;
int32_t t65 = 18;
volatile int16_t x369 = INT16_MIN;
volatile int8_t x375 = -1;
uint32_t x376 = 372057U;
int16_t x379 = INT16_MIN;
int64_t x382 = 3LL;
volatile int64_t t69 = -2869486654LL;
int16_t x390 = INT16_MIN;
static uint64_t t71 = 166419LLU;
int64_t x409 = -1LL;
int8_t x410 = -1;
volatile int64_t x415 = INT64_MAX;
static int16_t x421 = -10662;
int32_t t76 = 992999321;
volatile uint64_t t77 = 655107185406165282LLU;
uint32_t x430 = 18U;
uint32_t t80 = 1862268694U;
int32_t x458 = INT32_MIN;
int16_t x464 = INT16_MAX;
uint16_t x479 = 6U;
static uint64_t t87 = 12933LLU;
uint64_t t88 = 1192683990893LLU;
volatile int32_t x512 = INT32_MIN;
volatile int32_t x522 = -1;
volatile int32_t t91 = -6;
volatile uint64_t x526 = UINT64_MAX;
int64_t x537 = INT64_MIN;
int8_t x538 = INT8_MIN;
int16_t x540 = INT16_MIN;
uint64_t t94 = 10714750315072008LLU;
static uint64_t x547 = 418481478064318LLU;
int8_t x549 = INT8_MIN;
uint16_t x553 = UINT16_MAX;
int8_t x556 = -1;
int64_t t99 = 3538050192LL;


void f0(void) {
	int64_t x1 = -4414832279873LL;
	static int64_t x2 = 779894788LL;
	static int32_t x3 = -447138210;
	volatile int64_t t0 = -121LL;

	t0 = ((x1&(x2*x3))&x4);

	if (t0 != 56LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x6 = 2U;
	uint32_t x8 = UINT32_MAX;

	t1 = ((x5&(x6*x7))&x8);

	if (t1 != 4278543842LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 0;
	uint64_t x11 = 267035794LLU;
	int8_t x12 = -1;
	volatile uint64_t t2 = 2593818172LLU;

	t2 = ((x9&(x10*x11))&x12);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	uint64_t x14 = 13527309LLU;
	static volatile int16_t x15 = 68;
	static int32_t x16 = 19801;
	volatile uint64_t t3 = 11616LLU;

	t3 = ((x13&(x14*x15))&x16);

	if (t3 != 17664LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = -9696;
	uint8_t x18 = 3U;
	volatile uint8_t x20 = UINT8_MAX;
	uint32_t t4 = 31272628U;

	t4 = ((x17&(x18*x19))&x20);

	if (t4 != 32U) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 68229433063LLU;
	volatile int16_t x22 = -323;
	int16_t x23 = -1;
	uint64_t t5 = 15514LLU;

	t5 = ((x21&(x22*x23))&x24);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x32 = -485;
	volatile int32_t t6 = -414746;

	t6 = ((x29&(x30*x31))&x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x37 = -1;
	volatile int8_t x38 = INT8_MAX;
	int8_t x39 = INT8_MIN;
	uint8_t x40 = 0U;
	int32_t t7 = -484080;

	t7 = ((x37&(x38*x39))&x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x41 = 292740U;
	int64_t x42 = -173363522943503LL;
	int8_t x43 = 1;
	int64_t x44 = -912119LL;
	int64_t t8 = 22729LL;

	t8 = ((x41&(x42*x43))&x44);

	if (t8 != 1280LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x45 = INT16_MIN;
	uint64_t x47 = 12LLU;
	int16_t x48 = -1;
	uint64_t t9 = 1364122433396903244LLU;

	t9 = ((x45&(x46*x47))&x48);

	if (t9 != 360448LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = -1;
	int16_t x50 = -217;
	volatile uint16_t x51 = UINT16_MAX;
	int8_t x52 = INT8_MIN;
	volatile int32_t t10 = 1952010;

	t10 = ((x49&(x50*x51))&x52);

	if (t10 != -14221184) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x54 = UINT8_MAX;
	uint64_t x56 = 1382659763430288LLU;
	volatile uint64_t t11 = 769059065LLU;

	t11 = ((x53&(x54*x55))&x56);

	if (t11 != 128LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x62 = -1372;
	volatile uint64_t x64 = 7LLU;
	volatile uint64_t t12 = 108122075513774434LLU;

	t12 = ((x61&(x62*x63))&x64);

	if (t12 != 4LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x65 = INT64_MIN;
	volatile int32_t x66 = 55;
	int16_t x67 = 17;
	volatile int8_t x68 = -1;
	int64_t t13 = -7710496LL;

	t13 = ((x65&(x66*x67))&x68);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = -1;
	int8_t x70 = INT8_MIN;
	int16_t x71 = 192;
	static int8_t x72 = INT8_MAX;
	volatile int32_t t14 = 358568;

	t14 = ((x69&(x70*x71))&x72);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x74 = 1;
	int8_t x75 = INT8_MIN;
	static uint32_t x76 = 13459U;
	volatile uint32_t t15 = 0U;

	t15 = ((x73&(x74*x75))&x76);

	if (t15 != 13440U) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x77 = UINT32_MAX;
	static volatile int64_t x78 = INT64_MIN;
	uint8_t x79 = 1U;
	uint32_t x80 = 117867423U;
	volatile int64_t t16 = 56154606717650659LL;

	t16 = ((x77&(x78*x79))&x80);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x81 = -1LL;
	int16_t x83 = INT16_MIN;
	static volatile uint32_t x84 = UINT32_MAX;
	static int64_t t17 = -22506952517704222LL;

	t17 = ((x81&(x82*x83))&x84);

	if (t17 != 4287299584LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x89 = 7504937U;
	uint64_t x90 = 1870LLU;
	int8_t x91 = INT8_MIN;
	volatile uint32_t x92 = 28U;
	uint64_t t18 = 61LLU;

	t18 = ((x89&(x90*x91))&x92);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x101 = -3;
	int16_t x102 = INT16_MAX;
	static int8_t x103 = INT8_MAX;
	static uint32_t x104 = 0U;

	t19 = ((x101&(x102*x103))&x104);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x105 = 522302LLU;
	static uint32_t x106 = UINT32_MAX;
	int8_t x107 = 0;
	int32_t x108 = 12;
	uint64_t t20 = 26687302502LLU;

	t20 = ((x105&(x106*x107))&x108);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x114 = INT16_MIN;
	uint8_t x115 = 3U;
	volatile int8_t x116 = -63;

	t21 = ((x113&(x114*x115))&x116);

	if (t21 != -98304) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x117 = 30U;
	volatile uint16_t x119 = UINT16_MAX;
	uint64_t x120 = UINT64_MAX;
	static volatile uint64_t t22 = 28758549724435LLU;

	t22 = ((x117&(x118*x119))&x120);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x121 = INT32_MAX;
	static int32_t t23 = 4;

	t23 = ((x121&(x122*x123))&x124);

	if (t23 != 8) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x126 = 2U;
	int8_t x128 = INT8_MIN;
	volatile int64_t t24 = 292617439181786827LL;

	t24 = ((x125&(x126*x127))&x128);

	if (t24 != 281307008LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x129 = 0;
	static uint16_t x130 = 1U;
	static int64_t x131 = -67816469LL;
	volatile int64_t t25 = 915LL;

	t25 = ((x129&(x130*x131))&x132);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x138 = 212813630083757LLU;
	int32_t x139 = INT32_MAX;
	static int16_t x140 = INT16_MIN;
	static uint64_t t26 = 7273887LLU;

	t26 = ((x137&(x138*x139))&x140);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x142 = -1;
	uint64_t x143 = 33987LLU;
	volatile int16_t x144 = INT16_MIN;
	uint64_t t27 = 127159044674447LLU;

	t27 = ((x141&(x142*x143))&x144);

	if (t27 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x145 = 1;
	int64_t x146 = INT64_MAX;
	static volatile int16_t x148 = INT16_MIN;

	t28 = ((x145&(x146*x147))&x148);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x149 = 67U;
	static uint32_t x151 = UINT32_MAX;

	t29 = ((x149&(x150*x151))&x152);

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x169 = -4;
	int8_t x170 = -1;
	int8_t x171 = INT8_MAX;
	uint32_t x172 = 22U;
	volatile uint32_t t30 = 248393122U;

	t30 = ((x169&(x170*x171))&x172);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x173 = UINT8_MAX;
	static uint16_t x174 = 771U;
	volatile uint16_t x175 = 4U;
	static int64_t t31 = -1404298045267740647LL;

	t31 = ((x173&(x174*x175))&x176);

	if (t31 != 8LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x185 = INT8_MAX;
	uint64_t x186 = 2115360399074829038LLU;
	static int8_t x187 = -1;
	static int16_t x188 = INT16_MAX;
	static uint64_t t32 = 19723110718LLU;

	t32 = ((x185&(x186*x187))&x188);

	if (t32 != 18LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x189 = 0U;
	int32_t x191 = INT32_MAX;
	uint32_t x192 = 59042227U;
	static int64_t t33 = 38289330LL;

	t33 = ((x189&(x190*x191))&x192);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x193 = 1U;
	uint8_t x195 = UINT8_MAX;
	uint16_t x196 = UINT16_MAX;
	int32_t t34 = 200304720;

	t34 = ((x193&(x194*x195))&x196);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x203 = 43262U;
	uint16_t x204 = UINT16_MAX;
	volatile uint64_t t35 = 87152268LLU;

	t35 = ((x201&(x202*x203))&x204);

	if (t35 != 256LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x205 = 261799460U;
	int64_t x206 = -1LL;
	uint8_t x207 = 1U;
	uint64_t x208 = UINT64_MAX;
	static uint64_t t36 = 6244394948590LLU;

	t36 = ((x205&(x206*x207))&x208);

	if (t36 != 261799460LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x209 = -1745585LL;
	volatile uint8_t x211 = 12U;
	int8_t x212 = -1;
	int64_t t37 = -97960LL;

	t37 = ((x209&(x210*x211))&x212);

	if (t37 != -1746872LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x213 = INT32_MIN;
	int64_t x214 = -281833978770LL;
	static volatile uint32_t x215 = 29U;
	int32_t x216 = INT32_MAX;
	volatile int64_t t38 = -1984328776437296883LL;

	t38 = ((x213&(x214*x215))&x216);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x221 = INT32_MIN;
	static int32_t x222 = -2892514;
	int16_t x223 = 123;
	int64_t x224 = INT64_MIN;
	int64_t t39 = INT64_MIN;

	t39 = ((x221&(x222*x223))&x224);

	if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x225 = -12;
	static uint32_t x226 = 88U;
	static uint32_t x227 = UINT32_MAX;
	int16_t x228 = -3;
	volatile uint32_t t40 = 111719U;

	t40 = ((x225&(x226*x227))&x228);

	if (t40 != 4294967200U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x229 = INT8_MIN;
	uint8_t x230 = UINT8_MAX;
	int32_t x231 = -3282;
	int64_t x232 = INT64_MIN;
	volatile int64_t t41 = INT64_MIN;

	t41 = ((x229&(x230*x231))&x232);

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x241 = 5170873700LLU;
	int64_t x242 = INT64_MIN;
	uint64_t x243 = UINT64_MAX;
	int64_t x244 = 553417914751399297LL;
	volatile uint64_t t42 = 136921903917LLU;

	t42 = ((x241&(x242*x243))&x244);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x249 = UINT64_MAX;
	volatile uint64_t x250 = 94950235825LLU;
	uint16_t x251 = 7U;
	volatile int64_t x252 = 1494240870736LL;

	t43 = ((x249&(x250*x251))&x252);

	if (t43 != 114891571280LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x254 = 197293250U;
	int16_t x255 = -1;
	int16_t x256 = INT16_MIN;
	volatile uint32_t t44 = 8U;

	t44 = ((x253&(x254*x255))&x256);

	if (t44 != 4097671168U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x262 = -1;
	uint32_t x263 = UINT32_MAX;
	static int16_t x264 = 122;

	t45 = ((x261&(x262*x263))&x264);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x265 = 1U;
	int64_t x266 = -13795884583LL;
	volatile uint16_t x267 = 249U;
	int64_t x268 = 6660147LL;
	int64_t t46 = 7509281LL;

	t46 = ((x265&(x266*x267))&x268);

	if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x269 = 5430577529LL;
	uint64_t x270 = 143047315821871425LLU;
	int8_t x271 = INT8_MAX;
	int8_t x272 = -6;

	t47 = ((x269&(x270*x271))&x272);

	if (t47 != 61868344LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x281 = 1U;
	int16_t x282 = 225;
	uint16_t x283 = 6287U;
	int8_t x284 = INT8_MAX;

	t48 = ((x281&(x282*x283))&x284);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x291 = -1;
	int64_t x292 = INT64_MIN;
	int64_t t49 = INT64_MIN;

	t49 = ((x289&(x290*x291))&x292);

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x293 = -1258;
	uint32_t x294 = UINT32_MAX;
	volatile int32_t x296 = 400303;
	volatile uint32_t t50 = 839848U;

	t50 = ((x293&(x294*x295))&x296);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x297 = -1LL;
	static int32_t x298 = -1;
	static uint16_t x299 = 8U;
	int8_t x300 = 8;
	int64_t t51 = -223385698089654LL;

	t51 = ((x297&(x298*x299))&x300);

	if (t51 != 8LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x309 = UINT8_MAX;
	int64_t x310 = -1LL;
	int16_t x312 = INT16_MIN;
	volatile uint64_t t52 = 482772078018LLU;

	t52 = ((x309&(x310*x311))&x312);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x313 = 5083U;
	int16_t x314 = INT16_MAX;
	static uint8_t x315 = 2U;
	uint32_t x316 = 1474004724U;

	t53 = ((x313&(x314*x315))&x316);

	if (t53 != 720U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x319 = -1LL;

	t54 = ((x317&(x318*x319))&x320);

	if (t54 != 2LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x321 = UINT32_MAX;
	uint32_t x322 = UINT32_MAX;
	volatile uint8_t x323 = 120U;
	uint64_t x324 = 1104993LLU;

	t55 = ((x321&(x322*x323))&x324);

	if (t55 != 1104896LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x326 = 111LL;
	int64_t x327 = 65LL;
	int64_t t56 = -24603661083986LL;

	t56 = ((x325&(x326*x327))&x328);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x329 = -1;
	uint8_t x330 = 41U;
	volatile int32_t t57 = -12545339;

	t57 = ((x329&(x330*x331))&x332);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x333 = UINT64_MAX;
	volatile int32_t x334 = -1;
	volatile uint16_t x335 = UINT16_MAX;
	int32_t x336 = INT32_MAX;

	t58 = ((x333&(x334*x335))&x336);

	if (t58 != 2147418113LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x341 = 1989U;
	uint8_t x342 = 13U;
	int8_t x344 = 1;
	static volatile int32_t t59 = -12212036;

	t59 = ((x341&(x342*x343))&x344);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x346 = -16;
	uint16_t x347 = UINT16_MAX;
	int8_t x348 = -1;
	int32_t t60 = -610970515;

	t60 = ((x345&(x346*x347))&x348);

	if (t60 != 16) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x349 = INT16_MIN;
	int64_t x350 = 15192559478LL;
	uint16_t x351 = UINT16_MAX;
	int8_t x352 = INT8_MIN;
	int64_t t61 = 34929249197703LL;

	t61 = ((x349&(x350*x351))&x352);

	if (t61 != 995644385361920LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x353 = INT8_MIN;
	int16_t x354 = INT16_MAX;
	int16_t x355 = 56;
	static int64_t x356 = INT64_MAX;

	t62 = ((x353&(x354*x355))&x356);

	if (t62 != 1834880LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x357 = INT8_MIN;
	int64_t x358 = -1LL;
	int64_t x360 = -17545308984272LL;
	volatile int64_t t63 = 127811651021791LL;

	t63 = ((x357&(x358*x359))&x360);

	if (t63 != -17545308984320LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x361 = 29U;
	int32_t x362 = -1;
	uint32_t x363 = 13500U;
	static uint16_t x364 = UINT16_MAX;
	volatile uint32_t t64 = 260973888U;

	t64 = ((x361&(x362*x363))&x364);

	if (t64 != 4U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x365 = 0;
	uint8_t x366 = UINT8_MAX;
	int8_t x367 = -1;

	t65 = ((x365&(x366*x367))&x368);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x370 = INT64_MAX;
	int16_t x371 = -1;
	int8_t x372 = INT8_MIN;
	volatile int64_t t66 = INT64_MIN;

	t66 = ((x369&(x370*x371))&x372);

	if (t66 != INT64_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x373 = INT64_MIN;
	int32_t x374 = INT32_MAX;
	int64_t t67 = -593862221352LL;

	t67 = ((x373&(x374*x375))&x376);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x377 = INT32_MAX;
	uint64_t x378 = 52931522796709954LLU;
	uint64_t x380 = UINT64_MAX;
	volatile uint64_t t68 = 277813516113756690LLU;

	t68 = ((x377&(x378*x379))&x380);

	if (t68 != 199163904LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x381 = 31U;
	static int32_t x383 = 12573641;
	int64_t x384 = INT64_MIN;

	t69 = ((x381&(x382*x383))&x384);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x385 = INT64_MAX;
	int8_t x386 = INT8_MIN;
	int16_t x387 = INT16_MAX;
	uint64_t x388 = 1041415036643LLU;
	uint64_t t70 = 57357392951LLU;

	t70 = ((x385&(x386*x387))&x388);

	if (t70 != 1041412128896LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x389 = INT32_MAX;
	volatile uint64_t x391 = UINT64_MAX;
	int32_t x392 = INT32_MIN;

	t71 = ((x389&(x390*x391))&x392);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x393 = -39988203847155LL;
	int32_t x394 = INT32_MAX;
	int32_t x395 = 0;
	uint16_t x396 = 6U;
	int64_t t72 = -6782309973464LL;

	t72 = ((x393&(x394*x395))&x396);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x397 = -31;
	int64_t x398 = 1072634047LL;
	uint16_t x399 = UINT16_MAX;
	uint16_t x400 = 4U;
	int64_t t73 = -34593022332LL;

	t73 = ((x397&(x398*x399))&x400);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x411 = -1;
	uint32_t x412 = 7632018U;
	int64_t t74 = -789240031187LL;

	t74 = ((x409&(x410*x411))&x412);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x413 = -2;
	volatile uint64_t x414 = UINT64_MAX;
	int32_t x416 = INT32_MAX;
	volatile uint64_t t75 = 56861150997LLU;

	t75 = ((x413&(x414*x415))&x416);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x422 = -10;
	uint8_t x423 = 86U;
	int16_t x424 = 29;

	t76 = ((x421&(x422*x423))&x424);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x425 = -21;
	int16_t x426 = INT16_MIN;
	uint32_t x427 = 63542886U;
	uint64_t x428 = UINT64_MAX;

	t77 = ((x425&(x426*x427))&x428);

	if (t77 != 885850112LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x429 = -8368165103466LL;
	static int16_t x431 = 5;
	static uint8_t x432 = 1U;
	int64_t t78 = 47922LL;

	t78 = ((x429&(x430*x431))&x432);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x433 = INT64_MIN;
	int8_t x434 = INT8_MIN;
	int8_t x435 = -1;
	volatile uint32_t x436 = 20U;
	volatile int64_t t79 = -41802466LL;

	t79 = ((x433&(x434*x435))&x436);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint16_t x445 = 29829U;
	int32_t x446 = -1;
	uint32_t x447 = 176695U;
	volatile int16_t x448 = INT16_MIN;

	t80 = ((x445&(x446*x447))&x448);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x457 = -1LL;
	static int8_t x459 = 0;
	int64_t x460 = INT64_MIN;
	static volatile int64_t t81 = 0LL;

	t81 = ((x457&(x458*x459))&x460);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x461 = INT16_MAX;
	int8_t x462 = INT8_MIN;
	int16_t x463 = 12;
	static int32_t t82 = 83;

	t82 = ((x461&(x462*x463))&x464);

	if (t82 != 31232) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x465 = 1466076804U;
	volatile uint16_t x466 = 23U;
	int16_t x467 = 1993;
	static int16_t x468 = -1;
	volatile uint32_t t83 = 12462719U;

	t83 = ((x465&(x466*x467))&x468);

	if (t83 != 33284U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x469 = 187643;
	static uint32_t x470 = UINT32_MAX;
	uint16_t x471 = UINT16_MAX;
	uint64_t x472 = UINT64_MAX;
	volatile uint64_t t84 = 19LLU;

	t84 = ((x469&(x470*x471))&x472);

	if (t84 != 131073LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x477 = 48LLU;
	uint8_t x478 = UINT8_MAX;
	volatile int16_t x480 = INT16_MAX;
	static uint64_t t85 = 1961469202368577LLU;

	t85 = ((x477&(x478*x479))&x480);

	if (t85 != 48LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x481 = 6U;
	int64_t x482 = INT64_MIN;
	volatile uint64_t x483 = 5100786253LLU;
	volatile int16_t x484 = -256;
	static uint64_t t86 = 41236098084831LLU;

	t86 = ((x481&(x482*x483))&x484);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x485 = 2;
	uint16_t x486 = 839U;
	volatile uint64_t x487 = 2044935339719242288LLU;
	volatile uint16_t x488 = UINT16_MAX;

	t87 = ((x485&(x486*x487))&x488);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x505 = -1;
	static int8_t x506 = INT8_MIN;
	int8_t x507 = INT8_MIN;
	uint64_t x508 = 274604374066098911LLU;

	t88 = ((x505&(x506*x507))&x508);

	if (t88 != 16384LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x509 = INT64_MAX;
	int32_t x510 = -1;
	uint8_t x511 = UINT8_MAX;
	static int64_t t89 = 3890LL;

	t89 = ((x509&(x510*x511))&x512);

	if (t89 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x513 = INT16_MIN;
	static int64_t x514 = -1LL;
	volatile uint32_t x515 = 89810U;
	int16_t x516 = -1;
	int64_t t90 = 30100540LL;

	t90 = ((x513&(x514*x515))&x516);

	if (t90 != -98304LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x521 = INT32_MAX;
	int8_t x523 = INT8_MAX;
	int32_t x524 = INT32_MIN;

	t91 = ((x521&(x522*x523))&x524);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x525 = 209795527LLU;
	int16_t x527 = INT16_MAX;
	int16_t x528 = 17;
	uint64_t t92 = 6114096112768LLU;

	t92 = ((x525&(x526*x527))&x528);

	if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x533 = -1;
	int16_t x534 = INT16_MIN;
	volatile int8_t x535 = -1;
	volatile uint32_t x536 = 330942875U;
	volatile uint32_t t93 = 0U;

	t93 = ((x533&(x534*x535))&x536);

	if (t93 != 32768U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x539 = 408457224LLU;

	t94 = ((x537&(x538*x539))&x540);

	if (t94 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x541 = 1U;
	int16_t x542 = INT16_MIN;
	static int16_t x543 = INT16_MIN;
	int8_t x544 = INT8_MIN;
	static uint32_t t95 = 28395672U;

	t95 = ((x541&(x542*x543))&x544);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x545 = INT8_MIN;
	int16_t x546 = 15542;
	int32_t x548 = 30749958;
	uint64_t t96 = 3299711264LLU;

	t96 = ((x545&(x546*x547))&x548);

	if (t96 != 9508096LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x550 = INT16_MIN;
	uint32_t x551 = 105U;
	int8_t x552 = INT8_MIN;
	volatile uint32_t t97 = 3U;

	t97 = ((x549&(x550*x551))&x552);

	if (t97 != 4291526656U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x554 = INT8_MAX;
	int16_t x555 = INT16_MAX;
	volatile int32_t t98 = -307;

	t98 = ((x553&(x554*x555))&x556);

	if (t98 != 32641) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x561 = INT64_MIN;
	int32_t x562 = -1;
	int64_t x563 = -1091345894645812LL;
	static int64_t x564 = INT64_MAX;

	t99 = ((x561&(x562*x563))&x564);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

