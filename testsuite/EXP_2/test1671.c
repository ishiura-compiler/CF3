#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x37 = INT32_MAX;
static int64_t x38 = INT64_MIN;
int8_t x96 = 0;
volatile int32_t t1 = -105;
int8_t x305 = INT8_MAX;
int32_t t2 = -780174;
int16_t x327 = -1;
uint64_t x526 = 6766511325321929LLU;
int8_t x528 = 7;
int64_t x570 = INT64_MAX;
uint64_t x577 = 0LLU;
static int64_t x578 = INT64_MIN;
uint8_t x581 = 9U;
static volatile int32_t x610 = INT32_MIN;
int8_t x612 = 15;
volatile int32_t t11 = 47;
int8_t x623 = 0;
int64_t t15 = -1428059303456LL;
int16_t x893 = INT16_MAX;
int32_t x1038 = -6;
uint8_t x1040 = 2U;
static int32_t t19 = 10807;
static int64_t x1163 = 477595732147LL;
static uint32_t x1213 = 14U;
volatile uint16_t x1215 = 14U;
volatile uint32_t t22 = 3832U;
int32_t x1238 = INT32_MAX;
static int16_t x1245 = INT16_MAX;
volatile uint32_t t25 = 1628482999U;
uint32_t x1349 = UINT32_MAX;
volatile int8_t x1352 = 0;
volatile int64_t t29 = -1726245LL;
volatile uint64_t x1527 = 10480619LLU;
volatile uint64_t x1713 = 15303LLU;
static uint8_t x1756 = 0U;
int8_t x1763 = INT8_MIN;
volatile int32_t x2042 = INT32_MIN;
volatile int32_t t42 = 425;
int8_t x2276 = 0;
volatile uint16_t x2292 = 1U;
volatile int32_t t47 = 94029;
volatile uint32_t x2425 = UINT32_MAX;
int16_t x2427 = -19;
uint32_t x2444 = 2U;
uint64_t x2445 = UINT64_MAX;
static uint64_t x2497 = 13451852039LLU;
volatile int32_t x2499 = -390545;
volatile int64_t x2601 = 21480LL;
uint8_t x2632 = 12U;
volatile int32_t t53 = 1167;
static int16_t x2790 = INT16_MIN;
uint8_t x2792 = 18U;
uint8_t x2821 = 100U;
int64_t x2822 = INT64_MAX;
uint32_t x2862 = 4062030U;
volatile int8_t x2895 = -17;
volatile uint8_t x2896 = 20U;
uint8_t x2908 = 2U;
int8_t x2919 = INT8_MIN;
uint32_t x2981 = 3131802U;
uint8_t x3124 = 6U;
volatile int32_t t61 = 11451196;
volatile uint64_t t64 = 29593503940LLU;
volatile uint64_t x3422 = UINT64_MAX;
uint8_t x3444 = 5U;
int32_t x3595 = INT32_MAX;
int8_t x3700 = 2;
uint16_t x3720 = 7U;
uint64_t x3896 = 12LLU;
uint8_t x4112 = 11U;
int64_t x4139 = INT64_MIN;
int16_t x4295 = INT16_MIN;
uint8_t x4296 = 4U;
int32_t t86 = 768680463;
uint64_t x4479 = UINT64_MAX;
int8_t x4480 = 51;
int64_t x4535 = INT64_MIN;
int64_t x4599 = -1LL;
int16_t x4727 = -1;
int32_t x4755 = INT32_MIN;
int16_t x4926 = -1;
volatile uint16_t x4979 = 32327U;
static int64_t x5041 = 403867527LL;


