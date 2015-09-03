#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x6 = -28599205;
volatile int16_t x23 = INT16_MAX;
volatile int8_t x25 = INT8_MAX;
int64_t t4 = INT64_MAX;
int8_t x55 = INT8_MIN;
int64_t x56 = -1LL;
int32_t t6 = 382601;
uint16_t x69 = 30U;
uint32_t x74 = 780U;
int64_t x77 = 461570824376443LL;
int64_t x79 = 8206302970069LL;
int64_t t9 = -61523LL;
static int16_t x96 = INT16_MIN;
volatile uint64_t t10 = 68LLU;
int8_t x109 = INT8_MAX;
int32_t t11 = 1;
int32_t x113 = 0;
volatile int64_t t12 = 7832203062923LL;
uint32_t x126 = 3U;
uint32_t x127 = 16115508U;
uint32_t x146 = 66190U;
int8_t x147 = -1;
uint16_t x149 = UINT16_MAX;
uint64_t t15 = 16509788319793LLU;
int32_t x153 = INT32_MAX;
int8_t x154 = INT8_MIN;
volatile int16_t x155 = 5496;
int32_t x165 = INT32_MAX;
static uint16_t x166 = UINT16_MAX;
static int8_t x199 = -1;
int16_t x208 = INT16_MIN;
int64_t x265 = 1681692LL;
static int16_t x281 = -1;
static int8_t x283 = -9;
uint16_t x315 = UINT16_MAX;
int8_t x323 = -1;
volatile uint64_t t27 = 291956303908LLU;
int16_t x353 = INT16_MIN;
uint64_t x398 = UINT64_MAX;
uint8_t x415 = 5U;
int16_t x418 = -1;
uint16_t x454 = UINT16_MAX;
int8_t x460 = -1;
static int16_t x463 = 3;
volatile int64_t t40 = 222LL;
int32_t t41 = -1408;
uint64_t x485 = 5028012165946LLU;
int16_t x491 = INT16_MIN;
static int32_t x510 = 160;
int16_t x512 = -1;
volatile int32_t t45 = 6994;
volatile uint64_t x524 = UINT64_MAX;
volatile int8_t x536 = -1;
volatile int32_t x538 = -1;
uint64_t x540 = 2615LLU;
int32_t x544 = -1;
uint16_t x546 = 11162U;
int64_t x567 = INT64_MAX;
uint64_t x572 = 5LLU;
uint8_t x592 = 13U;
uint16_t x610 = UINT16_MAX;
int64_t t56 = 75097292038780LL;
uint16_t x630 = 34U;
volatile uint16_t x631 = 36U;
volatile int64_t t57 = -26420362LL;
int8_t x634 = INT8_MIN;
volatile int32_t t58 = 9527;
volatile uint16_t x674 = 2924U;
uint8_t x678 = 9U;
uint64_t x679 = 22LLU;
volatile uint8_t x683 = 3U;
int8_t x684 = -1;
static int8_t x696 = INT8_MIN;
static uint8_t x709 = UINT8_MAX;
int32_t x748 = -1;
static int32_t t67 = -395806;
int16_t x778 = INT16_MIN;
uint8_t x779 = UINT8_MAX;
uint8_t x823 = UINT8_MAX;
volatile int16_t x824 = -12;
int16_t x826 = -4;
static int8_t x850 = INT8_MIN;
static int32_t t76 = -90244668;
static uint64_t x894 = UINT64_MAX;
volatile uint8_t x901 = 1U;
volatile int64_t x903 = INT64_MIN;
int64_t x934 = INT64_MAX;
int32_t x935 = INT32_MAX;
uint16_t x936 = 126U;
static uint32_t x974 = 211940U;
int8_t x975 = -1;
static int32_t x994 = INT32_MAX;
volatile int16_t x1011 = INT16_MIN;
int64_t x1014 = 32408738LL;
volatile int8_t x1016 = INT8_MIN;
static volatile int64_t x1034 = INT64_MIN;
static volatile int8_t x1048 = 1;
uint64_t t87 = UINT64_MAX;
volatile uint8_t x1068 = 1U;
int16_t x1075 = INT16_MAX;
uint8_t x1078 = UINT8_MAX;
volatile int8_t x1095 = 4;
int8_t x1096 = INT8_MIN;
static uint8_t x1103 = UINT8_MAX;
uint8_t x1104 = UINT8_MAX;
volatile int64_t x1106 = -1LL;
int64_t x1108 = INT64_MIN;
static int16_t x1134 = INT16_MIN;
static int64_t t98 = 27881328816191LL;
int64_t x1198 = INT64_MIN;


