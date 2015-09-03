#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x5 = INT32_MIN;
int32_t x7 = 77688;
volatile int32_t t0 = -1;
uint32_t x12 = 492U;
static uint8_t x14 = 57U;
int8_t x16 = INT8_MAX;
int32_t x23 = -1;
int8_t x31 = INT8_MIN;
int16_t x32 = INT16_MIN;
int16_t x50 = INT16_MIN;
int16_t x65 = INT16_MIN;
uint16_t x69 = UINT16_MAX;
static uint32_t x94 = 1133329484U;
int64_t x102 = 94399LL;
int8_t x111 = INT8_MIN;
volatile int32_t x118 = -24894433;
volatile uint32_t t14 = 6004U;
uint64_t x135 = 9508121LLU;
int8_t x136 = 8;
uint32_t x153 = 12U;
int8_t x155 = 1;
uint8_t x156 = UINT8_MAX;
static uint16_t x157 = UINT16_MAX;
int8_t x163 = -3;
static uint32_t x178 = UINT32_MAX;
volatile int8_t x181 = INT8_MIN;
int16_t x216 = INT16_MIN;
volatile uint16_t x232 = UINT16_MAX;
uint32_t x253 = 60056U;
int16_t x254 = INT16_MIN;
static int64_t x271 = -33787618217661LL;
int32_t x273 = -1;
volatile int8_t x278 = -6;
volatile int64_t x299 = INT64_MAX;
static int32_t t39 = -2890802;
static int8_t x355 = INT8_MIN;
int8_t x390 = INT8_MIN;
volatile int8_t x391 = INT8_MAX;
int32_t x392 = INT32_MAX;
int64_t t43 = 22242340763699LL;
int32_t x409 = INT32_MIN;
int32_t x421 = -77;
int8_t x423 = INT8_MAX;
int16_t x424 = 10;
volatile uint32_t x430 = UINT32_MAX;
static uint8_t x435 = UINT8_MAX;
static volatile int32_t t48 = -3110940;
volatile uint8_t x451 = 29U;
int32_t x457 = INT32_MIN;
int8_t x458 = -46;
volatile int32_t t51 = -13;
volatile int16_t x474 = INT16_MIN;
int8_t x485 = INT8_MIN;
int8_t x511 = INT8_MAX;
volatile uint32_t t57 = 6780U;
volatile int64_t t58 = 171935549LL;
int64_t x520 = 3505597238100LL;
int64_t x529 = 768875089786497532LL;
int64_t t62 = 48033LL;
uint64_t x554 = 1738690601457LLU;
volatile int16_t x564 = 6;
uint8_t x571 = UINT8_MAX;
uint64_t x593 = 56676LLU;
int8_t x594 = INT8_MIN;
int8_t x614 = INT8_MIN;
static volatile uint32_t t76 = 3534U;
volatile int8_t x629 = -1;
volatile int64_t x648 = 1272055452180080270LL;
int32_t x653 = INT32_MAX;
volatile int32_t x661 = INT32_MAX;
static uint64_t x675 = UINT64_MAX;
uint64_t x709 = 392503145LLU;
volatile uint8_t x711 = 126U;
static uint16_t x712 = UINT16_MAX;
int32_t x713 = INT32_MIN;
volatile int32_t t87 = 52;
uint64_t x721 = 47994395598LLU;
static int64_t x722 = 38422184369LL;
uint64_t x724 = 22109092033020LLU;
int16_t x730 = INT16_MIN;
int16_t x731 = INT16_MAX;
static uint16_t x732 = 4U;
static uint16_t x744 = UINT16_MAX;
volatile int32_t t92 = -314563768;
volatile uint32_t x748 = UINT32_MAX;
static int64_t x751 = INT64_MAX;
static uint8_t x752 = UINT8_MAX;
static int16_t x765 = -1;
int64_t x771 = -1LL;
uint64_t t97 = 59LLU;
volatile uint8_t x773 = UINT8_MAX;
static volatile int64_t t98 = -12984651058519LL;
int8_t x779 = INT8_MIN;


