#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint16_t x133 = 316U;
int8_t x136 = INT8_MAX;
uint32_t x153 = 1U;
volatile int8_t x186 = 0;
static uint8_t x188 = 39U;
static int32_t x235 = INT32_MIN;
static volatile uint16_t x441 = 108U;
static uint8_t x442 = 3U;
int64_t x472 = INT64_MIN;
int32_t x497 = INT32_MAX;
volatile int32_t t8 = -127;
volatile int8_t x514 = 1;
volatile int32_t x516 = INT32_MAX;
int16_t x673 = INT16_MAX;
uint8_t x674 = 4U;
int16_t x675 = INT16_MAX;
int64_t x957 = 255739LL;
uint8_t x958 = 8U;
volatile uint32_t x1049 = 26477U;
volatile uint32_t t17 = 1163211131U;
int16_t x1077 = 2;
uint8_t x1078 = 1U;
static volatile int32_t t18 = 226056650;
static int64_t x1103 = 7324367392LL;
int32_t x1139 = 25891;
uint16_t x1140 = UINT16_MAX;
int8_t x1214 = 17;
int32_t x1216 = INT32_MIN;
uint64_t x1229 = UINT64_MAX;
static volatile uint64_t t22 = UINT64_MAX;
static volatile int32_t t23 = 1756;
uint64_t t24 = UINT64_MAX;
uint32_t x1284 = UINT32_MAX;
int8_t x1365 = 1;
uint32_t x1447 = 171506U;
int16_t x1448 = INT16_MAX;
int8_t x1534 = 2;
static int64_t x1559 = 394995256831129776LL;
static volatile uint16_t x1561 = UINT16_MAX;
volatile int32_t t31 = -3;
uint32_t t32 = 62365U;
uint16_t x1710 = 9U;
volatile int32_t t33 = -3356;
int64_t x1716 = -56456662513681LL;
uint16_t x1802 = 6U;
uint8_t x1877 = 2U;
int64_t x1878 = 0LL;
int64_t x1880 = -1LL;
uint8_t x1901 = 9U;
volatile int32_t t37 = -5918616;
int8_t x2048 = INT8_MAX;
int32_t x2121 = 14;
volatile int64_t x2124 = INT64_MAX;
int32_t t40 = 14394;
uint32_t x2150 = 3U;
int16_t x2532 = -1;
volatile uint16_t x2575 = 40U;
volatile int64_t x2584 = INT64_MAX;
static int16_t x2624 = INT16_MIN;
uint16_t x2694 = 4U;
uint16_t x2695 = 8U;
volatile int8_t x2696 = INT8_MAX;
int32_t x2722 = 3;
volatile int32_t x2723 = -1;
volatile uint64_t t50 = 507495594622396LLU;
uint8_t x2741 = 1U;
volatile uint16_t x2742 = 3U;
volatile uint64_t x2743 = 149430985211LLU;
static int16_t x2744 = INT16_MIN;
static int16_t x2822 = 51;
static uint8_t x2881 = UINT8_MAX;
uint16_t x2918 = 0U;
volatile int32_t t55 = -529570279;
int16_t x3080 = INT16_MIN;
int8_t x3161 = INT8_MAX;
uint32_t x3192 = 20U;
uint32_t t61 = 365U;
static uint32_t x3389 = UINT32_MAX;
int8_t x3391 = INT8_MIN;
uint16_t x3709 = 0U;
static int16_t x3711 = -1;
volatile int32_t t68 = -51;
uint16_t x3977 = UINT16_MAX;
int32_t x3984 = INT32_MIN;
volatile int32_t t74 = -297;
int32_t x4232 = INT32_MIN;
static volatile int16_t x4483 = -1;
volatile uint64_t t81 = 1431034936342LLU;
int64_t x4605 = INT64_MAX;
uint32_t x4606 = 17U;
int8_t x4733 = INT8_MAX;
volatile uint64_t x4734 = 21LLU;
int32_t x4736 = -412;
static uint8_t x4882 = 1U;
volatile int64_t x4883 = INT64_MIN;
volatile uint32_t x4986 = 6U;
int8_t x5318 = 0;
uint64_t x5365 = 300959875LLU;
int64_t x5384 = -1LL;
static uint32_t x5423 = 4921461U;
volatile uint64_t t93 = 88547LLU;
int16_t x5445 = 1;
int32_t x5447 = 15918;
uint8_t x5494 = 2U;
volatile uint8_t x5502 = 7U;
static volatile int32_t t97 = 7;
volatile uint64_t t99 = 48392122136LLU;


