#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = 62;
volatile uint8_t x3 = 21U;
static uint16_t x12 = UINT16_MAX;
static int32_t x52 = INT32_MAX;
static int8_t x167 = 0;
static volatile uint32_t t6 = 46168U;
uint8_t x179 = 0U;
volatile uint16_t x181 = 1828U;
int8_t x184 = INT8_MAX;
uint16_t x193 = 381U;
int32_t t10 = 11440922;
int64_t x266 = INT64_MAX;
uint8_t x268 = UINT8_MAX;
int8_t x274 = -25;
static uint32_t x298 = 1765350U;
uint32_t x312 = UINT32_MAX;
uint32_t x323 = 24U;
int8_t x325 = -1;
volatile uint16_t x383 = 1U;
int32_t x435 = 4;
static int64_t x436 = INT64_MIN;
int32_t t21 = -985961;
uint64_t x597 = 15044LLU;
uint8_t x599 = 3U;
volatile int16_t x649 = INT16_MIN;
uint8_t x763 = 1U;
uint32_t x838 = 4U;
volatile uint64_t t28 = 8LLU;
volatile int64_t t30 = -4110253547LL;
static int64_t t31 = 119224LL;
int8_t x939 = 0;
volatile int32_t t32 = -1757;
int16_t x1033 = INT16_MIN;
int16_t x1035 = 22;
volatile int16_t x1036 = -1;
static int32_t x1076 = -1;
volatile int64_t x1092 = -1LL;
uint16_t x1110 = UINT16_MAX;
volatile uint8_t x1123 = 5U;
static volatile int32_t x1184 = INT32_MAX;
static int8_t x1263 = 0;
int32_t x1268 = 7636645;
int16_t x1359 = 20;
uint64_t x1417 = UINT64_MAX;
uint8_t x1419 = 0U;
static volatile int32_t x1420 = INT32_MIN;
volatile int64_t t47 = -1LL;
int64_t x1596 = -1LL;
int64_t x1625 = INT64_MIN;
volatile int64_t x1628 = -1LL;
int8_t x1669 = -1;
static int16_t x1733 = INT16_MAX;
uint64_t x1736 = 29351781LLU;
volatile int32_t t58 = -8814461;
volatile int16_t x1765 = INT16_MIN;
static uint8_t x1767 = 1U;
uint16_t x1817 = 3U;
volatile uint16_t x1861 = 1U;
uint8_t x1887 = 2U;
int32_t x1938 = INT32_MIN;
volatile int64_t x2026 = INT64_MIN;
int16_t x2028 = -30;
static volatile uint16_t x2179 = 0U;
int8_t x2180 = -1;
int32_t t67 = 194;
volatile uint16_t x2183 = 8U;
uint8_t x2209 = 63U;
int8_t x2210 = INT8_MIN;
int64_t x2211 = 0LL;
volatile uint64_t x2234 = 3LLU;
volatile int8_t x2301 = -1;
static int16_t x2302 = INT16_MIN;
uint16_t x2638 = 327U;
static uint64_t x2639 = 13LLU;
uint16_t x2683 = 2U;
static volatile int32_t x2720 = INT32_MAX;
int32_t x2730 = INT32_MIN;
uint32_t x2802 = 84867U;
static volatile int32_t t88 = -3207048;
int8_t x2895 = 0;
volatile uint64_t t91 = 24011LLU;
int32_t t92 = -455952;
int32_t x2916 = INT32_MIN;
uint8_t x2932 = 15U;
volatile int8_t x3061 = 0;
volatile uint16_t x3069 = 5U;


