
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

uint32_t x154 = 23U;
int64_t x155 = INT64_MIN;
uint64_t x171 = 0LLU;
int32_t x172 = 1;
int16_t x179 = 6;
uint16_t x239 = 92U;
volatile int64_t t4 = 65005LL;
int8_t x259 = 19;
int32_t t6 = 236821439;
int32_t x384 = -1;
static int16_t x402 = -1;
volatile int32_t x404 = INT32_MIN;
int64_t x458 = -1LL;
uint64_t t9 = 9192579LLU;
static uint8_t x515 = UINT8_MAX;
uint32_t x626 = 115833049U;
int8_t x903 = -1;
uint64_t x1097 = 181776179405730LLU;
int16_t x1189 = 810;
static int16_t x1274 = -47;
int32_t x1375 = -1;
volatile int64_t t19 = INT64_MAX;
volatile int64_t x1586 = -4339869LL;
int64_t x1641 = INT64_MIN;
static int32_t x1943 = INT32_MIN;
int8_t x1962 = -1;
uint64_t t29 = 510965711311916LLU;
int64_t x2109 = -1LL;
int16_t x2110 = INT16_MIN;
uint16_t x2358 = 756U;
volatile int32_t t33 = -87564310;
uint32_t t35 = 39849481U;
int16_t x2433 = INT16_MIN;
uint32_t x2741 = 126U;
static int32_t x2797 = 425213031;
static int32_t x2971 = 25;
int32_t x2972 = 14;
int8_t x3156 = INT8_MIN;
int8_t x3223 = -1;
int8_t x3316 = -1;
int16_t x3357 = INT16_MAX;
uint64_t x3359 = UINT64_MAX;
uint8_t x3401 = 0U;
uint32_t x3434 = 14259648U;
uint8_t x3706 = 82U;
uint64_t t52 = 2906787LLU;
uint64_t x4438 = 40663046958LLU;
uint8_t x4469 = UINT8_MAX;
int32_t x4472 = -1;
static uint64_t x4486 = 2231947LLU;
int32_t x4488 = -1;
uint64_t x4548 = 3LLU;
uint16_t x4634 = UINT16_MAX;
int32_t x4725 = INT32_MIN;
volatile uint8_t x4728 = 7U;
int64_t x4769 = INT64_MIN;
volatile int32_t x4771 = -1;
int8_t x4812 = -1;
int32_t x4955 = INT32_MAX;
static int64_t x5029 = 269121732295LL;
uint32_t x5078 = 1301598U;
uint32_t t67 = 3980872U;
uint16_t x5259 = UINT16_MAX;
int32_t t68 = -130235;
int16_t x5564 = -7;
volatile uint64_t x5675 = UINT64_MAX;
volatile int8_t x5766 = INT8_MIN;
volatile uint16_t x5767 = UINT16_MAX;
int8_t x5872 = INT8_MIN;
volatile int32_t x5938 = -37;
uint64_t x5940 = UINT64_MAX;
int16_t x5949 = INT16_MIN;
int16_t x6065 = -23;
volatile uint16_t x6067 = UINT16_MAX;
volatile int32_t t79 = 501530;
volatile int8_t x6147 = -1;
uint64_t x6177 = 8413938225050LLU;
uint32_t x6178 = UINT32_MAX;
static volatile uint64_t x6242 = UINT64_MAX;
static uint64_t t83 = 2035248LLU;
uint64_t x6310 = 7006321LLU;
int16_t x6319 = -1;
volatile int64_t t85 = -1110976614511304428LL;
uint32_t x6470 = UINT32_MAX;
int8_t x6774 = INT8_MAX;
volatile int64_t x6775 = -1LL;
int16_t x7194 = INT16_MAX;
int8_t x7196 = -1;
volatile int8_t x7201 = INT8_MIN;
static int32_t x7202 = -3583;
static volatile int8_t x7221 = 1;
volatile int32_t x7231 = INT32_MIN;
int16_t x7310 = INT16_MIN;
volatile int32_t x7349 = INT32_MAX;
uint32_t t96 = 125068U;
static int32_t x7445 = -7;
int8_t x7527 = -1;
uint32_t x7551 = 1U;
static int32_t x7632 = -1;
int64_t x7678 = INT64_MIN;
volatile uint32_t x8055 = UINT32_MAX;
int8_t x8230 = 1;
volatile uint64_t x8269 = UINT64_MAX;
int16_t x8303 = -123;
int8_t x8304 = INT8_MIN;
static volatile int16_t x8394 = 0;
uint64_t x8716 = UINT64_MAX;
uint64_t x8777 = 105310000085LLU;
uint64_t x8819 = UINT64_MAX;
int32_t x8872 = -1;
int16_t x8897 = INT16_MIN;
uint64_t x9209 = UINT64_MAX;
int8_t x9210 = 61;
int64_t x9212 = INT64_MIN;
static int8_t x9425 = INT8_MAX;
static int32_t t119 = -27162;
int8_t x9670 = INT8_MAX;
int16_t x9833 = INT16_MIN;
int8_t x9835 = -36;
uint64_t x10020 = UINT64_MAX;
volatile int32_t t124 = -6089114;
volatile int64_t x10148 = INT64_MIN;
uint8_t x10190 = 100U;


