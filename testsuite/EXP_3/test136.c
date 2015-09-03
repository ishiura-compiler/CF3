#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x25 = INT64_MAX;
int64_t t0 = -62LL;
volatile int64_t x102 = 13546LL;
volatile uint64_t x104 = UINT64_MAX;
int64_t t1 = -117021356LL;
int8_t x381 = 1;
uint16_t x384 = 3U;
uint16_t x422 = 3098U;
uint32_t t7 = 84652623U;
int16_t x605 = INT16_MIN;
uint8_t x606 = 11U;
volatile int32_t t11 = 986;
int16_t x1087 = 1;
int64_t x1129 = INT64_MAX;
volatile uint8_t x1131 = 1U;
uint32_t x1155 = 6U;
volatile uint64_t x1186 = UINT64_MAX;
volatile int8_t x1203 = 1;
uint8_t x1204 = 13U;
static int16_t x1343 = -7;
int64_t x1394 = -14558257854368781LL;
uint64_t x1521 = UINT64_MAX;
volatile int32_t x1524 = 29;
uint16_t x1796 = 1U;
uint32_t x1846 = 1249222U;
int8_t x2003 = -1;
int32_t t24 = 6992067;
volatile uint16_t x2403 = 4U;
static int32_t x2532 = 32;
static volatile uint64_t x2775 = UINT64_MAX;
uint16_t x2798 = UINT16_MAX;
int8_t x2972 = 4;


