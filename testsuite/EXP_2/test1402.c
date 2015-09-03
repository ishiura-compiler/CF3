#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MAX;
static volatile int64_t t0 = -284070LL;
int32_t t4 = -1;
volatile int8_t x38 = -1;
static uint64_t x40 = UINT64_MAX;
static uint32_t x44 = 18106U;
static uint32_t x46 = 1299645298U;
static uint64_t t8 = 400325LLU;
volatile int32_t x64 = INT32_MIN;
uint64_t x72 = 3LLU;
static volatile uint64_t t11 = 17345401620LLU;
int8_t x76 = INT8_MIN;
int32_t t12 = 19404;
uint16_t x79 = UINT16_MAX;
int8_t x80 = INT8_MIN;
static uint8_t x81 = UINT8_MAX;
int16_t x89 = INT16_MIN;
int16_t x100 = -1;
volatile int32_t x106 = INT32_MAX;
uint32_t x118 = 1U;
static int16_t x130 = INT16_MIN;
static uint64_t x151 = UINT64_MAX;
uint64_t t21 = 148LLU;
volatile int32_t t22 = -37351783;
int64_t x193 = INT64_MIN;
volatile int64_t x196 = INT64_MIN;
int64_t x199 = 302324811769201345LL;
static int32_t x208 = -12;
int16_t x217 = INT16_MIN;
uint16_t x221 = 370U;
volatile uint16_t x223 = UINT16_MAX;
volatile int16_t x225 = INT16_MAX;
static volatile int32_t t30 = 6348606;
uint8_t x259 = UINT8_MAX;
static uint16_t x274 = 59U;
uint8_t x329 = UINT8_MAX;
uint8_t x336 = UINT8_MAX;
volatile uint64_t x358 = 156LLU;
int32_t x380 = -1;
static uint64_t x383 = UINT64_MAX;
volatile uint64_t x389 = 232545041LLU;
int8_t x390 = INT8_MIN;
volatile int8_t x399 = -1;
uint32_t x400 = UINT32_MAX;
uint32_t x406 = 21262U;
uint64_t t48 = 77LLU;
int8_t x411 = -1;
static uint16_t x430 = 4801U;
int32_t t51 = 485179379;
int8_t x463 = 34;
int64_t x464 = -5018285LL;
uint64_t x479 = UINT64_MAX;
uint32_t x495 = 31802063U;
int16_t x516 = INT16_MIN;
uint64_t x566 = 514922633918784450LLU;
static int8_t x574 = INT8_MIN;
volatile int64_t x578 = -1LL;
int8_t x580 = -1;
uint64_t x583 = 7840297735368LLU;
static uint16_t x599 = UINT16_MAX;
static volatile uint32_t t72 = 101193374U;
volatile int8_t x633 = 31;
static volatile int64_t x634 = -3419132776795LL;
int64_t x649 = 179822212291100328LL;
volatile int32_t x650 = -442330989;
volatile uint64_t t76 = 665365927LLU;
static volatile uint16_t x659 = 1749U;
static uint64_t x664 = 7795366389218511LLU;
int64_t x665 = 2155135LL;
int16_t x667 = 57;
int32_t x686 = INT32_MIN;
static int64_t x698 = INT64_MIN;
uint32_t x708 = 1395567385U;
volatile uint32_t t84 = 252U;
int32_t x713 = 0;
uint32_t x716 = 1009U;
uint64_t x719 = 19369069532LLU;
static int16_t x736 = INT16_MAX;
static volatile uint64_t t88 = 76654163308LLU;
static volatile int64_t t89 = -3246181LL;
volatile int8_t x761 = -1;
static uint32_t x770 = 17346U;
int32_t t93 = 154307;
volatile uint64_t x805 = 29277839047997LLU;
uint16_t x806 = 781U;
volatile int64_t x807 = INT64_MAX;
static int8_t x817 = 3;
static int32_t x818 = -559136;
int8_t x833 = INT8_MAX;
uint64_t x836 = 4510345811019099LLU;
volatile int32_t t99 = INT32_MIN;


