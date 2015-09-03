#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x38 = -1;
static uint8_t x56 = 5U;
int8_t x121 = INT8_MIN;
int8_t x122 = INT8_MIN;
static int16_t x157 = -3;
int32_t x158 = INT32_MIN;
volatile int32_t t5 = 0;
static volatile uint32_t x262 = UINT32_MAX;
volatile int32_t t7 = -891715;
volatile int8_t x306 = INT8_MIN;
volatile int64_t x308 = 31LL;
int8_t x334 = -5;
volatile int32_t x339 = -1;
int64_t x374 = -1LL;
int64_t x388 = 1LL;
uint8_t x390 = 21U;
int32_t t15 = 42;
volatile int32_t t16 = 310;
int8_t x451 = -1;
volatile int32_t x566 = INT32_MAX;
int32_t t21 = -18;
int16_t x593 = -1;
volatile int32_t t22 = -540206;
int64_t x681 = -1LL;
volatile uint32_t x806 = UINT32_MAX;
uint8_t x808 = 1U;
static int64_t x893 = INT64_MIN;
int8_t x894 = INT8_MIN;
int8_t x983 = INT8_MIN;
static volatile int32_t t31 = 5537413;
static int64_t x1046 = -1LL;
int8_t x1066 = -1;
int8_t x1099 = -45;
int8_t x1144 = 2;
uint16_t x1156 = 1U;
uint8_t x1240 = 3U;
int16_t x1242 = INT16_MIN;
int8_t x1261 = 4;
uint64_t x1287 = 179773729434936668LLU;
int64_t x1337 = INT64_MIN;
int8_t x1339 = INT8_MIN;
static int16_t x1340 = 24;
int16_t x1365 = INT16_MIN;
int8_t x1367 = -1;
int64_t x1382 = INT64_MIN;
static uint64_t x1394 = UINT64_MAX;
int64_t x1426 = -105929LL;
volatile int32_t t49 = 39;
int8_t x1441 = INT8_MAX;
int16_t x1442 = 3136;
uint8_t x1467 = 59U;
uint16_t x1468 = 1U;
uint16_t x1488 = 0U;
int16_t x1507 = -1;
uint16_t x1573 = 13U;
uint16_t x1574 = UINT16_MAX;
volatile int8_t x1575 = -1;
uint8_t x1576 = 0U;
uint8_t x1660 = 1U;
int32_t t58 = 1902239;
int32_t x1668 = 28;
volatile int32_t x1701 = 31;
int8_t x1702 = INT8_MIN;
int16_t x1712 = 1;
int64_t x1766 = INT64_MIN;
int64_t x1767 = INT64_MIN;
int16_t x1807 = -1;
int32_t t65 = 46;
uint8_t x1850 = 6U;
volatile int32_t t67 = -1;
int16_t x1874 = INT16_MIN;
int32_t x1895 = INT32_MIN;
volatile int32_t t69 = 11197316;
int32_t x1929 = INT32_MIN;
uint16_t x1932 = 8U;
static uint8_t x1966 = UINT8_MAX;
uint32_t x2019 = UINT32_MAX;
uint64_t x2049 = 617400088106273436LLU;
static uint64_t x2145 = UINT64_MAX;
uint16_t x2146 = 2U;
static volatile int16_t x2261 = INT16_MAX;
int32_t x2263 = -1;
volatile uint16_t x2294 = UINT16_MAX;
int32_t x2295 = -1;
int64_t x2377 = INT64_MIN;
static int32_t x2379 = -1;
int32_t x2556 = 14;
int32_t t85 = -711302249;
int8_t x2621 = -1;
static uint64_t x2623 = 384LLU;
static int8_t x2629 = 7;
static uint64_t x2686 = 20144151048LLU;
static volatile int8_t x2720 = 0;
int32_t t92 = -42828707;
int64_t x2809 = INT64_MAX;
int32_t t93 = 5;
volatile int32_t t94 = -616775892;
uint16_t x2872 = 3U;
volatile int8_t x2964 = 15;
uint64_t x2984 = 11LLU;


