#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x100 = 3;
int16_t x111 = 15473;
uint64_t x223 = 581LLU;
int8_t x224 = 9;
int16_t x254 = INT16_MAX;
volatile uint16_t x256 = 8U;
int32_t t9 = 8;
int16_t x469 = INT16_MAX;
static int64_t x745 = INT64_MAX;
volatile uint32_t x901 = 1U;
static int8_t x903 = INT8_MAX;
static uint32_t x926 = 20781418U;
int8_t x1013 = -6;
uint8_t x1068 = 3U;
static int8_t x1093 = 2;
static uint64_t t22 = 3083985LLU;
int8_t x1277 = INT8_MIN;
static uint8_t x1278 = 7U;
volatile int32_t t24 = -16498503;
int64_t x1374 = 23563097888811LL;
static int16_t x1375 = 46;
int32_t t25 = -14;
int8_t x1448 = 4;
volatile int8_t x1541 = INT8_MAX;
static uint64_t x1546 = 4302385091524605LLU;
uint64_t t30 = 29LLU;
volatile uint8_t x1776 = 1U;
volatile int32_t t31 = 7;
uint64_t x1811 = 3489337797105992721LLU;
uint64_t t33 = 171765LLU;
uint32_t x1951 = UINT32_MAX;
volatile int32_t t36 = 1;
int64_t x2135 = INT64_MAX;
uint64_t t39 = 537456830802LLU;
uint16_t x2168 = 29U;
uint32_t x2229 = 5U;
int64_t x2231 = INT64_MAX;
volatile int64_t t42 = -894LL;
int8_t x2236 = 4;
volatile uint64_t t43 = 119218618062035050LLU;
uint32_t x2287 = 480742396U;
static uint64_t x2366 = 48645056249141LLU;
volatile uint8_t x2378 = 15U;
volatile int64_t t47 = 241591222128137LL;
uint8_t x2578 = UINT8_MAX;
uint64_t x2741 = 95338460LLU;
uint64_t x2743 = 12274988399103077LLU;
static int16_t x2929 = 5709;
int64_t x2930 = -5753454487828786LL;
static uint8_t x2932 = 2U;
volatile int32_t t55 = -21485845;
int16_t x3118 = INT16_MAX;
volatile uint16_t x3197 = UINT16_MAX;
volatile int32_t t59 = 0;
static int16_t x3325 = INT16_MIN;
uint32_t x3326 = 271U;
uint8_t x3327 = 76U;
int8_t x3328 = 6;
static int64_t x3469 = INT64_MIN;
uint64_t x3470 = UINT64_MAX;
uint8_t x3605 = 77U;
int32_t x3718 = INT32_MIN;
uint64_t x3813 = 18953LLU;
static volatile int32_t x3814 = INT32_MIN;
static int64_t x3915 = INT64_MAX;
uint32_t x3940 = 3U;
static int64_t t73 = -603854844466968LL;
static uint64_t x4199 = 17337750527LLU;
uint8_t x4268 = 0U;
int8_t x4292 = 0;
uint16_t x4338 = 1994U;
uint32_t x4354 = 422155690U;
uint32_t x4355 = UINT32_MAX;
static volatile uint32_t x4455 = 28557U;
static int64_t x4486 = 6556320659383LL;
uint32_t x4487 = UINT32_MAX;
uint16_t x4488 = 5U;
uint64_t x4543 = UINT64_MAX;
uint8_t x4553 = 20U;
int8_t x4634 = -1;
static int16_t x4635 = INT16_MAX;
volatile int32_t t85 = -125238556;
int32_t x4795 = 26622972;
static int32_t x4805 = -1;
int8_t x4882 = INT8_MAX;
static int8_t x4932 = 2;
volatile uint16_t x5077 = UINT16_MAX;
int8_t x5156 = 1;
static volatile uint8_t x5161 = UINT8_MAX;
int64_t x5163 = INT64_MAX;
int64_t x5195 = 23327558385LL;
static volatile int64_t x5209 = -401878216LL;
int8_t x5212 = 9;
static uint8_t x5304 = 0U;
static volatile int32_t t99 = -8037;


