#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x113 = 99U;
int64_t t1 = -14863427851435LL;
int8_t x433 = 1;
volatile int16_t x436 = -1;
volatile uint16_t x441 = 1764U;
int16_t x720 = -1;
static int32_t x721 = INT32_MIN;
uint16_t x731 = 1U;
static volatile int32_t t15 = 10064904;
static volatile int32_t t17 = 83;
int8_t x1107 = -1;
static int32_t x1147 = INT32_MIN;
volatile int32_t x1148 = INT32_MIN;
uint16_t x1166 = 0U;
uint64_t x1167 = UINT64_MAX;
volatile uint32_t x1268 = UINT32_MAX;
uint32_t x1402 = UINT32_MAX;
int16_t x1403 = -1;
uint32_t t24 = UINT32_MAX;
int8_t x1432 = -1;
int32_t x1517 = -1;
static volatile uint64_t x1518 = 128273LLU;
int64_t x1621 = -874151137536LL;
uint8_t x1702 = 2U;
int8_t x1703 = -1;
volatile int8_t x1776 = -1;
static int64_t x1934 = 22448061262LL;
volatile uint16_t x2066 = 1U;
int8_t x2093 = 5;
static uint64_t x2096 = UINT64_MAX;
uint32_t x2185 = 1145106U;
int16_t x2249 = 1870;
int8_t x2394 = 2;
int32_t x2395 = INT32_MIN;
volatile int32_t t45 = -69;
volatile uint8_t x2711 = 54U;
volatile int32_t t47 = -1;
volatile uint64_t x2810 = 384LLU;
int8_t x2941 = 0;
volatile uint8_t x2994 = UINT8_MAX;
int8_t x3285 = -1;
int64_t x3385 = INT64_MIN;
uint16_t x3414 = 13U;
int8_t x3415 = 3;
int8_t x3417 = INT8_MAX;
uint8_t x3420 = 16U;
static int32_t x3598 = 105110654;
static int64_t x3599 = -1LL;
static int16_t x3768 = -2;
static int64_t t62 = -7937397403435LL;
static uint16_t x3789 = UINT16_MAX;
static int64_t x3790 = INT64_MAX;
int16_t x3821 = -272;
volatile int8_t x3844 = INT8_MIN;
int8_t x3852 = 1;
int16_t x4049 = -1;
int32_t x4050 = 979;
volatile int32_t x4051 = INT32_MIN;
volatile int64_t x4083 = -1LL;
volatile uint32_t t73 = 127853U;
static int64_t x4209 = -44451901154LL;
uint64_t t77 = 6179263173911510LLU;
volatile int8_t x4343 = -1;
uint8_t x4371 = 1U;
int64_t x4372 = 18LL;
int32_t x4437 = INT32_MIN;
static int32_t t80 = 7;
volatile int32_t t83 = -370291;
int8_t x4761 = 5;
volatile int32_t t85 = -3425;
uint16_t x4901 = UINT16_MAX;
static volatile int32_t t87 = 656047326;
int64_t x5089 = 4032LL;
static volatile int64_t t89 = -64504047281LL;
int16_t x5274 = INT16_MIN;
static int32_t x5281 = 3529;
volatile int32_t t94 = 559577141;
volatile uint64_t x5335 = UINT64_MAX;
int64_t x5369 = 546124745303143632LL;
int8_t x5376 = -11;


