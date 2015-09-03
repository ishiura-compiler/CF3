#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x10 = UINT64_MAX;
static volatile uint32_t x183 = 1380U;
uint32_t t3 = 426U;
uint64_t x231 = 3258232LLU;
static uint8_t x232 = 0U;
int32_t t4 = 4;
int64_t x298 = INT64_MIN;
uint8_t x299 = 30U;
int8_t x356 = 2;
int64_t x362 = INT64_MIN;
volatile uint32_t t9 = 172U;
uint16_t x571 = 6192U;
static volatile uint32_t t13 = 858690U;
int8_t x709 = 8;
int32_t x818 = -1;
static int8_t x820 = 1;
int8_t x1149 = INT8_MAX;
uint8_t x1151 = 2U;
int32_t x1167 = INT32_MIN;
volatile int32_t t20 = -122392;
volatile int8_t x1209 = INT8_MAX;
int32_t t22 = -986629192;
static uint64_t t23 = 3707642LLU;
static volatile int64_t x1595 = -767895470292067LL;
volatile uint32_t x1739 = 127457U;
volatile int16_t x1759 = 875;
uint32_t x1760 = 0U;
volatile int32_t t29 = -1803952;
volatile int32_t t31 = 0;
uint8_t x1920 = 0U;
int16_t x1990 = INT16_MIN;
int16_t x1991 = INT16_MAX;
volatile int16_t x2022 = 924;
int16_t x2123 = -1;
int32_t x2147 = -27773;
int32_t x2386 = -1;
volatile int64_t t40 = INT64_MAX;
int8_t x2479 = -1;
int16_t x2579 = INT16_MIN;
int32_t x2873 = 12944;
static uint32_t x2909 = 636310186U;
uint64_t t50 = 20601808557524193LLU;
int8_t x3158 = INT8_MIN;
int64_t x3159 = INT64_MAX;
uint16_t x3160 = 14U;
int8_t x3170 = -1;
static int64_t x3171 = INT64_MAX;
int32_t t52 = 115797018;
volatile uint16_t x3305 = UINT16_MAX;
int16_t x3367 = INT16_MAX;
volatile uint8_t x3368 = 7U;
static uint64_t x3386 = 355684375876259LLU;
static int64_t x3387 = INT64_MIN;
uint16_t x3388 = 1U;
int32_t t55 = -1;
static volatile int16_t x3445 = INT16_MAX;
volatile int16_t x3450 = 0;
volatile int32_t t58 = 9;
uint32_t x3472 = 0U;
int32_t x3659 = 127645;
volatile int64_t x4112 = 0LL;
uint64_t x4137 = 7587LLU;
static int8_t x4138 = INT8_MIN;
static int32_t t69 = 1;
int8_t x4323 = 0;
volatile int8_t x4566 = INT8_MAX;
int64_t x4733 = 5409905411413539LL;
static uint8_t x4789 = 48U;
int32_t t75 = 208465;
uint8_t x4869 = 44U;
uint64_t x4870 = 22672LLU;
uint16_t x4930 = 0U;
uint64_t t78 = 3356870LLU;
volatile uint32_t x4934 = 2U;
int32_t x4935 = INT32_MIN;
static volatile uint64_t t82 = 2068974503274120767LLU;
uint32_t x5369 = 6451U;
int32_t x5370 = -12221644;
uint32_t x5517 = UINT32_MAX;
int32_t x5518 = INT32_MIN;
static uint8_t x5520 = 22U;
uint64_t x5629 = 1550911LLU;
uint16_t x5645 = 10U;
static uint8_t x5647 = 12U;
int64_t x5822 = 3531LL;
volatile uint32_t t93 = 826U;
int32_t x5961 = INT32_MAX;
uint16_t x6033 = UINT16_MAX;
volatile int32_t x6035 = INT32_MAX;
uint64_t t99 = UINT64_MAX;