void f0(void) {
	int16_t x2 = -1;
	int8_t x4 = INT8_MAX;
	int32_t t0 = -1;

	t0 = (((x1==x2)<<x3)/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = 3;
	static int64_t x10 = INT64_MIN;
	uint8_t x11 = 8U;
	static volatile int32_t t1 = -1022140;

	t1 = (((x9==x10)<<x11)/x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x49 = -1;
	volatile int32_t x50 = INT32_MIN;
	volatile uint16_t x51 = 11U;
	int32_t t2 = -76;

	t2 = (((x49==x50)<<x51)/x52);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x57 = INT32_MAX;
	int16_t x58 = 10949;
	uint16_t x59 = 0U;
	volatile uint8_t x60 = UINT8_MAX;
	int32_t t3 = -7;

	t3 = (((x57==x58)<<x59)/x60);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x117 = 51;
	int16_t x118 = 6;
	uint32_t x119 = 27U;
	uint16_t x120 = 66U;
	int32_t t4 = -264367736;

	t4 = (((x117==x118)<<x119)/x120);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x165 = UINT8_MAX;
	int32_t x166 = INT32_MAX;
	int16_t x168 = INT16_MAX;
	int32_t t5 = 2307331;

	t5 = (((x165==x166)<<x167)/x168);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x169 = 10163150133620LL;
	int16_t x170 = INT16_MIN;
	static uint8_t x171 = 9U;
	uint32_t x172 = UINT32_MAX;

	t6 = (((x169==x170)<<x171)/x172);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x177 = -9;
	static volatile uint32_t x178 = UINT32_MAX;
	static uint64_t x180 = UINT64_MAX;
	uint64_t t7 = 2515628237117LLU;

	t7 = (((x177==x178)<<x179)/x180);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x182 = -1LL;
	volatile uint8_t x183 = 11U;
	static volatile int32_t t8 = -450667983;

	t8 = (((x181==x182)<<x183)/x184);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x194 = -12488;
	uint8_t x195 = 2U;
	static int64_t x196 = INT64_MAX;
	volatile int64_t t9 = -410391370571303906LL;

	t9 = (((x193==x194)<<x195)/x196);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x245 = 19U;
	int8_t x246 = INT8_MAX;
	static uint8_t x247 = 2U;
	int16_t x248 = -1;

	t10 = (((x245==x246)<<x247)/x248);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x265 = INT8_MAX;
	int16_t x267 = 1;
	static volatile int32_t t11 = -20;

	t11 = (((x265==x266)<<x267)/x268);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x273 = -1;
	int32_t x275 = 2;
	int64_t x276 = INT64_MIN;
	int64_t t12 = 385527677750472169LL;

	t12 = (((x273==x274)<<x275)/x276);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x297 = 188341U;
	volatile uint8_t x299 = 0U;
	static volatile int32_t x300 = -1;
	int32_t t13 = -28;

	t13 = (((x297==x298)<<x299)/x300);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x309 = INT8_MIN;
	static uint8_t x310 = 3U;
	volatile int32_t x311 = 1;
	uint32_t t14 = 13U;

	t14 = (((x309==x310)<<x311)/x312);

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x321 = -1;
	int16_t x322 = INT16_MAX;
	uint32_t x324 = UINT32_MAX;
	volatile uint32_t t15 = 223336U;

	t15 = (((x321==x322)<<x323)/x324);

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x326 = 223LL;
	int16_t x327 = 7;
	static int32_t x328 = INT32_MIN;
	volatile int32_t t16 = -775;

	t16 = (((x325==x326)<<x327)/x328);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x349 = 1727548;
	int16_t x350 = -1;
	uint8_t x351 = 0U;
	uint16_t x352 = UINT16_MAX;
	volatile int32_t t17 = 483684235;

	t17 = (((x349==x350)<<x351)/x352);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x381 = -3;
	int16_t x382 = -1;
	int32_t x384 = INT32_MIN;
	int32_t t18 = -7638101;

	t18 = (((x381==x382)<<x383)/x384);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x433 = -1;
	int16_t x434 = 1591;
	volatile int64_t t19 = -431882644701802276LL;

	t19 = (((x433==x434)<<x435)/x436);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x477 = INT8_MIN;
	volatile int8_t x478 = INT8_MIN;
	uint8_t x479 = 0U;
	uint16_t x480 = 302U;
	int32_t t20 = -867372;

	t20 = (((x477==x478)<<x479)/x480);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x549 = UINT64_MAX;
	int16_t x550 = -1;
	volatile uint8_t x551 = 0U;
	int8_t x552 = INT8_MIN;

	t21 = (((x549==x550)<<x551)/x552);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x598 = INT64_MIN;
	volatile int8_t x600 = -1;
	volatile int32_t t22 = 2090839;

	t22 = (((x597==x598)<<x599)/x600);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x629 = INT8_MIN;
	static int32_t x630 = INT32_MIN;
	uint16_t x631 = 14U;
	uint32_t x632 = 62628165U;
	uint32_t t23 = 697739U;

	t23 = (((x629==x630)<<x631)/x632);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x650 = INT32_MIN;
	int8_t x651 = 9;
	static int16_t x652 = -30;
	volatile int32_t t24 = -146184;

	t24 = (((x649==x650)<<x651)/x652);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x741 = INT16_MAX;
	static uint32_t x742 = 119343754U;
	static int8_t x743 = 1;
	uint16_t x744 = 5U;
	volatile int32_t t25 = -70264;

	t25 = (((x741==x742)<<x743)/x744);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x761 = INT64_MAX;
	int32_t x762 = -1;
	volatile int16_t x764 = INT16_MIN;
	static int32_t t26 = -4780438;

	t26 = (((x761==x762)<<x763)/x764);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x829 = 17U;
	static int32_t x830 = -756284;
	int16_t x831 = 0;
	uint32_t x832 = 3367294U;
	uint32_t t27 = 2309713U;

	t27 = (((x829==x830)<<x831)/x832);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x837 = 570235879U;
	static uint32_t x839 = 3U;
	uint64_t x840 = UINT64_MAX;

	t28 = (((x837==x838)<<x839)/x840);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x873 = 7911U;
	static int8_t x874 = INT8_MIN;
	uint16_t x875 = 12U;
	static int32_t x876 = -161018;
	static volatile int32_t t29 = 20;

	t29 = (((x873==x874)<<x875)/x876);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x917 = -417;
	int64_t x918 = INT64_MIN;
	uint8_t x919 = 7U;
	int64_t x920 = 536399717944LL;

	t30 = (((x917==x918)<<x919)/x920);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x921 = -148754152531LL;
	volatile uint8_t x922 = UINT8_MAX;
	int16_t x923 = 0;
	int64_t x924 = INT64_MAX;

	t31 = (((x921==x922)<<x923)/x924);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x937 = INT64_MIN;
	uint64_t x938 = 1345LLU;
	int16_t x940 = INT16_MIN;

	t32 = (((x937==x938)<<x939)/x940);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x1034 = UINT64_MAX;
	volatile int32_t t33 = 961039965;

	t33 = (((x1033==x1034)<<x1035)/x1036);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x1073 = 2U;
	static uint16_t x1074 = 87U;
	static int8_t x1075 = 5;
	volatile int32_t t34 = 18765;

	t34 = (((x1073==x1074)<<x1075)/x1076);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int16_t x1089 = -10813;
	int32_t x1090 = -676209;
	volatile int8_t x1091 = 12;
	volatile int64_t t35 = 1LL;

	t35 = (((x1089==x1090)<<x1091)/x1092);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1109 = INT64_MIN;
	uint32_t x1111 = 24U;
	uint8_t x1112 = 5U;
	int32_t t36 = 23549579;

	t36 = (((x1109==x1110)<<x1111)/x1112);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1121 = INT16_MAX;
	uint8_t x1122 = 11U;
	static volatile int32_t x1124 = -1;
	int32_t t37 = -107146876;

	t37 = (((x1121==x1122)<<x1123)/x1124);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x1181 = INT64_MIN;
	static volatile int16_t x1182 = -1;
	int8_t x1183 = 1;
	int32_t t38 = 54916100;

	t38 = (((x1181==x1182)<<x1183)/x1184);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x1197 = -1;
	static uint16_t x1198 = 0U;
	uint16_t x1199 = 5U;
	static int8_t x1200 = -1;
	volatile int32_t t39 = 405;

	t39 = (((x1197==x1198)<<x1199)/x1200);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x1205 = INT16_MIN;
	int16_t x1206 = -1;
	int16_t x1207 = 0;
	volatile int32_t x1208 = INT32_MIN;
	int32_t t40 = 881;

	t40 = (((x1205==x1206)<<x1207)/x1208);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x1245 = -1;
	int64_t x1246 = INT64_MAX;
	int8_t x1247 = 31;
	int64_t x1248 = INT64_MAX;
	volatile int64_t t41 = -2831303065720LL;

	t41 = (((x1245==x1246)<<x1247)/x1248);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x1261 = INT16_MAX;
	int32_t x1262 = -4424;
	uint32_t x1264 = UINT32_MAX;
	static volatile uint32_t t42 = 3U;

	t42 = (((x1261==x1262)<<x1263)/x1264);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x1265 = 1U;
	volatile int8_t x1266 = INT8_MIN;
	uint8_t x1267 = 13U;
	static int32_t t43 = 703920887;

	t43 = (((x1265==x1266)<<x1267)/x1268);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x1285 = 1124066U;
	uint8_t x1286 = 0U;
	int64_t x1287 = 28LL;
	uint64_t x1288 = 543703178078LLU;
	volatile uint64_t t44 = 10449648584537779LLU;

	t44 = (((x1285==x1286)<<x1287)/x1288);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x1357 = 1625U;
	static int8_t x1358 = INT8_MIN;
	int8_t x1360 = INT8_MIN;
	int32_t t45 = -6;

	t45 = (((x1357==x1358)<<x1359)/x1360);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x1418 = UINT16_MAX;
	int32_t t46 = -175;

	t46 = (((x1417==x1418)<<x1419)/x1420);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x1441 = INT8_MIN;
	static int16_t x1442 = -1;
	int32_t x1443 = 1;
	static volatile int64_t x1444 = INT64_MAX;

	t47 = (((x1441==x1442)<<x1443)/x1444);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x1473 = INT8_MIN;
	int16_t x1474 = 127;
	int16_t x1475 = 4;
	volatile int8_t x1476 = -1;
	int32_t t48 = 4636;

	t48 = (((x1473==x1474)<<x1475)/x1476);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x1501 = UINT8_MAX;
	volatile int8_t x1502 = 1;
	volatile uint16_t x1503 = 1U;
	uint16_t x1504 = 543U;
	volatile int32_t t49 = 197848199;

	t49 = (((x1501==x1502)<<x1503)/x1504);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x1529 = -1LL;
	volatile uint16_t x1530 = 10U;
	uint16_t x1531 = 2U;
	static int8_t x1532 = -1;
	int32_t t50 = -91626;

	t50 = (((x1529==x1530)<<x1531)/x1532);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x1593 = INT64_MIN;
	int32_t x1594 = 34;
	static uint32_t x1595 = 2U;
	int64_t t51 = -111943073410219710LL;

	t51 = (((x1593==x1594)<<x1595)/x1596);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x1609 = INT64_MAX;
	int8_t x1610 = -1;
	uint16_t x1611 = 0U;
	int32_t x1612 = INT32_MIN;
	static int32_t t52 = -8;

	t52 = (((x1609==x1610)<<x1611)/x1612);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x1626 = INT64_MIN;
	static uint8_t x1627 = 3U;
	static int64_t t53 = 24093824647LL;

	t53 = (((x1625==x1626)<<x1627)/x1628);

	if (t53 != -8LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x1670 = 5U;
	static volatile uint8_t x1671 = 1U;
	uint16_t x1672 = 709U;
	int32_t t54 = -19;

	t54 = (((x1669==x1670)<<x1671)/x1672);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x1697 = 621U;
	volatile int32_t x1698 = INT32_MAX;
	uint16_t x1699 = 3U;
	static int32_t x1700 = INT32_MIN;
	static int32_t t55 = 79;

	t55 = (((x1697==x1698)<<x1699)/x1700);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x1729 = -1LL;
	static volatile int16_t x1730 = INT16_MAX;
	volatile int8_t x1731 = 1;
	int16_t x1732 = INT16_MIN;
	static volatile int32_t t56 = -931395682;

	t56 = (((x1729==x1730)<<x1731)/x1732);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x1734 = 77U;
	static uint8_t x1735 = 2U;
	volatile uint64_t t57 = 4615395976846787151LLU;

	t57 = (((x1733==x1734)<<x1735)/x1736);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x1745 = INT32_MIN;
	int32_t x1746 = INT32_MIN;
	uint16_t x1747 = 4U;
	volatile int32_t x1748 = 1012999188;

	t58 = (((x1745==x1746)<<x1747)/x1748);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x1766 = 26;
	uint16_t x1768 = 2869U;
	volatile int32_t t59 = -2465221;

	t59 = (((x1765==x1766)<<x1767)/x1768);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x1818 = -3832509932860238LL;
	uint16_t x1819 = 14U;
	uint32_t x1820 = UINT32_MAX;
	uint32_t t60 = 3505U;

	t60 = (((x1817==x1818)<<x1819)/x1820);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x1862 = UINT64_MAX;
	int16_t x1863 = 1;
	int16_t x1864 = INT16_MIN;
	volatile int32_t t61 = 278646;

	t61 = (((x1861==x1862)<<x1863)/x1864);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x1885 = -1;
	uint64_t x1886 = UINT64_MAX;
	volatile uint64_t x1888 = UINT64_MAX;
	static uint64_t t62 = 1761035935LLU;

	t62 = (((x1885==x1886)<<x1887)/x1888);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x1937 = 245;
	static uint16_t x1939 = 0U;
	int32_t x1940 = -11349802;
	int32_t t63 = -1020035;

	t63 = (((x1937==x1938)<<x1939)/x1940);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x2021 = INT8_MAX;
	int8_t x2022 = INT8_MIN;
	uint8_t x2023 = 3U;
	static uint8_t x2024 = 10U;
	int32_t t64 = 109126432;

	t64 = (((x2021==x2022)<<x2023)/x2024);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x2025 = INT16_MIN;
	volatile int32_t x2027 = 1;
	int32_t t65 = -9903;

	t65 = (((x2025==x2026)<<x2027)/x2028);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x2053 = 1;
	int32_t x2054 = INT32_MIN;
	uint64_t x2055 = 21LLU;
	volatile uint64_t x2056 = 4863171751975LLU;
	static volatile uint64_t t66 = 54345209LLU;

	t66 = (((x2053==x2054)<<x2055)/x2056);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x2177 = -2423LL;
	uint64_t x2178 = 6418478314LLU;

	t67 = (((x2177==x2178)<<x2179)/x2180);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x2181 = -120;
	static int8_t x2182 = INT8_MAX;
	volatile uint8_t x2184 = 1U;
	int32_t t68 = -1865;

	t68 = (((x2181==x2182)<<x2183)/x2184);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x2212 = INT8_MAX;
	int32_t t69 = 6833;

	t69 = (((x2209==x2210)<<x2211)/x2212);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x2233 = UINT8_MAX;
	int8_t x2235 = 10;
	static int32_t x2236 = INT32_MIN;
	int32_t t70 = 120;

	t70 = (((x2233==x2234)<<x2235)/x2236);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x2249 = UINT32_MAX;
	int64_t x2250 = INT64_MIN;
	int32_t x2251 = 2;
	uint64_t x2252 = 3987293530553512309LLU;
	uint64_t t71 = 34763521768281LLU;

	t71 = (((x2249==x2250)<<x2251)/x2252);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x2277 = 620556U;
	static int32_t x2278 = INT32_MIN;
	int16_t x2279 = 0;
	static int64_t x2280 = 541955336LL;
	int64_t t72 = -6383545657LL;

	t72 = (((x2277==x2278)<<x2279)/x2280);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x2303 = 1U;
	static int16_t x2304 = INT16_MAX;
	volatile int32_t t73 = 0;

	t73 = (((x2301==x2302)<<x2303)/x2304);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x2309 = UINT8_MAX;
	static uint32_t x2310 = 4158687U;
	uint8_t x2311 = 0U;
	int32_t x2312 = 1654;
	int32_t t74 = 25195046;

	t74 = (((x2309==x2310)<<x2311)/x2312);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x2321 = 2U;
	int8_t x2322 = INT8_MIN;
	uint16_t x2323 = 0U;
	int32_t x2324 = -1;
	volatile int32_t t75 = -22;

	t75 = (((x2321==x2322)<<x2323)/x2324);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x2457 = -113705LL;
	static volatile int32_t x2458 = INT32_MIN;
	int8_t x2459 = 10;
	int8_t x2460 = INT8_MIN;
	volatile int32_t t76 = 3391;

	t76 = (((x2457==x2458)<<x2459)/x2460);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x2489 = INT32_MIN;
	static uint8_t x2490 = 16U;
	int8_t x2491 = 3;
	int16_t x2492 = 13743;
	int32_t t77 = 5;

	t77 = (((x2489==x2490)<<x2491)/x2492);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x2501 = UINT32_MAX;
	volatile int64_t x2502 = -1LL;
	static uint64_t x2503 = 8LLU;
	uint16_t x2504 = 29U;
	int32_t t78 = -16;

	t78 = (((x2501==x2502)<<x2503)/x2504);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x2573 = 239477470U;
	static uint64_t x2574 = 34LLU;
	volatile uint8_t x2575 = 0U;
	uint16_t x2576 = UINT16_MAX;
	static volatile int32_t t79 = -3;

	t79 = (((x2573==x2574)<<x2575)/x2576);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x2637 = UINT16_MAX;
	volatile int32_t x2640 = -14236974;
	int32_t t80 = -97;

	t80 = (((x2637==x2638)<<x2639)/x2640);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x2681 = 1;
	volatile int16_t x2682 = -1;
	static uint64_t x2684 = 1286LLU;
	volatile uint64_t t81 = 118167321102408LLU;

	t81 = (((x2681==x2682)<<x2683)/x2684);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x2717 = 6821704430LL;
	volatile uint32_t x2718 = 374189U;
	int16_t x2719 = 1;
	static int32_t t82 = -7018852;

	t82 = (((x2717==x2718)<<x2719)/x2720);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x2729 = -1;
	volatile int8_t x2731 = 10;
	int16_t x2732 = 644;
	int32_t t83 = 95;

	t83 = (((x2729==x2730)<<x2731)/x2732);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x2761 = 5648U;
	int8_t x2762 = INT8_MAX;
	int32_t x2763 = 0;
	volatile int16_t x2764 = INT16_MAX;
	volatile int32_t t84 = -43420604;

	t84 = (((x2761==x2762)<<x2763)/x2764);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x2765 = 1354;
	static int64_t x2766 = -1LL;
	uint16_t x2767 = 3U;
	uint8_t x2768 = UINT8_MAX;
	volatile int32_t t85 = 160;

	t85 = (((x2765==x2766)<<x2767)/x2768);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x2781 = 3177422301464LLU;
	int64_t x2782 = INT64_MAX;
	int8_t x2783 = 16;
	volatile int8_t x2784 = INT8_MIN;
	volatile int32_t t86 = 440;

	t86 = (((x2781==x2782)<<x2783)/x2784);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x2789 = 0;
	int32_t x2790 = -1;
	static uint8_t x2791 = 1U;
	uint16_t x2792 = UINT16_MAX;
	int32_t t87 = 3024;

	t87 = (((x2789==x2790)<<x2791)/x2792);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x2801 = UINT8_MAX;
	int32_t x2803 = 2;
	volatile int32_t x2804 = INT32_MAX;

	t88 = (((x2801==x2802)<<x2803)/x2804);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x2809 = INT16_MIN;
	int8_t x2810 = INT8_MAX;
	static uint8_t x2811 = 11U;
	int32_t x2812 = -1;
	volatile int32_t t89 = 809;

	t89 = (((x2809==x2810)<<x2811)/x2812);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint16_t x2849 = 7U;
	volatile uint64_t x2850 = 4830181019125LLU;
	int32_t x2851 = 8;
	static int8_t x2852 = INT8_MAX;
	volatile int32_t t90 = -2184;

	t90 = (((x2849==x2850)<<x2851)/x2852);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x2893 = 783U;
	int16_t x2894 = -1;
	uint64_t x2896 = 6134022515747LLU;

	t91 = (((x2893==x2894)<<x2895)/x2896);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x2909 = INT32_MIN;
	uint32_t x2910 = UINT32_MAX;
	int8_t x2911 = 0;
	uint16_t x2912 = 4996U;

	t92 = (((x2909==x2910)<<x2911)/x2912);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x2913 = UINT64_MAX;
	int8_t x2914 = INT8_MIN;
	uint16_t x2915 = 1U;
	int32_t t93 = -5450;

	t93 = (((x2913==x2914)<<x2915)/x2916);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x2929 = 14055;
	int32_t x2930 = 2887986;
	static volatile int8_t x2931 = 0;
	volatile int32_t t94 = -5269;

	t94 = (((x2929==x2930)<<x2931)/x2932);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x3025 = 0U;
	volatile int64_t x3026 = -1LL;
	int8_t x3027 = 3;
	volatile int32_t x3028 = -30683;
	volatile int32_t t95 = 15;

	t95 = (((x3025==x3026)<<x3027)/x3028);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x3062 = -1;
	uint8_t x3063 = 6U;
	volatile int32_t x3064 = INT32_MIN;
	static int32_t t96 = 72;

	t96 = (((x3061==x3062)<<x3063)/x3064);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x3070 = 7588565792LLU;
	volatile int8_t x3071 = 0;
	static int64_t x3072 = -510LL;
	volatile int64_t t97 = 96491560433745LL;

	t97 = (((x3069==x3070)<<x3071)/x3072);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x3077 = -1;
	uint32_t x3078 = 45465U;
	int8_t x3079 = 1;
	int32_t x3080 = -1;
	int32_t t98 = -8313;

	t98 = (((x3077==x3078)<<x3079)/x3080);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x3089 = -4;
	uint32_t x3090 = UINT32_MAX;
	uint32_t x3091 = 3U;
	static int16_t x3092 = 1;
	int32_t t99 = -394519;

	t99 = (((x3089==x3090)<<x3091)/x3092);

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

