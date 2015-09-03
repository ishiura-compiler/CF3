#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x188 = INT16_MIN;
uint32_t x323 = 182U;
volatile uint8_t x410 = 6U;
static int32_t t3 = 0;
int64_t x467 = -1LL;
volatile int32_t t5 = 11339;
volatile int32_t t6 = -2522;
int64_t x473 = INT64_MAX;
int8_t x573 = INT8_MAX;
volatile int8_t x575 = INT8_MIN;
int64_t x576 = INT64_MIN;
int32_t t8 = 1;
volatile int64_t x585 = 9667471LL;
uint8_t x662 = 6U;
static int8_t x664 = INT8_MAX;
int32_t x672 = 12823811;
static int32_t x920 = INT32_MIN;
volatile int16_t x970 = 1;
uint8_t x982 = 1U;
uint64_t t19 = 264LLU;
uint8_t x1179 = 1U;
int32_t t20 = -10892101;
static uint8_t x1182 = 1U;
static int8_t x1183 = INT8_MAX;
int64_t t22 = -4392712445792638272LL;
int64_t x1211 = -1LL;
uint8_t x1334 = 0U;
uint32_t x1335 = 188236U;
int8_t x1338 = 15;
static int16_t x1339 = INT16_MIN;
int32_t x1340 = 0;
uint64_t x1453 = UINT64_MAX;
static volatile int32_t x1456 = INT32_MIN;
volatile uint64_t t27 = 3185096LLU;
uint8_t x1538 = 23U;
int16_t x1593 = 5;
uint16_t x1595 = UINT16_MAX;
uint16_t x1605 = 0U;
volatile int32_t t31 = 1069779190;
static uint64_t x1673 = 4431690623LLU;
int64_t x1676 = INT64_MAX;
int8_t x1770 = 1;
static uint32_t x1771 = 343U;
volatile uint64_t t34 = 1451771319619065LLU;
static int64_t x1996 = 52LL;
uint64_t t36 = 82LLU;
uint32_t x2208 = 64225170U;
static int32_t x2274 = 17;
volatile int8_t x2276 = INT8_MIN;
static uint64_t t39 = 2920479839995431LLU;
volatile uint8_t x2338 = 4U;
int8_t x2347 = 1;
int64_t x2353 = 1544004578062LL;
uint32_t x2355 = 52U;
int64_t t42 = 36052035019273LL;
uint64_t x2441 = UINT64_MAX;
volatile int32_t t48 = 0;
int8_t x2506 = 1;
static int64_t x2628 = INT64_MIN;
int32_t x2748 = -1;
int32_t t53 = 18368;
int16_t x3067 = -4564;
static int8_t x3103 = INT8_MAX;
uint32_t x3257 = 132825880U;
static int32_t x3259 = INT32_MAX;
static uint16_t x3450 = 4U;
uint8_t x3486 = 1U;
static volatile int32_t t65 = 113;
int32_t x3515 = INT32_MIN;
volatile uint8_t x3522 = 28U;
static uint8_t x3593 = UINT8_MAX;
int8_t x3594 = 0;
int32_t t72 = -32503;
volatile int8_t x3754 = 17;
uint32_t t74 = 26U;
int32_t x3831 = INT32_MIN;
int64_t t75 = -5797823LL;
volatile uint8_t x3990 = 1U;
int32_t t79 = -1036901;
int8_t x4026 = 0;
volatile uint8_t x4028 = UINT8_MAX;
int8_t x4080 = 1;
volatile uint16_t x4137 = UINT16_MAX;
int16_t x4139 = INT16_MAX;
int16_t x4140 = INT16_MAX;
volatile uint16_t x4448 = 294U;
static uint8_t x4523 = 2U;
static uint32_t x4533 = 101427011U;
uint32_t t86 = 55827U;
int64_t x4681 = 63135272832181413LL;
volatile int64_t t87 = 1805416046496102068LL;
volatile uint8_t x4710 = 2U;
uint8_t x4712 = UINT8_MAX;
volatile uint64_t x4785 = UINT64_MAX;
int16_t x4787 = INT16_MIN;
volatile uint64_t t91 = 961898LLU;
int32_t x4923 = INT32_MAX;
int16_t x4935 = 2322;
uint32_t x4936 = 73547979U;
static uint32_t x4969 = 9577756U;
uint32_t t96 = 4U;
uint8_t x5102 = 2U;
volatile uint8_t x5210 = 6U;
static volatile int32_t t98 = 3825353;
static int8_t x5319 = INT8_MIN;


