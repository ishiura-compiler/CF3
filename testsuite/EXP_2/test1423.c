#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x89 = 8LLU;
int8_t x92 = 0;
int16_t x134 = INT16_MIN;
volatile uint64_t t5 = 29000194LLU;
static uint64_t t9 = 3LLU;
int16_t x716 = 1;
uint32_t x945 = 0U;
uint16_t x946 = 1001U;
int16_t x1034 = INT16_MIN;
int8_t x1036 = 2;
uint32_t x1063 = UINT32_MAX;
int16_t x1183 = -1;
int8_t x1184 = 17;
static int32_t t17 = -18043956;
uint8_t x1352 = 12U;
uint16_t x1370 = 7U;
volatile int64_t x1474 = 771LL;
int8_t x1492 = 59;
uint64_t x1633 = UINT64_MAX;
int64_t x1767 = INT64_MIN;
uint64_t x1929 = 207641LLU;
int64_t x1945 = 1248815352LL;
static int32_t x2000 = 0;
volatile uint64_t t31 = 22731524122228LLU;
static uint32_t t34 = 24816854U;
volatile int8_t x2334 = INT8_MAX;
uint32_t x2336 = 0U;
volatile int32_t t37 = -79839;
volatile int16_t x2354 = INT16_MIN;
volatile uint32_t t39 = 4035312U;
int8_t x2449 = 0;
int32_t t41 = 10877051;
int16_t x2504 = 1;
static uint8_t x2703 = 108U;
int16_t x2741 = INT16_MAX;
int16_t x2744 = 0;
int8_t x2765 = 0;
int32_t t47 = -381353525;
int64_t x2819 = -1LL;
static volatile int32_t t48 = -21;
static uint8_t x3055 = 19U;
int64_t t49 = 1068945410668LL;
volatile uint8_t x3155 = 9U;
uint16_t x3209 = 10U;
volatile uint8_t x3232 = 7U;
uint8_t x3264 = 11U;
uint16_t x3271 = UINT16_MAX;
static uint64_t t54 = 6077185901366LLU;
volatile int32_t x3306 = INT32_MAX;
int32_t x3318 = 28459398;
int32_t x3319 = INT32_MAX;
static volatile uint32_t x3405 = UINT32_MAX;
volatile int16_t x3618 = -1;
int16_t x3632 = 0;
uint32_t x3697 = 0U;
uint64_t x3750 = 0LLU;
volatile int32_t t63 = 0;
int64_t x3767 = -72477042847339188LL;
static int64_t x3870 = -425LL;
static uint8_t x3872 = 18U;
volatile int64_t t67 = 2LL;
int32_t x4034 = -146160693;
uint64_t x4035 = 7008948826241921309LLU;
static volatile uint32_t x4045 = UINT32_MAX;
uint32_t x4081 = UINT32_MAX;
int32_t t72 = 165278241;
static uint8_t x4120 = 23U;
volatile uint8_t x4249 = UINT8_MAX;
uint16_t x4250 = UINT16_MAX;
int16_t x4252 = 0;
int32_t t76 = -7789;
static int32_t x4526 = INT32_MIN;
int32_t x4636 = 1;
int8_t x4779 = -1;
uint64_t t83 = 1208490LLU;
int32_t x4937 = INT32_MAX;
volatile int16_t x4978 = INT16_MIN;
static uint32_t t88 = 1853U;
int32_t x5019 = INT32_MIN;
int32_t t90 = -244844;
int16_t x5346 = 206;
static int8_t x5347 = -1;
volatile int16_t x5383 = -86;
int32_t t94 = 9511;
uint64_t x5501 = 2913699LLU;
static int32_t x5502 = INT32_MIN;
static int8_t x5504 = 1;
uint64_t t96 = 28804700496LLU;
int8_t x5599 = 1;
int16_t x5631 = 8990;


