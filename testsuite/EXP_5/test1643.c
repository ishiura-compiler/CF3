#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t3 = -1260766041511603LL;
volatile int8_t x61 = INT8_MAX;
static volatile uint8_t x62 = 22U;
static int16_t x63 = 1709;
volatile int32_t t5 = 71228;
volatile int8_t x71 = INT8_MIN;
int64_t x75 = -336803LL;
int16_t x76 = INT16_MAX;
uint64_t x96 = UINT64_MAX;
uint16_t x137 = 15U;
uint64_t x172 = 19175073LLU;
int32_t x175 = INT32_MAX;
int32_t t22 = 219856289;
static int32_t x194 = INT32_MAX;
uint64_t x196 = 15625715117LLU;
static volatile uint32_t x213 = UINT32_MAX;
static int8_t x214 = -1;
uint64_t x221 = 3531591LLU;
uint64_t x258 = UINT64_MAX;
uint8_t x259 = 1U;
int32_t t30 = 327666;
volatile int64_t t31 = -57522023519105LL;
int64_t t32 = 27312907956364047LL;
int8_t x289 = 42;
int16_t x313 = -714;
static int32_t x315 = -1;
static int16_t x318 = INT16_MIN;
volatile uint32_t x320 = 1324670155U;
int8_t x329 = INT8_MAX;
int8_t x358 = INT8_MIN;
volatile int32_t t38 = 6;
static int64_t x362 = -1LL;
volatile int8_t x383 = INT8_MIN;
static uint64_t x384 = 336911878560075200LLU;
volatile int16_t x389 = INT16_MAX;
int64_t x394 = INT64_MAX;
uint64_t x396 = UINT64_MAX;
int32_t t43 = -4;
uint32_t x397 = 322U;
int16_t x398 = 3;
volatile uint32_t t44 = 2017U;
static uint32_t x405 = 0U;
int32_t x409 = -1397;
uint32_t x411 = UINT32_MAX;
uint8_t x415 = 71U;
int64_t x429 = -1LL;
volatile int32_t t54 = 31570165;
int32_t x467 = 103;
int8_t x470 = 0;
uint16_t x472 = 4U;
volatile uint32_t t56 = 65U;
int32_t t57 = 406;
int8_t x485 = INT8_MAX;
uint8_t x490 = 5U;
volatile int32_t t60 = -6;
uint32_t x494 = UINT32_MAX;
int8_t x497 = 1;
static uint32_t x498 = 371U;
static uint32_t x499 = 9U;
static int32_t t62 = 5570760;
uint8_t x504 = 24U;
uint16_t x506 = 99U;
int64_t x507 = -3112LL;
int8_t x527 = INT8_MIN;
int16_t x528 = 35;
int32_t t69 = -1;
static uint32_t x559 = 0U;
int32_t t75 = -829625;
volatile uint32_t x581 = 106935331U;
uint16_t x596 = UINT16_MAX;
int64_t t77 = 758915500771556LL;
uint8_t x598 = UINT8_MAX;
uint16_t x606 = 3U;
static int8_t x614 = -27;
volatile int64_t t80 = 2098431910965LL;
int8_t x621 = INT8_MIN;
int32_t x624 = 188368231;
uint32_t x629 = 1U;
int64_t x630 = INT64_MAX;
volatile uint32_t t83 = 472U;
int32_t x634 = INT32_MIN;
static int8_t x657 = INT8_MIN;
int64_t x659 = -1LL;
int32_t x682 = INT32_MAX;
volatile int16_t x697 = 1820;
volatile uint32_t x699 = UINT32_MAX;
volatile int32_t x710 = INT32_MIN;
static volatile int16_t x711 = -1;
uint64_t x712 = UINT64_MAX;
int32_t x714 = -1;
int32_t x716 = INT32_MAX;
uint32_t x736 = 119U;
static int16_t x739 = INT16_MIN;
volatile int32_t x742 = -1;