void f0(void) {
	static uint64_t x109 = UINT64_MAX;
	int16_t x110 = 1;
	static volatile int8_t x111 = INT8_MIN;
	static uint64_t x112 = UINT64_MAX;
	volatile uint64_t t0 = 5750516619726288LLU;

	t0 = (x109>>(x110-(x111==x112)));

	if (t0 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x185 = UINT16_MAX;
	uint16_t x186 = 6U;
	int32_t x187 = INT32_MAX;
	int32_t t1 = -2;

	t1 = (x185>>(x186-(x187==x188)));

	if (t1 != 1023) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x321 = 4378104U;
	static volatile uint16_t x322 = 4U;
	uint32_t x324 = UINT32_MAX;
	uint32_t t2 = 15048108U;

	t2 = (x321>>(x322-(x323==x324)));

	if (t2 != 273631U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x409 = 31309337;
	int32_t x411 = -3;
	volatile int16_t x412 = INT16_MIN;

	t3 = (x409>>(x410-(x411==x412)));

	if (t3 != 489208) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x437 = 1188710528958665331LLU;
	volatile int16_t x438 = 0;
	int16_t x439 = INT16_MAX;
	int64_t x440 = INT64_MIN;
	uint64_t t4 = 1919219927287LLU;

	t4 = (x437>>(x438-(x439==x440)));

	if (t4 != 1188710528958665331LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x465 = 84U;
	static int8_t x466 = 0;
	volatile int32_t x468 = INT32_MIN;

	t5 = (x465>>(x466-(x467==x468)));

	if (t5 != 84) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x469 = UINT8_MAX;
	uint16_t x470 = 9U;
	volatile int32_t x471 = -1;
	static int8_t x472 = -1;

	t6 = (x469>>(x470-(x471==x472)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x474 = 52U;
	int64_t x475 = INT64_MIN;
	static int64_t x476 = INT64_MIN;
	int64_t t7 = 6036627372608LL;

	t7 = (x473>>(x474-(x475==x476)));

	if (t7 != 4095LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x574 = 1U;

	t8 = (x573>>(x574-(x575==x576)));

	if (t8 != 63) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x586 = 4;
	int64_t x587 = INT64_MAX;
	uint16_t x588 = UINT16_MAX;
	static volatile int64_t t9 = 6532LL;

	t9 = (x585>>(x586-(x587==x588)));

	if (t9 != 604216LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x609 = UINT8_MAX;
	volatile uint8_t x610 = 4U;
	uint16_t x611 = UINT16_MAX;
	int32_t x612 = -12;
	int32_t t10 = 43904034;

	t10 = (x609>>(x610-(x611==x612)));

	if (t10 != 15) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x661 = 0;
	static int16_t x663 = 200;
	int32_t t11 = -3;

	t11 = (x661>>(x662-(x663==x664)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x669 = 0;
	int16_t x670 = 13;
	int16_t x671 = INT16_MIN;
	static int32_t t12 = 24612;

	t12 = (x669>>(x670-(x671==x672)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x725 = 26087952LL;
	static volatile int8_t x726 = 0;
	volatile int32_t x727 = -2495;
	static int32_t x728 = INT32_MAX;
	int64_t t13 = -5LL;

	t13 = (x725>>(x726-(x727==x728)));

	if (t13 != 26087952LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x837 = 2083;
	uint8_t x838 = 3U;
	uint8_t x839 = 1U;
	int16_t x840 = 21;
	int32_t t14 = 135315034;

	t14 = (x837>>(x838-(x839==x840)));

	if (t14 != 260) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x917 = UINT32_MAX;
	volatile int8_t x918 = 0;
	int64_t x919 = INT64_MIN;
	uint32_t t15 = UINT32_MAX;

	t15 = (x917>>(x918-(x919==x920)));

	if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x969 = 1;
	int64_t x971 = 2163569LL;
	int32_t x972 = INT32_MIN;
	volatile int32_t t16 = 573614;

	t16 = (x969>>(x970-(x971==x972)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x981 = 10U;
	static int8_t x983 = INT8_MIN;
	int64_t x984 = -109LL;
	static volatile int32_t t17 = 390;

	t17 = (x981>>(x982-(x983==x984)));

	if (t17 != 5) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1021 = 11;
	int8_t x1022 = 0;
	int16_t x1023 = 3280;
	static int8_t x1024 = -1;
	int32_t t18 = -3964495;

	t18 = (x1021>>(x1022-(x1023==x1024)));

	if (t18 != 11) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x1165 = 1LLU;
	int8_t x1166 = 1;
	volatile int8_t x1167 = INT8_MIN;
	int16_t x1168 = -1;

	t19 = (x1165>>(x1166-(x1167==x1168)));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1177 = UINT8_MAX;
	uint16_t x1178 = 0U;
	int16_t x1180 = INT16_MIN;

	t20 = (x1177>>(x1178-(x1179==x1180)));

	if (t20 != 255) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x1181 = 7066600LL;
	uint16_t x1184 = UINT16_MAX;
	volatile int64_t t21 = 369855450018686112LL;

	t21 = (x1181>>(x1182-(x1183==x1184)));

	if (t21 != 3533300LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1201 = 16309LL;
	uint16_t x1202 = 0U;
	static volatile uint32_t x1203 = 1U;
	int16_t x1204 = INT16_MIN;

	t22 = (x1201>>(x1202-(x1203==x1204)));

	if (t22 != 16309LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1209 = INT64_MAX;
	uint8_t x1210 = 11U;
	static int32_t x1212 = INT32_MIN;
	volatile int64_t t23 = 24946385793305LL;

	t23 = (x1209>>(x1210-(x1211==x1212)));

	if (t23 != 4503599627370495LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1333 = 90441887499596LLU;
	volatile uint32_t x1336 = UINT32_MAX;
	uint64_t t24 = 5106365658008285625LLU;

	t24 = (x1333>>(x1334-(x1335==x1336)));

	if (t24 != 90441887499596LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x1337 = INT8_MAX;
	volatile int32_t t25 = -327146708;

	t25 = (x1337>>(x1338-(x1339==x1340)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x1449 = 77;
	int32_t x1450 = 0;
	uint8_t x1451 = 74U;
	int32_t x1452 = INT32_MIN;
	int32_t t26 = -43;

	t26 = (x1449>>(x1450-(x1451==x1452)));

	if (t26 != 77) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1454 = 23;
	volatile int16_t x1455 = -1;

	t27 = (x1453>>(x1454-(x1455==x1456)));

	if (t27 != 2199023255551LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1537 = 78LLU;
	volatile uint64_t x1539 = 46789718827LLU;
	volatile uint64_t x1540 = UINT64_MAX;
	uint64_t t28 = 684677547950385LLU;

	t28 = (x1537>>(x1538-(x1539==x1540)));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1573 = 8420LL;
	int8_t x1574 = 2;
	static uint32_t x1575 = 1710738597U;
	uint64_t x1576 = UINT64_MAX;
	volatile int64_t t29 = -427064886601939LL;

	t29 = (x1573>>(x1574-(x1575==x1576)));

	if (t29 != 2105LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x1594 = 22;
	int16_t x1596 = -27;
	volatile int32_t t30 = -98;

	t30 = (x1593>>(x1594-(x1595==x1596)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1606 = 1U;
	uint16_t x1607 = 3U;
	uint16_t x1608 = 3705U;

	t31 = (x1605>>(x1606-(x1607==x1608)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1674 = 2;
	int64_t x1675 = -1LL;
	uint64_t t32 = 4390446975983LLU;

	t32 = (x1673>>(x1674-(x1675==x1676)));

	if (t32 != 1107922655LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x1769 = UINT8_MAX;
	int32_t x1772 = INT32_MIN;
	static volatile int32_t t33 = -4882;

	t33 = (x1769>>(x1770-(x1771==x1772)));

	if (t33 != 127) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x1949 = 491600845LLU;
	int32_t x1950 = 8;
	static uint16_t x1951 = 0U;
	uint16_t x1952 = 2401U;

	t34 = (x1949>>(x1950-(x1951==x1952)));

	if (t34 != 1920315LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1993 = 0;
	uint8_t x1994 = 30U;
	int8_t x1995 = INT8_MIN;
	volatile int32_t t35 = 57427;

	t35 = (x1993>>(x1994-(x1995==x1996)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x2093 = UINT64_MAX;
	volatile uint64_t x2094 = 12LLU;
	int16_t x2095 = INT16_MIN;
	int8_t x2096 = INT8_MAX;

	t36 = (x2093>>(x2094-(x2095==x2096)));

	if (t36 != 4503599627370495LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x2205 = 1854787U;
	volatile int16_t x2206 = 1;
	static int32_t x2207 = INT32_MIN;
	uint32_t t37 = 59210U;

	t37 = (x2205>>(x2206-(x2207==x2208)));

	if (t37 != 927393U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x2273 = 2;
	volatile uint16_t x2275 = 481U;
	volatile int32_t t38 = -310928;

	t38 = (x2273>>(x2274-(x2275==x2276)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x2301 = UINT64_MAX;
	uint8_t x2302 = 1U;
	int16_t x2303 = INT16_MIN;
	int64_t x2304 = INT64_MIN;

	t39 = (x2301>>(x2302-(x2303==x2304)));

	if (t39 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x2337 = 20599084;
	volatile int8_t x2339 = -57;
	uint64_t x2340 = UINT64_MAX;
	static volatile int32_t t40 = -130983;

	t40 = (x2337>>(x2338-(x2339==x2340)));

	if (t40 != 1287442) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x2345 = 975038U;
	volatile int8_t x2346 = 4;
	int16_t x2348 = -8;
	volatile uint32_t t41 = 31U;

	t41 = (x2345>>(x2346-(x2347==x2348)));

	if (t41 != 60939U) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x2354 = 1U;
	uint8_t x2356 = 3U;

	t42 = (x2353>>(x2354-(x2355==x2356)));

	if (t42 != 772002289031LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x2373 = INT32_MAX;
	volatile int8_t x2374 = 15;
	uint8_t x2375 = UINT8_MAX;
	uint32_t x2376 = 13U;
	int32_t t43 = -15;

	t43 = (x2373>>(x2374-(x2375==x2376)));

	if (t43 != 65535) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x2381 = 6264U;
	uint8_t x2382 = 11U;
	static int8_t x2383 = -1;
	uint8_t x2384 = UINT8_MAX;
	volatile int32_t t44 = 57840764;

	t44 = (x2381>>(x2382-(x2383==x2384)));

	if (t44 != 3) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x2393 = UINT16_MAX;
	int8_t x2394 = 10;
	volatile uint8_t x2395 = 2U;
	int64_t x2396 = INT64_MIN;
	volatile int32_t t45 = 13890;

	t45 = (x2393>>(x2394-(x2395==x2396)));

	if (t45 != 63) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2417 = INT8_MAX;
	static uint32_t x2418 = 2U;
	int32_t x2419 = 98470;
	int8_t x2420 = -1;
	volatile int32_t t46 = -24070098;

	t46 = (x2417>>(x2418-(x2419==x2420)));

	if (t46 != 31) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x2442 = 0;
	int64_t x2443 = -1LL;
	static int64_t x2444 = INT64_MIN;
	volatile uint64_t t47 = UINT64_MAX;

	t47 = (x2441>>(x2442-(x2443==x2444)));

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x2457 = INT16_MAX;
	int8_t x2458 = 5;
	int16_t x2459 = INT16_MAX;
	static int8_t x2460 = INT8_MIN;

	t48 = (x2457>>(x2458-(x2459==x2460)));

	if (t48 != 1023) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x2505 = INT8_MAX;
	uint8_t x2507 = UINT8_MAX;
	static uint64_t x2508 = UINT64_MAX;
	int32_t t49 = -150;

	t49 = (x2505>>(x2506-(x2507==x2508)));

	if (t49 != 63) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x2625 = UINT32_MAX;
	static uint8_t x2626 = 0U;
	int64_t x2627 = -15791LL;
	volatile uint32_t t50 = UINT32_MAX;

	t50 = (x2625>>(x2626-(x2627==x2628)));

	if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x2641 = 86U;
	static uint16_t x2642 = 0U;
	int64_t x2643 = -12918001918528LL;
	int64_t x2644 = INT64_MIN;
	static int32_t t51 = -9636596;

	t51 = (x2641>>(x2642-(x2643==x2644)));

	if (t51 != 86) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x2745 = INT8_MAX;
	int8_t x2746 = 17;
	uint8_t x2747 = 18U;
	int32_t t52 = 1327012;

	t52 = (x2745>>(x2746-(x2747==x2748)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x2805 = INT16_MAX;
	int16_t x2806 = 1;
	int16_t x2807 = 7647;
	int64_t x2808 = INT64_MIN;

	t53 = (x2805>>(x2806-(x2807==x2808)));

	if (t53 != 16383) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x2817 = 9420962627646521LLU;
	int16_t x2818 = 0;
	int64_t x2819 = INT64_MAX;
	static int8_t x2820 = INT8_MIN;
	volatile uint64_t t54 = 122555LLU;

	t54 = (x2817>>(x2818-(x2819==x2820)));

	if (t54 != 9420962627646521LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x2961 = INT16_MAX;
	uint8_t x2962 = 24U;
	static uint32_t x2963 = UINT32_MAX;
	uint8_t x2964 = 0U;
	static int32_t t55 = -36310;

	t55 = (x2961>>(x2962-(x2963==x2964)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x3065 = INT32_MAX;
	uint16_t x3066 = 8U;
	int64_t x3068 = -1LL;
	volatile int32_t t56 = -8;

	t56 = (x3065>>(x3066-(x3067==x3068)));

	if (t56 != 8388607) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x3093 = 27846919514583LLU;
	int8_t x3094 = 0;
	static uint8_t x3095 = 3U;
	int8_t x3096 = -1;
	volatile uint64_t t57 = 4LLU;

	t57 = (x3093>>(x3094-(x3095==x3096)));

	if (t57 != 27846919514583LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x3101 = UINT32_MAX;
	uint64_t x3102 = 1LLU;
	int8_t x3104 = -1;
	static uint32_t t58 = 3U;

	t58 = (x3101>>(x3102-(x3103==x3104)));

	if (t58 != 2147483647U) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x3258 = 1U;
	volatile uint16_t x3260 = UINT16_MAX;
	static volatile uint32_t t59 = 0U;

	t59 = (x3257>>(x3258-(x3259==x3260)));

	if (t59 != 66412940U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x3345 = 15;
	volatile uint8_t x3346 = 0U;
	volatile uint64_t x3347 = 1658568LLU;
	static int64_t x3348 = -811LL;
	static int32_t t60 = -821;

	t60 = (x3345>>(x3346-(x3347==x3348)));

	if (t60 != 15) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x3397 = 4010413923098333LLU;
	uint8_t x3398 = 1U;
	static int64_t x3399 = INT64_MIN;
	uint64_t x3400 = 3694477LLU;
	uint64_t t61 = 22221726LLU;

	t61 = (x3397>>(x3398-(x3399==x3400)));

	if (t61 != 2005206961549166LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x3405 = UINT64_MAX;
	int8_t x3406 = 9;
	uint16_t x3407 = 0U;
	int16_t x3408 = -1336;
	volatile uint64_t t62 = 19743LLU;

	t62 = (x3405>>(x3406-(x3407==x3408)));

	if (t62 != 36028797018963967LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x3433 = 19483U;
	uint16_t x3434 = 3U;
	uint8_t x3435 = 92U;
	int32_t x3436 = INT32_MAX;
	volatile int32_t t63 = -15216104;

	t63 = (x3433>>(x3434-(x3435==x3436)));

	if (t63 != 2435) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x3449 = 1683552248229453706LL;
	int32_t x3451 = INT32_MAX;
	int16_t x3452 = INT16_MIN;
	int64_t t64 = 2LL;

	t64 = (x3449>>(x3450-(x3451==x3452)));

	if (t64 != 105222015514340856LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x3485 = UINT16_MAX;
	volatile int8_t x3487 = INT8_MIN;
	int64_t x3488 = -1LL;

	t65 = (x3485>>(x3486-(x3487==x3488)));

	if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x3489 = 88299599961128LL;
	uint16_t x3490 = 32U;
	uint64_t x3491 = UINT64_MAX;
	uint64_t x3492 = 39LLU;
	static volatile int64_t t66 = 1369459782LL;

	t66 = (x3489>>(x3490-(x3491==x3492)));

	if (t66 != 20558LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x3501 = 26U;
	uint32_t x3502 = 25U;
	int16_t x3503 = -1;
	int32_t x3504 = INT32_MIN;
	int32_t t67 = -156605430;

	t67 = (x3501>>(x3502-(x3503==x3504)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x3513 = 7025U;
	uint8_t x3514 = 0U;
	int16_t x3516 = 0;
	uint32_t t68 = 466952U;

	t68 = (x3513>>(x3514-(x3515==x3516)));

	if (t68 != 7025U) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x3521 = 349624791U;
	uint32_t x3523 = UINT32_MAX;
	int8_t x3524 = -15;
	uint32_t t69 = 2315U;

	t69 = (x3521>>(x3522-(x3523==x3524)));

	if (t69 != 1U) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x3595 = 23558865U;
	int32_t x3596 = INT32_MIN;
	volatile int32_t t70 = -125375;

	t70 = (x3593>>(x3594-(x3595==x3596)));

	if (t70 != 255) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x3617 = 7062U;
	int8_t x3618 = 4;
	volatile uint8_t x3619 = 1U;
	int8_t x3620 = -1;
	int32_t t71 = -1;

	t71 = (x3617>>(x3618-(x3619==x3620)));

	if (t71 != 441) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x3693 = UINT8_MAX;
	int8_t x3694 = 3;
	uint16_t x3695 = UINT16_MAX;
	uint64_t x3696 = UINT64_MAX;

	t72 = (x3693>>(x3694-(x3695==x3696)));

	if (t72 != 31) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x3753 = 7;
	static int8_t x3755 = INT8_MAX;
	int8_t x3756 = 0;
	volatile int32_t t73 = -226455;

	t73 = (x3753>>(x3754-(x3755==x3756)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x3781 = 160791296U;
	static volatile int8_t x3782 = 0;
	volatile uint16_t x3783 = 63U;
	uint32_t x3784 = 11987951U;

	t74 = (x3781>>(x3782-(x3783==x3784)));

	if (t74 != 160791296U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x3829 = 1163348744LL;
	uint8_t x3830 = 28U;
	uint32_t x3832 = 406084194U;

	t75 = (x3829>>(x3830-(x3831==x3832)));

	if (t75 != 4LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x3869 = 182426688;
	static volatile uint16_t x3870 = 2U;
	volatile uint64_t x3871 = 2803425848011302368LLU;
	int16_t x3872 = -28;
	int32_t t76 = 94936;

	t76 = (x3869>>(x3870-(x3871==x3872)));

	if (t76 != 45606672) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x3953 = 202LLU;
	uint8_t x3954 = 15U;
	int8_t x3955 = 1;
	uint16_t x3956 = 1U;
	uint64_t t77 = 6247706361496LLU;

	t77 = (x3953>>(x3954-(x3955==x3956)));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x3973 = 5;
	static uint8_t x3974 = 5U;
	int64_t x3975 = -1554LL;
	volatile uint32_t x3976 = UINT32_MAX;
	int32_t t78 = -296011;

	t78 = (x3973>>(x3974-(x3975==x3976)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x3989 = 33635;
	uint64_t x3991 = 2092173391913873LLU;
	int32_t x3992 = INT32_MIN;

	t79 = (x3989>>(x3990-(x3991==x3992)));

	if (t79 != 16817) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x4025 = INT64_MAX;
	int16_t x4027 = -79;
	volatile int64_t t80 = INT64_MAX;

	t80 = (x4025>>(x4026-(x4027==x4028)));

	if (t80 != INT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x4077 = 3502908511209324338LLU;
	int32_t x4078 = 28;
	static uint32_t x4079 = UINT32_MAX;
	volatile uint64_t t81 = 149LLU;

	t81 = (x4077>>(x4078-(x4079==x4080)));

	if (t81 != 13049351093LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x4138 = 5;
	int32_t t82 = -112806787;

	t82 = (x4137>>(x4138-(x4139==x4140)));

	if (t82 != 4095) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x4269 = UINT8_MAX;
	static uint8_t x4270 = 0U;
	volatile uint16_t x4271 = 1349U;
	int8_t x4272 = -1;
	int32_t t83 = -249968;

	t83 = (x4269>>(x4270-(x4271==x4272)));

	if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x4445 = 20;
	int8_t x4446 = 29;
	volatile int16_t x4447 = INT16_MIN;
	volatile int32_t t84 = -1011634;

	t84 = (x4445>>(x4446-(x4447==x4448)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x4521 = 39U;
	volatile int32_t x4522 = 2;
	uint64_t x4524 = 3093889LLU;
	int32_t t85 = -2;

	t85 = (x4521>>(x4522-(x4523==x4524)));

	if (t85 != 9) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x4534 = 0U;
	static uint64_t x4535 = 286LLU;
	uint32_t x4536 = 111U;

	t86 = (x4533>>(x4534-(x4535==x4536)));

	if (t86 != 101427011U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x4682 = 1;
	volatile uint16_t x4683 = 11U;
	int8_t x4684 = INT8_MIN;

	t87 = (x4681>>(x4682-(x4683==x4684)));

	if (t87 != 31567636416090706LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x4709 = 5458U;
	int16_t x4711 = -3;
	static int32_t t88 = 3169349;

	t88 = (x4709>>(x4710-(x4711==x4712)));

	if (t88 != 1364) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x4745 = UINT8_MAX;
	int8_t x4746 = 7;
	static int32_t x4747 = INT32_MIN;
	int64_t x4748 = -6740LL;
	volatile int32_t t89 = -15804911;

	t89 = (x4745>>(x4746-(x4747==x4748)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x4777 = 141;
	uint8_t x4778 = 4U;
	int64_t x4779 = 196668LL;
	uint64_t x4780 = 689386LLU;
	int32_t t90 = -1201315;

	t90 = (x4777>>(x4778-(x4779==x4780)));

	if (t90 != 8) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x4786 = 4;
	uint16_t x4788 = 1284U;

	t91 = (x4785>>(x4786-(x4787==x4788)));

	if (t91 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x4813 = 2039755U;
	volatile int8_t x4814 = 3;
	int8_t x4815 = 12;
	int8_t x4816 = 3;
	volatile uint32_t t92 = 15797461U;

	t92 = (x4813>>(x4814-(x4815==x4816)));

	if (t92 != 254969U) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x4921 = 1232985873877008LLU;
	static volatile int8_t x4922 = 6;
	static volatile uint16_t x4924 = 658U;
	uint64_t t93 = 31LLU;

	t93 = (x4921>>(x4922-(x4923==x4924)));

	if (t93 != 19265404279328LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x4933 = UINT8_MAX;
	int8_t x4934 = 0;
	volatile int32_t t94 = 6;

	t94 = (x4933>>(x4934-(x4935==x4936)));

	if (t94 != 255) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x4957 = 41U;
	static volatile int16_t x4958 = 2;
	int8_t x4959 = 7;
	static int8_t x4960 = -1;
	volatile int32_t t95 = -1413;

	t95 = (x4957>>(x4958-(x4959==x4960)));

	if (t95 != 10) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x4970 = 1;
	int64_t x4971 = -1LL;
	static volatile uint16_t x4972 = 3458U;

	t96 = (x4969>>(x4970-(x4971==x4972)));

	if (t96 != 4788878U) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x5101 = 17;
	int32_t x5103 = -1;
	int32_t x5104 = INT32_MIN;
	int32_t t97 = -522;

	t97 = (x5101>>(x5102-(x5103==x5104)));

	if (t97 != 4) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x5209 = 78U;
	int8_t x5211 = -1;
	int8_t x5212 = INT8_MAX;

	t98 = (x5209>>(x5210-(x5211==x5212)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x5317 = 41U;
	uint32_t x5318 = 0U;
	int64_t x5320 = INT64_MIN;
	int32_t t99 = 918;

	t99 = (x5317>>(x5318-(x5319==x5320)));

	if (t99 != 41) { NG(); } else { ; }
	
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

