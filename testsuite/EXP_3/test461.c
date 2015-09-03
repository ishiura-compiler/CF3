#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x44 = -1;
uint32_t x50 = UINT32_MAX;
volatile int64_t x182 = 265LL;
static int32_t t5 = -2031570;
int8_t x263 = -1;
int32_t x342 = INT32_MIN;
int64_t x414 = -188997LL;
static int8_t x415 = -1;
volatile uint8_t x416 = 0U;
int32_t x450 = -1;
volatile int8_t x452 = -1;
volatile int32_t t12 = -834019501;
uint8_t x549 = 120U;
static int8_t x567 = 0;
volatile int32_t t16 = -40;
uint16_t x684 = 1U;
static int8_t x708 = -1;
volatile int32_t t18 = -874659403;
int16_t x737 = INT16_MIN;
static volatile uint32_t x831 = UINT32_MAX;
static volatile uint32_t x907 = UINT32_MAX;
int32_t t22 = 370;
static uint16_t x910 = 11U;
volatile int64_t x933 = -1LL;
int64_t x972 = 33143452208LL;
int8_t x1001 = INT8_MIN;
uint64_t x1039 = UINT64_MAX;
static volatile int32_t t28 = -1061375;
int64_t x1157 = -1LL;
uint16_t x1159 = 0U;
volatile int64_t x1181 = 131974585LL;
int64_t x1182 = INT64_MAX;
volatile int64_t x1183 = INT64_MAX;
int32_t t33 = -67120;
int64_t x1316 = -1LL;
int32_t x1409 = INT32_MIN;
static uint32_t x1411 = 28545410U;
volatile int32_t x1412 = INT32_MIN;
uint16_t x1431 = 0U;
int32_t t38 = 25039759;
volatile int32_t t43 = 8832109;
int32_t x1642 = -927853;
static uint64_t x1662 = UINT64_MAX;
static int32_t x1714 = 289417;
int8_t x1766 = -63;
int16_t x1767 = INT16_MIN;
volatile int32_t x1829 = INT32_MAX;
static volatile uint8_t x1839 = 27U;
static int64_t x1866 = INT64_MIN;
uint32_t x1868 = 0U;
int64_t x1895 = -1LL;
uint32_t x1968 = UINT32_MAX;
int16_t x2032 = -1;
volatile int32_t t54 = -6;
int8_t x2043 = -14;
static volatile int16_t x2109 = INT16_MIN;
uint64_t x2131 = 63757495166251LLU;
int32_t t61 = -15363283;
volatile int32_t t63 = -9;
int64_t x2330 = -696109027LL;
uint32_t x2595 = 24U;
int32_t x2596 = INT32_MIN;
volatile int64_t x2647 = INT64_MIN;
volatile int32_t t73 = 73159342;
int8_t x2657 = -29;
volatile uint8_t x2658 = UINT8_MAX;
int8_t x2814 = -1;
int8_t x2890 = INT8_MIN;
static int64_t x2918 = 21429LL;
int64_t x2981 = -23LL;
static int32_t t82 = -897;
volatile int32_t x3011 = -1;
uint8_t x3037 = 3U;
static uint64_t x3040 = UINT64_MAX;
int16_t x3177 = INT16_MIN;
uint8_t x3178 = UINT8_MAX;
int8_t x3180 = 6;
int32_t t86 = -62;
int64_t x3194 = INT64_MIN;
uint8_t x3235 = 2U;
volatile int32_t t89 = 476;
int32_t t90 = -657989;
static volatile int32_t x3454 = INT32_MAX;
uint32_t x3526 = UINT32_MAX;
int32_t x3552 = 0;
static int32_t t93 = -176695;
int32_t x3625 = 9476;
static volatile int16_t x3635 = -1;
int8_t x3677 = -1;
static volatile int32_t t97 = 1092;
static uint8_t x3690 = UINT8_MAX;


