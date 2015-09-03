#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x68 = 2;
static volatile uint8_t x88 = 3U;
int32_t t3 = 21;
static int32_t x141 = INT32_MAX;
uint8_t x189 = 9U;
uint64_t x277 = 85474079689LLU;
static int32_t x279 = -1;
uint8_t x288 = 51U;
volatile uint64_t x484 = 50LLU;
volatile uint64_t x609 = 22995905LLU;
volatile int64_t x610 = -1LL;
uint16_t x611 = 17U;
int8_t x612 = 57;
int8_t x765 = -1;
static volatile uint16_t x832 = 6U;
static int32_t x854 = INT32_MIN;
volatile uint32_t t19 = 3644753U;
static uint16_t x992 = 6U;
uint8_t x1029 = 85U;
int64_t x1031 = INT64_MIN;
volatile int8_t x1032 = 1;
volatile int64_t t23 = 410813243337LL;
static volatile int32_t t24 = -1048926;
static volatile int64_t t25 = -19551LL;
int64_t x1210 = 5715908481022LL;
static volatile uint32_t t27 = 561U;
int8_t x1308 = 6;
uint8_t x1309 = 100U;
volatile int64_t t29 = 429770753LL;
uint16_t x1320 = 11U;
static volatile int32_t t30 = -6;
uint8_t x1370 = UINT8_MAX;
volatile int32_t x1487 = INT32_MIN;
int8_t x1488 = 1;
int64_t x1534 = -330414LL;
uint16_t x1536 = 2U;
int64_t t35 = -78842LL;
uint8_t x1633 = 101U;
static volatile int64_t x1654 = INT64_MIN;
uint16_t x1671 = 117U;
static uint32_t x1679 = 126675303U;
volatile int32_t t40 = INT32_MAX;
volatile int64_t x1739 = INT64_MIN;
int32_t x1826 = INT32_MIN;
uint64_t t42 = 7109703463908218385LLU;
uint8_t x1852 = 0U;
int8_t x1960 = 0;
int64_t x1992 = 17LL;
volatile int8_t x2198 = INT8_MIN;
volatile int16_t x2437 = INT16_MIN;
uint8_t x2452 = 2U;
uint8_t x2473 = 55U;
volatile uint64_t x2476 = 3LLU;
int8_t x2565 = INT8_MIN;
uint64_t x2677 = UINT64_MAX;
uint32_t x2857 = UINT32_MAX;
uint64_t t58 = 2852661530LLU;
uint8_t x2913 = UINT8_MAX;
static volatile uint32_t t62 = 18U;
uint32_t x2994 = UINT32_MAX;
uint32_t t63 = 2994216U;
uint64_t x3030 = 121864641898LLU;
int16_t x3108 = 23;
uint16_t x3157 = 4989U;
static int64_t x3170 = INT64_MAX;
static uint64_t x3171 = 6008850923LLU;
uint8_t x3186 = UINT8_MAX;
int16_t x3187 = 2;
volatile int64_t x3213 = 0LL;
uint64_t x3229 = 606543LLU;
volatile int64_t x3235 = INT64_MIN;
volatile uint8_t x3236 = 6U;
static volatile int64_t x3285 = 492953035790138107LL;
static uint8_t x3344 = 38U;
int64_t t80 = -24627066599409250LL;
int16_t x3433 = INT16_MIN;
static uint16_t x3457 = UINT16_MAX;
volatile int32_t t84 = -18958992;
uint64_t t85 = 1702817LLU;
static int32_t x3481 = 13;
volatile int16_t x3482 = INT16_MIN;
volatile int64_t t87 = 152824LL;
volatile int16_t x3532 = 1;
volatile int8_t x3573 = 0;
static int8_t x3666 = 4;
int64_t x3667 = INT64_MIN;
int32_t t91 = 109;
static uint8_t x3762 = 119U;
uint32_t t94 = 56U;
uint64_t x3809 = UINT64_MAX;
uint64_t t95 = 8133LLU;
static int32_t x3875 = INT32_MIN;
uint8_t x3876 = 3U;
static int8_t x3924 = 3;
uint32_t x3972 = 53U;
uint64_t x4026 = UINT64_MAX;
uint32_t x4028 = 1U;
uint64_t t99 = 18147531475LLU;


