#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x7 = 1LL;
static int64_t t0 = -134430153433293854LL;
uint64_t x41 = 3058395LLU;
volatile uint64_t t1 = 91615847416LLU;
uint64_t x214 = 490LLU;
uint8_t x477 = UINT8_MAX;
volatile uint8_t x707 = 56U;
static uint8_t x708 = 1U;
volatile uint64_t t11 = 15LLU;
int32_t x840 = 0;
volatile int8_t x850 = INT8_MAX;
volatile uint64_t t13 = 2LLU;
int32_t x1035 = -1075289;
volatile uint64_t t15 = 32182LLU;
int64_t x1087 = -3937950250625646LL;
int16_t x1088 = 1;
uint32_t x1327 = UINT32_MAX;
static volatile uint64_t t21 = 446748575691516473LLU;
static uint16_t x1382 = 32U;
volatile uint32_t x1645 = 1044U;
int32_t x1646 = -1;
int16_t x1759 = -1;
uint64_t x1774 = 102856067LLU;
int16_t x1775 = INT16_MIN;
volatile uint64_t t27 = 4372737256666000LLU;
volatile int32_t t29 = 18631;
int16_t x2024 = 17;
int32_t x2169 = INT32_MIN;
uint16_t x2483 = 2U;
volatile int32_t t35 = -809426050;
int16_t x2673 = -1;
uint32_t x2675 = 1U;
uint64_t x2759 = UINT64_MAX;
uint8_t x2764 = 1U;
volatile uint64_t t40 = 2669161136370LLU;
uint32_t x2779 = 5882U;
uint64_t x2797 = UINT64_MAX;
uint64_t t42 = 1LLU;
int8_t x2882 = 2;
uint32_t x2883 = 1067319046U;
uint16_t x2924 = 6U;
volatile int32_t x2977 = -791765844;
uint8_t x2980 = 0U;
volatile uint16_t x3091 = 28U;
uint64_t t47 = 31900100806714LLU;
static uint64_t x3113 = 3735132LLU;
int64_t x3115 = INT64_MIN;
uint64_t t48 = 3LLU;
volatile uint32_t x3285 = 6U;
int8_t x3288 = 1;
int32_t x3293 = 5160;
uint16_t x3353 = UINT16_MAX;
int64_t x3422 = -864866929029LL;
static int64_t x3423 = INT64_MAX;
volatile uint16_t x3597 = 13848U;
int64_t x3598 = 1043288085LL;
uint8_t x3599 = 1U;
uint16_t x3740 = 1U;
volatile int32_t x3961 = -1;
int8_t x3962 = INT8_MIN;
static volatile uint16_t x3963 = UINT16_MAX;
int8_t x3964 = 1;
volatile int8_t x3965 = 5;
uint16_t x3986 = UINT16_MAX;
uint16_t x3988 = 0U;
int8_t x4021 = INT8_MAX;
int64_t x4022 = 159175139287LL;
int8_t x4023 = INT8_MAX;
int64_t t63 = -70LL;
static uint32_t x4031 = 254U;
static uint64_t x4032 = 1LLU;
uint32_t x4089 = UINT32_MAX;
int16_t x4108 = 24;
static int32_t x4121 = -321;
volatile uint32_t x4170 = 5U;
int32_t x4185 = 74522;
uint32_t x4188 = 0U;
uint32_t t72 = 6909U;
uint64_t x4305 = UINT64_MAX;
int64_t x4355 = -1LL;
static volatile int32_t t77 = -23312794;
static uint8_t x4572 = 7U;
static uint8_t x4620 = 7U;
static uint16_t x4668 = 1U;
uint8_t x4703 = 9U;
volatile uint64_t x4706 = UINT64_MAX;
int8_t x4737 = -1;
static volatile int32_t x4739 = -1623;
uint32_t t84 = 6752U;
int16_t x4751 = 629;
uint32_t x5023 = UINT32_MAX;
static volatile int8_t x5024 = 0;
uint32_t t88 = 561058393U;
uint8_t x5031 = UINT8_MAX;
static volatile int32_t x5281 = -82729487;
uint64_t x5282 = 3136214LLU;
uint32_t x5341 = 194923521U;
static uint64_t x5525 = UINT64_MAX;
static uint64_t x5527 = UINT64_MAX;
static uint16_t x5570 = 4160U;
uint64_t x5655 = UINT64_MAX;


