#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x133 = 43895306U;
int64_t x135 = -1LL;
volatile int8_t x210 = -9;
static int8_t x222 = 1;
volatile int8_t x223 = -1;
int8_t x228 = -60;
volatile uint64_t t5 = 439172752911LLU;
volatile uint64_t x241 = UINT64_MAX;
int8_t x254 = 13;
volatile int32_t t7 = 486691;
volatile uint8_t x279 = 18U;
uint16_t x297 = 4U;
static volatile int32_t t11 = 371618;
int64_t x302 = INT64_MIN;
uint8_t x337 = UINT8_MAX;
uint8_t x345 = UINT8_MAX;
volatile int32_t x346 = INT32_MIN;
static uint32_t x348 = 404362U;
volatile int32_t x358 = -1355347;
volatile uint64_t t18 = 399887032243LLU;
uint32_t x375 = 3974U;
uint64_t x379 = 163027613710522065LLU;
int64_t x382 = 30402LL;
int32_t x388 = INT32_MIN;
int16_t x390 = 7;
int32_t x408 = INT32_MIN;
static volatile int32_t t27 = 666894;
int32_t x462 = INT32_MAX;
int16_t x468 = -7394;
int8_t x471 = 1;
int32_t t30 = 1;
uint16_t x476 = 1150U;
volatile int64_t t31 = INT64_MAX;
int8_t x477 = INT8_MAX;
int64_t x479 = -1LL;
uint16_t x480 = 171U;
static int32_t x481 = INT32_MAX;
uint32_t x484 = 181120U;
static int32_t x488 = INT32_MIN;
static volatile uint64_t x501 = 18221658965988273LLU;
static volatile int32_t x502 = -252925;
uint16_t x504 = UINT16_MAX;
uint16_t x541 = 38U;
uint16_t x543 = 173U;
volatile uint32_t x581 = 9419424U;
static volatile int32_t t40 = -361653;
int64_t t43 = 9115338LL;
uint64_t x677 = 7295LLU;
volatile uint8_t x722 = 113U;
int8_t x727 = INT8_MAX;
static int64_t x728 = INT64_MAX;
static volatile int32_t t53 = 987147159;
volatile uint16_t x774 = 3U;
int32_t t58 = -39577;
volatile uint16_t x877 = UINT16_MAX;
int32_t x880 = 576422;
static uint32_t x891 = 1U;
static int32_t t64 = -59064;
volatile uint8_t x897 = 6U;
uint16_t x898 = 269U;
static volatile int16_t x903 = -1;
uint32_t x924 = 2359U;
int32_t x959 = -1;
int64_t x960 = -1LL;
volatile int32_t t71 = 300;
volatile uint32_t x966 = 1U;
int16_t x967 = INT16_MAX;
uint64_t t73 = UINT64_MAX;
static int64_t x1002 = INT64_MAX;
int32_t x1014 = -1;
int16_t x1015 = -1;
static uint8_t x1016 = 14U;
uint8_t x1030 = 2U;
volatile int32_t t79 = -1;
volatile int16_t x1050 = -1;
int8_t x1052 = -13;
volatile int64_t t80 = -21775317LL;
static volatile uint32_t x1064 = 5243U;
static uint32_t x1071 = UINT32_MAX;
uint16_t x1075 = 0U;
volatile int32_t t84 = 1;
static volatile int8_t x1110 = INT8_MAX;
static uint32_t t85 = UINT32_MAX;
int8_t x1232 = 6;
static uint8_t x1249 = UINT8_MAX;
int8_t x1250 = INT8_MIN;
int32_t x1258 = INT32_MIN;
int8_t x1263 = INT8_MIN;
static uint8_t x1264 = UINT8_MAX;
volatile int32_t t96 = 85490;
int8_t x1314 = INT8_MIN;


