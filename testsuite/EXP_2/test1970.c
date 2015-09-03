#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x103 = INT16_MIN;
volatile uint8_t x152 = 5U;
uint16_t x194 = 5013U;
uint16_t x196 = 11U;
uint16_t x384 = 1U;
volatile int32_t t8 = -71569614;
volatile int32_t t9 = -276;
int16_t x395 = -1;
volatile int32_t t10 = 44804809;
static uint16_t x405 = UINT16_MAX;
static volatile int32_t x406 = -1;
int16_t x407 = INT16_MIN;
uint8_t x408 = 1U;
static volatile uint32_t x441 = 272916057U;
int32_t t13 = 5;
static int32_t x484 = 1;
int8_t x485 = INT8_MIN;
volatile int32_t x487 = 1439;
uint8_t x488 = 2U;
volatile int8_t x494 = 1;
volatile int32_t t16 = 278989460;
static int16_t x525 = INT16_MAX;
uint8_t x528 = 0U;
int32_t x569 = -12;
static volatile int32_t x571 = -1;
volatile uint8_t x588 = 26U;
volatile uint32_t x594 = 10171727U;
int32_t x607 = -101;
int8_t x608 = 31;
static int32_t t21 = -5042;
volatile int64_t x757 = INT64_MIN;
uint64_t x758 = 656014LLU;
int16_t x850 = 917;
int16_t x903 = 5085;
int64_t x969 = -1LL;
int16_t x1021 = 5362;
uint8_t x1024 = 0U;
int16_t x1077 = INT16_MIN;
volatile int32_t t33 = 69840295;
int64_t x1115 = INT64_MAX;
static volatile int64_t x1127 = INT64_MIN;
int32_t t36 = 29671970;
int64_t x1170 = INT64_MAX;
volatile int32_t t37 = -2343935;
volatile int32_t t38 = 758613;
int16_t x1251 = INT16_MIN;
uint32_t x1319 = 3297196U;
uint8_t x1320 = 11U;
static uint8_t x1353 = 1U;
int64_t x1359 = 559698995470495LL;
int32_t x1400 = 0;
int8_t x1409 = INT8_MIN;
int64_t x1509 = INT64_MAX;
int8_t x1634 = INT8_MIN;
static volatile int8_t x1636 = 0;
volatile uint32_t x1647 = 612328U;
int8_t x1648 = 0;
volatile int32_t t50 = 72;
int32_t x1686 = -1;
static int8_t x1688 = 2;
int16_t x1690 = INT16_MIN;
uint32_t x1698 = 72490U;
int8_t x1701 = 0;
int16_t x1775 = 695;
static int32_t x1790 = INT32_MIN;
uint64_t x1805 = 1562LLU;
int64_t x1843 = INT64_MIN;
uint8_t x1908 = 5U;
int32_t t64 = 1306;
uint8_t x1933 = 10U;
int8_t x1953 = 1;
volatile int32_t t66 = 308601;
volatile uint32_t x2018 = UINT32_MAX;
int16_t x2061 = INT16_MAX;
uint64_t x2064 = 0LLU;
volatile int8_t x2069 = INT8_MIN;
volatile int32_t t70 = -7109;
static volatile int32_t t71 = 3;
int8_t x2129 = 54;
int32_t t72 = -17392;
int8_t x2169 = -51;
static int32_t t73 = -79;
uint16_t x2190 = 0U;
volatile uint8_t x2197 = UINT8_MAX;
int16_t x2286 = -1;
uint8_t x2321 = UINT8_MAX;
volatile int32_t t83 = -5247886;
int8_t x2332 = 4;
volatile int32_t x2343 = -1;
static volatile uint16_t x2347 = 2U;
uint8_t x2373 = UINT8_MAX;
int32_t x2375 = INT32_MIN;
volatile int32_t t89 = -21173;
static int32_t x2394 = -1;
int16_t x2395 = 1;
int32_t t92 = 0;
int64_t x2453 = INT64_MIN;
int8_t x2525 = -1;
volatile int16_t x2526 = INT16_MIN;
int64_t x2669 = INT64_MIN;
uint16_t x2670 = UINT16_MAX;


