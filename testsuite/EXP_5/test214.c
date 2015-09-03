#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x9 = 34U;
volatile uint64_t x11 = UINT64_MAX;
static int32_t t0 = -1060018382;
static uint32_t x18 = 337U;
int32_t x19 = INT32_MIN;
static int32_t x21 = 31963;
volatile uint64_t x24 = 7LLU;
static int32_t x54 = INT32_MIN;
static uint64_t x58 = UINT64_MAX;
int8_t x95 = INT8_MIN;
int64_t x120 = -713776243LL;
int16_t x144 = INT16_MIN;
uint64_t x223 = UINT64_MAX;
int16_t x228 = INT16_MIN;
volatile int8_t x251 = 6;
volatile uint64_t x334 = 10443549LLU;
volatile int32_t t14 = -14;
volatile int8_t x342 = -1;
static int32_t t18 = 15;
volatile int16_t x425 = 2016;
volatile int16_t x449 = INT16_MAX;
int8_t x493 = INT8_MAX;
static int16_t x505 = 3155;
uint32_t x506 = 6U;
int64_t t31 = INT64_MAX;
static uint32_t x581 = UINT32_MAX;
static volatile int8_t x582 = INT8_MIN;
int64_t x613 = 2880978LL;
int8_t x634 = 61;
uint16_t x635 = 0U;
int32_t x651 = INT32_MIN;
volatile int16_t x668 = INT16_MIN;
int32_t x719 = INT32_MIN;
int64_t t43 = -17742006062LL;
int64_t x723 = -1LL;
volatile uint64_t x730 = 4820525714LLU;
int32_t x792 = 144016;
int8_t x793 = 7;
volatile int32_t t49 = 89054818;
int16_t x809 = 0;
static uint32_t x839 = 430460U;
static int16_t x841 = 643;
int64_t x844 = INT64_MAX;
volatile uint64_t t54 = 2LLU;
int64_t x913 = INT64_MAX;
uint16_t x916 = 582U;
volatile uint32_t x953 = 49602985U;
uint32_t t58 = 0U;
int8_t x963 = -1;
int8_t x970 = 0;
int32_t x1002 = -1589;
static int64_t x1004 = 4296620167889LL;
int32_t t61 = -245150;
volatile int32_t x1018 = INT32_MAX;
int32_t x1020 = INT32_MIN;
int32_t t64 = -7;
uint64_t x1061 = 13480229689LLU;
int16_t x1062 = -190;
static int64_t x1079 = INT64_MIN;
volatile uint64_t t68 = 2148591175051464LLU;
int32_t x1086 = -1;
uint8_t x1087 = 19U;
static int16_t x1100 = INT16_MIN;
int8_t x1103 = -3;
int32_t t71 = -477899;
uint32_t x1140 = 1194147831U;
volatile uint32_t t73 = UINT32_MAX;
static int16_t x1148 = INT16_MIN;
uint64_t x1155 = UINT64_MAX;
static int32_t x1191 = 1;
uint8_t x1226 = 42U;
volatile int8_t x1227 = INT8_MAX;
static int16_t x1228 = INT16_MIN;
uint64_t x1232 = 1520299961LLU;
volatile uint32_t x1253 = 18143347U;
int32_t x1256 = -1;
static int32_t x1268 = INT32_MIN;
uint16_t x1448 = UINT16_MAX;
volatile int32_t x1476 = INT32_MIN;
volatile int16_t x1480 = INT16_MIN;
int8_t x1486 = -55;
uint32_t x1521 = UINT32_MAX;
int32_t x1524 = INT32_MIN;


