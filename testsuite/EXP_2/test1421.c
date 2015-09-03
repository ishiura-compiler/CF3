#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x2 = INT32_MIN;
uint8_t x3 = 72U;
int32_t x5 = INT32_MAX;
volatile uint64_t t1 = 1861560884295932633LLU;
volatile uint64_t t2 = 1456LLU;
static uint16_t x37 = 4U;
static int16_t x83 = INT16_MIN;
int32_t x97 = INT32_MAX;
uint8_t x101 = UINT8_MAX;
uint64_t x119 = 734213120893LLU;
volatile uint64_t x137 = 1827020791766851387LLU;
static uint16_t x138 = UINT16_MAX;
static uint64_t x140 = 7LLU;
static volatile int64_t x142 = INT64_MAX;
int32_t x144 = 254276;
int16_t x146 = -483;
uint8_t x153 = 11U;
uint8_t x154 = 11U;
int64_t x156 = INT64_MIN;
volatile uint8_t x169 = 5U;
volatile int32_t t21 = 799755;
int8_t x197 = 6;
int32_t x212 = INT32_MIN;
static volatile uint64_t t27 = 0LLU;
int64_t x216 = -1LL;
uint64_t t28 = 21441LLU;
static uint64_t x223 = UINT64_MAX;
volatile int8_t x254 = INT8_MAX;
int8_t x255 = 1;
uint32_t x289 = 69979252U;
volatile uint16_t x291 = UINT16_MAX;
volatile uint64_t x296 = 12LLU;
volatile uint64_t t34 = 27403LLU;
uint64_t x305 = UINT64_MAX;
int64_t x308 = INT64_MAX;
uint64_t t36 = 16217928798188950LLU;
volatile int64_t x324 = 2720917341669LL;
uint8_t x327 = 0U;
volatile uint32_t t41 = 74195U;
uint8_t x334 = UINT8_MAX;
int32_t x336 = 396;
volatile uint64_t t43 = 291600131330LLU;
static uint64_t t44 = 241446521281935211LLU;
int32_t x347 = INT32_MAX;
volatile int16_t x348 = INT16_MAX;
volatile uint16_t x357 = UINT16_MAX;
volatile int16_t x358 = INT16_MAX;
static uint64_t x360 = 1560863333176LLU;
volatile int64_t t48 = -75523753144716LL;
uint32_t x401 = 1U;
int8_t x406 = -1;
uint64_t x407 = UINT64_MAX;
int32_t x417 = 962492;
volatile uint16_t x426 = 8746U;
uint8_t x437 = UINT8_MAX;
int16_t x439 = -1;
static int64_t x507 = INT64_MAX;
int64_t t61 = 4360107822497024LL;
static int32_t t63 = -634;
int32_t t64 = 1;
static int8_t x555 = INT8_MIN;
int64_t x556 = INT64_MAX;
uint16_t x562 = 4986U;
int16_t x566 = 2563;
uint8_t x568 = 38U;
uint64_t t68 = 7244501953LLU;
int32_t x572 = 7176097;
uint64_t x577 = 26010572511176LLU;
static volatile int32_t x580 = -1;
volatile uint64_t t71 = 131LLU;
int16_t x585 = INT16_MAX;
int32_t x588 = INT32_MAX;
int16_t x591 = -26;
volatile int32_t t73 = -106;
int8_t x594 = INT8_MAX;
volatile uint32_t t75 = 356233861U;
static int16_t x617 = INT16_MAX;
int16_t x625 = INT16_MAX;
uint64_t x626 = 1768261321371016536LLU;
int8_t x627 = INT8_MIN;
volatile int64_t t78 = 0LL;
uint16_t x631 = 56U;
static int16_t x637 = 1;
int32_t x657 = 0;
volatile int16_t x658 = -5;
volatile int8_t x670 = INT8_MIN;
int64_t x671 = 4393442LL;
uint32_t t85 = 4210U;
volatile uint64_t x689 = 282364701595555LLU;
uint16_t x690 = UINT16_MAX;
uint16_t x701 = UINT16_MAX;
volatile int64_t x703 = INT64_MIN;
int64_t x709 = INT64_MAX;
static int8_t x710 = INT8_MAX;
int64_t x712 = INT64_MIN;
volatile int64_t t90 = 58LL;
volatile int32_t t91 = -21;
uint16_t x717 = UINT16_MAX;
volatile uint64_t x720 = 7118691342267226607LLU;
uint8_t x737 = 8U;
int8_t x741 = INT8_MAX;
int16_t x743 = INT16_MIN;


