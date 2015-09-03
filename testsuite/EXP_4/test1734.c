#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x8 = INT16_MAX;
static volatile int16_t x13 = -1;
uint32_t x23 = 3468U;
int64_t t5 = -1450127894147492LL;
int64_t x60 = INT64_MAX;
int64_t x78 = INT64_MIN;
uint32_t x87 = 25470U;
uint32_t t8 = 1217U;
int8_t x90 = INT8_MIN;
volatile int16_t x91 = -1;
int64_t x102 = 973748437358110621LL;
int32_t x103 = INT32_MIN;
static uint32_t x117 = 231673U;
int32_t x119 = 81;
static int32_t x127 = 18221;
static uint16_t x128 = 553U;
static volatile int8_t x131 = INT8_MAX;
static volatile uint32_t t15 = 25052U;
int8_t x137 = -1;
int8_t x139 = INT8_MIN;
static uint32_t x140 = 99723U;
int32_t x166 = INT32_MIN;
uint32_t x178 = UINT32_MAX;
uint8_t x185 = 3U;
uint32_t x187 = 5568445U;
int8_t x188 = 1;
uint32_t t23 = 2079543148U;
static uint64_t t24 = 953753078LLU;
static uint32_t x227 = 1U;
uint16_t x231 = 13U;
uint32_t t26 = 86U;
uint64_t x242 = 346952LLU;
int8_t x244 = 6;
volatile int64_t x246 = INT64_MAX;
uint32_t x247 = 3178U;
volatile int64_t t28 = -284089452LL;
volatile int8_t x318 = -19;
uint64_t t31 = 384667171LLU;
int64_t x331 = 41075LL;
static int16_t x332 = 64;
uint16_t x343 = UINT16_MAX;
uint32_t x379 = 3594U;
int16_t x397 = INT16_MAX;
uint8_t x428 = 25U;
volatile uint64_t t41 = 145LLU;
int8_t x433 = INT8_MAX;
int8_t x440 = 1;
uint8_t x517 = 100U;
int64_t x518 = 266LL;
volatile uint16_t x527 = 69U;
uint16_t x528 = UINT16_MAX;
uint32_t x549 = 2237U;
static uint16_t x552 = UINT16_MAX;
volatile uint32_t t48 = 57553306U;
static int8_t x557 = -2;
uint32_t t50 = 12282U;
int32_t x562 = INT32_MIN;
int8_t x563 = INT8_MAX;
static uint32_t x587 = 907321880U;
int16_t x588 = 4040;
uint32_t t56 = 506093130U;
int16_t x598 = INT16_MAX;
int32_t x609 = 229422;
int32_t x611 = -1;
static int32_t x662 = INT32_MIN;
int16_t x663 = INT16_MAX;
int64_t t65 = -22176798660374848LL;
int64_t x701 = INT64_MIN;
int64_t x702 = INT64_MIN;
int32_t x703 = -1;
volatile int64_t x718 = INT64_MIN;
int64_t t69 = 877249494LL;
uint32_t x742 = UINT32_MAX;
volatile int32_t x755 = 6262321;
int32_t t73 = -4;
uint64_t t74 = 379083344198812LLU;
int16_t x773 = -644;
static int64_t x780 = 2233542172027623557LL;
volatile int8_t x797 = -1;
volatile uint64_t t78 = 1247LLU;
int16_t x855 = -6605;
int32_t x878 = -3;
int8_t x881 = INT8_MAX;
volatile int8_t x884 = INT8_MIN;
int16_t x898 = 28;
static uint32_t x899 = 2588U;
volatile uint32_t t85 = 164322937U;
static uint8_t x908 = UINT8_MAX;
int8_t x912 = INT8_MIN;
volatile int32_t x918 = -28;
static uint16_t x919 = UINT16_MAX;
int8_t x948 = -1;
int64_t t90 = 1553080589LL;
uint8_t x977 = UINT8_MAX;
int16_t x1007 = -25;
uint16_t x1008 = 12988U;
volatile int64_t t92 = -206869LL;
int16_t x1039 = INT16_MAX;
uint64_t t93 = 1418464939094764779LLU;
int32_t x1051 = -1;
int64_t t96 = -3LL;
int32_t x1069 = -1;
volatile int64_t x1070 = -1LL;
volatile int8_t x1074 = INT8_MAX;


