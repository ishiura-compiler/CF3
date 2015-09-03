#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x83 = 0;
static volatile int64_t x122 = INT64_MAX;
int8_t x124 = INT8_MIN;
int64_t x128 = -93662415664544LL;
uint16_t x224 = 11U;
volatile int16_t x280 = -18;
volatile int64_t t5 = 42320710428695LL;
uint16_t x304 = 387U;
static int64_t x369 = -1LL;
volatile int8_t x387 = 11;
uint8_t x650 = 21U;
static uint8_t x651 = 30U;
volatile int32_t x652 = -1;
static int32_t t9 = 140746;
uint8_t x683 = 11U;
volatile int16_t x713 = INT16_MIN;
uint8_t x714 = 62U;
uint32_t x716 = UINT32_MAX;
uint16_t x728 = 448U;
int8_t x735 = 0;
uint32_t x799 = 1U;
volatile uint64_t t15 = 183963235951LLU;
int8_t x834 = 1;
int16_t x836 = INT16_MIN;
uint8_t x870 = UINT8_MAX;
static uint64_t x872 = 744830551184LLU;
uint64_t t18 = 375LLU;
static uint8_t x927 = 18U;
int16_t x1133 = INT16_MIN;
uint16_t x1230 = 2U;
volatile int64_t t25 = 15586LL;
volatile int16_t x1425 = INT16_MAX;
int16_t x1459 = 15;
uint16_t x1460 = UINT16_MAX;
static int32_t x1526 = 2301;
volatile int32_t t30 = 871;
int64_t x1685 = -1LL;
volatile uint64_t t33 = UINT64_MAX;
int64_t t37 = -1LL;
static volatile int32_t x1917 = -184;
static int32_t x1918 = INT32_MAX;
int8_t x1923 = 2;
int64_t x1924 = 971809598610488571LL;
uint16_t x1926 = UINT16_MAX;
int8_t x1967 = 0;
int8_t x1973 = INT8_MAX;
volatile int8_t x1974 = 1;
volatile int8_t x2020 = 8;
uint64_t x2066 = 16888810LLU;
uint64_t x2067 = 5LLU;
static int8_t x2314 = 4;
volatile int64_t t54 = -4LL;
volatile uint32_t x2626 = 1U;
volatile uint64_t t56 = 153629150391557695LLU;
int32_t x2693 = INT32_MAX;
uint64_t x2695 = 20LLU;
static volatile uint32_t t58 = 0U;
volatile uint8_t x2927 = 3U;
static volatile int32_t x3145 = 37254835;
int32_t t63 = INT32_MIN;
volatile uint16_t x3175 = 6U;
uint64_t x3186 = 118696340258LLU;
static int32_t x3188 = INT32_MIN;
static int16_t x3312 = INT16_MAX;
int8_t x3407 = 1;
int16_t x3408 = INT16_MIN;
static uint16_t x3433 = 561U;
volatile uint64_t x3436 = 686068LLU;
volatile uint64_t t70 = 3463730882191LLU;
static int16_t x3512 = INT16_MIN;
int8_t x3577 = -1;
uint32_t t72 = UINT32_MAX;
uint32_t x3595 = 4U;
int8_t x3596 = -3;
int8_t x3622 = INT8_MAX;
static uint32_t x3706 = 63055U;
volatile int32_t x3708 = INT32_MIN;
uint32_t x3714 = UINT32_MAX;
static uint32_t x3715 = 1U;
static uint8_t x3821 = 18U;
int16_t x3908 = -6876;
static uint8_t x3915 = 2U;
uint32_t t81 = 49U;
volatile uint64_t x3924 = 10367158292356LLU;
volatile uint64_t t82 = 367193959322LLU;
int32_t t83 = 22;
int16_t x3967 = 0;
int16_t x3971 = 13;
volatile int64_t t85 = -4LL;
int64_t x3976 = -7126955687LL;
int64_t x3997 = 2686506LL;
volatile uint16_t x4071 = 0U;
volatile int64_t x4092 = 1LL;
static uint32_t t91 = UINT32_MAX;
static int16_t x4123 = 1;
volatile int64_t x4418 = 63498137LL;
int64_t t93 = 3438612886232608121LL;
volatile int32_t t95 = -53497930;
uint64_t x4533 = 946LLU;
volatile int64_t x4534 = INT64_MAX;
int32_t t97 = -5424;
static int32_t x4580 = 1894078;


