#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x33 = 12U;
volatile uint16_t x70 = 100U;
int64_t x102 = 32180632982040LL;
int32_t t4 = 8179449;
static int32_t x169 = INT32_MIN;
static uint8_t x216 = 13U;
static int8_t x279 = INT8_MIN;
static volatile int32_t t8 = -76033;
uint8_t x373 = 10U;
volatile int64_t x623 = -6492756045658480LL;
int32_t t16 = -948908;
int32_t x730 = -43;
volatile int32_t t22 = -250213466;
static volatile int32_t t23 = 8;
int32_t x889 = INT32_MAX;
volatile int32_t t25 = -127;
int8_t x905 = INT8_MAX;
int64_t x906 = INT64_MIN;
uint16_t x967 = UINT16_MAX;
int16_t x987 = INT16_MAX;
int64_t x1003 = 1971954305881332933LL;
int32_t t30 = -511;
uint64_t x1022 = 224LLU;
uint16_t x1024 = 14U;
int64_t x1047 = INT64_MIN;
int16_t x1048 = 1;
volatile int16_t x1140 = 17;
uint8_t x1260 = 3U;
static uint8_t x1276 = 2U;
int32_t t37 = -20287042;
int32_t x1300 = 0;
static volatile int32_t t38 = -88097;
static int64_t x1391 = INT64_MIN;
int32_t t40 = 586796;
int32_t t41 = -87656305;
uint8_t x1444 = 1U;
static volatile uint8_t x1478 = 22U;
static volatile int32_t t44 = -1767461;
volatile int32_t t46 = 1;
volatile int8_t x1615 = INT8_MIN;
static int32_t x1616 = 0;
static uint32_t x1706 = 1984301109U;
static volatile uint64_t x1707 = 8076LLU;
int16_t x2131 = 4641;
uint32_t x2233 = UINT32_MAX;
int8_t x2286 = -9;
uint64_t x2290 = 18524763262LLU;
uint8_t x2344 = 9U;
volatile int64_t x2526 = -142575LL;
static volatile uint16_t x2527 = 10811U;
int32_t t63 = 48252459;
int32_t t69 = -62090;
int8_t x2881 = -46;
volatile int16_t x2882 = -1;
volatile int64_t x2890 = -1LL;
int8_t x2961 = INT8_MAX;
uint32_t x2965 = 1480758817U;
uint8_t x2968 = 10U;
int64_t x2978 = INT64_MIN;
int64_t x2980 = 1LL;
volatile int32_t t76 = 1;
volatile int16_t x3031 = 1;
static int8_t x3075 = INT8_MAX;
static volatile uint8_t x3160 = 3U;
volatile uint64_t x3253 = UINT64_MAX;
static volatile int64_t x3279 = -1LL;
volatile uint64_t x3464 = 1LLU;
volatile uint64_t x3486 = UINT64_MAX;
static volatile uint32_t x3487 = 61895U;
static uint32_t x3548 = 10U;
uint16_t x3685 = 15358U;
static volatile int32_t x3703 = INT32_MIN;
uint8_t x3704 = 9U;
int32_t t91 = 2000;
volatile uint8_t x3862 = 6U;
volatile int32_t t92 = -45104829;
uint8_t x4161 = UINT8_MAX;
volatile int32_t x4162 = 837036;
int8_t x4164 = 0;
int64_t x4193 = INT64_MIN;
static uint16_t x4214 = UINT16_MAX;
uint16_t x4339 = 185U;
volatile int32_t t99 = -6969246;


