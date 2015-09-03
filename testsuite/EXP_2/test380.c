#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t t1 = 281U;
volatile uint8_t x24 = UINT8_MAX;
static volatile int64_t x27 = -44734491602LL;
int8_t x47 = INT8_MIN;
static int32_t t6 = -387358671;
uint32_t x49 = UINT32_MAX;
uint32_t x53 = 7U;
uint16_t x55 = UINT16_MAX;
volatile int32_t x69 = -1;
int64_t x75 = -1LL;
uint64_t x86 = 59373LLU;
volatile int64_t t14 = 30186309505LL;
static int32_t x110 = -1;
uint64_t x140 = UINT64_MAX;
volatile uint64_t t21 = 83667LLU;
static uint8_t x142 = UINT8_MAX;
static volatile int64_t t22 = -576479315LL;
int16_t x148 = 757;
volatile uint64_t t23 = 276258760404618066LLU;
int64_t t24 = -1932LL;
int64_t x153 = INT64_MIN;
static volatile int64_t x159 = INT64_MAX;
int16_t x165 = INT16_MIN;
volatile uint64_t t28 = 68625LLU;
int64_t x177 = INT64_MIN;
volatile uint64_t t29 = 26LLU;
uint64_t x200 = 587LLU;
int32_t x203 = -146;
uint64_t t35 = 96025143238082067LLU;
int16_t x222 = -1;
static uint8_t x225 = UINT8_MAX;
int64_t t40 = -1424105172510LL;
static uint8_t x236 = 40U;
uint8_t x238 = UINT8_MAX;
uint8_t x242 = 1U;
static int32_t t43 = -56629751;
volatile int64_t t44 = 4402155997665360LL;
static uint64_t x271 = 10198558862LLU;
int8_t x283 = 3;
uint16_t x292 = 4U;
volatile uint16_t x305 = 163U;
static volatile int64_t t54 = 7584LL;
volatile int32_t x309 = INT32_MIN;
static int32_t x315 = -4779;
uint8_t x316 = UINT8_MAX;
int16_t x321 = INT16_MIN;
uint64_t x323 = UINT64_MAX;
int32_t x329 = 435;
int32_t x331 = INT32_MAX;
int64_t x333 = INT64_MIN;
static int32_t t60 = -22993;
volatile int16_t x358 = 30;
uint32_t x362 = 29117U;
uint16_t x364 = UINT16_MAX;
volatile int8_t x365 = -1;
int32_t x367 = 475;
int16_t x368 = 4;
int8_t x396 = -7;
int8_t x400 = INT8_MAX;
static uint16_t x408 = UINT16_MAX;
uint32_t x409 = UINT32_MAX;
static uint32_t x412 = UINT32_MAX;
int8_t x415 = -1;
volatile int8_t x418 = INT8_MAX;
static uint64_t x419 = 4292237627LLU;
uint64_t x434 = 116310LLU;
uint8_t x442 = 31U;
int16_t x444 = 394;
uint64_t x465 = 84336090230LLU;
int32_t x468 = 7709;
static int8_t x470 = 1;
volatile uint64_t t82 = 1116155458783527179LLU;
volatile int32_t x473 = -3570;
int16_t x475 = INT16_MIN;
int8_t x486 = -1;
static int8_t x491 = INT8_MIN;
volatile int32_t t86 = 598;
uint16_t x493 = 957U;
uint16_t x496 = UINT16_MAX;
int32_t t87 = 280;
int64_t x515 = -195057586977722990LL;
int64_t x520 = 2388801291481229820LL;
uint8_t x521 = 0U;
uint8_t x532 = 29U;
volatile int64_t t94 = -123033920720350LL;
uint32_t x533 = 13361147U;
static int64_t x540 = INT64_MAX;
static int16_t x545 = INT16_MIN;
static uint8_t x547 = 70U;
uint8_t x548 = UINT8_MAX;


