#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x42 = INT16_MIN;
int64_t t1 = -262753607445119LL;
uint64_t x191 = UINT64_MAX;
volatile int64_t t4 = -110455455489LL;
int8_t x621 = -1;
uint32_t t6 = 0U;
static volatile int8_t x760 = 21;
int8_t x857 = 7;
static uint64_t x871 = 70176LLU;
uint32_t x878 = UINT32_MAX;
int16_t x1125 = INT16_MIN;
uint64_t x1126 = UINT64_MAX;
volatile uint64_t x1127 = UINT64_MAX;
static volatile uint64_t x1134 = 14717421LLU;
volatile uint32_t t17 = 308U;
volatile int64_t t18 = 145165LL;
uint64_t x1421 = UINT64_MAX;
volatile uint32_t x1423 = UINT32_MAX;
volatile uint64_t t21 = 6938LLU;
uint64_t x1497 = 27LLU;
int32_t x1546 = 25474;
uint8_t x1560 = 4U;
uint64_t x1699 = UINT64_MAX;
volatile uint8_t x1700 = 37U;
static uint64_t t27 = 7710900379505701LLU;
uint8_t x1734 = 20U;
int8_t x1764 = 4;
uint64_t x1794 = UINT64_MAX;
volatile uint64_t t30 = 164LLU;
int32_t t31 = -13865;
uint32_t x2032 = 1U;
uint16_t x2382 = 19896U;
int8_t x2489 = INT8_MIN;
volatile uint64_t t38 = 15LLU;
static int16_t x2505 = INT16_MIN;
uint16_t x2507 = UINT16_MAX;
static int32_t x2565 = 1726914;
volatile uint16_t x2568 = 0U;
volatile int8_t x2621 = INT8_MAX;
int8_t x2632 = 2;
volatile int32_t t46 = -77586862;
static uint8_t x3015 = 62U;
int16_t x3054 = 4070;
int16_t x3056 = 0;
uint8_t x3061 = 1U;
static uint32_t x3153 = 29193U;
uint8_t x3156 = 6U;
volatile uint64_t t54 = 208943LLU;
uint64_t x3314 = 35LLU;
static uint64_t t57 = 501719841665918143LLU;
uint32_t x3367 = 76U;
uint64_t t59 = 49852321115795LLU;
int64_t t60 = 34705LL;
volatile uint32_t x3585 = 152508166U;
volatile uint32_t x3586 = 273475940U;
volatile uint32_t x3633 = 125427408U;
uint8_t x3636 = 2U;
static uint8_t x3754 = 104U;
int16_t x3796 = 0;
uint64_t t64 = 525222108682LLU;
int16_t x3965 = INT16_MIN;
volatile int32_t x3966 = 245819;
volatile int32_t t66 = -3102;
int64_t x3973 = INT64_MIN;
static volatile uint64_t x3975 = UINT64_MAX;
uint8_t x4007 = 1U;
volatile int32_t t68 = -288583696;
static uint64_t x4189 = UINT64_MAX;
volatile uint16_t x4192 = 29U;
int8_t x4260 = 1;
uint16_t x4324 = 1U;
volatile uint32_t t72 = 3U;
int16_t x4441 = INT16_MIN;
volatile int64_t x4442 = INT64_MAX;
static uint16_t x4444 = 7U;
int64_t t74 = 541683006866119LL;
static uint16_t x4447 = 2647U;
int8_t x4448 = 11;
uint8_t x4495 = UINT8_MAX;
static int16_t x4496 = 31;
uint32_t t76 = 44993U;
static int64_t x4621 = 13389LL;
static volatile int64_t t78 = -4063897LL;
uint8_t x4748 = 0U;
volatile int32_t t79 = 5468253;
uint8_t x4760 = 2U;
static int32_t t80 = 1912713;
volatile int32_t t82 = -119233986;
volatile int32_t x5001 = -1;
volatile uint64_t x5002 = UINT64_MAX;
static uint64_t x5004 = 10LLU;
int32_t x5049 = INT32_MIN;
static volatile uint32_t x5052 = 32U;
static volatile uint64_t t84 = 248678823888869661LLU;
int32_t t85 = 0;
volatile int16_t x5197 = INT16_MAX;
int8_t x5227 = INT8_MAX;
int32_t t89 = 50;
uint32_t x5343 = 168U;
uint32_t t90 = 401585307U;
uint8_t x5375 = 12U;
uint8_t x5424 = 10U;
static int64_t t93 = 637109169616297LL;
uint16_t x5494 = 398U;
int32_t t94 = -932;
volatile int32_t t95 = -681;
int64_t t96 = 813297244409LL;
volatile int16_t x5586 = -1;
uint16_t x5588 = 1U;
static volatile uint8_t x5659 = 22U;
volatile int32_t t99 = -39372381;


