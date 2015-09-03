#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x32 = INT8_MIN;
int64_t x44 = -653894494LL;
static int32_t x50 = INT32_MAX;
int8_t x67 = INT8_MIN;
static uint64_t t6 = 106824418LLU;
uint32_t x81 = 1U;
uint32_t t7 = 14706U;
uint8_t x118 = 113U;
volatile uint64_t x125 = UINT64_MAX;
int32_t x130 = INT32_MIN;
static uint16_t x142 = UINT16_MAX;
int8_t x147 = 7;
int8_t x151 = INT8_MIN;
static uint64_t t18 = 908032903509LLU;
static volatile int16_t x162 = 1311;
static volatile int8_t x174 = INT8_MIN;
volatile int64_t x175 = INT64_MAX;
volatile int64_t x178 = INT64_MIN;
int16_t x182 = INT16_MIN;
volatile uint64_t t23 = 943707234290401207LLU;
uint64_t x193 = UINT64_MAX;
static int64_t x195 = INT64_MIN;
static int8_t x196 = INT8_MIN;
uint32_t x201 = UINT32_MAX;
volatile int64_t x202 = -1LL;
int8_t x237 = INT8_MAX;
static volatile int32_t x238 = INT32_MIN;
volatile int64_t x240 = INT64_MAX;
int32_t t30 = -529941;
uint64_t x243 = UINT64_MAX;
int32_t t31 = -156;
int8_t x253 = INT8_MAX;
volatile uint8_t x264 = 91U;
int32_t x282 = INT32_MAX;
static int16_t x293 = INT16_MAX;
volatile int64_t x294 = INT64_MIN;
uint64_t x297 = 968524162LLU;
int16_t x309 = INT16_MAX;
volatile uint32_t t42 = 445169912U;
uint32_t x333 = 81973U;
static volatile uint32_t t44 = 1908U;
int64_t x339 = INT64_MIN;
int32_t t45 = -433112241;
int8_t x341 = 14;
static volatile int64_t x344 = -124565119290011LL;
static int64_t x355 = 6527LL;
int32_t t49 = 179;
int64_t x372 = 2LL;
int32_t t52 = -5;
uint32_t x388 = 25503773U;
uint32_t t53 = 2220077U;
uint8_t x401 = 15U;
uint64_t x404 = 519911537184438299LLU;
int64_t x410 = INT64_MIN;
int32_t x416 = INT32_MIN;
static int8_t x424 = INT8_MIN;
volatile uint32_t t61 = 581187U;
uint64_t x442 = 290496581838LLU;
volatile int16_t x469 = INT16_MAX;
volatile int32_t t65 = -2;
int8_t x479 = INT8_MIN;
uint64_t t67 = 59626298540190576LLU;
int8_t x481 = 0;
static uint64_t t69 = 918570LLU;
volatile int32_t t70 = 156;
uint64_t x503 = 3680674536620LLU;
int32_t x504 = INT32_MIN;
int32_t t71 = -2208;
int8_t x514 = -1;
int8_t x516 = -1;
uint16_t x525 = UINT16_MAX;
uint16_t x528 = 25U;
int32_t x537 = INT32_MAX;
uint32_t x539 = 897699030U;
int64_t x540 = 0LL;
volatile uint32_t x554 = UINT32_MAX;
uint16_t x556 = UINT16_MAX;
volatile int32_t t81 = -5086940;
int16_t x561 = 12;
uint64_t x563 = UINT64_MAX;
int64_t x564 = -1LL;
int32_t x574 = INT32_MIN;
int32_t x575 = INT32_MAX;
volatile uint64_t t84 = 34141485959192LLU;
volatile int32_t t85 = -889;
int16_t x595 = INT16_MIN;
int8_t x597 = 31;
int8_t x598 = 2;
int64_t x607 = INT64_MIN;
static int64_t x610 = -1LL;
int32_t x618 = INT32_MIN;
static volatile int32_t t94 = 1988;
int64_t x634 = -27924387615507816LL;
int64_t x638 = INT64_MIN;
int64_t x640 = INT64_MAX;
uint8_t x645 = 38U;
uint64_t x647 = 152LLU;
static uint16_t x650 = 5U;
int8_t x651 = INT8_MIN;
int32_t t99 = 544536;


