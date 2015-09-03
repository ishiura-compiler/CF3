#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x32 = 21U;
volatile uint64_t t0 = 20LLU;
int8_t x72 = 21;
volatile int64_t t1 = -880611798LL;
uint8_t x95 = 3U;
volatile uint64_t t2 = 175404651LLU;
uint16_t x221 = 543U;
volatile int8_t x224 = 5;
int32_t t3 = 282403862;
int8_t x268 = 6;
int32_t x385 = INT32_MAX;
int16_t x387 = 247;
int8_t x446 = INT8_MAX;
int64_t t11 = 146909550543949LL;
int8_t x533 = -1;
static uint32_t x536 = 0U;
int16_t x585 = INT16_MIN;
uint16_t x669 = UINT16_MAX;
int32_t x671 = -1;
int16_t x734 = -1;
static uint64_t x735 = 1012164114356LLU;
static volatile uint8_t x764 = 3U;
volatile int32_t t17 = 163846480;
int16_t x818 = INT16_MIN;
int8_t x829 = INT8_MIN;
volatile uint64_t t22 = 355398LLU;
int32_t x1047 = 293837052;
int32_t t25 = 405030;
static int8_t x1098 = 26;
int16_t x1174 = INT16_MIN;
static volatile uint64_t x1175 = 2LLU;
static int32_t x1278 = -95774;
uint16_t x1396 = 17U;
int16_t x1457 = -1;
uint32_t x1460 = 2U;
int8_t x1501 = -1;
int8_t x1504 = 0;
int32_t x1630 = INT32_MIN;
int8_t x1659 = INT8_MIN;
volatile int64_t t36 = 21041791159750130LL;
uint16_t x1702 = 1U;
volatile int8_t x1704 = 0;
uint32_t x1731 = UINT32_MAX;
uint8_t x1732 = 10U;
uint32_t t40 = 755U;
uint16_t x1785 = 1574U;
volatile uint16_t x1805 = 9U;
static int16_t x1942 = -6;
static uint32_t x1986 = UINT32_MAX;
int8_t x2257 = 0;
uint8_t x2312 = 8U;
int8_t x2313 = -5;
static int32_t x2314 = -9348930;
int8_t x2316 = 26;
volatile int16_t x2493 = INT16_MAX;
volatile int32_t t56 = -1;
uint16_t x2575 = 1032U;
int64_t t57 = -101664LL;
static volatile int32_t x2670 = INT32_MIN;
int16_t x2680 = 14;
uint64_t x2755 = 73711LLU;
uint64_t x2762 = 88851LLU;
static volatile int16_t x2765 = -1;
int8_t x2768 = 0;
static int8_t x2783 = INT8_MIN;
uint32_t x2784 = 2U;
uint8_t x2810 = 29U;
volatile int64_t t65 = -35LL;
int32_t x2900 = 14;
uint64_t t67 = 129655967LLU;
volatile int64_t x2909 = -1LL;
uint64_t x2911 = UINT64_MAX;
volatile uint64_t x3009 = UINT64_MAX;
static volatile uint32_t x3041 = 8194069U;
int8_t x3086 = -1;
int16_t x3177 = 6;
static volatile uint64_t x3200 = 0LLU;
int8_t x3225 = -1;
uint16_t x3249 = UINT16_MAX;
int64_t x3251 = -57531LL;
uint8_t x3252 = 0U;
int64_t t76 = -10357505452786883LL;
uint64_t x3455 = 1072242059LLU;
static int16_t x3557 = -1;
uint8_t x3692 = 8U;
uint64_t t80 = 1081306932631987874LLU;
static volatile int32_t x4005 = INT32_MAX;
int8_t x4006 = INT8_MIN;
uint16_t x4016 = 0U;
volatile int16_t x4066 = INT16_MAX;
uint16_t x4068 = 3U;
int32_t t83 = 48;
int16_t x4098 = INT16_MAX;
static uint64_t x4099 = 2961802LLU;
uint8_t x4114 = 44U;
static int8_t x4483 = -1;
volatile int16_t x4484 = 5;
static int64_t x4489 = -1LL;
int64_t t93 = 1011LL;
volatile uint64_t x4494 = UINT64_MAX;
static int16_t x4501 = -1;
uint8_t x4521 = 23U;
int16_t x4523 = -232;
int16_t x4578 = -3113;
uint8_t x4579 = UINT8_MAX;
volatile int32_t t99 = 5;


