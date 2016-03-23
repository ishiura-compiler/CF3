
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

uint8_t x118 = UINT8_MAX;
volatile uint16_t x148 = 7U;
uint8_t x156 = 30U;
int16_t x173 = INT16_MIN;
uint8_t x240 = 0U;
int32_t t5 = 5507428;
volatile int16_t x343 = 6;
int32_t t7 = -1860;
int32_t x441 = INT32_MAX;
static int32_t t9 = 2;
int8_t x513 = 3;
int8_t x760 = 0;
volatile uint32_t t14 = 1U;
volatile uint8_t x871 = 103U;
uint32_t x995 = 249U;
int32_t t21 = 27934;
uint8_t x1185 = 95U;
volatile int32_t t23 = 1792978;
uint32_t x1247 = 845655U;
int32_t x1304 = 0;
volatile int64_t x1450 = 5953730787154LL;
static uint16_t x1451 = 16U;
uint8_t x1452 = 1U;
static int32_t x1514 = 212;
uint8_t x1515 = 4U;
int32_t t28 = 101;
int64_t x1547 = INT64_MAX;
static uint8_t x1726 = 29U;
uint8_t x1728 = 48U;
uint16_t x1964 = 6U;
volatile uint8_t x1976 = 23U;
uint32_t x2061 = UINT32_MAX;
volatile uint32_t x2177 = 9U;
volatile int8_t x2178 = INT8_MAX;
int8_t x2193 = 38;
uint16_t x2222 = 7823U;
volatile int32_t t43 = 113;
int8_t x2368 = 42;
int32_t t44 = 0;
int16_t x2390 = INT16_MAX;


