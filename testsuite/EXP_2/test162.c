#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x20 = 7U;
volatile int8_t x150 = -4;
uint32_t x259 = UINT32_MAX;
volatile uint64_t t6 = 469149LLU;
int64_t x733 = INT64_MIN;
uint64_t x734 = 288006585300536059LLU;
volatile int8_t x736 = 4;
volatile uint64_t t7 = 2145359346057LLU;
volatile uint64_t t11 = 20740618LLU;
int8_t x867 = INT8_MIN;
static volatile uint64_t t14 = 5341065LLU;
volatile uint32_t t15 = 2590020U;
static volatile int16_t x1326 = -12;
uint32_t x1331 = UINT32_MAX;
int8_t x1404 = 13;
static int64_t x1449 = 510284LL;
uint64_t x1501 = 38132393708LLU;
int16_t x1526 = INT16_MIN;
int8_t x1584 = 0;
volatile uint64_t x1624 = 1LLU;
volatile uint64_t x1799 = UINT64_MAX;
uint8_t x1839 = 105U;
uint32_t x2059 = 3131U;
int8_t x2173 = 1;
volatile int16_t x2198 = INT16_MAX;
volatile uint8_t x2213 = 0U;
int8_t x2396 = 6;
uint64_t t42 = 3274756231226LLU;
static uint8_t x2595 = 103U;
static int32_t x2624 = 0;
uint16_t x2642 = 23U;
int32_t x2643 = INT32_MIN;
uint16_t x2651 = UINT16_MAX;
int16_t x2674 = -5912;
uint32_t x2688 = 3U;
static int64_t x2702 = -1LL;
int32_t x2729 = 3;
uint64_t t51 = 44734633LLU;
uint16_t x2932 = 0U;
volatile uint64_t t53 = 1167625LLU;
int32_t x2945 = INT32_MAX;
uint32_t x3024 = 51U;
uint32_t x3158 = 414U;
int32_t x3159 = INT32_MIN;
static volatile uint32_t t58 = 548899863U;
volatile int16_t x3337 = INT16_MAX;
volatile int32_t t60 = 630748;
static int16_t x3352 = 1;
int32_t x3441 = -1;
static volatile uint64_t t63 = 11032LLU;
int16_t x3568 = 2;
uint32_t x3598 = 1447364756U;
int32_t x3599 = INT32_MIN;
uint8_t x3684 = 20U;
volatile uint32_t t67 = 124U;
static uint64_t x3691 = 3502617164650LLU;
uint64_t x3818 = 4971097500643LLU;
volatile uint64_t t69 = 55182994172780LLU;
static uint32_t x3967 = UINT32_MAX;
uint64_t x3968 = 3LLU;
uint32_t x3997 = 28U;
int8_t x4285 = -15;
int32_t x4474 = INT32_MAX;
uint8_t x4476 = 1U;
int32_t x4487 = 0;
int32_t x4553 = INT32_MIN;
uint8_t x4556 = 1U;
static volatile uint32_t x4590 = 21U;
uint8_t x4592 = 10U;
int8_t x4690 = 1;
static uint32_t x4697 = 1507U;
volatile uint64_t t88 = 167065840045LLU;
int32_t x4728 = 36;
int64_t x4762 = INT64_MIN;
static int64_t t91 = -840525258088LL;
volatile uint64_t t93 = 351953LLU;
static volatile uint8_t x5068 = 0U;
int16_t x5142 = INT16_MIN;
uint64_t x5149 = 480486LLU;
uint16_t x5150 = 110U;
int64_t x5217 = -1LL;
volatile uint64_t t97 = 101926301831729839LLU;
int8_t x5277 = INT8_MIN;
static volatile int64_t x5278 = -228713LL;


