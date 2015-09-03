#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x161 = 1;
int8_t x164 = -1;
static int16_t x200 = -1;
int64_t t1 = -29882919189921027LL;
int16_t x241 = 5424;
uint16_t x257 = 1176U;
int64_t x260 = -1LL;
int64_t x321 = 216359LL;
uint8_t x535 = 0U;
volatile uint64_t t10 = 197330LLU;
volatile uint32_t x706 = 1U;
uint64_t x1037 = 6385930879187257795LLU;
static int64_t x1038 = 1LL;
volatile uint32_t x1104 = UINT32_MAX;
volatile int8_t x1185 = 1;
volatile uint32_t t16 = 69U;
int8_t x1349 = 1;
int64_t x1352 = INT64_MIN;
int8_t x1412 = -1;
int8_t x1779 = INT8_MIN;
uint16_t x1813 = 11694U;
int64_t t25 = 0LL;
int16_t x1910 = 0;
uint32_t x1911 = 134017673U;
int16_t x1963 = INT16_MAX;
uint32_t x1964 = 322017U;
int8_t x2076 = INT8_MIN;
int8_t x2146 = 10;
volatile int8_t x2147 = INT8_MIN;
uint32_t t32 = 426184691U;
int32_t x2156 = -1;
uint8_t x2181 = 0U;
uint16_t x2183 = 1525U;
uint16_t x2201 = UINT16_MAX;
static volatile int64_t x2204 = INT64_MIN;
uint16_t x2218 = 14U;
uint8_t x2289 = 29U;
static uint16_t x2290 = 3U;
volatile int8_t x2338 = 0;
static int32_t x2339 = INT32_MAX;
int32_t x2543 = -1;
volatile uint64_t t40 = 7868400424320200LLU;
uint8_t x2622 = 16U;
uint8_t x2650 = 0U;
int32_t x2652 = 5743;
uint32_t x2769 = UINT32_MAX;
uint32_t t46 = 2223862U;
int64_t x2813 = 757892614817137035LL;
volatile int64_t t47 = 43442670134390584LL;
static uint32_t x3241 = 1502U;
int16_t x3335 = -1;
volatile int8_t x3368 = INT8_MIN;
uint16_t x3385 = UINT16_MAX;
static int32_t x3615 = INT32_MIN;
volatile uint32_t t56 = 63U;
uint16_t x3621 = UINT16_MAX;
static uint8_t x3786 = 0U;
uint32_t t59 = 1902930248U;
int8_t x3922 = 1;
volatile int64_t t62 = -210913LL;
volatile uint8_t x4117 = UINT8_MAX;
int16_t x4118 = 3;
int8_t x4119 = -3;
int16_t x4214 = 0;
volatile uint64_t x4251 = 989211096LLU;
volatile uint64_t t66 = 11928LLU;
int32_t t67 = 889795307;
uint64_t x4373 = UINT64_MAX;
static int32_t x4405 = INT32_MAX;
uint16_t x4406 = 0U;
int8_t x4407 = -1;
int64_t x4567 = -1LL;
static volatile int64_t t74 = -3518517172477320935LL;
static int16_t x4853 = 22;
uint16_t x4855 = 628U;
uint64_t x4856 = 11673385892536LLU;
static uint32_t t78 = 899894U;
int32_t x4938 = 1;
int8_t x4939 = INT8_MAX;
static int8_t x5070 = 0;
uint32_t t82 = 993769U;
volatile int8_t x5194 = 1;
volatile int64_t x5195 = INT64_MIN;
uint16_t x5196 = UINT16_MAX;
uint64_t t84 = 1081658LLU;
volatile int8_t x5205 = 6;
uint16_t x5257 = UINT16_MAX;
static volatile uint8_t x5333 = 5U;
int8_t x5353 = 0;
static uint8_t x5413 = 107U;
int8_t x5414 = 5;
int8_t x5608 = -1;
static uint8_t x5746 = 3U;
uint8_t x5763 = UINT8_MAX;
volatile uint32_t x5764 = 3270U;


