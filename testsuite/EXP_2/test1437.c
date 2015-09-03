#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x239 = UINT16_MAX;
uint8_t x240 = 3U;
int32_t x356 = 4;
uint16_t x429 = UINT16_MAX;
int64_t x473 = 140465916235LL;
uint8_t x476 = 7U;
volatile int64_t t6 = 1801818245LL;
uint32_t x566 = UINT32_MAX;
volatile int64_t t7 = 3844041644392729LL;
int64_t x581 = INT64_MAX;
volatile uint32_t x582 = UINT32_MAX;
volatile int32_t x583 = INT32_MIN;
static uint32_t x584 = 3U;
int64_t x641 = 1035595615159673LL;
volatile uint8_t x644 = 6U;
static int64_t t9 = -1LL;
int64_t x729 = INT64_MAX;
int32_t x730 = INT32_MIN;
volatile int64_t t11 = -157988283LL;
volatile int32_t t12 = 1;
uint8_t x1248 = 53U;
int64_t x1397 = INT64_MAX;
volatile int32_t x1399 = INT32_MIN;
static int64_t t15 = 76185147205117LL;
int8_t x1404 = 0;
static uint32_t x1454 = 108196481U;
volatile int16_t x1456 = 0;
static volatile int32_t t17 = 693;
int8_t x1544 = 7;
int8_t x1604 = 6;
int8_t x1704 = 27;
int8_t x1719 = INT8_MIN;
static volatile uint32_t t24 = 3U;
uint32_t x1732 = 1U;
int32_t t25 = 3992;
uint32_t x1743 = 511046673U;
uint16_t x1822 = UINT16_MAX;
static int8_t x1850 = INT8_MAX;
uint64_t x1899 = 3LLU;
uint16_t x1900 = 0U;
int32_t x1911 = INT32_MIN;
static int32_t t30 = 159695;
volatile uint16_t x1939 = UINT16_MAX;
uint32_t x1940 = 1U;
uint8_t x1986 = UINT8_MAX;
uint16_t x1988 = 1U;
uint8_t x2012 = 3U;
uint64_t t33 = 1085823369016LLU;
int64_t x2056 = 4LL;
int64_t x2199 = 587735581869239LL;
int16_t x2379 = 0;
uint32_t t39 = 3U;
uint8_t x2452 = 0U;
static volatile int32_t x2486 = INT32_MIN;
uint32_t x2517 = UINT32_MAX;
int16_t x2563 = -1;
volatile int32_t x2763 = 240681;
volatile int16_t x3100 = 8;
static int64_t x3134 = -1LL;
uint32_t t49 = 56399U;
static uint64_t x3150 = 179430895154787LLU;
int64_t x3203 = -1LL;
volatile uint8_t x3204 = 2U;
int64_t t53 = -7280386LL;
uint8_t x3380 = 10U;
volatile int32_t t55 = 4030;
uint8_t x3442 = 0U;
int16_t x3638 = -1;
static int16_t x3640 = 0;
static int16_t x3674 = -1;
static int8_t x3796 = 12;
volatile int8_t x3812 = 3;
int16_t x3913 = INT16_MAX;
int64_t x3955 = -1LL;
volatile int32_t x3968 = 7;
uint16_t x4104 = 0U;
volatile int64_t t71 = 64129888561152763LL;
static int64_t x4170 = INT64_MIN;
static volatile int32_t t73 = -4597;
uint16_t x4208 = 5U;
static volatile int32_t x4229 = INT32_MAX;
volatile int32_t t75 = -1;
int64_t x4259 = -2566092142LL;
int32_t t76 = 925642;
static uint8_t x4416 = 5U;
int64_t x4526 = INT64_MAX;
int8_t x4902 = INT8_MAX;
uint8_t x4904 = 2U;
volatile int32_t t81 = 1;
volatile int64_t x4939 = INT64_MIN;
uint8_t x5000 = 25U;
volatile int64_t x5033 = INT64_MAX;
static int8_t x5036 = 21;
int64_t x5046 = INT64_MIN;
int8_t x5092 = 28;
uint64_t x5115 = UINT64_MAX;
uint8_t x5116 = 2U;
uint8_t x5377 = 0U;
uint32_t x5896 = 21U;
uint16_t x5904 = 11U;
uint32_t x5918 = 801809U;
volatile int64_t t96 = -181302131829LL;
int32_t x5998 = INT32_MAX;
int8_t x6047 = INT8_MIN;


