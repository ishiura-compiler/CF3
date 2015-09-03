#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x90 = -10;
uint8_t x92 = 3U;
static volatile uint16_t x99 = 499U;
int8_t x117 = -1;
uint8_t x118 = UINT8_MAX;
static int32_t t5 = 206;
static volatile int32_t t6 = 4039;
volatile uint64_t x181 = UINT64_MAX;
uint8_t x222 = 49U;
int32_t x223 = INT32_MIN;
static uint32_t x382 = 1260608U;
int32_t x383 = 80713;
uint64_t x419 = UINT64_MAX;
int32_t x465 = -1;
int16_t x468 = 6;
int64_t x533 = INT64_MIN;
int64_t x534 = -1LL;
volatile int64_t t15 = -157930327942716LL;
int8_t x546 = INT8_MIN;
volatile uint64_t t16 = 5136679775626668LLU;
int16_t x569 = INT16_MAX;
int32_t x601 = -251;
volatile uint32_t x602 = 1U;
volatile int32_t x621 = INT32_MIN;
int64_t x623 = -82943716704420LL;
int64_t t20 = 34190293LL;
int16_t x643 = INT16_MIN;
int8_t x704 = 3;
volatile uint64_t t22 = 45384896231731213LLU;
int32_t x726 = -1;
volatile int8_t x774 = -1;
volatile uint64_t t26 = 1604265484220989656LLU;
static volatile uint32_t t29 = 10563U;
uint64_t x942 = 12331943LLU;
uint64_t t30 = 712209351734757812LLU;
static volatile int32_t t33 = -1612773;
int8_t x1132 = 2;
static uint8_t x1274 = 26U;
int8_t x1276 = 10;
uint64_t t35 = 1211354286LLU;
uint16_t x1281 = UINT16_MAX;
static uint16_t x1283 = 1293U;
uint16_t x1284 = 0U;
int64_t x1350 = INT64_MAX;
volatile uint32_t x1351 = UINT32_MAX;
static int64_t t38 = -9493274LL;
volatile uint8_t x1378 = 65U;
volatile int64_t t39 = 14730432273673LL;
static volatile int8_t x1408 = 2;
int64_t x1490 = -4838092194676944LL;
int32_t x1491 = INT32_MIN;
volatile uint8_t x1588 = 1U;
volatile int32_t t46 = 4077;
volatile int8_t x1669 = 15;
static int32_t t50 = -240853932;
uint8_t x1946 = UINT8_MAX;
volatile int32_t x1948 = 1;
int16_t x2051 = INT16_MAX;
static int64_t x2054 = -4174LL;
int8_t x2055 = INT8_MIN;
volatile int64_t x2061 = -1LL;
int64_t x2063 = -648674LL;
int16_t x2137 = INT16_MIN;
int8_t x2140 = 22;
static volatile uint8_t x2192 = 10U;
int64_t t62 = 698LL;
int8_t x2215 = -1;
uint64_t x2238 = 0LLU;
int32_t x2239 = 1930;
uint32_t x2245 = 26943215U;
volatile int32_t x2248 = 1;
volatile uint8_t x2294 = UINT8_MAX;
static uint16_t x2372 = 6U;
int8_t x2400 = 0;
uint8_t x2443 = 24U;
static int64_t t73 = -490LL;
int8_t x2521 = INT8_MAX;
volatile uint32_t x2539 = UINT32_MAX;
int8_t x2550 = INT8_MIN;
int8_t x2577 = 0;
uint8_t x2580 = 8U;
volatile int32_t t78 = 591564;
int32_t t79 = 27691278;
int32_t x2613 = INT32_MAX;
uint32_t x2614 = 10U;
int64_t x2615 = 31668303138139540LL;
int8_t x2618 = INT8_MAX;
volatile int64_t x2634 = INT64_MAX;
static volatile int64_t t85 = -139503LL;
int8_t x2697 = -3;
int64_t x2779 = INT64_MIN;
int8_t x2780 = 3;
uint32_t x2814 = 3853U;
int64_t x2822 = INT64_MAX;
uint8_t x2824 = 3U;
volatile uint64_t x2937 = 59309657LLU;
volatile uint64_t t90 = 5558629LLU;
int8_t x3023 = 15;
volatile int32_t x3027 = INT32_MAX;
int8_t x3052 = 0;
int8_t x3071 = -14;
int8_t x3158 = -1;
int32_t x3190 = INT32_MAX;


