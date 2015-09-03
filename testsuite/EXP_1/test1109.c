#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x92 = 1647;
volatile uint64_t t2 = 27976LLU;
static int8_t x407 = -1;
uint32_t t4 = 2727U;
int32_t t5 = 4;
uint8_t x470 = 1U;
volatile uint8_t x667 = UINT8_MAX;
static volatile int8_t x668 = -3;
uint8_t x792 = 3U;
volatile int32_t t14 = -181265711;
static uint8_t x1144 = UINT8_MAX;
static int32_t t17 = 608271;
int16_t x1243 = 798;
uint64_t x1244 = 54952251780702844LLU;
volatile int32_t x1253 = INT32_MAX;
uint16_t x1255 = UINT16_MAX;
int16_t x1372 = INT16_MAX;
int32_t t22 = 4088939;
static int16_t x1374 = 0;
int64_t x1458 = 0LL;
int16_t x1466 = 1;
int8_t x1468 = -1;
uint32_t x1473 = 673886U;
static volatile int16_t x1475 = INT16_MAX;
volatile int32_t t26 = 198552;
static int32_t t27 = -4414;
int32_t x1605 = 50;
uint8_t x1629 = UINT8_MAX;
volatile int16_t x1631 = INT16_MIN;
int32_t x1657 = INT32_MAX;
static int32_t t30 = -2745760;
uint32_t x1793 = 33099U;
uint8_t x1794 = 1U;
volatile uint8_t x1822 = 3U;
int32_t x1841 = 1;
uint32_t x1890 = 0U;
int32_t t34 = 1;
volatile int64_t x2004 = -1LL;
static int32_t t37 = 818243;
uint32_t x2108 = 776692U;
uint8_t x2112 = 118U;
volatile int8_t x2130 = 1;
uint32_t x2131 = 1417U;
uint16_t x2149 = 27059U;
static int8_t x2154 = 23;
volatile int16_t x2155 = INT16_MIN;
volatile int64_t x2379 = INT64_MIN;
volatile int8_t x2555 = -1;
volatile int32_t t47 = -80366;
uint32_t x2614 = 21U;
uint32_t x2616 = 70U;
int64_t x2732 = INT64_MIN;
int32_t t51 = -9;
static volatile int8_t x2828 = 3;
uint64_t x2986 = 5LLU;
uint64_t x2988 = UINT64_MAX;
volatile int32_t x3219 = INT32_MIN;
int32_t t59 = 52174616;
static int32_t x3388 = INT32_MAX;
uint32_t x3469 = 54595U;
int8_t x3470 = 13;
static volatile uint32_t t63 = 39U;
static volatile int64_t x3617 = INT64_MAX;
static volatile int64_t x3641 = 4423LL;
int8_t x3642 = 9;
static uint64_t x3825 = UINT64_MAX;
static int32_t x3827 = INT32_MIN;
uint32_t x3859 = 8U;
volatile int64_t x3976 = 2237318836LL;
int16_t x3997 = INT16_MAX;
volatile uint16_t x4041 = 3U;
uint16_t x4042 = 0U;
uint8_t x4385 = UINT8_MAX;
uint8_t x4386 = 31U;
static volatile int16_t x4387 = INT16_MAX;
int32_t x4765 = INT32_MAX;
uint64_t x4883 = UINT64_MAX;
int8_t x4965 = 11;
volatile int32_t x5000 = -149188778;
volatile uint64_t x5040 = UINT64_MAX;
static volatile int32_t t89 = 101442440;
uint16_t x5085 = 3533U;
int32_t x5087 = INT32_MIN;
uint64_t x5113 = 92LLU;
int16_t x5279 = -1;
volatile uint64_t x5339 = 2842686434595630LLU;
uint16_t x5373 = UINT16_MAX;
int32_t t97 = -1;
uint64_t x5416 = 2277568LLU;