void f0(void) {
	int16_t x41 = INT16_MIN;
	int64_t x42 = -1LL;
	int16_t x43 = -7;
	int32_t t0 = -21956782;

	t0 = ((x41<=x42)<<(x43*x44));

	if (t0 != 128) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x49 = -1;
	int32_t x51 = -19;
	volatile uint32_t x52 = UINT32_MAX;
	volatile int32_t t1 = 263166468;

	t1 = ((x49<=x50)<<(x51*x52));

	if (t1 != 524288) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x145 = INT64_MIN;
	static int16_t x146 = 0;
	int8_t x147 = -1;
	volatile int8_t x148 = -1;
	volatile int32_t t2 = -1886;

	t2 = ((x145<=x146)<<(x147*x148));

	if (t2 != 2) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x153 = -19;
	int64_t x154 = INT64_MAX;
	int64_t x155 = -1LL;
	int8_t x156 = 0;
	int32_t t3 = -1;

	t3 = ((x153<=x154)<<(x155*x156));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x181 = INT16_MAX;
	static volatile uint32_t x183 = UINT32_MAX;
	uint32_t x184 = UINT32_MAX;
	int32_t t4 = 34;

	t4 = ((x181<=x182)<<(x183*x184));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x229 = -1LL;
	int32_t x230 = INT32_MAX;
	int32_t x231 = -1;
	static int64_t x232 = -1LL;

	t5 = ((x229<=x230)<<(x231*x232));

	if (t5 != 2) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x241 = 20U;
	static volatile int64_t x242 = 5591211680581887LL;
	uint8_t x243 = 0U;
	volatile int64_t x244 = INT64_MAX;
	volatile int32_t t6 = -14792792;

	t6 = ((x241<=x242)<<(x243*x244));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x261 = 15439U;
	uint8_t x262 = 119U;
	volatile uint32_t x264 = UINT32_MAX;
	volatile int32_t t7 = -11414;

	t7 = ((x261<=x262)<<(x263*x264));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x341 = 129736759891121411LLU;
	volatile int32_t x343 = -1;
	int32_t x344 = -1;
	int32_t t8 = -10769;

	t8 = ((x341<=x342)<<(x343*x344));

	if (t8 != 2) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x357 = INT32_MAX;
	volatile uint16_t x358 = 81U;
	static volatile int16_t x359 = -1;
	int8_t x360 = -1;
	volatile int32_t t9 = -813016418;

	t9 = ((x357<=x358)<<(x359*x360));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x413 = 5U;
	volatile int32_t t10 = 452;

	t10 = ((x413<=x414)<<(x415*x416));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x441 = -2;
	volatile int32_t x442 = INT32_MAX;
	uint16_t x443 = 0U;
	uint8_t x444 = 25U;
	int32_t t11 = -309794;

	t11 = ((x441<=x442)<<(x443*x444));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x449 = 3U;
	int8_t x451 = -5;

	t12 = ((x449<=x450)<<(x451*x452));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x517 = INT8_MAX;
	static uint32_t x518 = 1U;
	volatile int32_t x519 = -1;
	int8_t x520 = -1;
	volatile int32_t t13 = -27774093;

	t13 = ((x517<=x518)<<(x519*x520));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x550 = -682;
	int8_t x551 = 0;
	int16_t x552 = INT16_MAX;
	volatile int32_t t14 = 12441009;

	t14 = ((x549<=x550)<<(x551*x552));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x561 = INT32_MIN;
	int8_t x562 = -1;
	static int8_t x563 = 51;
	uint8_t x564 = 0U;
	static int32_t t15 = 0;

	t15 = ((x561<=x562)<<(x563*x564));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x565 = 16U;
	int32_t x566 = 100;
	volatile int8_t x568 = 1;

	t16 = ((x565<=x566)<<(x567*x568));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x681 = -1LL;
	static volatile uint8_t x682 = UINT8_MAX;
	static int64_t x683 = 7LL;
	int32_t t17 = -7;

	t17 = ((x681<=x682)<<(x683*x684));

	if (t17 != 128) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x705 = -30897414622021LL;
	uint8_t x706 = UINT8_MAX;
	volatile int16_t x707 = 0;

	t18 = ((x705<=x706)<<(x707*x708));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x738 = -737;
	uint64_t x739 = UINT64_MAX;
	int8_t x740 = 0;
	volatile int32_t t19 = -714176086;

	t19 = ((x737<=x738)<<(x739*x740));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x785 = 161U;
	static volatile int64_t x786 = -1LL;
	int8_t x787 = 0;
	int64_t x788 = INT64_MIN;
	int32_t t20 = 508992149;

	t20 = ((x785<=x786)<<(x787*x788));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int32_t x829 = INT32_MIN;
	int8_t x830 = 0;
	static int32_t x832 = -1;
	int32_t t21 = 74;

	t21 = ((x829<=x830)<<(x831*x832));

	if (t21 != 2) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x905 = 28;
	int16_t x906 = -1;
	volatile int16_t x908 = -1;

	t22 = ((x905<=x906)<<(x907*x908));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x909 = INT8_MIN;
	static volatile int16_t x911 = -1;
	int16_t x912 = -1;
	int32_t t23 = 7028;

	t23 = ((x909<=x910)<<(x911*x912));

	if (t23 != 2) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x934 = 28034667U;
	uint16_t x935 = UINT16_MAX;
	uint8_t x936 = 0U;
	int32_t t24 = 7121812;

	t24 = ((x933<=x934)<<(x935*x936));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x969 = -1LL;
	uint8_t x970 = UINT8_MAX;
	volatile int8_t x971 = 0;
	volatile int32_t t25 = -2;

	t25 = ((x969<=x970)<<(x971*x972));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x1002 = -3;
	static int32_t x1003 = 1993;
	static int8_t x1004 = 0;
	volatile int32_t t26 = 64804150;

	t26 = ((x1001<=x1002)<<(x1003*x1004));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1037 = -1;
	uint32_t x1038 = UINT32_MAX;
	int64_t x1040 = -1LL;
	static int32_t t27 = -1747849;

	t27 = ((x1037<=x1038)<<(x1039*x1040));

	if (t27 != 2) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x1113 = 2U;
	uint64_t x1114 = 29801079LLU;
	int32_t x1115 = INT32_MIN;
	uint32_t x1116 = 16334688U;

	t28 = ((x1113<=x1114)<<(x1115*x1116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x1125 = INT32_MIN;
	uint32_t x1126 = UINT32_MAX;
	volatile int8_t x1127 = INT8_MIN;
	uint32_t x1128 = 0U;
	int32_t t29 = -56;

	t29 = ((x1125<=x1126)<<(x1127*x1128));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1158 = INT32_MIN;
	uint32_t x1160 = 7U;
	volatile int32_t t30 = 75;

	t30 = ((x1157<=x1158)<<(x1159*x1160));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1184 = 0U;
	int32_t t31 = -8847823;

	t31 = ((x1181<=x1182)<<(x1183*x1184));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1261 = 3LLU;
	static uint8_t x1262 = 32U;
	int64_t x1263 = 1982835LL;
	int64_t x1264 = 0LL;
	volatile int32_t t32 = 103866323;

	t32 = ((x1261<=x1262)<<(x1263*x1264));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int32_t x1277 = INT32_MIN;
	static volatile int64_t x1278 = 29013519740179170LL;
	int32_t x1279 = -29801308;
	static uint8_t x1280 = 0U;

	t33 = ((x1277<=x1278)<<(x1279*x1280));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x1313 = -1;
	uint32_t x1314 = 37247739U;
	static int16_t x1315 = -1;
	volatile int32_t t34 = 3707563;

	t34 = ((x1313<=x1314)<<(x1315*x1316));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1357 = INT32_MIN;
	volatile int16_t x1358 = INT16_MIN;
	int16_t x1359 = -1;
	static int64_t x1360 = -1LL;
	volatile int32_t t35 = 1919763;

	t35 = ((x1357<=x1358)<<(x1359*x1360));

	if (t35 != 2) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x1401 = 7U;
	uint8_t x1402 = UINT8_MAX;
	int8_t x1403 = 0;
	uint8_t x1404 = 0U;
	static volatile int32_t t36 = 2289;

	t36 = ((x1401<=x1402)<<(x1403*x1404));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x1410 = UINT64_MAX;
	volatile int32_t t37 = -11;

	t37 = ((x1409<=x1410)<<(x1411*x1412));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1429 = INT32_MAX;
	uint8_t x1430 = UINT8_MAX;
	int64_t x1432 = INT64_MIN;

	t38 = ((x1429<=x1430)<<(x1431*x1432));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x1465 = INT8_MAX;
	static int64_t x1466 = INT64_MAX;
	int16_t x1467 = INT16_MIN;
	int8_t x1468 = 0;
	volatile int32_t t39 = 311087061;

	t39 = ((x1465<=x1466)<<(x1467*x1468));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x1501 = -7;
	int32_t x1502 = 0;
	int16_t x1503 = 0;
	static int8_t x1504 = INT8_MAX;
	volatile int32_t t40 = 149586484;

	t40 = ((x1501<=x1502)<<(x1503*x1504));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x1517 = 7U;
	int32_t x1518 = 1;
	int16_t x1519 = 0;
	int64_t x1520 = INT64_MIN;
	static int32_t t41 = 839;

	t41 = ((x1517<=x1518)<<(x1519*x1520));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1569 = INT32_MIN;
	int64_t x1570 = INT64_MIN;
	int64_t x1571 = -1000498666LL;
	static volatile int16_t x1572 = 0;
	static volatile int32_t t42 = 1371060;

	t42 = ((x1569<=x1570)<<(x1571*x1572));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint8_t x1585 = 2U;
	int16_t x1586 = 1;
	static int8_t x1587 = -1;
	int32_t x1588 = -1;

	t43 = ((x1585<=x1586)<<(x1587*x1588));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x1641 = -2;
	uint8_t x1643 = 0U;
	static int32_t x1644 = INT32_MIN;
	int32_t t44 = -37;

	t44 = ((x1641<=x1642)<<(x1643*x1644));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x1661 = 0;
	static uint32_t x1663 = 1128995U;
	int8_t x1664 = 0;
	volatile int32_t t45 = -1066795993;

	t45 = ((x1661<=x1662)<<(x1663*x1664));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x1713 = INT16_MIN;
	volatile int8_t x1715 = -10;
	int16_t x1716 = -2;
	volatile int32_t t46 = -230;

	t46 = ((x1713<=x1714)<<(x1715*x1716));

	if (t46 != 1048576) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x1765 = 1892743LL;
	int8_t x1768 = 0;
	volatile int32_t t47 = -108067;

	t47 = ((x1765<=x1766)<<(x1767*x1768));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x1825 = UINT32_MAX;
	uint8_t x1826 = 7U;
	int8_t x1827 = -1;
	volatile uint32_t x1828 = UINT32_MAX;
	int32_t t48 = -97;

	t48 = ((x1825<=x1826)<<(x1827*x1828));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x1830 = INT32_MAX;
	int32_t x1831 = -1;
	volatile uint32_t x1832 = UINT32_MAX;
	int32_t t49 = 31;

	t49 = ((x1829<=x1830)<<(x1831*x1832));

	if (t49 != 2) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x1837 = INT16_MIN;
	int64_t x1838 = INT64_MAX;
	int16_t x1840 = 1;
	int32_t t50 = -199;

	t50 = ((x1837<=x1838)<<(x1839*x1840));

	if (t50 != 134217728) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x1865 = 28U;
	int8_t x1867 = 4;
	static volatile int32_t t51 = 271;

	t51 = ((x1865<=x1866)<<(x1867*x1868));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x1893 = -1LL;
	int16_t x1894 = INT16_MIN;
	int8_t x1896 = -1;
	static int32_t t52 = -5445688;

	t52 = ((x1893<=x1894)<<(x1895*x1896));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x1965 = INT32_MIN;
	static int64_t x1966 = INT64_MIN;
	int16_t x1967 = -1;
	static volatile int32_t t53 = -83;

	t53 = ((x1965<=x1966)<<(x1967*x1968));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x2029 = 233512569234921LL;
	volatile int32_t x2030 = INT32_MIN;
	int8_t x2031 = -1;

	t54 = ((x2029<=x2030)<<(x2031*x2032));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x2041 = -1;
	int64_t x2042 = -1LL;
	volatile int32_t x2044 = -1;
	volatile int32_t t55 = 8;

	t55 = ((x2041<=x2042)<<(x2043*x2044));

	if (t55 != 16384) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x2073 = 28U;
	static volatile int8_t x2074 = INT8_MAX;
	static uint64_t x2075 = 0LLU;
	uint32_t x2076 = UINT32_MAX;
	volatile int32_t t56 = 772;

	t56 = ((x2073<=x2074)<<(x2075*x2076));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x2085 = -1;
	static volatile int16_t x2086 = INT16_MIN;
	static uint8_t x2087 = 0U;
	int32_t x2088 = -201;
	volatile int32_t t57 = -463340;

	t57 = ((x2085<=x2086)<<(x2087*x2088));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x2093 = UINT64_MAX;
	uint64_t x2094 = 3590069LLU;
	int8_t x2095 = -1;
	int64_t x2096 = -1LL;
	volatile int32_t t58 = 94211044;

	t58 = ((x2093<=x2094)<<(x2095*x2096));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x2097 = INT32_MIN;
	int8_t x2098 = -1;
	int16_t x2099 = 0;
	int8_t x2100 = INT8_MAX;
	int32_t t59 = -82;

	t59 = ((x2097<=x2098)<<(x2099*x2100));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x2110 = INT32_MAX;
	int16_t x2111 = -1;
	static volatile int64_t x2112 = -1LL;
	int32_t t60 = 107201;

	t60 = ((x2109<=x2110)<<(x2111*x2112));

	if (t60 != 2) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x2129 = 29U;
	int64_t x2130 = -1LL;
	static volatile int64_t x2132 = 0LL;

	t61 = ((x2129<=x2130)<<(x2131*x2132));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x2157 = INT16_MAX;
	volatile int8_t x2158 = 1;
	uint64_t x2159 = UINT64_MAX;
	uint64_t x2160 = UINT64_MAX;
	volatile int32_t t62 = 17855105;

	t62 = ((x2157<=x2158)<<(x2159*x2160));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x2193 = 401;
	uint32_t x2194 = 36932225U;
	uint16_t x2195 = 39U;
	int8_t x2196 = 0;

	t63 = ((x2193<=x2194)<<(x2195*x2196));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x2221 = INT16_MIN;
	int32_t x2222 = 3267517;
	volatile int16_t x2223 = 0;
	uint8_t x2224 = 2U;
	static int32_t t64 = 494;

	t64 = ((x2221<=x2222)<<(x2223*x2224));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x2225 = INT8_MIN;
	uint64_t x2226 = 2007843918158671LLU;
	static volatile uint8_t x2227 = 0U;
	int16_t x2228 = -260;
	volatile int32_t t65 = 3343081;

	t65 = ((x2225<=x2226)<<(x2227*x2228));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x2329 = 10U;
	int64_t x2331 = -1LL;
	static int64_t x2332 = -19LL;
	static volatile int32_t t66 = 27067952;

	t66 = ((x2329<=x2330)<<(x2331*x2332));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x2333 = -2169;
	int8_t x2334 = -1;
	int32_t x2335 = -50069752;
	static int8_t x2336 = 0;
	volatile int32_t t67 = 490032;

	t67 = ((x2333<=x2334)<<(x2335*x2336));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x2337 = 973432564631LL;
	static int8_t x2338 = -1;
	int32_t x2339 = INT32_MIN;
	static uint32_t x2340 = 4U;
	volatile int32_t t68 = -1265;

	t68 = ((x2337<=x2338)<<(x2339*x2340));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x2341 = 0;
	uint8_t x2342 = UINT8_MAX;
	volatile int32_t x2343 = INT32_MIN;
	uint64_t x2344 = 0LLU;
	static volatile int32_t t69 = -77897898;

	t69 = ((x2341<=x2342)<<(x2343*x2344));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x2517 = UINT16_MAX;
	int64_t x2518 = INT64_MIN;
	int8_t x2519 = -1;
	uint32_t x2520 = UINT32_MAX;
	volatile int32_t t70 = -571466;

	t70 = ((x2517<=x2518)<<(x2519*x2520));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x2593 = INT16_MIN;
	int32_t x2594 = INT32_MAX;
	int32_t t71 = -16945;

	t71 = ((x2593<=x2594)<<(x2595*x2596));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x2597 = -1LL;
	int16_t x2598 = -1;
	volatile int32_t x2599 = INT32_MIN;
	volatile uint8_t x2600 = 0U;
	static volatile int32_t t72 = 2858;

	t72 = ((x2597<=x2598)<<(x2599*x2600));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x2645 = INT16_MAX;
	uint8_t x2646 = 111U;
	int16_t x2648 = 0;

	t73 = ((x2645<=x2646)<<(x2647*x2648));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x2659 = INT8_MIN;
	uint32_t x2660 = 0U;
	volatile int32_t t74 = -89224649;

	t74 = ((x2657<=x2658)<<(x2659*x2660));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x2777 = 5378;
	int8_t x2778 = INT8_MIN;
	uint64_t x2779 = 2082695594481190LLU;
	int64_t x2780 = INT64_MIN;
	int32_t t75 = 33597734;

	t75 = ((x2777<=x2778)<<(x2779*x2780));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x2793 = INT32_MIN;
	int32_t x2794 = INT32_MIN;
	volatile uint16_t x2795 = 13U;
	uint8_t x2796 = 0U;
	static int32_t t76 = -419343;

	t76 = ((x2793<=x2794)<<(x2795*x2796));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x2813 = INT64_MAX;
	uint32_t x2815 = UINT32_MAX;
	static uint32_t x2816 = UINT32_MAX;
	volatile int32_t t77 = -1;

	t77 = ((x2813<=x2814)<<(x2815*x2816));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x2849 = -102747833;
	int8_t x2850 = 1;
	int16_t x2851 = -1;
	int64_t x2852 = -1LL;
	int32_t t78 = 1170689;

	t78 = ((x2849<=x2850)<<(x2851*x2852));

	if (t78 != 2) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x2869 = -1LL;
	int16_t x2870 = -1;
	int16_t x2871 = -1;
	uint32_t x2872 = UINT32_MAX;
	volatile int32_t t79 = -2003367;

	t79 = ((x2869<=x2870)<<(x2871*x2872));

	if (t79 != 2) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x2889 = -1;
	static volatile int8_t x2891 = INT8_MIN;
	int8_t x2892 = 0;
	static volatile int32_t t80 = 38485;

	t80 = ((x2889<=x2890)<<(x2891*x2892));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x2917 = 15877U;
	int8_t x2919 = -1;
	uint64_t x2920 = UINT64_MAX;
	int32_t t81 = -26723;

	t81 = ((x2917<=x2918)<<(x2919*x2920));

	if (t81 != 2) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x2982 = UINT16_MAX;
	int64_t x2983 = INT64_MAX;
	uint16_t x2984 = 0U;

	t82 = ((x2981<=x2982)<<(x2983*x2984));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x2993 = UINT64_MAX;
	int16_t x2994 = INT16_MIN;
	int32_t x2995 = -1;
	volatile int8_t x2996 = -1;
	volatile int32_t t83 = -1577;

	t83 = ((x2993<=x2994)<<(x2995*x2996));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x3009 = -30;
	static int64_t x3010 = -1LL;
	uint32_t x3012 = UINT32_MAX;
	int32_t t84 = 296551;

	t84 = ((x3009<=x3010)<<(x3011*x3012));

	if (t84 != 2) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x3038 = 12974U;
	int64_t x3039 = -1LL;
	static volatile int32_t t85 = -12803;

	t85 = ((x3037<=x3038)<<(x3039*x3040));

	if (t85 != 2) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int8_t x3179 = 1;

	t86 = ((x3177<=x3178)<<(x3179*x3180));

	if (t86 != 64) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x3193 = 5275085;
	static uint64_t x3195 = UINT64_MAX;
	int16_t x3196 = -11;
	volatile int32_t t87 = -5394490;

	t87 = ((x3193<=x3194)<<(x3195*x3196));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x3233 = INT16_MAX;
	uint64_t x3234 = 964050454115460LLU;
	int8_t x3236 = 0;
	static int32_t t88 = 1;

	t88 = ((x3233<=x3234)<<(x3235*x3236));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x3353 = 58351;
	uint16_t x3354 = 404U;
	int8_t x3355 = 0;
	int64_t x3356 = -1LL;

	t89 = ((x3353<=x3354)<<(x3355*x3356));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int32_t x3357 = INT32_MIN;
	uint32_t x3358 = UINT32_MAX;
	volatile uint16_t x3359 = 5U;
	static volatile int8_t x3360 = 0;

	t90 = ((x3357<=x3358)<<(x3359*x3360));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x3453 = 86U;
	int16_t x3455 = 0;
	int16_t x3456 = INT16_MAX;
	int32_t t91 = -260;

	t91 = ((x3453<=x3454)<<(x3455*x3456));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x3525 = UINT64_MAX;
	int32_t x3527 = INT32_MAX;
	static volatile uint32_t x3528 = 0U;
	volatile int32_t t92 = 170435;

	t92 = ((x3525<=x3526)<<(x3527*x3528));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x3549 = 15445839530LLU;
	volatile uint64_t x3550 = UINT64_MAX;
	int32_t x3551 = 18;

	t93 = ((x3549<=x3550)<<(x3551*x3552));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x3626 = 1008809U;
	int32_t x3627 = 0;
	int32_t x3628 = INT32_MIN;
	int32_t t94 = 1066707401;

	t94 = ((x3625<=x3626)<<(x3627*x3628));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x3633 = 1U;
	static int8_t x3634 = -1;
	static int32_t x3636 = -1;
	int32_t t95 = -43717;

	t95 = ((x3633<=x3634)<<(x3635*x3636));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x3637 = INT64_MIN;
	int32_t x3638 = INT32_MAX;
	uint16_t x3639 = 6U;
	static int32_t x3640 = 1;
	int32_t t96 = -152713612;

	t96 = ((x3637<=x3638)<<(x3639*x3640));

	if (t96 != 64) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x3678 = -1;
	static uint32_t x3679 = UINT32_MAX;
	uint64_t x3680 = 0LLU;

	t97 = ((x3677<=x3678)<<(x3679*x3680));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x3689 = 1925;
	int8_t x3691 = -1;
	volatile int8_t x3692 = -3;
	volatile int32_t t98 = 100;

	t98 = ((x3689<=x3690)<<(x3691*x3692));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x3693 = INT32_MAX;
	int8_t x3694 = 58;
	static int16_t x3695 = -1;
	int8_t x3696 = -1;
	int32_t t99 = 11588956;

	t99 = ((x3693<=x3694)<<(x3695*x3696));

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