void f0(void) {
	static uint32_t x129 = 72286U;
	static uint16_t x130 = 0U;
	static int16_t x131 = 7;
	static int64_t x132 = INT64_MAX;
	uint32_t t0 = 1969674576U;

	t0 = ((x129>>x130)^(x131<x132));

	if (t0 != 72287U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x134 = 0;
	int8_t x135 = INT8_MIN;
	volatile int32_t t1 = 2;

	t1 = ((x133>>x134)^(x135<x136));

	if (t1 != 317) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x154 = 1;
	static uint8_t x155 = 7U;
	uint16_t x156 = 9U;
	static uint32_t t2 = 52347407U;

	t2 = ((x153>>x154)^(x155<x156));

	if (t2 != 1U) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x185 = 10905;
	uint16_t x187 = UINT16_MAX;
	volatile int32_t t3 = -485;

	t3 = ((x185>>x186)^(x187<x188));

	if (t3 != 10905) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x221 = UINT8_MAX;
	uint64_t x222 = 3LLU;
	static volatile int32_t x223 = INT32_MIN;
	uint8_t x224 = 3U;
	int32_t t4 = 366556;

	t4 = ((x221>>x222)^(x223<x224));

	if (t4 != 30) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x233 = INT64_MAX;
	uint32_t x234 = 1U;
	int8_t x236 = INT8_MAX;
	volatile int64_t t5 = -3993262LL;

	t5 = ((x233>>x234)^(x235<x236));

	if (t5 != 4611686018427387902LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x443 = UINT64_MAX;
	uint64_t x444 = UINT64_MAX;
	static volatile int32_t t6 = 12;

	t6 = ((x441>>x442)^(x443<x444));

	if (t6 != 13) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x469 = 121717370015LL;
	uint8_t x470 = 26U;
	uint16_t x471 = 3481U;
	int64_t t7 = -6789655279763LL;

	t7 = ((x469>>x470)^(x471<x472));

	if (t7 != 1813LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x498 = 3U;
	volatile int8_t x499 = INT8_MAX;
	static uint16_t x500 = 26U;

	t8 = ((x497>>x498)^(x499<x500));

	if (t8 != 268435455) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x513 = 1;
	uint32_t x515 = 1U;
	volatile int32_t t9 = -14468742;

	t9 = ((x513>>x514)^(x515<x516));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x617 = INT16_MAX;
	static uint32_t x618 = 25U;
	int16_t x619 = -1;
	int32_t x620 = 398368;
	static volatile int32_t t10 = 9868555;

	t10 = ((x617>>x618)^(x619<x620));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x621 = 1U;
	uint16_t x622 = 23U;
	int8_t x623 = -1;
	uint8_t x624 = 126U;
	volatile int32_t t11 = -8541302;

	t11 = ((x621>>x622)^(x623<x624));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x676 = 46470842745LLU;
	volatile int32_t t12 = 29;

	t12 = ((x673>>x674)^(x675<x676));

	if (t12 != 2046) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x769 = 2007237574LLU;
	static volatile uint8_t x770 = 1U;
	volatile int32_t x771 = -151;
	int64_t x772 = INT64_MIN;
	volatile uint64_t t13 = 96959706046LLU;

	t13 = ((x769>>x770)^(x771<x772));

	if (t13 != 1003618787LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x777 = 8515752668LL;
	volatile int8_t x778 = 1;
	uint16_t x779 = 888U;
	int16_t x780 = INT16_MIN;
	int64_t t14 = 1543LL;

	t14 = ((x777>>x778)^(x779<x780));

	if (t14 != 4257876334LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x921 = 0;
	uint8_t x922 = 6U;
	int8_t x923 = -1;
	int8_t x924 = -1;
	static int32_t t15 = -3601;

	t15 = ((x921>>x922)^(x923<x924));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x959 = UINT8_MAX;
	uint16_t x960 = UINT16_MAX;
	static int64_t t16 = -1410518529482LL;

	t16 = ((x957>>x958)^(x959<x960));

	if (t16 != 999LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x1050 = 10U;
	int64_t x1051 = -1LL;
	int8_t x1052 = 1;

	t17 = ((x1049>>x1050)^(x1051<x1052));

	if (t17 != 24U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x1079 = -1;
	static int64_t x1080 = INT64_MIN;

	t18 = ((x1077>>x1078)^(x1079<x1080));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1101 = 24126011LLU;
	volatile uint8_t x1102 = 13U;
	int16_t x1104 = INT16_MAX;
	uint64_t t19 = 5301773673LLU;

	t19 = ((x1101>>x1102)^(x1103<x1104));

	if (t19 != 2945LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x1137 = 18109;
	int8_t x1138 = 1;
	static int32_t t20 = 0;

	t20 = ((x1137>>x1138)^(x1139<x1140));

	if (t20 != 9055) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1213 = 12U;
	int8_t x1215 = -1;
	volatile uint32_t t21 = 885U;

	t21 = ((x1213>>x1214)^(x1215<x1216));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x1230 = 0U;
	int32_t x1231 = INT32_MIN;
	static int64_t x1232 = INT64_MIN;

	t22 = ((x1229>>x1230)^(x1231<x1232));

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1233 = 1945U;
	static uint16_t x1234 = 27U;
	uint64_t x1235 = UINT64_MAX;
	uint8_t x1236 = UINT8_MAX;

	t23 = ((x1233>>x1234)^(x1235<x1236));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x1269 = UINT64_MAX;
	int32_t x1270 = 0;
	int32_t x1271 = INT32_MAX;
	int16_t x1272 = -314;

	t24 = ((x1269>>x1270)^(x1271<x1272));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x1281 = 856497272387885LLU;
	static volatile int8_t x1282 = 20;
	int32_t x1283 = INT32_MIN;
	uint64_t t25 = 7675887965LLU;

	t25 = ((x1281>>x1282)^(x1283<x1284));

	if (t25 != 816819451LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x1366 = 14;
	int64_t x1367 = INT64_MAX;
	uint32_t x1368 = 15U;
	int32_t t26 = 11959610;

	t26 = ((x1365>>x1366)^(x1367<x1368));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1433 = INT64_MAX;
	uint16_t x1434 = 1U;
	uint64_t x1435 = 19063052595940451LLU;
	int32_t x1436 = INT32_MIN;
	static int64_t t27 = 365291788307083949LL;

	t27 = ((x1433>>x1434)^(x1435<x1436));

	if (t27 != 4611686018427387902LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x1445 = 28413280;
	int8_t x1446 = 1;
	volatile int32_t t28 = -763;

	t28 = ((x1445>>x1446)^(x1447<x1448));

	if (t28 != 14206640) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x1533 = UINT32_MAX;
	static uint64_t x1535 = 78464LLU;
	int64_t x1536 = INT64_MIN;
	volatile uint32_t t29 = 5639U;

	t29 = ((x1533>>x1534)^(x1535<x1536));

	if (t29 != 1073741822U) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x1557 = 16U;
	int16_t x1558 = 0;
	int8_t x1560 = -1;
	int32_t t30 = 95635;

	t30 = ((x1557>>x1558)^(x1559<x1560));

	if (t30 != 16) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1562 = 3;
	int16_t x1563 = -230;
	int8_t x1564 = -1;

	t31 = ((x1561>>x1562)^(x1563<x1564));

	if (t31 != 8190) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1601 = 29164U;
	uint8_t x1602 = 0U;
	int16_t x1603 = INT16_MAX;
	int32_t x1604 = -1013781;

	t32 = ((x1601>>x1602)^(x1603<x1604));

	if (t32 != 29164U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1709 = 0;
	volatile int32_t x1711 = INT32_MAX;
	volatile int32_t x1712 = INT32_MAX;

	t33 = ((x1709>>x1710)^(x1711<x1712));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x1713 = 17U;
	uint32_t x1714 = 3U;
	volatile uint16_t x1715 = 42U;
	volatile uint32_t t34 = 70U;

	t34 = ((x1713>>x1714)^(x1715<x1716));

	if (t34 != 2U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x1801 = UINT8_MAX;
	static volatile uint32_t x1803 = UINT32_MAX;
	int8_t x1804 = INT8_MAX;
	int32_t t35 = -813735771;

	t35 = ((x1801>>x1802)^(x1803<x1804));

	if (t35 != 3) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x1879 = INT64_MIN;
	int32_t t36 = 252998107;

	t36 = ((x1877>>x1878)^(x1879<x1880));

	if (t36 != 3) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x1902 = 0U;
	int64_t x1903 = -4882LL;
	uint16_t x1904 = 82U;

	t37 = ((x1901>>x1902)^(x1903<x1904));

	if (t37 != 8) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x1909 = 3743748U;
	uint32_t x1910 = 0U;
	int16_t x1911 = INT16_MAX;
	int8_t x1912 = 1;
	volatile uint32_t t38 = 2510307U;

	t38 = ((x1909>>x1910)^(x1911<x1912));

	if (t38 != 3743748U) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x2045 = UINT64_MAX;
	static volatile int32_t x2046 = 1;
	int64_t x2047 = -519863352107LL;
	static volatile uint64_t t39 = 47783LLU;

	t39 = ((x2045>>x2046)^(x2047<x2048));

	if (t39 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x2122 = 1U;
	uint32_t x2123 = UINT32_MAX;

	t40 = ((x2121>>x2122)^(x2123<x2124));

	if (t40 != 6) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x2141 = 832U;
	uint16_t x2142 = 30U;
	uint16_t x2143 = 1U;
	volatile int64_t x2144 = INT64_MAX;
	volatile uint32_t t41 = 1095533U;

	t41 = ((x2141>>x2142)^(x2143<x2144));

	if (t41 != 1U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x2149 = 113532151LL;
	static int8_t x2151 = -1;
	volatile int8_t x2152 = 1;
	volatile int64_t t42 = -136247599LL;

	t42 = ((x2149>>x2150)^(x2151<x2152));

	if (t42 != 14191519LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x2405 = 1U;
	uint16_t x2406 = 18U;
	volatile uint8_t x2407 = UINT8_MAX;
	int16_t x2408 = INT16_MIN;
	volatile int32_t t43 = 1703227;

	t43 = ((x2405>>x2406)^(x2407<x2408));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int64_t x2529 = 8LL;
	static volatile int8_t x2530 = 4;
	volatile int8_t x2531 = INT8_MIN;
	volatile int64_t t44 = 95575772LL;

	t44 = ((x2529>>x2530)^(x2531<x2532));

	if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x2573 = 1;
	int32_t x2574 = 4;
	volatile int8_t x2576 = -6;
	volatile int32_t t45 = 31572;

	t45 = ((x2573>>x2574)^(x2575<x2576));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x2581 = INT32_MAX;
	int8_t x2582 = 1;
	volatile uint16_t x2583 = UINT16_MAX;
	volatile int32_t t46 = -400459;

	t46 = ((x2581>>x2582)^(x2583<x2584));

	if (t46 != 1073741822) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x2621 = 36;
	uint32_t x2622 = 7U;
	int64_t x2623 = INT64_MIN;
	int32_t t47 = -3875;

	t47 = ((x2621>>x2622)^(x2623<x2624));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x2693 = INT8_MAX;
	volatile int32_t t48 = 0;

	t48 = ((x2693>>x2694)^(x2695<x2696));

	if (t48 != 6) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x2721 = 4U;
	int64_t x2724 = 88189711335027LL;
	volatile int32_t t49 = 0;

	t49 = ((x2721>>x2722)^(x2723<x2724));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x2737 = 161125LLU;
	int8_t x2738 = 0;
	uint64_t x2739 = UINT64_MAX;
	uint32_t x2740 = 112U;

	t50 = ((x2737>>x2738)^(x2739<x2740));

	if (t50 != 161125LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t t51 = 1;

	t51 = ((x2741>>x2742)^(x2743<x2744));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x2821 = UINT64_MAX;
	volatile uint64_t x2823 = 44407400LLU;
	int64_t x2824 = -1LL;
	static volatile uint64_t t52 = 1296639LLU;

	t52 = ((x2821>>x2822)^(x2823<x2824));

	if (t52 != 8190LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x2882 = 30U;
	uint8_t x2883 = 32U;
	uint8_t x2884 = UINT8_MAX;
	static volatile int32_t t53 = -3642826;

	t53 = ((x2881>>x2882)^(x2883<x2884));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x2917 = 368068605308563644LL;
	int16_t x2919 = INT16_MAX;
	int8_t x2920 = 1;
	static volatile int64_t t54 = 27LL;

	t54 = ((x2917>>x2918)^(x2919<x2920));

	if (t54 != 368068605308563644LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x2921 = 2607U;
	static volatile int8_t x2922 = 6;
	int32_t x2923 = 1;
	int8_t x2924 = -1;

	t55 = ((x2921>>x2922)^(x2923<x2924));

	if (t55 != 40) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x3029 = UINT64_MAX;
	static uint8_t x3030 = 21U;
	int32_t x3031 = -1;
	volatile int8_t x3032 = INT8_MAX;
	uint64_t t56 = 51LLU;

	t56 = ((x3029>>x3030)^(x3031<x3032));

	if (t56 != 8796093022206LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x3077 = 0U;
	uint8_t x3078 = 1U;
	int64_t x3079 = INT64_MIN;
	int32_t t57 = 2701167;

	t57 = ((x3077>>x3078)^(x3079<x3080));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x3162 = 22;
	uint32_t x3163 = 299U;
	uint16_t x3164 = UINT16_MAX;
	volatile int32_t t58 = -230304549;

	t58 = ((x3161>>x3162)^(x3163<x3164));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x3189 = 199255234935755LLU;
	uint16_t x3190 = 12U;
	static uint64_t x3191 = UINT64_MAX;
	static uint64_t t59 = 2051414875839875199LLU;

	t59 = ((x3189>>x3190)^(x3191<x3192));

	if (t59 != 48646297591LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x3209 = 438790724LLU;
	uint32_t x3210 = 1U;
	static int32_t x3211 = INT32_MAX;
	int32_t x3212 = INT32_MAX;
	uint64_t t60 = 232768219912221717LLU;

	t60 = ((x3209>>x3210)^(x3211<x3212));

	if (t60 != 219395362LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x3345 = 1637487U;
	static uint8_t x3346 = 3U;
	int16_t x3347 = INT16_MIN;
	int16_t x3348 = 26;

	t61 = ((x3345>>x3346)^(x3347<x3348));

	if (t61 != 204684U) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x3365 = UINT16_MAX;
	int16_t x3366 = 3;
	volatile uint64_t x3367 = UINT64_MAX;
	volatile int16_t x3368 = INT16_MIN;
	volatile int32_t t62 = 407883777;

	t62 = ((x3365>>x3366)^(x3367<x3368));

	if (t62 != 8191) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x3390 = 16U;
	uint16_t x3392 = UINT16_MAX;
	volatile uint32_t t63 = 14171U;

	t63 = ((x3389>>x3390)^(x3391<x3392));

	if (t63 != 65534U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x3497 = INT32_MAX;
	int16_t x3498 = 7;
	volatile int8_t x3499 = 34;
	volatile uint32_t x3500 = 9532608U;
	volatile int32_t t64 = -221;

	t64 = ((x3497>>x3498)^(x3499<x3500));

	if (t64 != 16777214) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x3597 = UINT64_MAX;
	int16_t x3598 = 3;
	int64_t x3599 = INT64_MAX;
	uint64_t x3600 = UINT64_MAX;
	static volatile uint64_t t65 = 55389458719987LLU;

	t65 = ((x3597>>x3598)^(x3599<x3600));

	if (t65 != 2305843009213693950LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x3710 = 18U;
	static volatile uint32_t x3712 = UINT32_MAX;
	int32_t t66 = -357;

	t66 = ((x3709>>x3710)^(x3711<x3712));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x3729 = 1U;
	int8_t x3730 = 1;
	int64_t x3731 = -59799212389672LL;
	int32_t x3732 = -61644117;
	int32_t t67 = -23;

	t67 = ((x3729>>x3730)^(x3731<x3732));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x3781 = 897U;
	static int32_t x3782 = 3;
	int64_t x3783 = 3641487494620LL;
	int16_t x3784 = 3;

	t68 = ((x3781>>x3782)^(x3783<x3784));

	if (t68 != 112) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x3785 = 0U;
	volatile int8_t x3786 = 2;
	uint32_t x3787 = UINT32_MAX;
	int16_t x3788 = -419;
	int32_t t69 = 408;

	t69 = ((x3785>>x3786)^(x3787<x3788));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x3869 = 13881190LLU;
	uint8_t x3870 = 8U;
	int32_t x3871 = -1192031;
	int64_t x3872 = INT64_MAX;
	uint64_t t70 = 241794054180352LLU;

	t70 = ((x3869>>x3870)^(x3871<x3872));

	if (t70 != 54222LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x3933 = 1;
	int8_t x3934 = 0;
	uint8_t x3935 = 1U;
	uint16_t x3936 = 836U;
	volatile int32_t t71 = -1;

	t71 = ((x3933>>x3934)^(x3935<x3936));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x3978 = 2U;
	int16_t x3979 = -1;
	int32_t x3980 = -1;
	int32_t t72 = 0;

	t72 = ((x3977>>x3978)^(x3979<x3980));

	if (t72 != 16383) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x3981 = 14;
	int16_t x3982 = 0;
	static int16_t x3983 = INT16_MAX;
	int32_t t73 = 2608;

	t73 = ((x3981>>x3982)^(x3983<x3984));

	if (t73 != 14) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x4021 = 1493;
	int8_t x4022 = 0;
	static int16_t x4023 = INT16_MIN;
	uint64_t x4024 = 1500611694609377176LLU;

	t74 = ((x4021>>x4022)^(x4023<x4024));

	if (t74 != 1493) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x4133 = 6;
	static uint16_t x4134 = 5U;
	int16_t x4135 = 4;
	int32_t x4136 = -1;
	int32_t t75 = 115;

	t75 = ((x4133>>x4134)^(x4135<x4136));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x4149 = INT8_MAX;
	int8_t x4150 = 4;
	static volatile int16_t x4151 = INT16_MAX;
	int16_t x4152 = -1;
	volatile int32_t t76 = -128227558;

	t76 = ((x4149>>x4150)^(x4151<x4152));

	if (t76 != 7) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x4177 = INT8_MAX;
	int8_t x4178 = 1;
	int16_t x4179 = INT16_MIN;
	int64_t x4180 = INT64_MIN;
	static int32_t t77 = -368;

	t77 = ((x4177>>x4178)^(x4179<x4180));

	if (t77 != 63) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x4229 = INT8_MAX;
	int16_t x4230 = 2;
	uint64_t x4231 = UINT64_MAX;
	volatile int32_t t78 = -122245094;

	t78 = ((x4229>>x4230)^(x4231<x4232));

	if (t78 != 31) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x4237 = 37703896010738LL;
	static uint16_t x4238 = 2U;
	int64_t x4239 = 1419LL;
	uint64_t x4240 = 400004291LLU;
	volatile int64_t t79 = 10727LL;

	t79 = ((x4237>>x4238)^(x4239<x4240));

	if (t79 != 9425974002685LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x4481 = 4614399U;
	uint8_t x4482 = 3U;
	uint32_t x4484 = 364U;
	volatile uint32_t t80 = 14U;

	t80 = ((x4481>>x4482)^(x4483<x4484));

	if (t80 != 576799U) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x4493 = 155367660576LLU;
	int8_t x4494 = 47;
	uint16_t x4495 = 14305U;
	uint32_t x4496 = 615080035U;

	t81 = ((x4493>>x4494)^(x4495<x4496));

	if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x4607 = 5112919222549167LLU;
	uint16_t x4608 = 1U;
	volatile int64_t t82 = 97LL;

	t82 = ((x4605>>x4606)^(x4607<x4608));

	if (t82 != 70368744177663LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x4629 = 2;
	static uint16_t x4630 = 0U;
	uint8_t x4631 = 17U;
	int8_t x4632 = INT8_MIN;
	static int32_t t83 = -344223658;

	t83 = ((x4629>>x4630)^(x4631<x4632));

	if (t83 != 2) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x4657 = 7198U;
	uint8_t x4658 = 3U;
	int32_t x4659 = 16499;
	int16_t x4660 = INT16_MIN;
	volatile int32_t t84 = 461147249;

	t84 = ((x4657>>x4658)^(x4659<x4660));

	if (t84 != 899) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x4681 = INT16_MAX;
	int8_t x4682 = 4;
	volatile int8_t x4683 = INT8_MAX;
	uint16_t x4684 = UINT16_MAX;
	int32_t t85 = 7173583;

	t85 = ((x4681>>x4682)^(x4683<x4684));

	if (t85 != 2046) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x4735 = 2903704LLU;
	volatile int32_t t86 = -52478024;

	t86 = ((x4733>>x4734)^(x4735<x4736));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint32_t x4881 = 1183497606U;
	int8_t x4884 = INT8_MIN;
	uint32_t t87 = 2U;

	t87 = ((x4881>>x4882)^(x4883<x4884));

	if (t87 != 591748802U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x4985 = INT8_MAX;
	volatile int32_t x4987 = INT32_MIN;
	uint32_t x4988 = 33099U;
	volatile int32_t t88 = -1;

	t88 = ((x4985>>x4986)^(x4987<x4988));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x5245 = 2029367LL;
	uint8_t x5246 = 20U;
	volatile uint64_t x5247 = 382598961796540LLU;
	int16_t x5248 = INT16_MIN;
	int64_t t89 = -63632041308LL;

	t89 = ((x5245>>x5246)^(x5247<x5248));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint16_t x5317 = UINT16_MAX;
	uint64_t x5319 = UINT64_MAX;
	uint32_t x5320 = 4127890U;
	int32_t t90 = -24;

	t90 = ((x5317>>x5318)^(x5319<x5320));

	if (t90 != 65535) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x5366 = 29U;
	int64_t x5367 = -2LL;
	int16_t x5368 = INT16_MIN;
	static volatile uint64_t t91 = 824118612294LLU;

	t91 = ((x5365>>x5366)^(x5367<x5368));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x5381 = 21LLU;
	int8_t x5382 = 0;
	volatile uint16_t x5383 = UINT16_MAX;
	volatile uint64_t t92 = 779896665088543LLU;

	t92 = ((x5381>>x5382)^(x5383<x5384));

	if (t92 != 21LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x5421 = 1LLU;
	uint8_t x5422 = 1U;
	volatile int16_t x5424 = INT16_MIN;

	t93 = ((x5421>>x5422)^(x5423<x5424));

	if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x5446 = 8U;
	int16_t x5448 = 5;
	int32_t t94 = -3;

	t94 = ((x5445>>x5446)^(x5447<x5448));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x5493 = 110159U;
	static uint64_t x5495 = 62LLU;
	static int64_t x5496 = -22113669LL;
	uint32_t t95 = 19825653U;

	t95 = ((x5493>>x5494)^(x5495<x5496));

	if (t95 != 27538U) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x5501 = UINT32_MAX;
	static volatile int32_t x5503 = 314;
	uint64_t x5504 = 0LLU;
	uint32_t t96 = 35665851U;

	t96 = ((x5501>>x5502)^(x5503<x5504));

	if (t96 != 33554431U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x5577 = 3766;
	int8_t x5578 = 6;
	int32_t x5579 = INT32_MAX;
	static uint16_t x5580 = UINT16_MAX;

	t97 = ((x5577>>x5578)^(x5579<x5580));

	if (t97 != 58) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x5653 = 2627;
	volatile int64_t x5654 = 1LL;
	int8_t x5655 = INT8_MIN;
	int32_t x5656 = INT32_MIN;
	int32_t t98 = 132582990;

	t98 = ((x5653>>x5654)^(x5655<x5656));

	if (t98 != 1313) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint64_t x5665 = UINT64_MAX;
	static uint8_t x5666 = 53U;
	int8_t x5667 = INT8_MAX;
	uint8_t x5668 = UINT8_MAX;

	t99 = ((x5665>>x5666)^(x5667<x5668));

	if (t99 != 2046LLU) { NG(); } else { ; }
	
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

