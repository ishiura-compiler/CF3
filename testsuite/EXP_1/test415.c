#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x9 = 0U;
uint16_t x12 = 0U;
volatile uint64_t x90 = UINT64_MAX;
volatile uint16_t x91 = 0U;
static int64_t x153 = INT64_MAX;
int64_t t2 = INT64_MAX;
int16_t x415 = 5;
int32_t t6 = -29;
uint32_t x650 = 52U;
int16_t x705 = INT16_MAX;
uint64_t x817 = 0LLU;
int64_t x842 = INT64_MIN;
int32_t x844 = -1;
uint8_t x1006 = 0U;
volatile uint8_t x1007 = 15U;
int64_t x1008 = INT64_MAX;
uint64_t t16 = 1901531038LLU;
volatile int64_t t19 = -646LL;
int8_t x1242 = 0;
int16_t x1244 = -1;
volatile int32_t x1330 = -1;
static volatile int8_t x1332 = 3;
int8_t x1482 = -1;
static int32_t t24 = 239581832;
uint8_t x1682 = 0U;
uint8_t x1747 = 1U;
volatile int64_t t27 = 294348965456834886LL;
static volatile uint8_t x1847 = 1U;
volatile int64_t x1920 = INT64_MIN;
uint8_t x1983 = 4U;
int32_t x2183 = 5;
volatile uint64_t t34 = UINT64_MAX;
int64_t x2241 = -1LL;
int64_t t35 = -981357037LL;
int64_t x2272 = 90LL;
int8_t x2290 = -1;
int16_t x2329 = -1;
volatile uint32_t x2437 = 3U;
static int32_t x2440 = INT32_MIN;
uint64_t t39 = 4420184678018LLU;
uint8_t x2551 = 21U;
int16_t x2648 = -1352;
volatile uint64_t x2757 = UINT64_MAX;
int8_t x2761 = INT8_MIN;
static uint8_t x2763 = 0U;
int64_t x2764 = INT64_MIN;
static int64_t x2800 = INT64_MAX;
static uint16_t x2863 = 16U;
uint16_t x2864 = 2U;
int8_t x2914 = 12;
volatile uint16_t x3014 = 0U;
int32_t x3116 = 111969;
static int64_t x3149 = INT64_MIN;
int16_t x3152 = -1336;
static uint8_t x3163 = 10U;
uint8_t x3215 = 1U;
int64_t x3264 = -1LL;
static uint32_t x3266 = UINT32_MAX;
int64_t x3333 = INT64_MAX;
static volatile uint8_t x3335 = 0U;
int64_t t62 = INT64_MAX;
uint16_t x3401 = 3333U;
uint32_t x3402 = UINT32_MAX;
int8_t x3403 = 3;
uint32_t x3545 = 786820071U;
static volatile int16_t x3579 = 12;
volatile int64_t t68 = -3LL;
static volatile uint16_t x3658 = UINT16_MAX;
uint64_t t69 = 2843774849LLU;
volatile int32_t x3722 = INT32_MIN;
uint8_t x3745 = UINT8_MAX;
volatile int16_t x3747 = 3;
int32_t t71 = 3170;
volatile uint32_t t72 = UINT32_MAX;
volatile uint8_t x3835 = 0U;
int16_t x3873 = INT16_MIN;
int32_t x3874 = -1;
int64_t x3934 = -4891726LL;
uint8_t x3963 = 1U;
volatile uint32_t t78 = UINT32_MAX;
int8_t x4085 = INT8_MIN;
uint32_t x4665 = 4U;
int8_t x4667 = 1;
static int64_t x4669 = INT64_MAX;
volatile int8_t x4960 = INT8_MIN;
static volatile int16_t x5013 = 1387;
int8_t x5091 = 0;
uint8_t x5187 = 25U;
uint32_t x5188 = UINT32_MAX;
uint8_t x5222 = UINT8_MAX;
uint8_t x5223 = 16U;
static int16_t x5371 = 5;
uint64_t x5409 = UINT64_MAX;
volatile int16_t x5440 = INT16_MAX;


