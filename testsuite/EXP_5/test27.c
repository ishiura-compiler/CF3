#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x30 = UINT16_MAX;
int16_t x31 = INT16_MIN;
volatile int32_t t3 = 70;
uint16_t x39 = UINT16_MAX;
int64_t t4 = -1608012115894575939LL;
static uint32_t x43 = 13087U;
int64_t t5 = INT64_MAX;
uint16_t x59 = 2U;
uint32_t x60 = UINT32_MAX;
static uint8_t x70 = 48U;
volatile uint16_t x82 = UINT16_MAX;
volatile uint32_t x87 = 8745575U;
int32_t x94 = INT32_MIN;
uint16_t x97 = 2U;
uint64_t t14 = 671435453203713767LLU;
uint16_t x105 = 1U;
uint64_t x110 = 19990LLU;
uint16_t x111 = 18U;
volatile uint64_t t16 = 191506LLU;
int8_t x120 = INT8_MAX;
volatile uint64_t x123 = UINT64_MAX;
uint64_t t19 = 497496662641311LLU;
static int16_t x125 = INT16_MIN;
int32_t t21 = 0;
int32_t x149 = -18;
int16_t x163 = INT16_MIN;
int16_t x169 = INT16_MIN;
uint32_t x198 = UINT32_MAX;
volatile int64_t x215 = -3625LL;
uint16_t x228 = 37U;
int32_t x231 = -1;
int8_t x240 = INT8_MAX;
uint8_t x243 = 3U;
uint32_t x244 = 2843U;
static uint64_t x250 = 137907376110154569LLU;
int8_t x267 = INT8_MAX;
static volatile int64_t x270 = 4742LL;
static uint16_t x278 = UINT16_MAX;
static uint16_t x279 = UINT16_MAX;
int64_t x282 = INT64_MIN;
volatile uint16_t x285 = 5579U;
uint32_t x296 = 0U;
static uint32_t x299 = 1351U;
int16_t x307 = INT16_MIN;
static int8_t x311 = INT8_MIN;
static int32_t x313 = 2870592;
volatile uint64_t x314 = 114658LLU;
int8_t x315 = INT8_MIN;
volatile int16_t x317 = INT16_MIN;
static uint32_t x319 = UINT32_MAX;
int8_t x321 = INT8_MIN;
static volatile uint32_t x329 = 1632072U;
uint32_t x331 = 109U;
volatile int32_t x355 = -1;
uint32_t x358 = 2529U;
int64_t x359 = -145346853556895LL;
uint64_t t58 = 1393937060325LLU;
static int8_t x373 = 2;
int64_t x376 = -28464023905006LL;
static uint16_t x390 = UINT16_MAX;
static volatile int32_t x391 = -211857477;
static int32_t t62 = -1452581;
int16_t x395 = -1;
volatile int64_t x397 = INT64_MIN;
uint32_t x400 = UINT32_MAX;
static volatile int16_t x402 = -39;
int16_t x407 = -1;
int32_t t67 = -12009635;
static uint8_t x413 = UINT8_MAX;
volatile uint32_t t70 = 2467U;
volatile uint8_t x429 = UINT8_MAX;
volatile int8_t x439 = -9;
uint64_t t72 = 25550913484LLU;
volatile int16_t x462 = -1;
int16_t x463 = -2252;
int8_t x465 = INT8_MAX;
uint16_t x481 = 771U;
uint64_t t79 = 56709451275271LLU;
static uint32_t x502 = 1813U;
volatile int32_t x503 = -30;
int64_t t81 = 5645833458LL;
static uint32_t x525 = 64943U;
volatile int8_t x533 = -1;
uint64_t x535 = 21417619385LLU;
volatile uint16_t x542 = 7468U;
static int32_t x546 = 0;
static int64_t x548 = -1LL;
static int16_t x555 = -1830;
static int8_t x559 = 7;
uint64_t t93 = 164810787075LLU;
volatile uint64_t t94 = 167240358136391LLU;
uint16_t x575 = 44U;
static int32_t x576 = INT32_MIN;
static uint8_t x583 = 10U;
int64_t x585 = -1LL;
int8_t x595 = -1;


