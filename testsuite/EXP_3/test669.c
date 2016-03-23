
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

uint32_t x226 = 1U;
int64_t x245 = 407LL;
uint64_t x248 = 21019493497LLU;
uint64_t x285 = 200343123LLU;
int16_t x310 = 6;
uint32_t x606 = 7U;
uint32_t x626 = 3U;
volatile int32_t t7 = 9;
volatile uint8_t x998 = 1U;
static int64_t x1000 = -4LL;
uint16_t x1045 = UINT16_MAX;
uint8_t x1118 = 7U;
static volatile uint8_t x1254 = 3U;
uint32_t t13 = 1U;
int8_t x1293 = INT8_MAX;
volatile int32_t t14 = -1;
uint64_t x1425 = UINT64_MAX;
static volatile uint64_t t15 = 37472481454272LLU;
volatile uint16_t x1431 = 53U;
int64_t x1652 = INT64_MIN;
volatile uint64_t t17 = UINT64_MAX;
int16_t x2015 = -11205;
uint16_t x2148 = 15342U;
int32_t x2175 = INT32_MIN;
uint8_t x2259 = 3U;
static volatile int8_t x2761 = 1;
static volatile int8_t x2763 = -18;
int32_t t25 = -14222;
volatile uint8_t x2889 = 22U;
volatile uint16_t x2890 = 5U;
int16_t x3062 = 6;
volatile int64_t t28 = 397916169849834LL;
static uint32_t x3149 = 1614621U;
static uint8_t x3151 = 6U;
int8_t x3374 = 11;
uint8_t x3375 = 5U;
static int32_t t31 = -5413;
int8_t x3658 = 5;
int8_t x3853 = 1;
int64_t x4173 = INT64_MAX;
static volatile uint64_t x4174 = 0LLU;
int32_t x4176 = -1;
int64_t x4475 = -1LL;
volatile int8_t x4618 = 6;
int8_t x4619 = INT8_MAX;
uint8_t x4638 = 23U;
uint8_t x4639 = 6U;
static int32_t x4789 = 144081;
int64_t x4792 = INT64_MIN;
int32_t t42 = 15859;
static volatile int8_t x5033 = INT8_MAX;
volatile int16_t x5034 = 3;
int32_t t43 = 1826344;
volatile uint8_t x5229 = 6U;
volatile int64_t x5398 = 1LL;
uint64_t x5399 = 58695635230LLU;
uint8_t x5446 = 20U;
int16_t x5448 = INT16_MIN;
volatile int32_t t48 = 1;
static volatile int32_t t49 = -1244304;
volatile int64_t x5627 = -1LL;
int16_t x5628 = INT16_MAX;
uint64_t t52 = 6LLU;
static volatile int32_t x5935 = -1;
uint8_t x6156 = UINT8_MAX;
volatile int32_t t54 = 1381767;
uint64_t x6285 = 1636931324268438LLU;
uint32_t x6362 = 6U;
uint32_t t56 = 701577931U;
static volatile uint8_t x6391 = 0U;
int8_t x6505 = 0;
uint8_t x6506 = 6U;
volatile uint64_t t60 = 506035137LLU;
uint32_t x7845 = UINT32_MAX;


