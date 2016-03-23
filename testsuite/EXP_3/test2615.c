
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

int16_t x5 = 50;
volatile int32_t t0 = 30539303;
volatile int32_t x42 = -1;
int32_t x43 = INT32_MIN;
static uint64_t x89 = UINT64_MAX;
static volatile int8_t x96 = -1;
uint64_t x138 = UINT64_MAX;
uint16_t x139 = 1U;
uint8_t x140 = 12U;
static int32_t x157 = INT32_MIN;
static uint64_t t7 = 556895305426LLU;
volatile int32_t t8 = -14688;
static int64_t x433 = INT64_MAX;
volatile int64_t t11 = 6138073980LL;
int64_t x607 = -1LL;
volatile uint64_t t13 = 42346027864LLU;
uint64_t x671 = UINT64_MAX;
int8_t x841 = INT8_MIN;
static int32_t x842 = -1;
uint64_t x984 = UINT64_MAX;
uint64_t t17 = 175268484241525024LLU;
int64_t t18 = 22793689LL;
static uint16_t x1196 = 0U;
static int64_t t19 = 11741755061LL;
int64_t x1259 = -1LL;
uint16_t x1305 = 15U;
int64_t x1306 = -12343LL;
static int32_t x1308 = INT32_MAX;
int64_t t21 = -15222538189784921LL;
volatile uint32_t x1388 = UINT32_MAX;
static volatile uint32_t t23 = 34232302U;
static uint64_t x1437 = UINT64_MAX;
int8_t x1442 = INT8_MAX;
uint32_t x1473 = 11643U;
uint64_t x1517 = 6080242983919607391LLU;
volatile uint8_t x1518 = 1U;
uint64_t x1574 = 22140LLU;
int8_t x1640 = 9;
uint32_t t29 = 19825786U;
int16_t x1734 = -25;
static int32_t x1736 = INT32_MIN;
uint8_t x1829 = 91U;
int64_t x1832 = INT64_MIN;
int8_t x1837 = INT8_MIN;
uint8_t x1925 = 1U;
volatile int8_t x1930 = -44;
static int32_t x1942 = INT32_MIN;
int8_t x1943 = -4;
int64_t x2092 = -1LL;
static uint8_t x2109 = 10U;
static int8_t x2111 = -1;
uint64_t t38 = 200960LLU;
int32_t x2187 = INT32_MIN;
uint32_t x2328 = UINT32_MAX;
static volatile int32_t x2346 = -42;
int16_t x2362 = -1;
int32_t x2407 = INT32_MIN;
int32_t x2517 = 0;
volatile uint16_t x2569 = 136U;
int8_t x2570 = INT8_MIN;
int16_t x2621 = INT16_MIN;
volatile int32_t t47 = -10480481;
static volatile uint32_t t48 = 48U;
static uint16_t x3008 = 57U;
int64_t x3024 = -1LL;
int64_t x3042 = 804780552356294406LL;
uint32_t x3043 = 0U;
volatile uint64_t t51 = 12632LLU;
static volatile uint64_t t53 = 2568556144247LLU;
int16_t x3461 = INT16_MAX;
int8_t x3463 = 1;