void f0(void) {
	volatile int64_t x101 = -1LL;
	int32_t x102 = -1;
	uint16_t x104 = 1U;
	volatile int32_t t0 = 177168;

	t0 = ((x101<(x102|x103))>>x104);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x133 = UINT64_MAX;
	static int8_t x134 = INT8_MAX;
	int8_t x135 = -1;
	uint8_t x136 = 6U;
	static volatile int32_t t1 = -1;

	t1 = ((x133<(x134|x135))>>x136);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x149 = UINT32_MAX;
	uint8_t x150 = 2U;
	static int8_t x151 = INT8_MIN;
	volatile int32_t t2 = 29549639;

	t2 = ((x149<(x150|x151))>>x152);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x193 = UINT32_MAX;
	uint64_t x195 = 3178598454791425LLU;
	static volatile int32_t t3 = 119692568;

	t3 = ((x193<(x194|x195))>>x196);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x221 = 1U;
	static int64_t x222 = INT64_MAX;
	int8_t x223 = -1;
	static uint8_t x224 = 18U;
	static int32_t t4 = -3258865;

	t4 = ((x221<(x222|x223))>>x224);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x229 = 55031LL;
	int16_t x230 = INT16_MIN;
	int8_t x231 = 24;
	volatile uint16_t x232 = 0U;
	volatile int32_t t5 = 6;

	t5 = ((x229<(x230|x231))>>x232);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x241 = INT32_MIN;
	int8_t x242 = -1;
	int8_t x243 = -56;
	int32_t x244 = 14;
	int32_t t6 = 2018896;

	t6 = ((x241<(x242|x243))>>x244);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x277 = 1;
	uint64_t x278 = 17457LLU;
	int8_t x279 = 13;
	static volatile uint16_t x280 = 4U;
	static volatile int32_t t7 = -8099;

	t7 = ((x277<(x278|x279))>>x280);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x381 = 293244268U;
	int64_t x382 = 756841790LL;
	int32_t x383 = -1;

	t8 = ((x381<(x382|x383))>>x384);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x385 = INT64_MIN;
	volatile int16_t x386 = -312;
	int16_t x387 = -1;
	uint8_t x388 = 2U;

	t9 = ((x385<(x386|x387))>>x388);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x393 = INT16_MAX;
	int64_t x394 = INT64_MIN;
	int16_t x396 = 2;

	t10 = ((x393<(x394|x395))>>x396);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t t11 = -1;

	t11 = ((x405<(x406|x407))>>x408);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x442 = INT16_MIN;
	int8_t x443 = -1;
	volatile uint8_t x444 = 14U;
	volatile int32_t t12 = -252;

	t12 = ((x441<(x442|x443))>>x444);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x445 = INT64_MIN;
	int64_t x446 = -1LL;
	volatile uint64_t x447 = 585LLU;
	int8_t x448 = 1;

	t13 = ((x445<(x446|x447))>>x448);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x481 = INT16_MIN;
	int32_t x482 = -29217;
	volatile uint8_t x483 = 3U;
	int32_t t14 = 1;

	t14 = ((x481<(x482|x483))>>x484);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x486 = 1167U;
	volatile int32_t t15 = -98;

	t15 = ((x485<(x486|x487))>>x488);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x493 = -1;
	int64_t x495 = INT64_MAX;
	static int16_t x496 = 1;

	t16 = ((x493<(x494|x495))>>x496);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x526 = 14634439104926404LLU;
	int16_t x527 = INT16_MIN;
	volatile int32_t t17 = 15894629;

	t17 = ((x525<(x526|x527))>>x528);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x570 = -52039231;
	uint8_t x572 = 1U;
	int32_t t18 = -11;

	t18 = ((x569<(x570|x571))>>x572);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x585 = 70LLU;
	int8_t x586 = INT8_MIN;
	int8_t x587 = INT8_MAX;
	int32_t t19 = -52;

	t19 = ((x585<(x586|x587))>>x588);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x593 = UINT8_MAX;
	uint64_t x595 = 27937712657547879LLU;
	int8_t x596 = 1;
	static int32_t t20 = -7452085;

	t20 = ((x593<(x594|x595))>>x596);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x605 = 244356911LLU;
	int64_t x606 = -4332233070448518825LL;

	t21 = ((x605<(x606|x607))>>x608);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x621 = 5310U;
	static int16_t x622 = INT16_MIN;
	int32_t x623 = -1;
	volatile uint16_t x624 = 0U;
	static int32_t t22 = -1617091;

	t22 = ((x621<(x622|x623))>>x624);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x729 = -1;
	volatile uint8_t x730 = 38U;
	int32_t x731 = INT32_MIN;
	volatile int64_t x732 = 1LL;
	int32_t t23 = 93;

	t23 = ((x729<(x730|x731))>>x732);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x759 = 4425816672LL;
	volatile uint64_t x760 = 1LLU;
	volatile int32_t t24 = -134118;

	t24 = ((x757<(x758|x759))>>x760);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x849 = -12;
	volatile int16_t x851 = -8;
	uint16_t x852 = 26U;
	volatile int32_t t25 = -1728;

	t25 = ((x849<(x850|x851))>>x852);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x885 = INT16_MAX;
	int16_t x886 = -1;
	int16_t x887 = 9;
	int8_t x888 = 1;
	volatile int32_t t26 = -33427;

	t26 = ((x885<(x886|x887))>>x888);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x893 = INT32_MIN;
	uint8_t x894 = UINT8_MAX;
	volatile int64_t x895 = INT64_MAX;
	int8_t x896 = 1;
	int32_t t27 = 1997947;

	t27 = ((x893<(x894|x895))>>x896);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x901 = 639U;
	int16_t x902 = INT16_MIN;
	uint16_t x904 = 31U;
	int32_t t28 = -233303186;

	t28 = ((x901<(x902|x903))>>x904);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x909 = INT16_MAX;
	int16_t x910 = 432;
	int64_t x911 = INT64_MAX;
	int8_t x912 = 29;
	volatile int32_t t29 = 14563899;

	t29 = ((x909<(x910|x911))>>x912);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x970 = INT32_MIN;
	int16_t x971 = -3407;
	uint8_t x972 = 1U;
	volatile int32_t t30 = -41489430;

	t30 = ((x969<(x970|x971))>>x972);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int32_t x1022 = INT32_MIN;
	uint16_t x1023 = UINT16_MAX;
	static int32_t t31 = -15969435;

	t31 = ((x1021<(x1022|x1023))>>x1024);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x1078 = 95U;
	int16_t x1079 = INT16_MIN;
	uint16_t x1080 = 2U;
	int32_t t32 = 381;

	t32 = ((x1077<(x1078|x1079))>>x1080);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1081 = UINT64_MAX;
	uint32_t x1082 = UINT32_MAX;
	int32_t x1083 = INT32_MAX;
	volatile int8_t x1084 = 3;

	t33 = ((x1081<(x1082|x1083))>>x1084);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x1113 = INT8_MAX;
	int32_t x1114 = INT32_MAX;
	uint8_t x1116 = 2U;
	int32_t t34 = -23485786;

	t34 = ((x1113<(x1114|x1115))>>x1116);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1125 = INT8_MAX;
	int16_t x1126 = -1;
	volatile uint8_t x1128 = 7U;
	static int32_t t35 = -528936;

	t35 = ((x1125<(x1126|x1127))>>x1128);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x1141 = INT64_MIN;
	uint16_t x1142 = UINT16_MAX;
	static uint32_t x1143 = UINT32_MAX;
	uint8_t x1144 = 1U;

	t36 = ((x1141<(x1142|x1143))>>x1144);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1169 = INT16_MAX;
	int8_t x1171 = -59;
	uint16_t x1172 = 5U;

	t37 = ((x1169<(x1170|x1171))>>x1172);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1241 = INT32_MAX;
	int64_t x1242 = -20259LL;
	int64_t x1243 = -1596630696LL;
	uint8_t x1244 = 23U;

	t38 = ((x1241<(x1242|x1243))>>x1244);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x1249 = -10;
	int64_t x1250 = -776346748866240995LL;
	uint8_t x1252 = 10U;
	int32_t t39 = 1;

	t39 = ((x1249<(x1250|x1251))>>x1252);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x1253 = UINT16_MAX;
	static int8_t x1254 = -2;
	int64_t x1255 = 124396646902421672LL;
	uint8_t x1256 = 7U;
	static int32_t t40 = 21048;

	t40 = ((x1253<(x1254|x1255))>>x1256);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x1317 = -1;
	static int32_t x1318 = INT32_MIN;
	static volatile int32_t t41 = -2;

	t41 = ((x1317<(x1318|x1319))>>x1320);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x1345 = 33;
	uint8_t x1346 = 1U;
	int64_t x1347 = -840644357179935253LL;
	static volatile uint16_t x1348 = 30U;
	volatile int32_t t42 = -9;

	t42 = ((x1345<(x1346|x1347))>>x1348);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x1354 = INT32_MIN;
	int8_t x1355 = -1;
	volatile int8_t x1356 = 25;
	static int32_t t43 = -69993784;

	t43 = ((x1353<(x1354|x1355))>>x1356);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x1357 = INT64_MIN;
	int32_t x1358 = -162769;
	uint16_t x1360 = 1U;
	int32_t t44 = -1;

	t44 = ((x1357<(x1358|x1359))>>x1360);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x1397 = 502460LLU;
	static int16_t x1398 = INT16_MIN;
	volatile uint16_t x1399 = 3430U;
	volatile int32_t t45 = 43;

	t45 = ((x1397<(x1398|x1399))>>x1400);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x1410 = -4203;
	static int8_t x1411 = INT8_MIN;
	static volatile uint8_t x1412 = 3U;
	volatile int32_t t46 = 1353357;

	t46 = ((x1409<(x1410|x1411))>>x1412);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x1489 = 3U;
	volatile int16_t x1490 = INT16_MIN;
	static int16_t x1491 = -1;
	static uint8_t x1492 = 31U;
	volatile int32_t t47 = 273;

	t47 = ((x1489<(x1490|x1491))>>x1492);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x1510 = UINT32_MAX;
	uint32_t x1511 = 438913505U;
	volatile uint32_t x1512 = 15U;
	static int32_t t48 = -3789504;

	t48 = ((x1509<(x1510|x1511))>>x1512);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint64_t x1633 = 28933745615LLU;
	volatile int64_t x1635 = -1LL;
	int32_t t49 = 10;

	t49 = ((x1633<(x1634|x1635))>>x1636);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x1645 = 1933U;
	uint8_t x1646 = UINT8_MAX;

	t50 = ((x1645<(x1646|x1647))>>x1648);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x1681 = INT8_MAX;
	int32_t x1682 = INT32_MAX;
	static int16_t x1683 = INT16_MAX;
	uint16_t x1684 = 1U;
	volatile int32_t t51 = -413411;

	t51 = ((x1681<(x1682|x1683))>>x1684);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x1685 = INT8_MAX;
	uint16_t x1687 = UINT16_MAX;
	int32_t t52 = -47100641;

	t52 = ((x1685<(x1686|x1687))>>x1688);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x1689 = 676195732692LLU;
	int32_t x1691 = INT32_MIN;
	int32_t x1692 = 0;
	static volatile int32_t t53 = 2021681;

	t53 = ((x1689<(x1690|x1691))>>x1692);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x1697 = -152;
	int8_t x1699 = 2;
	volatile int16_t x1700 = 21;
	volatile int32_t t54 = -91;

	t54 = ((x1697<(x1698|x1699))>>x1700);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x1702 = UINT16_MAX;
	int16_t x1703 = INT16_MIN;
	int16_t x1704 = 19;
	int32_t t55 = 35;

	t55 = ((x1701<(x1702|x1703))>>x1704);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x1717 = 49992LLU;
	int32_t x1718 = 11216229;
	volatile int8_t x1719 = INT8_MAX;
	int64_t x1720 = 0LL;
	volatile int32_t t56 = -357;

	t56 = ((x1717<(x1718|x1719))>>x1720);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x1749 = INT64_MIN;
	int32_t x1750 = 877206;
	static volatile uint8_t x1751 = 0U;
	int8_t x1752 = 0;
	static volatile int32_t t57 = -95;

	t57 = ((x1749<(x1750|x1751))>>x1752);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x1753 = INT64_MIN;
	uint16_t x1754 = 242U;
	int32_t x1755 = INT32_MIN;
	static uint16_t x1756 = 16U;
	int32_t t58 = -56587;

	t58 = ((x1753<(x1754|x1755))>>x1756);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x1773 = INT8_MIN;
	static int32_t x1774 = INT32_MIN;
	volatile uint16_t x1776 = 2U;
	int32_t t59 = 15757349;

	t59 = ((x1773<(x1774|x1775))>>x1776);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x1789 = -1;
	int8_t x1791 = INT8_MIN;
	uint8_t x1792 = 0U;
	int32_t t60 = 1;

	t60 = ((x1789<(x1790|x1791))>>x1792);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x1806 = 4U;
	static uint16_t x1807 = 9754U;
	uint64_t x1808 = 5LLU;
	static volatile int32_t t61 = -26452475;

	t61 = ((x1805<(x1806|x1807))>>x1808);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x1817 = INT32_MAX;
	int64_t x1818 = -1LL;
	int8_t x1819 = INT8_MIN;
	int16_t x1820 = 12;
	int32_t t62 = 85915394;

	t62 = ((x1817<(x1818|x1819))>>x1820);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x1841 = 407511682009010LLU;
	int16_t x1842 = INT16_MIN;
	uint8_t x1844 = 0U;
	static int32_t t63 = -24754;

	t63 = ((x1841<(x1842|x1843))>>x1844);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x1905 = UINT32_MAX;
	uint8_t x1906 = UINT8_MAX;
	volatile int8_t x1907 = INT8_MAX;

	t64 = ((x1905<(x1906|x1907))>>x1908);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x1934 = INT32_MAX;
	int64_t x1935 = -1LL;
	uint16_t x1936 = 8U;
	volatile int32_t t65 = 18729951;

	t65 = ((x1933<(x1934|x1935))>>x1936);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x1954 = UINT8_MAX;
	int16_t x1955 = INT16_MAX;
	volatile uint8_t x1956 = 10U;

	t66 = ((x1953<(x1954|x1955))>>x1956);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x2017 = 20033U;
	int16_t x2019 = -658;
	static volatile int8_t x2020 = 1;
	static volatile int32_t t67 = 107538870;

	t67 = ((x2017<(x2018|x2019))>>x2020);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x2062 = 9U;
	uint64_t x2063 = 2540034LLU;
	int32_t t68 = -1072;

	t68 = ((x2061<(x2062|x2063))>>x2064);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x2070 = UINT16_MAX;
	static volatile uint64_t x2071 = UINT64_MAX;
	volatile uint16_t x2072 = 2U;
	static int32_t t69 = -55752317;

	t69 = ((x2069<(x2070|x2071))>>x2072);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int32_t x2117 = INT32_MIN;
	int16_t x2118 = -1;
	uint8_t x2119 = 76U;
	int32_t x2120 = 0;

	t70 = ((x2117<(x2118|x2119))>>x2120);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x2125 = 88U;
	volatile int8_t x2126 = 0;
	uint64_t x2127 = 12452LLU;
	uint8_t x2128 = 13U;

	t71 = ((x2125<(x2126|x2127))>>x2128);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x2130 = -1;
	uint16_t x2131 = 1U;
	static int8_t x2132 = 6;

	t72 = ((x2129<(x2130|x2131))>>x2132);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x2170 = -1;
	static int32_t x2171 = INT32_MIN;
	int16_t x2172 = 3;

	t73 = ((x2169<(x2170|x2171))>>x2172);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x2189 = INT64_MAX;
	static uint8_t x2191 = 3U;
	uint16_t x2192 = 13U;
	int32_t t74 = 57985;

	t74 = ((x2189<(x2190|x2191))>>x2192);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x2198 = INT8_MAX;
	static int32_t x2199 = INT32_MIN;
	volatile int32_t x2200 = 5;
	volatile int32_t t75 = -1019;

	t75 = ((x2197<(x2198|x2199))>>x2200);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x2205 = INT8_MAX;
	int8_t x2206 = INT8_MIN;
	volatile int32_t x2207 = INT32_MIN;
	int8_t x2208 = 28;
	volatile int32_t t76 = 22068288;

	t76 = ((x2205<(x2206|x2207))>>x2208);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x2217 = 0;
	int8_t x2218 = INT8_MAX;
	uint64_t x2219 = 37333796665780762LLU;
	volatile int8_t x2220 = 17;
	static volatile int32_t t77 = -3;

	t77 = ((x2217<(x2218|x2219))>>x2220);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x2225 = INT64_MIN;
	int8_t x2226 = INT8_MAX;
	volatile uint64_t x2227 = UINT64_MAX;
	int16_t x2228 = 1;
	volatile int32_t t78 = 871258;

	t78 = ((x2225<(x2226|x2227))>>x2228);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x2237 = INT8_MIN;
	uint32_t x2238 = 1097357524U;
	static int16_t x2239 = INT16_MIN;
	static int8_t x2240 = 1;
	int32_t t79 = -752014;

	t79 = ((x2237<(x2238|x2239))>>x2240);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x2285 = INT64_MAX;
	int32_t x2287 = -11;
	static volatile uint8_t x2288 = 12U;
	int32_t t80 = -4;

	t80 = ((x2285<(x2286|x2287))>>x2288);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x2289 = -1;
	static int32_t x2290 = -1;
	int64_t x2291 = INT64_MIN;
	static volatile int8_t x2292 = 0;
	int32_t t81 = 385198;

	t81 = ((x2289<(x2290|x2291))>>x2292);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x2309 = INT16_MIN;
	static int16_t x2310 = INT16_MAX;
	uint32_t x2311 = 786588355U;
	static uint8_t x2312 = 1U;
	int32_t t82 = 30836;

	t82 = ((x2309<(x2310|x2311))>>x2312);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x2322 = UINT16_MAX;
	static int32_t x2323 = -1;
	volatile int16_t x2324 = 5;

	t83 = ((x2321<(x2322|x2323))>>x2324);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x2329 = INT32_MIN;
	int8_t x2330 = INT8_MAX;
	static uint16_t x2331 = UINT16_MAX;
	static volatile int32_t t84 = -8;

	t84 = ((x2329<(x2330|x2331))>>x2332);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x2341 = INT64_MIN;
	int8_t x2342 = INT8_MIN;
	volatile uint8_t x2344 = 3U;
	int32_t t85 = -1889;

	t85 = ((x2341<(x2342|x2343))>>x2344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x2345 = INT8_MIN;
	int32_t x2346 = -1859497;
	uint8_t x2348 = 2U;
	int32_t t86 = -91349279;

	t86 = ((x2345<(x2346|x2347))>>x2348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x2353 = 5447U;
	static int8_t x2354 = -4;
	uint64_t x2355 = 18LLU;
	uint8_t x2356 = 0U;
	volatile int32_t t87 = -131;

	t87 = ((x2353<(x2354|x2355))>>x2356);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x2374 = INT64_MAX;
	int32_t x2376 = 3;
	static int32_t t88 = -4335239;

	t88 = ((x2373<(x2374|x2375))>>x2376);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x2389 = 14;
	static uint16_t x2390 = 15U;
	static int64_t x2391 = INT64_MIN;
	uint8_t x2392 = 0U;

	t89 = ((x2389<(x2390|x2391))>>x2392);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x2393 = UINT32_MAX;
	int8_t x2396 = 1;
	static int32_t t90 = -51262;

	t90 = ((x2393<(x2394|x2395))>>x2396);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x2397 = 29461U;
	uint32_t x2398 = 81414U;
	volatile uint64_t x2399 = UINT64_MAX;
	uint16_t x2400 = 31U;
	volatile int32_t t91 = 1073706394;

	t91 = ((x2397<(x2398|x2399))>>x2400);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x2401 = 2U;
	int32_t x2402 = INT32_MIN;
	static int32_t x2403 = INT32_MAX;
	volatile uint16_t x2404 = 3U;

	t92 = ((x2401<(x2402|x2403))>>x2404);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x2417 = 122498352807LLU;
	int32_t x2418 = INT32_MIN;
	int64_t x2419 = INT64_MIN;
	uint8_t x2420 = 0U;
	int32_t t93 = -26092;

	t93 = ((x2417<(x2418|x2419))>>x2420);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x2454 = -29;
	int64_t x2455 = INT64_MIN;
	uint64_t x2456 = 4LLU;
	static volatile int32_t t94 = 2379762;

	t94 = ((x2453<(x2454|x2455))>>x2456);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x2501 = INT16_MAX;
	int64_t x2502 = -1LL;
	int16_t x2503 = INT16_MIN;
	int8_t x2504 = 6;
	int32_t t95 = -524445985;

	t95 = ((x2501<(x2502|x2503))>>x2504);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x2527 = 14043U;
	uint8_t x2528 = 9U;
	static volatile int32_t t96 = 28;

	t96 = ((x2525<(x2526|x2527))>>x2528);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x2625 = 3726542844959950405LL;
	int32_t x2626 = -2727;
	static int8_t x2627 = -1;
	volatile int16_t x2628 = 1;
	int32_t t97 = -38499;

	t97 = ((x2625<(x2626|x2627))>>x2628);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x2641 = UINT32_MAX;
	static volatile int8_t x2642 = -1;
	int8_t x2643 = INT8_MAX;
	uint8_t x2644 = 14U;
	int32_t t98 = 0;

	t98 = ((x2641<(x2642|x2643))>>x2644);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x2671 = 1LLU;
	uint8_t x2672 = 7U;
	int32_t t99 = -152;

	t99 = ((x2669<(x2670|x2671))>>x2672);

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

