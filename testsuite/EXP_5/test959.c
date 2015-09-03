#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x73 = UINT64_MAX;
int16_t x97 = -111;
static int64_t x105 = INT64_MIN;
volatile int16_t x107 = 15;
static int16_t x108 = -1;
uint8_t x173 = UINT8_MAX;
uint64_t x175 = 1LLU;
uint16_t x220 = 29695U;
volatile uint16_t x237 = 1U;
uint64_t x238 = UINT64_MAX;
uint8_t x239 = 1U;
static int32_t t6 = 13183764;
uint16_t x279 = 2U;
static volatile uint16_t x302 = 174U;
int32_t t8 = 0;
static volatile uint32_t x334 = 70765406U;
static int32_t t9 = 185431300;
static int8_t x481 = INT8_MAX;
int16_t x484 = 968;
volatile int64_t x642 = 62188499916705097LL;
int64_t x684 = INT64_MAX;
uint64_t x717 = 4055640LLU;
int32_t t19 = -460552519;
uint64_t x854 = 422384LLU;
int8_t x855 = 0;
int64_t x1097 = INT64_MAX;
volatile int32_t t24 = -4;
volatile int16_t x1163 = 0;
static int64_t x1164 = INT64_MIN;
static int32_t t25 = -62;
int16_t x1241 = INT16_MIN;
volatile int32_t t26 = 316778238;
static uint32_t x1282 = 1795U;
int16_t x1284 = -181;
int8_t x1289 = INT8_MIN;
static uint8_t x1291 = 15U;
int32_t x1333 = INT32_MAX;
uint64_t x1336 = 150LLU;
int16_t x1356 = -1;
volatile uint64_t x1443 = 2LLU;
int32_t x1508 = INT32_MIN;
uint32_t x1625 = 14126877U;
volatile int32_t x1627 = 1;
int32_t t35 = -55756757;
uint32_t x2048 = 118216U;
int32_t x2176 = -56717;
static int32_t x2212 = INT32_MIN;
volatile int32_t t42 = -494089334;
int16_t x2229 = INT16_MIN;
static volatile int32_t t44 = -26;
static volatile uint32_t x2253 = 177881906U;
uint8_t x2254 = 0U;
int8_t x2255 = 22;
int32_t t45 = 172879;
int64_t x2333 = INT64_MIN;
int32_t t46 = 0;
int16_t x2357 = INT16_MIN;
int32_t x2361 = INT32_MIN;
static uint32_t x2364 = 1U;
int32_t t49 = 2012680;
int8_t x2571 = 1;
uint16_t x2742 = 481U;
uint16_t x2792 = 680U;
uint8_t x2977 = 30U;
volatile int32_t x3045 = INT32_MAX;
static volatile int32_t t60 = 129129;
uint64_t x3210 = UINT64_MAX;
int32_t x3211 = 1;
uint64_t x3254 = UINT64_MAX;
int32_t t64 = -1527;
uint8_t x3420 = UINT8_MAX;
uint16_t x3730 = UINT16_MAX;
volatile int32_t t70 = 169754153;
uint64_t x3747 = 0LLU;
static int64_t x3748 = INT64_MAX;
int8_t x3813 = 14;
uint64_t x3814 = 1839060771895LLU;
uint32_t x3816 = UINT32_MAX;
volatile uint8_t x3971 = 3U;
int8_t x4103 = 1;
volatile uint64_t x4126 = 474LLU;
int64_t x4128 = 4LL;
static volatile uint8_t x4173 = 6U;
static volatile int8_t x4176 = 13;
uint16_t x4251 = 3U;
volatile int32_t t81 = 1;
static uint32_t x4406 = 21314046U;
int32_t t83 = 0;
int64_t x4473 = 452LL;
volatile int64_t x4477 = -1LL;
static int32_t t87 = 9;
uint8_t x4536 = 20U;
static int32_t t88 = -14450;
static volatile int32_t t89 = 44336;
static int8_t x4689 = INT8_MIN;
int64_t x4690 = INT64_MAX;
int16_t x4692 = -113;
static volatile int8_t x4773 = INT8_MIN;
static int64_t x4776 = 58954LL;
volatile int64_t x4821 = INT64_MIN;
uint8_t x4824 = 7U;
int32_t t92 = 22;
uint16_t x4831 = 15U;
int32_t x4917 = -2;
uint32_t x4918 = 2127830171U;
static volatile uint32_t x5050 = 58U;
int8_t x5051 = 0;
volatile int32_t t97 = -1962318;
int16_t x5068 = INT16_MIN;


