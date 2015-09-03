#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x6 = -1;
volatile uint64_t t0 = 3LLU;
static volatile int32_t t2 = -16543570;
volatile int8_t x242 = 1;
static int8_t x243 = 1;
uint64_t x257 = 7061765070341LLU;
volatile int64_t x276 = 120695258LL;
uint64_t x308 = UINT64_MAX;
uint16_t x488 = UINT16_MAX;
volatile uint64_t t8 = 5079475447118901LLU;
static volatile int64_t t10 = 58056790481689455LL;
static int32_t x558 = -1;
volatile uint64_t t13 = 19697764LLU;
uint64_t t15 = 241LLU;
int64_t x886 = -1LL;
uint64_t x1003 = UINT64_MAX;
uint32_t x1004 = 5328845U;
int16_t x1347 = INT16_MIN;
int16_t x1485 = INT16_MAX;
int16_t x1488 = INT16_MIN;
int32_t t22 = 62;
static volatile int32_t x1559 = -1;
volatile uint32_t x1716 = UINT32_MAX;
int32_t x1782 = -1;
int32_t x1923 = -1;
static int32_t x1961 = INT32_MAX;
int32_t x1962 = -1;
volatile uint64_t t30 = 120LLU;
volatile int64_t x2167 = INT64_MIN;
int16_t x2241 = 1;
uint8_t x2243 = 3U;
int32_t t32 = 17494566;
int32_t t33 = -332;
int64_t x2285 = -1LL;
int8_t x2287 = -1;
volatile int8_t x2288 = INT8_MIN;
int8_t x2335 = -1;
volatile uint32_t x2381 = 276477U;


