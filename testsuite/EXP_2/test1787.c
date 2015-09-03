#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t1 = -5206735;
uint16_t x105 = 14043U;
uint8_t x108 = 2U;
static volatile uint32_t x119 = 284821415U;
static volatile int32_t t6 = 158351;
uint8_t x207 = 20U;
int16_t x209 = -1489;
uint64_t x262 = 410013492897756LLU;
int32_t x274 = INT32_MIN;
volatile uint8_t x275 = UINT8_MAX;
int32_t t13 = -483455646;
uint32_t x446 = 38320U;
volatile uint8_t x448 = 3U;
int8_t x460 = 0;
static uint32_t x478 = UINT32_MAX;
int8_t x544 = 24;
int16_t x581 = 36;
volatile uint8_t x582 = 126U;
volatile int16_t x583 = INT16_MIN;
volatile int32_t t23 = -864301693;
uint32_t x596 = 0U;
int64_t x597 = -1757LL;
static volatile int8_t x856 = 14;
volatile int32_t t28 = 98272089;
int16_t x866 = INT16_MIN;
int16_t x867 = INT16_MAX;
int32_t t32 = 68261236;
int32_t x1077 = -1;
volatile int32_t x1097 = 8870859;
volatile int16_t x1099 = -1;
uint64_t x1101 = UINT64_MAX;
static volatile int32_t t35 = -31065;
int8_t x1185 = -1;
int32_t x1187 = -149861;
static int8_t x1188 = 1;
volatile uint64_t x1208 = 7LLU;
static int8_t x1254 = 0;
uint8_t x1268 = 0U;
int32_t t41 = 267;
uint16_t x1352 = 0U;
uint16_t x1512 = 0U;
uint64_t x1536 = 0LLU;
uint16_t x1604 = 5U;
static volatile int8_t x1793 = INT8_MIN;
uint8_t x1879 = 3U;
static volatile uint8_t x1936 = 1U;
static int16_t x1992 = 4;
int8_t x2016 = 4;
volatile int32_t x2043 = INT32_MAX;
uint32_t x2044 = 8U;
uint16_t x2050 = UINT16_MAX;
int64_t x2051 = INT64_MIN;
uint16_t x2112 = 0U;
static int32_t t57 = 140123278;
static int16_t x2139 = INT16_MAX;
int32_t x2154 = -26;
uint16_t x2170 = 725U;
static int64_t x2172 = 1LL;
int32_t t61 = -121513;
uint16_t x2232 = 1U;
int8_t x2237 = INT8_MIN;
static uint16_t x2240 = 30U;
uint64_t x2277 = UINT64_MAX;
static volatile uint32_t x2278 = 154557929U;
static int8_t x2305 = INT8_MIN;
uint8_t x2308 = 0U;
static int32_t t67 = -20161621;
int8_t x2369 = -1;
static int16_t x2371 = INT16_MIN;
int32_t x2382 = INT32_MAX;
volatile int32_t t69 = 26;
int64_t x2405 = INT64_MIN;
volatile int8_t x2429 = -1;
uint8_t x2468 = 0U;
int64_t x2477 = -1LL;
int32_t t77 = 4151252;
static volatile uint64_t x2500 = 1LLU;
static volatile int64_t x2613 = INT64_MIN;
int16_t x2615 = 723;
volatile int32_t t80 = 1;
int32_t x2694 = 1268377;
int8_t x2695 = -1;
uint64_t x2745 = UINT64_MAX;
uint8_t x2746 = UINT8_MAX;
volatile int32_t t84 = 421782;
int8_t x2809 = 0;
int32_t x2834 = INT32_MIN;
static uint16_t x2836 = 2U;
static int64_t x2839 = INT64_MIN;
int32_t t89 = 241048433;
volatile int8_t x2932 = 24;
volatile int32_t t91 = -5;
int32_t x2935 = INT32_MAX;
static uint8_t x2974 = 51U;
int32_t x2975 = -1;
int16_t x3014 = -1;
int8_t x3016 = 0;
int32_t x3131 = 412225335;
int64_t x3173 = 1870892LL;
int64_t x3175 = INT64_MIN;
volatile int64_t x3227 = -1LL;


