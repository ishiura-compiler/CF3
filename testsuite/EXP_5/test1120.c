#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x31 = 13U;
uint64_t x126 = UINT64_MAX;
uint8_t x127 = 20U;
static uint8_t x128 = 0U;
uint8_t x349 = 0U;
int16_t x352 = INT16_MIN;
int8_t x441 = 1;
volatile uint16_t x443 = 1U;
volatile uint16_t x583 = 1U;
int8_t x849 = -1;
uint32_t x850 = 817U;
volatile uint16_t x903 = 9U;
uint32_t x941 = UINT32_MAX;
static int16_t x945 = -1;
int32_t x946 = 37213;
int32_t x948 = 0;
volatile int32_t t14 = -6723;
volatile int32_t x1035 = 0;
uint16_t x1055 = 0U;
static uint64_t x1100 = 566936004LLU;
volatile uint8_t x1395 = 5U;
int16_t x1447 = 3;
int8_t x1495 = 24;
volatile int8_t x1537 = INT8_MAX;
uint16_t x1557 = UINT16_MAX;
int32_t x1558 = INT32_MAX;
volatile int32_t t25 = -93107;
int32_t t26 = -131716130;
static int64_t x1657 = -1LL;
uint32_t x1659 = 4U;
volatile int64_t t29 = -1399459380473628LL;
static volatile int16_t x1826 = INT16_MAX;
static int32_t x1828 = INT32_MIN;
volatile int32_t t31 = INT32_MAX;
volatile uint32_t x1977 = 19711847U;
static volatile int16_t x2082 = 31;
volatile int8_t x2084 = 0;
uint8_t x2133 = 10U;
static volatile int32_t t36 = INT32_MIN;
uint64_t x2215 = 10LLU;
static int16_t x2250 = INT16_MAX;
static uint8_t x2275 = 2U;
int16_t x2281 = INT16_MAX;
int8_t x2384 = -1;
static int32_t t43 = 16;
volatile int32_t x2405 = INT32_MIN;
uint16_t x2406 = 772U;
volatile int8_t x2533 = INT8_MIN;
int8_t x2536 = INT8_MAX;
volatile int64_t t48 = INT64_MIN;
int16_t x2582 = INT16_MAX;
static uint32_t x2583 = 29U;
int16_t x2584 = -253;
volatile int32_t t50 = INT32_MAX;
int64_t x2636 = -33LL;
int32_t x2677 = 16;
uint64_t x2725 = 27LLU;
uint8_t x2728 = UINT8_MAX;
uint16_t x2791 = 1U;
int16_t x2825 = -1;
volatile int8_t x3104 = -1;
static uint32_t x3167 = 6U;
uint8_t x3327 = 0U;
int64_t x3328 = -1LL;
int32_t t63 = 308558;
static int64_t x3387 = 10LL;
uint32_t x3402 = UINT32_MAX;
uint8_t x3403 = 6U;
uint8_t x3414 = 3U;
uint64_t x3416 = UINT64_MAX;
int64_t x3542 = 35LL;
uint32_t x3543 = 32U;
int16_t x3590 = INT16_MAX;
volatile int32_t t72 = 621;
static volatile int8_t x3791 = 31;
volatile int32_t t75 = 11;
int8_t x3801 = 0;
int8_t x3836 = -1;
static volatile uint16_t x3971 = 3U;
volatile int32_t t82 = 186148538;
uint16_t x4206 = UINT16_MAX;
int8_t x4386 = 2;
int8_t x4396 = -14;
int64_t x4425 = -1LL;
int64_t x4453 = -1LL;
static uint16_t x4479 = 1U;
static int64_t t91 = 2LL;
volatile uint16_t x4810 = 193U;
uint8_t x4813 = UINT8_MAX;
uint8_t x4814 = 9U;
uint32_t x4816 = 21913U;
uint32_t x4875 = 16U;
volatile uint32_t x4937 = UINT32_MAX;
uint64_t x4940 = 508LLU;


