#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x1 = INT16_MIN;
uint16_t x97 = UINT16_MAX;
static uint64_t x99 = 0LLU;
int8_t x321 = -2;
static volatile int32_t t7 = -52184;
int64_t x572 = 27790233749LL;
int16_t x584 = -1;
volatile uint16_t x586 = 2524U;
uint64_t t14 = 4344215236334LLU;
volatile int8_t x892 = -1;
int64_t x920 = -1LL;
int8_t x1187 = 0;
static int16_t x1188 = 15945;
int32_t t21 = 11;
int8_t x1216 = 0;
static volatile int32_t t23 = -6;
static int32_t x1242 = 14617134;
int32_t x1425 = 1603;
int32_t x1487 = -1;
int8_t x1488 = -2;
uint64_t x1696 = UINT64_MAX;
volatile uint16_t x1723 = 0U;
static int16_t x1752 = -1;
int16_t x2056 = -1;
int32_t t36 = 0;
int32_t x2306 = 15989;
uint32_t x2362 = 672844U;
int32_t x2367 = -1;
uint32_t x2569 = 134U;
uint32_t x2652 = UINT32_MAX;
uint64_t x2677 = 234510407537479LLU;
uint16_t x2741 = 2U;
uint16_t x2750 = UINT16_MAX;
int64_t x2751 = -1LL;
uint64_t x3010 = UINT64_MAX;
int8_t x3037 = INT8_MAX;
volatile int32_t t55 = -1835453;
uint64_t x3213 = 1586734LLU;
volatile uint64_t t56 = 20419882LLU;
static uint8_t x3308 = 5U;
volatile uint64_t t58 = 3057LLU;
int32_t t60 = -58502;
int64_t x3639 = INT64_MIN;
uint64_t t62 = 8206278LLU;
volatile int64_t t63 = 12591LL;
int16_t x3806 = -1;
int8_t x3817 = -1;
volatile int16_t x3818 = 667;
static volatile int64_t t66 = -437923337865072671LL;
static int16_t x3891 = -1;
int8_t x3942 = INT8_MAX;
uint64_t x3958 = 395536714495866421LLU;
uint64_t x4025 = 25953LLU;
static volatile int8_t x4028 = -1;
int8_t x4191 = -1;
uint16_t x4257 = 5683U;
uint16_t x4259 = 4U;
uint8_t x4312 = 0U;
uint64_t t75 = 8556884500532538866LLU;
static volatile int64_t x4435 = -1LL;
uint64_t x4528 = UINT64_MAX;
uint32_t x4617 = 1025479U;
static uint32_t t81 = 32250074U;
uint16_t x4660 = 0U;
int8_t x4700 = -1;
volatile int32_t t83 = 0;
static int8_t x4819 = -1;
volatile uint32_t x4898 = 25U;
int32_t x4900 = INT32_MIN;
int8_t x4969 = -3;
volatile int16_t x5024 = -5;
volatile int32_t x5053 = 488;
volatile uint32_t x5090 = 23U;
int16_t x5214 = -4;
int64_t x5216 = -1LL;
int8_t x5437 = INT8_MIN;
int16_t x5482 = 211;
static int32_t t94 = -6420;
volatile int32_t t95 = -1483;
static int8_t x5594 = -1;


