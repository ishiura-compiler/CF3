#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x1 = INT32_MIN;
uint64_t x2 = 2293528365652739614LLU;
volatile uint32_t x4 = UINT32_MAX;
uint16_t x6 = UINT16_MAX;
volatile uint64_t t1 = 8269LLU;
volatile int16_t x21 = INT16_MIN;
volatile int8_t x24 = INT8_MIN;
static uint8_t x28 = 20U;
int16_t x37 = 4;
volatile int32_t x38 = -91817123;
int64_t x40 = -1LL;
int8_t x42 = INT8_MIN;
int64_t x55 = -37350400960LL;
volatile uint8_t x66 = 13U;
volatile uint64_t t14 = 12561632LLU;
volatile int64_t x101 = INT64_MAX;
int64_t t15 = 9563524LL;
int8_t x114 = -14;
static uint16_t x115 = 114U;
uint32_t x121 = 1148830U;
volatile uint64_t t19 = 23444396228082249LLU;
static uint8_t x141 = 0U;
uint64_t x142 = 20033176392103LLU;
uint32_t x146 = UINT32_MAX;
static volatile uint16_t x166 = 7U;
volatile uint32_t t26 = 9295U;
int64_t x207 = -4554424492834LL;
volatile int8_t x209 = INT8_MIN;
static volatile int8_t x218 = INT8_MIN;
int64_t x234 = -1LL;
uint32_t x240 = 269U;
uint8_t x242 = UINT8_MAX;
volatile int64_t t35 = 7236LL;
int64_t x267 = 83LL;
int8_t x268 = -63;
static int64_t t37 = 1LL;
static uint64_t x284 = UINT64_MAX;
volatile int16_t x306 = INT16_MIN;
int64_t x321 = INT64_MIN;
int32_t x322 = INT32_MAX;
uint16_t x326 = UINT16_MAX;
uint32_t x340 = 965737U;
volatile uint16_t x347 = 26U;
int64_t x350 = INT64_MIN;
uint64_t t49 = 258LLU;
uint16_t x357 = 23602U;
int8_t x358 = -1;
static uint16_t x359 = 5208U;
uint16_t x361 = 55U;
int8_t x368 = INT8_MAX;
int8_t x377 = -46;
int16_t x378 = INT16_MIN;
volatile int64_t x396 = -660LL;
uint64_t x407 = 32773093LLU;
static volatile int16_t x411 = -1;
uint64_t x412 = 12362857949679461LLU;
volatile int8_t x413 = INT8_MAX;
static int32_t x428 = -1;
volatile uint32_t x431 = 3273U;
volatile int16_t x435 = INT16_MIN;
int16_t x447 = 33;
int8_t x457 = -1;
int32_t x458 = INT32_MAX;
int64_t x482 = INT64_MIN;
static int8_t x489 = 19;
uint16_t x494 = UINT16_MAX;
volatile int64_t x495 = 12LL;
volatile int8_t x496 = INT8_MIN;
int8_t x497 = INT8_MAX;
int32_t x499 = INT32_MIN;
volatile uint32_t t73 = 12015U;
volatile int32_t x519 = INT32_MIN;
uint32_t x524 = 4U;
volatile int64_t x525 = INT64_MIN;
static uint8_t x527 = 4U;
uint32_t x528 = UINT32_MAX;
volatile int64_t t78 = -50237059192LL;
int16_t x530 = 1;
volatile int32_t x532 = -1;
uint64_t x538 = 374373472673316068LLU;
int16_t x541 = -7;
int16_t x544 = 1;
int8_t x546 = -1;
uint16_t x551 = UINT16_MAX;
volatile int32_t x566 = -1;
int32_t x578 = INT32_MIN;
static uint64_t t88 = 6478888LLU;
uint8_t x590 = 77U;
volatile uint16_t x591 = UINT16_MAX;
static int8_t x592 = -1;
uint8_t x603 = UINT8_MAX;
int32_t t92 = -3;
uint32_t x611 = 32U;
int8_t x620 = INT8_MIN;
static uint8_t x629 = 39U;
int16_t x638 = INT16_MIN;
volatile uint64_t t99 = 72LLU;


