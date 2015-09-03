#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t t2 = 59149290819561LLU;
uint16_t x166 = 5U;
int32_t x167 = -1;
static volatile int32_t t3 = -14;
int32_t t4 = -1961;
int16_t x231 = INT16_MIN;
uint16_t x413 = 10U;
int32_t x437 = 1561;
volatile uint64_t x438 = 16LLU;
uint8_t x548 = UINT8_MAX;
int32_t t11 = 1584;
int8_t x559 = INT8_MIN;
volatile int32_t t12 = -1;
uint32_t x630 = 4U;
int32_t x631 = INT32_MAX;
uint8_t x642 = 6U;
volatile uint8_t x643 = 61U;
int16_t x770 = 0;
uint32_t t18 = 125239U;
int32_t x875 = 177302;
uint32_t x986 = 0U;
int8_t x1001 = 22;
uint64_t x1057 = UINT64_MAX;
uint32_t x1058 = 39U;
volatile int64_t x1081 = 372092537527033LL;
volatile uint8_t x1082 = 9U;
uint32_t x1149 = 1024854U;
volatile int64_t x1183 = INT64_MIN;
int8_t x1313 = 1;
uint64_t t31 = UINT64_MAX;
int64_t x1539 = -145491791745652LL;
int8_t x1566 = 0;
int32_t t37 = -16065974;
volatile uint32_t x1622 = 0U;
volatile int32_t t38 = 75821526;
uint32_t x1775 = UINT32_MAX;
int8_t x1776 = -1;
uint32_t t40 = 22660U;
static volatile int8_t x1922 = 9;
volatile int16_t x2208 = 2;
uint8_t x2285 = 3U;
int16_t x2287 = -1;
int8_t x2510 = 56;
volatile uint64_t t46 = 66750743LLU;
uint16_t x2525 = 5966U;
int16_t x2527 = INT16_MAX;
uint32_t x2557 = 5264723U;
static uint8_t x2558 = 0U;
volatile uint16_t x2559 = 15U;
volatile uint32_t t48 = 0U;
int32_t x2629 = 163768;
static uint64_t x2789 = UINT64_MAX;
static int8_t x2882 = 1;
int64_t x2884 = -1LL;
static int16_t x2906 = 2;
int64_t x3016 = -14791860530LL;
volatile uint64_t x3036 = 6715LLU;
uint32_t t56 = 1U;
int32_t x3079 = INT32_MIN;
int8_t x3080 = INT8_MIN;
static uint32_t x3082 = 0U;
int32_t x3203 = INT32_MIN;
int32_t x3204 = 499;
uint64_t x3227 = 187626968826LLU;
volatile uint32_t x3316 = 163032595U;
uint16_t x3378 = 3U;
int64_t x3380 = -1LL;
uint8_t x3436 = 40U;
static int8_t x3553 = INT8_MAX;
uint8_t x3566 = 14U;
static int16_t x3650 = 1;
static int64_t x3659 = INT64_MIN;
volatile int32_t t71 = 0;
int16_t x3919 = INT16_MIN;
static int8_t x4014 = 0;
uint8_t x4133 = UINT8_MAX;
int8_t x4134 = 12;
volatile int32_t t78 = -16247217;
int32_t x4271 = INT32_MIN;
static volatile int32_t x4295 = -1;
volatile uint32_t t80 = 21U;
int64_t t82 = INT64_MAX;
int32_t t84 = 130;
int32_t x4870 = 0;
uint16_t x4918 = 29U;
uint16_t x4920 = 385U;
volatile uint64_t t87 = 38002697267188015LLU;
int16_t x4941 = INT16_MAX;
int32_t x4942 = 1;
volatile int32_t t88 = 454661;
uint16_t x5110 = 5U;
volatile int64_t t89 = 382677561LL;
uint16_t x5137 = 22U;
int32_t x5159 = INT32_MIN;
volatile int64_t t91 = INT64_MAX;
volatile int32_t t92 = -731202528;
uint8_t x5252 = UINT8_MAX;
static int8_t x5359 = INT8_MIN;
volatile uint64_t t95 = 6308728438806124718LLU;
volatile uint16_t x5395 = 9068U;
uint8_t x5491 = 80U;
static uint8_t x5602 = 14U;
int8_t x5677 = 1;
static uint16_t x5678 = 0U;
volatile int32_t t99 = -14;


