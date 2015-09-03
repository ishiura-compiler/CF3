#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x51 = 7;
static volatile int32_t t1 = 13;
int64_t x61 = -1LL;
int64_t t2 = -287137014543335LL;
int64_t x69 = INT64_MAX;
uint8_t x143 = 30U;
uint8_t x157 = 15U;
volatile int8_t x159 = 35;
int8_t x298 = INT8_MIN;
static int16_t x299 = INT16_MAX;
uint8_t x300 = 1U;
volatile uint32_t x477 = 5539U;
volatile uint64_t t10 = 851973228795305169LLU;
volatile int32_t t11 = -218492;
volatile uint8_t x608 = 6U;
static uint16_t x637 = UINT16_MAX;
volatile uint32_t x710 = 2U;
int8_t x711 = INT8_MAX;
volatile uint8_t x1061 = UINT8_MAX;
static uint32_t x1075 = 16U;
uint16_t x1183 = UINT16_MAX;
static volatile uint64_t t18 = 101LLU;
uint64_t x1311 = 170069548909489086LLU;
int32_t x1369 = 15617606;
static int16_t x1370 = INT16_MIN;
static uint8_t x1376 = 2U;
uint8_t x1503 = 13U;
static uint64_t t25 = 0LLU;
static int8_t x1708 = 5;
static uint64_t x1785 = 256991LLU;
uint32_t x1787 = 3893020U;
uint64_t t30 = 74168896743236LLU;
uint8_t x1811 = UINT8_MAX;
volatile uint16_t x1939 = 7U;
uint16_t x1940 = 1U;
volatile int32_t x2025 = INT32_MIN;
volatile int64_t x2026 = -12LL;
int8_t x2113 = 10;
int64_t x2114 = -1LL;
int8_t x2133 = -1;
uint8_t x2134 = 2U;
int64_t x2174 = INT64_MAX;
int8_t x2238 = 4;
int32_t x2385 = -1;
uint8_t x2386 = UINT8_MAX;
volatile uint64_t t41 = 77954547072631402LLU;
volatile int32_t x2505 = INT32_MIN;
int32_t x2506 = INT32_MIN;
static uint64_t x2622 = UINT64_MAX;
static uint64_t x2623 = UINT64_MAX;
volatile uint64_t t43 = 97497248301383324LLU;
uint16_t x2656 = 63U;
volatile int8_t x2797 = 20;
int16_t x2798 = 1;
static volatile uint32_t t45 = 111U;
static uint64_t x2865 = UINT64_MAX;
int64_t x2866 = INT64_MIN;
static uint32_t x2867 = UINT32_MAX;
static volatile uint64_t t48 = 198462LLU;
uint8_t x2891 = UINT8_MAX;
int64_t x2982 = -185452357577LL;
uint64_t x3001 = UINT64_MAX;
volatile int64_t x3018 = -277539LL;
static int32_t x3065 = INT32_MIN;
volatile uint16_t x3067 = UINT16_MAX;
int16_t x3141 = 1306;
int64_t x3143 = INT64_MAX;
volatile int16_t x3154 = INT16_MAX;
uint64_t t57 = 8380682LLU;
volatile uint64_t t58 = 915LLU;
int16_t x3247 = 7;
int8_t x3377 = 0;
volatile uint16_t x3378 = UINT16_MAX;
volatile uint32_t x3379 = 153358U;
uint16_t x3437 = 16093U;
int64_t x3438 = INT64_MAX;
uint8_t x3440 = 0U;
int64_t t63 = 1114779LL;
static uint64_t x3455 = UINT64_MAX;
static int32_t x3467 = 7535;
static int32_t t65 = -72064018;
uint16_t x3546 = 32547U;
volatile uint16_t x3549 = 30U;
uint64_t x3583 = 103601769282205LLU;
volatile int32_t t70 = -79;
static uint16_t x3878 = UINT16_MAX;
uint32_t x3953 = UINT32_MAX;
volatile uint64_t x4129 = UINT64_MAX;
static volatile uint64_t x4141 = 0LLU;
int32_t x4142 = -11678084;
volatile uint64_t x4214 = 2296608193LLU;
volatile int8_t x4257 = INT8_MAX;
int8_t x4259 = 0;
volatile uint16_t x4267 = 8165U;
static uint32_t x4327 = 14383U;
int64_t t80 = 823524293798691LL;
uint8_t x4340 = 13U;
int64_t t81 = -150368585070089LL;
uint16_t x4407 = 87U;
uint16_t x4429 = 1429U;
int16_t x4430 = INT16_MIN;
uint16_t x4437 = 2893U;
static volatile int16_t x4438 = INT16_MIN;
int64_t x4453 = -26LL;
uint16_t x4497 = 25U;
int32_t t89 = -3654002;
static int8_t x4750 = INT8_MIN;
int16_t x4751 = INT16_MAX;
int32_t x5114 = INT32_MAX;
static uint16_t x5116 = 2U;
uint16_t x5168 = 0U;
static int64_t t93 = -33177466LL;
int8_t x5326 = INT8_MIN;
volatile int64_t x5327 = INT64_MAX;
uint32_t x5390 = UINT32_MAX;
uint16_t x5495 = UINT16_MAX;
volatile uint8_t x5542 = 2U;