void f0(void) {
	uint64_t x41 = 86040232317LLU;
	int64_t x42 = -1LL;
	int32_t x43 = INT32_MIN;
	uint32_t x44 = 1U;
	uint64_t t0 = 4037875621569LLU;

	t0 = (((x41|x42)/x43)<<x44);

	if (t0 != 2LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x69 = 29018;
	uint8_t x70 = 12U;
	int64_t x71 = INT64_MAX;
	volatile uint64_t x72 = 1LLU;
	volatile int64_t t1 = -515735043533LL;

	t1 = (((x69|x70)/x71)<<x72);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x89 = UINT64_MAX;
	uint8_t x91 = UINT8_MAX;
	uint64_t t2 = 7037LLU;

	t2 = (((x89|x90)/x91)<<x92);

	if (t2 != 578721382704613384LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x97 = -6;
	volatile int16_t x98 = INT16_MAX;
	volatile uint64_t x100 = 0LLU;
	volatile int32_t t3 = -42465077;

	t3 = (((x97|x98)/x99)<<x100);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x105 = 37LL;
	static int16_t x106 = INT16_MIN;
	static volatile int64_t x107 = INT64_MIN;
	int16_t x108 = 45;
	static volatile int64_t t4 = 133811548370979LL;

	t4 = (((x105|x106)/x107)<<x108);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x119 = -1;
	volatile int16_t x120 = 0;

	t5 = (((x117|x118)/x119)<<x120);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x121 = 21892049;
	int8_t x122 = -1;
	int16_t x123 = INT16_MIN;
	static uint8_t x124 = 4U;

	t6 = (((x121|x122)/x123)<<x124);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x177 = 18LLU;
	int8_t x178 = 2;
	int32_t x179 = INT32_MIN;
	static volatile uint8_t x180 = 18U;
	volatile uint64_t t7 = 793LLU;

	t7 = (((x177|x178)/x179)<<x180);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x182 = UINT64_MAX;
	uint64_t x183 = UINT64_MAX;
	uint8_t x184 = 0U;
	volatile uint64_t t8 = 736503LLU;

	t8 = (((x181|x182)/x183)<<x184);

	if (t8 != 1LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x217 = -1;
	static uint32_t x218 = UINT32_MAX;
	volatile uint32_t x219 = 1466U;
	static int8_t x220 = 1;
	uint32_t t9 = 356U;

	t9 = (((x217|x218)/x219)<<x220);

	if (t9 != 5859436U) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x221 = 867U;
	uint8_t x224 = 2U;
	int32_t t10 = -3677;

	t10 = (((x221|x222)/x223)<<x224);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x237 = -1LL;
	int32_t x238 = INT32_MAX;
	volatile uint64_t x239 = 2418LLU;
	uint16_t x240 = 0U;
	static uint64_t t11 = 8LLU;

	t11 = (((x237|x238)/x239)<<x240);

	if (t11 != 7628926415926200LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x381 = -1;
	uint32_t x384 = 24U;
	volatile uint32_t t12 = 21995005U;

	t12 = (((x381|x382)/x383)<<x384);

	if (t12 != 3690987520U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x417 = -25615086686015LL;
	uint16_t x418 = 13348U;
	static uint64_t x420 = 11LLU;
	uint64_t t13 = 163LLU;

	t13 = (((x417|x418)/x419)<<x420);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x466 = 862001509446679LL;
	static uint32_t x467 = UINT32_MAX;
	volatile int64_t t14 = -431970LL;

	t14 = (((x465|x466)/x467)<<x468);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x535 = INT64_MIN;
	static int8_t x536 = 0;

	t15 = (((x533|x534)/x535)<<x536);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x545 = UINT64_MAX;
	volatile int32_t x547 = INT32_MIN;
	uint16_t x548 = 18U;

	t16 = (((x545|x546)/x547)<<x548);

	if (t16 != 262144LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x570 = INT64_MAX;
	volatile uint16_t x571 = UINT16_MAX;
	static int8_t x572 = 1;
	static volatile int64_t t17 = -637243381371LL;

	t17 = (((x569|x570)/x571)<<x572);

	if (t17 != 281479271743488LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x597 = UINT64_MAX;
	static int8_t x598 = INT8_MIN;
	uint16_t x599 = 12U;
	volatile uint8_t x600 = 15U;
	uint64_t t18 = 26121949886478529LLU;

	t18 = (((x597|x598)/x599)<<x600);

	if (t18 != 12297829382473023488LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x603 = -1;
	volatile uint16_t x604 = 16U;
	static uint32_t t19 = 261U;

	t19 = (((x601|x602)/x603)<<x604);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x622 = UINT16_MAX;
	volatile int8_t x624 = 56;

	t20 = (((x621|x622)/x623)<<x624);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x641 = UINT64_MAX;
	static volatile int16_t x642 = INT16_MAX;
	int8_t x644 = 1;
	volatile uint64_t t21 = 112LLU;

	t21 = (((x641|x642)/x643)<<x644);

	if (t21 != 2LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x701 = 2U;
	uint64_t x702 = 306405325LLU;
	int8_t x703 = -1;

	t22 = (((x701|x702)/x703)<<x704);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x725 = INT64_MAX;
	volatile int16_t x727 = INT16_MIN;
	int32_t x728 = 10;
	static volatile int64_t t23 = -129556282895LL;

	t23 = (((x725|x726)/x727)<<x728);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x773 = INT8_MIN;
	volatile int16_t x775 = -8;
	static int8_t x776 = 2;
	int32_t t24 = 155329;

	t24 = (((x773|x774)/x775)<<x776);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x777 = INT8_MIN;
	volatile int64_t x778 = INT64_MIN;
	int8_t x779 = INT8_MIN;
	int8_t x780 = 1;
	volatile int64_t t25 = -1204427317346076LL;

	t25 = (((x777|x778)/x779)<<x780);

	if (t25 != 2LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x801 = 487515591U;
	uint64_t x802 = 14972866019340LLU;
	uint64_t x803 = 1LLU;
	volatile int8_t x804 = 3;

	t26 = (((x801|x802)/x803)<<x804);

	if (t26 != 119786284985976LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x865 = -1;
	static int8_t x866 = -1;
	volatile int16_t x867 = INT16_MIN;
	int16_t x868 = 1;
	volatile int32_t t27 = 2461;

	t27 = (((x865|x866)/x867)<<x868);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x881 = -1;
	static uint8_t x882 = UINT8_MAX;
	volatile int64_t x883 = -2727487270239931227LL;
	uint16_t x884 = 0U;
	int64_t t28 = 16517055371412LL;

	t28 = (((x881|x882)/x883)<<x884);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x909 = UINT32_MAX;
	int16_t x910 = INT16_MAX;
	static volatile int16_t x911 = INT16_MAX;
	static int8_t x912 = 5;

	t29 = (((x909|x910)/x911)<<x912);

	if (t29 != 4194432U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x941 = UINT32_MAX;
	uint64_t x943 = 3030673675LLU;
	volatile uint8_t x944 = 1U;

	t30 = (((x941|x942)/x943)<<x944);

	if (t30 != 2LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x1013 = 3683;
	int8_t x1014 = -1;
	static int8_t x1015 = INT8_MAX;
	static uint32_t x1016 = 0U;
	int32_t t31 = 1000492;

	t31 = (((x1013|x1014)/x1015)<<x1016);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x1049 = 997U;
	int16_t x1050 = INT16_MAX;
	static uint32_t x1051 = 2090049U;
	volatile int8_t x1052 = 5;
	uint32_t t32 = 19109U;

	t32 = (((x1049|x1050)/x1051)<<x1052);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1101 = INT8_MIN;
	int32_t x1102 = -2;
	volatile int16_t x1103 = -1;
	volatile int16_t x1104 = 29;

	t33 = (((x1101|x1102)/x1103)<<x1104);

	if (t33 != 1073741824) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x1129 = INT8_MIN;
	volatile int32_t x1130 = INT32_MIN;
	static uint16_t x1131 = UINT16_MAX;
	int32_t t34 = -50603;

	t34 = (((x1129|x1130)/x1131)<<x1132);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x1273 = 3077911LLU;
	static volatile int16_t x1275 = INT16_MIN;

	t35 = (((x1273|x1274)/x1275)<<x1276);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x1282 = UINT16_MAX;
	volatile int32_t t36 = 2474323;

	t36 = (((x1281|x1282)/x1283)<<x1284);

	if (t36 != 50) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x1341 = INT8_MIN;
	volatile uint16_t x1342 = UINT16_MAX;
	int64_t x1343 = INT64_MIN;
	int8_t x1344 = 28;
	static volatile int64_t t37 = 451870255611LL;

	t37 = (((x1341|x1342)/x1343)<<x1344);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x1349 = INT16_MAX;
	uint8_t x1352 = 10U;

	t38 = (((x1349|x1350)/x1351)<<x1352);

	if (t38 != 2199023255552LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x1377 = 90U;
	int64_t x1379 = INT64_MIN;
	static volatile uint8_t x1380 = 16U;

	t39 = (((x1377|x1378)/x1379)<<x1380);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x1389 = 226598U;
	volatile int32_t x1390 = INT32_MAX;
	int16_t x1391 = INT16_MIN;
	volatile uint16_t x1392 = 20U;
	volatile uint32_t t40 = 2126U;

	t40 = (((x1389|x1390)/x1391)<<x1392);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x1393 = 13391U;
	static int64_t x1394 = -108210437995LL;
	int8_t x1395 = -30;
	uint16_t x1396 = 1U;
	int64_t t41 = 1871490793987504258LL;

	t41 = (((x1393|x1394)/x1395)<<x1396);

	if (t41 != 7214028306LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x1405 = INT16_MIN;
	volatile int64_t x1406 = -1LL;
	static int16_t x1407 = INT16_MIN;
	static volatile int64_t t42 = -123130457LL;

	t42 = (((x1405|x1406)/x1407)<<x1408);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x1489 = 134U;
	uint8_t x1492 = 0U;
	static int64_t t43 = 13499966675640LL;

	t43 = (((x1489|x1490)/x1491)<<x1492);

	if (t43 != 2252912LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x1529 = 588888LL;
	int8_t x1530 = INT8_MAX;
	static uint32_t x1531 = 483936U;
	volatile int8_t x1532 = 10;
	volatile int64_t t44 = -65LL;

	t44 = (((x1529|x1530)/x1531)<<x1532);

	if (t44 != 1024LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1577 = INT8_MIN;
	int8_t x1578 = INT8_MIN;
	static uint64_t x1579 = UINT64_MAX;
	volatile uint8_t x1580 = 0U;
	uint64_t t45 = 324751138608975755LLU;

	t45 = (((x1577|x1578)/x1579)<<x1580);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x1585 = -1;
	volatile int32_t x1586 = -6;
	int16_t x1587 = INT16_MIN;

	t46 = (((x1585|x1586)/x1587)<<x1588);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x1589 = -1LL;
	int8_t x1590 = INT8_MAX;
	uint64_t x1591 = 128274445047LLU;
	uint16_t x1592 = 3U;
	volatile uint64_t t47 = 5683146LLU;

	t47 = (((x1589|x1590)/x1591)<<x1592);

	if (t47 != 1150454808LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x1597 = 36U;
	static uint16_t x1598 = 4U;
	int32_t x1599 = INT32_MAX;
	int64_t x1600 = 27LL;
	int32_t t48 = 234;

	t48 = (((x1597|x1598)/x1599)<<x1600);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x1605 = INT8_MAX;
	volatile uint64_t x1606 = 65412LLU;
	int8_t x1607 = -3;
	uint8_t x1608 = 2U;
	uint64_t t49 = 6037637249299777LLU;

	t49 = (((x1605|x1606)/x1607)<<x1608);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x1670 = -1;
	int32_t x1671 = 444621;
	static int16_t x1672 = 3;

	t50 = (((x1669|x1670)/x1671)<<x1672);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x1777 = 4688;
	uint8_t x1778 = 15U;
	volatile int32_t x1779 = INT32_MIN;
	int32_t x1780 = 25;
	int32_t t51 = -8;

	t51 = (((x1777|x1778)/x1779)<<x1780);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x1789 = 1953U;
	int16_t x1790 = 18;
	uint64_t x1791 = UINT64_MAX;
	int8_t x1792 = 18;
	uint64_t t52 = 13LLU;

	t52 = (((x1789|x1790)/x1791)<<x1792);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x1825 = -2380101145LL;
	volatile uint8_t x1826 = 21U;
	int32_t x1827 = -1;
	static int8_t x1828 = 16;
	volatile int64_t t53 = -136594677744LL;

	t53 = (((x1825|x1826)/x1827)<<x1828);

	if (t53 != 155982307590144LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x1945 = INT8_MAX;
	static int32_t x1947 = INT32_MAX;
	static volatile int32_t t54 = -354547;

	t54 = (((x1945|x1946)/x1947)<<x1948);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x1953 = UINT16_MAX;
	static int8_t x1954 = INT8_MIN;
	volatile int8_t x1955 = -1;
	uint8_t x1956 = 2U;
	static volatile int32_t t55 = 92211;

	t55 = (((x1953|x1954)/x1955)<<x1956);

	if (t55 != 4) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x1981 = INT32_MIN;
	int16_t x1982 = INT16_MIN;
	int32_t x1983 = -4051;
	int32_t x1984 = 8;
	int32_t t56 = -12572;

	t56 = (((x1981|x1982)/x1983)<<x1984);

	if (t56 != 2048) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x2045 = INT32_MIN;
	uint8_t x2046 = 32U;
	int64_t x2047 = INT64_MIN;
	static uint64_t x2048 = 6LLU;
	volatile int64_t t57 = 998024327864842LL;

	t57 = (((x2045|x2046)/x2047)<<x2048);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x2049 = INT16_MIN;
	uint64_t x2050 = UINT64_MAX;
	static uint8_t x2052 = 38U;
	static volatile uint64_t t58 = 2LLU;

	t58 = (((x2049|x2050)/x2051)<<x2052);

	if (t58 != 144119586122366976LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x2053 = -1;
	uint16_t x2056 = 27U;
	int64_t t59 = -45621720684092LL;

	t59 = (((x2053|x2054)/x2055)<<x2056);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x2062 = INT8_MAX;
	int16_t x2064 = 5;
	int64_t t60 = -642673LL;

	t60 = (((x2061|x2062)/x2063)<<x2064);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x2138 = -85403904;
	int64_t x2139 = INT64_MAX;
	int64_t t61 = 2392204859LL;

	t61 = (((x2137|x2138)/x2139)<<x2140);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x2189 = -1LL;
	int8_t x2190 = INT8_MIN;
	uint8_t x2191 = 6U;

	t62 = (((x2189|x2190)/x2191)<<x2192);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x2213 = INT8_MAX;
	int16_t x2214 = INT16_MIN;
	int8_t x2216 = 1;
	static volatile int32_t t63 = 123417614;

	t63 = (((x2213|x2214)/x2215)<<x2216);

	if (t63 != 65282) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x2237 = 1;
	uint32_t x2240 = 23U;
	uint64_t t64 = 48249607071LLU;

	t64 = (((x2237|x2238)/x2239)<<x2240);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x2246 = -55153896054LL;
	volatile int8_t x2247 = -8;
	int64_t t65 = 1883222673802LL;

	t65 = (((x2245|x2246)/x2247)<<x2248);

	if (t65 != 13784131588LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x2249 = INT16_MIN;
	uint16_t x2250 = 119U;
	int32_t x2251 = INT32_MAX;
	int16_t x2252 = 8;
	volatile int32_t t66 = -12225370;

	t66 = (((x2249|x2250)/x2251)<<x2252);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x2293 = INT8_MIN;
	uint32_t x2295 = UINT32_MAX;
	static uint32_t x2296 = 2U;
	uint32_t t67 = 11492U;

	t67 = (((x2293|x2294)/x2295)<<x2296);

	if (t67 != 4U) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x2341 = 28U;
	int8_t x2342 = INT8_MAX;
	volatile uint8_t x2343 = 9U;
	int8_t x2344 = 13;
	static int32_t t68 = 75767;

	t68 = (((x2341|x2342)/x2343)<<x2344);

	if (t68 != 114688) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x2369 = INT64_MIN;
	static uint16_t x2370 = UINT16_MAX;
	int8_t x2371 = INT8_MIN;
	static volatile int64_t t69 = 15596825165LL;

	t69 = (((x2369|x2370)/x2371)<<x2372);

	if (t69 != 4611686018427355136LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x2397 = -1;
	uint16_t x2398 = UINT16_MAX;
	volatile int64_t x2399 = INT64_MAX;
	static volatile int64_t t70 = 424193LL;

	t70 = (((x2397|x2398)/x2399)<<x2400);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x2401 = -1;
	int16_t x2402 = INT16_MAX;
	int8_t x2403 = INT8_MIN;
	static int8_t x2404 = 11;
	static int32_t t71 = -8652900;

	t71 = (((x2401|x2402)/x2403)<<x2404);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x2441 = UINT16_MAX;
	int8_t x2442 = 1;
	static volatile int8_t x2444 = 1;
	int32_t t72 = -19800;

	t72 = (((x2441|x2442)/x2443)<<x2444);

	if (t72 != 5460) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x2461 = INT64_MAX;
	static int32_t x2462 = -511;
	int64_t x2463 = -1LL;
	static uint8_t x2464 = 1U;

	t73 = (((x2461|x2462)/x2463)<<x2464);

	if (t73 != 2LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x2517 = INT32_MAX;
	int64_t x2518 = -1164309LL;
	static int16_t x2519 = INT16_MIN;
	volatile uint16_t x2520 = 15U;
	static int64_t t74 = -174557222LL;

	t74 = (((x2517|x2518)/x2519)<<x2520);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int32_t x2522 = INT32_MIN;
	uint64_t x2523 = UINT64_MAX;
	int8_t x2524 = 2;
	volatile uint64_t t75 = 201617LLU;

	t75 = (((x2521|x2522)/x2523)<<x2524);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x2537 = -55;
	int32_t x2538 = -1;
	int8_t x2540 = 0;
	uint32_t t76 = 825265U;

	t76 = (((x2537|x2538)/x2539)<<x2540);

	if (t76 != 1U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x2549 = INT64_MIN;
	uint16_t x2551 = UINT16_MAX;
	uint8_t x2552 = 0U;
	volatile int64_t t77 = -4315965754LL;

	t77 = (((x2549|x2550)/x2551)<<x2552);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x2578 = INT32_MIN;
	volatile int32_t x2579 = INT32_MIN;

	t78 = (((x2577|x2578)/x2579)<<x2580);

	if (t78 != 256) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x2581 = -29;
	static int8_t x2582 = INT8_MIN;
	static int32_t x2583 = -1;
	uint32_t x2584 = 11U;

	t79 = (((x2581|x2582)/x2583)<<x2584);

	if (t79 != 59392) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x2585 = INT32_MIN;
	static int8_t x2586 = INT8_MAX;
	uint64_t x2587 = 1686LLU;
	uint8_t x2588 = 1U;
	volatile uint64_t t80 = 44LLU;

	t80 = (((x2585|x2586)/x2587)<<x2588);

	if (t80 != 21882258685127008LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x2616 = 2U;
	static volatile int64_t t81 = -1512569437637959LL;

	t81 = (((x2613|x2614)/x2615)<<x2616);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int8_t x2617 = INT8_MIN;
	static uint64_t x2619 = UINT64_MAX;
	volatile uint8_t x2620 = 15U;
	uint64_t t82 = 0LLU;

	t82 = (((x2617|x2618)/x2619)<<x2620);

	if (t82 != 32768LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x2621 = -7;
	int32_t x2622 = -11861;
	int64_t x2623 = INT64_MIN;
	volatile uint16_t x2624 = 14U;
	volatile int64_t t83 = 14831314776579822LL;

	t83 = (((x2621|x2622)/x2623)<<x2624);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x2629 = INT64_MIN;
	static int16_t x2630 = -1;
	static uint64_t x2631 = UINT64_MAX;
	uint16_t x2632 = 1U;
	uint64_t t84 = 2568LLU;

	t84 = (((x2629|x2630)/x2631)<<x2632);

	if (t84 != 2LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x2633 = -7063894;
	int32_t x2635 = -42298981;
	uint16_t x2636 = 6U;

	t85 = (((x2633|x2634)/x2635)<<x2636);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x2698 = INT16_MIN;
	static uint16_t x2699 = 15724U;
	int16_t x2700 = 13;
	static int32_t t86 = 5;

	t86 = (((x2697|x2698)/x2699)<<x2700);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x2777 = INT32_MAX;
	static volatile uint32_t x2778 = 8106468U;
	volatile int64_t t87 = 6459079LL;

	t87 = (((x2777|x2778)/x2779)<<x2780);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x2813 = -1;
	static int64_t x2815 = INT64_MIN;
	volatile int8_t x2816 = 45;
	int64_t t88 = 11640915LL;

	t88 = (((x2813|x2814)/x2815)<<x2816);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x2821 = UINT32_MAX;
	int32_t x2823 = 48560950;
	volatile int64_t t89 = 0LL;

	t89 = (((x2821|x2822)/x2823)<<x2824);

	if (t89 != 1519471433216LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x2938 = UINT16_MAX;
	int8_t x2939 = INT8_MIN;
	int8_t x2940 = 1;

	t90 = (((x2937|x2938)/x2939)<<x2940);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x2953 = INT32_MAX;
	volatile int8_t x2954 = 17;
	uint8_t x2955 = UINT8_MAX;
	uint8_t x2956 = 2U;
	volatile int32_t t91 = 98085;

	t91 = (((x2953|x2954)/x2955)<<x2956);

	if (t91 != 33686016) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x3021 = 53068U;
	volatile int64_t x3022 = INT64_MAX;
	uint64_t x3024 = 1LLU;
	static int64_t t92 = 128052410378096314LL;

	t92 = (((x3021|x3022)/x3023)<<x3024);

	if (t92 != 1229782938247303440LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x3025 = INT32_MAX;
	volatile int8_t x3026 = INT8_MAX;
	uint64_t x3028 = 2LLU;
	volatile int32_t t93 = 3;

	t93 = (((x3025|x3026)/x3027)<<x3028);

	if (t93 != 4) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x3049 = INT8_MIN;
	static volatile int16_t x3050 = -5668;
	int64_t x3051 = INT64_MAX;
	static volatile int64_t t94 = 273961615387063LL;

	t94 = (((x3049|x3050)/x3051)<<x3052);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x3069 = 0;
	int32_t x3070 = -1;
	uint16_t x3072 = 22U;
	int32_t t95 = -148;

	t95 = (((x3069|x3070)/x3071)<<x3072);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x3097 = 42;
	static int64_t x3098 = 3LL;
	int16_t x3099 = INT16_MAX;
	int16_t x3100 = 3;
	int64_t t96 = 54537LL;

	t96 = (((x3097|x3098)/x3099)<<x3100);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x3137 = -20910;
	static int32_t x3138 = -1;
	static int8_t x3139 = -1;
	volatile uint8_t x3140 = 9U;
	static volatile int32_t t97 = -3164553;

	t97 = (((x3137|x3138)/x3139)<<x3140);

	if (t97 != 512) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x3157 = 3118918318LLU;
	int64_t x3159 = INT64_MIN;
	volatile uint16_t x3160 = 30U;
	uint64_t t98 = 36005764008167LLU;

	t98 = (((x3157|x3158)/x3159)<<x3160);

	if (t98 != 1073741824LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x3189 = UINT32_MAX;
	static int16_t x3191 = -3;
	uint8_t x3192 = 4U;
	volatile uint32_t t99 = 3218036U;

	t99 = (((x3189|x3190)/x3191)<<x3192);

	if (t99 != 16U) { NG(); } else { ; }
	
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

