#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x162 = 15U;
volatile uint32_t x164 = 5210362U;
uint32_t t1 = 38U;
uint32_t x244 = 1514746138U;
volatile uint32_t t2 = 0U;
int32_t x314 = INT32_MIN;
int8_t x316 = INT8_MIN;
uint64_t x397 = UINT64_MAX;
int8_t x527 = 2;
static volatile uint32_t t11 = 232827U;
uint8_t x594 = UINT8_MAX;
uint8_t x619 = 21U;
static volatile uint64_t t13 = 58449801356LLU;
volatile uint64_t x756 = 226674LLU;
int8_t x774 = INT8_MAX;
uint8_t x775 = 1U;
uint32_t x776 = 212004U;
volatile int32_t x807 = 1;
uint32_t x838 = 74U;
int64_t x868 = 112798362913847LL;
uint8_t x909 = UINT8_MAX;
uint32_t x1097 = 7U;
static uint64_t x1125 = 23382615811317002LLU;
uint64_t t23 = 28549067326137684LLU;
uint8_t x1160 = UINT8_MAX;
volatile uint16_t x1161 = 11U;
int32_t x1162 = 666;
uint64_t x1249 = 1481214863922448208LLU;
static volatile int16_t x1252 = -34;
int16_t x1684 = -1930;
volatile uint64_t t33 = 2919LLU;
int64_t x1734 = -22408904496652LL;
volatile uint16_t x1736 = 3736U;
volatile uint64_t t36 = 573316428635457240LLU;
uint16_t x1843 = 4U;
static int8_t x1845 = 1;
volatile uint32_t t38 = 0U;
static uint16_t x1962 = UINT16_MAX;
static int32_t t40 = -62;
uint64_t x1969 = 490612155490LLU;
static int32_t x1971 = 5;
uint32_t x2022 = 22U;
volatile int32_t x2024 = 28355926;
uint8_t x2186 = 3U;
volatile uint32_t x2297 = 344774768U;
int8_t x2299 = 0;
uint16_t x2300 = UINT16_MAX;
uint32_t x2340 = UINT32_MAX;
int64_t x2432 = 11856LL;
volatile int64_t t46 = 68542132259937LL;
uint8_t x2550 = 15U;
uint16_t x2648 = 43U;
volatile uint8_t x2704 = 2U;
static int16_t x2962 = INT16_MAX;
volatile uint64_t t50 = 106894936462084LLU;
uint32_t x3017 = 26846508U;
uint8_t x3019 = 1U;
int32_t x3020 = INT32_MIN;
int8_t x3137 = 22;
static uint16_t x3387 = 1U;
static int8_t x3532 = -1;
static int16_t x3675 = 2;
int8_t x3703 = 6;
static int8_t x3738 = INT8_MIN;
int32_t x3834 = INT32_MIN;
int8_t x3836 = 3;
volatile uint16_t x4189 = 38U;
volatile uint8_t x4216 = 2U;
int32_t x4273 = INT32_MAX;
uint64_t t66 = 502820434LLU;
volatile int8_t x4312 = INT8_MIN;
uint32_t x4502 = 376U;
static int8_t x4503 = 1;
volatile uint16_t x4506 = UINT16_MAX;
int16_t x4529 = INT16_MAX;
int16_t x4651 = 0;
uint8_t x4747 = 0U;
volatile uint64_t t73 = 264625875220428379LLU;
uint8_t x4764 = 1U;
static int32_t x4834 = 24;
int8_t x4835 = 0;
static uint8_t x4836 = 54U;
volatile int16_t x4954 = -1;
volatile int32_t t77 = -841845257;
volatile uint32_t x5034 = 0U;
uint32_t t78 = 209216046U;
volatile uint16_t x5096 = 13743U;
uint64_t t79 = 13238905LLU;
int8_t x5106 = 31;
static uint16_t x5108 = UINT16_MAX;
static volatile int8_t x5289 = INT8_MIN;
volatile int32_t x5290 = 7073;
uint8_t x5334 = UINT8_MAX;
volatile int8_t x5335 = 15;
volatile int32_t x5382 = -1;
int8_t x5384 = INT8_MIN;
uint64_t x5681 = 94718LLU;
uint16_t x5682 = 364U;
int8_t x5747 = 1;
int8_t x5748 = INT8_MAX;
volatile int64_t t89 = -498LL;
uint16_t x5814 = UINT16_MAX;
static uint32_t x5869 = UINT32_MAX;
int32_t x5872 = INT32_MIN;
static volatile uint32_t t91 = 1255U;
int32_t x6137 = -18991960;
int16_t x6237 = 4;
uint64_t x6266 = 2213LLU;
uint32_t t98 = 145U;
volatile uint64_t x6413 = 118602LLU;


