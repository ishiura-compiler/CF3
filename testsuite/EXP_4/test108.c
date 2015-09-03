#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x21 = 13;
int8_t x23 = INT8_MAX;
static uint8_t x31 = UINT8_MAX;
static int32_t t1 = INT32_MAX;
static uint32_t x44 = 18U;
volatile int8_t x51 = INT8_MAX;
uint16_t x53 = 6601U;
int64_t x62 = INT64_MIN;
volatile uint32_t t7 = 468417U;
int64_t x83 = 6260272721105645LL;
int64_t x94 = INT64_MIN;
static int32_t x95 = INT32_MIN;
static volatile int8_t x98 = -1;
static int16_t x101 = 272;
static uint16_t x123 = 12U;
int64_t x139 = 89023209LL;
int64_t x143 = -1LL;
volatile int32_t t15 = 1027213857;
int8_t x160 = INT8_MIN;
static volatile int32_t t16 = 2259718;
volatile uint32_t t17 = 93U;
uint16_t x174 = 2U;
static volatile int16_t x176 = INT16_MIN;
static int64_t x197 = 1LL;
volatile uint8_t x203 = 45U;
uint32_t x205 = 14U;
static int64_t x207 = -149641LL;
static volatile uint32_t x216 = 111396380U;
int32_t x221 = INT32_MAX;
int32_t x255 = -39;
int8_t x259 = INT8_MIN;
static int32_t t28 = 4;
volatile int8_t x284 = INT8_MIN;
int64_t x315 = -1LL;
static int16_t x346 = INT16_MIN;
uint16_t x348 = 623U;
int64_t t35 = -275601056676771024LL;
uint16_t x358 = 29U;
int32_t t36 = INT32_MIN;
int64_t x365 = INT64_MAX;
static int64_t x370 = INT64_MIN;
static uint8_t x378 = UINT8_MAX;
int16_t x387 = INT16_MIN;
uint64_t x388 = 26487LLU;
volatile int32_t t43 = -1432030;
static uint8_t x391 = 33U;
int64_t x412 = 181720367905510052LL;
int8_t x413 = INT8_MAX;
volatile int8_t x414 = -9;
int32_t x416 = INT32_MAX;
volatile int32_t t47 = -1889;
uint8_t x429 = 9U;
uint64_t x431 = 1734200LLU;
int16_t x452 = -1;
volatile int64_t t50 = 59476568464LL;
int32_t x480 = 80891825;
int32_t t53 = 62484;
static volatile int32_t x493 = INT32_MAX;
int8_t x496 = -1;
int32_t x501 = -1;
int32_t t56 = 18743283;
uint32_t x505 = 15827169U;
int16_t x516 = 0;
uint64_t x533 = 59045971561LLU;
uint8_t x534 = UINT8_MAX;
volatile int64_t t60 = -109568967243485LL;
int16_t x552 = -1;
uint32_t x562 = 2019107516U;
int32_t x572 = -1;
volatile int8_t x586 = 0;
int64_t x593 = 477153704183872154LL;
int16_t x594 = INT16_MIN;
static int64_t t66 = 44LL;
uint64_t x603 = 435991101LLU;
volatile uint32_t x620 = 124U;
int32_t t68 = -56141;
int64_t x622 = INT64_MIN;
static int32_t t69 = -455309929;
static int16_t x625 = INT16_MAX;
uint8_t x642 = 78U;
uint8_t x647 = 126U;
int8_t x653 = INT8_MIN;
int32_t x655 = 980;
static volatile int32_t x674 = INT32_MIN;
volatile int64_t x676 = 1LL;
static int8_t x707 = INT8_MIN;
int64_t x740 = -720956043365226074LL;
static int8_t x742 = -1;
int32_t t81 = 11975079;
int32_t x765 = -29248495;
static int64_t x766 = INT64_MIN;
int32_t t83 = 170475588;
static uint64_t x784 = UINT64_MAX;
volatile int16_t x785 = -1;
static volatile int32_t t85 = -2362878;
static int64_t x790 = INT64_MIN;
volatile int64_t x802 = INT64_MIN;
uint64_t x813 = 5917837934LLU;
uint64_t x824 = UINT64_MAX;
int32_t t91 = 534;
volatile int8_t x859 = 4;
static uint16_t x860 = UINT16_MAX;
uint16_t x861 = 2975U;
uint32_t x862 = 4U;
volatile int32_t t94 = 0;
int8_t x873 = INT8_MAX;
int32_t t95 = 228;
uint32_t x888 = UINT32_MAX;
static int32_t x891 = 1852;
uint64_t x895 = 28336LLU;
int64_t t98 = INT64_MIN;


