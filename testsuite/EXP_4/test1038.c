#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x172 = 4;
volatile int8_t x425 = -1;
uint64_t x427 = 192773711986995LLU;
static int64_t x613 = -1LL;
uint64_t x615 = 32121281992260919LLU;
uint64_t x616 = 3LLU;
volatile int32_t t5 = INT32_MIN;
int32_t x762 = 119836;
volatile uint16_t x764 = 3U;
uint32_t x985 = UINT32_MAX;
volatile uint32_t t13 = 56583628U;
uint16_t x1245 = UINT16_MAX;
volatile uint8_t x1246 = 4U;
int64_t t15 = 11004638LL;
uint16_t x1511 = 0U;
volatile uint32_t x1551 = 2095537U;
static uint32_t x1649 = 297U;
static uint8_t x1652 = 1U;
uint16_t x1765 = UINT16_MAX;
uint64_t x1766 = UINT64_MAX;
uint8_t x1768 = 7U;
volatile uint8_t x1912 = 8U;
uint8_t x2040 = 2U;
static volatile int8_t x2072 = 2;
volatile uint8_t x2224 = 5U;
volatile int32_t t28 = 3668;
static volatile int64_t t30 = 2LL;
static uint32_t x2340 = 0U;
int16_t x2507 = INT16_MAX;
static int64_t x2508 = 6LL;
volatile uint32_t t34 = 45121U;
uint32_t x2534 = UINT32_MAX;
volatile int64_t x2559 = 5LL;
uint8_t x2579 = 12U;
int32_t t37 = -73324958;
int32_t x2587 = 0;
uint16_t x2789 = 514U;
int32_t x2822 = INT32_MIN;
uint32_t x2823 = 10965U;
int64_t x2853 = INT64_MAX;
int32_t x2919 = INT32_MAX;
int32_t t46 = 84343280;
volatile uint16_t x2943 = 481U;
static uint8_t x2944 = 18U;
volatile uint8_t x2959 = UINT8_MAX;
int8_t x3165 = INT8_MAX;
volatile uint64_t t50 = 1108855129362389LLU;
volatile uint32_t t51 = 101831U;
int8_t x3393 = INT8_MIN;
static uint16_t x3403 = 139U;
static int16_t x3514 = -1;
int16_t x3516 = 1;
volatile uint64_t x3767 = UINT64_MAX;
static int8_t x3768 = 1;
volatile uint64_t t57 = 113LLU;
uint16_t x3955 = 7U;
uint64_t t63 = 266LLU;
static volatile int8_t x4132 = 1;
volatile uint64_t t67 = 1LLU;
int16_t x4345 = -12;
int16_t x4358 = INT16_MAX;
int8_t x4360 = 1;
volatile int16_t x4430 = INT16_MIN;
uint8_t x4432 = 1U;
uint64_t x4643 = 3127013LLU;
int32_t x4682 = 87346679;
volatile int8_t x4788 = 1;
uint8_t x4822 = 39U;
uint16_t x4831 = 2U;
static int32_t t76 = -812;
uint16_t x4903 = 15U;
volatile int64_t t78 = INT64_MIN;
uint8_t x4928 = 35U;
int32_t t80 = 0;
uint64_t x5035 = 8715865908783LLU;
int16_t x5074 = -12868;
int32_t x5193 = 1349;
int64_t t83 = 3882081054470149879LL;
static volatile int8_t x5385 = -1;
static volatile uint64_t t86 = 252LLU;
static volatile uint8_t x5798 = UINT8_MAX;
volatile int8_t x5804 = 25;
uint16_t x5889 = 15386U;
volatile uint32_t t91 = 6U;
volatile int8_t x5906 = -1;
static uint32_t x5907 = UINT32_MAX;
volatile uint64_t t93 = 148501169119645LLU;
int64_t x5947 = 800145315570753502LL;
static int8_t x5948 = 0;
int64_t t94 = 5791757658020LL;
volatile uint64_t x6069 = 58091621480LLU;
uint16_t x6071 = UINT16_MAX;
static uint8_t x6126 = 23U;


