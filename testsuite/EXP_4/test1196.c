
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

uint16_t x41 = 31U;
int16_t x231 = INT16_MIN;
uint8_t x274 = 9U;
int32_t t2 = 23;
volatile uint8_t x420 = 87U;
int8_t x511 = 1;
uint32_t t7 = 131724U;
uint64_t x723 = UINT64_MAX;
volatile int32_t t9 = 3260;
int32_t t12 = -189;
volatile uint8_t x1170 = 5U;
static int8_t x1234 = 10;
int32_t t14 = -971;
static int16_t x1269 = INT16_MAX;
static uint32_t x1270 = 16U;
int32_t x1479 = INT32_MAX;
volatile uint16_t x1656 = 1501U;
int32_t t18 = 1;
volatile uint16_t x1890 = 5U;
static int16_t x1891 = -1;
uint8_t x1969 = 18U;
uint8_t x1981 = 124U;
uint8_t x1982 = 4U;
uint16_t x1984 = 675U;
static volatile int32_t t22 = 14081;
static volatile uint16_t x2089 = 3U;
uint16_t x2157 = 102U;
uint8_t x2274 = 1U;
volatile uint64_t x2281 = 201458723557652LLU;
int32_t x2284 = -1;
volatile uint64_t t30 = 179284806686588LLU;
uint64_t x2319 = 13451724LLU;
uint32_t x2422 = 3U;
volatile uint8_t x2449 = 61U;
int8_t x2451 = -6;
volatile uint32_t x2452 = UINT32_MAX;
int16_t x2539 = 3;
int16_t x2804 = 11;
static int32_t t38 = 149;
int32_t x2919 = -897130378;
volatile int32_t t40 = 3;
int32_t x2964 = -1;
static uint16_t x3143 = 2U;
static int32_t t43 = -4399657;
int16_t x3146 = 1;
uint64_t x3148 = 80040643516214LLU;
int16_t x3171 = 9;
uint16_t x3212 = 278U;
volatile int32_t t46 = 358;
int64_t x3553 = 176139LL;
uint8_t x3554 = 27U;
uint32_t x3581 = 1301807U;
uint16_t x3583 = 3U;
int64_t x3696 = -4811282077871905LL;
static uint16_t x3790 = 3U;
uint32_t t52 = 97U;
uint8_t x3873 = 6U;
int8_t x3876 = INT8_MIN;