void f0(void) {
	uint64_t x5 = 1120722916LLU;
	int32_t x6 = INT32_MAX;
	int8_t x7 = INT8_MIN;
	uint64_t t0 = 2285178LLU;

	t0 = (x5%(x6/(x7&x8)));

	if (t0 != 4954LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = 1;
	static int16_t x10 = INT16_MIN;
	int8_t x11 = INT8_MIN;
	int16_t x12 = INT16_MIN;
	volatile int32_t t1 = -11;

	t1 = (x9%(x10/(x11&x12)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x14 = INT32_MIN;
	volatile int64_t x15 = INT64_MIN;
	volatile uint64_t x16 = UINT64_MAX;
	uint64_t t2 = 94792LLU;

	t2 = (x13%(x14/(x15&x16)));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x21 = 1U;
	int64_t x22 = -651076606546958LL;
	uint16_t x24 = UINT16_MAX;
	int64_t t3 = 55LL;

	t3 = (x21%(x22/(x23&x24)));

	if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x29 = UINT8_MAX;
	static int16_t x30 = INT16_MIN;
	volatile uint8_t x31 = 10U;
	int8_t x32 = -4;
	int32_t t4 = 926486;

	t4 = (x29%(x30/(x31&x32)));

	if (t4 != 255) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x49 = INT8_MAX;
	int64_t x50 = INT64_MIN;
	int64_t x51 = -215041108848606428LL;
	uint8_t x52 = UINT8_MAX;

	t5 = (x49%(x50/(x51&x52)));

	if (t5 != 127LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x57 = -1;
	int64_t x58 = INT64_MIN;
	static uint32_t x59 = 335U;
	volatile int64_t t6 = 86079537LL;

	t6 = (x57%(x58/(x59&x60)));

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x77 = INT32_MIN;
	int16_t x79 = INT16_MIN;
	volatile int16_t x80 = -1;
	int64_t t7 = 38563917LL;

	t7 = (x77%(x78/(x79&x80)));

	if (t7 != -2147483648LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x85 = 1376U;
	int32_t x86 = INT32_MIN;
	volatile uint32_t x88 = 11U;

	t8 = (x85%(x86/(x87&x88)));

	if (t8 != 1376U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x89 = 7108;
	uint64_t x92 = 1122974003467LLU;
	uint64_t t9 = 2LLU;

	t9 = (x89%(x90/(x91&x92)));

	if (t9 != 7108LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x101 = 14U;
	int8_t x104 = INT8_MIN;
	volatile int64_t t10 = 24LL;

	t10 = (x101%(x102/(x103&x104)));

	if (t10 != 14LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x105 = -1LL;
	volatile uint16_t x106 = UINT16_MAX;
	static int8_t x107 = INT8_MAX;
	volatile int64_t x108 = -1LL;
	int64_t t11 = -538203LL;

	t11 = (x105%(x106/(x107&x108)));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x109 = 1127063918141LLU;
	static int16_t x110 = -1;
	uint64_t x111 = 153LLU;
	int32_t x112 = -1;
	uint64_t t12 = 22666257938050308LLU;

	t12 = (x109%(x110/(x111&x112)));

	if (t12 != 1127063918141LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x118 = INT64_MIN;
	int8_t x120 = -1;
	volatile int64_t t13 = 79300LL;

	t13 = (x117%(x118/(x119&x120)));

	if (t13 != 231673LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x125 = INT16_MIN;
	int32_t x126 = INT32_MIN;
	int32_t t14 = -20;

	t14 = (x125%(x126/(x127&x128)));

	if (t14 != -32768) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x129 = INT8_MIN;
	volatile uint32_t x130 = 850265405U;
	static int32_t x132 = 2757039;

	t15 = (x129%(x130/(x131&x132)));

	if (t15 != 7458707U) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x133 = 24255789;
	static int16_t x134 = 1750;
	volatile int8_t x135 = 4;
	uint32_t x136 = UINT32_MAX;
	static uint32_t t16 = 53701U;

	t16 = (x133%(x134/(x135&x136)));

	if (t16 != 104U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x138 = -1;
	volatile uint32_t t17 = 970814U;

	t17 = (x137%(x138/(x139&x140)));

	if (t17 != 29246U) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x153 = 4999U;
	uint16_t x154 = 1604U;
	int32_t x155 = 14;
	int64_t x156 = INT64_MAX;
	volatile int64_t t18 = -1920678924454433478LL;

	t18 = (x153%(x154/(x155&x156)));

	if (t18 != 97LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x157 = -1LL;
	int64_t x158 = INT64_MAX;
	static volatile int16_t x159 = -1;
	int32_t x160 = INT32_MAX;
	static volatile int64_t t19 = 12908665444650031LL;

	t19 = (x157%(x158/(x159&x160)));

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x165 = INT8_MAX;
	static int8_t x167 = INT8_MIN;
	static uint8_t x168 = UINT8_MAX;
	volatile int32_t t20 = 1;

	t20 = (x165%(x166/(x167&x168)));

	if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x177 = 26;
	int32_t x179 = INT32_MAX;
	uint64_t x180 = 796175424052521350LLU;
	static volatile uint64_t t21 = 29193300076088LLU;

	t21 = (x177%(x178/(x179&x180)));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x186 = UINT8_MAX;
	uint32_t t22 = 296040U;

	t22 = (x185%(x186/(x187&x188)));

	if (t22 != 3U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x189 = INT16_MAX;
	volatile uint8_t x190 = 3U;
	uint8_t x191 = 2U;
	volatile uint32_t x192 = UINT32_MAX;

	t23 = (x189%(x190/(x191&x192)));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x193 = 17685157136478724LLU;
	int16_t x194 = -6;
	static uint8_t x195 = 2U;
	uint64_t x196 = UINT64_MAX;

	t24 = (x193%(x194/(x195&x196)));

	if (t24 != 17685157136478724LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x225 = UINT8_MAX;
	static int32_t x226 = -1;
	int8_t x228 = -5;
	volatile uint32_t t25 = 1416953136U;

	t25 = (x225%(x226/(x227&x228)));

	if (t25 != 255U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x229 = INT8_MIN;
	uint32_t x230 = UINT32_MAX;
	int32_t x232 = -43828;

	t26 = (x229%(x230/(x231&x232)));

	if (t26 != 357913817U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x241 = -1;
	uint64_t x243 = 7721169709503LLU;
	uint64_t t27 = 25415332LLU;

	t27 = (x241%(x242/(x243&x244)));

	if (t27 != 30840LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x245 = INT16_MIN;
	int16_t x248 = -16;

	t28 = (x245%(x246/(x247&x248)));

	if (t28 != -32768LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x281 = -17;
	volatile int32_t x282 = INT32_MIN;
	static int16_t x283 = INT16_MIN;
	static int64_t x284 = -363LL;
	volatile int64_t t29 = -180888223LL;

	t29 = (x281%(x282/(x283&x284)));

	if (t29 != -17LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x309 = INT16_MIN;
	volatile int8_t x310 = INT8_MAX;
	uint32_t x311 = 15U;
	int8_t x312 = -21;
	volatile uint32_t t30 = 5U;

	t30 = (x309%(x310/(x311&x312)));

	if (t30 != 5U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x317 = -1;
	static int16_t x319 = INT16_MIN;
	static uint64_t x320 = UINT64_MAX;

	t31 = (x317%(x318/(x319&x320)));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x321 = UINT32_MAX;
	uint32_t x322 = 110U;
	static int8_t x323 = 20;
	static int64_t x324 = -1LL;
	static int64_t t32 = 126845197LL;

	t32 = (x321%(x322/(x323&x324)));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x329 = INT64_MAX;
	int16_t x330 = INT16_MIN;
	int64_t t33 = 7615743463LL;

	t33 = (x329%(x330/(x331&x332)));

	if (t33 != 511LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x337 = INT64_MAX;
	int64_t x338 = INT64_MIN;
	int8_t x339 = 2;
	static volatile int32_t x340 = -944543138;
	static volatile int64_t t34 = 29544578LL;

	t34 = (x337%(x338/(x339&x340)));

	if (t34 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int8_t x341 = INT8_MIN;
	uint16_t x342 = 397U;
	uint8_t x344 = 13U;
	static int32_t t35 = 10;

	t35 = (x341%(x342/(x343&x344)));

	if (t35 != -8) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x357 = INT16_MAX;
	volatile int64_t x358 = -59LL;
	volatile int16_t x359 = 1;
	int8_t x360 = INT8_MAX;
	int64_t t36 = -17196521612LL;

	t36 = (x357%(x358/(x359&x360)));

	if (t36 != 22LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x369 = 4418U;
	int64_t x370 = -1460148364LL;
	volatile uint8_t x371 = UINT8_MAX;
	uint16_t x372 = UINT16_MAX;
	int64_t t37 = 22699845LL;

	t37 = (x369%(x370/(x371&x372)));

	if (t37 != 4418LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x377 = 598U;
	int64_t x378 = INT64_MIN;
	static volatile uint8_t x380 = 6U;
	static volatile int64_t t38 = -3501LL;

	t38 = (x377%(x378/(x379&x380)));

	if (t38 != 598LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x398 = -1;
	static int64_t x399 = INT64_MAX;
	volatile uint8_t x400 = 1U;
	static int64_t t39 = -5335LL;

	t39 = (x397%(x398/(x399&x400)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x421 = 7U;
	static int32_t x422 = 4541259;
	volatile int8_t x423 = -1;
	int16_t x424 = -1;
	int32_t t40 = -53;

	t40 = (x421%(x422/(x423&x424)));

	if (t40 != 7) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x425 = 221015U;
	uint64_t x426 = 1008466LLU;
	static uint8_t x427 = UINT8_MAX;

	t41 = (x425%(x426/(x427&x428)));

	if (t41 != 19325LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x434 = INT8_MIN;
	uint32_t x435 = 5710402U;
	uint64_t x436 = 5437313711871484896LLU;
	volatile uint64_t t42 = 6LLU;

	t42 = (x433%(x434/(x435&x436)));

	if (t42 != 127LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x437 = 15165LLU;
	volatile int16_t x438 = INT16_MAX;
	int8_t x439 = -27;
	static uint64_t t43 = 434919769057LLU;

	t43 = (x437%(x438/(x439&x440)));

	if (t43 != 15165LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x493 = INT8_MIN;
	int16_t x494 = INT16_MAX;
	int8_t x495 = INT8_MIN;
	int16_t x496 = INT16_MAX;
	volatile int32_t t44 = 123683138;

	t44 = (x493%(x494/(x495&x496)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x513 = 123203602074123760LLU;
	static uint16_t x514 = UINT16_MAX;
	int32_t x515 = -1;
	static int64_t x516 = -1LL;
	uint64_t t45 = 915208415LLU;

	t45 = (x513%(x514/(x515&x516)));

	if (t45 != 123203602074123760LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x519 = -1;
	uint8_t x520 = 5U;
	int64_t t46 = 42LL;

	t46 = (x517%(x518/(x519&x520)));

	if (t46 != 47LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x525 = INT16_MIN;
	int32_t x526 = INT32_MIN;
	int32_t t47 = 39443550;

	t47 = (x525%(x526/(x527&x528)));

	if (t47 != -32768) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x550 = UINT8_MAX;
	int16_t x551 = 1;

	t48 = (x549%(x550/(x551&x552)));

	if (t48 != 197U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x553 = -1;
	uint8_t x554 = 28U;
	static int8_t x555 = 30;
	uint32_t x556 = 1359385U;
	volatile uint32_t t49 = 5307U;

	t49 = (x553%(x554/(x555&x556)));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x558 = 7644228U;
	int16_t x559 = 4;
	int32_t x560 = INT32_MAX;

	t50 = (x557%(x558/(x559&x560)));

	if (t50 != 822215U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x561 = -1;
	int16_t x564 = INT16_MAX;
	int32_t t51 = 8380;

	t51 = (x561%(x562/(x563&x564)));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x569 = -1;
	volatile int16_t x570 = INT16_MIN;
	static int64_t x571 = -6110683740LL;
	uint16_t x572 = UINT16_MAX;
	static int64_t t52 = 13770LL;

	t52 = (x569%(x570/(x571&x572)));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x577 = INT32_MAX;
	volatile uint16_t x578 = UINT16_MAX;
	uint16_t x579 = 88U;
	uint64_t x580 = 100868934702230LLU;
	uint64_t t53 = 1725956355312974682LLU;

	t53 = (x577%(x578/(x579&x580)));

	if (t53 != 127LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x581 = INT8_MIN;
	int16_t x582 = INT16_MIN;
	uint64_t x583 = UINT64_MAX;
	int8_t x584 = INT8_MAX;
	volatile uint64_t t54 = 90LLU;

	t54 = (x581%(x582/(x583&x584)));

	if (t54 != 32640LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x585 = -1LL;
	uint16_t x586 = 2810U;
	static volatile int64_t t55 = 13677447808LL;

	t55 = (x585%(x586/(x587&x588)));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x589 = INT32_MIN;
	uint16_t x590 = UINT16_MAX;
	uint32_t x591 = 2U;
	int32_t x592 = INT32_MAX;

	t56 = (x589%(x590/(x591&x592)));

	if (t56 != 2U) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x597 = 8315465227220873LLU;
	uint8_t x599 = 35U;
	volatile int64_t x600 = INT64_MAX;
	uint64_t t57 = 8LLU;

	t57 = (x597%(x598/(x599&x600)));

	if (t57 != 137LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x610 = INT32_MAX;
	int8_t x612 = INT8_MAX;
	volatile int32_t t58 = 5690319;

	t58 = (x609%(x610/(x611&x612)));

	if (t58 != 229422) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x613 = -101291414135981LL;
	static volatile int32_t x614 = INT32_MIN;
	uint32_t x615 = 47009U;
	static int16_t x616 = INT16_MAX;
	volatile int64_t t59 = -5123LL;

	t59 = (x613%(x614/(x615&x616)));

	if (t59 != -66776LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x649 = 11U;
	static int32_t x650 = INT32_MAX;
	uint8_t x651 = UINT8_MAX;
	int64_t x652 = 13865547066168569LL;
	int64_t t60 = -3683786242399664LL;

	t60 = (x649%(x650/(x651&x652)));

	if (t60 != 11LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x657 = INT64_MIN;
	int64_t x658 = INT64_MIN;
	volatile uint64_t x659 = 15294577394LLU;
	volatile int64_t x660 = -3478457LL;
	uint64_t t61 = 4007671926LLU;

	t61 = (x657%(x658/(x659&x660)));

	if (t61 != 596557740LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x661 = -1;
	uint16_t x664 = 1523U;
	volatile int32_t t62 = 431060;

	t62 = (x661%(x662/(x663&x664)));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x673 = INT64_MIN;
	static int32_t x674 = INT32_MIN;
	int8_t x675 = INT8_MIN;
	static volatile int16_t x676 = -143;
	int64_t t63 = -4016151412LL;

	t63 = (x673%(x674/(x675&x676)));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x681 = INT32_MAX;
	static int64_t x682 = INT64_MIN;
	int16_t x683 = -7255;
	int64_t x684 = 425201716LL;
	volatile int64_t t64 = -28960LL;

	t64 = (x681%(x682/(x683&x684)));

	if (t64 != 2147483647LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x685 = INT32_MIN;
	int64_t x686 = 54930LL;
	int16_t x687 = -12;
	int16_t x688 = INT16_MAX;

	t65 = (x685%(x686/(x687&x688)));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x693 = 94U;
	int16_t x694 = INT16_MIN;
	uint16_t x695 = 22397U;
	int32_t x696 = -1;
	int32_t t66 = 0;

	t66 = (x693%(x694/(x695&x696)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x704 = 28935259045052784LL;
	volatile int64_t t67 = -2035752917840LL;

	t67 = (x701%(x702/(x703&x704)));

	if (t67 != -140LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x709 = UINT64_MAX;
	uint64_t x710 = 68288LLU;
	int32_t x711 = -28;
	static uint64_t x712 = 7198LLU;
	static volatile uint64_t t68 = 21947032LLU;

	t68 = (x709%(x710/(x711&x712)));

	if (t68 != 6LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x717 = INT8_MIN;
	volatile int64_t x719 = INT64_MAX;
	static uint32_t x720 = UINT32_MAX;

	t69 = (x717%(x718/(x719&x720)));

	if (t69 != -128LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x733 = INT16_MIN;
	static int64_t x734 = 10338931587232454LL;
	int8_t x735 = INT8_MIN;
	static int32_t x736 = INT32_MIN;
	int64_t t70 = 1317343193012572759LL;

	t70 = (x733%(x734/(x735&x736)));

	if (t70 != -32768LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x741 = INT64_MIN;
	uint8_t x743 = UINT8_MAX;
	uint8_t x744 = 1U;
	volatile int64_t t71 = -1915443993696146786LL;

	t71 = (x741%(x742/(x743&x744)));

	if (t71 != -2147483648LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x745 = 1;
	static uint64_t x746 = UINT64_MAX;
	static int16_t x747 = -1;
	static int8_t x748 = 1;
	static volatile uint64_t t72 = 23LLU;

	t72 = (x745%(x746/(x747&x748)));

	if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x753 = 18700U;
	int32_t x754 = INT32_MIN;
	static uint16_t x756 = 21010U;

	t73 = (x753%(x754/(x755&x756)));

	if (t73 != 18700) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x761 = INT8_MIN;
	volatile int8_t x762 = INT8_MIN;
	static int64_t x763 = -124628057582909LL;
	static uint64_t x764 = UINT64_MAX;

	t74 = (x761%(x762/(x763&x764)));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x774 = UINT32_MAX;
	int16_t x775 = INT16_MIN;
	static int32_t x776 = -88;
	uint32_t t75 = 11236832U;

	t75 = (x773%(x774/(x775&x776)));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x777 = 1U;
	uint64_t x778 = UINT64_MAX;
	volatile int32_t x779 = -1;
	static volatile uint64_t t76 = 8980008871LLU;

	t76 = (x777%(x778/(x779&x780)));

	if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x798 = UINT32_MAX;
	uint8_t x799 = 1U;
	volatile uint32_t x800 = 77215461U;
	uint32_t t77 = 1498U;

	t77 = (x797%(x798/(x799&x800)));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x805 = INT8_MIN;
	uint64_t x806 = 3411292450415LLU;
	int16_t x807 = INT16_MAX;
	int64_t x808 = -1LL;

	t78 = (x805%(x806/(x807&x808)));

	if (t78 != 22277888LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x817 = 1U;
	uint32_t x818 = UINT32_MAX;
	uint16_t x819 = UINT16_MAX;
	int16_t x820 = INT16_MIN;
	volatile uint32_t t79 = 5814975U;

	t79 = (x817%(x818/(x819&x820)));

	if (t79 != 1U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x837 = UINT8_MAX;
	uint8_t x838 = UINT8_MAX;
	uint32_t x839 = 678U;
	uint8_t x840 = UINT8_MAX;
	volatile uint32_t t80 = 36U;

	t80 = (x837%(x838/(x839&x840)));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x853 = 49;
	volatile uint64_t x854 = UINT64_MAX;
	uint8_t x856 = UINT8_MAX;
	static uint64_t t81 = 357447150175345LLU;

	t81 = (x853%(x854/(x855&x856)));

	if (t81 != 49LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x877 = 47978074122429109LLU;
	uint16_t x879 = UINT16_MAX;
	uint64_t x880 = 505785608496253234LLU;
	volatile uint64_t t82 = 576320891615951LLU;

	t82 = (x877%(x878/(x879&x880)));

	if (t82 != 183139018859637LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x882 = -7674407034346648LL;
	static int32_t x883 = INT32_MIN;
	volatile int64_t t83 = -7577LL;

	t83 = (x881%(x882/(x883&x884)));

	if (t83 != 127LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x893 = UINT8_MAX;
	int32_t x894 = -5;
	int64_t x895 = INT64_MIN;
	uint64_t x896 = UINT64_MAX;
	uint64_t t84 = 423367LLU;

	t84 = (x893%(x894/(x895&x896)));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x897 = INT8_MIN;
	int8_t x900 = INT8_MAX;

	t85 = (x897%(x898/(x899&x900)));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x901 = 5422;
	int64_t x902 = INT64_MIN;
	uint8_t x903 = UINT8_MAX;
	static volatile int8_t x904 = -5;
	volatile int64_t t86 = 659908946978064LL;

	t86 = (x901%(x902/(x903&x904)));

	if (t86 != 5422LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x905 = -1LL;
	volatile int64_t x906 = INT64_MAX;
	int64_t x907 = 773156225363729798LL;
	volatile int64_t t87 = -1LL;

	t87 = (x905%(x906/(x907&x908)));

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x909 = 140;
	uint64_t x910 = 199394931LLU;
	int32_t x911 = 33021034;
	uint64_t t88 = 2159LLU;

	t88 = (x909%(x910/(x911&x912)));

	if (t88 != 2LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x917 = -1;
	uint8_t x920 = 15U;
	volatile int32_t t89 = 0;

	t89 = (x917%(x918/(x919&x920)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x945 = -135685050553LL;
	volatile uint32_t x946 = 15U;
	volatile int64_t x947 = -1LL;

	t90 = (x945%(x946/(x947&x948)));

	if (t90 != -13LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x978 = INT16_MAX;
	int64_t x979 = -3758LL;
	uint8_t x980 = 2U;
	static volatile int64_t t91 = 2874200450485LL;

	t91 = (x977%(x978/(x979&x980)));

	if (t91 != 255LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x1005 = 124U;
	static int64_t x1006 = INT64_MIN;

	t92 = (x1005%(x1006/(x1007&x1008)));

	if (t92 != 124LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x1037 = 12LLU;
	int32_t x1038 = 56103199;
	int8_t x1040 = 33;

	t93 = (x1037%(x1038/(x1039&x1040)));

	if (t93 != 12LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x1041 = INT16_MAX;
	int32_t x1042 = INT32_MIN;
	static volatile uint8_t x1043 = UINT8_MAX;
	uint16_t x1044 = UINT16_MAX;
	int32_t t94 = -48710;

	t94 = (x1041%(x1042/(x1043&x1044)));

	if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x1049 = UINT16_MAX;
	uint32_t x1050 = 525088146U;
	uint16_t x1052 = UINT16_MAX;
	volatile uint32_t t95 = 3U;

	t95 = (x1049%(x1050/(x1051&x1052)));

	if (t95 != 1439U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x1057 = INT32_MAX;
	static volatile int8_t x1058 = INT8_MIN;
	uint16_t x1059 = 70U;
	int64_t x1060 = 9515865163261LL;

	t96 = (x1057%(x1058/(x1059&x1060)));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x1061 = INT64_MIN;
	int64_t x1062 = INT64_MIN;
	static uint64_t x1063 = 414LLU;
	int32_t x1064 = 149922;
	uint64_t t97 = 238402465701LLU;

	t97 = (x1061%(x1062/(x1063&x1064)));

	if (t97 != 42LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x1071 = 5U;
	static volatile int32_t x1072 = 1;
	int64_t t98 = 3116LL;

	t98 = (x1069%(x1070/(x1071&x1072)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x1073 = INT64_MAX;
	int16_t x1075 = 25;
	int16_t x1076 = INT16_MAX;
	int64_t t99 = 16111835124LL;

	t99 = (x1073%(x1074/(x1075&x1076)));

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

