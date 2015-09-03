#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x135 = INT8_MIN;
static int8_t x185 = -1;
int32_t t3 = 459472290;
int8_t x234 = INT8_MIN;
uint8_t x240 = 18U;
int8_t x277 = -1;
static int8_t x280 = 0;
static int32_t t12 = 13;
int64_t x370 = -1LL;
uint8_t x471 = 5U;
static uint8_t x472 = 13U;
volatile uint8_t x595 = UINT8_MAX;
static int8_t x599 = INT8_MIN;
uint16_t x759 = UINT16_MAX;
volatile int32_t t20 = 450;
volatile uint8_t x881 = 0U;
volatile int32_t t25 = 0;
int32_t x913 = 508523467;
int16_t x915 = INT16_MIN;
static uint64_t x976 = 3LLU;
static uint32_t x1015 = 822927U;
int16_t x1023 = INT16_MIN;
static volatile int32_t t31 = 59717830;
volatile uint32_t x1081 = 35838476U;
int8_t x1112 = 5;
static uint32_t x1157 = 0U;
volatile uint32_t x1228 = 0U;
static uint8_t x1328 = 3U;
volatile uint16_t x1401 = UINT16_MAX;
int16_t x1402 = INT16_MAX;
uint8_t x1403 = 5U;
static uint16_t x1433 = UINT16_MAX;
static uint16_t x1500 = 11U;
static int32_t x1615 = -1763;
volatile int64_t x1621 = 373043594265778LL;
int32_t x1654 = INT32_MIN;
volatile int16_t x1655 = INT16_MAX;
int32_t t51 = 961101;
int8_t x1778 = 24;
int32_t x1822 = INT32_MAX;
int8_t x1823 = INT8_MIN;
uint16_t x1983 = UINT16_MAX;
static int64_t x1998 = -123611082515LL;
int16_t x2008 = 7;
static volatile int32_t x2055 = -1;
volatile int8_t x2074 = INT8_MAX;
int64_t x2182 = INT64_MIN;
volatile int32_t t64 = -330;
int64_t x2205 = -1LL;
int64_t x2206 = -366807654591663LL;
static uint32_t x2239 = 483U;
volatile int64_t x2255 = 2651047LL;
uint32_t x2256 = 4U;
volatile int32_t t67 = -86835;
static int32_t x2285 = INT32_MAX;
int16_t x2331 = INT16_MIN;
volatile int32_t x2369 = -1;
volatile uint8_t x2371 = 4U;
uint8_t x2392 = 12U;
int16_t x2409 = INT16_MAX;
uint16_t x2410 = 347U;
int8_t x2432 = 3;
static uint32_t x2460 = 3U;
int64_t x2498 = INT64_MAX;
volatile int32_t t77 = -2;
int32_t t78 = 7162;
volatile int32_t x2573 = INT32_MIN;
int32_t t79 = 3;
volatile int32_t x2610 = 5865;
int32_t t80 = 0;
uint8_t x2672 = 0U;
static int32_t t82 = -23;
int32_t t83 = 4444557;
uint8_t x2706 = 1U;
uint32_t x2837 = 11277U;
static volatile int32_t t88 = -696;
volatile int32_t t90 = -161;
static volatile int32_t x2954 = INT32_MIN;
int64_t x3013 = INT64_MIN;
uint32_t x3078 = UINT32_MAX;
int8_t x3080 = 26;
int16_t x3139 = -652;
uint32_t x3171 = 265U;
static uint8_t x3179 = UINT8_MAX;
static uint8_t x3192 = 3U;
int32_t t98 = -149531058;