void f0(void) {
	int16_t x2 = INT16_MAX;
	volatile int32_t x3 = INT32_MAX;
	static int64_t x4 = INT64_MAX;

	t0 = ((x1/(x2<x3))&x4);

	if (t0 != 127LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	static volatile int32_t x6 = -1;
	int64_t x7 = 227580407702LL;
	int8_t x8 = INT8_MIN;
	volatile int64_t t1 = -165032473LL;

	t1 = ((x5/(x6<x7))&x8);

	if (t1 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	volatile int64_t x10 = 12LL;
	static uint32_t x11 = 20784211U;
	int16_t x12 = -31;
	int64_t t2 = 51407337LL;

	t2 = ((x9/(x10<x11))&x12);

	if (t2 != 9223372036854775777LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = 423908;
	uint64_t x18 = 7156LLU;
	int16_t x19 = -248;
	volatile int32_t x20 = -1;
	volatile int32_t t3 = -429783;

	t3 = ((x17/(x18<x19))&x20);

	if (t3 != 423908) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x29 = -1;
	int16_t x30 = 141;
	int64_t x31 = 2744LL;
	static int16_t x32 = 4;

	t4 = ((x29/(x30<x31))&x32);

	if (t4 != 4) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x37 = 0LLU;
	volatile uint16_t x39 = 130U;
	volatile uint64_t t5 = 1033576528990LLU;

	t5 = ((x37/(x38<x39))&x40);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x41 = INT8_MIN;
	int8_t x42 = -1;
	uint8_t x43 = UINT8_MAX;
	volatile uint32_t t6 = 69686U;

	t6 = ((x41/(x42<x43))&x44);

	if (t6 != 18048U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x45 = UINT8_MAX;
	int32_t x47 = -1;
	uint16_t x48 = UINT16_MAX;
	int32_t t7 = -128982500;

	t7 = ((x45/(x46<x47))&x48);

	if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x57 = UINT64_MAX;
	volatile int8_t x58 = INT8_MIN;
	int32_t x59 = -1;
	static int16_t x60 = INT16_MIN;

	t8 = ((x57/(x58<x59))&x60);

	if (t8 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x61 = -1;
	volatile int32_t x62 = -8;
	uint32_t x63 = UINT32_MAX;
	volatile int32_t t9 = INT32_MIN;

	t9 = ((x61/(x62<x63))&x64);

	if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x65 = 23U;
	int16_t x66 = INT16_MIN;
	uint64_t x67 = UINT64_MAX;
	static volatile int8_t x68 = INT8_MAX;
	static int32_t t10 = 352221;

	t10 = ((x65/(x66<x67))&x68);

	if (t10 != 23) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x69 = 18U;
	int32_t x70 = INT32_MIN;
	static uint8_t x71 = 9U;

	t11 = ((x69/(x70<x71))&x72);

	if (t11 != 2LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x73 = 26U;
	int64_t x74 = INT64_MIN;
	static uint8_t x75 = 0U;

	t12 = ((x73/(x74<x75))&x76);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x77 = UINT64_MAX;
	int16_t x78 = INT16_MIN;
	static volatile uint64_t t13 = 95829582LLU;

	t13 = ((x77/(x78<x79))&x80);

	if (t13 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x82 = 20U;
	volatile int8_t x83 = INT8_MAX;
	int16_t x84 = INT16_MAX;
	static volatile int32_t t14 = 1;

	t14 = ((x81/(x82<x83))&x84);

	if (t14 != 255) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x90 = INT64_MIN;
	int32_t x91 = INT32_MAX;
	int16_t x92 = INT16_MIN;
	volatile int32_t t15 = -4928;

	t15 = ((x89/(x90<x91))&x92);

	if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x97 = -718374;
	volatile int8_t x98 = INT8_MIN;
	int32_t x99 = INT32_MAX;
	int32_t t16 = -9338651;

	t16 = ((x97/(x98<x99))&x100);

	if (t16 != -718374) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x105 = -1LL;
	volatile uint32_t x107 = UINT32_MAX;
	uint8_t x108 = UINT8_MAX;
	static int64_t t17 = -43LL;

	t17 = ((x105/(x106<x107))&x108);

	if (t17 != 255LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x117 = INT8_MIN;
	volatile uint32_t x119 = 7U;
	uint32_t x120 = 15185756U;
	uint32_t t18 = 199890U;

	t18 = ((x117/(x118<x119))&x120);

	if (t18 != 15185664U) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x121 = 48LLU;
	int64_t x122 = -1LL;
	volatile int32_t x123 = 476;
	int16_t x124 = -1;
	uint64_t t19 = 2LLU;

	t19 = ((x121/(x122<x123))&x124);

	if (t19 != 48LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x129 = -155234LL;
	volatile int64_t x131 = -1LL;
	uint8_t x132 = UINT8_MAX;
	volatile int64_t t20 = -2153551785LL;

	t20 = ((x129/(x130<x131))&x132);

	if (t20 != 158LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x149 = UINT64_MAX;
	volatile uint64_t x150 = 0LLU;
	uint32_t x152 = 9U;

	t21 = ((x149/(x150<x151))&x152);

	if (t21 != 9LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x153 = INT16_MAX;
	int64_t x154 = -43983914382LL;
	int8_t x155 = INT8_MIN;
	int32_t x156 = -24071125;

	t22 = ((x153/(x154<x155))&x156);

	if (t22 != 13355) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x161 = 324449638;
	uint32_t x162 = 9039270U;
	int16_t x163 = -3176;
	static int16_t x164 = 3;
	volatile int32_t t23 = 48033204;

	t23 = ((x161/(x162<x163))&x164);

	if (t23 != 2) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x194 = 5U;
	static uint8_t x195 = UINT8_MAX;
	static volatile int64_t t24 = INT64_MIN;

	t24 = ((x193/(x194<x195))&x196);

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x197 = -1LL;
	int8_t x198 = INT8_MAX;
	int32_t x200 = -1;
	volatile int64_t t25 = -71235LL;

	t25 = ((x197/(x198<x199))&x200);

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x205 = INT16_MIN;
	static int16_t x206 = INT16_MIN;
	uint16_t x207 = 1844U;
	int32_t t26 = -1;

	t26 = ((x205/(x206<x207))&x208);

	if (t26 != -32768) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x213 = UINT8_MAX;
	static int32_t x214 = 803287333;
	uint32_t x215 = UINT32_MAX;
	int16_t x216 = INT16_MAX;
	volatile int32_t t27 = 1925;

	t27 = ((x213/(x214<x215))&x216);

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x218 = -1;
	int16_t x219 = INT16_MAX;
	int16_t x220 = -1;
	static int32_t t28 = 22;

	t28 = ((x217/(x218<x219))&x220);

	if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x222 = 0;
	int64_t x224 = 72111864930075065LL;
	volatile int64_t t29 = -493452762501028818LL;

	t29 = ((x221/(x222<x223))&x224);

	if (t29 != 304LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x226 = 1412982U;
	static uint32_t x227 = UINT32_MAX;
	int32_t x228 = INT32_MAX;

	t30 = ((x225/(x226<x227))&x228);

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x257 = INT32_MIN;
	uint8_t x258 = 4U;
	int16_t x260 = -1;
	static int32_t t31 = INT32_MIN;

	t31 = ((x257/(x258<x259))&x260);

	if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x269 = INT8_MIN;
	volatile int32_t x270 = INT32_MIN;
	uint16_t x271 = 1401U;
	int16_t x272 = -10;
	int32_t t32 = -7175171;

	t32 = ((x269/(x270<x271))&x272);

	if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x273 = INT32_MAX;
	static uint16_t x275 = UINT16_MAX;
	static int64_t x276 = INT64_MIN;
	int64_t t33 = -124810552637719LL;

	t33 = ((x273/(x274<x275))&x276);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x281 = -1;
	static int16_t x282 = -496;
	int8_t x283 = -3;
	uint16_t x284 = 5U;
	int32_t t34 = -110;

	t34 = ((x281/(x282<x283))&x284);

	if (t34 != 5) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x313 = 50097134LL;
	uint16_t x314 = 0U;
	uint16_t x315 = UINT16_MAX;
	volatile int64_t x316 = -1LL;
	volatile int64_t t35 = -142LL;

	t35 = ((x313/(x314<x315))&x316);

	if (t35 != 50097134LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x330 = -1;
	static int32_t x331 = INT32_MAX;
	int8_t x332 = INT8_MIN;
	volatile int32_t t36 = 0;

	t36 = ((x329/(x330<x331))&x332);

	if (t36 != 128) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x333 = 3684U;
	uint32_t x334 = 64486975U;
	static uint64_t x335 = 4014056721LLU;
	int32_t t37 = -292587;

	t37 = ((x333/(x334<x335))&x336);

	if (t37 != 100) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x341 = -1;
	int32_t x342 = -1;
	int32_t x343 = INT32_MAX;
	uint16_t x344 = 18U;
	int32_t t38 = -5870;

	t38 = ((x341/(x342<x343))&x344);

	if (t38 != 18) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x353 = 26243906584LLU;
	int32_t x354 = 2706019;
	int32_t x355 = 222048149;
	uint32_t x356 = 44239U;
	uint64_t t39 = 150144777317973LLU;

	t39 = ((x353/(x354<x355))&x356);

	if (t39 != 11272LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x357 = 1674918712178LLU;
	volatile int8_t x359 = INT8_MIN;
	uint32_t x360 = 94705U;
	volatile uint64_t t40 = 43763762427544358LLU;

	t40 = ((x357/(x358<x359))&x360);

	if (t40 != 86384LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x369 = INT8_MIN;
	volatile int8_t x370 = INT8_MIN;
	int64_t x371 = 0LL;
	int16_t x372 = INT16_MIN;
	volatile int32_t t41 = 14;

	t41 = ((x369/(x370<x371))&x372);

	if (t41 != -32768) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x373 = INT8_MIN;
	int16_t x374 = INT16_MAX;
	uint64_t x375 = 233337260LLU;
	int32_t x376 = INT32_MIN;
	static int32_t t42 = INT32_MIN;

	t42 = ((x373/(x374<x375))&x376);

	if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x377 = -3897LL;
	static int32_t x378 = INT32_MIN;
	int8_t x379 = INT8_MAX;
	volatile int64_t t43 = 81001758906843LL;

	t43 = ((x377/(x378<x379))&x380);

	if (t43 != -3897LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x381 = 0U;
	int32_t x382 = 6615;
	volatile int64_t x384 = INT64_MIN;
	int64_t t44 = 8741688711LL;

	t44 = ((x381/(x382<x383))&x384);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x385 = INT16_MAX;
	static int64_t x386 = -89LL;
	uint32_t x387 = UINT32_MAX;
	uint32_t x388 = UINT32_MAX;
	static uint32_t t45 = 1042U;

	t45 = ((x385/(x386<x387))&x388);

	if (t45 != 32767U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x391 = UINT64_MAX;
	uint64_t x392 = 15462988LLU;
	volatile uint64_t t46 = 902645LLU;

	t46 = ((x389/(x390<x391))&x392);

	if (t46 != 13128192LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x397 = 13;
	uint32_t x398 = 2567803U;
	uint32_t t47 = 99U;

	t47 = ((x397/(x398<x399))&x400);

	if (t47 != 13U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x405 = INT16_MIN;
	volatile int16_t x407 = -10;
	uint64_t x408 = 39289839300LLU;

	t48 = ((x405/(x406<x407))&x408);

	if (t48 != 39289815040LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x409 = -1713;
	int32_t x410 = INT32_MIN;
	int64_t x412 = -4273511765699346365LL;
	static volatile int64_t t49 = 5715785227LL;

	t49 = ((x409/(x410<x411))&x412);

	if (t49 != -4273511765699346365LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x421 = 11U;
	int8_t x422 = INT8_MIN;
	int32_t x423 = INT32_MAX;
	static int8_t x424 = -1;
	int32_t t50 = -2067636;

	t50 = ((x421/(x422<x423))&x424);

	if (t50 != 11) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x429 = 6;
	uint16_t x431 = 18929U;
	int32_t x432 = -1;

	t51 = ((x429/(x430<x431))&x432);

	if (t51 != 6) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x461 = INT64_MIN;
	int16_t x462 = INT16_MIN;
	static volatile int64_t t52 = INT64_MIN;

	t52 = ((x461/(x462<x463))&x464);

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x469 = 4794U;
	static int8_t x470 = -1;
	uint16_t x471 = 0U;
	uint16_t x472 = 32U;
	uint32_t t53 = 23264U;

	t53 = ((x469/(x470<x471))&x472);

	if (t53 != 32U) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x477 = INT16_MIN;
	uint16_t x478 = 2U;
	uint64_t x480 = 627719977307LLU;
	uint64_t t54 = 508778027548LLU;

	t54 = ((x477/(x478<x479))&x480);

	if (t54 != 627719962624LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x481 = 6;
	int16_t x482 = INT16_MIN;
	uint16_t x483 = 133U;
	int16_t x484 = 0;
	int32_t t55 = -307520;

	t55 = ((x481/(x482<x483))&x484);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x485 = -3864;
	int32_t x486 = INT32_MIN;
	uint16_t x487 = 20479U;
	int8_t x488 = INT8_MIN;
	int32_t t56 = -7274491;

	t56 = ((x485/(x486<x487))&x488);

	if (t56 != -3968) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x493 = -1LL;
	volatile int16_t x494 = 10705;
	int64_t x496 = -1LL;
	int64_t t57 = -188952981658012LL;

	t57 = ((x493/(x494<x495))&x496);

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x513 = INT8_MAX;
	volatile int16_t x514 = INT16_MIN;
	int16_t x515 = -435;
	volatile int32_t t58 = -25808585;

	t58 = ((x513/(x514<x515))&x516);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x517 = UINT16_MAX;
	static int32_t x518 = INT32_MIN;
	uint32_t x519 = UINT32_MAX;
	uint64_t x520 = 163LLU;
	static uint64_t t59 = 22748023LLU;

	t59 = ((x517/(x518<x519))&x520);

	if (t59 != 163LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x541 = 211011U;
	int8_t x542 = 1;
	int8_t x543 = INT8_MAX;
	int16_t x544 = INT16_MIN;
	uint32_t t60 = 48U;

	t60 = ((x541/(x542<x543))&x544);

	if (t60 != 196608U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x549 = -4;
	volatile int8_t x550 = INT8_MIN;
	static volatile int32_t x551 = -1;
	int16_t x552 = -1;
	int32_t t61 = 55;

	t61 = ((x549/(x550<x551))&x552);

	if (t61 != -4) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x553 = 5493U;
	static int32_t x554 = INT32_MIN;
	volatile int8_t x555 = INT8_MIN;
	uint8_t x556 = 71U;
	int32_t t62 = -466942;

	t62 = ((x553/(x554<x555))&x556);

	if (t62 != 69) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x565 = 53039LL;
	int8_t x567 = -1;
	static uint8_t x568 = UINT8_MAX;
	volatile int64_t t63 = -38349191310818693LL;

	t63 = ((x565/(x566<x567))&x568);

	if (t63 != 47LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x573 = INT64_MIN;
	int32_t x575 = -1;
	uint32_t x576 = 60U;
	int64_t t64 = -225368657900621814LL;

	t64 = ((x573/(x574<x575))&x576);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x577 = UINT16_MAX;
	static int32_t x579 = INT32_MAX;
	int32_t t65 = 3837;

	t65 = ((x577/(x578<x579))&x580);

	if (t65 != 65535) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x581 = 1347665794U;
	volatile uint8_t x582 = UINT8_MAX;
	int8_t x584 = INT8_MIN;
	volatile uint32_t t66 = 47509U;

	t66 = ((x581/(x582<x583))&x584);

	if (t66 != 1347665792U) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x589 = -134264327218LL;
	int8_t x590 = INT8_MAX;
	uint64_t x591 = UINT64_MAX;
	int16_t x592 = INT16_MAX;
	volatile int64_t t67 = -434877280647652810LL;

	t67 = ((x589/(x590<x591))&x592);

	if (t67 != 29646LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x593 = 4536772131985985LL;
	volatile uint8_t x594 = 14U;
	volatile uint16_t x595 = 7427U;
	int8_t x596 = -11;
	volatile int64_t t68 = -271004LL;

	t68 = ((x593/(x594<x595))&x596);

	if (t68 != 4536772131985985LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x597 = INT64_MIN;
	static volatile int8_t x598 = INT8_MIN;
	uint16_t x600 = UINT16_MAX;
	volatile int64_t t69 = 29076175389340LL;

	t69 = ((x597/(x598<x599))&x600);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x601 = INT32_MIN;
	int16_t x602 = -1849;
	static volatile int8_t x603 = INT8_MAX;
	int64_t x604 = -1LL;
	int64_t t70 = -6982007843LL;

	t70 = ((x601/(x602<x603))&x604);

	if (t70 != -2147483648LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x609 = 129180U;
	int16_t x610 = 1;
	uint64_t x611 = UINT64_MAX;
	uint16_t x612 = UINT16_MAX;
	volatile uint32_t t71 = 22778201U;

	t71 = ((x609/(x610<x611))&x612);

	if (t71 != 63644U) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x625 = UINT8_MAX;
	volatile int8_t x626 = INT8_MAX;
	uint64_t x627 = 744934915470177814LLU;
	uint32_t x628 = UINT32_MAX;

	t72 = ((x625/(x626<x627))&x628);

	if (t72 != 255U) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x629 = INT64_MIN;
	int64_t x630 = INT64_MIN;
	int32_t x631 = -496246;
	static int16_t x632 = INT16_MIN;
	static int64_t t73 = INT64_MIN;

	t73 = ((x629/(x630<x631))&x632);

	if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x635 = -61;
	int8_t x636 = INT8_MIN;
	static volatile int32_t t74 = -1668653;

	t74 = ((x633/(x634<x635))&x636);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x645 = 23;
	static int16_t x646 = 2873;
	static uint32_t x647 = UINT32_MAX;
	int64_t x648 = INT64_MIN;
	volatile int64_t t75 = 481324903292831579LL;

	t75 = ((x645/(x646<x647))&x648);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x651 = 6U;
	static uint64_t x652 = UINT64_MAX;

	t76 = ((x649/(x650<x651))&x652);

	if (t76 != 179822212291100328LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x657 = INT16_MAX;
	static uint64_t x658 = 224LLU;
	uint32_t x660 = UINT32_MAX;
	uint32_t t77 = 7U;

	t77 = ((x657/(x658<x659))&x660);

	if (t77 != 32767U) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x661 = UINT16_MAX;
	uint64_t x662 = 2795842593LLU;
	uint64_t x663 = 1089622050166249278LLU;
	volatile uint64_t t78 = 6756LLU;

	t78 = ((x661/(x662<x663))&x664);

	if (t78 != 64719LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x666 = INT8_MIN;
	int16_t x668 = 15339;
	static int64_t t79 = 115919474784LL;

	t79 = ((x665/(x666<x667))&x668);

	if (t79 != 8811LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x669 = UINT16_MAX;
	volatile int16_t x670 = -1;
	int32_t x671 = 6;
	int16_t x672 = 17;
	int32_t t80 = 8754;

	t80 = ((x669/(x670<x671))&x672);

	if (t80 != 17) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x685 = 14165443438069LLU;
	static uint32_t x687 = UINT32_MAX;
	int32_t x688 = 51819551;
	volatile uint64_t t81 = 103LLU;

	t81 = ((x685/(x686<x687))&x688);

	if (t81 != 34612245LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x689 = 45485349464824LL;
	int64_t x690 = INT64_MIN;
	int32_t x691 = INT32_MIN;
	int16_t x692 = 1;
	static volatile int64_t t82 = 391651405LL;

	t82 = ((x689/(x690<x691))&x692);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x697 = INT8_MIN;
	int32_t x699 = INT32_MIN;
	int16_t x700 = INT16_MIN;
	volatile int32_t t83 = -854;

	t83 = ((x697/(x698<x699))&x700);

	if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x705 = -1;
	static volatile int32_t x706 = INT32_MIN;
	int64_t x707 = 378409555LL;

	t84 = ((x705/(x706<x707))&x708);

	if (t84 != 1395567385U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x714 = INT16_MAX;
	volatile int32_t x715 = INT32_MAX;
	uint32_t t85 = 12534537U;

	t85 = ((x713/(x714<x715))&x716);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x717 = 34788025U;
	int64_t x718 = 1LL;
	static int32_t x720 = INT32_MAX;
	volatile uint32_t t86 = 15870U;

	t86 = ((x717/(x718<x719))&x720);

	if (t86 != 34788025U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x733 = INT16_MIN;
	int64_t x734 = -166242921835LL;
	int64_t x735 = 16LL;
	int32_t t87 = 6225;

	t87 = ((x733/(x734<x735))&x736);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint64_t x741 = 62LLU;
	uint8_t x742 = 61U;
	uint8_t x743 = 80U;
	volatile int8_t x744 = 0;

	t88 = ((x741/(x742<x743))&x744);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x753 = 13;
	volatile int16_t x754 = INT16_MIN;
	volatile int16_t x755 = INT16_MAX;
	static int64_t x756 = INT64_MIN;

	t89 = ((x753/(x754<x755))&x756);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x757 = INT16_MIN;
	int64_t x758 = INT64_MIN;
	static uint32_t x759 = 773U;
	int64_t x760 = 298501874146156LL;
	int64_t t90 = 184764046LL;

	t90 = ((x757/(x758<x759))&x760);

	if (t90 != 298501874122752LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x762 = INT8_MIN;
	uint8_t x763 = UINT8_MAX;
	int32_t x764 = -120840;
	int32_t t91 = -39904;

	t91 = ((x761/(x762<x763))&x764);

	if (t91 != -120840) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x769 = INT8_MAX;
	uint64_t x771 = UINT64_MAX;
	static uint16_t x772 = UINT16_MAX;
	int32_t t92 = -6981663;

	t92 = ((x769/(x770<x771))&x772);

	if (t92 != 127) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x773 = -109;
	int16_t x774 = INT16_MIN;
	uint8_t x775 = 12U;
	int16_t x776 = INT16_MAX;

	t93 = ((x773/(x774<x775))&x776);

	if (t93 != 32659) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x777 = -1;
	int8_t x778 = 12;
	int32_t x779 = INT32_MAX;
	int64_t x780 = INT64_MIN;
	volatile int64_t t94 = INT64_MIN;

	t94 = ((x777/(x778<x779))&x780);

	if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x797 = 470551585268058LLU;
	int32_t x798 = INT32_MIN;
	uint32_t x799 = UINT32_MAX;
	uint8_t x800 = 26U;
	uint64_t t95 = 93LLU;

	t95 = ((x797/(x798<x799))&x800);

	if (t95 != 26LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x808 = 114704327778648LLU;
	volatile uint64_t t96 = 1181303663592LLU;

	t96 = ((x805/(x806<x807))&x808);

	if (t96 != 8798344454424LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x819 = 1;
	int64_t x820 = -41305586LL;
	volatile int64_t t97 = -341196LL;

	t97 = ((x817/(x818<x819))&x820);

	if (t97 != 2LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x834 = INT16_MIN;
	int8_t x835 = 41;
	uint64_t t98 = 33405923188556412LLU;

	t98 = ((x833/(x834<x835))&x836);

	if (t98 != 91LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x841 = INT32_MIN;
	int16_t x842 = -1;
	int64_t x843 = 9509LL;
	volatile int8_t x844 = INT8_MIN;

	t99 = ((x841/(x842<x843))&x844);

	if (t99 != INT32_MIN) { NG(); } else { ; }
	
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

