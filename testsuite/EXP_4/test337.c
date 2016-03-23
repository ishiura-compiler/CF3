
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

int8_t x56 = -3;
static uint32_t x174 = UINT32_MAX;
uint32_t x330 = 68217U;
uint16_t x331 = 1U;
volatile uint32_t t6 = 25522U;
static int64_t x376 = -1LL;
int32_t t8 = -6306;
static volatile int32_t t9 = 73;
uint16_t x498 = UINT16_MAX;
static volatile int32_t x519 = -1;
int32_t x520 = -1;
static int32_t x582 = 17868;
uint32_t x820 = UINT32_MAX;
uint8_t x993 = 80U;
int32_t x1114 = INT32_MAX;
uint64_t x1390 = 26002839247LLU;
static int16_t x1392 = INT16_MAX;
volatile uint64_t t19 = 157LLU;
static uint64_t x1493 = 420827016108LLU;
uint8_t x1626 = 1U;
volatile int16_t x1628 = -1;
static uint64_t x1877 = 786911057644LLU;
int8_t x1879 = 6;
volatile int64_t x1880 = -1LL;
int16_t x1891 = INT16_MIN;
volatile int64_t t24 = -4233715487721666731LL;
int32_t x1998 = INT32_MAX;
static int32_t x2000 = -1;
int16_t x2258 = 1;
int32_t x2259 = -1;
static int32_t x2375 = -1;
static int32_t x2480 = -1;
volatile int32_t x2684 = -1;
int16_t x2771 = 7;
volatile int8_t x2805 = 4;
int32_t x2826 = INT32_MAX;
static int64_t x2917 = -52751647993945602LL;
uint32_t x2918 = 3537U;
int64_t x2984 = -1LL;
static int8_t x3007 = -1;
static uint32_t x3042 = 45544U;
volatile uint8_t x3279 = 51U;
uint16_t x3280 = 5U;
uint32_t x3374 = 29U;
int64_t x3376 = -1LL;
uint32_t t41 = 71U;
static uint64_t x3705 = UINT64_MAX;
uint8_t x4150 = UINT8_MAX;
int32_t x4155 = -1;
volatile uint32_t x4156 = UINT32_MAX;
int64_t x4312 = INT64_MIN;
uint8_t x4415 = 27U;
int32_t t49 = -805;
uint32_t x4712 = UINT32_MAX;
int16_t x4949 = 940;
int8_t x4970 = 1;
int32_t x4972 = -1;
int32_t t53 = INT32_MAX;
int8_t x5079 = -1;
static int16_t x5084 = -24;
volatile uint32_t t57 = 245849862U;
int8_t x5317 = -2;
volatile uint8_t x5319 = 2U;
static volatile int8_t x5496 = -1;
uint32_t x5498 = UINT32_MAX;
uint8_t x5499 = 11U;
int32_t x5719 = INT32_MIN;
uint64_t t62 = 420856LLU;
volatile uint8_t x6127 = 3U;
static uint32_t t63 = 10U;
volatile uint64_t t65 = 119475831213100567LLU;
volatile uint64_t t66 = 1LLU;
uint64_t x6358 = 664533625669572670LLU;
static uint8_t x6410 = 41U;
volatile int16_t x6526 = 2;
static uint32_t x6528 = UINT32_MAX;
uint64_t t73 = 51988035315LLU;
int32_t x6718 = 10418;
static volatile int16_t x6719 = -1;
static int64_t x6843 = INT64_MIN;
int64_t x6844 = INT64_MIN;
volatile int32_t t76 = 110;
static volatile int32_t t77 = -1028056;
static uint64_t x7044 = UINT64_MAX;
volatile int64_t t78 = 221649494632386LL;
uint64_t x7050 = 186LLU;
uint64_t t79 = 80512269987688658LLU;
uint32_t x7322 = 310U;
uint16_t x7411 = 0U;
static int16_t x7412 = -1;
static int8_t x7558 = 22;
int32_t x7559 = 2;
volatile int32_t t86 = 11;
uint32_t t87 = 1U;
uint64_t x7595 = UINT64_MAX;
volatile int16_t x8084 = -1;
volatile uint32_t x8158 = 0U;
int16_t x8331 = -1;
int64_t t94 = -1004305869LL;
volatile int64_t t95 = -47LL;
uint64_t x8370 = 2LLU;
int32_t x8693 = INT32_MIN;
uint16_t x9150 = 2U;
uint16_t x9151 = 27U;
volatile int64_t t104 = -573595784011284918LL;
volatile uint64_t x9194 = 576478722970536LLU;
volatile uint16_t x9196 = 238U;
int32_t x9202 = INT32_MAX;
volatile int8_t x9203 = INT8_MIN;
static uint16_t x9557 = 1532U;
static int8_t x9560 = -1;
int64_t x9753 = -1565LL;
static int64_t x9755 = INT64_MIN;
static volatile int64_t x9756 = INT64_MIN;
static int64_t t109 = -47670049521228183LL;
static int64_t x9851 = INT64_MIN;
volatile int32_t t111 = -7302750;


