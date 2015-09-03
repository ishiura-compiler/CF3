#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x182 = 47U;
static uint64_t x185 = UINT64_MAX;
static volatile uint64_t x186 = 6LLU;
uint64_t x205 = UINT64_MAX;
int32_t t5 = 193672;
int16_t x437 = -1;
static volatile uint8_t x473 = UINT8_MAX;
uint16_t x495 = 3U;
uint32_t x496 = 1U;
uint16_t x504 = 1U;
uint64_t t10 = 12125649LLU;
int8_t x669 = INT8_MIN;
volatile uint64_t x738 = 355LLU;
uint8_t x971 = 0U;
volatile int64_t t15 = 1687872LL;
static int64_t x1122 = INT64_MIN;
uint8_t x1124 = 5U;
int32_t t17 = -19364;
static uint64_t x1173 = UINT64_MAX;
uint16_t x1176 = 0U;
uint64_t x1211 = 8060353751153606LLU;
uint64_t t20 = 57557LLU;
int8_t x1242 = -1;
uint64_t t21 = 1433355291LLU;
int8_t x1277 = 1;
uint64_t x1294 = UINT64_MAX;
uint64_t x1345 = UINT64_MAX;
static volatile int64_t x1489 = INT64_MIN;
uint16_t x1492 = 1U;
volatile int64_t t26 = 60494430630LL;
int8_t x1568 = 1;
int32_t t28 = 390702416;
int32_t x1636 = 62;
static uint8_t x1729 = 0U;
int8_t x1833 = 11;
static uint64_t t33 = 16972431275500LLU;
volatile uint16_t x1847 = UINT16_MAX;
uint64_t x1877 = 8105LLU;
int64_t t37 = -1115LL;
uint16_t x2046 = 242U;
int64_t x2059 = -50817105974543LL;
uint8_t x2060 = 6U;
int16_t x2153 = INT16_MIN;
int16_t x2155 = INT16_MIN;
volatile int32_t x2156 = 0;
volatile int32_t t40 = 0;
volatile uint8_t x2252 = 1U;
uint64_t x2410 = 877053553LLU;
uint8_t x2412 = 5U;
int16_t x2521 = -1004;
int8_t x2538 = -4;
static int8_t x2539 = INT8_MIN;
static uint64_t x2605 = UINT64_MAX;
int16_t x2859 = INT16_MIN;
int8_t x2986 = INT8_MIN;
int32_t x3021 = 6;
uint32_t t53 = 257U;
uint64_t x3172 = 7LLU;
static uint64_t x3246 = 891827267292658LLU;
int32_t x3247 = -1;
volatile int8_t x3305 = INT8_MIN;
static uint16_t x3341 = 3359U;
volatile int64_t x3378 = -67005243220019LL;
volatile uint32_t x3471 = 6U;
static int64_t t62 = -6316LL;
static volatile int8_t x3517 = 6;
uint8_t x3899 = 12U;
uint8_t x3962 = 10U;
volatile int8_t x3963 = INT8_MAX;
static int16_t x4006 = 1;
uint8_t x4008 = 2U;
int32_t x4029 = -1;
volatile uint64_t t69 = 121191201LLU;
int8_t x4406 = INT8_MIN;
int16_t x4472 = 10;
uint16_t x4558 = 4181U;
uint32_t x4560 = 3U;
int32_t x4834 = INT32_MIN;
static uint64_t x4999 = 2162LLU;
volatile uint32_t x5178 = UINT32_MAX;
uint8_t x5205 = 14U;
static uint64_t x5214 = 4134LLU;
volatile uint8_t x5342 = UINT8_MAX;
volatile int64_t t87 = -1653599144699338228LL;
uint8_t x5654 = 60U;
uint8_t x5656 = 7U;
uint32_t t88 = 924U;
uint64_t t89 = 43543144650LLU;
uint32_t x5912 = 4U;
uint64_t x5922 = 109605247341LLU;
volatile int8_t x6073 = INT8_MIN;
int64_t x6075 = INT64_MAX;
static uint8_t x6253 = 1U;
static volatile uint32_t t94 = 17U;
volatile uint64_t t95 = 13297054LLU;
uint8_t x6292 = 0U;
int64_t x6461 = INT64_MAX;