void f0(void) {
	int16_t x133 = INT16_MIN;
	int16_t x134 = INT16_MIN;
	uint8_t x136 = 7U;
	volatile int32_t t0 = -3295317;

	t0 = (((x133^x134)==x135)<<x136);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x186 = 153LLU;
	static int16_t x187 = -1;
	static volatile int8_t x188 = 22;
	static int32_t t1 = 58864813;

	t1 = (((x185^x186)==x187)<<x188);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x189 = 202649LLU;
	int32_t x190 = INT32_MIN;
	int64_t x191 = INT64_MIN;
	volatile uint32_t x192 = 16U;
	volatile int32_t t2 = -795919208;

	t2 = (((x189^x190)==x191)<<x192);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x221 = 16;
	static int16_t x222 = 0;
	static int8_t x223 = INT8_MIN;
	uint8_t x224 = 1U;

	t3 = (((x221^x222)==x223)<<x224);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x233 = UINT16_MAX;
	int8_t x235 = 3;
	static uint8_t x236 = 2U;
	volatile int32_t t4 = -17694;

	t4 = (((x233^x234)==x235)<<x236);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x237 = INT64_MIN;
	static int64_t x238 = INT64_MIN;
	int32_t x239 = INT32_MIN;
	static int32_t t5 = 3;

	t5 = (((x237^x238)==x239)<<x240);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x261 = 97036;
	uint32_t x262 = 33266801U;
	int8_t x263 = INT8_MAX;
	int8_t x264 = 0;
	volatile int32_t t6 = 6071908;

	t6 = (((x261^x262)==x263)<<x264);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x269 = -1;
	volatile uint64_t x270 = 4943524LLU;
	static int16_t x271 = INT16_MIN;
	volatile uint16_t x272 = 1U;
	volatile int32_t t7 = -1127;

	t7 = (((x269^x270)==x271)<<x272);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x278 = INT32_MAX;
	int8_t x279 = 13;
	static int32_t t8 = -599188;

	t8 = (((x277^x278)==x279)<<x280);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x285 = INT64_MIN;
	int32_t x286 = INT32_MIN;
	static int8_t x287 = INT8_MIN;
	int16_t x288 = 1;
	static volatile int32_t t9 = -15329;

	t9 = (((x285^x286)==x287)<<x288);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x293 = UINT64_MAX;
	int32_t x294 = INT32_MIN;
	uint64_t x295 = 410463466074LLU;
	uint64_t x296 = 1LLU;
	static int32_t t10 = 90068224;

	t10 = (((x293^x294)==x295)<<x296);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x329 = 24356U;
	uint64_t x330 = 47834956695858672LLU;
	uint16_t x331 = 15U;
	int16_t x332 = 13;
	int32_t t11 = -1682;

	t11 = (((x329^x330)==x331)<<x332);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x337 = 10U;
	int64_t x338 = -5977581080456LL;
	volatile int32_t x339 = INT32_MIN;
	uint8_t x340 = 1U;

	t12 = (((x337^x338)==x339)<<x340);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x361 = 28710850LL;
	static int16_t x362 = 201;
	static int64_t x363 = INT64_MIN;
	uint16_t x364 = 0U;
	int32_t t13 = -5171;

	t13 = (((x361^x362)==x363)<<x364);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x369 = 14;
	static int8_t x371 = -1;
	uint8_t x372 = 22U;
	int32_t t14 = 3;

	t14 = (((x369^x370)==x371)<<x372);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x469 = INT16_MAX;
	int32_t x470 = INT32_MIN;
	static int32_t t15 = 265275984;

	t15 = (((x469^x470)==x471)<<x472);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x481 = 10U;
	int64_t x482 = -1LL;
	volatile int8_t x483 = 6;
	volatile uint8_t x484 = 13U;
	static int32_t t16 = -24171646;

	t16 = (((x481^x482)==x483)<<x484);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x593 = UINT32_MAX;
	int64_t x594 = INT64_MIN;
	volatile int8_t x596 = 7;
	volatile int32_t t17 = 321;

	t17 = (((x593^x594)==x595)<<x596);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x597 = UINT16_MAX;
	int64_t x598 = 640505966781849LL;
	uint64_t x600 = 0LLU;
	static volatile int32_t t18 = -14732;

	t18 = (((x597^x598)==x599)<<x600);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x665 = -1;
	uint64_t x666 = 3287973119451667LLU;
	static int16_t x667 = 329;
	static int8_t x668 = 0;
	volatile int32_t t19 = -1895;

	t19 = (((x665^x666)==x667)<<x668);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x757 = 3U;
	int8_t x758 = -1;
	uint8_t x760 = 0U;

	t20 = (((x757^x758)==x759)<<x760);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x765 = UINT32_MAX;
	int32_t x766 = INT32_MIN;
	volatile int32_t x767 = -1;
	uint32_t x768 = 17U;
	int32_t t21 = 3596;

	t21 = (((x765^x766)==x767)<<x768);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x785 = INT64_MAX;
	static int32_t x786 = 3558;
	int32_t x787 = -25;
	uint16_t x788 = 1U;
	int32_t t22 = -1;

	t22 = (((x785^x786)==x787)<<x788);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x849 = 0U;
	uint32_t x850 = 18802438U;
	volatile int64_t x851 = INT64_MIN;
	volatile uint32_t x852 = 2U;
	volatile int32_t t23 = -19197038;

	t23 = (((x849^x850)==x851)<<x852);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x865 = INT64_MAX;
	int64_t x866 = INT64_MIN;
	volatile int8_t x867 = INT8_MIN;
	uint8_t x868 = 3U;
	static int32_t t24 = 164120908;

	t24 = (((x865^x866)==x867)<<x868);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x882 = 48281603308080415LLU;
	int8_t x883 = INT8_MIN;
	uint16_t x884 = 3U;

	t25 = (((x881^x882)==x883)<<x884);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x885 = 636U;
	int16_t x886 = -1;
	int32_t x887 = -1;
	static uint32_t x888 = 13U;
	volatile int32_t t26 = 1;

	t26 = (((x885^x886)==x887)<<x888);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x914 = UINT64_MAX;
	uint8_t x916 = 0U;
	int32_t t27 = -572717;

	t27 = (((x913^x914)==x915)<<x916);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x973 = 51U;
	volatile uint64_t x974 = 6354LLU;
	volatile uint64_t x975 = 7935402084236LLU;
	int32_t t28 = -1950060;

	t28 = (((x973^x974)==x975)<<x976);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1013 = INT16_MIN;
	int32_t x1014 = -1;
	uint8_t x1016 = 1U;
	volatile int32_t t29 = 6804;

	t29 = (((x1013^x1014)==x1015)<<x1016);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1021 = 2855442765746LLU;
	static int32_t x1022 = INT32_MIN;
	int8_t x1024 = 1;
	int32_t t30 = -8;

	t30 = (((x1021^x1022)==x1023)<<x1024);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x1053 = 63U;
	int32_t x1054 = -1;
	uint16_t x1055 = UINT16_MAX;
	static uint8_t x1056 = 16U;

	t31 = (((x1053^x1054)==x1055)<<x1056);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1082 = INT16_MIN;
	uint8_t x1083 = UINT8_MAX;
	volatile uint8_t x1084 = 13U;
	static int32_t t32 = -5177387;

	t32 = (((x1081^x1082)==x1083)<<x1084);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x1109 = UINT8_MAX;
	uint16_t x1110 = 4633U;
	volatile int8_t x1111 = -1;
	volatile int32_t t33 = -172;

	t33 = (((x1109^x1110)==x1111)<<x1112);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint64_t x1133 = 1975395544570LLU;
	uint16_t x1134 = UINT16_MAX;
	uint16_t x1135 = 43U;
	volatile uint8_t x1136 = 4U;
	static int32_t t34 = 7;

	t34 = (((x1133^x1134)==x1135)<<x1136);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1158 = UINT8_MAX;
	static int16_t x1159 = INT16_MIN;
	static volatile uint8_t x1160 = 20U;
	volatile int32_t t35 = -105559141;

	t35 = (((x1157^x1158)==x1159)<<x1160);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x1225 = 41U;
	int16_t x1226 = INT16_MAX;
	static int64_t x1227 = 2395928281037974188LL;
	volatile int32_t t36 = -773;

	t36 = (((x1225^x1226)==x1227)<<x1228);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x1261 = 7431430147347853632LLU;
	static int64_t x1262 = INT64_MAX;
	int64_t x1263 = INT64_MIN;
	int8_t x1264 = 18;
	int32_t t37 = -6782;

	t37 = (((x1261^x1262)==x1263)<<x1264);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1269 = INT32_MIN;
	volatile int8_t x1270 = -6;
	static uint8_t x1271 = UINT8_MAX;
	int16_t x1272 = 11;
	volatile int32_t t38 = 30688573;

	t38 = (((x1269^x1270)==x1271)<<x1272);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1285 = INT16_MIN;
	static int8_t x1286 = -26;
	int16_t x1287 = INT16_MIN;
	static uint32_t x1288 = 5U;
	volatile int32_t t39 = 229;

	t39 = (((x1285^x1286)==x1287)<<x1288);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x1301 = INT32_MAX;
	int16_t x1302 = 1;
	static uint64_t x1303 = 6LLU;
	volatile int16_t x1304 = 1;
	static volatile int32_t t40 = 953009;

	t40 = (((x1301^x1302)==x1303)<<x1304);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x1325 = 18U;
	volatile int8_t x1326 = -1;
	int16_t x1327 = -56;
	static int32_t t41 = -1;

	t41 = (((x1325^x1326)==x1327)<<x1328);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x1404 = 1U;
	int32_t t42 = -2863523;

	t42 = (((x1401^x1402)==x1403)<<x1404);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x1421 = INT16_MIN;
	volatile uint64_t x1422 = UINT64_MAX;
	uint8_t x1423 = 0U;
	uint8_t x1424 = 7U;
	volatile int32_t t43 = -776887;

	t43 = (((x1421^x1422)==x1423)<<x1424);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x1434 = INT8_MAX;
	uint8_t x1435 = 0U;
	uint8_t x1436 = 11U;
	static int32_t t44 = 15;

	t44 = (((x1433^x1434)==x1435)<<x1436);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x1497 = 27946U;
	volatile int8_t x1498 = INT8_MIN;
	uint32_t x1499 = UINT32_MAX;
	volatile int32_t t45 = -6617;

	t45 = (((x1497^x1498)==x1499)<<x1500);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x1533 = -16;
	int16_t x1534 = -1;
	volatile int8_t x1535 = INT8_MIN;
	static uint8_t x1536 = 15U;
	volatile int32_t t46 = -221513466;

	t46 = (((x1533^x1534)==x1535)<<x1536);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x1569 = 3;
	static uint64_t x1570 = UINT64_MAX;
	volatile int64_t x1571 = -10608010LL;
	uint16_t x1572 = 3U;
	int32_t t47 = -359276;

	t47 = (((x1569^x1570)==x1571)<<x1572);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x1613 = 11365;
	uint16_t x1614 = 3340U;
	static volatile uint8_t x1616 = 17U;
	static int32_t t48 = -20370;

	t48 = (((x1613^x1614)==x1615)<<x1616);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x1622 = INT64_MIN;
	static uint8_t x1623 = 110U;
	uint8_t x1624 = 19U;
	volatile int32_t t49 = 23689;

	t49 = (((x1621^x1622)==x1623)<<x1624);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x1633 = -1;
	int32_t x1634 = INT32_MAX;
	static int8_t x1635 = INT8_MAX;
	int32_t x1636 = 14;
	int32_t t50 = -138;

	t50 = (((x1633^x1634)==x1635)<<x1636);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x1653 = 100U;
	static int8_t x1656 = 0;

	t51 = (((x1653^x1654)==x1655)<<x1656);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x1657 = INT64_MIN;
	int8_t x1658 = -1;
	uint16_t x1659 = UINT16_MAX;
	static int32_t x1660 = 2;
	int32_t t52 = 159883;

	t52 = (((x1657^x1658)==x1659)<<x1660);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x1777 = INT16_MIN;
	static int64_t x1779 = INT64_MAX;
	uint16_t x1780 = 12U;
	int32_t t53 = 575425;

	t53 = (((x1777^x1778)==x1779)<<x1780);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x1821 = -499;
	uint16_t x1824 = 10U;
	int32_t t54 = -60798048;

	t54 = (((x1821^x1822)==x1823)<<x1824);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x1969 = -1;
	static int32_t x1970 = INT32_MIN;
	int8_t x1971 = INT8_MIN;
	volatile uint8_t x1972 = 9U;
	int32_t t55 = -53;

	t55 = (((x1969^x1970)==x1971)<<x1972);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x1981 = 31756316LL;
	int64_t x1982 = -1LL;
	static volatile uint8_t x1984 = 29U;
	volatile int32_t t56 = 50;

	t56 = (((x1981^x1982)==x1983)<<x1984);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x1985 = -1;
	static volatile uint8_t x1986 = UINT8_MAX;
	static uint8_t x1987 = 45U;
	int16_t x1988 = 2;
	int32_t t57 = -282663048;

	t57 = (((x1985^x1986)==x1987)<<x1988);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x1997 = UINT16_MAX;
	int16_t x1999 = -1;
	static volatile uint8_t x2000 = 4U;
	volatile int32_t t58 = -319616756;

	t58 = (((x1997^x1998)==x1999)<<x2000);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x2005 = UINT16_MAX;
	int32_t x2006 = INT32_MAX;
	volatile uint16_t x2007 = 17U;
	int32_t t59 = 12;

	t59 = (((x2005^x2006)==x2007)<<x2008);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x2025 = 45U;
	int32_t x2026 = INT32_MAX;
	static int8_t x2027 = -1;
	uint8_t x2028 = 23U;
	static volatile int32_t t60 = 670;

	t60 = (((x2025^x2026)==x2027)<<x2028);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x2053 = 21190U;
	uint16_t x2054 = UINT16_MAX;
	volatile uint8_t x2056 = 3U;
	volatile int32_t t61 = 219;

	t61 = (((x2053^x2054)==x2055)<<x2056);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x2073 = INT32_MAX;
	int64_t x2075 = INT64_MIN;
	volatile uint8_t x2076 = 0U;
	volatile int32_t t62 = 1;

	t62 = (((x2073^x2074)==x2075)<<x2076);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x2169 = UINT8_MAX;
	static uint32_t x2170 = 761889U;
	volatile int32_t x2171 = -15;
	volatile int8_t x2172 = 0;
	int32_t t63 = -84096987;

	t63 = (((x2169^x2170)==x2171)<<x2172);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x2181 = INT16_MIN;
	uint64_t x2183 = UINT64_MAX;
	volatile uint16_t x2184 = 4U;

	t64 = (((x2181^x2182)==x2183)<<x2184);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x2207 = INT16_MIN;
	uint16_t x2208 = 11U;
	volatile int32_t t65 = -12779;

	t65 = (((x2205^x2206)==x2207)<<x2208);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x2237 = -1;
	uint64_t x2238 = 94747848LLU;
	uint8_t x2240 = 30U;
	volatile int32_t t66 = -1;

	t66 = (((x2237^x2238)==x2239)<<x2240);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x2253 = INT64_MIN;
	int64_t x2254 = -1LL;

	t67 = (((x2253^x2254)==x2255)<<x2256);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x2286 = INT64_MIN;
	int16_t x2287 = INT16_MIN;
	uint8_t x2288 = 4U;
	int32_t t68 = -10129;

	t68 = (((x2285^x2286)==x2287)<<x2288);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x2329 = 214905LLU;
	static uint32_t x2330 = UINT32_MAX;
	uint16_t x2332 = 1U;
	volatile int32_t t69 = -177893246;

	t69 = (((x2329^x2330)==x2331)<<x2332);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x2370 = -90356516203704LL;
	volatile uint32_t x2372 = 7U;
	int32_t t70 = -1;

	t70 = (((x2369^x2370)==x2371)<<x2372);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x2389 = -1;
	int8_t x2390 = 1;
	uint64_t x2391 = 287LLU;
	volatile int32_t t71 = 500;

	t71 = (((x2389^x2390)==x2391)<<x2392);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x2411 = 17822642359932107LL;
	static uint8_t x2412 = 23U;
	volatile int32_t t72 = 28;

	t72 = (((x2409^x2410)==x2411)<<x2412);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x2417 = INT64_MIN;
	int16_t x2418 = -419;
	int64_t x2419 = -61608227190699137LL;
	uint8_t x2420 = 7U;
	int32_t t73 = -1574041;

	t73 = (((x2417^x2418)==x2419)<<x2420);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x2429 = 42;
	volatile uint8_t x2430 = 29U;
	int32_t x2431 = INT32_MIN;
	static int32_t t74 = -247412;

	t74 = (((x2429^x2430)==x2431)<<x2432);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x2457 = -639070;
	int8_t x2458 = INT8_MIN;
	static uint32_t x2459 = 396U;
	volatile int32_t t75 = -73016;

	t75 = (((x2457^x2458)==x2459)<<x2460);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x2497 = 0U;
	int8_t x2499 = INT8_MIN;
	int8_t x2500 = 0;
	static int32_t t76 = -838204463;

	t76 = (((x2497^x2498)==x2499)<<x2500);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x2525 = 4U;
	int8_t x2526 = 0;
	static int16_t x2527 = INT16_MIN;
	volatile int16_t x2528 = 10;

	t77 = (((x2525^x2526)==x2527)<<x2528);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x2549 = UINT64_MAX;
	uint16_t x2550 = 3U;
	static int16_t x2551 = INT16_MAX;
	int8_t x2552 = 8;

	t78 = (((x2549^x2550)==x2551)<<x2552);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x2574 = INT64_MIN;
	int16_t x2575 = -3286;
	int8_t x2576 = 0;

	t79 = (((x2573^x2574)==x2575)<<x2576);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x2609 = UINT64_MAX;
	int8_t x2611 = INT8_MIN;
	int8_t x2612 = 2;

	t80 = (((x2609^x2610)==x2611)<<x2612);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x2669 = INT64_MAX;
	int16_t x2670 = -1193;
	int16_t x2671 = -1;
	int32_t t81 = 196;

	t81 = (((x2669^x2670)==x2671)<<x2672);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x2673 = INT16_MIN;
	int16_t x2674 = INT16_MAX;
	static int8_t x2675 = 1;
	volatile int8_t x2676 = 0;

	t82 = (((x2673^x2674)==x2675)<<x2676);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x2693 = INT64_MAX;
	volatile uint32_t x2694 = UINT32_MAX;
	int64_t x2695 = INT64_MIN;
	int8_t x2696 = 1;

	t83 = (((x2693^x2694)==x2695)<<x2696);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x2701 = -1941667802491065LL;
	int32_t x2702 = 87582228;
	volatile int64_t x2703 = 250288211841LL;
	int16_t x2704 = 0;
	static volatile int32_t t84 = -437056;

	t84 = (((x2701^x2702)==x2703)<<x2704);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x2705 = -1;
	int64_t x2707 = -7143076200LL;
	int16_t x2708 = 13;
	int32_t t85 = -15266695;

	t85 = (((x2705^x2706)==x2707)<<x2708);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x2773 = UINT16_MAX;
	uint64_t x2774 = 248LLU;
	int64_t x2775 = INT64_MIN;
	volatile uint32_t x2776 = 3U;
	static int32_t t86 = -3101751;

	t86 = (((x2773^x2774)==x2775)<<x2776);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x2777 = 30U;
	int8_t x2778 = INT8_MIN;
	static volatile uint8_t x2779 = UINT8_MAX;
	uint16_t x2780 = 18U;
	int32_t t87 = 11988958;

	t87 = (((x2777^x2778)==x2779)<<x2780);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x2838 = -1;
	uint32_t x2839 = UINT32_MAX;
	uint8_t x2840 = 5U;

	t88 = (((x2837^x2838)==x2839)<<x2840);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x2841 = 58117243653358313LLU;
	int8_t x2842 = INT8_MIN;
	int32_t x2843 = 318914;
	uint32_t x2844 = 1U;
	volatile int32_t t89 = 974569;

	t89 = (((x2841^x2842)==x2843)<<x2844);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x2929 = 3U;
	int32_t x2930 = INT32_MIN;
	static int32_t x2931 = INT32_MAX;
	int8_t x2932 = 1;

	t90 = (((x2929^x2930)==x2931)<<x2932);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x2953 = -407;
	volatile int16_t x2955 = INT16_MIN;
	uint16_t x2956 = 21U;
	volatile int32_t t91 = 752161847;

	t91 = (((x2953^x2954)==x2955)<<x2956);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x2961 = -1LL;
	int32_t x2962 = INT32_MAX;
	int8_t x2963 = INT8_MIN;
	uint16_t x2964 = 3U;
	volatile int32_t t92 = -13642297;

	t92 = (((x2961^x2962)==x2963)<<x2964);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x3014 = INT16_MIN;
	int32_t x3015 = 1;
	volatile uint16_t x3016 = 9U;
	volatile int32_t t93 = 29;

	t93 = (((x3013^x3014)==x3015)<<x3016);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x3077 = UINT64_MAX;
	volatile int64_t x3079 = -4LL;
	volatile int32_t t94 = 428;

	t94 = (((x3077^x3078)==x3079)<<x3080);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x3137 = INT64_MAX;
	static int8_t x3138 = 40;
	int8_t x3140 = 1;
	int32_t t95 = 73;

	t95 = (((x3137^x3138)==x3139)<<x3140);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x3169 = -4;
	int64_t x3170 = -1LL;
	uint16_t x3172 = 0U;
	static int32_t t96 = 3;

	t96 = (((x3169^x3170)==x3171)<<x3172);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x3177 = INT16_MAX;
	uint16_t x3178 = 17852U;
	int8_t x3180 = 0;
	int32_t t97 = 210821;

	t97 = (((x3177^x3178)==x3179)<<x3180);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x3189 = INT8_MIN;
	int64_t x3190 = INT64_MIN;
	uint16_t x3191 = 75U;

	t98 = (((x3189^x3190)==x3191)<<x3192);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x3217 = 11;
	int32_t x3218 = INT32_MIN;
	int64_t x3219 = -1LL;
	int16_t x3220 = 13;
	int32_t t99 = 57;

	t99 = (((x3217^x3218)==x3219)<<x3220);

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