void f0(void) {
    	volatile uint16_t x6 = UINT16_MAX;
	static uint64_t x7 = 15LLU;
	uint8_t x8 = 25U;

    t0 = ((x5%x6)>>(x7^x8));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x17 = INT32_MIN;
	uint64_t x18 = UINT64_MAX;
	static int32_t x19 = -1;
	int8_t x20 = -38;
	uint64_t t1 = 158005907LLU;

    t1 = ((x17%x18)>>(x19^x20));

    if (t1 != 134217727LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x41 = 9350164596738223LLU;
	static int32_t x44 = INT32_MIN;
	static uint64_t t2 = 22988972LLU;

    t2 = ((x41%x42)>>(x43^x44));

    if (t2 != 9350164596738223LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x90 = INT16_MIN;
	int32_t x91 = 3;
	uint16_t x92 = 37U;
	uint64_t t3 = 631914LLU;

    t3 = ((x89%x90)>>(x91^x92));

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x93 = INT32_MIN;
	int32_t x94 = INT32_MIN;
	uint32_t x95 = UINT32_MAX;
	static int32_t t4 = -6746;

    t4 = ((x93%x94)>>(x95^x96));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint8_t x137 = 50U;
	uint64_t t5 = 192728805LLU;

    t5 = ((x137%x138)>>(x139^x140));

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x158 = INT8_MIN;
	volatile int8_t x159 = -1;
	int8_t x160 = -22;
	volatile int32_t t6 = 32844920;

    t6 = ((x157%x158)>>(x159^x160));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x189 = UINT64_MAX;
	volatile uint16_t x190 = UINT16_MAX;
	volatile int64_t x191 = INT64_MIN;
	int64_t x192 = INT64_MIN;

    t7 = ((x189%x190)>>(x191^x192));

    if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x277 = 4U;
	int8_t x278 = INT8_MAX;
	volatile uint8_t x279 = 22U;
	uint8_t x280 = 14U;

    t8 = ((x277%x278)>>(x279^x280));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint64_t x321 = 138408737352978309LLU;
	volatile int8_t x322 = -1;
	static int32_t x323 = -1;
	int8_t x324 = -28;
	static volatile uint64_t t9 = 128349402110181123LLU;

    t9 = ((x321%x322)>>(x323^x324));

    if (t9 != 1031225452LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x329 = 6268704494823426LLU;
	volatile int64_t x330 = 1005515465411679970LL;
	static volatile uint32_t x331 = UINT32_MAX;
	volatile int8_t x332 = -52;
	uint64_t t10 = 182895295624375845LLU;

    t10 = ((x329%x330)>>(x331^x332));

    if (t10 != 2LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x434 = 362;
	uint32_t x435 = UINT32_MAX;
	int16_t x436 = -31;

    t11 = ((x433%x434)>>(x435^x436));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x605 = UINT64_MAX;
	volatile int32_t x606 = 12;
	volatile int64_t x608 = -1LL;
	volatile uint64_t t12 = 1455318LLU;

    t12 = ((x605%x606)>>(x607^x608));

    if (t12 != 3LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint8_t x665 = 6U;
	uint64_t x666 = UINT64_MAX;
	static uint8_t x667 = 29U;
	static uint8_t x668 = 42U;

    t13 = ((x665%x666)>>(x667^x668));

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x669 = 15;
	uint32_t x670 = 287U;
	int64_t x672 = -1LL;
	static volatile uint32_t t14 = 0U;

    t14 = ((x669%x670)>>(x671^x672));

    if (t14 != 15U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x843 = UINT64_MAX;
	uint64_t x844 = UINT64_MAX;
	static int32_t t15 = -7;

    t15 = ((x841%x842)>>(x843^x844));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x853 = INT64_MAX;
	static int8_t x854 = INT8_MIN;
	volatile int16_t x855 = -22;
	int16_t x856 = -1;
	volatile int64_t t16 = 500LL;

    t16 = ((x853%x854)>>(x855^x856));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x981 = INT32_MIN;
	static uint64_t x982 = UINT64_MAX;
	static int8_t x983 = -6;

    t17 = ((x981%x982)>>(x983^x984));

    if (t17 != 576460752236314624LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x1149 = -1;
	int64_t x1150 = -1LL;
	static volatile int16_t x1151 = -1;
	static int8_t x1152 = -3;

    t18 = ((x1149%x1150)>>(x1151^x1152));

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x1193 = INT64_MIN;
	int16_t x1194 = INT16_MIN;
	static uint8_t x1195 = 31U;

    t19 = ((x1193%x1194)>>(x1195^x1196));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x1257 = UINT16_MAX;
	volatile int16_t x1258 = -11;
	int8_t x1260 = -5;
	volatile int32_t t20 = 80;

    t20 = ((x1257%x1258)>>(x1259^x1260));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x1307 = INT32_MAX;

    t21 = ((x1305%x1306)>>(x1307^x1308));

    if (t21 != 15LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x1313 = 7;
	static uint64_t x1314 = 21509471316594694LLU;
	static int16_t x1315 = -1;
	static int16_t x1316 = -1;
	uint64_t t22 = 2181778LLU;

    t22 = ((x1313%x1314)>>(x1315^x1316));

    if (t22 != 7LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x1385 = INT16_MIN;
	uint32_t x1386 = 4429U;
	int16_t x1387 = -1;

    t23 = ((x1385%x1386)>>(x1387^x1388));

    if (t23 != 358U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x1438 = UINT8_MAX;
	int32_t x1439 = -1;
	static volatile int8_t x1440 = -1;
	volatile uint64_t t24 = 207394047LLU;

    t24 = ((x1437%x1438)>>(x1439^x1440));

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x1441 = INT32_MAX;
	int8_t x1443 = 3;
	uint16_t x1444 = 25U;
	volatile int32_t t25 = 292303;

    t25 = ((x1441%x1442)>>(x1443^x1444));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x1474 = UINT64_MAX;
	uint64_t x1475 = UINT64_MAX;
	static int64_t x1476 = -1LL;
	static uint64_t t26 = 1LLU;

    t26 = ((x1473%x1474)>>(x1475^x1476));

    if (t26 != 11643LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x1519 = UINT32_MAX;
	int16_t x1520 = -1;
	uint64_t t27 = 11465363046321LLU;

    t27 = ((x1517%x1518)>>(x1519^x1520));

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint16_t x1573 = UINT16_MAX;
	int32_t x1575 = -1;
	static uint64_t x1576 = UINT64_MAX;
	uint64_t t28 = 18855LLU;

    t28 = ((x1573%x1574)>>(x1575^x1576));

    if (t28 != 21255LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x1637 = -10;
	uint32_t x1638 = UINT32_MAX;
	uint8_t x1639 = 21U;

    t29 = ((x1637%x1638)>>(x1639^x1640));

    if (t29 != 15U) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x1733 = INT16_MAX;
	int32_t x1735 = INT32_MIN;
	volatile int32_t t30 = 176;

    t30 = ((x1733%x1734)>>(x1735^x1736));

    if (t30 != 17) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x1830 = INT8_MIN;
	int64_t x1831 = INT64_MIN;
	static volatile int32_t t31 = 1676675;

    t31 = ((x1829%x1830)>>(x1831^x1832));

    if (t31 != 91) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x1838 = -1;
	uint32_t x1839 = 13U;
	volatile uint8_t x1840 = 2U;
	volatile int32_t t32 = -14095;

    t32 = ((x1837%x1838)>>(x1839^x1840));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x1926 = -28286005;
	static int16_t x1927 = -1;
	volatile int64_t x1928 = -1LL;
	volatile int32_t t33 = -214;

    t33 = ((x1925%x1926)>>(x1927^x1928));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x1929 = 0U;
	static uint8_t x1931 = 6U;
	static int8_t x1932 = 1;
	static int32_t t34 = 1;

    t34 = ((x1929%x1930)>>(x1931^x1932));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint64_t x1941 = UINT64_MAX;
	uint64_t x1944 = UINT64_MAX;
	uint64_t t35 = 0LLU;

    t35 = ((x1941%x1942)>>(x1943^x1944));

    if (t35 != 268435455LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x2089 = UINT32_MAX;
	static uint32_t x2090 = UINT32_MAX;
	int32_t x2091 = -1;
	volatile uint32_t t36 = 28095915U;

    t36 = ((x2089%x2090)>>(x2091^x2092));

    if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x2110 = UINT16_MAX;
	uint32_t x2112 = UINT32_MAX;
	int32_t t37 = 25145;

    t37 = ((x2109%x2110)>>(x2111^x2112));

    if (t37 != 10) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x2177 = INT8_MIN;
	static uint64_t x2178 = UINT64_MAX;
	int32_t x2179 = INT32_MAX;
	int32_t x2180 = INT32_MAX;

    t38 = ((x2177%x2178)>>(x2179^x2180));

    if (t38 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x2185 = INT16_MAX;
	static int8_t x2186 = 7;
	int32_t x2188 = INT32_MIN;
	int32_t t39 = -4531346;

    t39 = ((x2185%x2186)>>(x2187^x2188));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x2209 = UINT64_MAX;
	int32_t x2210 = INT32_MIN;
	uint32_t x2211 = UINT32_MAX;
	int8_t x2212 = -1;
	static volatile uint64_t t40 = 133LLU;

    t40 = ((x2209%x2210)>>(x2211^x2212));

    if (t40 != 2147483647LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x2325 = INT32_MAX;
	int16_t x2326 = -6193;
	int16_t x2327 = -25;
	volatile int32_t t41 = 13182481;

    t41 = ((x2325%x2326)>>(x2327^x2328));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint8_t x2345 = 5U;
	static int8_t x2347 = -1;
	static int64_t x2348 = -2LL;
	int32_t t42 = -23833057;

    t42 = ((x2345%x2346)>>(x2347^x2348));

    if (t42 != 2) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x2361 = INT8_MAX;
	int8_t x2363 = 3;
	volatile int16_t x2364 = 1;
	int32_t t43 = -33411;

    t43 = ((x2361%x2362)>>(x2363^x2364));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x2405 = 4U;
	int16_t x2406 = INT16_MIN;
	int32_t x2408 = INT32_MIN;
	int32_t t44 = -135176027;

    t44 = ((x2405%x2406)>>(x2407^x2408));

    if (t44 != 4) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile uint16_t x2518 = 75U;
	int32_t x2519 = -1;
	int8_t x2520 = -2;
	int32_t t45 = -826;

    t45 = ((x2517%x2518)>>(x2519^x2520));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile uint8_t x2571 = 29U;
	int16_t x2572 = 11;
	volatile int32_t t46 = -87188520;

    t46 = ((x2569%x2570)>>(x2571^x2572));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x2622 = 1U;
	int32_t x2623 = INT32_MIN;
	volatile int32_t x2624 = INT32_MIN;

    t47 = ((x2621%x2622)>>(x2623^x2624));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x2777 = 1867988U;
	int32_t x2778 = INT32_MIN;
	volatile uint64_t x2779 = UINT64_MAX;
	uint64_t x2780 = UINT64_MAX;

    t48 = ((x2777%x2778)>>(x2779^x2780));

    if (t48 != 1867988U) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x3005 = 87;
	int32_t x3006 = 152667539;
	volatile uint32_t x3007 = 46U;
	int32_t t49 = 275;

    t49 = ((x3005%x3006)>>(x3007^x3008));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x3021 = 127U;
	int32_t x3022 = 64923;
	int32_t x3023 = -1;
	int32_t t50 = -119016;

    t50 = ((x3021%x3022)>>(x3023^x3024));

    if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint64_t x3041 = 6255LLU;
	static volatile uint16_t x3044 = 8U;

    t51 = ((x3041%x3042)>>(x3043^x3044));

    if (t51 != 24LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t x3045 = 4403;
	static int16_t x3046 = -1;
	int16_t x3047 = INT16_MIN;
	int16_t x3048 = INT16_MIN;
	int32_t t52 = 240273;

    t52 = ((x3045%x3046)>>(x3047^x3048));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x3057 = -1;
	volatile uint64_t x3058 = UINT64_MAX;
	int8_t x3059 = -13;
	int8_t x3060 = -1;

    t53 = ((x3057%x3058)>>(x3059^x3060));

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x3105 = 31200LLU;
	int8_t x3106 = INT8_MIN;
	volatile int8_t x3107 = 7;
	static int16_t x3108 = 31;
	volatile uint64_t t54 = 4037630540772662LLU;

    t54 = ((x3105%x3106)>>(x3107^x3108));

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x3361 = 31080310941770LLU;
	int8_t x3362 = INT8_MIN;
	static uint64_t x3363 = UINT64_MAX;
	int8_t x3364 = -1;
	uint64_t t55 = 5LLU;

    t55 = ((x3361%x3362)>>(x3363^x3364));

    if (t55 != 31080310941770LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x3462 = UINT8_MAX;
	uint8_t x3464 = 3U;
	volatile int32_t t56 = -1029571;

    t56 = ((x3461%x3462)>>(x3463^x3464));

    if (t56 != 31) { NG(); } else { ; }
	
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


    return 0;
}