void f0(void) {
	uint8_t x22 = UINT8_MAX;
	int64_t x24 = 919789880LL;
	volatile int32_t t0 = -26364930;

	t0 = (x21/(x22<(x23+x24)));

	if (t0 != 13) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x29 = INT32_MAX;
	static volatile int16_t x30 = 0;
	static uint8_t x32 = 80U;

	t1 = (x29/(x30<(x31+x32)));

	if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x41 = INT32_MAX;
	uint64_t x42 = 169088LLU;
	uint32_t x43 = 3665358U;
	volatile int32_t t2 = INT32_MAX;

	t2 = (x41/(x42<(x43+x44)));

	if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x49 = INT8_MAX;
	int32_t x50 = -1;
	int16_t x52 = -111;
	static volatile int32_t t3 = -414;

	t3 = (x49/(x50<(x51+x52)));

	if (t3 != 127) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x54 = INT64_MIN;
	static int8_t x55 = 0;
	int8_t x56 = INT8_MIN;
	volatile int32_t t4 = -11736156;

	t4 = (x53/(x54<(x55+x56)));

	if (t4 != 6601) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x61 = INT8_MAX;
	int32_t x63 = INT32_MAX;
	uint32_t x64 = 1U;
	volatile int32_t t5 = 0;

	t5 = (x61/(x62<(x63+x64)));

	if (t5 != 127) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x73 = 3;
	int16_t x74 = INT16_MIN;
	int32_t x75 = -1;
	volatile int16_t x76 = -1;
	static volatile int32_t t6 = -12683;

	t6 = (x73/(x74<(x75+x76)));

	if (t6 != 3) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x77 = 158282U;
	int16_t x78 = INT16_MIN;
	volatile int64_t x79 = INT64_MAX;
	int16_t x80 = INT16_MIN;

	t7 = (x77/(x78<(x79+x80)));

	if (t7 != 158282U) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x81 = INT64_MIN;
	int8_t x82 = INT8_MAX;
	uint64_t x84 = 290350666995395296LLU;
	static volatile int64_t t8 = INT64_MIN;

	t8 = (x81/(x82<(x83+x84)));

	if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x93 = 2U;
	int64_t x96 = INT64_MAX;
	int32_t t9 = 13310;

	t9 = (x93/(x94<(x95+x96)));

	if (t9 != 2) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x97 = 231U;
	static int32_t x99 = INT32_MAX;
	int16_t x100 = -1;
	volatile int32_t t10 = -18032968;

	t10 = (x97/(x98<(x99+x100)));

	if (t10 != 231) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x102 = INT16_MAX;
	static int32_t x103 = 119470685;
	int8_t x104 = 1;
	static int32_t t11 = 0;

	t11 = (x101/(x102<(x103+x104)));

	if (t11 != 272) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x121 = -1;
	int16_t x122 = INT16_MAX;
	static int32_t x124 = 15433437;
	volatile int32_t t12 = -131;

	t12 = (x121/(x122<(x123+x124)));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x125 = 3120182U;
	volatile uint8_t x126 = UINT8_MAX;
	int64_t x127 = 131263LL;
	int16_t x128 = INT16_MAX;
	volatile uint32_t t13 = 18U;

	t13 = (x125/(x126<(x127+x128)));

	if (t13 != 3120182U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x137 = 1;
	static volatile int16_t x138 = 228;
	int32_t x140 = 9282;
	int32_t t14 = -353055;

	t14 = (x137/(x138<(x139+x140)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x141 = INT16_MIN;
	volatile int64_t x142 = INT64_MIN;
	int64_t x144 = 26690658268731350LL;

	t15 = (x141/(x142<(x143+x144)));

	if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x157 = INT16_MIN;
	volatile uint8_t x158 = 3U;
	uint16_t x159 = 3586U;

	t16 = (x157/(x158<(x159+x160)));

	if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x161 = 1930972242U;
	int32_t x162 = INT32_MIN;
	volatile int8_t x163 = INT8_MIN;
	int16_t x164 = -4;

	t17 = (x161/(x162<(x163+x164)));

	if (t17 != 1930972242U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x173 = -953;
	uint64_t x175 = UINT64_MAX;
	static int32_t t18 = -11;

	t18 = (x173/(x174<(x175+x176)));

	if (t18 != -953) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x198 = INT8_MAX;
	int32_t x199 = -1;
	static uint32_t x200 = UINT32_MAX;
	volatile int64_t t19 = -422901943LL;

	t19 = (x197/(x198<(x199+x200)));

	if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x201 = 279U;
	int8_t x202 = INT8_MIN;
	uint16_t x204 = 487U;
	volatile int32_t t20 = -5;

	t20 = (x201/(x202<(x203+x204)));

	if (t20 != 279) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x206 = -1LL;
	int64_t x208 = 786892081302649LL;
	uint32_t t21 = 56638429U;

	t21 = (x205/(x206<(x207+x208)));

	if (t21 != 14U) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x213 = -239;
	int32_t x214 = INT32_MIN;
	int64_t x215 = 9979386664LL;
	int32_t t22 = 30;

	t22 = (x213/(x214<(x215+x216)));

	if (t22 != -239) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x222 = INT32_MAX;
	uint8_t x223 = 32U;
	int64_t x224 = 3080780634LL;
	int32_t t23 = INT32_MAX;

	t23 = (x221/(x222<(x223+x224)));

	if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x225 = -1LL;
	uint32_t x226 = 3U;
	static int8_t x227 = INT8_MIN;
	static int8_t x228 = INT8_MAX;
	volatile int64_t t24 = -3361LL;

	t24 = (x225/(x226<(x227+x228)));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x253 = 2U;
	int8_t x254 = 1;
	volatile uint32_t x256 = 1U;
	int32_t t25 = 8720450;

	t25 = (x253/(x254<(x255+x256)));

	if (t25 != 2) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x257 = 47;
	uint8_t x258 = UINT8_MAX;
	uint32_t x260 = UINT32_MAX;
	int32_t t26 = 249321;

	t26 = (x257/(x258<(x259+x260)));

	if (t26 != 47) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x269 = 462U;
	int16_t x270 = -1;
	uint32_t x271 = 265U;
	int64_t x272 = 33994570386854630LL;
	int32_t t27 = 66998969;

	t27 = (x269/(x270<(x271+x272)));

	if (t27 != 462) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x273 = 34U;
	int16_t x274 = 6500;
	volatile int8_t x275 = -1;
	uint16_t x276 = UINT16_MAX;

	t28 = (x273/(x274<(x275+x276)));

	if (t28 != 34) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x281 = INT32_MAX;
	static int64_t x282 = -3244999532858LL;
	int16_t x283 = INT16_MIN;
	static int32_t t29 = INT32_MAX;

	t29 = (x281/(x282<(x283+x284)));

	if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x289 = INT32_MAX;
	uint8_t x290 = 23U;
	int8_t x291 = INT8_MAX;
	uint64_t x292 = 33741999226366LLU;
	int32_t t30 = INT32_MAX;

	t30 = (x289/(x290<(x291+x292)));

	if (t30 != INT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x293 = 10554698LLU;
	int64_t x294 = -1LL;
	static int16_t x295 = -444;
	uint16_t x296 = UINT16_MAX;
	volatile uint64_t t31 = 664376LLU;

	t31 = (x293/(x294<(x295+x296)));

	if (t31 != 10554698LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x305 = INT64_MIN;
	uint8_t x306 = 3U;
	uint16_t x307 = UINT16_MAX;
	uint32_t x308 = UINT32_MAX;
	volatile int64_t t32 = INT64_MIN;

	t32 = (x305/(x306<(x307+x308)));

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x313 = 2LLU;
	static volatile int8_t x314 = INT8_MAX;
	uint64_t x316 = UINT64_MAX;
	static volatile uint64_t t33 = 965040235LLU;

	t33 = (x313/(x314<(x315+x316)));

	if (t33 != 2LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x345 = UINT64_MAX;
	int8_t x347 = 46;
	uint64_t t34 = UINT64_MAX;

	t34 = (x345/(x346<(x347+x348)));

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x349 = 87652528185LL;
	static volatile uint8_t x350 = 17U;
	int16_t x351 = INT16_MIN;
	uint64_t x352 = 1017810553917238LLU;

	t35 = (x349/(x350<(x351+x352)));

	if (t35 != 87652528185LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x357 = INT32_MIN;
	uint32_t x359 = 939151U;
	int16_t x360 = -2;

	t36 = (x357/(x358<(x359+x360)));

	if (t36 != INT32_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x361 = 319U;
	int64_t x362 = INT64_MIN;
	static int32_t x363 = -487;
	uint32_t x364 = UINT32_MAX;
	uint32_t t37 = 1255032779U;

	t37 = (x361/(x362<(x363+x364)));

	if (t37 != 319U) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x366 = INT64_MIN;
	int16_t x367 = INT16_MAX;
	int64_t x368 = INT64_MIN;
	volatile int64_t t38 = INT64_MAX;

	t38 = (x365/(x366<(x367+x368)));

	if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x369 = INT64_MIN;
	int64_t x371 = -1LL;
	static volatile int16_t x372 = -1883;
	static int64_t t39 = INT64_MIN;

	t39 = (x369/(x370<(x371+x372)));

	if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x373 = INT64_MAX;
	int32_t x374 = -74326;
	volatile int8_t x375 = INT8_MIN;
	static int16_t x376 = 119;
	static int64_t t40 = INT64_MAX;

	t40 = (x373/(x374<(x375+x376)));

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x377 = INT8_MIN;
	static int8_t x379 = 31;
	uint64_t x380 = 31793118839LLU;
	volatile int32_t t41 = -32774939;

	t41 = (x377/(x378<(x379+x380)));

	if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x381 = -11;
	int16_t x382 = INT16_MIN;
	uint32_t x383 = 0U;
	static int8_t x384 = -28;
	int32_t t42 = -62909523;

	t42 = (x381/(x382<(x383+x384)));

	if (t42 != -11) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x385 = -1;
	int16_t x386 = INT16_MIN;

	t43 = (x385/(x386<(x387+x388)));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x389 = -26207;
	uint64_t x390 = 1LLU;
	static int32_t x392 = -1;
	volatile int32_t t44 = 5;

	t44 = (x389/(x390<(x391+x392)));

	if (t44 != -26207) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x405 = INT32_MIN;
	volatile int32_t x406 = INT32_MAX;
	static uint64_t x407 = 0LLU;
	int16_t x408 = -1;
	int32_t t45 = INT32_MIN;

	t45 = (x405/(x406<(x407+x408)));

	if (t45 != INT32_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x409 = INT8_MIN;
	int64_t x410 = -1LL;
	int64_t x411 = -1LL;
	int32_t t46 = 7;

	t46 = (x409/(x410<(x411+x412)));

	if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x415 = -1;

	t47 = (x413/(x414<(x415+x416)));

	if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x417 = -1;
	int32_t x418 = INT32_MIN;
	int16_t x419 = INT16_MIN;
	int64_t x420 = 1633875521LL;
	int32_t t48 = 79147676;

	t48 = (x417/(x418<(x419+x420)));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x430 = 7;
	int64_t x432 = INT64_MIN;
	static int32_t t49 = -10659714;

	t49 = (x429/(x430<(x431+x432)));

	if (t49 != 9) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x449 = 268516744218964154LL;
	int32_t x450 = -197;
	int8_t x451 = INT8_MIN;

	t50 = (x449/(x450<(x451+x452)));

	if (t50 != 268516744218964154LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x461 = INT16_MAX;
	int32_t x462 = 7;
	static int64_t x463 = INT64_MAX;
	static int8_t x464 = -1;
	int32_t t51 = 40;

	t51 = (x461/(x462<(x463+x464)));

	if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x477 = INT32_MAX;
	static int8_t x478 = INT8_MIN;
	static uint16_t x479 = 715U;
	volatile int32_t t52 = INT32_MAX;

	t52 = (x477/(x478<(x479+x480)));

	if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int8_t x489 = 1;
	static int64_t x490 = INT64_MIN;
	volatile uint8_t x491 = 0U;
	int16_t x492 = INT16_MIN;

	t53 = (x489/(x490<(x491+x492)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x494 = -1948;
	uint8_t x495 = UINT8_MAX;
	volatile int32_t t54 = INT32_MAX;

	t54 = (x493/(x494<(x495+x496)));

	if (t54 != INT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x497 = INT16_MAX;
	static uint32_t x498 = 1U;
	int16_t x499 = INT16_MIN;
	volatile uint32_t x500 = 20784931U;
	int32_t t55 = -11525763;

	t55 = (x497/(x498<(x499+x500)));

	if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x502 = UINT8_MAX;
	static uint32_t x503 = 28462U;
	static int32_t x504 = 437074645;

	t56 = (x501/(x502<(x503+x504)));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x506 = -7633;
	int64_t x507 = -1LL;
	static volatile int16_t x508 = -1;
	static uint32_t t57 = 304U;

	t57 = (x505/(x506<(x507+x508)));

	if (t57 != 15827169U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x513 = INT16_MIN;
	uint64_t x514 = 2905273604933258LLU;
	int8_t x515 = INT8_MIN;
	volatile int32_t t58 = 1162488;

	t58 = (x513/(x514<(x515+x516)));

	if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x535 = UINT32_MAX;
	uint16_t x536 = UINT16_MAX;
	static volatile uint64_t t59 = 147718949282LLU;

	t59 = (x533/(x534<(x535+x536)));

	if (t59 != 59045971561LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x541 = -131901811LL;
	uint32_t x542 = 134U;
	static uint32_t x543 = UINT32_MAX;
	int8_t x544 = -1;

	t60 = (x541/(x542<(x543+x544)));

	if (t60 != -131901811LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x549 = -1;
	int64_t x550 = INT64_MIN;
	int32_t x551 = INT32_MAX;
	volatile int32_t t61 = 444;

	t61 = (x549/(x550<(x551+x552)));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x561 = UINT32_MAX;
	static uint32_t x563 = UINT32_MAX;
	int64_t x564 = -2730LL;
	volatile uint32_t t62 = UINT32_MAX;

	t62 = (x561/(x562<(x563+x564)));

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x569 = -1;
	int64_t x570 = -75200LL;
	static int64_t x571 = INT64_MAX;
	volatile int32_t t63 = -24;

	t63 = (x569/(x570<(x571+x572)));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x573 = UINT32_MAX;
	int64_t x574 = INT64_MIN;
	int32_t x575 = -160765;
	int8_t x576 = 6;
	volatile uint32_t t64 = UINT32_MAX;

	t64 = (x573/(x574<(x575+x576)));

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x585 = 42U;
	uint16_t x587 = 33U;
	static uint32_t x588 = UINT32_MAX;
	volatile uint32_t t65 = 0U;

	t65 = (x585/(x586<(x587+x588)));

	if (t65 != 42U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x595 = 0;
	static int32_t x596 = INT32_MAX;

	t66 = (x593/(x594<(x595+x596)));

	if (t66 != 477153704183872154LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x601 = UINT32_MAX;
	uint64_t x602 = 0LLU;
	int64_t x604 = -1LL;
	static volatile uint32_t t67 = UINT32_MAX;

	t67 = (x601/(x602<(x603+x604)));

	if (t67 != UINT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x617 = -1;
	int16_t x618 = INT16_MIN;
	int8_t x619 = INT8_MIN;

	t68 = (x617/(x618<(x619+x620)));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x621 = 48;
	int64_t x623 = INT64_MIN;
	uint16_t x624 = 2668U;

	t69 = (x621/(x622<(x623+x624)));

	if (t69 != 48) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x626 = -1LL;
	int64_t x627 = 17862175336LL;
	int32_t x628 = INT32_MIN;
	volatile int32_t t70 = 11458338;

	t70 = (x625/(x626<(x627+x628)));

	if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x633 = INT8_MAX;
	int8_t x634 = 10;
	uint32_t x635 = UINT32_MAX;
	static int16_t x636 = -1;
	volatile int32_t t71 = -5394686;

	t71 = (x633/(x634<(x635+x636)));

	if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x641 = INT8_MIN;
	volatile int64_t x643 = INT64_MAX;
	static int32_t x644 = INT32_MIN;
	volatile int32_t t72 = 0;

	t72 = (x641/(x642<(x643+x644)));

	if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x645 = -1;
	int64_t x646 = INT64_MIN;
	int32_t x648 = -1;
	volatile int32_t t73 = 422431;

	t73 = (x645/(x646<(x647+x648)));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x654 = INT16_MIN;
	volatile int8_t x656 = INT8_MIN;
	int32_t t74 = -1;

	t74 = (x653/(x654<(x655+x656)));

	if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x673 = INT64_MAX;
	int32_t x675 = INT32_MIN;
	int64_t t75 = INT64_MAX;

	t75 = (x673/(x674<(x675+x676)));

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x677 = INT16_MAX;
	static uint8_t x678 = 0U;
	int16_t x679 = 12;
	static int16_t x680 = 0;
	volatile int32_t t76 = -45468;

	t76 = (x677/(x678<(x679+x680)));

	if (t76 != 32767) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x705 = INT32_MIN;
	int64_t x706 = INT64_MIN;
	int16_t x708 = -1;
	int32_t t77 = INT32_MIN;

	t77 = (x705/(x706<(x707+x708)));

	if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x721 = -357;
	int32_t x722 = 308;
	int16_t x723 = INT16_MIN;
	volatile uint32_t x724 = UINT32_MAX;
	volatile int32_t t78 = -272186711;

	t78 = (x721/(x722<(x723+x724)));

	if (t78 != -357) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x737 = -1;
	uint64_t x738 = 110LLU;
	int64_t x739 = INT64_MAX;
	volatile int32_t t79 = 53233171;

	t79 = (x737/(x738<(x739+x740)));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x741 = -1;
	static int8_t x743 = -1;
	int64_t x744 = INT64_MAX;
	int32_t t80 = -455246;

	t80 = (x741/(x742<(x743+x744)));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x749 = -760;
	int32_t x750 = INT32_MIN;
	static uint16_t x751 = 29124U;
	static uint16_t x752 = 0U;

	t81 = (x749/(x750<(x751+x752)));

	if (t81 != -760) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x757 = 71232937754831226LL;
	static uint64_t x758 = 415322013LLU;
	uint8_t x759 = 0U;
	int16_t x760 = -360;
	volatile int64_t t82 = 29222197658877LL;

	t82 = (x757/(x758<(x759+x760)));

	if (t82 != 71232937754831226LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x767 = INT32_MAX;
	int16_t x768 = INT16_MIN;

	t83 = (x765/(x766<(x767+x768)));

	if (t83 != -29248495) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x781 = 5067685998346241LLU;
	uint32_t x782 = 11U;
	static uint8_t x783 = 21U;
	static volatile uint64_t t84 = 314084734LLU;

	t84 = (x781/(x782<(x783+x784)));

	if (t84 != 5067685998346241LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x786 = 25U;
	uint64_t x787 = 231LLU;
	int32_t x788 = INT32_MIN;

	t85 = (x785/(x786<(x787+x788)));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x789 = 3U;
	volatile int32_t x791 = -1;
	static int16_t x792 = -1;
	volatile int32_t t86 = 238;

	t86 = (x789/(x790<(x791+x792)));

	if (t86 != 3) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x797 = UINT32_MAX;
	volatile uint32_t x798 = 980U;
	uint32_t x799 = UINT32_MAX;
	uint32_t x800 = 29998575U;
	static uint32_t t87 = UINT32_MAX;

	t87 = (x797/(x798<(x799+x800)));

	if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x801 = 622U;
	uint8_t x803 = 0U;
	static int64_t x804 = 1714391697LL;
	volatile int32_t t88 = 1148;

	t88 = (x801/(x802<(x803+x804)));

	if (t88 != 622) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x805 = -1LL;
	int16_t x806 = 3;
	static uint64_t x807 = 412433561411346664LLU;
	uint16_t x808 = UINT16_MAX;
	int64_t t89 = -25564LL;

	t89 = (x805/(x806<(x807+x808)));

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x814 = 4;
	int16_t x815 = 71;
	uint8_t x816 = UINT8_MAX;
	static volatile uint64_t t90 = 15537893656745LLU;

	t90 = (x813/(x814<(x815+x816)));

	if (t90 != 5917837934LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x821 = 36U;
	int8_t x822 = INT8_MIN;
	static int8_t x823 = -1;

	t91 = (x821/(x822<(x823+x824)));

	if (t91 != 36) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x845 = 23U;
	int16_t x846 = 22;
	int8_t x847 = INT8_MAX;
	int64_t x848 = -61LL;
	volatile int32_t t92 = -2013;

	t92 = (x845/(x846<(x847+x848)));

	if (t92 != 23) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x857 = UINT64_MAX;
	int8_t x858 = INT8_MIN;
	volatile uint64_t t93 = UINT64_MAX;

	t93 = (x857/(x858<(x859+x860)));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x863 = 0U;
	int32_t x864 = -1;

	t94 = (x861/(x862<(x863+x864)));

	if (t94 != 2975) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x874 = -1;
	int16_t x875 = INT16_MAX;
	static int16_t x876 = -1;

	t95 = (x873/(x874<(x875+x876)));

	if (t95 != 127) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x885 = 35427576239LLU;
	volatile int16_t x886 = INT16_MAX;
	int8_t x887 = INT8_MIN;
	volatile uint64_t t96 = 94468771708399427LLU;

	t96 = (x885/(x886<(x887+x888)));

	if (t96 != 35427576239LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x889 = INT8_MIN;
	uint8_t x890 = 7U;
	volatile int16_t x892 = -13;
	volatile int32_t t97 = -39;

	t97 = (x889/(x890<(x891+x892)));

	if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x893 = INT64_MIN;
	uint8_t x894 = UINT8_MAX;
	static uint64_t x896 = 10590846689LLU;

	t98 = (x893/(x894<(x895+x896)));

	if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x897 = INT8_MIN;
	int8_t x898 = -24;
	static int16_t x899 = INT16_MAX;
	int16_t x900 = INT16_MIN;
	static int32_t t99 = -49;

	t99 = (x897/(x898<(x899+x900)));

	if (t99 != -128) { NG(); } else { ; }
	
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