void f0(void) {
	int8_t x69 = -1;
	static int16_t x70 = INT16_MAX;
	int16_t x71 = 0;
	int64_t x72 = 0LL;
	volatile int32_t t0 = 12;

	t0 = (x69<=((x70<<x71)<x72));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x74 = 450946771717LLU;
	uint8_t x75 = 2U;
	uint8_t x76 = 0U;
	volatile int32_t t1 = 22726;

	t1 = (x73<=((x74<<x75)<x76));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x98 = UINT32_MAX;
	int8_t x99 = 1;
	static int32_t x100 = -387;
	volatile int32_t t2 = 25572794;

	t2 = (x97<=((x98<<x99)<x100));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x106 = 29401U;
	int32_t t3 = 1106781;

	t3 = (x105<=((x106<<x107)<x108));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x174 = 54U;
	int16_t x176 = 58;
	static int32_t t4 = -97;

	t4 = (x173<=((x174<<x175)<x176));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x217 = -1;
	uint32_t x218 = 76579611U;
	static int8_t x219 = 1;
	int32_t t5 = 2897888;

	t5 = (x217<=((x218<<x219)<x220));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x240 = INT32_MAX;

	t6 = (x237<=((x238<<x239)<x240));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x277 = 3;
	static volatile uint8_t x278 = 55U;
	int32_t x280 = 10;
	int32_t t7 = 0;

	t7 = (x277<=((x278<<x279)<x280));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x301 = 2835U;
	int8_t x303 = 1;
	volatile uint32_t x304 = UINT32_MAX;

	t8 = (x301<=((x302<<x303)<x304));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x333 = -43660057387388LL;
	int8_t x335 = 15;
	int16_t x336 = 1;

	t9 = (x333<=((x334<<x335)<x336));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x341 = 1LLU;
	uint32_t x342 = 65195051U;
	volatile uint8_t x343 = 1U;
	static int16_t x344 = INT16_MAX;
	volatile int32_t t10 = -232395656;

	t10 = (x341<=((x342<<x343)<x344));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x369 = UINT16_MAX;
	static uint16_t x370 = 119U;
	uint8_t x371 = 4U;
	static int32_t x372 = INT32_MAX;
	volatile int32_t t11 = -2;

	t11 = (x369<=((x370<<x371)<x372));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x482 = UINT16_MAX;
	uint8_t x483 = 6U;
	int32_t t12 = -708400085;

	t12 = (x481<=((x482<<x483)<x484));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int64_t x501 = INT64_MAX;
	uint8_t x502 = UINT8_MAX;
	volatile uint16_t x503 = 5U;
	volatile int32_t x504 = -1;
	volatile int32_t t13 = -1036037;

	t13 = (x501<=((x502<<x503)<x504));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x589 = -4;
	uint32_t x590 = 55599U;
	volatile uint8_t x591 = 7U;
	static int16_t x592 = INT16_MIN;
	volatile int32_t t14 = -163;

	t14 = (x589<=((x590<<x591)<x592));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x641 = -3540;
	int8_t x643 = 4;
	int64_t x644 = INT64_MIN;
	int32_t t15 = 302789;

	t15 = (x641<=((x642<<x643)<x644));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x681 = -1;
	int8_t x682 = INT8_MAX;
	static int32_t x683 = 0;
	static volatile int32_t t16 = 47857;

	t16 = (x681<=((x682<<x683)<x684));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x718 = 7U;
	volatile uint32_t x719 = 13U;
	static uint64_t x720 = 99270281893LLU;
	int32_t t17 = 272593;

	t17 = (x717<=((x718<<x719)<x720));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x741 = -6;
	int16_t x742 = INT16_MAX;
	uint32_t x743 = 12U;
	int64_t x744 = INT64_MAX;
	static int32_t t18 = 1466;

	t18 = (x741<=((x742<<x743)<x744));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x761 = 109U;
	volatile int16_t x762 = 903;
	int8_t x763 = 1;
	int32_t x764 = INT32_MAX;

	t19 = (x761<=((x762<<x763)<x764));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x853 = -38;
	volatile uint16_t x856 = UINT16_MAX;
	volatile int32_t t20 = 30401655;

	t20 = (x853<=((x854<<x855)<x856));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x905 = -1;
	uint32_t x906 = UINT32_MAX;
	uint8_t x907 = 0U;
	volatile uint32_t x908 = UINT32_MAX;
	volatile int32_t t21 = 721273064;

	t21 = (x905<=((x906<<x907)<x908));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x1033 = UINT8_MAX;
	volatile uint32_t x1034 = 1849U;
	uint8_t x1035 = 0U;
	int8_t x1036 = INT8_MAX;
	volatile int32_t t22 = 127;

	t22 = (x1033<=((x1034<<x1035)<x1036));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x1098 = 108U;
	volatile uint16_t x1099 = 0U;
	volatile int16_t x1100 = -1;
	int32_t t23 = 61;

	t23 = (x1097<=((x1098<<x1099)<x1100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x1129 = 108893U;
	int8_t x1130 = INT8_MAX;
	uint8_t x1131 = 3U;
	static uint8_t x1132 = 54U;

	t24 = (x1129<=((x1130<<x1131)<x1132));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1161 = INT64_MIN;
	uint8_t x1162 = UINT8_MAX;

	t25 = (x1161<=((x1162<<x1163)<x1164));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1242 = INT8_MAX;
	int8_t x1243 = 1;
	static int64_t x1244 = INT64_MIN;

	t26 = (x1241<=((x1242<<x1243)<x1244));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1277 = UINT16_MAX;
	static int8_t x1278 = INT8_MAX;
	int32_t x1279 = 2;
	uint16_t x1280 = 5U;
	int32_t t27 = 234;

	t27 = (x1277<=((x1278<<x1279)<x1280));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1281 = 964U;
	uint8_t x1283 = 4U;
	volatile int32_t t28 = 590;

	t28 = (x1281<=((x1282<<x1283)<x1284));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x1290 = 6U;
	int64_t x1292 = 195706540458274LL;
	volatile int32_t t29 = -10;

	t29 = (x1289<=((x1290<<x1291)<x1292));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1334 = UINT64_MAX;
	uint8_t x1335 = 22U;
	volatile int32_t t30 = -1251;

	t30 = (x1333<=((x1334<<x1335)<x1336));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1353 = INT16_MIN;
	uint64_t x1354 = UINT64_MAX;
	uint8_t x1355 = 1U;
	volatile int32_t t31 = -877;

	t31 = (x1353<=((x1354<<x1355)<x1356));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1437 = INT16_MAX;
	uint64_t x1438 = UINT64_MAX;
	uint16_t x1439 = 3U;
	volatile int16_t x1440 = INT16_MAX;
	int32_t t32 = 15583653;

	t32 = (x1437<=((x1438<<x1439)<x1440));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x1441 = INT8_MIN;
	int8_t x1442 = 1;
	volatile uint8_t x1444 = 6U;
	volatile int32_t t33 = -1;

	t33 = (x1441<=((x1442<<x1443)<x1444));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int16_t x1505 = 4;
	volatile int8_t x1506 = INT8_MAX;
	int64_t x1507 = 0LL;
	volatile int32_t t34 = 1961642;

	t34 = (x1505<=((x1506<<x1507)<x1508));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x1626 = UINT8_MAX;
	int16_t x1628 = INT16_MIN;

	t35 = (x1625<=((x1626<<x1627)<x1628));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x1673 = 1943919496073LLU;
	static uint8_t x1674 = 2U;
	int8_t x1675 = 0;
	static uint32_t x1676 = UINT32_MAX;
	static volatile int32_t t36 = -17199;

	t36 = (x1673<=((x1674<<x1675)<x1676));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x1957 = 0;
	uint64_t x1958 = 46942LLU;
	int16_t x1959 = 19;
	static int64_t x1960 = INT64_MIN;
	volatile int32_t t37 = -551;

	t37 = (x1957<=((x1958<<x1959)<x1960));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x1969 = -1;
	int16_t x1970 = 1;
	static volatile uint8_t x1971 = 0U;
	int8_t x1972 = -1;
	int32_t t38 = -63;

	t38 = (x1969<=((x1970<<x1971)<x1972));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x2021 = INT16_MIN;
	uint64_t x2022 = UINT64_MAX;
	int64_t x2023 = 1LL;
	static int64_t x2024 = INT64_MIN;
	static int32_t t39 = -70;

	t39 = (x2021<=((x2022<<x2023)<x2024));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x2045 = INT8_MIN;
	uint64_t x2046 = 4LLU;
	int8_t x2047 = 6;
	static volatile int32_t t40 = 26;

	t40 = (x2045<=((x2046<<x2047)<x2048));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x2173 = 5480U;
	static uint64_t x2174 = UINT64_MAX;
	volatile uint16_t x2175 = 16U;
	int32_t t41 = 9727587;

	t41 = (x2173<=((x2174<<x2175)<x2176));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x2209 = INT16_MIN;
	volatile uint32_t x2210 = 2093278346U;
	static uint16_t x2211 = 0U;

	t42 = (x2209<=((x2210<<x2211)<x2212));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2230 = INT16_MAX;
	volatile int8_t x2231 = 0;
	static int8_t x2232 = -1;
	int32_t t43 = 62;

	t43 = (x2229<=((x2230<<x2231)<x2232));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x2245 = INT8_MAX;
	static volatile int64_t x2246 = INT64_MAX;
	volatile uint8_t x2247 = 0U;
	int32_t x2248 = INT32_MIN;

	t44 = (x2245<=((x2246<<x2247)<x2248));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x2256 = INT64_MIN;

	t45 = (x2253<=((x2254<<x2255)<x2256));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x2334 = UINT8_MAX;
	static volatile int8_t x2335 = 8;
	int16_t x2336 = INT16_MAX;

	t46 = (x2333<=((x2334<<x2335)<x2336));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x2358 = UINT64_MAX;
	uint16_t x2359 = 0U;
	static int8_t x2360 = -1;
	volatile int32_t t47 = -2261835;

	t47 = (x2357<=((x2358<<x2359)<x2360));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x2362 = UINT8_MAX;
	uint8_t x2363 = 13U;
	int32_t t48 = 417;

	t48 = (x2361<=((x2362<<x2363)<x2364));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x2385 = 27LLU;
	uint16_t x2386 = 12U;
	static uint8_t x2387 = 8U;
	int16_t x2388 = -1;

	t49 = (x2385<=((x2386<<x2387)<x2388));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x2409 = UINT16_MAX;
	uint64_t x2410 = UINT64_MAX;
	static int32_t x2411 = 53;
	static volatile int8_t x2412 = -1;
	volatile int32_t t50 = 764387386;

	t50 = (x2409<=((x2410<<x2411)<x2412));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x2537 = -1;
	static uint16_t x2538 = 115U;
	uint8_t x2539 = 0U;
	int16_t x2540 = INT16_MAX;
	int32_t t51 = 20;

	t51 = (x2537<=((x2538<<x2539)<x2540));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x2569 = -1;
	static int32_t x2570 = 3541;
	uint8_t x2572 = 1U;
	static int32_t t52 = -9016;

	t52 = (x2569<=((x2570<<x2571)<x2572));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint16_t x2741 = UINT16_MAX;
	uint8_t x2743 = 4U;
	static int32_t x2744 = INT32_MIN;
	int32_t t53 = -1;

	t53 = (x2741<=((x2742<<x2743)<x2744));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x2789 = 4U;
	volatile uint16_t x2790 = 4171U;
	uint8_t x2791 = 8U;
	static int32_t t54 = 19500;

	t54 = (x2789<=((x2790<<x2791)<x2792));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x2917 = 4139895542753621LLU;
	uint8_t x2918 = UINT8_MAX;
	int8_t x2919 = 0;
	int16_t x2920 = 6837;
	volatile int32_t t55 = 19;

	t55 = (x2917<=((x2918<<x2919)<x2920));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x2921 = INT16_MAX;
	uint8_t x2922 = 3U;
	volatile int16_t x2923 = 7;
	uint8_t x2924 = 117U;
	static volatile int32_t t56 = -27281;

	t56 = (x2921<=((x2922<<x2923)<x2924));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x2978 = 2;
	volatile int8_t x2979 = 1;
	int32_t x2980 = -1;
	int32_t t57 = -378156019;

	t57 = (x2977<=((x2978<<x2979)<x2980));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x3021 = INT8_MIN;
	static uint16_t x3022 = 66U;
	int8_t x3023 = 1;
	int64_t x3024 = -16249LL;
	volatile int32_t t58 = -12;

	t58 = (x3021<=((x3022<<x3023)<x3024));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x3046 = 5779;
	uint16_t x3047 = 0U;
	int32_t x3048 = -1;
	static volatile int32_t t59 = -206042;

	t59 = (x3045<=((x3046<<x3047)<x3048));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x3081 = -1;
	int32_t x3082 = 26;
	uint8_t x3083 = 4U;
	uint64_t x3084 = 445910757885313LLU;

	t60 = (x3081<=((x3082<<x3083)<x3084));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x3121 = -1;
	static uint32_t x3122 = 21901U;
	uint16_t x3123 = 0U;
	int16_t x3124 = 1;
	volatile int32_t t61 = -4740674;

	t61 = (x3121<=((x3122<<x3123)<x3124));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x3153 = INT8_MIN;
	static uint64_t x3154 = UINT64_MAX;
	uint8_t x3155 = 2U;
	int8_t x3156 = INT8_MIN;
	static int32_t t62 = 3780;

	t62 = (x3153<=((x3154<<x3155)<x3156));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x3209 = INT64_MAX;
	volatile int32_t x3212 = -28165842;
	static int32_t t63 = 13591794;

	t63 = (x3209<=((x3210<<x3211)<x3212));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x3253 = INT32_MAX;
	volatile int8_t x3255 = 24;
	volatile int32_t x3256 = 204;

	t64 = (x3253<=((x3254<<x3255)<x3256));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint64_t x3417 = 68LLU;
	static uint8_t x3418 = 97U;
	uint16_t x3419 = 14U;
	static int32_t t65 = 0;

	t65 = (x3417<=((x3418<<x3419)<x3420));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x3429 = 15340045;
	uint8_t x3430 = 89U;
	static uint16_t x3431 = 11U;
	int16_t x3432 = INT16_MAX;
	static volatile int32_t t66 = -55987175;

	t66 = (x3429<=((x3430<<x3431)<x3432));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x3433 = -1;
	int64_t x3434 = 5343783802305LL;
	int16_t x3435 = 1;
	static int16_t x3436 = -1;
	int32_t t67 = 663;

	t67 = (x3433<=((x3434<<x3435)<x3436));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x3573 = 348;
	uint64_t x3574 = 27594586341931588LLU;
	int8_t x3575 = 10;
	uint32_t x3576 = UINT32_MAX;
	static int32_t t68 = 20;

	t68 = (x3573<=((x3574<<x3575)<x3576));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x3729 = INT32_MIN;
	int16_t x3731 = 0;
	uint16_t x3732 = 5U;
	int32_t t69 = 6020;

	t69 = (x3729<=((x3730<<x3731)<x3732));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x3737 = -2;
	uint16_t x3738 = 0U;
	uint16_t x3739 = 17U;
	uint32_t x3740 = 34812U;

	t70 = (x3737<=((x3738<<x3739)<x3740));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x3745 = 73U;
	volatile uint16_t x3746 = 105U;
	int32_t t71 = -7969;

	t71 = (x3745<=((x3746<<x3747)<x3748));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x3785 = -2;
	int64_t x3786 = 1343621LL;
	int8_t x3787 = 33;
	int16_t x3788 = -12;
	volatile int32_t t72 = -1058307278;

	t72 = (x3785<=((x3786<<x3787)<x3788));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x3815 = 1LLU;
	int32_t t73 = -5877;

	t73 = (x3813<=((x3814<<x3815)<x3816));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x3845 = INT64_MIN;
	static uint16_t x3846 = 0U;
	uint8_t x3847 = 8U;
	volatile uint64_t x3848 = 5536LLU;
	volatile int32_t t74 = -6;

	t74 = (x3845<=((x3846<<x3847)<x3848));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x3909 = -1LL;
	uint16_t x3910 = UINT16_MAX;
	int16_t x3911 = 1;
	int8_t x3912 = -1;
	static int32_t t75 = 15702;

	t75 = (x3909<=((x3910<<x3911)<x3912));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x3969 = 1098LLU;
	static volatile uint8_t x3970 = 103U;
	int16_t x3972 = INT16_MIN;
	volatile int32_t t76 = 44585813;

	t76 = (x3969<=((x3970<<x3971)<x3972));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x4029 = 1552U;
	int8_t x4030 = 0;
	uint64_t x4031 = 3LLU;
	volatile int64_t x4032 = INT64_MIN;
	static int32_t t77 = 2;

	t77 = (x4029<=((x4030<<x4031)<x4032));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x4101 = INT32_MAX;
	uint8_t x4102 = 1U;
	uint64_t x4104 = 699LLU;
	static int32_t t78 = -99315266;

	t78 = (x4101<=((x4102<<x4103)<x4104));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x4125 = -32;
	static int8_t x4127 = 9;
	int32_t t79 = 23777409;

	t79 = (x4125<=((x4126<<x4127)<x4128));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x4174 = 1;
	volatile int8_t x4175 = 0;
	volatile int32_t t80 = 370;

	t80 = (x4173<=((x4174<<x4175)<x4176));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x4249 = INT32_MIN;
	uint16_t x4250 = 15U;
	uint16_t x4252 = 2583U;

	t81 = (x4249<=((x4250<<x4251)<x4252));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x4253 = INT64_MIN;
	int16_t x4254 = 7;
	int8_t x4255 = 7;
	volatile uint16_t x4256 = 7044U;
	static int32_t t82 = -479450;

	t82 = (x4253<=((x4254<<x4255)<x4256));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x4405 = 150U;
	uint16_t x4407 = 6U;
	int16_t x4408 = -116;

	t83 = (x4405<=((x4406<<x4407)<x4408));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x4437 = INT8_MIN;
	uint8_t x4438 = 0U;
	static uint8_t x4439 = 2U;
	static uint8_t x4440 = UINT8_MAX;
	int32_t t84 = -1138;

	t84 = (x4437<=((x4438<<x4439)<x4440));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x4474 = UINT8_MAX;
	uint16_t x4475 = 2U;
	uint8_t x4476 = UINT8_MAX;
	volatile int32_t t85 = 7;

	t85 = (x4473<=((x4474<<x4475)<x4476));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x4478 = 108409984U;
	int8_t x4479 = 23;
	uint16_t x4480 = 1U;
	int32_t t86 = 7619142;

	t86 = (x4477<=((x4478<<x4479)<x4480));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x4525 = 49267U;
	int16_t x4526 = 16;
	int8_t x4527 = 0;
	int64_t x4528 = INT64_MAX;

	t87 = (x4525<=((x4526<<x4527)<x4528));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x4533 = UINT16_MAX;
	static uint64_t x4534 = UINT64_MAX;
	uint8_t x4535 = 43U;

	t88 = (x4533<=((x4534<<x4535)<x4536));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x4541 = INT32_MIN;
	int32_t x4542 = INT32_MAX;
	volatile uint8_t x4543 = 0U;
	static uint16_t x4544 = UINT16_MAX;

	t89 = (x4541<=((x4542<<x4543)<x4544));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x4691 = 0U;
	int32_t t90 = 119917145;

	t90 = (x4689<=((x4690<<x4691)<x4692));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x4774 = INT8_MAX;
	static uint8_t x4775 = 4U;
	int32_t t91 = -57439964;

	t91 = (x4773<=((x4774<<x4775)<x4776));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x4822 = UINT16_MAX;
	uint8_t x4823 = 13U;

	t92 = (x4821<=((x4822<<x4823)<x4824));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x4829 = INT16_MIN;
	static uint8_t x4830 = 115U;
	volatile int64_t x4832 = 2150164LL;
	static int32_t t93 = 3528292;

	t93 = (x4829<=((x4830<<x4831)<x4832));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x4919 = 1;
	uint64_t x4920 = 123LLU;
	volatile int32_t t94 = 27276;

	t94 = (x4917<=((x4918<<x4919)<x4920));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x4949 = 424123U;
	int64_t x4950 = 16959419687736149LL;
	volatile int8_t x4951 = 1;
	volatile uint64_t x4952 = 8571612097495570LLU;
	int32_t t95 = -170166;

	t95 = (x4949<=((x4950<<x4951)<x4952));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x5049 = INT64_MAX;
	volatile uint32_t x5052 = 501U;
	int32_t t96 = -1;

	t96 = (x5049<=((x5050<<x5051)<x5052));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x5057 = INT8_MAX;
	uint32_t x5058 = 747U;
	static uint32_t x5059 = 5U;
	int64_t x5060 = -1LL;

	t97 = (x5057<=((x5058<<x5059)<x5060));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x5065 = UINT16_MAX;
	static uint16_t x5066 = UINT16_MAX;
	int8_t x5067 = 2;
	volatile int32_t t98 = -110759870;

	t98 = (x5065<=((x5066<<x5067)<x5068));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x5121 = INT8_MIN;
	static volatile uint16_t x5122 = 114U;
	uint32_t x5123 = 9U;
	static int16_t x5124 = -1688;
	volatile int32_t t99 = -10166;

	t99 = (x5121<=((x5122<<x5123)<x5124));

	if (t99 != 1) { NG(); } else { ; }
	
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

