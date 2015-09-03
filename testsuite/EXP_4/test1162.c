#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x98 = 34032153LLU;
volatile uint64_t t0 = 1892442LLU;
int8_t x165 = -1;
static int16_t x194 = -5;
int64_t t3 = 99331143342791LL;
static uint64_t x316 = 3LLU;
uint16_t x339 = UINT16_MAX;
uint16_t x340 = 3U;
volatile uint8_t x416 = 7U;
uint8_t x528 = 1U;
int32_t x585 = 276459148;
static int16_t x588 = 0;
static uint32_t x654 = UINT32_MAX;
uint64_t x830 = UINT64_MAX;
int64_t x873 = INT64_MAX;
volatile int64_t t17 = -158069158844708LL;
int16_t x1113 = INT16_MIN;
uint64_t x1242 = 6385355811337072611LLU;
uint64_t x1243 = UINT64_MAX;
int64_t x1280 = 1LL;
volatile uint64_t t21 = 2759740LLU;
int16_t x1312 = 0;
uint64_t x1319 = 977LLU;
int16_t x1374 = -29;
uint32_t x1433 = UINT32_MAX;
uint64_t x1435 = 90983698017LLU;
uint8_t x1455 = UINT8_MAX;
uint8_t x1493 = UINT8_MAX;
uint16_t x1524 = 1U;
uint32_t x1654 = 39U;
static volatile uint64_t t34 = 11LLU;
int64_t t35 = 261257LL;
int8_t x1831 = INT8_MAX;
volatile int64_t t36 = -99LL;
int64_t x1850 = INT64_MIN;
volatile int64_t x1851 = INT64_MAX;
static volatile uint64_t x1997 = UINT64_MAX;
static volatile uint64_t t39 = 197775517266888716LLU;
int8_t x2013 = INT8_MIN;
uint8_t x2016 = 1U;
volatile uint64_t t40 = 2334163516251006569LLU;
int32_t x2074 = -1;
int16_t x2194 = 1374;
volatile int64_t t43 = -7LL;
volatile int32_t t45 = -924612;
volatile uint32_t x2327 = 115819182U;
static volatile int8_t x2509 = INT8_MIN;
int16_t x2552 = 1;
static volatile int32_t t50 = -27083393;
uint32_t x2816 = 3U;
static int32_t x2873 = INT32_MIN;
volatile int32_t x2962 = INT32_MAX;
int64_t x2994 = INT64_MAX;
volatile uint8_t x3022 = UINT8_MAX;
uint64_t t59 = 153595563424808366LLU;
static volatile uint8_t x3055 = 32U;
int8_t x3196 = 2;
int64_t x3357 = INT64_MAX;
static uint64_t x3359 = UINT64_MAX;
uint64_t x3487 = 18229230979LLU;
static uint64_t x3523 = 3310LLU;
int8_t x3600 = 9;
int64_t t72 = -2215844657LL;
static uint16_t x3629 = 402U;
int64_t x3631 = 5969LL;
uint16_t x3707 = 408U;
static volatile uint8_t x3798 = 33U;
int8_t x3861 = 0;
uint64_t x3862 = 10738453965411421LLU;
static uint16_t x3974 = 1U;
static int8_t x4032 = 1;
uint16_t x4081 = 3122U;
static int32_t x4082 = -21;
volatile uint16_t x4084 = 4U;
static int32_t x4253 = INT32_MIN;
static int32_t x4255 = INT32_MAX;
uint64_t t87 = 1967275506450176950LLU;
int32_t t90 = -16291414;
int64_t x4557 = -769620652835552LL;
volatile int64_t t92 = 20697LL;
int32_t x4593 = -1;
int8_t x4595 = 43;
uint64_t x4603 = 22LLU;
int32_t x4733 = -1;
uint32_t x4735 = 128779335U;
volatile int32_t t97 = -1;
volatile uint8_t x4974 = 9U;


