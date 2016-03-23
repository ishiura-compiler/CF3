
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

static int32_t x97 = INT32_MIN;
int16_t x100 = 1;
uint16_t x178 = 5U;
volatile int8_t x179 = 8;
volatile int8_t x180 = 41;
uint64_t x223 = 65460946324748456LLU;
uint32_t x254 = 2U;
static uint8_t x256 = 23U;
static volatile int8_t x365 = 18;
volatile uint64_t t7 = 8670602941372LLU;
int8_t x382 = 4;
int8_t x417 = INT8_MIN;
uint16_t x420 = 4U;
int64_t x528 = 0LL;
int16_t x612 = 13;
uint64_t t12 = 31963LLU;
int64_t x766 = INT64_MIN;
int8_t x798 = -1;
volatile uint32_t t18 = 1224026125U;
static volatile int16_t x909 = -8505;
uint32_t x911 = UINT32_MAX;
static uint64_t x921 = 6205126694LLU;
uint16_t x922 = 502U;
uint8_t x983 = UINT8_MAX;
int32_t x1037 = 4;
volatile uint64_t t22 = 8718543162622LLU;
uint32_t x1045 = 338U;
volatile int16_t x1048 = 28;
uint32_t t24 = 70291483U;
int64_t x1172 = 4LL;
uint32_t t25 = 5196U;
static uint32_t x1186 = 12229663U;
uint16_t x1337 = 73U;
static int64_t t30 = -8478458208133LL;
volatile int32_t t32 = 0;
int32_t x1682 = INT32_MIN;
int32_t x1694 = -1;
static int16_t x1695 = 125;
uint64_t t36 = 232313LLU;
int64_t x1938 = INT64_MIN;
uint8_t x1972 = 6U;
static int8_t x2090 = 0;
uint32_t x2266 = UINT32_MAX;
volatile uint32_t t45 = 10037U;
static int8_t x2472 = 0;
static uint32_t x2483 = 929U;
static volatile int8_t x2488 = 3;
uint32_t x2505 = 28157U;
volatile uint32_t t49 = 1437U;
volatile uint64_t x2538 = 4097575298712797455LLU;
int16_t x2539 = INT16_MAX;
static volatile uint64_t t51 = 7354960LLU;
volatile uint8_t x2663 = 4U;
static uint32_t x2729 = 11660U;
uint16_t x2746 = UINT16_MAX;
uint8_t x2805 = 29U;
volatile uint64_t x2806 = UINT64_MAX;
static volatile int8_t x2809 = 6;
volatile uint32_t t60 = 11996U;
uint16_t x2899 = 2975U;
static int64_t x3060 = 8LL;
volatile int32_t t66 = -50;
uint8_t x3140 = 50U;
int8_t x3215 = INT8_MAX;
static uint8_t x3272 = 37U;
int32_t x3325 = 1;
volatile int32_t x3328 = 1;
uint64_t x3427 = UINT64_MAX;
int8_t x3435 = INT8_MAX;
uint32_t x3446 = 4419U;
int8_t x3448 = 5;
volatile uint8_t x3465 = 35U;
int16_t x3467 = 3192;
static int8_t x3554 = -37;
volatile uint16_t x3560 = 12U;
volatile int16_t x3805 = INT16_MIN;
int32_t x3825 = 254387;
uint8_t x3847 = 119U;
uint16_t x3848 = 1U;
int16_t x3916 = 13;
volatile uint16_t x3941 = 3U;
uint32_t x3971 = UINT32_MAX;
int8_t x4179 = 15;
volatile uint64_t t91 = 339238203LLU;
static volatile uint16_t x4338 = 13U;
uint32_t x4340 = 3U;
volatile int16_t x4361 = -11;
int64_t x4382 = -3266135LL;
int8_t x4418 = 0;
int32_t x4420 = 1;
int32_t x4431 = 3;
int16_t x4432 = 0;
static volatile int32_t t96 = 60448121;
int8_t x4447 = INT8_MAX;
volatile int64_t t98 = 805969LL;
volatile int16_t x4541 = INT16_MIN;
int8_t x4544 = 0;
static volatile int8_t x4594 = INT8_MIN;
uint16_t x4596 = 18U;
static volatile int64_t t100 = 120206LL;
int8_t x4772 = 17;
int16_t x4778 = 15287;
static int32_t x4794 = -1;
uint32_t x4990 = UINT32_MAX;
static int16_t x5026 = INT16_MIN;
uint32_t t107 = 419076887U;
int32_t x5194 = -8;
volatile int32_t t108 = 63;
volatile uint8_t x5268 = 0U;
static volatile int32_t x5329 = INT32_MIN;
uint8_t x5333 = 3U;
uint16_t x5336 = 3U;
uint32_t t112 = 2051931996U;
uint8_t x5349 = UINT8_MAX;
uint16_t x5351 = 5468U;
uint16_t x5352 = 1U;
uint16_t x5624 = 9U;
int16_t x5922 = -421;
uint8_t x5924 = 13U;
volatile uint32_t x6018 = 1082797989U;
volatile int8_t x6081 = 0;
volatile int16_t x6254 = -1;
uint16_t x6256 = 1U;
static uint32_t x6430 = 1919U;
static uint32_t x6477 = UINT32_MAX;
int16_t x6661 = -61;
volatile int32_t t133 = -28538;
uint64_t x6791 = 126LLU;
static int16_t x6793 = INT16_MIN;
static int16_t x6844 = 1;
int32_t x6984 = 0;
int8_t x7018 = -7;
volatile uint8_t x7020 = 16U;
volatile int64_t x7325 = INT64_MIN;
int8_t x7418 = INT8_MAX;
uint64_t x7558 = 4LLU;
static uint16_t x7635 = 9183U;
static int16_t x7859 = 10;
volatile int32_t t152 = -5;
volatile int32_t x8050 = -1;
int16_t x8052 = 0;
int8_t x8231 = INT8_MAX;
static int8_t x8367 = INT8_MIN;
volatile uint16_t x8423 = 22348U;
volatile uint8_t x8424 = 3U;
int8_t x8433 = INT8_MIN;
uint8_t x8436 = 0U;
int64_t x8558 = -1LL;
int8_t x8677 = 1;
static int8_t x8678 = -1;
volatile uint32_t x8710 = UINT32_MAX;
int64_t x8712 = 14LL;
int16_t x8713 = INT16_MAX;
static volatile uint32_t x8714 = 5009133U;
static volatile int8_t x8716 = 1;
static volatile uint32_t t166 = 0U;
static uint64_t x8862 = 4205910041LLU;
int8_t x8933 = INT8_MAX;
int16_t x8935 = 123;
uint32_t x9130 = UINT32_MAX;
int32_t x9317 = INT32_MAX;
volatile int64_t t175 = -20599342LL;
int8_t x9505 = 1;
uint64_t x9535 = UINT64_MAX;
uint8_t x9536 = 1U;
int8_t x9614 = INT8_MIN;
uint32_t x9615 = UINT32_MAX;
static int64_t x9630 = INT64_MAX;
int8_t x9631 = 1;
int32_t x9671 = 1012;
int16_t x9687 = INT16_MIN;
volatile uint64_t t183 = 9295LLU;
uint64_t x9726 = 12950143436LLU;
static uint32_t x9764 = 1U;
volatile int8_t x9785 = INT8_MIN;
static volatile uint8_t x9839 = 47U;
uint16_t x9843 = 348U;
uint8_t x9844 = 7U;
static int32_t t189 = -1;
uint32_t t190 = 53U;
volatile int8_t x9971 = -1;
static uint16_t x10020 = 17U;
uint64_t t196 = 1445659419669541045LLU;
volatile int32_t x10342 = INT32_MIN;
volatile int64_t t198 = 1LL;
volatile uint32_t t199 = 87775U;


