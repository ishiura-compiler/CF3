#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = -39;
volatile int32_t x78 = 58;
uint8_t x80 = 21U;
volatile uint64_t t2 = 888837429973096LLU;
uint16_t x295 = 13U;
int32_t t4 = INT32_MIN;
int8_t x361 = -9;
uint16_t x363 = 130U;
int64_t x370 = -1LL;
int8_t x372 = 10;
uint64_t t8 = 367525LLU;
volatile int32_t x381 = 914894;
static int32_t x384 = 1;
uint8_t x434 = UINT8_MAX;
uint8_t x522 = 2U;
volatile int64_t t13 = 24967478LL;
int32_t t15 = -37;
volatile int32_t t16 = -14;
int32_t x919 = INT32_MAX;
uint64_t t17 = 1361475430044634721LLU;
volatile uint64_t t19 = 4050898616609142574LLU;
uint64_t x1069 = 3405051958831LLU;
int16_t x1110 = INT16_MIN;
static uint64_t t24 = 993905LLU;
int16_t x1261 = INT16_MAX;
int64_t x1262 = -1LL;
int8_t x1415 = INT8_MIN;
uint64_t x1421 = 98LLU;
int16_t x1470 = 59;
uint16_t x1570 = UINT16_MAX;
static int16_t x1571 = -170;
uint32_t x1717 = 10452U;
int16_t x1719 = INT16_MAX;
volatile uint32_t t35 = 11620U;
static int32_t t36 = -981;
uint64_t x1736 = 5LLU;
int32_t x1787 = -1;
uint64_t t39 = 2557508540LLU;
static uint8_t x1882 = UINT8_MAX;
static int32_t t40 = -1660;
int32_t x2018 = -1986000;
volatile uint64_t x2183 = 545371LLU;
int32_t x2197 = 31794;
int16_t x2229 = INT16_MIN;
volatile int8_t x2334 = INT8_MIN;
uint32_t x2335 = 260803464U;
uint64_t x2603 = UINT64_MAX;
int16_t x2617 = -1;
int16_t x2619 = -35;
uint64_t t53 = 224892151480LLU;
int16_t x2702 = 18;
int64_t x2787 = 757835LL;
int64_t x2806 = INT64_MAX;
int16_t x2849 = INT16_MIN;
int32_t x2851 = INT32_MAX;
static int64_t t60 = -65465436910046LL;
uint32_t x2942 = UINT32_MAX;
int16_t x2945 = -60;
int16_t x2947 = -1;
int8_t x2973 = -5;
uint32_t x2975 = 15887006U;
uint8_t x2983 = 2U;
volatile int32_t t64 = 210847215;
volatile int16_t x3051 = -1;
static volatile int64_t x3129 = -1LL;
int64_t x3289 = -23410884764074503LL;
uint32_t x3290 = UINT32_MAX;
volatile int8_t x3415 = INT8_MIN;
volatile uint32_t t72 = 810043818U;
uint64_t x3513 = 4296511LLU;
volatile int32_t x3578 = INT32_MIN;
uint16_t x3650 = 1854U;
static volatile int32_t x3651 = -1;
static volatile int32_t t80 = 45780015;
static int64_t x3745 = -1LL;
uint16_t x3757 = UINT16_MAX;
uint32_t x3759 = UINT32_MAX;
int8_t x3772 = 53;
static int16_t x3973 = INT16_MIN;
uint32_t t88 = 72670708U;
uint32_t t90 = 217U;
volatile int16_t x4089 = INT16_MIN;
int32_t x4117 = INT32_MIN;
uint8_t x4119 = 0U;
volatile int64_t t93 = -7582LL;
uint64_t x4305 = 2743137499658583LLU;
static uint64_t x4306 = UINT64_MAX;
volatile uint64_t t97 = 215421469537622LLU;


