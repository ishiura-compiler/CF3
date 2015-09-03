#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t t1 = 4;
volatile int64_t x75 = -2328547LL;
volatile uint32_t t2 = 2366437U;
uint8_t x114 = 1U;
int64_t x200 = INT64_MIN;
volatile uint64_t x227 = UINT64_MAX;
volatile int32_t t5 = 1;
int8_t x321 = 0;
static int8_t x324 = INT8_MIN;
uint16_t x385 = 945U;
static int8_t x428 = -1;
int8_t x566 = 0;
static uint64_t x567 = 5429291576LLU;
volatile int32_t t13 = 2390;
static uint64_t x654 = 1LLU;
uint32_t x729 = 14027168U;
int64_t x760 = -1LL;
int64_t x769 = INT64_MAX;
volatile uint64_t t20 = 233921LLU;
static uint8_t x816 = UINT8_MAX;
volatile int32_t t22 = -5;
uint16_t x890 = 5U;
uint64_t x901 = 258755626LLU;
static uint64_t t24 = 1199508LLU;
volatile int32_t x958 = 0;
volatile uint32_t x1007 = 18U;
uint16_t x1097 = 227U;
volatile int32_t t28 = -338;
int8_t x1110 = 0;
int16_t x1120 = INT16_MIN;
int8_t x1167 = -1;
static int32_t t31 = 2002;
static int64_t x1183 = 39174398332383LL;
int32_t x1184 = -1;
static int8_t x1196 = -3;
uint32_t x1273 = 1555U;
static int64_t x1291 = INT64_MAX;
int8_t x1292 = -1;
int32_t t35 = -221735;
static int8_t x1298 = 5;
int8_t x1481 = 1;
uint8_t x1484 = 7U;
volatile int32_t t38 = -161093;
static int32_t t39 = -34883699;
int8_t x1669 = 23;
uint8_t x1793 = 53U;
int8_t x1795 = 1;
int8_t x1796 = -21;
volatile int32_t t42 = 16080119;
uint16_t x1823 = UINT16_MAX;
volatile uint8_t x1892 = 4U;
volatile int32_t x1973 = 3851;
int64_t x1975 = 112063LL;
volatile int32_t x2024 = -1;
int8_t x2131 = 59;
int32_t t48 = -3162666;
uint32_t x2289 = 5U;
uint32_t x2292 = UINT32_MAX;
static volatile int64_t x2327 = 16129758805931LL;
uint32_t t50 = 191U;
static int64_t x2535 = INT64_MAX;
static volatile int64_t x2536 = INT64_MIN;
volatile int32_t t52 = -16100010;
int16_t x2644 = INT16_MAX;
volatile int8_t x2888 = INT8_MIN;
volatile int8_t x2907 = INT8_MAX;
int16_t x3283 = 0;
uint8_t x3357 = 13U;
uint16_t x3360 = 2U;
int32_t t61 = -1;
uint16_t x3486 = 4U;
static volatile uint64_t t64 = 29973648634LLU;
int16_t x3740 = 1;
uint16_t x3829 = UINT16_MAX;
int32_t x3832 = -1;
volatile int32_t t67 = 131181895;
volatile uint8_t x4006 = 47U;
volatile int8_t x4008 = -1;
int64_t x4010 = 0LL;
int32_t x4011 = -120045;
static uint32_t x4012 = UINT32_MAX;
volatile uint16_t x4059 = 11317U;
uint8_t x4178 = 1U;
static volatile int32_t t75 = -8837;
int8_t x4197 = 0;
uint32_t x4242 = 1U;
int16_t x4255 = INT16_MIN;
uint8_t x4342 = 1U;
int8_t x4366 = 2;
volatile uint32_t x4535 = 337329U;
int16_t x4609 = 50;
int8_t x4610 = 3;
volatile int16_t x4611 = INT16_MAX;
int8_t x4763 = -1;
static uint64_t t86 = 6045842LLU;
int32_t x5050 = 4;
volatile int64_t x5151 = INT64_MIN;
uint32_t x5197 = UINT32_MAX;
static int8_t x5238 = 1;
volatile int16_t x5271 = -3083;
volatile int8_t x5280 = INT8_MAX;
static uint64_t x5443 = 33048LLU;
uint64_t x5492 = UINT64_MAX;
volatile int32_t x5512 = INT32_MIN;


