#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x118 = 0U;
volatile uint8_t x120 = UINT8_MAX;
static uint16_t x194 = 1U;
static volatile uint8_t x318 = 0U;
volatile int8_t x319 = INT8_MIN;
int64_t x329 = 3402366483858719668LL;
uint32_t x330 = 2U;
int32_t x335 = 4;
int64_t x336 = -945163311LL;
int32_t x475 = -1;
int8_t x512 = -3;
uint16_t x621 = 0U;
static int8_t x624 = INT8_MAX;
int8_t x644 = -1;
uint8_t x670 = 1U;
uint64_t x713 = 1259LLU;
volatile int16_t x714 = 43;
uint64_t x809 = 13420LLU;
uint8_t x810 = 0U;
int8_t x906 = 55;
int16_t x1011 = 1;
uint8_t x1094 = 12U;
uint16_t x1109 = 119U;
int16_t x1241 = 5324;
uint32_t x1242 = 18U;
int64_t x1301 = INT64_MAX;
int32_t x1302 = 1;
int64_t x1304 = 37198LL;
uint64_t x1441 = 19194095161021367LLU;
volatile uint64_t t29 = UINT64_MAX;
volatile uint64_t t31 = 70633540495941825LLU;
static uint64_t x1760 = 19302469055750LLU;
uint8_t x1790 = 9U;
int8_t x1791 = INT8_MIN;
volatile int8_t x1792 = INT8_MIN;
volatile uint64_t t35 = 1LLU;
uint16_t x1906 = 2U;
uint32_t x1977 = 1U;
volatile int32_t t39 = 3963;
static int32_t x2270 = -1;
uint64_t x2271 = UINT64_MAX;
int64_t t41 = INT64_MAX;
static uint16_t x2304 = UINT16_MAX;
volatile int32_t t44 = -762778212;
volatile int8_t x2435 = 10;
volatile uint64_t t46 = 3358983610LLU;
uint8_t x2452 = UINT8_MAX;
uint8_t x2583 = 0U;
int16_t x2742 = -1;
volatile int8_t x2761 = 31;
uint64_t x2805 = UINT64_MAX;
volatile uint64_t t55 = UINT64_MAX;
uint32_t x2819 = 7U;
volatile int16_t x2906 = -1;
uint16_t x2941 = UINT16_MAX;
static int16_t x2953 = 0;
static int16_t x2984 = 7660;
volatile uint32_t x3021 = UINT32_MAX;
int32_t x3024 = 36982;
volatile uint64_t x3059 = 2959595397740413877LLU;
static uint8_t x3113 = 15U;
int64_t x3115 = 29720LL;
static int16_t x3162 = 0;
volatile uint32_t x3210 = 0U;
volatile uint32_t t68 = 520655285U;
uint64_t x3408 = 18LLU;
volatile int32_t t70 = -5107;
int32_t x3458 = 19;
volatile int32_t t72 = 30643;
static uint16_t x3680 = 6U;
int16_t x3714 = 0;
volatile int32_t t76 = -370925816;
volatile int16_t x3731 = 711;
uint8_t x3745 = 48U;
volatile int32_t t78 = -5126;
volatile int16_t x3797 = 27;
static uint8_t x3910 = 10U;
volatile uint64_t x3911 = 10891LLU;
uint32_t x4174 = 2U;
uint64_t t83 = 6251483291810LLU;
uint32_t x4218 = 11U;
uint8_t x4220 = UINT8_MAX;
int16_t x4234 = 20;
static uint8_t x4282 = 1U;
static int8_t x4283 = -1;
int32_t x4438 = -1;
static int64_t x4573 = INT64_MAX;
int8_t x4574 = 12;
uint64_t x4616 = 489517654466LLU;
volatile int32_t t90 = -10384;
int32_t x4628 = INT32_MIN;
int8_t x4658 = 1;
int32_t x4659 = -1;
uint64_t t94 = 8017LLU;
uint16_t x4826 = 5U;
uint64_t x4893 = 9409LLU;
int8_t x4964 = INT8_MIN;
uint64_t x5027 = 198303897058030150LLU;
volatile int32_t t99 = 1871564;


