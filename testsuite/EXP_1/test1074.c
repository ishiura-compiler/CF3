#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = INT16_MIN;
uint8_t x37 = 3U;
int32_t x39 = INT32_MAX;
int8_t x74 = 15;
static int8_t x181 = 3;
int64_t x184 = INT64_MIN;
int8_t x255 = INT8_MIN;
volatile int16_t x261 = 38;
uint32_t x309 = 241568U;
volatile int8_t x359 = 11;
static int16_t x593 = 223;
uint32_t x595 = 198201216U;
uint16_t x625 = UINT16_MAX;
volatile int32_t t13 = -841417;
uint8_t x637 = UINT8_MAX;
static volatile int16_t x639 = -1198;
int32_t x676 = INT32_MIN;
int32_t t15 = -1;
uint8_t x694 = 9U;
static int64_t x775 = INT64_MIN;
int32_t x1043 = INT32_MIN;
int64_t x1044 = INT64_MIN;
volatile int32_t t19 = -103;
uint8_t x1061 = 1U;
static int64_t x1062 = 27LL;
uint32_t x1071 = 22U;
uint16_t x1072 = UINT16_MAX;
volatile int32_t t22 = 485922;
uint8_t x1318 = 1U;
volatile uint16_t x1328 = 294U;
int32_t t25 = 9337;
static int64_t x1331 = 10LL;
int32_t x1340 = -1;
static uint8_t x1351 = 1U;
volatile uint8_t x1478 = 1U;
volatile uint16_t x1479 = UINT16_MAX;
static uint32_t x1480 = 80U;
static uint64_t x1649 = UINT64_MAX;
int64_t x1691 = -26968864788912LL;
int16_t x1896 = 3;
int32_t t38 = -143;
int64_t x2025 = INT64_MAX;
volatile uint32_t x2118 = 45U;
int16_t x2119 = 5;
volatile int32_t t42 = 3065;
static uint8_t x2195 = UINT8_MAX;
int8_t x2206 = 1;
uint8_t x2229 = 3U;
volatile uint16_t x2230 = 21U;
static int64_t x2231 = INT64_MIN;
int64_t x2372 = INT64_MIN;
int16_t x2527 = INT16_MAX;
int32_t x2528 = -1;
volatile int32_t t53 = -7;
volatile int16_t x2595 = INT16_MIN;
uint16_t x2596 = 15778U;
volatile uint16_t x2689 = 63U;
volatile int64_t x2691 = INT64_MIN;
int16_t x2761 = INT16_MAX;
volatile int32_t t57 = -1;
uint8_t x2818 = 3U;
int16_t x2819 = INT16_MIN;
int64_t x3053 = 6090791LL;
int8_t x3106 = 13;
volatile int32_t t60 = 1;
uint8_t x3147 = 59U;
volatile uint64_t x3148 = UINT64_MAX;
static uint16_t x3170 = 2U;
int16_t x3171 = INT16_MIN;
int8_t x3216 = 15;
uint16_t x3221 = 249U;
int8_t x3251 = INT8_MIN;
static volatile int32_t t65 = -910947;
int16_t x3255 = INT16_MIN;
uint32_t x3332 = 1811874U;
uint8_t x3686 = 9U;
int8_t x3688 = INT8_MAX;
int16_t x3715 = 6;
uint64_t x3829 = 3264029930595457LLU;
int8_t x3831 = -1;
static int32_t t76 = 60864329;
int16_t x3885 = 5;
static volatile uint8_t x3914 = 3U;
volatile uint16_t x4002 = 4U;
int64_t x4263 = 991518249010LL;
volatile int64_t x4277 = INT64_MAX;
int16_t x4279 = INT16_MIN;
volatile uint64_t x4467 = UINT64_MAX;
static volatile int32_t t88 = -17;
uint16_t x4537 = UINT16_MAX;
uint32_t x4538 = 2U;
int64_t x4539 = -54463401292802LL;
static int32_t t89 = -1216852;
int16_t x4584 = INT16_MIN;
volatile int32_t t90 = -1533;
volatile int32_t t91 = 100315;
int16_t x4599 = -1;
static uint16_t x4605 = 22U;
int32_t t95 = -2501844;
static uint8_t x4774 = 5U;
volatile int32_t t97 = 1;
int32_t t98 = 1684075;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	uint16_t x2 = 18U;
	int8_t x3 = INT8_MAX;
	volatile int32_t t0 = 1;

	t0 = (((x1>>x2)%x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x38 = 0U;
	int8_t x40 = 0;
	volatile int32_t t1 = 163140;

	t1 = (((x37>>x38)%x39)==x40);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x73 = 12144207LL;
	int64_t x75 = INT64_MIN;
	volatile uint8_t x76 = 89U;
	static volatile int32_t t2 = -4438;

	t2 = (((x73>>x74)%x75)==x76);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x109 = 650U;
	uint8_t x110 = 3U;
	uint16_t x111 = UINT16_MAX;
	static int32_t x112 = 173;
	volatile int32_t t3 = -49387812;

	t3 = (((x109>>x110)%x111)==x112);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x182 = 4U;
	int16_t x183 = INT16_MAX;
	volatile int32_t t4 = -1;

	t4 = (((x181>>x182)%x183)==x184);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x241 = 0U;
	uint16_t x242 = 10U;
	int16_t x243 = -1;
	int64_t x244 = -1LL;
	static int32_t t5 = 5737;

	t5 = (((x241>>x242)%x243)==x244);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint16_t x253 = 15U;
	uint64_t x254 = 7LLU;
	static int32_t x256 = INT32_MIN;
	volatile int32_t t6 = 10195;

	t6 = (((x253>>x254)%x255)==x256);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x262 = 0;
	volatile int32_t x263 = INT32_MIN;
	uint64_t x264 = UINT64_MAX;
	volatile int32_t t7 = 17545;

	t7 = (((x261>>x262)%x263)==x264);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x310 = 10U;
	static int32_t x311 = INT32_MIN;
	uint32_t x312 = 9U;
	volatile int32_t t8 = 6712;

	t8 = (((x309>>x310)%x311)==x312);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x357 = UINT64_MAX;
	volatile uint8_t x358 = 0U;
	int16_t x360 = 3;
	volatile int32_t t9 = 7889;

	t9 = (((x357>>x358)%x359)==x360);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x369 = 300U;
	uint32_t x370 = 25U;
	int8_t x371 = INT8_MIN;
	int32_t x372 = -124630;
	int32_t t10 = 193;

	t10 = (((x369>>x370)%x371)==x372);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x585 = 76699791334LLU;
	static volatile uint32_t x586 = 43U;
	int32_t x587 = INT32_MIN;
	int64_t x588 = 4549082LL;
	int32_t t11 = 258;

	t11 = (((x585>>x586)%x587)==x588);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x594 = 1;
	int16_t x596 = INT16_MIN;
	int32_t t12 = -9067;

	t12 = (((x593>>x594)%x595)==x596);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x626 = 2;
	uint16_t x627 = 167U;
	uint64_t x628 = 469143LLU;

	t13 = (((x625>>x626)%x627)==x628);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x638 = 0;
	volatile int64_t x640 = -83LL;
	int32_t t14 = 922394;

	t14 = (((x637>>x638)%x639)==x640);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x673 = UINT64_MAX;
	volatile uint16_t x674 = 45U;
	volatile int64_t x675 = 12673852735682406LL;

	t15 = (((x673>>x674)%x675)==x676);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x693 = 358;
	uint64_t x695 = 117042LLU;
	volatile int16_t x696 = -771;
	volatile int32_t t16 = -725;

	t16 = (((x693>>x694)%x695)==x696);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x773 = 18U;
	static int8_t x774 = 0;
	int8_t x776 = -1;
	int32_t t17 = 150;

	t17 = (((x773>>x774)%x775)==x776);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x905 = 11989;
	uint8_t x906 = 3U;
	int64_t x907 = INT64_MIN;
	static int32_t x908 = INT32_MIN;
	int32_t t18 = 0;

	t18 = (((x905>>x906)%x907)==x908);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1041 = 5202994577LLU;
	static int8_t x1042 = 1;

	t19 = (((x1041>>x1042)%x1043)==x1044);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x1063 = UINT32_MAX;
	int16_t x1064 = INT16_MIN;
	static int32_t t20 = 1;

	t20 = (((x1061>>x1062)%x1063)==x1064);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1069 = 1052363U;
	uint8_t x1070 = 2U;
	volatile int32_t t21 = 1593928;

	t21 = (((x1069>>x1070)%x1071)==x1072);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x1197 = UINT32_MAX;
	static volatile uint8_t x1198 = 4U;
	int32_t x1199 = -2829362;
	uint16_t x1200 = 8007U;

	t22 = (((x1197>>x1198)%x1199)==x1200);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x1241 = UINT32_MAX;
	volatile uint16_t x1242 = 3U;
	static int32_t x1243 = -3285379;
	int16_t x1244 = INT16_MAX;
	int32_t t23 = -11397;

	t23 = (((x1241>>x1242)%x1243)==x1244);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x1317 = UINT32_MAX;
	static int32_t x1319 = 284681;
	int8_t x1320 = INT8_MIN;
	static volatile int32_t t24 = 16439967;

	t24 = (((x1317>>x1318)%x1319)==x1320);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x1325 = 497535179075LLU;
	int8_t x1326 = 4;
	static volatile uint64_t x1327 = 1071771904345312424LLU;

	t25 = (((x1325>>x1326)%x1327)==x1328);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x1329 = INT32_MAX;
	int32_t x1330 = 0;
	static uint32_t x1332 = 16U;
	static int32_t t26 = -1;

	t26 = (((x1329>>x1330)%x1331)==x1332);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1337 = 61;
	int16_t x1338 = 3;
	uint32_t x1339 = 9010U;
	int32_t t27 = 1;

	t27 = (((x1337>>x1338)%x1339)==x1340);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x1349 = 515LLU;
	static volatile int16_t x1350 = 3;
	volatile uint32_t x1352 = 81599U;
	static volatile int32_t t28 = 1;

	t28 = (((x1349>>x1350)%x1351)==x1352);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x1477 = 3020U;
	static int32_t t29 = 5;

	t29 = (((x1477>>x1478)%x1479)==x1480);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x1601 = 65849580604835LLU;
	uint8_t x1602 = 4U;
	static uint8_t x1603 = 1U;
	int64_t x1604 = INT64_MIN;
	static volatile int32_t t30 = 101652587;

	t30 = (((x1601>>x1602)%x1603)==x1604);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1650 = 37LL;
	uint32_t x1651 = 138686U;
	int64_t x1652 = 5436213LL;
	static volatile int32_t t31 = -42465;

	t31 = (((x1649>>x1650)%x1651)==x1652);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1689 = 52791U;
	uint8_t x1690 = 31U;
	uint64_t x1692 = 789896001LLU;
	static int32_t t32 = -136111;

	t32 = (((x1689>>x1690)%x1691)==x1692);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x1693 = UINT32_MAX;
	static uint32_t x1694 = 1U;
	int16_t x1695 = -2;
	int16_t x1696 = 8099;
	int32_t t33 = 52;

	t33 = (((x1693>>x1694)%x1695)==x1696);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x1697 = 1153641066LLU;
	uint8_t x1698 = 2U;
	int16_t x1699 = -2;
	int32_t x1700 = INT32_MIN;
	int32_t t34 = -1451;

	t34 = (((x1697>>x1698)%x1699)==x1700);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x1777 = 76236595112599LLU;
	uint8_t x1778 = 0U;
	int16_t x1779 = INT16_MIN;
	static int32_t x1780 = INT32_MIN;
	int32_t t35 = -1;

	t35 = (((x1777>>x1778)%x1779)==x1780);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x1797 = 0U;
	uint8_t x1798 = 1U;
	int8_t x1799 = 1;
	static volatile uint32_t x1800 = 26U;
	volatile int32_t t36 = -403;

	t36 = (((x1797>>x1798)%x1799)==x1800);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x1893 = INT64_MAX;
	uint8_t x1894 = 0U;
	int32_t x1895 = -128729717;
	static int32_t t37 = 4889030;

	t37 = (((x1893>>x1894)%x1895)==x1896);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x1985 = 15U;
	volatile int8_t x1986 = 7;
	uint64_t x1987 = 68972897888891139LLU;
	static int32_t x1988 = -1;

	t38 = (((x1985>>x1986)%x1987)==x1988);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x2021 = 4006950U;
	int16_t x2022 = 1;
	static int64_t x2023 = -1LL;
	uint32_t x2024 = 26143932U;
	volatile int32_t t39 = -14468;

	t39 = (((x2021>>x2022)%x2023)==x2024);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x2026 = 1U;
	uint32_t x2027 = UINT32_MAX;
	int8_t x2028 = INT8_MIN;
	int32_t t40 = -3;

	t40 = (((x2025>>x2026)%x2027)==x2028);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x2085 = 11U;
	volatile uint16_t x2086 = 13U;
	int16_t x2087 = INT16_MAX;
	int32_t x2088 = INT32_MAX;
	volatile int32_t t41 = -16204234;

	t41 = (((x2085>>x2086)%x2087)==x2088);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x2117 = 4468398568097340LLU;
	int16_t x2120 = 16;

	t42 = (((x2117>>x2118)%x2119)==x2120);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x2193 = 307LLU;
	int64_t x2194 = 1LL;
	static int64_t x2196 = INT64_MIN;
	volatile int32_t t43 = 23162;

	t43 = (((x2193>>x2194)%x2195)==x2196);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x2205 = INT32_MAX;
	static int64_t x2207 = -1LL;
	uint64_t x2208 = UINT64_MAX;
	int32_t t44 = 936;

	t44 = (((x2205>>x2206)%x2207)==x2208);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x2232 = 0U;
	static int32_t t45 = 64054;

	t45 = (((x2229>>x2230)%x2231)==x2232);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x2265 = 35909333;
	int16_t x2266 = 2;
	uint16_t x2267 = 2U;
	volatile int64_t x2268 = INT64_MIN;
	volatile int32_t t46 = 181830;

	t46 = (((x2265>>x2266)%x2267)==x2268);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x2281 = 25U;
	uint64_t x2282 = 3LLU;
	int64_t x2283 = -443515808189LL;
	uint16_t x2284 = 1263U;
	volatile int32_t t47 = 1;

	t47 = (((x2281>>x2282)%x2283)==x2284);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x2301 = 375698LLU;
	uint8_t x2302 = 54U;
	uint64_t x2303 = 3950349719796LLU;
	volatile uint16_t x2304 = 1U;
	static int32_t t48 = 27938;

	t48 = (((x2301>>x2302)%x2303)==x2304);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x2369 = 3U;
	int8_t x2370 = 28;
	int32_t x2371 = 9043185;
	int32_t t49 = -945843522;

	t49 = (((x2369>>x2370)%x2371)==x2372);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x2389 = 804129927U;
	uint8_t x2390 = 26U;
	uint32_t x2391 = UINT32_MAX;
	int64_t x2392 = INT64_MAX;
	volatile int32_t t50 = 116971;

	t50 = (((x2389>>x2390)%x2391)==x2392);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x2405 = INT64_MAX;
	uint8_t x2406 = 6U;
	volatile int16_t x2407 = -1;
	uint64_t x2408 = UINT64_MAX;
	static int32_t t51 = -298388382;

	t51 = (((x2405>>x2406)%x2407)==x2408);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x2449 = INT32_MAX;
	uint16_t x2450 = 10U;
	int32_t x2451 = 120;
	int32_t x2452 = INT32_MIN;
	int32_t t52 = 3216;

	t52 = (((x2449>>x2450)%x2451)==x2452);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x2525 = UINT32_MAX;
	static int64_t x2526 = 5LL;

	t53 = (((x2525>>x2526)%x2527)==x2528);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x2593 = INT64_MAX;
	static uint16_t x2594 = 1U;
	volatile int32_t t54 = 1;

	t54 = (((x2593>>x2594)%x2595)==x2596);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x2690 = 3;
	int8_t x2692 = INT8_MAX;
	volatile int32_t t55 = 1;

	t55 = (((x2689>>x2690)%x2691)==x2692);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x2701 = 58649553U;
	uint8_t x2702 = 2U;
	int8_t x2703 = INT8_MIN;
	uint8_t x2704 = 10U;
	static int32_t t56 = -201;

	t56 = (((x2701>>x2702)%x2703)==x2704);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x2762 = 0LL;
	uint64_t x2763 = UINT64_MAX;
	static int64_t x2764 = -1LL;

	t57 = (((x2761>>x2762)%x2763)==x2764);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x2817 = 198946126088016090LLU;
	static volatile int16_t x2820 = -10742;
	int32_t t58 = 89057328;

	t58 = (((x2817>>x2818)%x2819)==x2820);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x3054 = 1U;
	static int64_t x3055 = INT64_MIN;
	uint8_t x3056 = UINT8_MAX;
	static volatile int32_t t59 = 3;

	t59 = (((x3053>>x3054)%x3055)==x3056);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x3105 = INT8_MAX;
	int16_t x3107 = -1;
	static uint16_t x3108 = UINT16_MAX;

	t60 = (((x3105>>x3106)%x3107)==x3108);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x3145 = INT16_MAX;
	uint8_t x3146 = 29U;
	int32_t t61 = 14;

	t61 = (((x3145>>x3146)%x3147)==x3148);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x3169 = 4U;
	volatile int16_t x3172 = INT16_MIN;
	int32_t t62 = -53;

	t62 = (((x3169>>x3170)%x3171)==x3172);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x3213 = 11U;
	int8_t x3214 = 3;
	uint16_t x3215 = 106U;
	volatile int32_t t63 = 55;

	t63 = (((x3213>>x3214)%x3215)==x3216);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x3222 = 11U;
	int16_t x3223 = 2345;
	int8_t x3224 = INT8_MIN;
	volatile int32_t t64 = -1015202659;

	t64 = (((x3221>>x3222)%x3223)==x3224);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x3249 = 14U;
	volatile int8_t x3250 = 13;
	uint16_t x3252 = 857U;

	t65 = (((x3249>>x3250)%x3251)==x3252);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x3253 = 1001836255393LLU;
	int8_t x3254 = 1;
	volatile uint16_t x3256 = 1U;
	static int32_t t66 = 9097022;

	t66 = (((x3253>>x3254)%x3255)==x3256);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x3329 = 355U;
	volatile int32_t x3330 = 0;
	int8_t x3331 = 2;
	int32_t t67 = -5836344;

	t67 = (((x3329>>x3330)%x3331)==x3332);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x3409 = 9;
	uint16_t x3410 = 0U;
	int64_t x3411 = INT64_MIN;
	uint32_t x3412 = 31345U;
	volatile int32_t t68 = 29671584;

	t68 = (((x3409>>x3410)%x3411)==x3412);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint8_t x3513 = UINT8_MAX;
	volatile int8_t x3514 = 3;
	int16_t x3515 = INT16_MIN;
	int32_t x3516 = INT32_MIN;
	volatile int32_t t69 = 214012517;

	t69 = (((x3513>>x3514)%x3515)==x3516);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x3525 = 873U;
	int32_t x3526 = 30;
	volatile int64_t x3527 = -1LL;
	volatile uint16_t x3528 = UINT16_MAX;
	volatile int32_t t70 = -110;

	t70 = (((x3525>>x3526)%x3527)==x3528);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x3541 = UINT16_MAX;
	uint8_t x3542 = 1U;
	volatile uint8_t x3543 = UINT8_MAX;
	int16_t x3544 = INT16_MIN;
	int32_t t71 = 27;

	t71 = (((x3541>>x3542)%x3543)==x3544);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x3585 = 56U;
	static uint64_t x3586 = 1LLU;
	static volatile uint32_t x3587 = 710U;
	int32_t x3588 = INT32_MIN;
	int32_t t72 = -434875;

	t72 = (((x3585>>x3586)%x3587)==x3588);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x3685 = 4U;
	uint16_t x3687 = UINT16_MAX;
	int32_t t73 = 15;

	t73 = (((x3685>>x3686)%x3687)==x3688);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int16_t x3705 = 480;
	uint32_t x3706 = 0U;
	int8_t x3707 = -1;
	volatile int32_t x3708 = INT32_MIN;
	static volatile int32_t t74 = 2237;

	t74 = (((x3705>>x3706)%x3707)==x3708);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x3713 = 66650829287LL;
	uint16_t x3714 = 6U;
	int8_t x3716 = INT8_MIN;
	volatile int32_t t75 = -109198;

	t75 = (((x3713>>x3714)%x3715)==x3716);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x3830 = 20U;
	volatile uint16_t x3832 = 2U;

	t76 = (((x3829>>x3830)%x3831)==x3832);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x3886 = 1U;
	int8_t x3887 = INT8_MIN;
	uint16_t x3888 = 11U;
	volatile int32_t t77 = 72;

	t77 = (((x3885>>x3886)%x3887)==x3888);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x3913 = 61U;
	int64_t x3915 = -453874LL;
	static int64_t x3916 = -12205469041286LL;
	static volatile int32_t t78 = 189164724;

	t78 = (((x3913>>x3914)%x3915)==x3916);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x3997 = INT8_MAX;
	volatile uint32_t x3998 = 7U;
	int16_t x3999 = -1;
	volatile int16_t x4000 = -1;
	static int32_t t79 = -407;

	t79 = (((x3997>>x3998)%x3999)==x4000);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x4001 = UINT16_MAX;
	uint16_t x4003 = UINT16_MAX;
	int8_t x4004 = -1;
	static int32_t t80 = -352271462;

	t80 = (((x4001>>x4002)%x4003)==x4004);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x4161 = 590U;
	volatile uint16_t x4162 = 12U;
	uint16_t x4163 = UINT16_MAX;
	int8_t x4164 = -1;
	static int32_t t81 = 38631993;

	t81 = (((x4161>>x4162)%x4163)==x4164);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x4197 = 113325198U;
	uint32_t x4198 = 0U;
	volatile int8_t x4199 = INT8_MIN;
	int64_t x4200 = -1168LL;
	volatile int32_t t82 = -2981500;

	t82 = (((x4197>>x4198)%x4199)==x4200);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x4249 = 18818717139746249LL;
	int8_t x4250 = 6;
	int32_t x4251 = INT32_MAX;
	static int8_t x4252 = INT8_MAX;
	int32_t t83 = 59043889;

	t83 = (((x4249>>x4250)%x4251)==x4252);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x4261 = 1U;
	uint32_t x4262 = 23U;
	uint16_t x4264 = 26U;
	volatile int32_t t84 = 787;

	t84 = (((x4261>>x4262)%x4263)==x4264);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x4278 = 3LLU;
	uint32_t x4280 = 228U;
	static int32_t t85 = -317250;

	t85 = (((x4277>>x4278)%x4279)==x4280);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x4281 = 3U;
	uint8_t x4282 = 18U;
	int16_t x4283 = INT16_MIN;
	int16_t x4284 = INT16_MIN;
	volatile int32_t t86 = -486899977;

	t86 = (((x4281>>x4282)%x4283)==x4284);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x4465 = 12462629612233732LL;
	int8_t x4466 = 6;
	uint64_t x4468 = UINT64_MAX;
	volatile int32_t t87 = -1;

	t87 = (((x4465>>x4466)%x4467)==x4468);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x4493 = 99U;
	uint8_t x4494 = 8U;
	uint64_t x4495 = 122LLU;
	static int64_t x4496 = -1LL;

	t88 = (((x4493>>x4494)%x4495)==x4496);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x4540 = 227LLU;

	t89 = (((x4537>>x4538)%x4539)==x4540);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x4581 = 1758755U;
	volatile uint16_t x4582 = 5U;
	static int32_t x4583 = INT32_MAX;

	t90 = (((x4581>>x4582)%x4583)==x4584);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x4585 = 684432114U;
	uint16_t x4586 = 24U;
	uint64_t x4587 = UINT64_MAX;
	static int64_t x4588 = -1LL;

	t91 = (((x4585>>x4586)%x4587)==x4588);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x4597 = 1U;
	uint8_t x4598 = 5U;
	int16_t x4600 = INT16_MIN;
	int32_t t92 = 7;

	t92 = (((x4597>>x4598)%x4599)==x4600);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x4606 = 25U;
	int32_t x4607 = INT32_MAX;
	static int64_t x4608 = -1LL;
	int32_t t93 = -12905295;

	t93 = (((x4605>>x4606)%x4607)==x4608);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x4653 = 35781929LLU;
	uint8_t x4654 = 60U;
	uint32_t x4655 = 69719U;
	volatile uint32_t x4656 = UINT32_MAX;
	volatile int32_t t94 = -17680822;

	t94 = (((x4653>>x4654)%x4655)==x4656);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x4749 = 1U;
	static int8_t x4750 = 4;
	volatile int32_t x4751 = -1;
	uint32_t x4752 = 160U;

	t95 = (((x4749>>x4750)%x4751)==x4752);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x4773 = 7;
	static int32_t x4775 = INT32_MIN;
	volatile uint8_t x4776 = 3U;
	int32_t t96 = -3570884;

	t96 = (((x4773>>x4774)%x4775)==x4776);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x4793 = 10921U;
	volatile int8_t x4794 = 15;
	int32_t x4795 = -20;
	int32_t x4796 = INT32_MIN;

	t97 = (((x4793>>x4794)%x4795)==x4796);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x4809 = 12U;
	volatile uint16_t x4810 = 3U;
	int32_t x4811 = INT32_MIN;
	volatile int64_t x4812 = 15LL;

	t98 = (((x4809>>x4810)%x4811)==x4812);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x4825 = 61409LL;
	static uint8_t x4826 = 28U;
	volatile int32_t x4827 = -430261716;
	uint16_t x4828 = UINT16_MAX;
	static int32_t t99 = -319074469;

	t99 = (((x4825>>x4826)%x4827)==x4828);

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

