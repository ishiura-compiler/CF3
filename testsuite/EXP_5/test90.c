#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x121 = INT16_MAX;
int32_t x124 = 28;
volatile uint64_t t0 = 274800285475686991LLU;
int16_t x156 = 8;
int8_t x450 = -1;
uint64_t x550 = 75897LLU;
uint64_t t4 = 396679056LLU;
uint16_t x661 = 364U;
static uint16_t x664 = 9U;
static uint32_t x670 = 0U;
uint32_t t6 = 170246U;
volatile uint64_t x699 = 2456375263770LLU;
uint32_t x701 = 3240U;
static uint32_t x704 = 14U;
uint32_t x842 = 120774092U;
uint8_t x880 = 7U;
int32_t t12 = 225063471;
static int8_t x924 = 35;
int8_t x985 = 0;
int16_t x987 = -1;
uint64_t x1022 = UINT64_MAX;
static int16_t x1172 = 1;
static int16_t x1185 = INT16_MIN;
volatile uint64_t x1188 = 7LLU;
int16_t x1359 = INT16_MAX;
uint32_t x1362 = UINT32_MAX;
volatile uint32_t t22 = 3269U;
volatile int32_t x1390 = 0;
int64_t x1446 = -1LL;
volatile int16_t x1584 = 1;
static int64_t x1700 = 1LL;
uint64_t x1702 = UINT64_MAX;
static int32_t x1703 = 0;
int8_t x1704 = 1;
volatile uint64_t t28 = 2479577784LLU;
static int16_t x1711 = INT16_MAX;
int8_t x1712 = 0;
int8_t x1734 = INT8_MIN;
volatile uint8_t x1736 = 51U;
volatile int32_t x1797 = INT32_MAX;
uint8_t x1798 = UINT8_MAX;
int32_t t33 = INT32_MAX;
int64_t t34 = -155608LL;
uint8_t x1837 = UINT8_MAX;
int8_t x1838 = INT8_MAX;
uint32_t x1840 = 9U;
uint64_t t36 = 1133420811242911334LLU;
uint32_t x1902 = 223U;
uint32_t x2130 = 10694U;
volatile int32_t t41 = -250619;
int64_t x2433 = 8151957684573440LL;
int8_t x2435 = -1;
volatile int16_t x2523 = INT16_MAX;
uint8_t x2629 = 1U;
volatile int64_t x2632 = 1LL;
int64_t x2649 = -1LL;
int16_t x2651 = INT16_MAX;
int16_t x2670 = -1;
int8_t x2805 = -1;
int16_t x2806 = INT16_MIN;
int32_t x2807 = 1297049;
static uint32_t x2808 = 0U;
volatile uint64_t t50 = 3LLU;
static int16_t x2937 = 2;
uint32_t x3091 = 19U;
volatile int64_t t55 = 5LL;
volatile uint16_t x3397 = UINT16_MAX;
uint64_t x3538 = 843LLU;
volatile uint16_t x3539 = UINT16_MAX;
volatile int64_t t61 = -70168012024LL;
static uint32_t x3754 = 3U;
uint32_t x3771 = UINT32_MAX;
volatile uint32_t t64 = 1275595U;
int16_t x3921 = INT16_MIN;
uint64_t x3941 = 125659167479LLU;
uint16_t x3942 = 218U;
int8_t x3943 = -1;
int64_t x4077 = 0LL;
int8_t x4080 = 28;
int32_t x4117 = -1;
uint64_t x4127 = 5528077602LLU;
uint64_t x4279 = 4532010959659092792LLU;
static uint8_t x4302 = 110U;
uint8_t x4336 = 5U;
int64_t t77 = 199292625213754LL;
static int32_t x4429 = INT32_MAX;
uint64_t x4431 = 20LLU;
static volatile uint64_t t78 = 11374LLU;
volatile int16_t x4491 = -1;
int8_t x4502 = 7;
int16_t x4530 = 436;
static volatile uint16_t x4532 = 2U;
volatile uint32_t t85 = UINT32_MAX;
volatile int32_t t86 = 31207072;
static uint8_t x4710 = UINT8_MAX;
uint16_t x4719 = 135U;
int32_t x4801 = -1;
static volatile uint32_t x4879 = 53U;
volatile int64_t t91 = INT64_MAX;
uint32_t x4915 = 752243051U;
int64_t x4917 = -1LL;
int8_t x5121 = INT8_MAX;
int8_t x5122 = -1;
uint64_t x5203 = 2833544LLU;
int8_t x5394 = -1;
uint16_t x5397 = 11U;
int8_t x5399 = 0;
static uint16_t x5400 = 0U;