void f0(void) {
	volatile uint8_t x29 = 1U;
	int32_t x30 = 11866024;
	static uint8_t x31 = UINT8_MAX;
	volatile int32_t t0 = 517006501;

	t0 = (x29<<((x30&x31)<x32));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x33 = 1623;
	uint64_t x34 = 346037LLU;
	int8_t x35 = INT8_MIN;
	volatile int8_t x36 = 0;
	int32_t t1 = 1931;

	t1 = (x33<<((x34&x35)<x36));

	if (t1 != 1623) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x37 = 5;
	static int8_t x38 = -1;
	int8_t x39 = INT8_MIN;
	volatile int8_t x40 = INT8_MIN;
	static volatile int32_t t2 = -16752;

	t2 = (x37<<((x38&x39)<x40));

	if (t2 != 5) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x41 = 0LL;
	int16_t x42 = INT16_MIN;
	uint16_t x43 = 75U;
	volatile int64_t t3 = 160118668751021LL;

	t3 = (x41<<((x42&x43)<x44));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint16_t x49 = 46U;
	int32_t x51 = INT32_MAX;
	int64_t x52 = -7LL;
	static volatile int32_t t4 = -46;

	t4 = (x49<<((x50&x51)<x52));

	if (t4 != 46) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint32_t x57 = UINT32_MAX;
	int32_t x58 = INT32_MIN;
	uint64_t x59 = UINT64_MAX;
	static uint16_t x60 = UINT16_MAX;
	uint32_t t5 = UINT32_MAX;

	t5 = (x57<<((x58&x59)<x60));

	if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x65 = 646378975532LLU;
	uint8_t x66 = 10U;
	int8_t x68 = -8;

	t6 = (x65<<((x66&x67)<x68));

	if (t6 != 646378975532LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x82 = INT32_MIN;
	int8_t x83 = INT8_MIN;
	volatile int8_t x84 = INT8_MIN;

	t7 = (x81<<((x82&x83)<x84));

	if (t7 != 2U) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x93 = 5915U;
	int8_t x94 = INT8_MIN;
	static int64_t x95 = -1LL;
	uint16_t x96 = UINT16_MAX;
	int32_t t8 = 87;

	t8 = (x93<<((x94&x95)<x96));

	if (t8 != 11830) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x97 = 2009925;
	volatile int16_t x98 = -1;
	volatile uint32_t x99 = 480099U;
	int16_t x100 = INT16_MIN;
	volatile int32_t t9 = -3306816;

	t9 = (x97<<((x98&x99)<x100));

	if (t9 != 4019850) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x105 = 1U;
	static uint32_t x106 = UINT32_MAX;
	uint64_t x107 = 8215760191LLU;
	int32_t x108 = -1;
	volatile int32_t t10 = 524;

	t10 = (x105<<((x106&x107)<x108));

	if (t10 != 2) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x109 = 11727;
	int16_t x110 = 7;
	static volatile uint8_t x111 = 2U;
	uint32_t x112 = 5000322U;
	int32_t t11 = 274886353;

	t11 = (x109<<((x110&x111)<x112));

	if (t11 != 23454) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x117 = 444LL;
	int64_t x119 = INT64_MIN;
	static int8_t x120 = INT8_MAX;
	int64_t t12 = 24202020LL;

	t12 = (x117<<((x118&x119)<x120));

	if (t12 != 888LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x126 = 3905U;
	volatile int16_t x127 = INT16_MIN;
	int8_t x128 = INT8_MIN;
	uint64_t t13 = 12LLU;

	t13 = (x125<<((x126&x127)<x128));

	if (t13 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x129 = 1;
	volatile int64_t x131 = 26810378LL;
	volatile int64_t x132 = INT64_MAX;
	volatile int32_t t14 = 1;

	t14 = (x129<<((x130&x131)<x132));

	if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int8_t x133 = 1;
	volatile int32_t x134 = INT32_MAX;
	static uint8_t x135 = 14U;
	static int32_t x136 = -3;
	volatile int32_t t15 = 2;

	t15 = (x133<<((x134&x135)<x136));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x141 = 1U;
	volatile uint64_t x143 = 6LLU;
	uint16_t x144 = 9U;
	static volatile int32_t t16 = -943347;

	t16 = (x141<<((x142&x143)<x144));

	if (t16 != 2) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x145 = UINT8_MAX;
	static int32_t x146 = INT32_MIN;
	int16_t x148 = INT16_MIN;
	volatile int32_t t17 = 5636097;

	t17 = (x145<<((x146&x147)<x148));

	if (t17 != 255) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x149 = 21871406LLU;
	uint8_t x150 = UINT8_MAX;
	uint32_t x152 = 14U;

	t18 = (x149<<((x150&x151)<x152));

	if (t18 != 21871406LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x161 = 937278140LLU;
	int16_t x163 = INT16_MIN;
	static uint64_t x164 = 0LLU;
	static volatile uint64_t t19 = 3547159677694287709LLU;

	t19 = (x161<<((x162&x163)<x164));

	if (t19 != 937278140LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x165 = INT16_MAX;
	int8_t x166 = -1;
	static int32_t x167 = INT32_MIN;
	volatile int8_t x168 = INT8_MAX;
	int32_t t20 = 0;

	t20 = (x165<<((x166&x167)<x168));

	if (t20 != 65534) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x173 = UINT16_MAX;
	static int16_t x176 = -30;
	int32_t t21 = 1052;

	t21 = (x173<<((x174&x175)<x176));

	if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x177 = 125U;
	int64_t x179 = INT64_MIN;
	uint8_t x180 = 9U;
	int32_t t22 = -1198826;

	t22 = (x177<<((x178&x179)<x180));

	if (t22 != 250) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x181 = 18LLU;
	int8_t x183 = -1;
	static uint8_t x184 = UINT8_MAX;

	t23 = (x181<<((x182&x183)<x184));

	if (t23 != 36LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x194 = UINT64_MAX;
	volatile uint64_t t24 = 17749917012720489LLU;

	t24 = (x193<<((x194&x195)<x196));

	if (t24 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x197 = UINT8_MAX;
	volatile int8_t x198 = -1;
	int32_t x199 = -1;
	uint8_t x200 = 1U;
	static volatile int32_t t25 = 21937;

	t25 = (x197<<((x198&x199)<x200));

	if (t25 != 510) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x203 = 16705431LLU;
	uint64_t x204 = 30579312864342924LLU;
	volatile uint32_t t26 = 56U;

	t26 = (x201<<((x202&x203)<x204));

	if (t26 != 4294967294U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x209 = 15649U;
	volatile int16_t x210 = -1;
	int8_t x211 = INT8_MAX;
	uint32_t x212 = UINT32_MAX;
	static volatile int32_t t27 = -13027;

	t27 = (x209<<((x210&x211)<x212));

	if (t27 != 31298) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x217 = INT16_MAX;
	static int8_t x218 = -1;
	int16_t x219 = INT16_MIN;
	uint16_t x220 = 0U;
	int32_t t28 = 47454679;

	t28 = (x217<<((x218&x219)<x220));

	if (t28 != 65534) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x225 = 51865U;
	uint8_t x226 = 1U;
	int8_t x227 = -1;
	volatile uint8_t x228 = 30U;
	uint32_t t29 = 34U;

	t29 = (x225<<((x226&x227)<x228));

	if (t29 != 103730U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x239 = 101088750LL;

	t30 = (x237<<((x238&x239)<x240));

	if (t30 != 254) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x241 = 845741;
	static uint16_t x242 = UINT16_MAX;
	int32_t x244 = INT32_MIN;

	t31 = (x241<<((x242&x243)<x244));

	if (t31 != 1691482) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x254 = UINT32_MAX;
	uint64_t x255 = 40LLU;
	int64_t x256 = -621904086LL;
	volatile int32_t t32 = -26;

	t32 = (x253<<((x254&x255)<x256));

	if (t32 != 254) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x261 = 835U;
	uint16_t x262 = 318U;
	volatile uint64_t x263 = 33685924637368656LLU;
	static int32_t t33 = -1003099;

	t33 = (x261<<((x262&x263)<x264));

	if (t33 != 835) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x273 = 9U;
	volatile int8_t x274 = 0;
	uint8_t x275 = 0U;
	static int16_t x276 = 0;
	int32_t t34 = -14708;

	t34 = (x273<<((x274&x275)<x276));

	if (t34 != 9) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x281 = UINT8_MAX;
	int32_t x283 = INT32_MIN;
	volatile int8_t x284 = -1;
	static volatile int32_t t35 = -96536;

	t35 = (x281<<((x282&x283)<x284));

	if (t35 != 255) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x285 = INT8_MAX;
	int32_t x286 = INT32_MAX;
	volatile uint16_t x287 = UINT16_MAX;
	static uint8_t x288 = 8U;
	volatile int32_t t36 = 4;

	t36 = (x285<<((x286&x287)<x288));

	if (t36 != 127) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x289 = 728009961941465108LLU;
	int32_t x290 = -1;
	uint64_t x291 = 12717LLU;
	int8_t x292 = INT8_MAX;
	volatile uint64_t t37 = 336987887646662LLU;

	t37 = (x289<<((x290&x291)<x292));

	if (t37 != 728009961941465108LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x295 = -3;
	int8_t x296 = -45;
	volatile int32_t t38 = -124048;

	t38 = (x293<<((x294&x295)<x296));

	if (t38 != 65534) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x298 = -1;
	uint16_t x299 = UINT16_MAX;
	uint16_t x300 = 1248U;
	uint64_t t39 = 123488524756825130LLU;

	t39 = (x297<<((x298&x299)<x300));

	if (t39 != 968524162LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x305 = 21U;
	uint16_t x306 = 67U;
	static uint16_t x307 = UINT16_MAX;
	int32_t x308 = INT32_MAX;
	volatile int32_t t40 = 2449911;

	t40 = (x305<<((x306&x307)<x308));

	if (t40 != 42) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x310 = 66;
	int64_t x311 = -1LL;
	volatile uint8_t x312 = 28U;
	static volatile int32_t t41 = 0;

	t41 = (x309<<((x310&x311)<x312));

	if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x313 = 205U;
	uint8_t x314 = 66U;
	uint64_t x315 = UINT64_MAX;
	int8_t x316 = INT8_MIN;

	t42 = (x313<<((x314&x315)<x316));

	if (t42 != 410U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x321 = INT8_MAX;
	int8_t x322 = INT8_MAX;
	volatile int64_t x323 = INT64_MIN;
	int32_t x324 = -1;
	volatile int32_t t43 = -37;

	t43 = (x321<<((x322&x323)<x324));

	if (t43 != 127) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x334 = INT8_MIN;
	volatile uint64_t x335 = UINT64_MAX;
	uint8_t x336 = 0U;

	t44 = (x333<<((x334&x335)<x336));

	if (t44 != 81973U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x337 = 27;
	int8_t x338 = 45;
	int16_t x340 = INT16_MIN;

	t45 = (x337<<((x338&x339)<x340));

	if (t45 != 27) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x342 = INT64_MIN;
	int16_t x343 = INT16_MIN;
	int32_t t46 = 0;

	t46 = (x341<<((x342&x343)<x344));

	if (t46 != 28) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x345 = UINT64_MAX;
	static volatile int32_t x346 = INT32_MIN;
	static int16_t x347 = INT16_MAX;
	uint64_t x348 = 1LLU;
	uint64_t t47 = 505LLU;

	t47 = (x345<<((x346&x347)<x348));

	if (t47 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x349 = 48LL;
	int32_t x350 = INT32_MAX;
	volatile int32_t x351 = 0;
	volatile int8_t x352 = INT8_MAX;
	volatile int64_t t48 = 141989087229040LL;

	t48 = (x349<<((x350&x351)<x352));

	if (t48 != 96LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x353 = 3U;
	uint8_t x354 = 2U;
	volatile int64_t x356 = -7538214739559LL;

	t49 = (x353<<((x354&x355)<x356));

	if (t49 != 3) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x357 = 17U;
	uint16_t x358 = UINT16_MAX;
	int16_t x359 = INT16_MAX;
	uint8_t x360 = 3U;
	static int32_t t50 = -22022371;

	t50 = (x357<<((x358&x359)<x360));

	if (t50 != 17) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x369 = UINT32_MAX;
	volatile int32_t x370 = 1;
	uint64_t x371 = UINT64_MAX;
	uint32_t t51 = 1490U;

	t51 = (x369<<((x370&x371)<x372));

	if (t51 != 4294967294U) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint16_t x373 = UINT16_MAX;
	static int8_t x374 = INT8_MIN;
	int64_t x375 = INT64_MIN;
	int32_t x376 = INT32_MIN;

	t52 = (x373<<((x374&x375)<x376));

	if (t52 != 131070) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x385 = 9U;
	volatile int64_t x386 = INT64_MIN;
	volatile uint64_t x387 = UINT64_MAX;

	t53 = (x385<<((x386&x387)<x388));

	if (t53 != 9U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x393 = 0U;
	static int16_t x394 = -14283;
	int16_t x395 = -433;
	volatile int16_t x396 = INT16_MIN;
	static volatile uint32_t t54 = 941158289U;

	t54 = (x393<<((x394&x395)<x396));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x397 = 12;
	volatile uint64_t x398 = UINT64_MAX;
	static uint16_t x399 = UINT16_MAX;
	static volatile int64_t x400 = -30LL;
	volatile int32_t t55 = -5438924;

	t55 = (x397<<((x398&x399)<x400));

	if (t55 != 24) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x402 = INT16_MIN;
	int16_t x403 = -1;
	volatile int32_t t56 = -2229;

	t56 = (x401<<((x402&x403)<x404));

	if (t56 != 15) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x409 = 399044713;
	volatile int16_t x411 = 348;
	volatile int32_t x412 = -14812389;
	int32_t t57 = 532;

	t57 = (x409<<((x410&x411)<x412));

	if (t57 != 399044713) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x413 = 11;
	uint32_t x414 = UINT32_MAX;
	int8_t x415 = INT8_MIN;
	volatile int32_t t58 = -13;

	t58 = (x413<<((x414&x415)<x416));

	if (t58 != 11) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x421 = INT32_MAX;
	uint8_t x422 = UINT8_MAX;
	int8_t x423 = INT8_MIN;
	int32_t t59 = INT32_MAX;

	t59 = (x421<<((x422&x423)<x424));

	if (t59 != INT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x425 = 8U;
	int64_t x426 = INT64_MAX;
	int32_t x427 = 890275574;
	uint64_t x428 = UINT64_MAX;
	volatile int32_t t60 = 556712716;

	t60 = (x425<<((x426&x427)<x428));

	if (t60 != 16) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x429 = 67733205U;
	int64_t x430 = INT64_MAX;
	int16_t x431 = -1;
	int32_t x432 = INT32_MIN;

	t61 = (x429<<((x430&x431)<x432));

	if (t61 != 67733205U) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x441 = 285U;
	int16_t x443 = INT16_MIN;
	int64_t x444 = INT64_MAX;
	volatile uint32_t t62 = 2519U;

	t62 = (x441<<((x442&x443)<x444));

	if (t62 != 570U) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x449 = UINT16_MAX;
	static int16_t x450 = 913;
	volatile uint32_t x451 = 17238621U;
	static int64_t x452 = 2417461100LL;
	static int32_t t63 = 23;

	t63 = (x449<<((x450&x451)<x452));

	if (t63 != 131070) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x465 = 14299919756147445LLU;
	static uint8_t x466 = 3U;
	int64_t x467 = -1LL;
	int16_t x468 = -9534;
	volatile uint64_t t64 = 671079050415LLU;

	t64 = (x465<<((x466&x467)<x468));

	if (t64 != 14299919756147445LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x470 = INT32_MIN;
	int8_t x471 = INT8_MIN;
	uint32_t x472 = 1507118U;

	t65 = (x469<<((x470&x471)<x472));

	if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x473 = 63U;
	volatile int32_t x474 = INT32_MIN;
	int32_t x475 = -1;
	int16_t x476 = -1;
	int32_t t66 = 4060;

	t66 = (x473<<((x474&x475)<x476));

	if (t66 != 126) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x477 = UINT64_MAX;
	int16_t x478 = INT16_MIN;
	static int8_t x480 = INT8_MIN;

	t67 = (x477<<((x478&x479)<x480));

	if (t67 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x482 = 4U;
	int64_t x483 = INT64_MAX;
	volatile int16_t x484 = INT16_MAX;
	int32_t t68 = -6107822;

	t68 = (x481<<((x482&x483)<x484));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x485 = UINT64_MAX;
	static int16_t x486 = INT16_MIN;
	int32_t x487 = INT32_MIN;
	int32_t x488 = 1;

	t69 = (x485<<((x486&x487)<x488));

	if (t69 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x493 = 6409;
	volatile int32_t x494 = 466955945;
	int64_t x495 = -25LL;
	int64_t x496 = -1LL;

	t70 = (x493<<((x494&x495)<x496));

	if (t70 != 6409) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x501 = INT8_MAX;
	volatile uint32_t x502 = 5915U;

	t71 = (x501<<((x502&x503)<x504));

	if (t71 != 254) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x509 = 149089U;
	volatile int64_t x510 = -15151LL;
	int32_t x511 = -1;
	int32_t x512 = -4639749;
	static volatile uint32_t t72 = 50773U;

	t72 = (x509<<((x510&x511)<x512));

	if (t72 != 149089U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x513 = UINT8_MAX;
	int16_t x515 = INT16_MIN;
	int32_t t73 = -44;

	t73 = (x513<<((x514&x515)<x516));

	if (t73 != 510) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x517 = 0U;
	volatile int8_t x518 = 31;
	int8_t x519 = 0;
	static volatile int64_t x520 = -158851LL;
	volatile int32_t t74 = 277;

	t74 = (x517<<((x518&x519)<x520));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x521 = UINT64_MAX;
	volatile uint64_t x522 = 2678024LLU;
	uint32_t x523 = 5138U;
	int64_t x524 = -6723LL;
	volatile uint64_t t75 = 13631LLU;

	t75 = (x521<<((x522&x523)<x524));

	if (t75 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x526 = INT32_MAX;
	static int64_t x527 = -594676060013033LL;
	int32_t t76 = 1498884;

	t76 = (x525<<((x526&x527)<x528));

	if (t76 != 65535) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x529 = UINT8_MAX;
	int8_t x530 = -1;
	static uint16_t x531 = UINT16_MAX;
	uint32_t x532 = UINT32_MAX;
	volatile int32_t t77 = -420;

	t77 = (x529<<((x530&x531)<x532));

	if (t77 != 510) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x533 = 3U;
	uint64_t x534 = UINT64_MAX;
	volatile int8_t x535 = INT8_MIN;
	volatile uint64_t x536 = UINT64_MAX;
	uint32_t t78 = 156409U;

	t78 = (x533<<((x534&x535)<x536));

	if (t78 != 6U) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x538 = -1;
	volatile int32_t t79 = INT32_MAX;

	t79 = (x537<<((x538&x539)<x540));

	if (t79 != INT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x553 = 482801829U;
	uint8_t x555 = 34U;
	uint32_t t80 = 20879777U;

	t80 = (x553<<((x554&x555)<x556));

	if (t80 != 965603658U) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x557 = UINT8_MAX;
	uint16_t x558 = 59U;
	static int64_t x559 = INT64_MIN;
	static uint16_t x560 = 184U;

	t81 = (x557<<((x558&x559)<x560));

	if (t81 != 510) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x562 = UINT8_MAX;
	volatile int32_t t82 = 47;

	t82 = (x561<<((x562&x563)<x564));

	if (t82 != 24) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x569 = 105826078LLU;
	uint32_t x570 = 3U;
	volatile uint64_t x571 = UINT64_MAX;
	static int32_t x572 = INT32_MIN;
	uint64_t t83 = 471187890140LLU;

	t83 = (x569<<((x570&x571)<x572));

	if (t83 != 211652156LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x573 = 6053687LLU;
	uint64_t x576 = 1542975961LLU;

	t84 = (x573<<((x574&x575)<x576));

	if (t84 != 12107374LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x581 = 116U;
	uint64_t x582 = 87LLU;
	int32_t x583 = INT32_MIN;
	static uint32_t x584 = UINT32_MAX;

	t85 = (x581<<((x582&x583)<x584));

	if (t85 != 232) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x585 = 24U;
	volatile int32_t x586 = -1;
	static int32_t x587 = 3314;
	static volatile int64_t x588 = -1LL;
	volatile int32_t t86 = -8267330;

	t86 = (x585<<((x586&x587)<x588));

	if (t86 != 24) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x593 = UINT64_MAX;
	int64_t x594 = -1LL;
	static volatile int32_t x596 = -46016;
	uint64_t t87 = UINT64_MAX;

	t87 = (x593<<((x594&x595)<x596));

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x599 = 6116U;
	static uint16_t x600 = 6734U;
	int32_t t88 = -26;

	t88 = (x597<<((x598&x599)<x600));

	if (t88 != 62) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x601 = 8011819U;
	int64_t x602 = INT64_MIN;
	static uint16_t x603 = UINT16_MAX;
	uint64_t x604 = 312372929848781LLU;
	volatile uint32_t t89 = 6927U;

	t89 = (x601<<((x602&x603)<x604));

	if (t89 != 16023638U) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x605 = UINT16_MAX;
	volatile uint8_t x606 = UINT8_MAX;
	static volatile int64_t x608 = -31712811025180LL;
	volatile int32_t t90 = -53820635;

	t90 = (x605<<((x606&x607)<x608));

	if (t90 != 65535) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x609 = INT64_MAX;
	int32_t x611 = INT32_MAX;
	static int64_t x612 = INT64_MIN;
	int64_t t91 = INT64_MAX;

	t91 = (x609<<((x610&x611)<x612));

	if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x617 = UINT32_MAX;
	int16_t x619 = INT16_MAX;
	int8_t x620 = -20;
	uint32_t t92 = UINT32_MAX;

	t92 = (x617<<((x618&x619)<x620));

	if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x621 = 1815U;
	uint16_t x622 = UINT16_MAX;
	int16_t x623 = -22;
	static int32_t x624 = INT32_MIN;
	int32_t t93 = -2282705;

	t93 = (x621<<((x622&x623)<x624));

	if (t93 != 1815) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x625 = INT16_MAX;
	volatile int64_t x626 = 20212LL;
	static int16_t x627 = -1;
	static uint16_t x628 = 1804U;

	t94 = (x625<<((x626&x627)<x628));

	if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x629 = INT64_MAX;
	uint8_t x630 = 52U;
	static volatile int16_t x631 = 7681;
	volatile int16_t x632 = INT16_MIN;
	static volatile int64_t t95 = INT64_MAX;

	t95 = (x629<<((x630&x631)<x632));

	if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x633 = 7U;
	volatile int16_t x635 = 53;
	static volatile int64_t x636 = INT64_MIN;
	volatile int32_t t96 = 332;

	t96 = (x633<<((x634&x635)<x636));

	if (t96 != 7) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint32_t x637 = 4116309U;
	volatile uint8_t x639 = 9U;
	volatile uint32_t t97 = 252522U;

	t97 = (x637<<((x638&x639)<x640));

	if (t97 != 8232618U) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int16_t x646 = INT16_MIN;
	int64_t x648 = -129169721891LL;
	static volatile int32_t t98 = 247;

	t98 = (x645<<((x646&x647)<x648));

	if (t98 != 76) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x649 = INT16_MAX;
	uint16_t x652 = 25U;

	t99 = (x649<<((x650&x651)<x652));

	if (t99 != 65534) { NG(); } else { ; }
	
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