void f0(void) {
	static volatile int32_t x5 = -507;
	int64_t x6 = INT64_MIN;
	uint16_t x8 = 0U;

	t0 = (((x5^x6)^x7)<<x8);

	if (t0 != 9223372036854775300LL) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint32_t x42 = 123064U;
	uint64_t x43 = UINT64_MAX;
	volatile uint8_t x44 = 5U;

	t1 = (((x41^x42)^x43)<<x44);

	if (t1 != 18446744073610376064LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x69 = INT16_MAX;
	int32_t x70 = -5237;
	int8_t x71 = -5;
	int16_t x72 = 1;
	volatile int32_t t2 = 0;

	t2 = (((x69^x70)^x71)<<x72);

	if (t2 != 55070) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x113 = -1;
	volatile int8_t x114 = -1;
	int16_t x115 = 5;
	uint16_t x116 = 22U;
	int32_t t3 = 6195;

	t3 = (((x113^x114)^x115)<<x116);

	if (t3 != 20971520) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x213 = -1;
	int8_t x215 = INT8_MIN;
	uint8_t x216 = 1U;
	static uint64_t t4 = 12401LLU;

	t4 = (((x213^x214)^x215)<<x216);

	if (t4 != 810LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x305 = INT16_MIN;
	volatile uint8_t x306 = UINT8_MAX;
	uint64_t x307 = 1LLU;
	volatile uint8_t x308 = 0U;
	uint64_t t5 = 33LLU;

	t5 = (((x305^x306)^x307)<<x308);

	if (t5 != 18446744073709519102LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x453 = -118905505879LL;
	static uint64_t x454 = UINT64_MAX;
	volatile int32_t x455 = INT32_MIN;
	static int64_t x456 = 47LL;
	volatile uint64_t t6 = 157933139157LLU;

	t6 = (((x453^x454)^x455)<<x456);

	if (t6 != 300333800150269952LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x478 = 284678930365510898LLU;
	int64_t x479 = INT64_MIN;
	int8_t x480 = 0;
	uint64_t t7 = 1501865460286248310LLU;

	t7 = (((x477^x478)^x479)<<x480);

	if (t7 != 9508050967220286477LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x489 = INT16_MIN;
	volatile int32_t x490 = INT32_MIN;
	uint32_t x491 = UINT32_MAX;
	volatile int8_t x492 = 14;
	volatile uint32_t t8 = 1647U;

	t8 = (((x489^x490)^x491)<<x492);

	if (t8 != 536854528U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x633 = UINT32_MAX;
	int64_t x634 = 21553383372LL;
	volatile uint64_t x635 = UINT64_MAX;
	volatile uint8_t x636 = 14U;
	uint64_t t9 = 25080091091LLU;

	t9 = (((x633^x634)^x635)<<x636);

	if (t9 != 18446323148156764160LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x705 = 3U;
	uint16_t x706 = UINT16_MAX;
	int32_t t10 = -2997;

	t10 = (((x705^x706)^x707)<<x708);

	if (t10 != 130952) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x777 = 4305150LLU;
	int64_t x778 = -1414708221513564264LL;
	uint32_t x779 = 96U;
	static int8_t x780 = 18;

	t11 = (((x777^x778)^x779)<<x780);

	if (t11 != 14517580350203887616LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x837 = INT8_MIN;
	uint64_t x838 = 5305837074110440LLU;
	static int8_t x839 = 3;
	volatile uint64_t t12 = 7LLU;

	t12 = (((x837^x838)^x839)<<x840);

	if (t12 != 18441438236635441259LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x849 = INT64_MIN;
	uint64_t x851 = 180185147783LLU;
	int8_t x852 = 0;

	t13 = (((x849^x850)^x851)<<x852);

	if (t13 != 9223372217039923704LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x881 = -1;
	volatile int16_t x882 = 2000;
	uint32_t x883 = 7658U;
	uint8_t x884 = 3U;
	volatile uint32_t t14 = 3U;

	t14 = (((x881^x882)^x883)<<x884);

	if (t14 != 4294913576U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x1033 = 8176595011302986278LLU;
	int64_t x1034 = INT64_MAX;
	int8_t x1036 = 18;

	t15 = (((x1033^x1034)^x1035)<<x1036);

	if (t15 != 7448253987099770880LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x1065 = 2LLU;
	uint16_t x1066 = 15627U;
	uint8_t x1067 = 5U;
	static uint32_t x1068 = 0U;
	volatile uint64_t t16 = 4912106596LLU;

	t16 = (((x1065^x1066)^x1067)<<x1068);

	if (t16 != 15628LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x1085 = 1805720;
	volatile int8_t x1086 = INT8_MIN;
	int64_t t17 = 64019LL;

	t17 = (((x1085^x1086)^x1087)<<x1088);

	if (t17 != 7875900500528916LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x1157 = 1297LLU;
	int64_t x1158 = INT64_MIN;
	int32_t x1159 = INT32_MIN;
	volatile uint16_t x1160 = 0U;
	static volatile uint64_t t18 = 3128813LLU;

	t18 = (((x1157^x1158)^x1159)<<x1160);

	if (t18 != 9223372034707293457LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1169 = 3827382LLU;
	int8_t x1170 = INT8_MAX;
	int8_t x1171 = INT8_MAX;
	static int16_t x1172 = 15;
	volatile uint64_t t19 = 169121LLU;

	t19 = (((x1169^x1170)^x1171)<<x1172);

	if (t19 != 125415653376LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int8_t x1233 = INT8_MIN;
	static uint32_t x1234 = 392U;
	int32_t x1235 = -3341667;
	uint64_t x1236 = 2LLU;
	uint32_t t20 = 198507U;

	t20 = (((x1233^x1234)^x1235)<<x1236);

	if (t20 != 13365844U) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x1325 = 2LLU;
	static int32_t x1326 = INT32_MAX;
	int16_t x1328 = 3;

	t21 = (((x1325^x1326)^x1327)<<x1328);

	if (t21 != 17179869200LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x1381 = 35057171243062415LLU;
	int64_t x1383 = 22103076224696LL;
	volatile uint64_t x1384 = 24LLU;
	static uint64_t t22 = 188518111LLU;

	t22 = (((x1381^x1382)^x1383)<<x1384);

	if (t22 != 6194917247379570688LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x1393 = INT8_MAX;
	int64_t x1394 = INT64_MAX;
	int32_t x1395 = 1;
	uint16_t x1396 = 0U;
	volatile int64_t t23 = 666915721681LL;

	t23 = (((x1393^x1394)^x1395)<<x1396);

	if (t23 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1647 = INT16_MIN;
	int16_t x1648 = 0;
	uint32_t t24 = 4U;

	t24 = (((x1645^x1646)^x1647)<<x1648);

	if (t24 != 31723U) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x1741 = 20098U;
	int64_t x1742 = -694LL;
	volatile int32_t x1743 = -12271651;
	int32_t x1744 = 12;
	volatile int64_t t25 = -224585LL;

	t25 = (((x1741^x1742)^x1743)<<x1744);

	if (t25 != 50210099200LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1757 = -1;
	uint32_t x1758 = 423U;
	uint8_t x1760 = 18U;
	volatile uint32_t t26 = 5991U;

	t26 = (((x1757^x1758)^x1759)<<x1760);

	if (t26 != 110886912U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1773 = INT8_MIN;
	int16_t x1776 = 1;

	t27 = (((x1773^x1774)^x1775)<<x1776);

	if (t27 != 205657094LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1881 = 2;
	int8_t x1882 = -1;
	volatile int16_t x1883 = -11170;
	volatile uint16_t x1884 = 11U;
	volatile int32_t t28 = -20;

	t28 = (((x1881^x1882)^x1883)<<x1884);

	if (t28 != 22878208) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1933 = -3;
	int8_t x1934 = INT8_MIN;
	static int8_t x1935 = INT8_MAX;
	int8_t x1936 = 1;

	t29 = (((x1933^x1934)^x1935)<<x1936);

	if (t29 != 4) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x2021 = INT8_MIN;
	int64_t x2022 = -1LL;
	int16_t x2023 = 0;
	volatile int64_t t30 = 75804537424LL;

	t30 = (((x2021^x2022)^x2023)<<x2024);

	if (t30 != 16646144LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x2117 = -1LL;
	int16_t x2118 = INT16_MAX;
	uint64_t x2119 = 8380549215LLU;
	volatile int8_t x2120 = 2;
	uint64_t t31 = 935LLU;

	t31 = (((x2117^x2118)^x2119)<<x2120);

	if (t31 != 18446744040187240828LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x2170 = UINT64_MAX;
	int64_t x2171 = -1LL;
	int8_t x2172 = 8;
	uint64_t t32 = 485993160540LLU;

	t32 = (((x2169^x2170)^x2171)<<x2172);

	if (t32 != 18446743523953737728LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x2325 = INT16_MIN;
	static volatile uint32_t x2326 = 1U;
	static volatile int8_t x2327 = INT8_MIN;
	uint16_t x2328 = 11U;
	static volatile uint32_t t33 = 1U;

	t33 = (((x2325^x2326)^x2327)<<x2328);

	if (t33 != 66848768U) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x2445 = 1877U;
	uint8_t x2446 = UINT8_MAX;
	uint64_t x2447 = UINT64_MAX;
	int8_t x2448 = 1;
	volatile uint64_t t34 = 86LLU;

	t34 = (((x2445^x2446)^x2447)<<x2448);

	if (t34 != 18446744073709547690LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x2481 = 0U;
	static int16_t x2482 = 0;
	uint8_t x2484 = 9U;

	t35 = (((x2481^x2482)^x2483)<<x2484);

	if (t35 != 1024) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x2533 = -224103328613LL;
	int64_t x2534 = INT64_MAX;
	static uint64_t x2535 = 3LLU;
	int8_t x2536 = 23;
	static uint64_t t36 = 263042374482168984LLU;

	t36 = (((x2533^x2534)^x2535)<<x2536);

	if (t36 != 1879914975246417920LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x2545 = INT32_MAX;
	volatile int16_t x2546 = -1;
	uint32_t x2547 = 941383U;
	int8_t x2548 = 0;
	volatile uint32_t t37 = 1U;

	t37 = (((x2545^x2546)^x2547)<<x2548);

	if (t37 != 2148425031U) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x2674 = 33726LLU;
	int8_t x2676 = 1;
	uint64_t t38 = 30LLU;

	t38 = (((x2673^x2674)^x2675)<<x2676);

	if (t38 != 18446744073709484160LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x2757 = 1282490848791LLU;
	int32_t x2758 = -1299;
	int8_t x2760 = 8;
	uint64_t t39 = 21976LLU;

	t39 = (((x2757^x2758)^x2759)<<x2760);

	if (t39 != 328317657089280LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2761 = INT8_MAX;
	uint64_t x2762 = 67LLU;
	int32_t x2763 = INT32_MIN;

	t40 = (((x2761^x2762)^x2763)<<x2764);

	if (t40 != 18446744069414584440LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x2777 = 2492758745060LLU;
	int8_t x2778 = INT8_MIN;
	uint8_t x2780 = 23U;
	uint64_t t41 = 1206133736365741707LLU;

	t41 = (((x2777^x2778)^x2779)<<x2780);

	if (t41 != 15982712244873986048LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x2798 = INT64_MAX;
	uint8_t x2799 = 1U;
	uint16_t x2800 = 3U;

	t42 = (((x2797^x2798)^x2799)<<x2800);

	if (t42 != 8LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x2881 = UINT64_MAX;
	volatile uint16_t x2884 = 2U;
	uint64_t t43 = 42950240516769LLU;

	t43 = (((x2881^x2882)^x2883)<<x2884);

	if (t43 != 18446744069440275436LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x2921 = -15393;
	volatile int16_t x2922 = -683;
	int64_t x2923 = 459LL;
	int64_t t44 = -12002543LL;

	t44 = (((x2921^x2922)^x2923)<<x2924);

	if (t44 != 1036352LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x2978 = UINT64_MAX;
	static int8_t x2979 = INT8_MIN;
	volatile uint64_t t45 = 2456308802813170917LLU;

	t45 = (((x2977^x2978)^x2979)<<x2980);

	if (t45 != 18446744072917785811LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x2985 = UINT32_MAX;
	int64_t x2986 = INT64_MIN;
	uint64_t x2987 = 391LLU;
	uint8_t x2988 = 1U;
	volatile uint64_t t46 = 143419276091658LLU;

	t46 = (((x2985^x2986)^x2987)<<x2988);

	if (t46 != 8589933808LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x3089 = UINT64_MAX;
	uint32_t x3090 = UINT32_MAX;
	volatile uint8_t x3092 = 0U;

	t47 = (((x3089^x3090)^x3091)<<x3092);

	if (t47 != 18446744069414584348LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x3114 = 105;
	volatile int8_t x3116 = 36;

	t48 = (((x3113^x3114)^x3115)<<x3116);

	if (t48 != 256673636520296448LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x3205 = UINT64_MAX;
	int16_t x3206 = -1;
	static uint16_t x3207 = 61U;
	uint8_t x3208 = 3U;
	uint64_t t49 = 80814908445913LLU;

	t49 = (((x3205^x3206)^x3207)<<x3208);

	if (t49 != 488LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x3286 = INT16_MIN;
	static int16_t x3287 = INT16_MIN;
	static volatile uint32_t t50 = 91864056U;

	t50 = (((x3285^x3286)^x3287)<<x3288);

	if (t50 != 12U) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x3294 = 13U;
	static int32_t x3295 = 739382;
	int8_t x3296 = 1;
	int32_t t51 = 2;

	t51 = (((x3293^x3294)^x3295)<<x3296);

	if (t51 != 1488934) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x3354 = INT16_MIN;
	int8_t x3355 = INT8_MIN;
	int16_t x3356 = 0;
	int32_t t52 = 127833;

	t52 = (((x3353^x3354)^x3355)<<x3356);

	if (t52 != 32895) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x3421 = -2;
	uint8_t x3424 = 0U;
	int64_t t53 = 3944LL;

	t53 = (((x3421^x3422)^x3423)<<x3424);

	if (t53 != 9223371171987846778LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x3485 = UINT32_MAX;
	int32_t x3486 = INT32_MIN;
	static uint16_t x3487 = 1U;
	uint8_t x3488 = 4U;
	volatile uint32_t t54 = 206172220U;

	t54 = (((x3485^x3486)^x3487)<<x3488);

	if (t54 != 4294967264U) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x3553 = 0U;
	uint64_t x3554 = 1457754275444115LLU;
	int8_t x3555 = INT8_MAX;
	int8_t x3556 = 0;
	static volatile uint64_t t55 = 111524231735484LLU;

	t55 = (((x3553^x3554)^x3555)<<x3556);

	if (t55 != 1457754275444204LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x3600 = 3;
	int64_t t56 = 5LL;

	t56 = (((x3597^x3598)^x3599)<<x3600);

	if (t56 != 8346349664LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x3681 = -1LL;
	uint32_t x3682 = 3914U;
	int32_t x3683 = -1;
	static int16_t x3684 = 0;
	volatile int64_t t57 = 109226080220859002LL;

	t57 = (((x3681^x3682)^x3683)<<x3684);

	if (t57 != 3914LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x3737 = UINT32_MAX;
	uint64_t x3738 = UINT64_MAX;
	static uint64_t x3739 = UINT64_MAX;
	static uint64_t t58 = 8011263837215LLU;

	t58 = (((x3737^x3738)^x3739)<<x3740);

	if (t58 != 8589934590LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x3741 = -26113331;
	int16_t x3742 = INT16_MIN;
	static uint16_t x3743 = 228U;
	volatile int16_t x3744 = 0;
	volatile int32_t t59 = 15780049;

	t59 = (((x3741^x3742)^x3743)<<x3744);

	if (t59 != 26085929) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t t60 = 0;

	t60 = (((x3961^x3962)^x3963)<<x3964);

	if (t60 != 130816) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int8_t x3966 = 1;
	uint8_t x3967 = UINT8_MAX;
	int8_t x3968 = 0;
	int32_t t61 = 852;

	t61 = (((x3965^x3966)^x3967)<<x3968);

	if (t61 != 251) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x3985 = -125599107182565LL;
	static int32_t x3987 = INT32_MIN;
	volatile int64_t t62 = 2825514585LL;

	t62 = (((x3985^x3986)^x3987)<<x3988);

	if (t62 != 125598497632228LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x4024 = 7;

	t63 = (((x4021^x4022)^x4023)<<x4024);

	if (t63 != 20374417828736LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x4029 = 3861U;
	volatile int32_t x4030 = INT32_MIN;
	uint32_t t64 = 130523787U;

	t64 = (((x4029^x4030)^x4031)<<x4032);

	if (t64 != 8150U) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint32_t x4061 = 33106U;
	int8_t x4062 = 34;
	volatile uint8_t x4063 = UINT8_MAX;
	int8_t x4064 = 1;
	volatile uint32_t t65 = 0U;

	t65 = (((x4061^x4062)^x4063)<<x4064);

	if (t65 != 66334U) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x4090 = 934593U;
	volatile int16_t x4091 = INT16_MIN;
	int8_t x4092 = 0;
	volatile uint32_t t66 = 137195U;

	t66 = (((x4089^x4090)^x4091)<<x4092);

	if (t66 != 933182U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x4105 = -1LL;
	int16_t x4106 = INT16_MIN;
	volatile uint8_t x4107 = 0U;
	volatile int64_t t67 = -3842662478LL;

	t67 = (((x4105^x4106)^x4107)<<x4108);

	if (t67 != 549739036672LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x4113 = INT64_MIN;
	uint64_t x4114 = 784LLU;
	int8_t x4115 = INT8_MIN;
	uint16_t x4116 = 20U;
	uint64_t t68 = 84011947824LLU;

	t68 = (((x4113^x4114)^x4115)<<x4116);

	if (t68 != 18446744072786804736LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x4122 = INT8_MAX;
	uint32_t x4123 = 788475U;
	static int64_t x4124 = 0LL;
	uint32_t t69 = 8140205U;

	t69 = (((x4121^x4122)^x4123)<<x4124);

	if (t69 != 4294179131U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x4169 = -1;
	volatile int16_t x4171 = 86;
	uint8_t x4172 = 8U;
	volatile uint32_t t70 = 891U;

	t70 = (((x4169^x4170)^x4171)<<x4172);

	if (t70 != 4294945792U) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x4186 = UINT16_MAX;
	int32_t x4187 = INT32_MAX;
	volatile int32_t t71 = -3491;

	t71 = (((x4185^x4186)^x4187)<<x4188);

	if (t71 != 2147361562) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x4233 = 125;
	int16_t x4234 = -1;
	uint32_t x4235 = 0U;
	int16_t x4236 = 2;

	t72 = (((x4233^x4234)^x4235)<<x4236);

	if (t72 != 4294966792U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x4249 = -6592;
	uint32_t x4250 = 1086U;
	uint32_t x4251 = 1140497U;
	static uint8_t x4252 = 0U;
	static volatile uint32_t t73 = 22030U;

	t73 = (((x4249^x4250)^x4251)<<x4252);

	if (t73 != 4293821807U) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x4306 = 1040255LLU;
	int64_t x4307 = 111991149485LL;
	uint32_t x4308 = 15U;
	uint64_t t74 = 912801327LLU;

	t74 = (((x4305^x4306)^x4307)<<x4308);

	if (t74 != 18443074319326543872LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x4341 = UINT64_MAX;
	static uint8_t x4342 = 3U;
	int16_t x4343 = -1;
	static int8_t x4344 = 1;
	volatile uint64_t t75 = 27976337274461LLU;

	t75 = (((x4341^x4342)^x4343)<<x4344);

	if (t75 != 6LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x4353 = INT32_MAX;
	int16_t x4354 = INT16_MIN;
	uint16_t x4356 = 0U;
	int64_t t76 = 7LL;

	t76 = (((x4353^x4354)^x4355)<<x4356);

	if (t76 != 2147450880LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x4413 = -14390;
	int16_t x4414 = 508;
	int32_t x4415 = INT32_MIN;
	static int64_t x4416 = 0LL;

	t77 = (((x4413^x4414)^x4415)<<x4416);

	if (t77 != 2147468854) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x4477 = 1158U;
	int32_t x4478 = INT32_MIN;
	int32_t x4479 = INT32_MIN;
	uint32_t x4480 = 1U;
	int32_t t78 = -4175870;

	t78 = (((x4477^x4478)^x4479)<<x4480);

	if (t78 != 2316) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x4569 = UINT64_MAX;
	volatile int8_t x4570 = INT8_MIN;
	uint16_t x4571 = 226U;
	uint64_t t79 = 131872LLU;

	t79 = (((x4569^x4570)^x4571)<<x4572);

	if (t79 != 20096LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x4617 = -1;
	int8_t x4618 = INT8_MAX;
	volatile int64_t x4619 = -97160LL;
	static volatile int64_t t80 = 39459632661003LL;

	t80 = (((x4617^x4618)^x4619)<<x4620);

	if (t80 != 12450816LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x4665 = 1033634LLU;
	int32_t x4666 = 682;
	int16_t x4667 = -1;
	volatile uint64_t t81 = 110663LLU;

	t81 = (((x4665^x4666)^x4667)<<x4668);

	if (t81 != 18446744073707483630LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x4701 = INT16_MAX;
	static uint64_t x4702 = 6LLU;
	uint32_t x4704 = 3U;
	volatile uint64_t t82 = 28451681274258928LLU;

	t82 = (((x4701^x4702)^x4703)<<x4704);

	if (t82 != 262016LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x4705 = -1;
	uint64_t x4707 = UINT64_MAX;
	uint16_t x4708 = 55U;
	volatile uint64_t t83 = 109649676125172LLU;

	t83 = (((x4705^x4706)^x4707)<<x4708);

	if (t83 != 18410715276690587648LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x4738 = 81U;
	int8_t x4740 = 0;

	t84 = (((x4737^x4738)^x4739)<<x4740);

	if (t84 != 1543U) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x4749 = 2547U;
	int8_t x4750 = -1;
	uint64_t x4752 = 4LLU;
	uint32_t t85 = 0U;

	t85 = (((x4749^x4750)^x4751)<<x4752);

	if (t85 != 4294920080U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x4753 = -1;
	uint16_t x4754 = 766U;
	int16_t x4755 = INT16_MIN;
	int32_t x4756 = 8;
	volatile int32_t t86 = 2;

	t86 = (((x4753^x4754)^x4755)<<x4756);

	if (t86 != 8192256) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x4857 = UINT64_MAX;
	uint16_t x4858 = 24334U;
	int8_t x4859 = INT8_MIN;
	volatile uint8_t x4860 = 9U;
	volatile uint64_t t87 = 25LLU;

	t87 = (((x4857^x4858)^x4859)<<x4860);

	if (t87 != 12509696LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x5021 = -11732;
	int8_t x5022 = INT8_MIN;

	t88 = (((x5021^x5022)^x5023)<<x5024);

	if (t88 != 4294955603U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x5029 = 60LLU;
	int16_t x5030 = 400;
	static volatile int32_t x5032 = 1;
	uint64_t t89 = 44646129LLU;

	t89 = (((x5029^x5030)^x5031)<<x5032);

	if (t89 != 678LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x5089 = INT64_MIN;
	int32_t x5090 = -1384;
	static volatile uint64_t x5091 = 8751994641652LLU;
	int8_t x5092 = 2;
	uint64_t t90 = 1356365884LLU;

	t90 = (((x5089^x5090)^x5091)<<x5092);

	if (t90 != 18446709065730988464LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x5209 = INT16_MAX;
	uint32_t x5210 = 768680571U;
	int32_t x5211 = INT32_MIN;
	uint8_t x5212 = 0U;
	volatile uint32_t t91 = 1334U;

	t91 = (((x5209^x5210)^x5211)<<x5212);

	if (t91 != 2916179332U) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x5283 = -1;
	uint8_t x5284 = 13U;
	static uint64_t t92 = 0LLU;

	t92 = (((x5281^x5282)^x5283)<<x5284);

	if (t92 != 653642104832LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x5342 = INT8_MAX;
	uint64_t x5343 = UINT64_MAX;
	int8_t x5344 = 20;
	uint64_t t93 = 18866538481631LLU;

	t93 = (((x5341^x5342)^x5343)<<x5344);

	if (t93 != 18446539681451474944LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x5441 = INT64_MAX;
	int64_t x5442 = 483330451LL;
	uint64_t x5443 = 10718642530281LLU;
	uint8_t x5444 = 53U;
	uint64_t t94 = 122266280188LLU;

	t94 = (((x5441^x5442)^x5443)<<x5444);

	if (t94 != 3503800510094245888LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x5526 = INT64_MAX;
	uint8_t x5528 = 63U;
	uint64_t t95 = 86LLU;

	t95 = (((x5525^x5526)^x5527)<<x5528);

	if (t95 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x5569 = -1;
	uint32_t x5571 = 80622U;
	int32_t x5572 = 9;
	volatile uint32_t t96 = 300198U;

	t96 = (((x5569^x5570)^x5571)<<x5572);

	if (t96 != 4255818240U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x5637 = 58305258042249697LLU;
	volatile uint16_t x5638 = UINT16_MAX;
	volatile int8_t x5639 = -1;
	static uint8_t x5640 = 0U;
	static volatile uint64_t t97 = 6614039317133741531LLU;

	t97 = (((x5637^x5638)^x5639)<<x5640);

	if (t97 != 18388438815667278305LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x5653 = INT32_MAX;
	static volatile int32_t x5654 = -5;
	int32_t x5656 = 3;
	uint64_t t98 = 29995358733430373LLU;

	t98 = (((x5653^x5654)^x5655)<<x5656);

	if (t98 != 17179869144LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x5677 = INT8_MIN;
	static uint64_t x5678 = 48LLU;
	uint16_t x5679 = 28538U;
	uint8_t x5680 = 9U;
	uint64_t t99 = 59770585085173LLU;

	t99 = (((x5677^x5678)^x5679)<<x5680);

	if (t99 != 18446744073694974976LLU) { NG(); } else { ; }
	
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

