#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x25 = INT8_MAX;
int16_t x52 = 0;
uint64_t x86 = UINT64_MAX;
uint32_t x109 = 7U;
static volatile int16_t x306 = INT16_MAX;
uint64_t x308 = 15LLU;
volatile int32_t t5 = -356147;
int8_t x368 = 8;
int8_t x402 = -63;
volatile int64_t x409 = INT64_MIN;
int64_t x442 = -1LL;
uint8_t x531 = UINT8_MAX;
static uint32_t t11 = 1542951936U;
uint64_t x633 = UINT64_MAX;
int32_t t13 = 0;
int16_t x653 = INT16_MAX;
volatile uint8_t x704 = 4U;
volatile uint64_t t15 = 182234643578619LLU;
uint64_t t16 = 14006064LLU;
uint64_t x829 = 133LLU;
int8_t x831 = -1;
int32_t t20 = 13351414;
int8_t x1016 = 1;
volatile int64_t t22 = -1010608071139221479LL;
int64_t x1021 = INT64_MAX;
static int16_t x1024 = 0;
static int8_t x1059 = 3;
uint32_t x1277 = UINT32_MAX;
volatile uint64_t t28 = 396LLU;
int8_t x1306 = INT8_MAX;
int32_t t29 = 293;
static volatile uint32_t x1337 = UINT32_MAX;
static uint16_t x1433 = 92U;
int64_t x1522 = -207947917819LL;
uint8_t x1524 = 2U;
int64_t x1564 = 1LL;
uint16_t x1641 = UINT16_MAX;
int8_t x1643 = INT8_MIN;
int32_t x1735 = INT32_MIN;
uint8_t x1800 = 14U;
int64_t x1854 = -1LL;
int8_t x1855 = 53;
int8_t x1934 = -1;
static int8_t x1936 = 1;
int8_t x1982 = 1;
volatile uint16_t x1983 = 1U;
uint32_t x2106 = 0U;
volatile int32_t t47 = -12;
int8_t x2316 = 1;
int64_t x2363 = INT64_MIN;
int64_t x2421 = INT64_MIN;
int8_t x2422 = INT8_MIN;
int8_t x2440 = 7;
int16_t x2569 = 25;
volatile uint64_t t54 = 1005849LLU;
uint8_t x2610 = UINT8_MAX;
uint8_t x2761 = UINT8_MAX;
volatile int16_t x2763 = INT16_MIN;
int8_t x2771 = INT8_MAX;
static uint32_t x2854 = 24806U;
int16_t x2856 = 9;
int8_t x3045 = INT8_MAX;
uint8_t x3046 = 29U;
volatile uint16_t x3047 = UINT16_MAX;
int8_t x3075 = INT8_MAX;
int8_t x3076 = 1;
uint64_t t61 = 15199351LLU;
volatile int64_t x3197 = -1LL;
static int16_t x3198 = INT16_MAX;
static int8_t x3199 = INT8_MIN;
uint64_t x3211 = 3390065329305686803LLU;
volatile int8_t x3324 = 1;
static int64_t x3333 = -1LL;
uint32_t x3513 = 11776U;
int8_t x3514 = 0;
uint64_t x3516 = 0LLU;
int8_t x3601 = INT8_MAX;
int64_t x3603 = INT64_MIN;
static volatile int64_t x3662 = -1LL;
uint8_t x3681 = 1U;
uint16_t x3682 = 1255U;
uint16_t x3684 = 7U;
int8_t x3773 = -1;
volatile uint64_t x3775 = 12931219533466550LLU;
int8_t x3935 = INT8_MIN;
static int64_t x3987 = INT64_MAX;
int8_t x4025 = INT8_MIN;
volatile int32_t x4027 = INT32_MIN;
static uint8_t x4028 = 3U;
static uint32_t t82 = 140262U;
uint8_t x4177 = 1U;
volatile int32_t t86 = -16;
int16_t x4295 = INT16_MAX;
volatile int64_t x4405 = 1097203597LL;
volatile int16_t x4406 = 1;
volatile uint8_t x4471 = 2U;
int16_t x4779 = INT16_MAX;
volatile uint8_t x4780 = 15U;
uint32_t t90 = 415419894U;
static volatile uint64_t t91 = 52932527513625869LLU;
uint32_t x4851 = 2U;
uint32_t t93 = UINT32_MAX;
uint32_t t94 = 11877U;
static uint8_t x5015 = 43U;
volatile uint64_t t95 = 1064278185086LLU;
int32_t x5018 = INT32_MIN;
static int8_t x5019 = 30;
int16_t x5051 = -2;
uint64_t t97 = 24983228156494744LLU;
int32_t x5058 = INT32_MIN;
static int8_t x5060 = 0;
int64_t x5069 = -212673LL;
uint64_t x5071 = UINT64_MAX;
int8_t x5072 = 0;


