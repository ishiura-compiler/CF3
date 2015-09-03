#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x129 = INT64_MAX;
uint8_t x412 = 18U;
volatile int32_t x447 = -1;
static uint64_t x609 = 135260553042LLU;
volatile int8_t x611 = INT8_MAX;
uint64_t t6 = 1LLU;
static uint8_t x733 = 118U;
int16_t x735 = INT16_MAX;
int32_t t8 = -114444733;
volatile int32_t x853 = INT32_MIN;
volatile int32_t x903 = INT32_MIN;
volatile uint64_t t10 = 170958LLU;
int16_t x1011 = -1;
volatile int64_t t12 = -2485776525LL;
int8_t x1035 = -1;
int64_t x1105 = -274505552297LL;
volatile int64_t x1107 = INT64_MIN;
int32_t x1120 = 3;
volatile int32_t x1137 = -932372336;
volatile uint64_t t16 = 53557629LLU;
int8_t x1147 = -44;
int8_t x1148 = 1;
uint64_t x1161 = 2435085894898061734LLU;
int16_t x1173 = -15;
volatile uint64_t x1175 = UINT64_MAX;
int64_t t20 = 29875295685280LL;
volatile uint32_t x1390 = UINT32_MAX;
static int64_t x1392 = 1LL;
int8_t x1597 = 18;
uint64_t t26 = 59097747400054LLU;
uint16_t x1839 = 2U;
volatile int32_t t28 = -205269787;
static uint8_t x1860 = 7U;
volatile int32_t x1861 = -1;
int32_t x1863 = 58550152;
int8_t x1898 = INT8_MIN;
volatile int32_t t31 = 1557;
int16_t x2015 = INT16_MAX;
int8_t x2016 = 0;
static volatile int32_t t34 = 3761074;
int8_t x2182 = 13;
static int64_t x2259 = INT64_MAX;
int8_t x2260 = 1;
int64_t x2265 = -1LL;
volatile int32_t x2266 = -408391797;
uint8_t x2332 = 4U;
int64_t t41 = -3773421064209497LL;
volatile int8_t x2454 = -1;
uint64_t x2549 = 340LLU;
int64_t x2617 = -14LL;
uint16_t x2618 = UINT16_MAX;
volatile uint32_t x2625 = 2U;
int8_t x2627 = 8;
volatile int8_t x2630 = -1;
int8_t x2684 = 0;
volatile int16_t x2798 = INT16_MIN;
uint64_t x2799 = UINT64_MAX;
uint32_t x2805 = UINT32_MAX;
static int64_t x2807 = -1LL;
static int8_t x2808 = 1;
volatile int32_t t55 = -1;
uint8_t x2864 = 0U;
volatile int32_t t57 = -28357045;
volatile uint32_t x2936 = 16U;
int32_t x3091 = 631375343;
uint8_t x3093 = UINT8_MAX;
int16_t x3096 = 0;
static int8_t x3100 = 14;
int16_t x3104 = 33;
uint8_t x3212 = 44U;
int64_t x3225 = 71184942923328687LL;
int64_t x3229 = INT64_MAX;
int32_t x3265 = INT32_MAX;
int64_t t70 = 352991LL;
int16_t x3449 = -4;
int32_t x3451 = INT32_MAX;
int32_t t74 = 9979431;
static volatile int32_t x3481 = INT32_MIN;
static int8_t x3629 = INT8_MIN;
static uint8_t x3632 = 1U;
uint8_t x3662 = 1U;
static int16_t x3759 = INT16_MIN;
static volatile int64_t x3769 = 951542LL;
int64_t t80 = 27068966877216LL;
int64_t x3779 = 12894LL;
int64_t x3844 = 43LL;
volatile uint64_t t83 = 279LLU;
static uint32_t x4047 = UINT32_MAX;
volatile int8_t x4126 = -1;
volatile uint64_t x4127 = 75796728631066029LLU;
int8_t x4128 = 0;
volatile uint64_t t90 = 458672329LLU;
volatile uint8_t x4169 = 1U;
int64_t x4173 = 0LL;
static int64_t x4233 = -1LL;
static uint16_t x4281 = UINT16_MAX;
uint64_t x4283 = 600586671416LLU;
int8_t x4301 = 5;
static volatile uint64_t x4317 = 35554368150LLU;
uint16_t x4349 = 42U;
static uint32_t x4385 = 1272516364U;


