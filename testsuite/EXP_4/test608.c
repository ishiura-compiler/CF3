
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

int8_t x169 = INT8_MAX;
volatile int32_t x328 = INT32_MIN;
uint32_t x445 = 1735U;
volatile uint32_t t4 = 1171U;
uint64_t x505 = 1578404LLU;
int8_t x507 = INT8_MAX;
uint16_t x508 = UINT16_MAX;
uint8_t x662 = 3U;
int16_t x737 = INT16_MAX;
uint16_t x738 = 1U;
static int32_t x740 = 1;
volatile uint32_t t9 = 118U;
int16_t x877 = INT16_MAX;
volatile uint8_t x878 = 0U;
volatile int32_t t10 = -118;
static volatile uint16_t x910 = 0U;
int8_t x912 = 52;
volatile uint64_t t12 = 122442651835374LLU;
uint32_t x1537 = 7440U;
int16_t x1572 = -251;
int16_t x1699 = INT16_MAX;
volatile uint16_t x1873 = 10U;
static volatile uint32_t x1979 = 565715982U;
static int32_t t21 = 44;
static volatile int32_t t22 = 1;
static volatile int32_t t23 = INT32_MAX;
static uint64_t x2061 = 23053369444LLU;
uint32_t x2125 = 1839588172U;
volatile int32_t t26 = -14595165;
int16_t x2181 = INT16_MAX;
static int16_t x2418 = 0;
volatile uint16_t x2419 = 19U;
uint32_t x2570 = 57U;
int8_t x2649 = 1;
int8_t x2650 = -1;
volatile int32_t t31 = 94538;
uint16_t x2761 = 14801U;
static int32_t x3049 = INT32_MAX;
uint8_t x3170 = 19U;
volatile uint16_t x3319 = 13497U;
int32_t x3330 = 62;
volatile int64_t x3332 = -3270239LL;
uint32_t x3600 = UINT32_MAX;
int32_t t38 = -1785238;
static uint16_t x3921 = 26U;
uint16_t x4069 = 13U;
int64_t x4072 = 12007614771LL;
volatile int64_t x4148 = INT64_MAX;
uint32_t t45 = 12062U;
int64_t x4256 = INT64_MAX;
uint32_t x4405 = 276203586U;
int64_t x4789 = INT64_MAX;
int64_t x4791 = -1LL;
volatile uint8_t x4950 = 3U;
int32_t t50 = -1;
uint8_t x5046 = 27U;
volatile int8_t x5175 = INT8_MIN;
volatile uint8_t x5215 = 3U;
static volatile int8_t x5446 = 12;
int32_t t57 = -30017611;
int8_t x5543 = 1;
static int16_t x5714 = INT16_MAX;
static int8_t x5716 = 1;
uint64_t x5805 = UINT64_MAX;
static volatile int32_t x5886 = -1;
int64_t t63 = 3093423948476LL;
uint16_t x5953 = UINT16_MAX;
uint16_t x6150 = 9U;
static uint64_t x6151 = 1248051535810401LLU;
int32_t t71 = 29837;
int16_t x6722 = 2;
volatile uint16_t x6724 = 14524U;
int16_t x6745 = 667;
volatile uint16_t x7044 = UINT16_MAX;
static volatile uint16_t x7075 = 2595U;
volatile int64_t x7076 = INT64_MIN;
int32_t t75 = 600;
static volatile int8_t x7094 = 1;
int16_t x7095 = INT16_MIN;
uint8_t x7285 = UINT8_MAX;
static volatile int16_t x7286 = 1;
int64_t x7287 = -1LL;
int64_t x7288 = INT64_MIN;
uint32_t x7438 = 2U;
volatile int64_t x7439 = -1LL;
volatile int16_t x7535 = -1;
int8_t x7571 = -1;
uint16_t x8275 = 2U;
int8_t x8470 = 1;
static uint16_t x8471 = UINT16_MAX;
uint64_t t89 = 80LLU;
int32_t t90 = -83844;
static int32_t x9015 = 0;
int64_t t93 = -31LL;
volatile uint8_t x9022 = 0U;
uint8_t x9133 = 2U;
static volatile uint16_t x9134 = 14U;
volatile int16_t x9135 = INT16_MAX;
int32_t t95 = 9;
static uint32_t x9141 = 20U;
int8_t x9143 = -3;
volatile uint32_t t96 = 28232U;
int64_t x9291 = -1LL;
int8_t x9345 = 1;
volatile int32_t t99 = 230368;
int8_t x9350 = 0;
volatile uint64_t t101 = 58646281LLU;
static uint64_t x9421 = UINT64_MAX;
static int32_t x9508 = INT32_MIN;
volatile int32_t x9516 = -1;
int8_t x9601 = 45;
int64_t x9768 = INT64_MIN;
static volatile int8_t x9790 = 18;
int16_t x9847 = INT16_MAX;
uint32_t x9848 = 338662007U;
static uint64_t t111 = 4164732558450LLU;
int8_t x10086 = 27;
int32_t x10258 = -1;
uint16_t x10259 = 24U;
uint16_t x10262 = 7U;


