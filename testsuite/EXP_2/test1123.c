#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x105 = 1U;
uint8_t x403 = 9U;
int16_t x424 = -381;
uint16_t x481 = 5U;
int16_t x487 = 1;
int16_t x884 = INT16_MIN;
int32_t t10 = 0;
uint8_t x1197 = 3U;
static int32_t x1229 = -216170102;
volatile int16_t x1259 = 1;
int8_t x1319 = 0;
int16_t x1351 = 1;
volatile uint32_t x1370 = 3035U;
int64_t x1418 = INT64_MAX;
int64_t x1420 = 1856524524116642412LL;
static uint64_t x1506 = UINT64_MAX;
uint32_t x1554 = 56U;
volatile int8_t x1568 = -1;
int8_t x1598 = 1;
static int16_t x1691 = 15;
int64_t t31 = 55791739705LL;
volatile uint32_t x1749 = 3U;
uint16_t x1885 = 3U;
int16_t x1933 = INT16_MIN;
static int32_t x1996 = -5031920;
static volatile uint16_t x1998 = 6042U;
int64_t x2081 = -1LL;
int8_t x2209 = INT8_MIN;
volatile int32_t t41 = -4944;
int8_t x2257 = 34;
uint64_t x2287 = 11LLU;
volatile int64_t x2288 = INT64_MIN;
volatile int64_t t44 = -24271482755526667LL;
int8_t x2407 = 1;
static uint32_t x2414 = UINT32_MAX;
int8_t x2416 = 1;
uint16_t x2483 = 1U;
int32_t t48 = -597;
int64_t x2581 = -1LL;
uint16_t x2583 = 0U;
volatile uint64_t t49 = 5837509280924814LLU;
uint8_t x2615 = 7U;
int64_t x2705 = INT64_MIN;
int16_t x2773 = INT16_MAX;
static volatile uint16_t x2775 = 2U;
uint8_t x3197 = UINT8_MAX;
int16_t x3199 = 1;
static int32_t x3200 = INT32_MIN;
static int8_t x3440 = INT8_MIN;
volatile uint32_t x3501 = 59U;
volatile int64_t x3502 = INT64_MAX;
static int32_t t61 = 228;
uint64_t x3666 = 961064247684680LLU;
volatile int32_t x3667 = 4;
uint16_t x3668 = UINT16_MAX;
int8_t x3911 = 15;
static volatile int32_t t64 = 39026;
uint32_t x3954 = 138691U;
volatile uint8_t x4018 = 96U;
int8_t x4119 = 0;
int32_t x4145 = 18168;
uint8_t x4182 = 4U;
int16_t x4377 = -1;
volatile int8_t x4379 = 12;
volatile int32_t t71 = -6268850;
int32_t t73 = -11723659;
volatile int16_t x4482 = INT16_MAX;
int8_t x4483 = 0;
volatile int32_t x4518 = INT32_MAX;
int32_t x4519 = 4;
volatile int32_t x4520 = -1;
volatile int32_t t75 = 23561494;
uint32_t x4802 = 7609200U;
volatile uint32_t x4804 = 800183U;
uint32_t x4833 = 580578U;
int32_t t84 = 534654156;
int8_t x4977 = INT8_MIN;
uint16_t x4978 = UINT16_MAX;
int64_t x5013 = INT64_MIN;
volatile uint32_t t86 = 8948583U;
int8_t x5166 = INT8_MAX;
uint16_t x5167 = 14U;
volatile int32_t t87 = -579;
volatile int32_t t88 = -1;
int8_t x5308 = 3;
int8_t x5324 = 9;
uint16_t x5391 = 7U;
uint64_t x5523 = 7LLU;
volatile int32_t t94 = -3;
uint8_t x5553 = 98U;
int8_t x5554 = 1;
static int8_t x5555 = 8;
uint64_t x5730 = UINT64_MAX;