void f0(void) {
    	int32_t x153 = -1;
	int64_t x156 = INT64_MIN;
	static uint32_t t0 = 5459885U;

    t0 = ((x153^x154)<<(x155^x156));

    if (t0 != 4294967272U) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x169 = 843618112;
	static uint8_t x170 = 78U;
	volatile int32_t t1 = 1;

    t1 = ((x169^x170)<<(x171^x172));

    if (t1 != 1687236124) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x177 = UINT16_MAX;
	volatile int16_t x178 = 119;
	int8_t x180 = 1;
	int32_t t2 = 1940181;

    t2 = ((x177^x178)<<(x179^x180));

    if (t2 != 8373248) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x213 = 179359382U;
	uint16_t x214 = 1U;
	int8_t x215 = -21;
	uint64_t x216 = UINT64_MAX;
	uint32_t t3 = 2340U;

    t3 = ((x213^x214)<<(x215^x216));

    if (t3 != 3916431360U) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x237 = -1769584LL;
	int32_t x238 = -1;
	volatile int8_t x240 = INT8_MAX;

    t4 = ((x237^x238)<<(x239^x240));

    if (t4 != 60802408900460544LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x257 = INT8_MAX;
	static uint32_t x258 = 331U;
	static int16_t x260 = 1;
	static volatile uint32_t t5 = 1U;

    t5 = ((x257^x258)<<(x259^x260));

    if (t5 != 80740352U) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x269 = INT32_MAX;
	int16_t x270 = INT16_MAX;
	static int64_t x271 = INT64_MIN;
	volatile int64_t x272 = INT64_MIN;

    t6 = ((x269^x270)<<(x271^x272));

    if (t6 != 2147450880) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint16_t x381 = 10U;
	int16_t x382 = 857;
	int16_t x383 = -1;
	volatile int32_t t7 = 126;

    t7 = ((x381^x382)<<(x383^x384));

    if (t7 != 851) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x401 = -6642610;
	static int32_t x403 = INT32_MIN;
	int32_t t8 = -72;

    t8 = ((x401^x402)<<(x403^x404));

    if (t8 != 6642609) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint64_t x457 = UINT64_MAX;
	uint8_t x459 = 12U;
	static uint8_t x460 = 27U;

    t9 = ((x457^x458)<<(x459^x460));

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint64_t x513 = 5808304LLU;
	int64_t x514 = 206601050LL;
	uint8_t x516 = UINT8_MAX;
	static volatile uint64_t t10 = 29515197043LLU;

    t10 = ((x513^x514)<<(x515^x516));

    if (t10 != 201907178LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x625 = UINT8_MAX;
	int8_t x627 = INT8_MAX;
	int8_t x628 = INT8_MAX;
	volatile uint32_t t11 = 6746U;

    t11 = ((x625^x626)<<(x627^x628));

    if (t11 != 115832870U) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int16_t x901 = -383;
	uint64_t x902 = 56LLU;
	static volatile uint32_t x904 = UINT32_MAX;
	static volatile uint64_t t12 = 93612LLU;

    t12 = ((x901^x902)<<(x903^x904));

    if (t12 != 18446744073709551289LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x1098 = INT64_MAX;
	static uint8_t x1099 = 62U;
	uint8_t x1100 = 19U;
	uint64_t t13 = 7846772251LLU;

    t13 = ((x1097^x1098)<<(x1099^x1100));

    if (t13 != 13514071028715749376LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x1190 = 408546LL;
	int64_t x1191 = -1LL;
	static int32_t x1192 = -1;
	int64_t t14 = 1259LL;

    t14 = ((x1189^x1190)<<(x1191^x1192));

    if (t14 != 407752LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint32_t x1233 = UINT32_MAX;
	volatile int32_t x1234 = 292;
	int16_t x1235 = INT16_MIN;
	int16_t x1236 = INT16_MIN;
	uint32_t t15 = 315U;

    t15 = ((x1233^x1234)<<(x1235^x1236));

    if (t15 != 4294967003U) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x1249 = INT8_MIN;
	int32_t x1250 = INT32_MIN;
	uint32_t x1251 = UINT32_MAX;
	int32_t x1252 = -1;
	volatile int32_t t16 = -10;

    t16 = ((x1249^x1250)<<(x1251^x1252));

    if (t16 != 2147483520) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint16_t x1261 = 7185U;
	uint32_t x1262 = UINT32_MAX;
	int64_t x1263 = INT64_MIN;
	int64_t x1264 = INT64_MIN;
	uint32_t t17 = 47U;

    t17 = ((x1261^x1262)<<(x1263^x1264));

    if (t17 != 4294960110U) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x1273 = -1;
	int8_t x1275 = -4;
	int64_t x1276 = -1LL;
	static volatile int32_t t18 = -1283;

    t18 = ((x1273^x1274)<<(x1275^x1276));

    if (t18 != 368) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x1373 = INT64_MIN;
	int8_t x1374 = -1;
	uint64_t x1376 = UINT64_MAX;

    t19 = ((x1373^x1374)<<(x1375^x1376));

    if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x1581 = UINT8_MAX;
	static uint16_t x1582 = UINT16_MAX;
	static int16_t x1583 = -1;
	uint32_t x1584 = UINT32_MAX;
	int32_t t20 = 45045;

    t20 = ((x1581^x1582)<<(x1583^x1584));

    if (t20 != 65280) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int16_t x1585 = -180;
	volatile int8_t x1587 = -1;
	uint32_t x1588 = UINT32_MAX;
	volatile int64_t t21 = -24909953577132LL;

    t21 = ((x1585^x1586)<<(x1587^x1588));

    if (t21 != 4339759LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x1642 = INT16_MIN;
	int16_t x1643 = -1;
	int8_t x1644 = -1;
	int64_t t22 = -1615LL;

    t22 = ((x1641^x1642)<<(x1643^x1644));

    if (t22 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x1653 = -1;
	uint32_t x1654 = 13933257U;
	int16_t x1655 = INT16_MIN;
	int16_t x1656 = INT16_MIN;
	static volatile uint32_t t23 = 408322U;

    t23 = ((x1653^x1654)<<(x1655^x1656));

    if (t23 != 4281034038U) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x1749 = INT8_MAX;
	uint8_t x1750 = UINT8_MAX;
	uint8_t x1751 = 23U;
	int8_t x1752 = 0;
	volatile int32_t t24 = 68162;

    t24 = ((x1749^x1750)<<(x1751^x1752));

    if (t24 != 1073741824) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x1941 = INT64_MIN;
	int32_t x1942 = INT32_MIN;
	int32_t x1944 = INT32_MIN;
	volatile int64_t t25 = 345280494053783666LL;

    t25 = ((x1941^x1942)<<(x1943^x1944));

    if (t25 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x1961 = INT8_MIN;
	uint8_t x1963 = 1U;
	uint8_t x1964 = 4U;
	volatile int32_t t26 = -3;

    t26 = ((x1961^x1962)<<(x1963^x1964));

    if (t26 != 4064) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x1997 = -22;
	uint64_t x1998 = 850201316276775LLU;
	int8_t x1999 = INT8_MIN;
	static int8_t x2000 = INT8_MIN;
	static volatile uint64_t t27 = 474656947738LLU;

    t27 = ((x1997^x1998)<<(x1999^x2000));

    if (t27 != 18445893872393274829LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint32_t x2053 = UINT32_MAX;
	int16_t x2054 = INT16_MAX;
	volatile int64_t x2055 = -14LL;
	static int16_t x2056 = -1;
	volatile uint32_t t28 = 30786U;

    t28 = ((x2053^x2054)<<(x2055^x2056));

    if (t28 != 4026531840U) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x2089 = -2175;
	uint64_t x2090 = 595871081408934254LLU;
	int32_t x2091 = -1;
	static int32_t x2092 = -1;

    t29 = ((x2089^x2090)<<(x2091^x2092));

    if (t29 != 17850872992300615407LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x2111 = INT16_MIN;
	int16_t x2112 = INT16_MIN;
	volatile int64_t t30 = -135171393877LL;

    t30 = ((x2109^x2110)<<(x2111^x2112));

    if (t30 != 32767LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x2265 = INT8_MIN;
	static volatile int32_t x2266 = -1;
	volatile uint64_t x2267 = UINT64_MAX;
	int8_t x2268 = -2;
	volatile int32_t t31 = -5348507;

    t31 = ((x2265^x2266)<<(x2267^x2268));

    if (t31 != 254) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x2289 = 338LL;
	int64_t x2290 = INT64_MAX;
	int32_t x2291 = INT32_MIN;
	int32_t x2292 = INT32_MIN;
	static int64_t t32 = -4943513920500LL;

    t32 = ((x2289^x2290)<<(x2291^x2292));

    if (t32 != 9223372036854775469LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x2357 = INT16_MAX;
	int16_t x2359 = -1;
	uint64_t x2360 = UINT64_MAX;

    t33 = ((x2357^x2358)<<(x2359^x2360));

    if (t33 != 32011) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x2369 = -2662290989389LL;
	int32_t x2370 = -1;
	static int32_t x2371 = -2;
	int16_t x2372 = -1;
	static volatile int64_t t34 = -287311469LL;

    t34 = ((x2369^x2370)<<(x2371^x2372));

    if (t34 != 5324581978776LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint8_t x2373 = UINT8_MAX;
	volatile uint32_t x2374 = 276715262U;
	volatile int8_t x2375 = INT8_MIN;
	int8_t x2376 = INT8_MIN;

    t35 = ((x2373^x2374)<<(x2375^x2376));

    if (t35 != 276715009U) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x2405 = INT64_MIN;
	volatile int32_t x2406 = INT32_MIN;
	int64_t x2407 = INT64_MIN;
	int64_t x2408 = INT64_MIN;
	static int64_t t36 = -41285882LL;

    t36 = ((x2405^x2406)<<(x2407^x2408));

    if (t36 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x2434 = INT32_MIN;
	int16_t x2435 = -1;
	static uint64_t x2436 = UINT64_MAX;
	volatile int32_t t37 = 334;

    t37 = ((x2433^x2434)<<(x2435^x2436));

    if (t37 != 2147450880) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x2742 = INT32_MIN;
	int64_t x2743 = INT64_MIN;
	static int64_t x2744 = INT64_MIN;
	static volatile uint32_t t38 = 14322U;

    t38 = ((x2741^x2742)<<(x2743^x2744));

    if (t38 != 2147483774U) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint32_t x2798 = UINT32_MAX;
	static int32_t x2799 = 6;
	int16_t x2800 = 0;
	static volatile uint32_t t39 = 21968895U;

    t39 = ((x2797^x2798)<<(x2799^x2800));

    if (t39 != 2851137024U) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x2969 = UINT64_MAX;
	int64_t x2970 = 978162408586729383LL;
	volatile uint64_t t40 = 1351238101995764LLU;

    t40 = ((x2969^x2970)<<(x2971^x2972));

    if (t40 != 4352665354816716800LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x3017 = INT16_MAX;
	int8_t x3018 = INT8_MAX;
	volatile int64_t x3019 = INT64_MIN;
	int64_t x3020 = INT64_MIN;
	int32_t t41 = 14723;

    t41 = ((x3017^x3018)<<(x3019^x3020));

    if (t41 != 32640) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x3153 = INT16_MIN;
	volatile int8_t x3154 = -1;
	int8_t x3155 = INT8_MIN;
	volatile int32_t t42 = 744332;

    t42 = ((x3153^x3154)<<(x3155^x3156));

    if (t42 != 32767) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x3221 = UINT8_MAX;
	static volatile uint16_t x3222 = 1010U;
	int8_t x3224 = -1;
	int32_t t43 = 0;

    t43 = ((x3221^x3222)<<(x3223^x3224));

    if (t43 != 781) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x3313 = 529034500U;
	uint64_t x3314 = UINT64_MAX;
	uint64_t x3315 = UINT64_MAX;
	volatile uint64_t t44 = 86009LLU;

    t44 = ((x3313^x3314)<<(x3315^x3316));

    if (t44 != 18446744073180517115LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x3358 = 365LL;
	uint64_t x3360 = UINT64_MAX;
	static volatile int64_t t45 = 8LL;

    t45 = ((x3357^x3358)<<(x3359^x3360));

    if (t45 != 32402LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint64_t x3402 = 954LLU;
	static int8_t x3403 = INT8_MAX;
	static int16_t x3404 = 69;
	volatile uint64_t t46 = 1804133LLU;

    t46 = ((x3401^x3402)<<(x3403^x3404));

    if (t46 != 16717361816799281152LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint32_t x3433 = 1204035614U;
	int8_t x3435 = -24;
	static int16_t x3436 = -17;
	volatile uint32_t t47 = 12664867U;

    t47 = ((x3433^x3434)<<(x3435^x3436));

    if (t47 != 2396712704U) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint32_t x3705 = 1208424U;
	volatile uint32_t x3707 = UINT32_MAX;
	static int16_t x3708 = -1;
	uint32_t t48 = 13U;

    t48 = ((x3705^x3706)<<(x3707^x3708));

    if (t48 != 1208378U) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x3729 = -1;
	uint32_t x3730 = UINT32_MAX;
	int64_t x3731 = INT64_MIN;
	int64_t x3732 = INT64_MIN;
	static uint32_t t49 = 588U;

    t49 = ((x3729^x3730)<<(x3731^x3732));

    if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x4065 = 39;
	volatile uint16_t x4066 = 2575U;
	int32_t x4067 = -1;
	uint32_t x4068 = UINT32_MAX;
	volatile int32_t t50 = 3;

    t50 = ((x4065^x4066)<<(x4067^x4068));

    if (t50 != 2600) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x4197 = INT8_MAX;
	uint16_t x4198 = UINT16_MAX;
	static uint64_t x4199 = UINT64_MAX;
	uint64_t x4200 = UINT64_MAX;
	int32_t t51 = 143;

    t51 = ((x4197^x4198)<<(x4199^x4200));

    if (t51 != 65408) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x4337 = -1;
	volatile uint64_t x4338 = UINT64_MAX;
	volatile int16_t x4339 = -73;
	int8_t x4340 = INT8_MIN;

    t52 = ((x4337^x4338)<<(x4339^x4340));

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x4437 = 19140031;
	int16_t x4439 = -1;
	int8_t x4440 = -1;
	uint64_t t53 = 746LLU;

    t53 = ((x4437^x4438)<<(x4439^x4440));

    if (t53 != 40643909265LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x4470 = 0;
	int16_t x4471 = -1;
	volatile int32_t t54 = -46591;

    t54 = ((x4469^x4470)<<(x4471^x4472));

    if (t54 != 255) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x4485 = -1;
	volatile int64_t x4487 = -1LL;
	static uint64_t t55 = 3398516227906192085LLU;

    t55 = ((x4485^x4486)<<(x4487^x4488));

    if (t55 != 18446744073707319668LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x4489 = -1;
	uint64_t x4490 = 2LLU;
	int32_t x4491 = -59;
	int16_t x4492 = -1;
	uint64_t t56 = 4483915742056972768LLU;

    t56 = ((x4489^x4490)<<(x4491^x4492));

    if (t56 != 17582052945254416384LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x4545 = INT64_MIN;
	int64_t x4546 = INT64_MIN;
	uint8_t x4547 = 45U;
	volatile int64_t t57 = 336LL;

    t57 = ((x4545^x4546)<<(x4547^x4548));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x4633 = 5972537U;
	volatile int16_t x4635 = -6;
	uint32_t x4636 = UINT32_MAX;
	volatile uint32_t t58 = 46879U;

    t58 = ((x4633^x4634)<<(x4635^x4636));

    if (t58 != 192657600U) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x4701 = INT32_MIN;
	uint64_t x4702 = 17809941318245LLU;
	uint32_t x4703 = 38U;
	int16_t x4704 = 3;
	static volatile uint64_t t59 = 17941091397825LLU;

    t59 = ((x4701^x4702)<<(x4703^x4704));

    if (t59 != 7438060509657563136LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x4726 = 199308584800327LLU;
	uint16_t x4727 = 23U;
	volatile uint64_t t60 = 23432453LLU;

    t60 = ((x4725^x4726)<<(x4727^x4728));

    if (t60 != 5384798161179443200LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x4770 = 161LLU;
	int8_t x4772 = -62;
	uint64_t t61 = 1LLU;

    t61 = ((x4769^x4770)<<(x4771^x4772));

    if (t61 != 2305843009213693952LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x4805 = -2095;
	uint32_t x4806 = 105U;
	static int64_t x4807 = INT64_MAX;
	int64_t x4808 = INT64_MAX;
	volatile uint32_t t62 = 12165646U;

    t62 = ((x4805^x4806)<<(x4807^x4808));

    if (t62 != 4294965176U) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x4809 = INT8_MAX;
	volatile uint64_t x4810 = 298292LLU;
	int8_t x4811 = -1;
	volatile uint64_t t63 = 192632LLU;

    t63 = ((x4809^x4810)<<(x4811^x4812));

    if (t63 != 298315LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint32_t x4953 = 288U;
	static uint64_t x4954 = 3080138LLU;
	int32_t x4956 = INT32_MAX;
	uint64_t t64 = 4187989015828319LLU;

    t64 = ((x4953^x4954)<<(x4955^x4956));

    if (t64 != 3079914LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x5030 = 8U;
	static int8_t x5031 = -1;
	int16_t x5032 = -1;
	static int64_t t65 = 69LL;

    t65 = ((x5029^x5030)<<(x5031^x5032));

    if (t65 != 269121732303LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x5053 = -1;
	int8_t x5054 = INT8_MIN;
	uint8_t x5055 = 33U;
	uint32_t x5056 = 35U;
	volatile int32_t t66 = -186;

    t66 = ((x5053^x5054)<<(x5055^x5056));

    if (t66 != 508) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x5077 = -2;
	uint64_t x5079 = UINT64_MAX;
	int64_t x5080 = -1LL;

    t67 = ((x5077^x5078)<<(x5079^x5080));

    if (t67 != 4293665696U) { NG(); } else { ; }
	
}

void f68(void) {
    	static int32_t x5257 = 193476;
	static volatile uint8_t x5258 = UINT8_MAX;
	uint16_t x5260 = UINT16_MAX;

    t68 = ((x5257^x5258)<<(x5259^x5260));

    if (t68 != 193339) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x5425 = -7;
	int16_t x5426 = INT16_MIN;
	static volatile int16_t x5427 = 0;
	uint8_t x5428 = 4U;
	volatile int32_t t69 = -145518;

    t69 = ((x5425^x5426)<<(x5427^x5428));

    if (t69 != 524176) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x5561 = -14;
	int64_t x5562 = -3LL;
	uint64_t x5563 = UINT64_MAX;
	volatile int64_t t70 = 1926LL;

    t70 = ((x5561^x5562)<<(x5563^x5564));

    if (t70 != 960LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x5565 = 2528U;
	uint32_t x5566 = 16733070U;
	static uint64_t x5567 = UINT64_MAX;
	int32_t x5568 = -1;
	uint32_t t71 = 500768272U;

    t71 = ((x5565^x5566)<<(x5567^x5568));

    if (t71 != 16734830U) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x5605 = 0U;
	uint8_t x5606 = 21U;
	int32_t x5607 = -1;
	volatile uint32_t x5608 = UINT32_MAX;
	int32_t t72 = 136637643;

    t72 = ((x5605^x5606)<<(x5607^x5608));

    if (t72 != 21) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x5673 = 401U;
	uint8_t x5674 = 1U;
	int64_t x5676 = -1LL;
	int32_t t73 = -1836764;

    t73 = ((x5673^x5674)<<(x5675^x5676));

    if (t73 != 400) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x5701 = INT16_MAX;
	volatile uint8_t x5702 = 3U;
	int16_t x5703 = -3;
	uint64_t x5704 = UINT64_MAX;
	volatile int32_t t74 = -5;

    t74 = ((x5701^x5702)<<(x5703^x5704));

    if (t74 != 131056) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x5765 = INT64_MIN;
	uint16_t x5768 = UINT16_MAX;
	int64_t t75 = 223951896428048169LL;

    t75 = ((x5765^x5766)<<(x5767^x5768));

    if (t75 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x5869 = UINT16_MAX;
	static uint32_t x5870 = UINT32_MAX;
	int8_t x5871 = INT8_MIN;
	static volatile uint32_t t76 = 18U;

    t76 = ((x5869^x5870)<<(x5871^x5872));

    if (t76 != 4294901760U) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint64_t x5937 = 0LLU;
	int16_t x5939 = -1;
	uint64_t t77 = 51960717441596LLU;

    t77 = ((x5937^x5938)<<(x5939^x5940));

    if (t77 != 18446744073709551579LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int32_t x5950 = -7;
	static volatile int16_t x5951 = 0;
	int16_t x5952 = 0;
	int32_t t78 = 2861;

    t78 = ((x5949^x5950)<<(x5951^x5952));

    if (t78 != 32761) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x6066 = INT16_MIN;
	uint16_t x6068 = UINT16_MAX;

    t79 = ((x6065^x6066)<<(x6067^x6068));

    if (t79 != 32745) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x6145 = INT16_MAX;
	uint16_t x6146 = 3U;
	uint32_t x6148 = UINT32_MAX;
	volatile int32_t t80 = 519795;

    t80 = ((x6145^x6146)<<(x6147^x6148));

    if (t80 != 32764) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x6149 = UINT32_MAX;
	int8_t x6150 = INT8_MAX;
	int64_t x6151 = INT64_MAX;
	int64_t x6152 = INT64_MAX;
	static volatile uint32_t t81 = 2U;

    t81 = ((x6149^x6150)<<(x6151^x6152));

    if (t81 != 4294967168U) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x6179 = -2;
	int16_t x6180 = -1;
	uint64_t t82 = 433971769413562LLU;

    t82 = ((x6177^x6178)<<(x6179^x6180));

    if (t82 != 16836077215946LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x6241 = -1;
	int16_t x6243 = INT16_MAX;
	int16_t x6244 = INT16_MAX;

    t83 = ((x6241^x6242)<<(x6243^x6244));

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile uint32_t x6309 = 6U;
	volatile int16_t x6311 = -1;
	volatile int8_t x6312 = -17;
	volatile uint64_t t84 = 9928LLU;

    t84 = ((x6309^x6310)<<(x6311^x6312));

    if (t84 != 459166646272LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x6317 = -990998661;
	static int64_t x6318 = INT64_MIN;
	static volatile uint32_t x6320 = UINT32_MAX;

    t85 = ((x6317^x6318)<<(x6319^x6320));

    if (t85 != 9223372035863777147LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x6329 = INT32_MIN;
	int32_t x6330 = INT32_MIN;
	int8_t x6331 = -16;
	volatile int32_t x6332 = -2;
	static int32_t t86 = 1;

    t86 = ((x6329^x6330)<<(x6331^x6332));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x6469 = 226775LLU;
	static int8_t x6471 = 13;
	volatile int8_t x6472 = 25;
	volatile uint64_t t87 = 29LLU;

    t87 = ((x6469^x6470)<<(x6471^x6472));

    if (t87 != 4503361835499520LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x6773 = 155635758;
	static uint64_t x6776 = UINT64_MAX;
	volatile int32_t t88 = 0;

    t88 = ((x6773^x6774)<<(x6775^x6776));

    if (t88 != 155635793) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x7133 = UINT32_MAX;
	int32_t x7134 = INT32_MIN;
	uint64_t x7135 = UINT64_MAX;
	int32_t x7136 = -1;
	uint32_t t89 = 1869643433U;

    t89 = ((x7133^x7134)<<(x7135^x7136));

    if (t89 != 2147483647U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x7193 = UINT64_MAX;
	uint64_t x7195 = UINT64_MAX;
	volatile uint64_t t90 = 308LLU;

    t90 = ((x7193^x7194)<<(x7195^x7196));

    if (t90 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x7203 = INT16_MIN;
	int16_t x7204 = INT16_MIN;
	volatile int32_t t91 = -876;

    t91 = ((x7201^x7202)<<(x7203^x7204));

    if (t91 != 3457) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint64_t x7209 = 1277190385511LLU;
	uint64_t x7210 = UINT64_MAX;
	int16_t x7211 = -1;
	uint64_t x7212 = UINT64_MAX;
	volatile uint64_t t92 = 253959580977069008LLU;

    t92 = ((x7209^x7210)<<(x7211^x7212));

    if (t92 != 18446742796519166104LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x7222 = UINT8_MAX;
	int32_t x7223 = INT32_MIN;
	static int32_t x7224 = INT32_MIN;
	volatile int32_t t93 = -8372403;

    t93 = ((x7221^x7222)<<(x7223^x7224));

    if (t93 != 254) { NG(); } else { ; }
	
}

void f94(void) {
    	static int16_t x7229 = 152;
	int16_t x7230 = 7;
	volatile int32_t x7232 = INT32_MIN;
	volatile int32_t t94 = -45448;

    t94 = ((x7229^x7230)<<(x7231^x7232));

    if (t94 != 159) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x7309 = INT16_MIN;
	static uint64_t x7311 = UINT64_MAX;
	static int64_t x7312 = -1LL;
	volatile int32_t t95 = -5;

    t95 = ((x7309^x7310)<<(x7311^x7312));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint32_t x7350 = 1346862907U;
	int32_t x7351 = -1;
	int16_t x7352 = -1;

    t96 = ((x7349^x7350)<<(x7351^x7352));

    if (t96 != 800620740U) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x7446 = INT32_MIN;
	int64_t x7447 = -1LL;
	uint64_t x7448 = UINT64_MAX;
	int32_t t97 = 1769485;

    t97 = ((x7445^x7446)<<(x7447^x7448));

    if (t97 != 2147483641) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x7481 = 2U;
	uint32_t x7482 = 273386670U;
	volatile uint64_t x7483 = UINT64_MAX;
	int16_t x7484 = -1;
	static volatile uint32_t t98 = 2U;

    t98 = ((x7481^x7482)<<(x7483^x7484));

    if (t98 != 273386668U) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint8_t x7525 = UINT8_MAX;
	int16_t x7526 = INT16_MAX;
	uint64_t x7528 = UINT64_MAX;
	volatile int32_t t99 = 171585218;

    t99 = ((x7525^x7526)<<(x7527^x7528));

    if (t99 != 32512) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x7549 = INT64_MAX;
	int16_t x7550 = INT16_MAX;
	int16_t x7552 = 1;
	volatile int64_t t100 = -7060875LL;

    t100 = ((x7549^x7550)<<(x7551^x7552));

    if (t100 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x7629 = 1918LLU;
	int8_t x7630 = INT8_MIN;
	int16_t x7631 = -13;
	volatile uint64_t t101 = 4071141139775LLU;

    t101 = ((x7629^x7630)<<(x7631^x7632));

    if (t101 != 18446744073702203392LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x7677 = INT16_MIN;
	int32_t x7679 = INT32_MIN;
	int32_t x7680 = INT32_MIN;
	volatile int64_t t102 = 1678LL;

    t102 = ((x7677^x7678)<<(x7679^x7680));

    if (t102 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x8053 = 0;
	volatile int16_t x8054 = 0;
	volatile int16_t x8056 = -1;
	volatile int32_t t103 = -51414;

    t103 = ((x8053^x8054)<<(x8055^x8056));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x8229 = 1723LLU;
	int32_t x8231 = -1;
	volatile uint32_t x8232 = UINT32_MAX;
	uint64_t t104 = 8916463071339391LLU;

    t104 = ((x8229^x8230)<<(x8231^x8232));

    if (t104 != 1722LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x8270 = 5U;
	static uint64_t x8271 = 0LLU;
	uint8_t x8272 = 2U;
	uint64_t t105 = 3510270LLU;

    t105 = ((x8269^x8270)<<(x8271^x8272));

    if (t105 != 18446744073709551592LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x8301 = 438251150100571LLU;
	static volatile int32_t x8302 = -1;
	uint64_t t106 = 1645981659500624LLU;

    t106 = ((x8301^x8302)<<(x8303^x8304));

    if (t106 != 18432720036906333312LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x8369 = 109967;
	uint8_t x8370 = 12U;
	int32_t x8371 = -1;
	int64_t x8372 = -1LL;
	int32_t t107 = 29;

    t107 = ((x8369^x8370)<<(x8371^x8372));

    if (t107 != 109955) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x8393 = INT8_MAX;
	uint32_t x8395 = UINT32_MAX;
	int8_t x8396 = -1;
	static int32_t t108 = -140676;

    t108 = ((x8393^x8394)<<(x8395^x8396));

    if (t108 != 127) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x8485 = 1;
	uint8_t x8486 = 57U;
	uint8_t x8487 = 1U;
	uint32_t x8488 = 11U;
	volatile int32_t t109 = 1880843;

    t109 = ((x8485^x8486)<<(x8487^x8488));

    if (t109 != 57344) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x8713 = INT16_MIN;
	int8_t x8714 = INT8_MIN;
	volatile int32_t x8715 = -1;
	static volatile int32_t t110 = 1;

    t110 = ((x8713^x8714)<<(x8715^x8716));

    if (t110 != 32640) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x8778 = INT8_MAX;
	uint8_t x8779 = 63U;
	uint16_t x8780 = 1U;
	volatile uint64_t t111 = 4419295847350572LLU;

    t111 = ((x8777^x8778)<<(x8779^x8780));

    if (t111 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x8817 = UINT32_MAX;
	static volatile int8_t x8818 = 4;
	int16_t x8820 = -1;
	uint32_t t112 = 1713895U;

    t112 = ((x8817^x8818)<<(x8819^x8820));

    if (t112 != 4294967291U) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x8869 = UINT16_MAX;
	uint32_t x8870 = 775U;
	int8_t x8871 = -1;
	static volatile uint32_t t113 = 65404344U;

    t113 = ((x8869^x8870)<<(x8871^x8872));

    if (t113 != 64760U) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x8898 = -1LL;
	static int32_t x8899 = INT32_MAX;
	volatile int32_t x8900 = INT32_MAX;
	int64_t t114 = -1740300014264687LL;

    t114 = ((x8897^x8898)<<(x8899^x8900));

    if (t114 != 32767LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x9211 = INT64_MIN;
	volatile uint64_t t115 = 125556LLU;

    t115 = ((x9209^x9210)<<(x9211^x9212));

    if (t115 != 18446744073709551554LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x9213 = 108;
	int8_t x9214 = 49;
	int32_t x9215 = -1;
	static int16_t x9216 = -1;
	volatile int32_t t116 = 12582;

    t116 = ((x9213^x9214)<<(x9215^x9216));

    if (t116 != 93) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x9329 = INT16_MIN;
	uint32_t x9330 = UINT32_MAX;
	int16_t x9331 = 14;
	uint16_t x9332 = 5U;
	volatile uint32_t t117 = 168U;

    t117 = ((x9329^x9330)<<(x9331^x9332));

    if (t117 != 67106816U) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile uint64_t x9365 = UINT64_MAX;
	uint16_t x9366 = 0U;
	uint32_t x9367 = 0U;
	volatile uint8_t x9368 = 2U;
	volatile uint64_t t118 = 17746542LLU;

    t118 = ((x9365^x9366)<<(x9367^x9368));

    if (t118 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x9426 = UINT8_MAX;
	static int64_t x9427 = -1LL;
	int8_t x9428 = -2;

    t119 = ((x9425^x9426)<<(x9427^x9428));

    if (t119 != 256) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x9533 = 2LLU;
	int16_t x9534 = INT16_MIN;
	volatile uint8_t x9535 = 0U;
	int16_t x9536 = 1;
	volatile uint64_t t120 = 238593460963740LLU;

    t120 = ((x9533^x9534)<<(x9535^x9536));

    if (t120 != 18446744073709486084LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x9597 = UINT64_MAX;
	int8_t x9598 = 12;
	int64_t x9599 = -19LL;
	static volatile int64_t x9600 = -1LL;
	volatile uint64_t t121 = 166592LLU;

    t121 = ((x9597^x9598)<<(x9599^x9600));

    if (t121 != 18446744073706143744LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x9669 = 17391533820265LL;
	volatile int32_t x9671 = -1;
	int32_t x9672 = -1;
	int64_t t122 = -853284563920839549LL;

    t122 = ((x9669^x9670)<<(x9671^x9672));

    if (t122 != 17391533820182LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x9834 = INT8_MIN;
	int8_t x9836 = -47;
	int32_t t123 = -52917;

    t123 = ((x9833^x9834)<<(x9835^x9836));

    if (t123 != 267386880) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x10017 = -3614;
	int8_t x10018 = -1;
	static int64_t x10019 = -1LL;

    t124 = ((x10017^x10018)<<(x10019^x10020));

    if (t124 != 3613) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x10145 = -1;
	static volatile int64_t x10146 = -3159912LL;
	volatile int64_t x10147 = INT64_MIN;
	volatile int64_t t125 = 14991821610841LL;

    t125 = ((x10145^x10146)<<(x10147^x10148));

    if (t125 != 3159911LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x10189 = INT64_MAX;
	int64_t x10191 = -1LL;
	volatile int16_t x10192 = -1;
	static volatile int64_t t126 = -1LL;

    t126 = ((x10189^x10190)<<(x10191^x10192));

    if (t126 != 9223372036854775707LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x10289 = 41129978594947065LLU;
	int32_t x10290 = -543;
	static uint16_t x10291 = UINT16_MAX;
	static volatile uint16_t x10292 = UINT16_MAX;
	uint64_t t127 = 5616390852LLU;

    t127 = ((x10289^x10290)<<(x10291^x10292));

    if (t127 != 18405614095114605080LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x10337 = -1LL;
	int32_t x10338 = INT32_MIN;
	int16_t x10339 = -1;
	static int8_t x10340 = -1;
	volatile int64_t t128 = -177LL;

    t128 = ((x10337^x10338)<<(x10339^x10340));

    if (t128 != 2147483647LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int32_t x10445 = INT32_MIN;
	int8_t x10446 = INT8_MIN;
	uint16_t x10447 = UINT16_MAX;
	volatile uint16_t x10448 = UINT16_MAX;
	static volatile int32_t t129 = -1212187;

    t129 = ((x10445^x10446)<<(x10447^x10448));

    if (t129 != 2147483520) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x10501 = 65;
	volatile uint8_t x10502 = UINT8_MAX;
	int8_t x10503 = 21;
	static uint32_t x10504 = 22U;
	volatile int32_t t130 = 209;

    t130 = ((x10501^x10502)<<(x10503^x10504));

    if (t130 != 1520) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x10577 = UINT16_MAX;
	uint32_t x10578 = UINT32_MAX;
	uint8_t x10579 = 26U;
	int32_t x10580 = 19;
	volatile uint32_t t131 = 0U;

    t131 = ((x10577^x10578)<<(x10579^x10580));

    if (t131 != 4261412864U) { NG(); } else { ; }
	
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


    return 0;
}

