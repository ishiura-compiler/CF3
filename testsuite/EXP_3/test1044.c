#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x88 = 14;
uint8_t x139 = 24U;
uint16_t x263 = UINT16_MAX;
uint8_t x264 = 3U;
static int32_t t5 = 20860812;
volatile uint64_t t6 = 0LLU;
volatile int32_t t8 = 10288;
static int16_t x909 = INT16_MIN;
uint32_t x933 = 3829358U;
uint16_t x936 = 0U;
uint32_t x960 = 0U;
int8_t x1225 = INT8_MIN;
int8_t x1228 = 0;
volatile int8_t x1425 = INT8_MIN;
uint64_t x1428 = 1LLU;
int8_t x1588 = 0;
uint64_t t18 = 13LLU;
int32_t x1834 = -1;
int64_t x1835 = INT64_MAX;
int16_t x2205 = 211;
int8_t x2206 = INT8_MIN;
volatile uint64_t t22 = 12691818167LLU;
int8_t x2246 = INT8_MIN;
uint64_t x2349 = UINT64_MAX;
uint64_t x2351 = UINT64_MAX;
static uint32_t t26 = 0U;
uint8_t x2463 = 40U;
volatile uint16_t x2507 = UINT16_MAX;
int16_t x2770 = INT16_MIN;
int16_t x2771 = 3946;
uint32_t x2973 = 1U;
uint8_t x3168 = 0U;
int32_t x3173 = -1;
static volatile uint8_t x3607 = 2U;
volatile uint64_t x3619 = UINT64_MAX;
int16_t x3994 = 7;
static int64_t x3996 = 29LL;
static volatile int64_t x4078 = 241LL;
int16_t x4349 = INT16_MAX;
int8_t x4441 = INT8_MIN;
volatile int32_t x4442 = -1;
uint64_t x4585 = 12606233LLU;
static volatile uint64_t t41 = 755772490LLU;
int8_t x4936 = 3;
int8_t x4938 = INT8_MAX;
static uint64_t t45 = 146614LLU;
int8_t x4977 = INT8_MIN;
static uint16_t x5002 = UINT16_MAX;
volatile int32_t t47 = -205955;
int64_t x5163 = INT64_MAX;
volatile int8_t x5164 = 0;
int8_t x5253 = INT8_MIN;
int16_t x5388 = 3;
int64_t x5506 = INT64_MAX;
uint8_t x5594 = UINT8_MAX;
static int64_t x5638 = -1LL;
volatile int64_t x5718 = -12263505259612378LL;
uint8_t x5720 = 6U;
int16_t x5735 = 6950;
volatile uint64_t x6087 = 11689LLU;
static uint64_t t60 = 9505930384751593LLU;
static uint64_t x6317 = 1448LLU;
static int32_t x6318 = -1;
uint16_t x6319 = 3170U;
static uint16_t x6354 = UINT16_MAX;
uint8_t x6355 = UINT8_MAX;
volatile int32_t t63 = -81014;
static int8_t x6386 = -9;
static uint64_t x6387 = UINT64_MAX;
volatile uint64_t t64 = 106258267LLU;
int64_t x6795 = INT64_MAX;
volatile uint8_t x6796 = 0U;
int32_t x6821 = -15524;
int8_t x6822 = INT8_MIN;
int8_t x6858 = 1;
uint32_t t73 = 32203U;
int32_t t75 = 1;
uint32_t x7669 = 278U;
uint8_t x7672 = 3U;
static volatile int32_t x7715 = INT32_MAX;
static int16_t x7931 = INT16_MAX;
static uint8_t x8150 = UINT8_MAX;
static int32_t t83 = -474572780;
uint16_t x8308 = 3U;
uint32_t x8425 = UINT32_MAX;
static uint16_t x8515 = 4007U;
int32_t x8569 = 285699115;
int16_t x8765 = 1;
static int16_t x8767 = INT16_MAX;
volatile uint64_t x8861 = 14634869042017LLU;
volatile uint64_t t90 = 64472LLU;
volatile int64_t t92 = 172971613306501842LL;
static volatile int32_t x9315 = INT32_MAX;
volatile int32_t t93 = -7;
uint32_t x9465 = 118836423U;
static volatile int64_t t96 = 11798174228564913LL;
static volatile uint64_t t97 = 58LLU;
int64_t x9811 = INT64_MAX;
static volatile int16_t x9844 = 8;