void f0(void) {
	volatile uint32_t x77 = UINT32_MAX;
	uint8_t x78 = 3U;
	int16_t x79 = INT16_MIN;
	uint64_t x80 = 4176647892052671LLU;
	static uint64_t t0 = 7876234173LLU;

	t0 = (((x77>>x78)==x79)/x80);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x89 = INT16_MAX;
	volatile int8_t x90 = 5;
	uint32_t x91 = 2374945U;
	int32_t t1 = -3387;

	t1 = (((x89>>x90)==x91)/x92);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x237 = INT32_MAX;
	uint16_t x238 = 15U;
	int32_t x239 = -1;
	volatile uint64_t x240 = 307426019888719LLU;

	t2 = (((x237>>x238)==x239)/x240);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x317 = 0U;
	volatile int16_t x318 = 2;
	int32_t x319 = 112710;
	static int32_t x320 = -370414950;
	static volatile int32_t t3 = 2;

	t3 = (((x317>>x318)==x319)/x320);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x405 = 4;
	static volatile int16_t x406 = 1;
	static uint32_t x408 = UINT32_MAX;

	t4 = (((x405>>x406)==x407)/x408);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x417 = INT16_MAX;
	uint16_t x418 = 22U;
	int64_t x419 = INT64_MIN;
	static uint8_t x420 = 11U;

	t5 = (((x417>>x418)==x419)/x420);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x469 = UINT16_MAX;
	static uint64_t x471 = UINT64_MAX;
	volatile int32_t x472 = -1;
	static volatile int32_t t6 = -7;

	t6 = (((x469>>x470)==x471)/x472);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x505 = 3239267285LL;
	uint8_t x506 = 17U;
	int32_t x507 = INT32_MIN;
	uint64_t x508 = 3433395587585LLU;
	uint64_t t7 = 44379562244491LLU;

	t7 = (((x505>>x506)==x507)/x508);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x509 = UINT32_MAX;
	uint64_t x510 = 16LLU;
	uint16_t x511 = 2186U;
	int64_t x512 = INT64_MIN;
	volatile int64_t t8 = 28LL;

	t8 = (((x509>>x510)==x511)/x512);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x621 = 52966U;
	static int8_t x622 = 1;
	int64_t x623 = INT64_MIN;
	uint8_t x624 = UINT8_MAX;
	int32_t t9 = 3120016;

	t9 = (((x621>>x622)==x623)/x624);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x633 = 12U;
	int16_t x634 = 7;
	int16_t x635 = -7133;
	uint64_t x636 = 185863795046404879LLU;
	static volatile uint64_t t10 = 151759734665239LLU;

	t10 = (((x633>>x634)==x635)/x636);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x665 = 11U;
	int32_t x666 = 1;
	volatile int32_t t11 = 18;

	t11 = (((x665>>x666)==x667)/x668);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x789 = INT8_MAX;
	volatile uint16_t x790 = 7U;
	int16_t x791 = -1;
	static volatile int32_t t12 = 276728016;

	t12 = (((x789>>x790)==x791)/x792);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x869 = INT64_MAX;
	uint8_t x870 = 1U;
	int8_t x871 = INT8_MAX;
	int16_t x872 = 1;
	volatile int32_t t13 = 820346057;

	t13 = (((x869>>x870)==x871)/x872);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x1009 = INT16_MAX;
	int64_t x1010 = 22LL;
	volatile int8_t x1011 = -1;
	volatile int8_t x1012 = INT8_MIN;

	t14 = (((x1009>>x1010)==x1011)/x1012);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x1125 = 451626129U;
	volatile int32_t x1126 = 12;
	int64_t x1127 = 418550409114LL;
	volatile int16_t x1128 = INT16_MIN;
	int32_t t15 = 523194080;

	t15 = (((x1125>>x1126)==x1127)/x1128);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x1141 = 0U;
	uint32_t x1142 = 5U;
	int8_t x1143 = INT8_MIN;
	static int32_t t16 = 11;

	t16 = (((x1141>>x1142)==x1143)/x1144);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x1237 = 6019385LLU;
	uint64_t x1238 = 12LLU;
	uint16_t x1239 = UINT16_MAX;
	volatile uint8_t x1240 = 97U;

	t17 = (((x1237>>x1238)==x1239)/x1240);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int32_t x1241 = 449;
	static volatile uint32_t x1242 = 1U;
	volatile uint64_t t18 = 380699976LLU;

	t18 = (((x1241>>x1242)==x1243)/x1244);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x1254 = 10;
	volatile int64_t x1256 = INT64_MAX;
	int64_t t19 = -5268388LL;

	t19 = (((x1253>>x1254)==x1255)/x1256);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x1273 = 2U;
	uint8_t x1274 = 7U;
	uint8_t x1275 = 93U;
	volatile uint32_t x1276 = 110U;
	uint32_t t20 = 321193U;

	t20 = (((x1273>>x1274)==x1275)/x1276);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x1285 = 816U;
	uint32_t x1286 = 0U;
	uint64_t x1287 = 7383705LLU;
	int64_t x1288 = 246498791704LL;
	volatile int64_t t21 = 74388LL;

	t21 = (((x1285>>x1286)==x1287)/x1288);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x1369 = 1480LLU;
	int8_t x1370 = 1;
	static int64_t x1371 = INT64_MIN;

	t22 = (((x1369>>x1370)==x1371)/x1372);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x1373 = 20305391LLU;
	uint64_t x1375 = UINT64_MAX;
	int16_t x1376 = INT16_MIN;
	volatile int32_t t23 = -256105;

	t23 = (((x1373>>x1374)==x1375)/x1376);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1457 = INT8_MAX;
	uint64_t x1459 = 3LLU;
	static volatile uint8_t x1460 = 31U;
	int32_t t24 = -14382;

	t24 = (((x1457>>x1458)==x1459)/x1460);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x1465 = UINT64_MAX;
	int64_t x1467 = 57829LL;
	volatile int32_t t25 = -843;

	t25 = (((x1465>>x1466)==x1467)/x1468);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1474 = 1;
	static volatile uint8_t x1476 = UINT8_MAX;

	t26 = (((x1473>>x1474)==x1475)/x1476);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1601 = 4U;
	uint8_t x1602 = 1U;
	static int32_t x1603 = 27;
	uint8_t x1604 = UINT8_MAX;

	t27 = (((x1601>>x1602)==x1603)/x1604);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x1606 = 15U;
	int64_t x1607 = 247647028012LL;
	static int16_t x1608 = INT16_MIN;
	volatile int32_t t28 = -1016;

	t28 = (((x1605>>x1606)==x1607)/x1608);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x1630 = 19U;
	uint16_t x1632 = UINT16_MAX;
	static int32_t t29 = -16174897;

	t29 = (((x1629>>x1630)==x1631)/x1632);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1658 = 2LL;
	int64_t x1659 = INT64_MIN;
	int8_t x1660 = -3;

	t30 = (((x1657>>x1658)==x1659)/x1660);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1795 = INT64_MIN;
	volatile int8_t x1796 = -6;
	int32_t t31 = -1537673;

	t31 = (((x1793>>x1794)==x1795)/x1796);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x1821 = 2;
	int64_t x1823 = -291LL;
	int64_t x1824 = INT64_MIN;
	int64_t t32 = 239271920754LL;

	t32 = (((x1821>>x1822)==x1823)/x1824);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x1842 = 1U;
	int8_t x1843 = -1;
	static int16_t x1844 = INT16_MIN;
	int32_t t33 = 6879552;

	t33 = (((x1841>>x1842)==x1843)/x1844);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1889 = 206114925;
	static volatile uint8_t x1891 = UINT8_MAX;
	static int16_t x1892 = 1;

	t34 = (((x1889>>x1890)==x1891)/x1892);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x2001 = 55027881LL;
	volatile uint16_t x2002 = 1U;
	uint16_t x2003 = UINT16_MAX;
	volatile int64_t t35 = -6094LL;

	t35 = (((x2001>>x2002)==x2003)/x2004);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x2013 = 6058777315852316LLU;
	int32_t x2014 = 40;
	uint64_t x2015 = 954LLU;
	volatile uint16_t x2016 = UINT16_MAX;
	static volatile int32_t t36 = 618068;

	t36 = (((x2013>>x2014)==x2015)/x2016);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x2061 = INT64_MAX;
	uint8_t x2062 = 0U;
	int16_t x2063 = INT16_MIN;
	int32_t x2064 = INT32_MAX;

	t37 = (((x2061>>x2062)==x2063)/x2064);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x2105 = INT64_MAX;
	int8_t x2106 = 9;
	int8_t x2107 = INT8_MIN;
	volatile uint32_t t38 = 1203782U;

	t38 = (((x2105>>x2106)==x2107)/x2108);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x2109 = 45147U;
	static volatile int8_t x2110 = 1;
	uint8_t x2111 = 95U;
	volatile int32_t t39 = 1180985;

	t39 = (((x2109>>x2110)==x2111)/x2112);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x2129 = 498;
	int64_t x2132 = 228136694293035439LL;
	volatile int64_t t40 = -195246562LL;

	t40 = (((x2129>>x2130)==x2131)/x2132);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x2150 = 3U;
	int16_t x2151 = INT16_MIN;
	int64_t x2152 = INT64_MIN;
	static volatile int64_t t41 = -3911791LL;

	t41 = (((x2149>>x2150)==x2151)/x2152);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x2153 = 31U;
	int8_t x2156 = -1;
	static volatile int32_t t42 = -429808642;

	t42 = (((x2153>>x2154)==x2155)/x2156);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2377 = INT16_MAX;
	uint8_t x2378 = 0U;
	uint8_t x2380 = 1U;
	static volatile int32_t t43 = 88907720;

	t43 = (((x2377>>x2378)==x2379)/x2380);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x2409 = INT8_MAX;
	int8_t x2410 = 5;
	uint32_t x2411 = 330U;
	int8_t x2412 = 1;
	volatile int32_t t44 = 143;

	t44 = (((x2409>>x2410)==x2411)/x2412);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x2429 = 281U;
	static volatile uint16_t x2430 = 4U;
	volatile int8_t x2431 = INT8_MIN;
	static int8_t x2432 = INT8_MIN;
	int32_t t45 = -2;

	t45 = (((x2429>>x2430)==x2431)/x2432);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x2449 = 498968U;
	uint8_t x2450 = 13U;
	volatile int16_t x2451 = -1;
	uint8_t x2452 = 45U;
	int32_t t46 = 1;

	t46 = (((x2449>>x2450)==x2451)/x2452);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x2553 = UINT8_MAX;
	uint8_t x2554 = 7U;
	int32_t x2556 = INT32_MAX;

	t47 = (((x2553>>x2554)==x2555)/x2556);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x2613 = 1;
	int64_t x2615 = INT64_MIN;
	uint32_t t48 = 309379U;

	t48 = (((x2613>>x2614)==x2615)/x2616);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x2661 = 33823674014LL;
	int8_t x2662 = 1;
	uint32_t x2663 = UINT32_MAX;
	uint8_t x2664 = 30U;
	static int32_t t49 = -12;

	t49 = (((x2661>>x2662)==x2663)/x2664);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x2729 = 1U;
	int8_t x2730 = 0;
	int64_t x2731 = INT64_MAX;
	int64_t t50 = -55343804079918LL;

	t50 = (((x2729>>x2730)==x2731)/x2732);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x2733 = UINT16_MAX;
	static volatile int8_t x2734 = 5;
	volatile int64_t x2735 = -1LL;
	uint8_t x2736 = 92U;

	t51 = (((x2733>>x2734)==x2735)/x2736);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x2797 = 246298;
	int64_t x2798 = 1LL;
	static volatile uint32_t x2799 = 62U;
	int64_t x2800 = -2785154329274651018LL;
	int64_t t52 = -2225514868877759581LL;

	t52 = (((x2797>>x2798)==x2799)/x2800);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x2825 = 3U;
	volatile int8_t x2826 = 1;
	static uint16_t x2827 = 63U;
	int32_t t53 = -62622;

	t53 = (((x2825>>x2826)==x2827)/x2828);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x2925 = INT8_MAX;
	uint8_t x2926 = 2U;
	int64_t x2927 = 165379873726817LL;
	int64_t x2928 = INT64_MIN;
	volatile int64_t t54 = -234LL;

	t54 = (((x2925>>x2926)==x2927)/x2928);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x2985 = 59U;
	int32_t x2987 = INT32_MIN;
	volatile uint64_t t55 = 558016691183271912LLU;

	t55 = (((x2985>>x2986)==x2987)/x2988);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x3073 = INT32_MAX;
	int16_t x3074 = 25;
	int64_t x3075 = -7602476LL;
	int8_t x3076 = INT8_MAX;
	int32_t t56 = -65484;

	t56 = (((x3073>>x3074)==x3075)/x3076);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x3217 = UINT16_MAX;
	uint8_t x3218 = 1U;
	int8_t x3220 = 3;
	volatile int32_t t57 = 14200;

	t57 = (((x3217>>x3218)==x3219)/x3220);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x3241 = 443830U;
	volatile uint8_t x3242 = 0U;
	int8_t x3243 = INT8_MIN;
	int16_t x3244 = INT16_MAX;
	static volatile int32_t t58 = -212;

	t58 = (((x3241>>x3242)==x3243)/x3244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x3277 = UINT64_MAX;
	uint8_t x3278 = 11U;
	int32_t x3279 = -1;
	int32_t x3280 = 262;

	t59 = (((x3277>>x3278)==x3279)/x3280);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x3385 = 226U;
	uint16_t x3386 = 0U;
	static uint16_t x3387 = 15089U;
	static int32_t t60 = 1002505241;

	t60 = (((x3385>>x3386)==x3387)/x3388);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x3471 = -1LL;
	int32_t x3472 = -1;
	static int32_t t61 = -653;

	t61 = (((x3469>>x3470)==x3471)/x3472);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x3533 = 20U;
	int8_t x3534 = 2;
	int64_t x3535 = -1LL;
	uint32_t x3536 = UINT32_MAX;
	uint32_t t62 = 11375448U;

	t62 = (((x3533>>x3534)==x3535)/x3536);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x3537 = 487443564858754942LLU;
	static uint8_t x3538 = 39U;
	volatile int16_t x3539 = -7031;
	uint32_t x3540 = UINT32_MAX;

	t63 = (((x3537>>x3538)==x3539)/x3540);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x3618 = 8;
	static int8_t x3619 = 6;
	int16_t x3620 = -1;
	volatile int32_t t64 = 0;

	t64 = (((x3617>>x3618)==x3619)/x3620);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x3643 = -14;
	static int32_t x3644 = INT32_MIN;
	int32_t t65 = -16108867;

	t65 = (((x3641>>x3642)==x3643)/x3644);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x3761 = 8U;
	volatile uint8_t x3762 = 10U;
	int32_t x3763 = INT32_MIN;
	int64_t x3764 = -479727LL;
	int64_t t66 = -36523470202155739LL;

	t66 = (((x3761>>x3762)==x3763)/x3764);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x3826 = 11;
	int8_t x3828 = INT8_MAX;
	int32_t t67 = -63;

	t67 = (((x3825>>x3826)==x3827)/x3828);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x3857 = 1U;
	static int8_t x3858 = 1;
	volatile uint32_t x3860 = 225804U;
	uint32_t t68 = 1U;

	t68 = (((x3857>>x3858)==x3859)/x3860);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x3861 = 9218778LLU;
	static int32_t x3862 = 12;
	static volatile uint64_t x3863 = 1527028759845218976LLU;
	volatile int32_t x3864 = INT32_MIN;
	static int32_t t69 = 5;

	t69 = (((x3861>>x3862)==x3863)/x3864);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x3869 = 1263;
	volatile int8_t x3870 = 6;
	volatile int8_t x3871 = INT8_MIN;
	int16_t x3872 = INT16_MIN;
	int32_t t70 = 281708;

	t70 = (((x3869>>x3870)==x3871)/x3872);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x3973 = UINT16_MAX;
	uint16_t x3974 = 0U;
	uint16_t x3975 = 2U;
	int64_t t71 = 103126322960LL;

	t71 = (((x3973>>x3974)==x3975)/x3976);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x3989 = 23260373LLU;
	uint8_t x3990 = 1U;
	uint8_t x3991 = 15U;
	int64_t x3992 = INT64_MIN;
	int64_t t72 = -389243107740050LL;

	t72 = (((x3989>>x3990)==x3991)/x3992);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x3998 = 2;
	static uint32_t x3999 = UINT32_MAX;
	uint16_t x4000 = 15U;
	volatile int32_t t73 = 461679654;

	t73 = (((x3997>>x3998)==x3999)/x4000);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x4043 = 68147673085611188LL;
	int16_t x4044 = -45;
	static volatile int32_t t74 = 1;

	t74 = (((x4041>>x4042)==x4043)/x4044);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x4221 = 169847295LL;
	int64_t x4222 = 1LL;
	volatile int8_t x4223 = INT8_MIN;
	int8_t x4224 = INT8_MIN;
	int32_t t75 = -370832069;

	t75 = (((x4221>>x4222)==x4223)/x4224);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x4277 = 1;
	int8_t x4278 = 30;
	int8_t x4279 = INT8_MIN;
	int32_t x4280 = INT32_MIN;
	int32_t t76 = -9;

	t76 = (((x4277>>x4278)==x4279)/x4280);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x4281 = UINT32_MAX;
	volatile uint32_t x4282 = 19U;
	static uint16_t x4283 = 46U;
	int64_t x4284 = -1LL;
	int64_t t77 = 60418LL;

	t77 = (((x4281>>x4282)==x4283)/x4284);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x4388 = 119U;
	volatile int32_t t78 = 8126;

	t78 = (((x4385>>x4386)==x4387)/x4388);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x4661 = 1;
	static int8_t x4662 = 25;
	static int8_t x4663 = 28;
	uint16_t x4664 = UINT16_MAX;
	int32_t t79 = 213;

	t79 = (((x4661>>x4662)==x4663)/x4664);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x4665 = 23133407LL;
	uint64_t x4666 = 6LLU;
	int8_t x4667 = -1;
	volatile uint8_t x4668 = UINT8_MAX;
	volatile int32_t t80 = -667247;

	t80 = (((x4665>>x4666)==x4667)/x4668);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x4693 = INT64_MAX;
	uint16_t x4694 = 1U;
	uint64_t x4695 = 115021317419LLU;
	static volatile int16_t x4696 = -9;
	int32_t t81 = -30537;

	t81 = (((x4693>>x4694)==x4695)/x4696);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x4766 = 2U;
	int16_t x4767 = -1;
	uint64_t x4768 = 2221332237LLU;
	uint64_t t82 = 943716501658LLU;

	t82 = (((x4765>>x4766)==x4767)/x4768);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x4801 = INT16_MAX;
	uint8_t x4802 = 12U;
	uint8_t x4803 = 10U;
	static int8_t x4804 = -1;
	volatile int32_t t83 = -9570107;

	t83 = (((x4801>>x4802)==x4803)/x4804);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x4873 = 262117U;
	static volatile uint16_t x4874 = 15U;
	static uint8_t x4875 = 24U;
	volatile uint64_t x4876 = 55810578885LLU;
	volatile uint64_t t84 = 57052239968LLU;

	t84 = (((x4873>>x4874)==x4875)/x4876);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x4881 = 0;
	volatile uint8_t x4882 = 3U;
	static volatile int64_t x4884 = 1476084258536997835LL;
	static int64_t t85 = -93953131669526LL;

	t85 = (((x4881>>x4882)==x4883)/x4884);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x4966 = 3;
	int8_t x4967 = -1;
	uint32_t x4968 = 7118U;
	uint32_t t86 = 9717U;

	t86 = (((x4965>>x4966)==x4967)/x4968);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x4997 = INT32_MAX;
	uint8_t x4998 = 0U;
	static volatile int8_t x4999 = INT8_MAX;
	int32_t t87 = -790807;

	t87 = (((x4997>>x4998)==x4999)/x5000);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x5037 = UINT8_MAX;
	uint8_t x5038 = 6U;
	static int64_t x5039 = 543055906119668LL;
	volatile uint64_t t88 = 198739585233LLU;

	t88 = (((x5037>>x5038)==x5039)/x5040);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x5049 = 4520;
	static int8_t x5050 = 9;
	uint8_t x5051 = 55U;
	uint16_t x5052 = 50U;

	t89 = (((x5049>>x5050)==x5051)/x5052);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x5086 = 5U;
	uint16_t x5088 = 23840U;
	static volatile int32_t t90 = 1;

	t90 = (((x5085>>x5086)==x5087)/x5088);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x5114 = 38U;
	int32_t x5115 = INT32_MAX;
	volatile int8_t x5116 = INT8_MIN;
	int32_t t91 = 616413;

	t91 = (((x5113>>x5114)==x5115)/x5116);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x5145 = 3U;
	uint8_t x5146 = 0U;
	uint16_t x5147 = UINT16_MAX;
	int32_t x5148 = 2;
	volatile int32_t t92 = 739789;

	t92 = (((x5145>>x5146)==x5147)/x5148);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x5277 = 727456158LL;
	uint8_t x5278 = 14U;
	volatile int8_t x5280 = INT8_MAX;
	volatile int32_t t93 = -135983;

	t93 = (((x5277>>x5278)==x5279)/x5280);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x5281 = 1;
	uint32_t x5282 = 1U;
	volatile int16_t x5283 = INT16_MIN;
	static int32_t x5284 = INT32_MAX;
	static int32_t t94 = 7462781;

	t94 = (((x5281>>x5282)==x5283)/x5284);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x5301 = UINT8_MAX;
	volatile int16_t x5302 = 6;
	uint8_t x5303 = UINT8_MAX;
	static int16_t x5304 = INT16_MIN;
	int32_t t95 = -348793;

	t95 = (((x5301>>x5302)==x5303)/x5304);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x5337 = INT32_MAX;
	uint16_t x5338 = 1U;
	static uint32_t x5340 = 5925847U;
	static uint32_t t96 = 967U;

	t96 = (((x5337>>x5338)==x5339)/x5340);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x5374 = 1U;
	static int8_t x5375 = 0;
	int8_t x5376 = 5;

	t97 = (((x5373>>x5374)==x5375)/x5376);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x5413 = 13997LL;
	int16_t x5414 = 0;
	int16_t x5415 = INT16_MIN;
	volatile uint64_t t98 = 504639710548154LLU;

	t98 = (((x5413>>x5414)==x5415)/x5416);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x5489 = 5;
	uint32_t x5490 = 17U;
	volatile int8_t x5491 = INT8_MIN;
	uint8_t x5492 = 3U;
	static int32_t t99 = -52396;

	t99 = (((x5489>>x5490)==x5491)/x5492);

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

