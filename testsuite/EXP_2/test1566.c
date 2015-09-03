#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x5 = 120759;
uint64_t x6 = 345LLU;
int8_t x7 = INT8_MIN;
uint32_t x45 = UINT32_MAX;
int32_t x46 = INT32_MIN;
uint32_t t2 = 20U;
static uint32_t x318 = 0U;
int32_t t4 = -8119;
uint8_t x674 = UINT8_MAX;
uint8_t x740 = 1U;
int32_t t11 = 393628048;
int8_t x1209 = 8;
volatile uint32_t t13 = 25546708U;
int8_t x1451 = -1;
volatile int64_t t16 = 2761010LL;
static uint16_t x1569 = 655U;
int16_t x1613 = 13688;
int32_t t18 = 0;
int16_t x1748 = 2;
static volatile uint32_t t19 = 57U;
uint16_t x1868 = 14U;
int32_t t21 = -10230;
volatile uint16_t x1907 = UINT16_MAX;
static uint8_t x2089 = UINT8_MAX;
volatile int32_t t23 = 0;
uint64_t x2525 = 2153944693988LLU;
int8_t x2528 = 62;
uint64_t t25 = 608LLU;
uint8_t x2565 = UINT8_MAX;
int16_t x2568 = 2;
static volatile int32_t t26 = 0;
static volatile uint32_t t27 = 472U;
int32_t x2683 = 43519624;
static uint64_t x2717 = 5LLU;
volatile uint64_t t29 = 1906350LLU;
int64_t x2730 = INT64_MIN;
static uint32_t x2780 = 1U;
int32_t t31 = 11;
int32_t x3158 = -42569675;
int32_t t34 = 18;
static volatile uint64_t x3581 = UINT64_MAX;
uint32_t x4078 = 1U;
static int32_t t37 = -15797;
int64_t x4315 = INT64_MAX;


