#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x7 = 0U;
volatile int32_t x11 = -1;
int32_t x12 = INT32_MAX;
volatile int32_t t1 = -2716966;
volatile int16_t x17 = INT16_MAX;
volatile int16_t x20 = 1665;
uint64_t t8 = 23383LLU;
int64_t x58 = -1LL;
volatile int8_t x60 = 22;
static int64_t t10 = 16167990841970460LL;
static uint8_t x65 = 1U;
volatile uint32_t x67 = UINT32_MAX;
volatile int64_t x68 = -13034LL;
volatile int64_t t12 = -2973390139LL;
int8_t x76 = INT8_MIN;
uint16_t x88 = 7961U;
volatile int32_t t15 = -1021255178;
uint64_t x96 = UINT64_MAX;
uint64_t x97 = UINT64_MAX;
int16_t x99 = -10153;
uint64_t x100 = 128LLU;
uint32_t x105 = UINT32_MAX;
static volatile int32_t x119 = -3;
static volatile int64_t t20 = 1021876LL;
static int8_t x124 = -1;
static volatile int64_t t21 = -1LL;
static int16_t x129 = INT16_MIN;
int64_t x131 = -4LL;
uint8_t x132 = 7U;
uint8_t x144 = UINT8_MAX;
volatile uint32_t t23 = 65383098U;
int64_t x145 = 143600496187683051LL;
int64_t x172 = 27760287681365LL;
static volatile int64_t t28 = 0LL;
static volatile uint32_t t29 = 201097U;
uint32_t x184 = 107385183U;
uint32_t t30 = 904807848U;
volatile uint64_t t32 = 239694388256LLU;
volatile uint32_t x207 = 26U;
static uint16_t x222 = 2U;
int64_t t37 = INT64_MIN;
static int16_t x225 = INT16_MIN;
volatile uint64_t x232 = 103430LLU;
int8_t x233 = -1;
uint32_t x236 = 8958438U;
static volatile int64_t t40 = 190399LL;
int16_t x250 = INT16_MAX;
int32_t x251 = INT32_MIN;
static int8_t x259 = 2;
int16_t x267 = -373;
uint64_t x289 = 268654173400217LLU;
int64_t x291 = -1LL;
volatile uint64_t t46 = 23790698978LLU;
uint16_t x305 = UINT16_MAX;
uint64_t x306 = 4785071020747408LLU;
volatile int32_t x308 = INT32_MAX;
volatile uint64_t x312 = 18110493247LLU;
volatile int8_t x348 = -1;
static int16_t x366 = INT16_MIN;
uint32_t x370 = 945U;
static uint64_t x372 = 21058156977191584LLU;
volatile int16_t x381 = INT16_MIN;
volatile int64_t x384 = 6045258210739LL;
int64_t x389 = -7471247240360859LL;
volatile uint32_t t58 = 549U;
volatile uint64_t t60 = 10164057409039173LLU;
static uint8_t x412 = 6U;
int8_t x422 = -11;
uint64_t x431 = UINT64_MAX;
volatile uint64_t t64 = 2101997278326LLU;
int64_t x437 = INT64_MIN;
static volatile int32_t x449 = INT32_MAX;
static int64_t t68 = 462217600LL;
uint16_t x457 = 20315U;
int64_t x458 = INT64_MIN;
uint64_t x459 = 2739283785389568LLU;
static uint8_t x472 = 1U;
uint16_t x473 = 434U;
uint8_t x476 = UINT8_MAX;
uint64_t x495 = 691401992597037349LLU;
uint64_t x496 = 213545729442506LLU;
int8_t x506 = -14;
volatile int64_t x507 = INT64_MAX;
int8_t x508 = INT8_MIN;
volatile uint64_t t73 = 1543319LLU;
static int16_t x515 = -1;
int16_t x516 = INT16_MIN;
volatile int8_t x528 = INT8_MIN;
int32_t x529 = INT32_MIN;
volatile uint16_t x530 = 27U;
int16_t x536 = INT16_MAX;
static volatile uint64_t t79 = 181902156520519648LLU;
int8_t x554 = INT8_MAX;
int8_t x562 = -24;
static volatile uint64_t t85 = 9LLU;
volatile uint64_t t86 = 763535LLU;
static int16_t x585 = INT16_MIN;
static int64_t x600 = INT64_MIN;
uint8_t x601 = 112U;
static int16_t x614 = INT16_MIN;
static volatile int16_t x615 = 1;
static uint8_t x617 = UINT8_MAX;
static int16_t x618 = INT16_MIN;
int32_t x635 = -1;
int8_t x648 = INT8_MAX;
static int16_t x669 = INT16_MIN;
uint32_t x675 = UINT32_MAX;


