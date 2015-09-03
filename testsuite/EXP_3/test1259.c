#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x83 = 1991920U;
uint64_t t0 = 2325189130708406850LLU;
int8_t x140 = INT8_MIN;
int16_t x186 = 0;
int16_t x187 = INT16_MAX;
static uint32_t x189 = 133989206U;
int16_t x190 = 3;
static int8_t x191 = -1;
uint16_t x199 = UINT16_MAX;
static int8_t x200 = INT8_MIN;
int16_t x251 = INT16_MIN;
int16_t x347 = INT16_MIN;
static uint8_t x373 = 2U;
static uint32_t x392 = 7U;
volatile uint64_t t9 = 57954658LLU;
uint8_t x405 = 4U;
uint8_t x406 = 4U;
uint8_t x513 = 11U;
int16_t x523 = -1;
int32_t t13 = 22378;
static uint8_t x578 = 0U;
static int8_t x580 = 9;
volatile int32_t t14 = 45;
uint8_t x626 = 11U;
int16_t x628 = INT16_MIN;
uint8_t x778 = 2U;
int64_t x780 = -4075624715054452LL;
uint16_t x929 = UINT16_MAX;
int8_t x930 = 0;
int16_t x1032 = -8201;
uint32_t x1213 = 1814270U;
uint64_t x1265 = 2987905286LLU;
uint64_t t21 = 916759252683670435LLU;
uint8_t x1310 = 30U;
static volatile uint8_t x1313 = UINT8_MAX;
volatile int8_t x1315 = INT8_MIN;
int32_t x1316 = -11899085;
int64_t x1345 = INT64_MAX;
uint32_t x1381 = UINT32_MAX;
uint32_t x1449 = 16378U;
uint8_t x1450 = 1U;
int64_t x1451 = INT64_MAX;
static uint64_t x1552 = 6915755922161372514LLU;
int32_t t28 = -2890;
int32_t x1564 = -126642810;
int8_t x1678 = 7;
volatile int16_t x1680 = -131;
volatile uint32_t t30 = 4626U;
int8_t x1737 = 14;
volatile int16_t x1740 = INT16_MAX;
volatile int8_t x1755 = INT8_MIN;
volatile uint8_t x1760 = UINT8_MAX;
volatile int64_t t33 = -1046213489334496571LL;
volatile uint32_t x1793 = 59U;
uint8_t x1794 = 4U;
volatile int32_t x1862 = 18;
int32_t x1863 = -7;
uint64_t x2137 = UINT64_MAX;
int32_t x2138 = 1;
volatile int16_t x2214 = 0;
volatile int32_t t41 = 47848;
static volatile int16_t x2220 = -1;
static volatile int8_t x2267 = INT8_MIN;
int64_t x2268 = 7087310391LL;
int64_t x2275 = -1258145LL;
uint64_t x2311 = 121709LLU;
static int32_t x2392 = INT32_MAX;
uint32_t x2536 = 1U;
uint8_t x2638 = 1U;
int64_t x2819 = -1LL;
int32_t x2887 = -1;
uint64_t x2901 = UINT64_MAX;
volatile uint32_t x2970 = 22U;
int32_t x2971 = INT32_MIN;
static int8_t x3076 = 2;
int8_t x3086 = 8;
int64_t t58 = 67366271528981445LL;
int8_t x3180 = INT8_MIN;
static volatile int32_t t61 = 783;
static uint16_t x3380 = UINT16_MAX;
uint8_t x3390 = 5U;
int16_t x3527 = INT16_MIN;
int8_t x3694 = 2;
int32_t x3708 = -517960;
int64_t x3863 = INT64_MAX;
int16_t x3892 = -1;
volatile int8_t x3966 = 2;
uint64_t x3967 = 239LLU;
volatile uint16_t x4301 = 209U;
static volatile int32_t t80 = -1631134;
int16_t x4412 = -15;
static int8_t x4558 = 15;
volatile int8_t x4650 = 6;
int16_t x4720 = -1;
volatile uint64_t t85 = 20985528148136287LLU;
static int8_t x4914 = 2;
static uint64_t x4923 = UINT64_MAX;
static uint32_t x5156 = UINT32_MAX;
uint32_t x5285 = UINT32_MAX;
volatile int64_t x5288 = -8054746336272LL;
uint64_t t98 = 146552832LLU;
uint16_t x5531 = 3U;


