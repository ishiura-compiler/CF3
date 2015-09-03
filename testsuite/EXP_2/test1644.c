#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x29 = -1;
uint8_t x31 = UINT8_MAX;
int8_t x35 = 0;
int64_t x134 = -1LL;
volatile uint16_t x157 = 5U;
int8_t x158 = 54;
uint8_t x160 = 3U;
volatile int32_t t3 = -440076;
int32_t x167 = 18;
volatile uint64_t x193 = UINT64_MAX;
int32_t t6 = 3;
int8_t x253 = INT8_MIN;
volatile int16_t x254 = INT16_MIN;
volatile uint16_t x297 = 186U;
static int16_t x373 = -163;
static int64_t x376 = 1LL;
volatile int64_t x378 = -1LL;
volatile uint32_t x380 = 1U;
int8_t x404 = 1;
volatile int32_t t16 = -1201638;
volatile int32_t t18 = 5464326;
static int16_t x566 = -2;
volatile int8_t x568 = 14;
int64_t x594 = INT64_MIN;
static int8_t x671 = 5;
uint32_t x705 = UINT32_MAX;
int64_t x707 = -843605247133183LL;
int8_t x721 = INT8_MAX;
int64_t x846 = -1LL;
uint16_t x848 = 1U;
static uint16_t x1055 = 856U;
volatile int64_t x1060 = 7LL;
uint16_t x1153 = UINT16_MAX;
int32_t x1154 = INT32_MAX;
uint16_t x1199 = UINT16_MAX;
volatile int64_t x1202 = 328496612077828214LL;
static uint32_t x1203 = 409058U;
int16_t x1262 = 1966;
uint64_t x1263 = UINT64_MAX;
volatile int32_t t41 = 13;
int64_t x1270 = INT64_MIN;
static uint16_t x1272 = 3U;
uint64_t x1398 = UINT64_MAX;
static int32_t x1399 = 10587;
static int16_t x1445 = -3;
volatile int32_t x1446 = -1;
volatile uint16_t x1450 = UINT16_MAX;
uint64_t x1451 = 25688627LLU;
volatile int16_t x1579 = INT16_MIN;
int32_t x1605 = INT32_MIN;
int32_t t51 = -6342104;
int64_t x1638 = -1LL;
int32_t t52 = -757327;
uint16_t x1648 = 19U;
volatile int32_t t54 = -310967;
int32_t x1747 = INT32_MIN;
volatile uint16_t x1748 = 1U;
volatile uint8_t x1755 = 0U;
int16_t x1756 = 18;
volatile int32_t t56 = 1450;
static uint8_t x1859 = 11U;
static int16_t x1924 = 25;
int32_t x1958 = 12837;
uint16_t x1960 = 0U;
int8_t x1981 = -1;
volatile int8_t x1984 = 0;
int32_t t63 = -8887;
uint8_t x2021 = 0U;
uint32_t x2022 = 191958U;
int32_t x2023 = -1953;
int32_t t65 = 739375;
int8_t x2055 = -14;
int16_t x2060 = 13;
int32_t x2273 = INT32_MAX;
static uint32_t x2363 = UINT32_MAX;
uint8_t x2384 = 0U;
static int8_t x2422 = -1;
uint32_t x2424 = 10U;
int32_t t72 = 1;
int64_t x2442 = INT64_MIN;
volatile int8_t x2458 = -1;
int32_t t74 = 646816812;
uint32_t x2491 = UINT32_MAX;
volatile int8_t x2525 = -6;
volatile int32_t t76 = -502637909;
static uint8_t x2534 = UINT8_MAX;
volatile int16_t x2535 = INT16_MAX;
int16_t x2546 = INT16_MIN;
uint8_t x2548 = 6U;
volatile int32_t t79 = -67140;
uint64_t x2645 = 3152LLU;
uint8_t x2647 = UINT8_MAX;
volatile uint8_t x2674 = 6U;
static uint16_t x2676 = 3U;
int32_t t81 = -17312;
int16_t x2680 = 0;
int32_t x2730 = INT32_MIN;
volatile uint64_t x2732 = 11LLU;
volatile uint8_t x2760 = 1U;
static int8_t x2762 = -1;
volatile int32_t t87 = -11572593;
uint64_t x2785 = 18189LLU;
volatile int32_t t88 = 12222531;
static int32_t x2806 = INT32_MAX;
int32_t x2808 = 1;
volatile int8_t x2825 = -1;
static volatile int32_t t90 = -5;
int16_t x2863 = INT16_MIN;
uint8_t x2864 = 3U;
volatile int32_t t92 = 174260;
volatile int64_t x2881 = INT64_MIN;
int16_t x2882 = INT16_MIN;
int16_t x2883 = -1;
int64_t x2958 = -128043930LL;
int8_t x2959 = -1;
static int16_t x2962 = INT16_MIN;
int64_t x2963 = INT64_MAX;
int8_t x2964 = 0;
int16_t x3004 = 16;
volatile int32_t t98 = 875396;
volatile int32_t t99 = 22;