void f0(void) {
    	static uint8_t x225 = 20U;
	static volatile int32_t x227 = -1;
	int16_t x228 = -1;
	int32_t t0 = 26;

    t0 = ((x225<<x226)>>(x227/x228));

    if (t0 != 20) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x246 = 0U;
	uint16_t x247 = 945U;
	volatile int64_t t1 = -1560571LL;

    t1 = ((x245<<x246)>>(x247/x248));

    if (t1 != 407LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x286 = 1;
	static uint64_t x287 = 454LLU;
	int32_t x288 = INT32_MIN;
	volatile uint64_t t2 = 3722710224LLU;

    t2 = ((x285<<x286)>>(x287/x288));

    if (t2 != 400686246LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x309 = UINT32_MAX;
	int32_t x311 = -402;
	uint16_t x312 = UINT16_MAX;
	volatile uint32_t t3 = 14064U;

    t3 = ((x309<<x310)>>(x311/x312));

    if (t3 != 4294967232U) { NG(); } else { ; }
	
}

void f4(void) {
    	static int64_t x441 = 5138989063307104LL;
	uint64_t x442 = 10LLU;
	int32_t x443 = INT32_MIN;
	int64_t x444 = INT64_MAX;
	volatile int64_t t4 = 8382475945406LL;

    t4 = ((x441<<x442)>>(x443/x444));

    if (t4 != 5262324800826474496LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x605 = 419LL;
	int32_t x607 = INT32_MIN;
	int64_t x608 = INT64_MIN;
	volatile int64_t t5 = -67379083310039LL;

    t5 = ((x605<<x606)>>(x607/x608));

    if (t5 != 53632LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x625 = 174570519123120358LLU;
	uint64_t x627 = 328525335965406555LLU;
	int32_t x628 = -803638021;
	volatile uint64_t t6 = 540614LLU;

    t6 = ((x625<<x626)>>(x627/x628));

    if (t6 != 1396564152984962864LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x809 = 18U;
	static volatile int8_t x810 = 0;
	volatile int32_t x811 = INT32_MAX;
	int32_t x812 = INT32_MIN;

    t7 = ((x809<<x810)>>(x811/x812));

    if (t7 != 18) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint8_t x813 = 67U;
	volatile uint8_t x814 = 4U;
	int8_t x815 = INT8_MIN;
	static int32_t x816 = INT32_MIN;
	static volatile int32_t t8 = -84;

    t8 = ((x813<<x814)>>(x815/x816));

    if (t8 != 1072) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile uint32_t x837 = UINT32_MAX;
	static uint16_t x838 = 0U;
	uint32_t x839 = UINT32_MAX;
	static volatile uint64_t x840 = UINT64_MAX;
	uint32_t t9 = UINT32_MAX;

    t9 = ((x837<<x838)>>(x839/x840));

    if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x997 = 1987866596889530648LL;
	int16_t x999 = -1;
	volatile int64_t t10 = -167680507109440682LL;

    t10 = ((x997<<x998)>>(x999/x1000));

    if (t10 != 3975733193779061296LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x1046 = 12;
	uint64_t x1047 = 1427321231394546LLU;
	uint64_t x1048 = UINT64_MAX;
	int32_t t11 = -1046541069;

    t11 = ((x1045<<x1046)>>(x1047/x1048));

    if (t11 != 268431360) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int16_t x1117 = 390;
	int64_t x1119 = INT64_MIN;
	uint64_t x1120 = UINT64_MAX;
	volatile int32_t t12 = 397;

    t12 = ((x1117<<x1118)>>(x1119/x1120));

    if (t12 != 49920) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint32_t x1253 = UINT32_MAX;
	static uint64_t x1255 = 2792347301543804LLU;
	static int8_t x1256 = INT8_MIN;

    t13 = ((x1253<<x1254)>>(x1255/x1256));

    if (t13 != 4294967288U) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x1294 = 0;
	int32_t x1295 = -1;
	uint64_t x1296 = UINT64_MAX;

    t14 = ((x1293<<x1294)>>(x1295/x1296));

    if (t14 != 63) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x1426 = 51;
	int8_t x1427 = -1;
	int64_t x1428 = 646LL;

    t15 = ((x1425<<x1426)>>(x1427/x1428));

    if (t15 != 18444492273895866368LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int8_t x1429 = 54;
	int16_t x1430 = 0;
	int8_t x1432 = INT8_MAX;
	volatile int32_t t16 = -22347;

    t16 = ((x1429<<x1430)>>(x1431/x1432));

    if (t16 != 54) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x1649 = UINT64_MAX;
	uint32_t x1650 = 0U;
	volatile int64_t x1651 = -11530260603102LL;

    t17 = ((x1649<<x1650)>>(x1651/x1652));

    if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x1833 = INT8_MAX;
	volatile uint8_t x1834 = 6U;
	volatile int16_t x1835 = -20;
	static uint32_t x1836 = 407567408U;
	int32_t t18 = -193;

    t18 = ((x1833<<x1834)>>(x1835/x1836));

    if (t18 != 7) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x2013 = 28U;
	static int8_t x2014 = 1;
	int16_t x2016 = INT16_MAX;
	int32_t t19 = 232356413;

    t19 = ((x2013<<x2014)>>(x2015/x2016));

    if (t19 != 56) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint8_t x2145 = 3U;
	uint8_t x2146 = 29U;
	int16_t x2147 = INT16_MAX;
	volatile int32_t t20 = -74227;

    t20 = ((x2145<<x2146)>>(x2147/x2148));

    if (t20 != 402653184) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x2173 = 69LL;
	static volatile uint8_t x2174 = 18U;
	uint32_t x2176 = UINT32_MAX;
	volatile int64_t t21 = 73316505269615LL;

    t21 = ((x2173<<x2174)>>(x2175/x2176));

    if (t21 != 18087936LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x2257 = 4;
	uint64_t x2258 = 15LLU;
	static volatile uint16_t x2260 = UINT16_MAX;
	static int32_t t22 = -379482;

    t22 = ((x2257<<x2258)>>(x2259/x2260));

    if (t22 != 131072) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x2581 = 2;
	volatile uint8_t x2582 = 27U;
	volatile uint32_t x2583 = UINT32_MAX;
	int32_t x2584 = INT32_MIN;
	static int32_t t23 = 26242;

    t23 = ((x2581<<x2582)>>(x2583/x2584));

    if (t23 != 134217728) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x2641 = 102U;
	volatile uint64_t x2642 = 2LLU;
	uint16_t x2643 = 3U;
	volatile uint64_t x2644 = 6524585018172LLU;
	int32_t t24 = -51105555;

    t24 = ((x2641<<x2642)>>(x2643/x2644));

    if (t24 != 408) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x2762 = 1U;
	volatile uint16_t x2764 = 96U;

    t25 = ((x2761<<x2762)>>(x2763/x2764));

    if (t25 != 2) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x2891 = 0;
	uint64_t x2892 = 28299929LLU;
	volatile int32_t t26 = -1;

    t26 = ((x2889<<x2890)>>(x2891/x2892));

    if (t26 != 704) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x3021 = INT8_MAX;
	static int8_t x3022 = 1;
	static int32_t x3023 = 339950;
	int64_t x3024 = 102649038258990LL;
	volatile int32_t t27 = 0;

    t27 = ((x3021<<x3022)>>(x3023/x3024));

    if (t27 != 254) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x3061 = 56304915750LL;
	volatile int64_t x3063 = -8670244941654LL;
	static int64_t x3064 = -258410125604050LL;

    t28 = ((x3061<<x3062)>>(x3063/x3064));

    if (t28 != 3603514608000LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint16_t x3150 = 2U;
	uint16_t x3152 = UINT16_MAX;
	uint32_t t29 = 636347390U;

    t29 = ((x3149<<x3150)>>(x3151/x3152));

    if (t29 != 6458484U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x3233 = UINT32_MAX;
	uint8_t x3234 = 5U;
	uint32_t x3235 = 56718570U;
	int8_t x3236 = INT8_MIN;
	volatile uint32_t t30 = 33314593U;

    t30 = ((x3233<<x3234)>>(x3235/x3236));

    if (t30 != 4294967264U) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x3373 = INT8_MAX;
	int64_t x3376 = INT64_MAX;

    t31 = ((x3373<<x3374)>>(x3375/x3376));

    if (t31 != 260096) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x3657 = 3404494;
	int16_t x3659 = INT16_MIN;
	static volatile int16_t x3660 = INT16_MIN;
	volatile int32_t t32 = 9552478;

    t32 = ((x3657<<x3658)>>(x3659/x3660));

    if (t32 != 54471904) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint8_t x3761 = 35U;
	int16_t x3762 = 1;
	uint16_t x3763 = UINT16_MAX;
	static uint64_t x3764 = 314791502228LLU;
	int32_t t33 = 16516;

    t33 = ((x3761<<x3762)>>(x3763/x3764));

    if (t33 != 70) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x3854 = 1;
	volatile int32_t x3855 = 176;
	static int32_t x3856 = INT32_MIN;
	int32_t t34 = -3937621;

    t34 = ((x3853<<x3854)>>(x3855/x3856));

    if (t34 != 2) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x4153 = 2U;
	uint16_t x4154 = 1U;
	uint8_t x4155 = 1U;
	uint32_t x4156 = UINT32_MAX;
	static volatile int32_t t35 = 46668;

    t35 = ((x4153<<x4154)>>(x4155/x4156));

    if (t35 != 4) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x4175 = 197407560550LLU;
	volatile int64_t t36 = INT64_MAX;

    t36 = ((x4173<<x4174)>>(x4175/x4176));

    if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint32_t x4437 = UINT32_MAX;
	uint8_t x4438 = 1U;
	static int32_t x4439 = -1;
	uint16_t x4440 = 822U;
	volatile uint32_t t37 = 36205U;

    t37 = ((x4437<<x4438)>>(x4439/x4440));

    if (t37 != 4294967294U) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint32_t x4473 = 669614U;
	int16_t x4474 = 0;
	uint8_t x4476 = UINT8_MAX;
	uint32_t t38 = 2U;

    t38 = ((x4473<<x4474)>>(x4475/x4476));

    if (t38 != 669614U) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x4517 = INT8_MAX;
	int16_t x4518 = 16;
	int16_t x4519 = -1;
	static int16_t x4520 = INT16_MIN;
	int32_t t39 = 4989;

    t39 = ((x4517<<x4518)>>(x4519/x4520));

    if (t39 != 8323072) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x4617 = UINT64_MAX;
	int64_t x4620 = INT64_MIN;
	volatile uint64_t t40 = 727933878658237452LLU;

    t40 = ((x4617<<x4618)>>(x4619/x4620));

    if (t40 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x4637 = 13U;
	static int64_t x4640 = -7193612873517LL;
	int32_t t41 = 113184;

    t41 = ((x4637<<x4638)>>(x4639/x4640));

    if (t41 != 109051904) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x4790 = 9;
	int64_t x4791 = -3218791331LL;

    t42 = ((x4789<<x4790)>>(x4791/x4792));

    if (t42 != 73769472) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x5035 = 4LLU;
	int16_t x5036 = INT16_MIN;

    t43 = ((x5033<<x5034)>>(x5035/x5036));

    if (t43 != 1016) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x5061 = 224489LLU;
	uint64_t x5062 = 1LLU;
	int16_t x5063 = 467;
	volatile int16_t x5064 = INT16_MIN;
	uint64_t t44 = 1906LLU;

    t44 = ((x5061<<x5062)>>(x5063/x5064));

    if (t44 != 448978LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x5109 = 1342450920014LL;
	static uint8_t x5110 = 1U;
	uint8_t x5111 = 3U;
	int16_t x5112 = INT16_MIN;
	volatile int64_t t45 = 287276279298758830LL;

    t45 = ((x5109<<x5110)>>(x5111/x5112));

    if (t45 != 2684901840028LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x5230 = 3;
	volatile int8_t x5231 = INT8_MIN;
	static volatile uint16_t x5232 = 5318U;
	volatile int32_t t46 = 61;

    t46 = ((x5229<<x5230)>>(x5231/x5232));

    if (t46 != 48) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x5397 = INT16_MAX;
	static volatile int32_t x5400 = -382925;
	static volatile int32_t t47 = -333925992;

    t47 = ((x5397<<x5398)>>(x5399/x5400));

    if (t47 != 65534) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x5445 = UINT8_MAX;
	volatile int64_t x5447 = -1LL;

    t48 = ((x5445<<x5446)>>(x5447/x5448));

    if (t48 != 267386880) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x5449 = 13U;
	int16_t x5450 = 3;
	int64_t x5451 = 646LL;
	int64_t x5452 = INT64_MIN;

    t49 = ((x5449<<x5450)>>(x5451/x5452));

    if (t49 != 104) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x5533 = 4015;
	uint8_t x5534 = 6U;
	static int8_t x5535 = INT8_MAX;
	uint32_t x5536 = UINT32_MAX;
	volatile int32_t t50 = 4501;

    t50 = ((x5533<<x5534)>>(x5535/x5536));

    if (t50 != 256960) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x5625 = 43U;
	int8_t x5626 = 1;
	volatile int32_t t51 = -23287;

    t51 = ((x5625<<x5626)>>(x5627/x5628));

    if (t51 != 86) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x5821 = UINT64_MAX;
	uint8_t x5822 = 1U;
	volatile int16_t x5823 = -403;
	int16_t x5824 = -1211;

    t52 = ((x5821<<x5822)>>(x5823/x5824));

    if (t52 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint8_t x5933 = UINT8_MAX;
	int16_t x5934 = 0;
	int64_t x5936 = 373350LL;
	volatile int32_t t53 = 278;

    t53 = ((x5933<<x5934)>>(x5935/x5936));

    if (t53 != 255) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x6153 = 25U;
	uint32_t x6154 = 4U;
	int16_t x6155 = -1;

    t54 = ((x6153<<x6154)>>(x6155/x6156));

    if (t54 != 400) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x6286 = 1LL;
	int8_t x6287 = INT8_MAX;
	volatile int32_t x6288 = INT32_MIN;
	static volatile uint64_t t55 = 631719590110117LLU;

    t55 = ((x6285<<x6286)>>(x6287/x6288));

    if (t55 != 3273862648536876LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x6361 = 950077306U;
	uint64_t x6363 = 264210911704LLU;
	uint64_t x6364 = 568732270655052266LLU;

    t56 = ((x6361<<x6362)>>(x6363/x6364));

    if (t56 != 675405440U) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint32_t x6389 = 670849967U;
	volatile int8_t x6390 = 4;
	int64_t x6392 = INT64_MAX;
	static volatile uint32_t t57 = 83U;

    t57 = ((x6389<<x6390)>>(x6391/x6392));

    if (t57 != 2143664880U) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint32_t x6507 = UINT32_MAX;
	int8_t x6508 = -1;
	static int32_t t58 = -62202010;

    t58 = ((x6505<<x6506)>>(x6507/x6508));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x6613 = 33U;
	uint8_t x6614 = 0U;
	volatile int8_t x6615 = INT8_MAX;
	int8_t x6616 = INT8_MIN;
	int32_t t59 = -462;

    t59 = ((x6613<<x6614)>>(x6615/x6616));

    if (t59 != 33) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x6665 = 968551839386506LLU;
	int8_t x6666 = 1;
	static int64_t x6667 = -1LL;
	int64_t x6668 = -1LL;

    t60 = ((x6665<<x6666)>>(x6667/x6668));

    if (t60 != 968551839386506LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int64_t x6861 = 4200160LL;
	uint16_t x6862 = 0U;
	int64_t x6863 = -1LL;
	uint32_t x6864 = 26U;
	static volatile int64_t t61 = -353644LL;

    t61 = ((x6861<<x6862)>>(x6863/x6864));

    if (t61 != 4200160LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint64_t x6881 = UINT64_MAX;
	int32_t x6882 = 0;
	uint32_t x6883 = 792U;
	int32_t x6884 = INT32_MIN;
	uint64_t t62 = UINT64_MAX;

    t62 = ((x6881<<x6882)>>(x6883/x6884));

    if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x7197 = 14U;
	static uint64_t x7198 = 1LLU;
	uint8_t x7199 = 11U;
	int32_t x7200 = 104671216;
	volatile uint32_t t63 = 436638318U;

    t63 = ((x7197<<x7198)>>(x7199/x7200));

    if (t63 != 28U) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint16_t x7225 = UINT16_MAX;
	int16_t x7226 = 0;
	uint64_t x7227 = UINT64_MAX;
	static int8_t x7228 = -1;
	volatile int32_t t64 = -625;

    t64 = ((x7225<<x7226)>>(x7227/x7228));

    if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int64_t x7277 = 234504928LL;
	uint8_t x7278 = 1U;
	static int64_t x7279 = -1LL;
	int8_t x7280 = -1;
	volatile int64_t t65 = -39781LL;

    t65 = ((x7277<<x7278)>>(x7279/x7280));

    if (t65 != 234504928LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x7525 = 5791;
	uint64_t x7526 = 0LLU;
	int32_t x7527 = 2788;
	static int16_t x7528 = INT16_MIN;
	static volatile int32_t t66 = -7361990;

    t66 = ((x7525<<x7526)>>(x7527/x7528));

    if (t66 != 5791) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int64_t x7601 = 19LL;
	uint16_t x7602 = 1U;
	static int8_t x7603 = 1;
	int32_t x7604 = INT32_MIN;
	volatile int64_t t67 = -132310989149471LL;

    t67 = ((x7601<<x7602)>>(x7603/x7604));

    if (t67 != 38LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x7685 = 0;
	int8_t x7686 = 1;
	static int32_t x7687 = 29;
	volatile int32_t x7688 = INT32_MIN;
	volatile int32_t t68 = 19397299;

    t68 = ((x7685<<x7686)>>(x7687/x7688));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x7846 = 14;
	uint32_t x7847 = 110830U;
	static int8_t x7848 = INT8_MIN;
	uint32_t t69 = 7028195U;

    t69 = ((x7845<<x7846)>>(x7847/x7848));

    if (t69 != 4294950912U) { NG(); } else { ; }
	
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


    return 0;
}