void f0(void) {
	uint8_t x9 = 2U;
	volatile int8_t x11 = INT8_MIN;
	uint16_t x12 = 1U;
	volatile int32_t t0 = -7;

	t0 = ((x9|(x10<=x11))<<x12);

	if (t0 != 4) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x69 = 81;
	int32_t x70 = INT32_MAX;
	static volatile int64_t x71 = INT64_MIN;
	int8_t x72 = 1;
	int32_t t1 = -64864;

	t1 = ((x69|(x70<=x71))<<x72);

	if (t1 != 162) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x181 = 8211;
	static int32_t x182 = INT32_MIN;
	uint16_t x184 = 1U;
	static int32_t t2 = -3;

	t2 = ((x181|(x182<=x183))<<x184);

	if (t2 != 16422) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x189 = 120835844U;
	volatile int8_t x190 = INT8_MAX;
	int8_t x191 = -12;
	uint8_t x192 = 0U;

	t3 = ((x189|(x190<=x191))<<x192);

	if (t3 != 120835844U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x229 = 3U;
	int8_t x230 = INT8_MIN;

	t4 = ((x229|(x230<=x231))<<x232);

	if (t4 != 3) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int64_t x297 = 2763255708LL;
	static uint8_t x300 = 5U;
	volatile int64_t t5 = -607695184662081520LL;

	t5 = ((x297|(x298<=x299))<<x300);

	if (t5 != 88424182688LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x321 = 5U;
	int64_t x322 = INT64_MIN;
	uint16_t x323 = 10U;
	int32_t x324 = 0;
	static volatile uint32_t t6 = 1653U;

	t6 = ((x321|(x322<=x323))<<x324);

	if (t6 != 5U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x341 = INT8_MAX;
	int8_t x342 = -10;
	int16_t x343 = -3;
	uint8_t x344 = 21U;
	int32_t t7 = -2;

	t7 = ((x341|(x342<=x343))<<x344);

	if (t7 != 266338304) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x353 = 210248382226LL;
	uint8_t x354 = UINT8_MAX;
	int32_t x355 = INT32_MIN;
	int64_t t8 = 2447809966LL;

	t8 = ((x353|(x354<=x355))<<x356);

	if (t8 != 840993528904LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x361 = 189U;
	int8_t x363 = INT8_MAX;
	static volatile uint8_t x364 = 19U;

	t9 = ((x361|(x362<=x363))<<x364);

	if (t9 != 99090432U) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x521 = 722U;
	uint32_t x522 = UINT32_MAX;
	int16_t x523 = INT16_MIN;
	int16_t x524 = 1;
	static volatile int32_t t10 = 1;

	t10 = ((x521|(x522<=x523))<<x524);

	if (t10 != 1444) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x545 = 6256LL;
	int16_t x546 = INT16_MIN;
	uint16_t x547 = 119U;
	uint16_t x548 = 23U;
	int64_t t11 = -52029LL;

	t11 = ((x545|(x546<=x547))<<x548);

	if (t11 != 52487520256LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x569 = UINT32_MAX;
	int32_t x570 = INT32_MAX;
	int32_t x572 = 12;
	volatile uint32_t t12 = 1719U;

	t12 = ((x569|(x570<=x571))<<x572);

	if (t12 != 4294963200U) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x573 = 1569736124U;
	volatile int16_t x574 = INT16_MIN;
	uint32_t x575 = 55264715U;
	uint8_t x576 = 23U;

	t13 = ((x573|(x574<=x575))<<x576);

	if (t13 != 3724541952U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x710 = INT64_MIN;
	static volatile uint64_t x711 = UINT64_MAX;
	int16_t x712 = 7;
	int32_t t14 = -16063;

	t14 = ((x709|(x710<=x711))<<x712);

	if (t14 != 1152) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x729 = 1136872076502708483LLU;
	int32_t x730 = INT32_MIN;
	int8_t x731 = INT8_MIN;
	uint8_t x732 = 7U;
	volatile uint64_t t15 = 228732209614628859LLU;

	t15 = ((x729|(x730<=x731))<<x732);

	if (t15 != 16392417276379824512LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x769 = 4U;
	uint32_t x770 = UINT32_MAX;
	static uint16_t x771 = 7652U;
	uint32_t x772 = 0U;
	int32_t t16 = -154;

	t16 = ((x769|(x770<=x771))<<x772);

	if (t16 != 4) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x789 = 954U;
	volatile int8_t x790 = 15;
	static volatile int64_t x791 = -55811204LL;
	static uint8_t x792 = 3U;
	volatile int32_t t17 = 11443;

	t17 = ((x789|(x790<=x791))<<x792);

	if (t17 != 7632) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x817 = 65LLU;
	volatile int64_t x819 = -1LL;
	volatile uint64_t t18 = 876206871862837027LLU;

	t18 = ((x817|(x818<=x819))<<x820);

	if (t18 != 130LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1150 = UINT64_MAX;
	int8_t x1152 = 1;
	int32_t t19 = -642;

	t19 = ((x1149|(x1150<=x1151))<<x1152);

	if (t19 != 254) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x1165 = 26871U;
	volatile uint16_t x1166 = UINT16_MAX;
	uint8_t x1168 = 0U;

	t20 = ((x1165|(x1166<=x1167))<<x1168);

	if (t20 != 26871) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x1210 = 199U;
	volatile uint64_t x1211 = 2859975727409465LLU;
	uint8_t x1212 = 1U;
	int32_t t21 = 193472218;

	t21 = ((x1209|(x1210<=x1211))<<x1212);

	if (t21 != 254) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x1213 = 45U;
	uint64_t x1214 = 2854045283233LLU;
	uint16_t x1215 = UINT16_MAX;
	int8_t x1216 = 1;

	t22 = ((x1213|(x1214<=x1215))<<x1216);

	if (t22 != 90) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1241 = 687678015906LLU;
	static volatile int8_t x1242 = INT8_MAX;
	volatile uint16_t x1243 = 255U;
	uint32_t x1244 = 38U;

	t23 = ((x1241|(x1242<=x1243))<<x1244);

	if (t23 != 3707140617122349056LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x1353 = 2442740;
	volatile int8_t x1354 = -1;
	volatile int32_t x1355 = 46763;
	uint64_t x1356 = 1LLU;
	static int32_t t24 = 19285;

	t24 = ((x1353|(x1354<=x1355))<<x1356);

	if (t24 != 4885482) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1417 = 3LL;
	int16_t x1418 = 883;
	static int64_t x1419 = 7900694286LL;
	static uint64_t x1420 = 6LLU;
	int64_t t25 = -2704403LL;

	t25 = ((x1417|(x1418<=x1419))<<x1420);

	if (t25 != 192LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x1593 = 519255713693993519LLU;
	uint64_t x1594 = 25092466603694LLU;
	volatile uint8_t x1596 = 11U;
	volatile uint64_t t26 = 13896277451888924LLU;

	t26 = ((x1593|(x1594<=x1595))<<x1596);

	if (t26 != 11971289443854284800LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x1653 = UINT32_MAX;
	int32_t x1654 = INT32_MIN;
	static int64_t x1655 = 975650273326978LL;
	int8_t x1656 = 0;
	uint32_t t27 = UINT32_MAX;

	t27 = ((x1653|(x1654<=x1655))<<x1656);

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1737 = 55857LLU;
	uint64_t x1738 = UINT64_MAX;
	int8_t x1740 = 0;
	volatile uint64_t t28 = 98407103444LLU;

	t28 = ((x1737|(x1738<=x1739))<<x1740);

	if (t28 != 55857LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x1757 = 125U;
	int32_t x1758 = INT32_MIN;

	t29 = ((x1757|(x1758<=x1759))<<x1760);

	if (t29 != 125) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x1777 = 95;
	int64_t x1778 = -36873265LL;
	int64_t x1779 = INT64_MIN;
	uint8_t x1780 = 6U;
	volatile int32_t t30 = 533554;

	t30 = ((x1777|(x1778<=x1779))<<x1780);

	if (t30 != 6080) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1857 = 1;
	static uint64_t x1858 = 77454625134125LLU;
	int16_t x1859 = -1;
	int8_t x1860 = 1;

	t31 = ((x1857|(x1858<=x1859))<<x1860);

	if (t31 != 2) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1917 = UINT32_MAX;
	volatile uint32_t x1918 = 1U;
	int32_t x1919 = INT32_MIN;
	volatile uint32_t t32 = UINT32_MAX;

	t32 = ((x1917|(x1918<=x1919))<<x1920);

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1977 = UINT64_MAX;
	int64_t x1978 = INT64_MIN;
	static int64_t x1979 = -1LL;
	uint64_t x1980 = 1LLU;
	uint64_t t33 = 14925LLU;

	t33 = ((x1977|(x1978<=x1979))<<x1980);

	if (t33 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x1989 = 26;
	uint32_t x1992 = 1U;
	static volatile int32_t t34 = -203;

	t34 = ((x1989|(x1990<=x1991))<<x1992);

	if (t34 != 54) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x2021 = 6339723657LLU;
	volatile int8_t x2023 = INT8_MIN;
	int32_t x2024 = 1;
	static volatile uint64_t t35 = 34LLU;

	t35 = ((x2021|(x2022<=x2023))<<x2024);

	if (t35 != 12679447314LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x2113 = 267328065607498838LLU;
	static uint32_t x2114 = UINT32_MAX;
	int8_t x2115 = INT8_MIN;
	int64_t x2116 = 1LL;
	static uint64_t t36 = 1058683451274LLU;

	t36 = ((x2113|(x2114<=x2115))<<x2116);

	if (t36 != 534656131214997676LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x2121 = INT8_MAX;
	volatile uint32_t x2122 = 5U;
	static volatile int32_t x2124 = 14;
	volatile int32_t t37 = 2;

	t37 = ((x2121|(x2122<=x2123))<<x2124);

	if (t37 != 2080768) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x2145 = 2;
	uint16_t x2146 = 3U;
	volatile uint16_t x2148 = 0U;
	int32_t t38 = -38828;

	t38 = ((x2145|(x2146<=x2147))<<x2148);

	if (t38 != 2) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x2197 = 355U;
	uint64_t x2198 = 5489737098LLU;
	uint8_t x2199 = UINT8_MAX;
	uint16_t x2200 = 2U;
	volatile int32_t t39 = 7;

	t39 = ((x2197|(x2198<=x2199))<<x2200);

	if (t39 != 1420) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x2385 = INT64_MAX;
	uint8_t x2387 = 6U;
	int64_t x2388 = 0LL;

	t40 = ((x2385|(x2386<=x2387))<<x2388);

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x2477 = 24726122862515848LLU;
	static int8_t x2478 = -15;
	int8_t x2480 = 1;
	static volatile uint64_t t41 = 3LLU;

	t41 = ((x2477|(x2478<=x2479))<<x2480);

	if (t41 != 49452245725031698LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x2509 = 12;
	int64_t x2510 = -41176LL;
	uint32_t x2511 = UINT32_MAX;
	int16_t x2512 = 1;
	int32_t t42 = 1;

	t42 = ((x2509|(x2510<=x2511))<<x2512);

	if (t42 != 26) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x2557 = 0LL;
	int32_t x2558 = INT32_MIN;
	volatile int8_t x2559 = 0;
	uint8_t x2560 = 1U;
	int64_t t43 = -6882302LL;

	t43 = ((x2557|(x2558<=x2559))<<x2560);

	if (t43 != 2LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x2577 = UINT8_MAX;
	uint16_t x2578 = UINT16_MAX;
	uint8_t x2580 = 7U;
	static int32_t t44 = -8;

	t44 = ((x2577|(x2578<=x2579))<<x2580);

	if (t44 != 32640) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x2689 = 12U;
	uint16_t x2690 = 4693U;
	int32_t x2691 = INT32_MAX;
	uint8_t x2692 = 14U;
	int32_t t45 = -16700;

	t45 = ((x2689|(x2690<=x2691))<<x2692);

	if (t45 != 212992) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x2853 = INT32_MAX;
	static int64_t x2854 = -6965653175396173LL;
	uint16_t x2855 = UINT16_MAX;
	static int8_t x2856 = 0;
	int32_t t46 = INT32_MAX;

	t46 = ((x2853|(x2854<=x2855))<<x2856);

	if (t46 != INT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x2874 = 96U;
	int32_t x2875 = INT32_MIN;
	volatile int16_t x2876 = 0;
	int32_t t47 = -249560157;

	t47 = ((x2873|(x2874<=x2875))<<x2876);

	if (t47 != 12944) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x2910 = UINT16_MAX;
	static uint32_t x2911 = UINT32_MAX;
	volatile uint16_t x2912 = 11U;
	volatile uint32_t t48 = 54551963U;

	t48 = ((x2909|(x2910<=x2911))<<x2912);

	if (t48 != 1788172288U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x2953 = INT8_MAX;
	int32_t x2954 = 111;
	static int64_t x2955 = INT64_MIN;
	int32_t x2956 = 7;
	volatile int32_t t49 = -117;

	t49 = ((x2953|(x2954<=x2955))<<x2956);

	if (t49 != 16256) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x3093 = 8166984130LLU;
	uint32_t x3094 = 18231U;
	volatile int64_t x3095 = INT64_MIN;
	uint8_t x3096 = 0U;

	t50 = ((x3093|(x3094<=x3095))<<x3096);

	if (t50 != 8166984130LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x3157 = 1U;
	volatile int32_t t51 = -30180;

	t51 = ((x3157|(x3158<=x3159))<<x3160);

	if (t51 != 16384) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x3169 = INT8_MAX;
	int8_t x3172 = 2;

	t52 = ((x3169|(x3170<=x3171))<<x3172);

	if (t52 != 508) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x3306 = INT64_MIN;
	static volatile int64_t x3307 = INT64_MAX;
	static volatile uint8_t x3308 = 0U;
	int32_t t53 = 126;

	t53 = ((x3305|(x3306<=x3307))<<x3308);

	if (t53 != 65535) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x3365 = 1LLU;
	int32_t x3366 = INT32_MAX;
	volatile uint64_t t54 = 8838112774560481111LLU;

	t54 = ((x3365|(x3366<=x3367))<<x3368);

	if (t54 != 128LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x3385 = 17;

	t55 = ((x3385|(x3386<=x3387))<<x3388);

	if (t55 != 34) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x3393 = INT32_MAX;
	int16_t x3394 = INT16_MAX;
	int16_t x3395 = -1;
	volatile int8_t x3396 = 0;
	volatile int32_t t56 = INT32_MAX;

	t56 = ((x3393|(x3394<=x3395))<<x3396);

	if (t56 != INT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x3446 = 5U;
	int8_t x3447 = -1;
	uint16_t x3448 = 0U;
	int32_t t57 = -2780;

	t57 = ((x3445|(x3446<=x3447))<<x3448);

	if (t57 != 32767) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x3449 = 26U;
	int16_t x3451 = INT16_MAX;
	volatile uint16_t x3452 = 0U;

	t58 = ((x3449|(x3450<=x3451))<<x3452);

	if (t58 != 27) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x3469 = 1;
	int32_t x3470 = 0;
	volatile int8_t x3471 = INT8_MIN;
	static int32_t t59 = 1;

	t59 = ((x3469|(x3470<=x3471))<<x3472);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x3637 = UINT8_MAX;
	static uint64_t x3638 = 15959961156083LLU;
	volatile int32_t x3639 = -248466255;
	int16_t x3640 = 0;
	int32_t t60 = 3487;

	t60 = ((x3637|(x3638<=x3639))<<x3640);

	if (t60 != 255) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x3657 = 1294433235172LLU;
	int8_t x3658 = 58;
	uint16_t x3660 = 13U;
	volatile uint64_t t61 = 33324634482260903LLU;

	t61 = ((x3657|(x3658<=x3659))<<x3660);

	if (t61 != 10603997062537216LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x3685 = UINT16_MAX;
	int64_t x3686 = INT64_MIN;
	int32_t x3687 = INT32_MIN;
	static uint16_t x3688 = 7U;
	int32_t t62 = 12076;

	t62 = ((x3685|(x3686<=x3687))<<x3688);

	if (t62 != 8388480) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x3725 = 7472166LL;
	int16_t x3726 = 859;
	static int8_t x3727 = INT8_MIN;
	uint64_t x3728 = 1LLU;
	int64_t t63 = 185055965LL;

	t63 = ((x3725|(x3726<=x3727))<<x3728);

	if (t63 != 14944332LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x3865 = 450592;
	volatile int64_t x3866 = INT64_MIN;
	uint32_t x3867 = 239189918U;
	volatile uint8_t x3868 = 6U;
	volatile int32_t t64 = 316;

	t64 = ((x3865|(x3866<=x3867))<<x3868);

	if (t64 != 28837952) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x3977 = 282;
	int32_t x3978 = 101422;
	uint16_t x3979 = 26367U;
	static int8_t x3980 = 0;
	static int32_t t65 = 9734027;

	t65 = ((x3977|(x3978<=x3979))<<x3980);

	if (t65 != 282) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x4109 = UINT8_MAX;
	int8_t x4110 = 2;
	uint16_t x4111 = UINT16_MAX;
	volatile int32_t t66 = -83;

	t66 = ((x4109|(x4110<=x4111))<<x4112);

	if (t66 != 255) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x4117 = 15U;
	int64_t x4118 = 21309403LL;
	uint32_t x4119 = 4000920U;
	uint8_t x4120 = 10U;
	volatile int32_t t67 = -1736968;

	t67 = ((x4117|(x4118<=x4119))<<x4120);

	if (t67 != 15360) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x4139 = 12U;
	uint8_t x4140 = 4U;
	volatile uint64_t t68 = 4LLU;

	t68 = ((x4137|(x4138<=x4139))<<x4140);

	if (t68 != 121392LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x4249 = INT8_MAX;
	static int8_t x4250 = 2;
	int32_t x4251 = INT32_MIN;
	static uint64_t x4252 = 2LLU;

	t69 = ((x4249|(x4250<=x4251))<<x4252);

	if (t69 != 508) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x4261 = INT8_MAX;
	int16_t x4262 = INT16_MIN;
	uint16_t x4263 = 7U;
	int8_t x4264 = 9;
	volatile int32_t t70 = 1840964;

	t70 = ((x4261|(x4262<=x4263))<<x4264);

	if (t70 != 65024) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x4321 = 380;
	int32_t x4322 = INT32_MIN;
	int8_t x4324 = 6;
	static int32_t t71 = 124;

	t71 = ((x4321|(x4322<=x4323))<<x4324);

	if (t71 != 24384) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x4565 = 60;
	int8_t x4567 = 1;
	volatile int16_t x4568 = 1;
	static volatile int32_t t72 = 3411578;

	t72 = ((x4565|(x4566<=x4567))<<x4568);

	if (t72 != 120) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x4665 = INT32_MAX;
	int64_t x4666 = INT64_MAX;
	int8_t x4667 = -19;
	volatile int16_t x4668 = 0;
	volatile int32_t t73 = INT32_MAX;

	t73 = ((x4665|(x4666<=x4667))<<x4668);

	if (t73 != INT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x4734 = -1;
	int16_t x4735 = -1;
	uint16_t x4736 = 1U;
	static volatile int64_t t74 = 5666LL;

	t74 = ((x4733|(x4734<=x4735))<<x4736);

	if (t74 != 10819810822827078LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x4790 = -535679112;
	static uint8_t x4791 = 6U;
	static uint16_t x4792 = 3U;

	t75 = ((x4789|(x4790<=x4791))<<x4792);

	if (t75 != 392) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x4871 = 420414748610LL;
	static uint8_t x4872 = 0U;
	volatile int32_t t76 = -7765;

	t76 = ((x4869|(x4870<=x4871))<<x4872);

	if (t76 != 45) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x4877 = INT8_MAX;
	volatile int64_t x4878 = -32922404762679LL;
	uint16_t x4879 = 1440U;
	int32_t x4880 = 2;
	volatile int32_t t77 = -3;

	t77 = ((x4877|(x4878<=x4879))<<x4880);

	if (t77 != 508) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x4929 = UINT64_MAX;
	int16_t x4931 = 2;
	static int8_t x4932 = 7;

	t78 = ((x4929|(x4930<=x4931))<<x4932);

	if (t78 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x4933 = 210792271331089526LLU;
	volatile uint8_t x4936 = 21U;
	static volatile uint64_t t79 = 8807071LLU;

	t79 = ((x4933|(x4934<=x4935))<<x4936);

	if (t79 != 5658424161368801280LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x4973 = INT8_MAX;
	static int64_t x4974 = 14536367752LL;
	int8_t x4975 = -1;
	uint8_t x4976 = 0U;
	int32_t t80 = 955;

	t80 = ((x4973|(x4974<=x4975))<<x4976);

	if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x5001 = 3;
	int16_t x5002 = -1;
	volatile int32_t x5003 = INT32_MIN;
	volatile int8_t x5004 = 2;
	int32_t t81 = 25;

	t81 = ((x5001|(x5002<=x5003))<<x5004);

	if (t81 != 12) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x5173 = UINT64_MAX;
	uint32_t x5174 = UINT32_MAX;
	uint16_t x5175 = 323U;
	volatile uint8_t x5176 = 5U;

	t82 = ((x5173|(x5174<=x5175))<<x5176);

	if (t82 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x5357 = 863U;
	uint32_t x5358 = 2129353U;
	volatile int64_t x5359 = -7LL;
	volatile int16_t x5360 = 28;
	uint32_t t83 = 354548380U;

	t83 = ((x5357|(x5358<=x5359))<<x5360);

	if (t83 != 4026531840U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x5371 = 8820248477778LLU;
	volatile uint8_t x5372 = 1U;
	uint32_t t84 = 57U;

	t84 = ((x5369|(x5370<=x5371))<<x5372);

	if (t84 != 12902U) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x5449 = 14U;
	int32_t x5450 = INT32_MAX;
	int64_t x5451 = INT64_MIN;
	uint8_t x5452 = 1U;
	uint32_t t85 = 129768U;

	t85 = ((x5449|(x5450<=x5451))<<x5452);

	if (t85 != 28U) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x5453 = 0U;
	int32_t x5454 = INT32_MAX;
	int32_t x5455 = -234817;
	uint64_t x5456 = 1LLU;
	volatile int32_t t86 = 244337355;

	t86 = ((x5453|(x5454<=x5455))<<x5456);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x5481 = UINT32_MAX;
	int8_t x5482 = INT8_MIN;
	int16_t x5483 = -1;
	uint8_t x5484 = 0U;
	uint32_t t87 = UINT32_MAX;

	t87 = ((x5481|(x5482<=x5483))<<x5484);

	if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x5519 = 365922374828373LLU;
	uint32_t t88 = 623U;

	t88 = ((x5517|(x5518<=x5519))<<x5520);

	if (t88 != 4290772992U) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x5630 = 4U;
	static int16_t x5631 = INT16_MIN;
	uint8_t x5632 = 44U;
	volatile uint64_t t89 = 122619LLU;

	t89 = ((x5629|(x5630<=x5631))<<x5632);

	if (t89 != 8837170776621711360LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint16_t x5646 = 5U;
	uint16_t x5648 = 6U;
	int32_t t90 = -22;

	t90 = ((x5645|(x5646<=x5647))<<x5648);

	if (t90 != 704) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x5689 = UINT16_MAX;
	int64_t x5690 = INT64_MIN;
	int32_t x5691 = 1;
	volatile int32_t x5692 = 0;
	volatile int32_t t91 = 1002691;

	t91 = ((x5689|(x5690<=x5691))<<x5692);

	if (t91 != 65535) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x5821 = 821974236;
	uint8_t x5823 = 86U;
	uint8_t x5824 = 0U;
	int32_t t92 = 446957;

	t92 = ((x5821|(x5822<=x5823))<<x5824);

	if (t92 != 821974236) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x5849 = 7130065U;
	volatile uint32_t x5850 = 3289171U;
	volatile uint32_t x5851 = 1490291U;
	uint16_t x5852 = 13U;

	t93 = ((x5849|(x5850<=x5851))<<x5852);

	if (t93 != 2574917632U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x5853 = 12;
	static uint8_t x5854 = 20U;
	uint16_t x5855 = 3118U;
	static uint32_t x5856 = 6U;
	int32_t t94 = -4022247;

	t94 = ((x5853|(x5854<=x5855))<<x5856);

	if (t94 != 832) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x5901 = 30210125U;
	uint32_t x5902 = UINT32_MAX;
	uint8_t x5903 = UINT8_MAX;
	int16_t x5904 = 0;
	volatile uint32_t t95 = 31U;

	t95 = ((x5901|(x5902<=x5903))<<x5904);

	if (t95 != 30210125U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x5962 = -4;
	int32_t x5963 = INT32_MIN;
	uint8_t x5964 = 0U;
	volatile int32_t t96 = INT32_MAX;

	t96 = ((x5961|(x5962<=x5963))<<x5964);

	if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x6034 = -1;
	static int8_t x6036 = 0;
	volatile int32_t t97 = -225;

	t97 = ((x6033|(x6034<=x6035))<<x6036);

	if (t97 != 65535) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x6185 = 143412798320LLU;
	uint8_t x6186 = UINT8_MAX;
	int16_t x6187 = INT16_MIN;
	int8_t x6188 = 0;
	static uint64_t t98 = 295LLU;

	t98 = ((x6185|(x6186<=x6187))<<x6188);

	if (t98 != 143412798320LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x6285 = UINT64_MAX;
	int8_t x6286 = 34;
	volatile int64_t x6287 = -1LL;
	int8_t x6288 = 0;

	t99 = ((x6285|(x6286<=x6287))<<x6288);

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