void f0(void) {
    	uint64_t x41 = 1022LLU;
	int64_t x42 = -1LL;
	int16_t x43 = 63;
	int16_t x44 = -1;
	uint64_t t0 = 10496LLU;

    t0 = (x41<<(x42-(x43/x44)));

    if (t0 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x170 = 0U;
	int8_t x171 = INT8_MIN;
	volatile int32_t x172 = INT32_MIN;
	int32_t t1 = -240;

    t1 = (x169<<(x170-(x171/x172)));

    if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x325 = 0U;
	volatile uint8_t x326 = 22U;
	int16_t x327 = INT16_MIN;
	volatile uint32_t t2 = 115U;

    t2 = (x325<<(x326-(x327/x328)));

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x353 = 2U;
	static uint8_t x354 = 2U;
	static volatile int8_t x355 = INT8_MAX;
	int32_t x356 = -6016;
	volatile int32_t t3 = -1304;

    t3 = (x353<<(x354-(x355/x356)));

    if (t3 != 8) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x446 = 1U;
	static uint32_t x447 = UINT32_MAX;
	uint64_t x448 = UINT64_MAX;

    t4 = (x445<<(x446-(x447/x448)));

    if (t4 != 3470U) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint32_t x506 = 5U;
	volatile uint64_t t5 = 1LLU;

    t5 = (x505<<(x506-(x507/x508)));

    if (t5 != 50508928LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x573 = 1;
	int8_t x574 = INT8_MIN;
	int16_t x575 = INT16_MIN;
	static uint8_t x576 = UINT8_MAX;
	int32_t t6 = -3;

    t6 = (x573<<(x574-(x575/x576)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile uint32_t x661 = 5956U;
	uint64_t x663 = 4248763170053LLU;
	int16_t x664 = -1;
	uint32_t t7 = 40973801U;

    t7 = (x661<<(x662-(x663/x664)));

    if (t7 != 47648U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x739 = UINT32_MAX;
	volatile int32_t t8 = 13;

    t8 = (x737<<(x738-(x739/x740)));

    if (t8 != 131068) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint32_t x869 = 59522U;
	int8_t x870 = 1;
	static int8_t x871 = 1;
	volatile uint8_t x872 = 117U;

    t9 = (x869<<(x870-(x871/x872)));

    if (t9 != 119044U) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x879 = 33U;
	int8_t x880 = INT8_MIN;

    t10 = (x877<<(x878-(x879/x880)));

    if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x909 = UINT32_MAX;
	static uint8_t x911 = 3U;
	uint32_t t11 = UINT32_MAX;

    t11 = (x909<<(x910-(x911/x912)));

    if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint64_t x1069 = 359LLU;
	uint8_t x1070 = 3U;
	int8_t x1071 = -1;
	uint32_t x1072 = UINT32_MAX;

    t12 = (x1069<<(x1070-(x1071/x1072)));

    if (t12 != 1436LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint64_t x1113 = 7339LLU;
	uint32_t x1114 = 0U;
	uint8_t x1115 = 1U;
	static int8_t x1116 = INT8_MAX;
	volatile uint64_t t13 = 693841252LLU;

    t13 = (x1113<<(x1114-(x1115/x1116)));

    if (t13 != 7339LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x1169 = 539U;
	volatile int8_t x1170 = 3;
	volatile uint32_t x1171 = 244843U;
	static int8_t x1172 = INT8_MIN;
	static volatile int32_t t14 = -295954;

    t14 = (x1169<<(x1170-(x1171/x1172)));

    if (t14 != 4312) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x1265 = 3U;
	volatile int16_t x1266 = 1;
	volatile uint16_t x1267 = UINT16_MAX;
	int64_t x1268 = INT64_MIN;
	static int32_t t15 = -10152;

    t15 = (x1265<<(x1266-(x1267/x1268)));

    if (t15 != 6) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint32_t x1533 = 193752788U;
	int8_t x1534 = 0;
	uint16_t x1535 = 3816U;
	volatile int16_t x1536 = INT16_MIN;
	volatile uint32_t t16 = 246U;

    t16 = (x1533<<(x1534-(x1535/x1536)));

    if (t16 != 193752788U) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint8_t x1538 = 22U;
	uint32_t x1539 = UINT32_MAX;
	int16_t x1540 = INT16_MIN;
	uint32_t t17 = 1441668U;

    t17 = (x1537<<(x1538-(x1539/x1540)));

    if (t17 != 2717908992U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x1569 = UINT32_MAX;
	volatile uint8_t x1570 = 9U;
	int8_t x1571 = INT8_MIN;
	volatile uint32_t t18 = 0U;

    t18 = (x1569<<(x1570-(x1571/x1572)));

    if (t18 != 4294966784U) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x1697 = INT8_MAX;
	uint8_t x1698 = 12U;
	static int32_t x1700 = INT32_MIN;
	static int32_t t19 = 200474656;

    t19 = (x1697<<(x1698-(x1699/x1700)));

    if (t19 != 520192) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x1874 = 1;
	int16_t x1875 = 0;
	int32_t x1876 = INT32_MIN;
	int32_t t20 = -17;

    t20 = (x1873<<(x1874-(x1875/x1876)));

    if (t20 != 20) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x1977 = 3849U;
	int8_t x1978 = 2;
	int8_t x1980 = -1;

    t21 = (x1977<<(x1978-(x1979/x1980)));

    if (t21 != 15396) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x2001 = 14766;
	uint8_t x2002 = 2U;
	uint16_t x2003 = 1U;
	uint64_t x2004 = UINT64_MAX;

    t22 = (x2001<<(x2002-(x2003/x2004)));

    if (t22 != 59064) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x2013 = INT32_MAX;
	uint8_t x2014 = 1U;
	int8_t x2015 = -1;
	int16_t x2016 = -1;

    t23 = (x2013<<(x2014-(x2015/x2016)));

    if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x2062 = 0U;
	int8_t x2063 = 1;
	uint8_t x2064 = 38U;
	uint64_t t24 = 32927280217132LLU;

    t24 = (x2061<<(x2062-(x2063/x2064)));

    if (t24 != 23053369444LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x2126 = 38;
	int8_t x2127 = INT8_MAX;
	volatile uint32_t x2128 = 6U;
	uint32_t t25 = 1678U;

    t25 = (x2125<<(x2126-(x2127/x2128)));

    if (t25 != 3331850240U) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x2169 = 57;
	static volatile uint64_t x2170 = 3LLU;
	static int32_t x2171 = -15;
	int32_t x2172 = INT32_MIN;

    t26 = (x2169<<(x2170-(x2171/x2172)));

    if (t26 != 456) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x2182 = 1;
	static int16_t x2183 = INT16_MIN;
	uint16_t x2184 = UINT16_MAX;
	volatile int32_t t27 = -714;

    t27 = (x2181<<(x2182-(x2183/x2184)));

    if (t27 != 65534) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x2417 = 1;
	int32_t x2420 = INT32_MAX;
	static volatile int32_t t28 = 244;

    t28 = (x2417<<(x2418-(x2419/x2420)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x2569 = 1079537926275LLU;
	int16_t x2571 = -1;
	static int64_t x2572 = INT64_MIN;
	uint64_t t29 = 1039299339842040LLU;

    t29 = (x2569<<(x2570-(x2571/x2572)));

    if (t29 != 432345564227567616LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint8_t x2609 = UINT8_MAX;
	static uint32_t x2610 = 20U;
	int64_t x2611 = -1LL;
	uint8_t x2612 = 2U;
	static int32_t t30 = -282958806;

    t30 = (x2609<<(x2610-(x2611/x2612)));

    if (t30 != 267386880) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x2651 = INT8_MAX;
	int32_t x2652 = -125;

    t31 = (x2649<<(x2650-(x2651/x2652)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int8_t x2762 = 0;
	int32_t x2763 = -1;
	volatile int8_t x2764 = INT8_MIN;
	volatile int32_t t32 = 12;

    t32 = (x2761<<(x2762-(x2763/x2764)));

    if (t32 != 14801) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x3050 = -1LL;
	int32_t x3051 = 14;
	int32_t x3052 = -9;
	volatile int32_t t33 = INT32_MAX;

    t33 = (x3049<<(x3050-(x3051/x3052)));

    if (t33 != INT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint32_t x3133 = 13273U;
	int64_t x3134 = 1LL;
	uint16_t x3135 = 9165U;
	uint64_t x3136 = 71010984593805912LLU;
	uint32_t t34 = 10107000U;

    t34 = (x3133<<(x3134-(x3135/x3136)));

    if (t34 != 26546U) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x3169 = 32736580U;
	static uint32_t x3171 = UINT32_MAX;
	int8_t x3172 = INT8_MIN;
	static uint32_t t35 = 1560324U;

    t35 = (x3169<<(x3170-(x3171/x3172)));

    if (t35 != 353370112U) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x3317 = 3195;
	uint8_t x3318 = 20U;
	uint16_t x3320 = 870U;
	volatile int32_t t36 = 379910601;

    t36 = (x3317<<(x3318-(x3319/x3320)));

    if (t36 != 102240) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x3329 = 823730565598284116LLU;
	int64_t x3331 = -12880446LL;
	uint64_t t37 = 14701196598LLU;

    t37 = (x3329<<(x3330-(x3331/x3332)));

    if (t37 != 11529215046068469760LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x3597 = INT16_MAX;
	uint32_t x3598 = 3U;
	int16_t x3599 = INT16_MIN;

    t38 = (x3597<<(x3598-(x3599/x3600)));

    if (t38 != 262136) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint32_t x3765 = UINT32_MAX;
	int64_t x3766 = 21LL;
	uint32_t x3767 = UINT32_MAX;
	int64_t x3768 = INT64_MAX;
	volatile uint32_t t39 = 801U;

    t39 = (x3765<<(x3766-(x3767/x3768)));

    if (t39 != 4292870144U) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x3769 = INT8_MAX;
	static uint8_t x3770 = 1U;
	uint16_t x3771 = 27U;
	uint8_t x3772 = UINT8_MAX;
	int32_t t40 = -9;

    t40 = (x3769<<(x3770-(x3771/x3772)));

    if (t40 != 254) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint8_t x3777 = UINT8_MAX;
	int64_t x3778 = 23LL;
	int8_t x3779 = INT8_MIN;
	volatile uint64_t x3780 = UINT64_MAX;
	volatile int32_t t41 = 5846;

    t41 = (x3777<<(x3778-(x3779/x3780)));

    if (t41 != 2139095040) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x3922 = 0;
	volatile uint16_t x3923 = 1357U;
	static volatile int16_t x3924 = INT16_MAX;
	volatile int32_t t42 = 7;

    t42 = (x3921<<(x3922-(x3923/x3924)));

    if (t42 != 26) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint8_t x3953 = 1U;
	int8_t x3954 = 0;
	uint16_t x3955 = 8U;
	volatile uint32_t x3956 = 2447U;
	volatile int32_t t43 = 5803;

    t43 = (x3953<<(x3954-(x3955/x3956)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x4070 = 7U;
	volatile int8_t x4071 = INT8_MIN;
	volatile int32_t t44 = -1822659;

    t44 = (x4069<<(x4070-(x4071/x4072)));

    if (t44 != 1664) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint32_t x4145 = UINT32_MAX;
	int8_t x4146 = 2;
	volatile int8_t x4147 = INT8_MIN;

    t45 = (x4145<<(x4146-(x4147/x4148)));

    if (t45 != 4294967292U) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x4253 = 0;
	volatile uint16_t x4254 = 10U;
	int64_t x4255 = INT64_MAX;
	int32_t t46 = -19027;

    t46 = (x4253<<(x4254-(x4255/x4256)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x4406 = 1;
	int64_t x4407 = 363LL;
	static int16_t x4408 = 743;
	volatile uint32_t t47 = 10882279U;

    t47 = (x4405<<(x4406-(x4407/x4408)));

    if (t47 != 552407172U) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x4445 = 3239261U;
	static uint16_t x4446 = 3U;
	int8_t x4447 = INT8_MIN;
	int64_t x4448 = -23444901613430LL;
	volatile uint32_t t48 = 80695951U;

    t48 = (x4445<<(x4446-(x4447/x4448)));

    if (t48 != 25914088U) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x4790 = 1;
	volatile uint64_t x4792 = UINT64_MAX;
	int64_t t49 = INT64_MAX;

    t49 = (x4789<<(x4790-(x4791/x4792)));

    if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x4949 = 45U;
	static int16_t x4951 = -454;
	int8_t x4952 = INT8_MIN;

    t50 = (x4949<<(x4950-(x4951/x4952)));

    if (t50 != 45) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x5033 = INT8_MAX;
	uint8_t x5034 = 9U;
	volatile uint64_t x5035 = 757116LLU;
	volatile uint64_t x5036 = 965006412786LLU;
	volatile int32_t t51 = 1067078023;

    t51 = (x5033<<(x5034-(x5035/x5036)));

    if (t51 != 65024) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x5045 = UINT32_MAX;
	uint16_t x5047 = 1988U;
	volatile uint16_t x5048 = UINT16_MAX;
	uint32_t t52 = 3U;

    t52 = (x5045<<(x5046-(x5047/x5048)));

    if (t52 != 4160749568U) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x5173 = INT16_MAX;
	uint16_t x5174 = 0U;
	int64_t x5176 = 414058167506169LL;
	int32_t t53 = 1;

    t53 = (x5173<<(x5174-(x5175/x5176)));

    if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x5205 = UINT64_MAX;
	int8_t x5206 = 1;
	uint32_t x5207 = 14204752U;
	int64_t x5208 = INT64_MIN;
	static uint64_t t54 = 483LLU;

    t54 = (x5205<<(x5206-(x5207/x5208)));

    if (t54 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x5213 = UINT8_MAX;
	int16_t x5214 = 1;
	static int16_t x5216 = 220;
	int32_t t55 = -17380;

    t55 = (x5213<<(x5214-(x5215/x5216)));

    if (t55 != 510) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x5445 = INT8_MAX;
	int8_t x5447 = INT8_MIN;
	int32_t x5448 = -5907;
	int32_t t56 = 11155940;

    t56 = (x5445<<(x5446-(x5447/x5448)));

    if (t56 != 520192) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x5473 = UINT16_MAX;
	uint8_t x5474 = 13U;
	volatile int16_t x5475 = INT16_MAX;
	uint64_t x5476 = 250359570LLU;

    t57 = (x5473<<(x5474-(x5475/x5476)));

    if (t57 != 536862720) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x5541 = INT16_MAX;
	int8_t x5542 = 1;
	int8_t x5544 = -1;
	int32_t t58 = -108;

    t58 = (x5541<<(x5542-(x5543/x5544)));

    if (t58 != 131068) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint16_t x5569 = 135U;
	uint32_t x5570 = 0U;
	uint64_t x5571 = 3742950310LLU;
	int64_t x5572 = -1LL;
	static volatile int32_t t59 = -1;

    t59 = (x5569<<(x5570-(x5571/x5572)));

    if (t59 != 135) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint8_t x5629 = UINT8_MAX;
	uint8_t x5630 = 2U;
	int64_t x5631 = -1LL;
	int16_t x5632 = -1;
	int32_t t60 = -37;

    t60 = (x5629<<(x5630-(x5631/x5632)));

    if (t60 != 510) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint64_t x5713 = 292789873402LLU;
	volatile int16_t x5715 = INT16_MAX;
	volatile uint64_t t61 = 16744358368506LLU;

    t61 = (x5713<<(x5714-(x5715/x5716)));

    if (t61 != 292789873402LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x5806 = 21;
	volatile int8_t x5807 = 14;
	int32_t x5808 = INT32_MIN;
	volatile uint64_t t62 = 2393923906LLU;

    t62 = (x5805<<(x5806-(x5807/x5808)));

    if (t62 != 18446744073707454464LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x5885 = 57790920LL;
	static uint8_t x5887 = 76U;
	volatile int16_t x5888 = -6;

    t63 = (x5885<<(x5886-(x5887/x5888)));

    if (t63 != 118355804160LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint8_t x5954 = 0U;
	uint8_t x5955 = UINT8_MAX;
	uint64_t x5956 = 10218252480LLU;
	volatile int32_t t64 = 1;

    t64 = (x5953<<(x5954-(x5955/x5956)));

    if (t64 != 65535) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x6041 = UINT64_MAX;
	volatile uint32_t x6042 = 59U;
	static uint8_t x6043 = UINT8_MAX;
	uint32_t x6044 = 2466U;
	static volatile uint64_t t65 = 11465228LLU;

    t65 = (x6041<<(x6042-(x6043/x6044)));

    if (t65 != 17870283321406128128LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x6149 = 107697LL;
	int8_t x6152 = -2;
	volatile int64_t t66 = 867LL;

    t66 = (x6149<<(x6150-(x6151/x6152)));

    if (t66 != 55140864LL) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x6197 = INT16_MAX;
	volatile int8_t x6198 = 2;
	int8_t x6199 = INT8_MIN;
	volatile int32_t x6200 = INT32_MAX;
	int32_t t67 = -1;

    t67 = (x6197<<(x6198-(x6199/x6200)));

    if (t67 != 131068) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x6261 = 10647508U;
	int8_t x6262 = -1;
	uint16_t x6263 = 222U;
	int8_t x6264 = INT8_MIN;
	volatile uint32_t t68 = 10961779U;

    t68 = (x6261<<(x6262-(x6263/x6264)));

    if (t68 != 10647508U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x6273 = 826LLU;
	static uint8_t x6274 = 18U;
	int16_t x6275 = -1;
	volatile int64_t x6276 = INT64_MAX;
	volatile uint64_t t69 = 359809553LLU;

    t69 = (x6273<<(x6274-(x6275/x6276)));

    if (t69 != 216530944LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x6485 = UINT8_MAX;
	int8_t x6486 = 7;
	int32_t x6487 = 47273198;
	int32_t x6488 = INT32_MAX;
	static int32_t t70 = 17588310;

    t70 = (x6485<<(x6486-(x6487/x6488)));

    if (t70 != 32640) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint16_t x6657 = 53U;
	uint16_t x6658 = 1U;
	uint8_t x6659 = 15U;
	static int32_t x6660 = -1;

    t71 = (x6657<<(x6658-(x6659/x6660)));

    if (t71 != 3473408) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x6721 = 22790241159982838LLU;
	int16_t x6723 = 68;
	volatile uint64_t t72 = 64667LLU;

    t72 = (x6721<<(x6722-(x6723/x6724)));

    if (t72 != 91160964639931352LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x6746 = -1LL;
	uint16_t x6747 = UINT16_MAX;
	int16_t x6748 = INT16_MIN;
	int32_t t73 = -311398;

    t73 = (x6745<<(x6746-(x6747/x6748)));

    if (t73 != 667) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x7041 = INT16_MAX;
	int8_t x7042 = 0;
	int8_t x7043 = -3;
	volatile int32_t t74 = -1;

    t74 = (x7041<<(x7042-(x7043/x7044)));

    if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x7073 = INT16_MAX;
	int16_t x7074 = 1;

    t75 = (x7073<<(x7074-(x7075/x7076)));

    if (t75 != 65534) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint64_t x7093 = 8253793830470942912LLU;
	static volatile uint16_t x7096 = UINT16_MAX;
	uint64_t t76 = 6908521056109993108LLU;

    t76 = (x7093<<(x7094-(x7095/x7096)));

    if (t76 != 16507587660941885824LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t t77 = 1798221;

    t77 = (x7285<<(x7286-(x7287/x7288)));

    if (t77 != 510) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x7309 = 1179;
	volatile uint16_t x7310 = 3U;
	int32_t x7311 = 180;
	int64_t x7312 = INT64_MIN;
	static int32_t t78 = 86254;

    t78 = (x7309<<(x7310-(x7311/x7312)));

    if (t78 != 9432) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x7437 = 1050;
	int8_t x7440 = -19;
	volatile int32_t t79 = 5973;

    t79 = (x7437<<(x7438-(x7439/x7440)));

    if (t79 != 4200) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x7533 = 8377188U;
	int8_t x7534 = 7;
	int8_t x7536 = INT8_MIN;
	uint32_t t80 = 400U;

    t80 = (x7533<<(x7534-(x7535/x7536)));

    if (t80 != 1072280064U) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint32_t x7569 = 127U;
	static volatile uint32_t x7570 = UINT32_MAX;
	static volatile uint16_t x7572 = 1U;
	uint32_t t81 = 0U;

    t81 = (x7569<<(x7570-(x7571/x7572)));

    if (t81 != 127U) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x7601 = 60U;
	volatile int8_t x7602 = 6;
	uint16_t x7603 = UINT16_MAX;
	int16_t x7604 = INT16_MAX;
	int32_t t82 = 2;

    t82 = (x7601<<(x7602-(x7603/x7604)));

    if (t82 != 960) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint64_t x7805 = UINT64_MAX;
	volatile uint16_t x7806 = 35U;
	volatile uint64_t x7807 = 60LLU;
	int16_t x7808 = INT16_MIN;
	uint64_t t83 = 555058LLU;

    t83 = (x7805<<(x7806-(x7807/x7808)));

    if (t83 != 18446744039349813248LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x8165 = UINT32_MAX;
	static uint8_t x8166 = 1U;
	volatile uint8_t x8167 = UINT8_MAX;
	int8_t x8168 = -26;
	volatile uint32_t t84 = 173961486U;

    t84 = (x8165<<(x8166-(x8167/x8168)));

    if (t84 != 4294966272U) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x8273 = 36202LL;
	static uint8_t x8274 = 0U;
	static volatile int8_t x8276 = INT8_MIN;
	volatile int64_t t85 = -2LL;

    t85 = (x8273<<(x8274-(x8275/x8276)));

    if (t85 != 36202LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x8353 = 3;
	uint8_t x8354 = 1U;
	volatile uint32_t x8355 = UINT32_MAX;
	int8_t x8356 = 1;
	static int32_t t86 = 64789;

    t86 = (x8353<<(x8354-(x8355/x8356)));

    if (t86 != 12) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x8433 = 898779755;
	static int32_t x8434 = 1;
	volatile int8_t x8435 = INT8_MIN;
	uint64_t x8436 = UINT64_MAX;
	int32_t t87 = 133436;

    t87 = (x8433<<(x8434-(x8435/x8436)));

    if (t87 != 1797559510) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x8469 = 491U;
	static int16_t x8472 = INT16_MIN;
	volatile int32_t t88 = -7;

    t88 = (x8469<<(x8470-(x8471/x8472)));

    if (t88 != 1964) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x8761 = 484604400LLU;
	uint32_t x8762 = 8U;
	int8_t x8763 = INT8_MAX;
	uint8_t x8764 = 90U;

    t89 = (x8761<<(x8762-(x8763/x8764)));

    if (t89 != 62029363200LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint16_t x8921 = 22U;
	uint32_t x8922 = UINT32_MAX;
	int8_t x8923 = INT8_MIN;
	int8_t x8924 = 18;

    t90 = (x8921<<(x8922-(x8923/x8924)));

    if (t90 != 1408) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x8949 = 5U;
	volatile uint8_t x8950 = 26U;
	int32_t x8951 = -1;
	int8_t x8952 = -10;
	static int32_t t91 = 1;

    t91 = (x8949<<(x8950-(x8951/x8952)));

    if (t91 != 335544320) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x9013 = UINT8_MAX;
	uint16_t x9014 = 0U;
	int16_t x9016 = -1;
	volatile int32_t t92 = 862;

    t92 = (x9013<<(x9014-(x9015/x9016)));

    if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x9017 = 614061LL;
	uint8_t x9018 = 14U;
	volatile int64_t x9019 = 3282610705966538400LL;
	int64_t x9020 = INT64_MAX;

    t93 = (x9017<<(x9018-(x9019/x9020)));

    if (t93 != 10060775424LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x9021 = 4720U;
	static int8_t x9023 = INT8_MIN;
	uint16_t x9024 = UINT16_MAX;
	volatile int32_t t94 = 45251005;

    t94 = (x9021<<(x9022-(x9023/x9024)));

    if (t94 != 4720) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x9136 = INT64_MIN;

    t95 = (x9133<<(x9134-(x9135/x9136)));

    if (t95 != 32768) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x9142 = 1U;
	int8_t x9144 = -3;

    t96 = (x9141<<(x9142-(x9143/x9144)));

    if (t96 != 20U) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x9269 = UINT8_MAX;
	volatile uint64_t x9270 = 2LLU;
	static int8_t x9271 = INT8_MAX;
	uint16_t x9272 = UINT16_MAX;
	static volatile int32_t t97 = 420;

    t97 = (x9269<<(x9270-(x9271/x9272)));

    if (t97 != 1020) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x9289 = 1793562U;
	volatile uint64_t x9290 = 2LLU;
	uint16_t x9292 = UINT16_MAX;
	uint32_t t98 = 963U;

    t98 = (x9289<<(x9290-(x9291/x9292)));

    if (t98 != 7174248U) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x9346 = 7U;
	static int32_t x9347 = INT32_MAX;
	uint64_t x9348 = UINT64_MAX;

    t99 = (x9345<<(x9346-(x9347/x9348)));

    if (t99 != 128) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int32_t x9349 = INT32_MAX;
	static int64_t x9351 = -1LL;
	int64_t x9352 = -466336618326645802LL;
	static volatile int32_t t100 = INT32_MAX;

    t100 = (x9349<<(x9350-(x9351/x9352)));

    if (t100 != INT32_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x9377 = 6206640636LLU;
	static int8_t x9378 = 0;
	static uint64_t x9379 = 20371738LLU;
	int32_t x9380 = INT32_MIN;

    t101 = (x9377<<(x9378-(x9379/x9380)));

    if (t101 != 6206640636LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x9422 = 3;
	volatile uint32_t x9423 = 34U;
	int32_t x9424 = INT32_MIN;
	volatile uint64_t t102 = 885868580074312LLU;

    t102 = (x9421<<(x9422-(x9423/x9424)));

    if (t102 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x9465 = 10;
	static uint16_t x9466 = 7U;
	static uint16_t x9467 = 1U;
	int32_t x9468 = INT32_MIN;
	volatile int32_t t103 = 81498250;

    t103 = (x9465<<(x9466-(x9467/x9468)));

    if (t103 != 1280) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x9505 = 30U;
	uint64_t x9506 = 3LLU;
	uint16_t x9507 = UINT16_MAX;
	static int32_t t104 = 20;

    t104 = (x9505<<(x9506-(x9507/x9508)));

    if (t104 != 240) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint8_t x9513 = 61U;
	int16_t x9514 = 1;
	static volatile uint64_t x9515 = UINT64_MAX;
	volatile int32_t t105 = -83870814;

    t105 = (x9513<<(x9514-(x9515/x9516)));

    if (t105 != 61) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x9602 = 1U;
	uint32_t x9603 = UINT32_MAX;
	static int64_t x9604 = INT64_MIN;
	int32_t t106 = 7249;

    t106 = (x9601<<(x9602-(x9603/x9604)));

    if (t106 != 90) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x9753 = 16275U;
	int32_t x9754 = -1;
	uint32_t x9755 = UINT32_MAX;
	int64_t x9756 = -1003901426LL;
	int32_t t107 = -2;

    t107 = (x9753<<(x9754-(x9755/x9756)));

    if (t107 != 130200) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x9765 = 622440410372673LL;
	uint16_t x9766 = 12U;
	int32_t x9767 = INT32_MIN;
	volatile int64_t t108 = 334LL;

    t108 = (x9765<<(x9766-(x9767/x9768)));

    if (t108 != 2549515920886468608LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile uint32_t x9789 = 77258U;
	int16_t x9791 = -4;
	int8_t x9792 = INT8_MIN;
	volatile uint32_t t109 = 621U;

    t109 = (x9789<<(x9790-(x9791/x9792)));

    if (t109 != 3072851968U) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x9845 = INT16_MAX;
	uint8_t x9846 = 13U;
	static int32_t t110 = -48127289;

    t110 = (x9845<<(x9846-(x9847/x9848)));

    if (t110 != 268427264) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x9869 = 1303563979871703LLU;
	uint16_t x9870 = 0U;
	static int16_t x9871 = INT16_MIN;
	uint64_t x9872 = UINT64_MAX;

    t111 = (x9869<<(x9870-(x9871/x9872)));

    if (t111 != 1303563979871703LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x9949 = UINT16_MAX;
	int8_t x9950 = 12;
	int32_t x9951 = 2;
	volatile int64_t x9952 = INT64_MAX;
	int32_t t112 = -5;

    t112 = (x9949<<(x9950-(x9951/x9952)));

    if (t112 != 268431360) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x10033 = UINT64_MAX;
	int16_t x10034 = 1;
	int8_t x10035 = -29;
	int64_t x10036 = INT64_MIN;
	uint64_t t113 = 6757893294719135173LLU;

    t113 = (x10033<<(x10034-(x10035/x10036)));

    if (t113 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint32_t x10085 = UINT32_MAX;
	int16_t x10087 = 259;
	uint16_t x10088 = 1191U;
	uint32_t t114 = 582U;

    t114 = (x10085<<(x10086-(x10087/x10088)));

    if (t114 != 4160749568U) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x10257 = UINT32_MAX;
	int64_t x10260 = -1LL;
	static uint32_t t115 = 53465U;

    t115 = (x10257<<(x10258-(x10259/x10260)));

    if (t115 != 4286578688U) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int8_t x10261 = INT8_MAX;
	uint8_t x10263 = 21U;
	int8_t x10264 = INT8_MIN;
	int32_t t116 = -181;

    t116 = (x10261<<(x10262-(x10263/x10264)));

    if (t116 != 16256) { NG(); } else { ; }
	
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


    return 0;
}

