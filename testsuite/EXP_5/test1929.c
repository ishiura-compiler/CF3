#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t x33 = INT32_MIN;
uint8_t x34 = 0U;
volatile uint8_t x36 = 9U;
volatile int32_t t0 = 10964960;
static uint32_t x118 = 3993037U;
volatile int8_t x181 = INT8_MIN;
int16_t x198 = INT16_MAX;
int8_t x233 = INT8_MIN;
int8_t x234 = INT8_MAX;
uint8_t x572 = 3U;
static uint32_t x635 = UINT32_MAX;
int8_t x734 = INT8_MIN;
volatile int32_t x925 = -1;
uint64_t t12 = 39283572763125LLU;
static uint32_t x989 = 15778451U;
uint16_t x992 = 7U;
uint8_t x1129 = UINT8_MAX;
uint8_t x1132 = 21U;
volatile int64_t x1323 = INT64_MAX;
uint64_t t15 = 778662140103LLU;
static volatile uint32_t x1706 = UINT32_MAX;
uint8_t x1731 = UINT8_MAX;
volatile uint16_t x1937 = 884U;
uint64_t x2038 = UINT64_MAX;
int32_t x2047 = 0;
int32_t x2178 = INT32_MIN;
static uint8_t x2233 = UINT8_MAX;
uint8_t x2234 = 31U;
uint16_t x2236 = 1U;
int32_t t28 = 66616241;
uint8_t x2360 = 16U;
static volatile int64_t t29 = -542619LL;
uint8_t x2489 = 39U;
int8_t x2612 = 13;
uint64_t x2701 = 3766LLU;
int16_t x2737 = INT16_MAX;
volatile uint32_t t34 = 7080916U;
int8_t x2821 = -1;
uint32_t x2823 = 894954464U;
uint32_t x2824 = 4U;
static int16_t x3038 = INT16_MIN;
int8_t x3066 = -54;
int32_t x3177 = INT32_MIN;
volatile uint32_t x3178 = 38124665U;
uint8_t x3180 = 26U;