void f0(void) {
	static uint16_t x73 = 1U;
	static uint16_t x74 = 1U;
	static uint32_t x75 = UINT32_MAX;
	int32_t x76 = INT32_MAX;
	volatile int32_t t0 = -3607036;

	t0 = (x73<<(x74>>(x75==x76)));

	if (t0 != 2) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x153 = 205406176184435569LLU;
	volatile uint16_t x154 = 3U;
	int8_t x155 = INT8_MIN;
	volatile uint64_t x156 = 911473738124379898LLU;
	uint64_t t1 = 608364651591LLU;

	t1 = (x153<<(x154>>(x155==x156)));

	if (t1 != 1643249409475484552LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x161 = 1960913127LLU;
	int8_t x162 = 14;
	static volatile int8_t x163 = -1;
	int64_t x164 = -1688234499230368LL;

	t2 = (x161<<(x162>>(x163==x164)));

	if (t2 != 32127600672768LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x165 = UINT8_MAX;
	static int32_t x168 = -1;

	t3 = (x165<<(x166>>(x167==x168)));

	if (t3 != 1020) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x201 = INT8_MAX;
	uint8_t x202 = 1U;
	static int8_t x203 = -1;
	volatile int32_t x204 = INT32_MAX;

	t4 = (x201<<(x202>>(x203==x204)));

	if (t4 != 254) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x229 = 571U;
	int16_t x230 = 17;
	int16_t x232 = INT16_MIN;
	static uint32_t t5 = 23180328U;

	t5 = (x229<<(x230>>(x231==x232)));

	if (t5 != 146176U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x337 = INT8_MAX;
	int8_t x338 = 1;
	int32_t x339 = INT32_MIN;
	uint64_t x340 = UINT64_MAX;
	int32_t t6 = 499278;

	t6 = (x337<<(x338>>(x339==x340)));

	if (t6 != 254) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x414 = 7LLU;
	int8_t x415 = INT8_MIN;
	int64_t x416 = INT64_MAX;
	volatile int32_t t7 = -151624;

	t7 = (x413<<(x414>>(x415==x416)));

	if (t7 != 1280) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x429 = 1174;
	volatile uint8_t x430 = 4U;
	int8_t x431 = 0;
	static int64_t x432 = 188227415627632LL;
	volatile int32_t t8 = 0;

	t8 = (x429<<(x430>>(x431==x432)));

	if (t8 != 18784) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x439 = 692501U;
	int32_t x440 = 1141196;
	int32_t t9 = -4007730;

	t9 = (x437<<(x438>>(x439==x440)));

	if (t9 != 102301696) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x545 = 563U;
	int16_t x546 = 0;
	static uint8_t x547 = 15U;
	volatile int32_t t10 = 465876;

	t10 = (x545<<(x546>>(x547==x548)));

	if (t10 != 563) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x549 = INT16_MAX;
	volatile uint16_t x550 = 1U;
	int8_t x551 = INT8_MIN;
	int32_t x552 = -3369835;

	t11 = (x549<<(x550>>(x551==x552)));

	if (t11 != 65534) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x557 = INT8_MAX;
	uint8_t x558 = 1U;
	static volatile uint64_t x560 = 9880789623230104LLU;

	t12 = (x557<<(x558>>(x559==x560)));

	if (t12 != 254) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x629 = UINT32_MAX;
	volatile int64_t x632 = INT64_MIN;
	uint32_t t13 = 1828119520U;

	t13 = (x629<<(x630>>(x631==x632)));

	if (t13 != 4294967280U) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x641 = 7U;
	static uint16_t x644 = UINT16_MAX;
	static volatile int32_t t14 = -429895161;

	t14 = (x641<<(x642>>(x643==x644)));

	if (t14 != 448) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x757 = UINT16_MAX;
	int32_t x758 = 1;
	uint32_t x759 = UINT32_MAX;
	uint16_t x760 = UINT16_MAX;
	volatile int32_t t15 = -86423;

	t15 = (x757<<(x758>>(x759==x760)));

	if (t15 != 131070) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x769 = UINT32_MAX;
	int16_t x771 = -1;
	static uint64_t x772 = 473LLU;
	uint32_t t16 = UINT32_MAX;

	t16 = (x769<<(x770>>(x771==x772)));

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x797 = 145U;
	volatile uint16_t x798 = 0U;
	uint8_t x799 = UINT8_MAX;
	static volatile int8_t x800 = INT8_MAX;
	int32_t t17 = 2539;

	t17 = (x797<<(x798>>(x799==x800)));

	if (t17 != 145) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x845 = UINT32_MAX;
	volatile uint8_t x846 = 5U;
	static uint64_t x847 = UINT64_MAX;
	int64_t x848 = -1LL;

	t18 = (x845<<(x846>>(x847==x848)));

	if (t18 != 4294967292U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x873 = 232U;
	uint64_t x874 = 1LLU;
	volatile int64_t x876 = INT64_MAX;
	volatile uint32_t t19 = 373422949U;

	t19 = (x873<<(x874>>(x875==x876)));

	if (t19 != 464U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x877 = 38423;
	uint16_t x878 = 1U;
	int16_t x879 = INT16_MIN;
	int64_t x880 = -4580LL;
	volatile int32_t t20 = 407;

	t20 = (x877<<(x878>>(x879==x880)));

	if (t20 != 76846) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x985 = 11U;
	uint64_t x987 = UINT64_MAX;
	static volatile int64_t x988 = INT64_MIN;
	static volatile int32_t t21 = -1;

	t21 = (x985<<(x986>>(x987==x988)));

	if (t21 != 11) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x1002 = 0;
	uint8_t x1003 = 95U;
	int64_t x1004 = -22270293990LL;
	int32_t t22 = 257600786;

	t22 = (x1001<<(x1002>>(x1003==x1004)));

	if (t22 != 22) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1059 = 0;
	volatile uint8_t x1060 = UINT8_MAX;
	uint64_t t23 = 450033649LLU;

	t23 = (x1057<<(x1058>>(x1059==x1060)));

	if (t23 != 18446743523953737728LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1061 = 31U;
	uint8_t x1062 = 4U;
	int8_t x1063 = INT8_MIN;
	int64_t x1064 = INT64_MAX;
	static int32_t t24 = 515135;

	t24 = (x1061<<(x1062>>(x1063==x1064)));

	if (t24 != 496) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1083 = INT32_MAX;
	static uint64_t x1084 = UINT64_MAX;
	int64_t t25 = 55351LL;

	t25 = (x1081<<(x1082>>(x1083==x1084)));

	if (t25 != 190511379213840896LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1133 = 0;
	uint8_t x1134 = 4U;
	uint32_t x1135 = 405032U;
	static uint8_t x1136 = 11U;
	int32_t t26 = -1657;

	t26 = (x1133<<(x1134>>(x1135==x1136)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x1150 = 2U;
	int64_t x1151 = INT64_MIN;
	uint64_t x1152 = UINT64_MAX;
	uint32_t t27 = 3U;

	t27 = (x1149<<(x1150>>(x1151==x1152)));

	if (t27 != 4099416U) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x1181 = UINT32_MAX;
	uint16_t x1182 = 4U;
	volatile int32_t x1184 = INT32_MIN;
	uint32_t t28 = 22U;

	t28 = (x1181<<(x1182>>(x1183==x1184)));

	if (t28 != 4294967280U) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1197 = 76095982997317654LLU;
	static volatile uint8_t x1198 = 0U;
	uint64_t x1199 = 125173160300LLU;
	int8_t x1200 = -1;
	volatile uint64_t t29 = 569529167752308LLU;

	t29 = (x1197<<(x1198>>(x1199==x1200)));

	if (t29 != 76095982997317654LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x1314 = 2U;
	int32_t x1315 = -1;
	static uint32_t x1316 = 4U;
	volatile int32_t t30 = 4239883;

	t30 = (x1313<<(x1314>>(x1315==x1316)));

	if (t30 != 4) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x1409 = UINT64_MAX;
	volatile int16_t x1410 = 0;
	int64_t x1411 = INT64_MAX;
	int32_t x1412 = INT32_MIN;

	t31 = (x1409<<(x1410>>(x1411==x1412)));

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x1437 = 0;
	uint16_t x1438 = 18U;
	int64_t x1439 = 1722097664907471LL;
	volatile uint16_t x1440 = 13U;
	int32_t t32 = -1;

	t32 = (x1437<<(x1438>>(x1439==x1440)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x1461 = 11U;
	uint8_t x1462 = 13U;
	int16_t x1463 = 5;
	int64_t x1464 = 332602830622LL;
	int32_t t33 = 2502556;

	t33 = (x1461<<(x1462>>(x1463==x1464)));

	if (t33 != 90112) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x1473 = 735LLU;
	static int8_t x1474 = 0;
	static int64_t x1475 = INT64_MIN;
	int16_t x1476 = 0;
	static volatile uint64_t t34 = 1204842LLU;

	t34 = (x1473<<(x1474>>(x1475==x1476)));

	if (t34 != 735LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int8_t x1517 = 1;
	volatile uint8_t x1518 = 4U;
	static int64_t x1519 = INT64_MIN;
	volatile uint32_t x1520 = UINT32_MAX;
	volatile int32_t t35 = -61055;

	t35 = (x1517<<(x1518>>(x1519==x1520)));

	if (t35 != 16) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1537 = 0;
	static volatile uint8_t x1538 = 1U;
	uint8_t x1540 = 67U;
	int32_t t36 = 6867;

	t36 = (x1537<<(x1538>>(x1539==x1540)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x1565 = 0;
	int16_t x1567 = INT16_MIN;
	int32_t x1568 = 156376393;

	t37 = (x1565<<(x1566>>(x1567==x1568)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1621 = INT8_MAX;
	int16_t x1623 = 18;
	int64_t x1624 = INT64_MIN;

	t38 = (x1621<<(x1622>>(x1623==x1624)));

	if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x1757 = 3LL;
	uint8_t x1758 = 36U;
	uint64_t x1759 = 55812461LLU;
	uint8_t x1760 = 7U;
	int64_t t39 = 12606631319810956LL;

	t39 = (x1757<<(x1758>>(x1759==x1760)));

	if (t39 != 206158430208LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x1773 = 14U;
	uint8_t x1774 = 43U;

	t40 = (x1773<<(x1774>>(x1775==x1776)));

	if (t40 != 29360128U) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x1921 = 2;
	int8_t x1923 = -1;
	uint16_t x1924 = 10U;
	volatile int32_t t41 = -12;

	t41 = (x1921<<(x1922>>(x1923==x1924)));

	if (t41 != 1024) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x2017 = 38085037617723LLU;
	uint8_t x2018 = 1U;
	static volatile int64_t x2019 = INT64_MIN;
	int8_t x2020 = INT8_MIN;
	volatile uint64_t t42 = 1175926698324976LLU;

	t42 = (x2017<<(x2018>>(x2019==x2020)));

	if (t42 != 76170075235446LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x2117 = 2;
	static int8_t x2118 = 0;
	uint8_t x2119 = 19U;
	uint16_t x2120 = UINT16_MAX;
	static int32_t t43 = -14199317;

	t43 = (x2117<<(x2118>>(x2119==x2120)));

	if (t43 != 2) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x2205 = 19404348271960620LLU;
	uint16_t x2206 = 5U;
	int32_t x2207 = INT32_MIN;
	volatile uint64_t t44 = 0LLU;

	t44 = (x2205<<(x2206>>(x2207==x2208)));

	if (t44 != 620939144702739840LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x2286 = 8LLU;
	uint64_t x2288 = 4955955LLU;
	int32_t t45 = -91330731;

	t45 = (x2285<<(x2286>>(x2287==x2288)));

	if (t45 != 768) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x2509 = 1035337477LLU;
	volatile int16_t x2511 = -3667;
	volatile int8_t x2512 = INT8_MIN;

	t46 = (x2509<<(x2510>>(x2511==x2512)));

	if (t46 != 360287970189639680LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x2526 = 15LLU;
	uint8_t x2528 = 3U;
	int32_t t47 = -609;

	t47 = (x2525<<(x2526>>(x2527==x2528)));

	if (t47 != 195493888) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x2560 = 10U;

	t48 = (x2557<<(x2558>>(x2559==x2560)));

	if (t48 != 5264723U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x2630 = 12;
	uint64_t x2631 = UINT64_MAX;
	volatile int16_t x2632 = INT16_MAX;
	static int32_t t49 = 1;

	t49 = (x2629<<(x2630>>(x2631==x2632)));

	if (t49 != 670793728) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x2790 = 1;
	static uint16_t x2791 = UINT16_MAX;
	uint16_t x2792 = 5U;
	uint64_t t50 = 225LLU;

	t50 = (x2789<<(x2790>>(x2791==x2792)));

	if (t50 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint16_t x2797 = 87U;
	int8_t x2798 = 4;
	int64_t x2799 = INT64_MIN;
	int64_t x2800 = INT64_MIN;
	int32_t t51 = -301;

	t51 = (x2797<<(x2798>>(x2799==x2800)));

	if (t51 != 348) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x2881 = INT16_MAX;
	int32_t x2883 = INT32_MIN;
	volatile int32_t t52 = 1;

	t52 = (x2881<<(x2882>>(x2883==x2884)));

	if (t52 != 65534) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x2905 = 330U;
	static int64_t x2907 = -2544691263LL;
	volatile uint64_t x2908 = UINT64_MAX;
	volatile int32_t t53 = 1578127;

	t53 = (x2905<<(x2906>>(x2907==x2908)));

	if (t53 != 1320) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x2941 = UINT32_MAX;
	uint16_t x2942 = 6U;
	uint8_t x2943 = UINT8_MAX;
	int16_t x2944 = 4;
	volatile uint32_t t54 = 14U;

	t54 = (x2941<<(x2942>>(x2943==x2944)));

	if (t54 != 4294967232U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x3013 = 4;
	static int8_t x3014 = 1;
	static int16_t x3015 = -6;
	volatile int32_t t55 = -1;

	t55 = (x3013<<(x3014>>(x3015==x3016)));

	if (t55 != 8) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x3033 = 17884U;
	uint8_t x3034 = 1U;
	int64_t x3035 = -545927663352451281LL;

	t56 = (x3033<<(x3034>>(x3035==x3036)));

	if (t56 != 35768U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x3077 = 2U;
	static int16_t x3078 = 7;
	volatile int32_t t57 = -143908116;

	t57 = (x3077<<(x3078>>(x3079==x3080)));

	if (t57 != 256) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x3081 = 70U;
	uint16_t x3083 = UINT16_MAX;
	volatile int64_t x3084 = INT64_MIN;
	int32_t t58 = -2;

	t58 = (x3081<<(x3082>>(x3083==x3084)));

	if (t58 != 70) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x3125 = 1;
	static uint8_t x3126 = 21U;
	int32_t x3127 = 2;
	uint64_t x3128 = 233240LLU;
	volatile int32_t t59 = 339266706;

	t59 = (x3125<<(x3126>>(x3127==x3128)));

	if (t59 != 2097152) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x3201 = INT8_MAX;
	static uint16_t x3202 = 22U;
	volatile int32_t t60 = 3856974;

	t60 = (x3201<<(x3202>>(x3203==x3204)));

	if (t60 != 532676608) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x3225 = UINT8_MAX;
	uint64_t x3226 = 4LLU;
	int64_t x3228 = INT64_MAX;
	volatile int32_t t61 = 0;

	t61 = (x3225<<(x3226>>(x3227==x3228)));

	if (t61 != 4080) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x3313 = 237U;
	volatile int8_t x3314 = 0;
	int32_t x3315 = INT32_MAX;
	int32_t t62 = -250187;

	t62 = (x3313<<(x3314>>(x3315==x3316)));

	if (t62 != 237) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x3377 = 488U;
	int16_t x3379 = -1;
	static volatile int32_t t63 = -5980;

	t63 = (x3377<<(x3378>>(x3379==x3380)));

	if (t63 != 976) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x3433 = UINT16_MAX;
	uint16_t x3434 = 6U;
	uint8_t x3435 = 58U;
	int32_t t64 = -127;

	t64 = (x3433<<(x3434>>(x3435==x3436)));

	if (t64 != 4194240) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x3469 = UINT64_MAX;
	static volatile uint8_t x3470 = 4U;
	static int32_t x3471 = INT32_MAX;
	uint32_t x3472 = 399261824U;
	uint64_t t65 = 942023552650LLU;

	t65 = (x3469<<(x3470>>(x3471==x3472)));

	if (t65 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x3493 = 16;
	static volatile int16_t x3494 = 1;
	int32_t x3495 = INT32_MAX;
	int8_t x3496 = -1;
	static int32_t t66 = 171131;

	t66 = (x3493<<(x3494>>(x3495==x3496)));

	if (t66 != 32) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x3554 = 1;
	int8_t x3555 = INT8_MAX;
	uint8_t x3556 = 0U;
	int32_t t67 = 1;

	t67 = (x3553<<(x3554>>(x3555==x3556)));

	if (t67 != 254) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x3565 = 86U;
	volatile uint8_t x3567 = 6U;
	int16_t x3568 = 0;
	volatile int32_t t68 = 1194;

	t68 = (x3565<<(x3566>>(x3567==x3568)));

	if (t68 != 1409024) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x3649 = 193654235921549143LL;
	int16_t x3651 = -126;
	static volatile int64_t x3652 = INT64_MIN;
	int64_t t69 = 0LL;

	t69 = (x3649<<(x3650>>(x3651==x3652)));

	if (t69 != 387308471843098286LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x3657 = 765U;
	static uint32_t x3658 = 1U;
	static int32_t x3660 = -1;
	volatile int32_t t70 = 832721336;

	t70 = (x3657<<(x3658>>(x3659==x3660)));

	if (t70 != 1530) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x3849 = 3;
	volatile int8_t x3850 = 3;
	int16_t x3851 = 1;
	static int32_t x3852 = INT32_MAX;

	t71 = (x3849<<(x3850>>(x3851==x3852)));

	if (t71 != 24) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x3917 = INT16_MAX;
	int16_t x3918 = 0;
	static int32_t x3920 = -27007550;
	volatile int32_t t72 = 54;

	t72 = (x3917<<(x3918>>(x3919==x3920)));

	if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x3981 = 5U;
	int16_t x3982 = 2;
	static int64_t x3983 = INT64_MAX;
	uint8_t x3984 = UINT8_MAX;
	volatile uint32_t t73 = 28804U;

	t73 = (x3981<<(x3982>>(x3983==x3984)));

	if (t73 != 20U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x4013 = 24;
	uint8_t x4015 = UINT8_MAX;
	static volatile int16_t x4016 = 6;
	volatile int32_t t74 = -943;

	t74 = (x4013<<(x4014>>(x4015==x4016)));

	if (t74 != 24) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x4073 = 3U;
	volatile uint32_t x4074 = 7U;
	int16_t x4075 = INT16_MAX;
	static int8_t x4076 = INT8_MIN;
	int32_t t75 = 9;

	t75 = (x4073<<(x4074>>(x4075==x4076)));

	if (t75 != 384) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x4093 = 2U;
	volatile int16_t x4094 = 15;
	int64_t x4095 = INT64_MAX;
	int32_t x4096 = -444266510;
	volatile int32_t t76 = -107;

	t76 = (x4093<<(x4094>>(x4095==x4096)));

	if (t76 != 65536) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x4135 = 5U;
	static uint8_t x4136 = 7U;
	volatile int32_t t77 = 340184059;

	t77 = (x4133<<(x4134>>(x4135==x4136)));

	if (t77 != 1044480) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x4233 = 1165;
	static uint8_t x4234 = 1U;
	static int32_t x4235 = -1;
	volatile uint64_t x4236 = UINT64_MAX;

	t78 = (x4233<<(x4234>>(x4235==x4236)));

	if (t78 != 1165) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x4269 = 24;
	uint16_t x4270 = 9U;
	int8_t x4272 = INT8_MAX;
	int32_t t79 = -9683425;

	t79 = (x4269<<(x4270>>(x4271==x4272)));

	if (t79 != 12288) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x4293 = 14U;
	static uint8_t x4294 = 1U;
	uint8_t x4296 = 1U;

	t80 = (x4293<<(x4294>>(x4295==x4296)));

	if (t80 != 28U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x4353 = 379U;
	static int64_t x4354 = 1LL;
	int8_t x4355 = INT8_MIN;
	static uint64_t x4356 = UINT64_MAX;
	static volatile int32_t t81 = 38;

	t81 = (x4353<<(x4354>>(x4355==x4356)));

	if (t81 != 758) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x4513 = INT64_MAX;
	static int32_t x4514 = 0;
	int64_t x4515 = 40LL;
	static volatile int32_t x4516 = INT32_MIN;

	t82 = (x4513<<(x4514>>(x4515==x4516)));

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint32_t x4533 = 27115114U;
	volatile int64_t x4534 = 3LL;
	static volatile int64_t x4535 = 369275LL;
	volatile int16_t x4536 = 187;
	volatile uint32_t t83 = 25432482U;

	t83 = (x4533<<(x4534>>(x4535==x4536)));

	if (t83 != 216920912U) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x4697 = 1843U;
	uint8_t x4698 = 1U;
	volatile int8_t x4699 = INT8_MIN;
	static uint32_t x4700 = UINT32_MAX;

	t84 = (x4697<<(x4698>>(x4699==x4700)));

	if (t84 != 3686) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x4869 = 1;
	int32_t x4871 = -44686967;
	static uint16_t x4872 = 62U;
	volatile int32_t t85 = -1;

	t85 = (x4869<<(x4870>>(x4871==x4872)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x4901 = 17U;
	uint32_t x4902 = 7U;
	int8_t x4903 = 1;
	int64_t x4904 = INT64_MIN;
	volatile int32_t t86 = 522;

	t86 = (x4901<<(x4902>>(x4903==x4904)));

	if (t86 != 2176) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x4917 = 8927953LLU;
	uint64_t x4919 = 795424239LLU;

	t87 = (x4917<<(x4918>>(x4919==x4920)));

	if (t87 != 4793158269403136LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x4943 = 6576947;
	int64_t x4944 = INT64_MIN;

	t88 = (x4941<<(x4942>>(x4943==x4944)));

	if (t88 != 65534) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x5109 = 95LL;
	static int32_t x5111 = -1;
	int64_t x5112 = INT64_MIN;

	t89 = (x5109<<(x5110>>(x5111==x5112)));

	if (t89 != 3040LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x5138 = 0;
	int32_t x5139 = 58059;
	uint64_t x5140 = UINT64_MAX;
	static volatile int32_t t90 = 52;

	t90 = (x5137<<(x5138>>(x5139==x5140)));

	if (t90 != 22) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x5157 = INT64_MAX;
	int64_t x5158 = 0LL;
	uint16_t x5160 = UINT16_MAX;

	t91 = (x5157<<(x5158>>(x5159==x5160)));

	if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x5197 = 193;
	uint8_t x5198 = 1U;
	uint32_t x5199 = 187377819U;
	int8_t x5200 = -1;

	t92 = (x5197<<(x5198>>(x5199==x5200)));

	if (t92 != 386) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x5249 = UINT32_MAX;
	static uint8_t x5250 = 0U;
	volatile uint16_t x5251 = 11U;
	uint32_t t93 = UINT32_MAX;

	t93 = (x5249<<(x5250>>(x5251==x5252)));

	if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x5253 = 571528U;
	uint8_t x5254 = 28U;
	uint32_t x5255 = 68637U;
	static uint32_t x5256 = UINT32_MAX;
	static uint32_t t94 = 177763010U;

	t94 = (x5253<<(x5254>>(x5255==x5256)));

	if (t94 != 2147483648U) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x5357 = UINT64_MAX;
	int16_t x5358 = 1;
	static uint32_t x5360 = UINT32_MAX;

	t95 = (x5357<<(x5358>>(x5359==x5360)));

	if (t95 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x5393 = UINT16_MAX;
	static volatile uint8_t x5394 = 3U;
	int8_t x5396 = 0;
	volatile int32_t t96 = 3300;

	t96 = (x5393<<(x5394>>(x5395==x5396)));

	if (t96 != 524280) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x5489 = 121773U;
	int16_t x5490 = 1;
	static int32_t x5492 = INT32_MIN;
	volatile uint32_t t97 = 163660358U;

	t97 = (x5489<<(x5490>>(x5491==x5492)));

	if (t97 != 243546U) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x5601 = UINT8_MAX;
	int32_t x5603 = -726387594;
	uint64_t x5604 = 4164402112466LLU;
	int32_t t98 = 1012532925;

	t98 = (x5601<<(x5602>>(x5603==x5604)));

	if (t98 != 4177920) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x5679 = 80U;
	volatile int16_t x5680 = 565;

	t99 = (x5677<<(x5678>>(x5679==x5680)));

	if (t99 != 1) { NG(); } else { ; }
	
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

