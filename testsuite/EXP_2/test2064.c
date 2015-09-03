#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x8 = UINT32_MAX;
static volatile int32_t t1 = 704820654;
int64_t x20 = -1705LL;
volatile uint64_t x22 = 0LLU;
int16_t x24 = INT16_MIN;
int32_t t5 = -26277463;
volatile uint64_t x29 = UINT64_MAX;
volatile uint16_t x36 = 1633U;
int32_t t8 = 1480;
static int32_t x53 = INT32_MIN;
int32_t t10 = 357;
volatile int32_t x59 = 1;
volatile int16_t x74 = -1;
uint8_t x78 = UINT8_MAX;
int16_t x79 = 0;
static uint8_t x111 = 52U;
static int16_t x127 = -252;
volatile int32_t t24 = -858;
static int8_t x147 = 40;
int16_t x150 = INT16_MAX;
volatile int16_t x168 = INT16_MIN;
uint8_t x170 = 1U;
int8_t x183 = 19;
int32_t t32 = -506544301;
int16_t x187 = INT16_MIN;
static int16_t x195 = INT16_MIN;
uint16_t x197 = UINT16_MAX;
static uint8_t x198 = 8U;
uint8_t x199 = 50U;
int64_t x204 = INT64_MIN;
uint32_t x212 = UINT32_MAX;
int32_t t37 = -112619776;
int16_t x213 = INT16_MAX;
volatile uint64_t x221 = 0LLU;
int8_t x225 = -1;
volatile int32_t t40 = 8097094;
static int32_t x230 = 283;
volatile int64_t x241 = -1LL;
int64_t x243 = INT64_MIN;
volatile int32_t t44 = 2450005;
int32_t x248 = INT32_MAX;
volatile int64_t x276 = 1256537142733380051LL;
uint16_t x284 = UINT16_MAX;
int64_t x291 = INT64_MIN;
uint16_t x316 = UINT16_MAX;
volatile int32_t t52 = 14;
int64_t x319 = -30578LL;
int16_t x329 = -1;
uint64_t x369 = 978643746712LLU;
static uint16_t x379 = UINT16_MAX;
volatile int16_t x385 = -367;
uint32_t x394 = UINT32_MAX;
static uint8_t x398 = 30U;
volatile int8_t x400 = 1;
int32_t x408 = 757823;
int32_t t68 = 38;
uint16_t x420 = UINT16_MAX;
int8_t x427 = 3;
int16_t x430 = INT16_MAX;
int8_t x431 = INT8_MIN;
volatile int32_t t74 = -873216883;
uint32_t x435 = UINT32_MAX;
uint64_t x441 = UINT64_MAX;
uint32_t x445 = 324U;
volatile int32_t t79 = -2848213;
int16_t x453 = INT16_MAX;
int64_t x455 = INT64_MAX;
int8_t x456 = -1;
int8_t x467 = 1;
static int16_t x478 = INT16_MIN;
static int32_t t85 = -1;
volatile int8_t x491 = -1;
static int32_t t86 = -6917931;
static int32_t t87 = -15363;
int64_t x506 = INT64_MAX;
static int8_t x508 = INT8_MIN;
volatile int32_t t89 = -61577;
static uint32_t x509 = 805750671U;
volatile int32_t x511 = -69514;
volatile int32_t t90 = 46725985;
int8_t x516 = -15;
int64_t x533 = -1LL;
int32_t t96 = -308685732;
uint32_t x550 = UINT32_MAX;
uint32_t x561 = UINT32_MAX;