void f0(void) {
	volatile uint16_t x153 = UINT16_MAX;
	int64_t x154 = 10LL;
	uint16_t x155 = UINT16_MAX;
	uint8_t x156 = 1U;
	int64_t t0 = 178786919275LL;

	t0 = (x153&(x154-(x155>>x156)));

	if (t0 != 32779LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x169 = INT64_MIN;
	uint16_t x170 = 26U;
	static uint16_t x171 = 158U;
	static int64_t t1 = 122494143LL;

	t1 = (x169&(x170-(x171>>x172)));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x426 = INT64_MIN;
	static uint8_t x428 = 60U;
	volatile uint64_t t2 = 897629LLU;

	t2 = (x425&(x426-(x427>>x428)));

	if (t2 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x441 = 3U;
	int64_t x442 = -6LL;
	int32_t x443 = 1;
	static volatile uint16_t x444 = 7U;
	static volatile int64_t t3 = 3LL;

	t3 = (x441&(x442-(x443>>x444)));

	if (t3 != 2LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x614 = 804209U;
	static volatile uint64_t t4 = 785296628133LLU;

	t4 = (x613&(x614-(x615>>x616)));

	if (t4 != 18442728913461323211LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x673 = INT32_MIN;
	volatile int16_t x674 = INT16_MIN;
	static volatile int8_t x675 = 1;
	volatile uint32_t x676 = 19U;

	t5 = (x673&(x674-(x675>>x676)));

	if (t5 != INT32_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x689 = 1U;
	uint32_t x690 = 18139U;
	int16_t x691 = INT16_MAX;
	uint8_t x692 = 13U;
	volatile uint32_t t6 = 329449U;

	t6 = (x689&(x690-(x691>>x692)));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x761 = 68963162;
	volatile uint32_t x763 = 51744U;
	uint32_t t7 = 10U;

	t7 = (x761&(x762-(x763>>x764)));

	if (t7 != 2648U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x825 = 13U;
	uint8_t x826 = UINT8_MAX;
	uint64_t x827 = 25176266034LLU;
	int16_t x828 = 0;
	uint64_t t8 = 153081LLU;

	t8 = (x825&(x826-(x827>>x828)));

	if (t8 != 13LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x941 = INT32_MIN;
	int64_t x942 = INT64_MIN;
	uint64_t x943 = UINT64_MAX;
	uint8_t x944 = 28U;
	uint64_t t9 = 50079397622515LLU;

	t9 = (x941&(x942-(x943>>x944)));

	if (t9 != 9223371968135299072LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int32_t x957 = -1;
	uint32_t x958 = 3216U;
	volatile uint16_t x959 = 15U;
	static uint8_t x960 = 1U;
	uint32_t t10 = 64965533U;

	t10 = (x957&(x958-(x959>>x960)));

	if (t10 != 3209U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x986 = INT16_MIN;
	volatile int64_t x987 = INT64_MAX;
	uint8_t x988 = 9U;
	int64_t t11 = 1171095388689799380LL;

	t11 = (x985&(x986-(x987>>x988)));

	if (t11 != 4294934529LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x1089 = INT32_MIN;
	volatile int32_t x1090 = INT32_MIN;
	int64_t x1091 = 4LL;
	int16_t x1092 = 7;
	volatile int64_t t12 = 511600745LL;

	t12 = (x1089&(x1090-(x1091>>x1092)));

	if (t12 != -2147483648LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x1173 = -1;
	volatile int16_t x1174 = INT16_MAX;
	uint32_t x1175 = 1U;
	static volatile int8_t x1176 = 0;

	t13 = (x1173&(x1174-(x1175>>x1176)));

	if (t13 != 32766U) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x1247 = UINT8_MAX;
	uint8_t x1248 = 0U;
	volatile int32_t t14 = -95;

	t14 = (x1245&(x1246-(x1247>>x1248)));

	if (t14 != 65285) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x1401 = 3U;
	int64_t x1402 = INT64_MIN;
	uint8_t x1403 = 1U;
	uint16_t x1404 = 3U;

	t15 = (x1401&(x1402-(x1403>>x1404)));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x1497 = 24;
	volatile int32_t x1498 = 0;
	static int32_t x1499 = INT32_MAX;
	static uint8_t x1500 = 15U;
	volatile int32_t t16 = -21;

	t16 = (x1497&(x1498-(x1499>>x1500)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x1509 = 92071808;
	uint64_t x1510 = 147567405490LLU;
	static int8_t x1512 = 8;
	static uint64_t t17 = 4396515770LLU;

	t17 = (x1509&(x1510-(x1511>>x1512)));

	if (t17 != 19980672LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x1537 = INT64_MAX;
	int8_t x1538 = -23;
	int16_t x1539 = INT16_MAX;
	uint8_t x1540 = 30U;
	int64_t t18 = -55821212012LL;

	t18 = (x1537&(x1538-(x1539>>x1540)));

	if (t18 != 9223372036854775785LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x1549 = 29U;
	int16_t x1550 = INT16_MAX;
	volatile uint8_t x1552 = 28U;
	volatile uint32_t t19 = 3962U;

	t19 = (x1549&(x1550-(x1551>>x1552)));

	if (t19 != 29U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1650 = 7111;
	volatile uint8_t x1651 = 28U;
	uint32_t t20 = 4284214U;

	t20 = (x1649&(x1650-(x1651>>x1652)));

	if (t20 != 297U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x1767 = INT64_MAX;
	static volatile uint64_t t21 = 312LLU;

	t21 = (x1765&(x1766-(x1767>>x1768)));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x1873 = UINT8_MAX;
	uint32_t x1874 = UINT32_MAX;
	volatile int64_t x1875 = INT64_MAX;
	uint32_t x1876 = 3U;
	static volatile int64_t t22 = 13LL;

	t22 = (x1873&(x1874-(x1875>>x1876)));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1909 = INT8_MIN;
	int16_t x1910 = INT16_MIN;
	volatile uint8_t x1911 = UINT8_MAX;
	volatile int32_t t23 = -16684405;

	t23 = (x1909&(x1910-(x1911>>x1912)));

	if (t23 != -32768) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x2029 = 10U;
	volatile uint8_t x2030 = 23U;
	uint32_t x2031 = 25U;
	volatile uint8_t x2032 = 5U;
	volatile uint32_t t24 = 2U;

	t24 = (x2029&(x2030-(x2031>>x2032)));

	if (t24 != 2U) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x2037 = INT8_MIN;
	volatile int64_t x2038 = -120LL;
	static volatile uint32_t x2039 = 50747U;
	int64_t t25 = -45465613900492LL;

	t25 = (x2037&(x2038-(x2039>>x2040)));

	if (t25 != -12928LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x2069 = 7;
	static int8_t x2070 = -1;
	uint32_t x2071 = 1U;
	static uint32_t t26 = 352357U;

	t26 = (x2069&(x2070-(x2071>>x2072)));

	if (t26 != 7U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x2221 = INT64_MIN;
	int64_t x2222 = INT64_MAX;
	int32_t x2223 = 188523149;
	static volatile int64_t t27 = -20LL;

	t27 = (x2221&(x2222-(x2223>>x2224)));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x2245 = 970U;
	int8_t x2246 = -1;
	int32_t x2247 = 6;
	static int8_t x2248 = 1;

	t28 = (x2245&(x2246-(x2247>>x2248)));

	if (t28 != 968) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x2249 = INT32_MIN;
	volatile int8_t x2250 = INT8_MAX;
	uint32_t x2251 = 237U;
	uint16_t x2252 = 14U;
	volatile uint32_t t29 = 55010U;

	t29 = (x2249&(x2250-(x2251>>x2252)));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x2265 = INT64_MAX;
	int8_t x2266 = INT8_MIN;
	uint32_t x2267 = UINT32_MAX;
	static uint8_t x2268 = 2U;

	t30 = (x2265&(x2266-(x2267>>x2268)));

	if (t30 != 3221225345LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x2285 = INT8_MIN;
	uint32_t x2286 = UINT32_MAX;
	uint8_t x2287 = UINT8_MAX;
	uint32_t x2288 = 16U;
	uint32_t t31 = 97387209U;

	t31 = (x2285&(x2286-(x2287>>x2288)));

	if (t31 != 4294967168U) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x2297 = -9391;
	uint32_t x2298 = UINT32_MAX;
	static int8_t x2299 = INT8_MAX;
	static int16_t x2300 = 0;
	volatile uint32_t t32 = 326862503U;

	t32 = (x2297&(x2298-(x2299>>x2300)));

	if (t32 != 4294957824U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x2337 = INT64_MIN;
	uint16_t x2338 = 18U;
	int64_t x2339 = 3423467563268970LL;
	volatile int64_t t33 = INT64_MIN;

	t33 = (x2337&(x2338-(x2339>>x2340)));

	if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x2505 = -1;
	uint32_t x2506 = 13U;

	t34 = (x2505&(x2506-(x2507>>x2508)));

	if (t34 != 4294966798U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x2533 = INT64_MIN;
	int16_t x2535 = INT16_MAX;
	uint8_t x2536 = 1U;
	volatile int64_t t35 = 625LL;

	t35 = (x2533&(x2534-(x2535>>x2536)));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x2557 = 18U;
	int8_t x2558 = 19;
	uint8_t x2560 = 1U;
	volatile int64_t t36 = 10473LL;

	t36 = (x2557&(x2558-(x2559>>x2560)));

	if (t36 != 16LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x2577 = INT8_MIN;
	int8_t x2578 = INT8_MAX;
	int8_t x2580 = 1;

	t37 = (x2577&(x2578-(x2579>>x2580)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x2585 = -1;
	int8_t x2586 = INT8_MIN;
	volatile uint64_t x2588 = 0LLU;
	static int32_t t38 = -792298;

	t38 = (x2585&(x2586-(x2587>>x2588)));

	if (t38 != -128) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x2665 = INT64_MIN;
	static uint32_t x2666 = UINT32_MAX;
	uint64_t x2667 = UINT64_MAX;
	volatile uint64_t x2668 = 55LLU;
	uint64_t t39 = 20127215756767246LLU;

	t39 = (x2665&(x2666-(x2667>>x2668)));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x2673 = 4U;
	int32_t x2674 = INT32_MIN;
	volatile int64_t x2675 = 28565LL;
	uint16_t x2676 = 5U;
	int64_t t40 = -142031LL;

	t40 = (x2673&(x2674-(x2675>>x2676)));

	if (t40 != 4LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x2741 = INT64_MIN;
	static int64_t x2742 = -1LL;
	uint16_t x2743 = UINT16_MAX;
	uint8_t x2744 = 1U;
	volatile int64_t t41 = INT64_MIN;

	t41 = (x2741&(x2742-(x2743>>x2744)));

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x2790 = -3;
	volatile uint64_t x2791 = UINT64_MAX;
	static volatile int8_t x2792 = 9;
	volatile uint64_t t42 = 2776281LLU;

	t42 = (x2789&(x2790-(x2791>>x2792)));

	if (t42 != 514LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x2821 = INT32_MIN;
	int16_t x2824 = 25;
	static volatile uint32_t t43 = 1237996042U;

	t43 = (x2821&(x2822-(x2823>>x2824)));

	if (t43 != 2147483648U) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x2854 = 5U;
	int64_t x2855 = 129LL;
	int8_t x2856 = 1;
	volatile int64_t t44 = 14299464034537LL;

	t44 = (x2853&(x2854-(x2855>>x2856)));

	if (t44 != 9223372036854775749LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x2889 = INT64_MAX;
	int8_t x2890 = INT8_MAX;
	int32_t x2891 = INT32_MAX;
	volatile uint32_t x2892 = 1U;
	volatile int64_t t45 = -2935145LL;

	t45 = (x2889&(x2890-(x2891>>x2892)));

	if (t45 != 9223372035781034112LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x2917 = 12770753;
	volatile int16_t x2918 = -1;
	static uint8_t x2920 = 3U;

	t46 = (x2917&(x2918-(x2919>>x2920)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x2941 = 23648;
	int64_t x2942 = 454464952998271751LL;
	int64_t t47 = -64924835191LL;

	t47 = (x2941&(x2942-(x2943>>x2944)));

	if (t47 != 6144LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x2949 = -1;
	uint8_t x2950 = 4U;
	int32_t x2951 = INT32_MAX;
	uint8_t x2952 = 11U;
	volatile int32_t t48 = -148639271;

	t48 = (x2949&(x2950-(x2951>>x2952)));

	if (t48 != -1048571) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x2957 = 112847783417LLU;
	int16_t x2958 = INT16_MAX;
	int16_t x2960 = 7;
	uint64_t t49 = 895832LLU;

	t49 = (x2957&(x2958-(x2959>>x2960)));

	if (t49 != 1528LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x3166 = UINT64_MAX;
	static volatile int8_t x3167 = INT8_MAX;
	int16_t x3168 = 27;

	t50 = (x3165&(x3166-(x3167>>x3168)));

	if (t50 != 127LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x3285 = 1089491735U;
	volatile uint32_t x3286 = UINT32_MAX;
	static uint8_t x3287 = UINT8_MAX;
	uint8_t x3288 = 19U;

	t51 = (x3285&(x3286-(x3287>>x3288)));

	if (t51 != 1089491735U) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int16_t x3394 = 640;
	uint8_t x3395 = UINT8_MAX;
	static uint64_t x3396 = 3LLU;
	volatile int32_t t52 = -127;

	t52 = (x3393&(x3394-(x3395>>x3396)));

	if (t52 != 512) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x3401 = UINT8_MAX;
	int16_t x3402 = -1;
	uint32_t x3404 = 1U;
	volatile int32_t t53 = 8;

	t53 = (x3401&(x3402-(x3403>>x3404)));

	if (t53 != 186) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x3513 = 15;
	uint32_t x3515 = 756U;
	static uint32_t t54 = 54452U;

	t54 = (x3513&(x3514-(x3515>>x3516)));

	if (t54 != 5U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x3561 = 40U;
	uint8_t x3562 = UINT8_MAX;
	static int16_t x3563 = INT16_MAX;
	static int16_t x3564 = 2;
	int32_t t55 = 32250202;

	t55 = (x3561&(x3562-(x3563>>x3564)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x3721 = INT16_MIN;
	uint8_t x3722 = 39U;
	int16_t x3723 = INT16_MAX;
	uint8_t x3724 = 2U;
	static volatile int32_t t56 = -104;

	t56 = (x3721&(x3722-(x3723>>x3724)));

	if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x3765 = 841965;
	static uint32_t x3766 = 39U;

	t57 = (x3765&(x3766-(x3767>>x3768)));

	if (t57 != 40LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x3909 = -1;
	int64_t x3910 = -1LL;
	uint32_t x3911 = 7253319U;
	uint32_t x3912 = 5U;
	volatile int64_t t58 = -155261LL;

	t58 = (x3909&(x3910-(x3911>>x3912)));

	if (t58 != -226667LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x3953 = -4;
	static int8_t x3954 = 1;
	int8_t x3956 = 12;
	int32_t t59 = -1;

	t59 = (x3953&(x3954-(x3955>>x3956)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x3977 = UINT64_MAX;
	static int16_t x3978 = INT16_MIN;
	int32_t x3979 = INT32_MAX;
	uint8_t x3980 = 2U;
	volatile uint64_t t60 = 233LLU;

	t60 = (x3977&(x3978-(x3979>>x3980)));

	if (t60 != 18446744073172647937LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x4053 = INT64_MIN;
	int32_t x4054 = -1;
	uint8_t x4055 = 1U;
	uint16_t x4056 = 7U;
	static volatile int64_t t61 = INT64_MIN;

	t61 = (x4053&(x4054-(x4055>>x4056)));

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x4061 = -1;
	int64_t x4062 = -1LL;
	int8_t x4063 = 4;
	uint8_t x4064 = 5U;
	int64_t t62 = 22315LL;

	t62 = (x4061&(x4062-(x4063>>x4064)));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x4101 = UINT32_MAX;
	uint64_t x4102 = 823334378787005LLU;
	volatile int64_t x4103 = INT64_MAX;
	volatile int32_t x4104 = 42;

	t63 = (x4101&(x4102-(x4103>>x4104)));

	if (t63 != 2030948542LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x4113 = -1;
	int32_t x4114 = INT32_MIN;
	uint32_t x4115 = UINT32_MAX;
	static uint8_t x4116 = 1U;
	static volatile uint32_t t64 = 78016550U;

	t64 = (x4113&(x4114-(x4115>>x4116)));

	if (t64 != 1U) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x4129 = INT8_MIN;
	volatile int16_t x4130 = INT16_MIN;
	uint32_t x4131 = 121411139U;
	volatile uint32_t t65 = 457956U;

	t65 = (x4129&(x4130-(x4131>>x4132)));

	if (t65 != 4234228864U) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x4133 = INT8_MIN;
	static volatile int16_t x4134 = 0;
	int16_t x4135 = INT16_MAX;
	int16_t x4136 = 2;
	static int32_t t66 = -29;

	t66 = (x4133&(x4134-(x4135>>x4136)));

	if (t66 != -8192) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x4149 = 360082668412844LLU;
	volatile uint8_t x4150 = 17U;
	int16_t x4151 = 28;
	int8_t x4152 = 3;

	t67 = (x4149&(x4150-(x4151>>x4152)));

	if (t67 != 12LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x4346 = INT8_MIN;
	int8_t x4347 = INT8_MAX;
	static volatile uint32_t x4348 = 7U;
	static volatile int32_t t68 = -1104;

	t68 = (x4345&(x4346-(x4347>>x4348)));

	if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x4357 = INT32_MIN;
	static uint64_t x4359 = 1704222363047LLU;
	volatile uint64_t t69 = 436798084570LLU;

	t69 = (x4357&(x4358-(x4359>>x4360)));

	if (t69 != 18446743221158543360LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x4429 = INT16_MAX;
	volatile int32_t x4431 = INT32_MAX;
	int32_t t70 = -30641111;

	t70 = (x4429&(x4430-(x4431>>x4432)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x4641 = INT16_MAX;
	int64_t x4642 = -1LL;
	int8_t x4644 = 0;
	static uint64_t t71 = 3578147493082511LLU;

	t71 = (x4641&(x4642-(x4643>>x4644)));

	if (t71 != 18714LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x4681 = 95U;
	volatile uint64_t x4683 = 6409422LLU;
	volatile int8_t x4684 = 4;
	volatile uint64_t t72 = 506433053LLU;

	t72 = (x4681&(x4682-(x4683>>x4684)));

	if (t72 != 11LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x4785 = INT32_MIN;
	static int64_t x4786 = 1023257217LL;
	int64_t x4787 = 501LL;
	int64_t t73 = 14787062928LL;

	t73 = (x4785&(x4786-(x4787>>x4788)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x4821 = INT16_MAX;
	uint32_t x4823 = 889191644U;
	int8_t x4824 = 14;
	uint32_t t74 = 2047U;

	t74 = (x4821&(x4822-(x4823>>x4824)));

	if (t74 != 11304U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x4829 = INT64_MAX;
	uint64_t x4830 = 22299LLU;
	static int8_t x4832 = 1;
	volatile uint64_t t75 = 11153325LLU;

	t75 = (x4829&(x4830-(x4831>>x4832)));

	if (t75 != 22298LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x4861 = 27U;
	int8_t x4862 = -1;
	uint16_t x4863 = 6U;
	uint8_t x4864 = 7U;

	t76 = (x4861&(x4862-(x4863>>x4864)));

	if (t76 != 27) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x4865 = -1;
	int32_t x4866 = -1;
	volatile uint64_t x4867 = 10LLU;
	uint32_t x4868 = 58U;
	uint64_t t77 = UINT64_MAX;

	t77 = (x4865&(x4866-(x4867>>x4868)));

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x4901 = INT64_MIN;
	static int64_t x4902 = -1LL;
	uint8_t x4904 = 31U;

	t78 = (x4901&(x4902-(x4903>>x4904)));

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x4925 = UINT32_MAX;
	volatile int8_t x4926 = -1;
	int64_t x4927 = 13467995LL;
	volatile int64_t t79 = 1600LL;

	t79 = (x4925&(x4926-(x4927>>x4928)));

	if (t79 != 4294967295LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x4941 = 1U;
	int8_t x4942 = INT8_MIN;
	uint16_t x4943 = UINT16_MAX;
	volatile int16_t x4944 = 13;

	t80 = (x4941&(x4942-(x4943>>x4944)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x5033 = -1;
	volatile int64_t x5034 = -68LL;
	uint16_t x5036 = 18U;
	volatile uint64_t t81 = 111878160216199LLU;

	t81 = (x5033&(x5034-(x5035>>x5036)));

	if (t81 != 18446744073676303159LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x5073 = INT32_MIN;
	static int32_t x5075 = 387;
	int64_t x5076 = 11LL;
	volatile int32_t t82 = INT32_MIN;

	t82 = (x5073&(x5074-(x5075>>x5076)));

	if (t82 != INT32_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x5194 = 13U;
	static int64_t x5195 = 15858379624LL;
	static uint16_t x5196 = 19U;

	t83 = (x5193&(x5194-(x5195>>x5196)));

	if (t83 != 324LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x5229 = 11;
	int16_t x5230 = 0;
	int32_t x5231 = INT32_MAX;
	uint8_t x5232 = 0U;
	int32_t t84 = 1397124;

	t84 = (x5229&(x5230-(x5231>>x5232)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int16_t x5301 = INT16_MAX;
	uint8_t x5302 = 121U;
	static uint32_t x5303 = 922U;
	int16_t x5304 = 0;
	uint32_t t85 = 977654207U;

	t85 = (x5301&(x5302-(x5303>>x5304)));

	if (t85 != 31967U) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x5386 = UINT8_MAX;
	uint64_t x5387 = UINT64_MAX;
	uint8_t x5388 = 7U;

	t86 = (x5385&(x5386-(x5387>>x5388)));

	if (t86 != 18302628885633696000LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x5445 = INT32_MIN;
	uint32_t x5446 = UINT32_MAX;
	static uint32_t x5447 = 40485U;
	volatile uint8_t x5448 = 0U;
	volatile uint32_t t87 = 9803U;

	t87 = (x5445&(x5446-(x5447>>x5448)));

	if (t87 != 2147483648U) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x5613 = 133LLU;
	int16_t x5614 = INT16_MIN;
	uint64_t x5615 = UINT64_MAX;
	int8_t x5616 = 1;
	volatile uint64_t t88 = 30021188337LLU;

	t88 = (x5613&(x5614-(x5615>>x5616)));

	if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x5797 = 136U;
	uint16_t x5799 = 0U;
	volatile uint8_t x5800 = 17U;
	volatile uint32_t t89 = 239U;

	t89 = (x5797&(x5798-(x5799>>x5800)));

	if (t89 != 136U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x5801 = INT64_MIN;
	static int16_t x5802 = 13;
	int8_t x5803 = 0;
	volatile int64_t t90 = -308494842213819LL;

	t90 = (x5801&(x5802-(x5803>>x5804)));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x5890 = INT8_MAX;
	uint32_t x5891 = 1881329U;
	int8_t x5892 = 6;

	t91 = (x5889&(x5890-(x5891>>x5892)));

	if (t91 != 3080U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x5905 = 456508U;
	uint8_t x5908 = 12U;
	static uint32_t t92 = 19U;

	t92 = (x5905&(x5906-(x5907>>x5908)));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x5913 = -1128877;
	uint64_t x5914 = 4045LLU;
	static uint8_t x5915 = UINT8_MAX;
	uint8_t x5916 = 7U;

	t93 = (x5913&(x5914-(x5915>>x5916)));

	if (t93 != 1600LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x5945 = INT8_MAX;
	int16_t x5946 = -1;

	t94 = (x5945&(x5946-(x5947>>x5948)));

	if (t94 != 33LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x6057 = 1;
	int8_t x6058 = INT8_MIN;
	uint16_t x6059 = UINT16_MAX;
	uint16_t x6060 = 12U;
	volatile int32_t t95 = 11800660;

	t95 = (x6057&(x6058-(x6059>>x6060)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x6070 = 202877653U;
	uint8_t x6072 = 7U;
	static volatile uint64_t t96 = 20206274983653191LLU;

	t96 = (x6069&(x6070-(x6071>>x6072)));

	if (t96 != 67602496LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x6125 = 1887U;
	uint32_t x6127 = 1U;
	uint16_t x6128 = 9U;
	volatile uint32_t t97 = 603975475U;

	t97 = (x6125&(x6126-(x6127>>x6128)));

	if (t97 != 23U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x6201 = INT16_MIN;
	static int64_t x6202 = INT64_MAX;
	static volatile uint64_t x6203 = 958567286623165343LLU;
	int8_t x6204 = 3;
	volatile uint64_t t98 = 5424664119LLU;

	t98 = (x6201&(x6202-(x6203>>x6204)));

	if (t98 != 9103551126026878976LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x6373 = -1;
	static uint32_t x6374 = UINT32_MAX;
	uint8_t x6375 = UINT8_MAX;
	uint16_t x6376 = 1U;
	uint32_t t99 = 2U;

	t99 = (x6373&(x6374-(x6375>>x6376)));

	if (t99 != 4294967168U) { NG(); } else { ; }
	
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