void f0(void) {
	static uint32_t x1 = UINT32_MAX;
	volatile uint8_t x2 = 7U;
	static volatile uint16_t x3 = 201U;
	volatile uint32_t x4 = 0U;
	uint32_t t0 = 3614U;

	t0 = ((x1<<(x2<x3))<<x4);

	if (t0 != 4294967294U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x90 = INT64_MIN;
	int64_t x91 = -1LL;
	volatile uint64_t t1 = 13128LLU;

	t1 = ((x89<<(x90<x91))<<x92);

	if (t1 != 16LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x93 = UINT32_MAX;
	static volatile uint16_t x94 = 19760U;
	int8_t x95 = 31;
	uint8_t x96 = 31U;
	uint32_t t2 = 83U;

	t2 = ((x93<<(x94<x95))<<x96);

	if (t2 != 2147483648U) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x133 = 0U;
	int64_t x135 = 21117811472LL;
	int8_t x136 = 0;
	volatile int32_t t3 = -42009;

	t3 = ((x133<<(x134<x135))<<x136);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x137 = 90U;
	int32_t x138 = -4214;
	uint8_t x139 = 1U;
	uint8_t x140 = 11U;
	int32_t t4 = 26494;

	t4 = ((x137<<(x138<x139))<<x140);

	if (t4 != 368640) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x165 = 1897118825571377LLU;
	uint8_t x166 = 2U;
	int16_t x167 = INT16_MIN;
	uint32_t x168 = 33U;

	t5 = ((x165<<(x166<x167))<<x168);

	if (t5 != 14655777935626076160LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x393 = 1985LLU;
	static int32_t x394 = -1;
	static volatile int64_t x395 = INT64_MAX;
	uint8_t x396 = 2U;
	uint64_t t6 = 389735369475LLU;

	t6 = ((x393<<(x394<x395))<<x396);

	if (t6 != 15880LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x401 = 23537207U;
	int32_t x402 = 5;
	int64_t x403 = INT64_MAX;
	uint16_t x404 = 31U;
	volatile uint32_t t7 = 41280U;

	t7 = ((x401<<(x402<x403))<<x404);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x481 = INT8_MAX;
	int8_t x482 = INT8_MIN;
	static uint32_t x483 = 137071952U;
	uint32_t x484 = 1U;
	int32_t t8 = -28000196;

	t8 = ((x481<<(x482<x483))<<x484);

	if (t8 != 254) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x585 = 7506LLU;
	int16_t x586 = -11;
	static uint64_t x587 = UINT64_MAX;
	static uint8_t x588 = 5U;

	t9 = ((x585<<(x586<x587))<<x588);

	if (t9 != 480384LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x597 = INT16_MAX;
	static uint16_t x598 = 144U;
	volatile uint64_t x599 = 4454781297189398LLU;
	volatile uint8_t x600 = 3U;
	int32_t t10 = 16033126;

	t10 = ((x597<<(x598<x599))<<x600);

	if (t10 != 524272) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x713 = 3U;
	volatile int16_t x714 = -255;
	int32_t x715 = INT32_MAX;
	volatile int32_t t11 = -8081095;

	t11 = ((x713<<(x714<x715))<<x716);

	if (t11 != 12) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x947 = -1;
	int8_t x948 = 18;
	uint32_t t12 = 11834U;

	t12 = ((x945<<(x946<x947))<<x948);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x993 = INT16_MAX;
	int64_t x994 = -324298875LL;
	int8_t x995 = INT8_MIN;
	uint8_t x996 = 1U;
	volatile int32_t t13 = 9;

	t13 = ((x993<<(x994<x995))<<x996);

	if (t13 != 131068) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int32_t x1033 = 56;
	int32_t x1035 = 539;
	volatile int32_t t14 = 536741855;

	t14 = ((x1033<<(x1034<x1035))<<x1036);

	if (t14 != 448) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint16_t x1061 = 7U;
	uint32_t x1062 = UINT32_MAX;
	uint8_t x1064 = 9U;
	volatile int32_t t15 = 94241;

	t15 = ((x1061<<(x1062<x1063))<<x1064);

	if (t15 != 3584) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x1149 = 18U;
	int64_t x1150 = INT64_MAX;
	int16_t x1151 = INT16_MAX;
	uint16_t x1152 = 3U;
	int32_t t16 = -51;

	t16 = ((x1149<<(x1150<x1151))<<x1152);

	if (t16 != 144) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x1181 = 1507U;
	uint64_t x1182 = 12507446809LLU;

	t17 = ((x1181<<(x1182<x1183))<<x1184);

	if (t17 != 395051008) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x1349 = INT8_MAX;
	int8_t x1350 = INT8_MIN;
	uint64_t x1351 = UINT64_MAX;
	volatile int32_t t18 = -9503;

	t18 = ((x1349<<(x1350<x1351))<<x1352);

	if (t18 != 1040384) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1369 = INT8_MAX;
	int16_t x1371 = -315;
	static uint8_t x1372 = 1U;
	int32_t t19 = -40331485;

	t19 = ((x1369<<(x1370<x1371))<<x1372);

	if (t19 != 254) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint64_t x1473 = 4271457940LLU;
	volatile uint64_t x1475 = 66220LLU;
	uint8_t x1476 = 1U;
	volatile uint64_t t20 = 21078682868644LLU;

	t20 = ((x1473<<(x1474<x1475))<<x1476);

	if (t20 != 17085831760LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x1485 = 120042LL;
	int16_t x1486 = 61;
	uint32_t x1487 = 43U;
	volatile uint16_t x1488 = 3U;
	int64_t t21 = 7905573LL;

	t21 = ((x1485<<(x1486<x1487))<<x1488);

	if (t21 != 960336LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint64_t x1489 = 40449490219LLU;
	static int8_t x1490 = INT8_MAX;
	volatile int8_t x1491 = 2;
	static uint64_t t22 = 2112LLU;

	t22 = ((x1489<<(x1490<x1491))<<x1492);

	if (t22 != 6341068275337658368LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x1634 = 62U;
	uint32_t x1635 = UINT32_MAX;
	uint16_t x1636 = 52U;
	volatile uint64_t t23 = 5619412056070298905LLU;

	t23 = ((x1633<<(x1634<x1635))<<x1636);

	if (t23 != 18437736874454810624LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x1765 = 60831U;
	int8_t x1766 = INT8_MIN;
	uint8_t x1768 = 11U;
	uint32_t t24 = 9779786U;

	t24 = ((x1765<<(x1766<x1767))<<x1768);

	if (t24 != 124581888U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1781 = 41U;
	volatile uint16_t x1782 = 1U;
	volatile uint8_t x1783 = 105U;
	volatile uint16_t x1784 = 6U;
	static volatile uint32_t t25 = 234389U;

	t25 = ((x1781<<(x1782<x1783))<<x1784);

	if (t25 != 5248U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x1829 = INT8_MAX;
	int8_t x1830 = -1;
	int16_t x1831 = INT16_MIN;
	uint32_t x1832 = 10U;
	volatile int32_t t26 = 37749;

	t26 = ((x1829<<(x1830<x1831))<<x1832);

	if (t26 != 130048) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1857 = 55U;
	static int8_t x1858 = -1;
	int32_t x1859 = 1;
	uint8_t x1860 = 4U;
	volatile int32_t t27 = -7394;

	t27 = ((x1857<<(x1858<x1859))<<x1860);

	if (t27 != 1760) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x1925 = 270U;
	uint16_t x1926 = 15U;
	int8_t x1927 = 23;
	volatile int8_t x1928 = 16;
	static int32_t t28 = 2746;

	t28 = ((x1925<<(x1926<x1927))<<x1928);

	if (t28 != 35389440) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint16_t x1930 = 647U;
	int8_t x1931 = INT8_MAX;
	static uint16_t x1932 = 25U;
	static volatile uint64_t t29 = 1910314899LLU;

	t29 = ((x1929<<(x1930<x1931))<<x1932);

	if (t29 != 6967275814912LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1946 = INT64_MAX;
	volatile uint16_t x1947 = UINT16_MAX;
	uint8_t x1948 = 22U;
	volatile int64_t t30 = -3813852LL;

	t30 = ((x1945<<(x1946<x1947))<<x1948);

	if (t30 != 5237911226155008LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x1997 = 994LLU;
	int8_t x1998 = -1;
	int8_t x1999 = 20;

	t31 = ((x1997<<(x1998<x1999))<<x2000);

	if (t31 != 1988LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x2009 = 3424U;
	uint64_t x2010 = 315563182242024955LLU;
	uint32_t x2011 = 148206U;
	uint16_t x2012 = 1U;
	static int32_t t32 = -199772453;

	t32 = ((x2009<<(x2010<x2011))<<x2012);

	if (t32 != 6848) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x2029 = 6LLU;
	uint16_t x2030 = 382U;
	int16_t x2031 = INT16_MIN;
	int16_t x2032 = 58;
	volatile uint64_t t33 = 1064769142355667LLU;

	t33 = ((x2029<<(x2030<x2031))<<x2032);

	if (t33 != 1729382256910270464LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x2073 = UINT32_MAX;
	uint16_t x2074 = UINT16_MAX;
	int8_t x2075 = INT8_MIN;
	uint8_t x2076 = 2U;

	t34 = ((x2073<<(x2074<x2075))<<x2076);

	if (t34 != 4294967292U) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint32_t x2229 = 65124683U;
	int16_t x2230 = INT16_MAX;
	static uint16_t x2231 = 232U;
	uint16_t x2232 = 0U;
	static volatile uint32_t t35 = 37923U;

	t35 = ((x2229<<(x2230<x2231))<<x2232);

	if (t35 != 65124683U) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x2329 = 725U;
	static int32_t x2330 = 26831;
	static int32_t x2331 = -58819626;
	int8_t x2332 = 0;
	volatile int32_t t36 = -1071001871;

	t36 = ((x2329<<(x2330<x2331))<<x2332);

	if (t36 != 725) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x2333 = 113;
	int8_t x2335 = -1;

	t37 = ((x2333<<(x2334<x2335))<<x2336);

	if (t37 != 113) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2353 = INT16_MAX;
	int64_t x2355 = -2982179294024620590LL;
	uint32_t x2356 = 1U;
	volatile int32_t t38 = -231;

	t38 = ((x2353<<(x2354<x2355))<<x2356);

	if (t38 != 65534) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x2393 = 0U;
	int16_t x2394 = INT16_MIN;
	int32_t x2395 = INT32_MAX;
	int8_t x2396 = 0;

	t39 = ((x2393<<(x2394<x2395))<<x2396);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x2405 = 12U;
	volatile int8_t x2406 = INT8_MAX;
	int8_t x2407 = -1;
	uint16_t x2408 = 0U;
	static volatile int32_t t40 = -1;

	t40 = ((x2405<<(x2406<x2407))<<x2408);

	if (t40 != 12) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x2450 = INT16_MIN;
	int16_t x2451 = INT16_MIN;
	uint8_t x2452 = 0U;

	t41 = ((x2449<<(x2450<x2451))<<x2452);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x2501 = 270742372U;
	volatile int8_t x2502 = -32;
	int64_t x2503 = INT64_MIN;
	uint32_t t42 = 179835839U;

	t42 = ((x2501<<(x2502<x2503))<<x2504);

	if (t42 != 541484744U) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x2517 = 27U;
	int8_t x2518 = INT8_MIN;
	int8_t x2519 = INT8_MAX;
	int8_t x2520 = 1;
	int32_t t43 = 248813;

	t43 = ((x2517<<(x2518<x2519))<<x2520);

	if (t43 != 108) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x2701 = UINT32_MAX;
	int16_t x2702 = -1;
	volatile uint8_t x2704 = 2U;
	static volatile uint32_t t44 = 3414691U;

	t44 = ((x2701<<(x2702<x2703))<<x2704);

	if (t44 != 4294967288U) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x2742 = -2782902374LL;
	volatile int16_t x2743 = INT16_MIN;
	volatile int32_t t45 = -1;

	t45 = ((x2741<<(x2742<x2743))<<x2744);

	if (t45 != 65534) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x2766 = -12187;
	int32_t x2767 = -1;
	uint16_t x2768 = 0U;
	volatile int32_t t46 = -55;

	t46 = ((x2765<<(x2766<x2767))<<x2768);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint16_t x2789 = 5505U;
	static int8_t x2790 = INT8_MIN;
	volatile uint8_t x2791 = 33U;
	static uint8_t x2792 = 0U;

	t47 = ((x2789<<(x2790<x2791))<<x2792);

	if (t47 != 11010) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x2817 = 2U;
	static int32_t x2818 = -1368;
	volatile int16_t x2820 = 25;

	t48 = ((x2817<<(x2818<x2819))<<x2820);

	if (t48 != 134217728) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x3053 = 426694736LL;
	uint64_t x3054 = UINT64_MAX;
	uint8_t x3056 = 5U;

	t49 = ((x3053<<(x3054<x3055))<<x3056);

	if (t49 != 13654231552LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x3153 = INT16_MAX;
	volatile uint32_t x3154 = UINT32_MAX;
	static volatile int8_t x3156 = 1;
	volatile int32_t t50 = 15738220;

	t50 = ((x3153<<(x3154<x3155))<<x3156);

	if (t50 != 65534) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x3210 = INT64_MIN;
	static int16_t x3211 = INT16_MIN;
	int8_t x3212 = 2;
	int32_t t51 = 0;

	t51 = ((x3209<<(x3210<x3211))<<x3212);

	if (t51 != 80) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x3229 = 63LLU;
	int64_t x3230 = -1LL;
	int8_t x3231 = INT8_MIN;
	uint64_t t52 = 1700615891LLU;

	t52 = ((x3229<<(x3230<x3231))<<x3232);

	if (t52 != 8064LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x3261 = 0U;
	int8_t x3262 = INT8_MIN;
	static int32_t x3263 = -1;
	uint32_t t53 = 28U;

	t53 = ((x3261<<(x3262<x3263))<<x3264);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x3269 = UINT64_MAX;
	static volatile int64_t x3270 = INT64_MIN;
	volatile uint32_t x3272 = 2U;

	t54 = ((x3269<<(x3270<x3271))<<x3272);

	if (t54 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x3305 = 8711190130LLU;
	uint16_t x3307 = 30U;
	uint16_t x3308 = 6U;
	uint64_t t55 = 75LLU;

	t55 = ((x3305<<(x3306<x3307))<<x3308);

	if (t55 != 557516168320LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x3317 = 39U;
	uint8_t x3320 = 7U;
	int32_t t56 = 60489;

	t56 = ((x3317<<(x3318<x3319))<<x3320);

	if (t56 != 9984) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x3406 = INT8_MIN;
	int8_t x3407 = -1;
	uint32_t x3408 = 9U;
	uint32_t t57 = 14U;

	t57 = ((x3405<<(x3406<x3407))<<x3408);

	if (t57 != 4294966272U) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x3421 = UINT64_MAX;
	int8_t x3422 = 0;
	uint8_t x3423 = 0U;
	uint8_t x3424 = 0U;
	volatile uint64_t t58 = UINT64_MAX;

	t58 = ((x3421<<(x3422<x3423))<<x3424);

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x3617 = INT16_MAX;
	int16_t x3619 = INT16_MAX;
	static uint16_t x3620 = 3U;
	int32_t t59 = -518595256;

	t59 = ((x3617<<(x3618<x3619))<<x3620);

	if (t59 != 524272) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x3629 = 1;
	uint64_t x3630 = UINT64_MAX;
	volatile int32_t x3631 = 64;
	int32_t t60 = -24332577;

	t60 = ((x3629<<(x3630<x3631))<<x3632);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x3653 = UINT32_MAX;
	int64_t x3654 = 74688986361827121LL;
	int8_t x3655 = 29;
	static int8_t x3656 = 1;
	uint32_t t61 = 10033369U;

	t61 = ((x3653<<(x3654<x3655))<<x3656);

	if (t61 != 4294967294U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x3698 = -89;
	volatile int32_t x3699 = -380783;
	volatile int8_t x3700 = 1;
	volatile uint32_t t62 = 1778786352U;

	t62 = ((x3697<<(x3698<x3699))<<x3700);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int16_t x3749 = 11;
	int8_t x3751 = INT8_MIN;
	volatile uint8_t x3752 = 7U;

	t63 = ((x3749<<(x3750<x3751))<<x3752);

	if (t63 != 2816) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x3765 = INT16_MAX;
	int32_t x3766 = 4273;
	static volatile uint32_t x3768 = 1U;
	int32_t t64 = -97302;

	t64 = ((x3765<<(x3766<x3767))<<x3768);

	if (t64 != 65534) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x3861 = INT8_MAX;
	int64_t x3862 = -15084652LL;
	int8_t x3863 = INT8_MIN;
	int8_t x3864 = 11;
	volatile int32_t t65 = -29866;

	t65 = ((x3861<<(x3862<x3863))<<x3864);

	if (t65 != 520192) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x3869 = 3U;
	int8_t x3871 = -1;
	int32_t t66 = 244920467;

	t66 = ((x3869<<(x3870<x3871))<<x3872);

	if (t66 != 1572864) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x4013 = 147LL;
	int64_t x4014 = 71711530LL;
	int8_t x4015 = 1;
	uint16_t x4016 = 1U;

	t67 = ((x4013<<(x4014<x4015))<<x4016);

	if (t67 != 294LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x4033 = 498;
	uint8_t x4036 = 12U;
	int32_t t68 = -15374;

	t68 = ((x4033<<(x4034<x4035))<<x4036);

	if (t68 != 2039808) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x4046 = 8329U;
	uint8_t x4047 = 96U;
	volatile uint32_t x4048 = 1U;
	volatile uint32_t t69 = 25271U;

	t69 = ((x4045<<(x4046<x4047))<<x4048);

	if (t69 != 4294967294U) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x4057 = 31710U;
	uint16_t x4058 = 31054U;
	volatile int64_t x4059 = -1LL;
	int32_t x4060 = 14;
	static volatile int32_t t70 = -1278;

	t70 = ((x4057<<(x4058<x4059))<<x4060);

	if (t70 != 519536640) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x4082 = UINT32_MAX;
	static uint16_t x4083 = 1661U;
	volatile int32_t x4084 = 0;
	volatile uint32_t t71 = UINT32_MAX;

	t71 = ((x4081<<(x4082<x4083))<<x4084);

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x4109 = UINT8_MAX;
	int64_t x4110 = 278592LL;
	volatile int64_t x4111 = INT64_MIN;
	static uint16_t x4112 = 0U;

	t72 = ((x4109<<(x4110<x4111))<<x4112);

	if (t72 != 255) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x4113 = 36U;
	static int64_t x4114 = INT64_MIN;
	int8_t x4115 = -1;
	int16_t x4116 = 3;
	volatile int32_t t73 = 0;

	t73 = ((x4113<<(x4114<x4115))<<x4116);

	if (t73 != 576) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x4117 = 12749610046301198LLU;
	int32_t x4118 = INT32_MIN;
	volatile int16_t x4119 = INT16_MIN;
	static volatile uint64_t t74 = 31371303288677LLU;

	t74 = ((x4117<<(x4118<x4119))<<x4120);

	if (t74 != 12964127902948917248LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x4217 = 6214;
	volatile int64_t x4218 = -3049923494456LL;
	int32_t x4219 = -1;
	static uint8_t x4220 = 2U;
	int32_t t75 = 10874695;

	t75 = ((x4217<<(x4218<x4219))<<x4220);

	if (t75 != 49712) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x4251 = 8U;

	t76 = ((x4249<<(x4250<x4251))<<x4252);

	if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x4265 = 239988LLU;
	volatile int8_t x4266 = 1;
	int8_t x4267 = -6;
	static uint32_t x4268 = 1U;
	volatile uint64_t t77 = 945000247644046LLU;

	t77 = ((x4265<<(x4266<x4267))<<x4268);

	if (t77 != 479976LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x4285 = UINT32_MAX;
	static uint32_t x4286 = 14U;
	int32_t x4287 = -146654176;
	volatile uint8_t x4288 = 7U;
	uint32_t t78 = 216U;

	t78 = ((x4285<<(x4286<x4287))<<x4288);

	if (t78 != 4294967040U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x4309 = 6;
	uint8_t x4310 = UINT8_MAX;
	int8_t x4311 = -12;
	uint8_t x4312 = 4U;
	int32_t t79 = 65710860;

	t79 = ((x4309<<(x4310<x4311))<<x4312);

	if (t79 != 96) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x4365 = UINT64_MAX;
	int64_t x4366 = -534026234LL;
	int8_t x4367 = -41;
	uint8_t x4368 = 22U;
	volatile uint64_t t80 = 2156447759232990080LLU;

	t80 = ((x4365<<(x4366<x4367))<<x4368);

	if (t80 != 18446744073701163008LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x4525 = UINT64_MAX;
	int8_t x4527 = INT8_MAX;
	uint32_t x4528 = 13U;
	uint64_t t81 = 2119239960025637747LLU;

	t81 = ((x4525<<(x4526<x4527))<<x4528);

	if (t81 != 18446744073709535232LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x4633 = INT16_MAX;
	uint32_t x4634 = UINT32_MAX;
	static int64_t x4635 = INT64_MIN;
	static int32_t t82 = 436802771;

	t82 = ((x4633<<(x4634<x4635))<<x4636);

	if (t82 != 65534) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x4777 = UINT64_MAX;
	uint32_t x4778 = 691U;
	int8_t x4780 = 0;

	t83 = ((x4777<<(x4778<x4779))<<x4780);

	if (t83 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x4793 = UINT16_MAX;
	uint32_t x4794 = 1703837113U;
	uint8_t x4795 = 28U;
	uint16_t x4796 = 5U;
	static volatile int32_t t84 = 120154;

	t84 = ((x4793<<(x4794<x4795))<<x4796);

	if (t84 != 2097120) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x4821 = 1271674LLU;
	volatile int32_t x4822 = INT32_MIN;
	static volatile int8_t x4823 = INT8_MAX;
	static volatile int64_t x4824 = 10LL;
	static volatile uint64_t t85 = 6781713793317161LLU;

	t85 = ((x4821<<(x4822<x4823))<<x4824);

	if (t85 != 2604388352LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x4901 = 188643U;
	static int32_t x4902 = -1;
	int32_t x4903 = 1521178;
	uint8_t x4904 = 1U;
	volatile uint32_t t86 = 1990429166U;

	t86 = ((x4901<<(x4902<x4903))<<x4904);

	if (t86 != 754572U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x4938 = -1;
	int16_t x4939 = INT16_MIN;
	int8_t x4940 = 0;
	int32_t t87 = INT32_MAX;

	t87 = ((x4937<<(x4938<x4939))<<x4940);

	if (t87 != INT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x4977 = 25U;
	volatile int8_t x4979 = -9;
	static uint8_t x4980 = 0U;

	t88 = ((x4977<<(x4978<x4979))<<x4980);

	if (t88 != 50U) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint8_t x5017 = UINT8_MAX;
	int8_t x5018 = -1;
	static uint8_t x5020 = 1U;
	static int32_t t89 = 884;

	t89 = ((x5017<<(x5018<x5019))<<x5020);

	if (t89 != 510) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x5029 = 2;
	static int8_t x5030 = -1;
	uint32_t x5031 = 1U;
	uint8_t x5032 = 3U;

	t90 = ((x5029<<(x5030<x5031))<<x5032);

	if (t90 != 16) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x5293 = UINT32_MAX;
	volatile int8_t x5294 = INT8_MAX;
	uint64_t x5295 = 598824807298364LLU;
	static uint8_t x5296 = 3U;
	volatile uint32_t t91 = 677567U;

	t91 = ((x5293<<(x5294<x5295))<<x5296);

	if (t91 != 4294967280U) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x5345 = 15U;
	uint8_t x5348 = 2U;
	volatile int32_t t92 = 3;

	t92 = ((x5345<<(x5346<x5347))<<x5348);

	if (t92 != 60) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x5369 = 776478837247LLU;
	int16_t x5370 = -246;
	static uint64_t x5371 = 34362533203896LLU;
	uint16_t x5372 = 57U;
	volatile uint64_t t93 = 390652091055109169LLU;

	t93 = ((x5369<<(x5370<x5371))<<x5372);

	if (t93 != 18302628885633695744LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x5381 = 0;
	volatile int64_t x5382 = INT64_MAX;
	static uint64_t x5384 = 0LLU;

	t94 = ((x5381<<(x5382<x5383))<<x5384);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x5485 = 2LLU;
	static int16_t x5486 = INT16_MIN;
	int64_t x5487 = INT64_MIN;
	uint16_t x5488 = 35U;
	uint64_t t95 = 29396217701LLU;

	t95 = ((x5485<<(x5486<x5487))<<x5488);

	if (t95 != 68719476736LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint32_t x5503 = 430462U;

	t96 = ((x5501<<(x5502<x5503))<<x5504);

	if (t96 != 5827398LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x5597 = 4U;
	static int8_t x5598 = -1;
	static uint8_t x5600 = 5U;
	int32_t t97 = -4;

	t97 = ((x5597<<(x5598<x5599))<<x5600);

	if (t97 != 256) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x5629 = UINT64_MAX;
	int32_t x5630 = INT32_MIN;
	int16_t x5632 = 54;
	uint64_t t98 = 16334331871026225LLU;

	t98 = ((x5629<<(x5630<x5631))<<x5632);

	if (t98 != 18410715276690587648LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x5665 = 40U;
	volatile int8_t x5666 = INT8_MAX;
	int32_t x5667 = -1;
	static volatile int32_t x5668 = 1;
	volatile uint32_t t99 = 2846U;

	t99 = ((x5665<<(x5666<x5667))<<x5668);

	if (t99 != 80U) { NG(); } else { ; }
	
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