void f0(void) {
	int8_t x6 = INT8_MIN;
	static int8_t x8 = INT8_MIN;

	t0 = (x5%(x6/(x7%x8)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x9 = INT16_MAX;
	int32_t x10 = INT32_MAX;
	static int32_t x11 = INT32_MAX;
	volatile uint32_t t1 = 151U;

	t1 = (x9%(x10/(x11%x12)));

	if (t1 != 32767U) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x13 = 7U;
	static int16_t x15 = -1;
	volatile int32_t t2 = 171780275;

	t2 = (x13%(x14/(x15%x16)));

	if (t2 != 7) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x21 = -1175;
	static uint16_t x22 = UINT16_MAX;
	volatile int64_t x24 = INT64_MIN;
	volatile int64_t t3 = 335297146LL;

	t3 = (x21%(x22/(x23%x24)));

	if (t3 != -1175LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x29 = 148188U;
	static volatile uint32_t x30 = UINT32_MAX;
	uint32_t t4 = 199624021U;

	t4 = (x29%(x30/(x31%x32)));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x49 = 3873;
	volatile int32_t x51 = -1;
	uint32_t x52 = 743580U;
	volatile uint32_t t5 = 2050950769U;

	t5 = (x49%(x50/(x51%x52)));

	if (t5 != 3873U) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x61 = 244;
	static int64_t x62 = INT64_MIN;
	int32_t x63 = 12967;
	volatile int64_t x64 = 949362184628695321LL;
	static volatile int64_t t6 = 69LL;

	t6 = (x61%(x62/(x63%x64)));

	if (t6 != 244LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x66 = INT16_MAX;
	int32_t x67 = -1;
	int16_t x68 = INT16_MIN;
	static volatile int32_t t7 = 24846;

	t7 = (x65%(x66/(x67%x68)));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x70 = 45165792327978LLU;
	int16_t x71 = INT16_MAX;
	int32_t x72 = INT32_MAX;
	volatile uint64_t t8 = 27211313918958476LLU;

	t8 = (x69%(x70/(x71%x72)));

	if (t8 != 65535LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x85 = INT64_MIN;
	int16_t x86 = INT16_MIN;
	static uint8_t x87 = 2U;
	uint16_t x88 = 459U;
	int64_t t9 = -4LL;

	t9 = (x85%(x86/(x87%x88)));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x89 = INT16_MAX;
	int32_t x90 = INT32_MIN;
	volatile int32_t x91 = INT32_MIN;
	static int16_t x92 = INT16_MAX;
	volatile int32_t t10 = -2260086;

	t10 = (x89%(x90/(x91%x92)));

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x93 = 3016723053LL;
	static int32_t x95 = -1;
	uint32_t x96 = 957500U;
	volatile int64_t t11 = -499LL;

	t11 = (x93%(x94/(x95%x96)));

	if (t11 != 1073LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x101 = -1;
	int32_t x103 = 1;
	int8_t x104 = 32;
	int64_t t12 = -51671870879710573LL;

	t12 = (x101%(x102/(x103%x104)));

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x109 = INT16_MIN;
	uint64_t x110 = UINT64_MAX;
	uint16_t x112 = 6U;
	uint64_t t13 = 19565827LLU;

	t13 = (x109%(x110/(x111%x112)));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x117 = 540648780U;
	volatile uint16_t x119 = UINT16_MAX;
	static volatile int8_t x120 = INT8_MIN;

	t14 = (x117%(x118/(x119%x120)));

	if (t14 != 540648780U) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x121 = -1;
	static uint16_t x122 = 50U;
	uint32_t x123 = 966553198U;
	uint8_t x124 = 54U;
	volatile uint32_t t15 = 25U;

	t15 = (x121%(x122/(x123%x124)));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x133 = 1099;
	static volatile uint64_t x134 = 174253309759LLU;
	volatile uint64_t t16 = 5159922876751LLU;

	t16 = (x133%(x134/(x135%x136)));

	if (t16 != 1099LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x141 = 28U;
	static volatile int32_t x142 = INT32_MIN;
	static uint64_t x143 = 956755665552885557LLU;
	int32_t x144 = INT32_MIN;
	uint64_t t17 = 1328066LLU;

	t17 = (x141%(x142/(x143%x144)));

	if (t17 != 9LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x145 = UINT64_MAX;
	int8_t x146 = INT8_MAX;
	int64_t x147 = 28854136875LL;
	uint32_t x148 = 48U;
	uint64_t t18 = 644LLU;

	t18 = (x145%(x146/(x147%x148)));

	if (t18 != 3LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x154 = INT16_MAX;
	uint32_t t19 = 185531100U;

	t19 = (x153%(x154/(x155%x156)));

	if (t19 != 12U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x158 = INT32_MAX;
	int16_t x159 = -51;
	uint32_t x160 = 75604U;
	uint32_t t20 = 276826U;

	t20 = (x157%(x158/(x159%x160)));

	if (t20 != 26641U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x161 = -1LL;
	int32_t x162 = -1342560;
	volatile int32_t x164 = -4;
	int64_t t21 = 228994664186754166LL;

	t21 = (x161%(x162/(x163%x164)));

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x165 = 3756;
	int16_t x166 = -1;
	int64_t x167 = INT64_MIN;
	int8_t x168 = INT8_MAX;
	static int64_t t22 = 9915LL;

	t22 = (x165%(x166/(x167%x168)));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x177 = INT32_MAX;
	volatile int8_t x179 = -1;
	int32_t x180 = -6433;
	volatile uint32_t t23 = 261U;

	t23 = (x177%(x178/(x179%x180)));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x182 = 1607315;
	uint32_t x183 = 28784U;
	uint8_t x184 = 6U;
	uint32_t t24 = 182633U;

	t24 = (x181%(x182/(x183%x184)));

	if (t24 != 224160U) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x193 = INT16_MIN;
	volatile uint64_t x194 = UINT64_MAX;
	int8_t x195 = -20;
	uint64_t x196 = 5884LLU;
	uint64_t t25 = 62LLU;

	t25 = (x193%(x194/(x195%x196)));

	if (t25 != 17080318586735711LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x205 = -1LL;
	int32_t x206 = INT32_MIN;
	int32_t x207 = INT32_MIN;
	int64_t x208 = 10LL;
	volatile int64_t t26 = 22486200163LL;

	t26 = (x205%(x206/(x207%x208)));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x209 = -1;
	volatile uint16_t x210 = 4844U;
	int64_t x211 = 25LL;
	uint16_t x212 = UINT16_MAX;
	int64_t t27 = -44680LL;

	t27 = (x209%(x210/(x211%x212)));

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x213 = INT8_MIN;
	uint32_t x214 = UINT32_MAX;
	int64_t x215 = -1LL;
	volatile int64_t t28 = -1583313LL;

	t28 = (x213%(x214/(x215%x216)));

	if (t28 != -128LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x229 = INT8_MIN;
	int64_t x230 = INT64_MIN;
	static volatile int16_t x231 = INT16_MIN;
	volatile int64_t t29 = -3621LL;

	t29 = (x229%(x230/(x231%x232)));

	if (t29 != -128LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x241 = 0;
	int8_t x242 = 13;
	int8_t x243 = -1;
	uint8_t x244 = UINT8_MAX;
	static int32_t t30 = -2;

	t30 = (x241%(x242/(x243%x244)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x249 = 27U;
	int16_t x250 = -1;
	volatile int32_t x251 = INT32_MIN;
	int32_t x252 = INT32_MAX;
	volatile int32_t t31 = -679551;

	t31 = (x249%(x250/(x251%x252)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x255 = INT8_MAX;
	static volatile uint32_t x256 = UINT32_MAX;
	uint32_t t32 = 2U;

	t32 = (x253%(x254/(x255%x256)));

	if (t32 != 60056U) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x265 = UINT64_MAX;
	int64_t x266 = -1446742361LL;
	uint32_t x267 = UINT32_MAX;
	uint16_t x268 = 4808U;
	static volatile uint64_t t33 = 45315732597356046LLU;

	t33 = (x265%(x266/(x267%x268)));

	if (t33 != 11391671LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x269 = -1;
	volatile int16_t x270 = 648;
	int8_t x272 = INT8_MIN;
	int64_t t34 = 32906LL;

	t34 = (x269%(x270/(x271%x272)));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int32_t x274 = INT32_MIN;
	int32_t x275 = 123;
	uint32_t x276 = 64329151U;
	volatile uint32_t t35 = 669U;

	t35 = (x273%(x274/(x275%x276)));

	if (t35 != 159U) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x277 = 29056U;
	volatile int8_t x279 = -1;
	int8_t x280 = INT8_MIN;
	uint32_t t36 = 38847U;

	t36 = (x277%(x278/(x279%x280)));

	if (t36 != 4U) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x297 = 1U;
	int16_t x298 = INT16_MIN;
	uint16_t x300 = 340U;
	int64_t t37 = 13279636LL;

	t37 = (x297%(x298/(x299%x300)));

	if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x317 = INT64_MIN;
	int16_t x318 = INT16_MAX;
	int8_t x319 = -8;
	static int32_t x320 = 42231851;
	volatile int64_t t38 = 49882366555LL;

	t38 = (x317%(x318/(x319%x320)));

	if (t38 != -8LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x321 = INT32_MIN;
	uint8_t x322 = UINT8_MAX;
	volatile uint16_t x323 = 17U;
	int16_t x324 = 1244;

	t39 = (x321%(x322/(x323%x324)));

	if (t39 != -8) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x337 = 5783744U;
	static int64_t x338 = INT64_MAX;
	int32_t x339 = 5662;
	int8_t x340 = INT8_MAX;
	int64_t t40 = 5374LL;

	t40 = (x337%(x338/(x339%x340)));

	if (t40 != 5783744LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x353 = INT16_MIN;
	int16_t x354 = INT16_MIN;
	uint64_t x356 = 81116572231470LLU;
	static uint64_t t41 = 628384662LLU;

	t41 = (x353%(x354/(x355%x356)));

	if (t41 != 342968LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x389 = 1133075323170873996LL;
	static volatile int64_t t42 = 107328875475109LL;

	t42 = (x389%(x390/(x391%x392)));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x405 = INT32_MAX;
	static int32_t x406 = INT32_MIN;
	int64_t x407 = INT64_MAX;
	volatile int16_t x408 = INT16_MIN;

	t43 = (x405%(x406/(x407%x408)));

	if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x410 = 1832U;
	static int32_t x411 = 55;
	uint16_t x412 = 6U;
	int32_t t44 = 19890548;

	t44 = (x409%(x410/(x411%x412)));

	if (t44 != -424) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x422 = INT8_MIN;
	int32_t t45 = 95288;

	t45 = (x421%(x422/(x423%x424)));

	if (t45 != -5) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x425 = INT32_MAX;
	int64_t x426 = INT64_MIN;
	int64_t x427 = INT64_MAX;
	static int16_t x428 = -6213;
	int64_t t46 = 52984959037867LL;

	t46 = (x425%(x426/(x427%x428)));

	if (t46 != 2147483647LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x429 = 129U;
	uint32_t x431 = 6U;
	uint16_t x432 = 10817U;
	volatile uint32_t t47 = 1744140737U;

	t47 = (x429%(x430/(x431%x432)));

	if (t47 != 129U) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x433 = INT32_MIN;
	uint8_t x434 = UINT8_MAX;
	int32_t x436 = -17665056;

	t48 = (x433%(x434/(x435%x436)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x449 = INT16_MAX;
	static volatile int64_t x450 = 5698837184825012LL;
	int32_t x452 = INT32_MIN;
	volatile int64_t t49 = -769310LL;

	t49 = (x449%(x450/(x451%x452)));

	if (t49 != 32767LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x453 = -1LL;
	volatile int32_t x454 = INT32_MAX;
	int64_t x455 = INT64_MIN;
	volatile int8_t x456 = INT8_MAX;
	volatile int64_t t50 = -1151671058418LL;

	t50 = (x453%(x454/(x455%x456)));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x459 = -1;
	int8_t x460 = INT8_MAX;

	t51 = (x457%(x458/(x459%x460)));

	if (t51 != -6) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x469 = -197959600;
	uint64_t x470 = 370LLU;
	volatile int64_t x471 = INT64_MAX;
	static int8_t x472 = 21;
	uint64_t t52 = 257448238LLU;

	t52 = (x469%(x470/(x471%x472)));

	if (t52 != 48LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x473 = 10U;
	int16_t x475 = -1;
	int16_t x476 = INT16_MIN;
	int32_t t53 = 148494;

	t53 = (x473%(x474/(x475%x476)));

	if (t53 != 10) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x486 = 79121LLU;
	int8_t x487 = 3;
	uint8_t x488 = UINT8_MAX;
	uint64_t t54 = 25921946LLU;

	t54 = (x485%(x486/(x487%x488)));

	if (t54 != 2060LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x493 = -1;
	int8_t x494 = INT8_MIN;
	int64_t x495 = INT64_MIN;
	uint64_t x496 = 9899515LLU;
	volatile uint64_t t55 = 1008823911819684569LLU;

	t55 = (x493%(x494/(x495%x496)));

	if (t55 != 889710LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x497 = 47200762U;
	int16_t x498 = INT16_MIN;
	int16_t x499 = INT16_MAX;
	volatile int64_t x500 = INT64_MAX;
	static volatile int64_t t56 = -4423LL;

	t56 = (x497%(x498/(x499%x500)));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x509 = 1U;
	int8_t x510 = INT8_MAX;
	volatile uint32_t x512 = 4122128U;

	t57 = (x509%(x510/(x511%x512)));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x513 = INT8_MAX;
	static int16_t x514 = 1398;
	static volatile int64_t x515 = -61788859LL;
	int8_t x516 = INT8_MAX;

	t58 = (x513%(x514/(x515%x516)));

	if (t58 != 7LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x517 = INT16_MAX;
	uint16_t x518 = 6774U;
	int64_t x519 = 6LL;
	static int64_t t59 = 1LL;

	t59 = (x517%(x518/(x519%x520)));

	if (t59 != 26LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x521 = INT32_MIN;
	uint32_t x522 = UINT32_MAX;
	uint32_t x523 = 126471929U;
	int8_t x524 = INT8_MAX;
	volatile uint32_t t60 = 60628U;

	t60 = (x521%(x522/(x523%x524)));

	if (t60 != 59U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x525 = INT16_MIN;
	volatile int8_t x526 = -1;
	int16_t x527 = INT16_MIN;
	uint64_t x528 = 688068LLU;
	uint64_t t61 = 142440561079LLU;

	t61 = (x525%(x526/(x527%x528)));

	if (t61 != 26816LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x530 = INT8_MAX;
	static int32_t x531 = INT32_MIN;
	int8_t x532 = INT8_MAX;

	t62 = (x529%(x530/(x531%x532)));

	if (t62 != 7LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x533 = 7U;
	static uint32_t x534 = 8947U;
	volatile int64_t x535 = -1LL;
	int8_t x536 = INT8_MIN;
	static int64_t t63 = 48218919116LL;

	t63 = (x533%(x534/(x535%x536)));

	if (t63 != 7LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x541 = UINT8_MAX;
	int8_t x542 = -5;
	volatile int32_t x543 = INT32_MIN;
	uint64_t x544 = 12850757728675762LLU;
	uint64_t t64 = 598547949056606467LLU;

	t64 = (x541%(x542/(x543%x544)));

	if (t64 != 255LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x545 = 1;
	int32_t x546 = 58458928;
	volatile int64_t x547 = -1897348407631906508LL;
	uint8_t x548 = 103U;
	int64_t t65 = -110063LL;

	t65 = (x545%(x546/(x547%x548)));

	if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x549 = INT64_MIN;
	int64_t x550 = INT64_MIN;
	int16_t x551 = INT16_MIN;
	uint8_t x552 = UINT8_MAX;
	volatile int64_t t66 = 121883332959205508LL;

	t66 = (x549%(x550/(x551%x552)));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x553 = INT16_MAX;
	uint8_t x555 = 3U;
	uint64_t x556 = UINT64_MAX;
	static uint64_t t67 = 182916343769LLU;

	t67 = (x553%(x554/(x555%x556)));

	if (t67 != 32767LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x561 = 40U;
	static volatile int8_t x562 = 44;
	static int16_t x563 = -22;
	volatile int32_t t68 = 1;

	t68 = (x561%(x562/(x563%x564)));

	if (t68 != 7) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x569 = UINT8_MAX;
	static int16_t x570 = INT16_MIN;
	int32_t x572 = -70775;
	volatile int32_t t69 = -188786269;

	t69 = (x569%(x570/(x571%x572)));

	if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x577 = INT64_MIN;
	int16_t x578 = INT16_MAX;
	static int32_t x579 = 1007;
	volatile uint64_t x580 = 14744795812LLU;
	uint64_t t70 = 3LLU;

	t70 = (x577%(x578/(x579%x580)));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x595 = INT16_MAX;
	int8_t x596 = INT8_MIN;
	uint64_t t71 = 0LLU;

	t71 = (x593%(x594/(x595%x596)));

	if (t71 != 56676LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x597 = UINT8_MAX;
	volatile int64_t x598 = INT64_MIN;
	uint32_t x599 = 1U;
	uint32_t x600 = 18332144U;
	static volatile int64_t t72 = -3513LL;

	t72 = (x597%(x598/(x599%x600)));

	if (t72 != 255LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x601 = -12303309;
	uint64_t x602 = UINT64_MAX;
	volatile int64_t x603 = INT64_MIN;
	static int64_t x604 = INT64_MAX;
	uint64_t t73 = 2644LLU;

	t73 = (x601%(x602/(x603%x604)));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x605 = 31737U;
	int8_t x606 = INT8_MIN;
	uint64_t x607 = UINT64_MAX;
	volatile int8_t x608 = 22;
	uint64_t t74 = 1209972459948180771LLU;

	t74 = (x605%(x606/(x607%x608)));

	if (t74 != 31737LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x613 = INT16_MIN;
	static int32_t x615 = INT32_MIN;
	uint32_t x616 = UINT32_MAX;
	volatile uint32_t t75 = 1005702U;

	t75 = (x613%(x614/(x615%x616)));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x621 = 1693201U;
	int32_t x622 = INT32_MIN;
	volatile uint16_t x623 = 13U;
	volatile int32_t x624 = INT32_MIN;

	t76 = (x621%(x622/(x623%x624)));

	if (t76 != 1693201U) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x630 = UINT64_MAX;
	uint16_t x631 = UINT16_MAX;
	int64_t x632 = INT64_MIN;
	static volatile uint64_t t77 = 55LLU;

	t77 = (x629%(x630/(x631%x632)));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x641 = INT8_MIN;
	int32_t x642 = -748722492;
	int32_t x643 = -1;
	volatile int8_t x644 = INT8_MIN;
	volatile int32_t t78 = -15544481;

	t78 = (x641%(x642/(x643%x644)));

	if (t78 != -128) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x645 = 166925;
	uint64_t x646 = UINT64_MAX;
	uint8_t x647 = UINT8_MAX;
	static uint64_t t79 = 4119LLU;

	t79 = (x645%(x646/(x647%x648)));

	if (t79 != 166925LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x654 = INT16_MIN;
	volatile int32_t x655 = INT32_MIN;
	uint64_t x656 = 26787683162LLU;
	volatile uint64_t t80 = 79384LLU;

	t80 = (x653%(x654/(x655%x656)));

	if (t80 != 692091609LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x662 = UINT32_MAX;
	int64_t x663 = -1LL;
	int64_t x664 = INT64_MIN;
	static volatile int64_t t81 = -17142928083794LL;

	t81 = (x661%(x662/(x663%x664)));

	if (t81 != 2147483647LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x673 = 827007099;
	uint32_t x674 = 1990U;
	int32_t x676 = -2;
	volatile uint64_t t82 = 259617727088LLU;

	t82 = (x673%(x674/(x675%x676)));

	if (t82 != 909LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x689 = -1;
	int32_t x690 = 256205;
	static int16_t x691 = INT16_MIN;
	int32_t x692 = INT32_MAX;
	volatile int32_t t83 = 3393006;

	t83 = (x689%(x690/(x691%x692)));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x697 = INT32_MAX;
	int8_t x698 = INT8_MIN;
	volatile int32_t x699 = INT32_MIN;
	int16_t x700 = 591;
	int32_t t84 = -1577;

	t84 = (x697%(x698/(x699%x700)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x705 = 7715282807355895LLU;
	int16_t x706 = -1;
	static volatile int8_t x707 = -1;
	volatile int8_t x708 = 3;
	uint64_t t85 = 282056947740704448LLU;

	t85 = (x705%(x706/(x707%x708)));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x710 = INT64_MIN;
	uint64_t t86 = 766980LLU;

	t86 = (x709%(x710/(x711%x712)));

	if (t86 != 392503145LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x714 = 41U;
	static int32_t x715 = INT32_MIN;
	int16_t x716 = -23;

	t87 = (x713%(x714/(x715%x716)));

	if (t87 != -2) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x717 = INT64_MIN;
	uint64_t x718 = 3937221612224LLU;
	uint8_t x719 = UINT8_MAX;
	uint64_t x720 = 241163LLU;
	uint64_t t88 = 63465428783731LLU;

	t88 = (x717%(x718/(x719%x720)));

	if (t88 != 2907063680LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x723 = 27;
	uint64_t t89 = 2777LLU;

	t89 = (x721%(x722/(x723%x724)));

	if (t89 != 1033948053LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x729 = INT64_MIN;
	static int64_t t90 = -565LL;

	t90 = (x729%(x730/(x731%x732)));

	if (t90 != -128LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x737 = 24U;
	int32_t x738 = INT32_MIN;
	volatile int8_t x739 = 1;
	int8_t x740 = INT8_MIN;
	volatile uint32_t t91 = 76U;

	t91 = (x737%(x738/(x739%x740)));

	if (t91 != 24U) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x741 = -2789;
	int8_t x742 = INT8_MAX;
	int32_t x743 = -1;

	t92 = (x741%(x742/(x743%x744)));

	if (t92 != -122) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x745 = 37;
	static uint16_t x746 = 21110U;
	uint16_t x747 = 9686U;
	uint32_t t93 = 7U;

	t93 = (x745%(x746/(x747%x748)));

	if (t93 != 1U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x749 = INT64_MAX;
	static int16_t x750 = INT16_MIN;
	volatile int64_t t94 = -6837311120LL;

	t94 = (x749%(x750/(x751%x752)));

	if (t94 != 127LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x753 = 8U;
	static uint64_t x754 = 15057705LLU;
	uint16_t x755 = UINT16_MAX;
	volatile int64_t x756 = 1394LL;
	static uint64_t t95 = 151137384645162727LLU;

	t95 = (x753%(x754/(x755%x756)));

	if (t95 != 8LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x766 = 11529U;
	uint32_t x767 = 5U;
	int32_t x768 = -1856871;
	uint32_t t96 = 4U;

	t96 = (x765%(x766/(x767%x768)));

	if (t96 != 865U) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x769 = 15674190704839LLU;
	uint16_t x770 = UINT16_MAX;
	uint8_t x772 = 33U;

	t97 = (x769%(x770/(x771%x772)));

	if (t97 != 15674190704839LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x774 = INT32_MAX;
	int8_t x775 = INT8_MIN;
	int64_t x776 = INT64_MAX;

	t98 = (x773%(x774/(x775%x776)));

	if (t98 != 255LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x777 = INT8_MIN;
	uint8_t x778 = UINT8_MAX;
	int64_t x780 = INT64_MIN;
	volatile int64_t t99 = 6293748108716926LL;

	t99 = (x777%(x778/(x779%x780)));

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

