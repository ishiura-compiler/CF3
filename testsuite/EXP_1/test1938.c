
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

uint8_t x102 = UINT8_MAX;
int64_t x158 = -744840575756820899LL;
static volatile uint32_t t4 = UINT32_MAX;
int8_t x233 = -1;
static int8_t x234 = INT8_MAX;
static int32_t t5 = 303218582;
int32_t t6 = 79442949;
static int32_t x401 = -1;
int16_t x403 = 55;
static int8_t x404 = 1;
volatile int64_t t13 = 74685695142604057LL;
volatile uint32_t x915 = 19010132U;
int64_t t17 = 41365193792LL;
int8_t x1217 = INT8_MIN;
uint32_t x1220 = 2U;
int32_t t18 = -690784271;
static uint32_t x1385 = 4241U;
int8_t x1457 = INT8_MIN;
uint16_t x1472 = 2U;
uint64_t x1653 = 1756945658419622LLU;
static volatile int32_t t25 = 531474;
static uint8_t x1806 = 1U;
static int16_t x1890 = INT16_MIN;
int16_t x2161 = INT16_MIN;
uint32_t x2162 = 14387278U;
static volatile uint16_t x2248 = 1U;
volatile int8_t x2335 = 0;
volatile int32_t t33 = 48717;


void f0(void) {
    	uint32_t x49 = 156475171U;
	int8_t x50 = INT8_MIN;
	uint64_t x51 = UINT64_MAX;
	static uint8_t x52 = 11U;
	static volatile uint64_t t0 = 3255387LLU;

    t0 = (((x49<=x50)|x51)<<x52);

    if (t0 != 18446744073709549568LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x61 = INT64_MIN;
	int64_t x62 = INT64_MIN;
	uint16_t x63 = UINT16_MAX;
	int8_t x64 = 1;
	volatile int32_t t1 = 18085282;

    t1 = (((x61<=x62)|x63)<<x64);

    if (t1 != 131070) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x101 = UINT64_MAX;
	int8_t x103 = 5;
	volatile uint16_t x104 = 0U;
	volatile int32_t t2 = -15107;

    t2 = (((x101<=x102)|x103)<<x104);

    if (t2 != 5) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x157 = -1;
	int16_t x159 = INT16_MAX;
	uint8_t x160 = 2U;
	static int32_t t3 = 317;

    t3 = (((x157<=x158)|x159)<<x160);

    if (t3 != 131068) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x221 = INT16_MIN;
	int64_t x222 = 844672605LL;
	volatile uint32_t x223 = UINT32_MAX;
	int16_t x224 = 0;

    t4 = (((x221<=x222)|x223)<<x224);

    if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x235 = INT8_MAX;
	uint16_t x236 = 21U;

    t5 = (((x233<=x234)|x235)<<x236);

    if (t5 != 266338304) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x345 = INT32_MAX;
	volatile int64_t x346 = INT64_MIN;
	uint8_t x347 = 5U;
	volatile int8_t x348 = 17;

    t6 = (((x345<=x346)|x347)<<x348);

    if (t6 != 655360) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x402 = INT8_MIN;
	static volatile int32_t t7 = 19049;

    t7 = (((x401<=x402)|x403)<<x404);

    if (t7 != 110) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int64_t x493 = INT64_MIN;
	uint32_t x494 = UINT32_MAX;
	int32_t x495 = 2;
	int8_t x496 = 0;
	int32_t t8 = -30133597;

    t8 = (((x493<=x494)|x495)<<x496);

    if (t8 != 3) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x809 = INT64_MIN;
	static uint32_t x810 = 2974U;
	static uint16_t x811 = 6U;
	uint8_t x812 = 2U;
	int32_t t9 = 399;

    t9 = (((x809<=x810)|x811)<<x812);

    if (t9 != 28) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x813 = INT8_MIN;
	static int64_t x814 = -1LL;
	uint16_t x815 = 15680U;
	uint16_t x816 = 14U;
	volatile int32_t t10 = -1805;

    t10 = (((x813<=x814)|x815)<<x816);

    if (t10 != 256917504) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x833 = INT16_MIN;
	static uint64_t x834 = UINT64_MAX;
	int64_t x835 = 7052985LL;
	static uint64_t x836 = 34LLU;
	volatile int64_t t11 = 95454011708LL;

    t11 = (((x833<=x834)|x835)<<x836);

    if (t11 != 121169359656714240LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint64_t x837 = 82341621LLU;
	int16_t x838 = -731;
	volatile int32_t x839 = 636312;
	int16_t x840 = 0;
	static int32_t t12 = -5003;

    t12 = (((x837<=x838)|x839)<<x840);

    if (t12 != 636313) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x897 = 192535596U;
	int32_t x898 = INT32_MIN;
	static int64_t x899 = 3425168195468500LL;
	uint16_t x900 = 3U;

    t13 = (((x897<=x898)|x899)<<x900);

    if (t13 != 27401345563748008LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x913 = INT16_MIN;
	int64_t x914 = 20029LL;
	uint16_t x916 = 0U;
	uint32_t t14 = 68836009U;

    t14 = (((x913<=x914)|x915)<<x916);

    if (t14 != 19010133U) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x957 = INT8_MIN;
	static volatile int64_t x958 = INT64_MAX;
	static volatile uint16_t x959 = 24364U;
	uint8_t x960 = 3U;
	volatile int32_t t15 = 26171;

    t15 = (((x957<=x958)|x959)<<x960);

    if (t15 != 194920) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x1093 = -1;
	static uint8_t x1094 = 0U;
	uint64_t x1095 = 610647767435LLU;
	uint8_t x1096 = 31U;
	volatile uint64_t t16 = 3334493LLU;

    t16 = (((x1093<=x1094)|x1095)<<x1096);

    if (t16 != 1637266020991238144LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint64_t x1133 = 536386141LLU;
	uint64_t x1134 = 16249982LLU;
	int64_t x1135 = 15276005121560409LL;
	uint16_t x1136 = 4U;

    t17 = (((x1133<=x1134)|x1135)<<x1136);

    if (t17 != 244416081944966544LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x1218 = INT64_MIN;
	int8_t x1219 = 1;

    t18 = (((x1217<=x1218)|x1219)<<x1220);

    if (t18 != 4) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x1386 = UINT64_MAX;
	uint64_t x1387 = UINT64_MAX;
	int8_t x1388 = 1;
	volatile uint64_t t19 = 96130LLU;

    t19 = (((x1385<=x1386)|x1387)<<x1388);

    if (t19 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile uint32_t x1453 = 1289U;
	int16_t x1454 = INT16_MIN;
	int64_t x1455 = 535738030244134LL;
	uint8_t x1456 = 0U;
	static int64_t t20 = -170380367711522LL;

    t20 = (((x1453<=x1454)|x1455)<<x1456);

    if (t20 != 535738030244135LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x1458 = INT64_MAX;
	uint64_t x1459 = 8197853822LLU;
	int32_t x1460 = 0;
	uint64_t t21 = 215255673LLU;

    t21 = (((x1457<=x1458)|x1459)<<x1460);

    if (t21 != 8197853823LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x1469 = -1;
	volatile uint16_t x1470 = 307U;
	uint16_t x1471 = UINT16_MAX;
	volatile int32_t t22 = -26;

    t22 = (((x1469<=x1470)|x1471)<<x1472);

    if (t22 != 262140) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x1613 = -1;
	uint32_t x1614 = 122248609U;
	static uint16_t x1615 = UINT16_MAX;
	int64_t x1616 = 0LL;
	volatile int32_t t23 = 738356950;

    t23 = (((x1613<=x1614)|x1615)<<x1616);

    if (t23 != 65535) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x1654 = INT8_MIN;
	static volatile uint64_t x1655 = UINT64_MAX;
	static uint32_t x1656 = 0U;
	static volatile uint64_t t24 = UINT64_MAX;

    t24 = (((x1653<=x1654)|x1655)<<x1656);

    if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x1757 = INT16_MIN;
	static int32_t x1758 = INT32_MAX;
	uint16_t x1759 = UINT16_MAX;
	static int8_t x1760 = 0;

    t25 = (((x1757<=x1758)|x1759)<<x1760);

    if (t25 != 65535) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile uint64_t x1805 = 0LLU;
	int32_t x1807 = 66484;
	static uint8_t x1808 = 0U;
	int32_t t26 = -6836;

    t26 = (((x1805<=x1806)|x1807)<<x1808);

    if (t26 != 66485) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x1889 = INT64_MIN;
	uint8_t x1891 = UINT8_MAX;
	int8_t x1892 = 1;
	volatile int32_t t27 = 376091;

    t27 = (((x1889<=x1890)|x1891)<<x1892);

    if (t27 != 510) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x1949 = -1;
	int64_t x1950 = 65258LL;
	static int16_t x1951 = 1;
	volatile uint8_t x1952 = 2U;
	volatile int32_t t28 = 22;

    t28 = (((x1949<=x1950)|x1951)<<x1952);

    if (t28 != 4) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x2163 = INT16_MAX;
	volatile int32_t x2164 = 0;
	static volatile int32_t t29 = -31628;

    t29 = (((x2161<=x2162)|x2163)<<x2164);

    if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x2237 = INT64_MAX;
	uint64_t x2238 = 6382112418LLU;
	uint16_t x2239 = UINT16_MAX;
	volatile int16_t x2240 = 0;
	volatile int32_t t30 = 254786;

    t30 = (((x2237<=x2238)|x2239)<<x2240);

    if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x2245 = -40;
	volatile uint64_t x2246 = UINT64_MAX;
	static volatile int16_t x2247 = 1;
	volatile int32_t t31 = -874;

    t31 = (((x2245<=x2246)|x2247)<<x2248);

    if (t31 != 2) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x2333 = -1;
	volatile int8_t x2334 = 1;
	static int8_t x2336 = 0;
	volatile int32_t t32 = 59;

    t32 = (((x2333<=x2334)|x2335)<<x2336);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x2501 = -3;
	static int8_t x2502 = 9;
	static int8_t x2503 = 0;
	volatile int8_t x2504 = 1;

    t33 = (((x2501<=x2502)|x2503)<<x2504);

    if (t33 != 2) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x2725 = INT8_MIN;
	int64_t x2726 = -30LL;
	int16_t x2727 = 1;
	static uint8_t x2728 = 3U;
	int32_t t34 = 329078;

    t34 = (((x2725<=x2726)|x2727)<<x2728);

    if (t34 != 8) { NG(); } else { ; }
	
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


    return 0;
}

