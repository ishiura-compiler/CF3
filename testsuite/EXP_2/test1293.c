#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x12 = 23U;
volatile int32_t t0 = 0;
volatile int32_t t4 = -127;
static volatile int64_t x299 = -1940LL;
int16_t x350 = -1;
int16_t x420 = 0;
static int16_t x438 = -1;
uint8_t x440 = 15U;
volatile int32_t t10 = -398421406;
int32_t t12 = 12109071;
int32_t x515 = 5;
int32_t x533 = -1;
static volatile int32_t t18 = -602;
volatile int8_t x721 = INT8_MAX;
int32_t x726 = 19912;
uint8_t x755 = 91U;
static volatile int64_t x769 = 1348459620LL;
volatile uint16_t x773 = UINT16_MAX;
static int8_t x774 = 1;
int64_t x775 = -1LL;
int8_t x796 = 1;
uint16_t x805 = UINT16_MAX;
volatile int16_t x836 = 1;
int8_t x855 = INT8_MIN;
int16_t x893 = -1;
static int8_t x919 = INT8_MIN;
static uint16_t x920 = 17U;
uint8_t x1001 = UINT8_MAX;
static volatile uint64_t x1057 = 6574214445LLU;
int16_t x1058 = INT16_MIN;
int32_t x1090 = INT32_MIN;
static int8_t x1092 = 2;
int32_t t38 = 853397;
int32_t x1105 = INT32_MIN;
int32_t x1107 = INT32_MAX;
int32_t x1117 = INT32_MIN;
static uint16_t x1120 = 5U;
volatile int32_t t40 = -13304;
volatile int32_t t41 = 11001393;
volatile uint32_t x1170 = 3U;
int32_t x1171 = INT32_MAX;
volatile int32_t t43 = -990845;
static uint64_t x1313 = UINT64_MAX;
static volatile int32_t x1314 = 196;
int16_t x1326 = -1;
static volatile int64_t x1331 = INT64_MAX;
int32_t x1409 = 3;
int8_t x1412 = 3;
static int64_t x1422 = INT64_MAX;
int64_t x1432 = 0LL;
uint8_t x1504 = 0U;
static int16_t x1522 = -3458;
volatile uint64_t x1557 = 986779LLU;
int16_t x1689 = INT16_MAX;
uint8_t x1731 = 2U;
uint8_t x1748 = 0U;
uint8_t x1752 = 15U;
int32_t t63 = 139496106;
uint64_t x1821 = UINT64_MAX;
int32_t t65 = -363230321;
int16_t x1941 = -8334;
volatile int32_t t71 = 2859;
int64_t x2025 = INT64_MIN;
static int16_t x2028 = 0;
static volatile uint8_t x2058 = 0U;
static volatile uint32_t x2060 = 1U;
volatile int32_t x2094 = INT32_MAX;
static uint64_t x2096 = 1LLU;
int32_t x2137 = INT32_MIN;
int64_t x2139 = INT64_MAX;
uint8_t x2140 = 15U;
int32_t x2143 = INT32_MIN;
int32_t t76 = -4;
volatile int32_t t77 = -2853;
uint8_t x2154 = 6U;
static uint16_t x2175 = 15U;
volatile int32_t t79 = 0;
static volatile int32_t x2190 = -367;
int16_t x2207 = -26;
uint16_t x2290 = UINT16_MAX;
volatile int32_t x2292 = 1;
int32_t x2306 = -53866593;
volatile int32_t t84 = 53;
int64_t x2347 = 7LL;
static int32_t x2398 = INT32_MIN;
static int16_t x2400 = 1;
int64_t x2457 = INT64_MAX;
int32_t x2474 = -1518742;
uint64_t x2553 = 17385801LLU;
uint8_t x2635 = 23U;
static volatile uint16_t x2641 = UINT16_MAX;
int8_t x2682 = INT8_MIN;
int32_t x2741 = -18;
int64_t x2833 = -1775546158303LL;
static uint8_t x2836 = 13U;
static volatile int8_t x2877 = -11;


