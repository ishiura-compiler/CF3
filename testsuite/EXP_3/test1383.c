#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x12 = 3002082741224991LL;
volatile uint64_t t0 = 92221058595173793LLU;
int32_t x17 = INT32_MAX;
int8_t x18 = -1;
static uint64_t x33 = UINT64_MAX;
int64_t x36 = 233693580920551LL;
volatile uint64_t t2 = 447732357834LLU;
static int32_t t3 = 1;
static int32_t t4 = 57168605;
static uint64_t x57 = 1LLU;
static uint64_t t5 = 127946LLU;
volatile uint32_t x89 = 4U;
int64_t x95 = -35496LL;
int64_t t10 = 272227822LL;
volatile int8_t x101 = INT8_MIN;
volatile uint32_t x104 = 39058574U;
int8_t x147 = -1;
uint8_t x148 = 61U;
static volatile int16_t x163 = -180;
int32_t t15 = -20;
int64_t x175 = -429774162005LL;
volatile uint32_t t16 = 6U;
uint16_t x186 = 0U;
uint8_t x187 = 3U;
uint16_t x198 = 78U;
volatile int64_t x199 = -519170672274729141LL;
static volatile int32_t x215 = INT32_MIN;
uint64_t t24 = 8155871LLU;
int16_t x258 = INT16_MAX;
int64_t x294 = 9960LL;
static int64_t t28 = -138161LL;
volatile uint32_t x334 = 2902922U;
static int16_t x335 = INT16_MAX;
int16_t x381 = INT16_MAX;
static int16_t x429 = 886;
volatile int16_t x491 = INT16_MIN;
uint32_t t42 = 19736678U;
uint8_t x494 = 0U;
uint16_t x528 = UINT16_MAX;
int32_t x542 = 0;
int32_t x556 = 12672;
volatile uint64_t x582 = 9688825LLU;
volatile uint64_t t51 = 35458960151LLU;
int8_t x585 = INT8_MAX;
uint32_t x586 = 1356U;
int64_t x587 = INT64_MIN;
uint8_t x590 = 69U;
uint16_t x592 = 6502U;
volatile int8_t x609 = -1;
static int64_t t56 = -13012849294LL;
uint16_t x628 = 8513U;
int32_t t57 = 1;
int64_t x638 = 1151289912921LL;
uint16_t x643 = 124U;
static uint32_t x660 = 2U;
int64_t x672 = INT64_MAX;
static volatile int16_t x677 = -1;
int32_t x687 = -1;
int32_t t64 = -199778;
static volatile int8_t x695 = -16;
uint64_t x706 = UINT64_MAX;
int16_t x708 = INT16_MAX;
volatile uint64_t t67 = 44702230268547737LLU;
int16_t x767 = INT16_MIN;
uint32_t t71 = 43596961U;
uint8_t x789 = UINT8_MAX;
uint64_t x797 = UINT64_MAX;
int64_t x822 = -66111723329LL;
int64_t t77 = 63310LL;
int64_t x845 = 113LL;
uint32_t x846 = UINT32_MAX;
uint64_t x847 = 98046396LLU;
int64_t t79 = 20439415598LL;
int16_t x851 = INT16_MIN;
int64_t x852 = -267LL;
volatile uint32_t x863 = 1043760599U;
int8_t x864 = INT8_MIN;
static int8_t x878 = -39;
volatile int32_t t85 = 4;
int32_t x973 = INT32_MAX;
uint64_t t87 = 6559141237713695758LLU;
volatile uint8_t x979 = 1U;
static volatile int32_t t88 = 4;
static uint16_t x993 = 30124U;
uint32_t x1006 = UINT32_MAX;
int64_t x1016 = 14873731LL;
uint16_t x1028 = 398U;
int32_t x1051 = 186688;
int32_t t99 = 0;