void f0(void) {
	volatile uint64_t x21 = 82546928479LLU;
	uint8_t x22 = UINT8_MAX;
	uint8_t x23 = UINT8_MAX;
	int64_t x24 = 254016285LL;
	uint64_t t0 = 6319391337872623923LLU;

	t0 = (x21>>(x22*(x23/x24)));

	if (t0 != 82546928479LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x85 = 0U;
	static int16_t x86 = 0;
	static int32_t x87 = INT32_MIN;
	int16_t x88 = -239;
	volatile int32_t t1 = 20;

	t1 = (x85>>(x86*(x87/x88)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x134 = 365693082986LLU;
	int32_t x136 = INT32_MIN;
	volatile uint32_t t2 = 93676693U;

	t2 = (x133>>(x134*(x135/x136)));

	if (t2 != 43895306U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x209 = 0;
	static uint16_t x211 = UINT16_MAX;
	static int64_t x212 = INT64_MIN;
	int32_t t3 = -1;

	t3 = (x209>>(x210*(x211/x212)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x221 = INT8_MAX;
	int8_t x224 = -1;
	volatile int32_t t4 = 11593169;

	t4 = (x221>>(x222*(x223/x224)));

	if (t4 != 63) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x225 = 377LLU;
	volatile uint8_t x226 = 0U;
	static volatile int16_t x227 = INT16_MAX;

	t5 = (x225>>(x226*(x227/x228)));

	if (t5 != 377LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x242 = 2;
	uint64_t x243 = 1409086421611266LLU;
	static uint64_t x244 = UINT64_MAX;
	volatile uint64_t t6 = UINT64_MAX;

	t6 = (x241>>(x242*(x243/x244)));

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x253 = 0U;
	static uint64_t x255 = UINT64_MAX;
	volatile int32_t x256 = -2;

	t7 = (x253>>(x254*(x255/x256)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x277 = INT16_MAX;
	static int64_t x278 = INT64_MIN;
	static int16_t x280 = 1284;
	int32_t t8 = -25036;

	t8 = (x277>>(x278*(x279/x280)));

	if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x281 = 97626LL;
	static int16_t x282 = 3447;
	int8_t x283 = INT8_MAX;
	int8_t x284 = INT8_MIN;
	int64_t t9 = 28909200060LL;

	t9 = (x281>>(x282*(x283/x284)));

	if (t9 != 97626LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x285 = INT16_MAX;
	int64_t x286 = INT64_MIN;
	int32_t x287 = INT32_MIN;
	uint64_t x288 = UINT64_MAX;
	volatile int32_t t10 = -683448302;

	t10 = (x285>>(x286*(x287/x288)));

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x298 = 20;
	volatile uint64_t x299 = 39652938305336LLU;
	int64_t x300 = INT64_MIN;

	t11 = (x297>>(x298*(x299/x300)));

	if (t11 != 4) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x301 = 5221U;
	uint16_t x303 = 28U;
	int8_t x304 = INT8_MAX;
	uint32_t t12 = 1U;

	t12 = (x301>>(x302*(x303/x304)));

	if (t12 != 5221U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x333 = INT32_MAX;
	static int8_t x334 = -2;
	volatile int16_t x335 = INT16_MIN;
	static int32_t x336 = INT32_MIN;
	static volatile int32_t t13 = INT32_MAX;

	t13 = (x333>>(x334*(x335/x336)));

	if (t13 != INT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x338 = 11U;
	static uint32_t x339 = UINT32_MAX;
	int8_t x340 = -60;
	static volatile int32_t t14 = -5692273;

	t14 = (x337>>(x338*(x339/x340)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x341 = UINT8_MAX;
	uint32_t x342 = UINT32_MAX;
	uint64_t x343 = 33802401409LLU;
	static int32_t x344 = -4825;
	int32_t t15 = 695;

	t15 = (x341>>(x342*(x343/x344)));

	if (t15 != 255) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x347 = -1LL;
	volatile int32_t t16 = 9;

	t16 = (x345>>(x346*(x347/x348)));

	if (t16 != 255) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x349 = INT8_MAX;
	uint16_t x350 = 10783U;
	static int64_t x351 = -1LL;
	uint32_t x352 = UINT32_MAX;
	int32_t t17 = 612333;

	t17 = (x349>>(x350*(x351/x352)));

	if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x357 = 65734156091LLU;
	static int32_t x359 = -1;
	int64_t x360 = INT64_MIN;

	t18 = (x357>>(x358*(x359/x360)));

	if (t18 != 65734156091LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x373 = 13U;
	static int8_t x374 = INT8_MAX;
	volatile int64_t x376 = -5070459215LL;
	volatile int32_t t19 = 603744;

	t19 = (x373>>(x374*(x375/x376)));

	if (t19 != 13) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x377 = 30;
	static uint64_t x378 = UINT64_MAX;
	int8_t x380 = -1;
	volatile int32_t t20 = -26;

	t20 = (x377>>(x378*(x379/x380)));

	if (t20 != 30) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x381 = 5961286U;
	uint8_t x383 = UINT8_MAX;
	volatile int32_t x384 = -2526306;
	volatile uint32_t t21 = 7216U;

	t21 = (x381>>(x382*(x383/x384)));

	if (t21 != 5961286U) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x385 = UINT64_MAX;
	volatile int8_t x386 = -1;
	int16_t x387 = INT16_MIN;
	uint64_t t22 = UINT64_MAX;

	t22 = (x385>>(x386*(x387/x388)));

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x389 = 1U;
	volatile uint8_t x391 = 1U;
	int16_t x392 = -11;
	volatile uint32_t t23 = 127525466U;

	t23 = (x389>>(x390*(x391/x392)));

	if (t23 != 1U) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x405 = UINT32_MAX;
	volatile int16_t x406 = 1;
	static uint8_t x407 = UINT8_MAX;
	uint32_t t24 = UINT32_MAX;

	t24 = (x405>>(x406*(x407/x408)));

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x437 = UINT32_MAX;
	static volatile uint32_t x438 = 74143913U;
	uint32_t x439 = 52684932U;
	int64_t x440 = INT64_MIN;
	volatile uint32_t t25 = UINT32_MAX;

	t25 = (x437>>(x438*(x439/x440)));

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x441 = 1156LL;
	int64_t x442 = 1703629989LL;
	int16_t x443 = INT16_MIN;
	uint16_t x444 = UINT16_MAX;
	int64_t t26 = -58319947360388797LL;

	t26 = (x441>>(x442*(x443/x444)));

	if (t26 != 1156LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x445 = 3042U;
	volatile uint8_t x446 = UINT8_MAX;
	static int32_t x447 = INT32_MIN;
	static int64_t x448 = INT64_MIN;

	t27 = (x445>>(x446*(x447/x448)));

	if (t27 != 3042) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x461 = 938187077008LLU;
	uint8_t x463 = 12U;
	static uint32_t x464 = 1261963628U;
	volatile uint64_t t28 = 80746935210LLU;

	t28 = (x461>>(x462*(x463/x464)));

	if (t28 != 938187077008LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x465 = 23;
	int16_t x466 = 3876;
	int16_t x467 = 122;
	int32_t t29 = 14893791;

	t29 = (x465>>(x466*(x467/x468)));

	if (t29 != 23) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x469 = 100U;
	int32_t x470 = INT32_MAX;
	int8_t x472 = INT8_MIN;

	t30 = (x469>>(x470*(x471/x472)));

	if (t30 != 100) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x473 = INT64_MAX;
	int32_t x474 = -1;
	int8_t x475 = INT8_MAX;

	t31 = (x473>>(x474*(x475/x476)));

	if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x478 = -1LL;
	int32_t t32 = 114;

	t32 = (x477>>(x478*(x479/x480)));

	if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x482 = UINT64_MAX;
	int64_t x483 = 1274LL;
	volatile int32_t t33 = INT32_MAX;

	t33 = (x481>>(x482*(x483/x484)));

	if (t33 != INT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x485 = 28U;
	int64_t x486 = INT64_MIN;
	static uint16_t x487 = UINT16_MAX;
	volatile int32_t t34 = -43356;

	t34 = (x485>>(x486*(x487/x488)));

	if (t34 != 28) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x493 = INT8_MAX;
	static uint32_t x494 = UINT32_MAX;
	static int8_t x495 = INT8_MIN;
	static uint8_t x496 = 33U;
	int32_t t35 = -1;

	t35 = (x493>>(x494*(x495/x496)));

	if (t35 != 15) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x503 = 0U;
	volatile uint64_t t36 = 65081857509529LLU;

	t36 = (x501>>(x502*(x503/x504)));

	if (t36 != 18221658965988273LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x509 = INT64_MAX;
	int32_t x510 = INT32_MAX;
	int16_t x511 = INT16_MAX;
	uint64_t x512 = UINT64_MAX;
	int64_t t37 = INT64_MAX;

	t37 = (x509>>(x510*(x511/x512)));

	if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x542 = 10;
	int32_t x544 = INT32_MAX;
	int32_t t38 = 7780;

	t38 = (x541>>(x542*(x543/x544)));

	if (t38 != 38) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x582 = INT32_MIN;
	int64_t x583 = -1LL;
	uint8_t x584 = 3U;
	uint32_t t39 = 2291429U;

	t39 = (x581>>(x582*(x583/x584)));

	if (t39 != 9419424U) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x597 = 13090U;
	int16_t x598 = -1;
	uint64_t x599 = 32LLU;
	int64_t x600 = -1LL;

	t40 = (x597>>(x598*(x599/x600)));

	if (t40 != 13090) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x621 = INT64_MAX;
	uint8_t x622 = UINT8_MAX;
	int16_t x623 = INT16_MIN;
	int32_t x624 = 150511805;
	volatile int64_t t41 = INT64_MAX;

	t41 = (x621>>(x622*(x623/x624)));

	if (t41 != INT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x625 = 24855735U;
	volatile int8_t x626 = INT8_MAX;
	volatile uint64_t x627 = 151552LLU;
	int16_t x628 = -15597;
	uint32_t t42 = 388167440U;

	t42 = (x625>>(x626*(x627/x628)));

	if (t42 != 24855735U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x629 = 234LL;
	int64_t x630 = INT64_MAX;
	static uint32_t x631 = 391U;
	volatile int32_t x632 = INT32_MIN;

	t43 = (x629>>(x630*(x631/x632)));

	if (t43 != 234LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x678 = 28477LLU;
	int32_t x679 = -1;
	int32_t x680 = 3818440;
	volatile uint64_t t44 = 28439441588883LLU;

	t44 = (x677>>(x678*(x679/x680)));

	if (t44 != 7295LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x697 = INT64_MAX;
	volatile int32_t x698 = -1;
	volatile uint64_t x699 = 1205303162044LLU;
	int8_t x700 = INT8_MIN;
	int64_t t45 = INT64_MAX;

	t45 = (x697>>(x698*(x699/x700)));

	if (t45 != INT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x721 = UINT64_MAX;
	uint32_t x723 = 34064002U;
	volatile int16_t x724 = -1;
	uint64_t t46 = UINT64_MAX;

	t46 = (x721>>(x722*(x723/x724)));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x725 = 459130192698900990LLU;
	int8_t x726 = -24;
	static volatile uint64_t t47 = 1659186LLU;

	t47 = (x725>>(x726*(x727/x728)));

	if (t47 != 459130192698900990LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x729 = 13492U;
	volatile uint32_t x730 = UINT32_MAX;
	static int8_t x731 = 38;
	int32_t x732 = INT32_MAX;
	volatile int32_t t48 = 25059840;

	t48 = (x729>>(x730*(x731/x732)));

	if (t48 != 13492) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x733 = UINT16_MAX;
	uint16_t x734 = 354U;
	int16_t x735 = INT16_MIN;
	int32_t x736 = INT32_MIN;
	int32_t t49 = 7;

	t49 = (x733>>(x734*(x735/x736)));

	if (t49 != 65535) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x741 = 0;
	int16_t x742 = -1;
	int16_t x743 = -1;
	static int8_t x744 = INT8_MIN;
	volatile int32_t t50 = -39693;

	t50 = (x741>>(x742*(x743/x744)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x745 = 22U;
	int64_t x746 = -1LL;
	static int16_t x747 = -1619;
	int32_t x748 = INT32_MAX;
	int32_t t51 = -56;

	t51 = (x745>>(x746*(x747/x748)));

	if (t51 != 22) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x757 = UINT8_MAX;
	int32_t x758 = INT32_MIN;
	volatile int64_t x759 = -1LL;
	uint32_t x760 = 39746U;
	int32_t t52 = 0;

	t52 = (x757>>(x758*(x759/x760)));

	if (t52 != 255) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x761 = 1U;
	static int8_t x762 = INT8_MIN;
	uint8_t x763 = 1U;
	int64_t x764 = INT64_MIN;

	t53 = (x761>>(x762*(x763/x764)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x769 = INT8_MAX;
	int8_t x770 = 11;
	int8_t x771 = INT8_MIN;
	int64_t x772 = 747147LL;
	static volatile int32_t t54 = 634863945;

	t54 = (x769>>(x770*(x771/x772)));

	if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x773 = UINT32_MAX;
	int32_t x775 = INT32_MAX;
	volatile int64_t x776 = INT64_MIN;
	volatile uint32_t t55 = UINT32_MAX;

	t55 = (x773>>(x774*(x775/x776)));

	if (t55 != UINT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x785 = 52658251U;
	int8_t x786 = INT8_MAX;
	int16_t x787 = INT16_MIN;
	int64_t x788 = 617009330766722235LL;
	volatile uint32_t t56 = 2U;

	t56 = (x785>>(x786*(x787/x788)));

	if (t56 != 52658251U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x789 = UINT16_MAX;
	volatile uint32_t x790 = 33743307U;
	int16_t x791 = INT16_MAX;
	int64_t x792 = INT64_MIN;
	volatile int32_t t57 = -451756;

	t57 = (x789>>(x790*(x791/x792)));

	if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x805 = 6081;
	volatile uint32_t x806 = 175695456U;
	uint8_t x807 = 0U;
	static uint8_t x808 = UINT8_MAX;

	t58 = (x805>>(x806*(x807/x808)));

	if (t58 != 6081) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x809 = 645928174U;
	static uint16_t x810 = UINT16_MAX;
	int16_t x811 = 69;
	uint16_t x812 = 15416U;
	static uint32_t t59 = 1462U;

	t59 = (x809>>(x810*(x811/x812)));

	if (t59 != 645928174U) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x825 = 1588;
	int8_t x826 = -1;
	volatile int8_t x827 = -1;
	static uint8_t x828 = UINT8_MAX;
	static int32_t t60 = -7;

	t60 = (x825>>(x826*(x827/x828)));

	if (t60 != 1588) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x853 = 13U;
	uint16_t x854 = UINT16_MAX;
	uint16_t x855 = 4U;
	int64_t x856 = INT64_MIN;
	uint32_t t61 = 516703U;

	t61 = (x853>>(x854*(x855/x856)));

	if (t61 != 13U) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x878 = -1;
	static int8_t x879 = INT8_MIN;
	volatile int32_t t62 = -89405;

	t62 = (x877>>(x878*(x879/x880)));

	if (t62 != 65535) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x889 = UINT32_MAX;
	uint8_t x890 = UINT8_MAX;
	int32_t x892 = INT32_MAX;
	volatile uint32_t t63 = UINT32_MAX;

	t63 = (x889>>(x890*(x891/x892)));

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x893 = 23243015;
	volatile int16_t x894 = -35;
	int8_t x895 = 12;
	volatile int16_t x896 = INT16_MIN;

	t64 = (x893>>(x894*(x895/x896)));

	if (t64 != 23243015) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x899 = 7U;
	volatile uint64_t x900 = 65174936029LLU;
	static int32_t t65 = -77383296;

	t65 = (x897>>(x898*(x899/x900)));

	if (t65 != 6) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x901 = 364164693190691702LLU;
	int8_t x902 = INT8_MIN;
	int32_t x904 = INT32_MIN;
	volatile uint64_t t66 = 2544LLU;

	t66 = (x901>>(x902*(x903/x904)));

	if (t66 != 364164693190691702LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x909 = 1448LLU;
	static uint8_t x910 = UINT8_MAX;
	volatile int64_t x911 = 1702219LL;
	int64_t x912 = INT64_MIN;
	static uint64_t t67 = 11795842624LLU;

	t67 = (x909>>(x910*(x911/x912)));

	if (t67 != 1448LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x921 = INT64_MAX;
	uint8_t x922 = UINT8_MAX;
	static volatile uint16_t x923 = 34U;
	volatile int64_t t68 = INT64_MAX;

	t68 = (x921>>(x922*(x923/x924)));

	if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x937 = 1790765558U;
	static volatile uint64_t x938 = 47LLU;
	int32_t x939 = INT32_MIN;
	uint32_t x940 = UINT32_MAX;
	static volatile uint32_t t69 = 242528U;

	t69 = (x937>>(x938*(x939/x940)));

	if (t69 != 1790765558U) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x949 = 62U;
	uint64_t x950 = 35458LLU;
	volatile uint8_t x951 = 6U;
	uint16_t x952 = 25U;
	volatile int32_t t70 = 3;

	t70 = (x949>>(x950*(x951/x952)));

	if (t70 != 62) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x957 = 655U;
	uint16_t x958 = 4U;

	t71 = (x957>>(x958*(x959/x960)));

	if (t71 != 40) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x961 = 0U;
	int32_t x962 = -1;
	uint8_t x963 = 0U;
	static uint8_t x964 = 123U;
	int32_t t72 = 1579;

	t72 = (x961>>(x962*(x963/x964)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x965 = UINT64_MAX;
	static volatile int64_t x968 = -3349596480375232LL;

	t73 = (x965>>(x966*(x967/x968)));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x993 = 13181589455LLU;
	int64_t x994 = 784LL;
	static uint64_t x995 = 329LLU;
	static uint64_t x996 = 7954432544572080603LLU;
	volatile uint64_t t74 = 998659239712LLU;

	t74 = (x993>>(x994*(x995/x996)));

	if (t74 != 13181589455LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x997 = 19192U;
	int8_t x998 = -1;
	static uint8_t x999 = 13U;
	static int16_t x1000 = INT16_MAX;
	volatile int32_t t75 = 14244;

	t75 = (x997>>(x998*(x999/x1000)));

	if (t75 != 19192) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x1001 = 129423504270881LL;
	uint64_t x1003 = 218124432671617LLU;
	int32_t x1004 = INT32_MIN;
	volatile int64_t t76 = -10130515LL;

	t76 = (x1001>>(x1002*(x1003/x1004)));

	if (t76 != 129423504270881LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x1013 = INT32_MAX;
	int32_t t77 = INT32_MAX;

	t77 = (x1013>>(x1014*(x1015/x1016)));

	if (t77 != INT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x1029 = 5;
	static int8_t x1031 = 1;
	static volatile uint8_t x1032 = UINT8_MAX;
	int32_t t78 = 636925300;

	t78 = (x1029>>(x1030*(x1031/x1032)));

	if (t78 != 5) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x1037 = UINT8_MAX;
	int8_t x1038 = -1;
	int32_t x1039 = 22234474;
	int64_t x1040 = INT64_MIN;

	t79 = (x1037>>(x1038*(x1039/x1040)));

	if (t79 != 255) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x1049 = 147LL;
	int32_t x1051 = -1;

	t80 = (x1049>>(x1050*(x1051/x1052)));

	if (t80 != 147LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x1053 = 153724364LLU;
	volatile int16_t x1054 = INT16_MIN;
	int8_t x1055 = -6;
	int32_t x1056 = 261548634;
	volatile uint64_t t81 = 2LLU;

	t81 = (x1053>>(x1054*(x1055/x1056)));

	if (t81 != 153724364LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x1061 = INT64_MAX;
	int32_t x1062 = INT32_MIN;
	int8_t x1063 = INT8_MAX;
	static volatile int64_t t82 = INT64_MAX;

	t82 = (x1061>>(x1062*(x1063/x1064)));

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x1069 = INT16_MAX;
	static uint16_t x1070 = 3U;
	int16_t x1072 = INT16_MIN;
	volatile int32_t t83 = -535;

	t83 = (x1069>>(x1070*(x1071/x1072)));

	if (t83 != 4095) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x1073 = UINT16_MAX;
	int8_t x1074 = -8;
	int8_t x1076 = -1;

	t84 = (x1073>>(x1074*(x1075/x1076)));

	if (t84 != 65535) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x1109 = UINT32_MAX;
	int8_t x1111 = -2;
	volatile uint16_t x1112 = 7797U;

	t85 = (x1109>>(x1110*(x1111/x1112)));

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x1121 = UINT64_MAX;
	uint16_t x1122 = 1U;
	static uint64_t x1123 = 527LLU;
	int32_t x1124 = INT32_MAX;
	uint64_t t86 = UINT64_MAX;

	t86 = (x1121>>(x1122*(x1123/x1124)));

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x1165 = 0;
	int8_t x1166 = -16;
	volatile int32_t x1167 = -1;
	volatile uint8_t x1168 = 17U;
	static int32_t t87 = -9629;

	t87 = (x1165>>(x1166*(x1167/x1168)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x1193 = 38;
	int32_t x1194 = INT32_MAX;
	uint32_t x1195 = UINT32_MAX;
	volatile uint64_t x1196 = UINT64_MAX;
	int32_t t88 = -47;

	t88 = (x1193>>(x1194*(x1195/x1196)));

	if (t88 != 38) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x1197 = UINT16_MAX;
	int32_t x1198 = INT32_MIN;
	int16_t x1199 = 0;
	int32_t x1200 = INT32_MAX;
	volatile int32_t t89 = -764;

	t89 = (x1197>>(x1198*(x1199/x1200)));

	if (t89 != 65535) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x1213 = 408668LL;
	static int64_t x1214 = INT64_MIN;
	volatile uint8_t x1215 = 42U;
	uint8_t x1216 = UINT8_MAX;
	int64_t t90 = 5982LL;

	t90 = (x1213>>(x1214*(x1215/x1216)));

	if (t90 != 408668LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x1229 = INT32_MAX;
	int32_t x1230 = INT32_MAX;
	static int16_t x1231 = -1;
	volatile int32_t t91 = INT32_MAX;

	t91 = (x1229>>(x1230*(x1231/x1232)));

	if (t91 != INT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x1233 = 590576764U;
	static volatile uint8_t x1234 = 1U;
	static int16_t x1235 = 14;
	int32_t x1236 = -678654324;
	uint32_t t92 = 2645231U;

	t92 = (x1233>>(x1234*(x1235/x1236)));

	if (t92 != 590576764U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x1251 = 43;
	static int16_t x1252 = 47;
	int32_t t93 = 14;

	t93 = (x1249>>(x1250*(x1251/x1252)));

	if (t93 != 255) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x1257 = 8643437116275049528LLU;
	int64_t x1259 = 11LL;
	volatile uint32_t x1260 = 69639842U;
	volatile uint64_t t94 = 876183LLU;

	t94 = (x1257>>(x1258*(x1259/x1260)));

	if (t94 != 8643437116275049528LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x1261 = 1057535204U;
	uint16_t x1262 = 18237U;
	volatile uint32_t t95 = 484410U;

	t95 = (x1261>>(x1262*(x1263/x1264)));

	if (t95 != 1057535204U) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x1281 = 12268;
	uint8_t x1282 = 90U;
	int8_t x1283 = INT8_MAX;
	uint16_t x1284 = 7916U;

	t96 = (x1281>>(x1282*(x1283/x1284)));

	if (t96 != 12268) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x1293 = 1976965413598847118LLU;
	uint64_t x1294 = 26371567LLU;
	uint32_t x1295 = UINT32_MAX;
	volatile int64_t x1296 = INT64_MAX;
	uint64_t t97 = 111954049704356778LLU;

	t97 = (x1293>>(x1294*(x1295/x1296)));

	if (t97 != 1976965413598847118LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x1309 = 1;
	static int64_t x1310 = -1LL;
	uint64_t x1311 = 3928405394499464LLU;
	volatile int8_t x1312 = INT8_MIN;
	static volatile int32_t t98 = 3288627;

	t98 = (x1309>>(x1310*(x1311/x1312)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x1313 = INT32_MAX;
	volatile uint8_t x1315 = 1U;
	int16_t x1316 = INT16_MAX;
	volatile int32_t t99 = INT32_MAX;

	t99 = (x1313>>(x1314*(x1315/x1316)));

	if (t99 != INT32_MAX) { NG(); } else { ; }
	
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

