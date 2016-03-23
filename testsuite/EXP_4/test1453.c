
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

uint8_t x102 = 1U;
int32_t x324 = INT32_MIN;
uint32_t t5 = 46268551U;
volatile uint16_t x353 = 4U;
static uint8_t x386 = 15U;
int32_t t8 = 121;
uint16_t x473 = 53U;
volatile int32_t x476 = INT32_MAX;
int64_t x488 = INT64_MIN;
static uint32_t x521 = UINT32_MAX;
int16_t x724 = INT16_MAX;
int32_t t17 = -47828598;
uint32_t t18 = 964U;
int32_t t19 = -3735;
static uint32_t x999 = 14345261U;
uint64_t x1000 = 15795LLU;
int8_t x1225 = INT8_MAX;
int32_t x1244 = INT32_MIN;
static volatile int8_t x1333 = INT8_MAX;
uint16_t x1345 = UINT16_MAX;
int8_t x1346 = 0;
volatile int32_t t26 = 59108794;
int16_t x1353 = 14;
uint32_t x1354 = 24U;
volatile int32_t t27 = 20372;
static int8_t x1362 = 1;
volatile uint64_t t29 = 32203246842079LLU;
static volatile uint8_t x1570 = 1U;
uint64_t x1619 = UINT64_MAX;
volatile uint64_t x1649 = UINT64_MAX;
volatile int16_t x1677 = INT16_MAX;
volatile uint32_t x1678 = 6U;
volatile int32_t t39 = -419;
static uint16_t x2053 = UINT16_MAX;
static volatile uint8_t x2055 = UINT8_MAX;
volatile uint8_t x2056 = 18U;
volatile int32_t t42 = 0;
uint32_t x2134 = 2U;
volatile int32_t t46 = 40356;
uint32_t x2574 = 1U;
int64_t t47 = -5141775690LL;
static volatile int16_t x2591 = -1;
int32_t t51 = 42868;
int32_t x2799 = INT32_MIN;
int64_t x2821 = 248297886729401LL;
uint8_t x2929 = UINT8_MAX;
uint32_t x2930 = 0U;
uint16_t x2938 = 2U;
int64_t x2939 = -1LL;
volatile int8_t x2940 = -5;
int16_t x2967 = 5;
volatile int32_t x2995 = -1;
uint32_t x2996 = 2175691U;
uint16_t x3068 = 28U;
uint8_t x3070 = 1U;
uint16_t x3071 = UINT16_MAX;
int8_t x3072 = INT8_MIN;
volatile uint32_t t59 = 21413504U;
int8_t x3117 = 37;
volatile uint16_t x3120 = UINT16_MAX;
volatile int32_t t61 = 9607891;
uint16_t x3162 = 3U;
int64_t x3164 = 9628126LL;
static uint16_t x3169 = 0U;
int8_t x3170 = 0;
uint64_t x3315 = UINT64_MAX;
int64_t x3337 = INT64_MAX;
static uint64_t x3358 = 1LLU;
int64_t x3359 = -1LL;
static uint64_t x3360 = 160LLU;
volatile int32_t x3371 = INT32_MIN;
volatile uint8_t x3406 = 2U;
volatile int16_t x3453 = 1;
uint8_t x3544 = 14U;
int8_t x3580 = INT8_MIN;
static int16_t x3701 = INT16_MAX;
static volatile int8_t x3702 = 5;
static volatile uint16_t x3704 = 9464U;
static int8_t x3753 = INT8_MAX;
uint8_t x3754 = 0U;
uint64_t x3769 = UINT64_MAX;
int16_t x3842 = 0;
volatile int32_t t79 = 1035216;
uint8_t x4162 = 1U;
static int64_t x4197 = INT64_MAX;
uint64_t x4403 = 4045607517LLU;
uint16_t x4538 = 1U;
int64_t x4539 = INT64_MIN;
uint16_t x4673 = 9U;
static volatile int16_t x4697 = 8;
static uint8_t x4828 = 10U;