void f0(void) {
	volatile int64_t x1 = -25641LL;
	uint16_t x2 = UINT16_MAX;
	volatile uint32_t x3 = 1908986U;
	volatile int8_t x4 = 13;
	int64_t t0 = -137115175160179649LL;

	t0 = ((x1*x2)/(x3>>x4));

	if (t0 != -7211943LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x85 = INT8_MAX;
	int8_t x86 = 31;
	volatile uint16_t x87 = UINT16_MAX;
	int32_t t1 = 32137148;

	t1 = ((x85*x86)/(x87>>x88));

	if (t1 != 1312) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x137 = -1;
	volatile int64_t x138 = 479LL;
	int64_t x140 = 1LL;
	volatile int64_t t2 = -571932696LL;

	t2 = ((x137*x138)/(x139>>x140));

	if (t2 != -39LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x153 = 1896U;
	int16_t x154 = INT16_MIN;
	uint64_t x155 = UINT64_MAX;
	volatile int32_t x156 = 1;
	volatile uint64_t t3 = 25LLU;

	t3 = ((x153*x154)/(x155>>x156));

	if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x261 = -1;
	uint64_t x262 = UINT64_MAX;
	volatile uint64_t t4 = 0LLU;

	t4 = ((x261*x262)/(x263>>x264));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x297 = 21;
	static int32_t x298 = 813;
	int32_t x299 = 2358;
	uint16_t x300 = 7U;

	t5 = ((x297*x298)/(x299>>x300));

	if (t5 != 948) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x321 = 7774135606797LLU;
	volatile int8_t x322 = INT8_MAX;
	int64_t x323 = INT64_MAX;
	int8_t x324 = 5;

	t6 = ((x321*x322)/(x323>>x324));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x465 = UINT64_MAX;
	int64_t x466 = INT64_MIN;
	static uint8_t x467 = UINT8_MAX;
	uint8_t x468 = 1U;
	static uint64_t t7 = 2659264LLU;

	t7 = ((x465*x466)/(x467>>x468));

	if (t7 != 72624976668147841LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x597 = INT8_MIN;
	int8_t x598 = 52;
	uint16_t x599 = UINT16_MAX;
	static volatile uint8_t x600 = 15U;

	t8 = ((x597*x598)/(x599>>x600));

	if (t8 != -6656) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x649 = 2U;
	volatile int32_t x650 = -60713;
	uint64_t x651 = UINT64_MAX;
	volatile int8_t x652 = 0;
	uint64_t t9 = 1001023907453LLU;

	t9 = ((x649*x650)/(x651>>x652));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x833 = -87;
	static uint8_t x834 = UINT8_MAX;
	uint8_t x835 = 2U;
	int16_t x836 = 1;
	int32_t t10 = -17422251;

	t10 = ((x833*x834)/(x835>>x836));

	if (t10 != -22185) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x905 = UINT8_MAX;
	static int8_t x906 = INT8_MAX;
	static int8_t x907 = INT8_MAX;
	uint8_t x908 = 0U;
	static int32_t t11 = 0;

	t11 = ((x905*x906)/(x907>>x908));

	if (t11 != 255) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x910 = UINT8_MAX;
	volatile uint8_t x911 = 24U;
	static uint16_t x912 = 1U;
	int32_t t12 = -1;

	t12 = ((x909*x910)/(x911>>x912));

	if (t12 != -696320) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x934 = -1;
	uint32_t x935 = 1U;
	static uint32_t t13 = 56U;

	t13 = ((x933*x934)/(x935>>x936));

	if (t13 != 4291137938U) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x957 = 22LLU;
	static volatile int64_t x958 = -1LL;
	uint16_t x959 = UINT16_MAX;
	uint64_t t14 = 50199190462470LLU;

	t14 = ((x957*x958)/(x959>>x960));

	if (t14 != 281479271743488LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x1226 = INT8_MAX;
	uint16_t x1227 = UINT16_MAX;
	volatile int32_t t15 = -7403159;

	t15 = ((x1225*x1226)/(x1227>>x1228));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x1317 = INT8_MIN;
	volatile int16_t x1318 = INT16_MIN;
	volatile uint16_t x1319 = 1702U;
	int8_t x1320 = 2;
	volatile int32_t t16 = -4080751;

	t16 = ((x1317*x1318)/(x1319>>x1320));

	if (t16 != 9868) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1426 = INT8_MIN;
	static uint64_t x1427 = 1702LLU;
	uint64_t t17 = 520LLU;

	t17 = ((x1425*x1426)/(x1427>>x1428));

	if (t17 != 19LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x1585 = -1LL;
	uint64_t x1586 = UINT64_MAX;
	uint32_t x1587 = 827714U;

	t18 = ((x1585*x1586)/(x1587>>x1588));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x1833 = 4082U;
	uint8_t x1836 = 3U;
	volatile int64_t t19 = 267310801535LL;

	t19 = ((x1833*x1834)/(x1835>>x1836));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x1861 = -1;
	volatile int8_t x1862 = 1;
	int32_t x1863 = INT32_MAX;
	static uint32_t x1864 = 1U;
	int32_t t20 = 109536911;

	t20 = ((x1861*x1862)/(x1863>>x1864));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x2207 = UINT8_MAX;
	static uint8_t x2208 = 4U;
	static int32_t t21 = -148474;

	t21 = ((x2205*x2206)/(x2207>>x2208));

	if (t21 != -1800) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x2241 = 2363360301816665LLU;
	int16_t x2242 = INT16_MAX;
	uint16_t x2243 = 203U;
	int64_t x2244 = 1LL;

	t22 = ((x2241*x2242)/(x2243>>x2244));

	if (t22 != 36170799156321342LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x2245 = 710036U;
	int64_t x2247 = INT64_MAX;
	int16_t x2248 = 25;
	volatile int64_t t23 = -1781024LL;

	t23 = ((x2245*x2246)/(x2247>>x2248));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x2309 = INT8_MAX;
	int64_t x2310 = 227826461919006LL;
	uint16_t x2311 = UINT16_MAX;
	volatile int8_t x2312 = 1;
	volatile int64_t t24 = 83195151774LL;

	t24 = ((x2309*x2310)/(x2311>>x2312));

	if (t24 != 883021352693LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x2350 = -5LL;
	volatile uint8_t x2352 = 0U;
	volatile uint64_t t25 = 1247559735125167LLU;

	t25 = ((x2349*x2350)/(x2351>>x2352));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x2357 = INT16_MIN;
	int16_t x2358 = INT16_MIN;
	uint32_t x2359 = 1062390760U;
	uint8_t x2360 = 12U;

	t26 = ((x2357*x2358)/(x2359>>x2360));

	if (t26 != 4139U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x2461 = INT64_MAX;
	int32_t x2462 = -1;
	static uint8_t x2464 = 3U;
	static int64_t t27 = -23852353897LL;

	t27 = ((x2461*x2462)/(x2463>>x2464));

	if (t27 != -1844674407370955161LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x2505 = 325843417077674LL;
	int8_t x2506 = INT8_MIN;
	uint16_t x2508 = 6U;
	volatile int64_t t28 = -961669186303LL;

	t28 = ((x2505*x2506)/(x2507>>x2508));

	if (t28 != -40770241823990LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x2769 = INT8_MIN;
	static uint8_t x2772 = 2U;
	volatile int32_t t29 = -5416;

	t29 = ((x2769*x2770)/(x2771>>x2772));

	if (t29 != 4253) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x2974 = 0;
	uint32_t x2975 = 1423782357U;
	volatile uint16_t x2976 = 18U;
	volatile uint32_t t30 = 112869U;

	t30 = ((x2973*x2974)/(x2975>>x2976));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x3165 = INT64_MIN;
	uint64_t x3166 = 207624653558LLU;
	volatile uint32_t x3167 = UINT32_MAX;
	volatile uint64_t t31 = 28048948LLU;

	t31 = ((x3165*x3166)/(x3167>>x3168));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x3174 = UINT8_MAX;
	int64_t x3175 = 1425501737245LL;
	volatile uint8_t x3176 = 3U;
	static volatile int64_t t32 = 877448470LL;

	t32 = ((x3173*x3174)/(x3175>>x3176));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x3253 = INT16_MIN;
	uint8_t x3254 = 13U;
	static int8_t x3255 = INT8_MAX;
	static uint8_t x3256 = 6U;
	static volatile int32_t t33 = -10;

	t33 = ((x3253*x3254)/(x3255>>x3256));

	if (t33 != -425984) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x3605 = UINT16_MAX;
	volatile int8_t x3606 = -1;
	uint16_t x3608 = 1U;
	int32_t t34 = -6303;

	t34 = ((x3605*x3606)/(x3607>>x3608));

	if (t34 != -65535) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x3617 = 32U;
	int16_t x3618 = INT16_MIN;
	volatile uint16_t x3620 = 2U;
	static uint64_t t35 = 720168680LLU;

	t35 = ((x3617*x3618)/(x3619>>x3620));

	if (t35 != 3LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x3993 = 1608U;
	int64_t x3995 = INT64_MAX;
	volatile int64_t t36 = -1LL;

	t36 = ((x3993*x3994)/(x3995>>x3996));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x4077 = INT16_MIN;
	volatile uint64_t x4079 = 2966211344104LLU;
	volatile uint64_t x4080 = 2LLU;
	uint64_t t37 = 21265162919250LLU;

	t37 = ((x4077*x4078)/(x4079>>x4080));

	if (t37 != 24875832LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x4297 = INT16_MIN;
	static uint16_t x4298 = UINT16_MAX;
	uint16_t x4299 = 187U;
	uint64_t x4300 = 0LLU;
	int32_t t38 = -4;

	t38 = ((x4297*x4298)/(x4299>>x4300));

	if (t38 != -11483694) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x4350 = INT8_MAX;
	int16_t x4351 = 171;
	uint64_t x4352 = 6LLU;
	volatile int32_t t39 = 1;

	t39 = ((x4349*x4350)/(x4351>>x4352));

	if (t39 != 2080704) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x4443 = UINT16_MAX;
	uint8_t x4444 = 10U;
	int32_t t40 = -7980;

	t40 = ((x4441*x4442)/(x4443>>x4444));

	if (t40 != 2) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x4586 = INT8_MIN;
	uint8_t x4587 = 27U;
	uint64_t x4588 = 0LLU;

	t41 = ((x4585*x4586)/(x4587>>x4588));

	if (t41 != 683212743410961251LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x4853 = 14232434704LL;
	uint64_t x4854 = UINT64_MAX;
	int32_t x4855 = 64693468;
	int8_t x4856 = 16;
	volatile uint64_t t42 = 6LLU;

	t42 = ((x4853*x4854)/(x4855>>x4856));

	if (t42 != 18689710293289885LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x4925 = 1;
	volatile int8_t x4926 = INT8_MIN;
	uint8_t x4927 = 15U;
	uint16_t x4928 = 3U;
	volatile int32_t t43 = 100;

	t43 = ((x4925*x4926)/(x4927>>x4928));

	if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x4933 = -157457371233235LL;
	int32_t x4934 = -1;
	int8_t x4935 = INT8_MAX;
	int64_t t44 = -565435591LL;

	t44 = ((x4933*x4934)/(x4935>>x4936));

	if (t44 != 10497158082215LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x4937 = INT16_MIN;
	uint64_t x4939 = UINT64_MAX;
	uint8_t x4940 = 2U;

	t45 = ((x4937*x4938)/(x4939>>x4940));

	if (t45 != 3LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x4978 = INT8_MAX;
	int8_t x4979 = INT8_MAX;
	int8_t x4980 = 0;
	int32_t t46 = 0;

	t46 = ((x4977*x4978)/(x4979>>x4980));

	if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x5001 = 10;
	int32_t x5003 = INT32_MAX;
	int8_t x5004 = 6;

	t47 = ((x5001*x5002)/(x5003>>x5004));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x5089 = -1;
	int16_t x5090 = INT16_MIN;
	static int8_t x5091 = INT8_MAX;
	static uint16_t x5092 = 1U;
	int32_t t48 = -76076320;

	t48 = ((x5089*x5090)/(x5091>>x5092));

	if (t48 != 520) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x5161 = 195LLU;
	volatile uint32_t x5162 = UINT32_MAX;
	volatile uint64_t t49 = 2350147497674977LLU;

	t49 = ((x5161*x5162)/(x5163>>x5164));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x5254 = 15338U;
	static uint32_t x5255 = UINT32_MAX;
	volatile uint8_t x5256 = 10U;
	uint32_t t50 = 351346U;

	t50 = ((x5253*x5254)/(x5255>>x5256));

	if (t50 != 1023U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x5385 = INT8_MIN;
	int8_t x5386 = -6;
	int64_t x5387 = 4835487725LL;
	volatile int64_t t51 = -1766559903284856LL;

	t51 = ((x5385*x5386)/(x5387>>x5388));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x5421 = 34LLU;
	uint32_t x5422 = 55100U;
	int32_t x5423 = INT32_MAX;
	static uint32_t x5424 = 14U;
	volatile uint64_t t52 = 210660197589456099LLU;

	t52 = ((x5421*x5422)/(x5423>>x5424));

	if (t52 != 14LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x5493 = UINT16_MAX;
	int8_t x5494 = -16;
	uint8_t x5495 = UINT8_MAX;
	uint16_t x5496 = 0U;
	volatile int32_t t53 = -11;

	t53 = ((x5493*x5494)/(x5495>>x5496));

	if (t53 != -4112) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x5505 = -1LL;
	uint32_t x5507 = 93311505U;
	int8_t x5508 = 0;
	volatile int64_t t54 = -564750560LL;

	t54 = ((x5505*x5506)/(x5507>>x5508));

	if (t54 != -98844960617LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x5593 = INT16_MIN;
	uint16_t x5595 = UINT16_MAX;
	volatile uint8_t x5596 = 5U;
	int32_t t55 = -1;

	t55 = ((x5593*x5594)/(x5595>>x5596));

	if (t55 != -4081) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x5637 = INT64_MAX;
	uint64_t x5639 = 61530307LLU;
	int8_t x5640 = 0;
	uint64_t t56 = 4953870953LLU;

	t56 = ((x5637*x5638)/(x5639>>x5640));

	if (t56 != 149899658990LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x5717 = -1;
	volatile int16_t x5719 = INT16_MAX;
	static volatile int64_t t57 = -114284LL;

	t57 = ((x5717*x5718)/(x5719>>x5720));

	if (t57 != 23999031819202LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x5733 = -2;
	uint32_t x5734 = UINT32_MAX;
	uint16_t x5736 = 2U;
	volatile uint32_t t58 = 6806522U;

	t58 = ((x5733*x5734)/(x5735>>x5736));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x6085 = -1;
	int8_t x6086 = -1;
	uint8_t x6088 = 6U;
	uint64_t t59 = 6LLU;

	t59 = ((x6085*x6086)/(x6087>>x6088));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x6221 = INT64_MIN;
	volatile uint64_t x6222 = 281525721240LLU;
	uint16_t x6223 = UINT16_MAX;
	int32_t x6224 = 15;

	t60 = ((x6221*x6222)/(x6223>>x6224));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x6320 = 5;
	static uint64_t t61 = 418819880846698LLU;

	t61 = ((x6317*x6318)/(x6319>>x6320));

	if (t61 != 186330748219288385LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x6325 = 5370010269647LLU;
	volatile uint64_t x6326 = UINT64_MAX;
	uint16_t x6327 = 7U;
	int16_t x6328 = 1;
	volatile uint64_t t62 = 6225LLU;

	t62 = ((x6325*x6326)/(x6327>>x6328));

	if (t62 != 6148912901233093989LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x6353 = 42U;
	uint8_t x6356 = 0U;

	t63 = ((x6353*x6354)/(x6355>>x6356));

	if (t63 != 10794) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x6385 = 996254034957983LLU;
	volatile uint16_t x6388 = 22U;

	t64 = ((x6385*x6386)/(x6387>>x6388));

	if (t64 != 4192265LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x6477 = 140LLU;
	static int32_t x6478 = INT32_MIN;
	int32_t x6479 = INT32_MAX;
	static uint8_t x6480 = 15U;
	static uint64_t t65 = 332161LLU;

	t65 = ((x6477*x6478)/(x6479>>x6480));

	if (t65 != 281479267155898LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int8_t x6521 = -2;
	int16_t x6522 = INT16_MAX;
	int32_t x6523 = INT32_MAX;
	int8_t x6524 = 7;
	int32_t t66 = -8037;

	t66 = ((x6521*x6522)/(x6523>>x6524));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x6793 = 9583U;
	uint32_t x6794 = 1470241998U;
	volatile int64_t t67 = 499578523LL;

	t67 = ((x6793*x6794)/(x6795>>x6796));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x6823 = UINT16_MAX;
	int8_t x6824 = 0;
	int32_t t68 = 397900;

	t68 = ((x6821*x6822)/(x6823>>x6824));

	if (t68 != 30) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x6837 = 40U;
	int16_t x6838 = INT16_MIN;
	static uint32_t x6839 = UINT32_MAX;
	uint16_t x6840 = 12U;
	static uint32_t t69 = 57U;

	t69 = ((x6837*x6838)/(x6839>>x6840));

	if (t69 != 4094U) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x6857 = -1LL;
	int16_t x6859 = INT16_MAX;
	static int8_t x6860 = 1;
	int64_t t70 = 486LL;

	t70 = ((x6857*x6858)/(x6859>>x6860));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x6965 = 6516176LLU;
	static int64_t x6966 = -357433980194747898LL;
	int16_t x6967 = INT16_MAX;
	volatile int32_t x6968 = 1;
	static uint64_t t71 = 21703189LLU;

	t71 = ((x6965*x6966)/(x6967>>x6968));

	if (t71 != 99503213704302LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x7077 = INT64_MIN;
	int8_t x7078 = 1;
	uint32_t x7079 = 42487264U;
	static int16_t x7080 = 0;
	static int64_t t72 = -3250451293717432LL;

	t72 = ((x7077*x7078)/(x7079>>x7080));

	if (t72 != -217085572675LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x7277 = INT16_MIN;
	static uint32_t x7278 = 3996987U;
	int8_t x7279 = 1;
	uint8_t x7280 = 0U;

	t73 = ((x7277*x7278)/(x7279>>x7280));

	if (t73 != 2170716160U) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x7301 = UINT8_MAX;
	int8_t x7302 = INT8_MIN;
	int64_t x7303 = 13080497LL;
	uint8_t x7304 = 12U;
	volatile int64_t t74 = 7LL;

	t74 = ((x7301*x7302)/(x7303>>x7304));

	if (t74 != -10LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x7633 = 1;
	int32_t x7634 = INT32_MAX;
	uint8_t x7635 = UINT8_MAX;
	static uint16_t x7636 = 1U;

	t75 = ((x7633*x7634)/(x7635>>x7636));

	if (t75 != 16909320) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x7670 = 1U;
	uint32_t x7671 = 833816184U;
	uint32_t t76 = 424809U;

	t76 = ((x7669*x7670)/(x7671>>x7672));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x7705 = -1;
	uint16_t x7706 = 0U;
	uint64_t x7707 = 6618975628885994583LLU;
	volatile int32_t x7708 = 54;
	volatile uint64_t t77 = 76733706656LLU;

	t77 = ((x7705*x7706)/(x7707>>x7708));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x7713 = 384;
	uint64_t x7714 = UINT64_MAX;
	uint8_t x7716 = 1U;
	volatile uint64_t t78 = 285328786569572029LLU;

	t78 = ((x7713*x7714)/(x7715>>x7716));

	if (t78 != 17179869199LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x7897 = INT16_MIN;
	static int16_t x7898 = INT16_MAX;
	int32_t x7899 = INT32_MAX;
	int8_t x7900 = 0;
	int32_t t79 = -33;

	t79 = ((x7897*x7898)/(x7899>>x7900));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x7929 = 22180608577LL;
	static volatile uint64_t x7930 = UINT64_MAX;
	int8_t x7932 = 1;
	uint64_t t80 = 533874925974481591LLU;

	t80 = ((x7929*x7930)/(x7931>>x7932));

	if (t80 != 1125968629160040LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x8101 = -1LL;
	int8_t x8102 = INT8_MIN;
	static int8_t x8103 = 5;
	int16_t x8104 = 0;
	int64_t t81 = 13568LL;

	t81 = ((x8101*x8102)/(x8103>>x8104));

	if (t81 != 25LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x8125 = INT64_MIN;
	uint64_t x8126 = 182514LLU;
	uint32_t x8127 = 3395U;
	uint32_t x8128 = 2U;
	volatile uint64_t t82 = 3876929507925678LLU;

	t82 = ((x8125*x8126)/(x8127>>x8128));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x8149 = 8;
	static uint8_t x8151 = UINT8_MAX;
	int16_t x8152 = 1;

	t83 = ((x8149*x8150)/(x8151>>x8152));

	if (t83 != 16) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x8305 = INT64_MAX;
	int8_t x8306 = -1;
	uint32_t x8307 = 70293U;
	static volatile int64_t t84 = 150LL;

	t84 = ((x8305*x8306)/(x8307>>x8308));

	if (t84 != -1049780564176505LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x8345 = 55690203208346LL;
	static int8_t x8346 = INT8_MIN;
	uint32_t x8347 = 24025U;
	uint8_t x8348 = 8U;
	volatile int64_t t85 = -119401773314568990LL;

	t85 = ((x8345*x8346)/(x8347>>x8348));

	if (t85 != -76648881835142LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x8426 = 5U;
	int32_t x8427 = 4;
	int8_t x8428 = 1;
	uint32_t t86 = 465284U;

	t86 = ((x8425*x8426)/(x8427>>x8428));

	if (t86 != 2147483645U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x8513 = 3;
	uint32_t x8514 = 108251U;
	static int8_t x8516 = 0;
	volatile uint32_t t87 = 386U;

	t87 = ((x8513*x8514)/(x8515>>x8516));

	if (t87 != 81U) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x8570 = UINT32_MAX;
	uint16_t x8571 = 7754U;
	uint16_t x8572 = 1U;
	volatile uint32_t t88 = 9U;

	t88 = ((x8569*x8570)/(x8571>>x8572));

	if (t88 != 1034116U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x8766 = INT8_MIN;
	static uint16_t x8768 = 1U;
	static int32_t t89 = -48;

	t89 = ((x8765*x8766)/(x8767>>x8768));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x8862 = 263709762;
	volatile int64_t x8863 = 4300625302968699LL;
	uint64_t x8864 = 28LLU;

	t90 = ((x8861*x8862)/(x8863>>x8864));

	if (t90 != 248942100844LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x8877 = -1;
	int32_t x8878 = INT32_MAX;
	volatile int64_t x8879 = INT64_MAX;
	uint16_t x8880 = 2U;
	static int64_t t91 = -229607697LL;

	t91 = ((x8877*x8878)/(x8879>>x8880));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x8957 = INT8_MIN;
	int8_t x8958 = INT8_MIN;
	static int64_t x8959 = INT64_MAX;
	volatile uint16_t x8960 = 1U;

	t92 = ((x8957*x8958)/(x8959>>x8960));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x9313 = INT16_MAX;
	uint16_t x9314 = 656U;
	uint8_t x9316 = 3U;

	t93 = ((x9313*x9314)/(x9315>>x9316));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x9321 = INT16_MIN;
	uint64_t x9322 = 3963LLU;
	static int16_t x9323 = 740;
	uint16_t x9324 = 0U;
	uint64_t t94 = 1056LLU;

	t94 = ((x9321*x9322)/(x9323>>x9324));

	if (t94 != 24928032531864448LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x9365 = 119U;
	uint8_t x9366 = 20U;
	int64_t x9367 = 3972901091828LL;
	int8_t x9368 = 2;
	volatile int64_t t95 = -1LL;

	t95 = ((x9365*x9366)/(x9367>>x9368));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x9466 = 2;
	volatile int64_t x9467 = 4391802625469LL;
	uint16_t x9468 = 5U;

	t96 = ((x9465*x9466)/(x9467>>x9468));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x9653 = INT8_MAX;
	int8_t x9654 = 9;
	uint64_t x9655 = UINT64_MAX;
	uint16_t x9656 = 19U;

	t97 = ((x9653*x9654)/(x9655>>x9656));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x9809 = 17785U;
	static volatile int16_t x9810 = -1;
	uint8_t x9812 = 0U;
	static volatile int64_t t98 = -5168LL;

	t98 = ((x9809*x9810)/(x9811>>x9812));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x9841 = 0U;
	int64_t x9842 = -28LL;
	static uint64_t x9843 = 37352424LLU;
	static volatile uint64_t t99 = 2LLU;

	t99 = ((x9841*x9842)/(x9843>>x9844));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