void f0(void) {
	static uint64_t x39 = 188573409037134783LLU;
	int8_t x40 = 1;
	int32_t t0 = -626398658;

	t0 = ((x37|(x38<=x39))>>x40);

	if (t0 != 1073741823) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x93 = INT8_MAX;
	uint16_t x94 = 3633U;
	int64_t x95 = INT64_MIN;

	t1 = ((x93|(x94<=x95))>>x96);

	if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x306 = -1;
	int64_t x307 = -3242590543672993215LL;
	int32_t x308 = 1;

	t2 = ((x305|(x306<=x307))>>x308);

	if (t2 != 63) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x325 = UINT64_MAX;
	uint16_t x326 = UINT16_MAX;
	int8_t x328 = 2;
	static volatile uint64_t t3 = 4506906267LLU;

	t3 = ((x325|(x326<=x327))>>x328);

	if (t3 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x381 = 14U;
	volatile int8_t x382 = 2;
	int16_t x383 = INT16_MIN;
	int8_t x384 = 0;
	int32_t t4 = -1798;

	t4 = ((x381|(x382<=x383))>>x384);

	if (t4 != 14) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x505 = 0;
	int64_t x506 = 1844762370885299LL;
	int8_t x507 = 0;
	int32_t x508 = 7;
	int32_t t5 = -2850710;

	t5 = ((x505|(x506<=x507))>>x508);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x517 = INT64_MAX;
	int64_t x518 = -4240711791280455794LL;
	int32_t x519 = -1;
	uint8_t x520 = 7U;
	int64_t t6 = 6290757371903LL;

	t6 = ((x517|(x518<=x519))>>x520);

	if (t6 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x525 = INT8_MAX;
	uint16_t x527 = 2U;
	static volatile int32_t t7 = -70;

	t7 = ((x525|(x526<=x527))>>x528);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x569 = UINT16_MAX;
	int64_t x571 = 556LL;
	int16_t x572 = 1;
	int32_t t8 = 102;

	t8 = ((x569|(x570<=x571))>>x572);

	if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x579 = 7;
	int8_t x580 = 1;
	uint64_t t9 = 22LLU;

	t9 = ((x577|(x578<=x579))>>x580);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x582 = 16;
	static int64_t x583 = 7614955LL;
	static uint8_t x584 = 3U;
	volatile int32_t t10 = -5517288;

	t10 = ((x581|(x582<=x583))>>x584);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x609 = 2257U;
	volatile int8_t x611 = INT8_MIN;

	t11 = ((x609|(x610<=x611))>>x612);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x617 = INT16_MAX;
	int64_t x618 = INT64_MIN;
	int32_t x619 = INT32_MIN;
	volatile int32_t x620 = 11;
	volatile int32_t t12 = -9872417;

	t12 = ((x617|(x618<=x619))>>x620);

	if (t12 != 15) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x621 = 74;
	int32_t x622 = -1;
	volatile uint32_t x624 = 4U;
	volatile int32_t t13 = -1;

	t13 = ((x621|(x622<=x623))>>x624);

	if (t13 != 4) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x725 = 721082U;
	static int8_t x726 = 2;
	int32_t x727 = -1;
	int16_t x728 = 0;
	uint32_t t14 = 1284U;

	t14 = ((x725|(x726<=x727))>>x728);

	if (t14 != 721082U) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x853 = 4724851063658342LL;
	uint16_t x854 = UINT16_MAX;
	int64_t x855 = INT64_MIN;
	volatile uint16_t x856 = 1U;

	t15 = ((x853|(x854<=x855))>>x856);

	if (t15 != 2362425531829171LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x894 = UINT8_MAX;
	volatile int32_t x895 = -2871;
	volatile uint8_t x896 = 1U;
	volatile int32_t t16 = 0;

	t16 = ((x893|(x894<=x895))>>x896);

	if (t16 != 16383) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x965 = 64894275;
	static volatile int8_t x966 = 31;
	int8_t x967 = 0;
	int16_t x968 = 18;
	volatile int32_t t17 = 190257457;

	t17 = ((x965|(x966<=x967))>>x968);

	if (t17 != 247) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x985 = 17569797139592618LL;
	int8_t x986 = -1;
	int32_t x987 = INT32_MIN;
	static int64_t x988 = 14LL;
	volatile int64_t t18 = 831282846660LL;

	t18 = ((x985|(x986<=x987))>>x988);

	if (t18 != 1072375313695LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x1037 = 2157;
	volatile int8_t x1039 = INT8_MIN;

	t19 = ((x1037|(x1038<=x1039))>>x1040);

	if (t19 != 539) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x1161 = INT64_MAX;
	volatile int16_t x1162 = INT16_MIN;
	int16_t x1164 = 1;
	volatile int64_t t20 = -14267007675LL;

	t20 = ((x1161|(x1162<=x1163))>>x1164);

	if (t20 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x1209 = INT64_MAX;
	int64_t x1210 = -172LL;
	int16_t x1211 = INT16_MAX;
	volatile int16_t x1212 = 0;
	volatile int64_t t21 = INT64_MAX;

	t21 = ((x1209|(x1210<=x1211))>>x1212);

	if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1214 = 159;
	uint16_t x1216 = 4U;

	t22 = ((x1213|(x1214<=x1215))>>x1216);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1237 = 1;
	int16_t x1239 = INT16_MIN;
	uint16_t x1240 = 3U;
	static int32_t t23 = 161679045;

	t23 = ((x1237|(x1238<=x1239))>>x1240);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x1246 = 3422U;
	static volatile int32_t x1247 = INT32_MAX;
	uint8_t x1248 = 13U;
	volatile int32_t t24 = 86097682;

	t24 = ((x1245|(x1246<=x1247))>>x1248);

	if (t24 != 3) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x1249 = 239978508U;
	volatile uint16_t x1250 = UINT16_MAX;
	uint32_t x1251 = 329008051U;
	uint8_t x1252 = 0U;

	t25 = ((x1249|(x1250<=x1251))>>x1252);

	if (t25 != 239978509U) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1269 = UINT8_MAX;
	int16_t x1270 = INT16_MIN;
	int8_t x1271 = INT8_MIN;
	uint32_t x1272 = 0U;
	int32_t t26 = -1;

	t26 = ((x1269|(x1270<=x1271))>>x1272);

	if (t26 != 255) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1350 = INT16_MAX;
	int32_t x1351 = INT32_MIN;
	volatile uint32_t t27 = UINT32_MAX;

	t27 = ((x1349|(x1350<=x1351))>>x1352);

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1377 = UINT64_MAX;
	static int8_t x1378 = INT8_MIN;
	int8_t x1379 = INT8_MIN;
	uint8_t x1380 = 0U;
	volatile uint64_t t28 = UINT64_MAX;

	t28 = ((x1377|(x1378<=x1379))>>x1380);

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x1433 = 15592LL;
	int8_t x1434 = INT8_MIN;
	int64_t x1435 = -1LL;
	static uint8_t x1436 = 2U;

	t29 = ((x1433|(x1434<=x1435))>>x1436);

	if (t29 != 3898LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1441 = INT16_MAX;
	uint16_t x1442 = UINT16_MAX;
	int16_t x1443 = 0;
	uint8_t x1444 = 13U;
	int32_t t30 = -392;

	t30 = ((x1441|(x1442<=x1443))>>x1444);

	if (t30 != 3) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x1525 = 1517991245371LL;
	int16_t x1526 = INT16_MIN;
	int16_t x1528 = 3;
	static volatile int64_t t31 = 241561156767591556LL;

	t31 = ((x1525|(x1526<=x1527))>>x1528);

	if (t31 != 189748905671LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1701 = INT8_MAX;
	int8_t x1702 = INT8_MIN;
	int64_t x1703 = 5173452LL;
	volatile int16_t x1704 = 5;
	static int32_t t32 = -982;

	t32 = ((x1701|(x1702<=x1703))>>x1704);

	if (t32 != 3) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x1714 = UINT32_MAX;
	volatile uint16_t x1715 = 670U;
	volatile uint8_t x1716 = 7U;
	volatile uint64_t t33 = 8962115425926599LLU;

	t33 = ((x1713|(x1714<=x1715))>>x1716);

	if (t33 != 119LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x1737 = 136973986258LLU;
	uint16_t x1738 = UINT16_MAX;
	static uint16_t x1739 = UINT16_MAX;
	int64_t x1740 = 13LL;
	uint64_t t34 = 128530379811275455LLU;

	t34 = ((x1737|(x1738<=x1739))>>x1740);

	if (t34 != 16720457LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x1753 = 90735887023LLU;
	int32_t x1754 = INT32_MIN;
	uint8_t x1755 = 11U;
	uint64_t t35 = 3974976952921LLU;

	t35 = ((x1753|(x1754<=x1755))>>x1756);

	if (t35 != 90735887023LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x1761 = INT8_MAX;
	uint64_t x1762 = 1228775218029LLU;
	uint64_t x1764 = 2LLU;
	volatile int32_t t36 = -30333370;

	t36 = ((x1761|(x1762<=x1763))>>x1764);

	if (t36 != 31) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x1905 = 9;
	int64_t x1906 = INT64_MIN;
	static int32_t x1907 = INT32_MIN;
	static uint16_t x1908 = 2U;
	int32_t t37 = 1372248;

	t37 = ((x1905|(x1906<=x1907))>>x1908);

	if (t37 != 2) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x2041 = 663;
	int8_t x2043 = 36;
	int8_t x2044 = 0;
	volatile int32_t t38 = 10;

	t38 = ((x2041|(x2042<=x2043))>>x2044);

	if (t38 != 663) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x2049 = 39U;
	static uint16_t x2050 = 114U;
	static uint32_t x2051 = 74U;
	int16_t x2052 = 0;
	static int32_t t39 = -80523444;

	t39 = ((x2049|(x2050<=x2051))>>x2052);

	if (t39 != 39) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint16_t x2093 = 1352U;
	int16_t x2094 = 1;
	uint8_t x2095 = 1U;
	static uint8_t x2096 = 14U;
	int32_t t40 = -3272;

	t40 = ((x2093|(x2094<=x2095))>>x2096);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x2145 = 3U;
	int32_t x2146 = INT32_MIN;
	int8_t x2147 = -1;
	uint16_t x2148 = 6U;
	volatile int32_t t41 = -2459451;

	t41 = ((x2145|(x2146<=x2147))>>x2148);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x2165 = 1U;
	volatile uint64_t x2166 = 11LLU;
	static int32_t x2167 = -1;
	static int16_t x2168 = 1;

	t42 = ((x2165|(x2166<=x2167))>>x2168);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x2273 = INT8_MAX;
	int16_t x2274 = INT16_MIN;
	uint8_t x2275 = UINT8_MAX;
	volatile int32_t t43 = -31;

	t43 = ((x2273|(x2274<=x2275))>>x2276);

	if (t43 != 127) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x2281 = 1077773266981461036LL;
	static int32_t x2282 = -1;
	static int8_t x2283 = INT8_MIN;
	int32_t x2284 = 10;
	int64_t t44 = 3LL;

	t44 = ((x2281|(x2282<=x2283))>>x2284);

	if (t44 != 1052512956036583LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x2289 = 1U;
	uint8_t x2290 = 8U;
	int32_t x2291 = 17;
	volatile int32_t t45 = 5;

	t45 = ((x2289|(x2290<=x2291))>>x2292);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x2345 = INT64_MAX;
	static volatile int16_t x2346 = INT16_MIN;
	uint64_t x2347 = UINT64_MAX;
	int8_t x2348 = 63;
	static int64_t t46 = -2053481014086821LL;

	t46 = ((x2345|(x2346<=x2347))>>x2348);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x2401 = UINT16_MAX;
	int32_t x2402 = -1;
	volatile int8_t x2403 = INT8_MIN;
	uint8_t x2404 = 2U;

	t47 = ((x2401|(x2402<=x2403))>>x2404);

	if (t47 != 16383) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x2426 = INT16_MAX;
	volatile uint8_t x2428 = 2U;
	volatile uint32_t t48 = 19658U;

	t48 = ((x2425|(x2426<=x2427))>>x2428);

	if (t48 != 1073741823U) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int16_t x2441 = INT16_MAX;
	volatile int8_t x2442 = -1;
	int32_t x2443 = -32346;
	volatile int32_t t49 = 11;

	t49 = ((x2441|(x2442<=x2443))>>x2444);

	if (t49 != 8191) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x2446 = INT8_MIN;
	volatile int64_t x2447 = -1LL;
	int16_t x2448 = 21;
	volatile uint64_t t50 = 19LLU;

	t50 = ((x2445|(x2446<=x2447))>>x2448);

	if (t50 != 8796093022207LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x2498 = 3251U;
	volatile uint8_t x2500 = 3U;
	static uint64_t t51 = 8993567783440LLU;

	t51 = ((x2497|(x2498<=x2499))>>x2500);

	if (t51 != 1681481504LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x2602 = INT32_MIN;
	uint16_t x2603 = 471U;
	uint8_t x2604 = 0U;
	int64_t t52 = -60439LL;

	t52 = ((x2601|(x2602<=x2603))>>x2604);

	if (t52 != 21481LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x2629 = 96U;
	static int64_t x2630 = 144445598LL;
	uint32_t x2631 = UINT32_MAX;

	t53 = ((x2629|(x2630<=x2631))>>x2632);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x2789 = 23;
	volatile int16_t x2791 = INT16_MIN;
	int32_t t54 = 82798;

	t54 = ((x2789|(x2790<=x2791))>>x2792);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x2823 = 20U;
	uint8_t x2824 = 2U;
	volatile int32_t t55 = -25294;

	t55 = ((x2821|(x2822<=x2823))>>x2824);

	if (t55 != 25) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x2861 = UINT32_MAX;
	static int8_t x2863 = 0;
	uint8_t x2864 = 2U;
	volatile uint32_t t56 = 3203U;

	t56 = ((x2861|(x2862<=x2863))>>x2864);

	if (t56 != 1073741823U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x2893 = INT64_MAX;
	volatile int16_t x2894 = -1;
	int64_t t57 = 35LL;

	t57 = ((x2893|(x2894<=x2895))>>x2896);

	if (t57 != 8796093022207LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x2905 = 440;
	volatile uint8_t x2906 = 9U;
	int64_t x2907 = INT64_MIN;
	volatile int32_t t58 = -90208285;

	t58 = ((x2905|(x2906<=x2907))>>x2908);

	if (t58 != 110) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int8_t x2917 = INT8_MAX;
	int64_t x2918 = -202195LL;
	static volatile int8_t x2920 = 1;
	int32_t t59 = 11560306;

	t59 = ((x2917|(x2918<=x2919))>>x2920);

	if (t59 != 63) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x2982 = 21U;
	uint32_t x2983 = 14097U;
	int8_t x2984 = 13;
	uint32_t t60 = 3U;

	t60 = ((x2981|(x2982<=x2983))>>x2984);

	if (t60 != 382U) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x3121 = INT32_MAX;
	static uint32_t x3122 = UINT32_MAX;
	uint32_t x3123 = 57082205U;

	t61 = ((x3121|(x3122<=x3123))>>x3124);

	if (t61 != 33554431) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x3221 = UINT32_MAX;
	volatile int64_t x3222 = INT64_MIN;
	int64_t x3223 = -1LL;
	int16_t x3224 = 0;
	volatile uint32_t t62 = UINT32_MAX;

	t62 = ((x3221|(x3222<=x3223))>>x3224);

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x3225 = UINT16_MAX;
	uint64_t x3226 = 22110LLU;
	uint8_t x3227 = 7U;
	uint8_t x3228 = 1U;
	int32_t t63 = -118505;

	t63 = ((x3225|(x3226<=x3227))>>x3228);

	if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x3241 = 455892937866932532LLU;
	int32_t x3242 = INT32_MIN;
	volatile uint64_t x3243 = 789LLU;
	static volatile uint8_t x3244 = 44U;

	t64 = ((x3241|(x3242<=x3243))>>x3244);

	if (t64 != 25914LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x3421 = 0U;
	uint64_t x3423 = 26LLU;
	static int16_t x3424 = 10;
	int32_t t65 = -17;

	t65 = ((x3421|(x3422<=x3423))>>x3424);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x3433 = 14277592265555159LL;
	volatile uint32_t x3434 = UINT32_MAX;
	static int32_t x3435 = INT32_MAX;
	static uint64_t x3436 = 60LLU;
	int64_t t66 = 1986483548LL;

	t66 = ((x3433|(x3434<=x3435))>>x3436);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x3441 = 1895U;
	uint8_t x3442 = UINT8_MAX;
	int16_t x3443 = -1;
	static volatile uint32_t t67 = 870317U;

	t67 = ((x3441|(x3442<=x3443))>>x3444);

	if (t67 != 59U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x3589 = 533676555895LL;
	volatile int64_t x3590 = -13480660404567841LL;
	uint64_t x3591 = 8136256769447069LLU;
	static int32_t x3592 = 1;
	static volatile int64_t t68 = -873387537261012LL;

	t68 = ((x3589|(x3590<=x3591))>>x3592);

	if (t68 != 266838277947LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x3593 = UINT8_MAX;
	volatile uint8_t x3594 = UINT8_MAX;
	int8_t x3596 = 3;
	int32_t t69 = -764973222;

	t69 = ((x3593|(x3594<=x3595))>>x3596);

	if (t69 != 31) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x3697 = 206752925U;
	uint16_t x3698 = 9308U;
	int8_t x3699 = INT8_MAX;
	static uint32_t t70 = 2011550732U;

	t70 = ((x3697|(x3698<=x3699))>>x3700);

	if (t70 != 51688231U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x3717 = 5681U;
	int64_t x3718 = 30252526LL;
	int16_t x3719 = -2887;
	volatile int32_t t71 = 13;

	t71 = ((x3717|(x3718<=x3719))>>x3720);

	if (t71 != 44) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x3733 = 3526U;
	uint64_t x3734 = 24LLU;
	uint8_t x3735 = 7U;
	uint8_t x3736 = 1U;
	volatile uint32_t t72 = 19U;

	t72 = ((x3733|(x3734<=x3735))>>x3736);

	if (t72 != 1763U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x3765 = 47;
	volatile uint16_t x3766 = 705U;
	static int16_t x3767 = -1;
	static uint8_t x3768 = 8U;
	int32_t t73 = -6556;

	t73 = ((x3765|(x3766<=x3767))>>x3768);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x3817 = 219688;
	int32_t x3818 = INT32_MAX;
	int16_t x3819 = 949;
	static uint8_t x3820 = 11U;
	volatile int32_t t74 = 0;

	t74 = ((x3817|(x3818<=x3819))>>x3820);

	if (t74 != 107) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x3849 = 37U;
	int16_t x3850 = INT16_MIN;
	int64_t x3851 = INT64_MIN;
	uint8_t x3852 = 1U;
	int32_t t75 = -45;

	t75 = ((x3849|(x3850<=x3851))>>x3852);

	if (t75 != 18) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x3885 = 488300970951900LLU;
	static uint8_t x3886 = UINT8_MAX;
	volatile int16_t x3887 = -1;
	int32_t x3888 = 43;
	uint64_t t76 = 25LLU;

	t76 = ((x3885|(x3886<=x3887))>>x3888);

	if (t76 != 55LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x3893 = 3;
	static uint8_t x3894 = 61U;
	int64_t x3895 = INT64_MIN;
	volatile int32_t t77 = -50467;

	t77 = ((x3893|(x3894<=x3895))>>x3896);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x3909 = UINT16_MAX;
	int64_t x3910 = 177494LL;
	int32_t x3911 = INT32_MAX;
	uint8_t x3912 = 1U;
	static int32_t t78 = 130;

	t78 = ((x3909|(x3910<=x3911))>>x3912);

	if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x3961 = 19819U;
	uint8_t x3962 = UINT8_MAX;
	int8_t x3963 = -1;
	uint8_t x3964 = 0U;
	int32_t t79 = 13;

	t79 = ((x3961|(x3962<=x3963))>>x3964);

	if (t79 != 19819) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x4057 = 0;
	uint8_t x4058 = UINT8_MAX;
	uint32_t x4059 = UINT32_MAX;
	volatile int64_t x4060 = 1LL;
	volatile int32_t t80 = -2;

	t80 = ((x4057|(x4058<=x4059))>>x4060);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x4109 = UINT8_MAX;
	int8_t x4110 = INT8_MIN;
	uint16_t x4111 = 2U;
	int32_t t81 = 1;

	t81 = ((x4109|(x4110<=x4111))>>x4112);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x4137 = 637;
	volatile uint32_t x4138 = UINT32_MAX;
	int8_t x4140 = 5;
	int32_t t82 = -189781;

	t82 = ((x4137|(x4138<=x4139))>>x4140);

	if (t82 != 19) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x4181 = 86U;
	volatile int64_t x4182 = 1LL;
	uint8_t x4183 = 6U;
	uint8_t x4184 = 1U;
	volatile int32_t t83 = 1;

	t83 = ((x4181|(x4182<=x4183))>>x4184);

	if (t83 != 43) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x4277 = 799272261356980006LLU;
	int32_t x4278 = INT32_MIN;
	volatile int16_t x4279 = INT16_MIN;
	volatile uint8_t x4280 = 51U;
	uint64_t t84 = 1LLU;

	t84 = ((x4277|(x4278<=x4279))>>x4280);

	if (t84 != 354LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x4293 = 318U;
	static int32_t x4294 = INT32_MAX;
	static int32_t t85 = -28524905;

	t85 = ((x4293|(x4294<=x4295))>>x4296);

	if (t85 != 19) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x4317 = 306U;
	int64_t x4318 = INT64_MAX;
	int16_t x4319 = INT16_MAX;
	int8_t x4320 = 1;

	t86 = ((x4317|(x4318<=x4319))>>x4320);

	if (t86 != 153) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x4369 = 2943434785935152884LLU;
	uint32_t x4370 = 0U;
	int32_t x4371 = 7860918;
	static uint8_t x4372 = 42U;
	static volatile uint64_t t87 = 402152LLU;

	t87 = ((x4369|(x4370<=x4371))>>x4372);

	if (t87 != 669259LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x4409 = 34U;
	int64_t x4410 = INT64_MIN;
	static int32_t x4411 = INT32_MIN;
	static uint16_t x4412 = 0U;
	int32_t t88 = -526637761;

	t88 = ((x4409|(x4410<=x4411))>>x4412);

	if (t88 != 35) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x4477 = 235LLU;
	static int16_t x4478 = -1;
	uint64_t t89 = 652190136820744772LLU;

	t89 = ((x4477|(x4478<=x4479))>>x4480);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x4533 = UINT64_MAX;
	int16_t x4534 = INT16_MIN;
	int8_t x4536 = 9;
	volatile uint64_t t90 = 75340LLU;

	t90 = ((x4533|(x4534<=x4535))>>x4536);

	if (t90 != 36028797018963967LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x4545 = 130441661251LL;
	int8_t x4546 = INT8_MAX;
	int64_t x4547 = INT64_MIN;
	int32_t x4548 = 14;
	int64_t t91 = 126491771411LL;

	t91 = ((x4545|(x4546<=x4547))>>x4548);

	if (t91 != 7961527LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x4597 = 3854332618556137LLU;
	int32_t x4598 = -1;
	uint16_t x4600 = 47U;
	static uint64_t t92 = 128197808462658LLU;

	t92 = ((x4597|(x4598<=x4599))>>x4600);

	if (t92 != 27LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x4725 = 9273811;
	int8_t x4726 = 1;
	uint16_t x4728 = 2U;
	int32_t t93 = -6864;

	t93 = ((x4725|(x4726<=x4727))>>x4728);

	if (t93 != 2318452) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x4753 = UINT8_MAX;
	uint32_t x4754 = UINT32_MAX;
	int16_t x4756 = 1;
	int32_t t94 = -405607;

	t94 = ((x4753|(x4754<=x4755))>>x4756);

	if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x4925 = INT16_MAX;
	int16_t x4927 = -1;
	volatile uint8_t x4928 = 2U;
	int32_t t95 = 18789;

	t95 = ((x4925|(x4926<=x4927))>>x4928);

	if (t95 != 8191) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x4977 = 7U;
	uint32_t x4978 = 9708003U;
	uint16_t x4980 = 12U;
	int32_t t96 = 5040485;

	t96 = ((x4977|(x4978<=x4979))>>x4980);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x5025 = 14U;
	int16_t x5026 = INT16_MIN;
	static int64_t x5027 = INT64_MAX;
	uint8_t x5028 = 14U;
	int32_t t97 = 353445;

	t97 = ((x5025|(x5026<=x5027))>>x5028);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x5037 = INT64_MAX;
	int16_t x5038 = INT16_MIN;
	int8_t x5039 = INT8_MIN;
	volatile uint8_t x5040 = 3U;
	static int64_t t98 = -209472601194471LL;

	t98 = ((x5037|(x5038<=x5039))>>x5040);

	if (t98 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x5042 = INT32_MAX;
	int64_t x5043 = INT64_MIN;
	uint8_t x5044 = 1U;
	int64_t t99 = 76436402LL;

	t99 = ((x5041|(x5042<=x5043))>>x5044);

	if (t99 != 201933763LL) { NG(); } else { ; }
	
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

