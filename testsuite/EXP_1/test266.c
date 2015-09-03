#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x114 = INT64_MIN;
static uint32_t x153 = 208U;
volatile int32_t x154 = INT32_MIN;
volatile uint16_t x155 = UINT16_MAX;
int32_t t4 = 1373490;
uint32_t x179 = UINT32_MAX;
int64_t x283 = INT64_MIN;
uint8_t x354 = UINT8_MAX;
volatile int32_t t12 = 219928;
int8_t x428 = 5;
static int32_t x455 = -1;
static int32_t t14 = 8320805;
int8_t x503 = INT8_MIN;
int16_t x536 = 1;
int16_t x548 = 1;
uint16_t x571 = UINT16_MAX;
int32_t t20 = 429222041;
int16_t x610 = INT16_MIN;
int32_t x665 = INT32_MIN;
volatile int16_t x697 = INT16_MIN;
uint64_t x698 = UINT64_MAX;
int32_t x703 = INT32_MIN;
static int8_t x783 = INT8_MIN;
volatile uint64_t x784 = 3LLU;
int32_t t28 = 186187;
int64_t x793 = -4LL;
static volatile int32_t t33 = 38;
int8_t x1056 = 7;
static volatile uint8_t x1135 = UINT8_MAX;
uint8_t x1136 = 2U;
int8_t x1137 = -1;
uint8_t x1186 = 3U;
int32_t t37 = 15502;
static uint16_t x1249 = UINT16_MAX;
uint8_t x1256 = 1U;
volatile int64_t x1261 = -1LL;
uint32_t x1263 = 322U;
int32_t t41 = -307;
int32_t x1265 = -1;
uint8_t x1311 = 2U;
uint32_t x1357 = 113753U;
int64_t x1562 = -1LL;
int64_t x1575 = INT64_MIN;
uint32_t x1620 = 8U;
uint64_t x1675 = UINT64_MAX;
int32_t t55 = 528;
static uint16_t x1780 = 5U;
static int8_t x1842 = 1;
uint8_t x1844 = 4U;
int16_t x1869 = -75;
uint16_t x1870 = 0U;
volatile uint64_t x1872 = 3LLU;
static int16_t x1873 = 33;
static int8_t x1876 = 21;
int32_t x1923 = INT32_MIN;
int32_t x1924 = 1;
static uint16_t x1939 = UINT16_MAX;
int16_t x1955 = INT16_MAX;
volatile int16_t x2226 = -1;
int8_t x2274 = 12;
int32_t x2305 = INT32_MIN;
int64_t x2306 = 34976146708095686LL;
static volatile int32_t t75 = 12;
volatile int32_t t76 = -6;
static int32_t t79 = 247;
static uint16_t x2465 = 14020U;
volatile int16_t x2515 = 9312;
int32_t t82 = -2037898;
uint8_t x2540 = 3U;
static volatile int32_t t84 = 5217;
int32_t t85 = -1621725;
int64_t x2687 = INT64_MIN;
volatile int32_t t86 = 454900330;
static volatile int32_t t87 = 165;
uint16_t x2707 = UINT16_MAX;
int8_t x2775 = 1;
static int16_t x2878 = -1;
uint16_t x2909 = 1362U;
static volatile uint32_t x2947 = 24U;
uint8_t x2979 = 6U;
int32_t t97 = 22;
uint32_t x3139 = 2086482U;
int8_t x3150 = -1;
int32_t x3151 = INT32_MAX;
int32_t t99 = 101;