void f0(void) {
	int16_t x41 = -1;
	uint64_t x43 = 116551363441457130LLU;
	static int16_t x44 = 0;
	static volatile uint64_t t0 = 5106736990565LLU;

	t0 = ((x41+x42)&(x43>>x44));

	if (t0 != 116551363441424362LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x61 = 64319U;
	uint16_t x62 = 585U;
	volatile int64_t x63 = 5356899LL;
	int8_t x64 = 0;

	t1 = ((x61+x62)&(x63>>x64));

	if (t1 != 48384LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x189 = 19U;
	static volatile int64_t x190 = INT64_MIN;
	static uint8_t x192 = 0U;
	uint64_t t2 = 75295304939041LLU;

	t2 = ((x189+x190)&(x191>>x192));

	if (t2 != 9223372036854775827LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x281 = INT16_MAX;
	int64_t x282 = 5715073869018LL;
	uint16_t x283 = UINT16_MAX;
	int32_t x284 = 9;
	static int64_t t3 = -13620288809042LL;

	t3 = ((x281+x282)&(x283>>x284));

	if (t3 != 89LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x365 = INT64_MIN;
	int8_t x366 = INT8_MAX;
	int64_t x367 = INT64_MAX;
	volatile int32_t x368 = 0;

	t4 = ((x365+x366)&(x367>>x368));

	if (t4 != 127LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x609 = INT8_MIN;
	static int16_t x610 = INT16_MIN;
	int16_t x611 = 3533;
	volatile uint16_t x612 = 3U;
	int32_t t5 = -1488017;

	t5 = ((x609+x610)&(x611>>x612));

	if (t5 != 384) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x622 = -1;
	uint32_t x623 = 332812844U;
	volatile uint8_t x624 = 0U;

	t6 = ((x621+x622)&(x623>>x624));

	if (t6 != 332812844U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x697 = -1223;
	int16_t x698 = -45;
	int16_t x699 = INT16_MAX;
	int16_t x700 = 1;
	volatile int32_t t7 = -55641;

	t7 = ((x697+x698)&(x699>>x700));

	if (t7 != 15116) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x757 = 15284966;
	int8_t x758 = INT8_MIN;
	int8_t x759 = INT8_MAX;
	static int32_t t8 = 140;

	t8 = ((x757+x758)&(x759>>x760));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x773 = 882306U;
	static uint64_t x774 = 757178434275373LLU;
	uint64_t x775 = UINT64_MAX;
	static uint16_t x776 = 19U;
	uint64_t t9 = 920846LLU;

	t9 = ((x773+x774)&(x775>>x776));

	if (t9 != 18306621292207LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x858 = 90;
	int64_t x859 = 192LL;
	static uint8_t x860 = 31U;
	static volatile int64_t t10 = 963000173LL;

	t10 = ((x857+x858)&(x859>>x860));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x869 = 2918U;
	int16_t x870 = -1;
	uint8_t x872 = 5U;
	static volatile uint64_t t11 = 15LLU;

	t11 = ((x869+x870)&(x871>>x872));

	if (t11 != 2049LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x877 = INT64_MIN;
	int8_t x879 = INT8_MAX;
	uint8_t x880 = 1U;
	volatile int64_t t12 = -23042LL;

	t12 = ((x877+x878)&(x879>>x880));

	if (t12 != 63LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x901 = 2LL;
	static int16_t x902 = INT16_MIN;
	int8_t x903 = 0;
	int16_t x904 = 1;
	int64_t t13 = 90355245LL;

	t13 = ((x901+x902)&(x903>>x904));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x1049 = INT8_MIN;
	volatile int8_t x1050 = INT8_MIN;
	int16_t x1051 = INT16_MAX;
	uint8_t x1052 = 12U;
	int32_t t14 = 488527864;

	t14 = ((x1049+x1050)&(x1051>>x1052));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x1128 = 7LLU;
	volatile uint64_t t15 = 1103786717475600323LLU;

	t15 = ((x1125+x1126)&(x1127>>x1128));

	if (t15 != 144115188075823103LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x1133 = 4141263U;
	static uint32_t x1135 = 5610U;
	int32_t x1136 = 0;
	uint64_t t16 = 840111756LLU;

	t16 = ((x1133+x1134)&(x1135>>x1136));

	if (t16 != 168LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x1177 = INT16_MAX;
	volatile uint8_t x1178 = 17U;
	static uint32_t x1179 = UINT32_MAX;
	uint8_t x1180 = 2U;

	t17 = ((x1177+x1178)&(x1179>>x1180));

	if (t17 != 32784U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x1181 = -1;
	int64_t x1182 = INT64_MAX;
	uint8_t x1183 = 5U;
	int8_t x1184 = 1;

	t18 = ((x1181+x1182)&(x1183>>x1184));

	if (t18 != 2LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x1397 = -105650;
	uint8_t x1398 = 2U;
	volatile int32_t x1399 = INT32_MAX;
	uint16_t x1400 = 1U;
	volatile int32_t t19 = -180655644;

	t19 = ((x1397+x1398)&(x1399>>x1400));

	if (t19 != 1073636176) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x1413 = UINT64_MAX;
	int64_t x1414 = INT64_MIN;
	volatile int16_t x1415 = INT16_MAX;
	uint8_t x1416 = 26U;
	uint64_t t20 = 5839LLU;

	t20 = ((x1413+x1414)&(x1415>>x1416));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1422 = -1;
	int16_t x1424 = 0;

	t21 = ((x1421+x1422)&(x1423>>x1424));

	if (t21 != 4294967294LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x1498 = 102U;
	static int16_t x1499 = 15;
	uint32_t x1500 = 30U;
	static volatile uint64_t t22 = 7937LLU;

	t22 = ((x1497+x1498)&(x1499>>x1500));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1537 = -1;
	int16_t x1538 = INT16_MIN;
	static uint8_t x1539 = 2U;
	static uint16_t x1540 = 0U;
	volatile int32_t t23 = -520034;

	t23 = ((x1537+x1538)&(x1539>>x1540));

	if (t23 != 2) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x1545 = INT16_MIN;
	static volatile uint32_t x1547 = 127U;
	volatile uint8_t x1548 = 15U;
	uint32_t t24 = 255558U;

	t24 = ((x1545+x1546)&(x1547>>x1548));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x1557 = UINT32_MAX;
	int64_t x1558 = INT64_MIN;
	int32_t x1559 = INT32_MAX;
	static int64_t t25 = -367337101608705299LL;

	t25 = ((x1557+x1558)&(x1559>>x1560));

	if (t25 != 134217727LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1677 = 3LL;
	static int64_t x1678 = -3LL;
	int8_t x1679 = 2;
	uint8_t x1680 = 0U;
	int64_t t26 = -22694498LL;

	t26 = ((x1677+x1678)&(x1679>>x1680));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x1697 = 2U;
	int64_t x1698 = -128287911003177523LL;

	t27 = ((x1697+x1698)&(x1699>>x1700));

	if (t27 != 61717967LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x1733 = -34;
	int8_t x1735 = 13;
	int32_t x1736 = 2;
	int32_t t28 = -3115934;

	t28 = ((x1733+x1734)&(x1735>>x1736));

	if (t28 != 2) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1761 = INT32_MIN;
	int64_t x1762 = -1LL;
	static uint16_t x1763 = 16881U;
	int64_t t29 = 460LL;

	t29 = ((x1761+x1762)&(x1763>>x1764));

	if (t29 != 1055LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x1793 = 3907U;
	static uint64_t x1795 = UINT64_MAX;
	volatile int64_t x1796 = 0LL;

	t30 = ((x1793+x1794)&(x1795>>x1796));

	if (t30 != 3906LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x1881 = 3U;
	static int16_t x1882 = -1;
	int8_t x1883 = 0;
	int32_t x1884 = 1;

	t31 = ((x1881+x1882)&(x1883>>x1884));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1909 = 7U;
	int32_t x1910 = -537;
	int8_t x1911 = INT8_MAX;
	static volatile uint16_t x1912 = 0U;
	volatile int32_t t32 = -1;

	t32 = ((x1909+x1910)&(x1911>>x1912));

	if (t32 != 110) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x2029 = 0;
	int32_t x2030 = INT32_MIN;
	uint16_t x2031 = 78U;
	volatile int32_t t33 = 356;

	t33 = ((x2029+x2030)&(x2031>>x2032));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x2137 = 132023483U;
	uint8_t x2138 = 0U;
	volatile uint32_t x2139 = 5654U;
	uint8_t x2140 = 30U;
	uint32_t t34 = 15737571U;

	t34 = ((x2137+x2138)&(x2139>>x2140));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x2281 = UINT32_MAX;
	uint32_t x2282 = 2U;
	uint8_t x2283 = 8U;
	int8_t x2284 = 0;
	static volatile uint32_t t35 = 889082U;

	t35 = ((x2281+x2282)&(x2283>>x2284));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int64_t x2381 = -66982LL;
	static uint8_t x2383 = 5U;
	uint16_t x2384 = 5U;
	static volatile int64_t t36 = 5227048497617LL;

	t36 = ((x2381+x2382)&(x2383>>x2384));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x2481 = -1LL;
	volatile int32_t x2482 = INT32_MAX;
	int8_t x2483 = INT8_MAX;
	static volatile uint8_t x2484 = 13U;
	volatile int64_t t37 = -119318101269LL;

	t37 = ((x2481+x2482)&(x2483>>x2484));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x2490 = UINT64_MAX;
	int8_t x2491 = INT8_MAX;
	uint16_t x2492 = 14U;

	t38 = ((x2489+x2490)&(x2491>>x2492));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x2506 = UINT32_MAX;
	int8_t x2508 = 0;
	uint32_t t39 = 2223225U;

	t39 = ((x2505+x2506)&(x2507>>x2508));

	if (t39 != 32767U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x2509 = -1;
	uint16_t x2510 = UINT16_MAX;
	int16_t x2511 = 462;
	volatile uint8_t x2512 = 1U;
	static int32_t t40 = 215732;

	t40 = ((x2509+x2510)&(x2511>>x2512));

	if (t40 != 230) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x2525 = INT8_MAX;
	volatile uint32_t x2526 = 178811854U;
	volatile uint8_t x2527 = 106U;
	uint8_t x2528 = 2U;
	uint32_t t41 = 21732U;

	t41 = ((x2525+x2526)&(x2527>>x2528));

	if (t41 != 8U) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x2537 = -2;
	uint32_t x2538 = UINT32_MAX;
	static volatile uint64_t x2539 = 4554622893864905957LLU;
	static uint64_t x2540 = 0LLU;
	volatile uint64_t t42 = 5706888271021633421LLU;

	t42 = ((x2537+x2538)&(x2539>>x2540));

	if (t42 != 4205702373LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x2566 = -13LL;
	uint16_t x2567 = 13346U;
	int64_t t43 = 409135388790466158LL;

	t43 = ((x2565+x2566)&(x2567>>x2568));

	if (t43 != 4128LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x2613 = 0;
	volatile uint64_t x2614 = 45733111LLU;
	volatile uint16_t x2615 = 2U;
	volatile uint16_t x2616 = 11U;
	static volatile uint64_t t44 = 4675524LLU;

	t44 = ((x2613+x2614)&(x2615>>x2616));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x2622 = 0;
	volatile uint8_t x2623 = 31U;
	uint16_t x2624 = 3U;
	int32_t t45 = 5;

	t45 = ((x2621+x2622)&(x2623>>x2624));

	if (t45 != 3) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x2629 = INT16_MIN;
	static int16_t x2630 = -4;
	int8_t x2631 = INT8_MAX;

	t46 = ((x2629+x2630)&(x2631>>x2632));

	if (t46 != 28) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x2849 = -1;
	int64_t x2850 = INT64_MAX;
	uint16_t x2851 = UINT16_MAX;
	static uint8_t x2852 = 0U;
	static int64_t t47 = 40479028722932LL;

	t47 = ((x2849+x2850)&(x2851>>x2852));

	if (t47 != 65534LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x2989 = -16069;
	int32_t x2990 = -22577516;
	static int64_t x2991 = INT64_MAX;
	uint32_t x2992 = 6U;
	volatile int64_t t48 = -4968LL;

	t48 = ((x2989+x2990)&(x2991>>x2992));

	if (t48 != 144115188053262287LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x3013 = 0;
	static int64_t x3014 = INT64_MIN;
	uint8_t x3016 = 9U;
	volatile int64_t t49 = 1026273794LL;

	t49 = ((x3013+x3014)&(x3015>>x3016));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x3049 = -17;
	uint16_t x3050 = UINT16_MAX;
	int32_t x3051 = INT32_MAX;
	int16_t x3052 = 23;
	static int32_t t50 = 16290;

	t50 = ((x3049+x3050)&(x3051>>x3052));

	if (t50 != 238) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x3053 = INT8_MIN;
	volatile uint8_t x3055 = UINT8_MAX;
	volatile int32_t t51 = 7699;

	t51 = ((x3053+x3054)&(x3055>>x3056));

	if (t51 != 102) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x3062 = 890292905;
	uint16_t x3063 = 796U;
	uint16_t x3064 = 1U;
	volatile int32_t t52 = 2;

	t52 = ((x3061+x3062)&(x3063>>x3064));

	if (t52 != 138) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x3117 = 212;
	int8_t x3118 = INT8_MAX;
	volatile int64_t x3119 = 42056LL;
	uint8_t x3120 = 1U;
	static volatile int64_t t53 = -2447814LL;

	t53 = ((x3117+x3118)&(x3119>>x3120));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x3154 = -12;
	static uint64_t x3155 = 4123957943913219635LLU;

	t54 = ((x3153+x3154)&(x3155>>x3156));

	if (t54 != 24600LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x3169 = 7339887;
	uint32_t x3170 = UINT32_MAX;
	uint64_t x3171 = UINT64_MAX;
	uint8_t x3172 = 19U;
	uint64_t t55 = 50LLU;

	t55 = ((x3169+x3170)&(x3171>>x3172));

	if (t55 != 7339886LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x3181 = 224LLU;
	uint64_t x3182 = UINT64_MAX;
	int64_t x3183 = INT64_MAX;
	int16_t x3184 = 11;
	uint64_t t56 = 14501958500529144LLU;

	t56 = ((x3181+x3182)&(x3183>>x3184));

	if (t56 != 223LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x3313 = -1;
	volatile uint8_t x3315 = UINT8_MAX;
	static int32_t x3316 = 0;

	t57 = ((x3313+x3314)&(x3315>>x3316));

	if (t57 != 34LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x3365 = 6176140478LLU;
	int16_t x3366 = -1;
	uint8_t x3368 = 13U;
	volatile uint64_t t58 = 5087213938544933LLU;

	t58 = ((x3365+x3366)&(x3367>>x3368));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x3369 = UINT64_MAX;
	uint32_t x3370 = 5U;
	int8_t x3371 = 1;
	uint8_t x3372 = 11U;

	t59 = ((x3369+x3370)&(x3371>>x3372));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x3577 = INT16_MAX;
	int8_t x3578 = -1;
	int64_t x3579 = 9986LL;
	int8_t x3580 = 4;

	t60 = ((x3577+x3578)&(x3579>>x3580));

	if (t60 != 624LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x3587 = INT64_MAX;
	volatile int8_t x3588 = 1;
	volatile int64_t t61 = -211LL;

	t61 = ((x3585+x3586)&(x3587>>x3588));

	if (t61 != 425984106LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x3634 = 29900U;
	uint8_t x3635 = UINT8_MAX;
	volatile uint32_t t62 = 20U;

	t62 = ((x3633+x3634)&(x3635>>x3636));

	if (t62 != 28U) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x3753 = 5684605U;
	static uint64_t x3755 = 3152LLU;
	uint8_t x3756 = 3U;
	uint64_t t63 = 1LLU;

	t63 = ((x3753+x3754)&(x3755>>x3756));

	if (t63 != 384LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x3793 = UINT64_MAX;
	static int16_t x3794 = INT16_MIN;
	static uint8_t x3795 = UINT8_MAX;

	t64 = ((x3793+x3794)&(x3795>>x3796));

	if (t64 != 255LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x3881 = 22146LLU;
	int64_t x3882 = INT64_MIN;
	int8_t x3883 = INT8_MAX;
	volatile uint16_t x3884 = 12U;
	uint64_t t65 = 9231437878LLU;

	t65 = ((x3881+x3882)&(x3883>>x3884));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x3967 = 0U;
	uint16_t x3968 = 0U;

	t66 = ((x3965+x3966)&(x3967>>x3968));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x3974 = INT8_MAX;
	uint16_t x3976 = 21U;
	static volatile uint64_t t67 = 2005242LLU;

	t67 = ((x3973+x3974)&(x3975>>x3976));

	if (t67 != 127LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x4005 = 42177045;
	int16_t x4006 = INT16_MIN;
	uint8_t x4008 = 12U;

	t68 = ((x4005+x4006)&(x4007>>x4008));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x4190 = INT16_MAX;
	volatile uint8_t x4191 = UINT8_MAX;
	uint64_t t69 = 675334099LLU;

	t69 = ((x4189+x4190)&(x4191>>x4192));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x4233 = INT16_MIN;
	int32_t x4234 = 641;
	int16_t x4235 = 1439;
	int8_t x4236 = 2;
	volatile int32_t t70 = -720984342;

	t70 = ((x4233+x4234)&(x4235>>x4236));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x4257 = 2040;
	int32_t x4258 = -1;
	uint32_t x4259 = UINT32_MAX;
	volatile uint32_t t71 = 715834U;

	t71 = ((x4257+x4258)&(x4259>>x4260));

	if (t71 != 2039U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x4321 = 56543;
	int32_t x4322 = -1;
	uint32_t x4323 = 2U;

	t72 = ((x4321+x4322)&(x4323>>x4324));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x4437 = UINT16_MAX;
	uint16_t x4438 = 947U;
	int8_t x4439 = INT8_MAX;
	static uint32_t x4440 = 1U;
	volatile int32_t t73 = 152;

	t73 = ((x4437+x4438)&(x4439>>x4440));

	if (t73 != 50) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x4443 = 74U;

	t74 = ((x4441+x4442)&(x4443>>x4444));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint64_t x4445 = 64LLU;
	int16_t x4446 = -1;
	volatile uint64_t t75 = 174166300994848LLU;

	t75 = ((x4445+x4446)&(x4447>>x4448));

	if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x4493 = 7883U;
	uint16_t x4494 = 748U;

	t76 = ((x4493+x4494)&(x4495>>x4496));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x4525 = INT64_MAX;
	static int32_t x4526 = INT32_MIN;
	uint32_t x4527 = 22836U;
	uint16_t x4528 = 2U;
	int64_t t77 = 25LL;

	t77 = ((x4525+x4526)&(x4527>>x4528));

	if (t77 != 5709LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x4622 = 8377;
	int64_t x4623 = 37140569933LL;
	static uint16_t x4624 = 2U;

	t78 = ((x4621+x4622)&(x4623>>x4624));

	if (t78 != 1282LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x4745 = 3;
	int8_t x4746 = INT8_MAX;
	int16_t x4747 = INT16_MAX;

	t79 = ((x4745+x4746)&(x4747>>x4748));

	if (t79 != 130) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x4757 = INT8_MAX;
	volatile int32_t x4758 = INT32_MIN;
	uint16_t x4759 = 247U;

	t80 = ((x4757+x4758)&(x4759>>x4760));

	if (t80 != 61) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint8_t x4761 = 0U;
	static int16_t x4762 = -1;
	static uint16_t x4763 = UINT16_MAX;
	uint8_t x4764 = 0U;
	int32_t t81 = -7;

	t81 = ((x4761+x4762)&(x4763>>x4764));

	if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x4769 = -790398907;
	int32_t x4770 = -130981;
	uint8_t x4771 = 10U;
	int8_t x4772 = 1;

	t82 = ((x4769+x4770)&(x4771>>x4772));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x5003 = 91U;
	volatile uint64_t t83 = 504LLU;

	t83 = ((x5001+x5002)&(x5003>>x5004));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x5050 = UINT8_MAX;
	uint64_t x5051 = UINT64_MAX;

	t84 = ((x5049+x5050)&(x5051>>x5052));

	if (t84 != 2147483903LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x5085 = 275;
	uint16_t x5086 = UINT16_MAX;
	int32_t x5087 = 15;
	uint16_t x5088 = 17U;

	t85 = ((x5085+x5086)&(x5087>>x5088));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x5189 = UINT64_MAX;
	int16_t x5190 = INT16_MIN;
	uint32_t x5191 = 32073982U;
	uint8_t x5192 = 8U;
	static volatile uint64_t t86 = 0LLU;

	t86 = ((x5189+x5190)&(x5191>>x5192));

	if (t86 != 92520LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x5198 = 1116214009291987883LL;
	volatile uint32_t x5199 = 25U;
	volatile uint8_t x5200 = 1U;
	volatile int64_t t87 = 354678378307LL;

	t87 = ((x5197+x5198)&(x5199>>x5200));

	if (t87 != 8LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x5225 = -1;
	int8_t x5226 = 53;
	int16_t x5228 = 0;
	int32_t t88 = 15;

	t88 = ((x5225+x5226)&(x5227>>x5228));

	if (t88 != 52) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x5273 = -7;
	uint16_t x5274 = UINT16_MAX;
	static int8_t x5275 = INT8_MAX;
	int8_t x5276 = 17;

	t89 = ((x5273+x5274)&(x5275>>x5276));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x5341 = INT32_MIN;
	int32_t x5342 = INT32_MAX;
	static uint16_t x5344 = 3U;

	t90 = ((x5341+x5342)&(x5343>>x5344));

	if (t90 != 21U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x5373 = INT16_MIN;
	static int8_t x5374 = INT8_MIN;
	volatile int8_t x5376 = 0;
	int32_t t91 = 3477;

	t91 = ((x5373+x5374)&(x5375>>x5376));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x5421 = -1LL;
	static uint16_t x5422 = 302U;
	int64_t x5423 = INT64_MAX;
	volatile int64_t t92 = -21788054691189367LL;

	t92 = ((x5421+x5422)&(x5423>>x5424));

	if (t92 != 301LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x5477 = -209964520242384749LL;
	uint32_t x5478 = UINT32_MAX;
	int64_t x5479 = INT64_MAX;
	static volatile int8_t x5480 = 3;

	t93 = ((x5477+x5478)&(x5479>>x5480));

	if (t93 != 942956988659429522LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x5493 = INT8_MIN;
	volatile uint8_t x5495 = UINT8_MAX;
	static uint8_t x5496 = 0U;

	t94 = ((x5493+x5494)&(x5495>>x5496));

	if (t94 != 14) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x5529 = INT16_MIN;
	static int8_t x5530 = -1;
	int8_t x5531 = 3;
	volatile int8_t x5532 = 5;

	t95 = ((x5529+x5530)&(x5531>>x5532));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x5549 = INT8_MIN;
	static uint32_t x5550 = 509U;
	int64_t x5551 = 685555023451386LL;
	uint16_t x5552 = 20U;

	t96 = ((x5549+x5550)&(x5551>>x5552));

	if (t96 != 376LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x5573 = UINT8_MAX;
	volatile int16_t x5574 = INT16_MIN;
	int8_t x5575 = INT8_MAX;
	uint64_t x5576 = 1LLU;
	static int32_t t97 = 0;

	t97 = ((x5573+x5574)&(x5575>>x5576));

	if (t97 != 63) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint16_t x5585 = 148U;
	static int8_t x5587 = 0;
	volatile int32_t t98 = -3;

	t98 = ((x5585+x5586)&(x5587>>x5588));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x5657 = -1;
	volatile int32_t x5658 = -1;
	uint32_t x5660 = 16U;

	t99 = ((x5657+x5658)&(x5659>>x5660));

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

