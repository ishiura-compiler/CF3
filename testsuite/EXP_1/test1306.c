#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 989697;
static uint8_t x58 = 8U;
int16_t x86 = INT16_MIN;
volatile int64_t x210 = INT64_MIN;
uint8_t x212 = 11U;
int16_t x218 = -1;
volatile int64_t x274 = 289LL;
volatile int32_t x282 = -1256;
volatile int32_t x371 = INT32_MIN;
static uint16_t x372 = 3U;
static int64_t x431 = INT64_MAX;
int32_t x443 = -1;
int32_t t13 = -1;
uint64_t x497 = 340633673LLU;
uint64_t x531 = 35764898140881409LLU;
int32_t x532 = 2;
uint32_t x541 = 1099U;
uint8_t x542 = UINT8_MAX;
int64_t x543 = -1LL;
int32_t t18 = 14;
uint16_t x578 = 82U;
int32_t t19 = 1448915;
int32_t x630 = -1;
uint16_t x708 = 1U;
volatile int32_t t21 = -14312810;
uint64_t x729 = 1527LLU;
volatile uint16_t x738 = 1U;
static uint16_t x739 = UINT16_MAX;
static uint8_t x740 = 18U;
volatile uint8_t x764 = 0U;
int32_t x770 = INT32_MAX;
uint8_t x772 = 0U;
int32_t x902 = INT32_MIN;
static int32_t t31 = -232;
static int32_t t32 = 158170726;
int32_t t33 = 6;
uint8_t x1053 = 21U;
static uint32_t x1055 = UINT32_MAX;
int8_t x1062 = INT8_MIN;
uint8_t x1064 = 30U;
int32_t t36 = -101;
volatile int16_t x1098 = INT16_MAX;
int32_t t38 = 25991;
uint32_t x1238 = 24311U;
static int32_t t40 = 636;
static int32_t t41 = -224746;
static volatile uint64_t x1497 = 1658581035656LLU;
int8_t x1499 = 0;
volatile int32_t t44 = 9;
int32_t t46 = -253;
int16_t x1605 = 1432;
int32_t x1666 = 123;
static int64_t x1677 = INT64_MAX;
int64_t x1679 = INT64_MIN;
volatile uint16_t x1762 = UINT16_MAX;
int32_t x1849 = INT32_MIN;
uint64_t x1850 = 322836272200022LLU;
volatile uint64_t x1852 = 0LLU;
volatile int16_t x2002 = INT16_MAX;
int32_t x2003 = INT32_MAX;
volatile int32_t t60 = 41;
int16_t x2062 = INT16_MAX;
int16_t x2063 = INT16_MAX;
volatile uint8_t x2101 = UINT8_MAX;
volatile int32_t t63 = -2674;
uint64_t x2141 = 530631505798LLU;
static int64_t x2142 = INT64_MIN;
int32_t x2151 = -1;
int8_t x2163 = INT8_MIN;
static uint16_t x2170 = UINT16_MAX;
uint32_t x2172 = 10U;
int8_t x2307 = INT8_MIN;
int32_t t72 = -229702;
int8_t x2313 = 20;
int8_t x2330 = 0;
volatile uint8_t x2331 = 4U;
volatile int8_t x2393 = INT8_MAX;
int8_t x2413 = INT8_MIN;
volatile int32_t x2415 = 546201374;
volatile int32_t x2469 = INT32_MIN;
int32_t x2471 = INT32_MIN;
volatile uint16_t x2522 = 617U;
int32_t t80 = 17330;
int64_t x2573 = INT64_MIN;
uint32_t x2574 = UINT32_MAX;
volatile int32_t t82 = 100925;
int64_t x2610 = INT64_MIN;
static volatile uint16_t x2622 = 6277U;
static uint16_t x2623 = UINT16_MAX;
volatile int32_t t84 = -8633523;
int8_t x2645 = 1;
uint64_t x2693 = UINT64_MAX;
volatile int32_t t88 = 3;
uint64_t x2723 = UINT64_MAX;
static int32_t t91 = 0;
uint32_t x2749 = 495849958U;
int64_t x2831 = 525154917885894LL;
static int8_t x2859 = -1;
int64_t x2898 = -144152906236LL;
int32_t x2899 = INT32_MIN;
int64_t x2970 = 5789429LL;
volatile int32_t x2993 = -5339;
uint16_t x2994 = 38U;