void f0(void) {
	uint16_t x1 = 29195U;
	int16_t x2 = -13189;
	static uint8_t x3 = 18U;
	uint32_t x4 = UINT32_MAX;
	static volatile int32_t t0 = -59009321;

	t0 = ((x1*(x2^x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = -4;
	static int8_t x6 = INT8_MIN;
	volatile int16_t x7 = 1;

	t1 = ((x5*(x6^x7))<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 15U;
	int64_t x10 = 13721823259LL;
	volatile int8_t x11 = 0;
	int64_t x12 = INT64_MAX;
	int32_t t2 = -30905984;

	t2 = ((x9*(x10^x11))<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x17 = INT8_MIN;
	uint8_t x18 = 44U;
	uint64_t x19 = 3462233372104797453LLU;
	volatile int32_t t3 = -68;

	t3 = ((x17*(x18^x19))<=x20);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = 2U;
	int16_t x23 = INT16_MIN;
	volatile int32_t t4 = 2824531;

	t4 = ((x21*(x22^x23))<=x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = -1;
	uint64_t x26 = UINT64_MAX;
	int64_t x27 = INT64_MAX;
	int32_t x28 = INT32_MAX;

	t5 = ((x25*(x26^x27))<=x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x30 = 3604LL;
	int16_t x31 = 2;
	int16_t x32 = INT16_MIN;
	volatile int32_t t6 = -8012685;

	t6 = ((x29*(x30^x31))<=x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = -1LL;
	static int64_t x34 = INT64_MIN;
	int64_t x35 = INT64_MIN;
	volatile int32_t t7 = -358254460;

	t7 = ((x33*(x34^x35))<=x36);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x45 = -73620099;
	int8_t x46 = -1;
	uint64_t x47 = UINT64_MAX;
	int32_t x48 = -1;

	t8 = ((x45*(x46^x47))<=x48);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x49 = -1;
	int8_t x50 = 7;
	uint64_t x51 = 3060096498167874356LLU;
	int16_t x52 = INT16_MIN;
	volatile int32_t t9 = -23841;

	t9 = ((x49*(x50^x51))<=x52);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x54 = INT16_MIN;
	volatile int16_t x55 = INT16_MIN;
	int64_t x56 = -126947312071562LL;

	t10 = ((x53*(x54^x55))<=x56);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x57 = INT16_MIN;
	volatile uint8_t x58 = UINT8_MAX;
	static uint64_t x60 = UINT64_MAX;
	volatile int32_t t11 = -12;

	t11 = ((x57*(x58^x59))<=x60);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x61 = -1;
	int64_t x62 = -13795192LL;
	int32_t x63 = INT32_MAX;
	int32_t x64 = INT32_MIN;
	int32_t t12 = 82675100;

	t12 = ((x61*(x62^x63))<=x64);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x69 = -1;
	uint16_t x70 = 4980U;
	static uint64_t x71 = UINT64_MAX;
	static uint8_t x72 = 4U;
	int32_t t13 = 0;

	t13 = ((x69*(x70^x71))<=x72);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x73 = 1416105U;
	uint64_t x75 = 2287749LLU;
	int8_t x76 = -8;
	int32_t t14 = 3984727;

	t14 = ((x73*(x74^x75))<=x76);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x77 = UINT64_MAX;
	int8_t x80 = -1;
	static volatile int32_t t15 = -5071;

	t15 = ((x77*(x78^x79))<=x80);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x85 = -1;
	uint16_t x86 = UINT16_MAX;
	volatile int32_t x87 = INT32_MAX;
	volatile int32_t x88 = INT32_MIN;
	volatile int32_t t16 = -2;

	t16 = ((x85*(x86^x87))<=x88);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x93 = -1;
	static uint32_t x94 = UINT32_MAX;
	int8_t x95 = -1;
	uint64_t x96 = UINT64_MAX;
	volatile int32_t t17 = -3841;

	t17 = ((x93*(x94^x95))<=x96);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x97 = UINT16_MAX;
	int16_t x98 = INT16_MAX;
	static uint8_t x99 = 25U;
	int8_t x100 = -12;
	volatile int32_t t18 = 173058;

	t18 = ((x97*(x98^x99))<=x100);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x109 = INT8_MAX;
	static uint32_t x110 = 135431672U;
	static int8_t x112 = 2;
	static int32_t t19 = 39;

	t19 = ((x109*(x110^x111))<=x112);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int8_t x113 = INT8_MAX;
	int64_t x114 = -6292LL;
	int32_t x115 = INT32_MIN;
	volatile uint64_t x116 = UINT64_MAX;
	static int32_t t20 = 1;

	t20 = ((x113*(x114^x115))<=x116);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x117 = 25649LLU;
	static uint8_t x118 = 6U;
	volatile uint8_t x119 = UINT8_MAX;
	static uint16_t x120 = 0U;
	static volatile int32_t t21 = -12206753;

	t21 = ((x117*(x118^x119))<=x120);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x121 = -1;
	int8_t x122 = INT8_MIN;
	static int32_t x123 = INT32_MAX;
	int8_t x124 = 43;
	int32_t t22 = 15354425;

	t22 = ((x121*(x122^x123))<=x124);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x125 = -1;
	uint16_t x126 = 0U;
	int64_t x128 = INT64_MIN;
	static int32_t t23 = -3294537;

	t23 = ((x125*(x126^x127))<=x128);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x129 = 22636U;
	static int8_t x130 = INT8_MIN;
	static uint8_t x131 = 3U;
	static volatile int64_t x132 = -1LL;

	t24 = ((x129*(x130^x131))<=x132);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x133 = INT8_MIN;
	int64_t x134 = -1LL;
	volatile uint32_t x135 = 91U;
	volatile int32_t x136 = INT32_MAX;
	volatile int32_t t25 = -1;

	t25 = ((x133*(x134^x135))<=x136);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x145 = -1;
	int8_t x146 = INT8_MIN;
	volatile int8_t x148 = INT8_MIN;
	volatile int32_t t26 = -208623644;

	t26 = ((x145*(x146^x147))<=x148);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x149 = 0LLU;
	uint8_t x151 = 4U;
	int64_t x152 = INT64_MAX;
	static int32_t t27 = -3461;

	t27 = ((x149*(x150^x151))<=x152);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x165 = UINT8_MAX;
	int8_t x166 = INT8_MAX;
	static uint16_t x167 = 7U;
	int32_t t28 = 140;

	t28 = ((x165*(x166^x167))<=x168);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x169 = UINT64_MAX;
	int64_t x171 = INT64_MIN;
	volatile int8_t x172 = INT8_MAX;
	int32_t t29 = 26;

	t29 = ((x169*(x170^x171))<=x172);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x173 = 2603;
	uint8_t x174 = 99U;
	int16_t x175 = -1;
	int32_t x176 = -5;
	volatile int32_t t30 = 7960;

	t30 = ((x173*(x174^x175))<=x176);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x177 = 2U;
	int64_t x178 = -1LL;
	int8_t x179 = 1;
	volatile int32_t x180 = -1;
	volatile int32_t t31 = -122005;

	t31 = ((x177*(x178^x179))<=x180);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x181 = 202LLU;
	uint8_t x182 = 1U;
	volatile int16_t x184 = INT16_MIN;

	t32 = ((x181*(x182^x183))<=x184);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x185 = -750966191595LL;
	static volatile uint8_t x186 = UINT8_MAX;
	static int32_t x188 = 178;
	int32_t t33 = -1;

	t33 = ((x185*(x186^x187))<=x188);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x193 = UINT32_MAX;
	int8_t x194 = -1;
	volatile uint32_t x196 = UINT32_MAX;
	int32_t t34 = -154300;

	t34 = ((x193*(x194^x195))<=x196);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x200 = UINT32_MAX;
	int32_t t35 = -1;

	t35 = ((x197*(x198^x199))<=x200);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x201 = 3U;
	int32_t x202 = -19;
	int16_t x203 = 1;
	volatile int32_t t36 = 5;

	t36 = ((x201*(x202^x203))<=x204);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x209 = UINT64_MAX;
	static int64_t x210 = INT64_MIN;
	int32_t x211 = 2;

	t37 = ((x209*(x210^x211))<=x212);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x214 = 295;
	int8_t x215 = -1;
	int16_t x216 = INT16_MIN;
	int32_t t38 = 4431033;

	t38 = ((x213*(x214^x215))<=x216);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x222 = UINT16_MAX;
	static volatile int8_t x223 = INT8_MIN;
	volatile int16_t x224 = -1;
	int32_t t39 = -1098;

	t39 = ((x221*(x222^x223))<=x224);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x226 = -1;
	int64_t x227 = -1LL;
	uint8_t x228 = 83U;

	t40 = ((x225*(x226^x227))<=x228);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x229 = 1196259LLU;
	int16_t x231 = -1;
	static uint16_t x232 = 4U;
	static int32_t t41 = 1269855;

	t41 = ((x229*(x230^x231))<=x232);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x233 = -1;
	int32_t x234 = -4;
	int8_t x235 = INT8_MIN;
	int64_t x236 = INT64_MIN;
	volatile int32_t t42 = 12298029;

	t42 = ((x233*(x234^x235))<=x236);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x237 = UINT32_MAX;
	volatile int32_t x238 = 375;
	int16_t x239 = -324;
	int64_t x240 = -1475LL;
	int32_t t43 = -90114072;

	t43 = ((x237*(x238^x239))<=x240);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x242 = INT32_MIN;
	static volatile uint32_t x244 = UINT32_MAX;

	t44 = ((x241*(x242^x243))<=x244);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x245 = 11U;
	uint8_t x246 = UINT8_MAX;
	uint32_t x247 = 5972U;
	int32_t t45 = 1042399;

	t45 = ((x245*(x246^x247))<=x248);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x265 = INT32_MIN;
	uint32_t x266 = UINT32_MAX;
	volatile uint64_t x267 = 823798468452LLU;
	volatile int8_t x268 = 0;
	int32_t t46 = 16625238;

	t46 = ((x265*(x266^x267))<=x268);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x273 = -474LL;
	volatile int32_t x274 = 514581;
	int64_t x275 = -1LL;
	int32_t t47 = -18;

	t47 = ((x273*(x274^x275))<=x276);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x281 = 36U;
	int64_t x282 = INT64_MIN;
	int64_t x283 = INT64_MIN;
	int32_t t48 = -66631;

	t48 = ((x281*(x282^x283))<=x284);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x289 = 1995;
	static uint64_t x290 = UINT64_MAX;
	volatile int16_t x292 = 314;
	static int32_t t49 = -36;

	t49 = ((x289*(x290^x291))<=x292);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x293 = 9674484U;
	volatile int64_t x294 = -1LL;
	int16_t x295 = INT16_MAX;
	volatile int16_t x296 = -1;
	volatile int32_t t50 = 6894;

	t50 = ((x293*(x294^x295))<=x296);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int8_t x309 = -17;
	int8_t x310 = -1;
	uint64_t x311 = UINT64_MAX;
	uint16_t x312 = UINT16_MAX;
	volatile int32_t t51 = 3330610;

	t51 = ((x309*(x310^x311))<=x312);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x313 = INT32_MAX;
	static int64_t x314 = -1LL;
	static int32_t x315 = -853;

	t52 = ((x313*(x314^x315))<=x316);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x317 = 2282;
	int32_t x318 = -1;
	static volatile uint16_t x320 = 5U;
	volatile int32_t t53 = -23;

	t53 = ((x317*(x318^x319))<=x320);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x325 = 23613U;
	volatile uint8_t x326 = UINT8_MAX;
	uint32_t x327 = 15561U;
	int32_t x328 = INT32_MIN;
	volatile int32_t t54 = -120172;

	t54 = ((x325*(x326^x327))<=x328);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x330 = UINT8_MAX;
	int8_t x331 = INT8_MAX;
	int64_t x332 = INT64_MIN;
	int32_t t55 = -135;

	t55 = ((x329*(x330^x331))<=x332);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x333 = -5102950305689LL;
	int32_t x334 = -4;
	int64_t x335 = -1LL;
	int16_t x336 = INT16_MIN;
	volatile int32_t t56 = 51820421;

	t56 = ((x333*(x334^x335))<=x336);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x345 = -2275;
	int16_t x346 = 3;
	static uint16_t x347 = 3U;
	int32_t x348 = INT32_MIN;
	static volatile int32_t t57 = -6;

	t57 = ((x345*(x346^x347))<=x348);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x349 = -438;
	int16_t x350 = INT16_MIN;
	int64_t x351 = -1LL;
	static int32_t x352 = INT32_MIN;
	static volatile int32_t t58 = 28;

	t58 = ((x349*(x350^x351))<=x352);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x353 = INT8_MIN;
	volatile uint8_t x354 = 14U;
	uint64_t x355 = UINT64_MAX;
	uint8_t x356 = 9U;
	volatile int32_t t59 = 7770087;

	t59 = ((x353*(x354^x355))<=x356);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x361 = 790;
	int16_t x362 = INT16_MAX;
	volatile int16_t x363 = -5530;
	int64_t x364 = INT64_MIN;
	volatile int32_t t60 = 0;

	t60 = ((x361*(x362^x363))<=x364);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x370 = INT16_MAX;
	int64_t x371 = INT64_MAX;
	volatile uint64_t x372 = 12409365635LLU;
	volatile int32_t t61 = -229;

	t61 = ((x369*(x370^x371))<=x372);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x377 = INT16_MIN;
	uint8_t x378 = 51U;
	static int32_t x380 = INT32_MIN;
	int32_t t62 = 3;

	t62 = ((x377*(x378^x379))<=x380);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int16_t x381 = INT16_MIN;
	static int8_t x382 = -1;
	uint32_t x383 = UINT32_MAX;
	static volatile uint64_t x384 = 79346809695878705LLU;
	int32_t t63 = -19805628;

	t63 = ((x381*(x382^x383))<=x384);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x386 = UINT8_MAX;
	static int16_t x387 = INT16_MAX;
	volatile int64_t x388 = INT64_MIN;
	int32_t t64 = -11;

	t64 = ((x385*(x386^x387))<=x388);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x389 = -1;
	int8_t x390 = 25;
	volatile int32_t x391 = INT32_MIN;
	static int64_t x392 = INT64_MIN;
	int32_t t65 = 359601;

	t65 = ((x389*(x390^x391))<=x392);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x393 = 57621;
	uint16_t x395 = UINT16_MAX;
	int8_t x396 = -1;
	int32_t t66 = 691045;

	t66 = ((x393*(x394^x395))<=x396);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x397 = 496211U;
	static int16_t x399 = -774;
	volatile int32_t t67 = 0;

	t67 = ((x397*(x398^x399))<=x400);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x405 = 0;
	int16_t x406 = INT16_MIN;
	uint32_t x407 = 985619U;

	t68 = ((x405*(x406^x407))<=x408);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x409 = 257353199880705289LLU;
	static volatile int8_t x410 = INT8_MAX;
	uint16_t x411 = 230U;
	static int8_t x412 = INT8_MIN;
	volatile int32_t t69 = -55;

	t69 = ((x409*(x410^x411))<=x412);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x413 = 1;
	int32_t x414 = 395502;
	uint16_t x415 = 19U;
	volatile int16_t x416 = INT16_MIN;
	volatile int32_t t70 = -71352;

	t70 = ((x413*(x414^x415))<=x416);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x417 = 24278960LLU;
	volatile int64_t x418 = INT64_MIN;
	uint8_t x419 = UINT8_MAX;
	volatile int32_t t71 = -240551;

	t71 = ((x417*(x418^x419))<=x420);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x421 = 1;
	volatile int32_t x422 = -1;
	int64_t x423 = 238841105992LL;
	uint64_t x424 = 120837510472587919LLU;
	int32_t t72 = -526264628;

	t72 = ((x421*(x422^x423))<=x424);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x425 = 37U;
	volatile uint32_t x426 = 325U;
	static uint32_t x428 = 2879095U;
	int32_t t73 = 390352962;

	t73 = ((x425*(x426^x427))<=x428);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x429 = -1;
	volatile int16_t x432 = 24;

	t74 = ((x429*(x430^x431))<=x432);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x433 = 106U;
	int32_t x434 = 2357;
	volatile uint16_t x436 = 41U;
	int32_t t75 = -1;

	t75 = ((x433*(x434^x435))<=x436);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x437 = 2U;
	static volatile uint64_t x438 = 2985LLU;
	uint8_t x439 = 30U;
	int8_t x440 = -18;
	int32_t t76 = 0;

	t76 = ((x437*(x438^x439))<=x440);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x442 = INT8_MIN;
	int8_t x443 = INT8_MIN;
	int16_t x444 = INT16_MIN;
	volatile int32_t t77 = 58;

	t77 = ((x441*(x442^x443))<=x444);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x446 = INT32_MIN;
	volatile int8_t x447 = INT8_MAX;
	int32_t x448 = -1;
	static volatile int32_t t78 = 5;

	t78 = ((x445*(x446^x447))<=x448);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x449 = UINT64_MAX;
	int32_t x450 = INT32_MIN;
	uint16_t x451 = UINT16_MAX;
	int8_t x452 = -1;

	t79 = ((x449*(x450^x451))<=x452);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x454 = 8397035540194LLU;
	volatile int32_t t80 = 259468;

	t80 = ((x453*(x454^x455))<=x456);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x461 = UINT16_MAX;
	int16_t x462 = -1;
	int64_t x463 = 0LL;
	int32_t x464 = INT32_MIN;
	int32_t t81 = -1;

	t81 = ((x461*(x462^x463))<=x464);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x465 = -1LL;
	static int16_t x466 = INT16_MIN;
	uint64_t x468 = 12719LLU;
	volatile int32_t t82 = -1;

	t82 = ((x465*(x466^x467))<=x468);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x469 = UINT32_MAX;
	uint32_t x470 = 295U;
	int8_t x471 = -1;
	int16_t x472 = INT16_MIN;
	static int32_t t83 = 7;

	t83 = ((x469*(x470^x471))<=x472);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x477 = INT8_MAX;
	uint64_t x479 = 9753498703203153LLU;
	int8_t x480 = INT8_MIN;
	static int32_t t84 = 123;

	t84 = ((x477*(x478^x479))<=x480);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x481 = 0U;
	static uint32_t x482 = 150613U;
	static volatile int8_t x483 = -1;
	int32_t x484 = 107;

	t85 = ((x481*(x482^x483))<=x484);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x489 = 142U;
	uint64_t x490 = 32417650369521941LLU;
	volatile int8_t x492 = INT8_MIN;

	t86 = ((x489*(x490^x491))<=x492);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x497 = UINT32_MAX;
	int64_t x498 = INT64_MIN;
	int64_t x499 = INT64_MIN;
	static volatile uint8_t x500 = 0U;

	t87 = ((x497*(x498^x499))<=x500);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x501 = 21252638556648917LLU;
	int32_t x502 = INT32_MIN;
	int32_t x503 = INT32_MAX;
	int8_t x504 = INT8_MIN;
	volatile int32_t t88 = 7633;

	t88 = ((x501*(x502^x503))<=x504);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x505 = UINT64_MAX;
	static int64_t x507 = INT64_MIN;

	t89 = ((x505*(x506^x507))<=x508);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x510 = INT32_MIN;
	int8_t x512 = -1;

	t90 = ((x509*(x510^x511))<=x512);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x513 = -1LL;
	int64_t x514 = -1LL;
	int16_t x515 = 15971;
	volatile int32_t t91 = -705026579;

	t91 = ((x513*(x514^x515))<=x516);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x517 = 31607U;
	int64_t x518 = 232447LL;
	int32_t x519 = INT32_MIN;
	int8_t x520 = 27;
	volatile int32_t t92 = -1;

	t92 = ((x517*(x518^x519))<=x520);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x529 = 0U;
	int32_t x530 = INT32_MAX;
	volatile int8_t x531 = -1;
	uint16_t x532 = 0U;
	int32_t t93 = 1440;

	t93 = ((x529*(x530^x531))<=x532);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x534 = INT16_MIN;
	static int8_t x535 = -1;
	uint8_t x536 = UINT8_MAX;
	volatile int32_t t94 = 5065587;

	t94 = ((x533*(x534^x535))<=x536);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x537 = -1;
	static uint64_t x538 = 11076066623LLU;
	uint16_t x539 = 335U;
	int8_t x540 = INT8_MIN;
	static int32_t t95 = -5283;

	t95 = ((x537*(x538^x539))<=x540);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x545 = 8960U;
	int16_t x546 = -351;
	uint8_t x547 = 53U;
	int16_t x548 = INT16_MIN;

	t96 = ((x545*(x546^x547))<=x548);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x549 = 0U;
	uint32_t x551 = 1U;
	int32_t x552 = -1;
	int32_t t97 = 9;

	t97 = ((x549*(x550^x551))<=x552);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x562 = UINT16_MAX;
	int32_t x563 = INT32_MIN;
	uint8_t x564 = 13U;
	static int32_t t98 = -4465;

	t98 = ((x561*(x562^x563))<=x564);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint32_t x577 = 227172U;
	int32_t x578 = -2;
	int32_t x579 = -131930;
	int8_t x580 = -1;
	volatile int32_t t99 = -1;

	t99 = ((x577*(x578^x579))<=x580);

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