void f0(void) {
    	int32_t x1 = INT32_MIN;
	uint8_t x2 = UINT8_MAX;
	static int32_t x3 = 8813271;
	int8_t x4 = 0;
	int32_t t0 = 0;

    t0 = (x1&(x2==(x3>>x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x117 = INT16_MIN;
	uint64_t x119 = UINT64_MAX;
	static int8_t x120 = 2;
	int32_t t1 = -118084;

    t1 = (x117&(x118==(x119>>x120)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x145 = 1U;
	uint8_t x146 = 1U;
	uint64_t x147 = 549364618LLU;
	int32_t t2 = 228537383;

    t2 = (x145&(x146==(x147>>x148)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x153 = INT32_MAX;
	volatile int8_t x154 = -6;
	static int16_t x155 = 0;
	static volatile int32_t t3 = 1;

    t3 = (x153&(x154==(x155>>x156)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x174 = INT8_MAX;
	uint32_t x175 = UINT32_MAX;
	int32_t x176 = 0;
	int32_t t4 = 5276;

    t4 = (x173&(x174==(x175>>x176)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x237 = 1U;
	uint16_t x238 = 1U;
	int32_t x239 = INT32_MAX;

    t5 = (x237&(x238==(x239>>x240)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x317 = 5539U;
	int32_t x318 = INT32_MIN;
	int16_t x319 = INT16_MAX;
	uint16_t x320 = 3U;
	static volatile int32_t t6 = -933877767;

    t6 = (x317&(x318==(x319>>x320)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x341 = INT16_MIN;
	int8_t x342 = -16;
	uint16_t x344 = 1U;

    t7 = (x341&(x342==(x343>>x344)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x442 = UINT64_MAX;
	uint8_t x443 = 3U;
	volatile int8_t x444 = 7;
	int32_t t8 = -480;

    t8 = (x441&(x442==(x443>>x444)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x465 = -41;
	uint64_t x466 = UINT64_MAX;
	uint32_t x467 = UINT32_MAX;
	uint32_t x468 = 1U;

    t9 = (x465&(x466==(x467>>x468)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int64_t x505 = INT64_MAX;
	volatile int8_t x506 = INT8_MIN;
	volatile int32_t x507 = 13;
	uint64_t x508 = 7LLU;
	int64_t t10 = -960565LL;

    t10 = (x505&(x506==(x507>>x508)));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x514 = 72287667250536LLU;
	uint64_t x515 = UINT64_MAX;
	uint8_t x516 = 1U;
	volatile int32_t t11 = -36;

    t11 = (x513&(x514==(x515>>x516)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x537 = 24;
	int8_t x538 = -1;
	volatile uint8_t x539 = 36U;
	uint16_t x540 = 1U;
	volatile int32_t t12 = 1;

    t12 = (x537&(x538==(x539>>x540)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile uint16_t x617 = 525U;
	volatile int32_t x618 = 8623;
	uint64_t x619 = UINT64_MAX;
	int32_t x620 = 27;
	int32_t t13 = 2783;

    t13 = (x617&(x618==(x619>>x620)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x757 = 2414U;
	int64_t x758 = INT64_MAX;
	int64_t x759 = INT64_MAX;

    t14 = (x757&(x758==(x759>>x760)));

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x769 = 780679091;
	int16_t x770 = -1;
	uint64_t x771 = 100538LLU;
	static uint8_t x772 = 12U;
	volatile int32_t t15 = -7713;

    t15 = (x769&(x770==(x771>>x772)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x805 = 12U;
	int8_t x806 = INT8_MIN;
	uint8_t x807 = 22U;
	static int32_t x808 = 1;
	int32_t t16 = 60;

    t16 = (x805&(x806==(x807>>x808)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x809 = 1;
	static uint8_t x810 = 6U;
	uint8_t x811 = 31U;
	uint16_t x812 = 0U;
	volatile int32_t t17 = -2300;

    t17 = (x809&(x810==(x811>>x812)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int8_t x837 = INT8_MIN;
	uint8_t x838 = UINT8_MAX;
	uint32_t x839 = 935557870U;
	uint64_t x840 = 12LLU;
	int32_t t18 = -13231;

    t18 = (x837&(x838==(x839>>x840)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x869 = -1;
	int8_t x870 = -1;
	volatile uint64_t x872 = 1LLU;
	volatile int32_t t19 = -718;

    t19 = (x869&(x870==(x871>>x872)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x993 = 8702U;
	int64_t x994 = INT64_MIN;
	uint8_t x996 = 0U;
	volatile uint32_t t20 = 463746901U;

    t20 = (x993&(x994==(x995>>x996)));

    if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x1009 = INT16_MAX;
	volatile int8_t x1010 = INT8_MIN;
	volatile uint32_t x1011 = 0U;
	int16_t x1012 = 1;

    t21 = (x1009&(x1010==(x1011>>x1012)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x1141 = INT8_MIN;
	int16_t x1142 = -419;
	uint16_t x1143 = 20U;
	uint32_t x1144 = 9U;
	int32_t t22 = 26903;

    t22 = (x1141&(x1142==(x1143>>x1144)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x1186 = -1;
	volatile int8_t x1187 = INT8_MAX;
	int16_t x1188 = 1;

    t23 = (x1185&(x1186==(x1187>>x1188)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x1245 = 2U;
	volatile int8_t x1246 = INT8_MIN;
	volatile uint8_t x1248 = 26U;
	volatile int32_t t24 = -4;

    t24 = (x1245&(x1246==(x1247>>x1248)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x1301 = -1;
	int8_t x1302 = INT8_MAX;
	uint16_t x1303 = 137U;
	volatile int32_t t25 = -2118;

    t25 = (x1301&(x1302==(x1303>>x1304)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x1409 = UINT64_MAX;
	int8_t x1410 = INT8_MIN;
	uint8_t x1411 = 1U;
	static uint8_t x1412 = 30U;
	static uint64_t t26 = 8959727269216880LLU;

    t26 = (x1409&(x1410==(x1411>>x1412)));

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x1449 = -773;
	volatile int32_t t27 = 39979963;

    t27 = (x1449&(x1450==(x1451>>x1452)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x1513 = INT8_MIN;
	volatile uint16_t x1516 = 12U;

    t28 = (x1513&(x1514==(x1515>>x1516)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int16_t x1545 = INT16_MIN;
	volatile int64_t x1546 = -1LL;
	uint64_t x1548 = 55LLU;
	int32_t t29 = 0;

    t29 = (x1545&(x1546==(x1547>>x1548)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x1725 = INT8_MAX;
	int64_t x1727 = INT64_MAX;
	volatile int32_t t30 = -13901;

    t30 = (x1725&(x1726==(x1727>>x1728)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x1809 = INT32_MIN;
	volatile int8_t x1810 = 26;
	uint64_t x1811 = 45949LLU;
	uint16_t x1812 = 0U;
	int32_t t31 = 575457;

    t31 = (x1809&(x1810==(x1811>>x1812)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x1861 = 0;
	static int64_t x1862 = -2055746938842308015LL;
	uint64_t x1863 = 198144335LLU;
	int8_t x1864 = 26;
	int32_t t32 = -66982354;

    t32 = (x1861&(x1862==(x1863>>x1864)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x1961 = 39U;
	int16_t x1962 = -1;
	static int8_t x1963 = 1;
	volatile int32_t t33 = -3;

    t33 = (x1961&(x1962==(x1963>>x1964)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x1973 = UINT32_MAX;
	int32_t x1974 = 624;
	static uint8_t x1975 = UINT8_MAX;
	volatile uint32_t t34 = 1531341U;

    t34 = (x1973&(x1974==(x1975>>x1976)));

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x2017 = -1;
	int32_t x2018 = INT32_MIN;
	uint16_t x2019 = UINT16_MAX;
	uint8_t x2020 = 3U;
	int32_t t35 = 39221;

    t35 = (x2017&(x2018==(x2019>>x2020)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x2057 = -1;
	int16_t x2058 = 112;
	volatile uint8_t x2059 = 17U;
	uint8_t x2060 = 0U;
	int32_t t36 = -5;

    t36 = (x2057&(x2058==(x2059>>x2060)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x2062 = INT16_MAX;
	volatile int64_t x2063 = 39713134594LL;
	int32_t x2064 = 0;
	volatile uint32_t t37 = 2414733U;

    t37 = (x2061&(x2062==(x2063>>x2064)));

    if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x2179 = 3175682;
	uint8_t x2180 = 0U;
	uint32_t t38 = 66095670U;

    t38 = (x2177&(x2178==(x2179>>x2180)));

    if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int32_t x2194 = 19876;
	int32_t x2195 = 330592571;
	uint8_t x2196 = 1U;
	volatile int32_t t39 = 9;

    t39 = (x2193&(x2194==(x2195>>x2196)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x2221 = UINT16_MAX;
	int64_t x2223 = INT64_MAX;
	uint16_t x2224 = 2U;
	volatile int32_t t40 = 152020;

    t40 = (x2221&(x2222==(x2223>>x2224)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x2257 = 332129U;
	int8_t x2258 = INT8_MAX;
	int16_t x2259 = 4745;
	volatile uint64_t x2260 = 7LLU;
	uint32_t t41 = 1916403388U;

    t41 = (x2257&(x2258==(x2259>>x2260)));

    if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x2345 = INT8_MAX;
	static volatile uint64_t x2346 = UINT64_MAX;
	int16_t x2347 = INT16_MAX;
	static volatile int8_t x2348 = 28;
	volatile int32_t t42 = -151852;

    t42 = (x2345&(x2346==(x2347>>x2348)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x2357 = 190U;
	int64_t x2358 = -1744LL;
	uint32_t x2359 = 2U;
	int64_t x2360 = 0LL;

    t43 = (x2357&(x2358==(x2359>>x2360)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x2365 = UINT8_MAX;
	volatile uint64_t x2366 = UINT64_MAX;
	uint64_t x2367 = 25LLU;

    t44 = (x2365&(x2366==(x2367>>x2368)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x2389 = UINT64_MAX;
	volatile uint8_t x2391 = 15U;
	uint8_t x2392 = 19U;
	uint64_t t45 = 1282239771264446282LLU;

    t45 = (x2389&(x2390==(x2391>>x2392)));

    if (t45 != 0LLU) { NG(); } else { ; }
	
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


    return 0;
}

