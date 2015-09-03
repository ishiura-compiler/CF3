#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x74 = -22815038;
volatile uint32_t x77 = 886U;
static uint16_t x113 = 8U;
uint32_t x114 = UINT32_MAX;
int32_t t4 = -295011;
int64_t x159 = 30LL;
uint32_t x268 = 3U;
int32_t t7 = 0;
int32_t t10 = 1260739;
int64_t x497 = INT64_MIN;
static int32_t t12 = 3033385;
static int32_t x547 = 60249388;
int32_t t13 = -442371192;
int16_t x554 = 13884;
uint64_t x574 = 99977808077784LLU;
static int8_t x575 = INT8_MIN;
int32_t t17 = 610820262;
volatile uint8_t x712 = 2U;
volatile uint32_t x797 = 3U;
static uint8_t x798 = 53U;
int8_t x853 = INT8_MIN;
static volatile int32_t t24 = 10474;
int16_t x874 = INT16_MIN;
volatile int16_t x878 = 77;
static volatile int32_t t28 = -598;
static int64_t x905 = INT64_MIN;
uint32_t x906 = 640U;
int32_t t29 = 59716871;
int32_t x973 = INT32_MIN;
uint64_t x975 = 245590463856573661LLU;
uint64_t x1006 = 581094566211230LLU;
int32_t t34 = 301;
uint8_t x1304 = 0U;
int32_t t37 = -202067407;
int32_t x1371 = INT32_MIN;
static int8_t x1372 = 1;
int32_t t40 = -762416246;
int16_t x1450 = INT16_MIN;
int16_t x1502 = -1;
uint16_t x1503 = 0U;
int16_t x1563 = INT16_MIN;
int32_t x1649 = -1;
uint32_t x1661 = 426U;
int64_t x1669 = -1LL;
uint64_t x1672 = 4LLU;
static int8_t x1702 = 1;
static volatile int32_t x1707 = -1;
volatile int32_t t52 = 1;
uint64_t x1896 = 6LLU;
static int16_t x1929 = INT16_MIN;
uint16_t x1930 = UINT16_MAX;
volatile uint32_t x1935 = 234U;
uint16_t x2065 = 26U;
volatile int8_t x2121 = 1;
int32_t t59 = -324;
static int32_t t60 = 7745;
volatile uint8_t x2248 = 24U;
int16_t x2251 = INT16_MIN;
static volatile int32_t t62 = 1038202621;
volatile uint16_t x2276 = 2U;
static volatile uint16_t x2296 = 0U;
uint32_t x2300 = 3U;
volatile uint64_t x2305 = UINT64_MAX;
uint16_t x2324 = 5U;
static int32_t x2370 = INT32_MIN;
int32_t t71 = -1;
uint16_t x2422 = 6U;
int32_t x2424 = 2;
static int32_t t73 = 340;
volatile uint32_t x2425 = 367530U;
static volatile int8_t x2428 = 27;
static volatile int32_t t74 = 1;
uint8_t x2429 = 80U;
int16_t x2430 = INT16_MIN;
int16_t x2431 = -1;
volatile uint8_t x2496 = 0U;
int32_t t76 = 2055277;
int64_t x2534 = INT64_MIN;
uint64_t x2542 = 82399267358001LLU;
uint32_t x2565 = 307888U;
int64_t x2566 = INT64_MAX;
int32_t t80 = 57;
static volatile int64_t x2569 = 6023876LL;
int32_t x2590 = -1;
volatile int32_t t82 = 114999735;
static int32_t x2625 = INT32_MIN;
int32_t t83 = 7;
static volatile uint64_t x2648 = 1LLU;
volatile int32_t t84 = -23;
int8_t x2757 = -40;
int32_t t85 = -71704;
int64_t x2838 = 503538526337262610LL;
int32_t t87 = -226;
static int8_t x2979 = INT8_MAX;
uint64_t x3048 = 12LLU;
int16_t x3074 = INT16_MIN;
static volatile int32_t t92 = 6713;
int32_t x3095 = INT32_MIN;
uint8_t x3096 = 15U;
volatile int32_t t93 = -102109630;
int16_t x3153 = INT16_MIN;
uint8_t x3181 = 8U;
int32_t t96 = 3323308;
int16_t x3234 = INT16_MIN;
uint32_t x3263 = 9907635U;