void f0(void) {
	int16_t x26 = 14632;
	volatile uint16_t x27 = UINT16_MAX;
	volatile uint8_t x28 = 0U;
	int32_t t0 = 1;

	t0 = ((x25-(x26/x27))<<x28);

	if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x49 = INT32_MAX;
	uint64_t x50 = UINT64_MAX;
	volatile uint64_t x51 = 31527207942170833LLU;
	volatile uint64_t t1 = 1014852564652LLU;

	t1 = ((x49-(x50/x51))<<x52);

	if (t1 != 2147483062LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x85 = -1;
	uint8_t x87 = 3U;
	uint16_t x88 = 3U;
	uint64_t t2 = 15730119585076997LLU;

	t2 = ((x85-(x86/x87))<<x88);

	if (t2 != 6148914691236517200LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x110 = 0;
	static uint16_t x111 = 1861U;
	uint8_t x112 = 2U;
	uint32_t t3 = 3U;

	t3 = ((x109-(x110/x111))<<x112);

	if (t3 != 28U) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x281 = UINT64_MAX;
	int16_t x282 = INT16_MIN;
	int64_t x283 = INT64_MIN;
	uint8_t x284 = 1U;
	static uint64_t t4 = 475054421548684225LLU;

	t4 = ((x281-(x282/x283))<<x284);

	if (t4 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x305 = 15;
	int32_t x307 = INT32_MAX;

	t5 = ((x305-(x306/x307))<<x308);

	if (t5 != 491520) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint64_t x365 = 12LLU;
	volatile uint8_t x366 = 60U;
	int64_t x367 = -3LL;
	volatile uint64_t t6 = 430LLU;

	t6 = ((x365-(x366/x367))<<x368);

	if (t6 != 8192LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x401 = 207;
	uint64_t x403 = 6431081936403391423LLU;
	static int16_t x404 = 1;
	volatile uint64_t t7 = 20694125223249LLU;

	t7 = ((x401-(x402/x403))<<x404);

	if (t7 != 410LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x410 = INT8_MAX;
	uint64_t x411 = 321563755104LLU;
	volatile uint8_t x412 = 32U;
	uint64_t t8 = 27LLU;

	t8 = ((x409-(x410/x411))<<x412);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x441 = 6099;
	uint8_t x443 = 1U;
	uint64_t x444 = 1LLU;
	volatile int64_t t9 = 3495LL;

	t9 = ((x441-(x442/x443))<<x444);

	if (t9 != 12200LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x449 = 3265463972LLU;
	int64_t x450 = -467836492685915824LL;
	volatile int64_t x451 = 2516577390668245LL;
	uint8_t x452 = 0U;
	uint64_t t10 = 458LLU;

	t10 = ((x449-(x450/x451))<<x452);

	if (t10 != 3265464157LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x529 = UINT32_MAX;
	uint16_t x530 = 4855U;
	int8_t x532 = 21;

	t11 = ((x529-(x530/x531))<<x532);

	if (t11 != 4253024256U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x634 = INT32_MIN;
	static int16_t x635 = INT16_MAX;
	uint16_t x636 = 1U;
	uint64_t t12 = 625LLU;

	t12 = ((x633-(x634/x635))<<x636);

	if (t12 != 131074LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x649 = 1;
	uint16_t x650 = UINT16_MAX;
	int32_t x651 = -1;
	static uint64_t x652 = 12LLU;

	t13 = ((x649-(x650/x651))<<x652);

	if (t13 != 268435456) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x654 = 6U;
	int8_t x655 = INT8_MAX;
	static int16_t x656 = 1;
	int32_t t14 = 286;

	t14 = ((x653-(x654/x655))<<x656);

	if (t14 != 65534) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x701 = 1;
	int64_t x702 = 3922LL;
	uint64_t x703 = 174443608195259LLU;

	t15 = ((x701-(x702/x703))<<x704);

	if (t15 != 16LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x729 = -1LL;
	uint64_t x730 = UINT64_MAX;
	static int8_t x731 = INT8_MIN;
	uint8_t x732 = 3U;

	t16 = ((x729-(x730/x731))<<x732);

	if (t16 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x801 = 32U;
	int64_t x802 = 556374747LL;
	int32_t x803 = -3;
	uint64_t x804 = 24LLU;
	volatile int64_t t17 = -6545949032688LL;

	t17 = ((x801-(x802/x803))<<x804);

	if (t17 != 3111473639325696LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x830 = 5U;
	int8_t x832 = 0;
	volatile uint64_t t18 = 9069557075625427LLU;

	t18 = ((x829-(x830/x831))<<x832);

	if (t18 != 133LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x929 = -6;
	uint32_t x930 = 56016U;
	static volatile int8_t x931 = -1;
	static volatile uint8_t x932 = 8U;
	volatile uint32_t t19 = 12265U;

	t19 = ((x929-(x930/x931))<<x932);

	if (t19 != 4294965760U) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x945 = 54U;
	int8_t x946 = INT8_MIN;
	int32_t x947 = -881206;
	int16_t x948 = 1;

	t20 = ((x945-(x946/x947))<<x948);

	if (t20 != 108) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x1009 = UINT32_MAX;
	uint64_t x1010 = UINT64_MAX;
	uint32_t x1011 = 86U;
	static volatile uint16_t x1012 = 1U;
	uint64_t t21 = 32832LLU;

	t21 = ((x1009-(x1010/x1011))<<x1012);

	if (t21 != 18017750034073682682LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1013 = 57103LL;
	volatile uint16_t x1014 = UINT16_MAX;
	int16_t x1015 = INT16_MIN;

	t22 = ((x1013-(x1014/x1015))<<x1016);

	if (t22 != 114208LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1022 = 51444995531035323LLU;
	int8_t x1023 = INT8_MIN;
	uint64_t t23 = 8164LLU;

	t23 = ((x1021-(x1022/x1023))<<x1024);

	if (t23 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x1057 = UINT16_MAX;
	int32_t x1058 = -1;
	uint8_t x1060 = 3U;
	volatile int32_t t24 = 50;

	t24 = ((x1057-(x1058/x1059))<<x1060);

	if (t24 != 524280) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x1205 = INT16_MIN;
	int8_t x1206 = -1;
	uint64_t x1207 = 164128795537426712LLU;
	static uint16_t x1208 = 10U;
	static volatile uint64_t t25 = 32525LLU;

	t25 = ((x1205-(x1206/x1207))<<x1208);

	if (t25 != 18446744073675882496LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1241 = 436LL;
	static int32_t x1242 = INT32_MAX;
	int32_t x1243 = -1;
	int16_t x1244 = 29;
	volatile int64_t t26 = 9375793067177LL;

	t26 = ((x1241-(x1242/x1243))<<x1244);

	if (t26 != 1152921738145693696LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1278 = 10U;
	int32_t x1279 = INT32_MAX;
	static int16_t x1280 = 1;
	uint32_t t27 = 3127U;

	t27 = ((x1277-(x1278/x1279))<<x1280);

	if (t27 != 4294967294U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1285 = INT64_MIN;
	volatile uint64_t x1286 = 1LLU;
	uint8_t x1287 = UINT8_MAX;
	int64_t x1288 = 0LL;

	t28 = ((x1285-(x1286/x1287))<<x1288);

	if (t28 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x1305 = 3570U;
	static int16_t x1307 = INT16_MAX;
	static uint8_t x1308 = 5U;

	t29 = ((x1305-(x1306/x1307))<<x1308);

	if (t29 != 114240) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1338 = INT16_MAX;
	uint64_t x1339 = UINT64_MAX;
	uint64_t x1340 = 2LLU;
	volatile uint64_t t30 = 2157773316131916LLU;

	t30 = ((x1337-(x1338/x1339))<<x1340);

	if (t30 != 17179869180LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1434 = 16U;
	static int64_t x1435 = INT64_MIN;
	int8_t x1436 = 19;
	int64_t t31 = -286557226846659749LL;

	t31 = ((x1433-(x1434/x1435))<<x1436);

	if (t31 != 48234496LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x1521 = 30;
	uint16_t x1523 = 12683U;
	static int64_t t32 = -1770323755770667LL;

	t32 = ((x1521-(x1522/x1523))<<x1524);

	if (t32 != 65583312LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x1561 = UINT64_MAX;
	int16_t x1562 = -1;
	uint64_t x1563 = 5263435LLU;
	volatile uint64_t t33 = 19092737474865081LLU;

	t33 = ((x1561-(x1562/x1563))<<x1564);

	if (t33 != 18446737064315848184LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint64_t x1573 = 45107928207834037LLU;
	int64_t x1574 = 225779431LL;
	volatile uint16_t x1575 = UINT16_MAX;
	static int8_t x1576 = 0;
	static uint64_t t34 = 4516865527753LLU;

	t34 = ((x1573-(x1574/x1575))<<x1576);

	if (t34 != 45107928207830592LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x1642 = 72U;
	static int16_t x1644 = 3;
	uint32_t t35 = 5232980U;

	t35 = ((x1641-(x1642/x1643))<<x1644);

	if (t35 != 524280U) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x1733 = -32;
	volatile uint32_t x1734 = 18101295U;
	static uint64_t x1736 = 13LLU;
	volatile uint32_t t36 = 705715U;

	t36 = ((x1733-(x1734/x1735))<<x1736);

	if (t36 != 4294705152U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x1797 = 178976LLU;
	int8_t x1798 = -1;
	volatile uint64_t x1799 = 10781LLU;
	uint64_t t37 = 62LLU;

	t37 = ((x1797-(x1798/x1799))<<x1800);

	if (t37 != 8859775609431572480LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x1845 = 110U;
	uint16_t x1846 = 1342U;
	volatile int64_t x1847 = 2418260364407LL;
	uint8_t x1848 = 20U;
	int64_t t38 = 206493411292803577LL;

	t38 = ((x1845-(x1846/x1847))<<x1848);

	if (t38 != 115343360LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1853 = 0LL;
	volatile uint8_t x1856 = 0U;
	volatile int64_t t39 = -16420LL;

	t39 = ((x1853-(x1854/x1855))<<x1856);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1893 = -1;
	int32_t x1894 = INT32_MIN;
	uint64_t x1895 = UINT64_MAX;
	int8_t x1896 = 6;
	static uint64_t t40 = 317693637052511869LLU;

	t40 = ((x1893-(x1894/x1895))<<x1896);

	if (t40 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x1933 = UINT16_MAX;
	uint64_t x1935 = UINT64_MAX;
	volatile uint64_t t41 = 72220LLU;

	t41 = ((x1933-(x1934/x1935))<<x1936);

	if (t41 != 131068LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x1937 = 128U;
	volatile int16_t x1938 = INT16_MAX;
	int32_t x1939 = -1;
	uint16_t x1940 = 0U;
	uint32_t t42 = 29707U;

	t42 = ((x1937-(x1938/x1939))<<x1940);

	if (t42 != 32895U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x1981 = 7497;
	int16_t x1984 = 8;
	volatile int32_t t43 = -4;

	t43 = ((x1981-(x1982/x1983))<<x1984);

	if (t43 != 1918976) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x2021 = -1;
	uint64_t x2022 = 686LLU;
	uint64_t x2023 = UINT64_MAX;
	volatile uint32_t x2024 = 9U;
	volatile uint64_t t44 = 6837713425095LLU;

	t44 = ((x2021-(x2022/x2023))<<x2024);

	if (t44 != 18446744073709551104LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x2037 = 1U;
	uint8_t x2038 = UINT8_MAX;
	int64_t x2039 = INT64_MIN;
	uint8_t x2040 = 0U;
	volatile int64_t t45 = 2LL;

	t45 = ((x2037-(x2038/x2039))<<x2040);

	if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x2105 = 2445446LL;
	int16_t x2107 = INT16_MAX;
	static uint32_t x2108 = 0U;
	volatile int64_t t46 = 34532015745254127LL;

	t46 = ((x2105-(x2106/x2107))<<x2108);

	if (t46 != 2445446LL) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x2117 = INT8_MAX;
	int8_t x2118 = INT8_MAX;
	int16_t x2119 = -1;
	static volatile uint16_t x2120 = 23U;

	t47 = ((x2117-(x2118/x2119))<<x2120);

	if (t47 != 2130706432) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x2153 = 9555U;
	uint8_t x2154 = UINT8_MAX;
	uint32_t x2155 = 24287293U;
	uint8_t x2156 = 0U;
	volatile uint32_t t48 = 3U;

	t48 = ((x2153-(x2154/x2155))<<x2156);

	if (t48 != 9555U) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x2313 = 44U;
	static uint64_t x2314 = 1864755150LLU;
	uint16_t x2315 = UINT16_MAX;
	static volatile uint64_t t49 = 4260323493087445286LLU;

	t49 = ((x2313-(x2314/x2315))<<x2316);

	if (t49 != 18446744073709494796LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x2361 = 6613;
	int64_t x2362 = INT64_MAX;
	int16_t x2364 = 1;
	int64_t t50 = -8182116510942LL;

	t50 = ((x2361-(x2362/x2363))<<x2364);

	if (t50 != 13226LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x2423 = UINT64_MAX;
	volatile uint8_t x2424 = 1U;
	uint64_t t51 = 85804873554758LLU;

	t51 = ((x2421-(x2422/x2423))<<x2424);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x2437 = 10550U;
	int32_t x2438 = -1;
	int16_t x2439 = INT16_MAX;
	uint32_t t52 = 185U;

	t52 = ((x2437-(x2438/x2439))<<x2440);

	if (t52 != 1350400U) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x2549 = UINT64_MAX;
	int64_t x2550 = INT64_MIN;
	volatile int32_t x2551 = INT32_MIN;
	uint8_t x2552 = 5U;
	volatile uint64_t t53 = 673988LLU;

	t53 = ((x2549-(x2550/x2551))<<x2552);

	if (t53 != 18446743936270598112LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x2570 = UINT16_MAX;
	volatile uint64_t x2571 = 5615295LLU;
	uint16_t x2572 = 2U;

	t54 = ((x2569-(x2570/x2571))<<x2572);

	if (t54 != 100LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x2609 = 50623U;
	uint32_t x2611 = 254U;
	static int16_t x2612 = 1;
	uint32_t t55 = 3U;

	t55 = ((x2609-(x2610/x2611))<<x2612);

	if (t55 != 101244U) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x2649 = UINT8_MAX;
	int16_t x2650 = INT16_MAX;
	uint32_t x2651 = 2586188U;
	static uint8_t x2652 = 1U;
	uint32_t t56 = 476788U;

	t56 = ((x2649-(x2650/x2651))<<x2652);

	if (t56 != 510U) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x2762 = UINT8_MAX;
	int8_t x2764 = 14;
	int32_t t57 = 1855;

	t57 = ((x2761-(x2762/x2763))<<x2764);

	if (t57 != 4177920) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x2769 = INT32_MIN;
	uint32_t x2770 = 30943U;
	static int8_t x2772 = 3;
	volatile uint32_t t58 = 4738575U;

	t58 = ((x2769-(x2770/x2771))<<x2772);

	if (t58 != 4294965352U) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x2853 = 42U;
	static uint8_t x2855 = 1U;
	uint32_t t59 = 1268896U;

	t59 = ((x2853-(x2854/x2855))<<x2856);

	if (t59 != 4282288128U) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x3048 = 1U;
	static volatile int32_t t60 = 11678;

	t60 = ((x3045-(x3046/x3047))<<x3048);

	if (t60 != 254) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x3073 = INT16_MIN;
	uint64_t x3074 = UINT64_MAX;

	t61 = ((x3073-(x3074/x3075))<<x3076);

	if (t61 != 18156244167036894716LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x3153 = UINT16_MAX;
	static int8_t x3154 = INT8_MIN;
	uint16_t x3155 = UINT16_MAX;
	volatile uint32_t x3156 = 12U;
	static int32_t t62 = 873348;

	t62 = ((x3153-(x3154/x3155))<<x3156);

	if (t62 != 268431360) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x3165 = -1;
	uint32_t x3166 = 9377851U;
	int16_t x3167 = -342;
	int8_t x3168 = 9;
	uint32_t t63 = 35545U;

	t63 = ((x3165-(x3166/x3167))<<x3168);

	if (t63 != 4294966784U) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x3200 = 8U;
	volatile int64_t t64 = -211410418LL;

	t64 = ((x3197-(x3198/x3199))<<x3200);

	if (t64 != 65024LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x3209 = -1324754LL;
	volatile int16_t x3210 = INT16_MIN;
	int8_t x3212 = 30;
	volatile uint64_t t65 = 1741559915160088447LLU;

	t65 = ((x3209-(x3210/x3211))<<x3212);

	if (t65 != 18445321624564531200LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x3321 = INT8_MAX;
	uint64_t x3322 = 13LLU;
	int32_t x3323 = INT32_MIN;
	static uint64_t t66 = 268580941261794487LLU;

	t66 = ((x3321-(x3322/x3323))<<x3324);

	if (t66 != 254LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x3334 = INT64_MAX;
	int32_t x3335 = INT32_MIN;
	int32_t x3336 = 2;
	static volatile int64_t t67 = -265984964444LL;

	t67 = ((x3333-(x3334/x3335))<<x3336);

	if (t67 != 17179869176LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x3381 = INT8_MAX;
	int8_t x3382 = INT8_MAX;
	static int64_t x3383 = -99681108683022746LL;
	int32_t x3384 = 1;
	volatile int64_t t68 = 1900895LL;

	t68 = ((x3381-(x3382/x3383))<<x3384);

	if (t68 != 254LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x3445 = 3760577LL;
	uint64_t x3446 = 30LLU;
	int64_t x3447 = -105079653556LL;
	uint16_t x3448 = 26U;
	static volatile uint64_t t69 = 46893119LLU;

	t69 = ((x3445-(x3446/x3447))<<x3448);

	if (t69 != 252368050454528LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x3515 = 12479U;
	volatile uint32_t t70 = 3733349U;

	t70 = ((x3513-(x3514/x3515))<<x3516);

	if (t70 != 11776U) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x3557 = UINT8_MAX;
	uint64_t x3558 = 5818051LLU;
	int16_t x3559 = -1;
	int8_t x3560 = 11;
	static uint64_t t71 = 38770721814LLU;

	t71 = ((x3557-(x3558/x3559))<<x3560);

	if (t71 != 522240LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint64_t x3597 = 448LLU;
	static int64_t x3598 = INT64_MIN;
	int64_t x3599 = 8LL;
	uint8_t x3600 = 13U;
	volatile uint64_t t72 = 418527330931LLU;

	t72 = ((x3597-(x3598/x3599))<<x3600);

	if (t72 != 3670016LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x3602 = UINT64_MAX;
	uint16_t x3604 = 19U;
	uint64_t t73 = 19015694405677LLU;

	t73 = ((x3601-(x3602/x3603))<<x3604);

	if (t73 != 66060288LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x3661 = 30;
	int32_t x3663 = -6627;
	static int32_t x3664 = 0;
	volatile int64_t t74 = 1352871191120662302LL;

	t74 = ((x3661-(x3662/x3663))<<x3664);

	if (t74 != 30LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x3683 = INT64_MIN;
	int64_t t75 = -47640LL;

	t75 = ((x3681-(x3682/x3683))<<x3684);

	if (t75 != 128LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x3737 = 23410LL;
	uint8_t x3738 = UINT8_MAX;
	volatile int64_t x3739 = INT64_MAX;
	int16_t x3740 = 32;
	int64_t t76 = 3247421LL;

	t76 = ((x3737-(x3738/x3739))<<x3740);

	if (t76 != 100545184399360LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x3774 = 25;
	volatile uint8_t x3776 = 15U;
	volatile uint64_t t77 = 7776LLU;

	t77 = ((x3773-(x3774/x3775))<<x3776);

	if (t77 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x3933 = UINT64_MAX;
	int32_t x3934 = -1;
	volatile int16_t x3936 = 2;
	static volatile uint64_t t78 = 67249316826107045LLU;

	t78 = ((x3933-(x3934/x3935))<<x3936);

	if (t78 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x3985 = INT16_MAX;
	uint64_t x3986 = 118LLU;
	uint8_t x3988 = 1U;
	uint64_t t79 = 12LLU;

	t79 = ((x3985-(x3986/x3987))<<x3988);

	if (t79 != 65534LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x4017 = 1;
	static volatile int8_t x4018 = 0;
	int32_t x4019 = 164210833;
	static uint16_t x4020 = 6U;
	volatile int32_t t80 = -191601;

	t80 = ((x4017-(x4018/x4019))<<x4020);

	if (t80 != 64) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x4026 = UINT64_MAX;
	volatile uint64_t t81 = 499994109603LLU;

	t81 = ((x4025-(x4026/x4027))<<x4028);

	if (t81 != 18446744073709550584LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x4093 = 1650U;
	volatile uint32_t x4094 = 161700947U;
	uint32_t x4095 = 60U;
	static uint16_t x4096 = 5U;

	t82 = ((x4093-(x4094/x4095))<<x4096);

	if (t82 != 4208779616U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x4161 = -129285LL;
	int32_t x4162 = -70191;
	uint64_t x4163 = UINT64_MAX;
	uint8_t x4164 = 19U;
	uint64_t t83 = 15582LLU;

	t83 = ((x4161-(x4162/x4163))<<x4164);

	if (t83 != 18446744005926977536LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x4178 = INT8_MIN;
	int64_t x4179 = 1839653LL;
	uint16_t x4180 = 9U;
	volatile int64_t t84 = 2006449115LL;

	t84 = ((x4177-(x4178/x4179))<<x4180);

	if (t84 != 512LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int64_t x4277 = 4074LL;
	static int32_t x4278 = INT32_MAX;
	int64_t x4279 = INT64_MIN;
	uint32_t x4280 = 1U;
	static int64_t t85 = -182443LL;

	t85 = ((x4277-(x4278/x4279))<<x4280);

	if (t85 != 8148LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x4285 = 223;
	static int8_t x4286 = INT8_MIN;
	volatile int32_t x4287 = INT32_MIN;
	int8_t x4288 = 2;

	t86 = ((x4285-(x4286/x4287))<<x4288);

	if (t86 != 892) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x4293 = 1U;
	static volatile int32_t x4294 = -1;
	static uint8_t x4296 = 7U;
	int32_t t87 = -104;

	t87 = ((x4293-(x4294/x4295))<<x4296);

	if (t87 != 128) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x4407 = INT8_MIN;
	volatile uint8_t x4408 = 14U;
	int64_t t88 = -71552LL;

	t88 = ((x4405-(x4406/x4407))<<x4408);

	if (t88 != 17976583733248LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x4469 = 43U;
	uint64_t x4470 = 313887298760609LLU;
	volatile int64_t x4472 = 12LL;
	static uint64_t t89 = 33895095457287LLU;

	t89 = ((x4469-(x4470/x4471))<<x4472);

	if (t89 != 17803902885848002560LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x4777 = 921942U;
	int16_t x4778 = INT16_MIN;

	t90 = ((x4777-(x4778/x4779))<<x4780);

	if (t90 != 145457152U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x4781 = INT16_MAX;
	volatile uint64_t x4782 = UINT64_MAX;
	volatile int32_t x4783 = -2090;
	static volatile uint8_t x4784 = 3U;

	t91 = ((x4781-(x4782/x4783))<<x4784);

	if (t91 != 262128LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x4849 = INT16_MAX;
	volatile int8_t x4850 = INT8_MAX;
	static int16_t x4852 = 1;
	uint32_t t92 = 33038U;

	t92 = ((x4849-(x4850/x4851))<<x4852);

	if (t92 != 65408U) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x4905 = UINT32_MAX;
	uint16_t x4906 = 10U;
	static int8_t x4907 = INT8_MIN;
	uint8_t x4908 = 0U;

	t93 = ((x4905-(x4906/x4907))<<x4908);

	if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x4993 = 45U;
	int16_t x4994 = INT16_MIN;
	static uint32_t x4995 = 11225314U;
	uint8_t x4996 = 0U;

	t94 = ((x4993-(x4994/x4995))<<x4996);

	if (t94 != 4294966959U) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x5013 = UINT16_MAX;
	uint64_t x5014 = UINT64_MAX;
	uint8_t x5016 = 11U;

	t95 = ((x5013-(x5014/x5015))<<x5016);

	if (t95 != 6863904771747074048LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x5017 = 633U;
	volatile int16_t x5020 = 1;
	volatile int32_t t96 = 365;

	t96 = ((x5017-(x5018/x5019))<<x5020);

	if (t96 != 143166842) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x5049 = -1;
	static uint64_t x5050 = 7570262778LLU;
	uint8_t x5052 = 34U;

	t97 = ((x5049-(x5050/x5051))<<x5052);

	if (t97 != 18446744056529682432LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x5057 = 247638969LLU;
	volatile int64_t x5059 = INT64_MAX;
	uint64_t t98 = 2981516544813320LLU;

	t98 = ((x5057-(x5058/x5059))<<x5060);

	if (t98 != 247638969LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x5070 = 1588238864159553LLU;
	volatile uint64_t t99 = 75LLU;

	t99 = ((x5069-(x5070/x5071))<<x5072);

	if (t99 != 18446744073709338943LLU) { NG(); } else { ; }
	
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