void f0(void) {
	uint64_t x5 = 2648LLU;
	static int16_t x7 = -1;
	int8_t x8 = INT8_MAX;

	t0 = ((x5/(x6==x7))+x8);

	if (t0 != 2775LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x193 = INT32_MAX;
	static int16_t x194 = INT16_MIN;
	int16_t x195 = INT16_MIN;
	static uint32_t x196 = 374U;
	uint32_t t1 = 91856079U;

	t1 = ((x193/(x194==x195))+x196);

	if (t1 != 2147484021U) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x225 = UINT8_MAX;
	volatile int8_t x226 = INT8_MIN;
	int8_t x227 = INT8_MIN;
	static uint8_t x228 = 2U;

	t2 = ((x225/(x226==x227))+x228);

	if (t2 != 257) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x241 = INT32_MAX;
	int16_t x244 = INT16_MIN;
	volatile int32_t t3 = -43;

	t3 = ((x241/(x242==x243))+x244);

	if (t3 != 2147450879) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x258 = INT8_MIN;
	int8_t x259 = INT8_MIN;
	int8_t x260 = INT8_MIN;
	volatile uint64_t t4 = 1013LLU;

	t4 = ((x257/(x258==x259))+x260);

	if (t4 != 7061765070213LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x273 = 58;
	int8_t x274 = INT8_MIN;
	static int8_t x275 = INT8_MIN;
	volatile int64_t t5 = -2582500719924LL;

	t5 = ((x273/(x274==x275))+x276);

	if (t5 != 120695316LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x305 = UINT16_MAX;
	int32_t x306 = INT32_MAX;
	int32_t x307 = INT32_MAX;
	uint64_t t6 = 8754751908LLU;

	t6 = ((x305/(x306==x307))+x308);

	if (t6 != 65534LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x393 = 93U;
	static int32_t x394 = -1;
	uint32_t x395 = UINT32_MAX;
	int32_t x396 = 165845412;
	volatile int32_t t7 = -20103996;

	t7 = ((x393/(x394==x395))+x396);

	if (t7 != 165845505) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x485 = 249LLU;
	static uint32_t x486 = UINT32_MAX;
	int16_t x487 = -1;

	t8 = ((x485/(x486==x487))+x488);

	if (t8 != 65784LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x509 = -1LL;
	int64_t x510 = -1LL;
	int64_t x511 = -1LL;
	static int8_t x512 = -3;
	volatile int64_t t9 = -52110LL;

	t9 = ((x509/(x510==x511))+x512);

	if (t9 != -4LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x513 = UINT8_MAX;
	int32_t x514 = -1;
	uint64_t x515 = UINT64_MAX;
	static int64_t x516 = INT64_MIN;

	t10 = ((x513/(x514==x515))+x516);

	if (t10 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x533 = UINT64_MAX;
	int8_t x534 = -1;
	int8_t x535 = -1;
	uint8_t x536 = UINT8_MAX;
	volatile uint64_t t11 = 2664234086740304420LLU;

	t11 = ((x533/(x534==x535))+x536);

	if (t11 != 254LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x557 = 1618588421LL;
	int32_t x559 = -1;
	int8_t x560 = -23;
	volatile int64_t t12 = 17LL;

	t12 = ((x557/(x558==x559))+x560);

	if (t12 != 1618588398LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x649 = UINT64_MAX;
	int8_t x650 = INT8_MIN;
	int8_t x651 = INT8_MIN;
	static uint32_t x652 = 27U;

	t13 = ((x649/(x650==x651))+x652);

	if (t13 != 26LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x717 = 791981668LL;
	static int64_t x718 = INT64_MIN;
	static volatile int64_t x719 = INT64_MIN;
	int16_t x720 = -30;
	volatile int64_t t14 = 129614923293LL;

	t14 = ((x717/(x718==x719))+x720);

	if (t14 != 791981638LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x805 = 1LLU;
	int32_t x806 = INT32_MIN;
	volatile int32_t x807 = INT32_MIN;
	int32_t x808 = -438673;

	t15 = ((x805/(x806==x807))+x808);

	if (t15 != 18446744073709112944LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x885 = -1;
	static uint64_t x887 = UINT64_MAX;
	volatile uint64_t x888 = 184485878158764LLU;
	static uint64_t t16 = 66202101522950652LLU;

	t16 = ((x885/(x886==x887))+x888);

	if (t16 != 184485878158763LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x1001 = 1U;
	volatile uint64_t x1002 = UINT64_MAX;
	volatile uint32_t t17 = 233885U;

	t17 = ((x1001/(x1002==x1003))+x1004);

	if (t17 != 5328846U) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x1101 = INT16_MIN;
	int8_t x1102 = INT8_MIN;
	static int8_t x1103 = INT8_MIN;
	static volatile uint64_t x1104 = 14LLU;
	uint64_t t18 = 625802358592LLU;

	t18 = ((x1101/(x1102==x1103))+x1104);

	if (t18 != 18446744073709518862LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x1173 = UINT32_MAX;
	volatile int64_t x1174 = -1LL;
	int16_t x1175 = -1;
	volatile int64_t x1176 = -1LL;
	volatile int64_t t19 = 63266849LL;

	t19 = ((x1173/(x1174==x1175))+x1176);

	if (t19 != 4294967294LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1317 = UINT8_MAX;
	uint64_t x1318 = UINT64_MAX;
	int8_t x1319 = -1;
	int8_t x1320 = 1;
	int32_t t20 = 39;

	t20 = ((x1317/(x1318==x1319))+x1320);

	if (t20 != 256) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x1345 = UINT16_MAX;
	int16_t x1346 = INT16_MIN;
	static uint8_t x1348 = 15U;
	static volatile int32_t t21 = 7697452;

	t21 = ((x1345/(x1346==x1347))+x1348);

	if (t21 != 65550) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1486 = UINT64_MAX;
	uint64_t x1487 = UINT64_MAX;

	t22 = ((x1485/(x1486==x1487))+x1488);

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1557 = 19U;
	int32_t x1558 = -1;
	static int32_t x1560 = -1;
	volatile int32_t t23 = 7;

	t23 = ((x1557/(x1558==x1559))+x1560);

	if (t23 != 18) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x1713 = 59958206U;
	static int8_t x1714 = -1;
	volatile int64_t x1715 = -1LL;
	uint32_t t24 = 8447468U;

	t24 = ((x1713/(x1714==x1715))+x1716);

	if (t24 != 59958205U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x1781 = INT8_MIN;
	uint64_t x1783 = UINT64_MAX;
	uint32_t x1784 = 8322252U;
	volatile uint32_t t25 = 30U;

	t25 = ((x1781/(x1782==x1783))+x1784);

	if (t25 != 8322124U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1853 = 1208;
	int8_t x1854 = INT8_MIN;
	int8_t x1855 = INT8_MIN;
	volatile uint32_t x1856 = 451077U;
	volatile uint32_t t26 = 1377510U;

	t26 = ((x1853/(x1854==x1855))+x1856);

	if (t26 != 452285U) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1893 = 883039U;
	int8_t x1894 = INT8_MAX;
	int8_t x1895 = INT8_MAX;
	uint16_t x1896 = 419U;
	uint32_t t27 = 14676U;

	t27 = ((x1893/(x1894==x1895))+x1896);

	if (t27 != 883458U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x1921 = INT32_MIN;
	volatile int8_t x1922 = -1;
	uint16_t x1924 = 7U;
	static volatile int32_t t28 = -54544;

	t28 = ((x1921/(x1922==x1923))+x1924);

	if (t28 != -2147483641) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x1963 = UINT32_MAX;
	int64_t x1964 = INT64_MIN;
	int64_t t29 = 6293436LL;

	t29 = ((x1961/(x1962==x1963))+x1964);

	if (t29 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x2109 = 14895LLU;
	int16_t x2110 = INT16_MIN;
	static int16_t x2111 = INT16_MIN;
	uint8_t x2112 = 33U;

	t30 = ((x2109/(x2110==x2111))+x2112);

	if (t30 != 14928LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x2165 = 2537;
	int64_t x2166 = INT64_MIN;
	int8_t x2168 = -2;
	volatile int32_t t31 = 7;

	t31 = ((x2165/(x2166==x2167))+x2168);

	if (t31 != 2535) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x2242 = 3U;
	int8_t x2244 = -1;

	t32 = ((x2241/(x2242==x2243))+x2244);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x2253 = 1;
	int8_t x2254 = INT8_MIN;
	int8_t x2255 = INT8_MIN;
	volatile int32_t x2256 = INT32_MIN;

	t33 = ((x2253/(x2254==x2255))+x2256);

	if (t33 != -2147483647) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x2286 = UINT64_MAX;
	volatile int64_t t34 = -4383662LL;

	t34 = ((x2285/(x2286==x2287))+x2288);

	if (t34 != -129LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x2333 = 9749U;
	int64_t x2334 = -1LL;
	uint32_t x2336 = UINT32_MAX;
	volatile uint32_t t35 = 55285220U;

	t35 = ((x2333/(x2334==x2335))+x2336);

	if (t35 != 9748U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x2382 = -1;
	int64_t x2383 = -1LL;
	volatile int64_t x2384 = -62777LL;
	static int64_t t36 = -32021850931091LL;

	t36 = ((x2381/(x2382==x2383))+x2384);

	if (t36 != 213700LL) { NG(); } else { ; }
	
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


    return 0;
}