void f0(void) {
	int8_t x33 = INT8_MIN;
	int32_t x34 = -11981;
	static uint16_t x35 = 12028U;
	uint32_t x36 = 20U;
	volatile int32_t t0 = 0;

	t0 = ((x33==(x34^x35))>>x36);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x73 = 63U;
	uint16_t x75 = 400U;
	uint8_t x76 = 8U;
	volatile int32_t t1 = 1;

	t1 = ((x73==(x74^x75))>>x76);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x78 = 55;
	uint64_t x79 = 71598965LLU;
	uint16_t x80 = 3U;
	static volatile int32_t t2 = -1964350;

	t2 = ((x77==(x78^x79))>>x80);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x105 = INT8_MAX;
	int32_t x106 = INT32_MAX;
	static int32_t x107 = INT32_MAX;
	volatile uint8_t x108 = 16U;
	static volatile int32_t t3 = -30;

	t3 = ((x105==(x106^x107))>>x108);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x115 = INT32_MIN;
	volatile int8_t x116 = 6;

	t4 = ((x113==(x114^x115))>>x116);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x157 = 26U;
	int16_t x158 = INT16_MIN;
	static int8_t x160 = 0;
	volatile int32_t t5 = 70;

	t5 = ((x157==(x158^x159))>>x160);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x201 = 2306091LLU;
	uint32_t x202 = 1608705243U;
	volatile int16_t x203 = -1;
	volatile int8_t x204 = 29;
	static volatile int32_t t6 = 80929;

	t6 = ((x201==(x202^x203))>>x204);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x265 = INT32_MIN;
	static int32_t x266 = -1;
	int32_t x267 = INT32_MIN;

	t7 = ((x265==(x266^x267))>>x268);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x305 = INT16_MIN;
	int32_t x306 = INT32_MIN;
	int64_t x307 = -1LL;
	uint16_t x308 = 16U;
	volatile int32_t t8 = 1808;

	t8 = ((x305==(x306^x307))>>x308);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x413 = 191;
	int64_t x414 = 49979LL;
	static uint8_t x415 = UINT8_MAX;
	uint8_t x416 = 10U;
	int32_t t9 = -79430;

	t9 = ((x413==(x414^x415))>>x416);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x481 = INT8_MAX;
	uint32_t x482 = 1267U;
	int32_t x483 = INT32_MAX;
	uint8_t x484 = 0U;

	t10 = ((x481==(x482^x483))>>x484);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x498 = 1886;
	int32_t x499 = 1887560;
	int16_t x500 = 0;
	int32_t t11 = 1022858;

	t11 = ((x497==(x498^x499))>>x500);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x513 = INT16_MAX;
	static int16_t x514 = INT16_MIN;
	static volatile int8_t x515 = -27;
	uint16_t x516 = 7U;

	t12 = ((x513==(x514^x515))>>x516);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x545 = 11391739;
	static int16_t x546 = INT16_MAX;
	volatile uint32_t x548 = 0U;

	t13 = ((x545==(x546^x547))>>x548);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int32_t x553 = INT32_MAX;
	static int64_t x555 = -71225LL;
	int8_t x556 = 7;
	int32_t t14 = 2737;

	t14 = ((x553==(x554^x555))>>x556);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x569 = INT8_MAX;
	volatile int64_t x570 = -551150499415861LL;
	int8_t x571 = 1;
	uint16_t x572 = 1U;
	static volatile int32_t t15 = 809245;

	t15 = ((x569==(x570^x571))>>x572);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x573 = INT32_MAX;
	int8_t x576 = 0;
	int32_t t16 = 262718;

	t16 = ((x573==(x574^x575))>>x576);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x609 = INT64_MIN;
	int32_t x610 = 43;
	int32_t x611 = INT32_MIN;
	int16_t x612 = 13;

	t17 = ((x609==(x610^x611))>>x612);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x689 = 91315576;
	static int8_t x690 = INT8_MIN;
	uint32_t x691 = 1280220U;
	int8_t x692 = 0;
	volatile int32_t t18 = -829;

	t18 = ((x689==(x690^x691))>>x692);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x709 = 1691089;
	volatile int64_t x710 = 1593529198083LL;
	uint64_t x711 = UINT64_MAX;
	static volatile int32_t t19 = 467556;

	t19 = ((x709==(x710^x711))>>x712);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x733 = INT16_MAX;
	volatile int8_t x734 = INT8_MIN;
	volatile uint32_t x735 = 21U;
	static uint8_t x736 = 3U;
	int32_t t20 = -369;

	t20 = ((x733==(x734^x735))>>x736);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x781 = -1;
	uint8_t x782 = UINT8_MAX;
	static uint16_t x783 = UINT16_MAX;
	uint8_t x784 = 1U;
	int32_t t21 = 4927;

	t21 = ((x781==(x782^x783))>>x784);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x799 = 2909U;
	int16_t x800 = 0;
	int32_t t22 = -45;

	t22 = ((x797==(x798^x799))>>x800);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x809 = -1LL;
	static int32_t x810 = -41456;
	int16_t x811 = -1;
	uint16_t x812 = 2U;
	static int32_t t23 = -9761;

	t23 = ((x809==(x810^x811))>>x812);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x854 = 1;
	int16_t x855 = INT16_MAX;
	uint8_t x856 = 1U;

	t24 = ((x853==(x854^x855))>>x856);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x861 = UINT16_MAX;
	uint32_t x862 = 388U;
	int64_t x863 = -867LL;
	int16_t x864 = 0;
	volatile int32_t t25 = -368915734;

	t25 = ((x861==(x862^x863))>>x864);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x873 = INT64_MAX;
	volatile int8_t x875 = 6;
	int64_t x876 = 0LL;
	volatile int32_t t26 = 891;

	t26 = ((x873==(x874^x875))>>x876);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x877 = 1U;
	uint16_t x879 = 32U;
	int32_t x880 = 17;
	static volatile int32_t t27 = 5;

	t27 = ((x877==(x878^x879))>>x880);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x897 = 1U;
	static int32_t x898 = 7237291;
	static int32_t x899 = -1;
	uint8_t x900 = 2U;

	t28 = ((x897==(x898^x899))>>x900);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x907 = INT64_MIN;
	uint16_t x908 = 1U;

	t29 = ((x905==(x906^x907))>>x908);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x969 = INT8_MAX;
	uint32_t x970 = UINT32_MAX;
	uint8_t x971 = 37U;
	uint8_t x972 = 7U;
	int32_t t30 = 7102;

	t30 = ((x969==(x970^x971))>>x972);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x974 = 6;
	volatile uint8_t x976 = 3U;
	volatile int32_t t31 = 238162496;

	t31 = ((x973==(x974^x975))>>x976);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x1005 = INT64_MIN;
	int32_t x1007 = INT32_MIN;
	static uint64_t x1008 = 2LLU;
	volatile int32_t t32 = 3904423;

	t32 = ((x1005==(x1006^x1007))>>x1008);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x1125 = 3U;
	int16_t x1126 = -13874;
	int32_t x1127 = INT32_MIN;
	int16_t x1128 = 1;
	int32_t t33 = 63;

	t33 = ((x1125==(x1126^x1127))>>x1128);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1145 = 831433937;
	int16_t x1146 = 1502;
	volatile uint8_t x1147 = 1U;
	uint16_t x1148 = 11U;

	t34 = ((x1145==(x1146^x1147))>>x1148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x1205 = UINT16_MAX;
	static uint64_t x1206 = 997279112289727LLU;
	static int64_t x1207 = INT64_MAX;
	uint32_t x1208 = 16U;
	int32_t t35 = -8;

	t35 = ((x1205==(x1206^x1207))>>x1208);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x1261 = 40907U;
	uint32_t x1262 = UINT32_MAX;
	uint8_t x1263 = UINT8_MAX;
	uint8_t x1264 = 22U;
	volatile int32_t t36 = 1216896;

	t36 = ((x1261==(x1262^x1263))>>x1264);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x1301 = -1;
	uint8_t x1302 = 109U;
	int8_t x1303 = -1;

	t37 = ((x1301==(x1302^x1303))>>x1304);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1337 = 52;
	uint8_t x1338 = 5U;
	int16_t x1339 = -672;
	int16_t x1340 = 6;
	static int32_t t38 = 58;

	t38 = ((x1337==(x1338^x1339))>>x1340);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x1369 = INT8_MIN;
	int64_t x1370 = INT64_MAX;
	volatile int32_t t39 = -1;

	t39 = ((x1369==(x1370^x1371))>>x1372);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int16_t x1417 = INT16_MAX;
	uint64_t x1418 = 26LLU;
	uint64_t x1419 = 128743982348LLU;
	static int16_t x1420 = 28;

	t40 = ((x1417==(x1418^x1419))>>x1420);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x1449 = -1;
	static volatile uint32_t x1451 = 316U;
	int8_t x1452 = 2;
	volatile int32_t t41 = 87;

	t41 = ((x1449==(x1450^x1451))>>x1452);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x1501 = 3;
	static uint8_t x1504 = 3U;
	volatile int32_t t42 = 482;

	t42 = ((x1501==(x1502^x1503))>>x1504);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x1529 = INT8_MIN;
	uint32_t x1530 = 3U;
	uint32_t x1531 = 5366U;
	uint8_t x1532 = 31U;
	int32_t t43 = -8549;

	t43 = ((x1529==(x1530^x1531))>>x1532);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x1549 = INT32_MIN;
	int32_t x1550 = -51;
	int32_t x1551 = 2;
	int16_t x1552 = 0;
	int32_t t44 = 882196693;

	t44 = ((x1549==(x1550^x1551))>>x1552);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x1561 = 284;
	static int32_t x1562 = INT32_MIN;
	static uint8_t x1564 = 26U;
	static int32_t t45 = -5870693;

	t45 = ((x1561==(x1562^x1563))>>x1564);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x1650 = -1;
	int32_t x1651 = INT32_MIN;
	uint8_t x1652 = 5U;
	volatile int32_t t46 = 13297115;

	t46 = ((x1649==(x1650^x1651))>>x1652);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x1662 = UINT16_MAX;
	static volatile int64_t x1663 = INT64_MIN;
	static uint16_t x1664 = 30U;
	volatile int32_t t47 = 7758;

	t47 = ((x1661==(x1662^x1663))>>x1664);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x1670 = 3419U;
	volatile int64_t x1671 = INT64_MIN;
	int32_t t48 = 188334148;

	t48 = ((x1669==(x1670^x1671))>>x1672);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x1693 = -1;
	int8_t x1694 = INT8_MIN;
	int64_t x1695 = INT64_MAX;
	int8_t x1696 = 9;
	int32_t t49 = 1524;

	t49 = ((x1693==(x1694^x1695))>>x1696);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x1701 = INT64_MAX;
	static int8_t x1703 = -1;
	uint32_t x1704 = 1U;
	int32_t t50 = -199514;

	t50 = ((x1701==(x1702^x1703))>>x1704);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x1705 = 1075618U;
	volatile int8_t x1706 = -1;
	int8_t x1708 = 0;
	static volatile int32_t t51 = -17;

	t51 = ((x1705==(x1706^x1707))>>x1708);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x1733 = 2674U;
	int32_t x1734 = INT32_MIN;
	int8_t x1735 = -1;
	volatile int8_t x1736 = 1;

	t52 = ((x1733==(x1734^x1735))>>x1736);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x1761 = INT32_MIN;
	static volatile int16_t x1762 = INT16_MIN;
	uint32_t x1763 = 438182U;
	uint64_t x1764 = 19LLU;
	volatile int32_t t53 = -22821125;

	t53 = ((x1761==(x1762^x1763))>>x1764);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint16_t x1793 = 2131U;
	static int32_t x1794 = INT32_MAX;
	int64_t x1795 = 2849603LL;
	uint8_t x1796 = 3U;
	volatile int32_t t54 = -22042399;

	t54 = ((x1793==(x1794^x1795))>>x1796);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x1893 = UINT8_MAX;
	int64_t x1894 = INT64_MAX;
	static int16_t x1895 = INT16_MIN;
	volatile int32_t t55 = 3;

	t55 = ((x1893==(x1894^x1895))>>x1896);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x1931 = -1;
	int16_t x1932 = 0;
	volatile int32_t t56 = -3624;

	t56 = ((x1929==(x1930^x1931))>>x1932);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x1933 = UINT16_MAX;
	uint16_t x1934 = 106U;
	static uint8_t x1936 = 13U;
	int32_t t57 = 1830721;

	t57 = ((x1933==(x1934^x1935))>>x1936);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x2066 = 0U;
	int64_t x2067 = INT64_MIN;
	volatile uint16_t x2068 = 27U;
	static volatile int32_t t58 = 1;

	t58 = ((x2065==(x2066^x2067))>>x2068);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x2122 = UINT64_MAX;
	uint32_t x2123 = UINT32_MAX;
	int32_t x2124 = 31;

	t59 = ((x2121==(x2122^x2123))>>x2124);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x2137 = 0U;
	int32_t x2138 = 19651297;
	static int32_t x2139 = -1;
	int64_t x2140 = 13LL;

	t60 = ((x2137==(x2138^x2139))>>x2140);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x2245 = 7;
	volatile int8_t x2246 = INT8_MIN;
	uint8_t x2247 = 90U;
	volatile int32_t t61 = -365018964;

	t61 = ((x2245==(x2246^x2247))>>x2248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x2249 = INT32_MAX;
	volatile uint16_t x2250 = UINT16_MAX;
	uint32_t x2252 = 2U;

	t62 = ((x2249==(x2250^x2251))>>x2252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x2273 = 68126571748402518LL;
	uint16_t x2274 = 0U;
	int16_t x2275 = -1;
	static int32_t t63 = 35579642;

	t63 = ((x2273==(x2274^x2275))>>x2276);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x2293 = 1U;
	uint16_t x2294 = 521U;
	uint64_t x2295 = UINT64_MAX;
	int32_t t64 = -2582;

	t64 = ((x2293==(x2294^x2295))>>x2296);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x2297 = INT8_MAX;
	volatile int32_t x2298 = INT32_MIN;
	volatile uint16_t x2299 = UINT16_MAX;
	int32_t t65 = 19;

	t65 = ((x2297==(x2298^x2299))>>x2300);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x2306 = INT64_MIN;
	uint16_t x2307 = UINT16_MAX;
	uint8_t x2308 = 0U;
	int32_t t66 = -29;

	t66 = ((x2305==(x2306^x2307))>>x2308);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x2321 = -1;
	static volatile int64_t x2322 = INT64_MIN;
	volatile int8_t x2323 = 0;
	int32_t t67 = 191949521;

	t67 = ((x2321==(x2322^x2323))>>x2324);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x2361 = -1LL;
	static int64_t x2362 = INT64_MIN;
	int32_t x2363 = INT32_MAX;
	volatile uint16_t x2364 = 1U;
	int32_t t68 = -1;

	t68 = ((x2361==(x2362^x2363))>>x2364);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x2365 = INT8_MIN;
	int64_t x2366 = INT64_MIN;
	uint8_t x2367 = 78U;
	volatile uint8_t x2368 = 15U;
	volatile int32_t t69 = -134255749;

	t69 = ((x2365==(x2366^x2367))>>x2368);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x2369 = 482578987LL;
	static int64_t x2371 = 4044645190652385743LL;
	int8_t x2372 = 0;
	volatile int32_t t70 = -24703;

	t70 = ((x2369==(x2370^x2371))>>x2372);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x2385 = 457U;
	uint64_t x2386 = 96510127765LLU;
	static volatile int64_t x2387 = 2042152LL;
	static uint16_t x2388 = 9U;

	t71 = ((x2385==(x2386^x2387))>>x2388);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x2393 = INT16_MIN;
	int64_t x2394 = -113590997181375151LL;
	static int64_t x2395 = -1LL;
	static uint32_t x2396 = 2U;
	int32_t t72 = -31;

	t72 = ((x2393==(x2394^x2395))>>x2396);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x2421 = 47U;
	static int8_t x2423 = INT8_MIN;

	t73 = ((x2421==(x2422^x2423))>>x2424);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x2426 = -1;
	volatile int64_t x2427 = INT64_MIN;

	t74 = ((x2425==(x2426^x2427))>>x2428);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x2432 = 8;
	volatile int32_t t75 = -190;

	t75 = ((x2429==(x2430^x2431))>>x2432);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x2493 = -1LL;
	int64_t x2494 = INT64_MIN;
	volatile int32_t x2495 = -505921161;

	t76 = ((x2493==(x2494^x2495))>>x2496);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x2525 = -1LL;
	int16_t x2526 = INT16_MIN;
	static volatile uint8_t x2527 = 2U;
	uint8_t x2528 = 3U;
	volatile int32_t t77 = 1;

	t77 = ((x2525==(x2526^x2527))>>x2528);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint32_t x2533 = UINT32_MAX;
	uint32_t x2535 = 360023247U;
	uint64_t x2536 = 16LLU;
	volatile int32_t t78 = 130676;

	t78 = ((x2533==(x2534^x2535))>>x2536);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x2541 = INT16_MIN;
	uint8_t x2543 = 0U;
	volatile uint16_t x2544 = 0U;
	volatile int32_t t79 = -8002969;

	t79 = ((x2541==(x2542^x2543))>>x2544);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x2567 = INT16_MIN;
	uint32_t x2568 = 1U;

	t80 = ((x2565==(x2566^x2567))>>x2568);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x2570 = UINT64_MAX;
	uint8_t x2571 = 32U;
	volatile uint8_t x2572 = 21U;
	int32_t t81 = -232;

	t81 = ((x2569==(x2570^x2571))>>x2572);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x2589 = 1877688657U;
	int64_t x2591 = INT64_MAX;
	uint16_t x2592 = 25U;

	t82 = ((x2589==(x2590^x2591))>>x2592);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x2626 = UINT8_MAX;
	int16_t x2627 = -7312;
	uint8_t x2628 = 5U;

	t83 = ((x2625==(x2626^x2627))>>x2628);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x2645 = 834U;
	uint32_t x2646 = 85301U;
	uint64_t x2647 = 26LLU;

	t84 = ((x2645==(x2646^x2647))>>x2648);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x2758 = -1;
	int8_t x2759 = INT8_MAX;
	uint16_t x2760 = 1U;

	t85 = ((x2757==(x2758^x2759))>>x2760);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x2813 = 1U;
	static uint16_t x2814 = 299U;
	uint16_t x2815 = 375U;
	static uint32_t x2816 = 7U;
	volatile int32_t t86 = 20009;

	t86 = ((x2813==(x2814^x2815))>>x2816);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x2837 = -50;
	int32_t x2839 = -666048;
	int16_t x2840 = 1;

	t87 = ((x2837==(x2838^x2839))>>x2840);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x2933 = UINT32_MAX;
	uint8_t x2934 = UINT8_MAX;
	int64_t x2935 = INT64_MAX;
	int8_t x2936 = 6;
	volatile int32_t t88 = -60759;

	t88 = ((x2933==(x2934^x2935))>>x2936);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x2977 = 1093669867142067818LLU;
	uint8_t x2978 = 1U;
	uint8_t x2980 = 3U;
	int32_t t89 = 2761762;

	t89 = ((x2977==(x2978^x2979))>>x2980);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint16_t x3045 = 10U;
	int8_t x3046 = INT8_MIN;
	int16_t x3047 = INT16_MIN;
	volatile int32_t t90 = 573874;

	t90 = ((x3045==(x3046^x3047))>>x3048);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x3073 = -5;
	volatile uint8_t x3075 = 115U;
	volatile uint8_t x3076 = 0U;
	volatile int32_t t91 = -1;

	t91 = ((x3073==(x3074^x3075))>>x3076);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x3089 = INT64_MAX;
	static int16_t x3090 = INT16_MIN;
	int16_t x3091 = -581;
	static uint8_t x3092 = 10U;

	t92 = ((x3089==(x3090^x3091))>>x3092);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x3093 = 0U;
	static int16_t x3094 = INT16_MIN;

	t93 = ((x3093==(x3094^x3095))>>x3096);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x3101 = 490181202469926LLU;
	int32_t x3102 = -388400447;
	volatile int64_t x3103 = -78015360210715489LL;
	volatile int8_t x3104 = 6;
	volatile int32_t t94 = 3;

	t94 = ((x3101==(x3102^x3103))>>x3104);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x3154 = 29U;
	static int8_t x3155 = INT8_MIN;
	int64_t x3156 = 1LL;
	int32_t t95 = -10;

	t95 = ((x3153==(x3154^x3155))>>x3156);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x3182 = INT8_MIN;
	uint32_t x3183 = 1627176U;
	int8_t x3184 = 2;

	t96 = ((x3181==(x3182^x3183))>>x3184);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x3197 = INT16_MIN;
	uint8_t x3198 = 5U;
	int8_t x3199 = -1;
	uint64_t x3200 = 0LLU;
	static volatile int32_t t97 = -3001;

	t97 = ((x3197==(x3198^x3199))>>x3200);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x3233 = 42U;
	volatile uint8_t x3235 = UINT8_MAX;
	volatile uint8_t x3236 = 2U;
	static volatile int32_t t98 = -1041553;

	t98 = ((x3233==(x3234^x3235))>>x3236);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x3261 = -1;
	int8_t x3262 = 14;
	static uint32_t x3264 = 31U;
	static int32_t t99 = 1181503;

	t99 = ((x3261==(x3262^x3263))>>x3264);

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

