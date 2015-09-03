#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x14 = -5;
int8_t x21 = 0;
static volatile uint64_t x65 = 3826357559345312LLU;
static int64_t x66 = INT64_MAX;
static int8_t x67 = INT8_MAX;
int16_t x81 = 1213;
static volatile int32_t t4 = 532695;
int8_t x129 = 6;
int16_t x130 = INT16_MAX;
uint32_t x141 = 9929638U;
static int16_t x143 = INT16_MAX;
volatile uint16_t x186 = 148U;
uint16_t x187 = 8U;
volatile int64_t x188 = -48274848483650LL;
uint32_t x196 = 5771U;
static volatile int16_t x217 = 577;
int32_t x231 = -1;
uint32_t x265 = 100702008U;
static uint8_t x268 = UINT8_MAX;
static uint8_t x333 = 23U;
static uint64_t x361 = 901661LLU;
int32_t x423 = -7;
int8_t x430 = -50;
uint16_t x505 = 27833U;
uint32_t x546 = 1U;
static int16_t x548 = 584;
int32_t x634 = INT32_MIN;
volatile uint32_t x645 = 87115563U;
int8_t x648 = -1;
uint32_t t26 = 24017U;
static int32_t x654 = INT32_MIN;
volatile int32_t t29 = 3750750;
static int8_t x772 = INT8_MIN;
volatile uint32_t t31 = 1700849U;
volatile int32_t x811 = -1;
volatile uint64_t x824 = 4322274341LLU;
int16_t x844 = INT16_MIN;
volatile uint32_t x861 = 902868U;
int16_t x863 = 1;
static volatile int32_t x933 = INT32_MAX;
volatile int8_t x978 = 3;
uint32_t t40 = 16303U;
volatile int16_t x1010 = INT16_MIN;
int8_t x1011 = -1;
static uint8_t x1086 = 3U;
int32_t t42 = -2796826;
uint32_t x1114 = 1573668U;
volatile uint8_t x1115 = 29U;
uint8_t x1181 = 0U;
uint8_t x1214 = 0U;
int8_t x1215 = INT8_MAX;
int32_t t46 = 3925118;
volatile int64_t x1323 = INT64_MIN;
uint16_t x1387 = 145U;
volatile uint8_t x1388 = UINT8_MAX;
uint64_t x1421 = UINT64_MAX;
volatile int64_t x1422 = INT64_MIN;
static uint64_t t54 = 495LLU;
uint8_t x1485 = 3U;
volatile int32_t t57 = -12420946;
uint8_t x1576 = 17U;
int32_t t60 = 108;
int16_t x1689 = INT16_MAX;
volatile int32_t t63 = 9682;
uint32_t x1697 = UINT32_MAX;
static uint64_t x1698 = 21LLU;
volatile uint32_t x1710 = UINT32_MAX;
volatile int32_t t66 = 242;
volatile int32_t t67 = -3;
uint8_t x1765 = 37U;
volatile int32_t x1768 = 224;
int16_t x1819 = -1;
static uint16_t x1898 = UINT16_MAX;
static volatile int32_t t71 = 896421949;
int16_t x1986 = INT16_MIN;
static volatile int32_t x1987 = -1;
int8_t x1988 = INT8_MIN;
int8_t x1990 = 0;
int8_t x1991 = -1;
static volatile uint64_t t76 = 5497587213LLU;
static int16_t x2085 = 306;
volatile int32_t t79 = -5052358;
volatile uint8_t x2154 = 6U;
volatile int16_t x2155 = INT16_MIN;
int16_t x2168 = INT16_MIN;
uint32_t x2181 = 19U;
volatile uint32_t x2257 = 1672U;
int32_t x2349 = 1319028;
volatile int32_t t91 = -64772;
volatile uint32_t t93 = 10678384U;
static int8_t x2456 = INT8_MAX;
uint16_t x2529 = UINT16_MAX;
static uint8_t x2543 = 5U;
volatile uint32_t t97 = 221751603U;
uint16_t x2557 = 6349U;
int16_t x2559 = INT16_MIN;