void f0(void) {
	static uint32_t x69 = 11884U;
	static volatile uint8_t x70 = 3U;
	static int64_t x71 = INT64_MIN;
	uint32_t x72 = 0U;
	static volatile int32_t t0 = -1870883;

	t0 = (((x69-x70)==x71)<<x72);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int8_t x113 = -11;
	int8_t x115 = INT8_MIN;
	int64_t x116 = 2LL;
	int32_t t1 = 3075;

	t1 = (((x113-x114)==x115)<<x116);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x129 = 0;
	volatile uint16_t x130 = 301U;
	int32_t x131 = -1;
	uint8_t x132 = 13U;
	int32_t t2 = 96805;

	t2 = (((x129-x130)==x131)<<x132);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x156 = 2U;
	static volatile int32_t t3 = -14;

	t3 = (((x153-x154)==x155)<<x156);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x161 = 60051666U;
	uint64_t x162 = 0LLU;
	int8_t x163 = 45;
	uint16_t x164 = 14U;

	t4 = (((x161-x162)==x163)<<x164);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x177 = 6U;
	static volatile int16_t x178 = -1;
	int32_t x180 = 1;
	static int32_t t5 = -128714;

	t5 = (((x177-x178)==x179)<<x180);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x197 = -1LL;
	uint32_t x198 = 329165U;
	int8_t x199 = -1;
	static volatile int32_t x200 = 3;
	volatile int32_t t6 = 7308131;

	t6 = (((x197-x198)==x199)<<x200);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x233 = -1;
	int32_t x234 = 3089;
	uint64_t x235 = 483984584367LLU;
	static volatile uint32_t x236 = 2U;
	volatile int32_t t7 = 367471;

	t7 = (((x233-x234)==x235)<<x236);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x273 = INT64_MAX;
	int8_t x274 = 22;
	uint16_t x275 = 15068U;
	int8_t x276 = 2;
	volatile int32_t t8 = -525;

	t8 = (((x273-x274)==x275)<<x276);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x281 = INT64_MIN;
	volatile uint64_t x282 = 14777287LLU;
	static uint8_t x284 = 25U;
	int32_t t9 = -21011;

	t9 = (((x281-x282)==x283)<<x284);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x353 = 5U;
	uint8_t x355 = 1U;
	int16_t x356 = 0;
	volatile int32_t t10 = -42;

	t10 = (((x353-x354)==x355)<<x356);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x357 = 6035;
	int8_t x358 = INT8_MIN;
	static volatile int32_t x359 = -1;
	uint8_t x360 = 6U;
	volatile int32_t t11 = 12;

	t11 = (((x357-x358)==x359)<<x360);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint16_t x417 = 0U;
	volatile int8_t x418 = INT8_MIN;
	volatile int8_t x419 = INT8_MAX;
	int8_t x420 = 0;

	t12 = (((x417-x418)==x419)<<x420);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x425 = INT32_MIN;
	static int64_t x426 = 299842175880887498LL;
	int64_t x427 = -1LL;
	volatile int32_t t13 = -419794;

	t13 = (((x425-x426)==x427)<<x428);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x453 = 10U;
	int64_t x454 = -1LL;
	int32_t x456 = 1;

	t14 = (((x453-x454)==x455)<<x456);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x501 = 375LLU;
	int32_t x502 = -1;
	uint64_t x504 = 6LLU;
	int32_t t15 = 12;

	t15 = (((x501-x502)==x503)<<x504);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x533 = 119U;
	int32_t x534 = -113;
	int32_t x535 = INT32_MIN;
	volatile int32_t t16 = -1;

	t16 = (((x533-x534)==x535)<<x536);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x545 = INT64_MAX;
	uint8_t x546 = UINT8_MAX;
	int16_t x547 = 193;
	int32_t t17 = 1269183;

	t17 = (((x545-x546)==x547)<<x548);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x549 = 27661LL;
	static int32_t x550 = -25;
	static int16_t x551 = 222;
	static int8_t x552 = 1;
	int32_t t18 = -839724725;

	t18 = (((x549-x550)==x551)<<x552);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x557 = UINT8_MAX;
	static int16_t x558 = INT16_MIN;
	uint32_t x559 = 2U;
	int32_t x560 = 0;
	volatile int32_t t19 = 197549;

	t19 = (((x557-x558)==x559)<<x560);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x569 = 53;
	static int16_t x570 = INT16_MAX;
	volatile int8_t x572 = 1;

	t20 = (((x569-x570)==x571)<<x572);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x589 = UINT64_MAX;
	int32_t x590 = -5;
	uint16_t x591 = 8275U;
	volatile uint8_t x592 = 4U;
	int32_t t21 = 123;

	t21 = (((x589-x590)==x591)<<x592);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x609 = 1U;
	uint16_t x611 = 50U;
	int16_t x612 = 1;
	int32_t t22 = 53305560;

	t22 = (((x609-x610)==x611)<<x612);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x666 = -4;
	volatile int16_t x667 = 0;
	uint8_t x668 = 1U;
	int32_t t23 = 2;

	t23 = (((x665-x666)==x667)<<x668);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x681 = INT8_MIN;
	int8_t x682 = -1;
	uint64_t x683 = UINT64_MAX;
	static uint64_t x684 = 1LLU;
	int32_t t24 = 25855597;

	t24 = (((x681-x682)==x683)<<x684);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x699 = -1LL;
	volatile uint8_t x700 = 11U;
	static volatile int32_t t25 = 4;

	t25 = (((x697-x698)==x699)<<x700);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x701 = -1;
	static int32_t x702 = INT32_MIN;
	uint32_t x704 = 1U;
	int32_t t26 = 45686;

	t26 = (((x701-x702)==x703)<<x704);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x761 = -1;
	int32_t x762 = 59052;
	int32_t x763 = INT32_MAX;
	static volatile uint16_t x764 = 0U;
	static volatile int32_t t27 = -349732;

	t27 = (((x761-x762)==x763)<<x764);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x781 = INT16_MAX;
	uint8_t x782 = UINT8_MAX;

	t28 = (((x781-x782)==x783)<<x784);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x794 = 37U;
	volatile int16_t x795 = INT16_MIN;
	uint8_t x796 = 7U;
	volatile int32_t t29 = -155;

	t29 = (((x793-x794)==x795)<<x796);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x917 = 177042561;
	volatile uint32_t x918 = 138U;
	static int64_t x919 = 21417414LL;
	static uint16_t x920 = 0U;
	static volatile int32_t t30 = 1;

	t30 = (((x917-x918)==x919)<<x920);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x937 = -12538839LL;
	static uint16_t x938 = 300U;
	int16_t x939 = -1;
	int8_t x940 = 0;
	int32_t t31 = -1;

	t31 = (((x937-x938)==x939)<<x940);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x965 = -1381;
	uint16_t x966 = UINT16_MAX;
	int64_t x967 = INT64_MIN;
	volatile uint8_t x968 = 0U;
	volatile int32_t t32 = 840209;

	t32 = (((x965-x966)==x967)<<x968);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x1045 = UINT8_MAX;
	static int32_t x1046 = -1;
	static volatile uint64_t x1047 = UINT64_MAX;
	int16_t x1048 = 0;

	t33 = (((x1045-x1046)==x1047)<<x1048);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x1053 = -1;
	uint32_t x1054 = 8731139U;
	int32_t x1055 = INT32_MAX;
	int32_t t34 = 6343;

	t34 = (((x1053-x1054)==x1055)<<x1056);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x1133 = -17540181430838LL;
	volatile uint8_t x1134 = 28U;
	static volatile int32_t t35 = 3833291;

	t35 = (((x1133-x1134)==x1135)<<x1136);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x1138 = -1LL;
	int32_t x1139 = INT32_MAX;
	static uint8_t x1140 = 21U;
	int32_t t36 = -209;

	t36 = (((x1137-x1138)==x1139)<<x1140);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x1185 = INT16_MIN;
	int64_t x1187 = 2LL;
	int16_t x1188 = 2;

	t37 = (((x1185-x1186)==x1187)<<x1188);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x1241 = 31866U;
	volatile int32_t x1242 = 1075270;
	int16_t x1243 = INT16_MIN;
	uint8_t x1244 = 0U;
	int32_t t38 = 435700154;

	t38 = (((x1241-x1242)==x1243)<<x1244);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x1250 = 2U;
	int16_t x1251 = INT16_MAX;
	volatile uint16_t x1252 = 5U;
	volatile int32_t t39 = -18770;

	t39 = (((x1249-x1250)==x1251)<<x1252);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x1253 = UINT16_MAX;
	volatile int32_t x1254 = INT32_MAX;
	static uint8_t x1255 = 2U;
	volatile int32_t t40 = 35;

	t40 = (((x1253-x1254)==x1255)<<x1256);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1262 = INT64_MIN;
	int16_t x1264 = 15;

	t41 = (((x1261-x1262)==x1263)<<x1264);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x1266 = UINT64_MAX;
	uint16_t x1267 = 4706U;
	int8_t x1268 = 0;
	volatile int32_t t42 = -186;

	t42 = (((x1265-x1266)==x1267)<<x1268);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x1273 = -3;
	volatile int64_t x1274 = 221988146021LL;
	int16_t x1275 = -1;
	uint8_t x1276 = 1U;
	int32_t t43 = 417997938;

	t43 = (((x1273-x1274)==x1275)<<x1276);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int16_t x1281 = 23;
	int16_t x1282 = -3331;
	static uint16_t x1283 = UINT16_MAX;
	uint64_t x1284 = 26LLU;
	volatile int32_t t44 = -2290873;

	t44 = (((x1281-x1282)==x1283)<<x1284);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x1309 = UINT32_MAX;
	volatile uint32_t x1310 = 272254U;
	volatile int16_t x1312 = 1;
	static int32_t t45 = 8141;

	t45 = (((x1309-x1310)==x1311)<<x1312);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x1329 = -454337456177349998LL;
	int8_t x1330 = INT8_MIN;
	static int8_t x1331 = 14;
	int8_t x1332 = 0;
	int32_t t46 = -256279;

	t46 = (((x1329-x1330)==x1331)<<x1332);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x1358 = 41;
	uint64_t x1359 = 0LLU;
	volatile uint8_t x1360 = 28U;
	int32_t t47 = -31647523;

	t47 = (((x1357-x1358)==x1359)<<x1360);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x1369 = INT8_MIN;
	volatile int16_t x1370 = INT16_MAX;
	int16_t x1371 = 0;
	volatile uint8_t x1372 = 11U;
	volatile int32_t t48 = 1037560;

	t48 = (((x1369-x1370)==x1371)<<x1372);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x1409 = 201U;
	static uint8_t x1410 = 42U;
	static int8_t x1411 = -1;
	uint16_t x1412 = 0U;
	volatile int32_t t49 = 59992;

	t49 = (((x1409-x1410)==x1411)<<x1412);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x1457 = 1U;
	volatile uint64_t x1458 = 2862647203LLU;
	uint16_t x1459 = UINT16_MAX;
	uint8_t x1460 = 2U;
	volatile int32_t t50 = 8;

	t50 = (((x1457-x1458)==x1459)<<x1460);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x1561 = INT32_MIN;
	static int64_t x1563 = INT64_MIN;
	volatile uint8_t x1564 = 3U;
	volatile int32_t t51 = 1;

	t51 = (((x1561-x1562)==x1563)<<x1564);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x1573 = INT64_MAX;
	uint8_t x1574 = 55U;
	volatile int16_t x1576 = 1;
	int32_t t52 = 63;

	t52 = (((x1573-x1574)==x1575)<<x1576);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x1617 = 1U;
	uint64_t x1618 = UINT64_MAX;
	static int32_t x1619 = 1020032260;
	volatile int32_t t53 = -20329643;

	t53 = (((x1617-x1618)==x1619)<<x1620);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x1633 = -9927316;
	volatile uint8_t x1634 = UINT8_MAX;
	uint32_t x1635 = 1311U;
	volatile uint16_t x1636 = 3U;
	int32_t t54 = -153055;

	t54 = (((x1633-x1634)==x1635)<<x1636);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x1673 = INT8_MIN;
	int32_t x1674 = INT32_MIN;
	uint16_t x1676 = 17U;

	t55 = (((x1673-x1674)==x1675)<<x1676);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x1733 = 12U;
	volatile int8_t x1734 = -7;
	static int32_t x1735 = INT32_MIN;
	uint8_t x1736 = 31U;
	static volatile int32_t t56 = -186116137;

	t56 = (((x1733-x1734)==x1735)<<x1736);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x1777 = -1;
	uint8_t x1778 = UINT8_MAX;
	volatile int8_t x1779 = INT8_MAX;
	static int32_t t57 = -1;

	t57 = (((x1777-x1778)==x1779)<<x1780);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x1841 = UINT32_MAX;
	int32_t x1843 = INT32_MAX;
	int32_t t58 = -3614886;

	t58 = (((x1841-x1842)==x1843)<<x1844);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x1871 = 7;
	int32_t t59 = 1;

	t59 = (((x1869-x1870)==x1871)<<x1872);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x1874 = UINT32_MAX;
	static int8_t x1875 = INT8_MIN;
	int32_t t60 = 50402565;

	t60 = (((x1873-x1874)==x1875)<<x1876);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x1877 = 1906U;
	int64_t x1878 = INT64_MAX;
	uint32_t x1879 = 56410534U;
	uint32_t x1880 = 15U;
	static int32_t t61 = -116495;

	t61 = (((x1877-x1878)==x1879)<<x1880);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x1897 = INT8_MAX;
	int16_t x1898 = INT16_MIN;
	static uint64_t x1899 = 5555335LLU;
	uint8_t x1900 = 25U;
	volatile int32_t t62 = -1;

	t62 = (((x1897-x1898)==x1899)<<x1900);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x1905 = INT8_MAX;
	static int32_t x1906 = -1;
	volatile uint8_t x1907 = 7U;
	int8_t x1908 = 1;
	volatile int32_t t63 = 3908;

	t63 = (((x1905-x1906)==x1907)<<x1908);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x1921 = -25;
	int8_t x1922 = INT8_MIN;
	volatile int32_t t64 = 7865934;

	t64 = (((x1921-x1922)==x1923)<<x1924);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x1937 = UINT64_MAX;
	int64_t x1938 = -1LL;
	uint16_t x1940 = 4U;
	volatile int32_t t65 = 229204;

	t65 = (((x1937-x1938)==x1939)<<x1940);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x1953 = UINT64_MAX;
	int64_t x1954 = INT64_MIN;
	static uint32_t x1956 = 12U;
	int32_t t66 = 196;

	t66 = (((x1953-x1954)==x1955)<<x1956);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x1961 = -1;
	static int16_t x1962 = INT16_MIN;
	int64_t x1963 = INT64_MIN;
	int32_t x1964 = 2;
	int32_t t67 = -10;

	t67 = (((x1961-x1962)==x1963)<<x1964);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x2025 = 0;
	int64_t x2026 = -1LL;
	static int16_t x2027 = INT16_MAX;
	uint8_t x2028 = 1U;
	volatile int32_t t68 = 13656;

	t68 = (((x2025-x2026)==x2027)<<x2028);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x2125 = 2807U;
	uint8_t x2126 = 0U;
	int16_t x2127 = INT16_MIN;
	uint8_t x2128 = 11U;
	int32_t t69 = -28172;

	t69 = (((x2125-x2126)==x2127)<<x2128);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x2225 = UINT64_MAX;
	int64_t x2227 = INT64_MIN;
	uint16_t x2228 = 0U;
	volatile int32_t t70 = 2775609;

	t70 = (((x2225-x2226)==x2227)<<x2228);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x2253 = -1;
	static uint64_t x2254 = 3710437LLU;
	uint8_t x2255 = 4U;
	int32_t x2256 = 7;
	int32_t t71 = -6;

	t71 = (((x2253-x2254)==x2255)<<x2256);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x2273 = UINT64_MAX;
	int16_t x2275 = 419;
	volatile uint8_t x2276 = 5U;
	static int32_t t72 = -95573;

	t72 = (((x2273-x2274)==x2275)<<x2276);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x2281 = 4U;
	static volatile int16_t x2282 = INT16_MAX;
	uint64_t x2283 = 8073430LLU;
	uint16_t x2284 = 0U;
	int32_t t73 = 1729;

	t73 = (((x2281-x2282)==x2283)<<x2284);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x2293 = INT16_MAX;
	volatile uint8_t x2294 = 121U;
	static uint32_t x2295 = UINT32_MAX;
	uint16_t x2296 = 2U;
	volatile int32_t t74 = -78086;

	t74 = (((x2293-x2294)==x2295)<<x2296);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x2307 = 0LL;
	int8_t x2308 = 4;

	t75 = (((x2305-x2306)==x2307)<<x2308);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x2317 = INT16_MAX;
	static uint8_t x2318 = UINT8_MAX;
	static uint16_t x2319 = 0U;
	static uint64_t x2320 = 27LLU;

	t76 = (((x2317-x2318)==x2319)<<x2320);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x2385 = UINT32_MAX;
	int64_t x2386 = -1LL;
	int8_t x2387 = INT8_MIN;
	int8_t x2388 = 0;
	int32_t t77 = 2107;

	t77 = (((x2385-x2386)==x2387)<<x2388);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x2405 = INT8_MIN;
	int8_t x2406 = INT8_MIN;
	int8_t x2407 = INT8_MIN;
	uint32_t x2408 = 1U;
	volatile int32_t t78 = 199065;

	t78 = (((x2405-x2406)==x2407)<<x2408);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x2429 = -14073624LL;
	static volatile uint64_t x2430 = 2LLU;
	int64_t x2431 = -1LL;
	static int16_t x2432 = 0;

	t79 = (((x2429-x2430)==x2431)<<x2432);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x2441 = UINT16_MAX;
	int32_t x2442 = 93;
	volatile int64_t x2443 = 11169327702LL;
	int8_t x2444 = 6;
	int32_t t80 = -6;

	t80 = (((x2441-x2442)==x2443)<<x2444);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x2466 = 7U;
	int16_t x2467 = INT16_MAX;
	int8_t x2468 = 1;
	int32_t t81 = -2395085;

	t81 = (((x2465-x2466)==x2467)<<x2468);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x2513 = -1;
	int32_t x2514 = 204861252;
	uint8_t x2516 = 30U;

	t82 = (((x2513-x2514)==x2515)<<x2516);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x2537 = -1;
	static int8_t x2538 = 2;
	int64_t x2539 = 1584LL;
	int32_t t83 = -497806;

	t83 = (((x2537-x2538)==x2539)<<x2540);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x2577 = UINT64_MAX;
	uint16_t x2578 = UINT16_MAX;
	volatile int16_t x2579 = INT16_MAX;
	uint16_t x2580 = 5U;

	t84 = (((x2577-x2578)==x2579)<<x2580);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x2653 = 0U;
	volatile uint8_t x2654 = UINT8_MAX;
	int8_t x2655 = INT8_MIN;
	int8_t x2656 = 1;

	t85 = (((x2653-x2654)==x2655)<<x2656);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x2685 = 0U;
	uint32_t x2686 = 1U;
	uint16_t x2688 = 1U;

	t86 = (((x2685-x2686)==x2687)<<x2688);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x2701 = 10;
	int64_t x2702 = -4182737382663986LL;
	uint32_t x2703 = 119447U;
	int16_t x2704 = 6;

	t87 = (((x2701-x2702)==x2703)<<x2704);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x2705 = 1U;
	int64_t x2706 = 1LL;
	volatile int8_t x2708 = 2;
	int32_t t88 = -1;

	t88 = (((x2705-x2706)==x2707)<<x2708);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x2773 = 1U;
	uint16_t x2774 = UINT16_MAX;
	int16_t x2776 = 1;
	int32_t t89 = -1;

	t89 = (((x2773-x2774)==x2775)<<x2776);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x2777 = INT32_MIN;
	uint32_t x2778 = 1388U;
	uint64_t x2779 = UINT64_MAX;
	static int8_t x2780 = 4;
	int32_t t90 = 103;

	t90 = (((x2777-x2778)==x2779)<<x2780);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x2789 = -1LL;
	static int8_t x2790 = INT8_MIN;
	int16_t x2791 = INT16_MIN;
	int32_t x2792 = 13;
	static int32_t t91 = 0;

	t91 = (((x2789-x2790)==x2791)<<x2792);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x2817 = -2;
	uint32_t x2818 = 446425U;
	static int64_t x2819 = 37138644744129908LL;
	int8_t x2820 = 30;
	int32_t t92 = 312283631;

	t92 = (((x2817-x2818)==x2819)<<x2820);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x2877 = 1289690263696645091LLU;
	int8_t x2879 = -2;
	volatile uint16_t x2880 = 2U;
	volatile int32_t t93 = -7186;

	t93 = (((x2877-x2878)==x2879)<<x2880);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x2910 = UINT8_MAX;
	static uint64_t x2911 = 3002015145793645LLU;
	static uint32_t x2912 = 3U;
	static volatile int32_t t94 = 0;

	t94 = (((x2909-x2910)==x2911)<<x2912);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x2945 = -18;
	int16_t x2946 = INT16_MIN;
	int8_t x2948 = 3;
	int32_t t95 = 901250;

	t95 = (((x2945-x2946)==x2947)<<x2948);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x2977 = INT16_MIN;
	int8_t x2978 = -1;
	volatile uint8_t x2980 = 0U;
	volatile int32_t t96 = 106;

	t96 = (((x2977-x2978)==x2979)<<x2980);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x3025 = 32455242136LL;
	int8_t x3026 = INT8_MIN;
	static int64_t x3027 = 8LL;
	int16_t x3028 = 3;

	t97 = (((x3025-x3026)==x3027)<<x3028);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x3137 = -4;
	static int32_t x3138 = 0;
	static uint8_t x3140 = 2U;
	int32_t t98 = -231;

	t98 = (((x3137-x3138)==x3139)<<x3140);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x3149 = INT32_MIN;
	uint8_t x3152 = 2U;

	t99 = (((x3149-x3150)==x3151)<<x3152);

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

