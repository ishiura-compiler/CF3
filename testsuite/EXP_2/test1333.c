#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x15 = 447054709806800122LL;
uint32_t x33 = UINT32_MAX;
volatile int8_t x79 = -10;
int8_t x164 = 0;
uint16_t x220 = 0U;
volatile uint8_t x284 = 0U;
static uint16_t x381 = UINT16_MAX;
int8_t x383 = -1;
volatile int32_t t12 = 28452;
int64_t x511 = INT64_MAX;
static int64_t x512 = 31LL;
int32_t x618 = INT32_MIN;
uint8_t x620 = 11U;
uint64_t x679 = 1LLU;
static uint8_t x680 = 13U;
volatile uint8_t x860 = 0U;
static volatile int16_t x888 = 10;
int8_t x951 = -1;
volatile int32_t x1035 = -27;
uint16_t x1093 = UINT16_MAX;
uint32_t x1169 = 60599U;
static uint32_t x1256 = 2U;
int32_t t24 = -3;
uint32_t x1288 = 15U;
static volatile int32_t t25 = -543;
static uint64_t x1425 = 30LLU;
int32_t t27 = 582;
volatile uint32_t x1537 = 13774721U;
int16_t x1538 = INT16_MIN;
uint32_t x1660 = 6U;
volatile int64_t x1705 = INT64_MAX;
int8_t x1707 = INT8_MIN;
int32_t x1999 = INT32_MIN;
uint32_t t35 = 7832345U;
static uint16_t x2194 = 1U;
static int8_t x2196 = 5;
static uint64_t x2277 = 841167738576LLU;
int8_t x2279 = -1;
volatile int64_t t39 = -313LL;
uint16_t x2404 = 2U;
int32_t x2417 = 5318104;
volatile int32_t x2419 = INT32_MIN;
uint32_t x2449 = UINT32_MAX;
uint32_t t43 = UINT32_MAX;
static volatile uint8_t x2496 = 6U;
volatile int64_t x2513 = 232122976067LL;
int64_t x2515 = -147838876694736150LL;
volatile uint64_t x2517 = 32333778850942187LLU;
volatile uint64_t t48 = 545104868154963637LLU;
int64_t x2534 = -211140903475744777LL;
static uint16_t x2536 = 27U;
int16_t x2583 = 0;
uint8_t x2584 = 1U;
static volatile uint64_t x2638 = 1176932LLU;
volatile int64_t x2662 = -1LL;
volatile uint64_t x2769 = UINT64_MAX;
uint64_t t58 = 1007621418341LLU;
uint64_t x2801 = UINT64_MAX;
uint8_t x3093 = 1U;
uint8_t x3096 = 0U;
uint32_t x3261 = 106U;
int8_t x3362 = -1;
uint8_t x3364 = 8U;
uint32_t t63 = 126852U;
volatile int16_t x3409 = INT16_MAX;
int64_t x3411 = INT64_MIN;
int64_t x3414 = INT64_MIN;
static int8_t x3415 = -1;
int8_t x3442 = INT8_MAX;
static int32_t x3514 = -1;
volatile int64_t x3591 = -1LL;
uint8_t x3592 = 19U;
static int16_t x3599 = -1;
uint64_t t73 = 64932941492538868LLU;
static uint16_t x3682 = 1568U;
volatile int8_t x3712 = 12;
static int32_t x3770 = 60;
static int32_t t77 = -60200582;
int32_t t78 = -20091717;
static uint32_t x3870 = UINT32_MAX;
uint64_t x4147 = 14LLU;
uint8_t x4148 = 0U;
int32_t t83 = 16266442;
static int8_t x4336 = 0;
uint32_t x4337 = 211652278U;
static int8_t x4339 = -15;
volatile int8_t x4450 = 18;
volatile int16_t x4451 = -39;
int32_t x4452 = 0;
uint16_t x4472 = 5U;
uint64_t x4529 = UINT64_MAX;
volatile int16_t x4530 = INT16_MIN;
int64_t x4531 = 212851368869LL;
uint16_t x4532 = 3U;
static uint16_t x4542 = 8814U;
static int32_t t92 = -690486;
uint8_t x4548 = 7U;
int16_t x4655 = INT16_MIN;
int64_t x4713 = 26246060987LL;
int64_t x4716 = 54LL;
uint8_t x4739 = UINT8_MAX;
int32_t t98 = 1656930;
static volatile int8_t x4749 = INT8_MAX;


