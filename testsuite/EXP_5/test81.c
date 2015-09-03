#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x30 = INT8_MIN;
int32_t x127 = INT32_MAX;
int32_t x313 = INT32_MIN;
int64_t x316 = 5LL;
static uint32_t t2 = 43512U;
static uint64_t x389 = 9529700249107LLU;
int64_t x391 = -1LL;
volatile uint64_t t3 = 6430477633LLU;
uint32_t x586 = UINT32_MAX;
uint8_t x593 = 0U;
int32_t x633 = -4780;
int16_t x634 = 294;
volatile uint16_t x636 = 0U;
uint64_t x703 = 210396902771LLU;
volatile uint32_t t9 = 14425176U;
int8_t x736 = 37;
int64_t t10 = 229811645135990385LL;
static uint16_t x759 = 11550U;
volatile int32_t x762 = 12663598;
uint16_t x764 = 5U;
int8_t x901 = INT8_MAX;
static volatile int8_t x937 = -1;
static int8_t x1101 = INT8_MIN;
volatile uint8_t x1104 = 7U;
volatile int64_t x1155 = 144693221LL;
volatile int16_t x1273 = INT16_MAX;
int16_t x1275 = 8551;
volatile int8_t x1276 = 24;
static int8_t x1277 = 42;
volatile int32_t x1410 = -1;
int64_t x1415 = 2930875642LL;
uint8_t x1416 = 6U;
static int64_t x1449 = -1LL;
int16_t x1462 = -1;
int16_t x1545 = INT16_MIN;
volatile int8_t x1692 = 5;
uint64_t t33 = 967563339LLU;
int64_t x1825 = -30641LL;
static int64_t x1861 = -1LL;
uint64_t x1863 = 161356983LLU;
volatile int16_t x2006 = 7;
static uint8_t x2008 = 12U;
volatile uint32_t t40 = 5106183U;
int8_t x2081 = INT8_MIN;
int64_t x2092 = 13LL;
static volatile uint64_t t44 = 3744088433784LLU;
uint8_t x2152 = 1U;
static volatile int64_t x2342 = INT64_MIN;
volatile uint32_t x2435 = 1225922458U;
int8_t x2452 = 45;
uint32_t x2465 = 51656685U;
uint64_t t52 = 678995557LLU;
static int32_t x2578 = 8551294;
volatile int64_t x2595 = 17161861422LL;
uint8_t x2732 = 0U;
uint16_t x2778 = 15452U;
static volatile int32_t t56 = 115;
uint32_t x2882 = 959U;
static int64_t x2883 = -1LL;
int16_t x2885 = INT16_MIN;
int8_t x2887 = INT8_MAX;
uint8_t x3216 = 0U;
volatile int16_t x3261 = INT16_MIN;
uint8_t x3262 = 0U;
int16_t x3286 = INT16_MAX;
uint32_t x3325 = UINT32_MAX;
uint8_t x3326 = 1U;
uint16_t x3515 = UINT16_MAX;
volatile int64_t x3516 = 0LL;
volatile uint32_t x3548 = 10U;
int32_t x3593 = -1;
int64_t x3594 = -446852LL;
int8_t x3646 = 1;
uint64_t x3647 = 62LLU;
uint64_t t71 = 962361330233LLU;
uint16_t x3818 = 733U;
static int32_t x3937 = -1;
uint32_t x4265 = 34238U;
volatile uint32_t t80 = 154553746U;
int8_t x4563 = INT8_MAX;
uint8_t x4564 = 0U;
int64_t x4603 = INT64_MAX;
int64_t x4661 = -1442LL;
int16_t x4674 = INT16_MAX;
static int64_t x4675 = 17538128090LL;
uint32_t x4823 = UINT32_MAX;
static uint64_t x4864 = 2LLU;
volatile uint64_t t89 = 849LLU;
static volatile uint16_t x4901 = 38U;
int64_t t90 = 8307478174915923LL;
int32_t t92 = 10;
int32_t x5011 = 1;
uint8_t x5013 = UINT8_MAX;
static volatile int8_t x5015 = -1;
static int16_t x5040 = 17;
static volatile uint32_t x5122 = 0U;