void f0(void) {
	int32_t x97 = INT32_MAX;
	int16_t x99 = INT16_MAX;
	static int64_t x100 = 6LL;

	t0 = (x97%(x98|(x99>>x100)));

	if (t0 != 3427390LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x141 = 10U;
	int16_t x142 = INT16_MIN;
	uint64_t x143 = UINT64_MAX;
	uint8_t x144 = 28U;
	uint64_t t1 = 731179527039LLU;

	t1 = (x141%(x142|(x143>>x144)));

	if (t1 != 10LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x166 = INT8_MIN;
	uint16_t x167 = UINT16_MAX;
	static int8_t x168 = 7;
	static int32_t t2 = 318454;

	t2 = (x165%(x166|(x167>>x168)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x193 = 279U;
	int64_t x195 = INT64_MAX;
	static volatile uint8_t x196 = 7U;

	t3 = (x193%(x194|(x195>>x196)));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x313 = INT8_MIN;
	volatile uint8_t x314 = 1U;
	uint16_t x315 = 1208U;
	volatile int32_t t4 = -24;

	t4 = (x313%(x314|(x315>>x316)));

	if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x337 = INT16_MIN;
	int32_t x338 = INT32_MAX;
	volatile int32_t t5 = -34679;

	t5 = (x337%(x338|(x339>>x340)));

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x353 = INT16_MAX;
	uint64_t x354 = 129277185221484895LLU;
	int64_t x355 = INT64_MAX;
	uint8_t x356 = 45U;
	uint64_t t6 = 800727118LLU;

	t6 = (x353%(x354|(x355>>x356)));

	if (t6 != 32767LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x413 = INT8_MIN;
	static uint64_t x414 = 319LLU;
	uint8_t x415 = 3U;
	static uint64_t t7 = 0LLU;

	t7 = (x413%(x414|(x415>>x416)));

	if (t7 != 273LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x449 = 1;
	uint8_t x450 = UINT8_MAX;
	int8_t x451 = 20;
	uint32_t x452 = 1U;
	static int32_t t8 = -18216;

	t8 = (x449%(x450|(x451>>x452)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x525 = INT64_MAX;
	int32_t x526 = INT32_MAX;
	uint32_t x527 = 262125U;
	static int64_t t9 = -19LL;

	t9 = (x525%(x526|(x527>>x528)));

	if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint8_t x586 = UINT8_MAX;
	volatile uint8_t x587 = 99U;
	static volatile int32_t t10 = -145806157;

	t10 = (x585%(x586|(x587>>x588)));

	if (t10 != 133) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x613 = 1823U;
	uint8_t x614 = UINT8_MAX;
	uint8_t x615 = 4U;
	int32_t x616 = 1;
	static volatile uint32_t t11 = 381U;

	t11 = (x613%(x614|(x615>>x616)));

	if (t11 != 38U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x653 = -1LL;
	uint64_t x655 = 1949314001378265LLU;
	uint16_t x656 = 49U;
	volatile uint64_t t12 = 450668924854LLU;

	t12 = (x653%(x654|(x655>>x656)));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x713 = UINT32_MAX;
	volatile int16_t x714 = -1091;
	uint8_t x715 = 40U;
	int8_t x716 = 2;
	volatile uint32_t t13 = 2U;

	t13 = (x713%(x714|(x715>>x716)));

	if (t13 != 1088U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x769 = INT8_MIN;
	uint16_t x770 = UINT16_MAX;
	uint8_t x771 = UINT8_MAX;
	int8_t x772 = 0;
	int32_t t14 = 22;

	t14 = (x769%(x770|(x771>>x772)));

	if (t14 != -128) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x829 = UINT64_MAX;
	static int16_t x831 = INT16_MAX;
	volatile uint8_t x832 = 1U;
	static volatile uint64_t t15 = 114028262LLU;

	t15 = (x829%(x830|(x831>>x832)));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x874 = -1;
	static uint16_t x875 = UINT16_MAX;
	uint8_t x876 = 1U;
	int64_t t16 = 580829957450866693LL;

	t16 = (x873%(x874|(x875>>x876)));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x1005 = -15292LL;
	int32_t x1006 = INT32_MIN;
	int64_t x1007 = INT64_MAX;
	int8_t x1008 = 1;

	t17 = (x1005%(x1006|(x1007>>x1008)));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1114 = INT16_MIN;
	uint8_t x1115 = UINT8_MAX;
	static int16_t x1116 = 1;
	int32_t t18 = -185545863;

	t18 = (x1113%(x1114|(x1115>>x1116)));

	if (t18 != -127) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1141 = INT8_MIN;
	uint8_t x1142 = UINT8_MAX;
	uint16_t x1143 = 0U;
	volatile uint8_t x1144 = 0U;
	int32_t t19 = 46999879;

	t19 = (x1141%(x1142|(x1143>>x1144)));

	if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x1241 = -1;
	uint32_t x1244 = 5U;
	uint64_t t20 = 453998LLU;

	t20 = (x1241%(x1242|(x1243>>x1244)));

	if (t20 != 4611686018427387905LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x1277 = -22560800889728LL;
	static volatile uint64_t x1278 = UINT64_MAX;
	uint64_t x1279 = 1044638LLU;

	t21 = (x1277%(x1278|(x1279>>x1280)));

	if (t21 != 18446721512908661888LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1289 = 8LLU;
	uint8_t x1290 = 3U;
	int64_t x1291 = INT64_MAX;
	uint8_t x1292 = 6U;
	static volatile uint64_t t22 = 238241972LLU;

	t22 = (x1289%(x1290|(x1291>>x1292)));

	if (t22 != 8LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x1309 = 645308311U;
	int8_t x1310 = INT8_MIN;
	uint16_t x1311 = UINT16_MAX;
	uint32_t t23 = 1737787U;

	t23 = (x1309%(x1310|(x1311>>x1312)));

	if (t23 != 645308311U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x1317 = INT32_MAX;
	int8_t x1318 = -15;
	volatile int32_t x1320 = 1;
	volatile uint64_t t24 = 3LLU;

	t24 = (x1317%(x1318|(x1319>>x1320)));

	if (t24 != 2147483647LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1333 = UINT32_MAX;
	int16_t x1334 = INT16_MIN;
	int64_t x1335 = 32676694LL;
	volatile uint8_t x1336 = 0U;
	volatile int64_t t25 = -264852018LL;

	t25 = (x1333%(x1334|(x1335>>x1336)));

	if (t25 != 10245LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1373 = 1;
	uint16_t x1375 = 5165U;
	uint8_t x1376 = 10U;
	int32_t t26 = -66835022;

	t26 = (x1373%(x1374|(x1375>>x1376)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1425 = UINT16_MAX;
	int8_t x1426 = 29;
	int32_t x1427 = INT32_MAX;
	static uint8_t x1428 = 1U;
	static int32_t t27 = 0;

	t27 = (x1425%(x1426|(x1427>>x1428)));

	if (t27 != 65535) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1434 = INT64_MIN;
	int8_t x1436 = 0;
	volatile uint64_t t28 = 1035120732415LLU;

	t28 = (x1433%(x1434|(x1435>>x1436)));

	if (t28 != 4294967295LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x1453 = 33;
	int32_t x1454 = -1;
	int16_t x1456 = 7;
	int32_t t29 = -10235222;

	t29 = (x1453%(x1454|(x1455>>x1456)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1494 = UINT64_MAX;
	static uint8_t x1495 = 120U;
	uint8_t x1496 = 4U;
	uint64_t t30 = 1LLU;

	t30 = (x1493%(x1494|(x1495>>x1496)));

	if (t30 != 255LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x1521 = 276135766703239LLU;
	volatile int32_t x1522 = INT32_MIN;
	volatile int8_t x1523 = 1;
	static uint64_t t31 = 3349471298213LLU;

	t31 = (x1521%(x1522|(x1523>>x1524)));

	if (t31 != 276135766703239LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1577 = 388655746U;
	int32_t x1578 = 103714;
	uint8_t x1579 = 17U;
	int16_t x1580 = 0;
	volatile uint32_t t32 = 4295U;

	t32 = (x1577%(x1578|(x1579>>x1580)));

	if (t32 != 79420U) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint8_t x1629 = 1U;
	volatile int64_t x1630 = INT64_MIN;
	uint32_t x1631 = 16250U;
	uint8_t x1632 = 13U;
	static volatile int64_t t33 = -4701263LL;

	t33 = (x1629%(x1630|(x1631>>x1632)));

	if (t33 != 1LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x1653 = 507170182012LLU;
	int8_t x1655 = INT8_MAX;
	volatile uint8_t x1656 = 31U;

	t34 = (x1653%(x1654|(x1655>>x1656)));

	if (t34 != 13LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x1677 = UINT32_MAX;
	int64_t x1678 = INT64_MIN;
	uint8_t x1679 = 12U;
	static volatile uint16_t x1680 = 2U;

	t35 = (x1677%(x1678|(x1679>>x1680)));

	if (t35 != 4294967295LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1829 = -1LL;
	int8_t x1830 = INT8_MAX;
	uint16_t x1832 = 5U;

	t36 = (x1829%(x1830|(x1831>>x1832)));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1849 = -1;
	uint8_t x1852 = 0U;
	int64_t t37 = 1094489LL;

	t37 = (x1849%(x1850|(x1851>>x1852)));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x1977 = INT16_MIN;
	int8_t x1978 = 0;
	uint32_t x1979 = UINT32_MAX;
	volatile int16_t x1980 = 0;
	volatile uint32_t t38 = 2528U;

	t38 = (x1977%(x1978|(x1979>>x1980)));

	if (t38 != 4294934528U) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x1998 = UINT64_MAX;
	volatile uint8_t x1999 = 12U;
	volatile uint8_t x2000 = 6U;

	t39 = (x1997%(x1998|(x1999>>x2000)));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x2014 = 64U;
	uint64_t x2015 = 386255564216623LLU;

	t40 = (x2013%(x2014|(x2015>>x2016)));

	if (t40 != 143965628113363LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x2073 = 6218U;
	uint8_t x2075 = UINT8_MAX;
	uint32_t x2076 = 19U;
	volatile int32_t t41 = 42;

	t41 = (x2073%(x2074|(x2075>>x2076)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x2085 = 1112334U;
	int8_t x2086 = 6;
	uint64_t x2087 = 171806211500LLU;
	int32_t x2088 = 18;
	static volatile uint64_t t42 = 239568036763LLU;

	t42 = (x2085%(x2086|(x2087>>x2088)));

	if (t42 != 456944LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x2193 = INT64_MIN;
	volatile uint16_t x2195 = 7030U;
	volatile uint16_t x2196 = 1U;

	t43 = (x2193%(x2194|(x2195>>x2196)));

	if (t43 != -1238LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x2261 = 7177U;
	static int16_t x2262 = INT16_MAX;
	static uint32_t x2263 = UINT32_MAX;
	uint16_t x2264 = 28U;
	static volatile uint32_t t44 = 413440U;

	t44 = (x2261%(x2262|(x2263>>x2264)));

	if (t44 != 7177U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x2269 = INT16_MIN;
	static int32_t x2270 = -1;
	uint16_t x2271 = 4029U;
	uint8_t x2272 = 6U;

	t45 = (x2269%(x2270|(x2271>>x2272)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x2325 = -7;
	uint64_t x2326 = UINT64_MAX;
	uint16_t x2328 = 20U;
	static uint64_t t46 = 34233679667835044LLU;

	t46 = (x2325%(x2326|(x2327>>x2328)));

	if (t46 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x2421 = 47U;
	int8_t x2422 = INT8_MIN;
	static int64_t x2423 = 1LL;
	uint32_t x2424 = 13U;
	int64_t t47 = 114888291856163LL;

	t47 = (x2421%(x2422|(x2423>>x2424)));

	if (t47 != 47LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x2473 = 192929U;
	int32_t x2474 = INT32_MAX;
	volatile uint16_t x2475 = 14U;
	int8_t x2476 = 0;
	volatile uint32_t t48 = 1U;

	t48 = (x2473%(x2474|(x2475>>x2476)));

	if (t48 != 192929U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x2510 = INT64_MIN;
	volatile int16_t x2511 = 0;
	uint16_t x2512 = 31U;
	static volatile int64_t t49 = 1440449LL;

	t49 = (x2509%(x2510|(x2511>>x2512)));

	if (t49 != -128LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x2549 = UINT16_MAX;
	volatile int8_t x2550 = INT8_MIN;
	uint8_t x2551 = 5U;

	t50 = (x2549%(x2550|(x2551>>x2552)));

	if (t50 != 15) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x2737 = 603007974;
	volatile uint32_t x2738 = 1U;
	int64_t x2739 = 6826816903LL;
	volatile int16_t x2740 = 26;
	volatile int64_t t51 = -5082954728669LL;

	t51 = (x2737%(x2738|(x2739>>x2740)));

	if (t51 != 99LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x2813 = UINT64_MAX;
	int32_t x2814 = INT32_MIN;
	uint8_t x2815 = 7U;
	volatile uint64_t t52 = 243647098329514028LLU;

	t52 = (x2813%(x2814|(x2815>>x2816)));

	if (t52 != 2147483647LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x2874 = INT8_MIN;
	uint64_t x2875 = 910573LLU;
	volatile int32_t x2876 = 9;
	volatile uint64_t t53 = 16250321223309687LLU;

	t53 = (x2873%(x2874|(x2875>>x2876)));

	if (t53 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x2889 = INT8_MAX;
	int8_t x2890 = -1;
	uint32_t x2891 = 9172U;
	int16_t x2892 = 1;
	static volatile uint32_t t54 = 48693U;

	t54 = (x2889%(x2890|(x2891>>x2892)));

	if (t54 != 127U) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x2961 = INT64_MAX;
	static uint16_t x2963 = UINT16_MAX;
	volatile uint8_t x2964 = 0U;
	static volatile int64_t t55 = 751262049835704LL;

	t55 = (x2961%(x2962|(x2963>>x2964)));

	if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x2973 = UINT16_MAX;
	uint8_t x2974 = UINT8_MAX;
	int32_t x2975 = 491;
	uint8_t x2976 = 14U;
	int32_t t56 = -146711768;

	t56 = (x2973%(x2974|(x2975>>x2976)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x2993 = 10484U;
	static int64_t x2995 = 13904993023170LL;
	int8_t x2996 = 1;
	volatile int64_t t57 = -867LL;

	t57 = (x2993%(x2994|(x2995>>x2996)));

	if (t57 != 10484LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x3021 = INT64_MIN;
	static uint64_t x3023 = 26328LLU;
	uint8_t x3024 = 12U;
	static volatile uint64_t t58 = 40982861787117215LLU;

	t58 = (x3021%(x3022|(x3023>>x3024)));

	if (t58 != 128LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x3037 = -1;
	volatile uint64_t x3038 = 6431061748LLU;
	volatile uint64_t x3039 = 58448452174470195LLU;
	static volatile uint16_t x3040 = 18U;

	t59 = (x3037%(x3038|(x3039>>x3040)));

	if (t59 != 184838696750LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x3053 = -2058;
	int16_t x3054 = 834;
	uint16_t x3056 = 8U;
	volatile int32_t t60 = 1322;

	t60 = (x3053%(x3054|(x3055>>x3056)));

	if (t60 != -390) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x3097 = -27;
	int32_t x3098 = -3736819;
	uint32_t x3099 = UINT32_MAX;
	int8_t x3100 = 7;
	static volatile uint32_t t61 = 18647U;

	t61 = (x3097%(x3098|(x3099>>x3100)));

	if (t61 != 4294967269U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x3193 = 395566917296854LL;
	int8_t x3194 = INT8_MIN;
	uint8_t x3195 = 48U;
	volatile int64_t t62 = 2462971006562890LL;

	t62 = (x3193%(x3194|(x3195>>x3196)));

	if (t62 != 50LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x3245 = 359192248U;
	int16_t x3246 = INT16_MIN;
	static int32_t x3247 = 58666852;
	int8_t x3248 = 20;
	uint32_t t63 = 2816U;

	t63 = (x3245%(x3246|(x3247>>x3248)));

	if (t63 != 359192248U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x3273 = -1LL;
	static int64_t x3274 = -1LL;
	uint16_t x3275 = 62U;
	static uint8_t x3276 = 24U;
	volatile int64_t t64 = -1LL;

	t64 = (x3273%(x3274|(x3275>>x3276)));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x3317 = -1LL;
	uint16_t x3318 = 0U;
	static int64_t x3319 = 194153632452911342LL;
	uint32_t x3320 = 24U;
	int64_t t65 = 29755959LL;

	t65 = (x3317%(x3318|(x3319>>x3320)));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x3358 = 41;
	int8_t x3360 = 1;
	static uint64_t t66 = 25908648570070100LLU;

	t66 = (x3357%(x3358|(x3359>>x3360)));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x3421 = -1LL;
	int8_t x3422 = -1;
	int32_t x3423 = INT32_MAX;
	static uint16_t x3424 = 3U;
	static volatile int64_t t67 = 2707583611LL;

	t67 = (x3421%(x3422|(x3423>>x3424)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x3441 = 2U;
	uint16_t x3442 = 255U;
	uint16_t x3443 = UINT16_MAX;
	uint8_t x3444 = 7U;
	static int32_t t68 = 465573;

	t68 = (x3441%(x3442|(x3443>>x3444)));

	if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x3485 = 36U;
	int64_t x3486 = INT64_MAX;
	uint16_t x3488 = 0U;
	volatile uint64_t t69 = 47254LLU;

	t69 = (x3485%(x3486|(x3487>>x3488)));

	if (t69 != 36LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x3493 = -1;
	uint64_t x3494 = 48982031692164932LLU;
	int8_t x3495 = 30;
	static uint8_t x3496 = 0U;
	static volatile uint64_t t70 = 165663932LLU;

	t70 = (x3493%(x3494|(x3495>>x3496)));

	if (t70 != 29500157455527407LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x3521 = -1;
	static int16_t x3522 = -26;
	uint8_t x3524 = 28U;
	volatile uint64_t t71 = 55LLU;

	t71 = (x3521%(x3522|(x3523>>x3524)));

	if (t71 != 25LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x3597 = 37;
	int32_t x3598 = -914105;
	int64_t x3599 = INT64_MAX;

	t72 = (x3597%(x3598|(x3599>>x3600)));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x3617 = -161;
	volatile int16_t x3618 = 1;
	uint8_t x3619 = 1U;
	uint16_t x3620 = 16U;
	int32_t t73 = 10977;

	t73 = (x3617%(x3618|(x3619>>x3620)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x3630 = 28U;
	uint64_t x3632 = 22LLU;
	int64_t t74 = 733007935221LL;

	t74 = (x3629%(x3630|(x3631>>x3632)));

	if (t74 != 10LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x3697 = -2745;
	int64_t x3698 = -1LL;
	int8_t x3699 = 2;
	int8_t x3700 = 9;
	static volatile int64_t t75 = 114252329LL;

	t75 = (x3697%(x3698|(x3699>>x3700)));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x3705 = INT16_MAX;
	volatile int32_t x3706 = INT32_MAX;
	int8_t x3708 = 1;
	int32_t t76 = 259418531;

	t76 = (x3705%(x3706|(x3707>>x3708)));

	if (t76 != 32767) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x3713 = 256275U;
	int16_t x3714 = 21;
	int64_t x3715 = INT64_MAX;
	uint16_t x3716 = 12U;
	volatile int64_t t77 = 2819580226716102LL;

	t77 = (x3713%(x3714|(x3715>>x3716)));

	if (t77 != 256275LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x3753 = -1;
	uint16_t x3754 = 4U;
	static int16_t x3755 = INT16_MAX;
	volatile int8_t x3756 = 19;
	volatile int32_t t78 = -55968;

	t78 = (x3753%(x3754|(x3755>>x3756)));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x3797 = UINT8_MAX;
	uint16_t x3799 = UINT16_MAX;
	uint32_t x3800 = 28U;
	volatile int32_t t79 = -2450095;

	t79 = (x3797%(x3798|(x3799>>x3800)));

	if (t79 != 24) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x3863 = 1U;
	uint8_t x3864 = 3U;
	uint64_t t80 = 588126757343218214LLU;

	t80 = (x3861%(x3862|(x3863>>x3864)));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x3973 = 459255389;
	uint16_t x3975 = 99U;
	volatile uint8_t x3976 = 2U;
	int32_t t81 = -75;

	t81 = (x3973%(x3974|(x3975>>x3976)));

	if (t81 != 14) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x4029 = 953826491723LLU;
	int64_t x4030 = INT64_MIN;
	int64_t x4031 = INT64_MAX;
	volatile uint64_t t82 = 1689619937569LLU;

	t82 = (x4029%(x4030|(x4031>>x4032)));

	if (t82 != 953826491723LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x4083 = UINT64_MAX;
	uint64_t t83 = 505339LLU;

	t83 = (x4081%(x4082|(x4083>>x4084)));

	if (t83 != 3122LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x4137 = INT32_MIN;
	static volatile int8_t x4138 = INT8_MAX;
	uint16_t x4139 = 287U;
	static uint16_t x4140 = 20U;
	int32_t t84 = -44990044;

	t84 = (x4137%(x4138|(x4139>>x4140)));

	if (t84 != -8) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x4229 = UINT16_MAX;
	uint64_t x4230 = 476146079685LLU;
	volatile uint64_t x4231 = 29353LLU;
	uint32_t x4232 = 1U;
	uint64_t t85 = 12LLU;

	t85 = (x4229%(x4230|(x4231>>x4232)));

	if (t85 != 65535LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x4254 = UINT32_MAX;
	uint32_t x4256 = 1U;
	uint32_t t86 = 48560831U;

	t86 = (x4253%(x4254|(x4255>>x4256)));

	if (t86 != 2147483648U) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x4337 = 21U;
	static volatile uint64_t x4338 = 6020719848LLU;
	uint8_t x4339 = 66U;
	uint16_t x4340 = 0U;

	t87 = (x4337%(x4338|(x4339>>x4340)));

	if (t87 != 21LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x4433 = 5555673040721931LL;
	int64_t x4434 = -989435823362LL;
	static volatile int32_t x4435 = INT32_MAX;
	uint16_t x4436 = 3U;
	int64_t t88 = 1948LL;

	t88 = (x4433%(x4434|(x4435>>x4436)));

	if (t88 != 412016214555LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x4441 = 368095;
	volatile int64_t x4442 = 32594376241162604LL;
	int16_t x4443 = INT16_MAX;
	static uint16_t x4444 = 8U;
	volatile int64_t t89 = -1LL;

	t89 = (x4441%(x4442|(x4443>>x4444)));

	if (t89 != 368095LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x4525 = INT16_MIN;
	int16_t x4526 = INT16_MIN;
	int32_t x4527 = INT32_MAX;
	int16_t x4528 = 1;

	t90 = (x4525%(x4526|(x4527>>x4528)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x4529 = -1;
	int64_t x4530 = INT64_MAX;
	uint8_t x4531 = 1U;
	int8_t x4532 = 16;
	static int64_t t91 = -1803318812547847LL;

	t91 = (x4529%(x4530|(x4531>>x4532)));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x4558 = 4867110U;
	uint16_t x4559 = UINT16_MAX;
	static uint8_t x4560 = 6U;

	t92 = (x4557%(x4558|(x4559>>x4560)));

	if (t92 != -1386702LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x4594 = -1;
	static uint8_t x4596 = 0U;
	int32_t t93 = 45948;

	t93 = (x4593%(x4594|(x4595>>x4596)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x4601 = INT64_MIN;
	int16_t x4602 = INT16_MAX;
	static int16_t x4604 = 1;
	static uint64_t t94 = 1LLU;

	t94 = (x4601%(x4602|(x4603>>x4604)));

	if (t94 != 8LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x4665 = 3U;
	int16_t x4666 = INT16_MIN;
	uint16_t x4667 = 2083U;
	static int8_t x4668 = 0;
	volatile int32_t t95 = 8;

	t95 = (x4665%(x4666|(x4667>>x4668)));

	if (t95 != 3) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x4734 = -1;
	uint16_t x4736 = 11U;
	volatile uint32_t t96 = 36874U;

	t96 = (x4733%(x4734|(x4735>>x4736)));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x4801 = INT32_MIN;
	int16_t x4802 = INT16_MAX;
	volatile uint8_t x4803 = 21U;
	uint8_t x4804 = 3U;

	t97 = (x4801%(x4802|(x4803>>x4804)));

	if (t97 != -2) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x4861 = -6169LL;
	int8_t x4862 = 7;
	int32_t x4863 = INT32_MAX;
	static int32_t x4864 = 0;
	volatile int64_t t98 = -31999609525631598LL;

	t98 = (x4861%(x4862|(x4863>>x4864)));

	if (t98 != -6169LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x4973 = 1991;
	uint8_t x4975 = 45U;
	int8_t x4976 = 3;
	int32_t t99 = -27173;

	t99 = (x4973%(x4974|(x4975>>x4976)));

	if (t99 != 2) { NG(); } else { ; }
	
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

