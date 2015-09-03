#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x94 = INT16_MAX;
volatile int32_t x96 = INT32_MAX;
uint32_t x558 = 20U;
static int32_t x581 = INT32_MIN;
int8_t x582 = INT8_MAX;
static uint32_t t4 = 17983991U;
uint8_t x731 = 0U;
int16_t x1160 = INT16_MIN;
uint64_t x1353 = 125190199LLU;
static volatile uint64_t x1354 = 3500LLU;
volatile int8_t x1355 = 0;
static int16_t x1356 = 73;
uint64_t t8 = 5LLU;
int32_t t9 = -48;
uint8_t x1579 = 1U;
int8_t x1580 = 1;
volatile uint32_t x1704 = 2468032U;
static volatile int32_t x1789 = INT32_MIN;
volatile uint32_t t18 = 1245790U;
int8_t x1801 = INT8_MIN;
uint8_t x1811 = 7U;
int16_t x1812 = -1;
volatile uint16_t x1915 = 28U;
volatile int32_t x2128 = -46535434;
uint64_t x2129 = 603128229175305511LLU;
int8_t x2131 = 2;
volatile uint8_t x2139 = 0U;
int64_t x2140 = -1LL;
volatile int32_t x2324 = -1;
static uint32_t x2340 = 330321U;
int8_t x2465 = 31;
static int64_t x2466 = 4307165392724521LL;
volatile uint16_t x2468 = UINT16_MAX;
volatile int64_t x2542 = 2LL;
volatile int64_t x2548 = INT64_MIN;
volatile int8_t x2600 = INT8_MIN;
int32_t t38 = -215791124;
volatile int32_t t39 = -1;
uint16_t x2934 = 12515U;
static volatile int32_t t40 = 730932244;
volatile int64_t t43 = 406695267LL;
int16_t x3304 = -1;
volatile uint32_t t44 = 128941985U;
static int8_t x3305 = 1;
volatile int8_t x3361 = 0;
volatile int64_t t46 = -6667121250959458LL;
volatile uint64_t x3432 = 445680LLU;
static int32_t x3462 = 99522713;
uint8_t x3542 = UINT8_MAX;
static int32_t x3586 = 608783;
static volatile uint16_t x3923 = 23U;
volatile uint64_t t54 = 86386823LLU;
static int8_t x3977 = -1;
static uint64_t x3978 = 2427670584LLU;
static int16_t x4104 = INT16_MIN;
int32_t t56 = 7;
static int16_t x4161 = -1;
int64_t x4162 = 0LL;
static uint32_t x4163 = 2U;
int16_t x4202 = 12887;
volatile int64_t t58 = -3625877202LL;
int64_t x4241 = INT64_MAX;
uint64_t x4242 = UINT64_MAX;
static uint8_t x4282 = UINT8_MAX;
volatile uint32_t x4398 = 1595336563U;
volatile uint32_t x4399 = 30U;
uint32_t x4464 = 3618U;
int64_t t64 = 449LL;
int16_t x4511 = 1;
volatile int32_t x4512 = INT32_MAX;
static uint16_t x4515 = 0U;
static uint64_t t66 = 96625171LLU;
uint16_t x4556 = UINT16_MAX;
volatile int64_t x4705 = INT64_MIN;
int8_t x4707 = 0;
volatile int64_t t71 = 0LL;
int32_t t72 = -16922;
static uint16_t x4826 = UINT16_MAX;
volatile int32_t t73 = 114;
int16_t x4916 = -1006;
static int16_t x5033 = 306;
static volatile int32_t t76 = -134314;
int64_t x5064 = INT64_MIN;
uint8_t x5205 = UINT8_MAX;
volatile int32_t t79 = -35;
volatile uint64_t t80 = 11261979854322LLU;
int8_t x5345 = INT8_MAX;
static volatile uint32_t x5390 = 14153U;
uint64_t x5391 = 2LLU;
int64_t x5557 = 14196006LL;
int8_t x5558 = 1;
uint32_t x5560 = 548159U;
static volatile int64_t x5657 = 7677LL;
volatile int32_t x5737 = INT32_MIN;
int8_t x5739 = 1;
int16_t x5740 = INT16_MIN;
int64_t x5765 = INT64_MIN;
uint64_t x5767 = 17LLU;
int8_t x5854 = 2;
volatile uint64_t t89 = 2956076LLU;
int32_t t91 = 60;
uint8_t x5983 = 7U;
static volatile uint64_t t92 = 1534888225645993532LLU;
volatile uint16_t x5995 = 29U;
volatile int32_t x5996 = INT32_MAX;
uint64_t t95 = 3708761722498610234LLU;
static uint32_t x6063 = 5U;
static volatile uint32_t x6109 = 12631739U;
int8_t x6111 = 0;