void f0(void) {
	int32_t x162 = 7;
	static uint8_t x163 = 2U;
	volatile int32_t t0 = -51;

	t0 = ((x161<<x162)/(x163|x164));

	if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x197 = 277604079LL;
	uint8_t x198 = 1U;
	static int16_t x199 = 30;

	t1 = ((x197<<x198)/(x199|x200));

	if (t1 != -555208158LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x201 = 104U;
	uint8_t x202 = 3U;
	int64_t x203 = INT64_MIN;
	int64_t x204 = 619212800302LL;
	volatile int64_t t2 = -22803LL;

	t2 = ((x201<<x202)/(x203|x204));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x242 = 10U;
	int16_t x243 = -114;
	volatile uint16_t x244 = 244U;
	int32_t t3 = -12196261;

	t3 = ((x241<<x242)/(x243|x244));

	if (t3 != -2777088) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x258 = 1;
	int16_t x259 = INT16_MIN;
	volatile int64_t t4 = 43537LL;

	t4 = ((x257<<x258)/(x259|x260));

	if (t4 != -2352LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x322 = 0;
	int64_t x323 = 275359996168LL;
	static uint32_t x324 = UINT32_MAX;
	volatile int64_t t5 = 3584LL;

	t5 = ((x321<<x322)/(x323|x324));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x329 = INT8_MAX;
	volatile uint8_t x330 = 1U;
	volatile uint16_t x331 = UINT16_MAX;
	volatile int16_t x332 = INT16_MIN;
	volatile int32_t t6 = 3214906;

	t6 = ((x329<<x330)/(x331|x332));

	if (t6 != -254) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x345 = 3U;
	uint16_t x346 = 2U;
	int16_t x347 = 161;
	int16_t x348 = -1;
	volatile int32_t t7 = 0;

	t7 = ((x345<<x346)/(x347|x348));

	if (t7 != -12) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x413 = UINT8_MAX;
	static int16_t x414 = 21;
	volatile uint64_t x415 = 15370842487320315LLU;
	uint8_t x416 = 0U;
	uint64_t t8 = 10491415LLU;

	t8 = ((x413<<x414)/(x415|x416));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x501 = 42U;
	static uint32_t x502 = 0U;
	int32_t x503 = INT32_MIN;
	static volatile int32_t x504 = -222304622;
	volatile int32_t t9 = 57096;

	t9 = ((x501<<x502)/(x503|x504));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x533 = 1731674359LLU;
	volatile uint8_t x534 = 2U;
	int32_t x536 = 9778026;

	t10 = ((x533<<x534)/(x535|x536));

	if (t10 != 708LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x705 = 0U;
	uint64_t x707 = 666630055689LLU;
	static int64_t x708 = -8300068LL;
	volatile uint64_t t11 = 3157783LLU;

	t11 = ((x705<<x706)/(x707|x708));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x873 = 13;
	uint16_t x874 = 1U;
	int64_t x875 = -15LL;
	int64_t x876 = -1LL;
	volatile int64_t t12 = 716232LL;

	t12 = ((x873<<x874)/(x875|x876));

	if (t12 != -26LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x1039 = -6;
	static int64_t x1040 = 186953515612999967LL;
	static uint64_t t13 = 227146184243553141LLU;

	t13 = ((x1037<<x1038)/(x1039|x1040));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x1101 = 116;
	static uint8_t x1102 = 2U;
	volatile int8_t x1103 = INT8_MIN;
	volatile uint32_t t14 = 607220U;

	t14 = ((x1101<<x1102)/(x1103|x1104));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x1186 = 0;
	int32_t x1187 = INT32_MAX;
	volatile uint64_t x1188 = UINT64_MAX;
	uint64_t t15 = 108LLU;

	t15 = ((x1185<<x1186)/(x1187|x1188));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x1293 = 92;
	uint32_t x1294 = 21U;
	uint16_t x1295 = UINT16_MAX;
	uint32_t x1296 = 2767991U;

	t16 = ((x1293<<x1294)/(x1295|x1296));

	if (t16 != 68U) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x1337 = 0U;
	static uint8_t x1338 = 26U;
	volatile int16_t x1339 = INT16_MIN;
	static int8_t x1340 = INT8_MIN;
	volatile int32_t t17 = 35;

	t17 = ((x1337<<x1338)/(x1339|x1340));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1350 = 10;
	int8_t x1351 = 0;
	int64_t t18 = 10900297926787LL;

	t18 = ((x1349<<x1350)/(x1351|x1352));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x1389 = 98U;
	int8_t x1390 = 5;
	volatile int8_t x1391 = INT8_MIN;
	int32_t x1392 = INT32_MIN;
	int32_t t19 = -424949555;

	t19 = ((x1389<<x1390)/(x1391|x1392));

	if (t19 != -24) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x1409 = 31271419U;
	int16_t x1410 = 15;
	int64_t x1411 = -91271078LL;
	int64_t t20 = 6LL;

	t20 = ((x1409<<x1410)/(x1411|x1412));

	if (t20 != -2499641344LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x1589 = 4002229064608023LLU;
	int8_t x1590 = 1;
	int64_t x1591 = 57131LL;
	uint16_t x1592 = 8707U;
	volatile uint64_t t21 = 53140827080LLU;

	t21 = ((x1589<<x1590)/(x1591|x1592));

	if (t21 != 122536597051LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x1705 = 1370400545U;
	uint16_t x1706 = 0U;
	int32_t x1707 = INT32_MAX;
	int16_t x1708 = INT16_MAX;
	volatile uint32_t t22 = 206627U;

	t22 = ((x1705<<x1706)/(x1707|x1708));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x1709 = INT8_MAX;
	static uint16_t x1710 = 14U;
	static int8_t x1711 = -1;
	static int16_t x1712 = INT16_MIN;
	int32_t t23 = 9021;

	t23 = ((x1709<<x1710)/(x1711|x1712));

	if (t23 != -2080768) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x1777 = 3619822U;
	uint8_t x1778 = 1U;
	static volatile uint32_t x1780 = 11U;
	static volatile uint32_t t24 = 0U;

	t24 = ((x1777<<x1778)/(x1779|x1780));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x1814 = 0U;
	int64_t x1815 = INT64_MIN;
	uint8_t x1816 = 6U;

	t25 = ((x1813<<x1814)/(x1815|x1816));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1853 = UINT8_MAX;
	uint8_t x1854 = 7U;
	uint64_t x1855 = 316426LLU;
	int8_t x1856 = -1;
	volatile uint64_t t26 = 104624680581LLU;

	t26 = ((x1853<<x1854)/(x1855|x1856));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1885 = 493305629836LL;
	volatile int8_t x1886 = 0;
	volatile int32_t x1887 = -1;
	volatile int16_t x1888 = INT16_MAX;
	int64_t t27 = -901981245827758LL;

	t27 = ((x1885<<x1886)/(x1887|x1888));

	if (t27 != -493305629836LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1909 = INT8_MAX;
	static uint8_t x1912 = 2U;
	uint32_t t28 = 87U;

	t28 = ((x1909<<x1910)/(x1911|x1912));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x1961 = 62483LLU;
	uint8_t x1962 = 0U;
	volatile uint64_t t29 = 1433LLU;

	t29 = ((x1961<<x1962)/(x1963|x1964));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x1981 = 1U;
	static volatile uint8_t x1982 = 0U;
	static int32_t x1983 = -1;
	volatile uint64_t x1984 = UINT64_MAX;
	static volatile uint64_t t30 = 17734147LLU;

	t30 = ((x1981<<x1982)/(x1983|x1984));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x2073 = 5477177U;
	volatile int8_t x2074 = 1;
	volatile int8_t x2075 = INT8_MIN;
	uint32_t t31 = 71U;

	t31 = ((x2073<<x2074)/(x2075|x2076));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x2145 = 23U;
	uint32_t x2148 = 13172593U;

	t32 = ((x2145<<x2146)/(x2147|x2148));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x2153 = 82U;
	int8_t x2154 = 0;
	uint16_t x2155 = 7U;
	volatile int32_t t33 = 1;

	t33 = ((x2153<<x2154)/(x2155|x2156));

	if (t33 != -82) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x2182 = 3U;
	volatile int8_t x2184 = INT8_MIN;
	volatile int32_t t34 = -6;

	t34 = ((x2181<<x2182)/(x2183|x2184));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x2202 = 0;
	int8_t x2203 = -1;
	volatile int64_t t35 = 3348LL;

	t35 = ((x2201<<x2202)/(x2203|x2204));

	if (t35 != -65535LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x2217 = INT8_MAX;
	int32_t x2219 = INT32_MAX;
	static int64_t x2220 = INT64_MIN;
	volatile int64_t t36 = 4034444588742LL;

	t36 = ((x2217<<x2218)/(x2219|x2220));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x2291 = -1LL;
	uint8_t x2292 = UINT8_MAX;
	volatile int64_t t37 = 237509490631LL;

	t37 = ((x2289<<x2290)/(x2291|x2292));

	if (t37 != -232LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x2337 = 33923371LLU;
	int16_t x2340 = INT16_MIN;
	uint64_t t38 = 34LLU;

	t38 = ((x2337<<x2338)/(x2339|x2340));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x2537 = UINT32_MAX;
	int16_t x2538 = 1;
	uint32_t x2539 = UINT32_MAX;
	int8_t x2540 = -1;
	uint32_t t39 = 2054336U;

	t39 = ((x2537<<x2538)/(x2539|x2540));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x2541 = 213LLU;
	volatile uint16_t x2542 = 2U;
	int64_t x2544 = INT64_MIN;

	t40 = ((x2541<<x2542)/(x2543|x2544));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2569 = 2521;
	uint64_t x2570 = 3LLU;
	int8_t x2571 = 0;
	int8_t x2572 = INT8_MIN;
	int32_t t41 = 809;

	t41 = ((x2569<<x2570)/(x2571|x2572));

	if (t41 != -157) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x2621 = 0U;
	int8_t x2623 = 1;
	int32_t x2624 = INT32_MAX;
	int32_t t42 = -1;

	t42 = ((x2621<<x2622)/(x2623|x2624));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x2641 = 22363;
	int64_t x2642 = 2LL;
	int64_t x2643 = -4076453166223LL;
	uint8_t x2644 = 0U;
	static volatile int64_t t43 = -415LL;

	t43 = ((x2641<<x2642)/(x2643|x2644));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x2649 = 38U;
	volatile int8_t x2651 = -1;
	int32_t t44 = 4083864;

	t44 = ((x2649<<x2650)/(x2651|x2652));

	if (t44 != -38) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x2717 = 0U;
	uint32_t x2718 = 10U;
	volatile int8_t x2719 = -1;
	static int32_t x2720 = -110598;
	static volatile int32_t t45 = 7978;

	t45 = ((x2717<<x2718)/(x2719|x2720));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x2770 = 1U;
	static int8_t x2771 = INT8_MAX;
	int16_t x2772 = -218;

	t46 = ((x2769<<x2770)/(x2771|x2772));

	if (t46 != 1U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x2814 = 1U;
	static int8_t x2815 = INT8_MAX;
	int32_t x2816 = INT32_MIN;

	t47 = ((x2813<<x2814)/(x2815|x2816));

	if (t47 != -705842543LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x3133 = 2;
	int8_t x3134 = 7;
	uint32_t x3135 = 31986539U;
	int8_t x3136 = 12;
	volatile uint32_t t48 = 100840U;

	t48 = ((x3133<<x3134)/(x3135|x3136));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x3209 = 49860844434463394LLU;
	uint32_t x3210 = 3U;
	static int32_t x3211 = -1;
	int16_t x3212 = -1;
	volatile uint64_t t49 = 81600869133LLU;

	t49 = ((x3209<<x3210)/(x3211|x3212));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x3242 = 23;
	int16_t x3243 = INT16_MIN;
	uint32_t x3244 = 20U;
	uint32_t t50 = 29358170U;

	t50 = ((x3241<<x3242)/(x3243|x3244));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x3285 = INT32_MAX;
	int8_t x3286 = 0;
	uint16_t x3287 = 25893U;
	uint32_t x3288 = 1488192973U;
	uint32_t t51 = 0U;

	t51 = ((x3285<<x3286)/(x3287|x3288));

	if (t51 != 1U) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x3293 = 93U;
	static volatile uint16_t x3294 = 14U;
	volatile int16_t x3295 = INT16_MIN;
	int8_t x3296 = -1;
	volatile int32_t t52 = -3;

	t52 = ((x3293<<x3294)/(x3295|x3296));

	if (t52 != -1523712) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint8_t x3333 = UINT8_MAX;
	uint32_t x3334 = 8U;
	int64_t x3336 = INT64_MAX;
	int64_t t53 = -12705623955480LL;

	t53 = ((x3333<<x3334)/(x3335|x3336));

	if (t53 != -65280LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x3365 = 5;
	int32_t x3366 = 1;
	int32_t x3367 = INT32_MAX;
	volatile int32_t t54 = 26311330;

	t54 = ((x3365<<x3366)/(x3367|x3368));

	if (t54 != -10) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x3386 = 2U;
	uint32_t x3387 = 1U;
	int8_t x3388 = -1;
	static volatile uint32_t t55 = 389U;

	t55 = ((x3385<<x3386)/(x3387|x3388));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x3613 = 7U;
	static uint8_t x3614 = 21U;
	uint32_t x3616 = UINT32_MAX;

	t56 = ((x3613<<x3614)/(x3615|x3616));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x3622 = 2U;
	volatile int32_t x3623 = INT32_MAX;
	int8_t x3624 = INT8_MIN;
	volatile int32_t t57 = 66781181;

	t57 = ((x3621<<x3622)/(x3623|x3624));

	if (t57 != -262140) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x3633 = 421690984509LLU;
	uint16_t x3634 = 25U;
	int8_t x3635 = 61;
	int8_t x3636 = 38;
	uint64_t t58 = 11370797475748133LLU;

	t58 = ((x3633<<x3634)/(x3635|x3636));

	if (t58 != 224596848646353871LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x3785 = UINT16_MAX;
	uint16_t x3787 = 15029U;
	uint32_t x3788 = UINT32_MAX;

	t59 = ((x3785<<x3786)/(x3787|x3788));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x3921 = 2073153398003LLU;
	int8_t x3923 = INT8_MIN;
	volatile int32_t x3924 = INT32_MIN;
	static uint64_t t60 = 3915929735506LLU;

	t60 = ((x3921<<x3922)/(x3923|x3924));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x3981 = INT8_MAX;
	volatile int8_t x3982 = 2;
	static volatile uint8_t x3983 = 0U;
	uint16_t x3984 = UINT16_MAX;
	int32_t t61 = 407;

	t61 = ((x3981<<x3982)/(x3983|x3984));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x4089 = 1;
	uint8_t x4090 = 18U;
	volatile int64_t x4091 = -1LL;
	int64_t x4092 = 17184608239773260LL;

	t62 = ((x4089<<x4090)/(x4091|x4092));

	if (t62 != -262144LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x4120 = 1U;
	static int32_t t63 = 1581;

	t63 = ((x4117<<x4118)/(x4119|x4120));

	if (t63 != -680) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x4173 = 56U;
	static uint16_t x4174 = 16U;
	static volatile int16_t x4175 = 0;
	static int64_t x4176 = -10LL;
	int64_t t64 = -360866465146LL;

	t64 = ((x4173<<x4174)/(x4175|x4176));

	if (t64 != -367001LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x4213 = 26220U;
	volatile int64_t x4215 = INT64_MIN;
	int16_t x4216 = 39;
	static int64_t t65 = 1151892232011LL;

	t65 = ((x4213<<x4214)/(x4215|x4216));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x4249 = 10U;
	static volatile uint16_t x4250 = 1U;
	volatile int64_t x4252 = -64697529905LL;

	t66 = ((x4249<<x4250)/(x4251|x4252));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x4265 = 89U;
	volatile int8_t x4266 = 1;
	int16_t x4267 = -1;
	static int16_t x4268 = INT16_MIN;

	t67 = ((x4265<<x4266)/(x4267|x4268));

	if (t67 != -178) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x4269 = 1556498U;
	uint64_t x4270 = 4LLU;
	static int32_t x4271 = INT32_MIN;
	int32_t x4272 = INT32_MAX;
	static uint32_t t68 = 8903417U;

	t68 = ((x4269<<x4270)/(x4271|x4272));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint8_t x4289 = 48U;
	int32_t x4290 = 0;
	uint8_t x4291 = 33U;
	int64_t x4292 = 490LL;
	static int64_t t69 = 153556897411192LL;

	t69 = ((x4289<<x4290)/(x4291|x4292));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x4374 = 20U;
	uint64_t x4375 = 3LLU;
	int8_t x4376 = -3;
	volatile uint64_t t70 = 9679458725784947LLU;

	t70 = ((x4373<<x4374)/(x4375|x4376));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x4408 = INT8_MIN;
	static volatile int32_t t71 = -91687453;

	t71 = ((x4405<<x4406)/(x4407|x4408));

	if (t71 != -2147483647) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x4437 = UINT64_MAX;
	uint8_t x4438 = 55U;
	uint8_t x4439 = UINT8_MAX;
	volatile int16_t x4440 = INT16_MIN;
	uint64_t t72 = 4167438524500057923LLU;

	t72 = ((x4437<<x4438)/(x4439|x4440));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x4501 = 753819395U;
	static uint16_t x4502 = 0U;
	static int16_t x4503 = 791;
	int16_t x4504 = INT16_MIN;
	volatile uint32_t t73 = 493558260U;

	t73 = ((x4501<<x4502)/(x4503|x4504));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x4565 = 5U;
	uint8_t x4566 = 2U;
	int16_t x4568 = 56;

	t74 = ((x4565<<x4566)/(x4567|x4568));

	if (t74 != -20LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x4669 = 0;
	int32_t x4670 = 0;
	int64_t x4671 = INT64_MIN;
	uint32_t x4672 = 28335U;
	volatile int64_t t75 = -16887751622567LL;

	t75 = ((x4669<<x4670)/(x4671|x4672));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x4741 = UINT64_MAX;
	uint8_t x4742 = 0U;
	int8_t x4743 = -1;
	int64_t x4744 = -1LL;
	uint64_t t76 = 1306776LLU;

	t76 = ((x4741<<x4742)/(x4743|x4744));

	if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x4854 = 2U;
	static volatile uint64_t t77 = 4318696770299886LLU;

	t77 = ((x4853<<x4854)/(x4855|x4856));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x4857 = UINT32_MAX;
	static uint32_t x4858 = 3U;
	volatile int32_t x4859 = INT32_MIN;
	int32_t x4860 = -1;

	t78 = ((x4857<<x4858)/(x4859|x4860));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x4937 = 3804943U;
	static int32_t x4940 = INT32_MIN;
	volatile uint32_t t79 = 66U;

	t79 = ((x4937<<x4938)/(x4939|x4940));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x4961 = 76U;
	uint8_t x4962 = 2U;
	static int32_t x4963 = INT32_MAX;
	static uint16_t x4964 = 1171U;
	volatile int32_t t80 = -4104852;

	t80 = ((x4961<<x4962)/(x4963|x4964));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x5069 = INT32_MAX;
	static int32_t x5071 = INT32_MIN;
	int16_t x5072 = INT16_MAX;
	int32_t t81 = -1;

	t81 = ((x5069<<x5070)/(x5071|x5072));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x5101 = 18190782U;
	uint32_t x5102 = 10U;
	volatile int8_t x5103 = INT8_MIN;
	int8_t x5104 = -1;

	t82 = ((x5101<<x5102)/(x5103|x5104));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x5121 = UINT16_MAX;
	uint16_t x5122 = 12U;
	uint32_t x5123 = UINT32_MAX;
	volatile int8_t x5124 = INT8_MAX;
	volatile uint32_t t83 = 3131U;

	t83 = ((x5121<<x5122)/(x5123|x5124));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x5193 = 152LLU;

	t84 = ((x5193<<x5194)/(x5195|x5196));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x5206 = 0;
	int16_t x5207 = INT16_MIN;
	int32_t x5208 = 2;
	int32_t t85 = -23347572;

	t85 = ((x5205<<x5206)/(x5207|x5208));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x5258 = 0;
	int64_t x5259 = -55651920813LL;
	volatile int32_t x5260 = -307740;
	static volatile int64_t t86 = 128770690568821383LL;

	t86 = ((x5257<<x5258)/(x5259|x5260));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x5273 = UINT16_MAX;
	int8_t x5274 = 3;
	uint16_t x5275 = UINT16_MAX;
	volatile int16_t x5276 = 4;
	int32_t t87 = 3256;

	t87 = ((x5273<<x5274)/(x5275|x5276));

	if (t87 != 8) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x5285 = UINT32_MAX;
	static uint8_t x5286 = 18U;
	static int16_t x5287 = -1;
	int64_t x5288 = -108683875326619864LL;
	static volatile int64_t t88 = -219851967113LL;

	t88 = ((x5285<<x5286)/(x5287|x5288));

	if (t88 != -4294705152LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x5334 = 3;
	int32_t x5335 = INT32_MAX;
	uint64_t x5336 = UINT64_MAX;
	volatile uint64_t t89 = 3737621123675967583LLU;

	t89 = ((x5333<<x5334)/(x5335|x5336));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x5354 = 12U;
	volatile int32_t x5355 = -1072782;
	int16_t x5356 = -1;
	static int32_t t90 = -8295245;

	t90 = ((x5353<<x5354)/(x5355|x5356));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x5415 = 28U;
	uint8_t x5416 = 9U;
	volatile int32_t t91 = -978;

	t91 = ((x5413<<x5414)/(x5415|x5416));

	if (t91 != 118) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x5425 = 21U;
	int32_t x5426 = 1;
	int64_t x5427 = 1726932LL;
	volatile int32_t x5428 = INT32_MIN;
	int64_t t92 = 259968637LL;

	t92 = ((x5425<<x5426)/(x5427|x5428));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x5461 = 7U;
	uint8_t x5462 = 3U;
	static int32_t x5463 = -1;
	static int32_t x5464 = INT32_MAX;
	volatile int32_t t93 = -340;

	t93 = ((x5461<<x5462)/(x5463|x5464));

	if (t93 != -56) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x5605 = 929U;
	int8_t x5606 = 4;
	int64_t x5607 = -1LL;
	int64_t t94 = -1218707313074943170LL;

	t94 = ((x5605<<x5606)/(x5607|x5608));

	if (t94 != -14864LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x5689 = 4939299U;
	uint16_t x5690 = 14U;
	uint8_t x5691 = 2U;
	uint16_t x5692 = 860U;
	static volatile uint32_t t95 = 586799U;

	t95 = ((x5689<<x5690)/(x5691|x5692));

	if (t95 != 4194969U) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x5717 = 108631U;
	int8_t x5718 = 15;
	int64_t x5719 = -164839670886LL;
	int32_t x5720 = INT32_MAX;
	int64_t t96 = 3486728711408738LL;

	t96 = ((x5717<<x5718)/(x5719|x5720));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x5745 = 0;
	volatile uint64_t x5747 = 415LLU;
	uint16_t x5748 = UINT16_MAX;
	uint64_t t97 = 2151507360826LLU;

	t97 = ((x5745<<x5746)/(x5747|x5748));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x5761 = 0;
	int8_t x5762 = 4;
	uint32_t t98 = 3U;

	t98 = ((x5761<<x5762)/(x5763|x5764));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x5821 = 14;
	uint32_t x5822 = 1U;
	uint16_t x5823 = 3U;
	int64_t x5824 = INT64_MIN;
	int64_t t99 = 559580803387099LL;

	t99 = ((x5821<<x5822)/(x5823|x5824));

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

