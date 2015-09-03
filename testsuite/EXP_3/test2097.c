#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x89 = UINT16_MAX;
uint32_t x213 = UINT32_MAX;
static int32_t x241 = 125;
int32_t t5 = 2;
uint64_t x349 = 6356258714926795581LLU;
uint16_t x350 = 9U;
volatile int64_t x401 = 29LL;
int8_t x402 = 4;
volatile int16_t x404 = INT16_MAX;
int32_t x502 = 1;
uint32_t x597 = 1U;
static volatile int8_t x693 = INT8_MAX;
static volatile int16_t x696 = -12639;
static uint32_t x750 = 8U;
uint16_t x751 = 2048U;
uint8_t x752 = 2U;
uint32_t x755 = UINT32_MAX;
uint16_t x757 = 272U;
uint8_t x864 = 4U;
volatile int32_t t20 = 83722;
static uint16_t x902 = 14U;
static int16_t x903 = -1;
volatile uint32_t x958 = 21U;
static int64_t t22 = -8896358872120903LL;
uint8_t x982 = 11U;
int8_t x984 = 1;
static volatile int32_t t23 = 47;
int64_t x1012 = -1LL;
uint64_t x1015 = 324LLU;
volatile uint8_t x1357 = 1U;
uint16_t x1360 = 2610U;
int32_t t28 = -5985;
uint8_t x1389 = UINT8_MAX;
static volatile uint64_t t29 = 4051261848274970284LLU;
volatile int8_t x1565 = 1;
int32_t t32 = 9;
static volatile int64_t x1713 = 505025LL;
int16_t x1714 = 0;
int16_t x1945 = INT16_MAX;
static uint16_t x1948 = 513U;
volatile int64_t t38 = 10784235065315LL;
volatile int64_t t42 = 1727940619LL;
static uint16_t x2418 = 13U;
uint16_t x2529 = UINT16_MAX;
static int32_t x2544 = -49459;
uint8_t x2618 = 13U;
int8_t x2672 = INT8_MAX;
volatile uint64_t t50 = 56929LLU;
volatile uint8_t x2882 = 0U;
uint8_t x3091 = UINT8_MAX;
static volatile int32_t t54 = -119268236;
static int32_t x3274 = 13;
uint8_t x3276 = UINT8_MAX;
int8_t x3317 = INT8_MAX;
volatile int16_t x3319 = 0;
int16_t x3429 = 3;
int64_t x3432 = -1LL;
volatile uint16_t x3450 = 18U;
int16_t x3668 = INT16_MIN;
int16_t x3940 = -1;
uint64_t x4249 = UINT64_MAX;
uint16_t x4250 = 2U;
static volatile int8_t x4252 = INT8_MIN;
int16_t x4497 = 90;
static int8_t x4498 = 8;
uint32_t x4500 = 139697693U;
int64_t t70 = 685974889LL;
volatile uint8_t x4666 = 1U;
uint8_t x4738 = 11U;
static uint64_t x4793 = UINT64_MAX;
int64_t x4904 = INT64_MAX;
volatile uint64_t t76 = 0LLU;
int32_t x4935 = -15030;
uint8_t x4946 = 1U;
volatile uint8_t x5043 = 2U;
int8_t x5044 = 0;
int64_t t80 = -9274696867933LL;
uint64_t x5291 = 220761256977LLU;
volatile int16_t x5460 = INT16_MIN;
int16_t x5505 = INT16_MAX;
static int16_t x5622 = 1;
int16_t x5669 = INT16_MAX;
static int64_t x5671 = 12311324572585643LL;
static int64_t x5672 = INT64_MIN;
static uint8_t x5713 = 2U;
volatile int64_t t92 = -9071324663LL;
uint16_t x5880 = 187U;
volatile int16_t x6038 = 3;
uint8_t x6058 = 0U;