void f0(void) {
	uint64_t x5 = 831260636238997LLU;
	volatile int16_t x6 = 54;
	static uint32_t x8 = 0U;
	volatile uint64_t t0 = 109292314624486887LLU;

	t0 = (((x5+x6)*x7)&x8);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int8_t x9 = -1;
	int8_t x10 = -2;

	t1 = (((x9+x10)*x11)&x12);

	if (t1 != 3) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x13 = 3778603852196738LLU;
	uint16_t x14 = 2U;
	int8_t x15 = -1;
	static int64_t x16 = INT64_MAX;
	volatile uint64_t t2 = 7782LLU;

	t2 = (((x13+x14)*x15)&x16);

	if (t2 != 9219593433002579068LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x18 = -9;
	int16_t x19 = INT16_MIN;
	int32_t t3 = -6;

	t3 = (((x17+x18)*x19)&x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x21 = UINT64_MAX;
	volatile int32_t x22 = INT32_MAX;
	static int32_t x23 = INT32_MIN;
	int16_t x24 = INT16_MIN;
	volatile uint64_t t4 = 6572930745561963LLU;

	t4 = (((x21+x22)*x23)&x24);

	if (t4 != 13835058059577131008LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x33 = -1;
	int16_t x34 = INT16_MIN;
	uint16_t x35 = 1U;
	uint32_t x36 = UINT32_MAX;
	volatile uint32_t t5 = 37U;

	t5 = (((x33+x34)*x35)&x36);

	if (t5 != 4294934527U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x37 = 390927LLU;
	int8_t x38 = INT8_MIN;
	volatile int64_t x39 = 856LL;
	int16_t x40 = INT16_MAX;
	uint64_t t6 = 1277183151190LLU;

	t6 = (((x37+x38)*x39)&x40);

	if (t6 != 28200LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x41 = INT32_MIN;
	static uint64_t x42 = UINT64_MAX;
	volatile int64_t x43 = -1LL;
	uint64_t x44 = 5311588LLU;
	volatile uint64_t t7 = 1411LLU;

	t7 = (((x41+x42)*x43)&x44);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x45 = UINT64_MAX;
	static volatile int8_t x46 = INT8_MIN;
	int8_t x47 = INT8_MAX;
	uint16_t x48 = 7U;

	t8 = (((x45+x46)*x47)&x48);

	if (t8 != 1LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x57 = -1LL;
	int8_t x59 = 16;
	int64_t t9 = -390776847675160LL;

	t9 = (((x57+x58)*x59)&x60);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x61 = 234U;
	volatile uint16_t x62 = 288U;
	int8_t x63 = INT8_MIN;
	int64_t x64 = INT64_MIN;

	t10 = (((x61+x62)*x63)&x64);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x66 = UINT16_MAX;
	volatile int64_t t11 = -24659122733521483LL;

	t11 = (((x65+x66)*x67)&x68);

	if (t11 != 4294901760LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x69 = -1LL;
	int8_t x70 = -1;
	volatile int32_t x71 = 23;
	int32_t x72 = 337142;

	t12 = (((x69+x70)*x71)&x72);

	if (t12 != 337106LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x73 = UINT32_MAX;
	static uint64_t x74 = UINT64_MAX;
	static int16_t x75 = INT16_MIN;
	uint64_t t13 = 2086604821306465LLU;

	t13 = (((x73+x74)*x75)&x76);

	if (t13 != 18446603336221261824LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x77 = -3;
	volatile int16_t x78 = -1;
	int16_t x79 = 0;
	int32_t x80 = INT32_MIN;
	static int32_t t14 = 601974831;

	t14 = (((x77+x78)*x79)&x80);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x85 = INT8_MAX;
	int8_t x86 = -1;
	volatile int16_t x87 = 159;

	t15 = (((x85+x86)*x87)&x88);

	if (t15 != 3584) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x93 = 2325982602LLU;
	volatile int32_t x94 = 1977;
	int8_t x95 = -1;
	static volatile uint64_t t16 = 5441613LLU;

	t16 = (((x93+x94)*x95)&x96);

	if (t16 != 18446744071383567037LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x98 = INT8_MIN;
	volatile uint64_t t17 = 1668601179LLU;

	t17 = (((x97+x98)*x99)&x100);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x106 = 95156U;
	uint64_t x107 = 9774LLU;
	uint64_t x108 = 1574030919LLU;
	uint64_t t18 = 1471645157569694LLU;

	t18 = (((x105+x106)*x107)&x108);

	if (t18 != 356600834LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x109 = INT8_MAX;
	uint64_t x110 = UINT64_MAX;
	int32_t x111 = INT32_MAX;
	int64_t x112 = INT64_MIN;
	uint64_t t19 = 312793330850791384LLU;

	t19 = (((x109+x110)*x111)&x112);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x117 = 83;
	volatile int16_t x118 = INT16_MAX;
	int64_t x120 = INT64_MAX;

	t20 = (((x117+x118)*x119)&x120);

	if (t20 != 9223372036854677258LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x121 = INT16_MIN;
	int64_t x122 = -25787427023LL;
	uint8_t x123 = UINT8_MAX;

	t21 = (((x121+x122)*x123)&x124);

	if (t21 != -6575802246705LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x130 = INT8_MAX;
	volatile int64_t t22 = -7798078931210644LL;

	t22 = (((x129+x130)*x131)&x132);

	if (t22 != 4LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x141 = 378U;
	volatile int16_t x142 = -1564;
	uint16_t x143 = 12U;

	t23 = (((x141+x142)*x143)&x144);

	if (t23 != 104U) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x146 = UINT32_MAX;
	int16_t x147 = -2;
	int16_t x148 = 8;
	volatile int64_t t24 = -3456161808305067LL;

	t24 = (((x145+x146)*x147)&x148);

	if (t24 != 8LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x153 = 0LL;
	volatile int64_t x154 = 2065879878LL;
	int16_t x155 = -2013;
	static uint16_t x156 = 8908U;
	volatile int64_t t25 = 9373LL;

	t25 = (((x153+x154)*x155)&x156);

	if (t25 != 8832LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x157 = 30055168LLU;
	uint32_t x158 = 610029511U;
	static int16_t x159 = INT16_MIN;
	static int32_t x160 = 62429;
	uint64_t t26 = 382LLU;

	t26 = (((x157+x158)*x159)&x160);

	if (t26 != 32768LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x165 = 2912535LLU;
	volatile uint64_t x166 = 94LLU;
	uint8_t x167 = UINT8_MAX;
	volatile uint32_t x168 = 15825427U;
	static volatile uint64_t t27 = 9866658LLU;

	t27 = (((x165+x166)*x167)&x168);

	if (t27 != 4260355LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x169 = INT8_MIN;
	volatile int16_t x170 = INT16_MAX;
	uint16_t x171 = 243U;

	t28 = (((x169+x170)*x171)&x172);

	if (t28 != 1048837LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x177 = INT16_MIN;
	int8_t x178 = -17;
	static int32_t x179 = -1;
	uint32_t x180 = 674U;

	t29 = (((x177+x178)*x179)&x180);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint8_t x181 = UINT8_MAX;
	int32_t x182 = 303164;
	static int32_t x183 = -1;

	t30 = (((x181+x182)*x183)&x184);

	if (t30 != 107089989U) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x189 = 22U;
	volatile int8_t x190 = INT8_MIN;
	int8_t x191 = INT8_MAX;
	uint8_t x192 = 0U;
	static volatile uint32_t t31 = 6887896U;

	t31 = (((x189+x190)*x191)&x192);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x193 = -2947LL;
	int32_t x194 = INT32_MIN;
	static volatile uint8_t x195 = 111U;
	static uint64_t x196 = 1843LLU;

	t32 = (((x193+x194)*x195)&x196);

	if (t32 != 563LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x205 = 6LLU;
	volatile int16_t x206 = INT16_MAX;
	uint16_t x208 = 3956U;
	static volatile uint64_t t33 = 1100814LLU;

	t33 = (((x205+x206)*x207)&x208);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x209 = 13LLU;
	int64_t x210 = INT64_MIN;
	volatile int16_t x211 = -1;
	int16_t x212 = -10;
	volatile uint64_t t34 = 77675533475530629LLU;

	t34 = (((x209+x210)*x211)&x212);

	if (t34 != 9223372036854775794LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x213 = 21U;
	static uint32_t x214 = UINT32_MAX;
	static int32_t x215 = INT32_MAX;
	volatile int32_t x216 = -1;
	static volatile uint32_t t35 = 157U;

	t35 = (((x213+x214)*x215)&x216);

	if (t35 != 4294967276U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x217 = 64U;
	int32_t x218 = -972;
	int16_t x219 = INT16_MIN;
	static int16_t x220 = INT16_MIN;
	int32_t t36 = -427263754;

	t36 = (((x217+x218)*x219)&x220);

	if (t36 != 29753344) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x221 = -1;
	static int64_t x223 = INT64_MIN;
	int8_t x224 = INT8_MIN;

	t37 = (((x221+x222)*x223)&x224);

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x226 = 1780348491LLU;
	static int16_t x227 = -1;
	int64_t x228 = INT64_MAX;
	uint64_t t38 = 122380467700LLU;

	t38 = (((x225+x226)*x227)&x228);

	if (t38 != 9223372035074460085LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x229 = 1LL;
	int16_t x230 = -1;
	int16_t x231 = INT16_MAX;
	uint64_t t39 = 1067443452101LLU;

	t39 = (((x229+x230)*x231)&x232);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x234 = INT8_MIN;
	int64_t x235 = 24073510LL;

	t40 = (((x233+x234)*x235)&x236);

	if (t40 != 8393154LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x237 = INT64_MIN;
	uint64_t x238 = UINT64_MAX;
	volatile int32_t x239 = -1;
	int32_t x240 = 1;
	uint64_t t41 = 59LLU;

	t41 = (((x237+x238)*x239)&x240);

	if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x241 = -1;
	int16_t x242 = 707;
	uint16_t x243 = UINT16_MAX;
	int32_t x244 = INT32_MAX;
	volatile int32_t t42 = -1;

	t42 = (((x241+x242)*x243)&x244);

	if (t42 != 46267710) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x249 = UINT32_MAX;
	static int32_t x252 = -1;
	volatile uint32_t t43 = 129143907U;

	t43 = (((x249+x250)*x251)&x252);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x257 = INT8_MIN;
	uint64_t x258 = UINT64_MAX;
	uint8_t x260 = 60U;
	volatile uint64_t t44 = 5923813244233824404LLU;

	t44 = (((x257+x258)*x259)&x260);

	if (t44 != 60LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x265 = -1LL;
	volatile int16_t x266 = INT16_MIN;
	static volatile int32_t x268 = INT32_MIN;
	int64_t t45 = -5631072251LL;

	t45 = (((x265+x266)*x267)&x268);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x290 = UINT32_MAX;
	int8_t x292 = INT8_MIN;

	t46 = (((x289+x290)*x291)&x292);

	if (t46 != 18446475415241184000LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x307 = -2;
	volatile uint64_t t47 = 153724376LLU;

	t47 = (((x305+x306)*x307)&x308);

	if (t47 != 724085474LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x309 = 665191435104LL;
	int32_t x310 = -259135;
	int64_t x311 = -1LL;
	uint64_t t48 = 7686007LLU;

	t48 = (((x309+x310)*x311)&x312);

	if (t48 != 17565753375LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x321 = 7999U;
	static uint16_t x322 = 0U;
	volatile int16_t x323 = -1;
	static int32_t x324 = -4647;
	volatile uint32_t t49 = 505669U;

	t49 = (((x321+x322)*x323)&x324);

	if (t49 != 4294959297U) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x345 = 8742;
	static volatile uint8_t x346 = UINT8_MAX;
	int8_t x347 = INT8_MIN;
	int32_t t50 = -1;

	t50 = (((x345+x346)*x347)&x348);

	if (t50 != -1151616) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x349 = UINT8_MAX;
	int8_t x350 = INT8_MAX;
	int16_t x351 = INT16_MIN;
	static uint64_t x352 = 71794LLU;
	volatile uint64_t t51 = 11662837377250092LLU;

	t51 = (((x349+x350)*x351)&x352);

	if (t51 != 65536LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x365 = -1LL;
	uint64_t x367 = UINT64_MAX;
	uint16_t x368 = 2U;
	static uint64_t t52 = 640045904LLU;

	t52 = (((x365+x366)*x367)&x368);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x369 = INT16_MIN;
	uint64_t x371 = 6960088438374548LLU;
	uint64_t t53 = 57711945495464172LLU;

	t53 = (((x369+x370)*x371)&x372);

	if (t53 != 3025856372515328LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x377 = 7242U;
	int32_t x378 = -1;
	uint64_t x379 = 962LLU;
	volatile uint8_t x380 = 0U;
	volatile uint64_t t54 = 462805617449150LLU;

	t54 = (((x377+x378)*x379)&x380);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x382 = 467971U;
	int32_t x383 = INT32_MAX;
	volatile int64_t t55 = 9904668528518LL;

	t55 = (((x381+x382)*x383)&x384);

	if (t55 != 91314609LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x390 = 30848711;
	volatile uint8_t x391 = UINT8_MAX;
	int32_t x392 = -805164524;
	static int64_t t56 = -243995316LL;

	t56 = (((x389+x390)*x391)&x392);

	if (t56 != -1905168038563272684LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x393 = -1;
	uint16_t x394 = 613U;
	uint64_t x395 = 1LLU;
	uint16_t x396 = 149U;
	volatile uint64_t t57 = 103463842656999145LLU;

	t57 = (((x393+x394)*x395)&x396);

	if (t57 != 4LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x397 = UINT32_MAX;
	static uint16_t x398 = 1U;
	static uint32_t x399 = UINT32_MAX;
	static volatile int16_t x400 = 7;

	t58 = (((x397+x398)*x399)&x400);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x401 = 2375726021LLU;
	uint64_t x402 = 0LLU;
	static int16_t x403 = INT16_MIN;
	static int16_t x404 = -1;
	uint64_t t59 = 39030565LLU;

	t59 = (((x401+x402)*x403)&x404);

	if (t59 != 18446666225919295488LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x405 = INT32_MIN;
	uint8_t x406 = UINT8_MAX;
	uint32_t x407 = 149U;
	uint64_t x408 = UINT64_MAX;

	t60 = (((x405+x406)*x407)&x408);

	if (t60 != 2147521643LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x409 = -13;
	static uint64_t x410 = 302868493081LLU;
	int64_t x411 = -185912765LL;
	static volatile uint64_t t61 = 1956738684LLU;

	t61 = (((x409+x410)*x411)&x412);

	if (t61 != 4LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x413 = UINT32_MAX;
	static int8_t x414 = 6;
	int32_t x415 = -42275642;
	volatile uint16_t x416 = UINT16_MAX;
	volatile uint32_t t62 = 58058051U;

	t62 = (((x413+x414)*x415)&x416);

	if (t62 != 40926U) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x421 = 15U;
	int16_t x423 = INT16_MAX;
	int8_t x424 = -1;
	int32_t t63 = -5;

	t63 = (((x421+x422)*x423)&x424);

	if (t63 != 131068) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x429 = INT64_MIN;
	volatile int8_t x430 = 1;
	int64_t x432 = -1LL;

	t64 = (((x429+x430)*x431)&x432);

	if (t64 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x433 = -1;
	int16_t x434 = 433;
	int16_t x435 = 5301;
	int8_t x436 = INT8_MIN;
	int32_t t65 = 16244;

	t65 = (((x433+x434)*x435)&x436);

	if (t65 != 2289920) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x438 = 5918669240066266LLU;
	uint32_t x439 = 316699660U;
	int8_t x440 = INT8_MIN;
	uint64_t t66 = 14558533LLU;

	t66 = (((x437+x438)*x439)&x440);

	if (t66 != 11530419596151312896LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x441 = 12725496LLU;
	volatile int8_t x442 = -1;
	int64_t x443 = INT64_MAX;
	volatile int8_t x444 = 1;
	volatile uint64_t t67 = 168048951746LLU;

	t67 = (((x441+x442)*x443)&x444);

	if (t67 != 1LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x450 = -115091498031LL;
	int16_t x451 = INT16_MIN;
	int8_t x452 = -1;

	t68 = (((x449+x450)*x451)&x452);

	if (t68 != 3700949463334912LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x460 = 1U;
	uint64_t t69 = 510920947052329855LLU;

	t69 = (((x457+x458)*x459)&x460);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x469 = 14284LLU;
	uint16_t x470 = UINT16_MAX;
	static volatile int64_t x471 = INT64_MIN;
	volatile uint64_t t70 = 9743863665LLU;

	t70 = (((x469+x470)*x471)&x472);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x474 = 866032LLU;
	int8_t x475 = INT8_MIN;
	uint64_t t71 = 13LLU;

	t71 = (((x473+x474)*x475)&x476);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x493 = -1;
	int8_t x494 = -1;
	static uint64_t t72 = 474LLU;

	t72 = (((x493+x494)*x495)&x496);

	if (t72 != 72645412388994LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x505 = UINT64_MAX;

	t73 = (((x505+x506)*x507)&x508);

	if (t73 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x509 = 6625074;
	int64_t x510 = -1LL;
	uint64_t x511 = 3833259356009208LLU;
	uint8_t x512 = 0U;
	uint64_t t74 = 6LLU;

	t74 = (((x509+x510)*x511)&x512);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x513 = 3973;
	int8_t x514 = 2;
	volatile int32_t t75 = 12447119;

	t75 = (((x513+x514)*x515)&x516);

	if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x521 = INT8_MAX;
	static int8_t x522 = INT8_MIN;
	uint16_t x523 = UINT16_MAX;
	uint64_t x524 = 0LLU;
	uint64_t t76 = 0LLU;

	t76 = (((x521+x522)*x523)&x524);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x525 = -1;
	uint16_t x526 = 469U;
	int8_t x527 = INT8_MIN;
	static volatile int32_t t77 = -645;

	t77 = (((x525+x526)*x527)&x528);

	if (t77 != -59904) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x531 = 32U;
	uint32_t x532 = UINT32_MAX;
	volatile uint32_t t78 = 3297575U;

	t78 = (((x529+x530)*x531)&x532);

	if (t78 != 864U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x533 = 218295764201916LLU;
	int16_t x534 = INT16_MIN;
	int8_t x535 = INT8_MAX;

	t79 = (((x533+x534)*x535)&x536);

	if (t79 != 11332LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x537 = -1;
	uint8_t x538 = 41U;
	int64_t x539 = 21533606284181LL;
	int64_t x540 = INT64_MIN;
	volatile int64_t t80 = 125960127LL;

	t80 = (((x537+x538)*x539)&x540);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x541 = INT64_MIN;
	int64_t x542 = INT64_MAX;
	int16_t x543 = 14245;
	static int8_t x544 = -1;
	int64_t t81 = -4LL;

	t81 = (((x541+x542)*x543)&x544);

	if (t81 != -14245LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x553 = 64316;
	static volatile uint16_t x555 = 15831U;
	int16_t x556 = -816;
	static volatile int32_t t82 = 93;

	t82 = (((x553+x554)*x555)&x556);

	if (t82 != 1020196864) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x561 = -1;
	int32_t x563 = 8239560;
	int64_t x564 = -1LL;
	volatile int64_t t83 = 8741507286967LL;

	t83 = (((x561+x562)*x563)&x564);

	if (t83 != -205989000LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x565 = 52267U;
	uint8_t x566 = 91U;
	uint16_t x567 = 23100U;
	static int32_t x568 = INT32_MIN;
	uint32_t t84 = 349197775U;

	t84 = (((x565+x566)*x567)&x568);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x569 = INT8_MIN;
	static uint64_t x570 = 86LLU;
	uint32_t x571 = 7032U;
	int16_t x572 = INT16_MIN;

	t85 = (((x569+x570)*x571)&x572);

	if (t85 != 18446744073709223936LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x577 = UINT64_MAX;
	int32_t x578 = 7206479;
	uint64_t x579 = 451LLU;
	static uint32_t x580 = UINT32_MAX;

	t86 = (((x577+x578)*x579)&x580);

	if (t86 != 3250121578LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x586 = 1U;
	static int32_t x587 = -1;
	volatile int8_t x588 = INT8_MIN;
	static volatile int32_t t87 = -65135014;

	t87 = (((x585+x586)*x587)&x588);

	if (t87 != 32640) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x589 = INT8_MAX;
	int8_t x590 = -3;
	static uint16_t x591 = 13U;
	static int64_t x592 = 6566415LL;
	int64_t t88 = -16425612962766LL;

	t88 = (((x589+x590)*x591)&x592);

	if (t88 != 524LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x597 = 3189LL;
	int64_t x598 = 32462LL;
	static int16_t x599 = INT16_MAX;
	volatile int64_t t89 = -828LL;

	t89 = (((x597+x598)*x599)&x600);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x602 = 0U;
	int8_t x603 = 1;
	int8_t x604 = INT8_MIN;
	volatile int32_t t90 = -117931912;

	t90 = (((x601+x602)*x603)&x604);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x605 = INT8_MIN;
	int32_t x606 = INT32_MAX;
	static int8_t x607 = -1;
	volatile uint16_t x608 = 463U;
	int32_t t91 = -1013869013;

	t91 = (((x605+x606)*x607)&x608);

	if (t91 != 129) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x613 = INT32_MAX;
	int16_t x616 = INT16_MAX;
	volatile int32_t t92 = -193879843;

	t92 = (((x613+x614)*x615)&x616);

	if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x619 = 5;
	int64_t x620 = -1LL;
	volatile int64_t t93 = -16102LL;

	t93 = (((x617+x618)*x619)&x620);

	if (t93 != -162565LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x629 = UINT16_MAX;
	static uint8_t x630 = 66U;
	uint8_t x631 = 51U;
	uint32_t x632 = UINT32_MAX;
	static uint32_t t94 = 91U;

	t94 = (((x629+x630)*x631)&x632);

	if (t94 != 3345651U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x633 = INT16_MIN;
	static int16_t x634 = INT16_MIN;
	uint16_t x636 = 37U;
	volatile int32_t t95 = -3580;

	t95 = (((x633+x634)*x635)&x636);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x645 = 0;
	uint8_t x646 = 36U;
	uint16_t x647 = 7U;
	int32_t t96 = -46712;

	t96 = (((x645+x646)*x647)&x648);

	if (t96 != 124) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x649 = 43497706U;
	volatile uint32_t x650 = 1450U;
	int32_t x651 = INT32_MIN;
	uint32_t x652 = 15082U;
	static volatile uint32_t t97 = 17972748U;

	t97 = (((x649+x650)*x651)&x652);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x670 = 1170LLU;
	uint8_t x671 = 2U;
	int32_t x672 = -1;
	volatile uint64_t t98 = 25101555LLU;

	t98 = (((x669+x670)*x671)&x672);

	if (t98 != 18446744073709488420LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x673 = 206U;
	uint16_t x674 = 276U;
	int64_t x676 = INT64_MIN;
	static int64_t t99 = 251898LL;

	t99 = (((x673+x674)*x675)&x676);

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

