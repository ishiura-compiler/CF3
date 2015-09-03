#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x42 = INT32_MIN;
int16_t x89 = 30;
int16_t x103 = INT16_MIN;
int8_t x137 = INT8_MIN;
uint16_t x159 = 937U;
volatile int32_t t5 = 3;
int8_t x256 = 4;
volatile int32_t t8 = 1;
volatile int64_t x289 = -1LL;
int32_t x290 = INT32_MIN;
volatile int8_t x291 = INT8_MIN;
volatile uint8_t x302 = UINT8_MAX;
int16_t x304 = 1;
int32_t x337 = INT32_MAX;
int8_t x339 = INT8_MIN;
int32_t x343 = -1432;
int32_t t14 = 4563;
volatile int32_t x438 = -1;
int16_t x493 = INT16_MIN;
uint16_t x515 = 4U;
volatile int32_t x626 = -1;
int64_t x627 = INT64_MAX;
int32_t t23 = -105369647;
uint64_t x789 = UINT64_MAX;
static volatile uint64_t x853 = UINT64_MAX;
uint32_t x876 = 0U;
static volatile int32_t t28 = 915;
int32_t x994 = INT32_MIN;
int64_t x996 = 4LL;
uint16_t x1020 = 1U;
volatile int16_t x1053 = INT16_MIN;
uint8_t x1056 = 2U;
int8_t x1162 = -1;
uint8_t x1164 = 5U;
int32_t x1185 = -61013046;
volatile int32_t t39 = 7733;
static volatile int32_t t40 = -3073;
static int64_t x1261 = 3008644633245LL;
uint64_t x1262 = UINT64_MAX;
int16_t x1357 = -978;
uint16_t x1360 = 23U;
volatile int64_t x1363 = -28899LL;
int16_t x1391 = INT16_MIN;
int8_t x1394 = INT8_MIN;
static int8_t x1421 = INT8_MIN;
volatile int8_t x1423 = INT8_MAX;
int16_t x1424 = 0;
uint32_t x1467 = UINT32_MAX;
int32_t t51 = -83012;
int8_t x1474 = 23;
volatile uint16_t x1476 = 13U;
int32_t x1517 = INT32_MIN;
int64_t x1520 = 29LL;
volatile int32_t t54 = 187;
volatile int32_t t55 = -5108237;
volatile uint64_t x1567 = UINT64_MAX;
uint32_t x1613 = UINT32_MAX;
int16_t x1657 = -1;
int32_t t61 = 85088111;
static volatile int16_t x1689 = -1162;
int8_t x1691 = 57;
static int32_t t62 = -416;
int16_t x1725 = INT16_MIN;
uint16_t x1727 = 2U;
int16_t x1795 = INT16_MIN;
static int64_t x1902 = -1LL;
static uint16_t x1933 = 634U;
uint16_t x1934 = 246U;
int32_t x1935 = -1;
int16_t x1990 = INT16_MIN;
int32_t t73 = -7650;
static volatile int32_t x2026 = INT32_MIN;
static volatile uint8_t x2028 = 5U;
int16_t x2162 = INT16_MIN;
int64_t x2163 = -1LL;
static int64_t x2227 = INT64_MIN;
volatile uint16_t x2228 = 0U;
int8_t x2287 = 0;
uint8_t x2365 = 0U;
static volatile int32_t t81 = -39;
int8_t x2401 = INT8_MIN;
int16_t x2459 = 1;
static volatile uint32_t x2497 = 62634U;
int16_t x2509 = INT16_MIN;
uint16_t x2560 = 0U;
int8_t x2583 = 1;
volatile int32_t t88 = -33321402;
int32_t t90 = -4803;
static uint8_t x2692 = 12U;
volatile int32_t t93 = -72;
static volatile int32_t x2742 = -15683;
volatile int32_t x2749 = INT32_MIN;
volatile uint8_t x2832 = 0U;
int32_t t98 = 0;
int8_t x3001 = -27;