void f0(void) {
	volatile uint16_t x122 = 5U;
	static uint64_t x123 = UINT64_MAX;

	t0 = (x121|((x122+x123)>>x124));

	if (t0 != 32767LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x153 = INT32_MAX;
	uint16_t x154 = 7199U;
	static uint8_t x155 = 40U;
	volatile int32_t t1 = INT32_MAX;

	t1 = (x153|((x154+x155)>>x156));

	if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x449 = -1LL;
	uint16_t x451 = UINT16_MAX;
	volatile uint16_t x452 = 1U;
	volatile int64_t t2 = -175768358707LL;

	t2 = (x449|((x450+x451)>>x452));

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x493 = -60;
	int16_t x494 = -6521;
	int64_t x495 = INT64_MAX;
	volatile int16_t x496 = 13;
	volatile int64_t t3 = -54012201612451720LL;

	t3 = (x493|((x494+x495)>>x496));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x549 = INT32_MIN;
	uint16_t x551 = 2338U;
	uint16_t x552 = 39U;

	t4 = (x549|((x550+x551)>>x552));

	if (t4 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x662 = INT32_MIN;
	int64_t x663 = INT64_MAX;
	volatile int64_t t5 = 329422LL;

	t5 = (x661|((x662+x663)>>x664));

	if (t5 != 18014398505287679LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x669 = 1458789;
	int16_t x671 = INT16_MIN;
	uint8_t x672 = 8U;

	t6 = (x669|((x670+x671)>>x672));

	if (t6 != 16777189U) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x697 = 787331LLU;
	static int64_t x698 = INT64_MIN;
	static int16_t x700 = 1;
	volatile uint64_t t7 = 1168LLU;

	t7 = (x697|((x698+x699)>>x700));

	if (t7 != 4611687246615806863LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x702 = -1;
	int64_t x703 = 4163750LL;
	int64_t t8 = 23787288094645LL;

	t8 = (x701|((x702+x703)>>x704));

	if (t8 != 3326LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x761 = 7058077U;
	int32_t x762 = -1;
	volatile uint16_t x763 = 21054U;
	int8_t x764 = 3;
	static uint32_t t9 = 0U;

	t9 = (x761|((x762+x763)>>x764));

	if (t9 != 7060191U) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x841 = UINT8_MAX;
	int16_t x843 = INT16_MAX;
	uint8_t x844 = 2U;
	static uint32_t t10 = 10U;

	t10 = (x841|((x842+x843)>>x844));

	if (t10 != 30201855U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x877 = UINT32_MAX;
	volatile int64_t x878 = -1LL;
	static uint16_t x879 = UINT16_MAX;
	int64_t t11 = 0LL;

	t11 = (x877|((x878+x879)>>x880));

	if (t11 != 4294967295LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x913 = -468;
	static int16_t x914 = 678;
	int8_t x915 = -5;
	int8_t x916 = 1;

	t12 = (x913|((x914+x915)>>x916));

	if (t12 != -132) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x921 = INT64_MIN;
	uint16_t x922 = 5U;
	int64_t x923 = 1LL;
	static volatile int64_t t13 = INT64_MIN;

	t13 = (x921|((x922+x923)>>x924));

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x925 = INT8_MIN;
	int64_t x926 = INT64_MAX;
	int32_t x927 = -1;
	int32_t x928 = 3;
	int64_t t14 = 67094586LL;

	t14 = (x925|((x926+x927)>>x928));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x986 = UINT64_MAX;
	uint16_t x988 = 5U;
	volatile uint64_t t15 = 2786LLU;

	t15 = (x985|((x986+x987)>>x988));

	if (t15 != 576460752303423487LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x1021 = INT64_MAX;
	int8_t x1023 = INT8_MIN;
	int8_t x1024 = 1;
	volatile uint64_t t16 = 152588759454060LLU;

	t16 = (x1021|((x1022+x1023)>>x1024));

	if (t16 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x1033 = INT8_MIN;
	volatile int16_t x1034 = INT16_MAX;
	uint64_t x1035 = 268974843772193807LLU;
	uint8_t x1036 = 7U;
	uint64_t t17 = 6250171629LLU;

	t17 = (x1033|((x1034+x1035)>>x1036));

	if (t17 != 18446744073709551512LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x1169 = UINT8_MAX;
	int8_t x1170 = -1;
	static uint32_t x1171 = 11U;
	static uint32_t t18 = 1U;

	t18 = (x1169|((x1170+x1171)>>x1172));

	if (t18 != 255U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x1186 = 11756473114LL;
	int32_t x1187 = -1;
	int64_t t19 = -56393841846LL;

	t19 = (x1185|((x1186+x1187)>>x1188));

	if (t19 != -1258LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x1241 = INT64_MIN;
	volatile uint16_t x1242 = 4831U;
	static volatile uint64_t x1243 = 522492619LLU;
	int16_t x1244 = 0;
	volatile uint64_t t20 = 510365LLU;

	t20 = (x1241|((x1242+x1243)>>x1244));

	if (t20 != 9223372037377273258LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x1357 = 5405U;
	static int8_t x1358 = 0;
	static int8_t x1360 = 13;
	volatile int32_t t21 = 885455;

	t21 = (x1357|((x1358+x1359)>>x1360));

	if (t21 != 5407) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1361 = -22;
	static uint32_t x1363 = 5994U;
	volatile uint16_t x1364 = 1U;

	t22 = (x1361|((x1362+x1363)>>x1364));

	if (t22 != 4294967294U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x1389 = 41LLU;
	static uint8_t x1391 = UINT8_MAX;
	volatile uint8_t x1392 = 1U;
	volatile uint64_t t23 = 9212969100938LLU;

	t23 = (x1389|((x1390+x1391)>>x1392));

	if (t23 != 127LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1445 = UINT64_MAX;
	volatile uint16_t x1447 = 875U;
	static uint64_t x1448 = 0LLU;
	uint64_t t24 = UINT64_MAX;

	t24 = (x1445|((x1446+x1447)>>x1448));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x1581 = -2201171293977142LL;
	int8_t x1582 = INT8_MAX;
	uint8_t x1583 = UINT8_MAX;
	volatile int64_t t25 = -3781198557059886283LL;

	t25 = (x1581|((x1582+x1583)>>x1584));

	if (t25 != -2201171293977089LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1649 = UINT32_MAX;
	static uint32_t x1650 = UINT32_MAX;
	int64_t x1651 = 34377LL;
	uint32_t x1652 = 3U;
	int64_t t26 = -113990236953190905LL;

	t26 = (x1649|((x1650+x1651)>>x1652));

	if (t26 != 4294967295LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1697 = UINT32_MAX;
	static uint64_t x1698 = 16705811311758476LLU;
	int16_t x1699 = INT16_MIN;
	uint64_t t27 = 285672281776087178LLU;

	t27 = (x1697|((x1698+x1699)>>x1700));

	if (t27 != 8352908231835647LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1701 = 477;

	t28 = (x1701|((x1702+x1703)>>x1704));

	if (t28 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x1709 = 13U;
	int32_t x1710 = -1;
	int32_t t29 = -178;

	t29 = (x1709|((x1710+x1711)>>x1712));

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x1713 = -2;
	uint8_t x1714 = UINT8_MAX;
	static uint32_t x1715 = UINT32_MAX;
	static int16_t x1716 = 1;
	volatile uint32_t t30 = UINT32_MAX;

	t30 = (x1713|((x1714+x1715)>>x1716));

	if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x1733 = UINT32_MAX;
	uint64_t x1735 = 3200201LLU;
	volatile uint64_t t31 = 4577474945LLU;

	t31 = (x1733|((x1734+x1735)>>x1736));

	if (t31 != 4294967295LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x1745 = 54U;
	int16_t x1746 = -41;
	uint64_t x1747 = 3596311254911505LLU;
	uint16_t x1748 = 3U;
	static volatile uint64_t t32 = 24923726734314LLU;

	t32 = (x1745|((x1746+x1747)>>x1748));

	if (t32 != 449538906863935LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x1799 = UINT16_MAX;
	int32_t x1800 = 1;

	t33 = (x1797|((x1798+x1799)>>x1800));

	if (t33 != INT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1821 = -20;
	uint32_t x1822 = 3092406U;
	volatile int64_t x1823 = -6LL;
	int8_t x1824 = 25;

	t34 = (x1821|((x1822+x1823)>>x1824));

	if (t34 != -20LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x1829 = 1633U;
	static int32_t x1830 = -1;
	int32_t x1831 = INT32_MAX;
	int32_t x1832 = 1;
	static int32_t t35 = 3;

	t35 = (x1829|((x1830+x1831)>>x1832));

	if (t35 != 1073741823) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x1839 = 5265149622272LLU;

	t36 = (x1837|((x1838+x1839)>>x1840));

	if (t36 != 10283495423LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x1901 = INT64_MAX;
	volatile uint16_t x1903 = 104U;
	int32_t x1904 = 5;
	int64_t t37 = INT64_MAX;

	t37 = (x1901|((x1902+x1903)>>x1904));

	if (t37 != INT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x2129 = INT64_MAX;
	int8_t x2131 = INT8_MIN;
	volatile int8_t x2132 = 1;
	static int64_t t38 = INT64_MAX;

	t38 = (x2129|((x2130+x2131)>>x2132));

	if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x2173 = 8U;
	int8_t x2174 = INT8_MIN;
	int64_t x2175 = INT64_MAX;
	static uint16_t x2176 = 6U;
	static volatile int64_t t39 = 197570602828LL;

	t39 = (x2173|((x2174+x2175)>>x2176));

	if (t39 != 144115188075855869LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x2277 = INT32_MAX;
	uint16_t x2278 = 0U;
	uint32_t x2279 = 10348U;
	static uint8_t x2280 = 8U;
	static volatile uint32_t t40 = 6U;

	t40 = (x2277|((x2278+x2279)>>x2280));

	if (t40 != 2147483647U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x2357 = INT32_MIN;
	int32_t x2358 = INT32_MAX;
	int8_t x2359 = INT8_MIN;
	uint32_t x2360 = 29U;

	t41 = (x2357|((x2358+x2359)>>x2360));

	if (t41 != -2147483645) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x2434 = UINT64_MAX;
	volatile int8_t x2436 = 45;
	uint64_t t42 = 155039338428LLU;

	t42 = (x2433|((x2434+x2435)>>x2436));

	if (t42 != 8151957684879359LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2521 = INT16_MIN;
	int8_t x2522 = INT8_MIN;
	static uint32_t x2524 = 0U;
	volatile int32_t t43 = -60916054;

	t43 = (x2521|((x2522+x2523)>>x2524));

	if (t43 != -129) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x2630 = -1LL;
	int16_t x2631 = INT16_MAX;
	volatile int64_t t44 = -275894714945LL;

	t44 = (x2629|((x2630+x2631)>>x2632));

	if (t44 != 16383LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x2633 = INT64_MIN;
	int64_t x2634 = INT64_MAX;
	int8_t x2635 = INT8_MIN;
	uint8_t x2636 = 1U;
	int64_t t45 = 1116301LL;

	t45 = (x2633|((x2634+x2635)>>x2636));

	if (t45 != -4611686018427387969LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x2650 = 4579LLU;
	int16_t x2652 = 1;
	volatile uint64_t t46 = UINT64_MAX;

	t46 = (x2649|((x2650+x2651)>>x2652));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x2669 = UINT64_MAX;
	uint64_t x2671 = 81675622117119LLU;
	uint8_t x2672 = 4U;
	volatile uint64_t t47 = UINT64_MAX;

	t47 = (x2669|((x2670+x2671)>>x2672));

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x2677 = 59043671276173997LLU;
	int8_t x2678 = 60;
	uint64_t x2679 = UINT64_MAX;
	volatile uint8_t x2680 = 0U;
	uint64_t t48 = 97LLU;

	t48 = (x2677|((x2678+x2679)>>x2680));

	if (t48 != 59043671276174015LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t t49 = 123;

	t49 = (x2805|((x2806+x2807)>>x2808));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x2929 = 182142084142679549LLU;
	volatile uint64_t x2930 = UINT64_MAX;
	int8_t x2931 = INT8_MIN;
	volatile uint8_t x2932 = 3U;

	t50 = (x2929|((x2930+x2931)>>x2932));

	if (t50 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x2938 = 3;
	uint64_t x2939 = UINT64_MAX;
	uint8_t x2940 = 1U;
	uint64_t t51 = 1474839612213856LLU;

	t51 = (x2937|((x2938+x2939)>>x2940));

	if (t51 != 3LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x3089 = INT64_MIN;
	static uint64_t x3090 = 3926880423373LLU;
	volatile uint8_t x3092 = 2U;
	volatile uint64_t t52 = 61142LLU;

	t52 = (x3089|((x3090+x3091)>>x3092));

	if (t52 != 9223373018574881656LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x3313 = -1;
	uint32_t x3314 = 261033U;
	uint16_t x3315 = UINT16_MAX;
	uint8_t x3316 = 1U;
	uint32_t t53 = UINT32_MAX;

	t53 = (x3313|((x3314+x3315)>>x3316));

	if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x3317 = -1;
	static int8_t x3318 = -1;
	volatile int8_t x3319 = INT8_MAX;
	static uint8_t x3320 = 0U;
	volatile int32_t t54 = -12;

	t54 = (x3317|((x3318+x3319)>>x3320));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x3345 = INT64_MIN;
	volatile int16_t x3346 = INT16_MAX;
	uint16_t x3347 = 28U;
	int8_t x3348 = 0;

	t55 = (x3345|((x3346+x3347)>>x3348));

	if (t55 != -9223372036854743013LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x3398 = 1202847827LL;
	uint64_t x3399 = UINT64_MAX;
	static int8_t x3400 = 5;
	uint64_t t56 = 84885730542LLU;

	t56 = (x3397|((x3398+x3399)>>x3400));

	if (t56 != 37617663LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x3449 = 11U;
	int32_t x3450 = -172;
	static volatile uint64_t x3451 = 710212730908895LLU;
	uint16_t x3452 = 6U;
	volatile uint64_t t57 = 39LLU;

	t57 = (x3449|((x3450+x3451)>>x3452));

	if (t57 != 11097073920459LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x3465 = INT32_MIN;
	int64_t x3466 = -1LL;
	uint8_t x3467 = 30U;
	uint8_t x3468 = 9U;
	static int64_t t58 = 15201LL;

	t58 = (x3465|((x3466+x3467)>>x3468));

	if (t58 != -2147483648LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x3529 = UINT32_MAX;
	volatile int64_t x3530 = 226800095LL;
	volatile uint16_t x3531 = 11U;
	uint8_t x3532 = 1U;
	volatile int64_t t59 = 10823528LL;

	t59 = (x3529|((x3530+x3531)>>x3532));

	if (t59 != 4294967295LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x3537 = 1013U;
	uint8_t x3540 = 2U;
	volatile uint64_t t60 = 8104LLU;

	t60 = (x3537|((x3538+x3539)>>x3540));

	if (t60 != 17399LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x3549 = 102133554347579LL;
	static volatile uint8_t x3550 = UINT8_MAX;
	int16_t x3551 = 86;
	int32_t x3552 = 6;

	t61 = (x3549|((x3550+x3551)>>x3552));

	if (t61 != 102133554347583LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x3629 = -1;
	int16_t x3630 = 1;
	static volatile uint32_t x3631 = 1U;
	uint8_t x3632 = 1U;
	volatile uint32_t t62 = UINT32_MAX;

	t62 = (x3629|((x3630+x3631)>>x3632));

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x3753 = UINT8_MAX;
	static uint16_t x3755 = 0U;
	volatile int8_t x3756 = 7;
	volatile uint32_t t63 = 93932266U;

	t63 = (x3753|((x3754+x3755)>>x3756));

	if (t63 != 255U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x3769 = INT32_MAX;
	volatile int8_t x3770 = 0;
	uint8_t x3772 = 1U;

	t64 = (x3769|((x3770+x3771)>>x3772));

	if (t64 != 2147483647U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x3825 = INT16_MIN;
	uint8_t x3826 = 2U;
	int16_t x3827 = 713;
	static uint8_t x3828 = 6U;
	volatile int32_t t65 = -12631669;

	t65 = (x3825|((x3826+x3827)>>x3828));

	if (t65 != -32757) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x3877 = 44U;
	volatile uint32_t x3878 = UINT32_MAX;
	int8_t x3879 = -1;
	static uint16_t x3880 = 0U;
	volatile uint32_t t66 = 4708627U;

	t66 = (x3877|((x3878+x3879)>>x3880));

	if (t66 != 4294967294U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x3922 = INT16_MAX;
	int16_t x3923 = INT16_MAX;
	static uint16_t x3924 = 5U;
	int32_t t67 = 609001;

	t67 = (x3921|((x3922+x3923)>>x3924));

	if (t67 != -30721) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x3944 = 7LL;
	uint64_t t68 = 8411318396272LLU;

	t68 = (x3941|((x3942+x3943)>>x3944));

	if (t68 != 125659167479LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x3953 = INT16_MAX;
	volatile int32_t x3954 = INT32_MAX;
	int64_t x3955 = -1LL;
	uint16_t x3956 = 2U;
	volatile int64_t t69 = 1001LL;

	t69 = (x3953|((x3954+x3955)>>x3956));

	if (t69 != 536870911LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x4001 = UINT32_MAX;
	uint8_t x4002 = 11U;
	volatile uint8_t x4003 = 120U;
	volatile int16_t x4004 = 1;
	uint32_t t70 = UINT32_MAX;

	t70 = (x4001|((x4002+x4003)>>x4004));

	if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x4078 = 34195331576382LL;
	uint8_t x4079 = 3U;
	volatile int64_t t71 = -126160LL;

	t71 = (x4077|((x4078+x4079)>>x4080));

	if (t71 != 127387LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x4118 = 16080;
	uint8_t x4119 = 3U;
	volatile uint8_t x4120 = 0U;
	int32_t t72 = -117592;

	t72 = (x4117|((x4118+x4119)>>x4120));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x4125 = -1;
	int8_t x4126 = 1;
	int16_t x4128 = 3;
	uint64_t t73 = UINT64_MAX;

	t73 = (x4125|((x4126+x4127)>>x4128));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x4277 = UINT32_MAX;
	static int8_t x4278 = INT8_MIN;
	uint32_t x4280 = 3U;
	static volatile uint64_t t74 = 57332LLU;

	t74 = (x4277|((x4278+x4279)>>x4280));

	if (t74 != 566501371684061183LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x4301 = 3;
	uint64_t x4303 = 2104200151290389LLU;
	volatile int8_t x4304 = 44;
	uint64_t t75 = 445LLU;

	t75 = (x4301|((x4302+x4303)>>x4304));

	if (t75 != 119LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x4333 = INT64_MAX;
	int64_t x4334 = INT64_MIN;
	uint64_t x4335 = 116642LLU;
	volatile uint64_t t76 = 153077149283304968LLU;

	t76 = (x4333|((x4334+x4335)>>x4336));

	if (t76 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x4349 = 5LL;
	int32_t x4350 = INT32_MIN;
	int64_t x4351 = INT64_MAX;
	uint16_t x4352 = 12U;

	t77 = (x4349|((x4350+x4351)>>x4352));

	if (t77 != 2251799813160959LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x4430 = INT64_MAX;
	volatile int16_t x4432 = 1;

	t78 = (x4429|((x4430+x4431)>>x4432));

	if (t78 != 4611686020574871551LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x4441 = 0U;
	static volatile uint32_t x4442 = 22302U;
	uint16_t x4443 = 13U;
	static volatile int8_t x4444 = 0;
	uint32_t t79 = 3U;

	t79 = (x4441|((x4442+x4443)>>x4444));

	if (t79 != 22315U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x4453 = -3056529514LL;
	int16_t x4454 = 1882;
	static volatile uint16_t x4455 = UINT16_MAX;
	uint8_t x4456 = 4U;
	volatile int64_t t80 = -382LL;

	t80 = (x4453|((x4454+x4455)>>x4456));

	if (t80 != -3056525321LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x4489 = 0U;
	static int8_t x4490 = 3;
	uint8_t x4492 = 0U;
	int32_t t81 = -1;

	t81 = (x4489|((x4490+x4491)>>x4492));

	if (t81 != 2) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x4501 = INT16_MAX;
	int16_t x4503 = -1;
	static volatile uint8_t x4504 = 5U;
	static volatile int32_t t82 = 89410;

	t82 = (x4501|((x4502+x4503)>>x4504));

	if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x4529 = 2U;
	volatile int16_t x4531 = 3;
	volatile uint32_t t83 = 637U;

	t83 = (x4529|((x4530+x4531)>>x4532));

	if (t83 != 111U) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x4565 = INT16_MAX;
	int32_t x4566 = 96892665;
	static volatile uint16_t x4567 = 4105U;
	volatile uint8_t x4568 = 0U;
	volatile int32_t t84 = -2312519;

	t84 = (x4565|((x4566+x4567)>>x4568));

	if (t84 != 96927743) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x4577 = -1;
	int32_t x4578 = -35210;
	uint32_t x4579 = 341U;
	int32_t x4580 = 1;

	t85 = (x4577|((x4578+x4579)>>x4580));

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x4585 = 1694;
	int8_t x4586 = INT8_MAX;
	uint8_t x4587 = 1U;
	static int16_t x4588 = 1;

	t86 = (x4585|((x4586+x4587)>>x4588));

	if (t86 != 1758) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x4625 = -1;
	uint16_t x4626 = 3786U;
	int8_t x4627 = 1;
	volatile uint8_t x4628 = 17U;
	int32_t t87 = 338;

	t87 = (x4625|((x4626+x4627)>>x4628));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x4709 = UINT8_MAX;
	volatile uint16_t x4711 = UINT16_MAX;
	uint16_t x4712 = 3U;
	volatile int32_t t88 = -1;

	t88 = (x4709|((x4710+x4711)>>x4712));

	if (t88 != 8447) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x4717 = 25U;
	int32_t x4718 = 1;
	uint8_t x4720 = 1U;
	volatile uint32_t t89 = 8U;

	t89 = (x4717|((x4718+x4719)>>x4720));

	if (t89 != 93U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x4802 = INT64_MIN;
	uint64_t x4803 = 3790868LLU;
	uint32_t x4804 = 30U;
	volatile uint64_t t90 = UINT64_MAX;

	t90 = (x4801|((x4802+x4803)>>x4804));

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x4877 = INT64_MAX;
	int16_t x4878 = INT16_MIN;
	static int16_t x4880 = 25;

	t91 = (x4877|((x4878+x4879)>>x4880));

	if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x4913 = 81U;
	int8_t x4914 = -15;
	int16_t x4916 = 14;
	uint32_t t92 = 108889U;

	t92 = (x4913|((x4914+x4915)>>x4916));

	if (t92 != 45913U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x4918 = INT8_MIN;
	uint64_t x4919 = 5733LLU;
	uint8_t x4920 = 0U;
	uint64_t t93 = UINT64_MAX;

	t93 = (x4917|((x4918+x4919)>>x4920));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x4925 = -16302LL;
	uint32_t x4926 = 46130740U;
	int64_t x4927 = -9LL;
	volatile int8_t x4928 = 12;
	volatile int64_t t94 = 3458309007LL;

	t94 = (x4925|((x4926+x4927)>>x4928));

	if (t94 != -5122LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x4937 = UINT32_MAX;
	static int8_t x4938 = 0;
	static uint32_t x4939 = 22U;
	int8_t x4940 = 13;
	volatile uint32_t t95 = UINT32_MAX;

	t95 = (x4937|((x4938+x4939)>>x4940));

	if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x5123 = UINT64_MAX;
	uint32_t x5124 = 31U;
	uint64_t t96 = 7LLU;

	t96 = (x5121|((x5122+x5123)>>x5124));

	if (t96 != 8589934591LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x5201 = 346U;
	int16_t x5202 = -1;
	uint16_t x5204 = 13U;
	static uint64_t t97 = 1021LLU;

	t97 = (x5201|((x5202+x5203)>>x5204));

	if (t97 != 347LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x5393 = UINT32_MAX;
	volatile int64_t x5395 = INT64_MAX;
	static uint16_t x5396 = 1U;
	volatile int64_t t98 = -186074490014673776LL;

	t98 = (x5393|((x5394+x5395)>>x5396));

	if (t98 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x5398 = 14512726U;
	uint32_t t99 = 399635U;

	t99 = (x5397|((x5398+x5399)>>x5400));

	if (t99 != 14512735U) { NG(); } else { ; }
	
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