void f0(void) {
	volatile int64_t x9 = 2040LL;
	uint64_t x10 = 2LLU;
	uint16_t x11 = 14U;
	static uint64_t x12 = UINT64_MAX;
	static volatile uint64_t t0 = 3492389720727300248LLU;

	t0 = ((x9<<x10)/(x11^x12));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x45 = 465550710U;
	volatile int32_t x46 = 2;
	int32_t x47 = -492;
	uint32_t x48 = 60921290U;
	volatile uint32_t t1 = 121904122U;

	t1 = ((x45<<x46)/(x47^x48));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x90 = 1;
	static int8_t x91 = -1;
	int64_t x92 = INT64_MAX;
	volatile int64_t t2 = 7695284458LL;

	t2 = ((x89<<x90)/(x91^x92));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x214 = 0U;
	static int8_t x215 = -59;
	volatile int32_t x216 = -4449;
	uint32_t t3 = 5U;

	t3 = ((x213<<x214)/(x215^x216));

	if (t3 != 966899U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x229 = 575766U;
	volatile int8_t x230 = 31;
	static int32_t x231 = INT32_MAX;
	static volatile int8_t x232 = INT8_MAX;
	uint32_t t4 = 184U;

	t4 = ((x229<<x230)/(x231^x232));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x242 = 11U;
	int32_t x243 = INT32_MIN;
	int8_t x244 = INT8_MAX;

	t5 = ((x241<<x242)/(x243^x244));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x351 = -100292;
	uint64_t x352 = UINT64_MAX;
	static uint64_t t6 = 5569LLU;

	t6 = ((x349<<x350)/(x351^x352));

	if (t6 != 77549381994777LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x403 = 7324;
	volatile int64_t t7 = 14082148342328LL;

	t7 = ((x401<<x402)/(x403^x404));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x497 = UINT32_MAX;
	volatile uint32_t x498 = 1U;
	int16_t x499 = 637;
	volatile int8_t x500 = INT8_MIN;
	volatile uint32_t t8 = 105848389U;

	t8 = ((x497<<x498)/(x499^x500));

	if (t8 != 1U) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x501 = 3997LLU;
	int16_t x503 = INT16_MIN;
	int32_t x504 = -1;
	static volatile uint64_t t9 = 223238713940614128LLU;

	t9 = ((x501<<x502)/(x503^x504));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x598 = 6U;
	uint32_t x599 = 523272U;
	int8_t x600 = -1;
	volatile uint32_t t10 = 357904U;

	t10 = ((x597<<x598)/(x599^x600));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x677 = UINT16_MAX;
	uint16_t x678 = 1U;
	int64_t x679 = INT64_MIN;
	int8_t x680 = INT8_MIN;
	static volatile int64_t t11 = -283540806LL;

	t11 = ((x677<<x678)/(x679^x680));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x694 = 21U;
	uint16_t x695 = 30U;
	static int32_t t12 = -14302;

	t12 = ((x693<<x694)/(x695^x696));

	if (t12 != -21122) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x709 = 0;
	int16_t x710 = 20;
	static int8_t x711 = -1;
	volatile int32_t x712 = -734;
	int32_t t13 = 3477;

	t13 = ((x709<<x710)/(x711^x712));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x745 = 16U;
	static uint8_t x746 = 25U;
	int32_t x747 = -1;
	uint8_t x748 = 30U;
	uint32_t t14 = 4U;

	t14 = ((x745<<x746)/(x747^x748));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x749 = UINT16_MAX;
	volatile int32_t t15 = -83022;

	t15 = ((x749<<x750)/(x751^x752));

	if (t15 != 8183) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x753 = UINT8_MAX;
	int16_t x754 = 0;
	volatile uint16_t x756 = 2U;
	uint32_t t16 = 20U;

	t16 = ((x753<<x754)/(x755^x756));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x758 = 0;
	int8_t x759 = 0;
	int64_t x760 = -1918868268LL;
	int64_t t17 = 129903942LL;

	t17 = ((x757<<x758)/(x759^x760));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x813 = INT32_MAX;
	int16_t x814 = 0;
	static uint16_t x815 = 134U;
	int32_t x816 = -1749;
	static volatile int32_t t18 = -386;

	t18 = ((x813<<x814)/(x815^x816));

	if (t18 != -1326425) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x845 = 3100U;
	uint8_t x846 = 4U;
	volatile int8_t x847 = INT8_MIN;
	int32_t x848 = -1;
	static int32_t t19 = 24276;

	t19 = ((x845<<x846)/(x847^x848));

	if (t19 != 390) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x861 = INT8_MAX;
	uint16_t x862 = 1U;
	int8_t x863 = INT8_MAX;

	t20 = ((x861<<x862)/(x863^x864));

	if (t20 != 2) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x901 = 1U;
	uint8_t x904 = UINT8_MAX;
	int32_t t21 = -11264186;

	t21 = ((x901<<x902)/(x903^x904));

	if (t21 != -64) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x957 = 998664705386LL;
	int64_t x959 = INT64_MIN;
	static int32_t x960 = INT32_MAX;

	t22 = ((x957<<x958)/(x959^x960));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x981 = 3U;
	uint8_t x983 = 11U;

	t23 = ((x981<<x982)/(x983^x984));

	if (t23 != 614) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1009 = 3U;
	uint32_t x1010 = 3U;
	int64_t x1011 = INT64_MIN;
	volatile int64_t t24 = -2668583089654LL;

	t24 = ((x1009<<x1010)/(x1011^x1012));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x1013 = 866U;
	volatile uint64_t x1014 = 3LLU;
	int16_t x1016 = -12;
	volatile uint64_t t25 = 155542941213LLU;

	t25 = ((x1013<<x1014)/(x1015^x1016));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x1153 = INT8_MAX;
	uint8_t x1154 = 5U;
	uint32_t x1155 = 56532U;
	int64_t x1156 = 115226003519882465LL;
	volatile int64_t t26 = -1407LL;

	t26 = ((x1153<<x1154)/(x1155^x1156));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1273 = UINT32_MAX;
	int16_t x1274 = 1;
	static uint16_t x1275 = 3U;
	int8_t x1276 = INT8_MIN;
	uint32_t t27 = 528545011U;

	t27 = ((x1273<<x1274)/(x1275^x1276));

	if (t27 != 1U) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1358 = 0U;
	volatile int8_t x1359 = -1;

	t28 = ((x1357<<x1358)/(x1359^x1360));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x1390 = 14U;
	int8_t x1391 = 4;
	uint64_t x1392 = 17519415533991LLU;

	t29 = ((x1389<<x1390)/(x1391^x1392));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1549 = 6;
	static volatile int16_t x1550 = 1;
	static int32_t x1551 = 244227400;
	int8_t x1552 = -22;
	volatile int32_t t30 = -1547935;

	t30 = ((x1549<<x1550)/(x1551^x1552));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1566 = 18;
	int16_t x1567 = INT16_MIN;
	int16_t x1568 = -1;
	static int32_t t31 = -1904646;

	t31 = ((x1565<<x1566)/(x1567^x1568));

	if (t31 != 8) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1701 = 0;
	int16_t x1702 = 1;
	int16_t x1703 = -4;
	int16_t x1704 = -2;

	t32 = ((x1701<<x1702)/(x1703^x1704));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1715 = 261803605068306LLU;
	static uint32_t x1716 = UINT32_MAX;
	uint64_t t33 = 429878570428181057LLU;

	t33 = ((x1713<<x1714)/(x1715^x1716));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x1801 = UINT64_MAX;
	volatile uint16_t x1802 = 2U;
	int64_t x1803 = INT64_MIN;
	int8_t x1804 = -1;
	volatile uint64_t t34 = 1698624259608604556LLU;

	t34 = ((x1801<<x1802)/(x1803^x1804));

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x1893 = 1;
	static int8_t x1894 = 30;
	volatile int32_t x1895 = -75100;
	int32_t x1896 = INT32_MIN;
	int32_t t35 = -9249154;

	t35 = ((x1893<<x1894)/(x1895^x1896));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint16_t x1925 = 101U;
	int8_t x1926 = 0;
	volatile int32_t x1927 = -1;
	int64_t x1928 = INT64_MIN;
	int64_t t36 = 658707989480LL;

	t36 = ((x1925<<x1926)/(x1927^x1928));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x1946 = 2U;
	int32_t x1947 = INT32_MIN;
	int32_t t37 = 1;

	t37 = ((x1945<<x1946)/(x1947^x1948));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int64_t x1985 = 1873LL;
	uint16_t x1986 = 7U;
	uint8_t x1987 = UINT8_MAX;
	int16_t x1988 = -965;

	t38 = ((x1985<<x1986)/(x1987^x1988));

	if (t38 != -289LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x2073 = 12628211U;
	uint8_t x2074 = 1U;
	int8_t x2075 = -1;
	uint16_t x2076 = 4333U;
	volatile uint32_t t39 = 5201045U;

	t39 = ((x2073<<x2074)/(x2075^x2076));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x2245 = 2U;
	int8_t x2246 = 1;
	int32_t x2247 = -1;
	volatile uint32_t x2248 = 3U;
	static volatile uint32_t t40 = 1510151U;

	t40 = ((x2245<<x2246)/(x2247^x2248));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x2313 = UINT8_MAX;
	int8_t x2314 = 0;
	int32_t x2315 = -1;
	volatile uint16_t x2316 = UINT16_MAX;
	volatile int32_t t41 = -3000;

	t41 = ((x2313<<x2314)/(x2315^x2316));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x2361 = 978687LL;
	uint8_t x2362 = 26U;
	int16_t x2363 = -1;
	uint16_t x2364 = UINT16_MAX;

	t42 = ((x2361<<x2362)/(x2363^x2364));

	if (t42 != -1002175488LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x2417 = 11830763649340904LLU;
	uint8_t x2419 = 0U;
	static uint32_t x2420 = UINT32_MAX;
	volatile uint64_t t43 = 94225LLU;

	t43 = ((x2417<<x2418)/(x2419^x2420));

	if (t43 != 1090554391LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x2421 = 79U;
	uint32_t x2422 = 2U;
	static int16_t x2423 = INT16_MIN;
	int32_t x2424 = 13;
	int32_t t44 = 10;

	t44 = ((x2421<<x2422)/(x2423^x2424));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x2530 = 0U;
	int8_t x2531 = -1;
	int32_t x2532 = INT32_MAX;
	int32_t t45 = -5;

	t45 = ((x2529<<x2530)/(x2531^x2532));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x2541 = 59U;
	volatile int16_t x2542 = 24;
	int16_t x2543 = 226;
	static volatile int32_t t46 = -9;

	t46 = ((x2541<<x2542)/(x2543^x2544));

	if (t46 != -19949) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x2617 = UINT16_MAX;
	volatile uint8_t x2619 = 2U;
	uint8_t x2620 = UINT8_MAX;
	int32_t t47 = -46;

	t47 = ((x2617<<x2618)/(x2619^x2620));

	if (t47 != 2121987) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x2669 = 30LLU;
	uint8_t x2670 = 3U;
	int32_t x2671 = 11;
	uint64_t t48 = 39LLU;

	t48 = ((x2669<<x2670)/(x2671^x2672));

	if (t48 != 2LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x2709 = UINT32_MAX;
	volatile int16_t x2710 = 0;
	static int32_t x2711 = INT32_MAX;
	volatile int32_t x2712 = -26093645;
	uint32_t t49 = 6714U;

	t49 = ((x2709<<x2710)/(x2711^x2712));

	if (t49 != 1U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x2813 = 2565LLU;
	int8_t x2814 = 26;
	static uint64_t x2815 = UINT64_MAX;
	int16_t x2816 = -7;

	t50 = ((x2813<<x2814)/(x2815^x2816));

	if (t50 != 28689039360LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x2881 = 987644957239LL;
	int64_t x2883 = 1610248509493181106LL;
	uint8_t x2884 = UINT8_MAX;
	int64_t t51 = -44426909548162640LL;

	t51 = ((x2881<<x2882)/(x2883^x2884));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x2893 = 57;
	uint8_t x2894 = 0U;
	volatile uint8_t x2895 = 2U;
	int16_t x2896 = -1;
	volatile int32_t t52 = -41847;

	t52 = ((x2893<<x2894)/(x2895^x2896));

	if (t52 != -19) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x3089 = 3U;
	uint16_t x3090 = 20U;
	static volatile uint32_t x3092 = UINT32_MAX;
	uint32_t t53 = 1779244639U;

	t53 = ((x3089<<x3090)/(x3091^x3092));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x3141 = INT8_MAX;
	static int8_t x3142 = 1;
	int16_t x3143 = INT16_MAX;
	volatile int32_t x3144 = -1;

	t54 = ((x3141<<x3142)/(x3143^x3144));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x3229 = 1347U;
	int8_t x3230 = 1;
	int32_t x3231 = -95698;
	uint8_t x3232 = 2U;
	volatile int32_t t55 = -340;

	t55 = ((x3229<<x3230)/(x3231^x3232));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x3273 = 2U;
	int64_t x3275 = INT64_MIN;
	volatile int64_t t56 = 4100328925LL;

	t56 = ((x3273<<x3274)/(x3275^x3276));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x3318 = 2;
	uint8_t x3320 = 10U;
	int32_t t57 = -77398835;

	t57 = ((x3317<<x3318)/(x3319^x3320));

	if (t57 != 50) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x3430 = 27U;
	static int64_t x3431 = -386227050547815852LL;
	int64_t t58 = 31879790960115LL;

	t58 = ((x3429<<x3430)/(x3431^x3432));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x3449 = 1087;
	volatile uint8_t x3451 = 5U;
	uint8_t x3452 = 0U;
	int32_t t59 = -96934;

	t59 = ((x3449<<x3450)/(x3451^x3452));

	if (t59 != 56990105) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x3577 = 454904548U;
	volatile uint16_t x3578 = 10U;
	int32_t x3579 = 332;
	int16_t x3580 = -14041;
	uint32_t t60 = 95U;

	t60 = ((x3577<<x3578)/(x3579^x3580));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x3629 = 5983636501LL;
	uint8_t x3630 = 4U;
	int32_t x3631 = INT32_MIN;
	static int64_t x3632 = INT64_MIN;
	int64_t t61 = -848934305673LL;

	t61 = ((x3629<<x3630)/(x3631^x3632));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x3665 = 21U;
	uint8_t x3666 = 0U;
	int64_t x3667 = 1LL;
	static volatile int64_t t62 = -81482560000LL;

	t62 = ((x3665<<x3666)/(x3667^x3668));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x3797 = 463987LLU;
	static int16_t x3798 = 29;
	static uint8_t x3799 = 82U;
	int32_t x3800 = INT32_MAX;
	uint64_t t63 = 16109661192119LLU;

	t63 = ((x3797<<x3798)/(x3799^x3800));

	if (t63 != 115996LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x3805 = 2;
	uint32_t x3806 = 2U;
	static volatile int32_t x3807 = INT32_MAX;
	int8_t x3808 = INT8_MIN;
	int32_t t64 = -6539327;

	t64 = ((x3805<<x3806)/(x3807^x3808));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x3881 = 7U;
	uint64_t x3882 = 10LLU;
	static uint32_t x3883 = UINT32_MAX;
	uint8_t x3884 = UINT8_MAX;
	static uint32_t t65 = 29U;

	t65 = ((x3881<<x3882)/(x3883^x3884));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x3937 = 3;
	volatile uint8_t x3938 = 2U;
	int16_t x3939 = -2;
	int32_t t66 = -630;

	t66 = ((x3937<<x3938)/(x3939^x3940));

	if (t66 != 12) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x4049 = 83573445138871678LLU;
	static int16_t x4050 = 3;
	int16_t x4051 = INT16_MAX;
	volatile int8_t x4052 = -1;
	volatile uint64_t t67 = 10695408050LLU;

	t67 = ((x4049<<x4050)/(x4051^x4052));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x4251 = 34U;
	volatile uint64_t t68 = 0LLU;

	t68 = ((x4249<<x4250)/(x4251^x4252));

	if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x4499 = 0U;
	volatile uint32_t t69 = 168298U;

	t69 = ((x4497<<x4498)/(x4499^x4500));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x4557 = 25;
	uint32_t x4558 = 1U;
	int64_t x4559 = 3132908LL;
	uint32_t x4560 = 1913U;

	t70 = ((x4557<<x4558)/(x4559^x4560));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x4605 = 1U;
	uint8_t x4606 = 2U;
	static uint8_t x4607 = 3U;
	volatile int8_t x4608 = 1;
	int32_t t71 = 12015;

	t71 = ((x4605<<x4606)/(x4607^x4608));

	if (t71 != 2) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x4665 = 133734U;
	int16_t x4667 = 650;
	int32_t x4668 = INT32_MAX;
	uint32_t t72 = 137749581U;

	t72 = ((x4665<<x4666)/(x4667^x4668));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x4737 = 9;
	static int8_t x4739 = 57;
	int64_t x4740 = INT64_MIN;
	volatile int64_t t73 = -4452342315LL;

	t73 = ((x4737<<x4738)/(x4739^x4740));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x4794 = 11U;
	uint64_t x4795 = UINT64_MAX;
	int64_t x4796 = INT64_MAX;
	volatile uint64_t t74 = 60496605221820213LLU;

	t74 = ((x4793<<x4794)/(x4795^x4796));

	if (t74 != 1LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x4821 = 61U;
	uint16_t x4822 = 7U;
	uint32_t x4823 = 10628579U;
	int64_t x4824 = INT64_MAX;
	int64_t t75 = -1932316308241LL;

	t75 = ((x4821<<x4822)/(x4823^x4824));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x4901 = 66096;
	uint16_t x4902 = 2U;
	uint64_t x4903 = 23916387639881LLU;

	t76 = ((x4901<<x4902)/(x4903^x4904));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x4933 = 243U;
	uint8_t x4934 = 0U;
	int32_t x4936 = -41644482;
	int32_t t77 = 107880;

	t77 = ((x4933<<x4934)/(x4935^x4936));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x4945 = INT16_MAX;
	uint8_t x4947 = 0U;
	uint64_t x4948 = 10202532507299LLU;
	uint64_t t78 = 256755603422967LLU;

	t78 = ((x4945<<x4946)/(x4947^x4948));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x5041 = INT16_MAX;
	uint8_t x5042 = 0U;
	int32_t t79 = -13;

	t79 = ((x5041<<x5042)/(x5043^x5044));

	if (t79 != 16383) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x5153 = 3U;
	int8_t x5154 = 26;
	int64_t x5155 = INT64_MIN;
	int64_t x5156 = 2186212038584LL;

	t80 = ((x5153<<x5154)/(x5155^x5156));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x5217 = 0U;
	int8_t x5218 = 1;
	int16_t x5219 = INT16_MAX;
	static uint64_t x5220 = 7724112697LLU;
	volatile uint64_t t81 = 100963995LLU;

	t81 = ((x5217<<x5218)/(x5219^x5220));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x5289 = 0LLU;
	static uint8_t x5290 = 9U;
	static uint32_t x5292 = 7137U;
	volatile uint64_t t82 = 6213657898451495011LLU;

	t82 = ((x5289<<x5290)/(x5291^x5292));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x5313 = INT8_MAX;
	uint16_t x5314 = 5U;
	uint64_t x5315 = 272579LLU;
	int32_t x5316 = -145;
	volatile uint64_t t83 = 13168167410LLU;

	t83 = ((x5313<<x5314)/(x5315^x5316));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x5393 = 12;
	uint32_t x5394 = 15U;
	int32_t x5395 = -7;
	uint8_t x5396 = UINT8_MAX;
	volatile int32_t t84 = -784659747;

	t84 = ((x5393<<x5394)/(x5395^x5396));

	if (t84 != -1572) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x5457 = UINT32_MAX;
	uint8_t x5458 = 5U;
	volatile int32_t x5459 = INT32_MIN;
	uint32_t t85 = 998906411U;

	t85 = ((x5457<<x5458)/(x5459^x5460));

	if (t85 != 2U) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x5497 = 98271123895093914LLU;
	uint8_t x5498 = 1U;
	volatile int8_t x5499 = 8;
	int32_t x5500 = INT32_MIN;
	volatile uint64_t t86 = 12312LLU;

	t86 = ((x5497<<x5498)/(x5499^x5500));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x5506 = 11U;
	int16_t x5507 = INT16_MIN;
	int16_t x5508 = 1;
	volatile int32_t t87 = -369262;

	t87 = ((x5505<<x5506)/(x5507^x5508));

	if (t87 != -2048) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x5545 = UINT64_MAX;
	int8_t x5546 = 59;
	int16_t x5547 = INT16_MAX;
	int64_t x5548 = INT64_MAX;
	uint64_t t88 = 13313762827271LLU;

	t88 = ((x5545<<x5546)/(x5547^x5548));

	if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x5621 = 2U;
	volatile int32_t x5623 = -1574589;
	volatile int32_t x5624 = INT32_MAX;
	int32_t t89 = 98;

	t89 = ((x5621<<x5622)/(x5623^x5624));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint64_t x5637 = 29132LLU;
	uint32_t x5638 = 2U;
	int8_t x5639 = INT8_MIN;
	int32_t x5640 = INT32_MIN;
	volatile uint64_t t90 = 1955799453LLU;

	t90 = ((x5637<<x5638)/(x5639^x5640));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x5670 = 2U;
	volatile int64_t t91 = 24800607715832LL;

	t91 = ((x5669<<x5670)/(x5671^x5672));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x5714 = 0;
	static volatile int16_t x5715 = 3039;
	static int64_t x5716 = INT64_MAX;

	t92 = ((x5713<<x5714)/(x5715^x5716));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x5733 = 30U;
	uint8_t x5734 = 3U;
	volatile uint32_t x5735 = UINT32_MAX;
	volatile int64_t x5736 = INT64_MAX;
	static int64_t t93 = 20540862LL;

	t93 = ((x5733<<x5734)/(x5735^x5736));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x5877 = UINT32_MAX;
	uint8_t x5878 = 4U;
	uint16_t x5879 = UINT16_MAX;
	volatile uint32_t t94 = 24156652U;

	t94 = ((x5877<<x5878)/(x5879^x5880));

	if (t94 != 65724U) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x5953 = 1036298425LLU;
	int32_t x5954 = 0;
	int8_t x5955 = 0;
	int32_t x5956 = INT32_MAX;
	static volatile uint64_t t95 = 2582628892635377475LLU;

	t95 = ((x5953<<x5954)/(x5955^x5956));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x5993 = 0LLU;
	uint32_t x5994 = 60U;
	int16_t x5995 = -738;
	volatile uint64_t x5996 = 11898300LLU;
	volatile uint64_t t96 = 2448974569375218946LLU;

	t96 = ((x5993<<x5994)/(x5995^x5996));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x6037 = 38608289LL;
	int64_t x6039 = -3LL;
	int64_t x6040 = INT64_MAX;
	int64_t t97 = 194311LL;

	t97 = ((x6037<<x6038)/(x6039^x6040));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x6041 = 115;
	int16_t x6042 = 1;
	int8_t x6043 = INT8_MIN;
	volatile int16_t x6044 = INT16_MIN;
	static volatile int32_t t98 = 0;

	t98 = ((x6041<<x6042)/(x6043^x6044));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x6057 = 27204U;
	static uint16_t x6059 = UINT16_MAX;
	uint64_t x6060 = UINT64_MAX;
	volatile uint64_t t99 = 28063145LLU;

	t99 = ((x6057<<x6058)/(x6059^x6060));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

