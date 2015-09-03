#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x71 = -2687;
volatile int16_t x74 = 13;
uint16_t x241 = 0U;
static int32_t x283 = INT32_MIN;
int32_t x284 = -1;
uint8_t x336 = UINT8_MAX;
volatile uint8_t x502 = 1U;
int32_t t6 = 846527186;
static uint8_t x515 = 5U;
volatile int32_t t9 = -9240150;
uint32_t x647 = 2U;
int32_t t11 = -1469405;
volatile int32_t t12 = -239809005;
int32_t t14 = -347;
static volatile int32_t t16 = -7;
int32_t x1072 = INT32_MIN;
volatile int64_t x1224 = -1LL;
static int8_t x1238 = 0;
int64_t x1311 = -1LL;
uint64_t x1467 = UINT64_MAX;
volatile uint64_t x1481 = 4LLU;
int8_t x1482 = 3;
static uint64_t x1483 = 218715174LLU;
static uint8_t x1522 = 31U;
static uint8_t x1614 = 3U;
uint64_t x1675 = UINT64_MAX;
int64_t x1676 = INT64_MIN;
int16_t x1791 = INT16_MIN;
int8_t x1949 = 0;
int8_t x1950 = 0;
int8_t x1952 = INT8_MAX;
static uint16_t x1986 = 1U;
int32_t x1988 = INT32_MIN;
static int8_t x2031 = INT8_MAX;
int8_t x2054 = 6;
uint16_t x2055 = UINT16_MAX;
int64_t x2157 = INT64_MAX;
volatile uint8_t x2158 = 15U;
int64_t x2190 = 13LL;
uint16_t x2192 = 3U;
static volatile uint64_t t42 = 514226848LLU;
static uint64_t x2202 = 14LLU;
volatile uint8_t x2426 = 31U;
int64_t x2508 = -1LL;
int32_t t46 = 123311023;
int32_t x2529 = 27373;
uint32_t x2530 = 5U;
int16_t x2559 = -1;
int8_t x2560 = -1;
static int64_t x2601 = INT64_MAX;
uint32_t x2603 = UINT32_MAX;
int64_t x2626 = 25LL;
volatile int16_t x2806 = 3;
int32_t x2807 = -1;
uint8_t x2850 = 2U;
int16_t x2852 = INT16_MAX;
volatile int32_t t55 = 55928;
int8_t x2950 = 0;
volatile uint64_t t56 = 27263419874605123LLU;
static int8_t x3065 = 1;
static int16_t x3097 = 7;
static int8_t x3100 = INT8_MAX;
int32_t t61 = 193809360;
static int64_t x3133 = INT64_MAX;
int32_t x3429 = 30;
uint64_t x3457 = 573564619941022LLU;
int8_t x3458 = 13;
int8_t x3459 = INT8_MIN;
int32_t x3460 = -391;
volatile uint64_t t65 = 6388856LLU;
int32_t t66 = 21083241;
int8_t x3549 = INT8_MAX;
uint8_t x3633 = 3U;
volatile int64_t x3708 = INT64_MIN;
volatile uint64_t x3782 = 1LLU;
int32_t x3783 = -411426;
uint16_t x3816 = 2U;
volatile uint16_t x3861 = 4095U;
static volatile int16_t x4009 = INT16_MAX;
uint32_t x4010 = 0U;
int64_t x4129 = 17919LL;
uint16_t x4131 = 0U;
uint16_t x4162 = 6U;
int32_t x4163 = -1;
static uint8_t x4218 = 17U;
uint64_t t81 = 526435289928281LLU;
uint8_t x4250 = 3U;
volatile int16_t x4288 = INT16_MIN;
volatile int16_t x4323 = 1256;
uint64_t x4333 = 249LLU;
uint64_t x4351 = 522008973LLU;
int16_t x4442 = 5;
static uint8_t x4477 = UINT8_MAX;
int32_t x4479 = INT32_MAX;
uint8_t x4480 = 52U;
volatile int32_t t89 = -917685;
int32_t x4603 = -149;
uint16_t x4604 = 62U;
static volatile int32_t t90 = -25633028;
static int64_t t92 = 3962LL;
int8_t x4687 = -59;
int64_t x4688 = INT64_MAX;
static int8_t x4774 = 0;
uint8_t x4782 = 2U;
int16_t x4840 = INT16_MIN;
volatile int32_t t98 = -763806521;


