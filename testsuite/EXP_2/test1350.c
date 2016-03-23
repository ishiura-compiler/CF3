
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

int8_t x101 = 33;
int16_t x103 = -1;
volatile int64_t x104 = 0LL;
volatile int32_t t0 = 4780238;
uint64_t x149 = 208958844526109237LLU;
static int32_t t2 = 127964;
static volatile uint8_t x168 = 29U;
uint8_t x193 = 2U;
volatile uint32_t x194 = UINT32_MAX;
volatile uint16_t x205 = 20288U;
static volatile int32_t x225 = INT32_MAX;
uint16_t x228 = 0U;
static volatile uint16_t x347 = 2688U;
static volatile int64_t x406 = -6993388LL;
int8_t x408 = 4;
uint32_t t12 = 2U;
volatile uint8_t x452 = 0U;
static volatile int32_t t13 = 0;
int64_t x483 = -1LL;
static int32_t t14 = 245483;
static int64_t x509 = INT64_MAX;
uint8_t x512 = 0U;
volatile int16_t x656 = 40;
int8_t x746 = -1;
int64_t x755 = INT64_MIN;
uint32_t x1031 = 0U;
int32_t x1032 = 1;
volatile uint32_t t21 = 599641U;
volatile int8_t x1217 = INT8_MAX;
volatile int8_t x1219 = -1;
volatile int32_t t22 = -665703;
volatile int32_t t23 = 28218091;
uint8_t x1329 = 5U;
uint16_t x1334 = 14451U;
volatile int64_t t25 = 8493422029952LL;
volatile int32_t t26 = -3966;
volatile int32_t x1431 = INT32_MIN;
int16_t x1433 = INT16_MAX;
static int32_t x1436 = 0;
int32_t t28 = 35307909;
uint32_t x1576 = 1U;
volatile int16_t x1634 = INT16_MIN;
uint8_t x1636 = 28U;
static uint64_t x1755 = 2LLU;
volatile uint32_t t34 = UINT32_MAX;
int16_t x1800 = 7;
volatile uint8_t x1881 = UINT8_MAX;
volatile uint32_t t39 = 8070U;
volatile int64_t x1987 = INT64_MIN;
volatile int64_t x2066 = INT64_MIN;
static volatile int8_t x2067 = 1;
volatile int8_t x2117 = INT8_MAX;
static uint64_t x2185 = UINT64_MAX;
int8_t x2186 = -1;
static uint8_t x2188 = 0U;
static uint16_t x2240 = 45U;
volatile int16_t x2332 = 1;