void f0(void) {
	int64_t x117 = INT64_MAX;
	uint16_t x119 = 3949U;
	static volatile int64_t t0 = INT64_MAX;

	t0 = (x117>>(x118+(x119==x120)));

	if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x169 = 14;
	uint8_t x170 = 7U;
	static int16_t x171 = INT16_MIN;
	int8_t x172 = INT8_MIN;
	int32_t t1 = -10;

	t1 = (x169>>(x170+(x171==x172)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x193 = INT64_MAX;
	volatile int32_t x195 = 57487305;
	int16_t x196 = -1;
	int64_t t2 = 485LL;

	t2 = (x193>>(x194+(x195==x196)));

	if (t2 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x317 = 36U;
	static uint16_t x320 = 311U;
	static volatile int32_t t3 = 1904174;

	t3 = (x317>>(x318+(x319==x320)));

	if (t3 != 36) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x331 = -59481;
	int64_t x332 = -1LL;
	volatile int64_t t4 = -37495588634524LL;

	t4 = (x329>>(x330+(x331==x332)));

	if (t4 != 850591620964679917LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x333 = UINT16_MAX;
	static uint16_t x334 = 1U;
	int32_t t5 = 219949884;

	t5 = (x333>>(x334+(x335==x336)));

	if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint32_t x377 = UINT32_MAX;
	static uint8_t x378 = 1U;
	volatile int8_t x379 = INT8_MAX;
	volatile int8_t x380 = -1;
	volatile uint32_t t6 = 1U;

	t6 = (x377>>(x378+(x379==x380)));

	if (t6 != 2147483647U) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x393 = UINT64_MAX;
	int16_t x394 = 10;
	int16_t x395 = INT16_MIN;
	static volatile int16_t x396 = INT16_MAX;
	uint64_t t7 = 1680885254578717996LLU;

	t7 = (x393>>(x394+(x395==x396)));

	if (t7 != 18014398509481983LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x473 = INT32_MAX;
	uint32_t x474 = UINT32_MAX;
	int32_t x476 = -1;
	int32_t t8 = INT32_MAX;

	t8 = (x473>>(x474+(x475==x476)));

	if (t8 != INT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x509 = 54285U;
	uint8_t x510 = 1U;
	int64_t x511 = INT64_MIN;
	volatile uint32_t t9 = 1079801U;

	t9 = (x509>>(x510+(x511==x512)));

	if (t9 != 27142U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x622 = 0;
	static int16_t x623 = -404;
	volatile int32_t t10 = -30183389;

	t10 = (x621>>(x622+(x623==x624)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x641 = UINT64_MAX;
	static volatile uint8_t x642 = 3U;
	int32_t x643 = 12;
	volatile uint64_t t11 = 501076129119263739LLU;

	t11 = (x641>>(x642+(x643==x644)));

	if (t11 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x669 = 23U;
	uint64_t x671 = 127171LLU;
	volatile uint8_t x672 = UINT8_MAX;
	static volatile int32_t t12 = -924;

	t12 = (x669>>(x670+(x671==x672)));

	if (t12 != 11) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x715 = 467LLU;
	uint64_t x716 = UINT64_MAX;
	volatile uint64_t t13 = 69566904303133212LLU;

	t13 = (x713>>(x714+(x715==x716)));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x811 = INT16_MIN;
	int64_t x812 = -1LL;
	static volatile uint64_t t14 = 250504LLU;

	t14 = (x809>>(x810+(x811==x812)));

	if (t14 != 13420LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x833 = 85907361174380LL;
	uint32_t x834 = 16U;
	int16_t x835 = -3;
	int64_t x836 = INT64_MIN;
	volatile int64_t t15 = 8525LL;

	t15 = (x833>>(x834+(x835==x836)));

	if (t15 != 1310842303LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x845 = 36323628U;
	volatile uint16_t x846 = 9U;
	int64_t x847 = INT64_MAX;
	int32_t x848 = -1;
	static volatile uint32_t t16 = 7U;

	t16 = (x845>>(x846+(x847==x848)));

	if (t16 != 70944U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x905 = 6089397028LLU;
	volatile int32_t x907 = -1;
	static volatile int8_t x908 = -1;
	volatile uint64_t t17 = 1097221LLU;

	t17 = (x905>>(x906+(x907==x908)));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x933 = 286715U;
	int8_t x934 = 0;
	static uint32_t x935 = 1393U;
	volatile uint16_t x936 = UINT16_MAX;
	volatile uint32_t t18 = 191110U;

	t18 = (x933>>(x934+(x935==x936)));

	if (t18 != 286715U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x1009 = INT64_MAX;
	uint8_t x1010 = 1U;
	int64_t x1012 = 2069312LL;
	static int64_t t19 = 25LL;

	t19 = (x1009>>(x1010+(x1011==x1012)));

	if (t19 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x1057 = 0LLU;
	volatile uint32_t x1058 = 4U;
	int16_t x1059 = 110;
	int16_t x1060 = INT16_MIN;
	static volatile uint64_t t20 = 37550344LLU;

	t20 = (x1057>>(x1058+(x1059==x1060)));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1093 = UINT32_MAX;
	int16_t x1095 = INT16_MIN;
	volatile int8_t x1096 = -1;
	volatile uint32_t t21 = 3022U;

	t21 = (x1093>>(x1094+(x1095==x1096)));

	if (t21 != 1048575U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x1110 = 11;
	int64_t x1111 = INT64_MAX;
	uint8_t x1112 = UINT8_MAX;
	int32_t t22 = 1;

	t22 = (x1109>>(x1110+(x1111==x1112)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x1243 = INT32_MAX;
	uint16_t x1244 = 3U;
	static int32_t t23 = -497;

	t23 = (x1241>>(x1242+(x1243==x1244)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x1303 = INT8_MIN;
	volatile int64_t t24 = -23638329271422LL;

	t24 = (x1301>>(x1302+(x1303==x1304)));

	if (t24 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x1361 = 1U;
	static uint16_t x1362 = 2U;
	int8_t x1363 = 2;
	int8_t x1364 = -1;
	volatile int32_t t25 = 0;

	t25 = (x1361>>(x1362+(x1363==x1364)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x1365 = 24U;
	int16_t x1366 = 3;
	int64_t x1367 = 31LL;
	volatile int32_t x1368 = INT32_MIN;
	volatile int32_t t26 = -1772;

	t26 = (x1365>>(x1366+(x1367==x1368)));

	if (t26 != 3) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x1417 = INT64_MAX;
	static uint16_t x1418 = 8U;
	uint32_t x1419 = 284000U;
	int16_t x1420 = -69;
	volatile int64_t t27 = 1271903LL;

	t27 = (x1417>>(x1418+(x1419==x1420)));

	if (t27 != 36028797018963967LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1442 = 29U;
	int8_t x1443 = -1;
	uint8_t x1444 = 33U;
	volatile uint64_t t28 = 12759530120567LLU;

	t28 = (x1441>>(x1442+(x1443==x1444)));

	if (t28 != 35751788LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1453 = UINT64_MAX;
	int8_t x1454 = 0;
	int64_t x1455 = INT64_MAX;
	int8_t x1456 = INT8_MAX;

	t29 = (x1453>>(x1454+(x1455==x1456)));

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1565 = INT8_MAX;
	volatile int32_t x1566 = 2;
	int8_t x1567 = INT8_MIN;
	int64_t x1568 = -1LL;
	int32_t t30 = -1152;

	t30 = (x1565>>(x1566+(x1567==x1568)));

	if (t30 != 31) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x1593 = 12288228971LLU;
	uint32_t x1594 = 61U;
	int8_t x1595 = INT8_MIN;
	static volatile uint8_t x1596 = 12U;

	t31 = (x1593>>(x1594+(x1595==x1596)));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint64_t x1605 = 55813232LLU;
	uint8_t x1606 = 2U;
	volatile int8_t x1607 = INT8_MIN;
	uint8_t x1608 = 9U;
	static uint64_t t32 = 2815373LLU;

	t32 = (x1605>>(x1606+(x1607==x1608)));

	if (t32 != 13953308LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x1609 = UINT64_MAX;
	static volatile uint8_t x1610 = 43U;
	uint32_t x1611 = UINT32_MAX;
	int16_t x1612 = -8387;
	volatile uint64_t t33 = 1LLU;

	t33 = (x1609>>(x1610+(x1611==x1612)));

	if (t33 != 2097151LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1757 = 4LL;
	uint8_t x1758 = 0U;
	uint8_t x1759 = UINT8_MAX;
	volatile int64_t t34 = 41LL;

	t34 = (x1757>>(x1758+(x1759==x1760)));

	if (t34 != 4LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x1789 = UINT64_MAX;

	t35 = (x1789>>(x1790+(x1791==x1792)));

	if (t35 != 18014398509481983LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1865 = 3646463LL;
	uint8_t x1866 = 3U;
	int8_t x1867 = 1;
	int16_t x1868 = INT16_MIN;
	volatile int64_t t36 = -41LL;

	t36 = (x1865>>(x1866+(x1867==x1868)));

	if (t36 != 455807LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x1905 = INT8_MAX;
	int16_t x1907 = INT16_MIN;
	int32_t x1908 = 122332;
	static volatile int32_t t37 = -188;

	t37 = (x1905>>(x1906+(x1907==x1908)));

	if (t37 != 31) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint16_t x1978 = 2U;
	volatile uint32_t x1979 = 23831U;
	static volatile int8_t x1980 = -3;
	uint32_t t38 = 851U;

	t38 = (x1977>>(x1978+(x1979==x1980)));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x2141 = 1U;
	static int16_t x2142 = 0;
	int32_t x2143 = INT32_MIN;
	volatile int8_t x2144 = -1;

	t39 = (x2141>>(x2142+(x2143==x2144)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x2193 = 1032182;
	static volatile int16_t x2194 = 3;
	static uint8_t x2195 = 9U;
	volatile int16_t x2196 = -1;
	volatile int32_t t40 = 2873255;

	t40 = (x2193>>(x2194+(x2195==x2196)));

	if (t40 != 129022) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x2269 = INT64_MAX;
	volatile uint64_t x2272 = UINT64_MAX;

	t41 = (x2269>>(x2270+(x2271==x2272)));

	if (t41 != INT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x2273 = 10U;
	int8_t x2274 = 9;
	int16_t x2275 = INT16_MIN;
	uint64_t x2276 = 18916LLU;
	int32_t t42 = 2066498;

	t42 = (x2273>>(x2274+(x2275==x2276)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x2301 = INT16_MAX;
	uint8_t x2302 = 0U;
	uint64_t x2303 = 9825825778LLU;
	volatile int32_t t43 = -130;

	t43 = (x2301>>(x2302+(x2303==x2304)));

	if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x2405 = 2954U;
	int32_t x2406 = 26;
	int64_t x2407 = -1LL;
	static volatile int8_t x2408 = INT8_MIN;

	t44 = (x2405>>(x2406+(x2407==x2408)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x2417 = 29LLU;
	uint8_t x2418 = 35U;
	uint32_t x2419 = 0U;
	static int32_t x2420 = INT32_MIN;
	volatile uint64_t t45 = 97474389206995LLU;

	t45 = (x2417>>(x2418+(x2419==x2420)));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x2433 = 869560360345936921LLU;
	uint16_t x2434 = 0U;
	int8_t x2436 = -1;

	t46 = (x2433>>(x2434+(x2435==x2436)));

	if (t46 != 869560360345936921LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x2449 = 651U;
	volatile uint64_t x2450 = 2LLU;
	int32_t x2451 = INT32_MIN;
	volatile int32_t t47 = 26433;

	t47 = (x2449>>(x2450+(x2451==x2452)));

	if (t47 != 162) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x2581 = 9169429677LLU;
	int8_t x2582 = 1;
	int64_t x2584 = INT64_MAX;
	static volatile uint64_t t48 = 164863354942900206LLU;

	t48 = (x2581>>(x2582+(x2583==x2584)));

	if (t48 != 4584714838LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x2653 = 672545390983LLU;
	uint16_t x2654 = 47U;
	volatile int64_t x2655 = -1LL;
	int32_t x2656 = INT32_MAX;
	uint64_t t49 = 44190293561057369LLU;

	t49 = (x2653>>(x2654+(x2655==x2656)));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint64_t x2669 = UINT64_MAX;
	int8_t x2670 = 3;
	uint64_t x2671 = 372060405184116LLU;
	int32_t x2672 = INT32_MIN;
	static uint64_t t50 = 29862511403012LLU;

	t50 = (x2669>>(x2670+(x2671==x2672)));

	if (t50 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x2685 = 20LL;
	uint16_t x2686 = 15U;
	uint16_t x2687 = 0U;
	int32_t x2688 = INT32_MIN;
	static volatile int64_t t51 = -7937294LL;

	t51 = (x2685>>(x2686+(x2687==x2688)));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint64_t x2701 = UINT64_MAX;
	static volatile uint8_t x2702 = 11U;
	static uint8_t x2703 = UINT8_MAX;
	int16_t x2704 = 0;
	uint64_t t52 = 484288171521LLU;

	t52 = (x2701>>(x2702+(x2703==x2704)));

	if (t52 != 9007199254740991LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x2741 = UINT16_MAX;
	int16_t x2743 = -1;
	uint64_t x2744 = UINT64_MAX;
	static int32_t t53 = -499;

	t53 = (x2741>>(x2742+(x2743==x2744)));

	if (t53 != 65535) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x2762 = 1LLU;
	static int64_t x2763 = INT64_MIN;
	uint64_t x2764 = 252343530985092LLU;
	int32_t t54 = 1;

	t54 = (x2761>>(x2762+(x2763==x2764)));

	if (t54 != 15) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x2806 = 0;
	int32_t x2807 = 8145;
	volatile int8_t x2808 = INT8_MIN;

	t55 = (x2805>>(x2806+(x2807==x2808)));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x2817 = 5930U;
	uint8_t x2818 = 14U;
	uint32_t x2820 = 10925U;
	volatile int32_t t56 = 23180;

	t56 = (x2817>>(x2818+(x2819==x2820)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x2885 = UINT64_MAX;
	int32_t x2886 = 1;
	int8_t x2887 = -1;
	uint8_t x2888 = 1U;
	volatile uint64_t t57 = 379898159LLU;

	t57 = (x2885>>(x2886+(x2887==x2888)));

	if (t57 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x2905 = 0U;
	int16_t x2907 = INT16_MAX;
	volatile int16_t x2908 = INT16_MAX;
	static volatile int32_t t58 = -32676;

	t58 = (x2905>>(x2906+(x2907==x2908)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x2942 = 17;
	int16_t x2943 = -1;
	uint16_t x2944 = 196U;
	static int32_t t59 = -180621777;

	t59 = (x2941>>(x2942+(x2943==x2944)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x2954 = 1U;
	int64_t x2955 = INT64_MAX;
	uint64_t x2956 = 3960LLU;
	volatile int32_t t60 = 70;

	t60 = (x2953>>(x2954+(x2955==x2956)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x2981 = 434932151U;
	static int8_t x2982 = 8;
	static int16_t x2983 = INT16_MAX;
	volatile uint32_t t61 = 16U;

	t61 = (x2981>>(x2982+(x2983==x2984)));

	if (t61 != 1698953U) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x3022 = 0U;
	uint64_t x3023 = 356831825511117LLU;
	uint32_t t62 = UINT32_MAX;

	t62 = (x3021>>(x3022+(x3023==x3024)));

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x3057 = 250U;
	volatile uint8_t x3058 = 30U;
	int64_t x3060 = -16107463328LL;
	uint32_t t63 = 91872U;

	t63 = (x3057>>(x3058+(x3059==x3060)));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x3114 = 7U;
	static volatile uint64_t x3116 = UINT64_MAX;
	static int32_t t64 = -42274839;

	t64 = (x3113>>(x3114+(x3115==x3116)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x3161 = 4151LLU;
	static volatile uint64_t x3163 = 6245430486746LLU;
	int16_t x3164 = INT16_MIN;
	volatile uint64_t t65 = 110LLU;

	t65 = (x3161>>(x3162+(x3163==x3164)));

	if (t65 != 4151LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int32_t x3209 = INT32_MAX;
	int16_t x3211 = INT16_MIN;
	int8_t x3212 = INT8_MAX;
	volatile int32_t t66 = INT32_MAX;

	t66 = (x3209>>(x3210+(x3211==x3212)));

	if (t66 != INT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x3261 = 1U;
	int8_t x3262 = 5;
	int64_t x3263 = INT64_MIN;
	int8_t x3264 = INT8_MIN;
	volatile int32_t t67 = 30723;

	t67 = (x3261>>(x3262+(x3263==x3264)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x3373 = UINT32_MAX;
	static uint8_t x3374 = 2U;
	uint64_t x3375 = 133028750787910LLU;
	int32_t x3376 = -1;

	t68 = (x3373>>(x3374+(x3375==x3376)));

	if (t68 != 1073741823U) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x3389 = 1U;
	uint8_t x3390 = 6U;
	uint16_t x3391 = UINT16_MAX;
	static int32_t x3392 = 27184335;
	int32_t t69 = -6663;

	t69 = (x3389>>(x3390+(x3391==x3392)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x3405 = 7034;
	volatile uint8_t x3406 = 1U;
	int32_t x3407 = INT32_MIN;

	t70 = (x3405>>(x3406+(x3407==x3408)));

	if (t70 != 3517) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x3457 = UINT32_MAX;
	uint8_t x3459 = 2U;
	volatile int64_t x3460 = INT64_MAX;
	static uint32_t t71 = 685870U;

	t71 = (x3457>>(x3458+(x3459==x3460)));

	if (t71 != 8191U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x3485 = 8;
	uint16_t x3486 = 1U;
	static int16_t x3487 = INT16_MAX;
	uint8_t x3488 = UINT8_MAX;

	t72 = (x3485>>(x3486+(x3487==x3488)));

	if (t72 != 4) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x3497 = 3U;
	int8_t x3498 = 1;
	int16_t x3499 = INT16_MIN;
	static int32_t x3500 = INT32_MIN;
	static volatile int32_t t73 = -4;

	t73 = (x3497>>(x3498+(x3499==x3500)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x3533 = INT32_MAX;
	int8_t x3534 = -1;
	uint32_t x3535 = UINT32_MAX;
	int8_t x3536 = -1;
	volatile int32_t t74 = INT32_MAX;

	t74 = (x3533>>(x3534+(x3535==x3536)));

	if (t74 != INT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int64_t x3677 = 250875139674305789LL;
	uint32_t x3678 = 23U;
	int8_t x3679 = INT8_MAX;
	static volatile int64_t t75 = 3024223945690LL;

	t75 = (x3677>>(x3678+(x3679==x3680)));

	if (t75 != 29906647166LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x3713 = 0;
	int16_t x3715 = INT16_MIN;
	static uint16_t x3716 = UINT16_MAX;

	t76 = (x3713>>(x3714+(x3715==x3716)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x3729 = 0;
	int8_t x3730 = 5;
	volatile uint8_t x3732 = 1U;
	int32_t t77 = 13696;

	t77 = (x3729>>(x3730+(x3731==x3732)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x3746 = 17;
	uint16_t x3747 = 7938U;
	volatile int64_t x3748 = -625LL;

	t78 = (x3745>>(x3746+(x3747==x3748)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x3798 = 13LL;
	uint64_t x3799 = UINT64_MAX;
	int64_t x3800 = INT64_MIN;
	volatile int32_t t79 = 376587;

	t79 = (x3797>>(x3798+(x3799==x3800)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x3909 = UINT16_MAX;
	uint32_t x3912 = 909629U;
	volatile int32_t t80 = -34498;

	t80 = (x3909>>(x3910+(x3911==x3912)));

	if (t80 != 63) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x3929 = 6U;
	int8_t x3930 = 5;
	uint8_t x3931 = 0U;
	uint8_t x3932 = 3U;
	volatile int32_t t81 = 78;

	t81 = (x3929>>(x3930+(x3931==x3932)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x3953 = UINT32_MAX;
	uint64_t x3954 = 17LLU;
	static uint8_t x3955 = 0U;
	volatile uint64_t x3956 = 27LLU;
	volatile uint32_t t82 = 63U;

	t82 = (x3953>>(x3954+(x3955==x3956)));

	if (t82 != 32767U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x4173 = 2318873392LLU;
	volatile int8_t x4175 = 6;
	static uint32_t x4176 = 3962928U;

	t83 = (x4173>>(x4174+(x4175==x4176)));

	if (t83 != 579718348LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x4217 = 15U;
	int8_t x4219 = 2;
	volatile int32_t t84 = -1;

	t84 = (x4217>>(x4218+(x4219==x4220)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x4233 = UINT64_MAX;
	int8_t x4235 = -1;
	uint16_t x4236 = UINT16_MAX;
	volatile uint64_t t85 = 14LLU;

	t85 = (x4233>>(x4234+(x4235==x4236)));

	if (t85 != 17592186044415LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x4281 = 23631U;
	uint8_t x4284 = 1U;
	static int32_t t86 = -994770775;

	t86 = (x4281>>(x4282+(x4283==x4284)));

	if (t86 != 11815) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x4437 = UINT32_MAX;
	uint64_t x4439 = UINT64_MAX;
	int8_t x4440 = -1;
	volatile uint32_t t87 = UINT32_MAX;

	t87 = (x4437>>(x4438+(x4439==x4440)));

	if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x4575 = INT32_MAX;
	static volatile uint16_t x4576 = 8479U;
	volatile int64_t t88 = 5970669LL;

	t88 = (x4573>>(x4574+(x4575==x4576)));

	if (t88 != 2251799813685247LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x4577 = 532U;
	static int8_t x4578 = 1;
	volatile int64_t x4579 = INT64_MIN;
	int64_t x4580 = INT64_MIN;
	volatile int32_t t89 = 62332565;

	t89 = (x4577>>(x4578+(x4579==x4580)));

	if (t89 != 133) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x4613 = 26U;
	uint8_t x4614 = 1U;
	static int16_t x4615 = 7138;

	t90 = (x4613>>(x4614+(x4615==x4616)));

	if (t90 != 13) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x4625 = UINT64_MAX;
	static uint8_t x4626 = 0U;
	int8_t x4627 = -1;
	uint64_t t91 = UINT64_MAX;

	t91 = (x4625>>(x4626+(x4627==x4628)));

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x4657 = INT16_MAX;
	volatile int16_t x4660 = INT16_MAX;
	volatile int32_t t92 = -68;

	t92 = (x4657>>(x4658+(x4659==x4660)));

	if (t92 != 16383) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x4773 = 12U;
	static uint32_t x4774 = 7U;
	int8_t x4775 = INT8_MIN;
	int16_t x4776 = INT16_MAX;
	uint32_t t93 = 46123U;

	t93 = (x4773>>(x4774+(x4775==x4776)));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x4805 = 3453624346LLU;
	uint8_t x4806 = 56U;
	volatile int16_t x4807 = INT16_MIN;
	int8_t x4808 = INT8_MAX;

	t94 = (x4805>>(x4806+(x4807==x4808)));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint16_t x4825 = 138U;
	int16_t x4827 = INT16_MAX;
	uint8_t x4828 = 33U;
	volatile int32_t t95 = 5261;

	t95 = (x4825>>(x4826+(x4827==x4828)));

	if (t95 != 4) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x4894 = 12;
	int64_t x4895 = INT64_MAX;
	int32_t x4896 = -1;
	uint64_t t96 = 17003LLU;

	t96 = (x4893>>(x4894+(x4895==x4896)));

	if (t96 != 2LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x4961 = UINT16_MAX;
	int32_t x4962 = 0;
	int8_t x4963 = 60;
	static int32_t t97 = -3;

	t97 = (x4961>>(x4962+(x4963==x4964)));

	if (t97 != 65535) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x5009 = 638U;
	volatile uint64_t x5010 = 0LLU;
	uint32_t x5011 = 38U;
	int16_t x5012 = -1;
	volatile int32_t t98 = -1588;

	t98 = (x5009>>(x5010+(x5011==x5012)));

	if (t98 != 638) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x5025 = 14U;
	uint8_t x5026 = 0U;
	static volatile uint8_t x5028 = UINT8_MAX;

	t99 = (x5025>>(x5026+(x5027==x5028)));

	if (t99 != 14) { NG(); } else { ; }
	
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