void f0(void) {
	int64_t x49 = INT64_MIN;
	int32_t x50 = INT32_MAX;
	uint16_t x51 = UINT16_MAX;
	uint8_t x52 = 4U;

	t0 = (((x49==x50)<=x51)<<x52);

	if (t0 != 16) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x57 = UINT32_MAX;
	int64_t x59 = INT64_MAX;
	static uint16_t x60 = 13U;
	int32_t t1 = -25;

	t1 = (((x57==x58)<=x59)<<x60);

	if (t1 != 8192) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x85 = 0;
	int64_t x87 = INT64_MAX;
	int32_t x88 = 1;
	volatile int32_t t2 = -9310948;

	t2 = (((x85==x86)<=x87)<<x88);

	if (t2 != 2) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x209 = -1;
	static int8_t x211 = INT8_MIN;
	static volatile int32_t t3 = -550661;

	t3 = (((x209==x210)<=x211)<<x212);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x217 = -1;
	int16_t x219 = INT16_MIN;
	uint8_t x220 = 1U;
	volatile int32_t t4 = 5;

	t4 = (((x217==x218)<=x219)<<x220);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x229 = 15765U;
	uint8_t x230 = UINT8_MAX;
	static uint8_t x231 = 14U;
	int8_t x232 = 2;
	static int32_t t5 = 868888505;

	t5 = (((x229==x230)<=x231)<<x232);

	if (t5 != 4) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x273 = UINT8_MAX;
	static int16_t x275 = INT16_MAX;
	int8_t x276 = 2;
	volatile int32_t t6 = -4424;

	t6 = (((x273==x274)<=x275)<<x276);

	if (t6 != 4) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x281 = INT32_MIN;
	int64_t x283 = -1LL;
	int32_t x284 = 2;
	int32_t t7 = -50;

	t7 = (((x281==x282)<=x283)<<x284);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x329 = UINT64_MAX;
	int16_t x330 = INT16_MIN;
	int64_t x331 = 181LL;
	static int8_t x332 = 6;
	int32_t t8 = 16855412;

	t8 = (((x329==x330)<=x331)<<x332);

	if (t8 != 64) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x357 = UINT32_MAX;
	int8_t x358 = -49;
	int16_t x359 = -1592;
	static uint8_t x360 = 3U;
	int32_t t9 = 71566846;

	t9 = (((x357==x358)<=x359)<<x360);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x369 = UINT16_MAX;
	uint16_t x370 = 11578U;
	static volatile int32_t t10 = 143190821;

	t10 = (((x369==x370)<=x371)<<x372);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x429 = -11;
	uint64_t x430 = 122605813828671LLU;
	static uint16_t x432 = 25U;
	static volatile int32_t t11 = -12185;

	t11 = (((x429==x430)<=x431)<<x432);

	if (t11 != 33554432) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x441 = -1LL;
	int64_t x442 = INT64_MIN;
	uint8_t x444 = 3U;
	volatile int32_t t12 = -1335;

	t12 = (((x441==x442)<=x443)<<x444);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x489 = -1679;
	uint16_t x490 = UINT16_MAX;
	uint8_t x491 = UINT8_MAX;
	uint8_t x492 = 7U;

	t13 = (((x489==x490)<=x491)<<x492);

	if (t13 != 128) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x498 = UINT32_MAX;
	uint64_t x499 = UINT64_MAX;
	int16_t x500 = 1;
	volatile int32_t t14 = 109461;

	t14 = (((x497==x498)<=x499)<<x500);

	if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x529 = -698;
	volatile uint32_t x530 = 308751632U;
	int32_t t15 = -36939;

	t15 = (((x529==x530)<=x531)<<x532);

	if (t15 != 4) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x533 = INT16_MIN;
	volatile int32_t x534 = -1;
	int8_t x535 = -1;
	uint16_t x536 = 11U;
	static int32_t t16 = 974445536;

	t16 = (((x533==x534)<=x535)<<x536);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x544 = 31;
	static int32_t t17 = 1;

	t17 = (((x541==x542)<=x543)<<x544);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x565 = -594219797476283LL;
	int64_t x566 = -584692283LL;
	static int32_t x567 = 48762997;
	uint16_t x568 = 1U;

	t18 = (((x565==x566)<=x567)<<x568);

	if (t18 != 2) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x577 = UINT16_MAX;
	int16_t x579 = INT16_MAX;
	uint8_t x580 = 2U;

	t19 = (((x577==x578)<=x579)<<x580);

	if (t19 != 4) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x629 = UINT16_MAX;
	uint32_t x631 = 65685U;
	uint32_t x632 = 7U;
	static volatile int32_t t20 = -16542146;

	t20 = (((x629==x630)<=x631)<<x632);

	if (t20 != 128) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x705 = INT64_MIN;
	static uint32_t x706 = 149U;
	static int64_t x707 = INT64_MAX;

	t21 = (((x705==x706)<=x707)<<x708);

	if (t21 != 2) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x717 = -1;
	int64_t x718 = 0LL;
	static int16_t x719 = -3;
	static int8_t x720 = 13;
	static volatile int32_t t22 = 893805;

	t22 = (((x717==x718)<=x719)<<x720);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x730 = UINT16_MAX;
	uint8_t x731 = UINT8_MAX;
	uint8_t x732 = 4U;
	static int32_t t23 = -178248;

	t23 = (((x729==x730)<=x731)<<x732);

	if (t23 != 16) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x737 = 28U;
	int32_t t24 = -11917;

	t24 = (((x737==x738)<=x739)<<x740);

	if (t24 != 262144) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x761 = INT32_MAX;
	static int8_t x762 = 9;
	int32_t x763 = INT32_MIN;
	int32_t t25 = -1;

	t25 = (((x761==x762)<=x763)<<x764);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int8_t x769 = 54;
	volatile int8_t x771 = 5;
	volatile int32_t t26 = -2460625;

	t26 = (((x769==x770)<=x771)<<x772);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x789 = UINT64_MAX;
	int32_t x790 = INT32_MIN;
	volatile uint8_t x791 = 0U;
	uint8_t x792 = 0U;
	int32_t t27 = 7758501;

	t27 = (((x789==x790)<=x791)<<x792);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x821 = 13;
	int64_t x822 = -5174214349LL;
	static int16_t x823 = -484;
	uint32_t x824 = 3U;
	static int32_t t28 = 12;

	t28 = (((x821==x822)<=x823)<<x824);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x841 = 61009914333LL;
	uint32_t x842 = 311002281U;
	int8_t x843 = INT8_MIN;
	int8_t x844 = 2;
	static volatile int32_t t29 = 393734808;

	t29 = (((x841==x842)<=x843)<<x844);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x865 = -46;
	int64_t x866 = -1824243199LL;
	uint32_t x867 = 58U;
	uint16_t x868 = 0U;
	int32_t t30 = -1;

	t30 = (((x865==x866)<=x867)<<x868);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x901 = UINT32_MAX;
	int8_t x903 = 7;
	static uint16_t x904 = 1U;

	t31 = (((x901==x902)<=x903)<<x904);

	if (t31 != 2) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x921 = INT8_MIN;
	static int64_t x922 = INT64_MAX;
	uint64_t x923 = 1738785267055512LLU;
	uint8_t x924 = 3U;

	t32 = (((x921==x922)<=x923)<<x924);

	if (t32 != 8) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x1013 = -1LL;
	int16_t x1014 = -1;
	int16_t x1015 = INT16_MIN;
	uint32_t x1016 = 23U;

	t33 = (((x1013==x1014)<=x1015)<<x1016);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x1054 = INT64_MIN;
	uint64_t x1056 = 2LLU;
	volatile int32_t t34 = -1;

	t34 = (((x1053==x1054)<=x1055)<<x1056);

	if (t34 != 4) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x1061 = INT32_MIN;
	static int32_t x1063 = INT32_MIN;
	static volatile int32_t t35 = 105977;

	t35 = (((x1061==x1062)<=x1063)<<x1064);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x1065 = 4;
	int32_t x1066 = INT32_MIN;
	uint16_t x1067 = 892U;
	static int16_t x1068 = 1;

	t36 = (((x1065==x1066)<=x1067)<<x1068);

	if (t36 != 2) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x1097 = -13;
	int8_t x1099 = 8;
	uint8_t x1100 = 10U;
	static volatile int32_t t37 = 149047;

	t37 = (((x1097==x1098)<=x1099)<<x1100);

	if (t37 != 1024) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1193 = INT64_MAX;
	int16_t x1194 = 86;
	volatile int16_t x1195 = -1;
	static uint16_t x1196 = 6U;

	t38 = (((x1193==x1194)<=x1195)<<x1196);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x1205 = 318752U;
	static uint32_t x1206 = UINT32_MAX;
	uint8_t x1207 = UINT8_MAX;
	volatile int16_t x1208 = 10;
	volatile int32_t t39 = -238;

	t39 = (((x1205==x1206)<=x1207)<<x1208);

	if (t39 != 1024) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x1237 = -113;
	uint8_t x1239 = 7U;
	uint8_t x1240 = 12U;

	t40 = (((x1237==x1238)<=x1239)<<x1240);

	if (t40 != 4096) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1249 = 4057LL;
	uint8_t x1250 = UINT8_MAX;
	volatile uint32_t x1251 = 31124535U;
	static int8_t x1252 = 0;

	t41 = (((x1249==x1250)<=x1251)<<x1252);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x1385 = INT8_MAX;
	volatile int8_t x1386 = INT8_MIN;
	volatile int32_t x1387 = 10224;
	volatile uint8_t x1388 = 5U;
	int32_t t42 = -46;

	t42 = (((x1385==x1386)<=x1387)<<x1388);

	if (t42 != 32) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x1489 = 5098LLU;
	int8_t x1490 = 48;
	volatile uint32_t x1491 = UINT32_MAX;
	uint8_t x1492 = 2U;
	volatile int32_t t43 = -458;

	t43 = (((x1489==x1490)<=x1491)<<x1492);

	if (t43 != 4) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x1498 = -39;
	volatile int8_t x1500 = 2;

	t44 = (((x1497==x1498)<=x1499)<<x1500);

	if (t44 != 4) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x1517 = INT8_MAX;
	volatile int32_t x1518 = 22;
	int32_t x1519 = INT32_MIN;
	int8_t x1520 = 5;
	volatile int32_t t45 = -23;

	t45 = (((x1517==x1518)<=x1519)<<x1520);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x1545 = -1;
	int64_t x1546 = INT64_MIN;
	volatile uint8_t x1547 = 1U;
	volatile uint8_t x1548 = 12U;

	t46 = (((x1545==x1546)<=x1547)<<x1548);

	if (t46 != 4096) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x1606 = INT32_MIN;
	static uint8_t x1607 = 24U;
	uint8_t x1608 = 0U;
	volatile int32_t t47 = 82470;

	t47 = (((x1605==x1606)<=x1607)<<x1608);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x1665 = 955249U;
	int64_t x1667 = INT64_MIN;
	uint8_t x1668 = 5U;
	volatile int32_t t48 = -19838;

	t48 = (((x1665==x1666)<=x1667)<<x1668);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x1678 = 38;
	volatile int8_t x1680 = 1;
	static volatile int32_t t49 = -21966736;

	t49 = (((x1677==x1678)<=x1679)<<x1680);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x1685 = 45LLU;
	int8_t x1686 = 12;
	static int64_t x1687 = -6596LL;
	volatile uint64_t x1688 = 3LLU;
	int32_t t50 = 286;

	t50 = (((x1685==x1686)<=x1687)<<x1688);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x1693 = -4;
	int32_t x1694 = 216454866;
	int16_t x1695 = -1;
	static uint16_t x1696 = 11U;
	static int32_t t51 = -12381521;

	t51 = (((x1693==x1694)<=x1695)<<x1696);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x1745 = 3U;
	static int8_t x1746 = 0;
	static int64_t x1747 = 206456LL;
	volatile uint8_t x1748 = 1U;
	volatile int32_t t52 = 57294;

	t52 = (((x1745==x1746)<=x1747)<<x1748);

	if (t52 != 2) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x1761 = -1;
	int8_t x1763 = -3;
	int16_t x1764 = 23;
	volatile int32_t t53 = -243;

	t53 = (((x1761==x1762)<=x1763)<<x1764);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x1793 = UINT16_MAX;
	volatile int32_t x1794 = INT32_MIN;
	static uint32_t x1795 = UINT32_MAX;
	uint8_t x1796 = 3U;
	volatile int32_t t54 = 1;

	t54 = (((x1793==x1794)<=x1795)<<x1796);

	if (t54 != 8) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x1817 = INT32_MAX;
	uint32_t x1818 = UINT32_MAX;
	int32_t x1819 = INT32_MIN;
	static int8_t x1820 = 0;
	int32_t t55 = 2;

	t55 = (((x1817==x1818)<=x1819)<<x1820);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x1851 = -185;
	volatile int32_t t56 = 465289;

	t56 = (((x1849==x1850)<=x1851)<<x1852);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x1877 = -345;
	int32_t x1878 = -1;
	uint32_t x1879 = 242622U;
	static uint8_t x1880 = 1U;
	volatile int32_t t57 = 95;

	t57 = (((x1877==x1878)<=x1879)<<x1880);

	if (t57 != 2) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x1897 = 3;
	static int8_t x1898 = -57;
	int8_t x1899 = INT8_MAX;
	int32_t x1900 = 0;
	int32_t t58 = -1883039;

	t58 = (((x1897==x1898)<=x1899)<<x1900);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x2001 = -57;
	uint8_t x2004 = 7U;
	static volatile int32_t t59 = 16047;

	t59 = (((x2001==x2002)<=x2003)<<x2004);

	if (t59 != 128) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x2025 = -1LL;
	int16_t x2026 = -1;
	volatile uint16_t x2027 = 1069U;
	uint8_t x2028 = 1U;

	t60 = (((x2025==x2026)<=x2027)<<x2028);

	if (t60 != 2) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x2057 = -422LL;
	uint8_t x2058 = 20U;
	volatile uint16_t x2059 = 2089U;
	static int64_t x2060 = 0LL;
	int32_t t61 = 5927;

	t61 = (((x2057==x2058)<=x2059)<<x2060);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x2061 = INT16_MIN;
	static uint16_t x2064 = 6U;
	volatile int32_t t62 = 878;

	t62 = (((x2061==x2062)<=x2063)<<x2064);

	if (t62 != 64) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int32_t x2102 = -1;
	volatile int8_t x2103 = -40;
	int8_t x2104 = 0;

	t63 = (((x2101==x2102)<=x2103)<<x2104);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x2117 = INT8_MAX;
	int8_t x2118 = INT8_MAX;
	static volatile uint64_t x2119 = 6944LLU;
	uint16_t x2120 = 1U;
	volatile int32_t t64 = 80518954;

	t64 = (((x2117==x2118)<=x2119)<<x2120);

	if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x2143 = INT32_MIN;
	uint64_t x2144 = 9LLU;
	int32_t t65 = 867;

	t65 = (((x2141==x2142)<=x2143)<<x2144);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x2149 = INT16_MAX;
	uint8_t x2150 = 1U;
	volatile int8_t x2152 = 0;
	static volatile int32_t t66 = 278320741;

	t66 = (((x2149==x2150)<=x2151)<<x2152);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x2157 = 1899U;
	static int16_t x2158 = INT16_MIN;
	int64_t x2159 = INT64_MIN;
	uint64_t x2160 = 27LLU;
	volatile int32_t t67 = 22805403;

	t67 = (((x2157==x2158)<=x2159)<<x2160);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x2161 = 5;
	int16_t x2162 = INT16_MIN;
	static volatile uint16_t x2164 = 26U;
	static volatile int32_t t68 = 1;

	t68 = (((x2161==x2162)<=x2163)<<x2164);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x2169 = INT8_MIN;
	volatile int32_t x2171 = INT32_MAX;
	int32_t t69 = -93759406;

	t69 = (((x2169==x2170)<=x2171)<<x2172);

	if (t69 != 1024) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint16_t x2181 = UINT16_MAX;
	uint16_t x2182 = UINT16_MAX;
	static int32_t x2183 = INT32_MIN;
	volatile uint8_t x2184 = 8U;
	int32_t t70 = -17104182;

	t70 = (((x2181==x2182)<=x2183)<<x2184);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x2193 = INT64_MIN;
	int64_t x2194 = -1LL;
	int16_t x2195 = INT16_MIN;
	uint8_t x2196 = 2U;
	int32_t t71 = -61502240;

	t71 = (((x2193==x2194)<=x2195)<<x2196);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x2305 = INT32_MAX;
	int8_t x2306 = INT8_MIN;
	volatile int8_t x2308 = 1;

	t72 = (((x2305==x2306)<=x2307)<<x2308);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint16_t x2314 = UINT16_MAX;
	static int64_t x2315 = INT64_MAX;
	int8_t x2316 = 12;
	int32_t t73 = -42500;

	t73 = (((x2313==x2314)<=x2315)<<x2316);

	if (t73 != 4096) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x2329 = 152752LLU;
	uint8_t x2332 = 5U;
	volatile int32_t t74 = -1737822;

	t74 = (((x2329==x2330)<=x2331)<<x2332);

	if (t74 != 32) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x2381 = INT32_MIN;
	uint8_t x2382 = 21U;
	int16_t x2383 = INT16_MAX;
	int8_t x2384 = 2;
	volatile int32_t t75 = 1;

	t75 = (((x2381==x2382)<=x2383)<<x2384);

	if (t75 != 4) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x2394 = 13;
	uint16_t x2395 = 1U;
	uint8_t x2396 = 0U;
	volatile int32_t t76 = 165027195;

	t76 = (((x2393==x2394)<=x2395)<<x2396);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x2414 = INT8_MIN;
	volatile uint8_t x2416 = 4U;
	int32_t t77 = 84145356;

	t77 = (((x2413==x2414)<=x2415)<<x2416);

	if (t77 != 16) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x2470 = INT32_MIN;
	uint32_t x2472 = 2U;
	static volatile int32_t t78 = 1;

	t78 = (((x2469==x2470)<=x2471)<<x2472);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x2521 = 1U;
	int8_t x2523 = 54;
	uint16_t x2524 = 18U;
	static int32_t t79 = 1;

	t79 = (((x2521==x2522)<=x2523)<<x2524);

	if (t79 != 262144) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x2537 = INT8_MAX;
	int16_t x2538 = -1;
	int16_t x2539 = INT16_MAX;
	int8_t x2540 = 15;

	t80 = (((x2537==x2538)<=x2539)<<x2540);

	if (t80 != 32768) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int32_t x2575 = INT32_MIN;
	int32_t x2576 = 0;
	static int32_t t81 = -18196393;

	t81 = (((x2573==x2574)<=x2575)<<x2576);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x2601 = 249737U;
	uint32_t x2602 = 1629023441U;
	static int16_t x2603 = -22;
	int64_t x2604 = 0LL;

	t82 = (((x2601==x2602)<=x2603)<<x2604);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x2609 = INT64_MIN;
	uint64_t x2611 = 10LLU;
	uint16_t x2612 = 0U;
	int32_t t83 = 498;

	t83 = (((x2609==x2610)<=x2611)<<x2612);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x2621 = INT16_MIN;
	uint8_t x2624 = 0U;

	t84 = (((x2621==x2622)<=x2623)<<x2624);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x2646 = INT16_MIN;
	static int16_t x2647 = INT16_MAX;
	uint8_t x2648 = 7U;
	volatile int32_t t85 = -1620205;

	t85 = (((x2645==x2646)<=x2647)<<x2648);

	if (t85 != 128) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x2694 = INT64_MIN;
	volatile int64_t x2695 = 58LL;
	uint64_t x2696 = 14LLU;
	int32_t t86 = 1646;

	t86 = (((x2693==x2694)<=x2695)<<x2696);

	if (t86 != 16384) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x2701 = UINT64_MAX;
	static int16_t x2702 = INT16_MIN;
	int16_t x2703 = -14;
	static int8_t x2704 = 0;
	static int32_t t87 = 41659682;

	t87 = (((x2701==x2702)<=x2703)<<x2704);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x2717 = INT16_MAX;
	int16_t x2718 = INT16_MAX;
	uint16_t x2719 = UINT16_MAX;
	static uint32_t x2720 = 21U;

	t88 = (((x2717==x2718)<=x2719)<<x2720);

	if (t88 != 2097152) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x2721 = UINT8_MAX;
	static int8_t x2722 = INT8_MIN;
	uint8_t x2724 = 5U;
	volatile int32_t t89 = 495325637;

	t89 = (((x2721==x2722)<=x2723)<<x2724);

	if (t89 != 32) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x2729 = -1LL;
	uint16_t x2730 = 1U;
	static int16_t x2731 = -1;
	uint32_t x2732 = 3U;
	int32_t t90 = -868536;

	t90 = (((x2729==x2730)<=x2731)<<x2732);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x2733 = -1;
	int32_t x2734 = -6;
	static uint16_t x2735 = UINT16_MAX;
	uint16_t x2736 = 3U;

	t91 = (((x2733==x2734)<=x2735)<<x2736);

	if (t91 != 8) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x2750 = 16122420LLU;
	static int16_t x2751 = -8;
	uint8_t x2752 = 3U;
	static int32_t t92 = -23214405;

	t92 = (((x2749==x2750)<=x2751)<<x2752);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x2829 = 1;
	uint32_t x2830 = 2497469U;
	int16_t x2832 = 0;
	static int32_t t93 = 469188;

	t93 = (((x2829==x2830)<=x2831)<<x2832);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x2857 = INT64_MIN;
	uint64_t x2858 = UINT64_MAX;
	volatile uint16_t x2860 = 26U;
	int32_t t94 = 231198258;

	t94 = (((x2857==x2858)<=x2859)<<x2860);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x2885 = UINT64_MAX;
	uint16_t x2886 = 377U;
	uint16_t x2887 = 10454U;
	static uint32_t x2888 = 28U;
	volatile int32_t t95 = 45;

	t95 = (((x2885==x2886)<=x2887)<<x2888);

	if (t95 != 268435456) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x2897 = 225U;
	int32_t x2900 = 0;
	int32_t t96 = 131615;

	t96 = (((x2897==x2898)<=x2899)<<x2900);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x2969 = 2064337736U;
	uint32_t x2971 = 127787U;
	uint8_t x2972 = 1U;
	volatile int32_t t97 = -6290905;

	t97 = (((x2969==x2970)<=x2971)<<x2972);

	if (t97 != 2) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x2973 = UINT8_MAX;
	int16_t x2974 = -1;
	uint8_t x2975 = 3U;
	static uint16_t x2976 = 6U;
	volatile int32_t t98 = -6;

	t98 = (((x2973==x2974)<=x2975)<<x2976);

	if (t98 != 64) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x2995 = UINT32_MAX;
	uint16_t x2996 = 9U;
	int32_t t99 = -13417327;

	t99 = (((x2993==x2994)<=x2995)<<x2996);

	if (t99 != 512) { NG(); } else { ; }
	
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

