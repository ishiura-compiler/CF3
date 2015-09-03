#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x4 = INT16_MIN;
volatile uint8_t x11 = 33U;
uint16_t x47 = 1U;
uint8_t x127 = 1U;
int32_t x318 = INT32_MAX;
uint8_t x319 = 7U;
uint16_t x405 = UINT16_MAX;
uint64_t x406 = 8133365008947667260LLU;
int8_t x408 = -1;
volatile uint8_t x789 = 3U;
uint32_t x863 = 18U;
volatile int8_t x923 = 53;
uint32_t x982 = 4870892U;
uint16_t x1082 = 26U;
static int64_t t16 = INT64_MAX;
uint16_t x1097 = 6U;
uint8_t x1099 = 2U;
volatile int64_t t18 = 49717LL;
int64_t x1205 = INT64_MAX;
volatile uint8_t x1207 = 3U;
int64_t x1208 = INT64_MAX;
int32_t x1441 = -171630;
static int8_t x1443 = 1;
static uint16_t x1457 = 11U;
uint16_t x1559 = 0U;
uint32_t x1575 = 1U;
static uint32_t x1603 = 0U;
int64_t x1621 = INT64_MIN;
int8_t x1638 = 57;
int64_t x1640 = -1LL;
uint64_t t30 = 69423846327272LLU;
static uint64_t x1777 = UINT64_MAX;
uint64_t x1870 = 5914860148145844LLU;
uint32_t x1898 = 4885777U;
volatile uint16_t x1899 = 6U;
volatile uint64_t t33 = UINT64_MAX;
uint8_t x1991 = 9U;
volatile int64_t t37 = 76472465594171LL;
int32_t x2205 = -1;
uint64_t x2361 = UINT64_MAX;
volatile uint64_t t39 = 14340429917LLU;
int16_t x2424 = 1;
uint32_t x2426 = UINT32_MAX;
static int8_t x2457 = -15;
int32_t x2459 = 1;
int16_t x2697 = INT16_MIN;
int16_t x2700 = INT16_MAX;
static int8_t x2915 = 29;
uint64_t x3114 = UINT64_MAX;
int16_t x3241 = -1;
static uint64_t x3242 = UINT64_MAX;
uint64_t t53 = 129867428219304LLU;
uint64_t x3462 = 1403895LLU;
volatile uint16_t x3464 = UINT16_MAX;
uint64_t t54 = 1519399385398789240LLU;
int32_t t55 = 25;
static uint64_t t56 = UINT64_MAX;
uint8_t x3854 = 50U;
volatile uint16_t x3855 = 1U;
int32_t x3981 = 1020;
volatile uint32_t x3982 = UINT32_MAX;
volatile int8_t x3984 = INT8_MAX;
uint8_t x4110 = 50U;
int8_t x4111 = 0;
static uint64_t t59 = UINT64_MAX;
int64_t t64 = 589LL;
static uint64_t x4780 = 1252713392552643302LLU;
static volatile uint64_t t65 = 859053469LLU;
int64_t x4792 = -1LL;
int8_t x5095 = 1;
int64_t x5096 = -2489427231173932853LL;
uint8_t x5187 = 1U;
uint32_t x5198 = UINT32_MAX;
uint16_t x5199 = 0U;
volatile int32_t x5201 = INT32_MIN;
int64_t x5257 = 59LL;
uint8_t x5363 = 1U;
static uint8_t x5367 = 0U;
uint16_t x5433 = 63U;
uint8_t x5436 = 6U;
int16_t x5534 = INT16_MAX;
static volatile uint16_t x5535 = 4U;
int64_t x5574 = INT64_MAX;
uint16_t x5697 = 1U;
int32_t x5716 = INT32_MIN;
int16_t x5898 = 2486;
int32_t x5900 = INT32_MAX;
int32_t x6058 = 894096;
volatile uint64_t x6059 = 1LLU;
uint64_t t86 = UINT64_MAX;
uint64_t x6074 = 236232129125003175LLU;
volatile uint8_t x6075 = 17U;
uint64_t t87 = 32440523150LLU;
uint64_t x6088 = 558LLU;
volatile uint64_t t88 = 281443960311257032LLU;
int8_t x6206 = 62;
int8_t x6207 = 0;
int16_t x6401 = 139;
static uint64_t t95 = 110096LLU;
int16_t x6780 = INT16_MIN;
volatile int64_t x6812 = INT64_MIN;


