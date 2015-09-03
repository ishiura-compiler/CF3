#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x41 = 216;
int32_t x44 = 100;
volatile int32_t t2 = -1175222;
int64_t x70 = INT64_MIN;
volatile uint32_t t4 = UINT32_MAX;
int32_t t5 = 14374;
int8_t x188 = 60;
int32_t t6 = 31726;
volatile int32_t x194 = INT32_MAX;
volatile int32_t t8 = -14957;
int8_t x245 = INT8_MIN;
int16_t x294 = INT16_MIN;
static volatile uint8_t x296 = 6U;
static int32_t t10 = 1264;
volatile int16_t x358 = -1;
int16_t x525 = 1;
static volatile int32_t x539 = 3;
int64_t x543 = 1LL;
volatile int32_t x589 = -1;
static int16_t x591 = 1;
int8_t x598 = 1;
int32_t x610 = -183962;
volatile uint64_t x644 = UINT64_MAX;
uint32_t x689 = 254U;
uint64_t x712 = UINT64_MAX;
volatile uint8_t x751 = 3U;
int32_t x773 = -1;
static uint8_t x775 = 6U;
uint64_t t26 = 5LLU;
volatile uint32_t t27 = 1U;
uint16_t x863 = 0U;
int8_t x864 = INT8_MAX;
volatile int32_t x910 = INT32_MIN;
uint8_t x965 = 5U;
uint8_t x1015 = 7U;
volatile int64_t t33 = INT64_MIN;
int32_t x1053 = INT32_MAX;
static uint8_t x1055 = 4U;
int32_t t36 = -121;
volatile int16_t x1172 = INT16_MIN;
int32_t t38 = 79411744;
int8_t x1205 = -1;
int64_t t41 = INT64_MIN;
volatile int32_t t42 = INT32_MIN;
int16_t x1377 = 85;
static int32_t x1379 = 14;
volatile uint64_t t45 = 1055713465785803798LLU;
static int16_t x1399 = 3;
volatile int32_t x1429 = INT32_MIN;
int64_t t49 = 7363037126657617LL;
static int32_t x1472 = -1;
volatile int32_t t54 = -10;
uint32_t x1610 = 160U;
volatile int32_t t55 = -47;
int32_t x1673 = INT32_MIN;
int16_t x1674 = INT16_MIN;
int32_t x1737 = -1;
volatile int32_t t61 = INT32_MAX;
static volatile int16_t x1781 = INT16_MIN;
int8_t x1783 = 9;
volatile uint16_t x1815 = 21U;
volatile uint16_t x1827 = 1U;
int32_t t68 = -1019511889;
static int32_t x1857 = INT32_MAX;
volatile uint8_t x1859 = 12U;
int64_t x1860 = -1LL;
int8_t x2081 = INT8_MAX;
volatile int16_t x2084 = INT16_MIN;
int64_t x2134 = INT64_MIN;
uint8_t x2135 = 0U;
volatile int64_t t72 = -57419735244945213LL;
uint8_t x2141 = 49U;
int64_t x2143 = 1LL;
uint16_t x2157 = 304U;
uint64_t x2166 = 0LLU;
uint16_t x2168 = 11U;
int8_t x2194 = -1;
int32_t x2241 = -1;
static int32_t x2280 = INT32_MIN;
uint32_t x2329 = 1918274U;
static int64_t x2365 = 201330LL;
static uint16_t x2367 = 0U;
static uint16_t x2389 = 2553U;
uint64_t x2467 = 27LLU;
int8_t x2468 = INT8_MAX;
int64_t x2489 = -1LL;
volatile int32_t x2506 = 137;
int8_t x2507 = 1;
static int8_t x2508 = INT8_MIN;
static volatile int32_t t89 = INT32_MIN;
static int32_t x2606 = -62811;
static int64_t x2614 = INT64_MAX;
int8_t x2615 = 0;
int8_t x2616 = -1;
int32_t x2676 = INT32_MIN;
uint8_t x2695 = 0U;
int32_t t94 = -106;
int16_t x2850 = INT16_MAX;
uint16_t x2851 = 7U;
uint16_t x2923 = 1U;