void f0(void) {
    	volatile int32_t x53 = INT32_MAX;
	int64_t x54 = 1227001042302107751LL;
	volatile int64_t x55 = -3LL;
	int64_t t0 = 3LL;

    t0 = (x53+(x54>>(x55-x56)));

    if (t0 != 1227001044449591398LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x77 = INT64_MIN;
	uint64_t x78 = UINT64_MAX;
	int16_t x79 = 53;
	int32_t x80 = -1;
	static volatile uint64_t t1 = 1321849689109LLU;

    t1 = (x77+(x78>>(x79-x80)));

    if (t1 != 9223372036854776831LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x101 = 16757962LLU;
	int16_t x102 = 4400;
	volatile int16_t x103 = 2;
	static volatile int16_t x104 = -3;
	uint64_t t2 = 40234LLU;

    t2 = (x101+(x102>>(x103-x104)));

    if (t2 != 16758099LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x173 = -1;
	volatile uint16_t x175 = 12U;
	uint8_t x176 = 0U;
	volatile uint32_t t3 = 4U;

    t3 = (x173+(x174>>(x175-x176)));

    if (t3 != 1048574U) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint32_t x249 = UINT32_MAX;
	uint64_t x250 = 24172869231LLU;
	volatile int8_t x251 = -1;
	static volatile uint32_t x252 = UINT32_MAX;
	uint64_t t4 = 298968154631922501LLU;

    t4 = (x249+(x250>>(x251-x252)));

    if (t4 != 28467836526LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x325 = -794;
	uint32_t x326 = 0U;
	int8_t x327 = -1;
	int64_t x328 = -1LL;
	volatile uint32_t t5 = 155955U;

    t5 = (x325+(x326>>(x327-x328)));

    if (t5 != 4294966502U) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x329 = INT8_MIN;
	int16_t x332 = -2;

    t6 = (x329+(x330>>(x331-x332)));

    if (t6 != 8399U) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x357 = INT32_MIN;
	uint64_t x358 = 1997LLU;
	static int8_t x359 = -1;
	int8_t x360 = -1;
	volatile uint64_t t7 = 291144290334467889LLU;

    t7 = (x357+(x358>>(x359-x360)));

    if (t7 != 18446744071562069965LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x373 = UINT8_MAX;
	int16_t x374 = INT16_MAX;
	uint64_t x375 = UINT64_MAX;

    t8 = (x373+(x374>>(x375-x376)));

    if (t8 != 33022) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int8_t x445 = -1;
	int8_t x446 = INT8_MAX;
	int8_t x447 = INT8_MIN;
	int8_t x448 = INT8_MIN;

    t9 = (x445+(x446>>(x447-x448)));

    if (t9 != 126) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x497 = -3;
	int16_t x499 = 0;
	volatile int8_t x500 = -1;
	volatile int32_t t10 = 1422;

    t10 = (x497+(x498>>(x499-x500)));

    if (t10 != 32764) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x517 = INT32_MIN;
	int8_t x518 = INT8_MAX;
	int32_t t11 = -1197832;

    t11 = (x517+(x518>>(x519-x520)));

    if (t11 != -2147483521) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint32_t x581 = 38U;
	int8_t x583 = -1;
	volatile uint64_t x584 = UINT64_MAX;
	uint32_t t12 = 4016344U;

    t12 = (x581+(x582>>(x583-x584)));

    if (t12 != 17906U) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x801 = INT64_MIN;
	volatile int16_t x802 = INT16_MAX;
	int32_t x803 = INT32_MIN;
	int32_t x804 = INT32_MIN;
	static int64_t t13 = -10029LL;

    t13 = (x801+(x802>>(x803-x804)));

    if (t13 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x817 = INT32_MIN;
	int16_t x818 = 163;
	volatile int8_t x819 = 0;
	volatile int32_t t14 = 895157115;

    t14 = (x817+(x818>>(x819-x820)));

    if (t14 != -2147483567) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x994 = 26U;
	uint8_t x995 = 1U;
	int16_t x996 = -1;
	volatile int32_t t15 = 6921;

    t15 = (x993+(x994>>(x995-x996)));

    if (t15 != 86) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x1097 = -1;
	int8_t x1098 = INT8_MAX;
	int64_t x1099 = INT64_MAX;
	int64_t x1100 = INT64_MAX;
	int32_t t16 = 34491;

    t16 = (x1097+(x1098>>(x1099-x1100)));

    if (t16 != 126) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x1113 = UINT32_MAX;
	static uint32_t x1115 = UINT32_MAX;
	uint32_t x1116 = UINT32_MAX;
	static volatile uint32_t t17 = 1446571U;

    t17 = (x1113+(x1114>>(x1115-x1116)));

    if (t17 != 2147483646U) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x1145 = INT8_MAX;
	volatile uint64_t x1146 = UINT64_MAX;
	int8_t x1147 = 26;
	volatile uint16_t x1148 = 0U;
	volatile uint64_t t18 = 230996381668365LLU;

    t18 = (x1145+(x1146>>(x1147-x1148)));

    if (t18 != 274877907070LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x1389 = 6563;
	static int16_t x1391 = INT16_MAX;

    t19 = (x1389+(x1390>>(x1391-x1392)));

    if (t19 != 26002845810LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x1494 = 0;
	static volatile uint8_t x1495 = 19U;
	volatile int8_t x1496 = 5;
	static uint64_t t20 = 59910LLU;

    t20 = (x1493+(x1494>>(x1495-x1496)));

    if (t20 != 420827016108LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x1625 = INT32_MIN;
	uint8_t x1627 = 0U;
	int32_t t21 = INT32_MIN;

    t21 = (x1625+(x1626>>(x1627-x1628)));

    if (t21 != INT32_MIN) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x1661 = -390;
	int16_t x1662 = INT16_MAX;
	int8_t x1663 = 23;
	int8_t x1664 = -1;
	int32_t t22 = -2183132;

    t22 = (x1661+(x1662>>(x1663-x1664)));

    if (t22 != -390) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x1878 = 270650626180012821LLU;
	volatile uint64_t t23 = 4271985858335250LLU;

    t23 = (x1877+(x1878>>(x1879-x1880)));

    if (t23 != 2115244928088994LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x1889 = -1LL;
	volatile int32_t x1890 = INT32_MAX;
	int16_t x1892 = INT16_MIN;

    t24 = (x1889+(x1890>>(x1891-x1892)));

    if (t24 != 2147483646LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x1997 = 0U;
	uint8_t x1999 = 19U;
	volatile int32_t t25 = 25;

    t25 = (x1997+(x1998>>(x1999-x2000)));

    if (t25 != 2047) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint8_t x2049 = 14U;
	uint32_t x2050 = 265849U;
	int8_t x2051 = -1;
	uint64_t x2052 = UINT64_MAX;
	uint32_t t26 = 7U;

    t26 = (x2049+(x2050>>(x2051-x2052)));

    if (t26 != 265863U) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x2257 = INT16_MIN;
	int8_t x2260 = -1;
	static int32_t t27 = 45828476;

    t27 = (x2257+(x2258>>(x2259-x2260)));

    if (t27 != -32767) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x2309 = INT32_MIN;
	int8_t x2310 = 10;
	uint32_t x2311 = UINT32_MAX;
	static int32_t x2312 = -1;
	int32_t t28 = 754;

    t28 = (x2309+(x2310>>(x2311-x2312)));

    if (t28 != -2147483638) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x2373 = INT64_MIN;
	uint16_t x2374 = 380U;
	int16_t x2376 = -1;
	int64_t t29 = -1412552549001327690LL;

    t29 = (x2373+(x2374>>(x2375-x2376)));

    if (t29 != -9223372036854775428LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x2477 = -1;
	uint8_t x2478 = 3U;
	int8_t x2479 = -1;
	int32_t t30 = -49537276;

    t30 = (x2477+(x2478>>(x2479-x2480)));

    if (t30 != 2) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x2681 = INT8_MIN;
	volatile uint32_t x2682 = 7725U;
	int64_t x2683 = -1LL;
	uint32_t t31 = 520U;

    t31 = (x2681+(x2682>>(x2683-x2684)));

    if (t31 != 7597U) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x2769 = 6U;
	uint32_t x2770 = 17253U;
	static int16_t x2772 = -1;
	uint32_t t32 = 6U;

    t32 = (x2769+(x2770>>(x2771-x2772)));

    if (t32 != 73U) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x2806 = 513148462771272LLU;
	uint64_t x2807 = UINT64_MAX;
	int32_t x2808 = -1;
	uint64_t t33 = 56709LLU;

    t33 = (x2805+(x2806>>(x2807-x2808)));

    if (t33 != 513148462771276LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x2825 = 504LL;
	int64_t x2827 = INT64_MAX;
	volatile int64_t x2828 = INT64_MAX;
	int64_t t34 = 3758LL;

    t34 = (x2825+(x2826>>(x2827-x2828)));

    if (t34 != 2147484151LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint32_t x2919 = UINT32_MAX;
	int8_t x2920 = -20;
	static int64_t t35 = -9391237858728257LL;

    t35 = (x2917+(x2918>>(x2919-x2920)));

    if (t35 != -52751647993945602LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x2981 = 25;
	volatile uint32_t x2982 = 12513U;
	int8_t x2983 = 2;
	volatile uint32_t t36 = 108U;

    t36 = (x2981+(x2982>>(x2983-x2984)));

    if (t36 != 1589U) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile uint16_t x3005 = 1U;
	uint32_t x3006 = 9U;
	static int32_t x3008 = -1;
	uint32_t t37 = 103227736U;

    t37 = (x3005+(x3006>>(x3007-x3008)));

    if (t37 != 10U) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x3041 = -4LL;
	int8_t x3043 = 1;
	static uint64_t x3044 = UINT64_MAX;
	static volatile int64_t t38 = 11635307LL;

    t38 = (x3041+(x3042>>(x3043-x3044)));

    if (t38 != 11382LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x3221 = UINT16_MAX;
	static uint8_t x3222 = 28U;
	static int64_t x3223 = -1LL;
	int16_t x3224 = -1;
	int32_t t39 = -501;

    t39 = (x3221+(x3222>>(x3223-x3224)));

    if (t39 != 65563) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x3277 = -1;
	uint64_t x3278 = 7457LLU;
	uint64_t t40 = UINT64_MAX;

    t40 = (x3277+(x3278>>(x3279-x3280)));

    if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x3373 = -1;
	uint8_t x3375 = 2U;

    t41 = (x3373+(x3374>>(x3375-x3376)));

    if (t41 != 2U) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile uint32_t x3405 = UINT32_MAX;
	volatile uint16_t x3406 = 3967U;
	int16_t x3407 = -1;
	int8_t x3408 = -1;
	static uint32_t t42 = 17894U;

    t42 = (x3405+(x3406>>(x3407-x3408)));

    if (t42 != 3966U) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x3706 = UINT32_MAX;
	static volatile int16_t x3707 = -1;
	static int8_t x3708 = -1;
	uint64_t t43 = 3026008574225619411LLU;

    t43 = (x3705+(x3706>>(x3707-x3708)));

    if (t43 != 4294967294LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x3837 = INT64_MIN;
	uint16_t x3838 = 1017U;
	volatile uint16_t x3839 = 13U;
	volatile uint32_t x3840 = 5U;
	int64_t t44 = -1262976LL;

    t44 = (x3837+(x3838>>(x3839-x3840)));

    if (t44 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x4149 = 10928U;
	static uint16_t x4151 = 0U;
	int64_t x4152 = -1LL;
	volatile int32_t t45 = -122674407;

    t45 = (x4149+(x4150>>(x4151-x4152)));

    if (t45 != 11055) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint64_t x4153 = 22823000183023LLU;
	volatile uint32_t x4154 = UINT32_MAX;
	uint64_t t46 = 137931311031171171LLU;

    t46 = (x4153+(x4154>>(x4155-x4156)));

    if (t46 != 22827295150318LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x4237 = INT64_MIN;
	volatile uint32_t x4238 = 2U;
	static uint8_t x4239 = 2U;
	int8_t x4240 = 1;
	int64_t t47 = -368LL;

    t47 = (x4237+(x4238>>(x4239-x4240)));

    if (t47 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x4309 = INT16_MAX;
	uint64_t x4310 = 33820176357LLU;
	static int64_t x4311 = INT64_MIN;
	uint64_t t48 = 132770086111893721LLU;

    t48 = (x4309+(x4310>>(x4311-x4312)));

    if (t48 != 33820209124LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x4413 = -1;
	volatile uint16_t x4414 = 68U;
	static uint64_t x4416 = UINT64_MAX;

    t49 = (x4413+(x4414>>(x4415-x4416)));

    if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x4589 = INT8_MIN;
	int16_t x4590 = INT16_MAX;
	int64_t x4591 = -1LL;
	int8_t x4592 = -2;
	static volatile int32_t t50 = -496;

    t50 = (x4589+(x4590>>(x4591-x4592)));

    if (t50 != 16255) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint64_t x4709 = 377845017LLU;
	static uint32_t x4710 = UINT32_MAX;
	uint32_t x4711 = UINT32_MAX;
	volatile uint64_t t51 = 72422732417660495LLU;

    t51 = (x4709+(x4710>>(x4711-x4712)));

    if (t51 != 4672812312LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint64_t x4950 = UINT64_MAX;
	volatile uint32_t x4951 = UINT32_MAX;
	static int32_t x4952 = -1;
	volatile uint64_t t52 = 1039LLU;

    t52 = (x4949+(x4950>>(x4951-x4952)));

    if (t52 != 939LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x4969 = INT32_MAX;
	int16_t x4971 = 1;

    t53 = (x4969+(x4970>>(x4971-x4972)));

    if (t53 != INT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x5077 = 4191231LLU;
	static uint8_t x5078 = 6U;
	volatile int64_t x5080 = -1LL;
	volatile uint64_t t54 = 16861822728499767LLU;

    t54 = (x5077+(x5078>>(x5079-x5080)));

    if (t54 != 4191237LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x5081 = 332983LLU;
	volatile int64_t x5082 = 129651LL;
	uint16_t x5083 = 1U;
	static volatile uint64_t t55 = 1207099992215LLU;

    t55 = (x5081+(x5082>>(x5083-x5084)));

    if (t55 != 332983LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x5125 = -281;
	static uint32_t x5126 = UINT32_MAX;
	volatile int16_t x5127 = 3;
	uint32_t x5128 = UINT32_MAX;
	volatile uint32_t t56 = 107487388U;

    t56 = (x5125+(x5126>>(x5127-x5128)));

    if (t56 != 268435174U) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x5289 = UINT32_MAX;
	uint8_t x5290 = UINT8_MAX;
	volatile uint16_t x5291 = 1U;
	volatile int8_t x5292 = -1;

    t57 = (x5289+(x5290>>(x5291-x5292)));

    if (t57 != 62U) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint32_t x5318 = 76030U;
	volatile uint64_t x5320 = UINT64_MAX;
	static volatile uint32_t t58 = 1387348266U;

    t58 = (x5317+(x5318>>(x5319-x5320)));

    if (t58 != 9501U) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x5493 = 1;
	uint32_t x5494 = 0U;
	int8_t x5495 = 2;
	static volatile uint32_t t59 = 786U;

    t59 = (x5493+(x5494>>(x5495-x5496)));

    if (t59 != 1U) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x5497 = INT64_MIN;
	uint8_t x5500 = 0U;
	int64_t t60 = -547220907511LL;

    t60 = (x5497+(x5498>>(x5499-x5500)));

    if (t60 != -9223372036852678657LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x5717 = 4;
	int16_t x5718 = INT16_MAX;
	int32_t x5720 = INT32_MIN;
	int32_t t61 = -12452806;

    t61 = (x5717+(x5718>>(x5719-x5720)));

    if (t61 != 32771) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x6077 = -14;
	uint64_t x6078 = 436819842898LLU;
	int16_t x6079 = INT16_MIN;
	static int16_t x6080 = INT16_MIN;

    t62 = (x6077+(x6078>>(x6079-x6080)));

    if (t62 != 436819842884LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint8_t x6125 = 0U;
	uint32_t x6126 = 721243U;
	int64_t x6128 = -1LL;

    t63 = (x6125+(x6126>>(x6127-x6128)));

    if (t63 != 45077U) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x6209 = INT8_MAX;
	int8_t x6210 = INT8_MAX;
	static volatile uint64_t x6211 = UINT64_MAX;
	int32_t x6212 = -1;
	int32_t t64 = 7;

    t64 = (x6209+(x6210>>(x6211-x6212)));

    if (t64 != 254) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x6245 = INT16_MAX;
	uint64_t x6246 = 77LLU;
	static int8_t x6247 = -1;
	uint32_t x6248 = UINT32_MAX;

    t65 = (x6245+(x6246>>(x6247-x6248)));

    if (t65 != 32844LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x6253 = 15U;
	uint64_t x6254 = UINT64_MAX;
	volatile int8_t x6255 = INT8_MAX;
	static uint8_t x6256 = 118U;

    t66 = (x6253+(x6254>>(x6255-x6256)));

    if (t66 != 36028797018963982LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x6317 = INT32_MIN;
	int64_t x6318 = 25140147228869LL;
	int16_t x6319 = -1;
	int8_t x6320 = -1;
	volatile int64_t t67 = 1928765LL;

    t67 = (x6317+(x6318>>(x6319-x6320)));

    if (t67 != 25137999745221LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x6357 = INT8_MIN;
	int8_t x6359 = INT8_MIN;
	static volatile int32_t x6360 = -150;
	static volatile uint64_t t68 = 2994541687LLU;

    t68 = (x6357+(x6358>>(x6359-x6360)));

    if (t68 != 158437162669LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x6409 = INT64_MIN;
	int8_t x6411 = INT8_MIN;
	int8_t x6412 = INT8_MIN;
	int64_t t69 = 31LL;

    t69 = (x6409+(x6410>>(x6411-x6412)));

    if (t69 != -9223372036854775767LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x6417 = -4;
	volatile uint64_t x6418 = 25842482197873879LLU;
	uint8_t x6419 = 21U;
	volatile int8_t x6420 = -4;
	static uint64_t t70 = 15635LLU;

    t70 = (x6417+(x6418>>(x6419-x6420)));

    if (t70 != 770165981LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x6525 = 2299;
	uint8_t x6527 = 0U;
	static volatile int32_t t71 = -6;

    t71 = (x6525+(x6526>>(x6527-x6528)));

    if (t71 != 2300) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x6577 = -1LL;
	uint16_t x6578 = UINT16_MAX;
	int16_t x6579 = -1;
	int16_t x6580 = -4;
	volatile int64_t t72 = 95239752788559LL;

    t72 = (x6577+(x6578>>(x6579-x6580)));

    if (t72 != 8190LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x6685 = 127;
	static uint64_t x6686 = UINT64_MAX;
	static uint32_t x6687 = 8U;
	int64_t x6688 = 0LL;

    t73 = (x6685+(x6686>>(x6687-x6688)));

    if (t73 != 72057594037928062LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x6705 = INT8_MIN;
	int32_t x6706 = 6;
	static volatile int16_t x6707 = 0;
	int32_t x6708 = -1;
	int32_t t74 = 8174976;

    t74 = (x6705+(x6706>>(x6707-x6708)));

    if (t74 != -125) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x6717 = INT8_MIN;
	volatile int16_t x6720 = -1;
	int32_t t75 = -1;

    t75 = (x6717+(x6718>>(x6719-x6720)));

    if (t75 != 10290) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x6841 = -1;
	int8_t x6842 = 10;

    t76 = (x6841+(x6842>>(x6843-x6844)));

    if (t76 != 9) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint16_t x6965 = UINT16_MAX;
	static int8_t x6966 = 16;
	static int16_t x6967 = 0;
	static int32_t x6968 = -1;

    t77 = (x6965+(x6966>>(x6967-x6968)));

    if (t77 != 65543) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x7041 = 916U;
	int64_t x7042 = INT64_MAX;
	uint8_t x7043 = 0U;

    t78 = (x7041+(x7042>>(x7043-x7044)));

    if (t78 != 4611686018427388819LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint32_t x7049 = 309322U;
	int16_t x7051 = -1;
	static int16_t x7052 = -1;

    t79 = (x7049+(x7050>>(x7051-x7052)));

    if (t79 != 309508LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x7053 = -2;
	static int32_t x7054 = INT32_MAX;
	int16_t x7055 = 14;
	int16_t x7056 = -1;
	static volatile int32_t t80 = -608;

    t80 = (x7053+(x7054>>(x7055-x7056)));

    if (t80 != 65533) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint64_t x7321 = 25796442114795LLU;
	static int16_t x7323 = -1;
	int8_t x7324 = -1;
	volatile uint64_t t81 = 278751913496LLU;

    t81 = (x7321+(x7322>>(x7323-x7324)));

    if (t81 != 25796442115105LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x7333 = -49;
	volatile uint16_t x7334 = UINT16_MAX;
	uint64_t x7335 = UINT64_MAX;
	volatile int32_t x7336 = -1;
	int32_t t82 = 127361;

    t82 = (x7333+(x7334>>(x7335-x7336)));

    if (t82 != 65486) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x7409 = INT32_MIN;
	volatile uint16_t x7410 = UINT16_MAX;
	int32_t t83 = -1381995;

    t83 = (x7409+(x7410>>(x7411-x7412)));

    if (t83 != -2147450881) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x7509 = UINT32_MAX;
	static volatile int8_t x7510 = INT8_MAX;
	static volatile uint16_t x7511 = 1U;
	volatile int64_t x7512 = -1LL;
	uint32_t t84 = 7U;

    t84 = (x7509+(x7510>>(x7511-x7512)));

    if (t84 != 30U) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x7525 = INT64_MIN;
	volatile int32_t x7526 = INT32_MAX;
	uint16_t x7527 = 15U;
	static volatile int64_t x7528 = -1LL;
	volatile int64_t t85 = 17672826358144828LL;

    t85 = (x7525+(x7526>>(x7527-x7528)));

    if (t85 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x7557 = INT32_MIN;
	static int64_t x7560 = -1LL;

    t86 = (x7557+(x7558>>(x7559-x7560)));

    if (t86 != -2147483646) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x7585 = INT32_MIN;
	volatile uint32_t x7586 = 49541U;
	int32_t x7587 = -1;
	int64_t x7588 = -1LL;

    t87 = (x7585+(x7586>>(x7587-x7588)));

    if (t87 != 2147533189U) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x7593 = INT64_MIN;
	int64_t x7594 = 1069517926576LL;
	static int64_t x7596 = -1LL;
	volatile int64_t t88 = 11LL;

    t88 = (x7593+(x7594>>(x7595-x7596)));

    if (t88 != -9223370967336849232LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x7601 = -1;
	static int32_t x7602 = INT32_MAX;
	uint16_t x7603 = 3U;
	static int32_t x7604 = -1;
	static int32_t t89 = 410582;

    t89 = (x7601+(x7602>>(x7603-x7604)));

    if (t89 != 134217726) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x7689 = INT64_MIN;
	static uint64_t x7690 = 254LLU;
	static uint32_t x7691 = 2U;
	uint32_t x7692 = UINT32_MAX;
	volatile uint64_t t90 = 183074923640586657LLU;

    t90 = (x7689+(x7690>>(x7691-x7692)));

    if (t90 != 9223372036854775839LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x7753 = INT8_MIN;
	uint8_t x7754 = 3U;
	uint8_t x7755 = 1U;
	uint32_t x7756 = 1U;
	int32_t t91 = -5236499;

    t91 = (x7753+(x7754>>(x7755-x7756)));

    if (t91 != -125) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x8081 = -4;
	uint64_t x8082 = 249282614147273LLU;
	uint8_t x8083 = 5U;
	uint64_t t92 = 3950684552695LLU;

    t92 = (x8081+(x8082>>(x8083-x8084)));

    if (t92 != 3895040846047LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint64_t x8157 = 0LLU;
	int16_t x8159 = INT16_MAX;
	int16_t x8160 = INT16_MAX;
	uint64_t t93 = 10406LLU;

    t93 = (x8157+(x8158>>(x8159-x8160)));

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x8329 = 1;
	int64_t x8330 = 615684925827144477LL;
	static volatile uint64_t x8332 = UINT64_MAX;

    t94 = (x8329+(x8330>>(x8331-x8332)));

    if (t94 != 615684925827144478LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x8365 = INT64_MIN;
	uint32_t x8366 = UINT32_MAX;
	static uint16_t x8367 = 116U;
	uint8_t x8368 = 85U;

    t95 = (x8365+(x8366>>(x8367-x8368)));

    if (t95 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x8369 = INT16_MIN;
	uint32_t x8371 = UINT32_MAX;
	uint32_t x8372 = UINT32_MAX;
	volatile uint64_t t96 = 74665488839028LLU;

    t96 = (x8369+(x8370>>(x8371-x8372)));

    if (t96 != 18446744073709518850LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x8457 = -1;
	volatile uint8_t x8458 = 0U;
	uint32_t x8459 = 15U;
	int8_t x8460 = 3;
	int32_t t97 = 34;

    t97 = (x8457+(x8458>>(x8459-x8460)));

    if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x8557 = INT16_MIN;
	volatile int8_t x8558 = 12;
	int16_t x8559 = INT16_MIN;
	int16_t x8560 = INT16_MIN;
	static int32_t t98 = 3;

    t98 = (x8557+(x8558>>(x8559-x8560)));

    if (t98 != -32756) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x8694 = 25317038614LL;
	int8_t x8695 = 14;
	static uint32_t x8696 = UINT32_MAX;
	volatile int64_t t99 = -14161439202571193LL;

    t99 = (x8693+(x8694>>(x8695-x8696)));

    if (t99 != -2146711034LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint16_t x8757 = 69U;
	int32_t x8758 = INT32_MAX;
	int8_t x8759 = 47;
	uint16_t x8760 = 37U;
	volatile int32_t t100 = 45448;

    t100 = (x8757+(x8758>>(x8759-x8760)));

    if (t100 != 2097220) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x8953 = -1;
	uint16_t x8954 = 379U;
	static int8_t x8955 = -13;
	volatile int8_t x8956 = -39;
	static int32_t t101 = 0;

    t101 = (x8953+(x8954>>(x8955-x8956)));

    if (t101 != -1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint64_t x9145 = UINT64_MAX;
	int64_t x9146 = INT64_MAX;
	uint8_t x9147 = 36U;
	static int16_t x9148 = -1;
	uint64_t t102 = 4LLU;

    t102 = (x9145+(x9146>>(x9147-x9148)));

    if (t102 != 67108862LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x9149 = 0U;
	uint32_t x9152 = UINT32_MAX;
	uint32_t t103 = 87913U;

    t103 = (x9149+(x9150>>(x9151-x9152)));

    if (t103 != 0U) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x9165 = INT64_MIN;
	int16_t x9166 = INT16_MAX;
	uint8_t x9167 = 10U;
	uint64_t x9168 = UINT64_MAX;

    t104 = (x9165+(x9166>>(x9167-x9168)));

    if (t104 != -9223372036854775793LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint64_t x9193 = 574563175749796LLU;
	uint8_t x9195 = UINT8_MAX;
	uint64_t t105 = 424535788512LLU;

    t105 = (x9193+(x9194>>(x9195-x9196)));

    if (t105 != 574567573933412LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x9201 = 937820325U;
	volatile int8_t x9204 = INT8_MIN;
	uint32_t t106 = 40730U;

    t106 = (x9201+(x9202>>(x9203-x9204)));

    if (t106 != 3085303972U) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x9558 = INT16_MAX;
	uint8_t x9559 = 1U;
	static int32_t t107 = -16;

    t107 = (x9557+(x9558>>(x9559-x9560)));

    if (t107 != 9723) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x9709 = INT8_MIN;
	static volatile uint32_t x9710 = 3418U;
	static int16_t x9711 = 30;
	int16_t x9712 = -1;
	uint32_t t108 = 301738U;

    t108 = (x9709+(x9710>>(x9711-x9712)));

    if (t108 != 4294967168U) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint32_t x9754 = 32017512U;

    t109 = (x9753+(x9754>>(x9755-x9756)));

    if (t109 != 32015947LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x9849 = INT16_MAX;
	uint16_t x9850 = 876U;
	int64_t x9852 = INT64_MIN;
	volatile int32_t t110 = 1476;

    t110 = (x9849+(x9850>>(x9851-x9852)));

    if (t110 != 33643) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x10017 = INT32_MIN;
	uint16_t x10018 = 23U;
	int8_t x10019 = -1;
	int64_t x10020 = -1LL;

    t111 = (x10017+(x10018>>(x10019-x10020)));

    if (t111 != -2147483625) { NG(); } else { ; }
	
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


    return 0;
}