void f0(void) {
	volatile uint16_t x41 = 26U;
	static int64_t x42 = -1963LL;
	static uint64_t x43 = UINT64_MAX;
	volatile int64_t x44 = 15LL;
	uint64_t t0 = 447271LLU;

	t0 = ((x41-x42)-(x43>>x44));

	if (t0 != 18446181123756132294LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x49 = -39414;
	static uint8_t x50 = 24U;
	int8_t x52 = 0;

	t1 = ((x49-x50)-(x51>>x52));

	if (t1 != -39445) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x62 = -4;
	uint16_t x63 = 7U;
	static int8_t x64 = 0;

	t2 = ((x61-x62)-(x63>>x64));

	if (t2 != -4LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x70 = 291648042559509185LLU;
	uint16_t x71 = 6433U;
	int8_t x72 = 0;
	volatile uint64_t t3 = 14912819LLU;

	t3 = ((x69-x70)-(x71>>x72));

	if (t3 != 8931723994295260189LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x105 = 37488;
	int8_t x106 = INT8_MIN;
	int8_t x107 = INT8_MAX;
	int32_t x108 = 7;
	static volatile int32_t t4 = -2;

	t4 = ((x105-x106)-(x107>>x108));

	if (t4 != 37616) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x141 = 0U;
	volatile int32_t x142 = 76;
	volatile int8_t x144 = 19;
	volatile int32_t t5 = -955;

	t5 = ((x141-x142)-(x143>>x144));

	if (t5 != -76) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x158 = UINT16_MAX;
	volatile uint8_t x160 = 2U;
	int32_t t6 = 0;

	t6 = ((x157-x158)-(x159>>x160));

	if (t6 != -65528) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x297 = -1;
	volatile int32_t t7 = 20056;

	t7 = ((x297-x298)-(x299>>x300));

	if (t7 != -16256) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x329 = 1973U;
	int16_t x330 = INT16_MIN;
	uint32_t x331 = 1370721568U;
	uint8_t x332 = 25U;
	static volatile uint32_t t8 = 65371623U;

	t8 = ((x329-x330)-(x331>>x332));

	if (t8 != 34701U) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x389 = -1;
	int16_t x390 = INT16_MAX;
	int16_t x391 = INT16_MAX;
	int64_t x392 = 1LL;
	static volatile int32_t t9 = -15;

	t9 = ((x389-x390)-(x391>>x392));

	if (t9 != -49151) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x478 = -1;
	uint64_t x479 = 18018501675842LLU;
	int8_t x480 = 1;

	t10 = ((x477-x478)-(x479>>x480));

	if (t10 != 18446735064458719235LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x521 = -1;
	int16_t x522 = INT16_MIN;
	volatile uint8_t x523 = UINT8_MAX;
	static uint16_t x524 = 1U;

	t11 = ((x521-x522)-(x523>>x524));

	if (t11 != 32640) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x605 = 43;
	volatile int32_t x606 = 7121601;
	int16_t x607 = 5374;
	int32_t t12 = 46114;

	t12 = ((x605-x606)-(x607>>x608));

	if (t12 != -7121641) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x638 = 330;
	int16_t x639 = INT16_MAX;
	int8_t x640 = 0;
	volatile int32_t t13 = 237;

	t13 = ((x637-x638)-(x639>>x640));

	if (t13 != 32438) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x709 = INT16_MAX;
	int64_t x712 = 2LL;
	static volatile uint32_t t14 = 39095822U;

	t14 = ((x709-x710)-(x711>>x712));

	if (t14 != 32734U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x897 = INT64_MIN;
	uint64_t x898 = 8290513188240459775LLU;
	int8_t x899 = 0;
	static volatile int8_t x900 = 1;
	volatile uint64_t t15 = 639152470LLU;

	t15 = ((x897-x898)-(x899>>x900));

	if (t15 != 932858848614316033LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x1062 = 350U;
	int32_t x1063 = INT32_MAX;
	volatile int16_t x1064 = 7;
	static int32_t t16 = 934845991;

	t16 = ((x1061-x1062)-(x1063>>x1064));

	if (t16 != -16777310) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x1073 = 988391U;
	volatile int16_t x1074 = -17;
	uint8_t x1076 = 1U;
	volatile uint32_t t17 = 268U;

	t17 = ((x1073-x1074)-(x1075>>x1076));

	if (t17 != 988400U) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x1181 = UINT64_MAX;
	int16_t x1182 = -1;
	uint8_t x1184 = 7U;

	t18 = ((x1181-x1182)-(x1183>>x1184));

	if (t18 != 18446744073709551105LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1309 = 15;
	uint32_t x1310 = UINT32_MAX;
	static uint32_t x1312 = 47U;
	volatile uint64_t t19 = 14630LLU;

	t19 = ((x1309-x1310)-(x1311>>x1312));

	if (t19 != 18446744073709550424LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x1313 = 2807710;
	uint8_t x1314 = 6U;
	int8_t x1315 = INT8_MAX;
	uint8_t x1316 = 28U;
	volatile int32_t t20 = -389101084;

	t20 = ((x1313-x1314)-(x1315>>x1316));

	if (t20 != 2807704) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x1371 = 67U;
	uint8_t x1372 = 11U;
	int32_t t21 = -131235571;

	t21 = ((x1369-x1370)-(x1371>>x1372));

	if (t21 != 15650374) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1373 = -1;
	int64_t x1374 = -1LL;
	int16_t x1375 = INT16_MAX;
	volatile int64_t t22 = -17276771743LL;

	t22 = ((x1373-x1374)-(x1375>>x1376));

	if (t22 != -8191LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1473 = UINT64_MAX;
	static volatile uint64_t x1474 = 8116943975714036386LLU;
	uint16_t x1475 = 33U;
	int8_t x1476 = 3;
	uint64_t t23 = 5395947502403093LLU;

	t23 = ((x1473-x1474)-(x1475>>x1476));

	if (t23 != 10329800097995515225LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x1501 = 164U;
	volatile int32_t x1502 = -1;
	uint8_t x1504 = 12U;
	int32_t t24 = 0;

	t24 = ((x1501-x1502)-(x1503>>x1504));

	if (t24 != 165) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1505 = INT32_MIN;
	static volatile uint64_t x1506 = UINT64_MAX;
	static int8_t x1507 = 0;
	static uint8_t x1508 = 0U;

	t25 = ((x1505-x1506)-(x1507>>x1508));

	if (t25 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1621 = INT8_MIN;
	uint16_t x1622 = 7U;
	volatile int8_t x1623 = 58;
	static uint8_t x1624 = 11U;
	static int32_t t26 = -1;

	t26 = ((x1621-x1622)-(x1623>>x1624));

	if (t26 != -135) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1705 = UINT16_MAX;
	static uint32_t x1706 = 1027U;
	uint64_t x1707 = 35365920865275499LLU;
	static uint64_t t27 = 1011LLU;

	t27 = ((x1705-x1706)-(x1707>>x1708));

	if (t27 != 18445638888682576265LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1733 = 951376LL;
	uint64_t x1734 = 0LLU;
	int8_t x1735 = 0;
	int32_t x1736 = 2;
	volatile uint64_t t28 = 145991303013392928LLU;

	t28 = ((x1733-x1734)-(x1735>>x1736));

	if (t28 != 951376LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1737 = -1;
	static int16_t x1738 = INT16_MAX;
	int16_t x1739 = INT16_MAX;
	uint8_t x1740 = 0U;
	volatile int32_t t29 = 36067;

	t29 = ((x1737-x1738)-(x1739>>x1740));

	if (t29 != -65535) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x1786 = 3;
	static int8_t x1788 = 0;

	t30 = ((x1785-x1786)-(x1787>>x1788));

	if (t30 != 18446744073705915584LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x1809 = -1;
	int8_t x1810 = INT8_MIN;
	uint16_t x1812 = 7U;
	int32_t t31 = 1545519;

	t31 = ((x1809-x1810)-(x1811>>x1812));

	if (t31 != 126) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1881 = INT16_MIN;
	int16_t x1882 = 2101;
	int64_t x1883 = INT64_MAX;
	volatile int8_t x1884 = 1;
	volatile int64_t t32 = -1355350024LL;

	t32 = ((x1881-x1882)-(x1883>>x1884));

	if (t32 != -4611686018427422772LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1937 = 1953793218424LL;
	int8_t x1938 = -8;
	static int64_t t33 = -2LL;

	t33 = ((x1937-x1938)-(x1939>>x1940));

	if (t33 != 1953793218429LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x2027 = UINT16_MAX;
	static volatile uint16_t x2028 = 7U;
	int64_t t34 = 54916036LL;

	t34 = ((x2025-x2026)-(x2027>>x2028));

	if (t34 != -2147484147LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x2115 = INT8_MAX;
	volatile uint16_t x2116 = 27U;
	volatile int64_t t35 = 0LL;

	t35 = ((x2113-x2114)-(x2115>>x2116));

	if (t35 != 11LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x2135 = 238886U;
	int64_t x2136 = 0LL;
	uint32_t t36 = 273406144U;

	t36 = ((x2133-x2134)-(x2135>>x2136));

	if (t36 != 4294728407U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x2173 = 7LL;
	static int32_t x2175 = 117715070;
	int16_t x2176 = 25;
	volatile int64_t t37 = -25488045351138LL;

	t37 = ((x2173-x2174)-(x2175>>x2176));

	if (t37 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x2237 = INT16_MAX;
	int16_t x2239 = INT16_MAX;
	uint8_t x2240 = 1U;
	int32_t t38 = -109;

	t38 = ((x2237-x2238)-(x2239>>x2240));

	if (t38 != 16380) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x2329 = -1;
	volatile uint64_t x2330 = 105639LLU;
	volatile uint32_t x2331 = UINT32_MAX;
	int8_t x2332 = 0;
	volatile uint64_t t39 = 4075LLU;

	t39 = ((x2329-x2330)-(x2331>>x2332));

	if (t39 != 18446744069414478681LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x2353 = INT32_MIN;
	volatile uint32_t x2354 = 219438085U;
	uint32_t x2355 = 979U;
	static uint32_t x2356 = 3U;
	uint32_t t40 = 21712935U;

	t40 = ((x2353-x2354)-(x2355>>x2356));

	if (t40 != 1928045441U) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x2387 = 946LLU;
	uint8_t x2388 = 4U;

	t41 = ((x2385-x2386)-(x2387>>x2388));

	if (t41 != 18446744073709551301LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x2507 = 2LLU;
	uint8_t x2508 = 0U;
	uint64_t t42 = 957832689LLU;

	t42 = ((x2505-x2506)-(x2507>>x2508));

	if (t42 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x2621 = INT32_MAX;
	static uint8_t x2624 = 7U;

	t43 = ((x2621-x2622)-(x2623>>x2624));

	if (t43 != 18302628887781179393LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int64_t x2653 = -74LL;
	int64_t x2654 = INT64_MIN;
	uint64_t x2655 = 36LLU;
	volatile uint64_t t44 = 2376730050082LLU;

	t44 = ((x2653-x2654)-(x2655>>x2656));

	if (t44 != 9223372036854775734LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x2799 = 1452474923U;
	static int32_t x2800 = 1;

	t45 = ((x2797-x2798)-(x2799>>x2800));

	if (t45 != 3568729854U) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint32_t x2837 = 0U;
	int8_t x2838 = 2;
	uint8_t x2839 = UINT8_MAX;
	uint16_t x2840 = 30U;
	static volatile uint32_t t46 = 1711935U;

	t46 = ((x2837-x2838)-(x2839>>x2840));

	if (t46 != 4294967294U) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x2857 = UINT8_MAX;
	int8_t x2858 = INT8_MIN;
	static uint16_t x2859 = 353U;
	volatile uint64_t x2860 = 2LLU;
	int32_t t47 = -19569516;

	t47 = ((x2857-x2858)-(x2859>>x2860));

	if (t47 != 295) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x2868 = 0U;

	t48 = ((x2865-x2866)-(x2867>>x2868));

	if (t48 != 9223372032559808512LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x2889 = -1LL;
	static int64_t x2890 = 1015LL;
	volatile uint8_t x2892 = 0U;
	int64_t t49 = 1LL;

	t49 = ((x2889-x2890)-(x2891>>x2892));

	if (t49 != -1271LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x2981 = 1095U;
	volatile int32_t x2983 = INT32_MAX;
	static int8_t x2984 = 13;
	int64_t t50 = -2688541327303099879LL;

	t50 = ((x2981-x2982)-(x2983>>x2984));

	if (t50 != 185452096529LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x3002 = -7;
	uint16_t x3003 = 12U;
	volatile uint8_t x3004 = 6U;
	static uint64_t t51 = 34377805419567569LLU;

	t51 = ((x3001-x3002)-(x3003>>x3004));

	if (t51 != 6LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x3017 = 20217U;
	uint16_t x3019 = UINT16_MAX;
	volatile int8_t x3020 = 1;
	int64_t t52 = -6944990715LL;

	t52 = ((x3017-x3018)-(x3019>>x3020));

	if (t52 != 264989LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x3041 = UINT16_MAX;
	volatile int64_t x3042 = -1422LL;
	int16_t x3043 = 0;
	volatile int8_t x3044 = 3;
	volatile int64_t t53 = 40LL;

	t53 = ((x3041-x3042)-(x3043>>x3044));

	if (t53 != 66957LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x3066 = INT64_MIN;
	uint32_t x3068 = 1U;
	volatile int64_t t54 = 256657LL;

	t54 = ((x3065-x3066)-(x3067>>x3068));

	if (t54 != 9223372034707259393LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x3081 = 3;
	int64_t x3082 = -4418LL;
	static int64_t x3083 = 1711LL;
	uint16_t x3084 = 0U;
	volatile int64_t t55 = 16223LL;

	t55 = ((x3081-x3082)-(x3083>>x3084));

	if (t55 != 2710LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x3142 = 53;
	uint8_t x3144 = 5U;
	volatile int64_t t56 = 225146380391LL;

	t56 = ((x3141-x3142)-(x3143>>x3144));

	if (t56 != -288230376151710490LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x3153 = UINT64_MAX;
	static uint16_t x3155 = 15U;
	int32_t x3156 = 1;

	t57 = ((x3153-x3154)-(x3155>>x3156));

	if (t57 != 18446744073709518841LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x3173 = INT32_MIN;
	uint64_t x3174 = 9725082LLU;
	static int16_t x3175 = 21;
	volatile uint32_t x3176 = 2U;

	t58 = ((x3173-x3174)-(x3175>>x3176));

	if (t58 != 18446744071552342881LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x3245 = -1;
	uint16_t x3246 = 228U;
	volatile int16_t x3248 = 0;
	int32_t t59 = -386;

	t59 = ((x3245-x3246)-(x3247>>x3248));

	if (t59 != -236) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x3305 = 16U;
	static int64_t x3306 = INT64_MAX;
	int16_t x3307 = INT16_MAX;
	uint8_t x3308 = 13U;
	volatile int64_t t60 = -1179531765894LL;

	t60 = ((x3305-x3306)-(x3307>>x3308));

	if (t60 != -9223372036854775794LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x3317 = UINT8_MAX;
	int8_t x3318 = INT8_MIN;
	volatile int32_t x3319 = 201762123;
	uint32_t x3320 = 1U;
	static int32_t t61 = 819;

	t61 = ((x3317-x3318)-(x3319>>x3320));

	if (t61 != -100880678) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x3380 = 7;
	volatile uint32_t t62 = 617552494U;

	t62 = ((x3377-x3378)-(x3379>>x3380));

	if (t62 != 4294900563U) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x3439 = 27;

	t63 = ((x3437-x3438)-(x3439>>x3440));

	if (t63 != -9223372036854759741LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x3453 = INT32_MAX;
	volatile int64_t x3454 = -3903279LL;
	int8_t x3456 = 2;
	static uint64_t t64 = 2627LLU;

	t64 = ((x3453-x3454)-(x3455>>x3456));

	if (t64 != 13835058057433550639LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x3465 = 24;
	volatile int32_t x3466 = -187039926;
	uint8_t x3468 = 1U;

	t65 = ((x3465-x3466)-(x3467>>x3468));

	if (t65 != 187036183) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x3493 = UINT8_MAX;
	static uint32_t x3494 = UINT32_MAX;
	int8_t x3495 = INT8_MAX;
	volatile uint16_t x3496 = 7U;
	volatile uint32_t t66 = 31279U;

	t66 = ((x3493-x3494)-(x3495>>x3496));

	if (t66 != 256U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x3545 = -30;
	uint64_t x3547 = 1487847497LLU;
	volatile uint16_t x3548 = 4U;
	uint64_t t67 = 3LLU;

	t67 = ((x3545-x3546)-(x3547>>x3548));

	if (t67 != 18446744073616528571LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x3550 = UINT32_MAX;
	int8_t x3551 = INT8_MAX;
	static int16_t x3552 = 3;
	uint32_t t68 = 11623U;

	t68 = ((x3549-x3550)-(x3551>>x3552));

	if (t68 != 16U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x3581 = 1;
	int8_t x3582 = -10;
	uint8_t x3584 = 1U;
	uint64_t t69 = 20307555LLU;

	t69 = ((x3581-x3582)-(x3583>>x3584));

	if (t69 != 18446692272824910525LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x3709 = -1;
	static uint16_t x3710 = UINT16_MAX;
	int8_t x3711 = 0;
	int16_t x3712 = 0;

	t70 = ((x3709-x3710)-(x3711>>x3712));

	if (t70 != -65536) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x3737 = INT32_MIN;
	static uint64_t x3738 = 23LLU;
	volatile uint64_t x3739 = 55708LLU;
	uint8_t x3740 = 22U;
	uint64_t t71 = 5057120581LLU;

	t71 = ((x3737-x3738)-(x3739>>x3740));

	if (t71 != 18446744071562067945LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x3877 = -164;
	volatile uint64_t x3879 = UINT64_MAX;
	int8_t x3880 = 31;
	volatile uint64_t t72 = 70200237245130LLU;

	t72 = ((x3877-x3878)-(x3879>>x3880));

	if (t72 != 18446744065119551326LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x3901 = INT16_MIN;
	int64_t x3902 = -143188091LL;
	volatile uint32_t x3903 = 71U;
	static volatile uint16_t x3904 = 1U;
	volatile int64_t t73 = 124082915895434LL;

	t73 = ((x3901-x3902)-(x3903>>x3904));

	if (t73 != 143155288LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x3954 = INT16_MIN;
	static int8_t x3955 = 0;
	int8_t x3956 = 17;
	static uint32_t t74 = 65638U;

	t74 = ((x3953-x3954)-(x3955>>x3956));

	if (t74 != 32767U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x4130 = 1861U;
	uint16_t x4131 = 2369U;
	int8_t x4132 = 0;
	volatile uint64_t t75 = 25LLU;

	t75 = ((x4129-x4130)-(x4131>>x4132));

	if (t75 != 18446744073709547385LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x4143 = 360357551963LLU;
	volatile uint8_t x4144 = 0U;
	uint64_t t76 = 2035152446339LLU;

	t76 = ((x4141-x4142)-(x4143>>x4144));

	if (t76 != 18446743713363677737LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x4213 = INT16_MIN;
	volatile uint8_t x4215 = 113U;
	uint8_t x4216 = 1U;
	volatile uint64_t t77 = 496240856LLU;

	t77 = ((x4213-x4214)-(x4215>>x4216));

	if (t77 != 18446744071412910599LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x4258 = -1;
	uint16_t x4260 = 21U;
	int32_t t78 = 167976816;

	t78 = ((x4257-x4258)-(x4259>>x4260));

	if (t78 != 128) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x4265 = -1;
	int64_t x4266 = INT64_MIN;
	uint8_t x4268 = 7U;
	volatile int64_t t79 = 1135LL;

	t79 = ((x4265-x4266)-(x4267>>x4268));

	if (t79 != 9223372036854775744LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x4325 = -1LL;
	uint16_t x4326 = 28066U;
	volatile uint8_t x4328 = 1U;

	t80 = ((x4325-x4326)-(x4327>>x4328));

	if (t80 != -35258LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int32_t x4337 = INT32_MIN;
	int64_t x4338 = -1LL;
	static uint16_t x4339 = 1U;

	t81 = ((x4337-x4338)-(x4339>>x4340));

	if (t81 != -2147483647LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x4397 = INT16_MIN;
	uint64_t x4398 = 934575174475633LLU;
	static uint16_t x4399 = UINT16_MAX;
	static uint8_t x4400 = 0U;
	uint64_t t82 = 584241468LLU;

	t82 = ((x4397-x4398)-(x4399>>x4400));

	if (t82 != 18445809498534977680LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x4405 = 58U;
	volatile uint16_t x4406 = 6U;
	uint16_t x4408 = 1U;
	volatile int32_t t83 = -11165;

	t83 = ((x4405-x4406)-(x4407>>x4408));

	if (t83 != 9) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x4409 = 70980412454719325LLU;
	static uint16_t x4410 = UINT16_MAX;
	volatile int16_t x4411 = 0;
	uint16_t x4412 = 3U;
	uint64_t t84 = 8605449LLU;

	t84 = ((x4409-x4410)-(x4411>>x4412));

	if (t84 != 70980412454653790LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x4431 = 240274564063376749LL;
	static uint16_t x4432 = 0U;
	int64_t t85 = -304781LL;

	t85 = ((x4429-x4430)-(x4431>>x4432));

	if (t85 != -240274564063342552LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x4439 = 3U;
	volatile uint8_t x4440 = 7U;
	static int32_t t86 = -1826;

	t86 = ((x4437-x4438)-(x4439>>x4440));

	if (t86 != 35661) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x4454 = 380653;
	uint32_t x4455 = UINT32_MAX;
	static int32_t x4456 = 2;
	volatile int64_t t87 = -2231LL;

	t87 = ((x4453-x4454)-(x4455>>x4456));

	if (t87 != -1074122502LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x4498 = 176608479LL;
	static uint32_t x4499 = UINT32_MAX;
	static uint8_t x4500 = 1U;
	int64_t t88 = 1104098787LL;

	t88 = ((x4497-x4498)-(x4499>>x4500));

	if (t88 != -2324092101LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x4553 = 4;
	int32_t x4554 = 34094947;
	static volatile int16_t x4555 = 2059;
	volatile uint16_t x4556 = 13U;

	t89 = ((x4553-x4554)-(x4555>>x4556));

	if (t89 != -34094943) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x4733 = INT32_MIN;
	volatile uint32_t x4734 = UINT32_MAX;
	uint64_t x4735 = UINT64_MAX;
	int16_t x4736 = 26;
	uint64_t t90 = 123746LLU;

	t90 = ((x4733-x4734)-(x4735>>x4736));

	if (t90 != 18446743800979128322LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x4749 = UINT64_MAX;
	static int16_t x4752 = 1;
	volatile uint64_t t91 = 11631583LLU;

	t91 = ((x4749-x4750)-(x4751>>x4752));

	if (t91 != 18446744073709535360LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x5113 = -1;
	uint32_t x5115 = 181962U;
	volatile uint32_t t92 = 358U;

	t92 = ((x5113-x5114)-(x5115>>x5116));

	if (t92 != 2147438158U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x5165 = INT64_MIN;
	static int32_t x5166 = INT32_MIN;
	int32_t x5167 = INT32_MAX;

	t93 = ((x5165-x5166)-(x5167>>x5168));

	if (t93 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x5289 = 0;
	uint16_t x5290 = 147U;
	static volatile uint8_t x5291 = UINT8_MAX;
	int32_t x5292 = 0;
	static volatile int32_t t94 = 0;

	t94 = ((x5289-x5290)-(x5291>>x5292));

	if (t94 != -402) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x5325 = 0U;
	uint32_t x5328 = 1U;
	int64_t t95 = 0LL;

	t95 = ((x5325-x5326)-(x5327>>x5328));

	if (t95 != -4611686018427387775LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x5389 = INT64_MAX;
	int8_t x5391 = INT8_MAX;
	int8_t x5392 = 0;
	volatile int64_t t96 = 37572430403LL;

	t96 = ((x5389-x5390)-(x5391>>x5392));

	if (t96 != 9223372032559808385LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x5449 = -1LL;
	static int8_t x5450 = 0;
	uint8_t x5451 = 54U;
	volatile uint8_t x5452 = 0U;
	volatile int64_t t97 = 873645737675640LL;

	t97 = ((x5449-x5450)-(x5451>>x5452));

	if (t97 != -55LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x5493 = INT16_MAX;
	static int32_t x5494 = 30815;
	uint64_t x5496 = 1LLU;
	int32_t t98 = -2;

	t98 = ((x5493-x5494)-(x5495>>x5496));

	if (t98 != -30815) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x5541 = 12;
	uint16_t x5543 = UINT16_MAX;
	volatile int16_t x5544 = 1;
	static volatile int32_t t99 = -7032813;

	t99 = ((x5541-x5542)-(x5543>>x5544));

	if (t99 != -32757) { NG(); } else { ; }
	
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