void f0(void) {
	int32_t x5 = INT32_MIN;
	int32_t x6 = INT32_MIN;
	int8_t x7 = 1;
	volatile uint8_t x8 = 27U;
	volatile int32_t t0 = -6851441;

	t0 = (((x5==x6)<<x7)+x8);

	if (t0 != 29) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x42 = -1;
	uint8_t x43 = 0U;
	volatile int32_t t1 = -12084016;

	t1 = (((x41==x42)<<x43)+x44);

	if (t1 != 100) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x61 = 8068;
	volatile int16_t x62 = -1;
	int8_t x63 = 3;
	int16_t x64 = -10179;

	t2 = (((x61==x62)<<x63)+x64);

	if (t2 != -10179) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x69 = 15;
	uint8_t x71 = 25U;
	uint16_t x72 = 6192U;
	volatile int32_t t3 = 0;

	t3 = (((x69==x70)<<x71)+x72);

	if (t3 != 6192) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x85 = INT8_MIN;
	int16_t x86 = -1;
	int16_t x87 = 7;
	volatile uint32_t x88 = UINT32_MAX;

	t4 = (((x85==x86)<<x87)+x88);

	if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x129 = -74358811155266805LL;
	int64_t x130 = -1234875846469664LL;
	uint32_t x131 = 6U;
	uint8_t x132 = UINT8_MAX;

	t5 = (((x129==x130)<<x131)+x132);

	if (t5 != 255) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x185 = 4051U;
	static int16_t x186 = INT16_MAX;
	static volatile uint8_t x187 = 4U;

	t6 = (((x185==x186)<<x187)+x188);

	if (t6 != 60) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x193 = 18U;
	int32_t x195 = 1;
	uint32_t x196 = 5120U;
	uint32_t t7 = 390U;

	t7 = (((x193==x194)<<x195)+x196);

	if (t7 != 5120U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x225 = INT8_MAX;
	static int16_t x226 = -1;
	uint16_t x227 = 11U;
	int8_t x228 = -7;

	t8 = (((x225==x226)<<x227)+x228);

	if (t8 != -7) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x246 = 5430074LLU;
	static uint8_t x247 = 14U;
	volatile uint64_t x248 = 17LLU;
	uint64_t t9 = 351910615539LLU;

	t9 = (((x245==x246)<<x247)+x248);

	if (t9 != 17LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x293 = INT64_MIN;
	static volatile int8_t x295 = 10;

	t10 = (((x293==x294)<<x295)+x296);

	if (t10 != 6) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x357 = UINT16_MAX;
	static int16_t x359 = 0;
	static uint32_t x360 = 14U;
	volatile uint32_t t11 = 111011U;

	t11 = (((x357==x358)<<x359)+x360);

	if (t11 != 14U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x381 = UINT32_MAX;
	int8_t x382 = -1;
	uint32_t x383 = 6U;
	uint16_t x384 = 116U;
	int32_t t12 = 2247481;

	t12 = (((x381==x382)<<x383)+x384);

	if (t12 != 180) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x473 = INT8_MIN;
	static int64_t x474 = 341288593784442345LL;
	int8_t x475 = 29;
	int8_t x476 = INT8_MIN;
	static int32_t t13 = -7;

	t13 = (((x473==x474)<<x475)+x476);

	if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x526 = INT64_MIN;
	int16_t x527 = 29;
	static int8_t x528 = INT8_MIN;
	static int32_t t14 = 53343896;

	t14 = (((x525==x526)<<x527)+x528);

	if (t14 != -128) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x529 = INT16_MIN;
	static int8_t x530 = INT8_MIN;
	int8_t x531 = 27;
	uint8_t x532 = 7U;
	volatile int32_t t15 = -315;

	t15 = (((x529==x530)<<x531)+x532);

	if (t15 != 7) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x537 = UINT8_MAX;
	int32_t x538 = -1;
	uint8_t x540 = 1U;
	int32_t t16 = -2;

	t16 = (((x537==x538)<<x539)+x540);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x541 = INT64_MIN;
	int8_t x542 = INT8_MIN;
	int64_t x544 = INT64_MIN;
	static volatile int64_t t17 = INT64_MIN;

	t17 = (((x541==x542)<<x543)+x544);

	if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x590 = UINT32_MAX;
	int8_t x592 = INT8_MAX;
	volatile int32_t t18 = 30;

	t18 = (((x589==x590)<<x591)+x592);

	if (t18 != 129) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x597 = INT8_MIN;
	int64_t x599 = 7LL;
	int32_t x600 = INT32_MAX;
	int32_t t19 = INT32_MAX;

	t19 = (((x597==x598)<<x599)+x600);

	if (t19 != INT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x609 = 15;
	volatile uint32_t x611 = 22U;
	int32_t x612 = INT32_MIN;
	int32_t t20 = INT32_MIN;

	t20 = (((x609==x610)<<x611)+x612);

	if (t20 != INT32_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint32_t x641 = UINT32_MAX;
	static int32_t x642 = -1;
	uint8_t x643 = 13U;
	uint64_t t21 = 5769892186803276LLU;

	t21 = (((x641==x642)<<x643)+x644);

	if (t21 != 8191LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x690 = -13109;
	uint8_t x691 = 1U;
	static volatile int8_t x692 = -1;
	static int32_t t22 = -341855;

	t22 = (((x689==x690)<<x691)+x692);

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x709 = 202;
	volatile uint64_t x710 = 953961373421677LLU;
	static uint8_t x711 = 1U;
	volatile uint64_t t23 = UINT64_MAX;

	t23 = (((x709==x710)<<x711)+x712);

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x749 = 2733531721593851988LLU;
	int64_t x750 = INT64_MIN;
	int16_t x752 = 2538;
	int32_t t24 = -434500;

	t24 = (((x749==x750)<<x751)+x752);

	if (t24 != 2538) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x753 = 8U;
	int64_t x754 = -1LL;
	uint16_t x755 = 14U;
	int8_t x756 = -5;
	volatile int32_t t25 = -4;

	t25 = (((x753==x754)<<x755)+x756);

	if (t25 != -5) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x774 = -111;
	uint64_t x776 = 243LLU;

	t26 = (((x773==x774)<<x775)+x776);

	if (t26 != 243LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x821 = UINT32_MAX;
	int32_t x822 = INT32_MIN;
	static uint8_t x823 = 0U;
	uint32_t x824 = 662U;

	t27 = (((x821==x822)<<x823)+x824);

	if (t27 != 662U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x845 = UINT8_MAX;
	int16_t x846 = INT16_MIN;
	uint32_t x847 = 28U;
	uint32_t x848 = 46U;
	uint32_t t28 = 3654U;

	t28 = (((x845==x846)<<x847)+x848);

	if (t28 != 46U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x861 = INT64_MIN;
	int64_t x862 = -1LL;
	int32_t t29 = 59;

	t29 = (((x861==x862)<<x863)+x864);

	if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x881 = UINT8_MAX;
	int8_t x882 = -1;
	static int16_t x883 = 8;
	uint32_t x884 = UINT32_MAX;
	uint32_t t30 = UINT32_MAX;

	t30 = (((x881==x882)<<x883)+x884);

	if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x909 = INT32_MAX;
	int8_t x911 = 2;
	int16_t x912 = INT16_MAX;
	int32_t t31 = 865544;

	t31 = (((x909==x910)<<x911)+x912);

	if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x966 = 105339024;
	uint8_t x967 = 0U;
	static int32_t x968 = -1;
	volatile int32_t t32 = -6785513;

	t32 = (((x965==x966)<<x967)+x968);

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1013 = 343937993897LLU;
	uint16_t x1014 = 21U;
	volatile int64_t x1016 = INT64_MIN;

	t33 = (((x1013==x1014)<<x1015)+x1016);

	if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int16_t x1017 = -5;
	uint64_t x1018 = UINT64_MAX;
	int16_t x1019 = 6;
	static uint32_t x1020 = 6664U;
	volatile uint32_t t34 = 119U;

	t34 = (((x1017==x1018)<<x1019)+x1020);

	if (t34 != 6664U) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x1054 = 853U;
	int32_t x1056 = INT32_MAX;
	static volatile int32_t t35 = INT32_MAX;

	t35 = (((x1053==x1054)<<x1055)+x1056);

	if (t35 != INT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x1101 = 3030356U;
	volatile int8_t x1102 = INT8_MAX;
	uint8_t x1103 = 0U;
	uint16_t x1104 = 2425U;

	t36 = (((x1101==x1102)<<x1103)+x1104);

	if (t36 != 2425) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x1145 = 13170U;
	uint32_t x1146 = 1U;
	uint16_t x1147 = 18U;
	volatile int8_t x1148 = -1;
	static volatile int32_t t37 = 348;

	t37 = (((x1145==x1146)<<x1147)+x1148);

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x1169 = INT8_MAX;
	int32_t x1170 = INT32_MIN;
	int64_t x1171 = 0LL;

	t38 = (((x1169==x1170)<<x1171)+x1172);

	if (t38 != -32768) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x1206 = INT64_MAX;
	uint8_t x1207 = 0U;
	int8_t x1208 = INT8_MIN;
	int32_t t39 = -253503;

	t39 = (((x1205==x1206)<<x1207)+x1208);

	if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x1261 = 2796;
	static int32_t x1262 = INT32_MIN;
	int8_t x1263 = 14;
	int64_t x1264 = -1LL;
	volatile int64_t t40 = -1142055662625063367LL;

	t40 = (((x1261==x1262)<<x1263)+x1264);

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x1281 = 5274472U;
	static int16_t x1282 = INT16_MIN;
	int8_t x1283 = 14;
	static volatile int64_t x1284 = INT64_MIN;

	t41 = (((x1281==x1282)<<x1283)+x1284);

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x1305 = UINT8_MAX;
	volatile int64_t x1306 = 3160349LL;
	uint8_t x1307 = 1U;
	int32_t x1308 = INT32_MIN;

	t42 = (((x1305==x1306)<<x1307)+x1308);

	if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x1321 = 28834637234464746LL;
	uint8_t x1322 = 18U;
	static volatile int16_t x1323 = 4;
	volatile int64_t x1324 = INT64_MIN;
	volatile int64_t t43 = INT64_MIN;

	t43 = (((x1321==x1322)<<x1323)+x1324);

	if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x1329 = INT16_MAX;
	static uint32_t x1330 = 1376864U;
	volatile uint16_t x1331 = 17U;
	int32_t x1332 = INT32_MIN;
	volatile int32_t t44 = INT32_MIN;

	t44 = (((x1329==x1330)<<x1331)+x1332);

	if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1378 = 2;
	uint64_t x1380 = 28LLU;

	t45 = (((x1377==x1378)<<x1379)+x1380);

	if (t45 != 28LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x1397 = 57077U;
	int8_t x1398 = INT8_MIN;
	uint8_t x1400 = UINT8_MAX;
	static volatile int32_t t46 = 771099;

	t46 = (((x1397==x1398)<<x1399)+x1400);

	if (t46 != 255) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x1430 = -13;
	volatile int16_t x1431 = 3;
	int32_t x1432 = INT32_MIN;
	int32_t t47 = INT32_MIN;

	t47 = (((x1429==x1430)<<x1431)+x1432);

	if (t47 != INT32_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x1449 = -41;
	int64_t x1450 = INT64_MIN;
	int8_t x1451 = 8;
	uint32_t x1452 = 4169360U;
	volatile uint32_t t48 = 116U;

	t48 = (((x1449==x1450)<<x1451)+x1452);

	if (t48 != 4169360U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x1453 = -28;
	volatile int16_t x1454 = 3699;
	uint8_t x1455 = 2U;
	int64_t x1456 = -1LL;

	t49 = (((x1453==x1454)<<x1455)+x1456);

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x1469 = -1;
	static int32_t x1470 = INT32_MIN;
	uint8_t x1471 = 0U;
	int32_t t50 = 109;

	t50 = (((x1469==x1470)<<x1471)+x1472);

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x1481 = -1;
	uint64_t x1482 = UINT64_MAX;
	static uint8_t x1483 = 1U;
	uint8_t x1484 = 3U;
	static volatile int32_t t51 = -18855;

	t51 = (((x1481==x1482)<<x1483)+x1484);

	if (t51 != 5) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x1501 = INT16_MIN;
	uint16_t x1502 = 1561U;
	volatile uint8_t x1503 = 23U;
	volatile int64_t x1504 = -1LL;
	static volatile int64_t t52 = -1LL;

	t52 = (((x1501==x1502)<<x1503)+x1504);

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x1565 = INT64_MIN;
	int32_t x1566 = -51020;
	uint8_t x1567 = 3U;
	static volatile int16_t x1568 = -1;
	int32_t t53 = 49252353;

	t53 = (((x1565==x1566)<<x1567)+x1568);

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x1569 = -1814;
	static int32_t x1570 = -1;
	uint8_t x1571 = 10U;
	static int32_t x1572 = -86;

	t54 = (((x1569==x1570)<<x1571)+x1572);

	if (t54 != -86) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x1609 = 6780U;
	volatile int8_t x1611 = 21;
	int16_t x1612 = INT16_MIN;

	t55 = (((x1609==x1610)<<x1611)+x1612);

	if (t55 != -32768) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x1653 = INT8_MAX;
	uint32_t x1654 = 187544U;
	static volatile uint8_t x1655 = 31U;
	int16_t x1656 = -1;
	static volatile int32_t t56 = -1;

	t56 = (((x1653==x1654)<<x1655)+x1656);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x1675 = 3U;
	int32_t x1676 = INT32_MAX;
	static volatile int32_t t57 = INT32_MAX;

	t57 = (((x1673==x1674)<<x1675)+x1676);

	if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x1681 = 0U;
	uint64_t x1682 = 8327313LLU;
	uint64_t x1683 = 7LLU;
	int8_t x1684 = INT8_MAX;
	volatile int32_t t58 = -193079181;

	t58 = (((x1681==x1682)<<x1683)+x1684);

	if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x1713 = INT16_MIN;
	static uint64_t x1714 = UINT64_MAX;
	uint16_t x1715 = 22U;
	volatile uint16_t x1716 = 584U;
	int32_t t59 = -21042;

	t59 = (((x1713==x1714)<<x1715)+x1716);

	if (t59 != 584) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x1738 = 18U;
	int8_t x1739 = 8;
	volatile uint64_t x1740 = 37717861405LLU;
	volatile uint64_t t60 = 14620348492655087LLU;

	t60 = (((x1737==x1738)<<x1739)+x1740);

	if (t60 != 37717861405LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x1741 = INT8_MIN;
	uint64_t x1742 = UINT64_MAX;
	uint8_t x1743 = 0U;
	static int32_t x1744 = INT32_MAX;

	t61 = (((x1741==x1742)<<x1743)+x1744);

	if (t61 != INT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x1749 = 0;
	uint64_t x1750 = 3304951228189LLU;
	static uint64_t x1751 = 0LLU;
	static int64_t x1752 = -35435625034549128LL;
	volatile int64_t t62 = -1LL;

	t62 = (((x1749==x1750)<<x1751)+x1752);

	if (t62 != -35435625034549128LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x1782 = 9222707U;
	volatile int32_t x1784 = -1;
	int32_t t63 = 2860347;

	t63 = (((x1781==x1782)<<x1783)+x1784);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x1797 = 1798463015LL;
	int64_t x1798 = INT64_MIN;
	volatile int8_t x1799 = 5;
	uint8_t x1800 = 37U;
	volatile int32_t t64 = -4403983;

	t64 = (((x1797==x1798)<<x1799)+x1800);

	if (t64 != 37) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x1813 = 1744338LL;
	uint8_t x1814 = 5U;
	int8_t x1816 = INT8_MIN;
	static volatile int32_t t65 = 83647;

	t65 = (((x1813==x1814)<<x1815)+x1816);

	if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x1825 = INT64_MIN;
	int64_t x1826 = INT64_MIN;
	int16_t x1828 = INT16_MIN;
	static volatile int32_t t66 = -80352075;

	t66 = (((x1825==x1826)<<x1827)+x1828);

	if (t66 != -32766) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x1837 = 867LL;
	int32_t x1838 = -340;
	uint8_t x1839 = 14U;
	int32_t x1840 = 1;
	int32_t t67 = 488364;

	t67 = (((x1837==x1838)<<x1839)+x1840);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x1845 = 1160149645805LL;
	int16_t x1846 = INT16_MIN;
	uint8_t x1847 = 2U;
	int32_t x1848 = -1;

	t68 = (((x1845==x1846)<<x1847)+x1848);

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x1858 = INT16_MAX;
	int64_t t69 = 0LL;

	t69 = (((x1857==x1858)<<x1859)+x1860);

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x1869 = INT16_MAX;
	int32_t x1870 = -1;
	uint32_t x1871 = 2U;
	int8_t x1872 = INT8_MIN;
	volatile int32_t t70 = 48777;

	t70 = (((x1869==x1870)<<x1871)+x1872);

	if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint8_t x2082 = UINT8_MAX;
	int8_t x2083 = 0;
	volatile int32_t t71 = -26;

	t71 = (((x2081==x2082)<<x2083)+x2084);

	if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x2133 = 21646U;
	static int64_t x2136 = 422384213457310108LL;

	t72 = (((x2133==x2134)<<x2135)+x2136);

	if (t72 != 422384213457310108LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x2137 = INT16_MIN;
	int8_t x2138 = INT8_MAX;
	uint8_t x2139 = 6U;
	volatile int32_t x2140 = INT32_MAX;
	int32_t t73 = INT32_MAX;

	t73 = (((x2137==x2138)<<x2139)+x2140);

	if (t73 != INT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x2142 = -1;
	uint32_t x2144 = UINT32_MAX;
	static uint32_t t74 = UINT32_MAX;

	t74 = (((x2141==x2142)<<x2143)+x2144);

	if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x2158 = UINT64_MAX;
	int8_t x2159 = 15;
	static volatile int64_t x2160 = -1LL;
	volatile int64_t t75 = 4358LL;

	t75 = (((x2157==x2158)<<x2159)+x2160);

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x2165 = INT8_MIN;
	int8_t x2167 = 0;
	int32_t t76 = 91;

	t76 = (((x2165==x2166)<<x2167)+x2168);

	if (t76 != 11) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x2193 = -1LL;
	int16_t x2195 = 1;
	static int32_t x2196 = INT32_MIN;
	int32_t t77 = -25;

	t77 = (((x2193==x2194)<<x2195)+x2196);

	if (t77 != -2147483646) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x2242 = INT64_MIN;
	uint32_t x2243 = 5U;
	int64_t x2244 = 932389717LL;
	int64_t t78 = 321879063316LL;

	t78 = (((x2241==x2242)<<x2243)+x2244);

	if (t78 != 932389717LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x2265 = -1LL;
	volatile uint8_t x2266 = 3U;
	static uint16_t x2267 = 11U;
	int32_t x2268 = -1;
	volatile int32_t t79 = 534090;

	t79 = (((x2265==x2266)<<x2267)+x2268);

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x2277 = 3139945U;
	volatile uint8_t x2278 = UINT8_MAX;
	static uint8_t x2279 = 12U;
	int32_t t80 = INT32_MIN;

	t80 = (((x2277==x2278)<<x2279)+x2280);

	if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x2330 = INT32_MIN;
	volatile uint64_t x2331 = 4LLU;
	int16_t x2332 = -1;
	static int32_t t81 = 2647;

	t81 = (((x2329==x2330)<<x2331)+x2332);

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int32_t x2366 = INT32_MIN;
	uint32_t x2368 = 8047126U;
	volatile uint32_t t82 = 121462632U;

	t82 = (((x2365==x2366)<<x2367)+x2368);

	if (t82 != 8047126U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x2369 = -1;
	int32_t x2370 = INT32_MAX;
	int16_t x2371 = 3;
	int64_t x2372 = INT64_MAX;
	volatile int64_t t83 = INT64_MAX;

	t83 = (((x2369==x2370)<<x2371)+x2372);

	if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x2390 = INT8_MAX;
	uint16_t x2391 = 15U;
	static int64_t x2392 = 90LL;
	int64_t t84 = -4745666LL;

	t84 = (((x2389==x2390)<<x2391)+x2392);

	if (t84 != 90LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x2465 = 152U;
	uint32_t x2466 = UINT32_MAX;
	int32_t t85 = -1;

	t85 = (((x2465==x2466)<<x2467)+x2468);

	if (t85 != 127) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x2477 = -1401676326LL;
	uint8_t x2478 = 52U;
	volatile int8_t x2479 = 0;
	static uint32_t x2480 = 116U;
	uint32_t t86 = 171U;

	t86 = (((x2477==x2478)<<x2479)+x2480);

	if (t86 != 116U) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int32_t x2490 = -1;
	uint8_t x2491 = 1U;
	int8_t x2492 = INT8_MAX;
	int32_t t87 = -4291;

	t87 = (((x2489==x2490)<<x2491)+x2492);

	if (t87 != 129) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x2505 = UINT8_MAX;
	volatile int32_t t88 = -1;

	t88 = (((x2505==x2506)<<x2507)+x2508);

	if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x2517 = INT32_MIN;
	int8_t x2518 = INT8_MIN;
	uint8_t x2519 = 6U;
	int32_t x2520 = INT32_MIN;

	t89 = (((x2517==x2518)<<x2519)+x2520);

	if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x2545 = INT16_MIN;
	int32_t x2546 = INT32_MAX;
	static volatile uint32_t x2547 = 5U;
	volatile uint8_t x2548 = 12U;
	volatile int32_t t90 = 470;

	t90 = (((x2545==x2546)<<x2547)+x2548);

	if (t90 != 12) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x2605 = -870;
	uint8_t x2607 = 1U;
	int32_t x2608 = -1;
	int32_t t91 = 1;

	t91 = (((x2605==x2606)<<x2607)+x2608);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x2613 = UINT16_MAX;
	volatile int32_t t92 = -388332880;

	t92 = (((x2613==x2614)<<x2615)+x2616);

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x2673 = INT8_MIN;
	uint32_t x2674 = 216410376U;
	static uint16_t x2675 = 5U;
	volatile int32_t t93 = INT32_MIN;

	t93 = (((x2673==x2674)<<x2675)+x2676);

	if (t93 != INT32_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x2693 = 63U;
	volatile uint8_t x2694 = 1U;
	int32_t x2696 = -1;

	t94 = (((x2693==x2694)<<x2695)+x2696);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x2813 = INT64_MAX;
	int64_t x2814 = -6205950LL;
	uint64_t x2815 = 2LLU;
	int16_t x2816 = 0;
	volatile int32_t t95 = 2790;

	t95 = (((x2813==x2814)<<x2815)+x2816);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x2849 = -1;
	int32_t x2852 = INT32_MAX;
	int32_t t96 = INT32_MAX;

	t96 = (((x2849==x2850)<<x2851)+x2852);

	if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x2909 = INT64_MIN;
	uint8_t x2910 = 65U;
	volatile uint8_t x2911 = 0U;
	int32_t x2912 = INT32_MAX;
	static int32_t t97 = INT32_MAX;

	t97 = (((x2909==x2910)<<x2911)+x2912);

	if (t97 != INT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x2921 = INT64_MIN;
	uint8_t x2922 = UINT8_MAX;
	int64_t x2924 = INT64_MIN;
	volatile int64_t t98 = INT64_MIN;

	t98 = (((x2921==x2922)<<x2923)+x2924);

	if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x2941 = INT8_MIN;
	static int16_t x2942 = INT16_MAX;
	uint8_t x2943 = 8U;
	static volatile int64_t x2944 = -1LL;
	volatile int64_t t99 = -611LL;

	t99 = (((x2941==x2942)<<x2943)+x2944);

	if (t99 != -1LL) { NG(); } else { ; }
	
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