void f0(void) {
	static int8_t x29 = -7;
	uint32_t x31 = 35U;
	int32_t x32 = 0;
	volatile uint32_t t0 = 40116090U;

	t0 = (x29*((x30+x31)>>x32));

	if (t0 != 651U) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x125 = 7U;
	volatile int16_t x126 = INT16_MIN;
	uint8_t x128 = 4U;
	int32_t t1 = -247201;

	t1 = (x125*((x126+x127)>>x128));

	if (t1 != 939509753) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x314 = 7U;
	int16_t x315 = -8660;

	t2 = (x313*((x314+x315)>>x316));

	if (t2 != 2147483648U) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x390 = 1U;
	static uint8_t x392 = 19U;

	t3 = (x389*((x390+x391)>>x392));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x453 = -1;
	uint32_t x454 = 5U;
	uint16_t x455 = UINT16_MAX;
	volatile int8_t x456 = 0;
	volatile uint32_t t4 = 414U;

	t4 = (x453*((x454+x455)>>x456));

	if (t4 != 4294901756U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x585 = INT8_MIN;
	volatile int8_t x587 = INT8_MIN;
	static volatile uint8_t x588 = 19U;
	volatile uint32_t t5 = 74112277U;

	t5 = (x585*((x586+x587)>>x588));

	if (t5 != 4293918848U) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x594 = UINT32_MAX;
	uint64_t x595 = 59150047499LLU;
	static int16_t x596 = 1;
	uint64_t t6 = 56024688LLU;

	t6 = (x593*((x594+x595)>>x596));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x635 = 47290784468LL;
	int64_t t7 = 99200730LL;

	t7 = (x633*((x634+x635)>>x636));

	if (t7 != -226049951162360LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x701 = UINT32_MAX;
	uint32_t x702 = UINT32_MAX;
	uint8_t x704 = 6U;
	uint64_t t8 = 1970445288615383LLU;

	t8 = (x701*((x702+x703)>>x704));

	if (t8 != 14407727503454861355LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x729 = INT16_MAX;
	int32_t x730 = -1;
	static uint32_t x731 = 510045905U;
	static volatile uint8_t x732 = 5U;

	t9 = (x729*((x730+x731)>>x732));

	if (t9 != 2580007562U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x733 = 2U;
	int64_t x734 = 11982LL;
	static int8_t x735 = -1;

	t10 = (x733*((x734+x735)>>x736));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x757 = 97U;
	static uint16_t x758 = 0U;
	int16_t x760 = 0;
	static volatile int32_t t11 = -364;

	t11 = (x757*((x758+x759)>>x760));

	if (t11 != 1120350) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x761 = 8723678722698641LLU;
	int64_t x763 = -89LL;
	static volatile uint64_t t12 = 9349193857569LLU;

	t12 = (x761*((x762+x763)>>x764));

	if (t12 != 2715133864737845302LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x821 = 900U;
	int32_t x822 = 4303;
	uint64_t x823 = 32711562LLU;
	volatile uint8_t x824 = 5U;
	static volatile uint64_t t13 = 0LLU;

	t13 = (x821*((x822+x823)>>x824));

	if (t13 != 920133000LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x902 = INT32_MIN;
	int64_t x903 = INT64_MAX;
	int32_t x904 = 8;
	int64_t t14 = 28418532290613664LL;

	t14 = (x901*((x902+x903)>>x904));

	if (t14 != 4575657220343070593LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x938 = 310671994U;
	volatile int8_t x939 = 30;
	uint8_t x940 = 4U;
	uint32_t t15 = 15736484U;

	t15 = (x937*((x938+x939)>>x940));

	if (t15 != 4275550295U) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x941 = INT8_MAX;
	volatile int16_t x942 = 1697;
	uint16_t x943 = UINT16_MAX;
	static int32_t x944 = 0;
	int32_t t16 = -222513;

	t16 = (x941*((x942+x943)>>x944));

	if (t16 != 8538464) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1081 = -1;
	uint64_t x1082 = 24359641325LLU;
	volatile uint16_t x1083 = 14U;
	static uint8_t x1084 = 7U;
	static uint64_t t17 = 2815353LLU;

	t17 = (x1081*((x1082+x1083)>>x1084));

	if (t17 != 18446744073519241919LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x1102 = 120U;
	uint16_t x1103 = 955U;
	uint32_t t18 = 488U;

	t18 = (x1101*((x1102+x1103)>>x1104));

	if (t18 != 4294966272U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1149 = INT8_MIN;
	int32_t x1150 = -1;
	int16_t x1151 = INT16_MAX;
	uint64_t x1152 = 6LLU;
	static volatile int32_t t19 = -25;

	t19 = (x1149*((x1150+x1151)>>x1152));

	if (t19 != -65408) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x1153 = 1U;
	static volatile int16_t x1154 = INT16_MIN;
	static uint16_t x1156 = 22U;
	int64_t t20 = -303LL;

	t20 = (x1153*((x1154+x1155)>>x1156));

	if (t20 != 34LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x1241 = 465666614LLU;
	int16_t x1242 = INT16_MIN;
	static volatile int64_t x1243 = INT64_MAX;
	uint8_t x1244 = 15U;
	uint64_t t21 = 26812632224080727LLU;

	t21 = (x1241*((x1242+x1243)>>x1244));

	if (t21 != 9382686872741673876LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x1261 = 0U;
	int16_t x1262 = 0;
	int64_t x1263 = 10843481380509703LL;
	uint16_t x1264 = 26U;
	int64_t t22 = 100816392499312LL;

	t22 = (x1261*((x1262+x1263)>>x1264));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x1274 = INT8_MIN;
	static volatile int32_t t23 = 465;

	t23 = (x1273*((x1274+x1275)>>x1276));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x1278 = 11U;
	uint32_t x1279 = 3U;
	int32_t x1280 = 3;
	uint32_t t24 = 403664U;

	t24 = (x1277*((x1278+x1279)>>x1280));

	if (t24 != 42U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1409 = 1044774U;
	volatile int8_t x1411 = 13;
	int8_t x1412 = 13;
	uint32_t t25 = 100758U;

	t25 = (x1409*((x1410+x1411)>>x1412));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1413 = UINT8_MAX;
	uint64_t x1414 = 20LLU;
	uint64_t t26 = 6931LLU;

	t26 = (x1413*((x1414+x1415)>>x1416));

	if (t26 != 11677707660LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1429 = 37U;
	static uint32_t x1430 = UINT32_MAX;
	volatile int32_t x1431 = INT32_MIN;
	volatile uint8_t x1432 = 8U;
	uint32_t t27 = 42U;

	t27 = (x1429*((x1430+x1431)>>x1432));

	if (t27 != 310378459U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x1450 = 3962965469129406LLU;
	uint8_t x1451 = 1U;
	int8_t x1452 = 52;
	volatile uint64_t t28 = 177605LLU;

	t28 = (x1449*((x1450+x1451)>>x1452));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1461 = INT16_MAX;
	uint16_t x1463 = 1U;
	uint16_t x1464 = 1U;
	volatile int32_t t29 = -16982686;

	t29 = (x1461*((x1462+x1463)>>x1464));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x1546 = 193U;
	int8_t x1547 = -11;
	volatile int16_t x1548 = 5;
	static volatile int32_t t30 = -23;

	t30 = (x1545*((x1546+x1547)>>x1548));

	if (t30 != -163840) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1589 = -1;
	int32_t x1590 = INT32_MIN;
	uint32_t x1591 = UINT32_MAX;
	int8_t x1592 = 1;
	volatile uint32_t t31 = 1U;

	t31 = (x1589*((x1590+x1591)>>x1592));

	if (t31 != 3221225473U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x1593 = -1;
	uint16_t x1594 = UINT16_MAX;
	uint64_t x1595 = 0LLU;
	static int8_t x1596 = 0;
	uint64_t t32 = 22874LLU;

	t32 = (x1593*((x1594+x1595)>>x1596));

	if (t32 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x1689 = -1LL;
	int32_t x1690 = INT32_MIN;
	uint64_t x1691 = 1758413LLU;

	t33 = (x1689*((x1690+x1691)>>x1692));

	if (t33 != 17870283321473182042LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1826 = -1;
	volatile uint8_t x1827 = 14U;
	volatile uint16_t x1828 = 0U;
	volatile int64_t t34 = 259292061051719LL;

	t34 = (x1825*((x1826+x1827)>>x1828));

	if (t34 != -398333LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x1862 = 33U;
	uint8_t x1864 = 6U;
	uint64_t t35 = 11164996LLU;

	t35 = (x1861*((x1862+x1863)>>x1864));

	if (t35 != 18446744073707030413LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1905 = 0LL;
	static int8_t x1906 = INT8_MIN;
	int64_t x1907 = INT64_MAX;
	volatile uint8_t x1908 = 45U;
	volatile int64_t t36 = 155990LL;

	t36 = (x1905*((x1906+x1907)>>x1908));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x1953 = -346;
	int64_t x1954 = 11670LL;
	int32_t x1955 = 3;
	int8_t x1956 = 1;
	volatile int64_t t37 = -25779942819LL;

	t37 = (x1953*((x1954+x1955)>>x1956));

	if (t37 != -2019256LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x1993 = INT32_MIN;
	int8_t x1994 = 0;
	volatile uint32_t x1995 = 779702905U;
	static int8_t x1996 = 14;
	volatile uint32_t t38 = 6U;

	t38 = (x1993*((x1994+x1995)>>x1996));

	if (t38 != 2147483648U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2005 = INT8_MIN;
	volatile uint32_t x2007 = 15074U;
	volatile uint32_t t39 = 391864U;

	t39 = (x2005*((x2006+x2007)>>x2008));

	if (t39 != 4294966912U) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x2029 = UINT16_MAX;
	static uint32_t x2030 = 2U;
	int32_t x2031 = INT32_MIN;
	uint8_t x2032 = 12U;

	t40 = (x2029*((x2030+x2031)>>x2032));

	if (t40 != 4294443008U) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x2061 = UINT32_MAX;
	int16_t x2062 = 137;
	volatile int8_t x2063 = INT8_MIN;
	static uint8_t x2064 = 0U;
	uint32_t t41 = 1U;

	t41 = (x2061*((x2062+x2063)>>x2064));

	if (t41 != 4294967287U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x2082 = INT64_MAX;
	int64_t x2083 = -1LL;
	int16_t x2084 = 7;
	volatile int64_t t42 = -6737018835905838LL;

	t42 = (x2081*((x2082+x2083)>>x2084));

	if (t42 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x2089 = UINT64_MAX;
	uint32_t x2090 = 3U;
	int8_t x2091 = 2;
	volatile uint64_t t43 = 238526LLU;

	t43 = (x2089*((x2090+x2091)>>x2092));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x2117 = UINT8_MAX;
	int64_t x2118 = INT64_MIN;
	uint64_t x2119 = UINT64_MAX;
	static volatile int8_t x2120 = 10;

	t44 = (x2117*((x2118+x2119)>>x2120));

	if (t44 != 2296835809958952705LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x2149 = INT8_MAX;
	static uint64_t x2150 = 746074LLU;
	uint64_t x2151 = 145965891909135LLU;
	volatile uint64_t t45 = 2464830146898LLU;

	t45 = (x2149*((x2150+x2151)>>x2152));

	if (t45 != 9268834183605708LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x2201 = 1027009U;
	uint8_t x2202 = 9U;
	uint64_t x2203 = UINT64_MAX;
	int8_t x2204 = 1;
	uint64_t t46 = 66713607978372238LLU;

	t46 = (x2201*((x2202+x2203)>>x2204));

	if (t46 != 4108036LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x2341 = UINT32_MAX;
	uint64_t x2343 = UINT64_MAX;
	static int16_t x2344 = 0;
	uint64_t t47 = 934227238023505387LLU;

	t47 = (x2341*((x2342+x2343)>>x2344));

	if (t47 != 9223372032559808513LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x2385 = 107307968LL;
	volatile uint32_t x2386 = 203925U;
	int64_t x2387 = 2762062713LL;
	uint8_t x2388 = 4U;
	volatile int64_t t48 = 7272519514LL;

	t48 = (x2385*((x2386+x2387)>>x2388));

	if (t48 != 18525826155978752LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x2433 = -722;
	volatile int64_t x2434 = -8LL;
	uint16_t x2436 = 0U;
	volatile int64_t t49 = -7296129198LL;

	t49 = (x2433*((x2434+x2435)>>x2436));

	if (t49 != -885116008900LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x2449 = INT64_MIN;
	int32_t x2450 = -1;
	uint64_t x2451 = 855304247521427329LLU;
	static uint64_t t50 = 31831757760851LLU;

	t50 = (x2449*((x2450+x2451)>>x2452));

	if (t50 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x2466 = INT8_MAX;
	uint64_t x2467 = 21LLU;
	uint8_t x2468 = 4U;
	volatile uint64_t t51 = 3856348345LLU;

	t51 = (x2465*((x2466+x2467)>>x2468));

	if (t51 != 464910165LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x2569 = -1;
	uint8_t x2570 = UINT8_MAX;
	static uint64_t x2571 = UINT64_MAX;
	volatile uint16_t x2572 = 30U;

	t52 = (x2569*((x2570+x2571)>>x2572));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x2577 = INT8_MIN;
	int32_t x2579 = -147845;
	uint8_t x2580 = 6U;
	volatile int32_t t53 = 609941679;

	t53 = (x2577*((x2578+x2579)>>x2580));

	if (t53 != -16806784) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x2593 = 47364;
	static int16_t x2594 = INT16_MAX;
	uint8_t x2596 = 28U;
	volatile int64_t t54 = 88689966034779LL;

	t54 = (x2593*((x2594+x2595)>>x2596));

	if (t54 != 2983932LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x2729 = UINT64_MAX;
	uint8_t x2730 = UINT8_MAX;
	static uint64_t x2731 = 1630443272034917263LLU;
	uint64_t t55 = 9820LLU;

	t55 = (x2729*((x2730+x2731)>>x2732));

	if (t55 != 16816300801674634098LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x2777 = 12U;
	uint8_t x2779 = UINT8_MAX;
	uint8_t x2780 = 28U;

	t56 = (x2777*((x2778+x2779)>>x2780));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x2881 = INT16_MIN;
	uint64_t x2884 = 10LLU;
	int64_t t57 = -18467485903947344LL;

	t57 = (x2881*((x2882+x2883)>>x2884));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x2886 = -1;
	int64_t x2888 = 1LL;
	volatile int32_t t58 = -1802;

	t58 = (x2885*((x2886+x2887)>>x2888));

	if (t58 != -2064384) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x2925 = UINT16_MAX;
	int32_t x2926 = 266;
	uint64_t x2927 = 6085016180597569780LLU;
	uint64_t x2928 = 1LLU;
	uint64_t t59 = 670305682165LLU;

	t59 = (x2925*((x2926+x2927)>>x2928));

	if (t59 != 18357749078042616577LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x3129 = 4U;
	int32_t x3130 = -14758005;
	static uint64_t x3131 = UINT64_MAX;
	static int16_t x3132 = 1;
	uint64_t t60 = 1891024275LLU;

	t60 = (x3129*((x3130+x3131)>>x3132));

	if (t60 != 18446744073680035604LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x3213 = 446;
	uint16_t x3214 = UINT16_MAX;
	static volatile int8_t x3215 = -3;
	int32_t t61 = 17;

	t61 = (x3213*((x3214+x3215)>>x3216));

	if (t61 != 29227272) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x3263 = 41591LLU;
	uint8_t x3264 = 5U;
	uint64_t t62 = 6901243176046895LLU;

	t62 = (x3261*((x3262+x3263)>>x3264));

	if (t62 != 18446744073666985984LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x3285 = INT16_MIN;
	int64_t x3287 = -1LL;
	static uint16_t x3288 = 11U;
	volatile int64_t t63 = 1LL;

	t63 = (x3285*((x3286+x3287)>>x3288));

	if (t63 != -491520LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x3327 = 24445553950733LL;
	static volatile uint8_t x3328 = 29U;
	volatile int64_t t64 = 15530735992701LL;

	t64 = (x3325*((x3326+x3327)>>x3328));

	if (t64 != 195562745843235LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x3357 = INT16_MAX;
	int64_t x3358 = 16429LL;
	int8_t x3359 = INT8_MIN;
	uint8_t x3360 = 1U;
	volatile int64_t t65 = 825279LL;

	t65 = (x3357*((x3358+x3359)>>x3360));

	if (t65 != 267051050LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x3513 = -1;
	int8_t x3514 = INT8_MAX;
	int32_t t66 = -166577;

	t66 = (x3513*((x3514+x3515)>>x3516));

	if (t66 != -65662) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x3545 = 242;
	int16_t x3546 = -1;
	int8_t x3547 = INT8_MAX;
	int32_t t67 = -25159674;

	t67 = (x3545*((x3546+x3547)>>x3548));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x3595 = 386LLU;
	uint16_t x3596 = 0U;
	uint64_t t68 = 1895LLU;

	t68 = (x3593*((x3594+x3595)>>x3596));

	if (t68 != 446466LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x3633 = -1;
	int32_t x3634 = INT32_MIN;
	uint32_t x3635 = 894684118U;
	uint32_t x3636 = 28U;
	volatile uint32_t t69 = 79U;

	t69 = (x3633*((x3634+x3635)>>x3636));

	if (t69 != 4294967285U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x3645 = INT8_MIN;
	uint64_t x3648 = 5LLU;
	uint64_t t70 = 4453451LLU;

	t70 = (x3645*((x3646+x3647)>>x3648));

	if (t70 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x3649 = INT8_MAX;
	uint64_t x3650 = 932239692079815LLU;
	volatile uint64_t x3651 = 13154LLU;
	int8_t x3652 = 4;

	t71 = (x3649*((x3650+x3651)>>x3652));

	if (t71 != 7399652555987870LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x3701 = 4U;
	int8_t x3702 = 21;
	static int16_t x3703 = -1;
	static int8_t x3704 = 17;
	int32_t t72 = 3;

	t72 = (x3701*((x3702+x3703)>>x3704));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x3705 = -1;
	int8_t x3706 = INT8_MIN;
	int64_t x3707 = INT64_MAX;
	static volatile int32_t x3708 = 5;
	volatile int64_t t73 = -19909692LL;

	t73 = (x3705*((x3706+x3707)>>x3708));

	if (t73 != -288230376151711739LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x3753 = 2;
	uint8_t x3754 = 59U;
	uint64_t x3755 = 3014392LLU;
	volatile int8_t x3756 = 1;
	volatile uint64_t t74 = 186793614263830LLU;

	t74 = (x3753*((x3754+x3755)>>x3756));

	if (t74 != 3014450LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x3817 = INT8_MAX;
	int64_t x3819 = 41356324872456103LL;
	uint8_t x3820 = 11U;
	int64_t t75 = -24963392LL;

	t75 = (x3817*((x3818+x3819)>>x3820));

	if (t75 != 2564576786524383LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x3877 = -1;
	int8_t x3878 = INT8_MIN;
	static uint32_t x3879 = 1544605U;
	volatile uint8_t x3880 = 1U;
	uint32_t t76 = 186414839U;

	t76 = (x3877*((x3878+x3879)>>x3880));

	if (t76 != 4294195058U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x3938 = 821U;
	volatile int16_t x3939 = INT16_MIN;
	static uint8_t x3940 = 1U;
	static volatile uint32_t t77 = 192455U;

	t77 = (x3937*((x3938+x3939)>>x3940));

	if (t77 != 2147499622U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x4157 = -497931221456LL;
	uint64_t x4158 = UINT64_MAX;
	int8_t x4159 = 0;
	uint16_t x4160 = 9U;
	uint64_t t78 = 0LLU;

	t78 = (x4157*((x4158+x4159)>>x4160));

	if (t78 != 1729382754841491920LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x4169 = UINT64_MAX;
	uint32_t x4170 = 578358337U;
	uint64_t x4171 = 286543010478LLU;
	int8_t x4172 = 0;
	volatile uint64_t t79 = 992LLU;

	t79 = (x4169*((x4170+x4171)>>x4172));

	if (t79 != 18446743786588182801LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x4266 = 36U;
	uint16_t x4267 = 22U;
	static volatile uint8_t x4268 = 14U;

	t80 = (x4265*((x4266+x4267)>>x4268));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x4413 = 906818359551296169LLU;
	volatile int64_t x4414 = 1841890003791LL;
	uint64_t x4415 = 26945125LLU;
	int8_t x4416 = 2;
	uint64_t t81 = 13721030775LLU;

	t81 = (x4413*((x4414+x4415)>>x4416));

	if (t81 != 9867929809958866421LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int16_t x4561 = -5663;
	static int16_t x4562 = -1;
	volatile int32_t t82 = 25807836;

	t82 = (x4561*((x4562+x4563)>>x4564));

	if (t82 != -713538) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x4601 = 3;
	volatile int16_t x4602 = INT16_MIN;
	static int8_t x4604 = 2;
	volatile int64_t t83 = -205082978335LL;

	t83 = (x4601*((x4602+x4603)>>x4604));

	if (t83 != 6917529027641057277LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x4641 = 55259014180875LL;
	static uint32_t x4642 = 316274U;
	int32_t x4643 = -13;
	volatile int8_t x4644 = 4;
	int64_t t84 = -39265005619686LL;

	t84 = (x4641*((x4642+x4643)>>x4644));

	if (t84 != 1092249674299175250LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x4662 = INT32_MIN;
	uint32_t x4663 = 844207816U;
	int16_t x4664 = 8;
	static int64_t t85 = -486LL;

	t85 = (x4661*((x4662+x4663)>>x4664));

	if (t85 != -16851635948LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x4673 = UINT32_MAX;
	uint8_t x4676 = 5U;
	static int64_t t86 = 1LL;

	t86 = (x4673*((x4674+x4675)>>x4676));

	if (t86 != 2353932099621562170LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x4745 = 3703U;
	uint64_t x4746 = UINT64_MAX;
	uint64_t x4747 = 64662080419774892LLU;
	uint8_t x4748 = 0U;
	uint64_t t87 = 76153380450LLU;

	t87 = (x4745*((x4746+x4747)>>x4748));

	if (t87 != 18082754909911801981LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x4821 = INT32_MAX;
	static int32_t x4822 = INT32_MIN;
	uint8_t x4824 = 1U;
	uint32_t t88 = 13726047U;

	t88 = (x4821*((x4822+x4823)>>x4824));

	if (t88 != 1073741825U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x4861 = INT32_MAX;
	int8_t x4862 = 0;
	static uint64_t x4863 = 124589113LLU;

	t89 = (x4861*((x4862+x4863)>>x4864));

	if (t89 != 66888270153562866LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x4902 = 0LL;
	int8_t x4903 = INT8_MAX;
	uint8_t x4904 = 2U;

	t90 = (x4901*((x4902+x4903)>>x4904));

	if (t90 != 1178LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x4977 = INT64_MIN;
	static int32_t x4978 = INT32_MIN;
	uint64_t x4979 = UINT64_MAX;
	volatile int32_t x4980 = 2;
	uint64_t t91 = 992951410431LLU;

	t91 = (x4977*((x4978+x4979)>>x4980));

	if (t91 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x4985 = -34;
	uint16_t x4986 = 1U;
	uint16_t x4987 = 3260U;
	volatile int8_t x4988 = 3;

	t92 = (x4985*((x4986+x4987)>>x4988));

	if (t92 != -13838) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x5009 = 17;
	static int8_t x5010 = 24;
	uint8_t x5012 = 7U;
	int32_t t93 = 85254;

	t93 = (x5009*((x5010+x5011)>>x5012));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x5014 = 17U;
	static volatile uint16_t x5016 = 0U;
	volatile uint32_t t94 = 101922529U;

	t94 = (x5013*((x5014+x5015)>>x5016));

	if (t94 != 4080U) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x5037 = 1088509512129139557LLU;
	volatile int16_t x5038 = -35;
	int16_t x5039 = INT16_MAX;
	volatile uint64_t t95 = 11973025LLU;

	t95 = (x5037*((x5038+x5039)>>x5040));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x5077 = -1;
	int32_t x5078 = -1;
	volatile int16_t x5079 = 25;
	volatile int32_t x5080 = 0;
	int32_t t96 = 36;

	t96 = (x5077*((x5078+x5079)>>x5080));

	if (t96 != -24) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x5097 = INT16_MAX;
	uint32_t x5098 = 13U;
	int64_t x5099 = 1098275557LL;
	int16_t x5100 = 1;
	int64_t t97 = 0LL;

	t97 = (x5097*((x5098+x5099)>>x5100));

	if (t97 != 17993597801095LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x5121 = -127152;
	int32_t x5123 = -1;
	uint16_t x5124 = 17U;
	uint32_t t98 = 1581U;

	t98 = (x5121*((x5122+x5123)>>x5124));

	if (t98 != 128577712U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x5181 = 8;
	static uint32_t x5182 = UINT32_MAX;
	int32_t x5183 = INT32_MIN;
	uint16_t x5184 = 0U;
	volatile uint32_t t99 = 20332550U;

	t99 = (x5181*((x5182+x5183)>>x5184));

	if (t99 != 4294967288U) { NG(); } else { ; }
	
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

