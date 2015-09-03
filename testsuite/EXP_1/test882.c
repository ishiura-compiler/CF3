#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t t1 = 421140353LLU;
uint32_t x110 = 9U;
int32_t x112 = 247376;
static volatile uint32_t x155 = 2070499222U;
int8_t x172 = -1;
volatile uint64_t t4 = 61552940388438144LLU;
uint64_t x238 = 0LLU;
int16_t x240 = INT16_MAX;
volatile int32_t x300 = INT32_MIN;
int32_t t7 = 80972047;
int64_t x351 = -1LL;
int8_t x352 = 3;
static volatile int16_t x380 = INT16_MIN;
static uint16_t x525 = UINT16_MAX;
int8_t x596 = 2;
volatile uint64_t t12 = 3588356845047481386LLU;
uint32_t x837 = 3488U;
int16_t x838 = 1;
volatile int64_t t15 = -5754243308LL;
uint32_t x933 = 26202798U;
static uint64_t x935 = 1806605323LLU;
uint64_t t18 = 1751LLU;
volatile int32_t x1019 = -1;
int16_t x1020 = INT16_MIN;
volatile uint64_t x1065 = UINT64_MAX;
uint32_t t23 = 7794786U;
int8_t x1483 = -1;
int32_t x1491 = -1;
volatile uint32_t t27 = 0U;
uint64_t t28 = 20075020LLU;
static int8_t x1594 = 0;
int8_t x1595 = 19;
volatile uint32_t t30 = 79U;
volatile int32_t x1686 = 3;
int32_t x1687 = -1;
uint32_t x1773 = UINT32_MAX;
static volatile uint32_t t34 = 8066U;
int16_t x2039 = INT16_MAX;
int64_t t36 = INT64_MIN;
uint64_t x2161 = UINT64_MAX;
static uint32_t x2167 = 10118427U;
uint64_t t38 = 86LLU;
int8_t x2351 = INT8_MIN;
static uint64_t x2361 = 516782178028641479LLU;
int32_t x2363 = -1;
static uint8_t x2614 = 13U;
static volatile int64_t t44 = 27084073507609073LL;
static uint8_t x2623 = 2U;
volatile int8_t x2719 = INT8_MAX;
int64_t x2721 = 4132290228850LL;
int64_t t47 = -32099794170099441LL;
int8_t x2736 = INT8_MIN;
static uint16_t x3012 = 1U;
volatile int8_t x3218 = 1;
static uint8_t x3298 = 7U;
static uint64_t x3385 = 24331080353045144LLU;
int16_t x3386 = 8;
uint64_t t53 = 13341730560245831LLU;
static int16_t x3437 = 40;
volatile uint32_t x3438 = 2U;
uint8_t x3439 = UINT8_MAX;
uint8_t x3522 = 1U;
static uint16_t x3523 = 1U;
int32_t x3540 = INT32_MIN;
static volatile uint32_t t56 = 155839799U;
uint8_t x3650 = 1U;
int8_t x3652 = INT8_MIN;
volatile int32_t t57 = 0;
static volatile uint32_t t58 = 99U;
volatile uint8_t x4030 = 11U;
uint32_t x4031 = UINT32_MAX;
uint32_t x4103 = UINT32_MAX;
static uint32_t t63 = 261998U;
volatile int16_t x4401 = INT16_MAX;
uint8_t x4402 = 1U;
int32_t t66 = -231;
uint32_t x4469 = UINT32_MAX;
volatile int8_t x4555 = 26;
int8_t x4665 = 0;
volatile int64_t x4844 = -1LL;
static int64_t x4971 = INT64_MIN;
uint16_t x4973 = 222U;
volatile int64_t t73 = 636709LL;
int16_t x5110 = 0;
int8_t x5481 = INT8_MAX;
static uint64_t t80 = 1LLU;
uint16_t x5589 = 78U;
int8_t x5592 = INT8_MIN;
int8_t x5595 = 14;
static uint8_t x5637 = UINT8_MAX;
uint8_t x5727 = UINT8_MAX;
int8_t x5803 = INT8_MAX;
uint64_t x5833 = 10716409178762LLU;
volatile uint64_t t88 = 51LLU;
uint64_t t89 = 221300LLU;
uint16_t x5854 = 1U;
volatile uint32_t x5855 = UINT32_MAX;
int8_t x5949 = 1;
uint64_t t93 = 17LLU;
uint64_t x6575 = UINT64_MAX;
int8_t x6576 = INT8_MAX;
static uint8_t x6673 = 6U;
int32_t t96 = INT32_MIN;
int64_t x6997 = 313LL;
volatile int8_t x6999 = INT8_MIN;