void f0(void) {
	int32_t x1 = INT32_MIN;
	int64_t x2 = INT64_MAX;
	uint16_t x3 = 2U;
	int64_t t0 = -5816428LL;

	t0 = ((x1%(x2>>x3))|x4);

	if (t0 != -32768LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x9 = 125U;
	uint64_t x10 = UINT64_MAX;
	uint64_t x12 = UINT64_MAX;
	volatile uint64_t t1 = UINT64_MAX;

	t1 = ((x9%(x10>>x11))|x12);

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x45 = 25631U;
	int16_t x46 = 116;
	volatile int32_t x48 = -90899;
	volatile int32_t t2 = -1;

	t2 = ((x45%(x46>>x47))|x48);

	if (t2 != -90883) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x125 = INT8_MAX;
	int32_t x126 = 394;
	static int64_t x128 = 29187799513LL;
	int64_t t3 = -4607LL;

	t3 = ((x125%(x126>>x127))|x128);

	if (t3 != 29187799551LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x153 = -268288554997476LL;
	volatile uint16_t x154 = 286U;
	uint8_t x155 = 0U;
	int32_t x156 = INT32_MAX;
	static volatile int64_t t4 = -11910517153LL;

	t4 = ((x153%(x154>>x155))|x156);

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x317 = -7270246365126LL;
	int8_t x320 = -1;
	volatile int64_t t5 = -310362211LL;

	t5 = ((x317%(x318>>x319))|x320);

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x407 = 9;
	volatile uint64_t t6 = UINT64_MAX;

	t6 = ((x405%(x406>>x407))|x408);

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x509 = -1;
	int32_t x510 = INT32_MAX;
	uint8_t x511 = 0U;
	uint64_t x512 = 791375962LLU;
	uint64_t t7 = UINT64_MAX;

	t7 = ((x509%(x510>>x511))|x512);

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x533 = -1LL;
	uint64_t x534 = 2380670617LLU;
	int8_t x535 = 1;
	static int32_t x536 = INT32_MIN;
	uint64_t t8 = 11405591347LLU;

	t8 = ((x533%(x534>>x535))|x536);

	if (t8 != 18446744072090857439LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x641 = INT32_MAX;
	volatile int64_t x642 = INT64_MAX;
	int64_t x643 = 24LL;
	static int64_t x644 = INT64_MIN;
	int64_t t9 = -11657LL;

	t9 = ((x641%(x642>>x643))|x644);

	if (t9 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x757 = -1;
	volatile int32_t x758 = INT32_MAX;
	int16_t x759 = 27;
	volatile int8_t x760 = INT8_MIN;
	int32_t t10 = -224;

	t10 = ((x757%(x758>>x759))|x760);

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x790 = UINT32_MAX;
	uint16_t x791 = 22U;
	volatile int32_t x792 = -1;
	volatile uint32_t t11 = UINT32_MAX;

	t11 = ((x789%(x790>>x791))|x792);

	if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x861 = 443LLU;
	volatile uint32_t x862 = 4177462U;
	uint16_t x864 = 6U;
	volatile uint64_t t12 = 134039LLU;

	t12 = ((x861%(x862>>x863))|x864);

	if (t12 != 14LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x921 = INT64_MIN;
	int64_t x922 = 910265599057754113LL;
	volatile uint16_t x924 = 27U;
	int64_t t13 = 6402154172544944LL;

	t13 = ((x921%(x922>>x923))|x924);

	if (t13 != -65LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x981 = UINT64_MAX;
	int16_t x983 = 3;
	static int8_t x984 = 19;
	static uint64_t t14 = 1842782334921076836LLU;

	t14 = ((x981%(x982>>x983))|x984);

	if (t14 != 102167LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x1045 = 1280U;
	volatile int16_t x1046 = INT16_MAX;
	uint8_t x1047 = 6U;
	int8_t x1048 = INT8_MIN;
	volatile int32_t t15 = 295;

	t15 = ((x1045%(x1046>>x1047))|x1048);

	if (t15 != -126) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x1081 = UINT16_MAX;
	uint8_t x1083 = 0U;
	static int64_t x1084 = INT64_MAX;

	t16 = ((x1081%(x1082>>x1083))|x1084);

	if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x1098 = 196371889U;
	uint64_t x1100 = UINT64_MAX;
	uint64_t t17 = UINT64_MAX;

	t17 = ((x1097%(x1098>>x1099))|x1100);

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x1193 = -1LL;
	volatile int32_t x1194 = INT32_MAX;
	uint8_t x1195 = 1U;
	int32_t x1196 = 84781;

	t18 = ((x1193%(x1194>>x1195))|x1196);

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x1206 = UINT16_MAX;
	int64_t t19 = INT64_MAX;

	t19 = ((x1205%(x1206>>x1207))|x1208);

	if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1261 = UINT8_MAX;
	volatile uint64_t x1262 = UINT64_MAX;
	volatile int16_t x1263 = 1;
	volatile int16_t x1264 = INT16_MIN;
	uint64_t t20 = 0LLU;

	t20 = ((x1261%(x1262>>x1263))|x1264);

	if (t20 != 18446744073709519103LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x1341 = UINT64_MAX;
	int16_t x1342 = INT16_MAX;
	int16_t x1343 = 14;
	volatile int64_t x1344 = -1LL;
	volatile uint64_t t21 = UINT64_MAX;

	t21 = ((x1341%(x1342>>x1343))|x1344);

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1442 = 137175127LL;
	uint32_t x1444 = 1059439621U;
	static volatile int64_t t22 = -365858LL;

	t22 = ((x1441%(x1442>>x1443))|x1444);

	if (t22 != -137833LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1458 = 2594974420644LL;
	int8_t x1459 = 27;
	uint64_t x1460 = 19LLU;
	uint64_t t23 = 444225735574LLU;

	t23 = ((x1457%(x1458>>x1459))|x1460);

	if (t23 != 27LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1557 = 850390428LLU;
	volatile uint16_t x1558 = 1488U;
	int32_t x1560 = -262;
	static volatile uint64_t t24 = 7975798338884LLU;

	t24 = ((x1557%(x1558>>x1559))|x1560);

	if (t24 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1573 = INT32_MAX;
	int64_t x1574 = INT64_MAX;
	int16_t x1576 = INT16_MIN;
	int64_t t25 = -5292410498277LL;

	t25 = ((x1573%(x1574>>x1575))|x1576);

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1601 = -1;
	volatile uint16_t x1602 = 12U;
	int16_t x1604 = INT16_MAX;
	volatile int32_t t26 = -2735;

	t26 = ((x1601%(x1602>>x1603))|x1604);

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1622 = 1730487066402512363LL;
	int8_t x1623 = 0;
	int64_t x1624 = INT64_MAX;
	volatile int64_t t27 = 19LL;

	t27 = ((x1621%(x1622>>x1623))|x1624);

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x1637 = INT64_MIN;
	int16_t x1639 = 0;
	volatile int64_t t28 = -43765623633472445LL;

	t28 = ((x1637%(x1638>>x1639))|x1640);

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1657 = INT64_MIN;
	int64_t x1658 = INT64_MAX;
	int8_t x1659 = 1;
	volatile uint64_t x1660 = 971815724121LLU;
	volatile uint64_t t29 = UINT64_MAX;

	t29 = ((x1657%(x1658>>x1659))|x1660);

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x1701 = 12U;
	uint64_t x1702 = 1879LLU;
	int64_t x1703 = 0LL;
	static volatile uint8_t x1704 = 4U;

	t30 = ((x1701%(x1702>>x1703))|x1704);

	if (t30 != 12LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x1778 = 3216;
	volatile uint8_t x1779 = 10U;
	int32_t x1780 = -1;
	volatile uint64_t t31 = UINT64_MAX;

	t31 = ((x1777%(x1778>>x1779))|x1780);

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x1869 = -168615LL;
	uint16_t x1871 = 1U;
	static volatile uint32_t x1872 = 44890119U;
	static volatile uint64_t t32 = 3960944LLU;

	t32 = ((x1869%(x1870>>x1871))|x1872);

	if (t32 != 1252701753047463LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1897 = 3248495426867152LLU;
	static int8_t x1900 = -1;

	t33 = ((x1897%(x1898>>x1899))|x1900);

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x1905 = UINT64_MAX;
	int8_t x1906 = INT8_MAX;
	volatile uint16_t x1907 = 3U;
	int8_t x1908 = INT8_MAX;
	volatile uint64_t t34 = 63944913025105708LLU;

	t34 = ((x1905%(x1906>>x1907))|x1908);

	if (t34 != 127LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x1989 = -1;
	static uint64_t x1990 = 7420LLU;
	volatile uint64_t x1992 = 512LLU;
	uint64_t t35 = 46245172594187LLU;

	t35 = ((x1989%(x1990>>x1991))|x1992);

	if (t35 != 513LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x2117 = INT64_MIN;
	static volatile uint32_t x2118 = UINT32_MAX;
	int16_t x2119 = 23;
	static volatile uint8_t x2120 = 52U;
	volatile int64_t t36 = -1020076210268LL;

	t36 = ((x2117%(x2118>>x2119))|x2120);

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x2169 = INT64_MIN;
	static int64_t x2170 = 59803541086379824LL;
	static uint8_t x2171 = 45U;
	int32_t x2172 = -1;

	t37 = ((x2169%(x2170>>x2171))|x2172);

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x2206 = 560523163206664LLU;
	uint8_t x2207 = 17U;
	volatile uint64_t x2208 = 8824849968435LLU;
	uint64_t t38 = 678259299350LLU;

	t38 = ((x2205%(x2206>>x2207))|x2208);

	if (t38 != 8825015861183LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x2362 = 3218428LLU;
	int8_t x2363 = 20;
	static int8_t x2364 = -2;

	t39 = ((x2361%(x2362>>x2363))|x2364);

	if (t39 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x2421 = INT32_MIN;
	int16_t x2422 = 10480;
	uint8_t x2423 = 1U;
	static int32_t t40 = -51;

	t40 = ((x2421%(x2422>>x2423))|x2424);

	if (t40 != -647) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x2425 = INT64_MAX;
	volatile uint8_t x2427 = 0U;
	uint16_t x2428 = 14155U;
	volatile int64_t t41 = -45750277794770121LL;

	t41 = ((x2425%(x2426>>x2427))|x2428);

	if (t41 != 2147483647LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x2458 = UINT16_MAX;
	int16_t x2460 = -1;
	int32_t t42 = -62530;

	t42 = ((x2457%(x2458>>x2459))|x2460);

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x2581 = 195U;
	volatile int64_t x2582 = INT64_MAX;
	static uint8_t x2583 = 47U;
	static int32_t x2584 = 12109;
	static int64_t t43 = 155796259196449LL;

	t43 = ((x2581%(x2582>>x2583))|x2584);

	if (t43 != 12239LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x2609 = 3U;
	int32_t x2610 = 150456;
	static uint16_t x2611 = 1U;
	int32_t x2612 = INT32_MIN;
	int32_t t44 = -9556;

	t44 = ((x2609%(x2610>>x2611))|x2612);

	if (t44 != -2147483645) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2698 = 19;
	uint16_t x2699 = 3U;
	volatile int32_t t45 = 0;

	t45 = ((x2697%(x2698>>x2699))|x2700);

	if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2853 = -49;
	uint32_t x2854 = 427406772U;
	volatile uint8_t x2855 = 4U;
	static int64_t x2856 = INT64_MAX;
	int64_t t46 = INT64_MAX;

	t46 = ((x2853%(x2854>>x2855))|x2856);

	if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x2913 = 56LL;
	static uint32_t x2914 = UINT32_MAX;
	int16_t x2916 = INT16_MIN;
	volatile int64_t t47 = -13275570516975LL;

	t47 = ((x2913%(x2914>>x2915))|x2916);

	if (t47 != -32768LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x2925 = -19817804;
	volatile uint64_t x2926 = UINT64_MAX;
	int8_t x2927 = 22;
	volatile int16_t x2928 = INT16_MIN;
	volatile uint64_t t48 = 1157376018168LLU;

	t48 = ((x2925%(x2926>>x2927))|x2928);

	if (t48 != 18446744073709525683LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x2977 = INT64_MIN;
	uint8_t x2978 = UINT8_MAX;
	uint8_t x2979 = 1U;
	int16_t x2980 = -1762;
	static volatile int64_t t49 = -59LL;

	t49 = ((x2977%(x2978>>x2979))|x2980);

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int64_t x2997 = -35LL;
	static int16_t x2998 = INT16_MAX;
	int16_t x2999 = 1;
	uint64_t x3000 = UINT64_MAX;
	uint64_t t50 = UINT64_MAX;

	t50 = ((x2997%(x2998>>x2999))|x3000);

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x3001 = INT32_MIN;
	uint64_t x3002 = UINT64_MAX;
	int8_t x3003 = 0;
	uint32_t x3004 = 166490U;
	static uint64_t t51 = 2330748LLU;

	t51 = ((x3001%(x3002>>x3003))|x3004);

	if (t51 != 18446744071562234458LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x3113 = -1;
	uint16_t x3115 = 40U;
	static uint32_t x3116 = UINT32_MAX;
	uint64_t t52 = 11630420LLU;

	t52 = ((x3113%(x3114>>x3115))|x3116);

	if (t52 != 4294967295LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x3243 = 0;
	uint64_t x3244 = 434391LLU;

	t53 = ((x3241%(x3242>>x3243))|x3244);

	if (t53 != 434391LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x3461 = INT64_MIN;
	volatile int32_t x3463 = 1;

	t54 = ((x3461%(x3462>>x3463))|x3464);

	if (t54 != 458751LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x3565 = -7;
	int8_t x3566 = 1;
	uint16_t x3567 = 0U;
	static int8_t x3568 = -1;

	t55 = ((x3565%(x3566>>x3567))|x3568);

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x3721 = UINT32_MAX;
	volatile uint64_t x3722 = 10151847589653474LLU;
	int8_t x3723 = 3;
	int8_t x3724 = INT8_MIN;

	t56 = ((x3721%(x3722>>x3723))|x3724);

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x3853 = 49320133678710928LLU;
	uint64_t x3856 = 446232LLU;
	volatile uint64_t t57 = 6865781189037606LLU;

	t57 = ((x3853%(x3854>>x3855))|x3856);

	if (t57 != 446235LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x3983 = 11;
	volatile uint32_t t58 = 4U;

	t58 = ((x3981%(x3982>>x3983))|x3984);

	if (t58 != 1023U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x4109 = INT8_MAX;
	volatile uint64_t x4112 = UINT64_MAX;

	t59 = ((x4109%(x4110>>x4111))|x4112);

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x4485 = 7819146444069LL;
	int64_t x4486 = 7715674646LL;
	int8_t x4487 = 2;
	volatile uint16_t x4488 = 16U;
	int64_t t60 = 748801LL;

	t60 = ((x4485%(x4486>>x4487))|x4488);

	if (t60 != 1239111036LL) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint16_t x4493 = 28694U;
	int64_t x4494 = 643999LL;
	volatile int16_t x4495 = 2;
	static int8_t x4496 = 54;
	int64_t t61 = -10406949LL;

	t61 = ((x4493%(x4494>>x4495))|x4496);

	if (t61 != 28726LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x4497 = 29318U;
	uint64_t x4498 = UINT64_MAX;
	uint32_t x4499 = 1U;
	volatile uint16_t x4500 = 59U;
	uint64_t t62 = 24LLU;

	t62 = ((x4497%(x4498>>x4499))|x4500);

	if (t62 != 29375LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x4557 = INT64_MIN;
	int16_t x4558 = INT16_MAX;
	volatile uint32_t x4559 = 13U;
	volatile uint64_t x4560 = UINT64_MAX;
	static uint64_t t63 = UINT64_MAX;

	t63 = ((x4557%(x4558>>x4559))|x4560);

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x4669 = -291751;
	int64_t x4670 = 10913925149614LL;
	uint8_t x4671 = 2U;
	int64_t x4672 = -1LL;

	t64 = ((x4669%(x4670>>x4671))|x4672);

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x4777 = 1210906846U;
	static volatile int64_t x4778 = INT64_MAX;
	uint16_t x4779 = 3U;

	t65 = ((x4777%(x4778>>x4779))|x4780);

	if (t65 != 1252713393760893694LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x4789 = INT8_MIN;
	int16_t x4790 = 15659;
	uint8_t x4791 = 1U;
	int64_t t66 = 953823LL;

	t66 = ((x4789%(x4790>>x4791))|x4792);

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x4873 = -7302202700LL;
	static int32_t x4874 = 12397487;
	uint8_t x4875 = 5U;
	uint64_t x4876 = 7503743435LLU;
	volatile uint64_t t67 = 502835430089523LLU;

	t67 = ((x4873%(x4874>>x4875))|x4876);

	if (t67 != 18446744073709459935LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x5045 = INT8_MAX;
	volatile uint8_t x5046 = UINT8_MAX;
	uint8_t x5047 = 4U;
	static int8_t x5048 = INT8_MIN;
	volatile int32_t t68 = 88791738;

	t68 = ((x5045%(x5046>>x5047))|x5048);

	if (t68 != -121) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x5093 = -1;
	static volatile uint64_t x5094 = UINT64_MAX;
	volatile uint64_t t69 = 196872676LLU;

	t69 = ((x5093%(x5094>>x5095))|x5096);

	if (t69 != 15957316842535618763LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x5169 = -3;
	int32_t x5170 = 33;
	int16_t x5171 = 1;
	volatile int32_t x5172 = INT32_MAX;
	int32_t t70 = 3;

	t70 = ((x5169%(x5170>>x5171))|x5172);

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x5185 = INT16_MIN;
	static uint8_t x5186 = 7U;
	uint64_t x5188 = 79320195457204LLU;
	uint64_t t71 = 209841868LLU;

	t71 = ((x5185%(x5186>>x5187))|x5188);

	if (t71 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x5197 = 10;
	static int64_t x5200 = INT64_MIN;
	int64_t t72 = 18LL;

	t72 = ((x5197%(x5198>>x5199))|x5200);

	if (t72 != -9223372036854775798LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x5202 = UINT64_MAX;
	volatile int8_t x5203 = 0;
	volatile int64_t x5204 = -303817043392487LL;
	uint64_t t73 = 327705827944830LLU;

	t73 = ((x5201%(x5202>>x5203))|x5204);

	if (t73 != 18446744071915259929LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x5258 = INT16_MAX;
	int8_t x5259 = 3;
	volatile uint64_t x5260 = UINT64_MAX;
	volatile uint64_t t74 = UINT64_MAX;

	t74 = ((x5257%(x5258>>x5259))|x5260);

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x5361 = -2;
	int8_t x5362 = INT8_MAX;
	uint16_t x5364 = UINT16_MAX;
	volatile int32_t t75 = 31;

	t75 = ((x5361%(x5362>>x5363))|x5364);

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint16_t x5365 = 987U;
	int32_t x5366 = 403016026;
	int16_t x5368 = INT16_MIN;
	volatile int32_t t76 = 4;

	t76 = ((x5365%(x5366>>x5367))|x5368);

	if (t76 != -31781) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x5377 = 9860210U;
	int16_t x5378 = 51;
	static uint8_t x5379 = 1U;
	int32_t x5380 = 526613;
	uint32_t t77 = 0U;

	t77 = ((x5377%(x5378>>x5379))|x5380);

	if (t77 != 526623U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x5434 = INT16_MAX;
	int8_t x5435 = 2;
	int32_t t78 = -16657643;

	t78 = ((x5433%(x5434>>x5435))|x5436);

	if (t78 != 63) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x5533 = INT8_MIN;
	uint8_t x5536 = 7U;
	static volatile int32_t t79 = -88773;

	t79 = ((x5533%(x5534>>x5535))|x5536);

	if (t79 != -121) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x5573 = 12U;
	static volatile int16_t x5575 = 4;
	uint64_t x5576 = UINT64_MAX;
	volatile uint64_t t80 = UINT64_MAX;

	t80 = ((x5573%(x5574>>x5575))|x5576);

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x5605 = UINT16_MAX;
	uint8_t x5606 = UINT8_MAX;
	uint8_t x5607 = 3U;
	int32_t x5608 = -1;
	int32_t t81 = -1;

	t81 = ((x5605%(x5606>>x5607))|x5608);

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint16_t x5698 = UINT16_MAX;
	int8_t x5699 = 0;
	uint32_t x5700 = 537U;
	static uint32_t t82 = 266U;

	t82 = ((x5697%(x5698>>x5699))|x5700);

	if (t82 != 537U) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x5713 = 30024U;
	int16_t x5714 = 479;
	int32_t x5715 = 5;
	int32_t t83 = -5062;

	t83 = ((x5713%(x5714>>x5715))|x5716);

	if (t83 != -2147483640) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x5897 = INT16_MIN;
	int16_t x5899 = 1;
	volatile int32_t t84 = 538;

	t84 = ((x5897%(x5898>>x5899))|x5900);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x6009 = 2043643681174046LL;
	int16_t x6010 = INT16_MAX;
	volatile int8_t x6011 = 1;
	int64_t x6012 = INT64_MAX;
	int64_t t85 = INT64_MAX;

	t85 = ((x6009%(x6010>>x6011))|x6012);

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x6057 = -1LL;
	uint64_t x6060 = 3932288292LLU;

	t86 = ((x6057%(x6058>>x6059))|x6060);

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x6073 = 12LL;
	int64_t x6076 = 459600LL;

	t87 = ((x6073%(x6074>>x6075))|x6076);

	if (t87 != 459612LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x6085 = 56309139729465LLU;
	uint8_t x6086 = 49U;
	uint64_t x6087 = 4LLU;

	t88 = ((x6085%(x6086>>x6087))|x6088);

	if (t88 != 558LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x6105 = 562610348995040LL;
	int16_t x6106 = INT16_MAX;
	int64_t x6107 = 6LL;
	uint8_t x6108 = UINT8_MAX;
	volatile int64_t t89 = -1LL;

	t89 = ((x6105%(x6106>>x6107))|x6108);

	if (t89 != 511LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x6137 = INT16_MAX;
	int64_t x6138 = INT64_MAX;
	uint8_t x6139 = 1U;
	uint64_t x6140 = 173LLU;
	volatile uint64_t t90 = 5831408207977297200LLU;

	t90 = ((x6137%(x6138>>x6139))|x6140);

	if (t90 != 32767LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x6185 = 0U;
	uint16_t x6186 = 15152U;
	volatile int16_t x6187 = 1;
	volatile int16_t x6188 = INT16_MIN;
	static int32_t t91 = -39;

	t91 = ((x6185%(x6186>>x6187))|x6188);

	if (t91 != -32768) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x6205 = -27;
	static volatile int64_t x6208 = 3553747231LL;
	volatile int64_t t92 = 123200383082272LL;

	t92 = ((x6205%(x6206>>x6207))|x6208);

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x6221 = 5;
	static int8_t x6222 = INT8_MAX;
	uint8_t x6223 = 6U;
	volatile int16_t x6224 = INT16_MIN;
	volatile int32_t t93 = -4099;

	t93 = ((x6221%(x6222>>x6223))|x6224);

	if (t93 != -32768) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x6402 = INT8_MAX;
	int32_t x6403 = 1;
	int8_t x6404 = INT8_MAX;
	static int32_t t94 = -2968;

	t94 = ((x6401%(x6402>>x6403))|x6404);

	if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x6481 = 146;
	static int32_t x6482 = 1332;
	int8_t x6483 = 0;
	uint64_t x6484 = 18LLU;

	t95 = ((x6481%(x6482>>x6483))|x6484);

	if (t95 != 146LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x6509 = INT32_MIN;
	static volatile uint32_t x6510 = UINT32_MAX;
	int8_t x6511 = 1;
	static int64_t x6512 = INT64_MIN;
	static volatile int64_t t96 = -7LL;

	t96 = ((x6509%(x6510>>x6511))|x6512);

	if (t96 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x6621 = UINT8_MAX;
	static int64_t x6622 = 2856727917014074LL;
	uint16_t x6623 = 41U;
	int8_t x6624 = -7;
	volatile int64_t t97 = 8066490979474140LL;

	t97 = ((x6621%(x6622>>x6623))|x6624);

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x6777 = UINT16_MAX;
	volatile int64_t x6778 = INT64_MAX;
	volatile uint8_t x6779 = 0U;
	volatile int64_t t98 = -35127244LL;

	t98 = ((x6777%(x6778>>x6779))|x6780);

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x6809 = -343;
	uint8_t x6810 = 2U;
	volatile int16_t x6811 = 0;
	int64_t t99 = 2695129981492418529LL;

	t99 = ((x6809%(x6810>>x6811))|x6812);

	if (t99 != -1LL) { NG(); } else { ; }
	
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