void f0(void) {
	uint8_t x69 = UINT8_MAX;
	int8_t x70 = 0;
	static int32_t x72 = -20813634;
	static volatile int32_t t0 = 16813665;

	t0 = (x69>>(x70|(x71==x72)));

	if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x73 = 164U;
	int16_t x75 = -3820;
	int16_t x76 = INT16_MIN;
	uint32_t t1 = 3U;

	t1 = (x73>>(x74|(x75==x76)));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x242 = 1U;
	int16_t x243 = INT16_MAX;
	static int64_t x244 = INT64_MIN;
	int32_t t2 = -245;

	t2 = (x241>>(x242|(x243==x244)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x281 = UINT32_MAX;
	int8_t x282 = 7;
	uint32_t t3 = 27U;

	t3 = (x281>>(x282|(x283==x284)));

	if (t3 != 33554431U) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x333 = 7U;
	uint8_t x334 = 1U;
	int8_t x335 = 19;
	static volatile int32_t t4 = 1;

	t4 = (x333>>(x334|(x335==x336)));

	if (t4 != 3) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x501 = 12U;
	volatile uint8_t x503 = 10U;
	int16_t x504 = -530;
	int32_t t5 = 39;

	t5 = (x501>>(x502|(x503==x504)));

	if (t5 != 6) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x505 = INT8_MAX;
	int8_t x506 = 4;
	static int16_t x507 = -1;
	int32_t x508 = INT32_MIN;

	t6 = (x505>>(x506|(x507==x508)));

	if (t6 != 7) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x513 = 2U;
	static uint8_t x514 = 1U;
	uint64_t x516 = UINT64_MAX;
	static volatile uint32_t t7 = 90612U;

	t7 = (x513>>(x514|(x515==x516)));

	if (t7 != 1U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x553 = 2U;
	static int64_t x554 = 12LL;
	static int16_t x555 = 511;
	uint32_t x556 = UINT32_MAX;
	volatile int32_t t8 = -1790223;

	t8 = (x553>>(x554|(x555==x556)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x637 = INT32_MAX;
	uint16_t x638 = 11U;
	int32_t x639 = 1829007;
	int8_t x640 = -1;

	t9 = (x637>>(x638|(x639==x640)));

	if (t9 != 1048575) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x645 = 0LL;
	static int64_t x646 = 16LL;
	int16_t x648 = INT16_MAX;
	static volatile int64_t t10 = -134957000585LL;

	t10 = (x645>>(x646|(x647==x648)));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x685 = 527;
	static uint8_t x686 = 0U;
	int16_t x687 = 101;
	uint16_t x688 = 2U;

	t11 = (x685>>(x686|(x687==x688)));

	if (t11 != 527) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x721 = INT32_MAX;
	uint8_t x722 = 4U;
	int64_t x723 = 1LL;
	int64_t x724 = 59LL;

	t12 = (x721>>(x722|(x723==x724)));

	if (t12 != 134217727) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x777 = 3445U;
	int8_t x778 = 13;
	static uint16_t x779 = 10U;
	int16_t x780 = 3;
	static uint32_t t13 = 2U;

	t13 = (x777>>(x778|(x779==x780)));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x841 = 8;
	volatile uint8_t x842 = 0U;
	uint16_t x843 = 24091U;
	uint64_t x844 = 137756208LLU;

	t14 = (x841>>(x842|(x843==x844)));

	if (t14 != 8) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x889 = INT32_MAX;
	volatile uint8_t x890 = 5U;
	uint64_t x891 = 3LLU;
	volatile int64_t x892 = -1LL;
	volatile int32_t t15 = 121316;

	t15 = (x889>>(x890|(x891==x892)));

	if (t15 != 67108863) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x929 = 1711U;
	uint8_t x930 = 2U;
	static volatile uint8_t x931 = 0U;
	uint16_t x932 = 6U;

	t16 = (x929>>(x930|(x931==x932)));

	if (t16 != 427) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x1069 = 61U;
	static uint64_t x1070 = 4LLU;
	static int8_t x1071 = 42;
	volatile uint32_t t17 = 85098148U;

	t17 = (x1069>>(x1070|(x1071==x1072)));

	if (t17 != 3U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x1221 = 8420;
	int16_t x1222 = 2;
	int64_t x1223 = -1LL;
	int32_t t18 = -3168206;

	t18 = (x1221>>(x1222|(x1223==x1224)));

	if (t18 != 1052) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x1237 = UINT8_MAX;
	volatile int64_t x1239 = INT64_MIN;
	static volatile uint16_t x1240 = UINT16_MAX;
	int32_t t19 = -79846363;

	t19 = (x1237>>(x1238|(x1239==x1240)));

	if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x1309 = 1859U;
	static int8_t x1310 = 1;
	int8_t x1312 = INT8_MIN;
	static int32_t t20 = 7;

	t20 = (x1309>>(x1310|(x1311==x1312)));

	if (t20 != 929) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1453 = 52;
	int16_t x1454 = 1;
	uint32_t x1455 = UINT32_MAX;
	uint8_t x1456 = 2U;
	volatile int32_t t21 = 123961600;

	t21 = (x1453>>(x1454|(x1455==x1456)));

	if (t21 != 26) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x1465 = UINT64_MAX;
	volatile int8_t x1466 = 5;
	static volatile uint16_t x1468 = UINT16_MAX;
	uint64_t t22 = 34417989001489509LLU;

	t22 = (x1465>>(x1466|(x1467==x1468)));

	if (t22 != 576460752303423487LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1484 = INT16_MIN;
	static volatile uint64_t t23 = 99390653297LLU;

	t23 = (x1481>>(x1482|(x1483==x1484)));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x1521 = 2403381442679577LLU;
	int32_t x1523 = INT32_MAX;
	int64_t x1524 = INT64_MIN;
	uint64_t t24 = 70563556769LLU;

	t24 = (x1521>>(x1522|(x1523==x1524)));

	if (t24 != 1119161LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1581 = 62;
	int16_t x1582 = 0;
	uint64_t x1583 = 4715952862LLU;
	static int8_t x1584 = 0;
	int32_t t25 = 55;

	t25 = (x1581>>(x1582|(x1583==x1584)));

	if (t25 != 62) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1613 = INT32_MAX;
	uint64_t x1615 = 905550369622LLU;
	volatile uint8_t x1616 = 5U;
	volatile int32_t t26 = 12691;

	t26 = (x1613>>(x1614|(x1615==x1616)));

	if (t26 != 268435455) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1645 = 0;
	volatile int16_t x1646 = 11;
	int8_t x1647 = -10;
	static volatile uint64_t x1648 = 7588575865LLU;
	int32_t t27 = -107448586;

	t27 = (x1645>>(x1646|(x1647==x1648)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1673 = 583109474797154272LL;
	volatile int8_t x1674 = 2;
	int64_t t28 = -17932261065780842LL;

	t28 = (x1673>>(x1674|(x1675==x1676)));

	if (t28 != 145777368699288568LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1733 = 534826459476026LLU;
	uint8_t x1734 = 1U;
	int32_t x1735 = INT32_MAX;
	volatile int32_t x1736 = INT32_MIN;
	volatile uint64_t t29 = 74882205168LLU;

	t29 = (x1733>>(x1734|(x1735==x1736)));

	if (t29 != 267413229738013LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1753 = UINT64_MAX;
	uint8_t x1754 = 0U;
	static int32_t x1755 = -6581631;
	int8_t x1756 = INT8_MAX;
	uint64_t t30 = UINT64_MAX;

	t30 = (x1753>>(x1754|(x1755==x1756)));

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x1773 = 1339362LLU;
	uint8_t x1774 = 3U;
	volatile uint16_t x1775 = UINT16_MAX;
	volatile uint64_t x1776 = UINT64_MAX;
	volatile uint64_t t31 = 15426077261601571LLU;

	t31 = (x1773>>(x1774|(x1775==x1776)));

	if (t31 != 167420LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1781 = 25U;
	uint8_t x1782 = 8U;
	volatile int8_t x1783 = INT8_MIN;
	uint8_t x1784 = 9U;
	volatile int32_t t32 = 28;

	t32 = (x1781>>(x1782|(x1783==x1784)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x1789 = 28;
	int64_t x1790 = 0LL;
	int16_t x1792 = INT16_MAX;
	int32_t t33 = -204507946;

	t33 = (x1789>>(x1790|(x1791==x1792)));

	if (t33 != 28) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x1805 = 69431284U;
	uint32_t x1806 = 15U;
	static int64_t x1807 = INT64_MAX;
	int32_t x1808 = -1;
	uint32_t t34 = 850297864U;

	t34 = (x1805>>(x1806|(x1807==x1808)));

	if (t34 != 2118U) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x1951 = 369LLU;
	static int32_t t35 = -111;

	t35 = (x1949>>(x1950|(x1951==x1952)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1985 = INT8_MAX;
	uint16_t x1987 = 13U;
	int32_t t36 = -3;

	t36 = (x1985>>(x1986|(x1987==x1988)));

	if (t36 != 63) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x2029 = UINT32_MAX;
	volatile uint8_t x2030 = 19U;
	int16_t x2032 = INT16_MIN;
	uint32_t t37 = 289918U;

	t37 = (x2029>>(x2030|(x2031==x2032)));

	if (t37 != 8191U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x2053 = INT32_MAX;
	int8_t x2056 = 17;
	volatile int32_t t38 = 0;

	t38 = (x2053>>(x2054|(x2055==x2056)));

	if (t38 != 33554431) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x2057 = UINT64_MAX;
	uint8_t x2058 = 8U;
	int16_t x2059 = INT16_MIN;
	int16_t x2060 = -1;
	uint64_t t39 = 6411767393LLU;

	t39 = (x2057>>(x2058|(x2059==x2060)));

	if (t39 != 72057594037927935LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x2069 = 1U;
	uint16_t x2070 = 1U;
	int16_t x2071 = INT16_MIN;
	uint16_t x2072 = 2418U;
	int32_t t40 = -14;

	t40 = (x2069>>(x2070|(x2071==x2072)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x2159 = 9206072980LLU;
	int32_t x2160 = -1;
	volatile int64_t t41 = -1635152797213367157LL;

	t41 = (x2157>>(x2158|(x2159==x2160)));

	if (t41 != 281474976710655LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x2189 = 16515LLU;
	int16_t x2191 = INT16_MAX;

	t42 = (x2189>>(x2190|(x2191==x2192)));

	if (t42 != 2LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x2201 = 19U;
	uint8_t x2203 = 3U;
	int16_t x2204 = -6;
	static volatile int32_t t43 = 22;

	t43 = (x2201>>(x2202|(x2203==x2204)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x2425 = 45785274020061677LL;
	volatile uint32_t x2427 = 44573U;
	uint32_t x2428 = 24U;
	static int64_t t44 = -31LL;

	t44 = (x2425>>(x2426|(x2427==x2428)));

	if (t44 != 21320429LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x2505 = UINT64_MAX;
	int32_t x2506 = 1;
	int8_t x2507 = -1;
	uint64_t t45 = 59557207462591LLU;

	t45 = (x2505>>(x2506|(x2507==x2508)));

	if (t45 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x2509 = INT16_MAX;
	uint8_t x2510 = 4U;
	int64_t x2511 = -29998905394811LL;
	uint32_t x2512 = 120236U;

	t46 = (x2509>>(x2510|(x2511==x2512)));

	if (t46 != 2047) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x2531 = 230363151317141693LLU;
	volatile int8_t x2532 = INT8_MIN;
	int32_t t47 = -18997;

	t47 = (x2529>>(x2530|(x2531==x2532)));

	if (t47 != 855) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x2557 = 598;
	uint8_t x2558 = 23U;
	volatile int32_t t48 = 4425591;

	t48 = (x2557>>(x2558|(x2559==x2560)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x2602 = 1;
	int16_t x2604 = -1;
	volatile int64_t t49 = 2669765075574LL;

	t49 = (x2601>>(x2602|(x2603==x2604)));

	if (t49 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x2625 = 32428;
	static volatile int8_t x2627 = -1;
	int32_t x2628 = INT32_MIN;
	int32_t t50 = -628010175;

	t50 = (x2625>>(x2626|(x2627==x2628)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x2633 = 40000869LLU;
	int8_t x2634 = 1;
	int8_t x2635 = INT8_MIN;
	static int8_t x2636 = -7;
	uint64_t t51 = 88559LLU;

	t51 = (x2633>>(x2634|(x2635==x2636)));

	if (t51 != 20000434LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int8_t x2689 = 1;
	uint8_t x2690 = 15U;
	volatile int16_t x2691 = INT16_MAX;
	static uint64_t x2692 = 4840LLU;
	int32_t t52 = 6514996;

	t52 = (x2689>>(x2690|(x2691==x2692)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x2805 = UINT32_MAX;
	int32_t x2808 = -364;
	uint32_t t53 = 7273744U;

	t53 = (x2805>>(x2806|(x2807==x2808)));

	if (t53 != 536870911U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x2849 = 24LLU;
	volatile uint64_t x2851 = 33840LLU;
	volatile uint64_t t54 = 1430563856LLU;

	t54 = (x2849>>(x2850|(x2851==x2852)));

	if (t54 != 6LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x2913 = UINT16_MAX;
	static volatile int8_t x2914 = 0;
	int8_t x2915 = 2;
	volatile int16_t x2916 = -6575;

	t55 = (x2913>>(x2914|(x2915==x2916)));

	if (t55 != 65535) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x2949 = 4418586893757888LLU;
	int16_t x2951 = INT16_MIN;
	uint16_t x2952 = UINT16_MAX;

	t56 = (x2949>>(x2950|(x2951==x2952)));

	if (t56 != 4418586893757888LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x2953 = 1;
	uint8_t x2954 = 8U;
	int16_t x2955 = INT16_MIN;
	volatile uint64_t x2956 = UINT64_MAX;
	int32_t t57 = 5;

	t57 = (x2953>>(x2954|(x2955==x2956)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x3061 = 543008544341153034LLU;
	volatile uint8_t x3062 = 50U;
	int64_t x3063 = -1LL;
	uint32_t x3064 = 9295U;
	uint64_t t58 = 13842702053204LLU;

	t58 = (x3061>>(x3062|(x3063==x3064)));

	if (t58 != 482LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x3066 = 30;
	int32_t x3067 = INT32_MAX;
	uint16_t x3068 = 5U;
	int32_t t59 = -16410789;

	t59 = (x3065>>(x3066|(x3067==x3068)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x3098 = 12U;
	int64_t x3099 = INT64_MAX;
	static volatile int32_t t60 = -1931336;

	t60 = (x3097>>(x3098|(x3099==x3100)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint16_t x3117 = 31U;
	int8_t x3118 = 9;
	static int16_t x3119 = INT16_MIN;
	volatile int32_t x3120 = INT32_MAX;

	t61 = (x3117>>(x3118|(x3119==x3120)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x3134 = 7;
	static int32_t x3135 = INT32_MIN;
	uint32_t x3136 = UINT32_MAX;
	static int64_t t62 = -147744198801351559LL;

	t62 = (x3133>>(x3134|(x3135==x3136)));

	if (t62 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x3237 = 3280;
	int8_t x3238 = 0;
	int64_t x3239 = INT64_MIN;
	static int16_t x3240 = 0;
	int32_t t63 = 82;

	t63 = (x3237>>(x3238|(x3239==x3240)));

	if (t63 != 3280) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x3430 = 0;
	int8_t x3431 = -1;
	uint32_t x3432 = UINT32_MAX;
	int32_t t64 = -370;

	t64 = (x3429>>(x3430|(x3431==x3432)));

	if (t64 != 15) { NG(); } else { ; }
	
}

void f65(void) {


	t65 = (x3457>>(x3458|(x3459==x3460)));

	if (t65 != 70015212395LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint8_t x3509 = UINT8_MAX;
	volatile uint8_t x3510 = 1U;
	uint8_t x3511 = UINT8_MAX;
	int8_t x3512 = -1;

	t66 = (x3509>>(x3510|(x3511==x3512)));

	if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x3550 = 1;
	static int16_t x3551 = -1611;
	int16_t x3552 = INT16_MAX;
	volatile int32_t t67 = -4683;

	t67 = (x3549>>(x3550|(x3551==x3552)));

	if (t67 != 63) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x3557 = 90U;
	volatile int8_t x3558 = 0;
	int16_t x3559 = INT16_MIN;
	int8_t x3560 = INT8_MIN;
	volatile int32_t t68 = -11605758;

	t68 = (x3557>>(x3558|(x3559==x3560)));

	if (t68 != 90) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x3634 = 4;
	int32_t x3635 = INT32_MIN;
	static int16_t x3636 = INT16_MAX;
	volatile int32_t t69 = -23940;

	t69 = (x3633>>(x3634|(x3635==x3636)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int16_t x3705 = INT16_MAX;
	int64_t x3706 = 0LL;
	int16_t x3707 = INT16_MIN;
	int32_t t70 = 721435;

	t70 = (x3705>>(x3706|(x3707==x3708)));

	if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x3781 = 60U;
	uint32_t x3784 = 52748418U;
	static volatile int32_t t71 = 378487107;

	t71 = (x3781>>(x3782|(x3783==x3784)));

	if (t71 != 30) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x3813 = INT64_MAX;
	int32_t x3814 = 33;
	int16_t x3815 = INT16_MAX;
	static volatile int64_t t72 = -2279647698638656382LL;

	t72 = (x3813>>(x3814|(x3815==x3816)));

	if (t72 != 1073741823LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint64_t x3862 = 6LLU;
	int8_t x3863 = INT8_MIN;
	int64_t x3864 = 0LL;
	volatile int32_t t73 = -55;

	t73 = (x3861>>(x3862|(x3863==x3864)));

	if (t73 != 63) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x3865 = UINT8_MAX;
	int8_t x3866 = 3;
	static uint16_t x3867 = 11U;
	static int8_t x3868 = -1;
	static int32_t t74 = -115355133;

	t74 = (x3865>>(x3866|(x3867==x3868)));

	if (t74 != 31) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x3985 = 2334LL;
	volatile int32_t x3986 = 0;
	uint32_t x3987 = 6U;
	static int8_t x3988 = INT8_MIN;
	volatile int64_t t75 = -950126587025266LL;

	t75 = (x3985>>(x3986|(x3987==x3988)));

	if (t75 != 2334LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x4011 = -252205;
	int32_t x4012 = INT32_MIN;
	int32_t t76 = 3805;

	t76 = (x4009>>(x4010|(x4011==x4012)));

	if (t76 != 32767) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x4049 = 7346LLU;
	static int8_t x4050 = 0;
	int8_t x4051 = INT8_MIN;
	int8_t x4052 = 46;
	uint64_t t77 = 169LLU;

	t77 = (x4049>>(x4050|(x4051==x4052)));

	if (t77 != 7346LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x4101 = 4421U;
	static int8_t x4102 = 31;
	int32_t x4103 = -481378;
	static int64_t x4104 = -432LL;
	int32_t t78 = -32167778;

	t78 = (x4101>>(x4102|(x4103==x4104)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x4130 = 23;
	static volatile int64_t x4132 = INT64_MIN;
	int64_t t79 = 63849584053276287LL;

	t79 = (x4129>>(x4130|(x4131==x4132)));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x4161 = INT8_MAX;
	static volatile uint8_t x4164 = 14U;
	static int32_t t80 = -116441885;

	t80 = (x4161>>(x4162|(x4163==x4164)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x4217 = 947729845032830LLU;
	int8_t x4219 = INT8_MIN;
	int32_t x4220 = INT32_MIN;

	t81 = (x4217>>(x4218|(x4219==x4220)));

	if (t81 != 7230604896LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x4249 = 30763U;
	static uint16_t x4251 = UINT16_MAX;
	static int16_t x4252 = INT16_MIN;
	int32_t t82 = 22;

	t82 = (x4249>>(x4250|(x4251==x4252)));

	if (t82 != 3845) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x4285 = 28336461U;
	static int16_t x4286 = 6;
	int64_t x4287 = 584219883303628675LL;
	static volatile uint32_t t83 = 1820102076U;

	t83 = (x4285>>(x4286|(x4287==x4288)));

	if (t83 != 442757U) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x4305 = UINT16_MAX;
	static volatile uint8_t x4306 = 29U;
	int8_t x4307 = 1;
	int32_t x4308 = 37;
	int32_t t84 = 12403;

	t84 = (x4305>>(x4306|(x4307==x4308)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x4321 = 654256613970188LLU;
	uint16_t x4322 = 2U;
	int32_t x4324 = -1382766;
	static volatile uint64_t t85 = 828007580993LLU;

	t85 = (x4321>>(x4322|(x4323==x4324)));

	if (t85 != 163564153492547LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x4334 = 56U;
	uint16_t x4335 = 65U;
	int32_t x4336 = -1;
	volatile uint64_t t86 = 14823305381LLU;

	t86 = (x4333>>(x4334|(x4335==x4336)));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x4349 = INT32_MAX;
	uint16_t x4350 = 24U;
	int32_t x4352 = INT32_MAX;
	int32_t t87 = -14;

	t87 = (x4349>>(x4350|(x4351==x4352)));

	if (t87 != 127) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x4441 = INT32_MAX;
	int32_t x4443 = INT32_MIN;
	int16_t x4444 = -1231;
	static int32_t t88 = 1529;

	t88 = (x4441>>(x4442|(x4443==x4444)));

	if (t88 != 67108863) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x4478 = 4;

	t89 = (x4477>>(x4478|(x4479==x4480)));

	if (t89 != 15) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x4601 = UINT8_MAX;
	volatile uint32_t x4602 = 12U;

	t90 = (x4601>>(x4602|(x4603==x4604)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x4625 = 79U;
	uint16_t x4626 = 3U;
	int64_t x4627 = INT64_MAX;
	int16_t x4628 = INT16_MIN;
	int32_t t91 = -56190;

	t91 = (x4625>>(x4626|(x4627==x4628)));

	if (t91 != 9) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x4629 = INT64_MAX;
	uint16_t x4630 = 15U;
	int16_t x4631 = INT16_MAX;
	uint32_t x4632 = 730899482U;

	t92 = (x4629>>(x4630|(x4631==x4632)));

	if (t92 != 281474976710655LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x4685 = 1U;
	uint16_t x4686 = 0U;
	int32_t t93 = 15;

	t93 = (x4685>>(x4686|(x4687==x4688)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x4725 = 1375U;
	uint8_t x4726 = 0U;
	int64_t x4727 = -29LL;
	uint8_t x4728 = 1U;
	int32_t t94 = 1812;

	t94 = (x4725>>(x4726|(x4727==x4728)));

	if (t94 != 1375) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x4773 = INT16_MAX;
	uint32_t x4775 = 120U;
	uint64_t x4776 = UINT64_MAX;
	volatile int32_t t95 = -58;

	t95 = (x4773>>(x4774|(x4775==x4776)));

	if (t95 != 32767) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x4781 = 17U;
	uint8_t x4783 = UINT8_MAX;
	volatile int64_t x4784 = INT64_MIN;
	int32_t t96 = 65;

	t96 = (x4781>>(x4782|(x4783==x4784)));

	if (t96 != 4) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x4833 = INT16_MAX;
	uint8_t x4834 = 3U;
	static int64_t x4835 = INT64_MAX;
	static int64_t x4836 = -1147651227411086652LL;
	volatile int32_t t97 = -142422596;

	t97 = (x4833>>(x4834|(x4835==x4836)));

	if (t97 != 4095) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x4837 = 1;
	uint8_t x4838 = 3U;
	int16_t x4839 = INT16_MIN;

	t98 = (x4837>>(x4838|(x4839==x4840)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x4949 = 359;
	uint32_t x4950 = 7U;
	volatile int64_t x4951 = INT64_MIN;
	int8_t x4952 = -1;
	int32_t t99 = -7802;

	t99 = (x4949>>(x4950|(x4951==x4952)));

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

