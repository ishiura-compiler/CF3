#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x61 = INT16_MAX;
volatile int16_t x62 = 4;
volatile int8_t x74 = INT8_MIN;
static uint8_t x76 = 21U;
static uint16_t x85 = 76U;
static int32_t x146 = INT32_MIN;
int8_t x198 = 4;
int8_t x218 = -1;
volatile int32_t t9 = 0;
volatile int32_t t10 = 5665106;
static int16_t x234 = INT16_MIN;
static volatile uint8_t x236 = 4U;
uint64_t t11 = 31312538625527LLU;
volatile uint16_t x243 = 65U;
int32_t x244 = 9;
static int32_t x309 = 940025202;
int32_t x317 = -66643550;
int64_t x347 = INT64_MIN;
int8_t x348 = 52;
static volatile int64_t t16 = 35832373LL;
uint8_t x351 = 42U;
uint8_t x369 = UINT8_MAX;
uint32_t x372 = 0U;
int32_t t18 = -5;
uint32_t x395 = 1496139U;
volatile uint32_t t19 = 4U;
volatile uint32_t x505 = 2U;
int8_t x506 = -1;
static uint32_t x548 = 28U;
volatile uint8_t x620 = 1U;
static volatile int32_t x761 = -2;
uint16_t x847 = UINT16_MAX;
uint64_t x850 = 3185189274491LLU;
int64_t t28 = 1201829289220138552LL;
int8_t x895 = INT8_MIN;
volatile uint8_t x975 = 53U;
uint32_t x1042 = 30492U;
uint8_t x1044 = 0U;
volatile int64_t t35 = 372040270330767766LL;
uint16_t x1070 = 3219U;
uint8_t x1071 = 2U;
uint8_t x1113 = UINT8_MAX;
volatile uint8_t x1115 = UINT8_MAX;
volatile uint64_t x1206 = 27828018230340LLU;
uint16_t x1258 = 6142U;
int16_t x1317 = INT16_MIN;
static volatile int32_t t42 = -23909278;
int64_t x1358 = -586LL;
uint16_t x1360 = 30U;
static int16_t x1479 = 138;
static uint8_t x1515 = UINT8_MAX;
uint64_t x1516 = 12LLU;
int8_t x1575 = 55;
volatile uint64_t x1645 = 32507326LLU;
volatile uint32_t t49 = 31140875U;
volatile int16_t x1673 = 20;
int64_t x1675 = INT64_MAX;
volatile int64_t x1682 = -1LL;
volatile int32_t t51 = 2;
static int32_t t54 = 1;
int64_t x1811 = INT64_MIN;
uint8_t x1845 = 4U;
static int32_t x1887 = INT32_MAX;
uint32_t x1888 = 0U;
uint8_t x1907 = UINT8_MAX;
static int16_t x1922 = 8021;
static uint32_t x2061 = UINT32_MAX;
static volatile int32_t t62 = 36307130;
int32_t x2095 = INT32_MIN;
int8_t x2096 = 0;
volatile int64_t t64 = 876996543715898693LL;
int32_t x2166 = INT32_MIN;
volatile uint32_t x2204 = 6U;
uint16_t x2212 = 13U;
volatile int32_t t67 = 756493;
volatile int16_t x2242 = -855;
static volatile int64_t t68 = -227210751119967LL;
int64_t x2313 = INT64_MIN;
static int8_t x2315 = 1;
static int8_t x2407 = 2;
volatile int16_t x2413 = INT16_MIN;
volatile uint32_t x2416 = 20U;
static int16_t x2477 = INT16_MAX;
volatile int32_t t72 = -1065485;
static int64_t x2487 = INT64_MIN;
static uint8_t x2488 = 52U;
int64_t t74 = 65511109LL;
int64_t x2509 = 3775823459LL;
static int64_t x2525 = -1LL;
static int32_t x2566 = -2;
uint16_t x2607 = 830U;
static int32_t x2611 = -48643999;
uint8_t x2612 = 3U;
volatile int32_t t79 = -536273641;
static volatile int16_t x2615 = INT16_MIN;
int32_t t80 = 20445126;
int64_t x2627 = INT64_MIN;
uint16_t x2640 = 11U;
uint64_t x2717 = 60LLU;
uint8_t x2718 = UINT8_MAX;
volatile int32_t t84 = -278;
volatile int16_t x2763 = INT16_MIN;
volatile int32_t t86 = -2;
volatile int32_t t87 = -801951847;
int64_t x2917 = INT64_MAX;
static uint8_t x2920 = 2U;
static volatile uint64_t x2955 = 104053208573LLU;
static volatile int8_t x2964 = 6;
static int32_t t94 = -1029569;
volatile int16_t x3093 = -1199;
uint32_t x3096 = 4U;
volatile int32_t t96 = -463054744;
static uint64_t x3146 = 6085713502371LLU;
uint64_t x3233 = UINT64_MAX;
int32_t x3234 = INT32_MIN;
int32_t t98 = 245;


