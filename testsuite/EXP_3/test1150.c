#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x145 = 50614222LLU;
volatile uint64_t x277 = 1031457377024LLU;
uint8_t x279 = UINT8_MAX;
uint32_t x497 = 4U;
uint16_t x499 = 5U;
static uint64_t x500 = 1LLU;
static int32_t x766 = INT32_MIN;
volatile int32_t t5 = -379;
volatile uint32_t x1057 = 277101592U;
static int8_t x1537 = INT8_MIN;
volatile int8_t x1538 = 36;
volatile int32_t t9 = 24571;
volatile uint8_t x1627 = 3U;
uint8_t x1989 = 1U;
static uint8_t x2049 = UINT8_MAX;
volatile int64_t x2278 = INT64_MAX;
volatile int32_t x2393 = 193819226;
uint8_t x2396 = 4U;
int8_t x2597 = INT8_MIN;
uint16_t x2675 = 18U;
int8_t x2676 = 5;
uint64_t x2781 = 53371LLU;
uint32_t x2914 = UINT32_MAX;
uint8_t x3547 = 28U;
volatile uint8_t x3570 = UINT8_MAX;
int16_t x3800 = 4;
static uint32_t x3925 = UINT32_MAX;
volatile int8_t x3926 = INT8_MIN;
volatile uint16_t x3928 = 1U;
uint32_t x4014 = 149U;
static volatile uint64_t x4338 = UINT64_MAX;
static uint16_t x4340 = 20U;
uint32_t x4415 = 5U;
static int32_t t31 = 327153276;


