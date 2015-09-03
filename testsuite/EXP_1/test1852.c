#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x61 = INT32_MIN;
volatile uint64_t t2 = 26647828155660LLU;
volatile uint8_t x120 = 26U;
int8_t x215 = INT8_MAX;
int32_t t4 = 1677;
volatile uint16_t x236 = 7U;
static volatile uint8_t x611 = 124U;
int8_t x669 = -1;
uint64_t x671 = UINT64_MAX;
int32_t x793 = -105;
int8_t x888 = 7;
int32_t t15 = -4;
int16_t x910 = INT16_MIN;
volatile int32_t t16 = -48;
uint32_t x918 = 153U;
static uint16_t x920 = 1U;
static uint8_t x959 = 1U;
int16_t x960 = 0;
uint16_t x1020 = 1U;
static uint64_t x1030 = 55195001587068LLU;
volatile uint64_t t20 = 5509306LLU;
static int64_t x1037 = INT64_MIN;
int32_t x1115 = -1;
int16_t x1189 = -1668;
int8_t x1206 = 6;
volatile uint32_t t30 = 28925U;
int32_t x1570 = INT32_MAX;
int16_t x1609 = INT16_MIN;
int16_t x1634 = INT16_MAX;
int8_t x1635 = INT8_MAX;
volatile uint8_t x1684 = 3U;
static int32_t x1777 = -1;
int32_t x1790 = INT32_MAX;
static int32_t x1825 = INT32_MIN;
static uint8_t x1972 = 9U;
volatile int32_t t43 = 613;
int16_t x2149 = -3847;
int64_t x2150 = -716074LL;
static volatile int64_t t47 = -274308542501907367LL;
static volatile int16_t x2166 = INT16_MAX;
uint32_t x2167 = 10U;
uint64_t x2198 = UINT64_MAX;
uint16_t x2200 = 0U;
int8_t x2209 = INT8_MIN;
volatile uint8_t x2211 = 25U;
int16_t x2225 = 1;
volatile uint64_t x2281 = 1759LLU;
int32_t x2283 = -1;
static uint8_t x2284 = 5U;
static int16_t x2336 = 0;
int32_t x2469 = -25457708;
int16_t x2470 = 10;
int8_t x2471 = 0;
int32_t t55 = 5960885;
uint32_t x2479 = 675411U;
static int64_t x2482 = 21LL;
int8_t x2484 = 1;
int16_t x2686 = -105;
static volatile int64_t t59 = -1548336535638LL;
static int8_t x2744 = 2;
volatile int32_t t61 = 3362050;
uint32_t x2813 = 4U;
volatile uint8_t x2816 = 5U;
uint32_t t62 = 848767847U;
uint16_t x2919 = 7668U;
volatile int8_t x2929 = -3;
uint32_t x2949 = UINT32_MAX;
uint32_t x2951 = 6912743U;
volatile uint32_t x3243 = 105965490U;
uint16_t x3245 = 13U;
static uint32_t x3246 = 243678996U;
uint32_t t69 = 0U;
uint8_t x3381 = 14U;
static uint16_t x3383 = 183U;
volatile int16_t x3393 = -1;
int8_t x3395 = INT8_MIN;
uint16_t x3396 = 14U;
uint64_t x3401 = 444177643LLU;
uint16_t x3402 = 3925U;
static volatile int64_t x3510 = INT64_MIN;
int32_t x3511 = 13;
static volatile int64_t t73 = 0LL;
int64_t x3605 = -1LL;
uint8_t x3606 = 36U;
volatile uint64_t t74 = 389733LLU;
static int64_t x3619 = INT64_MIN;
uint64_t x3678 = UINT64_MAX;
volatile uint32_t t77 = 453538127U;
static volatile int64_t t78 = -14709446045027LL;
static uint8_t x3736 = 0U;
static int16_t x3810 = 16;
uint32_t t80 = 28398442U;
static volatile int8_t x3880 = 0;
int8_t x3910 = -24;
uint16_t x4000 = 19U;
static volatile uint32_t x4011 = UINT32_MAX;
volatile int8_t x4012 = 1;
static uint8_t x4022 = 3U;
int16_t x4023 = INT16_MIN;
static int16_t x4293 = -7;
int32_t x4294 = 4112;
volatile int32_t x4305 = INT32_MAX;
volatile int8_t x4307 = INT8_MAX;
uint64_t x4487 = 36LLU;
uint64_t t94 = 53552167252768498LLU;
volatile int8_t x4523 = 0;
uint32_t x4605 = UINT32_MAX;
uint16_t x4663 = UINT16_MAX;
uint64_t x4665 = 963264603901429LLU;
uint64_t x4667 = 1909464100483629LLU;
volatile uint64_t t99 = 16488LLU;


