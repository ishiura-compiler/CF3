#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x295 = INT32_MAX;
int64_t x403 = INT64_MAX;
uint8_t x404 = 0U;
int8_t x424 = 26;
uint64_t x765 = 103576LLU;
static int16_t x872 = 0;
static int8_t x946 = INT8_MIN;
static uint64_t t8 = 53311112558LLU;
volatile uint32_t x1079 = UINT32_MAX;
uint32_t t9 = 116U;
volatile int32_t x1281 = -3030700;
static uint8_t x1284 = 6U;
static int16_t x1411 = INT16_MAX;
uint16_t x1563 = 218U;
int32_t x1617 = INT32_MIN;
int16_t x1645 = INT16_MAX;
uint32_t x1647 = 3135841U;
volatile uint32_t t19 = 46356U;
volatile int8_t x1664 = 0;
static uint32_t t22 = 13603U;
int64_t x1863 = 1385620LL;
uint64_t x1864 = 18LLU;
volatile uint8_t x1890 = 49U;
uint8_t x1891 = UINT8_MAX;
uint64_t x2029 = 476866534235375LLU;
static int32_t t27 = -4;
uint8_t x2091 = 54U;
uint8_t x2092 = 8U;
uint32_t x2175 = UINT32_MAX;
volatile uint32_t t30 = 1U;
volatile uint64_t t31 = 38494LLU;
static uint32_t x2342 = 190831196U;
static int8_t x2350 = -1;
volatile int8_t x2405 = INT8_MAX;
int32_t t35 = 39740155;
int8_t x2544 = 25;
static uint16_t x2646 = 5U;
uint16_t x2667 = UINT16_MAX;
volatile uint32_t x2748 = 1U;
volatile uint64_t t41 = 9LLU;
int8_t x2864 = 12;
volatile int32_t t42 = 6;
int16_t x2898 = -5807;
int32_t x3017 = INT32_MIN;
uint64_t x3018 = 53769546495685712LLU;
uint64_t t48 = 56971531481156LLU;
int64_t t49 = -32163512992638LL;
int8_t x3086 = -1;
uint8_t x3087 = UINT8_MAX;
volatile int32_t t51 = 212866;
int8_t x3090 = INT8_MIN;
uint16_t x3200 = 2U;
uint8_t x3201 = 1U;
static uint32_t x3202 = UINT32_MAX;
uint16_t x3212 = 0U;
static uint8_t x3431 = 0U;
volatile int32_t t60 = 0;
static int8_t x3448 = 2;
volatile uint8_t x3768 = 1U;
int16_t x3893 = INT16_MIN;
static int64_t x3917 = INT64_MAX;
volatile int32_t x3918 = -1;
uint32_t x3919 = 135U;
int8_t x3997 = INT8_MIN;
volatile uint16_t x4378 = UINT16_MAX;
uint16_t x4505 = UINT16_MAX;
uint16_t x4506 = UINT16_MAX;
uint64_t x4507 = 419928620230LLU;
uint32_t t75 = 496494U;
uint64_t x4555 = 2377066473062LLU;
volatile int64_t t77 = -1LL;
int32_t t78 = -77;
static uint8_t x4756 = 2U;
volatile int16_t x4958 = INT16_MAX;
int16_t x4997 = INT16_MIN;
int16_t x5017 = INT16_MIN;
uint8_t x5020 = 4U;
static uint8_t x5342 = 4U;
int64_t x5433 = INT64_MIN;
volatile int8_t x5494 = -1;
volatile uint8_t x5520 = 0U;
volatile uint32_t t91 = UINT32_MAX;
volatile int16_t x5737 = INT16_MAX;
int8_t x5738 = -36;
int8_t x5740 = 28;
int64_t x5790 = -1LL;
uint16_t x5792 = 7U;
int64_t t94 = -508859LL;
int8_t x5831 = 5;
static uint64_t x5883 = UINT64_MAX;
uint64_t t96 = 1945412LLU;
int64_t x5945 = -1LL;
volatile uint32_t x5995 = 421391944U;
int8_t x6048 = 9;