void f0(void) {
	volatile uint8_t x5 = 7U;
	int32_t x7 = INT32_MIN;
	int8_t x8 = INT8_MIN;
	int32_t t0 = 30593;

	t0 = ((x5&x6)<<(x7%x8));

	if (t0 != 3) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x21 = -91287402LL;
	static uint32_t x22 = 65279269U;
	int8_t x24 = 48;
	volatile int64_t t1 = 11701070222168LL;

	t1 = ((x21&x22)<<(x23%x24));

	if (t1 != 90643747183788032LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint16_t x26 = UINT16_MAX;
	static volatile int32_t x27 = 142092;
	int8_t x28 = 11;
	int32_t t2 = 2471;

	t2 = ((x25&x26)<<(x27%x28));

	if (t2 != 4064) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x29 = -6267247LL;
	uint8_t x30 = 3U;
	int8_t x31 = 36;
	int16_t x32 = INT16_MAX;
	volatile int64_t t3 = 63240656398342LL;

	t3 = ((x29&x30)<<(x31%x32));

	if (t3 != 68719476736LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x37 = -1;
	int64_t x38 = INT64_MAX;
	uint64_t x39 = UINT64_MAX;
	uint16_t x40 = UINT16_MAX;

	t4 = ((x37&x38)<<(x39%x40));

	if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x53 = 4013;
	int64_t x54 = INT64_MAX;
	volatile int64_t t5 = 1406477LL;

	t5 = ((x53&x54)<<(x55%x56));

	if (t5 != 4013LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x65 = 33U;
	int32_t x66 = INT32_MAX;
	volatile int64_t x67 = -1LL;
	int32_t x68 = -1;

	t6 = ((x65&x66)<<(x67%x68));

	if (t6 != 33) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x70 = -1;
	volatile uint32_t x71 = 1222U;
	static int8_t x72 = 1;
	static volatile int32_t t7 = 891547;

	t7 = ((x69&x70)<<(x71%x72));

	if (t7 != 30) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x73 = 524125206692LLU;
	int8_t x75 = 12;
	volatile int64_t x76 = -1LL;
	volatile uint64_t t8 = 1219004895383LLU;

	t8 = ((x73&x74)<<(x75%x76));

	if (t8 != 4LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x78 = UINT8_MAX;
	volatile int8_t x80 = -1;

	t9 = ((x77&x78)<<(x79%x80));

	if (t9 != 123LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x93 = INT8_MAX;
	uint64_t x94 = UINT64_MAX;
	uint64_t x95 = 1LLU;

	t10 = ((x93&x94)<<(x95%x96));

	if (t10 != 254LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x110 = INT16_MIN;
	static volatile int64_t x111 = INT64_MAX;
	int32_t x112 = -1;

	t11 = ((x109&x110)<<(x111%x112));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x114 = INT64_MAX;
	int32_t x115 = INT32_MAX;
	int32_t x116 = -10;

	t12 = ((x113&x114)<<(x115%x116));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x125 = -1;
	uint8_t x128 = UINT8_MAX;
	uint32_t t13 = 250530U;

	t13 = ((x125&x126)<<(x127%x128));

	if (t13 != 786432U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x145 = INT64_MIN;
	int16_t x148 = -1;
	volatile int64_t t14 = -26710316328550LL;

	t14 = ((x145&x146)<<(x147%x148));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x150 = 13LLU;
	static int64_t x151 = INT64_MIN;
	int32_t x152 = INT32_MIN;

	t15 = ((x149&x150)<<(x151%x152));

	if (t15 != 13LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x156 = -1;
	int32_t t16 = 379;

	t16 = ((x153&x154)<<(x155%x156));

	if (t16 != 2147483520) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x167 = UINT64_MAX;
	uint8_t x168 = 3U;
	int32_t t17 = 0;

	t17 = ((x165&x166)<<(x167%x168));

	if (t17 != 65535) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x189 = INT32_MIN;
	uint32_t x190 = 5U;
	volatile uint8_t x191 = UINT8_MAX;
	static uint16_t x192 = 18U;
	volatile uint32_t t18 = 8025997U;

	t18 = ((x189&x190)<<(x191%x192));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x197 = UINT64_MAX;
	volatile int16_t x198 = 411;
	int8_t x200 = -1;
	uint64_t t19 = 82LLU;

	t19 = ((x197&x198)<<(x199%x200));

	if (t19 != 411LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x205 = 37894490U;
	volatile uint32_t x206 = UINT32_MAX;
	int16_t x207 = INT16_MIN;
	uint32_t t20 = 870U;

	t20 = ((x205&x206)<<(x207%x208));

	if (t20 != 37894490U) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x221 = UINT32_MAX;
	uint32_t x222 = 701090U;
	volatile int64_t x223 = -1LL;
	int8_t x224 = 1;
	uint32_t t21 = 7717824U;

	t21 = ((x221&x222)<<(x223%x224));

	if (t21 != 701090U) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x233 = 2583U;
	int32_t x234 = INT32_MIN;
	static volatile uint8_t x235 = 3U;
	volatile int8_t x236 = INT8_MIN;
	static volatile int32_t t22 = 250;

	t22 = ((x233&x234)<<(x235%x236));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x266 = INT64_MAX;
	uint8_t x267 = UINT8_MAX;
	uint8_t x268 = 34U;
	volatile int64_t t23 = 13821385924312LL;

	t23 = ((x265&x266)<<(x267%x268));

	if (t23 != 220422733824LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x282 = INT64_MAX;
	int16_t x284 = -1;
	int64_t t24 = INT64_MAX;

	t24 = ((x281&x282)<<(x283%x284));

	if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x313 = 3196U;
	int16_t x314 = -1;
	uint32_t x316 = 1U;
	uint32_t t25 = 63U;

	t25 = ((x313&x314)<<(x315%x316));

	if (t25 != 3196U) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint16_t x321 = 2461U;
	volatile int32_t x322 = INT32_MIN;
	int32_t x324 = -1;
	static int32_t t26 = 78911;

	t26 = ((x321&x322)<<(x323%x324));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x341 = 12U;
	uint64_t x342 = UINT64_MAX;
	uint32_t x343 = 20U;
	static int8_t x344 = 1;

	t27 = ((x341&x342)<<(x343%x344));

	if (t27 != 12LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x354 = 6U;
	int64_t x355 = INT64_MIN;
	static int64_t x356 = INT64_MIN;
	volatile int32_t t28 = 29877121;

	t28 = ((x353&x354)<<(x355%x356));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x361 = -1;
	int64_t x362 = 53LL;
	int8_t x363 = 26;
	int8_t x364 = INT8_MAX;
	static int64_t t29 = 10161300426147995LL;

	t29 = ((x361&x362)<<(x363%x364));

	if (t29 != 3556769792LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x385 = -1;
	volatile int8_t x386 = 62;
	uint8_t x387 = 4U;
	int16_t x388 = 7;
	volatile int32_t t30 = -365122524;

	t30 = ((x385&x386)<<(x387%x388));

	if (t30 != 992) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x397 = INT16_MAX;
	int32_t x399 = INT32_MIN;
	uint8_t x400 = 4U;
	uint64_t t31 = 1LLU;

	t31 = ((x397&x398)<<(x399%x400));

	if (t31 != 32767LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x405 = 578032U;
	static int32_t x406 = INT32_MAX;
	int16_t x407 = INT16_MAX;
	static int8_t x408 = -1;
	uint32_t t32 = 1046U;

	t32 = ((x405&x406)<<(x407%x408));

	if (t32 != 578032U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x413 = INT64_MAX;
	volatile uint32_t x414 = 242329101U;
	int32_t x416 = -89523;
	static int64_t t33 = -5847113316474LL;

	t33 = ((x413&x414)<<(x415%x416));

	if (t33 != 7754531232LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x417 = INT8_MAX;
	uint64_t x419 = 34935326420LLU;
	uint16_t x420 = 12U;
	volatile int32_t t34 = -1;

	t34 = ((x417&x418)<<(x419%x420));

	if (t34 != 32512) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x425 = 13U;
	int32_t x426 = INT32_MIN;
	int8_t x427 = 0;
	volatile int64_t x428 = INT64_MAX;
	volatile uint32_t t35 = 12896U;

	t35 = ((x425&x426)<<(x427%x428));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x437 = UINT8_MAX;
	int8_t x438 = 1;
	uint8_t x439 = 6U;
	int64_t x440 = INT64_MIN;
	volatile int32_t t36 = 0;

	t36 = ((x437&x438)<<(x439%x440));

	if (t36 != 64) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x453 = -1;
	static volatile int16_t x455 = INT16_MIN;
	static int16_t x456 = INT16_MIN;
	int32_t t37 = -7008;

	t37 = ((x453&x454)<<(x455%x456));

	if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x457 = 1;
	uint8_t x458 = 35U;
	int16_t x459 = INT16_MIN;
	volatile int32_t t38 = 5373201;

	t38 = ((x457&x458)<<(x459%x460));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x461 = UINT16_MAX;
	int8_t x462 = -1;
	int16_t x464 = INT16_MAX;
	volatile int32_t t39 = -1044185;

	t39 = ((x461&x462)<<(x463%x464));

	if (t39 != 524280) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x465 = -1LL;
	int16_t x466 = 231;
	static int16_t x467 = INT16_MIN;
	int16_t x468 = INT16_MIN;

	t40 = ((x465&x466)<<(x467%x468));

	if (t40 != 231LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x469 = INT16_MIN;
	static int16_t x470 = 0;
	int32_t x471 = INT32_MIN;
	int32_t x472 = -1;

	t41 = ((x469&x470)<<(x471%x472));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x486 = -1;
	uint32_t x487 = UINT32_MAX;
	int16_t x488 = -1;
	volatile uint64_t t42 = 7481606557LLU;

	t42 = ((x485&x486)<<(x487%x488));

	if (t42 != 5028012165946LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x489 = INT32_MIN;
	int8_t x490 = INT8_MAX;
	int8_t x492 = INT8_MIN;
	volatile int32_t t43 = 9903;

	t43 = ((x489&x490)<<(x491%x492));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x497 = -1;
	static uint16_t x498 = 8U;
	int32_t x499 = INT32_MIN;
	volatile int16_t x500 = INT16_MIN;
	volatile int32_t t44 = -15;

	t44 = ((x497&x498)<<(x499%x500));

	if (t44 != 8) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x509 = UINT16_MAX;
	int16_t x511 = INT16_MIN;

	t45 = ((x509&x510)<<(x511%x512));

	if (t45 != 160) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x521 = 293537406495226557LL;
	int16_t x522 = -1;
	volatile int16_t x523 = 1;
	volatile int64_t t46 = -150664968152LL;

	t46 = ((x521&x522)<<(x523%x524));

	if (t46 != 587074812990453114LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x525 = UINT32_MAX;
	static int32_t x526 = INT32_MIN;
	int16_t x527 = 675;
	int8_t x528 = -2;
	uint32_t t47 = 393U;

	t47 = ((x525&x526)<<(x527%x528));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x533 = 12694;
	static volatile int16_t x534 = INT16_MIN;
	uint8_t x535 = 17U;
	int32_t t48 = -20786;

	t48 = ((x533&x534)<<(x535%x536));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x537 = 123120237U;
	int32_t x539 = 7;
	uint32_t t49 = 874U;

	t49 = ((x537&x538)<<(x539%x540));

	if (t49 != 2874488448U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x541 = 493;
	int64_t x542 = 1933LL;
	uint16_t x543 = UINT16_MAX;
	volatile int64_t t50 = 80554000761111LL;

	t50 = ((x541&x542)<<(x543%x544));

	if (t50 != 397LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x545 = 259316U;
	volatile int8_t x547 = INT8_MIN;
	int16_t x548 = -1;
	volatile uint32_t t51 = 1U;

	t51 = ((x545&x546)<<(x547%x548));

	if (t51 != 8336U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x565 = -1;
	uint32_t x566 = 15135U;
	int64_t x568 = -1LL;
	volatile uint32_t t52 = 14U;

	t52 = ((x565&x566)<<(x567%x568));

	if (t52 != 15135U) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x569 = 324776897;
	int32_t x570 = INT32_MIN;
	int32_t x571 = 13619;
	int32_t t53 = 5273082;

	t53 = ((x569&x570)<<(x571%x572));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x573 = INT16_MAX;
	volatile int32_t x574 = 616;
	int64_t x575 = 86940665588266LL;
	uint16_t x576 = 1U;
	int32_t t54 = -8;

	t54 = ((x573&x574)<<(x575%x576));

	if (t54 != 616) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x589 = 1;
	int64_t x590 = INT64_MAX;
	uint16_t x591 = 1U;
	static volatile int64_t t55 = 472412772041139LL;

	t55 = ((x589&x590)<<(x591%x592));

	if (t55 != 2LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x609 = INT64_MIN;
	static int16_t x611 = INT16_MAX;
	int16_t x612 = -43;

	t56 = ((x609&x610)<<(x611%x612));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x629 = INT64_MIN;
	uint16_t x632 = 1U;

	t57 = ((x629&x630)<<(x631%x632));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x633 = INT8_MAX;
	int64_t x635 = INT64_MIN;
	int16_t x636 = INT16_MIN;

	t58 = ((x633&x634)<<(x635%x636));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x665 = 57128683229570LLU;
	uint16_t x666 = UINT16_MAX;
	static uint16_t x667 = 410U;
	uint8_t x668 = 1U;
	volatile uint64_t t59 = 14081660459658595LLU;

	t59 = ((x665&x666)<<(x667%x668));

	if (t59 != 53634LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x673 = INT32_MIN;
	int32_t x675 = INT32_MIN;
	static int32_t x676 = 1;
	int32_t t60 = 13755;

	t60 = ((x673&x674)<<(x675%x676));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x677 = INT64_MIN;
	int16_t x680 = -1;
	int64_t t61 = 1747LL;

	t61 = ((x677&x678)<<(x679%x680));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x681 = INT16_MIN;
	uint64_t x682 = 2621444948930923201LLU;
	static volatile uint64_t t62 = 5LLU;

	t62 = ((x681&x682)<<(x683%x684));

	if (t62 != 2621444948930920448LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x693 = -1LL;
	int64_t x694 = 1LL;
	volatile int64_t x695 = INT64_MIN;
	volatile int64_t t63 = 27607027LL;

	t63 = ((x693&x694)<<(x695%x696));

	if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x710 = INT64_MIN;
	static volatile uint16_t x711 = 12U;
	int16_t x712 = INT16_MAX;
	static volatile int64_t t64 = 8LL;

	t64 = ((x709&x710)<<(x711%x712));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x729 = 492791395730LLU;
	uint16_t x730 = 240U;
	uint16_t x731 = 0U;
	volatile int64_t x732 = INT64_MAX;
	uint64_t t65 = 61009791417LLU;

	t65 = ((x729&x730)<<(x731%x732));

	if (t65 != 144LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x745 = 893;
	int16_t x746 = 90;
	uint16_t x747 = 2U;
	volatile int32_t t66 = 0;

	t66 = ((x745&x746)<<(x747%x748));

	if (t66 != 88) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x749 = INT32_MIN;
	volatile uint8_t x750 = 0U;
	volatile uint8_t x751 = 2U;
	volatile int32_t x752 = INT32_MIN;

	t67 = ((x749&x750)<<(x751%x752));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x769 = 73U;
	static int32_t x770 = INT32_MIN;
	int32_t x771 = INT32_MAX;
	int16_t x772 = -1;
	int32_t t68 = 986201371;

	t68 = ((x769&x770)<<(x771%x772));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x777 = 336U;
	volatile uint8_t x780 = UINT8_MAX;
	volatile uint32_t t69 = 9425188U;

	t69 = ((x777&x778)<<(x779%x780));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x781 = 1;
	int32_t x782 = -27;
	int64_t x783 = 3LL;
	volatile int32_t x784 = INT32_MAX;
	volatile int32_t t70 = 1;

	t70 = ((x781&x782)<<(x783%x784));

	if (t70 != 8) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x821 = 4230713264059725LLU;
	int16_t x822 = INT16_MIN;
	uint64_t t71 = 12LLU;

	t71 = ((x821&x822)<<(x823%x824));

	if (t71 != 33845706112368640LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x825 = 523046108U;
	int64_t x827 = INT64_MAX;
	int32_t x828 = -2;
	uint32_t t72 = 14U;

	t72 = ((x825&x826)<<(x827%x828));

	if (t72 != 1046092216U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x849 = 635983LL;
	int8_t x851 = INT8_MIN;
	int16_t x852 = -1;
	volatile int64_t t73 = 23404839169603LL;

	t73 = ((x849&x850)<<(x851%x852));

	if (t73 != 635904LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x873 = 1020;
	int8_t x874 = -21;
	int64_t x875 = INT64_MIN;
	int32_t x876 = INT32_MIN;
	static int32_t t74 = 195610575;

	t74 = ((x873&x874)<<(x875%x876));

	if (t74 != 1000) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x877 = INT64_MAX;
	volatile int8_t x878 = -1;
	static uint8_t x879 = 0U;
	uint64_t x880 = UINT64_MAX;
	volatile int64_t t75 = INT64_MAX;

	t75 = ((x877&x878)<<(x879%x880));

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x881 = UINT16_MAX;
	int32_t x882 = -1891740;
	uint16_t x883 = 1U;
	static int16_t x884 = 6;

	t76 = ((x881&x882)<<(x883%x884));

	if (t76 != 17608) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x893 = 761019365U;
	int32_t x895 = INT32_MIN;
	static int8_t x896 = INT8_MIN;
	volatile uint64_t t77 = 3LLU;

	t77 = ((x893&x894)<<(x895%x896));

	if (t77 != 761019365LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x902 = INT64_MIN;
	static int32_t x904 = -1;
	int64_t t78 = 3085309LL;

	t78 = ((x901&x902)<<(x903%x904));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x929 = 1577894664656857LLU;
	volatile int32_t x930 = -1;
	static volatile int64_t x931 = INT64_MIN;
	int8_t x932 = -1;
	uint64_t t79 = 235LLU;

	t79 = ((x929&x930)<<(x931%x932));

	if (t79 != 1577894664656857LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x933 = 2;
	volatile int64_t t80 = -94877299LL;

	t80 = ((x933&x934)<<(x935%x936));

	if (t80 != 4LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint16_t x973 = 5U;
	int16_t x976 = -1;
	volatile uint32_t t81 = 230181U;

	t81 = ((x973&x974)<<(x975%x976));

	if (t81 != 4U) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x985 = 0U;
	uint8_t x986 = 0U;
	static volatile uint8_t x987 = 8U;
	int8_t x988 = INT8_MIN;
	static volatile int32_t t82 = 13039067;

	t82 = ((x985&x986)<<(x987%x988));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x993 = INT32_MIN;
	static uint8_t x995 = 0U;
	volatile int32_t x996 = INT32_MIN;
	int32_t t83 = 36;

	t83 = ((x993&x994)<<(x995%x996));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x1009 = INT64_MAX;
	int16_t x1010 = 4;
	int16_t x1012 = -1;
	int64_t t84 = 41822883198352441LL;

	t84 = ((x1009&x1010)<<(x1011%x1012));

	if (t84 != 4LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x1013 = 6005538993LL;
	int8_t x1015 = INT8_MIN;
	static volatile int64_t t85 = -703669944088208234LL;

	t85 = ((x1013&x1014)<<(x1015%x1016));

	if (t85 != 31719584LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x1033 = INT64_MAX;
	static int32_t x1035 = INT32_MIN;
	static int8_t x1036 = INT8_MIN;
	int64_t t86 = 12375099LL;

	t86 = ((x1033&x1034)<<(x1035%x1036));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x1045 = -1;
	volatile uint64_t x1046 = UINT64_MAX;
	uint32_t x1047 = 18593U;

	t87 = ((x1045&x1046)<<(x1047%x1048));

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x1057 = INT8_MAX;
	int8_t x1058 = 0;
	int16_t x1059 = 28;
	int8_t x1060 = INT8_MAX;
	volatile int32_t t88 = 384501772;

	t88 = ((x1057&x1058)<<(x1059%x1060));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x1065 = INT64_MAX;
	int32_t x1066 = -1;
	static int8_t x1067 = INT8_MIN;
	volatile int64_t t89 = INT64_MAX;

	t89 = ((x1065&x1066)<<(x1067%x1068));

	if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x1073 = 1U;
	static int64_t x1074 = INT64_MIN;
	int32_t x1076 = -1;
	int64_t t90 = -100668841177LL;

	t90 = ((x1073&x1074)<<(x1075%x1076));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x1077 = -1;
	static uint16_t x1079 = 2U;
	uint8_t x1080 = UINT8_MAX;
	volatile int32_t t91 = 226674217;

	t91 = ((x1077&x1078)<<(x1079%x1080));

	if (t91 != 1020) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x1093 = INT8_MIN;
	static volatile uint16_t x1094 = 992U;
	int32_t t92 = 4;

	t92 = ((x1093&x1094)<<(x1095%x1096));

	if (t92 != 14336) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x1101 = INT64_MIN;
	int16_t x1102 = 1;
	volatile int64_t t93 = 501684600447787LL;

	t93 = ((x1101&x1102)<<(x1103%x1104));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x1105 = INT32_MAX;
	static uint8_t x1107 = 0U;
	static volatile int64_t t94 = -246649214800507LL;

	t94 = ((x1105&x1106)<<(x1107%x1108));

	if (t94 != 2147483647LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x1133 = 697;
	uint16_t x1135 = 0U;
	static uint32_t x1136 = 451370U;
	int32_t t95 = -3109;

	t95 = ((x1133&x1134)<<(x1135%x1136));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x1141 = INT32_MIN;
	static int64_t x1142 = 310LL;
	uint8_t x1143 = 60U;
	uint64_t x1144 = UINT64_MAX;
	volatile int64_t t96 = -3868099847LL;

	t96 = ((x1141&x1142)<<(x1143%x1144));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x1145 = 123U;
	volatile uint32_t x1146 = 43U;
	static volatile uint32_t x1147 = 762U;
	int16_t x1148 = 42;
	uint32_t t97 = 477714999U;

	t97 = ((x1145&x1146)<<(x1147%x1148));

	if (t97 != 2752U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x1189 = INT64_MIN;
	uint8_t x1190 = UINT8_MAX;
	static volatile uint16_t x1191 = 26U;
	int16_t x1192 = -1;

	t98 = ((x1189&x1190)<<(x1191%x1192));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x1197 = 325;
	static int16_t x1199 = INT16_MIN;
	int16_t x1200 = -2;
	volatile int64_t t99 = 3671412989260976LL;

	t99 = ((x1197&x1198)<<(x1199%x1200));

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