void f0(void) {
	volatile int8_t x146 = -1;
	uint16_t x147 = 6U;
	int8_t x148 = 0;
	uint64_t t0 = 11LLU;

	t0 = ((x145&x146)<<(x147>>x148));

	if (t0 != 3239310208LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x278 = -1;
	volatile uint8_t x280 = 5U;
	uint64_t t1 = 984016LLU;

	t1 = ((x277&x278)<<(x279>>x280));

	if (t1 != 132026544259072LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x309 = INT64_MIN;
	static uint32_t x310 = 1081U;
	uint8_t x311 = UINT8_MAX;
	uint16_t x312 = 31U;
	volatile int64_t t2 = -1348549790747LL;

	t2 = ((x309&x310)<<(x311>>x312));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x498 = INT64_MIN;
	int64_t t3 = -505289LL;

	t3 = ((x497&x498)<<(x499>>x500));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x661 = -1;
	static int32_t x662 = 26612;
	static uint8_t x663 = 39U;
	volatile int8_t x664 = 23;
	int32_t t4 = -2;

	t4 = ((x661&x662)<<(x663>>x664));

	if (t4 != 26612) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x765 = 6602U;
	int32_t x767 = 1;
	int16_t x768 = 6;

	t5 = ((x765&x766)<<(x767>>x768));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x1058 = INT8_MIN;
	uint32_t x1059 = UINT32_MAX;
	static int16_t x1060 = 27;
	static volatile uint32_t t6 = 1U;

	t6 = ((x1057&x1058)<<(x1059>>x1060));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x1081 = -9920;
	int32_t x1082 = INT32_MAX;
	uint8_t x1083 = 122U;
	int16_t x1084 = 7;
	int32_t t7 = 1989;

	t7 = ((x1081&x1082)<<(x1083>>x1084));

	if (t7 != 2147473728) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x1429 = 0U;
	int32_t x1430 = INT32_MAX;
	int16_t x1431 = 702;
	uint8_t x1432 = 12U;
	volatile int32_t t8 = -418985102;

	t8 = ((x1429&x1430)<<(x1431>>x1432));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x1539 = 34LLU;
	volatile int16_t x1540 = 3;

	t9 = ((x1537&x1538)<<(x1539>>x1540));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x1625 = 110LLU;
	uint64_t x1626 = 321189526LLU;
	volatile int16_t x1628 = 0;
	uint64_t t10 = 15401983713538693LLU;

	t10 = ((x1625&x1626)<<(x1627>>x1628));

	if (t10 != 48LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x1990 = INT16_MIN;
	uint8_t x1991 = 1U;
	static uint16_t x1992 = 1U;
	volatile int32_t t11 = 5456759;

	t11 = ((x1989&x1990)<<(x1991>>x1992));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x2050 = UINT32_MAX;
	uint16_t x2051 = 1523U;
	int8_t x2052 = 30;
	uint32_t t12 = 1037U;

	t12 = ((x2049&x2050)<<(x2051>>x2052));

	if (t12 != 255U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x2225 = 29;
	static uint8_t x2226 = 13U;
	static int64_t x2227 = 16LL;
	uint8_t x2228 = 0U;
	int32_t t13 = 144;

	t13 = ((x2225&x2226)<<(x2227>>x2228));

	if (t13 != 851968) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int16_t x2277 = 6;
	static int64_t x2279 = 0LL;
	int8_t x2280 = 1;
	volatile int64_t t14 = -118LL;

	t14 = ((x2277&x2278)<<(x2279>>x2280));

	if (t14 != 6LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x2394 = INT64_MAX;
	uint64_t x2395 = 0LLU;
	volatile int64_t t15 = -14426562130689996LL;

	t15 = ((x2393&x2394)<<(x2395>>x2396));

	if (t15 != 193819226LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x2598 = 42;
	uint8_t x2599 = 44U;
	int8_t x2600 = 6;
	int32_t t16 = 36478;

	t16 = ((x2597&x2598)<<(x2599>>x2600));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x2641 = 1;
	uint32_t x2642 = 2143138U;
	volatile uint8_t x2643 = 15U;
	uint8_t x2644 = 1U;
	volatile uint32_t t17 = 13U;

	t17 = ((x2641&x2642)<<(x2643>>x2644));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x2673 = INT32_MAX;
	volatile int32_t x2674 = INT32_MIN;
	volatile int32_t t18 = -72047;

	t18 = ((x2673&x2674)<<(x2675>>x2676));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x2782 = -3314;
	static volatile uint16_t x2783 = 23927U;
	int8_t x2784 = 13;
	uint64_t t19 = 5056965LLU;

	t19 = ((x2781&x2782)<<(x2783>>x2784));

	if (t19 != 213032LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x2913 = 6902U;
	uint8_t x2915 = 7U;
	uint16_t x2916 = 24U;
	volatile uint32_t t20 = 113U;

	t20 = ((x2913&x2914)<<(x2915>>x2916));

	if (t20 != 6902U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x3161 = INT8_MAX;
	volatile int8_t x3162 = INT8_MIN;
	int16_t x3163 = 5;
	static uint16_t x3164 = 11U;
	static int32_t t21 = 404022;

	t21 = ((x3161&x3162)<<(x3163>>x3164));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x3441 = 786574128LLU;
	volatile int64_t x3442 = INT64_MIN;
	volatile uint16_t x3443 = 1U;
	static volatile uint8_t x3444 = 0U;
	volatile uint64_t t22 = 22LLU;

	t22 = ((x3441&x3442)<<(x3443>>x3444));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x3545 = 405064026471LL;
	uint16_t x3546 = 5U;
	volatile int16_t x3548 = 0;
	int64_t t23 = -270619LL;

	t23 = ((x3545&x3546)<<(x3547>>x3548));

	if (t23 != 1342177280LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x3569 = 15237U;
	uint64_t x3571 = 3030435082503LLU;
	static int8_t x3572 = 38;
	static volatile int32_t t24 = -3;

	t24 = ((x3569&x3570)<<(x3571>>x3572));

	if (t24 != 272384) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x3797 = UINT16_MAX;
	static int8_t x3798 = -1;
	uint16_t x3799 = 53U;
	int32_t t25 = 112;

	t25 = ((x3797&x3798)<<(x3799>>x3800));

	if (t25 != 524280) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x3927 = 14U;
	uint32_t t26 = 322159U;

	t26 = ((x3925&x3926)<<(x3927>>x3928));

	if (t26 != 4294950912U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x4013 = 2899;
	volatile uint8_t x4015 = 36U;
	int64_t x4016 = 9LL;
	uint32_t t27 = 13U;

	t27 = ((x4013&x4014)<<(x4015>>x4016));

	if (t27 != 17U) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x4085 = UINT32_MAX;
	volatile int64_t x4086 = 6272795LL;
	uint64_t x4087 = 0LLU;
	static int32_t x4088 = 7;
	int64_t t28 = 54678615LL;

	t28 = ((x4085&x4086)<<(x4087>>x4088));

	if (t28 != 6272795LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x4337 = 514306U;
	int8_t x4339 = INT8_MAX;
	volatile uint64_t t29 = 8189LLU;

	t29 = ((x4337&x4338)<<(x4339>>x4340));

	if (t29 != 514306LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x4405 = INT8_MIN;
	int16_t x4406 = 1;
	int32_t x4407 = 667352;
	static volatile int64_t x4408 = 18LL;
	int32_t t30 = 26649;

	t30 = ((x4405&x4406)<<(x4407>>x4408));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x4413 = INT16_MAX;
	int16_t x4414 = INT16_MIN;
	static uint8_t x4416 = 0U;

	t31 = ((x4413&x4414)<<(x4415>>x4416));

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