void f0(void) {
	static int8_t x3 = -1;
	volatile uint64_t t0 = 156LLU;

	t0 = (x1/((x2%x3)*x4));

	if (t0 != 2LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MIN;
	int32_t x7 = 19;
	volatile uint64_t x8 = 34146216309948617LLU;

	t1 = (x5/((x6%x7)*x8));

	if (t1 != 135LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -4093;
	volatile int16_t x10 = 3030;
	int64_t x11 = 1772557021LL;
	uint64_t x12 = 142277815735314896LLU;
	volatile uint64_t t2 = 14904360LLU;

	t2 = (x9/((x10%x11)*x12));

	if (t2 != 2LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = 42U;
	int32_t x18 = INT32_MIN;
	volatile uint16_t x19 = 7U;
	static int16_t x20 = INT16_MIN;
	int32_t t3 = -683653362;

	t3 = (x17/((x18%x19)*x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x22 = 90875U;
	int32_t x23 = -1;
	uint32_t t4 = 45793124U;

	t4 = (x21/((x22%x23)*x24));

	if (t4 != 1U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x25 = 4U;
	int8_t x26 = INT8_MIN;
	int64_t x27 = INT64_MIN;
	volatile int64_t t5 = 317080LL;

	t5 = (x25/((x26%x27)*x28));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x33 = INT32_MIN;
	uint32_t x34 = 414263334U;
	uint8_t x35 = 14U;
	int8_t x36 = INT8_MAX;
	uint32_t t6 = 724145U;

	t6 = (x33/((x34%x35)*x36));

	if (t6 != 8454660U) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x39 = 15U;
	int64_t t7 = -47010239311750403LL;

	t7 = (x37/((x38%x39)*x40));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = INT64_MIN;
	int64_t x43 = -4534915316LL;
	uint64_t x44 = 961662010039125953LLU;
	volatile uint64_t t8 = 7306LLU;

	t8 = (x41/((x42%x43)*x44));

	if (t8 != 1LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x53 = -57;
	static uint16_t x54 = 279U;
	uint32_t x56 = 20U;
	volatile int64_t t9 = -13LL;

	t9 = (x53/((x54%x55)*x56));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x57 = INT8_MIN;
	static uint32_t x58 = 4407824U;
	volatile int32_t x59 = INT32_MIN;
	uint16_t x60 = 936U;
	uint32_t t10 = 1004173U;

	t10 = (x57/((x58%x59)*x60));

	if (t10 != 1U) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x65 = 4U;
	int32_t x67 = INT32_MIN;
	uint16_t x68 = 2U;
	volatile int32_t t11 = -43560;

	t11 = (x65/((x66%x67)*x68));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x81 = INT8_MIN;
	volatile uint8_t x82 = UINT8_MAX;
	volatile uint32_t x83 = UINT32_MAX;
	int8_t x84 = INT8_MIN;
	volatile uint32_t t12 = 18216459U;

	t12 = (x81/((x82%x83)*x84));

	if (t12 != 1U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x89 = 4258155193LLU;
	int64_t x90 = INT64_MIN;
	int64_t x91 = -43320186971007089LL;
	volatile int8_t x92 = -1;
	volatile uint64_t t13 = 745342373LLU;

	t13 = (x89/((x90%x91)*x92));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x97 = UINT64_MAX;
	int32_t x98 = INT32_MAX;
	int8_t x99 = INT8_MAX;
	int8_t x100 = -1;

	t14 = (x97/((x98%x99)*x100));

	if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x102 = -2894204625LL;
	uint16_t x103 = 1440U;
	uint8_t x104 = UINT8_MAX;

	t15 = (x101/((x102%x103)*x104));

	if (t15 != -77785132083953LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x109 = -27;
	uint64_t x110 = UINT64_MAX;
	uint32_t x111 = 12883134U;
	uint16_t x112 = UINT16_MAX;
	volatile uint64_t t16 = 767LLU;

	t16 = (x109/((x110%x111)*x112));

	if (t16 != 30618793LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x113 = INT8_MIN;
	uint16_t x116 = 15U;
	static volatile int32_t t17 = -10261024;

	t17 = (x113/((x114%x115)*x116));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x117 = INT32_MIN;
	int64_t x118 = INT64_MIN;
	int8_t x119 = INT8_MAX;
	int64_t x120 = 1920244515974804LL;
	volatile int64_t t18 = -1371972790976047LL;

	t18 = (x117/((x118%x119)*x120));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x122 = UINT64_MAX;
	int64_t x123 = INT64_MAX;
	uint64_t x124 = 14531637183LLU;

	t19 = (x121/((x122%x123)*x124));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x129 = -15;
	static int8_t x130 = -28;
	int32_t x131 = INT32_MIN;
	static uint64_t x132 = 459187344943018LLU;
	uint64_t t20 = 13824LLU;

	t20 = (x129/((x130%x131)*x132));

	if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x143 = -53012627288448901LL;
	int32_t x144 = INT32_MAX;
	uint64_t t21 = 29LLU;

	t21 = (x141/((x142%x143)*x144));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x145 = INT8_MIN;
	uint16_t x147 = 439U;
	uint8_t x148 = 6U;
	volatile uint32_t t22 = 1758495753U;

	t22 = (x145/((x146%x147)*x148));

	if (t22 != 2763814U) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x153 = 5734174LLU;
	static uint8_t x154 = 30U;
	int64_t x155 = INT64_MIN;
	int16_t x156 = -1;
	static volatile uint64_t t23 = 1766939555263761754LLU;

	t23 = (x153/((x154%x155)*x156));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x157 = 1U;
	int32_t x158 = INT32_MIN;
	uint64_t x159 = UINT64_MAX;
	static uint8_t x160 = 5U;
	uint64_t t24 = 14690782LLU;

	t24 = (x157/((x158%x159)*x160));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x165 = 6;
	uint64_t x167 = 3201700969105LLU;
	volatile uint32_t x168 = UINT32_MAX;
	static volatile uint64_t t25 = 7029360361257LLU;

	t25 = (x165/((x166%x167)*x168));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x185 = UINT16_MAX;
	uint32_t x186 = 29370673U;
	static int8_t x187 = 4;
	int32_t x188 = INT32_MAX;

	t26 = (x185/((x186%x187)*x188));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x193 = INT64_MIN;
	int64_t x194 = 120LL;
	uint32_t x195 = 54U;
	static uint64_t x196 = 33416615LLU;
	static volatile uint64_t t27 = 3156488397072LLU;

	t27 = (x193/((x194%x195)*x196));

	if (t27 != 23000963335LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x205 = UINT16_MAX;
	int64_t x206 = -1LL;
	uint64_t x208 = 65999842831128997LLU;
	uint64_t t28 = 198160LLU;

	t28 = (x205/((x206%x207)*x208));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x210 = 1;
	volatile int16_t x211 = INT16_MAX;
	volatile int32_t x212 = -1;
	static volatile int32_t t29 = 83958374;

	t29 = (x209/((x210%x211)*x212));

	if (t29 != 128) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x213 = INT16_MIN;
	volatile int32_t x214 = INT32_MIN;
	int32_t x215 = -3257;
	uint8_t x216 = UINT8_MAX;
	volatile int32_t t30 = -1;

	t30 = (x213/((x214%x215)*x216));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x217 = 20LL;
	uint16_t x219 = UINT16_MAX;
	uint32_t x220 = 1464385604U;
	static volatile int64_t t31 = -6645170479801LL;

	t31 = (x217/((x218%x219)*x220));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x229 = INT8_MIN;
	int64_t x230 = -1LL;
	volatile uint16_t x231 = 12U;
	static int8_t x232 = INT8_MIN;
	static int64_t t32 = -682LL;

	t32 = (x229/((x230%x231)*x232));

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x233 = UINT64_MAX;
	volatile int64_t x235 = INT64_MIN;
	static int64_t x236 = -1LL;
	volatile uint64_t t33 = UINT64_MAX;

	t33 = (x233/((x234%x235)*x236));

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x237 = 0;
	uint64_t x238 = 122330264244LLU;
	int16_t x239 = INT16_MIN;
	uint64_t t34 = 5401846354527LLU;

	t34 = (x237/((x238%x239)*x240));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x241 = -2;
	volatile int64_t x243 = INT64_MIN;
	int32_t x244 = -1;

	t35 = (x241/((x242%x243)*x244));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x253 = INT16_MIN;
	int32_t x254 = INT32_MIN;
	uint32_t x255 = UINT32_MAX;
	static int64_t x256 = -1LL;
	int64_t t36 = 11135768758LL;

	t36 = (x253/((x254%x255)*x256));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x265 = INT64_MIN;
	static int32_t x266 = INT32_MIN;

	t37 = (x265/((x266%x267)*x268));

	if (t37 != -1830034134296582LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x277 = 474;
	int16_t x278 = 2;
	uint32_t x279 = 166438163U;
	static int16_t x280 = 1;
	uint32_t t38 = 47188U;

	t38 = (x277/((x278%x279)*x280));

	if (t38 != 237U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x281 = -1;
	static int8_t x282 = 19;
	int16_t x283 = INT16_MIN;
	volatile uint64_t t39 = 762LLU;

	t39 = (x281/((x282%x283)*x284));

	if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int64_t x289 = INT64_MIN;
	static uint64_t x290 = 246186305163LLU;
	static volatile uint64_t x291 = UINT64_MAX;
	volatile int64_t x292 = -7960178LL;
	static uint64_t t40 = 10805918292LLU;

	t40 = (x289/((x290%x291)*x292));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int16_t x305 = INT16_MIN;
	volatile uint16_t x307 = UINT16_MAX;
	int32_t x308 = -1;
	int32_t t41 = 0;

	t41 = (x305/((x306%x307)*x308));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x309 = UINT64_MAX;
	uint16_t x310 = UINT16_MAX;
	static volatile int16_t x311 = INT16_MAX;
	int32_t x312 = -126080;
	uint64_t t42 = 1047585757100756934LLU;

	t42 = (x309/((x310%x311)*x312));

	if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x313 = 1207977393U;
	uint16_t x314 = 81U;
	volatile int64_t x315 = INT64_MAX;
	int32_t x316 = -1;
	static int64_t t43 = 29644LL;

	t43 = (x313/((x314%x315)*x316));

	if (t43 != -14913301LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x323 = INT16_MIN;
	static uint16_t x324 = 3U;
	int64_t t44 = 10150876009LL;

	t44 = (x321/((x322%x323)*x324));

	if (t44 != -93827855635800LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x325 = INT64_MIN;
	static int64_t x327 = -16596935834LL;
	volatile int16_t x328 = -1;
	volatile int64_t t45 = 41851175LL;

	t45 = (x325/((x326%x327)*x328));

	if (t45 != 140739635871744LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x329 = 42;
	uint64_t x330 = 36078012LLU;
	static int32_t x331 = INT32_MAX;
	int16_t x332 = INT16_MIN;
	uint64_t t46 = 193LLU;

	t46 = (x329/((x330%x331)*x332));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x337 = 1993931U;
	volatile int16_t x338 = -59;
	int64_t x339 = INT64_MIN;
	int64_t t47 = -95383690670LL;

	t47 = (x337/((x338%x339)*x340));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x345 = INT32_MIN;
	int64_t x346 = INT64_MIN;
	int16_t x348 = INT16_MAX;
	volatile int64_t t48 = 26LL;

	t48 = (x345/((x346%x347)*x348));

	if (t48 != 8192LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x349 = INT8_MIN;
	uint32_t x351 = 223443U;
	uint64_t x352 = 36545408412LLU;

	t49 = (x349/((x350%x351)*x352));

	if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x360 = INT32_MAX;
	static int32_t t50 = -28662;

	t50 = (x357/((x358%x359)*x360));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x362 = INT16_MIN;
	int64_t x363 = INT64_MIN;
	static volatile int32_t x364 = INT32_MAX;
	static volatile int64_t t51 = 293845427002LL;

	t51 = (x361/((x362%x363)*x364));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x365 = UINT16_MAX;
	int8_t x366 = INT8_MAX;
	int32_t x367 = INT32_MAX;
	int32_t t52 = -66722090;

	t52 = (x365/((x366%x367)*x368));

	if (t52 != 4) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x369 = INT16_MIN;
	uint16_t x370 = 2998U;
	static int8_t x371 = 12;
	uint64_t x372 = 362LLU;
	volatile uint64_t t53 = 14001999385LLU;

	t53 = (x369/((x370%x371)*x372));

	if (t53 != 5095785655720861LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x379 = 3;
	uint32_t x380 = 212429729U;
	volatile uint32_t t54 = 1U;

	t54 = (x377/((x378%x379)*x380));

	if (t54 != 1U) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x389 = 54585198618LLU;
	int32_t x390 = INT32_MAX;
	static int32_t x391 = -14186;
	int16_t x392 = INT16_MIN;
	volatile uint64_t t55 = 11291453943493LLU;

	t55 = (x389/((x390%x391)*x392));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x393 = -595LL;
	volatile int16_t x394 = -5478;
	volatile int32_t x395 = INT32_MAX;
	volatile int64_t t56 = 268305854052839972LL;

	t56 = (x393/((x394%x395)*x396));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x405 = UINT64_MAX;
	static int64_t x406 = -1LL;
	uint16_t x408 = 80U;
	volatile uint64_t t57 = 42036127036803LLU;

	t57 = (x405/((x406%x407)*x408));

	if (t57 != 9173897939LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x409 = 49U;
	static volatile uint64_t x410 = 34910001527LLU;
	uint64_t t58 = 5037331LLU;

	t58 = (x409/((x410%x411)*x412));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x414 = -1LL;
	int16_t x415 = INT16_MIN;
	int8_t x416 = 1;
	int64_t t59 = 116685LL;

	t59 = (x413/((x414%x415)*x416));

	if (t59 != -127LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x421 = INT32_MIN;
	int16_t x422 = -1;
	uint32_t x423 = 241U;
	int32_t x424 = 76;
	volatile uint32_t t60 = 2158676U;

	t60 = (x421/((x422%x423)*x424));

	if (t60 != 2018311U) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x425 = -1LL;
	int64_t x426 = 149070358519665LL;
	int32_t x427 = INT32_MIN;
	volatile int64_t t61 = 6068063LL;

	t61 = (x425/((x426%x427)*x428));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x429 = -1;
	int16_t x430 = 31;
	volatile int32_t x432 = INT32_MAX;
	uint32_t t62 = 182U;

	t62 = (x429/((x430%x431)*x432));

	if (t62 != 2U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x433 = INT64_MIN;
	static int8_t x434 = INT8_MIN;
	volatile uint8_t x436 = 7U;
	int64_t t63 = 44572251218738468LL;

	t63 = (x433/((x434%x435)*x436));

	if (t63 != 10293942005418276LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x445 = UINT16_MAX;
	int64_t x446 = 17982673907762370LL;
	static uint16_t x448 = 6U;
	static volatile int64_t t64 = -2054218488430227LL;

	t64 = (x445/((x446%x447)*x448));

	if (t64 != 728LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x449 = -1;
	static uint64_t x450 = 5730833348504LLU;
	volatile int8_t x451 = INT8_MIN;
	int64_t x452 = INT64_MAX;
	uint64_t t65 = 1037040717473342LLU;

	t65 = (x449/((x450%x451)*x452));

	if (t65 != 1LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x459 = -51196876928LL;
	int8_t x460 = 12;
	volatile int64_t t66 = -101692849LL;

	t66 = (x457/((x458%x459)*x460));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x461 = 54U;
	volatile uint32_t x462 = 5U;
	uint64_t x463 = UINT64_MAX;
	int64_t x464 = INT64_MAX;
	static uint64_t t67 = 4313927396084611508LLU;

	t67 = (x461/((x462%x463)*x464));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x469 = 0U;
	static int16_t x470 = INT16_MIN;
	uint16_t x471 = 6U;
	static volatile int16_t x472 = INT16_MAX;
	volatile int32_t t68 = -5;

	t68 = (x469/((x470%x471)*x472));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x481 = 21941932127995771LLU;
	int32_t x483 = 13;
	static int32_t x484 = INT32_MAX;
	uint64_t t69 = 11LLU;

	t69 = (x481/((x482%x483)*x484));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x485 = INT16_MIN;
	uint8_t x486 = UINT8_MAX;
	static uint64_t x487 = UINT64_MAX;
	int8_t x488 = INT8_MIN;
	uint64_t t70 = 100LLU;

	t70 = (x485/((x486%x487)*x488));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x490 = INT64_MIN;
	int8_t x491 = 5;
	int64_t x492 = -35530589075626LL;
	int64_t t71 = 123LL;

	t71 = (x489/((x490%x491)*x492));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x493 = -15;
	int64_t t72 = 67833363071595LL;

	t72 = (x493/((x494%x495)*x496));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x498 = 116233U;
	uint8_t x500 = 62U;

	t73 = (x497/((x498%x499)*x500));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x501 = 109518340927531LLU;
	volatile int64_t x502 = 3783158LL;
	int32_t x503 = INT32_MIN;
	volatile int16_t x504 = 1;
	uint64_t t74 = 2280126538866LLU;

	t74 = (x501/((x502%x503)*x504));

	if (t74 != 28948920LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x513 = INT8_MAX;
	volatile uint32_t x514 = UINT32_MAX;
	int8_t x515 = INT8_MIN;
	int32_t x516 = INT32_MIN;
	uint32_t t75 = 3168073U;

	t75 = (x513/((x514%x515)*x516));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x517 = INT8_MAX;
	static uint64_t x518 = 30156LLU;
	uint16_t x520 = UINT16_MAX;
	uint64_t t76 = 31LLU;

	t76 = (x517/((x518%x519)*x520));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x521 = UINT16_MAX;
	volatile int64_t x522 = INT64_MAX;
	uint64_t x523 = 13LLU;
	uint64_t t77 = 31111244LLU;

	t77 = (x521/((x522%x523)*x524));

	if (t77 != 2340LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x526 = 455U;

	t78 = (x525/((x526%x527)*x528));

	if (t78 != -2147483649LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x529 = -15;
	uint16_t x531 = 88U;
	volatile int32_t t79 = 12093999;

	t79 = (x529/((x530%x531)*x532));

	if (t79 != 15) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x533 = 1U;
	uint32_t x534 = 240U;
	int8_t x535 = -1;
	int32_t x536 = INT32_MAX;
	uint32_t t80 = 8846U;

	t80 = (x533/((x534%x535)*x536));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x537 = INT32_MIN;
	int16_t x539 = 622;
	int64_t x540 = -1LL;
	uint64_t t81 = 971134445425803430LLU;

	t81 = (x537/((x538%x539)*x540));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x542 = INT16_MIN;
	static int32_t x543 = INT32_MIN;
	volatile int32_t t82 = -117;

	t82 = (x541/((x542%x543)*x544));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x545 = -313037326591LL;
	static int8_t x547 = 6;
	uint32_t x548 = UINT32_MAX;
	volatile int64_t t83 = -39LL;

	t83 = (x545/((x546%x547)*x548));

	if (t83 != -313037326591LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x549 = 7870U;
	volatile uint64_t x550 = 74036753LLU;
	int16_t x552 = INT16_MIN;
	volatile uint64_t t84 = 4825LLU;

	t84 = (x549/((x550%x551)*x552));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x553 = UINT64_MAX;
	static volatile int32_t x554 = INT32_MIN;
	volatile int64_t x555 = INT64_MIN;
	int64_t x556 = 2473561131LL;
	uint64_t t85 = 14388505628LLU;

	t85 = (x553/((x554%x555)*x556));

	if (t85 != 1LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x557 = UINT32_MAX;
	volatile uint16_t x558 = UINT16_MAX;
	int8_t x559 = 10;
	static volatile int16_t x560 = 568;
	volatile uint32_t t86 = 184788U;

	t86 = (x557/((x558%x559)*x560));

	if (t86 != 1512312U) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x565 = UINT64_MAX;
	static volatile int8_t x567 = INT8_MAX;
	uint64_t x568 = 8328774460188623503LLU;
	uint64_t t87 = 4314620836541740LLU;

	t87 = (x565/((x566%x567)*x568));

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int32_t x577 = INT32_MIN;
	static int16_t x579 = INT16_MAX;
	volatile uint64_t x580 = UINT64_MAX;

	t88 = (x577/((x578%x579)*x580));

	if (t88 != 9223372035781033984LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x589 = -1298;
	int32_t t89 = 18;

	t89 = (x589/((x590%x591)*x592));

	if (t89 != 16) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x593 = 220562543880LLU;
	int8_t x594 = 1;
	uint8_t x595 = UINT8_MAX;
	int8_t x596 = -1;
	uint64_t t90 = 11319LLU;

	t90 = (x593/((x594%x595)*x596));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x597 = INT8_MIN;
	volatile int16_t x598 = -271;
	uint32_t x599 = 4U;
	int32_t x600 = INT32_MIN;
	uint32_t t91 = 504613U;

	t91 = (x597/((x598%x599)*x600));

	if (t91 != 1U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x601 = -1013;
	static int16_t x602 = -13;
	int32_t x604 = -3;

	t92 = (x601/((x602%x603)*x604));

	if (t92 != -25) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x605 = INT32_MIN;
	volatile int16_t x606 = 13;
	uint64_t x607 = 810628857LLU;
	static uint8_t x608 = UINT8_MAX;
	volatile uint64_t t93 = 521032520677231857LLU;

	t93 = (x605/((x606%x607)*x608));

	if (t93 != 5564628679204243LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x609 = 3317LLU;
	static int64_t x610 = -1LL;
	int32_t x612 = -1;
	volatile uint64_t t94 = 581214929844898271LLU;

	t94 = (x609/((x610%x611)*x612));

	if (t94 != 3317LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x617 = -112;
	int64_t x618 = INT64_MIN;
	uint8_t x619 = UINT8_MAX;
	int64_t t95 = -9041LL;

	t95 = (x617/((x618%x619)*x620));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x621 = 17905U;
	int64_t x622 = -537LL;
	int64_t x623 = INT64_MIN;
	int8_t x624 = -1;
	int64_t t96 = 3495759053579198115LL;

	t96 = (x621/((x622%x623)*x624));

	if (t96 != 33LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x630 = -1;
	int32_t x631 = -2;
	static int8_t x632 = -1;
	int32_t t97 = -3;

	t97 = (x629/((x630%x631)*x632));

	if (t97 != 39) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x633 = INT16_MIN;
	static int8_t x634 = INT8_MAX;
	int32_t x635 = -23484838;
	uint64_t x636 = 1240809519871LLU;
	static uint64_t t98 = 1137585353382999809LLU;

	t98 = (x633/((x634%x635)*x636));

	if (t98 != 117060LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x637 = INT64_MIN;
	uint64_t x639 = 5814248667689LLU;
	int32_t x640 = INT32_MIN;

	t99 = (x637/((x638%x639)*x640));

	if (t99 != 6LLU) { NG(); } else { ; }
	
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