void f0(void) {
	static uint16_t x189 = 65U;
	uint64_t x190 = UINT64_MAX;
	int8_t x191 = 0;
	int8_t x192 = 15;
	int32_t t0 = 114657;

	t0 = ((x189>>(x190<x191))>>x192);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x237 = 14U;
	uint16_t x238 = 1422U;
	static int32_t t1 = -17545237;

	t1 = ((x237>>(x238<x239))>>x240);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x257 = 7250581LLU;
	volatile int32_t x258 = -1;
	int64_t x259 = INT64_MIN;
	uint8_t x260 = 10U;
	uint64_t t2 = 32604904017LLU;

	t2 = ((x257>>(x258<x259))>>x260);

	if (t2 != 7080LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x301 = 0U;
	uint16_t x302 = UINT16_MAX;
	volatile int32_t x303 = 59685768;
	int8_t x304 = 1;
	int32_t t3 = -3114978;

	t3 = ((x301>>(x302<x303))>>x304);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x353 = INT32_MAX;
	int8_t x354 = -6;
	uint16_t x355 = UINT16_MAX;
	volatile int32_t t4 = 11;

	t4 = ((x353>>(x354<x355))>>x356);

	if (t4 != 67108863) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x430 = INT32_MIN;
	volatile uint32_t x431 = UINT32_MAX;
	static int8_t x432 = 3;
	volatile int32_t t5 = -2744770;

	t5 = ((x429>>(x430<x431))>>x432);

	if (t5 != 4095) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x474 = 340;
	uint16_t x475 = UINT16_MAX;

	t6 = ((x473>>(x474<x475))>>x476);

	if (t6 != 548694985LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x565 = INT64_MAX;
	static uint16_t x567 = UINT16_MAX;
	static volatile uint8_t x568 = 47U;

	t7 = ((x565>>(x566<x567))>>x568);

	if (t7 != 65535LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t t8 = 1LL;

	t8 = ((x581>>(x582<x583))>>x584);

	if (t8 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x642 = 3385453U;
	static int16_t x643 = INT16_MAX;

	t9 = ((x641>>(x642<x643))>>x644);

	if (t9 != 16181181486869LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x689 = INT8_MAX;
	uint64_t x690 = 1858273LLU;
	int16_t x691 = INT16_MIN;
	volatile uint8_t x692 = 5U;
	static int32_t t10 = -15439299;

	t10 = ((x689>>(x690<x691))>>x692);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x731 = 954U;
	volatile uint8_t x732 = 0U;

	t11 = ((x729>>(x730<x731))>>x732);

	if (t11 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x737 = INT32_MAX;
	uint32_t x738 = 7U;
	volatile uint64_t x739 = 99776373041339LLU;
	int8_t x740 = 0;

	t12 = ((x737>>(x738<x739))>>x740);

	if (t12 != 1073741823) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x1061 = UINT32_MAX;
	volatile uint32_t x1062 = 11012U;
	int32_t x1063 = -1;
	int64_t x1064 = 1LL;
	static volatile uint32_t t13 = 176670U;

	t13 = ((x1061>>(x1062<x1063))>>x1064);

	if (t13 != 1073741823U) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x1245 = 44562783712667343LLU;
	int16_t x1246 = INT16_MIN;
	static volatile int8_t x1247 = INT8_MAX;
	volatile uint64_t t14 = 124466LLU;

	t14 = ((x1245>>(x1246<x1247))>>x1248);

	if (t14 != 2LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x1398 = -15616;
	int8_t x1400 = 27;

	t15 = ((x1397>>(x1398<x1399))>>x1400);

	if (t15 != 68719476735LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x1401 = INT16_MAX;
	int32_t x1402 = -1;
	int64_t x1403 = -3208373LL;
	int32_t t16 = 93596;

	t16 = ((x1401>>(x1402<x1403))>>x1404);

	if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x1453 = INT16_MAX;
	int32_t x1455 = INT32_MIN;

	t17 = ((x1453>>(x1454<x1455))>>x1456);

	if (t17 != 16383) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x1541 = 50U;
	uint32_t x1542 = 11U;
	static uint64_t x1543 = UINT64_MAX;
	volatile uint32_t t18 = 26027571U;

	t18 = ((x1541>>(x1542<x1543))>>x1544);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x1553 = INT8_MAX;
	volatile uint64_t x1554 = 1373404322496391193LLU;
	volatile uint8_t x1555 = UINT8_MAX;
	static int16_t x1556 = 25;
	static volatile int32_t t19 = 5623;

	t19 = ((x1553>>(x1554<x1555))>>x1556);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x1593 = 318196950187LLU;
	static int8_t x1594 = 0;
	int32_t x1595 = INT32_MAX;
	uint16_t x1596 = 8U;
	uint64_t t20 = 52745944259LLU;

	t20 = ((x1593>>(x1594<x1595))>>x1596);

	if (t20 != 621478418LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1601 = 5727;
	int16_t x1602 = 43;
	int64_t x1603 = -360337744042326LL;
	int32_t t21 = -49119065;

	t21 = ((x1601>>(x1602<x1603))>>x1604);

	if (t21 != 89) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x1637 = 3;
	int32_t x1638 = INT32_MAX;
	volatile int32_t x1639 = INT32_MAX;
	volatile uint16_t x1640 = 0U;
	static int32_t t22 = -48571122;

	t22 = ((x1637>>(x1638<x1639))>>x1640);

	if (t22 != 3) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x1701 = INT64_MAX;
	int8_t x1702 = INT8_MIN;
	uint64_t x1703 = 51397LLU;
	volatile int64_t t23 = -15398852226LL;

	t23 = ((x1701>>(x1702<x1703))>>x1704);

	if (t23 != 68719476735LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x1717 = UINT32_MAX;
	static int16_t x1718 = 1;
	int8_t x1720 = 3;

	t24 = ((x1717>>(x1718<x1719))>>x1720);

	if (t24 != 536870911U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1729 = INT32_MAX;
	uint8_t x1730 = 3U;
	uint64_t x1731 = 1313948081824LLU;

	t25 = ((x1729>>(x1730<x1731))>>x1732);

	if (t25 != 536870911) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x1741 = UINT64_MAX;
	uint8_t x1742 = 9U;
	static uint16_t x1744 = 0U;
	uint64_t t26 = 1071628027824499LLU;

	t26 = ((x1741>>(x1742<x1743))>>x1744);

	if (t26 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1821 = UINT32_MAX;
	int32_t x1823 = INT32_MIN;
	uint32_t x1824 = 0U;
	uint32_t t27 = UINT32_MAX;

	t27 = ((x1821>>(x1822<x1823))>>x1824);

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x1849 = 21770;
	uint64_t x1851 = 150039062271482LLU;
	static uint32_t x1852 = 7U;
	int32_t t28 = -2089512;

	t28 = ((x1849>>(x1850<x1851))>>x1852);

	if (t28 != 85) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x1897 = 603784098745894LLU;
	uint64_t x1898 = 7391157LLU;
	uint64_t t29 = 503LLU;

	t29 = ((x1897>>(x1898<x1899))>>x1900);

	if (t29 != 603784098745894LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1909 = 2067001;
	uint16_t x1910 = 1U;
	static int32_t x1912 = 2;

	t30 = ((x1909>>(x1910<x1911))>>x1912);

	if (t30 != 516750) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x1937 = 3322U;
	int16_t x1938 = -40;
	int32_t t31 = 3;

	t31 = ((x1937>>(x1938<x1939))>>x1940);

	if (t31 != 830) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1985 = INT16_MAX;
	uint32_t x1987 = 7825U;
	volatile int32_t t32 = 12;

	t32 = ((x1985>>(x1986<x1987))>>x1988);

	if (t32 != 8191) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x2009 = 1605108195038394LLU;
	static int8_t x2010 = INT8_MIN;
	int64_t x2011 = INT64_MIN;

	t33 = ((x2009>>(x2010<x2011))>>x2012);

	if (t33 != 200638524379799LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x2053 = 31U;
	static int32_t x2054 = 82256745;
	volatile int8_t x2055 = INT8_MIN;
	int32_t t34 = -1242739;

	t34 = ((x2053>>(x2054<x2055))>>x2056);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x2197 = 1593LLU;
	int16_t x2198 = INT16_MAX;
	volatile uint8_t x2200 = 61U;
	uint64_t t35 = 15264347042LLU;

	t35 = ((x2197>>(x2198<x2199))>>x2200);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x2257 = 59;
	int64_t x2258 = 446506936836921027LL;
	static int32_t x2259 = INT32_MAX;
	uint16_t x2260 = 12U;
	static volatile int32_t t36 = 700742;

	t36 = ((x2257>>(x2258<x2259))>>x2260);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x2281 = 121U;
	int16_t x2282 = INT16_MIN;
	int32_t x2283 = INT32_MIN;
	uint8_t x2284 = 0U;
	uint32_t t37 = 3839U;

	t37 = ((x2281>>(x2282<x2283))>>x2284);

	if (t37 != 121U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x2373 = 1574U;
	uint64_t x2374 = UINT64_MAX;
	uint32_t x2375 = 2869594U;
	int16_t x2376 = 0;
	volatile int32_t t38 = 22;

	t38 = ((x2373>>(x2374<x2375))>>x2376);

	if (t38 != 1574) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x2377 = 5730U;
	uint32_t x2378 = UINT32_MAX;
	volatile int64_t x2380 = 2LL;

	t39 = ((x2377>>(x2378<x2379))>>x2380);

	if (t39 != 1432U) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x2449 = 211475U;
	volatile int32_t x2450 = INT32_MIN;
	uint64_t x2451 = UINT64_MAX;
	volatile uint32_t t40 = 247091U;

	t40 = ((x2449>>(x2450<x2451))>>x2452);

	if (t40 != 105737U) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x2485 = 9U;
	int64_t x2487 = 117LL;
	volatile uint8_t x2488 = 12U;
	static volatile int32_t t41 = 8285557;

	t41 = ((x2485>>(x2486<x2487))>>x2488);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x2518 = INT16_MIN;
	volatile int8_t x2519 = -1;
	volatile uint8_t x2520 = 0U;
	static uint32_t t42 = 2460U;

	t42 = ((x2517>>(x2518<x2519))>>x2520);

	if (t42 != 2147483647U) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x2561 = 2;
	int64_t x2562 = -1LL;
	uint16_t x2564 = 0U;
	int32_t t43 = 3925986;

	t43 = ((x2561>>(x2562<x2563))>>x2564);

	if (t43 != 2) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x2761 = 1;
	int64_t x2762 = INT64_MIN;
	uint8_t x2764 = 23U;
	int32_t t44 = 1;

	t44 = ((x2761>>(x2762<x2763))>>x2764);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x2773 = INT32_MAX;
	int32_t x2774 = 846;
	static int64_t x2775 = -1LL;
	uint8_t x2776 = 7U;
	int32_t t45 = 259811079;

	t45 = ((x2773>>(x2774<x2775))>>x2776);

	if (t45 != 16777215) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x3005 = 10105635432234LL;
	int8_t x3006 = -1;
	static int8_t x3007 = INT8_MAX;
	volatile uint8_t x3008 = 9U;
	static int64_t t46 = 447LL;

	t46 = ((x3005>>(x3006<x3007))>>x3008);

	if (t46 != 9868784601LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x3097 = UINT16_MAX;
	int64_t x3098 = INT64_MAX;
	int32_t x3099 = -1;
	int32_t t47 = 869;

	t47 = ((x3097>>(x3098<x3099))>>x3100);

	if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x3105 = 13729612175677LL;
	static int32_t x3106 = -1;
	int32_t x3107 = -886414447;
	static uint8_t x3108 = 3U;
	volatile int64_t t48 = 7434177669LL;

	t48 = ((x3105>>(x3106<x3107))>>x3108);

	if (t48 != 1716201521959LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x3133 = 216683U;
	int8_t x3135 = -1;
	uint8_t x3136 = 0U;

	t49 = ((x3133>>(x3134<x3135))>>x3136);

	if (t49 != 216683U) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x3149 = 14U;
	int64_t x3151 = 350937857703210LL;
	static uint32_t x3152 = 6U;
	static volatile int32_t t50 = 0;

	t50 = ((x3149>>(x3150<x3151))>>x3152);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x3201 = UINT32_MAX;
	int16_t x3202 = INT16_MIN;
	static uint32_t t51 = 155719728U;

	t51 = ((x3201>>(x3202<x3203))>>x3204);

	if (t51 != 536870911U) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x3245 = UINT32_MAX;
	uint64_t x3246 = UINT64_MAX;
	int64_t x3247 = -57387027571LL;
	static int64_t x3248 = 1LL;
	volatile uint32_t t52 = 303918U;

	t52 = ((x3245>>(x3246<x3247))>>x3248);

	if (t52 != 2147483647U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x3353 = INT64_MAX;
	volatile int64_t x3354 = -1LL;
	uint16_t x3355 = UINT16_MAX;
	static uint8_t x3356 = 34U;

	t53 = ((x3353>>(x3354<x3355))>>x3356);

	if (t53 != 268435455LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x3377 = UINT16_MAX;
	uint8_t x3378 = 3U;
	int32_t x3379 = INT32_MAX;
	int32_t t54 = 958;

	t54 = ((x3377>>(x3378<x3379))>>x3380);

	if (t54 != 31) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x3437 = INT32_MAX;
	uint32_t x3438 = 287U;
	uint32_t x3439 = UINT32_MAX;
	uint8_t x3440 = 5U;

	t55 = ((x3437>>(x3438<x3439))>>x3440);

	if (t55 != 33554431) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x3441 = 0U;
	static int32_t x3443 = -1266;
	volatile int32_t x3444 = 11;
	int32_t t56 = -56;

	t56 = ((x3441>>(x3442<x3443))>>x3444);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x3637 = 348768197U;
	volatile int16_t x3639 = -1;
	volatile uint32_t t57 = 42U;

	t57 = ((x3637>>(x3638<x3639))>>x3640);

	if (t57 != 348768197U) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x3673 = 811249752672858LLU;
	int8_t x3675 = INT8_MAX;
	uint32_t x3676 = 0U;
	static volatile uint64_t t58 = 195841812444107LLU;

	t58 = ((x3673>>(x3674<x3675))>>x3676);

	if (t58 != 405624876336429LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x3705 = 2;
	int8_t x3706 = 1;
	static int8_t x3707 = 41;
	int16_t x3708 = 0;
	static volatile int32_t t59 = -51939379;

	t59 = ((x3705>>(x3706<x3707))>>x3708);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x3785 = 3LLU;
	int64_t x3786 = INT64_MAX;
	int8_t x3787 = 6;
	volatile uint16_t x3788 = 1U;
	static uint64_t t60 = 1558308745036256403LLU;

	t60 = ((x3785>>(x3786<x3787))>>x3788);

	if (t60 != 1LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x3793 = 1096U;
	uint8_t x3794 = 100U;
	static int16_t x3795 = -1;
	volatile uint32_t t61 = 12602926U;

	t61 = ((x3793>>(x3794<x3795))>>x3796);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x3809 = UINT32_MAX;
	static volatile int32_t x3810 = INT32_MIN;
	volatile uint64_t x3811 = 35417388125714LLU;
	uint32_t t62 = 62164U;

	t62 = ((x3809>>(x3810<x3811))>>x3812);

	if (t62 != 536870911U) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x3829 = UINT8_MAX;
	uint16_t x3830 = UINT16_MAX;
	static int8_t x3831 = INT8_MAX;
	int8_t x3832 = 1;
	static volatile int32_t t63 = 2993813;

	t63 = ((x3829>>(x3830<x3831))>>x3832);

	if (t63 != 127) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x3837 = INT8_MAX;
	int8_t x3838 = INT8_MIN;
	uint8_t x3839 = 5U;
	static int32_t x3840 = 26;
	int32_t t64 = 3;

	t64 = ((x3837>>(x3838<x3839))>>x3840);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x3861 = 3U;
	static uint32_t x3862 = UINT32_MAX;
	int16_t x3863 = 11;
	int32_t x3864 = 7;
	static volatile uint32_t t65 = 52002125U;

	t65 = ((x3861>>(x3862<x3863))>>x3864);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x3914 = 2U;
	static int32_t x3915 = INT32_MAX;
	int32_t x3916 = 2;
	volatile int32_t t66 = -1;

	t66 = ((x3913>>(x3914<x3915))>>x3916);

	if (t66 != 4095) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x3953 = 72;
	int16_t x3954 = INT16_MIN;
	volatile uint32_t x3956 = 0U;
	volatile int32_t t67 = -5362319;

	t67 = ((x3953>>(x3954<x3955))>>x3956);

	if (t67 != 36) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x3965 = 28;
	static volatile int32_t x3966 = INT32_MIN;
	int32_t x3967 = 12;
	volatile int32_t t68 = -5879192;

	t68 = ((x3965>>(x3966<x3967))>>x3968);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x3985 = 1181554984308993895LL;
	int32_t x3986 = INT32_MIN;
	int16_t x3987 = -254;
	uint8_t x3988 = 1U;
	volatile int64_t t69 = 25826LL;

	t69 = ((x3985>>(x3986<x3987))>>x3988);

	if (t69 != 295388746077248473LL) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int16_t x4053 = INT16_MAX;
	int64_t x4054 = INT64_MIN;
	int8_t x4055 = INT8_MIN;
	int32_t x4056 = 7;
	static volatile int32_t t70 = -4122;

	t70 = ((x4053>>(x4054<x4055))>>x4056);

	if (t70 != 127) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x4101 = 1LL;
	int32_t x4102 = INT32_MIN;
	int16_t x4103 = -5;

	t71 = ((x4101>>(x4102<x4103))>>x4104);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x4117 = UINT8_MAX;
	int16_t x4118 = INT16_MAX;
	uint16_t x4119 = UINT16_MAX;
	uint64_t x4120 = 24LLU;
	int32_t t72 = -226163222;

	t72 = ((x4117>>(x4118<x4119))>>x4120);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x4169 = 18884548;
	static int64_t x4171 = INT64_MIN;
	uint8_t x4172 = 0U;

	t73 = ((x4169>>(x4170<x4171))>>x4172);

	if (t73 != 18884548) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x4205 = 18551U;
	static uint16_t x4206 = 1U;
	int8_t x4207 = 14;
	uint32_t t74 = 652971914U;

	t74 = ((x4205>>(x4206<x4207))>>x4208);

	if (t74 != 289U) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x4230 = INT16_MIN;
	int16_t x4231 = -1;
	static volatile uint16_t x4232 = 7U;

	t75 = ((x4229>>(x4230<x4231))>>x4232);

	if (t75 != 8388607) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x4257 = UINT8_MAX;
	int32_t x4258 = -1;
	uint16_t x4260 = 1U;

	t76 = ((x4257>>(x4258<x4259))>>x4260);

	if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x4293 = 226792U;
	static uint32_t x4294 = 60469756U;
	static uint64_t x4295 = 30LLU;
	volatile uint16_t x4296 = 1U;
	uint32_t t77 = 45696986U;

	t77 = ((x4293>>(x4294<x4295))>>x4296);

	if (t77 != 113396U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x4357 = INT16_MAX;
	int32_t x4358 = INT32_MAX;
	uint16_t x4359 = 2570U;
	int16_t x4360 = 0;
	int32_t t78 = 1;

	t78 = ((x4357>>(x4358<x4359))>>x4360);

	if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x4413 = 65;
	int32_t x4414 = INT32_MIN;
	uint64_t x4415 = 2900227043038202426LLU;
	volatile int32_t t79 = 15485387;

	t79 = ((x4413>>(x4414<x4415))>>x4416);

	if (t79 != 2) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x4525 = 31LL;
	int8_t x4527 = 29;
	volatile int8_t x4528 = 3;
	volatile int64_t t80 = -216340357005LL;

	t80 = ((x4525>>(x4526<x4527))>>x4528);

	if (t80 != 3LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x4901 = 14U;
	uint16_t x4903 = 60U;

	t81 = ((x4901>>(x4902<x4903))>>x4904);

	if (t81 != 3) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x4937 = INT32_MAX;
	volatile uint8_t x4938 = 53U;
	uint32_t x4940 = 4U;
	volatile int32_t t82 = -1;

	t82 = ((x4937>>(x4938<x4939))>>x4940);

	if (t82 != 134217727) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x4997 = INT64_MAX;
	int32_t x4998 = -26;
	uint8_t x4999 = 46U;
	int64_t t83 = 4028398233LL;

	t83 = ((x4997>>(x4998<x4999))>>x5000);

	if (t83 != 137438953471LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x5034 = -88446;
	int32_t x5035 = INT32_MIN;
	int64_t t84 = -384118614663000352LL;

	t84 = ((x5033>>(x5034<x5035))>>x5036);

	if (t84 != 4398046511103LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x5045 = INT16_MAX;
	static int32_t x5047 = -48;
	static int32_t x5048 = 0;
	int32_t t85 = 3;

	t85 = ((x5045>>(x5046<x5047))>>x5048);

	if (t85 != 16383) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x5089 = 916133U;
	volatile int32_t x5090 = INT32_MIN;
	int32_t x5091 = INT32_MAX;
	volatile uint32_t t86 = 89167U;

	t86 = ((x5089>>(x5090<x5091))>>x5092);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x5113 = INT64_MAX;
	volatile uint64_t x5114 = UINT64_MAX;
	int64_t t87 = -65149829LL;

	t87 = ((x5113>>(x5114<x5115))>>x5116);

	if (t87 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x5125 = 7802489;
	int32_t x5126 = INT32_MIN;
	int8_t x5127 = 7;
	uint8_t x5128 = 2U;
	int32_t t88 = -194;

	t88 = ((x5125>>(x5126<x5127))>>x5128);

	if (t88 != 975311) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x5378 = INT8_MIN;
	static uint64_t x5379 = 27231939577662468LLU;
	volatile uint16_t x5380 = 20U;
	int32_t t89 = 173171124;

	t89 = ((x5377>>(x5378<x5379))>>x5380);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x5577 = 0U;
	uint8_t x5578 = 7U;
	int16_t x5579 = INT16_MIN;
	uint8_t x5580 = 28U;
	int32_t t90 = -1;

	t90 = ((x5577>>(x5578<x5579))>>x5580);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x5589 = INT16_MAX;
	int32_t x5590 = -1;
	int8_t x5591 = INT8_MIN;
	volatile int16_t x5592 = 19;
	volatile int32_t t91 = 5;

	t91 = ((x5589>>(x5590<x5591))>>x5592);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x5601 = 6U;
	int32_t x5602 = -1;
	int32_t x5603 = INT32_MIN;
	int8_t x5604 = 5;
	int32_t t92 = -777113;

	t92 = ((x5601>>(x5602<x5603))>>x5604);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x5729 = INT32_MAX;
	int64_t x5730 = 42684531896274445LL;
	static volatile int16_t x5731 = INT16_MAX;
	static uint16_t x5732 = 12U;
	int32_t t93 = -20205;

	t93 = ((x5729>>(x5730<x5731))>>x5732);

	if (t93 != 524287) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x5893 = 1U;
	int8_t x5894 = -3;
	int64_t x5895 = INT64_MAX;
	volatile uint32_t t94 = 462692196U;

	t94 = ((x5893>>(x5894<x5895))>>x5896);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x5901 = INT8_MAX;
	volatile uint16_t x5902 = UINT16_MAX;
	int64_t x5903 = -16582162LL;
	volatile int32_t t95 = -1;

	t95 = ((x5901>>(x5902<x5903))>>x5904);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x5917 = INT64_MAX;
	volatile uint16_t x5919 = 6279U;
	static uint16_t x5920 = 1U;

	t96 = ((x5917>>(x5918<x5919))>>x5920);

	if (t96 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x5997 = INT32_MAX;
	static int32_t x5999 = INT32_MIN;
	volatile int8_t x6000 = 2;
	int32_t t97 = 225999;

	t97 = ((x5997>>(x5998<x5999))>>x6000);

	if (t97 != 536870911) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x6045 = 43U;
	static uint64_t x6046 = 102707544132331LLU;
	volatile uint8_t x6048 = 6U;
	volatile int32_t t98 = -890515;

	t98 = ((x6045>>(x6046<x6047))>>x6048);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x6093 = 9U;
	int64_t x6094 = INT64_MIN;
	volatile int8_t x6095 = INT8_MIN;
	static uint16_t x6096 = 1U;
	int32_t t99 = 8;

	t99 = ((x6093>>(x6094<x6095))>>x6096);

	if (t99 != 2) { NG(); } else { ; }
	
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

