#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x14 = 3;
uint64_t x35 = 2685LLU;
uint32_t x61 = 58U;
volatile int8_t x190 = 1;
volatile uint32_t x238 = 0U;
int16_t x240 = INT16_MIN;
uint32_t t5 = 7752630U;
int64_t x258 = 0LL;
int32_t x444 = -1;
uint8_t x629 = 2U;
static uint64_t x634 = 42LLU;
static uint64_t t11 = 68533512249568LLU;
int32_t t12 = 343712;
uint64_t x668 = 558LLU;
int8_t x698 = 0;
volatile int16_t x938 = 50;
static volatile uint64_t t16 = 544502998860981362LLU;
int16_t x981 = 2;
static volatile int64_t x983 = INT64_MAX;
uint64_t x984 = 328573192653LLU;
volatile uint8_t x1141 = 1U;
volatile int64_t x1227 = INT64_MIN;
static int64_t x1383 = INT64_MIN;
volatile int32_t x1384 = INT32_MAX;
volatile int64_t t22 = 4109717218LL;
int16_t x1457 = 209;
volatile uint16_t x1459 = 6612U;
int16_t x1506 = 5;
uint8_t x1507 = 5U;
uint16_t x1586 = 7U;
static uint32_t t29 = 292865U;
uint8_t x1776 = 9U;
uint32_t x1827 = 479U;
static int32_t x1908 = -1;
uint8_t x1962 = 18U;
static int64_t t34 = -1266565863635660164LL;
uint16_t x2018 = 10U;
uint64_t x2020 = UINT64_MAX;
volatile uint64_t t36 = 20LLU;
static int16_t x2060 = INT16_MIN;
volatile uint64_t t38 = 2191LLU;
static volatile int32_t x2424 = 227506846;
int8_t x2499 = INT8_MIN;
uint32_t t40 = 22U;
int64_t x2551 = 8LL;
int32_t x2624 = 7000155;
static volatile uint8_t x2641 = UINT8_MAX;
uint16_t x2694 = 1U;
static int64_t t45 = 151LL;
volatile int8_t x2704 = -2;
uint16_t x2730 = 1U;
int16_t x2790 = 1;
static int64_t x2792 = INT64_MIN;
int32_t x2893 = 18324;
volatile int16_t x3016 = INT16_MIN;
uint64_t x3276 = 3943475122912LLU;
uint64_t t58 = 32372360LLU;
int8_t x3300 = INT8_MAX;
volatile uint32_t t59 = 226596862U;
static uint8_t x3322 = 31U;
static int8_t x3323 = -1;
uint32_t x3432 = UINT32_MAX;
uint8_t x3439 = 8U;
static volatile uint64_t t63 = 7LLU;
int8_t x3531 = INT8_MIN;
int64_t x3532 = INT64_MIN;
static uint8_t x3654 = 29U;
volatile uint8_t x3674 = 0U;
static int8_t x3826 = 1;
static uint64_t t70 = 8751686028845LLU;
volatile uint32_t t71 = 847U;
int8_t x3870 = 5;
int32_t x3871 = INT32_MIN;
int32_t x3872 = 19;
uint16_t x4036 = 502U;
volatile uint32_t x4105 = 40U;
int8_t x4125 = 15;
volatile int32_t x4126 = 7;
volatile uint8_t x4146 = 9U;
int8_t x4148 = -1;
int64_t x4189 = INT64_MAX;
int16_t x4191 = 857;
int32_t x4327 = -108225665;
uint32_t x4357 = UINT32_MAX;
int8_t x4358 = 1;
volatile int8_t x4360 = INT8_MAX;
uint64_t x4453 = 239514477373LLU;
uint64_t x4455 = 114LLU;
static volatile uint32_t x4519 = 5U;
static volatile uint8_t x4561 = 61U;
volatile int32_t x4563 = -565580603;
volatile uint32_t x4564 = 223789313U;
int8_t x4628 = INT8_MIN;
uint16_t x4729 = 13U;
int64_t x4731 = -1LL;
int64_t t91 = -370427377395940LL;
uint16_t x4781 = 27770U;
int8_t x4782 = 4;
static uint64_t t93 = 229809943LLU;
uint8_t x4862 = 21U;
int16_t x4883 = INT16_MIN;
int8_t x5045 = 7;
static uint8_t x5048 = 0U;
int32_t t96 = -20394783;
int64_t t97 = -88435710229751322LL;
int32_t x5079 = 210441;
static volatile int16_t x5183 = -6;
static int8_t x5184 = -1;


