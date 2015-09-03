#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 66453237;
volatile int8_t x109 = INT8_MIN;
volatile int32_t x111 = 25359786;
static volatile uint16_t x135 = 6528U;
volatile uint64_t x274 = UINT64_MAX;
int8_t x275 = INT8_MIN;
volatile uint8_t x340 = 2U;
uint8_t x373 = 0U;
int32_t x375 = 1605;
int64_t x378 = INT64_MIN;
uint8_t x380 = 28U;
volatile int64_t x414 = -14953LL;
int16_t x415 = -1;
static int32_t x445 = INT32_MAX;
int32_t x447 = -1;
uint8_t x448 = 0U;
static volatile int32_t t13 = 273;
static int8_t x472 = 0;
uint32_t x505 = UINT32_MAX;
int32_t x506 = -13251;
static int16_t x517 = INT16_MIN;
uint8_t x523 = 47U;
volatile int32_t t18 = -5025416;
uint8_t x616 = 1U;
volatile int32_t t22 = -956676165;
int64_t x675 = -1LL;
static volatile int8_t x679 = -2;
int64_t x698 = 24229LL;
uint16_t x751 = 811U;
int16_t x754 = -1;
int32_t t28 = -748;
uint8_t x805 = UINT8_MAX;
static int32_t x814 = -1;
volatile int8_t x831 = -2;
volatile int16_t x859 = -1;
uint32_t x866 = 783U;
volatile int32_t t33 = -163;
uint32_t x880 = 5U;
uint16_t x914 = 653U;
int16_t x915 = INT16_MIN;
static int16_t x927 = INT16_MIN;
volatile int32_t t36 = 0;
uint64_t x935 = 11137825331653LLU;
int32_t t39 = 0;
volatile int32_t t41 = 126;
int32_t t42 = -1;
uint32_t x1153 = UINT32_MAX;
static int16_t x1257 = 9;
int32_t t45 = 108443;
uint16_t x1279 = UINT16_MAX;
int32_t t46 = -33244283;
static volatile uint8_t x1357 = 5U;
static uint8_t x1360 = 14U;
static volatile int32_t x1399 = -1;
int8_t x1456 = 5;
volatile int32_t t51 = -32824454;
uint64_t x1515 = 2037035190911594322LLU;
int8_t x1656 = 2;
volatile int32_t t55 = -854673;
uint32_t x1665 = 10U;
static uint16_t x1666 = 5U;
int8_t x1688 = 30;
volatile int32_t t57 = 606217;
int64_t x1799 = -1LL;
volatile uint64_t x1869 = 33700494961LLU;
volatile int32_t t59 = -77228394;
int64_t x1923 = 3434786752071565005LL;
int8_t x1933 = INT8_MAX;
int64_t x1935 = INT64_MAX;
uint32_t x1945 = 976U;
volatile int32_t x1946 = INT32_MAX;
static volatile uint16_t x1947 = 30434U;
volatile uint8_t x1948 = 21U;
int8_t x2082 = INT8_MIN;
static int64_t x2130 = INT64_MIN;
int32_t t66 = -95;
volatile int64_t x2158 = INT64_MIN;
static uint32_t x2160 = 1U;
volatile int32_t t67 = 14089;
uint16_t x2176 = 13U;
static volatile int8_t x2177 = -37;
int8_t x2180 = 2;
int32_t t70 = 273271;
static int8_t x2219 = -5;
uint8_t x2220 = 9U;
int8_t x2227 = 10;
int16_t x2228 = 0;
uint64_t x2233 = 69713LLU;
volatile int16_t x2234 = -1;
static volatile int32_t t73 = 52;
static int64_t x2298 = INT64_MIN;
int32_t t74 = 849727145;
static uint32_t x2340 = 22U;
int32_t t76 = 683580;
uint64_t x2354 = 5012977801875446LLU;
int64_t x2378 = -294722LL;
static int64_t x2382 = -3109294466159128LL;
volatile uint8_t x2384 = 9U;
volatile int32_t x2495 = 64661;
static uint16_t x2604 = 1U;
int32_t x2638 = -15637;
int8_t x2640 = 26;
int32_t t84 = -417194064;
int8_t x2650 = -1;
int16_t x2672 = 3;
static uint64_t x2743 = 1862170LLU;
int16_t x2762 = 1148;
uint32_t x2797 = UINT32_MAX;
uint16_t x2832 = 4U;
volatile int32_t t95 = 108;
volatile int32_t x2899 = INT32_MAX;


