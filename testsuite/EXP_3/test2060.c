
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

static int64_t x1 = 66416LL;
int32_t t0 = -14612;
int8_t x12 = 3;
int16_t x19 = INT16_MAX;
uint16_t x20 = 0U;
static int8_t x61 = INT8_MIN;
int16_t x62 = INT16_MAX;
uint8_t x132 = 1U;
int8_t x210 = INT8_MIN;
uint16_t x297 = UINT16_MAX;
static uint16_t x299 = 850U;
static int8_t x316 = 1;
int16_t x341 = INT16_MAX;
int8_t x342 = -1;
uint32_t x437 = 6964U;
int16_t x438 = 48;
uint32_t x466 = 5470U;
static uint32_t x467 = 7716304U;
int64_t x478 = INT64_MIN;
static int16_t x746 = 3922;
uint8_t x835 = 0U;
volatile uint8_t x836 = 5U;
volatile uint16_t x843 = 7U;
uint8_t x864 = 2U;
uint8_t x877 = 38U;
int32_t t22 = -966;
int64_t x950 = INT64_MIN;
static int16_t x951 = 1026;
uint8_t x952 = 4U;
static int32_t t23 = -90336;
uint64_t x1046 = 8042175609605491LLU;
volatile int8_t x1059 = INT8_MAX;
int32_t t26 = 169;
static volatile int8_t x1069 = INT8_MIN;
uint64_t x1071 = 336731LLU;
volatile uint64_t t27 = 122499636LLU;
volatile int32_t x1083 = 12;
int32_t x1084 = 7;
uint16_t x1273 = 65U;
static int32_t t30 = -41;
int64_t x1429 = -443LL;
static uint8_t x1432 = 2U;
uint8_t x1464 = 1U;
volatile uint64_t t35 = 817457603093828LLU;
int32_t x1517 = INT32_MIN;
int64_t x1518 = INT64_MIN;
uint8_t x1520 = 12U;
volatile uint32_t x1595 = UINT32_MAX;
uint32_t t38 = 107597U;
static int8_t x1714 = INT8_MAX;
uint8_t x1716 = 0U;
uint8_t x1733 = UINT8_MAX;
uint16_t x1962 = 234U;
int16_t x1963 = 371;
volatile int32_t t44 = -1;
int64_t x2069 = INT64_MIN;
volatile int64_t t47 = -50493375189LL;
uint32_t x2081 = 0U;
int32_t t48 = 34;
int32_t x2112 = 1;
int8_t x2236 = 1;
static int64_t x2254 = INT64_MIN;
volatile uint32_t x2255 = 0U;
int64_t x2275 = 1LL;
volatile int64_t t53 = -5656433LL;
int16_t x2278 = INT16_MIN;
volatile int32_t t54 = 1806813;
volatile int32_t t56 = -112;
int32_t x2418 = INT32_MIN;
int32_t t58 = -166;
uint16_t x2453 = 3U;
int32_t t60 = -500060365;
volatile int32_t x2558 = 54;
int16_t x2603 = INT16_MAX;
uint8_t x2624 = 0U;
static int8_t x2680 = 2;
uint32_t x2733 = 8145624U;
volatile int8_t x2734 = -7;
static volatile int32_t t68 = 901090;
uint8_t x2882 = 17U;
int64_t x2918 = INT64_MAX;
uint32_t t72 = 263923U;
volatile int16_t x2993 = -1;
static uint8_t x3042 = 0U;
static int64_t x3050 = INT64_MAX;
uint16_t x3052 = 0U;
volatile uint32_t x3124 = 21U;
int8_t x3146 = INT8_MIN;
static int16_t x3226 = INT16_MIN;
int16_t x3378 = -1;
uint64_t x3762 = 35179229593131LLU;
static int32_t t84 = -382;
int64_t x3883 = 0LL;
volatile int8_t x3884 = 20;
uint64_t x3913 = 362522716418176LLU;
volatile uint64_t x3915 = 69127522LLU;
uint8_t x3999 = UINT8_MAX;
volatile int16_t x4000 = 1;
volatile int32_t t88 = -113;
int64_t x4007 = INT64_MAX;
uint32_t x4051 = 12203148U;
uint32_t t90 = 18U;
int16_t x4076 = 1;
int8_t x4088 = 17;
static int64_t x4159 = 8244LL;
int8_t x4169 = -12;
uint64_t x4307 = 7561253672854LLU;
uint32_t x4308 = 16U;
volatile int64_t t96 = -663153805230LL;
uint16_t x4493 = UINT16_MAX;
uint16_t x4494 = 4U;
uint64_t x4581 = 340154774LLU;
int8_t x4584 = 10;
uint16_t x4620 = 3U;
int64_t x4721 = -5574015LL;
static int8_t x4925 = 1;
uint16_t x4926 = 250U;
volatile uint16_t x4927 = UINT16_MAX;
static int64_t x5126 = INT64_MAX;
volatile uint32_t x5128 = 5U;
static int64_t x5201 = INT64_MIN;
volatile int8_t x5204 = 0;
volatile int8_t x5249 = -49;
volatile uint32_t t111 = 100589U;
uint32_t x5322 = UINT32_MAX;
uint64_t x5326 = 84875314LLU;
int16_t x5416 = 15;
static volatile uint8_t x5612 = 0U;
uint16_t x5677 = 3U;
int64_t x5790 = -1LL;
int8_t x5791 = INT8_MAX;
volatile int32_t t119 = -140581123;
uint8_t x5819 = 7U;
uint8_t x5820 = 1U;
uint16_t x5840 = 15U;
int8_t x5951 = INT8_MAX;
volatile uint64_t x5973 = 959622090916956LLU;
int8_t x6006 = -1;
uint32_t x6064 = 0U;
uint32_t x6073 = UINT32_MAX;
static uint16_t x6210 = 0U;
uint8_t x6212 = 0U;
uint64_t x6234 = 53961351236935LLU;
static int8_t x6365 = 5;
int16_t x6368 = 13;
int16_t x6399 = INT16_MAX;
int16_t x6441 = -1;
static uint64_t x6455 = UINT64_MAX;
static uint64_t x6591 = 3069308LLU;
int64_t x6874 = INT64_MIN;
volatile int8_t x6875 = 29;
uint16_t x7017 = 26U;
volatile uint64_t x7018 = 227994640618LLU;
int32_t x7028 = 49;
uint64_t t139 = 55902416881240LLU;
int32_t x7103 = 7;
uint8_t x7104 = 21U;
static uint16_t x7133 = UINT16_MAX;
static int16_t x7136 = 1;
volatile int8_t x7212 = 28;
volatile uint64_t t144 = 504947756331LLU;
static int8_t x7329 = -1;
uint64_t x7367 = UINT64_MAX;
static volatile uint8_t x7368 = 49U;
int32_t x7526 = -1;
int64_t x7573 = -586861517LL;
int32_t x7786 = INT32_MAX;
uint16_t x7799 = 0U;
int8_t x7966 = 0;
volatile int16_t x8074 = INT16_MIN;
int64_t x8095 = 11380648LL;
volatile int16_t x8209 = 536;
volatile int8_t x8210 = INT8_MIN;
volatile uint16_t x8211 = 9567U;
uint8_t x8212 = 14U;
static volatile int32_t t165 = -1988996;
uint16_t x8373 = UINT16_MAX;
static int64_t x8385 = INT64_MAX;
static int8_t x8401 = INT8_MIN;
int8_t x8402 = INT8_MIN;
uint64_t x8403 = 46LLU;
int8_t x8404 = 1;
uint64_t x8439 = UINT64_MAX;
int32_t x8474 = INT32_MIN;
static int16_t x8476 = 17;
int16_t x8505 = -220;
int64_t x8718 = -1LL;
uint64_t x8919 = UINT64_MAX;
int8_t x8986 = 45;
uint64_t x9005 = 101811350201600625LLU;
uint8_t x9008 = 24U;
static int32_t x9059 = INT32_MAX;
uint32_t x9133 = 496U;
int16_t x9169 = INT16_MIN;
int32_t t182 = 103;
int16_t x9181 = -1;
static volatile uint32_t t183 = 7270U;
int8_t x9292 = 1;
volatile uint32_t t186 = 32852824U;
int16_t x9421 = 102;
int64_t x9438 = 16709095467640628LL;
int16_t x9582 = INT16_MIN;
volatile uint32_t x9583 = 164U;
volatile uint32_t t189 = 3236438U;
uint8_t x9592 = 5U;
uint32_t x9863 = 125588637U;
uint16_t x9864 = 5U;
uint32_t t191 = 12918U;
int64_t x9869 = -1LL;
volatile int32_t t192 = 27644;
int32_t x10090 = 1;
int32_t x10102 = INT32_MIN;
static volatile int32_t x10129 = INT32_MIN;
uint64_t x10131 = 162LLU;
volatile int8_t x10132 = 4;
uint16_t x10276 = 2U;
static volatile int32_t t198 = 60617;