void f0(void) {
	uint64_t x9 = UINT64_MAX;
	int16_t x10 = INT16_MAX;
	int32_t x11 = INT32_MAX;

	t0 = ((x9*x10)%(x11<x12));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x19 = INT32_MIN;
	int64_t x20 = -1LL;
	int32_t t1 = 525702598;

	t1 = ((x17*x18)%(x19<x20));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x34 = 2U;
	int64_t x35 = INT64_MIN;

	t2 = ((x33*x34)%(x35<x36));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint16_t x37 = 43U;
	int16_t x38 = -1;
	int8_t x39 = INT8_MAX;
	static uint64_t x40 = UINT64_MAX;

	t3 = ((x37*x38)%(x39<x40));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x41 = INT8_MIN;
	int16_t x42 = INT16_MIN;
	int64_t x43 = INT64_MIN;
	int32_t x44 = INT32_MAX;

	t4 = ((x41*x42)%(x43<x44));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x58 = -1;
	int32_t x59 = -1;
	uint16_t x60 = UINT16_MAX;

	t5 = ((x57*x58)%(x59<x60));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x61 = 8192U;
	uint64_t x62 = 2144660001048709041LLU;
	volatile uint32_t x63 = 15U;
	int64_t x64 = 1049707601251587LL;
	uint64_t t6 = 16704372437816LLU;

	t6 = ((x61*x62)%(x63<x64));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x73 = -709264933LL;
	int64_t x74 = 9462065853LL;
	int32_t x75 = INT32_MIN;
	int16_t x76 = 1843;
	int64_t t7 = -449365090427654825LL;

	t7 = ((x73*x74)%(x75<x76));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x81 = 5027U;
	static uint64_t x82 = 83018LLU;
	int64_t x83 = -252228490LL;
	static int64_t x84 = -8LL;
	static volatile uint64_t t8 = 384868176573LLU;

	t8 = ((x81*x82)%(x83<x84));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x90 = INT32_MIN;
	int32_t x91 = INT32_MIN;
	volatile int16_t x92 = -501;
	static volatile uint32_t t9 = 2062969U;

	t9 = ((x89*x90)%(x91<x92));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x93 = 1U;
	int64_t x94 = INT64_MIN;
	uint32_t x96 = UINT32_MAX;

	t10 = ((x93*x94)%(x95<x96));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x102 = UINT16_MAX;
	uint8_t x103 = 2U;
	int32_t t11 = -212;

	t11 = ((x101*x102)%(x103<x104));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x113 = 111947902484LLU;
	int16_t x114 = 122;
	int16_t x115 = -249;
	volatile int64_t x116 = 38746504309964LL;
	volatile uint64_t t12 = 1272296599810898152LLU;

	t12 = ((x113*x114)%(x115<x116));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x141 = INT16_MIN;
	uint32_t x142 = UINT32_MAX;
	int16_t x143 = -1;
	int8_t x144 = INT8_MAX;
	uint32_t t13 = 683504749U;

	t13 = ((x141*x142)%(x143<x144));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x145 = -1;
	volatile uint32_t x146 = UINT32_MAX;
	static uint32_t t14 = 154U;

	t14 = ((x145*x146)%(x147<x148));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x161 = -3;
	int16_t x162 = 32;
	volatile int16_t x164 = -4;

	t15 = ((x161*x162)%(x163<x164));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x173 = UINT32_MAX;
	uint32_t x174 = 25809U;
	volatile int64_t x176 = -1LL;

	t16 = ((x173*x174)%(x175<x176));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x181 = 0U;
	int8_t x182 = 1;
	int64_t x183 = INT64_MIN;
	uint64_t x184 = UINT64_MAX;
	static volatile int32_t t17 = 12250491;

	t17 = ((x181*x182)%(x183<x184));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x185 = INT16_MIN;
	volatile int16_t x188 = INT16_MAX;
	volatile int32_t t18 = -12;

	t18 = ((x185*x186)%(x187<x188));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x193 = INT16_MIN;
	uint8_t x194 = UINT8_MAX;
	uint64_t x195 = 11912LLU;
	int8_t x196 = INT8_MIN;
	int32_t t19 = -6229;

	t19 = ((x193*x194)%(x195<x196));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x197 = 20979622U;
	uint8_t x200 = 1U;
	static uint32_t t20 = 52U;

	t20 = ((x197*x198)%(x199<x200));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x213 = -1;
	int16_t x214 = -1;
	uint16_t x216 = 0U;
	static int32_t t21 = 33171;

	t21 = ((x213*x214)%(x215<x216));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x225 = INT16_MIN;
	int16_t x226 = INT16_MIN;
	volatile uint32_t x227 = 1686108U;
	static int64_t x228 = INT64_MAX;
	int32_t t22 = -183;

	t22 = ((x225*x226)%(x227<x228));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x229 = 1174LLU;
	uint64_t x230 = UINT64_MAX;
	static volatile int16_t x231 = -3;
	uint16_t x232 = 458U;
	uint64_t t23 = 0LLU;

	t23 = ((x229*x230)%(x231<x232));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x233 = UINT64_MAX;
	static uint32_t x234 = 10734244U;
	int64_t x235 = -1LL;
	static uint8_t x236 = 7U;

	t24 = ((x233*x234)%(x235<x236));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x257 = UINT64_MAX;
	static uint32_t x259 = 9U;
	int64_t x260 = 292LL;
	uint64_t t25 = 8056165LLU;

	t25 = ((x257*x258)%(x259<x260));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x261 = UINT16_MAX;
	uint8_t x262 = UINT8_MAX;
	uint16_t x263 = 56U;
	int32_t x264 = 204576068;
	volatile int32_t t26 = 57;

	t26 = ((x261*x262)%(x263<x264));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x281 = -1LL;
	int16_t x282 = INT16_MIN;
	int16_t x283 = INT16_MIN;
	int32_t x284 = INT32_MAX;
	volatile int64_t t27 = -5LL;

	t27 = ((x281*x282)%(x283<x284));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x293 = -1;
	static int8_t x295 = -1;
	static int32_t x296 = 125853;

	t28 = ((x293*x294)%(x295<x296));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x333 = UINT32_MAX;
	uint64_t x336 = 67130849492472LLU;
	uint32_t t29 = 0U;

	t29 = ((x333*x334)%(x335<x336));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x341 = -14797;
	int32_t x342 = -1;
	uint8_t x343 = UINT8_MAX;
	int16_t x344 = INT16_MAX;
	int32_t t30 = 46508;

	t30 = ((x341*x342)%(x343<x344));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x369 = 15U;
	static volatile int32_t x370 = 66435;
	static volatile int32_t x371 = INT32_MIN;
	int8_t x372 = INT8_MAX;
	uint32_t t31 = 16990U;

	t31 = ((x369*x370)%(x371<x372));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x377 = 47U;
	volatile int16_t x378 = 17;
	uint32_t x379 = 1712690948U;
	static int32_t x380 = -1;
	volatile int32_t t32 = -135;

	t32 = ((x377*x378)%(x379<x380));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x382 = 13;
	int8_t x383 = INT8_MAX;
	int16_t x384 = INT16_MAX;
	int32_t t33 = 116;

	t33 = ((x381*x382)%(x383<x384));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x397 = 26U;
	uint8_t x398 = 117U;
	int64_t x399 = INT64_MIN;
	uint8_t x400 = 5U;
	int32_t t34 = 12847;

	t34 = ((x397*x398)%(x399<x400));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x413 = 1U;
	volatile uint16_t x414 = UINT16_MAX;
	int64_t x415 = INT64_MIN;
	int16_t x416 = -1;
	int32_t t35 = 1;

	t35 = ((x413*x414)%(x415<x416));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x417 = UINT32_MAX;
	volatile int8_t x418 = INT8_MIN;
	int32_t x419 = -677547129;
	int64_t x420 = -1LL;
	uint32_t t36 = 136341U;

	t36 = ((x417*x418)%(x419<x420));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x421 = -1LL;
	int8_t x422 = INT8_MAX;
	uint8_t x423 = 0U;
	static volatile uint64_t x424 = 255866LLU;
	int64_t t37 = 13373031079LL;

	t37 = ((x421*x422)%(x423<x424));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x430 = -1;
	int32_t x431 = 10742;
	volatile uint64_t x432 = 841810088832259988LLU;
	volatile int32_t t38 = -432267;

	t38 = ((x429*x430)%(x431<x432));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x441 = INT32_MAX;
	volatile uint32_t x442 = UINT32_MAX;
	int16_t x443 = INT16_MIN;
	int32_t x444 = -22;
	volatile uint32_t t39 = 1U;

	t39 = ((x441*x442)%(x443<x444));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x449 = 1347875U;
	uint16_t x450 = 88U;
	int8_t x451 = 1;
	uint64_t x452 = UINT64_MAX;
	uint32_t t40 = 426693244U;

	t40 = ((x449*x450)%(x451<x452));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x457 = 0LL;
	static int32_t x458 = INT32_MAX;
	int16_t x459 = -235;
	volatile int16_t x460 = INT16_MAX;
	int64_t t41 = 4674709LL;

	t41 = ((x457*x458)%(x459<x460));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x489 = INT16_MIN;
	static uint32_t x490 = UINT32_MAX;
	int64_t x492 = 29758033350531436LL;

	t42 = ((x489*x490)%(x491<x492));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x493 = UINT64_MAX;
	static uint32_t x495 = 24U;
	int16_t x496 = -1;
	static uint64_t t43 = 1LLU;

	t43 = ((x493*x494)%(x495<x496));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x497 = 6330719683LL;
	int32_t x498 = -1697461;
	static int8_t x499 = INT8_MAX;
	uint64_t x500 = UINT64_MAX;
	volatile int64_t t44 = -1LL;

	t44 = ((x497*x498)%(x499<x500));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x505 = 1361206LLU;
	static volatile int32_t x506 = INT32_MAX;
	uint8_t x507 = UINT8_MAX;
	int16_t x508 = INT16_MAX;
	volatile uint64_t t45 = 9LLU;

	t45 = ((x505*x506)%(x507<x508));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x509 = 1;
	static uint16_t x510 = 24U;
	int16_t x511 = INT16_MAX;
	uint32_t x512 = 65005979U;
	volatile int32_t t46 = 5;

	t46 = ((x509*x510)%(x511<x512));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x525 = 362U;
	int32_t x526 = -1;
	int8_t x527 = -4;
	uint32_t t47 = 8353548U;

	t47 = ((x525*x526)%(x527<x528));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x541 = -1;
	int32_t x543 = INT32_MIN;
	int32_t x544 = -9;
	static volatile int32_t t48 = 295600835;

	t48 = ((x541*x542)%(x543<x544));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x553 = INT16_MAX;
	volatile uint16_t x554 = 181U;
	volatile int8_t x555 = 1;
	int32_t t49 = 604996738;

	t49 = ((x553*x554)%(x555<x556));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x577 = 88;
	static uint32_t x578 = 1001U;
	uint8_t x579 = 12U;
	uint32_t x580 = 1018U;
	volatile uint32_t t50 = 53227U;

	t50 = ((x577*x578)%(x579<x580));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x581 = 0U;
	int32_t x583 = INT32_MAX;
	uint64_t x584 = UINT64_MAX;

	t51 = ((x581*x582)%(x583<x584));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x588 = INT32_MIN;
	volatile uint32_t t52 = 957927U;

	t52 = ((x585*x586)%(x587<x588));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x589 = UINT64_MAX;
	uint8_t x591 = UINT8_MAX;
	volatile uint64_t t53 = 3239951LLU;

	t53 = ((x589*x590)%(x591<x592));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x610 = -52378;
	volatile int32_t x611 = INT32_MIN;
	static uint8_t x612 = 1U;
	volatile int32_t t54 = -4339607;

	t54 = ((x609*x610)%(x611<x612));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x617 = 4157968210LLU;
	uint16_t x618 = UINT16_MAX;
	static uint16_t x619 = 451U;
	int64_t x620 = INT64_MAX;
	static uint64_t t55 = 72999LLU;

	t55 = ((x617*x618)%(x619<x620));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x621 = -1LL;
	int32_t x622 = INT32_MIN;
	static uint64_t x623 = 624590804644LLU;
	static int8_t x624 = -1;

	t56 = ((x621*x622)%(x623<x624));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x625 = -12;
	volatile uint16_t x626 = 0U;
	int32_t x627 = -1;

	t57 = ((x625*x626)%(x627<x628));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x637 = -76LL;
	int16_t x639 = -12;
	volatile uint16_t x640 = 26881U;
	int64_t t58 = -2396310876634750728LL;

	t58 = ((x637*x638)%(x639<x640));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x641 = 14201U;
	int32_t x642 = -3;
	int8_t x644 = INT8_MAX;
	static volatile int32_t t59 = -20449301;

	t59 = ((x641*x642)%(x643<x644));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x657 = INT8_MIN;
	int16_t x658 = INT16_MIN;
	volatile int64_t x659 = -1LL;
	int32_t t60 = 172;

	t60 = ((x657*x658)%(x659<x660));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x661 = UINT16_MAX;
	int32_t x662 = -1;
	uint64_t x663 = 41728LLU;
	int32_t x664 = -564647;
	volatile int32_t t61 = 1;

	t61 = ((x661*x662)%(x663<x664));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x669 = -1LL;
	int8_t x670 = 15;
	int32_t x671 = 76323788;
	volatile int64_t t62 = -1078292440237176328LL;

	t62 = ((x669*x670)%(x671<x672));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x678 = 25993655032415794LLU;
	int64_t x679 = 0LL;
	static volatile int32_t x680 = INT32_MAX;
	static volatile uint64_t t63 = 5297LLU;

	t63 = ((x677*x678)%(x679<x680));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x685 = 12U;
	uint16_t x686 = 2002U;
	static uint16_t x688 = 1413U;

	t64 = ((x685*x686)%(x687<x688));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x693 = -1;
	static int16_t x694 = INT16_MIN;
	uint16_t x696 = UINT16_MAX;
	int32_t t65 = -1523551;

	t65 = ((x693*x694)%(x695<x696));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x701 = -12710238029933LL;
	volatile int16_t x702 = 1;
	volatile uint32_t x703 = 455484604U;
	int64_t x704 = 489887440333421LL;
	static volatile int64_t t66 = -2817218428LL;

	t66 = ((x701*x702)%(x703<x704));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x705 = 0U;
	static uint8_t x707 = 108U;

	t67 = ((x705*x706)%(x707<x708));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x717 = 1400U;
	int8_t x718 = 3;
	int32_t x719 = INT32_MIN;
	int64_t x720 = INT64_MAX;
	volatile int32_t t68 = -318215;

	t68 = ((x717*x718)%(x719<x720));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x741 = INT16_MIN;
	int16_t x742 = 1;
	static int8_t x743 = 0;
	int64_t x744 = 465074421188712474LL;
	int32_t t69 = 1;

	t69 = ((x741*x742)%(x743<x744));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x757 = -78663584250LL;
	int16_t x758 = INT16_MAX;
	volatile int32_t x759 = -1;
	volatile uint8_t x760 = UINT8_MAX;
	static volatile int64_t t70 = 364LL;

	t70 = ((x757*x758)%(x759<x760));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x765 = 62U;
	uint32_t x766 = 30772187U;
	uint8_t x768 = UINT8_MAX;

	t71 = ((x765*x766)%(x767<x768));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x781 = INT32_MAX;
	int16_t x782 = -1;
	volatile int16_t x783 = 118;
	int16_t x784 = INT16_MAX;
	volatile int32_t t72 = 2144;

	t72 = ((x781*x782)%(x783<x784));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x790 = 2U;
	static uint8_t x791 = 6U;
	int8_t x792 = INT8_MAX;
	volatile int32_t t73 = -88556144;

	t73 = ((x789*x790)%(x791<x792));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x798 = 2303402LLU;
	int8_t x799 = INT8_MIN;
	int16_t x800 = INT16_MAX;
	volatile uint64_t t74 = 394LLU;

	t74 = ((x797*x798)%(x799<x800));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x805 = -4;
	static int64_t x806 = 2LL;
	volatile uint32_t x807 = 4124U;
	int16_t x808 = 5093;
	static int64_t t75 = 1967106304LL;

	t75 = ((x805*x806)%(x807<x808));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x817 = 63LL;
	uint64_t x818 = UINT64_MAX;
	int32_t x819 = -1;
	volatile int16_t x820 = INT16_MAX;
	static volatile uint64_t t76 = 3994LLU;

	t76 = ((x817*x818)%(x819<x820));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x821 = -1LL;
	static int32_t x823 = 0;
	static int16_t x824 = INT16_MAX;

	t77 = ((x821*x822)%(x823<x824));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x841 = UINT16_MAX;
	volatile uint32_t x842 = 2U;
	int64_t x843 = INT64_MIN;
	volatile int16_t x844 = -1;
	uint32_t t78 = 3U;

	t78 = ((x841*x842)%(x843<x844));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x848 = INT16_MIN;

	t79 = ((x845*x846)%(x847<x848));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x849 = INT16_MIN;
	uint8_t x850 = UINT8_MAX;
	static volatile int32_t t80 = 10;

	t80 = ((x849*x850)%(x851<x852));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int8_t x861 = 29;
	volatile uint32_t x862 = UINT32_MAX;
	uint32_t t81 = 0U;

	t81 = ((x861*x862)%(x863<x864));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x873 = -1LL;
	uint32_t x874 = UINT32_MAX;
	uint8_t x875 = 21U;
	uint64_t x876 = 764LLU;
	static int64_t t82 = -11476LL;

	t82 = ((x873*x874)%(x875<x876));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x877 = 167409582U;
	static volatile int32_t x879 = -1;
	static int8_t x880 = 18;
	volatile uint32_t t83 = 232U;

	t83 = ((x877*x878)%(x879<x880));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x897 = UINT8_MAX;
	int32_t x898 = 20;
	volatile int64_t x899 = -2044514LL;
	uint32_t x900 = 11458U;
	volatile int32_t t84 = 390;

	t84 = ((x897*x898)%(x899<x900));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x929 = -1;
	static int8_t x930 = 2;
	volatile int8_t x931 = INT8_MIN;
	int32_t x932 = -1;

	t85 = ((x929*x930)%(x931<x932));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x949 = 0;
	volatile uint32_t x950 = 450120904U;
	uint32_t x951 = 53U;
	uint16_t x952 = UINT16_MAX;
	static uint32_t t86 = 0U;

	t86 = ((x949*x950)%(x951<x952));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x974 = 3783874763790254675LLU;
	uint32_t x975 = 1U;
	int32_t x976 = INT32_MAX;

	t87 = ((x973*x974)%(x975<x976));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x977 = 9;
	volatile uint8_t x978 = 5U;
	static int16_t x980 = 6;

	t88 = ((x977*x978)%(x979<x980));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x985 = 2415570LLU;
	static int16_t x986 = 9431;
	int32_t x987 = INT32_MIN;
	int16_t x988 = -1;
	uint64_t t89 = 6249208796920454110LLU;

	t89 = ((x985*x986)%(x987<x988));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x994 = 2;
	int64_t x995 = INT64_MIN;
	volatile int32_t x996 = INT32_MIN;
	volatile int32_t t90 = -9123;

	t90 = ((x993*x994)%(x995<x996));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x1005 = INT16_MIN;
	int16_t x1007 = INT16_MIN;
	int32_t x1008 = -27556;
	volatile uint32_t t91 = 7U;

	t91 = ((x1005*x1006)%(x1007<x1008));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x1013 = 8U;
	int64_t x1014 = -44362817833208253LL;
	static int64_t x1015 = INT64_MIN;
	int64_t t92 = -4099134754586866LL;

	t92 = ((x1013*x1014)%(x1015<x1016));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x1025 = INT8_MIN;
	static int64_t x1026 = -1LL;
	int8_t x1027 = INT8_MIN;
	int64_t t93 = -60LL;

	t93 = ((x1025*x1026)%(x1027<x1028));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x1037 = INT16_MIN;
	uint32_t x1038 = 123U;
	int64_t x1039 = 38LL;
	int64_t x1040 = 2774587717LL;
	volatile uint32_t t94 = 3215U;

	t94 = ((x1037*x1038)%(x1039<x1040));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x1049 = INT8_MAX;
	static uint32_t x1050 = 13150027U;
	int64_t x1052 = 115782450LL;
	volatile uint32_t t95 = 205U;

	t95 = ((x1049*x1050)%(x1051<x1052));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x1101 = -2287;
	volatile int32_t x1102 = 497;
	static uint32_t x1103 = 63U;
	int32_t x1104 = -12373381;
	volatile int32_t t96 = 124504556;

	t96 = ((x1101*x1102)%(x1103<x1104));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x1109 = INT16_MIN;
	int8_t x1110 = INT8_MIN;
	uint32_t x1111 = 17U;
	int16_t x1112 = INT16_MIN;
	volatile int32_t t97 = 1200099;

	t97 = ((x1109*x1110)%(x1111<x1112));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x1117 = 3785LLU;
	static int8_t x1118 = -1;
	int8_t x1119 = INT8_MIN;
	int64_t x1120 = -1LL;
	static volatile uint64_t t98 = 1LLU;

	t98 = ((x1117*x1118)%(x1119<x1120));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x1129 = INT16_MAX;
	volatile uint8_t x1130 = UINT8_MAX;
	volatile int8_t x1131 = INT8_MIN;
	int8_t x1132 = INT8_MAX;

	t99 = ((x1129*x1130)%(x1131<x1132));

	if (t99 != 0) { NG(); } else { ; }
	
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