void f0(void) {
    	static int8_t x102 = 4;

    t0 = ((x101|(x102!=x103))<<x104);

    if (t0 != 33) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x150 = -3;
	int8_t x151 = INT8_MIN;
	uint8_t x152 = 5U;
	uint64_t t1 = 1862194LLU;

    t1 = ((x149|(x150!=x151))<<x152);

    if (t1 != 6686683024835495584LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x161 = 7;
	uint16_t x162 = 537U;
	volatile int32_t x163 = -1;
	uint8_t x164 = 0U;

    t2 = ((x161|(x162!=x163))<<x164);

    if (t2 != 7) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x165 = 0LLU;
	int64_t x166 = INT64_MIN;
	volatile uint16_t x167 = UINT16_MAX;
	volatile uint64_t t3 = 1025347679038826LLU;

    t3 = ((x165|(x166!=x167))<<x168);

    if (t3 != 536870912LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x195 = INT8_MIN;
	volatile uint8_t x196 = 3U;
	volatile int32_t t4 = 247854;

    t4 = ((x193|(x194!=x195))<<x196);

    if (t4 != 24) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x206 = UINT64_MAX;
	int16_t x207 = -320;
	uint16_t x208 = 15U;
	int32_t t5 = -2;

    t5 = ((x205|(x206!=x207))<<x208);

    if (t5 != 664829952) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x209 = 9U;
	uint32_t x210 = UINT32_MAX;
	uint32_t x211 = 4U;
	static int16_t x212 = 6;
	volatile int32_t t6 = -44555430;

    t6 = ((x209|(x210!=x211))<<x212);

    if (t6 != 576) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x226 = -1;
	int8_t x227 = INT8_MIN;
	int32_t t7 = INT32_MAX;

    t7 = ((x225|(x226!=x227))<<x228);

    if (t7 != INT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x333 = INT8_MAX;
	int16_t x334 = INT16_MIN;
	int32_t x335 = INT32_MIN;
	volatile uint8_t x336 = 1U;
	int32_t t8 = 26;

    t8 = ((x333|(x334!=x335))<<x336);

    if (t8 != 254) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x345 = 2;
	volatile int64_t x346 = 126123202LL;
	uint8_t x348 = 3U;
	volatile int32_t t9 = 137846;

    t9 = ((x345|(x346!=x347))<<x348);

    if (t9 != 24) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x377 = UINT32_MAX;
	int64_t x378 = INT64_MAX;
	int64_t x379 = -1LL;
	int8_t x380 = 0;
	volatile uint32_t t10 = UINT32_MAX;

    t10 = ((x377|(x378!=x379))<<x380);

    if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x393 = 1411;
	static volatile int8_t x394 = INT8_MIN;
	int16_t x395 = INT16_MAX;
	static int8_t x396 = 3;
	volatile int32_t t11 = 10804864;

    t11 = ((x393|(x394!=x395))<<x396);

    if (t11 != 11288) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint32_t x405 = 874762U;
	uint32_t x407 = 27U;

    t12 = ((x405|(x406!=x407))<<x408);

    if (t12 != 13996208U) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint16_t x449 = 1U;
	uint8_t x450 = 12U;
	volatile int64_t x451 = -1LL;

    t13 = ((x449|(x450!=x451))<<x452);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x481 = 1;
	static int8_t x482 = -1;
	static int8_t x484 = 2;

    t14 = ((x481|(x482!=x483))<<x484);

    if (t14 != 4) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile uint64_t x510 = UINT64_MAX;
	int16_t x511 = 0;
	int64_t t15 = INT64_MAX;

    t15 = ((x509|(x510!=x511))<<x512);

    if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t x653 = UINT64_MAX;
	int8_t x654 = INT8_MIN;
	volatile uint32_t x655 = 1U;
	volatile uint64_t t16 = 5193131495877594LLU;

    t16 = ((x653|(x654!=x655))<<x656);

    if (t16 != 18446742974197923840LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x745 = 3U;
	int8_t x747 = INT8_MAX;
	uint32_t x748 = 2U;
	static volatile int32_t t17 = 23446;

    t17 = ((x745|(x746!=x747))<<x748);

    if (t17 != 12) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x753 = INT16_MAX;
	int64_t x754 = -1LL;
	volatile int8_t x756 = 12;
	int32_t t18 = 3426;

    t18 = ((x753|(x754!=x755))<<x756);

    if (t18 != 134213632) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint8_t x757 = 37U;
	static int64_t x758 = -1040403552361788017LL;
	uint32_t x759 = 5234U;
	uint8_t x760 = 10U;
	volatile int32_t t19 = -8955;

    t19 = ((x757|(x758!=x759))<<x760);

    if (t19 != 37888) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint32_t x953 = 3460U;
	uint16_t x954 = UINT16_MAX;
	int32_t x955 = 47510984;
	uint16_t x956 = 4U;
	volatile uint32_t t20 = 2U;

    t20 = ((x953|(x954!=x955))<<x956);

    if (t20 != 55376U) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x1029 = 2401981U;
	int32_t x1030 = INT32_MAX;

    t21 = ((x1029|(x1030!=x1031))<<x1032);

    if (t21 != 4803962U) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x1218 = INT8_MIN;
	int8_t x1220 = 1;

    t22 = ((x1217|(x1218!=x1219))<<x1220);

    if (t22 != 254) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x1297 = 0;
	int8_t x1298 = 1;
	volatile int8_t x1299 = INT8_MIN;
	static int8_t x1300 = 1;

    t23 = ((x1297|(x1298!=x1299))<<x1300);

    if (t23 != 2) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x1330 = -922;
	static int8_t x1331 = INT8_MIN;
	uint16_t x1332 = 10U;
	int32_t t24 = 7008;

    t24 = ((x1329|(x1330!=x1331))<<x1332);

    if (t24 != 5120) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x1333 = 117203404291099522LL;
	int16_t x1335 = INT16_MIN;
	int8_t x1336 = 0;

    t25 = ((x1333|(x1334!=x1335))<<x1336);

    if (t25 != 117203404291099523LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x1397 = INT16_MAX;
	uint8_t x1398 = UINT8_MAX;
	static int16_t x1399 = 1;
	static volatile uint8_t x1400 = 6U;

    t26 = ((x1397|(x1398!=x1399))<<x1400);

    if (t26 != 2097088) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x1429 = 181U;
	uint32_t x1430 = 30980U;
	static uint16_t x1432 = 1U;
	volatile uint32_t t27 = 500758115U;

    t27 = ((x1429|(x1430!=x1431))<<x1432);

    if (t27 != 362U) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x1434 = 27;
	volatile int64_t x1435 = INT64_MAX;

    t28 = ((x1433|(x1434!=x1435))<<x1436);

    if (t28 != 32767) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint8_t x1573 = UINT8_MAX;
	static int64_t x1574 = INT64_MIN;
	int16_t x1575 = INT16_MIN;
	static volatile int32_t t29 = 27639048;

    t29 = ((x1573|(x1574!=x1575))<<x1576);

    if (t29 != 510) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x1593 = 225U;
	int64_t x1594 = -119882431220836LL;
	int32_t x1595 = INT32_MIN;
	uint16_t x1596 = 7U;
	uint32_t t30 = 2047U;

    t30 = ((x1593|(x1594!=x1595))<<x1596);

    if (t30 != 28800U) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x1633 = 1U;
	int8_t x1635 = 13;
	int32_t t31 = 18558;

    t31 = ((x1633|(x1634!=x1635))<<x1636);

    if (t31 != 268435456) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x1681 = 56U;
	int32_t x1682 = -2037879;
	uint16_t x1683 = 1U;
	uint64_t x1684 = 2LLU;
	volatile int32_t t32 = -31462;

    t32 = ((x1681|(x1682!=x1683))<<x1684);

    if (t32 != 228) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x1749 = 234281887U;
	static uint16_t x1750 = UINT16_MAX;
	uint8_t x1751 = 34U;
	static uint16_t x1752 = 1U;
	volatile uint32_t t33 = 542U;

    t33 = ((x1749|(x1750!=x1751))<<x1752);

    if (t33 != 468563774U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x1753 = UINT32_MAX;
	volatile uint16_t x1754 = 1U;
	int16_t x1756 = 0;

    t34 = ((x1753|(x1754!=x1755))<<x1756);

    if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x1797 = 168526161961LLU;
	int32_t x1798 = 981358;
	static volatile int8_t x1799 = -1;
	static uint64_t t35 = 1459668060503588175LLU;

    t35 = ((x1797|(x1798!=x1799))<<x1800);

    if (t35 != 21571348731008LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x1873 = 120;
	int8_t x1874 = -1;
	int64_t x1875 = 41LL;
	int8_t x1876 = 7;
	volatile int32_t t36 = 31669;

    t36 = ((x1873|(x1874!=x1875))<<x1876);

    if (t36 != 15488) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x1882 = INT16_MAX;
	uint16_t x1883 = UINT16_MAX;
	uint8_t x1884 = 11U;
	int32_t t37 = -2;

    t37 = ((x1881|(x1882!=x1883))<<x1884);

    if (t37 != 522240) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x1929 = 459222656300986260LLU;
	volatile uint8_t x1930 = 15U;
	int8_t x1931 = 44;
	uint8_t x1932 = 4U;
	static volatile uint64_t t38 = 11LLU;

    t38 = ((x1929|(x1930!=x1931))<<x1932);

    if (t38 != 7347562500815780176LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint32_t x1957 = 24071U;
	uint64_t x1958 = 26109668981LLU;
	static int8_t x1959 = INT8_MIN;
	uint32_t x1960 = 1U;

    t39 = ((x1957|(x1958!=x1959))<<x1960);

    if (t39 != 48142U) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x1985 = 0U;
	int64_t x1986 = -1LL;
	volatile int8_t x1988 = 6;
	volatile int32_t t40 = 2922;

    t40 = ((x1985|(x1986!=x1987))<<x1988);

    if (t40 != 64) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile uint16_t x2065 = 3U;
	uint32_t x2068 = 18U;
	int32_t t41 = -7;

    t41 = ((x2065|(x2066!=x2067))<<x2068);

    if (t41 != 786432) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x2081 = UINT32_MAX;
	int8_t x2082 = INT8_MAX;
	volatile uint16_t x2083 = 260U;
	static uint16_t x2084 = 2U;
	volatile uint32_t t42 = 108U;

    t42 = ((x2081|(x2082!=x2083))<<x2084);

    if (t42 != 4294967292U) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x2118 = INT32_MAX;
	uint8_t x2119 = UINT8_MAX;
	static uint8_t x2120 = 0U;
	volatile int32_t t43 = -216;

    t43 = ((x2117|(x2118!=x2119))<<x2120);

    if (t43 != 127) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x2133 = 36;
	int64_t x2134 = INT64_MIN;
	volatile uint8_t x2135 = UINT8_MAX;
	volatile uint8_t x2136 = 19U;
	int32_t t44 = 1;

    t44 = ((x2133|(x2134!=x2135))<<x2136);

    if (t44 != 19398656) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x2141 = INT16_MAX;
	volatile int8_t x2142 = INT8_MIN;
	int64_t x2143 = INT64_MAX;
	int8_t x2144 = 0;
	static int32_t t45 = 3845;

    t45 = ((x2141|(x2142!=x2143))<<x2144);

    if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x2187 = -1;
	uint64_t t46 = UINT64_MAX;

    t46 = ((x2185|(x2186!=x2187))<<x2188);

    if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x2237 = 338157107164905LLU;
	static volatile int8_t x2238 = -48;
	int64_t x2239 = 8226796LL;
	static volatile uint64_t t47 = 3237096958030057LLU;

    t47 = ((x2237|(x2238!=x2239))<<x2240);

    if (t47 != 494586718452711424LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x2329 = 5527691823LL;
	uint64_t x2330 = 11107848203LLU;
	static int16_t x2331 = INT16_MAX;
	int64_t t48 = 85LL;

    t48 = ((x2329|(x2330!=x2331))<<x2332);

    if (t48 != 11055383646LL) { NG(); } else { ; }
	
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


    return 0;
}

