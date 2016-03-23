
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

volatile uint32_t x81 = 33459U;
volatile uint8_t x83 = 76U;
int8_t x134 = 0;
int32_t x135 = -1;
volatile uint64_t t4 = 2823LLU;
int16_t x360 = -45;
uint64_t x389 = 1050772257983LLU;
volatile uint64_t t7 = 16238027707LLU;
volatile int64_t x416 = 18190361LL;
volatile int16_t x478 = 0;
volatile uint32_t x486 = 6U;
int8_t x488 = INT8_MAX;
volatile int16_t x724 = -2047;
int64_t x760 = -1LL;
volatile int64_t t13 = 8025LL;
int32_t x855 = INT32_MIN;
int8_t x856 = INT8_MIN;
int8_t x873 = INT8_MAX;
static int32_t t15 = -13651887;
uint8_t x997 = 64U;
uint8_t x1009 = 60U;
volatile int64_t x1011 = INT64_MIN;
static int32_t x1203 = 407202871;
volatile int32_t t20 = 3935;
volatile int16_t x1233 = 1505;
int64_t x1301 = 1147LL;
uint64_t x1303 = 3821498738072582LLU;
static int64_t t23 = -730916LL;
static int8_t x1325 = INT8_MAX;
volatile uint64_t x1326 = 0LLU;
static uint16_t x1328 = 3U;
static int32_t t26 = 292;
static volatile int16_t x1409 = 0;
int8_t x1411 = 4;
int64_t x1412 = -1LL;
int8_t x1428 = -1;
int8_t x1510 = 5;
volatile int16_t x1539 = -1;
int8_t x1602 = 4;
int16_t x1603 = -1;
static int32_t t32 = 4;
int8_t x1760 = INT8_MIN;
volatile uint32_t x1801 = UINT32_MAX;
volatile uint32_t t37 = 3U;
int32_t x1874 = 1;
int16_t x2023 = 27;
uint16_t x2039 = 2U;
static volatile uint8_t x2040 = UINT8_MAX;
static uint16_t x2232 = 841U;
static uint16_t x2362 = 29U;
static volatile int32_t x2391 = INT32_MAX;
int32_t x2445 = 39559052;
volatile uint8_t x2514 = 20U;
volatile int32_t t48 = -356;
static volatile int8_t x2590 = 42;
int32_t x2591 = -406254;
static int32_t x2711 = -1;
int16_t x2712 = 7;
int32_t t52 = -8389;
volatile int64_t x2805 = 2LL;
int8_t x2807 = INT8_MIN;
volatile int16_t x2906 = 5;
int64_t x3040 = -1LL;
int8_t x3149 = INT8_MAX;
int64_t x3151 = INT64_MAX;
static int32_t x3171 = INT32_MIN;
int32_t x3212 = INT32_MIN;
uint16_t x3253 = 152U;
static volatile int32_t t59 = -104113;
volatile int32_t t60 = 59050;
uint8_t x3278 = 3U;
volatile int64_t x3431 = INT64_MAX;
uint32_t t64 = 98U;
static int64_t x3515 = 880138003445384LL;
uint8_t x3741 = 2U;
uint8_t x3742 = 25U;
int8_t x3743 = INT8_MIN;
volatile uint32_t x3847 = UINT32_MAX;
uint16_t x3877 = 2550U;
int8_t x4031 = 1;
int32_t t70 = -299928;
int16_t x4135 = -1;
int32_t x4159 = -1;
static volatile int32_t t74 = 3054522;
uint8_t x4290 = 0U;
volatile uint32_t t76 = 635U;
volatile int32_t t77 = 123;
int64_t x4457 = 2447LL;
uint8_t x4458 = 29U;
uint64_t x4481 = 59574646380065149LLU;
uint8_t x4521 = 25U;
static volatile int8_t x4564 = INT8_MIN;
int8_t x4586 = 0;
uint8_t x4661 = UINT8_MAX;
uint8_t x4957 = 7U;
volatile int8_t x5025 = 0;
volatile int8_t x5026 = 1;
volatile int32_t t87 = -23285395;


