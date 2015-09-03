#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x129 = UINT32_MAX;
uint16_t x130 = 1U;
uint16_t x131 = UINT16_MAX;
volatile uint32_t t0 = 7197487U;
uint8_t x250 = 16U;
uint64_t x350 = 1LLU;
uint64_t x382 = 12LLU;
static uint64_t t3 = 1568639063LLU;
uint32_t x413 = 98U;
uint64_t x516 = 98315LLU;
uint16_t x615 = 4070U;
int16_t x616 = INT16_MIN;
volatile int16_t x675 = INT16_MIN;
int8_t x731 = -9;
int8_t x758 = 1;
int32_t t12 = 4470;
uint16_t x766 = 0U;
uint32_t x806 = 1U;
int64_t t14 = -3616432818585841LL;
uint8_t x1060 = UINT8_MAX;
uint32_t x1082 = 0U;
static int8_t x1084 = INT8_MIN;
uint8_t x1109 = UINT8_MAX;
static uint32_t x1110 = 1U;
uint8_t x1156 = 117U;
static volatile int16_t x1186 = 3;
int8_t x1187 = -36;
static int32_t t20 = 256;
static uint8_t x1213 = 18U;
volatile uint8_t x1214 = 21U;
uint64_t x1339 = UINT64_MAX;
static uint32_t x1394 = 25U;
volatile uint8_t x1434 = 1U;
uint16_t x1638 = 2U;
uint32_t x1676 = 0U;
uint16_t x1776 = 15U;
static int64_t t31 = -180LL;
int8_t x1801 = 1;
int32_t t33 = -3;
static int8_t x1918 = 18;
volatile uint64_t t35 = 4LLU;
uint64_t x1974 = 2LLU;
static uint16_t x2053 = UINT16_MAX;
volatile int64_t x2055 = INT64_MAX;
volatile int32_t t37 = -561;
uint8_t x2066 = 0U;
volatile int32_t t38 = -20601;
int32_t t39 = 149347;
volatile uint64_t t41 = 305900253043481862LLU;
static int64_t x2268 = -822591LL;
static volatile uint32_t t43 = 63841241U;
int8_t x2306 = 7;
static int8_t x2338 = 21;
int32_t x2339 = 440477;
volatile int64_t x2372 = INT64_MAX;
uint8_t x2489 = 15U;
volatile int32_t t51 = -2;
static int64_t x2724 = INT64_MAX;
static int64_t x2747 = -1LL;
int8_t x2771 = 45;
int8_t x3091 = INT8_MAX;
int64_t t62 = 7540759150726622LL;
uint8_t x3138 = 14U;
uint16_t x3150 = 0U;
int32_t x3152 = -1;
volatile int8_t x3219 = 0;
uint32_t t65 = 366269848U;
uint8_t x3259 = 120U;
uint16_t x3260 = 13U;
volatile uint16_t x3280 = UINT16_MAX;
uint64_t t67 = 2894LLU;
static int32_t x3533 = 285;
volatile uint32_t x3536 = 742U;
uint16_t x3554 = 3U;
static int8_t x3578 = 0;
static volatile int64_t x3579 = INT64_MAX;
volatile int32_t x3580 = INT32_MIN;
uint16_t x3637 = UINT16_MAX;
uint32_t x3638 = 1U;
uint8_t x3698 = 46U;
uint64_t t74 = 63901113LLU;
int16_t x3805 = INT16_MAX;
int8_t x3807 = -1;
uint32_t x3857 = UINT32_MAX;
uint32_t t78 = UINT32_MAX;
uint8_t x4098 = 6U;
volatile int32_t x4220 = -488;
int64_t x4224 = -1LL;
uint64_t x4257 = 476419612781LLU;
static uint8_t x4258 = 2U;
volatile uint64_t t85 = 117LLU;
uint16_t x4483 = 6544U;
volatile int32_t x4484 = 1022;
volatile uint8_t x4496 = UINT8_MAX;
uint8_t x4502 = 1U;
uint16_t x4622 = 4U;
int64_t x4673 = 5407374551385LL;
static uint32_t x4733 = UINT32_MAX;
int8_t x4734 = 1;
int8_t x4735 = -46;
uint32_t t91 = 255611590U;
static uint32_t x4802 = 1U;
static int64_t x4979 = INT64_MIN;
int64_t x5292 = -1LL;
static volatile int16_t x5355 = -1;


