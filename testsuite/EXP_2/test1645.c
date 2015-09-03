#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t x3 = UINT32_MAX;
volatile int32_t t0 = -1328270;
int32_t t2 = 101;
volatile int32_t x219 = -1;
static volatile int32_t t5 = 10227;
int32_t x254 = 32718;
static uint16_t x260 = 2U;
uint32_t x290 = UINT32_MAX;
int16_t x306 = INT16_MIN;
int32_t t10 = 1203007;
uint32_t x384 = 1U;
volatile int32_t t13 = 1;
uint8_t x472 = 10U;
uint8_t x594 = UINT8_MAX;
static volatile int32_t t18 = 30823767;
volatile int32_t t19 = -7;
static volatile uint64_t x689 = 4218092485LLU;
volatile int32_t t20 = -181002;
volatile int32_t x749 = INT32_MAX;
volatile int16_t x750 = INT16_MIN;
uint32_t x820 = 0U;
int8_t x849 = INT8_MAX;
uint32_t x850 = 676949862U;
volatile int32_t t26 = 5231;
static int8_t x877 = INT8_MIN;
uint64_t x917 = 37LLU;
int32_t t30 = 0;
volatile int8_t x935 = INT8_MIN;
uint64_t x941 = UINT64_MAX;
int16_t x1019 = INT16_MIN;
static int16_t x1082 = INT16_MAX;
int32_t t35 = -4;
int32_t t36 = -3;
int64_t x1110 = INT64_MAX;
static uint64_t x1149 = 0LLU;
int8_t x1208 = 6;
static int64_t x1331 = -26763734787LL;
volatile uint16_t x1388 = 3U;
volatile uint32_t x1406 = 6U;
static volatile uint8_t x1408 = 25U;
int32_t t43 = 20;
volatile int64_t x1417 = INT64_MIN;
int32_t x1429 = -1;
volatile int32_t t46 = -956887818;
static volatile int64_t x1481 = -1LL;
int64_t x1483 = 496725524LL;
int16_t x1489 = INT16_MIN;
int32_t t48 = 97;
int32_t x1502 = INT32_MAX;
int16_t x1542 = 4;
uint16_t x1544 = 1U;
int32_t t50 = -7468;
int16_t x1629 = INT16_MIN;
int8_t x1630 = INT8_MIN;
volatile uint8_t x1632 = 3U;
static int64_t x1634 = -3205843646095131065LL;
uint64_t x1655 = 49355397551LLU;
static uint64_t x1659 = 7LLU;
int32_t t56 = 7699572;
static int64_t x1718 = -31707LL;
volatile uint8_t x1720 = 7U;
uint16_t x1725 = 12189U;
int16_t x1726 = INT16_MIN;
volatile int8_t x1738 = INT8_MIN;
volatile int32_t t60 = -571144294;
int64_t x1793 = 89846523511054630LL;
int64_t x1794 = 9335736LL;
static uint32_t x1795 = 1011847838U;
int16_t x1825 = INT16_MAX;
int32_t t65 = 13588;
static uint8_t x1836 = 19U;
int64_t x1873 = INT64_MIN;
int16_t x1935 = INT16_MIN;
volatile uint8_t x1953 = UINT8_MAX;
static volatile int64_t x1954 = INT64_MIN;
volatile int16_t x1955 = INT16_MAX;
int64_t x2027 = 0LL;
volatile int16_t x2081 = 0;
volatile uint64_t x2082 = 2399737LLU;
int32_t x2084 = 1;
volatile int32_t t78 = 1545;
uint16_t x2156 = 6U;
volatile int16_t x2163 = INT16_MIN;
volatile uint8_t x2164 = 25U;
int8_t x2188 = 1;
static volatile int32_t t82 = -339113929;
int8_t x2219 = 1;
uint16_t x2220 = 5U;
uint16_t x2253 = 29U;
int8_t x2255 = -1;
volatile uint32_t x2263 = 1569U;
uint8_t x2412 = 16U;
volatile int32_t t90 = 83742;
static int16_t x2425 = 0;
uint8_t x2426 = 45U;
int16_t x2427 = 63;
int32_t t92 = 0;
volatile int64_t x2577 = INT64_MIN;
uint8_t x2579 = 35U;
int8_t x2587 = INT8_MIN;
volatile int16_t x2675 = 26;
volatile uint16_t x2700 = 1U;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int16_t x2 = -1;
	uint16_t x4 = 0U;

	t0 = ((x1<=(x2<=x3))>>x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x37 = INT64_MIN;
	uint64_t x38 = UINT64_MAX;
	int32_t x39 = 410651;
	int8_t x40 = 28;
	int32_t t1 = 0;

	t1 = ((x37<=(x38<=x39))>>x40);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x133 = UINT64_MAX;
	int16_t x134 = INT16_MIN;
	uint32_t x135 = 322U;
	int16_t x136 = 1;

	t2 = ((x133<=(x134<=x135))>>x136);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x169 = INT32_MAX;
	int64_t x170 = -1LL;
	static volatile int16_t x171 = INT16_MIN;
	int8_t x172 = 3;
	volatile int32_t t3 = -84119;

	t3 = ((x169<=(x170<=x171))>>x172);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x209 = 6306;
	uint16_t x210 = UINT16_MAX;
	volatile int8_t x211 = -1;
	static int8_t x212 = 7;
	volatile int32_t t4 = 1;

	t4 = ((x209<=(x210<=x211))>>x212);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x217 = INT64_MAX;
	uint32_t x218 = 4153U;
	volatile uint8_t x220 = 3U;

	t5 = ((x217<=(x218<=x219))>>x220);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x253 = -6286;
	int64_t x255 = INT64_MIN;
	int8_t x256 = 18;
	volatile int32_t t6 = 2887;

	t6 = ((x253<=(x254<=x255))>>x256);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x257 = INT16_MAX;
	uint8_t x258 = UINT8_MAX;
	int8_t x259 = INT8_MIN;
	volatile int32_t t7 = -10231010;

	t7 = ((x257<=(x258<=x259))>>x260);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x285 = -1;
	int8_t x286 = 7;
	uint32_t x287 = 26U;
	volatile uint8_t x288 = 0U;
	int32_t t8 = -1;

	t8 = ((x285<=(x286<=x287))>>x288);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x289 = INT32_MIN;
	int32_t x291 = 4852;
	volatile int8_t x292 = 30;
	static int32_t t9 = -390351;

	t9 = ((x289<=(x290<=x291))>>x292);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x305 = 1LL;
	int8_t x307 = INT8_MIN;
	int8_t x308 = 6;

	t10 = ((x305<=(x306<=x307))>>x308);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x317 = 610803U;
	volatile int64_t x318 = INT64_MIN;
	int8_t x319 = -1;
	static uint32_t x320 = 1U;
	static int32_t t11 = 622155794;

	t11 = ((x317<=(x318<=x319))>>x320);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x381 = -1LL;
	volatile uint8_t x382 = 1U;
	volatile uint64_t x383 = 26853LLU;
	volatile int32_t t12 = 202439;

	t12 = ((x381<=(x382<=x383))>>x384);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x413 = -136864;
	int16_t x414 = -139;
	int64_t x415 = INT64_MIN;
	int64_t x416 = 1LL;

	t13 = ((x413<=(x414<=x415))>>x416);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x417 = INT16_MIN;
	static int32_t x418 = -10787098;
	int16_t x419 = INT16_MIN;
	int8_t x420 = 15;
	static volatile int32_t t14 = 608253659;

	t14 = ((x417<=(x418<=x419))>>x420);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x445 = 0U;
	int32_t x446 = INT32_MIN;
	volatile int8_t x447 = -5;
	static volatile uint8_t x448 = 11U;
	volatile int32_t t15 = 33640030;

	t15 = ((x445<=(x446<=x447))>>x448);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x469 = -1;
	uint8_t x470 = 0U;
	int32_t x471 = -7;
	int32_t t16 = -13359;

	t16 = ((x469<=(x470<=x471))>>x472);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x497 = -1LL;
	int8_t x498 = INT8_MAX;
	int32_t x499 = 3501;
	uint8_t x500 = 15U;
	volatile int32_t t17 = 49;

	t17 = ((x497<=(x498<=x499))>>x500);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x593 = -5;
	static int64_t x595 = -1LL;
	uint8_t x596 = 1U;

	t18 = ((x593<=(x594<=x595))>>x596);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x685 = 12391LLU;
	uint32_t x686 = UINT32_MAX;
	uint16_t x687 = 0U;
	uint32_t x688 = 0U;

	t19 = ((x685<=(x686<=x687))>>x688);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x690 = UINT8_MAX;
	int64_t x691 = INT64_MAX;
	uint8_t x692 = 3U;

	t20 = ((x689<=(x690<=x691))>>x692);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x751 = INT16_MIN;
	static uint8_t x752 = 5U;
	int32_t t21 = -65869999;

	t21 = ((x749<=(x750<=x751))>>x752);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x805 = 48;
	volatile int8_t x806 = -2;
	static uint16_t x807 = 1U;
	int32_t x808 = 0;
	int32_t t22 = 314672674;

	t22 = ((x805<=(x806<=x807))>>x808);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x817 = 0;
	int16_t x818 = -55;
	static int8_t x819 = -1;
	volatile int32_t t23 = 6354;

	t23 = ((x817<=(x818<=x819))>>x820);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint8_t x845 = 1U;
	uint16_t x846 = UINT16_MAX;
	uint64_t x847 = UINT64_MAX;
	uint32_t x848 = 0U;
	int32_t t24 = 0;

	t24 = ((x845<=(x846<=x847))>>x848);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x851 = INT8_MIN;
	volatile uint16_t x852 = 6U;
	int32_t t25 = 188742362;

	t25 = ((x849<=(x850<=x851))>>x852);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x853 = INT8_MIN;
	volatile int64_t x854 = INT64_MAX;
	volatile int16_t x855 = INT16_MAX;
	uint8_t x856 = 1U;

	t26 = ((x853<=(x854<=x855))>>x856);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x873 = UINT32_MAX;
	int8_t x874 = INT8_MAX;
	int8_t x875 = INT8_MIN;
	uint8_t x876 = 13U;
	volatile int32_t t27 = 382782250;

	t27 = ((x873<=(x874<=x875))>>x876);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x878 = 461999;
	int64_t x879 = INT64_MIN;
	int32_t x880 = 3;
	int32_t t28 = -44;

	t28 = ((x877<=(x878<=x879))>>x880);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x881 = 0U;
	uint32_t x882 = 2058349407U;
	static int16_t x883 = 0;
	volatile int8_t x884 = 0;
	int32_t t29 = -2;

	t29 = ((x881<=(x882<=x883))>>x884);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x918 = 2U;
	int64_t x919 = INT64_MIN;
	uint8_t x920 = 1U;

	t30 = ((x917<=(x918<=x919))>>x920);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x933 = INT64_MIN;
	int32_t x934 = 224651995;
	uint8_t x936 = 20U;
	volatile int32_t t31 = -20810;

	t31 = ((x933<=(x934<=x935))>>x936);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x942 = INT32_MAX;
	int8_t x943 = 0;
	int8_t x944 = 3;
	volatile int32_t t32 = 17;

	t32 = ((x941<=(x942<=x943))>>x944);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x1001 = -5;
	int8_t x1002 = INT8_MIN;
	int16_t x1003 = -85;
	uint32_t x1004 = 20U;
	int32_t t33 = -2184395;

	t33 = ((x1001<=(x1002<=x1003))>>x1004);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1017 = -4870944LL;
	int32_t x1018 = INT32_MAX;
	volatile int16_t x1020 = 0;
	static volatile int32_t t34 = -24432;

	t34 = ((x1017<=(x1018<=x1019))>>x1020);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1081 = -1;
	int64_t x1083 = INT64_MIN;
	static uint32_t x1084 = 2U;

	t35 = ((x1081<=(x1082<=x1083))>>x1084);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1093 = -62;
	volatile int64_t x1094 = INT64_MAX;
	int16_t x1095 = -1;
	int16_t x1096 = 3;

	t36 = ((x1093<=(x1094<=x1095))>>x1096);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x1109 = 13767339941687419LLU;
	uint8_t x1111 = UINT8_MAX;
	uint16_t x1112 = 6U;
	volatile int32_t t37 = 9120;

	t37 = ((x1109<=(x1110<=x1111))>>x1112);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x1150 = INT8_MIN;
	int8_t x1151 = INT8_MAX;
	uint8_t x1152 = 3U;
	int32_t t38 = -331379872;

	t38 = ((x1149<=(x1150<=x1151))>>x1152);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x1205 = 29;
	volatile int32_t x1206 = -321731439;
	static uint64_t x1207 = 2350802796062LLU;
	int32_t t39 = -95;

	t39 = ((x1205<=(x1206<=x1207))>>x1208);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x1273 = INT32_MIN;
	int8_t x1274 = INT8_MIN;
	static volatile int8_t x1275 = INT8_MIN;
	volatile uint16_t x1276 = 2U;
	static int32_t t40 = 3993;

	t40 = ((x1273<=(x1274<=x1275))>>x1276);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x1329 = INT8_MIN;
	volatile uint8_t x1330 = UINT8_MAX;
	volatile int8_t x1332 = 23;
	static volatile int32_t t41 = 241221;

	t41 = ((x1329<=(x1330<=x1331))>>x1332);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x1385 = INT16_MIN;
	static int64_t x1386 = INT64_MIN;
	static volatile int32_t x1387 = INT32_MIN;
	static int32_t t42 = 81;

	t42 = ((x1385<=(x1386<=x1387))>>x1388);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x1405 = 2LLU;
	int16_t x1407 = INT16_MIN;

	t43 = ((x1405<=(x1406<=x1407))>>x1408);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x1409 = INT16_MIN;
	int32_t x1410 = INT32_MIN;
	int8_t x1411 = INT8_MAX;
	int8_t x1412 = 0;
	int32_t t44 = -18;

	t44 = ((x1409<=(x1410<=x1411))>>x1412);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x1418 = 83LLU;
	int8_t x1419 = -10;
	uint16_t x1420 = 4U;
	volatile int32_t t45 = -6;

	t45 = ((x1417<=(x1418<=x1419))>>x1420);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x1430 = INT16_MIN;
	uint64_t x1431 = UINT64_MAX;
	uint16_t x1432 = 3U;

	t46 = ((x1429<=(x1430<=x1431))>>x1432);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x1482 = INT64_MAX;
	uint16_t x1484 = 17U;
	int32_t t47 = -1;

	t47 = ((x1481<=(x1482<=x1483))>>x1484);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x1490 = -1;
	static int64_t x1491 = -1LL;
	uint8_t x1492 = 1U;

	t48 = ((x1489<=(x1490<=x1491))>>x1492);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x1501 = INT8_MIN;
	int8_t x1503 = INT8_MIN;
	uint8_t x1504 = 7U;
	volatile int32_t t49 = -1041;

	t49 = ((x1501<=(x1502<=x1503))>>x1504);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint32_t x1541 = 194U;
	int16_t x1543 = INT16_MIN;

	t50 = ((x1541<=(x1542<=x1543))>>x1544);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x1597 = 15550U;
	static int8_t x1598 = -1;
	int32_t x1599 = 63834;
	volatile uint16_t x1600 = 1U;
	volatile int32_t t51 = 14442;

	t51 = ((x1597<=(x1598<=x1599))>>x1600);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x1631 = INT32_MIN;
	int32_t t52 = -1034356473;

	t52 = ((x1629<=(x1630<=x1631))>>x1632);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x1633 = 192U;
	volatile int8_t x1635 = -1;
	uint16_t x1636 = 7U;
	static volatile int32_t t53 = -243;

	t53 = ((x1633<=(x1634<=x1635))>>x1636);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x1641 = INT16_MIN;
	int32_t x1642 = 34093;
	volatile uint16_t x1643 = 1U;
	int64_t x1644 = 8LL;
	int32_t t54 = 882521;

	t54 = ((x1641<=(x1642<=x1643))>>x1644);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x1653 = 30466439LLU;
	int32_t x1654 = INT32_MIN;
	volatile uint8_t x1656 = 1U;
	volatile int32_t t55 = -550;

	t55 = ((x1653<=(x1654<=x1655))>>x1656);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x1657 = -29689248;
	static int32_t x1658 = INT32_MIN;
	uint16_t x1660 = 1U;

	t56 = ((x1657<=(x1658<=x1659))>>x1660);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x1705 = -14464;
	volatile uint16_t x1706 = UINT16_MAX;
	int8_t x1707 = INT8_MAX;
	int8_t x1708 = 2;
	int32_t t57 = -754113;

	t57 = ((x1705<=(x1706<=x1707))>>x1708);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x1717 = UINT32_MAX;
	static volatile int8_t x1719 = 5;
	int32_t t58 = 3199;

	t58 = ((x1717<=(x1718<=x1719))>>x1720);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x1727 = -1;
	uint8_t x1728 = 6U;
	volatile int32_t t59 = -897029126;

	t59 = ((x1725<=(x1726<=x1727))>>x1728);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x1737 = 170956U;
	static int16_t x1739 = INT16_MAX;
	static int8_t x1740 = 5;

	t60 = ((x1737<=(x1738<=x1739))>>x1740);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x1753 = INT64_MIN;
	volatile uint8_t x1754 = 27U;
	int8_t x1755 = INT8_MIN;
	uint16_t x1756 = 7U;
	int32_t t61 = 236;

	t61 = ((x1753<=(x1754<=x1755))>>x1756);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x1796 = 1U;
	volatile int32_t t62 = -1154;

	t62 = ((x1793<=(x1794<=x1795))>>x1796);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x1801 = -1;
	int16_t x1802 = INT16_MAX;
	volatile int16_t x1803 = INT16_MIN;
	volatile int64_t x1804 = 0LL;
	int32_t t63 = 223302;

	t63 = ((x1801<=(x1802<=x1803))>>x1804);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x1826 = 0U;
	static uint8_t x1827 = 14U;
	int8_t x1828 = 1;
	int32_t t64 = -20;

	t64 = ((x1825<=(x1826<=x1827))>>x1828);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x1829 = 18368673LLU;
	volatile int32_t x1830 = INT32_MIN;
	int64_t x1831 = 3028949943501255943LL;
	int64_t x1832 = 1LL;

	t65 = ((x1829<=(x1830<=x1831))>>x1832);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x1833 = 1132;
	static int16_t x1834 = 133;
	static volatile int32_t x1835 = 190;
	static int32_t t66 = 1000059809;

	t66 = ((x1833<=(x1834<=x1835))>>x1836);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x1874 = 103U;
	uint32_t x1875 = UINT32_MAX;
	uint8_t x1876 = 2U;
	int32_t t67 = -458177;

	t67 = ((x1873<=(x1874<=x1875))>>x1876);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x1877 = 9LLU;
	int32_t x1878 = -1;
	int32_t x1879 = 8482;
	static uint16_t x1880 = 21U;
	int32_t t68 = -3253049;

	t68 = ((x1877<=(x1878<=x1879))>>x1880);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint64_t x1905 = 841071382875340LLU;
	uint16_t x1906 = 151U;
	int8_t x1907 = INT8_MAX;
	int16_t x1908 = 1;
	int32_t t69 = 211;

	t69 = ((x1905<=(x1906<=x1907))>>x1908);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x1913 = UINT8_MAX;
	int64_t x1914 = -4636LL;
	uint32_t x1915 = UINT32_MAX;
	uint8_t x1916 = 1U;
	volatile int32_t t70 = 82358190;

	t70 = ((x1913<=(x1914<=x1915))>>x1916);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x1933 = 0U;
	uint64_t x1934 = 670LLU;
	volatile uint8_t x1936 = 12U;
	volatile int32_t t71 = -114017;

	t71 = ((x1933<=(x1934<=x1935))>>x1936);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x1941 = INT8_MAX;
	int32_t x1942 = -1;
	int32_t x1943 = 0;
	volatile int16_t x1944 = 5;
	volatile int32_t t72 = -17;

	t72 = ((x1941<=(x1942<=x1943))>>x1944);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x1956 = 1LL;
	volatile int32_t t73 = 220461;

	t73 = ((x1953<=(x1954<=x1955))>>x1956);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint16_t x1993 = 25U;
	static uint64_t x1994 = 817LLU;
	uint64_t x1995 = 103053LLU;
	uint64_t x1996 = 0LLU;
	int32_t t74 = -146268;

	t74 = ((x1993<=(x1994<=x1995))>>x1996);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x2013 = UINT32_MAX;
	uint64_t x2014 = 24966832548LLU;
	static volatile int64_t x2015 = 6LL;
	int32_t x2016 = 1;
	volatile int32_t t75 = -330782;

	t75 = ((x2013<=(x2014<=x2015))>>x2016);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x2025 = -1LL;
	int8_t x2026 = INT8_MIN;
	int8_t x2028 = 1;
	int32_t t76 = 1;

	t76 = ((x2025<=(x2026<=x2027))>>x2028);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x2033 = 26U;
	volatile uint8_t x2034 = 44U;
	uint16_t x2035 = UINT16_MAX;
	static uint8_t x2036 = 2U;
	static int32_t t77 = 38896;

	t77 = ((x2033<=(x2034<=x2035))>>x2036);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x2083 = -358780595178950LL;

	t78 = ((x2081<=(x2082<=x2083))>>x2084);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x2097 = INT16_MIN;
	int64_t x2098 = -1LL;
	volatile int32_t x2099 = 1;
	uint32_t x2100 = 12U;
	static int32_t t79 = -48792576;

	t79 = ((x2097<=(x2098<=x2099))>>x2100);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x2153 = 51;
	volatile int8_t x2154 = 1;
	int8_t x2155 = INT8_MAX;
	int32_t t80 = 513023;

	t80 = ((x2153<=(x2154<=x2155))>>x2156);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x2161 = 473U;
	volatile int8_t x2162 = INT8_MAX;
	volatile int32_t t81 = 0;

	t81 = ((x2161<=(x2162<=x2163))>>x2164);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x2185 = INT32_MIN;
	int32_t x2186 = -10798686;
	int32_t x2187 = -16304;

	t82 = ((x2185<=(x2186<=x2187))>>x2188);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x2197 = 1U;
	int32_t x2198 = -1016;
	uint32_t x2199 = UINT32_MAX;
	static int16_t x2200 = 30;
	static volatile int32_t t83 = -632293;

	t83 = ((x2197<=(x2198<=x2199))>>x2200);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x2217 = 0U;
	volatile uint64_t x2218 = 407923669LLU;
	int32_t t84 = 131479601;

	t84 = ((x2217<=(x2218<=x2219))>>x2220);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x2254 = 336U;
	int16_t x2256 = 15;
	static int32_t t85 = -1288260;

	t85 = ((x2253<=(x2254<=x2255))>>x2256);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x2261 = 8U;
	static uint8_t x2262 = 79U;
	volatile uint32_t x2264 = 8U;
	volatile int32_t t86 = 654064658;

	t86 = ((x2261<=(x2262<=x2263))>>x2264);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x2329 = INT32_MIN;
	static uint64_t x2330 = 2LLU;
	int64_t x2331 = INT64_MIN;
	volatile int8_t x2332 = 2;
	volatile int32_t t87 = -138;

	t87 = ((x2329<=(x2330<=x2331))>>x2332);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x2345 = 2088266U;
	int64_t x2346 = -7097266927897117LL;
	uint32_t x2347 = 1548U;
	uint8_t x2348 = 7U;
	int32_t t88 = -49627929;

	t88 = ((x2345<=(x2346<=x2347))>>x2348);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x2365 = INT8_MAX;
	uint64_t x2366 = 3711373656388079LLU;
	int32_t x2367 = 7910;
	uint16_t x2368 = 13U;
	volatile int32_t t89 = 9532;

	t89 = ((x2365<=(x2366<=x2367))>>x2368);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x2409 = 14855454700LLU;
	static int32_t x2410 = -1;
	volatile int64_t x2411 = -1LL;

	t90 = ((x2409<=(x2410<=x2411))>>x2412);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x2428 = 0U;
	static int32_t t91 = -1718;

	t91 = ((x2425<=(x2426<=x2427))>>x2428);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x2441 = INT32_MIN;
	static int64_t x2442 = INT64_MIN;
	static int16_t x2443 = -5;
	uint64_t x2444 = 23LLU;

	t92 = ((x2441<=(x2442<=x2443))>>x2444);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x2525 = UINT8_MAX;
	static int32_t x2526 = INT32_MIN;
	int8_t x2527 = -1;
	volatile uint8_t x2528 = 2U;
	int32_t t93 = -143;

	t93 = ((x2525<=(x2526<=x2527))>>x2528);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x2578 = INT16_MIN;
	static uint32_t x2580 = 17U;
	volatile int32_t t94 = 33337346;

	t94 = ((x2577<=(x2578<=x2579))>>x2580);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x2585 = UINT32_MAX;
	uint8_t x2586 = 0U;
	volatile uint8_t x2588 = 0U;
	volatile int32_t t95 = 1;

	t95 = ((x2585<=(x2586<=x2587))>>x2588);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x2673 = -25835076;
	int8_t x2674 = INT8_MIN;
	static uint16_t x2676 = 22U;
	volatile int32_t t96 = -832663797;

	t96 = ((x2673<=(x2674<=x2675))>>x2676);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x2677 = 81U;
	int8_t x2678 = INT8_MIN;
	int64_t x2679 = -27360740LL;
	volatile int16_t x2680 = 0;
	int32_t t97 = -1349752;

	t97 = ((x2677<=(x2678<=x2679))>>x2680);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x2697 = INT16_MIN;
	int16_t x2698 = INT16_MIN;
	static uint32_t x2699 = 178535U;
	static volatile int32_t t98 = -20;

	t98 = ((x2697<=(x2698<=x2699))>>x2700);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x2729 = 21785U;
	static volatile int8_t x2730 = -1;
	int16_t x2731 = INT16_MIN;
	int64_t x2732 = 12LL;
	volatile int32_t t99 = 646;

	t99 = ((x2729<=(x2730<=x2731))>>x2732);

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

