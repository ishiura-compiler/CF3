#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x6 = 437421U;
int16_t x8 = INT16_MIN;
int16_t x17 = 3;
static int32_t x22 = INT32_MIN;
int16_t x39 = INT16_MAX;
uint64_t t7 = 294413LLU;
static int64_t x50 = 103802995LL;
volatile uint16_t x53 = 12U;
static volatile uint8_t x55 = UINT8_MAX;
static int32_t x57 = 2317123;
static int8_t x61 = -3;
int32_t x63 = -1676255;
static int64_t x66 = -2156184510105280852LL;
uint8_t x69 = 8U;
uint8_t x74 = 7U;
static int8_t x79 = -1;
static int32_t x80 = 2;
volatile int32_t t16 = 1;
int16_t x81 = -1;
uint32_t x88 = 8U;
int64_t x96 = INT64_MIN;
volatile int8_t x117 = INT8_MIN;
uint32_t x134 = UINT32_MAX;
static uint64_t x137 = 5543LLU;
int16_t x151 = -2;
uint32_t x152 = 1637649U;
int8_t x154 = INT8_MIN;
volatile uint64_t t30 = 45LLU;
int32_t x186 = INT32_MAX;
int64_t t31 = -24848421226490501LL;
volatile int8_t x194 = 3;
int16_t x197 = INT16_MIN;
static int16_t x204 = INT16_MIN;
uint8_t x214 = 84U;
volatile int64_t t36 = 0LL;
int64_t x222 = -3638821406658293LL;
int8_t x223 = -38;
volatile uint64_t x224 = UINT64_MAX;
volatile int64_t x238 = INT64_MAX;
static int64_t x239 = INT64_MIN;
static uint64_t t39 = 35211957108LLU;
int32_t x245 = INT32_MIN;
static uint64_t x248 = 9779066427190LLU;
volatile int8_t x249 = 3;
static int64_t x259 = -1LL;
int32_t t43 = 60986;
uint32_t x272 = 7U;
int64_t x287 = -1LL;
volatile uint8_t x300 = 125U;
uint32_t x302 = 6848U;
uint64_t t48 = 6406926578874LLU;
volatile int32_t x309 = INT32_MIN;
static volatile int64_t t49 = 1280200LL;
volatile int64_t x322 = 223502157580974617LL;
static volatile uint64_t x336 = 32127975168324662LLU;
int64_t x346 = INT64_MAX;
uint32_t x352 = UINT32_MAX;
uint32_t x362 = 30201837U;
uint32_t x373 = 104U;
uint16_t x400 = 88U;
volatile int32_t t61 = -7313761;
int32_t x402 = -1;
static volatile uint64_t t62 = 1625878417706758719LLU;
static int32_t x419 = 1;
int16_t x425 = -6;
uint64_t x427 = UINT64_MAX;
uint16_t x430 = 17U;
volatile int64_t x433 = INT64_MAX;
int64_t x436 = INT64_MAX;
volatile int16_t x443 = -2;
volatile int8_t x457 = -1;
int64_t x479 = INT64_MIN;
static volatile int64_t t74 = -226569431160LL;
uint16_t x486 = 157U;
static volatile uint8_t x489 = UINT8_MAX;
volatile int32_t x491 = -1;
uint32_t x496 = 12920272U;
int32_t t78 = 625243;
uint64_t x512 = 58LLU;
int64_t x516 = INT64_MIN;
uint16_t x518 = UINT16_MAX;
int8_t x520 = -60;
int64_t x526 = INT64_MIN;
volatile uint32_t x528 = UINT32_MAX;
volatile uint8_t x530 = 1U;
static volatile int64_t x532 = -4103949LL;
int16_t x536 = INT16_MIN;
static int64_t t86 = -35LL;
int64_t x550 = INT64_MAX;
volatile int64_t t88 = -3LL;
int32_t x561 = INT32_MIN;
static uint16_t x567 = UINT16_MAX;
volatile int64_t t90 = 1LL;
uint64_t x585 = UINT64_MAX;
static uint16_t x588 = 24U;
static int16_t x600 = INT16_MAX;
int64_t x614 = -1308754179604410LL;
int64_t x623 = -238676439298LL;
volatile uint8_t x630 = UINT8_MAX;
int64_t x631 = INT64_MIN;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	int16_t x2 = INT16_MAX;
	uint64_t x3 = UINT64_MAX;
	volatile int32_t x4 = INT32_MIN;
	uint64_t t0 = 9414867267LLU;

	t0 = (x1/(x2&(x3%x4)));

	if (t0 != 562967133814800LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	static volatile int32_t x7 = -1;
	volatile uint32_t t1 = 240U;

	t1 = (x5/(x6&(x7%x8)));

	if (t1 != 9818U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int64_t x10 = 5666572243506092LL;
	volatile int16_t x11 = 1943;
	static uint8_t x12 = 23U;
	volatile int64_t t2 = -144251691257960LL;

	t2 = (x9/(x10&(x11%x12)));

	if (t2 != -4096LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x18 = -809642LL;
	uint8_t x19 = UINT8_MAX;
	static int64_t x20 = -6407702681LL;
	volatile int64_t t3 = -24663115065602114LL;

	t3 = (x17/(x18&(x19%x20)));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = -1;
	int16_t x23 = INT16_MIN;
	int64_t x24 = 33LL;
	int64_t t4 = -3LL;

	t4 = (x21/(x22&(x23%x24)));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x29 = 14U;
	int8_t x30 = INT8_MIN;
	uint16_t x31 = UINT16_MAX;
	int64_t x32 = INT64_MAX;
	static volatile int64_t t5 = -10881272LL;

	t5 = (x29/(x30&(x31%x32)));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x37 = 909958;
	int64_t x38 = -1LL;
	uint16_t x40 = 116U;
	int64_t t6 = 29635388867070LL;

	t6 = (x37/(x38&(x39%x40)));

	if (t6 != 16544LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x41 = INT32_MAX;
	uint64_t x42 = 2063454158199678LLU;
	int16_t x43 = INT16_MAX;
	volatile int16_t x44 = INT16_MIN;

	t7 = (x41/(x42&(x43%x44)));

	if (t7 != 305126LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x45 = UINT16_MAX;
	uint8_t x46 = UINT8_MAX;
	uint32_t x47 = UINT32_MAX;
	uint32_t x48 = 32364U;
	static volatile uint32_t t8 = 2075791954U;

	t8 = (x45/(x46&(x47%x48)));

	if (t8 != 316U) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x49 = 49LLU;
	uint16_t x51 = 4699U;
	volatile int64_t x52 = -175375199314210LL;
	volatile uint64_t t9 = 387234874945000239LLU;

	t9 = (x49/(x50&(x51%x52)));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x54 = 35U;
	int64_t x56 = INT64_MIN;
	int64_t t10 = -267159816934LL;

	t10 = (x53/(x54&(x55%x56)));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x58 = 9886U;
	int64_t x59 = -1LL;
	int16_t x60 = INT16_MIN;
	int64_t t11 = 8708LL;

	t11 = (x57/(x58&(x59%x60)));

	if (t11 != 234LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x62 = -1;
	volatile int8_t x64 = INT8_MIN;
	int32_t t12 = -29059;

	t12 = (x61/(x62&(x63%x64)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x65 = UINT32_MAX;
	uint8_t x67 = UINT8_MAX;
	int8_t x68 = -45;
	static int64_t t13 = -492LL;

	t13 = (x65/(x66&(x67%x68)));

	if (t13 != 357913941LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x70 = -1;
	volatile int16_t x71 = 5215;
	int16_t x72 = INT16_MIN;
	static volatile int32_t t14 = 0;

	t14 = (x69/(x70&(x71%x72)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x73 = 1;
	int16_t x75 = -1;
	uint8_t x76 = 8U;
	int32_t t15 = -13386194;

	t15 = (x73/(x74&(x75%x76)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x77 = INT16_MIN;
	int8_t x78 = INT8_MIN;

	t16 = (x77/(x78&(x79%x80)));

	if (t16 != 256) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x82 = -1LL;
	static uint16_t x83 = UINT16_MAX;
	int8_t x84 = INT8_MAX;
	static int64_t t17 = 321945031162712LL;

	t17 = (x81/(x82&(x83%x84)));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x85 = 230689U;
	int32_t x86 = -1;
	int8_t x87 = -3;
	static uint32_t t18 = 124U;

	t18 = (x85/(x86&(x87%x88)));

	if (t18 != 46137U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x89 = INT8_MIN;
	uint16_t x90 = 3U;
	int8_t x91 = INT8_MAX;
	int64_t x92 = INT64_MIN;
	int64_t t19 = 19698119767119516LL;

	t19 = (x89/(x90&(x91%x92)));

	if (t19 != -42LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x93 = UINT64_MAX;
	int32_t x94 = INT32_MIN;
	int8_t x95 = -1;
	uint64_t t20 = 3LLU;

	t20 = (x93/(x94&(x95%x96)));

	if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x101 = INT64_MAX;
	volatile int32_t x102 = INT32_MAX;
	int16_t x103 = INT16_MIN;
	uint16_t x104 = UINT16_MAX;
	volatile int64_t t21 = -10151390LL;

	t21 = (x101/(x102&(x103%x104)));

	if (t21 != 4295032833LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x118 = INT8_MIN;
	int32_t x119 = -1;
	int16_t x120 = INT16_MIN;
	int32_t t22 = -551508696;

	t22 = (x117/(x118&(x119%x120)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x133 = 12068LLU;
	int64_t x135 = INT64_MIN;
	static int16_t x136 = INT16_MAX;
	uint64_t t23 = 5240030613512LLU;

	t23 = (x133/(x134&(x135%x136)));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x138 = UINT16_MAX;
	static int64_t x139 = -2LL;
	volatile int64_t x140 = -2153214LL;
	volatile uint64_t t24 = 858051434108LLU;

	t24 = (x137/(x138&(x139%x140)));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x145 = 734133366070LLU;
	int32_t x146 = -1;
	int64_t x147 = INT64_MAX;
	int16_t x148 = INT16_MAX;
	uint64_t t25 = 94609551LLU;

	t25 = (x145/(x146&(x147%x148)));

	if (t25 != 104876195152LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x149 = INT8_MAX;
	uint32_t x150 = 214517224U;
	uint32_t t26 = 394771228U;

	t26 = (x149/(x150&(x151%x152)));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x153 = INT16_MIN;
	int8_t x155 = INT8_MIN;
	volatile uint64_t x156 = UINT64_MAX;
	uint64_t t27 = 34043970417088000LLU;

	t27 = (x153/(x154&(x155%x156)));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x161 = INT32_MIN;
	static uint32_t x162 = UINT32_MAX;
	int64_t x163 = INT64_MAX;
	volatile uint64_t x164 = 5240730LLU;
	static uint64_t t28 = 2LLU;

	t28 = (x161/(x162&(x163%x164)));

	if (t28 != 3636899629988LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x169 = UINT16_MAX;
	int32_t x170 = -48843058;
	uint8_t x171 = 13U;
	int16_t x172 = INT16_MIN;
	volatile int32_t t29 = 163002;

	t29 = (x169/(x170&(x171%x172)));

	if (t29 != 5461) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x181 = -6;
	static uint16_t x182 = UINT16_MAX;
	int64_t x183 = INT64_MIN;
	uint64_t x184 = 43950127561465118LLU;

	t30 = (x181/(x182&(x183%x184)));

	if (t30 != 287646095021199LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x185 = INT32_MIN;
	volatile int64_t x187 = INT64_MIN;
	int8_t x188 = INT8_MAX;

	t31 = (x185/(x186&(x187%x188)));

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x193 = 1;
	uint8_t x195 = 2U;
	static int64_t x196 = INT64_MIN;
	static int64_t t32 = 0LL;

	t32 = (x193/(x194&(x195%x196)));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x198 = -4;
	int64_t x199 = 1948LL;
	volatile int32_t x200 = INT32_MAX;
	int64_t t33 = 8611301926615457LL;

	t33 = (x197/(x198&(x199%x200)));

	if (t33 != -16LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x201 = UINT64_MAX;
	int64_t x202 = INT64_MAX;
	uint64_t x203 = 823776679003026732LLU;
	uint64_t t34 = 13957153602088LLU;

	t34 = (x201/(x202&(x203%x204)));

	if (t34 != 22LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x209 = INT16_MIN;
	int64_t x210 = -385239133425LL;
	static volatile int8_t x211 = INT8_MIN;
	uint64_t x212 = 518008157643555574LLU;
	uint64_t t35 = 5682152040546753LLU;

	t35 = (x209/(x210&(x211%x212)));

	if (t35 != 58LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x213 = 5U;
	volatile int64_t x215 = INT64_MIN;
	int16_t x216 = INT16_MAX;

	t36 = (x213/(x214&(x215%x216)));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x221 = 212;
	uint64_t t37 = 3360329666087791LLU;

	t37 = (x221/(x222&(x223%x224)));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x233 = 9055943945749356LL;
	volatile int16_t x234 = -619;
	uint64_t x235 = 532134LLU;
	volatile int64_t x236 = INT64_MIN;
	uint64_t t38 = 564LLU;

	t38 = (x233/(x234&(x235%x236)));

	if (t38 != 17035644043LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x237 = UINT64_MAX;
	static int64_t x240 = INT64_MAX;

	t39 = (x237/(x238&(x239%x240)));

	if (t39 != 2LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x246 = INT8_MAX;
	int8_t x247 = INT8_MIN;
	volatile uint64_t t40 = 5709945LLU;

	t40 = (x245/(x246&(x247%x248)));

	if (t40 != 1537228672630172330LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x250 = INT64_MAX;
	int32_t x251 = INT32_MAX;
	int64_t x252 = 215923063960212LL;
	static int64_t t41 = -1982LL;

	t41 = (x249/(x250&(x251%x252)));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x257 = 0U;
	static volatile int64_t x258 = INT64_MIN;
	int32_t x260 = 903432;
	static int64_t t42 = -10696LL;

	t42 = (x257/(x258&(x259%x260)));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x261 = 9U;
	int32_t x262 = -14134;
	int8_t x263 = INT8_MIN;
	static int8_t x264 = -3;

	t43 = (x261/(x262&(x263%x264)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x269 = INT16_MIN;
	volatile uint32_t x270 = UINT32_MAX;
	uint32_t x271 = 507U;
	volatile uint32_t t44 = 434000661U;

	t44 = (x269/(x270&(x271%x272)));

	if (t44 != 1431644842U) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x281 = 189U;
	int64_t x282 = -16839815331749LL;
	volatile int32_t x283 = -24117520;
	static int8_t x284 = INT8_MIN;
	volatile int64_t t45 = -257107LL;

	t45 = (x281/(x282&(x283%x284)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x285 = -1;
	int16_t x286 = -130;
	int8_t x288 = INT8_MIN;
	int64_t t46 = -58LL;

	t46 = (x285/(x286&(x287%x288)));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x297 = 330003175;
	uint16_t x298 = 13558U;
	static volatile int8_t x299 = INT8_MIN;
	static int32_t t47 = 11187;

	t47 = (x297/(x298&(x299%x300)));

	if (t47 != 24343) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x301 = INT8_MIN;
	static int16_t x303 = -3;
	uint64_t x304 = UINT64_MAX;

	t48 = (x301/(x302&(x303%x304)));

	if (t48 != 2693741833193567LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x310 = INT64_MAX;
	static int64_t x311 = INT64_MIN;
	uint8_t x312 = UINT8_MAX;

	t49 = (x309/(x310&(x311%x312)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x317 = INT64_MAX;
	volatile int16_t x318 = 1;
	int16_t x319 = -1;
	volatile int32_t x320 = -174;
	volatile int64_t t50 = INT64_MAX;

	t50 = (x317/(x318&(x319%x320)));

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x321 = INT8_MIN;
	int64_t x323 = INT64_MAX;
	static int64_t x324 = 354167264377LL;
	volatile int64_t t51 = -2543912818LL;

	t51 = (x321/(x322&(x323%x324)));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x329 = 0LLU;
	int32_t x330 = INT32_MAX;
	int64_t x331 = INT64_MAX;
	volatile uint16_t x332 = 4614U;
	uint64_t t52 = 2266434LLU;

	t52 = (x329/(x330&(x331%x332)));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x333 = 1819U;
	int32_t x334 = INT32_MIN;
	int64_t x335 = INT64_MAX;
	volatile uint64_t t53 = 43697784529LLU;

	t53 = (x333/(x334&(x335%x336)));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x337 = -21;
	uint32_t x338 = 357U;
	int8_t x339 = INT8_MIN;
	static uint8_t x340 = 58U;
	uint32_t t54 = 229795407U;

	t54 = (x337/(x338&(x339%x340)));

	if (t54 != 12064514U) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x345 = -1;
	uint64_t x347 = UINT64_MAX;
	volatile uint8_t x348 = 27U;
	static volatile uint64_t t55 = 208126657LLU;

	t55 = (x345/(x346&(x347%x348)));

	if (t55 != 768614336404564650LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x349 = INT64_MAX;
	static int16_t x350 = INT16_MIN;
	volatile int8_t x351 = INT8_MIN;
	volatile int64_t t56 = 29929362241580724LL;

	t56 = (x349/(x350&(x351%x352)));

	if (t56 != 2147500032LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x361 = -1;
	int64_t x363 = INT64_MAX;
	int32_t x364 = 15775636;
	static volatile int64_t t57 = 23609847303LL;

	t57 = (x361/(x362&(x363%x364)));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x369 = -1;
	int64_t x370 = -2342893936644251LL;
	static int64_t x371 = INT64_MAX;
	uint32_t x372 = 7373607U;
	volatile int64_t t58 = -58540669LL;

	t58 = (x369/(x370&(x371%x372)));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x374 = 8U;
	int8_t x375 = -1;
	int64_t x376 = INT64_MIN;
	volatile int64_t t59 = -34376LL;

	t59 = (x373/(x374&(x375%x376)));

	if (t59 != 13LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x393 = INT16_MIN;
	int16_t x394 = -22;
	uint32_t x395 = 77404U;
	int8_t x396 = INT8_MIN;
	uint32_t t60 = 2771610U;

	t60 = (x393/(x394&(x395%x396)));

	if (t60 != 55501U) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int16_t x397 = -154;
	int8_t x398 = 23;
	static int8_t x399 = -1;

	t61 = (x397/(x398&(x399%x400)));

	if (t61 != -6) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint64_t x401 = 0LLU;
	int16_t x403 = -1600;
	static int16_t x404 = 1222;

	t62 = (x401/(x402&(x403%x404)));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x409 = 18;
	uint8_t x410 = 13U;
	int64_t x411 = INT64_MAX;
	uint64_t x412 = 1851923285152801554LLU;
	volatile uint64_t t63 = 26181396483649LLU;

	t63 = (x409/(x410&(x411%x412)));

	if (t63 != 3LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x417 = 0U;
	static volatile int32_t x418 = INT32_MAX;
	static int16_t x420 = INT16_MAX;
	volatile int32_t t64 = -79425;

	t64 = (x417/(x418&(x419%x420)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x421 = 97609057670586LLU;
	int32_t x422 = INT32_MAX;
	volatile uint8_t x423 = 1U;
	int8_t x424 = 4;
	uint64_t t65 = 96902274LLU;

	t65 = (x421/(x422&(x423%x424)));

	if (t65 != 97609057670586LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x426 = 26693U;
	uint64_t x428 = 6LLU;
	uint64_t t66 = 24785990364LLU;

	t66 = (x425/(x426&(x427%x428)));

	if (t66 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x429 = 0;
	int32_t x431 = INT32_MAX;
	volatile int64_t x432 = 13391533592236LL;
	static int64_t t67 = -5708218242124LL;

	t67 = (x429/(x430&(x431%x432)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x434 = 16U;
	int8_t x435 = -1;
	int64_t t68 = 2751702538080059824LL;

	t68 = (x433/(x434&(x435%x436)));

	if (t68 != 576460752303423487LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x441 = UINT16_MAX;
	int32_t x442 = INT32_MIN;
	int64_t x444 = INT64_MIN;
	int64_t t69 = -14160LL;

	t69 = (x441/(x442&(x443%x444)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x445 = UINT64_MAX;
	static uint8_t x446 = UINT8_MAX;
	int64_t x447 = INT64_MAX;
	int16_t x448 = INT16_MAX;
	static uint64_t t70 = 26792540989091LLU;

	t70 = (x445/(x446&(x447%x448)));

	if (t70 != 2635249153387078802LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x458 = 10778U;
	static int64_t x459 = -1LL;
	uint64_t x460 = 387027129LLU;
	uint64_t t71 = 2192570729370484676LLU;

	t71 = (x457/(x458&(x459%x460)));

	if (t71 != 34805177497565191LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x465 = -1LL;
	int16_t x466 = -20;
	static volatile uint8_t x467 = UINT8_MAX;
	int32_t x468 = INT32_MAX;
	volatile int64_t t72 = -1LL;

	t72 = (x465/(x466&(x467%x468)));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x477 = INT16_MIN;
	int16_t x478 = INT16_MIN;
	int64_t x480 = 896739948341013668LL;
	int64_t t73 = 1LL;

	t73 = (x477/(x478&(x479%x480)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x481 = -1LL;
	static int64_t x482 = INT64_MAX;
	volatile int64_t x483 = INT64_MIN;
	int32_t x484 = -36;

	t74 = (x481/(x482&(x483%x484)));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x485 = INT64_MIN;
	static uint64_t x487 = 204672436033725272LLU;
	static uint16_t x488 = 346U;
	uint64_t t75 = 58637935LLU;

	t75 = (x485/(x486&(x487%x488)));

	if (t75 != 329406144173384850LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x490 = INT64_MIN;
	int64_t x492 = 1398461044484441669LL;
	int64_t t76 = 10LL;

	t76 = (x489/(x490&(x491%x492)));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x493 = INT64_MIN;
	int64_t x494 = -1LL;
	static volatile int32_t x495 = -1;
	volatile int64_t t77 = 0LL;

	t77 = (x493/(x494&(x495%x496)));

	if (t77 != -1696411128297LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x497 = 387U;
	volatile uint8_t x498 = UINT8_MAX;
	uint16_t x499 = 10266U;
	uint8_t x500 = UINT8_MAX;

	t78 = (x497/(x498&(x499%x500)));

	if (t78 != 5) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x505 = -1;
	int16_t x506 = INT16_MAX;
	int64_t x507 = 10940688981584484LL;
	uint8_t x508 = 27U;
	volatile int64_t t79 = -12LL;

	t79 = (x505/(x506&(x507%x508)));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x509 = INT64_MAX;
	uint16_t x510 = UINT16_MAX;
	volatile uint16_t x511 = 1U;
	static uint64_t t80 = 16LLU;

	t80 = (x509/(x510&(x511%x512)));

	if (t80 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x513 = INT16_MIN;
	static int64_t x514 = INT64_MAX;
	int16_t x515 = INT16_MIN;
	volatile int64_t t81 = 53104279159441117LL;

	t81 = (x513/(x514&(x515%x516)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x517 = 3;
	int64_t x519 = -3493336280LL;
	static volatile int64_t t82 = 6LL;

	t82 = (x517/(x518&(x519%x520)));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x525 = -1;
	int64_t x527 = -1LL;
	int64_t t83 = -68384506768446970LL;

	t83 = (x525/(x526&(x527%x528)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x529 = INT64_MIN;
	static volatile int32_t x531 = INT32_MIN;
	int64_t t84 = INT64_MIN;

	t84 = (x529/(x530&(x531%x532)));

	if (t84 != INT64_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x533 = UINT8_MAX;
	static int64_t x534 = 21637443242LL;
	int16_t x535 = -1;
	volatile int64_t t85 = -1208054LL;

	t85 = (x533/(x534&(x535%x536)));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x537 = 0U;
	int16_t x538 = -1;
	uint8_t x539 = UINT8_MAX;
	static int64_t x540 = INT64_MAX;

	t86 = (x537/(x538&(x539%x540)));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x549 = -14;
	volatile uint64_t x551 = UINT64_MAX;
	int16_t x552 = INT16_MIN;
	uint64_t t87 = 12LLU;

	t87 = (x549/(x550&(x551%x552)));

	if (t87 != 562967133814800LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x557 = -1;
	uint32_t x558 = 46170311U;
	static int32_t x559 = -1;
	int64_t x560 = INT64_MIN;

	t88 = (x557/(x558&(x559%x560)));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int8_t x562 = INT8_MIN;
	static int64_t x563 = -30914005346012LL;
	int16_t x564 = INT16_MAX;
	int64_t t89 = 2293272136133832LL;

	t89 = (x561/(x562&(x563%x564)));

	if (t89 != 699050LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x565 = 1665370LL;
	volatile uint8_t x566 = UINT8_MAX;
	int8_t x568 = -21;

	t90 = (x565/(x566&(x567%x568)));

	if (t90 != 111024LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x569 = -1;
	int16_t x570 = -1;
	int8_t x571 = INT8_MIN;
	int32_t x572 = -56;
	static volatile int32_t t91 = 1424303;

	t91 = (x569/(x570&(x571%x572)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x586 = INT8_MIN;
	volatile int8_t x587 = -1;
	volatile uint64_t t92 = 1565LLU;

	t92 = (x585/(x586&(x587%x588)));

	if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x593 = -1LL;
	uint32_t x594 = 245420U;
	int64_t x595 = 23514418066694LL;
	int8_t x596 = INT8_MIN;
	volatile int64_t t93 = -20LL;

	t93 = (x593/(x594&(x595%x596)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x597 = INT16_MIN;
	uint8_t x598 = UINT8_MAX;
	uint16_t x599 = 84U;
	volatile int32_t t94 = -96376515;

	t94 = (x597/(x598&(x599%x600)));

	if (t94 != -390) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x609 = 22;
	static int64_t x610 = INT64_MAX;
	volatile uint64_t x611 = 32155334LLU;
	uint64_t x612 = 56612519401008592LLU;
	uint64_t t95 = 713093561246LLU;

	t95 = (x609/(x610&(x611%x612)));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x613 = 35;
	int32_t x615 = INT32_MIN;
	uint16_t x616 = UINT16_MAX;
	int64_t t96 = -15770LL;

	t96 = (x613/(x614&(x615%x616)));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint8_t x621 = 7U;
	int64_t x622 = INT64_MAX;
	static volatile uint16_t x624 = 183U;
	volatile int64_t t97 = 2866LL;

	t97 = (x621/(x622&(x623%x624)));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x629 = UINT16_MAX;
	int16_t x632 = INT16_MAX;
	volatile int64_t t98 = -3911703243LL;

	t98 = (x629/(x630&(x631%x632)));

	if (t98 != 264LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x633 = 1480352;
	int16_t x634 = -1;
	int32_t x635 = INT32_MIN;
	uint32_t x636 = 6548408U;
	uint32_t t99 = 4538925U;

	t99 = (x633/(x634&(x635%x636)));

	if (t99 != 0U) { NG(); } else { ; }
	
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

