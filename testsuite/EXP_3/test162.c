#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x121 = 60357235815906LLU;
static uint64_t x456 = 3LLU;
uint64_t t2 = 2LLU;
volatile uint16_t x550 = 13008U;
static uint64_t x582 = 16LLU;
static int8_t x838 = 1;
int32_t t8 = -119656209;
static uint8_t x900 = 2U;
volatile uint16_t x945 = 11U;
uint8_t x948 = 2U;
volatile int32_t x1015 = -1;
int16_t x1017 = INT16_MAX;
volatile uint32_t x1018 = 1U;
volatile uint8_t x1019 = 2U;
volatile int32_t x1160 = -1;
static int8_t x1175 = -1;
volatile int64_t t16 = -40728528152501790LL;
volatile int16_t x1560 = -1;
int8_t x1631 = 7;
volatile uint16_t x1929 = 60U;
static int8_t x2353 = 29;
volatile int8_t x2354 = 0;
static volatile uint32_t x2356 = 7U;


void f0(void) {
	int32_t x122 = INT32_MIN;
	int8_t x123 = 21;
	static volatile uint8_t x124 = 25U;
	volatile uint64_t t0 = 2840829259LLU;

	t0 = ((x121^x122)<<(x123+x124));

	if (t0 != 7888195484827779072LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x265 = -1;
	uint64_t x266 = UINT64_MAX;
	int32_t x267 = 9;
	static uint16_t x268 = 0U;
	volatile uint64_t t1 = 9839LLU;

	t1 = ((x265^x266)<<(x267+x268));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x453 = UINT64_MAX;
	volatile int16_t x454 = -1;
	int32_t x455 = -1;

	t2 = ((x453^x454)<<(x455+x456));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x481 = -1;
	static int16_t x482 = -1;
	uint32_t x483 = 10U;
	uint16_t x484 = 0U;
	static int32_t t3 = -1803;

	t3 = ((x481^x482)<<(x483+x484));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x549 = 0U;
	int8_t x551 = 0;
	uint16_t x552 = 13U;
	static uint32_t t4 = 841U;

	t4 = ((x549^x550)<<(x551+x552));

	if (t4 != 106561536U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x581 = UINT64_MAX;
	static uint8_t x583 = 2U;
	volatile int32_t x584 = 5;
	uint64_t t5 = 1020540LLU;

	t5 = ((x581^x582)<<(x583+x584));

	if (t5 != 18446744073709549440LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x637 = UINT64_MAX;
	uint64_t x638 = 73925618049334276LLU;
	uint8_t x639 = 10U;
	volatile uint8_t x640 = 0U;
	volatile uint64_t t6 = 9088779755346847006LLU;

	t6 = ((x637^x638)<<(x639+x640));

	if (t6 != 16533887486029458432LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x837 = 49U;
	uint16_t x839 = 1U;
	uint32_t x840 = 0U;
	volatile int32_t t7 = 44991;

	t7 = ((x837^x838)<<(x839+x840));

	if (t7 != 96) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x877 = 910;
	int32_t x878 = 15388162;
	uint16_t x879 = 3U;
	int32_t x880 = -1;

	t8 = ((x877^x878)<<(x879+x880));

	if (t8 != 61552176) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x897 = 1016670739LLU;
	static int32_t x898 = -1;
	volatile uint16_t x899 = 1U;
	volatile uint64_t t9 = 57907048386718522LLU;

	t9 = ((x897^x898)<<(x899+x900));

	if (t9 != 18446744065576185696LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x913 = 13U;
	uint64_t x914 = UINT64_MAX;
	uint64_t x915 = 29LLU;
	uint64_t x916 = UINT64_MAX;
	volatile uint64_t t10 = 2048621605543012LLU;

	t10 = ((x913^x914)<<(x915+x916));

	if (t10 != 18446744069951455232LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x946 = 3538877635089012LLU;
	int64_t x947 = -1LL;
	static uint64_t t11 = 20804773836LLU;

	t11 = ((x945^x946)<<(x947+x948));

	if (t11 != 7077755270178046LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x1013 = INT64_MIN;
	static int32_t x1014 = -1;
	volatile int64_t x1016 = 1LL;
	static int64_t t12 = INT64_MAX;

	t12 = ((x1013^x1014)<<(x1015+x1016));

	if (t12 != INT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x1020 = -1;
	uint32_t t13 = 6290U;

	t13 = ((x1017^x1018)<<(x1019+x1020));

	if (t13 != 65532U) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x1093 = 26757717LLU;
	int16_t x1094 = INT16_MIN;
	uint8_t x1095 = 2U;
	uint8_t x1096 = 6U;
	uint64_t t14 = 2LLU;

	t14 = ((x1093^x1094)<<(x1095+x1096));

	if (t14 != 18446744066860930304LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x1157 = 8U;
	static uint16_t x1158 = 2382U;
	volatile int16_t x1159 = 6;
	volatile int32_t t15 = -58;

	t15 = ((x1157^x1158)<<(x1159+x1160));

	if (t15 != 75968) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x1173 = -1LL;
	int32_t x1174 = -1;
	static volatile uint16_t x1176 = 11U;

	t16 = ((x1173^x1174)<<(x1175+x1176));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x1269 = UINT64_MAX;
	int64_t x1270 = 37257138LL;
	int8_t x1271 = 0;
	uint8_t x1272 = 4U;
	volatile uint64_t t17 = 68LLU;

	t17 = ((x1269^x1270)<<(x1271+x1272));

	if (t17 != 18446744073113437392LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x1325 = 177LLU;
	volatile uint64_t x1326 = 213838LLU;
	uint8_t x1327 = 3U;
	int16_t x1328 = 11;
	uint64_t t18 = 629335LLU;

	t18 = ((x1325^x1326)<<(x1327+x1328));

	if (t18 != 3506421760LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x1557 = -1LL;
	static uint64_t x1558 = 92293300176950LLU;
	uint8_t x1559 = 24U;
	volatile uint64_t t19 = 252LLU;

	t19 = ((x1557^x1558)<<(x1559+x1560));

	if (t19 != 550934885028593664LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x1629 = 149U;
	static uint32_t x1630 = 0U;
	uint32_t x1632 = UINT32_MAX;
	static volatile uint32_t t20 = 8461249U;

	t20 = ((x1629^x1630)<<(x1631+x1632));

	if (t20 != 9536U) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x1717 = INT8_MIN;
	static uint64_t x1718 = 3152128625691LLU;
	static uint32_t x1719 = 58U;
	int8_t x1720 = 5;
	volatile uint64_t t21 = 609LLU;

	t21 = ((x1717^x1718)<<(x1719+x1720));

	if (t21 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x1930 = 541U;
	static int8_t x1931 = -10;
	volatile uint8_t x1932 = 21U;
	uint32_t t22 = 343U;

	t22 = ((x1929^x1930)<<(x1931+x1932));

	if (t22 != 1116160U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x2229 = INT32_MIN;
	uint32_t x2230 = 2U;
	volatile int16_t x2231 = 2;
	uint64_t x2232 = 1LLU;
	volatile uint32_t t23 = 998654U;

	t23 = ((x2229^x2230)<<(x2231+x2232));

	if (t23 != 16U) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x2355 = -1;
	int32_t t24 = -1123116;

	t24 = ((x2353^x2354)<<(x2355+x2356));

	if (t24 != 1856) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x2373 = 50U;
	uint16_t x2374 = 4455U;
	uint8_t x2375 = 4U;
	int16_t x2376 = -1;
	int32_t t25 = 4643;

	t25 = ((x2373^x2374)<<(x2375+x2376));

	if (t25 != 35496) { NG(); } else { ; }
	
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


    return 0;
}

