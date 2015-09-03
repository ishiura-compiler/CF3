#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x3 = 23430219U;
static int64_t x23 = 25954149979LL;
int16_t x87 = 0;
static int8_t x91 = -1;
volatile int32_t t7 = 68583108;
int16_t x314 = -1;
int16_t x315 = INT16_MIN;
int32_t t9 = 0;
uint32_t x321 = 24U;
volatile int32_t t10 = 219998;
uint32_t x387 = UINT32_MAX;
static int32_t x422 = INT32_MIN;
static volatile int64_t x427 = -1LL;
uint8_t x489 = 1U;
static volatile int16_t x490 = INT16_MAX;
uint16_t x492 = 0U;
int8_t x535 = INT8_MIN;
int8_t x562 = 43;
int32_t x614 = 1;
volatile uint32_t x631 = 0U;
volatile uint32_t x650 = 24594U;
static int32_t t25 = -2587;
uint32_t x670 = 110892U;
int8_t x671 = 11;
int8_t x768 = 4;
volatile int32_t t27 = 10454;
uint16_t x788 = 26U;
uint8_t x871 = 7U;
volatile uint32_t x875 = UINT32_MAX;
uint32_t x933 = 27U;
int16_t x934 = INT16_MAX;
volatile int32_t t32 = -1;
static int32_t t33 = -59364271;
int64_t x991 = -4605537848808754213LL;
uint16_t x992 = 0U;
int64_t x1001 = INT64_MAX;
static uint8_t x1002 = 55U;
volatile int32_t t35 = 7;
volatile int16_t x1037 = INT16_MIN;
uint16_t x1069 = UINT16_MAX;
int16_t x1071 = INT16_MAX;
volatile int32_t t37 = -43;
volatile int32_t t38 = 0;
int64_t x1138 = -1LL;
int32_t x1139 = -1;
uint8_t x1140 = 0U;
volatile int64_t x1150 = INT64_MIN;
int32_t t41 = -130297478;
volatile int64_t x1158 = -20920308282510LL;
int32_t t42 = 1645543;
int16_t x1317 = INT16_MAX;
int8_t x1369 = INT8_MIN;
uint16_t x1389 = 290U;
int8_t x1460 = 2;
int32_t x1490 = -1;
uint32_t x1492 = 1U;
int32_t t52 = -17534;
int16_t x1529 = 3652;
int16_t x1531 = INT16_MIN;
static volatile int16_t x1603 = 29;
int32_t t55 = -805367;
uint8_t x1704 = 2U;
int32_t x1806 = -346;
uint16_t x1882 = 923U;
volatile uint8_t x1884 = 23U;
static int16_t x1892 = 1;
volatile int64_t x1962 = -476289534563071646LL;
volatile int32_t x1963 = -1;
uint32_t x1964 = 20U;
volatile int32_t t63 = -114878819;
int64_t x2006 = INT64_MIN;
uint16_t x2008 = 0U;
uint16_t x2124 = 3U;
uint32_t x2270 = 1367860U;
int64_t x2313 = INT64_MAX;
volatile int32_t x2314 = INT32_MIN;
uint16_t x2378 = 361U;
int64_t x2398 = INT64_MAX;
uint8_t x2425 = 0U;
int8_t x2427 = INT8_MAX;
int8_t x2473 = -42;
uint16_t x2482 = UINT16_MAX;
volatile int8_t x2632 = 13;
uint8_t x2644 = 0U;
static int16_t x2663 = -1;
static uint8_t x2664 = 18U;
volatile uint8_t x2699 = 5U;
static int32_t t82 = 5891;
int16_t x2731 = INT16_MIN;
int32_t t83 = 175;
volatile int8_t x2738 = INT8_MIN;
int32_t t84 = 229789;
volatile int64_t x2813 = -1LL;
int16_t x2814 = INT16_MIN;
int8_t x2826 = -7;
volatile int64_t x2827 = INT64_MIN;
volatile int16_t x2864 = 1;
volatile int32_t t88 = 7;
uint16_t x2880 = 17U;
uint16_t x2953 = 3327U;
static uint8_t x2955 = 2U;
uint64_t x2967 = UINT64_MAX;
int32_t t92 = 0;
int32_t t95 = 436319928;
static uint16_t x3011 = 932U;
int16_t x3030 = 70;
int32_t t99 = -204323207;