void f0(void) {
	uint16_t x8 = 2U;
	volatile int32_t t0 = -11;

	t0 = ((x5/(x6<=x7))<<x8);

	if (t0 != 483036) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x21 = 7705758385LLU;
	volatile int8_t x22 = INT8_MIN;
	int8_t x23 = -1;
	int64_t x24 = 5LL;
	volatile uint64_t t1 = 2051196LLU;

	t1 = ((x21/(x22<=x23))<<x24);

	if (t1 != 246584268320LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x47 = -1;
	volatile uint16_t x48 = 15U;

	t2 = ((x45/(x46<=x47))<<x48);

	if (t2 != 4294934528U) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x317 = UINT32_MAX;
	int32_t x319 = 712;
	volatile uint8_t x320 = 0U;
	volatile uint32_t t3 = UINT32_MAX;

	t3 = ((x317/(x318<=x319))<<x320);

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x401 = INT16_MAX;
	volatile int64_t x402 = -1LL;
	static int8_t x403 = 16;
	volatile int64_t x404 = 10LL;

	t4 = ((x401/(x402<=x403))<<x404);

	if (t4 != 33553408) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x421 = 1357171529007LLU;
	int64_t x422 = INT64_MIN;
	volatile int32_t x423 = INT32_MIN;
	static volatile int8_t x424 = 5;
	static uint64_t t5 = 1198961236675LLU;

	t5 = ((x421/(x422<=x423))<<x424);

	if (t5 != 43429488928224LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x425 = 528U;
	int16_t x426 = -1;
	int16_t x427 = INT16_MAX;
	static uint16_t x428 = 7U;
	int32_t t6 = 32668;

	t6 = ((x425/(x426<=x427))<<x428);

	if (t6 != 67584) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x569 = 1LLU;
	static int16_t x570 = -1;
	int8_t x571 = INT8_MAX;
	int8_t x572 = 60;
	volatile uint64_t t7 = 29240LLU;

	t7 = ((x569/(x570<=x571))<<x572);

	if (t7 != 1152921504606846976LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x593 = 52U;
	uint64_t x594 = 583064732LLU;
	static int8_t x595 = -30;
	int16_t x596 = 18;
	volatile int32_t t8 = -212754329;

	t8 = ((x593/(x594<=x595))<<x596);

	if (t8 != 13631488) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x673 = 4U;
	uint64_t x675 = UINT64_MAX;
	int8_t x676 = 14;
	volatile int32_t t9 = -25;

	t9 = ((x673/(x674<=x675))<<x676);

	if (t9 != 65536) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x737 = 1489U;
	uint32_t x738 = 469279088U;
	int32_t x739 = INT32_MIN;
	volatile int32_t t10 = 789257;

	t10 = ((x737/(x738<=x739))<<x740);

	if (t10 != 2978) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x905 = 5;
	int32_t x906 = INT32_MIN;
	uint16_t x907 = UINT16_MAX;
	uint16_t x908 = 21U;

	t11 = ((x905/(x906<=x907))<<x908);

	if (t11 != 10485760) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x1210 = INT64_MIN;
	uint8_t x1211 = UINT8_MAX;
	static int32_t x1212 = 8;
	volatile int32_t t12 = 406004796;

	t12 = ((x1209/(x1210<=x1211))<<x1212);

	if (t12 != 2048) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x1381 = 2U;
	int8_t x1382 = INT8_MIN;
	int32_t x1383 = 14559;
	static int32_t x1384 = 13;

	t13 = ((x1381/(x1382<=x1383))<<x1384);

	if (t13 != 16384U) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x1449 = 47LLU;
	static uint64_t x1450 = 4193630068647348LLU;
	uint8_t x1452 = 24U;
	volatile uint64_t t14 = 29068689000LLU;

	t14 = ((x1449/(x1450<=x1451))<<x1452);

	if (t14 != 788529152LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x1481 = 6465U;
	volatile int8_t x1482 = 2;
	int64_t x1483 = INT64_MAX;
	uint8_t x1484 = 1U;
	volatile int32_t t15 = 231976225;

	t15 = ((x1481/(x1482<=x1483))<<x1484);

	if (t15 != 12930) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x1489 = 374437396504LL;
	int32_t x1490 = INT32_MIN;
	uint16_t x1491 = UINT16_MAX;
	static uint16_t x1492 = 4U;

	t16 = ((x1489/(x1490<=x1491))<<x1492);

	if (t16 != 5990998344064LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x1570 = 1;
	static uint16_t x1571 = UINT16_MAX;
	static uint16_t x1572 = 1U;
	static volatile int32_t t17 = 30258927;

	t17 = ((x1569/(x1570<=x1571))<<x1572);

	if (t17 != 1310) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x1614 = -1;
	static uint16_t x1615 = 22U;
	int8_t x1616 = 1;

	t18 = ((x1613/(x1614<=x1615))<<x1616);

	if (t18 != 27376) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x1745 = 5383230U;
	static int32_t x1746 = INT32_MIN;
	int16_t x1747 = INT16_MIN;

	t19 = ((x1745/(x1746<=x1747))<<x1748);

	if (t19 != 21532920U) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x1749 = 102197160600LLU;
	int64_t x1750 = -1LL;
	int8_t x1751 = 5;
	uint8_t x1752 = 17U;
	static uint64_t t20 = 7224710741LLU;

	t20 = ((x1749/(x1750<=x1751))<<x1752);

	if (t20 != 13395186234163200LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x1865 = 3U;
	int64_t x1866 = INT64_MIN;
	int16_t x1867 = INT16_MIN;

	t21 = ((x1865/(x1866<=x1867))<<x1868);

	if (t21 != 49152) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int32_t x1905 = 5151;
	uint64_t x1906 = 2LLU;
	uint8_t x1908 = 3U;
	volatile int32_t t22 = 0;

	t22 = ((x1905/(x1906<=x1907))<<x1908);

	if (t22 != 41208) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x2090 = -49446197184529662LL;
	static int8_t x2091 = 0;
	uint16_t x2092 = 17U;

	t23 = ((x2089/(x2090<=x2091))<<x2092);

	if (t23 != 33423360) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x2489 = INT8_MAX;
	volatile int8_t x2490 = 0;
	int32_t x2491 = INT32_MAX;
	static int8_t x2492 = 3;
	int32_t t24 = 60860946;

	t24 = ((x2489/(x2490<=x2491))<<x2492);

	if (t24 != 1016) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x2526 = -8104612LL;
	int16_t x2527 = -42;

	t25 = ((x2525/(x2526<=x2527))<<x2528);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x2566 = -910658318613827169LL;
	int32_t x2567 = INT32_MIN;

	t26 = ((x2565/(x2566<=x2567))<<x2568);

	if (t26 != 1020) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x2649 = 2U;
	static uint64_t x2650 = 1493376187663180973LLU;
	int64_t x2651 = -1LL;
	int16_t x2652 = 14;

	t27 = ((x2649/(x2650<=x2651))<<x2652);

	if (t27 != 32768U) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x2681 = UINT64_MAX;
	int8_t x2682 = 19;
	uint8_t x2684 = 11U;
	volatile uint64_t t28 = 1LLU;

	t28 = ((x2681/(x2682<=x2683))<<x2684);

	if (t28 != 18446744073709549568LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x2718 = INT16_MIN;
	static volatile int16_t x2719 = -1;
	int16_t x2720 = 2;

	t29 = ((x2717/(x2718<=x2719))<<x2720);

	if (t29 != 20LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x2729 = 2;
	int32_t x2731 = 57135;
	uint32_t x2732 = 5U;
	static volatile int32_t t30 = 14439734;

	t30 = ((x2729/(x2730<=x2731))<<x2732);

	if (t30 != 64) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x2777 = 30;
	int32_t x2778 = 13;
	static int16_t x2779 = INT16_MAX;

	t31 = ((x2777/(x2778<=x2779))<<x2780);

	if (t31 != 60) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x3157 = 27211U;
	static uint8_t x3159 = 9U;
	int8_t x3160 = 1;
	volatile int32_t t32 = -4;

	t32 = ((x3157/(x3158<=x3159))<<x3160);

	if (t32 != 54422) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x3337 = 0U;
	int32_t x3338 = INT32_MIN;
	uint16_t x3339 = UINT16_MAX;
	int32_t x3340 = 7;
	int32_t t33 = -16088318;

	t33 = ((x3337/(x3338<=x3339))<<x3340);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x3481 = UINT8_MAX;
	int32_t x3482 = INT32_MIN;
	volatile uint16_t x3483 = 0U;
	volatile uint8_t x3484 = 1U;

	t34 = ((x3481/(x3482<=x3483))<<x3484);

	if (t34 != 510) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x3582 = 1707140327121763469LLU;
	volatile int8_t x3583 = -1;
	uint16_t x3584 = 2U;
	volatile uint64_t t35 = 6534LLU;

	t35 = ((x3581/(x3582<=x3583))<<x3584);

	if (t35 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x3841 = 23U;
	int64_t x3842 = INT64_MIN;
	uint16_t x3843 = 249U;
	int8_t x3844 = 6;
	volatile int32_t t36 = 121741;

	t36 = ((x3841/(x3842<=x3843))<<x3844);

	if (t36 != 1472) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x4077 = 0;
	uint32_t x4079 = UINT32_MAX;
	uint16_t x4080 = 9U;

	t37 = ((x4077/(x4078<=x4079))<<x4080);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x4313 = 2031LLU;
	int32_t x4314 = -485886002;
	uint64_t x4316 = 0LLU;
	static uint64_t t38 = 13LLU;

	t38 = ((x4313/(x4314<=x4315))<<x4316);

	if (t38 != 2031LLU) { NG(); } else { ; }
	
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