void f0(void) {
	uint8_t x45 = UINT8_MAX;
	volatile int8_t x46 = 17;
	uint16_t x47 = 231U;
	int64_t x48 = -15957LL;
	int32_t t0 = -3755;

	t0 = ((x45<<x46)*(x47<=x48));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x65 = 9U;
	static uint8_t x66 = 5U;
	volatile int32_t x67 = INT32_MAX;
	static uint64_t x68 = 1194285083LLU;

	t1 = ((x65<<x66)*(x67<=x68));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x73 = 15U;
	uint8_t x74 = 4U;
	uint16_t x76 = 4U;

	t2 = ((x73<<x74)*(x75<=x76));

	if (t2 != 240U) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x113 = UINT64_MAX;
	int16_t x115 = INT16_MIN;
	int8_t x116 = -26;
	uint64_t t3 = 76LLU;

	t3 = ((x113<<x114)*(x115<=x116));

	if (t3 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint32_t x197 = 819009U;
	static uint8_t x198 = 2U;
	volatile uint8_t x199 = UINT8_MAX;
	volatile uint32_t t4 = 699224244U;

	t4 = ((x197<<x198)*(x199<=x200));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x225 = 27;
	uint16_t x226 = 1U;
	int32_t x228 = -1796150;

	t5 = ((x225<<x226)*(x227<=x228));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x322 = 12U;
	int64_t x323 = INT64_MIN;
	volatile int32_t t6 = 306666623;

	t6 = ((x321<<x322)*(x323<=x324));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x369 = 17131U;
	volatile int8_t x370 = 12;
	uint8_t x371 = 42U;
	static uint8_t x372 = 7U;
	int32_t t7 = -2650845;

	t7 = ((x369<<x370)*(x371<=x372));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint16_t x386 = 2U;
	volatile int16_t x387 = INT16_MIN;
	int8_t x388 = INT8_MIN;
	int32_t t8 = -123043327;

	t8 = ((x385<<x386)*(x387<=x388));

	if (t8 != 3780) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x425 = 2;
	int8_t x426 = 0;
	int8_t x427 = INT8_MIN;
	static volatile int32_t t9 = -41284;

	t9 = ((x425<<x426)*(x427<=x428));

	if (t9 != 2) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x557 = UINT16_MAX;
	uint8_t x558 = 3U;
	volatile int16_t x559 = INT16_MIN;
	int32_t x560 = INT32_MIN;
	int32_t t10 = 16;

	t10 = ((x557<<x558)*(x559<=x560));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x565 = 18U;
	uint8_t x568 = UINT8_MAX;
	int32_t t11 = 1495;

	t11 = ((x565<<x566)*(x567<=x568));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x589 = UINT8_MAX;
	uint8_t x590 = 8U;
	int64_t x591 = -1082585005633571LL;
	uint8_t x592 = 3U;
	volatile int32_t t12 = 18365;

	t12 = ((x589<<x590)*(x591<=x592));

	if (t12 != 65280) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x601 = 2U;
	volatile uint8_t x602 = 11U;
	int8_t x603 = -1;
	int32_t x604 = INT32_MIN;

	t13 = ((x601<<x602)*(x603<=x604));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x629 = 0;
	volatile int16_t x630 = 19;
	int32_t x631 = 882;
	int16_t x632 = INT16_MIN;
	static int32_t t14 = 1;

	t14 = ((x629<<x630)*(x631<=x632));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x653 = UINT16_MAX;
	volatile int16_t x655 = INT16_MAX;
	volatile uint8_t x656 = UINT8_MAX;
	static int32_t t15 = -93005;

	t15 = ((x653<<x654)*(x655<=x656));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x717 = UINT8_MAX;
	int8_t x718 = 13;
	volatile uint16_t x719 = 781U;
	int16_t x720 = INT16_MIN;
	int32_t t16 = 30;

	t16 = ((x717<<x718)*(x719<=x720));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x730 = 30;
	volatile int32_t x731 = -1;
	static int64_t x732 = INT64_MAX;
	uint32_t t17 = 15489380U;

	t17 = ((x729<<x730)*(x731<=x732));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x757 = 874U;
	static volatile int32_t x758 = 7;
	static int64_t x759 = INT64_MAX;
	uint32_t t18 = 49243U;

	t18 = ((x757<<x758)*(x759<=x760));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x770 = 0U;
	volatile uint8_t x771 = UINT8_MAX;
	volatile uint64_t x772 = 268LLU;
	volatile int64_t t19 = INT64_MAX;

	t19 = ((x769<<x770)*(x771<=x772));

	if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x797 = UINT64_MAX;
	int8_t x798 = 3;
	volatile uint8_t x799 = 0U;
	static uint64_t x800 = 97LLU;

	t20 = ((x797<<x798)*(x799<=x800));

	if (t20 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x805 = 6592794705921LLU;
	volatile int8_t x806 = 1;
	int8_t x807 = 0;
	static uint8_t x808 = 2U;
	uint64_t t21 = 13730848260780LLU;

	t21 = ((x805<<x806)*(x807<=x808));

	if (t21 != 13185589411842LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x813 = INT8_MAX;
	int8_t x814 = 0;
	uint8_t x815 = 1U;

	t22 = ((x813<<x814)*(x815<=x816));

	if (t22 != 127) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x889 = INT8_MAX;
	uint8_t x891 = 1U;
	volatile uint32_t x892 = 42301U;
	static volatile int32_t t23 = -26;

	t23 = ((x889<<x890)*(x891<=x892));

	if (t23 != 4064) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x902 = 0;
	volatile uint32_t x903 = 14U;
	int32_t x904 = INT32_MAX;

	t24 = ((x901<<x902)*(x903<=x904));

	if (t24 != 258755626LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x957 = 71U;
	volatile int8_t x959 = 3;
	int16_t x960 = INT16_MIN;
	static int32_t t25 = -4099;

	t25 = ((x957<<x958)*(x959<=x960));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1005 = 125U;
	volatile uint64_t x1006 = 3LLU;
	int32_t x1008 = 932;
	uint32_t t26 = 19U;

	t26 = ((x1005<<x1006)*(x1007<=x1008));

	if (t26 != 1000U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x1065 = 0U;
	int8_t x1066 = 13;
	static volatile int64_t x1067 = INT64_MIN;
	volatile int32_t x1068 = -10;
	volatile int32_t t27 = -1712;

	t27 = ((x1065<<x1066)*(x1067<=x1068));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint8_t x1098 = 18U;
	uint64_t x1099 = 3068502830394435263LLU;
	uint64_t x1100 = 6187067LLU;

	t28 = ((x1097<<x1098)*(x1099<=x1100));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x1109 = INT8_MAX;
	volatile uint8_t x1111 = 3U;
	int16_t x1112 = -1;
	int32_t t29 = -1548;

	t29 = ((x1109<<x1110)*(x1111<=x1112));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x1117 = 297U;
	volatile int16_t x1118 = 1;
	uint8_t x1119 = UINT8_MAX;
	volatile int32_t t30 = 1062;

	t30 = ((x1117<<x1118)*(x1119<=x1120));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x1165 = 325U;
	int16_t x1166 = 1;
	uint64_t x1168 = UINT64_MAX;

	t31 = ((x1165<<x1166)*(x1167<=x1168));

	if (t31 != 650) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x1181 = 2497U;
	static int8_t x1182 = 1;
	volatile int32_t t32 = -136599211;

	t32 = ((x1181<<x1182)*(x1183<=x1184));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x1193 = 28248U;
	int8_t x1194 = 1;
	uint16_t x1195 = 821U;
	int32_t t33 = 5948;

	t33 = ((x1193<<x1194)*(x1195<=x1196));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int8_t x1274 = 26;
	int64_t x1275 = -1LL;
	uint64_t x1276 = 11LLU;
	static uint32_t t34 = 1864019684U;

	t34 = ((x1273<<x1274)*(x1275<=x1276));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x1289 = INT8_MAX;
	uint8_t x1290 = 0U;

	t35 = ((x1289<<x1290)*(x1291<=x1292));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x1297 = 247433248976149LLU;
	volatile int8_t x1299 = 33;
	int8_t x1300 = -2;
	uint64_t t36 = 3948912607761518551LLU;

	t36 = ((x1297<<x1298)*(x1299<=x1300));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x1482 = 3U;
	static volatile uint64_t x1483 = 67517965344LLU;
	volatile int32_t t37 = -5325641;

	t37 = ((x1481<<x1482)*(x1483<=x1484));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x1605 = 50U;
	int8_t x1606 = 2;
	static int32_t x1607 = INT32_MIN;
	static int32_t x1608 = INT32_MAX;

	t38 = ((x1605<<x1606)*(x1607<=x1608));

	if (t38 != 200) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x1661 = UINT8_MAX;
	int16_t x1662 = 17;
	int8_t x1663 = 8;
	uint16_t x1664 = UINT16_MAX;

	t39 = ((x1661<<x1662)*(x1663<=x1664));

	if (t39 != 33423360) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x1670 = 3U;
	int16_t x1671 = INT16_MIN;
	static int32_t x1672 = INT32_MIN;
	volatile int32_t t40 = 0;

	t40 = ((x1669<<x1670)*(x1671<=x1672));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x1794 = 11;
	volatile int32_t t41 = 48168;

	t41 = ((x1793<<x1794)*(x1795<=x1796));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x1809 = 790;
	uint32_t x1810 = 13U;
	uint32_t x1811 = 12614U;
	uint32_t x1812 = 59U;

	t42 = ((x1809<<x1810)*(x1811<=x1812));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x1821 = 67121U;
	volatile uint8_t x1822 = 0U;
	volatile int16_t x1824 = INT16_MIN;
	volatile uint32_t t43 = 12U;

	t43 = ((x1821<<x1822)*(x1823<=x1824));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x1889 = 8151U;
	volatile int32_t x1890 = 13;
	int64_t x1891 = -1997396056061415LL;
	int32_t t44 = 357485960;

	t44 = ((x1889<<x1890)*(x1891<=x1892));

	if (t44 != 66772992) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x1974 = 2;
	volatile int16_t x1976 = -13704;
	int32_t t45 = -277646550;

	t45 = ((x1973<<x1974)*(x1975<=x1976));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x2021 = 2186513816692265LLU;
	volatile int8_t x2022 = 6;
	uint8_t x2023 = 43U;
	volatile uint64_t t46 = 2164369973636957653LLU;

	t46 = ((x2021<<x2022)*(x2023<=x2024));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x2045 = UINT8_MAX;
	uint64_t x2046 = 23LLU;
	volatile int64_t x2047 = INT64_MIN;
	int8_t x2048 = 1;
	volatile int32_t t47 = -30;

	t47 = ((x2045<<x2046)*(x2047<=x2048));

	if (t47 != 2139095040) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x2129 = 15236;
	static uint8_t x2130 = 11U;
	int8_t x2132 = -2;

	t48 = ((x2129<<x2130)*(x2131<=x2132));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x2290 = 2;
	uint8_t x2291 = 3U;
	volatile uint32_t t49 = 181714435U;

	t49 = ((x2289<<x2290)*(x2291<=x2292));

	if (t49 != 20U) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x2325 = 1620969U;
	volatile uint8_t x2326 = 25U;
	static uint64_t x2328 = 367502818LLU;

	t50 = ((x2325<<x2326)*(x2327<=x2328));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x2533 = UINT32_MAX;
	int8_t x2534 = 1;
	volatile uint32_t t51 = 1961401790U;

	t51 = ((x2533<<x2534)*(x2535<=x2536));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x2589 = 3U;
	int64_t x2590 = 7LL;
	int32_t x2591 = INT32_MIN;
	static int32_t x2592 = INT32_MAX;

	t52 = ((x2589<<x2590)*(x2591<=x2592));

	if (t52 != 384) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x2641 = 785LL;
	uint8_t x2642 = 0U;
	int8_t x2643 = INT8_MAX;
	static int64_t t53 = 2800301828687470LL;

	t53 = ((x2641<<x2642)*(x2643<=x2644));

	if (t53 != 785LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x2657 = 402524951LL;
	int32_t x2658 = 1;
	int8_t x2659 = INT8_MIN;
	int32_t x2660 = -344;
	int64_t t54 = -113449LL;

	t54 = ((x2657<<x2658)*(x2659<=x2660));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x2885 = 4800U;
	volatile uint8_t x2886 = 11U;
	uint16_t x2887 = 19866U;
	volatile int32_t t55 = 3820;

	t55 = ((x2885<<x2886)*(x2887<=x2888));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x2905 = 135558216416976012LLU;
	uint8_t x2906 = 4U;
	volatile int64_t x2908 = 2407224116LL;
	volatile uint64_t t56 = 38924LLU;

	t56 = ((x2905<<x2906)*(x2907<=x2908));

	if (t56 != 2168931462671616192LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x2933 = 50201;
	volatile uint8_t x2934 = 3U;
	static uint32_t x2935 = UINT32_MAX;
	uint64_t x2936 = 172LLU;
	volatile int32_t t57 = 13060366;

	t57 = ((x2933<<x2934)*(x2935<=x2936));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x3017 = 455875550LLU;
	uint32_t x3018 = 1U;
	int32_t x3019 = INT32_MAX;
	volatile int8_t x3020 = -2;
	uint64_t t58 = 1990393393344954862LLU;

	t58 = ((x3017<<x3018)*(x3019<=x3020));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x3197 = 634LLU;
	volatile uint32_t x3198 = 17U;
	int64_t x3199 = INT64_MAX;
	uint64_t x3200 = 8280115665LLU;
	volatile uint64_t t59 = 13324LLU;

	t59 = ((x3197<<x3198)*(x3199<=x3200));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x3281 = 273694U;
	static uint8_t x3282 = 1U;
	int64_t x3284 = 373315LL;
	static volatile uint32_t t60 = 123917166U;

	t60 = ((x3281<<x3282)*(x3283<=x3284));

	if (t60 != 547388U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x3358 = 0;
	volatile uint16_t x3359 = 0U;

	t61 = ((x3357<<x3358)*(x3359<=x3360));

	if (t61 != 13) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x3473 = 33;
	int8_t x3474 = 17;
	int32_t x3475 = -319937842;
	uint8_t x3476 = 6U;
	volatile int32_t t62 = 8;

	t62 = ((x3473<<x3474)*(x3475<=x3476));

	if (t62 != 4325376) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x3485 = 97;
	volatile uint64_t x3487 = 13818819626474808LLU;
	int16_t x3488 = INT16_MAX;
	volatile int32_t t63 = 26;

	t63 = ((x3485<<x3486)*(x3487<=x3488));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x3541 = 6625090149426693029LLU;
	int16_t x3542 = 5;
	static uint64_t x3543 = UINT64_MAX;
	int16_t x3544 = -1;

	t64 = ((x3541<<x3542)*(x3543<=x3544));

	if (t64 != 9088699970849109152LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x3737 = UINT16_MAX;
	volatile uint32_t x3738 = 1U;
	static volatile int64_t x3739 = INT64_MIN;
	volatile int32_t t65 = 88;

	t65 = ((x3737<<x3738)*(x3739<=x3740));

	if (t65 != 131070) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x3830 = 0;
	uint16_t x3831 = 0U;
	int32_t t66 = 2;

	t66 = ((x3829<<x3830)*(x3831<=x3832));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x3905 = 24U;
	volatile uint8_t x3906 = 4U;
	static int8_t x3907 = INT8_MIN;
	int32_t x3908 = INT32_MIN;

	t67 = ((x3905<<x3906)*(x3907<=x3908));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x3985 = UINT32_MAX;
	volatile uint8_t x3986 = 20U;
	volatile uint16_t x3987 = 3784U;
	uint64_t x3988 = 644LLU;
	volatile uint32_t t68 = 12468160U;

	t68 = ((x3985<<x3986)*(x3987<=x3988));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x3989 = INT16_MAX;
	uint8_t x3990 = 5U;
	uint8_t x3991 = 3U;
	int16_t x3992 = 2;
	volatile int32_t t69 = -680191416;

	t69 = ((x3989<<x3990)*(x3991<=x3992));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x4005 = 1388755884938143LLU;
	volatile int64_t x4007 = -7099923LL;
	volatile uint64_t t70 = 112979978786LLU;

	t70 = ((x4005<<x4006)*(x4007<=x4008));

	if (t70 != 14541982459290976256LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x4009 = INT32_MAX;
	int32_t t71 = INT32_MAX;

	t71 = ((x4009<<x4010)*(x4011<=x4012));

	if (t71 != INT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x4057 = 13232815U;
	uint8_t x4058 = 5U;
	volatile int8_t x4060 = INT8_MIN;
	uint32_t t72 = 2597558U;

	t72 = ((x4057<<x4058)*(x4059<=x4060));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x4121 = 23947331;
	static uint8_t x4122 = 1U;
	uint16_t x4123 = 15631U;
	static int32_t x4124 = 774230584;
	volatile int32_t t73 = -1625974;

	t73 = ((x4121<<x4122)*(x4123<=x4124));

	if (t73 != 47894662) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x4133 = 874704572742523376LL;
	volatile uint8_t x4134 = 1U;
	uint32_t x4135 = 8962626U;
	volatile uint32_t x4136 = UINT32_MAX;
	volatile int64_t t74 = 819722262165LL;

	t74 = ((x4133<<x4134)*(x4135<=x4136));

	if (t74 != 1749409145485046752LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x4177 = 22U;
	int64_t x4179 = 165426044443315525LL;
	uint8_t x4180 = UINT8_MAX;

	t75 = ((x4177<<x4178)*(x4179<=x4180));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x4198 = 1;
	uint32_t x4199 = UINT32_MAX;
	uint8_t x4200 = 0U;
	volatile int32_t t76 = 0;

	t76 = ((x4197<<x4198)*(x4199<=x4200));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x4205 = UINT16_MAX;
	static uint8_t x4206 = 11U;
	int32_t x4207 = INT32_MIN;
	int16_t x4208 = -1;
	int32_t t77 = -1150084;

	t77 = ((x4205<<x4206)*(x4207<=x4208));

	if (t77 != 134215680) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x4241 = 0;
	uint8_t x4243 = 1U;
	int16_t x4244 = INT16_MIN;
	static int32_t t78 = -657633;

	t78 = ((x4241<<x4242)*(x4243<=x4244));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x4253 = 3U;
	uint16_t x4254 = 2U;
	volatile uint8_t x4256 = UINT8_MAX;
	int32_t t79 = 6;

	t79 = ((x4253<<x4254)*(x4255<=x4256));

	if (t79 != 12) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x4341 = 173U;
	volatile int16_t x4343 = INT16_MIN;
	volatile uint64_t x4344 = UINT64_MAX;
	volatile uint32_t t80 = 161369507U;

	t80 = ((x4341<<x4342)*(x4343<=x4344));

	if (t80 != 346U) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint16_t x4365 = UINT16_MAX;
	int32_t x4367 = -480356667;
	static int8_t x4368 = -1;
	int32_t t81 = 27656;

	t81 = ((x4365<<x4366)*(x4367<=x4368));

	if (t81 != 262140) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x4533 = UINT64_MAX;
	uint8_t x4534 = 53U;
	static int8_t x4536 = -1;
	uint64_t t82 = 459235LLU;

	t82 = ((x4533<<x4534)*(x4535<=x4536));

	if (t82 != 18437736874454810624LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x4605 = 12U;
	volatile int32_t x4606 = 2;
	uint64_t x4607 = UINT64_MAX;
	uint64_t x4608 = 16302786134LLU;
	static volatile int32_t t83 = 208383;

	t83 = ((x4605<<x4606)*(x4607<=x4608));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x4612 = INT16_MAX;
	int32_t t84 = 259;

	t84 = ((x4609<<x4610)*(x4611<=x4612));

	if (t84 != 400) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x4741 = 107423816LL;
	uint8_t x4742 = 1U;
	volatile uint64_t x4743 = UINT64_MAX;
	int32_t x4744 = INT32_MIN;
	int64_t t85 = 2146582056LL;

	t85 = ((x4741<<x4742)*(x4743<=x4744));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x4761 = UINT64_MAX;
	int8_t x4762 = 12;
	int16_t x4764 = -1;

	t86 = ((x4761<<x4762)*(x4763<=x4764));

	if (t86 != 18446744073709547520LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x5005 = INT8_MAX;
	volatile uint8_t x5006 = 7U;
	volatile uint8_t x5007 = UINT8_MAX;
	int64_t x5008 = -1LL;
	int32_t t87 = -2;

	t87 = ((x5005<<x5006)*(x5007<=x5008));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x5049 = UINT64_MAX;
	static int16_t x5051 = INT16_MIN;
	int8_t x5052 = INT8_MIN;
	uint64_t t88 = 3627603298898947LLU;

	t88 = ((x5049<<x5050)*(x5051<=x5052));

	if (t88 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x5149 = 7183477LLU;
	static uint16_t x5150 = 4U;
	volatile int16_t x5152 = INT16_MIN;
	volatile uint64_t t89 = 1601278371740497106LLU;

	t89 = ((x5149<<x5150)*(x5151<=x5152));

	if (t89 != 114935632LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x5177 = 1480547709U;
	uint8_t x5178 = 9U;
	uint8_t x5179 = 0U;
	int16_t x5180 = INT16_MAX;
	uint32_t t90 = 28U;

	t90 = ((x5177<<x5178)*(x5179<=x5180));

	if (t90 != 2126182912U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x5198 = 2;
	uint32_t x5199 = UINT32_MAX;
	volatile uint16_t x5200 = 87U;
	uint32_t t91 = 826239U;

	t91 = ((x5197<<x5198)*(x5199<=x5200));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x5237 = 4U;
	int16_t x5239 = 132;
	volatile int8_t x5240 = -11;
	volatile int32_t t92 = 4006;

	t92 = ((x5237<<x5238)*(x5239<=x5240));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x5269 = 2;
	static uint8_t x5270 = 0U;
	int32_t x5272 = INT32_MIN;
	int32_t t93 = -10;

	t93 = ((x5269<<x5270)*(x5271<=x5272));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x5277 = 3978213581568687489LLU;
	int32_t x5278 = 0;
	volatile int32_t x5279 = -1;
	uint64_t t94 = 207LLU;

	t94 = ((x5277<<x5278)*(x5279<=x5280));

	if (t94 != 3978213581568687489LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x5413 = 64436010U;
	int8_t x5414 = 1;
	static volatile int8_t x5415 = -1;
	int32_t x5416 = 0;
	static volatile uint32_t t95 = 3729U;

	t95 = ((x5413<<x5414)*(x5415<=x5416));

	if (t95 != 128872020U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x5441 = 1;
	static uint64_t x5442 = 30LLU;
	int16_t x5444 = INT16_MIN;
	volatile int32_t t96 = 7;

	t96 = ((x5441<<x5442)*(x5443<=x5444));

	if (t96 != 1073741824) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x5489 = 2;
	int16_t x5490 = 11;
	uint16_t x5491 = 37U;
	volatile int32_t t97 = 90570993;

	t97 = ((x5489<<x5490)*(x5491<=x5492));

	if (t97 != 4096) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x5505 = 800U;
	static uint8_t x5506 = 1U;
	static int64_t x5507 = 1477646389852LL;
	int64_t x5508 = -1LL;
	volatile int32_t t98 = 33685;

	t98 = ((x5505<<x5506)*(x5507<=x5508));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x5509 = 67935LLU;
	volatile uint32_t x5510 = 18U;
	static int16_t x5511 = -40;
	static volatile uint64_t t99 = 294980LLU;

	t99 = ((x5509<<x5510)*(x5511<=x5512));

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

