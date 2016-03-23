
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

uint32_t t2 = 181404302U;
volatile int8_t x345 = INT8_MIN;
volatile uint8_t x578 = 77U;
uint64_t t6 = 4656454LLU;
uint16_t x584 = 14U;
int32_t x586 = INT32_MIN;
int16_t x588 = 10;
int32_t t9 = -437489187;
static volatile uint8_t x739 = UINT8_MAX;
volatile int8_t x758 = -1;
volatile int8_t x768 = 7;
static int32_t x810 = INT32_MIN;
static int64_t t13 = 396697047090314LL;
uint64_t x931 = UINT64_MAX;
static volatile uint64_t t15 = 968159184478653097LLU;
uint8_t x1129 = 8U;
volatile uint16_t x1132 = 1U;
static volatile int16_t x1254 = INT16_MAX;
uint16_t x1262 = 3U;
static uint32_t x1286 = UINT32_MAX;
static uint64_t x1422 = 8LLU;
static uint64_t t25 = 67920464247455114LLU;
volatile uint64_t x1529 = UINT64_MAX;
static uint8_t x1532 = 1U;
volatile uint32_t x1721 = 1019U;
int16_t x1929 = INT16_MIN;
volatile int8_t x1930 = -1;
uint64_t x1967 = 155124495085906096LLU;
static int8_t x1992 = 22;
int16_t x2013 = -340;
static int16_t x2014 = INT16_MIN;
volatile int32_t t35 = -385;
int8_t x2159 = INT8_MAX;
static volatile uint64_t x2160 = 17LLU;
volatile int64_t t36 = 215474944755128LL;
int8_t x2233 = -1;
static int32_t t37 = -40;
volatile uint64_t x2372 = 8LLU;
volatile uint32_t t39 = 19647U;
int8_t x2493 = INT8_MIN;
uint64_t t41 = 740352264161LLU;
int32_t x2895 = 28498;
volatile uint64_t x3003 = 22003LLU;
int16_t x3004 = 1;
uint8_t x3022 = UINT8_MAX;
uint16_t x3023 = 230U;
int8_t x3107 = INT8_MAX;
int64_t t48 = -64509LL;
int32_t x3138 = 0;
uint64_t x3139 = 3464LLU;
volatile uint64_t t49 = 10385658704644LLU;
volatile uint64_t t51 = 34LLU;
uint32_t x3391 = UINT32_MAX;
uint8_t x3578 = UINT8_MAX;
int32_t t55 = 8;
int8_t x3678 = 60;
uint32_t x3679 = UINT32_MAX;
uint16_t x3693 = 19U;
uint32_t t59 = 38U;
int16_t x3874 = -1;
volatile uint32_t t61 = 107822U;
int64_t t62 = 4134052821275839LL;
uint32_t x4061 = 8436U;
int16_t x4064 = 3;
uint16_t x4098 = 12U;
volatile uint8_t x4099 = UINT8_MAX;
int8_t x4242 = 12;
uint16_t x4244 = 26U;
volatile uint32_t t68 = 2U;
volatile uint16_t x4265 = 0U;
volatile int32_t t69 = -138;
static volatile int32_t x4302 = -1;
uint32_t x4303 = 5001826U;
volatile int8_t x4304 = 29;
static volatile uint32_t t71 = 1761165909U;