void f0(void) {
	uint32_t x26 = 2431U;
	int16_t x27 = 3;
	int16_t x28 = 25;

	t0 = ((x25&x26)<<(x27+x28));

	if (t0 != 652566593536LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x101 = INT16_MAX;
	uint32_t x103 = 5U;

	t1 = ((x101&x102)<<(x103+x104));

	if (t1 != 216736LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x245 = 4003056U;
	int64_t x246 = -1LL;
	uint8_t x247 = 0U;
	int16_t x248 = 9;
	int64_t t2 = 202141577691418LL;

	t2 = ((x245&x246)<<(x247+x248));

	if (t2 != 2049564672LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x382 = UINT64_MAX;
	volatile uint8_t x383 = 0U;
	uint64_t t3 = 379010491LLU;

	t3 = ((x381&x382)<<(x383+x384));

	if (t3 != 8LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x409 = 0LL;
	volatile int64_t x410 = -1LL;
	int64_t x411 = -1LL;
	static volatile uint8_t x412 = 33U;
	volatile int64_t t4 = -3631LL;

	t4 = ((x409&x410)<<(x411+x412));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x421 = 620U;
	uint8_t x423 = 1U;
	int16_t x424 = 6;
	volatile uint32_t t5 = 14831537U;

	t5 = ((x421&x422)<<(x423+x424));

	if (t5 != 1024U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x537 = -1;
	uint8_t x538 = 1U;
	static int16_t x539 = 13;
	uint32_t x540 = 2U;
	static int32_t t6 = -1209719;

	t6 = ((x537&x538)<<(x539+x540));

	if (t6 != 32768) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x561 = INT16_MIN;
	uint32_t x562 = 7U;
	volatile uint8_t x563 = 6U;
	volatile int16_t x564 = -1;

	t7 = ((x561&x562)<<(x563+x564));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x607 = 15;
	int8_t x608 = -1;
	int32_t t8 = 15394;

	t8 = ((x605&x606)<<(x607+x608));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x641 = INT16_MAX;
	uint16_t x642 = UINT16_MAX;
	int8_t x643 = -1;
	int16_t x644 = 6;
	int32_t t9 = 204;

	t9 = ((x641&x642)<<(x643+x644));

	if (t9 != 1048544) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x773 = INT32_MIN;
	int64_t x774 = 0LL;
	int8_t x775 = 19;
	int8_t x776 = -1;
	int64_t t10 = 104LL;

	t10 = ((x773&x774)<<(x775+x776));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x1081 = INT8_MIN;
	int8_t x1082 = INT8_MAX;
	uint16_t x1083 = 2U;
	uint64_t x1084 = 1LLU;

	t11 = ((x1081&x1082)<<(x1083+x1084));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x1085 = -3;
	uint32_t x1086 = 3U;
	uint32_t x1088 = UINT32_MAX;
	volatile uint32_t t12 = 10U;

	t12 = ((x1085&x1086)<<(x1087+x1088));

	if (t12 != 1U) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x1130 = UINT16_MAX;
	uint8_t x1132 = 7U;
	int64_t t13 = 822367617225LL;

	t13 = ((x1129&x1130)<<(x1131+x1132));

	if (t13 != 16776960LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x1153 = UINT16_MAX;
	static int64_t x1154 = -1LL;
	int8_t x1156 = -1;
	static int64_t t14 = 645046858LL;

	t14 = ((x1153&x1154)<<(x1155+x1156));

	if (t14 != 2097120LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x1185 = -1;
	int8_t x1187 = -1;
	int32_t x1188 = 1;
	static uint64_t t15 = UINT64_MAX;

	t15 = ((x1185&x1186)<<(x1187+x1188));

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x1201 = INT16_MIN;
	static int16_t x1202 = 86;
	int32_t t16 = -18026;

	t16 = ((x1201&x1202)<<(x1203+x1204));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x1341 = -1;
	int8_t x1342 = 5;
	volatile uint8_t x1344 = 12U;
	volatile int32_t t17 = 4218816;

	t17 = ((x1341&x1342)<<(x1343+x1344));

	if (t17 != 160) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x1393 = UINT8_MAX;
	volatile uint8_t x1395 = 2U;
	int8_t x1396 = 0;
	volatile int64_t t18 = -7588699856703840LL;

	t18 = ((x1393&x1394)<<(x1395+x1396));

	if (t18 != 972LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x1522 = UINT8_MAX;
	static volatile uint32_t x1523 = UINT32_MAX;
	static uint64_t t19 = 1LLU;

	t19 = ((x1521&x1522)<<(x1523+x1524));

	if (t19 != 68451041280LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x1741 = -1;
	static int16_t x1742 = 4367;
	uint16_t x1743 = 15U;
	static uint8_t x1744 = 1U;
	volatile int32_t t20 = 6755139;

	t20 = ((x1741&x1742)<<(x1743+x1744));

	if (t20 != 286195712) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x1793 = INT64_MAX;
	static uint8_t x1794 = 2U;
	int32_t x1795 = -1;
	static volatile int64_t t21 = 3376436LL;

	t21 = ((x1793&x1794)<<(x1795+x1796));

	if (t21 != 2LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1845 = 46500811685814LLU;
	static uint8_t x1847 = 5U;
	int8_t x1848 = -3;
	static volatile uint64_t t22 = 22733497LLU;

	t22 = ((x1845&x1846)<<(x1847+x1848));

	if (t22 != 4210200LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x2001 = UINT16_MAX;
	volatile int16_t x2002 = INT16_MAX;
	uint8_t x2004 = 1U;
	volatile int32_t t23 = -243;

	t23 = ((x2001&x2002)<<(x2003+x2004));

	if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x2053 = -1;
	uint8_t x2054 = 1U;
	int8_t x2055 = -1;
	int8_t x2056 = 2;

	t24 = ((x2053&x2054)<<(x2055+x2056));

	if (t24 != 2) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x2177 = 385794007373LLU;
	static uint32_t x2178 = 235340206U;
	uint8_t x2179 = 5U;
	int8_t x2180 = -1;
	volatile uint64_t t25 = 305940265922LLU;

	t25 = ((x2177&x2178)<<(x2179+x2180));

	if (t25 != 542118080LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x2401 = -5;
	uint32_t x2402 = 68U;
	uint8_t x2404 = 0U;
	volatile uint32_t t26 = 479U;

	t26 = ((x2401&x2402)<<(x2403+x2404));

	if (t26 != 1024U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x2505 = INT8_MAX;
	int8_t x2506 = -1;
	uint8_t x2507 = 13U;
	volatile int8_t x2508 = 3;
	int32_t t27 = -1;

	t27 = ((x2505&x2506)<<(x2507+x2508));

	if (t27 != 8323072) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x2529 = 69U;
	static int16_t x2530 = 5394;
	volatile int64_t x2531 = -1LL;
	static volatile int32_t t28 = 8264531;

	t28 = ((x2529&x2530)<<(x2531+x2532));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x2773 = 380299730810279558LLU;
	volatile int32_t x2774 = -1;
	volatile uint16_t x2776 = 19U;
	volatile uint64_t t29 = 7494700266LLU;

	t29 = ((x2773&x2774)<<(x2775+x2776));

	if (t29 != 7087659203507519488LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x2797 = 0;
	uint16_t x2799 = 15U;
	int64_t x2800 = -1LL;
	volatile int32_t t30 = 3026511;

	t30 = ((x2797&x2798)<<(x2799+x2800));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x2969 = 8U;
	int32_t x2970 = -13;
	uint16_t x2971 = 1U;
	int32_t t31 = -2905272;

	t31 = ((x2969&x2970)<<(x2971+x2972));

	if (t31 != 0) { NG(); } else { ; }
	
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


    return 0;
}