void f0(void) {
	static uint64_t x5 = 8211999845659LLU;
	static uint64_t x6 = 78248499426467852LLU;
	static volatile int16_t x7 = INT16_MAX;
	uint8_t x8 = 0U;
	volatile uint64_t t0 = 21336295798LLU;

	t0 = (x5+((x6+x7)*x8));

	if (t0 != 8211999845659LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x21 = 7824404688501286LLU;
	int32_t x22 = -4426;
	uint64_t x23 = 25733LLU;
	int32_t x24 = 7;
	static uint64_t t1 = 6LLU;

	t1 = (x21+((x22+x23)*x24));

	if (t1 != 7824404688650435LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x25 = INT64_MAX;
	uint64_t x26 = UINT64_MAX;
	int32_t x27 = INT32_MIN;
	int64_t x28 = INT64_MAX;
	uint64_t t2 = 3436141559635369343LLU;

	t2 = (x25+((x26+x27)*x28));

	if (t2 != 2147483648LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x29 = 0U;
	int8_t x32 = INT8_MIN;

	t3 = (x29+((x30+x31)*x32));

	if (t3 != -4194176) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x37 = 4252LL;
	static int16_t x38 = -1;
	static volatile int8_t x40 = INT8_MIN;

	t4 = (x37+((x38+x39)*x40));

	if (t4 != -8384100LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x41 = INT64_MAX;
	static int8_t x42 = 3;
	static uint8_t x44 = 0U;

	t5 = (x41+((x42+x43)*x44));

	if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x45 = -1;
	uint64_t x46 = 461053838692LLU;
	static volatile uint32_t x47 = 153U;
	volatile int16_t x48 = INT16_MIN;
	volatile uint64_t t6 = 605971266675691LLU;

	t6 = (x45+((x46+x47)*x48));

	if (t6 != 18431636261518278655LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x57 = UINT64_MAX;
	int8_t x58 = -3;
	volatile uint64_t t7 = 304576835299219LLU;

	t7 = (x57+((x58+x59)*x60));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x61 = 103U;
	static int64_t x62 = -1LL;
	static uint32_t x63 = 1887714U;
	int8_t x64 = INT8_MAX;
	int64_t t8 = 4439501276231599977LL;

	t8 = (x61+((x62+x63)*x64));

	if (t8 != 239739654LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x69 = 5823U;
	static int32_t x71 = -1;
	uint8_t x72 = 57U;
	uint32_t t9 = 85096U;

	t9 = (x69+((x70+x71)*x72));

	if (t9 != 8502U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x73 = INT8_MAX;
	static int8_t x74 = -50;
	int64_t x75 = INT64_MAX;
	static int8_t x76 = 0;
	volatile int64_t t10 = 3959556679LL;

	t10 = (x73+((x74+x75)*x76));

	if (t10 != 127LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x81 = -971874750;
	int16_t x83 = INT16_MIN;
	uint8_t x84 = 13U;
	volatile int32_t t11 = 797831;

	t11 = (x81+((x82+x83)*x84));

	if (t11 != -971448779) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x85 = 61U;
	static int8_t x86 = -1;
	int32_t x88 = INT32_MAX;
	uint32_t t12 = 43U;

	t12 = (x85+((x86+x87)*x88));

	if (t12 != 4286221783U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x93 = INT8_MAX;
	static int64_t x95 = -1LL;
	static volatile int8_t x96 = -1;
	static volatile int64_t t13 = 1842218279LL;

	t13 = (x93+((x94+x95)*x96));

	if (t13 != 2147483776LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x98 = 76277862267LLU;
	uint32_t x99 = UINT32_MAX;
	uint32_t x100 = 90826U;

	t14 = (x97+((x98+x99)*x100));

	if (t14 != 7318107817798214LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x106 = 190698925904139LLU;
	uint16_t x107 = 436U;
	uint32_t x108 = UINT32_MAX;
	volatile uint64_t t15 = 839694049127363453LLU;

	t15 = (x105+((x106+x107)*x108));

	if (t15 != 10213079073824124226LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x109 = INT16_MIN;
	uint16_t x112 = 3U;

	t16 = (x109+((x110+x111)*x112));

	if (t16 != 27256LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x113 = UINT32_MAX;
	static int8_t x114 = -1;
	uint64_t x115 = UINT64_MAX;
	static volatile uint8_t x116 = UINT8_MAX;
	volatile uint64_t t17 = 10700LLU;

	t17 = (x113+((x114+x115)*x116));

	if (t17 != 4294966785LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x117 = -1;
	volatile int8_t x118 = -27;
	int16_t x119 = -1337;
	volatile int32_t t18 = 22967901;

	t18 = (x117+((x118+x119)*x120));

	if (t18 != -173229) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x121 = INT32_MIN;
	static int8_t x122 = 39;
	static volatile int16_t x124 = -16;

	t19 = (x121+((x122+x123)*x124));

	if (t19 != 18446744071562067360LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x126 = 1U;
	volatile uint64_t x127 = 8501080736007LLU;
	int8_t x128 = INT8_MIN;
	volatile uint64_t t20 = 39583345079098LLU;

	t20 = (x125+((x126+x127)*x128));

	if (t20 != 18445655935375309824LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x133 = INT16_MIN;
	static volatile int16_t x134 = 2813;
	static int16_t x135 = INT16_MAX;
	volatile int16_t x136 = 4728;

	t21 = (x133+((x134+x135)*x136));

	if (t21 != 168189472) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x145 = INT16_MAX;
	uint16_t x146 = 502U;
	int16_t x147 = INT16_MIN;
	int16_t x148 = 9;
	int32_t t22 = 7845;

	t22 = (x145+((x146+x147)*x148));

	if (t22 != -257627) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x150 = 5486538073LLU;
	static int8_t x151 = INT8_MAX;
	volatile uint8_t x152 = 2U;
	uint64_t t23 = 3254LLU;

	t23 = (x149+((x150+x151)*x152));

	if (t23 != 10973076382LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x161 = UINT64_MAX;
	static int16_t x162 = INT16_MAX;
	int64_t x164 = -1LL;
	uint64_t t24 = 1LLU;

	t24 = (x161+((x162+x163)*x164));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x165 = 12;
	static int16_t x166 = INT16_MIN;
	static int16_t x167 = INT16_MIN;
	uint64_t x168 = 3708840413290LLU;
	volatile uint64_t t25 = 8721384837985966LLU;

	t25 = (x165+((x166+x167)*x168));

	if (t25 != 18203681508384178188LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x170 = INT8_MAX;
	uint8_t x171 = UINT8_MAX;
	int8_t x172 = INT8_MAX;
	int32_t t26 = 7425;

	t26 = (x169+((x170+x171)*x172));

	if (t26 != 15746) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x173 = 17819897LLU;
	static uint16_t x174 = 5U;
	uint32_t x175 = 485934U;
	int8_t x176 = INT8_MIN;
	uint64_t t27 = 45555102LLU;

	t27 = (x173+((x174+x175)*x176));

	if (t27 != 4250587001LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x185 = UINT8_MAX;
	uint64_t x186 = UINT64_MAX;
	volatile int64_t x187 = INT64_MAX;
	volatile uint32_t x188 = 46U;
	volatile uint64_t t28 = 113046276040LLU;

	t28 = (x185+((x186+x187)*x188));

	if (t28 != 163LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x197 = -1LL;
	uint8_t x199 = 3U;
	uint64_t x200 = UINT64_MAX;
	volatile uint64_t t29 = 494953871609894LLU;

	t29 = (x197+((x198+x199)*x200));

	if (t29 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x213 = 122U;
	volatile int8_t x214 = INT8_MAX;
	static int8_t x216 = INT8_MIN;
	static volatile int64_t t30 = -141624432LL;

	t30 = (x213+((x214+x215)*x216));

	if (t30 != 447866LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x225 = 9296568744868714LLU;
	volatile int32_t x226 = -12533556;
	static volatile int16_t x227 = INT16_MAX;
	volatile uint64_t t31 = 13787LLU;

	t31 = (x225+((x226+x227)*x228));

	if (t31 != 9296568282339521LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x229 = 140710943U;
	int8_t x230 = -8;
	int32_t x232 = -1;
	static volatile uint32_t t32 = 1807521848U;

	t32 = (x229+((x230+x231)*x232));

	if (t32 != 140710952U) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x233 = -1;
	int16_t x234 = INT16_MIN;
	uint64_t x235 = 304030235571326072LLU;
	static int64_t x236 = INT64_MIN;
	static uint64_t t33 = UINT64_MAX;

	t33 = (x233+((x234+x235)*x236));

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x237 = -75;
	int32_t x238 = -1;
	volatile int16_t x239 = -10317;
	volatile int32_t t34 = 3;

	t34 = (x237+((x238+x239)*x240));

	if (t34 != -1310461) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x241 = 23504848869606839LL;
	int8_t x242 = 56;
	int64_t t35 = -762139525579292LL;

	t35 = (x241+((x242+x243)*x244));

	if (t35 != 23504848869774576LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x249 = -1;
	uint8_t x251 = 0U;
	uint32_t x252 = 474559613U;
	uint64_t t36 = 177618302379744037LLU;

	t36 = (x249+((x250+x251)*x252));

	if (t36 != 4645694018959335076LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x253 = UINT16_MAX;
	volatile uint8_t x254 = 1U;
	int16_t x255 = -1;
	static volatile int16_t x256 = -1;
	volatile int32_t t37 = 87;

	t37 = (x253+((x254+x255)*x256));

	if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x257 = 89U;
	volatile int16_t x258 = INT16_MIN;
	int8_t x259 = INT8_MAX;
	uint64_t x260 = 426028288LLU;
	uint64_t t38 = 14LLU;

	t38 = (x257+((x258+x259)*x260));

	if (t38 != 18446730167720203097LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x265 = 7;
	volatile uint8_t x266 = 10U;
	static volatile int8_t x268 = INT8_MAX;
	int32_t t39 = 1010;

	t39 = (x265+((x266+x267)*x268));

	if (t39 != 17406) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x269 = 1655U;
	int64_t x271 = -122744LL;
	int64_t x272 = -91LL;
	static int64_t t40 = 20050360128368083LL;

	t40 = (x269+((x270+x271)*x272));

	if (t40 != 10739837LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x277 = UINT32_MAX;
	int16_t x280 = -9;
	volatile uint32_t t41 = 613347187U;

	t41 = (x277+((x278+x279)*x280));

	if (t41 != 4293787665U) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x281 = INT8_MIN;
	uint64_t x283 = UINT64_MAX;
	static int64_t x284 = INT64_MIN;
	uint64_t t42 = 23851737LLU;

	t42 = (x281+((x282+x283)*x284));

	if (t42 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x286 = -1;
	int8_t x287 = INT8_MAX;
	static uint64_t x288 = UINT64_MAX;
	uint64_t t43 = 96075LLU;

	t43 = (x285+((x286+x287)*x288));

	if (t43 != 5453LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x293 = UINT64_MAX;
	static int8_t x294 = INT8_MIN;
	int8_t x295 = 0;
	static volatile uint64_t t44 = UINT64_MAX;

	t44 = (x293+((x294+x295)*x296));

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x297 = -1;
	uint8_t x298 = 1U;
	uint8_t x300 = UINT8_MAX;
	static uint32_t t45 = 50808U;

	t45 = (x297+((x298+x299)*x300));

	if (t45 != 344759U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x301 = -1;
	uint8_t x302 = 48U;
	uint32_t x303 = 1777958459U;
	int16_t x304 = INT16_MIN;
	volatile uint32_t t46 = 7449U;

	t46 = (x301+((x302+x303)*x304));

	if (t46 != 1087012863U) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x305 = INT8_MIN;
	static uint16_t x306 = 4398U;
	static int16_t x308 = -1;
	int32_t t47 = 4;

	t47 = (x305+((x306+x307)*x308));

	if (t47 != 28242) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x309 = INT64_MIN;
	int8_t x310 = INT8_MIN;
	uint32_t x312 = UINT32_MAX;
	int64_t t48 = 23831488LL;

	t48 = (x309+((x310+x311)*x312));

	if (t48 != -9223372036854775552LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x316 = INT8_MIN;
	uint64_t t49 = 3LLU;

	t49 = (x313+((x314+x315)*x316));

	if (t49 != 18446744073697762368LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x318 = 41U;
	uint16_t x320 = 179U;
	static uint32_t t50 = 0U;

	t50 = (x317+((x318+x319)*x320));

	if (t50 != 4294941688U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x322 = 1;
	static int16_t x323 = -1;
	int8_t x324 = INT8_MIN;
	volatile int32_t t51 = 56438;

	t51 = (x321+((x322+x323)*x324));

	if (t51 != -128) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x330 = 36U;
	int16_t x332 = INT16_MIN;
	volatile uint32_t t52 = 1U;

	t52 = (x329+((x330+x331)*x332));

	if (t52 != 4291848008U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x341 = -1890;
	uint64_t x342 = 44048215LLU;
	static int8_t x343 = -1;
	int32_t x344 = INT32_MIN;
	volatile uint64_t t53 = 452762152798LLU;

	t53 = (x341+((x342+x343)*x344));

	if (t53 != 18352151254420945054LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x345 = INT8_MAX;
	static int32_t x346 = INT32_MAX;
	int32_t x347 = -9811980;
	uint8_t x348 = 0U;
	volatile int32_t t54 = 14466;

	t54 = (x345+((x346+x347)*x348));

	if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x349 = INT16_MIN;
	uint64_t x350 = UINT64_MAX;
	int32_t x351 = -1466;
	int16_t x352 = INT16_MIN;
	uint64_t t55 = 123LLU;

	t55 = (x349+((x350+x351)*x352));

	if (t55 != 48037888LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x353 = -1;
	int16_t x354 = -1;
	uint64_t x356 = 182495674456539LLU;
	static volatile uint64_t t56 = 8570526901963386LLU;

	t56 = (x353+((x354+x355)*x356));

	if (t56 != 18446379082360638537LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x357 = -1;
	int8_t x360 = INT8_MIN;
	int64_t t57 = 1127726LL;

	t57 = (x357+((x358+x359)*x360));

	if (t57 != 18604397254958847LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x365 = 204227LLU;
	int8_t x366 = INT8_MIN;
	volatile uint64_t x367 = 778497669509307LLU;
	int8_t x368 = 3;

	t58 = (x365+((x366+x367)*x368));

	if (t58 != 2335493008731764LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x369 = INT8_MAX;
	int16_t x370 = INT16_MIN;
	int32_t x371 = 888519344;
	volatile int64_t x372 = -2LL;
	volatile int64_t t59 = 376294029641649LL;

	t59 = (x369+((x370+x371)*x372));

	if (t59 != -1776973025LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x374 = UINT16_MAX;
	uint16_t x375 = UINT16_MAX;
	volatile int64_t t60 = 11002518586LL;

	t60 = (x373+((x374+x375)*x376));

	if (t60 != -3730779613229136418LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x385 = 25U;
	static int8_t x386 = -1;
	uint8_t x387 = 6U;
	int8_t x388 = INT8_MAX;
	volatile int32_t t61 = 3795;

	t61 = (x385+((x386+x387)*x388));

	if (t61 != 660) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x389 = INT16_MIN;
	int16_t x392 = -1;

	t62 = (x389+((x390+x391)*x392));

	if (t62 != 211759174) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x393 = 4U;
	int32_t x394 = 40;
	uint64_t x396 = UINT64_MAX;
	static volatile uint64_t t63 = 22700990291LLU;

	t63 = (x393+((x394+x395)*x396));

	if (t63 != 18446744073709551581LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x398 = 448867697929LLU;
	int64_t x399 = INT64_MIN;
	volatile uint64_t t64 = 8739068830736LLU;

	t64 = (x397+((x398+x399)*x400));

	if (t64 != 9410698721200863991LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x401 = INT64_MIN;
	static volatile int32_t x403 = 462260057;
	uint32_t x404 = UINT32_MAX;
	static volatile int64_t t65 = 5620359069LL;

	t65 = (x401+((x402+x403)*x404));

	if (t65 != -9223372033022068530LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint32_t x405 = 52U;
	volatile int16_t x406 = INT16_MAX;
	int8_t x408 = INT8_MIN;
	uint32_t t66 = 727720U;

	t66 = (x405+((x406+x407)*x408));

	if (t66 != 4290773300U) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x409 = INT16_MIN;
	uint8_t x410 = 2U;
	int32_t x411 = -1;
	int16_t x412 = 0;

	t67 = (x409+((x410+x411)*x412));

	if (t67 != -32768) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x414 = -1692;
	uint8_t x415 = 103U;
	uint64_t x416 = 57LLU;
	volatile uint64_t t68 = 249655186583LLU;

	t68 = (x413+((x414+x415)*x416));

	if (t68 != 18446744073709461298LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x421 = INT16_MIN;
	int16_t x422 = INT16_MIN;
	volatile int16_t x423 = INT16_MAX;
	static int64_t x424 = -335152480082LL;
	static int64_t t69 = -4135449LL;

	t69 = (x421+((x422+x423)*x424));

	if (t69 != 335152447314LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x425 = UINT16_MAX;
	int16_t x426 = INT16_MIN;
	int16_t x427 = INT16_MAX;
	volatile uint32_t x428 = 8U;

	t70 = (x425+((x426+x427)*x428));

	if (t70 != 65527U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x430 = -1;
	int64_t x431 = -1LL;
	int16_t x432 = INT16_MIN;
	static volatile int64_t t71 = -102913448502466LL;

	t71 = (x429+((x430+x431)*x432));

	if (t71 != 65791LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x437 = 960418052321756217LLU;
	static uint32_t x438 = 1263825U;
	int8_t x440 = INT8_MIN;

	t72 = (x437+((x438+x439)*x440));

	if (t72 != 960418056454955065LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x449 = 5993437909LLU;
	int16_t x450 = INT16_MIN;
	static int16_t x451 = INT16_MIN;
	uint16_t x452 = 11U;
	uint64_t t73 = 1946LLU;

	t73 = (x449+((x450+x451)*x452));

	if (t73 != 5992717013LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x461 = INT64_MAX;
	static volatile uint8_t x464 = 6U;
	volatile int64_t t74 = -82471298LL;

	t74 = (x461+((x462+x463)*x464));

	if (t74 != 9223372036854762289LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x466 = UINT32_MAX;
	uint64_t x467 = 45265959LLU;
	int8_t x468 = INT8_MAX;
	volatile uint64_t t75 = 13LLU;

	t75 = (x465+((x466+x467)*x468));

	if (t75 != 551209623385LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x469 = -1;
	static uint8_t x470 = UINT8_MAX;
	uint32_t x471 = UINT32_MAX;
	uint16_t x472 = 3U;
	static volatile uint32_t t76 = 3969U;

	t76 = (x469+((x470+x471)*x472));

	if (t76 != 761U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x473 = INT32_MAX;
	int32_t x474 = -1;
	uint64_t x475 = 27955LLU;
	uint64_t x476 = UINT64_MAX;
	volatile uint64_t t77 = 13238609LLU;

	t77 = (x473+((x474+x475)*x476));

	if (t77 != 2147455693LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x482 = UINT32_MAX;
	static int8_t x483 = INT8_MAX;
	volatile uint16_t x484 = 106U;
	uint32_t t78 = 12U;

	t78 = (x481+((x482+x483)*x484));

	if (t78 != 14127U) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x485 = UINT8_MAX;
	int32_t x486 = 16591081;
	int32_t x487 = INT32_MIN;
	uint64_t x488 = 60601773LLU;

	t79 = (x485+((x486+x487)*x488));

	if (t79 != 18317608206076830580LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x497 = 1;
	static volatile uint16_t x498 = 241U;
	uint8_t x499 = UINT8_MAX;
	volatile int8_t x500 = 13;
	static int32_t t80 = -23536;

	t80 = (x497+((x498+x499)*x500));

	if (t80 != 6449) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x501 = -5619657076611LL;
	int32_t x504 = INT32_MIN;

	t81 = (x501+((x502+x503)*x504));

	if (t81 != -5617509592963LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x505 = 15U;
	uint64_t x506 = 2309785767LLU;
	static int16_t x507 = INT16_MIN;
	int8_t x508 = INT8_MIN;
	uint64_t t82 = 141908256780LLU;

	t82 = (x505+((x506+x507)*x508));

	if (t82 != 18446743778061167759LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x509 = INT8_MIN;
	static int16_t x510 = 81;
	uint8_t x511 = 16U;
	int16_t x512 = INT16_MIN;
	static int32_t t83 = 90664006;

	t83 = (x509+((x510+x511)*x512));

	if (t83 != -3178624) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x513 = -1;
	volatile uint32_t x514 = UINT32_MAX;
	uint16_t x515 = 18644U;
	int8_t x516 = 1;
	volatile uint32_t t84 = 457U;

	t84 = (x513+((x514+x515)*x516));

	if (t84 != 18642U) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x526 = 3853000LLU;
	int32_t x527 = INT32_MAX;
	int64_t x528 = 16159859LL;
	volatile uint64_t t85 = 267332776941668LLU;

	t85 = (x525+((x526+x527)*x528));

	if (t85 != 34765296877117716LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x529 = -1;
	int32_t x530 = INT32_MAX;
	uint64_t x531 = UINT64_MAX;
	volatile uint16_t x532 = 1018U;
	uint64_t t86 = 7607104138494240LLU;

	t86 = (x529+((x530+x531)*x532));

	if (t86 != 2186138351627LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x534 = INT8_MIN;
	volatile int8_t x536 = -15;
	volatile uint64_t t87 = 420080039LLU;

	t87 = (x533+((x534+x535)*x536));

	if (t87 != 18446743752445262760LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x537 = UINT32_MAX;
	static volatile uint64_t x538 = 49291518121812839LLU;
	int16_t x539 = 6232;
	int64_t x540 = INT64_MIN;
	volatile uint64_t t88 = 333696533607420078LLU;

	t88 = (x537+((x538+x539)*x540));

	if (t88 != 9223372041149743103LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x541 = -1;
	volatile int16_t x543 = -1;
	int16_t x544 = INT16_MAX;
	int32_t t89 = 56;

	t89 = (x541+((x542+x543)*x544));

	if (t89 != 244671188) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x545 = 51U;
	volatile int64_t x547 = 15LL;
	int64_t t90 = 7LL;

	t90 = (x545+((x546+x547)*x548));

	if (t90 != 36LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x553 = INT32_MAX;
	volatile int16_t x554 = INT16_MIN;
	uint64_t x556 = 32028438LLU;
	volatile uint64_t t91 = 948601225713LLU;

	t91 = (x553+((x554+x555)*x556));

	if (t91 != 18446742967737137339LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x557 = 16801U;
	uint32_t x558 = 3U;
	volatile uint16_t x560 = UINT16_MAX;
	uint32_t t92 = 1879U;

	t92 = (x557+((x558+x559)*x560));

	if (t92 != 672151U) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x565 = -1LL;
	int8_t x566 = 0;
	uint64_t x567 = UINT64_MAX;
	int8_t x568 = INT8_MIN;

	t93 = (x565+((x566+x567)*x568));

	if (t93 != 127LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x569 = -26;
	uint64_t x570 = 284553060892458026LLU;
	volatile uint8_t x571 = 37U;
	static uint16_t x572 = UINT16_MAX;

	t94 = (x569+((x570+x571)*x572));

	if (t94 != 16973331140592026519LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x573 = INT8_MIN;
	static volatile uint64_t x574 = 891808LLU;
	static uint64_t t95 = 2383087861199274982LLU;

	t95 = (x573+((x574+x575)*x576));

	if (t95 != 18444828836123115392LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x577 = UINT64_MAX;
	uint64_t x578 = UINT64_MAX;
	int16_t x579 = 2414;
	int32_t x580 = INT32_MIN;
	volatile uint64_t t96 = 162484LLU;

	t96 = (x577+((x578+x579)*x580));

	if (t96 != 18446738891831508991LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x581 = -1;
	int64_t x582 = -20305433217LL;
	static int16_t x584 = -2;
	volatile int64_t t97 = -69248348710320718LL;

	t97 = (x581+((x582+x583)*x584));

	if (t97 != 40610866413LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x586 = 2929475884501076384LLU;
	int8_t x587 = 0;
	volatile int32_t x588 = INT32_MAX;
	uint64_t t98 = 1047173222LLU;

	t98 = (x585+((x586+x587)*x588));

	if (t98 != 13274832709898565215LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x593 = 2U;
	static volatile uint8_t x594 = 1U;
	static volatile int64_t x596 = 599LL;
	volatile int64_t t99 = 21267620LL;

	t99 = (x593+((x594+x595)*x596));

	if (t99 != 2LL) { NG(); } else { ; }
	
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