void f0(void) {
	int8_t x34 = INT8_MIN;
	uint16_t x35 = 43U;
	int8_t x36 = 0;
	static volatile int32_t t0 = 416515816;

	t0 = ((x33<=(x34+x35))<<x36);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x69 = 51;
	static int16_t x71 = INT16_MAX;
	static volatile uint16_t x72 = 0U;
	static int32_t t1 = 66049720;

	t1 = ((x69<=(x70+x71))<<x72);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int32_t x89 = 0;
	uint8_t x90 = UINT8_MAX;
	static int64_t x91 = -1LL;
	uint8_t x92 = 20U;
	volatile int32_t t2 = 3;

	t2 = ((x89<=(x90+x91))<<x92);

	if (t2 != 1048576) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x101 = -1LL;
	static uint64_t x103 = 9902110LLU;
	uint16_t x104 = 22U;
	volatile int32_t t3 = -4155;

	t3 = ((x101<=(x102+x103))<<x104);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x161 = UINT16_MAX;
	int8_t x162 = INT8_MIN;
	int8_t x163 = 0;
	static uint16_t x164 = 1U;

	t4 = ((x161<=(x162+x163))<<x164);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x170 = INT8_MIN;
	int16_t x171 = 48;
	int16_t x172 = 1;
	static int32_t t5 = -1;

	t5 = ((x169<=(x170+x171))<<x172);

	if (t5 != 2) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x213 = INT64_MAX;
	int16_t x214 = -1;
	int16_t x215 = 2;
	volatile int32_t t6 = 6;

	t6 = ((x213<=(x214+x215))<<x216);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x249 = UINT8_MAX;
	int16_t x250 = INT16_MAX;
	int64_t x251 = INT64_MIN;
	uint8_t x252 = 17U;
	int32_t t7 = 2200425;

	t7 = ((x249<=(x250+x251))<<x252);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x277 = INT8_MAX;
	int8_t x278 = INT8_MIN;
	uint8_t x280 = 2U;

	t8 = ((x277<=(x278+x279))<<x280);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x305 = INT32_MIN;
	int32_t x306 = -6;
	uint16_t x307 = 0U;
	uint16_t x308 = 2U;
	static int32_t t9 = 16906868;

	t9 = ((x305<=(x306+x307))<<x308);

	if (t9 != 4) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x365 = 105669;
	int64_t x366 = 2LL;
	static int32_t x367 = INT32_MAX;
	uint16_t x368 = 20U;
	volatile int32_t t10 = 52;

	t10 = ((x365<=(x366+x367))<<x368);

	if (t10 != 1048576) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x374 = -1;
	static int8_t x375 = INT8_MAX;
	int8_t x376 = 17;
	static volatile int32_t t11 = 43;

	t11 = ((x373<=(x374+x375))<<x376);

	if (t11 != 131072) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x541 = 10;
	int16_t x542 = -42;
	int16_t x543 = -1;
	uint64_t x544 = 4LLU;
	int32_t t12 = 58814893;

	t12 = ((x541<=(x542+x543))<<x544);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x545 = -1LL;
	int16_t x546 = -1;
	static int64_t x547 = 35LL;
	uint8_t x548 = 4U;
	int32_t t13 = -119817073;

	t13 = ((x545<=(x546+x547))<<x548);

	if (t13 != 16) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x561 = -1245;
	uint32_t x562 = 306U;
	static int32_t x563 = 16213456;
	int32_t x564 = 2;
	volatile int32_t t14 = 2322;

	t14 = ((x561<=(x562+x563))<<x564);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x565 = INT32_MIN;
	int8_t x566 = INT8_MIN;
	volatile uint8_t x567 = 30U;
	uint64_t x568 = 1LLU;
	volatile int32_t t15 = -3;

	t15 = ((x565<=(x566+x567))<<x568);

	if (t15 != 2) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x621 = 2729506;
	int8_t x622 = INT8_MIN;
	volatile int16_t x624 = 1;

	t16 = ((x621<=(x622+x623))<<x624);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x673 = -11;
	volatile uint16_t x674 = 5U;
	int8_t x675 = INT8_MIN;
	uint16_t x676 = 28U;
	int32_t t17 = -29130;

	t17 = ((x673<=(x674+x675))<<x676);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x681 = INT8_MIN;
	int32_t x682 = INT32_MIN;
	volatile uint16_t x683 = 135U;
	uint8_t x684 = 1U;
	int32_t t18 = 407;

	t18 = ((x681<=(x682+x683))<<x684);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x709 = INT32_MIN;
	uint16_t x710 = 348U;
	uint32_t x711 = 21952531U;
	int8_t x712 = 24;
	int32_t t19 = 1290601;

	t19 = ((x709<=(x710+x711))<<x712);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x729 = -1;
	int16_t x731 = 1;
	int8_t x732 = 0;
	int32_t t20 = 8504365;

	t20 = ((x729<=(x730+x731))<<x732);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x745 = UINT32_MAX;
	uint16_t x746 = 1922U;
	static volatile uint32_t x747 = UINT32_MAX;
	static uint8_t x748 = 0U;
	int32_t t21 = -1322;

	t21 = ((x745<=(x746+x747))<<x748);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x793 = INT32_MIN;
	static int16_t x794 = -1;
	volatile uint32_t x795 = 136050118U;
	int16_t x796 = 6;

	t22 = ((x793<=(x794+x795))<<x796);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x821 = UINT64_MAX;
	static uint32_t x822 = 536U;
	static int8_t x823 = INT8_MIN;
	uint16_t x824 = 1U;

	t23 = ((x821<=(x822+x823))<<x824);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x837 = INT64_MIN;
	static int16_t x838 = INT16_MIN;
	static uint32_t x839 = UINT32_MAX;
	uint8_t x840 = 1U;
	int32_t t24 = -45;

	t24 = ((x837<=(x838+x839))<<x840);

	if (t24 != 2) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x890 = 20LLU;
	static int16_t x891 = INT16_MIN;
	static volatile uint16_t x892 = 0U;

	t25 = ((x889<=(x890+x891))<<x892);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x907 = 11;
	int8_t x908 = 5;
	int32_t t26 = -58171775;

	t26 = ((x905<=(x906+x907))<<x908);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x917 = -697073LL;
	volatile int16_t x918 = 1;
	int32_t x919 = INT32_MIN;
	uint8_t x920 = 1U;
	volatile int32_t t27 = 224673750;

	t27 = ((x917<=(x918+x919))<<x920);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x965 = 65U;
	static uint8_t x966 = UINT8_MAX;
	uint8_t x968 = 5U;
	volatile int32_t t28 = -1;

	t28 = ((x965<=(x966+x967))<<x968);

	if (t28 != 32) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x985 = 1536;
	int8_t x986 = 46;
	volatile uint16_t x988 = 3U;
	volatile int32_t t29 = 48;

	t29 = ((x985<=(x986+x987))<<x988);

	if (t29 != 8) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x1001 = UINT32_MAX;
	int16_t x1002 = INT16_MIN;
	int32_t x1004 = 13;

	t30 = ((x1001<=(x1002+x1003))<<x1004);

	if (t30 != 8192) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x1021 = INT8_MIN;
	int16_t x1023 = INT16_MAX;
	int32_t t31 = 22;

	t31 = ((x1021<=(x1022+x1023))<<x1024);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1045 = 115767LLU;
	uint64_t x1046 = 387974465767LLU;
	int32_t t32 = -168688;

	t32 = ((x1045<=(x1046+x1047))<<x1048);

	if (t32 != 2) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1137 = -1014LL;
	volatile int64_t x1138 = -1LL;
	int8_t x1139 = INT8_MAX;
	volatile int32_t t33 = 0;

	t33 = ((x1137<=(x1138+x1139))<<x1140);

	if (t33 != 131072) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1153 = 24;
	int8_t x1154 = INT8_MIN;
	int8_t x1155 = -1;
	int32_t x1156 = 1;
	int32_t t34 = -554144827;

	t34 = ((x1153<=(x1154+x1155))<<x1156);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x1253 = -55;
	volatile int32_t x1254 = -1;
	uint64_t x1255 = 107469LLU;
	int8_t x1256 = 1;
	volatile int32_t t35 = 1;

	t35 = ((x1253<=(x1254+x1255))<<x1256);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x1257 = 7U;
	volatile int8_t x1258 = INT8_MIN;
	uint64_t x1259 = 105584LLU;
	volatile int32_t t36 = 524;

	t36 = ((x1257<=(x1258+x1259))<<x1260);

	if (t36 != 8) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1273 = INT16_MAX;
	int8_t x1274 = INT8_MIN;
	int64_t x1275 = 994768004632334931LL;

	t37 = ((x1273<=(x1274+x1275))<<x1276);

	if (t37 != 4) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x1297 = UINT64_MAX;
	int32_t x1298 = -24276;
	static uint32_t x1299 = 15014U;

	t38 = ((x1297<=(x1298+x1299))<<x1300);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1349 = INT16_MIN;
	static volatile uint8_t x1350 = 107U;
	volatile uint64_t x1351 = 13617283603873LLU;
	static int16_t x1352 = 4;
	int32_t t39 = -210474174;

	t39 = ((x1349<=(x1350+x1351))<<x1352);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int32_t x1389 = INT32_MIN;
	uint16_t x1390 = 96U;
	uint16_t x1392 = 1U;

	t40 = ((x1389<=(x1390+x1391))<<x1392);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x1413 = UINT32_MAX;
	static uint8_t x1414 = 1U;
	uint64_t x1415 = 31557916231518901LLU;
	uint8_t x1416 = 0U;

	t41 = ((x1413<=(x1414+x1415))<<x1416);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x1441 = INT16_MIN;
	uint64_t x1442 = 19770660LLU;
	static int64_t x1443 = INT64_MAX;
	volatile int32_t t42 = 1;

	t42 = ((x1441<=(x1442+x1443))<<x1444);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x1477 = -31;
	int16_t x1479 = INT16_MIN;
	int16_t x1480 = 0;
	int32_t t43 = -34492774;

	t43 = ((x1477<=(x1478+x1479))<<x1480);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x1489 = -1;
	int8_t x1490 = 16;
	int16_t x1491 = INT16_MAX;
	int16_t x1492 = 11;

	t44 = ((x1489<=(x1490+x1491))<<x1492);

	if (t44 != 2048) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x1505 = -1;
	int8_t x1506 = -17;
	uint64_t x1507 = 176902LLU;
	int16_t x1508 = 0;
	static volatile int32_t t45 = 9;

	t45 = ((x1505<=(x1506+x1507))<<x1508);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x1533 = INT32_MIN;
	int8_t x1534 = INT8_MIN;
	int8_t x1535 = 2;
	static int8_t x1536 = 0;

	t46 = ((x1533<=(x1534+x1535))<<x1536);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x1605 = INT32_MIN;
	uint32_t x1606 = UINT32_MAX;
	static int16_t x1607 = -552;
	int8_t x1608 = 1;
	static int32_t t47 = 29;

	t47 = ((x1605<=(x1606+x1607))<<x1608);

	if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x1613 = 3944U;
	uint8_t x1614 = 47U;
	int32_t t48 = 1;

	t48 = ((x1613<=(x1614+x1615))<<x1616);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x1705 = -9138060998654LL;
	uint64_t x1708 = 0LLU;
	volatile int32_t t49 = 1707178;

	t49 = ((x1705<=(x1706+x1707))<<x1708);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x1777 = INT64_MAX;
	volatile uint64_t x1778 = UINT64_MAX;
	int64_t x1779 = INT64_MIN;
	uint8_t x1780 = 1U;
	int32_t t50 = 68;

	t50 = ((x1777<=(x1778+x1779))<<x1780);

	if (t50 != 2) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x2017 = INT64_MIN;
	static uint16_t x2018 = 868U;
	volatile int32_t x2019 = INT32_MIN;
	static uint32_t x2020 = 1U;
	static volatile int32_t t51 = 6743714;

	t51 = ((x2017<=(x2018+x2019))<<x2020);

	if (t51 != 2) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x2025 = INT32_MAX;
	uint8_t x2026 = UINT8_MAX;
	int64_t x2027 = INT64_MIN;
	uint8_t x2028 = 2U;
	volatile int32_t t52 = 1960;

	t52 = ((x2025<=(x2026+x2027))<<x2028);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x2053 = -1744LL;
	volatile uint32_t x2054 = 778U;
	int64_t x2055 = INT64_MIN;
	static uint8_t x2056 = 14U;
	volatile int32_t t53 = 1;

	t53 = ((x2053<=(x2054+x2055))<<x2056);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x2105 = 0U;
	int64_t x2106 = INT64_MIN;
	int64_t x2107 = 64961736795026LL;
	uint8_t x2108 = 3U;
	static int32_t t54 = -271057248;

	t54 = ((x2105<=(x2106+x2107))<<x2108);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x2129 = 1722U;
	int16_t x2130 = 1;
	static uint8_t x2132 = 6U;
	static int32_t t55 = 27;

	t55 = ((x2129<=(x2130+x2131))<<x2132);

	if (t55 != 64) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x2234 = INT32_MAX;
	volatile int32_t x2235 = -110756776;
	volatile uint16_t x2236 = 15U;
	int32_t t56 = 1949;

	t56 = ((x2233<=(x2234+x2235))<<x2236);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x2285 = UINT64_MAX;
	volatile int32_t x2287 = INT32_MAX;
	static volatile uint16_t x2288 = 2U;
	int32_t t57 = -15;

	t57 = ((x2285<=(x2286+x2287))<<x2288);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x2289 = 9;
	int32_t x2291 = -1;
	int8_t x2292 = 30;
	int32_t t58 = -16777;

	t58 = ((x2289<=(x2290+x2291))<<x2292);

	if (t58 != 1073741824) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x2341 = INT8_MAX;
	uint8_t x2342 = 15U;
	int32_t x2343 = -9;
	int32_t t59 = -63625;

	t59 = ((x2341<=(x2342+x2343))<<x2344);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x2477 = 106918LLU;
	uint32_t x2478 = UINT32_MAX;
	static uint8_t x2479 = 114U;
	int8_t x2480 = 14;
	static volatile int32_t t60 = 0;

	t60 = ((x2477<=(x2478+x2479))<<x2480);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x2517 = INT8_MIN;
	volatile int16_t x2518 = INT16_MAX;
	uint16_t x2519 = UINT16_MAX;
	static int64_t x2520 = 30LL;
	int32_t t61 = 43705529;

	t61 = ((x2517<=(x2518+x2519))<<x2520);

	if (t61 != 1073741824) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x2525 = -57;
	static volatile int8_t x2528 = 1;
	volatile int32_t t62 = 0;

	t62 = ((x2525<=(x2526+x2527))<<x2528);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x2617 = -1;
	uint64_t x2618 = UINT64_MAX;
	int8_t x2619 = -1;
	uint16_t x2620 = 1U;

	t63 = ((x2617<=(x2618+x2619))<<x2620);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x2649 = INT16_MIN;
	int16_t x2650 = 5;
	uint64_t x2651 = 14LLU;
	volatile uint16_t x2652 = 0U;
	volatile int32_t t64 = -36;

	t64 = ((x2649<=(x2650+x2651))<<x2652);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x2657 = INT8_MAX;
	int64_t x2658 = 13189LL;
	int8_t x2659 = 2;
	int16_t x2660 = 28;
	volatile int32_t t65 = -1;

	t65 = ((x2657<=(x2658+x2659))<<x2660);

	if (t65 != 268435456) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x2685 = 30370215LLU;
	static int32_t x2686 = -40;
	int32_t x2687 = 29846;
	int16_t x2688 = 5;
	int32_t t66 = -386;

	t66 = ((x2685<=(x2686+x2687))<<x2688);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x2709 = -32584243010778LL;
	uint32_t x2710 = UINT32_MAX;
	int8_t x2711 = 47;
	int16_t x2712 = 6;
	volatile int32_t t67 = 416606;

	t67 = ((x2709<=(x2710+x2711))<<x2712);

	if (t67 != 64) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x2733 = INT16_MIN;
	uint64_t x2734 = 59LLU;
	int8_t x2735 = 1;
	static volatile int8_t x2736 = 1;
	volatile int32_t t68 = 13866;

	t68 = ((x2733<=(x2734+x2735))<<x2736);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x2785 = 117U;
	volatile uint8_t x2786 = UINT8_MAX;
	int8_t x2787 = -1;
	static uint8_t x2788 = 29U;

	t69 = ((x2785<=(x2786+x2787))<<x2788);

	if (t69 != 536870912) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x2825 = -1662878844570LL;
	static int8_t x2826 = INT8_MAX;
	int32_t x2827 = INT32_MIN;
	static int16_t x2828 = 0;
	volatile int32_t t70 = -3;

	t70 = ((x2825<=(x2826+x2827))<<x2828);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x2883 = INT16_MIN;
	int8_t x2884 = 0;
	static volatile int32_t t71 = -16100;

	t71 = ((x2881<=(x2882+x2883))<<x2884);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x2889 = 86;
	int8_t x2891 = 12;
	volatile uint8_t x2892 = 31U;
	volatile int32_t t72 = -5926;

	t72 = ((x2889<=(x2890+x2891))<<x2892);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x2962 = 1673630626683LL;
	uint64_t x2963 = 201LLU;
	uint32_t x2964 = 2U;
	volatile int32_t t73 = -116;

	t73 = ((x2961<=(x2962+x2963))<<x2964);

	if (t73 != 4) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x2966 = 4064;
	int8_t x2967 = INT8_MIN;
	volatile int32_t t74 = 821;

	t74 = ((x2965<=(x2966+x2967))<<x2968);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x2977 = INT16_MIN;
	static int32_t x2979 = 43;
	int32_t t75 = 1;

	t75 = ((x2977<=(x2978+x2979))<<x2980);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x2997 = -59397708LL;
	int32_t x2998 = -1;
	int64_t x2999 = -228483444141LL;
	uint8_t x3000 = 10U;

	t76 = ((x2997<=(x2998+x2999))<<x3000);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x3029 = UINT16_MAX;
	volatile int8_t x3030 = INT8_MIN;
	static int32_t x3032 = 3;
	volatile int32_t t77 = 67;

	t77 = ((x3029<=(x3030+x3031))<<x3032);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x3061 = -1;
	static volatile uint64_t x3062 = 2510215LLU;
	int64_t x3063 = -43042801907233LL;
	uint16_t x3064 = 31U;
	int32_t t78 = 1269199;

	t78 = ((x3061<=(x3062+x3063))<<x3064);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x3073 = -1;
	int16_t x3074 = INT16_MIN;
	uint16_t x3076 = 2U;
	volatile int32_t t79 = -22767;

	t79 = ((x3073<=(x3074+x3075))<<x3076);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x3157 = INT16_MAX;
	uint16_t x3158 = UINT16_MAX;
	uint32_t x3159 = UINT32_MAX;
	volatile int32_t t80 = 71143;

	t80 = ((x3157<=(x3158+x3159))<<x3160);

	if (t80 != 8) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x3254 = UINT64_MAX;
	int16_t x3255 = -1;
	uint32_t x3256 = 22U;
	volatile int32_t t81 = 8710;

	t81 = ((x3253<=(x3254+x3255))<<x3256);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x3277 = -3LL;
	volatile int64_t x3278 = -1LL;
	uint8_t x3280 = 4U;
	volatile int32_t t82 = 149843;

	t82 = ((x3277<=(x3278+x3279))<<x3280);

	if (t82 != 16) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x3461 = UINT8_MAX;
	uint16_t x3462 = UINT16_MAX;
	int32_t x3463 = 228718;
	int32_t t83 = -15079136;

	t83 = ((x3461<=(x3462+x3463))<<x3464);

	if (t83 != 2) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x3485 = 7925919833LLU;
	int32_t x3488 = 6;
	volatile int32_t t84 = 4247276;

	t84 = ((x3485<=(x3486+x3487))<<x3488);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x3501 = -1;
	uint16_t x3502 = UINT16_MAX;
	uint64_t x3503 = 0LLU;
	static uint8_t x3504 = 5U;
	volatile int32_t t85 = -3057703;

	t85 = ((x3501<=(x3502+x3503))<<x3504);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x3545 = 449U;
	int8_t x3546 = 1;
	int16_t x3547 = 234;
	volatile int32_t t86 = 35;

	t86 = ((x3545<=(x3546+x3547))<<x3548);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x3577 = 4661066178032440LLU;
	int16_t x3578 = -1;
	int64_t x3579 = -1LL;
	static volatile uint8_t x3580 = 14U;
	int32_t t87 = -6096158;

	t87 = ((x3577<=(x3578+x3579))<<x3580);

	if (t87 != 16384) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x3641 = UINT64_MAX;
	int16_t x3642 = INT16_MIN;
	volatile int32_t x3643 = -1;
	volatile int8_t x3644 = 11;
	int32_t t88 = 792657695;

	t88 = ((x3641<=(x3642+x3643))<<x3644);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x3686 = 62;
	static int32_t x3687 = INT32_MIN;
	int16_t x3688 = 0;
	int32_t t89 = 66;

	t89 = ((x3685<=(x3686+x3687))<<x3688);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x3701 = UINT8_MAX;
	int32_t x3702 = 10;
	volatile int32_t t90 = -11697822;

	t90 = ((x3701<=(x3702+x3703))<<x3704);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x3713 = 68971U;
	int8_t x3714 = -20;
	int16_t x3715 = INT16_MIN;
	volatile uint8_t x3716 = 0U;

	t91 = ((x3713<=(x3714+x3715))<<x3716);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x3861 = INT32_MAX;
	static volatile int16_t x3863 = 2331;
	static uint16_t x3864 = 0U;

	t92 = ((x3861<=(x3862+x3863))<<x3864);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x4105 = 1961328;
	int16_t x4106 = 3384;
	int16_t x4107 = -1;
	uint64_t x4108 = 3LLU;
	int32_t t93 = 1313;

	t93 = ((x4105<=(x4106+x4107))<<x4108);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x4163 = INT16_MIN;
	int32_t t94 = 647129341;

	t94 = ((x4161<=(x4162+x4163))<<x4164);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x4194 = 1141U;
	volatile int64_t x4195 = 364LL;
	uint8_t x4196 = 13U;
	int32_t t95 = -1;

	t95 = ((x4193<=(x4194+x4195))<<x4196);

	if (t95 != 8192) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x4213 = INT8_MAX;
	int16_t x4215 = -214;
	uint8_t x4216 = 10U;
	int32_t t96 = -11;

	t96 = ((x4213<=(x4214+x4215))<<x4216);

	if (t96 != 1024) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x4337 = 164;
	static volatile uint32_t x4338 = UINT32_MAX;
	int8_t x4340 = 0;
	static int32_t t97 = -7656363;

	t97 = ((x4337<=(x4338+x4339))<<x4340);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x4361 = INT8_MIN;
	int64_t x4362 = INT64_MIN;
	uint64_t x4363 = UINT64_MAX;
	static uint16_t x4364 = 3U;
	int32_t t98 = -1;

	t98 = ((x4361<=(x4362+x4363))<<x4364);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x4397 = -432440135041026LL;
	static int16_t x4398 = INT16_MIN;
	int8_t x4399 = 0;
	uint8_t x4400 = 2U;

	t99 = ((x4397<=(x4398+x4399))<<x4400);

	if (t99 != 4) { NG(); } else { ; }
	
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