void f0(void) {
    	uint8_t x1 = 8U;
	volatile int8_t x2 = 2;
	int8_t x3 = INT8_MAX;
	int8_t x4 = 1;
	int32_t t0 = -27450;

    t0 = (x1*(x2-(x3>>x4)));

    if (t0 != -488) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int8_t x133 = INT8_MAX;
	static uint64_t x134 = 10LLU;
	uint32_t x135 = 104460521U;
	volatile uint32_t x136 = 5U;
	static volatile uint64_t t1 = 122100LLU;

    t1 = (x133*(x134-(x135>>x136)));

    if (t1 != 18446744073294975229LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x185 = 1905575073U;
	uint32_t x186 = 5U;
	uint8_t x187 = 19U;
	int8_t x188 = 2;

    t2 = (x185*(x186-(x187>>x188)));

    if (t2 != 1905575073U) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint64_t x346 = UINT64_MAX;
	static uint8_t x347 = UINT8_MAX;
	uint16_t x348 = 7U;
	volatile uint64_t t3 = 0LLU;

    t3 = (x345*(x346-(x347>>x348)));

    if (t3 != 256LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x441 = -37843788359LL;
	static int8_t x442 = 4;
	volatile uint16_t x443 = 22739U;
	int32_t x444 = 0;
	int64_t t4 = 69467103666235125LL;

    t4 = (x441*(x442-(x443>>x444)));

    if (t4 != 860378528341865LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x529 = UINT64_MAX;
	int32_t x530 = INT32_MAX;
	uint64_t x531 = UINT64_MAX;
	static uint8_t x532 = 3U;
	volatile uint64_t t5 = 858330392352LLU;

    t5 = (x529*(x530-(x531>>x532)));

    if (t5 != 2305843007066210304LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x577 = UINT64_MAX;
	uint8_t x579 = 43U;
	static int8_t x580 = 0;

    t6 = (x577*(x578-(x579>>x580)));

    if (t6 != 18446744073709551582LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x581 = 0U;
	uint8_t x582 = UINT8_MAX;
	uint64_t x583 = UINT64_MAX;
	volatile uint64_t t7 = 262227648240600489LLU;

    t7 = (x581*(x582-(x583>>x584)));

    if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x585 = -1LL;
	uint16_t x587 = 7U;
	int64_t t8 = -10053652LL;

    t8 = (x585*(x586-(x587>>x588)));

    if (t8 != 2147483648LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint16_t x701 = 29U;
	int16_t x702 = -798;
	volatile uint8_t x703 = UINT8_MAX;
	int8_t x704 = 23;

    t9 = (x701*(x702-(x703>>x704)));

    if (t9 != -23142) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x737 = 1;
	int32_t x738 = INT32_MIN;
	static uint16_t x740 = 13U;
	int32_t t10 = INT32_MIN;

    t10 = (x737*(x738-(x739>>x740)));

    if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x757 = UINT64_MAX;
	uint16_t x759 = 0U;
	uint8_t x760 = 1U;
	uint64_t t11 = 2393LLU;

    t11 = (x757*(x758-(x759>>x760)));

    if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x765 = UINT32_MAX;
	static int8_t x766 = -8;
	uint32_t x767 = UINT32_MAX;
	volatile uint32_t t12 = 5U;

    t12 = (x765*(x766-(x767>>x768)));

    if (t12 != 33554439U) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x809 = INT32_MIN;
	static volatile int64_t x811 = 469LL;
	uint8_t x812 = 3U;

    t13 = (x809*(x810-(x811>>x812)));

    if (t13 != 4611686142981439488LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x849 = INT8_MIN;
	volatile int16_t x850 = -1;
	volatile uint32_t x851 = 370015U;
	int8_t x852 = 8;
	volatile uint32_t t14 = 13251960U;

    t14 = (x849*(x850-(x851>>x852)));

    if (t14 != 185088U) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x929 = -1;
	int8_t x930 = INT8_MIN;
	static uint8_t x932 = 62U;

    t15 = (x929*(x930-(x931>>x932)));

    if (t15 != 131LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t x973 = UINT64_MAX;
	int8_t x974 = INT8_MAX;
	volatile uint16_t x975 = 26U;
	static int8_t x976 = 26;
	static uint64_t t16 = 3325931275759485862LLU;

    t16 = (x973*(x974-(x975>>x976)));

    if (t16 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x1130 = -1LL;
	uint32_t x1131 = 1881246954U;
	volatile int64_t t17 = -365472899653LL;

    t17 = (x1129*(x1130-(x1131>>x1132)));

    if (t17 != -7524987824LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x1229 = INT64_MIN;
	uint8_t x1230 = 94U;
	uint64_t x1231 = 508125016666LLU;
	uint16_t x1232 = 1U;
	uint64_t t18 = 423513LLU;

    t18 = (x1229*(x1230-(x1231>>x1232)));

    if (t18 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x1249 = UINT64_MAX;
	uint8_t x1250 = 11U;
	static volatile uint8_t x1251 = UINT8_MAX;
	volatile int8_t x1252 = 5;
	static volatile uint64_t t19 = 1642690322888086771LLU;

    t19 = (x1249*(x1250-(x1251>>x1252)));

    if (t19 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x1253 = -1;
	static uint16_t x1255 = UINT16_MAX;
	uint8_t x1256 = 19U;
	int32_t t20 = -29745170;

    t20 = (x1253*(x1254-(x1255>>x1256)));

    if (t20 != -32767) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x1261 = INT8_MIN;
	uint8_t x1263 = UINT8_MAX;
	uint8_t x1264 = 6U;
	volatile int32_t t21 = -31;

    t21 = (x1261*(x1262-(x1263>>x1264)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x1285 = 41U;
	volatile uint32_t x1287 = 1649895112U;
	volatile int8_t x1288 = 1;
	volatile uint32_t t22 = 3430U;

    t22 = (x1285*(x1286-(x1287>>x1288)));

    if (t22 != 536888531U) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x1349 = 8;
	uint8_t x1350 = 8U;
	volatile uint32_t x1351 = 27568U;
	static volatile uint64_t x1352 = 0LLU;
	uint32_t t23 = 77U;

    t23 = (x1349*(x1350-(x1351>>x1352)));

    if (t23 != 4294746816U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x1421 = 5U;
	uint32_t x1423 = UINT32_MAX;
	int8_t x1424 = 3;
	uint64_t t24 = 19028LLU;

    t24 = (x1421*(x1422-(x1423>>x1424)));

    if (t24 != 18446744071025197101LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int16_t x1433 = INT16_MIN;
	uint64_t x1434 = 88LLU;
	uint8_t x1435 = 114U;
	int32_t x1436 = 0;

    t25 = (x1433*(x1434-(x1435>>x1436)));

    if (t25 != 851968LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x1530 = -1;
	int16_t x1531 = 127;
	uint64_t t26 = 0LLU;

    t26 = (x1529*(x1530-(x1531>>x1532)));

    if (t26 != 64LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x1722 = INT32_MIN;
	uint64_t x1723 = UINT64_MAX;
	int16_t x1724 = 4;
	volatile uint64_t t27 = 67021869LLU;

    t27 = (x1721*(x1722-(x1723>>x1724)));

    if (t27 != 5764605334748398587LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int32_t x1789 = -1;
	uint8_t x1790 = 3U;
	int64_t x1791 = INT64_MAX;
	uint8_t x1792 = 0U;
	int64_t t28 = 115227909365781998LL;

    t28 = (x1789*(x1790-(x1791>>x1792)));

    if (t28 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x1921 = -1;
	int16_t x1922 = -1;
	static int8_t x1923 = INT8_MAX;
	int16_t x1924 = 0;
	volatile int32_t t29 = -16;

    t29 = (x1921*(x1922-(x1923>>x1924)));

    if (t29 != 128) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x1931 = 372809LLU;
	volatile int32_t x1932 = 0;
	volatile uint64_t t30 = 3519040201584029062LLU;

    t30 = (x1929*(x1930-(x1931>>x1932)));

    if (t30 != 12216238080LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x1949 = -10;
	uint64_t x1950 = 4597939150365777493LLU;
	int64_t x1951 = INT64_MAX;
	int16_t x1952 = 3;
	uint64_t t31 = 3LLU;

    t31 = (x1949*(x1950-(x1951>>x1952)));

    if (t31 != 2443311689829798052LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x1953 = INT8_MIN;
	uint8_t x1954 = UINT8_MAX;
	static uint32_t x1955 = 808U;
	uint16_t x1956 = 2U;
	uint32_t t32 = 83U;

    t32 = (x1953*(x1954-(x1955>>x1956)));

    if (t32 != 4294960512U) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x1965 = UINT64_MAX;
	volatile int8_t x1966 = -1;
	volatile uint8_t x1968 = 43U;
	uint64_t t33 = 108994214276543LLU;

    t33 = (x1965*(x1966-(x1967>>x1968)));

    if (t33 != 17636LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x1989 = INT64_MIN;
	static uint8_t x1990 = 18U;
	static uint64_t x1991 = UINT64_MAX;
	uint64_t t34 = 291070914LLU;

    t34 = (x1989*(x1990-(x1991>>x1992)));

    if (t34 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint16_t x2015 = UINT16_MAX;
	static int8_t x2016 = 1;

    t35 = (x2013*(x2014-(x2015>>x2016)));

    if (t35 != 22281900) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x2157 = 7U;
	int64_t x2158 = -1LL;

    t36 = (x2157*(x2158-(x2159>>x2160)));

    if (t36 != -7LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x2234 = 1;
	int32_t x2235 = INT32_MAX;
	uint8_t x2236 = 8U;

    t37 = (x2233*(x2234-(x2235>>x2236)));

    if (t37 != 8388606) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x2369 = 9799;
	static int32_t x2370 = -1;
	volatile uint16_t x2371 = 23U;
	volatile int32_t t38 = 14;

    t38 = (x2369*(x2370-(x2371>>x2372)));

    if (t38 != -9799) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x2429 = 1883U;
	static int16_t x2430 = INT16_MIN;
	uint16_t x2431 = 6U;
	uint64_t x2432 = 0LLU;

    t39 = (x2429*(x2430-(x2431>>x2432)));

    if (t39 != 4233253854U) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x2494 = 2U;
	int32_t x2495 = 23;
	uint8_t x2496 = 5U;
	int32_t t40 = -2126746;

    t40 = (x2493*(x2494-(x2495>>x2496)));

    if (t40 != -256) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x2521 = 4876U;
	uint64_t x2522 = UINT64_MAX;
	uint16_t x2523 = 17U;
	static uint8_t x2524 = 1U;

    t41 = (x2521*(x2522-(x2523>>x2524)));

    if (t41 != 18446744073709507732LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint16_t x2533 = 0U;
	uint32_t x2534 = 2544U;
	uint16_t x2535 = UINT16_MAX;
	int16_t x2536 = 1;
	uint32_t t42 = 8979U;

    t42 = (x2533*(x2534-(x2535>>x2536)));

    if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x2537 = 18305504LLU;
	uint32_t x2538 = UINT32_MAX;
	static int32_t x2539 = 4958;
	static int16_t x2540 = 24;
	static volatile uint64_t t43 = 20LLU;

    t43 = (x2537*(x2538-(x2539>>x2540)));

    if (t43 != 78621540998491680LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x2629 = UINT16_MAX;
	uint8_t x2630 = UINT8_MAX;
	int32_t x2631 = 20;
	int8_t x2632 = 12;
	int32_t t44 = -2196086;

    t44 = (x2629*(x2630-(x2631>>x2632)));

    if (t44 != 16711425) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x2893 = -47;
	static volatile uint8_t x2894 = 20U;
	static uint8_t x2896 = 4U;
	int32_t t45 = -5;

    t45 = (x2893*(x2894-(x2895>>x2896)));

    if (t45 != 82767) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x3001 = -5561487988LL;
	volatile int8_t x3002 = INT8_MIN;
	uint64_t t46 = 9340525332432267LLU;

    t46 = (x3001*(x3002-(x3003>>x3004)));

    if (t46 != 61893799818452LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint16_t x3021 = 184U;
	int8_t x3024 = 26;
	volatile int32_t t47 = 16130;

    t47 = (x3021*(x3022-(x3023>>x3024)));

    if (t47 != 46920) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x3105 = -1;
	static int64_t x3106 = -1LL;
	volatile uint8_t x3108 = 5U;

    t48 = (x3105*(x3106-(x3107>>x3108)));

    if (t48 != 4LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x3137 = INT64_MIN;
	static volatile int32_t x3140 = 2;

    t49 = (x3137*(x3138-(x3139>>x3140)));

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x3213 = 1;
	int8_t x3214 = INT8_MIN;
	int32_t x3215 = 0;
	uint8_t x3216 = 26U;
	static volatile int32_t t50 = 7401972;

    t50 = (x3213*(x3214-(x3215>>x3216)));

    if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x3301 = 246819493726LLU;
	int16_t x3302 = INT16_MIN;
	static volatile int8_t x3303 = INT8_MAX;
	int64_t x3304 = 0LL;

    t51 = (x3301*(x3302-(x3303>>x3304)));

    if (t51 != 18438624946463434846LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x3389 = INT16_MAX;
	static uint8_t x3390 = UINT8_MAX;
	uint64_t x3392 = 3LLU;
	static volatile uint32_t t52 = 5533690U;

    t52 = (x3389*(x3390-(x3391>>x3392)));

    if (t52 != 545259264U) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x3405 = -1;
	static int16_t x3406 = INT16_MAX;
	int8_t x3407 = INT8_MAX;
	uint64_t x3408 = 7LLU;
	int32_t t53 = -339;

    t53 = (x3405*(x3406-(x3407>>x3408)));

    if (t53 != -32767) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x3505 = UINT16_MAX;
	int16_t x3506 = INT16_MAX;
	static volatile int32_t x3507 = 45832906;
	static uint8_t x3508 = 13U;
	int32_t t54 = -6277;

    t54 = (x3505*(x3506-(x3507>>x3508)));

    if (t54 != 1780782555) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int16_t x3577 = -1;
	volatile uint16_t x3579 = UINT16_MAX;
	int16_t x3580 = 3;

    t55 = (x3577*(x3578-(x3579>>x3580)));

    if (t55 != 7936) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x3633 = 1531U;
	int64_t x3634 = 31330171748593LL;
	int32_t x3635 = INT32_MAX;
	uint16_t x3636 = 16U;
	int64_t t56 = -1LL;

    t56 = (x3633*(x3634-(x3635>>x3636)));

    if (t56 != 47966492896929606LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x3677 = 13U;
	uint8_t x3680 = 2U;
	static volatile uint32_t t57 = 64794340U;

    t57 = (x3677*(x3678-(x3679>>x3680)));

    if (t57 != 3221226265U) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint32_t x3694 = 107985728U;
	volatile uint64_t x3695 = UINT64_MAX;
	int8_t x3696 = 1;
	volatile uint64_t t58 = 12708319692LLU;

    t58 = (x3693*(x3694-(x3695>>x3696)));

    if (t58 != 9223372038906504659LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x3741 = 227U;
	volatile int16_t x3742 = INT16_MAX;
	static uint32_t x3743 = 45720138U;
	int32_t x3744 = 0;

    t59 = (x3741*(x3742-(x3743>>x3744)));

    if (t59 != 2513868671U) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x3873 = INT16_MAX;
	int32_t x3875 = 194685;
	int8_t x3876 = 18;
	volatile int32_t t60 = -11857714;

    t60 = (x3873*(x3874-(x3875>>x3876)));

    if (t60 != -32767) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x4017 = INT32_MIN;
	uint16_t x4018 = 181U;
	uint32_t x4019 = 2U;
	uint8_t x4020 = 7U;

    t61 = (x4017*(x4018-(x4019>>x4020)));

    if (t61 != 2147483648U) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x4025 = 480848LL;
	uint8_t x4026 = 3U;
	volatile int32_t x4027 = 145186948;
	uint8_t x4028 = 4U;

    t62 = (x4025*(x4026-(x4027>>x4028)));

    if (t62 != -4363301785488LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x4062 = UINT32_MAX;
	static int8_t x4063 = INT8_MAX;
	volatile uint32_t t63 = 295642703U;

    t63 = (x4061*(x4062-(x4063>>x4064)));

    if (t63 != 4294832320U) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x4097 = -19;
	volatile int16_t x4100 = 4;
	int32_t t64 = -1148429;

    t64 = (x4097*(x4098-(x4099>>x4100)));

    if (t64 != 57) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint16_t x4145 = UINT16_MAX;
	int8_t x4146 = INT8_MAX;
	int8_t x4147 = INT8_MAX;
	int8_t x4148 = 1;
	volatile int32_t t65 = 53152708;

    t65 = (x4145*(x4146-(x4147>>x4148)));

    if (t65 != 4194240) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int16_t x4201 = INT16_MAX;
	int32_t x4202 = INT32_MAX;
	uint32_t x4203 = UINT32_MAX;
	static volatile uint8_t x4204 = 22U;
	volatile uint32_t t66 = 953U;

    t66 = (x4201*(x4202-(x4203>>x4204)));

    if (t66 != 2113930240U) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x4233 = 2659U;
	volatile uint8_t x4234 = UINT8_MAX;
	static uint16_t x4235 = 24U;
	static uint32_t x4236 = 3U;
	int32_t t67 = 204805683;

    t67 = (x4233*(x4234-(x4235>>x4236)));

    if (t67 != 670068) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x4241 = 2;
	uint32_t x4243 = UINT32_MAX;

    t68 = (x4241*(x4242-(x4243>>x4244)));

    if (t68 != 4294967194U) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x4266 = 2663;
	int32_t x4267 = 9731590;
	volatile uint8_t x4268 = 3U;

    t69 = (x4265*(x4266-(x4267>>x4268)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x4289 = INT8_MIN;
	volatile uint32_t x4290 = 230U;
	static uint64_t x4291 = 66705703LLU;
	static uint8_t x4292 = 2U;
	uint64_t t70 = 130114721132055LLU;

    t70 = (x4289*(x4290-(x4291>>x4292)));

    if (t70 != 2134552960LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x4301 = -1;

    t71 = (x4301*(x4302-(x4303>>x4304)));

    if (t71 != 1U) { NG(); } else { ; }
	
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


    return 0;
}