void f0(void) {
	static int8_t x81 = 2;
	int32_t x82 = -335;
	int64_t x83 = -3530717667986LL;
	uint16_t x84 = 29U;

	t0 = ((x81<=(x82/x83))>>x84);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x110 = 1U;
	volatile uint16_t x112 = 28U;
	static volatile int32_t t1 = -1;

	t1 = ((x109<=(x110/x111))>>x112);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x133 = -134;
	uint16_t x134 = 0U;
	volatile int8_t x136 = 8;
	volatile int32_t t2 = -750;

	t2 = ((x133<=(x134/x135))>>x136);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x165 = INT8_MIN;
	int16_t x166 = -966;
	uint8_t x167 = UINT8_MAX;
	uint8_t x168 = 0U;
	volatile int32_t t3 = 109907;

	t3 = ((x165<=(x166/x167))>>x168);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x169 = INT64_MIN;
	volatile int8_t x170 = -1;
	static volatile int64_t x171 = INT64_MIN;
	uint16_t x172 = 9U;
	volatile int32_t t4 = -1;

	t4 = ((x169<=(x170/x171))>>x172);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x221 = INT64_MAX;
	int16_t x222 = INT16_MIN;
	uint32_t x223 = 2U;
	volatile int16_t x224 = 1;
	static int32_t t5 = -2979;

	t5 = ((x221<=(x222/x223))>>x224);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x273 = 44U;
	static uint8_t x276 = 3U;
	int32_t t6 = 582527516;

	t6 = ((x273<=(x274/x275))>>x276);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x305 = 4;
	static volatile uint64_t x306 = 41689705273341LLU;
	static int8_t x307 = INT8_MIN;
	static uint8_t x308 = 2U;
	volatile int32_t t7 = -880340414;

	t7 = ((x305<=(x306/x307))>>x308);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x337 = INT16_MIN;
	int64_t x338 = -8683358743127715LL;
	int8_t x339 = INT8_MAX;
	int32_t t8 = 3101;

	t8 = ((x337<=(x338/x339))>>x340);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x374 = 21U;
	static int8_t x376 = 15;
	volatile int32_t t9 = -151109427;

	t9 = ((x373<=(x374/x375))>>x376);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x377 = UINT32_MAX;
	int64_t x379 = INT64_MIN;
	int32_t t10 = -6457360;

	t10 = ((x377<=(x378/x379))>>x380);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x413 = 39U;
	volatile uint8_t x416 = 20U;
	static volatile int32_t t11 = 896142;

	t11 = ((x413<=(x414/x415))>>x416);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x446 = INT64_MAX;
	int32_t t12 = 38883651;

	t12 = ((x445<=(x446/x447))>>x448);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x453 = 1;
	int8_t x454 = INT8_MAX;
	static uint16_t x455 = 1U;
	static volatile int8_t x456 = 0;

	t13 = ((x453<=(x454/x455))>>x456);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x457 = -1LL;
	int32_t x458 = 1536190;
	uint8_t x459 = 2U;
	uint16_t x460 = 8U;
	int32_t t14 = -667650;

	t14 = ((x457<=(x458/x459))>>x460);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x469 = UINT32_MAX;
	uint16_t x470 = 1958U;
	volatile uint8_t x471 = 56U;
	static volatile int32_t t15 = 11753;

	t15 = ((x469<=(x470/x471))>>x472);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x507 = UINT32_MAX;
	uint16_t x508 = 9U;
	volatile int32_t t16 = 146;

	t16 = ((x505<=(x506/x507))>>x508);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x518 = -1;
	uint8_t x519 = 4U;
	uint16_t x520 = 1U;
	volatile int32_t t17 = 306471582;

	t17 = ((x517<=(x518/x519))>>x520);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x521 = 6U;
	uint16_t x522 = 11U;
	int16_t x524 = 0;

	t18 = ((x521<=(x522/x523))>>x524);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x533 = 987;
	static uint32_t x534 = 3U;
	uint8_t x535 = UINT8_MAX;
	static uint8_t x536 = 23U;
	volatile int32_t t19 = 1;

	t19 = ((x533<=(x534/x535))>>x536);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x537 = -24;
	int64_t x538 = INT64_MAX;
	volatile int16_t x539 = INT16_MIN;
	int8_t x540 = 4;
	int32_t t20 = -2014458;

	t20 = ((x537<=(x538/x539))>>x540);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x613 = -1;
	uint64_t x614 = UINT64_MAX;
	int32_t x615 = 27683;
	static int32_t t21 = 70257;

	t21 = ((x613<=(x614/x615))>>x616);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x629 = -1;
	int16_t x630 = INT16_MAX;
	volatile uint16_t x631 = 12771U;
	static int16_t x632 = 1;

	t22 = ((x629<=(x630/x631))>>x632);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x673 = UINT16_MAX;
	static int16_t x674 = INT16_MIN;
	int16_t x676 = 2;
	volatile int32_t t23 = 1;

	t23 = ((x673<=(x674/x675))>>x676);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x677 = INT16_MIN;
	int64_t x678 = 42822058481665032LL;
	volatile uint8_t x680 = 20U;
	int32_t t24 = -80524911;

	t24 = ((x677<=(x678/x679))>>x680);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x697 = 9U;
	uint16_t x699 = 404U;
	static uint8_t x700 = 30U;
	static volatile int32_t t25 = -2492;

	t25 = ((x697<=(x698/x699))>>x700);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x749 = 454846728LL;
	int8_t x750 = 0;
	uint16_t x752 = 5U;
	volatile int32_t t26 = 124098;

	t26 = ((x749<=(x750/x751))>>x752);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x753 = INT64_MIN;
	int8_t x755 = -41;
	int64_t x756 = 1LL;
	volatile int32_t t27 = 184742;

	t27 = ((x753<=(x754/x755))>>x756);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x781 = 13343908744695LLU;
	static uint64_t x782 = 7532195023LLU;
	uint64_t x783 = 22644485800LLU;
	uint16_t x784 = 18U;

	t28 = ((x781<=(x782/x783))>>x784);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x806 = 13074U;
	volatile uint64_t x807 = 18561412808088LLU;
	static int8_t x808 = 1;
	int32_t t29 = 62923125;

	t29 = ((x805<=(x806/x807))>>x808);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x813 = -1LL;
	int8_t x815 = INT8_MIN;
	volatile uint8_t x816 = 1U;
	volatile int32_t t30 = -12;

	t30 = ((x813<=(x814/x815))>>x816);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x829 = INT8_MIN;
	int16_t x830 = INT16_MAX;
	uint8_t x832 = 2U;
	volatile int32_t t31 = 48179;

	t31 = ((x829<=(x830/x831))>>x832);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x857 = INT8_MAX;
	int8_t x858 = 21;
	volatile uint16_t x860 = 1U;
	int32_t t32 = -1019832;

	t32 = ((x857<=(x858/x859))>>x860);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x865 = INT64_MAX;
	static volatile int8_t x867 = INT8_MIN;
	int64_t x868 = 28LL;

	t33 = ((x865<=(x866/x867))>>x868);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x877 = -1;
	volatile uint64_t x878 = 21249893358LLU;
	volatile int32_t x879 = 30090;
	static int32_t t34 = 117;

	t34 = ((x877<=(x878/x879))>>x880);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x913 = INT32_MIN;
	int8_t x916 = 1;
	volatile int32_t t35 = -174;

	t35 = ((x913<=(x914/x915))>>x916);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x925 = 715;
	volatile uint32_t x926 = 661U;
	volatile int32_t x928 = 0;

	t36 = ((x925<=(x926/x927))>>x928);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x933 = 11;
	int8_t x934 = -1;
	int8_t x936 = 12;
	int32_t t37 = 587755;

	t37 = ((x933<=(x934/x935))>>x936);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x989 = 21638560931185420LL;
	uint32_t x990 = 12U;
	int8_t x991 = INT8_MIN;
	static volatile uint8_t x992 = 0U;
	static int32_t t38 = -617444752;

	t38 = ((x989<=(x990/x991))>>x992);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x1017 = 0U;
	int16_t x1018 = 777;
	volatile int8_t x1019 = INT8_MIN;
	uint16_t x1020 = 1U;

	t39 = ((x1017<=(x1018/x1019))>>x1020);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x1025 = UINT64_MAX;
	int16_t x1026 = -1;
	volatile int16_t x1027 = INT16_MIN;
	int8_t x1028 = 6;
	static int32_t t40 = 1254795;

	t40 = ((x1025<=(x1026/x1027))>>x1028);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x1033 = 2594LLU;
	uint8_t x1034 = 5U;
	static int8_t x1035 = INT8_MIN;
	uint8_t x1036 = 28U;

	t41 = ((x1033<=(x1034/x1035))>>x1036);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x1041 = INT64_MAX;
	int8_t x1042 = -1;
	static int32_t x1043 = INT32_MAX;
	static uint32_t x1044 = 0U;

	t42 = ((x1041<=(x1042/x1043))>>x1044);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x1081 = -1;
	int16_t x1082 = INT16_MIN;
	volatile int16_t x1083 = -40;
	uint16_t x1084 = 18U;
	int32_t t43 = 1;

	t43 = ((x1081<=(x1082/x1083))>>x1084);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x1154 = 18026111175074571LLU;
	static int32_t x1155 = -3660;
	volatile uint16_t x1156 = 0U;
	static volatile int32_t t44 = -56671022;

	t44 = ((x1153<=(x1154/x1155))>>x1156);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x1258 = UINT8_MAX;
	int16_t x1259 = -1;
	uint8_t x1260 = 9U;

	t45 = ((x1257<=(x1258/x1259))>>x1260);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x1277 = 37036756LLU;
	volatile int32_t x1278 = INT32_MIN;
	uint32_t x1280 = 29U;

	t46 = ((x1277<=(x1278/x1279))>>x1280);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x1341 = INT32_MIN;
	static int32_t x1342 = INT32_MIN;
	uint32_t x1343 = 61539031U;
	uint64_t x1344 = 0LLU;
	static int32_t t47 = -5150;

	t47 = ((x1341<=(x1342/x1343))>>x1344);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x1358 = UINT16_MAX;
	int16_t x1359 = INT16_MIN;
	int32_t t48 = -33992669;

	t48 = ((x1357<=(x1358/x1359))>>x1360);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x1397 = 7U;
	volatile uint64_t x1398 = 2894822LLU;
	int8_t x1400 = 0;
	volatile int32_t t49 = 10718341;

	t49 = ((x1397<=(x1398/x1399))>>x1400);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x1405 = INT64_MIN;
	static int64_t x1406 = 327465LL;
	uint64_t x1407 = 3949312LLU;
	int8_t x1408 = 7;
	volatile int32_t t50 = 492;

	t50 = ((x1405<=(x1406/x1407))>>x1408);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x1453 = UINT16_MAX;
	volatile int8_t x1454 = 0;
	static int64_t x1455 = -1LL;

	t51 = ((x1453<=(x1454/x1455))>>x1456);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x1493 = 1284662334937LLU;
	int8_t x1494 = INT8_MAX;
	int32_t x1495 = INT32_MIN;
	static int8_t x1496 = 2;
	static volatile int32_t t52 = -179;

	t52 = ((x1493<=(x1494/x1495))>>x1496);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x1513 = INT32_MAX;
	volatile int8_t x1514 = INT8_MAX;
	int8_t x1516 = 3;
	volatile int32_t t53 = -351517221;

	t53 = ((x1513<=(x1514/x1515))>>x1516);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x1517 = INT32_MAX;
	volatile int16_t x1518 = INT16_MIN;
	volatile int16_t x1519 = -1;
	int16_t x1520 = 1;
	static int32_t t54 = -30969;

	t54 = ((x1517<=(x1518/x1519))>>x1520);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x1653 = -522;
	int64_t x1654 = INT64_MIN;
	volatile int64_t x1655 = -10LL;

	t55 = ((x1653<=(x1654/x1655))>>x1656);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x1667 = INT64_MAX;
	uint8_t x1668 = 1U;
	int32_t t56 = -12593131;

	t56 = ((x1665<=(x1666/x1667))>>x1668);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x1685 = UINT16_MAX;
	int64_t x1686 = INT64_MAX;
	uint16_t x1687 = 11364U;

	t57 = ((x1685<=(x1686/x1687))>>x1688);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x1797 = INT32_MAX;
	volatile uint64_t x1798 = UINT64_MAX;
	uint8_t x1800 = 1U;
	int32_t t58 = 164;

	t58 = ((x1797<=(x1798/x1799))>>x1800);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x1870 = 5461118U;
	static int64_t x1871 = -12860940951179891LL;
	volatile uint16_t x1872 = 5U;

	t59 = ((x1869<=(x1870/x1871))>>x1872);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x1921 = -1LL;
	uint32_t x1922 = UINT32_MAX;
	int32_t x1924 = 0;
	static int32_t t60 = -744090546;

	t60 = ((x1921<=(x1922/x1923))>>x1924);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x1934 = 3;
	uint16_t x1936 = 3U;
	int32_t t61 = -21346386;

	t61 = ((x1933<=(x1934/x1935))>>x1936);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t t62 = -1;

	t62 = ((x1945<=(x1946/x1947))>>x1948);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x1957 = INT32_MIN;
	uint64_t x1958 = UINT64_MAX;
	int32_t x1959 = -1;
	int64_t x1960 = 0LL;
	int32_t t63 = 1;

	t63 = ((x1957<=(x1958/x1959))>>x1960);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x2081 = UINT64_MAX;
	uint64_t x2083 = UINT64_MAX;
	volatile int64_t x2084 = 6LL;
	int32_t t64 = 109175442;

	t64 = ((x2081<=(x2082/x2083))>>x2084);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x2121 = 358U;
	uint16_t x2122 = 4705U;
	uint32_t x2123 = UINT32_MAX;
	uint8_t x2124 = 2U;
	volatile int32_t t65 = 4;

	t65 = ((x2121<=(x2122/x2123))>>x2124);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x2129 = 331;
	uint8_t x2131 = 63U;
	static uint16_t x2132 = 22U;

	t66 = ((x2129<=(x2130/x2131))>>x2132);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x2157 = -11322429LL;
	int64_t x2159 = 4LL;

	t67 = ((x2157<=(x2158/x2159))>>x2160);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint32_t x2173 = 256313180U;
	int8_t x2174 = INT8_MIN;
	static int64_t x2175 = INT64_MAX;
	int32_t t68 = -2;

	t68 = ((x2173<=(x2174/x2175))>>x2176);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x2178 = INT8_MIN;
	int8_t x2179 = INT8_MIN;
	int32_t t69 = 28431;

	t69 = ((x2177<=(x2178/x2179))>>x2180);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x2197 = 1587U;
	int8_t x2198 = INT8_MIN;
	volatile int64_t x2199 = -3605LL;
	int16_t x2200 = 0;

	t70 = ((x2197<=(x2198/x2199))>>x2200);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x2217 = INT64_MIN;
	volatile int64_t x2218 = -1LL;
	int32_t t71 = -51;

	t71 = ((x2217<=(x2218/x2219))>>x2220);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x2225 = INT16_MAX;
	int64_t x2226 = INT64_MIN;
	volatile int32_t t72 = -20326;

	t72 = ((x2225<=(x2226/x2227))>>x2228);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x2235 = UINT32_MAX;
	static uint16_t x2236 = 1U;

	t73 = ((x2233<=(x2234/x2235))>>x2236);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x2297 = 3135348U;
	static int64_t x2299 = INT64_MIN;
	static volatile uint8_t x2300 = 0U;

	t74 = ((x2297<=(x2298/x2299))>>x2300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x2337 = -1;
	static int64_t x2338 = 89638735177670LL;
	static int32_t x2339 = 30463;
	int32_t t75 = 47638;

	t75 = ((x2337<=(x2338/x2339))>>x2340);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x2349 = INT16_MIN;
	volatile uint16_t x2350 = 1880U;
	int8_t x2351 = INT8_MAX;
	static volatile uint8_t x2352 = 8U;

	t76 = ((x2349<=(x2350/x2351))>>x2352);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x2353 = INT16_MAX;
	int64_t x2355 = INT64_MIN;
	int8_t x2356 = 1;
	int32_t t77 = -113;

	t77 = ((x2353<=(x2354/x2355))>>x2356);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x2377 = -1LL;
	volatile int32_t x2379 = INT32_MIN;
	static volatile int8_t x2380 = 7;
	int32_t t78 = -5103;

	t78 = ((x2377<=(x2378/x2379))>>x2380);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x2381 = INT64_MIN;
	static volatile uint64_t x2383 = 9652905LLU;
	int32_t t79 = 40;

	t79 = ((x2381<=(x2382/x2383))>>x2384);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x2421 = 0;
	volatile int32_t x2422 = -1;
	static int32_t x2423 = -1;
	int8_t x2424 = 1;
	int32_t t80 = -1;

	t80 = ((x2421<=(x2422/x2423))>>x2424);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x2493 = 12310U;
	int32_t x2494 = 1453308;
	volatile uint8_t x2496 = 13U;
	int32_t t81 = -1618;

	t81 = ((x2493<=(x2494/x2495))>>x2496);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x2589 = UINT8_MAX;
	int8_t x2590 = INT8_MIN;
	static uint8_t x2591 = UINT8_MAX;
	static volatile int16_t x2592 = 0;
	static int32_t t82 = 5;

	t82 = ((x2589<=(x2590/x2591))>>x2592);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x2601 = 23508U;
	int32_t x2602 = INT32_MAX;
	static int32_t x2603 = -1;
	static volatile int32_t t83 = 1560598;

	t83 = ((x2601<=(x2602/x2603))>>x2604);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x2637 = 25505749128LL;
	static int64_t x2639 = -3973557824707255LL;

	t84 = ((x2637<=(x2638/x2639))>>x2640);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x2649 = INT16_MAX;
	volatile int32_t x2651 = 137015;
	volatile int8_t x2652 = 2;
	volatile int32_t t85 = -1162018;

	t85 = ((x2649<=(x2650/x2651))>>x2652);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x2669 = 2789U;
	int64_t x2670 = INT64_MAX;
	int64_t x2671 = INT64_MIN;
	int32_t t86 = 108115466;

	t86 = ((x2669<=(x2670/x2671))>>x2672);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x2693 = INT32_MAX;
	static volatile int64_t x2694 = -1LL;
	int16_t x2695 = INT16_MIN;
	static uint32_t x2696 = 1U;
	int32_t t87 = 1249;

	t87 = ((x2693<=(x2694/x2695))>>x2696);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x2721 = INT8_MIN;
	int64_t x2722 = INT64_MIN;
	int16_t x2723 = -45;
	uint16_t x2724 = 3U;
	int32_t t88 = -2;

	t88 = ((x2721<=(x2722/x2723))>>x2724);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x2741 = -27;
	static volatile uint16_t x2742 = 4083U;
	uint8_t x2744 = 1U;
	int32_t t89 = -434;

	t89 = ((x2741<=(x2742/x2743))>>x2744);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x2761 = INT16_MIN;
	int32_t x2763 = INT32_MIN;
	static uint64_t x2764 = 27LLU;
	int32_t t90 = -82297;

	t90 = ((x2761<=(x2762/x2763))>>x2764);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x2798 = INT32_MIN;
	int8_t x2799 = 2;
	int8_t x2800 = 1;
	int32_t t91 = 7025;

	t91 = ((x2797<=(x2798/x2799))>>x2800);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x2817 = -1LL;
	uint64_t x2818 = UINT64_MAX;
	int64_t x2819 = INT64_MIN;
	uint8_t x2820 = 15U;
	volatile int32_t t92 = -14629974;

	t92 = ((x2817<=(x2818/x2819))>>x2820);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x2829 = 118359U;
	int32_t x2830 = -1;
	int64_t x2831 = 108LL;
	volatile int32_t t93 = 707801;

	t93 = ((x2829<=(x2830/x2831))>>x2832);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x2837 = UINT8_MAX;
	volatile int16_t x2838 = -5;
	int8_t x2839 = INT8_MIN;
	uint8_t x2840 = 10U;
	int32_t t94 = 14782573;

	t94 = ((x2837<=(x2838/x2839))>>x2840);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x2865 = -968;
	int64_t x2866 = INT64_MIN;
	int16_t x2867 = INT16_MAX;
	volatile uint8_t x2868 = 3U;

	t95 = ((x2865<=(x2866/x2867))>>x2868);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x2897 = 239;
	int8_t x2898 = -1;
	uint64_t x2900 = 10LLU;
	int32_t t96 = 54460;

	t96 = ((x2897<=(x2898/x2899))>>x2900);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x2901 = INT64_MAX;
	int64_t x2902 = -322323624030254LL;
	static volatile uint32_t x2903 = UINT32_MAX;
	volatile int8_t x2904 = 31;
	volatile int32_t t97 = 1968076;

	t97 = ((x2901<=(x2902/x2903))>>x2904);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x2953 = -1;
	int8_t x2954 = INT8_MIN;
	static int8_t x2955 = 45;
	static uint8_t x2956 = 26U;
	volatile int32_t t98 = -1526789;

	t98 = ((x2953<=(x2954/x2955))>>x2956);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x2973 = INT32_MIN;
	uint8_t x2974 = 6U;
	volatile int16_t x2975 = -31;
	static uint8_t x2976 = 27U;
	int32_t t99 = -1137;

	t99 = ((x2973<=(x2974/x2975))>>x2976);

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