void f0(void) {
	uint64_t x29 = UINT64_MAX;
	uint8_t x30 = UINT8_MAX;
	static uint32_t x32 = 1715U;
	static uint64_t t0 = 167LLU;

	t0 = (x29-((x30>>x31)<x32));

	if (t0 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x109 = INT16_MIN;
	uint64_t x110 = 15289LLU;
	static int8_t x111 = 1;
	int64_t x112 = -1LL;
	static volatile int32_t t1 = 2580;

	t1 = (x109-((x110>>x111)<x112));

	if (t1 != -32769) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x125 = INT64_MIN;
	volatile int64_t t2 = INT64_MIN;

	t2 = (x125-((x126>>x127)<x128));

	if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x157 = -1LL;
	volatile int16_t x158 = 30;
	int8_t x159 = 3;
	volatile int8_t x160 = 56;
	volatile int64_t t3 = 19LL;

	t3 = (x157-((x158>>x159)<x160));

	if (t3 != -2LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x169 = UINT32_MAX;
	uint16_t x170 = UINT16_MAX;
	static uint16_t x171 = 2U;
	uint32_t x172 = 4054U;
	uint32_t t4 = UINT32_MAX;

	t4 = (x169-((x170>>x171)<x172));

	if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x205 = -1LL;
	static uint16_t x206 = 735U;
	int8_t x207 = 1;
	volatile uint32_t x208 = 46295U;
	int64_t t5 = 2448955744519466LL;

	t5 = (x205-((x206>>x207)<x208));

	if (t5 != -2LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x350 = UINT32_MAX;
	int8_t x351 = 10;
	int32_t t6 = -27844205;

	t6 = (x349-((x350>>x351)<x352));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x442 = UINT32_MAX;
	volatile int64_t x444 = 19LL;
	int32_t t7 = -536345253;

	t7 = (x441-((x442>>x443)<x444));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x581 = 1589LLU;
	static uint16_t x582 = UINT16_MAX;
	volatile uint64_t x584 = 114514LLU;
	uint64_t t8 = 384866655550345520LLU;

	t8 = (x581-((x582>>x583)<x584));

	if (t8 != 1588LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x851 = 0;
	static int16_t x852 = -1;
	volatile int32_t t9 = 3414;

	t9 = (x849-((x850>>x851)<x852));

	if (t9 != -2) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x901 = 1880755837897LLU;
	volatile uint16_t x902 = UINT16_MAX;
	int16_t x904 = INT16_MAX;
	volatile uint64_t t10 = 370350065LLU;

	t10 = (x901-((x902>>x903)<x904));

	if (t10 != 1880755837896LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x942 = 9;
	volatile int16_t x943 = 4;
	static int32_t x944 = 6331;
	uint32_t t11 = 8U;

	t11 = (x941-((x942>>x943)<x944));

	if (t11 != 4294967294U) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x947 = 12U;
	int32_t t12 = -67;

	t12 = (x945-((x946>>x947)<x948));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x1017 = -10031986025896366LL;
	static int8_t x1018 = INT8_MAX;
	volatile int16_t x1019 = 1;
	int8_t x1020 = 7;
	static int64_t t13 = 4453742323460896LL;

	t13 = (x1017-((x1018>>x1019)<x1020));

	if (t13 != -10031986025896366LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x1025 = INT8_MIN;
	uint64_t x1026 = 65055379498LLU;
	uint8_t x1027 = 3U;
	volatile int64_t x1028 = 0LL;

	t14 = (x1025-((x1026>>x1027)<x1028));

	if (t14 != -128) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x1033 = -1;
	uint8_t x1034 = 3U;
	int32_t x1036 = 3;
	int32_t t15 = 3;

	t15 = (x1033-((x1034>>x1035)<x1036));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x1053 = UINT64_MAX;
	static uint64_t x1054 = UINT64_MAX;
	static int64_t x1056 = INT64_MIN;
	volatile uint64_t t16 = UINT64_MAX;

	t16 = (x1053-((x1054>>x1055)<x1056));

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x1097 = INT32_MAX;
	int32_t x1098 = INT32_MAX;
	int8_t x1099 = 21;
	int32_t t17 = 50;

	t17 = (x1097-((x1098>>x1099)<x1100));

	if (t17 != 2147483646) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x1121 = 66U;
	int8_t x1122 = 3;
	uint32_t x1123 = 0U;
	volatile uint16_t x1124 = 219U;
	int32_t t18 = -8;

	t18 = (x1121-((x1122>>x1123)<x1124));

	if (t18 != 65) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x1177 = UINT16_MAX;
	int32_t x1178 = INT32_MAX;
	uint64_t x1179 = 1LLU;
	volatile uint8_t x1180 = 88U;
	int32_t t19 = 104;

	t19 = (x1177-((x1178>>x1179)<x1180));

	if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x1333 = UINT64_MAX;
	uint8_t x1334 = UINT8_MAX;
	int8_t x1335 = 0;
	int64_t x1336 = INT64_MIN;
	volatile uint64_t t20 = UINT64_MAX;

	t20 = (x1333-((x1334>>x1335)<x1336));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x1393 = -8653LL;
	uint64_t x1394 = 500962475LLU;
	static volatile int64_t x1396 = 951888433892LL;
	volatile int64_t t21 = 5632620LL;

	t21 = (x1393-((x1394>>x1395)<x1396));

	if (t21 != -8654LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1445 = 457355512;
	int16_t x1446 = INT16_MAX;
	static volatile int32_t x1448 = INT32_MAX;
	int32_t t22 = 55287136;

	t22 = (x1445-((x1446>>x1447)<x1448));

	if (t22 != 457355511) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x1493 = -1LL;
	uint8_t x1494 = 2U;
	static uint8_t x1496 = 23U;
	volatile int64_t t23 = -208158843817245LL;

	t23 = (x1493-((x1494>>x1495)<x1496));

	if (t23 != -2LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1538 = 0U;
	volatile int8_t x1539 = 0;
	uint64_t x1540 = 15046920115LLU;
	int32_t t24 = 1;

	t24 = (x1537-((x1538>>x1539)<x1540));

	if (t24 != 126) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1559 = 18U;
	int64_t x1560 = INT64_MIN;

	t25 = (x1557-((x1558>>x1559)<x1560));

	if (t25 != 65535) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x1573 = INT16_MIN;
	int64_t x1574 = INT64_MAX;
	uint32_t x1575 = 2U;
	static uint16_t x1576 = 6U;

	t26 = (x1573-((x1574>>x1575)<x1576));

	if (t26 != -32768) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1658 = 64636030LL;
	int8_t x1660 = 44;
	int64_t t27 = -2013793LL;

	t27 = (x1657-((x1658>>x1659)<x1660));

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1669 = INT16_MIN;
	volatile uint8_t x1670 = UINT8_MAX;
	static uint16_t x1671 = 28U;
	int64_t x1672 = INT64_MAX;
	volatile int32_t t28 = -401464;

	t28 = (x1669-((x1670>>x1671)<x1672));

	if (t28 != -32769) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x1701 = INT64_MAX;
	int8_t x1702 = INT8_MAX;
	uint8_t x1703 = 3U;
	uint32_t x1704 = UINT32_MAX;

	t29 = (x1701-((x1702>>x1703)<x1704));

	if (t29 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1825 = -1LL;
	int32_t x1827 = 10;
	volatile int64_t t30 = -27442593LL;

	t30 = (x1825-((x1826>>x1827)<x1828));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x1893 = INT32_MAX;
	volatile int8_t x1894 = 1;
	static uint16_t x1895 = 1U;
	int32_t x1896 = INT32_MIN;

	t31 = (x1893-((x1894>>x1895)<x1896));

	if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x1953 = -1;
	volatile int64_t x1954 = INT64_MAX;
	uint8_t x1955 = 40U;
	volatile int64_t x1956 = -1982463945901851LL;
	volatile int32_t t32 = 686440;

	t32 = (x1953-((x1954>>x1955)<x1956));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x1978 = 57;
	uint8_t x1979 = 0U;
	static uint8_t x1980 = 38U;
	static volatile uint32_t t33 = 36U;

	t33 = (x1977-((x1978>>x1979)<x1980));

	if (t33 != 19711847U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x2081 = -2;
	uint8_t x2083 = 22U;
	int32_t t34 = 86197;

	t34 = (x2081-((x2082>>x2083)<x2084));

	if (t34 != -2) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x2134 = INT16_MAX;
	int8_t x2135 = 6;
	int16_t x2136 = INT16_MIN;
	int32_t t35 = 196346451;

	t35 = (x2133-((x2134>>x2135)<x2136));

	if (t35 != 10) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x2201 = INT32_MIN;
	int64_t x2202 = 5383213LL;
	int16_t x2203 = 7;
	static uint8_t x2204 = UINT8_MAX;

	t36 = (x2201-((x2202>>x2203)<x2204));

	if (t36 != INT32_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x2213 = -1;
	int8_t x2214 = 1;
	volatile int8_t x2216 = 4;
	int32_t t37 = 519;

	t37 = (x2213-((x2214>>x2215)<x2216));

	if (t37 != -2) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x2249 = 45215385U;
	int32_t x2251 = 1;
	volatile int16_t x2252 = INT16_MAX;
	uint32_t t38 = 417U;

	t38 = (x2249-((x2250>>x2251)<x2252));

	if (t38 != 45215384U) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x2269 = 178935LLU;
	volatile int16_t x2270 = 11;
	int8_t x2271 = 1;
	int64_t x2272 = INT64_MIN;
	uint64_t t39 = 1345060607813672LLU;

	t39 = (x2269-((x2270>>x2271)<x2272));

	if (t39 != 178935LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2273 = INT8_MIN;
	uint32_t x2274 = 4150841U;
	int64_t x2276 = INT64_MIN;
	volatile int32_t t40 = -2;

	t40 = (x2273-((x2274>>x2275)<x2276));

	if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x2282 = 29U;
	uint16_t x2283 = 23U;
	uint8_t x2284 = 28U;
	int32_t t41 = -492;

	t41 = (x2281-((x2282>>x2283)<x2284));

	if (t41 != 32766) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x2301 = -1;
	static volatile int32_t x2302 = 1861;
	volatile uint8_t x2303 = 3U;
	uint32_t x2304 = UINT32_MAX;
	int32_t t42 = 18742033;

	t42 = (x2301-((x2302>>x2303)<x2304));

	if (t42 != -2) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x2381 = -1;
	uint16_t x2382 = UINT16_MAX;
	volatile int8_t x2383 = 5;

	t43 = (x2381-((x2382>>x2383)<x2384));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x2407 = 13U;
	static volatile int64_t x2408 = INT64_MIN;
	volatile int32_t t44 = INT32_MIN;

	t44 = (x2405-((x2406>>x2407)<x2408));

	if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x2453 = UINT16_MAX;
	static uint32_t x2454 = UINT32_MAX;
	uint8_t x2455 = 5U;
	int32_t x2456 = INT32_MIN;
	volatile int32_t t45 = -46132535;

	t45 = (x2453-((x2454>>x2455)<x2456));

	if (t45 != 65534) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x2521 = UINT8_MAX;
	volatile int8_t x2522 = INT8_MAX;
	int8_t x2523 = 11;
	volatile int16_t x2524 = INT16_MIN;
	int32_t t46 = -1120;

	t46 = (x2521-((x2522>>x2523)<x2524));

	if (t46 != 255) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x2534 = 1110545712340LLU;
	uint32_t x2535 = 0U;
	int32_t t47 = -23683;

	t47 = (x2533-((x2534>>x2535)<x2536));

	if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x2577 = INT64_MIN;
	int64_t x2578 = 62LL;
	uint8_t x2579 = 25U;
	int16_t x2580 = INT16_MIN;

	t48 = (x2577-((x2578>>x2579)<x2580));

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x2581 = 3U;
	volatile int32_t t49 = 1;

	t49 = (x2581-((x2582>>x2583)<x2584));

	if (t49 != 3) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x2589 = INT32_MAX;
	static int32_t x2590 = INT32_MAX;
	uint16_t x2591 = 0U;
	int32_t x2592 = INT32_MIN;

	t50 = (x2589-((x2590>>x2591)<x2592));

	if (t50 != INT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x2633 = 0U;
	static volatile int64_t x2634 = 2257LL;
	int16_t x2635 = 45;
	static volatile uint32_t t51 = 0U;

	t51 = (x2633-((x2634>>x2635)<x2636));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x2653 = 14439LLU;
	int64_t x2654 = INT64_MAX;
	uint8_t x2655 = 3U;
	volatile uint8_t x2656 = UINT8_MAX;
	uint64_t t52 = 3396551394681072122LLU;

	t52 = (x2653-((x2654>>x2655)<x2656));

	if (t52 != 14439LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x2678 = 424092LLU;
	int16_t x2679 = 13;
	int64_t x2680 = 14053857LL;
	volatile int32_t t53 = 1;

	t53 = (x2677-((x2678>>x2679)<x2680));

	if (t53 != 15) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x2726 = INT32_MAX;
	static int32_t x2727 = 1;
	uint64_t t54 = 9586LLU;

	t54 = (x2725-((x2726>>x2727)<x2728));

	if (t54 != 27LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x2789 = -1;
	uint64_t x2790 = 2858596680295LLU;
	static volatile int32_t x2792 = -1;
	int32_t t55 = -445;

	t55 = (x2789-((x2790>>x2791)<x2792));

	if (t55 != -2) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x2826 = 21;
	uint32_t x2827 = 29U;
	volatile int16_t x2828 = -1;
	volatile int32_t t56 = -160917;

	t56 = (x2825-((x2826>>x2827)<x2828));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x2869 = UINT64_MAX;
	static uint16_t x2870 = UINT16_MAX;
	uint64_t x2871 = 2LLU;
	static volatile int64_t x2872 = -1010LL;
	uint64_t t57 = UINT64_MAX;

	t57 = (x2869-((x2870>>x2871)<x2872));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x3073 = UINT32_MAX;
	static int32_t x3074 = INT32_MAX;
	static uint32_t x3075 = 11U;
	static int16_t x3076 = -1;
	uint32_t t58 = UINT32_MAX;

	t58 = (x3073-((x3074>>x3075)<x3076));

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x3101 = UINT32_MAX;
	volatile uint16_t x3102 = 13128U;
	uint32_t x3103 = 0U;
	volatile uint32_t t59 = UINT32_MAX;

	t59 = (x3101-((x3102>>x3103)<x3104));

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x3125 = -1LL;
	uint8_t x3126 = UINT8_MAX;
	int8_t x3127 = 1;
	int16_t x3128 = INT16_MIN;
	volatile int64_t t60 = -86215432LL;

	t60 = (x3125-((x3126>>x3127)<x3128));

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x3165 = 1043;
	static uint16_t x3166 = 181U;
	int8_t x3168 = -1;
	static int32_t t61 = -16144269;

	t61 = (x3165-((x3166>>x3167)<x3168));

	if (t61 != 1043) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x3237 = -258363623LL;
	int8_t x3238 = INT8_MAX;
	int8_t x3239 = 12;
	int64_t x3240 = INT64_MIN;
	volatile int64_t t62 = -100524188267LL;

	t62 = (x3237-((x3238>>x3239)<x3240));

	if (t62 != -258363623LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x3325 = UINT16_MAX;
	uint64_t x3326 = 1064056106607LLU;

	t63 = (x3325-((x3326>>x3327)<x3328));

	if (t63 != 65534) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x3385 = INT16_MIN;
	uint8_t x3386 = UINT8_MAX;
	int8_t x3388 = 18;
	int32_t t64 = 161;

	t64 = (x3385-((x3386>>x3387)<x3388));

	if (t64 != -32769) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x3401 = UINT16_MAX;
	uint8_t x3404 = 13U;
	volatile int32_t t65 = -3773;

	t65 = (x3401-((x3402>>x3403)<x3404));

	if (t65 != 65535) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x3413 = INT8_MAX;
	static uint16_t x3415 = 9U;
	static int32_t t66 = -3646192;

	t66 = (x3413-((x3414>>x3415)<x3416));

	if (t66 != 126) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x3505 = -198995542;
	uint64_t x3506 = 4323398876367LLU;
	volatile uint8_t x3507 = 3U;
	int64_t x3508 = 3131670238206924847LL;
	int32_t t67 = 207851;

	t67 = (x3505-((x3506>>x3507)<x3508));

	if (t67 != -198995543) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x3541 = UINT64_MAX;
	volatile int32_t x3544 = 221648619;
	volatile uint64_t t68 = 1864017322417001087LLU;

	t68 = (x3541-((x3542>>x3543)<x3544));

	if (t68 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x3565 = INT8_MIN;
	uint16_t x3566 = UINT16_MAX;
	uint8_t x3567 = 31U;
	uint64_t x3568 = 331LLU;
	int32_t t69 = -5365821;

	t69 = (x3565-((x3566>>x3567)<x3568));

	if (t69 != -129) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x3577 = 11;
	static uint64_t x3578 = 1034895326LLU;
	uint64_t x3579 = 1LLU;
	int64_t x3580 = -1046480912100509388LL;
	int32_t t70 = 1210;

	t70 = (x3577-((x3578>>x3579)<x3580));

	if (t70 != 10) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x3589 = -11;
	int8_t x3591 = 1;
	int32_t x3592 = INT32_MIN;
	volatile int32_t t71 = 23;

	t71 = (x3589-((x3590>>x3591)<x3592));

	if (t71 != -11) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x3621 = 4870U;
	uint16_t x3622 = UINT16_MAX;
	uint8_t x3623 = 0U;
	uint64_t x3624 = 4089130385620975LLU;

	t72 = (x3621-((x3622>>x3623)<x3624));

	if (t72 != 4869) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x3633 = -1;
	uint32_t x3634 = 193U;
	volatile uint8_t x3635 = 12U;
	int16_t x3636 = INT16_MIN;
	static int32_t t73 = 44350617;

	t73 = (x3633-((x3634>>x3635)<x3636));

	if (t73 != -2) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x3737 = 0;
	volatile uint8_t x3738 = UINT8_MAX;
	int8_t x3739 = 1;
	int64_t x3740 = -1LL;
	static volatile int32_t t74 = 57771760;

	t74 = (x3737-((x3738>>x3739)<x3740));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x3789 = UINT16_MAX;
	uint32_t x3790 = UINT32_MAX;
	int32_t x3792 = INT32_MAX;

	t75 = (x3789-((x3790>>x3791)<x3792));

	if (t75 != 65534) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x3802 = UINT64_MAX;
	volatile int16_t x3803 = 52;
	volatile uint32_t x3804 = UINT32_MAX;
	volatile int32_t t76 = -2625189;

	t76 = (x3801-((x3802>>x3803)<x3804));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x3833 = -835569080485LL;
	uint64_t x3834 = 211317934032830LLU;
	uint16_t x3835 = 5U;
	int64_t t77 = 2482166731657839527LL;

	t77 = (x3833-((x3834>>x3835)<x3836));

	if (t77 != -835569080486LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x3837 = -262304740LL;
	uint8_t x3838 = UINT8_MAX;
	int8_t x3839 = 16;
	static uint64_t x3840 = 2609551582LLU;
	int64_t t78 = 1206547LL;

	t78 = (x3837-((x3838>>x3839)<x3840));

	if (t78 != -262304741LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x3905 = 36U;
	uint16_t x3906 = 11U;
	static volatile int16_t x3907 = 0;
	int32_t x3908 = INT32_MIN;
	int32_t t79 = -6;

	t79 = (x3905-((x3906>>x3907)<x3908));

	if (t79 != 36) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x3969 = UINT8_MAX;
	uint8_t x3970 = 2U;
	volatile int32_t x3972 = INT32_MIN;
	volatile int32_t t80 = -119;

	t80 = (x3969-((x3970>>x3971)<x3972));

	if (t80 != 255) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int32_t x4017 = -1;
	int16_t x4018 = 7;
	int8_t x4019 = 2;
	static int16_t x4020 = INT16_MAX;
	volatile int32_t t81 = 6092743;

	t81 = (x4017-((x4018>>x4019)<x4020));

	if (t81 != -2) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x4121 = UINT8_MAX;
	volatile int16_t x4122 = INT16_MAX;
	static uint32_t x4123 = 19U;
	int64_t x4124 = -1LL;

	t82 = (x4121-((x4122>>x4123)<x4124));

	if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x4157 = -1LL;
	int8_t x4158 = INT8_MAX;
	static uint8_t x4159 = 21U;
	int16_t x4160 = INT16_MAX;
	volatile int64_t t83 = -75610LL;

	t83 = (x4157-((x4158>>x4159)<x4160));

	if (t83 != -2LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x4205 = INT64_MAX;
	uint32_t x4207 = 1U;
	volatile int32_t x4208 = -1;
	volatile int64_t t84 = INT64_MAX;

	t84 = (x4205-((x4206>>x4207)<x4208));

	if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x4209 = 2685U;
	uint8_t x4210 = 36U;
	static volatile uint8_t x4211 = 0U;
	volatile uint64_t x4212 = 241026926LLU;
	volatile uint32_t t85 = 690U;

	t85 = (x4209-((x4210>>x4211)<x4212));

	if (t85 != 2684U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x4213 = INT64_MAX;
	int8_t x4214 = INT8_MAX;
	uint8_t x4215 = 0U;
	static int8_t x4216 = INT8_MIN;
	volatile int64_t t86 = INT64_MAX;

	t86 = (x4213-((x4214>>x4215)<x4216));

	if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x4385 = INT16_MIN;
	uint8_t x4387 = 0U;
	static uint64_t x4388 = UINT64_MAX;
	volatile int32_t t87 = 6714218;

	t87 = (x4385-((x4386>>x4387)<x4388));

	if (t87 != -32769) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x4393 = 31LL;
	static int16_t x4394 = 2;
	int32_t x4395 = 15;
	static volatile int64_t t88 = 2024LL;

	t88 = (x4393-((x4394>>x4395)<x4396));

	if (t88 != 31LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x4426 = 0;
	volatile int8_t x4427 = 31;
	int64_t x4428 = 22LL;
	volatile int64_t t89 = -2048851769LL;

	t89 = (x4425-((x4426>>x4427)<x4428));

	if (t89 != -2LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x4454 = 8;
	uint8_t x4455 = 6U;
	volatile int64_t x4456 = -1LL;
	volatile int64_t t90 = -114239868647LL;

	t90 = (x4453-((x4454>>x4455)<x4456));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x4477 = INT64_MAX;
	volatile uint64_t x4478 = 8363LLU;
	volatile uint16_t x4480 = 4426U;

	t91 = (x4477-((x4478>>x4479)<x4480));

	if (t91 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x4545 = 37U;
	int16_t x4546 = 0;
	uint8_t x4547 = 12U;
	static int16_t x4548 = INT16_MIN;
	int32_t t92 = 87;

	t92 = (x4545-((x4546>>x4547)<x4548));

	if (t92 != 37) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x4601 = INT16_MAX;
	static volatile int16_t x4602 = INT16_MAX;
	uint32_t x4603 = 11U;
	uint8_t x4604 = UINT8_MAX;
	int32_t t93 = 15535013;

	t93 = (x4601-((x4602>>x4603)<x4604));

	if (t93 != 32766) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x4605 = INT16_MIN;
	volatile int8_t x4606 = INT8_MAX;
	volatile uint8_t x4607 = 24U;
	int16_t x4608 = INT16_MAX;
	volatile int32_t t94 = 54834;

	t94 = (x4605-((x4606>>x4607)<x4608));

	if (t94 != -32769) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x4809 = 28U;
	uint8_t x4811 = 9U;
	volatile uint64_t x4812 = UINT64_MAX;
	uint32_t t95 = 369679U;

	t95 = (x4809-((x4810>>x4811)<x4812));

	if (t95 != 27U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x4815 = 2;
	static volatile int32_t t96 = 982988;

	t96 = (x4813-((x4814>>x4815)<x4816));

	if (t96 != 254) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x4817 = INT16_MIN;
	volatile uint32_t x4818 = UINT32_MAX;
	static uint8_t x4819 = 1U;
	uint32_t x4820 = 378U;
	volatile int32_t t97 = 745644730;

	t97 = (x4817-((x4818>>x4819)<x4820));

	if (t97 != -32768) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x4873 = INT64_MAX;
	uint32_t x4874 = UINT32_MAX;
	volatile uint64_t x4876 = 13304090025764982LLU;
	volatile int64_t t98 = -140836806LL;

	t98 = (x4873-((x4874>>x4875)<x4876));

	if (t98 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x4938 = 1418216U;
	static uint32_t x4939 = 11U;
	uint32_t t99 = UINT32_MAX;

	t99 = (x4937-((x4938>>x4939)<x4940));

	if (t99 != UINT32_MAX) { NG(); } else { ; }
	
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

