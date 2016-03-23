
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

volatile uint64_t t1 = 818571708699LLU;
uint8_t x86 = UINT8_MAX;
uint32_t x342 = 8806U;
int16_t x434 = INT16_MIN;
int32_t x704 = -1;
static volatile uint32_t t10 = 32315U;
int8_t x731 = -1;
int32_t t11 = -12392;
volatile int32_t x974 = INT32_MIN;
static volatile uint32_t x1114 = 336U;
uint32_t x1115 = UINT32_MAX;
int8_t x1116 = -7;
volatile int32_t x1362 = -16571009;
volatile int32_t t19 = -28325;
volatile int8_t x1423 = 16;
volatile int32_t t20 = -7469229;
int16_t x1430 = INT16_MIN;
volatile int32_t x1456 = 1;
int8_t x1556 = 1;
int64_t x1602 = -1LL;
volatile int64_t x1604 = INT64_MIN;
int32_t x2137 = INT32_MIN;
volatile int16_t x2140 = 0;
int64_t x2409 = INT64_MIN;
uint8_t x2417 = 2U;
uint32_t x2418 = 1669436818U;
uint64_t t32 = 107314616LLU;
volatile int16_t x2662 = INT16_MAX;
uint32_t t34 = 21056U;
volatile int8_t x2687 = -1;
int32_t x2702 = 1263;
volatile int32_t t38 = -33741606;
static volatile int16_t x2864 = 1;
uint64_t x3109 = 31LLU;
int32_t x3110 = INT32_MAX;
static uint64_t x3112 = 9433788683666LLU;
volatile int32_t t43 = -11;
uint8_t x3301 = 4U;
static int64_t x3304 = 0LL;
int16_t x3613 = INT16_MIN;
uint8_t x3797 = UINT8_MAX;
volatile uint32_t x3801 = 101809U;
static int8_t x3901 = INT8_MIN;
int32_t x3903 = 0;
uint32_t x3948 = UINT32_MAX;
volatile uint32_t t52 = 4U;
uint16_t x3997 = 14U;
uint16_t x3999 = 4U;
uint16_t x4000 = 6U;
static int64_t x4095 = -1LL;
uint64_t x4141 = UINT64_MAX;
uint64_t x4149 = 123989497LLU;
uint8_t x4151 = 22U;
static int64_t x4253 = -273082087794530LL;
int64_t t58 = 8854776LL;
static volatile int8_t x4297 = INT8_MAX;
int32_t x4300 = -2;
static int32_t t59 = -49898711;
int32_t x4403 = -1;
static volatile int32_t x4525 = -747;
int32_t x4552 = INT32_MIN;
int64_t t65 = -75968LL;
static int32_t x4817 = -1848606;
volatile uint64_t x4818 = 59043LLU;
volatile uint64_t t66 = 708758983282193LLU;
uint32_t t67 = 4774U;
int16_t x4891 = -1;
volatile int32_t t68 = -6920190;
static volatile uint32_t t70 = 61106637U;
int64_t x5154 = INT64_MIN;
uint64_t x5155 = 261686736LLU;
volatile uint64_t t73 = 123763288431376LLU;
static uint16_t x5205 = UINT16_MAX;
volatile int8_t x5206 = 0;
uint32_t x5208 = UINT32_MAX;
volatile int8_t x5302 = -1;
int16_t x5303 = -1;