void f0(void) {
	int8_t x37 = -1;
	int16_t x39 = 1321;
	uint8_t x40 = 9U;
	volatile int32_t t0 = 27946;

	t0 = ((x37<=(x38<x39))<<x40);

	if (t0 != 512) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x53 = 7903163U;
	int16_t x54 = INT16_MAX;
	volatile int8_t x55 = -1;
	volatile int32_t t1 = -46513;

	t1 = ((x53<=(x54<x55))<<x56);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x123 = UINT32_MAX;
	static uint8_t x124 = 18U;
	int32_t t2 = -212;

	t2 = ((x121<=(x122<x123))<<x124);

	if (t2 != 262144) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x159 = 27946;
	volatile uint8_t x160 = 3U;
	int32_t t3 = 279886027;

	t3 = ((x157<=(x158<x159))<<x160);

	if (t3 != 8) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x205 = -1;
	static volatile int16_t x206 = -1;
	volatile int64_t x207 = INT64_MAX;
	static uint16_t x208 = 9U;
	int32_t t4 = 26933250;

	t4 = ((x205<=(x206<x207))<<x208);

	if (t4 != 512) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x237 = INT32_MIN;
	int16_t x238 = -1;
	static uint64_t x239 = 99565311374LLU;
	uint64_t x240 = 2LLU;

	t5 = ((x237<=(x238<x239))<<x240);

	if (t5 != 4) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x253 = INT8_MIN;
	int32_t x254 = -1;
	int32_t x255 = -1;
	uint16_t x256 = 15U;
	int32_t t6 = -431944440;

	t6 = ((x253<=(x254<x255))<<x256);

	if (t6 != 32768) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x261 = UINT32_MAX;
	uint64_t x263 = UINT64_MAX;
	int8_t x264 = 2;

	t7 = ((x261<=(x262<x263))<<x264);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x305 = INT16_MAX;
	uint32_t x307 = 999U;
	volatile int32_t t8 = -225846359;

	t8 = ((x305<=(x306<x307))<<x308);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x321 = INT32_MIN;
	uint8_t x322 = UINT8_MAX;
	static uint64_t x323 = UINT64_MAX;
	int32_t x324 = 2;
	int32_t t9 = 3;

	t9 = ((x321<=(x322<x323))<<x324);

	if (t9 != 4) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x333 = UINT8_MAX;
	volatile uint8_t x335 = UINT8_MAX;
	volatile uint16_t x336 = 18U;
	volatile int32_t t10 = 73963670;

	t10 = ((x333<=(x334<x335))<<x336);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x337 = 100U;
	int32_t x338 = INT32_MIN;
	volatile int8_t x340 = 0;
	int32_t t11 = -13;

	t11 = ((x337<=(x338<x339))<<x340);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x361 = INT64_MIN;
	static int32_t x362 = INT32_MIN;
	uint64_t x363 = 5643068LLU;
	static uint8_t x364 = 6U;
	int32_t t12 = -338043;

	t12 = ((x361<=(x362<x363))<<x364);

	if (t12 != 64) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x373 = INT8_MIN;
	int16_t x375 = -3022;
	int8_t x376 = 1;
	static int32_t t13 = 13799089;

	t13 = ((x373<=(x374<x375))<<x376);

	if (t13 != 2) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x385 = 0U;
	volatile int64_t x386 = INT64_MIN;
	uint16_t x387 = 0U;
	int32_t t14 = 6306;

	t14 = ((x385<=(x386<x387))<<x388);

	if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x389 = 16453037U;
	int8_t x391 = INT8_MIN;
	uint16_t x392 = 9U;

	t15 = ((x389<=(x390<x391))<<x392);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x433 = -247;
	volatile int16_t x434 = INT16_MAX;
	int64_t x435 = INT64_MIN;
	int8_t x436 = 6;

	t16 = ((x433<=(x434<x435))<<x436);

	if (t16 != 64) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x449 = 2U;
	int64_t x450 = -1LL;
	static volatile int8_t x452 = 1;
	volatile int32_t t17 = -113042067;

	t17 = ((x449<=(x450<x451))<<x452);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x465 = 122604607LLU;
	uint16_t x466 = UINT16_MAX;
	int16_t x467 = INT16_MAX;
	static int8_t x468 = 18;
	volatile int32_t t18 = 177;

	t18 = ((x465<=(x466<x467))<<x468);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x473 = 5U;
	int16_t x474 = INT16_MIN;
	int8_t x475 = 5;
	int8_t x476 = 1;
	volatile int32_t t19 = 1;

	t19 = ((x473<=(x474<x475))<<x476);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x561 = -1LL;
	int32_t x562 = -1;
	static int32_t x563 = INT32_MAX;
	static uint8_t x564 = 0U;
	volatile int32_t t20 = -9420703;

	t20 = ((x561<=(x562<x563))<<x564);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x565 = 3U;
	uint16_t x567 = UINT16_MAX;
	static volatile int32_t x568 = 5;

	t21 = ((x565<=(x566<x567))<<x568);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x594 = INT64_MIN;
	uint16_t x595 = 764U;
	volatile uint32_t x596 = 1U;

	t22 = ((x593<=(x594<x595))<<x596);

	if (t22 != 2) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x601 = 29885546307153LLU;
	volatile int64_t x602 = -1LL;
	int8_t x603 = INT8_MIN;
	int32_t x604 = 17;
	volatile int32_t t23 = 620;

	t23 = ((x601<=(x602<x603))<<x604);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x682 = INT64_MIN;
	int32_t x683 = -1;
	volatile uint16_t x684 = 12U;
	int32_t t24 = -11516;

	t24 = ((x681<=(x682<x683))<<x684);

	if (t24 != 4096) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x753 = INT64_MAX;
	uint8_t x754 = 96U;
	volatile uint64_t x755 = UINT64_MAX;
	uint8_t x756 = 0U;
	int32_t t25 = 4167829;

	t25 = ((x753<=(x754<x755))<<x756);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x781 = INT16_MIN;
	static uint16_t x782 = UINT16_MAX;
	int32_t x783 = INT32_MIN;
	volatile uint8_t x784 = 14U;
	volatile int32_t t26 = -38632;

	t26 = ((x781<=(x782<x783))<<x784);

	if (t26 != 16384) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x789 = 77U;
	uint8_t x790 = UINT8_MAX;
	uint8_t x791 = UINT8_MAX;
	int8_t x792 = 1;
	static volatile int32_t t27 = -37091191;

	t27 = ((x789<=(x790<x791))<<x792);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x805 = UINT16_MAX;
	static int64_t x807 = INT64_MAX;
	volatile int32_t t28 = -32856578;

	t28 = ((x805<=(x806<x807))<<x808);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x895 = INT64_MIN;
	uint64_t x896 = 13LLU;
	volatile int32_t t29 = 5216;

	t29 = ((x893<=(x894<x895))<<x896);

	if (t29 != 8192) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int16_t x933 = INT16_MIN;
	static int16_t x934 = 141;
	int8_t x935 = INT8_MIN;
	int8_t x936 = 1;
	volatile int32_t t30 = 331348;

	t30 = ((x933<=(x934<x935))<<x936);

	if (t30 != 2) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x981 = INT16_MIN;
	uint32_t x982 = UINT32_MAX;
	static uint16_t x984 = 0U;

	t31 = ((x981<=(x982<x983))<<x984);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1033 = UINT32_MAX;
	int64_t x1034 = INT64_MAX;
	volatile uint16_t x1035 = 3986U;
	volatile int32_t x1036 = 1;
	volatile int32_t t32 = -30080;

	t32 = ((x1033<=(x1034<x1035))<<x1036);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1045 = -1LL;
	int8_t x1047 = INT8_MIN;
	static uint8_t x1048 = 0U;
	volatile int32_t t33 = -4;

	t33 = ((x1045<=(x1046<x1047))<<x1048);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x1065 = -11;
	int32_t x1067 = INT32_MIN;
	uint8_t x1068 = 14U;
	volatile int32_t t34 = 32052365;

	t34 = ((x1065<=(x1066<x1067))<<x1068);

	if (t34 != 16384) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1089 = -1;
	uint64_t x1090 = UINT64_MAX;
	uint8_t x1091 = UINT8_MAX;
	uint16_t x1092 = 4U;
	int32_t t35 = -9977430;

	t35 = ((x1089<=(x1090<x1091))<<x1092);

	if (t35 != 16) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1097 = -1;
	int64_t x1098 = INT64_MIN;
	static uint8_t x1100 = 3U;
	int32_t t36 = -215648173;

	t36 = ((x1097<=(x1098<x1099))<<x1100);

	if (t36 != 8) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x1141 = -1906239LL;
	uint16_t x1142 = UINT16_MAX;
	volatile int32_t x1143 = 58999;
	int32_t t37 = -468605;

	t37 = ((x1141<=(x1142<x1143))<<x1144);

	if (t37 != 4) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x1153 = -3682;
	int64_t x1154 = INT64_MAX;
	int32_t x1155 = 15533;
	int32_t t38 = 1402;

	t38 = ((x1153<=(x1154<x1155))<<x1156);

	if (t38 != 2) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x1161 = 2598910556199LLU;
	uint16_t x1162 = 3U;
	int32_t x1163 = -7;
	uint8_t x1164 = 3U;
	int32_t t39 = 11;

	t39 = ((x1161<=(x1162<x1163))<<x1164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x1225 = UINT16_MAX;
	int8_t x1226 = -1;
	int8_t x1227 = 56;
	uint32_t x1228 = 1U;
	int32_t t40 = 245667;

	t40 = ((x1225<=(x1226<x1227))<<x1228);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x1237 = 4U;
	int8_t x1238 = -3;
	uint8_t x1239 = UINT8_MAX;
	int32_t t41 = -25552620;

	t41 = ((x1237<=(x1238<x1239))<<x1240);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x1241 = UINT64_MAX;
	int8_t x1243 = -13;
	volatile uint8_t x1244 = 0U;
	static int32_t t42 = 8;

	t42 = ((x1241<=(x1242<x1243))<<x1244);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x1262 = 65647924U;
	volatile int16_t x1263 = INT16_MIN;
	static int8_t x1264 = 25;
	volatile int32_t t43 = 52558330;

	t43 = ((x1261<=(x1262<x1263))<<x1264);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int32_t x1285 = -816;
	int16_t x1286 = INT16_MIN;
	volatile uint8_t x1288 = 0U;
	int32_t t44 = -1;

	t44 = ((x1285<=(x1286<x1287))<<x1288);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x1338 = UINT16_MAX;
	volatile int32_t t45 = 1521;

	t45 = ((x1337<=(x1338<x1339))<<x1340);

	if (t45 != 16777216) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x1366 = INT8_MIN;
	uint8_t x1368 = 1U;
	static volatile int32_t t46 = 1482848;

	t46 = ((x1365<=(x1366<x1367))<<x1368);

	if (t46 != 2) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x1381 = -1;
	uint16_t x1383 = UINT16_MAX;
	uint8_t x1384 = 3U;
	static int32_t t47 = 201251;

	t47 = ((x1381<=(x1382<x1383))<<x1384);

	if (t47 != 8) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x1393 = UINT64_MAX;
	int64_t x1395 = INT64_MIN;
	static int16_t x1396 = 1;
	static int32_t t48 = -83032574;

	t48 = ((x1393<=(x1394<x1395))<<x1396);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x1425 = INT64_MIN;
	int16_t x1427 = INT16_MIN;
	volatile int16_t x1428 = 13;

	t49 = ((x1425<=(x1426<x1427))<<x1428);

	if (t49 != 8192) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x1443 = UINT64_MAX;
	static uint16_t x1444 = 1U;
	int32_t t50 = 54;

	t50 = ((x1441<=(x1442<x1443))<<x1444);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x1465 = 1;
	uint64_t x1466 = 4196253294LLU;
	static int32_t t51 = -9;

	t51 = ((x1465<=(x1466<x1467))<<x1468);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x1485 = -1;
	static uint64_t x1486 = 36LLU;
	int64_t x1487 = INT64_MIN;
	static volatile int32_t t52 = 2110;

	t52 = ((x1485<=(x1486<x1487))<<x1488);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x1505 = 3279979605942326LLU;
	volatile int16_t x1506 = -177;
	static uint8_t x1508 = 2U;
	int32_t t53 = -5327;

	t53 = ((x1505<=(x1506<x1507))<<x1508);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x1549 = UINT8_MAX;
	volatile int8_t x1550 = INT8_MIN;
	int32_t x1551 = INT32_MIN;
	int32_t x1552 = 1;
	int32_t t54 = 879370905;

	t54 = ((x1549<=(x1550<x1551))<<x1552);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t t55 = -305720;

	t55 = ((x1573<=(x1574<x1575))<<x1576);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x1613 = -1;
	int64_t x1614 = INT64_MAX;
	static volatile int64_t x1615 = INT64_MIN;
	static uint8_t x1616 = 6U;
	int32_t t56 = 316260;

	t56 = ((x1613<=(x1614<x1615))<<x1616);

	if (t56 != 64) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x1657 = -9133;
	static int8_t x1658 = -1;
	volatile int32_t x1659 = -1;
	volatile int32_t t57 = 2;

	t57 = ((x1657<=(x1658<x1659))<<x1660);

	if (t57 != 2) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x1661 = -1LL;
	static volatile int8_t x1662 = INT8_MAX;
	volatile int64_t x1663 = INT64_MIN;
	int8_t x1664 = 9;

	t58 = ((x1661<=(x1662<x1663))<<x1664);

	if (t58 != 512) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x1665 = 43308486;
	int16_t x1666 = INT16_MIN;
	int32_t x1667 = 451440;
	volatile int32_t t59 = -24;

	t59 = ((x1665<=(x1666<x1667))<<x1668);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x1703 = INT64_MIN;
	int8_t x1704 = 4;
	int32_t t60 = -3;

	t60 = ((x1701<=(x1702<x1703))<<x1704);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x1709 = 1009767671236404952LLU;
	uint64_t x1710 = UINT64_MAX;
	uint16_t x1711 = 5U;
	int32_t t61 = 0;

	t61 = ((x1709<=(x1710<x1711))<<x1712);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x1757 = INT8_MAX;
	static volatile uint8_t x1758 = 35U;
	int64_t x1759 = INT64_MIN;
	volatile uint8_t x1760 = 3U;
	int32_t t62 = 105934511;

	t62 = ((x1757<=(x1758<x1759))<<x1760);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x1765 = 299;
	volatile uint32_t x1768 = 2U;
	int32_t t63 = -629072;

	t63 = ((x1765<=(x1766<x1767))<<x1768);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x1805 = UINT32_MAX;
	static int32_t x1806 = INT32_MIN;
	uint8_t x1808 = 2U;
	int32_t t64 = 2;

	t64 = ((x1805<=(x1806<x1807))<<x1808);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x1821 = -1LL;
	static volatile int32_t x1822 = INT32_MIN;
	volatile int32_t x1823 = INT32_MIN;
	uint8_t x1824 = 10U;

	t65 = ((x1821<=(x1822<x1823))<<x1824);

	if (t65 != 1024) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x1849 = UINT32_MAX;
	int8_t x1851 = -63;
	static volatile int16_t x1852 = 2;
	int32_t t66 = 1;

	t66 = ((x1849<=(x1850<x1851))<<x1852);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x1869 = 7U;
	static int8_t x1870 = INT8_MAX;
	volatile uint64_t x1871 = 18LLU;
	static uint8_t x1872 = 0U;

	t67 = ((x1869<=(x1870<x1871))<<x1872);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x1873 = -1;
	static int16_t x1875 = INT16_MIN;
	int8_t x1876 = 3;
	volatile int32_t t68 = -19969787;

	t68 = ((x1873<=(x1874<x1875))<<x1876);

	if (t68 != 8) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x1893 = 1U;
	volatile int16_t x1894 = 667;
	int8_t x1896 = 3;

	t69 = ((x1893<=(x1894<x1895))<<x1896);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x1930 = 1173;
	uint8_t x1931 = 27U;
	volatile int32_t t70 = -4927138;

	t70 = ((x1929<=(x1930<x1931))<<x1932);

	if (t70 != 256) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x1965 = UINT8_MAX;
	int64_t x1967 = INT64_MIN;
	static int16_t x1968 = 1;
	int32_t t71 = 1;

	t71 = ((x1965<=(x1966<x1967))<<x1968);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x2005 = 0U;
	int16_t x2006 = INT16_MIN;
	static volatile int64_t x2007 = INT64_MIN;
	uint8_t x2008 = 0U;
	static int32_t t72 = -11714471;

	t72 = ((x2005<=(x2006<x2007))<<x2008);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x2017 = -19059937760LL;
	int16_t x2018 = 84;
	uint8_t x2020 = 3U;
	volatile int32_t t73 = -127;

	t73 = ((x2017<=(x2018<x2019))<<x2020);

	if (t73 != 8) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x2021 = 0;
	int16_t x2022 = INT16_MIN;
	int16_t x2023 = INT16_MIN;
	volatile int8_t x2024 = 1;
	static int32_t t74 = 755615;

	t74 = ((x2021<=(x2022<x2023))<<x2024);

	if (t74 != 2) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x2041 = INT16_MIN;
	static int32_t x2042 = INT32_MIN;
	uint8_t x2043 = 15U;
	int8_t x2044 = 29;
	volatile int32_t t75 = 54592210;

	t75 = ((x2041<=(x2042<x2043))<<x2044);

	if (t75 != 536870912) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x2050 = 1607;
	int8_t x2051 = INT8_MIN;
	volatile uint8_t x2052 = 2U;
	volatile int32_t t76 = 120;

	t76 = ((x2049<=(x2050<x2051))<<x2052);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x2147 = INT32_MIN;
	int16_t x2148 = 7;
	int32_t t77 = 12191;

	t77 = ((x2145<=(x2146<x2147))<<x2148);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x2262 = INT32_MIN;
	int8_t x2264 = 0;
	int32_t t78 = -178;

	t78 = ((x2261<=(x2262<x2263))<<x2264);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x2293 = INT32_MIN;
	int32_t x2296 = 0;
	static int32_t t79 = -3633403;

	t79 = ((x2293<=(x2294<x2295))<<x2296);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x2341 = INT16_MAX;
	int8_t x2342 = INT8_MAX;
	int64_t x2343 = INT64_MIN;
	int8_t x2344 = 1;
	volatile int32_t t80 = 0;

	t80 = ((x2341<=(x2342<x2343))<<x2344);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x2378 = 99U;
	uint8_t x2380 = 0U;
	volatile int32_t t81 = -29565;

	t81 = ((x2377<=(x2378<x2379))<<x2380);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x2449 = -1LL;
	volatile uint32_t x2450 = 2383582U;
	static uint16_t x2451 = UINT16_MAX;
	static int8_t x2452 = 12;
	volatile int32_t t82 = -81807;

	t82 = ((x2449<=(x2450<x2451))<<x2452);

	if (t82 != 4096) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x2541 = 94U;
	int8_t x2542 = INT8_MAX;
	int16_t x2543 = INT16_MAX;
	int8_t x2544 = 9;
	volatile int32_t t83 = 974976745;

	t83 = ((x2541<=(x2542<x2543))<<x2544);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x2549 = -6;
	int32_t x2550 = -1;
	volatile int8_t x2551 = -15;
	int64_t x2552 = 7LL;
	volatile int32_t t84 = 199758354;

	t84 = ((x2549<=(x2550<x2551))<<x2552);

	if (t84 != 128) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x2553 = 214U;
	volatile int64_t x2554 = -1LL;
	volatile int8_t x2555 = -1;

	t85 = ((x2553<=(x2554<x2555))<<x2556);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x2605 = -1;
	int32_t x2606 = INT32_MIN;
	volatile uint64_t x2607 = UINT64_MAX;
	uint32_t x2608 = 0U;
	static volatile int32_t t86 = 49140048;

	t86 = ((x2605<=(x2606<x2607))<<x2608);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x2622 = 61U;
	uint8_t x2624 = 22U;
	volatile int32_t t87 = 5894235;

	t87 = ((x2621<=(x2622<x2623))<<x2624);

	if (t87 != 4194304) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x2625 = -1;
	int16_t x2626 = INT16_MAX;
	volatile uint32_t x2627 = UINT32_MAX;
	uint16_t x2628 = 4U;
	int32_t t88 = -3310428;

	t88 = ((x2625<=(x2626<x2627))<<x2628);

	if (t88 != 16) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x2630 = 38331618706657LLU;
	uint16_t x2631 = 0U;
	uint32_t x2632 = 1U;
	volatile int32_t t89 = 1033020;

	t89 = ((x2629<=(x2630<x2631))<<x2632);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x2685 = 63301LL;
	static int32_t x2687 = INT32_MIN;
	int16_t x2688 = 0;
	static volatile int32_t t90 = 148234954;

	t90 = ((x2685<=(x2686<x2687))<<x2688);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x2717 = INT64_MAX;
	int64_t x2718 = -2376432LL;
	uint16_t x2719 = UINT16_MAX;
	volatile int32_t t91 = 181852548;

	t91 = ((x2717<=(x2718<x2719))<<x2720);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x2721 = UINT16_MAX;
	int32_t x2722 = -1;
	uint16_t x2723 = 7880U;
	int8_t x2724 = 3;

	t92 = ((x2721<=(x2722<x2723))<<x2724);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x2810 = INT8_MIN;
	static int8_t x2811 = INT8_MIN;
	int8_t x2812 = 13;

	t93 = ((x2809<=(x2810<x2811))<<x2812);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x2833 = -5;
	int16_t x2834 = 4;
	uint16_t x2835 = UINT16_MAX;
	static int16_t x2836 = 0;

	t94 = ((x2833<=(x2834<x2835))<<x2836);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x2869 = UINT8_MAX;
	int32_t x2870 = -1;
	volatile uint8_t x2871 = 51U;
	int32_t t95 = -42;

	t95 = ((x2869<=(x2870<x2871))<<x2872);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x2889 = -15280725279LL;
	uint64_t x2890 = UINT64_MAX;
	static volatile uint8_t x2891 = 3U;
	uint16_t x2892 = 1U;
	static volatile int32_t t96 = 124094;

	t96 = ((x2889<=(x2890<x2891))<<x2892);

	if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x2921 = 20U;
	int64_t x2922 = -5LL;
	uint16_t x2923 = 5U;
	uint16_t x2924 = 3U;
	volatile int32_t t97 = 176740;

	t97 = ((x2921<=(x2922<x2923))<<x2924);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x2961 = 20U;
	int32_t x2962 = INT32_MAX;
	volatile int16_t x2963 = -1;
	int32_t t98 = 6701;

	t98 = ((x2961<=(x2962<x2963))<<x2964);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x2981 = INT32_MAX;
	int32_t x2982 = INT32_MAX;
	uint16_t x2983 = UINT16_MAX;
	int32_t t99 = 3;

	t99 = ((x2981<=(x2982<x2983))<<x2984);

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