void f0(void) {
	uint32_t x2 = UINT32_MAX;
	static int8_t x3 = 0;
	uint32_t x4 = 43150U;
	uint32_t t0 = 430020U;

	t0 = ((x1+x2)>>(x3*x4));

	if (t0 != 4294934527U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x57 = -3726;
	volatile uint64_t x58 = 1651109071439623545LLU;
	int16_t x59 = 0;
	uint16_t x60 = UINT16_MAX;
	volatile uint64_t t1 = 1459135988849276LLU;

	t1 = ((x57+x58)>>(x59*x60));

	if (t1 != 1651109071439619819LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x61 = INT8_MIN;
	static int16_t x62 = INT16_MAX;
	int64_t x63 = 0LL;
	uint8_t x64 = UINT8_MAX;
	volatile int32_t t2 = -905573;

	t2 = ((x61+x62)>>(x63*x64));

	if (t2 != 32639) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x77 = INT8_MAX;
	int16_t x78 = -1;
	volatile uint32_t x79 = 53088322U;
	volatile int32_t x80 = INT32_MIN;
	int32_t t3 = 5946176;

	t3 = ((x77+x78)>>(x79*x80));

	if (t3 != 126) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x98 = -1;
	int64_t x100 = INT64_MIN;
	volatile int32_t t4 = -2452631;

	t4 = ((x97+x98)>>(x99*x100));

	if (t4 != 65534) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x189 = INT16_MAX;
	int8_t x190 = -15;
	int32_t x191 = -7;
	static volatile uint32_t x192 = UINT32_MAX;
	int32_t t5 = 38836017;

	t5 = ((x189+x190)>>(x191*x192));

	if (t5 != 255) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x253 = INT16_MAX;
	volatile int32_t x254 = -1;
	uint8_t x255 = 0U;
	volatile int32_t x256 = INT32_MIN;
	int32_t t6 = 1264807;

	t6 = ((x253+x254)>>(x255*x256));

	if (t6 != 32766) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x322 = 15;
	int64_t x323 = -1LL;
	int8_t x324 = -1;

	t7 = ((x321+x322)>>(x323*x324));

	if (t7 != 6) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x481 = -145547036793093753LL;
	int64_t x482 = INT64_MAX;
	static int16_t x483 = 11;
	int32_t x484 = 1;
	int64_t t8 = 9LL;

	t8 = ((x481+x482)>>(x483*x484));

	if (t8 != 4432531738311368LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x569 = 31U;
	static int32_t x570 = 15485144;
	static volatile int8_t x571 = 0;
	volatile int32_t t9 = 49273;

	t9 = ((x569+x570)>>(x571*x572));

	if (t9 != 15485175) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x581 = 2122;
	uint16_t x582 = 26U;
	volatile uint32_t x583 = UINT32_MAX;
	int32_t t10 = 74854;

	t10 = ((x581+x582)>>(x583*x584));

	if (t10 != 1074) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x585 = 160374322U;
	int64_t x587 = INT64_MIN;
	uint64_t x588 = 11038LLU;
	uint32_t t11 = 120146U;

	t11 = ((x585+x586)>>(x587*x588));

	if (t11 != 160376846U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x597 = INT16_MAX;
	uint32_t x598 = UINT32_MAX;
	int8_t x599 = -1;
	int8_t x600 = -24;
	static uint32_t t12 = 38578U;

	t12 = ((x597+x598)>>(x599*x600));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x721 = -1;
	static int32_t x722 = 491449;
	uint32_t x723 = 597969U;
	int32_t x724 = 0;
	volatile int32_t t13 = -3280576;

	t13 = ((x721+x722)>>(x723*x724));

	if (t13 != 491448) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x753 = 957852159921979093LLU;
	int32_t x754 = -1;
	uint8_t x755 = 0U;
	int64_t x756 = -187118255597LL;

	t14 = ((x753+x754)>>(x755*x756));

	if (t14 != 957852159921979092LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x797 = UINT64_MAX;
	uint8_t x798 = 7U;
	uint8_t x799 = 0U;
	static volatile int8_t x800 = 15;
	volatile uint64_t t15 = 27283003130527607LLU;

	t15 = ((x797+x798)>>(x799*x800));

	if (t15 != 6LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x889 = 10761229008LLU;
	int32_t x890 = INT32_MIN;
	volatile int32_t x891 = -1;
	volatile uint64_t t16 = 6LLU;

	t16 = ((x889+x890)>>(x891*x892));

	if (t16 != 4306872680LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x917 = 49;
	static uint32_t x918 = UINT32_MAX;
	int32_t x919 = -1;
	uint32_t t17 = 931432156U;

	t17 = ((x917+x918)>>(x919*x920));

	if (t17 != 24U) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x993 = 12U;
	int64_t x994 = -1LL;
	int32_t x995 = 0;
	volatile int64_t x996 = 58685882603LL;
	int64_t t18 = -1714944589213604154LL;

	t18 = ((x993+x994)>>(x995*x996));

	if (t18 != 11LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x1129 = 2;
	volatile int8_t x1130 = -1;
	volatile int32_t x1131 = -1;
	uint64_t x1132 = UINT64_MAX;
	volatile int32_t t19 = -874424;

	t19 = ((x1129+x1130)>>(x1131*x1132));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1133 = -4;
	uint32_t x1134 = 70650793U;
	int16_t x1135 = 0;
	uint32_t x1136 = 14049951U;
	uint32_t t20 = 10U;

	t20 = ((x1133+x1134)>>(x1135*x1136));

	if (t20 != 70650789U) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1185 = UINT8_MAX;
	int8_t x1186 = INT8_MAX;

	t21 = ((x1185+x1186)>>(x1187*x1188));

	if (t21 != 382) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1213 = INT16_MAX;
	volatile int64_t x1214 = 58689666981LL;
	int32_t x1215 = -35694;
	int64_t t22 = -227LL;

	t22 = ((x1213+x1214)>>(x1215*x1216));

	if (t22 != 58689699748LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1233 = UINT16_MAX;
	int8_t x1234 = INT8_MIN;
	volatile uint64_t x1235 = 2LLU;
	uint64_t x1236 = 7LLU;

	t23 = ((x1233+x1234)>>(x1235*x1236));

	if (t23 != 3) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x1241 = UINT64_MAX;
	int8_t x1243 = -1;
	int8_t x1244 = -2;
	uint64_t t24 = 24894210661112425LLU;

	t24 = ((x1241+x1242)>>(x1243*x1244));

	if (t24 != 3654283LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x1426 = -1LL;
	int64_t x1427 = INT64_MIN;
	uint64_t x1428 = 523870264LLU;
	int64_t t25 = 2162728LL;

	t25 = ((x1425+x1426)>>(x1427*x1428));

	if (t25 != 1602LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1485 = -1;
	uint16_t x1486 = UINT16_MAX;
	volatile int32_t t26 = 1;

	t26 = ((x1485+x1486)>>(x1487*x1488));

	if (t26 != 16383) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1637 = UINT16_MAX;
	int64_t x1638 = 83904409LL;
	static int32_t x1639 = -839488385;
	volatile uint32_t x1640 = 0U;
	static volatile int64_t t27 = 237LL;

	t27 = ((x1637+x1638)>>(x1639*x1640));

	if (t27 != 83969944LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x1685 = UINT64_MAX;
	int64_t x1686 = INT64_MAX;
	uint16_t x1687 = 0U;
	int8_t x1688 = INT8_MIN;
	static volatile uint64_t t28 = 58039275188957821LLU;

	t28 = ((x1685+x1686)>>(x1687*x1688));

	if (t28 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x1693 = 111563964715364414LLU;
	uint8_t x1694 = 5U;
	static uint8_t x1695 = 0U;
	static volatile uint64_t t29 = 25302LLU;

	t29 = ((x1693+x1694)>>(x1695*x1696));

	if (t29 != 111563964715364419LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x1721 = 1U;
	uint32_t x1722 = 19773391U;
	int64_t x1724 = INT64_MIN;
	volatile uint32_t t30 = 1292468U;

	t30 = ((x1721+x1722)>>(x1723*x1724));

	if (t30 != 19773392U) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1749 = UINT8_MAX;
	int8_t x1750 = INT8_MIN;
	static int32_t x1751 = -1;
	int32_t t31 = 3;

	t31 = ((x1749+x1750)>>(x1751*x1752));

	if (t31 != 63) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1841 = INT8_MIN;
	uint64_t x1842 = UINT64_MAX;
	int16_t x1843 = -1;
	int8_t x1844 = -1;
	uint64_t t32 = 237LLU;

	t32 = ((x1841+x1842)>>(x1843*x1844));

	if (t32 != 9223372036854775743LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x1889 = UINT64_MAX;
	volatile uint16_t x1890 = 840U;
	uint8_t x1891 = 0U;
	int16_t x1892 = INT16_MIN;
	static volatile uint64_t t33 = 487794565LLU;

	t33 = ((x1889+x1890)>>(x1891*x1892));

	if (t33 != 839LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x1901 = 14443890962LL;
	static uint32_t x1902 = 6U;
	int16_t x1903 = INT16_MIN;
	volatile int16_t x1904 = 0;
	int64_t t34 = -42298539LL;

	t34 = ((x1901+x1902)>>(x1903*x1904));

	if (t34 != 14443890968LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x2053 = 335U;
	int16_t x2054 = -1;
	static uint16_t x2055 = 0U;
	volatile int32_t t35 = -20;

	t35 = ((x2053+x2054)>>(x2055*x2056));

	if (t35 != 334) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x2121 = -1;
	uint8_t x2122 = UINT8_MAX;
	volatile int32_t x2123 = 15;
	static int8_t x2124 = 1;

	t36 = ((x2121+x2122)>>(x2123*x2124));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x2125 = 2993051;
	static volatile int8_t x2126 = -1;
	int8_t x2127 = 0;
	int16_t x2128 = -108;
	volatile int32_t t37 = -5911;

	t37 = ((x2125+x2126)>>(x2127*x2128));

	if (t37 != 2993050) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x2233 = 7631U;
	int8_t x2234 = 0;
	static int16_t x2235 = -5;
	int64_t x2236 = -1LL;
	static int32_t t38 = 8;

	t38 = ((x2233+x2234)>>(x2235*x2236));

	if (t38 != 238) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x2293 = 3U;
	int16_t x2294 = INT16_MAX;
	int16_t x2295 = -1;
	int32_t x2296 = -1;
	static volatile int32_t t39 = 5700822;

	t39 = ((x2293+x2294)>>(x2295*x2296));

	if (t39 != 16385) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x2305 = INT16_MAX;
	static uint8_t x2307 = 0U;
	volatile int16_t x2308 = -1;
	static int32_t t40 = -57;

	t40 = ((x2305+x2306)>>(x2307*x2308));

	if (t40 != 48756) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x2349 = INT8_MIN;
	uint64_t x2350 = UINT64_MAX;
	int32_t x2351 = -1;
	static int8_t x2352 = -1;
	volatile uint64_t t41 = 7988648041211327LLU;

	t41 = ((x2349+x2350)>>(x2351*x2352));

	if (t41 != 9223372036854775743LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int32_t x2357 = 259961;
	volatile int64_t x2358 = -247LL;
	int8_t x2359 = -6;
	static int8_t x2360 = -2;
	volatile int64_t t42 = 1699108LL;

	t42 = ((x2357+x2358)>>(x2359*x2360));

	if (t42 != 63LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x2361 = UINT8_MAX;
	volatile int8_t x2363 = -1;
	int32_t x2364 = -1;
	uint32_t t43 = 3358389U;

	t43 = ((x2361+x2362)>>(x2363*x2364));

	if (t43 != 336549U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x2365 = INT16_MIN;
	uint32_t x2366 = 10896228U;
	uint64_t x2368 = UINT64_MAX;
	uint32_t t44 = 1296908394U;

	t44 = ((x2365+x2366)>>(x2367*x2368));

	if (t44 != 5431730U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x2481 = INT32_MIN;
	uint32_t x2482 = 331711118U;
	uint16_t x2483 = 0U;
	static uint8_t x2484 = 69U;
	volatile uint32_t t45 = 14U;

	t45 = ((x2481+x2482)>>(x2483*x2484));

	if (t45 != 2479194766U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x2485 = UINT16_MAX;
	int16_t x2486 = 1;
	int8_t x2487 = 0;
	volatile int64_t x2488 = INT64_MAX;
	volatile int32_t t46 = 72;

	t46 = ((x2485+x2486)>>(x2487*x2488));

	if (t46 != 65536) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x2570 = 8;
	uint16_t x2571 = 1350U;
	uint16_t x2572 = 0U;
	volatile uint32_t t47 = 177U;

	t47 = ((x2569+x2570)>>(x2571*x2572));

	if (t47 != 142U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x2649 = INT8_MIN;
	static uint64_t x2650 = 1032LLU;
	int32_t x2651 = -1;
	uint64_t t48 = 415140339660606675LLU;

	t48 = ((x2649+x2650)>>(x2651*x2652));

	if (t48 != 452LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x2678 = -1LL;
	uint8_t x2679 = 5U;
	volatile int8_t x2680 = 6;
	static volatile uint64_t t49 = 66348378825336709LLU;

	t49 = ((x2677+x2678)>>(x2679*x2680));

	if (t49 != 218404LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x2742 = INT16_MAX;
	int16_t x2743 = 0;
	int16_t x2744 = INT16_MAX;
	volatile int32_t t50 = -6166051;

	t50 = ((x2741+x2742)>>(x2743*x2744));

	if (t50 != 32769) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x2749 = 68253246939LL;
	static int8_t x2752 = -15;
	volatile int64_t t51 = 27953LL;

	t51 = ((x2749+x2750)>>(x2751*x2752));

	if (t51 != 2082925LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x2917 = INT64_MAX;
	int32_t x2918 = INT32_MIN;
	static int32_t x2919 = INT32_MIN;
	uint32_t x2920 = 20U;
	volatile int64_t t52 = 712829572LL;

	t52 = ((x2917+x2918)>>(x2919*x2920));

	if (t52 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x3009 = INT8_MAX;
	int8_t x3011 = -24;
	static int64_t x3012 = -1LL;
	volatile uint64_t t53 = 259007409265369LLU;

	t53 = ((x3009+x3010)>>(x3011*x3012));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x3038 = -1;
	int64_t x3039 = INT64_MIN;
	static uint16_t x3040 = 0U;
	int32_t t54 = -1421096;

	t54 = ((x3037+x3038)>>(x3039*x3040));

	if (t54 != 126) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x3177 = 108995;
	static int16_t x3178 = -107;
	volatile uint64_t x3179 = 6592785440607976LLU;
	static int64_t x3180 = INT64_MIN;

	t55 = ((x3177+x3178)>>(x3179*x3180));

	if (t55 != 108888) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x3214 = INT16_MIN;
	int16_t x3215 = 0;
	static int64_t x3216 = INT64_MIN;

	t56 = ((x3213+x3214)>>(x3215*x3216));

	if (t56 != 1553966LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x3217 = -50;
	static volatile uint32_t x3218 = 20U;
	static uint8_t x3219 = 1U;
	static int8_t x3220 = 1;
	uint32_t t57 = 3U;

	t57 = ((x3217+x3218)>>(x3219*x3220));

	if (t57 != 2147483633U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x3305 = 55;
	uint64_t x3306 = 2004008498LLU;
	int8_t x3307 = 0;

	t58 = ((x3305+x3306)>>(x3307*x3308));

	if (t58 != 2004008553LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x3405 = 1341LLU;
	int32_t x3406 = INT32_MIN;
	int64_t x3407 = INT64_MIN;
	uint64_t x3408 = 29696303442LLU;
	volatile uint64_t t59 = 215170818LLU;

	t59 = ((x3405+x3406)>>(x3407*x3408));

	if (t59 != 18446744071562069309LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x3461 = UINT8_MAX;
	int8_t x3462 = INT8_MIN;
	int8_t x3463 = 4;
	uint16_t x3464 = 1U;

	t60 = ((x3461+x3462)>>(x3463*x3464));

	if (t60 != 7) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x3637 = 29U;
	static uint32_t x3638 = 513793581U;
	volatile int8_t x3640 = 0;
	static uint32_t t61 = 12396U;

	t61 = ((x3637+x3638)>>(x3639*x3640));

	if (t61 != 513793610U) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x3713 = 7U;
	uint64_t x3714 = 11616467170422941LLU;
	static uint64_t x3715 = 1018LLU;
	int64_t x3716 = INT64_MIN;

	t62 = ((x3713+x3714)>>(x3715*x3716));

	if (t62 != 11616467170422948LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x3733 = INT64_MAX;
	int16_t x3734 = -46;
	int64_t x3735 = -1LL;
	volatile int32_t x3736 = 0;

	t63 = ((x3733+x3734)>>(x3735*x3736));

	if (t63 != 9223372036854775761LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x3805 = 89522019U;
	uint32_t x3807 = UINT32_MAX;
	volatile int32_t x3808 = -1;
	uint32_t t64 = 94776962U;

	t64 = ((x3805+x3806)>>(x3807*x3808));

	if (t64 != 44761009U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x3819 = INT16_MIN;
	static uint8_t x3820 = 0U;
	int32_t t65 = -14583;

	t65 = ((x3817+x3818)>>(x3819*x3820));

	if (t65 != 666) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x3829 = INT64_MAX;
	int8_t x3830 = -29;
	int32_t x3831 = INT32_MIN;
	uint16_t x3832 = 0U;

	t66 = ((x3829+x3830)>>(x3831*x3832));

	if (t66 != 9223372036854775778LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x3889 = UINT8_MAX;
	uint16_t x3890 = 0U;
	int16_t x3892 = -26;
	static int32_t t67 = -4383603;

	t67 = ((x3889+x3890)>>(x3891*x3892));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x3941 = 1U;
	volatile uint8_t x3943 = 6U;
	int8_t x3944 = 3;
	static int32_t t68 = -295689;

	t68 = ((x3941+x3942)>>(x3943*x3944));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x3957 = 35U;
	int64_t x3959 = -1LL;
	int16_t x3960 = -1;
	uint64_t t69 = 2877980118426163LLU;

	t69 = ((x3957+x3958)>>(x3959*x3960));

	if (t69 != 197768357247933228LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x4026 = 57;
	uint64_t x4027 = UINT64_MAX;
	volatile uint64_t t70 = 264314750212927LLU;

	t70 = ((x4025+x4026)>>(x4027*x4028));

	if (t70 != 13005LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x4113 = INT64_MAX;
	int32_t x4114 = -1;
	int8_t x4115 = -3;
	static int16_t x4116 = -8;
	volatile int64_t t71 = 30650239LL;

	t71 = ((x4113+x4114)>>(x4115*x4116));

	if (t71 != 549755813887LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x4189 = -14;
	volatile uint64_t x4190 = UINT64_MAX;
	static int8_t x4192 = -3;
	uint64_t t72 = 8LLU;

	t72 = ((x4189+x4190)>>(x4191*x4192));

	if (t72 != 2305843009213693950LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x4249 = 0;
	volatile uint8_t x4250 = 10U;
	uint32_t x4251 = 0U;
	volatile int8_t x4252 = INT8_MAX;
	int32_t t73 = 905992;

	t73 = ((x4249+x4250)>>(x4251*x4252));

	if (t73 != 10) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x4258 = -1;
	uint8_t x4260 = 3U;
	int32_t t74 = -374805;

	t74 = ((x4257+x4258)>>(x4259*x4260));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x4309 = -2;
	uint64_t x4310 = 210LLU;
	volatile uint16_t x4311 = 842U;

	t75 = ((x4309+x4310)>>(x4311*x4312));

	if (t75 != 208LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x4361 = 0U;
	uint16_t x4362 = UINT16_MAX;
	int32_t x4363 = 0;
	volatile uint16_t x4364 = 1U;
	volatile int32_t t76 = 532;

	t76 = ((x4361+x4362)>>(x4363*x4364));

	if (t76 != 65535) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x4433 = 3U;
	uint32_t x4434 = 5379580U;
	int64_t x4436 = -1LL;
	static uint32_t t77 = 13U;

	t77 = ((x4433+x4434)>>(x4435*x4436));

	if (t77 != 2689791U) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x4477 = 34LLU;
	uint64_t x4478 = UINT64_MAX;
	int16_t x4479 = INT16_MIN;
	static uint16_t x4480 = 0U;
	static volatile uint64_t t78 = 49580428437LLU;

	t78 = ((x4477+x4478)>>(x4479*x4480));

	if (t78 != 33LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x4525 = INT64_MAX;
	static int16_t x4526 = INT16_MIN;
	int8_t x4527 = -1;
	int64_t t79 = -1012412682116068876LL;

	t79 = ((x4525+x4526)>>(x4527*x4528));

	if (t79 != 4611686018427371519LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x4545 = -20;
	static uint8_t x4546 = UINT8_MAX;
	volatile uint64_t x4547 = 0LLU;
	volatile uint64_t x4548 = 5151348LLU;
	volatile int32_t t80 = -19248934;

	t80 = ((x4545+x4546)>>(x4547*x4548));

	if (t80 != 235) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x4618 = 0;
	uint8_t x4619 = 0U;
	static volatile int8_t x4620 = INT8_MIN;

	t81 = ((x4617+x4618)>>(x4619*x4620));

	if (t81 != 1025479U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x4657 = -1LL;
	int8_t x4658 = INT8_MAX;
	int32_t x4659 = INT32_MAX;
	volatile int64_t t82 = -37174938LL;

	t82 = ((x4657+x4658)>>(x4659*x4660));

	if (t82 != 126LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x4697 = 54;
	static volatile uint8_t x4698 = 4U;
	uint8_t x4699 = 0U;

	t83 = ((x4697+x4698)>>(x4699*x4700));

	if (t83 != 58) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x4817 = 8570149975236416539LLU;
	int16_t x4818 = -3516;
	volatile int32_t x4820 = -1;
	uint64_t t84 = 6LLU;

	t84 = ((x4817+x4818)>>(x4819*x4820));

	if (t84 != 4285074987618206511LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x4897 = 108816653735560LLU;
	uint32_t x4899 = 1322852U;
	uint64_t t85 = 473563124143LLU;

	t85 = ((x4897+x4898)>>(x4899*x4900));

	if (t85 != 108816653735585LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x4970 = UINT16_MAX;
	uint8_t x4971 = 0U;
	volatile int64_t x4972 = 22LL;
	int32_t t86 = 238;

	t86 = ((x4969+x4970)>>(x4971*x4972));

	if (t86 != 65532) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x5021 = 43;
	static uint16_t x5022 = 2872U;
	static int64_t x5023 = -1LL;
	int32_t t87 = 351091;

	t87 = ((x5021+x5022)>>(x5023*x5024));

	if (t87 != 91) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x5054 = -119;
	static uint8_t x5055 = 0U;
	int16_t x5056 = -1;
	volatile int32_t t88 = 479;

	t88 = ((x5053+x5054)>>(x5055*x5056));

	if (t88 != 369) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x5089 = INT8_MIN;
	volatile int16_t x5091 = INT16_MIN;
	static uint8_t x5092 = 0U;
	uint32_t t89 = 326518U;

	t89 = ((x5089+x5090)>>(x5091*x5092));

	if (t89 != 4294967191U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x5213 = 2956647332363859LL;
	int32_t x5215 = -3;
	volatile int64_t t90 = -59429773LL;

	t90 = ((x5213+x5214)>>(x5215*x5216));

	if (t90 != 369580916545481LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x5241 = 290017521U;
	volatile int32_t x5242 = INT32_MAX;
	volatile int32_t x5243 = 0;
	int16_t x5244 = -1628;
	volatile uint32_t t91 = 48U;

	t91 = ((x5241+x5242)>>(x5243*x5244));

	if (t91 != 2437501168U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x5438 = INT64_MAX;
	uint32_t x5439 = 334009751U;
	uint8_t x5440 = 0U;
	static int64_t t92 = 29020831LL;

	t92 = ((x5437+x5438)>>(x5439*x5440));

	if (t92 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x5477 = INT8_MAX;
	uint8_t x5478 = UINT8_MAX;
	uint64_t x5479 = UINT64_MAX;
	uint64_t x5480 = UINT64_MAX;
	static int32_t t93 = 6175790;

	t93 = ((x5477+x5478)>>(x5479*x5480));

	if (t93 != 191) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x5481 = 1;
	int32_t x5483 = -3;
	int16_t x5484 = -1;

	t94 = ((x5481+x5482)>>(x5483*x5484));

	if (t94 != 26) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x5505 = INT16_MAX;
	static int8_t x5506 = 0;
	uint64_t x5507 = UINT64_MAX;
	int64_t x5508 = -1LL;

	t95 = ((x5505+x5506)>>(x5507*x5508));

	if (t95 != 16383) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x5577 = INT8_MAX;
	int32_t x5578 = 14;
	int16_t x5579 = -1;
	int8_t x5580 = 0;
	volatile int32_t t96 = -22;

	t96 = ((x5577+x5578)>>(x5579*x5580));

	if (t96 != 141) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x5585 = UINT8_MAX;
	volatile int8_t x5586 = INT8_MAX;
	static int16_t x5587 = 0;
	uint32_t x5588 = 205U;
	volatile int32_t t97 = 5297665;

	t97 = ((x5585+x5586)>>(x5587*x5588));

	if (t97 != 382) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x5589 = 1U;
	int32_t x5590 = INT32_MAX;
	int64_t x5591 = INT64_MIN;
	uint64_t x5592 = 675135426658LLU;
	uint32_t t98 = 37412U;

	t98 = ((x5589+x5590)>>(x5591*x5592));

	if (t98 != 2147483648U) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x5593 = 11U;
	int64_t x5595 = -1LL;
	int16_t x5596 = 0;
	int32_t t99 = -1228;

	t99 = ((x5593+x5594)>>(x5595*x5596));

	if (t99 != 10) { NG(); } else { ; }
	
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