void f0(void) {
	static int32_t x35 = 245;

	t0 = (x33%((x34|x35)<<x36));

	if (t0 != -76288) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x117 = INT16_MIN;
	uint16_t x119 = 3U;
	volatile uint8_t x120 = 1U;
	uint32_t t1 = 11548U;

	t1 = (x117%((x118|x119)<<x120));

	if (t1 != 6410642U) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint64_t x182 = 2284669800534414242LLU;
	uint32_t x183 = UINT32_MAX;
	uint16_t x184 = 1U;
	uint64_t t2 = 46326896918989689LLU;

	t2 = (x181%((x182|x183)<<x184));

	if (t2 != 169385641774153608LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x193 = INT32_MIN;
	volatile uint8_t x194 = UINT8_MAX;
	uint32_t x195 = UINT32_MAX;
	int8_t x196 = 0;
	uint32_t t3 = 1U;

	t3 = (x193%((x194|x195)<<x196));

	if (t3 != 2147483648U) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x197 = 5U;
	uint32_t x199 = UINT32_MAX;
	int8_t x200 = 4;
	volatile uint32_t t4 = 2U;

	t4 = (x197%((x198|x199)<<x200));

	if (t4 != 5U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x235 = 0U;
	uint8_t x236 = 4U;
	int32_t t5 = 602469187;

	t5 = (x233%((x234|x235)<<x236));

	if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x397 = 0;
	uint64_t x398 = UINT64_MAX;
	int8_t x399 = INT8_MIN;
	static uint32_t x400 = 16U;
	volatile uint64_t t6 = 28645363965694LLU;

	t6 = (x397%((x398|x399)<<x400));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x541 = INT8_MIN;
	static int32_t x542 = INT32_MAX;
	volatile uint32_t x543 = 27501U;
	uint8_t x544 = 10U;
	uint32_t t7 = 1881U;

	t7 = (x541%((x542|x543)<<x544));

	if (t7 != 896U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x569 = INT16_MIN;
	uint64_t x570 = 29538LLU;
	int16_t x571 = INT16_MIN;
	uint64_t t8 = 1373567356635LLU;

	t8 = (x569%((x570|x571)<<x572));

	if (t8 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x633 = INT16_MAX;
	int64_t x634 = INT64_MAX;
	uint8_t x636 = 0U;
	volatile int64_t t9 = 1107632353465639298LL;

	t9 = (x633%((x634|x635)<<x636));

	if (t9 != 32767LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x733 = INT8_MIN;
	volatile uint64_t x735 = UINT64_MAX;
	int32_t x736 = 4;
	uint64_t t10 = 21549218LLU;

	t10 = (x733%((x734|x735)<<x736));

	if (t10 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x897 = -1;
	int32_t x898 = 0;
	volatile uint32_t x899 = 3846425U;
	int8_t x900 = 15;
	static uint32_t t11 = 3U;

	t11 = (x897%((x898|x899)<<x900));

	if (t11 != 1323761663U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x926 = 279814876097LLU;
	static uint8_t x927 = UINT8_MAX;
	volatile int8_t x928 = 0;

	t12 = (x925%((x926|x927)<<x928));

	if (t12 != 128679566030LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x990 = 2071050011U;
	int8_t x991 = INT8_MAX;
	uint32_t t13 = 1U;

	t13 = (x989%((x990|x991)<<x992));

	if (t13 != 15778451U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x1130 = UINT64_MAX;
	int8_t x1131 = INT8_MIN;
	uint64_t t14 = 546920035274LLU;

	t14 = (x1129%((x1130|x1131)<<x1132));

	if (t14 != 255LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x1321 = INT32_MIN;
	uint64_t x1322 = 3117013LLU;
	uint64_t x1324 = 53LLU;

	t15 = (x1321%((x1322|x1323)<<x1324));

	if (t15 != 9007197107257344LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x1465 = INT8_MIN;
	uint32_t x1466 = 163904U;
	uint8_t x1467 = UINT8_MAX;
	int8_t x1468 = 15;
	volatile uint32_t t16 = 17U;

	t16 = (x1465%((x1466|x1467)<<x1468));

	if (t16 != 1048674176U) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x1705 = UINT16_MAX;
	int32_t x1707 = INT32_MIN;
	volatile int8_t x1708 = 7;
	volatile uint32_t t17 = 234U;

	t17 = (x1705%((x1706|x1707)<<x1708));

	if (t17 != 65535U) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int64_t x1729 = 96806731969848634LL;
	volatile uint64_t x1730 = 179386833665019868LLU;
	uint16_t x1732 = 1U;
	volatile uint64_t t18 = 1618994743168663353LLU;

	t18 = (x1729%((x1730|x1731)<<x1732));

	if (t18 != 96806731969848634LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x1938 = 23;
	uint64_t x1939 = 5857116420943LLU;
	int64_t x1940 = 1LL;
	static volatile uint64_t t19 = 51912LLU;

	t19 = (x1937%((x1938|x1939)<<x1940));

	if (t19 != 884LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1997 = INT16_MAX;
	static uint32_t x1998 = UINT32_MAX;
	static int8_t x1999 = INT8_MIN;
	volatile int8_t x2000 = 4;
	uint32_t t20 = 1230929U;

	t20 = (x1997%((x1998|x1999)<<x2000));

	if (t20 != 32767U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x2037 = -34;
	uint8_t x2039 = 100U;
	uint16_t x2040 = 13U;
	uint64_t t21 = 26LLU;

	t21 = (x2037%((x2038|x2039)<<x2040));

	if (t21 != 8158LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x2045 = -1661;
	uint64_t x2046 = UINT64_MAX;
	uint16_t x2048 = 30U;
	uint64_t t22 = 9LLU;

	t22 = (x2045%((x2046|x2047)<<x2048));

	if (t22 != 1073740163LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x2093 = 43U;
	int16_t x2094 = INT16_MIN;
	uint64_t x2095 = 181LLU;
	int32_t x2096 = 25;
	static uint64_t t23 = 6201243LLU;

	t23 = (x2093%((x2094|x2095)<<x2096));

	if (t23 != 43LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x2169 = INT8_MIN;
	int16_t x2170 = -12;
	static uint32_t x2171 = 24384926U;
	int32_t x2172 = 3;
	uint32_t t24 = 827U;

	t24 = (x2169%((x2170|x2171)<<x2172));

	if (t24 != 4294967168U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x2177 = INT32_MIN;
	uint64_t x2179 = 839320681462LLU;
	int8_t x2180 = 20;
	volatile uint64_t t25 = 37007086486LLU;

	t25 = (x2177%((x2178|x2179)<<x2180));

	if (t25 != 362202118750208LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x2181 = INT32_MIN;
	int32_t x2182 = INT32_MIN;
	uint64_t x2183 = UINT64_MAX;
	int16_t x2184 = 47;
	static uint64_t t26 = 54810965176471LLU;

	t26 = (x2181%((x2182|x2183)<<x2184));

	if (t26 != 140735340871680LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x2235 = UINT16_MAX;
	int32_t t27 = 6688401;

	t27 = (x2233%((x2234|x2235)<<x2236));

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x2297 = 0;
	static int8_t x2298 = INT8_MAX;
	uint16_t x2299 = 1U;
	uint16_t x2300 = 8U;

	t28 = (x2297%((x2298|x2299)<<x2300));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x2357 = INT64_MIN;
	uint32_t x2358 = 0U;
	volatile int8_t x2359 = INT8_MIN;

	t29 = (x2357%((x2358|x2359)<<x2360));

	if (t29 != -134217728LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x2490 = 2242LL;
	int16_t x2491 = INT16_MAX;
	static uint8_t x2492 = 2U;
	volatile int64_t t30 = 1286364LL;

	t30 = (x2489%((x2490|x2491)<<x2492));

	if (t30 != 39LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x2609 = INT16_MIN;
	volatile uint16_t x2610 = 0U;
	uint64_t x2611 = 113LLU;
	volatile uint64_t t31 = 44157LLU;

	t31 = (x2609%((x2610|x2611)<<x2612));

	if (t31 != 401408LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x2645 = 20879866001685LLU;
	int8_t x2646 = 2;
	volatile uint16_t x2647 = 526U;
	static uint8_t x2648 = 0U;
	uint64_t t32 = 292688522045LLU;

	t32 = (x2645%((x2646|x2647)<<x2648));

	if (t32 != 445LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x2702 = 3663257508678LLU;
	int8_t x2703 = 7;
	int8_t x2704 = 6;
	volatile uint64_t t33 = 3831039811121110632LLU;

	t33 = (x2701%((x2702|x2703)<<x2704));

	if (t33 != 3766LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x2738 = 7550978U;
	int16_t x2739 = INT16_MIN;
	volatile uint8_t x2740 = 22U;

	t34 = (x2737%((x2738|x2739)<<x2740));

	if (t34 != 32767U) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x2822 = UINT8_MAX;
	volatile uint32_t t35 = 557868U;

	t35 = (x2821%((x2822|x2823)<<x2824));

	if (t35 != 1426227231U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x3037 = INT32_MIN;
	static uint32_t x3039 = 130179U;
	static uint8_t x3040 = 26U;
	volatile uint32_t t36 = 432057778U;

	t36 = (x3037%((x3038|x3039)<<x3040));

	if (t36 != 134217728U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x3065 = INT32_MIN;
	uint32_t x3067 = 105503001U;
	volatile int8_t x3068 = 10;
	volatile uint32_t t37 = 1U;

	t37 = (x3065%((x3066|x3067)<<x3068));

	if (t37 != 2147483648U) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x3179 = 3U;
	uint32_t t38 = 296U;

	t38 = (x3177%((x3178|x3179)<<x3180));

	if (t38 != 2147483648U) { NG(); } else { ; }
	
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


    return 0;
}