void f0(void) {
	int64_t x1 = INT64_MAX;
	int16_t x2 = INT16_MIN;
	uint16_t x3 = UINT16_MAX;
	static int16_t x4 = 1;
	volatile int64_t t0 = 1040776192LL;

	t0 = ((x1/(x2*x3))*x4);

	if (t0 != -4295032833LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	volatile uint16_t x6 = 21337U;
	uint32_t x7 = 5U;
	volatile uint32_t x8 = 1454U;

	t1 = ((x5/(x6*x7))*x8);

	if (t1 != 29267566U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x21 = 2;
	uint64_t x22 = 19943420LLU;
	uint32_t x23 = 2784709U;
	volatile uint64_t t2 = 4486039175724047LLU;

	t2 = ((x21/(x22*x23))*x24);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x25 = 25U;
	int16_t x26 = INT16_MIN;
	static int32_t x28 = -2;
	int64_t t3 = 406LL;

	t3 = ((x25/(x26*x27))*x28);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x33 = -1LL;
	int16_t x34 = INT16_MIN;
	int64_t x35 = -1LL;
	int64_t x36 = -1LL;
	static volatile int64_t t4 = -99LL;

	t4 = ((x33/(x34*x35))*x36);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x41 = INT16_MIN;
	volatile int16_t x42 = INT16_MIN;
	int32_t x43 = -1;
	uint8_t x44 = 7U;
	volatile int32_t t5 = 1;

	t5 = ((x41/(x42*x43))*x44);

	if (t5 != -7) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x45 = 2U;
	int8_t x46 = INT8_MIN;
	int32_t x48 = 54;

	t6 = ((x45/(x46*x47))*x48);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x50 = INT8_MIN;
	static volatile int32_t x51 = 903;
	uint16_t x52 = 1753U;
	uint32_t t7 = 263393500U;

	t7 = ((x49/(x50*x51))*x52);

	if (t7 != 1753U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x54 = -1LL;
	static int32_t x56 = INT32_MIN;
	int64_t t8 = 105165LL;

	t8 = ((x53/(x54*x55))*x56);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x65 = INT64_MIN;
	uint16_t x66 = 22454U;
	static int32_t x67 = -288;
	static int16_t x68 = INT16_MIN;
	volatile int64_t t9 = 5581LL;

	t9 = ((x65/(x66*x67))*x68);

	if (t9 != -46736206198046720LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x70 = -1;
	int8_t x71 = 1;
	static uint64_t x72 = UINT64_MAX;
	volatile uint64_t t10 = UINT64_MAX;

	t10 = ((x69/(x70*x71))*x72);

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x73 = INT32_MAX;
	int32_t x74 = INT32_MAX;
	int32_t x76 = INT32_MAX;
	int64_t t11 = -8670576LL;

	t11 = ((x73/(x74*x75))*x76);

	if (t11 != -2147483647LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x81 = 61;
	int32_t x82 = 235;
	static int8_t x83 = INT8_MIN;
	static int64_t x84 = INT64_MIN;
	int64_t t12 = -142765244LL;

	t12 = ((x81/(x82*x83))*x84);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x85 = INT64_MIN;
	static int16_t x87 = INT16_MAX;
	uint16_t x88 = 89U;
	uint64_t t13 = 13480079LLU;

	t13 = ((x85/(x86*x87))*x88);

	if (t13 != 421943264662LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x89 = UINT16_MAX;
	volatile int16_t x90 = INT16_MIN;
	static int64_t x91 = -1LL;
	uint8_t x92 = 6U;

	t14 = ((x89/(x90*x91))*x92);

	if (t14 != 6LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint64_t x97 = 504606640619014886LLU;
	static int64_t x98 = INT64_MAX;
	int64_t x99 = -1LL;
	int8_t x100 = INT8_MIN;
	uint64_t t15 = 1610895495611205LLU;

	t15 = ((x97/(x98*x99))*x100);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x101 = UINT32_MAX;
	static uint8_t x102 = 3U;
	int8_t x103 = 1;
	int16_t x104 = -989;
	uint32_t t16 = 12086301U;

	t16 = ((x101/(x102*x103))*x104);

	if (t16 != 1431656095U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x105 = INT8_MIN;
	int8_t x106 = INT8_MIN;
	int8_t x107 = INT8_MIN;
	int16_t x108 = 0;
	int32_t t17 = 69;

	t17 = ((x105/(x106*x107))*x108);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x109 = INT64_MAX;
	int64_t x111 = INT64_MAX;
	volatile uint16_t x112 = 4U;
	volatile int64_t t18 = 4557188084616376574LL;

	t18 = ((x109/(x110*x111))*x112);

	if (t18 != -4LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x113 = INT8_MAX;
	static uint16_t x114 = 15470U;
	volatile uint64_t x115 = UINT64_MAX;
	uint16_t x116 = UINT16_MAX;
	uint64_t t19 = 28680790695LLU;

	t19 = ((x113/(x114*x115))*x116);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x121 = INT8_MIN;
	int8_t x122 = 1;
	static uint16_t x123 = 20974U;
	static int8_t x124 = -1;
	volatile int32_t t20 = -13584;

	t20 = ((x121/(x122*x123))*x124);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x137 = 0U;
	static int32_t x138 = INT32_MIN;
	uint64_t x139 = 842172305737LLU;

	t21 = ((x137/(x138*x139))*x140);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x141 = 986;
	int8_t x143 = -1;
	volatile int64_t x144 = 795911LL;

	t22 = ((x141/(x142*x143))*x144);

	if (t22 != -2387733LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x145 = UINT64_MAX;
	volatile uint32_t x146 = 175794U;
	uint16_t x147 = 109U;

	t23 = ((x145/(x146*x147))*x148);

	if (t23 != 728760887236896LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x149 = INT64_MIN;
	int8_t x150 = INT8_MAX;
	volatile int32_t x151 = -1;
	int32_t x152 = -1;

	t24 = ((x149/(x150*x151))*x152);

	if (t24 != -72624976668147841LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x154 = 1U;
	int64_t x155 = INT64_MIN;
	static uint8_t x156 = UINT8_MAX;
	volatile int64_t t25 = -799882LL;

	t25 = ((x153/(x154*x155))*x156);

	if (t25 != 255LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x157 = INT16_MIN;
	uint64_t x158 = 614457289LLU;
	volatile uint64_t x160 = 4LLU;
	uint64_t t26 = 0LLU;

	t26 = ((x157/(x158*x159))*x160);

	if (t26 != 8LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x166 = INT16_MIN;
	static uint64_t x167 = UINT64_MAX;
	static int16_t x168 = 1979;
	static volatile uint64_t t27 = 43411003LLU;

	t27 = ((x165/(x166*x167))*x168);

	if (t27 != 1114077957820774469LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x169 = INT8_MAX;
	uint64_t x170 = UINT64_MAX;
	static uint32_t x171 = 15587616U;
	int16_t x172 = 15270;

	t28 = ((x169/(x170*x171))*x172);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x178 = INT16_MIN;
	int8_t x179 = INT8_MIN;
	uint64_t x180 = 4454916458LLU;

	t29 = ((x177/(x178*x179))*x180);

	if (t29 != 17202954530136784896LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x185 = -1;
	uint8_t x186 = 12U;
	int32_t x187 = 136036;
	uint16_t x188 = 0U;
	int32_t t30 = -777139;

	t30 = ((x185/(x186*x187))*x188);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x189 = -1;
	int32_t x190 = 29037;
	int8_t x191 = INT8_MAX;
	static int32_t x192 = -1;
	static int32_t t31 = 71902;

	t31 = ((x189/(x190*x191))*x192);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x193 = INT64_MIN;
	uint32_t x194 = 32267702U;
	int32_t x195 = INT32_MAX;
	uint64_t x196 = UINT64_MAX;
	volatile uint64_t t32 = 2817776707432218845LLU;

	t32 = ((x193/(x194*x195))*x196);

	if (t32 != 2163739628LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x197 = 26746463U;
	int16_t x198 = 829;
	uint64_t x199 = UINT64_MAX;
	volatile uint64_t t33 = 382898328702LLU;

	t33 = ((x197/(x198*x199))*x200);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x201 = 111U;
	static int8_t x202 = -31;
	static volatile int8_t x204 = INT8_MAX;
	volatile int32_t t34 = 160961;

	t34 = ((x201/(x202*x203))*x204);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x205 = INT8_MIN;
	int32_t x206 = -1;
	uint64_t x207 = 59718623635720147LLU;
	int32_t x208 = -342;

	t35 = ((x205/(x206*x207))*x208);

	if (t35 != 18446744073709551274LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x209 = 30046U;
	int8_t x210 = -1;
	uint16_t x211 = 24315U;
	uint32_t x212 = 217U;
	volatile uint32_t t36 = 272863U;

	t36 = ((x209/(x210*x211))*x212);

	if (t36 != 4294967079U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x213 = INT16_MIN;
	int8_t x214 = INT8_MIN;
	volatile int8_t x215 = INT8_MAX;
	int64_t x216 = -3091329LL;
	int64_t t37 = -102529226LL;

	t37 = ((x213/(x214*x215))*x216);

	if (t37 != -6182658LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x221 = 96850835614LLU;
	int16_t x223 = -1;
	static volatile int16_t x224 = INT16_MAX;
	volatile uint64_t t38 = 591424240LLU;

	t38 = ((x221/(x222*x223))*x224);

	if (t38 != 3173511330563938LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x226 = 3U;
	static volatile uint64_t x227 = 147996153443LLU;
	volatile int16_t x228 = INT16_MIN;
	static uint64_t t39 = 1LLU;

	t39 = ((x225/(x226*x227))*x228);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x229 = UINT8_MAX;
	uint8_t x230 = UINT8_MAX;
	int64_t x231 = -4636865162LL;
	static int64_t x232 = INT64_MAX;

	t40 = ((x229/(x230*x231))*x232);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x233 = -1LL;
	uint16_t x234 = 42U;
	static volatile int32_t x235 = -1;
	int64_t t41 = 756199088017386482LL;

	t41 = ((x233/(x234*x235))*x236);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x237 = -1;
	int64_t x239 = -57LL;
	static uint16_t x240 = UINT16_MAX;
	static volatile int64_t t42 = 58LL;

	t42 = ((x237/(x238*x239))*x240);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x241 = -1;
	int32_t x243 = 7;
	uint16_t x244 = UINT16_MAX;

	t43 = ((x241/(x242*x243))*x244);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x245 = INT64_MIN;
	static uint16_t x246 = UINT16_MAX;
	int16_t x247 = 23;
	volatile int16_t x248 = INT16_MAX;

	t44 = ((x245/(x246*x247))*x248);

	if (t44 != -200505028200400273LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x249 = UINT16_MAX;
	int32_t x250 = INT32_MIN;
	static int64_t x251 = -1LL;
	uint32_t x252 = 38348U;
	int64_t t45 = 5430211303LL;

	t45 = ((x249/(x250*x251))*x252);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x265 = INT32_MAX;
	volatile uint32_t x266 = UINT32_MAX;
	int32_t x267 = 195603;
	uint64_t x268 = 11169314LLU;
	volatile uint64_t t46 = 127382600LLU;

	t46 = ((x265/(x266*x267))*x268);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x269 = 5850LLU;
	uint8_t x270 = 18U;
	int16_t x272 = INT16_MAX;
	volatile uint64_t t47 = 27754189LLU;

	t47 = ((x269/(x270*x271))*x272);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x273 = INT16_MIN;
	static volatile int16_t x274 = -1;
	uint16_t x275 = UINT16_MAX;
	uint32_t x276 = 3U;
	volatile uint32_t t48 = 1326255U;

	t48 = ((x273/(x274*x275))*x276);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x281 = -172;
	uint64_t x282 = 965LLU;
	int64_t x284 = -1LL;
	static uint64_t t49 = 4924929971274256LLU;

	t49 = ((x281/(x282*x283))*x284);

	if (t49 != 18440372141387026728LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x285 = 4U;
	uint32_t x286 = 909U;
	uint64_t x287 = UINT64_MAX;
	static int32_t x288 = 3;
	uint64_t t50 = 8032715245LLU;

	t50 = ((x285/(x286*x287))*x288);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x289 = -1;
	volatile int64_t x290 = -890690145410LL;
	int16_t x291 = -1;
	int64_t t51 = -194LL;

	t51 = ((x289/(x290*x291))*x292);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x293 = 19;
	int64_t x294 = -4LL;
	uint8_t x295 = 79U;
	int16_t x296 = 361;
	volatile int64_t t52 = 192036865523739526LL;

	t52 = ((x293/(x294*x295))*x296);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x297 = 5;
	uint32_t x298 = UINT32_MAX;
	volatile int16_t x299 = -9061;
	int16_t x300 = INT16_MAX;
	uint32_t t53 = 986U;

	t53 = ((x297/(x298*x299))*x300);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x306 = INT8_MAX;
	static int16_t x307 = INT16_MIN;
	static int64_t x308 = INT64_MAX;

	t54 = ((x305/(x306*x307))*x308);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x310 = -1LL;
	uint16_t x311 = UINT16_MAX;
	uint32_t x312 = UINT32_MAX;
	int64_t t55 = 13339862583456348LL;

	t55 = ((x309/(x310*x311))*x312);

	if (t55 != 140737488322560LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x313 = INT8_MIN;
	static int16_t x314 = INT16_MIN;
	volatile int32_t t56 = 0;

	t56 = ((x313/(x314*x315))*x316);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x322 = INT64_MIN;
	uint16_t x324 = 394U;
	uint64_t t57 = 492375035LLU;

	t57 = ((x321/(x322*x323))*x324);

	if (t57 != 394LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x330 = -42037233LL;
	uint16_t x332 = 1462U;
	volatile int64_t t58 = 694200348123LL;

	t58 = ((x329/(x330*x331))*x332);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x334 = 6U;
	int8_t x335 = INT8_MIN;
	int8_t x336 = 0;
	static volatile int64_t t59 = -28695005783538LL;

	t59 = ((x333/(x334*x335))*x336);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x341 = -1;
	int32_t x342 = -1;
	static uint16_t x343 = UINT16_MAX;
	int16_t x344 = -1;

	t60 = ((x341/(x342*x343))*x344);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x345 = 0;
	static uint64_t x346 = 1109040158122562LLU;
	volatile int32_t x347 = INT32_MIN;
	volatile uint16_t x348 = 57U;
	volatile uint64_t t61 = 390LLU;

	t61 = ((x345/(x346*x347))*x348);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x349 = 20U;
	static int32_t x350 = INT32_MIN;
	static uint8_t x351 = 1U;
	uint8_t x352 = 36U;
	static volatile uint32_t t62 = 2892U;

	t62 = ((x349/(x350*x351))*x352);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x353 = 13U;
	int64_t x354 = -14LL;
	int8_t x355 = 29;
	int8_t x356 = 1;
	volatile int64_t t63 = 66LL;

	t63 = ((x353/(x354*x355))*x356);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x357 = INT64_MAX;
	volatile int8_t x359 = INT8_MAX;
	uint16_t x360 = 20U;
	volatile int64_t t64 = 2LL;

	t64 = ((x357/(x358*x359))*x360);

	if (t64 != 48416651112098560LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x361 = 1U;
	uint8_t x363 = UINT8_MAX;
	uint32_t t65 = 30510U;

	t65 = ((x361/(x362*x363))*x364);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x366 = INT16_MIN;
	int32_t t66 = -163;

	t66 = ((x365/(x366*x367))*x368);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x369 = UINT8_MAX;
	int32_t x370 = -7210;
	uint8_t x371 = 1U;
	int32_t x372 = INT32_MAX;
	static int32_t t67 = 12;

	t67 = ((x369/(x370*x371))*x372);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x389 = -7;
	int8_t x390 = -1;
	int16_t x391 = 15271;
	int16_t x392 = INT16_MAX;
	static int32_t t68 = -25730;

	t68 = ((x389/(x390*x391))*x392);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x393 = INT64_MAX;
	uint16_t x394 = 427U;
	int64_t x395 = -170822345LL;
	volatile int64_t t69 = -80287710370904LL;

	t69 = ((x393/(x394*x395))*x396);

	if (t69 != 885146612LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x397 = 0U;
	uint32_t x398 = UINT32_MAX;
	int16_t x399 = INT16_MAX;
	uint32_t t70 = 39033405U;

	t70 = ((x397/(x398*x399))*x400);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int32_t x405 = INT32_MIN;
	int8_t x406 = -1;
	int64_t x407 = INT64_MAX;
	volatile int64_t t71 = -360549749273054676LL;

	t71 = ((x405/(x406*x407))*x408);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x410 = 41904002U;
	static int16_t x411 = INT16_MIN;
	uint32_t t72 = 6034U;

	t72 = ((x409/(x410*x411))*x412);

	if (t72 != 4294967293U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x413 = INT64_MIN;
	uint64_t x414 = UINT64_MAX;
	uint32_t x416 = UINT32_MAX;
	volatile uint64_t t73 = 2LLU;

	t73 = ((x413/(x414*x415))*x416);

	if (t73 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x417 = -511;
	volatile int64_t x420 = INT64_MAX;
	uint64_t t74 = 4205988LLU;

	t74 = ((x417/(x418*x419))*x420);

	if (t74 != 9223372036820935661LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x425 = 8U;
	static volatile int64_t x426 = -1LL;
	static volatile int64_t x427 = INT64_MAX;
	int64_t x428 = -1060764136LL;
	int64_t t75 = 3LL;

	t75 = ((x425/(x426*x427))*x428);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x433 = INT32_MIN;
	int64_t x435 = INT64_MAX;
	int8_t x436 = -1;
	uint64_t t76 = 53451LLU;

	t76 = ((x433/(x434*x435))*x436);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x441 = UINT8_MAX;
	static uint64_t x443 = UINT64_MAX;
	static uint64_t t77 = 15LLU;

	t77 = ((x441/(x442*x443))*x444);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x445 = UINT32_MAX;
	int32_t x446 = INT32_MAX;
	volatile uint32_t x447 = UINT32_MAX;
	static uint32_t x448 = 4450U;
	volatile uint32_t t78 = 228879711U;

	t78 = ((x445/(x446*x447))*x448);

	if (t78 != 4450U) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint8_t x449 = 8U;
	int32_t x450 = 15711087;
	uint64_t x451 = 2213362758105685LLU;
	uint32_t x452 = UINT32_MAX;
	uint64_t t79 = 219LLU;

	t79 = ((x449/(x450*x451))*x452);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x461 = -1;
	int16_t x462 = INT16_MAX;
	int32_t x463 = -971;
	static int16_t x464 = -1;
	static int32_t t80 = 123;

	t80 = ((x461/(x462*x463))*x464);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x466 = INT32_MIN;
	int64_t x467 = -13LL;
	static uint64_t t81 = 224LLU;

	t81 = ((x465/(x466*x467))*x468);

	if (t81 != 23127LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x469 = 4250625396309LLU;
	static uint64_t x471 = 30612526LLU;
	volatile uint16_t x472 = UINT16_MAX;

	t82 = ((x469/(x470*x471))*x472);

	if (t82 != 9099665820LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x474 = INT8_MAX;
	int32_t x476 = -1192;
	int32_t t83 = 460983;

	t83 = ((x473/(x474*x475))*x476);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x481 = UINT8_MAX;
	static int8_t x482 = INT8_MIN;
	int8_t x483 = INT8_MAX;
	uint64_t x484 = UINT64_MAX;
	uint64_t t84 = 2502335LLU;

	t84 = ((x481/(x482*x483))*x484);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x485 = -1;
	volatile int8_t x487 = 30;
	static int64_t x488 = 3039LL;
	volatile int64_t t85 = -5820786LL;

	t85 = ((x485/(x486*x487))*x488);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int8_t x489 = INT8_MIN;
	int16_t x490 = -1;
	static int8_t x492 = INT8_MAX;

	t86 = ((x489/(x490*x491))*x492);

	if (t86 != -127) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x494 = UINT16_MAX;
	uint8_t x495 = 58U;

	t87 = ((x493/(x494*x495))*x496);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x497 = INT32_MIN;
	uint8_t x498 = 10U;
	volatile uint32_t x499 = 4926U;
	uint32_t x500 = 0U;
	uint32_t t88 = 0U;

	t88 = ((x497/(x498*x499))*x500);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x501 = 520422LLU;
	static int8_t x502 = INT8_MAX;
	uint64_t x503 = 1179903460361037LLU;
	uint16_t x504 = 29U;
	uint64_t t89 = 2016911581LLU;

	t89 = ((x501/(x502*x503))*x504);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x505 = INT16_MAX;
	volatile int64_t x506 = 15405464797238LL;
	int16_t x507 = -1;
	int8_t x508 = 1;
	int64_t t90 = 43363301242229539LL;

	t90 = ((x505/(x506*x507))*x508);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x513 = -1;
	int16_t x514 = -1;
	int8_t x516 = 6;
	volatile int64_t t91 = 0LL;

	t91 = ((x513/(x514*x515))*x516);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x517 = -1LL;
	uint64_t x518 = UINT64_MAX;
	uint8_t x519 = 33U;
	volatile uint64_t t92 = 568LLU;

	t92 = ((x517/(x518*x519))*x520);

	if (t92 != 2388801291481229820LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x522 = 555522305062008863LLU;
	static uint16_t x523 = 6227U;
	int16_t x524 = 1977;
	volatile uint64_t t93 = 0LLU;

	t93 = ((x521/(x522*x523))*x524);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x529 = 1456055LL;
	int64_t x530 = 3720715LL;
	volatile uint32_t x531 = UINT32_MAX;

	t94 = ((x529/(x530*x531))*x532);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x534 = 55U;
	uint32_t x535 = UINT32_MAX;
	int8_t x536 = INT8_MIN;
	volatile uint32_t t95 = 452534885U;

	t95 = ((x533/(x534*x535))*x536);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x537 = 0U;
	int16_t x538 = 3;
	static volatile int8_t x539 = INT8_MIN;
	int64_t t96 = 4430306706988811580LL;

	t96 = ((x537/(x538*x539))*x540);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x541 = 63U;
	uint64_t x542 = UINT64_MAX;
	int16_t x543 = INT16_MIN;
	uint64_t x544 = 3LLU;
	static uint64_t t97 = 3255250LLU;

	t97 = ((x541/(x542*x543))*x544);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x546 = 7U;
	volatile int32_t t98 = 39915;

	t98 = ((x545/(x546*x547))*x548);

	if (t98 != -16830) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x549 = INT16_MAX;
	uint64_t x550 = 35725LLU;
	int64_t x551 = INT64_MAX;
	static uint64_t x552 = 120433147394180LLU;
	static uint64_t t99 = 70464082217791331LLU;

	t99 = ((x549/(x550*x551))*x552);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