void f0(void) {
    	uint64_t x13 = 42499443253969799LLU;
	int8_t x14 = 3;
	uint16_t x15 = 5122U;
	uint8_t x16 = 1U;
	volatile uint64_t t0 = 61746665362LLU;

    t0 = (x13<<(x14|(x15!=x16)));

    if (t0 != 339995546031758392LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x33 = UINT8_MAX;
	static uint64_t x34 = 6LLU;
	int16_t x35 = INT16_MAX;
	int16_t x36 = INT16_MIN;
	static int32_t t1 = -1726761;

    t1 = (x33<<(x34|(x35!=x36)));

    if (t1 != 32640) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x82 = 1U;
	uint8_t x84 = 0U;
	volatile uint32_t t2 = 6U;

    t2 = (x81<<(x82|(x83!=x84)));

    if (t2 != 66918U) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint32_t x97 = 3703992U;
	uint16_t x98 = 1U;
	int32_t x99 = INT32_MIN;
	static int8_t x100 = INT8_MIN;
	volatile uint32_t t3 = 1079037726U;

    t3 = (x97<<(x98|(x99!=x100)));

    if (t3 != 7407984U) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint64_t x133 = 3485LLU;
	volatile int16_t x136 = 9896;

    t4 = (x133<<(x134|(x135!=x136)));

    if (t4 != 6970LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x345 = 1106759820058953LLU;
	uint16_t x346 = 9U;
	int16_t x347 = INT16_MAX;
	static int64_t x348 = -54727828302068299LL;
	uint64_t t5 = 988398890200986788LLU;

    t5 = (x345<<(x346|(x347!=x348)));

    if (t5 != 566661027870183936LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x357 = UINT32_MAX;
	uint8_t x358 = 3U;
	int64_t x359 = -1LL;
	volatile uint32_t t6 = 268621799U;

    t6 = (x357<<(x358|(x359!=x360)));

    if (t6 != 4294967288U) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x390 = 28U;
	volatile uint8_t x391 = 9U;
	int32_t x392 = INT32_MIN;

    t7 = (x389<<(x390|(x391!=x392)));

    if (t7 != 10726738236345942016LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile uint64_t x413 = 1817411878682195768LLU;
	uint8_t x414 = 5U;
	int8_t x415 = 47;
	uint64_t t8 = 415606260304LLU;

    t8 = (x413<<(x414|(x415!=x416)));

    if (t8 != 2816947896701609728LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x477 = 7U;
	static int64_t x479 = INT64_MIN;
	uint16_t x480 = UINT16_MAX;
	uint32_t t9 = 54U;

    t9 = (x477<<(x478|(x479!=x480)));

    if (t9 != 14U) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x485 = INT16_MAX;
	static int8_t x487 = INT8_MAX;
	volatile int32_t t10 = 37828780;

    t10 = (x485<<(x486|(x487!=x488)));

    if (t10 != 2097088) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint8_t x721 = 23U;
	uint8_t x722 = 2U;
	int8_t x723 = -23;
	int32_t t11 = 595316938;

    t11 = (x721<<(x722|(x723!=x724)));

    if (t11 != 184) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x757 = INT16_MAX;
	uint16_t x758 = 3U;
	int64_t x759 = INT64_MAX;
	volatile int32_t t12 = -5;

    t12 = (x757<<(x758|(x759!=x760)));

    if (t12 != 262136) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x801 = 606751LL;
	static uint8_t x802 = 5U;
	uint64_t x803 = 620696519332413801LLU;
	uint32_t x804 = 2U;

    t13 = (x801<<(x802|(x803!=x804)));

    if (t13 != 19416032LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x853 = 12U;
	int16_t x854 = 1;
	static int32_t t14 = -46884688;

    t14 = (x853<<(x854|(x855!=x856)));

    if (t14 != 24) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x874 = 0U;
	static uint16_t x875 = 10U;
	uint64_t x876 = 3079614384LLU;

    t15 = (x873<<(x874|(x875!=x876)));

    if (t15 != 254) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x961 = INT16_MAX;
	uint8_t x962 = 10U;
	int64_t x963 = INT64_MIN;
	volatile int64_t x964 = INT64_MAX;
	int32_t t16 = 718;

    t16 = (x961<<(x962|(x963!=x964)));

    if (t16 != 67106816) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x998 = 1U;
	int64_t x999 = -5LL;
	int32_t x1000 = INT32_MIN;
	static volatile int32_t t17 = 26;

    t17 = (x997<<(x998|(x999!=x1000)));

    if (t17 != 128) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x1010 = 1;
	static volatile int64_t x1012 = -1LL;
	int32_t t18 = 1;

    t18 = (x1009<<(x1010|(x1011!=x1012)));

    if (t18 != 120) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint16_t x1161 = 1U;
	int8_t x1162 = 1;
	int32_t x1163 = INT32_MIN;
	volatile int8_t x1164 = -1;
	volatile int32_t t19 = -1913;

    t19 = (x1161<<(x1162|(x1163!=x1164)));

    if (t19 != 2) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x1201 = 11;
	volatile uint8_t x1202 = 1U;
	volatile int8_t x1204 = INT8_MIN;

    t20 = (x1201<<(x1202|(x1203!=x1204)));

    if (t20 != 22) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x1209 = 31U;
	int8_t x1210 = 3;
	uint32_t x1211 = UINT32_MAX;
	uint16_t x1212 = 1U;
	int32_t t21 = 1861;

    t21 = (x1209<<(x1210|(x1211!=x1212)));

    if (t21 != 248) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x1234 = 0;
	volatile int8_t x1235 = -2;
	int8_t x1236 = -15;
	volatile int32_t t22 = 21;

    t22 = (x1233<<(x1234|(x1235!=x1236)));

    if (t22 != 3010) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x1302 = 18;
	uint8_t x1304 = UINT8_MAX;

    t23 = (x1301<<(x1302|(x1303!=x1304)));

    if (t23 != 601358336LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x1327 = 17U;
	static int32_t t24 = -661;

    t24 = (x1325<<(x1326|(x1327!=x1328)));

    if (t24 != 254) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x1329 = INT8_MAX;
	uint16_t x1330 = 12U;
	int64_t x1331 = -1LL;
	int8_t x1332 = INT8_MIN;
	static int32_t t25 = 212584615;

    t25 = (x1329<<(x1330|(x1331!=x1332)));

    if (t25 != 1040384) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x1373 = UINT8_MAX;
	uint8_t x1374 = 2U;
	int8_t x1375 = -1;
	int64_t x1376 = -160175LL;

    t26 = (x1373<<(x1374|(x1375!=x1376)));

    if (t26 != 2040) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x1385 = INT8_MAX;
	volatile uint8_t x1386 = 4U;
	volatile int64_t x1387 = INT64_MAX;
	int64_t x1388 = INT64_MAX;
	int32_t t27 = 10750287;

    t27 = (x1385<<(x1386|(x1387!=x1388)));

    if (t27 != 2032) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x1410 = 1;
	volatile int32_t t28 = -369;

    t28 = (x1409<<(x1410|(x1411!=x1412)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x1425 = 1U;
	uint8_t x1426 = 15U;
	uint32_t x1427 = UINT32_MAX;
	volatile int32_t t29 = -120;

    t29 = (x1425<<(x1426|(x1427!=x1428)));

    if (t29 != 32768) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x1509 = INT8_MAX;
	static int16_t x1511 = -86;
	uint8_t x1512 = 1U;
	int32_t t30 = -281151;

    t30 = (x1509<<(x1510|(x1511!=x1512)));

    if (t30 != 4064) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint8_t x1537 = 27U;
	static int8_t x1538 = 0;
	int16_t x1540 = -1;
	static int32_t t31 = 0;

    t31 = (x1537<<(x1538|(x1539!=x1540)));

    if (t31 != 27) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x1601 = 410U;
	uint16_t x1604 = UINT16_MAX;

    t32 = (x1601<<(x1602|(x1603!=x1604)));

    if (t32 != 13120) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x1641 = 0U;
	int64_t x1642 = 1LL;
	int32_t x1643 = INT32_MIN;
	int32_t x1644 = INT32_MIN;
	static int32_t t33 = 2318;

    t33 = (x1641<<(x1642|(x1643!=x1644)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x1657 = 1U;
	int8_t x1658 = 3;
	uint16_t x1659 = 2486U;
	volatile uint64_t x1660 = 2575366822LLU;
	volatile int32_t t34 = -58;

    t34 = (x1657<<(x1658|(x1659!=x1660)));

    if (t34 != 8) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x1697 = 9;
	uint8_t x1698 = 27U;
	static uint16_t x1699 = UINT16_MAX;
	int64_t x1700 = INT64_MIN;
	int32_t t35 = 158745;

    t35 = (x1697<<(x1698|(x1699!=x1700)));

    if (t35 != 1207959552) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x1757 = UINT32_MAX;
	volatile int8_t x1758 = 1;
	int8_t x1759 = -1;
	uint32_t t36 = 146883424U;

    t36 = (x1757<<(x1758|(x1759!=x1760)));

    if (t36 != 4294967294U) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x1802 = 0U;
	volatile int16_t x1803 = 2;
	int16_t x1804 = INT16_MIN;

    t37 = (x1801<<(x1802|(x1803!=x1804)));

    if (t37 != 4294967294U) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x1809 = UINT8_MAX;
	static int16_t x1810 = 0;
	int16_t x1811 = INT16_MIN;
	int32_t x1812 = 135883807;
	volatile int32_t t38 = -2216;

    t38 = (x1809<<(x1810|(x1811!=x1812)));

    if (t38 != 510) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x1873 = 22101;
	int16_t x1875 = -1;
	uint16_t x1876 = UINT16_MAX;
	volatile int32_t t39 = 247580399;

    t39 = (x1873<<(x1874|(x1875!=x1876)));

    if (t39 != 44202) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x2021 = INT8_MAX;
	uint8_t x2022 = 7U;
	volatile int64_t x2024 = -1LL;
	volatile int32_t t40 = -923;

    t40 = (x2021<<(x2022|(x2023!=x2024)));

    if (t40 != 16256) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x2037 = UINT64_MAX;
	static int64_t x2038 = 0LL;
	static volatile uint64_t t41 = 10165080121538LLU;

    t41 = (x2037<<(x2038|(x2039!=x2040)));

    if (t41 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x2229 = 0;
	int16_t x2230 = 7;
	int64_t x2231 = INT64_MIN;
	volatile int32_t t42 = -201533;

    t42 = (x2229<<(x2230|(x2231!=x2232)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x2321 = 1999159068034347934LLU;
	volatile int8_t x2322 = 43;
	int8_t x2323 = INT8_MIN;
	int16_t x2324 = INT16_MIN;
	volatile uint64_t t43 = 8823017647561404803LLU;

    t43 = (x2321<<(x2322|(x2323!=x2324)));

    if (t43 != 9339603610050232320LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x2361 = 2654631859LLU;
	int16_t x2363 = 1181;
	static volatile int64_t x2364 = -3393496075LL;
	uint64_t t44 = 5261446001LLU;

    t44 = (x2361<<(x2362|(x2363!=x2364)));

    if (t44 != 1425194627165585408LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x2389 = INT8_MAX;
	static uint32_t x2390 = 0U;
	volatile uint8_t x2392 = UINT8_MAX;
	static volatile int32_t t45 = 1838735;

    t45 = (x2389<<(x2390|(x2391!=x2392)));

    if (t45 != 254) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x2421 = 15257LL;
	uint16_t x2422 = 14U;
	uint16_t x2423 = UINT16_MAX;
	int64_t x2424 = INT64_MAX;
	int64_t t46 = -272783636681LL;

    t46 = (x2421<<(x2422|(x2423!=x2424)));

    if (t46 != 499941376LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x2446 = 2U;
	uint32_t x2447 = 3U;
	volatile int16_t x2448 = INT16_MIN;
	static int32_t t47 = -302203264;

    t47 = (x2445<<(x2446|(x2447!=x2448)));

    if (t47 != 316472416) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x2513 = INT8_MAX;
	int8_t x2515 = -1;
	int16_t x2516 = INT16_MIN;

    t48 = (x2513<<(x2514|(x2515!=x2516)));

    if (t48 != 266338304) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x2589 = 9768112216231LLU;
	static int32_t x2592 = -1;
	volatile uint64_t t49 = 1568LLU;

    t49 = (x2589<<(x2590|(x2591!=x2592)));

    if (t49 != 16052298019483156480LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x2653 = 28U;
	volatile int16_t x2654 = 3;
	uint32_t x2655 = 715945U;
	uint8_t x2656 = 1U;
	static uint32_t t50 = 2514482U;

    t50 = (x2653<<(x2654|(x2655!=x2656)));

    if (t50 != 224U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x2657 = UINT32_MAX;
	int32_t x2658 = 0;
	static int16_t x2659 = INT16_MIN;
	volatile int16_t x2660 = INT16_MIN;
	uint32_t t51 = UINT32_MAX;

    t51 = (x2657<<(x2658|(x2659!=x2660)));

    if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x2709 = 13U;
	volatile int8_t x2710 = 0;

    t52 = (x2709<<(x2710|(x2711!=x2712)));

    if (t52 != 26) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x2806 = 6;
	uint8_t x2808 = 0U;
	volatile int64_t t53 = -424LL;

    t53 = (x2805<<(x2806|(x2807!=x2808)));

    if (t53 != 256LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x2905 = INT16_MAX;
	static volatile int16_t x2907 = INT16_MAX;
	volatile uint8_t x2908 = 76U;
	int32_t t54 = -360099987;

    t54 = (x2905<<(x2906|(x2907!=x2908)));

    if (t54 != 1048544) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint32_t x3037 = 1U;
	uint8_t x3038 = 1U;
	uint32_t x3039 = 190982U;
	volatile uint32_t t55 = 368706U;

    t55 = (x3037<<(x3038|(x3039!=x3040)));

    if (t55 != 2U) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x3150 = 1;
	int16_t x3152 = INT16_MIN;
	static volatile int32_t t56 = -197210;

    t56 = (x3149<<(x3150|(x3151!=x3152)));

    if (t56 != 254) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x3169 = 1;
	int16_t x3170 = 29;
	int16_t x3172 = INT16_MAX;
	volatile int32_t t57 = 535566;

    t57 = (x3169<<(x3170|(x3171!=x3172)));

    if (t57 != 536870912) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x3209 = 18U;
	static int8_t x3210 = 15;
	int64_t x3211 = INT64_MAX;
	volatile uint32_t t58 = 277323U;

    t58 = (x3209<<(x3210|(x3211!=x3212)));

    if (t58 != 589824U) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x3254 = 11;
	volatile uint8_t x3255 = 21U;
	uint8_t x3256 = 1U;

    t59 = (x3253<<(x3254|(x3255!=x3256)));

    if (t59 != 311296) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x3273 = 0;
	volatile uint8_t x3274 = 3U;
	int16_t x3275 = INT16_MIN;
	uint32_t x3276 = UINT32_MAX;

    t60 = (x3273<<(x3274|(x3275!=x3276)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x3277 = 0U;
	int8_t x3279 = INT8_MIN;
	int16_t x3280 = 131;
	int32_t t61 = -16;

    t61 = (x3277<<(x3278|(x3279!=x3280)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint8_t x3353 = 3U;
	uint8_t x3354 = 3U;
	uint32_t x3355 = UINT32_MAX;
	uint8_t x3356 = 63U;
	static int32_t t62 = 684303030;

    t62 = (x3353<<(x3354|(x3355!=x3356)));

    if (t62 != 24) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x3429 = 129744159U;
	volatile uint64_t x3430 = 6LLU;
	static uint8_t x3432 = UINT8_MAX;
	static uint32_t t63 = 241U;

    t63 = (x3429<<(x3430|(x3431!=x3432)));

    if (t63 != 3722350464U) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x3481 = 1530559U;
	int32_t x3482 = 0;
	volatile uint8_t x3483 = 118U;
	int16_t x3484 = INT16_MAX;

    t64 = (x3481<<(x3482|(x3483!=x3484)));

    if (t64 != 3061118U) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint8_t x3513 = 1U;
	uint8_t x3514 = 18U;
	uint16_t x3516 = 31U;
	int32_t t65 = -1;

    t65 = (x3513<<(x3514|(x3515!=x3516)));

    if (t65 != 524288) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x3553 = INT16_MAX;
	int8_t x3554 = 5;
	int16_t x3555 = -1;
	int64_t x3556 = INT64_MIN;
	int32_t t66 = 8;

    t66 = (x3553<<(x3554|(x3555!=x3556)));

    if (t66 != 1048544) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x3744 = -1;
	volatile int32_t t67 = -82329;

    t67 = (x3741<<(x3742|(x3743!=x3744)));

    if (t67 != 67108864) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x3845 = 14953417U;
	int8_t x3846 = 13;
	uint8_t x3848 = UINT8_MAX;
	volatile uint32_t t68 = 118450U;

    t68 = (x3845<<(x3846|(x3847!=x3848)));

    if (t68 != 2239307776U) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x3878 = 0;
	static uint16_t x3879 = 6992U;
	int8_t x3880 = INT8_MIN;
	volatile int32_t t69 = -1519914;

    t69 = (x3877<<(x3878|(x3879!=x3880)));

    if (t69 != 5100) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x4029 = 2U;
	int8_t x4030 = 14;
	int8_t x4032 = -1;

    t70 = (x4029<<(x4030|(x4031!=x4032)));

    if (t70 != 65536) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x4033 = UINT8_MAX;
	uint8_t x4034 = 14U;
	volatile int32_t x4035 = -1;
	int16_t x4036 = 1;
	static int32_t t71 = -571369;

    t71 = (x4033<<(x4034|(x4035!=x4036)));

    if (t71 != 8355840) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint8_t x4129 = 4U;
	int8_t x4130 = 2;
	volatile uint8_t x4131 = 6U;
	uint32_t x4132 = 237U;
	int32_t t72 = -59;

    t72 = (x4129<<(x4130|(x4131!=x4132)));

    if (t72 != 32) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint16_t x4133 = 37U;
	uint32_t x4134 = 24U;
	static uint16_t x4136 = UINT16_MAX;
	static volatile int32_t t73 = 1;

    t73 = (x4133<<(x4134|(x4135!=x4136)));

    if (t73 != 1241513984) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x4157 = 2;
	uint8_t x4158 = 10U;
	static int16_t x4160 = INT16_MIN;

    t74 = (x4157<<(x4158|(x4159!=x4160)));

    if (t74 != 4096) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x4265 = 486;
	static uint8_t x4266 = 4U;
	int64_t x4267 = -1LL;
	uint8_t x4268 = 0U;
	int32_t t75 = -819307;

    t75 = (x4265<<(x4266|(x4267!=x4268)));

    if (t75 != 15552) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint32_t x4289 = UINT32_MAX;
	uint64_t x4291 = 26633778916LLU;
	int8_t x4292 = 0;

    t76 = (x4289<<(x4290|(x4291!=x4292)));

    if (t76 != 4294967294U) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x4429 = 19;
	static int64_t x4430 = 11LL;
	uint16_t x4431 = 0U;
	int16_t x4432 = INT16_MIN;

    t77 = (x4429<<(x4430|(x4431!=x4432)));

    if (t77 != 38912) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x4459 = 1313093;
	int32_t x4460 = INT32_MAX;
	volatile int64_t t78 = -8672796707590LL;

    t78 = (x4457<<(x4458|(x4459!=x4460)));

    if (t78 != 1313723121664LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x4482 = 0;
	static uint16_t x4483 = 474U;
	uint8_t x4484 = 127U;
	uint64_t t79 = 274656LLU;

    t79 = (x4481<<(x4482|(x4483!=x4484)));

    if (t79 != 119149292760130298LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint16_t x4522 = 0U;
	uint32_t x4523 = UINT32_MAX;
	static int16_t x4524 = INT16_MAX;
	int32_t t80 = -4954686;

    t80 = (x4521<<(x4522|(x4523!=x4524)));

    if (t80 != 50) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x4561 = 11417U;
	static int8_t x4562 = 12;
	static int64_t x4563 = 1364059LL;
	uint32_t t81 = 13325U;

    t81 = (x4561<<(x4562|(x4563!=x4564)));

    if (t81 != 93528064U) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x4585 = 0;
	volatile uint64_t x4587 = UINT64_MAX;
	volatile int32_t x4588 = INT32_MIN;
	volatile int32_t t82 = -15;

    t82 = (x4585<<(x4586|(x4587!=x4588)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x4641 = 120300LLU;
	uint8_t x4642 = 1U;
	int8_t x4643 = -1;
	uint32_t x4644 = 48059203U;
	uint64_t t83 = 8502706380210759945LLU;

    t83 = (x4641<<(x4642|(x4643!=x4644)));

    if (t83 != 240600LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x4662 = 1LLU;
	int16_t x4663 = INT16_MIN;
	uint64_t x4664 = 1262914475926089LLU;
	volatile int32_t t84 = -181;

    t84 = (x4661<<(x4662|(x4663!=x4664)));

    if (t84 != 510) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x4665 = 11U;
	int8_t x4666 = 2;
	static uint64_t x4667 = 318147468914272827LLU;
	int64_t x4668 = INT64_MAX;
	uint32_t t85 = 4306574U;

    t85 = (x4665<<(x4666|(x4667!=x4668)));

    if (t85 != 88U) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x4958 = 0;
	int8_t x4959 = -1;
	uint64_t x4960 = UINT64_MAX;
	int32_t t86 = 21152;

    t86 = (x4957<<(x4958|(x4959!=x4960)));

    if (t86 != 7) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x5027 = INT32_MIN;
	volatile int8_t x5028 = -1;

    t87 = (x5025<<(x5026|(x5027!=x5028)));

    if (t87 != 0) { NG(); } else { ; }
	
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


    return 0;
}

