
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x42 = INT64_MIN;
volatile uint64_t t0 = 2LLU;
int8_t x75 = 4;
uint32_t x89 = UINT32_MAX;
uint8_t x90 = 12U;
static int64_t x144 = -984899125118LL;
volatile uint64_t t4 = 1260585542103LLU;
uint32_t t5 = 82U;
uint16_t x317 = 1U;
uint64_t x497 = 38LLU;
static volatile uint64_t t8 = 1482498675852675185LLU;
volatile int32_t x525 = -1;
uint32_t x526 = 210521512U;
int64_t x528 = INT64_MIN;
static int8_t x587 = 2;
static uint64_t t13 = 3459765320265499841LLU;
uint32_t x761 = 17428982U;
static int32_t x764 = 50770;
int32_t x1080 = INT32_MIN;
volatile int32_t t15 = -1;
static uint32_t x1197 = 12613553U;
uint32_t x1198 = 41329402U;
uint32_t t17 = 0U;
volatile uint64_t t18 = 40105511LLU;
uint8_t x1789 = 58U;
int64_t x2048 = INT64_MIN;
static volatile int64_t t23 = 9LL;
static uint32_t x2077 = 609819613U;
static int32_t x2078 = INT32_MIN;
volatile uint32_t t24 = 8182U;
static uint32_t x2110 = 1951U;
uint16_t x2238 = UINT16_MAX;
static int32_t x2240 = -3;
int32_t t27 = 1058874654;
int64_t x2261 = INT64_MIN;
uint64_t x2262 = 927620409056648008LLU;
int64_t x2264 = -1LL;
uint32_t x2626 = 30U;
volatile uint8_t x2627 = 15U;
static uint32_t t29 = 4670126U;
int32_t x2632 = -1793498;
volatile uint64_t t30 = 6589192205132399716LLU;
int64_t x2816 = -1LL;
int16_t x3165 = INT16_MAX;
int16_t x3472 = -1;
int64_t t35 = -2709666083944914LL;
uint32_t x3693 = UINT32_MAX;
int16_t x3873 = -1;
int8_t x3875 = 6;
static uint16_t x3951 = 2U;
static int8_t x4019 = 4;
int16_t x4080 = -7;
uint64_t t44 = 1LLU;
uint16_t x4119 = 1U;
static volatile uint16_t x4165 = 7U;
uint64_t x4166 = UINT64_MAX;
uint8_t x4555 = 20U;
volatile int32_t t49 = -77795627;
uint32_t x4625 = UINT32_MAX;
uint8_t x4627 = 0U;
uint8_t x4679 = 1U;
int16_t x4749 = INT16_MAX;
volatile uint16_t x4751 = 10U;
uint16_t x4752 = UINT16_MAX;
int16_t x4771 = 0;
uint64_t x4810 = UINT64_MAX;
volatile uint8_t x4897 = UINT8_MAX;
uint64_t t56 = 94367362336768846LLU;
uint16_t x5099 = 24U;
static uint32_t x5156 = 2U;
uint64_t x5309 = 9969LLU;
volatile int8_t x5310 = -6;
volatile int64_t x5465 = 1LL;
static int64_t t64 = -22502179LL;
uint64_t x5550 = 4713LLU;
uint64_t t65 = 25LLU;
int64_t x5569 = 838630038961LL;
int16_t x5570 = 15;
uint64_t x5789 = UINT64_MAX;
volatile uint64_t t69 = 1164098617LLU;
uint8_t x6017 = 0U;
uint8_t x6018 = 3U;
int16_t x6019 = 3;
int8_t x6020 = INT8_MAX;
int64_t x6044 = INT64_MIN;
int64_t x6131 = 0LL;
uint32_t x6214 = UINT32_MAX;
int64_t t75 = 7LL;
int16_t x6294 = INT16_MIN;
int16_t x6295 = 1;
uint32_t x6318 = 43608536U;
int16_t x6320 = INT16_MIN;
static uint32_t x6341 = UINT32_MAX;
int64_t x6344 = -1LL;
static uint64_t t79 = 103LLU;
uint32_t t80 = 1325U;
uint64_t x6681 = 122116LLU;
uint16_t x6683 = 62U;
uint64_t x7017 = 35920796900960748LLU;
int8_t x7019 = 3;
int8_t x7201 = INT8_MIN;
int8_t x7204 = INT8_MIN;
static int64_t x7428 = -149826449107464627LL;
volatile uint64_t t86 = 516900408LLU;
volatile int16_t x7548 = INT16_MIN;
volatile int8_t x7591 = 2;
volatile int32_t x7592 = INT32_MIN;
uint64_t x7745 = UINT64_MAX;
int64_t x7962 = INT64_MIN;
volatile uint64_t t92 = 1523LLU;
uint8_t x8259 = 9U;
int16_t x8262 = -2;
volatile uint8_t x8271 = 17U;
int64_t x8284 = INT64_MIN;
volatile uint64_t t99 = 551258733LLU;
volatile uint64_t x8564 = 12398LLU;
static uint32_t t101 = 240178467U;
uint64_t x8601 = 281609596593LLU;
volatile uint8_t x8625 = 1U;
uint64_t x8626 = UINT64_MAX;


