#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x27 = -1;
int64_t x47 = INT64_MAX;
int32_t t3 = -4039;
int8_t x81 = INT8_MIN;
volatile int32_t t4 = 45;
int8_t x120 = 1;
uint16_t x142 = 22033U;
volatile int32_t x179 = INT32_MIN;
uint16_t x180 = 2U;
volatile int32_t t9 = -2169;
volatile int16_t x266 = INT16_MIN;
volatile int32_t t10 = 3552;
int8_t x362 = 0;
volatile uint8_t x364 = 0U;
static uint8_t x397 = UINT8_MAX;
int8_t x398 = INT8_MIN;
int8_t x442 = -1;
uint8_t x444 = 11U;
volatile int32_t t16 = -3;
int64_t x510 = -136754500909661LL;
uint64_t x511 = 29819571090514LLU;
volatile int32_t t17 = 0;
int32_t x577 = INT32_MAX;
uint8_t x627 = 4U;
int32_t t20 = 1;
int64_t x643 = -1LL;
uint16_t x854 = 22990U;
uint16_t x1007 = 106U;
static volatile int32_t t30 = -53407028;
volatile int64_t x1045 = INT64_MIN;
uint8_t x1076 = 3U;
int16_t x1094 = INT16_MAX;
uint8_t x1095 = UINT8_MAX;
volatile int64_t x1138 = -1LL;
static int64_t x1275 = 165878LL;
int32_t x1278 = 42530916;
int16_t x1280 = 6;
static int8_t x1310 = INT8_MAX;
volatile int32_t t39 = -49;
int8_t x1391 = INT8_MIN;
volatile int32_t t43 = -215441299;
int8_t x1440 = 3;
int32_t t44 = -3655173;
uint64_t x1446 = 92237LLU;
uint16_t x1448 = 1U;
volatile int64_t x1523 = INT64_MIN;
int8_t x1524 = 0;
int16_t x1525 = INT16_MIN;
uint8_t x1569 = 30U;
int8_t x1570 = INT8_MIN;
uint64_t x1639 = 8397LLU;
volatile int32_t t52 = 24079478;
uint16_t x1642 = 5817U;
static volatile int32_t t54 = 1;
volatile int32_t x1685 = INT32_MIN;
int32_t t55 = 29074365;
uint64_t x1734 = 36243197830LLU;
int64_t x1777 = INT64_MIN;
int32_t t57 = 78625147;
int32_t x1802 = INT32_MIN;
volatile uint16_t x1889 = 1U;
int16_t x1921 = INT16_MIN;
int32_t x1982 = 903;
int32_t t61 = 11147;
static int32_t x2001 = -1;
uint8_t x2012 = 4U;
static int8_t x2109 = -1;
int32_t x2110 = -1;
int32_t t65 = 27910;
int16_t x2146 = -1;
static volatile int64_t x2150 = -1LL;
static uint64_t x2171 = 51973907487LLU;
int16_t x2172 = 2;
int32_t x2187 = INT32_MIN;
volatile uint8_t x2227 = 0U;
static int8_t x2266 = INT8_MAX;
volatile int32_t t75 = -134522369;
static volatile uint64_t x2363 = UINT64_MAX;
volatile int16_t x2364 = 0;
int8_t x2366 = INT8_MIN;
int32_t t79 = -16445573;
int64_t x2463 = 5393852657947LL;
static volatile int64_t x2545 = -1LL;
static volatile int32_t t81 = -121331;
volatile int64_t x2559 = INT64_MIN;
static int8_t x2560 = 0;
int64_t x2593 = -1922921834LL;
volatile uint32_t x2594 = UINT32_MAX;
int64_t x2595 = -1LL;
int16_t x2598 = INT16_MIN;
volatile int32_t x2609 = -1;
static volatile int32_t t86 = -11;
int32_t t87 = 270635;
int32_t x2622 = INT32_MAX;
volatile int8_t x2648 = 1;
uint16_t x2693 = UINT16_MAX;
int16_t x2696 = 15;
static int16_t x2707 = 17;
volatile int64_t x2722 = INT64_MAX;
uint32_t x2723 = 479794U;
volatile int32_t t93 = 124;
static uint32_t x2786 = UINT32_MAX;
static int8_t x2788 = 1;
int64_t x2795 = INT64_MIN;
volatile int8_t x2835 = INT8_MIN;
uint16_t x2836 = 4U;
static int8_t x2841 = -1;
int32_t t99 = 97;