void f0(void) {
	uint64_t x37 = UINT64_MAX;
	volatile uint32_t x38 = 37U;
	volatile int64_t x39 = INT64_MIN;
	volatile int64_t x40 = 0LL;
	volatile int32_t t0 = 51;

	t0 = ((x37<(x38|x39))<<x40);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x41 = INT16_MIN;
	int64_t x43 = INT64_MIN;
	uint16_t x44 = 15U;
	volatile int32_t t1 = -65282007;

	t1 = ((x41<(x42|x43))<<x44);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x90 = INT16_MAX;
	static int16_t x91 = INT16_MIN;
	int16_t x92 = 0;
	volatile int32_t t2 = -136899;

	t2 = ((x89<(x90|x91))<<x92);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x101 = 1346U;
	volatile int8_t x102 = INT8_MIN;
	int16_t x104 = 18;
	int32_t t3 = -14179;

	t3 = ((x101<(x102|x103))<<x104);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x138 = -1;
	int8_t x139 = 10;
	uint16_t x140 = 2U;
	volatile int32_t t4 = -967178695;

	t4 = ((x137<(x138|x139))<<x140);

	if (t4 != 4) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x157 = 1666459860U;
	static int32_t x158 = INT32_MAX;
	uint8_t x160 = 3U;

	t5 = ((x157<(x158|x159))<<x160);

	if (t5 != 8) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x161 = -1;
	int16_t x162 = INT16_MAX;
	int16_t x163 = -1;
	volatile uint8_t x164 = 1U;
	volatile int32_t t6 = -1;

	t6 = ((x161<(x162|x163))<<x164);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x177 = INT16_MAX;
	int16_t x178 = INT16_MAX;
	static int32_t x179 = INT32_MAX;
	volatile uint8_t x180 = 5U;
	volatile int32_t t7 = 670;

	t7 = ((x177<(x178|x179))<<x180);

	if (t7 != 32) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x253 = 14293U;
	uint16_t x254 = 69U;
	volatile uint64_t x255 = 1990105774LLU;

	t8 = ((x253<(x254|x255))<<x256);

	if (t8 != 16) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x292 = 6U;
	int32_t t9 = -245;

	t9 = ((x289<(x290|x291))<<x292);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x301 = 8687951085094018LLU;
	uint8_t x303 = UINT8_MAX;
	volatile int32_t t10 = -13;

	t10 = ((x301<(x302|x303))<<x304);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x338 = INT32_MAX;
	static uint16_t x340 = 26U;
	volatile int32_t t11 = -7051426;

	t11 = ((x337<(x338|x339))<<x340);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x341 = INT32_MAX;
	int32_t x342 = INT32_MIN;
	volatile int16_t x344 = 0;
	int32_t t12 = -1;

	t12 = ((x341<(x342|x343))<<x344);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x389 = INT8_MIN;
	int32_t x390 = 439393;
	uint8_t x391 = UINT8_MAX;
	uint8_t x392 = 4U;
	static volatile int32_t t13 = 245651;

	t13 = ((x389<(x390|x391))<<x392);

	if (t13 != 16) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x409 = UINT32_MAX;
	uint8_t x410 = UINT8_MAX;
	int64_t x411 = INT64_MAX;
	int32_t x412 = 3;

	t14 = ((x409<(x410|x411))<<x412);

	if (t14 != 8) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x413 = INT16_MAX;
	uint32_t x414 = UINT32_MAX;
	volatile int8_t x415 = INT8_MAX;
	static int8_t x416 = 30;
	int32_t t15 = -41835;

	t15 = ((x413<(x414|x415))<<x416);

	if (t15 != 1073741824) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x437 = -1;
	int8_t x439 = INT8_MIN;
	uint16_t x440 = 4U;
	volatile int32_t t16 = -845;

	t16 = ((x437<(x438|x439))<<x440);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x494 = 96847U;
	volatile int16_t x495 = INT16_MIN;
	volatile uint8_t x496 = 0U;
	volatile int32_t t17 = 14464;

	t17 = ((x493<(x494|x495))<<x496);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x505 = -3;
	volatile uint8_t x506 = 53U;
	int16_t x507 = 114;
	uint8_t x508 = 2U;
	int32_t t18 = 750;

	t18 = ((x505<(x506|x507))<<x508);

	if (t18 != 4) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x513 = -1;
	int32_t x514 = INT32_MIN;
	static int8_t x516 = 0;
	volatile int32_t t19 = 5060;

	t19 = ((x513<(x514|x515))<<x516);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x517 = 10U;
	static int64_t x518 = -1LL;
	static volatile int64_t x519 = INT64_MAX;
	uint8_t x520 = 26U;
	int32_t t20 = -3267;

	t20 = ((x517<(x518|x519))<<x520);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x625 = INT64_MIN;
	volatile uint8_t x628 = 28U;
	static volatile int32_t t21 = 889992406;

	t21 = ((x625<(x626|x627))<<x628);

	if (t21 != 268435456) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x753 = INT16_MIN;
	int64_t x754 = 254LL;
	static uint16_t x755 = 14410U;
	uint16_t x756 = 3U;
	int32_t t22 = 1;

	t22 = ((x753<(x754|x755))<<x756);

	if (t22 != 8) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x757 = 286225131513LL;
	int16_t x758 = -335;
	static int32_t x759 = 11319;
	static uint32_t x760 = 4U;

	t23 = ((x757<(x758|x759))<<x760);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x773 = INT8_MIN;
	int16_t x774 = -1;
	volatile int8_t x775 = 0;
	uint16_t x776 = 2U;
	static volatile int32_t t24 = 1;

	t24 = ((x773<(x774|x775))<<x776);

	if (t24 != 4) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x790 = UINT64_MAX;
	volatile int16_t x791 = INT16_MIN;
	uint8_t x792 = 25U;
	static int32_t t25 = -167344504;

	t25 = ((x789<(x790|x791))<<x792);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x854 = INT8_MIN;
	volatile int64_t x855 = INT64_MIN;
	static uint8_t x856 = 14U;
	volatile int32_t t26 = -24796;

	t26 = ((x853<(x854|x855))<<x856);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x873 = -1LL;
	static uint16_t x874 = UINT16_MAX;
	int16_t x875 = -1;
	static volatile int32_t t27 = 228522;

	t27 = ((x873<(x874|x875))<<x876);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x957 = 11746970819778932LLU;
	uint32_t x958 = 0U;
	int16_t x959 = -1;
	uint8_t x960 = 25U;

	t28 = ((x957<(x958|x959))<<x960);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x985 = UINT32_MAX;
	volatile int8_t x986 = 5;
	int8_t x987 = 10;
	int16_t x988 = 0;
	static int32_t t29 = 28;

	t29 = ((x985<(x986|x987))<<x988);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x993 = -59;
	static int64_t x995 = -1LL;
	volatile int32_t t30 = 39281;

	t30 = ((x993<(x994|x995))<<x996);

	if (t30 != 16) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1017 = 11720283U;
	int64_t x1018 = INT64_MIN;
	volatile int8_t x1019 = -1;
	volatile int32_t t31 = -2;

	t31 = ((x1017<(x1018|x1019))<<x1020);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1045 = INT16_MAX;
	int8_t x1046 = -1;
	int16_t x1047 = -1;
	uint8_t x1048 = 2U;
	int32_t t32 = 2967;

	t32 = ((x1045<(x1046|x1047))<<x1048);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1054 = 108;
	int8_t x1055 = -1;
	static int32_t t33 = -1;

	t33 = ((x1053<(x1054|x1055))<<x1056);

	if (t33 != 4) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x1057 = UINT64_MAX;
	int16_t x1058 = INT16_MIN;
	uint32_t x1059 = 16062421U;
	uint16_t x1060 = 0U;
	volatile int32_t t34 = -1;

	t34 = ((x1057<(x1058|x1059))<<x1060);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x1137 = -6704118294161LL;
	static int32_t x1138 = INT32_MIN;
	uint16_t x1139 = 1U;
	static int16_t x1140 = 0;
	volatile int32_t t35 = -1;

	t35 = ((x1137<(x1138|x1139))<<x1140);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int64_t x1141 = INT64_MIN;
	int32_t x1142 = -1;
	static volatile int64_t x1143 = -1LL;
	static uint32_t x1144 = 8U;
	int32_t t36 = 32812350;

	t36 = ((x1141<(x1142|x1143))<<x1144);

	if (t36 != 256) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint8_t x1161 = UINT8_MAX;
	static int16_t x1163 = -1;
	volatile int32_t t37 = 2040247;

	t37 = ((x1161<(x1162|x1163))<<x1164);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1186 = -1LL;
	uint64_t x1187 = 236138427813625LLU;
	int16_t x1188 = 1;
	int32_t t38 = 584;

	t38 = ((x1185<(x1186|x1187))<<x1188);

	if (t38 != 2) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1221 = -1;
	volatile int64_t x1222 = INT64_MIN;
	volatile uint8_t x1223 = 2U;
	static int8_t x1224 = 4;

	t39 = ((x1221<(x1222|x1223))<<x1224);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x1245 = 2019908857LLU;
	int32_t x1246 = 39284027;
	static uint8_t x1247 = UINT8_MAX;
	volatile int16_t x1248 = 22;

	t40 = ((x1245<(x1246|x1247))<<x1248);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x1263 = INT16_MIN;
	uint32_t x1264 = 27U;
	volatile int32_t t41 = 0;

	t41 = ((x1261<(x1262|x1263))<<x1264);

	if (t41 != 134217728) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x1289 = 507402U;
	static volatile uint8_t x1290 = UINT8_MAX;
	static int8_t x1291 = -23;
	uint8_t x1292 = 18U;
	int32_t t42 = -229771;

	t42 = ((x1289<(x1290|x1291))<<x1292);

	if (t42 != 262144) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x1358 = INT16_MIN;
	volatile int32_t x1359 = INT32_MIN;
	volatile int32_t t43 = -319;

	t43 = ((x1357<(x1358|x1359))<<x1360);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x1361 = INT64_MIN;
	int8_t x1362 = -1;
	uint64_t x1364 = 14LLU;
	int32_t t44 = -92525053;

	t44 = ((x1361<(x1362|x1363))<<x1364);

	if (t44 != 16384) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x1385 = INT64_MAX;
	uint32_t x1386 = 12357U;
	uint16_t x1387 = 204U;
	static volatile uint16_t x1388 = 2U;
	static volatile int32_t t45 = 4167780;

	t45 = ((x1385<(x1386|x1387))<<x1388);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x1389 = INT8_MIN;
	int32_t x1390 = 865348772;
	static volatile int16_t x1392 = 4;
	volatile int32_t t46 = -1380588;

	t46 = ((x1389<(x1390|x1391))<<x1392);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x1393 = 2LLU;
	int64_t x1395 = -1LL;
	static volatile uint16_t x1396 = 5U;
	volatile int32_t t47 = 460196;

	t47 = ((x1393<(x1394|x1395))<<x1396);

	if (t47 != 32) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x1422 = -1LL;
	int32_t t48 = 6358463;

	t48 = ((x1421<(x1422|x1423))<<x1424);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x1437 = INT32_MIN;
	volatile uint8_t x1438 = 2U;
	volatile uint8_t x1439 = 90U;
	uint8_t x1440 = 14U;
	static volatile int32_t t49 = 22;

	t49 = ((x1437<(x1438|x1439))<<x1440);

	if (t49 != 16384) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x1453 = -1;
	int64_t x1454 = INT64_MIN;
	static int32_t x1455 = INT32_MAX;
	static volatile int8_t x1456 = 19;
	volatile int32_t t50 = -7593;

	t50 = ((x1453<(x1454|x1455))<<x1456);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x1465 = 7528948289LLU;
	static uint32_t x1466 = 2443U;
	uint16_t x1468 = 2U;

	t51 = ((x1465<(x1466|x1467))<<x1468);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x1473 = -44LL;
	int32_t x1475 = -96535002;
	int32_t t52 = -4;

	t52 = ((x1473<(x1474|x1475))<<x1476);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x1509 = 8977LLU;
	int16_t x1510 = 5;
	static uint8_t x1511 = 47U;
	uint8_t x1512 = 3U;
	static int32_t t53 = -3628795;

	t53 = ((x1509<(x1510|x1511))<<x1512);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x1518 = -1LL;
	static int8_t x1519 = INT8_MIN;

	t54 = ((x1517<(x1518|x1519))<<x1520);

	if (t54 != 536870912) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint64_t x1553 = UINT64_MAX;
	int64_t x1554 = -83387524LL;
	uint8_t x1555 = 98U;
	static volatile uint64_t x1556 = 1LLU;

	t55 = ((x1553<(x1554|x1555))<<x1556);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x1557 = -1;
	static uint64_t x1558 = 15021763184176041LLU;
	volatile int16_t x1559 = INT16_MIN;
	uint32_t x1560 = 2U;
	volatile int32_t t56 = -8;

	t56 = ((x1557<(x1558|x1559))<<x1560);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x1565 = 1U;
	int32_t x1566 = 4042;
	int64_t x1568 = 0LL;
	static volatile int32_t t57 = 5138;

	t57 = ((x1565<(x1566|x1567))<<x1568);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x1573 = INT8_MIN;
	static int32_t x1574 = INT32_MIN;
	static volatile int8_t x1575 = 1;
	int64_t x1576 = 14LL;
	volatile int32_t t58 = -453;

	t58 = ((x1573<(x1574|x1575))<<x1576);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x1593 = 31708744U;
	static int32_t x1594 = 6406;
	int16_t x1595 = 43;
	volatile uint32_t x1596 = 3U;
	int32_t t59 = -114;

	t59 = ((x1593<(x1594|x1595))<<x1596);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x1614 = 1LLU;
	uint64_t x1615 = UINT64_MAX;
	int8_t x1616 = 1;
	static int32_t t60 = -1378346;

	t60 = ((x1613<(x1614|x1615))<<x1616);

	if (t60 != 2) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x1658 = UINT16_MAX;
	static int8_t x1659 = INT8_MIN;
	int32_t x1660 = 5;

	t61 = ((x1657<(x1658|x1659))<<x1660);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x1690 = INT64_MAX;
	uint8_t x1692 = 13U;

	t62 = ((x1689<(x1690|x1691))<<x1692);

	if (t62 != 8192) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x1705 = 55051769;
	uint16_t x1706 = 565U;
	int32_t x1707 = INT32_MIN;
	volatile int8_t x1708 = 0;
	volatile int32_t t63 = 10758148;

	t63 = ((x1705<(x1706|x1707))<<x1708);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x1709 = INT64_MAX;
	uint64_t x1710 = 14080491LLU;
	static uint8_t x1711 = 12U;
	uint8_t x1712 = 1U;
	volatile int32_t t64 = -7;

	t64 = ((x1709<(x1710|x1711))<<x1712);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x1726 = -1;
	volatile uint8_t x1728 = 0U;
	static int32_t t65 = 626;

	t65 = ((x1725<(x1726|x1727))<<x1728);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x1789 = UINT64_MAX;
	volatile int32_t x1790 = -1;
	uint64_t x1791 = 1363LLU;
	int16_t x1792 = 8;
	volatile int32_t t66 = 4738317;

	t66 = ((x1789<(x1790|x1791))<<x1792);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x1793 = -1LL;
	int32_t x1794 = INT32_MAX;
	uint8_t x1796 = 0U;
	volatile int32_t t67 = 1;

	t67 = ((x1793<(x1794|x1795))<<x1796);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x1797 = INT32_MIN;
	volatile int64_t x1798 = 675952066672242LL;
	uint8_t x1799 = UINT8_MAX;
	uint32_t x1800 = 3U;
	static volatile int32_t t68 = 1;

	t68 = ((x1797<(x1798|x1799))<<x1800);

	if (t68 != 8) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x1813 = UINT16_MAX;
	int8_t x1814 = 7;
	int64_t x1815 = INT64_MIN;
	int8_t x1816 = 1;
	int32_t t69 = -56869836;

	t69 = ((x1813<(x1814|x1815))<<x1816);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x1825 = 7U;
	int16_t x1826 = -524;
	static int64_t x1827 = -1816179356110LL;
	uint64_t x1828 = 1LLU;
	volatile int32_t t70 = 122544;

	t70 = ((x1825<(x1826|x1827))<<x1828);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x1901 = 0U;
	int64_t x1903 = INT64_MIN;
	volatile uint8_t x1904 = 20U;
	static int32_t t71 = 54;

	t71 = ((x1901<(x1902|x1903))<<x1904);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x1936 = 16U;
	volatile int32_t t72 = -2175;

	t72 = ((x1933<(x1934|x1935))<<x1936);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x1989 = -1;
	int8_t x1991 = -1;
	int16_t x1992 = 0;

	t73 = ((x1989<(x1990|x1991))<<x1992);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x2025 = INT32_MIN;
	static uint16_t x2027 = UINT16_MAX;
	static volatile int32_t t74 = 18;

	t74 = ((x2025<(x2026|x2027))<<x2028);

	if (t74 != 32) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x2097 = INT8_MIN;
	int16_t x2098 = INT16_MIN;
	int32_t x2099 = -1;
	static int8_t x2100 = 0;
	int32_t t75 = -10871;

	t75 = ((x2097<(x2098|x2099))<<x2100);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x2161 = INT32_MIN;
	int8_t x2164 = 1;
	static int32_t t76 = 46;

	t76 = ((x2161<(x2162|x2163))<<x2164);

	if (t76 != 2) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x2225 = 1669826692074106661LLU;
	uint64_t x2226 = UINT64_MAX;
	volatile int32_t t77 = 357103733;

	t77 = ((x2225<(x2226|x2227))<<x2228);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x2241 = 71LL;
	int8_t x2242 = INT8_MIN;
	int16_t x2243 = INT16_MAX;
	uint32_t x2244 = 1U;
	int32_t t78 = 5615026;

	t78 = ((x2241<(x2242|x2243))<<x2244);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x2253 = INT8_MAX;
	uint16_t x2254 = 1U;
	int64_t x2255 = 8295195346815LL;
	volatile uint16_t x2256 = 7U;
	volatile int32_t t79 = 12718573;

	t79 = ((x2253<(x2254|x2255))<<x2256);

	if (t79 != 128) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x2285 = 242U;
	int64_t x2286 = 7458LL;
	int32_t x2288 = 26;
	int32_t t80 = -4398;

	t80 = ((x2285<(x2286|x2287))<<x2288);

	if (t80 != 67108864) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x2366 = INT16_MIN;
	int32_t x2367 = -2;
	uint8_t x2368 = 1U;

	t81 = ((x2365<(x2366|x2367))<<x2368);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x2389 = 0LLU;
	uint32_t x2390 = 1399520U;
	int16_t x2391 = -101;
	uint8_t x2392 = 0U;
	int32_t t82 = -1182968;

	t82 = ((x2389<(x2390|x2391))<<x2392);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x2402 = 161U;
	int8_t x2403 = -1;
	uint8_t x2404 = 2U;
	int32_t t83 = 281;

	t83 = ((x2401<(x2402|x2403))<<x2404);

	if (t83 != 4) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x2457 = INT16_MIN;
	int64_t x2458 = -11589714739904652LL;
	uint16_t x2460 = 24U;
	volatile int32_t t84 = 6396402;

	t84 = ((x2457<(x2458|x2459))<<x2460);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x2498 = 14299641U;
	uint16_t x2499 = UINT16_MAX;
	uint8_t x2500 = 1U;
	static volatile int32_t t85 = 315;

	t85 = ((x2497<(x2498|x2499))<<x2500);

	if (t85 != 2) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint8_t x2510 = 48U;
	int64_t x2511 = INT64_MIN;
	static int8_t x2512 = 28;
	static volatile int32_t t86 = -15619;

	t86 = ((x2509<(x2510|x2511))<<x2512);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x2557 = INT8_MIN;
	uint64_t x2558 = UINT64_MAX;
	uint64_t x2559 = 585587LLU;
	static int32_t t87 = -958594573;

	t87 = ((x2557<(x2558|x2559))<<x2560);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x2581 = 1;
	uint8_t x2582 = 15U;
	volatile int16_t x2584 = 7;

	t88 = ((x2581<(x2582|x2583))<<x2584);

	if (t88 != 128) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x2609 = INT32_MIN;
	uint64_t x2610 = 688154910LLU;
	int64_t x2611 = INT64_MIN;
	uint32_t x2612 = 12U;
	volatile int32_t t89 = 142222;

	t89 = ((x2609<(x2610|x2611))<<x2612);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x2665 = 7363U;
	volatile int16_t x2666 = INT16_MIN;
	volatile uint8_t x2667 = 69U;
	int16_t x2668 = 9;

	t90 = ((x2665<(x2666|x2667))<<x2668);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x2677 = INT16_MAX;
	int32_t x2678 = INT32_MIN;
	int16_t x2679 = INT16_MAX;
	int32_t x2680 = 0;
	volatile int32_t t91 = 737328;

	t91 = ((x2677<(x2678|x2679))<<x2680);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x2689 = INT32_MIN;
	static int32_t x2690 = INT32_MIN;
	int16_t x2691 = 1;
	static int32_t t92 = 105;

	t92 = ((x2689<(x2690|x2691))<<x2692);

	if (t92 != 4096) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x2709 = INT32_MAX;
	volatile uint64_t x2710 = UINT64_MAX;
	uint64_t x2711 = UINT64_MAX;
	static int32_t x2712 = 6;

	t93 = ((x2709<(x2710|x2711))<<x2712);

	if (t93 != 64) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x2741 = -28;
	int64_t x2743 = -354931LL;
	uint16_t x2744 = 5U;
	volatile int32_t t94 = 5262550;

	t94 = ((x2741<(x2742|x2743))<<x2744);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x2750 = 579797U;
	int8_t x2751 = INT8_MIN;
	int16_t x2752 = 1;
	volatile int32_t t95 = -127746332;

	t95 = ((x2749<(x2750|x2751))<<x2752);

	if (t95 != 2) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x2829 = -2;
	uint8_t x2830 = 2U;
	volatile uint64_t x2831 = 18485LLU;
	static int32_t t96 = -30;

	t96 = ((x2829<(x2830|x2831))<<x2832);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x2885 = INT8_MAX;
	uint64_t x2886 = UINT64_MAX;
	uint64_t x2887 = 74076147LLU;
	int32_t x2888 = 3;
	volatile int32_t t97 = 7529079;

	t97 = ((x2885<(x2886|x2887))<<x2888);

	if (t97 != 8) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x2973 = 29U;
	int8_t x2974 = 1;
	uint32_t x2975 = UINT32_MAX;
	volatile uint8_t x2976 = 2U;

	t98 = ((x2973<(x2974|x2975))<<x2976);

	if (t98 != 4) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x3002 = 43U;
	int32_t x3003 = 511748;
	int8_t x3004 = 1;
	int32_t t99 = 0;

	t99 = ((x3001<(x3002|x3003))<<x3004);

	if (t99 != 2) { NG(); } else { ; }
	
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