void f0(void) {
	uint32_t x1 = 1292192U;
	static uint64_t x2 = 13954LLU;
	int32_t x3 = INT32_MAX;
	static uint8_t x4 = 12U;
	uint32_t t0 = 178943721U;

	t0 = ((x1|(x2==x3))>>x4);

	if (t0 != 315U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x13 = 4;
	int64_t x14 = INT64_MIN;
	uint8_t x16 = 0U;
	int32_t t1 = 94101;

	t1 = ((x13|(x14==x15))>>x16);

	if (t1 != 4) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x34 = -1;
	static uint64_t x35 = 8204349518015LLU;
	uint32_t x36 = 1U;
	volatile uint32_t t2 = 7U;

	t2 = ((x33|(x34==x35))>>x36);

	if (t2 != 2147483647U) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x61 = 104947LLU;
	volatile uint16_t x62 = 0U;
	int16_t x63 = INT16_MIN;
	uint8_t x64 = 8U;
	static uint64_t t3 = 3189562626649LLU;

	t3 = ((x61|(x62==x63))>>x64);

	if (t3 != 409LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x77 = 39LLU;
	int8_t x78 = -1;
	static uint32_t x80 = 6U;
	uint64_t t4 = 139195541600LLU;

	t4 = ((x77|(x78==x79))>>x80);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x161 = UINT64_MAX;
	int64_t x162 = 339169LL;
	uint8_t x163 = 2U;
	volatile uint64_t t5 = UINT64_MAX;

	t5 = ((x161|(x162==x163))>>x164);

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x217 = 2413787511LLU;
	uint64_t x218 = 3924340420LLU;
	int32_t x219 = 7;
	static uint64_t t6 = 1238LLU;

	t6 = ((x217|(x218==x219))>>x220);

	if (t6 != 2413787511LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x281 = UINT32_MAX;
	uint32_t x282 = UINT32_MAX;
	uint32_t x283 = UINT32_MAX;
	volatile uint32_t t7 = UINT32_MAX;

	t7 = ((x281|(x282==x283))>>x284);

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x373 = 6683046814024443LL;
	uint8_t x374 = 0U;
	uint64_t x375 = 35191LLU;
	volatile uint8_t x376 = 11U;
	volatile int64_t t8 = -2562LL;

	t8 = ((x373|(x374==x375))>>x376);

	if (t8 != 3263206452160LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x382 = -1LL;
	int32_t x384 = 19;
	int32_t t9 = 3;

	t9 = ((x381|(x382==x383))>>x384);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x425 = 1860122253LLU;
	uint64_t x426 = 85836LLU;
	volatile uint64_t x427 = UINT64_MAX;
	volatile int16_t x428 = 23;
	static uint64_t t10 = 57642LLU;

	t10 = ((x425|(x426==x427))>>x428);

	if (t10 != 221LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x457 = 4112305LLU;
	static int16_t x458 = INT16_MIN;
	uint64_t x459 = 4051522695LLU;
	uint8_t x460 = 6U;
	uint64_t t11 = 4541889LLU;

	t11 = ((x457|(x458==x459))>>x460);

	if (t11 != 64254LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x497 = UINT8_MAX;
	static int8_t x498 = -1;
	int64_t x499 = INT64_MAX;
	volatile uint16_t x500 = 12U;

	t12 = ((x497|(x498==x499))>>x500);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x509 = 259355;
	int32_t x510 = INT32_MIN;
	static volatile int32_t t13 = 81387;

	t13 = ((x509|(x510==x511))>>x512);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x617 = INT8_MAX;
	static uint64_t x619 = 3LLU;
	volatile int32_t t14 = 38281;

	t14 = ((x617|(x618==x619))>>x620);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x677 = 61;
	int16_t x678 = 7017;
	volatile int32_t t15 = 34901022;

	t15 = ((x677|(x678==x679))>>x680);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x701 = INT16_MAX;
	uint8_t x702 = UINT8_MAX;
	volatile uint16_t x703 = 12877U;
	static uint16_t x704 = 5U;
	volatile int32_t t16 = 7474775;

	t16 = ((x701|(x702==x703))>>x704);

	if (t16 != 1023) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x857 = 295U;
	int8_t x858 = INT8_MIN;
	int8_t x859 = 1;
	uint32_t t17 = 505920U;

	t17 = ((x857|(x858==x859))>>x860);

	if (t17 != 295U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x885 = INT32_MAX;
	volatile int32_t x886 = 88;
	int8_t x887 = -11;
	volatile int32_t t18 = 0;

	t18 = ((x885|(x886==x887))>>x888);

	if (t18 != 2097151) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x949 = 160LLU;
	int32_t x950 = 5;
	static uint16_t x952 = 0U;
	uint64_t t19 = 515941622774LLU;

	t19 = ((x949|(x950==x951))>>x952);

	if (t19 != 160LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x997 = UINT64_MAX;
	uint32_t x998 = 114709481U;
	uint16_t x999 = 62U;
	static volatile uint16_t x1000 = 1U;
	volatile uint64_t t20 = 65397603185203LLU;

	t20 = ((x997|(x998==x999))>>x1000);

	if (t20 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x1033 = INT64_MAX;
	int8_t x1034 = -1;
	uint64_t x1036 = 25LLU;
	volatile int64_t t21 = -8884009LL;

	t21 = ((x1033|(x1034==x1035))>>x1036);

	if (t21 != 274877906943LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x1094 = UINT8_MAX;
	volatile int32_t x1095 = 104452262;
	int8_t x1096 = 25;
	volatile int32_t t22 = -11978;

	t22 = ((x1093|(x1094==x1095))>>x1096);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1170 = -1940812LL;
	volatile int64_t x1171 = -1LL;
	volatile int8_t x1172 = 0;
	volatile uint32_t t23 = 7511484U;

	t23 = ((x1169|(x1170==x1171))>>x1172);

	if (t23 != 60599U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x1253 = INT16_MAX;
	static int16_t x1254 = -1;
	int16_t x1255 = 13565;

	t24 = ((x1253|(x1254==x1255))>>x1256);

	if (t24 != 8191) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1285 = 3;
	uint64_t x1286 = 226921896240468154LLU;
	uint64_t x1287 = 295563LLU;

	t25 = ((x1285|(x1286==x1287))>>x1288);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x1426 = 52826LLU;
	int64_t x1427 = 1314LL;
	static uint16_t x1428 = 3U;
	uint64_t t26 = 606LLU;

	t26 = ((x1425|(x1426==x1427))>>x1428);

	if (t26 != 3LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1473 = INT32_MAX;
	int16_t x1474 = INT16_MIN;
	volatile uint32_t x1475 = 4U;
	uint8_t x1476 = 6U;

	t27 = ((x1473|(x1474==x1475))>>x1476);

	if (t27 != 33554431) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x1539 = 1;
	uint16_t x1540 = 7U;
	uint32_t t28 = 2764U;

	t28 = ((x1537|(x1538==x1539))>>x1540);

	if (t28 != 107615U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x1581 = 8065386LL;
	int64_t x1582 = 216701785582033LL;
	uint64_t x1583 = 128640688032426036LLU;
	static int16_t x1584 = 1;
	int64_t t29 = -383838332764492LL;

	t29 = ((x1581|(x1582==x1583))>>x1584);

	if (t29 != 4032693LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1649 = INT16_MAX;
	static int32_t x1650 = INT32_MIN;
	int8_t x1651 = 3;
	volatile uint8_t x1652 = 3U;
	static int32_t t30 = 5;

	t30 = ((x1649|(x1650==x1651))>>x1652);

	if (t30 != 4095) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1653 = INT64_MAX;
	static uint64_t x1654 = UINT64_MAX;
	volatile int32_t x1655 = -1;
	volatile uint8_t x1656 = 1U;
	static int64_t t31 = 1981LL;

	t31 = ((x1653|(x1654==x1655))>>x1656);

	if (t31 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x1657 = INT32_MAX;
	static uint16_t x1658 = UINT16_MAX;
	volatile int64_t x1659 = INT64_MIN;
	static int32_t t32 = 38296;

	t32 = ((x1657|(x1658==x1659))>>x1660);

	if (t32 != 33554431) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1706 = INT32_MIN;
	volatile uint8_t x1708 = 1U;
	static volatile int64_t t33 = 4280509469LL;

	t33 = ((x1705|(x1706==x1707))>>x1708);

	if (t33 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x1969 = 59179LLU;
	static volatile int8_t x1970 = 22;
	int8_t x1971 = INT8_MIN;
	static uint8_t x1972 = 2U;
	uint64_t t34 = 28LLU;

	t34 = ((x1969|(x1970==x1971))>>x1972);

	if (t34 != 14794LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x1997 = UINT32_MAX;
	int64_t x1998 = INT64_MAX;
	int8_t x2000 = 1;

	t35 = ((x1997|(x1998==x1999))>>x2000);

	if (t35 != 2147483647U) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x2193 = UINT16_MAX;
	static int16_t x2195 = INT16_MIN;
	static volatile int32_t t36 = 1;

	t36 = ((x2193|(x2194==x2195))>>x2196);

	if (t36 != 2047) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x2278 = INT32_MIN;
	int8_t x2280 = 27;
	static uint64_t t37 = 4LLU;

	t37 = ((x2277|(x2278==x2279))>>x2280);

	if (t37 != 6267LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint8_t x2305 = 1U;
	int32_t x2306 = 10497399;
	uint8_t x2307 = 12U;
	uint8_t x2308 = 6U;
	static int32_t t38 = -215962;

	t38 = ((x2305|(x2306==x2307))>>x2308);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x2329 = 1021577032499568149LL;
	int32_t x2330 = INT32_MAX;
	int64_t x2331 = 66186087160947575LL;
	static int8_t x2332 = 56;

	t39 = ((x2329|(x2330==x2331))>>x2332);

	if (t39 != 14LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x2361 = INT8_MAX;
	int8_t x2362 = 3;
	uint64_t x2363 = UINT64_MAX;
	static volatile int8_t x2364 = 0;
	volatile int32_t t40 = -12680425;

	t40 = ((x2361|(x2362==x2363))>>x2364);

	if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x2401 = 41735LLU;
	static int16_t x2402 = INT16_MIN;
	int32_t x2403 = INT32_MIN;
	uint64_t t41 = 1LLU;

	t41 = ((x2401|(x2402==x2403))>>x2404);

	if (t41 != 10433LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2418 = INT8_MAX;
	uint64_t x2420 = 5LLU;
	int32_t t42 = -144253535;

	t42 = ((x2417|(x2418==x2419))>>x2420);

	if (t42 != 166190) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x2450 = INT8_MAX;
	int16_t x2451 = -1;
	uint32_t x2452 = 0U;

	t43 = ((x2449|(x2450==x2451))>>x2452);

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x2461 = 0LLU;
	uint64_t x2462 = 13488583022058LLU;
	int16_t x2463 = INT16_MAX;
	uint32_t x2464 = 0U;
	volatile uint64_t t44 = 30274140181979769LLU;

	t44 = ((x2461|(x2462==x2463))>>x2464);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x2493 = 0U;
	volatile int8_t x2494 = 1;
	int8_t x2495 = -1;
	volatile uint32_t t45 = 2148257U;

	t45 = ((x2493|(x2494==x2495))>>x2496);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x2501 = UINT64_MAX;
	int64_t x2502 = INT64_MIN;
	uint32_t x2503 = UINT32_MAX;
	int32_t x2504 = 0;
	volatile uint64_t t46 = UINT64_MAX;

	t46 = ((x2501|(x2502==x2503))>>x2504);

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x2514 = INT8_MIN;
	static int8_t x2516 = 8;
	static volatile int64_t t47 = 287069LL;

	t47 = ((x2513|(x2514==x2515))>>x2516);

	if (t47 != 906730375LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x2518 = 5094721;
	int8_t x2519 = -1;
	uint16_t x2520 = 45U;

	t48 = ((x2517|(x2518==x2519))>>x2520);

	if (t48 != 918LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x2525 = UINT64_MAX;
	int32_t x2526 = -304953;
	int8_t x2527 = INT8_MIN;
	uint8_t x2528 = 2U;
	static volatile uint64_t t49 = 23194271365775LLU;

	t49 = ((x2525|(x2526==x2527))>>x2528);

	if (t49 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x2533 = 1670;
	int16_t x2535 = INT16_MIN;
	int32_t t50 = -365;

	t50 = ((x2533|(x2534==x2535))>>x2536);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x2581 = 1;
	volatile int64_t x2582 = -1LL;
	int32_t t51 = -327;

	t51 = ((x2581|(x2582==x2583))>>x2584);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x2597 = UINT8_MAX;
	uint32_t x2598 = 1141U;
	int32_t x2599 = INT32_MIN;
	volatile int8_t x2600 = 4;
	volatile int32_t t52 = -7106;

	t52 = ((x2597|(x2598==x2599))>>x2600);

	if (t52 != 15) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x2633 = 21U;
	uint16_t x2634 = 110U;
	volatile int16_t x2635 = 60;
	uint8_t x2636 = 24U;
	volatile uint32_t t53 = 1981310U;

	t53 = ((x2633|(x2634==x2635))>>x2636);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x2637 = 115802U;
	volatile uint64_t x2639 = 106348616420LLU;
	uint8_t x2640 = 19U;
	volatile uint32_t t54 = 382569829U;

	t54 = ((x2637|(x2638==x2639))>>x2640);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x2645 = 310U;
	volatile int8_t x2646 = -10;
	volatile int16_t x2647 = INT16_MIN;
	static volatile uint32_t x2648 = 7U;
	volatile uint32_t t55 = 84U;

	t55 = ((x2645|(x2646==x2647))>>x2648);

	if (t55 != 2U) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x2661 = 305221893260690LLU;
	int16_t x2663 = INT16_MIN;
	uint16_t x2664 = 1U;
	static uint64_t t56 = 1239285772LLU;

	t56 = ((x2661|(x2662==x2663))>>x2664);

	if (t56 != 152610946630345LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x2713 = UINT64_MAX;
	int8_t x2714 = -1;
	volatile int16_t x2715 = -32;
	uint32_t x2716 = 49U;
	static volatile uint64_t t57 = 53908201158463LLU;

	t57 = ((x2713|(x2714==x2715))>>x2716);

	if (t57 != 32767LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x2770 = 0U;
	static int16_t x2771 = INT16_MAX;
	static volatile int8_t x2772 = 27;

	t58 = ((x2769|(x2770==x2771))>>x2772);

	if (t58 != 137438953471LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x2802 = INT64_MAX;
	static int8_t x2803 = 1;
	uint8_t x2804 = 0U;
	uint64_t t59 = UINT64_MAX;

	t59 = ((x2801|(x2802==x2803))>>x2804);

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x3094 = 10595U;
	int64_t x3095 = 55787068LL;
	int32_t t60 = -9;

	t60 = ((x3093|(x3094==x3095))>>x3096);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x3262 = 2485LLU;
	int32_t x3263 = INT32_MIN;
	uint64_t x3264 = 24LLU;
	static uint32_t t61 = 2U;

	t61 = ((x3261|(x3262==x3263))>>x3264);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x3361 = UINT64_MAX;
	int16_t x3363 = 5;
	volatile uint64_t t62 = 11890LLU;

	t62 = ((x3361|(x3362==x3363))>>x3364);

	if (t62 != 72057594037927935LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x3389 = UINT32_MAX;
	static int32_t x3390 = 30886;
	int16_t x3391 = INT16_MAX;
	int16_t x3392 = 14;

	t63 = ((x3389|(x3390==x3391))>>x3392);

	if (t63 != 262143U) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int16_t x3410 = INT16_MIN;
	volatile uint8_t x3412 = 30U;
	int32_t t64 = 17;

	t64 = ((x3409|(x3410==x3411))>>x3412);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x3413 = UINT32_MAX;
	static volatile uint16_t x3416 = 3U;
	static uint32_t t65 = 412U;

	t65 = ((x3413|(x3414==x3415))>>x3416);

	if (t65 != 536870911U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x3441 = INT16_MAX;
	int8_t x3443 = INT8_MIN;
	uint8_t x3444 = 29U;
	volatile int32_t t66 = -193685;

	t66 = ((x3441|(x3442==x3443))>>x3444);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x3465 = UINT64_MAX;
	int32_t x3466 = INT32_MIN;
	int16_t x3467 = INT16_MAX;
	int8_t x3468 = 1;
	static volatile uint64_t t67 = 36LLU;

	t67 = ((x3465|(x3466==x3467))>>x3468);

	if (t67 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x3493 = 3U;
	uint64_t x3494 = 991107253632764891LLU;
	volatile int32_t x3495 = -1;
	uint8_t x3496 = 8U;
	int32_t t68 = 2010237;

	t68 = ((x3493|(x3494==x3495))>>x3496);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x3513 = 76U;
	volatile int8_t x3515 = 4;
	volatile uint8_t x3516 = 4U;
	static volatile int32_t t69 = 34533;

	t69 = ((x3513|(x3514==x3515))>>x3516);

	if (t69 != 4) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x3521 = UINT8_MAX;
	volatile uint32_t x3522 = 461058616U;
	int16_t x3523 = -52;
	volatile int8_t x3524 = 2;
	int32_t t70 = -3952485;

	t70 = ((x3521|(x3522==x3523))>>x3524);

	if (t70 != 63) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x3537 = INT32_MAX;
	int16_t x3538 = INT16_MAX;
	volatile int8_t x3539 = 7;
	int32_t x3540 = 7;
	int32_t t71 = 2524;

	t71 = ((x3537|(x3538==x3539))>>x3540);

	if (t71 != 16777215) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x3589 = 2220235U;
	volatile int32_t x3590 = INT32_MAX;
	uint32_t t72 = 136U;

	t72 = ((x3589|(x3590==x3591))>>x3592);

	if (t72 != 4U) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x3597 = 259899716241085LLU;
	int8_t x3598 = 0;
	int8_t x3600 = 10;

	t73 = ((x3597|(x3598==x3599))>>x3600);

	if (t73 != 253808316641LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x3637 = 10U;
	volatile uint32_t x3638 = 583000U;
	static volatile int32_t x3639 = INT32_MIN;
	int8_t x3640 = 0;
	volatile int32_t t74 = -1;

	t74 = ((x3637|(x3638==x3639))>>x3640);

	if (t74 != 10) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x3681 = 331966158U;
	uint32_t x3683 = 7U;
	uint8_t x3684 = 1U;
	volatile uint32_t t75 = 1495327410U;

	t75 = ((x3681|(x3682==x3683))>>x3684);

	if (t75 != 165983079U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x3709 = 12242949LLU;
	int16_t x3710 = -2;
	static volatile int8_t x3711 = INT8_MIN;
	static volatile uint64_t t76 = 1932733786999LLU;

	t76 = ((x3709|(x3710==x3711))>>x3712);

	if (t76 != 2989LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x3769 = 3U;
	uint64_t x3771 = 8222513781435536LLU;
	static uint64_t x3772 = 6LLU;

	t77 = ((x3769|(x3770==x3771))>>x3772);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x3829 = 93U;
	static int16_t x3830 = -172;
	uint64_t x3831 = 5LLU;
	static uint16_t x3832 = 2U;

	t78 = ((x3829|(x3830==x3831))>>x3832);

	if (t78 != 23) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint64_t x3869 = 21811181LLU;
	static int64_t x3871 = INT64_MIN;
	static int64_t x3872 = 0LL;
	static volatile uint64_t t79 = 168656LLU;

	t79 = ((x3869|(x3870==x3871))>>x3872);

	if (t79 != 21811181LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x3981 = 234;
	int16_t x3982 = -670;
	volatile uint16_t x3983 = 2023U;
	static volatile uint32_t x3984 = 6U;
	int32_t t80 = 29155704;

	t80 = ((x3981|(x3982==x3983))>>x3984);

	if (t80 != 3) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x4073 = INT8_MAX;
	static int16_t x4074 = 117;
	int16_t x4075 = INT16_MAX;
	int64_t x4076 = 1LL;
	int32_t t81 = -4;

	t81 = ((x4073|(x4074==x4075))>>x4076);

	if (t81 != 63) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint64_t x4109 = 16898062LLU;
	static uint16_t x4110 = 15500U;
	int32_t x4111 = INT32_MAX;
	uint8_t x4112 = 38U;
	volatile uint64_t t82 = 674123717054119LLU;

	t82 = ((x4109|(x4110==x4111))>>x4112);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x4145 = 831U;
	static volatile uint32_t x4146 = UINT32_MAX;

	t83 = ((x4145|(x4146==x4147))>>x4148);

	if (t83 != 831) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x4177 = 1U;
	uint32_t x4178 = 5039U;
	static int64_t x4179 = -37935278LL;
	uint8_t x4180 = 25U;
	static volatile int32_t t84 = 2;

	t84 = ((x4177|(x4178==x4179))>>x4180);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x4333 = UINT64_MAX;
	int64_t x4334 = -917978649LL;
	uint16_t x4335 = 0U;
	uint64_t t85 = UINT64_MAX;

	t85 = ((x4333|(x4334==x4335))>>x4336);

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x4338 = INT8_MIN;
	int8_t x4340 = 15;
	static uint32_t t86 = 0U;

	t86 = ((x4337|(x4338==x4339))>>x4340);

	if (t86 != 6459U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x4373 = INT64_MAX;
	int32_t x4374 = INT32_MAX;
	int16_t x4375 = INT16_MIN;
	uint8_t x4376 = 1U;
	int64_t t87 = 11257LL;

	t87 = ((x4373|(x4374==x4375))>>x4376);

	if (t87 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x4449 = 275LLU;
	volatile uint64_t t88 = 34431884772269LLU;

	t88 = ((x4449|(x4450==x4451))>>x4452);

	if (t88 != 275LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x4469 = 2506LLU;
	volatile uint8_t x4470 = 1U;
	int64_t x4471 = -1LL;
	volatile uint64_t t89 = 113063123085LLU;

	t89 = ((x4469|(x4470==x4471))>>x4472);

	if (t89 != 78LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x4505 = 0;
	int16_t x4506 = -1;
	static volatile uint64_t x4507 = UINT64_MAX;
	volatile int8_t x4508 = 3;
	volatile int32_t t90 = -1037;

	t90 = ((x4505|(x4506==x4507))>>x4508);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t t91 = 15972844082LLU;

	t91 = ((x4529|(x4530==x4531))>>x4532);

	if (t91 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x4541 = 1;
	int8_t x4543 = -1;
	uint16_t x4544 = 1U;

	t92 = ((x4541|(x4542==x4543))>>x4544);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x4545 = UINT64_MAX;
	uint16_t x4546 = UINT16_MAX;
	static int8_t x4547 = 57;
	uint64_t t93 = 7LLU;

	t93 = ((x4545|(x4546==x4547))>>x4548);

	if (t93 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x4633 = 303;
	int8_t x4634 = -1;
	uint64_t x4635 = 7549LLU;
	uint8_t x4636 = 0U;
	int32_t t94 = 123744616;

	t94 = ((x4633|(x4634==x4635))>>x4636);

	if (t94 != 303) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x4653 = 0U;
	static uint16_t x4654 = 18396U;
	volatile int64_t x4656 = 0LL;
	volatile uint32_t t95 = 488U;

	t95 = ((x4653|(x4654==x4655))>>x4656);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x4714 = 2928571616009LLU;
	volatile uint8_t x4715 = UINT8_MAX;
	volatile int64_t t96 = 1LL;

	t96 = ((x4713|(x4714==x4715))>>x4716);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x4733 = 0;
	int16_t x4734 = 1715;
	volatile uint16_t x4735 = 2067U;
	volatile int8_t x4736 = 1;
	int32_t t97 = -186;

	t97 = ((x4733|(x4734==x4735))>>x4736);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint16_t x4737 = 14567U;
	uint8_t x4738 = 29U;
	uint16_t x4740 = 14U;

	t98 = ((x4737|(x4738==x4739))>>x4740);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x4750 = -1;
	volatile int64_t x4751 = INT64_MIN;
	static uint16_t x4752 = 1U;
	volatile int32_t t99 = -642;

	t99 = ((x4749|(x4750==x4751))>>x4752);

	if (t99 != 63) { NG(); } else { ; }
	
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