void f0(void) {
	int8_t x10 = INT8_MAX;
	volatile int8_t x11 = 10;
	volatile int32_t t0 = -14508;

	t0 = (((x9*x10)<<x11)|x12);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x89 = UINT32_MAX;
	int32_t x92 = 13;
	static uint64_t t1 = 597799887LLU;

	t1 = (((x89*x90)<<x91)|x92);

	if (t1 != 18446744069414584333LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x154 = 1U;
	uint8_t x155 = 0U;
	uint32_t x156 = 323U;

	t2 = (((x153*x154)<<x155)|x156);

	if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x229 = UINT64_MAX;
	static int16_t x230 = 2;
	volatile uint64_t x231 = 25LLU;
	static int32_t x232 = INT32_MIN;
	static volatile uint64_t t3 = 829774LLU;

	t3 = (((x229*x230)<<x231)|x232);

	if (t3 != 18446744073642442752LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x261 = 127U;
	volatile uint8_t x262 = UINT8_MAX;
	uint64_t x263 = 2LLU;
	int8_t x264 = -1;
	volatile uint32_t t4 = UINT32_MAX;

	t4 = (((x261*x262)<<x263)|x264);

	if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x389 = INT16_MIN;
	int64_t x390 = -1LL;
	uint8_t x391 = 27U;
	static uint32_t x392 = 25531554U;
	int64_t t5 = 330338371800LL;

	t5 = (((x389*x390)<<x391)|x392);

	if (t5 != 4398072042658LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x413 = UINT8_MAX;
	uint8_t x414 = UINT8_MAX;
	int32_t x416 = INT32_MIN;

	t6 = (((x413*x414)<<x415)|x416);

	if (t6 != -2145402848) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x473 = 0U;
	uint16_t x474 = 1369U;
	volatile int8_t x475 = 1;
	static int32_t x476 = -1;
	volatile int32_t t7 = -19;

	t7 = (((x473*x474)<<x475)|x476);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x649 = 0;
	static uint8_t x651 = 1U;
	volatile int64_t x652 = INT64_MIN;
	volatile int64_t t8 = INT64_MIN;

	t8 = (((x649*x650)<<x651)|x652);

	if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x697 = 30U;
	int16_t x698 = 253;
	static uint8_t x699 = 8U;
	static uint8_t x700 = UINT8_MAX;
	static volatile int32_t t9 = -2;

	t9 = (((x697*x698)<<x699)|x700);

	if (t9 != 1943295) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x706 = 7U;
	uint8_t x707 = 6U;
	int64_t x708 = -1LL;
	int64_t t10 = 105302849311LL;

	t10 = (((x705*x706)<<x707)|x708);

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x769 = 401152446378LLU;
	int64_t x770 = -1LL;
	int8_t x771 = 15;
	int32_t x772 = 868;
	volatile uint64_t t11 = 73914LLU;

	t11 = (((x769*x770)<<x771)|x772);

	if (t11 != 18433599110346638180LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x818 = INT32_MIN;
	static volatile uint16_t x819 = 3U;
	int16_t x820 = 6662;
	uint64_t t12 = 77LLU;

	t12 = (((x817*x818)<<x819)|x820);

	if (t12 != 6662LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x841 = 1046388379068LLU;
	uint16_t x843 = 46U;
	uint64_t t13 = UINT64_MAX;

	t13 = (((x841*x842)<<x843)|x844);

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x933 = -1;
	int8_t x934 = -1;
	uint32_t x935 = 18U;
	int64_t x936 = INT64_MAX;
	int64_t t14 = INT64_MAX;

	t14 = (((x933*x934)<<x935)|x936);

	if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x1005 = INT32_MIN;
	volatile int64_t t15 = INT64_MAX;

	t15 = (((x1005*x1006)<<x1007)|x1008);

	if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x1013 = 52286332U;
	uint64_t x1014 = UINT64_MAX;
	volatile int8_t x1015 = 2;
	int8_t x1016 = INT8_MAX;

	t16 = (((x1013*x1014)<<x1015)|x1016);

	if (t16 != 18446744073500406399LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x1033 = 18U;
	volatile uint64_t x1034 = 107729132LLU;
	uint16_t x1035 = 20U;
	uint64_t x1036 = 3LLU;
	volatile uint64_t t17 = 5144018426221615933LLU;

	t17 = (((x1033*x1034)<<x1035)|x1036);

	if (t17 != 2033319281688579LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint64_t x1197 = UINT64_MAX;
	int16_t x1198 = 4;
	int64_t x1199 = 0LL;
	int8_t x1200 = -1;
	volatile uint64_t t18 = UINT64_MAX;

	t18 = (((x1197*x1198)<<x1199)|x1200);

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint8_t x1221 = 5U;
	uint32_t x1222 = UINT32_MAX;
	volatile int8_t x1223 = 3;
	volatile int64_t x1224 = -630674LL;

	t19 = (((x1221*x1222)<<x1223)|x1224);

	if (t19 != -2LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x1241 = INT32_MAX;
	int8_t x1243 = 22;
	static volatile int32_t t20 = 1010;

	t20 = (((x1241*x1242)<<x1243)|x1244);

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1305 = INT8_MIN;
	volatile int32_t x1306 = -1;
	volatile int8_t x1307 = 7;
	int32_t x1308 = INT32_MIN;
	int32_t t21 = -28;

	t21 = (((x1305*x1306)<<x1307)|x1308);

	if (t21 != -2147467264) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1329 = -1;
	uint64_t x1331 = 30LLU;
	volatile int32_t t22 = -3;

	t22 = (((x1329*x1330)<<x1331)|x1332);

	if (t22 != 1073741827) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x1369 = INT16_MIN;
	int8_t x1370 = -1;
	uint8_t x1371 = 6U;
	int32_t x1372 = -87601;
	volatile int32_t t23 = -1574;

	t23 = (((x1369*x1370)<<x1371)|x1372);

	if (t23 != -87601) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x1481 = -3720;
	volatile int16_t x1483 = 1;
	volatile int16_t x1484 = INT16_MAX;

	t24 = (((x1481*x1482)<<x1483)|x1484);

	if (t24 != 32767) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x1625 = 91918526072187LLU;
	uint8_t x1626 = 81U;
	uint64_t x1627 = 1LLU;
	int16_t x1628 = INT16_MIN;
	uint64_t t25 = 691220383557881LLU;

	t25 = (((x1625*x1626)<<x1627)|x1628);

	if (t25 != 18446744073709549526LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x1681 = INT16_MIN;
	uint8_t x1683 = 6U;
	static uint32_t x1684 = UINT32_MAX;
	uint32_t t26 = UINT32_MAX;

	t26 = (((x1681*x1682)<<x1683)|x1684);

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1745 = INT32_MAX;
	static uint32_t x1746 = 73698291U;
	volatile int64_t x1748 = INT64_MIN;

	t27 = (((x1745*x1746)<<x1747)|x1748);

	if (t27 != -9223372032707205094LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1833 = -1;
	int32_t x1834 = -1;
	uint16_t x1835 = 1U;
	static int8_t x1836 = INT8_MIN;
	volatile int32_t t28 = -484;

	t28 = (((x1833*x1834)<<x1835)|x1836);

	if (t28 != -126) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x1845 = -18LL;
	int32_t x1846 = -97;
	static int8_t x1848 = INT8_MIN;
	volatile int64_t t29 = -193LL;

	t29 = (((x1845*x1846)<<x1847)|x1848);

	if (t29 != -92LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1849 = -82LL;
	uint64_t x1850 = 113987033583LLU;
	static int8_t x1851 = 1;
	uint32_t x1852 = UINT32_MAX;
	uint64_t t30 = 23870032962LLU;

	t30 = (((x1849*x1850)<<x1851)|x1852);

	if (t30 != 18446725382011879423LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x1917 = UINT64_MAX;
	static int16_t x1918 = -1;
	uint8_t x1919 = 46U;
	static volatile uint64_t t31 = 1903021511537LLU;

	t31 = (((x1917*x1918)<<x1919)|x1920);

	if (t31 != 9223442405598953472LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1937 = 18U;
	uint8_t x1938 = 61U;
	uint8_t x1939 = 0U;
	uint32_t x1940 = 24848096U;
	uint32_t t32 = 31U;

	t32 = (((x1937*x1938)<<x1939)|x1940);

	if (t32 != 24848106U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1981 = INT8_MIN;
	uint64_t x1982 = 47LLU;
	int16_t x1984 = INT16_MIN;
	static uint64_t t33 = 88871953844787LLU;

	t33 = (((x1981*x1982)<<x1983)|x1984);

	if (t33 != 18446744073709520896LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x2181 = 21;
	uint16_t x2182 = 1891U;
	static volatile uint64_t x2184 = UINT64_MAX;

	t34 = (((x2181*x2182)<<x2183)|x2184);

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x2242 = INT16_MIN;
	static int64_t x2243 = 0LL;
	static int32_t x2244 = INT32_MIN;

	t35 = (((x2241*x2242)<<x2243)|x2244);

	if (t35 != -2147450880LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x2269 = INT16_MAX;
	static int8_t x2270 = 1;
	static uint64_t x2271 = 1LLU;
	volatile int64_t t36 = 2544LL;

	t36 = (((x2269*x2270)<<x2271)|x2272);

	if (t36 != 65534LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x2289 = 88U;
	uint8_t x2291 = 0U;
	int64_t x2292 = INT64_MAX;
	volatile int64_t t37 = INT64_MAX;

	t37 = (((x2289*x2290)<<x2291)|x2292);

	if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x2330 = 2LLU;
	uint16_t x2331 = 3U;
	int32_t x2332 = INT32_MIN;
	uint64_t t38 = 6478LLU;

	t38 = (((x2329*x2330)<<x2331)|x2332);

	if (t38 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x2438 = 757070LLU;
	static uint8_t x2439 = 1U;

	t39 = (((x2437*x2438)<<x2439)|x2440);

	if (t39 != 18446744071566610388LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x2549 = UINT16_MAX;
	uint64_t x2550 = 1767388LLU;
	static int64_t x2552 = -1LL;
	uint64_t t40 = UINT64_MAX;

	t40 = (((x2549*x2550)<<x2551)|x2552);

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2609 = 7;
	static uint64_t x2610 = 89140911288LLU;
	volatile uint8_t x2611 = 6U;
	static int16_t x2612 = INT16_MIN;
	uint64_t t41 = 162444231462905594LLU;

	t41 = (((x2609*x2610)<<x2611)|x2612);

	if (t41 != 18446744073709535744LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x2645 = 6;
	static uint64_t x2646 = 31534890LLU;
	uint8_t x2647 = 50U;
	uint64_t t42 = 316782215358348LLU;

	t42 = (((x2645*x2646)<<x2647)|x2648);

	if (t42 != 18446744073709550264LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2758 = INT16_MAX;
	uint8_t x2759 = 9U;
	int32_t x2760 = -55;
	static volatile uint64_t t43 = 1198943LLU;

	t43 = (((x2757*x2758)<<x2759)|x2760);

	if (t43 != 18446744073709551561LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x2762 = UINT64_MAX;
	volatile uint64_t t44 = 859131725074862372LLU;

	t44 = (((x2761*x2762)<<x2763)|x2764);

	if (t44 != 9223372036854775936LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x2797 = -1;
	uint64_t x2798 = UINT64_MAX;
	static int8_t x2799 = 31;
	volatile uint64_t t45 = 11984758168023LLU;

	t45 = (((x2797*x2798)<<x2799)|x2800);

	if (t45 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x2817 = 590U;
	uint64_t x2818 = 1LLU;
	uint8_t x2819 = 0U;
	volatile uint8_t x2820 = 5U;
	uint64_t t46 = 1LLU;

	t46 = (((x2817*x2818)<<x2819)|x2820);

	if (t46 != 591LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x2861 = 116273LLU;
	int8_t x2862 = INT8_MIN;
	volatile uint64_t t47 = 6540737965306882LLU;

	t47 = (((x2861*x2862)<<x2863)|x2864);

	if (t47 != 18446743098340933634LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x2913 = 8502174LLU;
	uint8_t x2915 = 39U;
	volatile int64_t x2916 = -1LL;
	uint64_t t48 = UINT64_MAX;

	t48 = (((x2913*x2914)<<x2915)|x2916);

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x3013 = INT8_MIN;
	volatile int32_t x3015 = 15;
	int8_t x3016 = 42;
	static volatile int32_t t49 = 505098;

	t49 = (((x3013*x3014)<<x3015)|x3016);

	if (t49 != 42) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x3053 = -1982;
	uint64_t x3054 = 143402LLU;
	int8_t x3055 = 9;
	uint32_t x3056 = 23054959U;
	static volatile uint64_t t50 = 246LLU;

	t50 = (((x3053*x3054)<<x3055)|x3056);

	if (t50 != 18446743928209140335LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x3061 = 60261374U;
	volatile uint64_t x3062 = UINT64_MAX;
	int8_t x3063 = 1;
	uint16_t x3064 = UINT16_MAX;
	uint64_t t51 = 344202341LLU;

	t51 = (((x3061*x3062)<<x3063)|x3064);

	if (t51 != 18446744073589030911LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x3097 = UINT64_MAX;
	static int64_t x3098 = -1LL;
	volatile uint16_t x3099 = 1U;
	static uint32_t x3100 = 20U;
	volatile uint64_t t52 = 445802LLU;

	t52 = (((x3097*x3098)<<x3099)|x3100);

	if (t52 != 22LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x3113 = 8157486721471751856LLU;
	int64_t x3114 = INT64_MIN;
	int8_t x3115 = 1;
	uint64_t t53 = 435282791414311LLU;

	t53 = (((x3113*x3114)<<x3115)|x3116);

	if (t53 != 111969LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x3150 = 75857014LLU;
	int8_t x3151 = 0;
	static uint64_t t54 = 243066784541883206LLU;

	t54 = (((x3149*x3150)<<x3151)|x3152);

	if (t54 != 18446744073709550280LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x3161 = -27567250982489LL;
	int8_t x3162 = -1;
	static volatile int16_t x3164 = INT16_MIN;
	volatile int64_t t55 = 112LL;

	t55 = (((x3161*x3162)<<x3163)|x3164);

	if (t55 != -7168LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x3213 = UINT8_MAX;
	int16_t x3214 = INT16_MAX;
	static volatile int32_t x3216 = -1;
	volatile int32_t t56 = -64374409;

	t56 = (((x3213*x3214)<<x3215)|x3216);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x3229 = 1328652LLU;
	int32_t x3230 = INT32_MIN;
	static int16_t x3231 = 0;
	int32_t x3232 = -1;
	static volatile uint64_t t57 = UINT64_MAX;

	t57 = (((x3229*x3230)<<x3231)|x3232);

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x3261 = 0U;
	int8_t x3262 = INT8_MIN;
	uint16_t x3263 = 10U;
	static int64_t t58 = -1642523490418191LL;

	t58 = (((x3261*x3262)<<x3263)|x3264);

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x3265 = 92U;
	static uint8_t x3267 = 4U;
	int16_t x3268 = -1;
	volatile uint32_t t59 = UINT32_MAX;

	t59 = (((x3265*x3266)<<x3267)|x3268);

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x3309 = 32535LLU;
	volatile int16_t x3310 = INT16_MAX;
	int16_t x3311 = 1;
	static volatile int64_t x3312 = -1LL;
	volatile uint64_t t60 = UINT64_MAX;

	t60 = (((x3309*x3310)<<x3311)|x3312);

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x3325 = 0LL;
	int32_t x3326 = 2243;
	int8_t x3327 = 33;
	static uint16_t x3328 = UINT16_MAX;
	volatile int64_t t61 = 676205340341LL;

	t61 = (((x3325*x3326)<<x3327)|x3328);

	if (t61 != 65535LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x3334 = 1U;
	static volatile uint32_t x3336 = UINT32_MAX;

	t62 = (((x3333*x3334)<<x3335)|x3336);

	if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x3381 = 6784425885LLU;
	static uint64_t x3382 = UINT64_MAX;
	static uint8_t x3383 = 1U;
	volatile uint16_t x3384 = 237U;
	volatile uint64_t t63 = 1903LLU;

	t63 = (((x3381*x3382)<<x3383)|x3384);

	if (t63 != 18446744060140699887LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x3404 = 0U;
	volatile uint32_t t64 = 765U;

	t64 = (((x3401*x3402)<<x3403)|x3404);

	if (t64 != 4294940632U) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x3421 = -1LL;
	uint64_t x3422 = 221973151546161LLU;
	uint8_t x3423 = 60U;
	int8_t x3424 = -1;
	uint64_t t65 = UINT64_MAX;

	t65 = (((x3421*x3422)<<x3423)|x3424);

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x3537 = 7U;
	static uint16_t x3538 = 348U;
	uint8_t x3539 = 0U;
	int16_t x3540 = INT16_MIN;
	static int32_t t66 = -112521633;

	t66 = (((x3537*x3538)<<x3539)|x3540);

	if (t66 != -30332) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x3546 = INT16_MAX;
	uint16_t x3547 = 1U;
	static uint16_t x3548 = 398U;
	uint32_t t67 = 35U;

	t67 = (((x3545*x3546)<<x3547)|x3548);

	if (t67 != 2384144830U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x3577 = -990;
	int8_t x3578 = INT8_MIN;
	int64_t x3580 = 325859448714LL;

	t68 = (((x3577*x3578)<<x3579)|x3580);

	if (t68 != 325863643018LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x3657 = 10856860318LLU;
	int16_t x3659 = 10;
	static int16_t x3660 = INT16_MIN;

	t69 = (((x3657*x3658)<<x3659)|x3660);

	if (t69 != 18446744073709520896LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x3721 = UINT64_MAX;
	volatile uint8_t x3723 = 43U;
	uint64_t x3724 = 6303LLU;
	volatile uint64_t t70 = 5483978660071LLU;

	t70 = (((x3721*x3722)<<x3723)|x3724);

	if (t70 != 6303LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x3746 = 6221;
	static int8_t x3748 = INT8_MIN;

	t71 = (((x3745*x3746)<<x3747)|x3748);

	if (t71 != -104) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x3757 = 7U;
	uint32_t x3758 = UINT32_MAX;
	int8_t x3759 = 1;
	volatile uint32_t x3760 = 50310959U;

	t72 = (((x3757*x3758)<<x3759)|x3760);

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x3801 = -1;
	int32_t x3802 = -1;
	volatile uint8_t x3803 = 30U;
	volatile int32_t x3804 = -7280556;
	volatile int32_t t73 = 6525;

	t73 = (((x3801*x3802)<<x3803)|x3804);

	if (t73 != -7280556) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x3833 = 5586U;
	volatile int8_t x3834 = INT8_MAX;
	uint32_t x3836 = UINT32_MAX;
	volatile uint32_t t74 = UINT32_MAX;

	t74 = (((x3833*x3834)<<x3835)|x3836);

	if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x3875 = 15U;
	int8_t x3876 = -1;
	volatile int32_t t75 = -1;

	t75 = (((x3873*x3874)<<x3875)|x3876);

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x3933 = INT8_MIN;
	volatile int8_t x3935 = 26;
	int16_t x3936 = INT16_MIN;
	int64_t t76 = -119602063152001LL;

	t76 = (((x3933*x3934)<<x3935)|x3936);

	if (t76 != -32768LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x3961 = UINT8_MAX;
	volatile int8_t x3962 = INT8_MAX;
	uint16_t x3964 = 19U;
	int32_t t77 = 883960;

	t77 = (((x3961*x3962)<<x3963)|x3964);

	if (t77 != 64787) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x4009 = UINT32_MAX;
	int16_t x4010 = -1;
	static int16_t x4011 = 0;
	int16_t x4012 = -1;

	t78 = (((x4009*x4010)<<x4011)|x4012);

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x4081 = 10LLU;
	uint64_t x4082 = 131326890LLU;
	static uint8_t x4083 = 0U;
	int16_t x4084 = INT16_MIN;
	volatile uint64_t t79 = 357536300892637LLU;

	t79 = (((x4081*x4082)<<x4083)|x4084);

	if (t79 != 18446744073709544612LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x4086 = INT16_MIN;
	static uint16_t x4087 = 7U;
	uint64_t x4088 = UINT64_MAX;
	static volatile uint64_t t80 = UINT64_MAX;

	t80 = (((x4085*x4086)<<x4087)|x4088);

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x4165 = 5U;
	uint16_t x4166 = UINT16_MAX;
	static uint8_t x4167 = 0U;
	volatile int32_t x4168 = 1;
	volatile uint32_t t81 = 29154U;

	t81 = (((x4165*x4166)<<x4167)|x4168);

	if (t81 != 327675U) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x4261 = 8U;
	uint16_t x4262 = 98U;
	int8_t x4263 = 0;
	int8_t x4264 = INT8_MIN;
	static volatile int32_t t82 = 4215309;

	t82 = (((x4261*x4262)<<x4263)|x4264);

	if (t82 != -112) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x4341 = INT16_MAX;
	uint8_t x4342 = 0U;
	uint8_t x4343 = 4U;
	volatile int16_t x4344 = -460;
	volatile int32_t t83 = 9;

	t83 = (((x4341*x4342)<<x4343)|x4344);

	if (t83 != -460) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x4385 = 61U;
	static uint64_t x4386 = 1LLU;
	static int16_t x4387 = 6;
	volatile int16_t x4388 = INT16_MAX;
	static volatile uint64_t t84 = 102392467459144LLU;

	t84 = (((x4385*x4386)<<x4387)|x4388);

	if (t84 != 32767LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x4666 = INT8_MAX;
	int16_t x4668 = INT16_MIN;
	static volatile uint32_t t85 = 578U;

	t85 = (((x4665*x4666)<<x4667)|x4668);

	if (t85 != 4294935544U) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x4670 = 1U;
	uint32_t x4671 = 0U;
	int64_t x4672 = INT64_MAX;
	volatile int64_t t86 = INT64_MAX;

	t86 = (((x4669*x4670)<<x4671)|x4672);

	if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x4885 = 99U;
	int16_t x4886 = 0;
	static volatile int16_t x4887 = 15;
	int8_t x4888 = INT8_MIN;
	int32_t t87 = 18946518;

	t87 = (((x4885*x4886)<<x4887)|x4888);

	if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint16_t x4909 = 773U;
	int64_t x4910 = 25855LL;
	uint8_t x4911 = 28U;
	int64_t x4912 = INT64_MIN;
	int64_t t88 = -3568211910929979052LL;

	t88 = (((x4909*x4910)<<x4911)|x4912);

	if (t88 != -9218007108648173568LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x4957 = 7U;
	int8_t x4958 = INT8_MAX;
	static uint8_t x4959 = 17U;
	static int32_t t89 = 14294;

	t89 = (((x4957*x4958)<<x4959)|x4960);

	if (t89 != -128) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint8_t x5014 = 2U;
	int16_t x5015 = 1;
	volatile int8_t x5016 = INT8_MIN;
	volatile int32_t t90 = -340;

	t90 = (((x5013*x5014)<<x5015)|x5016);

	if (t90 != -84) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x5017 = 0U;
	static volatile int32_t x5018 = 3701646;
	uint16_t x5019 = 3U;
	static int32_t x5020 = INT32_MIN;
	volatile int32_t t91 = INT32_MIN;

	t91 = (((x5017*x5018)<<x5019)|x5020);

	if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x5089 = 3U;
	volatile int32_t x5090 = -1;
	int16_t x5092 = INT16_MIN;
	volatile uint32_t t92 = 1500890561U;

	t92 = (((x5089*x5090)<<x5091)|x5092);

	if (t92 != 4294967293U) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x5117 = INT16_MIN;
	int8_t x5118 = -10;
	int8_t x5119 = 0;
	uint32_t x5120 = 699U;
	volatile uint32_t t93 = 4036U;

	t93 = (((x5117*x5118)<<x5119)|x5120);

	if (t93 != 328379U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x5185 = 5U;
	static uint8_t x5186 = 1U;
	volatile uint32_t t94 = UINT32_MAX;

	t94 = (((x5185*x5186)<<x5187)|x5188);

	if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint64_t x5221 = UINT64_MAX;
	volatile int8_t x5224 = INT8_MIN;
	uint64_t t95 = 216513459033749LLU;

	t95 = (((x5221*x5222)<<x5223)|x5224);

	if (t95 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x5297 = 395;
	static uint64_t x5298 = 768550LLU;
	uint8_t x5299 = 1U;
	static int64_t x5300 = -4047638586760112LL;
	volatile uint64_t t96 = 15564LLU;

	t96 = (((x5297*x5298)<<x5299)|x5300);

	if (t96 != 18442696435192001876LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x5369 = UINT32_MAX;
	uint16_t x5370 = 21U;
	volatile uint16_t x5372 = UINT16_MAX;
	uint32_t t97 = UINT32_MAX;

	t97 = (((x5369*x5370)<<x5371)|x5372);

	if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x5410 = -3357656065LL;
	uint8_t x5411 = 11U;
	static uint64_t x5412 = 1981019702LLU;
	static volatile uint64_t t98 = 4LLU;

	t98 = (((x5409*x5410)<<x5411)|x5412);

	if (t98 != 6878359977526LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x5437 = 28LLU;
	static int64_t x5438 = INT64_MIN;
	uint8_t x5439 = 38U;
	volatile uint64_t t99 = 15521217882LLU;

	t99 = (((x5437*x5438)<<x5439)|x5440);

	if (t99 != 32767LLU) { NG(); } else { ; }
	
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

