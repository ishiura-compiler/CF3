
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

int16_t x65 = INT16_MIN;
int8_t x173 = INT8_MIN;
static int32_t t2 = 50715;
int32_t t3 = -483655970;
static int8_t x282 = -1;
int8_t x305 = -8;
static int64_t x307 = INT64_MAX;
volatile int16_t x308 = 2;
static volatile int32_t t6 = -1;
int32_t x326 = -1;
volatile int64_t x437 = 55821LL;
volatile int32_t t10 = -221971;
int8_t x613 = INT8_MAX;
uint16_t x615 = UINT16_MAX;
volatile int32_t t15 = 18786;
uint64_t x669 = 1480LLU;
int32_t t19 = 5578816;
volatile int16_t x810 = INT16_MIN;
int32_t x811 = INT32_MIN;
static uint8_t x812 = 6U;
int32_t x834 = INT32_MAX;
static int64_t x885 = INT64_MAX;
int8_t x928 = 0;
static volatile uint16_t x980 = 7U;
uint8_t x1025 = 54U;
int32_t t28 = -3439;
int8_t x1030 = 0;
static uint16_t x1032 = 0U;
static int8_t x1051 = INT8_MIN;
static uint16_t x1113 = UINT16_MAX;
uint64_t x1114 = 4LLU;
uint64_t x1129 = 512452603754LLU;
volatile int32_t t37 = 1;
int8_t x1214 = 22;
uint16_t x1236 = 16U;
int8_t x1275 = INT8_MIN;
int32_t t40 = -41999144;
uint8_t x1321 = UINT8_MAX;
uint8_t x1324 = 3U;
volatile uint8_t x1430 = 5U;
uint64_t x1431 = UINT64_MAX;
volatile int32_t t47 = 23778;
volatile uint16_t x1476 = 0U;
volatile int32_t t51 = -85290;
uint64_t x1601 = UINT64_MAX;
static int8_t x1603 = INT8_MIN;
volatile int32_t t54 = 1015;
static volatile int32_t x1691 = INT32_MIN;
volatile int32_t t56 = -69;
static int32_t t57 = 4491;
uint8_t x1884 = 13U;
int32_t t58 = -999599;
int16_t x1959 = -1;
static int32_t t59 = 2304381;
int32_t t61 = 453;
uint64_t x2120 = 17LLU;
int64_t x2132 = 13LL;
volatile int16_t x2138 = -1;
volatile uint8_t x2145 = UINT8_MAX;
int16_t x2169 = -1;
uint16_t x2264 = 11U;
uint32_t x2326 = UINT32_MAX;
int32_t t72 = -792;
int16_t x2379 = 10;
static volatile int32_t t73 = -765141;
int64_t x2399 = -1LL;
int32_t t74 = 12;
static int8_t x2438 = 1;
volatile int32_t t78 = -66919564;
uint8_t x2459 = 7U;
uint16_t x2460 = 5U;
int16_t x2474 = -1;
uint32_t x2476 = 6U;
uint8_t x2523 = UINT8_MAX;
int8_t x2541 = INT8_MIN;
static volatile int8_t x2549 = INT8_MIN;
int16_t x2558 = INT16_MIN;
int32_t x2564 = 2;
volatile uint16_t x2659 = UINT16_MAX;
static uint16_t x2694 = UINT16_MAX;
uint8_t x2696 = 2U;
static int16_t x2711 = -1;
int32_t t91 = 89143;
int8_t x2765 = INT8_MIN;
volatile uint8_t x2768 = 0U;
static int32_t x2775 = -4769665;
volatile int16_t x2891 = -1;
static volatile uint8_t x2892 = 5U;
static int32_t t96 = -3601;
int16_t x2902 = -14;
uint16_t x2967 = UINT16_MAX;
uint8_t x2968 = 7U;
int16_t x2974 = INT16_MAX;
int32_t x2975 = -1;
int16_t x2999 = INT16_MIN;
int8_t x3020 = 16;
volatile int16_t x3092 = 0;
static uint8_t x3211 = 4U;
int16_t x3241 = INT16_MAX;
uint16_t x3349 = 488U;
volatile uint16_t x3350 = UINT16_MAX;
uint64_t x3351 = 1770LLU;
int8_t x3358 = -1;
static uint32_t x3359 = 1049410U;
volatile uint64_t x3366 = UINT64_MAX;
static uint8_t x3368 = 3U;
int8_t x3414 = INT8_MIN;
static uint16_t x3503 = UINT16_MAX;
uint64_t x3525 = UINT64_MAX;
int16_t x3630 = INT16_MIN;
volatile int32_t x3642 = INT32_MAX;
volatile int64_t x3673 = -1LL;
int32_t t124 = 0;
int32_t x3686 = INT32_MIN;
int64_t x3687 = INT64_MAX;
uint8_t x3716 = 1U;
uint16_t x3810 = 125U;
int16_t x3811 = INT16_MIN;
int64_t x3833 = INT64_MIN;
uint8_t x3836 = 20U;
int8_t x3921 = INT8_MIN;
uint8_t x4031 = 6U;
int8_t x4057 = -1;
int64_t x4109 = 1LL;
static volatile int32_t t136 = -83;
volatile int64_t x4137 = -2749901LL;
uint32_t x4249 = 132232195U;
static uint16_t x4250 = 693U;
static int8_t x4251 = INT8_MIN;
volatile int32_t t143 = -772882120;
static uint16_t x4387 = UINT16_MAX;
uint16_t x4438 = UINT16_MAX;
static int16_t x4473 = -1213;
volatile int32_t x4475 = -1;
volatile int8_t x4476 = 5;
uint64_t x4482 = 9421LLU;
uint64_t x4490 = 871260693481LLU;
int8_t x4533 = INT8_MIN;
volatile int32_t t151 = 6364780;
int8_t x4566 = INT8_MIN;
uint8_t x4568 = 10U;
int16_t x4580 = 1;
int32_t t155 = 241246048;
int16_t x4593 = INT16_MIN;
static volatile int64_t x4594 = INT64_MAX;
volatile int32_t t158 = -7;
static int32_t x4631 = INT32_MIN;
int64_t x4633 = 834204468LL;
int64_t x4649 = 60372LL;
static uint16_t x4651 = 64U;
uint16_t x4669 = UINT16_MAX;
uint32_t x4670 = 827624U;
int8_t x4671 = INT8_MIN;
static int8_t x4672 = 3;
int32_t t162 = -396;
int8_t x4681 = INT8_MIN;
int32_t t163 = -12843;
int8_t x4806 = INT8_MIN;
static volatile int16_t x4893 = -10868;
int32_t t166 = 378912;
int64_t x4921 = -31245LL;
volatile int16_t x4924 = 1;
int32_t t167 = 1917570;
uint16_t x5043 = UINT16_MAX;
volatile uint8_t x5088 = 16U;
uint32_t x5089 = UINT32_MAX;
int32_t t170 = 11382;
static uint64_t x5129 = 2LLU;
static int32_t t173 = 0;
int64_t x5223 = 8741891419LL;
volatile int32_t t176 = 45879140;
uint8_t x5486 = 39U;
static int8_t x5489 = 3;
int32_t t183 = 6574;
volatile int32_t x5538 = INT32_MIN;
uint8_t x5554 = 63U;
int8_t x5556 = 27;
static uint32_t x5613 = 26642U;
static volatile uint8_t x5616 = 0U;
static int16_t x5681 = INT16_MIN;
volatile uint8_t x5682 = 2U;
int8_t x5683 = INT8_MAX;
volatile uint64_t x5794 = UINT64_MAX;
uint32_t x5853 = UINT32_MAX;
uint16_t x5888 = 5U;
int32_t t193 = 107842;
static volatile int32_t t195 = 108274770;
int8_t x5972 = 10;