void f0(void) {
	uint64_t x13 = 188070274977LLU;
	int64_t x15 = INT64_MIN;
	static int64_t x16 = -489684389LL;
	uint64_t t0 = 3192827890087567LLU;

	t0 = ((x13>>x14)^(x15|x16));

	if (t0 != 18446744050555655855LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x33 = INT64_MAX;
	int8_t x34 = 1;
	uint8_t x36 = 120U;
	volatile uint64_t t1 = 107740331973474LLU;

	t1 = ((x33>>x34)^(x35|x36));

	if (t1 != 4611686018427385218LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x62 = 3U;
	int64_t x63 = INT64_MIN;
	int64_t x64 = INT64_MAX;
	int64_t t2 = -6821062LL;

	t2 = ((x61>>x62)^(x63|x64));

	if (t2 != -8LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x85 = 121898471LLU;
	int16_t x86 = 4;
	static int64_t x87 = -1LL;
	int64_t x88 = -5312606LL;
	volatile uint64_t t3 = 1209098627638193650LLU;

	t3 = ((x85>>x86)^(x87|x88));

	if (t3 != 18446744073701932961LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x189 = INT64_MAX;
	int32_t x191 = -3931;
	uint16_t x192 = UINT16_MAX;
	volatile int64_t t4 = 432525719392503677LL;

	t4 = ((x189>>x190)^(x191|x192));

	if (t4 != -4611686018427387904LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x237 = UINT32_MAX;
	int16_t x239 = -1;

	t5 = ((x237>>x238)^(x239|x240));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x257 = 0U;
	static int32_t x259 = -1;
	static uint64_t x260 = UINT64_MAX;
	uint64_t t6 = UINT64_MAX;

	t6 = ((x257>>x258)^(x259|x260));

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x365 = 3100039699582LLU;
	uint32_t x366 = 1U;
	volatile uint32_t x367 = UINT32_MAX;
	volatile int16_t x368 = -89;
	uint64_t t7 = 162880786554527LLU;

	t7 = ((x365>>x366)^(x367|x368));

	if (t7 != 1546651570624LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x441 = 787433LLU;
	volatile uint16_t x442 = 10U;
	static int16_t x443 = 6693;
	static volatile uint64_t t8 = 3177663801LLU;

	t8 = ((x441>>x442)^(x443|x444));

	if (t8 != 18446744073709550847LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x533 = 11U;
	uint8_t x534 = 0U;
	int8_t x535 = INT8_MAX;
	uint16_t x536 = 59U;
	int32_t t9 = 236798;

	t9 = ((x533>>x534)^(x535|x536));

	if (t9 != 116) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x630 = 2U;
	uint16_t x631 = 32305U;
	int32_t x632 = INT32_MIN;
	volatile int32_t t10 = -114353252;

	t10 = ((x629>>x630)^(x631|x632));

	if (t10 != -2147451343) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int64_t x633 = 2099488995285944207LL;
	static uint32_t x635 = 22U;
	uint64_t x636 = UINT64_MAX;

	t11 = ((x633>>x634)^(x635|x636));

	if (t11 != 18446744073709074247LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x657 = UINT8_MAX;
	int16_t x658 = 0;
	volatile int32_t x659 = INT32_MIN;
	static volatile int32_t x660 = -41875;

	t12 = ((x657>>x658)^(x659|x660));

	if (t12 != -41838) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x665 = 207644707;
	static uint16_t x666 = 1U;
	uint32_t x667 = 381909U;
	volatile uint64_t t13 = 0LLU;

	t13 = ((x665>>x666)^(x667|x668));

	if (t13 != 104196078LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x697 = 8;
	static uint64_t x699 = UINT64_MAX;
	uint64_t x700 = UINT64_MAX;
	static volatile uint64_t t14 = 28958438LLU;

	t14 = ((x697>>x698)^(x699|x700));

	if (t14 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x933 = 295145U;
	int16_t x934 = 21;
	int8_t x935 = 1;
	static uint16_t x936 = 226U;
	static volatile uint32_t t15 = 1U;

	t15 = ((x933>>x934)^(x935|x936));

	if (t15 != 227U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x937 = INT64_MAX;
	volatile uint64_t x939 = 3234404570506256LLU;
	uint16_t x940 = UINT16_MAX;

	t16 = ((x937>>x938)^(x939|x940));

	if (t16 != 3234404570554368LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x982 = 27U;
	volatile uint64_t t17 = 516043769LLU;

	t17 = ((x981>>x982)^(x983|x984));

	if (t17 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x1021 = INT64_MAX;
	uint16_t x1022 = 20U;
	int16_t x1023 = INT16_MAX;
	int64_t x1024 = -52814914454285LL;
	volatile int64_t t18 = 3LL;

	t18 = ((x1021>>x1022)^(x1023|x1024));

	if (t18 != -61534294835200LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x1142 = 21U;
	int64_t x1143 = -1LL;
	uint8_t x1144 = 19U;
	volatile int64_t t19 = -61180900548LL;

	t19 = ((x1141>>x1142)^(x1143|x1144));

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1225 = UINT8_MAX;
	static int32_t x1226 = 16;
	volatile int16_t x1228 = INT16_MIN;
	volatile int64_t t20 = -50850956504LL;

	t20 = ((x1225>>x1226)^(x1227|x1228));

	if (t20 != -32768LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x1333 = INT64_MAX;
	uint16_t x1334 = 1U;
	static uint64_t x1335 = UINT64_MAX;
	uint64_t x1336 = UINT64_MAX;
	volatile uint64_t t21 = 8374667679000801LLU;

	t21 = ((x1333>>x1334)^(x1335|x1336));

	if (t21 != 13835058055282163712LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x1381 = 5;
	static int16_t x1382 = 0;

	t22 = ((x1381>>x1382)^(x1383|x1384));

	if (t22 != -9223372034707292166LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x1409 = UINT64_MAX;
	volatile int8_t x1410 = 1;
	static int16_t x1411 = 957;
	uint16_t x1412 = UINT16_MAX;
	volatile uint64_t t23 = 825316784LLU;

	t23 = ((x1409>>x1410)^(x1411|x1412));

	if (t23 != 9223372036854710272LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x1458 = 0;
	int8_t x1460 = INT8_MAX;
	volatile int32_t t24 = -286239;

	t24 = ((x1457>>x1458)^(x1459|x1460));

	if (t24 != 6446) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1505 = 99532251941LL;
	static int32_t x1508 = INT32_MAX;
	int64_t t25 = 319992417326910542LL;

	t25 = ((x1505>>x1506)^(x1507|x1508));

	if (t25 != 3332068070LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1545 = INT32_MAX;
	uint16_t x1546 = 0U;
	int64_t x1547 = INT64_MIN;
	int64_t x1548 = -1LL;
	volatile int64_t t26 = -2LL;

	t26 = ((x1545>>x1546)^(x1547|x1548));

	if (t26 != -2147483648LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1585 = INT16_MAX;
	int64_t x1587 = 679321354149258LL;
	volatile int32_t x1588 = INT32_MIN;
	static int64_t t27 = 3199591LL;

	t27 = ((x1585>>x1586)^(x1587|x1588));

	if (t27 != -738157195LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1605 = 2175;
	uint16_t x1606 = 23U;
	static int64_t x1607 = -1LL;
	int32_t x1608 = INT32_MAX;
	int64_t t28 = -4464528161289604LL;

	t28 = ((x1605>>x1606)^(x1607|x1608));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x1677 = 13287U;
	int8_t x1678 = 2;
	uint8_t x1679 = 1U;
	volatile uint16_t x1680 = 1U;

	t29 = ((x1677>>x1678)^(x1679|x1680));

	if (t29 != 3320U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1701 = 2025933668156936954LL;
	int8_t x1702 = 0;
	int64_t x1703 = -1LL;
	int64_t x1704 = 2LL;
	int64_t t30 = -64236793689385559LL;

	t30 = ((x1701>>x1702)^(x1703|x1704));

	if (t30 != -2025933668156936955LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1773 = INT16_MAX;
	int16_t x1774 = 0;
	volatile uint64_t x1775 = 9156677086054994LLU;
	uint64_t t31 = 80863094594072LLU;

	t31 = ((x1773>>x1774)^(x1775|x1776));

	if (t31 != 9156677086082468LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1825 = 118LLU;
	int8_t x1826 = 46;
	int32_t x1828 = 175;
	static volatile uint64_t t32 = 473871LLU;

	t32 = ((x1825>>x1826)^(x1827|x1828));

	if (t32 != 511LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x1905 = INT64_MAX;
	uint8_t x1906 = 2U;
	uint16_t x1907 = 793U;
	static int64_t t33 = -589326387446108839LL;

	t33 = ((x1905>>x1906)^(x1907|x1908));

	if (t33 != -2305843009213693952LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1961 = INT8_MAX;
	static int16_t x1963 = 12;
	int64_t x1964 = -11878LL;

	t34 = ((x1961>>x1962)^(x1963|x1964));

	if (t34 != -11874LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x2005 = 13740501;
	int32_t x2006 = 1;
	volatile int16_t x2007 = INT16_MIN;
	static int32_t x2008 = INT32_MAX;
	int32_t t35 = -1;

	t35 = ((x2005>>x2006)^(x2007|x2008));

	if (t35 != -6870251) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x2017 = INT64_MAX;
	static int16_t x2019 = INT16_MIN;

	t36 = ((x2017>>x2018)^(x2019|x2020));

	if (t36 != 18437736874454810624LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x2057 = 2885LLU;
	static int8_t x2058 = 3;
	volatile int8_t x2059 = INT8_MAX;
	volatile uint64_t t37 = 13LLU;

	t37 = ((x2057>>x2058)^(x2059|x2060));

	if (t37 != 18446744073709519127LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x2161 = 32357296475007LLU;
	int8_t x2162 = 1;
	int8_t x2163 = INT8_MIN;
	int16_t x2164 = INT16_MIN;

	t38 = ((x2161>>x2162)^(x2163|x2164));

	if (t38 != 18446727895061314111LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x2421 = 18U;
	static int16_t x2422 = 0;
	int32_t x2423 = 165702772;
	volatile uint32_t t39 = 1669U;

	t39 = ((x2421>>x2422)^(x2423|x2424));

	if (t39 != 233799404U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x2497 = 3;
	static int8_t x2498 = 30;
	static uint32_t x2500 = 1644U;

	t40 = ((x2497>>x2498)^(x2499|x2500));

	if (t40 != 4294967276U) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x2545 = 24641U;
	int16_t x2546 = 0;
	volatile uint16_t x2547 = UINT16_MAX;
	static int64_t x2548 = -1LL;
	volatile int64_t t41 = 724921LL;

	t41 = ((x2545>>x2546)^(x2547|x2548));

	if (t41 != -24642LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x2549 = 827317924010622LL;
	static uint8_t x2550 = 12U;
	volatile uint8_t x2552 = 1U;
	int64_t t42 = -30499LL;

	t42 = ((x2549>>x2550)^(x2551|x2552));

	if (t42 != 201981915048LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x2621 = UINT64_MAX;
	static volatile int64_t x2622 = 0LL;
	uint64_t x2623 = 447242332764LLU;
	static volatile uint64_t t43 = 33LLU;

	t43 = ((x2621>>x2622)^(x2623|x2624));

	if (t43 != 18446743626462856608LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x2642 = 1;
	uint16_t x2643 = 4U;
	int8_t x2644 = 0;
	int32_t t44 = -13490606;

	t44 = ((x2641>>x2642)^(x2643|x2644));

	if (t44 != 123) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x2693 = INT32_MAX;
	static uint8_t x2695 = UINT8_MAX;
	int64_t x2696 = -3903LL;

	t45 = ((x2693>>x2694)^(x2695|x2696));

	if (t45 != -1073737984LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x2701 = 3;
	volatile int32_t x2702 = 10;
	static uint8_t x2703 = 1U;
	int32_t t46 = 0;

	t46 = ((x2701>>x2702)^(x2703|x2704));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x2729 = 59510156711548LL;
	int16_t x2731 = INT16_MIN;
	int16_t x2732 = -3584;
	static volatile int64_t t47 = -16311140LL;

	t47 = ((x2729>>x2730)^(x2731|x2732));

	if (t47 != -29755078354626LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint64_t x2789 = UINT64_MAX;
	static uint64_t x2791 = 7609044LLU;
	uint64_t t48 = 1LLU;

	t48 = ((x2789>>x2790)^(x2791|x2792));

	if (t48 != 18446744073701942571LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x2793 = 977483844700LL;
	volatile int32_t x2794 = 1;
	volatile int16_t x2795 = -706;
	int64_t x2796 = -1LL;
	static int64_t t49 = -593398LL;

	t49 = ((x2793>>x2794)^(x2795|x2796));

	if (t49 != -488741922351LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x2841 = UINT32_MAX;
	uint8_t x2842 = 1U;
	static volatile uint16_t x2843 = UINT16_MAX;
	uint16_t x2844 = 1645U;
	uint32_t t50 = 196U;

	t50 = ((x2841>>x2842)^(x2843|x2844));

	if (t50 != 2147418112U) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x2881 = 113481U;
	volatile uint8_t x2882 = 0U;
	int8_t x2883 = -1;
	volatile int32_t x2884 = -2043;
	volatile uint32_t t51 = 1073395679U;

	t51 = ((x2881>>x2882)^(x2883|x2884));

	if (t51 != 4294853814U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x2894 = 12;
	int64_t x2895 = -1LL;
	uint16_t x2896 = 2844U;
	volatile int64_t t52 = 131402009425051617LL;

	t52 = ((x2893>>x2894)^(x2895|x2896));

	if (t52 != -5LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int8_t x2953 = INT8_MAX;
	static volatile uint16_t x2954 = 13U;
	volatile int16_t x2955 = INT16_MIN;
	int8_t x2956 = INT8_MIN;
	int32_t t53 = -4;

	t53 = ((x2953>>x2954)^(x2955|x2956));

	if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x3005 = INT8_MAX;
	uint8_t x3006 = 11U;
	volatile uint8_t x3007 = 1U;
	int8_t x3008 = INT8_MIN;
	volatile int32_t t54 = 6;

	t54 = ((x3005>>x3006)^(x3007|x3008));

	if (t54 != -127) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x3013 = INT16_MAX;
	int8_t x3014 = 3;
	int32_t x3015 = INT32_MIN;
	volatile int32_t t55 = 12361;

	t55 = ((x3013>>x3014)^(x3015|x3016));

	if (t55 != -28673) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint8_t x3237 = 30U;
	static int8_t x3238 = 1;
	volatile int32_t x3239 = INT32_MIN;
	int32_t x3240 = 13;
	volatile int32_t t56 = 90;

	t56 = ((x3237>>x3238)^(x3239|x3240));

	if (t56 != -2147483646) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x3253 = INT64_MAX;
	int8_t x3254 = 1;
	static volatile int64_t x3255 = INT64_MIN;
	int16_t x3256 = -8;
	volatile int64_t t57 = -5650234LL;

	t57 = ((x3253>>x3254)^(x3255|x3256));

	if (t57 != -4611686018427387897LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x3273 = 7352151561941115188LLU;
	int32_t x3274 = 17;
	int64_t x3275 = INT64_MIN;

	t58 = ((x3273>>x3274)^(x3275|x3276));

	if (t58 != 9223425441050470090LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x3297 = UINT32_MAX;
	volatile uint64_t x3298 = 10LLU;
	int8_t x3299 = INT8_MIN;

	t59 = ((x3297>>x3298)^(x3299|x3300));

	if (t59 != 4290772992U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x3321 = INT32_MAX;
	int32_t x3324 = -1;
	int32_t t60 = -148086046;

	t60 = ((x3321>>x3322)^(x3323|x3324));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x3429 = 1;
	int32_t x3430 = 27;
	static volatile int64_t x3431 = -1LL;
	int64_t t61 = 29256022255LL;

	t61 = ((x3429>>x3430)^(x3431|x3432));

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x3437 = UINT64_MAX;
	uint16_t x3438 = 1U;
	int64_t x3440 = INT64_MIN;
	volatile uint64_t t62 = 4308575667972LLU;

	t62 = ((x3437>>x3438)^(x3439|x3440));

	if (t62 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x3445 = 11555U;
	int16_t x3446 = 1;
	volatile int16_t x3447 = 1151;
	uint64_t x3448 = 5442926645463LLU;

	t63 = ((x3445>>x3446)^(x3447|x3448));

	if (t63 != 5442926641774LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x3529 = 958033974471LLU;
	int8_t x3530 = 13;
	volatile uint64_t t64 = 28805LLU;

	t64 = ((x3529>>x3530)^(x3531|x3532));

	if (t64 != 18446744073592604082LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x3633 = INT8_MAX;
	uint8_t x3634 = 5U;
	static volatile int32_t x3635 = -1;
	uint32_t x3636 = UINT32_MAX;
	volatile uint32_t t65 = 24984U;

	t65 = ((x3633>>x3634)^(x3635|x3636));

	if (t65 != 4294967292U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x3653 = INT64_MAX;
	static uint16_t x3655 = UINT16_MAX;
	static volatile int32_t x3656 = INT32_MAX;
	volatile int64_t t66 = -295981848LL;

	t66 = ((x3653>>x3654)^(x3655|x3656));

	if (t66 != 15032385536LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x3673 = 62U;
	int16_t x3675 = INT16_MIN;
	static volatile int64_t x3676 = -4002928LL;
	static volatile int64_t t67 = -268995625843LL;

	t67 = ((x3673>>x3674)^(x3675|x3676));

	if (t67 != -5202LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x3717 = UINT16_MAX;
	uint16_t x3718 = 1U;
	static volatile int8_t x3719 = INT8_MIN;
	static int16_t x3720 = -1;
	int32_t t68 = 20;

	t68 = ((x3717>>x3718)^(x3719|x3720));

	if (t68 != -32768) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x3721 = INT16_MAX;
	int16_t x3722 = 7;
	uint64_t x3723 = 1037410LLU;
	static int64_t x3724 = 0LL;
	volatile uint64_t t69 = 57591908630440LLU;

	t69 = ((x3721>>x3722)^(x3723|x3724));

	if (t69 != 1037469LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x3825 = 8465040895996LLU;
	static uint32_t x3827 = UINT32_MAX;
	int8_t x3828 = 25;

	t70 = ((x3825>>x3826)^(x3827|x3828));

	if (t70 != 4232860092417LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x3841 = 737353U;
	int8_t x3842 = 0;
	int8_t x3843 = INT8_MAX;
	static int32_t x3844 = -1;

	t71 = ((x3841>>x3842)^(x3843|x3844));

	if (t71 != 4294229942U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x3869 = 3;
	volatile int32_t t72 = 5;

	t72 = ((x3869>>x3870)^(x3871|x3872));

	if (t72 != -2147483629) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x3897 = 899U;
	int16_t x3898 = 0;
	uint32_t x3899 = 32U;
	uint8_t x3900 = UINT8_MAX;
	volatile uint32_t t73 = 1542686U;

	t73 = ((x3897>>x3898)^(x3899|x3900));

	if (t73 != 892U) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x4025 = 5U;
	volatile uint8_t x4026 = 27U;
	volatile uint16_t x4027 = UINT16_MAX;
	static int32_t x4028 = INT32_MIN;
	int32_t t74 = -55266492;

	t74 = ((x4025>>x4026)^(x4027|x4028));

	if (t74 != -2147418113) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x4033 = 51434478LLU;
	uint16_t x4034 = 4U;
	int8_t x4035 = 1;
	uint64_t t75 = 3955552LLU;

	t75 = ((x4033>>x4034)^(x4035|x4036));

	if (t75 != 3214537LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x4097 = 15834176;
	int16_t x4098 = 5;
	uint32_t x4099 = 24U;
	int64_t x4100 = INT64_MAX;
	static volatile int64_t t76 = -3923504LL;

	t76 = ((x4097>>x4098)^(x4099|x4100));

	if (t76 != 9223372036854280989LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x4106 = 7U;
	volatile int32_t x4107 = 152;
	int64_t x4108 = 9060LL;
	static volatile int64_t t77 = -3337289518829LL;

	t77 = ((x4105>>x4106)^(x4107|x4108));

	if (t77 != 9212LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x4127 = INT64_MIN;
	static volatile int32_t x4128 = -1;
	volatile int64_t t78 = 149594LL;

	t78 = ((x4125>>x4126)^(x4127|x4128));

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x4145 = 1;
	int32_t x4147 = INT32_MAX;
	volatile int32_t t79 = -49631991;

	t79 = ((x4145>>x4146)^(x4147|x4148));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x4190 = 16U;
	int16_t x4192 = INT16_MIN;
	volatile int64_t t80 = 9797857148LL;

	t80 = ((x4189>>x4190)^(x4191|x4192));

	if (t80 != -140737488323418LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x4193 = 16545825497158468LLU;
	uint64_t x4194 = 0LLU;
	int16_t x4195 = -2735;
	static int16_t x4196 = -3045;
	uint64_t t81 = 5811801LLU;

	t81 = ((x4193>>x4194)^(x4195|x4196));

	if (t81 != 18430198248212391455LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int16_t x4261 = INT16_MAX;
	static int16_t x4262 = 29;
	uint8_t x4263 = UINT8_MAX;
	volatile uint32_t x4264 = 1326095U;
	uint32_t t82 = 47U;

	t82 = ((x4261>>x4262)^(x4263|x4264));

	if (t82 != 1326335U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x4325 = 1;
	uint8_t x4326 = 1U;
	uint8_t x4328 = UINT8_MAX;
	int32_t t83 = -75335;

	t83 = ((x4325>>x4326)^(x4327|x4328));

	if (t83 != -108225537) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x4359 = -11;
	volatile uint32_t t84 = 79U;

	t84 = ((x4357>>x4358)^(x4359|x4360));

	if (t84 != 2147483648U) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x4454 = 0;
	static int32_t x4456 = 101304713;
	volatile uint64_t t85 = 37442656745297907LLU;

	t85 = ((x4453>>x4454)^(x4455|x4456));

	if (t85 != 239480416966LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x4517 = 22089105U;
	int16_t x4518 = 13;
	static int16_t x4520 = INT16_MIN;
	uint32_t t86 = 459U;

	t86 = ((x4517>>x4518)^(x4519|x4520));

	if (t86 != 4294937229U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x4562 = 1U;
	volatile uint32_t t87 = 174069386U;

	t87 = ((x4561>>x4562)^(x4563|x4564));

	if (t87 != 3747605979U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x4625 = 9;
	uint16_t x4626 = 11U;
	int64_t x4627 = INT64_MIN;
	volatile int64_t t88 = 3190231530LL;

	t88 = ((x4625>>x4626)^(x4627|x4628));

	if (t88 != -128LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x4633 = INT32_MAX;
	uint8_t x4634 = 29U;
	static int8_t x4635 = INT8_MIN;
	static volatile int16_t x4636 = INT16_MIN;
	int32_t t89 = -1;

	t89 = ((x4633>>x4634)^(x4635|x4636));

	if (t89 != -125) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x4653 = 575;
	volatile int8_t x4654 = 7;
	static uint64_t x4655 = 4093LLU;
	uint32_t x4656 = UINT32_MAX;
	static uint64_t t90 = 58LLU;

	t90 = ((x4653>>x4654)^(x4655|x4656));

	if (t90 != 4294967291LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x4730 = 22;
	volatile uint8_t x4732 = 56U;

	t91 = ((x4729>>x4730)^(x4731|x4732));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x4783 = -1LL;
	uint32_t x4784 = 1U;
	volatile int64_t t92 = 252078LL;

	t92 = ((x4781>>x4782)^(x4783|x4784));

	if (t92 != -1736LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x4817 = 5070626006LLU;
	uint16_t x4818 = 8U;
	uint64_t x4819 = 26LLU;
	static volatile uint32_t x4820 = 55268821U;

	t93 = ((x4817>>x4818)^(x4819|x4820));

	if (t93 != 40201795LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x4861 = 129LLU;
	static int32_t x4863 = 3053813;
	static int16_t x4864 = -1;
	volatile uint64_t t94 = UINT64_MAX;

	t94 = ((x4861>>x4862)^(x4863|x4864));

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x4881 = UINT16_MAX;
	uint32_t x4882 = 11U;
	static int8_t x4884 = 2;
	volatile int32_t t95 = -202366169;

	t95 = ((x4881>>x4882)^(x4883|x4884));

	if (t95 != -32739) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x5046 = 2U;
	volatile uint8_t x5047 = 3U;

	t96 = ((x5045>>x5046)^(x5047|x5048));

	if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x5061 = 7U;
	volatile uint16_t x5062 = 3U;
	int64_t x5063 = -1LL;
	int32_t x5064 = -8125;

	t97 = ((x5061>>x5062)^(x5063|x5064));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x5077 = UINT16_MAX;
	uint8_t x5078 = 1U;
	int16_t x5080 = INT16_MIN;
	static volatile int32_t t98 = 2373941;

	t98 = ((x5077>>x5078)^(x5079|x5080));

	if (t98 != -13834) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x5181 = 13U;
	static uint8_t x5182 = 1U;
	static int32_t t99 = 65446;

	t99 = ((x5181>>x5182)^(x5183|x5184));

	if (t99 != -7) { NG(); } else { ; }
	
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

