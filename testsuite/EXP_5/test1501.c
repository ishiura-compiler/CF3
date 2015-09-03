#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x131 = -3;
int32_t x363 = INT32_MIN;
static int8_t x374 = INT8_MIN;
static int16_t x375 = 13;
int8_t x376 = 0;
static int32_t t8 = 5103411;
uint64_t t9 = 581LLU;
int32_t t11 = -1;
static uint16_t x634 = UINT16_MAX;
static int8_t x657 = 30;
int16_t x841 = 1;
static int16_t x843 = INT16_MAX;
volatile int8_t x844 = 14;
uint16_t x864 = 62U;
static int32_t x939 = 1277;
static int32_t t19 = 816386;
int8_t x965 = INT8_MAX;
volatile uint64_t x971 = 2951387779721LLU;
static volatile int32_t t21 = 38725187;
static uint32_t x1001 = UINT32_MAX;
uint16_t x1117 = 11870U;


void f0(void) {
	int8_t x9 = INT8_MAX;
	int16_t x10 = -1;
	int16_t x11 = INT16_MIN;
	uint16_t x12 = 1U;
	int32_t t0 = 398433010;

	t0 = (x9<<((x10<x11)|x12));

	if (t0 != 254) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x17 = 4107U;
	static volatile uint32_t x18 = 207172869U;
	int8_t x19 = -5;
	volatile uint8_t x20 = 20U;
	volatile uint32_t t1 = 14636537U;

	t1 = (x17<<((x18<x19)|x20));

	if (t1 != 23068672U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x29 = 500530360LLU;
	volatile uint32_t x30 = UINT32_MAX;
	uint8_t x31 = 15U;
	uint16_t x32 = 27U;
	volatile uint64_t t2 = 507LLU;

	t2 = (x29<<((x30<x31)|x32));

	if (t2 != 67180047714222080LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x65 = 0;
	volatile int16_t x66 = -1;
	volatile int32_t x67 = -3448376;
	int8_t x68 = 1;
	int32_t t3 = -14767181;

	t3 = (x65<<((x66<x67)|x68));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x81 = 3901U;
	int8_t x82 = 5;
	uint8_t x83 = 23U;
	volatile uint8_t x84 = 6U;
	volatile int32_t t4 = 0;

	t4 = (x81<<((x82<x83)|x84));

	if (t4 != 499328) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x129 = 674U;
	int8_t x130 = 7;
	static uint8_t x132 = 0U;
	volatile int32_t t5 = 832606073;

	t5 = (x129<<((x130<x131)|x132));

	if (t5 != 674) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x329 = 220U;
	int64_t x330 = -1LL;
	int16_t x331 = INT16_MIN;
	int16_t x332 = 0;
	volatile int32_t t6 = -1;

	t6 = (x329<<((x330<x331)|x332));

	if (t6 != 220) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x361 = 4457U;
	int64_t x362 = INT64_MIN;
	volatile int32_t x364 = 1;
	static uint32_t t7 = 4U;

	t7 = (x361<<((x362<x363)|x364));

	if (t7 != 8914U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x373 = 1U;

	t8 = (x373<<((x374<x375)|x376));

	if (t8 != 2) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x453 = 31945739716LLU;
	static uint8_t x454 = 91U;
	static int32_t x455 = INT32_MAX;
	int16_t x456 = 1;

	t9 = (x453<<((x454<x455)|x456));

	if (t9 != 63891479432LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x569 = 43U;
	uint32_t x570 = 106U;
	static uint64_t x571 = 32979717879754LLU;
	int16_t x572 = 17;
	uint32_t t10 = 2093427389U;

	t10 = (x569<<((x570<x571)|x572));

	if (t10 != 5636096U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x593 = 0;
	volatile uint16_t x594 = UINT16_MAX;
	volatile uint16_t x595 = UINT16_MAX;
	uint16_t x596 = 0U;

	t11 = (x593<<((x594<x595)|x596));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x633 = 399809194815086LLU;
	int16_t x635 = INT16_MAX;
	uint8_t x636 = 4U;
	uint64_t t12 = 267718833123082LLU;

	t12 = (x633<<((x634<x635)|x636));

	if (t12 != 6396947117041376LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x658 = -1;
	int32_t x659 = 1;
	int32_t x660 = 2;
	int32_t t13 = -321796694;

	t13 = (x657<<((x658<x659)|x660));

	if (t13 != 240) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x709 = 26922628U;
	int32_t x710 = -1;
	int8_t x711 = -10;
	static uint64_t x712 = 1LLU;
	uint32_t t14 = 0U;

	t14 = (x709<<((x710<x711)|x712));

	if (t14 != 53845256U) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x753 = 5058U;
	static volatile int32_t x754 = INT32_MAX;
	static uint64_t x755 = UINT64_MAX;
	uint32_t x756 = 3U;
	static volatile uint32_t t15 = 62551840U;

	t15 = (x753<<((x754<x755)|x756));

	if (t15 != 40464U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x842 = 416345714418LL;
	static int32_t t16 = -7781411;

	t16 = (x841<<((x842<x843)|x844));

	if (t16 != 16384) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x861 = 36922007472561840LLU;
	int32_t x862 = -1;
	uint16_t x863 = 2U;
	volatile uint64_t t17 = 1LLU;

	t17 = (x861<<((x862<x863)|x864));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x865 = 1;
	int16_t x866 = INT16_MIN;
	static volatile uint64_t x867 = UINT64_MAX;
	volatile uint8_t x868 = 3U;
	volatile int32_t t18 = 113;

	t18 = (x865<<((x866<x867)|x868));

	if (t18 != 8) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x937 = UINT8_MAX;
	int8_t x938 = 0;
	uint8_t x940 = 23U;

	t19 = (x937<<((x938<x939)|x940));

	if (t19 != 2139095040) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x966 = 4663U;
	static volatile uint32_t x967 = UINT32_MAX;
	uint16_t x968 = 3U;
	int32_t t20 = 18641654;

	t20 = (x965<<((x966<x967)|x968));

	if (t20 != 1016) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x969 = 1;
	int64_t x970 = INT64_MIN;
	int8_t x972 = 1;

	t21 = (x969<<((x970<x971)|x972));

	if (t21 != 2) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x993 = 3372U;
	volatile uint64_t x994 = 2221782944716649LLU;
	uint64_t x995 = UINT64_MAX;
	uint8_t x996 = 6U;
	int32_t t22 = 205240;

	t22 = (x993<<((x994<x995)|x996));

	if (t22 != 431616) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1002 = INT64_MIN;
	int64_t x1003 = INT64_MIN;
	int8_t x1004 = 1;
	uint32_t t23 = 8395U;

	t23 = (x1001<<((x1002<x1003)|x1004));

	if (t23 != 4294967294U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1037 = 23;
	int8_t x1038 = 29;
	uint8_t x1039 = 24U;
	int32_t x1040 = 25;
	int32_t t24 = -62;

	t24 = (x1037<<((x1038<x1039)|x1040));

	if (t24 != 771751936) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x1118 = 491526922423LLU;
	static uint16_t x1119 = 68U;
	uint8_t x1120 = 2U;
	int32_t t25 = 3865;

	t25 = (x1117<<((x1118<x1119)|x1120));

	if (t25 != 47480) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1177 = 1;
	int32_t x1178 = INT32_MIN;
	int64_t x1179 = -1LL;
	static uint8_t x1180 = 0U;
	volatile int32_t t26 = 715626;

	t26 = (x1177<<((x1178<x1179)|x1180));

	if (t26 != 2) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1281 = UINT32_MAX;
	int16_t x1282 = INT16_MIN;
	uint8_t x1283 = 0U;
	static int8_t x1284 = 4;
	uint32_t t27 = 2309U;

	t27 = (x1281<<((x1282<x1283)|x1284));

	if (t27 != 4294967264U) { NG(); } else { ; }
	
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


    return 0;
}

