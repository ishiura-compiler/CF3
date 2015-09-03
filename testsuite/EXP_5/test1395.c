#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x67 = INT64_MAX;
int16_t x145 = INT16_MIN;
static volatile int32_t x146 = -97528404;
volatile int32_t x240 = -1;
volatile int64_t x250 = -1LL;
static volatile int64_t x288 = -1LL;
static int8_t x464 = 1;
static int64_t x476 = -1LL;
volatile int16_t x494 = INT16_MIN;
uint32_t x566 = 527875845U;
int64_t t12 = 4560014LL;
int16_t x598 = 1;
uint32_t x599 = 238U;
int64_t x600 = -1LL;
int64_t t13 = 56LL;
static int8_t x649 = INT8_MIN;
static int8_t x650 = 2;
int16_t x661 = 1357;
int64_t t18 = 159868715LL;
int32_t x1233 = INT32_MIN;
int64_t x1234 = INT64_MIN;
int64_t t20 = 1LL;
int16_t x1409 = -11949;
int16_t x1410 = -109;
int8_t x1412 = 1;
volatile int8_t x1578 = INT8_MIN;
uint64_t x1579 = UINT64_MAX;
volatile int16_t x1580 = -1;
static volatile int32_t t27 = -2;
static int32_t x1653 = 5671;
int16_t x1783 = -185;
int32_t x1788 = -1;
static volatile uint32_t x2063 = UINT32_MAX;
int8_t x2088 = 1;
volatile int32_t x2137 = INT32_MIN;
uint64_t x2142 = 20528917633401LLU;
int32_t x2153 = -1;
static volatile int64_t x2154 = 0LL;
static uint16_t x2155 = UINT16_MAX;
int32_t x2165 = 415674;
int64_t t39 = 20554464LL;
volatile int16_t x2299 = INT16_MAX;
int16_t x2318 = INT16_MIN;
static uint16_t x2319 = 21U;
static int16_t x2410 = INT16_MIN;
uint8_t x2411 = 21U;
volatile int16_t x2433 = -1;
volatile int32_t t45 = -1972443;
int32_t x2537 = INT32_MIN;
static uint32_t x2674 = 349U;
uint8_t x2934 = 72U;
static int16_t x2952 = -1;
int32_t x3018 = INT32_MIN;
static int32_t x3085 = INT32_MAX;
uint32_t x3087 = 3U;
int32_t x3088 = -1;
int64_t x3212 = -1LL;
static uint8_t x3278 = 11U;
static volatile int64_t t59 = 50313LL;
uint8_t x3471 = 1U;
int16_t x3497 = INT16_MIN;
int32_t x3622 = INT32_MAX;
int16_t x3624 = -1;
int16_t x3785 = INT16_MIN;
int64_t x3787 = INT64_MAX;
static int8_t x3788 = -1;
volatile int32_t t64 = -232;
int32_t x3797 = -1;
volatile int16_t x3799 = INT16_MIN;
static int8_t x3811 = INT8_MIN;
int64_t x3930 = INT64_MIN;
int32_t t68 = -245220293;
int64_t x3934 = INT64_MIN;
static int16_t x4233 = -3006;
static int64_t x4542 = 1408LL;
volatile int32_t x4889 = 5501931;
int32_t x4892 = -1;
static volatile uint64_t x4942 = 3279862645918108LLU;
int64_t x4943 = INT64_MIN;
volatile int32_t t79 = -71074;
volatile int64_t x5396 = 1LL;
static volatile uint16_t x5448 = 1U;
uint64_t x5477 = 1520934790LLU;
static int16_t x5492 = -1;
int16_t x5516 = -1;
int32_t t89 = -150961;
volatile uint16_t x5810 = UINT16_MAX;
int8_t x5870 = INT8_MIN;
static uint8_t x6027 = UINT8_MAX;
uint32_t x6099 = UINT32_MAX;
volatile int64_t x6219 = -1LL;
static int8_t x6220 = -1;
uint64_t x6359 = UINT64_MAX;