void f0(void) {
	int8_t x1 = 0;
	uint16_t x2 = 22U;
	int64_t x3 = INT64_MAX;
	static volatile int8_t x4 = 4;
	int64_t t0 = -125923053437LL;

	t0 = (((x1<<x2)*x3)&x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x65 = 3050161928LLU;
	volatile uint8_t x66 = 3U;
	volatile int8_t x67 = 2;
	int8_t x68 = INT8_MAX;

	t1 = (((x65<<x66)*x67)&x68);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x109 = UINT32_MAX;
	volatile int32_t x111 = -1;
	uint32_t t2 = 1791U;

	t2 = (((x109<<x110)*x111)&x112);

	if (t2 != 512U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x153 = UINT64_MAX;
	int16_t x154 = 10;
	static volatile int8_t x156 = -1;
	uint64_t t3 = 1333LLU;

	t3 = (((x153<<x154)*x155)&x156);

	if (t3 != 18446741953518348288LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x169 = 77735170190575382LLU;
	volatile int8_t x170 = 8;
	static int64_t x171 = INT64_MAX;

	t4 = (((x169<<x170)*x171)&x172);

	if (t4 != 16993284578631805440LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x237 = 219U;
	static int32_t x239 = INT32_MIN;
	uint32_t t5 = 11687U;

	t5 = (((x237<<x238)*x239)&x240);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x261 = 14;
	uint32_t x262 = 1U;
	uint8_t x263 = 3U;
	volatile uint64_t x264 = UINT64_MAX;
	static uint64_t t6 = 27860LLU;

	t6 = (((x261<<x262)*x263)&x264);

	if (t6 != 84LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x297 = 1U;
	uint8_t x298 = 9U;
	volatile int8_t x299 = 10;

	t7 = (((x297<<x298)*x299)&x300);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x349 = UINT8_MAX;
	uint16_t x350 = 15U;
	static volatile int64_t t8 = -102304724523LL;

	t8 = (((x349<<x350)*x351)&x352);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x377 = 4201604482LL;
	uint8_t x378 = 1U;
	uint8_t x379 = UINT8_MAX;
	int64_t t9 = -183429607522866567LL;

	t9 = (((x377<<x378)*x379)&x380);

	if (t9 != 2142818271232LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x526 = 0U;
	uint8_t x527 = 69U;
	uint64_t x528 = 33560101663LLU;
	volatile uint64_t t10 = 12668594005552LLU;

	t10 = (((x525<<x526)*x527)&x528);

	if (t10 != 4490011LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x593 = 473934531688699LLU;
	int8_t x594 = 18;
	int8_t x595 = 0;
	volatile uint64_t t11 = 5542012944339012777LLU;

	t11 = (((x593<<x594)*x595)&x596);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x641 = 1105LLU;
	volatile int8_t x642 = 1;
	static int64_t x643 = INT64_MIN;
	volatile int8_t x644 = INT8_MAX;

	t12 = (((x641<<x642)*x643)&x644);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x737 = 27U;
	uint8_t x738 = 2U;
	static int16_t x739 = 473;
	static uint16_t x740 = 2U;
	volatile int32_t t13 = 1095;

	t13 = (((x737<<x738)*x739)&x740);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x793 = 8;
	int8_t x794 = 1;
	int32_t x795 = 6;
	static volatile int32_t x796 = -1;
	volatile int32_t t14 = -982324;

	t14 = (((x793<<x794)*x795)&x796);

	if (t14 != 96) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x839 = 125U;
	int64_t x840 = INT64_MIN;

	t15 = (((x837<<x838)*x839)&x840);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x909 = 10U;
	int16_t x910 = 3;
	volatile uint8_t x911 = 0U;
	int16_t x912 = INT16_MAX;
	int32_t t16 = -37893485;

	t16 = (((x909<<x910)*x911)&x912);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x913 = UINT8_MAX;
	volatile int8_t x914 = 0;
	volatile uint16_t x915 = 225U;
	int16_t x916 = -1;
	static volatile int32_t t17 = 1;

	t17 = (((x913<<x914)*x915)&x916);

	if (t17 != 57375) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x934 = 2LL;
	static int64_t x936 = -1LL;

	t18 = (((x933<<x934)*x935)&x936);

	if (t18 != 189352457377175016LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x953 = UINT16_MAX;
	volatile int8_t x954 = 1;
	static uint64_t x955 = 17LLU;
	static int64_t x956 = -15015998722834LL;
	static uint64_t t19 = 14752211219085421LLU;

	t19 = (((x953<<x954)*x955)&x956);

	if (t19 != 2157774LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x1017 = 0U;
	static uint8_t x1018 = 19U;
	int32_t t20 = -1739825;

	t20 = (((x1017<<x1018)*x1019)&x1020);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x1029 = UINT32_MAX;
	volatile int8_t x1030 = 4;
	volatile uint8_t x1031 = 125U;
	int64_t x1032 = INT64_MIN;
	static int64_t t21 = 1299148309033LL;

	t21 = (((x1029<<x1030)*x1031)&x1032);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1066 = 0LL;
	uint8_t x1067 = 2U;
	int32_t x1068 = INT32_MAX;
	volatile uint64_t t22 = 2LLU;

	t22 = (((x1065<<x1066)*x1067)&x1068);

	if (t22 != 2147483646LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x1221 = 4U;
	volatile int8_t x1222 = 10;
	int8_t x1223 = INT8_MAX;
	volatile uint32_t x1224 = 18741U;

	t23 = (((x1221<<x1222)*x1223)&x1224);

	if (t23 != 16384U) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x1445 = 71297U;
	uint8_t x1446 = 1U;
	int16_t x1447 = -1;
	int32_t x1448 = -1;
	static volatile uint32_t t24 = 943036U;

	t24 = (((x1445<<x1446)*x1447)&x1448);

	if (t24 != 4294824702U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x1481 = UINT64_MAX;
	volatile int16_t x1482 = 0;
	int32_t x1484 = INT32_MIN;
	uint64_t t25 = 12260796724LLU;

	t25 = (((x1481<<x1482)*x1483)&x1484);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x1485 = UINT64_MAX;
	volatile uint16_t x1486 = 16U;
	int8_t x1487 = INT8_MAX;
	int16_t x1488 = INT16_MIN;
	uint64_t t26 = 364623262069761649LLU;

	t26 = (((x1485<<x1486)*x1487)&x1488);

	if (t26 != 18446744073701228544LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x1489 = 1167324755U;
	uint8_t x1490 = 24U;
	static uint16_t x1492 = UINT16_MAX;

	t27 = (((x1489<<x1490)*x1491)&x1492);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x1537 = 4U;
	int16_t x1538 = 10;
	int8_t x1539 = INT8_MAX;
	volatile uint64_t x1540 = 376LLU;

	t28 = (((x1537<<x1538)*x1539)&x1540);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x1561 = 42;
	volatile int16_t x1562 = 6;
	static uint16_t x1563 = UINT16_MAX;
	volatile int64_t x1564 = INT64_MIN;
	static int64_t t29 = 76391LL;

	t29 = (((x1561<<x1562)*x1563)&x1564);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x1593 = 9476U;
	int16_t x1596 = INT16_MIN;

	t30 = (((x1593<<x1594)*x1595)&x1596);

	if (t30 != 163840U) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1681 = UINT32_MAX;
	uint16_t x1682 = 2U;
	uint16_t x1683 = 711U;
	static int8_t x1684 = INT8_MIN;
	uint32_t t31 = 7189U;

	t31 = (((x1681<<x1682)*x1683)&x1684);

	if (t31 != 4294964352U) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x1685 = INT8_MAX;
	static uint8_t x1688 = 14U;
	int32_t t32 = -63179;

	t32 = (((x1685<<x1686)*x1687)&x1688);

	if (t32 != 8) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x1774 = 0U;
	static int16_t x1775 = INT16_MIN;
	int32_t x1776 = 1;
	uint32_t t33 = 1893U;

	t33 = (((x1773<<x1774)*x1775)&x1776);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x2005 = 8U;
	uint16_t x2006 = 1U;
	static volatile int8_t x2007 = INT8_MAX;
	static volatile int32_t x2008 = INT32_MIN;

	t34 = (((x2005<<x2006)*x2007)&x2008);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x2037 = 49U;
	int16_t x2038 = 4;
	volatile uint64_t x2040 = 1415806LLU;
	volatile uint64_t t35 = 11342249463233LLU;

	t35 = (((x2037<<x2038)*x2039)&x2040);

	if (t35 != 366704LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x2113 = 12U;
	static int8_t x2114 = 1;
	int32_t x2115 = -4;
	int64_t x2116 = INT64_MIN;

	t36 = (((x2113<<x2114)*x2115)&x2116);

	if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x2162 = 0;
	volatile int16_t x2163 = -1;
	int64_t x2164 = INT64_MIN;
	static volatile uint64_t t37 = 4968531970698171LLU;

	t37 = (((x2161<<x2162)*x2163)&x2164);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x2165 = 56363245159LLU;
	int32_t x2166 = 19;
	int8_t x2168 = 0;

	t38 = (((x2165<<x2166)*x2167)&x2168);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x2349 = 2244260674760500632LLU;
	static volatile uint8_t x2350 = 1U;
	int64_t x2352 = INT64_MIN;
	static uint64_t t39 = 6896316937203903LLU;

	t39 = (((x2349<<x2350)*x2351)&x2352);

	if (t39 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2362 = 1;
	int32_t x2364 = INT32_MIN;
	volatile uint64_t t40 = 531916187396253LLU;

	t40 = (((x2361<<x2362)*x2363)&x2364);

	if (t40 != 17413179716700995584LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x2461 = 1;
	uint32_t x2462 = 0U;
	uint16_t x2463 = 26698U;
	static int16_t x2464 = INT16_MIN;
	int32_t t41 = 1;

	t41 = (((x2461<<x2462)*x2463)&x2464);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2489 = INT8_MAX;
	uint8_t x2490 = 1U;
	int64_t x2491 = -1LL;
	int64_t x2492 = INT64_MIN;
	volatile int64_t t42 = INT64_MIN;

	t42 = (((x2489<<x2490)*x2491)&x2492);

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x2497 = 75363738LL;
	volatile uint16_t x2498 = 6U;
	uint64_t x2499 = 36347640473LLU;
	uint8_t x2500 = 8U;
	uint64_t t43 = 5660LLU;

	t43 = (((x2497<<x2498)*x2499)&x2500);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x2613 = 7;
	static int64_t x2615 = -1LL;
	static uint16_t x2616 = 0U;

	t44 = (((x2613<<x2614)*x2615)&x2616);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x2621 = UINT8_MAX;
	uint16_t x2622 = 2U;
	volatile int8_t x2624 = INT8_MIN;
	static int32_t t45 = 712053;

	t45 = (((x2621<<x2622)*x2623)&x2624);

	if (t45 != 1920) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x2717 = 98637LLU;
	int8_t x2718 = 1;
	static int16_t x2720 = 283;
	uint64_t t46 = 306500791904543283LLU;

	t46 = (((x2717<<x2718)*x2719)&x2720);

	if (t46 != 2LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x2722 = 5;
	uint8_t x2723 = 0U;
	volatile int8_t x2724 = -2;

	t47 = (((x2721<<x2722)*x2723)&x2724);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x2733 = 1966057947LLU;
	volatile uint16_t x2734 = 6U;
	static int8_t x2735 = INT8_MIN;
	volatile uint64_t t48 = 3657992511446LLU;

	t48 = (((x2733<<x2734)*x2735)&x2736);

	if (t48 != 18446727967762849792LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x3009 = UINT64_MAX;
	static uint8_t x3010 = 46U;
	int32_t x3011 = -1;
	uint64_t t49 = 834465LLU;

	t49 = (((x3009<<x3010)*x3011)&x3012);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x3057 = 1U;
	int32_t x3058 = 14;
	static uint8_t x3059 = 3U;
	static int16_t x3060 = INT16_MIN;
	volatile int32_t t50 = -2860;

	t50 = (((x3057<<x3058)*x3059)&x3060);

	if (t50 != 32768) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x3217 = 11;
	volatile uint8_t x3219 = UINT8_MAX;
	uint16_t x3220 = 311U;
	volatile int32_t t51 = -337558959;

	t51 = (((x3217<<x3218)*x3219)&x3220);

	if (t51 != 290) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x3297 = INT16_MAX;
	uint32_t x3299 = 20U;
	int16_t x3300 = -1;
	volatile uint32_t t52 = 1612662010U;

	t52 = (((x3297<<x3298)*x3299)&x3300);

	if (t52 != 83883520U) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x3387 = 0;
	volatile uint64_t x3388 = UINT64_MAX;

	t53 = (((x3385<<x3386)*x3387)&x3388);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x3440 = -1;
	static int32_t t54 = 116;

	t54 = (((x3437<<x3438)*x3439)&x3440);

	if (t54 != 40800) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x3521 = UINT8_MAX;
	volatile int16_t x3524 = INT16_MIN;
	static int32_t t55 = -2918322;

	t55 = (((x3521<<x3522)*x3523)&x3524);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x3537 = 2U;
	uint8_t x3538 = 15U;
	volatile uint32_t x3539 = 8U;

	t56 = (((x3537<<x3538)*x3539)&x3540);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x3649 = 177;
	int16_t x3651 = 1;

	t57 = (((x3649<<x3650)*x3651)&x3652);

	if (t57 != 256) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x3677 = 255U;
	uint8_t x3678 = 3U;
	int8_t x3679 = -7;
	static uint32_t x3680 = 48806U;

	t58 = (((x3677<<x3678)*x3679)&x3680);

	if (t58 != 34848U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x3841 = 6;
	uint64_t x3842 = 3LLU;
	uint8_t x3843 = UINT8_MAX;
	uint16_t x3844 = 1U;
	int32_t t59 = -15129;

	t59 = (((x3841<<x3842)*x3843)&x3844);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x3937 = 2454;
	uint16_t x3938 = 6U;
	uint8_t x3939 = UINT8_MAX;
	int64_t x3940 = INT64_MAX;
	volatile int64_t t60 = 1LL;

	t60 = (((x3937<<x3938)*x3939)&x3940);

	if (t60 != 40049280LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x4005 = 1U;
	static uint8_t x4006 = 10U;
	int64_t x4007 = -16211669105LL;
	int64_t x4008 = INT64_MAX;
	int64_t t61 = 213694LL;

	t61 = (((x4005<<x4006)*x4007)&x4008);

	if (t61 != 9223355436105612288LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x4029 = 2U;
	uint64_t x4032 = 24LLU;
	uint64_t t62 = 12492355423441726LLU;

	t62 = (((x4029<<x4030)*x4031)&x4032);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x4101 = 1U;
	int8_t x4102 = 1;
	int8_t x4104 = INT8_MIN;

	t63 = (((x4101<<x4102)*x4103)&x4104);

	if (t63 != 4294967168U) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x4321 = UINT64_MAX;
	volatile uint8_t x4322 = 35U;
	int16_t x4323 = -110;
	int16_t x4324 = INT16_MAX;
	volatile uint64_t t64 = 11LLU;

	t64 = (((x4321<<x4322)*x4323)&x4324);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x4349 = 12;
	static int64_t x4350 = 5LL;
	volatile int64_t x4351 = 3968LL;
	uint8_t x4352 = UINT8_MAX;
	int64_t t65 = 3240058232569518778LL;

	t65 = (((x4349<<x4350)*x4351)&x4352);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x4403 = 73U;
	volatile uint8_t x4404 = 1U;

	t66 = (((x4401<<x4402)*x4403)&x4404);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x4470 = 1;
	int8_t x4471 = 21;
	volatile uint8_t x4472 = 3U;
	uint32_t t67 = 18U;

	t67 = (((x4469<<x4470)*x4471)&x4472);

	if (t67 != 2U) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x4529 = 2U;
	uint32_t x4530 = 1U;
	static int64_t x4531 = -1LL;
	int64_t x4532 = 41826186190895088LL;
	int64_t t68 = 2468124244LL;

	t68 = (((x4529<<x4530)*x4531)&x4532);

	if (t68 != 41826186190895088LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x4553 = 4302LLU;
	volatile uint8_t x4554 = 55U;
	int64_t x4556 = INT64_MIN;
	uint64_t t69 = 641351LLU;

	t69 = (((x4553<<x4554)*x4555)&x4556);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x4666 = 0;
	int32_t x4667 = -3766;
	int16_t x4668 = INT16_MIN;
	int32_t t70 = 325;

	t70 = (((x4665<<x4666)*x4667)&x4668);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x4841 = INT8_MAX;
	int16_t x4842 = 1;
	static volatile int16_t x4843 = 7;
	volatile int64_t t71 = 1154842LL;

	t71 = (((x4841<<x4842)*x4843)&x4844);

	if (t71 != 1778LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x4969 = 561315913999795LLU;
	uint8_t x4970 = 13U;
	volatile uint64_t x4972 = 298574044468143LLU;
	uint64_t t72 = 785LLU;

	t72 = (((x4969<<x4970)*x4971)&x4972);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x4974 = 6U;
	volatile int64_t x4975 = -1LL;
	int32_t x4976 = INT32_MAX;

	t73 = (((x4973<<x4974)*x4975)&x4976);

	if (t73 != 2147469440LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x5109 = 1;
	volatile uint64_t x5111 = UINT64_MAX;
	static volatile int32_t x5112 = INT32_MAX;
	uint64_t t74 = 23521LLU;

	t74 = (((x5109<<x5110)*x5111)&x5112);

	if (t74 != 2147483647LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x5233 = 6U;
	uint16_t x5234 = 26U;
	uint8_t x5235 = 0U;
	static uint32_t x5236 = 44U;
	uint32_t t75 = 0U;

	t75 = (((x5233<<x5234)*x5235)&x5236);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x5353 = UINT8_MAX;
	uint16_t x5354 = 3U;
	int16_t x5355 = INT16_MAX;
	static int32_t x5356 = INT32_MIN;
	int32_t t76 = -219884;

	t76 = (((x5353<<x5354)*x5355)&x5356);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x5437 = 725;
	int8_t x5438 = 0;
	volatile int64_t x5439 = 1314465477129209LL;
	int8_t x5440 = INT8_MIN;
	int64_t t77 = -141142403LL;

	t77 = (((x5437<<x5438)*x5439)&x5440);

	if (t77 != 952987470918676480LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x5482 = 7U;
	volatile int16_t x5483 = INT16_MIN;
	static volatile int16_t x5484 = INT16_MIN;
	int32_t t78 = 103020478;

	t78 = (((x5481<<x5482)*x5483)&x5484);

	if (t78 != -532676608) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x5501 = UINT32_MAX;
	int8_t x5502 = 6;
	int8_t x5503 = -1;
	volatile uint8_t x5504 = 5U;
	uint32_t t79 = 1U;

	t79 = (((x5501<<x5502)*x5503)&x5504);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x5573 = UINT32_MAX;
	int16_t x5574 = 1;
	int32_t x5575 = INT32_MIN;
	uint64_t x5576 = UINT64_MAX;

	t80 = (((x5573<<x5574)*x5575)&x5576);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x5585 = 4U;
	static volatile uint64_t x5586 = 6LLU;
	uint8_t x5587 = 13U;
	uint8_t x5588 = 3U;
	int32_t t81 = 1285;

	t81 = (((x5585<<x5586)*x5587)&x5588);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x5590 = 1;
	int8_t x5591 = INT8_MIN;
	static volatile int32_t t82 = 1;

	t82 = (((x5589<<x5590)*x5591)&x5592);

	if (t82 != -19968) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x5593 = UINT8_MAX;
	volatile uint8_t x5594 = 8U;
	int32_t x5596 = INT32_MIN;
	static volatile int32_t t83 = 5737904;

	t83 = (((x5593<<x5594)*x5595)&x5596);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x5621 = 37U;
	uint16_t x5622 = 7U;
	int16_t x5623 = INT16_MAX;
	int32_t x5624 = INT32_MAX;
	static volatile int32_t t84 = 791;

	t84 = (((x5621<<x5622)*x5623)&x5624);

	if (t84 != 155184512) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x5638 = 0U;
	uint8_t x5639 = UINT8_MAX;
	volatile int64_t x5640 = -1977LL;
	int64_t t85 = -186033561926077364LL;

	t85 = (((x5637<<x5638)*x5639)&x5640);

	if (t85 != 63489LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x5725 = 335354874LLU;
	static uint64_t x5726 = 5LLU;
	int8_t x5728 = INT8_MIN;
	volatile uint64_t t86 = 1996LLU;

	t86 = (((x5725<<x5726)*x5727)&x5728);

	if (t86 != 2736495771776LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x5801 = UINT16_MAX;
	volatile uint8_t x5802 = 1U;
	volatile int8_t x5804 = INT8_MAX;
	static volatile int32_t t87 = -23131;

	t87 = (((x5801<<x5802)*x5803)&x5804);

	if (t87 != 2) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x5834 = 0;
	int8_t x5835 = INT8_MAX;
	static int64_t x5836 = INT64_MIN;

	t88 = (((x5833<<x5834)*x5835)&x5836);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x5845 = 255944LLU;
	uint32_t x5846 = 2U;
	uint8_t x5847 = UINT8_MAX;
	int16_t x5848 = INT16_MIN;

	t89 = (((x5845<<x5846)*x5847)&x5848);

	if (t89 != 261062656LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x5853 = INT16_MAX;
	volatile int32_t x5856 = INT32_MAX;
	uint32_t t90 = 501576543U;

	t90 = (((x5853<<x5854)*x5855)&x5856);

	if (t90 != 2147418114U) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int8_t x5950 = 13;
	volatile int8_t x5951 = -24;
	int16_t x5952 = INT16_MIN;
	static int32_t t91 = -114580019;

	t91 = (((x5949<<x5950)*x5951)&x5952);

	if (t91 != -196608) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x6077 = 1U;
	volatile int8_t x6078 = 16;
	int16_t x6079 = -815;
	int8_t x6080 = -33;
	int32_t t92 = 1;

	t92 = (((x6077<<x6078)*x6079)&x6080);

	if (t92 != -53411840) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x6441 = 5216569169435LLU;
	static uint8_t x6442 = 55U;
	uint16_t x6443 = 48U;
	static uint8_t x6444 = UINT8_MAX;

	t93 = (((x6441<<x6442)*x6443)&x6444);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x6573 = 25965U;
	static volatile uint16_t x6574 = 1U;
	static uint64_t t94 = 504916809775514LLU;

	t94 = (((x6573<<x6574)*x6575)&x6576);

	if (t94 != 38LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x6674 = 21U;
	int8_t x6675 = 26;
	int8_t x6676 = 32;
	static volatile int32_t t95 = 6222024;

	t95 = (((x6673<<x6674)*x6675)&x6676);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x6829 = INT8_MAX;
	int8_t x6830 = 0;
	int16_t x6831 = -1;
	int32_t x6832 = INT32_MIN;

	t96 = (((x6829<<x6830)*x6831)&x6832);

	if (t96 != INT32_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x6873 = 102305870U;
	static uint64_t x6874 = 3LLU;
	uint32_t x6875 = UINT32_MAX;
	uint32_t x6876 = 95U;
	uint32_t t97 = 1529557999U;

	t97 = (((x6873<<x6874)*x6875)&x6876);

	if (t97 != 16U) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x6957 = 7291;
	uint16_t x6958 = 14U;
	static int8_t x6959 = 0;
	int32_t x6960 = -1;
	int32_t t98 = 6;

	t98 = (((x6957<<x6958)*x6959)&x6960);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x6998 = 12U;
	int8_t x7000 = 2;
	volatile int64_t t99 = -38LL;

	t99 = (((x6997<<x6998)*x6999)&x7000);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