void f0(void) {
	uint16_t x30 = UINT16_MAX;
	volatile int16_t x32 = 10;
	static volatile int32_t t0 = -2545;

	t0 = ((x29<=(x30<=x31))<<x32);

	if (t0 != 1024) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x33 = INT16_MIN;
	int8_t x34 = -11;
	static uint8_t x36 = 4U;
	volatile int32_t t1 = 2689;

	t1 = ((x33<=(x34<=x35))<<x36);

	if (t1 != 16) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x133 = INT8_MIN;
	uint8_t x135 = UINT8_MAX;
	int8_t x136 = 0;
	volatile int32_t t2 = -6;

	t2 = ((x133<=(x134<=x135))<<x136);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x159 = -1LL;

	t3 = ((x157<=(x158<=x159))<<x160);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int64_t x165 = 34262195LL;
	volatile int32_t x166 = 874211;
	int32_t x168 = 1;
	int32_t t4 = 187008;

	t4 = ((x165<=(x166<=x167))<<x168);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x194 = 0U;
	int8_t x195 = INT8_MIN;
	static volatile int8_t x196 = 4;
	int32_t t5 = 17609370;

	t5 = ((x193<=(x194<=x195))<<x196);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x241 = INT32_MIN;
	volatile int64_t x242 = INT64_MIN;
	volatile uint16_t x243 = 438U;
	int32_t x244 = 22;

	t6 = ((x241<=(x242<=x243))<<x244);

	if (t6 != 4194304) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x245 = INT32_MAX;
	uint64_t x246 = 7198270714LLU;
	int32_t x247 = INT32_MIN;
	uint16_t x248 = 3U;
	volatile int32_t t7 = 8;

	t7 = ((x245<=(x246<=x247))<<x248);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x255 = UINT8_MAX;
	uint8_t x256 = 0U;
	volatile int32_t t8 = -95435;

	t8 = ((x253<=(x254<=x255))<<x256);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x298 = -2259487;
	static int16_t x299 = 42;
	int8_t x300 = 1;
	static volatile int32_t t9 = 5;

	t9 = ((x297<=(x298<=x299))<<x300);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x313 = 1030910177U;
	int16_t x314 = -13;
	uint32_t x315 = 2137U;
	volatile uint8_t x316 = 13U;
	volatile int32_t t10 = 3512468;

	t10 = ((x313<=(x314<=x315))<<x316);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x337 = -216;
	uint8_t x338 = UINT8_MAX;
	int8_t x339 = INT8_MIN;
	uint32_t x340 = 5U;
	int32_t t11 = 990299;

	t11 = ((x337<=(x338<=x339))<<x340);

	if (t11 != 32) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x374 = INT32_MIN;
	int8_t x375 = INT8_MIN;
	static volatile int32_t t12 = 1;

	t12 = ((x373<=(x374<=x375))<<x376);

	if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x377 = UINT8_MAX;
	int64_t x379 = -1LL;
	int32_t t13 = -1;

	t13 = ((x377<=(x378<=x379))<<x380);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x401 = 71U;
	static int8_t x402 = INT8_MIN;
	volatile int16_t x403 = INT16_MIN;
	int32_t t14 = -1;

	t14 = ((x401<=(x402<=x403))<<x404);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x437 = 12U;
	int8_t x438 = INT8_MIN;
	volatile int32_t x439 = INT32_MAX;
	uint32_t x440 = 29U;
	volatile int32_t t15 = -2253942;

	t15 = ((x437<=(x438<=x439))<<x440);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x449 = -4LL;
	int32_t x450 = INT32_MAX;
	uint16_t x451 = 28U;
	uint8_t x452 = 2U;

	t16 = ((x449<=(x450<=x451))<<x452);

	if (t16 != 4) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x457 = INT32_MIN;
	int8_t x458 = 12;
	static volatile uint32_t x459 = 732U;
	volatile int8_t x460 = 0;
	volatile int32_t t17 = -219389;

	t17 = ((x457<=(x458<=x459))<<x460);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x465 = 16825U;
	uint32_t x466 = 3547181U;
	int8_t x467 = 27;
	uint8_t x468 = 2U;

	t18 = ((x465<=(x466<=x467))<<x468);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x477 = UINT8_MAX;
	int16_t x478 = -3966;
	volatile uint32_t x479 = 1U;
	static uint64_t x480 = 25LLU;
	int32_t t19 = 4;

	t19 = ((x477<=(x478<=x479))<<x480);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x565 = 2;
	int16_t x567 = INT16_MAX;
	static int32_t t20 = 10362;

	t20 = ((x565<=(x566<=x567))<<x568);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x577 = 54U;
	int64_t x578 = INT64_MIN;
	static volatile int32_t x579 = 11450;
	volatile uint8_t x580 = 1U;
	volatile int32_t t21 = 17941116;

	t21 = ((x577<=(x578<=x579))<<x580);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x593 = 92925U;
	int64_t x595 = INT64_MIN;
	int8_t x596 = 25;
	int32_t t22 = -2964;

	t22 = ((x593<=(x594<=x595))<<x596);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x665 = 2U;
	static uint16_t x666 = 14U;
	int64_t x667 = 458227854967LL;
	int64_t x668 = 1LL;
	int32_t t23 = -13321560;

	t23 = ((x665<=(x666<=x667))<<x668);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x669 = 0U;
	int64_t x670 = INT64_MAX;
	int8_t x672 = 0;
	int32_t t24 = -786873;

	t24 = ((x669<=(x670<=x671))<<x672);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x706 = INT16_MIN;
	uint16_t x708 = 7U;
	int32_t t25 = -10;

	t25 = ((x705<=(x706<=x707))<<x708);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x722 = INT16_MIN;
	int16_t x723 = INT16_MIN;
	int16_t x724 = 0;
	volatile int32_t t26 = -734;

	t26 = ((x721<=(x722<=x723))<<x724);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x757 = UINT16_MAX;
	int16_t x758 = INT16_MAX;
	uint64_t x759 = 70931652LLU;
	static uint8_t x760 = 1U;
	volatile int32_t t27 = -4098;

	t27 = ((x757<=(x758<=x759))<<x760);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x777 = -1;
	static int16_t x778 = -1;
	uint32_t x779 = 15057205U;
	static uint8_t x780 = 9U;
	volatile int32_t t28 = 4457;

	t28 = ((x777<=(x778<=x779))<<x780);

	if (t28 != 512) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x829 = INT16_MIN;
	static volatile int32_t x830 = 74883055;
	volatile int16_t x831 = INT16_MAX;
	static volatile uint16_t x832 = 30U;
	int32_t t29 = 0;

	t29 = ((x829<=(x830<=x831))<<x832);

	if (t29 != 1073741824) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x845 = 55U;
	uint16_t x847 = 3288U;
	int32_t t30 = 33386513;

	t30 = ((x845<=(x846<=x847))<<x848);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x953 = -1LL;
	int16_t x954 = 68;
	uint8_t x955 = 2U;
	uint8_t x956 = 13U;
	static volatile int32_t t31 = 1;

	t31 = ((x953<=(x954<=x955))<<x956);

	if (t31 != 8192) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x957 = -345736;
	uint32_t x958 = UINT32_MAX;
	int16_t x959 = -14;
	uint32_t x960 = 3U;
	volatile int32_t t32 = 615;

	t32 = ((x957<=(x958<=x959))<<x960);

	if (t32 != 8) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x965 = UINT64_MAX;
	int16_t x966 = INT16_MIN;
	static uint64_t x967 = 123LLU;
	uint8_t x968 = 4U;
	static volatile int32_t t33 = -2724;

	t33 = ((x965<=(x966<=x967))<<x968);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x1053 = INT32_MIN;
	int64_t x1054 = INT64_MAX;
	static volatile uint16_t x1056 = 3U;
	int32_t t34 = -1244;

	t34 = ((x1053<=(x1054<=x1055))<<x1056);

	if (t34 != 8) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1057 = INT8_MIN;
	int32_t x1058 = INT32_MAX;
	uint8_t x1059 = 1U;
	int32_t t35 = 217229;

	t35 = ((x1057<=(x1058<=x1059))<<x1060);

	if (t35 != 128) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x1073 = 14U;
	uint8_t x1074 = 0U;
	volatile int16_t x1075 = -1;
	static uint8_t x1076 = 1U;
	static volatile int32_t t36 = -503;

	t36 = ((x1073<=(x1074<=x1075))<<x1076);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x1155 = 12;
	uint16_t x1156 = 2U;
	volatile int32_t t37 = -1;

	t37 = ((x1153<=(x1154<=x1155))<<x1156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x1189 = 2961073365994300057LLU;
	int8_t x1190 = INT8_MIN;
	volatile int32_t x1191 = -1;
	uint32_t x1192 = 11U;
	int32_t t38 = 11;

	t38 = ((x1189<=(x1190<=x1191))<<x1192);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1197 = INT32_MAX;
	int16_t x1198 = INT16_MIN;
	uint32_t x1200 = 7U;
	static int32_t t39 = -46354;

	t39 = ((x1197<=(x1198<=x1199))<<x1200);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x1201 = 111U;
	uint8_t x1204 = 1U;
	int32_t t40 = -370386973;

	t40 = ((x1201<=(x1202<=x1203))<<x1204);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x1261 = INT64_MIN;
	uint16_t x1264 = 2U;

	t41 = ((x1261<=(x1262<=x1263))<<x1264);

	if (t41 != 4) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x1269 = UINT64_MAX;
	static uint64_t x1271 = 812LLU;
	volatile int32_t t42 = 726462;

	t42 = ((x1269<=(x1270<=x1271))<<x1272);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x1301 = 536U;
	int16_t x1302 = INT16_MIN;
	int8_t x1303 = INT8_MIN;
	static volatile uint16_t x1304 = 4U;
	int32_t t43 = -71713665;

	t43 = ((x1301<=(x1302<=x1303))<<x1304);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x1397 = -6;
	int8_t x1400 = 0;
	static volatile int32_t t44 = 1;

	t44 = ((x1397<=(x1398<=x1399))<<x1400);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x1447 = INT16_MIN;
	int8_t x1448 = 0;
	volatile int32_t t45 = -57;

	t45 = ((x1445<=(x1446<=x1447))<<x1448);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x1449 = UINT64_MAX;
	static int32_t x1452 = 4;
	static int32_t t46 = -484095;

	t46 = ((x1449<=(x1450<=x1451))<<x1452);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x1473 = 837U;
	int32_t x1474 = INT32_MAX;
	int8_t x1475 = -42;
	int16_t x1476 = 3;
	int32_t t47 = 1;

	t47 = ((x1473<=(x1474<=x1475))<<x1476);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x1529 = INT8_MAX;
	static uint32_t x1530 = 588830708U;
	int64_t x1531 = -8506114192LL;
	int16_t x1532 = 1;
	int32_t t48 = 943879658;

	t48 = ((x1529<=(x1530<=x1531))<<x1532);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x1557 = -2896849186766863860LL;
	static int16_t x1558 = INT16_MIN;
	int32_t x1559 = -811889;
	static int16_t x1560 = 14;
	int32_t t49 = 3857426;

	t49 = ((x1557<=(x1558<=x1559))<<x1560);

	if (t49 != 16384) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x1577 = UINT64_MAX;
	volatile int32_t x1578 = INT32_MIN;
	static uint8_t x1580 = 7U;
	int32_t t50 = -441326368;

	t50 = ((x1577<=(x1578<=x1579))<<x1580);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x1606 = INT32_MIN;
	volatile uint32_t x1607 = 17U;
	int8_t x1608 = 0;

	t51 = ((x1605<=(x1606<=x1607))<<x1608);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x1637 = 12511825927389LL;
	static int8_t x1639 = -6;
	static uint16_t x1640 = 12U;

	t52 = ((x1637<=(x1638<=x1639))<<x1640);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x1645 = -1;
	int16_t x1646 = 1;
	int8_t x1647 = INT8_MAX;
	static int32_t t53 = -226705;

	t53 = ((x1645<=(x1646<=x1647))<<x1648);

	if (t53 != 524288) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x1665 = INT16_MAX;
	int32_t x1666 = 736359;
	uint64_t x1667 = UINT64_MAX;
	uint8_t x1668 = 9U;

	t54 = ((x1665<=(x1666<=x1667))<<x1668);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x1745 = 6324U;
	int64_t x1746 = INT64_MAX;
	volatile int32_t t55 = 119;

	t55 = ((x1745<=(x1746<=x1747))<<x1748);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x1753 = INT32_MIN;
	uint64_t x1754 = 5966LLU;

	t56 = ((x1753<=(x1754<=x1755))<<x1756);

	if (t56 != 262144) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x1757 = -1;
	uint64_t x1758 = 279845554574105711LLU;
	static int64_t x1759 = INT64_MIN;
	uint8_t x1760 = 17U;
	static volatile int32_t t57 = -1484246;

	t57 = ((x1757<=(x1758<=x1759))<<x1760);

	if (t57 != 131072) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x1813 = INT16_MIN;
	volatile int8_t x1814 = 1;
	static int32_t x1815 = INT32_MAX;
	static int16_t x1816 = 10;
	volatile int32_t t58 = 2463690;

	t58 = ((x1813<=(x1814<=x1815))<<x1816);

	if (t58 != 1024) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x1829 = INT16_MIN;
	static int8_t x1830 = 1;
	int32_t x1831 = INT32_MIN;
	int8_t x1832 = 3;
	volatile int32_t t59 = 20;

	t59 = ((x1829<=(x1830<=x1831))<<x1832);

	if (t59 != 8) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x1857 = -1;
	static uint32_t x1858 = 827043841U;
	uint64_t x1860 = 0LLU;
	volatile int32_t t60 = -13;

	t60 = ((x1857<=(x1858<=x1859))<<x1860);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x1921 = 85;
	uint64_t x1922 = 764582251580765LLU;
	int16_t x1923 = 0;
	int32_t t61 = -124;

	t61 = ((x1921<=(x1922<=x1923))<<x1924);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x1957 = 17U;
	uint16_t x1959 = 30U;
	static volatile int32_t t62 = -4677;

	t62 = ((x1957<=(x1958<=x1959))<<x1960);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint64_t x1982 = 7686129LLU;
	int16_t x1983 = 1020;

	t63 = ((x1981<=(x1982<=x1983))<<x1984);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x2024 = 0U;
	int32_t t64 = -3;

	t64 = ((x2021<=(x2022<=x2023))<<x2024);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x2049 = -1;
	uint32_t x2050 = UINT32_MAX;
	static volatile uint64_t x2051 = 17LLU;
	volatile uint16_t x2052 = 19U;

	t65 = ((x2049<=(x2050<=x2051))<<x2052);

	if (t65 != 524288) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x2053 = UINT16_MAX;
	int8_t x2054 = -1;
	static uint32_t x2056 = 1U;
	volatile int32_t t66 = -3;

	t66 = ((x2053<=(x2054<=x2055))<<x2056);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x2057 = INT8_MIN;
	int16_t x2058 = 342;
	volatile uint16_t x2059 = UINT16_MAX;
	volatile int32_t t67 = 83;

	t67 = ((x2057<=(x2058<=x2059))<<x2060);

	if (t67 != 8192) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x2101 = -1LL;
	int16_t x2102 = 126;
	uint16_t x2103 = 352U;
	int8_t x2104 = 1;
	int32_t t68 = 691;

	t68 = ((x2101<=(x2102<=x2103))<<x2104);

	if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x2274 = -2;
	static uint16_t x2275 = 14784U;
	volatile uint8_t x2276 = 1U;
	static volatile int32_t t69 = -7223;

	t69 = ((x2273<=(x2274<=x2275))<<x2276);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x2361 = 61625689U;
	int16_t x2362 = INT16_MAX;
	volatile int8_t x2364 = 2;
	volatile int32_t t70 = 66676;

	t70 = ((x2361<=(x2362<=x2363))<<x2364);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x2381 = 13U;
	static volatile int8_t x2382 = -1;
	int8_t x2383 = -1;
	int32_t t71 = -123422741;

	t71 = ((x2381<=(x2382<=x2383))<<x2384);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x2421 = UINT64_MAX;
	static int16_t x2423 = INT16_MIN;

	t72 = ((x2421<=(x2422<=x2423))<<x2424);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x2441 = 1;
	volatile int8_t x2443 = -1;
	static int16_t x2444 = 9;
	int32_t t73 = -42367201;

	t73 = ((x2441<=(x2442<=x2443))<<x2444);

	if (t73 != 512) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x2457 = UINT64_MAX;
	uint64_t x2459 = UINT64_MAX;
	int16_t x2460 = 0;

	t74 = ((x2457<=(x2458<=x2459))<<x2460);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x2489 = INT64_MAX;
	static uint64_t x2490 = UINT64_MAX;
	static int32_t x2492 = 6;
	int32_t t75 = -1;

	t75 = ((x2489<=(x2490<=x2491))<<x2492);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x2526 = 0;
	volatile int64_t x2527 = -1LL;
	static volatile int16_t x2528 = 7;

	t76 = ((x2525<=(x2526<=x2527))<<x2528);

	if (t76 != 128) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x2533 = UINT32_MAX;
	static uint8_t x2536 = 17U;
	static int32_t t77 = -1;

	t77 = ((x2533<=(x2534<=x2535))<<x2536);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x2545 = 1;
	volatile uint16_t x2547 = 3876U;
	static volatile int32_t t78 = 1774240;

	t78 = ((x2545<=(x2546<=x2547))<<x2548);

	if (t78 != 64) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x2633 = 1U;
	int16_t x2634 = -2767;
	static uint32_t x2635 = 133U;
	uint8_t x2636 = 9U;

	t79 = ((x2633<=(x2634<=x2635))<<x2636);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x2646 = INT8_MIN;
	static uint8_t x2648 = 0U;
	static int32_t t80 = -25;

	t80 = ((x2645<=(x2646<=x2647))<<x2648);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x2673 = 1738956U;
	int16_t x2675 = 0;

	t81 = ((x2673<=(x2674<=x2675))<<x2676);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x2677 = -735;
	static int64_t x2678 = INT64_MIN;
	int8_t x2679 = INT8_MIN;
	int32_t t82 = -922;

	t82 = ((x2677<=(x2678<=x2679))<<x2680);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x2729 = -1;
	uint64_t x2731 = 232952942676376LLU;
	int32_t t83 = -233;

	t83 = ((x2729<=(x2730<=x2731))<<x2732);

	if (t83 != 2048) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x2737 = INT64_MAX;
	volatile int32_t x2738 = INT32_MIN;
	int32_t x2739 = INT32_MIN;
	uint8_t x2740 = 2U;
	static volatile int32_t t84 = 244;

	t84 = ((x2737<=(x2738<=x2739))<<x2740);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int64_t x2757 = -1151689041475765LL;
	int32_t x2758 = INT32_MIN;
	static volatile uint32_t x2759 = 407281U;
	int32_t t85 = 1590428;

	t85 = ((x2757<=(x2758<=x2759))<<x2760);

	if (t85 != 2) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x2761 = 1;
	volatile int16_t x2763 = -1;
	volatile uint8_t x2764 = 2U;
	volatile int32_t t86 = -1524789;

	t86 = ((x2761<=(x2762<=x2763))<<x2764);

	if (t86 != 4) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x2769 = UINT16_MAX;
	static volatile uint16_t x2770 = 29458U;
	int16_t x2771 = 50;
	volatile uint8_t x2772 = 19U;

	t87 = ((x2769<=(x2770<=x2771))<<x2772);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x2786 = -24;
	int32_t x2787 = INT32_MAX;
	volatile uint16_t x2788 = 1U;

	t88 = ((x2785<=(x2786<=x2787))<<x2788);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x2805 = INT8_MIN;
	int32_t x2807 = INT32_MAX;
	volatile int32_t t89 = 15641;

	t89 = ((x2805<=(x2806<=x2807))<<x2808);

	if (t89 != 2) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x2826 = -1;
	int32_t x2827 = 1;
	volatile uint8_t x2828 = 11U;

	t90 = ((x2825<=(x2826<=x2827))<<x2828);

	if (t90 != 2048) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x2845 = INT16_MIN;
	int16_t x2846 = INT16_MAX;
	int16_t x2847 = INT16_MIN;
	uint8_t x2848 = 10U;
	int32_t t91 = 2425828;

	t91 = ((x2845<=(x2846<=x2847))<<x2848);

	if (t91 != 1024) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x2861 = UINT8_MAX;
	int64_t x2862 = INT64_MIN;

	t92 = ((x2861<=(x2862<=x2863))<<x2864);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x2884 = 3;
	volatile int32_t t93 = 186;

	t93 = ((x2881<=(x2882<=x2883))<<x2884);

	if (t93 != 8) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x2925 = 317544266408LLU;
	int8_t x2926 = -30;
	int16_t x2927 = INT16_MIN;
	static uint8_t x2928 = 1U;
	int32_t t94 = -1000;

	t94 = ((x2925<=(x2926<=x2927))<<x2928);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x2957 = 14070U;
	uint8_t x2960 = 15U;
	static int32_t t95 = 182;

	t95 = ((x2957<=(x2958<=x2959))<<x2960);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x2961 = -1;
	static int32_t t96 = -1;

	t96 = ((x2961<=(x2962<=x2963))<<x2964);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int32_t x2969 = -1;
	static volatile uint8_t x2970 = UINT8_MAX;
	uint64_t x2971 = UINT64_MAX;
	static int32_t x2972 = 24;
	volatile int32_t t97 = 423;

	t97 = ((x2969<=(x2970<=x2971))<<x2972);

	if (t97 != 16777216) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x3001 = UINT32_MAX;
	int8_t x3002 = INT8_MAX;
	int16_t x3003 = INT16_MIN;

	t98 = ((x3001<=(x3002<=x3003))<<x3004);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x3057 = UINT16_MAX;
	int8_t x3058 = -2;
	static int16_t x3059 = 144;
	static uint8_t x3060 = 26U;

	t99 = ((x3057<=(x3058<=x3059))<<x3060);

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

