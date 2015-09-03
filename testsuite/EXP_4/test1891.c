#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x143 = 115U;
static int8_t x144 = -1;
uint8_t x341 = UINT8_MAX;
static int32_t t2 = 6;
volatile int32_t t3 = 3234769;
static volatile int16_t x515 = -1;
int32_t x567 = INT32_MIN;
int64_t x677 = 788378742325979342LL;
static uint16_t x680 = UINT16_MAX;
static int32_t x806 = INT32_MIN;
static int32_t x958 = -1;
uint64_t x1175 = 8616952196292279723LLU;
static uint64_t t17 = UINT64_MAX;
int32_t t18 = 35915424;
uint64_t x1438 = UINT64_MAX;
uint16_t x1440 = UINT16_MAX;
int16_t x1688 = 1;
int16_t x1907 = INT16_MIN;
int64_t x1932 = -1LL;
uint64_t t25 = 31483824208567827LLU;
uint8_t x2311 = 20U;
static uint8_t x2516 = UINT8_MAX;
static uint32_t x2533 = 2U;
static uint64_t x2538 = UINT64_MAX;
int16_t x2540 = INT16_MIN;
volatile int32_t t32 = -262;
volatile uint8_t x2573 = UINT8_MAX;
uint64_t x2575 = UINT64_MAX;
volatile int32_t t33 = 832710;
int64_t x2635 = -1LL;
volatile int8_t x2710 = -1;
int32_t t35 = 6;
int32_t t36 = 0;
int32_t x2950 = -1;
uint16_t x2951 = 496U;
static uint64_t t39 = 2011070331561222LLU;
int32_t x3225 = 35583827;
uint32_t x3227 = 1U;
volatile int8_t x3228 = -1;
uint64_t t42 = 7747207747552LLU;
static int8_t x3323 = -20;
uint8_t x3363 = UINT8_MAX;
uint32_t x3424 = 5247U;
int16_t x3524 = -9955;
static int8_t x3838 = 0;
volatile int8_t x3840 = INT8_MIN;
volatile uint64_t t50 = 16421606618121LLU;
volatile int32_t t51 = -1;
volatile int32_t t52 = -225638;
volatile int32_t t57 = 15106;
int8_t x4361 = 21;
int8_t x4401 = INT8_MAX;
uint8_t x4545 = 75U;
static int64_t x4547 = -1LL;
int32_t x4553 = 60384;
static int32_t x4555 = -1;
static int64_t x4595 = INT64_MIN;
static int32_t t64 = -33504908;
volatile uint64_t x4849 = 56362901662939748LLU;
int16_t x4850 = -1;
int32_t x4852 = -1;
static volatile int32_t t67 = 5;
int64_t x5180 = -1LL;
uint32_t x5217 = 2474U;
uint32_t t69 = 7223366U;
int32_t t71 = 111041522;
int64_t x5587 = -1LL;
int32_t x5904 = -1;
volatile uint32_t x5950 = UINT32_MAX;
uint64_t x5979 = UINT64_MAX;
volatile int32_t t79 = -47027169;
int32_t t80 = 7;
volatile int32_t x6064 = -23;
volatile int64_t x6074 = -1LL;
uint64_t x6169 = 27428281402334799LLU;
volatile int8_t x6206 = -1;
int32_t x6350 = -1;
uint8_t x6445 = 2U;
int8_t x6446 = -1;
int8_t x6448 = -1;
static int16_t x6462 = -61;
volatile int32_t x6774 = -1;
int8_t x6776 = -1;
uint64_t x6909 = 106418586LLU;
volatile int64_t x6911 = -1LL;
uint64_t t93 = 4LLU;
volatile uint32_t x7181 = 797818220U;
static int64_t x7184 = -4082872LL;
uint32_t x7241 = 6431860U;
int32_t x7242 = 0;
volatile int16_t x7390 = -1;
static volatile uint16_t x7391 = UINT16_MAX;
static int16_t x7392 = INT16_MIN;
volatile uint64_t x7394 = UINT64_MAX;