void f0(void) {
	int16_t x9 = INT16_MIN;
	static uint8_t x10 = 5U;
	int64_t x11 = INT64_MIN;

	t0 = ((x9<(x10==x11))<<x12);

	if (t0 != 8388608) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x13 = 105846U;
	uint64_t x14 = UINT64_MAX;
	volatile int32_t x15 = INT32_MIN;
	uint16_t x16 = 28U;
	volatile int32_t t1 = -115107309;

	t1 = ((x13<(x14==x15))<<x16);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x113 = INT16_MAX;
	int32_t x114 = INT32_MIN;
	int32_t x115 = INT32_MIN;
	uint8_t x116 = 20U;
	volatile int32_t t2 = -125814;

	t2 = ((x113<(x114==x115))<<x116);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x209 = INT8_MIN;
	int32_t x210 = INT32_MIN;
	static int8_t x211 = -1;
	static uint8_t x212 = 1U;
	int32_t t3 = 17350286;

	t3 = ((x209<(x210==x211))<<x212);

	if (t3 != 2) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x253 = -1;
	volatile uint8_t x254 = UINT8_MAX;
	uint32_t x255 = 67080187U;
	uint8_t x256 = 0U;

	t4 = ((x253<(x254==x255))<<x256);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x297 = 6U;
	int16_t x298 = INT16_MIN;
	static uint8_t x300 = 3U;
	int32_t t5 = 399;

	t5 = ((x297<(x298==x299))<<x300);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x337 = 981U;
	int16_t x338 = 23;
	int64_t x339 = -1LL;
	volatile uint64_t x340 = 5LLU;
	int32_t t6 = 787;

	t6 = ((x337<(x338==x339))<<x340);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x349 = -1;
	static volatile uint64_t x351 = 449840122433661LLU;
	uint8_t x352 = 15U;
	static volatile int32_t t7 = -9254;

	t7 = ((x349<(x350==x351))<<x352);

	if (t7 != 32768) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x397 = 3;
	int32_t x398 = INT32_MIN;
	int8_t x399 = INT8_MIN;
	int32_t x400 = 12;
	static int32_t t8 = -10;

	t8 = ((x397<(x398==x399))<<x400);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x417 = 15U;
	volatile int32_t x418 = INT32_MIN;
	int16_t x419 = INT16_MIN;
	int32_t t9 = 8648;

	t9 = ((x417<(x418==x419))<<x420);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x437 = 6U;
	uint32_t x439 = 25258U;

	t10 = ((x437<(x438==x439))<<x440);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x441 = -1;
	volatile int16_t x442 = INT16_MAX;
	volatile int32_t x443 = 925359;
	volatile int8_t x444 = 0;
	int32_t t11 = -911068813;

	t11 = ((x441<(x442==x443))<<x444);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x469 = 9717;
	uint8_t x470 = 90U;
	int64_t x471 = 1385LL;
	uint16_t x472 = 1U;

	t12 = ((x469<(x470==x471))<<x472);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x493 = 2507847491869101967LLU;
	int8_t x494 = INT8_MIN;
	int8_t x495 = -12;
	int8_t x496 = 11;
	static int32_t t13 = 17;

	t13 = ((x493<(x494==x495))<<x496);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x513 = INT32_MIN;
	static int32_t x514 = -1;
	static uint8_t x516 = 0U;
	volatile int32_t t14 = -26477444;

	t14 = ((x513<(x514==x515))<<x516);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x534 = INT16_MAX;
	uint32_t x535 = 243001135U;
	uint16_t x536 = 6U;
	static volatile int32_t t15 = -97;

	t15 = ((x533<(x534==x535))<<x536);

	if (t15 != 64) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x541 = -1;
	int8_t x542 = INT8_MIN;
	int32_t x543 = INT32_MIN;
	uint8_t x544 = 0U;
	int32_t t16 = 21883051;

	t16 = ((x541<(x542==x543))<<x544);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x617 = INT32_MAX;
	static int8_t x618 = INT8_MIN;
	uint8_t x619 = 6U;
	uint32_t x620 = 13U;
	static int32_t t17 = 81521758;

	t17 = ((x617<(x618==x619))<<x620);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x661 = INT8_MIN;
	uint16_t x662 = 3U;
	static volatile int16_t x663 = -1;
	volatile int32_t x664 = 1;

	t18 = ((x661<(x662==x663))<<x664);

	if (t18 != 2) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x722 = -7292;
	volatile int8_t x723 = 1;
	int16_t x724 = 7;
	int32_t t19 = -1131748;

	t19 = ((x721<(x722==x723))<<x724);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x725 = INT32_MAX;
	int64_t x727 = -136LL;
	uint8_t x728 = 5U;
	volatile int32_t t20 = -848;

	t20 = ((x725<(x726==x727))<<x728);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x733 = 860787;
	int16_t x734 = -691;
	static int16_t x735 = INT16_MIN;
	uint16_t x736 = 0U;
	static int32_t t21 = 221;

	t21 = ((x733<(x734==x735))<<x736);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x753 = 1;
	int8_t x754 = 16;
	uint8_t x756 = 13U;
	int32_t t22 = 13;

	t22 = ((x753<(x754==x755))<<x756);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x765 = INT8_MIN;
	uint8_t x766 = 1U;
	uint8_t x767 = UINT8_MAX;
	uint8_t x768 = 1U;
	int32_t t23 = -114645141;

	t23 = ((x765<(x766==x767))<<x768);

	if (t23 != 2) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x770 = INT16_MIN;
	static int8_t x771 = 1;
	int8_t x772 = 15;
	volatile int32_t t24 = -70115;

	t24 = ((x769<(x770==x771))<<x772);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x776 = 10;
	int32_t t25 = 4;

	t25 = ((x773<(x774==x775))<<x776);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x789 = INT32_MIN;
	static int32_t x790 = -53636039;
	uint32_t x791 = 62U;
	uint16_t x792 = 11U;
	static volatile int32_t t26 = -100;

	t26 = ((x789<(x790==x791))<<x792);

	if (t26 != 2048) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x793 = -119;
	volatile int64_t x794 = INT64_MIN;
	int32_t x795 = INT32_MIN;
	int32_t t27 = -22455145;

	t27 = ((x793<(x794==x795))<<x796);

	if (t27 != 2) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x806 = 15517661919847LLU;
	int16_t x807 = 111;
	uint8_t x808 = 3U;
	int32_t t28 = -232519532;

	t28 = ((x805<(x806==x807))<<x808);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x833 = 12U;
	int64_t x834 = INT64_MAX;
	int32_t x835 = INT32_MAX;
	static int32_t t29 = 0;

	t29 = ((x833<(x834==x835))<<x836);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x853 = 3LL;
	int8_t x854 = INT8_MIN;
	uint64_t x856 = 1LLU;
	static int32_t t30 = 1;

	t30 = ((x853<(x854==x855))<<x856);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x894 = INT32_MIN;
	int32_t x895 = -781;
	uint8_t x896 = 4U;
	int32_t t31 = -14670015;

	t31 = ((x893<(x894==x895))<<x896);

	if (t31 != 16) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x917 = INT32_MIN;
	int8_t x918 = -31;
	volatile int32_t t32 = 5615571;

	t32 = ((x917<(x918==x919))<<x920);

	if (t32 != 131072) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x985 = 3245681439LL;
	static uint32_t x986 = 5U;
	int64_t x987 = -1LL;
	int8_t x988 = 22;
	volatile int32_t t33 = 62;

	t33 = ((x985<(x986==x987))<<x988);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x1002 = 19950;
	int64_t x1003 = -1LL;
	int8_t x1004 = 1;
	static int32_t t34 = 62;

	t34 = ((x1001<(x1002==x1003))<<x1004);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1013 = -1;
	int32_t x1014 = -1;
	uint16_t x1015 = UINT16_MAX;
	int8_t x1016 = 14;
	int32_t t35 = -998224;

	t35 = ((x1013<(x1014==x1015))<<x1016);

	if (t35 != 16384) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1059 = -1;
	uint16_t x1060 = 9U;
	static int32_t t36 = -9807678;

	t36 = ((x1057<(x1058==x1059))<<x1060);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1061 = -103;
	static int64_t x1062 = 14LL;
	uint32_t x1063 = 26U;
	uint8_t x1064 = 1U;
	int32_t t37 = 133253055;

	t37 = ((x1061<(x1062==x1063))<<x1064);

	if (t37 != 2) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x1089 = 1894356;
	volatile uint8_t x1091 = 10U;

	t38 = ((x1089<(x1090==x1091))<<x1092);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x1106 = INT16_MIN;
	uint8_t x1108 = 20U;
	volatile int32_t t39 = -38191277;

	t39 = ((x1105<(x1106==x1107))<<x1108);

	if (t39 != 1048576) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x1118 = 448890412655LLU;
	int16_t x1119 = 12;

	t40 = ((x1117<(x1118==x1119))<<x1120);

	if (t40 != 32) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x1121 = 72;
	int32_t x1122 = -1;
	uint32_t x1123 = UINT32_MAX;
	uint8_t x1124 = 2U;

	t41 = ((x1121<(x1122==x1123))<<x1124);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x1149 = INT16_MIN;
	int8_t x1150 = INT8_MAX;
	int64_t x1151 = INT64_MIN;
	static uint8_t x1152 = 9U;
	static int32_t t42 = 989733697;

	t42 = ((x1149<(x1150==x1151))<<x1152);

	if (t42 != 512) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x1169 = 0U;
	uint16_t x1172 = 2U;

	t43 = ((x1169<(x1170==x1171))<<x1172);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x1201 = INT64_MIN;
	int8_t x1202 = INT8_MAX;
	int8_t x1203 = INT8_MAX;
	static uint8_t x1204 = 28U;
	volatile int32_t t44 = 551;

	t44 = ((x1201<(x1202==x1203))<<x1204);

	if (t44 != 268435456) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x1315 = INT16_MAX;
	static int32_t x1316 = 0;
	int32_t t45 = -1;

	t45 = ((x1313<(x1314==x1315))<<x1316);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x1325 = 16U;
	volatile uint32_t x1327 = 138574U;
	uint16_t x1328 = 3U;
	volatile int32_t t46 = -251802;

	t46 = ((x1325<(x1326==x1327))<<x1328);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x1329 = INT64_MAX;
	volatile int64_t x1330 = -1LL;
	static uint16_t x1332 = 3U;
	volatile int32_t t47 = -4958;

	t47 = ((x1329<(x1330==x1331))<<x1332);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x1377 = 18875U;
	int8_t x1378 = -1;
	int64_t x1379 = -927602139681LL;
	static volatile int16_t x1380 = 0;
	static volatile int32_t t48 = 1669024;

	t48 = ((x1377<(x1378==x1379))<<x1380);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x1410 = INT16_MAX;
	uint16_t x1411 = 110U;
	static volatile int32_t t49 = -45;

	t49 = ((x1409<(x1410==x1411))<<x1412);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x1421 = UINT64_MAX;
	volatile uint8_t x1423 = UINT8_MAX;
	static int8_t x1424 = 3;
	static volatile int32_t t50 = 85154910;

	t50 = ((x1421<(x1422==x1423))<<x1424);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint32_t x1429 = 973775894U;
	static uint16_t x1430 = UINT16_MAX;
	int64_t x1431 = -1LL;
	static int32_t t51 = 113064796;

	t51 = ((x1429<(x1430==x1431))<<x1432);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x1493 = INT32_MAX;
	int64_t x1494 = INT64_MIN;
	volatile uint8_t x1495 = 1U;
	static uint8_t x1496 = 2U;
	static int32_t t52 = 810057142;

	t52 = ((x1493<(x1494==x1495))<<x1496);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x1501 = -1011072;
	volatile uint64_t x1502 = 1846123LLU;
	int32_t x1503 = 44987;
	volatile int32_t t53 = 0;

	t53 = ((x1501<(x1502==x1503))<<x1504);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x1521 = -1;
	int8_t x1523 = INT8_MAX;
	static volatile int8_t x1524 = 9;
	static int32_t t54 = 1;

	t54 = ((x1521<(x1522==x1523))<<x1524);

	if (t54 != 512) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x1558 = 1631;
	int64_t x1559 = 3LL;
	volatile uint8_t x1560 = 30U;
	volatile int32_t t55 = 0;

	t55 = ((x1557<(x1558==x1559))<<x1560);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x1565 = -27709;
	uint64_t x1566 = 1939067746821157511LLU;
	int64_t x1567 = -612948923613LL;
	volatile int8_t x1568 = 2;
	static int32_t t56 = -165568;

	t56 = ((x1565<(x1566==x1567))<<x1568);

	if (t56 != 4) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x1690 = 82517366837921LLU;
	int64_t x1691 = 22160743115907202LL;
	uint32_t x1692 = 31U;
	int32_t t57 = 1950;

	t57 = ((x1689<(x1690==x1691))<<x1692);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x1721 = 0;
	volatile int8_t x1722 = INT8_MAX;
	uint8_t x1723 = 1U;
	volatile uint16_t x1724 = 4U;
	volatile int32_t t58 = 28067796;

	t58 = ((x1721<(x1722==x1723))<<x1724);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x1729 = -1;
	int8_t x1730 = -1;
	int8_t x1732 = 29;
	static int32_t t59 = -133744;

	t59 = ((x1729<(x1730==x1731))<<x1732);

	if (t59 != 536870912) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x1745 = -37072607LL;
	int8_t x1746 = INT8_MAX;
	static uint16_t x1747 = 4300U;
	volatile int32_t t60 = 65531533;

	t60 = ((x1745<(x1746==x1747))<<x1748);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x1749 = INT32_MIN;
	int64_t x1750 = 52LL;
	volatile int32_t x1751 = -1;
	int32_t t61 = -815;

	t61 = ((x1749<(x1750==x1751))<<x1752);

	if (t61 != 32768) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x1773 = INT64_MAX;
	uint64_t x1774 = 3LLU;
	volatile int8_t x1775 = INT8_MIN;
	uint8_t x1776 = 3U;
	volatile int32_t t62 = 7;

	t62 = ((x1773<(x1774==x1775))<<x1776);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x1785 = 1U;
	int8_t x1786 = 0;
	uint8_t x1787 = UINT8_MAX;
	uint8_t x1788 = 3U;

	t63 = ((x1785<(x1786==x1787))<<x1788);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x1789 = 6LLU;
	int64_t x1790 = 0LL;
	int16_t x1791 = -1;
	static uint32_t x1792 = 5U;
	volatile int32_t t64 = 227883107;

	t64 = ((x1789<(x1790==x1791))<<x1792);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x1822 = INT64_MIN;
	volatile int8_t x1823 = -1;
	uint8_t x1824 = 1U;

	t65 = ((x1821<(x1822==x1823))<<x1824);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x1833 = INT32_MIN;
	int8_t x1834 = INT8_MIN;
	int32_t x1835 = INT32_MAX;
	int8_t x1836 = 1;
	volatile int32_t t66 = 1;

	t66 = ((x1833<(x1834==x1835))<<x1836);

	if (t66 != 2) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x1893 = INT8_MAX;
	int8_t x1894 = 15;
	volatile int32_t x1895 = INT32_MAX;
	int16_t x1896 = 19;
	int32_t t67 = -17982;

	t67 = ((x1893<(x1894==x1895))<<x1896);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x1942 = 6938;
	volatile int64_t x1943 = -15119LL;
	uint32_t x1944 = 2U;
	int32_t t68 = -38598;

	t68 = ((x1941<(x1942==x1943))<<x1944);

	if (t68 != 4) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x1973 = INT16_MIN;
	int32_t x1974 = -9184524;
	int32_t x1975 = -1;
	uint16_t x1976 = 1U;
	int32_t t69 = 7923034;

	t69 = ((x1973<(x1974==x1975))<<x1976);

	if (t69 != 2) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x1993 = 3841925858192531027LL;
	int16_t x1994 = 14577;
	static uint8_t x1995 = 0U;
	static volatile uint16_t x1996 = 6U;
	int32_t t70 = 11745518;

	t70 = ((x1993<(x1994==x1995))<<x1996);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x2017 = INT64_MIN;
	int16_t x2018 = INT16_MIN;
	volatile uint64_t x2019 = 8807296711668241LLU;
	volatile uint16_t x2020 = 7U;

	t71 = ((x2017<(x2018==x2019))<<x2020);

	if (t71 != 128) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x2026 = UINT64_MAX;
	int16_t x2027 = 0;
	int32_t t72 = 625;

	t72 = ((x2025<(x2026==x2027))<<x2028);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x2057 = INT16_MAX;
	int32_t x2059 = INT32_MIN;
	volatile int32_t t73 = 24478;

	t73 = ((x2057<(x2058==x2059))<<x2060);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x2093 = 1;
	uint64_t x2095 = 64690843250619LLU;
	int32_t t74 = 1189;

	t74 = ((x2093<(x2094==x2095))<<x2096);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x2138 = UINT16_MAX;
	volatile int32_t t75 = 46553254;

	t75 = ((x2137<(x2138==x2139))<<x2140);

	if (t75 != 32768) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x2141 = 7788U;
	int64_t x2142 = INT64_MIN;
	uint16_t x2144 = 3U;

	t76 = ((x2141<(x2142==x2143))<<x2144);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x2145 = INT64_MAX;
	static volatile int8_t x2146 = INT8_MIN;
	int16_t x2147 = -1;
	int64_t x2148 = 1LL;

	t77 = ((x2145<(x2146==x2147))<<x2148);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x2153 = 3LLU;
	int16_t x2155 = INT16_MIN;
	int8_t x2156 = 18;
	volatile int32_t t78 = -56;

	t78 = ((x2153<(x2154==x2155))<<x2156);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x2173 = -1LL;
	uint8_t x2174 = UINT8_MAX;
	uint8_t x2176 = 0U;

	t79 = ((x2173<(x2174==x2175))<<x2176);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x2189 = 15014U;
	static int16_t x2191 = INT16_MIN;
	int8_t x2192 = 0;
	int32_t t80 = 514502;

	t80 = ((x2189<(x2190==x2191))<<x2192);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x2205 = 1463U;
	volatile uint16_t x2206 = 8U;
	uint8_t x2208 = 1U;
	int32_t t81 = 164907361;

	t81 = ((x2205<(x2206==x2207))<<x2208);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x2289 = 1U;
	int64_t x2291 = -540459359502602LL;
	volatile int32_t t82 = -142620090;

	t82 = ((x2289<(x2290==x2291))<<x2292);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x2305 = INT16_MIN;
	static int32_t x2307 = 54065;
	volatile uint16_t x2308 = 3U;
	static volatile int32_t t83 = -125473;

	t83 = ((x2305<(x2306==x2307))<<x2308);

	if (t83 != 8) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x2329 = INT8_MIN;
	int16_t x2330 = INT16_MAX;
	int32_t x2331 = 28560;
	int16_t x2332 = 1;

	t84 = ((x2329<(x2330==x2331))<<x2332);

	if (t84 != 2) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x2345 = -1;
	int32_t x2346 = INT32_MIN;
	uint8_t x2348 = 14U;
	int32_t t85 = 244777;

	t85 = ((x2345<(x2346==x2347))<<x2348);

	if (t85 != 16384) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x2397 = 12962461735079LLU;
	int64_t x2399 = -27514114976LL;
	static volatile int32_t t86 = 34;

	t86 = ((x2397<(x2398==x2399))<<x2400);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x2441 = UINT64_MAX;
	int32_t x2442 = INT32_MIN;
	int32_t x2443 = INT32_MIN;
	static uint32_t x2444 = 0U;
	int32_t t87 = 747076885;

	t87 = ((x2441<(x2442==x2443))<<x2444);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int64_t x2458 = 257741310612424LL;
	int16_t x2459 = -1;
	static uint64_t x2460 = 1LLU;
	int32_t t88 = 1;

	t88 = ((x2457<(x2458==x2459))<<x2460);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x2473 = 30U;
	volatile int16_t x2475 = -88;
	volatile uint8_t x2476 = 1U;
	volatile int32_t t89 = 120467467;

	t89 = ((x2473<(x2474==x2475))<<x2476);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x2554 = -1;
	static volatile uint16_t x2555 = UINT16_MAX;
	uint32_t x2556 = 0U;
	int32_t t90 = -26069;

	t90 = ((x2553<(x2554==x2555))<<x2556);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x2633 = INT16_MIN;
	static int16_t x2634 = INT16_MIN;
	uint8_t x2636 = 1U;
	static volatile int32_t t91 = -488071;

	t91 = ((x2633<(x2634==x2635))<<x2636);

	if (t91 != 2) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x2642 = INT16_MIN;
	static int64_t x2643 = -436832971633426LL;
	int8_t x2644 = 0;
	static volatile int32_t t92 = -225471438;

	t92 = ((x2641<(x2642==x2643))<<x2644);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x2681 = INT32_MIN;
	static volatile uint8_t x2683 = 18U;
	volatile uint64_t x2684 = 25LLU;
	static int32_t t93 = -2219;

	t93 = ((x2681<(x2682==x2683))<<x2684);

	if (t93 != 33554432) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x2693 = 0U;
	volatile uint32_t x2694 = 47410590U;
	int8_t x2695 = -1;
	uint16_t x2696 = 3U;
	static int32_t t94 = 74024;

	t94 = ((x2693<(x2694==x2695))<<x2696);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x2742 = -1908506;
	static int32_t x2743 = INT32_MIN;
	int8_t x2744 = 0;
	int32_t t95 = -103197689;

	t95 = ((x2741<(x2742==x2743))<<x2744);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x2817 = UINT32_MAX;
	int16_t x2818 = -1;
	volatile int16_t x2819 = -1;
	static uint8_t x2820 = 15U;
	int32_t t96 = -819608;

	t96 = ((x2817<(x2818==x2819))<<x2820);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x2834 = -3862923;
	int64_t x2835 = INT64_MIN;
	volatile int32_t t97 = -515215;

	t97 = ((x2833<(x2834==x2835))<<x2836);

	if (t97 != 8192) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x2865 = 203344147;
	uint8_t x2866 = UINT8_MAX;
	int16_t x2867 = 774;
	volatile uint8_t x2868 = 1U;
	volatile int32_t t98 = -112;

	t98 = ((x2865<(x2866==x2867))<<x2868);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x2878 = INT8_MAX;
	volatile int32_t x2879 = 2;
	uint8_t x2880 = 24U;
	volatile int32_t t99 = 12;

	t99 = ((x2877<(x2878==x2879))<<x2880);

	if (t99 != 16777216) { NG(); } else { ; }
	
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

