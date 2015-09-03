#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x68 = 1;
static uint32_t x103 = 910U;
volatile uint32_t t1 = 61768U;
int8_t x163 = -17;
uint16_t x213 = 60U;
int32_t x214 = INT32_MAX;
volatile int8_t x305 = -1;
static uint64_t x308 = 0LLU;
int16_t x398 = INT16_MIN;
int16_t x405 = INT16_MAX;
uint16_t x406 = 32U;
int8_t x594 = 36;
uint32_t x858 = 1357319U;
int16_t x859 = -1;
int16_t x1082 = -1;
uint16_t x1126 = 0U;
static uint64_t x1127 = UINT64_MAX;
static volatile uint64_t t18 = 2725242296398265804LLU;
uint32_t x1227 = UINT32_MAX;
volatile uint32_t t19 = 9U;
volatile int8_t x1580 = 5;
uint64_t t24 = 1900LLU;
volatile uint64_t t25 = 4549405154224076430LLU;
uint64_t x1711 = 0LLU;
uint8_t x1740 = 16U;
volatile int64_t t29 = 14743332LL;
int64_t x1847 = -45479103085LL;
uint64_t x1982 = UINT64_MAX;
uint64_t t32 = 856266000667880810LLU;
volatile int64_t x1991 = -1LL;
uint16_t x1992 = 13U;
uint32_t x2047 = UINT32_MAX;
volatile uint64_t t35 = 2644018889LLU;
volatile int32_t x2147 = -45;
volatile int32_t x2162 = -1;
volatile uint64_t x2163 = 1106659740087211584LLU;
uint32_t x2164 = 0U;
volatile uint64_t t38 = 1718445LLU;
static volatile int64_t t39 = -473090147LL;
volatile uint64_t t40 = 41LLU;
int8_t x2262 = -1;
uint64_t x2263 = 8691272073191503LLU;
uint8_t x2326 = 119U;
uint16_t x2374 = 1U;
uint8_t x2376 = 1U;
int64_t t46 = 23971974LL;
static int64_t x2562 = INT64_MIN;
static uint32_t x2578 = UINT32_MAX;
int32_t x2614 = -1;
uint16_t x2616 = 11U;
int16_t x2789 = 1887;
volatile int8_t x2792 = 0;
volatile int32_t x2801 = -1;
static uint32_t x2802 = UINT32_MAX;
int8_t x2804 = 9;
static int32_t x2814 = 12561427;
volatile uint32_t x2815 = 1119022U;
uint32_t t57 = 1258344496U;
uint8_t x2849 = UINT8_MAX;
int8_t x2893 = 1;
static uint8_t x2894 = 18U;
int64_t x2939 = -45LL;
static int32_t x2940 = 1;
volatile uint64_t t60 = 26LLU;
volatile int8_t x3021 = INT8_MIN;
uint32_t x3022 = 1808735U;
static volatile int16_t x3095 = INT16_MIN;
int16_t x3140 = 7;
int8_t x3148 = 0;
int8_t x3332 = 1;
volatile int32_t x3409 = -4115507;
static uint8_t x3410 = 1U;
static int16_t x3470 = INT16_MIN;
uint32_t x3483 = UINT32_MAX;
volatile uint8_t x3484 = 5U;
static int8_t x3508 = 1;
volatile int32_t x3604 = 1;
int32_t t73 = 52322;
static uint32_t x3659 = UINT32_MAX;
uint16_t x3660 = 1U;
uint16_t x3772 = 15U;
uint64_t x3900 = 0LLU;
uint32_t x3977 = 3U;
uint32_t x4441 = 257U;
static uint16_t x4453 = UINT16_MAX;
volatile uint32_t t83 = 1010065524U;
uint64_t x4506 = 16774404694900LLU;
int16_t x4508 = 15;
uint64_t t84 = 7LLU;
static volatile uint64_t x4706 = 96LLU;
static volatile int16_t x4812 = 1;
uint8_t x4884 = 13U;
uint32_t t94 = 7U;
int8_t x5019 = 2;
uint32_t t95 = 3U;
static int8_t x5094 = INT8_MIN;
static volatile int16_t x5095 = INT16_MIN;
uint64_t x5165 = 5424931694673915370LLU;
int32_t x5296 = 0;