void f0(void) {
	volatile int32_t x1 = INT32_MIN;
	static uint64_t x2 = UINT64_MAX;
	static uint16_t x4 = 26U;
	int32_t t0 = -19265028;

	t0 = (((x1^x2)<=x3)>>x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x21 = INT16_MIN;
	int32_t x22 = -1;
	uint32_t x24 = 4U;
	volatile int32_t t1 = 0;

	t1 = (((x21^x22)<=x23)>>x24);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x85 = -31;
	volatile int16_t x86 = INT16_MIN;
	uint16_t x88 = 27U;
	int32_t t2 = 3;

	t2 = (((x85^x86)<=x87)>>x88);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x89 = INT32_MIN;
	int16_t x90 = INT16_MIN;
	static volatile uint64_t x92 = 7LLU;
	volatile int32_t t3 = 13026;

	t3 = (((x89^x90)<=x91)>>x92);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x105 = UINT32_MAX;
	volatile int64_t x106 = INT64_MAX;
	uint16_t x107 = 1U;
	static uint32_t x108 = 3U;
	volatile int32_t t4 = 625786650;

	t4 = (((x105^x106)<=x107)>>x108);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x217 = 22U;
	static volatile uint32_t x218 = UINT32_MAX;
	int8_t x219 = INT8_MIN;
	int16_t x220 = 1;
	volatile int32_t t5 = -2002529;

	t5 = (((x217^x218)<=x219)>>x220);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x225 = 2359U;
	static uint16_t x226 = UINT16_MAX;
	uint16_t x227 = 15885U;
	int16_t x228 = 1;
	int32_t t6 = -91;

	t6 = (((x225^x226)<=x227)>>x228);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x253 = 484LLU;
	static volatile int32_t x254 = 26595210;
	int16_t x255 = -199;
	volatile uint16_t x256 = 22U;

	t7 = (((x253^x254)<=x255)>>x256);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x273 = INT16_MIN;
	int8_t x274 = -29;
	int8_t x275 = -56;
	uint8_t x276 = 18U;
	int32_t t8 = -41695749;

	t8 = (((x273^x274)<=x275)>>x276);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x313 = 63;
	uint16_t x316 = 1U;

	t9 = (((x313^x314)<=x315)>>x316);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x322 = UINT8_MAX;
	volatile int32_t x323 = -1;
	int8_t x324 = 1;

	t10 = (((x321^x322)<=x323)>>x324);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x385 = 3;
	uint32_t x386 = UINT32_MAX;
	uint16_t x388 = 31U;
	int32_t t11 = -1;

	t11 = (((x385^x386)<=x387)>>x388);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x421 = INT16_MIN;
	int32_t x423 = 5;
	int16_t x424 = 1;
	int32_t t12 = -385;

	t12 = (((x421^x422)<=x423)>>x424);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x425 = 48U;
	volatile uint64_t x426 = 2669929643991LLU;
	static int8_t x428 = 21;
	volatile int32_t t13 = -502;

	t13 = (((x425^x426)<=x427)>>x428);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x491 = 56819227LLU;
	static int32_t t14 = -2681990;

	t14 = (((x489^x490)<=x491)>>x492);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x513 = INT16_MIN;
	static int8_t x514 = INT8_MAX;
	int16_t x515 = -1;
	volatile int32_t x516 = 1;
	volatile int32_t t15 = -1913;

	t15 = (((x513^x514)<=x515)>>x516);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x521 = -1;
	int8_t x522 = 0;
	int8_t x523 = INT8_MIN;
	volatile int8_t x524 = 0;
	volatile int32_t t16 = -221;

	t16 = (((x521^x522)<=x523)>>x524);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x533 = INT8_MAX;
	int64_t x534 = 4LL;
	int8_t x536 = 0;
	int32_t t17 = -457564;

	t17 = (((x533^x534)<=x535)>>x536);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x557 = 3LL;
	int16_t x558 = 2673;
	volatile int64_t x559 = -1LL;
	volatile int32_t x560 = 4;
	int32_t t18 = -212;

	t18 = (((x557^x558)<=x559)>>x560);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x561 = INT32_MIN;
	uint64_t x563 = 8LLU;
	uint8_t x564 = 20U;
	volatile int32_t t19 = -30907;

	t19 = (((x561^x562)<=x563)>>x564);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x585 = -1;
	int16_t x586 = -71;
	int64_t x587 = -1LL;
	uint8_t x588 = 14U;
	int32_t t20 = -29548;

	t20 = (((x585^x586)<=x587)>>x588);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x613 = -2;
	static int16_t x615 = 40;
	uint16_t x616 = 19U;
	int32_t t21 = 310837757;

	t21 = (((x613^x614)<=x615)>>x616);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x629 = INT64_MAX;
	int64_t x630 = INT64_MIN;
	volatile uint8_t x632 = 6U;
	static int32_t t22 = 257273;

	t22 = (((x629^x630)<=x631)>>x632);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x633 = 7U;
	volatile int32_t x634 = 4;
	int16_t x635 = -207;
	int8_t x636 = 1;
	volatile int32_t t23 = -773333802;

	t23 = (((x633^x634)<=x635)>>x636);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x637 = UINT16_MAX;
	int8_t x638 = -1;
	uint8_t x639 = 6U;
	volatile int64_t x640 = 1LL;
	volatile int32_t t24 = -49;

	t24 = (((x637^x638)<=x639)>>x640);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x649 = 7995LL;
	int16_t x651 = 1;
	uint16_t x652 = 2U;

	t25 = (((x649^x650)<=x651)>>x652);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x669 = 1383277;
	int16_t x672 = 14;
	int32_t t26 = -129;

	t26 = (((x669^x670)<=x671)>>x672);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x765 = INT32_MIN;
	volatile int16_t x766 = 0;
	int16_t x767 = INT16_MAX;

	t27 = (((x765^x766)<=x767)>>x768);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x781 = 1857733252U;
	int16_t x782 = INT16_MIN;
	int8_t x783 = 1;
	int8_t x784 = 0;
	int32_t t28 = -518741668;

	t28 = (((x781^x782)<=x783)>>x784);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x785 = INT32_MIN;
	uint32_t x786 = UINT32_MAX;
	static int16_t x787 = -1993;
	static volatile int32_t t29 = 80336485;

	t29 = (((x785^x786)<=x787)>>x788);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x869 = 5;
	int16_t x870 = INT16_MIN;
	volatile uint32_t x872 = 8U;
	static int32_t t30 = 40;

	t30 = (((x869^x870)<=x871)>>x872);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x873 = 43594U;
	uint8_t x874 = UINT8_MAX;
	int16_t x876 = 3;
	int32_t t31 = -104616;

	t31 = (((x873^x874)<=x875)>>x876);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x935 = -1;
	uint64_t x936 = 29LLU;

	t32 = (((x933^x934)<=x935)>>x936);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x945 = INT8_MAX;
	uint16_t x946 = 28948U;
	int8_t x947 = INT8_MIN;
	uint8_t x948 = 8U;

	t33 = (((x945^x946)<=x947)>>x948);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x989 = INT16_MIN;
	volatile int32_t x990 = -1652606;
	static int32_t t34 = 251676;

	t34 = (((x989^x990)<=x991)>>x992);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1003 = INT8_MAX;
	static uint8_t x1004 = 12U;

	t35 = (((x1001^x1002)<=x1003)>>x1004);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1038 = -9LL;
	static volatile int16_t x1039 = INT16_MIN;
	volatile int16_t x1040 = 14;
	int32_t t36 = 1;

	t36 = (((x1037^x1038)<=x1039)>>x1040);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x1070 = 62093453030067LL;
	static uint64_t x1072 = 0LLU;

	t37 = (((x1069^x1070)<=x1071)>>x1072);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1085 = -1LL;
	static int32_t x1086 = -1;
	int8_t x1087 = 1;
	static uint8_t x1088 = 1U;

	t38 = (((x1085^x1086)<=x1087)>>x1088);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x1137 = 22U;
	static int32_t t39 = -1786698;

	t39 = (((x1137^x1138)<=x1139)>>x1140);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1145 = INT8_MIN;
	volatile int64_t x1146 = INT64_MAX;
	static uint64_t x1147 = 0LLU;
	uint8_t x1148 = 16U;
	volatile int32_t t40 = 64;

	t40 = (((x1145^x1146)<=x1147)>>x1148);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x1149 = 0;
	volatile int32_t x1151 = INT32_MAX;
	uint8_t x1152 = 3U;

	t41 = (((x1149^x1150)<=x1151)>>x1152);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint32_t x1157 = UINT32_MAX;
	static volatile int8_t x1159 = INT8_MIN;
	static int8_t x1160 = 0;

	t42 = (((x1157^x1158)<=x1159)>>x1160);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x1189 = -37;
	int16_t x1190 = 11304;
	static volatile int8_t x1191 = INT8_MIN;
	volatile int8_t x1192 = 6;
	volatile int32_t t43 = 185;

	t43 = (((x1189^x1190)<=x1191)>>x1192);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x1273 = INT16_MIN;
	uint64_t x1274 = 386272250874881LLU;
	int32_t x1275 = 246;
	int8_t x1276 = 0;
	int32_t t44 = -5;

	t44 = (((x1273^x1274)<=x1275)>>x1276);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x1297 = -1;
	int64_t x1298 = INT64_MIN;
	uint8_t x1299 = 7U;
	int16_t x1300 = 1;
	int32_t t45 = 17645187;

	t45 = (((x1297^x1298)<=x1299)>>x1300);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x1318 = 44U;
	int8_t x1319 = -1;
	static uint64_t x1320 = 1LLU;
	int32_t t46 = -2;

	t46 = (((x1317^x1318)<=x1319)>>x1320);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x1370 = 34U;
	int8_t x1371 = INT8_MAX;
	static uint32_t x1372 = 2U;
	static int32_t t47 = 867;

	t47 = (((x1369^x1370)<=x1371)>>x1372);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x1373 = INT16_MIN;
	int64_t x1374 = INT64_MAX;
	static volatile int8_t x1375 = INT8_MIN;
	volatile uint8_t x1376 = 4U;
	volatile int32_t t48 = -230266;

	t48 = (((x1373^x1374)<=x1375)>>x1376);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x1390 = INT16_MIN;
	uint64_t x1391 = 8LLU;
	int16_t x1392 = 0;
	volatile int32_t t49 = -1709;

	t49 = (((x1389^x1390)<=x1391)>>x1392);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x1457 = INT32_MIN;
	uint8_t x1458 = UINT8_MAX;
	uint32_t x1459 = 3U;
	volatile int32_t t50 = 6;

	t50 = (((x1457^x1458)<=x1459)>>x1460);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x1465 = INT32_MIN;
	int8_t x1466 = -63;
	int32_t x1467 = 415;
	int16_t x1468 = 1;
	volatile int32_t t51 = 69749642;

	t51 = (((x1465^x1466)<=x1467)>>x1468);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x1489 = INT64_MAX;
	static volatile int8_t x1491 = 10;

	t52 = (((x1489^x1490)<=x1491)>>x1492);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x1530 = INT8_MAX;
	uint8_t x1532 = 12U;
	volatile int32_t t53 = 96219;

	t53 = (((x1529^x1530)<=x1531)>>x1532);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x1601 = 0;
	int16_t x1602 = 33;
	static uint8_t x1604 = 12U;
	int32_t t54 = 796;

	t54 = (((x1601^x1602)<=x1603)>>x1604);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x1605 = INT32_MIN;
	int8_t x1606 = INT8_MIN;
	uint32_t x1607 = UINT32_MAX;
	static uint8_t x1608 = 21U;

	t55 = (((x1605^x1606)<=x1607)>>x1608);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x1625 = INT64_MIN;
	uint8_t x1626 = UINT8_MAX;
	int8_t x1627 = -3;
	int8_t x1628 = 1;
	volatile int32_t t56 = 0;

	t56 = (((x1625^x1626)<=x1627)>>x1628);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x1701 = 1383746697534LL;
	uint16_t x1702 = UINT16_MAX;
	volatile int64_t x1703 = 467482321LL;
	volatile int32_t t57 = -310;

	t57 = (((x1701^x1702)<=x1703)>>x1704);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x1729 = 63U;
	int8_t x1730 = INT8_MIN;
	int16_t x1731 = -3588;
	int8_t x1732 = 0;
	int32_t t58 = -795112;

	t58 = (((x1729^x1730)<=x1731)>>x1732);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x1805 = -1LL;
	uint64_t x1807 = UINT64_MAX;
	uint32_t x1808 = 3U;
	int32_t t59 = 511472853;

	t59 = (((x1805^x1806)<=x1807)>>x1808);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x1881 = UINT32_MAX;
	uint64_t x1883 = UINT64_MAX;
	volatile int32_t t60 = 128000005;

	t60 = (((x1881^x1882)<=x1883)>>x1884);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x1889 = INT64_MIN;
	int32_t x1890 = 1;
	uint64_t x1891 = 5600479566995726LLU;
	volatile int32_t t61 = -54985018;

	t61 = (((x1889^x1890)<=x1891)>>x1892);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x1929 = 4;
	int16_t x1930 = INT16_MAX;
	int32_t x1931 = -1;
	uint16_t x1932 = 2U;
	int32_t t62 = -9043456;

	t62 = (((x1929^x1930)<=x1931)>>x1932);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x1961 = 69;

	t63 = (((x1961^x1962)<=x1963)>>x1964);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x1969 = 55U;
	int16_t x1970 = -1;
	uint32_t x1971 = 13601U;
	int8_t x1972 = 8;
	static int32_t t64 = -1045;

	t64 = (((x1969^x1970)<=x1971)>>x1972);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x2005 = 29U;
	uint64_t x2007 = 247809255648431733LLU;
	int32_t t65 = 7435020;

	t65 = (((x2005^x2006)<=x2007)>>x2008);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x2121 = INT16_MIN;
	int16_t x2122 = INT16_MIN;
	int64_t x2123 = INT64_MAX;
	volatile int32_t t66 = -175;

	t66 = (((x2121^x2122)<=x2123)>>x2124);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x2229 = 1U;
	int8_t x2230 = 0;
	int8_t x2231 = INT8_MIN;
	uint32_t x2232 = 6U;
	int32_t t67 = -14158912;

	t67 = (((x2229^x2230)<=x2231)>>x2232);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x2269 = INT16_MIN;
	int8_t x2271 = -35;
	static int8_t x2272 = 6;
	int32_t t68 = 200197;

	t68 = (((x2269^x2270)<=x2271)>>x2272);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x2315 = 69U;
	uint8_t x2316 = 0U;
	int32_t t69 = 27410;

	t69 = (((x2313^x2314)<=x2315)>>x2316);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x2345 = UINT8_MAX;
	int32_t x2346 = INT32_MIN;
	static uint8_t x2347 = 101U;
	int8_t x2348 = 0;
	int32_t t70 = -113671320;

	t70 = (((x2345^x2346)<=x2347)>>x2348);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int32_t x2361 = INT32_MIN;
	int32_t x2362 = -1;
	uint32_t x2363 = UINT32_MAX;
	static int8_t x2364 = 1;
	int32_t t71 = 3139;

	t71 = (((x2361^x2362)<=x2363)>>x2364);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x2377 = INT16_MIN;
	int64_t x2379 = -1LL;
	uint8_t x2380 = 3U;
	int32_t t72 = -113154663;

	t72 = (((x2377^x2378)<=x2379)>>x2380);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x2397 = -1;
	int8_t x2399 = -13;
	uint8_t x2400 = 5U;
	int32_t t73 = -89935;

	t73 = (((x2397^x2398)<=x2399)>>x2400);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x2405 = 54U;
	volatile int16_t x2406 = -14040;
	int32_t x2407 = -1;
	uint16_t x2408 = 2U;
	volatile int32_t t74 = 31156031;

	t74 = (((x2405^x2406)<=x2407)>>x2408);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x2426 = 19843U;
	int8_t x2428 = 0;
	int32_t t75 = -16336530;

	t75 = (((x2425^x2426)<=x2427)>>x2428);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x2474 = -1;
	int64_t x2475 = INT64_MAX;
	uint32_t x2476 = 0U;
	volatile int32_t t76 = -17;

	t76 = (((x2473^x2474)<=x2475)>>x2476);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x2481 = INT64_MAX;
	uint32_t x2483 = 3168U;
	volatile uint16_t x2484 = 0U;
	volatile int32_t t77 = 10454;

	t77 = (((x2481^x2482)<=x2483)>>x2484);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x2573 = 37956319083LLU;
	static int16_t x2574 = 1;
	uint64_t x2575 = 3LLU;
	uint16_t x2576 = 1U;
	static volatile int32_t t78 = 5123;

	t78 = (((x2573^x2574)<=x2575)>>x2576);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x2629 = 494LLU;
	volatile int32_t x2630 = -798505105;
	int16_t x2631 = -32;
	volatile int32_t t79 = 13;

	t79 = (((x2629^x2630)<=x2631)>>x2632);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x2641 = INT16_MAX;
	static uint64_t x2642 = 10698282369124936LLU;
	static uint8_t x2643 = UINT8_MAX;
	int32_t t80 = 1396736;

	t80 = (((x2641^x2642)<=x2643)>>x2644);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x2661 = 56U;
	int8_t x2662 = INT8_MIN;
	int32_t t81 = -1;

	t81 = (((x2661^x2662)<=x2663)>>x2664);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x2697 = UINT32_MAX;
	uint8_t x2698 = 58U;
	uint8_t x2700 = 4U;

	t82 = (((x2697^x2698)<=x2699)>>x2700);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x2729 = -1;
	int64_t x2730 = INT64_MAX;
	static uint8_t x2732 = 0U;

	t83 = (((x2729^x2730)<=x2731)>>x2732);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x2737 = -1;
	int64_t x2739 = INT64_MIN;
	int16_t x2740 = 4;

	t84 = (((x2737^x2738)<=x2739)>>x2740);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x2749 = INT64_MIN;
	uint16_t x2750 = UINT16_MAX;
	volatile uint32_t x2751 = UINT32_MAX;
	uint8_t x2752 = 5U;
	static volatile int32_t t85 = 0;

	t85 = (((x2749^x2750)<=x2751)>>x2752);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x2815 = -31;
	uint32_t x2816 = 9U;
	static volatile int32_t t86 = -80647;

	t86 = (((x2813^x2814)<=x2815)>>x2816);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x2825 = 1863673;
	int8_t x2828 = 0;
	volatile int32_t t87 = 131203888;

	t87 = (((x2825^x2826)<=x2827)>>x2828);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x2861 = INT64_MIN;
	static uint64_t x2862 = 15693430LLU;
	static int64_t x2863 = -1LL;

	t88 = (((x2861^x2862)<=x2863)>>x2864);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x2877 = 27;
	int8_t x2878 = INT8_MAX;
	volatile int32_t x2879 = INT32_MIN;
	int32_t t89 = -531734184;

	t89 = (((x2877^x2878)<=x2879)>>x2880);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x2937 = UINT64_MAX;
	int16_t x2938 = 12131;
	static int8_t x2939 = INT8_MIN;
	static int8_t x2940 = 13;
	int32_t t90 = -6;

	t90 = (((x2937^x2938)<=x2939)>>x2940);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x2954 = 1569673388LL;
	int8_t x2956 = 14;
	volatile int32_t t91 = 32;

	t91 = (((x2953^x2954)<=x2955)>>x2956);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x2965 = UINT64_MAX;
	int16_t x2966 = INT16_MAX;
	uint32_t x2968 = 3U;

	t92 = (((x2965^x2966)<=x2967)>>x2968);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x2969 = INT32_MIN;
	uint64_t x2970 = UINT64_MAX;
	static int64_t x2971 = INT64_MIN;
	volatile int32_t x2972 = 0;
	volatile int32_t t93 = 10703;

	t93 = (((x2969^x2970)<=x2971)>>x2972);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x2973 = INT32_MIN;
	volatile uint16_t x2974 = 23U;
	volatile int8_t x2975 = INT8_MAX;
	int32_t x2976 = 1;
	int32_t t94 = 30597;

	t94 = (((x2973^x2974)<=x2975)>>x2976);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x2989 = INT64_MAX;
	static uint8_t x2990 = UINT8_MAX;
	volatile uint8_t x2991 = UINT8_MAX;
	static int16_t x2992 = 1;

	t95 = (((x2989^x2990)<=x2991)>>x2992);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x2993 = 0U;
	int64_t x2994 = INT64_MAX;
	int32_t x2995 = INT32_MIN;
	volatile int16_t x2996 = 1;
	int32_t t96 = -347002;

	t96 = (((x2993^x2994)<=x2995)>>x2996);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x2997 = INT16_MAX;
	int8_t x2998 = INT8_MIN;
	int8_t x2999 = -1;
	uint8_t x3000 = 8U;
	volatile int32_t t97 = 0;

	t97 = (((x2997^x2998)<=x2999)>>x3000);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x3009 = INT16_MAX;
	uint8_t x3010 = UINT8_MAX;
	uint8_t x3012 = 3U;
	int32_t t98 = 294751785;

	t98 = (((x3009^x3010)<=x3011)>>x3012);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x3029 = 4979;
	static uint16_t x3031 = 4U;
	static uint8_t x3032 = 4U;

	t99 = (((x3029^x3030)<=x3031)>>x3032);

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