void f0(void) {
	static uint32_t x45 = 20U;
	int8_t x46 = -1;
	uint64_t x47 = UINT64_MAX;
	uint16_t x48 = 11U;
	volatile uint64_t t0 = 1257260836458874LLU;

	t0 = ((x45&(x46+x47))>>x48);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x81 = UINT64_MAX;
	int16_t x82 = -1;
	int8_t x83 = -1;
	uint8_t x84 = 37U;
	static volatile uint64_t t1 = 464469319745191570LLU;

	t1 = ((x81&(x82+x83))>>x84);

	if (t1 != 134217727LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x130 = 83677990;
	uint32_t x131 = UINT32_MAX;
	uint64_t x132 = 3LLU;
	int64_t t2 = 2116793503440285405LL;

	t2 = ((x129&(x130+x131))>>x132);

	if (t2 != 10459748LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x409 = UINT64_MAX;
	volatile int64_t x410 = INT64_MIN;
	volatile int8_t x411 = INT8_MAX;
	volatile uint64_t t3 = 0LLU;

	t3 = ((x409&(x410+x411))>>x412);

	if (t3 != 35184372088832LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x445 = -1LL;
	uint16_t x446 = 5182U;
	static int32_t x448 = 0;
	volatile int64_t t4 = 1812417742LL;

	t4 = ((x445&(x446+x447))>>x448);

	if (t4 != 5181LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x601 = INT8_MAX;
	uint16_t x602 = 564U;
	int32_t x603 = -1;
	int8_t x604 = 1;
	int32_t t5 = 2357;

	t5 = ((x601&(x602+x603))>>x604);

	if (t5 != 25) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x610 = INT8_MAX;
	uint8_t x612 = 21U;

	t6 = ((x609&(x610+x611))>>x612);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x685 = 1LL;
	int64_t x686 = INT64_MIN;
	int8_t x687 = 45;
	int32_t x688 = 14;
	int64_t t7 = -255895220141548859LL;

	t7 = ((x685&(x686+x687))>>x688);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x734 = -1;
	int8_t x736 = 2;

	t8 = ((x733&(x734+x735))>>x736);

	if (t8 != 29) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x854 = UINT16_MAX;
	uint16_t x855 = 9U;
	uint16_t x856 = 11U;
	volatile int32_t t9 = 23203887;

	t9 = ((x853&(x854+x855))>>x856);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x901 = -7;
	static volatile uint64_t x902 = 17LLU;
	int8_t x904 = 59;

	t10 = ((x901&(x902+x903))>>x904);

	if (t10 != 31LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x961 = 352U;
	int16_t x962 = -1;
	uint8_t x963 = UINT8_MAX;
	static uint8_t x964 = 14U;
	static int32_t t11 = -218349461;

	t11 = ((x961&(x962+x963))>>x964);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x1009 = INT64_MAX;
	uint32_t x1010 = UINT32_MAX;
	uint16_t x1012 = 9U;

	t12 = ((x1009&(x1010+x1011))>>x1012);

	if (t12 != 8388607LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x1033 = 59U;
	static volatile uint64_t x1034 = UINT64_MAX;
	volatile uint8_t x1036 = 0U;
	uint64_t t13 = 678LLU;

	t13 = ((x1033&(x1034+x1035))>>x1036);

	if (t13 != 58LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x1106 = 517269540LLU;
	static uint16_t x1108 = 1U;
	uint64_t t14 = 917670LLU;

	t14 = ((x1105&(x1106+x1107))>>x1108);

	if (t14 != 4611686018612483074LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x1117 = -3;
	int32_t x1118 = -1;
	volatile uint8_t x1119 = UINT8_MAX;
	volatile int32_t t15 = -2092798;

	t15 = ((x1117&(x1118+x1119))>>x1120);

	if (t15 != 31) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x1138 = UINT64_MAX;
	static volatile int8_t x1139 = 0;
	int32_t x1140 = 1;

	t16 = ((x1137&(x1138+x1139))>>x1140);

	if (t16 != 9223372036388589640LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x1145 = 2929;
	int16_t x1146 = INT16_MAX;
	static int32_t t17 = -2038712;

	t17 = ((x1145&(x1146+x1147))>>x1148);

	if (t17 != 1448) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x1162 = INT64_MIN;
	int16_t x1163 = 0;
	uint8_t x1164 = 7U;
	volatile uint64_t t18 = 1568092129LLU;

	t18 = ((x1161&(x1162+x1163))>>x1164);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x1174 = -1;
	volatile int8_t x1176 = 1;
	static volatile uint64_t t19 = 11LLU;

	t19 = ((x1173&(x1174+x1175))>>x1176);

	if (t19 != 9223372036854775800LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x1269 = INT64_MIN;
	static volatile uint16_t x1270 = 1000U;
	int16_t x1271 = -1;
	int8_t x1272 = 3;

	t20 = ((x1269&(x1270+x1271))>>x1272);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1369 = -24;
	uint64_t x1370 = UINT64_MAX;
	int16_t x1371 = INT16_MAX;
	uint8_t x1372 = 7U;
	uint64_t t21 = 11957679978708LLU;

	t21 = ((x1369&(x1370+x1371))>>x1372);

	if (t21 != 255LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x1381 = -1;
	int8_t x1382 = -1;
	int64_t x1383 = 1734LL;
	volatile uint8_t x1384 = 0U;
	volatile int64_t t22 = -20791481LL;

	t22 = ((x1381&(x1382+x1383))>>x1384);

	if (t22 != 1733LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1389 = INT16_MIN;
	int16_t x1391 = -6;
	uint32_t t23 = 78750U;

	t23 = ((x1389&(x1390+x1391))>>x1392);

	if (t23 != 2147467264U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x1598 = -2377LL;
	static uint16_t x1599 = 53U;
	uint16_t x1600 = 16U;
	static volatile int64_t t24 = -70598992590LL;

	t24 = ((x1597&(x1598+x1599))>>x1600);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x1605 = UINT16_MAX;
	int32_t x1606 = 110;
	volatile int64_t x1607 = INT64_MIN;
	int16_t x1608 = 39;
	int64_t t25 = -117500821812920LL;

	t25 = ((x1605&(x1606+x1607))>>x1608);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x1637 = -8;
	uint64_t x1638 = 10592307361LLU;
	int16_t x1639 = INT16_MIN;
	static uint8_t x1640 = 1U;

	t26 = ((x1637&(x1638+x1639))>>x1640);

	if (t26 != 5296137296LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1681 = INT64_MAX;
	int64_t x1682 = 2800918610LL;
	uint64_t x1683 = 21772LLU;
	uint8_t x1684 = 32U;
	uint64_t t27 = 13719302778616LLU;

	t27 = ((x1681&(x1682+x1683))>>x1684);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x1837 = UINT8_MAX;
	int16_t x1838 = -16106;
	int8_t x1840 = 1;

	t28 = ((x1837&(x1838+x1839))>>x1840);

	if (t28 != 12) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x1857 = 108U;
	uint64_t x1858 = 673809LLU;
	uint32_t x1859 = 2U;
	uint64_t t29 = 13605LLU;

	t29 = ((x1857&(x1858+x1859))>>x1860);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1862 = -15;
	static uint8_t x1864 = 23U;
	int32_t t30 = 84;

	t30 = ((x1861&(x1862+x1863))>>x1864);

	if (t30 != 6) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1897 = INT16_MIN;
	uint8_t x1899 = UINT8_MAX;
	volatile uint8_t x1900 = 2U;

	t31 = ((x1897&(x1898+x1899))>>x1900);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1961 = INT8_MAX;
	int16_t x1962 = 1;
	int8_t x1963 = 0;
	int16_t x1964 = 0;
	int32_t t32 = -81;

	t32 = ((x1961&(x1962+x1963))>>x1964);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1977 = INT64_MAX;
	volatile int16_t x1978 = -1;
	int64_t x1979 = -1LL;
	static int8_t x1980 = 1;
	volatile int64_t t33 = -32447061696162117LL;

	t33 = ((x1977&(x1978+x1979))>>x1980);

	if (t33 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x2013 = UINT16_MAX;
	int32_t x2014 = -13104;

	t34 = ((x2013&(x2014+x2015))>>x2016);

	if (t34 != 19663) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x2065 = 2455279503500394LLU;
	int32_t x2066 = -1;
	uint64_t x2067 = 10333055697562063LLU;
	static uint8_t x2068 = 1U;
	volatile uint64_t t35 = 28LLU;

	t35 = ((x2065&(x2066+x2067))>>x2068);

	if (t35 != 97341155577893LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x2169 = 9354LLU;
	static volatile int32_t x2170 = -414889;
	static int32_t x2171 = -15;
	volatile int64_t x2172 = 7LL;
	uint64_t t36 = 9336359655172533LLU;

	t36 = ((x2169&(x2170+x2171))>>x2172);

	if (t36 != 64LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x2181 = INT32_MIN;
	int32_t x2183 = 970786520;
	uint8_t x2184 = 1U;
	int32_t t37 = 37733;

	t37 = ((x2181&(x2182+x2183))>>x2184);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x2257 = INT64_MIN;
	static int8_t x2258 = INT8_MIN;
	static int64_t t38 = -1750593LL;

	t38 = ((x2257&(x2258+x2259))>>x2260);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x2267 = INT64_MAX;
	uint8_t x2268 = 14U;
	volatile int64_t t39 = 111299892389743LL;

	t39 = ((x2265&(x2266+x2267))>>x2268);

	if (t39 != 562949953396385LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x2309 = 2U;
	static volatile int32_t x2310 = INT32_MAX;
	uint64_t x2311 = UINT64_MAX;
	uint64_t x2312 = 3LLU;
	volatile uint64_t t40 = 28840519316565LLU;

	t40 = ((x2309&(x2310+x2311))>>x2312);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2329 = INT32_MIN;
	uint8_t x2330 = 10U;
	volatile int64_t x2331 = -1LL;

	t41 = ((x2329&(x2330+x2331))>>x2332);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x2337 = INT32_MIN;
	static volatile int16_t x2338 = -42;
	volatile uint16_t x2339 = 972U;
	int8_t x2340 = 26;
	int32_t t42 = -58576;

	t42 = ((x2337&(x2338+x2339))>>x2340);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2397 = -1;
	uint32_t x2398 = UINT32_MAX;
	int16_t x2399 = -1;
	volatile int32_t x2400 = 4;
	uint32_t t43 = 15877U;

	t43 = ((x2397&(x2398+x2399))>>x2400);

	if (t43 != 268435455U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x2453 = 12;
	int8_t x2455 = -25;
	uint8_t x2456 = 9U;
	static int32_t t44 = 24296;

	t44 = ((x2453&(x2454+x2455))>>x2456);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x2505 = -1LL;
	volatile int8_t x2506 = 1;
	int16_t x2507 = -1;
	uint32_t x2508 = 30U;
	volatile int64_t t45 = -3962LL;

	t45 = ((x2505&(x2506+x2507))>>x2508);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x2509 = -1858232532619436491LL;
	volatile uint32_t x2510 = 855468U;
	int16_t x2511 = 0;
	int16_t x2512 = 3;
	volatile int64_t t46 = -86LL;

	t46 = ((x2509&(x2510+x2511))>>x2512);

	if (t46 != 33156LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x2550 = -1;
	volatile int32_t x2551 = -125;
	uint8_t x2552 = 9U;
	static volatile uint64_t t47 = 4958643439843LLU;

	t47 = ((x2549&(x2550+x2551))>>x2552);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x2619 = 0U;
	uint8_t x2620 = 10U;
	volatile int64_t t48 = -120137957485783LL;

	t48 = ((x2617&(x2618+x2619))>>x2620);

	if (t48 != 63LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x2626 = 0U;
	static uint8_t x2628 = 2U;
	uint32_t t49 = 10994U;

	t49 = ((x2625&(x2626+x2627))>>x2628);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x2629 = 1U;
	static uint16_t x2631 = 7551U;
	uint32_t x2632 = 1U;
	volatile int32_t t50 = 34548;

	t50 = ((x2629&(x2630+x2631))>>x2632);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x2681 = 30U;
	static int32_t x2682 = INT32_MAX;
	int32_t x2683 = -984672;
	volatile int32_t t51 = 36;

	t51 = ((x2681&(x2682+x2683))>>x2684);

	if (t51 != 30) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x2777 = 0U;
	int32_t x2778 = -17721774;
	static int16_t x2779 = INT16_MAX;
	volatile uint64_t x2780 = 2LLU;
	uint32_t t52 = 356189674U;

	t52 = ((x2777&(x2778+x2779))>>x2780);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x2797 = -1;
	uint8_t x2800 = 11U;
	uint64_t t53 = 1607LLU;

	t53 = ((x2797&(x2798+x2799))>>x2800);

	if (t53 != 9007199254740975LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x2806 = INT8_MIN;
	int64_t t54 = -110072928417038LL;

	t54 = ((x2805&(x2806+x2807))>>x2808);

	if (t54 != 2147483583LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x2829 = 503U;
	static uint16_t x2830 = 63U;
	int8_t x2831 = -1;
	uint32_t x2832 = 4U;

	t55 = ((x2829&(x2830+x2831))>>x2832);

	if (t55 != 3) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x2861 = 2452239470LLU;
	int8_t x2862 = INT8_MIN;
	volatile int8_t x2863 = INT8_MAX;
	volatile uint64_t t56 = 518815901939LLU;

	t56 = ((x2861&(x2862+x2863))>>x2864);

	if (t56 != 2452239470LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x2885 = UINT16_MAX;
	volatile int8_t x2886 = -11;
	int16_t x2887 = INT16_MIN;
	uint8_t x2888 = 0U;

	t57 = ((x2885&(x2886+x2887))>>x2888);

	if (t57 != 32757) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int16_t x2933 = -1;
	volatile int32_t x2934 = 56863451;
	int64_t x2935 = -79LL;
	int64_t t58 = -28138990401295LL;

	t58 = ((x2933&(x2934+x2935))>>x2936);

	if (t58 != 867LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x3089 = 1;
	int8_t x3090 = INT8_MAX;
	uint8_t x3092 = 11U;
	volatile int32_t t59 = 1960300;

	t59 = ((x3089&(x3090+x3091))>>x3092);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x3094 = -1LL;
	volatile int32_t x3095 = INT32_MAX;
	int64_t t60 = -258309002LL;

	t60 = ((x3093&(x3094+x3095))>>x3096);

	if (t60 != 254LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x3097 = 58876539709240LLU;
	static uint16_t x3098 = UINT16_MAX;
	int64_t x3099 = 6679314146091LL;
	static uint64_t t61 = 17LLU;

	t61 = ((x3097&(x3098+x3099))>>x3100);

	if (t61 != 268437648LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x3101 = -1LL;
	int16_t x3102 = INT16_MAX;
	uint16_t x3103 = 6838U;
	volatile int64_t t62 = 2103387135487LL;

	t62 = ((x3101&(x3102+x3103))>>x3104);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x3209 = INT64_MAX;
	uint8_t x3210 = 2U;
	int64_t x3211 = -1LL;
	volatile int64_t t63 = -1439915732201LL;

	t63 = ((x3209&(x3210+x3211))>>x3212);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x3226 = -16008029369LL;
	volatile int32_t x3227 = INT32_MAX;
	uint8_t x3228 = 2U;
	static volatile int64_t t64 = 250576721201272369LL;

	t64 = ((x3225&(x3226+x3227))>>x3228);

	if (t64 != 17796235663639041LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x3230 = 1U;
	uint16_t x3231 = 14U;
	uint8_t x3232 = 2U;
	int64_t t65 = 16265771LL;

	t65 = ((x3229&(x3230+x3231))>>x3232);

	if (t65 != 3LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x3253 = 6311U;
	uint16_t x3254 = 30U;
	volatile uint32_t x3255 = 196U;
	int8_t x3256 = 1;
	volatile uint32_t t66 = 12U;

	t66 = ((x3253&(x3254+x3255))>>x3256);

	if (t66 != 81U) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x3266 = 24U;
	int16_t x3267 = -333;
	uint8_t x3268 = 0U;
	volatile int32_t t67 = -15130004;

	t67 = ((x3265&(x3266+x3267))>>x3268);

	if (t67 != 2147483339) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x3305 = 7U;
	int16_t x3306 = INT16_MIN;
	static volatile uint64_t x3307 = 53778864628640163LLU;
	uint16_t x3308 = 3U;
	volatile uint64_t t68 = 10LLU;

	t68 = ((x3305&(x3306+x3307))>>x3308);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x3309 = INT64_MAX;
	uint64_t x3310 = 1375913586537794LLU;
	int64_t x3311 = 2LL;
	uint8_t x3312 = 5U;
	volatile uint64_t t69 = 2710291LLU;

	t69 = ((x3309&(x3310+x3311))>>x3312);

	if (t69 != 42997299579306LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x3313 = INT64_MIN;
	int32_t x3314 = -1;
	volatile int32_t x3315 = 71722;
	int8_t x3316 = 1;

	t70 = ((x3313&(x3314+x3315))>>x3316);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x3381 = 70U;
	uint8_t x3382 = 12U;
	volatile uint64_t x3383 = 2297497558447327699LLU;
	volatile uint16_t x3384 = 16U;
	volatile uint64_t t71 = 182560271661616LLU;

	t71 = ((x3381&(x3382+x3383))>>x3384);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint64_t x3401 = 29LLU;
	static uint8_t x3402 = UINT8_MAX;
	int32_t x3403 = 7860733;
	uint64_t x3404 = 50LLU;
	uint64_t t72 = 4785585738958LLU;

	t72 = ((x3401&(x3402+x3403))>>x3404);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x3437 = INT64_MAX;
	volatile uint8_t x3438 = UINT8_MAX;
	int16_t x3439 = -1;
	static uint8_t x3440 = 30U;
	volatile int64_t t73 = 1LL;

	t73 = ((x3437&(x3438+x3439))>>x3440);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x3450 = INT8_MIN;
	volatile uint8_t x3452 = 1U;

	t74 = ((x3449&(x3450+x3451))>>x3452);

	if (t74 != 1073741758) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x3482 = 47U;
	volatile int16_t x3483 = -13473;
	uint8_t x3484 = 3U;
	uint32_t t75 = 94566U;

	t75 = ((x3481&(x3482+x3483))>>x3484);

	if (t75 != 268435456U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x3601 = 16;
	volatile uint8_t x3602 = 4U;
	uint64_t x3603 = 448273679LLU;
	int16_t x3604 = 0;
	uint64_t t76 = 674538426LLU;

	t76 = ((x3601&(x3602+x3603))>>x3604);

	if (t76 != 16LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x3630 = 4749503735LL;
	uint16_t x3631 = 3269U;
	volatile int64_t t77 = 20408827LL;

	t77 = ((x3629&(x3630+x3631))>>x3632);

	if (t77 != 2374753472LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x3661 = 14221U;
	uint16_t x3663 = 6707U;
	int64_t x3664 = 0LL;
	int32_t t78 = 364167;

	t78 = ((x3661&(x3662+x3663))>>x3664);

	if (t78 != 4612) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x3757 = 0U;
	int64_t x3758 = -4131068189231747LL;
	uint8_t x3760 = 0U;
	static volatile int64_t t79 = 430145LL;

	t79 = ((x3757&(x3758+x3759))>>x3760);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x3770 = -10;
	int8_t x3771 = INT8_MIN;
	int32_t x3772 = 37;

	t80 = ((x3769&(x3770+x3771))>>x3772);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x3777 = -1;
	int32_t x3778 = -1;
	uint8_t x3780 = 0U;
	int64_t t81 = -741977LL;

	t81 = ((x3777&(x3778+x3779))>>x3780);

	if (t81 != 12893LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x3841 = 223288583239LL;
	int16_t x3842 = -1;
	int64_t x3843 = -223LL;
	volatile int64_t t82 = 42525808181LL;

	t82 = ((x3841&(x3842+x3843))>>x3844);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x3869 = UINT8_MAX;
	int64_t x3870 = -1LL;
	uint64_t x3871 = 1294LLU;
	int8_t x3872 = 6;

	t83 = ((x3869&(x3870+x3871))>>x3872);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x3917 = 7882631LLU;
	static int8_t x3918 = INT8_MIN;
	int16_t x3919 = INT16_MIN;
	int8_t x3920 = 4;
	uint64_t t84 = 759LLU;

	t84 = ((x3917&(x3918+x3919))>>x3920);

	if (t84 != 492664LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x3929 = INT8_MAX;
	static volatile int64_t x3930 = 84009598396401LL;
	uint8_t x3931 = 1U;
	int8_t x3932 = 18;
	volatile int64_t t85 = 1923957236122962LL;

	t85 = ((x3929&(x3930+x3931))>>x3932);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x3969 = INT8_MAX;
	static uint32_t x3970 = 1825487557U;
	int64_t x3971 = INT64_MIN;
	volatile uint8_t x3972 = 1U;
	int64_t t86 = -29667420312LL;

	t86 = ((x3969&(x3970+x3971))>>x3972);

	if (t86 != 34LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x4045 = 1;
	int8_t x4046 = INT8_MAX;
	uint8_t x4048 = 2U;
	uint32_t t87 = 364228430U;

	t87 = ((x4045&(x4046+x4047))>>x4048);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x4049 = INT64_MAX;
	int32_t x4050 = -396962;
	int32_t x4051 = 41385491;
	uint8_t x4052 = 22U;
	int64_t t88 = 713LL;

	t88 = ((x4049&(x4050+x4051))>>x4052);

	if (t88 != 9LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x4125 = 4;
	static volatile uint64_t t89 = 6LLU;

	t89 = ((x4125&(x4126+x4127))>>x4128);

	if (t89 != 4LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x4153 = INT32_MIN;
	volatile int8_t x4154 = 18;
	uint64_t x4155 = UINT64_MAX;
	int8_t x4156 = 0;

	t90 = ((x4153&(x4154+x4155))>>x4156);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x4170 = 15422604599925209LLU;
	uint32_t x4171 = 136916912U;
	static volatile uint8_t x4172 = 5U;
	static volatile uint64_t t91 = 1026931344061LLU;

	t91 = ((x4169&(x4170+x4171))>>x4172);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x4174 = 18U;
	static uint8_t x4175 = 3U;
	int8_t x4176 = 6;
	volatile int64_t t92 = -190016296896680LL;

	t92 = ((x4173&(x4174+x4175))>>x4176);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x4234 = UINT16_MAX;
	volatile int8_t x4235 = INT8_MIN;
	int16_t x4236 = 1;
	int64_t t93 = 10094655680280309LL;

	t93 = ((x4233&(x4234+x4235))>>x4236);

	if (t93 != 32703LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x4282 = INT8_MAX;
	uint16_t x4284 = 0U;
	uint64_t t94 = 14474345473824LLU;

	t94 = ((x4281&(x4282+x4283))>>x4284);

	if (t94 != 21943LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x4302 = 2163U;
	int16_t x4303 = -4;
	uint32_t x4304 = 7U;
	static volatile int32_t t95 = 0;

	t95 = ((x4301&(x4302+x4303))>>x4304);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x4318 = INT8_MIN;
	int32_t x4319 = -14643220;
	uint8_t x4320 = 3U;
	volatile uint64_t t96 = 36275035175LLU;

	t96 = ((x4317&(x4318+x4319))>>x4320);

	if (t96 != 4444131648LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x4321 = UINT16_MAX;
	int8_t x4322 = INT8_MIN;
	uint32_t x4323 = 3U;
	uint32_t x4324 = 0U;
	volatile uint32_t t97 = 27937U;

	t97 = ((x4321&(x4322+x4323))>>x4324);

	if (t97 != 65411U) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x4350 = 46162164U;
	int16_t x4351 = INT16_MIN;
	int8_t x4352 = 6;
	static volatile uint32_t t98 = 1102U;

	t98 = ((x4349&(x4350+x4351))>>x4352);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x4386 = -1LL;
	int16_t x4387 = INT16_MIN;
	int16_t x4388 = 29;
	volatile int64_t t99 = 139314LL;

	t99 = ((x4385&(x4386+x4387))>>x4388);

	if (t99 != 2LL) { NG(); } else { ; }
	
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