void f0(void) {
    	uint16_t x65 = 1U;
	uint8_t x66 = 22U;
	uint8_t x67 = 11U;
	static uint64_t x68 = 1269316LLU;
	int32_t t0 = 3551;

    t0 = (x65>>(x66<<(x67==x68)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x101 = INT8_MAX;
	volatile int16_t x103 = -1;
	int64_t x104 = 49215LL;
	int32_t t1 = -15491125;

    t1 = (x101>>(x102<<(x103==x104)));

    if (t1 != 63) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x145 = INT16_MAX;
	int8_t x146 = 23;
	int8_t x147 = -1;
	int64_t x148 = INT64_MIN;
	int32_t t2 = 0;

    t2 = (x145>>(x146<<(x147==x148)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int32_t x293 = 166920652;
	static int16_t x294 = 0;
	int8_t x295 = INT8_MIN;
	int32_t x296 = INT32_MIN;
	static int32_t t3 = -2463;

    t3 = (x293>>(x294<<(x295==x296)));

    if (t3 != 166920652) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint16_t x321 = UINT16_MAX;
	volatile uint8_t x322 = 15U;
	int32_t x323 = INT32_MIN;
	static int32_t t4 = 805137;

    t4 = (x321>>(x322<<(x323==x324)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x341 = UINT32_MAX;
	int8_t x342 = 19;
	volatile int64_t x343 = -1LL;
	static uint32_t x344 = UINT32_MAX;

    t5 = (x341>>(x342<<(x343==x344)));

    if (t5 != 8191U) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint16_t x354 = 28U;
	volatile int8_t x355 = INT8_MAX;
	uint32_t x356 = 1723U;
	static int32_t t6 = 3200027;

    t6 = (x353>>(x354<<(x355==x356)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x385 = UINT8_MAX;
	volatile uint16_t x387 = UINT16_MAX;
	int16_t x388 = -1;
	int32_t t7 = -63337;

    t7 = (x385>>(x386<<(x387==x388)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x409 = 35U;
	uint16_t x410 = 0U;
	int16_t x411 = INT16_MIN;
	int8_t x412 = INT8_MAX;

    t8 = (x409>>(x410<<(x411==x412)));

    if (t8 != 35) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x474 = 3U;
	volatile int32_t x475 = INT32_MIN;
	volatile int32_t t9 = 1;

    t9 = (x473>>(x474<<(x475==x476)));

    if (t9 != 6) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x485 = 401578848821LLU;
	volatile int32_t x486 = 5;
	int32_t x487 = 421553;
	volatile uint64_t t10 = 4LLU;

    t10 = (x485>>(x486<<(x487==x488)));

    if (t10 != 12549339025LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x522 = 24;
	int32_t x523 = INT32_MIN;
	int32_t x524 = -1;
	uint32_t t11 = 257891U;

    t11 = (x521>>(x522<<(x523==x524)));

    if (t11 != 255U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x605 = 14U;
	volatile uint16_t x606 = 27U;
	static uint64_t x607 = 91068636133700892LLU;
	int8_t x608 = 1;
	volatile int32_t t12 = -190410843;

    t12 = (x605>>(x606<<(x607==x608)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint8_t x721 = 13U;
	uint8_t x722 = 0U;
	uint32_t x723 = 35350U;
	static volatile int32_t t13 = 9;

    t13 = (x721>>(x722<<(x723==x724)));

    if (t13 != 13) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int32_t x813 = INT32_MAX;
	uint8_t x814 = 1U;
	uint32_t x815 = UINT32_MAX;
	volatile int16_t x816 = -130;
	int32_t t14 = 388;

    t14 = (x813>>(x814<<(x815==x816)));

    if (t14 != 1073741823) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x885 = 62LLU;
	uint16_t x886 = 0U;
	static int16_t x887 = -1;
	uint16_t x888 = 242U;
	uint64_t t15 = 897440840330694812LLU;

    t15 = (x885>>(x886<<(x887==x888)));

    if (t15 != 62LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x889 = UINT8_MAX;
	uint8_t x890 = 4U;
	uint32_t x891 = 28962U;
	int16_t x892 = -1;
	static int32_t t16 = -9;

    t16 = (x889>>(x890<<(x891==x892)));

    if (t16 != 15) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint8_t x937 = UINT8_MAX;
	uint8_t x938 = 1U;
	volatile uint8_t x939 = 0U;
	volatile int64_t x940 = -1552301542552LL;

    t17 = (x937>>(x938<<(x939==x940)));

    if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x957 = 473330U;
	volatile uint32_t x958 = 1U;
	uint8_t x959 = UINT8_MAX;
	static int16_t x960 = -1;

    t18 = (x957>>(x958<<(x959==x960)));

    if (t18 != 236665U) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x969 = 0;
	static uint16_t x970 = 1U;
	int16_t x971 = INT16_MAX;
	uint8_t x972 = 31U;

    t19 = (x969>>(x970<<(x971==x972)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x997 = 0;
	int8_t x998 = 3;
	static volatile int32_t t20 = -79665;

    t20 = (x997>>(x998<<(x999==x1000)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int64_t x1081 = INT64_MAX;
	uint8_t x1082 = 30U;
	volatile int16_t x1083 = INT16_MAX;
	static uint32_t x1084 = UINT32_MAX;
	volatile int64_t t21 = 10479992292LL;

    t21 = (x1081>>(x1082<<(x1083==x1084)));

    if (t21 != 8589934591LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x1125 = 5U;
	static int16_t x1126 = 7;
	int8_t x1127 = -1;
	int16_t x1128 = INT16_MIN;
	volatile int32_t t22 = 103524;

    t22 = (x1125>>(x1126<<(x1127==x1128)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x1226 = 1LL;
	uint8_t x1227 = 2U;
	volatile uint8_t x1228 = 88U;
	static int32_t t23 = 9;

    t23 = (x1225>>(x1226<<(x1227==x1228)));

    if (t23 != 63) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x1241 = INT8_MAX;
	int16_t x1242 = 0;
	int64_t x1243 = INT64_MIN;
	volatile int32_t t24 = -7992506;

    t24 = (x1241>>(x1242<<(x1243==x1244)));

    if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint16_t x1334 = 31U;
	int8_t x1335 = -11;
	uint32_t x1336 = 14U;
	int32_t t25 = 56228;

    t25 = (x1333>>(x1334<<(x1335==x1336)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x1347 = INT32_MIN;
	static uint32_t x1348 = 393638372U;

    t26 = (x1345>>(x1346<<(x1347==x1348)));

    if (t26 != 65535) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x1355 = 2047698LL;
	int32_t x1356 = -894223218;

    t27 = (x1353>>(x1354<<(x1355==x1356)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x1361 = INT32_MAX;
	volatile int16_t x1363 = 1;
	volatile int16_t x1364 = INT16_MIN;
	int32_t t28 = -33839;

    t28 = (x1361>>(x1362<<(x1363==x1364)));

    if (t28 != 1073741823) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x1517 = 518569LLU;
	volatile uint32_t x1518 = 0U;
	int64_t x1519 = INT64_MIN;
	volatile int64_t x1520 = INT64_MIN;

    t29 = (x1517>>(x1518<<(x1519==x1520)));

    if (t29 != 518569LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint32_t x1525 = 891412944U;
	uint32_t x1526 = 3U;
	static int8_t x1527 = INT8_MAX;
	int8_t x1528 = INT8_MIN;
	uint32_t t30 = 4912463U;

    t30 = (x1525>>(x1526<<(x1527==x1528)));

    if (t30 != 111426618U) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x1569 = UINT16_MAX;
	int64_t x1571 = INT64_MAX;
	volatile int8_t x1572 = 11;
	volatile int32_t t31 = 1;

    t31 = (x1569>>(x1570<<(x1571==x1572)));

    if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x1617 = 37295LLU;
	volatile uint8_t x1618 = 0U;
	static volatile uint64_t x1620 = UINT64_MAX;
	uint64_t t32 = 422032077615LLU;

    t32 = (x1617>>(x1618<<(x1619==x1620)));

    if (t32 != 37295LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x1650 = 1U;
	uint16_t x1651 = 43U;
	int64_t x1652 = -93130303LL;
	volatile uint64_t t33 = 62117449761LLU;

    t33 = (x1649>>(x1650<<(x1651==x1652)));

    if (t33 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x1679 = INT8_MAX;
	int32_t x1680 = INT32_MIN;
	static int32_t t34 = -45614;

    t34 = (x1677>>(x1678<<(x1679==x1680)));

    if (t34 != 511) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x1709 = UINT64_MAX;
	int8_t x1710 = 0;
	volatile int64_t x1711 = -14LL;
	static int64_t x1712 = -66970794453706LL;
	static volatile uint64_t t35 = UINT64_MAX;

    t35 = (x1709>>(x1710<<(x1711==x1712)));

    if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x1797 = 228302677254499131LL;
	volatile int8_t x1798 = 1;
	static uint32_t x1799 = UINT32_MAX;
	int64_t x1800 = 4338959220186090776LL;
	int64_t t36 = -903992400604321284LL;

    t36 = (x1797>>(x1798<<(x1799==x1800)));

    if (t36 != 114151338627249565LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x1857 = INT32_MAX;
	static int16_t x1858 = 7;
	uint32_t x1859 = 67U;
	uint16_t x1860 = 4427U;
	static volatile int32_t t37 = 158133;

    t37 = (x1857>>(x1858<<(x1859==x1860)));

    if (t37 != 16777215) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint32_t x1877 = UINT32_MAX;
	static uint8_t x1878 = 12U;
	int64_t x1879 = -1089855627632966285LL;
	int8_t x1880 = 0;
	uint32_t t38 = 38825U;

    t38 = (x1877>>(x1878<<(x1879==x1880)));

    if (t38 != 1048575U) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint8_t x1893 = 5U;
	volatile int8_t x1894 = 6;
	int8_t x1895 = 2;
	uint16_t x1896 = 7U;

    t39 = (x1893>>(x1894<<(x1895==x1896)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x1913 = INT64_MAX;
	int64_t x1914 = 4LL;
	int16_t x1915 = INT16_MIN;
	volatile int8_t x1916 = -1;
	int64_t t40 = -113LL;

    t40 = (x1913>>(x1914<<(x1915==x1916)));

    if (t40 != 576460752303423487LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile uint64_t x2013 = UINT64_MAX;
	volatile int32_t x2014 = 0;
	volatile int16_t x2015 = 12;
	static uint16_t x2016 = 104U;
	static volatile uint64_t t41 = UINT64_MAX;

    t41 = (x2013>>(x2014<<(x2015==x2016)));

    if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x2054 = 4U;

    t42 = (x2053>>(x2054<<(x2055==x2056)));

    if (t42 != 4095) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x2081 = 0;
	volatile uint64_t x2082 = 3LLU;
	int32_t x2083 = INT32_MAX;
	int8_t x2084 = INT8_MIN;
	volatile int32_t t43 = -1698861;

    t43 = (x2081>>(x2082<<(x2083==x2084)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int32_t x2133 = 72;
	int8_t x2135 = INT8_MIN;
	uint8_t x2136 = 4U;
	int32_t t44 = -1347725;

    t44 = (x2133>>(x2134<<(x2135==x2136)));

    if (t44 != 18) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x2501 = 4577LLU;
	uint8_t x2502 = 6U;
	volatile int32_t x2503 = -1;
	int64_t x2504 = -1LL;
	uint64_t t45 = 47511434384LLU;

    t45 = (x2501>>(x2502<<(x2503==x2504)));

    if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x2565 = INT8_MAX;
	uint32_t x2566 = 0U;
	int16_t x2567 = 105;
	int16_t x2568 = -1;

    t46 = (x2565>>(x2566<<(x2567==x2568)));

    if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int64_t x2573 = 15454653185909905LL;
	int32_t x2575 = INT32_MIN;
	int8_t x2576 = -13;

    t47 = (x2573>>(x2574<<(x2575==x2576)));

    if (t47 != 7727326592954952LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x2589 = 7;
	int16_t x2590 = 23;
	int32_t x2592 = -16;
	int32_t t48 = 2057;

    t48 = (x2589>>(x2590<<(x2591==x2592)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x2669 = 8190;
	volatile uint32_t x2670 = 0U;
	uint8_t x2671 = 38U;
	int32_t x2672 = 1182333;
	int32_t t49 = 1768596;

    t49 = (x2669>>(x2670<<(x2671==x2672)));

    if (t49 != 8190) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x2673 = 12633;
	uint16_t x2674 = 0U;
	int32_t x2675 = -1;
	uint16_t x2676 = 5U;
	static volatile int32_t t50 = 8771;

    t50 = (x2673>>(x2674<<(x2675==x2676)));

    if (t50 != 12633) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x2769 = 6;
	uint16_t x2770 = 22U;
	volatile uint32_t x2771 = UINT32_MAX;
	volatile int32_t x2772 = -8344;

    t51 = (x2769>>(x2770<<(x2771==x2772)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x2797 = 719;
	uint8_t x2798 = 0U;
	static int16_t x2800 = INT16_MIN;
	volatile int32_t t52 = 50117;

    t52 = (x2797>>(x2798<<(x2799==x2800)));

    if (t52 != 719) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x2822 = 23U;
	int64_t x2823 = INT64_MIN;
	volatile int8_t x2824 = INT8_MAX;
	int64_t t53 = -4103571LL;

    t53 = (x2821>>(x2822<<(x2823==x2824)));

    if (t53 != 29599414LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint32_t x2931 = 3U;
	int64_t x2932 = INT64_MIN;
	int32_t t54 = -5;

    t54 = (x2929>>(x2930<<(x2931==x2932)));

    if (t54 != 255) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x2937 = 38793333LL;
	int64_t t55 = 515006015LL;

    t55 = (x2937>>(x2938<<(x2939==x2940)));

    if (t55 != 9698333LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x2965 = INT64_MAX;
	volatile int8_t x2966 = 6;
	int32_t x2968 = -744632654;
	int64_t t56 = -31569456288563485LL;

    t56 = (x2965>>(x2966<<(x2967==x2968)));

    if (t56 != 144115188075855871LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x2993 = 746U;
	static uint8_t x2994 = 8U;
	volatile uint32_t t57 = 444515307U;

    t57 = (x2993>>(x2994<<(x2995==x2996)));

    if (t57 != 2U) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x3065 = 2823U;
	uint8_t x3066 = 8U;
	volatile int64_t x3067 = 516LL;
	int32_t t58 = 612;

    t58 = (x3065>>(x3066<<(x3067==x3068)));

    if (t58 != 11) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint32_t x3069 = 142U;

    t59 = (x3069>>(x3070<<(x3071==x3072)));

    if (t59 != 71U) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int16_t x3085 = 4890;
	uint16_t x3086 = 20U;
	int16_t x3087 = -2;
	uint8_t x3088 = 3U;
	static int32_t t60 = 0;

    t60 = (x3085>>(x3086<<(x3087==x3088)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x3118 = 8U;
	volatile int16_t x3119 = 8;

    t61 = (x3117>>(x3118<<(x3119==x3120)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x3133 = UINT64_MAX;
	uint8_t x3134 = 11U;
	static uint8_t x3135 = 42U;
	static volatile int32_t x3136 = 290810079;
	uint64_t t62 = 670364755221LLU;

    t62 = (x3133>>(x3134<<(x3135==x3136)));

    if (t62 != 9007199254740991LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x3161 = 13;
	int16_t x3163 = INT16_MIN;
	volatile int32_t t63 = -15287776;

    t63 = (x3161>>(x3162<<(x3163==x3164)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x3171 = -726821504;
	static int16_t x3172 = -1;
	static int32_t t64 = 94357381;

    t64 = (x3169>>(x3170<<(x3171==x3172)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x3313 = INT32_MAX;
	volatile uint8_t x3314 = 27U;
	volatile uint32_t x3316 = 873166148U;
	volatile int32_t t65 = -69370548;

    t65 = (x3313>>(x3314<<(x3315==x3316)));

    if (t65 != 15) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint32_t x3321 = UINT32_MAX;
	uint8_t x3322 = 10U;
	static volatile int16_t x3323 = INT16_MIN;
	uint64_t x3324 = 999113064039189715LLU;
	uint32_t t66 = 134852U;

    t66 = (x3321>>(x3322<<(x3323==x3324)));

    if (t66 != 4194303U) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x3338 = 2;
	int8_t x3339 = -1;
	int64_t x3340 = INT64_MAX;
	int64_t t67 = 17980597LL;

    t67 = (x3337>>(x3338<<(x3339==x3340)));

    if (t67 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int64_t x3357 = INT64_MAX;
	static volatile int64_t t68 = 116065216LL;

    t68 = (x3357>>(x3358<<(x3359==x3360)));

    if (t68 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint16_t x3369 = 2U;
	static uint8_t x3370 = 0U;
	static int16_t x3372 = INT16_MIN;
	int32_t t69 = 150023;

    t69 = (x3369>>(x3370<<(x3371==x3372)));

    if (t69 != 2) { NG(); } else { ; }
	
}

void f70(void) {
    	static int64_t x3405 = 17541385612633612LL;
	uint16_t x3407 = 4U;
	uint64_t x3408 = 24029416LLU;
	static volatile int64_t t70 = 59202411LL;

    t70 = (x3405>>(x3406<<(x3407==x3408)));

    if (t70 != 4385346403158403LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x3454 = 1U;
	volatile int8_t x3455 = -1;
	static int8_t x3456 = INT8_MAX;
	int32_t t71 = 205115183;

    t71 = (x3453>>(x3454<<(x3455==x3456)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x3541 = 3;
	volatile int8_t x3542 = 1;
	static int32_t x3543 = INT32_MIN;
	volatile int32_t t72 = -2383;

    t72 = (x3541>>(x3542<<(x3543==x3544)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x3577 = 206779U;
	uint8_t x3578 = 3U;
	int64_t x3579 = 284161LL;
	volatile uint32_t t73 = 1U;

    t73 = (x3577>>(x3578<<(x3579==x3580)));

    if (t73 != 25847U) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x3703 = INT32_MAX;
	volatile int32_t t74 = 1;

    t74 = (x3701>>(x3702<<(x3703==x3704)));

    if (t74 != 1023) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x3755 = INT64_MAX;
	uint32_t x3756 = 30748U;
	int32_t t75 = 36833;

    t75 = (x3753>>(x3754<<(x3755==x3756)));

    if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x3770 = 12;
	uint32_t x3771 = UINT32_MAX;
	int16_t x3772 = -11;
	uint64_t t76 = 2806247549323955LLU;

    t76 = (x3769>>(x3770<<(x3771==x3772)));

    if (t76 != 4503599627370495LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x3821 = 1U;
	int8_t x3822 = 27;
	int32_t x3823 = INT32_MAX;
	int64_t x3824 = 243434480021LL;
	volatile int32_t t77 = 3620302;

    t77 = (x3821>>(x3822<<(x3823==x3824)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x3841 = 122371252U;
	int16_t x3843 = 68;
	uint32_t x3844 = 16531U;
	uint32_t t78 = 8122105U;

    t78 = (x3841>>(x3842<<(x3843==x3844)));

    if (t78 != 122371252U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x3933 = 16078U;
	static uint16_t x3934 = 3U;
	int64_t x3935 = 176LL;
	int32_t x3936 = INT32_MAX;

    t79 = (x3933>>(x3934<<(x3935==x3936)));

    if (t79 != 2009) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x4081 = 2012066796U;
	int32_t x4082 = 0;
	int8_t x4083 = -1;
	uint16_t x4084 = 329U;
	volatile uint32_t t80 = 1063235682U;

    t80 = (x4081>>(x4082<<(x4083==x4084)));

    if (t80 != 2012066796U) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x4161 = 2;
	int16_t x4163 = 3;
	int16_t x4164 = 59;
	volatile int32_t t81 = 651092059;

    t81 = (x4161>>(x4162<<(x4163==x4164)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x4198 = 13U;
	static int32_t x4199 = INT32_MIN;
	uint16_t x4200 = 4U;
	int64_t t82 = -1638LL;

    t82 = (x4197>>(x4198<<(x4199==x4200)));

    if (t82 != 1125899906842623LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x4205 = INT32_MAX;
	static volatile int8_t x4206 = 1;
	static volatile uint16_t x4207 = 23U;
	volatile uint16_t x4208 = 3U;
	volatile int32_t t83 = 388;

    t83 = (x4205>>(x4206<<(x4207==x4208)));

    if (t83 != 1073741823) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x4325 = INT16_MAX;
	static uint16_t x4326 = 5U;
	static uint16_t x4327 = 47U;
	static volatile uint32_t x4328 = 15U;
	volatile int32_t t84 = -3;

    t84 = (x4325>>(x4326<<(x4327==x4328)));

    if (t84 != 1023) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x4397 = 61940426581LL;
	uint8_t x4398 = 13U;
	uint16_t x4399 = 470U;
	int32_t x4400 = -1;
	int64_t t85 = 659255053723LL;

    t85 = (x4397>>(x4398<<(x4399==x4400)));

    if (t85 != 7561087LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x4401 = 869U;
	uint8_t x4402 = 1U;
	int32_t x4404 = INT32_MIN;
	volatile int32_t t86 = 86047;

    t86 = (x4401>>(x4402<<(x4403==x4404)));

    if (t86 != 434) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x4421 = 246;
	volatile int32_t x4422 = 0;
	int16_t x4423 = -474;
	int16_t x4424 = -14874;
	volatile int32_t t87 = 330528;

    t87 = (x4421>>(x4422<<(x4423==x4424)));

    if (t87 != 246) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x4481 = 1;
	volatile int32_t x4482 = 0;
	int16_t x4483 = 168;
	int32_t x4484 = INT32_MIN;
	int32_t t88 = -182;

    t88 = (x4481>>(x4482<<(x4483==x4484)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x4521 = 12U;
	static uint16_t x4522 = 1U;
	int16_t x4523 = 183;
	int32_t x4524 = -232;
	static volatile int32_t t89 = 3824944;

    t89 = (x4521>>(x4522<<(x4523==x4524)));

    if (t89 != 6) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x4537 = 4;
	int16_t x4540 = -1;
	int32_t t90 = -1;

    t90 = (x4537>>(x4538<<(x4539==x4540)));

    if (t90 != 2) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x4653 = INT64_MAX;
	uint32_t x4654 = 9U;
	volatile int8_t x4655 = INT8_MAX;
	static int8_t x4656 = INT8_MIN;
	volatile int64_t t91 = -1121377482521869225LL;

    t91 = (x4653>>(x4654<<(x4655==x4656)));

    if (t91 != 18014398509481983LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x4674 = 3U;
	int8_t x4675 = -1;
	volatile uint16_t x4676 = 1U;
	int32_t t92 = -1461;

    t92 = (x4673>>(x4674<<(x4675==x4676)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint8_t x4698 = 0U;
	int32_t x4699 = INT32_MIN;
	int64_t x4700 = -7LL;
	int32_t t93 = 467920225;

    t93 = (x4697>>(x4698<<(x4699==x4700)));

    if (t93 != 8) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint8_t x4781 = 2U;
	int8_t x4782 = 0;
	int8_t x4783 = -4;
	int16_t x4784 = INT16_MIN;
	int32_t t94 = 371642557;

    t94 = (x4781>>(x4782<<(x4783==x4784)));

    if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x4825 = 10180469048LLU;
	uint32_t x4826 = 61U;
	uint16_t x4827 = UINT16_MAX;
	volatile uint64_t t95 = 10907704LLU;

    t95 = (x4825>>(x4826<<(x4827==x4828)));

    if (t95 != 0LLU) { NG(); } else { ; }
	
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


    return 0;
}

