#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x102 = -9;
int8_t x104 = 0;
int64_t x262 = -1LL;
uint32_t x517 = 4U;
volatile uint64_t x534 = 1599790705059LLU;
volatile uint64_t x582 = 451920406955LLU;
int64_t x601 = INT64_MIN;
uint8_t x876 = 12U;
volatile uint64_t t13 = 62015975932581LLU;
uint64_t t15 = 3797LLU;
volatile uint64_t t17 = 706832993000426LLU;
static uint16_t x1230 = UINT16_MAX;
volatile int64_t t21 = 7826077271LL;
uint64_t x1390 = 8708807LLU;
static uint64_t t22 = 4963998772015LLU;
int16_t x1399 = INT16_MAX;
volatile int32_t x1429 = 16101;
int16_t x1430 = INT16_MAX;
static int16_t x1595 = -1;
static volatile int16_t x1657 = INT16_MAX;
volatile int64_t x1757 = INT64_MIN;
int32_t x1759 = INT32_MIN;
static int64_t t29 = -253261LL;
volatile uint8_t x1783 = UINT8_MAX;
static int32_t t30 = 8542;
uint16_t x1815 = UINT16_MAX;
volatile uint64_t t31 = 4384446773336760LLU;
volatile uint32_t t33 = 8235764U;
uint8_t x1974 = UINT8_MAX;
int8_t x2091 = INT8_MIN;
uint32_t x2092 = 1U;
int64_t x2110 = -1LL;
uint32_t x2134 = UINT32_MAX;
volatile int8_t x2135 = INT8_MAX;
uint32_t t38 = 3654113U;
static volatile int32_t t39 = 3;
static int8_t x2251 = INT8_MIN;
static volatile int32_t t40 = 2998;
static int16_t x2299 = INT16_MIN;
uint32_t x2359 = 291754879U;
int64_t x2379 = -1LL;
volatile uint64_t t43 = 216175LLU;
static volatile int32_t t45 = -207637280;
static volatile uint64_t x2531 = 800014887LLU;
static uint64_t x2539 = 15965522LLU;
uint32_t x2793 = 2621U;
uint8_t x2957 = 117U;
int32_t x2989 = 7092;
volatile uint64_t x2990 = 10531LLU;
volatile int8_t x2992 = 1;
int8_t x3000 = 0;
int8_t x3342 = -1;
uint16_t x3431 = 302U;
volatile int32_t t57 = -50;
uint16_t x3439 = UINT16_MAX;
static int64_t t58 = -5588851116LL;
uint8_t x3545 = 91U;
static int32_t x3546 = 1;
volatile int64_t x3547 = 25793567520621LL;
volatile int64_t t61 = -89781304271781806LL;
static int16_t x3550 = INT16_MIN;
static uint32_t t63 = 8U;
uint64_t x3802 = 234518690102922LLU;
volatile uint32_t x3968 = 5U;
int64_t x4009 = -1LL;
static volatile uint32_t x4010 = 1U;
volatile uint8_t x4012 = 17U;
uint64_t x4045 = 23232508LLU;
uint32_t x4047 = 27U;
static uint64_t x4131 = 2LLU;
uint16_t x4132 = 1U;
volatile int64_t t71 = 1LL;
static uint64_t x4206 = 262316955554538371LLU;
int16_t x4449 = INT16_MIN;
static int16_t x4451 = INT16_MIN;
int16_t x4618 = INT16_MIN;
uint16_t x4620 = 14U;
uint64_t t75 = 1LLU;
uint32_t x4790 = 1U;
uint64_t x4894 = UINT64_MAX;
uint16_t x5093 = 2413U;
uint16_t x5274 = 162U;
uint8_t x5275 = 1U;
static uint32_t t83 = 5396U;
int16_t x5355 = INT16_MIN;
int16_t x5549 = -1;
int16_t x5552 = 0;
int64_t x5633 = INT64_MIN;
static int64_t x5635 = 32969451406LL;
int64_t x5690 = 3400385LL;
int16_t x5733 = INT16_MIN;
int16_t x5736 = 5;
int64_t x5933 = -613360305776162LL;
uint16_t x5934 = 1332U;
static uint64_t x5939 = 2065585LLU;
int32_t x6017 = INT32_MAX;
uint8_t x6045 = 2U;
uint32_t x6144 = 3U;
volatile int32_t t97 = 1;
uint8_t x6380 = 0U;