void f0(void) {
	uint16_t x106 = 25U;
	int32_t x107 = 1;
	volatile uint64_t x108 = 235LLU;
	uint64_t t0 = 3400557390LLU;

	t0 = ((x105<(x106>>x107))%x108);

	if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x181 = INT16_MIN;
	int64_t x182 = 264881961907110003LL;
	volatile int32_t x183 = 1;
	int8_t x184 = INT8_MIN;
	static volatile int32_t t1 = 1503654;

	t1 = ((x181<(x182>>x183))%x184);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x261 = 2LLU;
	int32_t x262 = 168194701;
	static int32_t x263 = 0;
	int16_t x264 = INT16_MIN;
	int32_t t2 = 460647639;

	t2 = ((x261<(x262>>x263))%x264);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x401 = INT32_MIN;
	uint8_t x402 = 2U;
	uint64_t x404 = 345696422431849240LLU;
	static uint64_t t3 = 766504218LLU;

	t3 = ((x401<(x402>>x403))%x404);

	if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x421 = 21;
	uint16_t x422 = 8U;
	uint8_t x423 = 6U;
	static int32_t t4 = 59;

	t4 = ((x421<(x422>>x423))%x424);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x482 = 1LLU;
	uint16_t x483 = 30U;
	uint32_t x484 = UINT32_MAX;
	static volatile uint32_t t5 = 118U;

	t5 = ((x481<(x482>>x483))%x484);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x485 = 7302326581345LLU;
	static volatile int64_t x486 = INT64_MAX;
	static int16_t x488 = 1;
	static int32_t t6 = -1463;

	t6 = ((x485<(x486>>x487))%x488);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x757 = 4U;
	int32_t x758 = 0;
	int32_t x759 = 12;
	static volatile uint64_t x760 = UINT64_MAX;
	volatile uint64_t t7 = 1240106422LLU;

	t7 = ((x757<(x758>>x759))%x760);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x881 = INT32_MIN;
	uint64_t x882 = UINT64_MAX;
	static volatile int8_t x883 = 2;
	volatile int32_t t8 = -217;

	t8 = ((x881<(x882>>x883))%x884);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x929 = -133;
	int8_t x930 = 7;
	int16_t x931 = 2;
	uint16_t x932 = UINT16_MAX;
	int32_t t9 = -1229099;

	t9 = ((x929<(x930>>x931))%x932);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x985 = -1LL;
	uint64_t x986 = 8845906287725295343LLU;
	uint8_t x987 = 48U;
	int8_t x988 = -1;

	t10 = ((x985<(x986>>x987))%x988);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x1017 = -1;
	volatile uint64_t x1018 = 11815351LLU;
	static uint8_t x1019 = 46U;
	int16_t x1020 = INT16_MAX;
	int32_t t11 = -3;

	t11 = ((x1017<(x1018>>x1019))%x1020);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x1113 = -1;
	volatile uint32_t x1114 = 955459539U;
	int16_t x1115 = 13;
	uint8_t x1116 = 1U;
	volatile int32_t t12 = -117;

	t12 = ((x1113<(x1114>>x1115))%x1116);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x1198 = 239U;
	uint8_t x1199 = 12U;
	static uint8_t x1200 = UINT8_MAX;
	int32_t t13 = 1162713;

	t13 = ((x1197<(x1198>>x1199))%x1200);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x1221 = UINT16_MAX;
	static uint32_t x1222 = 75380921U;
	uint8_t x1223 = 10U;
	static int64_t x1224 = -1LL;
	int64_t t14 = -2LL;

	t14 = ((x1221<(x1222>>x1223))%x1224);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x1230 = 3;
	volatile uint32_t x1231 = 25U;
	uint64_t x1232 = 17752443336346060LLU;
	volatile uint64_t t15 = 31258LLU;

	t15 = ((x1229<(x1230>>x1231))%x1232);

	if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint8_t x1249 = 31U;
	int64_t x1250 = INT64_MAX;
	int8_t x1251 = 1;
	int16_t x1252 = INT16_MAX;
	volatile int32_t t16 = -246;

	t16 = ((x1249<(x1250>>x1251))%x1252);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x1257 = 1898;
	int16_t x1258 = INT16_MAX;
	uint64_t x1260 = UINT64_MAX;
	uint64_t t17 = 36673598475LLU;

	t17 = ((x1257<(x1258>>x1259))%x1260);

	if (t17 != 1LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x1317 = -38836528LL;
	static volatile uint64_t x1318 = UINT64_MAX;
	int16_t x1320 = -1;
	int32_t t18 = -597336345;

	t18 = ((x1317<(x1318>>x1319))%x1320);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x1349 = -1;
	int32_t x1350 = INT32_MAX;
	int32_t x1352 = INT32_MAX;
	volatile int32_t t19 = 204;

	t19 = ((x1349<(x1350>>x1351))%x1352);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x1353 = 3U;
	uint32_t x1354 = 14U;
	uint8_t x1355 = 3U;
	static volatile int64_t x1356 = INT64_MAX;
	int64_t t20 = 75876950997104394LL;

	t20 = ((x1353<(x1354>>x1355))%x1356);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1369 = -1;
	uint16_t x1371 = 0U;
	static int32_t x1372 = INT32_MAX;
	int32_t t21 = -10777679;

	t21 = ((x1369<(x1370>>x1371))%x1372);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1417 = INT32_MAX;
	int8_t x1419 = 8;
	volatile int64_t t22 = 15191LL;

	t22 = ((x1417<(x1418>>x1419))%x1420);

	if (t22 != 1LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1465 = 3896795555320391717LL;
	int64_t x1466 = 2879067000807198134LL;
	uint8_t x1467 = 27U;
	int8_t x1468 = -11;
	int32_t t23 = 5659166;

	t23 = ((x1465<(x1466>>x1467))%x1468);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1489 = 1692707440928LLU;
	uint16_t x1490 = 988U;
	volatile uint8_t x1491 = 2U;
	int64_t x1492 = -1LL;
	int64_t t24 = 250842531LL;

	t24 = ((x1489<(x1490>>x1491))%x1492);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x1505 = INT16_MIN;
	int8_t x1507 = 61;
	volatile uint64_t x1508 = UINT64_MAX;
	static volatile uint64_t t25 = 3668104943981598769LLU;

	t25 = ((x1505<(x1506>>x1507))%x1508);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x1525 = 11918U;
	int64_t x1526 = 126359768241508LL;
	uint32_t x1527 = 42U;
	int16_t x1528 = INT16_MIN;
	static int32_t t26 = -5;

	t26 = ((x1525<(x1526>>x1527))%x1528);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x1553 = 7;
	static uint8_t x1555 = 0U;
	int32_t x1556 = INT32_MIN;
	static int32_t t27 = 580684;

	t27 = ((x1553<(x1554>>x1555))%x1556);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1565 = -1465315469209538075LL;
	uint16_t x1566 = 6U;
	uint8_t x1567 = 9U;
	int32_t t28 = -33537735;

	t28 = ((x1565<(x1566>>x1567))%x1568);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1597 = INT16_MIN;
	int16_t x1599 = 1;
	int16_t x1600 = 49;
	volatile int32_t t29 = -134928;

	t29 = ((x1597<(x1598>>x1599))%x1600);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x1669 = 2U;
	int64_t x1670 = 528603680LL;
	uint16_t x1671 = 4U;
	int8_t x1672 = INT8_MAX;
	int32_t t30 = -13631313;

	t30 = ((x1669<(x1670>>x1671))%x1672);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1689 = 4U;
	volatile int16_t x1690 = 0;
	volatile int64_t x1692 = -240615677LL;

	t31 = ((x1689<(x1690>>x1691))%x1692);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1741 = -1;
	int16_t x1742 = INT16_MAX;
	static volatile uint16_t x1743 = 1U;
	uint64_t x1744 = UINT64_MAX;
	uint64_t t32 = 3828754510410418LLU;

	t32 = ((x1741<(x1742>>x1743))%x1744);

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x1750 = 490;
	volatile uint32_t x1751 = 2U;
	static int16_t x1752 = 22;
	int32_t t33 = 354831455;

	t33 = ((x1749<(x1750>>x1751))%x1752);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x1857 = UINT8_MAX;
	int64_t x1858 = 16547323007127967LL;
	uint8_t x1859 = 0U;
	volatile int8_t x1860 = -1;
	int32_t t34 = -31981;

	t34 = ((x1857<(x1858>>x1859))%x1860);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1886 = 95U;
	int8_t x1887 = 1;
	uint32_t x1888 = UINT32_MAX;
	volatile uint32_t t35 = 10033477U;

	t35 = ((x1885<(x1886>>x1887))%x1888);

	if (t35 != 1U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x1934 = 116;
	int8_t x1935 = 1;
	int16_t x1936 = -1;
	static int32_t t36 = -7019;

	t36 = ((x1933<(x1934>>x1935))%x1936);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1993 = INT16_MIN;
	static uint8_t x1994 = 1U;
	uint16_t x1995 = 8U;
	static int32_t t37 = 828;

	t37 = ((x1993<(x1994>>x1995))%x1996);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1997 = 381038095985286072LL;
	uint32_t x1999 = 2U;
	uint64_t x2000 = UINT64_MAX;
	uint64_t t38 = 7298930858LLU;

	t38 = ((x1997<(x1998>>x1999))%x2000);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x2025 = 28;
	volatile int16_t x2026 = INT16_MAX;
	uint64_t x2027 = 15LLU;
	int32_t x2028 = INT32_MIN;
	volatile int32_t t39 = 6134;

	t39 = ((x2025<(x2026>>x2027))%x2028);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x2082 = 2;
	uint8_t x2083 = 3U;
	int16_t x2084 = INT16_MIN;
	volatile int32_t t40 = -22607;

	t40 = ((x2081<(x2082>>x2083))%x2084);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2210 = INT16_MAX;
	int16_t x2211 = 15;
	int8_t x2212 = 1;

	t41 = ((x2209<(x2210>>x2211))%x2212);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x2225 = INT64_MIN;
	int8_t x2226 = INT8_MAX;
	static uint16_t x2227 = 1U;
	int32_t x2228 = INT32_MIN;
	volatile int32_t t42 = 343529084;

	t42 = ((x2225<(x2226>>x2227))%x2228);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x2258 = 350953481;
	int8_t x2259 = 1;
	static volatile int32_t x2260 = -2;
	int32_t t43 = 817949600;

	t43 = ((x2257<(x2258>>x2259))%x2260);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x2285 = INT64_MIN;
	static int64_t x2286 = 417502941LL;

	t44 = ((x2285<(x2286>>x2287))%x2288);

	if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x2405 = INT16_MAX;
	int8_t x2406 = 60;
	uint64_t x2408 = UINT64_MAX;
	volatile uint64_t t45 = 24905842LLU;

	t45 = ((x2405<(x2406>>x2407))%x2408);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2413 = INT8_MAX;
	int8_t x2415 = 2;
	int32_t t46 = 0;

	t46 = ((x2413<(x2414>>x2415))%x2416);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x2481 = INT8_MAX;
	int32_t x2482 = INT32_MAX;
	uint32_t x2484 = 19U;
	uint32_t t47 = 4087163U;

	t47 = ((x2481<(x2482>>x2483))%x2484);

	if (t47 != 1U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x2509 = -1;
	int16_t x2510 = INT16_MAX;
	static volatile uint8_t x2511 = 0U;
	int16_t x2512 = -1;

	t48 = ((x2509<(x2510>>x2511))%x2512);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x2582 = 200U;
	volatile uint64_t x2584 = 2885970098399LLU;

	t49 = ((x2581<(x2582>>x2583))%x2584);

	if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x2613 = -1;
	int16_t x2614 = 1;
	uint64_t x2616 = 3240255026064407LLU;
	static uint64_t t50 = 116260255LLU;

	t50 = ((x2613<(x2614>>x2615))%x2616);

	if (t50 != 1LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x2701 = INT32_MIN;
	uint64_t x2702 = UINT64_MAX;
	uint8_t x2703 = 0U;
	int32_t x2704 = INT32_MAX;
	int32_t t51 = 12352;

	t51 = ((x2701<(x2702>>x2703))%x2704);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x2706 = 6799U;
	int16_t x2707 = 30;
	uint16_t x2708 = UINT16_MAX;
	volatile int32_t t52 = 47507818;

	t52 = ((x2705<(x2706>>x2707))%x2708);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x2733 = INT8_MIN;
	int64_t x2734 = 361952315558099LL;
	int32_t x2735 = 0;
	volatile uint64_t x2736 = 12395886531742LLU;
	uint64_t t53 = 19LLU;

	t53 = ((x2733<(x2734>>x2735))%x2736);

	if (t53 != 1LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x2774 = UINT32_MAX;
	volatile int32_t x2776 = 19589;
	volatile int32_t t54 = 361787;

	t54 = ((x2773<(x2774>>x2775))%x2776);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x2841 = -326063LL;
	int64_t x2842 = 1043336992506082290LL;
	volatile int8_t x2843 = 1;
	static int64_t x2844 = 32542LL;
	int64_t t55 = -6077529687LL;

	t55 = ((x2841<(x2842>>x2843))%x2844);

	if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint16_t x3017 = 2588U;
	int16_t x3018 = INT16_MAX;
	int8_t x3019 = 5;
	uint16_t x3020 = 375U;
	static volatile int32_t t56 = -527752400;

	t56 = ((x3017<(x3018>>x3019))%x3020);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x3069 = 1198157110526852223LL;
	uint32_t x3070 = 517364U;
	int8_t x3071 = 0;
	uint8_t x3072 = UINT8_MAX;
	volatile int32_t t57 = 1706;

	t57 = ((x3069<(x3070>>x3071))%x3072);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x3198 = INT8_MAX;
	static volatile int32_t t58 = -461629055;

	t58 = ((x3197<(x3198>>x3199))%x3200);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x3277 = INT64_MAX;
	int8_t x3278 = 1;
	uint8_t x3279 = 1U;
	uint64_t x3280 = UINT64_MAX;
	volatile uint64_t t59 = 113008701189016010LLU;

	t59 = ((x3277<(x3278>>x3279))%x3280);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int8_t x3437 = INT8_MIN;
	static uint64_t x3438 = 1634000078243094LLU;
	uint32_t x3439 = 1U;
	int32_t t60 = -1;

	t60 = ((x3437<(x3438>>x3439))%x3440);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x3503 = 6U;
	int32_t x3504 = 594;

	t61 = ((x3501<(x3502>>x3503))%x3504);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x3665 = 3;
	int32_t t62 = 187;

	t62 = ((x3665<(x3666>>x3667))%x3668);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x3845 = 13;
	int8_t x3846 = 0;
	volatile int16_t x3847 = 22;
	volatile int8_t x3848 = -1;
	static volatile int32_t t63 = -36687092;

	t63 = ((x3845<(x3846>>x3847))%x3848);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x3909 = INT64_MIN;
	uint64_t x3910 = 810317965343290LLU;
	static int8_t x3912 = INT8_MIN;

	t64 = ((x3909<(x3910>>x3911))%x3912);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x3953 = -39;
	volatile uint8_t x3955 = 26U;
	static volatile uint16_t x3956 = 1181U;
	volatile int32_t t65 = 1150;

	t65 = ((x3953<(x3954>>x3955))%x3956);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x4017 = -38;
	int8_t x4019 = 1;
	int16_t x4020 = -1;
	int32_t t66 = -18043;

	t66 = ((x4017<(x4018>>x4019))%x4020);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int8_t x4117 = INT8_MIN;
	int16_t x4118 = 329;
	int64_t x4120 = INT64_MAX;
	static volatile int64_t t67 = 391925LL;

	t67 = ((x4117<(x4118>>x4119))%x4120);

	if (t67 != 1LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x4146 = INT64_MAX;
	uint16_t x4147 = 1U;
	uint32_t x4148 = UINT32_MAX;
	static volatile uint32_t t68 = 38U;

	t68 = ((x4145<(x4146>>x4147))%x4148);

	if (t68 != 1U) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x4181 = INT16_MAX;
	volatile uint8_t x4183 = 2U;
	static int32_t x4184 = -1;
	int32_t t69 = 19;

	t69 = ((x4181<(x4182>>x4183))%x4184);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x4197 = INT32_MAX;
	int32_t x4198 = 1866698;
	static int16_t x4199 = 1;
	uint8_t x4200 = 17U;
	volatile int32_t t70 = -302593355;

	t70 = ((x4197<(x4198>>x4199))%x4200);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x4378 = INT32_MAX;
	uint16_t x4380 = 11U;

	t71 = ((x4377<(x4378>>x4379))%x4380);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x4413 = 1127;
	int16_t x4414 = 3653;
	int8_t x4415 = 0;
	static int16_t x4416 = -1;
	volatile int32_t t72 = -1;

	t72 = ((x4413<(x4414>>x4415))%x4416);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x4445 = -3;
	volatile int8_t x4446 = INT8_MAX;
	static uint32_t x4447 = 2U;
	int32_t x4448 = -257694951;

	t73 = ((x4445<(x4446>>x4447))%x4448);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x4481 = 83406LLU;
	static int8_t x4484 = INT8_MIN;
	static int32_t t74 = 1432127;

	t74 = ((x4481<(x4482>>x4483))%x4484);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x4517 = -362094776;

	t75 = ((x4517<(x4518>>x4519))%x4520);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x4541 = -1;
	int32_t x4542 = 308;
	volatile int8_t x4543 = 0;
	static int16_t x4544 = 2031;
	static volatile int32_t t76 = 10613;

	t76 = ((x4541<(x4542>>x4543))%x4544);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x4641 = -1;
	int16_t x4642 = 238;
	uint64_t x4643 = 8LLU;
	uint64_t x4644 = UINT64_MAX;
	uint64_t t77 = 971195464876LLU;

	t77 = ((x4641<(x4642>>x4643))%x4644);

	if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x4669 = INT16_MIN;
	static int8_t x4670 = 4;
	static int32_t x4671 = 2;
	int64_t x4672 = 1283192433797651532LL;
	volatile int64_t t78 = -571331784232LL;

	t78 = ((x4669<(x4670>>x4671))%x4672);

	if (t78 != 1LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x4677 = 75U;
	uint64_t x4678 = UINT64_MAX;
	volatile int8_t x4679 = 24;
	int32_t x4680 = -14253996;
	static volatile int32_t t79 = 43;

	t79 = ((x4677<(x4678>>x4679))%x4680);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x4729 = INT16_MIN;
	uint16_t x4730 = 3032U;
	static int16_t x4731 = 2;
	int16_t x4732 = INT16_MAX;
	static int32_t t80 = 39622011;

	t80 = ((x4729<(x4730>>x4731))%x4732);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x4741 = INT64_MIN;
	int16_t x4742 = 1;
	uint8_t x4743 = 10U;
	int8_t x4744 = INT8_MIN;
	int32_t t81 = -914680222;

	t81 = ((x4741<(x4742>>x4743))%x4744);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x4797 = UINT32_MAX;
	int32_t x4798 = INT32_MAX;
	uint8_t x4799 = 0U;
	int64_t x4800 = INT64_MIN;
	static int64_t t82 = -1LL;

	t82 = ((x4797<(x4798>>x4799))%x4800);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x4801 = INT32_MAX;
	static volatile int8_t x4803 = 0;
	uint32_t t83 = 639777100U;

	t83 = ((x4801<(x4802>>x4803))%x4804);

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x4834 = INT64_MAX;
	int16_t x4835 = 29;
	int16_t x4836 = INT16_MIN;

	t84 = ((x4833<(x4834>>x4835))%x4836);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x4979 = 2;
	static int8_t x4980 = INT8_MIN;
	volatile int32_t t85 = 8934584;

	t85 = ((x4977<(x4978>>x4979))%x4980);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x5014 = INT16_MAX;
	int32_t x5015 = 0;
	static uint32_t x5016 = UINT32_MAX;

	t86 = ((x5013<(x5014>>x5015))%x5016);

	if (t86 != 1U) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x5165 = INT16_MAX;
	static int8_t x5168 = -1;

	t87 = ((x5165<(x5166>>x5167))%x5168);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x5177 = -5802;
	static uint64_t x5178 = 57982593867924LLU;
	uint16_t x5179 = 2U;
	static uint16_t x5180 = 12932U;

	t88 = ((x5177<(x5178>>x5179))%x5180);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x5305 = INT32_MIN;
	static int8_t x5306 = 30;
	static uint16_t x5307 = 0U;
	int32_t t89 = -1317724;

	t89 = ((x5305<(x5306>>x5307))%x5308);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x5321 = INT8_MIN;
	static uint32_t x5322 = 6U;
	uint16_t x5323 = 2U;
	volatile int32_t t90 = 2162254;

	t90 = ((x5321<(x5322>>x5323))%x5324);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x5349 = INT64_MIN;
	uint16_t x5350 = 11U;
	int8_t x5351 = 4;
	static uint32_t x5352 = UINT32_MAX;
	volatile uint32_t t91 = 409U;

	t91 = ((x5349<(x5350>>x5351))%x5352);

	if (t91 != 1U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x5389 = INT64_MAX;
	int16_t x5390 = 5;
	int64_t x5392 = 1694LL;
	int64_t t92 = -6798LL;

	t92 = ((x5389<(x5390>>x5391))%x5392);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x5485 = INT64_MIN;
	static int8_t x5486 = INT8_MAX;
	volatile uint16_t x5487 = 1U;
	static uint16_t x5488 = 488U;
	static int32_t t93 = 48;

	t93 = ((x5485<(x5486>>x5487))%x5488);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x5521 = UINT64_MAX;
	uint8_t x5522 = 59U;
	uint8_t x5524 = 82U;

	t94 = ((x5521<(x5522>>x5523))%x5524);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x5549 = -16338;
	uint64_t x5550 = 918275LLU;
	static int8_t x5551 = 7;
	static uint32_t x5552 = UINT32_MAX;
	volatile uint32_t t95 = 22U;

	t95 = ((x5549<(x5550>>x5551))%x5552);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x5556 = 14U;
	int32_t t96 = 26;

	t96 = ((x5553<(x5554>>x5555))%x5556);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x5661 = -1;
	static int64_t x5662 = INT64_MAX;
	uint16_t x5663 = 1U;
	int16_t x5664 = -1;
	volatile int32_t t97 = 50;

	t97 = ((x5661<(x5662>>x5663))%x5664);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x5729 = -1;
	int64_t x5731 = 2LL;
	static int64_t x5732 = INT64_MIN;
	static volatile int64_t t98 = 248LL;

	t98 = ((x5729<(x5730>>x5731))%x5732);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x5773 = 749475797981LL;
	static uint32_t x5774 = 37646U;
	int8_t x5775 = 1;
	int16_t x5776 = -119;
	static volatile int32_t t99 = 7683;

	t99 = ((x5773<(x5774>>x5775))%x5776);

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