void f0(void) {
    	uint64_t x42 = 1LLU;
	volatile int16_t x43 = INT16_MIN;
	static int32_t x44 = INT32_MAX;
	int32_t t0 = -20803;

    t0 = (x41<<(x42-(x43!=x44)));

    if (t0 != 31) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x229 = 53;
	uint8_t x230 = 5U;
	int32_t x232 = INT32_MIN;
	int32_t t1 = 298;

    t1 = (x229<<(x230-(x231!=x232)));

    if (t1 != 848) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x273 = 4U;
	volatile uint16_t x275 = UINT16_MAX;
	int8_t x276 = INT8_MAX;

    t2 = (x273<<(x274-(x275!=x276)));

    if (t2 != 1024) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x417 = 1211890160815425066LL;
	int8_t x418 = 3;
	static int16_t x419 = 1;
	volatile int64_t t3 = -639LL;

    t3 = (x417<<(x418-(x419!=x420)));

    if (t3 != 4847560643261700264LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x509 = 14868368543LLU;
	int16_t x510 = 1;
	uint64_t x512 = UINT64_MAX;
	uint64_t t4 = 301315LLU;

    t4 = (x509<<(x510-(x511!=x512)));

    if (t4 != 14868368543LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x613 = 798148783205LLU;
	static uint8_t x614 = 30U;
	int8_t x615 = INT8_MIN;
	int16_t x616 = -1;
	volatile uint64_t t5 = 18003861742782LLU;

    t5 = (x613<<(x614-(x615!=x616)));

    if (t5 != 4227751455638945792LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x685 = INT16_MAX;
	volatile uint8_t x686 = 13U;
	static uint32_t x687 = 4086U;
	int64_t x688 = INT64_MIN;
	volatile int32_t t6 = -1;

    t6 = (x685<<(x686-(x687!=x688)));

    if (t6 != 134213632) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x701 = 74044723U;
	static uint8_t x702 = 3U;
	int32_t x703 = INT32_MIN;
	int64_t x704 = INT64_MAX;

    t7 = (x701<<(x702-(x703!=x704)));

    if (t7 != 296178892U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x721 = 80741U;
	volatile uint8_t x722 = 28U;
	uint16_t x724 = UINT16_MAX;
	static uint32_t t8 = 3253357U;

    t8 = (x721<<(x722-(x723!=x724)));

    if (t8 != 671088640U) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint16_t x841 = 7U;
	uint16_t x842 = 2U;
	static uint64_t x843 = UINT64_MAX;
	static int64_t x844 = -76927837252485724LL;

    t9 = (x841<<(x842-(x843!=x844)));

    if (t9 != 14) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x1021 = 2275U;
	static volatile int16_t x1022 = 1;
	int8_t x1023 = -1;
	int32_t x1024 = -10413229;
	volatile int32_t t10 = -6763;

    t10 = (x1021<<(x1022-(x1023!=x1024)));

    if (t10 != 2275) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x1057 = UINT64_MAX;
	volatile uint8_t x1058 = 58U;
	volatile int16_t x1059 = INT16_MIN;
	volatile int8_t x1060 = -1;
	uint64_t t11 = 15209628037115LLU;

    t11 = (x1057<<(x1058-(x1059!=x1060)));

    if (t11 != 18302628885633695744LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x1065 = 988U;
	volatile int8_t x1066 = 7;
	int64_t x1067 = 276995LL;
	static uint16_t x1068 = 76U;

    t12 = (x1065<<(x1066-(x1067!=x1068)));

    if (t12 != 63232) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x1169 = 1857803U;
	uint16_t x1171 = 5120U;
	static int16_t x1172 = -1;
	static volatile uint32_t t13 = 42166U;

    t13 = (x1169<<(x1170-(x1171!=x1172)));

    if (t13 != 29724848U) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x1233 = 9;
	int64_t x1235 = INT64_MIN;
	static uint64_t x1236 = 29946546LLU;

    t14 = (x1233<<(x1234-(x1235!=x1236)));

    if (t14 != 4608) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint64_t x1241 = 507598LLU;
	uint64_t x1242 = 1LLU;
	uint8_t x1243 = 40U;
	uint16_t x1244 = 0U;
	uint64_t t15 = 24860LLU;

    t15 = (x1241<<(x1242-(x1243!=x1244)));

    if (t15 != 507598LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x1271 = 3LL;
	volatile int32_t x1272 = INT32_MAX;
	volatile int32_t t16 = -16;

    t16 = (x1269<<(x1270-(x1271!=x1272)));

    if (t16 != 1073709056) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x1477 = 2678634911LLU;
	int8_t x1478 = 11;
	static int64_t x1480 = INT64_MIN;
	uint64_t t17 = 505897149253371LLU;

    t17 = (x1477<<(x1478-(x1479!=x1480)));

    if (t17 != 2742922148864LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x1653 = 21U;
	uint16_t x1654 = 3U;
	uint64_t x1655 = 100LLU;

    t18 = (x1653<<(x1654-(x1655!=x1656)));

    if (t18 != 84) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint32_t x1881 = UINT32_MAX;
	uint8_t x1882 = 7U;
	int64_t x1883 = INT64_MAX;
	int64_t x1884 = INT64_MAX;
	volatile uint32_t t19 = 102378354U;

    t19 = (x1881<<(x1882-(x1883!=x1884)));

    if (t19 != 4294967168U) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x1889 = 3390798;
	volatile int8_t x1892 = INT8_MIN;
	volatile int32_t t20 = 150327;

    t20 = (x1889<<(x1890-(x1891!=x1892)));

    if (t20 != 54252768) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x1970 = 1U;
	int16_t x1971 = -1;
	static uint8_t x1972 = 7U;
	volatile int32_t t21 = -963;

    t21 = (x1969<<(x1970-(x1971!=x1972)));

    if (t21 != 18) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x1983 = INT64_MIN;

    t22 = (x1981<<(x1982-(x1983!=x1984)));

    if (t22 != 992) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile uint32_t x1997 = UINT32_MAX;
	uint8_t x1998 = 1U;
	uint64_t x1999 = UINT64_MAX;
	int32_t x2000 = INT32_MAX;
	volatile uint32_t t23 = UINT32_MAX;

    t23 = (x1997<<(x1998-(x1999!=x2000)));

    if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x2090 = 5U;
	int8_t x2091 = INT8_MAX;
	int16_t x2092 = INT16_MIN;
	volatile int32_t t24 = 51347518;

    t24 = (x2089<<(x2090-(x2091!=x2092)));

    if (t24 != 48) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x2129 = 0;
	static int16_t x2130 = 7;
	uint16_t x2131 = 0U;
	int32_t x2132 = INT32_MAX;
	int32_t t25 = -800;

    t25 = (x2129<<(x2130-(x2131!=x2132)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x2149 = UINT64_MAX;
	volatile int8_t x2150 = 8;
	volatile int32_t x2151 = INT32_MAX;
	volatile int16_t x2152 = -4;
	volatile uint64_t t26 = 345160649277LLU;

    t26 = (x2149<<(x2150-(x2151!=x2152)));

    if (t26 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x2158 = 1;
	static int32_t x2159 = INT32_MIN;
	static int32_t x2160 = INT32_MIN;
	volatile int32_t t27 = -8;

    t27 = (x2157<<(x2158-(x2159!=x2160)));

    if (t27 != 204) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x2221 = 45U;
	int8_t x2222 = 21;
	int32_t x2223 = INT32_MIN;
	uint64_t x2224 = 3598LLU;
	volatile int32_t t28 = -20;

    t28 = (x2221<<(x2222-(x2223!=x2224)));

    if (t28 != 47185920) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x2273 = 1U;
	uint16_t x2275 = 4500U;
	int32_t x2276 = -238;
	int32_t t29 = -1;

    t29 = (x2273<<(x2274-(x2275!=x2276)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x2282 = 43;
	volatile int32_t x2283 = INT32_MIN;

    t30 = (x2281<<(x2282-(x2283!=x2284)));

    if (t30 != 11404328117339160576LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint32_t x2317 = 321U;
	volatile uint16_t x2318 = 16U;
	static int8_t x2320 = -1;
	uint32_t t31 = 1933542U;

    t31 = (x2317<<(x2318-(x2319!=x2320)));

    if (t31 != 10518528U) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x2405 = 1;
	static uint16_t x2406 = 5U;
	int32_t x2407 = 19;
	int8_t x2408 = -1;
	volatile int32_t t32 = -536092248;

    t32 = (x2405<<(x2406-(x2407!=x2408)));

    if (t32 != 16) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x2421 = 0;
	volatile int8_t x2423 = -1;
	int8_t x2424 = -41;
	volatile int32_t t33 = -1918;

    t33 = (x2421<<(x2422-(x2423!=x2424)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x2450 = 1;
	int32_t t34 = -101;

    t34 = (x2449<<(x2450-(x2451!=x2452)));

    if (t34 != 61) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x2537 = 3;
	int8_t x2538 = 5;
	uint8_t x2540 = 50U;
	volatile int32_t t35 = -6;

    t35 = (x2537<<(x2538-(x2539!=x2540)));

    if (t35 != 48) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint32_t x2801 = 13852U;
	int16_t x2802 = 1;
	int16_t x2803 = -1;
	static uint32_t t36 = 61518U;

    t36 = (x2801<<(x2802-(x2803!=x2804)));

    if (t36 != 13852U) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x2849 = INT16_MAX;
	static uint8_t x2850 = 8U;
	uint64_t x2851 = 1429887003398736020LLU;
	int16_t x2852 = INT16_MAX;
	volatile int32_t t37 = -480387;

    t37 = (x2849<<(x2850-(x2851!=x2852)));

    if (t37 != 4194176) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x2853 = INT16_MAX;
	volatile int32_t x2854 = 2;
	volatile int16_t x2855 = INT16_MAX;
	int64_t x2856 = 63301459866663LL;

    t38 = (x2853<<(x2854-(x2855!=x2856)));

    if (t38 != 65534) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x2873 = 0U;
	int8_t x2874 = 1;
	uint64_t x2875 = UINT64_MAX;
	int64_t x2876 = -1LL;
	uint32_t t39 = 908602U;

    t39 = (x2873<<(x2874-(x2875!=x2876)));

    if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x2917 = 1035;
	int8_t x2918 = 12;
	int64_t x2920 = -62981587519LL;

    t40 = (x2917<<(x2918-(x2919!=x2920)));

    if (t40 != 2119680) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint64_t x2961 = UINT64_MAX;
	uint8_t x2962 = 1U;
	volatile uint32_t x2963 = UINT32_MAX;
	uint64_t t41 = 5560417LLU;

    t41 = (x2961<<(x2962-(x2963!=x2964)));

    if (t41 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int64_t x3041 = 7547LL;
	static volatile int8_t x3042 = 1;
	uint16_t x3043 = UINT16_MAX;
	static int32_t x3044 = INT32_MIN;
	static int64_t t42 = -508339610480LL;

    t42 = (x3041<<(x3042-(x3043!=x3044)));

    if (t42 != 7547LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x3141 = 52;
	uint16_t x3142 = 2U;
	volatile int64_t x3144 = INT64_MIN;

    t43 = (x3141<<(x3142-(x3143!=x3144)));

    if (t43 != 104) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x3145 = 49LLU;
	uint32_t x3147 = 85359U;
	volatile uint64_t t44 = 16945398476737134LLU;

    t44 = (x3145<<(x3146-(x3147!=x3148)));

    if (t44 != 49LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x3169 = INT16_MAX;
	int32_t x3170 = 2;
	uint32_t x3172 = 65U;
	int32_t t45 = -87;

    t45 = (x3169<<(x3170-(x3171!=x3172)));

    if (t45 != 65534) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x3209 = 0U;
	volatile uint8_t x3210 = 24U;
	int16_t x3211 = INT16_MIN;

    t46 = (x3209<<(x3210-(x3211!=x3212)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x3325 = 62U;
	static uint8_t x3326 = 9U;
	static int32_t x3327 = -90504;
	static uint32_t x3328 = UINT32_MAX;
	int32_t t47 = -11891;

    t47 = (x3325<<(x3326-(x3327!=x3328)));

    if (t47 != 15872) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x3357 = 2;
	volatile int8_t x3358 = 1;
	static int32_t x3359 = -1;
	int64_t x3360 = INT64_MIN;
	volatile int32_t t48 = -203333688;

    t48 = (x3357<<(x3358-(x3359!=x3360)));

    if (t48 != 2) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x3555 = 0LL;
	static int64_t x3556 = INT64_MIN;
	int64_t t49 = -1LL;

    t49 = (x3553<<(x3554-(x3555!=x3556)));

    if (t49 != 11820488196096LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x3582 = 4U;
	static volatile int16_t x3584 = INT16_MAX;
	uint32_t t50 = 33444U;

    t50 = (x3581<<(x3582-(x3583!=x3584)));

    if (t50 != 10414456U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x3693 = 9697U;
	uint64_t x3694 = 3LLU;
	volatile uint8_t x3695 = 15U;
	int32_t t51 = 8197633;

    t51 = (x3693<<(x3694-(x3695!=x3696)));

    if (t51 != 38788) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x3789 = UINT32_MAX;
	int8_t x3791 = 2;
	int32_t x3792 = INT32_MIN;

    t52 = (x3789<<(x3790-(x3791!=x3792)));

    if (t52 != 4294967292U) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint16_t x3874 = 3U;
	int64_t x3875 = INT64_MAX;
	int32_t t53 = 17887122;

    t53 = (x3873<<(x3874-(x3875!=x3876)));

    if (t53 != 24) { NG(); } else { ; }
	
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


    return 0;
}