void f0(void) {
	uint32_t x29 = 8U;
	uint64_t x30 = UINT64_MAX;
	int64_t x31 = -2227683775759844LL;

	t0 = ((x29/(x30*x31))>>x32);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x69 = 433434U;
	int64_t x70 = -23591293991LL;
	static volatile int16_t x71 = 26;

	t1 = ((x69/(x70*x71))>>x72);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x93 = -38746402420168556LL;
	uint64_t x94 = UINT64_MAX;
	int16_t x96 = 0;

	t2 = ((x93/(x94*x95))>>x96);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x222 = 7071U;
	int32_t x223 = 3719;

	t3 = ((x221/(x222*x223))>>x224);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x265 = UINT8_MAX;
	volatile int64_t x266 = -1LL;
	int32_t x267 = -930875;
	int64_t t4 = 0LL;

	t4 = ((x265/(x266*x267))>>x268);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x281 = 21;
	static uint32_t x282 = 1311689U;
	uint16_t x283 = 50U;
	uint8_t x284 = 0U;
	static uint32_t t5 = 46U;

	t5 = ((x281/(x282*x283))>>x284);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x289 = UINT16_MAX;
	uint8_t x290 = 6U;
	int8_t x291 = INT8_MAX;
	uint16_t x292 = 11U;
	static volatile int32_t t6 = -951325108;

	t6 = ((x289/(x290*x291))>>x292);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x369 = -1;
	volatile uint16_t x370 = 1358U;
	int16_t x371 = INT16_MIN;
	uint8_t x372 = 2U;
	int32_t t7 = 161732;

	t7 = ((x369/(x370*x371))>>x372);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x386 = 16564113996788LLU;
	uint32_t x388 = 1U;
	uint64_t t8 = 25322802435538395LLU;

	t8 = ((x385/(x386*x387))>>x388);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x413 = 12335U;
	int8_t x414 = INT8_MIN;
	uint16_t x415 = 1U;
	uint32_t x416 = 7U;
	uint32_t t9 = 1U;

	t9 = ((x413/(x414*x415))>>x416);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x445 = 12;
	int8_t x447 = -59;
	uint16_t x448 = 4U;
	volatile int32_t t10 = -71376555;

	t10 = ((x445/(x446*x447))>>x448);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int16_t x469 = -2;
	int64_t x470 = -1LL;
	volatile int8_t x471 = 1;
	uint16_t x472 = 14U;

	t11 = ((x469/(x470*x471))>>x472);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x534 = 5794U;
	uint16_t x535 = 38U;
	volatile int32_t t12 = -69846554;

	t12 = ((x533/(x534*x535))>>x536);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x586 = -1LL;
	uint8_t x587 = 109U;
	uint16_t x588 = 24U;
	int64_t t13 = 20956093514505LL;

	t13 = ((x585/(x586*x587))>>x588);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x645 = INT32_MIN;
	int8_t x646 = INT8_MIN;
	uint8_t x647 = 91U;
	int16_t x648 = 0;
	static volatile int32_t t14 = -2;

	t14 = ((x645/(x646*x647))>>x648);

	if (t14 != 184365) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x670 = 127368351LLU;
	static int16_t x672 = 1;
	uint64_t t15 = 3199486059170LLU;

	t15 = ((x669/(x670*x671))>>x672);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x733 = 89165337LLU;
	int16_t x736 = 3;
	uint64_t t16 = 9LLU;

	t16 = ((x733/(x734*x735))>>x736);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x761 = 1;
	static int16_t x762 = 1;
	int8_t x763 = INT8_MIN;

	t17 = ((x761/(x762*x763))>>x764);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x769 = INT32_MIN;
	uint8_t x770 = UINT8_MAX;
	int64_t x771 = -1LL;
	int8_t x772 = 4;
	volatile int64_t t18 = 29984500LL;

	t18 = ((x769/(x770*x771))>>x772);

	if (t18 != 526344LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint64_t x817 = UINT64_MAX;
	static int8_t x819 = 12;
	uint16_t x820 = 8U;
	uint64_t t19 = 512296553132616271LLU;

	t19 = ((x817/(x818*x819))>>x820);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x825 = 3411480552551LLU;
	int16_t x826 = -20;
	int16_t x827 = -1;
	uint32_t x828 = 1U;
	uint64_t t20 = 11139LLU;

	t20 = ((x825/(x826*x827))>>x828);

	if (t20 != 85287013813LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x830 = INT8_MIN;
	uint64_t x831 = UINT64_MAX;
	int16_t x832 = 8;
	uint64_t t21 = 3087025652167LLU;

	t21 = ((x829/(x830*x831))>>x832);

	if (t21 != 562949953421311LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x861 = UINT8_MAX;
	volatile uint64_t x862 = 6155LLU;
	int8_t x863 = INT8_MAX;
	volatile uint32_t x864 = 1U;

	t22 = ((x861/(x862*x863))>>x864);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x921 = 6;
	int8_t x922 = INT8_MAX;
	static uint16_t x923 = 42U;
	int32_t x924 = 18;
	static volatile int32_t t23 = -750691;

	t23 = ((x921/(x922*x923))>>x924);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1045 = -1LL;
	int64_t x1046 = 110LL;
	uint16_t x1048 = 3U;
	int64_t t24 = 2647133733LL;

	t24 = ((x1045/(x1046*x1047))>>x1048);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x1069 = -1;
	int16_t x1070 = INT16_MAX;
	int32_t x1071 = -15;
	int8_t x1072 = 14;

	t25 = ((x1069/(x1070*x1071))>>x1072);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x1097 = UINT64_MAX;
	volatile int32_t x1099 = -1;
	int32_t x1100 = 1;
	volatile uint64_t t26 = 242504355270271LLU;

	t26 = ((x1097/(x1098*x1099))>>x1100);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1173 = INT64_MIN;
	uint8_t x1176 = 7U;
	volatile uint64_t t27 = 28587304293647LLU;

	t27 = ((x1173/(x1174*x1175))>>x1176);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1277 = INT16_MAX;
	int16_t x1279 = -3342;
	int16_t x1280 = 0;
	static volatile int32_t t28 = 0;

	t28 = ((x1277/(x1278*x1279))>>x1280);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x1309 = 3172;
	int16_t x1310 = INT16_MIN;
	int8_t x1311 = INT8_MIN;
	uint32_t x1312 = 30U;
	int32_t t29 = -345399337;

	t29 = ((x1309/(x1310*x1311))>>x1312);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x1357 = 312214280196692444LL;
	static int64_t x1358 = 21LL;
	uint32_t x1359 = 367812U;
	uint8_t x1360 = 27U;
	int64_t t30 = 201667124293911119LL;

	t30 = ((x1357/(x1358*x1359))>>x1360);

	if (t30 != 301LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1393 = -1;
	int8_t x1394 = INT8_MIN;
	volatile int32_t x1395 = -434;
	volatile int32_t t31 = -1;

	t31 = ((x1393/(x1394*x1395))>>x1396);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1458 = 5486U;
	uint16_t x1459 = 16899U;
	volatile int32_t t32 = -382031483;

	t32 = ((x1457/(x1458*x1459))>>x1460);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x1477 = 276053488U;
	uint32_t x1478 = 5324828U;
	volatile uint32_t x1479 = 3U;
	uint8_t x1480 = 0U;
	volatile uint32_t t33 = 458550084U;

	t33 = ((x1477/(x1478*x1479))>>x1480);

	if (t33 != 17U) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x1502 = 5621U;
	volatile uint64_t x1503 = UINT64_MAX;
	uint64_t t34 = 38866277LLU;

	t34 = ((x1501/(x1502*x1503))>>x1504);

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x1629 = UINT16_MAX;
	int64_t x1631 = -1LL;
	int16_t x1632 = 10;
	volatile int64_t t35 = 1855038448LL;

	t35 = ((x1629/(x1630*x1631))>>x1632);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1657 = -1;
	int64_t x1658 = -81417524LL;
	int8_t x1660 = 2;

	t36 = ((x1657/(x1658*x1659))>>x1660);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x1677 = 12;
	volatile uint32_t x1678 = 871U;
	static uint16_t x1679 = UINT16_MAX;
	uint8_t x1680 = 4U;
	volatile uint32_t t37 = 8155U;

	t37 = ((x1677/(x1678*x1679))>>x1680);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1689 = -13;
	int16_t x1690 = INT16_MIN;
	int64_t x1691 = -1LL;
	int8_t x1692 = 20;
	int64_t t38 = -1LL;

	t38 = ((x1689/(x1690*x1691))>>x1692);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1701 = -1;
	uint16_t x1703 = UINT16_MAX;
	volatile int32_t t39 = 4;

	t39 = ((x1701/(x1702*x1703))>>x1704);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x1729 = UINT32_MAX;
	int16_t x1730 = -1;

	t40 = ((x1729/(x1730*x1731))>>x1732);

	if (t40 != 4194303U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x1737 = -855;
	static uint16_t x1738 = 4963U;
	volatile uint32_t x1739 = 19715U;
	volatile int16_t x1740 = 2;
	static uint32_t t41 = 15552U;

	t41 = ((x1737/(x1738*x1739))>>x1740);

	if (t41 != 10U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x1757 = UINT16_MAX;
	static uint8_t x1758 = UINT8_MAX;
	int64_t x1759 = -101398832758LL;
	int32_t x1760 = 7;
	volatile int64_t t42 = 29852512LL;

	t42 = ((x1757/(x1758*x1759))>>x1760);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x1786 = -1LL;
	int8_t x1787 = INT8_MIN;
	static uint8_t x1788 = 14U;
	int64_t t43 = -89495576490465LL;

	t43 = ((x1785/(x1786*x1787))>>x1788);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x1806 = INT32_MAX;
	int32_t x1807 = -1;
	uint8_t x1808 = 11U;
	volatile int32_t t44 = 0;

	t44 = ((x1805/(x1806*x1807))>>x1808);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x1893 = INT64_MIN;
	uint8_t x1894 = UINT8_MAX;
	uint64_t x1895 = UINT64_MAX;
	uint32_t x1896 = 0U;
	static uint64_t t45 = 271763125LLU;

	t45 = ((x1893/(x1894*x1895))>>x1896);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x1925 = 15730U;
	uint32_t x1926 = 3689128U;
	static int8_t x1927 = -3;
	static int8_t x1928 = 0;
	uint32_t t46 = 7U;

	t46 = ((x1925/(x1926*x1927))>>x1928);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x1941 = -15;
	volatile int8_t x1943 = INT8_MIN;
	uint16_t x1944 = 6U;
	int32_t t47 = -171079;

	t47 = ((x1941/(x1942*x1943))>>x1944);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x1985 = -1LL;
	uint8_t x1987 = 120U;
	volatile int8_t x1988 = 1;
	int64_t t48 = -755262997400117782LL;

	t48 = ((x1985/(x1986*x1987))>>x1988);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x2025 = 933;
	uint16_t x2026 = 27170U;
	int16_t x2027 = -1;
	static volatile uint8_t x2028 = 1U;
	volatile int32_t t49 = 92834550;

	t49 = ((x2025/(x2026*x2027))>>x2028);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x2258 = -2;
	uint8_t x2259 = 82U;
	volatile int8_t x2260 = 0;
	volatile int32_t t50 = 9025626;

	t50 = ((x2257/(x2258*x2259))>>x2260);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x2265 = UINT64_MAX;
	static uint32_t x2266 = UINT32_MAX;
	int64_t x2267 = -624397107LL;
	int8_t x2268 = 27;
	volatile uint64_t t51 = 8140076966LLU;

	t51 = ((x2265/(x2266*x2267))>>x2268);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x2309 = INT8_MIN;
	int16_t x2310 = -1;
	volatile int32_t x2311 = INT32_MAX;
	int32_t t52 = 147153;

	t52 = ((x2309/(x2310*x2311))>>x2312);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x2315 = -1;
	int32_t t53 = -1003;

	t53 = ((x2313/(x2314*x2315))>>x2316);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x2465 = -1LL;
	int64_t x2466 = INT64_MAX;
	uint64_t x2467 = 32799666125LLU;
	int16_t x2468 = 7;
	static uint64_t t54 = 358638812LLU;

	t54 = ((x2465/(x2466*x2467))>>x2468);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x2494 = 259604LLU;
	uint16_t x2495 = 1196U;
	int32_t x2496 = 1;
	uint64_t t55 = 27364821047006LLU;

	t55 = ((x2493/(x2494*x2495))>>x2496);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x2553 = INT32_MIN;
	uint8_t x2554 = 5U;
	static int32_t x2555 = -1;
	volatile int8_t x2556 = 0;

	t56 = ((x2553/(x2554*x2555))>>x2556);

	if (t56 != 429496729) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x2573 = -1LL;
	int32_t x2574 = -1;
	uint8_t x2576 = 1U;

	t57 = ((x2573/(x2574*x2575))>>x2576);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x2669 = INT32_MIN;
	volatile uint64_t x2671 = 1031362237LLU;
	int8_t x2672 = 17;
	volatile uint64_t t58 = 2036262272378265LLU;

	t58 = ((x2669/(x2670*x2671))>>x2672);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x2677 = -224971028704654LL;
	uint64_t x2678 = 1LLU;
	volatile int16_t x2679 = -8008;
	volatile uint64_t t59 = 173591LLU;

	t59 = ((x2677/(x2678*x2679))>>x2680);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x2753 = INT8_MAX;
	int64_t x2754 = 421071038321586LL;
	static int16_t x2756 = 4;
	volatile uint64_t t60 = 7843756679562468LLU;

	t60 = ((x2753/(x2754*x2755))>>x2756);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x2761 = UINT64_MAX;
	int8_t x2763 = INT8_MAX;
	uint8_t x2764 = 1U;
	uint64_t t61 = 154927LLU;

	t61 = ((x2761/(x2762*x2763))>>x2764);

	if (t61 != 817379395483LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x2766 = 50533368896911LLU;
	int32_t x2767 = 1787590;
	uint64_t t62 = 5401358122019LLU;

	t62 = ((x2765/(x2766*x2767))>>x2768);

	if (t62 != 1LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x2781 = -14;
	uint8_t x2782 = 4U;
	int32_t t63 = 883242444;

	t63 = ((x2781/(x2782*x2783))>>x2784);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x2809 = -1027;
	volatile uint32_t x2811 = 7739U;
	int8_t x2812 = 1;
	uint32_t t64 = 25521U;

	t64 = ((x2809/(x2810*x2811))>>x2812);

	if (t64 != 9568U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x2813 = INT8_MAX;
	int8_t x2814 = INT8_MIN;
	static int64_t x2815 = -1LL;
	volatile uint8_t x2816 = 41U;

	t65 = ((x2813/(x2814*x2815))>>x2816);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x2873 = 17;
	int16_t x2874 = -1;
	static int16_t x2875 = -1;
	volatile uint32_t x2876 = 4U;
	int32_t t66 = 10;

	t66 = ((x2873/(x2874*x2875))>>x2876);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x2897 = UINT64_MAX;
	volatile uint32_t x2898 = 25U;
	uint16_t x2899 = 24460U;

	t67 = ((x2897/(x2898*x2899))>>x2900);

	if (t67 != 1841209986LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x2910 = UINT32_MAX;
	int8_t x2912 = 50;
	volatile uint64_t t68 = 537620LLU;

	t68 = ((x2909/(x2910*x2911))>>x2912);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x3010 = -1LL;
	int32_t x3011 = -1;
	uint8_t x3012 = 42U;
	static volatile uint64_t t69 = 1789LLU;

	t69 = ((x3009/(x3010*x3011))>>x3012);

	if (t69 != 4194303LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x3042 = -1;
	int8_t x3043 = 62;
	int16_t x3044 = 1;
	volatile uint32_t t70 = 420233711U;

	t70 = ((x3041/(x3042*x3043))>>x3044);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x3085 = 9U;
	int64_t x3087 = -245LL;
	int16_t x3088 = 1;
	int64_t t71 = 324366724LL;

	t71 = ((x3085/(x3086*x3087))>>x3088);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x3161 = 16160314U;
	static int8_t x3162 = -6;
	uint16_t x3163 = UINT16_MAX;
	int16_t x3164 = 2;
	static volatile uint32_t t72 = 1880392U;

	t72 = ((x3161/(x3162*x3163))>>x3164);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x3178 = -1378299LL;
	int8_t x3179 = INT8_MIN;
	int8_t x3180 = 6;
	static int64_t t73 = 407321355572LL;

	t73 = ((x3177/(x3178*x3179))>>x3180);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x3197 = -1;
	uint32_t x3198 = 22U;
	static int16_t x3199 = INT16_MIN;
	uint32_t t74 = 20765U;

	t74 = ((x3197/(x3198*x3199))>>x3200);

	if (t74 != 1U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x3226 = 10564LL;
	int64_t x3227 = -1080239LL;
	uint16_t x3228 = 4U;
	volatile int64_t t75 = -667181144996LL;

	t75 = ((x3225/(x3226*x3227))>>x3228);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x3250 = 392U;

	t76 = ((x3249/(x3250*x3251))>>x3252);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x3453 = 16577LL;
	static int64_t x3454 = INT64_MIN;
	volatile uint8_t x3456 = 29U;
	static uint64_t t77 = 26004922605058086LLU;

	t77 = ((x3453/(x3454*x3455))>>x3456);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x3558 = INT16_MIN;
	int8_t x3559 = INT8_MIN;
	static int16_t x3560 = 0;
	volatile int32_t t78 = -48972376;

	t78 = ((x3557/(x3558*x3559))>>x3560);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x3689 = -1;
	static int64_t x3690 = -1LL;
	static uint16_t x3691 = 12U;
	volatile int64_t t79 = 11LL;

	t79 = ((x3689/(x3690*x3691))>>x3692);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x3953 = 253LLU;
	int8_t x3954 = -1;
	static volatile int16_t x3955 = INT16_MIN;
	uint8_t x3956 = 59U;

	t80 = ((x3953/(x3954*x3955))>>x3956);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x4007 = 5729222895129032LL;
	static uint32_t x4008 = 23U;
	volatile int64_t t81 = 267863410991318LL;

	t81 = ((x4005/(x4006*x4007))>>x4008);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x4013 = 26U;
	uint8_t x4014 = 7U;
	int8_t x4015 = INT8_MAX;
	volatile uint32_t t82 = 1358U;

	t82 = ((x4013/(x4014*x4015))>>x4016);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x4065 = 2;
	volatile int8_t x4067 = INT8_MAX;

	t83 = ((x4065/(x4066*x4067))>>x4068);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x4097 = 8076601U;
	static uint8_t x4100 = 33U;
	uint64_t t84 = 3765920138666601215LLU;

	t84 = ((x4097/(x4098*x4099))>>x4100);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x4113 = 18;
	uint16_t x4115 = UINT16_MAX;
	uint8_t x4116 = 1U;
	int32_t t85 = 86376666;

	t85 = ((x4113/(x4114*x4115))>>x4116);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x4165 = 126U;
	uint64_t x4166 = 76LLU;
	int64_t x4167 = INT64_MAX;
	uint64_t x4168 = 4LLU;
	uint64_t t86 = 359888030177031360LLU;

	t86 = ((x4165/(x4166*x4167))>>x4168);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x4217 = -1LL;
	static volatile int64_t x4218 = -157419978772LL;
	int32_t x4219 = 109085;
	int8_t x4220 = 1;
	static volatile int64_t t87 = -1274403765127182305LL;

	t87 = ((x4217/(x4218*x4219))>>x4220);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x4241 = 45345867U;
	int8_t x4242 = -1;
	static uint64_t x4243 = 440137175LLU;
	int8_t x4244 = 6;
	volatile uint64_t t88 = 206842187027036726LLU;

	t88 = ((x4241/(x4242*x4243))>>x4244);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x4309 = 1320763152U;
	int16_t x4310 = 1;
	int32_t x4311 = INT32_MIN;
	uint8_t x4312 = 19U;
	volatile uint32_t t89 = 3490626U;

	t89 = ((x4309/(x4310*x4311))>>x4312);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x4365 = 3732;
	uint64_t x4366 = 3946254LLU;
	uint64_t x4367 = 62LLU;
	int64_t x4368 = 0LL;
	volatile uint64_t t90 = 229772217096LLU;

	t90 = ((x4365/(x4366*x4367))>>x4368);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x4405 = 0;
	uint64_t x4406 = 94208330003955LLU;
	uint64_t x4407 = 1LLU;
	int8_t x4408 = 2;
	volatile uint64_t t91 = 3564322149484LLU;

	t91 = ((x4405/(x4406*x4407))>>x4408);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x4481 = -1;
	uint64_t x4482 = 8104367114817772734LLU;
	volatile uint64_t t92 = 3556060124372LLU;

	t92 = ((x4481/(x4482*x4483))>>x4484);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x4490 = -3;
	int16_t x4491 = INT16_MAX;
	static uint16_t x4492 = 30U;

	t93 = ((x4489/(x4490*x4491))>>x4492);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x4493 = UINT64_MAX;
	uint64_t x4495 = 50713LLU;
	static volatile int16_t x4496 = 3;
	volatile uint64_t t94 = 14149722427449LLU;

	t94 = ((x4493/(x4494*x4495))>>x4496);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x4502 = 106LLU;
	int8_t x4503 = 1;
	int8_t x4504 = 0;
	uint64_t t95 = 44332852LLU;

	t95 = ((x4501/(x4502*x4503))>>x4504);

	if (t95 != 174025887487825958LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x4522 = 38610885LLU;
	uint32_t x4524 = 3U;
	static uint64_t t96 = 1969LLU;

	t96 = ((x4521/(x4522*x4523))>>x4524);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x4569 = 11024393005222106LLU;
	int64_t x4570 = 30918LL;
	int8_t x4571 = INT8_MAX;
	volatile int16_t x4572 = 27;
	volatile uint64_t t97 = 1502LLU;

	t97 = ((x4569/(x4570*x4571))>>x4572);

	if (t97 != 20LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x4577 = -1;
	int32_t x4580 = 18;
	volatile int32_t t98 = 1;

	t98 = ((x4577/(x4578*x4579))>>x4580);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x4641 = INT16_MAX;
	int16_t x4642 = INT16_MIN;
	int8_t x4643 = INT8_MAX;
	static uint8_t x4644 = 21U;

	t99 = ((x4641/(x4642*x4643))>>x4644);

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