void f0(void) {
	int8_t x65 = -1;
	int32_t x66 = INT32_MAX;
	int32_t x67 = 8163;
	volatile int32_t t0 = 104;

	t0 = ((x65+(x66/x67))>>x68);

	if (t0 != 65768) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x85 = -1;
	int32_t x86 = -365;
	volatile uint64_t x87 = UINT64_MAX;
	uint64_t t1 = 19140018LLU;

	t1 = ((x85+(x86/x87))>>x88);

	if (t1 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x125 = INT32_MIN;
	uint16_t x126 = 2781U;
	static uint64_t x127 = 775302LLU;
	uint16_t x128 = 0U;
	uint64_t t2 = 28560194475LLU;

	t2 = ((x125+(x126/x127))>>x128);

	if (t2 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x129 = 10U;
	int8_t x130 = -1;
	static volatile int8_t x131 = INT8_MAX;
	int16_t x132 = 4;

	t3 = ((x129+(x130/x131))>>x132);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x133 = 31;
	static int8_t x134 = INT8_MIN;
	volatile uint64_t x135 = UINT64_MAX;
	int16_t x136 = 41;
	volatile uint64_t t4 = 459947981417171LLU;

	t4 = ((x133+(x134/x135))>>x136);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x142 = 5609U;
	uint64_t x143 = 79LLU;
	uint8_t x144 = 0U;
	uint64_t t5 = 313834102933474135LLU;

	t5 = ((x141+(x142/x143))>>x144);

	if (t5 != 2147483718LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x190 = -2;
	static uint8_t x191 = 38U;
	uint16_t x192 = 2U;
	int32_t t6 = -273;

	t6 = ((x189+(x190/x191))>>x192);

	if (t6 != 2) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x229 = INT32_MIN;
	int8_t x230 = -1;
	uint32_t x231 = 129967U;
	int8_t x232 = 11;
	uint32_t t7 = 114138U;

	t7 = ((x229+(x230/x231))>>x232);

	if (t7 != 1048592U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x278 = INT32_MAX;
	uint16_t x280 = 0U;
	volatile uint64_t t8 = 20282878080263LLU;

	t8 = ((x277+(x278/x279))>>x280);

	if (t8 != 83326596042LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x285 = INT64_MIN;
	uint64_t x286 = UINT64_MAX;
	uint8_t x287 = UINT8_MAX;
	uint64_t t9 = 8176848431204677LLU;

	t9 = ((x285+(x286/x287))>>x288);

	if (t9 != 4128LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x297 = INT16_MIN;
	int8_t x298 = -1;
	uint32_t x299 = UINT32_MAX;
	int8_t x300 = 0;
	volatile uint32_t t10 = 3668870U;

	t10 = ((x297+(x298/x299))>>x300);

	if (t10 != 4294934529U) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x465 = 432;
	static int8_t x466 = -1;
	volatile uint16_t x467 = UINT16_MAX;
	static uint32_t x468 = 0U;
	static volatile int32_t t11 = 3262461;

	t11 = ((x465+(x466/x467))>>x468);

	if (t11 != 432) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x481 = INT16_MIN;
	int8_t x482 = INT8_MIN;
	uint64_t x483 = UINT64_MAX;
	uint64_t t12 = 132699213711LLU;

	t12 = ((x481+(x482/x483))>>x484);

	if (t12 != 16383LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x585 = -1;
	uint16_t x586 = 3640U;
	uint16_t x587 = 7U;
	uint32_t x588 = 31U;
	static volatile int32_t t13 = 25;

	t13 = ((x585+(x586/x587))>>x588);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t t14 = 165108963027LLU;

	t14 = ((x609+(x610/x611))>>x612);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x766 = INT64_MIN;
	int8_t x767 = INT8_MIN;
	int8_t x768 = 22;
	int64_t t15 = 13813388LL;

	t15 = ((x765+(x766/x767))>>x768);

	if (t15 != 17179869183LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x829 = 17U;
	uint64_t x830 = 4379LLU;
	static int64_t x831 = -268767371380LL;
	volatile uint64_t t16 = 356655LLU;

	t16 = ((x829+(x830/x831))>>x832);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x841 = 26U;
	static volatile int32_t x842 = -3;
	static int32_t x843 = 1;
	uint16_t x844 = 1U;
	volatile int32_t t17 = -384770433;

	t17 = ((x841+(x842/x843))>>x844);

	if (t17 != 11) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x853 = INT16_MIN;
	uint64_t x855 = UINT64_MAX;
	int16_t x856 = 0;
	static volatile uint64_t t18 = 1306251408068986507LLU;

	t18 = ((x853+(x854/x855))>>x856);

	if (t18 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x857 = 2015903976U;
	volatile int32_t x858 = 0;
	volatile uint32_t x859 = 124403U;
	uint32_t x860 = 6U;

	t19 = ((x857+(x858/x859))>>x860);

	if (t19 != 31498499U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x873 = 13786169745616LL;
	static uint8_t x874 = 66U;
	uint64_t x875 = 26730LLU;
	uint8_t x876 = 33U;
	volatile uint64_t t20 = 14957LLU;

	t20 = ((x873+(x874/x875))>>x876);

	if (t20 != 1604LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x941 = INT8_MIN;
	uint64_t x942 = 56380609154552087LLU;
	int32_t x943 = INT32_MIN;
	static uint8_t x944 = 4U;
	volatile uint64_t t21 = 23181204110598LLU;

	t21 = ((x941+(x942/x943))>>x944);

	if (t21 != 1152921504606846968LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x989 = 17221102817124676LLU;
	static int16_t x990 = INT16_MIN;
	volatile int64_t x991 = -2131424300LL;
	uint64_t t22 = 257889133450483LLU;

	t22 = ((x989+(x990/x991))>>x992);

	if (t22 != 269079731517573LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1030 = 21U;

	t23 = ((x1029+(x1030/x1031))>>x1032);

	if (t23 != 42LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x1133 = 32257U;
	int32_t x1134 = INT32_MIN;
	static int32_t x1135 = -8;
	static uint32_t x1136 = 6U;

	t24 = ((x1133+(x1134/x1135))>>x1136);

	if (t24 != 4194808) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x1149 = 8U;
	int64_t x1150 = -1LL;
	volatile uint8_t x1151 = UINT8_MAX;
	int8_t x1152 = 16;

	t25 = ((x1149+(x1150/x1151))>>x1152);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1209 = INT8_MIN;
	volatile uint32_t x1211 = 1211U;
	int8_t x1212 = 7;
	int64_t t26 = 1159055LL;

	t26 = ((x1209+(x1210/x1211))>>x1212);

	if (t26 != 36874924LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x1297 = -9;
	uint32_t x1298 = 207716U;
	volatile int16_t x1299 = 67;
	uint8_t x1300 = 12U;

	t27 = ((x1297+(x1298/x1299))>>x1300);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1305 = 2278U;
	uint64_t x1306 = 551401378404538LLU;
	static int64_t x1307 = -1LL;
	uint64_t t28 = 369141030995LLU;

	t28 = ((x1305+(x1306/x1307))>>x1308);

	if (t28 != 35LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x1310 = -6;
	volatile int64_t x1311 = -59883LL;
	static volatile int8_t x1312 = 1;

	t29 = ((x1309+(x1310/x1311))>>x1312);

	if (t29 != 50LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1317 = INT32_MAX;
	int32_t x1318 = -94;
	int32_t x1319 = -6984;

	t30 = ((x1317+(x1318/x1319))>>x1320);

	if (t30 != 1048575) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x1369 = UINT16_MAX;
	int8_t x1371 = -12;
	static int8_t x1372 = 4;
	volatile int32_t t31 = -4590168;

	t31 = ((x1369+(x1370/x1371))>>x1372);

	if (t31 != 4094) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1485 = -1;
	uint32_t x1486 = 953220U;
	volatile uint32_t t32 = 6235U;

	t32 = ((x1485+(x1486/x1487))>>x1488);

	if (t32 != 2147483647U) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x1533 = UINT16_MAX;
	int16_t x1535 = -1;
	volatile int64_t t33 = 37LL;

	t33 = ((x1533+(x1534/x1535))>>x1536);

	if (t33 != 98987LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x1553 = UINT16_MAX;
	int64_t x1554 = -302LL;
	int32_t x1555 = 1;
	uint16_t x1556 = 7U;
	int64_t t34 = -19513726692LL;

	t34 = ((x1553+(x1554/x1555))>>x1556);

	if (t34 != 509LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1585 = UINT8_MAX;
	int32_t x1586 = INT32_MAX;
	int64_t x1587 = INT64_MIN;
	uint8_t x1588 = 14U;

	t35 = ((x1585+(x1586/x1587))>>x1588);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1634 = INT8_MIN;
	int8_t x1635 = INT8_MIN;
	int32_t x1636 = 0;
	static volatile int32_t t36 = -249;

	t36 = ((x1633+(x1634/x1635))>>x1636);

	if (t36 != 102) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x1653 = 164572025U;
	static int32_t x1655 = INT32_MIN;
	uint8_t x1656 = 3U;
	volatile int64_t t37 = -4895169042907LL;

	t37 = ((x1653+(x1654/x1655))>>x1656);

	if (t37 != 557442415LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x1669 = 0U;
	uint64_t x1670 = 57429LLU;
	static uint8_t x1672 = 4U;
	uint64_t t38 = 6466020560250616107LLU;

	t38 = ((x1669+(x1670/x1671))>>x1672);

	if (t38 != 30LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1677 = -1931;
	uint16_t x1678 = UINT16_MAX;
	static int8_t x1680 = 1;
	static volatile uint32_t t39 = 401U;

	t39 = ((x1677+(x1678/x1679))>>x1680);

	if (t39 != 2147482682U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x1717 = INT32_MAX;
	int8_t x1718 = INT8_MAX;
	static volatile int32_t x1719 = INT32_MIN;
	int32_t x1720 = 0;

	t40 = ((x1717+(x1718/x1719))>>x1720);

	if (t40 != INT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x1737 = INT16_MAX;
	uint16_t x1738 = 1241U;
	volatile uint16_t x1740 = 22U;
	volatile int64_t t41 = 654094LL;

	t41 = ((x1737+(x1738/x1739))>>x1740);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x1825 = 63;
	volatile uint64_t x1827 = 70836812322LLU;
	uint32_t x1828 = 9U;

	t42 = ((x1825+(x1826/x1827))>>x1828);

	if (t42 != 508616LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x1849 = 15081765U;
	volatile int8_t x1850 = -27;
	uint32_t x1851 = UINT32_MAX;
	static uint32_t t43 = 79982U;

	t43 = ((x1849+(x1850/x1851))>>x1852);

	if (t43 != 15081765U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x1893 = -54;
	volatile int16_t x1894 = 10666;
	volatile uint8_t x1895 = 5U;
	int32_t x1896 = 6;
	static volatile int32_t t44 = -6788787;

	t44 = ((x1893+(x1894/x1895))>>x1896);

	if (t44 != 32) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1897 = INT8_MIN;
	static uint64_t x1898 = 2054787263062LLU;
	int8_t x1899 = INT8_MIN;
	uint8_t x1900 = 31U;
	volatile uint64_t t45 = 347798707678251295LLU;

	t45 = ((x1897+(x1898/x1899))>>x1900);

	if (t45 != 8589934591LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x1933 = INT32_MIN;
	uint32_t x1934 = 1550257U;
	uint16_t x1935 = 15629U;
	volatile uint8_t x1936 = 0U;
	uint32_t t46 = 102042883U;

	t46 = ((x1933+(x1934/x1935))>>x1936);

	if (t46 != 2147483747U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x1957 = INT64_MIN;
	uint64_t x1958 = 1898020249548225LLU;
	int32_t x1959 = 1035368876;
	volatile uint64_t t47 = 408807LLU;

	t47 = ((x1957+(x1958/x1959))>>x1960);

	if (t47 != 9223372036856608990LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x1989 = INT16_MIN;
	static int32_t x1990 = INT32_MAX;
	static uint16_t x1991 = 1U;
	volatile int32_t t48 = 4805;

	t48 = ((x1989+(x1990/x1991))>>x1992);

	if (t48 != 16383) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x2185 = -1;
	int16_t x2186 = -13;
	volatile uint32_t x2187 = 27U;
	uint8_t x2188 = 2U;
	volatile uint32_t t49 = 191625U;

	t49 = ((x2185+(x2186/x2187))>>x2188);

	if (t49 != 39768215U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x2197 = INT8_MIN;
	uint64_t x2199 = 274134273538LLU;
	uint32_t x2200 = 2U;
	static uint64_t t50 = 887251027966702502LLU;

	t50 = ((x2197+(x2198/x2199))>>x2200);

	if (t50 != 16822694LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x2389 = -1;
	int32_t x2390 = -1;
	volatile int16_t x2391 = -1;
	static volatile int64_t x2392 = 1LL;
	static volatile int32_t t51 = 1457;

	t51 = ((x2389+(x2390/x2391))>>x2392);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x2438 = -632385740607291LL;
	int32_t x2439 = -217382;
	static volatile uint32_t x2440 = 20U;
	int64_t t52 = 4526713600774LL;

	t52 = ((x2437+(x2438/x2439))>>x2440);

	if (t52 != 2774LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x2449 = -1;
	int16_t x2450 = INT16_MIN;
	int32_t x2451 = -8;
	static volatile int32_t t53 = 17;

	t53 = ((x2449+(x2450/x2451))>>x2452);

	if (t53 != 1023) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x2474 = 211U;
	uint8_t x2475 = 3U;
	static volatile int32_t t54 = -158268959;

	t54 = ((x2473+(x2474/x2475))>>x2476);

	if (t54 != 15) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int16_t x2517 = INT16_MAX;
	int8_t x2518 = INT8_MIN;
	int64_t x2519 = INT64_MAX;
	static uint8_t x2520 = 50U;
	volatile int64_t t55 = -237202587LL;

	t55 = ((x2517+(x2518/x2519))>>x2520);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x2566 = 93U;
	uint64_t x2567 = 4464663LLU;
	volatile int32_t x2568 = 0;
	volatile uint64_t t56 = 2496231039463445LLU;

	t56 = ((x2565+(x2566/x2567))>>x2568);

	if (t56 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x2678 = UINT32_MAX;
	static uint32_t x2679 = UINT32_MAX;
	int8_t x2680 = 1;
	volatile uint64_t t57 = 473247283943138568LLU;

	t57 = ((x2677+(x2678/x2679))>>x2680);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x2858 = 3;
	volatile uint64_t x2859 = 8929317543070731437LLU;
	uint16_t x2860 = 10U;

	t58 = ((x2857+(x2858/x2859))>>x2860);

	if (t58 != 4194303LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x2893 = UINT8_MAX;
	static volatile int16_t x2894 = -227;
	uint64_t x2895 = 4058926252185853LLU;
	uint16_t x2896 = 63U;
	static uint64_t t59 = 99523LLU;

	t59 = ((x2893+(x2894/x2895))>>x2896);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x2914 = 2;
	int32_t x2915 = INT32_MAX;
	uint8_t x2916 = 6U;
	volatile int32_t t60 = 85;

	t60 = ((x2913+(x2914/x2915))>>x2916);

	if (t60 != 3) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x2921 = 2440210222291LL;
	int32_t x2922 = 495;
	volatile int64_t x2923 = INT64_MIN;
	uint8_t x2924 = 0U;
	static int64_t t61 = 12294LL;

	t61 = ((x2921+(x2922/x2923))>>x2924);

	if (t61 != 2440210222291LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x2949 = UINT8_MAX;
	static volatile uint32_t x2950 = 5435983U;
	int16_t x2951 = -1093;
	int32_t x2952 = 0;

	t62 = ((x2949+(x2950/x2951))>>x2952);

	if (t62 != 255U) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint8_t x2993 = UINT8_MAX;
	int8_t x2995 = INT8_MAX;
	static uint8_t x2996 = 0U;

	t63 = ((x2993+(x2994/x2995))>>x2996);

	if (t63 != 33818895U) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x3001 = INT16_MAX;
	static uint16_t x3002 = 17362U;
	volatile int32_t x3003 = INT32_MIN;
	static volatile int8_t x3004 = 2;
	volatile int32_t t64 = -27255;

	t64 = ((x3001+(x3002/x3003))>>x3004);

	if (t64 != 8191) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x3029 = INT8_MIN;
	int32_t x3031 = -153;
	int8_t x3032 = 0;
	volatile uint64_t t65 = 2812397LLU;

	t65 = ((x3029+(x3030/x3031))>>x3032);

	if (t65 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x3045 = 31249905432LLU;
	int8_t x3046 = INT8_MIN;
	int32_t x3047 = INT32_MIN;
	uint16_t x3048 = 44U;
	volatile uint64_t t66 = 827757687LLU;

	t66 = ((x3045+(x3046/x3047))>>x3048);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x3105 = INT16_MAX;
	int16_t x3106 = INT16_MIN;
	static uint16_t x3107 = 679U;
	int32_t t67 = -21624839;

	t67 = ((x3105+(x3106/x3107))>>x3108);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x3158 = UINT32_MAX;
	int16_t x3159 = INT16_MIN;
	volatile uint8_t x3160 = 7U;
	uint32_t t68 = 116721U;

	t68 = ((x3157+(x3158/x3159))>>x3160);

	if (t68 != 38U) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x3169 = 3U;
	uint8_t x3172 = 31U;
	volatile uint64_t t69 = 36386374LLU;

	t69 = ((x3169+(x3170/x3171))>>x3172);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x3185 = 112711;
	uint8_t x3188 = 0U;
	volatile int32_t t70 = -249;

	t70 = ((x3185+(x3186/x3187))>>x3188);

	if (t70 != 112838) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x3214 = -1;
	static volatile int16_t x3215 = -1;
	int8_t x3216 = 5;
	volatile int64_t t71 = -1809LL;

	t71 = ((x3213+(x3214/x3215))>>x3216);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x3230 = INT8_MAX;
	uint32_t x3231 = 63663082U;
	static uint32_t x3232 = 2U;
	volatile uint64_t t72 = 45601LLU;

	t72 = ((x3229+(x3230/x3231))>>x3232);

	if (t72 != 151635LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x3233 = UINT8_MAX;
	uint16_t x3234 = UINT16_MAX;
	volatile int64_t t73 = -3LL;

	t73 = ((x3233+(x3234/x3235))>>x3236);

	if (t73 != 3LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x3286 = INT8_MIN;
	int16_t x3287 = -1;
	uint16_t x3288 = 20U;
	int64_t t74 = 3LL;

	t74 = ((x3285+(x3286/x3287))>>x3288);

	if (t74 != 470116649427LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x3341 = 99357U;
	int64_t x3342 = INT64_MAX;
	volatile int32_t x3343 = INT32_MAX;
	volatile int64_t t75 = -8515580927LL;

	t75 = ((x3341+(x3342/x3343))>>x3344);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x3349 = INT8_MIN;
	volatile int64_t x3350 = -460LL;
	volatile int8_t x3351 = -1;
	uint8_t x3352 = 4U;
	volatile int64_t t76 = 2LL;

	t76 = ((x3349+(x3350/x3351))>>x3352);

	if (t76 != 20LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x3365 = 141;
	int64_t x3366 = INT64_MIN;
	volatile int32_t x3367 = INT32_MIN;
	static int8_t x3368 = 1;
	volatile int64_t t77 = -1566498219644544LL;

	t77 = ((x3365+(x3366/x3367))>>x3368);

	if (t77 != 2147483718LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x3369 = 345166LLU;
	volatile uint8_t x3370 = 1U;
	int16_t x3371 = INT16_MIN;
	int16_t x3372 = 0;
	volatile uint64_t t78 = 117LLU;

	t78 = ((x3369+(x3370/x3371))>>x3372);

	if (t78 != 345166LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x3377 = 4;
	uint64_t x3378 = UINT64_MAX;
	uint32_t x3379 = 7682431U;
	uint8_t x3380 = 25U;
	volatile uint64_t t79 = 490LLU;

	t79 = ((x3377+(x3378/x3379))>>x3380);

	if (t79 != 71560LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x3381 = UINT32_MAX;
	volatile int64_t x3382 = -268LL;
	static int64_t x3383 = 30858LL;
	uint8_t x3384 = 16U;

	t80 = ((x3381+(x3382/x3383))>>x3384);

	if (t80 != 65535LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x3434 = 702019445817LLU;
	int32_t x3435 = -1;
	int16_t x3436 = 25;
	uint64_t t81 = 251464202517122LLU;

	t81 = ((x3433+(x3434/x3435))>>x3436);

	if (t81 != 549755813887LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x3449 = INT32_MIN;
	static uint64_t x3450 = 8397886122466972LLU;
	uint16_t x3451 = 16U;
	uint8_t x3452 = 4U;
	uint64_t t82 = 5252851199LLU;

	t82 = ((x3449+(x3450/x3451))>>x3452);

	if (t82 != 32804108448158LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x3453 = INT32_MAX;
	static int32_t x3454 = -175484;
	static int64_t x3455 = 126177741LL;
	int16_t x3456 = 50;
	static int64_t t83 = 920378948427LL;

	t83 = ((x3453+(x3454/x3455))>>x3456);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint16_t x3458 = 31527U;
	volatile int32_t x3459 = INT32_MAX;
	static int8_t x3460 = 0;

	t84 = ((x3457+(x3458/x3459))>>x3460);

	if (t84 != 65535) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x3461 = 1U;
	uint64_t x3462 = 62317892333420LLU;
	int8_t x3463 = INT8_MAX;
	uint32_t x3464 = 36U;

	t85 = ((x3461+(x3462/x3463))>>x3464);

	if (t85 != 7LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x3483 = INT8_MIN;
	int8_t x3484 = 0;
	int32_t t86 = 1;

	t86 = ((x3481+(x3482/x3483))>>x3484);

	if (t86 != 269) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x3485 = UINT32_MAX;
	volatile int64_t x3486 = INT64_MIN;
	static int8_t x3487 = INT8_MIN;
	uint16_t x3488 = 2U;

	t87 = ((x3485+(x3486/x3487))>>x3488);

	if (t87 != 18014399583223807LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x3529 = UINT32_MAX;
	int16_t x3530 = INT16_MAX;
	volatile int16_t x3531 = 1;
	uint32_t t88 = 924141U;

	t88 = ((x3529+(x3530/x3531))>>x3532);

	if (t88 != 16383U) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x3574 = 98U;
	uint16_t x3575 = 107U;
	volatile int64_t x3576 = 7LL;
	int32_t t89 = 378341;

	t89 = ((x3573+(x3574/x3575))>>x3576);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x3665 = INT64_MAX;
	volatile uint16_t x3668 = 8U;
	volatile int64_t t90 = -1LL;

	t90 = ((x3665+(x3666/x3667))>>x3668);

	if (t90 != 36028797018963967LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x3733 = 351;
	volatile uint8_t x3734 = 101U;
	uint16_t x3735 = UINT16_MAX;
	int16_t x3736 = 0;

	t91 = ((x3733+(x3734/x3735))>>x3736);

	if (t91 != 351) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x3761 = INT16_MAX;
	int32_t x3763 = INT32_MIN;
	uint32_t x3764 = 0U;
	static volatile int32_t t92 = -1;

	t92 = ((x3761+(x3762/x3763))>>x3764);

	if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x3793 = INT32_MIN;
	uint32_t x3794 = 12U;
	int16_t x3795 = 2271;
	static uint8_t x3796 = 3U;
	uint32_t t93 = 257U;

	t93 = ((x3793+(x3794/x3795))>>x3796);

	if (t93 != 268435456U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x3797 = INT32_MIN;
	uint32_t x3798 = UINT32_MAX;
	int16_t x3799 = -938;
	volatile int8_t x3800 = 1;

	t94 = ((x3797+(x3798/x3799))>>x3800);

	if (t94 != 1073741824U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x3810 = INT32_MIN;
	uint64_t x3811 = 6760038LLU;
	uint8_t x3812 = 1U;

	t95 = ((x3809+(x3810/x3811))>>x3812);

	if (t95 != 1364396477620LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x3873 = 6;
	volatile int8_t x3874 = INT8_MIN;
	volatile int32_t t96 = -1;

	t96 = ((x3873+(x3874/x3875))>>x3876);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x3921 = 4715146U;
	uint8_t x3922 = 88U;
	uint32_t x3923 = UINT32_MAX;
	uint32_t t97 = 1U;

	t97 = ((x3921+(x3922/x3923))>>x3924);

	if (t97 != 589393U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x3969 = INT64_MIN;
	uint64_t x3970 = 516691402529LLU;
	static int32_t x3971 = -7801202;
	volatile uint64_t t98 = 3902419153364221LLU;

	t98 = ((x3969+(x3970/x3971))>>x3972);

	if (t98 != 1024LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x4025 = UINT64_MAX;
	static volatile uint32_t x4027 = 92284465U;

	t99 = ((x4025+(x4026/x4027))>>x4028);

	if (t99 != 99945012812LLU) { NG(); } else { ; }
	
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

