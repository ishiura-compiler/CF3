
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

static uint8_t x42 = 1U;
uint8_t x63 = 16U;
int16_t x130 = 102;
static int16_t x197 = -1;
int8_t x199 = 1;
static uint8_t x215 = 29U;
uint32_t t6 = 15944U;
int8_t x229 = 19;
volatile int64_t x230 = 399LL;
volatile int16_t x277 = -24;
uint64_t x278 = UINT64_MAX;
uint16_t x323 = 1U;
volatile int32_t t9 = 1;
volatile int64_t t10 = 221164676801012LL;
int32_t t11 = -173557764;
volatile uint16_t x383 = 13U;
volatile int64_t t12 = -73124578LL;
static volatile int64_t t13 = -14510472LL;
int32_t x445 = INT32_MAX;
uint64_t x530 = 2612256281688541LLU;
uint64_t t16 = 4103243308839LLU;
uint16_t x574 = 2U;
uint8_t x611 = 6U;
volatile uint8_t x803 = 3U;
volatile int32_t x877 = INT32_MIN;
volatile uint8_t x879 = 2U;
int8_t x880 = -1;
int8_t x946 = 3;
int16_t x961 = 1011;
int64_t x970 = INT64_MIN;
static int64_t x1000 = INT64_MIN;
int64_t x1129 = INT64_MIN;
uint16_t x1131 = 2U;
uint64_t x1132 = UINT64_MAX;
static int16_t x1171 = 23;
int32_t t39 = 4041832;
int16_t x1185 = -5501;
int32_t x1188 = INT32_MIN;
volatile int32_t t41 = 59;
int16_t x1255 = 3;
volatile int8_t x1260 = INT8_MIN;
int32_t t44 = -181;
static int32_t x1338 = INT32_MIN;
int32_t t48 = -50352;
int32_t x1341 = -10319604;
uint32_t x1342 = 17824U;
int32_t t50 = 337388553;
int8_t x1437 = INT8_MIN;
static int16_t x1438 = 55;
volatile uint32_t t51 = 1752701U;
uint32_t x1470 = UINT32_MAX;
uint16_t x1471 = 2U;
int32_t t52 = -143573;
int16_t x1593 = -1;
uint16_t x1597 = 2U;
static int32_t t54 = 2;
static uint64_t x1649 = 3650174571304522LLU;
volatile uint8_t x1654 = 51U;
uint16_t x1656 = 40U;
int32_t x1701 = INT32_MAX;
static uint64_t x1702 = 24382457916647475LLU;
uint16_t x1703 = 1U;
uint8_t x1934 = 17U;
volatile int32_t t64 = 20352;
volatile int8_t x1939 = 12;
int32_t t68 = 179321238;
static int8_t x2062 = INT8_MAX;
volatile int16_t x2064 = INT16_MIN;
static volatile int64_t x2144 = INT64_MAX;
volatile int64_t x2180 = INT64_MIN;
int16_t x2216 = INT16_MIN;
volatile int32_t t83 = 4452000;
uint64_t x2426 = 3687501171LLU;
volatile int32_t t84 = 7476359;
volatile int8_t x2437 = INT8_MAX;
static volatile int8_t x2439 = 1;
int16_t x2440 = 4770;
uint32_t x2458 = 3935U;
volatile int32_t x2466 = INT32_MAX;
static int64_t x2593 = INT64_MIN;
int64_t x2594 = 0LL;
int64_t x2596 = INT64_MAX;
int64_t x2637 = -12400361676460137LL;
int16_t x2638 = INT16_MAX;
int8_t x2705 = INT8_MAX;
int16_t x2706 = 0;
static int32_t t91 = -24456;
int32_t x2740 = -1;
int64_t x2766 = 2862LL;
volatile uint32_t t95 = 656253374U;
int8_t x2774 = INT8_MIN;
uint8_t x2792 = UINT8_MAX;
volatile int32_t t98 = 97749859;
int64_t x2826 = -1LL;
static volatile uint16_t x2854 = UINT16_MAX;
uint32_t x2865 = 159U;
volatile int8_t x2867 = 23;
int16_t x2879 = 6;
int32_t x2905 = INT32_MIN;
int32_t x2906 = -11;
static uint64_t x2907 = 6LLU;
static int32_t x2957 = -1;
uint64_t x2960 = 509LLU;
uint64_t x2973 = 80226477LLU;
volatile int8_t x2999 = 10;
static int8_t x3002 = INT8_MIN;
int32_t x3050 = -6717158;
volatile int64_t t110 = 4030944LL;
volatile int8_t x3179 = 17;
volatile uint16_t x3180 = 7391U;
int8_t x3182 = -1;
volatile int32_t t115 = 910098588;
static int8_t x3217 = INT8_MIN;
static int16_t x3260 = -472;
int8_t x3282 = INT8_MIN;
static uint8_t x3394 = UINT8_MAX;
int8_t x3418 = -4;
int32_t t122 = 53839;
volatile int16_t x3478 = 63;
int64_t x3497 = INT64_MAX;
int32_t x3500 = -1;
int8_t x3545 = -1;
int16_t x3546 = INT16_MIN;
volatile int32_t t126 = -39457429;
int32_t x3614 = 18113;
volatile uint16_t x3615 = 7U;
volatile int32_t t128 = 5011;
int64_t x3802 = INT64_MIN;
volatile uint8_t x3803 = 6U;
uint8_t x3804 = 3U;
volatile int32_t t130 = 13660;
static int64_t x3853 = 10265LL;
static uint16_t x3854 = 775U;
int32_t x3882 = INT32_MIN;
static int8_t x3883 = 1;
int32_t x3925 = INT32_MIN;
static uint8_t x4033 = UINT8_MAX;
int16_t x4034 = -1;
int32_t x4048 = -1;
int64_t x4054 = INT64_MAX;
volatile int32_t x4060 = INT32_MAX;
int8_t x4076 = 17;
volatile int8_t x4181 = -1;
static volatile int16_t x4182 = -1;
volatile int16_t x4289 = INT16_MIN;
uint8_t x4292 = 9U;
int64_t x4297 = -1946165LL;
int32_t x4301 = INT32_MAX;
static volatile int32_t t147 = 0;
uint16_t x4325 = 4U;
volatile int64_t t148 = 626268820410LL;
int32_t t152 = 560;
int16_t x4637 = INT16_MIN;
volatile uint64_t x4701 = UINT64_MAX;
uint8_t x4703 = 6U;
int16_t x4716 = 283;
volatile int32_t t158 = -2611108;
volatile int8_t x4723 = 23;
static uint8_t x4739 = 1U;
volatile uint64_t x4740 = UINT64_MAX;
volatile int32_t t162 = -16249344;
int16_t x4899 = 0;
int32_t x4900 = INT32_MIN;
int64_t t167 = -1068773526932265LL;
static volatile uint16_t x4937 = UINT16_MAX;
uint8_t x4940 = 2U;
int16_t x4948 = 19;
int32_t t170 = -15;
volatile uint16_t x4957 = 10755U;
volatile int64_t x4958 = INT64_MIN;
int64_t t172 = 78LL;
static int64_t x5025 = -5914632912LL;
static int32_t x5054 = INT32_MIN;
int64_t t174 = -918746LL;
int8_t x5169 = INT8_MIN;
int32_t x5175 = 19;
uint64_t x5184 = UINT64_MAX;
int8_t x5219 = 6;
int8_t x5295 = 1;
int32_t x5305 = INT32_MIN;
static int64_t x5306 = INT64_MIN;
static uint16_t x5307 = 27U;
int64_t x5442 = -220295762LL;
int32_t t190 = 33326870;
uint16_t x5515 = 12U;
static uint8_t x5518 = UINT8_MAX;
int8_t x5599 = 4;
int64_t x5630 = INT64_MIN;
static int32_t x5705 = -1;
static uint64_t x5722 = 842565543051597508LLU;
int32_t x5724 = INT32_MAX;
int32_t t199 = 90048;