void f0(void) {
	int64_t x17 = -4496089708508295495LL;
	int64_t x18 = -1LL;
	volatile uint64_t x19 = 10335745768082870LLU;
	uint64_t t0 = 188594LLU;

	t0 = ((x17^(x18+x19))<<x20);

	if (t0 != 16072004241950082560LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x69 = 15;
	volatile int32_t x70 = INT32_MAX;
	int8_t x71 = -1;
	static int8_t x72 = 0;
	int32_t t1 = -41;

	t1 = ((x69^(x70+x71))<<x72);

	if (t1 != 2147483633) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint64_t x149 = 206158481404032LLU;
	volatile int8_t x151 = -1;
	uint64_t x152 = 3LLU;
	volatile uint64_t t2 = 1938779408062LLU;

	t2 = ((x149^(x150+x151))<<x152);

	if (t2 != 18445094805858319320LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x257 = -2;
	int8_t x258 = -10;
	uint16_t x260 = 15U;
	volatile uint32_t t3 = 17U;

	t3 = ((x257^(x258+x259))<<x260);

	if (t3 != 360448U) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int8_t x497 = -2;
	static uint64_t x498 = 0LLU;
	int32_t x499 = -1;
	uint16_t x500 = 7U;
	uint64_t t4 = 14505782584123LLU;

	t4 = ((x497^(x498+x499))<<x500);

	if (t4 != 128LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x501 = 1U;
	volatile uint32_t x502 = UINT32_MAX;
	static volatile int64_t x503 = 1150661866LL;
	volatile uint8_t x504 = 26U;
	int64_t t5 = 4294004741342443541LL;

	t5 = ((x501^(x502+x503))<<x504);

	if (t5 != 365449986692874240LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x509 = INT8_MIN;
	static volatile uint64_t x510 = 332731484986030LLU;
	uint64_t x511 = 19260LLU;
	volatile uint64_t x512 = 2LLU;

	t6 = ((x509^(x510+x511))<<x512);

	if (t6 != 18445413147769530792LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x735 = -94;

	t7 = ((x733^(x734+x735))<<x736);

	if (t7 != 4608105364808575440LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x745 = INT64_MAX;
	int16_t x746 = 2861;
	uint64_t x747 = UINT64_MAX;
	uint64_t x748 = 7LLU;
	uint64_t t8 = 7LLU;

	t8 = ((x745^(x746+x747))<<x748);

	if (t8 != 18446744073709185408LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x773 = 18;
	static int64_t x774 = -1LL;
	volatile int64_t x775 = 338793134LL;
	uint8_t x776 = 7U;
	volatile int64_t t9 = 142272982010LL;

	t9 = ((x773^(x774+x775))<<x776);

	if (t9 != 43365523328LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x789 = INT64_MIN;
	uint16_t x790 = UINT16_MAX;
	uint64_t x791 = UINT64_MAX;
	int8_t x792 = 3;
	uint64_t t10 = 22476120179749552LLU;

	t10 = ((x789^(x790+x791))<<x792);

	if (t10 != 524272LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x853 = -1;
	uint64_t x854 = 10862936292LLU;
	static int8_t x855 = INT8_MIN;
	int8_t x856 = 7;

	t11 = ((x853^(x854+x855))<<x856);

	if (t11 != 18446742683253722496LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x865 = 2319473026314498880LLU;
	uint32_t x866 = UINT32_MAX;
	int8_t x868 = 3;
	uint64_t t12 = 12LLU;

	t12 = ((x865^(x866+x867))<<x868);

	if (t12 != 109040126182842872LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x973 = 4159LLU;
	volatile uint64_t x974 = 2109380LLU;
	static int64_t x975 = INT64_MIN;
	int32_t x976 = 11;
	static volatile uint64_t t13 = 22368909LLU;

	t13 = ((x973^(x974+x975))<<x976);

	if (t13 != 4328511488LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x1061 = UINT64_MAX;
	int8_t x1062 = 6;
	int16_t x1063 = -1;
	volatile int8_t x1064 = 41;

	t14 = ((x1061^(x1062+x1063))<<x1064);

	if (t14 != 18446730879570018304LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x1077 = INT16_MIN;
	int16_t x1078 = INT16_MIN;
	uint32_t x1079 = UINT32_MAX;
	uint8_t x1080 = 12U;

	t15 = ((x1077^(x1078+x1079))<<x1080);

	if (t15 != 268431360U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x1101 = INT64_MAX;
	uint64_t x1102 = 445LLU;
	int8_t x1103 = INT8_MIN;
	static uint32_t x1104 = 7U;
	volatile uint64_t t16 = 417162LLU;

	t16 = ((x1101^(x1102+x1103))<<x1104);

	if (t16 != 18446744073709510912LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x1313 = 4U;
	uint64_t x1314 = UINT64_MAX;
	uint16_t x1315 = UINT16_MAX;
	volatile uint16_t x1316 = 1U;
	volatile uint64_t t17 = 109LLU;

	t17 = ((x1313^(x1314+x1315))<<x1316);

	if (t17 != 131060LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x1325 = 1;
	volatile int64_t x1327 = 876708103715789871LL;
	int8_t x1328 = 1;
	int64_t t18 = 52239LL;

	t18 = ((x1325^(x1326+x1327))<<x1328);

	if (t18 != 1753416207431579716LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x1329 = UINT8_MAX;
	volatile uint8_t x1330 = 19U;
	uint8_t x1332 = 1U;
	uint32_t t19 = 12515727U;

	t19 = ((x1329^(x1330+x1331))<<x1332);

	if (t19 != 474U) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x1401 = UINT32_MAX;
	volatile int8_t x1402 = 22;
	uint16_t x1403 = UINT16_MAX;
	uint32_t t20 = 0U;

	t20 = ((x1401^(x1402+x1403))<<x1404);

	if (t20 != 3757916160U) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1450 = 510242871U;
	uint16_t x1451 = 8732U;
	volatile uint16_t x1452 = 3U;
	int64_t t21 = -3LL;

	t21 = ((x1449^(x1450+x1451))<<x1452);

	if (t21 != 4084259064LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x1502 = INT32_MIN;
	uint64_t x1503 = 40216393LLU;
	uint32_t x1504 = 2U;
	static uint64_t t22 = 23LLU;

	t22 = ((x1501^(x1502+x1503))<<x1504);

	if (t22 != 18446743925716551316LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1525 = -1;
	uint32_t x1527 = UINT32_MAX;
	int16_t x1528 = 14;
	volatile uint32_t t23 = 4633U;

	t23 = ((x1525^(x1526+x1527))<<x1528);

	if (t23 != 536870912U) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x1581 = INT16_MIN;
	volatile int8_t x1582 = INT8_MIN;
	int16_t x1583 = INT16_MIN;
	volatile int32_t t24 = 230022081;

	t24 = ((x1581^(x1582+x1583))<<x1584);

	if (t24 != 65408) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1621 = -1;
	static volatile int32_t x1622 = -291196328;
	uint64_t x1623 = 1849152LLU;
	volatile uint64_t t25 = 2189892673312655LLU;

	t25 = ((x1621^(x1622+x1623))<<x1624);

	if (t25 != 578694350LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1697 = 6683;
	int32_t x1698 = -1;
	volatile uint32_t x1699 = 503308628U;
	uint16_t x1700 = 9U;
	static volatile uint32_t t26 = 108U;

	t26 = ((x1697^(x1698+x1699))<<x1700);

	if (t26 != 4294348800U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1709 = -3146LL;
	int8_t x1710 = INT8_MIN;
	volatile int16_t x1711 = -1;
	uint8_t x1712 = 48U;
	volatile int64_t t27 = -145LL;

	t27 = ((x1709^(x1710+x1711))<<x1712);

	if (t27 != 921267598773977088LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1745 = 1U;
	volatile int8_t x1746 = 2;
	static int64_t x1747 = 62LL;
	int8_t x1748 = 6;
	int64_t t28 = -1LL;

	t28 = ((x1745^(x1746+x1747))<<x1748);

	if (t28 != 4160LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x1797 = INT8_MIN;
	int32_t x1798 = INT32_MIN;
	int8_t x1800 = 1;
	static volatile uint64_t t29 = 57LLU;

	t29 = ((x1797^(x1798+x1799))<<x1800);

	if (t29 != 4294967550LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1801 = 6813769862055LL;
	uint32_t x1802 = 38911U;
	uint16_t x1803 = 717U;
	uint32_t x1804 = 0U;
	static int64_t t30 = -96612226LL;

	t30 = ((x1801^(x1802+x1803))<<x1804);

	if (t30 != 6813769896299LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x1837 = 0LLU;
	volatile int64_t x1838 = 6368LL;
	static uint8_t x1840 = 37U;
	uint64_t t31 = 48112806LLU;

	t31 = ((x1837^(x1838+x1839))<<x1840);

	if (t31 != 889642345824256LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x1941 = UINT64_MAX;
	int32_t x1942 = 65026;
	int64_t x1943 = 62081077LL;
	int8_t x1944 = 0;
	volatile uint64_t t32 = 32001LLU;

	t32 = ((x1941^(x1942+x1943))<<x1944);

	if (t32 != 18446744073647405512LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1961 = INT64_MIN;
	uint16_t x1962 = UINT16_MAX;
	uint64_t x1963 = UINT64_MAX;
	uint8_t x1964 = 0U;
	volatile uint64_t t33 = 201LLU;

	t33 = ((x1961^(x1962+x1963))<<x1964);

	if (t33 != 9223372036854841342LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x1965 = INT32_MIN;
	static volatile uint64_t x1966 = 31339394276089791LLU;
	int8_t x1967 = INT8_MIN;
	volatile uint32_t x1968 = 6U;
	uint64_t t34 = 15LLU;

	t34 = ((x1965^(x1966+x1967))<<x1968);

	if (t34 != 16441022890080980928LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x2057 = 1LLU;
	int8_t x2058 = -1;
	uint8_t x2060 = 6U;
	uint64_t t35 = 6LLU;

	t35 = ((x2057^(x2058+x2059))<<x2060);

	if (t35 != 200384LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x2174 = 0;
	static uint8_t x2175 = 7U;
	int8_t x2176 = 0;
	volatile int32_t t36 = -4045;

	t36 = ((x2173^(x2174+x2175))<<x2176);

	if (t36 != 6) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x2197 = 28U;
	uint32_t x2199 = UINT32_MAX;
	uint16_t x2200 = 6U;
	static volatile uint32_t t37 = 1U;

	t37 = ((x2197^(x2198+x2199))<<x2200);

	if (t37 != 2095232U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x2214 = 2LL;
	int32_t x2215 = -1;
	static volatile uint16_t x2216 = 13U;
	int64_t t38 = -1620910924427883LL;

	t38 = ((x2213^(x2214+x2215))<<x2216);

	if (t38 != 8192LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x2345 = -1;
	int32_t x2346 = 6306;
	static int16_t x2347 = INT16_MIN;
	static uint64_t x2348 = 0LLU;
	volatile int32_t t39 = 1;

	t39 = ((x2345^(x2346+x2347))<<x2348);

	if (t39 != 26461) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int16_t x2393 = 100;
	int8_t x2394 = -1;
	static int8_t x2395 = INT8_MAX;
	static volatile int32_t t40 = 3333;

	t40 = ((x2393^(x2394+x2395))<<x2396);

	if (t40 != 1664) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2505 = INT16_MIN;
	int32_t x2506 = -1;
	int32_t x2507 = -1;
	uint64_t x2508 = 5LLU;
	int32_t t41 = -15002;

	t41 = ((x2505^(x2506+x2507))<<x2508);

	if (t41 != 1048512) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x2573 = -23;
	uint64_t x2574 = 15LLU;
	uint16_t x2575 = 912U;
	int8_t x2576 = 38;

	t42 = ((x2573^(x2574+x2575))<<x2576);

	if (t42 != 18446495034325860352LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x2593 = 56U;
	static int8_t x2594 = -1;
	static volatile uint16_t x2596 = 6U;
	static uint32_t t43 = 148117U;

	t43 = ((x2593^(x2594+x2595))<<x2596);

	if (t43 != 6016U) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x2617 = UINT16_MAX;
	uint8_t x2618 = 56U;
	int8_t x2619 = INT8_MAX;
	volatile int16_t x2620 = 2;
	volatile int32_t t44 = -6111;

	t44 = ((x2617^(x2618+x2619))<<x2620);

	if (t44 != 261408) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x2621 = INT32_MIN;
	int64_t x2622 = 0LL;
	volatile int16_t x2623 = INT16_MIN;
	int64_t t45 = 2336484718327418898LL;

	t45 = ((x2621^(x2622+x2623))<<x2624);

	if (t45 != 2147450880LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x2641 = UINT32_MAX;
	static uint8_t x2644 = 2U;
	volatile uint32_t t46 = 19767077U;

	t46 = ((x2641^(x2642+x2643))<<x2644);

	if (t46 != 4294967200U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x2649 = INT8_MAX;
	int32_t x2650 = -1;
	static volatile uint8_t x2652 = 1U;
	int32_t t47 = 327714004;

	t47 = ((x2649^(x2650+x2651))<<x2652);

	if (t47 != 130818) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x2673 = INT32_MAX;
	int32_t x2675 = 33421928;
	int8_t x2676 = 0;
	static int32_t t48 = 195;

	t48 = ((x2673^(x2674+x2675))<<x2676);

	if (t48 != 2114067631) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x2685 = INT32_MIN;
	int8_t x2686 = -1;
	uint32_t x2687 = UINT32_MAX;
	volatile uint32_t t49 = 16691458U;

	t49 = ((x2685^(x2686+x2687))<<x2688);

	if (t49 != 4294967280U) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x2701 = 3;
	volatile int8_t x2703 = INT8_MAX;
	int16_t x2704 = 34;
	static int64_t t50 = -1983368971741LL;

	t50 = ((x2701^(x2702+x2703))<<x2704);

	if (t50 != 2147483648000LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x2730 = 0;
	static volatile uint64_t x2731 = 14836490608279721LLU;
	static int16_t x2732 = 0;

	t51 = ((x2729^(x2730+x2731))<<x2732);

	if (t51 != 14836490608279722LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x2929 = -3;
	int64_t x2930 = INT64_MIN;
	int16_t x2931 = 408;
	volatile int64_t t52 = -4000740909LL;

	t52 = ((x2929^(x2930+x2931))<<x2932);

	if (t52 != 9223372036854775397LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x2933 = -1;
	volatile uint64_t x2934 = 389898578244LLU;
	volatile uint8_t x2935 = 64U;
	uint32_t x2936 = 0U;

	t53 = ((x2933^(x2934+x2935))<<x2936);

	if (t53 != 18446743683810973307LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x2946 = UINT64_MAX;
	int32_t x2947 = 949884306;
	uint8_t x2948 = 10U;
	volatile uint64_t t54 = 5636017475223268LLU;

	t54 = ((x2945^(x2946+x2947))<<x2948);

	if (t54 != 1226341726208LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x3021 = INT64_MIN;
	int8_t x3022 = 1;
	uint64_t x3023 = 1677LLU;
	uint64_t t55 = 446092292797535LLU;

	t55 = ((x3021^(x3022+x3023))<<x3024);

	if (t55 != 3778520087363846144LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x3081 = UINT64_MAX;
	volatile int32_t x3082 = 659;
	int8_t x3083 = INT8_MIN;
	volatile uint32_t x3084 = 8U;
	volatile uint64_t t56 = 1LLU;

	t56 = ((x3081^(x3082+x3083))<<x3084);

	if (t56 != 18446744073709415424LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x3157 = 7454232743197LL;
	uint8_t x3160 = 2U;
	volatile int64_t t57 = 11322094854930862LL;

	t57 = ((x3157^(x3158+x3159))<<x3160);

	if (t57 != 29808341037580LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x3213 = INT16_MIN;
	volatile uint32_t x3214 = 568063749U;
	static int16_t x3215 = -1;
	uint32_t x3216 = 2U;

	t58 = ((x3213^(x3214+x3215))<<x3216);

	if (t58 != 2022824976U) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x3321 = 4040U;
	int16_t x3322 = INT16_MAX;
	static volatile uint32_t x3323 = 3U;
	uint8_t x3324 = 17U;
	static volatile uint32_t t59 = 1619646U;

	t59 = ((x3321^(x3322+x3323))<<x3324);

	if (t59 != 529793024U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x3338 = 4;
	uint8_t x3339 = 33U;
	int8_t x3340 = 1;

	t60 = ((x3337^(x3338+x3339))<<x3340);

	if (t60 != 65460) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x3349 = INT8_MIN;
	int64_t x3350 = -10411026090170LL;
	uint64_t x3351 = 325888LLU;
	volatile uint64_t t61 = 29LLU;

	t61 = ((x3349^(x3350+x3351))<<x3352);

	if (t61 != 20822051528588LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x3397 = 56895101;
	uint32_t x3398 = 181U;
	static uint8_t x3399 = UINT8_MAX;
	int32_t x3400 = 1;
	volatile uint32_t t62 = 69567191U;

	t62 = ((x3397^(x3398+x3399))<<x3400);

	if (t62 != 113790866U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x3442 = 37991LLU;
	static int32_t x3443 = INT32_MAX;
	uint16_t x3444 = 0U;

	t63 = ((x3441^(x3442+x3443))<<x3444);

	if (t63 != 18446744071562029977LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x3565 = -18717LL;
	volatile uint64_t x3566 = UINT64_MAX;
	int16_t x3567 = INT16_MIN;
	volatile uint64_t t64 = 10657051326007082LLU;

	t64 = ((x3565^(x3566+x3567))<<x3568);

	if (t64 != 205936LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x3597 = -650912;
	uint8_t x3600 = 8U;
	volatile uint32_t t65 = 255U;

	t65 = ((x3597^(x3598+x3599))<<x3600);

	if (t65 != 3004822528U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x3613 = 1;
	uint16_t x3614 = 2U;
	int8_t x3615 = 1;
	uint8_t x3616 = 3U;
	volatile int32_t t66 = -5;

	t66 = ((x3613^(x3614+x3615))<<x3616);

	if (t66 != 16) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x3681 = UINT32_MAX;
	int8_t x3682 = INT8_MAX;
	uint8_t x3683 = 54U;

	t67 = ((x3681^(x3682+x3683))<<x3684);

	if (t67 != 4104126464U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x3689 = 711927LL;
	uint32_t x3690 = UINT32_MAX;
	uint32_t x3692 = 27U;
	static uint64_t t68 = 823073899849LLU;

	t68 = ((x3689^(x3690+x3691))<<x3692);

	if (t68 != 9521266282427580416LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x3817 = INT32_MAX;
	uint64_t x3819 = 30039LLU;
	static int16_t x3820 = 0;

	t69 = ((x3817^(x3818+x3819))<<x3820);

	if (t69 != 4969604275909LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x3893 = 831LLU;
	static int64_t x3894 = 3400833482LL;
	int32_t x3895 = INT32_MAX;
	int8_t x3896 = 36;
	volatile uint64_t t70 = 21390925370LLU;

	t70 = ((x3893^(x3894+x3895))<<x3896);

	if (t70 != 12342589080637276160LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x3925 = INT16_MIN;
	int8_t x3926 = INT8_MIN;
	static uint8_t x3927 = 1U;
	uint8_t x3928 = 3U;
	int32_t t71 = 313586;

	t71 = ((x3925^(x3926+x3927))<<x3928);

	if (t71 != 261128) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x3965 = INT16_MAX;
	int32_t x3966 = -26270;
	volatile uint32_t t72 = 55U;

	t72 = ((x3965^(x3966+x3967))<<x3968);

	if (t72 != 4294915312U) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x3998 = 0U;
	int64_t x3999 = 3406268995409LL;
	uint16_t x4000 = 1U;
	int64_t t73 = 95019239082LL;

	t73 = ((x3997^(x3998+x3999))<<x4000);

	if (t73 != 6812537990810LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x4029 = UINT8_MAX;
	uint32_t x4030 = UINT32_MAX;
	volatile uint32_t x4031 = UINT32_MAX;
	int8_t x4032 = 1;
	uint32_t t74 = 23631383U;

	t74 = ((x4029^(x4030+x4031))<<x4032);

	if (t74 != 4294966786U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x4121 = INT16_MIN;
	int64_t x4122 = INT64_MIN;
	uint32_t x4123 = 6U;
	int16_t x4124 = 0;
	int64_t t75 = -1LL;

	t75 = ((x4121^(x4122+x4123))<<x4124);

	if (t75 != 9223372036854743046LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x4245 = -1LL;
	int64_t x4246 = INT64_MIN;
	uint32_t x4247 = UINT32_MAX;
	uint32_t x4248 = 0U;
	volatile int64_t t76 = 24960871036996073LL;

	t76 = ((x4245^(x4246+x4247))<<x4248);

	if (t76 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x4281 = INT8_MAX;
	uint64_t x4282 = UINT64_MAX;
	int64_t x4283 = -170751864LL;
	uint32_t x4284 = 2U;
	volatile uint64_t t77 = 741544243LLU;

	t77 = ((x4281^(x4282+x4283))<<x4284);

	if (t77 != 18446744073026544608LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x4286 = -2;
	int16_t x4287 = INT16_MIN;
	int32_t x4288 = 9;
	int32_t t78 = -193107400;

	t78 = ((x4285^(x4286+x4287))<<x4288);

	if (t78 != 16784896) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x4345 = -1;
	volatile int8_t x4346 = -1;
	int16_t x4347 = -1;
	uint8_t x4348 = 11U;
	int32_t t79 = -36071527;

	t79 = ((x4345^(x4346+x4347))<<x4348);

	if (t79 != 2048) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x4381 = 171;
	int16_t x4382 = 0;
	static uint8_t x4383 = UINT8_MAX;
	uint8_t x4384 = 0U;
	volatile int32_t t80 = -824575439;

	t80 = ((x4381^(x4382+x4383))<<x4384);

	if (t80 != 84) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x4473 = UINT16_MAX;
	uint64_t x4475 = UINT64_MAX;
	uint64_t t81 = 538942184LLU;

	t81 = ((x4473^(x4474+x4475))<<x4476);

	if (t81 != 4294836226LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x4477 = 7673654354794960LLU;
	uint8_t x4478 = 4U;
	volatile uint64_t x4479 = UINT64_MAX;
	volatile uint16_t x4480 = 12U;
	uint64_t t82 = 93433991407LLU;

	t82 = ((x4477^(x4478+x4479))<<x4480);

	if (t82 != 12984544163530616832LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x4485 = 6045713424LLU;
	static uint16_t x4486 = UINT16_MAX;
	uint32_t x4488 = 2U;
	volatile uint64_t t83 = 1784909591447LLU;

	t83 = ((x4485^(x4486+x4487))<<x4488);

	if (t83 != 24182976444LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x4513 = 2089443U;
	int8_t x4514 = INT8_MIN;
	int8_t x4515 = -1;
	int32_t x4516 = 0;
	volatile uint32_t t84 = 2U;

	t84 = ((x4513^(x4514+x4515))<<x4516);

	if (t84 != 4292877980U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x4554 = 56LL;
	volatile int32_t x4555 = INT32_MIN;
	int64_t t85 = 11976776967472LL;

	t85 = ((x4553^(x4554+x4555))<<x4556);

	if (t85 != 112LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x4589 = INT32_MIN;
	int16_t x4591 = INT16_MIN;
	volatile uint32_t t86 = 76782541U;

	t86 = ((x4589^(x4590+x4591))<<x4592);

	if (t86 != 4261434368U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x4689 = 1893;
	volatile uint16_t x4691 = 1473U;
	int8_t x4692 = 1;
	static int32_t t87 = -16447;

	t87 = ((x4689^(x4690+x4691))<<x4692);

	if (t87 != 1358) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x4698 = 6078197796LLU;
	static uint64_t x4699 = 1LLU;
	static volatile int8_t x4700 = 6;

	t88 = ((x4697^(x4698+x4699))<<x4700);

	if (t88 != 389004751232LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x4725 = INT32_MIN;
	int16_t x4726 = -1;
	uint64_t x4727 = UINT64_MAX;
	uint64_t t89 = 935387029LLU;

	t89 = ((x4725^(x4726+x4727))<<x4728);

	if (t89 != 18446743936270598144LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x4729 = 305865;
	int8_t x4730 = 20;
	int32_t x4731 = -1;
	int8_t x4732 = 1;
	volatile int32_t t90 = -215011;

	t90 = ((x4729^(x4730+x4731))<<x4732);

	if (t90 != 611764) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x4761 = -1LL;
	uint16_t x4763 = UINT16_MAX;
	int32_t x4764 = 0;

	t91 = ((x4761^(x4762+x4763))<<x4764);

	if (t91 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x4865 = UINT32_MAX;
	static uint16_t x4866 = 13850U;
	int16_t x4867 = INT16_MIN;
	static volatile uint8_t x4868 = 0U;
	uint32_t t92 = 2U;

	t92 = ((x4865^(x4866+x4867))<<x4868);

	if (t92 != 18917U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x5033 = 166244213LLU;
	int8_t x5034 = -1;
	int64_t x5035 = 8LL;
	uint32_t x5036 = 2U;

	t93 = ((x5033^(x5034+x5035))<<x5036);

	if (t93 != 664976840LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int32_t x5065 = INT32_MIN;
	int16_t x5066 = -1;
	int64_t x5067 = -1LL;
	int64_t t94 = 269839914628LL;

	t94 = ((x5065^(x5066+x5067))<<x5068);

	if (t94 != 2147483646LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x5141 = -15;
	volatile int8_t x5143 = INT8_MIN;
	static int8_t x5144 = 0;
	int32_t t95 = -107856;

	t95 = ((x5141^(x5142+x5143))<<x5144);

	if (t95 != 32881) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x5151 = 176;
	uint16_t x5152 = 1U;
	uint64_t t96 = 10110365190777909LLU;

	t96 = ((x5149^(x5150+x5151))<<x5152);

	if (t96 != 961520LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x5218 = INT8_MIN;
	static uint64_t x5219 = 56238178345711506LLU;
	uint8_t x5220 = 2U;

	t97 = ((x5217^(x5218+x5219))<<x5220);

	if (t97 != 18221791360326706100LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x5279 = 48U;
	int16_t x5280 = 14;
	int64_t t98 = -30LL;

	t98 = ((x5277^(x5278+x5279))<<x5280);

	if (t98 != 3746676736LL) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint8_t x5377 = UINT8_MAX;
	int8_t x5378 = INT8_MIN;
	uint32_t x5379 = UINT32_MAX;
	uint8_t x5380 = 7U;
	volatile uint32_t t99 = 16U;

	t99 = ((x5377^(x5378+x5379))<<x5380);

	if (t99 != 4294950912U) { NG(); } else { ; }
	
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