void f0(void) {
    	static int8_t x25 = -1;
	int16_t x26 = INT16_MIN;
	int8_t x27 = 0;
	uint8_t x28 = 1U;
	volatile int32_t t0 = 11115203;

    t0 = ((x25^x26)<<(x27*x28));

    if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x65 = 0;
	static volatile uint64_t x66 = 97956976253256LLU;
	static uint64_t x67 = UINT64_MAX;
	volatile int16_t x68 = -46;

    t1 = ((x65^x66)<<(x67*x68));

    if (t1 != 8525877044565770240LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x85 = 59215779U;
	uint8_t x87 = 0U;
	int64_t x88 = -1LL;
	uint32_t t2 = 178U;

    t2 = ((x85^x86)<<(x87*x88));

    if (t2 != 59215708U) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x121 = INT32_MIN;
	uint64_t x122 = 413312768248409LLU;
	uint8_t x123 = 0U;
	static int64_t x124 = -2LL;
	uint64_t t3 = 38LLU;

    t3 = ((x121^x122)<<(x123*x124));

    if (t3 != 18446330762039626329LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x221 = 2906946U;
	volatile uint16_t x222 = 523U;
	uint8_t x223 = 1U;
	int16_t x224 = 1;
	volatile uint32_t t4 = 0U;

    t4 = ((x221^x222)<<(x223*x224));

    if (t4 != 5812882U) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint8_t x341 = 5U;
	static int8_t x343 = -25;
	int8_t x344 = 0;
	uint32_t t5 = 29U;

    t5 = ((x341^x342)<<(x343*x344));

    if (t5 != 8803U) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x401 = INT32_MIN;
	volatile int32_t x402 = -173;
	int32_t x403 = -1;
	uint8_t x404 = 0U;
	volatile int32_t t6 = -4659;

    t6 = ((x401^x402)<<(x403*x404));

    if (t6 != 2147483475) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x417 = 1732801;
	volatile int64_t x418 = 8936189LL;
	int16_t x419 = INT16_MIN;
	uint8_t x420 = 0U;
	int64_t t7 = 24LL;

    t7 = ((x417^x418)<<(x419*x420));

    if (t7 != 9579068LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x433 = INT64_MIN;
	int8_t x435 = 0;
	uint16_t x436 = UINT16_MAX;
	int64_t t8 = 640595224708LL;

    t8 = ((x433^x434)<<(x435*x436));

    if (t8 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x657 = 25U;
	volatile uint16_t x658 = UINT16_MAX;
	uint64_t x659 = UINT64_MAX;
	uint64_t x660 = UINT64_MAX;
	int32_t t9 = 4079;

    t9 = ((x657^x658)<<(x659*x660));

    if (t9 != 131020) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x701 = -1;
	volatile uint32_t x702 = 13U;
	int32_t x703 = -1;

    t10 = ((x701^x702)<<(x703*x704));

    if (t10 != 4294967268U) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x729 = 39;
	int32_t x730 = 7107;
	int64_t x732 = -1LL;

    t11 = ((x729^x730)<<(x731*x732));

    if (t11 != 14280) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x833 = 0U;
	volatile int8_t x834 = INT8_MAX;
	int16_t x835 = 0;
	static int8_t x836 = INT8_MAX;
	static volatile int32_t t12 = -224;

    t12 = ((x833^x834)<<(x835*x836));

    if (t12 != 127) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x973 = UINT64_MAX;
	uint32_t x975 = UINT32_MAX;
	int8_t x976 = -58;
	volatile uint64_t t13 = 264LLU;

    t13 = ((x973^x974)<<(x975*x976));

    if (t13 != 18158513697557839872LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x1021 = 3U;
	static volatile uint16_t x1022 = 20U;
	int64_t x1023 = -1LL;
	int8_t x1024 = -1;
	static volatile int32_t t14 = -861657630;

    t14 = ((x1021^x1022)<<(x1023*x1024));

    if (t14 != 46) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x1113 = 26U;
	static volatile uint32_t t15 = 377U;

    t15 = ((x1113^x1114)<<(x1115*x1116));

    if (t15 != 42240U) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint64_t x1173 = UINT64_MAX;
	int16_t x1174 = INT16_MIN;
	volatile uint32_t x1175 = 897324273U;
	uint16_t x1176 = 0U;
	uint64_t t16 = 7594268115251LLU;

    t16 = ((x1173^x1174)<<(x1175*x1176));

    if (t16 != 32767LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint64_t x1181 = UINT64_MAX;
	int32_t x1182 = INT32_MIN;
	int8_t x1183 = -18;
	uint64_t x1184 = UINT64_MAX;
	static uint64_t t17 = 7516LLU;

    t17 = ((x1181^x1182)<<(x1183*x1184));

    if (t17 != 562949953159168LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x1301 = INT8_MIN;
	int32_t x1302 = -1;
	int64_t x1303 = -1LL;
	int16_t x1304 = -1;
	volatile int32_t t18 = -61;

    t18 = ((x1301^x1302)<<(x1303*x1304));

    if (t18 != 254) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x1361 = -5;
	int64_t x1363 = 1LL;
	int16_t x1364 = 0;

    t19 = ((x1361^x1362)<<(x1363*x1364));

    if (t19 != 16571012) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x1421 = -1;
	int16_t x1422 = -1;
	int8_t x1424 = 0;

    t20 = ((x1421^x1422)<<(x1423*x1424));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int32_t x1429 = INT32_MIN;
	uint8_t x1431 = 0U;
	int32_t x1432 = -1;
	static int32_t t21 = 469377256;

    t21 = ((x1429^x1430)<<(x1431*x1432));

    if (t21 != 2147450880) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x1453 = 115502;
	static volatile uint64_t x1454 = UINT64_MAX;
	int16_t x1455 = 9;
	volatile uint64_t t22 = 2051503820756LLU;

    t22 = ((x1453^x1454)<<(x1455*x1456));

    if (t22 != 18446744073650414080LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x1553 = 204582390206730LLU;
	static volatile int64_t x1554 = -1LL;
	static int32_t x1555 = 14;
	uint64_t t23 = 35807LLU;

    t23 = ((x1553^x1554)<<(x1555*x1556));

    if (t23 != 15094866192562470912LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x1601 = -2LL;
	volatile uint8_t x1603 = 0U;
	volatile int64_t t24 = 244607565482771457LL;

    t24 = ((x1601^x1602)<<(x1603*x1604));

    if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x1773 = 17U;
	static uint64_t x1774 = 1660261835735016653LLU;
	uint64_t x1775 = 0LLU;
	int8_t x1776 = 4;
	static uint64_t t25 = 289189978584LLU;

    t25 = ((x1773^x1774)<<(x1775*x1776));

    if (t25 != 1660261835735016668LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x1785 = INT8_MIN;
	uint64_t x1786 = 6LLU;
	uint64_t x1787 = UINT64_MAX;
	int8_t x1788 = -19;
	uint64_t t26 = 25193294455161305LLU;

    t26 = ((x1785^x1786)<<(x1787*x1788));

    if (t26 != 18446744073645588480LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x1845 = 0U;
	static uint8_t x1846 = UINT8_MAX;
	static volatile int64_t x1847 = -222272551217LL;
	int32_t x1848 = 0;
	volatile int32_t t27 = 6750;

    t27 = ((x1845^x1846)<<(x1847*x1848));

    if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x1881 = INT16_MIN;
	static volatile uint32_t x1882 = UINT32_MAX;
	uint16_t x1883 = UINT16_MAX;
	static int8_t x1884 = 0;
	uint32_t t28 = 191821U;

    t28 = ((x1881^x1882)<<(x1883*x1884));

    if (t28 != 32767U) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x2138 = INT8_MIN;
	int8_t x2139 = -1;
	volatile int32_t t29 = 8149016;

    t29 = ((x2137^x2138)<<(x2139*x2140));

    if (t29 != 2147483520) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x2410 = INT8_MIN;
	int8_t x2411 = INT8_MAX;
	int8_t x2412 = 0;
	int64_t t30 = 71813190209679740LL;

    t30 = ((x2409^x2410)<<(x2411*x2412));

    if (t30 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x2419 = 0U;
	int64_t x2420 = -1LL;
	volatile uint32_t t31 = 1447483U;

    t31 = ((x2417^x2418)<<(x2419*x2420));

    if (t31 != 1669436816U) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x2461 = 1933452989LL;
	uint64_t x2462 = UINT64_MAX;
	static int64_t x2463 = -1LL;
	int8_t x2464 = -1;

    t32 = ((x2461^x2462)<<(x2463*x2464));

    if (t32 != 18446744069842645636LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x2661 = 0U;
	static uint32_t x2663 = 1366063U;
	static int64_t x2664 = 0LL;
	int32_t t33 = -357659;

    t33 = ((x2661^x2662)<<(x2663*x2664));

    if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x2677 = -1;
	uint32_t x2678 = UINT32_MAX;
	volatile uint8_t x2679 = 0U;
	volatile int32_t x2680 = INT32_MIN;

    t34 = ((x2677^x2678)<<(x2679*x2680));

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x2685 = 208662LLU;
	volatile int64_t x2686 = INT64_MIN;
	uint32_t x2688 = UINT32_MAX;
	volatile uint64_t t35 = 544547842968407LLU;

    t35 = ((x2685^x2686)<<(x2687*x2688));

    if (t35 != 417324LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x2693 = UINT64_MAX;
	volatile int8_t x2694 = -1;
	uint32_t x2695 = 0U;
	int64_t x2696 = INT64_MIN;
	volatile uint64_t t36 = 2LLU;

    t36 = ((x2693^x2694)<<(x2695*x2696));

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint32_t x2701 = 13U;
	static uint8_t x2703 = 0U;
	int32_t x2704 = 998635161;
	volatile uint32_t t37 = 18472U;

    t37 = ((x2701^x2702)<<(x2703*x2704));

    if (t37 != 1250U) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x2721 = INT16_MAX;
	int16_t x2722 = INT16_MAX;
	int8_t x2723 = 0;
	static uint8_t x2724 = 9U;

    t38 = ((x2721^x2722)<<(x2723*x2724));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x2861 = -6294;
	int16_t x2862 = -1;
	uint8_t x2863 = 15U;
	int32_t t39 = -14014057;

    t39 = ((x2861^x2862)<<(x2863*x2864));

    if (t39 != 206209024) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x2977 = 16695330U;
	int8_t x2978 = INT8_MIN;
	int8_t x2979 = 0;
	uint16_t x2980 = UINT16_MAX;
	static volatile uint32_t t40 = 12473796U;

    t40 = ((x2977^x2978)<<(x2979*x2980));

    if (t40 != 4278271906U) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x3069 = -7772;
	static int8_t x3070 = INT8_MIN;
	static int32_t x3071 = INT32_MIN;
	int16_t x3072 = 0;
	static volatile int32_t t41 = 44289391;

    t41 = ((x3069^x3070)<<(x3071*x3072));

    if (t41 != 7716) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x3111 = INT64_MIN;
	uint64_t t42 = 117LLU;

    t42 = ((x3109^x3110)<<(x3111*x3112));

    if (t42 != 2147483616LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x3181 = 7U;
	uint8_t x3182 = 1U;
	static int8_t x3183 = INT8_MAX;
	static uint32_t x3184 = 0U;

    t43 = ((x3181^x3182)<<(x3183*x3184));

    if (t43 != 6) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x3302 = 5;
	int64_t x3303 = -1LL;
	int32_t t44 = -11931510;

    t44 = ((x3301^x3302)<<(x3303*x3304));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint16_t x3489 = 1168U;
	volatile int64_t x3490 = 4LL;
	uint8_t x3491 = 1U;
	int8_t x3492 = 1;
	volatile int64_t t45 = -70LL;

    t45 = ((x3489^x3490)<<(x3491*x3492));

    if (t45 != 2344LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x3593 = INT32_MIN;
	volatile int64_t x3594 = -1LL;
	static volatile int64_t x3595 = -1LL;
	uint64_t x3596 = UINT64_MAX;
	int64_t t46 = -135081LL;

    t46 = ((x3593^x3594)<<(x3595*x3596));

    if (t46 != 4294967294LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x3614 = -16;
	static uint16_t x3615 = UINT16_MAX;
	volatile int16_t x3616 = 0;
	volatile int32_t t47 = -460943811;

    t47 = ((x3613^x3614)<<(x3615*x3616));

    if (t47 != 32752) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x3798 = 3553;
	uint64_t x3799 = UINT64_MAX;
	int8_t x3800 = 0;
	volatile int32_t t48 = 52001484;

    t48 = ((x3797^x3798)<<(x3799*x3800));

    if (t48 != 3358) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x3802 = INT16_MAX;
	int32_t x3803 = INT32_MIN;
	uint32_t x3804 = 32436U;
	volatile uint32_t t49 = 25U;

    t49 = ((x3801^x3802)<<(x3803*x3804));

    if (t49 != 127566U) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint8_t x3861 = UINT8_MAX;
	uint8_t x3862 = 5U;
	uint64_t x3863 = UINT64_MAX;
	int16_t x3864 = -1;
	volatile int32_t t50 = 1;

    t50 = ((x3861^x3862)<<(x3863*x3864));

    if (t50 != 500) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x3902 = -3612110;
	int32_t x3904 = -13268;
	int32_t t51 = -9313565;

    t51 = ((x3901^x3902)<<(x3903*x3904));

    if (t51 != 3612082) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x3945 = 385405U;
	int16_t x3946 = -1;
	int8_t x3947 = -1;

    t52 = ((x3945^x3946)<<(x3947*x3948));

    if (t52 != 4294196484U) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile uint64_t x3998 = 257355996733522LLU;
	uint64_t t53 = 1041855467321LLU;

    t53 = ((x3997^x3998)<<(x3999*x4000));

    if (t53 != 1179032845725728768LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x4045 = INT16_MIN;
	volatile uint32_t x4046 = UINT32_MAX;
	int8_t x4047 = 13;
	uint16_t x4048 = 1U;
	uint32_t t54 = 929U;

    t54 = ((x4045^x4046)<<(x4047*x4048));

    if (t54 != 268427264U) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint64_t x4093 = UINT64_MAX;
	int8_t x4094 = -1;
	int8_t x4096 = -1;
	uint64_t t55 = 6763792593282352154LLU;

    t55 = ((x4093^x4094)<<(x4095*x4096));

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x4142 = INT32_MAX;
	volatile uint16_t x4143 = 1U;
	static uint8_t x4144 = 20U;
	uint64_t t56 = 1786LLU;

    t56 = ((x4141^x4142)<<(x4143*x4144));

    if (t56 != 18444492273895866368LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x4150 = UINT64_MAX;
	uint8_t x4152 = 0U;
	uint64_t t57 = 910916673LLU;

    t57 = ((x4149^x4150)<<(x4151*x4152));

    if (t57 != 18446744073585562118LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x4254 = INT32_MIN;
	int16_t x4255 = 0;
	static volatile int32_t x4256 = -1;

    t58 = ((x4253^x4254)<<(x4255*x4256));

    if (t58 != 273080985950366LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x4298 = 3U;
	static int16_t x4299 = -1;

    t59 = ((x4297^x4298)<<(x4299*x4300));

    if (t59 != 496) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x4337 = INT64_MIN;
	int64_t x4338 = INT64_MIN;
	static int64_t x4339 = -1122485247212985716LL;
	int8_t x4340 = 0;
	volatile int64_t t60 = -5357133LL;

    t60 = ((x4337^x4338)<<(x4339*x4340));

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x4401 = 1244579U;
	uint64_t x4402 = 1350900311054117LLU;
	uint64_t x4404 = UINT64_MAX;
	volatile uint64_t t61 = 422561141890278953LLU;

    t61 = ((x4401^x4402)<<(x4403*x4404));

    if (t61 != 2701800623854860LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x4497 = 746560830203LLU;
	volatile uint64_t x4498 = 139813LLU;
	volatile int32_t x4499 = -1;
	static int8_t x4500 = -1;
	volatile uint64_t t62 = 6992829323671753LLU;

    t62 = ((x4497^x4498)<<(x4499*x4500));

    if (t62 != 1493121380796LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x4526 = INT64_MIN;
	static uint8_t x4527 = 0U;
	int64_t x4528 = 218334208LL;
	int64_t t63 = 895407918522342LL;

    t63 = ((x4525^x4526)<<(x4527*x4528));

    if (t63 != 9223372036854775061LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x4549 = INT64_MIN;
	int32_t x4550 = -1;
	static uint16_t x4551 = 0U;
	static volatile int64_t t64 = INT64_MAX;

    t64 = ((x4549^x4550)<<(x4551*x4552));

    if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x4693 = INT64_MIN;
	int32_t x4694 = -1017352871;
	uint8_t x4695 = 0U;
	int16_t x4696 = -1;

    t65 = ((x4693^x4694)<<(x4695*x4696));

    if (t65 != 9223372035837422937LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x4819 = -1;
	uint32_t x4820 = UINT32_MAX;

    t66 = ((x4817^x4818)<<(x4819*x4820));

    if (t66 != 18446744073705773186LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x4869 = -5575;
	uint32_t x4870 = 906521U;
	volatile uint8_t x4871 = 0U;
	volatile uint8_t x4872 = 1U;

    t67 = ((x4869^x4870)<<(x4871*x4872));

    if (t67 != 4294065952U) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile uint16_t x4889 = 158U;
	uint8_t x4890 = 21U;
	volatile int8_t x4892 = 0;

    t68 = ((x4889^x4890)<<(x4891*x4892));

    if (t68 != 139) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x4905 = -1;
	volatile int8_t x4906 = INT8_MIN;
	int16_t x4907 = 0;
	static int8_t x4908 = 17;
	volatile int32_t t69 = 5;

    t69 = ((x4905^x4906)<<(x4907*x4908));

    if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x4981 = UINT32_MAX;
	volatile uint16_t x4982 = UINT16_MAX;
	volatile uint8_t x4983 = 0U;
	static int8_t x4984 = INT8_MIN;

    t70 = ((x4981^x4982)<<(x4983*x4984));

    if (t70 != 4294901760U) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x5101 = 105U;
	uint16_t x5102 = 309U;
	uint8_t x5103 = 0U;
	uint8_t x5104 = UINT8_MAX;
	int32_t t71 = -1854;

    t71 = ((x5101^x5102)<<(x5103*x5104));

    if (t71 != 348) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x5121 = UINT8_MAX;
	volatile uint32_t x5122 = 2008U;
	int8_t x5123 = -1;
	volatile int32_t x5124 = -1;
	uint32_t t72 = 44405U;

    t72 = ((x5121^x5122)<<(x5123*x5124));

    if (t72 != 3662U) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint64_t x5153 = UINT64_MAX;
	static int64_t x5156 = INT64_MIN;

    t73 = ((x5153^x5154)<<(x5155*x5156));

    if (t73 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x5207 = -1;
	int32_t t74 = -26;

    t74 = ((x5205^x5206)<<(x5207*x5208));

    if (t74 != 131070) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x5301 = 50372216070390767LLU;
	static uint64_t x5304 = UINT64_MAX;
	volatile uint64_t t75 = 7346LLU;

    t75 = ((x5301^x5302)<<(x5303*x5304));

    if (t75 != 18345999641568770080LLU) { NG(); } else { ; }
	
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


    return 0;
}