void f0(void) {
	uint16_t x62 = 187U;
	uint16_t x63 = 378U;
	int8_t x64 = 17;
	int32_t t0 = -39247789;

	t0 = (((x61&x62)^x63)<<x64);

	if (t0 != 49545216) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x65 = INT8_MIN;
	int8_t x66 = -1;
	static uint64_t x67 = 1602169919081114015LLU;
	uint8_t x68 = 2U;
	static volatile uint64_t t1 = 2032173929416LLU;

	t1 = (((x65&x66)^x67)<<x68);

	if (t1 != 12038064397385095292LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x89 = INT64_MIN;
	uint64_t x90 = 77LLU;
	static int16_t x91 = INT16_MIN;
	int8_t x92 = 9;

	t2 = (((x89&x90)^x91)<<x92);

	if (t2 != 18446744073692774400LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x117 = 2108585;
	volatile uint32_t x118 = UINT32_MAX;
	uint32_t x119 = UINT32_MAX;
	uint32_t t3 = 7U;

	t3 = (((x117&x118)^x119)<<x120);

	if (t3 != 1476395008U) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x213 = INT32_MAX;
	uint16_t x214 = 7U;
	uint16_t x216 = 0U;

	t4 = (((x213&x214)^x215)<<x216);

	if (t4 != 120) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x221 = UINT16_MAX;
	volatile int8_t x222 = -1;
	int16_t x223 = 17;
	uint8_t x224 = 3U;
	volatile int32_t t5 = -904551958;

	t5 = (((x221&x222)^x223)<<x224);

	if (t5 != 524144) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x233 = 2926;
	uint8_t x234 = 1U;
	uint16_t x235 = 307U;
	static volatile int32_t t6 = -1580648;

	t6 = (((x233&x234)^x235)<<x236);

	if (t6 != 39296) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x401 = INT32_MIN;
	uint32_t x402 = 13U;
	int16_t x403 = -1;
	uint32_t x404 = 0U;
	uint32_t t7 = UINT32_MAX;

	t7 = (((x401&x402)^x403)<<x404);

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x405 = 2693191479LLU;
	int32_t x406 = 5032539;
	volatile int8_t x407 = INT8_MIN;
	volatile int8_t x408 = 1;
	uint64_t t8 = 34LLU;

	t8 = (((x405&x406)^x407)<<x408);

	if (t8 != 18446744073708927782LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x537 = 213738238U;
	int64_t x538 = -1LL;
	static int32_t x539 = 341765;
	volatile uint8_t x540 = 29U;
	int64_t t9 = -302387173023LL;

	t9 = (((x537&x538)^x539)<<x540);

	if (t9 != 114572132586881024LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x609 = 7;
	int16_t x610 = -2544;
	volatile uint64_t x612 = 0LLU;
	volatile int32_t t10 = 96;

	t10 = (((x609&x610)^x611)<<x612);

	if (t10 != 124) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x649 = -522;
	int8_t x650 = -1;
	volatile uint32_t x651 = 15744U;
	static uint8_t x652 = 0U;
	uint32_t t11 = 67773U;

	t11 = (((x649&x650)^x651)<<x652);

	if (t11 != 4294951030U) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x661 = 19747U;
	int8_t x662 = -10;
	uint32_t x663 = 3149925U;
	int8_t x664 = 0;
	volatile uint32_t t12 = 374645U;

	t12 = (((x661&x662)^x663)<<x664);

	if (t12 != 3169607U) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x670 = INT8_MIN;
	volatile int16_t x672 = 11;
	static uint64_t t13 = 455794994LLU;

	t13 = (((x669&x670)^x671)<<x672);

	if (t13 != 260096LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x794 = 1LL;
	static uint8_t x795 = 79U;
	int8_t x796 = 5;
	int64_t t14 = -231LL;

	t14 = (((x793&x794)^x795)<<x796);

	if (t14 != 2496LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x885 = UINT8_MAX;
	int32_t x886 = INT32_MIN;
	uint8_t x887 = 5U;

	t15 = (((x885&x886)^x887)<<x888);

	if (t15 != 640) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x909 = 0U;
	int8_t x911 = 0;
	uint16_t x912 = 0U;

	t16 = (((x909&x910)^x911)<<x912);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x917 = UINT16_MAX;
	int32_t x919 = -1;
	volatile uint32_t t17 = 398527254U;

	t17 = (((x917&x918)^x919)<<x920);

	if (t17 != 4294966988U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x957 = -1;
	uint8_t x958 = UINT8_MAX;
	static volatile int32_t t18 = -111900720;

	t18 = (((x957&x958)^x959)<<x960);

	if (t18 != 254) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x1017 = 5244U;
	uint32_t x1018 = 5215U;
	uint16_t x1019 = UINT16_MAX;
	uint32_t t19 = 25525U;

	t19 = (((x1017&x1018)^x1019)<<x1020);

	if (t19 != 120646U) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x1029 = 217437649716616LLU;
	uint32_t x1031 = UINT32_MAX;
	uint32_t x1032 = 38U;

	t20 = (((x1029&x1030)^x1031)<<x1032);

	if (t20 != 16897151484272050176LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1038 = INT16_MAX;
	uint32_t x1039 = UINT32_MAX;
	static uint8_t x1040 = 6U;
	int64_t t21 = -745018544LL;

	t21 = (((x1037&x1038)^x1039)<<x1040);

	if (t21 != 274877906880LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x1109 = INT64_MIN;
	volatile uint32_t x1110 = UINT32_MAX;
	static uint32_t x1111 = 40202U;
	static int32_t x1112 = 3;
	int64_t t22 = 114590768370456LL;

	t22 = (((x1109&x1110)^x1111)<<x1112);

	if (t22 != 321616LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint8_t x1113 = UINT8_MAX;
	volatile uint32_t x1114 = 20528U;
	volatile int16_t x1116 = 0;
	uint32_t t23 = 0U;

	t23 = (((x1113&x1114)^x1115)<<x1116);

	if (t23 != 4294967247U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x1190 = 742748506;
	uint64_t x1191 = 12168452163773376LLU;
	static uint8_t x1192 = 9U;
	volatile uint64_t t24 = 8301906LLU;

	t24 = (((x1189&x1190)^x1191)<<x1192);

	if (t24 != 6230247681972056064LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x1205 = 3931240254292608LL;
	uint64_t x1207 = 985140170LLU;
	uint8_t x1208 = 4U;
	volatile uint64_t t25 = 34102067LLU;

	t25 = (((x1205&x1206)^x1207)<<x1208);

	if (t25 != 15762242720LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x1217 = UINT32_MAX;
	uint64_t x1218 = UINT64_MAX;
	int32_t x1219 = -1;
	uint8_t x1220 = 63U;
	volatile uint64_t t26 = 811980347LLU;

	t26 = (((x1217&x1218)^x1219)<<x1220);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1277 = 61U;
	uint32_t x1278 = 15108U;
	uint32_t x1279 = 146518905U;
	static volatile uint16_t x1280 = 27U;
	volatile uint32_t t27 = 1300080U;

	t27 = (((x1277&x1278)^x1279)<<x1280);

	if (t27 != 3892314112U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x1357 = -1;
	int32_t x1358 = INT32_MIN;
	uint32_t x1359 = 4U;
	int32_t x1360 = 3;
	uint32_t t28 = 9U;

	t28 = (((x1357&x1358)^x1359)<<x1360);

	if (t28 != 32U) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x1397 = 1U;
	uint64_t x1398 = UINT64_MAX;
	uint32_t x1399 = 241766190U;
	volatile uint16_t x1400 = 51U;
	uint64_t t29 = 504041193499LLU;

	t29 = (((x1397&x1398)^x1399)<<x1400);

	if (t29 != 8752745875794558976LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x1525 = UINT32_MAX;
	static volatile uint16_t x1526 = 24916U;
	static uint8_t x1527 = 51U;
	uint32_t x1528 = 3U;

	t30 = (((x1525&x1526)^x1527)<<x1528);

	if (t30 != 199480U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x1569 = INT32_MIN;
	static uint16_t x1571 = 3150U;
	volatile uint8_t x1572 = 3U;
	int32_t t31 = 128045;

	t31 = (((x1569&x1570)^x1571)<<x1572);

	if (t31 != 25200) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1577 = 50016381LLU;
	uint32_t x1578 = 6U;
	int64_t x1579 = 166071764006428882LL;
	static uint8_t x1580 = 0U;
	volatile uint64_t t32 = 76082473LLU;

	t32 = (((x1577&x1578)^x1579)<<x1580);

	if (t32 != 166071764006428886LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x1610 = 5U;
	uint64_t x1611 = 83110LLU;
	static int8_t x1612 = 5;
	volatile uint64_t t33 = 64267832931289LLU;

	t33 = (((x1609&x1610)^x1611)<<x1612);

	if (t33 != 2659520LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x1633 = 16238LLU;
	int32_t x1636 = 15;
	volatile uint64_t t34 = 1170907964137912626LLU;

	t34 = (((x1633&x1634)^x1635)<<x1636);

	if (t34 != 529039360LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x1681 = UINT32_MAX;
	int16_t x1682 = -1;
	uint32_t x1683 = 10384U;
	static volatile uint32_t t35 = 283654U;

	t35 = (((x1681&x1682)^x1683)<<x1684);

	if (t35 != 4294884216U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x1778 = -13592;
	int64_t x1779 = -102352LL;
	static uint8_t x1780 = 6U;
	int64_t t36 = 34216933099LL;

	t36 = (((x1777&x1778)^x1779)<<x1780);

	if (t36 != 7255552LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x1789 = INT32_MAX;
	int32_t x1791 = 5041469;
	static uint8_t x1792 = 0U;
	volatile int32_t t37 = -39307;

	t37 = (((x1789&x1790)^x1791)<<x1792);

	if (t37 != 2142442178) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1805 = INT64_MAX;
	int32_t x1806 = 0;
	uint8_t x1807 = 3U;
	volatile uint64_t x1808 = 5LLU;
	volatile int64_t t38 = 38LL;

	t38 = (((x1805&x1806)^x1807)<<x1808);

	if (t38 != 96LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1826 = -1553077LL;
	uint64_t x1827 = UINT64_MAX;
	volatile int64_t x1828 = 16LL;
	uint64_t t39 = 10575LLU;

	t39 = (((x1825&x1826)^x1827)<<x1828);

	if (t39 != 140737488289792LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x1861 = 2188671U;
	int64_t x1862 = -30536481894292LL;
	static int64_t x1863 = 6923570763LL;
	uint8_t x1864 = 0U;
	int64_t t40 = 1249404LL;

	t40 = (((x1861&x1862)^x1863)<<x1864);

	if (t40 != 6923570727LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x1909 = INT8_MIN;
	int16_t x1910 = INT16_MAX;
	volatile uint32_t x1911 = 386U;
	int8_t x1912 = 7;
	volatile uint32_t t41 = 4723175U;

	t41 = (((x1909&x1910)^x1911)<<x1912);

	if (t41 != 4129024U) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x1937 = INT32_MAX;
	uint64_t x1938 = 874573906815566295LLU;
	uint32_t x1939 = 2360U;
	int8_t x1940 = 1;
	volatile uint64_t t42 = 149LLU;

	t42 = (((x1937&x1938)^x1939)<<x1940);

	if (t42 != 1260556766LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x1969 = 101;
	static int8_t x1970 = 1;
	uint8_t x1971 = 8U;

	t43 = (((x1969&x1970)^x1971)<<x1972);

	if (t43 != 4608) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x2013 = 6U;
	static volatile uint64_t x2014 = 7512LLU;
	uint64_t x2015 = 29018LLU;
	uint16_t x2016 = 28U;
	uint64_t t44 = 7225367384LLU;

	t44 = (((x2013&x2014)^x2015)<<x2016);

	if (t44 != 7789460062208LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x2101 = 24U;
	uint16_t x2102 = 4U;
	uint64_t x2103 = 31112103952067594LLU;
	volatile uint8_t x2104 = 1U;
	static uint64_t t45 = 3541LLU;

	t45 = (((x2101&x2102)^x2103)<<x2104);

	if (t45 != 62224207904135188LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x2129 = INT32_MIN;
	int64_t x2130 = -3080616763LL;
	volatile int32_t x2131 = -1;
	uint8_t x2132 = 3U;
	static int64_t t46 = -744901988671353LL;

	t46 = (((x2129&x2130)^x2131)<<x2132);

	if (t46 != 34359738360LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x2151 = INT8_MIN;
	uint8_t x2152 = 0U;

	t47 = (((x2149&x2150)^x2151)<<x2152);

	if (t47 != 716624LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x2165 = 61U;
	uint8_t x2168 = 7U;
	volatile uint32_t t48 = 275383U;

	t48 = (((x2165&x2166)^x2167)<<x2168);

	if (t48 != 7040U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x2169 = 0;
	int8_t x2170 = -1;
	volatile int16_t x2171 = INT16_MAX;
	volatile int8_t x2172 = 2;
	volatile int32_t t49 = 42;

	t49 = (((x2169&x2170)^x2171)<<x2172);

	if (t49 != 131068) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x2197 = 1;
	volatile int32_t x2199 = -55695504;
	static uint64_t t50 = 3925760LLU;

	t50 = (((x2197&x2198)^x2199)<<x2200);

	if (t50 != 18446744073653856113LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x2210 = INT16_MAX;
	uint8_t x2212 = 0U;
	volatile int32_t t51 = 2121;

	t51 = (((x2209&x2210)^x2211)<<x2212);

	if (t51 != 32665) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x2226 = -15;
	uint64_t x2227 = UINT64_MAX;
	static int8_t x2228 = 27;
	volatile uint64_t t52 = 22333290LLU;

	t52 = (((x2225&x2226)^x2227)<<x2228);

	if (t52 != 18446744073441116160LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x2282 = INT32_MIN;
	volatile uint64_t t53 = 2832580684LLU;

	t53 = (((x2281&x2282)^x2283)<<x2284);

	if (t53 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x2333 = 611335767U;
	int64_t x2334 = INT64_MAX;
	int64_t x2335 = 425157926441LL;
	volatile int64_t t54 = 431767118102326205LL;

	t54 = (((x2333&x2334)^x2335)<<x2336);

	if (t54 != 424548704382LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x2472 = 12U;

	t55 = (((x2469&x2470)^x2471)<<x2472);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x2477 = INT16_MAX;
	volatile uint16_t x2478 = 1U;
	int16_t x2480 = 6;
	uint32_t t56 = 23900U;

	t56 = (((x2477&x2478)^x2479)<<x2480);

	if (t56 != 43226240U) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x2481 = 30LLU;
	int32_t x2483 = 136556;
	static volatile uint64_t t57 = 2061747387416LLU;

	t57 = (((x2481&x2482)^x2483)<<x2484);

	if (t57 != 273136LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x2513 = -6;
	uint64_t x2514 = 15072052LLU;
	static int32_t x2515 = INT32_MIN;
	uint32_t x2516 = 16U;
	static volatile uint64_t t58 = 32822660469LLU;

	t58 = (((x2513&x2514)^x2515)<<x2516);

	if (t58 != 18446604323982934016LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x2685 = INT32_MIN;
	volatile int64_t x2687 = -1LL;
	uint16_t x2688 = 4U;

	t59 = (((x2685&x2686)^x2687)<<x2688);

	if (t59 != 34359738352LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x2741 = INT8_MIN;
	int16_t x2742 = INT16_MAX;
	volatile uint32_t x2743 = 22206974U;
	uint32_t t60 = 247668U;

	t60 = (((x2741&x2742)^x2743)<<x2744);

	if (t60 != 88775160U) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x2785 = INT8_MAX;
	int16_t x2786 = -60;
	static volatile int16_t x2787 = INT16_MAX;
	uint8_t x2788 = 4U;

	t61 = (((x2785&x2786)^x2787)<<x2788);

	if (t61 != 523184) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x2814 = 8335U;
	static uint8_t x2815 = UINT8_MAX;

	t62 = (((x2813&x2814)^x2815)<<x2816);

	if (t62 != 8032U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x2833 = 1U;
	static volatile uint8_t x2834 = 2U;
	int16_t x2835 = -1;
	volatile uint8_t x2836 = 27U;
	static volatile uint32_t t63 = 216369U;

	t63 = (((x2833&x2834)^x2835)<<x2836);

	if (t63 != 4160749568U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x2917 = -12756658;
	uint8_t x2918 = 1U;
	int8_t x2920 = 1;
	int32_t t64 = -52700;

	t64 = (((x2917&x2918)^x2919)<<x2920);

	if (t64 != 15336) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x2930 = 3032LLU;
	uint8_t x2931 = 0U;
	int8_t x2932 = 3;
	volatile uint64_t t65 = 6114LLU;

	t65 = (((x2929&x2930)^x2931)<<x2932);

	if (t65 != 24256LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x2950 = 14931U;
	static volatile uint16_t x2952 = 11U;
	uint32_t t66 = 6U;

	t66 = (((x2949&x2950)^x2951)<<x2952);

	if (t66 != 1241882624U) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x3229 = UINT32_MAX;
	int32_t x3230 = INT32_MIN;
	uint16_t x3231 = 2U;
	static uint32_t x3232 = 11U;
	volatile uint32_t t67 = 14833781U;

	t67 = (((x3229&x3230)^x3231)<<x3232);

	if (t67 != 4096U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x3241 = INT64_MIN;
	static int8_t x3242 = INT8_MAX;
	uint8_t x3244 = 11U;
	int64_t t68 = -57596728LL;

	t68 = (((x3241&x3242)^x3243)<<x3244);

	if (t68 != 217017323520LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x3247 = -6;
	int8_t x3248 = 4;

	t69 = (((x3245&x3246)^x3247)<<x3248);

	if (t69 != 4294967264U) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x3382 = 15510846114245818LLU;
	uint8_t x3384 = 18U;
	static volatile uint64_t t70 = 111895315365LLU;

	t70 = (((x3381&x3382)^x3383)<<x3384);

	if (t70 != 49545216LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x3394 = -3737;
	volatile int32_t t71 = -41;

	t71 = (((x3393&x3394)^x3395)<<x3396);

	if (t71 != 62504960) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x3403 = 4U;
	int16_t x3404 = 5;
	static uint64_t t72 = 352495065LLU;

	t72 = (((x3401&x3402)^x3403)<<x3404);

	if (t72 != 100512LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x3509 = INT8_MAX;
	uint16_t x3512 = 7U;

	t73 = (((x3509&x3510)^x3511)<<x3512);

	if (t73 != 1664LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x3607 = UINT64_MAX;
	uint32_t x3608 = 48U;

	t74 = (((x3605&x3606)^x3607)<<x3608);

	if (t74 != 18436329499571257344LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x3617 = UINT8_MAX;
	uint64_t x3618 = 32534232121LLU;
	volatile int8_t x3620 = 0;
	volatile uint64_t t75 = 1312392041LLU;

	t75 = (((x3617&x3618)^x3619)<<x3620);

	if (t75 != 9223372036854775865LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x3677 = INT32_MIN;
	static uint16_t x3679 = UINT16_MAX;
	int16_t x3680 = 5;
	volatile uint64_t t76 = 98LLU;

	t76 = (((x3677&x3678)^x3679)<<x3680);

	if (t76 != 18446744004992172000LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x3689 = INT16_MAX;
	uint32_t x3690 = 11532733U;
	uint8_t x3691 = 4U;
	static volatile uint16_t x3692 = 23U;

	t77 = (((x3689&x3690)^x3691)<<x3692);

	if (t77 != 3699376128U) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int64_t x3725 = -1LL;
	int8_t x3726 = INT8_MIN;
	int16_t x3727 = -1;
	uint8_t x3728 = 0U;

	t78 = (((x3725&x3726)^x3727)<<x3728);

	if (t78 != 127LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x3733 = INT64_MIN;
	uint16_t x3734 = 13972U;
	uint16_t x3735 = UINT16_MAX;
	volatile int64_t t79 = 62371887079657038LL;

	t79 = (((x3733&x3734)^x3735)<<x3736);

	if (t79 != 65535LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x3809 = 353401U;
	uint8_t x3811 = UINT8_MAX;
	uint8_t x3812 = 2U;

	t80 = (((x3809&x3810)^x3811)<<x3812);

	if (t80 != 956U) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x3829 = 411379LLU;
	volatile int64_t x3830 = -101LL;
	uint8_t x3831 = UINT8_MAX;
	static uint16_t x3832 = 6U;
	static volatile uint64_t t81 = 14LLU;

	t81 = (((x3829&x3830)^x3831)<<x3832);

	if (t81 != 26319616LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x3857 = UINT8_MAX;
	static uint64_t x3858 = 516079LLU;
	int8_t x3859 = INT8_MIN;
	uint32_t x3860 = 1U;
	volatile uint64_t t82 = 22347LLU;

	t82 = (((x3857&x3858)^x3859)<<x3860);

	if (t82 != 18446744073709551326LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x3877 = INT64_MAX;
	uint32_t x3878 = 8129U;
	uint32_t x3879 = UINT32_MAX;
	int64_t t83 = -999227LL;

	t83 = (((x3877&x3878)^x3879)<<x3880);

	if (t83 != 4294959166LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x3909 = INT8_MIN;
	uint32_t x3911 = 303689055U;
	int8_t x3912 = 31;
	uint32_t t84 = 47776459U;

	t84 = (((x3909&x3910)^x3911)<<x3912);

	if (t84 != 2147483648U) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x3997 = UINT16_MAX;
	uint8_t x3998 = UINT8_MAX;
	static int8_t x3999 = INT8_MAX;
	volatile int32_t t85 = -133023307;

	t85 = (((x3997&x3998)^x3999)<<x4000);

	if (t85 != 67108864) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x4009 = INT8_MAX;
	uint16_t x4010 = 10649U;
	uint32_t t86 = 1971U;

	t86 = (((x4009&x4010)^x4011)<<x4012);

	if (t86 != 4294967244U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x4021 = 1787U;
	int16_t x4024 = 3;
	uint32_t t87 = 1559578003U;

	t87 = (((x4021&x4022)^x4023)<<x4024);

	if (t87 != 4294705176U) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x4065 = INT16_MIN;
	int8_t x4066 = 15;
	volatile uint16_t x4067 = 2306U;
	uint16_t x4068 = 3U;
	int32_t t88 = -3;

	t88 = (((x4065&x4066)^x4067)<<x4068);

	if (t88 != 18448) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x4089 = INT32_MAX;
	uint16_t x4090 = 1152U;
	static int64_t x4091 = 573136405404164914LL;
	volatile int8_t x4092 = 0;
	int64_t t89 = -15783590883LL;

	t89 = (((x4089&x4090)^x4091)<<x4092);

	if (t89 != 573136405404166066LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x4225 = 1U;
	uint16_t x4226 = 2817U;
	volatile uint64_t x4227 = UINT64_MAX;
	uint16_t x4228 = 1U;
	uint64_t t90 = 1349532033049579LLU;

	t90 = (((x4225&x4226)^x4227)<<x4228);

	if (t90 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x4295 = UINT32_MAX;
	volatile uint8_t x4296 = 0U;
	uint32_t t91 = 839085463U;

	t91 = (((x4293&x4294)^x4295)<<x4296);

	if (t91 != 4294963183U) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x4306 = INT32_MAX;
	int16_t x4308 = 0;
	int32_t t92 = 52;

	t92 = (((x4305&x4306)^x4307)<<x4308);

	if (t92 != 2147483520) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x4453 = INT64_MIN;
	uint64_t x4454 = 493876LLU;
	int16_t x4455 = INT16_MIN;
	volatile uint16_t x4456 = 0U;
	volatile uint64_t t93 = 54568881LLU;

	t93 = (((x4453&x4454)^x4455)<<x4456);

	if (t93 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x4485 = -1;
	int16_t x4486 = INT16_MIN;
	volatile int8_t x4488 = 1;

	t94 = (((x4485&x4486)^x4487)<<x4488);

	if (t94 != 18446744073709486152LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x4521 = 34746;
	int32_t x4522 = INT32_MIN;
	uint16_t x4524 = 4U;
	volatile int32_t t95 = 14;

	t95 = (((x4521&x4522)^x4523)<<x4524);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x4565 = -13532;
	static volatile int32_t x4566 = -1;
	uint64_t x4567 = 1557105171945092480LLU;
	volatile int8_t x4568 = 1;
	uint64_t t96 = 23989074769480LLU;

	t96 = (((x4565&x4566)^x4567)<<x4568);

	if (t96 != 15332533729819393352LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x4606 = -1;
	uint64_t x4607 = 1049LLU;
	volatile uint64_t x4608 = 6LLU;
	static uint64_t t97 = 1086LLU;

	t97 = (((x4605&x4606)^x4607)<<x4608);

	if (t97 != 274877839744LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint16_t x4661 = 131U;
	uint64_t x4662 = 435LLU;
	static volatile int32_t x4664 = 3;
	uint64_t t98 = 1670325125LLU;

	t98 = (((x4661&x4662)^x4663)<<x4664);

	if (t98 != 523232LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x4666 = INT8_MAX;
	volatile uint16_t x4668 = 25U;

	t99 = (((x4665&x4666)^x4667)<<x4668);

	if (t99 != 5441148127266471936LLU) { NG(); } else { ; }
	
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