void f0(void) {
	uint8_t x77 = 2U;
	static int16_t x78 = -1;
	int8_t x79 = 1;
	int16_t x80 = 0;
	volatile int32_t t0 = 320934;

	t0 = ((x77<x78)%(x79>>x80));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x97 = 87U;
	volatile int16_t x98 = -6;
	int64_t x99 = INT64_MAX;
	int64_t t1 = 305915LL;

	t1 = ((x97<x98)%(x99>>x100));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x109 = UINT64_MAX;
	static int8_t x110 = INT8_MAX;
	int16_t x112 = 10;
	volatile int32_t t2 = -1484;

	t2 = ((x109<x110)%(x111>>x112));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x121 = 225U;
	int32_t x122 = 0;
	volatile uint32_t x123 = UINT32_MAX;
	uint8_t x124 = 19U;
	uint32_t t3 = 653300683U;

	t3 = ((x121<x122)%(x123>>x124));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x157 = INT8_MIN;
	int32_t x158 = INT32_MIN;
	uint16_t x159 = UINT16_MAX;
	int8_t x160 = 2;
	int32_t t4 = -749;

	t4 = ((x157<x158)%(x159>>x160));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x221 = -1;
	static int8_t x222 = INT8_MAX;
	static volatile uint64_t t5 = 41501LLU;

	t5 = ((x221<x222)%(x223>>x224));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x253 = 5;
	uint32_t x255 = 125587326U;
	volatile uint32_t t6 = 307U;

	t6 = ((x253<x254)%(x255>>x256));

	if (t6 != 1U) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x353 = 15U;
	uint64_t x354 = UINT64_MAX;
	static int64_t x355 = 1707909897267LL;
	int32_t x356 = 20;
	volatile int64_t t7 = 1008476222024295618LL;

	t7 = ((x353<x354)%(x355>>x356));

	if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x377 = INT32_MAX;
	static int32_t x378 = 812685980;
	static uint32_t x379 = 1479095873U;
	int8_t x380 = 0;
	volatile uint32_t t8 = 17101U;

	t8 = ((x377<x378)%(x379>>x380));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x389 = INT8_MIN;
	static int32_t x390 = 2513783;
	volatile uint16_t x391 = UINT16_MAX;
	static int64_t x392 = 0LL;

	t9 = ((x389<x390)%(x391>>x392));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x470 = 1977U;
	int32_t x471 = INT32_MAX;
	volatile int8_t x472 = 1;
	int32_t t10 = -29;

	t10 = ((x469<x470)%(x471>>x472));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x485 = -1;
	volatile int8_t x486 = INT8_MIN;
	int16_t x487 = INT16_MAX;
	static volatile int16_t x488 = 1;
	int32_t t11 = -151;

	t11 = ((x485<x486)%(x487>>x488));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x693 = 384614;
	int32_t x694 = 0;
	static volatile uint16_t x695 = UINT16_MAX;
	int8_t x696 = 0;
	static volatile int32_t t12 = -15;

	t12 = ((x693<x694)%(x695>>x696));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x746 = INT16_MIN;
	uint32_t x747 = UINT32_MAX;
	uint64_t x748 = 0LLU;
	volatile uint32_t t13 = 4751U;

	t13 = ((x745<x746)%(x747>>x748));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint16_t x789 = 170U;
	static int16_t x790 = INT16_MIN;
	int16_t x791 = 914;
	static uint64_t x792 = 0LLU;
	static volatile int32_t t14 = 1;

	t14 = ((x789<x790)%(x791>>x792));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x897 = 80U;
	uint8_t x898 = UINT8_MAX;
	uint64_t x899 = 2436524LLU;
	static int16_t x900 = 2;
	volatile uint64_t t15 = 4592955661764348577LLU;

	t15 = ((x897<x898)%(x899>>x900));

	if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x902 = 7U;
	volatile uint32_t x904 = 2U;
	static int32_t t16 = 639377;

	t16 = ((x901<x902)%(x903>>x904));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x925 = 0U;
	static uint16_t x927 = 108U;
	volatile uint8_t x928 = 5U;
	volatile int32_t t17 = -4146;

	t17 = ((x925<x926)%(x927>>x928));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x1014 = INT64_MAX;
	uint64_t x1015 = UINT64_MAX;
	uint32_t x1016 = 6U;
	volatile uint64_t t18 = 127193168881501611LLU;

	t18 = ((x1013<x1014)%(x1015>>x1016));

	if (t18 != 1LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x1021 = 1U;
	int64_t x1022 = INT64_MIN;
	volatile int16_t x1023 = 219;
	uint8_t x1024 = 1U;
	volatile int32_t t19 = -233276;

	t19 = ((x1021<x1022)%(x1023>>x1024));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1065 = INT8_MIN;
	static volatile int32_t x1066 = INT32_MIN;
	int8_t x1067 = 10;
	static volatile int32_t t20 = 25356;

	t20 = ((x1065<x1066)%(x1067>>x1068));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x1094 = 5176297003061LLU;
	static uint32_t x1095 = UINT32_MAX;
	uint8_t x1096 = 7U;
	volatile uint32_t t21 = 3111U;

	t21 = ((x1093<x1094)%(x1095>>x1096));

	if (t21 != 1U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x1145 = 95570LLU;
	int8_t x1146 = INT8_MIN;
	uint64_t x1147 = 69773572645979LLU;
	int8_t x1148 = 5;

	t22 = ((x1145<x1146)%(x1147>>x1148));

	if (t22 != 1LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1279 = 228433429751912LL;
	static uint16_t x1280 = 3U;
	int64_t t23 = 14470415087442LL;

	t23 = ((x1277<x1278)%(x1279>>x1280));

	if (t23 != 1LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1289 = -381577LL;
	uint16_t x1290 = 32U;
	int16_t x1291 = 1335;
	int8_t x1292 = 1;

	t24 = ((x1289<x1290)%(x1291>>x1292));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x1373 = INT16_MAX;
	static int8_t x1376 = 1;

	t25 = ((x1373<x1374)%(x1375>>x1376));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x1393 = 6536599385161479678LLU;
	static volatile int8_t x1394 = 0;
	static int32_t x1395 = INT32_MAX;
	int32_t x1396 = 10;
	int32_t t26 = -3;

	t26 = ((x1393<x1394)%(x1395>>x1396));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1445 = 4469LLU;
	uint8_t x1446 = UINT8_MAX;
	static uint16_t x1447 = UINT16_MAX;
	volatile int32_t t27 = 6288;

	t27 = ((x1445<x1446)%(x1447>>x1448));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x1542 = UINT16_MAX;
	int64_t x1543 = INT64_MAX;
	uint8_t x1544 = 1U;
	volatile int64_t t28 = 1770561LL;

	t28 = ((x1541<x1542)%(x1543>>x1544));

	if (t28 != 1LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1545 = INT8_MIN;
	uint64_t x1547 = 218039LLU;
	int8_t x1548 = 2;
	static uint64_t t29 = 3016LLU;

	t29 = ((x1545<x1546)%(x1547>>x1548));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x1713 = INT32_MIN;
	uint64_t x1714 = 5830567565862775LLU;
	static uint64_t x1715 = UINT64_MAX;
	volatile int64_t x1716 = 1LL;

	t30 = ((x1713<x1714)%(x1715>>x1716));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x1773 = 109134375;
	static int64_t x1774 = INT64_MIN;
	int16_t x1775 = INT16_MAX;

	t31 = ((x1773<x1774)%(x1775>>x1776));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1801 = UINT16_MAX;
	static uint64_t x1802 = UINT64_MAX;
	static volatile uint8_t x1803 = UINT8_MAX;
	int8_t x1804 = 3;
	int32_t t32 = 15471634;

	t32 = ((x1801<x1802)%(x1803>>x1804));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x1809 = 2U;
	static int32_t x1810 = -1;
	int8_t x1812 = 2;

	t33 = ((x1809<x1810)%(x1811>>x1812));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x1937 = 1581U;
	volatile int16_t x1938 = 1;
	static int16_t x1939 = INT16_MAX;
	volatile uint8_t x1940 = 0U;
	int32_t t34 = -102;

	t34 = ((x1937<x1938)%(x1939>>x1940));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x1949 = 118612000349LLU;
	int32_t x1950 = -1;
	static int16_t x1952 = 1;
	uint32_t t35 = 32168169U;

	t35 = ((x1949<x1950)%(x1951>>x1952));

	if (t35 != 1U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x1953 = 3691995740987257LLU;
	volatile int32_t x1954 = 1483834;
	int8_t x1955 = 54;
	uint8_t x1956 = 1U;

	t36 = ((x1953<x1954)%(x1955>>x1956));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x2061 = 5237U;
	int16_t x2062 = INT16_MAX;
	uint16_t x2063 = 6531U;
	int8_t x2064 = 2;
	int32_t t37 = -2634;

	t37 = ((x2061<x2062)%(x2063>>x2064));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x2133 = INT32_MIN;
	volatile uint16_t x2134 = 252U;
	volatile uint16_t x2136 = 7U;
	int64_t t38 = 71483LL;

	t38 = ((x2133<x2134)%(x2135>>x2136));

	if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x2141 = -1;
	static uint16_t x2142 = 1597U;
	uint64_t x2143 = UINT64_MAX;
	int32_t x2144 = 56;

	t39 = ((x2141<x2142)%(x2143>>x2144));

	if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x2145 = INT32_MAX;
	uint32_t x2146 = 930U;
	static int16_t x2147 = INT16_MAX;
	uint16_t x2148 = 1U;
	static volatile int32_t t40 = -9;

	t40 = ((x2145<x2146)%(x2147>>x2148));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2165 = -1;
	static int16_t x2166 = INT16_MAX;
	int32_t x2167 = INT32_MAX;
	volatile int32_t t41 = -18806826;

	t41 = ((x2165<x2166)%(x2167>>x2168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x2230 = 35U;
	uint64_t x2232 = 2LLU;

	t42 = ((x2229<x2230)%(x2231>>x2232));

	if (t42 != 1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x2233 = INT8_MAX;
	static int8_t x2234 = INT8_MIN;
	uint64_t x2235 = UINT64_MAX;

	t43 = ((x2233<x2234)%(x2235>>x2236));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x2285 = UINT64_MAX;
	int16_t x2286 = INT16_MIN;
	uint16_t x2288 = 3U;
	uint32_t t44 = 168U;

	t44 = ((x2285<x2286)%(x2287>>x2288));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x2293 = INT16_MAX;
	volatile uint16_t x2294 = 67U;
	int32_t x2295 = 1217156;
	static int8_t x2296 = 1;
	volatile int32_t t45 = 459;

	t45 = ((x2293<x2294)%(x2295>>x2296));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x2365 = INT16_MAX;
	uint32_t x2367 = 324U;
	volatile uint16_t x2368 = 0U;
	static uint32_t t46 = 284U;

	t46 = ((x2365<x2366)%(x2367>>x2368));

	if (t46 != 1U) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x2377 = INT64_MIN;
	int64_t x2379 = 31312625LL;
	uint8_t x2380 = 10U;

	t47 = ((x2377<x2378)%(x2379>>x2380));

	if (t47 != 1LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x2577 = INT64_MIN;
	uint8_t x2579 = UINT8_MAX;
	uint8_t x2580 = 1U;
	volatile int32_t t48 = -4;

	t48 = ((x2577<x2578)%(x2579>>x2580));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x2593 = UINT8_MAX;
	int64_t x2594 = 2532LL;
	uint32_t x2595 = 56241413U;
	int16_t x2596 = 13;
	uint32_t t49 = 520U;

	t49 = ((x2593<x2594)%(x2595>>x2596));

	if (t49 != 1U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x2713 = -1;
	int64_t x2714 = INT64_MIN;
	uint64_t x2715 = 59742LLU;
	uint16_t x2716 = 1U;
	uint64_t t50 = 915056266376756LLU;

	t50 = ((x2713<x2714)%(x2715>>x2716));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x2742 = 255778523;
	uint16_t x2744 = 0U;
	static uint64_t t51 = 117792371093LLU;

	t51 = ((x2741<x2742)%(x2743>>x2744));

	if (t51 != 1LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x2797 = 11;
	static uint16_t x2798 = UINT16_MAX;
	int8_t x2799 = 9;
	volatile uint8_t x2800 = 1U;
	int32_t t52 = 211232828;

	t52 = ((x2797<x2798)%(x2799>>x2800));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x2931 = 7;
	volatile int32_t t53 = -684470;

	t53 = ((x2929<x2930)%(x2931>>x2932));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x3073 = -5162770726LL;
	int64_t x3074 = INT64_MAX;
	volatile int8_t x3075 = 1;
	int32_t x3076 = 0;
	int32_t t54 = 4;

	t54 = ((x3073<x3074)%(x3075>>x3076));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x3089 = 261202435048878042LL;
	uint64_t x3090 = 92LLU;
	int16_t x3091 = 7892;
	uint16_t x3092 = 0U;

	t55 = ((x3089<x3090)%(x3091>>x3092));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x3117 = UINT8_MAX;
	volatile int8_t x3119 = INT8_MAX;
	static uint16_t x3120 = 1U;
	volatile int32_t t56 = -5;

	t56 = ((x3117<x3118)%(x3119>>x3120));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x3153 = -135891902;
	uint8_t x3154 = 0U;
	uint32_t x3155 = 106038809U;
	volatile uint8_t x3156 = 3U;
	static volatile uint32_t t57 = 688162204U;

	t57 = ((x3153<x3154)%(x3155>>x3156));

	if (t57 != 1U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x3198 = INT64_MAX;
	volatile uint64_t x3199 = 15LLU;
	uint32_t x3200 = 1U;
	static uint64_t t58 = 100502308435LLU;

	t58 = ((x3197<x3198)%(x3199>>x3200));

	if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x3245 = 867U;
	volatile int64_t x3246 = 17386074062766735LL;
	volatile int32_t x3247 = INT32_MAX;
	uint8_t x3248 = 0U;

	t59 = ((x3245<x3246)%(x3247>>x3248));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x3269 = -1;
	volatile uint8_t x3270 = 2U;
	int16_t x3271 = 25;
	int32_t x3272 = 1;
	volatile int32_t t60 = -1647832;

	t60 = ((x3269<x3270)%(x3271>>x3272));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t t61 = -367562;

	t61 = ((x3325<x3326)%(x3327>>x3328));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x3349 = INT16_MIN;
	static volatile uint16_t x3350 = UINT16_MAX;
	int64_t x3351 = 452182788LL;
	static uint8_t x3352 = 2U;
	static int64_t t62 = 158563773005133LL;

	t62 = ((x3349<x3350)%(x3351>>x3352));

	if (t62 != 1LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x3471 = UINT16_MAX;
	int8_t x3472 = 0;
	static int32_t t63 = -98079335;

	t63 = ((x3469<x3470)%(x3471>>x3472));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x3533 = -24681156172LL;
	volatile int16_t x3534 = 11165;
	static uint8_t x3535 = 96U;
	uint64_t x3536 = 1LLU;
	int32_t t64 = 226;

	t64 = ((x3533<x3534)%(x3535>>x3536));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x3565 = INT64_MIN;
	int8_t x3566 = -27;
	int8_t x3567 = INT8_MAX;
	uint16_t x3568 = 0U;
	static int32_t t65 = -50374558;

	t65 = ((x3565<x3566)%(x3567>>x3568));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x3606 = 0;
	volatile uint64_t x3607 = 4146439600LLU;
	uint32_t x3608 = 0U;
	uint64_t t66 = 14686573998803LLU;

	t66 = ((x3605<x3606)%(x3607>>x3608));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x3717 = -1;
	uint32_t x3719 = UINT32_MAX;
	uint8_t x3720 = 3U;
	static uint32_t t67 = 176U;

	t67 = ((x3717<x3718)%(x3719>>x3720));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x3797 = INT64_MIN;
	int32_t x3798 = -1;
	uint64_t x3799 = 16756947838363LLU;
	volatile uint16_t x3800 = 11U;
	uint64_t t68 = 3LLU;

	t68 = ((x3797<x3798)%(x3799>>x3800));

	if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x3815 = UINT32_MAX;
	static uint16_t x3816 = 9U;
	uint32_t t69 = 123196009U;

	t69 = ((x3813<x3814)%(x3815>>x3816));

	if (t69 != 1U) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x3913 = 0;
	int64_t x3914 = -3495178783790921LL;
	int8_t x3916 = 50;
	volatile int64_t t70 = -4176767172150994539LL;

	t70 = ((x3913<x3914)%(x3915>>x3916));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x3937 = 1996382U;
	int32_t x3938 = INT32_MIN;
	uint64_t x3939 = 2332695440095743217LLU;
	uint64_t t71 = 6743937071998752126LLU;

	t71 = ((x3937<x3938)%(x3939>>x3940));

	if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int8_t x3961 = INT8_MIN;
	uint16_t x3962 = UINT16_MAX;
	uint8_t x3963 = 3U;
	uint8_t x3964 = 0U;
	static int32_t t72 = -12544;

	t72 = ((x3961<x3962)%(x3963>>x3964));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x3981 = INT64_MIN;
	uint32_t x3982 = UINT32_MAX;
	int64_t x3983 = INT64_MAX;
	int8_t x3984 = 18;

	t73 = ((x3981<x3982)%(x3983>>x3984));

	if (t73 != 1LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x4197 = -92639487LL;
	uint16_t x4198 = UINT16_MAX;
	uint8_t x4200 = 0U;
	volatile uint64_t t74 = 21913466061LLU;

	t74 = ((x4197<x4198)%(x4199>>x4200));

	if (t74 != 1LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x4265 = 1U;
	int8_t x4266 = -7;
	uint32_t x4267 = 2U;
	uint32_t t75 = 236175470U;

	t75 = ((x4265<x4266)%(x4267>>x4268));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x4289 = -1LL;
	int8_t x4290 = INT8_MIN;
	uint64_t x4291 = 38820515999766577LLU;
	static volatile uint64_t t76 = 11903LLU;

	t76 = ((x4289<x4290)%(x4291>>x4292));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x4293 = UINT8_MAX;
	uint64_t x4294 = 0LLU;
	uint64_t x4295 = UINT64_MAX;
	uint8_t x4296 = 3U;
	volatile uint64_t t77 = 20951593878LLU;

	t77 = ((x4293<x4294)%(x4295>>x4296));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x4337 = -1;
	int32_t x4339 = 13485292;
	uint16_t x4340 = 22U;
	int32_t t78 = 12;

	t78 = ((x4337<x4338)%(x4339>>x4340));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x4353 = INT64_MAX;
	volatile int8_t x4356 = 0;
	static volatile uint32_t t79 = 1U;

	t79 = ((x4353<x4354)%(x4355>>x4356));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x4453 = 1534767;
	volatile int16_t x4454 = INT16_MAX;
	uint8_t x4456 = 2U;
	volatile uint32_t t80 = 185336U;

	t80 = ((x4453<x4454)%(x4455>>x4456));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x4477 = -30;
	static int32_t x4478 = INT32_MIN;
	int64_t x4479 = INT64_MAX;
	uint8_t x4480 = 0U;
	volatile int64_t t81 = 23047LL;

	t81 = ((x4477<x4478)%(x4479>>x4480));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x4485 = INT64_MIN;
	volatile uint32_t t82 = 128892U;

	t82 = ((x4485<x4486)%(x4487>>x4488));

	if (t82 != 1U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x4541 = UINT8_MAX;
	int32_t x4542 = 15929;
	int8_t x4544 = 1;
	volatile uint64_t t83 = 110153237927896066LLU;

	t83 = ((x4541<x4542)%(x4543>>x4544));

	if (t83 != 1LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x4554 = INT32_MIN;
	int32_t x4555 = INT32_MAX;
	uint8_t x4556 = 6U;
	int32_t t84 = -3;

	t84 = ((x4553<x4554)%(x4555>>x4556));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x4633 = INT32_MIN;
	static int8_t x4636 = 1;

	t85 = ((x4633<x4634)%(x4635>>x4636));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x4793 = -9;
	int32_t x4794 = INT32_MIN;
	uint8_t x4796 = 6U;
	int32_t t86 = 1938471;

	t86 = ((x4793<x4794)%(x4795>>x4796));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x4806 = 11657U;
	static int64_t x4807 = INT64_MAX;
	uint8_t x4808 = 3U;
	int64_t t87 = -2465101602LL;

	t87 = ((x4805<x4806)%(x4807>>x4808));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x4881 = UINT16_MAX;
	static uint64_t x4883 = 4755LLU;
	volatile int64_t x4884 = 7LL;
	static uint64_t t88 = 229284126108LLU;

	t88 = ((x4881<x4882)%(x4883>>x4884));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x4929 = INT16_MAX;
	static int64_t x4930 = -124320LL;
	uint64_t x4931 = 4617886115441690LLU;
	static uint64_t t89 = 16LLU;

	t89 = ((x4929<x4930)%(x4931>>x4932));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x4941 = INT32_MIN;
	int64_t x4942 = -1133863992401388887LL;
	static uint32_t x4943 = UINT32_MAX;
	uint8_t x4944 = 0U;
	volatile uint32_t t90 = 485U;

	t90 = ((x4941<x4942)%(x4943>>x4944));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x4965 = INT32_MAX;
	int32_t x4966 = -411;
	volatile uint64_t x4967 = 4425401LLU;
	uint64_t x4968 = 4LLU;
	volatile uint64_t t91 = 2000805244697667LLU;

	t91 = ((x4965<x4966)%(x4967>>x4968));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x5078 = INT16_MAX;
	uint64_t x5079 = UINT64_MAX;
	uint16_t x5080 = 3U;
	volatile uint64_t t92 = 684867086257LLU;

	t92 = ((x5077<x5078)%(x5079>>x5080));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x5109 = 1746U;
	static int64_t x5110 = INT64_MIN;
	static uint8_t x5111 = 26U;
	uint8_t x5112 = 2U;
	volatile int32_t t93 = -5;

	t93 = ((x5109<x5110)%(x5111>>x5112));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x5153 = -1;
	static int32_t x5154 = -1;
	static int8_t x5155 = 11;
	static int32_t t94 = -1506;

	t94 = ((x5153<x5154)%(x5155>>x5156));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x5162 = -1;
	uint8_t x5164 = 20U;
	volatile int64_t t95 = 469292639617580LL;

	t95 = ((x5161<x5162)%(x5163>>x5164));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x5193 = UINT8_MAX;
	int16_t x5194 = INT16_MIN;
	int8_t x5196 = 1;
	int64_t t96 = 2011405LL;

	t96 = ((x5193<x5194)%(x5195>>x5196));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x5210 = 3937769U;
	uint64_t x5211 = UINT64_MAX;
	volatile uint64_t t97 = 18LLU;

	t97 = ((x5209<x5210)%(x5211>>x5212));

	if (t97 != 1LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x5241 = INT32_MIN;
	int8_t x5242 = INT8_MAX;
	uint32_t x5243 = UINT32_MAX;
	uint8_t x5244 = 27U;
	uint32_t t98 = 0U;

	t98 = ((x5241<x5242)%(x5243>>x5244));

	if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x5301 = INT16_MAX;
	int64_t x5302 = -1LL;
	static int8_t x5303 = 3;

	t99 = ((x5301<x5302)%(x5303>>x5304));

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