void f0(void) {
	uint64_t x5 = UINT64_MAX;
	static int64_t x6 = 20997LL;
	int8_t x7 = INT8_MIN;
	volatile uint16_t x8 = 1U;
	static uint64_t t0 = 167991561072LLU;

	t0 = (x5%((x6<=x7)<=x8));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = INT16_MIN;
	int64_t x10 = INT64_MAX;
	int8_t x11 = INT8_MIN;
	int64_t x12 = INT64_MAX;
	volatile int32_t t1 = 28;

	t1 = (x9%((x10<=x11)<=x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x29 = 152701;
	uint8_t x30 = 104U;
	static int16_t x31 = -103;
	volatile int16_t x32 = INT16_MAX;
	volatile int32_t t2 = 5456;

	t2 = (x29%((x30<=x31)<=x32));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x41 = INT64_MIN;
	uint8_t x42 = 1U;
	int8_t x43 = INT8_MIN;
	static uint64_t x44 = 3LLU;

	t3 = (x41%((x42<=x43)<=x44));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x45 = INT32_MIN;
	uint8_t x46 = 14U;
	int16_t x47 = INT16_MIN;
	volatile int64_t x48 = INT64_MAX;
	volatile int32_t t4 = 1683;

	t4 = (x45%((x46<=x47)<=x48));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x64 = UINT32_MAX;

	t5 = (x61%((x62<=x63)<=x64));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x69 = 23747;
	int8_t x70 = INT8_MIN;
	uint64_t x72 = UINT64_MAX;
	volatile int32_t t6 = -114888636;

	t6 = (x69%((x70<=x71)<=x72));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x73 = INT64_MIN;
	int64_t x74 = -14260LL;
	int64_t t7 = 4199LL;

	t7 = (x73%((x74<=x75)<=x76));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x89 = 103357671;
	int64_t x90 = INT64_MIN;
	int16_t x91 = INT16_MIN;
	int64_t x92 = INT64_MAX;
	volatile int32_t t8 = -2055411;

	t8 = (x89%((x90<=x91)<=x92));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x93 = -17;
	uint8_t x94 = UINT8_MAX;
	int64_t x95 = INT64_MAX;
	int32_t t9 = 2020;

	t9 = (x93%((x94<=x95)<=x96));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x97 = 2LLU;
	volatile int16_t x98 = -1;
	volatile int64_t x99 = -1LL;
	uint64_t x100 = 1713039817463LLU;
	volatile uint64_t t10 = 403508741777LLU;

	t10 = (x97%((x98<=x99)<=x100));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x101 = UINT16_MAX;
	uint64_t x102 = 58885438654963387LLU;
	uint16_t x103 = UINT16_MAX;
	static int64_t x104 = 879090197LL;
	volatile int32_t t11 = 1049215518;

	t11 = (x101%((x102<=x103)<=x104));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x105 = INT32_MIN;
	int32_t x106 = INT32_MAX;
	int8_t x107 = INT8_MIN;
	static uint64_t x108 = 1012LLU;
	static int32_t t12 = -730576;

	t12 = (x105%((x106<=x107)<=x108));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x125 = -1LL;
	int8_t x126 = -1;
	static volatile int8_t x127 = INT8_MIN;
	int64_t x128 = 55LL;
	volatile int64_t t13 = 1LL;

	t13 = (x125%((x126<=x127)<=x128));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x138 = 7U;
	int32_t x139 = -1;
	volatile uint8_t x140 = 85U;
	int32_t t14 = -15518;

	t14 = (x137%((x138<=x139)<=x140));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x141 = -86580340560639LL;
	volatile int16_t x142 = INT16_MIN;
	static volatile uint8_t x143 = 3U;
	int16_t x144 = INT16_MAX;
	volatile int64_t t15 = -11993689831LL;

	t15 = (x141%((x142<=x143)<=x144));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x145 = 20U;
	int64_t x146 = INT64_MAX;
	static int64_t x147 = INT64_MIN;
	volatile int8_t x148 = 0;
	volatile int32_t t16 = -2021176;

	t16 = (x145%((x146<=x147)<=x148));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x149 = 1;
	int16_t x150 = INT16_MIN;
	static int64_t x151 = INT64_MIN;
	uint8_t x152 = UINT8_MAX;
	volatile int32_t t17 = -14;

	t17 = (x149%((x150<=x151)<=x152));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x153 = 5839;
	int16_t x154 = INT16_MIN;
	int8_t x155 = 18;
	uint64_t x156 = 3673709916734225041LLU;
	int32_t t18 = 1734;

	t18 = (x153%((x154<=x155)<=x156));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x157 = -1LL;
	static int8_t x158 = -1;
	volatile uint8_t x159 = UINT8_MAX;
	volatile int32_t x160 = 21;
	volatile int64_t t19 = 3644LL;

	t19 = (x157%((x158<=x159)<=x160));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x165 = 6U;
	volatile int8_t x166 = -1;
	static int64_t x167 = INT64_MAX;
	volatile int8_t x168 = 14;
	int32_t t20 = 1;

	t20 = (x165%((x166<=x167)<=x168));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x169 = UINT16_MAX;
	uint64_t x170 = UINT64_MAX;
	int32_t x171 = 560412006;
	static int32_t t21 = -185858448;

	t21 = (x169%((x170<=x171)<=x172));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int16_t x173 = INT16_MIN;
	int64_t x174 = INT64_MIN;
	uint32_t x176 = UINT32_MAX;

	t22 = (x173%((x174<=x175)<=x176));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x177 = INT32_MIN;
	int32_t x178 = 2861153;
	int32_t x179 = INT32_MIN;
	uint32_t x180 = 252142537U;
	volatile int32_t t23 = 77728;

	t23 = (x177%((x178<=x179)<=x180));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x185 = 24870860U;
	volatile int32_t x186 = INT32_MIN;
	int16_t x187 = -9;
	uint16_t x188 = 3824U;
	uint32_t t24 = 15186807U;

	t24 = (x185%((x186<=x187)<=x188));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x189 = 2759LLU;
	int8_t x190 = INT8_MAX;
	int8_t x191 = 1;
	uint8_t x192 = 1U;
	uint64_t t25 = 2316299692523LLU;

	t25 = (x189%((x190<=x191)<=x192));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x193 = UINT16_MAX;
	static uint64_t x195 = 2882LLU;
	volatile int32_t t26 = -394;

	t26 = (x193%((x194<=x195)<=x196));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x215 = INT64_MAX;
	static volatile uint16_t x216 = 1877U;
	volatile uint32_t t27 = 57167932U;

	t27 = (x213%((x214<=x215)<=x216));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x222 = INT16_MAX;
	int8_t x223 = 54;
	uint32_t x224 = 1U;
	uint64_t t28 = 971LLU;

	t28 = (x221%((x222<=x223)<=x224));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x257 = INT16_MAX;
	static uint32_t x260 = 182867U;
	volatile int32_t t29 = -2732321;

	t29 = (x257%((x258<=x259)<=x260));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x269 = 0U;
	int8_t x270 = INT8_MIN;
	static int32_t x271 = 182;
	int64_t x272 = 49590317214735294LL;

	t30 = (x269%((x270<=x271)<=x272));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x273 = INT64_MIN;
	volatile int64_t x274 = INT64_MIN;
	static int16_t x275 = -1;
	uint16_t x276 = 12073U;

	t31 = (x273%((x274<=x275)<=x276));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x281 = -1LL;
	static int32_t x282 = -1;
	int64_t x283 = 243915403634LL;
	volatile uint64_t x284 = 58471LLU;

	t32 = (x281%((x282<=x283)<=x284));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint64_t x290 = UINT64_MAX;
	int16_t x291 = INT16_MIN;
	static volatile int64_t x292 = 41LL;
	volatile int32_t t33 = 12765;

	t33 = (x289%((x290<=x291)<=x292));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x314 = INT16_MIN;
	uint8_t x316 = 10U;
	volatile int32_t t34 = -3822612;

	t34 = (x313%((x314<=x315)<=x316));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x317 = UINT64_MAX;
	int32_t x319 = INT32_MAX;
	static uint64_t t35 = 237221402LLU;

	t35 = (x317%((x318<=x319)<=x320));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x330 = INT32_MIN;
	int8_t x331 = INT8_MIN;
	int32_t x332 = 194003;
	static int32_t t36 = 115656;

	t36 = (x329%((x330<=x331)<=x332));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x345 = UINT64_MAX;
	int64_t x346 = -80LL;
	uint16_t x347 = 1U;
	static uint64_t x348 = 1730621LLU;
	uint64_t t37 = 4140710745242646LLU;

	t37 = (x345%((x346<=x347)<=x348));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x357 = -1;
	volatile int32_t x359 = -69566;
	static uint16_t x360 = 191U;

	t38 = (x357%((x358<=x359)<=x360));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x361 = 324467115U;
	int64_t x363 = INT64_MIN;
	uint64_t x364 = UINT64_MAX;
	static uint32_t t39 = 2269222U;

	t39 = (x361%((x362<=x363)<=x364));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x373 = -949LL;
	static uint16_t x374 = 13U;
	volatile int8_t x375 = INT8_MIN;
	int8_t x376 = 0;
	volatile int64_t t40 = 995191LL;

	t40 = (x373%((x374<=x375)<=x376));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x381 = -1;
	volatile int64_t x382 = INT64_MIN;
	volatile int32_t t41 = 361;

	t41 = (x381%((x382<=x383)<=x384));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x390 = UINT16_MAX;
	int16_t x391 = 3805;
	volatile int8_t x392 = 9;
	int32_t t42 = 58;

	t42 = (x389%((x390<=x391)<=x392));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x393 = 0;
	static volatile int8_t x395 = INT8_MAX;

	t43 = (x393%((x394<=x395)<=x396));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x399 = 15U;
	uint32_t x400 = 94965695U;

	t44 = (x397%((x398<=x399)<=x400));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x406 = 541113794266LLU;
	uint64_t x407 = 42721715LLU;
	uint32_t x408 = 93864917U;
	uint32_t t45 = 299626967U;

	t45 = (x405%((x406<=x407)<=x408));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x410 = INT64_MIN;
	uint64_t x412 = UINT64_MAX;
	static volatile int32_t t46 = -216250;

	t46 = (x409%((x410<=x411)<=x412));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x413 = -1449;
	int16_t x414 = INT16_MIN;
	static int8_t x416 = INT8_MAX;
	volatile int32_t t47 = -2374;

	t47 = (x413%((x414<=x415)<=x416));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x417 = INT16_MIN;
	static uint8_t x418 = 38U;
	volatile int8_t x419 = -1;
	volatile uint16_t x420 = 4673U;
	volatile int32_t t48 = 15;

	t48 = (x417%((x418<=x419)<=x420));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int32_t x421 = -503855;
	int8_t x422 = INT8_MIN;
	int64_t x423 = -45715LL;
	uint16_t x424 = 13U;
	static int32_t t49 = -11317;

	t49 = (x421%((x422<=x423)<=x424));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x430 = INT8_MIN;
	int8_t x431 = INT8_MAX;
	int8_t x432 = INT8_MAX;
	volatile int64_t t50 = -38164LL;

	t50 = (x429%((x430<=x431)<=x432));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x437 = UINT8_MAX;
	volatile int16_t x438 = -731;
	int8_t x439 = INT8_MIN;
	int16_t x440 = INT16_MAX;
	static int32_t t51 = -918624;

	t51 = (x437%((x438<=x439)<=x440));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x445 = 1010622212911475LL;
	uint32_t x446 = UINT32_MAX;
	static int8_t x447 = INT8_MIN;
	uint32_t x448 = 15U;
	volatile int64_t t52 = -36492976711LL;

	t52 = (x445%((x446<=x447)<=x448));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x453 = 841260165U;
	uint16_t x454 = UINT16_MAX;
	int8_t x455 = -1;
	uint16_t x456 = 4795U;
	volatile uint32_t t53 = 13U;

	t53 = (x453%((x454<=x455)<=x456));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x461 = 3U;
	uint16_t x462 = 247U;
	uint16_t x463 = 12U;
	static int8_t x464 = 40;

	t54 = (x461%((x462<=x463)<=x464));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x465 = UINT32_MAX;
	uint64_t x466 = UINT64_MAX;
	uint32_t x468 = UINT32_MAX;
	static uint32_t t55 = 160972U;

	t55 = (x465%((x466<=x467)<=x468));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x469 = UINT32_MAX;
	int8_t x471 = -1;

	t56 = (x469%((x470<=x471)<=x472));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x477 = 2092;
	static uint16_t x478 = UINT16_MAX;
	int32_t x479 = -759818134;
	static int32_t x480 = INT32_MAX;

	t57 = (x477%((x478<=x479)<=x480));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint16_t x481 = 1821U;
	static uint64_t x482 = 856872LLU;
	static int64_t x483 = INT64_MIN;
	int16_t x484 = INT16_MAX;
	volatile int32_t t58 = 37;

	t58 = (x481%((x482<=x483)<=x484));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x486 = 49U;
	static int32_t x487 = -2549396;
	uint8_t x488 = UINT8_MAX;
	volatile int32_t t59 = -18083;

	t59 = (x485%((x486<=x487)<=x488));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x489 = INT16_MIN;
	int64_t x491 = -7381490567685LL;
	int32_t x492 = 0;

	t60 = (x489%((x490<=x491)<=x492));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x493 = INT64_MIN;
	static uint32_t x495 = 544U;
	uint16_t x496 = 1226U;
	volatile int64_t t61 = -36023603438887LL;

	t61 = (x493%((x494<=x495)<=x496));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x500 = 61U;

	t62 = (x497%((x498<=x499)<=x500));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x501 = INT32_MIN;
	int32_t x502 = 1;
	int64_t x503 = -1LL;
	int32_t t63 = -582197643;

	t63 = (x501%((x502<=x503)<=x504));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x505 = -4716LL;
	volatile uint64_t x508 = UINT64_MAX;
	volatile int64_t t64 = -3LL;

	t64 = (x505%((x506<=x507)<=x508));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x509 = INT32_MAX;
	uint32_t x510 = UINT32_MAX;
	int8_t x511 = -1;
	volatile int8_t x512 = 2;
	int32_t t65 = -1;

	t65 = (x509%((x510<=x511)<=x512));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x521 = 1U;
	int16_t x522 = INT16_MAX;
	static uint64_t x523 = 153178209083LLU;
	uint64_t x524 = 218340290936LLU;
	volatile int32_t t66 = 6740;

	t66 = (x521%((x522<=x523)<=x524));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x525 = INT8_MIN;
	volatile int32_t x526 = -131623489;
	volatile int32_t t67 = -3366;

	t67 = (x525%((x526<=x527)<=x528));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x545 = 49U;
	int8_t x546 = INT8_MIN;
	int16_t x547 = 0;
	uint16_t x548 = 690U;
	volatile int32_t t68 = -16409065;

	t68 = (x545%((x546<=x547)<=x548));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x549 = 948U;
	static int8_t x550 = INT8_MIN;
	int64_t x551 = INT64_MIN;
	volatile uint32_t x552 = 832356U;

	t69 = (x549%((x550<=x551)<=x552));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x553 = 18LLU;
	uint32_t x554 = 271361258U;
	int8_t x555 = 0;
	static int8_t x556 = INT8_MAX;
	volatile uint64_t t70 = 776LLU;

	t70 = (x553%((x554<=x555)<=x556));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x557 = -1;
	uint8_t x558 = 1U;
	uint64_t x560 = 1734838232500313246LLU;
	static volatile int32_t t71 = 119;

	t71 = (x557%((x558<=x559)<=x560));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x561 = 7;
	volatile int16_t x562 = INT16_MAX;
	uint8_t x563 = 26U;
	volatile uint16_t x564 = 1414U;
	int32_t t72 = -1899654;

	t72 = (x561%((x562<=x563)<=x564));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x565 = 0;
	uint32_t x566 = 49260772U;
	static uint16_t x567 = UINT16_MAX;
	static uint32_t x568 = 13U;
	int32_t t73 = -3;

	t73 = (x565%((x566<=x567)<=x568));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x573 = 417U;
	int32_t x574 = -8133932;
	volatile uint16_t x575 = 0U;
	int16_t x576 = INT16_MAX;
	int32_t t74 = -3727402;

	t74 = (x573%((x574<=x575)<=x576));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x577 = INT32_MIN;
	uint8_t x578 = 14U;
	int8_t x579 = INT8_MAX;
	int8_t x580 = 2;

	t75 = (x577%((x578<=x579)<=x580));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x582 = INT64_MIN;
	static int16_t x583 = -1017;
	volatile uint8_t x584 = 28U;
	uint32_t t76 = 103549468U;

	t76 = (x581%((x582<=x583)<=x584));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x593 = INT64_MIN;
	volatile int8_t x594 = -1;
	volatile int8_t x595 = -1;

	t77 = (x593%((x594<=x595)<=x596));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x597 = 0U;
	volatile int16_t x599 = INT16_MIN;
	uint64_t x600 = 2865LLU;
	volatile int32_t t78 = 83154215;

	t78 = (x597%((x598<=x599)<=x600));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x605 = INT8_MAX;
	uint8_t x607 = 94U;
	volatile uint8_t x608 = 2U;
	volatile int32_t t79 = 4;

	t79 = (x605%((x606<=x607)<=x608));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x613 = 910020010LL;
	volatile int64_t x615 = INT64_MIN;
	int8_t x616 = INT8_MAX;

	t80 = (x613%((x614<=x615)<=x616));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x622 = -196277575507430LL;
	volatile int32_t x623 = INT32_MIN;
	int32_t t81 = -122;

	t81 = (x621%((x622<=x623)<=x624));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x625 = -5258589;
	int64_t x626 = INT64_MIN;
	volatile int16_t x627 = INT16_MIN;
	int8_t x628 = INT8_MAX;
	volatile int32_t t82 = -253023103;

	t82 = (x625%((x626<=x627)<=x628));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x631 = INT32_MIN;
	uint64_t x632 = 284LLU;

	t83 = (x629%((x630<=x631)<=x632));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x633 = UINT64_MAX;
	volatile uint64_t x635 = 4LLU;
	uint64_t x636 = UINT64_MAX;
	static volatile uint64_t t84 = 183453232047375517LLU;

	t84 = (x633%((x634<=x635)<=x636));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x641 = -975774;
	volatile uint8_t x642 = 51U;
	static int8_t x643 = -5;
	static uint32_t x644 = 827U;
	int32_t t85 = 6949;

	t85 = (x641%((x642<=x643)<=x644));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x645 = INT64_MAX;
	static uint8_t x646 = UINT8_MAX;
	uint16_t x647 = 0U;
	static volatile uint8_t x648 = UINT8_MAX;
	volatile int64_t t86 = 70326471105LL;

	t86 = (x645%((x646<=x647)<=x648));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x649 = INT32_MAX;
	int32_t x650 = -21491055;
	static int64_t x651 = 1812639LL;
	static int16_t x652 = 463;
	volatile int32_t t87 = 26533;

	t87 = (x649%((x650<=x651)<=x652));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x653 = INT16_MIN;
	static int64_t x654 = -1LL;
	int32_t x655 = INT32_MIN;
	volatile int32_t x656 = 14078341;
	static volatile int32_t t88 = 4;

	t88 = (x653%((x654<=x655)<=x656));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x658 = 12416U;
	uint64_t x660 = 63LLU;
	static int32_t t89 = -11;

	t89 = (x657%((x658<=x659)<=x660));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x669 = UINT16_MAX;
	uint64_t x670 = 1586600255829921LLU;
	volatile uint8_t x671 = UINT8_MAX;
	static int16_t x672 = INT16_MAX;
	int32_t t90 = 45;

	t90 = (x669%((x670<=x671)<=x672));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x681 = UINT16_MAX;
	uint32_t x683 = UINT32_MAX;
	volatile uint8_t x684 = 3U;
	static int32_t t91 = 337;

	t91 = (x681%((x682<=x683)<=x684));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x689 = INT8_MAX;
	uint8_t x690 = 1U;
	int16_t x691 = -2003;
	uint8_t x692 = 31U;
	volatile int32_t t92 = -166;

	t92 = (x689%((x690<=x691)<=x692));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x698 = INT32_MIN;
	uint16_t x700 = 1U;
	int32_t t93 = 2420;

	t93 = (x697%((x698<=x699)<=x700));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x709 = -1;
	volatile int32_t t94 = 218795360;

	t94 = (x709%((x710<=x711)<=x712));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x713 = INT16_MAX;
	uint16_t x715 = 4092U;
	int32_t t95 = 2195;

	t95 = (x713%((x714<=x715)<=x716));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x717 = INT32_MIN;
	uint8_t x718 = 71U;
	int8_t x719 = -1;
	int32_t x720 = INT32_MAX;
	int32_t t96 = 0;

	t96 = (x717%((x718<=x719)<=x720));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x733 = 293U;
	int16_t x734 = -42;
	int8_t x735 = 51;
	volatile int32_t t97 = 1;

	t97 = (x733%((x734<=x735)<=x736));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x737 = -1;
	static int64_t x738 = -1LL;
	uint32_t x740 = UINT32_MAX;
	volatile int32_t t98 = -310584;

	t98 = (x737%((x738<=x739)<=x740));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x741 = 2U;
	uint16_t x743 = UINT16_MAX;
	uint32_t x744 = 4U;
	uint32_t t99 = 2011069735U;

	t99 = (x741%((x742<=x743)<=x744));

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