void f0(void) {
	int8_t x57 = 1;
	int64_t x58 = 25851912809413LL;
	int16_t x59 = 5833;
	uint64_t x60 = 1LLU;
	volatile int32_t t0 = 4;

	t0 = ((x57==(x58&x59))<<x60);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x61 = INT16_MIN;
	volatile uint16_t x62 = 9U;
	uint32_t x63 = 1584U;
	int64_t x64 = 28LL;

	t1 = ((x61==(x62&x63))<<x64);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x65 = -5;
	static volatile int32_t x66 = -66535;
	int64_t x67 = INT64_MIN;
	volatile int8_t x68 = 2;
	static int32_t t2 = 2635;

	t2 = ((x65==(x66&x67))<<x68);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x106 = 13U;
	int8_t x107 = INT8_MIN;
	static volatile int32_t t3 = -1;

	t3 = ((x105==(x106&x107))<<x108);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x117 = INT16_MIN;
	static int8_t x118 = 13;
	uint16_t x120 = 19U;
	static int32_t t4 = 37;

	t4 = ((x117==(x118&x119))<<x120);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x161 = 7488U;
	int8_t x162 = INT8_MIN;
	int16_t x163 = INT16_MIN;
	uint8_t x164 = 1U;
	static volatile int32_t t5 = -13;

	t5 = ((x161==(x162&x163))<<x164);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x181 = -3;
	uint8_t x182 = 3U;
	int8_t x183 = 0;
	uint8_t x184 = 19U;

	t6 = ((x181==(x182&x183))<<x184);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x197 = 1729978076710LLU;
	static int32_t x198 = INT32_MAX;
	uint64_t x199 = UINT64_MAX;
	uint64_t x200 = 2LLU;
	int32_t t7 = -19;

	t7 = ((x197==(x198&x199))<<x200);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x205 = -76388;
	static int16_t x206 = INT16_MIN;
	int8_t x208 = 0;
	static int32_t t8 = 163813040;

	t8 = ((x205==(x206&x207))<<x208);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x210 = INT8_MIN;
	int32_t x211 = -590076037;
	static int16_t x212 = 0;
	int32_t t9 = 2053;

	t9 = ((x209==(x210&x211))<<x212);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x257 = INT16_MIN;
	int8_t x258 = INT8_MAX;
	volatile int16_t x259 = INT16_MIN;
	static uint16_t x260 = 16U;
	int32_t t10 = 127;

	t10 = ((x257==(x258&x259))<<x260);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x261 = 17107U;
	int16_t x263 = 57;
	int8_t x264 = 0;
	int32_t t11 = 0;

	t11 = ((x261==(x262&x263))<<x264);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x273 = 19;
	static uint8_t x276 = 1U;
	int32_t t12 = 6895708;

	t12 = ((x273==(x274&x275))<<x276);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x305 = INT32_MIN;
	uint8_t x306 = 5U;
	int16_t x307 = -1;
	uint8_t x308 = 1U;

	t13 = ((x305==(x306&x307))<<x308);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x381 = -1;
	volatile uint8_t x382 = 102U;
	uint64_t x383 = UINT64_MAX;
	uint8_t x384 = 0U;
	static volatile int32_t t14 = 0;

	t14 = ((x381==(x382&x383))<<x384);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x445 = 1U;
	int64_t x447 = -1LL;
	static int32_t t15 = -180;

	t15 = ((x445==(x446&x447))<<x448);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x457 = 1092U;
	int16_t x458 = -1;
	static volatile uint16_t x459 = 14U;
	volatile int32_t t16 = -705639;

	t16 = ((x457==(x458&x459))<<x460);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x465 = -24281275LL;
	uint64_t x466 = 4LLU;
	volatile int16_t x467 = INT16_MIN;
	uint16_t x468 = 29U;
	int32_t t17 = -4127712;

	t17 = ((x465==(x466&x467))<<x468);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x477 = INT64_MIN;
	static uint32_t x479 = 19606U;
	static uint32_t x480 = 0U;
	int32_t t18 = -4;

	t18 = ((x477==(x478&x479))<<x480);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x485 = INT32_MIN;
	int8_t x486 = INT8_MAX;
	volatile int64_t x487 = 28LL;
	volatile uint16_t x488 = 3U;
	int32_t t19 = 196378;

	t19 = ((x485==(x486&x487))<<x488);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x517 = 3U;
	uint32_t x518 = 23498683U;
	uint16_t x519 = UINT16_MAX;
	static uint8_t x520 = 25U;
	volatile int32_t t20 = -4154513;

	t20 = ((x517==(x518&x519))<<x520);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x541 = 2U;
	static int8_t x542 = INT8_MIN;
	volatile uint32_t x543 = 2U;
	int32_t t21 = -244941;

	t21 = ((x541==(x542&x543))<<x544);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x569 = 394616211U;
	uint32_t x570 = UINT32_MAX;
	uint16_t x571 = 2063U;
	volatile uint8_t x572 = 3U;
	int32_t t22 = 4998564;

	t22 = ((x569==(x570&x571))<<x572);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x584 = 17;

	t23 = ((x581==(x582&x583))<<x584);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x593 = -1LL;
	int16_t x594 = 4045;
	int8_t x595 = INT8_MIN;
	static int32_t t24 = 95340423;

	t24 = ((x593==(x594&x595))<<x596);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x598 = UINT64_MAX;
	int64_t x599 = -38LL;
	uint16_t x600 = 23U;
	int32_t t25 = -73;

	t25 = ((x597==(x598&x599))<<x600);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x653 = 1609812409013466LL;
	static int32_t x654 = 7442458;
	int64_t x655 = INT64_MIN;
	int64_t x656 = 17LL;
	int32_t t26 = -120070476;

	t26 = ((x653==(x654&x655))<<x656);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x701 = INT8_MAX;
	int32_t x702 = 834768;
	static volatile int8_t x703 = -1;
	int16_t x704 = 0;
	int32_t t27 = 29899;

	t27 = ((x701==(x702&x703))<<x704);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x853 = -91153062609LL;
	int64_t x854 = 4188562411LL;
	int32_t x855 = INT32_MAX;

	t28 = ((x853==(x854&x855))<<x856);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x865 = -442564390016LL;
	static uint8_t x868 = 5U;
	int32_t t29 = 27067947;

	t29 = ((x865==(x866&x867))<<x868);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x1021 = INT32_MAX;
	int16_t x1022 = INT16_MIN;
	uint64_t x1023 = 114LLU;
	volatile uint8_t x1024 = 0U;
	int32_t t30 = 101;

	t30 = ((x1021==(x1022&x1023))<<x1024);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1049 = INT64_MAX;
	int16_t x1050 = -1;
	static volatile uint8_t x1051 = 16U;
	uint8_t x1052 = 1U;
	int32_t t31 = 4827059;

	t31 = ((x1049==(x1050&x1051))<<x1052);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1073 = 1550U;
	int64_t x1074 = 1LL;
	static int8_t x1075 = -5;
	static int8_t x1076 = 0;

	t32 = ((x1073==(x1074&x1075))<<x1076);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1078 = INT8_MAX;
	int32_t x1079 = -1;
	static uint16_t x1080 = 0U;
	volatile int32_t t33 = 2597;

	t33 = ((x1077==(x1078&x1079))<<x1080);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x1098 = 2577U;
	uint8_t x1100 = 0U;
	volatile int32_t t34 = -8289;

	t34 = ((x1097==(x1098&x1099))<<x1100);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1102 = -548;
	int16_t x1103 = -1;
	uint8_t x1104 = 0U;

	t35 = ((x1101==(x1102&x1103))<<x1104);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x1186 = 48393U;
	volatile int32_t t36 = -218748;

	t36 = ((x1185==(x1186&x1187))<<x1188);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x1205 = -153327421235596LL;
	int16_t x1206 = INT16_MIN;
	int32_t x1207 = INT32_MAX;
	volatile int32_t t37 = -1;

	t37 = ((x1205==(x1206&x1207))<<x1208);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1253 = 414510292723218480LL;
	int64_t x1255 = INT64_MIN;
	volatile int32_t x1256 = 0;
	volatile int32_t t38 = -686601371;

	t38 = ((x1253==(x1254&x1255))<<x1256);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x1265 = 1393U;
	volatile int8_t x1266 = 13;
	int32_t x1267 = 929;
	int32_t t39 = -1;

	t39 = ((x1265==(x1266&x1267))<<x1268);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x1273 = INT32_MAX;
	uint8_t x1274 = 0U;
	int32_t x1275 = -301802302;
	static uint8_t x1276 = 0U;
	static int32_t t40 = -2;

	t40 = ((x1273==(x1274&x1275))<<x1276);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x1297 = -1;
	int32_t x1298 = -30;
	uint16_t x1299 = UINT16_MAX;
	static int64_t x1300 = 0LL;

	t41 = ((x1297==(x1298&x1299))<<x1300);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x1349 = 2967869985177842LL;
	int64_t x1350 = INT64_MIN;
	static uint32_t x1351 = 162236U;
	volatile int32_t t42 = 686466;

	t42 = ((x1349==(x1350&x1351))<<x1352);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x1489 = UINT32_MAX;
	int8_t x1490 = INT8_MIN;
	int64_t x1491 = 1LL;
	uint16_t x1492 = 31U;
	volatile int32_t t43 = 536652;

	t43 = ((x1489==(x1490&x1491))<<x1492);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x1509 = -7;
	static uint8_t x1510 = UINT8_MAX;
	static volatile int16_t x1511 = 311;
	int32_t t44 = -4;

	t44 = ((x1509==(x1510&x1511))<<x1512);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x1533 = INT32_MIN;
	int16_t x1534 = -6;
	static int16_t x1535 = -673;
	static volatile int32_t t45 = 12;

	t45 = ((x1533==(x1534&x1535))<<x1536);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x1601 = INT16_MIN;
	int8_t x1602 = -1;
	uint8_t x1603 = 42U;
	volatile int32_t t46 = -318787902;

	t46 = ((x1601==(x1602&x1603))<<x1604);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x1609 = 661647452559LLU;
	uint32_t x1610 = 3782919U;
	int32_t x1611 = -1;
	uint32_t x1612 = 4U;
	int32_t t47 = 50130;

	t47 = ((x1609==(x1610&x1611))<<x1612);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x1721 = UINT64_MAX;
	uint16_t x1722 = UINT16_MAX;
	uint8_t x1723 = UINT8_MAX;
	static volatile uint32_t x1724 = 23U;
	static volatile int32_t t48 = -2417982;

	t48 = ((x1721==(x1722&x1723))<<x1724);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x1794 = 3U;
	uint8_t x1795 = UINT8_MAX;
	uint16_t x1796 = 0U;
	int32_t t49 = 13401;

	t49 = ((x1793==(x1794&x1795))<<x1796);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x1877 = 2188889883502LLU;
	int32_t x1878 = 345471566;
	int16_t x1880 = 11;
	static int32_t t50 = 27154;

	t50 = ((x1877==(x1878&x1879))<<x1880);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x1933 = INT32_MAX;
	int64_t x1934 = INT64_MAX;
	int64_t x1935 = -215033294LL;
	static int32_t t51 = 1;

	t51 = ((x1933==(x1934&x1935))<<x1936);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x1989 = -1;
	int16_t x1990 = -2638;
	int8_t x1991 = -1;
	volatile int32_t t52 = 7;

	t52 = ((x1989==(x1990&x1991))<<x1992);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x2013 = INT8_MIN;
	int64_t x2014 = INT64_MIN;
	uint8_t x2015 = 26U;
	volatile int32_t t53 = -111307;

	t53 = ((x2013==(x2014&x2015))<<x2016);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x2041 = 8327403U;
	int64_t x2042 = 5787LL;
	int32_t t54 = -164981968;

	t54 = ((x2041==(x2042&x2043))<<x2044);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x2049 = INT16_MIN;
	static uint8_t x2052 = 1U;
	int32_t t55 = -253274;

	t55 = ((x2049==(x2050&x2051))<<x2052);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x2109 = 234U;
	int32_t x2110 = INT32_MIN;
	int64_t x2111 = INT64_MIN;
	int32_t t56 = 7;

	t56 = ((x2109==(x2110&x2111))<<x2112);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x2125 = 430274U;
	static int8_t x2126 = INT8_MIN;
	static int16_t x2127 = INT16_MAX;
	uint8_t x2128 = 1U;

	t57 = ((x2125==(x2126&x2127))<<x2128);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x2137 = INT64_MIN;
	uint64_t x2138 = 1LLU;
	volatile uint8_t x2140 = 11U;
	volatile int32_t t58 = -3;

	t58 = ((x2137==(x2138&x2139))<<x2140);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x2153 = 21057U;
	int64_t x2155 = INT64_MIN;
	uint8_t x2156 = 18U;
	volatile int32_t t59 = -1830;

	t59 = ((x2153==(x2154&x2155))<<x2156);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x2157 = -520;
	int8_t x2158 = INT8_MIN;
	static uint32_t x2159 = UINT32_MAX;
	static volatile int16_t x2160 = 26;
	int32_t t60 = 11462395;

	t60 = ((x2157==(x2158&x2159))<<x2160);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x2169 = INT32_MIN;
	uint64_t x2171 = 3854409207LLU;

	t61 = ((x2169==(x2170&x2171))<<x2172);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x2201 = -2;
	volatile uint8_t x2202 = 85U;
	int32_t x2203 = INT32_MIN;
	uint32_t x2204 = 11U;
	static int32_t t62 = 730936923;

	t62 = ((x2201==(x2202&x2203))<<x2204);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x2229 = 1018826328929023LLU;
	volatile uint32_t x2230 = UINT32_MAX;
	static int16_t x2231 = 225;
	int32_t t63 = -132025348;

	t63 = ((x2229==(x2230&x2231))<<x2232);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x2238 = 4U;
	uint16_t x2239 = UINT16_MAX;
	int32_t t64 = -420907;

	t64 = ((x2237==(x2238&x2239))<<x2240);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x2279 = 2U;
	volatile int8_t x2280 = 1;
	volatile int32_t t65 = 189279;

	t65 = ((x2277==(x2278&x2279))<<x2280);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x2285 = 3600278LLU;
	static uint16_t x2286 = 1U;
	volatile uint8_t x2287 = 73U;
	uint8_t x2288 = 2U;
	volatile int32_t t66 = 198571298;

	t66 = ((x2285==(x2286&x2287))<<x2288);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x2306 = 4137961455862911815LLU;
	int8_t x2307 = -1;

	t67 = ((x2305==(x2306&x2307))<<x2308);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x2370 = 208;
	volatile int16_t x2372 = 1;
	static volatile int32_t t68 = 939;

	t68 = ((x2369==(x2370&x2371))<<x2372);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x2381 = 104;
	int32_t x2383 = INT32_MIN;
	static uint16_t x2384 = 1U;

	t69 = ((x2381==(x2382&x2383))<<x2384);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x2397 = INT8_MAX;
	volatile uint32_t x2398 = 1U;
	volatile int16_t x2399 = -197;
	int16_t x2400 = 1;
	int32_t t70 = -26;

	t70 = ((x2397==(x2398&x2399))<<x2400);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x2401 = UINT64_MAX;
	static int64_t x2402 = -312625LL;
	int16_t x2403 = INT16_MIN;
	static uint32_t x2404 = 10U;
	volatile int32_t t71 = 9;

	t71 = ((x2401==(x2402&x2403))<<x2404);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x2406 = INT16_MIN;
	static int64_t x2407 = -1LL;
	int32_t x2408 = 10;
	volatile int32_t t72 = 7062;

	t72 = ((x2405==(x2406&x2407))<<x2408);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x2417 = 3U;
	int64_t x2418 = 56292503LL;
	int64_t x2419 = 117953816LL;
	int8_t x2420 = 4;
	volatile int32_t t73 = 305263468;

	t73 = ((x2417==(x2418&x2419))<<x2420);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x2430 = 638928U;
	uint16_t x2431 = 617U;
	int8_t x2432 = 5;
	volatile int32_t t74 = 1;

	t74 = ((x2429==(x2430&x2431))<<x2432);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x2457 = INT64_MIN;
	int64_t x2458 = 1LL;
	int8_t x2459 = INT8_MAX;
	static int8_t x2460 = 1;
	static volatile int32_t t75 = 1056700370;

	t75 = ((x2457==(x2458&x2459))<<x2460);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x2465 = 12560U;
	int64_t x2466 = 28893540222192LL;
	int16_t x2467 = INT16_MIN;
	int32_t t76 = 792164675;

	t76 = ((x2465==(x2466&x2467))<<x2468);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x2478 = 489658;
	volatile int64_t x2479 = -1LL;
	volatile uint64_t x2480 = 1LLU;

	t77 = ((x2477==(x2478&x2479))<<x2480);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x2497 = 0;
	int32_t x2498 = -1;
	volatile uint16_t x2499 = 492U;
	int32_t t78 = -5471314;

	t78 = ((x2497==(x2498&x2499))<<x2500);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x2517 = UINT8_MAX;
	int16_t x2518 = 0;
	int32_t x2519 = INT32_MIN;
	uint64_t x2520 = 4LLU;
	volatile int32_t t79 = -7658806;

	t79 = ((x2517==(x2518&x2519))<<x2520);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x2614 = 0;
	static uint8_t x2616 = 0U;

	t80 = ((x2613==(x2614&x2615))<<x2616);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x2681 = UINT16_MAX;
	static uint64_t x2682 = 5169374574LLU;
	int8_t x2683 = INT8_MIN;
	uint8_t x2684 = 3U;
	volatile int32_t t81 = 206482176;

	t81 = ((x2681==(x2682&x2683))<<x2684);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x2693 = -1LL;
	int8_t x2696 = 15;
	volatile int32_t t82 = 31;

	t82 = ((x2693==(x2694&x2695))<<x2696);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x2697 = 134839329;
	int64_t x2698 = INT64_MIN;
	int64_t x2699 = INT64_MIN;
	uint16_t x2700 = 3U;
	volatile int32_t t83 = 129;

	t83 = ((x2697==(x2698&x2699))<<x2700);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x2747 = 30172392LL;
	int8_t x2748 = 1;

	t84 = ((x2745==(x2746&x2747))<<x2748);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x2769 = INT64_MIN;
	volatile int64_t x2770 = 47486583095873LL;
	static uint32_t x2771 = 14U;
	volatile int8_t x2772 = 24;
	int32_t t85 = 683;

	t85 = ((x2769==(x2770&x2771))<<x2772);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x2810 = 17972U;
	int8_t x2811 = INT8_MAX;
	int16_t x2812 = 0;
	volatile int32_t t86 = 232575668;

	t86 = ((x2809==(x2810&x2811))<<x2812);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x2817 = INT8_MIN;
	int16_t x2818 = -9;
	int16_t x2819 = INT16_MIN;
	uint16_t x2820 = 30U;
	int32_t t87 = -47;

	t87 = ((x2817==(x2818&x2819))<<x2820);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x2833 = 2LLU;
	int8_t x2835 = INT8_MAX;
	int32_t t88 = -2911;

	t88 = ((x2833==(x2834&x2835))<<x2836);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x2837 = -1;
	int8_t x2838 = 1;
	static uint8_t x2840 = 6U;

	t89 = ((x2837==(x2838&x2839))<<x2840);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x2901 = -1;
	int8_t x2902 = INT8_MIN;
	volatile int8_t x2903 = -1;
	volatile int8_t x2904 = 1;
	volatile int32_t t90 = 7;

	t90 = ((x2901==(x2902&x2903))<<x2904);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x2929 = 0;
	int32_t x2930 = INT32_MAX;
	static int32_t x2931 = INT32_MIN;

	t91 = ((x2929==(x2930&x2931))<<x2932);

	if (t91 != 16777216) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x2933 = -8;
	int16_t x2934 = 3;
	uint32_t x2936 = 21U;
	volatile int32_t t92 = 1;

	t92 = ((x2933==(x2934&x2935))<<x2936);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x2973 = UINT64_MAX;
	uint16_t x2976 = 30U;
	volatile int32_t t93 = -6649385;

	t93 = ((x2973==(x2974&x2975))<<x2976);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x3013 = UINT16_MAX;
	int8_t x3015 = 4;
	static volatile int32_t t94 = 2625;

	t94 = ((x3013==(x3014&x3015))<<x3016);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x3129 = 6583;
	int64_t x3130 = INT64_MAX;
	uint8_t x3132 = 15U;
	int32_t t95 = 0;

	t95 = ((x3129==(x3130&x3131))<<x3132);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x3161 = INT16_MAX;
	uint16_t x3162 = 23U;
	int32_t x3163 = 37516188;
	int8_t x3164 = 1;
	int32_t t96 = -425;

	t96 = ((x3161==(x3162&x3163))<<x3164);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int16_t x3169 = -786;
	int8_t x3170 = INT8_MIN;
	int32_t x3171 = -370679224;
	int8_t x3172 = 1;
	volatile int32_t t97 = 6;

	t97 = ((x3169==(x3170&x3171))<<x3172);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x3174 = -3225763;
	static int8_t x3176 = 10;
	static int32_t t98 = 59;

	t98 = ((x3173==(x3174&x3175))<<x3176);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x3225 = 2U;
	uint16_t x3226 = 30999U;
	int8_t x3228 = 2;
	static volatile int32_t t99 = -6680;

	t99 = ((x3225==(x3226&x3227))<<x3228);

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