void f0(void) {
	int8_t x1 = 8;
	int8_t x4 = -1;
	volatile int32_t t0 = -131920556;

	t0 = ((x1<<(x2<x3))/x4);

	if (t0 != -16) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x6 = UINT64_MAX;
	uint32_t x7 = 152U;
	uint64_t x8 = UINT64_MAX;

	t1 = ((x5<<(x6<x7))/x8);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x9 = 13904885213LLU;
	static int32_t x10 = INT32_MAX;
	int32_t x11 = INT32_MIN;
	int32_t x12 = -40;

	t2 = ((x9<<(x10<x11))/x12);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x17 = 22U;
	uint64_t x18 = 0LLU;
	uint16_t x19 = UINT16_MAX;
	uint8_t x20 = 26U;
	volatile int32_t t3 = -70240679;

	t3 = ((x17<<(x18<x19))/x20);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x38 = INT32_MIN;
	int8_t x39 = -5;
	uint64_t x40 = 15921LLU;
	uint64_t t4 = 162LLU;

	t4 = ((x37<<(x38<x39))/x40);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x41 = 6U;
	int8_t x42 = INT8_MAX;
	volatile uint32_t x43 = UINT32_MAX;
	static uint32_t x44 = 231U;
	uint32_t t5 = 2769U;

	t5 = ((x41<<(x42<x43))/x44);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint32_t x45 = 126318U;
	int64_t x46 = INT64_MAX;
	uint64_t x47 = UINT64_MAX;
	int8_t x48 = -29;
	static uint32_t t6 = 144436658U;

	t6 = ((x45<<(x46<x47))/x48);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x53 = 0U;
	int16_t x54 = INT16_MAX;
	int16_t x55 = -46;
	static uint32_t x56 = 25187U;
	static uint32_t t7 = 10368777U;

	t7 = ((x53<<(x54<x55))/x56);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint64_t x61 = UINT64_MAX;
	int16_t x62 = -1;
	uint8_t x63 = UINT8_MAX;
	volatile uint64_t x64 = 2LLU;
	volatile uint64_t t8 = 23248794178618LLU;

	t8 = ((x61<<(x62<x63))/x64);

	if (t8 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x81 = 189U;
	int16_t x82 = -3;
	static int64_t x84 = 64499LL;
	int64_t t9 = 489294LL;

	t9 = ((x81<<(x82<x83))/x84);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x93 = 4123390U;
	static int64_t x94 = 2582647904585LL;
	int8_t x95 = INT8_MAX;
	uint32_t x96 = 1922U;
	static uint32_t t10 = 1391U;

	t10 = ((x93<<(x94<x95))/x96);

	if (t10 != 2145U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x98 = INT64_MAX;
	int64_t x99 = INT64_MAX;
	int64_t x100 = -17587828LL;
	int64_t t11 = -216741522928918LL;

	t11 = ((x97<<(x98<x99))/x100);

	if (t11 != -122LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x102 = INT8_MAX;
	int64_t x103 = -1LL;
	int64_t x104 = INT64_MIN;
	int64_t t12 = -45822LL;

	t12 = ((x101<<(x102<x103))/x104);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x105 = 36959433U;
	uint8_t x106 = 120U;
	volatile int8_t x107 = INT8_MIN;
	int64_t x108 = -1LL;
	int64_t t13 = -4321505584345368LL;

	t13 = ((x105<<(x106<x107))/x108);

	if (t13 != -36959433LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x117 = UINT16_MAX;
	uint16_t x118 = 6U;
	int16_t x120 = INT16_MIN;
	int32_t t14 = -211115;

	t14 = ((x117<<(x118<x119))/x120);

	if (t14 != -3) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x139 = INT8_MAX;
	volatile uint64_t t15 = 985420LLU;

	t15 = ((x137<<(x138<x139))/x140);

	if (t15 != 261002970252407341LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x141 = 22U;
	static int64_t x143 = INT64_MIN;
	static int32_t t16 = 2;

	t16 = ((x141<<(x142<x143))/x144);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x145 = 3;
	int16_t x147 = INT16_MAX;
	uint16_t x148 = 2U;
	volatile int32_t t17 = -1169224;

	t17 = ((x145<<(x146<x147))/x148);

	if (t17 != 3) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x155 = -1;
	volatile int64_t t18 = 1288808047615960857LL;

	t18 = ((x153<<(x154<x155))/x156);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x161 = 3;
	int8_t x162 = INT8_MIN;
	uint32_t x163 = 6630U;
	uint32_t x164 = UINT32_MAX;
	static uint32_t t19 = 168337U;

	t19 = ((x161<<(x162<x163))/x164);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x165 = INT16_MAX;
	int64_t x166 = -143503LL;
	static int16_t x167 = -123;
	int8_t x168 = INT8_MAX;
	int32_t t20 = 58563245;

	t20 = ((x165<<(x166<x167))/x168);

	if (t20 != 516) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x170 = UINT16_MAX;
	volatile int16_t x171 = -46;
	uint16_t x172 = UINT16_MAX;

	t21 = ((x169<<(x170<x171))/x172);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x173 = 16;
	static int8_t x174 = -1;
	int32_t x175 = 1;
	int64_t x176 = -1LL;
	int64_t t22 = 20824573LL;

	t22 = ((x173<<(x174<x175))/x176);

	if (t22 != -32LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x181 = 951115417U;
	int16_t x182 = INT16_MIN;
	int32_t x183 = INT32_MIN;
	int16_t x184 = 494;
	volatile uint32_t t23 = 28U;

	t23 = ((x181<<(x182<x183))/x184);

	if (t23 != 1925334U) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x185 = 3LL;
	int32_t x186 = INT32_MAX;
	volatile int32_t x187 = INT32_MAX;
	static int64_t x188 = -1LL;
	int64_t t24 = 8LL;

	t24 = ((x185<<(x186<x187))/x188);

	if (t24 != -3LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x198 = -1;
	int8_t x199 = INT8_MIN;
	volatile int64_t x200 = INT64_MIN;
	volatile int64_t t25 = -721990146197LL;

	t25 = ((x197<<(x198<x199))/x200);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x201 = INT16_MAX;
	int16_t x202 = -2;
	int16_t x203 = 0;
	static uint64_t x204 = 3LLU;
	uint64_t t26 = 131LLU;

	t26 = ((x201<<(x202<x203))/x204);

	if (t26 != 21844LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x209 = 15LLU;
	int64_t x210 = -6720661067894LL;
	int64_t x211 = INT64_MIN;

	t27 = ((x209<<(x210<x211))/x212);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x213 = UINT64_MAX;
	uint8_t x214 = 43U;
	volatile int32_t x215 = -424;

	t28 = ((x213<<(x214<x215))/x216);

	if (t28 != 1LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x221 = INT8_MAX;
	int16_t x222 = INT16_MAX;
	int8_t x224 = INT8_MIN;
	volatile int32_t t29 = 887;

	t29 = ((x221<<(x222<x223))/x224);

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x253 = 14734251LLU;
	int64_t x256 = INT64_MIN;
	uint64_t t30 = 1931957899496160370LLU;

	t30 = ((x253<<(x254<x255))/x256);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x257 = 13;
	volatile int64_t x258 = INT64_MAX;
	uint32_t x259 = 909U;
	int16_t x260 = -1;
	static volatile int32_t t31 = 3692082;

	t31 = ((x257<<(x258<x259))/x260);

	if (t31 != -13) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x285 = 203898LLU;
	uint64_t x286 = 924561LLU;
	int32_t x287 = 59;
	static uint8_t x288 = UINT8_MAX;
	uint64_t t32 = 8716565887714LLU;

	t32 = ((x285<<(x286<x287))/x288);

	if (t32 != 799LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x290 = -1;
	static int32_t x292 = INT32_MIN;
	volatile uint32_t t33 = 3178U;

	t33 = ((x289<<(x290<x291))/x292);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x293 = 3093U;
	int8_t x294 = 24;
	int8_t x295 = -3;

	t34 = ((x293<<(x294<x295))/x296);

	if (t34 != 257LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int8_t x301 = INT8_MAX;
	int32_t x302 = INT32_MAX;
	int64_t x303 = 85841173LL;
	int32_t x304 = INT32_MIN;
	volatile int32_t t35 = -20;

	t35 = ((x301<<(x302<x303))/x304);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x306 = -1;
	int8_t x307 = INT8_MIN;

	t36 = ((x305<<(x306<x307))/x308);

	if (t36 != 2LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x309 = INT8_MAX;
	static int32_t x310 = INT32_MAX;
	volatile uint8_t x311 = UINT8_MAX;
	uint16_t x312 = UINT16_MAX;
	static int32_t t37 = -2056833;

	t37 = ((x309<<(x310<x311))/x312);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x313 = 6551LLU;
	int64_t x314 = INT64_MAX;
	int16_t x315 = -1;
	static uint8_t x316 = UINT8_MAX;
	volatile uint64_t t38 = 162796371799758LLU;

	t38 = ((x313<<(x314<x315))/x316);

	if (t38 != 25LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x317 = UINT32_MAX;
	uint16_t x318 = 0U;
	volatile int16_t x319 = -23;
	int32_t x320 = INT32_MIN;
	uint32_t t39 = 1062U;

	t39 = ((x317<<(x318<x319))/x320);

	if (t39 != 1U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x321 = INT64_MAX;
	uint16_t x322 = UINT16_MAX;
	uint16_t x323 = 19U;
	static int64_t t40 = 11047518584669642LL;

	t40 = ((x321<<(x322<x323))/x324);

	if (t40 != 3389802LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x325 = UINT32_MAX;
	uint32_t x326 = UINT32_MAX;
	uint8_t x328 = 7U;

	t41 = ((x325<<(x326<x327))/x328);

	if (t41 != 613566756U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x333 = 1069985847U;
	int32_t x335 = INT32_MAX;
	uint32_t t42 = 130U;

	t42 = ((x333<<(x334<x335))/x336);

	if (t42 != 5403968U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x337 = 6LLU;
	volatile uint8_t x338 = 5U;
	static int64_t x339 = INT64_MIN;
	int32_t x340 = 3;

	t43 = ((x337<<(x338<x339))/x340);

	if (t43 != 2LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x341 = UINT16_MAX;
	int8_t x342 = -8;
	volatile int16_t x343 = INT16_MIN;
	static uint64_t x344 = UINT64_MAX;

	t44 = ((x341<<(x342<x343))/x344);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x345 = 421252U;
	static int16_t x346 = -11;
	static uint32_t t45 = 0U;

	t45 = ((x345<<(x346<x347))/x348);

	if (t45 != 25U) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x359 = 582U;
	uint64_t t46 = 255159848504178103LLU;

	t46 = ((x357<<(x358<x359))/x360);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x377 = UINT64_MAX;
	uint64_t x378 = 6037594560945LLU;
	static volatile uint64_t x379 = UINT64_MAX;
	int16_t x380 = 1;
	static volatile uint64_t t47 = 397596244935732LLU;

	t47 = ((x377<<(x378<x379))/x380);

	if (t47 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x389 = 45840984U;
	volatile int32_t x390 = -1;
	static uint32_t x391 = 233U;
	static int64_t x392 = INT64_MIN;

	t48 = ((x389<<(x390<x391))/x392);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x402 = 113U;
	int32_t x403 = INT32_MIN;
	volatile int16_t x404 = 4833;
	volatile uint32_t t49 = 229U;

	t49 = ((x401<<(x402<x403))/x404);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x405 = 1;
	int16_t x408 = 55;
	int32_t t50 = -14914;

	t50 = ((x405<<(x406<x407))/x408);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x409 = 123U;
	int32_t x410 = INT32_MIN;
	int64_t x411 = INT64_MAX;
	static uint32_t x412 = UINT32_MAX;
	uint32_t t51 = 332828119U;

	t51 = ((x409<<(x410<x411))/x412);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x413 = 5;
	static volatile uint8_t x414 = 113U;
	int8_t x415 = 1;
	int16_t x416 = 229;
	volatile int32_t t52 = 252653;

	t52 = ((x413<<(x414<x415))/x416);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x418 = -20946637;
	volatile int16_t x419 = INT16_MIN;
	static int16_t x420 = INT16_MIN;
	volatile int32_t t53 = 111173;

	t53 = ((x417<<(x418<x419))/x420);

	if (t53 != -58) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x425 = 415832739LLU;
	static int64_t x427 = INT64_MAX;
	volatile int32_t x428 = 51;
	volatile uint64_t t54 = 136457873973LLU;

	t54 = ((x425<<(x426<x427))/x428);

	if (t54 != 16307166LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x433 = 414136495027533199LLU;
	static volatile uint64_t x434 = 191950306857LLU;
	volatile int8_t x435 = INT8_MIN;
	int32_t x436 = INT32_MIN;
	uint64_t t55 = 3753646424373653LLU;

	t55 = ((x433<<(x434<x435))/x436);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x438 = 30U;
	static int64_t x440 = 11298LL;
	volatile int64_t t56 = 785446280LL;

	t56 = ((x437<<(x438<x439))/x440);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x441 = 978;
	volatile int64_t x442 = INT64_MIN;
	int32_t x443 = INT32_MIN;
	int32_t x444 = -1;
	int32_t t57 = -3914;

	t57 = ((x441<<(x442<x443))/x444);

	if (t57 != -1956) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x453 = 65325LLU;
	uint64_t x454 = UINT64_MAX;
	uint16_t x455 = UINT16_MAX;
	int8_t x456 = INT8_MAX;
	volatile uint64_t t58 = 87954303LLU;

	t58 = ((x453<<(x454<x455))/x456);

	if (t58 != 514LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x469 = INT16_MAX;
	int16_t x470 = 1;
	uint32_t x471 = 14U;
	int32_t x472 = -3402;
	volatile int32_t t59 = 500907795;

	t59 = ((x469<<(x470<x471))/x472);

	if (t59 != -19) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x473 = 5894221857372LL;
	uint16_t x474 = 41U;
	int64_t x475 = INT64_MIN;
	volatile int16_t x476 = INT16_MIN;
	static int64_t t60 = 508633803678LL;

	t60 = ((x473<<(x474<x475))/x476);

	if (t60 != -179877376LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x505 = 6069102522343LL;
	static uint8_t x506 = UINT8_MAX;
	int64_t x508 = -1152616436637LL;

	t61 = ((x505<<(x506<x507))/x508);

	if (t61 != -10LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x513 = UINT16_MAX;
	volatile uint32_t x514 = 12U;
	uint64_t x515 = 16823561224251LLU;
	static int16_t x516 = INT16_MIN;
	int32_t t62 = 104162;

	t62 = ((x513<<(x514<x515))/x516);

	if (t62 != -3) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x525 = UINT16_MAX;
	volatile uint32_t x526 = 101U;
	static uint16_t x527 = 27U;
	int16_t x528 = INT16_MAX;

	t63 = ((x525<<(x526<x527))/x528);

	if (t63 != 2) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x541 = INT16_MAX;
	static uint64_t x542 = UINT64_MAX;
	static volatile int16_t x543 = INT16_MIN;
	uint16_t x544 = 4U;

	t64 = ((x541<<(x542<x543))/x544);

	if (t64 != 8191) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x545 = UINT64_MAX;
	volatile int8_t x546 = INT8_MIN;
	int16_t x547 = -25;
	int8_t x548 = 1;
	uint64_t t65 = 2504LLU;

	t65 = ((x545<<(x546<x547))/x548);

	if (t65 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x553 = INT64_MAX;
	static int8_t x554 = INT8_MIN;
	int64_t t66 = -1232547373349859097LL;

	t66 = ((x553<<(x554<x555))/x556);

	if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x561 = 644LL;
	uint64_t x563 = UINT64_MAX;
	int64_t x564 = INT64_MIN;
	static int64_t t67 = -6241486761LL;

	t67 = ((x561<<(x562<x563))/x564);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x565 = 371LLU;
	static uint16_t x567 = 650U;

	t68 = ((x565<<(x566<x567))/x568);

	if (t68 != 9LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x569 = 32357092LL;
	int16_t x570 = INT16_MIN;
	static volatile int32_t x571 = -494368;
	static volatile int64_t t69 = -10051496169LL;

	t69 = ((x569<<(x570<x571))/x572);

	if (t69 != 4LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x573 = 0;
	static volatile uint16_t x574 = 905U;
	int32_t x575 = -1;
	static int8_t x576 = -28;
	int32_t t70 = 384;

	t70 = ((x573<<(x574<x575))/x576);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x578 = 18;
	uint64_t x579 = 34829665818445135LLU;

	t71 = ((x577<<(x578<x579))/x580);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x586 = 3767974987172181LLU;
	int64_t x587 = 144899073112895730LL;
	volatile int32_t t72 = -137922417;

	t72 = ((x585<<(x586<x587))/x588);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x589 = 7U;
	int32_t x590 = INT32_MIN;
	volatile int8_t x592 = INT8_MIN;

	t73 = ((x589<<(x590<x591))/x592);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x593 = 91671289011LLU;
	uint64_t x595 = 38394093LLU;
	int32_t x596 = -1;
	uint64_t t74 = 22431761631LLU;

	t74 = ((x593<<(x594<x595))/x596);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x597 = INT8_MAX;
	static volatile int64_t x598 = INT64_MAX;
	volatile int16_t x599 = INT16_MAX;
	uint32_t x600 = 2034908U;

	t75 = ((x597<<(x598<x599))/x600);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x605 = 173U;
	int16_t x606 = INT16_MIN;
	uint64_t x607 = 2518370332LLU;
	volatile int32_t x608 = INT32_MAX;
	volatile int32_t t76 = 417;

	t76 = ((x605<<(x606<x607))/x608);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x618 = -343706LL;
	uint32_t x619 = UINT32_MAX;
	uint32_t x620 = 66291234U;
	uint32_t t77 = 289645577U;

	t77 = ((x617<<(x618<x619))/x620);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x628 = -10685940LL;

	t78 = ((x625<<(x626<x627))/x628);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x629 = INT8_MAX;
	int16_t x630 = INT16_MIN;
	int8_t x632 = INT8_MIN;
	int32_t t79 = -7;

	t79 = ((x629<<(x630<x631))/x632);

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x638 = 43U;
	static uint16_t x639 = 1905U;
	uint64_t x640 = UINT64_MAX;
	volatile uint64_t t80 = 1294798789544LLU;

	t80 = ((x637<<(x638<x639))/x640);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x641 = UINT8_MAX;
	static uint64_t x642 = UINT64_MAX;
	uint16_t x643 = UINT16_MAX;
	int64_t x644 = -20572364LL;
	int64_t t81 = 539975498005LL;

	t81 = ((x641<<(x642<x643))/x644);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x653 = UINT32_MAX;
	volatile int32_t x654 = INT32_MIN;
	volatile int32_t x655 = INT32_MIN;
	uint64_t x656 = 28LLU;
	volatile uint64_t t82 = 28324LLU;

	t82 = ((x653<<(x654<x655))/x656);

	if (t82 != 153391689LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x659 = INT32_MIN;
	int16_t x660 = INT16_MAX;
	int32_t t83 = 14853533;

	t83 = ((x657<<(x658<x659))/x660);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x665 = 3739480U;
	volatile int32_t x666 = -14321;
	int64_t x667 = 0LL;
	volatile uint64_t x668 = 2371920996006LLU;
	uint64_t t84 = 443103915997375LLU;

	t84 = ((x665<<(x666<x667))/x668);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x669 = UINT8_MAX;
	uint32_t x672 = 47305U;

	t85 = ((x669<<(x670<x671))/x672);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x681 = 27U;
	int8_t x682 = 2;
	uint16_t x683 = 60U;
	int32_t x684 = INT32_MAX;
	volatile int32_t t86 = -424;

	t86 = ((x681<<(x682<x683))/x684);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x691 = 3U;
	volatile int64_t x692 = -1LL;
	uint64_t t87 = 4171489959402LLU;

	t87 = ((x689<<(x690<x691))/x692);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x693 = 0;
	uint64_t x694 = 0LLU;
	int32_t x695 = -1;
	int8_t x696 = -13;
	volatile int32_t t88 = -1;

	t88 = ((x693<<(x694<x695))/x696);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int16_t x702 = 4;
	uint64_t x704 = UINT64_MAX;
	uint64_t t89 = 4194194751952353714LLU;

	t89 = ((x701<<(x702<x703))/x704);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x711 = INT32_MIN;

	t90 = ((x709<<(x710<x711))/x712);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x713 = 430;
	static uint32_t x714 = UINT32_MAX;
	int32_t x715 = INT32_MIN;
	static volatile uint16_t x716 = UINT16_MAX;

	t91 = ((x713<<(x714<x715))/x716);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x718 = -1;
	uint32_t x719 = 5707449U;
	volatile uint64_t t92 = 3065408LLU;

	t92 = ((x717<<(x718<x719))/x720);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x721 = 1930973U;
	static uint32_t x722 = 4945326U;
	int32_t x723 = INT32_MIN;
	uint8_t x724 = 10U;
	uint32_t t93 = 645358981U;

	t93 = ((x721<<(x722<x723))/x724);

	if (t93 != 386194U) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x725 = INT16_MAX;
	int8_t x726 = INT8_MAX;
	int8_t x727 = -1;
	static int64_t x728 = 149877LL;
	int64_t t94 = 5044LL;

	t94 = ((x725<<(x726<x727))/x728);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x729 = 0U;
	uint16_t x730 = 4U;
	volatile int16_t x731 = -1;
	int32_t x732 = INT32_MAX;
	int32_t t95 = -1958133;

	t95 = ((x729<<(x730<x731))/x732);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x733 = 352271U;
	int8_t x734 = -1;
	static volatile uint16_t x735 = UINT16_MAX;
	int16_t x736 = -6;
	static volatile uint32_t t96 = 4376U;

	t96 = ((x733<<(x734<x735))/x736);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x738 = INT8_MIN;
	volatile int16_t x739 = 1;
	int16_t x740 = INT16_MIN;
	volatile int32_t t97 = -9460;

	t97 = ((x737<<(x738<x739))/x740);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x742 = INT16_MAX;
	uint8_t x744 = 15U;
	int32_t t98 = 1037124;

	t98 = ((x741<<(x742<x743))/x744);

	if (t98 != 8) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x765 = UINT8_MAX;
	volatile int16_t x766 = INT16_MIN;
	int16_t x767 = -1;
	uint8_t x768 = 1U;
	volatile int32_t t99 = -8525;

	t99 = ((x765<<(x766<x767))/x768);

	if (t99 != 510) { NG(); } else { ; }
	
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