void f0(void) {
    	int8_t x2 = -1;
	uint16_t x3 = 14U;
	uint64_t x4 = 7LLU;

    t0 = ((x1==x2)-(x3>>x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x9 = -1;
	int8_t x10 = INT8_MIN;
	volatile uint32_t x11 = 6997U;
	uint32_t t1 = 0U;

    t1 = ((x9==x10)-(x11>>x12));

    if (t1 != 4294966422U) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int8_t x17 = INT8_MIN;
	static int32_t x18 = INT32_MIN;
	int32_t t2 = -3730677;

    t2 = ((x17==x18)-(x19>>x20));

    if (t2 != -32767) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x63 = 285;
	static int16_t x64 = 0;
	volatile int32_t t3 = 3556761;

    t3 = ((x61==x62)-(x63>>x64));

    if (t3 != -285) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x129 = -1;
	int64_t x130 = -1LL;
	uint16_t x131 = 31U;
	int32_t t4 = -10126424;

    t4 = ((x129==x130)-(x131>>x132));

    if (t4 != -14) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x209 = 21;
	uint64_t x211 = UINT64_MAX;
	uint32_t x212 = 0U;
	uint64_t t5 = 6520235LLU;

    t5 = ((x209==x210)-(x211>>x212));

    if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x298 = INT8_MIN;
	uint8_t x300 = 1U;
	static int32_t t6 = 14882;

    t6 = ((x297==x298)-(x299>>x300));

    if (t6 != -425) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x313 = INT16_MIN;
	static volatile int16_t x314 = INT16_MAX;
	volatile uint64_t x315 = UINT64_MAX;
	volatile uint64_t t7 = 8154149228LLU;

    t7 = ((x313==x314)-(x315>>x316));

    if (t7 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x317 = -1;
	static int64_t x318 = INT64_MIN;
	uint16_t x319 = UINT16_MAX;
	uint8_t x320 = 5U;
	int32_t t8 = 343659188;

    t8 = ((x317==x318)-(x319>>x320));

    if (t8 != -2047) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint16_t x343 = UINT16_MAX;
	static int8_t x344 = 19;
	volatile int32_t t9 = -3;

    t9 = ((x341==x342)-(x343>>x344));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint8_t x397 = 3U;
	int8_t x398 = 13;
	volatile uint64_t x399 = UINT64_MAX;
	int16_t x400 = 53;
	uint64_t t10 = 192331LLU;

    t10 = ((x397==x398)-(x399>>x400));

    if (t10 != 18446744073709549569LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x439 = 2499;
	uint8_t x440 = 0U;
	volatile int32_t t11 = -12749972;

    t11 = ((x437==x438)-(x439>>x440));

    if (t11 != -2499) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x465 = UINT32_MAX;
	volatile uint16_t x468 = 1U;
	volatile uint32_t t12 = 1119049U;

    t12 = ((x465==x466)-(x467>>x468));

    if (t12 != 4291109144U) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x477 = UINT64_MAX;
	volatile uint8_t x479 = 5U;
	volatile uint16_t x480 = 3U;
	volatile int32_t t13 = 50;

    t13 = ((x477==x478)-(x479>>x480));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x481 = INT8_MIN;
	static int64_t x482 = INT64_MIN;
	uint8_t x483 = UINT8_MAX;
	uint8_t x484 = 1U;
	static int32_t t14 = 165840058;

    t14 = ((x481==x482)-(x483>>x484));

    if (t14 != -127) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x745 = 665682007LLU;
	static int64_t x747 = INT64_MAX;
	static uint8_t x748 = 33U;
	static int64_t t15 = 126591252075897LL;

    t15 = ((x745==x746)-(x747>>x748));

    if (t15 != -1073741823LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x797 = -1;
	int8_t x798 = -1;
	volatile int16_t x799 = INT16_MAX;
	volatile uint8_t x800 = 13U;
	volatile int32_t t16 = 5195;

    t16 = ((x797==x798)-(x799>>x800));

    if (t16 != -2) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x833 = -1LL;
	static int64_t x834 = INT64_MAX;
	int32_t t17 = 31183494;

    t17 = ((x833==x834)-(x835>>x836));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x841 = INT8_MIN;
	uint16_t x842 = UINT16_MAX;
	uint32_t x844 = 0U;
	volatile int32_t t18 = -100453;

    t18 = ((x841==x842)-(x843>>x844));

    if (t18 != -7) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x849 = UINT64_MAX;
	int8_t x850 = INT8_MIN;
	int32_t x851 = INT32_MAX;
	uint16_t x852 = 5U;
	volatile int32_t t19 = -41480592;

    t19 = ((x849==x850)-(x851>>x852));

    if (t19 != -67108863) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x861 = INT8_MIN;
	uint8_t x862 = UINT8_MAX;
	static volatile int32_t x863 = 3;
	int32_t t20 = -87692142;

    t20 = ((x861==x862)-(x863>>x864));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x878 = 5U;
	volatile int32_t x879 = 2;
	static volatile uint8_t x880 = 9U;
	int32_t t21 = 4;

    t21 = ((x877==x878)-(x879>>x880));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x917 = INT16_MIN;
	static int16_t x918 = 12527;
	static int32_t x919 = INT32_MAX;
	uint32_t x920 = 0U;

    t22 = ((x917==x918)-(x919>>x920));

    if (t22 != -2147483647) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x949 = 18818791490LLU;

    t23 = ((x949==x950)-(x951>>x952));

    if (t23 != -64) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x993 = INT64_MIN;
	static uint8_t x994 = 90U;
	volatile int16_t x995 = INT16_MAX;
	volatile uint8_t x996 = 10U;
	int32_t t24 = 103;

    t24 = ((x993==x994)-(x995>>x996));

    if (t24 != -31) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x1045 = INT64_MAX;
	volatile int16_t x1047 = INT16_MAX;
	uint8_t x1048 = 4U;
	volatile int32_t t25 = 228134952;

    t25 = ((x1045==x1046)-(x1047>>x1048));

    if (t25 != -2047) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x1057 = INT8_MIN;
	volatile uint32_t x1058 = UINT32_MAX;
	volatile uint16_t x1060 = 10U;

    t26 = ((x1057==x1058)-(x1059>>x1060));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x1070 = INT16_MAX;
	int32_t x1072 = 5;

    t27 = ((x1069==x1070)-(x1071>>x1072));

    if (t27 != 18446744073709541094LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x1081 = INT64_MAX;
	volatile uint8_t x1082 = UINT8_MAX;
	volatile int32_t t28 = -714818961;

    t28 = ((x1081==x1082)-(x1083>>x1084));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x1161 = -1LL;
	int16_t x1162 = INT16_MIN;
	int16_t x1163 = INT16_MAX;
	uint8_t x1164 = 3U;
	static int32_t t29 = 1355467;

    t29 = ((x1161==x1162)-(x1163>>x1164));

    if (t29 != -4095) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x1274 = INT16_MAX;
	int8_t x1275 = INT8_MAX;
	int8_t x1276 = 11;

    t30 = ((x1273==x1274)-(x1275>>x1276));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x1309 = INT16_MIN;
	int32_t x1310 = INT32_MIN;
	volatile int64_t x1311 = INT64_MAX;
	static int32_t x1312 = 3;
	static int64_t t31 = 670680544LL;

    t31 = ((x1309==x1310)-(x1311>>x1312));

    if (t31 != -1152921504606846975LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint8_t x1345 = 26U;
	uint64_t x1346 = 279933691525973LLU;
	uint64_t x1347 = UINT64_MAX;
	uint32_t x1348 = 34U;
	volatile uint64_t t32 = 32956862264LLU;

    t32 = ((x1345==x1346)-(x1347>>x1348));

    if (t32 != 18446744072635809793LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x1430 = -1;
	int16_t x1431 = INT16_MAX;
	volatile int32_t t33 = 3;

    t33 = ((x1429==x1430)-(x1431>>x1432));

    if (t33 != -8191) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int8_t x1449 = INT8_MIN;
	static uint8_t x1450 = UINT8_MAX;
	int64_t x1451 = INT64_MAX;
	volatile uint64_t x1452 = 4LLU;
	volatile int64_t t34 = 33900191108306812LL;

    t34 = ((x1449==x1450)-(x1451>>x1452));

    if (t34 != -576460752303423487LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x1461 = UINT64_MAX;
	static int16_t x1462 = INT16_MIN;
	uint64_t x1463 = 128027LLU;

    t35 = ((x1461==x1462)-(x1463>>x1464));

    if (t35 != 18446744073709487603LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x1489 = 0;
	int8_t x1490 = INT8_MIN;
	int8_t x1491 = 1;
	uint16_t x1492 = 15U;
	int32_t t36 = -78121059;

    t36 = ((x1489==x1490)-(x1491>>x1492));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x1519 = 15;
	volatile int32_t t37 = -12651;

    t37 = ((x1517==x1518)-(x1519>>x1520));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint64_t x1593 = UINT64_MAX;
	static int64_t x1594 = -1LL;
	uint32_t x1596 = 6U;

    t38 = ((x1593==x1594)-(x1595>>x1596));

    if (t38 != 4227858434U) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint8_t x1713 = 18U;
	static int32_t x1715 = INT32_MAX;
	volatile int32_t t39 = -244254671;

    t39 = ((x1713==x1714)-(x1715>>x1716));

    if (t39 != -2147483647) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x1734 = INT32_MAX;
	uint64_t x1735 = 756280LLU;
	static uint32_t x1736 = 62U;
	uint64_t t40 = 27784405LLU;

    t40 = ((x1733==x1734)-(x1735>>x1736));

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint64_t x1785 = 106579LLU;
	volatile uint16_t x1786 = UINT16_MAX;
	static volatile int16_t x1787 = INT16_MAX;
	int8_t x1788 = 0;
	int32_t t41 = 166267;

    t41 = ((x1785==x1786)-(x1787>>x1788));

    if (t41 != -32767) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x1889 = 11U;
	volatile int8_t x1890 = INT8_MAX;
	uint64_t x1891 = UINT64_MAX;
	int8_t x1892 = 5;
	static uint64_t t42 = 25561LLU;

    t42 = ((x1889==x1890)-(x1891>>x1892));

    if (t42 != 17870283321406128129LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x1961 = 46938406253LLU;
	int8_t x1964 = 2;
	static int32_t t43 = 14034306;

    t43 = ((x1961==x1962)-(x1963>>x1964));

    if (t43 != -92) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x1981 = INT64_MAX;
	int32_t x1982 = 0;
	int32_t x1983 = 3;
	volatile int32_t x1984 = 22;

    t44 = ((x1981==x1982)-(x1983>>x1984));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x2017 = 3U;
	volatile int64_t x2018 = INT64_MAX;
	volatile uint32_t x2019 = 1789070U;
	static volatile int16_t x2020 = 7;
	uint32_t t45 = 854470847U;

    t45 = ((x2017==x2018)-(x2019>>x2020));

    if (t45 != 4294953319U) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x2065 = 16;
	volatile int8_t x2066 = -1;
	uint32_t x2067 = 519942U;
	volatile int8_t x2068 = 1;
	uint32_t t46 = 27313399U;

    t46 = ((x2065==x2066)-(x2067>>x2068));

    if (t46 != 4294707325U) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x2070 = 3887;
	int64_t x2071 = INT64_MAX;
	uint16_t x2072 = 21U;

    t47 = ((x2069==x2070)-(x2071>>x2072));

    if (t47 != -4398046511103LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x2082 = -1;
	static int8_t x2083 = INT8_MAX;
	static uint8_t x2084 = 5U;

    t48 = ((x2081==x2082)-(x2083>>x2084));

    if (t48 != -3) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x2109 = INT64_MAX;
	uint64_t x2110 = 409845249875479LLU;
	uint32_t x2111 = 2U;
	volatile uint32_t t49 = UINT32_MAX;

    t49 = ((x2109==x2110)-(x2111>>x2112));

    if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x2233 = -135;
	int32_t x2234 = INT32_MIN;
	uint32_t x2235 = 1U;
	uint32_t t50 = 1U;

    t50 = ((x2233==x2234)-(x2235>>x2236));

    if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x2253 = -7;
	static int8_t x2256 = 1;
	uint32_t t51 = 152994144U;

    t51 = ((x2253==x2254)-(x2255>>x2256));

    if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x2269 = INT32_MIN;
	int64_t x2270 = 27LL;
	static volatile uint16_t x2271 = UINT16_MAX;
	uint16_t x2272 = 27U;
	static int32_t t52 = -2669879;

    t52 = ((x2269==x2270)-(x2271>>x2272));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x2273 = 0;
	int8_t x2274 = 6;
	uint8_t x2276 = 6U;

    t53 = ((x2273==x2274)-(x2275>>x2276));

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x2277 = UINT16_MAX;
	uint16_t x2279 = 11U;
	volatile uint8_t x2280 = 1U;

    t54 = ((x2277==x2278)-(x2279>>x2280));

    if (t54 != -5) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x2281 = INT8_MIN;
	int8_t x2282 = INT8_MAX;
	uint32_t x2283 = 8U;
	int8_t x2284 = 6;
	uint32_t t55 = 0U;

    t55 = ((x2281==x2282)-(x2283>>x2284));

    if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x2329 = 2397U;
	int16_t x2330 = INT16_MAX;
	static int8_t x2331 = 0;
	int8_t x2332 = 0;

    t56 = ((x2329==x2330)-(x2331>>x2332));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int8_t x2393 = -1;
	volatile int8_t x2394 = -1;
	volatile int32_t x2395 = INT32_MAX;
	uint8_t x2396 = 1U;
	int32_t t57 = 4354;

    t57 = ((x2393==x2394)-(x2395>>x2396));

    if (t57 != -1073741822) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x2417 = -1LL;
	int8_t x2419 = 3;
	int64_t x2420 = 6LL;

    t58 = ((x2417==x2418)-(x2419>>x2420));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x2454 = 236940701U;
	static uint8_t x2455 = 3U;
	int8_t x2456 = 0;
	static int32_t t59 = 179150;

    t59 = ((x2453==x2454)-(x2455>>x2456));

    if (t59 != -3) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x2473 = 1776U;
	static uint8_t x2474 = 3U;
	int16_t x2475 = INT16_MAX;
	int16_t x2476 = 23;

    t60 = ((x2473==x2474)-(x2475>>x2476));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x2521 = 19LL;
	uint32_t x2522 = 4U;
	uint8_t x2523 = 11U;
	static uint16_t x2524 = 7U;
	int32_t t61 = -442481659;

    t61 = ((x2521==x2522)-(x2523>>x2524));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x2533 = -1;
	int8_t x2534 = -1;
	static volatile int8_t x2535 = 15;
	static int16_t x2536 = 1;
	int32_t t62 = -417705711;

    t62 = ((x2533==x2534)-(x2535>>x2536));

    if (t62 != -6) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x2557 = INT32_MIN;
	int32_t x2559 = 20;
	int8_t x2560 = 24;
	int32_t t63 = 2;

    t63 = ((x2557==x2558)-(x2559>>x2560));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x2601 = UINT16_MAX;
	uint64_t x2602 = 3729951LLU;
	uint32_t x2604 = 5U;
	volatile int32_t t64 = -250421;

    t64 = ((x2601==x2602)-(x2603>>x2604));

    if (t64 != -1023) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint64_t x2621 = 5794LLU;
	static volatile int32_t x2622 = 9;
	uint32_t x2623 = UINT32_MAX;
	uint32_t t65 = 45341555U;

    t65 = ((x2621==x2622)-(x2623>>x2624));

    if (t65 != 1U) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int16_t x2669 = -1;
	uint32_t x2670 = UINT32_MAX;
	uint8_t x2671 = 4U;
	static uint16_t x2672 = 3U;
	int32_t t66 = 42528;

    t66 = ((x2669==x2670)-(x2671>>x2672));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int16_t x2677 = INT16_MIN;
	int32_t x2678 = -1;
	uint8_t x2679 = 19U;
	volatile int32_t t67 = 123611;

    t67 = ((x2677==x2678)-(x2679>>x2680));

    if (t67 != -4) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x2735 = 178;
	int16_t x2736 = 1;

    t68 = ((x2733==x2734)-(x2735>>x2736));

    if (t68 != -89) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x2829 = -1;
	int32_t x2830 = INT32_MAX;
	volatile uint64_t x2831 = 47429910987LLU;
	uint16_t x2832 = 7U;
	volatile uint64_t t69 = 81LLU;

    t69 = ((x2829==x2830)-(x2831>>x2832));

    if (t69 != 18446744073339005437LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x2881 = 0U;
	int32_t x2883 = INT32_MAX;
	uint16_t x2884 = 1U;
	volatile int32_t t70 = 451;

    t70 = ((x2881==x2882)-(x2883>>x2884));

    if (t70 != -1073741823) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x2917 = -1;
	static uint32_t x2919 = 68U;
	static uint8_t x2920 = 0U;
	uint32_t t71 = 540U;

    t71 = ((x2917==x2918)-(x2919>>x2920));

    if (t71 != 4294967228U) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x2945 = INT16_MIN;
	volatile int8_t x2946 = INT8_MIN;
	static uint32_t x2947 = 13U;
	volatile uint8_t x2948 = 26U;

    t72 = ((x2945==x2946)-(x2947>>x2948));

    if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x2994 = INT8_MAX;
	static volatile int16_t x2995 = INT16_MAX;
	uint8_t x2996 = 7U;
	static volatile int32_t t73 = -16;

    t73 = ((x2993==x2994)-(x2995>>x2996));

    if (t73 != -255) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x3041 = INT16_MIN;
	uint32_t x3043 = 2881U;
	volatile int8_t x3044 = 4;
	static volatile uint32_t t74 = 11281U;

    t74 = ((x3041==x3042)-(x3043>>x3044));

    if (t74 != 4294967116U) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint8_t x3049 = 40U;
	uint32_t x3051 = 32313U;
	volatile uint32_t t75 = 297962U;

    t75 = ((x3049==x3050)-(x3051>>x3052));

    if (t75 != 4294934983U) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x3089 = 4062U;
	uint16_t x3090 = 12U;
	static int8_t x3091 = 0;
	static uint64_t x3092 = 30LLU;
	volatile int32_t t76 = 0;

    t76 = ((x3089==x3090)-(x3091>>x3092));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x3121 = 11U;
	int64_t x3122 = INT64_MIN;
	static int32_t x3123 = 3;
	int32_t t77 = 5388;

    t77 = ((x3121==x3122)-(x3123>>x3124));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x3145 = -1;
	uint16_t x3147 = UINT16_MAX;
	int16_t x3148 = 0;
	int32_t t78 = 1;

    t78 = ((x3145==x3146)-(x3147>>x3148));

    if (t78 != -65535) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int64_t x3225 = 280807991LL;
	uint16_t x3227 = 1U;
	uint8_t x3228 = 6U;
	int32_t t79 = 842729987;

    t79 = ((x3225==x3226)-(x3227>>x3228));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x3277 = -1;
	static int64_t x3278 = INT64_MIN;
	int8_t x3279 = INT8_MAX;
	int8_t x3280 = 1;
	static volatile int32_t t80 = 23;

    t80 = ((x3277==x3278)-(x3279>>x3280));

    if (t80 != -63) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x3289 = 674841601492LL;
	int16_t x3290 = 2;
	static uint64_t x3291 = 62899988LLU;
	int8_t x3292 = 1;
	volatile uint64_t t81 = 27852LLU;

    t81 = ((x3289==x3290)-(x3291>>x3292));

    if (t81 != 18446744073678101622LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x3377 = 2429981U;
	static int64_t x3379 = INT64_MAX;
	volatile uint8_t x3380 = 3U;
	static volatile int64_t t82 = 36524902LL;

    t82 = ((x3377==x3378)-(x3379>>x3380));

    if (t82 != -1152921504606846975LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int64_t x3645 = 5764606214034LL;
	static volatile uint8_t x3646 = 25U;
	volatile int8_t x3647 = INT8_MAX;
	volatile int8_t x3648 = 1;
	int32_t t83 = 26940;

    t83 = ((x3645==x3646)-(x3647>>x3648));

    if (t83 != -63) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int64_t x3761 = -8701119708776LL;
	uint8_t x3763 = UINT8_MAX;
	volatile uint16_t x3764 = 22U;

    t84 = ((x3761==x3762)-(x3763>>x3764));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x3881 = 7LL;
	int8_t x3882 = INT8_MIN;
	volatile int64_t t85 = -62577960LL;

    t85 = ((x3881==x3882)-(x3883>>x3884));

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint64_t x3914 = UINT64_MAX;
	volatile uint8_t x3916 = 26U;
	uint64_t t86 = UINT64_MAX;

    t86 = ((x3913==x3914)-(x3915>>x3916));

    if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint8_t x3973 = 63U;
	static int32_t x3974 = -1;
	uint16_t x3975 = UINT16_MAX;
	uint8_t x3976 = 7U;
	volatile int32_t t87 = 82748203;

    t87 = ((x3973==x3974)-(x3975>>x3976));

    if (t87 != -511) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x3997 = INT64_MAX;
	static volatile uint64_t x3998 = UINT64_MAX;

    t88 = ((x3997==x3998)-(x3999>>x4000));

    if (t88 != -127) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x4005 = UINT64_MAX;
	static uint64_t x4006 = 3490777087523LLU;
	volatile uint32_t x4008 = 55U;
	volatile int64_t t89 = -7078LL;

    t89 = ((x4005==x4006)-(x4007>>x4008));

    if (t89 != -255LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile uint16_t x4049 = 39U;
	uint8_t x4050 = UINT8_MAX;
	static uint16_t x4052 = 3U;

    t90 = ((x4049==x4050)-(x4051>>x4052));

    if (t90 != 4293441903U) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x4073 = -14790;
	static int16_t x4074 = INT16_MAX;
	uint64_t x4075 = UINT64_MAX;
	volatile uint64_t t91 = 1101683LLU;

    t91 = ((x4073==x4074)-(x4075>>x4076));

    if (t91 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x4085 = UINT32_MAX;
	uint32_t x4086 = 222058U;
	uint16_t x4087 = UINT16_MAX;
	int32_t t92 = 623378471;

    t92 = ((x4085==x4086)-(x4087>>x4088));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x4157 = -26392;
	volatile uint16_t x4158 = 27413U;
	int16_t x4160 = 2;
	volatile int64_t t93 = 0LL;

    t93 = ((x4157==x4158)-(x4159>>x4160));

    if (t93 != -2061LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x4170 = INT32_MIN;
	int32_t x4171 = 170;
	int8_t x4172 = 13;
	volatile int32_t t94 = 1098993;

    t94 = ((x4169==x4170)-(x4171>>x4172));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x4305 = INT32_MIN;
	static volatile int32_t x4306 = -278964;
	uint64_t t95 = 968355954615992439LLU;

    t95 = ((x4305==x4306)-(x4307>>x4308));

    if (t95 != 18446744073594176042LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x4329 = -3608;
	int16_t x4330 = INT16_MIN;
	static int64_t x4331 = INT64_MAX;
	uint8_t x4332 = 25U;

    t96 = ((x4329==x4330)-(x4331>>x4332));

    if (t96 != -274877906943LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x4385 = UINT32_MAX;
	volatile int64_t x4386 = -1LL;
	int16_t x4387 = INT16_MAX;
	volatile uint16_t x4388 = 14U;
	int32_t t97 = 8827481;

    t97 = ((x4385==x4386)-(x4387>>x4388));

    if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint64_t x4397 = 235550387955LLU;
	uint32_t x4398 = 14U;
	volatile uint16_t x4399 = UINT16_MAX;
	volatile uint8_t x4400 = 0U;
	volatile int32_t t98 = 13468936;

    t98 = ((x4397==x4398)-(x4399>>x4400));

    if (t98 != -65535) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x4495 = 6U;
	int8_t x4496 = 0;
	int32_t t99 = 10921;

    t99 = ((x4493==x4494)-(x4495>>x4496));

    if (t99 != -6) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x4582 = INT32_MIN;
	uint64_t x4583 = 919LLU;
	volatile uint64_t t100 = 7188844LLU;

    t100 = ((x4581==x4582)-(x4583>>x4584));

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x4617 = 108U;
	uint32_t x4618 = 239838089U;
	int16_t x4619 = INT16_MAX;
	int32_t t101 = -50237461;

    t101 = ((x4617==x4618)-(x4619>>x4620));

    if (t101 != -4095) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x4681 = 896LL;
	uint8_t x4682 = UINT8_MAX;
	uint8_t x4683 = 10U;
	volatile int8_t x4684 = 0;
	static volatile int32_t t102 = -987978392;

    t102 = ((x4681==x4682)-(x4683>>x4684));

    if (t102 != -10) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x4722 = -1;
	uint64_t x4723 = UINT64_MAX;
	uint16_t x4724 = 56U;
	volatile uint64_t t103 = 19588610117140LLU;

    t103 = ((x4721==x4722)-(x4723>>x4724));

    if (t103 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x4733 = UINT16_MAX;
	uint16_t x4734 = UINT16_MAX;
	int64_t x4735 = 11761701LL;
	uint8_t x4736 = 4U;
	int64_t t104 = -3087346LL;

    t104 = ((x4733==x4734)-(x4735>>x4736));

    if (t104 != -735105LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x4769 = 29LLU;
	int8_t x4770 = 3;
	volatile int16_t x4771 = 2;
	volatile int8_t x4772 = 6;
	int32_t t105 = 16177;

    t105 = ((x4769==x4770)-(x4771>>x4772));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint16_t x4817 = 4U;
	static int16_t x4818 = INT16_MIN;
	int8_t x4819 = INT8_MAX;
	volatile uint32_t x4820 = 2U;
	int32_t t106 = 625804;

    t106 = ((x4817==x4818)-(x4819>>x4820));

    if (t106 != -31) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint8_t x4928 = 1U;
	volatile int32_t t107 = -4382;

    t107 = ((x4925==x4926)-(x4927>>x4928));

    if (t107 != -32767) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x4949 = INT32_MAX;
	int8_t x4950 = INT8_MAX;
	uint32_t x4951 = 293248U;
	int8_t x4952 = 6;
	volatile uint32_t t108 = 9067U;

    t108 = ((x4949==x4950)-(x4951>>x4952));

    if (t108 != 4294962714U) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x5125 = 12U;
	static uint16_t x5127 = 8U;
	volatile int32_t t109 = 10039;

    t109 = ((x5125==x5126)-(x5127>>x5128));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x5202 = INT8_MAX;
	volatile uint64_t x5203 = 345LLU;
	volatile uint64_t t110 = 120940696352975812LLU;

    t110 = ((x5201==x5202)-(x5203>>x5204));

    if (t110 != 18446744073709551271LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x5250 = 59U;
	uint32_t x5251 = 113U;
	int32_t x5252 = 2;

    t111 = ((x5249==x5250)-(x5251>>x5252));

    if (t111 != 4294967268U) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x5321 = INT8_MAX;
	static uint16_t x5323 = UINT16_MAX;
	volatile uint8_t x5324 = 0U;
	int32_t t112 = -24;

    t112 = ((x5321==x5322)-(x5323>>x5324));

    if (t112 != -65535) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x5325 = INT8_MIN;
	uint8_t x5327 = 6U;
	volatile uint8_t x5328 = 2U;
	int32_t t113 = 7554;

    t113 = ((x5325==x5326)-(x5327>>x5328));

    if (t113 != -1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x5413 = UINT32_MAX;
	int16_t x5414 = -1;
	volatile uint32_t x5415 = 354390764U;
	uint32_t t114 = 220837214U;

    t114 = ((x5413==x5414)-(x5415>>x5416));

    if (t114 != 4294956482U) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x5505 = -33303174906240LL;
	int64_t x5506 = INT64_MIN;
	volatile uint64_t x5507 = 1018647549LLU;
	uint16_t x5508 = 0U;
	uint64_t t115 = 68468725834LLU;

    t115 = ((x5505==x5506)-(x5507>>x5508));

    if (t115 != 18446744072690904067LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x5581 = 11U;
	volatile uint8_t x5582 = UINT8_MAX;
	uint32_t x5583 = 174402882U;
	uint32_t x5584 = 18U;
	uint32_t t116 = 213U;

    t116 = ((x5581==x5582)-(x5583>>x5584));

    if (t116 != 4294966631U) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x5609 = 36;
	volatile uint16_t x5610 = 23029U;
	uint64_t x5611 = 115513LLU;
	uint64_t t117 = 459LLU;

    t117 = ((x5609==x5610)-(x5611>>x5612));

    if (t117 != 18446744073709436103LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x5678 = -319;
	static volatile uint8_t x5679 = 113U;
	int64_t x5680 = 5LL;
	int32_t t118 = -6050;

    t118 = ((x5677==x5678)-(x5679>>x5680));

    if (t118 != -3) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x5789 = UINT64_MAX;
	uint32_t x5792 = 1U;

    t119 = ((x5789==x5790)-(x5791>>x5792));

    if (t119 != -62) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x5805 = UINT32_MAX;
	static uint32_t x5806 = UINT32_MAX;
	volatile uint32_t x5807 = UINT32_MAX;
	uint16_t x5808 = 1U;
	volatile uint32_t t120 = 9095U;

    t120 = ((x5805==x5806)-(x5807>>x5808));

    if (t120 != 2147483650U) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x5817 = 71U;
	static volatile int8_t x5818 = INT8_MIN;
	static int32_t t121 = 9045985;

    t121 = ((x5817==x5818)-(x5819>>x5820));

    if (t121 != -3) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x5837 = -138LL;
	int32_t x5838 = INT32_MIN;
	uint8_t x5839 = 5U;
	int32_t t122 = 1688717;

    t122 = ((x5837==x5838)-(x5839>>x5840));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x5949 = -1;
	int32_t x5950 = INT32_MAX;
	uint8_t x5952 = 2U;
	volatile int32_t t123 = -108008;

    t123 = ((x5949==x5950)-(x5951>>x5952));

    if (t123 != -31) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x5974 = INT8_MAX;
	static int8_t x5975 = 2;
	uint8_t x5976 = 4U;
	int32_t t124 = -4977109;

    t124 = ((x5973==x5974)-(x5975>>x5976));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x6005 = INT64_MAX;
	uint32_t x6007 = 6U;
	volatile int16_t x6008 = 0;
	volatile uint32_t t125 = 73068U;

    t125 = ((x6005==x6006)-(x6007>>x6008));

    if (t125 != 4294967290U) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x6061 = INT64_MIN;
	volatile uint32_t x6062 = UINT32_MAX;
	uint8_t x6063 = UINT8_MAX;
	volatile int32_t t126 = 38;

    t126 = ((x6061==x6062)-(x6063>>x6064));

    if (t126 != -255) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x6074 = INT32_MIN;
	static int8_t x6075 = 1;
	static uint16_t x6076 = 24U;
	int32_t t127 = -3416;

    t127 = ((x6073==x6074)-(x6075>>x6076));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint8_t x6209 = UINT8_MAX;
	static uint8_t x6211 = 1U;
	volatile int32_t t128 = -1;

    t128 = ((x6209==x6210)-(x6211>>x6212));

    if (t128 != -1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x6233 = 2U;
	static uint64_t x6235 = 4151848803067987845LLU;
	volatile int8_t x6236 = 0;
	volatile uint64_t t129 = 686743366225680156LLU;

    t129 = ((x6233==x6234)-(x6235>>x6236));

    if (t129 != 14294895270641563771LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x6321 = 11;
	uint32_t x6322 = UINT32_MAX;
	volatile int8_t x6323 = INT8_MAX;
	uint16_t x6324 = 6U;
	int32_t t130 = -204666075;

    t130 = ((x6321==x6322)-(x6323>>x6324));

    if (t130 != -1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x6366 = -1;
	uint32_t x6367 = UINT32_MAX;
	uint32_t t131 = 97443U;

    t131 = ((x6365==x6366)-(x6367>>x6368));

    if (t131 != 4294443009U) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x6397 = -1;
	int8_t x6398 = INT8_MAX;
	volatile int8_t x6400 = 12;
	static int32_t t132 = 1;

    t132 = ((x6397==x6398)-(x6399>>x6400));

    if (t132 != -7) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x6442 = INT16_MIN;
	uint32_t x6443 = 656499957U;
	uint16_t x6444 = 3U;
	static volatile uint32_t t133 = 604U;

    t133 = ((x6441==x6442)-(x6443>>x6444));

    if (t133 != 4212904802U) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x6453 = -1168;
	int32_t x6454 = -22;
	uint8_t x6456 = 1U;
	uint64_t t134 = 83667LLU;

    t134 = ((x6453==x6454)-(x6455>>x6456));

    if (t134 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x6589 = INT8_MAX;
	int8_t x6590 = INT8_MAX;
	volatile uint8_t x6592 = 8U;
	volatile uint64_t t135 = 817813726375LLU;

    t135 = ((x6589==x6590)-(x6591>>x6592));

    if (t135 != 18446744073709539628LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x6873 = 296173540078LL;
	uint8_t x6876 = 4U;
	volatile int32_t t136 = 2;

    t136 = ((x6873==x6874)-(x6875>>x6876));

    if (t136 != -1) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x6949 = INT64_MIN;
	int64_t x6950 = INT64_MIN;
	volatile int32_t x6951 = INT32_MAX;
	volatile uint16_t x6952 = 10U;
	int32_t t137 = -3117;

    t137 = ((x6949==x6950)-(x6951>>x6952));

    if (t137 != -2097150) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x7019 = INT16_MAX;
	int8_t x7020 = 0;
	volatile int32_t t138 = 0;

    t138 = ((x7017==x7018)-(x7019>>x7020));

    if (t138 != -32767) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x7025 = INT8_MIN;
	uint64_t x7026 = 6518612LLU;
	uint64_t x7027 = UINT64_MAX;

    t139 = ((x7025==x7026)-(x7027>>x7028));

    if (t139 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x7097 = INT32_MIN;
	int16_t x7098 = INT16_MAX;
	uint64_t x7099 = UINT64_MAX;
	int16_t x7100 = 3;
	uint64_t t140 = 42249LLU;

    t140 = ((x7097==x7098)-(x7099>>x7100));

    if (t140 != 16140901064495857665LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint8_t x7101 = 7U;
	uint32_t x7102 = 13553021U;
	volatile int32_t t141 = 1;

    t141 = ((x7101==x7102)-(x7103>>x7104));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x7125 = INT8_MIN;
	volatile int16_t x7126 = INT16_MIN;
	volatile uint32_t x7127 = UINT32_MAX;
	int8_t x7128 = 4;
	static uint32_t t142 = 1U;

    t142 = ((x7125==x7126)-(x7127>>x7128));

    if (t142 != 4026531841U) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x7134 = 2898358488989LL;
	int32_t x7135 = INT32_MAX;
	int32_t t143 = -12;

    t143 = ((x7133==x7134)-(x7135>>x7136));

    if (t143 != -1073741823) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x7209 = 3557;
	uint16_t x7210 = UINT16_MAX;
	uint64_t x7211 = 60752239LLU;

    t144 = ((x7209==x7210)-(x7211>>x7212));

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x7301 = 2LL;
	int64_t x7302 = INT64_MAX;
	int8_t x7303 = 25;
	uint16_t x7304 = 6U;
	volatile int32_t t145 = -14;

    t145 = ((x7301==x7302)-(x7303>>x7304));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int8_t x7309 = -1;
	volatile uint8_t x7310 = UINT8_MAX;
	volatile int32_t x7311 = INT32_MAX;
	uint8_t x7312 = 5U;
	volatile int32_t t146 = -480;

    t146 = ((x7309==x7310)-(x7311>>x7312));

    if (t146 != -67108863) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x7330 = 813960;
	static uint64_t x7331 = 3017570759646009LLU;
	uint8_t x7332 = 0U;
	uint64_t t147 = 54671564837329577LLU;

    t147 = ((x7329==x7330)-(x7331>>x7332));

    if (t147 != 18443726502949905607LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x7365 = UINT64_MAX;
	uint16_t x7366 = UINT16_MAX;
	volatile uint64_t t148 = 685386583657507LLU;

    t148 = ((x7365==x7366)-(x7367>>x7368));

    if (t148 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x7489 = -2632799855LL;
	uint32_t x7490 = UINT32_MAX;
	uint16_t x7491 = UINT16_MAX;
	uint32_t x7492 = 1U;
	int32_t t149 = -1;

    t149 = ((x7489==x7490)-(x7491>>x7492));

    if (t149 != -32767) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x7525 = INT16_MIN;
	uint32_t x7527 = 1447133U;
	int64_t x7528 = 1LL;
	volatile uint32_t t150 = 3990755U;

    t150 = ((x7525==x7526)-(x7527>>x7528));

    if (t150 != 4294243730U) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x7553 = INT64_MAX;
	int64_t x7554 = 282087798097LL;
	static volatile uint64_t x7555 = 45807143342LLU;
	int16_t x7556 = 0;
	static uint64_t t151 = 43194726934LLU;

    t151 = ((x7553==x7554)-(x7555>>x7556));

    if (t151 != 18446744027902408274LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x7574 = INT32_MAX;
	uint8_t x7575 = 3U;
	uint64_t x7576 = 0LLU;
	volatile int32_t t152 = 92;

    t152 = ((x7573==x7574)-(x7575>>x7576));

    if (t152 != -3) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x7593 = INT8_MAX;
	int8_t x7594 = -11;
	int16_t x7595 = INT16_MAX;
	int64_t x7596 = 9LL;
	volatile int32_t t153 = 7595241;

    t153 = ((x7593==x7594)-(x7595>>x7596));

    if (t153 != -63) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x7613 = -1LL;
	int16_t x7614 = INT16_MAX;
	static uint8_t x7615 = UINT8_MAX;
	uint8_t x7616 = 0U;
	int32_t t154 = -7341;

    t154 = ((x7613==x7614)-(x7615>>x7616));

    if (t154 != -255) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x7661 = INT32_MIN;
	volatile int8_t x7662 = INT8_MIN;
	volatile int64_t x7663 = 173663989LL;
	uint32_t x7664 = 36U;
	int64_t t155 = -58645095764698826LL;

    t155 = ((x7661==x7662)-(x7663>>x7664));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x7785 = UINT8_MAX;
	static volatile uint64_t x7787 = 9072830153LLU;
	volatile uint32_t x7788 = 0U;
	uint64_t t156 = 5619LLU;

    t156 = ((x7785==x7786)-(x7787>>x7788));

    if (t156 != 18446744064636721463LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int64_t x7797 = INT64_MAX;
	volatile int16_t x7798 = INT16_MAX;
	uint8_t x7800 = 10U;
	static int32_t t157 = -2437;

    t157 = ((x7797==x7798)-(x7799>>x7800));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x7805 = 0;
	int32_t x7806 = -953;
	volatile int32_t x7807 = 6810;
	static volatile uint8_t x7808 = 0U;
	static int32_t t158 = 901;

    t158 = ((x7805==x7806)-(x7807>>x7808));

    if (t158 != -6810) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int32_t x7833 = INT32_MIN;
	int16_t x7834 = INT16_MAX;
	volatile int8_t x7835 = 0;
	int16_t x7836 = 1;
	int32_t t159 = 65101;

    t159 = ((x7833==x7834)-(x7835>>x7836));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x7837 = INT16_MIN;
	int8_t x7838 = -10;
	uint64_t x7839 = 165856752LLU;
	static volatile uint64_t x7840 = 10LLU;
	volatile uint64_t t160 = 2843979113523LLU;

    t160 = ((x7837==x7838)-(x7839>>x7840));

    if (t160 != 18446744073709389647LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x7965 = INT16_MAX;
	volatile uint8_t x7967 = 2U;
	static volatile uint8_t x7968 = 1U;
	int32_t t161 = 384;

    t161 = ((x7965==x7966)-(x7967>>x7968));

    if (t161 != -1) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x8073 = 0;
	volatile int16_t x8075 = INT16_MAX;
	uint32_t x8076 = 2U;
	int32_t t162 = -13455;

    t162 = ((x8073==x8074)-(x8075>>x8076));

    if (t162 != -8191) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x8093 = 1645U;
	volatile int64_t x8094 = 2981LL;
	uint16_t x8096 = 44U;
	static int64_t t163 = -1LL;

    t163 = ((x8093==x8094)-(x8095>>x8096));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x8165 = 71230404494052282LL;
	volatile uint8_t x8166 = 9U;
	int8_t x8167 = 13;
	uint8_t x8168 = 3U;
	volatile int32_t t164 = -137915;

    t164 = ((x8165==x8166)-(x8167>>x8168));

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    

    t165 = ((x8209==x8210)-(x8211>>x8212));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x8233 = 13332U;
	int16_t x8234 = INT16_MIN;
	volatile int64_t x8235 = 260863056LL;
	static int16_t x8236 = 0;
	volatile int64_t t166 = 0LL;

    t166 = ((x8233==x8234)-(x8235>>x8236));

    if (t166 != -260863056LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x8241 = -1;
	static int64_t x8242 = INT64_MIN;
	int16_t x8243 = INT16_MAX;
	int8_t x8244 = 1;
	volatile int32_t t167 = 16;

    t167 = ((x8241==x8242)-(x8243>>x8244));

    if (t167 != -16383) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint32_t x8374 = UINT32_MAX;
	int32_t x8375 = 254044;
	uint8_t x8376 = 23U;
	int32_t t168 = 7373417;

    t168 = ((x8373==x8374)-(x8375>>x8376));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x8386 = -14101;
	uint32_t x8387 = UINT32_MAX;
	uint32_t x8388 = 4U;
	volatile uint32_t t169 = 3791U;

    t169 = ((x8385==x8386)-(x8387>>x8388));

    if (t169 != 4026531841U) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint64_t t170 = 796322933873925812LLU;

    t170 = ((x8401==x8402)-(x8403>>x8404));

    if (t170 != 18446744073709551594LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x8421 = INT16_MIN;
	int8_t x8422 = 3;
	int64_t x8423 = 2936498LL;
	static int8_t x8424 = 0;
	volatile int64_t t171 = 2032690327676941LL;

    t171 = ((x8421==x8422)-(x8423>>x8424));

    if (t171 != -2936498LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x8437 = 3U;
	static int16_t x8438 = 3290;
	volatile uint16_t x8440 = 0U;
	volatile uint64_t t172 = 17LLU;

    t172 = ((x8437==x8438)-(x8439>>x8440));

    if (t172 != 1LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x8473 = 30U;
	int16_t x8475 = INT16_MAX;
	volatile int32_t t173 = -4;

    t173 = ((x8473==x8474)-(x8475>>x8476));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x8506 = -383104679854370628LL;
	uint32_t x8507 = UINT32_MAX;
	int8_t x8508 = 0;
	uint32_t t174 = 10U;

    t174 = ((x8505==x8506)-(x8507>>x8508));

    if (t174 != 1U) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x8641 = -1;
	volatile uint16_t x8642 = 197U;
	volatile int64_t x8643 = INT64_MAX;
	int16_t x8644 = 16;
	volatile int64_t t175 = 17177220732LL;

    t175 = ((x8641==x8642)-(x8643>>x8644));

    if (t175 != -140737488355327LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x8717 = 26564622LL;
	int32_t x8719 = INT32_MAX;
	static uint64_t x8720 = 6LLU;
	int32_t t176 = -9;

    t176 = ((x8717==x8718)-(x8719>>x8720));

    if (t176 != -33554431) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x8917 = 0;
	int32_t x8918 = 156285;
	int16_t x8920 = 3;
	uint64_t t177 = 6625LLU;

    t177 = ((x8917==x8918)-(x8919>>x8920));

    if (t177 != 16140901064495857665LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x8985 = INT32_MAX;
	uint16_t x8987 = 408U;
	uint8_t x8988 = 1U;
	static int32_t t178 = 0;

    t178 = ((x8985==x8986)-(x8987>>x8988));

    if (t178 != -204) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x9006 = -1692;
	uint32_t x9007 = 7U;
	uint32_t t179 = 26U;

    t179 = ((x9005==x9006)-(x9007>>x9008));

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x9057 = 476763446U;
	uint8_t x9058 = UINT8_MAX;
	uint16_t x9060 = 0U;
	static volatile int32_t t180 = 27;

    t180 = ((x9057==x9058)-(x9059>>x9060));

    if (t180 != -2147483647) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x9134 = -4691249511920LL;
	volatile uint8_t x9135 = 13U;
	uint64_t x9136 = 0LLU;
	volatile int32_t t181 = -723636687;

    t181 = ((x9133==x9134)-(x9135>>x9136));

    if (t181 != -13) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x9170 = 64LL;
	uint8_t x9171 = UINT8_MAX;
	static uint16_t x9172 = 23U;

    t182 = ((x9169==x9170)-(x9171>>x9172));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x9182 = INT32_MIN;
	volatile uint32_t x9183 = 221U;
	static volatile uint16_t x9184 = 0U;

    t183 = ((x9181==x9182)-(x9183>>x9184));

    if (t183 != 4294967075U) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x9289 = UINT16_MAX;
	int64_t x9290 = INT64_MIN;
	static uint8_t x9291 = 1U;
	int32_t t184 = -2615;

    t184 = ((x9289==x9290)-(x9291>>x9292));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x9381 = -1;
	static int64_t x9382 = -1LL;
	uint64_t x9383 = 179108274746280LLU;
	int16_t x9384 = 48;
	uint64_t t185 = 6LLU;

    t185 = ((x9381==x9382)-(x9383>>x9384));

    if (t185 != 1LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x9405 = 0;
	static int8_t x9406 = INT8_MIN;
	uint32_t x9407 = 1758010153U;
	uint16_t x9408 = 10U;

    t186 = ((x9405==x9406)-(x9407>>x9408));

    if (t186 != 4293250490U) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int64_t x9422 = 8281LL;
	uint16_t x9423 = 408U;
	int32_t x9424 = 5;
	static int32_t t187 = 148638155;

    t187 = ((x9421==x9422)-(x9423>>x9424));

    if (t187 != -12) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x9437 = 4;
	static uint16_t x9439 = 407U;
	uint16_t x9440 = 6U;
	volatile int32_t t188 = 42;

    t188 = ((x9437==x9438)-(x9439>>x9440));

    if (t188 != -6) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x9581 = INT8_MIN;
	int8_t x9584 = 10;

    t189 = ((x9581==x9582)-(x9583>>x9584));

    if (t189 != 0U) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint32_t x9589 = UINT32_MAX;
	static uint32_t x9590 = 1U;
	int32_t x9591 = INT32_MAX;
	int32_t t190 = -1;

    t190 = ((x9589==x9590)-(x9591>>x9592));

    if (t190 != -67108863) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x9861 = UINT32_MAX;
	uint16_t x9862 = 1U;

    t191 = ((x9861==x9862)-(x9863>>x9864));

    if (t191 != 4291042652U) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x9870 = INT8_MIN;
	static uint8_t x9871 = 7U;
	static uint8_t x9872 = 4U;

    t192 = ((x9869==x9870)-(x9871>>x9872));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x10089 = -1;
	volatile uint64_t x10091 = 2980LLU;
	uint8_t x10092 = 1U;
	uint64_t t193 = 5890LLU;

    t193 = ((x10089==x10090)-(x10091>>x10092));

    if (t193 != 18446744073709550126LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x10101 = -1;
	uint32_t x10103 = UINT32_MAX;
	int8_t x10104 = 3;
	volatile uint32_t t194 = 1495U;

    t194 = ((x10101==x10102)-(x10103>>x10104));

    if (t194 != 3758096385U) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x10130 = 2782;
	volatile uint64_t t195 = 407363557451LLU;

    t195 = ((x10129==x10130)-(x10131>>x10132));

    if (t195 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int64_t x10161 = -1LL;
	uint64_t x10162 = 53936447567057398LLU;
	uint32_t x10163 = UINT32_MAX;
	static uint16_t x10164 = 13U;
	static uint32_t t196 = 59U;

    t196 = ((x10161==x10162)-(x10163>>x10164));

    if (t196 != 4294443009U) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x10193 = 0;
	uint16_t x10194 = 0U;
	int32_t x10195 = INT32_MAX;
	static uint8_t x10196 = 29U;
	volatile int32_t t197 = 99;

    t197 = ((x10193==x10194)-(x10195>>x10196));

    if (t197 != -2) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x10273 = INT8_MIN;
	int8_t x10274 = INT8_MIN;
	int32_t x10275 = INT32_MAX;

    t198 = ((x10273==x10274)-(x10275>>x10276));

    if (t198 != -536870910) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x10309 = UINT8_MAX;
	int64_t x10310 = INT64_MIN;
	int32_t x10311 = 3;
	uint16_t x10312 = 2U;
	volatile int32_t t199 = 0;

    t199 = ((x10309==x10310)-(x10311>>x10312));

    if (t199 != 0) { NG(); } else { ; }
	
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