void f0(void) {
	int32_t x132 = INT32_MIN;

	t0 = ((x129<<x130)>>(x131<=x132));

	if (t0 != 4294967294U) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x249 = 811853LLU;
	int32_t x251 = -1;
	int64_t x252 = 67012LL;
	volatile uint64_t t1 = 1044037804695LLU;

	t1 = ((x249<<x250)>>(x251<=x252));

	if (t1 != 26602799104LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x349 = INT16_MAX;
	uint16_t x351 = UINT16_MAX;
	int8_t x352 = 0;
	volatile int32_t t2 = 240;

	t2 = ((x349<<x350)>>(x351<=x352));

	if (t2 != 65534) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x381 = UINT64_MAX;
	uint8_t x383 = UINT8_MAX;
	int8_t x384 = 10;

	t3 = ((x381<<x382)>>(x383<=x384));

	if (t3 != 18446744073709547520LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x414 = 3LLU;
	uint16_t x415 = 1781U;
	int32_t x416 = -1;
	static volatile uint32_t t4 = 63757921U;

	t4 = ((x413<<x414)>>(x415<=x416));

	if (t4 != 784U) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x513 = 2690U;
	static volatile int8_t x514 = 1;
	int16_t x515 = -1;
	int32_t t5 = 2506;

	t5 = ((x513<<x514)>>(x515<=x516));

	if (t5 != 5380) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x593 = UINT16_MAX;
	int16_t x594 = 11;
	int8_t x595 = INT8_MAX;
	volatile int64_t x596 = INT64_MIN;
	volatile int32_t t6 = 40;

	t6 = ((x593<<x594)>>(x595<=x596));

	if (t6 != 134215680) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x613 = UINT32_MAX;
	int16_t x614 = 1;
	volatile uint32_t t7 = 406406369U;

	t7 = ((x613<<x614)>>(x615<=x616));

	if (t7 != 4294967294U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x649 = UINT64_MAX;
	uint8_t x650 = 1U;
	int64_t x651 = INT64_MIN;
	uint64_t x652 = UINT64_MAX;
	volatile uint64_t t8 = 663768969193268LLU;

	t8 = ((x649<<x650)>>(x651<=x652));

	if (t8 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x657 = UINT32_MAX;
	static int32_t x658 = 16;
	volatile int8_t x659 = INT8_MIN;
	volatile uint32_t x660 = 123U;
	static uint32_t t9 = 40855618U;

	t9 = ((x657<<x658)>>(x659<=x660));

	if (t9 != 4294901760U) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x673 = 12U;
	uint8_t x674 = 7U;
	int64_t x676 = INT64_MIN;
	int32_t t10 = -163616641;

	t10 = ((x673<<x674)>>(x675<=x676));

	if (t10 != 1536) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x729 = 0;
	static uint16_t x730 = 0U;
	volatile int64_t x732 = 27LL;
	int32_t t11 = 8;

	t11 = ((x729<<x730)>>(x731<=x732));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x757 = UINT8_MAX;
	int64_t x759 = 10460430LL;
	int16_t x760 = INT16_MIN;

	t12 = ((x757<<x758)>>(x759<=x760));

	if (t12 != 510) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x765 = INT64_MAX;
	uint32_t x767 = 90U;
	int64_t x768 = INT64_MAX;
	static volatile int64_t t13 = 131817987193761925LL;

	t13 = ((x765<<x766)>>(x767<=x768));

	if (t13 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x805 = 24420173525643LL;
	int8_t x807 = 1;
	volatile int32_t x808 = -1;

	t14 = ((x805<<x806)>>(x807<=x808));

	if (t14 != 48840347051286LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x1033 = 30841U;
	uint32_t x1034 = 1U;
	static int16_t x1035 = -8;
	int8_t x1036 = 10;
	int32_t t15 = 4;

	t15 = ((x1033<<x1034)>>(x1035<=x1036));

	if (t15 != 30841) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x1057 = 1125LL;
	int32_t x1058 = 2;
	int32_t x1059 = 3197;
	static int64_t t16 = -607521LL;

	t16 = ((x1057<<x1058)>>(x1059<=x1060));

	if (t16 != 4500LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x1081 = 21;
	volatile uint16_t x1083 = 27U;
	int32_t t17 = -1005724527;

	t17 = ((x1081<<x1082)>>(x1083<=x1084));

	if (t17 != 21) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x1111 = 2U;
	int16_t x1112 = INT16_MAX;
	int32_t t18 = 1;

	t18 = ((x1109<<x1110)>>(x1111<=x1112));

	if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1153 = INT8_MAX;
	int8_t x1154 = 7;
	static uint64_t x1155 = 380513109588675202LLU;
	volatile int32_t t19 = 50;

	t19 = ((x1153<<x1154)>>(x1155<=x1156));

	if (t19 != 16256) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1185 = INT16_MAX;
	int32_t x1188 = INT32_MIN;

	t20 = ((x1185<<x1186)>>(x1187<=x1188));

	if (t20 != 262136) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x1215 = INT16_MIN;
	uint32_t x1216 = UINT32_MAX;
	int32_t t21 = -5544;

	t21 = ((x1213<<x1214)>>(x1215<=x1216));

	if (t21 != 18874368) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x1265 = 21;
	uint8_t x1266 = 1U;
	static uint16_t x1267 = UINT16_MAX;
	volatile int16_t x1268 = -1;
	int32_t t22 = -276798;

	t22 = ((x1265<<x1266)>>(x1267<=x1268));

	if (t22 != 42) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x1337 = UINT32_MAX;
	static uint32_t x1338 = 8U;
	uint64_t x1340 = UINT64_MAX;
	uint32_t t23 = 1962428U;

	t23 = ((x1337<<x1338)>>(x1339<=x1340));

	if (t23 != 2147483520U) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x1393 = 40U;
	int64_t x1395 = 2121729495LL;
	static volatile int16_t x1396 = -13;
	int32_t t24 = -1;

	t24 = ((x1393<<x1394)>>(x1395<=x1396));

	if (t24 != 1342177280) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x1433 = 199752505U;
	int64_t x1435 = -76688088323133LL;
	static int64_t x1436 = INT64_MIN;
	static volatile uint32_t t25 = 263900U;

	t25 = ((x1433<<x1434)>>(x1435<=x1436));

	if (t25 != 399505010U) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x1445 = UINT16_MAX;
	volatile int8_t x1446 = 1;
	int32_t x1447 = 184217163;
	uint32_t x1448 = UINT32_MAX;
	int32_t t26 = 452859529;

	t26 = ((x1445<<x1446)>>(x1447<=x1448));

	if (t26 != 65535) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1449 = UINT32_MAX;
	volatile int16_t x1450 = 1;
	volatile int16_t x1451 = 42;
	int16_t x1452 = -1;
	volatile uint32_t t27 = 0U;

	t27 = ((x1449<<x1450)>>(x1451<=x1452));

	if (t27 != 4294967294U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x1597 = 9387829LLU;
	static uint32_t x1598 = 5U;
	uint16_t x1599 = UINT16_MAX;
	volatile int32_t x1600 = INT32_MAX;
	uint64_t t28 = 30374425368419610LLU;

	t28 = ((x1597<<x1598)>>(x1599<=x1600));

	if (t28 != 150205264LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x1637 = UINT16_MAX;
	volatile int64_t x1639 = -1LL;
	volatile uint32_t x1640 = 7874U;
	int32_t t29 = -119;

	t29 = ((x1637<<x1638)>>(x1639<=x1640));

	if (t29 != 131070) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x1673 = INT16_MAX;
	int8_t x1674 = 11;
	volatile int16_t x1675 = -1021;
	static volatile int32_t t30 = -53434869;

	t30 = ((x1673<<x1674)>>(x1675<=x1676));

	if (t30 != 67106816) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1773 = 0LL;
	int8_t x1774 = 1;
	int32_t x1775 = INT32_MIN;

	t31 = ((x1773<<x1774)>>(x1775<=x1776));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1802 = 16LLU;
	uint8_t x1803 = 6U;
	static int16_t x1804 = INT16_MIN;
	volatile int32_t t32 = 331057909;

	t32 = ((x1801<<x1802)>>(x1803<=x1804));

	if (t32 != 65536) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x1857 = 28;
	uint8_t x1858 = 2U;
	uint8_t x1859 = UINT8_MAX;
	uint8_t x1860 = UINT8_MAX;

	t33 = ((x1857<<x1858)>>(x1859<=x1860));

	if (t33 != 56) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x1917 = UINT32_MAX;
	static int64_t x1919 = 3LL;
	int32_t x1920 = -530;
	uint32_t t34 = 16329134U;

	t34 = ((x1917<<x1918)>>(x1919<=x1920));

	if (t34 != 4294705152U) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x1933 = 47221297947867LLU;
	uint64_t x1934 = 3LLU;
	static int8_t x1935 = -1;
	static volatile int8_t x1936 = -1;

	t35 = ((x1933<<x1934)>>(x1935<=x1936));

	if (t35 != 188885191791468LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x1973 = INT16_MAX;
	uint32_t x1975 = 260221089U;
	volatile uint8_t x1976 = UINT8_MAX;
	static volatile int32_t t36 = -4385;

	t36 = ((x1973<<x1974)>>(x1975<=x1976));

	if (t36 != 131068) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x2054 = 0U;
	static uint16_t x2056 = UINT16_MAX;

	t37 = ((x2053<<x2054)>>(x2055<=x2056));

	if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x2065 = 1;
	volatile uint16_t x2067 = 1123U;
	uint8_t x2068 = UINT8_MAX;

	t38 = ((x2065<<x2066)>>(x2067<=x2068));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x2105 = UINT8_MAX;
	static int8_t x2106 = 0;
	static uint8_t x2107 = UINT8_MAX;
	int64_t x2108 = 0LL;

	t39 = ((x2105<<x2106)>>(x2107<=x2108));

	if (t39 != 255) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x2117 = 21291LLU;
	int8_t x2118 = 1;
	int16_t x2119 = INT16_MIN;
	int64_t x2120 = INT64_MIN;
	volatile uint64_t t40 = 535585868900298LLU;

	t40 = ((x2117<<x2118)>>(x2119<=x2120));

	if (t40 != 42582LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x2157 = 1LLU;
	static uint8_t x2158 = 2U;
	int32_t x2159 = INT32_MAX;
	static int16_t x2160 = INT16_MIN;

	t41 = ((x2157<<x2158)>>(x2159<=x2160));

	if (t41 != 4LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x2265 = 261U;
	uint16_t x2266 = 0U;
	int32_t x2267 = INT32_MIN;
	static uint32_t t42 = 3U;

	t42 = ((x2265<<x2266)>>(x2267<=x2268));

	if (t42 != 130U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x2281 = 185771U;
	volatile int32_t x2282 = 0;
	int16_t x2283 = -1;
	uint64_t x2284 = 88172263LLU;

	t43 = ((x2281<<x2282)>>(x2283<=x2284));

	if (t43 != 185771U) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x2285 = UINT16_MAX;
	uint16_t x2286 = 9U;
	static volatile int32_t x2287 = -9402649;
	int16_t x2288 = INT16_MIN;
	volatile int32_t t44 = 101556935;

	t44 = ((x2285<<x2286)>>(x2287<=x2288));

	if (t44 != 16776960) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x2305 = INT8_MAX;
	uint64_t x2307 = UINT64_MAX;
	volatile int16_t x2308 = -1;
	volatile int32_t t45 = -4;

	t45 = ((x2305<<x2306)>>(x2307<=x2308));

	if (t45 != 8128) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x2337 = 459U;
	uint32_t x2340 = UINT32_MAX;
	int32_t t46 = -1308454;

	t46 = ((x2337<<x2338)>>(x2339<=x2340));

	if (t46 != 481296384) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x2369 = UINT64_MAX;
	static int16_t x2370 = 0;
	int8_t x2371 = INT8_MAX;
	uint64_t t47 = 811573263060487396LLU;

	t47 = ((x2369<<x2370)>>(x2371<=x2372));

	if (t47 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x2441 = 2;
	int8_t x2442 = 19;
	int8_t x2443 = INT8_MIN;
	volatile int8_t x2444 = -1;
	volatile int32_t t48 = -4046;

	t48 = ((x2441<<x2442)>>(x2443<=x2444));

	if (t48 != 524288) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x2490 = 0U;
	static int64_t x2491 = -512840LL;
	uint64_t x2492 = 8392332696703LLU;
	int32_t t49 = 68119703;

	t49 = ((x2489<<x2490)>>(x2491<=x2492));

	if (t49 != 15) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x2569 = 2178832130699519380LLU;
	uint8_t x2570 = 25U;
	uint32_t x2571 = 3U;
	int16_t x2572 = -1;
	volatile uint64_t t50 = 318380029LLU;

	t50 = ((x2569<<x2570)>>(x2571<=x2572));

	if (t50 != 5145236566708322304LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x2589 = UINT8_MAX;
	static uint16_t x2590 = 1U;
	volatile int16_t x2591 = INT16_MIN;
	int16_t x2592 = INT16_MAX;

	t51 = ((x2589<<x2590)>>(x2591<=x2592));

	if (t51 != 255) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x2625 = UINT64_MAX;
	uint8_t x2626 = 29U;
	uint8_t x2627 = 2U;
	uint64_t x2628 = 787676LLU;
	volatile uint64_t t52 = 15987408012170LLU;

	t52 = ((x2625<<x2626)>>(x2627<=x2628));

	if (t52 != 9223372036586340352LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x2645 = UINT64_MAX;
	int16_t x2646 = 0;
	uint64_t x2647 = UINT64_MAX;
	uint64_t x2648 = 54792733977741608LLU;
	uint64_t t53 = UINT64_MAX;

	t53 = ((x2645<<x2646)>>(x2647<=x2648));

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x2693 = INT8_MAX;
	int16_t x2694 = 1;
	int32_t x2695 = INT32_MIN;
	volatile int16_t x2696 = 15191;
	static int32_t t54 = 592130;

	t54 = ((x2693<<x2694)>>(x2695<=x2696));

	if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x2721 = 2755498113LLU;
	int16_t x2722 = 13;
	uint32_t x2723 = 630085575U;
	uint64_t t55 = 21589981738LLU;

	t55 = ((x2721<<x2722)>>(x2723<=x2724));

	if (t55 != 11286520270848LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint64_t x2725 = UINT64_MAX;
	uint16_t x2726 = 3U;
	int64_t x2727 = -1LL;
	volatile int16_t x2728 = -23;
	volatile uint64_t t56 = 16330538977036817LLU;

	t56 = ((x2725<<x2726)>>(x2727<=x2728));

	if (t56 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x2745 = UINT8_MAX;
	uint8_t x2746 = 10U;
	int8_t x2748 = INT8_MIN;
	int32_t t57 = -32135224;

	t57 = ((x2745<<x2746)>>(x2747<=x2748));

	if (t57 != 261120) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x2769 = 1774475969689LLU;
	int8_t x2770 = 0;
	volatile int8_t x2772 = INT8_MAX;
	uint64_t t58 = 4036LLU;

	t58 = ((x2769<<x2770)>>(x2771<=x2772));

	if (t58 != 887237984844LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x2857 = 20167U;
	static int8_t x2858 = 0;
	static int16_t x2859 = INT16_MAX;
	static volatile int64_t x2860 = 1036452015LL;
	volatile int32_t t59 = 38472797;

	t59 = ((x2857<<x2858)>>(x2859<=x2860));

	if (t59 != 10083) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x2913 = 62;
	uint8_t x2914 = 21U;
	volatile int16_t x2915 = -1;
	int32_t x2916 = -1;
	volatile int32_t t60 = -52;

	t60 = ((x2913<<x2914)>>(x2915<=x2916));

	if (t60 != 65011712) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x3005 = 1;
	uint8_t x3006 = 0U;
	static uint64_t x3007 = UINT64_MAX;
	int32_t x3008 = INT32_MIN;
	int32_t t61 = -2339;

	t61 = ((x3005<<x3006)>>(x3007<=x3008));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x3089 = 6128676297207LL;
	int16_t x3090 = 3;
	volatile int16_t x3092 = INT16_MIN;

	t62 = ((x3089<<x3090)>>(x3091<=x3092));

	if (t62 != 49029410377656LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x3137 = 190LL;
	int8_t x3139 = -1;
	uint8_t x3140 = UINT8_MAX;
	int64_t t63 = -20507LL;

	t63 = ((x3137<<x3138)>>(x3139<=x3140));

	if (t63 != 1556480LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x3149 = 10U;
	uint64_t x3151 = UINT64_MAX;
	volatile uint32_t t64 = 77U;

	t64 = ((x3149<<x3150)>>(x3151<=x3152));

	if (t64 != 5U) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint32_t x3217 = 168U;
	uint32_t x3218 = 31U;
	int32_t x3220 = INT32_MIN;

	t65 = ((x3217<<x3218)>>(x3219<=x3220));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x3257 = 345708LLU;
	static uint16_t x3258 = 1U;
	volatile uint64_t t66 = 380905349093803LLU;

	t66 = ((x3257<<x3258)>>(x3259<=x3260));

	if (t66 != 691416LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x3277 = 317LLU;
	int8_t x3278 = 1;
	volatile int16_t x3279 = 1;

	t67 = ((x3277<<x3278)>>(x3279<=x3280));

	if (t67 != 317LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x3353 = 1836LLU;
	uint8_t x3354 = 9U;
	uint64_t x3355 = 1213740086LLU;
	static int8_t x3356 = 2;
	volatile uint64_t t68 = 4119741008889LLU;

	t68 = ((x3353<<x3354)>>(x3355<=x3356));

	if (t68 != 940032LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x3465 = UINT8_MAX;
	uint8_t x3466 = 0U;
	static uint8_t x3467 = 51U;
	int16_t x3468 = INT16_MIN;
	static volatile int32_t t69 = -420157993;

	t69 = ((x3465<<x3466)>>(x3467<=x3468));

	if (t69 != 255) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x3534 = 1U;
	static int8_t x3535 = 42;
	static int32_t t70 = -25;

	t70 = ((x3533<<x3534)>>(x3535<=x3536));

	if (t70 != 285) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x3553 = INT16_MAX;
	uint16_t x3555 = 13U;
	static int8_t x3556 = 8;
	static volatile int32_t t71 = -17;

	t71 = ((x3553<<x3554)>>(x3555<=x3556));

	if (t71 != 262136) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x3577 = INT16_MAX;
	int32_t t72 = 2746441;

	t72 = ((x3577<<x3578)>>(x3579<=x3580));

	if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x3639 = INT32_MIN;
	volatile int8_t x3640 = INT8_MIN;
	volatile int32_t t73 = -198;

	t73 = ((x3637<<x3638)>>(x3639<=x3640));

	if (t73 != 65535) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x3697 = UINT64_MAX;
	volatile uint64_t x3699 = 2475LLU;
	static int16_t x3700 = INT16_MAX;

	t74 = ((x3697<<x3698)>>(x3699<=x3700));

	if (t74 != 9223336852482686976LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x3761 = 1;
	int32_t x3762 = 7;
	int64_t x3763 = INT64_MIN;
	static int64_t x3764 = INT64_MIN;
	int32_t t75 = 0;

	t75 = ((x3761<<x3762)>>(x3763<=x3764));

	if (t75 != 64) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x3777 = 773U;
	uint8_t x3778 = 20U;
	volatile int32_t x3779 = -40;
	int16_t x3780 = INT16_MIN;
	int32_t t76 = 30404;

	t76 = ((x3777<<x3778)>>(x3779<=x3780));

	if (t76 != 810549248) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x3806 = 0;
	volatile uint64_t x3808 = 22170LLU;
	volatile int32_t t77 = 5;

	t77 = ((x3805<<x3806)>>(x3807<=x3808));

	if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x3858 = 0;
	uint32_t x3859 = UINT32_MAX;
	static int16_t x3860 = INT16_MAX;

	t78 = ((x3857<<x3858)>>(x3859<=x3860));

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x4093 = UINT64_MAX;
	uint8_t x4094 = 36U;
	int32_t x4095 = -7084;
	int8_t x4096 = INT8_MIN;
	uint64_t t79 = 41293128292464LLU;

	t79 = ((x4093<<x4094)>>(x4095<=x4096));

	if (t79 != 9223372002495037440LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x4097 = 315804530878030LL;
	int32_t x4099 = -3586;
	static volatile uint64_t x4100 = 3LLU;
	int64_t t80 = 62LL;

	t80 = ((x4097<<x4098)>>(x4099<=x4100));

	if (t80 != 20211489976193920LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x4109 = 10;
	static volatile uint8_t x4110 = 1U;
	uint8_t x4111 = UINT8_MAX;
	static int16_t x4112 = -319;
	volatile int32_t t81 = -31;

	t81 = ((x4109<<x4110)>>(x4111<=x4112));

	if (t81 != 20) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x4209 = 3;
	uint8_t x4210 = 29U;
	int64_t x4211 = INT64_MIN;
	uint8_t x4212 = UINT8_MAX;
	int32_t t82 = -12110;

	t82 = ((x4209<<x4210)>>(x4211<=x4212));

	if (t82 != 805306368) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x4217 = 62U;
	int8_t x4218 = 0;
	volatile uint8_t x4219 = 2U;
	static volatile int32_t t83 = -297;

	t83 = ((x4217<<x4218)>>(x4219<=x4220));

	if (t83 != 62) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x4221 = 82;
	uint16_t x4222 = 21U;
	int64_t x4223 = 466792293002LL;
	static int32_t t84 = -10029;

	t84 = ((x4221<<x4222)>>(x4223<=x4224));

	if (t84 != 171966464) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x4259 = 116708U;
	int8_t x4260 = INT8_MIN;

	t85 = ((x4257<<x4258)>>(x4259<=x4260));

	if (t85 != 952839225562LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x4481 = 0;
	int64_t x4482 = 12LL;
	static volatile int32_t t86 = 1;

	t86 = ((x4481<<x4482)>>(x4483<=x4484));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x4493 = INT16_MAX;
	uint8_t x4494 = 9U;
	int32_t x4495 = INT32_MAX;
	volatile int32_t t87 = 962;

	t87 = ((x4493<<x4494)>>(x4495<=x4496));

	if (t87 != 16776704) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint8_t x4501 = 1U;
	static uint16_t x4503 = 345U;
	int16_t x4504 = INT16_MIN;
	volatile int32_t t88 = -253;

	t88 = ((x4501<<x4502)>>(x4503<=x4504));

	if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x4621 = 13047;
	static int32_t x4623 = -1;
	uint8_t x4624 = 27U;
	int32_t t89 = -168763;

	t89 = ((x4621<<x4622)>>(x4623<=x4624));

	if (t89 != 104376) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x4674 = 0;
	static uint64_t x4675 = UINT64_MAX;
	int8_t x4676 = 0;
	int64_t t90 = 1436391446472535LL;

	t90 = ((x4673<<x4674)>>(x4675<=x4676));

	if (t90 != 5407374551385LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x4736 = 7594U;

	t91 = ((x4733<<x4734)>>(x4735<=x4736));

	if (t91 != 2147483647U) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x4801 = UINT32_MAX;
	int8_t x4803 = INT8_MIN;
	volatile int8_t x4804 = INT8_MAX;
	uint32_t t92 = 14895U;

	t92 = ((x4801<<x4802)>>(x4803<=x4804));

	if (t92 != 2147483647U) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x4897 = 502LL;
	volatile uint16_t x4898 = 43U;
	int16_t x4899 = -8693;
	int64_t x4900 = INT64_MIN;
	int64_t t93 = 100270824697LL;

	t93 = ((x4897<<x4898)>>(x4899<=x4900));

	if (t93 != 4415638697148416LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x4977 = UINT8_MAX;
	volatile uint16_t x4978 = 6U;
	int32_t x4980 = -47;
	volatile int32_t t94 = 582454087;

	t94 = ((x4977<<x4978)>>(x4979<=x4980));

	if (t94 != 8160) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x5121 = 355U;
	uint8_t x5122 = 22U;
	volatile int32_t x5123 = INT32_MIN;
	int64_t x5124 = INT64_MIN;
	volatile int32_t t95 = -1;

	t95 = ((x5121<<x5122)>>(x5123<=x5124));

	if (t95 != 1488977920) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x5221 = 1;
	uint8_t x5222 = 0U;
	int16_t x5223 = -1;
	uint16_t x5224 = 10267U;
	static volatile int32_t t96 = -144;

	t96 = ((x5221<<x5222)>>(x5223<=x5224));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x5289 = UINT8_MAX;
	int8_t x5290 = 3;
	volatile int64_t x5291 = INT64_MIN;
	volatile int32_t t97 = -12;

	t97 = ((x5289<<x5290)>>(x5291<=x5292));

	if (t97 != 1020) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x5353 = 418195509226LL;
	volatile int32_t x5354 = 2;
	int64_t x5356 = INT64_MAX;
	int64_t t98 = -300815586LL;

	t98 = ((x5353<<x5354)>>(x5355<=x5356));

	if (t98 != 836391018452LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x5497 = UINT16_MAX;
	volatile uint64_t x5498 = 11LLU;
	uint16_t x5499 = UINT16_MAX;
	int64_t x5500 = INT64_MAX;
	volatile int32_t t99 = 11000566;

	t99 = ((x5497<<x5498)>>(x5499<=x5500));

	if (t99 != 67107840) { NG(); } else { ; }
	
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