void f0(void) {
	static uint8_t x1 = UINT8_MAX;
	int16_t x2 = INT16_MIN;
	uint16_t x3 = UINT16_MAX;
	static int32_t x4 = 0;
	volatile int32_t t0 = 215;

	t0 = (((x1<x2)/x3)<<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x63 = 163095807;
	uint8_t x64 = 2U;
	int32_t t1 = -21;

	t1 = (((x61<x62)/x63)<<x64);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x73 = UINT16_MAX;
	uint64_t x75 = UINT64_MAX;
	static volatile uint64_t t2 = 1LLU;

	t2 = (((x73<x74)/x75)<<x76);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x86 = UINT8_MAX;
	uint16_t x87 = 2U;
	uint8_t x88 = 30U;
	volatile int32_t t3 = -7;

	t3 = (((x85<x86)/x87)<<x88);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x89 = 0U;
	int64_t x90 = INT64_MIN;
	static uint32_t x91 = 3356451U;
	static volatile uint32_t x92 = 0U;
	static volatile uint32_t t4 = 11105U;

	t4 = (((x89<x90)/x91)<<x92);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x101 = -1;
	volatile uint64_t x102 = UINT64_MAX;
	uint16_t x103 = UINT16_MAX;
	static uint8_t x104 = 19U;
	volatile int32_t t5 = -17;

	t5 = (((x101<x102)/x103)<<x104);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x105 = INT32_MAX;
	int8_t x106 = INT8_MIN;
	int32_t x107 = INT32_MAX;
	volatile int64_t x108 = 3LL;
	int32_t t6 = 6017712;

	t6 = (((x105<x106)/x107)<<x108);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x145 = -1;
	volatile int64_t x147 = -1LL;
	uint8_t x148 = 3U;
	int64_t t7 = 65792806LL;

	t7 = (((x145<x146)/x147)<<x148);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x197 = UINT32_MAX;
	int16_t x199 = INT16_MIN;
	uint64_t x200 = 1LLU;
	volatile int32_t t8 = 0;

	t8 = (((x197<x198)/x199)<<x200);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x217 = INT16_MAX;
	static uint8_t x219 = UINT8_MAX;
	static int16_t x220 = 0;

	t9 = (((x217<x218)/x219)<<x220);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x229 = 26U;
	volatile int8_t x230 = INT8_MAX;
	uint8_t x231 = UINT8_MAX;
	uint16_t x232 = 0U;

	t10 = (((x229<x230)/x231)<<x232);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x233 = 75172825355413LLU;
	volatile uint64_t x235 = 617049304602763LLU;

	t11 = (((x233<x234)/x235)<<x236);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x241 = 1U;
	int16_t x242 = INT16_MAX;
	int32_t t12 = 330040890;

	t12 = (((x241<x242)/x243)<<x244);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int32_t x249 = INT32_MIN;
	static uint32_t x250 = 155581U;
	int32_t x251 = INT32_MIN;
	int8_t x252 = 23;
	int32_t t13 = 109508536;

	t13 = (((x249<x250)/x251)<<x252);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x310 = 3614449827850LLU;
	int32_t x311 = -854;
	int8_t x312 = 0;
	int32_t t14 = 663096782;

	t14 = (((x309<x310)/x311)<<x312);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x318 = 94U;
	uint64_t x319 = 65337509249244666LLU;
	int8_t x320 = 16;
	uint64_t t15 = 1619490170558614248LLU;

	t15 = (((x317<x318)/x319)<<x320);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x345 = -1;
	int8_t x346 = -43;

	t16 = (((x345<x346)/x347)<<x348);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x349 = -468559;
	volatile int32_t x350 = INT32_MIN;
	uint16_t x352 = 4U;
	static volatile int32_t t17 = -10594705;

	t17 = (((x349<x350)/x351)<<x352);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x370 = -1;
	int8_t x371 = INT8_MIN;

	t18 = (((x369<x370)/x371)<<x372);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x393 = INT64_MIN;
	int64_t x394 = -7650872LL;
	static uint8_t x396 = 0U;

	t19 = (((x393<x394)/x395)<<x396);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint16_t x507 = 26U;
	uint16_t x508 = 3U;
	static int32_t t20 = -236;

	t20 = (((x505<x506)/x507)<<x508);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x545 = INT16_MIN;
	uint32_t x546 = 8708638U;
	volatile uint8_t x547 = UINT8_MAX;
	static int32_t t21 = -898;

	t21 = (((x545<x546)/x547)<<x548);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x617 = -1;
	volatile int32_t x618 = 13307949;
	uint64_t x619 = 4289978449LLU;
	volatile uint64_t t22 = 3LLU;

	t22 = (((x617<x618)/x619)<<x620);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x673 = -1;
	volatile uint64_t x674 = UINT64_MAX;
	int16_t x675 = INT16_MAX;
	static uint64_t x676 = 8LLU;
	int32_t t23 = 29670231;

	t23 = (((x673<x674)/x675)<<x676);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x677 = 18;
	volatile uint8_t x678 = UINT8_MAX;
	uint16_t x679 = 2282U;
	int32_t x680 = 0;
	int32_t t24 = -1042;

	t24 = (((x677<x678)/x679)<<x680);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x762 = INT16_MAX;
	int64_t x763 = 2636260548329LL;
	int16_t x764 = 25;
	int64_t t25 = 68LL;

	t25 = (((x761<x762)/x763)<<x764);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x845 = UINT16_MAX;
	uint32_t x846 = 61U;
	volatile int32_t x848 = 0;
	int32_t t26 = -1472;

	t26 = (((x845<x846)/x847)<<x848);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x849 = -1324;
	int64_t x851 = INT64_MIN;
	int8_t x852 = 17;
	volatile int64_t t27 = -69LL;

	t27 = (((x849<x850)/x851)<<x852);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x857 = INT32_MIN;
	uint8_t x858 = 29U;
	int64_t x859 = INT64_MIN;
	int8_t x860 = 0;

	t28 = (((x857<x858)/x859)<<x860);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x893 = 5454081786925LLU;
	volatile int16_t x894 = -56;
	static int16_t x896 = 12;
	int32_t t29 = -2;

	t29 = (((x893<x894)/x895)<<x896);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x957 = INT16_MAX;
	static uint64_t x958 = 1456775685808LLU;
	static int16_t x959 = -6;
	uint64_t x960 = 4LLU;
	int32_t t30 = 4051338;

	t30 = (((x957<x958)/x959)<<x960);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x973 = INT16_MAX;
	int16_t x974 = 830;
	uint8_t x976 = 5U;
	int32_t t31 = 65;

	t31 = (((x973<x974)/x975)<<x976);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1013 = 1U;
	uint32_t x1014 = UINT32_MAX;
	uint32_t x1015 = 61623322U;
	uint8_t x1016 = 21U;
	static uint32_t t32 = 1045388654U;

	t32 = (((x1013<x1014)/x1015)<<x1016);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1041 = -240791;
	int64_t x1043 = -9LL;
	static volatile int64_t t33 = -5070LL;

	t33 = (((x1041<x1042)/x1043)<<x1044);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1045 = INT16_MAX;
	int16_t x1046 = INT16_MIN;
	int8_t x1047 = INT8_MIN;
	int16_t x1048 = 0;
	int32_t t34 = -1;

	t34 = (((x1045<x1046)/x1047)<<x1048);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x1049 = 574U;
	static volatile int8_t x1050 = INT8_MAX;
	int64_t x1051 = -24LL;
	uint8_t x1052 = 7U;

	t35 = (((x1049<x1050)/x1051)<<x1052);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x1065 = UINT64_MAX;
	static uint32_t x1066 = 714993U;
	int16_t x1067 = -1;
	uint16_t x1068 = 1U;
	volatile int32_t t36 = -186004;

	t36 = (((x1065<x1066)/x1067)<<x1068);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x1069 = INT16_MIN;
	uint8_t x1072 = 0U;
	volatile int32_t t37 = 1;

	t37 = (((x1069<x1070)/x1071)<<x1072);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1114 = INT32_MIN;
	static uint8_t x1116 = 1U;
	static int32_t t38 = -3;

	t38 = (((x1113<x1114)/x1115)<<x1116);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x1205 = 109U;
	uint64_t x1207 = UINT64_MAX;
	uint8_t x1208 = 50U;
	uint64_t t39 = 4147460474102011LLU;

	t39 = (((x1205<x1206)/x1207)<<x1208);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x1249 = INT32_MAX;
	int64_t x1250 = 12053426LL;
	uint8_t x1251 = 7U;
	uint8_t x1252 = 1U;
	int32_t t40 = -1115342;

	t40 = (((x1249<x1250)/x1251)<<x1252);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x1257 = 1;
	static uint64_t x1259 = UINT64_MAX;
	uint8_t x1260 = 1U;
	uint64_t t41 = 194039152LLU;

	t41 = (((x1257<x1258)/x1259)<<x1260);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x1318 = 1;
	int8_t x1319 = 15;
	volatile int8_t x1320 = 0;

	t42 = (((x1317<x1318)/x1319)<<x1320);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x1357 = 54U;
	volatile int32_t x1359 = INT32_MIN;
	static volatile int32_t t43 = 1;

	t43 = (((x1357<x1358)/x1359)<<x1360);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x1477 = INT64_MIN;
	int8_t x1478 = -4;
	static uint64_t x1480 = 7LLU;
	volatile int32_t t44 = 6492836;

	t44 = (((x1477<x1478)/x1479)<<x1480);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x1513 = UINT32_MAX;
	uint32_t x1514 = UINT32_MAX;
	static int32_t t45 = 45;

	t45 = (((x1513<x1514)/x1515)<<x1516);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x1541 = INT32_MIN;
	int8_t x1542 = INT8_MAX;
	uint16_t x1543 = 3U;
	int8_t x1544 = 1;
	int32_t t46 = -1;

	t46 = (((x1541<x1542)/x1543)<<x1544);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x1573 = -1;
	int8_t x1574 = INT8_MAX;
	uint32_t x1576 = 11U;
	static volatile int32_t t47 = 25384987;

	t47 = (((x1573<x1574)/x1575)<<x1576);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x1629 = 1801LLU;
	int8_t x1630 = -2;
	int32_t x1631 = INT32_MIN;
	int8_t x1632 = 4;
	int32_t t48 = 2;

	t48 = (((x1629<x1630)/x1631)<<x1632);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x1646 = 19U;
	uint32_t x1647 = UINT32_MAX;
	static int8_t x1648 = 24;

	t49 = (((x1645<x1646)/x1647)<<x1648);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x1674 = INT16_MIN;
	uint16_t x1676 = 23U;
	static volatile int64_t t50 = 0LL;

	t50 = (((x1673<x1674)/x1675)<<x1676);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x1681 = 20;
	volatile int16_t x1683 = 1;
	int8_t x1684 = 11;

	t51 = (((x1681<x1682)/x1683)<<x1684);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x1717 = INT8_MAX;
	volatile int64_t x1718 = -1LL;
	int16_t x1719 = INT16_MIN;
	int16_t x1720 = 20;
	volatile int32_t t52 = -46979937;

	t52 = (((x1717<x1718)/x1719)<<x1720);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x1749 = 9U;
	int64_t x1750 = INT64_MIN;
	int64_t x1751 = -2065278050482899LL;
	uint8_t x1752 = 3U;
	int64_t t53 = -1315999683LL;

	t53 = (((x1749<x1750)/x1751)<<x1752);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x1761 = 187U;
	volatile int32_t x1762 = -8257019;
	volatile int32_t x1763 = INT32_MIN;
	int16_t x1764 = 1;

	t54 = (((x1761<x1762)/x1763)<<x1764);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x1809 = 20482LLU;
	static volatile uint8_t x1810 = UINT8_MAX;
	uint32_t x1812 = 22U;
	volatile int64_t t55 = 8813824648824806LL;

	t55 = (((x1809<x1810)/x1811)<<x1812);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int8_t x1846 = INT8_MIN;
	uint32_t x1847 = 14694U;
	volatile int8_t x1848 = 0;
	volatile uint32_t t56 = 382781U;

	t56 = (((x1845<x1846)/x1847)<<x1848);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x1885 = -13;
	uint16_t x1886 = UINT16_MAX;
	int32_t t57 = -6;

	t57 = (((x1885<x1886)/x1887)<<x1888);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x1905 = -9;
	int16_t x1906 = INT16_MIN;
	int16_t x1908 = 7;
	static volatile int32_t t58 = -113454;

	t58 = (((x1905<x1906)/x1907)<<x1908);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x1909 = UINT32_MAX;
	int64_t x1910 = -1LL;
	int8_t x1911 = INT8_MAX;
	uint16_t x1912 = 1U;
	volatile int32_t t59 = -319344;

	t59 = (((x1909<x1910)/x1911)<<x1912);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x1921 = 1790U;
	static int64_t x1923 = INT64_MIN;
	uint32_t x1924 = 0U;
	volatile int64_t t60 = 167738708817100LL;

	t60 = (((x1921<x1922)/x1923)<<x1924);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x2021 = INT8_MIN;
	static volatile int64_t x2022 = 3199346884LL;
	static int8_t x2023 = INT8_MAX;
	volatile uint8_t x2024 = 2U;
	static volatile int32_t t61 = -273291;

	t61 = (((x2021<x2022)/x2023)<<x2024);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x2062 = INT8_MAX;
	int32_t x2063 = INT32_MIN;
	uint32_t x2064 = 12U;

	t62 = (((x2061<x2062)/x2063)<<x2064);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x2093 = 28U;
	volatile uint32_t x2094 = 12599U;
	volatile int32_t t63 = 713895953;

	t63 = (((x2093<x2094)/x2095)<<x2096);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x2149 = UINT16_MAX;
	static int8_t x2150 = INT8_MIN;
	int64_t x2151 = 7LL;
	volatile uint16_t x2152 = 0U;

	t64 = (((x2149<x2150)/x2151)<<x2152);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x2165 = -24;
	int32_t x2167 = -1;
	int16_t x2168 = 27;
	volatile int32_t t65 = -2262648;

	t65 = (((x2165<x2166)/x2167)<<x2168);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x2201 = 150605295467LLU;
	int16_t x2202 = INT16_MAX;
	volatile uint16_t x2203 = 26U;
	static volatile int32_t t66 = 10;

	t66 = (((x2201<x2202)/x2203)<<x2204);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x2209 = UINT16_MAX;
	static uint16_t x2210 = UINT16_MAX;
	int8_t x2211 = 46;

	t67 = (((x2209<x2210)/x2211)<<x2212);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x2241 = UINT32_MAX;
	static int64_t x2243 = INT64_MAX;
	static int8_t x2244 = 14;

	t68 = (((x2241<x2242)/x2243)<<x2244);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x2314 = 1;
	int32_t x2316 = 4;
	volatile int32_t t69 = -54;

	t69 = (((x2313<x2314)/x2315)<<x2316);

	if (t69 != 16) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x2405 = INT64_MIN;
	uint16_t x2406 = 4U;
	uint32_t x2408 = 2U;
	volatile int32_t t70 = -155216506;

	t70 = (((x2405<x2406)/x2407)<<x2408);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x2414 = -1;
	volatile uint16_t x2415 = UINT16_MAX;
	volatile int32_t t71 = 202;

	t71 = (((x2413<x2414)/x2415)<<x2416);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x2478 = -12562;
	int16_t x2479 = INT16_MAX;
	int64_t x2480 = 6LL;

	t72 = (((x2477<x2478)/x2479)<<x2480);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x2481 = -1;
	uint8_t x2482 = 0U;
	int64_t x2483 = 120778988027722390LL;
	int32_t x2484 = 56;
	static int64_t t73 = 12238LL;

	t73 = (((x2481<x2482)/x2483)<<x2484);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x2485 = -8035;
	static uint8_t x2486 = 0U;

	t74 = (((x2485<x2486)/x2487)<<x2488);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x2510 = 1800316U;
	int8_t x2511 = INT8_MAX;
	volatile int8_t x2512 = 0;
	int32_t t75 = 24112;

	t75 = (((x2509<x2510)/x2511)<<x2512);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x2526 = 53467LLU;
	int32_t x2527 = 612908;
	uint16_t x2528 = 0U;
	volatile int32_t t76 = 3615;

	t76 = (((x2525<x2526)/x2527)<<x2528);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x2565 = -1414;
	volatile int64_t x2567 = INT64_MAX;
	uint8_t x2568 = 20U;
	static int64_t t77 = 6339134LL;

	t77 = (((x2565<x2566)/x2567)<<x2568);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x2605 = 1;
	volatile uint16_t x2606 = 9U;
	static uint16_t x2608 = 1U;
	volatile int32_t t78 = 15382;

	t78 = (((x2605<x2606)/x2607)<<x2608);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint64_t x2609 = UINT64_MAX;
	uint8_t x2610 = 0U;

	t79 = (((x2609<x2610)/x2611)<<x2612);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x2613 = 607769LL;
	volatile int64_t x2614 = -1LL;
	int16_t x2616 = 1;

	t80 = (((x2613<x2614)/x2615)<<x2616);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x2625 = INT32_MIN;
	uint16_t x2626 = UINT16_MAX;
	static int32_t x2628 = 0;
	volatile int64_t t81 = -203969197450003LL;

	t81 = (((x2625<x2626)/x2627)<<x2628);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x2629 = INT64_MAX;
	volatile uint64_t x2630 = 2501225397LLU;
	uint8_t x2631 = 82U;
	int16_t x2632 = 2;
	int32_t t82 = -7145;

	t82 = (((x2629<x2630)/x2631)<<x2632);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x2637 = -1;
	uint8_t x2638 = UINT8_MAX;
	uint8_t x2639 = 1U;
	int32_t t83 = -2042166;

	t83 = (((x2637<x2638)/x2639)<<x2640);

	if (t83 != 2048) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x2719 = UINT8_MAX;
	static uint8_t x2720 = 28U;

	t84 = (((x2717<x2718)/x2719)<<x2720);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x2761 = INT32_MIN;
	int8_t x2762 = INT8_MIN;
	static uint16_t x2764 = 9U;
	int32_t t85 = 39220;

	t85 = (((x2761<x2762)/x2763)<<x2764);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x2781 = 634035U;
	int64_t x2782 = -1779469174405LL;
	static uint16_t x2783 = 27057U;
	volatile uint16_t x2784 = 3U;

	t86 = (((x2781<x2782)/x2783)<<x2784);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x2877 = -1;
	uint8_t x2878 = 12U;
	uint16_t x2879 = UINT16_MAX;
	static volatile uint16_t x2880 = 1U;

	t87 = (((x2877<x2878)/x2879)<<x2880);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x2885 = INT64_MAX;
	int32_t x2886 = INT32_MIN;
	int32_t x2887 = INT32_MIN;
	uint8_t x2888 = 0U;
	int32_t t88 = 5;

	t88 = (((x2885<x2886)/x2887)<<x2888);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x2918 = INT32_MIN;
	int16_t x2919 = -13398;
	int32_t t89 = 38956;

	t89 = (((x2917<x2918)/x2919)<<x2920);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x2953 = INT64_MIN;
	static uint8_t x2954 = UINT8_MAX;
	uint8_t x2956 = 33U;
	static volatile uint64_t t90 = 20245408172005LLU;

	t90 = (((x2953<x2954)/x2955)<<x2956);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x2961 = 12U;
	volatile int64_t x2962 = INT64_MIN;
	int64_t x2963 = -437981244LL;
	volatile int64_t t91 = -17848670449872838LL;

	t91 = (((x2961<x2962)/x2963)<<x2964);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x3013 = -1;
	static int32_t x3014 = INT32_MAX;
	volatile int8_t x3015 = INT8_MIN;
	uint32_t x3016 = 2U;
	volatile int32_t t92 = 1;

	t92 = (((x3013<x3014)/x3015)<<x3016);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x3025 = -72;
	uint64_t x3026 = 207484646595800400LLU;
	uint64_t x3027 = 117703LLU;
	int8_t x3028 = 21;
	static uint64_t t93 = 54574206LLU;

	t93 = (((x3025<x3026)/x3027)<<x3028);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x3041 = 680019701;
	int8_t x3042 = INT8_MIN;
	int8_t x3043 = INT8_MIN;
	uint8_t x3044 = 1U;

	t94 = (((x3041<x3042)/x3043)<<x3044);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x3094 = 38921U;
	uint16_t x3095 = UINT16_MAX;
	volatile int32_t t95 = 266632364;

	t95 = (((x3093<x3094)/x3095)<<x3096);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x3097 = -28;
	int64_t x3098 = INT64_MAX;
	int8_t x3099 = INT8_MIN;
	static int8_t x3100 = 4;

	t96 = (((x3097<x3098)/x3099)<<x3100);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x3145 = 4044U;
	volatile int16_t x3147 = 2735;
	uint16_t x3148 = 11U;
	int32_t t97 = -10727229;

	t97 = (((x3145<x3146)/x3147)<<x3148);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x3235 = 12U;
	static uint8_t x3236 = 1U;

	t98 = (((x3233<x3234)/x3235)<<x3236);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x3285 = 2U;
	int16_t x3286 = -4379;
	int16_t x3287 = INT16_MAX;
	uint8_t x3288 = 6U;
	int32_t t99 = 508412931;

	t99 = (((x3285<x3286)/x3287)<<x3288);

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