void f0(void) {
    	uint64_t x41 = 5461517LLU;
	int32_t x43 = 1;
	static uint32_t x44 = UINT32_MAX;

    t0 = (((x41|x42)<<x43)+x44);

    if (t0 != 4305890329LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x73 = -1;
	uint32_t x74 = UINT32_MAX;
	uint16_t x76 = 29U;
	uint32_t t1 = 6920957U;

    t1 = (((x73|x74)<<x75)+x76);

    if (t1 != 13U) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile uint8_t x85 = 2U;
	static uint16_t x86 = UINT16_MAX;
	static int16_t x87 = 0;
	int32_t x88 = -529727809;
	volatile int32_t t2 = 90;

    t2 = (((x85|x86)<<x87)+x88);

    if (t2 != -529662274) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x91 = 31LL;
	int16_t x92 = -17;
	static volatile uint32_t t3 = 13U;

    t3 = (((x89|x90)<<x91)+x92);

    if (t3 != 2147483631U) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x141 = -1;
	uint64_t x142 = 330139LLU;
	uint16_t x143 = 4U;

    t4 = (((x141|x142)<<x143)+x144);

    if (t4 != 18446743088810426482LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x193 = UINT32_MAX;
	int16_t x194 = 440;
	uint16_t x195 = 16U;
	static uint16_t x196 = 222U;

    t5 = (((x193|x194)<<x195)+x196);

    if (t5 != 4294901982U) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x318 = 117;
	uint64_t x319 = 1LLU;
	uint16_t x320 = 14U;
	int32_t t6 = -1207877;

    t6 = (((x317|x318)<<x319)+x320);

    if (t6 != 248) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x461 = 362;
	static int16_t x462 = 1;
	int32_t x463 = 1;
	int8_t x464 = -1;
	volatile int32_t t7 = 110141;

    t7 = (((x461|x462)<<x463)+x464);

    if (t7 != 725) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint32_t x498 = UINT32_MAX;
	volatile int64_t x499 = 2LL;
	uint32_t x500 = UINT32_MAX;

    t8 = (((x497|x498)<<x499)+x500);

    if (t8 != 21474836475LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile uint64_t x527 = 9LLU;
	volatile int64_t t9 = -295LL;

    t9 = (((x525|x526)<<x527)+x528);

    if (t9 != -9223372032559809024LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint16_t x585 = 1U;
	uint64_t x586 = UINT64_MAX;
	uint16_t x588 = UINT16_MAX;
	uint64_t t10 = 36LLU;

    t10 = (((x585|x586)<<x587)+x588);

    if (t10 != 65531LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x665 = 20425588LL;
	uint32_t x666 = 1031587U;
	uint64_t x667 = 0LLU;
	int8_t x668 = INT8_MIN;
	volatile int64_t t11 = 153832270019LL;

    t11 = (((x665|x666)<<x667)+x668);

    if (t11 != 20954999LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x681 = 7U;
	static uint8_t x682 = 1U;
	static uint8_t x683 = 1U;
	int64_t x684 = INT64_MIN;
	static int64_t t12 = 0LL;

    t12 = (((x681|x682)<<x683)+x684);

    if (t12 != -9223372036854775794LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x749 = 3LLU;
	static uint64_t x750 = 8245769733562768536LLU;
	int8_t x751 = 0;
	int64_t x752 = -1038800749745837LL;

    t13 = (((x749|x750)<<x751)+x752);

    if (t13 != 8244730932813022702LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x762 = 30746LLU;
	uint8_t x763 = 0U;
	uint64_t t14 = 6147698689LLU;

    t14 = (((x761|x762)<<x763)+x764);

    if (t14 != 17481808LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x1077 = 116U;
	uint16_t x1078 = UINT16_MAX;
	uint32_t x1079 = 1U;

    t15 = (((x1077|x1078)<<x1079)+x1080);

    if (t15 != -2147352578) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x1161 = -1;
	volatile uint64_t x1162 = 12909733766914295LLU;
	uint16_t x1163 = 1U;
	int32_t x1164 = -1;
	uint64_t t16 = 230344672718179LLU;

    t16 = (((x1161|x1162)<<x1163)+x1164);

    if (t16 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x1199 = 4;
	int8_t x1200 = -1;

    t17 = (((x1197|x1198)<<x1199)+x1200);

    if (t17 != 795836335U) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint32_t x1321 = 956751U;
	static volatile int16_t x1322 = INT16_MIN;
	int8_t x1323 = 0;
	uint64_t x1324 = 511877284034LLU;

    t18 = (((x1321|x1322)<<x1323)+x1324);

    if (t18 != 516172225041LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x1701 = INT32_MAX;
	static int64_t x1702 = 13122550212023LL;
	volatile uint8_t x1703 = 10U;
	static uint64_t x1704 = UINT64_MAX;
	uint64_t t19 = 6581012LLU;

    t19 = (((x1701|x1702)<<x1703)+x1704);

    if (t19 != 13438231114677247LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x1790 = INT16_MAX;
	static uint8_t x1791 = 0U;
	uint16_t x1792 = 440U;
	static volatile int32_t t20 = -33016704;

    t20 = (((x1789|x1790)<<x1791)+x1792);

    if (t20 != 33207) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint32_t x1841 = 208U;
	uint64_t x1842 = UINT64_MAX;
	volatile uint8_t x1843 = 5U;
	uint64_t x1844 = 12963547LLU;
	uint64_t t21 = 102LLU;

    t21 = (((x1841|x1842)<<x1843)+x1844);

    if (t21 != 12963515LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x1925 = 0;
	static int16_t x1926 = 9;
	int16_t x1927 = 0;
	uint32_t x1928 = 0U;
	uint32_t t22 = 63381U;

    t22 = (((x1925|x1926)<<x1927)+x1928);

    if (t22 != 9U) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x2045 = INT32_MAX;
	int8_t x2046 = INT8_MAX;
	static uint8_t x2047 = 0U;

    t23 = (((x2045|x2046)<<x2047)+x2048);

    if (t23 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x2079 = 0;
	int32_t x2080 = INT32_MIN;

    t24 = (((x2077|x2078)<<x2079)+x2080);

    if (t24 != 609819613U) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint32_t x2109 = 383849U;
	static volatile uint16_t x2111 = 3U;
	volatile uint64_t x2112 = UINT64_MAX;
	uint64_t t25 = 13025723LLU;

    t25 = (((x2109|x2110)<<x2111)+x2112);

    if (t25 != 3080183LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint64_t x2121 = 7124043213304121LLU;
	int64_t x2122 = -19212LL;
	uint8_t x2123 = 4U;
	static uint32_t x2124 = UINT32_MAX;
	uint64_t t26 = 16471LLU;

    t26 = (((x2121|x2122)<<x2123)+x2124);

    if (t26 != 4294926287LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x2237 = 193;
	static uint8_t x2239 = 0U;

    t27 = (((x2237|x2238)<<x2239)+x2240);

    if (t27 != 65532) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x2263 = 0U;
	uint64_t t28 = 627LLU;

    t28 = (((x2261|x2262)<<x2263)+x2264);

    if (t28 != 10150992445911423815LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x2625 = INT32_MIN;
	int8_t x2628 = INT8_MIN;

    t29 = (((x2625|x2626)<<x2627)+x2628);

    if (t29 != 982912U) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint64_t x2629 = 0LLU;
	int16_t x2630 = -1;
	uint8_t x2631 = 48U;

    t30 = (((x2629|x2630)<<x2631)+x2632);

    if (t30 != 18446462598731047462LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint64_t x2781 = UINT64_MAX;
	int32_t x2782 = -652456;
	uint16_t x2783 = 50U;
	int8_t x2784 = INT8_MAX;
	static volatile uint64_t t31 = 7LLU;

    t31 = (((x2781|x2782)<<x2783)+x2784);

    if (t31 != 18445618173802709119LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x2813 = 17LLU;
	int8_t x2814 = -1;
	uint32_t x2815 = 3U;
	static uint64_t t32 = 8520891920969699LLU;

    t32 = (((x2813|x2814)<<x2815)+x2816);

    if (t32 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x2913 = 3U;
	int32_t x2914 = 0;
	uint16_t x2915 = 1U;
	uint8_t x2916 = 71U;
	int32_t t33 = 0;

    t33 = (((x2913|x2914)<<x2915)+x2916);

    if (t33 != 77) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x3166 = 1316U;
	int8_t x3167 = 0;
	uint8_t x3168 = 27U;
	uint32_t t34 = 229U;

    t34 = (((x3165|x3166)<<x3167)+x3168);

    if (t34 != 32794U) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x3469 = 947248852015LL;
	static uint32_t x3470 = 14U;
	static int16_t x3471 = 3;

    t35 = (((x3469|x3470)<<x3471)+x3472);

    if (t35 != 7577990816119LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x3569 = INT8_MIN;
	static uint64_t x3570 = 1751655229535856LLU;
	uint16_t x3571 = 3U;
	uint64_t x3572 = 145413LLU;
	uint64_t t36 = 6LLU;

    t36 = (((x3569|x3570)<<x3571)+x3572);

    if (t36 != 145285LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x3694 = -149;
	int8_t x3695 = 0;
	int64_t x3696 = -29LL;
	int64_t t37 = 29LL;

    t37 = (((x3693|x3694)<<x3695)+x3696);

    if (t37 != 4294967266LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x3697 = 244U;
	static volatile uint8_t x3698 = UINT8_MAX;
	uint16_t x3699 = 0U;
	volatile int16_t x3700 = -1;
	int32_t t38 = -1496;

    t38 = (((x3697|x3698)<<x3699)+x3700);

    if (t38 != 254) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x3713 = 943LL;
	uint16_t x3714 = UINT16_MAX;
	uint32_t x3715 = 1U;
	int64_t x3716 = INT64_MIN;
	volatile int64_t t39 = -32969271LL;

    t39 = (((x3713|x3714)<<x3715)+x3716);

    if (t39 != -9223372036854644738LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint32_t x3721 = 21U;
	static volatile int8_t x3722 = INT8_MIN;
	uint16_t x3723 = 26U;
	int32_t x3724 = -1;
	uint32_t t40 = 450440828U;

    t40 = (((x3721|x3722)<<x3723)+x3724);

    if (t40 != 1409286143U) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x3874 = 467994136538728LLU;
	int64_t x3876 = 37817433LL;
	uint64_t t41 = 17422646896301LLU;

    t41 = (((x3873|x3874)<<x3875)+x3876);

    if (t41 != 37817369LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x3949 = 268766898836LLU;
	volatile int16_t x3950 = -1;
	int32_t x3952 = INT32_MIN;
	uint64_t t42 = 571275LLU;

    t42 = (((x3949|x3950)<<x3951)+x3952);

    if (t42 != 18446744071562067964LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x4017 = UINT16_MAX;
	static uint8_t x4018 = 7U;
	int8_t x4020 = 16;
	volatile int32_t t43 = 17815;

    t43 = (((x4017|x4018)<<x4019)+x4020);

    if (t43 != 1048576) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x4077 = 1LLU;
	volatile int8_t x4078 = INT8_MIN;
	int8_t x4079 = 5;

    t44 = (((x4077|x4078)<<x4079)+x4080);

    if (t44 != 18446744073709547545LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x4117 = 113U;
	int64_t x4118 = 3769362918969114LL;
	int64_t x4120 = -1LL;
	int64_t t45 = 20651489300260433LL;

    t45 = (((x4117|x4118)<<x4119)+x4120);

    if (t45 != 7538725837938421LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x4149 = 15;
	uint32_t x4150 = 3975330U;
	int16_t x4151 = 27;
	volatile uint8_t x4152 = 1U;
	uint32_t t46 = 1063975U;

    t46 = (((x4149|x4150)<<x4151)+x4152);

    if (t46 != 2013265921U) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint8_t x4167 = 35U;
	int32_t x4168 = -3994;
	volatile uint64_t t47 = 914421573564891LLU;

    t47 = (((x4165|x4166)<<x4167)+x4168);

    if (t47 != 18446744039349809254LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x4425 = UINT64_MAX;
	volatile int16_t x4426 = INT16_MIN;
	volatile int16_t x4427 = 0;
	volatile int8_t x4428 = -1;
	volatile uint64_t t48 = 1976599183159LLU;

    t48 = (((x4425|x4426)<<x4427)+x4428);

    if (t48 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint8_t x4553 = UINT8_MAX;
	volatile uint16_t x4554 = 1913U;
	int16_t x4556 = INT16_MIN;

    t49 = (((x4553|x4554)<<x4555)+x4556);

    if (t49 != 2146402304) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x4626 = -1;
	int16_t x4628 = -926;
	uint32_t t50 = 914137892U;

    t50 = (((x4625|x4626)<<x4627)+x4628);

    if (t50 != 4294966369U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x4677 = 11558U;
	uint16_t x4678 = UINT16_MAX;
	int64_t x4680 = -126146693LL;
	static volatile int64_t t51 = 323852LL;

    t51 = (((x4677|x4678)<<x4679)+x4680);

    if (t51 != -126015623LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x4750 = 84U;
	int32_t t52 = -26765;

    t52 = (((x4749|x4750)<<x4751)+x4752);

    if (t52 != 33618943) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x4769 = UINT64_MAX;
	volatile int8_t x4770 = INT8_MIN;
	uint64_t x4772 = 86367278198249782LLU;
	uint64_t t53 = 5994694LLU;

    t53 = (((x4769|x4770)<<x4771)+x4772);

    if (t53 != 86367278198249781LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile uint8_t x4809 = 56U;
	uint8_t x4811 = 4U;
	volatile int8_t x4812 = INT8_MAX;
	volatile uint64_t t54 = 3899998LLU;

    t54 = (((x4809|x4810)<<x4811)+x4812);

    if (t54 != 111LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x4898 = 23;
	static uint16_t x4899 = 3U;
	volatile int32_t x4900 = INT32_MIN;
	volatile int32_t t55 = -24418;

    t55 = (((x4897|x4898)<<x4899)+x4900);

    if (t55 != -2147481608) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x4937 = INT32_MIN;
	static volatile uint64_t x4938 = 2079842221703721483LLU;
	uint8_t x4939 = 7U;
	volatile int16_t x4940 = 6475;

    t56 = (((x4937|x4938)<<x4939)+x4940);

    if (t56 != 18446743896562671307LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint32_t x5001 = 39491740U;
	static volatile int32_t x5002 = INT32_MIN;
	uint8_t x5003 = 23U;
	static int16_t x5004 = INT16_MAX;
	static uint32_t t57 = 61326U;

    t57 = (((x5001|x5002)<<x5003)+x5004);

    if (t57 != 1308655615U) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x5097 = 60LLU;
	volatile int32_t x5098 = -1;
	volatile int64_t x5100 = INT64_MIN;
	static volatile uint64_t t58 = 161372024261167431LLU;

    t58 = (((x5097|x5098)<<x5099)+x5100);

    if (t58 != 9223372036837998592LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int8_t x5153 = 54;
	uint64_t x5154 = 4572LLU;
	volatile int64_t x5155 = 27LL;
	static volatile uint64_t t59 = 9215444212364579LLU;

    t59 = (((x5153|x5154)<<x5155)+x5156);

    if (t59 != 618206855170LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x5169 = UINT64_MAX;
	int32_t x5170 = INT32_MIN;
	uint16_t x5171 = 11U;
	static int16_t x5172 = -1;
	uint64_t t60 = 1LLU;

    t60 = (((x5169|x5170)<<x5171)+x5172);

    if (t60 != 18446744073709549567LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x5213 = 56;
	uint64_t x5214 = 22338077784958LLU;
	int16_t x5215 = 0;
	int64_t x5216 = -32519LL;
	volatile uint64_t t61 = 19518230946680712LLU;

    t61 = (((x5213|x5214)<<x5215)+x5216);

    if (t61 != 22338077752439LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint8_t x5311 = 1U;
	int16_t x5312 = INT16_MAX;
	uint64_t t62 = 27158LLU;

    t62 = (((x5309|x5310)<<x5311)+x5312);

    if (t62 != 32757LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint16_t x5325 = 32625U;
	static uint32_t x5326 = UINT32_MAX;
	uint64_t x5327 = 1LLU;
	uint64_t x5328 = 1359LLU;
	static uint64_t t63 = 7696478024708153808LLU;

    t63 = (((x5325|x5326)<<x5327)+x5328);

    if (t63 != 4294968653LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x5466 = UINT32_MAX;
	uint8_t x5467 = 1U;
	int32_t x5468 = INT32_MIN;

    t64 = (((x5465|x5466)<<x5467)+x5468);

    if (t64 != 6442450942LL) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint16_t x5549 = 10U;
	static uint8_t x5551 = 1U;
	int16_t x5552 = INT16_MIN;

    t65 = (((x5549|x5550)<<x5551)+x5552);

    if (t65 != 18446744073709528278LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x5565 = INT32_MIN;
	static uint32_t x5566 = UINT32_MAX;
	uint16_t x5567 = 0U;
	int32_t x5568 = INT32_MAX;
	volatile uint32_t t66 = 7U;

    t66 = (((x5565|x5566)<<x5567)+x5568);

    if (t66 != 2147483646U) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint8_t x5571 = 2U;
	int64_t x5572 = INT64_MIN;
	volatile int64_t t67 = 14865LL;

    t67 = (((x5569|x5570)<<x5571)+x5572);

    if (t67 != -9223368682334619908LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x5601 = 5;
	int32_t x5602 = 23678;
	uint8_t x5603 = 4U;
	int64_t x5604 = -1LL;
	volatile int64_t t68 = 14779737104LL;

    t68 = (((x5601|x5602)<<x5603)+x5604);

    if (t68 != 378863LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint16_t x5790 = 2753U;
	int64_t x5791 = 47LL;
	int32_t x5792 = INT32_MAX;

    t69 = (((x5789|x5790)<<x5791)+x5792);

    if (t69 != 18446603338368679935LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x5821 = 4270;
	static uint64_t x5822 = UINT64_MAX;
	uint8_t x5823 = 1U;
	int32_t x5824 = INT32_MIN;
	uint64_t t70 = 554630LLU;

    t70 = (((x5821|x5822)<<x5823)+x5824);

    if (t70 != 18446744071562067966LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t t71 = 229516399;

    t71 = (((x6017|x6018)<<x6019)+x6020);

    if (t71 != 151) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint64_t x6037 = UINT64_MAX;
	uint32_t x6038 = 32652793U;
	volatile int8_t x6039 = 0;
	uint32_t x6040 = 15482380U;
	static volatile uint64_t t72 = 4280728630LLU;

    t72 = (((x6037|x6038)<<x6039)+x6040);

    if (t72 != 15482379LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x6041 = 24U;
	uint8_t x6042 = 20U;
	uint32_t x6043 = 1U;
	volatile int64_t t73 = -220LL;

    t73 = (((x6041|x6042)<<x6043)+x6044);

    if (t73 != -9223372036854775752LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x6129 = 137093001LLU;
	static int16_t x6130 = -1;
	int32_t x6132 = -2640343;
	static uint64_t t74 = 11086463572764LLU;

    t74 = (((x6129|x6130)<<x6131)+x6132);

    if (t74 != 18446744073706911272LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x6213 = 17869135538781771LL;
	int8_t x6215 = 7;
	int64_t x6216 = -1LL;

    t75 = (((x6213|x6214)<<x6215)+x6216);

    if (t75 != 2287249717832187775LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x6293 = 5292U;
	int32_t x6296 = -67567155;
	volatile uint32_t t76 = 10030887U;

    t76 = (((x6293|x6294)<<x6295)+x6296);

    if (t76 != 4227345189U) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x6317 = 20U;
	volatile uint16_t x6319 = 1U;
	static volatile uint32_t t77 = 9857U;

    t77 = (((x6317|x6318)<<x6319)+x6320);

    if (t77 != 87184312U) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint8_t x6342 = 3U;
	uint16_t x6343 = 6U;
	volatile int64_t t78 = -108LL;

    t78 = (((x6341|x6342)<<x6343)+x6344);

    if (t78 != 4294967231LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x6557 = UINT8_MAX;
	volatile uint64_t x6558 = 5924781931967079LLU;
	static uint16_t x6559 = 60U;
	uint8_t x6560 = 18U;

    t79 = (((x6557|x6558)<<x6559)+x6560);

    if (t79 != 17293822569102704658LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x6649 = 103U;
	volatile uint16_t x6650 = UINT16_MAX;
	static int16_t x6651 = 4;
	volatile int8_t x6652 = INT8_MIN;

    t80 = (((x6649|x6650)<<x6651)+x6652);

    if (t80 != 1048432U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x6682 = 0LLU;
	uint16_t x6684 = 1135U;
	static uint64_t t81 = 96838951747LLU;

    t81 = (((x6681|x6682)<<x6683)+x6684);

    if (t81 != 1135LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x6989 = 12;
	uint8_t x6990 = UINT8_MAX;
	static volatile int8_t x6991 = 12;
	volatile int16_t x6992 = 1;
	volatile int32_t t82 = -29180022;

    t82 = (((x6989|x6990)<<x6991)+x6992);

    if (t82 != 1044481) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x7018 = 16426221201LL;
	static volatile int64_t x7020 = INT64_MIN;
	uint64_t t83 = 77LLU;

    t83 = (((x7017|x7018)<<x7019)+x7020);

    if (t83 != 9510738465749598184LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x7133 = -1;
	volatile uint64_t x7134 = 1LLU;
	static uint8_t x7135 = 6U;
	volatile int32_t x7136 = -1;
	uint64_t t84 = 1LLU;

    t84 = (((x7133|x7134)<<x7135)+x7136);

    if (t84 != 18446744073709551551LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x7202 = 3694U;
	static int64_t x7203 = 30LL;
	static volatile uint32_t t85 = 196U;

    t85 = (((x7201|x7202)<<x7203)+x7204);

    if (t85 != 2147483520U) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint64_t x7425 = UINT64_MAX;
	static uint16_t x7426 = UINT16_MAX;
	volatile int8_t x7427 = 12;

    t86 = (((x7425|x7426)<<x7427)+x7428);

    if (t86 != 18296917624602082893LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x7545 = INT16_MAX;
	static uint8_t x7546 = 4U;
	int8_t x7547 = 6;
	int32_t t87 = 3153;

    t87 = (((x7545|x7546)<<x7547)+x7548);

    if (t87 != 2064320) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x7589 = UINT64_MAX;
	volatile uint32_t x7590 = 5U;
	static uint64_t t88 = 1102924980390483481LLU;

    t88 = (((x7589|x7590)<<x7591)+x7592);

    if (t88 != 18446744071562067964LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x7605 = 69;
	int16_t x7606 = 633;
	volatile uint16_t x7607 = 3U;
	static int64_t x7608 = 88837LL;
	volatile int64_t t89 = 394179758100LL;

    t89 = (((x7605|x7606)<<x7607)+x7608);

    if (t89 != 93933LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x7746 = -331;
	volatile uint16_t x7747 = 0U;
	int32_t x7748 = -1;
	uint64_t t90 = 41578663LLU;

    t90 = (((x7745|x7746)<<x7747)+x7748);

    if (t90 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x7769 = 35;
	static uint8_t x7770 = 15U;
	uint16_t x7771 = 7U;
	uint64_t x7772 = 240653190528059LLU;
	uint64_t t91 = 1993LLU;

    t91 = (((x7769|x7770)<<x7771)+x7772);

    if (t91 != 240653190534075LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x7961 = UINT64_MAX;
	uint8_t x7963 = 0U;
	int8_t x7964 = 2;

    t92 = (((x7961|x7962)<<x7963)+x7964);

    if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x7989 = -249;
	uint32_t x7990 = UINT32_MAX;
	uint8_t x7991 = 17U;
	volatile uint16_t x7992 = 366U;
	volatile uint32_t t93 = 278335433U;

    t93 = (((x7989|x7990)<<x7991)+x7992);

    if (t93 != 4294836590U) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x7993 = -1;
	uint64_t x7994 = 3426209059426997LLU;
	static volatile int8_t x7995 = 27;
	int16_t x7996 = 7640;
	volatile uint64_t t94 = 747344618823207223LLU;

    t94 = (((x7993|x7994)<<x7995)+x7996);

    if (t94 != 18446744073575341528LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x8113 = 0LL;
	static int32_t x8114 = 0;
	uint8_t x8115 = 5U;
	int16_t x8116 = INT16_MIN;
	static int64_t t95 = -86689364308131455LL;

    t95 = (((x8113|x8114)<<x8115)+x8116);

    if (t95 != -32768LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x8257 = INT8_MIN;
	volatile uint32_t x8258 = UINT32_MAX;
	volatile uint64_t x8260 = UINT64_MAX;
	volatile uint64_t t96 = 14001951590391LLU;

    t96 = (((x8257|x8258)<<x8259)+x8260);

    if (t96 != 4294966783LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x8261 = 10LLU;
	volatile uint8_t x8263 = 5U;
	int32_t x8264 = INT32_MAX;
	volatile uint64_t t97 = 819312736591117LLU;

    t97 = (((x8261|x8262)<<x8263)+x8264);

    if (t97 != 2147483583LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x8269 = UINT8_MAX;
	uint64_t x8270 = 3518242671638838LLU;
	int32_t x8272 = INT32_MAX;
	volatile uint64_t t98 = 16172037944LLU;

    t98 = (((x8269|x8270)<<x8271)+x8272);

    if (t98 != 18421245690190364671LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x8281 = 25893775520LLU;
	uint8_t x8282 = UINT8_MAX;
	uint8_t x8283 = 16U;

    t99 = (((x8281|x8282)<<x8283)+x8284);

    if (t99 != 9225069011333480448LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x8561 = 945865093573LLU;
	uint32_t x8562 = UINT32_MAX;
	static uint8_t x8563 = 5U;
	static uint64_t t100 = 346322767LLU;

    t100 = (((x8561|x8562)<<x8563)+x8564);

    if (t100 != 30374008729678LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint32_t x8565 = 5U;
	static volatile int8_t x8566 = INT8_MAX;
	int16_t x8567 = 1;
	int16_t x8568 = INT16_MAX;

    t101 = (((x8565|x8566)<<x8567)+x8568);

    if (t101 != 33021U) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x8602 = UINT8_MAX;
	int32_t x8603 = 7;
	int8_t x8604 = INT8_MAX;
	uint64_t t102 = 2074621133545LLU;

    t102 = (((x8601|x8602)<<x8603)+x8604);

    if (t102 != 36046028374015LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x8627 = 1;
	uint32_t x8628 = UINT32_MAX;
	uint64_t t103 = 225981LLU;

    t103 = (((x8625|x8626)<<x8627)+x8628);

    if (t103 != 4294967293LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x8737 = UINT32_MAX;
	static uint32_t x8738 = 980U;
	static int32_t x8739 = 1;
	uint32_t x8740 = 3268U;
	volatile uint32_t t104 = 0U;

    t104 = (((x8737|x8738)<<x8739)+x8740);

    if (t104 != 3266U) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();


    return 0;
}