void f0(void) {
	int8_t x13 = 2;
	static int32_t x14 = INT32_MAX;
	static uint64_t x15 = 19128973874949166LLU;
	int32_t x16 = 0;
	uint64_t t0 = 11953860494687LLU;

	t0 = (x13/((x14^x15)<<x16));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x65 = -3;
	uint64_t x66 = 5638945LLU;
	static uint64_t x67 = 102446063981692452LLU;
	uint8_t x68 = 22U;
	static volatile uint64_t t1 = 31942499009684417LLU;

	t1 = (x65/((x66^x67)<<x68));

	if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x101 = -6039771680946LL;
	int8_t x103 = -1;
	static int64_t t2 = -1438831705LL;

	t2 = (x101/((x102^x103)<<x104));

	if (t2 != -754971460118LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x109 = INT32_MIN;
	volatile uint64_t x110 = 17698422444579275LLU;
	static volatile int64_t x111 = INT64_MIN;
	int8_t x112 = 1;
	uint64_t t3 = 10123856201280LLU;

	t3 = (x109/((x110^x111)<<x112));

	if (t3 != 521LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x205 = INT64_MIN;
	int32_t x206 = INT32_MIN;
	static uint64_t x207 = 7729140880LLU;
	uint8_t x208 = 0U;
	volatile uint64_t t4 = 283954LLU;

	t4 = (x205/((x206^x207)<<x208));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x237 = INT16_MAX;
	uint64_t x238 = 38485537222LLU;
	int64_t x239 = INT64_MAX;
	int8_t x240 = 15;
	uint64_t t5 = 468531106111LLU;

	t5 = (x237/((x238^x239)<<x240));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x261 = UINT16_MAX;
	static int64_t x263 = -59627658LL;
	uint16_t x264 = 7U;
	volatile int64_t t6 = -1LL;

	t6 = (x261/((x262^x263)<<x264));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x373 = 5;
	static uint8_t x374 = 2U;
	static int16_t x375 = 43;
	int64_t x376 = 5LL;
	static int32_t t7 = -2178741;

	t7 = (x373/((x374^x375)<<x376));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int64_t x485 = 6408611742072782LL;
	int8_t x486 = INT8_MIN;
	int16_t x487 = INT16_MIN;
	static uint8_t x488 = 3U;
	int64_t t8 = -959647651461LL;

	t8 = (x485/((x486^x487)<<x488));

	if (t8 != 24542783938LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x518 = 3U;
	int64_t x519 = 134834160628LL;
	volatile uint32_t x520 = 0U;
	int64_t t9 = -1747845LL;

	t9 = (x517/((x518^x519)<<x520));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x533 = INT16_MIN;
	uint32_t x535 = UINT32_MAX;
	uint8_t x536 = 6U;
	static volatile uint64_t t10 = 3231LLU;

	t10 = (x533/((x534^x535)<<x536));

	if (t10 != 180148LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x581 = 2;
	uint16_t x583 = 0U;
	uint32_t x584 = 0U;
	uint64_t t11 = 15110671390779871LLU;

	t11 = (x581/((x582^x583)<<x584));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x602 = INT64_MIN;
	static int16_t x603 = -1;
	uint8_t x604 = 0U;
	int64_t t12 = -27194496419544511LL;

	t12 = (x601/((x602^x603)<<x604));

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint8_t x873 = 0U;
	uint64_t x874 = 103811955LLU;
	uint32_t x875 = 793286850U;

	t13 = (x873/((x874^x875)<<x876));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x913 = UINT32_MAX;
	int16_t x914 = INT16_MAX;
	static uint32_t x915 = 1248911U;
	static uint8_t x916 = 21U;
	volatile uint32_t t14 = 29U;

	t14 = (x913/((x914^x915)<<x916));

	if (t14 != 5U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x1057 = -1LL;
	int8_t x1058 = INT8_MIN;
	uint64_t x1059 = 13LLU;
	uint8_t x1060 = 1U;

	t15 = (x1057/((x1058^x1059)<<x1060));

	if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x1077 = -11830;
	static volatile uint32_t x1078 = 22726U;
	uint64_t x1079 = UINT64_MAX;
	uint8_t x1080 = 11U;
	uint64_t t16 = 173LLU;

	t16 = (x1077/((x1078^x1079)<<x1080));

	if (t16 != 1LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1173 = -1;
	uint64_t x1174 = UINT64_MAX;
	volatile uint64_t x1175 = 10297LLU;
	uint8_t x1176 = 1U;

	t17 = (x1173/((x1174^x1175)<<x1176));

	if (t17 != 1LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x1229 = 1795;
	uint64_t x1231 = 1091665015418117214LLU;
	uint8_t x1232 = 0U;
	uint64_t t18 = 89252145717930LLU;

	t18 = (x1229/((x1230^x1231)<<x1232));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x1237 = -403LL;
	int16_t x1238 = INT16_MIN;
	volatile uint32_t x1239 = UINT32_MAX;
	uint16_t x1240 = 2U;
	int64_t t19 = 3425431449421LL;

	t19 = (x1237/((x1238^x1239)<<x1240));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x1269 = 15433444;
	volatile int16_t x1270 = INT16_MAX;
	int32_t x1271 = 41;
	volatile int32_t x1272 = 10;
	int32_t t20 = -8;

	t20 = (x1269/((x1270^x1271)<<x1272));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x1345 = 84695U;
	volatile int64_t x1346 = INT64_MIN;
	int32_t x1347 = -1;
	volatile int8_t x1348 = 0;

	t21 = (x1345/((x1346^x1347)<<x1348));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x1389 = -1;
	volatile int64_t x1391 = INT64_MIN;
	volatile uint16_t x1392 = 0U;

	t22 = (x1389/((x1390^x1391)<<x1392));

	if (t22 != 1LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x1397 = 41210155653420LL;
	static uint16_t x1398 = 10U;
	int8_t x1400 = 3;
	int64_t t23 = 47616328672LL;

	t23 = (x1397/((x1398^x1399)<<x1400));

	if (t23 != 157257058LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x1431 = 371;
	int8_t x1432 = 6;
	volatile int32_t t24 = -194;

	t24 = (x1429/((x1430^x1431)<<x1432));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1481 = INT16_MIN;
	uint64_t x1482 = 2073614452745LLU;
	int8_t x1483 = INT8_MAX;
	static volatile uint16_t x1484 = 39U;
	volatile uint64_t t25 = 2419088LLU;

	t25 = (x1481/((x1482^x1483)<<x1484));

	if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x1545 = INT8_MAX;
	int8_t x1546 = 39;
	uint8_t x1547 = 53U;
	int16_t x1548 = 0;
	volatile int32_t t26 = -19479752;

	t26 = (x1545/((x1546^x1547)<<x1548));

	if (t26 != 7) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1593 = -1;
	int8_t x1594 = INT8_MIN;
	int16_t x1596 = 0;
	volatile int32_t t27 = -122;

	t27 = (x1593/((x1594^x1595)<<x1596));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x1658 = 7441U;
	uint16_t x1659 = 7444U;
	uint8_t x1660 = 0U;
	int32_t t28 = -1657;

	t28 = (x1657/((x1658^x1659)<<x1660));

	if (t28 != 6553) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x1758 = -1LL;
	volatile int32_t x1760 = 0;

	t29 = (x1757/((x1758^x1759)<<x1760));

	if (t29 != -4294967298LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x1781 = UINT16_MAX;
	uint8_t x1782 = 1U;
	uint64_t x1784 = 1LLU;

	t30 = (x1781/((x1782^x1783)<<x1784));

	if (t30 != 129) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1813 = UINT32_MAX;
	uint64_t x1814 = UINT64_MAX;
	static volatile int8_t x1816 = 0;

	t31 = (x1813/((x1814^x1815)<<x1816));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x1929 = INT32_MIN;
	static uint64_t x1930 = 2717417284408330LLU;
	static int32_t x1931 = -1;
	static uint8_t x1932 = 15U;
	volatile uint64_t t32 = 63425LLU;

	t32 = (x1929/((x1930^x1931)<<x1932));

	if (t32 != 5LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1941 = -1;
	static uint32_t x1942 = UINT32_MAX;
	int16_t x1943 = INT16_MIN;
	uint16_t x1944 = 1U;

	t33 = (x1941/((x1942^x1943)<<x1944));

	if (t33 != 65538U) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x1973 = 119690225796269280LL;
	static uint8_t x1975 = 21U;
	static int8_t x1976 = 0;
	volatile int64_t t34 = 13LL;

	t34 = (x1973/((x1974^x1975)<<x1976));

	if (t34 != 511496691437048LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x2041 = 75905U;
	int8_t x2042 = -1;
	int32_t x2043 = -3;
	uint16_t x2044 = 1U;
	uint32_t t35 = 284088984U;

	t35 = (x2041/((x2042^x2043)<<x2044));

	if (t35 != 18976U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x2089 = -68481083242523114LL;
	uint32_t x2090 = 7177466U;
	volatile int64_t t36 = -763017LL;

	t36 = (x2089/((x2090^x2091)<<x2092));

	if (t36 != -15997963LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x2109 = 13840366838LLU;
	int32_t x2111 = INT32_MIN;
	uint8_t x2112 = 1U;
	volatile uint64_t t37 = 26398605473776LLU;

	t37 = (x2109/((x2110^x2111)<<x2112));

	if (t37 != 3LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2133 = INT16_MIN;
	static uint8_t x2136 = 24U;

	t38 = (x2133/((x2134^x2135)<<x2136));

	if (t38 != 1U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2153 = INT8_MIN;
	int16_t x2154 = 0;
	static int16_t x2155 = 198;
	int8_t x2156 = 1;

	t39 = (x2153/((x2154^x2155)<<x2156));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2249 = -1;
	static int8_t x2250 = -31;
	uint64_t x2252 = 13LLU;

	t40 = (x2249/((x2250^x2251)<<x2252));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2297 = INT32_MAX;
	uint64_t x2298 = 19LLU;
	uint8_t x2300 = 7U;
	uint64_t t41 = 134LLU;

	t41 = (x2297/((x2298^x2299)<<x2300));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x2357 = INT16_MIN;
	static int16_t x2358 = -530;
	volatile uint16_t x2360 = 1U;
	volatile uint32_t t42 = 153481072U;

	t42 = (x2357/((x2358^x2359)<<x2360));

	if (t42 != 1U) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x2377 = UINT32_MAX;
	uint64_t x2378 = 408673LLU;
	uint16_t x2380 = 47U;

	t43 = (x2377/((x2378^x2379)<<x2380));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x2409 = INT64_MIN;
	int8_t x2410 = INT8_MAX;
	volatile uint8_t x2411 = 21U;
	int8_t x2412 = 0;
	static volatile int64_t t44 = 2146153232LL;

	t44 = (x2409/((x2410^x2411)<<x2412));

	if (t44 != -87012943743912979LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x2493 = 45U;
	static volatile int16_t x2494 = 7827;
	int16_t x2495 = 119;
	int16_t x2496 = 2;

	t45 = (x2493/((x2494^x2495)<<x2496));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x2529 = INT16_MIN;
	volatile int8_t x2530 = 0;
	static uint8_t x2532 = 24U;
	uint64_t t46 = 24536816391LLU;

	t46 = (x2529/((x2530^x2531)<<x2532));

	if (t46 != 1374LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x2537 = INT32_MAX;
	volatile int8_t x2538 = -5;
	static int8_t x2540 = 0;
	volatile uint64_t t47 = 39481LLU;

	t47 = (x2537/((x2538^x2539)<<x2540));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x2794 = INT64_MAX;
	uint32_t x2795 = UINT32_MAX;
	volatile int16_t x2796 = 0;
	volatile int64_t t48 = -1LL;

	t48 = (x2793/((x2794^x2795)<<x2796));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x2885 = 2104172291U;
	static uint32_t x2886 = UINT32_MAX;
	int16_t x2887 = 13910;
	volatile uint32_t x2888 = 15U;
	uint32_t t49 = 72206U;

	t49 = (x2885/((x2886^x2887)<<x2888));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x2958 = INT8_MIN;
	int32_t x2959 = INT32_MIN;
	uint8_t x2960 = 0U;
	int32_t t50 = -9243296;

	t50 = (x2957/((x2958^x2959)<<x2960));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x2991 = -1;
	volatile uint64_t t51 = 889127LLU;

	t51 = (x2989/((x2990^x2991)<<x2992));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x2997 = -23;
	static int8_t x2998 = INT8_MIN;
	static int16_t x2999 = -1;
	int32_t t52 = 2803;

	t52 = (x2997/((x2998^x2999)<<x3000));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x3049 = -6;
	int16_t x3050 = INT16_MIN;
	int32_t x3051 = -1;
	uint32_t x3052 = 1U;
	static volatile int32_t t53 = 226;

	t53 = (x3049/((x3050^x3051)<<x3052));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x3181 = 37U;
	static int8_t x3182 = INT8_MAX;
	uint16_t x3183 = 21U;
	static int8_t x3184 = 5;
	volatile uint32_t t54 = 23489106U;

	t54 = (x3181/((x3182^x3183)<<x3184));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x3341 = UINT32_MAX;
	int32_t x3343 = -98507;
	int8_t x3344 = 4;
	volatile uint32_t t55 = 532711467U;

	t55 = (x3341/((x3342^x3343)<<x3344));

	if (t55 != 2725U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x3357 = -1;
	uint16_t x3358 = UINT16_MAX;
	uint32_t x3359 = 0U;
	uint8_t x3360 = 12U;
	static volatile uint32_t t56 = 66539993U;

	t56 = (x3357/((x3358^x3359)<<x3360));

	if (t56 != 16U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x3429 = 125U;
	uint8_t x3430 = 0U;
	int32_t x3432 = 1;

	t57 = (x3429/((x3430^x3431)<<x3432));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x3437 = INT64_MAX;
	static volatile uint16_t x3438 = 2352U;
	int8_t x3440 = 12;

	t58 = (x3437/((x3438^x3439)<<x3440));

	if (t58 != 35639330416LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x3469 = 14381;
	volatile uint32_t x3470 = 6U;
	static int32_t x3471 = INT32_MIN;
	int8_t x3472 = 16;
	uint32_t t59 = 7851933U;

	t59 = (x3469/((x3470^x3471)<<x3472));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x3509 = UINT8_MAX;
	uint16_t x3510 = UINT16_MAX;
	static uint64_t x3511 = 8774420226929LLU;
	static int8_t x3512 = 1;
	volatile uint64_t t60 = 11731134777983816LLU;

	t60 = (x3509/((x3510^x3511)<<x3512));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x3548 = 18U;

	t61 = (x3545/((x3546^x3547)<<x3548));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x3549 = 13U;
	volatile uint64_t x3551 = UINT64_MAX;
	volatile int32_t x3552 = 6;
	uint64_t t62 = 3364880799LLU;

	t62 = (x3549/((x3550^x3551)<<x3552));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x3765 = 0;
	int8_t x3766 = INT8_MIN;
	uint32_t x3767 = UINT32_MAX;
	int8_t x3768 = 0;

	t63 = (x3765/((x3766^x3767)<<x3768));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x3801 = 0;
	int64_t x3803 = INT64_MIN;
	uint8_t x3804 = 61U;
	volatile uint64_t t64 = 108602954714516503LLU;

	t64 = (x3801/((x3802^x3803)<<x3804));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x3965 = INT8_MAX;
	volatile int8_t x3966 = INT8_MIN;
	int32_t x3967 = -1;
	int32_t t65 = 9904;

	t65 = (x3965/((x3966^x3967)<<x3968));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x4011 = UINT8_MAX;
	volatile int64_t t66 = -486967629LL;

	t66 = (x4009/((x4010^x4011)<<x4012));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x4046 = INT8_MIN;
	static int8_t x4048 = 6;
	volatile uint64_t t67 = 23330778201127906LLU;

	t67 = (x4045/((x4046^x4047)<<x4048));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x4121 = INT32_MAX;
	uint64_t x4122 = 212105484904440144LLU;
	static uint32_t x4123 = 1259935U;
	uint8_t x4124 = 12U;
	uint64_t t68 = 66651822LLU;

	t68 = (x4121/((x4122^x4123)<<x4124));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x4129 = -1;
	volatile int32_t x4130 = INT32_MIN;
	static uint64_t t69 = 16680927276759127LLU;

	t69 = (x4129/((x4130^x4131)<<x4132));

	if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x4161 = -91275110;
	volatile uint64_t x4162 = 175510871440817992LLU;
	uint16_t x4163 = 1137U;
	static uint32_t x4164 = 54U;
	uint64_t t70 = 1003LLU;

	t70 = (x4161/((x4162^x4163)<<x4164));

	if (t70 != 1LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint32_t x4165 = 3U;
	volatile int64_t x4166 = -1LL;
	int8_t x4167 = INT8_MIN;
	int16_t x4168 = 1;

	t71 = (x4165/((x4166^x4167)<<x4168));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x4205 = 50LLU;
	int64_t x4207 = INT64_MAX;
	volatile uint16_t x4208 = 1U;
	uint64_t t72 = 1931482162LLU;

	t72 = (x4205/((x4206^x4207)<<x4208));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x4385 = 185830168787463LL;
	static uint32_t x4386 = UINT32_MAX;
	int8_t x4387 = INT8_MIN;
	int8_t x4388 = 0;
	static volatile int64_t t73 = -20LL;

	t73 = (x4385/((x4386^x4387)<<x4388));

	if (t73 != 1463229675491LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x4450 = 258745328U;
	volatile uint8_t x4452 = 0U;
	volatile uint32_t t74 = 754686850U;

	t74 = (x4449/((x4450^x4451)<<x4452));

	if (t74 != 1U) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x4617 = 3002527LLU;
	int64_t x4619 = -713LL;

	t75 = (x4617/((x4618^x4619)<<x4620));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x4773 = 1U;
	uint64_t x4774 = 13864266671851695LLU;
	int64_t x4775 = INT64_MIN;
	int32_t x4776 = 0;
	uint64_t t76 = 0LLU;

	t76 = (x4773/((x4774^x4775)<<x4776));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x4789 = 2751120LLU;
	uint64_t x4791 = 1392681839188233434LLU;
	int8_t x4792 = 3;
	uint64_t t77 = 319LLU;

	t77 = (x4789/((x4790^x4791)<<x4792));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x4893 = UINT8_MAX;
	uint16_t x4895 = 131U;
	uint16_t x4896 = 3U;
	uint64_t t78 = 20LLU;

	t78 = (x4893/((x4894^x4895)<<x4896));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x5094 = 1371LLU;
	uint32_t x5095 = 622327U;
	int8_t x5096 = 0;
	volatile uint64_t t79 = 3346LLU;

	t79 = (x5093/((x5094^x5095)<<x5096));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x5209 = -2079707LL;
	int32_t x5210 = -489;
	int32_t x5211 = -1;
	uint32_t x5212 = 2U;
	int64_t t80 = -113047556741LL;

	t80 = (x5209/((x5210^x5211)<<x5212));

	if (t80 != -1065LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x5253 = -9;
	int64_t x5254 = 65926375694852LL;
	int16_t x5255 = INT16_MAX;
	int32_t x5256 = 0;
	static int64_t t81 = 1029051052566LL;

	t81 = (x5253/((x5254^x5255)<<x5256));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x5257 = 187;
	static uint64_t x5258 = UINT64_MAX;
	static volatile int32_t x5259 = INT32_MAX;
	volatile uint16_t x5260 = 5U;
	volatile uint64_t t82 = 240740210241649099LLU;

	t82 = (x5257/((x5258^x5259)<<x5260));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x5273 = 1214708U;
	volatile int32_t x5276 = 0;

	t83 = (x5273/((x5274^x5275)<<x5276));

	if (t83 != 7452U) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x5349 = 4288U;
	int16_t x5350 = -1;
	int32_t x5351 = -775885777;
	int8_t x5352 = 0;
	volatile int32_t t84 = -1887059;

	t84 = (x5349/((x5350^x5351)<<x5352));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x5353 = 33828890LLU;
	int16_t x5354 = -1;
	int16_t x5356 = 1;
	volatile uint64_t t85 = 1880170495976896523LLU;

	t85 = (x5353/((x5354^x5355)<<x5356));

	if (t85 != 516LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x5541 = -29;
	uint64_t x5542 = UINT64_MAX;
	static int32_t x5543 = 31140;
	uint8_t x5544 = 1U;
	volatile uint64_t t86 = 1552089948211LLU;

	t86 = (x5541/((x5542^x5543)<<x5544));

	if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x5550 = INT8_MIN;
	int8_t x5551 = -1;
	static volatile int32_t t87 = -1116;

	t87 = (x5549/((x5550^x5551)<<x5552));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x5634 = INT32_MAX;
	uint16_t x5636 = 12U;
	static int64_t t88 = -1825936656LL;

	t88 = (x5633/((x5634^x5635)<<x5636));

	if (t88 != -67012LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x5669 = INT8_MAX;
	int8_t x5670 = INT8_MAX;
	int16_t x5671 = INT16_MAX;
	uint8_t x5672 = 11U;
	int32_t t89 = -520808962;

	t89 = (x5669/((x5670^x5671)<<x5672));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x5689 = 17;
	volatile int16_t x5691 = INT16_MAX;
	static int64_t x5692 = 0LL;
	static volatile int64_t t90 = 5LL;

	t90 = (x5689/((x5690^x5691)<<x5692));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x5734 = UINT64_MAX;
	int32_t x5735 = INT32_MAX;
	uint64_t t91 = 968570125523LLU;

	t91 = (x5733/((x5734^x5735)<<x5736));

	if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x5935 = INT8_MAX;
	int16_t x5936 = 1;
	int64_t t92 = 3186487893480226LL;

	t92 = (x5933/((x5934^x5935)<<x5936));

	if (t92 != -226332216153LL) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x5937 = -1;
	static uint16_t x5938 = 277U;
	static uint16_t x5940 = 5U;
	volatile uint64_t t93 = 3481598883759LLU;

	t93 = (x5937/((x5938^x5939)<<x5940));

	if (t93 != 279045860692LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x5957 = INT16_MIN;
	int64_t x5958 = INT64_MIN;
	int32_t x5959 = INT32_MIN;
	int8_t x5960 = 0;
	int64_t t94 = -6031185LL;

	t94 = (x5957/((x5958^x5959)<<x5960));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x6018 = 1046U;
	uint16_t x6019 = 3365U;
	uint8_t x6020 = 1U;
	volatile uint32_t t95 = 5643U;

	t95 = (x6017/((x6018^x6019)<<x6020));

	if (t95 != 455941U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x6046 = 1777U;
	static int16_t x6047 = INT16_MIN;
	int8_t x6048 = 1;
	volatile uint32_t t96 = 37U;

	t96 = (x6045/((x6046^x6047)<<x6048));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x6141 = INT8_MAX;
	int8_t x6142 = INT8_MIN;
	int8_t x6143 = -3;

	t97 = (x6141/((x6142^x6143)<<x6144));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x6361 = UINT16_MAX;
	uint64_t x6362 = 3323688381LLU;
	int8_t x6363 = INT8_MAX;
	static int32_t x6364 = 6;
	uint64_t t98 = 4153802347147847799LLU;

	t98 = (x6361/((x6362^x6363)<<x6364));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x6377 = -395862LL;
	static int64_t x6378 = -56LL;
	int8_t x6379 = -1;
	volatile int64_t t99 = 195LL;

	t99 = (x6377/((x6378^x6379)<<x6380));

	if (t99 != -7197LL) { NG(); } else { ; }
	
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