void f0(void) {
	volatile uint64_t x10 = 21957LLU;
	uint32_t x12 = UINT32_MAX;

	t0 = (x9<<((x10-x11)/x12));

	if (t0 != 34) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x17 = UINT32_MAX;
	int8_t x20 = INT8_MIN;
	uint32_t t1 = UINT32_MAX;

	t1 = (x17<<((x18-x19)/x20));

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x22 = 81U;
	volatile uint32_t x23 = UINT32_MAX;
	volatile int32_t t2 = -8;

	t2 = (x21<<((x22-x23)/x24));

	if (t2 != 65460224) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x53 = 98U;
	int64_t x55 = -43066575761881951LL;
	volatile int64_t x56 = INT64_MIN;
	int32_t t3 = -53396;

	t3 = (x53<<((x54-x55)/x56));

	if (t3 != 98) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x57 = 1337402268U;
	static int32_t x59 = INT32_MAX;
	int32_t x60 = -7542438;
	uint32_t t4 = 16U;

	t4 = (x57<<((x58-x59)/x60));

	if (t4 != 1337402268U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x93 = 7U;
	uint8_t x94 = UINT8_MAX;
	int64_t x96 = INT64_MIN;
	int32_t t5 = -234420965;

	t5 = (x93<<((x94-x95)/x96));

	if (t5 != 7) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x117 = UINT8_MAX;
	uint16_t x118 = 5U;
	static int8_t x119 = INT8_MIN;
	volatile int32_t t6 = 44;

	t6 = (x117<<((x118-x119)/x120));

	if (t6 != 255) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x141 = INT16_MAX;
	volatile uint16_t x142 = UINT16_MAX;
	volatile uint64_t x143 = 9110510965460256625LLU;
	int32_t t7 = 618279;

	t7 = (x141<<((x142-x143)/x144));

	if (t7 != 32767) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x221 = 457573317;
	int32_t x222 = INT32_MIN;
	int16_t x224 = -1;
	volatile int32_t t8 = -18;

	t8 = (x221<<((x222-x223)/x224));

	if (t8 != 457573317) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x225 = 18935U;
	static int16_t x226 = -1;
	static int8_t x227 = INT8_MIN;
	static int32_t t9 = -5495;

	t9 = (x225<<((x226-x227)/x228));

	if (t9 != 18935) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x229 = 891870811LLU;
	static uint16_t x230 = UINT16_MAX;
	static int64_t x231 = -1LL;
	volatile uint16_t x232 = UINT16_MAX;
	volatile uint64_t t10 = 1356998LLU;

	t10 = (x229<<((x230-x231)/x232));

	if (t10 != 1783741622LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint8_t x241 = 7U;
	int8_t x242 = 1;
	int8_t x243 = INT8_MIN;
	static int8_t x244 = 7;
	int32_t t11 = 683366307;

	t11 = (x241<<((x242-x243)/x244));

	if (t11 != 1835008) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x249 = INT32_MAX;
	uint64_t x250 = 144375625722068523LLU;
	volatile int64_t x252 = INT64_MIN;
	volatile int32_t t12 = INT32_MAX;

	t12 = (x249<<((x250-x251)/x252));

	if (t12 != INT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x309 = INT64_MAX;
	uint32_t x310 = 252897U;
	int32_t x311 = INT32_MIN;
	int64_t x312 = INT64_MIN;
	int64_t t13 = INT64_MAX;

	t13 = (x309<<((x310-x311)/x312));

	if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x333 = 99U;
	uint64_t x335 = 1355389076342684LLU;
	int64_t x336 = INT64_MIN;

	t14 = (x333<<((x334-x335)/x336));

	if (t14 != 198) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x337 = 96LLU;
	volatile uint8_t x338 = 20U;
	uint8_t x339 = UINT8_MAX;
	int32_t x340 = -274982;
	uint64_t t15 = 267671249LLU;

	t15 = (x337<<((x338-x339)/x340));

	if (t15 != 96LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x341 = 1754U;
	int8_t x343 = INT8_MIN;
	static uint16_t x344 = 1998U;
	uint32_t t16 = 30765697U;

	t16 = (x341<<((x342-x343)/x344));

	if (t16 != 1754U) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x345 = 840553921255LL;
	static int32_t x346 = 2;
	int32_t x347 = -1;
	int16_t x348 = INT16_MIN;
	int64_t t17 = -19LL;

	t17 = (x345<<((x346-x347)/x348));

	if (t17 != 840553921255LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x397 = INT16_MAX;
	static volatile int32_t x398 = -1;
	uint32_t x399 = 59650987U;
	int32_t x400 = INT32_MIN;

	t18 = (x397<<((x398-x399)/x400));

	if (t18 != 65534) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x409 = UINT32_MAX;
	static int8_t x410 = 0;
	int16_t x411 = INT16_MIN;
	int64_t x412 = INT64_MIN;
	volatile uint32_t t19 = UINT32_MAX;

	t19 = (x409<<((x410-x411)/x412));

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x426 = -1;
	int8_t x427 = INT8_MIN;
	static int64_t x428 = INT64_MAX;
	int32_t t20 = 0;

	t20 = (x425<<((x426-x427)/x428));

	if (t20 != 2016) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x450 = 2121706882LL;
	uint16_t x451 = UINT16_MAX;
	uint64_t x452 = UINT64_MAX;
	int32_t t21 = -952569122;

	t21 = (x449<<((x450-x451)/x452));

	if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x494 = 1086LLU;
	uint16_t x495 = 3U;
	int64_t x496 = INT64_MIN;
	volatile int32_t t22 = -15332;

	t22 = (x493<<((x494-x495)/x496));

	if (t22 != 127) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x497 = 28U;
	static volatile int16_t x498 = 1635;
	int16_t x499 = -1;
	uint32_t x500 = 1699U;
	static int32_t t23 = 0;

	t23 = (x497<<((x498-x499)/x500));

	if (t23 != 28) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x507 = 0;
	static volatile uint64_t x508 = UINT64_MAX;
	volatile int32_t t24 = 709852350;

	t24 = (x505<<((x506-x507)/x508));

	if (t24 != 3155) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x509 = 41981;
	volatile int8_t x510 = 18;
	int8_t x511 = INT8_MAX;
	int32_t x512 = INT32_MIN;
	volatile int32_t t25 = -408;

	t25 = (x509<<((x510-x511)/x512));

	if (t25 != 41981) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x513 = 56709481532678076LLU;
	volatile uint64_t x514 = 10112LLU;
	uint32_t x515 = 858U;
	uint32_t x516 = 1417092U;
	volatile uint64_t t26 = 174989465016142794LLU;

	t26 = (x513<<((x514-x515)/x516));

	if (t26 != 56709481532678076LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x517 = UINT32_MAX;
	uint64_t x518 = 762447918392462734LLU;
	uint16_t x519 = UINT16_MAX;
	static volatile int16_t x520 = INT16_MIN;
	uint32_t t27 = UINT32_MAX;

	t27 = (x517<<((x518-x519)/x520));

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x541 = 5U;
	static int64_t x542 = -1LL;
	int32_t x543 = -108;
	static volatile int64_t x544 = -6114LL;
	int32_t t28 = 964256502;

	t28 = (x541<<((x542-x543)/x544));

	if (t28 != 5) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x553 = 2U;
	int32_t x554 = 6;
	uint64_t x555 = 27383919987845LLU;
	volatile int32_t x556 = INT32_MIN;
	int32_t t29 = 9;

	t29 = (x553<<((x554-x555)/x556));

	if (t29 != 2) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x557 = UINT8_MAX;
	static volatile int8_t x558 = -1;
	uint8_t x559 = 4U;
	uint8_t x560 = 104U;
	volatile int32_t t30 = -10421;

	t30 = (x557<<((x558-x559)/x560));

	if (t30 != 255) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x565 = INT64_MAX;
	int16_t x566 = 1;
	int64_t x567 = -1LL;
	uint32_t x568 = UINT32_MAX;

	t31 = (x565<<((x566-x567)/x568));

	if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x583 = -1LL;
	int64_t x584 = INT64_MAX;
	volatile uint32_t t32 = UINT32_MAX;

	t32 = (x581<<((x582-x583)/x584));

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x614 = 4221U;
	int8_t x615 = INT8_MAX;
	int64_t x616 = INT64_MAX;
	volatile int64_t t33 = 3439943263LL;

	t33 = (x613<<((x614-x615)/x616));

	if (t33 != 2880978LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x633 = UINT32_MAX;
	uint16_t x636 = 124U;
	uint32_t t34 = UINT32_MAX;

	t34 = (x633<<((x634-x635)/x636));

	if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x637 = UINT8_MAX;
	int16_t x638 = INT16_MAX;
	volatile int16_t x639 = -1;
	static int64_t x640 = 15185LL;
	int32_t t35 = 1;

	t35 = (x637<<((x638-x639)/x640));

	if (t35 != 1020) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x649 = 1U;
	static uint64_t x650 = UINT64_MAX;
	static int32_t x652 = INT32_MIN;
	volatile int32_t t36 = 1;

	t36 = (x649<<((x650-x651)/x652));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x661 = 16U;
	static uint32_t x662 = 201U;
	static uint8_t x663 = 0U;
	static int8_t x664 = INT8_MAX;
	volatile int32_t t37 = 7;

	t37 = (x661<<((x662-x663)/x664));

	if (t37 != 32) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x665 = 1U;
	int64_t x666 = INT64_MAX;
	uint64_t x667 = 5662458920810442LLU;
	volatile int32_t t38 = -11;

	t38 = (x665<<((x666-x667)/x668));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x669 = 531286297842181LLU;
	int64_t x670 = -1LL;
	int16_t x671 = INT16_MIN;
	uint64_t x672 = UINT64_MAX;
	volatile uint64_t t39 = 150708424750LLU;

	t39 = (x669<<((x670-x671)/x672));

	if (t39 != 531286297842181LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x689 = INT64_MAX;
	static uint64_t x690 = 14970817LLU;
	int16_t x691 = INT16_MIN;
	int8_t x692 = INT8_MIN;
	int64_t t40 = INT64_MAX;

	t40 = (x689<<((x690-x691)/x692));

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x709 = UINT8_MAX;
	int64_t x710 = -1LL;
	uint8_t x711 = UINT8_MAX;
	volatile int8_t x712 = INT8_MIN;
	int32_t t41 = -402090934;

	t41 = (x709<<((x710-x711)/x712));

	if (t41 != 1020) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x713 = 19U;
	int32_t x714 = INT32_MIN;
	int32_t x715 = INT32_MIN;
	static int8_t x716 = -33;
	volatile uint32_t t42 = 105608U;

	t42 = (x713<<((x714-x715)/x716));

	if (t42 != 19U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x717 = 68285545896LL;
	int32_t x718 = -11890;
	uint64_t x720 = UINT64_MAX;

	t43 = (x717<<((x718-x719)/x720));

	if (t43 != 68285545896LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x721 = UINT32_MAX;
	int32_t x722 = -1;
	volatile int64_t x724 = INT64_MAX;
	uint32_t t44 = UINT32_MAX;

	t44 = (x721<<((x722-x723)/x724));

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x729 = 144U;
	int64_t x731 = -119LL;
	static uint32_t x732 = UINT32_MAX;
	static volatile int32_t t45 = 7676246;

	t45 = (x729<<((x730-x731)/x732));

	if (t45 != 288) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x753 = 31725419LLU;
	static uint64_t x754 = 11LLU;
	int32_t x755 = -78245;
	int16_t x756 = INT16_MIN;
	volatile uint64_t t46 = 4966521058584LLU;

	t46 = (x753<<((x754-x755)/x756));

	if (t46 != 31725419LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint16_t x757 = UINT16_MAX;
	uint8_t x758 = 87U;
	static uint64_t x759 = 5LLU;
	uint8_t x760 = UINT8_MAX;
	volatile int32_t t47 = -4394;

	t47 = (x757<<((x758-x759)/x760));

	if (t47 != 65535) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x789 = 1081460545669985926LL;
	int32_t x790 = -1;
	static volatile int16_t x791 = INT16_MIN;
	static int64_t t48 = -3896276187891021461LL;

	t48 = (x789<<((x790-x791)/x792));

	if (t48 != 1081460545669985926LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x794 = 41U;
	volatile int64_t x795 = 270926786006284106LL;
	uint64_t x796 = UINT64_MAX;

	t49 = (x793<<((x794-x795)/x796));

	if (t49 != 7) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x810 = -1;
	volatile int64_t x811 = -1LL;
	int16_t x812 = INT16_MIN;
	volatile int32_t t50 = 3806151;

	t50 = (x809<<((x810-x811)/x812));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x837 = 1;
	volatile int64_t x838 = INT64_MAX;
	static int64_t x840 = INT64_MAX;
	volatile int32_t t51 = 3;

	t51 = (x837<<((x838-x839)/x840));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x842 = INT64_MAX;
	uint16_t x843 = 809U;
	int32_t t52 = 4200;

	t52 = (x841<<((x842-x843)/x844));

	if (t52 != 643) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x861 = UINT32_MAX;
	uint8_t x862 = 0U;
	int16_t x863 = -83;
	uint8_t x864 = 105U;
	uint32_t t53 = UINT32_MAX;

	t53 = (x861<<((x862-x863)/x864));

	if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x877 = 5665907408182615LLU;
	volatile int32_t x878 = -1;
	int32_t x879 = INT32_MIN;
	static uint64_t x880 = UINT64_MAX;

	t54 = (x877<<((x878-x879)/x880));

	if (t54 != 5665907408182615LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x914 = 5;
	volatile uint16_t x915 = 1U;
	int64_t t55 = INT64_MAX;

	t55 = (x913<<((x914-x915)/x916));

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x929 = INT64_MAX;
	int8_t x930 = INT8_MIN;
	volatile int8_t x931 = INT8_MIN;
	int8_t x932 = -1;
	volatile int64_t t56 = INT64_MAX;

	t56 = (x929<<((x930-x931)/x932));

	if (t56 != INT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x933 = 20986U;
	uint8_t x934 = 37U;
	static int32_t x935 = -40914;
	uint16_t x936 = 6292U;
	volatile int32_t t57 = 234091923;

	t57 = (x933<<((x934-x935)/x936));

	if (t57 != 1343104) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x954 = INT8_MIN;
	int32_t x955 = INT32_MIN;
	int64_t x956 = INT64_MIN;

	t58 = (x953<<((x954-x955)/x956));

	if (t58 != 49602985U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x961 = 661080297824LL;
	volatile int8_t x962 = 7;
	uint16_t x964 = 93U;
	static int64_t t59 = -276897615565636674LL;

	t59 = (x961<<((x962-x963)/x964));

	if (t59 != 661080297824LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x969 = UINT8_MAX;
	uint8_t x971 = 11U;
	int64_t x972 = -18801974869LL;
	int32_t t60 = -265;

	t60 = (x969<<((x970-x971)/x972));

	if (t60 != 255) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x1001 = 3;
	int64_t x1003 = -1LL;

	t61 = (x1001<<((x1002-x1003)/x1004));

	if (t61 != 3) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x1005 = UINT8_MAX;
	uint8_t x1006 = UINT8_MAX;
	uint8_t x1007 = 22U;
	int64_t x1008 = INT64_MIN;
	static volatile int32_t t62 = -192071567;

	t62 = (x1005<<((x1006-x1007)/x1008));

	if (t62 != 255) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x1017 = 120586LLU;
	int32_t x1019 = 39485288;
	volatile uint64_t t63 = 106025694610032001LLU;

	t63 = (x1017<<((x1018-x1019)/x1020));

	if (t63 != 120586LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x1041 = 106U;
	volatile uint8_t x1042 = 23U;
	static int32_t x1043 = 406354571;
	int32_t x1044 = INT32_MAX;

	t64 = (x1041<<((x1042-x1043)/x1044));

	if (t64 != 106) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x1045 = 3U;
	int16_t x1046 = INT16_MIN;
	volatile int32_t x1047 = INT32_MIN;
	uint64_t x1048 = 77603541639LLU;
	int32_t t65 = -846451544;

	t65 = (x1045<<((x1046-x1047)/x1048));

	if (t65 != 3) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x1057 = UINT32_MAX;
	uint16_t x1058 = 2716U;
	uint16_t x1059 = 18U;
	uint32_t x1060 = UINT32_MAX;
	volatile uint32_t t66 = UINT32_MAX;

	t66 = (x1057<<((x1058-x1059)/x1060));

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x1063 = -1;
	uint16_t x1064 = UINT16_MAX;
	uint64_t t67 = 4LLU;

	t67 = (x1061<<((x1062-x1063)/x1064));

	if (t67 != 13480229689LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x1077 = 1692068890682LLU;
	static volatile int8_t x1078 = -4;
	int64_t x1080 = INT64_MAX;

	t68 = (x1077<<((x1078-x1079)/x1080));

	if (t68 != 1692068890682LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x1085 = 17654U;
	int32_t x1088 = INT32_MAX;
	static volatile int32_t t69 = 428460833;

	t69 = (x1085<<((x1086-x1087)/x1088));

	if (t69 != 17654) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x1097 = 14;
	static volatile uint64_t x1098 = 1006666269LLU;
	static volatile int32_t x1099 = 4225;
	static int32_t t70 = -125518;

	t70 = (x1097<<((x1098-x1099)/x1100));

	if (t70 != 14) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x1101 = INT8_MAX;
	volatile int16_t x1102 = INT16_MAX;
	uint32_t x1104 = UINT32_MAX;

	t71 = (x1101<<((x1102-x1103)/x1104));

	if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x1129 = INT8_MAX;
	uint32_t x1130 = 11133712U;
	volatile int16_t x1131 = INT16_MIN;
	int16_t x1132 = -1;
	static volatile int32_t t72 = 0;

	t72 = (x1129<<((x1130-x1131)/x1132));

	if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x1137 = UINT32_MAX;
	static int8_t x1138 = -1;
	int16_t x1139 = INT16_MIN;

	t73 = (x1137<<((x1138-x1139)/x1140));

	if (t73 != UINT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x1141 = 6773U;
	static volatile uint16_t x1142 = UINT16_MAX;
	uint64_t x1143 = 1253443566LLU;
	int32_t x1144 = -213197868;
	static volatile int32_t t74 = -204989;

	t74 = (x1141<<((x1142-x1143)/x1144));

	if (t74 != 6773) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x1145 = 1U;
	static int32_t x1146 = -1;
	uint8_t x1147 = 50U;
	volatile uint32_t t75 = 3535U;

	t75 = (x1145<<((x1146-x1147)/x1148));

	if (t75 != 1U) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x1153 = INT32_MAX;
	uint16_t x1154 = UINT16_MAX;
	int32_t x1156 = -1280095;
	int32_t t76 = INT32_MAX;

	t76 = (x1153<<((x1154-x1155)/x1156));

	if (t76 != INT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x1189 = 82U;
	volatile int32_t x1190 = 109;
	uint64_t x1192 = UINT64_MAX;
	static volatile int32_t t77 = 11;

	t77 = (x1189<<((x1190-x1191)/x1192));

	if (t77 != 82) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x1193 = INT16_MAX;
	uint32_t x1194 = 1211021071U;
	int8_t x1195 = -1;
	static int32_t x1196 = INT32_MAX;
	volatile int32_t t78 = 26;

	t78 = (x1193<<((x1194-x1195)/x1196));

	if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x1213 = 12U;
	volatile int64_t x1214 = 17LL;
	int32_t x1215 = INT32_MIN;
	int64_t x1216 = INT64_MAX;
	static volatile int32_t t79 = -1445;

	t79 = (x1213<<((x1214-x1215)/x1216));

	if (t79 != 12) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int16_t x1221 = INT16_MAX;
	int16_t x1222 = 129;
	uint8_t x1223 = 72U;
	uint16_t x1224 = 8U;
	volatile int32_t t80 = -95;

	t80 = (x1221<<((x1222-x1223)/x1224));

	if (t80 != 4194176) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x1225 = UINT16_MAX;
	static volatile int32_t t81 = -3;

	t81 = (x1225<<((x1226-x1227)/x1228));

	if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x1229 = 515596444404606LL;
	int16_t x1230 = INT16_MIN;
	uint32_t x1231 = 250U;
	int64_t t82 = -975LL;

	t82 = (x1229<<((x1230-x1231)/x1232));

	if (t82 != 2062385777618424LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x1249 = INT64_MAX;
	int16_t x1250 = INT16_MIN;
	int16_t x1251 = -1;
	int32_t x1252 = INT32_MIN;
	static volatile int64_t t83 = INT64_MAX;

	t83 = (x1249<<((x1250-x1251)/x1252));

	if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x1254 = UINT64_MAX;
	static volatile int16_t x1255 = 4;
	uint32_t t84 = 255U;

	t84 = (x1253<<((x1254-x1255)/x1256));

	if (t84 != 18143347U) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x1265 = 4U;
	int16_t x1266 = -1;
	int32_t x1267 = INT32_MIN;
	static int32_t t85 = -101;

	t85 = (x1265<<((x1266-x1267)/x1268));

	if (t85 != 4) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x1269 = 2;
	int32_t x1270 = -1;
	int16_t x1271 = -1566;
	int16_t x1272 = INT16_MIN;
	int32_t t86 = 489915124;

	t86 = (x1269<<((x1270-x1271)/x1272));

	if (t86 != 2) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x1297 = 8;
	int32_t x1298 = -29224;
	int8_t x1299 = -1;
	uint16_t x1300 = UINT16_MAX;
	volatile int32_t t87 = -16096129;

	t87 = (x1297<<((x1298-x1299)/x1300));

	if (t87 != 8) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x1325 = 23;
	int8_t x1326 = INT8_MIN;
	int32_t x1327 = -3974;
	uint32_t x1328 = UINT32_MAX;
	volatile int32_t t88 = 1711;

	t88 = (x1325<<((x1326-x1327)/x1328));

	if (t88 != 23) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x1341 = 8635LLU;
	uint16_t x1342 = UINT16_MAX;
	int16_t x1343 = INT16_MIN;
	int64_t x1344 = -284883LL;
	volatile uint64_t t89 = 161780813637769LLU;

	t89 = (x1341<<((x1342-x1343)/x1344));

	if (t89 != 8635LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x1405 = 116U;
	static uint32_t x1406 = UINT32_MAX;
	int8_t x1407 = -4;
	int16_t x1408 = -1;
	volatile int32_t t90 = 55360;

	t90 = (x1405<<((x1406-x1407)/x1408));

	if (t90 != 116) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x1445 = UINT16_MAX;
	volatile int32_t x1446 = -1;
	uint8_t x1447 = 37U;
	volatile int32_t t91 = 1032;

	t91 = (x1445<<((x1446-x1447)/x1448));

	if (t91 != 65535) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x1449 = UINT64_MAX;
	int32_t x1450 = INT32_MIN;
	int64_t x1451 = 255LL;
	static uint32_t x1452 = UINT32_MAX;
	uint64_t t92 = UINT64_MAX;

	t92 = (x1449<<((x1450-x1451)/x1452));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x1473 = UINT32_MAX;
	int64_t x1474 = -1LL;
	volatile uint16_t x1475 = 7546U;
	volatile uint32_t t93 = UINT32_MAX;

	t93 = (x1473<<((x1474-x1475)/x1476));

	if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x1477 = 38U;
	uint32_t x1478 = 521U;
	static uint8_t x1479 = UINT8_MAX;
	static volatile uint32_t t94 = 391194586U;

	t94 = (x1477<<((x1478-x1479)/x1480));

	if (t94 != 38U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x1485 = INT8_MAX;
	static int16_t x1487 = INT16_MAX;
	int64_t x1488 = INT64_MIN;
	volatile int32_t t95 = -223;

	t95 = (x1485<<((x1486-x1487)/x1488));

	if (t95 != 127) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x1493 = 99;
	uint8_t x1494 = 0U;
	int8_t x1495 = -1;
	int8_t x1496 = INT8_MAX;
	volatile int32_t t96 = 355;

	t96 = (x1493<<((x1494-x1495)/x1496));

	if (t96 != 99) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x1497 = 3735U;
	int32_t x1498 = -1;
	uint16_t x1499 = 7435U;
	static int32_t x1500 = INT32_MIN;
	int32_t t97 = -6;

	t97 = (x1497<<((x1498-x1499)/x1500));

	if (t97 != 3735) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x1505 = 1;
	uint32_t x1506 = 285U;
	int32_t x1507 = -1;
	volatile uint32_t x1508 = UINT32_MAX;
	int32_t t98 = 1116002;

	t98 = (x1505<<((x1506-x1507)/x1508));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x1522 = 2;
	volatile int8_t x1523 = -1;
	volatile uint32_t t99 = UINT32_MAX;

	t99 = (x1521<<((x1522-x1523)/x1524));

	if (t99 != UINT32_MAX) { NG(); } else { ; }
	
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