void f0(void) {
	uint64_t x81 = 452507118704LLU;
	uint8_t x82 = 9U;
	uint64_t x84 = 16505510440110089LLU;

	t0 = ((x81<<x82)&(x83==x84));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x121 = 0U;
	uint8_t x122 = 7U;
	volatile uint8_t x123 = 0U;
	uint64_t x124 = 32650424LLU;
	int32_t t1 = 13;

	t1 = ((x121<<x122)&(x123==x124));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x137 = UINT32_MAX;
	uint32_t x138 = 24U;
	uint64_t x139 = 1618871LLU;
	volatile uint32_t t2 = 17U;

	t2 = ((x137<<x138)&(x139==x140));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x185 = 3U;
	volatile int64_t x188 = -12590551756LL;
	int32_t t3 = 197456135;

	t3 = ((x185<<x186)&(x187==x188));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x192 = 3121181255344LLU;
	uint32_t t4 = 101202050U;

	t4 = ((x189<<x190)&(x191==x192));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x197 = INT16_MAX;
	static uint8_t x198 = 1U;
	int32_t t5 = 934;

	t5 = ((x197<<x198)&(x199==x200));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x249 = UINT32_MAX;
	uint16_t x250 = 1U;
	volatile int16_t x252 = -1;
	volatile uint32_t t6 = 1923330815U;

	t6 = ((x249<<x250)&(x251==x252));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x345 = UINT8_MAX;
	int16_t x346 = 0;
	int32_t x348 = 1;
	int32_t t7 = 164;

	t7 = ((x345<<x346)&(x347==x348));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x374 = 12U;
	volatile uint64_t x375 = UINT64_MAX;
	volatile uint64_t x376 = 0LLU;
	int32_t t8 = 641;

	t8 = ((x373<<x374)&(x375==x376));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x389 = 406738LLU;
	static uint32_t x390 = 15U;
	int32_t x391 = 492579;

	t9 = ((x389<<x390)&(x391==x392));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x407 = INT16_MIN;
	volatile int8_t x408 = 1;
	volatile int32_t t10 = -32240;

	t10 = ((x405<<x406)&(x407==x408));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x514 = 4;
	static volatile int32_t x515 = INT32_MIN;
	uint64_t x516 = 80890306635537216LLU;
	volatile int32_t t11 = 253349267;

	t11 = ((x513<<x514)&(x515==x516));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x521 = 9155195781LLU;
	uint16_t x522 = 41U;
	volatile int32_t x524 = -1;
	static volatile uint64_t t12 = 58LLU;

	t12 = ((x521<<x522)&(x523==x524));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x541 = UINT16_MAX;
	int8_t x542 = 6;
	int16_t x543 = INT16_MIN;
	int8_t x544 = 13;

	t13 = ((x541<<x542)&(x543==x544));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x577 = INT32_MAX;
	static volatile int8_t x579 = INT8_MAX;

	t14 = ((x577<<x578)&(x579==x580));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x625 = 88U;
	static uint16_t x627 = 32U;
	volatile int32_t t15 = -2942;

	t15 = ((x625<<x626)&(x627==x628));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x777 = INT16_MAX;
	int64_t x779 = -1LL;
	volatile int32_t t16 = -86845;

	t16 = ((x777<<x778)&(x779==x780));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x917 = INT8_MAX;
	uint16_t x918 = 3U;
	volatile uint32_t x919 = 174U;
	int16_t x920 = INT16_MAX;
	int32_t t17 = -7;

	t17 = ((x917<<x918)&(x919==x920));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x931 = 76002253U;
	uint16_t x932 = 43U;
	volatile int32_t t18 = -2005151;

	t18 = ((x929<<x930)&(x931==x932));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x1029 = 0U;
	volatile int16_t x1030 = 1;
	int8_t x1031 = -1;
	volatile int32_t t19 = 10868;

	t19 = ((x1029<<x1030)&(x1031==x1032));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x1214 = 1U;
	static int8_t x1215 = -1;
	int8_t x1216 = INT8_MIN;
	static volatile uint32_t t20 = 1142U;

	t20 = ((x1213<<x1214)&(x1215==x1216));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x1266 = 0U;
	static volatile int64_t x1267 = 7LL;
	uint16_t x1268 = 1693U;

	t21 = ((x1265<<x1266)&(x1267==x1268));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x1309 = UINT64_MAX;
	int8_t x1311 = -1;
	int16_t x1312 = INT16_MIN;
	static uint64_t t22 = 969074520863507038LLU;

	t22 = ((x1309<<x1310)&(x1311==x1312));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x1314 = 3U;
	int32_t t23 = -87327020;

	t23 = ((x1313<<x1314)&(x1315==x1316));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x1346 = 0U;
	volatile uint16_t x1347 = 0U;
	int32_t x1348 = 200286;
	volatile int64_t t24 = 61020564826762LL;

	t24 = ((x1345<<x1346)&(x1347==x1348));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1382 = 15U;
	static uint8_t x1383 = UINT8_MAX;
	volatile int8_t x1384 = 8;
	uint32_t t25 = 396U;

	t25 = ((x1381<<x1382)&(x1383==x1384));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1429 = UINT32_MAX;
	uint8_t x1430 = 12U;
	uint16_t x1431 = 12227U;
	int64_t x1432 = -1LL;
	static uint32_t t26 = 327850269U;

	t26 = ((x1429<<x1430)&(x1431==x1432));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x1452 = INT64_MIN;
	volatile uint32_t t27 = 254635U;

	t27 = ((x1449<<x1450)&(x1451==x1452));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x1549 = INT8_MAX;
	uint16_t x1550 = 5U;
	static int64_t x1551 = INT64_MAX;

	t28 = ((x1549<<x1550)&(x1551==x1552));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1561 = 10;
	static uint16_t x1562 = 7U;
	volatile int32_t x1563 = -1;
	volatile int32_t t29 = 1;

	t29 = ((x1561<<x1562)&(x1563==x1564));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x1677 = 646U;
	volatile uint64_t x1679 = 543732822281LLU;

	t30 = ((x1677<<x1678)&(x1679==x1680));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1738 = 1;
	int32_t x1739 = 0;
	int32_t t31 = 56;

	t31 = ((x1737<<x1738)&(x1739==x1740));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1753 = 593781771731754296LLU;
	static uint8_t x1754 = 7U;
	int64_t x1756 = 23LL;
	uint64_t t32 = 270LLU;

	t32 = ((x1753<<x1754)&(x1755==x1756));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1757 = 1LL;
	int8_t x1758 = 43;
	int8_t x1759 = INT8_MAX;

	t33 = ((x1757<<x1758)&(x1759==x1760));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x1795 = 1U;
	int64_t x1796 = -308161585LL;
	static uint32_t t34 = 13137U;

	t34 = ((x1793<<x1794)&(x1795==x1796));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x1853 = 1016U;
	uint8_t x1854 = 6U;
	int64_t x1855 = 468774LL;
	static int64_t x1856 = INT64_MIN;
	volatile int32_t t35 = 7486311;

	t35 = ((x1853<<x1854)&(x1855==x1856));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x1861 = 2;
	static int32_t x1864 = INT32_MAX;
	volatile int32_t t36 = 3974;

	t36 = ((x1861<<x1862)&(x1863==x1864));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x1881 = 992U;
	static int16_t x1882 = 20;
	int64_t x1883 = INT64_MIN;
	uint16_t x1884 = 10U;
	static volatile uint32_t t37 = 0U;

	t37 = ((x1881<<x1882)&(x1883==x1884));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x2029 = 45454U;
	uint8_t x2030 = 1U;
	int16_t x2031 = 1;
	int8_t x2032 = -1;
	static uint32_t t38 = 29411U;

	t38 = ((x2029<<x2030)&(x2031==x2032));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x2133 = 13U;
	uint16_t x2134 = 4U;
	int32_t x2135 = -1;
	int32_t x2136 = INT32_MIN;
	int32_t t39 = 121646365;

	t39 = ((x2133<<x2134)&(x2135==x2136));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x2139 = 57;
	int64_t x2140 = 6688457601LL;
	uint64_t t40 = 163718728601LLU;

	t40 = ((x2137<<x2138)&(x2139==x2140));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x2213 = 3U;
	int64_t x2215 = INT64_MIN;
	uint32_t x2216 = UINT32_MAX;

	t41 = ((x2213<<x2214)&(x2215==x2216));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x2217 = 460LLU;
	uint8_t x2218 = 6U;
	static int32_t x2219 = INT32_MIN;
	volatile uint64_t t42 = 5124671920055068LLU;

	t42 = ((x2217<<x2218)&(x2219==x2220));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x2265 = 106946942U;
	int8_t x2266 = 1;
	uint32_t t43 = 7133562U;

	t43 = ((x2265<<x2266)&(x2267==x2268));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x2273 = 0U;
	volatile uint16_t x2274 = 5U;
	volatile int32_t x2276 = -1;
	static int32_t t44 = 169912677;

	t44 = ((x2273<<x2274)&(x2275==x2276));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x2309 = 62;
	int8_t x2310 = 1;
	uint64_t x2312 = 648087LLU;
	int32_t t45 = 2179388;

	t45 = ((x2309<<x2310)&(x2311==x2312));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x2389 = INT8_MAX;
	int64_t x2390 = 0LL;
	int16_t x2391 = -1;
	volatile int32_t t46 = 59;

	t46 = ((x2389<<x2390)&(x2391==x2392));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x2533 = 0U;
	int32_t x2534 = 1;
	static int16_t x2535 = INT16_MAX;
	volatile int32_t t47 = 234244742;

	t47 = ((x2533<<x2534)&(x2535==x2536));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x2609 = 39062947U;
	int8_t x2610 = 0;
	int64_t x2611 = -276LL;
	static int8_t x2612 = -1;
	volatile uint32_t t48 = 5254614U;

	t48 = ((x2609<<x2610)&(x2611==x2612));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x2637 = UINT16_MAX;
	volatile uint8_t x2639 = UINT8_MAX;
	int64_t x2640 = 483584325415784540LL;
	int32_t t49 = 10220121;

	t49 = ((x2637<<x2638)&(x2639==x2640));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x2817 = UINT64_MAX;
	int8_t x2818 = 3;
	uint32_t x2820 = UINT32_MAX;
	static volatile uint64_t t50 = 22LLU;

	t50 = ((x2817<<x2818)&(x2819==x2820));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x2885 = UINT8_MAX;
	uint16_t x2886 = 3U;
	int8_t x2888 = -1;
	volatile int32_t t51 = 1528;

	t51 = ((x2885<<x2886)&(x2887==x2888));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x2902 = 3U;
	volatile int16_t x2903 = INT16_MIN;
	static int32_t x2904 = INT32_MIN;
	volatile uint64_t t52 = 10705766LLU;

	t52 = ((x2901<<x2902)&(x2903==x2904));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x2909 = 10U;
	static int8_t x2910 = 0;
	static uint64_t x2911 = UINT64_MAX;
	uint64_t x2912 = 66813253868716LLU;
	volatile int32_t t53 = -14;

	t53 = ((x2909<<x2910)&(x2911==x2912));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x2933 = UINT8_MAX;
	uint16_t x2934 = 5U;
	static int64_t x2935 = INT64_MIN;
	int64_t x2936 = -1LL;
	volatile int32_t t54 = 72;

	t54 = ((x2933<<x2934)&(x2935==x2936));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x2969 = 0LLU;
	volatile int64_t x2972 = -755963242245077300LL;
	volatile uint64_t t55 = 8LLU;

	t55 = ((x2969<<x2970)&(x2971==x2972));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x3073 = 229U;
	int16_t x3074 = 7;
	uint32_t x3075 = 867502U;
	volatile int32_t t56 = 3;

	t56 = ((x3073<<x3074)&(x3075==x3076));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x3085 = UINT16_MAX;
	static volatile int32_t x3087 = -1;
	volatile uint32_t x3088 = 200999U;
	volatile int32_t t57 = -3;

	t57 = ((x3085<<x3086)&(x3087==x3088));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x3105 = 478807918044224LL;
	uint8_t x3106 = 1U;
	int8_t x3107 = -4;
	int64_t x3108 = -1LL;

	t58 = ((x3105<<x3106)&(x3107==x3108));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x3165 = 7154938552275347LLU;
	uint32_t x3166 = 3U;
	int8_t x3167 = -1;
	static int8_t x3168 = -4;
	static uint64_t t59 = 31652LLU;

	t59 = ((x3165<<x3166)&(x3167==x3168));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x3177 = 0;
	static uint32_t x3178 = 2U;
	static uint16_t x3179 = 269U;
	int32_t t60 = -30779589;

	t60 = ((x3177<<x3178)&(x3179==x3180));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x3201 = 313U;
	int8_t x3202 = 2;
	static volatile int16_t x3203 = INT16_MIN;
	static int64_t x3204 = 485LL;

	t61 = ((x3201<<x3202)&(x3203==x3204));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x3233 = UINT8_MAX;
	static uint8_t x3234 = 14U;
	uint16_t x3235 = UINT16_MAX;
	int64_t x3236 = INT64_MIN;
	int32_t t62 = -9;

	t62 = ((x3233<<x3234)&(x3235==x3236));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x3377 = 0LLU;
	volatile int8_t x3378 = 25;
	int64_t x3379 = -1LL;
	volatile uint64_t t63 = 52LLU;

	t63 = ((x3377<<x3378)&(x3379==x3380));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x3389 = 46676LL;
	int64_t x3391 = -1LL;
	int32_t x3392 = 24326437;
	volatile int64_t t64 = 243601118357LL;

	t64 = ((x3389<<x3390)&(x3391==x3392));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x3413 = 588LLU;
	uint8_t x3414 = 4U;
	int8_t x3415 = INT8_MAX;
	int16_t x3416 = -1;
	uint64_t t65 = 76808771889199LLU;

	t65 = ((x3413<<x3414)&(x3415==x3416));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x3525 = INT8_MAX;
	uint16_t x3526 = 2U;
	int8_t x3528 = -1;
	volatile int32_t t66 = -29534551;

	t66 = ((x3525<<x3526)&(x3527==x3528));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x3557 = UINT64_MAX;
	int8_t x3558 = 1;
	volatile uint8_t x3559 = 0U;
	static uint32_t x3560 = UINT32_MAX;
	uint64_t t67 = 436LLU;

	t67 = ((x3557<<x3558)&(x3559==x3560));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x3665 = UINT16_MAX;
	uint16_t x3666 = 3U;
	int32_t x3667 = 61799;
	uint32_t x3668 = UINT32_MAX;
	static volatile int32_t t68 = -846295900;

	t68 = ((x3665<<x3666)&(x3667==x3668));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x3693 = 1073571067990303296LLU;
	int32_t x3695 = -34039;
	int32_t x3696 = -10;
	volatile uint64_t t69 = 115394402805LLU;

	t69 = ((x3693<<x3694)&(x3695==x3696));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x3705 = INT16_MAX;
	static uint8_t x3706 = 2U;
	int16_t x3707 = INT16_MIN;
	int32_t t70 = -14;

	t70 = ((x3705<<x3706)&(x3707==x3708));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x3817 = UINT32_MAX;
	volatile int8_t x3818 = 15;
	uint64_t x3819 = 791852LLU;
	int32_t x3820 = -1;
	uint32_t t71 = 1020687U;

	t71 = ((x3817<<x3818)&(x3819==x3820));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x3861 = 475086U;
	uint16_t x3862 = 14U;
	static volatile int16_t x3864 = -115;
	volatile uint32_t t72 = 752156426U;

	t72 = ((x3861<<x3862)&(x3863==x3864));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x3889 = 13;
	volatile uint16_t x3890 = 4U;
	int64_t x3891 = 322LL;
	volatile int32_t t73 = 498678196;

	t73 = ((x3889<<x3890)&(x3891==x3892));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x3965 = 1;
	uint32_t x3968 = 0U;
	int32_t t74 = -404348;

	t74 = ((x3965<<x3966)&(x3967==x3968));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x4021 = 7694U;
	int8_t x4022 = 0;
	volatile uint8_t x4023 = UINT8_MAX;
	int64_t x4024 = -1LL;
	volatile int32_t t75 = -1590761;

	t75 = ((x4021<<x4022)&(x4023==x4024));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x4041 = INT16_MAX;
	int16_t x4042 = 13;
	static volatile int16_t x4043 = -10;
	uint32_t x4044 = 60U;
	volatile int32_t t76 = 1;

	t76 = ((x4041<<x4042)&(x4043==x4044));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x4089 = 230U;
	uint8_t x4090 = 12U;
	static volatile uint8_t x4091 = 24U;
	int8_t x4092 = INT8_MIN;
	uint32_t t77 = 54973995U;

	t77 = ((x4089<<x4090)&(x4091==x4092));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x4265 = 0U;
	volatile int16_t x4266 = 7;
	static uint8_t x4267 = 117U;
	int64_t x4268 = -193864LL;
	static volatile int32_t t78 = 490475952;

	t78 = ((x4265<<x4266)&(x4267==x4268));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x4289 = 131459U;
	uint64_t x4290 = 5LLU;
	static int8_t x4291 = INT8_MAX;
	volatile uint8_t x4292 = 0U;
	volatile uint32_t t79 = 3591794U;

	t79 = ((x4289<<x4290)&(x4291==x4292));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x4302 = 14;
	int8_t x4303 = -52;
	static uint16_t x4304 = UINT16_MAX;

	t80 = ((x4301<<x4302)&(x4303==x4304));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x4409 = UINT32_MAX;
	int8_t x4410 = 0;
	int32_t x4411 = -170;
	uint32_t t81 = 23065U;

	t81 = ((x4409<<x4410)&(x4411==x4412));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x4473 = UINT32_MAX;
	uint8_t x4474 = 14U;
	int16_t x4475 = INT16_MAX;
	int32_t x4476 = 246656;
	volatile uint32_t t82 = 38172429U;

	t82 = ((x4473<<x4474)&(x4475==x4476));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x4557 = 0;
	int16_t x4559 = 9805;
	int64_t x4560 = INT64_MAX;
	int32_t t83 = 84070131;

	t83 = ((x4557<<x4558)&(x4559==x4560));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x4649 = UINT32_MAX;
	int32_t x4651 = 261207;
	volatile uint16_t x4652 = 1156U;
	static uint32_t t84 = 23U;

	t84 = ((x4649<<x4650)&(x4651==x4652));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x4717 = 327054163LLU;
	int16_t x4718 = 2;
	uint16_t x4719 = 587U;

	t85 = ((x4717<<x4718)&(x4719==x4720));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x4853 = 75U;
	static int8_t x4854 = 1;
	volatile uint32_t x4855 = 2729U;
	int32_t x4856 = INT32_MIN;
	int32_t t86 = -18;

	t86 = ((x4853<<x4854)&(x4855==x4856));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x4897 = 270630917U;
	volatile int8_t x4898 = 0;
	static int64_t x4899 = INT64_MAX;
	int64_t x4900 = INT64_MIN;
	static volatile uint32_t t87 = 208178750U;

	t87 = ((x4897<<x4898)&(x4899==x4900));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x4913 = 6U;
	static uint8_t x4915 = 7U;
	static int64_t x4916 = INT64_MIN;
	volatile int32_t t88 = 20;

	t88 = ((x4913<<x4914)&(x4915==x4916));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x4921 = UINT8_MAX;
	uint16_t x4922 = 1U;
	int32_t x4924 = INT32_MAX;
	volatile int32_t t89 = 268;

	t89 = ((x4921<<x4922)&(x4923==x4924));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x4925 = 1U;
	uint8_t x4926 = 1U;
	static int32_t x4927 = INT32_MAX;
	int16_t x4928 = -1;
	static int32_t t90 = 6655;

	t90 = ((x4925<<x4926)&(x4927==x4928));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x4969 = 260104149U;
	static uint8_t x4970 = 9U;
	uint16_t x4971 = 6743U;
	volatile int8_t x4972 = 4;
	volatile uint32_t t91 = 12319684U;

	t91 = ((x4969<<x4970)&(x4971==x4972));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x4993 = 264;
	static int8_t x4994 = 1;
	volatile int16_t x4995 = -1;
	volatile uint8_t x4996 = 2U;
	volatile int32_t t92 = 23188699;

	t92 = ((x4993<<x4994)&(x4995==x4996));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x5017 = 461990825LLU;
	uint8_t x5018 = 4U;
	uint32_t x5019 = UINT32_MAX;
	volatile uint16_t x5020 = 6U;
	volatile uint64_t t93 = 2456LLU;

	t93 = ((x5017<<x5018)&(x5019==x5020));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x5049 = UINT64_MAX;
	int64_t x5050 = 2LL;
	uint64_t x5051 = 2681189958839LLU;
	static volatile uint8_t x5052 = UINT8_MAX;
	volatile uint64_t t94 = 12826846121078LLU;

	t94 = ((x5049<<x5050)&(x5051==x5052));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x5153 = 22LLU;
	uint8_t x5154 = 3U;
	int8_t x5155 = 4;
	uint64_t t95 = 28LLU;

	t95 = ((x5153<<x5154)&(x5155==x5156));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x5217 = INT8_MAX;
	uint8_t x5218 = 3U;
	uint8_t x5219 = 11U;
	volatile int16_t x5220 = -6910;
	static volatile int32_t t96 = -343;

	t96 = ((x5217<<x5218)&(x5219==x5220));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x5286 = 10;
	int32_t x5287 = 8918678;
	static uint32_t t97 = 294U;

	t97 = ((x5285<<x5286)&(x5287==x5288));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x5517 = 967443LLU;
	uint16_t x5518 = 23U;
	uint8_t x5519 = 2U;
	volatile int8_t x5520 = -1;

	t98 = ((x5517<<x5518)&(x5519==x5520));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x5529 = 16U;
	int16_t x5530 = 0;
	volatile uint64_t x5532 = UINT64_MAX;
	int32_t t99 = -387485;

	t99 = ((x5529<<x5530)&(x5531==x5532));

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