void f0(void) {
	static int64_t x81 = INT64_MIN;
	volatile uint8_t x82 = UINT8_MAX;
	int32_t x83 = -1;
	static volatile uint64_t x84 = UINT64_MAX;
	volatile int64_t t0 = -499842018117231313LL;

	t0 = ((x81&x82)<<(x83^x84));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x114 = -15475545127232612LL;
	uint16_t x115 = 36U;
	uint16_t x116 = 2U;

	t1 = ((x113&x114)<<(x115^x116));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x145 = INT8_MIN;
	uint32_t x146 = 4U;
	uint64_t x147 = UINT64_MAX;
	int64_t x148 = -1LL;
	static uint32_t t2 = 522U;

	t2 = ((x145&x146)<<(x147^x148));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x257 = -15776;
	uint8_t x258 = 3U;
	static int16_t x259 = 1;
	int16_t x260 = 5;
	volatile int32_t t3 = 45;

	t3 = ((x257&x258)<<(x259^x260));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int16_t x434 = -2;
	int32_t x435 = -1;
	volatile int32_t t4 = 44610308;

	t4 = ((x433&x434)<<(x435^x436));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x442 = INT64_MAX;
	int8_t x443 = -1;
	uint32_t x444 = UINT32_MAX;
	volatile int64_t t5 = -395160699255381LL;

	t5 = ((x441&x442)<<(x443^x444));

	if (t5 != 1764LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x469 = INT64_MIN;
	uint32_t x470 = 171U;
	uint8_t x471 = 1U;
	int8_t x472 = 1;
	int64_t t6 = 22272LL;

	t6 = ((x469&x470)<<(x471^x472));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x485 = 1U;
	int8_t x486 = INT8_MAX;
	int32_t x487 = INT32_MIN;
	volatile int32_t x488 = INT32_MIN;
	volatile int32_t t7 = -1148;

	t7 = ((x485&x486)<<(x487^x488));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x557 = UINT64_MAX;
	int64_t x558 = -64LL;
	int8_t x559 = -1;
	int32_t x560 = -1;
	uint64_t t8 = 926209LLU;

	t8 = ((x557&x558)<<(x559^x560));

	if (t8 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x585 = 12853;
	uint64_t x586 = 2707LLU;
	int8_t x587 = INT8_MAX;
	int8_t x588 = INT8_MAX;
	volatile uint64_t t9 = 59708323719627LLU;

	t9 = ((x585&x586)<<(x587^x588));

	if (t9 != 529LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x589 = UINT16_MAX;
	static int64_t x590 = 181277322016546LL;
	int32_t x591 = -1;
	int64_t x592 = -1LL;
	volatile int64_t t10 = 127751397681081LL;

	t10 = ((x589&x590)<<(x591^x592));

	if (t10 != 30498LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x717 = 1;
	volatile int16_t x718 = INT16_MIN;
	uint32_t x719 = UINT32_MAX;
	static int32_t t11 = -22402437;

	t11 = ((x717&x718)<<(x719^x720));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x722 = UINT64_MAX;
	uint64_t x723 = UINT64_MAX;
	volatile int8_t x724 = -10;
	volatile uint64_t t12 = 9979380518495202LLU;

	t12 = ((x721&x722)<<(x723^x724));

	if (t12 != 18446742974197923840LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x729 = 16220244U;
	int64_t x730 = INT64_MIN;
	uint8_t x732 = 31U;
	volatile int64_t t13 = -65422259880LL;

	t13 = ((x729&x730)<<(x731^x732));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x789 = INT8_MIN;
	static uint16_t x790 = 2866U;
	int32_t x791 = -1;
	volatile int16_t x792 = -1;
	int32_t t14 = -61914;

	t14 = ((x789&x790)<<(x791^x792));

	if (t14 != 2816) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x881 = 0;
	static uint16_t x882 = 0U;
	int64_t x883 = INT64_MAX;
	int64_t x884 = INT64_MAX;

	t15 = ((x881&x882)<<(x883^x884));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x981 = INT64_MIN;
	static uint16_t x982 = UINT16_MAX;
	volatile uint32_t x983 = 0U;
	int8_t x984 = 29;
	int64_t t16 = -7273585482LL;

	t16 = ((x981&x982)<<(x983^x984));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1005 = INT8_MIN;
	volatile int32_t x1006 = 8417303;
	int8_t x1007 = -1;
	int64_t x1008 = -1LL;

	t17 = ((x1005&x1006)<<(x1007^x1008));

	if (t17 != 8417280) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x1105 = UINT16_MAX;
	int8_t x1106 = INT8_MIN;
	int8_t x1108 = -5;
	int32_t t18 = -1;

	t18 = ((x1105&x1106)<<(x1107^x1108));

	if (t18 != 1046528) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x1137 = INT16_MIN;
	int16_t x1138 = 13667;
	int8_t x1139 = 1;
	volatile int8_t x1140 = 1;
	volatile int32_t t19 = 0;

	t19 = ((x1137&x1138)<<(x1139^x1140));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x1145 = UINT16_MAX;
	static int16_t x1146 = INT16_MIN;
	volatile int32_t t20 = -837685659;

	t20 = ((x1145&x1146)<<(x1147^x1148));

	if (t20 != 32768) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x1165 = UINT16_MAX;
	volatile int32_t x1168 = -1;
	volatile int32_t t21 = 207107037;

	t21 = ((x1165&x1166)<<(x1167^x1168));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1213 = INT32_MIN;
	int64_t x1214 = 609679LL;
	volatile int8_t x1215 = -1;
	static uint64_t x1216 = UINT64_MAX;
	int64_t t22 = -4LL;

	t22 = ((x1213&x1214)<<(x1215^x1216));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x1265 = 15161U;
	int32_t x1266 = INT32_MIN;
	int8_t x1267 = -1;
	int32_t t23 = 27;

	t23 = ((x1265&x1266)<<(x1267^x1268));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x1401 = -1;
	uint64_t x1404 = UINT64_MAX;

	t24 = ((x1401&x1402)<<(x1403^x1404));

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint16_t x1429 = UINT16_MAX;
	int32_t x1430 = -1;
	int64_t x1431 = -1LL;
	int32_t t25 = -15;

	t25 = ((x1429&x1430)<<(x1431^x1432));

	if (t25 != 65535) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x1465 = 2;
	int8_t x1466 = -1;
	int32_t x1467 = INT32_MIN;
	static int32_t x1468 = INT32_MIN;
	int32_t t26 = 241385;

	t26 = ((x1465&x1466)<<(x1467^x1468));

	if (t26 != 2) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x1519 = 25U;
	static int64_t x1520 = 9LL;
	volatile uint64_t t27 = 79660260463LLU;

	t27 = ((x1517&x1518)<<(x1519^x1520));

	if (t27 != 8406499328LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x1541 = 209U;
	int32_t x1542 = INT32_MAX;
	uint16_t x1543 = 5U;
	static uint8_t x1544 = 4U;
	volatile uint32_t t28 = 1U;

	t28 = ((x1541&x1542)<<(x1543^x1544));

	if (t28 != 418U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1622 = 196LL;
	int8_t x1623 = -2;
	uint64_t x1624 = UINT64_MAX;
	volatile int64_t t29 = 422270229543650LL;

	t29 = ((x1621&x1622)<<(x1623^x1624));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x1701 = -1;
	uint32_t x1704 = UINT32_MAX;
	int32_t t30 = 0;

	t30 = ((x1701&x1702)<<(x1703^x1704));

	if (t30 != 2) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x1765 = 0;
	uint32_t x1766 = 371U;
	int16_t x1767 = INT16_MIN;
	int16_t x1768 = INT16_MIN;
	volatile uint32_t t31 = 2475U;

	t31 = ((x1765&x1766)<<(x1767^x1768));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x1773 = -12;
	uint64_t x1774 = UINT64_MAX;
	int8_t x1775 = -1;
	volatile uint64_t t32 = 243092315LLU;

	t32 = ((x1773&x1774)<<(x1775^x1776));

	if (t32 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1933 = 4274991985559280LLU;
	volatile int8_t x1935 = 0;
	volatile uint8_t x1936 = 26U;
	volatile uint64_t t33 = 1595LLU;

	t33 = ((x1933&x1934)<<(x1935^x1936));

	if (t33 != 1479441312338935808LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x1965 = 4U;
	int64_t x1966 = INT64_MAX;
	int16_t x1967 = -1;
	static int64_t x1968 = -1LL;
	volatile int64_t t34 = 8325790631LL;

	t34 = ((x1965&x1966)<<(x1967^x1968));

	if (t34 != 4LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x2049 = 258178694817573LLU;
	static uint32_t x2050 = 60173792U;
	volatile int32_t x2051 = -1;
	int32_t x2052 = -1;
	volatile uint64_t t35 = 1423757261267879846LLU;

	t35 = ((x2049&x2050)<<(x2051^x2052));

	if (t35 != 17048864LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x2065 = 11;
	volatile int16_t x2067 = 11;
	volatile uint32_t x2068 = 1U;
	int32_t t36 = -4;

	t36 = ((x2065&x2066)<<(x2067^x2068));

	if (t36 != 1024) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x2094 = UINT64_MAX;
	static int16_t x2095 = -61;
	volatile uint64_t t37 = 80923412583708049LLU;

	t37 = ((x2093&x2094)<<(x2095^x2096));

	if (t37 != 5764607523034234880LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2186 = 2036;
	int8_t x2187 = INT8_MIN;
	int8_t x2188 = INT8_MIN;
	volatile uint32_t t38 = 1435U;

	t38 = ((x2185&x2186)<<(x2187^x2188));

	if (t38 != 272U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2250 = -21;
	volatile int64_t x2251 = INT64_MIN;
	int64_t x2252 = INT64_MIN;
	volatile int32_t t39 = 246;

	t39 = ((x2249&x2250)<<(x2251^x2252));

	if (t39 != 1866) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2341 = 5;
	int16_t x2342 = 927;
	uint16_t x2343 = 0U;
	static int8_t x2344 = 25;
	volatile int32_t t40 = 335036;

	t40 = ((x2341&x2342)<<(x2343^x2344));

	if (t40 != 167772160) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x2349 = 143504652LLU;
	volatile uint32_t x2350 = 1206625U;
	volatile int16_t x2351 = -1;
	uint32_t x2352 = UINT32_MAX;
	static uint64_t t41 = 10694LLU;

	t41 = ((x2349&x2350)<<(x2351^x2352));

	if (t41 != 8448LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x2373 = 172LLU;
	int8_t x2374 = INT8_MIN;
	int32_t x2375 = -1;
	uint32_t x2376 = UINT32_MAX;
	uint64_t t42 = 61812670059171136LLU;

	t42 = ((x2373&x2374)<<(x2375^x2376));

	if (t42 != 128LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2393 = -411;
	int32_t x2396 = INT32_MIN;
	static int32_t t43 = 17405;

	t43 = ((x2393&x2394)<<(x2395^x2396));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x2401 = UINT64_MAX;
	int64_t x2402 = -418761335LL;
	int32_t x2403 = INT32_MIN;
	static int32_t x2404 = INT32_MIN;
	volatile uint64_t t44 = 469988LLU;

	t44 = ((x2401&x2402)<<(x2403^x2404));

	if (t44 != 18446744073290790281LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x2449 = 4U;
	int32_t x2450 = -1798165;
	static int8_t x2451 = INT8_MIN;
	int8_t x2452 = INT8_MIN;

	t45 = ((x2449&x2450)<<(x2451^x2452));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2613 = 37;
	volatile int32_t x2614 = INT32_MIN;
	int8_t x2615 = -13;
	uint64_t x2616 = UINT64_MAX;
	volatile int32_t t46 = 597735447;

	t46 = ((x2613&x2614)<<(x2615^x2616));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x2709 = -1;
	static int8_t x2710 = 7;
	static uint8_t x2712 = 35U;

	t47 = ((x2709&x2710)<<(x2711^x2712));

	if (t47 != 14680064) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x2809 = 63U;
	uint16_t x2811 = 0U;
	uint8_t x2812 = 24U;
	volatile uint64_t t48 = 82547475LLU;

	t48 = ((x2809&x2810)<<(x2811^x2812));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x2942 = 6U;
	static volatile uint64_t x2943 = UINT64_MAX;
	int16_t x2944 = -1;
	int32_t t49 = 3020;

	t49 = ((x2941&x2942)<<(x2943^x2944));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x2993 = INT32_MIN;
	int32_t x2995 = INT32_MIN;
	volatile int32_t x2996 = INT32_MIN;
	int32_t t50 = -510;

	t50 = ((x2993&x2994)<<(x2995^x2996));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x3029 = INT16_MIN;
	static uint32_t x3030 = UINT32_MAX;
	int64_t x3031 = INT64_MIN;
	static volatile int64_t x3032 = INT64_MIN;
	volatile uint32_t t51 = 2183U;

	t51 = ((x3029&x3030)<<(x3031^x3032));

	if (t51 != 4294934528U) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x3286 = 16U;
	int8_t x3287 = 5;
	volatile uint8_t x3288 = 31U;
	volatile int32_t t52 = -9097;

	t52 = ((x3285&x3286)<<(x3287^x3288));

	if (t52 != 1073741824) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x3309 = INT16_MAX;
	static volatile uint64_t x3310 = 5774LLU;
	volatile int64_t x3311 = -1LL;
	static int32_t x3312 = -5;
	uint64_t t53 = 2441913172LLU;

	t53 = ((x3309&x3310)<<(x3311^x3312));

	if (t53 != 92384LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x3373 = 5LLU;
	int16_t x3374 = 6792;
	uint64_t x3375 = UINT64_MAX;
	int32_t x3376 = -1;
	uint64_t t54 = 1290445429LLU;

	t54 = ((x3373&x3374)<<(x3375^x3376));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x3386 = INT16_MAX;
	static int32_t x3387 = -1;
	uint32_t x3388 = UINT32_MAX;
	volatile int64_t t55 = 2111LL;

	t55 = ((x3385&x3386)<<(x3387^x3388));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x3413 = INT8_MAX;
	uint8_t x3416 = 3U;
	int32_t t56 = 0;

	t56 = ((x3413&x3414)<<(x3415^x3416));

	if (t56 != 13) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x3418 = 2;
	static uint8_t x3419 = 0U;
	volatile int32_t t57 = 2673;

	t57 = ((x3417&x3418)<<(x3419^x3420));

	if (t57 != 131072) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x3569 = -1;
	uint16_t x3570 = 18223U;
	int16_t x3571 = -14;
	static int32_t x3572 = -1;
	volatile int32_t t58 = 165540;

	t58 = ((x3569&x3570)<<(x3571^x3572));

	if (t58 != 149282816) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x3597 = INT16_MAX;
	volatile uint64_t x3600 = UINT64_MAX;
	int32_t t59 = 7338687;

	t59 = ((x3597&x3598)<<(x3599^x3600));

	if (t59 != 23678) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x3689 = -1;
	volatile int8_t x3690 = 12;
	int8_t x3691 = -1;
	int8_t x3692 = -1;
	volatile int32_t t60 = 698;

	t60 = ((x3689&x3690)<<(x3691^x3692));

	if (t60 != 12) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int16_t x3741 = INT16_MAX;
	int8_t x3742 = 11;
	static int8_t x3743 = -1;
	static uint64_t x3744 = UINT64_MAX;
	int32_t t61 = 3;

	t61 = ((x3741&x3742)<<(x3743^x3744));

	if (t61 != 11) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x3765 = INT64_MIN;
	volatile uint16_t x3766 = 2U;
	static int8_t x3767 = -1;

	t62 = ((x3765&x3766)<<(x3767^x3768));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x3773 = 247482914745754109LLU;
	uint8_t x3774 = 26U;
	int8_t x3775 = -1;
	int32_t x3776 = -19;
	uint64_t t63 = 2874926264882498506LLU;

	t63 = ((x3773&x3774)<<(x3775^x3776));

	if (t63 != 6291456LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x3791 = -1;
	static volatile int16_t x3792 = -35;
	static int64_t t64 = 52989741409694039LL;

	t64 = ((x3789&x3790)<<(x3791^x3792));

	if (t64 != 1125882726973440LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x3822 = 394469830;
	static int64_t x3823 = -1LL;
	int32_t x3824 = -1;
	int32_t t65 = -179931;

	t65 = ((x3821&x3822)<<(x3823^x3824));

	if (t65 != 394469568) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x3829 = 1;
	static int64_t x3830 = -2798317047430278533LL;
	int16_t x3831 = 6;
	volatile int8_t x3832 = 26;
	volatile int64_t t66 = 9LL;

	t66 = ((x3829&x3830)<<(x3831^x3832));

	if (t66 != 268435456LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x3841 = 31U;
	static volatile uint32_t x3842 = 7U;
	int8_t x3843 = INT8_MIN;
	volatile uint32_t t67 = 233U;

	t67 = ((x3841&x3842)<<(x3843^x3844));

	if (t67 != 7U) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x3849 = INT16_MAX;
	static int8_t x3850 = INT8_MAX;
	uint8_t x3851 = 0U;
	volatile int32_t t68 = -340799;

	t68 = ((x3849&x3850)<<(x3851^x3852));

	if (t68 != 254) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x3893 = INT16_MIN;
	uint64_t x3894 = 26666306619516083LLU;
	int8_t x3895 = -1;
	volatile uint32_t x3896 = UINT32_MAX;
	volatile uint64_t t69 = 68814LLU;

	t69 = ((x3893&x3894)<<(x3895^x3896));

	if (t69 != 26666306619506688LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x3969 = UINT8_MAX;
	static int32_t x3970 = INT32_MIN;
	int8_t x3971 = INT8_MAX;
	int8_t x3972 = INT8_MAX;
	static volatile int32_t t70 = 16;

	t70 = ((x3969&x3970)<<(x3971^x3972));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x4017 = -1;
	uint64_t x4018 = UINT64_MAX;
	int8_t x4019 = -1;
	uint32_t x4020 = UINT32_MAX;
	static volatile uint64_t t71 = UINT64_MAX;

	t71 = ((x4017&x4018)<<(x4019^x4020));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x4052 = INT32_MIN;
	static volatile int32_t t72 = -5896644;

	t72 = ((x4049&x4050)<<(x4051^x4052));

	if (t72 != 979) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x4081 = 754326U;
	int32_t x4082 = 71497925;
	volatile int16_t x4084 = -1;

	t73 = ((x4081&x4082)<<(x4083^x4084));

	if (t73 != 163972U) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x4121 = UINT64_MAX;
	int32_t x4122 = INT32_MIN;
	int32_t x4123 = INT32_MAX;
	static volatile int32_t x4124 = INT32_MAX;
	uint64_t t74 = 4984861394356LLU;

	t74 = ((x4121&x4122)<<(x4123^x4124));

	if (t74 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x4181 = 0U;
	uint16_t x4182 = UINT16_MAX;
	volatile uint32_t x4183 = UINT32_MAX;
	static int8_t x4184 = -1;
	volatile int32_t t75 = 749973;

	t75 = ((x4181&x4182)<<(x4183^x4184));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x4210 = INT8_MAX;
	uint16_t x4211 = 3U;
	uint8_t x4212 = 11U;
	volatile int64_t t76 = 0LL;

	t76 = ((x4209&x4210)<<(x4211^x4212));

	if (t76 != 7680LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x4301 = INT16_MAX;
	uint64_t x4302 = 11696LLU;
	int16_t x4303 = -2;
	int8_t x4304 = -1;

	t77 = ((x4301&x4302)<<(x4303^x4304));

	if (t77 != 23392LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x4341 = INT8_MAX;
	volatile uint16_t x4342 = 15513U;
	static int16_t x4344 = -1;
	int32_t t78 = -43;

	t78 = ((x4341&x4342)<<(x4343^x4344));

	if (t78 != 25) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x4369 = 65LL;
	int8_t x4370 = INT8_MIN;
	volatile int64_t t79 = -33757775814269560LL;

	t79 = ((x4369&x4370)<<(x4371^x4372));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x4438 = 1U;
	int64_t x4439 = -1LL;
	static volatile int32_t x4440 = -1;

	t80 = ((x4437&x4438)<<(x4439^x4440));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x4477 = INT64_MIN;
	static volatile uint16_t x4478 = 7U;
	int8_t x4479 = -1;
	static int32_t x4480 = -1;
	volatile int64_t t81 = -2082053161066780725LL;

	t81 = ((x4477&x4478)<<(x4479^x4480));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x4609 = 2;
	int8_t x4610 = -63;
	uint32_t x4611 = UINT32_MAX;
	int16_t x4612 = -1;
	volatile int32_t t82 = 21101;

	t82 = ((x4609&x4610)<<(x4611^x4612));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x4709 = -1035931;
	int8_t x4710 = INT8_MAX;
	static int8_t x4711 = -6;
	uint64_t x4712 = UINT64_MAX;

	t83 = ((x4709&x4710)<<(x4711^x4712));

	if (t83 != 3232) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x4762 = -1;
	volatile int32_t x4763 = 1;
	int8_t x4764 = 3;
	int32_t t84 = 1562397;

	t84 = ((x4761&x4762)<<(x4763^x4764));

	if (t84 != 20) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x4837 = INT32_MIN;
	uint16_t x4838 = 3U;
	int32_t x4839 = INT32_MIN;
	int32_t x4840 = INT32_MIN;

	t85 = ((x4837&x4838)<<(x4839^x4840));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x4889 = INT8_MIN;
	uint32_t x4890 = UINT32_MAX;
	int8_t x4891 = INT8_MAX;
	volatile int8_t x4892 = INT8_MAX;
	volatile uint32_t t86 = 166278186U;

	t86 = ((x4889&x4890)<<(x4891^x4892));

	if (t86 != 4294967168U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x4902 = INT8_MIN;
	int16_t x4903 = -1;
	static int8_t x4904 = -1;

	t87 = ((x4901&x4902)<<(x4903^x4904));

	if (t87 != 65408) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x5090 = UINT64_MAX;
	static int32_t x5091 = 1;
	uint8_t x5092 = 0U;
	volatile uint64_t t88 = 462446547979421LLU;

	t88 = ((x5089&x5090)<<(x5091^x5092));

	if (t88 != 8064LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x5145 = INT16_MIN;
	int64_t x5146 = INT64_MAX;
	uint64_t x5147 = UINT64_MAX;
	static int32_t x5148 = -1;

	t89 = ((x5145&x5146)<<(x5147^x5148));

	if (t89 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x5157 = INT8_MAX;
	volatile uint8_t x5158 = 5U;
	int8_t x5159 = 9;
	uint16_t x5160 = 0U;
	int32_t t90 = 76880676;

	t90 = ((x5157&x5158)<<(x5159^x5160));

	if (t90 != 2560) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x5173 = UINT32_MAX;
	int16_t x5174 = -1;
	volatile int16_t x5175 = -1;
	int32_t x5176 = -1;
	volatile uint32_t t91 = UINT32_MAX;

	t91 = ((x5173&x5174)<<(x5175^x5176));

	if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x5261 = UINT16_MAX;
	static volatile uint32_t x5262 = 809U;
	int16_t x5263 = INT16_MIN;
	int16_t x5264 = INT16_MIN;
	static uint32_t t92 = 9839930U;

	t92 = ((x5261&x5262)<<(x5263^x5264));

	if (t92 != 809U) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x5273 = 699048LLU;
	volatile int16_t x5275 = -9;
	int16_t x5276 = -1;
	uint64_t t93 = 850245991409LLU;

	t93 = ((x5273&x5274)<<(x5275^x5276));

	if (t93 != 176160768LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x5282 = 0U;
	static int32_t x5283 = -1;
	int64_t x5284 = -1LL;

	t94 = ((x5281&x5282)<<(x5283^x5284));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x5333 = 10207U;
	volatile uint32_t x5334 = 33925U;
	static volatile int8_t x5336 = -1;
	uint32_t t95 = 3872757U;

	t95 = ((x5333&x5334)<<(x5335^x5336));

	if (t95 != 1157U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x5357 = INT64_MAX;
	static int8_t x5358 = INT8_MAX;
	int32_t x5359 = -1;
	int64_t x5360 = -1LL;
	volatile int64_t t96 = -3139406615302LL;

	t96 = ((x5357&x5358)<<(x5359^x5360));

	if (t96 != 127LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x5370 = -1;
	volatile uint64_t x5371 = UINT64_MAX;
	static int16_t x5372 = -1;
	int64_t t97 = 1LL;

	t97 = ((x5369&x5370)<<(x5371^x5372));

	if (t97 != 546124745303143632LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x5373 = 638445LL;
	int32_t x5374 = INT32_MAX;
	int8_t x5375 = -1;
	int64_t t98 = -4552779LL;

	t98 = ((x5373&x5374)<<(x5375^x5376));

	if (t98 != 653767680LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x5401 = 11U;
	int32_t x5402 = INT32_MIN;
	static int64_t x5403 = INT64_MIN;
	static int64_t x5404 = INT64_MIN;
	static int32_t t99 = 1;

	t99 = ((x5401&x5402)<<(x5403^x5404));

	if (t99 != 0) { NG(); } else { ; }
	
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