void f0(void) {
	static int8_t x1 = INT8_MIN;
	int32_t x3 = INT32_MAX;
	int32_t x4 = 11;
	int32_t t0 = -7130779;

	t0 = (x1+((x2+x3)>>x4));

	if (t0 != 1048447) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int8_t x77 = -1;
	static int8_t x79 = -1;
	static int32_t t1 = -2054;

	t1 = (x77+((x78+x79)>>x80));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x105 = INT8_MIN;
	volatile uint64_t x106 = 6295358433396358LLU;
	int64_t x107 = INT64_MAX;
	static volatile uint16_t x108 = 14U;

	t2 = (x105+((x106+x107)>>x108));

	if (t2 != 563334191606816LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x241 = INT64_MIN;
	static int32_t x242 = INT32_MIN;
	static volatile uint64_t x243 = UINT64_MAX;
	uint8_t x244 = 12U;
	volatile uint64_t t3 = 315LLU;

	t3 = (x241+((x242+x243)>>x244));

	if (t3 != 9227875636481622015LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x293 = INT32_MIN;
	int8_t x294 = 0;
	static uint16_t x296 = 8U;

	t4 = (x293+((x294+x295)>>x296));

	if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint8_t x317 = UINT8_MAX;
	uint16_t x318 = UINT16_MAX;
	uint8_t x319 = UINT8_MAX;
	int8_t x320 = 7;
	int32_t t5 = 17241540;

	t5 = (x317+((x318+x319)>>x320));

	if (t5 != 768) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x362 = INT8_MAX;
	int64_t x364 = 15LL;
	static volatile int32_t t6 = -1;

	t6 = (x361+((x362+x363)>>x364));

	if (t6 != -9) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x369 = 6868U;
	uint8_t x371 = 72U;
	volatile int64_t t7 = -4979911233LL;

	t7 = (x369+((x370+x371)>>x372));

	if (t7 != 6868LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x373 = 16U;
	uint64_t x374 = UINT64_MAX;
	uint64_t x375 = UINT64_MAX;
	uint64_t x376 = 0LLU;

	t8 = (x373+((x374+x375)>>x376));

	if (t8 != 14LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x382 = UINT8_MAX;
	int16_t x383 = -1;
	int32_t t9 = 0;

	t9 = (x381+((x382+x383)>>x384));

	if (t9 != 915021) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x433 = -1LL;
	uint64_t x435 = 243767978415002380LLU;
	static uint8_t x436 = 4U;
	uint64_t t10 = 0LLU;

	t10 = (x433+((x434+x435)>>x436));

	if (t10 != 15235498650937663LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x489 = -1;
	static int16_t x490 = INT16_MAX;
	int64_t x491 = 395036957LL;
	volatile int32_t x492 = 0;
	int64_t t11 = -34928971174LL;

	t11 = (x489+((x490+x491)>>x492));

	if (t11 != 395069723LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x521 = INT64_MIN;
	int32_t x523 = 61664;
	uint64_t x524 = 3LLU;
	volatile int64_t t12 = 355LL;

	t12 = (x521+((x522+x523)>>x524));

	if (t12 != -9223372036854768100LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x669 = -1;
	int16_t x670 = -1;
	int64_t x671 = 23782763527736LL;
	uint16_t x672 = 1U;

	t13 = (x669+((x670+x671)>>x672));

	if (t13 != 11891381763866LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x721 = INT16_MIN;
	int64_t x722 = INT64_MAX;
	int16_t x723 = -1;
	int8_t x724 = 5;
	static volatile int64_t t14 = -1327751629153LL;

	t14 = (x721+((x722+x723)>>x724));

	if (t14 != 288230376151678975LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x741 = UINT16_MAX;
	uint16_t x742 = 64U;
	int8_t x743 = 1;
	static uint8_t x744 = 31U;

	t15 = (x741+((x742+x743)>>x744));

	if (t15 != 65535) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x861 = 35U;
	int32_t x862 = 36011;
	static int16_t x863 = -1;
	uint8_t x864 = 6U;

	t16 = (x861+((x862+x863)>>x864));

	if (t16 != 597) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x917 = UINT16_MAX;
	uint64_t x918 = 335011LLU;
	uint8_t x920 = 0U;

	t17 = (x917+((x918+x919)>>x920));

	if (t17 != 2147884193LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x1037 = 18778662364LL;
	volatile uint8_t x1038 = UINT8_MAX;
	uint8_t x1039 = 19U;
	static uint8_t x1040 = 0U;
	int64_t t18 = 107173019LL;

	t18 = (x1037+((x1038+x1039)>>x1040));

	if (t18 != 18778662638LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x1065 = 2664438876LL;
	uint8_t x1066 = 0U;
	static uint64_t x1067 = 5789LLU;
	int8_t x1068 = 19;

	t19 = (x1065+((x1066+x1067)>>x1068));

	if (t19 != 2664438876LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1070 = INT16_MIN;
	int64_t x1071 = INT64_MAX;
	uint8_t x1072 = 8U;
	uint64_t t20 = 375LLU;

	t20 = (x1069+((x1070+x1071)>>x1072));

	if (t20 != 36032202070922670LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1109 = 127U;
	int64_t x1111 = INT64_MAX;
	volatile int32_t x1112 = 3;
	int64_t t21 = -2773LL;

	t21 = (x1109+((x1110+x1111)>>x1112));

	if (t21 != 1152921504606843006LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x1165 = -1;
	volatile int32_t x1166 = -1;
	uint16_t x1167 = 509U;
	uint32_t x1168 = 1U;
	int32_t t22 = 184;

	t22 = (x1165+((x1166+x1167)>>x1168));

	if (t22 != 253) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1225 = INT8_MIN;
	uint16_t x1226 = 2U;
	uint16_t x1227 = 1917U;
	uint8_t x1228 = 0U;
	int32_t t23 = -1328554;

	t23 = (x1225+((x1226+x1227)>>x1228));

	if (t23 != 1791) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x1245 = -2119028797495917197LL;
	static uint64_t x1246 = 1552983215LLU;
	int32_t x1247 = 1;
	uint32_t x1248 = 0U;

	t24 = (x1245+((x1246+x1247)>>x1248));

	if (t24 != 16327715277766617635LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1263 = INT64_MAX;
	int64_t x1264 = 8LL;
	int64_t t25 = -5580704282595714LL;

	t25 = (x1261+((x1262+x1263)>>x1264));

	if (t25 != 36028797018996734LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1289 = 10U;
	int16_t x1290 = INT16_MAX;
	uint32_t x1291 = 832313U;
	volatile int64_t x1292 = 6LL;
	volatile uint32_t t26 = 87U;

	t26 = (x1289+((x1290+x1291)>>x1292));

	if (t26 != 13526U) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1353 = 1077357LLU;
	int16_t x1354 = INT16_MAX;
	int32_t x1355 = -1;
	static uint16_t x1356 = 9U;
	uint64_t t27 = 16518LLU;

	t27 = (x1353+((x1354+x1355)>>x1356));

	if (t27 != 1077420LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1405 = UINT8_MAX;
	int8_t x1406 = INT8_MAX;
	static volatile uint64_t x1407 = 99009015033LLU;
	int8_t x1408 = 16;
	uint64_t t28 = 8201085414741715LLU;

	t28 = (x1405+((x1406+x1407)>>x1408));

	if (t28 != 1511012LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1413 = INT32_MIN;
	int32_t x1414 = INT32_MAX;
	uint16_t x1416 = 6U;
	static volatile int32_t t29 = -1073461020;

	t29 = (x1413+((x1414+x1415)>>x1416));

	if (t29 != -2113929219) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1422 = 30575268520LL;
	int64_t x1423 = 93309631LL;
	int32_t x1424 = 1;
	volatile uint64_t t30 = 5LLU;

	t30 = (x1421+((x1422+x1423)>>x1424));

	if (t30 != 15334289173LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x1469 = 10584295872208LL;
	int16_t x1471 = 51;
	int16_t x1472 = 6;
	volatile int64_t t31 = 13091605546LL;

	t31 = (x1469+((x1470+x1471)>>x1472));

	if (t31 != 10584295872209LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1485 = 1792076;
	int16_t x1486 = 0;
	int64_t x1487 = INT64_MAX;
	int8_t x1488 = 47;
	static volatile int64_t t32 = 1914597316098885LL;

	t32 = (x1485+((x1486+x1487)>>x1488));

	if (t32 != 1857611LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1569 = -1;
	int8_t x1572 = 25;
	volatile int32_t t33 = -689429;

	t33 = (x1569+((x1570+x1571)>>x1572));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x1709 = 67060587LLU;
	uint64_t x1710 = 166435LLU;
	int64_t x1711 = -205LL;
	static uint16_t x1712 = 1U;
	uint64_t t34 = 222059658LLU;

	t34 = (x1709+((x1710+x1711)>>x1712));

	if (t34 != 67143702LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1718 = 1;
	volatile int8_t x1720 = 1;

	t35 = (x1717+((x1718+x1719)>>x1720));

	if (t35 != 26836U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1729 = INT16_MAX;
	volatile uint16_t x1730 = 134U;
	uint16_t x1731 = UINT16_MAX;
	uint16_t x1732 = 28U;

	t36 = (x1729+((x1730+x1731)>>x1732));

	if (t36 != 32767) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x1733 = 33;
	static int32_t x1734 = 826;
	int16_t x1735 = 0;
	int32_t t37 = -19077264;

	t37 = (x1733+((x1734+x1735)>>x1736));

	if (t37 != 58) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x1785 = UINT16_MAX;
	uint8_t x1786 = 20U;
	volatile int8_t x1788 = 0;
	volatile int32_t t38 = 74945304;

	t38 = (x1785+((x1786+x1787)>>x1788));

	if (t38 != 65554) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1841 = INT64_MIN;
	static int16_t x1842 = -21;
	volatile uint64_t x1843 = UINT64_MAX;
	uint8_t x1844 = 8U;

	t39 = (x1841+((x1842+x1843)>>x1844));

	if (t39 != 9295429630892703743LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x1881 = UINT16_MAX;
	int32_t x1883 = 12555308;
	static volatile int8_t x1884 = 28;

	t40 = (x1881+((x1882+x1883)>>x1884));

	if (t40 != 65535) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint32_t x1921 = UINT32_MAX;
	int8_t x1922 = -5;
	static volatile uint32_t x1923 = UINT32_MAX;
	static uint8_t x1924 = 5U;
	volatile uint32_t t41 = 2342315U;

	t41 = (x1921+((x1922+x1923)>>x1924));

	if (t41 != 134217726U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x2017 = INT8_MIN;
	volatile uint32_t x2019 = 212249812U;
	int8_t x2020 = 0;
	volatile uint32_t t42 = 1742836709U;

	t42 = (x2017+((x2018+x2019)>>x2020));

	if (t42 != 210263684U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2181 = INT16_MIN;
	uint16_t x2182 = 0U;
	uint32_t x2184 = 9U;
	static volatile uint64_t t43 = 9992365527LLU;

	t43 = (x2181+((x2182+x2183)>>x2184));

	if (t43 != 18446744073709519913LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x2198 = UINT8_MAX;
	volatile uint8_t x2199 = 17U;
	volatile int8_t x2200 = 0;
	volatile int32_t t44 = -88465746;

	t44 = (x2197+((x2198+x2199)>>x2200));

	if (t44 != 32066) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x2201 = INT8_MIN;
	uint8_t x2202 = 90U;
	static uint32_t x2203 = 3U;
	volatile int8_t x2204 = 0;
	uint32_t t45 = 598972400U;

	t45 = (x2201+((x2202+x2203)>>x2204));

	if (t45 != 4294967261U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x2230 = 8349886;
	int8_t x2231 = 8;
	int64_t x2232 = 2LL;
	static volatile int32_t t46 = -72552286;

	t46 = (x2229+((x2230+x2231)>>x2232));

	if (t46 != 2054705) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x2329 = UINT8_MAX;
	uint64_t x2330 = 302646970LLU;
	int16_t x2331 = INT16_MAX;
	uint8_t x2332 = 1U;
	uint64_t t47 = 57921647572440308LLU;

	t47 = (x2329+((x2330+x2331)>>x2332));

	if (t47 != 151340123LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x2333 = INT32_MIN;
	static uint8_t x2336 = 1U;
	static volatile uint32_t t48 = 6957U;

	t48 = (x2333+((x2334+x2335)>>x2336));

	if (t48 != 2277885316U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x2545 = -1;
	uint64_t x2546 = 141896375LLU;
	static uint16_t x2547 = UINT16_MAX;
	static volatile uint8_t x2548 = 3U;
	volatile uint64_t t49 = 22326754LLU;

	t49 = (x2545+((x2546+x2547)>>x2548));

	if (t49 != 17745237LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint64_t x2573 = 106637LLU;
	uint8_t x2574 = 15U;
	int64_t x2575 = -1LL;
	volatile uint32_t x2576 = 8U;
	uint64_t t50 = 1495983051152517503LLU;

	t50 = (x2573+((x2574+x2575)>>x2576));

	if (t50 != 106637LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x2601 = 9U;
	static uint64_t x2602 = UINT64_MAX;
	volatile uint8_t x2604 = 61U;
	volatile uint64_t t51 = 169669922LLU;

	t51 = (x2601+((x2602+x2603)>>x2604));

	if (t51 != 16LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x2618 = 208440901;
	int8_t x2620 = 10;
	volatile int32_t t52 = 348;

	t52 = (x2617+((x2618+x2619)>>x2620));

	if (t52 != 203554) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x2653 = -13867224512964028LL;
	uint64_t x2654 = 2299021116035LLU;
	int32_t x2655 = -1;
	volatile int8_t x2656 = 0;

	t53 = (x2653+((x2654+x2655)>>x2656));

	if (t53 != 18432879148217703622LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x2701 = INT16_MIN;
	int8_t x2703 = -1;
	uint64_t x2704 = 21LLU;
	volatile int32_t t54 = 5703;

	t54 = (x2701+((x2702+x2703)>>x2704));

	if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x2785 = INT16_MIN;
	int64_t x2786 = 18153980247LL;
	volatile uint32_t x2788 = 0U;
	volatile int64_t t55 = 7790082143530741LL;

	t55 = (x2785+((x2786+x2787)>>x2788));

	if (t55 != 18154705314LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x2793 = INT16_MIN;
	int8_t x2794 = INT8_MAX;
	int64_t x2795 = 736465LL;
	uint8_t x2796 = 2U;
	int64_t t56 = 7865872108583LL;

	t56 = (x2793+((x2794+x2795)>>x2796));

	if (t56 != 151380LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x2805 = 12291U;
	static int16_t x2807 = INT16_MIN;
	static volatile uint8_t x2808 = 16U;
	volatile int64_t t57 = -1745250118LL;

	t57 = (x2805+((x2806+x2807)>>x2808));

	if (t57 != 140737488367618LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x2850 = 2835LLU;
	volatile uint8_t x2852 = 28U;
	uint64_t t58 = 4264650755396786LLU;

	t58 = (x2849+((x2850+x2851)>>x2852));

	if (t58 != 18446744073709518856LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x2877 = 4LLU;
	int32_t x2878 = INT32_MIN;
	volatile uint32_t x2879 = 93538232U;
	static int16_t x2880 = 1;
	uint64_t t59 = 13487994625025LLU;

	t59 = (x2877+((x2878+x2879)>>x2880));

	if (t59 != 1120510944LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x2905 = INT16_MIN;
	int16_t x2906 = INT16_MIN;
	int64_t x2907 = 57302622244223LL;
	static uint8_t x2908 = 3U;

	t60 = (x2905+((x2906+x2907)>>x2908));

	if (t60 != 7162827743663LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x2941 = 1421U;
	int16_t x2943 = -1;
	uint32_t x2944 = 6U;
	uint32_t t61 = 5419U;

	t61 = (x2941+((x2942+x2943)>>x2944));

	if (t61 != 67110284U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x2946 = 10663573381303LL;
	uint8_t x2948 = 6U;
	int64_t t62 = -22LL;

	t62 = (x2945+((x2946+x2947)>>x2948));

	if (t62 != 166618334022LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x2974 = 3339U;
	volatile uint64_t x2976 = 2LLU;
	volatile uint32_t t63 = 0U;

	t63 = (x2973+((x2974+x2975)>>x2976));

	if (t63 != 3972581U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x2981 = -2;
	uint8_t x2982 = UINT8_MAX;
	uint16_t x2984 = 23U;

	t64 = (x2981+((x2982+x2983)>>x2984));

	if (t64 != -2) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x2985 = 13;
	int8_t x2986 = -16;
	volatile int64_t x2987 = INT64_MAX;
	uint16_t x2988 = 28U;
	volatile int64_t t65 = 167LL;

	t65 = (x2985+((x2986+x2987)>>x2988));

	if (t65 != 34359738380LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x3025 = 0U;
	int8_t x3026 = INT8_MAX;
	uint8_t x3027 = 35U;
	volatile int8_t x3028 = 0;
	static volatile int32_t t66 = 2513;

	t66 = (x3025+((x3026+x3027)>>x3028));

	if (t66 != 162) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x3049 = 112675139557LLU;
	int8_t x3050 = 51;
	volatile int64_t x3052 = 0LL;
	uint64_t t67 = 240LLU;

	t67 = (x3049+((x3050+x3051)>>x3052));

	if (t67 != 112675139607LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x3130 = 53LLU;
	uint16_t x3131 = UINT16_MAX;
	uint8_t x3132 = 0U;
	uint64_t t68 = 42LLU;

	t68 = (x3129+((x3130+x3131)>>x3132));

	if (t68 != 65587LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x3291 = UINT64_MAX;
	uint8_t x3292 = 5U;
	volatile uint64_t t69 = 0LLU;

	t69 = (x3289+((x3290+x3291)>>x3292));

	if (t69 != 18423333189079694840LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x3333 = -1LL;
	int64_t x3334 = 14890941229630776LL;
	volatile int32_t x3335 = -10;
	static volatile uint8_t x3336 = 1U;
	static volatile int64_t t70 = -216LL;

	t70 = (x3333+((x3334+x3335)>>x3336));

	if (t70 != 7445470614815382LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x3401 = INT8_MAX;
	uint8_t x3402 = UINT8_MAX;
	uint16_t x3403 = 15U;
	uint16_t x3404 = 5U;
	static volatile int32_t t71 = 1177879;

	t71 = (x3401+((x3402+x3403)>>x3404));

	if (t71 != 135) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x3413 = INT8_MAX;
	static volatile uint32_t x3414 = 4191735U;
	volatile uint8_t x3416 = 3U;

	t72 = (x3413+((x3414+x3415)>>x3416));

	if (t72 != 524077U) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x3421 = UINT64_MAX;
	int8_t x3422 = -1;
	uint32_t x3423 = UINT32_MAX;
	uint8_t x3424 = 9U;
	volatile uint64_t t73 = 26500LLU;

	t73 = (x3421+((x3422+x3423)>>x3424));

	if (t73 != 8388606LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x3437 = 2U;
	volatile int8_t x3438 = INT8_MAX;
	uint8_t x3439 = 22U;
	uint8_t x3440 = 2U;
	volatile uint32_t t74 = 32772948U;

	t74 = (x3437+((x3438+x3439)>>x3440));

	if (t74 != 39U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x3473 = INT16_MIN;
	uint32_t x3474 = 123298990U;
	int16_t x3475 = 29;
	int8_t x3476 = 3;
	static uint32_t t75 = 240U;

	t75 = (x3473+((x3474+x3475)>>x3476));

	if (t75 != 15379609U) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x3514 = 15U;
	volatile int64_t x3515 = -7LL;
	int32_t x3516 = 9;
	volatile uint64_t t76 = 439126LLU;

	t76 = (x3513+((x3514+x3515)>>x3516));

	if (t76 != 4296511LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x3577 = -24;
	uint64_t x3579 = UINT64_MAX;
	static volatile int16_t x3580 = 26;
	static uint64_t t77 = 3060285317211429LLU;

	t77 = (x3577+((x3578+x3579)>>x3580));

	if (t77 != 274877906887LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x3589 = 35244564283393692LL;
	volatile uint64_t x3590 = 39588866634317605LLU;
	int32_t x3591 = INT32_MIN;
	uint64_t x3592 = 21LLU;
	uint64_t t78 = 33LLU;

	t78 = (x3589+((x3590+x3591)>>x3592));

	if (t78 != 35244583160835330LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x3649 = -1LL;
	static int8_t x3652 = 3;
	int64_t t79 = 480592357430306LL;

	t79 = (x3649+((x3650+x3651)>>x3652));

	if (t79 != 230LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x3681 = 11U;
	int16_t x3682 = INT16_MAX;
	int8_t x3683 = -1;
	uint8_t x3684 = 5U;

	t80 = (x3681+((x3682+x3683)>>x3684));

	if (t80 != 1034) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x3705 = INT8_MAX;
	static volatile int32_t x3706 = 31561567;
	uint64_t x3707 = UINT64_MAX;
	static uint8_t x3708 = 15U;
	volatile uint64_t t81 = 10LLU;

	t81 = (x3705+((x3706+x3707)>>x3708));

	if (t81 != 1090LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x3717 = -1;
	int64_t x3718 = INT64_MIN;
	uint64_t x3719 = UINT64_MAX;
	uint64_t x3720 = 0LLU;
	uint64_t t82 = 905601409LLU;

	t82 = (x3717+((x3718+x3719)>>x3720));

	if (t82 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x3746 = 108998467LLU;
	static int8_t x3747 = INT8_MAX;
	volatile int16_t x3748 = 2;
	volatile uint64_t t83 = 224167108306LLU;

	t83 = (x3745+((x3746+x3747)>>x3748));

	if (t83 != 27249647LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x3758 = 392243;
	uint16_t x3760 = 20U;
	uint32_t t84 = 7848U;

	t84 = (x3757+((x3758+x3759)>>x3760));

	if (t84 != 65535U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x3769 = INT8_MIN;
	int32_t x3770 = INT32_MIN;
	volatile int64_t x3771 = INT64_MAX;
	int64_t t85 = 822491092LL;

	t85 = (x3769+((x3770+x3771)>>x3772));

	if (t85 != 895LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x3797 = 1;
	int8_t x3798 = 3;
	static uint16_t x3799 = 5U;
	volatile uint8_t x3800 = 0U;
	volatile int32_t t86 = -89320;

	t86 = (x3797+((x3798+x3799)>>x3800));

	if (t86 != 9) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x3921 = UINT16_MAX;
	volatile uint64_t x3922 = UINT64_MAX;
	int16_t x3923 = -1;
	int8_t x3924 = 15;
	volatile uint64_t t87 = 85161382287739657LLU;

	t87 = (x3921+((x3922+x3923)>>x3924));

	if (t87 != 562949953486846LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x3974 = 99649U;
	uint8_t x3975 = UINT8_MAX;
	int16_t x3976 = 3;

	t88 = (x3973+((x3974+x3975)>>x3976));

	if (t88 != 4294947016U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x4061 = 30;
	volatile uint8_t x4062 = UINT8_MAX;
	uint64_t x4063 = UINT64_MAX;
	volatile uint8_t x4064 = 0U;
	volatile uint64_t t89 = 80997462568786LLU;

	t89 = (x4061+((x4062+x4063)>>x4064));

	if (t89 != 284LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x4077 = INT16_MIN;
	uint32_t x4078 = 32U;
	int8_t x4079 = INT8_MAX;
	static volatile int16_t x4080 = 0;

	t90 = (x4077+((x4078+x4079)>>x4080));

	if (t90 != 4294934687U) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x4090 = 2U;
	static uint16_t x4091 = 0U;
	static int8_t x4092 = 5;
	volatile int32_t t91 = 35311740;

	t91 = (x4089+((x4090+x4091)>>x4092));

	if (t91 != -32768) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x4118 = UINT16_MAX;
	volatile uint8_t x4120 = 1U;
	int32_t t92 = 376727176;

	t92 = (x4117+((x4118+x4119)>>x4120));

	if (t92 != -2147450881) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x4153 = INT64_MIN;
	static int64_t x4154 = INT64_MAX;
	volatile int8_t x4155 = INT8_MIN;
	volatile int8_t x4156 = 2;

	t93 = (x4153+((x4154+x4155)>>x4156));

	if (t93 != -6917529027641081889LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x4165 = 0U;
	volatile int16_t x4166 = INT16_MAX;
	volatile int32_t x4167 = -1;
	uint32_t x4168 = 1U;
	volatile int32_t t94 = -60356;

	t94 = (x4165+((x4166+x4167)>>x4168));

	if (t94 != 16383) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x4245 = 6U;
	int64_t x4246 = -1LL;
	int64_t x4247 = INT64_MAX;
	int16_t x4248 = 1;
	volatile int64_t t95 = -269660362291431LL;

	t95 = (x4245+((x4246+x4247)>>x4248));

	if (t95 != 4611686018427387909LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x4261 = -1;
	volatile int8_t x4262 = -1;
	int32_t x4263 = 135;
	uint8_t x4264 = 7U;
	int32_t t96 = 11129691;

	t96 = (x4261+((x4262+x4263)>>x4264));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x4307 = INT16_MIN;
	int8_t x4308 = 0;

	t97 = (x4305+((x4306+x4307)>>x4308));

	if (t97 != 2743137499625814LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x4325 = -120411442LL;
	int32_t x4326 = INT32_MAX;
	uint64_t x4327 = UINT64_MAX;
	static volatile uint16_t x4328 = 2U;
	volatile uint64_t t98 = 1422LLU;

	t98 = (x4325+((x4326+x4327)>>x4328));

	if (t98 != 416459469LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x4365 = 2979102852LLU;
	volatile uint32_t x4366 = 0U;
	uint32_t x4367 = 261203904U;
	volatile uint8_t x4368 = 3U;
	uint64_t t99 = 300896918229451476LLU;

	t99 = (x4365+((x4366+x4367)>>x4368));

	if (t99 != 3011753340LLU) { NG(); } else { ; }
	
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


    return 0;
}