void f0(void) {
	int64_t x93 = -1LL;
	uint8_t x95 = 0U;
	static volatile int64_t t0 = -885305560871LL;

	t0 = ((x93+(x94<<x95))/x96);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x221 = INT8_MAX;
	volatile int8_t x222 = INT8_MAX;
	uint8_t x223 = 1U;
	uint64_t x224 = 3708607330283299461LLU;
	uint64_t t1 = 71662661LLU;

	t1 = ((x221+(x222<<x223))/x224);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x557 = -712704354287040797LL;
	static uint8_t x559 = 0U;
	int32_t x560 = -3;
	volatile int64_t t2 = -745271344247812680LL;

	t2 = ((x557+(x558<<x559))/x560);

	if (t2 != 237568118095680259LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x561 = INT64_MIN;
	int32_t x562 = 13085;
	volatile int8_t x563 = 1;
	int8_t x564 = INT8_MIN;
	volatile int64_t t3 = -116205193456LL;

	t3 = ((x561+(x562<<x563))/x564);

	if (t3 != 72057594037927731LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x583 = 2U;
	volatile uint32_t x584 = UINT32_MAX;

	t4 = ((x581+(x582<<x583))/x584);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x729 = INT16_MIN;
	uint16_t x730 = 12U;
	volatile int64_t x732 = INT64_MAX;
	int64_t t5 = 59LL;

	t5 = ((x729+(x730<<x731))/x732);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x993 = -1LL;
	uint64_t x994 = 7794211128309995LLU;
	static int64_t x995 = 25LL;
	uint8_t x996 = UINT8_MAX;
	static volatile uint64_t t6 = 131832093794239947LLU;

	t6 = ((x993+(x994<<x995))/x996);

	if (t6 != 42496335453681912LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x1157 = -1;
	uint16_t x1158 = 1177U;
	volatile uint64_t x1159 = 0LLU;
	volatile int32_t t7 = -33524;

	t7 = ((x1157+(x1158<<x1159))/x1160);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {


	t8 = ((x1353+(x1354<<x1355))/x1356);

	if (t8 != 1714982LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x1397 = INT32_MIN;
	int16_t x1398 = INT16_MAX;
	static volatile uint8_t x1399 = 12U;
	int16_t x1400 = -1520;

	t9 = ((x1397+(x1398<<x1399))/x1400);

	if (t9 != 1324519) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x1417 = INT32_MIN;
	static uint16_t x1418 = UINT16_MAX;
	int8_t x1419 = 3;
	uint8_t x1420 = 1U;
	volatile int32_t t10 = -22211019;

	t10 = ((x1417+(x1418<<x1419))/x1420);

	if (t10 != -2146959368) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x1477 = UINT64_MAX;
	uint8_t x1478 = 11U;
	int64_t x1479 = 0LL;
	uint64_t x1480 = 24843LLU;
	volatile uint64_t t11 = 5722113292685LLU;

	t11 = ((x1477+(x1478<<x1479))/x1480);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x1573 = 13;
	int8_t x1574 = 42;
	int8_t x1575 = 0;
	volatile int32_t x1576 = 13491;
	volatile int32_t t12 = 7460;

	t12 = ((x1573+(x1574<<x1575))/x1576);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x1577 = 1LLU;
	int32_t x1578 = 6;
	uint64_t t13 = 1580457180587197082LLU;

	t13 = ((x1577+(x1578<<x1579))/x1580);

	if (t13 != 13LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x1605 = UINT32_MAX;
	volatile uint64_t x1606 = UINT64_MAX;
	static volatile uint32_t x1607 = 6U;
	static int8_t x1608 = -1;
	volatile uint64_t t14 = 306LLU;

	t14 = ((x1605+(x1606<<x1607))/x1608);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x1653 = INT16_MIN;
	uint64_t x1654 = 5594914LLU;
	int8_t x1655 = 1;
	int16_t x1656 = INT16_MIN;
	volatile uint64_t t15 = 72950250849LLU;

	t15 = ((x1653+(x1654<<x1655))/x1656);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x1689 = 6U;
	static int8_t x1690 = INT8_MAX;
	int16_t x1691 = 1;
	static int16_t x1692 = 7818;
	static volatile int32_t t16 = 114359;

	t16 = ((x1689+(x1690<<x1691))/x1692);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x1701 = 600458019;
	uint16_t x1702 = UINT16_MAX;
	int8_t x1703 = 0;
	uint32_t t17 = 7367U;

	t17 = ((x1701+(x1702<<x1703))/x1704);

	if (t17 != 243U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x1790 = 3U;
	uint8_t x1791 = 0U;
	uint16_t x1792 = 1U;

	t18 = ((x1789+(x1790<<x1791))/x1792);

	if (t18 != 2147483651U) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x1793 = 16;
	int8_t x1794 = 62;
	uint16_t x1795 = 4U;
	int32_t x1796 = -4772;
	volatile int32_t t19 = 427316;

	t19 = ((x1793+(x1794<<x1795))/x1796);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x1802 = 1895004214183LLU;
	static uint8_t x1803 = 27U;
	uint64_t x1804 = 116LLU;
	volatile uint64_t t20 = 191LLU;

	t20 = ((x1801+(x1802<<x1803))/x1804);

	if (t20 != 125305924308995388LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x1809 = -1338513192278LL;
	static uint8_t x1810 = UINT8_MAX;
	int64_t t21 = -342780175991635426LL;

	t21 = ((x1809+(x1810<<x1811))/x1812);

	if (t21 != 1338513159638LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x1829 = 3U;
	volatile uint32_t x1830 = 1U;
	uint8_t x1831 = 1U;
	uint64_t x1832 = 308293880467LLU;
	volatile uint64_t t22 = 114LLU;

	t22 = ((x1829+(x1830<<x1831))/x1832);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1913 = 1;
	uint8_t x1914 = 1U;
	int8_t x1916 = -1;
	int32_t t23 = 282;

	t23 = ((x1913+(x1914<<x1915))/x1916);

	if (t23 != -268435457) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1921 = 15540;
	volatile int16_t x1922 = INT16_MAX;
	int8_t x1923 = 1;
	static int64_t x1924 = 52229470LL;
	static volatile int64_t t24 = -13855589LL;

	t24 = ((x1921+(x1922<<x1923))/x1924);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x1949 = 13U;
	uint64_t x1950 = 9808780383367LLU;
	uint16_t x1951 = 13U;
	uint8_t x1952 = UINT8_MAX;
	uint64_t t25 = 1842945161193388LLU;

	t25 = ((x1949+(x1950<<x1951))/x1952);

	if (t25 != 315111878041343LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x2125 = UINT16_MAX;
	uint8_t x2126 = 0U;
	volatile uint16_t x2127 = 29U;
	volatile int32_t t26 = 52115;

	t26 = ((x2125+(x2126<<x2127))/x2128);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x2130 = UINT32_MAX;
	int32_t x2132 = -130035529;
	volatile uint64_t t27 = 22556084264969249LLU;

	t27 = ((x2129+(x2130<<x2131))/x2132);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x2137 = 12U;
	uint64_t x2138 = 13610493LLU;
	uint64_t t28 = 472446575374564LLU;

	t28 = ((x2137+(x2138<<x2139))/x2140);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x2193 = INT8_MAX;
	static volatile uint64_t x2194 = 9LLU;
	uint8_t x2195 = 3U;
	uint16_t x2196 = 38U;
	volatile uint64_t t29 = 14LLU;

	t29 = ((x2193+(x2194<<x2195))/x2196);

	if (t29 != 5LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x2273 = INT32_MIN;
	uint32_t x2274 = 170U;
	volatile uint8_t x2275 = 1U;
	uint32_t x2276 = 2018542206U;
	uint32_t t30 = 2U;

	t30 = ((x2273+(x2274<<x2275))/x2276);

	if (t30 != 1U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x2321 = INT32_MAX;
	static uint16_t x2322 = 0U;
	uint64_t x2323 = 3LLU;
	int32_t t31 = 1;

	t31 = ((x2321+(x2322<<x2323))/x2324);

	if (t31 != -2147483647) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x2337 = 1U;
	uint8_t x2338 = 41U;
	uint8_t x2339 = 8U;
	volatile uint32_t t32 = 984U;

	t32 = ((x2337+(x2338<<x2339))/x2340);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x2341 = INT8_MIN;
	uint16_t x2342 = UINT16_MAX;
	static volatile uint8_t x2343 = 1U;
	uint8_t x2344 = 22U;
	static volatile int32_t t33 = 4954;

	t33 = ((x2341+(x2342<<x2343))/x2344);

	if (t33 != 5951) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x2365 = 194972100LLU;
	static volatile uint64_t x2366 = UINT64_MAX;
	uint8_t x2367 = 2U;
	static uint8_t x2368 = 52U;
	volatile uint64_t t34 = 3775LLU;

	t34 = ((x2365+(x2366<<x2367))/x2368);

	if (t34 != 3749463LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x2467 = 0;
	volatile int64_t t35 = 333978977534558340LL;

	t35 = ((x2465+(x2466<<x2467))/x2468);

	if (t35 != 65723131040LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x2541 = INT16_MAX;
	volatile uint8_t x2543 = 2U;
	static volatile int8_t x2544 = INT8_MIN;
	volatile int64_t t36 = 164LL;

	t36 = ((x2541+(x2542<<x2543))/x2544);

	if (t36 != -256LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x2545 = INT16_MIN;
	uint32_t x2546 = UINT32_MAX;
	uint32_t x2547 = 5U;
	int64_t t37 = -1074035532692674LL;

	t37 = ((x2545+(x2546<<x2547))/x2548);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2597 = INT16_MIN;
	volatile uint16_t x2598 = 24210U;
	static uint16_t x2599 = 15U;

	t38 = ((x2597+(x2598<<x2599))/x2600);

	if (t38 != -6197504) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x2829 = 7U;
	volatile int32_t x2830 = 23906809;
	uint64_t x2831 = 0LLU;
	static int8_t x2832 = INT8_MIN;

	t39 = ((x2829+(x2830<<x2831))/x2832);

	if (t39 != -186772) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int8_t x2933 = INT8_MAX;
	uint32_t x2935 = 8U;
	static volatile uint8_t x2936 = 14U;

	t40 = ((x2933+(x2934<<x2935))/x2936);

	if (t40 != 228854) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x2981 = 1;
	volatile uint8_t x2982 = 12U;
	uint32_t x2983 = 0U;
	int64_t x2984 = INT64_MIN;
	static volatile int64_t t41 = 96295LL;

	t41 = ((x2981+(x2982<<x2983))/x2984);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x2997 = INT8_MAX;
	volatile uint64_t x2998 = 10393582297530442LLU;
	int8_t x2999 = 1;
	int32_t x3000 = -1;
	static volatile uint64_t t42 = 663843331803LLU;

	t42 = ((x2997+(x2998<<x2999))/x3000);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x3265 = INT16_MAX;
	int64_t x3266 = 196303525LL;
	static uint32_t x3267 = 0U;
	static int16_t x3268 = -15544;

	t43 = ((x3265+(x3266<<x3267))/x3268);

	if (t43 != -12631LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x3301 = INT16_MAX;
	static uint32_t x3302 = 794982540U;
	int32_t x3303 = 1;

	t44 = ((x3301+(x3302<<x3303))/x3304);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint32_t x3306 = 92903381U;
	volatile int8_t x3307 = 1;
	volatile int16_t x3308 = INT16_MAX;
	uint32_t t45 = 18U;

	t45 = ((x3305+(x3306<<x3307))/x3308);

	if (t45 != 5670U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x3362 = UINT8_MAX;
	int8_t x3363 = 3;
	int64_t x3364 = -1LL;

	t46 = ((x3361+(x3362<<x3363))/x3364);

	if (t46 != -2040LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x3429 = 0U;
	static volatile int8_t x3430 = INT8_MAX;
	volatile uint32_t x3431 = 0U;
	uint64_t t47 = 1560773563291LLU;

	t47 = ((x3429+(x3430<<x3431))/x3432);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x3461 = INT8_MIN;
	uint32_t x3463 = 3U;
	static uint64_t x3464 = 29LLU;
	volatile uint64_t t48 = 1332LLU;

	t48 = ((x3461+(x3462<<x3463))/x3464);

	if (t48 != 27454537LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x3541 = 2U;
	uint8_t x3543 = 5U;
	int64_t x3544 = 291762008LL;
	volatile int64_t t49 = -84576938LL;

	t49 = ((x3541+(x3542<<x3543))/x3544);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x3585 = -849422873564797LL;
	uint8_t x3587 = 2U;
	int8_t x3588 = -28;
	volatile int64_t t50 = -9408023436LL;

	t50 = ((x3585+(x3586<<x3587))/x3588);

	if (t50 != 30336531111773LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x3625 = -1;
	static int8_t x3626 = 6;
	static uint8_t x3627 = 1U;
	uint64_t x3628 = 36941256735267LLU;
	uint64_t t51 = 1664189183LLU;

	t51 = ((x3625+(x3626<<x3627))/x3628);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x3749 = -1;
	volatile uint32_t x3750 = 73670U;
	int8_t x3751 = 0;
	int16_t x3752 = -1;
	volatile uint32_t t52 = 2U;

	t52 = ((x3749+(x3750<<x3751))/x3752);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x3785 = -1;
	int64_t x3786 = 3LL;
	volatile int64_t x3787 = 0LL;
	static int32_t x3788 = INT32_MIN;
	volatile int64_t t53 = 13717451LL;

	t53 = ((x3785+(x3786<<x3787))/x3788);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x3921 = 818LLU;
	static int64_t x3922 = 212930685862LL;
	static int32_t x3924 = INT32_MAX;

	t54 = ((x3921+(x3922<<x3923))/x3924);

	if (t54 != 831760492LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x3979 = 0;
	static int8_t x3980 = INT8_MIN;
	static volatile uint64_t t55 = 782637058122294578LLU;

	t55 = ((x3977+(x3978<<x3979))/x3980);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x4101 = UINT8_MAX;
	uint16_t x4102 = 743U;
	uint16_t x4103 = 3U;

	t56 = ((x4101+(x4102<<x4103))/x4104);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x4164 = 509U;
	volatile int64_t t57 = -8157148079808078LL;

	t57 = ((x4161+(x4162<<x4163))/x4164);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x4201 = INT64_MIN;
	int8_t x4203 = 1;
	int32_t x4204 = -360;

	t58 = ((x4201+(x4202<<x4203))/x4204);

	if (t58 != 25620477880152083LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int32_t x4221 = -18;
	int64_t x4222 = 3146217285057LL;
	volatile uint32_t x4223 = 1U;
	uint32_t x4224 = UINT32_MAX;
	volatile int64_t t59 = -925883LL;

	t59 = ((x4221+(x4222<<x4223))/x4224);

	if (t59 != 1465LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x4243 = 3U;
	int8_t x4244 = 4;
	static uint64_t t60 = 69498489010339186LLU;

	t60 = ((x4241+(x4242<<x4243))/x4244);

	if (t60 != 2305843009213693949LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x4281 = INT32_MIN;
	int8_t x4283 = 2;
	int8_t x4284 = INT8_MIN;
	int32_t t61 = 5381;

	t61 = ((x4281+(x4282<<x4283))/x4284);

	if (t61 != 16777208) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x4397 = INT16_MIN;
	int32_t x4400 = 1;
	uint32_t t62 = 87U;

	t62 = ((x4397+(x4398<<x4399))/x4400);

	if (t62 != 3221192704U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x4461 = 121U;
	static int8_t x4462 = INT8_MAX;
	uint16_t x4463 = 21U;
	static uint32_t t63 = 38064U;

	t63 = ((x4461+(x4462<<x4463))/x4464);

	if (t63 != 73614U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x4481 = INT64_MIN;
	volatile uint8_t x4482 = 117U;
	static volatile int8_t x4483 = 18;
	static int64_t x4484 = -354820104842534761LL;

	t64 = ((x4481+(x4482<<x4483))/x4484);

	if (t64 != 25LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int16_t x4509 = INT16_MIN;
	int64_t x4510 = 2028107549LL;
	static volatile int64_t t65 = 1450262924622548LL;

	t65 = ((x4509+(x4510<<x4511))/x4512);

	if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x4513 = 3980U;
	uint64_t x4514 = 12853092564897496LLU;
	uint32_t x4516 = 1285120U;

	t66 = ((x4513+(x4514<<x4515))/x4516);

	if (t66 != 10001472675LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x4553 = INT16_MIN;
	volatile uint16_t x4554 = 2045U;
	int8_t x4555 = 7;
	volatile int32_t t67 = 0;

	t67 = ((x4553+(x4554<<x4555))/x4556);

	if (t67 != 3) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x4633 = 185652259U;
	uint64_t x4634 = 6017355252613LLU;
	int16_t x4635 = 0;
	int32_t x4636 = -1;
	uint64_t t68 = 6448610118LLU;

	t68 = ((x4633+(x4634<<x4635))/x4636);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x4665 = 15;
	int32_t x4666 = 7693296;
	uint16_t x4667 = 1U;
	int8_t x4668 = INT8_MIN;
	static volatile int32_t t69 = -11;

	t69 = ((x4665+(x4666<<x4667))/x4668);

	if (t69 != -120207) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x4701 = 7;
	int8_t x4702 = INT8_MAX;
	int8_t x4703 = 7;
	int64_t x4704 = INT64_MAX;
	volatile int64_t t70 = -53528159LL;

	t70 = ((x4701+(x4702<<x4703))/x4704);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x4706 = 7294673;
	volatile int16_t x4708 = -5;

	t71 = ((x4705+(x4706<<x4707))/x4708);

	if (t71 != 1844674407369496227LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x4821 = 1U;
	uint16_t x4822 = 86U;
	static uint16_t x4823 = 0U;
	int32_t x4824 = INT32_MIN;

	t72 = ((x4821+(x4822<<x4823))/x4824);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x4825 = INT8_MIN;
	uint8_t x4827 = 1U;
	volatile int8_t x4828 = INT8_MIN;

	t73 = ((x4825+(x4826<<x4827))/x4828);

	if (t73 != -1022) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x4913 = 3318143203621687LLU;
	volatile int32_t x4914 = 29603075;
	static volatile int16_t x4915 = 0;
	uint64_t t74 = 8216830917LLU;

	t74 = ((x4913+(x4914<<x4915))/x4916);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x4969 = 26369U;
	uint64_t x4970 = UINT64_MAX;
	uint8_t x4971 = 1U;
	int8_t x4972 = INT8_MAX;
	uint64_t t75 = 420398144993340LLU;

	t75 = ((x4969+(x4970<<x4971))/x4972);

	if (t75 != 207LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x5034 = 2516947;
	uint8_t x5035 = 0U;
	int8_t x5036 = INT8_MAX;

	t76 = ((x5033+(x5034<<x5035))/x5036);

	if (t76 != 19820) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x5061 = 3305;
	uint32_t x5062 = 615U;
	int8_t x5063 = 2;
	volatile int64_t t77 = -1061135353765377LL;

	t77 = ((x5061+(x5062<<x5063))/x5064);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x5077 = 3549901521308500LL;
	uint16_t x5078 = 6U;
	static uint8_t x5079 = 4U;
	int64_t x5080 = INT64_MIN;
	int64_t t78 = -26071014LL;

	t78 = ((x5077+(x5078<<x5079))/x5080);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x5206 = 15;
	static uint8_t x5207 = 5U;
	volatile int32_t x5208 = INT32_MIN;

	t79 = ((x5205+(x5206<<x5207))/x5208);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x5237 = INT16_MIN;
	uint16_t x5238 = 3U;
	uint8_t x5239 = 21U;
	uint64_t x5240 = 78394LLU;

	t80 = ((x5237+(x5238<<x5239))/x5240);

	if (t80 != 79LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x5346 = 255;
	uint8_t x5347 = 7U;
	volatile int32_t x5348 = -46558835;
	int32_t t81 = 3047;

	t81 = ((x5345+(x5346<<x5347))/x5348);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x5389 = INT16_MIN;
	static volatile int32_t x5392 = INT32_MAX;
	volatile uint32_t t82 = 876U;

	t82 = ((x5389+(x5390<<x5391))/x5392);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x5449 = UINT8_MAX;
	volatile uint32_t x5450 = 1U;
	static uint16_t x5451 = 0U;
	volatile int32_t x5452 = -1;
	uint32_t t83 = 3U;

	t83 = ((x5449+(x5450<<x5451))/x5452);

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x5457 = INT16_MIN;
	int16_t x5458 = 17;
	uint8_t x5459 = 1U;
	int16_t x5460 = INT16_MIN;
	volatile int32_t t84 = -31566;

	t84 = ((x5457+(x5458<<x5459))/x5460);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x5559 = 24U;
	volatile int64_t t85 = 145930328700009925LL;

	t85 = ((x5557+(x5558<<x5559))/x5560);

	if (t85 != 56LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x5658 = 30U;
	uint16_t x5659 = 8U;
	volatile int32_t x5660 = INT32_MIN;
	int64_t t86 = -441275181128LL;

	t86 = ((x5657+(x5658<<x5659))/x5660);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x5738 = 3U;
	volatile int32_t t87 = 975355;

	t87 = ((x5737+(x5738<<x5739))/x5740);

	if (t87 != 65535) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x5766 = 2382802U;
	int16_t x5768 = INT16_MAX;
	int64_t t88 = -88381786257224477LL;

	t88 = ((x5765+(x5766<<x5767))/x5768);

	if (t88 != -281483566813373LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x5853 = -104;
	static int32_t x5855 = 0;
	uint64_t x5856 = 965LLU;

	t89 = ((x5853+(x5854<<x5855))/x5856);

	if (t89 != 19115796967574664LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x5857 = INT8_MIN;
	uint32_t x5858 = 23557U;
	uint16_t x5859 = 1U;
	volatile int64_t x5860 = INT64_MIN;
	int64_t t90 = -45864LL;

	t90 = ((x5857+(x5858<<x5859))/x5860);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x5937 = 64780740;
	int32_t x5938 = 10571322;
	uint8_t x5939 = 1U;
	int16_t x5940 = -1;

	t91 = ((x5937+(x5938<<x5939))/x5940);

	if (t91 != -85923384) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x5981 = UINT16_MAX;
	uint64_t x5982 = 129240689021519862LLU;
	int8_t x5984 = -1;

	t92 = ((x5981+(x5982<<x5983))/x5984);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x5989 = INT64_MIN;
	int16_t x5990 = INT16_MAX;
	volatile uint16_t x5991 = 2U;
	int64_t x5992 = 430921151307439879LL;
	int64_t t93 = 13514035LL;

	t93 = ((x5989+(x5990<<x5991))/x5992);

	if (t93 != -21LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x5993 = 4U;
	static uint8_t x5994 = 1U;
	volatile int32_t t94 = -1009204914;

	t94 = ((x5993+(x5994<<x5995))/x5996);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x6013 = -11;
	static uint16_t x6014 = 13210U;
	uint8_t x6015 = 1U;
	uint64_t x6016 = 2286346954LLU;

	t95 = ((x6013+(x6014<<x6015))/x6016);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x6021 = 13389LL;
	int64_t x6022 = 668617548714107LL;
	uint16_t x6023 = 13U;
	int64_t x6024 = INT64_MAX;
	static int64_t t96 = -66854978LL;

	t96 = ((x6021+(x6022<<x6023))/x6024);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x6061 = INT32_MIN;
	int8_t x6062 = 0;
	uint64_t x6064 = 8568LLU;
	volatile uint64_t t97 = 1053202779LLU;

	t97 = ((x6061+(x6062<<x6063))/x6064);

	if (t97 != 2152981334215927LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x6101 = UINT64_MAX;
	uint32_t x6102 = 13179069U;
	uint8_t x6103 = 6U;
	uint8_t x6104 = UINT8_MAX;
	volatile uint64_t t98 = 88942965546LLU;

	t98 = ((x6101+(x6102<<x6103))/x6104);

	if (t98 != 3307687LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x6110 = 710276556503LLU;
	int32_t x6112 = INT32_MIN;
	uint64_t t99 = 1LLU;

	t99 = ((x6109+(x6110<<x6111))/x6112);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