void f0(void) {
	static int64_t x65 = 1127342509376549596LL;
	volatile uint32_t x66 = 18353U;
	volatile int8_t x67 = -1;
	int64_t t0 = 5687283473392712LL;

	t0 = ((x65|(x66-x67))>>x68);

	if (t0 != 563671254688283647LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x101 = -11;
	static uint16_t x102 = 1U;
	uint8_t x104 = 3U;

	t1 = ((x101|(x102-x103))>>x104);

	if (t1 != 536870910U) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x161 = 6U;
	static int8_t x162 = INT8_MAX;
	volatile uint8_t x164 = 5U;
	static volatile uint32_t t2 = 1936075461U;

	t2 = ((x161|(x162-x163))>>x164);

	if (t2 != 4U) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x215 = 73U;
	volatile uint64_t x216 = 13LLU;
	int32_t t3 = -125489120;

	t3 = ((x213|(x214-x215))>>x216);

	if (t3 != 262143) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x306 = UINT64_MAX;
	volatile uint16_t x307 = 7U;
	volatile uint64_t t4 = UINT64_MAX;

	t4 = ((x305|(x306-x307))>>x308);

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x341 = INT64_MAX;
	static int16_t x342 = -25;
	int16_t x343 = -106;
	int16_t x344 = 0;
	static int64_t t5 = INT64_MAX;

	t5 = ((x341|(x342-x343))>>x344);

	if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x397 = 168U;
	volatile int64_t x399 = INT64_MIN;
	int8_t x400 = 1;
	int64_t t6 = 3626472671000014LL;

	t6 = ((x397|(x398-x399))>>x400);

	if (t6 != 4611686018427371604LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x407 = UINT64_MAX;
	static volatile uint16_t x408 = 2U;
	static uint64_t t7 = 8618LLU;

	t7 = ((x405|(x406-x407))>>x408);

	if (t7 != 8191LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x525 = UINT64_MAX;
	volatile int64_t x526 = 6321926728535LL;
	volatile uint64_t x527 = 50064LLU;
	volatile uint16_t x528 = 1U;
	volatile uint64_t t8 = 137703323LLU;

	t8 = ((x525|(x526-x527))>>x528);

	if (t8 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x545 = 54821283LLU;
	int32_t x546 = -126639014;
	int8_t x547 = INT8_MIN;
	uint8_t x548 = 57U;
	volatile uint64_t t9 = 100LLU;

	t9 = ((x545|(x546-x547))>>x548);

	if (t9 != 127LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x593 = 1;
	volatile int8_t x595 = INT8_MIN;
	static int8_t x596 = 5;
	int32_t t10 = 105;

	t10 = ((x593|(x594-x595))>>x596);

	if (t10 != 5) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x705 = 1143LL;
	static uint16_t x706 = 17006U;
	uint8_t x707 = UINT8_MAX;
	static uint32_t x708 = 1U;
	int64_t t11 = -961610LL;

	t11 = ((x705|(x706-x707))>>x708);

	if (t11 != 8895LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x761 = INT8_MIN;
	volatile uint32_t x762 = UINT32_MAX;
	int16_t x763 = -1;
	uint16_t x764 = 0U;
	uint32_t t12 = 86122U;

	t12 = ((x761|(x762-x763))>>x764);

	if (t12 != 4294967168U) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x765 = 245487LLU;
	int64_t x766 = -5170999962388LL;
	uint64_t x767 = UINT64_MAX;
	uint8_t x768 = 14U;
	volatile uint64_t t13 = 65705547385LLU;

	t13 = ((x765|(x766-x767))>>x768);

	if (t13 != 1125899591229839LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x857 = 1U;
	uint8_t x860 = 4U;
	uint32_t t14 = 95185080U;

	t14 = ((x857|(x858-x859))>>x860);

	if (t14 != 84832U) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x861 = 24189727U;
	static int64_t x862 = 5948LL;
	volatile int16_t x863 = -1;
	uint8_t x864 = 15U;
	static volatile int64_t t15 = -8LL;

	t15 = ((x861|(x862-x863))>>x864);

	if (t15 != 738LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x885 = INT32_MAX;
	int64_t x886 = 15LL;
	uint64_t x887 = 6447LLU;
	int8_t x888 = 3;
	static volatile uint64_t t16 = 31LLU;

	t16 = ((x885|(x886-x887))>>x888);

	if (t16 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x1081 = 53LLU;
	uint32_t x1083 = 712965883U;
	volatile uint16_t x1084 = 30U;
	uint64_t t17 = 1128796324LLU;

	t17 = ((x1081|(x1082-x1083))>>x1084);

	if (t17 != 3LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x1125 = 5;
	static int8_t x1128 = 5;

	t18 = ((x1125|(x1126-x1127))>>x1128);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x1225 = INT32_MIN;
	static int32_t x1226 = INT32_MIN;
	uint16_t x1228 = 1U;

	t19 = ((x1225|(x1226-x1227))>>x1228);

	if (t19 != 1073741824U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x1237 = 28892LL;
	uint32_t x1238 = 129951196U;
	uint64_t x1239 = 4242LLU;
	int8_t x1240 = 0;
	uint64_t t20 = 776764370315624253LLU;

	t20 = ((x1237|(x1238-x1239))>>x1240);

	if (t20 != 129955294LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1293 = -1;
	uint32_t x1294 = 31706946U;
	static int32_t x1295 = -1;
	uint8_t x1296 = 0U;
	uint32_t t21 = UINT32_MAX;

	t21 = ((x1293|(x1294-x1295))>>x1296);

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x1345 = 15609490U;
	int8_t x1346 = INT8_MIN;
	uint16_t x1347 = 2858U;
	volatile uint16_t x1348 = 2U;
	uint32_t t22 = 15U;

	t22 = ((x1345|(x1346-x1347))>>x1348);

	if (t22 != 1073741749U) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1577 = UINT8_MAX;
	uint32_t x1578 = 0U;
	uint64_t x1579 = 606543676944LLU;
	static volatile uint64_t t23 = 1859LLU;

	t23 = ((x1577|(x1578-x1579))>>x1580);

	if (t23 != 576460733348933583LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1629 = 13;
	uint64_t x1630 = 3789681865LLU;
	uint16_t x1631 = UINT16_MAX;
	uint8_t x1632 = 63U;

	t24 = ((x1629|(x1630-x1631))>>x1632);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x1697 = INT64_MIN;
	volatile int8_t x1698 = -1;
	uint64_t x1699 = UINT64_MAX;
	int16_t x1700 = 5;

	t25 = ((x1697|(x1698-x1699))>>x1700);

	if (t25 != 288230376151711744LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x1709 = UINT64_MAX;
	uint8_t x1710 = 28U;
	int16_t x1712 = 3;
	volatile uint64_t t26 = 4126544791LLU;

	t26 = ((x1709|(x1710-x1711))>>x1712);

	if (t26 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint8_t x1737 = 16U;
	static uint64_t x1738 = 5339289757071625LLU;
	int64_t x1739 = INT64_MIN;
	uint64_t t27 = 24460870794LLU;

	t27 = ((x1737|(x1738-x1739))>>x1740);

	if (t27 != 140818959451474LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1805 = 48U;
	int8_t x1806 = INT8_MIN;
	int8_t x1807 = INT8_MIN;
	volatile uint8_t x1808 = 0U;
	int32_t t28 = -16;

	t28 = ((x1805|(x1806-x1807))>>x1808);

	if (t28 != 48) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1825 = INT64_MAX;
	uint32_t x1826 = 692U;
	int8_t x1827 = -1;
	int32_t x1828 = 3;

	t29 = ((x1825|(x1826-x1827))>>x1828);

	if (t29 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x1845 = 1938U;
	static int64_t x1846 = 1385LL;
	uint16_t x1848 = 25U;
	volatile int64_t t30 = -16660379LL;

	t30 = ((x1845|(x1846-x1847))>>x1848);

	if (t30 != 1355LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1885 = 0U;
	int32_t x1886 = INT32_MAX;
	int64_t x1887 = 17349LL;
	volatile int32_t x1888 = 2;
	int64_t t31 = -3177417LL;

	t31 = ((x1885|(x1886-x1887))>>x1888);

	if (t31 != 536866574LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1981 = 6070U;
	static uint64_t x1983 = 2834184LLU;
	int8_t x1984 = 1;

	t32 = ((x1981|(x1982-x1983))>>x1984);

	if (t32 != 9223372036853361659LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x1989 = UINT16_MAX;
	int8_t x1990 = 0;
	volatile int64_t t33 = 980LL;

	t33 = ((x1989|(x1990-x1991))>>x1992);

	if (t33 != 7LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x2045 = 1197093304236LL;
	uint32_t x2046 = 136425181U;
	int16_t x2048 = 8;
	int64_t t34 = -1LL;

	t34 = ((x2045|(x2046-x2047))>>x2048);

	if (t34 != 4676154303LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x2053 = INT32_MAX;
	uint16_t x2054 = 547U;
	uint64_t x2055 = 6213843143086829LLU;
	static int8_t x2056 = 0;

	t35 = ((x2053|(x2054-x2055))>>x2056);

	if (t35 != 18440530230989815807LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x2097 = INT8_MAX;
	uint32_t x2098 = 105U;
	volatile int32_t x2099 = INT32_MIN;
	static uint8_t x2100 = 0U;
	volatile uint32_t t36 = 1U;

	t36 = ((x2097|(x2098-x2099))>>x2100);

	if (t36 != 2147483775U) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x2145 = 104704148LLU;
	static uint16_t x2146 = 28U;
	uint32_t x2148 = 7U;
	volatile uint64_t t37 = 8254263LLU;

	t37 = ((x2145|(x2146-x2147))>>x2148);

	if (t37 != 818001LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x2161 = INT32_MIN;

	t38 = ((x2161|(x2162-x2163))>>x2164);

	if (t38 != 18446744073321589183LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x2169 = 25476678177365594LL;
	volatile uint16_t x2170 = UINT16_MAX;
	static int16_t x2171 = 36;
	int8_t x2172 = 62;

	t39 = ((x2169|(x2170-x2171))>>x2172);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x2177 = 2389;
	static int16_t x2178 = -1;
	uint64_t x2179 = 11704008759346LLU;
	volatile int16_t x2180 = 0;

	t40 = ((x2177|(x2178-x2179))>>x2180);

	if (t40 != 18446732369700794333LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x2205 = 47U;
	int32_t x2206 = INT32_MAX;
	volatile int16_t x2207 = 1;
	uint8_t x2208 = 1U;
	static int32_t t41 = 4133603;

	t41 = ((x2205|(x2206-x2207))>>x2208);

	if (t41 != 1073741823) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x2261 = INT16_MAX;
	int64_t x2264 = 43LL;
	static uint64_t t42 = 434992068620LLU;

	t42 = ((x2261|(x2262-x2263))>>x2264);

	if (t42 != 2096163LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x2269 = INT8_MAX;
	static int16_t x2270 = -1;
	uint32_t x2271 = 3206U;
	uint16_t x2272 = 1U;
	volatile uint32_t t43 = 110U;

	t43 = ((x2269|(x2270-x2271))>>x2272);

	if (t43 != 2147482047U) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x2325 = 3U;
	volatile int32_t x2327 = -729362514;
	int8_t x2328 = 0;
	static volatile uint32_t t44 = 318071U;

	t44 = ((x2325|(x2326-x2327))>>x2328);

	if (t44 != 729362635U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x2373 = INT64_MAX;
	volatile uint8_t x2375 = 1U;
	int64_t t45 = 27101976672348LL;

	t45 = ((x2373|(x2374-x2375))>>x2376);

	if (t45 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x2389 = 65240600LL;
	uint8_t x2390 = 85U;
	uint8_t x2391 = 1U;
	int8_t x2392 = 10;

	t46 = ((x2389|(x2390-x2391))>>x2392);

	if (t46 != 63711LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x2509 = 144LLU;
	int16_t x2510 = INT16_MIN;
	volatile uint16_t x2511 = UINT16_MAX;
	int8_t x2512 = 59;
	uint64_t t47 = 26418155441251LLU;

	t47 = ((x2509|(x2510-x2511))>>x2512);

	if (t47 != 31LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x2545 = -1LL;
	uint64_t x2546 = UINT64_MAX;
	uint64_t x2547 = 3765LLU;
	int8_t x2548 = 0;
	uint64_t t48 = UINT64_MAX;

	t48 = ((x2545|(x2546-x2547))>>x2548);

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint64_t x2561 = 15LLU;
	static volatile int8_t x2563 = 0;
	volatile uint32_t x2564 = 7U;
	volatile uint64_t t49 = 2275LLU;

	t49 = ((x2561|(x2562-x2563))>>x2564);

	if (t49 != 72057594037927936LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x2577 = -115412;
	volatile uint16_t x2579 = 63U;
	volatile int32_t x2580 = 3;
	uint32_t t50 = 34U;

	t50 = ((x2577|(x2578-x2579))>>x2580);

	if (t50 != 536870909U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x2613 = INT8_MIN;
	uint64_t x2615 = 742677094104921LLU;
	volatile uint64_t t51 = 1LLU;

	t51 = ((x2613|(x2614-x2615))>>x2616);

	if (t51 != 9007199254740991LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x2677 = 69927857906566211LL;
	volatile int64_t x2678 = -1743457968LL;
	uint64_t x2679 = UINT64_MAX;
	int8_t x2680 = 0;
	volatile uint64_t t52 = 31573574887LLU;

	t52 = ((x2677|(x2678-x2679))>>x2680);

	if (t52 != 18446744072543335763LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x2709 = -1;
	int16_t x2710 = INT16_MIN;
	uint64_t x2711 = UINT64_MAX;
	uint8_t x2712 = 36U;
	volatile uint64_t t53 = 0LLU;

	t53 = ((x2709|(x2710-x2711))>>x2712);

	if (t53 != 268435455LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x2717 = 1U;
	uint32_t x2718 = 949U;
	volatile int16_t x2719 = 55;
	uint32_t x2720 = 10U;
	uint32_t t54 = 668U;

	t54 = ((x2717|(x2718-x2719))>>x2720);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x2790 = UINT64_MAX;
	volatile uint64_t x2791 = 478590484LLU;
	volatile uint64_t t55 = 119422747053656219LLU;

	t55 = ((x2789|(x2790-x2791))>>x2792);

	if (t55 != 18446744073230962687LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x2803 = UINT64_MAX;
	static uint64_t t56 = 149262731646758LLU;

	t56 = ((x2801|(x2802-x2803))>>x2804);

	if (t56 != 36028797018963967LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x2813 = 0;
	int8_t x2816 = 5;

	t57 = ((x2813|(x2814-x2815))>>x2816);

	if (t57 != 357575U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x2850 = INT8_MAX;
	volatile int8_t x2851 = 1;
	int8_t x2852 = 17;
	static volatile int32_t t58 = -14;

	t58 = ((x2849|(x2850-x2851))>>x2852);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x2895 = INT8_MIN;
	uint8_t x2896 = 0U;
	int32_t t59 = 127419;

	t59 = ((x2893|(x2894-x2895))>>x2896);

	if (t59 != 147) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x2937 = -1LL;
	uint64_t x2938 = 3811LLU;

	t60 = ((x2937|(x2938-x2939))>>x2940);

	if (t60 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x3023 = 7449U;
	uint16_t x3024 = 7U;
	uint32_t t61 = 228570040U;

	t61 = ((x3021|(x3022-x3023))>>x3024);

	if (t61 != 33554431U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x3041 = -33359417LL;
	uint64_t x3042 = 1661282418548LLU;
	volatile int32_t x3043 = -64085770;
	volatile uint8_t x3044 = 0U;
	static volatile uint64_t t62 = 994LLU;

	t62 = ((x3041|(x3042-x3043))>>x3044);

	if (t62 != 18446744073709027327LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x3093 = INT8_MAX;
	int32_t x3094 = -1;
	int16_t x3096 = 3;
	static int32_t t63 = 5945837;

	t63 = ((x3093|(x3094-x3095))>>x3096);

	if (t63 != 4095) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x3137 = INT16_MIN;
	uint64_t x3138 = UINT64_MAX;
	volatile int64_t x3139 = INT64_MAX;
	uint64_t t64 = 40204615469LLU;

	t64 = ((x3137|(x3138-x3139))>>x3140);

	if (t64 != 144115188075855616LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x3145 = INT16_MIN;
	uint32_t x3146 = 1419678U;
	volatile uint64_t x3147 = 3389030160728735930LLU;
	volatile uint64_t t65 = 1930LLU;

	t65 = ((x3145|(x3146-x3147))>>x3148);

	if (t65 != 18446744073709545700LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x3329 = INT32_MIN;
	int8_t x3330 = -1;
	volatile uint32_t x3331 = 736111U;
	uint32_t t66 = 10662U;

	t66 = ((x3329|(x3330-x3331))>>x3332);

	if (t66 != 2147115592U) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x3411 = UINT32_MAX;
	uint8_t x3412 = 17U;
	volatile uint32_t t67 = 629U;

	t67 = ((x3409|(x3410-x3411))>>x3412);

	if (t67 != 32736U) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x3413 = UINT16_MAX;
	int64_t x3414 = 3255985LL;
	static int32_t x3415 = INT32_MIN;
	uint64_t x3416 = 1LLU;
	volatile int64_t t68 = -650868624775629LL;

	t68 = ((x3413|(x3414-x3415))>>x3416);

	if (t68 != 1075380223LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x3469 = INT16_MAX;
	uint64_t x3471 = 207299187568538545LLU;
	volatile int16_t x3472 = 8;
	static volatile uint64_t t69 = 3599LLU;

	t69 = ((x3469|(x3470-x3471))>>x3472);

	if (t69 != 71247831586488319LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x3481 = -7399;
	volatile uint64_t x3482 = UINT64_MAX;
	uint64_t t70 = 49727392LLU;

	t70 = ((x3481|(x3482-x3483))>>x3484);

	if (t70 != 576460752303423256LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x3505 = 39;
	int16_t x3506 = INT16_MAX;
	uint8_t x3507 = 5U;
	int32_t t71 = 1;

	t71 = ((x3505|(x3506-x3507))>>x3508);

	if (t71 != 16383) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x3513 = INT16_MIN;
	uint64_t x3514 = UINT64_MAX;
	uint8_t x3515 = UINT8_MAX;
	uint8_t x3516 = 14U;
	volatile uint64_t t72 = 35075662967408050LLU;

	t72 = ((x3513|(x3514-x3515))>>x3516);

	if (t72 != 1125899906842623LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x3601 = UINT8_MAX;
	int8_t x3602 = 9;
	int32_t x3603 = -669126;

	t73 = ((x3601|(x3602-x3603))>>x3604);

	if (t73 != 334591) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x3657 = 8373U;
	uint16_t x3658 = 32U;
	static uint32_t t74 = 89801U;

	t74 = ((x3657|(x3658-x3659))>>x3660);

	if (t74 != 4186U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x3769 = 7U;
	static int64_t x3770 = INT64_MIN;
	int64_t x3771 = INT64_MIN;
	int64_t t75 = -31527737685207LL;

	t75 = ((x3769|(x3770-x3771))>>x3772);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x3845 = INT16_MAX;
	volatile uint64_t x3846 = 15591814LLU;
	uint32_t x3847 = UINT32_MAX;
	uint8_t x3848 = 4U;
	volatile uint64_t t76 = 126780610304LLU;

	t76 = ((x3845|(x3846-x3847))>>x3848);

	if (t76 != 1152921504339386367LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x3873 = 0U;
	int16_t x3874 = INT16_MIN;
	uint32_t x3875 = 1246212098U;
	int8_t x3876 = 1;
	volatile uint32_t t77 = 2801U;

	t77 = ((x3873|(x3874-x3875))>>x3876);

	if (t77 != 1524361215U) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x3897 = 1U;
	int8_t x3898 = -2;
	int16_t x3899 = INT16_MIN;
	volatile int32_t t78 = 40043708;

	t78 = ((x3897|(x3898-x3899))>>x3900);

	if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x3941 = -1;
	static int16_t x3942 = -5;
	uint64_t x3943 = 297887LLU;
	volatile int16_t x3944 = 0;
	uint64_t t79 = UINT64_MAX;

	t79 = ((x3941|(x3942-x3943))>>x3944);

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x3978 = INT64_MAX;
	int64_t x3979 = 18884375759188225LL;
	uint64_t x3980 = 7LLU;
	int64_t t80 = 346033816005171426LL;

	t80 = ((x3977|(x3978-x3979))>>x3980);

	if (t80 != 71910059852309277LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x4301 = 6335363637388656LLU;
	int16_t x4302 = INT16_MIN;
	int64_t x4303 = INT64_MIN;
	uint32_t x4304 = 0U;
	uint64_t t81 = 557942779724491639LLU;

	t81 = ((x4301|(x4302-x4303))>>x4304);

	if (t81 != 9223372036854752624LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x4442 = UINT32_MAX;
	int64_t x4443 = -1LL;
	uint8_t x4444 = 15U;
	volatile int64_t t82 = -34LL;

	t82 = ((x4441|(x4442-x4443))>>x4444);

	if (t82 != 131072LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x4454 = UINT32_MAX;
	int8_t x4455 = -3;
	int16_t x4456 = 0;

	t83 = ((x4453|(x4454-x4455))>>x4456);

	if (t83 != 65535U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x4505 = 955504636485123020LLU;
	int32_t x4507 = INT32_MIN;

	t84 = ((x4505|(x4506-x4507))>>x4508);

	if (t84 != 29160123612639LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x4509 = 396916273242LL;
	volatile uint64_t x4510 = 10758275026882LLU;
	int32_t x4511 = -147642244;
	uint8_t x4512 = 2U;
	static volatile uint64_t t85 = 46LLU;

	t85 = ((x4509|(x4510-x4511))>>x4512);

	if (t85 != 2711114214871LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x4617 = 4939324239LLU;
	int32_t x4618 = 29;
	uint32_t x4619 = 13U;
	uint64_t x4620 = 4LLU;
	static uint64_t t86 = 11985012LLU;

	t86 = ((x4617|(x4618-x4619))>>x4620);

	if (t86 != 308707765LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x4681 = -1;
	uint64_t x4682 = 4463496179LLU;
	int64_t x4683 = -27LL;
	static int16_t x4684 = 4;
	volatile uint64_t t87 = 14LLU;

	t87 = ((x4681|(x4682-x4683))>>x4684);

	if (t87 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x4685 = INT64_MAX;
	int16_t x4686 = INT16_MAX;
	uint32_t x4687 = 168U;
	uint8_t x4688 = 38U;
	int64_t t88 = -3758419667LL;

	t88 = ((x4685|(x4686-x4687))>>x4688);

	if (t88 != 33554431LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x4705 = 39U;
	static volatile int64_t x4707 = -5LL;
	uint16_t x4708 = 0U;
	volatile uint64_t t89 = 208081947399902LLU;

	t89 = ((x4705|(x4706-x4707))>>x4708);

	if (t89 != 103LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x4737 = UINT32_MAX;
	volatile uint32_t x4738 = UINT32_MAX;
	int32_t x4739 = INT32_MIN;
	uint32_t x4740 = 0U;
	uint32_t t90 = UINT32_MAX;

	t90 = ((x4737|(x4738-x4739))>>x4740);

	if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x4809 = INT8_MIN;
	static uint64_t x4810 = UINT64_MAX;
	volatile int64_t x4811 = -76755473709560LL;
	volatile uint64_t t91 = 23116408LLU;

	t91 = ((x4809|(x4810-x4811))>>x4812);

	if (t91 != 9223372036854775803LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x4881 = 62U;
	static uint16_t x4882 = UINT16_MAX;
	volatile uint16_t x4883 = 1U;
	volatile int32_t t92 = 15807;

	t92 = ((x4881|(x4882-x4883))>>x4884);

	if (t92 != 7) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x4885 = 3;
	uint8_t x4886 = 3U;
	int16_t x4887 = -1;
	int64_t x4888 = 0LL;
	int32_t t93 = 1;

	t93 = ((x4885|(x4886-x4887))>>x4888);

	if (t93 != 7) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x4965 = 0;
	uint32_t x4966 = 1U;
	static int8_t x4967 = -1;
	volatile int32_t x4968 = 3;

	t94 = ((x4965|(x4966-x4967))>>x4968);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x5017 = UINT32_MAX;
	volatile uint8_t x5018 = 52U;
	uint16_t x5020 = 1U;

	t95 = ((x5017|(x5018-x5019))>>x5020);

	if (t95 != 2147483647U) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x5093 = UINT32_MAX;
	int16_t x5096 = 0;
	uint32_t t96 = UINT32_MAX;

	t96 = ((x5093|(x5094-x5095))>>x5096);

	if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x5166 = INT16_MIN;
	int32_t x5167 = 58097;
	int16_t x5168 = 6;
	static uint64_t t97 = 6310255433LLU;

	t97 = ((x5165|(x5166-x5167))>>x5168);

	if (t97 != 288230376151711735LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x5225 = INT32_MAX;
	uint64_t x5226 = UINT64_MAX;
	int16_t x5227 = -1;
	int8_t x5228 = 0;
	uint64_t t98 = 503595646883481434LLU;

	t98 = ((x5225|(x5226-x5227))>>x5228);

	if (t98 != 2147483647LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x5293 = INT8_MAX;
	static int32_t x5294 = INT32_MIN;
	uint64_t x5295 = 82789955761LLU;
	uint64_t t99 = 1830373716LLU;

	t99 = ((x5293|(x5294-x5295))>>x5296);

	if (t99 != 18446743988772112255LLU) { NG(); } else { ; }
	
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