void f0(void) {
	int8_t x5 = 40;
	int32_t x6 = -1;
	int16_t x7 = 1;
	volatile int8_t x8 = INT8_MIN;
	static int32_t t0 = 1905;

	t0 = ((x5<<(x6%x7))-x8);

	if (t0 != 168) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x13 = 9034881568851152LLU;
	int64_t x15 = -1LL;
	static int16_t x16 = 61;
	volatile uint64_t t1 = 42LLU;

	t1 = ((x13<<(x14%x15))-x16);

	if (t1 != 9034881568851091LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x22 = -1;
	int8_t x23 = -1;
	volatile int8_t x24 = INT8_MIN;
	volatile int32_t t2 = -677701865;

	t2 = ((x21<<(x22%x23))-x24);

	if (t2 != 128) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x68 = INT8_MIN;
	uint64_t t3 = 25601LLU;

	t3 = ((x65<<(x66%x67))-x68);

	if (t3 != 3826357559345440LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x82 = INT32_MIN;
	uint32_t x83 = 3U;
	static int16_t x84 = INT16_MIN;

	t4 = ((x81<<(x82%x83))-x84);

	if (t4 != 37620) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x93 = UINT16_MAX;
	uint32_t x94 = 9U;
	int8_t x95 = 9;
	int8_t x96 = INT8_MIN;
	volatile int32_t t5 = 4173140;

	t5 = ((x93<<(x94%x95))-x96);

	if (t5 != 65663) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x109 = 13978;
	volatile uint64_t x110 = UINT64_MAX;
	static int8_t x111 = -1;
	uint8_t x112 = 24U;
	volatile int32_t t6 = 10;

	t6 = ((x109<<(x110%x111))-x112);

	if (t6 != 13954) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x131 = INT8_MAX;
	int16_t x132 = -7467;
	int32_t t7 = -26381921;

	t7 = ((x129<<(x130%x131))-x132);

	if (t7 != 7479) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x142 = 1;
	int32_t x144 = 144779;
	volatile uint32_t t8 = 53896162U;

	t8 = ((x141<<(x142%x143))-x144);

	if (t8 != 19714497U) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x185 = UINT16_MAX;
	volatile int64_t t9 = -12165489LL;

	t9 = ((x185<<(x186%x187))-x188);

	if (t9 != 48274849532210LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x193 = UINT64_MAX;
	volatile uint32_t x194 = 2U;
	static int64_t x195 = -5LL;
	static volatile uint64_t t10 = 6382007612292802LLU;

	t10 = ((x193<<(x194%x195))-x196);

	if (t10 != 18446744073709545841LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x218 = INT16_MIN;
	int8_t x219 = INT8_MIN;
	uint32_t x220 = UINT32_MAX;
	static volatile uint32_t t11 = 204605U;

	t11 = ((x217<<(x218%x219))-x220);

	if (t11 != 578U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x229 = 3335471957447003273LL;
	int8_t x230 = -1;
	volatile int8_t x232 = INT8_MAX;
	int64_t t12 = 13485751963LL;

	t12 = ((x229<<(x230%x231))-x232);

	if (t12 != 3335471957447003146LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x266 = 729821846LLU;
	int8_t x267 = 7;
	volatile uint32_t t13 = 1249239597U;

	t13 = ((x265<<(x266%x267))-x268);

	if (t13 != 3222464001U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x293 = 1459;
	int64_t x294 = INT64_MIN;
	int8_t x295 = -1;
	uint32_t x296 = 42129538U;
	static volatile uint32_t t14 = 369900522U;

	t14 = ((x293<<(x294%x295))-x296);

	if (t14 != 4252839217U) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x334 = UINT64_MAX;
	static int8_t x335 = INT8_MAX;
	volatile int32_t x336 = -1;
	int32_t t15 = -142;

	t15 = ((x333<<(x334%x335))-x336);

	if (t15 != 47) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x357 = 4U;
	uint32_t x358 = 1U;
	int8_t x359 = INT8_MAX;
	int16_t x360 = INT16_MIN;
	int32_t t16 = 38;

	t16 = ((x357<<(x358%x359))-x360);

	if (t16 != 32776) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x362 = 14;
	int8_t x363 = INT8_MIN;
	uint16_t x364 = UINT16_MAX;
	volatile uint64_t t17 = 40LLU;

	t17 = ((x361<<(x362%x363))-x364);

	if (t17 != 14772748289LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x393 = 6801846U;
	volatile int32_t x394 = INT32_MIN;
	int16_t x395 = 1;
	uint64_t x396 = UINT64_MAX;
	volatile uint64_t t18 = 3655LLU;

	t18 = ((x393<<(x394%x395))-x396);

	if (t18 != 6801847LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x421 = 871U;
	uint8_t x422 = 0U;
	static volatile int64_t x424 = -1LL;
	int64_t t19 = -324018LL;

	t19 = ((x421<<(x422%x423))-x424);

	if (t19 != 872LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x429 = 19U;
	volatile int16_t x431 = -1;
	int16_t x432 = -2190;
	int32_t t20 = -7;

	t20 = ((x429<<(x430%x431))-x432);

	if (t20 != 2209) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x506 = -1561;
	uint64_t x507 = 10LLU;
	int16_t x508 = INT16_MIN;
	int32_t t21 = -197002;

	t21 = ((x505<<(x506%x507))-x508);

	if (t21 != 923424) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x521 = 26U;
	volatile uint16_t x522 = 169U;
	int8_t x523 = -3;
	static uint16_t x524 = 3U;
	volatile int32_t t22 = 172;

	t22 = ((x521<<(x522%x523))-x524);

	if (t22 != 49) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x545 = 59;
	int32_t x547 = -1;
	int32_t t23 = -2;

	t23 = ((x545<<(x546%x547))-x548);

	if (t23 != -466) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x585 = UINT16_MAX;
	int16_t x586 = 52;
	int8_t x587 = -1;
	volatile int8_t x588 = -9;
	volatile int32_t t24 = 0;

	t24 = ((x585<<(x586%x587))-x588);

	if (t24 != 65544) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x633 = 11777154;
	uint32_t x635 = 932U;
	int8_t x636 = INT8_MAX;
	static int32_t t25 = -3;

	t25 = ((x633<<(x634%x635))-x636);

	if (t25 != 188434337) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x646 = UINT32_MAX;
	uint32_t x647 = UINT32_MAX;

	t26 = ((x645<<(x646%x647))-x648);

	if (t26 != 87115564U) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x653 = UINT8_MAX;
	uint8_t x655 = 1U;
	uint8_t x656 = 22U;
	volatile int32_t t27 = 38426243;

	t27 = ((x653<<(x654%x655))-x656);

	if (t27 != 233) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x705 = INT8_MAX;
	static volatile uint64_t x706 = 14LLU;
	int64_t x707 = -24728876033LL;
	int16_t x708 = 96;
	static int32_t t28 = 456;

	t28 = ((x705<<(x706%x707))-x708);

	if (t28 != 2080672) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x745 = 0U;
	static uint8_t x746 = 26U;
	static volatile uint64_t x747 = 1LLU;
	volatile int8_t x748 = INT8_MIN;

	t29 = ((x745<<(x746%x747))-x748);

	if (t29 != 128) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x757 = 1538767LL;
	uint32_t x758 = 547U;
	uint16_t x759 = 20U;
	static volatile int8_t x760 = -24;
	static int64_t t30 = 974653LL;

	t30 = ((x757<<(x758%x759))-x760);

	if (t30 != 196962200LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x769 = UINT32_MAX;
	uint16_t x770 = UINT16_MAX;
	static volatile int8_t x771 = -3;

	t31 = ((x769<<(x770%x771))-x772);

	if (t31 != 127U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x809 = 4;
	static int64_t x810 = 155LL;
	int16_t x812 = INT16_MAX;
	static int32_t t32 = -1;

	t32 = ((x809<<(x810%x811))-x812);

	if (t32 != -32763) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x821 = 22U;
	int8_t x822 = 26;
	int8_t x823 = INT8_MIN;
	uint64_t t33 = 395280561133943156LLU;

	t33 = ((x821<<(x822%x823))-x824);

	if (t33 != 18446744070863672283LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x841 = 124U;
	int8_t x842 = INT8_MAX;
	uint16_t x843 = 2U;
	volatile int32_t t34 = -1;

	t34 = ((x841<<(x842%x843))-x844);

	if (t34 != 33016) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x862 = -1;
	int64_t x864 = INT64_MAX;
	int64_t t35 = 59215848536LL;

	t35 = ((x861<<(x862%x863))-x864);

	if (t35 != -9223372036853872939LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x913 = INT32_MAX;
	volatile int16_t x914 = INT16_MAX;
	uint64_t x915 = 1LLU;
	uint16_t x916 = 2U;
	static volatile int32_t t36 = -44;

	t36 = ((x913<<(x914%x915))-x916);

	if (t36 != 2147483645) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x934 = INT16_MIN;
	static int64_t x935 = -1LL;
	int32_t x936 = INT32_MAX;
	static volatile int32_t t37 = -92;

	t37 = ((x933<<(x934%x935))-x936);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x941 = 217561650U;
	volatile int8_t x942 = INT8_MIN;
	int32_t x943 = -1;
	volatile int64_t x944 = 109099LL;
	static volatile int64_t t38 = 3855421173503454LL;

	t38 = ((x941<<(x942%x943))-x944);

	if (t38 != 217452551LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x945 = 22U;
	int64_t x946 = INT64_MIN;
	int8_t x947 = INT8_MIN;
	uint8_t x948 = UINT8_MAX;
	int32_t t39 = 1;

	t39 = ((x945<<(x946%x947))-x948);

	if (t39 != -233) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x977 = 21U;
	uint64_t x979 = 67781683999665LLU;
	volatile uint8_t x980 = 3U;

	t40 = ((x977<<(x978%x979))-x980);

	if (t40 != 165U) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x1009 = 29LLU;
	int32_t x1012 = INT32_MAX;
	uint64_t t41 = 66334367150LLU;

	t41 = ((x1009<<(x1010%x1011))-x1012);

	if (t41 != 18446744071562067998LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x1085 = 2U;
	int8_t x1087 = -1;
	uint16_t x1088 = UINT16_MAX;

	t42 = ((x1085<<(x1086%x1087))-x1088);

	if (t42 != -65533) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x1093 = INT32_MAX;
	static int16_t x1094 = -800;
	uint8_t x1095 = 5U;
	uint64_t x1096 = UINT64_MAX;
	static volatile uint64_t t43 = 1270LLU;

	t43 = ((x1093<<(x1094%x1095))-x1096);

	if (t43 != 2147483648LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x1113 = UINT64_MAX;
	int8_t x1116 = INT8_MIN;
	uint64_t t44 = 2691407164583932996LLU;

	t44 = ((x1113<<(x1114%x1115))-x1116);

	if (t44 != 18446744073709547648LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x1182 = 2977U;
	uint8_t x1183 = 5U;
	uint8_t x1184 = 14U;
	int32_t t45 = 12;

	t45 = ((x1181<<(x1182%x1183))-x1184);

	if (t45 != -14) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x1213 = 0U;
	volatile int8_t x1216 = INT8_MIN;

	t46 = ((x1213<<(x1214%x1215))-x1216);

	if (t46 != 128) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x1229 = 3U;
	int32_t x1230 = 3;
	int8_t x1231 = -1;
	static uint64_t x1232 = UINT64_MAX;
	uint64_t t47 = 380218020963LLU;

	t47 = ((x1229<<(x1230%x1231))-x1232);

	if (t47 != 4LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x1265 = INT64_MAX;
	int16_t x1266 = INT16_MIN;
	int32_t x1267 = -1;
	int8_t x1268 = INT8_MAX;
	volatile int64_t t48 = 3274167543221494516LL;

	t48 = ((x1265<<(x1266%x1267))-x1268);

	if (t48 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x1321 = 2U;
	int8_t x1322 = 1;
	static uint16_t x1324 = UINT16_MAX;
	volatile int32_t t49 = -27;

	t49 = ((x1321<<(x1322%x1323))-x1324);

	if (t49 != -65531) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x1329 = UINT64_MAX;
	volatile uint32_t x1330 = 400244U;
	uint16_t x1331 = 120U;
	uint32_t x1332 = UINT32_MAX;
	volatile uint64_t t50 = 4303823385205240LLU;

	t50 = ((x1329<<(x1330%x1331))-x1332);

	if (t50 != 18446726477228539905LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x1373 = INT16_MAX;
	int8_t x1374 = INT8_MIN;
	uint8_t x1375 = 2U;
	int8_t x1376 = 59;
	volatile int32_t t51 = 321683534;

	t51 = ((x1373<<(x1374%x1375))-x1376);

	if (t51 != 32708) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x1381 = 144;
	int64_t x1382 = -1LL;
	int8_t x1383 = -1;
	static int16_t x1384 = -1;
	volatile int32_t t52 = 27987662;

	t52 = ((x1381<<(x1382%x1383))-x1384);

	if (t52 != 145) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x1385 = 376440U;
	uint8_t x1386 = 1U;
	uint32_t t53 = 1332579U;

	t53 = ((x1385<<(x1386%x1387))-x1388);

	if (t53 != 752625U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x1423 = -1;
	int16_t x1424 = INT16_MAX;

	t54 = ((x1421<<(x1422%x1423))-x1424);

	if (t54 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x1473 = UINT32_MAX;
	int16_t x1474 = INT16_MAX;
	volatile int8_t x1475 = -6;
	int16_t x1476 = -51;
	volatile uint32_t t55 = 298096U;

	t55 = ((x1473<<(x1474%x1475))-x1476);

	if (t55 != 49U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x1486 = 105954029859341LL;
	int8_t x1487 = 12;
	static int16_t x1488 = -8714;
	volatile int32_t t56 = 274673550;

	t56 = ((x1485<<(x1486%x1487))-x1488);

	if (t56 != 8810) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x1561 = 80U;
	int32_t x1562 = INT32_MIN;
	int32_t x1563 = INT32_MIN;
	volatile int8_t x1564 = 1;

	t57 = ((x1561<<(x1562%x1563))-x1564);

	if (t57 != 79) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x1573 = INT16_MAX;
	volatile uint8_t x1574 = 54U;
	int16_t x1575 = 1;
	static volatile int32_t t58 = 1624;

	t58 = ((x1573<<(x1574%x1575))-x1576);

	if (t58 != 32750) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x1585 = 212LLU;
	int8_t x1586 = INT8_MIN;
	int8_t x1587 = INT8_MIN;
	uint32_t x1588 = 75597809U;
	uint64_t t59 = 1681LLU;

	t59 = ((x1585<<(x1586%x1587))-x1588);

	if (t59 != 18446744073633954019LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x1617 = UINT8_MAX;
	uint8_t x1618 = UINT8_MAX;
	static uint8_t x1619 = UINT8_MAX;
	int8_t x1620 = INT8_MAX;

	t60 = ((x1617<<(x1618%x1619))-x1620);

	if (t60 != 128) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x1669 = 11U;
	uint32_t x1670 = 0U;
	int64_t x1671 = 245773LL;
	int8_t x1672 = -1;
	volatile int32_t t61 = 813498203;

	t61 = ((x1669<<(x1670%x1671))-x1672);

	if (t61 != 12) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x1685 = 153067;
	uint8_t x1686 = 1U;
	int16_t x1687 = INT16_MIN;
	volatile int16_t x1688 = INT16_MAX;
	static int32_t t62 = 784450;

	t62 = ((x1685<<(x1686%x1687))-x1688);

	if (t62 != 273367) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x1690 = 2;
	int64_t x1691 = -9LL;
	volatile int8_t x1692 = 40;

	t63 = ((x1689<<(x1690%x1691))-x1692);

	if (t63 != 131028) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x1699 = INT32_MIN;
	uint32_t x1700 = UINT32_MAX;
	uint32_t t64 = 142029U;

	t64 = ((x1697<<(x1698%x1699))-x1700);

	if (t64 != 4292870145U) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x1709 = UINT64_MAX;
	int64_t x1711 = -1LL;
	static int64_t x1712 = -1LL;
	static volatile uint64_t t65 = 370957LLU;

	t65 = ((x1709<<(x1710%x1711))-x1712);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x1741 = 7U;
	static int32_t x1742 = INT32_MIN;
	uint16_t x1743 = 1U;
	uint16_t x1744 = 23U;

	t66 = ((x1741<<(x1742%x1743))-x1744);

	if (t66 != -16) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x1749 = 1U;
	volatile int16_t x1750 = INT16_MAX;
	uint8_t x1751 = 42U;
	int32_t x1752 = -2;

	t67 = ((x1749<<(x1750%x1751))-x1752);

	if (t67 != 130) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x1766 = 36018480;
	static volatile int8_t x1767 = INT8_MAX;
	int32_t t68 = -158904113;

	t68 = ((x1765<<(x1766%x1767))-x1768);

	if (t68 != 37664) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x1817 = 198U;
	int8_t x1818 = -1;
	int16_t x1820 = -29;
	uint32_t t69 = 117062308U;

	t69 = ((x1817<<(x1818%x1819))-x1820);

	if (t69 != 227U) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int8_t x1897 = 1;
	static int64_t x1899 = -1LL;
	static uint32_t x1900 = 1149983890U;
	static volatile uint32_t t70 = 26746U;

	t70 = ((x1897<<(x1898%x1899))-x1900);

	if (t70 != 3144983407U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x1921 = 523865942;
	static int64_t x1922 = -1LL;
	static uint64_t x1923 = UINT64_MAX;
	int32_t x1924 = 351;

	t71 = ((x1921<<(x1922%x1923))-x1924);

	if (t71 != 523865591) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x1945 = 453325694209LLU;
	static uint16_t x1946 = 16U;
	volatile int8_t x1947 = -26;
	int8_t x1948 = -1;
	uint64_t t72 = 1160192588352967466LLU;

	t72 = ((x1945<<(x1946%x1947))-x1948);

	if (t72 != 29709152695681025LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x1985 = 478U;
	uint32_t t73 = 26328621U;

	t73 = ((x1985<<(x1986%x1987))-x1988);

	if (t73 != 606U) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint8_t x1989 = 29U;
	int32_t x1992 = INT32_MAX;
	static int32_t t74 = -11;

	t74 = ((x1989<<(x1990%x1991))-x1992);

	if (t74 != -2147483618) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x2001 = 778261LLU;
	int64_t x2002 = INT64_MAX;
	int64_t x2003 = INT64_MAX;
	uint16_t x2004 = UINT16_MAX;
	static uint64_t t75 = 666929LLU;

	t75 = ((x2001<<(x2002%x2003))-x2004);

	if (t75 != 712726LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x2005 = 6061965021344085LLU;
	int64_t x2006 = INT64_MIN;
	int16_t x2007 = -1;
	int64_t x2008 = INT64_MIN;

	t76 = ((x2005<<(x2006%x2007))-x2008);

	if (t76 != 9229434001876119893LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x2061 = UINT32_MAX;
	static volatile uint8_t x2062 = 7U;
	int32_t x2063 = 4075;
	static uint16_t x2064 = UINT16_MAX;
	volatile uint32_t t77 = 856327051U;

	t77 = ((x2061<<(x2062%x2063))-x2064);

	if (t77 != 4294901633U) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x2077 = 286817LLU;
	int16_t x2078 = 1;
	int16_t x2079 = INT16_MAX;
	volatile int32_t x2080 = INT32_MIN;
	volatile uint64_t t78 = 18291203160181184LLU;

	t78 = ((x2077<<(x2078%x2079))-x2080);

	if (t78 != 2148057282LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint64_t x2086 = UINT64_MAX;
	uint64_t x2087 = UINT64_MAX;
	int16_t x2088 = INT16_MIN;

	t79 = ((x2085<<(x2086%x2087))-x2088);

	if (t79 != 33074) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x2097 = 73421U;
	uint8_t x2098 = 3U;
	int16_t x2099 = -302;
	volatile int32_t x2100 = -1;
	volatile uint32_t t80 = 1603U;

	t80 = ((x2097<<(x2098%x2099))-x2100);

	if (t80 != 587369U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x2153 = 2390;
	uint64_t x2156 = UINT64_MAX;
	uint64_t t81 = 98071746LLU;

	t81 = ((x2153<<(x2154%x2155))-x2156);

	if (t81 != 152961LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x2165 = UINT8_MAX;
	int64_t x2166 = INT64_MAX;
	uint8_t x2167 = 1U;
	int32_t t82 = 115;

	t82 = ((x2165<<(x2166%x2167))-x2168);

	if (t82 != 33023) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x2182 = 0;
	static int32_t x2183 = -977;
	int8_t x2184 = 1;
	volatile uint32_t t83 = 740083U;

	t83 = ((x2181<<(x2182%x2183))-x2184);

	if (t83 != 18U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x2213 = INT16_MAX;
	volatile int32_t x2214 = INT32_MAX;
	int16_t x2215 = -1;
	int64_t x2216 = -101141826LL;
	int64_t t84 = 1036LL;

	t84 = ((x2213<<(x2214%x2215))-x2216);

	if (t84 != 101174593LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x2237 = UINT64_MAX;
	uint32_t x2238 = 13957U;
	static uint32_t x2239 = 5U;
	int32_t x2240 = 0;
	volatile uint64_t t85 = 528256LLU;

	t85 = ((x2237<<(x2238%x2239))-x2240);

	if (t85 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x2258 = 1U;
	uint64_t x2259 = 11331764696845064LLU;
	uint8_t x2260 = 0U;
	volatile uint32_t t86 = 5U;

	t86 = ((x2257<<(x2258%x2259))-x2260);

	if (t86 != 3344U) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x2321 = 39103LLU;
	volatile int64_t x2322 = INT64_MIN;
	int8_t x2323 = -1;
	int16_t x2324 = 231;
	volatile uint64_t t87 = 28023551LLU;

	t87 = ((x2321<<(x2322%x2323))-x2324);

	if (t87 != 38872LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x2325 = 519042668LLU;
	int64_t x2326 = INT64_MIN;
	uint8_t x2327 = 2U;
	static int64_t x2328 = 14LL;
	uint64_t t88 = 25479644315441LLU;

	t88 = ((x2325<<(x2326%x2327))-x2328);

	if (t88 != 519042654LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x2329 = 87145U;
	volatile int16_t x2330 = 535;
	int16_t x2331 = -1;
	int64_t x2332 = -1LL;
	int64_t t89 = -28623LL;

	t89 = ((x2329<<(x2330%x2331))-x2332);

	if (t89 != 87146LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x2350 = 14;
	int16_t x2351 = -1;
	uint32_t x2352 = 0U;
	uint32_t t90 = 220753250U;

	t90 = ((x2349<<(x2350%x2351))-x2352);

	if (t90 != 1319028U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x2365 = INT16_MAX;
	int32_t x2366 = 85711520;
	volatile int64_t x2367 = -1LL;
	uint8_t x2368 = 27U;

	t91 = ((x2365<<(x2366%x2367))-x2368);

	if (t91 != 32740) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x2381 = 3;
	volatile uint32_t x2382 = UINT32_MAX;
	volatile uint8_t x2383 = 40U;
	int8_t x2384 = INT8_MAX;
	int32_t t92 = 3455705;

	t92 = ((x2381<<(x2382%x2383))-x2384);

	if (t92 != 98177) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x2445 = UINT32_MAX;
	int32_t x2446 = INT32_MIN;
	static volatile int64_t x2447 = -2LL;
	volatile uint16_t x2448 = 10570U;

	t93 = ((x2445<<(x2446%x2447))-x2448);

	if (t93 != 4294956725U) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x2453 = UINT32_MAX;
	int16_t x2454 = INT16_MAX;
	uint8_t x2455 = 6U;
	volatile uint32_t t94 = 1U;

	t94 = ((x2453<<(x2454%x2455))-x2456);

	if (t94 != 4294967167U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x2457 = 7U;
	uint16_t x2458 = 201U;
	int16_t x2459 = -1;
	int8_t x2460 = 35;
	static volatile int32_t t95 = 590022083;

	t95 = ((x2457<<(x2458%x2459))-x2460);

	if (t95 != -28) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x2530 = 2U;
	int64_t x2531 = -292231572036893385LL;
	volatile uint16_t x2532 = 879U;
	volatile int32_t t96 = 16354;

	t96 = ((x2529<<(x2530%x2531))-x2532);

	if (t96 != 261261) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x2541 = 38139U;
	int8_t x2542 = INT8_MAX;
	int32_t x2544 = -1;

	t97 = ((x2541<<(x2542%x2543))-x2544);

	if (t97 != 152557U) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x2558 = 8U;
	volatile uint64_t x2560 = 27LLU;
	uint64_t t98 = 7LLU;

	t98 = ((x2557<<(x2558%x2559))-x2560);

	if (t98 != 1625317LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x2561 = 1;
	int32_t x2562 = 26;
	static uint64_t x2563 = 6LLU;
	uint32_t x2564 = UINT32_MAX;
	uint32_t t99 = 758234U;

	t99 = ((x2561<<(x2562%x2563))-x2564);

	if (t99 != 5U) { NG(); } else { ; }
	
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