void f0(void) {
	int8_t x73 = INT8_MIN;
	static uint64_t x74 = 920349404053773LLU;
	uint8_t x75 = 18U;
	int64_t x76 = -1LL;
	volatile uint64_t t0 = 27053037853LLU;

	t0 = (((x73+x74)<<x75)/x76);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x161 = -1;
	int8_t x163 = 23;

	t1 = (((x161+x162)<<x163)/x164);

	if (t1 != 22U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x241 = 1;
	volatile int32_t x242 = 1;
	uint8_t x243 = 10U;

	t2 = (((x241+x242)<<x243)/x244);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x249 = INT16_MAX;
	static int16_t x250 = 3136;
	int8_t x251 = 0;
	volatile int16_t x252 = INT16_MAX;
	int32_t t3 = -10108555;

	t3 = (((x249+x250)<<x251)/x252);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x313 = 132299812U;
	static volatile uint16_t x315 = 0U;
	uint32_t t4 = 7429846U;

	t4 = (((x313+x314)<<x315)/x316);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x341 = 773038862LL;
	static uint8_t x342 = 117U;
	static uint8_t x343 = 2U;
	int16_t x344 = 661;
	int64_t t5 = -1LL;

	t5 = (((x341+x342)<<x343)/x344);

	if (t5 != 4677996LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x389 = INT16_MAX;
	uint16_t x390 = 0U;
	int8_t x391 = 14;
	uint32_t x392 = 371U;
	volatile uint32_t t6 = 446134U;

	t6 = (((x389+x390)<<x391)/x392);

	if (t6 != 1447047U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x398 = -1;
	static uint32_t x399 = 26U;
	uint32_t x400 = 87580U;
	uint64_t t7 = 51142LLU;

	t7 = (((x397+x398)<<x399)/x400);

	if (t7 != 210627358684349LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x413 = 1U;
	volatile uint64_t x414 = 2LLU;
	static volatile int8_t x415 = 0;
	uint32_t x416 = 1886638878U;
	uint64_t t8 = 936LLU;

	t8 = (((x413+x414)<<x415)/x416);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x525 = -11;
	int16_t x526 = 491;
	static volatile uint8_t x528 = 5U;
	static volatile int32_t t9 = -1634;

	t9 = (((x525+x526)<<x527)/x528);

	if (t9 != 384) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x545 = 9790174790310LLU;
	uint16_t x546 = UINT16_MAX;
	volatile int32_t x547 = 1;
	uint32_t x548 = UINT32_MAX;
	static volatile uint64_t t10 = 146737910618281613LLU;

	t10 = (((x545+x546)<<x547)/x548);

	if (t10 != 4558LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x553 = UINT8_MAX;
	volatile uint32_t x554 = UINT32_MAX;
	int8_t x555 = 3;
	static int8_t x556 = -1;

	t11 = (((x553+x554)<<x555)/x556);

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x593 = 4U;
	volatile uint32_t x595 = 3U;
	volatile uint64_t x596 = 7400015030826968584LLU;
	uint64_t t12 = 11424762785120LLU;

	t12 = (((x593+x594)<<x595)/x596);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x617 = 6U;
	uint64_t x618 = 1814746985992947326LLU;
	uint64_t x620 = 1167LLU;

	t13 = (((x617+x618)<<x619)/x620);

	if (t13 != 13374322122082432LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x753 = -6;
	volatile uint16_t x754 = 465U;
	volatile uint16_t x755 = 1U;
	static uint64_t t14 = 81914LLU;

	t14 = (((x753+x754)<<x755)/x756);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x773 = 808U;
	uint32_t t15 = 0U;

	t15 = (((x773+x774)<<x775)/x776);

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x805 = -1LL;
	volatile uint64_t x806 = 8778752105010LLU;
	volatile int32_t x808 = -1465;
	volatile uint64_t t16 = 2041956648565158LLU;

	t16 = (((x805+x806)<<x807)/x808);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x837 = UINT32_MAX;
	uint16_t x839 = 0U;
	int32_t x840 = INT32_MIN;
	volatile uint32_t t17 = 1314U;

	t17 = (((x837+x838)<<x839)/x840);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x865 = INT8_MAX;
	uint32_t x866 = 1577447U;
	uint16_t x867 = 17U;
	volatile int64_t t18 = -19972LL;

	t18 = (((x865+x866)<<x867)/x868);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x910 = INT8_MAX;
	uint8_t x911 = 2U;
	int64_t x912 = 21332586326557297LL;
	volatile int64_t t19 = -5352921LL;

	t19 = (((x909+x910)<<x911)/x912);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x929 = 6U;
	volatile int8_t x930 = -5;
	uint32_t x931 = 6U;
	volatile int64_t x932 = INT64_MAX;
	volatile int64_t t20 = -109759LL;

	t20 = (((x929+x930)<<x931)/x932);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x969 = 0;
	uint64_t x970 = UINT64_MAX;
	static int8_t x971 = 1;
	int8_t x972 = 2;
	volatile uint64_t t21 = 37LLU;

	t21 = (((x969+x970)<<x971)/x972);

	if (t21 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1098 = INT16_MAX;
	int16_t x1099 = 1;
	int16_t x1100 = 3;
	uint32_t t22 = 13797772U;

	t22 = (((x1097+x1098)<<x1099)/x1100);

	if (t22 != 21849U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1126 = INT16_MIN;
	static uint16_t x1127 = 3U;
	int16_t x1128 = -1471;

	t23 = (((x1125+x1126)<<x1127)/x1128);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x1157 = 1U;
	static int8_t x1158 = -1;
	static int8_t x1159 = 1;
	int32_t t24 = 0;

	t24 = (((x1157+x1158)<<x1159)/x1160);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1163 = 5;
	int8_t x1164 = INT8_MAX;
	int32_t t25 = -12871;

	t25 = (((x1161+x1162)<<x1163)/x1164);

	if (t25 != 170) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x1221 = UINT16_MAX;
	uint32_t x1222 = UINT32_MAX;
	uint8_t x1223 = 8U;
	int8_t x1224 = INT8_MAX;
	uint32_t t26 = 28U;

	t26 = (((x1221+x1222)<<x1223)/x1224);

	if (t26 != 132100U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1250 = -1LL;
	uint32_t x1251 = 5U;
	volatile uint64_t t27 = 5039912993793459209LLU;

	t27 = (((x1249+x1250)<<x1251)/x1252);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint64_t x1289 = 5484231LLU;
	static volatile int16_t x1290 = -25;
	volatile uint16_t x1291 = 4U;
	int64_t x1292 = INT64_MAX;
	uint64_t t28 = 11453784LLU;

	t28 = (((x1289+x1290)<<x1291)/x1292);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x1429 = INT16_MAX;
	uint8_t x1430 = UINT8_MAX;
	uint64_t x1431 = 1LLU;
	int16_t x1432 = INT16_MIN;
	volatile int32_t t29 = 0;

	t29 = (((x1429+x1430)<<x1431)/x1432);

	if (t29 != -2) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1569 = UINT64_MAX;
	volatile uint8_t x1570 = 42U;
	uint32_t x1571 = 7U;
	static int16_t x1572 = INT16_MIN;
	volatile uint64_t t30 = 1230048LLU;

	t30 = (((x1569+x1570)<<x1571)/x1572);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1633 = 4620;
	int16_t x1634 = 7;
	volatile uint32_t x1635 = 1U;
	volatile int16_t x1636 = INT16_MIN;
	volatile int32_t t31 = -29640;

	t31 = (((x1633+x1634)<<x1635)/x1636);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x1681 = UINT32_MAX;
	volatile uint32_t x1682 = 5021942U;
	uint32_t x1683 = 24U;
	volatile uint32_t t32 = 462142342U;

	t32 = (((x1681+x1682)<<x1683)/x1684);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x1701 = 14U;
	int64_t x1702 = -1LL;
	volatile int32_t x1703 = 0;
	uint64_t x1704 = 1014LLU;

	t33 = (((x1701+x1702)<<x1703)/x1704);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x1733 = 8420792676081LLU;
	volatile int8_t x1735 = 0;
	volatile uint64_t t34 = 30475098541257955LLU;

	t34 = (((x1733+x1734)<<x1735)/x1736);

	if (t34 != 4937561586080763LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x1737 = 29620751U;
	int32_t x1738 = -113360;
	int16_t x1739 = 0;
	int32_t x1740 = -1;
	static volatile uint32_t t35 = 13818757U;

	t35 = (((x1737+x1738)<<x1739)/x1740);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1805 = INT64_MAX;
	static volatile uint64_t x1806 = 177LLU;
	uint16_t x1807 = 1U;
	uint8_t x1808 = 3U;

	t36 = (((x1805+x1806)<<x1807)/x1808);

	if (t36 != 117LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x1841 = 1;
	uint8_t x1842 = 14U;
	static int32_t x1844 = -165;
	volatile int32_t t37 = -159887;

	t37 = (((x1841+x1842)<<x1843)/x1844);

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x1846 = 7817U;
	uint8_t x1847 = 1U;
	static uint32_t x1848 = 1827U;

	t38 = (((x1845+x1846)<<x1847)/x1848);

	if (t38 != 8U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1881 = INT16_MAX;
	int16_t x1882 = -1;
	volatile uint8_t x1883 = 0U;
	uint8_t x1884 = 15U;
	static int32_t t39 = 141;

	t39 = (((x1881+x1882)<<x1883)/x1884);

	if (t39 != 2184) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x1961 = INT8_MIN;
	uint8_t x1963 = 11U;
	int16_t x1964 = 16;

	t40 = (((x1961+x1962)<<x1963)/x1964);

	if (t40 != 8372096) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x1970 = 42U;
	static int16_t x1972 = -8877;
	volatile uint64_t t41 = 31351564472233LLU;

	t41 = (((x1969+x1970)<<x1971)/x1972);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x2021 = INT16_MIN;
	volatile uint64_t x2023 = 1LLU;
	uint32_t t42 = 7635585U;

	t42 = (((x2021+x2022)<<x2023)/x2024);

	if (t42 != 151U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x2185 = UINT16_MAX;
	volatile int16_t x2187 = 1;
	int32_t x2188 = INT32_MAX;
	int32_t t43 = 5781;

	t43 = (((x2185+x2186)<<x2187)/x2188);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x2298 = 15;
	static uint32_t t44 = 0U;

	t44 = (((x2297+x2298)<<x2299)/x2300);

	if (t44 != 5260U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x2337 = -1LL;
	int16_t x2338 = INT16_MAX;
	uint8_t x2339 = 7U;
	volatile int64_t t45 = -3LL;

	t45 = (((x2337+x2338)<<x2339)/x2340);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x2429 = 535589840U;
	static int8_t x2430 = INT8_MAX;
	static uint16_t x2431 = 12U;

	t46 = (((x2429+x2430)<<x2431)/x2432);

	if (t46 != 281982LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x2549 = 2U;
	uint32_t x2551 = 3U;
	int16_t x2552 = INT16_MIN;
	static int32_t t47 = 32703;

	t47 = (((x2549+x2550)<<x2551)/x2552);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x2645 = -25;
	int64_t x2646 = INT64_MAX;
	static uint8_t x2647 = 0U;
	int64_t t48 = -144650067LL;

	t48 = (((x2645+x2646)<<x2647)/x2648);

	if (t48 != 214497024112901762LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x2701 = 289;
	uint16_t x2702 = 0U;
	int8_t x2703 = 18;
	int32_t t49 = -261;

	t49 = (((x2701+x2702)<<x2703)/x2704);

	if (t49 != 37879808) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x2961 = 1;
	uint16_t x2963 = 10U;
	uint64_t x2964 = UINT64_MAX;

	t50 = (((x2961+x2962)<<x2963)/x2964);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x3018 = 2834U;
	uint32_t t51 = 2U;

	t51 = (((x3017+x3018)<<x3019)/x3020);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint32_t x3138 = UINT32_MAX;
	uint8_t x3139 = 1U;
	static int8_t x3140 = -1;
	static uint32_t t52 = 2920812U;

	t52 = (((x3137+x3138)<<x3139)/x3140);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x3261 = -1LL;
	uint16_t x3262 = 3400U;
	int8_t x3263 = 1;
	int8_t x3264 = INT8_MIN;
	int64_t t53 = -4245150459LL;

	t53 = (((x3261+x3262)<<x3263)/x3264);

	if (t53 != -53LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x3385 = 866U;
	int16_t x3386 = 2;
	static uint16_t x3388 = 5U;
	int32_t t54 = -13622880;

	t54 = (((x3385+x3386)<<x3387)/x3388);

	if (t54 != 347) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x3429 = 1000U;
	volatile uint8_t x3430 = UINT8_MAX;
	uint16_t x3431 = 2U;
	static volatile int32_t x3432 = INT32_MIN;
	static volatile uint32_t t55 = 576972U;

	t55 = (((x3429+x3430)<<x3431)/x3432);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x3529 = 551836742U;
	static int8_t x3530 = INT8_MAX;
	volatile int32_t x3531 = 1;
	volatile uint32_t t56 = 84U;

	t56 = (((x3529+x3530)<<x3531)/x3532);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x3613 = INT32_MAX;
	uint32_t x3614 = 105U;
	uint8_t x3615 = 1U;
	uint16_t x3616 = UINT16_MAX;
	volatile uint32_t t57 = 21527U;

	t57 = (((x3613+x3614)<<x3615)/x3616);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x3673 = 12U;
	int16_t x3674 = 460;
	uint32_t x3676 = 81637U;
	volatile uint32_t t58 = 260053U;

	t58 = (((x3673+x3674)<<x3675)/x3676);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x3701 = INT64_MAX;
	uint64_t x3702 = 1032436195800553313LLU;
	static int32_t x3704 = INT32_MIN;
	volatile uint64_t t59 = 28083714989LLU;

	t59 = (((x3701+x3702)<<x3703)/x3704);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x3737 = UINT16_MAX;
	int8_t x3739 = 9;
	int32_t x3740 = -26;
	static int32_t t60 = -14868790;

	t60 = (((x3737+x3738)<<x3739)/x3740);

	if (t60 != -1288014) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x3785 = UINT16_MAX;
	volatile int16_t x3786 = -1;
	uint8_t x3787 = 10U;
	int8_t x3788 = 1;
	int32_t t61 = -359;

	t61 = (((x3785+x3786)<<x3787)/x3788);

	if (t61 != 67106816) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x3833 = 65686U;
	uint8_t x3835 = 14U;
	uint32_t t62 = 206850U;

	t62 = (((x3833+x3834)<<x3835)/x3836);

	if (t62 != 358733141U) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x4190 = UINT16_MAX;
	static int8_t x4191 = 0;
	volatile int16_t x4192 = 45;
	int32_t t63 = 4729;

	t63 = (((x4189+x4190)<<x4191)/x4192);

	if (t63 != 1457) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x4213 = UINT16_MAX;
	uint16_t x4214 = 625U;
	volatile uint16_t x4215 = 4U;
	static int32_t t64 = 1653525;

	t64 = (((x4213+x4214)<<x4215)/x4216);

	if (t64 != 529280) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x4274 = 490895LLU;
	static int8_t x4275 = 0;
	int64_t x4276 = INT64_MAX;
	static uint64_t t65 = 15123770002501623LLU;

	t65 = (((x4273+x4274)<<x4275)/x4276);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x4297 = INT8_MIN;
	uint64_t x4298 = 1740497301255LLU;
	uint16_t x4299 = 23U;
	volatile int64_t x4300 = INT64_MAX;

	t66 = (((x4297+x4298)<<x4299)/x4300);

	if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x4309 = UINT64_MAX;
	int64_t x4310 = INT64_MIN;
	static uint8_t x4311 = 1U;
	uint64_t t67 = 1875LLU;

	t67 = (((x4309+x4310)<<x4311)/x4312);

	if (t67 != 1LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x4501 = UINT8_MAX;
	static volatile int32_t x4504 = 6;
	volatile uint32_t t68 = 61571U;

	t68 = (((x4501+x4502)<<x4503)/x4504);

	if (t68 != 210U) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x4505 = UINT8_MAX;
	int8_t x4507 = 6;
	uint8_t x4508 = 1U;
	int32_t t69 = 2861695;

	t69 = (((x4505+x4506)<<x4507)/x4508);

	if (t69 != 4210560) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x4530 = INT8_MIN;
	int32_t x4531 = 1;
	static int64_t x4532 = 172096336LL;
	int64_t t70 = 417702473448LL;

	t70 = (((x4529+x4530)<<x4531)/x4532);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x4649 = UINT64_MAX;
	int64_t x4650 = -930LL;
	uint8_t x4652 = 3U;
	static volatile uint64_t t71 = 151063320006647226LLU;

	t71 = (((x4649+x4650)<<x4651)/x4652);

	if (t71 != 6148914691236516895LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x4689 = -1;
	uint32_t x4690 = UINT32_MAX;
	int8_t x4691 = 31;
	int8_t x4692 = -26;
	volatile uint32_t t72 = 46367U;

	t72 = (((x4689+x4690)<<x4691)/x4692);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x4745 = UINT32_MAX;
	static uint64_t x4746 = UINT64_MAX;
	volatile uint16_t x4748 = UINT16_MAX;

	t73 = (((x4745+x4746)<<x4747)/x4748);

	if (t73 != 65536LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x4761 = 52;
	uint8_t x4762 = 4U;
	volatile int16_t x4763 = 3;
	static volatile int32_t t74 = 227339;

	t74 = (((x4761+x4762)<<x4763)/x4764);

	if (t74 != 448) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x4829 = UINT64_MAX;
	int32_t x4830 = INT32_MIN;
	int8_t x4831 = 1;
	static int16_t x4832 = INT16_MIN;
	uint64_t t75 = 1017422LLU;

	t75 = (((x4829+x4830)<<x4831)/x4832);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x4833 = 1871U;
	volatile int32_t t76 = 435354;

	t76 = (((x4833+x4834)<<x4835)/x4836);

	if (t76 != 35) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x4953 = INT8_MAX;
	uint8_t x4955 = 20U;
	int8_t x4956 = -1;

	t77 = (((x4953+x4954)<<x4955)/x4956);

	if (t77 != -132120576) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x5033 = 1U;
	int32_t x5035 = 3;
	static uint16_t x5036 = 22546U;

	t78 = (((x5033+x5034)<<x5035)/x5036);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x5093 = -1;
	uint64_t x5094 = UINT64_MAX;
	volatile uint8_t x5095 = 3U;

	t79 = (((x5093+x5094)<<x5095)/x5096);

	if (t79 != 1342264721946412LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x5101 = INT16_MAX;
	volatile uint8_t x5102 = UINT8_MAX;
	static uint8_t x5103 = 0U;
	int16_t x5104 = 233;
	volatile int32_t t80 = 11286019;

	t80 = (((x5101+x5102)<<x5103)/x5104);

	if (t80 != 141) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x5105 = UINT16_MAX;
	uint8_t x5107 = 11U;
	int32_t t81 = -4;

	t81 = (((x5105+x5106)<<x5107)/x5108);

	if (t81 != 2048) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x5185 = -1LL;
	uint16_t x5186 = UINT16_MAX;
	int64_t x5187 = 5LL;
	int16_t x5188 = -184;
	int64_t t82 = 62385349178997961LL;

	t82 = (((x5185+x5186)<<x5187)/x5188);

	if (t82 != -11397LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x5241 = 110;
	int16_t x5242 = -1;
	static uint8_t x5243 = 0U;
	int8_t x5244 = INT8_MAX;
	static volatile int32_t t83 = 5435718;

	t83 = (((x5241+x5242)<<x5243)/x5244);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x5291 = 17U;
	uint32_t x5292 = UINT32_MAX;
	uint32_t t84 = 55822526U;

	t84 = (((x5289+x5290)<<x5291)/x5292);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x5333 = 0;
	volatile int16_t x5336 = INT16_MIN;
	static int32_t t85 = 226759;

	t85 = (((x5333+x5334)<<x5335)/x5336);

	if (t85 != -255) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x5381 = UINT16_MAX;
	uint16_t x5383 = 2U;
	int32_t t86 = 11641074;

	t86 = (((x5381+x5382)<<x5383)/x5384);

	if (t86 != -2047) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x5569 = UINT32_MAX;
	int16_t x5570 = 7695;
	int8_t x5571 = 0;
	int16_t x5572 = INT16_MIN;
	uint32_t t87 = 43U;

	t87 = (((x5569+x5570)<<x5571)/x5572);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x5683 = 11LLU;
	static volatile uint64_t x5684 = UINT64_MAX;
	uint64_t t88 = 514902321264LLU;

	t88 = (((x5681+x5682)<<x5683)/x5684);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x5745 = -1LL;
	uint8_t x5746 = UINT8_MAX;

	t89 = (((x5745+x5746)<<x5747)/x5748);

	if (t89 != 4LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x5813 = -1;
	int8_t x5815 = 1;
	uint64_t x5816 = 2071172LLU;
	uint64_t t90 = 22298520382259087LLU;

	t90 = (((x5813+x5814)<<x5815)/x5816);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x5870 = -4;
	uint16_t x5871 = 1U;

	t91 = (((x5869+x5870)<<x5871)/x5872);

	if (t91 != 1U) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x5961 = 21U;
	int64_t x5962 = -1LL;
	volatile uint16_t x5963 = 8U;
	int32_t x5964 = -1;
	static int64_t t92 = 2836LL;

	t92 = (((x5961+x5962)<<x5963)/x5964);

	if (t92 != -5120LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x6077 = 441U;
	uint32_t x6078 = 0U;
	int16_t x6079 = 0;
	int64_t x6080 = 3395404742LL;
	int64_t t93 = 10372158520779LL;

	t93 = (((x6077+x6078)<<x6079)/x6080);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x6138 = 567181218376354LLU;
	uint8_t x6139 = 24U;
	int64_t x6140 = INT64_MIN;
	uint64_t t94 = 2181578251LLU;

	t94 = (((x6137+x6138)<<x6139)/x6140);

	if (t94 != 1LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x6225 = 385486U;
	volatile uint32_t x6226 = 15306U;
	uint8_t x6227 = 18U;
	int16_t x6228 = -731;
	volatile uint32_t t95 = 3U;

	t95 = (((x6225+x6226)<<x6227)/x6228);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x6238 = 2;
	volatile uint8_t x6239 = 21U;
	volatile int32_t x6240 = INT32_MAX;
	static volatile int32_t t96 = -96149111;

	t96 = (((x6237+x6238)<<x6239)/x6240);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x6265 = INT64_MAX;
	static uint16_t x6267 = 0U;
	int32_t x6268 = 1;
	static uint64_t t97 = 1421297LLU;

	t97 = (((x6265+x6266)<<x6267)/x6268);

	if (t97 != 9223372036854778020LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint16_t x6381 = 398U;
	volatile int8_t x6382 = INT8_MIN;
	int8_t x6383 = 0;
	uint32_t x6384 = 8600595U;

	t98 = (((x6381+x6382)<<x6383)/x6384);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x6414 = -5;
	uint8_t x6415 = 0U;
	static volatile int16_t x6416 = INT16_MAX;
	static volatile uint64_t t99 = 1006177228068344LLU;

	t99 = (((x6413+x6414)<<x6415)/x6416);

	if (t99 != 3LLU) { NG(); } else { ; }
	
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