void f0(void) {
	uint16_t x25 = 1U;
	uint8_t x26 = UINT8_MAX;
	int8_t x28 = 3;
	static volatile int32_t t0 = -3;

	t0 = ((x25==(x26|x27))<<x28);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x33 = UINT16_MAX;
	static int16_t x34 = INT16_MAX;
	volatile int32_t x35 = INT32_MAX;
	uint8_t x36 = 22U;
	volatile int32_t t1 = 10144;

	t1 = ((x33==(x34|x35))<<x36);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x45 = INT16_MAX;
	volatile int64_t x46 = -837007271378965087LL;
	static volatile int8_t x48 = 0;
	int32_t t2 = 58672569;

	t2 = ((x45==(x46|x47))<<x48);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x69 = -1;
	uint32_t x70 = UINT32_MAX;
	volatile int16_t x71 = 27;
	static volatile uint32_t x72 = 13U;

	t3 = ((x69==(x70|x71))<<x72);

	if (t3 != 8192) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x82 = -1;
	uint8_t x83 = 1U;
	static int8_t x84 = 10;

	t4 = ((x81==(x82|x83))<<x84);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x101 = INT32_MIN;
	int64_t x102 = -1LL;
	int8_t x103 = INT8_MIN;
	static volatile int64_t x104 = 11LL;
	int32_t t5 = -24122053;

	t5 = ((x101==(x102|x103))<<x104);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x117 = INT32_MIN;
	volatile int16_t x118 = 373;
	int32_t x119 = INT32_MAX;
	int32_t t6 = -1772433;

	t6 = ((x117==(x118|x119))<<x120);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x129 = INT32_MIN;
	int8_t x130 = 2;
	static int16_t x131 = 175;
	int64_t x132 = 1LL;
	volatile int32_t t7 = -63068;

	t7 = ((x129==(x130|x131))<<x132);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x141 = -1LL;
	uint8_t x143 = 1U;
	uint8_t x144 = 3U;
	int32_t t8 = -46494344;

	t8 = ((x141==(x142|x143))<<x144);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x177 = INT32_MIN;
	uint64_t x178 = 49026333419522LLU;

	t9 = ((x177==(x178|x179))<<x180);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x265 = 617117423U;
	int64_t x267 = 0LL;
	volatile uint16_t x268 = 28U;

	t10 = ((x265==(x266|x267))<<x268);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x361 = 206211435LLU;
	int8_t x363 = -1;
	int32_t t11 = 433648;

	t11 = ((x361==(x362|x363))<<x364);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x399 = 8463901863LLU;
	static uint8_t x400 = 0U;
	volatile int32_t t12 = -122;

	t12 = ((x397==(x398|x399))<<x400);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x429 = 1U;
	uint32_t x430 = 67292U;
	uint8_t x431 = 0U;
	static uint8_t x432 = 15U;
	int32_t t13 = 21547;

	t13 = ((x429==(x430|x431))<<x432);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x441 = 57U;
	uint32_t x443 = 8457U;
	volatile int32_t t14 = -1;

	t14 = ((x441==(x442|x443))<<x444);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x449 = -1LL;
	static int8_t x450 = INT8_MIN;
	int64_t x451 = -1LL;
	static volatile uint8_t x452 = 19U;
	static volatile int32_t t15 = 28244592;

	t15 = ((x449==(x450|x451))<<x452);

	if (t15 != 524288) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x505 = -1LL;
	volatile int8_t x506 = -1;
	volatile int32_t x507 = -1;
	static uint8_t x508 = 8U;

	t16 = ((x505==(x506|x507))<<x508);

	if (t16 != 256) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x509 = 2U;
	static uint64_t x512 = 1LLU;

	t17 = ((x509==(x510|x511))<<x512);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x578 = -203;
	static uint32_t x579 = UINT32_MAX;
	volatile uint16_t x580 = 3U;
	volatile int32_t t18 = -8231;

	t18 = ((x577==(x578|x579))<<x580);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x605 = -3093;
	uint64_t x606 = 8382054555413873756LLU;
	uint32_t x607 = 112627U;
	uint32_t x608 = 14U;
	static int32_t t19 = 4;

	t19 = ((x605==(x606|x607))<<x608);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x625 = 2455983447LLU;
	int8_t x626 = 5;
	static uint8_t x628 = 2U;

	t20 = ((x625==(x626|x627))<<x628);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x641 = UINT32_MAX;
	static volatile int64_t x642 = 3LL;
	uint8_t x644 = 0U;
	int32_t t21 = -5033551;

	t21 = ((x641==(x642|x643))<<x644);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x645 = INT8_MIN;
	volatile uint8_t x646 = 42U;
	int32_t x647 = -1;
	static volatile uint16_t x648 = 2U;
	volatile int32_t t22 = -19;

	t22 = ((x645==(x646|x647))<<x648);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x761 = INT32_MIN;
	static int64_t x762 = 321495718151078LL;
	int16_t x763 = INT16_MIN;
	uint8_t x764 = 0U;
	volatile int32_t t23 = 46;

	t23 = ((x761==(x762|x763))<<x764);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x765 = INT32_MIN;
	int8_t x766 = INT8_MAX;
	int8_t x767 = INT8_MIN;
	static uint8_t x768 = 3U;
	volatile int32_t t24 = 949;

	t24 = ((x765==(x766|x767))<<x768);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x853 = INT64_MIN;
	volatile uint8_t x855 = 114U;
	volatile int32_t x856 = 0;
	volatile int32_t t25 = 0;

	t25 = ((x853==(x854|x855))<<x856);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x861 = -1LL;
	int8_t x862 = -1;
	int16_t x863 = INT16_MIN;
	uint8_t x864 = 1U;
	static int32_t t26 = 9795938;

	t26 = ((x861==(x862|x863))<<x864);

	if (t26 != 2) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x933 = INT16_MAX;
	uint64_t x934 = UINT64_MAX;
	int32_t x935 = -1;
	volatile uint8_t x936 = 18U;
	int32_t t27 = 966628;

	t27 = ((x933==(x934|x935))<<x936);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x957 = INT64_MAX;
	volatile uint16_t x958 = UINT16_MAX;
	volatile uint64_t x959 = UINT64_MAX;
	static int64_t x960 = 2LL;
	static int32_t t28 = 7;

	t28 = ((x957==(x958|x959))<<x960);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x985 = INT64_MIN;
	uint32_t x986 = 96U;
	static int8_t x987 = 58;
	volatile uint16_t x988 = 21U;
	volatile int32_t t29 = -226;

	t29 = ((x985==(x986|x987))<<x988);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x1005 = 238;
	int8_t x1006 = -1;
	uint32_t x1008 = 14U;

	t30 = ((x1005==(x1006|x1007))<<x1008);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1046 = INT64_MIN;
	static int32_t x1047 = -1;
	static uint16_t x1048 = 1U;
	int32_t t31 = -3586;

	t31 = ((x1045==(x1046|x1047))<<x1048);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x1073 = -1LL;
	static uint32_t x1074 = 5864U;
	int32_t x1075 = INT32_MIN;
	volatile int32_t t32 = 1;

	t32 = ((x1073==(x1074|x1075))<<x1076);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1093 = INT64_MAX;
	int8_t x1096 = 2;
	volatile int32_t t33 = -476872554;

	t33 = ((x1093==(x1094|x1095))<<x1096);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1137 = INT16_MAX;
	int8_t x1139 = 0;
	static int8_t x1140 = 6;
	volatile int32_t t34 = -7886025;

	t34 = ((x1137==(x1138|x1139))<<x1140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x1197 = INT16_MAX;
	uint16_t x1198 = 391U;
	static uint16_t x1199 = 0U;
	int32_t x1200 = 5;
	int32_t t35 = -29352457;

	t35 = ((x1197==(x1198|x1199))<<x1200);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x1209 = 7039647U;
	static volatile int32_t x1210 = 4;
	int8_t x1211 = -1;
	volatile int8_t x1212 = 3;
	static volatile int32_t t36 = -2;

	t36 = ((x1209==(x1210|x1211))<<x1212);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x1273 = UINT16_MAX;
	int8_t x1274 = 4;
	uint8_t x1276 = 8U;
	static volatile int32_t t37 = -797;

	t37 = ((x1273==(x1274|x1275))<<x1276);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x1277 = -1;
	int64_t x1279 = INT64_MAX;
	int32_t t38 = 2475388;

	t38 = ((x1277==(x1278|x1279))<<x1280);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x1309 = -55562;
	uint64_t x1311 = 6947902540218982818LLU;
	int16_t x1312 = 0;

	t39 = ((x1309==(x1310|x1311))<<x1312);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x1333 = 13708LLU;
	int32_t x1334 = -1;
	int16_t x1335 = INT16_MIN;
	int16_t x1336 = 28;
	volatile int32_t t40 = 27889;

	t40 = ((x1333==(x1334|x1335))<<x1336);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x1341 = INT16_MAX;
	int16_t x1342 = INT16_MIN;
	int64_t x1343 = -1LL;
	int16_t x1344 = 28;
	static volatile int32_t t41 = -178652;

	t41 = ((x1341==(x1342|x1343))<<x1344);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x1389 = INT64_MIN;
	static int8_t x1390 = -19;
	uint16_t x1392 = 12U;
	int32_t t42 = -6166;

	t42 = ((x1389==(x1390|x1391))<<x1392);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x1393 = INT64_MIN;
	int32_t x1394 = -1;
	static int32_t x1395 = INT32_MAX;
	volatile int16_t x1396 = 28;

	t43 = ((x1393==(x1394|x1395))<<x1396);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x1437 = INT8_MIN;
	int64_t x1438 = INT64_MAX;
	static volatile uint16_t x1439 = 92U;

	t44 = ((x1437==(x1438|x1439))<<x1440);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x1445 = -485;
	uint32_t x1447 = UINT32_MAX;
	int32_t t45 = -29;

	t45 = ((x1445==(x1446|x1447))<<x1448);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x1521 = -30434327800073LL;
	uint32_t x1522 = UINT32_MAX;
	volatile int32_t t46 = -840150154;

	t46 = ((x1521==(x1522|x1523))<<x1524);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x1526 = 3U;
	int16_t x1527 = INT16_MAX;
	int8_t x1528 = 0;
	volatile int32_t t47 = 146;

	t47 = ((x1525==(x1526|x1527))<<x1528);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x1571 = INT8_MAX;
	uint8_t x1572 = 3U;
	static int32_t t48 = 276264409;

	t48 = ((x1569==(x1570|x1571))<<x1572);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x1597 = INT8_MIN;
	volatile uint64_t x1598 = UINT64_MAX;
	static volatile int8_t x1599 = INT8_MAX;
	uint8_t x1600 = 31U;
	int32_t t49 = 12328;

	t49 = ((x1597==(x1598|x1599))<<x1600);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x1613 = INT8_MIN;
	int8_t x1614 = INT8_MIN;
	int32_t x1615 = -11834;
	int16_t x1616 = 1;
	volatile int32_t t50 = 1070;

	t50 = ((x1613==(x1614|x1615))<<x1616);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x1633 = 4U;
	volatile uint16_t x1634 = 18202U;
	volatile int32_t x1635 = -1;
	uint32_t x1636 = 1U;
	int32_t t51 = -2;

	t51 = ((x1633==(x1634|x1635))<<x1636);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x1637 = 0;
	static uint32_t x1638 = 173198164U;
	int8_t x1640 = 25;

	t52 = ((x1637==(x1638|x1639))<<x1640);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x1641 = -70867LL;
	uint64_t x1643 = 140075869370113669LLU;
	volatile int8_t x1644 = 2;
	volatile int32_t t53 = 15979500;

	t53 = ((x1641==(x1642|x1643))<<x1644);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int8_t x1677 = -1;
	static int64_t x1678 = -1LL;
	static int64_t x1679 = INT64_MAX;
	int8_t x1680 = 7;

	t54 = ((x1677==(x1678|x1679))<<x1680);

	if (t54 != 128) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x1686 = 558U;
	int64_t x1687 = INT64_MAX;
	volatile uint8_t x1688 = 31U;

	t55 = ((x1685==(x1686|x1687))<<x1688);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x1733 = -1;
	uint16_t x1735 = UINT16_MAX;
	static uint8_t x1736 = 1U;
	int32_t t56 = 12059003;

	t56 = ((x1733==(x1734|x1735))<<x1736);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x1778 = 2;
	volatile uint16_t x1779 = UINT16_MAX;
	static int8_t x1780 = 1;

	t57 = ((x1777==(x1778|x1779))<<x1780);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int32_t x1801 = -5078;
	uint16_t x1803 = 1923U;
	int16_t x1804 = 18;
	static volatile int32_t t58 = 7989054;

	t58 = ((x1801==(x1802|x1803))<<x1804);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x1890 = 804U;
	uint32_t x1891 = UINT32_MAX;
	uint8_t x1892 = 6U;
	static volatile int32_t t59 = 9172699;

	t59 = ((x1889==(x1890|x1891))<<x1892);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint32_t x1922 = UINT32_MAX;
	int16_t x1923 = INT16_MAX;
	int8_t x1924 = 7;
	int32_t t60 = -3690;

	t60 = ((x1921==(x1922|x1923))<<x1924);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x1981 = INT64_MIN;
	int32_t x1983 = -1;
	uint8_t x1984 = 6U;

	t61 = ((x1981==(x1982|x1983))<<x1984);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x2002 = -596;
	int8_t x2003 = INT8_MIN;
	volatile uint8_t x2004 = 12U;
	int32_t t62 = 108031134;

	t62 = ((x2001==(x2002|x2003))<<x2004);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x2009 = INT64_MAX;
	static uint32_t x2010 = 33395U;
	uint32_t x2011 = 0U;
	volatile int32_t t63 = -353585;

	t63 = ((x2009==(x2010|x2011))<<x2012);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x2081 = -1;
	int64_t x2082 = -39620LL;
	volatile uint32_t x2083 = UINT32_MAX;
	volatile uint16_t x2084 = 1U;
	volatile int32_t t64 = 412613760;

	t64 = ((x2081==(x2082|x2083))<<x2084);

	if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x2111 = -15912;
	static int8_t x2112 = 0;

	t65 = ((x2109==(x2110|x2111))<<x2112);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x2113 = UINT8_MAX;
	uint8_t x2114 = UINT8_MAX;
	volatile int32_t x2115 = 1195;
	uint8_t x2116 = 13U;
	volatile int32_t t66 = 49142;

	t66 = ((x2113==(x2114|x2115))<<x2116);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x2129 = INT8_MAX;
	static int32_t x2130 = INT32_MAX;
	volatile int16_t x2131 = INT16_MIN;
	volatile uint8_t x2132 = 19U;
	volatile int32_t t67 = -190;

	t67 = ((x2129==(x2130|x2131))<<x2132);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x2145 = UINT64_MAX;
	static int32_t x2147 = INT32_MIN;
	int16_t x2148 = 4;
	static volatile int32_t t68 = -372991;

	t68 = ((x2145==(x2146|x2147))<<x2148);

	if (t68 != 16) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x2149 = INT8_MIN;
	uint16_t x2151 = 12487U;
	uint16_t x2152 = 0U;
	int32_t t69 = 71;

	t69 = ((x2149==(x2150|x2151))<<x2152);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x2169 = UINT16_MAX;
	int32_t x2170 = INT32_MIN;
	volatile int32_t t70 = -358427260;

	t70 = ((x2169==(x2170|x2171))<<x2172);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int32_t x2185 = INT32_MIN;
	static int64_t x2186 = -1LL;
	uint8_t x2188 = 2U;
	static volatile int32_t t71 = 100;

	t71 = ((x2185==(x2186|x2187))<<x2188);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x2225 = 228362376LL;
	volatile uint16_t x2226 = 1009U;
	int8_t x2228 = 1;
	int32_t t72 = -1242953;

	t72 = ((x2225==(x2226|x2227))<<x2228);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x2237 = -1LL;
	uint8_t x2238 = UINT8_MAX;
	int16_t x2239 = INT16_MIN;
	uint16_t x2240 = 7U;
	static volatile int32_t t73 = 176971;

	t73 = ((x2237==(x2238|x2239))<<x2240);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x2265 = INT64_MIN;
	static uint32_t x2267 = 59580332U;
	uint8_t x2268 = 12U;
	static volatile int32_t t74 = 4;

	t74 = ((x2265==(x2266|x2267))<<x2268);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x2297 = -1;
	volatile int8_t x2298 = INT8_MAX;
	int64_t x2299 = 88309110019690LL;
	static uint32_t x2300 = 1U;

	t75 = ((x2297==(x2298|x2299))<<x2300);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x2305 = 3130752450110LLU;
	int16_t x2306 = INT16_MIN;
	int16_t x2307 = INT16_MIN;
	uint8_t x2308 = 7U;
	static volatile int32_t t76 = -5592116;

	t76 = ((x2305==(x2306|x2307))<<x2308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x2361 = 385838331;
	int32_t x2362 = -22079;
	volatile int32_t t77 = 391423;

	t77 = ((x2361==(x2362|x2363))<<x2364);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x2365 = INT16_MAX;
	volatile uint64_t x2367 = UINT64_MAX;
	volatile int32_t x2368 = 0;
	static volatile int32_t t78 = -1;

	t78 = ((x2365==(x2366|x2367))<<x2368);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x2429 = -1;
	static int32_t x2430 = -2;
	uint8_t x2431 = 1U;
	static volatile uint16_t x2432 = 9U;

	t79 = ((x2429==(x2430|x2431))<<x2432);

	if (t79 != 512) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x2461 = 0;
	uint64_t x2462 = UINT64_MAX;
	static uint8_t x2464 = 16U;
	static volatile int32_t t80 = 50;

	t80 = ((x2461==(x2462|x2463))<<x2464);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x2546 = -46;
	volatile int16_t x2547 = 2;
	int16_t x2548 = 1;

	t81 = ((x2545==(x2546|x2547))<<x2548);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x2557 = INT64_MIN;
	uint64_t x2558 = 1940367322257LLU;
	volatile int32_t t82 = 12701101;

	t82 = ((x2557==(x2558|x2559))<<x2560);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x2561 = 799470;
	volatile int16_t x2562 = -25;
	static int32_t x2563 = INT32_MIN;
	volatile int8_t x2564 = 21;
	volatile int32_t t83 = -749687;

	t83 = ((x2561==(x2562|x2563))<<x2564);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x2596 = 1;
	volatile int32_t t84 = -28682681;

	t84 = ((x2593==(x2594|x2595))<<x2596);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x2597 = 1993U;
	int32_t x2599 = -1;
	volatile int16_t x2600 = 5;
	volatile int32_t t85 = 39;

	t85 = ((x2597==(x2598|x2599))<<x2600);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x2610 = INT32_MIN;
	uint32_t x2611 = 1U;
	static volatile uint16_t x2612 = 2U;

	t86 = ((x2609==(x2610|x2611))<<x2612);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x2617 = 1;
	int16_t x2618 = INT16_MIN;
	static int64_t x2619 = 118930045972LL;
	volatile int16_t x2620 = 1;

	t87 = ((x2617==(x2618|x2619))<<x2620);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x2621 = 3;
	int64_t x2623 = -7281681LL;
	int32_t x2624 = 0;
	volatile int32_t t88 = 0;

	t88 = ((x2621==(x2622|x2623))<<x2624);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x2645 = -1LL;
	uint64_t x2646 = 6872LLU;
	int32_t x2647 = 3968184;
	volatile int32_t t89 = 26;

	t89 = ((x2645==(x2646|x2647))<<x2648);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x2694 = -3070361314407774LL;
	volatile int16_t x2695 = INT16_MAX;
	int32_t t90 = 52;

	t90 = ((x2693==(x2694|x2695))<<x2696);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x2705 = 3746;
	static uint32_t x2706 = UINT32_MAX;
	static int16_t x2708 = 0;
	volatile int32_t t91 = 3;

	t91 = ((x2705==(x2706|x2707))<<x2708);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x2709 = -1;
	int32_t x2710 = -1;
	static int16_t x2711 = 643;
	uint8_t x2712 = 5U;
	static int32_t t92 = 271508862;

	t92 = ((x2709==(x2710|x2711))<<x2712);

	if (t92 != 32) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x2721 = INT16_MAX;
	uint8_t x2724 = 6U;

	t93 = ((x2721==(x2722|x2723))<<x2724);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x2785 = INT16_MAX;
	volatile int64_t x2787 = 119776LL;
	volatile int32_t t94 = 85041;

	t94 = ((x2785==(x2786|x2787))<<x2788);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x2793 = INT16_MIN;
	uint64_t x2794 = UINT64_MAX;
	int8_t x2796 = 2;
	int32_t t95 = 9;

	t95 = ((x2793==(x2794|x2795))<<x2796);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x2833 = 104U;
	volatile uint32_t x2834 = 15389U;
	int32_t t96 = 2;

	t96 = ((x2833==(x2834|x2835))<<x2836);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x2842 = -305975378LL;
	uint32_t x2843 = 44U;
	uint16_t x2844 = 12U;
	int32_t t97 = 2;

	t97 = ((x2841==(x2842|x2843))<<x2844);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x2853 = -1;
	int16_t x2854 = 1822;
	static uint16_t x2855 = 1711U;
	uint8_t x2856 = 0U;
	static volatile int32_t t98 = 35611964;

	t98 = ((x2853==(x2854|x2855))<<x2856);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x2921 = -1;
	volatile uint8_t x2922 = 32U;
	int64_t x2923 = 6558301640618281LL;
	int64_t x2924 = 1LL;

	t99 = ((x2921==(x2922|x2923))<<x2924);

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

