#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x13 = -1;
volatile int64_t x26 = INT64_MIN;
static uint32_t t2 = 18921378U;
uint16_t x271 = UINT16_MAX;
int64_t x273 = 24875471LL;
volatile int8_t x457 = INT8_MIN;
int64_t t7 = -24LL;
static int16_t x594 = INT16_MAX;
static uint32_t x595 = 1526107U;
int8_t x596 = 6;
uint8_t x621 = 9U;
static uint32_t x623 = 5U;
uint32_t x726 = 12207064U;
int16_t x822 = 127;
int8_t x824 = 9;
volatile uint64_t t16 = 87084761550815669LLU;
int16_t x864 = 0;
uint64_t t17 = 21020753343LLU;
int32_t x881 = INT32_MAX;
int8_t x883 = -4;
uint16_t x884 = 12U;
static uint64_t t18 = 4439796448966420LLU;
int16_t x1027 = INT16_MIN;
static volatile uint64_t t19 = 1LLU;
uint32_t x1145 = 115849712U;
uint64_t x1183 = 382412893812LLU;
volatile uint8_t x1343 = 0U;
static int8_t x1344 = 0;
int16_t x1413 = -1;
uint32_t t26 = 1U;
int8_t x1548 = 1;
uint64_t x1583 = 247966811287157160LLU;
int16_t x1584 = 11;
int8_t x1669 = -1;
volatile int64_t x1834 = 142057LL;
static uint16_t x1937 = 2882U;
int16_t x2110 = INT16_MIN;
volatile uint32_t t36 = 48632798U;
int8_t x2209 = -1;
uint64_t t38 = 242LLU;
static int16_t x2246 = -1;
static int8_t x2304 = 6;
static int16_t x2530 = 399;
uint8_t x2537 = UINT8_MAX;
int16_t x2538 = -1;
static int8_t x2565 = -1;
int64_t x2566 = -1LL;
uint8_t x2595 = UINT8_MAX;
uint64_t x2638 = UINT64_MAX;
int16_t x2640 = 14;
int32_t x2652 = 0;
static volatile int32_t t49 = 0;
static int32_t x2795 = -1;
static int64_t x2809 = 10555206LL;
uint8_t x3022 = 93U;
int8_t x3023 = -1;
volatile uint8_t x3153 = 3U;
uint16_t x3321 = UINT16_MAX;
uint16_t x3454 = UINT16_MAX;
volatile int16_t x3455 = INT16_MIN;
static volatile int32_t x3529 = INT32_MIN;
int64_t x3532 = 1LL;
volatile int16_t x3641 = -2;
int16_t x3921 = INT16_MAX;
uint32_t x3922 = 1U;
static uint8_t x3923 = 1U;
uint32_t x3924 = 4U;
int64_t x4094 = 123633476679662858LL;
volatile int8_t x4096 = 0;
static volatile int64_t t63 = -8LL;
uint8_t x4098 = 69U;
uint32_t x4109 = UINT32_MAX;
int16_t x4204 = 31;
volatile uint64_t t67 = 114646002LLU;
volatile uint64_t x4305 = 5351588LLU;
volatile uint16_t x4341 = UINT16_MAX;
static int64_t x4343 = -6LL;
int32_t x4458 = INT32_MIN;
uint64_t x4459 = 531254882835LLU;
uint64_t t71 = 3LLU;
volatile uint64_t t72 = 80719109LLU;
volatile int8_t x4633 = INT8_MIN;
uint64_t x4635 = UINT64_MAX;
static uint8_t x4636 = 19U;
uint64_t t74 = 14880541904111809LLU;
int32_t x4649 = -3083;
static uint32_t x4651 = 29940U;
volatile uint64_t t76 = 0LLU;
uint32_t x4918 = UINT32_MAX;
static volatile uint8_t x4920 = 1U;
volatile int64_t x5073 = INT64_MIN;
uint8_t x5076 = 12U;
uint32_t x5086 = UINT32_MAX;
int32_t x5087 = -1;
static uint64_t x5142 = 12LLU;
uint32_t x5143 = 77970705U;
uint16_t x5234 = UINT16_MAX;
static uint8_t x5252 = 0U;
volatile uint64_t t88 = 66600LLU;
uint16_t x5301 = 1713U;
volatile uint32_t t91 = 1398924321U;
volatile int8_t x6160 = 1;
volatile int64_t t99 = -132324LL;