void f0(void) {
	uint16_t x141 = 3U;
	int64_t x142 = 0LL;
	volatile int32_t t0 = 1666;

	t0 = (x141<<(x142*(x143|x144)));

	if (t0 != 3) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x153 = 10U;
	int16_t x154 = -1;
	static uint32_t x155 = UINT32_MAX;
	uint32_t x156 = 8735U;
	static int32_t t1 = -183674257;

	t1 = (x153<<(x154*(x155|x156)));

	if (t1 != 20) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x342 = -1LL;
	int64_t x343 = -1LL;
	int32_t x344 = INT32_MIN;

	t2 = (x341<<(x342*(x343|x344)));

	if (t2 != 510) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x461 = 14866;
	uint8_t x462 = 0U;
	uint32_t x463 = 440985U;
	int64_t x464 = INT64_MIN;

	t3 = (x461<<(x462*(x463|x464)));

	if (t3 != 14866) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x513 = 408U;
	static volatile uint16_t x514 = 0U;
	uint16_t x516 = 1U;
	volatile int32_t t4 = 0;

	t4 = (x513<<(x514*(x515|x516)));

	if (t4 != 408) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x565 = INT16_MAX;
	int32_t x566 = -1;
	static int64_t x568 = INT64_MAX;
	volatile int32_t t5 = 3509524;

	t5 = (x565<<(x566*(x567|x568)));

	if (t5 != 65534) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x678 = -1;
	int8_t x679 = INT8_MIN;
	int64_t t6 = 2169547467201540659LL;

	t6 = (x677<<(x678*(x679|x680)));

	if (t6 != 1576757484651958684LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x709 = 5U;
	int16_t x710 = -1;
	volatile int64_t x711 = INT64_MAX;
	int32_t x712 = INT32_MIN;
	volatile int32_t t7 = 0;

	t7 = (x709<<(x710*(x711|x712)));

	if (t7 != 10) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x717 = INT16_MAX;
	uint32_t x718 = UINT32_MAX;
	static volatile int32_t x719 = -1;
	volatile int32_t x720 = INT32_MIN;
	volatile int32_t t8 = 186611;

	t8 = (x717<<(x718*(x719|x720)));

	if (t8 != 65534) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x805 = INT16_MAX;
	int16_t x807 = 2;
	volatile uint32_t x808 = 4098940U;
	static int32_t t9 = 4427310;

	t9 = (x805<<(x806*(x807|x808)));

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x825 = UINT64_MAX;
	uint8_t x826 = 0U;
	int64_t x827 = -1LL;
	int64_t x828 = INT64_MIN;
	static volatile uint64_t t10 = UINT64_MAX;

	t10 = (x825<<(x826*(x827|x828)));

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x841 = INT8_MAX;
	uint64_t x842 = UINT64_MAX;
	uint8_t x843 = 7U;
	uint64_t x844 = UINT64_MAX;
	int32_t t11 = -20347;

	t11 = (x841<<(x842*(x843|x844)));

	if (t11 != 254) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x849 = 7643117440LLU;
	uint64_t x850 = UINT64_MAX;
	int32_t x851 = -6873848;
	int8_t x852 = -1;
	volatile uint64_t t12 = 922590903075LLU;

	t12 = (x849<<(x850*(x851|x852)));

	if (t12 != 15286234880LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x901 = 11734LLU;
	uint32_t x902 = UINT32_MAX;
	int32_t x903 = INT32_MIN;
	volatile uint32_t x904 = UINT32_MAX;
	static uint64_t t13 = 51813239LLU;

	t13 = (x901<<(x902*(x903|x904)));

	if (t13 != 23468LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x957 = INT16_MAX;
	static volatile int32_t x959 = -1;
	int8_t x960 = -1;
	volatile int32_t t14 = 94533101;

	t14 = (x957<<(x958*(x959|x960)));

	if (t14 != 65534) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x1097 = 601;
	static int32_t x1098 = -1;
	volatile int32_t x1099 = INT32_MIN;
	int64_t x1100 = INT64_MAX;
	volatile int32_t t15 = -1632;

	t15 = (x1097<<(x1098*(x1099|x1100)));

	if (t15 != 1202) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x1121 = 28;
	uint32_t x1122 = UINT32_MAX;
	int8_t x1123 = -5;
	static uint32_t x1124 = 1469256345U;
	volatile int32_t t16 = 205732;

	t16 = (x1121<<(x1122*(x1123|x1124)));

	if (t16 != 896) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x1173 = UINT64_MAX;
	volatile int8_t x1174 = 0;
	volatile int16_t x1176 = 478;

	t17 = (x1173<<(x1174*(x1175|x1176)));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1373 = INT16_MAX;
	int8_t x1374 = -1;
	int64_t x1375 = INT64_MAX;
	volatile int64_t x1376 = INT64_MIN;

	t18 = (x1373<<(x1374*(x1375|x1376)));

	if (t18 != 65534) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x1437 = 15026;
	static int32_t x1439 = -1;
	int32_t t19 = -2482687;

	t19 = (x1437<<(x1438*(x1439|x1440)));

	if (t19 != 30052) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x1465 = UINT32_MAX;
	uint64_t x1466 = UINT64_MAX;
	int16_t x1467 = -1;
	volatile int16_t x1468 = INT16_MAX;
	static volatile uint32_t t20 = 308360U;

	t20 = (x1465<<(x1466*(x1467|x1468)));

	if (t20 != 4294967294U) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1493 = 87U;
	int8_t x1494 = 0;
	int16_t x1495 = INT16_MAX;
	static volatile int8_t x1496 = 0;
	int32_t t21 = -1;

	t21 = (x1493<<(x1494*(x1495|x1496)));

	if (t21 != 87) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x1565 = 0LLU;
	int32_t x1566 = -1;
	uint64_t x1567 = UINT64_MAX;
	int64_t x1568 = 144750307005976LL;
	static volatile uint64_t t22 = 1825868468645052365LLU;

	t22 = (x1565<<(x1566*(x1567|x1568)));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1685 = 3144891LL;
	int16_t x1686 = 0;
	int16_t x1687 = 110;
	volatile int64_t t23 = -22482810346231718LL;

	t23 = (x1685<<(x1686*(x1687|x1688)));

	if (t23 != 3144891LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1905 = 0;
	int16_t x1906 = -23;
	uint16_t x1908 = UINT16_MAX;
	volatile int32_t t24 = -13728846;

	t24 = (x1905<<(x1906*(x1907|x1908)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x1929 = 37480516LLU;
	int32_t x1930 = -1;
	static int64_t x1931 = INT64_MIN;

	t25 = (x1929<<(x1930*(x1931|x1932)));

	if (t25 != 74961032LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x2105 = 35;
	int16_t x2106 = -1;
	int32_t x2107 = 0;
	int16_t x2108 = -1;
	int32_t t26 = 8;

	t26 = (x2105<<(x2106*(x2107|x2108)));

	if (t26 != 70) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x2309 = INT16_MAX;
	int16_t x2310 = -1;
	static int32_t x2312 = -1;
	volatile int32_t t27 = 136981;

	t27 = (x2309<<(x2310*(x2311|x2312)));

	if (t27 != 65534) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x2389 = 3557U;
	uint8_t x2390 = 0U;
	int8_t x2391 = -1;
	int16_t x2392 = INT16_MIN;
	static int32_t t28 = -193512;

	t28 = (x2389<<(x2390*(x2391|x2392)));

	if (t28 != 3557) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x2433 = INT16_MAX;
	int32_t x2434 = -1;
	volatile uint32_t x2435 = UINT32_MAX;
	uint64_t x2436 = UINT64_MAX;
	static volatile int32_t t29 = 50397332;

	t29 = (x2433<<(x2434*(x2435|x2436)));

	if (t29 != 65534) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x2513 = UINT16_MAX;
	uint64_t x2514 = UINT64_MAX;
	int8_t x2515 = -1;
	int32_t t30 = 34;

	t30 = (x2513<<(x2514*(x2515|x2516)));

	if (t30 != 131070) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x2534 = -20;
	uint16_t x2535 = 16189U;
	int32_t x2536 = -1;
	uint32_t t31 = 1584U;

	t31 = (x2533<<(x2534*(x2535|x2536)));

	if (t31 != 2097152U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x2537 = INT16_MAX;
	static int16_t x2539 = INT16_MAX;

	t32 = (x2537<<(x2538*(x2539|x2540)));

	if (t32 != 65534) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x2574 = -1;
	volatile int64_t x2576 = 187365312LL;

	t33 = (x2573<<(x2574*(x2575|x2576)));

	if (t33 != 510) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x2633 = UINT16_MAX;
	static int16_t x2634 = -1;
	volatile uint16_t x2636 = 1U;
	volatile int32_t t34 = 19196;

	t34 = (x2633<<(x2634*(x2635|x2636)));

	if (t34 != 131070) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x2709 = 936;
	int32_t x2711 = INT32_MIN;
	static volatile int32_t x2712 = INT32_MAX;

	t35 = (x2709<<(x2710*(x2711|x2712)));

	if (t35 != 1872) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x2853 = 21U;
	int32_t x2854 = -1;
	static volatile int16_t x2855 = -1;
	static volatile int16_t x2856 = INT16_MIN;

	t36 = (x2853<<(x2854*(x2855|x2856)));

	if (t36 != 42) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x2917 = 3447U;
	int64_t x2918 = -1LL;
	int16_t x2919 = INT16_MAX;
	int32_t x2920 = -1;
	volatile int32_t t37 = 124031;

	t37 = (x2917<<(x2918*(x2919|x2920)));

	if (t37 != 6894) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x2949 = 1301U;
	int32_t x2952 = -1;
	volatile uint32_t t38 = 470650U;

	t38 = (x2949<<(x2950*(x2951|x2952)));

	if (t38 != 2602U) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x3101 = 157455301021LLU;
	int64_t x3102 = INT64_MIN;
	uint64_t x3103 = 4091838012LLU;
	static volatile int16_t x3104 = -170;

	t39 = (x3101<<(x3102*(x3103|x3104)));

	if (t39 != 157455301021LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x3169 = 12LLU;
	int8_t x3170 = -1;
	static int64_t x3171 = -1LL;
	int32_t x3172 = INT32_MIN;
	uint64_t t40 = 2466LLU;

	t40 = (x3169<<(x3170*(x3171|x3172)));

	if (t40 != 24LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x3226 = -1;
	volatile int32_t t41 = 571754941;

	t41 = (x3225<<(x3226*(x3227|x3228)));

	if (t41 != 71167654) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x3297 = UINT64_MAX;
	int32_t x3298 = -3;
	int32_t x3299 = INT32_MAX;
	static int64_t x3300 = -459164667LL;

	t42 = (x3297<<(x3298*(x3299|x3300)));

	if (t42 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x3301 = 63653839842808537LL;
	static int64_t x3302 = -1LL;
	int32_t x3303 = -1;
	int8_t x3304 = INT8_MAX;
	volatile int64_t t43 = 0LL;

	t43 = (x3301<<(x3302*(x3303|x3304)));

	if (t43 != 127307679685617074LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x3321 = INT16_MAX;
	int16_t x3322 = -1;
	uint8_t x3324 = 63U;
	volatile int32_t t44 = 872;

	t44 = (x3321<<(x3322*(x3323|x3324)));

	if (t44 != 65534) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x3361 = 874137119LLU;
	int16_t x3362 = -28;
	uint64_t x3364 = UINT64_MAX;
	uint64_t t45 = 31859357LLU;

	t45 = (x3361<<(x3362*(x3363|x3364)));

	if (t45 != 234649396145291264LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x3421 = 1680;
	uint8_t x3422 = 0U;
	int8_t x3423 = INT8_MAX;
	volatile int32_t t46 = -154170;

	t46 = (x3421<<(x3422*(x3423|x3424)));

	if (t46 != 1680) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x3521 = INT8_MAX;
	static int16_t x3522 = -1;
	uint32_t x3523 = UINT32_MAX;
	int32_t t47 = 2;

	t47 = (x3521<<(x3522*(x3523|x3524)));

	if (t47 != 254) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x3837 = UINT64_MAX;
	int32_t x3839 = INT32_MIN;
	uint64_t t48 = UINT64_MAX;

	t48 = (x3837<<(x3838*(x3839|x3840)));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x3897 = 1;
	int64_t x3898 = 0LL;
	static int32_t x3899 = -25183363;
	int8_t x3900 = -1;
	volatile int32_t t49 = 19;

	t49 = (x3897<<(x3898*(x3899|x3900)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x3905 = 680900033487114LLU;
	static volatile int64_t x3906 = -1LL;
	int8_t x3907 = INT8_MAX;
	volatile uint64_t x3908 = UINT64_MAX;

	t50 = (x3905<<(x3906*(x3907|x3908)));

	if (t50 != 1361800066974228LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x3977 = 3;
	int8_t x3978 = 0;
	volatile int8_t x3979 = 37;
	static int8_t x3980 = -19;

	t51 = (x3977<<(x3978*(x3979|x3980)));

	if (t51 != 3) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x4033 = 453U;
	uint64_t x4034 = UINT64_MAX;
	int32_t x4035 = 123520679;
	uint64_t x4036 = UINT64_MAX;

	t52 = (x4033<<(x4034*(x4035|x4036)));

	if (t52 != 906) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint64_t x4045 = 7827200315928243LLU;
	volatile int16_t x4046 = 0;
	uint32_t x4047 = 541U;
	int8_t x4048 = -1;
	volatile uint64_t t53 = 21LLU;

	t53 = (x4045<<(x4046*(x4047|x4048)));

	if (t53 != 7827200315928243LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x4157 = UINT32_MAX;
	int32_t x4158 = -1;
	volatile uint16_t x4159 = UINT16_MAX;
	uint64_t x4160 = UINT64_MAX;
	uint32_t t54 = 12476629U;

	t54 = (x4157<<(x4158*(x4159|x4160)));

	if (t54 != 4294967294U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x4169 = 4U;
	int32_t x4170 = -1;
	int8_t x4171 = -1;
	uint8_t x4172 = 95U;
	volatile int32_t t55 = 17;

	t55 = (x4169<<(x4170*(x4171|x4172)));

	if (t55 != 8) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x4261 = 3124472U;
	static volatile int8_t x4262 = -1;
	int8_t x4263 = -1;
	uint32_t x4264 = 14U;
	volatile uint32_t t56 = 81U;

	t56 = (x4261<<(x4262*(x4263|x4264)));

	if (t56 != 6248944U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x4333 = 21507U;
	int32_t x4334 = -1;
	uint16_t x4335 = UINT16_MAX;
	static int8_t x4336 = INT8_MIN;

	t57 = (x4333<<(x4334*(x4335|x4336)));

	if (t57 != 43014) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x4362 = -1;
	int8_t x4363 = -1;
	uint16_t x4364 = 26U;
	volatile int32_t t58 = 65900266;

	t58 = (x4361<<(x4362*(x4363|x4364)));

	if (t58 != 42) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x4365 = 273U;
	static volatile int32_t x4366 = -1;
	static int8_t x4367 = -1;
	int64_t x4368 = INT64_MIN;
	static volatile int32_t t59 = 34343;

	t59 = (x4365<<(x4366*(x4367|x4368)));

	if (t59 != 546) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x4402 = -1;
	int64_t x4403 = -1LL;
	static uint32_t x4404 = 50456U;
	static volatile int32_t t60 = 1;

	t60 = (x4401<<(x4402*(x4403|x4404)));

	if (t60 != 254) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x4546 = -1LL;
	int8_t x4548 = INT8_MIN;
	int32_t t61 = -9721598;

	t61 = (x4545<<(x4546*(x4547|x4548)));

	if (t61 != 150) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x4554 = -1;
	static volatile uint16_t x4556 = 123U;
	volatile int32_t t62 = 61960;

	t62 = (x4553<<(x4554*(x4555|x4556)));

	if (t62 != 120768) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x4593 = UINT8_MAX;
	uint16_t x4594 = 0U;
	volatile int8_t x4596 = INT8_MIN;
	static volatile int32_t t63 = -1;

	t63 = (x4593<<(x4594*(x4595|x4596)));

	if (t63 != 255) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x4637 = UINT8_MAX;
	uint32_t x4638 = 0U;
	int32_t x4639 = -27874285;
	uint8_t x4640 = UINT8_MAX;

	t64 = (x4637<<(x4638*(x4639|x4640)));

	if (t64 != 255) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x4851 = UINT64_MAX;
	uint64_t t65 = 66421398LLU;

	t65 = (x4849<<(x4850*(x4851|x4852)));

	if (t65 != 112725803325879496LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x5041 = INT8_MAX;
	int32_t x5042 = -1;
	volatile int16_t x5043 = -1;
	uint32_t x5044 = UINT32_MAX;
	volatile int32_t t66 = 148;

	t66 = (x5041<<(x5042*(x5043|x5044)));

	if (t66 != 254) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x5101 = 125U;
	volatile uint32_t x5102 = 0U;
	int32_t x5103 = -18485;
	volatile int64_t x5104 = -5876LL;

	t67 = (x5101<<(x5102*(x5103|x5104)));

	if (t67 != 125) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x5177 = 32442677585098LLU;
	volatile int32_t x5178 = -1;
	volatile uint32_t x5179 = 849213U;
	volatile uint64_t t68 = 4160434961987602LLU;

	t68 = (x5177<<(x5178*(x5179|x5180)));

	if (t68 != 64885355170196LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x5218 = -1;
	uint64_t x5219 = 1479811LLU;
	static int32_t x5220 = -1;

	t69 = (x5217<<(x5218*(x5219|x5220)));

	if (t69 != 4948U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x5233 = 24;
	int8_t x5234 = 0;
	static uint64_t x5235 = UINT64_MAX;
	int16_t x5236 = -59;
	int32_t t70 = 0;

	t70 = (x5233<<(x5234*(x5235|x5236)));

	if (t70 != 24) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x5393 = UINT16_MAX;
	int16_t x5394 = -5;
	static int64_t x5395 = -1LL;
	int16_t x5396 = INT16_MAX;

	t71 = (x5393<<(x5394*(x5395|x5396)));

	if (t71 != 2097120) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x5425 = INT16_MAX;
	volatile int8_t x5426 = -1;
	volatile uint8_t x5427 = UINT8_MAX;
	int64_t x5428 = -1LL;
	int32_t t72 = -13882395;

	t72 = (x5425<<(x5426*(x5427|x5428)));

	if (t72 != 65534) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x5585 = 1U;
	volatile uint8_t x5586 = 0U;
	int64_t x5588 = -1LL;
	int32_t t73 = 1867474;

	t73 = (x5585<<(x5586*(x5587|x5588)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x5617 = 90954821032554LLU;
	int64_t x5618 = -1LL;
	int8_t x5619 = -1;
	int64_t x5620 = INT64_MIN;
	static volatile uint64_t t74 = 27179LLU;

	t74 = (x5617<<(x5618*(x5619|x5620)));

	if (t74 != 181909642065108LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x5621 = 1U;
	uint32_t x5622 = UINT32_MAX;
	uint8_t x5623 = 116U;
	int8_t x5624 = -1;
	int32_t t75 = -1;

	t75 = (x5621<<(x5622*(x5623|x5624)));

	if (t75 != 2) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int16_t x5841 = 1742;
	int8_t x5842 = -1;
	uint64_t x5843 = UINT64_MAX;
	int32_t x5844 = INT32_MIN;
	volatile int32_t t76 = -697120604;

	t76 = (x5841<<(x5842*(x5843|x5844)));

	if (t76 != 3484) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x5901 = INT8_MAX;
	int64_t x5902 = -1LL;
	int32_t x5903 = INT32_MIN;
	volatile int32_t t77 = 213013;

	t77 = (x5901<<(x5902*(x5903|x5904)));

	if (t77 != 254) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x5949 = UINT32_MAX;
	volatile int32_t x5951 = 84;
	uint32_t x5952 = UINT32_MAX;
	volatile uint32_t t78 = 10U;

	t78 = (x5949<<(x5950*(x5951|x5952)));

	if (t78 != 4294967294U) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x5977 = 12622U;
	int16_t x5978 = -1;
	uint64_t x5980 = 8236233840892507LLU;

	t79 = (x5977<<(x5978*(x5979|x5980)));

	if (t79 != 25244) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x5985 = INT16_MAX;
	static volatile int32_t x5986 = 0;
	uint32_t x5987 = 15U;
	int64_t x5988 = 230514296635699LL;

	t80 = (x5985<<(x5986*(x5987|x5988)));

	if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x6061 = INT16_MAX;
	uint64_t x6062 = UINT64_MAX;
	static int32_t x6063 = 64202462;
	int32_t t81 = 41202;

	t81 = (x6061<<(x6062*(x6063|x6064)));

	if (t81 != 65534) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x6073 = INT16_MAX;
	int32_t x6075 = -1;
	volatile int8_t x6076 = 17;
	int32_t t82 = -12;

	t82 = (x6073<<(x6074*(x6075|x6076)));

	if (t82 != 65534) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x6153 = UINT32_MAX;
	int8_t x6154 = -1;
	static uint32_t x6155 = UINT32_MAX;
	int32_t x6156 = 113669;
	uint32_t t83 = 100U;

	t83 = (x6153<<(x6154*(x6155|x6156)));

	if (t83 != 4294967294U) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x6170 = -8;
	uint16_t x6171 = UINT16_MAX;
	static int16_t x6172 = INT16_MIN;
	uint64_t t84 = 133LLU;

	t84 = (x6169<<(x6170*(x6171|x6172)));

	if (t84 != 7021640038997708544LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x6205 = 21942U;
	int32_t x6207 = INT32_MIN;
	int8_t x6208 = -1;
	volatile uint32_t t85 = 3525957U;

	t85 = (x6205<<(x6206*(x6207|x6208)));

	if (t85 != 43884U) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x6305 = 16U;
	int64_t x6306 = -1LL;
	volatile int64_t x6307 = -1LL;
	uint64_t x6308 = 322583LLU;
	static uint32_t t86 = 80140480U;

	t86 = (x6305<<(x6306*(x6307|x6308)));

	if (t86 != 32U) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x6349 = UINT64_MAX;
	static volatile int32_t x6351 = -1;
	int16_t x6352 = INT16_MIN;
	uint64_t t87 = 1943909127612020LLU;

	t87 = (x6349<<(x6350*(x6351|x6352)));

	if (t87 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x6447 = 8;
	int32_t t88 = 813191;

	t88 = (x6445<<(x6446*(x6447|x6448)));

	if (t88 != 4) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x6461 = 443476796758469846LLU;
	int16_t x6463 = -1;
	int16_t x6464 = 8136;
	uint64_t t89 = 45964677500202LLU;

	t89 = (x6461<<(x6462*(x6463|x6464)));

	if (t89 != 13835058055282163712LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x6641 = 38;
	int64_t x6642 = -1LL;
	int8_t x6643 = -1;
	int16_t x6644 = INT16_MAX;
	volatile int32_t t90 = 7139661;

	t90 = (x6641<<(x6642*(x6643|x6644)));

	if (t90 != 76) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x6649 = 27020U;
	int16_t x6650 = -1;
	int8_t x6651 = INT8_MIN;
	uint8_t x6652 = UINT8_MAX;
	uint32_t t91 = 6U;

	t91 = (x6649<<(x6650*(x6651|x6652)));

	if (t91 != 54040U) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x6773 = 6481U;
	int16_t x6775 = 1;
	static int32_t t92 = -208085;

	t92 = (x6773<<(x6774*(x6775|x6776)));

	if (t92 != 12962) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x6910 = -1;
	int64_t x6912 = -1LL;

	t93 = (x6909<<(x6910*(x6911|x6912)));

	if (t93 != 212837172LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x7085 = UINT8_MAX;
	int8_t x7086 = -1;
	static volatile int16_t x7087 = 2543;
	int8_t x7088 = -40;
	int32_t t94 = 21;

	t94 = (x7085<<(x7086*(x7087|x7088)));

	if (t94 != 510) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x7182 = -1;
	int8_t x7183 = -1;
	volatile uint32_t t95 = 18850608U;

	t95 = (x7181<<(x7182*(x7183|x7184)));

	if (t95 != 1595636440U) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x7243 = 47U;
	uint64_t x7244 = 2519788LLU;
	static uint32_t t96 = 663U;

	t96 = (x7241<<(x7242*(x7243|x7244)));

	if (t96 != 6431860U) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x7361 = 7909526U;
	int32_t x7362 = -1;
	uint64_t x7363 = 346728177916920LLU;
	int8_t x7364 = -1;
	uint32_t t97 = 1915U;

	t97 = (x7361<<(x7362*(x7363|x7364)));

	if (t97 != 15819052U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x7389 = 40600035LL;
	static int64_t t98 = 66178508239LL;

	t98 = (x7389<<(x7390*(x7391|x7392)));

	if (t98 != 81200070LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x7393 = INT16_MAX;
	volatile int64_t x7395 = INT64_MIN;
	int8_t x7396 = -3;
	int32_t t99 = 23;

	t99 = (x7393<<(x7394*(x7395|x7396)));

	if (t99 != 262136) { NG(); } else { ; }
	
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