void f0(void) {
	int64_t x233 = 40341466505258732LL;
	int16_t x234 = -1;
	int16_t x235 = INT16_MAX;
	static volatile int32_t x236 = 9;
	volatile int32_t t0 = 28;

	t0 = (((x233<=x234)^x235)>>x236);

	if (t0 != 63) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x265 = INT64_MIN;
	static uint8_t x266 = 6U;
	uint32_t x267 = 6675050U;
	volatile int32_t x268 = 0;
	uint32_t t1 = 302U;

	t1 = (((x265<=x266)^x267)>>x268);

	if (t1 != 6675051U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x293 = INT16_MIN;
	int16_t x294 = INT16_MIN;
	volatile int8_t x296 = 1;
	int32_t t2 = 3;

	t2 = (((x293<=x294)^x295)>>x296);

	if (t2 != 1073741823) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x401 = 4197271510469LLU;
	int8_t x402 = INT8_MIN;
	volatile int64_t t3 = 335349708LL;

	t3 = (((x401<=x402)^x403)>>x404);

	if (t3 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x421 = 1;
	volatile int8_t x422 = -1;
	uint8_t x423 = 1U;
	static volatile int32_t t4 = -5188367;

	t4 = (((x421<=x422)^x423)>>x424);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x766 = 621839U;
	int32_t x767 = 2329363;
	uint8_t x768 = 17U;
	volatile int32_t t5 = 0;

	t5 = (((x765<=x766)^x767)>>x768);

	if (t5 != 17) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x869 = INT16_MAX;
	int16_t x870 = -1;
	static int32_t x871 = INT32_MAX;
	static int32_t t6 = INT32_MAX;

	t6 = (((x869<=x870)^x871)>>x872);

	if (t6 != INT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x945 = -26;
	uint32_t x947 = 1366U;
	uint16_t x948 = 3U;
	static volatile uint32_t t7 = 69909647U;

	t7 = (((x945<=x946)^x947)>>x948);

	if (t7 != 170U) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x1045 = 1792959945U;
	static int32_t x1046 = 461;
	static uint64_t x1047 = UINT64_MAX;
	uint8_t x1048 = 51U;

	t8 = (((x1045<=x1046)^x1047)>>x1048);

	if (t8 != 8191LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x1077 = INT16_MIN;
	static volatile int32_t x1078 = INT32_MAX;
	uint16_t x1080 = 1U;

	t9 = (((x1077<=x1078)^x1079)>>x1080);

	if (t9 != 2147483647U) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x1129 = UINT16_MAX;
	int8_t x1130 = -1;
	uint16_t x1131 = UINT16_MAX;
	int64_t x1132 = 14LL;
	int32_t t10 = -377585780;

	t10 = (((x1129<=x1130)^x1131)>>x1132);

	if (t10 != 3) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x1173 = INT8_MIN;
	int32_t x1174 = -3265217;
	uint16_t x1175 = 0U;
	int8_t x1176 = 2;
	volatile int32_t t11 = 0;

	t11 = (((x1173<=x1174)^x1175)>>x1176);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x1213 = UINT8_MAX;
	static int32_t x1214 = INT32_MIN;
	static volatile int8_t x1215 = 55;
	int32_t x1216 = 1;
	int32_t t12 = 593;

	t12 = (((x1213<=x1214)^x1215)>>x1216);

	if (t12 != 27) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x1277 = INT32_MIN;
	volatile uint64_t x1278 = UINT64_MAX;
	uint16_t x1279 = UINT16_MAX;
	volatile int8_t x1280 = 1;
	static int32_t t13 = 24728;

	t13 = (((x1277<=x1278)^x1279)>>x1280);

	if (t13 != 32767) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x1282 = INT16_MIN;
	uint16_t x1283 = 20370U;
	int32_t t14 = -6785540;

	t14 = (((x1281<=x1282)^x1283)>>x1284);

	if (t14 != 318) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x1409 = INT64_MAX;
	uint64_t x1410 = UINT64_MAX;
	static uint8_t x1412 = 0U;
	volatile int32_t t15 = -205367852;

	t15 = (((x1409<=x1410)^x1411)>>x1412);

	if (t15 != 32766) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x1549 = UINT8_MAX;
	int16_t x1550 = INT16_MAX;
	int8_t x1551 = INT8_MAX;
	uint8_t x1552 = 7U;
	static volatile int32_t t16 = 52007642;

	t16 = (((x1549<=x1550)^x1551)>>x1552);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x1561 = -1;
	int16_t x1562 = 1371;
	volatile uint16_t x1564 = 2U;
	static int32_t t17 = 358;

	t17 = (((x1561<=x1562)^x1563)>>x1564);

	if (t17 != 54) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x1618 = 7685055052219LLU;
	volatile int32_t x1619 = INT32_MAX;
	uint8_t x1620 = 11U;
	int32_t t18 = 27730;

	t18 = (((x1617<=x1618)^x1619)>>x1620);

	if (t18 != 1048575) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x1646 = 2872U;
	uint32_t x1648 = 5U;

	t19 = (((x1645<=x1646)^x1647)>>x1648);

	if (t19 != 97995U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x1661 = INT32_MIN;
	uint64_t x1662 = UINT64_MAX;
	uint64_t x1663 = 224098998124518LLU;
	uint64_t t20 = 14LLU;

	t20 = (((x1661<=x1662)^x1663)>>x1664);

	if (t20 != 224098998124519LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x1725 = INT64_MAX;
	int32_t x1726 = -1;
	int32_t x1727 = 0;
	int8_t x1728 = 1;
	int32_t t21 = -81580117;

	t21 = (((x1725<=x1726)^x1727)>>x1728);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x1769 = INT16_MIN;
	int16_t x1770 = INT16_MIN;
	uint32_t x1771 = 808U;
	int8_t x1772 = 2;

	t22 = (((x1769<=x1770)^x1771)>>x1772);

	if (t22 != 202U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1861 = 1;
	uint8_t x1862 = UINT8_MAX;
	volatile int64_t t23 = 304889LL;

	t23 = (((x1861<=x1862)^x1863)>>x1864);

	if (t23 != 5LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1869 = INT8_MIN;
	volatile int8_t x1870 = 6;
	int16_t x1871 = 1;
	uint32_t x1872 = 5U;
	volatile int32_t t24 = 3960383;

	t24 = (((x1869<=x1870)^x1871)>>x1872);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1889 = INT32_MIN;
	uint8_t x1892 = 1U;
	volatile int32_t t25 = 10810;

	t25 = (((x1889<=x1890)^x1891)>>x1892);

	if (t25 != 127) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x1933 = UINT32_MAX;
	int8_t x1934 = INT8_MIN;
	int64_t x1935 = 2LL;
	uint8_t x1936 = 5U;
	int64_t t26 = -2518LL;

	t26 = (((x1933<=x1934)^x1935)>>x1936);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x2030 = 3U;
	static uint16_t x2031 = 604U;
	uint8_t x2032 = 1U;

	t27 = (((x2029<=x2030)^x2031)>>x2032);

	if (t27 != 302) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x2073 = -1LL;
	uint32_t x2074 = 6342989U;
	int8_t x2075 = 0;
	int8_t x2076 = 5;
	static int32_t t28 = -49761;

	t28 = (((x2073<=x2074)^x2075)>>x2076);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x2089 = INT16_MAX;
	uint64_t x2090 = 7249LLU;
	int32_t t29 = -35167;

	t29 = (((x2089<=x2090)^x2091)>>x2092);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x2173 = INT64_MIN;
	volatile int64_t x2174 = INT64_MAX;
	static int16_t x2176 = 0;

	t30 = (((x2173<=x2174)^x2175)>>x2176);

	if (t30 != 4294967294U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x2221 = INT8_MIN;
	static volatile uint64_t x2222 = UINT64_MAX;
	uint64_t x2223 = 755926LLU;
	static volatile uint8_t x2224 = 24U;

	t31 = (((x2221<=x2222)^x2223)>>x2224);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x2237 = -3;
	int32_t x2238 = -45639159;
	volatile int32_t x2239 = 104;
	volatile uint8_t x2240 = 15U;
	int32_t t32 = -41;

	t32 = (((x2237<=x2238)^x2239)>>x2240);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x2341 = INT16_MIN;
	uint64_t x2343 = 91748880586362LLU;
	volatile uint16_t x2344 = 1U;
	uint64_t t33 = 2125839574139455LLU;

	t33 = (((x2341<=x2342)^x2343)>>x2344);

	if (t33 != 45874440293181LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x2349 = UINT64_MAX;
	uint64_t x2351 = 287462901267897504LLU;
	static uint8_t x2352 = 17U;
	volatile uint64_t t34 = 13754LLU;

	t34 = (((x2349<=x2350)^x2351)>>x2352);

	if (t34 != 2193167886870LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x2406 = 2449862054423LL;
	static int32_t x2407 = 2077;
	int8_t x2408 = 9;

	t35 = (((x2405<=x2406)^x2407)>>x2408);

	if (t35 != 4) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x2541 = 2854U;
	static uint8_t x2542 = 1U;
	static int64_t x2543 = INT64_MAX;
	volatile int64_t t36 = 0LL;

	t36 = (((x2541<=x2542)^x2543)>>x2544);

	if (t36 != 274877906943LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x2601 = INT32_MIN;
	static int64_t x2602 = -186LL;
	static uint32_t x2603 = UINT32_MAX;
	static uint8_t x2604 = 25U;
	static volatile uint32_t t37 = 1481U;

	t37 = (((x2601<=x2602)^x2603)>>x2604);

	if (t37 != 127U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x2645 = INT64_MIN;
	uint32_t x2647 = 64289615U;
	uint8_t x2648 = 2U;
	uint32_t t38 = 78748668U;

	t38 = (((x2645<=x2646)^x2647)>>x2648);

	if (t38 != 16072403U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x2665 = 4;
	int8_t x2666 = INT8_MAX;
	uint16_t x2668 = 3U;
	volatile int32_t t39 = -40918;

	t39 = (((x2665<=x2666)^x2667)>>x2668);

	if (t39 != 8191) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x2745 = UINT16_MAX;
	int32_t x2746 = -1;
	int32_t x2747 = 13620216;
	int32_t t40 = 11681;

	t40 = (((x2745<=x2746)^x2747)>>x2748);

	if (t40 != 6810108) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x2837 = INT8_MIN;
	static int32_t x2838 = INT32_MIN;
	uint64_t x2839 = 618621630LLU;
	int8_t x2840 = 14;

	t41 = (((x2837<=x2838)^x2839)>>x2840);

	if (t41 != 37757LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x2861 = UINT32_MAX;
	uint16_t x2862 = 130U;
	int8_t x2863 = 52;

	t42 = (((x2861<=x2862)^x2863)>>x2864);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int8_t x2889 = INT8_MIN;
	int64_t x2890 = -5092120161LL;
	uint8_t x2891 = UINT8_MAX;
	uint8_t x2892 = 4U;
	volatile int32_t t43 = -545;

	t43 = (((x2889<=x2890)^x2891)>>x2892);

	if (t43 != 15) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x2897 = 0;
	uint8_t x2899 = UINT8_MAX;
	int64_t x2900 = 0LL;
	volatile int32_t t44 = -23539;

	t44 = (((x2897<=x2898)^x2899)>>x2900);

	if (t44 != 255) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x2985 = INT32_MIN;
	int16_t x2986 = INT16_MIN;
	static int32_t x2987 = 16460147;
	int32_t x2988 = 1;
	volatile int32_t t45 = -27891017;

	t45 = (((x2985<=x2986)^x2987)>>x2988);

	if (t45 != 8230073) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x3019 = 0;
	volatile uint8_t x3020 = 2U;
	int32_t t46 = -3946;

	t46 = (((x3017<=x3018)^x3019)>>x3020);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x3025 = 0U;
	uint8_t x3026 = 1U;
	volatile int32_t x3027 = 7;
	uint8_t x3028 = 4U;
	static volatile int32_t t47 = -13;

	t47 = (((x3025<=x3026)^x3027)>>x3028);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x3037 = -1LL;
	static int64_t x3038 = 108LL;
	static uint64_t x3039 = 25426639193LLU;
	uint64_t x3040 = 24LLU;

	t48 = (((x3037<=x3038)^x3039)>>x3040);

	if (t48 != 1515LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x3045 = INT32_MIN;
	static uint32_t x3046 = UINT32_MAX;
	volatile int64_t x3047 = INT64_MAX;
	volatile uint16_t x3048 = 1U;

	t49 = (((x3045<=x3046)^x3047)>>x3048);

	if (t49 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x3057 = 4;
	uint32_t x3058 = 13197U;
	static int64_t x3059 = INT64_MAX;
	int8_t x3060 = 39;
	int64_t t50 = 5262LL;

	t50 = (((x3057<=x3058)^x3059)>>x3060);

	if (t50 != 16777215LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x3085 = -1;
	uint8_t x3088 = 2U;

	t51 = (((x3085<=x3086)^x3087)>>x3088);

	if (t51 != 63) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x3089 = 124U;
	static uint16_t x3091 = 127U;
	uint32_t x3092 = 1U;
	volatile int32_t t52 = 127350358;

	t52 = (((x3089<=x3090)^x3091)>>x3092);

	if (t52 != 63) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x3197 = 46U;
	int16_t x3198 = -1;
	uint64_t x3199 = UINT64_MAX;
	volatile uint64_t t53 = 44867569142874LLU;

	t53 = (((x3197<=x3198)^x3199)>>x3200);

	if (t53 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint64_t x3203 = 210532800252800LLU;
	int16_t x3204 = 1;
	uint64_t t54 = 10109LLU;

	t54 = (((x3201<=x3202)^x3203)>>x3204);

	if (t54 != 105266400126400LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x3209 = INT8_MIN;
	static volatile int64_t x3210 = -31370LL;
	uint32_t x3211 = UINT32_MAX;
	volatile uint32_t t55 = UINT32_MAX;

	t55 = (((x3209<=x3210)^x3211)>>x3212);

	if (t55 != UINT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x3261 = UINT64_MAX;
	uint8_t x3262 = 40U;
	int32_t x3263 = INT32_MAX;
	volatile uint16_t x3264 = 1U;
	int32_t t56 = -102600;

	t56 = (((x3261<=x3262)^x3263)>>x3264);

	if (t56 != 1073741823) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x3265 = UINT8_MAX;
	int8_t x3266 = INT8_MIN;
	int32_t x3267 = INT32_MAX;
	uint16_t x3268 = 0U;
	volatile int32_t t57 = INT32_MAX;

	t57 = (((x3265<=x3266)^x3267)>>x3268);

	if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x3345 = UINT16_MAX;
	static int8_t x3346 = INT8_MIN;
	volatile uint64_t x3347 = UINT64_MAX;
	uint8_t x3348 = 4U;
	volatile uint64_t t58 = 785882LLU;

	t58 = (((x3345<=x3346)^x3347)>>x3348);

	if (t58 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x3405 = 1;
	volatile int64_t x3406 = 61183321677325305LL;
	static int8_t x3407 = 52;
	volatile uint32_t x3408 = 0U;
	static volatile int32_t t59 = -28186100;

	t59 = (((x3405<=x3406)^x3407)>>x3408);

	if (t59 != 53) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x3429 = UINT8_MAX;
	int8_t x3430 = 1;
	uint64_t x3432 = 17LLU;

	t60 = (((x3429<=x3430)^x3431)>>x3432);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x3445 = 178712361LLU;
	volatile int64_t x3446 = INT64_MIN;
	int8_t x3447 = 2;
	int32_t t61 = 490740658;

	t61 = (((x3445<=x3446)^x3447)>>x3448);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x3453 = INT8_MAX;
	int64_t x3454 = INT64_MIN;
	int32_t x3455 = INT32_MAX;
	uint16_t x3456 = 7U;
	volatile int32_t t62 = 1531;

	t62 = (((x3453<=x3454)^x3455)>>x3456);

	if (t62 != 16777215) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x3697 = UINT16_MAX;
	volatile int8_t x3698 = INT8_MIN;
	uint8_t x3699 = UINT8_MAX;
	uint8_t x3700 = 2U;
	volatile int32_t t63 = 95236117;

	t63 = (((x3697<=x3698)^x3699)>>x3700);

	if (t63 != 63) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x3765 = INT32_MIN;
	int64_t x3766 = -1LL;
	uint8_t x3767 = UINT8_MAX;
	static int32_t t64 = -257990;

	t64 = (((x3765<=x3766)^x3767)>>x3768);

	if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x3894 = INT32_MIN;
	uint32_t x3895 = 120204U;
	static uint8_t x3896 = 5U;
	static uint32_t t65 = 168U;

	t65 = (((x3893<=x3894)^x3895)>>x3896);

	if (t65 != 3756U) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x3920 = 5U;
	uint32_t t66 = 181U;

	t66 = (((x3917<=x3918)^x3919)>>x3920);

	if (t66 != 4U) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x3998 = -1;
	static uint16_t x3999 = UINT16_MAX;
	static int32_t x4000 = 1;
	int32_t t67 = -86085;

	t67 = (((x3997<=x3998)^x3999)>>x4000);

	if (t67 != 32767) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x4009 = 568U;
	static int32_t x4010 = 94663;
	uint8_t x4011 = 0U;
	uint8_t x4012 = 17U;
	volatile int32_t t68 = -57;

	t68 = (((x4009<=x4010)^x4011)>>x4012);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x4041 = -56000018;
	int16_t x4042 = -1;
	int16_t x4043 = INT16_MAX;
	uint16_t x4044 = 8U;
	int32_t t69 = 187384175;

	t69 = (((x4041<=x4042)^x4043)>>x4044);

	if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x4149 = UINT32_MAX;
	static int32_t x4150 = INT32_MIN;
	int64_t x4151 = 110883552415462959LL;
	volatile int8_t x4152 = 0;
	int64_t t70 = -245LL;

	t70 = (((x4149<=x4150)^x4151)>>x4152);

	if (t70 != 110883552415462959LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x4297 = 12;
	int16_t x4298 = -1;
	static uint8_t x4299 = UINT8_MAX;
	int8_t x4300 = 1;
	volatile int32_t t71 = 365289;

	t71 = (((x4297<=x4298)^x4299)>>x4300);

	if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x4373 = 24;
	volatile uint8_t x4374 = 5U;
	static int32_t x4375 = INT32_MAX;
	uint64_t x4376 = 11LLU;
	volatile int32_t t72 = 233;

	t72 = (((x4373<=x4374)^x4375)>>x4376);

	if (t72 != 1048575) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x4377 = INT8_MAX;
	volatile uint32_t x4379 = 491217U;
	static int8_t x4380 = 2;
	static uint32_t t73 = 2269472U;

	t73 = (((x4377<=x4378)^x4379)>>x4380);

	if (t73 != 122804U) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x4508 = 0U;
	volatile uint64_t t74 = 121312451727LLU;

	t74 = (((x4505<=x4506)^x4507)>>x4508);

	if (t74 != 419928620231LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int16_t x4549 = INT16_MIN;
	volatile int64_t x4550 = INT64_MIN;
	static uint32_t x4551 = 813165465U;
	uint8_t x4552 = 5U;

	t75 = (((x4549<=x4550)^x4551)>>x4552);

	if (t75 != 25411420U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x4553 = 54496898422772855LL;
	int64_t x4554 = 2LL;
	int64_t x4556 = 0LL;
	uint64_t t76 = 1LLU;

	t76 = (((x4553<=x4554)^x4555)>>x4556);

	if (t76 != 2377066473062LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x4621 = INT8_MIN;
	int16_t x4622 = -1;
	int64_t x4623 = 39419407LL;
	volatile uint8_t x4624 = 2U;

	t77 = (((x4621<=x4622)^x4623)>>x4624);

	if (t77 != 9854851LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x4637 = 99U;
	int64_t x4638 = INT64_MIN;
	int32_t x4639 = INT32_MAX;
	volatile uint8_t x4640 = 16U;

	t78 = (((x4637<=x4638)^x4639)>>x4640);

	if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x4661 = -1;
	static uint16_t x4662 = UINT16_MAX;
	uint8_t x4663 = UINT8_MAX;
	uint8_t x4664 = 0U;
	int32_t t79 = 55711;

	t79 = (((x4661<=x4662)^x4663)>>x4664);

	if (t79 != 254) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x4717 = 83U;
	volatile uint64_t x4718 = UINT64_MAX;
	static volatile uint16_t x4719 = UINT16_MAX;
	uint8_t x4720 = 3U;
	int32_t t80 = -789;

	t80 = (((x4717<=x4718)^x4719)>>x4720);

	if (t80 != 8191) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x4753 = 23U;
	int16_t x4754 = 157;
	uint32_t x4755 = 904242435U;
	static volatile uint32_t t81 = 910U;

	t81 = (((x4753<=x4754)^x4755)>>x4756);

	if (t81 != 226060608U) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x4957 = -1;
	uint8_t x4959 = 68U;
	int8_t x4960 = 1;
	volatile int32_t t82 = 62;

	t82 = (((x4957<=x4958)^x4959)>>x4960);

	if (t82 != 34) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x4989 = 845;
	volatile uint64_t x4990 = 109487684LLU;
	int16_t x4991 = 1518;
	uint8_t x4992 = 3U;
	int32_t t83 = -2495318;

	t83 = (((x4989<=x4990)^x4991)>>x4992);

	if (t83 != 189) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x4998 = 592082056897000574LLU;
	volatile uint64_t x4999 = 79LLU;
	uint8_t x5000 = 1U;
	volatile uint64_t t84 = 1097533025LLU;

	t84 = (((x4997<=x4998)^x4999)>>x5000);

	if (t84 != 39LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x5018 = INT64_MIN;
	static uint32_t x5019 = UINT32_MAX;
	volatile uint32_t t85 = 6321U;

	t85 = (((x5017<=x5018)^x5019)>>x5020);

	if (t85 != 268435455U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x5153 = -1LL;
	static volatile int32_t x5154 = 14450;
	uint64_t x5155 = 2088LLU;
	int16_t x5156 = 24;
	volatile uint64_t t86 = 1305601152905665LLU;

	t86 = (((x5153<=x5154)^x5155)>>x5156);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x5169 = INT8_MIN;
	volatile int8_t x5170 = INT8_MIN;
	uint16_t x5171 = UINT16_MAX;
	uint16_t x5172 = 4U;
	int32_t t87 = -3498633;

	t87 = (((x5169<=x5170)^x5171)>>x5172);

	if (t87 != 4095) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x5341 = UINT64_MAX;
	static int16_t x5343 = INT16_MAX;
	int8_t x5344 = 4;
	static int32_t t88 = 36;

	t88 = (((x5341<=x5342)^x5343)>>x5344);

	if (t88 != 2047) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x5434 = 13164U;
	uint8_t x5435 = UINT8_MAX;
	uint64_t x5436 = 1LLU;
	volatile int32_t t89 = 57;

	t89 = (((x5433<=x5434)^x5435)>>x5436);

	if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x5493 = INT16_MIN;
	uint8_t x5495 = 1U;
	int16_t x5496 = 8;
	int32_t t90 = 176641507;

	t90 = (((x5493<=x5494)^x5495)>>x5496);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x5517 = -14276;
	uint32_t x5518 = 4942U;
	static uint32_t x5519 = UINT32_MAX;

	t91 = (((x5517<=x5518)^x5519)>>x5520);

	if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x5605 = 1;
	volatile int8_t x5606 = INT8_MIN;
	volatile int16_t x5607 = 2547;
	uint16_t x5608 = 21U;
	int32_t t92 = -4;

	t92 = (((x5605<=x5606)^x5607)>>x5608);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x5739 = INT64_MAX;
	int64_t t93 = 47905745200830LL;

	t93 = (((x5737<=x5738)^x5739)>>x5740);

	if (t93 != 34359738367LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x5789 = -2;
	int64_t x5791 = INT64_MAX;

	t94 = (((x5789<=x5790)^x5791)>>x5792);

	if (t94 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x5829 = -1LL;
	int64_t x5830 = 8819235466541251LL;
	uint8_t x5832 = 2U;
	int32_t t95 = -58792696;

	t95 = (((x5829<=x5830)^x5831)>>x5832);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x5881 = INT64_MIN;
	uint8_t x5882 = 91U;
	volatile uint8_t x5884 = 0U;

	t96 = (((x5881<=x5882)^x5883)>>x5884);

	if (t96 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x5946 = UINT32_MAX;
	volatile int64_t x5947 = INT64_MAX;
	uint16_t x5948 = 1U;
	volatile int64_t t97 = 13549671689LL;

	t97 = (((x5945<=x5946)^x5947)>>x5948);

	if (t97 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x5993 = INT32_MAX;
	uint16_t x5994 = 720U;
	uint8_t x5996 = 4U;
	static volatile uint32_t t98 = 67106498U;

	t98 = (((x5993<=x5994)^x5995)>>x5996);

	if (t98 != 26336996U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x6045 = INT8_MIN;
	static int8_t x6046 = INT8_MIN;
	static int8_t x6047 = 1;
	int32_t t99 = -14312;

	t99 = (((x6045<=x6046)^x6047)>>x6048);

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