void f0(void) {
    	uint32_t x98 = 14110U;
	int16_t x99 = INT16_MAX;
	uint32_t t0 = 43936U;

    t0 = (((x97|x98)+x99)<<x100);

    if (t0 != 93754U) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x165 = INT32_MIN;
	int8_t x166 = INT8_MAX;
	uint64_t x167 = UINT64_MAX;
	volatile int8_t x168 = 1;
	volatile uint64_t t1 = 16593106972912055LLU;

    t1 = (((x165|x166)+x167)<<x168);

    if (t1 != 18446744069414584572LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint64_t x177 = UINT64_MAX;
	uint64_t t2 = 6523LLU;

    t2 = (((x177|x178)+x179)<<x180);

    if (t2 != 15393162788864LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x209 = UINT8_MAX;
	uint64_t x210 = UINT64_MAX;
	volatile uint8_t x211 = UINT8_MAX;
	volatile int16_t x212 = 0;
	volatile uint64_t t3 = 202LLU;

    t3 = (((x209|x210)+x211)<<x212);

    if (t3 != 254LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int64_t x221 = INT64_MIN;
	volatile int32_t x222 = -1;
	int8_t x224 = 2;
	uint64_t t4 = 20809LLU;

    t4 = (((x221|x222)+x223)<<x224);

    if (t4 != 261843785298993820LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x253 = -1;
	int32_t x255 = -1;
	uint32_t t5 = 0U;

    t5 = (((x253|x254)+x255)<<x256);

    if (t5 != 4278190080U) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x366 = -1;
	uint8_t x367 = 59U;
	uint8_t x368 = 18U;
	volatile int32_t t6 = -26231;

    t6 = (((x365|x366)+x367)<<x368);

    if (t6 != 15204352) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x373 = INT16_MAX;
	static volatile uint64_t x374 = 483647253230791LLU;
	uint8_t x375 = 31U;
	int16_t x376 = 24;

    t7 = (((x373|x374)+x375)<<x376);

    if (t7 != 16133787224767463424LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x381 = 2U;
	static uint64_t x383 = 50356LLU;
	int32_t x384 = 1;
	uint64_t t8 = 155404535471LLU;

    t8 = (((x381|x382)+x383)<<x384);

    if (t8 != 100724LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x389 = UINT64_MAX;
	static int32_t x390 = -61157370;
	uint32_t x391 = UINT32_MAX;
	int8_t x392 = 0;
	volatile uint64_t t9 = 32391761LLU;

    t9 = (((x389|x390)+x391)<<x392);

    if (t9 != 4294967294LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x418 = INT64_MIN;
	int32_t x419 = 2159;
	volatile int64_t t10 = -353273019865LL;

    t10 = (((x417|x418)+x419)<<x420);

    if (t10 != 32496LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x525 = 1;
	uint16_t x526 = UINT16_MAX;
	uint64_t x527 = 1918207715LLU;
	volatile uint64_t t11 = 33472603LLU;

    t11 = (((x525|x526)+x527)<<x528);

    if (t11 != 1918273250LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x609 = UINT64_MAX;
	int16_t x610 = -12502;
	volatile int32_t x611 = INT32_MAX;

    t12 = (((x609|x610)+x611)<<x612);

    if (t12 != 17592186028032LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile uint32_t x717 = UINT32_MAX;
	int16_t x718 = INT16_MIN;
	uint8_t x719 = UINT8_MAX;
	volatile int32_t x720 = 7;
	static uint32_t t13 = 336067U;

    t13 = (((x717|x718)+x719)<<x720);

    if (t13 != 32512U) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x745 = 862;
	int8_t x746 = 3;
	uint64_t x747 = UINT64_MAX;
	static int16_t x748 = 19;
	static volatile uint64_t t14 = 20185735LLU;

    t14 = (((x745|x746)+x747)<<x748);

    if (t14 != 451936256LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x765 = -1;
	volatile int64_t x767 = 3097LL;
	volatile uint8_t x768 = 6U;
	volatile int64_t t15 = 0LL;

    t15 = (((x765|x766)+x767)<<x768);

    if (t15 != 198144LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x789 = UINT32_MAX;
	volatile uint64_t x790 = 11995417915LLU;
	uint32_t x791 = 70517164U;
	uint32_t x792 = 0U;
	volatile uint64_t t16 = 904817095513LLU;

    t16 = (((x789|x790)+x791)<<x792);

    if (t16 != 12955419051LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile uint16_t x797 = 144U;
	uint16_t x799 = 508U;
	uint8_t x800 = 2U;
	volatile int32_t t17 = 0;

    t17 = (((x797|x798)+x799)<<x800);

    if (t17 != 2028) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x873 = INT8_MIN;
	static volatile uint32_t x874 = 642U;
	uint32_t x875 = 41U;
	int32_t x876 = 0;

    t18 = (((x873|x874)+x875)<<x876);

    if (t18 != 4294967211U) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x910 = -5769550484379LL;
	uint8_t x912 = 1U;
	static int64_t t19 = -21336LL;

    t19 = (((x909|x910)+x911)<<x912);

    if (t19 != 8589934028LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x923 = 7;
	int16_t x924 = 8;
	uint64_t t20 = 213542056041511277LLU;

    t20 = (((x921|x922)+x923)<<x924);

    if (t20 != 1588512554240LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x981 = INT8_MIN;
	uint64_t x982 = UINT64_MAX;
	volatile int8_t x984 = 10;
	volatile uint64_t t21 = 5678453132617994LLU;

    t21 = (((x981|x982)+x983)<<x984);

    if (t21 != 260096LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x1038 = -1LL;
	uint64_t x1039 = UINT64_MAX;
	uint16_t x1040 = 24U;

    t22 = (((x1037|x1038)+x1039)<<x1040);

    if (t22 != 18446744073675997184LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint32_t x1046 = 141852U;
	uint64_t x1047 = 52445588165916LLU;
	uint64_t t23 = 10906066298LLU;

    t23 = (((x1045|x1046)+x1047)<<x1048);

    if (t23 != 3389684430019756032LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x1081 = 83074747U;
	uint32_t x1082 = 24732U;
	uint16_t x1083 = UINT16_MAX;
	int8_t x1084 = 2;

    t24 = (((x1081|x1082)+x1083)<<x1084);

    if (t24 != 332659448U) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int32_t x1169 = INT32_MIN;
	int16_t x1170 = -24;
	uint32_t x1171 = 1U;

    t25 = (((x1169|x1170)+x1171)<<x1172);

    if (t25 != 4294966928U) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x1185 = -349;
	int8_t x1187 = INT8_MAX;
	static int32_t x1188 = 1;
	volatile uint32_t t26 = 30U;

    t26 = (((x1185|x1186)+x1187)<<x1188);

    if (t26 != 4294966908U) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x1273 = 16;
	int64_t x1274 = 1407119LL;
	static uint16_t x1275 = UINT16_MAX;
	static int64_t x1276 = 3LL;
	static volatile int64_t t27 = 3423398309804LL;

    t27 = (((x1273|x1274)+x1275)<<x1276);

    if (t27 != 11781360LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x1338 = UINT32_MAX;
	uint8_t x1339 = 0U;
	int8_t x1340 = 0;
	uint32_t t28 = UINT32_MAX;

    t28 = (((x1337|x1338)+x1339)<<x1340);

    if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x1409 = -1;
	volatile int16_t x1410 = 844;
	uint16_t x1411 = 82U;
	uint8_t x1412 = 1U;
	volatile int32_t t29 = -1;

    t29 = (((x1409|x1410)+x1411)<<x1412);

    if (t29 != 162) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x1441 = INT16_MAX;
	int64_t x1442 = INT64_MAX;
	int16_t x1443 = -162;
	uint16_t x1444 = 0U;

    t30 = (((x1441|x1442)+x1443)<<x1444);

    if (t30 != 9223372036854775645LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x1533 = 36066283LLU;
	int8_t x1534 = INT8_MAX;
	int32_t x1535 = INT32_MIN;
	volatile int8_t x1536 = 26;
	volatile uint64_t t31 = 7322669208976007LLU;

    t31 = (((x1533|x1534)+x1535)<<x1536);

    if (t31 != 18305049254256705536LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint16_t x1669 = 1745U;
	static int32_t x1670 = 6929720;
	int16_t x1671 = 2829;
	static uint8_t x1672 = 2U;

    t32 = (((x1669|x1670)+x1671)<<x1672);

    if (t32 != 27733016) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint32_t x1681 = UINT32_MAX;
	int8_t x1683 = INT8_MIN;
	int16_t x1684 = 1;
	uint32_t t33 = 3U;

    t33 = (((x1681|x1682)+x1683)<<x1684);

    if (t33 != 4294967038U) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x1693 = 1;
	uint8_t x1696 = 1U;
	volatile int32_t t34 = -3512608;

    t34 = (((x1693|x1694)+x1695)<<x1696);

    if (t34 != 248) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x1753 = -14LL;
	int64_t x1754 = -11LL;
	uint64_t x1755 = UINT64_MAX;
	volatile int32_t x1756 = 0;
	static uint64_t t35 = 68162927104474LLU;

    t35 = (((x1753|x1754)+x1755)<<x1756);

    if (t35 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x1773 = 4807819865905559LL;
	static uint64_t x1774 = 2452204084LLU;
	volatile int16_t x1775 = -492;
	uint16_t x1776 = 5U;

    t36 = (((x1773|x1774)+x1775)<<x1776);

    if (t36 != 153850244386208096LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint64_t x1841 = 2848559056797388LLU;
	int64_t x1842 = INT64_MAX;
	int8_t x1843 = INT8_MIN;
	int8_t x1844 = 53;
	static uint64_t t37 = 5375LLU;

    t37 = (((x1841|x1842)+x1843)<<x1844);

    if (t37 != 17284815369847963648LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x1937 = INT64_MIN;
	uint64_t x1939 = 10649675339138342LLU;
	static int8_t x1940 = 1;
	static volatile uint64_t t38 = 4998745595041773LLU;

    t38 = (((x1937|x1938)+x1939)<<x1940);

    if (t38 != 21299350678276684LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x1969 = -9;
	int64_t x1970 = INT64_MAX;
	uint8_t x1971 = UINT8_MAX;
	volatile int64_t t39 = 869798745541LL;

    t39 = (((x1969|x1970)+x1971)<<x1972);

    if (t39 != 16256LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint32_t x1981 = UINT32_MAX;
	uint16_t x1982 = 3870U;
	int16_t x1983 = 135;
	static volatile int16_t x1984 = 9;
	uint32_t t40 = 15230U;

    t40 = (((x1981|x1982)+x1983)<<x1984);

    if (t40 != 68608U) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x2089 = -1LL;
	uint64_t x2091 = 23928343758031LLU;
	uint8_t x2092 = 1U;
	static uint64_t t41 = 2005777655LLU;

    t41 = (((x2089|x2090)+x2091)<<x2092);

    if (t41 != 47856687516060LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x2097 = UINT8_MAX;
	static uint8_t x2098 = 1U;
	uint8_t x2099 = 20U;
	uint8_t x2100 = 7U;
	static volatile int32_t t42 = -15453;

    t42 = (((x2097|x2098)+x2099)<<x2100);

    if (t42 != 35200) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x2173 = -190;
	uint8_t x2174 = UINT8_MAX;
	uint64_t x2175 = 3438998LLU;
	volatile uint16_t x2176 = 2U;
	volatile uint64_t t43 = 2LLU;

    t43 = (((x2173|x2174)+x2175)<<x2176);

    if (t43 != 13755988LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x2245 = 1;
	static int16_t x2246 = -1;
	uint16_t x2247 = 5U;
	static int16_t x2248 = 13;
	volatile int32_t t44 = -60;

    t44 = (((x2245|x2246)+x2247)<<x2248);

    if (t44 != 32768) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x2265 = 0U;
	static int16_t x2267 = INT16_MIN;
	uint8_t x2268 = 3U;

    t45 = (((x2265|x2266)+x2267)<<x2268);

    if (t45 != 4294705144U) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x2469 = INT8_MAX;
	int16_t x2470 = INT16_MIN;
	uint64_t x2471 = UINT64_MAX;
	static volatile uint64_t t46 = 7820355633681LLU;

    t46 = (((x2469|x2470)+x2471)<<x2472);

    if (t46 != 18446744073709518974LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x2481 = INT16_MIN;
	int64_t x2482 = -1LL;
	int8_t x2484 = 0;
	static volatile int64_t t47 = 334LL;

    t47 = (((x2481|x2482)+x2483)<<x2484);

    if (t47 != 928LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x2485 = -1;
	volatile int8_t x2486 = INT8_MAX;
	uint32_t x2487 = 15889U;
	volatile uint32_t t48 = 23866609U;

    t48 = (((x2485|x2486)+x2487)<<x2488);

    if (t48 != 127104U) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x2506 = UINT32_MAX;
	int32_t x2507 = 8280062;
	static uint16_t x2508 = 1U;

    t49 = (((x2505|x2506)+x2507)<<x2508);

    if (t49 != 16560122U) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint8_t x2513 = UINT8_MAX;
	int8_t x2514 = INT8_MAX;
	uint64_t x2515 = 335956697230LLU;
	volatile uint16_t x2516 = 31U;
	uint64_t t50 = 56863272361165LLU;

    t50 = (((x2513|x2514)+x2515)<<x2516);

    if (t50 != 2038495410447712256LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x2537 = 1;
	uint16_t x2540 = 2U;

    t51 = (((x2537|x2538)+x2539)<<x2540);

    if (t51 != 16390301194851320888LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x2601 = 1305;
	uint32_t x2602 = 238680U;
	volatile int32_t x2603 = -1;
	volatile uint16_t x2604 = 3U;
	volatile uint32_t t52 = 147U;

    t52 = (((x2601|x2602)+x2603)<<x2604);

    if (t52 != 1911488U) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x2605 = -1;
	int64_t x2606 = -5156940703673963LL;
	static int8_t x2607 = 12;
	int64_t x2608 = 2LL;
	int64_t t53 = 542410448441362716LL;

    t53 = (((x2605|x2606)+x2607)<<x2608);

    if (t53 != 44LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x2661 = 12U;
	static uint64_t x2662 = 2909808883584LLU;
	uint64_t x2664 = 47LLU;
	uint64_t t54 = 2747803919LLU;

    t54 = (((x2661|x2662)+x2663)<<x2664);

    if (t54 != 18142751098862043136LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x2730 = 5U;
	static int32_t x2731 = INT32_MAX;
	static uint8_t x2732 = 15U;
	volatile uint32_t t55 = 517704U;

    t55 = (((x2729|x2730)+x2731)<<x2732);

    if (t55 != 382074880U) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x2745 = UINT8_MAX;
	uint16_t x2747 = UINT16_MAX;
	int16_t x2748 = 2;
	volatile int32_t t56 = -110;

    t56 = (((x2745|x2746)+x2747)<<x2748);

    if (t56 != 524280) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint32_t x2773 = 15575635U;
	uint16_t x2774 = 254U;
	uint8_t x2775 = 1U;
	volatile uint8_t x2776 = 6U;
	uint32_t t57 = 2577203U;

    t57 = (((x2773|x2774)+x2775)<<x2776);

    if (t57 != 996851712U) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x2807 = -1759600;
	uint8_t x2808 = 8U;
	volatile uint64_t t58 = 4285820170295869205LLU;

    t58 = (((x2805|x2806)+x2807)<<x2808);

    if (t58 != 18446744073259093760LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x2810 = -1;
	int16_t x2811 = 12;
	uint16_t x2812 = 2U;
	static int32_t t59 = 8;

    t59 = (((x2809|x2810)+x2811)<<x2812);

    if (t59 != 44) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x2873 = INT32_MAX;
	uint32_t x2874 = UINT32_MAX;
	static volatile int8_t x2875 = INT8_MIN;
	uint64_t x2876 = 2LLU;

    t60 = (((x2873|x2874)+x2875)<<x2876);

    if (t60 != 4294966780U) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x2897 = INT32_MAX;
	int64_t x2898 = -1LL;
	uint8_t x2900 = 50U;
	int64_t t61 = 30578LL;

    t61 = (((x2897|x2898)+x2899)<<x2900);

    if (t61 != 3348426322949963776LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x2937 = 2U;
	static uint32_t x2938 = 460U;
	int32_t x2939 = 59487;
	uint8_t x2940 = 4U;
	uint32_t t62 = 5138U;

    t62 = (((x2937|x2938)+x2939)<<x2940);

    if (t62 != 959184U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x2993 = 1186118831LLU;
	volatile int32_t x2994 = INT32_MIN;
	volatile int8_t x2995 = -1;
	static uint8_t x2996 = 51U;
	uint64_t t63 = 11501194994LLU;

    t63 = (((x2993|x2994)+x2995)<<x2996);

    if (t63 != 16532714232077090816LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x3025 = -1LL;
	static int32_t x3026 = INT32_MAX;
	static uint8_t x3027 = 79U;
	static uint8_t x3028 = 2U;
	int64_t t64 = -121203873256668LL;

    t64 = (((x3025|x3026)+x3027)<<x3028);

    if (t64 != 312LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x3053 = -130;
	int32_t x3054 = INT32_MIN;
	uint64_t x3055 = 78713025276565LLU;
	int16_t x3056 = 62;
	volatile uint64_t t65 = 50855649390392LLU;

    t65 = (((x3053|x3054)+x3055)<<x3056);

    if (t65 != 13835058055282163712LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x3057 = -1;
	static int16_t x3058 = INT16_MIN;
	uint8_t x3059 = UINT8_MAX;

    t66 = (((x3057|x3058)+x3059)<<x3060);

    if (t66 != 65024) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x3133 = 975U;
	uint64_t x3134 = 45486793582660LLU;
	static int32_t x3135 = 238016;
	static uint8_t x3136 = 2U;
	uint64_t t67 = 2589492823LLU;

    t67 = (((x3133|x3134)+x3135)<<x3136);

    if (t67 != 181947175286332LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x3137 = INT64_MAX;
	int32_t x3138 = INT32_MIN;
	uint64_t x3139 = UINT64_MAX;
	volatile uint64_t t68 = 151274LLU;

    t68 = (((x3137|x3138)+x3139)<<x3140);

    if (t68 != 18444492273895866368LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x3213 = INT16_MIN;
	int32_t x3214 = INT32_MAX;
	uint16_t x3216 = 2U;
	int32_t t69 = 494;

    t69 = (((x3213|x3214)+x3215)<<x3216);

    if (t69 != 504) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint64_t x3269 = 583090252LLU;
	static volatile uint16_t x3270 = 28872U;
	uint8_t x3271 = 16U;
	volatile uint64_t t70 = 229915774570854LLU;

    t70 = (((x3269|x3270)+x3271)<<x3272);

    if (t70 != 6354046360836112384LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x3326 = INT16_MIN;
	static volatile uint32_t x3327 = 88166U;
	uint32_t t71 = 1635U;

    t71 = (((x3325|x3326)+x3327)<<x3328);

    if (t71 != 110798U) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x3425 = -1;
	static int8_t x3426 = -1;
	uint8_t x3428 = 44U;
	static uint64_t t72 = 111754649238538LLU;

    t72 = (((x3425|x3426)+x3427)<<x3428);

    if (t72 != 18446708889337462784LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x3433 = 79729LLU;
	uint16_t x3434 = 3U;
	int8_t x3436 = 21;
	volatile uint64_t t73 = 5940LLU;

    t73 = (((x3433|x3434)+x3435)<<x3436);

    if (t73 != 167474364416LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x3445 = 28;
	static volatile int16_t x3447 = INT16_MIN;
	volatile uint32_t t74 = 9372U;

    t74 = (((x3445|x3446)+x3447)<<x3448);

    if (t74 != 4294061024U) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x3466 = 152LL;
	uint16_t x3468 = 22U;
	volatile int64_t t75 = 1LL;

    t75 = (((x3465|x3466)+x3467)<<x3468);

    if (t75 != 14172553216LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x3553 = INT32_MIN;
	uint32_t x3555 = 3314173U;
	static uint32_t x3556 = 2U;
	uint32_t t76 = 12860892U;

    t76 = (((x3553|x3554)+x3555)<<x3556);

    if (t76 != 13256544U) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint16_t x3557 = UINT16_MAX;
	static volatile uint16_t x3558 = 77U;
	int8_t x3559 = 1;
	int32_t t77 = -689;

    t77 = (((x3557|x3558)+x3559)<<x3560);

    if (t77 != 268435456) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile uint64_t x3581 = 1LLU;
	static uint64_t x3582 = UINT64_MAX;
	int64_t x3583 = -2226LL;
	int8_t x3584 = 0;
	volatile uint64_t t78 = 4873001124126191LLU;

    t78 = (((x3581|x3582)+x3583)<<x3584);

    if (t78 != 18446744073709549389LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x3745 = -1LL;
	static volatile uint16_t x3746 = UINT16_MAX;
	static int32_t x3747 = 271;
	volatile int16_t x3748 = 20;
	volatile int64_t t79 = 82LL;

    t79 = (((x3745|x3746)+x3747)<<x3748);

    if (t79 != 283115520LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x3806 = 227971085678333LLU;
	static int16_t x3807 = INT16_MIN;
	volatile int8_t x3808 = 5;
	volatile uint64_t t80 = 17949871554LLU;

    t80 = (((x3805|x3806)+x3807)<<x3808);

    if (t80 != 18446744073707904928LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int32_t x3826 = 311;
	volatile int8_t x3827 = INT8_MAX;
	int8_t x3828 = 0;
	int32_t t81 = -10862593;

    t81 = (((x3825|x3826)+x3827)<<x3828);

    if (t81 != 254518) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x3845 = INT16_MIN;
	uint32_t x3846 = 20U;
	volatile uint32_t t82 = 68U;

    t82 = (((x3845|x3846)+x3847)<<x3848);

    if (t82 != 4294902038U) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x3893 = UINT32_MAX;
	volatile int16_t x3894 = INT16_MAX;
	static int64_t x3895 = 52845321175464LL;
	static uint8_t x3896 = 17U;
	int64_t t83 = -107151902185LL;

    t83 = (((x3893|x3894)+x3895)<<x3896);

    if (t83 != 6927104887063707648LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint16_t x3905 = UINT16_MAX;
	volatile int8_t x3906 = INT8_MAX;
	int8_t x3907 = INT8_MIN;
	uint8_t x3908 = 0U;
	int32_t t84 = -7908;

    t84 = (((x3905|x3906)+x3907)<<x3908);

    if (t84 != 65407) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x3913 = INT32_MAX;
	static uint32_t x3914 = UINT32_MAX;
	volatile int8_t x3915 = -3;
	volatile uint32_t t85 = 197129U;

    t85 = (((x3913|x3914)+x3915)<<x3916);

    if (t85 != 4294934528U) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint8_t x3942 = UINT8_MAX;
	int32_t x3943 = -1;
	uint16_t x3944 = 18U;
	static volatile int32_t t86 = -3;

    t86 = (((x3941|x3942)+x3943)<<x3944);

    if (t86 != 66584576) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x3969 = -1;
	int64_t x3970 = INT64_MAX;
	uint16_t x3972 = 5U;
	int64_t t87 = 11344954380LL;

    t87 = (((x3969|x3970)+x3971)<<x3972);

    if (t87 != 137438953408LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x4073 = UINT32_MAX;
	static int32_t x4074 = INT32_MIN;
	static int16_t x4075 = INT16_MIN;
	static uint8_t x4076 = 0U;
	static volatile uint32_t t88 = 12785388U;

    t88 = (((x4073|x4074)+x4075)<<x4076);

    if (t88 != 4294934527U) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint8_t x4177 = UINT8_MAX;
	static volatile int8_t x4178 = 1;
	uint16_t x4180 = 15U;
	int32_t t89 = -215278;

    t89 = (((x4177|x4178)+x4179)<<x4180);

    if (t89 != 8847360) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x4237 = UINT32_MAX;
	int8_t x4238 = INT8_MIN;
	int8_t x4239 = INT8_MIN;
	uint8_t x4240 = 3U;
	uint32_t t90 = 6803U;

    t90 = (((x4237|x4238)+x4239)<<x4240);

    if (t90 != 4294966264U) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x4293 = INT32_MIN;
	volatile int8_t x4294 = -51;
	volatile uint64_t x4295 = 180007489LLU;
	volatile uint8_t x4296 = 16U;

    t91 = (((x4293|x4294)+x4295)<<x4296);

    if (t91 != 11796967456768LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x4337 = INT8_MAX;
	int64_t x4339 = 7988767LL;
	static volatile int64_t t92 = 440159LL;

    t92 = (((x4337|x4338)+x4339)<<x4340);

    if (t92 != 63911152LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint32_t x4362 = 1U;
	static int32_t x4363 = INT32_MIN;
	volatile uint16_t x4364 = 0U;
	uint32_t t93 = 1U;

    t93 = (((x4361|x4362)+x4363)<<x4364);

    if (t93 != 2147483637U) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x4381 = -1LL;
	int64_t x4383 = 4624928087LL;
	static volatile uint8_t x4384 = 2U;
	int64_t t94 = 111352LL;

    t94 = (((x4381|x4382)+x4383)<<x4384);

    if (t94 != 18499712344LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint64_t x4417 = 153550085126808LLU;
	volatile int64_t x4419 = INT64_MIN;
	uint64_t t95 = 40429778496181LLU;

    t95 = (((x4417|x4418)+x4419)<<x4420);

    if (t95 != 307100170253616LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x4429 = INT32_MIN;
	static int32_t x4430 = INT32_MAX;

    t96 = (((x4429|x4430)+x4431)<<x4432);

    if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x4445 = -1;
	int32_t x4446 = -12;
	uint16_t x4448 = 0U;
	static int32_t t97 = -187497278;

    t97 = (((x4445|x4446)+x4447)<<x4448);

    if (t97 != 126) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x4501 = -1;
	int16_t x4502 = INT16_MIN;
	volatile int64_t x4503 = 631LL;
	static int16_t x4504 = 3;

    t98 = (((x4501|x4502)+x4503)<<x4504);

    if (t98 != 5040LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile uint64_t x4542 = 7798066940806LLU;
	static uint32_t x4543 = 1119U;
	static volatile uint64_t t99 = 2592240775698559LLU;

    t99 = (((x4541|x4542)+x4543)<<x4544);

    if (t99 != 18446744073709522917LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x4593 = INT64_MAX;
	uint8_t x4595 = 2U;

    t100 = (((x4593|x4594)+x4595)<<x4596);

    if (t100 != 262144LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x4741 = INT16_MIN;
	uint32_t x4742 = 456U;
	int8_t x4743 = INT8_MIN;
	uint16_t x4744 = 0U;
	volatile uint32_t t101 = 6481U;

    t101 = (((x4741|x4742)+x4743)<<x4744);

    if (t101 != 4294934856U) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x4769 = 77238U;
	int16_t x4770 = INT16_MIN;
	uint32_t x4771 = 1066U;
	uint32_t t102 = 15886327U;

    t102 = (((x4769|x4770)+x4771)<<x4772);

    if (t102 != 1673527296U) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint16_t x4777 = UINT16_MAX;
	uint16_t x4779 = 14U;
	static uint32_t x4780 = 0U;
	static volatile int32_t t103 = -51;

    t103 = (((x4777|x4778)+x4779)<<x4780);

    if (t103 != 65549) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x4789 = 1029684212LLU;
	static int8_t x4790 = -26;
	int8_t x4791 = -1;
	int8_t x4792 = 2;
	uint64_t t104 = 23025869851LLU;

    t104 = (((x4789|x4790)+x4791)<<x4792);

    if (t104 != 18446744073709551572LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x4793 = INT16_MIN;
	uint64_t x4795 = 80737967463LLU;
	uint8_t x4796 = 0U;
	volatile uint64_t t105 = 513076439758LLU;

    t105 = (((x4793|x4794)+x4795)<<x4796);

    if (t105 != 80737967462LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x4989 = 11;
	int16_t x4991 = 14940;
	int16_t x4992 = 6;
	volatile uint32_t t106 = 9299U;

    t106 = (((x4989|x4990)+x4991)<<x4992);

    if (t106 != 956096U) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x5025 = INT32_MIN;
	uint32_t x5027 = 1767U;
	static uint8_t x5028 = 4U;

    t107 = (((x5025|x5026)+x5027)<<x5028);

    if (t107 != 4294471280U) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x5193 = INT16_MIN;
	int16_t x5195 = 6099;
	static uint16_t x5196 = 13U;

    t108 = (((x5193|x5194)+x5195)<<x5196);

    if (t108 != 49897472) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x5265 = -7;
	int32_t x5266 = INT32_MIN;
	int16_t x5267 = 7655;
	static int32_t t109 = -662921;

    t109 = (((x5265|x5266)+x5267)<<x5268);

    if (t109 != 7648) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x5285 = 176165713;
	uint64_t x5286 = 3641355218487867599LLU;
	volatile int8_t x5287 = INT8_MIN;
	uint8_t x5288 = 14U;
	volatile uint64_t t110 = 5041839969687474731LLU;

    t110 = (((x5285|x5286)+x5287)<<x5288);

    if (t110 != 3193565328543563776LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint32_t x5330 = UINT32_MAX;
	int16_t x5331 = INT16_MIN;
	int16_t x5332 = 21;
	volatile uint32_t t111 = 4319U;

    t111 = (((x5329|x5330)+x5331)<<x5332);

    if (t111 != 4292870144U) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x5334 = 1658845U;
	int16_t x5335 = INT16_MIN;

    t112 = (((x5333|x5334)+x5335)<<x5336);

    if (t112 != 13008632U) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x5350 = 183872LLU;
	uint64_t t113 = 2245800088057419LLU;

    t113 = (((x5349|x5350)+x5351)<<x5352);

    if (t113 != 379062LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x5361 = 0;
	uint32_t x5362 = 58039U;
	int32_t x5363 = 248;
	static uint8_t x5364 = 3U;
	uint32_t t114 = 110129U;

    t114 = (((x5361|x5362)+x5363)<<x5364);

    if (t114 != 466296U) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x5365 = INT16_MIN;
	uint64_t x5366 = UINT64_MAX;
	int32_t x5367 = INT32_MIN;
	uint8_t x5368 = 0U;
	volatile uint64_t t115 = 479122738LLU;

    t115 = (((x5365|x5366)+x5367)<<x5368);

    if (t115 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x5433 = -1;
	uint64_t x5434 = UINT64_MAX;
	volatile int64_t x5435 = INT64_MIN;
	uint8_t x5436 = 3U;
	uint64_t t116 = 6632945499826LLU;

    t116 = (((x5433|x5434)+x5435)<<x5436);

    if (t116 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x5589 = -26;
	uint32_t x5590 = 17U;
	uint32_t x5591 = 12U;
	uint8_t x5592 = 2U;
	uint32_t t117 = 737U;

    t117 = (((x5589|x5590)+x5591)<<x5592);

    if (t117 != 12U) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x5621 = INT16_MIN;
	uint32_t x5622 = 228U;
	static int16_t x5623 = INT16_MIN;
	uint32_t t118 = 7U;

    t118 = (((x5621|x5622)+x5623)<<x5624);

    if (t118 != 4261529600U) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x5781 = 98512537863883LLU;
	int8_t x5782 = INT8_MIN;
	volatile int64_t x5783 = INT64_MAX;
	static uint8_t x5784 = 2U;
	uint64_t t119 = 430LLU;

    t119 = (((x5781|x5782)+x5783)<<x5784);

    if (t119 != 18446744073709551400LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x5921 = 0U;
	uint16_t x5923 = 3955U;
	uint32_t t120 = 5214081U;

    t120 = (((x5921|x5922)+x5923)<<x5924);

    if (t120 != 28950528U) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x5929 = -1LL;
	static volatile int64_t x5930 = 81008LL;
	int64_t x5931 = INT64_MAX;
	int8_t x5932 = 0;
	int64_t t121 = -9317855LL;

    t121 = (((x5929|x5930)+x5931)<<x5932);

    if (t121 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x6017 = -1;
	uint8_t x6019 = 49U;
	int8_t x6020 = 3;
	volatile uint32_t t122 = 445325U;

    t122 = (((x6017|x6018)+x6019)<<x6020);

    if (t122 != 384U) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x6065 = INT8_MIN;
	volatile int32_t x6066 = -1;
	volatile uint16_t x6067 = 50U;
	uint8_t x6068 = 7U;
	volatile int32_t t123 = -505658337;

    t123 = (((x6065|x6066)+x6067)<<x6068);

    if (t123 != 6272) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x6082 = -15720;
	volatile uint64_t x6083 = UINT64_MAX;
	volatile int8_t x6084 = 0;
	static uint64_t t124 = 23652040LLU;

    t124 = (((x6081|x6082)+x6083)<<x6084);

    if (t124 != 18446744073709535895LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x6149 = INT8_MAX;
	int64_t x6150 = -1LL;
	static uint64_t x6151 = UINT64_MAX;
	int8_t x6152 = 7;
	uint64_t t125 = 102043251293664LLU;

    t125 = (((x6149|x6150)+x6151)<<x6152);

    if (t125 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint16_t x6253 = UINT16_MAX;
	static int64_t x6255 = 2LL;
	static int64_t t126 = -754086559LL;

    t126 = (((x6253|x6254)+x6255)<<x6256);

    if (t126 != 2LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x6333 = -6;
	int16_t x6334 = -5128;
	static uint8_t x6335 = UINT8_MAX;
	int8_t x6336 = 0;
	volatile int32_t t127 = -8919913;

    t127 = (((x6333|x6334)+x6335)<<x6336);

    if (t127 != 249) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x6361 = UINT16_MAX;
	uint64_t x6362 = UINT64_MAX;
	int64_t x6363 = 8699359042297059LL;
	static uint16_t x6364 = 43U;
	static uint64_t t128 = 14LLU;

    t128 = (((x6361|x6362)+x6363)<<x6364);

    if (t128 != 16926515316681342976LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x6377 = 232703LL;
	uint64_t x6378 = 3199LLU;
	int32_t x6379 = INT32_MIN;
	uint8_t x6380 = 10U;
	volatile uint64_t t129 = 3371423147LLU;

    t129 = (((x6377|x6378)+x6379)<<x6380);

    if (t129 != 18446741874924583936LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x6429 = 25U;
	uint16_t x6431 = UINT16_MAX;
	uint16_t x6432 = 0U;
	uint32_t t130 = 285240372U;

    t130 = (((x6429|x6430)+x6431)<<x6432);

    if (t130 != 67454U) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint32_t x6478 = 3399610U;
	int32_t x6479 = -1;
	int8_t x6480 = 12;
	volatile uint32_t t131 = 6870U;

    t131 = (((x6477|x6478)+x6479)<<x6480);

    if (t131 != 4294959104U) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x6613 = 115270369;
	static int16_t x6614 = -1;
	uint64_t x6615 = UINT64_MAX;
	uint8_t x6616 = 6U;
	volatile uint64_t t132 = 24571141143803LLU;

    t132 = (((x6613|x6614)+x6615)<<x6616);

    if (t132 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x6662 = INT8_MIN;
	volatile int16_t x6663 = INT16_MAX;
	int32_t x6664 = 1;

    t133 = (((x6661|x6662)+x6663)<<x6664);

    if (t133 != 65412) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x6789 = INT64_MIN;
	int32_t x6790 = INT32_MAX;
	int32_t x6792 = 0;
	static uint64_t t134 = 252312286461494916LLU;

    t134 = (((x6789|x6790)+x6791)<<x6792);

    if (t134 != 9223372039002259581LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x6794 = -1;
	volatile uint64_t x6795 = UINT64_MAX;
	static int16_t x6796 = 0;
	volatile uint64_t t135 = 207421LLU;

    t135 = (((x6793|x6794)+x6795)<<x6796);

    if (t135 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x6841 = UINT8_MAX;
	int16_t x6842 = 21;
	volatile uint32_t x6843 = UINT32_MAX;
	static uint32_t t136 = 0U;

    t136 = (((x6841|x6842)+x6843)<<x6844);

    if (t136 != 508U) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint64_t x6981 = UINT64_MAX;
	static volatile uint64_t x6982 = 20083LLU;
	int8_t x6983 = INT8_MIN;
	volatile uint64_t t137 = 565867642173310LLU;

    t137 = (((x6981|x6982)+x6983)<<x6984);

    if (t137 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x7017 = 124377U;
	volatile int16_t x7019 = INT16_MIN;
	volatile uint32_t t138 = 24U;

    t138 = (((x7017|x7018)+x7019)<<x7020);

    if (t138 != 2147024896U) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x7065 = -2;
	static int8_t x7066 = INT8_MIN;
	volatile uint64_t x7067 = 1LLU;
	int8_t x7068 = 1;
	volatile uint64_t t139 = 291374891LLU;

    t139 = (((x7065|x7066)+x7067)<<x7068);

    if (t139 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x7129 = -1;
	uint16_t x7130 = 431U;
	int8_t x7131 = 48;
	static uint8_t x7132 = 1U;
	volatile int32_t t140 = -416;

    t140 = (((x7129|x7130)+x7131)<<x7132);

    if (t140 != 94) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x7145 = 166637LLU;
	volatile int8_t x7146 = -1;
	int16_t x7147 = INT16_MIN;
	int8_t x7148 = 23;
	static volatile uint64_t t141 = 3388766LLU;

    t141 = (((x7145|x7146)+x7147)<<x7148);

    if (t141 != 18446743798823256064LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x7157 = -1LL;
	uint16_t x7158 = UINT16_MAX;
	static uint32_t x7159 = UINT32_MAX;
	uint8_t x7160 = 1U;
	volatile int64_t t142 = -251783534299228299LL;

    t142 = (((x7157|x7158)+x7159)<<x7160);

    if (t142 != 8589934588LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint8_t x7326 = UINT8_MAX;
	uint64_t x7327 = UINT64_MAX;
	static uint8_t x7328 = 2U;
	uint64_t t143 = 762651247161LLU;

    t143 = (((x7325|x7326)+x7327)<<x7328);

    if (t143 != 1016LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x7373 = -1043;
	static int8_t x7374 = INT8_MIN;
	uint16_t x7375 = 120U;
	static int32_t x7376 = 3;
	volatile int32_t t144 = 1;

    t144 = (((x7373|x7374)+x7375)<<x7376);

    if (t144 != 808) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x7417 = 2633LL;
	volatile int16_t x7419 = -1;
	int8_t x7420 = 46;
	volatile int64_t t145 = -39754LL;

    t145 = (((x7417|x7418)+x7419)<<x7420);

    if (t145 != 189010446861205504LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x7429 = INT64_MIN;
	int8_t x7430 = -1;
	volatile uint16_t x7431 = 12358U;
	volatile uint8_t x7432 = 1U;
	static volatile int64_t t146 = 1764189864LL;

    t146 = (((x7429|x7430)+x7431)<<x7432);

    if (t146 != 24714LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x7473 = 49;
	int16_t x7474 = INT16_MAX;
	int8_t x7475 = INT8_MIN;
	int16_t x7476 = 1;
	volatile int32_t t147 = -22059;

    t147 = (((x7473|x7474)+x7475)<<x7476);

    if (t147 != 65278) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x7557 = UINT32_MAX;
	int16_t x7559 = -975;
	uint16_t x7560 = 0U;
	volatile uint64_t t148 = 177120122LLU;

    t148 = (((x7557|x7558)+x7559)<<x7560);

    if (t148 != 4294966320LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x7633 = UINT64_MAX;
	int16_t x7634 = 413;
	uint8_t x7636 = 2U;
	static uint64_t t149 = 176LLU;

    t149 = (((x7633|x7634)+x7635)<<x7636);

    if (t149 != 36728LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x7649 = 387;
	int16_t x7650 = 4139;
	static int64_t x7651 = -1LL;
	int16_t x7652 = 14;
	volatile int64_t t150 = 3453LL;

    t150 = (((x7649|x7650)+x7651)<<x7652);

    if (t150 != 74088448LL) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x7661 = UINT8_MAX;
	uint64_t x7662 = 3LLU;
	uint16_t x7663 = 75U;
	int8_t x7664 = 2;
	uint64_t t151 = 179LLU;

    t151 = (((x7661|x7662)+x7663)<<x7664);

    if (t151 != 1320LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int32_t x7857 = INT32_MIN;
	int8_t x7858 = -1;
	volatile uint8_t x7860 = 15U;

    t152 = (((x7857|x7858)+x7859)<<x7860);

    if (t152 != 294912) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x8049 = 69599808;
	int32_t x8051 = 2;
	int32_t t153 = -119;

    t153 = (((x8049|x8050)+x8051)<<x8052);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x8113 = UINT64_MAX;
	int64_t x8114 = INT64_MIN;
	static int8_t x8115 = INT8_MIN;
	int64_t x8116 = 0LL;
	uint64_t t154 = 991217805886LLU;

    t154 = (((x8113|x8114)+x8115)<<x8116);

    if (t154 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint32_t x8201 = 384U;
	static volatile int32_t x8202 = -1;
	int32_t x8203 = INT32_MIN;
	volatile uint8_t x8204 = 1U;
	uint32_t t155 = 26383U;

    t155 = (((x8201|x8202)+x8203)<<x8204);

    if (t155 != 4294967294U) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x8229 = INT8_MAX;
	volatile uint8_t x8230 = 7U;
	static uint16_t x8232 = 1U;
	volatile int32_t t156 = 1;

    t156 = (((x8229|x8230)+x8231)<<x8232);

    if (t156 != 508) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile uint64_t x8365 = 8199196346656231885LLU;
	int32_t x8366 = INT32_MIN;
	int8_t x8368 = 0;
	volatile uint64_t t157 = 396LLU;

    t157 = (((x8365|x8366)+x8367)<<x8368);

    if (t157 != 18446744073007010125LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x8369 = 649180366;
	uint16_t x8370 = 5123U;
	volatile uint8_t x8371 = 0U;
	uint32_t x8372 = 0U;
	int32_t t158 = 1569362;

    t158 = (((x8369|x8370)+x8371)<<x8372);

    if (t158 != 649180367) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint8_t x8421 = UINT8_MAX;
	int64_t x8422 = 7618521058355434LL;
	volatile int64_t t159 = -531807476564LL;

    t159 = (((x8421|x8422)+x8423)<<x8424);

    if (t159 != 60948168467022424LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint8_t x8434 = 2U;
	uint64_t x8435 = 2LLU;
	static uint64_t t160 = 26324LLU;

    t160 = (((x8433|x8434)+x8435)<<x8436);

    if (t160 != 18446744073709551492LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x8557 = INT32_MIN;
	uint64_t x8559 = 8605891149547LLU;
	uint16_t x8560 = 12U;
	uint64_t t161 = 26098199678276026LLU;

    t161 = (((x8557|x8558)+x8559)<<x8560);

    if (t161 != 35249730148540416LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint32_t x8679 = 242577U;
	uint16_t x8680 = 31U;
	uint32_t t162 = 50249U;

    t162 = (((x8677|x8678)+x8679)<<x8680);

    if (t162 != 0U) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x8709 = 29U;
	uint64_t x8711 = 1858654495690LLU;
	uint64_t t163 = 87491LLU;

    t163 = (((x8709|x8710)+x8711)<<x8712);

    if (t163 != 30522564001546240LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x8715 = UINT32_MAX;
	uint32_t t164 = 3968691U;

    t164 = (((x8713|x8714)+x8715)<<x8716);

    if (t164 != 10027004U) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x8753 = 10909LL;
	static uint64_t x8754 = 10211LLU;
	volatile int32_t x8755 = INT32_MAX;
	static volatile uint8_t x8756 = 0U;
	static volatile uint64_t t165 = 3694776524LLU;

    t165 = (((x8753|x8754)+x8755)<<x8756);

    if (t165 != 2147495934LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x8809 = INT8_MIN;
	int16_t x8810 = 1341;
	uint32_t x8811 = 46089U;
	uint16_t x8812 = 0U;

    t166 = (((x8809|x8810)+x8811)<<x8812);

    if (t166 != 46022U) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x8861 = 223;
	uint8_t x8863 = UINT8_MAX;
	uint8_t x8864 = 3U;
	volatile uint64_t t167 = 1929173598LLU;

    t167 = (((x8861|x8862)+x8863)<<x8864);

    if (t167 != 33647283952LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x8934 = 163;
	uint8_t x8936 = 22U;
	volatile int32_t t168 = -43274194;

    t168 = (((x8933|x8934)+x8935)<<x8936);

    if (t168 != 1585446912) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x8973 = INT32_MIN;
	uint64_t x8974 = 621252665845LLU;
	volatile int16_t x8975 = INT16_MIN;
	uint8_t x8976 = 58U;
	static uint64_t t169 = 61567521359141415LLU;

    t169 = (((x8973|x8974)+x8975)<<x8976);

    if (t169 != 15276209936040722432LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint64_t x9097 = UINT64_MAX;
	volatile uint16_t x9098 = 1U;
	static int16_t x9099 = INT16_MAX;
	int8_t x9100 = 0;
	uint64_t t170 = 8578122291LLU;

    t170 = (((x9097|x9098)+x9099)<<x9100);

    if (t170 != 32766LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x9109 = INT8_MIN;
	static int16_t x9110 = INT16_MIN;
	static uint32_t x9111 = 174993U;
	int16_t x9112 = 0;
	uint32_t t171 = 55854U;

    t171 = (((x9109|x9110)+x9111)<<x9112);

    if (t171 != 174865U) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x9129 = 0;
	static int16_t x9131 = 15;
	uint8_t x9132 = 3U;
	uint32_t t172 = 10733709U;

    t172 = (((x9129|x9130)+x9131)<<x9132);

    if (t172 != 112U) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x9285 = 2U;
	static uint8_t x9286 = UINT8_MAX;
	uint16_t x9287 = 1394U;
	uint8_t x9288 = 2U;
	int32_t t173 = -75;

    t173 = (((x9285|x9286)+x9287)<<x9288);

    if (t173 != 6596) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x9318 = UINT32_MAX;
	int8_t x9319 = INT8_MIN;
	static uint8_t x9320 = 8U;
	uint32_t t174 = 1068U;

    t174 = (((x9317|x9318)+x9319)<<x9320);

    if (t174 != 4294934272U) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x9393 = -1;
	int64_t x9394 = INT64_MIN;
	int32_t x9395 = INT32_MAX;
	uint8_t x9396 = 11U;

    t175 = (((x9393|x9394)+x9395)<<x9396);

    if (t175 != 4398046507008LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint32_t x9506 = UINT32_MAX;
	uint8_t x9507 = UINT8_MAX;
	int8_t x9508 = 3;
	uint32_t t176 = 66992U;

    t176 = (((x9505|x9506)+x9507)<<x9508);

    if (t176 != 2032U) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x9533 = UINT8_MAX;
	uint32_t x9534 = 1915350769U;
	uint64_t t177 = 499002846211849417LLU;

    t177 = (((x9533|x9534)+x9535)<<x9536);

    if (t177 != 3830701564LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x9545 = 745826067489266LLU;
	int8_t x9546 = -27;
	static int32_t x9547 = 322414;
	uint64_t x9548 = 12LLU;
	uint64_t t178 = 5LLU;

    t178 = (((x9545|x9546)+x9547)<<x9548);

    if (t178 != 1320570880LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x9609 = UINT8_MAX;
	int64_t x9610 = 64LL;
	uint32_t x9611 = 15939564U;
	uint8_t x9612 = 8U;
	int64_t t179 = 12907797837LL;

    t179 = (((x9609|x9610)+x9611)<<x9612);

    if (t179 != 4080593664LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint16_t x9613 = 8517U;
	uint8_t x9616 = 1U;
	volatile uint32_t t180 = 10U;

    t180 = (((x9613|x9614)+x9615)<<x9616);

    if (t180 != 4294967176U) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x9629 = -400164100;
	uint16_t x9632 = 32U;
	volatile int64_t t181 = 13693627608LL;

    t181 = (((x9629|x9630)+x9631)<<x9632);

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile uint32_t x9669 = UINT32_MAX;
	int64_t x9670 = 50814244540LL;
	uint16_t x9672 = 0U;
	volatile int64_t t182 = 297097629LL;

    t182 = (((x9669|x9670)+x9671)<<x9672);

    if (t182 != 51539608563LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x9685 = INT16_MIN;
	uint64_t x9686 = 3539794775018250951LLU;
	uint16_t x9688 = 2U;

    t183 = (((x9685|x9686)+x9687)<<x9688);

    if (t183 != 18446744073709325084LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x9725 = 1841559511LL;
	int32_t x9727 = INT32_MAX;
	uint8_t x9728 = 7U;
	volatile uint64_t t184 = 30427LLU;

    t184 = (((x9725|x9726)+x9727)<<x9728);

    if (t184 != 2164428369664LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x9761 = 26542143215LLU;
	uint8_t x9762 = 2U;
	int32_t x9763 = -452529;
	uint64_t t185 = 229427874445LLU;

    t185 = (((x9761|x9762)+x9763)<<x9764);

    if (t185 != 53083381372LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int64_t x9786 = INT64_MIN;
	int16_t x9787 = INT16_MAX;
	int8_t x9788 = 10;
	volatile int64_t t186 = 5750720LL;

    t186 = (((x9785|x9786)+x9787)<<x9788);

    if (t186 != 33422336LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x9837 = -420436LL;
	int32_t x9838 = INT32_MAX;
	uint8_t x9840 = 0U;
	static int64_t t187 = 5013212LL;

    t187 = (((x9837|x9838)+x9839)<<x9840);

    if (t187 != 46LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x9841 = INT8_MIN;
	static uint16_t x9842 = UINT16_MAX;
	volatile int32_t t188 = -1;

    t188 = (((x9841|x9842)+x9843)<<x9844);

    if (t188 != 44416) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x9849 = INT32_MAX;
	static int8_t x9850 = INT8_MIN;
	volatile int8_t x9851 = 14;
	volatile int16_t x9852 = 0;

    t189 = (((x9849|x9850)+x9851)<<x9852);

    if (t189 != 13) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x9929 = INT16_MIN;
	int32_t x9930 = INT32_MIN;
	uint32_t x9931 = 3U;
	uint32_t x9932 = 1U;

    t190 = (((x9929|x9930)+x9931)<<x9932);

    if (t190 != 4294901766U) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x9949 = INT64_MAX;
	static int64_t x9950 = -3865458LL;
	uint64_t x9951 = 10924283706136LLU;
	int16_t x9952 = 1;
	uint64_t t191 = 5LLU;

    t191 = (((x9949|x9950)+x9951)<<x9952);

    if (t191 != 21848567412270LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x9953 = -1;
	uint64_t x9954 = UINT64_MAX;
	int32_t x9955 = INT32_MAX;
	int8_t x9956 = 17;
	static volatile uint64_t t192 = 2693632LLU;

    t192 = (((x9953|x9954)+x9955)<<x9956);

    if (t192 != 281474976448512LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x9965 = 925327;
	int64_t x9966 = -1LL;
	volatile uint64_t x9967 = UINT64_MAX;
	int32_t x9968 = 3;
	volatile uint64_t t193 = 166722LLU;

    t193 = (((x9965|x9966)+x9967)<<x9968);

    if (t193 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x9969 = INT8_MIN;
	uint64_t x9970 = 102LLU;
	int8_t x9972 = 42;
	static uint64_t t194 = 114498396194665LLU;

    t194 = (((x9969|x9970)+x9971)<<x9972);

    if (t194 != 18446625326453751808LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x9993 = INT32_MIN;
	uint32_t x9994 = UINT32_MAX;
	uint64_t x9995 = UINT64_MAX;
	uint8_t x9996 = 28U;
	uint64_t t195 = 20077LLU;

    t195 = (((x9993|x9994)+x9995)<<x9996);

    if (t195 != 1152921504069976064LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x10017 = INT16_MAX;
	uint64_t x10018 = 34LLU;
	volatile int16_t x10019 = -1;

    t196 = (((x10017|x10018)+x10019)<<x10020);

    if (t196 != 4294705152LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x10301 = INT8_MAX;
	static uint16_t x10302 = UINT16_MAX;
	uint64_t x10303 = UINT64_MAX;
	static uint32_t x10304 = 1U;
	uint64_t t197 = 860518917LLU;

    t197 = (((x10301|x10302)+x10303)<<x10304);

    if (t197 != 131068LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x10341 = INT64_MIN;
	uint32_t x10343 = UINT32_MAX;
	volatile uint32_t x10344 = 6U;

    t198 = (((x10341|x10342)+x10343)<<x10344);

    if (t198 != 137438953408LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x10381 = INT16_MAX;
	volatile uint32_t x10382 = 1481U;
	volatile uint8_t x10383 = 2U;
	uint8_t x10384 = 6U;

    t199 = (((x10381|x10382)+x10383)<<x10384);

    if (t199 != 2097216U) { NG(); } else { ; }
	
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