void f0(void) {
	static uint32_t x57 = UINT32_MAX;
	int8_t x58 = 3;
	uint8_t x59 = UINT8_MAX;
	int16_t x60 = -1;
	uint32_t t0 = 0U;

	t0 = (x57/((x58<x59)/x60));

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x65 = INT32_MIN;
	int32_t x66 = INT32_MAX;
	static int8_t x68 = 1;
	int32_t t1 = INT32_MIN;

	t1 = (x65/((x66<x67)/x68));

	if (t1 != INT32_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x147 = 3U;
	int32_t x148 = -1;
	volatile int32_t t2 = -7474322;

	t2 = (x145/((x146<x147)/x148));

	if (t2 != 32768) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x213 = INT16_MAX;
	uint32_t x214 = 416U;
	static int16_t x215 = -1;
	int8_t x216 = -1;
	volatile int32_t t3 = -51723381;

	t3 = (x213/((x214<x215)/x216));

	if (t3 != -32767) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x237 = 60U;
	volatile int8_t x238 = INT8_MIN;
	int16_t x239 = INT16_MAX;
	static int32_t t4 = 8056048;

	t4 = (x237/((x238<x239)/x240));

	if (t4 != -60) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x249 = UINT8_MAX;
	uint16_t x251 = 7507U;
	static int32_t x252 = -1;
	volatile int32_t t5 = -33194;

	t5 = (x249/((x250<x251)/x252));

	if (t5 != -255) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x269 = INT8_MIN;
	int64_t x270 = INT64_MIN;
	static int32_t x271 = 36099;
	volatile int8_t x272 = -1;
	volatile int32_t t6 = 577369204;

	t6 = (x269/((x270<x271)/x272));

	if (t6 != 128) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x285 = 0U;
	volatile int8_t x286 = INT8_MIN;
	int16_t x287 = -1;
	volatile int64_t t7 = 145030LL;

	t7 = (x285/((x286<x287)/x288));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x317 = -1;
	uint8_t x318 = UINT8_MAX;
	volatile uint32_t x319 = 738U;
	volatile int32_t x320 = -1;
	int32_t t8 = -153690476;

	t8 = (x317/((x318<x319)/x320));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x461 = UINT32_MAX;
	static int64_t x462 = -3784126385401933LL;
	int16_t x463 = INT16_MIN;
	volatile uint32_t t9 = UINT32_MAX;

	t9 = (x461/((x462<x463)/x464));

	if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x473 = 8U;
	static volatile int64_t x474 = INT64_MIN;
	static int32_t x475 = INT32_MIN;
	volatile int64_t t10 = 26113220091LL;

	t10 = (x473/((x474<x475)/x476));

	if (t10 != -8LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x493 = 728U;
	uint16_t x495 = 32U;
	static volatile int16_t x496 = -1;
	int32_t t11 = -7489;

	t11 = (x493/((x494<x495)/x496));

	if (t11 != -728) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x565 = INT64_MAX;
	int32_t x567 = INT32_MIN;
	static int32_t x568 = -1;

	t12 = (x565/((x566<x567)/x568));

	if (t12 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x597 = INT32_MAX;

	t13 = (x597/((x598<x599)/x600));

	if (t13 != -2147483647LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x651 = 11U;
	static volatile int32_t x652 = -1;
	int32_t t14 = -5337;

	t14 = (x649/((x650<x651)/x652));

	if (t14 != 128) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x662 = 173U;
	volatile uint64_t x663 = 17945532356134877LLU;
	int64_t x664 = -1LL;
	int64_t t15 = 34098319LL;

	t15 = (x661/((x662<x663)/x664));

	if (t15 != -1357LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x709 = UINT64_MAX;
	int64_t x710 = INT64_MIN;
	volatile int8_t x711 = INT8_MIN;
	int64_t x712 = -1LL;
	static volatile uint64_t t16 = 67LLU;

	t16 = (x709/((x710<x711)/x712));

	if (t16 != 1LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x749 = INT32_MAX;
	volatile int16_t x750 = INT16_MIN;
	static int64_t x751 = INT64_MAX;
	static int32_t x752 = -1;
	int32_t t17 = 7102;

	t17 = (x749/((x750<x751)/x752));

	if (t17 != -2147483647) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x1137 = 2U;
	volatile uint8_t x1138 = 97U;
	uint64_t x1139 = 652923355924802LLU;
	int64_t x1140 = -1LL;

	t18 = (x1137/((x1138<x1139)/x1140));

	if (t18 != -2LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x1189 = UINT16_MAX;
	volatile uint8_t x1190 = 20U;
	int16_t x1191 = INT16_MAX;
	int32_t x1192 = -1;
	int32_t t19 = 8327065;

	t19 = (x1189/((x1190<x1191)/x1192));

	if (t19 != -65535) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x1235 = INT32_MIN;
	int64_t x1236 = -1LL;

	t20 = (x1233/((x1234<x1235)/x1236));

	if (t20 != 2147483648LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x1277 = INT8_MAX;
	int16_t x1278 = -7710;
	static int64_t x1279 = INT64_MAX;
	uint16_t x1280 = 1U;
	int32_t t21 = -737365592;

	t21 = (x1277/((x1278<x1279)/x1280));

	if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x1313 = 726U;
	uint32_t x1314 = 188534544U;
	uint32_t x1315 = UINT32_MAX;
	volatile int16_t x1316 = -1;
	uint32_t t22 = 62393526U;

	t22 = (x1313/((x1314<x1315)/x1316));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1373 = -1;
	uint8_t x1374 = UINT8_MAX;
	uint64_t x1375 = 221406654651504534LLU;
	int32_t x1376 = -1;
	int32_t t23 = -4496;

	t23 = (x1373/((x1374<x1375)/x1376));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x1411 = UINT64_MAX;
	static int32_t t24 = -489983;

	t24 = (x1409/((x1410<x1411)/x1412));

	if (t24 != -11949) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1413 = -1;
	static int64_t x1414 = INT64_MIN;
	volatile int64_t x1415 = 17708665798218LL;
	static int16_t x1416 = -1;
	int32_t t25 = -1242;

	t25 = (x1413/((x1414<x1415)/x1416));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1537 = -3;
	int8_t x1538 = INT8_MIN;
	volatile int64_t x1539 = 868797031161178LL;
	static int64_t x1540 = -1LL;
	int64_t t26 = 438362877601LL;

	t26 = (x1537/((x1538<x1539)/x1540));

	if (t26 != 3LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1577 = 371U;

	t27 = (x1577/((x1578<x1579)/x1580));

	if (t27 != -371) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1654 = INT64_MIN;
	int8_t x1655 = INT8_MIN;
	int64_t x1656 = -1LL;
	static int64_t t28 = -14055LL;

	t28 = (x1653/((x1654<x1655)/x1656));

	if (t28 != -5671LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1661 = -10031;
	int64_t x1662 = INT64_MIN;
	int8_t x1663 = -45;
	static int8_t x1664 = -1;
	int32_t t29 = -496061;

	t29 = (x1661/((x1662<x1663)/x1664));

	if (t29 != 10031) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x1781 = -1;
	int16_t x1782 = INT16_MIN;
	int8_t x1784 = -1;
	int32_t t30 = -1068;

	t30 = (x1781/((x1782<x1783)/x1784));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1785 = -1;
	uint8_t x1786 = 5U;
	volatile uint8_t x1787 = UINT8_MAX;
	volatile int32_t t31 = 22214584;

	t31 = (x1785/((x1786<x1787)/x1788));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x1845 = 1U;
	static volatile int64_t x1846 = INT64_MIN;
	int32_t x1847 = INT32_MIN;
	static volatile uint8_t x1848 = 1U;
	int32_t t32 = -73981910;

	t32 = (x1845/((x1846<x1847)/x1848));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x1857 = INT16_MAX;
	static volatile uint8_t x1858 = 58U;
	int16_t x1859 = INT16_MAX;
	int32_t x1860 = -1;
	volatile int32_t t33 = 11;

	t33 = (x1857/((x1858<x1859)/x1860));

	if (t33 != -32767) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x2061 = INT32_MIN;
	int16_t x2062 = INT16_MIN;
	static uint8_t x2064 = 1U;
	volatile int32_t t34 = INT32_MIN;

	t34 = (x2061/((x2062<x2063)/x2064));

	if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x2085 = INT8_MAX;
	uint32_t x2086 = 42845052U;
	int16_t x2087 = -1;
	volatile int32_t t35 = -575403877;

	t35 = (x2085/((x2086<x2087)/x2088));

	if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x2138 = 29;
	uint64_t x2139 = UINT64_MAX;
	int32_t x2140 = 1;
	static volatile int32_t t36 = INT32_MIN;

	t36 = (x2137/((x2138<x2139)/x2140));

	if (t36 != INT32_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x2141 = INT8_MAX;
	int64_t x2143 = INT64_MAX;
	uint64_t x2144 = 1LLU;
	uint64_t t37 = 3065508894LLU;

	t37 = (x2141/((x2142<x2143)/x2144));

	if (t37 != 127LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x2156 = -1LL;
	int64_t t38 = -608594962828869408LL;

	t38 = (x2153/((x2154<x2155)/x2156));

	if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x2166 = INT16_MIN;
	int16_t x2167 = INT16_MAX;
	int64_t x2168 = -1LL;

	t39 = (x2165/((x2166<x2167)/x2168));

	if (t39 != -415674LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x2289 = 0U;
	volatile uint8_t x2290 = 6U;
	int64_t x2291 = 4766209LL;
	int8_t x2292 = -1;
	volatile int32_t t40 = -246519;

	t40 = (x2289/((x2290<x2291)/x2292));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2297 = INT16_MIN;
	int32_t x2298 = INT32_MIN;
	static volatile int16_t x2300 = -1;
	volatile int32_t t41 = -213060424;

	t41 = (x2297/((x2298<x2299)/x2300));

	if (t41 != 32768) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x2317 = 60U;
	static int8_t x2320 = 1;
	static int32_t t42 = 44321;

	t42 = (x2317/((x2318<x2319)/x2320));

	if (t42 != 60) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x2397 = INT16_MIN;
	uint8_t x2398 = UINT8_MAX;
	uint32_t x2399 = UINT32_MAX;
	uint16_t x2400 = 1U;
	static int32_t t43 = -1595840;

	t43 = (x2397/((x2398<x2399)/x2400));

	if (t43 != -32768) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x2409 = UINT32_MAX;
	int64_t x2412 = -1LL;
	volatile int64_t t44 = -2429263739604109LL;

	t44 = (x2409/((x2410<x2411)/x2412));

	if (t44 != -4294967295LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x2434 = UINT8_MAX;
	int64_t x2435 = INT64_MAX;
	static int16_t x2436 = -1;

	t45 = (x2433/((x2434<x2435)/x2436));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x2538 = -379575073751214545LL;
	uint8_t x2539 = 65U;
	static int64_t x2540 = -1LL;
	int64_t t46 = 413395672047233LL;

	t46 = (x2537/((x2538<x2539)/x2540));

	if (t46 != 2147483648LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x2557 = 52;
	int64_t x2558 = INT64_MIN;
	uint16_t x2559 = UINT16_MAX;
	int8_t x2560 = 1;
	int32_t t47 = 396715;

	t47 = (x2557/((x2558<x2559)/x2560));

	if (t47 != 52) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x2593 = 101703109U;
	uint64_t x2594 = 3LLU;
	int64_t x2595 = INT64_MAX;
	static int32_t x2596 = -1;
	uint32_t t48 = 15459U;

	t48 = (x2593/((x2594<x2595)/x2596));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x2613 = INT8_MAX;
	volatile int16_t x2614 = INT16_MIN;
	volatile int8_t x2615 = INT8_MIN;
	volatile int64_t x2616 = -1LL;
	volatile int64_t t49 = 82839LL;

	t49 = (x2613/((x2614<x2615)/x2616));

	if (t49 != -127LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x2673 = -1;
	int8_t x2675 = -25;
	int8_t x2676 = -1;
	volatile int32_t t50 = -490836;

	t50 = (x2673/((x2674<x2675)/x2676));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x2933 = -1;
	int16_t x2935 = INT16_MAX;
	volatile int64_t x2936 = -1LL;
	int64_t t51 = 1990663303535177455LL;

	t51 = (x2933/((x2934<x2935)/x2936));

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x2949 = 2151726150LLU;
	static uint8_t x2950 = 2U;
	uint32_t x2951 = 36094U;
	volatile uint64_t t52 = 55087LLU;

	t52 = (x2949/((x2950<x2951)/x2952));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x2957 = INT64_MAX;
	volatile uint32_t x2958 = 867044340U;
	volatile int32_t x2959 = -1;
	volatile int16_t x2960 = -1;
	int64_t t53 = 5136LL;

	t53 = (x2957/((x2958<x2959)/x2960));

	if (t53 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x3017 = 135762LL;
	int64_t x3019 = 76431519668535LL;
	int8_t x3020 = 1;
	static int64_t t54 = -360LL;

	t54 = (x3017/((x3018<x3019)/x3020));

	if (t54 != 135762LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x3077 = -29952497;
	int32_t x3078 = INT32_MIN;
	uint16_t x3079 = UINT16_MAX;
	uint8_t x3080 = 1U;
	static volatile int32_t t55 = -21;

	t55 = (x3077/((x3078<x3079)/x3080));

	if (t55 != -29952497) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x3086 = INT64_MIN;
	volatile int32_t t56 = 20205;

	t56 = (x3085/((x3086<x3087)/x3088));

	if (t56 != -2147483647) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x3209 = INT32_MIN;
	uint8_t x3210 = 5U;
	uint8_t x3211 = UINT8_MAX;
	volatile int64_t t57 = 84298016450730LL;

	t57 = (x3209/((x3210<x3211)/x3212));

	if (t57 != 2147483648LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x3277 = INT64_MIN;
	int8_t x3279 = INT8_MAX;
	uint8_t x3280 = 1U;
	static volatile int64_t t58 = INT64_MIN;

	t58 = (x3277/((x3278<x3279)/x3280));

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x3293 = -1LL;
	static int16_t x3294 = 264;
	static uint32_t x3295 = 432U;
	int8_t x3296 = -1;

	t59 = (x3293/((x3294<x3295)/x3296));

	if (t59 != 1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x3349 = -7375451041LL;
	uint8_t x3350 = 120U;
	int32_t x3351 = INT32_MAX;
	volatile int8_t x3352 = -1;
	static int64_t t60 = -864996LL;

	t60 = (x3349/((x3350<x3351)/x3352));

	if (t60 != 7375451041LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x3469 = 77793460209LLU;
	static int32_t x3470 = -1043219492;
	static int16_t x3472 = -1;
	volatile uint64_t t61 = 7306660021101826744LLU;

	t61 = (x3469/((x3470<x3471)/x3472));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x3498 = INT8_MAX;
	volatile uint32_t x3499 = UINT32_MAX;
	int32_t x3500 = -1;
	static volatile int32_t t62 = 1;

	t62 = (x3497/((x3498<x3499)/x3500));

	if (t62 != 32768) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x3621 = INT16_MIN;
	uint64_t x3623 = UINT64_MAX;
	volatile int32_t t63 = 11872;

	t63 = (x3621/((x3622<x3623)/x3624));

	if (t63 != 32768) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x3786 = INT16_MIN;

	t64 = (x3785/((x3786<x3787)/x3788));

	if (t64 != 32768) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x3798 = 2U;
	static int8_t x3800 = 1;
	volatile int32_t t65 = 111;

	t65 = (x3797/((x3798<x3799)/x3800));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int32_t x3809 = 1;
	int32_t x3810 = INT32_MIN;
	int8_t x3812 = -1;
	static volatile int32_t t66 = 5;

	t66 = (x3809/((x3810<x3811)/x3812));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x3909 = 41U;
	uint16_t x3910 = 7002U;
	uint16_t x3911 = UINT16_MAX;
	static uint8_t x3912 = 1U;
	volatile int32_t t67 = -373;

	t67 = (x3909/((x3910<x3911)/x3912));

	if (t67 != 41) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x3929 = INT8_MIN;
	int8_t x3931 = -1;
	int16_t x3932 = -1;

	t68 = (x3929/((x3930<x3931)/x3932));

	if (t68 != 128) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x3933 = -1LL;
	static volatile int32_t x3935 = -1;
	int8_t x3936 = 1;
	volatile int64_t t69 = 46355608LL;

	t69 = (x3933/((x3934<x3935)/x3936));

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x4234 = -10636;
	uint16_t x4235 = UINT16_MAX;
	volatile int16_t x4236 = -1;
	volatile int32_t t70 = 515;

	t70 = (x4233/((x4234<x4235)/x4236));

	if (t70 != 3006) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x4249 = 1U;
	static uint64_t x4250 = 55194295LLU;
	uint32_t x4251 = UINT32_MAX;
	int8_t x4252 = -1;
	int32_t t71 = -64;

	t71 = (x4249/((x4250<x4251)/x4252));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x4541 = 8492557141814LLU;
	int64_t x4543 = 32200390672809LL;
	static int32_t x4544 = -1;
	uint64_t t72 = 15199336044130LLU;

	t72 = (x4541/((x4542<x4543)/x4544));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x4741 = 37LLU;
	uint8_t x4742 = 16U;
	static int16_t x4743 = INT16_MAX;
	int8_t x4744 = -1;
	volatile uint64_t t73 = 222290954153LLU;

	t73 = (x4741/((x4742<x4743)/x4744));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x4757 = INT32_MAX;
	int8_t x4758 = INT8_MIN;
	int8_t x4759 = -1;
	int8_t x4760 = -1;
	int32_t t74 = 1114;

	t74 = (x4757/((x4758<x4759)/x4760));

	if (t74 != -2147483647) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x4789 = 160U;
	static volatile int32_t x4790 = -1740337;
	volatile int32_t x4791 = -590444;
	int8_t x4792 = -1;
	static int32_t t75 = 444438;

	t75 = (x4789/((x4790<x4791)/x4792));

	if (t75 != -160) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x4890 = -1LL;
	uint8_t x4891 = 34U;
	volatile int32_t t76 = -56364;

	t76 = (x4889/((x4890<x4891)/x4892));

	if (t76 != -5501931) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x4941 = INT16_MIN;
	static int64_t x4944 = -1LL;
	volatile int64_t t77 = 64797481LL;

	t77 = (x4941/((x4942<x4943)/x4944));

	if (t77 != 32768LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x4969 = INT16_MIN;
	int64_t x4970 = INT64_MIN;
	volatile int64_t x4971 = -1LL;
	int32_t x4972 = -1;
	volatile int32_t t78 = 125382;

	t78 = (x4969/((x4970<x4971)/x4972));

	if (t78 != 32768) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x4973 = UINT16_MAX;
	int8_t x4974 = -1;
	uint8_t x4975 = 5U;
	int32_t x4976 = -1;

	t79 = (x4973/((x4974<x4975)/x4976));

	if (t79 != -65535) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x5073 = 32517784734373170LLU;
	int64_t x5074 = INT64_MIN;
	volatile int16_t x5075 = -1;
	volatile int32_t x5076 = -1;
	volatile uint64_t t80 = 1789422735762309LLU;

	t80 = (x5073/((x5074<x5075)/x5076));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x5097 = -1;
	int64_t x5098 = INT64_MIN;
	static volatile int8_t x5099 = INT8_MAX;
	uint8_t x5100 = 1U;
	int32_t t81 = -1326878;

	t81 = (x5097/((x5098<x5099)/x5100));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x5145 = UINT8_MAX;
	int8_t x5146 = -1;
	static int8_t x5147 = INT8_MAX;
	int16_t x5148 = -1;
	static volatile int32_t t82 = -4024;

	t82 = (x5145/((x5146<x5147)/x5148));

	if (t82 != -255) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x5173 = -111928391713466LL;
	static volatile uint8_t x5174 = 2U;
	static uint16_t x5175 = 73U;
	int16_t x5176 = -1;
	int64_t t83 = 37LL;

	t83 = (x5173/((x5174<x5175)/x5176));

	if (t83 != 111928391713466LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x5393 = UINT8_MAX;
	volatile uint64_t x5394 = 63286LLU;
	int32_t x5395 = INT32_MIN;
	int64_t t84 = -81531823673166LL;

	t84 = (x5393/((x5394<x5395)/x5396));

	if (t84 != 255LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x5445 = INT8_MIN;
	volatile int16_t x5446 = INT16_MIN;
	int64_t x5447 = -1LL;
	int32_t t85 = 6257;

	t85 = (x5445/((x5446<x5447)/x5448));

	if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x5478 = 0;
	volatile int16_t x5479 = 504;
	volatile int8_t x5480 = -1;
	uint64_t t86 = 346014LLU;

	t86 = (x5477/((x5478<x5479)/x5480));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x5489 = 25789023935LLU;
	int64_t x5490 = INT64_MIN;
	int8_t x5491 = 0;
	uint64_t t87 = 1001053LLU;

	t87 = (x5489/((x5490<x5491)/x5492));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x5513 = UINT8_MAX;
	volatile int32_t x5514 = -1;
	uint16_t x5515 = 2U;
	int32_t t88 = -159;

	t88 = (x5513/((x5514<x5515)/x5516));

	if (t88 != -255) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x5653 = -1;
	int32_t x5654 = INT32_MIN;
	static int64_t x5655 = 68750571368647LL;
	int16_t x5656 = -1;

	t89 = (x5653/((x5654<x5655)/x5656));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x5801 = -1;
	int8_t x5802 = INT8_MIN;
	int8_t x5803 = INT8_MAX;
	int16_t x5804 = -1;
	volatile int32_t t90 = 158;

	t90 = (x5801/((x5802<x5803)/x5804));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x5809 = 1;
	static uint32_t x5811 = UINT32_MAX;
	int8_t x5812 = -1;
	int32_t t91 = -1;

	t91 = (x5809/((x5810<x5811)/x5812));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x5869 = UINT64_MAX;
	uint32_t x5871 = UINT32_MAX;
	static int16_t x5872 = -1;
	static volatile uint64_t t92 = 139739709900536807LLU;

	t92 = (x5869/((x5870<x5871)/x5872));

	if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x6025 = 498962153;
	int32_t x6026 = -166778;
	volatile int32_t x6028 = -1;
	int32_t t93 = 411233578;

	t93 = (x6025/((x6026<x6027)/x6028));

	if (t93 != -498962153) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x6097 = 95U;
	volatile uint8_t x6098 = 0U;
	int16_t x6100 = -1;
	int32_t t94 = -1781527;

	t94 = (x6097/((x6098<x6099)/x6100));

	if (t94 != -95) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x6197 = UINT16_MAX;
	static int8_t x6198 = 3;
	int64_t x6199 = INT64_MAX;
	volatile uint8_t x6200 = 1U;
	static volatile int32_t t95 = 43183;

	t95 = (x6197/((x6198<x6199)/x6200));

	if (t95 != 65535) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x6217 = INT16_MAX;
	int16_t x6218 = INT16_MIN;
	volatile int32_t t96 = -3706170;

	t96 = (x6217/((x6218<x6219)/x6220));

	if (t96 != -32767) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x6357 = 52375732U;
	volatile int64_t x6358 = 4LL;
	volatile int64_t x6360 = -1LL;
	volatile int64_t t97 = -63398729683516964LL;

	t97 = (x6357/((x6358<x6359)/x6360));

	if (t97 != -52375732LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x6405 = INT8_MAX;
	int32_t x6406 = INT32_MAX;
	static volatile int64_t x6407 = 3085338532969702967LL;
	int16_t x6408 = -1;
	volatile int32_t t98 = -21;

	t98 = (x6405/((x6406<x6407)/x6408));

	if (t98 != -127) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x6533 = 0;
	int64_t x6534 = INT64_MIN;
	int8_t x6535 = INT8_MAX;
	static int64_t x6536 = -1LL;
	int64_t t99 = -15964021900LL;

	t99 = (x6533/((x6534<x6535)/x6536));

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