void f0(void) {
    	int64_t x41 = INT64_MIN;
	volatile int8_t x43 = 11;
	int8_t x44 = 1;
	volatile int32_t t0 = -68509;

    t0 = (((x41==x42)>>x43)*x44);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x61 = INT16_MIN;
	int8_t x62 = INT8_MIN;
	uint16_t x64 = UINT16_MAX;
	volatile int32_t t1 = 3296;

    t1 = (((x61==x62)>>x63)*x64);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x97 = -195129;
	int32_t x98 = INT32_MAX;
	static uint16_t x99 = 10U;
	int32_t x100 = -1;
	int32_t t2 = -6820;

    t2 = (((x97==x98)>>x99)*x100);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x129 = UINT16_MAX;
	int16_t x131 = 23;
	uint32_t x132 = 101418227U;
	volatile uint32_t t3 = 33U;

    t3 = (((x129==x130)>>x131)*x132);

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint32_t x185 = 16U;
	uint8_t x186 = 15U;
	static uint8_t x187 = 6U;
	int8_t x188 = INT8_MAX;
	static volatile int32_t t4 = -5726406;

    t4 = (((x185==x186)>>x187)*x188);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x198 = INT16_MAX;
	int16_t x200 = INT16_MIN;
	volatile int32_t t5 = -5919082;

    t5 = (((x197==x198)>>x199)*x200);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x213 = INT64_MAX;
	int32_t x214 = -270950411;
	uint32_t x216 = UINT32_MAX;

    t6 = (((x213==x214)>>x215)*x216);

    if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x231 = 6;
	int16_t x232 = INT16_MIN;
	static int32_t t7 = 24726589;

    t7 = (((x229==x230)>>x231)*x232);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint8_t x279 = 29U;
	int32_t x280 = -1;
	volatile int32_t t8 = 0;

    t8 = (((x277==x278)>>x279)*x280);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x321 = 0U;
	static uint16_t x322 = 11U;
	volatile int16_t x324 = INT16_MAX;

    t9 = (((x321==x322)>>x323)*x324);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x325 = INT32_MIN;
	int8_t x326 = INT8_MIN;
	uint32_t x327 = 0U;
	volatile int64_t x328 = -1LL;

    t10 = (((x325==x326)>>x327)*x328);

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x349 = -18;
	uint16_t x350 = 47U;
	uint16_t x351 = 0U;
	int16_t x352 = INT16_MAX;

    t11 = (((x349==x350)>>x351)*x352);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x381 = INT16_MIN;
	uint16_t x382 = 122U;
	int64_t x384 = INT64_MIN;

    t12 = (((x381==x382)>>x383)*x384);

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x433 = INT64_MIN;
	static int64_t x434 = INT64_MAX;
	uint8_t x435 = 12U;
	volatile int64_t x436 = INT64_MIN;

    t13 = (((x433==x434)>>x435)*x436);

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint8_t x446 = UINT8_MAX;
	uint8_t x447 = 3U;
	int32_t x448 = INT32_MIN;
	int32_t t14 = -102;

    t14 = (((x445==x446)>>x447)*x448);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint64_t x521 = UINT64_MAX;
	volatile int8_t x522 = INT8_MIN;
	uint16_t x523 = 0U;
	uint32_t x524 = 161U;
	static volatile uint32_t t15 = 47372114U;

    t15 = (((x521==x522)>>x523)*x524);

    if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x529 = 85U;
	int8_t x531 = 2;
	uint64_t x532 = 491757542369308LLU;

    t16 = (((x529==x530)>>x531)*x532);

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x573 = 17LL;
	volatile uint16_t x575 = 2U;
	uint32_t x576 = 978U;
	static volatile uint32_t t17 = 2183691U;

    t17 = (((x573==x574)>>x575)*x576);

    if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x609 = UINT64_MAX;
	static uint8_t x610 = 38U;
	int16_t x612 = INT16_MIN;
	int32_t t18 = 91339979;

    t18 = (((x609==x610)>>x611)*x612);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x613 = 8U;
	int16_t x614 = INT16_MIN;
	static volatile uint8_t x615 = 0U;
	int32_t x616 = -1;
	int32_t t19 = -184161663;

    t19 = (((x613==x614)>>x615)*x616);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int8_t x637 = 0;
	static int16_t x638 = INT16_MAX;
	static uint8_t x639 = 2U;
	volatile uint16_t x640 = 43U;
	int32_t t20 = 16134201;

    t20 = (((x637==x638)>>x639)*x640);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int32_t x657 = INT32_MIN;
	volatile uint64_t x658 = UINT64_MAX;
	uint16_t x659 = 2U;
	static int32_t x660 = 1018;
	static volatile int32_t t21 = -7;

    t21 = (((x657==x658)>>x659)*x660);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x661 = 6U;
	int8_t x662 = INT8_MAX;
	static uint64_t x663 = 1LLU;
	int64_t x664 = 168560893LL;
	int64_t t22 = -1994355LL;

    t22 = (((x661==x662)>>x663)*x664);

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x753 = INT64_MAX;
	volatile int32_t x754 = INT32_MIN;
	static int16_t x755 = 1;
	static int16_t x756 = -1;
	int32_t t23 = 402;

    t23 = (((x753==x754)>>x755)*x756);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x773 = -1;
	volatile uint32_t x774 = UINT32_MAX;
	static uint16_t x775 = 29U;
	volatile int64_t x776 = INT64_MIN;
	static volatile int64_t t24 = -101595246443708LL;

    t24 = (((x773==x774)>>x775)*x776);

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x801 = -1;
	int32_t x802 = INT32_MIN;
	volatile uint8_t x804 = UINT8_MAX;
	volatile int32_t t25 = -2388;

    t25 = (((x801==x802)>>x803)*x804);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x809 = 2044063742U;
	uint16_t x810 = UINT16_MAX;
	static uint8_t x811 = 4U;
	int8_t x812 = 2;
	volatile int32_t t26 = 77;

    t26 = (((x809==x810)>>x811)*x812);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x849 = 515441;
	uint16_t x850 = UINT16_MAX;
	uint8_t x851 = 6U;
	int32_t x852 = INT32_MIN;
	int32_t t27 = -117;

    t27 = (((x849==x850)>>x851)*x852);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x861 = UINT32_MAX;
	uint16_t x862 = 519U;
	volatile uint8_t x863 = 5U;
	int32_t x864 = INT32_MAX;
	volatile int32_t t28 = -38;

    t28 = (((x861==x862)>>x863)*x864);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x878 = -133282669602778LL;
	int32_t t29 = 81122;

    t29 = (((x877==x878)>>x879)*x880);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint32_t x945 = 96066971U;
	volatile int16_t x947 = 1;
	uint32_t x948 = 20U;
	uint32_t t30 = 38046655U;

    t30 = (((x945==x946)>>x947)*x948);

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x949 = -892;
	uint64_t x950 = 10335023689691LLU;
	int16_t x951 = 1;
	static uint64_t x952 = UINT64_MAX;
	uint64_t t31 = 1LLU;

    t31 = (((x949==x950)>>x951)*x952);

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x962 = INT8_MIN;
	volatile int8_t x963 = 4;
	static int8_t x964 = -47;
	int32_t t32 = -1;

    t32 = (((x961==x962)>>x963)*x964);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x969 = -1;
	uint8_t x971 = 1U;
	int64_t x972 = INT64_MIN;
	static volatile int64_t t33 = -1LL;

    t33 = (((x969==x970)>>x971)*x972);

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint32_t x997 = 10325U;
	int64_t x998 = -17274LL;
	static int8_t x999 = 7;
	volatile int64_t t34 = 31370LL;

    t34 = (((x997==x998)>>x999)*x1000);

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x1029 = 3;
	int32_t x1030 = INT32_MIN;
	volatile uint8_t x1031 = 1U;
	int32_t x1032 = INT32_MIN;
	volatile int32_t t35 = 13;

    t35 = (((x1029==x1030)>>x1031)*x1032);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x1101 = INT16_MIN;
	uint8_t x1102 = UINT8_MAX;
	volatile uint16_t x1103 = 6U;
	static uint16_t x1104 = UINT16_MAX;
	int32_t t36 = 127907394;

    t36 = (((x1101==x1102)>>x1103)*x1104);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint8_t x1130 = 0U;
	static uint64_t t37 = 4389841116LLU;

    t37 = (((x1129==x1130)>>x1131)*x1132);

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x1157 = INT64_MIN;
	int32_t x1158 = -5437;
	uint8_t x1159 = 3U;
	uint32_t x1160 = UINT32_MAX;
	volatile uint32_t t38 = 0U;

    t38 = (((x1157==x1158)>>x1159)*x1160);

    if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x1169 = INT64_MIN;
	int32_t x1170 = INT32_MIN;
	uint16_t x1172 = UINT16_MAX;

    t39 = (((x1169==x1170)>>x1171)*x1172);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x1181 = -1;
	int16_t x1182 = INT16_MIN;
	static volatile uint8_t x1183 = 3U;
	static int32_t x1184 = INT32_MAX;
	int32_t t40 = -84849;

    t40 = (((x1181==x1182)>>x1183)*x1184);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x1186 = INT64_MAX;
	static uint32_t x1187 = 6U;

    t41 = (((x1185==x1186)>>x1187)*x1188);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x1253 = -1;
	int8_t x1254 = -20;
	uint64_t x1256 = UINT64_MAX;
	uint64_t t42 = 50234686043LLU;

    t42 = (((x1253==x1254)>>x1255)*x1256);

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int64_t x1257 = -1LL;
	volatile int64_t x1258 = -87390LL;
	static uint8_t x1259 = 7U;
	volatile int32_t t43 = -90691;

    t43 = (((x1257==x1258)>>x1259)*x1260);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x1269 = INT16_MAX;
	int64_t x1270 = 30195758LL;
	static uint8_t x1271 = 2U;
	int16_t x1272 = INT16_MAX;

    t44 = (((x1269==x1270)>>x1271)*x1272);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x1281 = INT64_MAX;
	int8_t x1282 = 1;
	uint32_t x1283 = 3U;
	int64_t x1284 = -1LL;
	static int64_t t45 = 467532091LL;

    t45 = (((x1281==x1282)>>x1283)*x1284);

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x1289 = INT32_MAX;
	uint64_t x1290 = 7838419545LLU;
	uint8_t x1291 = 3U;
	volatile uint32_t x1292 = UINT32_MAX;
	volatile uint32_t t46 = 9796U;

    t46 = (((x1289==x1290)>>x1291)*x1292);

    if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x1297 = INT32_MIN;
	volatile int8_t x1298 = INT8_MIN;
	uint8_t x1299 = 1U;
	int16_t x1300 = INT16_MIN;
	volatile int32_t t47 = -408793767;

    t47 = (((x1297==x1298)>>x1299)*x1300);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x1337 = INT16_MIN;
	static uint8_t x1339 = 9U;
	int16_t x1340 = INT16_MAX;

    t48 = (((x1337==x1338)>>x1339)*x1340);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x1343 = 1U;
	int8_t x1344 = -1;
	int32_t t49 = -15661814;

    t49 = (((x1341==x1342)>>x1343)*x1344);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x1417 = -1LL;
	uint8_t x1418 = UINT8_MAX;
	volatile uint16_t x1419 = 1U;
	int16_t x1420 = -1;

    t50 = (((x1417==x1418)>>x1419)*x1420);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x1439 = 5U;
	uint32_t x1440 = 5209972U;

    t51 = (((x1437==x1438)>>x1439)*x1440);

    if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x1469 = 1035306389919516328LLU;
	int8_t x1472 = INT8_MIN;

    t52 = (((x1469==x1470)>>x1471)*x1472);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x1594 = -3381;
	volatile int8_t x1595 = 21;
	int8_t x1596 = -1;
	static int32_t t53 = 4127546;

    t53 = (((x1593==x1594)>>x1595)*x1596);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x1598 = 228490705602073LLU;
	uint16_t x1599 = 20U;
	uint16_t x1600 = 0U;

    t54 = (((x1597==x1598)>>x1599)*x1600);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x1605 = INT32_MIN;
	volatile int16_t x1606 = -1;
	int32_t x1607 = 0;
	static volatile int8_t x1608 = INT8_MAX;
	volatile int32_t t55 = -1;

    t55 = (((x1605==x1606)>>x1607)*x1608);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x1650 = INT8_MIN;
	uint8_t x1651 = 31U;
	uint8_t x1652 = UINT8_MAX;
	volatile int32_t t56 = 436;

    t56 = (((x1649==x1650)>>x1651)*x1652);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x1653 = -1;
	int8_t x1655 = 1;
	volatile int32_t t57 = -62936892;

    t57 = (((x1653==x1654)>>x1655)*x1656);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x1669 = 343087040U;
	uint16_t x1670 = UINT16_MAX;
	uint32_t x1671 = 6U;
	int8_t x1672 = INT8_MIN;
	volatile int32_t t58 = 585412;

    t58 = (((x1669==x1670)>>x1671)*x1672);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x1704 = -1;
	int32_t t59 = -1;

    t59 = (((x1701==x1702)>>x1703)*x1704);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x1821 = INT64_MIN;
	static int16_t x1822 = -1;
	uint8_t x1823 = 4U;
	int64_t x1824 = -1LL;
	volatile int64_t t60 = 0LL;

    t60 = (((x1821==x1822)>>x1823)*x1824);

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x1853 = INT64_MIN;
	volatile int8_t x1854 = 11;
	uint8_t x1855 = 13U;
	static int8_t x1856 = INT8_MIN;
	static int32_t t61 = 531169;

    t61 = (((x1853==x1854)>>x1855)*x1856);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int32_t x1869 = INT32_MIN;
	int8_t x1870 = 0;
	volatile uint8_t x1871 = 3U;
	int32_t x1872 = 3935;
	volatile int32_t t62 = -12;

    t62 = (((x1869==x1870)>>x1871)*x1872);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x1921 = -1LL;
	int16_t x1922 = INT16_MIN;
	volatile uint8_t x1923 = 1U;
	uint64_t x1924 = UINT64_MAX;
	static uint64_t t63 = 997583521435LLU;

    t63 = (((x1921==x1922)>>x1923)*x1924);

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint8_t x1933 = 2U;
	volatile int16_t x1935 = 0;
	int8_t x1936 = -1;

    t64 = (((x1933==x1934)>>x1935)*x1936);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x1937 = 31U;
	uint64_t x1938 = 12561810966742LLU;
	int64_t x1940 = INT64_MAX;
	int64_t t65 = 6380972575827LL;

    t65 = (((x1937==x1938)>>x1939)*x1940);

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x1977 = -1LL;
	static volatile uint64_t x1978 = 5320738342084057275LLU;
	int16_t x1979 = 1;
	int8_t x1980 = 0;
	static volatile int32_t t66 = -133847654;

    t66 = (((x1977==x1978)>>x1979)*x1980);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x1989 = UINT32_MAX;
	volatile uint64_t x1990 = UINT64_MAX;
	uint64_t x1991 = 2LLU;
	uint8_t x1992 = 3U;
	volatile int32_t t67 = 93852;

    t67 = (((x1989==x1990)>>x1991)*x1992);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x2053 = 11U;
	volatile uint16_t x2054 = 15625U;
	volatile uint16_t x2055 = 1U;
	int8_t x2056 = 0;

    t68 = (((x2053==x2054)>>x2055)*x2056);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x2061 = 15U;
	volatile uint8_t x2063 = 0U;
	int32_t t69 = -128576689;

    t69 = (((x2061==x2062)>>x2063)*x2064);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x2113 = 34304270853639368LLU;
	int8_t x2114 = INT8_MIN;
	uint16_t x2115 = 1U;
	int64_t x2116 = INT64_MAX;
	int64_t t70 = -166709167421556638LL;

    t70 = (((x2113==x2114)>>x2115)*x2116);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x2129 = -1;
	volatile int64_t x2130 = -1LL;
	volatile int16_t x2131 = 6;
	volatile int64_t x2132 = INT64_MAX;
	int64_t t71 = -206646LL;

    t71 = (((x2129==x2130)>>x2131)*x2132);

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x2141 = 11U;
	uint16_t x2142 = 439U;
	static int32_t x2143 = 0;
	volatile int64_t t72 = 2769546LL;

    t72 = (((x2141==x2142)>>x2143)*x2144);

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x2149 = INT16_MIN;
	int8_t x2150 = INT8_MIN;
	int16_t x2151 = 1;
	static int8_t x2152 = -3;
	volatile int32_t t73 = 208;

    t73 = (((x2149==x2150)>>x2151)*x2152);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint64_t x2153 = 0LLU;
	uint8_t x2154 = 1U;
	uint8_t x2155 = 14U;
	static int32_t x2156 = 1434;
	int32_t t74 = -789092;

    t74 = (((x2153==x2154)>>x2155)*x2156);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x2169 = INT16_MAX;
	static uint16_t x2170 = 0U;
	int16_t x2171 = 0;
	int16_t x2172 = -1;
	static volatile int32_t t75 = -1021523153;

    t75 = (((x2169==x2170)>>x2171)*x2172);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x2177 = 433850U;
	int64_t x2178 = 0LL;
	uint16_t x2179 = 0U;
	int64_t t76 = 633319LL;

    t76 = (((x2177==x2178)>>x2179)*x2180);

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x2213 = 66437489LLU;
	uint8_t x2214 = UINT8_MAX;
	uint16_t x2215 = 1U;
	volatile int32_t t77 = -35988;

    t77 = (((x2213==x2214)>>x2215)*x2216);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x2245 = -1;
	int64_t x2246 = INT64_MIN;
	volatile int32_t x2247 = 5;
	int8_t x2248 = INT8_MIN;
	static volatile int32_t t78 = 564879;

    t78 = (((x2245==x2246)>>x2247)*x2248);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x2289 = INT32_MIN;
	uint64_t x2290 = UINT64_MAX;
	int64_t x2291 = 0LL;
	int8_t x2292 = INT8_MAX;
	int32_t t79 = 0;

    t79 = (((x2289==x2290)>>x2291)*x2292);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x2293 = INT64_MIN;
	volatile int8_t x2294 = 15;
	static uint8_t x2295 = 21U;
	int64_t x2296 = 1450996987LL;
	static volatile int64_t t80 = -939934094073951LL;

    t80 = (((x2293==x2294)>>x2295)*x2296);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x2365 = -1LL;
	static uint64_t x2366 = 86482LLU;
	static uint64_t x2367 = 9LLU;
	volatile uint32_t x2368 = UINT32_MAX;
	volatile uint32_t t81 = 156U;

    t81 = (((x2365==x2366)>>x2367)*x2368);

    if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x2405 = -1;
	uint64_t x2406 = 56000LLU;
	int16_t x2407 = 1;
	volatile int16_t x2408 = 8554;
	static int32_t t82 = -221609520;

    t82 = (((x2405==x2406)>>x2407)*x2408);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x2413 = -2;
	volatile uint32_t x2414 = 12166U;
	volatile uint8_t x2415 = 1U;
	int8_t x2416 = INT8_MIN;

    t83 = (((x2413==x2414)>>x2415)*x2416);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x2425 = 24U;
	volatile uint16_t x2427 = 3U;
	int8_t x2428 = INT8_MIN;

    t84 = (((x2425==x2426)>>x2427)*x2428);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x2438 = -48;
	volatile int32_t t85 = 8144164;

    t85 = (((x2437==x2438)>>x2439)*x2440);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint64_t x2457 = 97LLU;
	int32_t x2459 = 0;
	int16_t x2460 = INT16_MIN;
	volatile int32_t t86 = -196252321;

    t86 = (((x2457==x2458)>>x2459)*x2460);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x2465 = INT16_MAX;
	uint16_t x2467 = 10U;
	int32_t x2468 = -6166;
	volatile int32_t t87 = -4;

    t87 = (((x2465==x2466)>>x2467)*x2468);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x2595 = 0U;
	volatile int64_t t88 = 6505545092234183LL;

    t88 = (((x2593==x2594)>>x2595)*x2596);

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x2639 = 1LL;
	static uint16_t x2640 = 9182U;
	int32_t t89 = 1;

    t89 = (((x2637==x2638)>>x2639)*x2640);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x2707 = 3;
	int8_t x2708 = -1;
	int32_t t90 = -6;

    t90 = (((x2705==x2706)>>x2707)*x2708);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x2721 = 184170862LLU;
	int8_t x2722 = INT8_MIN;
	static uint32_t x2723 = 5U;
	volatile int32_t x2724 = 27324;

    t91 = (((x2721==x2722)>>x2723)*x2724);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x2737 = INT64_MIN;
	static int32_t x2738 = INT32_MAX;
	static uint8_t x2739 = 0U;
	int32_t t92 = -56229975;

    t92 = (((x2737==x2738)>>x2739)*x2740);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x2745 = INT16_MIN;
	static int64_t x2746 = INT64_MAX;
	uint16_t x2747 = 0U;
	static volatile int64_t x2748 = 327682356362681076LL;
	int64_t t93 = -133578050468LL;

    t93 = (((x2745==x2746)>>x2747)*x2748);

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x2753 = 1462U;
	volatile int32_t x2754 = INT32_MIN;
	uint16_t x2755 = 28U;
	int32_t x2756 = INT32_MIN;
	int32_t t94 = -532595471;

    t94 = (((x2753==x2754)>>x2755)*x2756);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x2765 = INT16_MAX;
	volatile uint8_t x2767 = 31U;
	uint32_t x2768 = 10U;

    t95 = (((x2765==x2766)>>x2767)*x2768);

    if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x2773 = INT16_MIN;
	uint64_t x2775 = 1LLU;
	int8_t x2776 = INT8_MIN;
	int32_t t96 = 279382;

    t96 = (((x2773==x2774)>>x2775)*x2776);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x2789 = -583051;
	int8_t x2790 = INT8_MAX;
	uint8_t x2791 = 2U;
	int32_t t97 = 960;

    t97 = (((x2789==x2790)>>x2791)*x2792);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x2817 = INT32_MIN;
	int8_t x2818 = -1;
	static int8_t x2819 = 3;
	static int32_t x2820 = INT32_MIN;

    t98 = (((x2817==x2818)>>x2819)*x2820);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x2825 = -1;
	uint8_t x2827 = 6U;
	int16_t x2828 = INT16_MAX;
	volatile int32_t t99 = 121299932;

    t99 = (((x2825==x2826)>>x2827)*x2828);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x2853 = UINT8_MAX;
	static int16_t x2855 = 1;
	int16_t x2856 = -1;
	int32_t t100 = 49192;

    t100 = (((x2853==x2854)>>x2855)*x2856);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x2857 = INT16_MIN;
	uint32_t x2858 = 746U;
	uint16_t x2859 = 0U;
	int64_t x2860 = -1LL;
	static int64_t t101 = -23882LL;

    t101 = (((x2857==x2858)>>x2859)*x2860);

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x2866 = INT16_MIN;
	static int64_t x2868 = -1LL;
	int64_t t102 = -32032LL;

    t102 = (((x2865==x2866)>>x2867)*x2868);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint64_t x2869 = 904851373LLU;
	int16_t x2870 = 148;
	uint16_t x2871 = 3U;
	static int32_t x2872 = 13;
	volatile int32_t t103 = 4439;

    t103 = (((x2869==x2870)>>x2871)*x2872);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint32_t x2877 = 26U;
	int64_t x2878 = -1LL;
	int64_t x2880 = 50093370LL;
	int64_t t104 = 30521156468LL;

    t104 = (((x2877==x2878)>>x2879)*x2880);

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x2908 = 1657948U;
	uint32_t t105 = 241295U;

    t105 = (((x2905==x2906)>>x2907)*x2908);

    if (t105 != 0U) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x2958 = -1;
	static int8_t x2959 = 3;
	volatile uint64_t t106 = 357750964119962720LLU;

    t106 = (((x2957==x2958)>>x2959)*x2960);

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x2974 = INT16_MAX;
	int8_t x2975 = 14;
	int8_t x2976 = 1;
	static int32_t t107 = 39;

    t107 = (((x2973==x2974)>>x2975)*x2976);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x2997 = INT64_MAX;
	uint64_t x2998 = 128599568528LLU;
	static int64_t x3000 = -50869464LL;
	volatile int64_t t108 = 283997873030LL;

    t108 = (((x2997==x2998)>>x2999)*x3000);

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x3001 = -1LL;
	int8_t x3003 = 0;
	int8_t x3004 = -1;
	static int32_t t109 = -812;

    t109 = (((x3001==x3002)>>x3003)*x3004);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x3049 = INT16_MAX;
	volatile int16_t x3051 = 1;
	int64_t x3052 = 25147087491221LL;

    t110 = (((x3049==x3050)>>x3051)*x3052);

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x3125 = INT32_MAX;
	static int16_t x3126 = -1;
	int16_t x3127 = 5;
	int8_t x3128 = 6;
	int32_t t111 = 3118;

    t111 = (((x3125==x3126)>>x3127)*x3128);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint8_t x3161 = UINT8_MAX;
	volatile int32_t x3162 = -462;
	uint8_t x3163 = 1U;
	volatile int16_t x3164 = -2083;
	int32_t t112 = -415859932;

    t112 = (((x3161==x3162)>>x3163)*x3164);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x3177 = INT32_MAX;
	uint32_t x3178 = 83952831U;
	volatile int32_t t113 = -4;

    t113 = (((x3177==x3178)>>x3179)*x3180);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x3181 = INT32_MIN;
	int16_t x3183 = 1;
	uint16_t x3184 = UINT16_MAX;
	volatile int32_t t114 = -18;

    t114 = (((x3181==x3182)>>x3183)*x3184);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x3209 = INT32_MAX;
	int8_t x3210 = -59;
	uint8_t x3211 = 2U;
	int16_t x3212 = 807;

    t115 = (((x3209==x3210)>>x3211)*x3212);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x3218 = INT16_MIN;
	int8_t x3219 = 0;
	uint8_t x3220 = UINT8_MAX;
	volatile int32_t t116 = -1058;

    t116 = (((x3217==x3218)>>x3219)*x3220);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x3257 = INT32_MAX;
	static int16_t x3258 = INT16_MAX;
	int8_t x3259 = 1;
	int32_t t117 = 6662370;

    t117 = (((x3257==x3258)>>x3259)*x3260);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x3281 = 1001;
	uint8_t x3283 = 0U;
	int8_t x3284 = INT8_MIN;
	int32_t t118 = 5153026;

    t118 = (((x3281==x3282)>>x3283)*x3284);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x3309 = INT8_MIN;
	volatile uint32_t x3310 = 19316195U;
	static volatile uint8_t x3311 = 9U;
	uint16_t x3312 = UINT16_MAX;
	volatile int32_t t119 = -1;

    t119 = (((x3309==x3310)>>x3311)*x3312);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x3373 = -1;
	static int32_t x3374 = INT32_MIN;
	static uint8_t x3375 = 2U;
	uint16_t x3376 = 21414U;
	int32_t t120 = -256;

    t120 = (((x3373==x3374)>>x3375)*x3376);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int8_t x3393 = 0;
	uint8_t x3395 = 3U;
	volatile int16_t x3396 = INT16_MAX;
	static volatile int32_t t121 = 48550;

    t121 = (((x3393==x3394)>>x3395)*x3396);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x3417 = -1;
	uint8_t x3419 = 0U;
	int32_t x3420 = INT32_MIN;

    t122 = (((x3417==x3418)>>x3419)*x3420);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x3421 = 5U;
	int64_t x3422 = 10120195463LL;
	uint8_t x3423 = 1U;
	volatile uint64_t x3424 = 7992921216LLU;
	uint64_t t123 = 6LLU;

    t123 = (((x3421==x3422)>>x3423)*x3424);

    if (t123 != 0LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x3477 = INT32_MIN;
	uint8_t x3479 = 4U;
	int16_t x3480 = -1;
	static int32_t t124 = 839425;

    t124 = (((x3477==x3478)>>x3479)*x3480);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x3498 = -57;
	volatile uint16_t x3499 = 11U;
	int32_t t125 = -3235;

    t125 = (((x3497==x3498)>>x3499)*x3500);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int32_t x3547 = 0;
	int8_t x3548 = 1;

    t126 = (((x3545==x3546)>>x3547)*x3548);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x3613 = INT64_MAX;
	uint8_t x3616 = 13U;
	int32_t t127 = -323;

    t127 = (((x3613==x3614)>>x3615)*x3616);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x3773 = INT16_MAX;
	static volatile uint64_t x3774 = 161353898LLU;
	static uint8_t x3775 = 3U;
	int8_t x3776 = INT8_MAX;

    t128 = (((x3773==x3774)>>x3775)*x3776);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x3797 = -7378LL;
	int16_t x3798 = 0;
	volatile int8_t x3799 = 5;
	static volatile int16_t x3800 = INT16_MIN;
	volatile int32_t t129 = 3464182;

    t129 = (((x3797==x3798)>>x3799)*x3800);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x3801 = INT32_MIN;

    t130 = (((x3801==x3802)>>x3803)*x3804);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x3855 = 0U;
	uint64_t x3856 = UINT64_MAX;
	uint64_t t131 = 83102LLU;

    t131 = (((x3853==x3854)>>x3855)*x3856);

    if (t131 != 0LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x3881 = 585609141490713867LLU;
	int32_t x3884 = INT32_MIN;
	int32_t t132 = 188;

    t132 = (((x3881==x3882)>>x3883)*x3884);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x3926 = INT16_MIN;
	uint8_t x3927 = 0U;
	uint16_t x3928 = 7U;
	volatile int32_t t133 = -1255;

    t133 = (((x3925==x3926)>>x3927)*x3928);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x3965 = INT32_MIN;
	static int16_t x3966 = -49;
	uint8_t x3967 = 26U;
	static volatile uint8_t x3968 = 1U;
	int32_t t134 = -2266;

    t134 = (((x3965==x3966)>>x3967)*x3968);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x4021 = INT32_MIN;
	int64_t x4022 = INT64_MIN;
	volatile uint8_t x4023 = 29U;
	int64_t x4024 = INT64_MIN;
	int64_t t135 = -1LL;

    t135 = (((x4021==x4022)>>x4023)*x4024);

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint16_t x4035 = 0U;
	uint32_t x4036 = 0U;
	uint32_t t136 = 97U;

    t136 = (((x4033==x4034)>>x4035)*x4036);

    if (t136 != 0U) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x4045 = INT8_MAX;
	int16_t x4046 = INT16_MIN;
	static uint8_t x4047 = 1U;
	int32_t t137 = 1;

    t137 = (((x4045==x4046)>>x4047)*x4048);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint32_t x4053 = 59767659U;
	static volatile int8_t x4055 = 1;
	int32_t x4056 = INT32_MAX;
	int32_t t138 = -47498202;

    t138 = (((x4053==x4054)>>x4055)*x4056);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x4057 = 0LL;
	int32_t x4058 = 2147;
	int32_t x4059 = 3;
	int32_t t139 = 2171873;

    t139 = (((x4057==x4058)>>x4059)*x4060);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x4073 = 2077;
	int8_t x4074 = -1;
	static int8_t x4075 = 14;
	int32_t t140 = -655834096;

    t140 = (((x4073==x4074)>>x4075)*x4076);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x4169 = 5U;
	static int8_t x4170 = INT8_MIN;
	int8_t x4171 = 1;
	volatile int16_t x4172 = INT16_MIN;
	int32_t t141 = 14132;

    t141 = (((x4169==x4170)>>x4171)*x4172);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x4183 = 3U;
	static int64_t x4184 = -6880972LL;
	volatile int64_t t142 = 1085415617724019LL;

    t142 = (((x4181==x4182)>>x4183)*x4184);

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x4290 = INT64_MAX;
	uint16_t x4291 = 9U;
	int32_t t143 = 630985;

    t143 = (((x4289==x4290)>>x4291)*x4292);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x4298 = INT64_MIN;
	int8_t x4299 = 14;
	static int32_t x4300 = -84222455;
	int32_t t144 = -2;

    t144 = (((x4297==x4298)>>x4299)*x4300);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint16_t x4302 = UINT16_MAX;
	uint8_t x4303 = 15U;
	static volatile int32_t x4304 = INT32_MAX;
	volatile int32_t t145 = 785;

    t145 = (((x4301==x4302)>>x4303)*x4304);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x4305 = -4;
	int16_t x4306 = INT16_MAX;
	volatile uint64_t x4307 = 27LLU;
	uint8_t x4308 = 15U;
	static volatile int32_t t146 = 2;

    t146 = (((x4305==x4306)>>x4307)*x4308);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x4309 = UINT64_MAX;
	int32_t x4310 = INT32_MIN;
	uint16_t x4311 = 30U;
	int8_t x4312 = INT8_MIN;

    t147 = (((x4309==x4310)>>x4311)*x4312);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x4326 = -40;
	uint32_t x4327 = 23U;
	static int64_t x4328 = INT64_MIN;

    t148 = (((x4325==x4326)>>x4327)*x4328);

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x4345 = -1;
	int32_t x4346 = INT32_MIN;
	int8_t x4347 = 3;
	int8_t x4348 = INT8_MAX;
	int32_t t149 = 923280;

    t149 = (((x4345==x4346)>>x4347)*x4348);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x4433 = 35;
	int8_t x4434 = -30;
	int8_t x4435 = 1;
	int8_t x4436 = INT8_MAX;
	int32_t t150 = -119654361;

    t150 = (((x4433==x4434)>>x4435)*x4436);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x4485 = INT16_MIN;
	uint16_t x4486 = UINT16_MAX;
	uint16_t x4487 = 0U;
	uint64_t x4488 = UINT64_MAX;
	static volatile uint64_t t151 = 231LLU;

    t151 = (((x4485==x4486)>>x4487)*x4488);

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x4517 = 0;
	uint16_t x4518 = UINT16_MAX;
	uint32_t x4519 = 1U;
	static uint16_t x4520 = UINT16_MAX;

    t152 = (((x4517==x4518)>>x4519)*x4520);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x4537 = UINT8_MAX;
	static uint64_t x4538 = 1180782166164LLU;
	uint8_t x4539 = 0U;
	uint8_t x4540 = 9U;
	volatile int32_t t153 = -1537244;

    t153 = (((x4537==x4538)>>x4539)*x4540);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x4561 = INT16_MIN;
	int64_t x4562 = INT64_MAX;
	volatile int8_t x4563 = 3;
	volatile uint8_t x4564 = UINT8_MAX;
	volatile int32_t t154 = -401618;

    t154 = (((x4561==x4562)>>x4563)*x4564);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x4638 = INT64_MIN;
	static uint8_t x4639 = 2U;
	uint16_t x4640 = 3081U;
	volatile int32_t t155 = 7;

    t155 = (((x4637==x4638)>>x4639)*x4640);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x4685 = 651;
	static uint64_t x4686 = 229198365LLU;
	static volatile uint8_t x4687 = 2U;
	volatile uint8_t x4688 = 8U;
	static volatile int32_t t156 = 2223;

    t156 = (((x4685==x4686)>>x4687)*x4688);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x4702 = 1;
	static int64_t x4704 = 0LL;
	volatile int64_t t157 = 498363LL;

    t157 = (((x4701==x4702)>>x4703)*x4704);

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x4713 = INT64_MAX;
	uint64_t x4714 = UINT64_MAX;
	volatile uint16_t x4715 = 6U;

    t158 = (((x4713==x4714)>>x4715)*x4716);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x4721 = 31;
	int32_t x4722 = INT32_MAX;
	int64_t x4724 = -1LL;
	static int64_t t159 = 62001229054LL;

    t159 = (((x4721==x4722)>>x4723)*x4724);

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x4733 = -1;
	int64_t x4734 = INT64_MAX;
	static uint8_t x4735 = 6U;
	uint16_t x4736 = 324U;
	volatile int32_t t160 = -865;

    t160 = (((x4733==x4734)>>x4735)*x4736);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x4737 = UINT32_MAX;
	volatile int8_t x4738 = -54;
	uint64_t t161 = 269709031900892437LLU;

    t161 = (((x4737==x4738)>>x4739)*x4740);

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x4781 = 539;
	int8_t x4782 = 2;
	static int32_t x4783 = 31;
	int32_t x4784 = 341109199;

    t162 = (((x4781==x4782)>>x4783)*x4784);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x4789 = -4;
	volatile int16_t x4790 = INT16_MIN;
	uint16_t x4791 = 1U;
	volatile uint64_t x4792 = 1929LLU;
	volatile uint64_t t163 = 129181957LLU;

    t163 = (((x4789==x4790)>>x4791)*x4792);

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x4865 = UINT16_MAX;
	uint64_t x4866 = 1841818637921LLU;
	static uint64_t x4867 = 0LLU;
	uint32_t x4868 = UINT32_MAX;
	volatile uint32_t t164 = 162U;

    t164 = (((x4865==x4866)>>x4867)*x4868);

    if (t164 != 0U) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x4873 = INT64_MAX;
	int8_t x4874 = INT8_MAX;
	uint8_t x4875 = 1U;
	int32_t x4876 = 331;
	static int32_t t165 = 13602238;

    t165 = (((x4873==x4874)>>x4875)*x4876);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x4897 = UINT8_MAX;
	static int16_t x4898 = -4;
	int32_t t166 = 51625094;

    t166 = (((x4897==x4898)>>x4899)*x4900);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x4909 = INT8_MIN;
	uint16_t x4910 = UINT16_MAX;
	uint32_t x4911 = 5U;
	int64_t x4912 = -28LL;

    t167 = (((x4909==x4910)>>x4911)*x4912);

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x4929 = INT16_MIN;
	int64_t x4930 = INT64_MIN;
	uint32_t x4931 = 2U;
	int64_t x4932 = -24696929361249LL;
	static int64_t t168 = 294LL;

    t168 = (((x4929==x4930)>>x4931)*x4932);

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x4938 = INT32_MIN;
	uint8_t x4939 = 6U;
	int32_t t169 = -34;

    t169 = (((x4937==x4938)>>x4939)*x4940);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x4945 = 4868555280000404LL;
	int16_t x4946 = 7;
	volatile int8_t x4947 = 1;

    t170 = (((x4945==x4946)>>x4947)*x4948);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x4959 = 1LLU;
	int64_t x4960 = -1LL;
	int64_t t171 = -4LL;

    t171 = (((x4957==x4958)>>x4959)*x4960);

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x4977 = INT64_MIN;
	uint16_t x4978 = 27U;
	uint8_t x4979 = 1U;
	static int64_t x4980 = INT64_MIN;

    t172 = (((x4977==x4978)>>x4979)*x4980);

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x5026 = INT32_MIN;
	uint16_t x5027 = 31U;
	uint16_t x5028 = UINT16_MAX;
	volatile int32_t t173 = -109339141;

    t173 = (((x5025==x5026)>>x5027)*x5028);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x5053 = INT16_MIN;
	uint32_t x5055 = 4U;
	volatile int64_t x5056 = INT64_MIN;

    t174 = (((x5053==x5054)>>x5055)*x5056);

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x5085 = 1040;
	uint8_t x5086 = 115U;
	volatile uint8_t x5087 = 21U;
	int32_t x5088 = -157179;
	int32_t t175 = -1051861738;

    t175 = (((x5085==x5086)>>x5087)*x5088);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint8_t x5109 = 2U;
	uint64_t x5110 = 7LLU;
	int64_t x5111 = 3LL;
	uint16_t x5112 = 403U;
	int32_t t176 = 15608;

    t176 = (((x5109==x5110)>>x5111)*x5112);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x5129 = INT32_MIN;
	int16_t x5130 = INT16_MAX;
	int8_t x5131 = 1;
	int8_t x5132 = INT8_MIN;
	int32_t t177 = -32229;

    t177 = (((x5129==x5130)>>x5131)*x5132);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x5170 = INT64_MAX;
	volatile uint8_t x5171 = 15U;
	int8_t x5172 = INT8_MIN;
	int32_t t178 = -1730;

    t178 = (((x5169==x5170)>>x5171)*x5172);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x5173 = INT8_MIN;
	int64_t x5174 = INT64_MIN;
	static int64_t x5176 = INT64_MAX;
	static int64_t t179 = 4089716305LL;

    t179 = (((x5173==x5174)>>x5175)*x5176);

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x5181 = -184;
	static uint32_t x5182 = 219U;
	uint16_t x5183 = 2U;
	volatile uint64_t t180 = 17LLU;

    t180 = (((x5181==x5182)>>x5183)*x5184);

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x5217 = INT8_MIN;
	volatile uint64_t x5218 = 65008251235263LLU;
	int16_t x5220 = INT16_MIN;
	int32_t t181 = -8959741;

    t181 = (((x5217==x5218)>>x5219)*x5220);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x5233 = 6U;
	volatile int64_t x5234 = INT64_MIN;
	int32_t x5235 = 1;
	static int64_t x5236 = -43LL;
	int64_t t182 = 7275147862331052LL;

    t182 = (((x5233==x5234)>>x5235)*x5236);

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x5261 = UINT8_MAX;
	int32_t x5262 = INT32_MAX;
	uint8_t x5263 = 5U;
	static int16_t x5264 = 7329;
	static int32_t t183 = 3;

    t183 = (((x5261==x5262)>>x5263)*x5264);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x5293 = 40LLU;
	volatile int8_t x5294 = 1;
	int16_t x5296 = INT16_MAX;
	volatile int32_t t184 = -1006620517;

    t184 = (((x5293==x5294)>>x5295)*x5296);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x5308 = -1;
	int32_t t185 = -47749208;

    t185 = (((x5305==x5306)>>x5307)*x5308);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x5341 = -61;
	volatile int16_t x5342 = INT16_MIN;
	static uint8_t x5343 = 1U;
	int64_t x5344 = INT64_MIN;
	static int64_t t186 = 254934896LL;

    t186 = (((x5341==x5342)>>x5343)*x5344);

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x5353 = INT64_MIN;
	int32_t x5354 = INT32_MIN;
	volatile int16_t x5355 = 6;
	uint64_t x5356 = UINT64_MAX;
	uint64_t t187 = 22016893597LLU;

    t187 = (((x5353==x5354)>>x5355)*x5356);

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint16_t x5357 = UINT16_MAX;
	uint64_t x5358 = 1103078913991442865LLU;
	static uint16_t x5359 = 2U;
	int16_t x5360 = -1;
	volatile int32_t t188 = -2535;

    t188 = (((x5357==x5358)>>x5359)*x5360);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x5441 = INT16_MAX;
	int8_t x5443 = 9;
	static uint8_t x5444 = UINT8_MAX;
	int32_t t189 = -476;

    t189 = (((x5441==x5442)>>x5443)*x5444);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x5445 = INT64_MIN;
	static int8_t x5446 = 10;
	volatile int16_t x5447 = 1;
	static volatile int16_t x5448 = -1;

    t190 = (((x5445==x5446)>>x5447)*x5448);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x5501 = INT32_MIN;
	int8_t x5502 = INT8_MIN;
	uint8_t x5503 = 16U;
	volatile int32_t x5504 = INT32_MIN;
	volatile int32_t t191 = -404;

    t191 = (((x5501==x5502)>>x5503)*x5504);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x5513 = -1;
	int8_t x5514 = -1;
	int8_t x5516 = -8;
	int32_t t192 = -16492;

    t192 = (((x5513==x5514)>>x5515)*x5516);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x5517 = UINT32_MAX;
	int8_t x5519 = 0;
	uint8_t x5520 = 16U;
	volatile int32_t t193 = -404;

    t193 = (((x5517==x5518)>>x5519)*x5520);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x5525 = 71U;
	static int8_t x5526 = INT8_MIN;
	static volatile int8_t x5527 = 0;
	static int16_t x5528 = INT16_MIN;
	volatile int32_t t194 = 26;

    t194 = (((x5525==x5526)>>x5527)*x5528);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x5557 = 206;
	int64_t x5558 = 83LL;
	static int32_t x5559 = 0;
	uint32_t x5560 = 3038440U;
	static volatile uint32_t t195 = 43U;

    t195 = (((x5557==x5558)>>x5559)*x5560);

    if (t195 != 0U) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x5597 = -1;
	int8_t x5598 = INT8_MIN;
	int64_t x5600 = INT64_MAX;
	volatile int64_t t196 = -3744015719LL;

    t196 = (((x5597==x5598)>>x5599)*x5600);

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint16_t x5629 = UINT16_MAX;
	uint16_t x5631 = 1U;
	uint64_t x5632 = 229912960383LLU;
	volatile uint64_t t197 = 13433777891621LLU;

    t197 = (((x5629==x5630)>>x5631)*x5632);

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x5706 = -1323409;
	static int32_t x5707 = 29;
	uint8_t x5708 = 28U;
	volatile int32_t t198 = 0;

    t198 = (((x5705==x5706)>>x5707)*x5708);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x5721 = -1;
	static uint8_t x5723 = 3U;

    t199 = (((x5721==x5722)>>x5723)*x5724);

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