void f0(void) {
    	int16_t x17 = INT16_MIN;
	uint16_t x18 = 95U;
	uint64_t x19 = 18450839020813LLU;
	static int8_t x20 = 1;
	int32_t t0 = 0;

    t0 = (((x17&x18)<=x19)>>x20);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x66 = INT16_MAX;
	int16_t x67 = -1;
	uint8_t x68 = 2U;
	int32_t t1 = 49;

    t1 = (((x65&x66)<=x67)>>x68);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x174 = -1;
	static int32_t x175 = INT32_MIN;
	static volatile int32_t x176 = 1;

    t2 = (((x173&x174)<=x175)>>x176);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x177 = INT32_MIN;
	uint8_t x178 = 1U;
	static int64_t x179 = INT64_MIN;
	int16_t x180 = 7;

    t3 = (((x177&x178)<=x179)>>x180);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x241 = 6136972U;
	int32_t x242 = INT32_MIN;
	volatile int16_t x243 = INT16_MIN;
	static int16_t x244 = 25;
	volatile int32_t t4 = -2;

    t4 = (((x241&x242)<=x243)>>x244);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x281 = INT32_MIN;
	uint32_t x283 = 9341U;
	uint8_t x284 = 0U;
	int32_t t5 = 30;

    t5 = (((x281&x282)<=x283)>>x284);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint16_t x306 = UINT16_MAX;

    t6 = (((x305&x306)<=x307)>>x308);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x313 = INT64_MAX;
	volatile uint32_t x314 = UINT32_MAX;
	int32_t x315 = INT32_MAX;
	static int64_t x316 = 0LL;
	int32_t t7 = 10631;

    t7 = (((x313&x314)<=x315)>>x316);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x325 = UINT64_MAX;
	uint8_t x327 = 121U;
	static uint8_t x328 = 1U;
	int32_t t8 = 251337;

    t8 = (((x325&x326)<=x327)>>x328);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x421 = UINT16_MAX;
	static int64_t x422 = -1LL;
	volatile int8_t x423 = INT8_MIN;
	static uint8_t x424 = 1U;
	volatile int32_t t9 = 421096597;

    t9 = (((x421&x422)<=x423)>>x424);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int16_t x438 = INT16_MIN;
	volatile int32_t x439 = INT32_MIN;
	int8_t x440 = 0;

    t10 = (((x437&x438)<=x439)>>x440);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x465 = INT32_MIN;
	uint8_t x466 = UINT8_MAX;
	int32_t x467 = INT32_MIN;
	volatile int8_t x468 = 15;
	volatile int32_t t11 = -4153;

    t11 = (((x465&x466)<=x467)>>x468);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x481 = 0;
	volatile uint64_t x482 = 2035567195LLU;
	static int64_t x483 = INT64_MIN;
	int16_t x484 = 27;
	int32_t t12 = 0;

    t12 = (((x481&x482)<=x483)>>x484);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint64_t x549 = 1994877978228LLU;
	volatile uint16_t x550 = 8478U;
	uint16_t x551 = 13U;
	int8_t x552 = 2;
	int32_t t13 = -1;

    t13 = (((x549&x550)<=x551)>>x552);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint16_t x601 = 4U;
	uint8_t x602 = UINT8_MAX;
	int16_t x603 = INT16_MAX;
	uint8_t x604 = 0U;
	volatile int32_t t14 = 29686;

    t14 = (((x601&x602)<=x603)>>x604);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x614 = -1;
	volatile int8_t x616 = 2;

    t15 = (((x613&x614)<=x615)>>x616);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int8_t x617 = -1;
	int16_t x618 = 94;
	int8_t x619 = INT8_MIN;
	volatile uint32_t x620 = 6U;
	int32_t t16 = 776426;

    t16 = (((x617&x618)<=x619)>>x620);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint8_t x670 = UINT8_MAX;
	int64_t x671 = INT64_MIN;
	volatile uint8_t x672 = 3U;
	int32_t t17 = -1867835;

    t17 = (((x669&x670)<=x671)>>x672);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x709 = 9U;
	int8_t x710 = INT8_MIN;
	int64_t x711 = 2114992391094771LL;
	uint8_t x712 = 4U;
	volatile int32_t t18 = -1;

    t18 = (((x709&x710)<=x711)>>x712);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x801 = -1;
	volatile uint16_t x802 = 16U;
	uint64_t x803 = 97758LLU;
	uint16_t x804 = 12U;

    t19 = (((x801&x802)<=x803)>>x804);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint32_t x809 = 3U;
	static int32_t t20 = 1;

    t20 = (((x809&x810)<=x811)>>x812);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x833 = INT64_MIN;
	volatile uint16_t x835 = 11U;
	volatile int16_t x836 = 1;
	static volatile int32_t t21 = 1;

    t21 = (((x833&x834)<=x835)>>x836);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x861 = INT32_MIN;
	int16_t x862 = INT16_MIN;
	int32_t x863 = INT32_MIN;
	uint16_t x864 = 22U;
	int32_t t22 = 470;

    t22 = (((x861&x862)<=x863)>>x864);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint16_t x881 = UINT16_MAX;
	int64_t x882 = INT64_MIN;
	int64_t x883 = 64214485534675LL;
	static uint8_t x884 = 16U;
	volatile int32_t t23 = 220519;

    t23 = (((x881&x882)<=x883)>>x884);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x886 = -76770127141LL;
	int32_t x887 = -1139;
	volatile int32_t x888 = 0;
	static int32_t t24 = 92833604;

    t24 = (((x885&x886)<=x887)>>x888);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x917 = 7U;
	uint8_t x918 = 73U;
	int32_t x919 = 42731990;
	volatile uint16_t x920 = 10U;
	volatile int32_t t25 = 1;

    t25 = (((x917&x918)<=x919)>>x920);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x925 = 129399041597280690LL;
	static volatile uint8_t x926 = 15U;
	volatile uint32_t x927 = 568623U;
	static volatile int32_t t26 = 71189578;

    t26 = (((x925&x926)<=x927)>>x928);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x977 = -1;
	int64_t x978 = INT64_MAX;
	int64_t x979 = -16537LL;
	volatile int32_t t27 = -18872;

    t27 = (((x977&x978)<=x979)>>x980);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x1026 = INT64_MIN;
	static int16_t x1027 = INT16_MIN;
	uint8_t x1028 = 3U;

    t28 = (((x1025&x1026)<=x1027)>>x1028);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x1029 = INT8_MIN;
	static volatile int32_t x1031 = -1;
	volatile int32_t t29 = -178413002;

    t29 = (((x1029&x1030)<=x1031)>>x1032);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x1049 = INT16_MIN;
	uint64_t x1050 = UINT64_MAX;
	int8_t x1052 = 25;
	static volatile int32_t t30 = 66044390;

    t30 = (((x1049&x1050)<=x1051)>>x1052);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x1057 = INT32_MIN;
	static int16_t x1058 = -1;
	uint8_t x1059 = UINT8_MAX;
	uint16_t x1060 = 9U;
	volatile int32_t t31 = 1;

    t31 = (((x1057&x1058)<=x1059)>>x1060);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x1081 = 7821861U;
	int32_t x1082 = -29254856;
	int32_t x1083 = INT32_MAX;
	uint8_t x1084 = 6U;
	volatile int32_t t32 = -111;

    t32 = (((x1081&x1082)<=x1083)>>x1084);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x1115 = -1;
	uint16_t x1116 = 7U;
	static volatile int32_t t33 = 42;

    t33 = (((x1113&x1114)<=x1115)>>x1116);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x1117 = 0U;
	volatile uint64_t x1118 = 7573LLU;
	static volatile uint64_t x1119 = 103712294LLU;
	int8_t x1120 = 12;
	int32_t t34 = -47031;

    t34 = (((x1117&x1118)<=x1119)>>x1120);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x1130 = INT32_MIN;
	int64_t x1131 = INT64_MIN;
	uint32_t x1132 = 20U;
	int32_t t35 = -16037;

    t35 = (((x1129&x1130)<=x1131)>>x1132);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x1145 = 4;
	int64_t x1146 = -1LL;
	static int32_t x1147 = -1;
	uint8_t x1148 = 1U;
	int32_t t36 = -14;

    t36 = (((x1145&x1146)<=x1147)>>x1148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x1181 = 0U;
	static volatile uint8_t x1182 = UINT8_MAX;
	volatile int8_t x1183 = INT8_MAX;
	volatile uint8_t x1184 = 1U;

    t37 = (((x1181&x1182)<=x1183)>>x1184);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x1213 = -1;
	int16_t x1215 = INT16_MAX;
	int16_t x1216 = 1;
	volatile int32_t t38 = -60715568;

    t38 = (((x1213&x1214)<=x1215)>>x1216);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x1233 = 0U;
	int64_t x1234 = -1LL;
	int32_t x1235 = INT32_MAX;
	static int32_t t39 = -32870206;

    t39 = (((x1233&x1234)<=x1235)>>x1236);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x1273 = -1;
	int8_t x1274 = INT8_MIN;
	static uint8_t x1276 = 0U;

    t40 = (((x1273&x1274)<=x1275)>>x1276);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x1317 = INT64_MIN;
	int8_t x1318 = INT8_MIN;
	int32_t x1319 = INT32_MIN;
	uint32_t x1320 = 1U;
	int32_t t41 = 3;

    t41 = (((x1317&x1318)<=x1319)>>x1320);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x1322 = INT64_MAX;
	int16_t x1323 = INT16_MAX;
	int32_t t42 = 6166951;

    t42 = (((x1321&x1322)<=x1323)>>x1324);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x1329 = INT8_MIN;
	int32_t x1330 = INT32_MIN;
	int16_t x1331 = 409;
	static volatile uint8_t x1332 = 17U;
	int32_t t43 = 1473;

    t43 = (((x1329&x1330)<=x1331)>>x1332);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x1425 = INT16_MAX;
	uint16_t x1426 = 642U;
	static uint32_t x1427 = 98204528U;
	static volatile uint8_t x1428 = 10U;
	volatile int32_t t44 = 224403;

    t44 = (((x1425&x1426)<=x1427)>>x1428);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x1429 = -1;
	uint64_t x1432 = 0LLU;
	volatile int32_t t45 = 1;

    t45 = (((x1429&x1430)<=x1431)>>x1432);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x1461 = INT64_MIN;
	int16_t x1462 = -1;
	uint8_t x1463 = 5U;
	int32_t x1464 = 19;
	int32_t t46 = -6350;

    t46 = (((x1461&x1462)<=x1463)>>x1464);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x1469 = 13LLU;
	int16_t x1470 = -6;
	int8_t x1471 = INT8_MIN;
	uint8_t x1472 = 17U;

    t47 = (((x1469&x1470)<=x1471)>>x1472);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x1473 = INT8_MAX;
	static int16_t x1474 = -1;
	uint16_t x1475 = UINT16_MAX;
	int32_t t48 = 0;

    t48 = (((x1473&x1474)<=x1475)>>x1476);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x1557 = -1;
	uint16_t x1558 = 222U;
	uint8_t x1559 = UINT8_MAX;
	volatile int8_t x1560 = 13;
	int32_t t49 = -18587272;

    t49 = (((x1557&x1558)<=x1559)>>x1560);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint16_t x1561 = 1U;
	int32_t x1562 = INT32_MIN;
	static uint8_t x1563 = 0U;
	uint16_t x1564 = 1U;
	int32_t t50 = 1;

    t50 = (((x1561&x1562)<=x1563)>>x1564);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x1597 = 27332606902LLU;
	uint8_t x1598 = 1U;
	static int16_t x1599 = INT16_MIN;
	volatile int8_t x1600 = 0;

    t51 = (((x1597&x1598)<=x1599)>>x1600);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x1602 = INT64_MIN;
	static int32_t x1604 = 12;
	int32_t t52 = -510544;

    t52 = (((x1601&x1602)<=x1603)>>x1604);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x1629 = INT16_MAX;
	int32_t x1630 = INT32_MIN;
	volatile uint16_t x1631 = 0U;
	volatile uint8_t x1632 = 9U;
	int32_t t53 = -417335072;

    t53 = (((x1629&x1630)<=x1631)>>x1632);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x1677 = -3530;
	int8_t x1678 = INT8_MIN;
	uint32_t x1679 = UINT32_MAX;
	static int16_t x1680 = 3;

    t54 = (((x1677&x1678)<=x1679)>>x1680);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x1689 = 110768U;
	uint32_t x1690 = UINT32_MAX;
	int8_t x1692 = 22;
	volatile int32_t t55 = 79674;

    t55 = (((x1689&x1690)<=x1691)>>x1692);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x1717 = 1740865;
	int64_t x1718 = -30731792LL;
	uint64_t x1719 = 9049522LLU;
	static uint8_t x1720 = 5U;

    t56 = (((x1717&x1718)<=x1719)>>x1720);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x1861 = INT8_MIN;
	int32_t x1862 = -1;
	uint16_t x1863 = 13056U;
	int8_t x1864 = 2;

    t57 = (((x1861&x1862)<=x1863)>>x1864);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x1881 = INT64_MAX;
	static uint16_t x1882 = 1143U;
	uint8_t x1883 = 2U;

    t58 = (((x1881&x1882)<=x1883)>>x1884);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x1957 = 79LL;
	int16_t x1958 = 252;
	uint8_t x1960 = 2U;

    t59 = (((x1957&x1958)<=x1959)>>x1960);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x2021 = -389;
	int8_t x2022 = -1;
	volatile uint16_t x2023 = 39U;
	int64_t x2024 = 0LL;
	static int32_t t60 = 5;

    t60 = (((x2021&x2022)<=x2023)>>x2024);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x2033 = INT8_MAX;
	volatile int64_t x2034 = INT64_MAX;
	int32_t x2035 = -42800684;
	static int8_t x2036 = 3;

    t61 = (((x2033&x2034)<=x2035)>>x2036);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x2117 = INT16_MIN;
	uint32_t x2118 = 7U;
	volatile uint64_t x2119 = 1360LLU;
	static int32_t t62 = -524;

    t62 = (((x2117&x2118)<=x2119)>>x2120);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x2129 = INT32_MIN;
	int64_t x2130 = INT64_MIN;
	int64_t x2131 = INT64_MIN;
	volatile int32_t t63 = -244459;

    t63 = (((x2129&x2130)<=x2131)>>x2132);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x2137 = -1;
	volatile int8_t x2139 = 23;
	static uint8_t x2140 = 22U;
	int32_t t64 = -18159;

    t64 = (((x2137&x2138)<=x2139)>>x2140);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int64_t x2146 = -1LL;
	int64_t x2147 = INT64_MAX;
	static uint8_t x2148 = 23U;
	int32_t t65 = -113561153;

    t65 = (((x2145&x2146)<=x2147)>>x2148);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x2170 = -1;
	uint64_t x2171 = 567755979614268019LLU;
	static uint8_t x2172 = 0U;
	int32_t t66 = 590;

    t66 = (((x2169&x2170)<=x2171)>>x2172);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x2245 = INT16_MIN;
	int8_t x2246 = -1;
	int8_t x2247 = 10;
	volatile uint8_t x2248 = 1U;
	volatile int32_t t67 = 1;

    t67 = (((x2245&x2246)<=x2247)>>x2248);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x2261 = INT32_MIN;
	uint64_t x2262 = 3LLU;
	int8_t x2263 = INT8_MAX;
	volatile int32_t t68 = 47;

    t68 = (((x2261&x2262)<=x2263)>>x2264);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x2265 = 17359825U;
	static volatile int8_t x2266 = -1;
	int8_t x2267 = 1;
	uint8_t x2268 = 8U;
	int32_t t69 = 825486;

    t69 = (((x2265&x2266)<=x2267)>>x2268);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x2325 = INT16_MIN;
	int8_t x2327 = INT8_MIN;
	static volatile uint8_t x2328 = 1U;
	int32_t t70 = -517325690;

    t70 = (((x2325&x2326)<=x2327)>>x2328);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x2337 = -1;
	int32_t x2338 = 933;
	int8_t x2339 = -5;
	int8_t x2340 = 2;
	static int32_t t71 = 0;

    t71 = (((x2337&x2338)<=x2339)>>x2340);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x2345 = INT32_MIN;
	int16_t x2346 = -538;
	int64_t x2347 = INT64_MIN;
	int16_t x2348 = 9;

    t72 = (((x2345&x2346)<=x2347)>>x2348);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x2377 = INT64_MAX;
	volatile uint64_t x2378 = 4797262532LLU;
	uint8_t x2380 = 22U;

    t73 = (((x2377&x2378)<=x2379)>>x2380);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x2397 = INT16_MIN;
	volatile int8_t x2398 = INT8_MAX;
	int8_t x2400 = 3;

    t74 = (((x2397&x2398)<=x2399)>>x2400);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x2405 = -1494;
	int64_t x2406 = -1LL;
	static int32_t x2407 = 10060582;
	int8_t x2408 = 2;
	int32_t t75 = -50;

    t75 = (((x2405&x2406)<=x2407)>>x2408);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x2425 = -1216439;
	volatile int32_t x2426 = -1;
	uint32_t x2427 = UINT32_MAX;
	int8_t x2428 = 28;
	volatile int32_t t76 = 15913927;

    t76 = (((x2425&x2426)<=x2427)>>x2428);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x2437 = -1;
	int32_t x2439 = INT32_MIN;
	int16_t x2440 = 14;
	volatile int32_t t77 = 16275;

    t77 = (((x2437&x2438)<=x2439)>>x2440);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x2449 = 1720946;
	uint8_t x2450 = UINT8_MAX;
	static int16_t x2451 = INT16_MAX;
	int8_t x2452 = 25;

    t78 = (((x2449&x2450)<=x2451)>>x2452);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x2457 = INT8_MAX;
	volatile int16_t x2458 = INT16_MIN;
	int32_t t79 = 2;

    t79 = (((x2457&x2458)<=x2459)>>x2460);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x2469 = 8434355654137LLU;
	volatile uint32_t x2470 = UINT32_MAX;
	uint8_t x2471 = 55U;
	static int8_t x2472 = 0;
	int32_t t80 = 17;

    t80 = (((x2469&x2470)<=x2471)>>x2472);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x2473 = -873436943;
	static int32_t x2475 = 163615;
	static int32_t t81 = 55528774;

    t81 = (((x2473&x2474)<=x2475)>>x2476);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint64_t x2521 = 24LLU;
	static uint16_t x2522 = 30637U;
	int8_t x2524 = 8;
	int32_t t82 = -1183249;

    t82 = (((x2521&x2522)<=x2523)>>x2524);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x2542 = UINT64_MAX;
	uint16_t x2543 = 22160U;
	static int16_t x2544 = 0;
	int32_t t83 = -10689809;

    t83 = (((x2541&x2542)<=x2543)>>x2544);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x2550 = INT8_MIN;
	int16_t x2551 = 652;
	int8_t x2552 = 1;
	int32_t t84 = 127;

    t84 = (((x2549&x2550)<=x2551)>>x2552);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x2557 = INT8_MIN;
	int8_t x2559 = -1;
	uint32_t x2560 = 2U;
	int32_t t85 = 46634753;

    t85 = (((x2557&x2558)<=x2559)>>x2560);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x2561 = 15;
	volatile uint32_t x2562 = UINT32_MAX;
	uint64_t x2563 = 260244LLU;
	static volatile int32_t t86 = 523;

    t86 = (((x2561&x2562)<=x2563)>>x2564);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x2657 = INT8_MAX;
	uint32_t x2658 = 659U;
	uint8_t x2660 = 3U;
	static int32_t t87 = 32;

    t87 = (((x2657&x2658)<=x2659)>>x2660);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x2677 = INT32_MIN;
	static volatile int32_t x2678 = -1216205;
	volatile int32_t x2679 = 1298576;
	int8_t x2680 = 2;
	volatile int32_t t88 = 904;

    t88 = (((x2677&x2678)<=x2679)>>x2680);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x2693 = INT8_MIN;
	uint64_t x2695 = UINT64_MAX;
	static volatile int32_t t89 = 1840907;

    t89 = (((x2693&x2694)<=x2695)>>x2696);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x2709 = 25365909;
	int8_t x2710 = 51;
	static uint8_t x2712 = 29U;
	volatile int32_t t90 = -691807149;

    t90 = (((x2709&x2710)<=x2711)>>x2712);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x2713 = INT8_MAX;
	static int16_t x2714 = -1;
	uint64_t x2715 = UINT64_MAX;
	uint32_t x2716 = 8U;

    t91 = (((x2713&x2714)<=x2715)>>x2716);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int16_t x2745 = -1;
	uint8_t x2746 = 1U;
	uint8_t x2747 = 52U;
	int32_t x2748 = 3;
	volatile int32_t t92 = 199111;

    t92 = (((x2745&x2746)<=x2747)>>x2748);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x2766 = INT16_MIN;
	static uint64_t x2767 = UINT64_MAX;
	volatile int32_t t93 = -3;

    t93 = (((x2765&x2766)<=x2767)>>x2768);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x2769 = 33U;
	int32_t x2770 = INT32_MAX;
	uint32_t x2771 = 988344472U;
	uint8_t x2772 = 13U;
	int32_t t94 = 261899610;

    t94 = (((x2769&x2770)<=x2771)>>x2772);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile uint16_t x2773 = UINT16_MAX;
	uint64_t x2774 = UINT64_MAX;
	uint16_t x2776 = 3U;
	static int32_t t95 = 412;

    t95 = (((x2773&x2774)<=x2775)>>x2776);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x2889 = 0LLU;
	int64_t x2890 = INT64_MIN;

    t96 = (((x2889&x2890)<=x2891)>>x2892);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint64_t x2901 = UINT64_MAX;
	int64_t x2903 = INT64_MIN;
	uint8_t x2904 = 22U;
	int32_t t97 = -1054641005;

    t97 = (((x2901&x2902)<=x2903)>>x2904);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x2961 = -8;
	volatile int64_t x2962 = -1LL;
	uint8_t x2963 = 0U;
	static volatile int32_t x2964 = 0;
	volatile int32_t t98 = 14585412;

    t98 = (((x2961&x2962)<=x2963)>>x2964);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x2965 = -55408193LL;
	int64_t x2966 = -62738397638825760LL;
	volatile int32_t t99 = -221040456;

    t99 = (((x2965&x2966)<=x2967)>>x2968);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x2969 = INT16_MAX;
	volatile uint32_t x2970 = 108335U;
	static volatile int16_t x2971 = -238;
	uint16_t x2972 = 8U;
	int32_t t100 = 5241;

    t100 = (((x2969&x2970)<=x2971)>>x2972);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x2973 = INT32_MIN;
	uint16_t x2976 = 1U;
	int32_t t101 = -1;

    t101 = (((x2973&x2974)<=x2975)>>x2976);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x2997 = INT32_MIN;
	int32_t x2998 = -130486344;
	static int64_t x3000 = 11LL;
	int32_t t102 = -922757708;

    t102 = (((x2997&x2998)<=x2999)>>x3000);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int16_t x3017 = 6230;
	int8_t x3018 = -1;
	static int8_t x3019 = -15;
	volatile int32_t t103 = 12034336;

    t103 = (((x3017&x3018)<=x3019)>>x3020);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x3089 = INT8_MIN;
	int64_t x3090 = INT64_MIN;
	int32_t x3091 = -1;
	static volatile int32_t t104 = -1;

    t104 = (((x3089&x3090)<=x3091)>>x3092);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x3149 = INT64_MAX;
	int16_t x3150 = -34;
	volatile uint16_t x3151 = UINT16_MAX;
	uint32_t x3152 = 6U;
	int32_t t105 = -1;

    t105 = (((x3149&x3150)<=x3151)>>x3152);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint64_t x3173 = 358467530462LLU;
	uint32_t x3174 = 77308U;
	static int8_t x3175 = 0;
	uint8_t x3176 = 11U;
	int32_t t106 = -206766687;

    t106 = (((x3173&x3174)<=x3175)>>x3176);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x3209 = 1027U;
	uint32_t x3210 = 31933U;
	volatile uint8_t x3212 = 4U;
	int32_t t107 = -395046;

    t107 = (((x3209&x3210)<=x3211)>>x3212);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x3225 = UINT64_MAX;
	int32_t x3226 = INT32_MAX;
	uint8_t x3227 = 30U;
	volatile int8_t x3228 = 6;
	int32_t t108 = 2359;

    t108 = (((x3225&x3226)<=x3227)>>x3228);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x3233 = INT64_MIN;
	static int32_t x3234 = -1;
	uint8_t x3235 = UINT8_MAX;
	volatile int8_t x3236 = 11;
	int32_t t109 = -36629962;

    t109 = (((x3233&x3234)<=x3235)>>x3236);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x3242 = -1;
	volatile int8_t x3243 = INT8_MIN;
	uint8_t x3244 = 0U;
	volatile int32_t t110 = 57294;

    t110 = (((x3241&x3242)<=x3243)>>x3244);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x3257 = INT8_MIN;
	volatile int32_t x3258 = -1;
	static uint32_t x3259 = 2424U;
	uint16_t x3260 = 21U;
	volatile int32_t t111 = 35788;

    t111 = (((x3257&x3258)<=x3259)>>x3260);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x3265 = -44;
	static uint16_t x3266 = 36U;
	static int8_t x3267 = -1;
	uint8_t x3268 = 1U;
	int32_t t112 = -70530;

    t112 = (((x3265&x3266)<=x3267)>>x3268);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x3352 = 7;
	int32_t t113 = 9107560;

    t113 = (((x3349&x3350)<=x3351)>>x3352);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x3357 = 5;
	uint8_t x3360 = 1U;
	int32_t t114 = 18837;

    t114 = (((x3357&x3358)<=x3359)>>x3360);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x3365 = -1;
	uint32_t x3367 = 25407214U;
	static int32_t t115 = -1830129;

    t115 = (((x3365&x3366)<=x3367)>>x3368);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x3413 = -1;
	int64_t x3415 = INT64_MAX;
	uint8_t x3416 = 12U;
	int32_t t116 = -553761577;

    t116 = (((x3413&x3414)<=x3415)>>x3416);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x3477 = INT16_MIN;
	volatile int64_t x3478 = -1LL;
	uint32_t x3479 = 6706485U;
	uint8_t x3480 = 3U;
	int32_t t117 = -42509952;

    t117 = (((x3477&x3478)<=x3479)>>x3480);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x3501 = UINT64_MAX;
	int8_t x3502 = -1;
	static int8_t x3504 = 8;
	volatile int32_t t118 = 14073216;

    t118 = (((x3501&x3502)<=x3503)>>x3504);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint8_t x3526 = 1U;
	uint32_t x3527 = UINT32_MAX;
	int8_t x3528 = 1;
	volatile int32_t t119 = -88;

    t119 = (((x3525&x3526)<=x3527)>>x3528);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x3629 = -1;
	uint16_t x3631 = 3U;
	volatile int8_t x3632 = 1;
	static int32_t t120 = -2;

    t120 = (((x3629&x3630)<=x3631)>>x3632);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x3641 = -6447101LL;
	uint8_t x3643 = UINT8_MAX;
	uint16_t x3644 = 14U;
	int32_t t121 = -173;

    t121 = (((x3641&x3642)<=x3643)>>x3644);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint64_t x3657 = UINT64_MAX;
	int32_t x3658 = -2165740;
	uint16_t x3659 = UINT16_MAX;
	int8_t x3660 = 7;
	int32_t t122 = -3110;

    t122 = (((x3657&x3658)<=x3659)>>x3660);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x3674 = 2658U;
	uint16_t x3675 = UINT16_MAX;
	uint16_t x3676 = 0U;
	static int32_t t123 = 445923;

    t123 = (((x3673&x3674)<=x3675)>>x3676);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x3677 = -2;
	int8_t x3678 = INT8_MIN;
	volatile uint32_t x3679 = 28U;
	int16_t x3680 = 5;

    t124 = (((x3677&x3678)<=x3679)>>x3680);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x3685 = INT16_MIN;
	static int8_t x3688 = 1;
	volatile int32_t t125 = 248510;

    t125 = (((x3685&x3686)<=x3687)>>x3688);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x3713 = UINT32_MAX;
	int8_t x3714 = INT8_MIN;
	int8_t x3715 = -1;
	volatile int32_t t126 = 11;

    t126 = (((x3713&x3714)<=x3715)>>x3716);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x3793 = 399790116LL;
	int64_t x3794 = INT64_MIN;
	int8_t x3795 = 9;
	volatile uint8_t x3796 = 0U;
	static int32_t t127 = -87415422;

    t127 = (((x3793&x3794)<=x3795)>>x3796);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint32_t x3809 = 129U;
	volatile int8_t x3812 = 0;
	volatile int32_t t128 = 15691;

    t128 = (((x3809&x3810)<=x3811)>>x3812);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint8_t x3813 = 11U;
	volatile uint64_t x3814 = 13845LLU;
	int64_t x3815 = INT64_MIN;
	volatile int8_t x3816 = 0;
	int32_t t129 = -27;

    t129 = (((x3813&x3814)<=x3815)>>x3816);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x3834 = 1150406LL;
	int32_t x3835 = -1;
	static volatile int32_t t130 = -127633498;

    t130 = (((x3833&x3834)<=x3835)>>x3836);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x3922 = -1;
	static volatile uint64_t x3923 = UINT64_MAX;
	int8_t x3924 = 9;
	int32_t t131 = 1;

    t131 = (((x3921&x3922)<=x3923)>>x3924);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x4029 = 204112312114851976LL;
	uint8_t x4030 = UINT8_MAX;
	uint32_t x4032 = 0U;
	static volatile int32_t t132 = -497435;

    t132 = (((x4029&x4030)<=x4031)>>x4032);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x4058 = -7;
	uint64_t x4059 = 27LLU;
	uint8_t x4060 = 23U;
	volatile int32_t t133 = 14;

    t133 = (((x4057&x4058)<=x4059)>>x4060);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x4073 = UINT16_MAX;
	static volatile uint64_t x4074 = 880LLU;
	static volatile uint8_t x4075 = 25U;
	int16_t x4076 = 1;
	volatile int32_t t134 = 7;

    t134 = (((x4073&x4074)<=x4075)>>x4076);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x4097 = -65152;
	uint8_t x4098 = UINT8_MAX;
	int32_t x4099 = INT32_MAX;
	static uint16_t x4100 = 14U;
	int32_t t135 = -5;

    t135 = (((x4097&x4098)<=x4099)>>x4100);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x4110 = UINT32_MAX;
	static int8_t x4111 = -1;
	int8_t x4112 = 14;

    t136 = (((x4109&x4110)<=x4111)>>x4112);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x4138 = 856;
	static uint8_t x4139 = 41U;
	uint8_t x4140 = 6U;
	static volatile int32_t t137 = 1;

    t137 = (((x4137&x4138)<=x4139)>>x4140);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x4197 = -1;
	volatile int8_t x4198 = INT8_MIN;
	uint16_t x4199 = 636U;
	uint16_t x4200 = 7U;
	static int32_t t138 = -61;

    t138 = (((x4197&x4198)<=x4199)>>x4200);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x4221 = INT64_MIN;
	static volatile int64_t x4222 = -1LL;
	int32_t x4223 = -183;
	int16_t x4224 = 0;
	volatile int32_t t139 = -800706;

    t139 = (((x4221&x4222)<=x4223)>>x4224);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint8_t x4252 = 5U;
	volatile int32_t t140 = -26;

    t140 = (((x4249&x4250)<=x4251)>>x4252);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x4337 = INT16_MIN;
	int32_t x4338 = INT32_MIN;
	int16_t x4339 = INT16_MAX;
	static volatile uint8_t x4340 = 27U;
	int32_t t141 = 267;

    t141 = (((x4337&x4338)<=x4339)>>x4340);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x4341 = 36;
	int16_t x4342 = INT16_MIN;
	volatile int16_t x4343 = 1618;
	uint8_t x4344 = 0U;
	static int32_t t142 = 85464;

    t142 = (((x4341&x4342)<=x4343)>>x4344);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x4361 = -1;
	int32_t x4362 = -439;
	static uint32_t x4363 = 1523865763U;
	uint32_t x4364 = 0U;

    t143 = (((x4361&x4362)<=x4363)>>x4364);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x4385 = INT64_MIN;
	static volatile int32_t x4386 = -1;
	static uint32_t x4388 = 3U;
	volatile int32_t t144 = 419;

    t144 = (((x4385&x4386)<=x4387)>>x4388);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x4401 = -92537013;
	static int16_t x4402 = INT16_MIN;
	uint16_t x4403 = UINT16_MAX;
	static volatile int8_t x4404 = 0;
	int32_t t145 = 11;

    t145 = (((x4401&x4402)<=x4403)>>x4404);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int16_t x4429 = INT16_MIN;
	uint16_t x4430 = 5U;
	volatile uint64_t x4431 = UINT64_MAX;
	uint8_t x4432 = 1U;
	int32_t t146 = 217777628;

    t146 = (((x4429&x4430)<=x4431)>>x4432);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x4437 = INT8_MIN;
	static int64_t x4439 = INT64_MIN;
	volatile int16_t x4440 = 2;
	int32_t t147 = 556;

    t147 = (((x4437&x4438)<=x4439)>>x4440);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x4474 = -1;
	static int32_t t148 = -13165;

    t148 = (((x4473&x4474)<=x4475)>>x4476);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x4481 = INT32_MIN;
	uint64_t x4483 = 14642339273165LLU;
	volatile uint8_t x4484 = 6U;
	int32_t t149 = 233897110;

    t149 = (((x4481&x4482)<=x4483)>>x4484);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint16_t x4489 = 30358U;
	int8_t x4491 = INT8_MIN;
	uint16_t x4492 = 7U;
	int32_t t150 = -7573307;

    t150 = (((x4489&x4490)<=x4491)>>x4492);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x4534 = -54;
	int32_t x4535 = -142;
	uint8_t x4536 = 1U;

    t151 = (((x4533&x4534)<=x4535)>>x4536);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x4545 = UINT8_MAX;
	static int8_t x4546 = INT8_MIN;
	static int16_t x4547 = INT16_MIN;
	uint8_t x4548 = 7U;
	int32_t t152 = -876955979;

    t152 = (((x4545&x4546)<=x4547)>>x4548);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile uint64_t x4561 = 74370154LLU;
	int32_t x4562 = -1;
	int32_t x4563 = INT32_MIN;
	uint8_t x4564 = 12U;
	volatile int32_t t153 = -1231;

    t153 = (((x4561&x4562)<=x4563)>>x4564);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x4565 = -50534154;
	int32_t x4567 = INT32_MIN;
	volatile int32_t t154 = -22601;

    t154 = (((x4565&x4566)<=x4567)>>x4568);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x4577 = INT32_MIN;
	volatile int32_t x4578 = INT32_MIN;
	int32_t x4579 = 3012;

    t155 = (((x4577&x4578)<=x4579)>>x4580);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x4595 = INT32_MIN;
	uint8_t x4596 = 20U;
	volatile int32_t t156 = -110;

    t156 = (((x4593&x4594)<=x4595)>>x4596);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint64_t x4617 = 1318300381431707167LLU;
	uint8_t x4618 = UINT8_MAX;
	uint8_t x4619 = 2U;
	uint8_t x4620 = 0U;
	volatile int32_t t157 = -831;

    t157 = (((x4617&x4618)<=x4619)>>x4620);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x4625 = -1LL;
	int32_t x4626 = INT32_MIN;
	int16_t x4627 = INT16_MIN;
	static int8_t x4628 = 0;

    t158 = (((x4625&x4626)<=x4627)>>x4628);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x4629 = 0;
	volatile uint32_t x4630 = 315U;
	static int8_t x4632 = 0;
	volatile int32_t t159 = -414403;

    t159 = (((x4629&x4630)<=x4631)>>x4632);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x4634 = INT16_MIN;
	static int32_t x4635 = INT32_MAX;
	static uint8_t x4636 = 1U;
	int32_t t160 = 102;

    t160 = (((x4633&x4634)<=x4635)>>x4636);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x4650 = INT16_MAX;
	int8_t x4652 = 0;
	volatile int32_t t161 = 2984;

    t161 = (((x4649&x4650)<=x4651)>>x4652);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    

    t162 = (((x4669&x4670)<=x4671)>>x4672);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x4682 = INT8_MAX;
	uint64_t x4683 = 514035LLU;
	uint16_t x4684 = 0U;

    t163 = (((x4681&x4682)<=x4683)>>x4684);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x4797 = 567LL;
	int64_t x4798 = INT64_MIN;
	static int32_t x4799 = INT32_MAX;
	static uint16_t x4800 = 1U;
	int32_t t164 = 0;

    t164 = (((x4797&x4798)<=x4799)>>x4800);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x4805 = INT16_MIN;
	static uint8_t x4807 = 0U;
	uint16_t x4808 = 1U;
	int32_t t165 = 7362;

    t165 = (((x4805&x4806)<=x4807)>>x4808);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x4894 = -57;
	int16_t x4895 = 3;
	volatile uint8_t x4896 = 3U;

    t166 = (((x4893&x4894)<=x4895)>>x4896);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x4922 = 4;
	static uint8_t x4923 = UINT8_MAX;

    t167 = (((x4921&x4922)<=x4923)>>x4924);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x5041 = 1U;
	volatile uint64_t x5042 = 27973224370620390LLU;
	static volatile uint8_t x5044 = 0U;
	int32_t t168 = 4755;

    t168 = (((x5041&x5042)<=x5043)>>x5044);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x5085 = -2535;
	volatile uint32_t x5086 = 7134625U;
	static uint32_t x5087 = 535U;
	static volatile int32_t t169 = -105;

    t169 = (((x5085&x5086)<=x5087)>>x5088);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x5090 = -1;
	int16_t x5091 = -1;
	uint16_t x5092 = 0U;

    t170 = (((x5089&x5090)<=x5091)>>x5092);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x5117 = 829551LLU;
	int32_t x5118 = -1;
	volatile uint64_t x5119 = 573317132607LLU;
	int16_t x5120 = 1;
	volatile int32_t t171 = 11933589;

    t171 = (((x5117&x5118)<=x5119)>>x5120);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint16_t x5130 = 383U;
	static uint16_t x5131 = UINT16_MAX;
	uint8_t x5132 = 0U;
	int32_t t172 = -116203884;

    t172 = (((x5129&x5130)<=x5131)>>x5132);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x5141 = -232409496;
	int64_t x5142 = INT64_MIN;
	volatile int16_t x5143 = -1;
	static int8_t x5144 = 0;

    t173 = (((x5141&x5142)<=x5143)>>x5144);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint8_t x5157 = 2U;
	int32_t x5158 = INT32_MIN;
	int64_t x5159 = INT64_MAX;
	volatile int32_t x5160 = 2;
	volatile int32_t t174 = 0;

    t174 = (((x5157&x5158)<=x5159)>>x5160);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x5221 = -1LL;
	uint8_t x5222 = UINT8_MAX;
	int8_t x5224 = 0;
	int32_t t175 = -56841303;

    t175 = (((x5221&x5222)<=x5223)>>x5224);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x5285 = -1;
	static uint32_t x5286 = 247825410U;
	uint64_t x5287 = UINT64_MAX;
	uint8_t x5288 = 4U;

    t176 = (((x5285&x5286)<=x5287)>>x5288);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x5301 = -6551;
	int16_t x5302 = 3238;
	uint64_t x5303 = UINT64_MAX;
	volatile uint32_t x5304 = 5U;
	int32_t t177 = -132;

    t177 = (((x5301&x5302)<=x5303)>>x5304);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x5317 = UINT8_MAX;
	static int8_t x5318 = 2;
	int32_t x5319 = 9;
	uint16_t x5320 = 2U;
	volatile int32_t t178 = -41;

    t178 = (((x5317&x5318)<=x5319)>>x5320);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x5321 = INT64_MAX;
	static int32_t x5322 = -1;
	uint16_t x5323 = 210U;
	uint16_t x5324 = 29U;
	static int32_t t179 = -1072740437;

    t179 = (((x5321&x5322)<=x5323)>>x5324);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x5353 = UINT8_MAX;
	int32_t x5354 = INT32_MIN;
	static uint64_t x5355 = 15468708LLU;
	uint8_t x5356 = 2U;
	volatile int32_t t180 = 0;

    t180 = (((x5353&x5354)<=x5355)>>x5356);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x5477 = INT8_MIN;
	int16_t x5478 = -255;
	uint64_t x5479 = UINT64_MAX;
	volatile int16_t x5480 = 30;
	volatile int32_t t181 = -7571641;

    t181 = (((x5477&x5478)<=x5479)>>x5480);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x5485 = INT32_MIN;
	int64_t x5487 = 3803105999955105LL;
	uint64_t x5488 = 3LLU;
	int32_t t182 = 32;

    t182 = (((x5485&x5486)<=x5487)>>x5488);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x5490 = INT16_MIN;
	int16_t x5491 = -9;
	uint8_t x5492 = 2U;

    t183 = (((x5489&x5490)<=x5491)>>x5492);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x5537 = INT16_MIN;
	int64_t x5539 = -1LL;
	static volatile int16_t x5540 = 0;
	static volatile int32_t t184 = -429314;

    t184 = (((x5537&x5538)<=x5539)>>x5540);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x5553 = INT32_MAX;
	uint8_t x5555 = 1U;
	volatile int32_t t185 = 95989694;

    t185 = (((x5553&x5554)<=x5555)>>x5556);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x5577 = INT8_MIN;
	uint16_t x5578 = UINT16_MAX;
	volatile int64_t x5579 = 839627215181440LL;
	uint8_t x5580 = 0U;
	volatile int32_t t186 = 9450610;

    t186 = (((x5577&x5578)<=x5579)>>x5580);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x5614 = INT32_MIN;
	int16_t x5615 = 2851;
	int32_t t187 = -836940;

    t187 = (((x5613&x5614)<=x5615)>>x5616);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint8_t x5684 = 25U;
	int32_t t188 = 5;

    t188 = (((x5681&x5682)<=x5683)>>x5684);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x5793 = INT64_MIN;
	int8_t x5795 = INT8_MIN;
	int8_t x5796 = 1;
	volatile int32_t t189 = -195224104;

    t189 = (((x5793&x5794)<=x5795)>>x5796);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int32_t x5854 = INT32_MAX;
	volatile uint32_t x5855 = 190587U;
	int8_t x5856 = 1;
	int32_t t190 = 2049977;

    t190 = (((x5853&x5854)<=x5855)>>x5856);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x5877 = 629006315U;
	int32_t x5878 = -1;
	uint64_t x5879 = 1641787087LLU;
	static uint32_t x5880 = 20U;
	volatile int32_t t191 = 13145527;

    t191 = (((x5877&x5878)<=x5879)>>x5880);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x5885 = -1LL;
	volatile uint32_t x5886 = UINT32_MAX;
	int16_t x5887 = -1;
	int32_t t192 = -2;

    t192 = (((x5885&x5886)<=x5887)>>x5888);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x5889 = -23450943165LL;
	int64_t x5890 = -4124563LL;
	static uint8_t x5891 = UINT8_MAX;
	uint8_t x5892 = 1U;

    t193 = (((x5889&x5890)<=x5891)>>x5892);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x5893 = 340U;
	uint64_t x5894 = 237434041167735LLU;
	static int64_t x5895 = -12602976307639867LL;
	static volatile uint8_t x5896 = 1U;
	int32_t t194 = 128074;

    t194 = (((x5893&x5894)<=x5895)>>x5896);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x5917 = 54U;
	static volatile uint8_t x5918 = 10U;
	int32_t x5919 = -1;
	uint16_t x5920 = 1U;

    t195 = (((x5917&x5918)<=x5919)>>x5920);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint64_t x5969 = UINT64_MAX;
	int64_t x5970 = -19513859LL;
	static uint8_t x5971 = 31U;
	volatile int32_t t196 = 3;

    t196 = (((x5969&x5970)<=x5971)>>x5972);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x5973 = INT32_MAX;
	uint64_t x5974 = 1609853LLU;
	uint64_t x5975 = 26505591737LLU;
	static int16_t x5976 = 1;
	static volatile int32_t t197 = -248;

    t197 = (((x5973&x5974)<=x5975)>>x5976);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x5985 = INT64_MIN;
	volatile int32_t x5986 = INT32_MIN;
	uint64_t x5987 = UINT64_MAX;
	int8_t x5988 = 0;
	volatile int32_t t198 = 2527481;

    t198 = (((x5985&x5986)<=x5987)>>x5988);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x6009 = -1;
	uint8_t x6010 = UINT8_MAX;
	int32_t x6011 = INT32_MAX;
	int64_t x6012 = 1LL;
	static int32_t t199 = 613;

    t199 = (((x6009&x6010)<=x6011)>>x6012);

    if (t199 != 0) { NG(); } else { ; }
	
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
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