void f0(void) {
	int32_t x14 = INT32_MAX;
	volatile int32_t x15 = -368;
	int8_t x16 = 0;
	volatile int32_t t0 = 13571150;

	t0 = (x13*((x14+x15)<<x16));

	if (t0 != -2147483279) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x25 = INT64_MIN;
	uint64_t x27 = 46336183162LLU;
	static uint8_t x28 = 56U;
	uint64_t t1 = 517388LLU;

	t1 = (x25*((x26+x27)<<x28));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x121 = -12;
	static uint32_t x122 = 235177985U;
	volatile int32_t x123 = -311;
	static uint8_t x124 = 1U;

	t2 = (x121*((x122+x123)<<x124));

	if (t2 != 2945670416U) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x173 = 0U;
	int32_t x174 = INT32_MIN;
	int64_t x175 = 780024277618LL;
	volatile int8_t x176 = 1;
	static volatile int64_t t3 = 3340865366739LL;

	t3 = (x173*((x174+x175)<<x176));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x189 = 831657U;
	uint8_t x190 = 0U;
	static int32_t x191 = 1;
	uint8_t x192 = 9U;
	volatile uint32_t t4 = 53905129U;

	t4 = (x189*((x190+x191)<<x192));

	if (t4 != 425808384U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x269 = 1;
	int64_t x270 = -1LL;
	uint8_t x272 = 2U;
	volatile int64_t t5 = 2352959879LL;

	t5 = (x269*((x270+x271)<<x272));

	if (t5 != 262136LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x274 = -100;
	int32_t x275 = 784;
	volatile uint8_t x276 = 5U;
	volatile int64_t t6 = 173629723198LL;

	t6 = (x273*((x274+x275)<<x276));

	if (t6 != 544474309248LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x458 = -234LL;
	uint32_t x459 = UINT32_MAX;
	uint16_t x460 = 0U;

	t7 = (x457*((x458+x459)<<x460));

	if (t7 != -549755783808LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x513 = -1LL;
	static volatile uint16_t x514 = 28605U;
	int8_t x515 = -1;
	static uint8_t x516 = 2U;
	static int64_t t8 = -40430333445LL;

	t8 = (x513*((x514+x515)<<x516));

	if (t8 != -114416LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x565 = -1LL;
	static volatile uint16_t x566 = 298U;
	int8_t x567 = -1;
	int8_t x568 = 0;
	volatile int64_t t9 = 329491429459463LL;

	t9 = (x565*((x566+x567)<<x568));

	if (t9 != -297LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x593 = -52;
	volatile uint32_t t10 = 900U;

	t10 = (x593*((x594+x595)<<x596));

	if (t10 != 3402001920U) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x601 = INT32_MAX;
	uint32_t x602 = 0U;
	uint32_t x603 = 2400972U;
	int32_t x604 = 1;
	uint32_t t11 = 9169U;

	t11 = (x601*((x602+x603)<<x604));

	if (t11 != 4290165352U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x622 = INT8_MAX;
	volatile int64_t x624 = 0LL;
	uint32_t t12 = 6922870U;

	t12 = (x621*((x622+x623)<<x624));

	if (t12 != 1188U) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x709 = 179U;
	int16_t x710 = -1;
	volatile int16_t x711 = 10001;
	uint8_t x712 = 0U;
	int32_t t13 = 3234;

	t13 = (x709*((x710+x711)<<x712));

	if (t13 != 1790000) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x725 = 6753U;
	int32_t x727 = -1;
	int8_t x728 = 0;
	static uint32_t t14 = 92581U;

	t14 = (x725*((x726+x727)<<x728));

	if (t14 != 829917815U) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x729 = 0U;
	static volatile uint16_t x730 = 17279U;
	volatile int8_t x731 = INT8_MAX;
	static int8_t x732 = 11;
	volatile int32_t t15 = 461926126;

	t15 = (x729*((x730+x731)<<x732));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x821 = UINT64_MAX;
	int16_t x823 = 1;

	t16 = (x821*((x822+x823)<<x824));

	if (t16 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x861 = 987LLU;
	uint8_t x862 = UINT8_MAX;
	uint16_t x863 = 656U;

	t17 = (x861*((x862+x863)<<x864));

	if (t17 != 899157LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x882 = 66809845LLU;

	t18 = (x881*((x882+x883)<<x884));

	if (t18 != 15816509676276740096LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x1025 = INT64_MAX;
	volatile uint64_t x1026 = UINT64_MAX;
	int32_t x1028 = 1;

	t19 = (x1025*((x1026+x1027)<<x1028));

	if (t19 != 65538LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x1146 = UINT16_MAX;
	static uint32_t x1147 = UINT32_MAX;
	int8_t x1148 = 3;
	static uint32_t t20 = 68811U;

	t20 = (x1145*((x1146+x1147)<<x1148));

	if (t20 != 1627676928U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1177 = -1;
	int8_t x1178 = INT8_MAX;
	static int16_t x1179 = 304;
	uint32_t x1180 = 6U;
	int32_t t21 = -100559640;

	t21 = (x1177*((x1178+x1179)<<x1180));

	if (t21 != -27584) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x1181 = -50;
	static int8_t x1182 = INT8_MIN;
	int16_t x1184 = 12;
	volatile uint64_t t22 = 734454429608833LLU;

	t22 = (x1181*((x1182+x1183)<<x1184));

	if (t22 != 18368425913083068416LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x1317 = -1LL;
	uint64_t x1318 = 225838999416690LLU;
	static int8_t x1319 = INT8_MIN;
	volatile int16_t x1320 = 28;
	volatile uint64_t t23 = 124LLU;

	t23 = (x1317*((x1318+x1319)<<x1320));

	if (t23 != 11252979314741739520LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x1329 = 3611326U;
	static uint64_t x1330 = 3195624119247317960LLU;
	static uint32_t x1331 = 247U;
	static uint16_t x1332 = 0U;
	uint64_t t24 = 6919433363107LLU;

	t24 = (x1329*((x1330+x1331)<<x1332));

	if (t24 != 9801599655503829954LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1341 = -1;
	int32_t x1342 = 388582125;
	int32_t t25 = 636;

	t25 = (x1341*((x1342+x1343)<<x1344));

	if (t25 != -388582125) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x1414 = 1166U;
	volatile uint32_t x1415 = UINT32_MAX;
	static uint8_t x1416 = 18U;

	t26 = (x1413*((x1414+x1415)<<x1416));

	if (t26 != 3989569536U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x1533 = INT32_MAX;
	uint8_t x1534 = 4U;
	static uint32_t x1535 = 12497004U;
	uint8_t x1536 = 1U;
	uint32_t t27 = 81761160U;

	t27 = (x1533*((x1534+x1535)<<x1536));

	if (t27 != 4269973280U) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x1545 = 1258U;
	uint64_t x1546 = UINT64_MAX;
	volatile int64_t x1547 = INT64_MAX;
	uint64_t t28 = 28659842921731LLU;

	t28 = (x1545*((x1546+x1547)<<x1548));

	if (t28 != 18446744073709546584LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x1581 = 530;
	volatile int32_t x1582 = 19544093;
	volatile uint64_t t29 = 139423061LLU;

	t29 = (x1581*((x1582+x1583)<<x1584));

	if (t29 != 15099629323449978880LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x1670 = UINT8_MAX;
	int64_t x1671 = -1LL;
	volatile int16_t x1672 = 1;
	static int64_t t30 = -1011702658768059105LL;

	t30 = (x1669*((x1670+x1671)<<x1672));

	if (t30 != -508LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1833 = INT16_MIN;
	static uint32_t x1835 = 903U;
	uint16_t x1836 = 7U;
	volatile int64_t t31 = 89333LL;

	t31 = (x1833*((x1834+x1835)<<x1836));

	if (t31 != -599617699840LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x1921 = -1;
	int16_t x1922 = -1;
	uint64_t x1923 = 4975232823827271305LLU;
	uint64_t x1924 = 3LLU;
	static volatile uint64_t t32 = 208208695LLU;

	t32 = (x1921*((x1922+x1923)<<x1924));

	if (t32 != 15538369630510484416LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x1938 = INT16_MIN;
	static uint64_t x1939 = UINT64_MAX;
	static uint8_t x1940 = 12U;
	uint64_t t33 = 65788LLU;

	t33 = (x1937*((x1938+x1939)<<x1940));

	if (t33 != 18446743686882254848LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x1941 = 74U;
	static volatile int32_t x1942 = 78445;
	uint64_t x1943 = 382602499LLU;
	static uint16_t x1944 = 60U;
	uint64_t t34 = 836LLU;

	t34 = (x1941*((x1942+x1943)<<x1944));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x2097 = 4;
	int16_t x2098 = INT16_MAX;
	int32_t x2099 = -3;
	volatile uint16_t x2100 = 9U;
	static int32_t t35 = -44106776;

	t35 = (x2097*((x2098+x2099)<<x2100));

	if (t35 != 67100672) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x2109 = -1;
	volatile uint32_t x2111 = UINT32_MAX;
	uint16_t x2112 = 3U;

	t36 = (x2109*((x2110+x2111)<<x2112));

	if (t36 != 262152U) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x2197 = INT64_MAX;
	volatile int32_t x2198 = 362501;
	static uint64_t x2199 = UINT64_MAX;
	uint8_t x2200 = 3U;
	uint64_t t37 = 81428123691LLU;

	t37 = (x2197*((x2198+x2199)<<x2200));

	if (t37 != 18446744073706651616LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x2210 = 597LLU;
	uint8_t x2211 = 105U;
	uint32_t x2212 = 0U;

	t38 = (x2209*((x2210+x2211)<<x2212));

	if (t38 != 18446744073709550914LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x2229 = 11;
	uint64_t x2230 = 105240842LLU;
	int32_t x2231 = INT32_MIN;
	int8_t x2232 = 59;
	volatile uint64_t t39 = 12871LLU;

	t39 = (x2229*((x2230+x2231)<<x2232));

	if (t39 != 8070450532247928832LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x2245 = -1;
	uint32_t x2247 = UINT32_MAX;
	uint8_t x2248 = 7U;
	uint32_t t40 = 773U;

	t40 = (x2245*((x2246+x2247)<<x2248));

	if (t40 != 256U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x2301 = -1LL;
	uint32_t x2302 = 69U;
	volatile uint64_t x2303 = 24542135454LLU;
	static uint64_t t41 = 15913628LLU;

	t41 = (x2301*((x2302+x2303)<<x2304));

	if (t41 != 18446742503012878144LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2321 = 59;
	uint64_t x2322 = UINT64_MAX;
	int8_t x2323 = 22;
	int32_t x2324 = 59;
	uint64_t t42 = 633LLU;

	t42 = (x2321*((x2322+x2323)<<x2324));

	if (t42 != 13258597302978740224LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x2441 = 9307562U;
	int8_t x2442 = 24;
	static uint32_t x2443 = 131U;
	volatile uint16_t x2444 = 1U;
	uint32_t t43 = 6894U;

	t43 = (x2441*((x2442+x2443)<<x2444));

	if (t43 != 2885344220U) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x2529 = 63LLU;
	int64_t x2531 = -1LL;
	uint8_t x2532 = 0U;
	uint64_t t44 = 563LLU;

	t44 = (x2529*((x2530+x2531)<<x2532));

	if (t44 != 25074LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2539 = 26;
	volatile uint8_t x2540 = 0U;
	int32_t t45 = -196751;

	t45 = (x2537*((x2538+x2539)<<x2540));

	if (t45 != 6375) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x2567 = INT16_MAX;
	volatile uint8_t x2568 = 0U;
	volatile int64_t t46 = 492LL;

	t46 = (x2565*((x2566+x2567)<<x2568));

	if (t46 != -32766LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x2593 = 13469501LL;
	static volatile int8_t x2594 = -1;
	uint8_t x2596 = 4U;
	volatile int64_t t47 = 25058757924657LL;

	t47 = (x2593*((x2594+x2595)<<x2596));

	if (t47 != 54740052064LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x2637 = UINT64_MAX;
	static uint16_t x2639 = 9U;
	volatile uint64_t t48 = 20210188383223LLU;

	t48 = (x2637*((x2638+x2639)<<x2640));

	if (t48 != 18446744073709420544LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x2649 = 5U;
	int8_t x2650 = INT8_MAX;
	uint16_t x2651 = UINT16_MAX;

	t49 = (x2649*((x2650+x2651)<<x2652));

	if (t49 != 328310) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x2793 = -1LL;
	volatile uint64_t x2794 = UINT64_MAX;
	int16_t x2796 = 0;
	static uint64_t t50 = 291LLU;

	t50 = (x2793*((x2794+x2795)<<x2796));

	if (t50 != 2LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x2810 = 10077499063673789LLU;
	volatile uint16_t x2811 = UINT16_MAX;
	static int16_t x2812 = 61;
	volatile uint64_t t51 = 30633316424322647LLU;

	t51 = (x2809*((x2810+x2811)<<x2812));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x3021 = 395678850468LL;
	static uint8_t x3024 = 10U;
	int64_t t52 = -31173076LL;

	t52 = (x3021*((x3022+x3023)<<x3024));

	if (t52 != 37276113144889344LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x3154 = 888U;
	int16_t x3155 = -1;
	static int16_t x3156 = 0;
	volatile int32_t t53 = -551813;

	t53 = (x3153*((x3154+x3155)<<x3156));

	if (t53 != 2661) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x3257 = -36;
	static uint64_t x3258 = UINT64_MAX;
	uint32_t x3259 = 7U;
	uint8_t x3260 = 34U;
	volatile uint64_t t54 = 105338105LLU;

	t54 = (x3257*((x3258+x3259)<<x3260));

	if (t54 != 18446740362857807872LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x3322 = 38U;
	static uint32_t x3323 = 25334U;
	uint32_t x3324 = 16U;
	uint32_t t55 = 764U;

	t55 = (x3321*((x3322+x3323)<<x3324));

	if (t55 != 2632187904U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x3453 = 456;
	uint16_t x3456 = 7U;
	int32_t t56 = -404556;

	t56 = (x3453*((x3454+x3455)<<x3456));

	if (t56 != 1912544256) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x3530 = -569;
	static uint64_t x3531 = 96LLU;
	static uint64_t t57 = 1521977795LLU;

	t57 = (x3529*((x3530+x3531)<<x3532));

	if (t57 != 2031519531008LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x3621 = INT64_MIN;
	uint64_t x3622 = 121082LLU;
	int64_t x3623 = INT64_MIN;
	uint8_t x3624 = 6U;
	static volatile uint64_t t58 = 55LLU;

	t58 = (x3621*((x3622+x3623)<<x3624));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x3642 = 39592078090LLU;
	int8_t x3643 = 1;
	volatile uint8_t x3644 = 6U;
	uint64_t t59 = 121LLU;

	t59 = (x3641*((x3642+x3643)<<x3644));

	if (t59 != 18446739005923555968LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int64_t x3825 = -342663631LL;
	uint64_t x3826 = 6465216111944LLU;
	static int32_t x3827 = 16067;
	volatile uint16_t x3828 = 1U;
	volatile uint64_t t60 = 664020659518883666LLU;

	t60 = (x3825*((x3826+x3827)<<x3828));

	if (t60 != 14876454515981803574LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t t61 = 416U;

	t61 = (x3921*((x3922+x3923)<<x3924));

	if (t61 != 1048544U) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x4061 = INT8_MIN;
	volatile uint8_t x4062 = 15U;
	uint32_t x4063 = 340U;
	volatile uint16_t x4064 = 2U;
	uint32_t t62 = 69912U;

	t62 = (x4061*((x4062+x4063)<<x4064));

	if (t62 != 4294785536U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x4093 = -1;
	int64_t x4095 = 0LL;

	t63 = (x4093*((x4094+x4095)<<x4096));

	if (t63 != -123633476679662858LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x4097 = -1;
	int8_t x4099 = INT8_MAX;
	volatile uint32_t x4100 = 1U;
	static volatile int32_t t64 = 11900;

	t64 = (x4097*((x4098+x4099)<<x4100));

	if (t64 != -392) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x4110 = 10U;
	static uint16_t x4111 = 2139U;
	static volatile uint16_t x4112 = 11U;
	volatile uint32_t t65 = 1338904U;

	t65 = (x4109*((x4110+x4111)<<x4112));

	if (t65 != 4290566144U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x4153 = 87U;
	uint8_t x4154 = UINT8_MAX;
	uint64_t x4155 = UINT64_MAX;
	uint8_t x4156 = 20U;
	uint64_t t66 = 15984705924031568LLU;

	t66 = (x4153*((x4154+x4155)<<x4156));

	if (t66 != 23171432448LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint8_t x4201 = 9U;
	volatile int8_t x4202 = 0;
	uint64_t x4203 = 1683LLU;

	t67 = (x4201*((x4202+x4203)<<x4204));

	if (t67 != 32527934816256LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x4273 = 147U;
	int16_t x4274 = INT16_MIN;
	uint64_t x4275 = 29LLU;
	uint16_t x4276 = 5U;
	uint64_t t68 = 16383002149285LLU;

	t68 = (x4273*((x4274+x4275)<<x4276));

	if (t68 != 18446744073555547360LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x4306 = INT16_MAX;
	int64_t x4307 = 1LL;
	int8_t x4308 = 1;
	static uint64_t t69 = 14787623936LLU;

	t69 = (x4305*((x4306+x4307)<<x4308));

	if (t69 != 350721671168LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x4342 = INT8_MAX;
	uint8_t x4344 = 11U;
	int64_t t70 = 6038383240476LL;

	t70 = (x4341*((x4342+x4343)<<x4344));

	if (t70 != 16240097280LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x4457 = 5200220879528076063LLU;
	volatile int32_t x4460 = 0;

	t71 = (x4457*((x4458+x4459)<<x4460));

	if (t71 != 13421987638304418125LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x4553 = INT8_MIN;
	uint64_t x4554 = UINT64_MAX;
	volatile int64_t x4555 = -1LL;
	volatile uint8_t x4556 = 11U;

	t72 = (x4553*((x4554+x4555)<<x4556));

	if (t72 != 524288LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x4597 = 2U;
	volatile int16_t x4598 = INT16_MAX;
	uint16_t x4599 = 383U;
	uint8_t x4600 = 10U;
	int32_t t73 = -34980188;

	t73 = (x4597*((x4598+x4599)<<x4600));

	if (t73 != 67891200) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x4634 = 110U;

	t74 = (x4633*((x4634+x4635)<<x4636));

	if (t74 != 18446744066394685440LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x4650 = UINT16_MAX;
	uint8_t x4652 = 11U;
	volatile uint32_t t75 = 750496472U;

	t75 = (x4649*((x4650+x4651)<<x4652));

	if (t75 != 2762766336U) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x4661 = 704473522961464208LL;
	uint64_t x4662 = 2349242478711LLU;
	static int64_t x4663 = INT64_MIN;
	uint16_t x4664 = 23U;

	t76 = (x4661*((x4662+x4663)<<x4664));

	if (t76 != 802384931111043072LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x4693 = INT16_MAX;
	int8_t x4694 = INT8_MIN;
	uint8_t x4695 = UINT8_MAX;
	uint16_t x4696 = 1U;
	volatile int32_t t77 = -127086789;

	t77 = (x4693*((x4694+x4695)<<x4696));

	if (t77 != 8322818) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x4705 = 0U;
	int64_t x4706 = -1LL;
	uint8_t x4707 = UINT8_MAX;
	volatile uint64_t x4708 = 2LLU;
	volatile int64_t t78 = 103631471730838LL;

	t78 = (x4705*((x4706+x4707)<<x4708));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x4917 = -1;
	static uint16_t x4919 = 69U;
	static volatile uint32_t t79 = 353032019U;

	t79 = (x4917*((x4918+x4919)<<x4920));

	if (t79 != 4294967160U) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x5074 = 27LLU;
	int16_t x5075 = 163;
	uint64_t t80 = 12746442781150LLU;

	t80 = (x5073*((x5074+x5075)<<x5076));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x5085 = 2109;
	volatile int8_t x5088 = 25;
	uint32_t t81 = 2021159U;

	t81 = (x5085*((x5086+x5087)<<x5088));

	if (t81 != 201326592U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x5113 = INT32_MIN;
	uint32_t x5114 = 3882141U;
	int16_t x5115 = INT16_MIN;
	static uint8_t x5116 = 6U;
	volatile uint32_t t82 = 188122680U;

	t82 = (x5113*((x5114+x5115)<<x5116));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x5141 = UINT8_MAX;
	uint32_t x5144 = 2U;
	uint64_t t83 = 32248690737LLU;

	t83 = (x5141*((x5142+x5143)<<x5144));

	if (t83 != 79530131340LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x5189 = -1972;
	volatile int8_t x5190 = 0;
	static int16_t x5191 = 12;
	static volatile int8_t x5192 = 4;
	volatile int32_t t84 = -9;

	t84 = (x5189*((x5190+x5191)<<x5192));

	if (t84 != -378624) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x5193 = 121LL;
	uint32_t x5194 = 63725123U;
	uint32_t x5195 = 6U;
	volatile int32_t x5196 = 31;
	volatile int64_t t85 = -987064LL;

	t85 = (x5193*((x5194+x5195)<<x5196));

	if (t85 != 259845521408LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x5233 = INT8_MAX;
	int16_t x5235 = -1;
	int16_t x5236 = 0;
	int32_t t86 = 101835777;

	t86 = (x5233*((x5234+x5235)<<x5236));

	if (t86 != 8322818) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x5245 = INT32_MAX;
	uint32_t x5246 = 117367U;
	int16_t x5247 = -1;
	uint16_t x5248 = 21U;
	static volatile uint32_t t87 = 975125U;

	t87 = (x5245*((x5246+x5247)<<x5248));

	if (t87 != 2973761536U) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x5249 = 1487262309U;
	int16_t x5250 = INT16_MAX;
	uint64_t x5251 = UINT64_MAX;

	t88 = (x5249*((x5250+x5251)<<x5252));

	if (t88 != 48731636816694LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x5302 = 2798;
	uint32_t x5303 = 401065220U;
	uint8_t x5304 = 1U;
	uint32_t t89 = 23U;

	t89 = (x5301*((x5302+x5303)<<x5304));

	if (t89 != 3964462244U) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x5697 = INT32_MAX;
	static int16_t x5698 = 1;
	uint32_t x5699 = 6944066U;
	int64_t x5700 = 10LL;
	static volatile uint32_t t90 = 1720U;

	t90 = (x5697*((x5698+x5699)<<x5700));

	if (t90 != 1479209984U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x5777 = INT8_MIN;
	uint32_t x5778 = UINT32_MAX;
	int16_t x5779 = -9640;
	uint8_t x5780 = 1U;

	t91 = (x5777*((x5778+x5779)<<x5780));

	if (t91 != 2468096U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x5813 = 0;
	int8_t x5814 = 33;
	int32_t x5815 = 43748148;
	uint8_t x5816 = 0U;
	volatile int32_t t92 = 43381042;

	t92 = (x5813*((x5814+x5815)<<x5816));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x5969 = UINT8_MAX;
	static int64_t x5970 = -3602961649LL;
	volatile uint64_t x5971 = 115284150241466LLU;
	uint64_t x5972 = 1LLU;
	static volatile uint64_t t93 = 12051LLU;

	t93 = (x5969*((x5970+x5971)<<x5972));

	if (t93 != 58793079112706670LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x6093 = 12;
	int8_t x6094 = INT8_MIN;
	uint64_t x6095 = UINT64_MAX;
	uint16_t x6096 = 1U;
	uint64_t t94 = 185107899751LLU;

	t94 = (x6093*((x6094+x6095)<<x6096));

	if (t94 != 18446744073709548520LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x6109 = INT16_MIN;
	uint16_t x6110 = 5046U;
	uint16_t x6111 = 14123U;
	static int8_t x6112 = 1;
	static volatile int32_t t95 = 325;

	t95 = (x6109*((x6110+x6111)<<x6112));

	if (t95 != -1256259584) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x6157 = 0LL;
	int32_t x6158 = -44436;
	int64_t x6159 = 7095117667681LL;
	static int64_t t96 = -1432773652649LL;

	t96 = (x6157*((x6158+x6159)<<x6160));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x6225 = 0LL;
	static volatile uint16_t x6226 = 2833U;
	int32_t x6227 = -1;
	volatile int8_t x6228 = 7;
	int64_t t97 = -27619653922247LL;

	t97 = (x6225*((x6226+x6227)<<x6228));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x6237 = INT16_MAX;
	uint8_t x6238 = UINT8_MAX;
	static uint64_t x6239 = 298614550798543LLU;
	uint8_t x6240 = 1U;
	volatile uint64_t t98 = 109604228308036455LLU;

	t98 = (x6237*((x6238+x6239)<<x6240));

	if (t98 != 1122661898338876516LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x6241 = 310U;
	static uint32_t x6242 = 22052U;
	int64_t x6243 = -1LL;
	uint32_t x6244 = 26U;

	t99 = (x6241*((x6242+x6243)<<x6244));

	if (t99 != 458743443619840LL) { NG(); } else { ; }
	
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