void f0(void) {
	uint32_t x101 = 6U;
	uint64_t x102 = 13657LLU;
	uint32_t x103 = UINT32_MAX;
	uint8_t x104 = 2U;
	uint64_t t0 = 501021LLU;

	t0 = (x101+((x102*x103)<<x104));

	if (t0 != 234625473391266LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x181 = 58U;
	uint64_t x183 = UINT64_MAX;
	volatile uint16_t x184 = 12U;
	static volatile uint64_t t1 = 88241605213142688LLU;

	t1 = (x181+((x182*x183)<<x184));

	if (t1 != 18446744073709359162LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x187 = INT16_MIN;
	static uint16_t x188 = 16U;
	uint64_t t2 = 22501533LLU;

	t2 = (x185+((x186*x187)<<x188));

	if (t2 != 18446744060824649727LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x206 = -30;
	uint64_t x207 = 3LLU;
	uint8_t x208 = 3U;
	volatile uint64_t t3 = 319085493847762215LLU;

	t3 = (x205+((x206*x207)<<x208));

	if (t3 != 18446744073709550895LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x249 = 0;
	uint64_t x250 = 1LLU;
	int32_t x251 = INT32_MIN;
	uint8_t x252 = 0U;
	uint64_t t4 = 63708790888LLU;

	t4 = (x249+((x250*x251)<<x252));

	if (t4 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x337 = 4;
	volatile int16_t x338 = -1;
	volatile int16_t x339 = INT16_MIN;
	uint8_t x340 = 8U;

	t5 = (x337+((x338*x339)<<x340));

	if (t5 != 8388612) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x438 = UINT32_MAX;
	volatile int32_t x439 = INT32_MIN;
	static int64_t x440 = 7LL;
	uint32_t t6 = UINT32_MAX;

	t6 = (x437+((x438*x439)<<x440));

	if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x465 = INT8_MAX;
	uint64_t x466 = 23989LLU;
	volatile int8_t x467 = 11;
	volatile int8_t x468 = 0;
	uint64_t t7 = 146159831029481LLU;

	t7 = (x465+((x466*x467)<<x468));

	if (t7 != 264006LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x474 = 0U;
	int16_t x475 = INT16_MIN;
	int16_t x476 = 0;
	uint32_t t8 = 2U;

	t8 = (x473+((x474*x475)<<x476));

	if (t8 != 255U) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x493 = 6U;
	static volatile uint64_t x494 = 25LLU;
	uint64_t t9 = 49108975527LLU;

	t9 = (x493+((x494*x495)<<x496));

	if (t9 != 156LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x501 = UINT64_MAX;
	uint32_t x502 = UINT32_MAX;
	uint32_t x503 = UINT32_MAX;

	t10 = (x501+((x502*x503)<<x504));

	if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x617 = -1;
	volatile int64_t x618 = -1LL;
	int64_t x619 = -11993945482096LL;
	uint16_t x620 = 17U;
	int64_t t11 = 36074LL;

	t11 = (x617+((x618*x619)<<x620));

	if (t11 != 1572070422229286911LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x670 = 0U;
	int16_t x671 = INT16_MIN;
	int8_t x672 = 1;
	volatile int32_t t12 = 737;

	t12 = (x669+((x670*x671)<<x672));

	if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x737 = -1LL;
	int16_t x739 = INT16_MIN;
	int8_t x740 = 2;
	uint64_t t13 = 2471053295485428LLU;

	t13 = (x737+((x738*x739)<<x740));

	if (t13 != 18446744073663021055LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x969 = -7501595;
	volatile int16_t x970 = -14;
	uint16_t x972 = 19U;
	static int32_t t14 = -318;

	t14 = (x969+((x970*x971)<<x972));

	if (t14 != -7501595) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x1085 = -1LL;
	static uint32_t x1086 = 8155U;
	volatile uint8_t x1087 = 15U;
	int16_t x1088 = 4;

	t15 = (x1085+((x1086*x1087)<<x1088));

	if (t15 != 1957199LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x1121 = 0;
	uint64_t x1123 = 14507017850LLU;
	uint64_t t16 = 39647002LLU;

	t16 = (x1121+((x1122*x1123)<<x1124));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1133 = -48;
	int8_t x1134 = 10;
	static int32_t x1135 = 9312663;
	static int32_t x1136 = 1;

	t17 = (x1133+((x1134*x1135)<<x1136));

	if (t17 != 186253212) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x1161 = -1;
	static int64_t x1162 = -8171LL;
	volatile int8_t x1163 = 0;
	uint8_t x1164 = 4U;
	static int64_t t18 = -2045LL;

	t18 = (x1161+((x1162*x1163)<<x1164));

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x1174 = 1;
	volatile int64_t x1175 = 610843LL;
	volatile uint64_t t19 = 13042741758743438LLU;

	t19 = (x1173+((x1174*x1175)<<x1176));

	if (t19 != 610842LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1209 = 58U;
	int16_t x1210 = -1;
	int64_t x1212 = 44LL;

	t20 = (x1209+((x1210*x1211)<<x1212));

	if (t20 != 6936563772941140026LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x1241 = 7348319329LLU;
	volatile uint64_t x1243 = UINT64_MAX;
	static volatile int16_t x1244 = 11;

	t21 = (x1241+((x1242*x1243)<<x1244));

	if (t21 != 7348321377LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x1278 = INT8_MIN;
	int8_t x1279 = -1;
	volatile uint16_t x1280 = 2U;
	volatile int32_t t22 = 10;

	t22 = (x1277+((x1278*x1279)<<x1280));

	if (t22 != 513) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1293 = UINT8_MAX;
	static int16_t x1295 = INT16_MIN;
	static uint32_t x1296 = 4U;
	volatile uint64_t t23 = 845888045401LLU;

	t23 = (x1293+((x1294*x1295)<<x1296));

	if (t23 != 524543LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1333 = 10U;
	int8_t x1334 = -1;
	volatile uint64_t x1335 = 3730321LLU;
	int32_t x1336 = 7;
	volatile uint64_t t24 = 129351845229LLU;

	t24 = (x1333+((x1334*x1335)<<x1336));

	if (t24 != 18446744073232070538LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x1346 = 0;
	int16_t x1347 = INT16_MIN;
	int8_t x1348 = 1;
	volatile uint64_t t25 = UINT64_MAX;

	t25 = (x1345+((x1346*x1347)<<x1348));

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1490 = UINT32_MAX;
	static uint16_t x1491 = 1055U;

	t26 = (x1489+((x1490*x1491)<<x1492));

	if (t26 != -9223372032559810622LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x1525 = INT32_MIN;
	int64_t x1526 = 265953897465LL;
	uint64_t x1527 = 6238307LLU;
	volatile uint16_t x1528 = 4U;
	volatile uint64_t t27 = 4264LLU;

	t27 = (x1525+((x1526*x1527)<<x1528));

	if (t27 != 8098888887874032816LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1565 = 333U;
	int16_t x1566 = INT16_MIN;
	volatile int32_t x1567 = -1;

	t28 = (x1565+((x1566*x1567)<<x1568));

	if (t28 != 65869) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x1617 = 20;
	int32_t x1618 = INT32_MAX;
	uint32_t x1619 = 2221991U;
	uint32_t x1620 = 7U;
	volatile uint32_t t29 = 9U;

	t29 = (x1617+((x1618*x1619)<<x1620));

	if (t29 != 4010552468U) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x1633 = UINT8_MAX;
	uint64_t x1634 = UINT64_MAX;
	int32_t x1635 = 1;
	uint64_t t30 = 54427717036178LLU;

	t30 = (x1633+((x1634*x1635)<<x1636));

	if (t30 != 13835058055282163967LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x1730 = 7371084U;
	uint16_t x1731 = 206U;
	volatile uint8_t x1732 = 12U;
	volatile uint32_t t31 = 587099832U;

	t31 = (x1729+((x1730*x1731)<<x1732));

	if (t31 != 431128576U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1737 = INT32_MIN;
	uint8_t x1738 = 1U;
	static volatile uint16_t x1739 = 12849U;
	int16_t x1740 = 4;
	static volatile int32_t t32 = -493;

	t32 = (x1737+((x1738*x1739)<<x1740));

	if (t32 != -2147278064) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x1834 = UINT32_MAX;
	uint64_t x1835 = 4648151877202162LLU;
	uint8_t x1836 = 0U;

	t33 = (x1833+((x1834*x1835)<<x1836));

	if (t33 != 3562397306428804889LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x1845 = INT16_MIN;
	uint32_t x1846 = 3U;
	int8_t x1848 = 17;
	volatile uint32_t t34 = 38684103U;

	t34 = (x1845+((x1846*x1847)<<x1848));

	if (t34 != 4294541312U) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x1861 = 20101422929462LLU;
	int32_t x1862 = 365;
	uint16_t x1863 = 1900U;
	int8_t x1864 = 1;
	uint64_t t35 = 137768543267020LLU;

	t35 = (x1861+((x1862*x1863)<<x1864));

	if (t35 != 20101424316462LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x1878 = UINT32_MAX;
	uint8_t x1879 = 3U;
	int8_t x1880 = 0;
	volatile uint64_t t36 = 6LLU;

	t36 = (x1877+((x1878*x1879)<<x1880));

	if (t36 != 4294975398LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1969 = INT64_MIN;
	uint32_t x1970 = 28U;
	int8_t x1971 = -5;
	static uint16_t x1972 = 2U;

	t37 = (x1969+((x1970*x1971)<<x1972));

	if (t37 != -9223372032559809072LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x2045 = INT32_MIN;
	uint64_t x2047 = 121271LLU;
	int32_t x2048 = 2;
	uint64_t t38 = 1856750LLU;

	t38 = (x2045+((x2046*x2047)<<x2048));

	if (t38 != 18446744071679458296LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x2057 = INT64_MIN;
	int16_t x2058 = -1;
	volatile int64_t t39 = -5687LL;

	t39 = (x2057+((x2058*x2059)<<x2060));

	if (t39 != -9220119742072405056LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x2154 = -1505;

	t40 = (x2153+((x2154*x2155)<<x2156));

	if (t40 != 49283072) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint32_t x2249 = UINT32_MAX;
	uint8_t x2250 = 110U;
	uint8_t x2251 = 85U;
	static volatile uint32_t t41 = 3147713U;

	t41 = (x2249+((x2250*x2251)<<x2252));

	if (t41 != 18699U) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x2257 = UINT32_MAX;
	int16_t x2258 = INT16_MIN;
	int64_t x2259 = -1LL;
	uint8_t x2260 = 1U;
	volatile int64_t t42 = -260127LL;

	t42 = (x2257+((x2258*x2259)<<x2260));

	if (t42 != 4295032831LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x2409 = INT64_MIN;
	static int8_t x2411 = 40;
	uint64_t t43 = 4930561021634183LLU;

	t43 = (x2409+((x2410*x2411)<<x2412));

	if (t43 != 9223373159483323648LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x2465 = 5558U;
	volatile uint8_t x2466 = 102U;
	uint32_t x2467 = UINT32_MAX;
	static int8_t x2468 = 28;
	uint32_t t44 = 1904679022U;

	t44 = (x2465+((x2466*x2467)<<x2468));

	if (t44 != 2684360118U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x2522 = 33862157LL;
	uint32_t x2523 = 872140U;
	volatile int8_t x2524 = 6;
	volatile int64_t t45 = 181739267485661LL;

	t45 = (x2521+((x2522*x2523)<<x2524));

	if (t45 != 1890082662781716LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x2537 = -61633884047120LL;
	uint32_t x2540 = 8U;
	static volatile int64_t t46 = -40556961594LL;

	t46 = (x2537+((x2538*x2539)<<x2540));

	if (t46 != -61633883916048LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x2589 = -1;
	int64_t x2590 = 10207397LL;
	uint64_t x2591 = UINT64_MAX;
	int8_t x2592 = 1;
	uint64_t t47 = 454804560250LLU;

	t47 = (x2589+((x2590*x2591)<<x2592));

	if (t47 != 18446744073689136821LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x2606 = 7590332056LLU;
	static int64_t x2607 = INT64_MAX;
	static volatile int16_t x2608 = 0;
	uint64_t t48 = 3330990054LLU;

	t48 = (x2605+((x2606*x2607)<<x2608));

	if (t48 != 18446744066119219559LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x2857 = INT8_MIN;
	int16_t x2858 = -1;
	uint8_t x2860 = 12U;
	volatile int32_t t49 = -487;

	t49 = (x2857+((x2858*x2859)<<x2860));

	if (t49 != 134217600) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x2921 = -1318;
	uint64_t x2922 = 31733408943847LLU;
	int32_t x2923 = -61;
	static volatile uint8_t x2924 = 30U;
	uint64_t t50 = 3403LLU;

	t50 = (x2921+((x2922*x2923)<<x2924));

	if (t50 != 4096037868055558874LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x2985 = 7058;
	uint64_t x2987 = 20664450LLU;
	volatile uint8_t x2988 = 15U;
	uint64_t t51 = 21692391552537633LLU;

	t51 = (x2985+((x2986*x2987)<<x2988));

	if (t51 != 18446657400724265874LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x3022 = INT16_MIN;
	int32_t x3023 = -1;
	volatile uint8_t x3024 = 0U;
	int32_t t52 = -56;

	t52 = (x3021+((x3022*x3023)<<x3024));

	if (t52 != 32774) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x3145 = INT16_MIN;
	volatile uint32_t x3146 = UINT32_MAX;
	volatile uint8_t x3147 = 9U;
	int8_t x3148 = 1;

	t53 = (x3145+((x3146*x3147)<<x3148));

	if (t53 != 4294934510U) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x3169 = INT16_MIN;
	static int32_t x3170 = -1;
	int16_t x3171 = INT16_MIN;
	volatile int32_t t54 = -100448843;

	t54 = (x3169+((x3170*x3171)<<x3172));

	if (t54 != 4161536) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x3245 = -1LL;
	static int8_t x3248 = 0;
	uint64_t t55 = 38869869229727674LLU;

	t55 = (x3245+((x3246*x3247)<<x3248));

	if (t55 != 18445852246442258957LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x3269 = 7563;
	int16_t x3270 = -1;
	int16_t x3271 = INT16_MIN;
	static uint32_t x3272 = 7U;
	int32_t t56 = 2;

	t56 = (x3269+((x3270*x3271)<<x3272));

	if (t56 != 4201867) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x3306 = INT16_MIN;
	uint64_t x3307 = UINT64_MAX;
	volatile uint8_t x3308 = 14U;
	static uint64_t t57 = 2LLU;

	t57 = (x3305+((x3306*x3307)<<x3308));

	if (t57 != 536870784LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x3342 = 19027596598LLU;
	int8_t x3343 = INT8_MAX;
	int64_t x3344 = 1LL;
	uint64_t t58 = 689LLU;

	t58 = (x3341+((x3342*x3343)<<x3344));

	if (t58 != 4833009539251LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x3377 = 29979U;
	int8_t x3379 = INT8_MIN;
	int8_t x3380 = 1;
	static volatile int64_t t59 = 1864248162701LL;

	t59 = (x3377+((x3378*x3379)<<x3380));

	if (t59 != 17153342264354843LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x3397 = 5637661515LL;
	int16_t x3398 = -7;
	int16_t x3399 = INT16_MIN;
	int8_t x3400 = 1;
	volatile int64_t t60 = 1649826333216567650LL;

	t60 = (x3397+((x3398*x3399)<<x3400));

	if (t60 != 5638120267LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x3405 = INT8_MIN;
	volatile int8_t x3406 = -1;
	uint64_t x3407 = UINT64_MAX;
	uint8_t x3408 = 9U;
	static volatile uint64_t t61 = 35994906LLU;

	t61 = (x3405+((x3406*x3407)<<x3408));

	if (t61 != 384LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x3469 = UINT32_MAX;
	static int64_t x3470 = 498861315LL;
	static uint64_t x3472 = 1LLU;

	t62 = (x3469+((x3470*x3471)<<x3472));

	if (t62 != 10281303075LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x3518 = -1;
	volatile int8_t x3519 = -51;
	static int8_t x3520 = 4;
	static volatile int32_t t63 = 6007;

	t63 = (x3517+((x3518*x3519)<<x3520));

	if (t63 != 822) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x3805 = 10752;
	volatile int8_t x3806 = INT8_MIN;
	static uint32_t x3807 = UINT32_MAX;
	volatile int8_t x3808 = 27;
	volatile uint32_t t64 = 1343425693U;

	t64 = (x3805+((x3806*x3807)<<x3808));

	if (t64 != 10752U) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x3897 = 43U;
	int32_t x3898 = 7521;
	int16_t x3900 = 6;
	volatile int32_t t65 = 3506;

	t65 = (x3897+((x3898*x3899)<<x3900));

	if (t65 != 5776171) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x3961 = INT16_MIN;
	uint8_t x3964 = 13U;
	int32_t t66 = 3;

	t66 = (x3961+((x3962*x3963)<<x3964));

	if (t66 != 10371072) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x4005 = INT32_MIN;
	static volatile int16_t x4007 = INT16_MAX;
	volatile int32_t t67 = 3;

	t67 = (x4005+((x4006*x4007)<<x4008));

	if (t67 != -2147352580) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int8_t x4030 = 63;
	uint16_t x4031 = 3U;
	uint8_t x4032 = 7U;
	int32_t t68 = 8;

	t68 = (x4029+((x4030*x4031)<<x4032));

	if (t68 != 24191) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x4125 = INT64_MIN;
	int16_t x4126 = INT16_MIN;
	uint64_t x4127 = 2150597886738350LLU;
	static uint16_t x4128 = 5U;

	t69 = (x4125+((x4126*x4127)<<x4128));

	if (t69 != 4660819344867983360LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x4153 = 27516553LL;
	int16_t x4154 = -1;
	uint64_t x4155 = 1533390LLU;
	uint32_t x4156 = 5U;
	uint64_t t70 = 433884LLU;

	t70 = (x4153+((x4154*x4155)<<x4156));

	if (t70 != 18446744073687999689LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x4369 = 81U;
	static int32_t x4370 = INT32_MIN;
	uint8_t x4371 = 0U;
	volatile uint8_t x4372 = 1U;
	uint32_t t71 = 281U;

	t71 = (x4369+((x4370*x4371)<<x4372));

	if (t71 != 81U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x4405 = 10LLU;
	uint32_t x4407 = 2042265790U;
	int8_t x4408 = 3;
	volatile uint64_t t72 = 1453975692596722LLU;

	t72 = (x4405+((x4406*x4407)<<x4408));

	if (t72 != 368904202LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x4469 = UINT64_MAX;
	static int8_t x4470 = INT8_MAX;
	uint32_t x4471 = 4U;
	static uint64_t t73 = 21LLU;

	t73 = (x4469+((x4470*x4471)<<x4472));

	if (t73 != 520191LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x4473 = -1LL;
	uint8_t x4474 = 21U;
	static uint64_t x4475 = 11056522003LLU;
	int8_t x4476 = 35;
	uint64_t t74 = 688926000306390866LLU;

	t74 = (x4473+((x4474*x4475)<<x4476));

	if (t74 != 8889829102895235071LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x4541 = INT8_MIN;
	static volatile int16_t x4542 = 8553;
	volatile uint8_t x4543 = 8U;
	static uint64_t x4544 = 3LLU;
	volatile int32_t t75 = -10401295;

	t75 = (x4541+((x4542*x4543)<<x4544));

	if (t75 != 547264) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x4557 = 21872331119155LLU;
	int8_t x4559 = 3;
	uint64_t t76 = 26314650LLU;

	t76 = (x4557+((x4558*x4559)<<x4560));

	if (t76 != 21872331219499LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x4617 = INT64_MIN;
	int16_t x4618 = INT16_MIN;
	volatile int8_t x4619 = 0;
	int32_t x4620 = 16;
	volatile int64_t t77 = INT64_MIN;

	t77 = (x4617+((x4618*x4619)<<x4620));

	if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x4833 = 870718714U;
	volatile uint32_t x4835 = 695581758U;
	volatile uint8_t x4836 = 25U;
	volatile uint32_t t78 = 127U;

	t78 = (x4833+((x4834*x4835)<<x4836));

	if (t78 != 870718714U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x4909 = INT8_MIN;
	static volatile int16_t x4910 = 0;
	static uint64_t x4911 = 1LLU;
	static int16_t x4912 = 1;
	uint64_t t79 = 1013219LLU;

	t79 = (x4909+((x4910*x4911)<<x4912));

	if (t79 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x4997 = -5370;
	int8_t x4998 = 1;
	static uint64_t x5000 = 7LLU;
	uint64_t t80 = 28653LLU;

	t80 = (x4997+((x4998*x4999)<<x5000));

	if (t80 != 271366LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x5077 = INT16_MIN;
	static int8_t x5078 = INT8_MIN;
	int16_t x5079 = -1;
	int32_t x5080 = 1;
	static int32_t t81 = 1992826;

	t81 = (x5077+((x5078*x5079)<<x5080));

	if (t81 != -32512) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x5141 = 341473381737LLU;
	static uint8_t x5142 = 0U;
	int32_t x5143 = -515363398;
	uint8_t x5144 = 10U;
	static uint64_t t82 = 4588339191506LLU;

	t82 = (x5141+((x5142*x5143)<<x5144));

	if (t82 != 341473381737LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x5177 = -1;
	int8_t x5179 = INT8_MIN;
	static volatile int8_t x5180 = 1;
	uint32_t t83 = 21U;

	t83 = (x5177+((x5178*x5179)<<x5180));

	if (t83 != 255U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x5206 = -1;
	int8_t x5207 = -1;
	int16_t x5208 = 0;
	int32_t t84 = 0;

	t84 = (x5205+((x5206*x5207)<<x5208));

	if (t84 != 15) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x5213 = INT8_MIN;
	int8_t x5215 = INT8_MIN;
	uint8_t x5216 = 57U;
	volatile uint64_t t85 = 1526715LLU;

	t85 = (x5213+((x5214*x5215)<<x5216));

	if (t85 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x5341 = 96596592;
	int16_t x5343 = 0;
	int8_t x5344 = 4;
	volatile int32_t t86 = -398584810;

	t86 = (x5341+((x5342*x5343)<<x5344));

	if (t86 != 96596592) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x5421 = INT8_MAX;
	int8_t x5422 = -1;
	int64_t x5423 = -1LL;
	uint8_t x5424 = 3U;

	t87 = (x5421+((x5422*x5423)<<x5424));

	if (t87 != 135LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x5653 = 3U;
	uint32_t x5655 = 104U;

	t88 = (x5653+((x5654*x5655)<<x5656));

	if (t88 != 798723U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x5689 = 65922590325LLU;
	uint16_t x5690 = 0U;
	static int8_t x5691 = -1;
	int8_t x5692 = 9;

	t89 = (x5689+((x5690*x5691)<<x5692));

	if (t89 != 65922590325LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x5909 = INT32_MAX;
	uint32_t x5910 = 0U;
	int8_t x5911 = INT8_MIN;
	static uint32_t t90 = 6U;

	t90 = (x5909+((x5910*x5911)<<x5912));

	if (t90 != 2147483647U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x5921 = -1LL;
	int32_t x5923 = 1;
	static uint8_t x5924 = 3U;
	volatile uint64_t t91 = 2LLU;

	t91 = (x5921+((x5922*x5923)<<x5924));

	if (t91 != 876841978727LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x6037 = -54;
	volatile uint64_t x6038 = 25558LLU;
	uint32_t x6039 = 1658179779U;
	static uint8_t x6040 = 39U;
	uint64_t t92 = 40470LLU;

	t92 = (x6037+((x6038*x6039)<<x6040));

	if (t92 != 4320641992020197322LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x6074 = 732514944251LLU;
	static volatile uint32_t x6076 = 0U;
	volatile uint64_t t93 = 33LLU;

	t93 = (x6073+((x6074*x6075)<<x6076));

	if (t93 != 9223371304339831429LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x6254 = INT32_MIN;
	static uint32_t x6255 = UINT32_MAX;
	static volatile uint32_t x6256 = 6U;

	t94 = (x6253+((x6254*x6255)<<x6256));

	if (t94 != 1U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x6277 = -1LL;
	volatile int8_t x6278 = INT8_MIN;
	uint64_t x6279 = UINT64_MAX;
	int16_t x6280 = 52;

	t95 = (x6277+((x6278*x6279)<<x6280));

	if (t95 != 576460752303423487LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x6289 = INT16_MIN;
	static uint8_t x6290 = 54U;
	int32_t x6291 = 10408307;
	int32_t t96 = 374103;

	t96 = (x6289+((x6290*x6291)<<x6292));

	if (t96 != 562015810) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x6317 = INT32_MIN;
	uint16_t x6318 = 26U;
	uint8_t x6319 = 1U;
	uint8_t x6320 = 18U;
	int32_t t97 = -131724;

	t97 = (x6317+((x6318*x6319)<<x6320));

	if (t97 != -2140667904) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x6377 = INT64_MIN;
	uint16_t x6378 = 2966U;
	static int8_t x6379 = 1;
	uint8_t x6380 = 3U;
	int64_t t98 = 383249450LL;

	t98 = (x6377+((x6378*x6379)<<x6380));

	if (t98 != -9223372036854752080LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x6462 = UINT64_MAX;
	int8_t x6463 = INT8_MAX;
	volatile int16_t x6464 = 1;
	volatile uint64_t t99 = 10928409409LLU;

	t99 = (x6461+((x6462*x6463)<<x6464));

	if (t99 != 9223372036854775553LLU) { NG(); } else { ; }
	
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