void f0(void) {
	int32_t x1 = INT32_MIN;
	static volatile uint8_t x2 = UINT8_MAX;
	uint8_t x3 = 4U;
	int32_t x4 = 129788888;
	int32_t t0 = -177131;

	t0 = (x1|((x2>>x3)&x4));

	if (t0 != -2147483640) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x81 = UINT64_MAX;
	uint16_t x82 = 57U;
	volatile uint8_t x84 = 124U;
	uint64_t t1 = UINT64_MAX;

	t1 = (x81|((x82>>x83)&x84));

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x121 = INT8_MIN;
	uint8_t x123 = 10U;
	int64_t t2 = 51737453080587140LL;

	t2 = (x121|((x122>>x123)&x124));

	if (t2 != -128LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x125 = UINT32_MAX;
	uint64_t x126 = 409791353028642847LLU;
	volatile uint16_t x127 = 17U;
	uint64_t t3 = 0LLU;

	t3 = (x125|((x126>>x127)&x128));

	if (t3 != 3096671420415LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x221 = INT64_MAX;
	static int32_t x222 = 1;
	int8_t x223 = 12;
	int64_t t4 = INT64_MAX;

	t4 = (x221|((x222>>x223)&x224));

	if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x277 = 0;
	int64_t x278 = 601577984LL;
	int8_t x279 = 1;

	t5 = (x277|((x278>>x279)&x280));

	if (t5 != 300788992LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x301 = INT32_MIN;
	uint64_t x302 = UINT64_MAX;
	int16_t x303 = 8;
	static volatile uint64_t t6 = 35710336777449LLU;

	t6 = (x301|((x302>>x303)&x304));

	if (t6 != 18446744071562068355LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x370 = 104U;
	uint8_t x371 = 6U;
	int16_t x372 = INT16_MIN;
	static int64_t t7 = -996685298LL;

	t7 = (x369|((x370>>x371)&x372));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x385 = -15;
	uint32_t x386 = 2U;
	volatile int16_t x388 = -25;
	uint32_t t8 = 1264746U;

	t8 = (x385|((x386>>x387)&x388));

	if (t8 != 4294967281U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x649 = INT8_MAX;

	t9 = (x649|((x650>>x651)&x652));

	if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x681 = INT32_MAX;
	int32_t x682 = INT32_MAX;
	int32_t x684 = 3760;
	volatile int32_t t10 = INT32_MAX;

	t10 = (x681|((x682>>x683)&x684));

	if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x715 = 1U;
	uint32_t t11 = 1133067U;

	t11 = (x713|((x714>>x715)&x716));

	if (t11 != 4294934559U) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x725 = 24;
	uint32_t x726 = UINT32_MAX;
	static int8_t x727 = 1;
	static volatile uint32_t t12 = 16820U;

	t12 = (x725|((x726>>x727)&x728));

	if (t12 != 472U) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x733 = 2U;
	int16_t x734 = INT16_MAX;
	int64_t x736 = INT64_MIN;
	static volatile int64_t t13 = -2975634LL;

	t13 = (x733|((x734>>x735)&x736));

	if (t13 != 2LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x765 = 77;
	volatile int32_t x766 = 535708260;
	int32_t x767 = 0;
	int8_t x768 = 4;
	int32_t t14 = 13;

	t14 = (x765|((x766>>x767)&x768));

	if (t14 != 77) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x797 = 6U;
	uint8_t x798 = 87U;
	volatile uint64_t x800 = UINT64_MAX;

	t15 = (x797|((x798>>x799)&x800));

	if (t15 != 47LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x829 = -1;
	uint8_t x830 = 39U;
	int32_t x831 = 4;
	static volatile int64_t x832 = 1LL;
	static int64_t t16 = -3449LL;

	t16 = (x829|((x830>>x831)&x832));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x833 = INT32_MIN;
	static int8_t x835 = 0;
	volatile int32_t t17 = INT32_MIN;

	t17 = (x833|((x834>>x835)&x836));

	if (t17 != INT32_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x869 = 2U;
	uint8_t x871 = 1U;

	t18 = (x869|((x870>>x871)&x872));

	if (t18 != 18LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint64_t x925 = 87LLU;
	uint8_t x926 = 1U;
	int32_t x928 = INT32_MAX;
	uint64_t t19 = 7LLU;

	t19 = (x925|((x926>>x927)&x928));

	if (t19 != 87LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x949 = 15U;
	volatile int64_t x950 = 406027LL;
	static uint8_t x951 = 7U;
	int8_t x952 = INT8_MIN;
	int64_t t20 = 4305454848877LL;

	t20 = (x949|((x950>>x951)&x952));

	if (t20 != 3087LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x961 = INT16_MIN;
	uint64_t x962 = UINT64_MAX;
	static int16_t x963 = 1;
	int64_t x964 = -4263442105967LL;
	uint64_t t21 = 462683557593LLU;

	t21 = (x961|((x962>>x963)&x964));

	if (t21 != 18446744073709533585LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x1049 = 238;
	int64_t x1050 = 505883448804226078LL;
	int8_t x1051 = 1;
	volatile int64_t x1052 = 63104215095203275LL;
	static int64_t t22 = 2884LL;

	t22 = (x1049|((x1050>>x1051)&x1052));

	if (t22 != 36064118906835183LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1134 = INT8_MAX;
	static uint8_t x1135 = 21U;
	uint32_t x1136 = UINT32_MAX;
	volatile uint32_t t23 = 236682726U;

	t23 = (x1133|((x1134>>x1135)&x1136));

	if (t23 != 4294934528U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1209 = INT8_MIN;
	int16_t x1210 = 117;
	volatile uint8_t x1211 = 7U;
	volatile uint64_t x1212 = 412293358611LLU;
	volatile uint64_t t24 = 47696633250853LLU;

	t24 = (x1209|((x1210>>x1211)&x1212));

	if (t24 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1229 = INT8_MIN;
	uint8_t x1231 = 0U;
	int64_t x1232 = 2LL;

	t25 = (x1229|((x1230>>x1231)&x1232));

	if (t25 != -126LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x1237 = UINT64_MAX;
	int16_t x1238 = 0;
	volatile uint8_t x1239 = 7U;
	int16_t x1240 = INT16_MIN;
	static uint64_t t26 = UINT64_MAX;

	t26 = (x1237|((x1238>>x1239)&x1240));

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1349 = -1;
	static uint8_t x1350 = UINT8_MAX;
	static int16_t x1351 = 3;
	static uint32_t x1352 = 97U;
	static uint32_t t27 = UINT32_MAX;

	t27 = (x1349|((x1350>>x1351)&x1352));

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x1426 = INT8_MAX;
	uint32_t x1427 = 10U;
	int64_t x1428 = INT64_MAX;
	int64_t t28 = 208LL;

	t28 = (x1425|((x1426>>x1427)&x1428));

	if (t28 != 32767LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x1457 = INT32_MIN;
	uint64_t x1458 = 14735912290147LLU;
	uint64_t t29 = 27286384LLU;

	t29 = (x1457|((x1458>>x1459)&x1460));

	if (t29 != 18446744071562129826LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x1525 = UINT8_MAX;
	int32_t x1527 = 3;
	int32_t x1528 = -1;

	t30 = (x1525|((x1526>>x1527)&x1528));

	if (t30 != 511) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1686 = 111U;
	static uint32_t x1687 = 1U;
	int8_t x1688 = -3;
	int64_t t31 = -87836587LL;

	t31 = (x1685|((x1686>>x1687)&x1688));

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x1781 = -1;
	uint64_t x1782 = 3781351706330025LLU;
	int8_t x1783 = 3;
	static int64_t x1784 = INT64_MAX;
	static volatile uint64_t t32 = UINT64_MAX;

	t32 = (x1781|((x1782>>x1783)&x1784));

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x1833 = -1;
	int32_t x1834 = INT32_MAX;
	int32_t x1835 = 3;
	uint64_t x1836 = 11811263906833LLU;

	t33 = (x1833|((x1834>>x1835)&x1836));

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x1837 = UINT16_MAX;
	uint32_t x1838 = UINT32_MAX;
	uint8_t x1839 = 1U;
	volatile int8_t x1840 = 1;
	uint32_t t34 = 726U;

	t34 = (x1837|((x1838>>x1839)&x1840));

	if (t34 != 65535U) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x1861 = 240;
	int64_t x1862 = 10870506366079113LL;
	int8_t x1863 = 20;
	int8_t x1864 = INT8_MAX;
	volatile int64_t t35 = -55295781LL;

	t35 = (x1861|((x1862>>x1863)&x1864));

	if (t35 != 247LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x1873 = 0;
	int16_t x1874 = 0;
	uint32_t x1875 = 1U;
	int8_t x1876 = INT8_MAX;
	volatile int32_t t36 = -607832;

	t36 = (x1873|((x1874>>x1875)&x1876));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1905 = -1LL;
	uint16_t x1906 = 2U;
	static uint8_t x1907 = 0U;
	static int8_t x1908 = INT8_MIN;

	t37 = (x1905|((x1906>>x1907)&x1908));

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x1919 = 28;
	static int8_t x1920 = -1;
	int32_t t38 = 2;

	t38 = (x1917|((x1918>>x1919)&x1920));

	if (t38 != -177) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x1921 = -1LL;
	uint8_t x1922 = 4U;
	volatile int64_t t39 = 103324LL;

	t39 = (x1921|((x1922>>x1923)&x1924));

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x1925 = -1;
	int64_t x1927 = 30LL;
	static uint32_t x1928 = 64530U;
	static uint32_t t40 = UINT32_MAX;

	t40 = (x1925|((x1926>>x1927)&x1928));

	if (t40 != UINT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x1965 = INT8_MIN;
	uint16_t x1966 = UINT16_MAX;
	volatile int8_t x1968 = INT8_MAX;
	int32_t t41 = 33563;

	t41 = (x1965|((x1966>>x1967)&x1968));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x1975 = 10U;
	static int32_t x1976 = 240;
	int32_t t42 = -6;

	t42 = (x1973|((x1974>>x1975)&x1976));

	if (t42 != 127) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x2017 = -1;
	volatile int8_t x2018 = INT8_MAX;
	int8_t x2019 = 0;
	int32_t t43 = 236714354;

	t43 = (x2017|((x2018>>x2019)&x2020));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x2065 = -6;
	int32_t x2068 = INT32_MIN;
	volatile uint64_t t44 = 313309201LLU;

	t44 = (x2065|((x2066>>x2067)&x2068));

	if (t44 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint16_t x2105 = 2632U;
	volatile int64_t x2106 = 4135139856LL;
	int8_t x2107 = 2;
	int32_t x2108 = INT32_MIN;
	volatile int64_t t45 = -47598LL;

	t45 = (x2105|((x2106>>x2107)&x2108));

	if (t45 != 2632LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2269 = 22;
	static int32_t x2270 = 8;
	static int8_t x2271 = 1;
	int64_t x2272 = INT64_MIN;
	static volatile int64_t t46 = -723LL;

	t46 = (x2269|((x2270>>x2271)&x2272));

	if (t46 != 22LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x2313 = INT64_MIN;
	uint8_t x2315 = 0U;
	int64_t x2316 = INT64_MIN;
	static volatile int64_t t47 = INT64_MIN;

	t47 = (x2313|((x2314>>x2315)&x2316));

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x2385 = 0U;
	uint16_t x2386 = 27319U;
	volatile int16_t x2387 = 3;
	int8_t x2388 = -1;
	int32_t t48 = -3349;

	t48 = (x2385|((x2386>>x2387)&x2388));

	if (t48 != 3414) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x2425 = UINT32_MAX;
	uint8_t x2426 = 1U;
	int8_t x2427 = 11;
	int64_t x2428 = INT64_MIN;
	int64_t t49 = -3928462504770846LL;

	t49 = (x2425|((x2426>>x2427)&x2428));

	if (t49 != 4294967295LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x2441 = INT16_MAX;
	static volatile uint16_t x2442 = 1064U;
	volatile int8_t x2443 = 1;
	uint8_t x2444 = 64U;
	int32_t t50 = 0;

	t50 = (x2441|((x2442>>x2443)&x2444));

	if (t50 != 32767) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int16_t x2449 = INT16_MIN;
	int8_t x2450 = 0;
	volatile int8_t x2451 = 1;
	int64_t x2452 = -1LL;
	int64_t t51 = 612LL;

	t51 = (x2449|((x2450>>x2451)&x2452));

	if (t51 != -32768LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x2541 = INT32_MIN;
	uint32_t x2542 = UINT32_MAX;
	int32_t x2543 = 4;
	uint8_t x2544 = 5U;
	uint32_t t52 = 28849019U;

	t52 = (x2541|((x2542>>x2543)&x2544));

	if (t52 != 2147483653U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x2569 = INT32_MIN;
	volatile int64_t x2570 = INT64_MAX;
	uint8_t x2571 = 27U;
	static int8_t x2572 = -13;
	int64_t t53 = 128877295142549LL;

	t53 = (x2569|((x2570>>x2571)&x2572));

	if (t53 != -13LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x2617 = 0U;
	static int64_t x2618 = INT64_MAX;
	uint16_t x2619 = 57U;
	int8_t x2620 = INT8_MIN;

	t54 = (x2617|((x2618>>x2619)&x2620));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x2625 = INT32_MAX;
	static uint8_t x2627 = 29U;
	int32_t x2628 = INT32_MAX;
	uint32_t t55 = 105052U;

	t55 = (x2625|((x2626>>x2627)&x2628));

	if (t55 != 2147483647U) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x2629 = 25675LLU;
	int32_t x2630 = INT32_MAX;
	uint8_t x2631 = 20U;
	uint8_t x2632 = UINT8_MAX;

	t56 = (x2629|((x2630>>x2631)&x2632));

	if (t56 != 25855LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x2645 = UINT64_MAX;
	int16_t x2646 = 3;
	int16_t x2647 = 0;
	int64_t x2648 = -16456786677873140LL;
	volatile uint64_t t57 = UINT64_MAX;

	t57 = (x2645|((x2646>>x2647)&x2648));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x2694 = 204352595U;
	uint32_t x2696 = 86473U;

	t58 = (x2693|((x2694>>x2695)&x2696));

	if (t58 != 2147483647U) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x2841 = 7543005214LLU;
	static uint32_t x2842 = UINT32_MAX;
	uint8_t x2843 = 1U;
	uint64_t x2844 = 1147002474760926453LLU;
	volatile uint64_t t59 = 127820LLU;

	t59 = (x2841|((x2842>>x2843)&x2844));

	if (t59 != 8482944255LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x2925 = 2208U;
	uint64_t x2926 = 211279403LLU;
	int32_t x2928 = 36100;
	static volatile uint64_t t60 = 4485614253438558408LLU;

	t60 = (x2925|((x2926>>x2927)&x2928));

	if (t60 != 35236LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x3049 = INT16_MAX;
	int8_t x3050 = INT8_MAX;
	uint8_t x3051 = 4U;
	static uint16_t x3052 = 1386U;
	volatile int32_t t61 = 945402;

	t61 = (x3049|((x3050>>x3051)&x3052));

	if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x3146 = UINT16_MAX;
	uint8_t x3147 = 10U;
	int8_t x3148 = 1;
	volatile int32_t t62 = -368863212;

	t62 = (x3145|((x3146>>x3147)&x3148));

	if (t62 != 37254835) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x3157 = INT32_MIN;
	static uint8_t x3158 = 18U;
	static int32_t x3159 = 0;
	int16_t x3160 = INT16_MIN;

	t63 = (x3157|((x3158>>x3159)&x3160));

	if (t63 != INT32_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x3173 = INT16_MIN;
	uint8_t x3174 = 0U;
	int64_t x3176 = -21429582281380LL;
	volatile int64_t t64 = 14703351LL;

	t64 = (x3173|((x3174>>x3175)&x3176));

	if (t64 != -32768LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x3185 = -3;
	static uint8_t x3187 = 6U;
	volatile uint64_t t65 = 1702468933175921699LLU;

	t65 = (x3185|((x3186>>x3187)&x3188));

	if (t65 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x3201 = -1;
	uint32_t x3202 = 62882139U;
	uint16_t x3203 = 1U;
	int32_t x3204 = INT32_MIN;
	volatile uint32_t t66 = UINT32_MAX;

	t66 = (x3201|((x3202>>x3203)&x3204));

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x3221 = 136293U;
	volatile int32_t x3222 = INT32_MAX;
	int8_t x3223 = 0;
	int64_t x3224 = -1LL;
	static int64_t t67 = -106231526LL;

	t67 = (x3221|((x3222>>x3223)&x3224));

	if (t67 != 2147483647LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x3309 = -1;
	uint16_t x3310 = 219U;
	uint8_t x3311 = 11U;
	volatile int32_t t68 = -13043773;

	t68 = (x3309|((x3310>>x3311)&x3312));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x3405 = INT16_MIN;
	volatile uint32_t x3406 = UINT32_MAX;
	uint32_t t69 = 708U;

	t69 = (x3405|((x3406>>x3407)&x3408));

	if (t69 != 4294934528U) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x3434 = UINT64_MAX;
	uint8_t x3435 = 0U;

	t70 = (x3433|((x3434>>x3435)&x3436));

	if (t70 != 686069LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x3509 = 29228843U;
	uint8_t x3510 = UINT8_MAX;
	volatile uint8_t x3511 = 6U;
	static uint32_t t71 = 141U;

	t71 = (x3509|((x3510>>x3511)&x3512));

	if (t71 != 29228843U) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x3578 = 65539355U;
	int8_t x3579 = 4;
	static int16_t x3580 = 1;

	t72 = (x3577|((x3578>>x3579)&x3580));

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x3593 = INT64_MIN;
	uint16_t x3594 = 201U;
	volatile int64_t t73 = 348134915767760942LL;

	t73 = (x3593|((x3594>>x3595)&x3596));

	if (t73 != -9223372036854775796LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x3621 = -1LL;
	uint16_t x3623 = 4U;
	uint8_t x3624 = UINT8_MAX;
	int64_t t74 = 38LL;

	t74 = (x3621|((x3622>>x3623)&x3624));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x3705 = 782856589194LL;
	volatile uint8_t x3707 = 4U;
	volatile int64_t t75 = -2059701LL;

	t75 = (x3705|((x3706>>x3707)&x3708));

	if (t75 != 782856589194LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x3713 = INT16_MIN;
	int32_t x3716 = -1;
	volatile uint32_t t76 = UINT32_MAX;

	t76 = (x3713|((x3714>>x3715)&x3716));

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x3765 = 28U;
	uint8_t x3766 = UINT8_MAX;
	static uint8_t x3767 = 3U;
	int32_t x3768 = INT32_MIN;
	static int32_t t77 = 19337206;

	t77 = (x3765|((x3766>>x3767)&x3768));

	if (t77 != 28) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x3789 = -1LL;
	uint32_t x3790 = 5293U;
	volatile uint64_t x3791 = 1LLU;
	uint16_t x3792 = UINT16_MAX;
	static volatile int64_t t78 = -502243458LL;

	t78 = (x3789|((x3790>>x3791)&x3792));

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x3822 = INT64_MAX;
	uint32_t x3823 = 1U;
	uint16_t x3824 = UINT16_MAX;
	static volatile int64_t t79 = 1630233057964488607LL;

	t79 = (x3821|((x3822>>x3823)&x3824));

	if (t79 != 65535LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x3905 = -3167;
	uint64_t x3906 = UINT64_MAX;
	int8_t x3907 = 1;
	volatile uint64_t t80 = 861558367847LLU;

	t80 = (x3905|((x3906>>x3907)&x3908));

	if (t80 != 18446744073709549477LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x3913 = 516813;
	uint32_t x3914 = UINT32_MAX;
	static volatile int16_t x3916 = INT16_MIN;

	t81 = (x3913|((x3914>>x3915)&x3916));

	if (t81 != 1073734349U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x3921 = 183245;
	static uint16_t x3922 = UINT16_MAX;
	volatile uint8_t x3923 = 0U;

	t82 = (x3921|((x3922>>x3923)&x3924));

	if (t82 != 184269LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x3925 = -1;
	uint16_t x3926 = 616U;
	static int16_t x3927 = 4;
	volatile int32_t x3928 = 0;

	t83 = (x3925|((x3926>>x3927)&x3928));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x3965 = 256286779U;
	uint64_t x3966 = 2LLU;
	uint32_t x3968 = 86U;
	uint64_t t84 = 324476003622776067LLU;

	t84 = (x3965|((x3966>>x3967)&x3968));

	if (t84 != 256286779LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x3969 = INT32_MIN;
	volatile int8_t x3970 = INT8_MAX;
	static int64_t x3972 = -765228614LL;

	t85 = (x3969|((x3970>>x3971)&x3972));

	if (t85 != -2147483648LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x3973 = UINT64_MAX;
	uint64_t x3974 = 22844614LLU;
	volatile int8_t x3975 = 1;
	static uint64_t t86 = UINT64_MAX;

	t86 = (x3973|((x3974>>x3975)&x3976));

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x3998 = 2U;
	uint16_t x3999 = 2U;
	uint8_t x4000 = 0U;
	int64_t t87 = 51LL;

	t87 = (x3997|((x3998>>x3999)&x4000));

	if (t87 != 2686506LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x4029 = INT32_MIN;
	volatile uint8_t x4030 = UINT8_MAX;
	static uint16_t x4031 = 0U;
	uint8_t x4032 = 7U;
	volatile int32_t t88 = -623901;

	t88 = (x4029|((x4030>>x4031)&x4032));

	if (t88 != -2147483641) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x4069 = -1LL;
	uint32_t x4070 = 532350071U;
	int16_t x4072 = INT16_MIN;
	volatile int64_t t89 = 6LL;

	t89 = (x4069|((x4070>>x4071)&x4072));

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x4089 = INT32_MIN;
	int64_t x4090 = 32112987916LL;
	static int16_t x4091 = 3;
	volatile int64_t t90 = -1LL;

	t90 = (x4089|((x4090>>x4091)&x4092));

	if (t90 != -2147483647LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x4117 = -1;
	volatile uint32_t x4118 = 165513837U;
	volatile int16_t x4119 = 1;
	int8_t x4120 = -3;

	t91 = (x4117|((x4118>>x4119)&x4120));

	if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x4121 = 26337041507LLU;
	uint64_t x4122 = 445743LLU;
	volatile int64_t x4124 = INT64_MAX;
	volatile uint64_t t92 = 9353603LLU;

	t92 = (x4121|((x4122>>x4123)&x4124));

	if (t92 != 26337050359LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x4417 = 113U;
	static uint32_t x4419 = 2U;
	uint8_t x4420 = 3U;

	t93 = (x4417|((x4418>>x4419)&x4420));

	if (t93 != 115LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x4441 = INT16_MAX;
	static uint64_t x4442 = 454626394460309LLU;
	static uint64_t x4443 = 1LLU;
	uint8_t x4444 = UINT8_MAX;
	volatile uint64_t t94 = 583LLU;

	t94 = (x4441|((x4442>>x4443)&x4444));

	if (t94 != 32767LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x4485 = 97U;
	int32_t x4486 = 986448;
	static uint8_t x4487 = 2U;
	int8_t x4488 = 2;

	t95 = (x4485|((x4486>>x4487)&x4488));

	if (t95 != 97) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x4535 = 5U;
	uint16_t x4536 = 48U;
	volatile uint64_t t96 = 5758111608599342LLU;

	t96 = (x4533|((x4534>>x4535)&x4536));

	if (t96 != 946LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x4537 = -171;
	uint16_t x4538 = 0U;
	uint16_t x4539 = 0U;
	static int8_t x4540 = -1;

	t97 = (x4537|((x4538>>x4539)&x4540));

	if (t97 != -171) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x4553 = INT16_MAX;
	int32_t x4554 = 122;
	uint16_t x4555 = 1U;
	int32_t x4556 = INT32_MIN;
	int32_t t98 = 1779468;

	t98 = (x4553|((x4554>>x4555)&x4556));

	if (t98 != 32767) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x4577 = 1539852036085032179LLU;
	uint16_t x4578 = 1U;
	uint8_t x4579 = 14U;
	volatile uint64_t t99 = 62275LLU;

	t99 = (x4577|((x4578>>x4579)&x4580));

	if (t99 != 1539852036085032179LLU) { NG(); } else { ; }
	
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

