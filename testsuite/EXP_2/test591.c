#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x3 = UINT64_MAX;
uint32_t x10 = 9324934U;
int8_t x11 = INT8_MIN;
static int32_t x106 = 267376;
volatile uint64_t t3 = 60779LLU;
static int8_t x204 = 8;
static int32_t t5 = -1;
static volatile uint8_t x480 = 1U;
int32_t t6 = 1290826;
uint8_t x520 = 11U;
uint8_t x841 = 118U;
static int16_t x843 = INT16_MAX;
static int64_t x1246 = -9677428366LL;
volatile uint8_t x1466 = UINT8_MAX;
volatile uint32_t x1910 = UINT32_MAX;
uint8_t x2074 = 9U;
static uint16_t x2076 = 0U;
uint8_t x2110 = 27U;
static int16_t x2154 = -1;
uint32_t x2156 = 0U;
uint64_t t24 = 32891821548273LLU;
int8_t x2225 = INT8_MAX;
int64_t x2227 = 865282LL;
volatile int32_t x2369 = 377217270;
int16_t x2784 = 0;
volatile uint64_t t28 = 728LLU;
uint8_t x2919 = UINT8_MAX;
volatile int32_t t30 = 25581;
int64_t x2974 = -31159010LL;
int32_t x2975 = INT32_MIN;
static int8_t x2976 = 3;
volatile int32_t t31 = 13;
int32_t x3069 = 107128;
int8_t x3070 = 3;
volatile int32_t t32 = -3417;
int8_t x3291 = INT8_MIN;
uint64_t t36 = 51LLU;
uint64_t x3469 = UINT64_MAX;
int8_t x3470 = -1;


void f0(void) {
	int8_t x1 = 1;
	int16_t x2 = -1;
	volatile int16_t x4 = 2;
	static volatile int32_t t0 = -42;

	t0 = ((x1>>(x2/x3))<<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = 0;
	uint8_t x12 = 6U;
	int32_t t1 = -22044298;

	t1 = ((x9>>(x10/x11))<<x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x105 = 23U;
	uint16_t x107 = UINT16_MAX;
	int16_t x108 = 1;
	int32_t t2 = 646;

	t2 = ((x105>>(x106/x107))<<x108);

	if (t2 != 2) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x165 = 1369834206746LLU;
	int8_t x166 = INT8_MAX;
	int64_t x167 = -706LL;
	volatile uint8_t x168 = 21U;

	t3 = ((x165>>(x166/x167))<<x168);

	if (t3 != 2872750546345787392LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x201 = 30U;
	volatile int8_t x202 = -43;
	uint16_t x203 = 4789U;
	volatile uint32_t t4 = 58U;

	t4 = ((x201>>(x202/x203))<<x204);

	if (t4 != 7680U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x281 = 0U;
	int8_t x282 = INT8_MIN;
	volatile int8_t x283 = INT8_MIN;
	static volatile uint16_t x284 = 16U;

	t5 = ((x281>>(x282/x283))<<x284);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x477 = 232U;
	int16_t x478 = INT16_MIN;
	int32_t x479 = 350780;

	t6 = ((x477>>(x478/x479))<<x480);

	if (t6 != 464) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x517 = 11;
	int8_t x518 = -1;
	uint16_t x519 = UINT16_MAX;
	static int32_t t7 = 6886;

	t7 = ((x517>>(x518/x519))<<x520);

	if (t7 != 22528) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x685 = 10552639U;
	int8_t x686 = INT8_MIN;
	static int32_t x687 = INT32_MIN;
	int8_t x688 = 20;
	uint32_t t8 = 1038U;

	t8 = ((x685>>(x686/x687))<<x688);

	if (t8 != 1408237568U) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x749 = 73790U;
	uint8_t x750 = 95U;
	int16_t x751 = INT16_MIN;
	volatile uint32_t x752 = 0U;
	static uint32_t t9 = 22361469U;

	t9 = ((x749>>(x750/x751))<<x752);

	if (t9 != 73790U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x842 = 9;
	uint16_t x844 = 2U;
	volatile int32_t t10 = 433;

	t10 = ((x841>>(x842/x843))<<x844);

	if (t10 != 472) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x941 = 56078U;
	uint64_t x942 = 15690LLU;
	uint16_t x943 = UINT16_MAX;
	uint16_t x944 = 19U;
	uint32_t t11 = 7U;

	t11 = ((x941>>(x942/x943))<<x944);

	if (t11 != 3631218688U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x1245 = 91LLU;
	int64_t x1247 = INT64_MIN;
	int8_t x1248 = 1;
	volatile uint64_t t12 = 2655813129511LLU;

	t12 = ((x1245>>(x1246/x1247))<<x1248);

	if (t12 != 182LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x1465 = 51635634LLU;
	volatile int8_t x1467 = INT8_MAX;
	int16_t x1468 = 0;
	volatile uint64_t t13 = 43371126956038866LLU;

	t13 = ((x1465>>(x1466/x1467))<<x1468);

	if (t13 != 12908908LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x1689 = 8133275LLU;
	uint8_t x1690 = UINT8_MAX;
	uint16_t x1691 = UINT16_MAX;
	uint16_t x1692 = 3U;
	volatile uint64_t t14 = 5637935046917LLU;

	t14 = ((x1689>>(x1690/x1691))<<x1692);

	if (t14 != 65066200LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x1909 = 2790023734LL;
	volatile int64_t x1911 = INT64_MIN;
	static volatile uint16_t x1912 = 15U;
	static int64_t t15 = -3LL;

	t15 = ((x1909>>(x1910/x1911))<<x1912);

	if (t15 != 91423497715712LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x1933 = UINT32_MAX;
	volatile uint64_t x1934 = 979LLU;
	uint64_t x1935 = 5242072534252284LLU;
	static int32_t x1936 = 11;
	volatile uint32_t t16 = 15217505U;

	t16 = ((x1933>>(x1934/x1935))<<x1936);

	if (t16 != 4294965248U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x1973 = 119853439LLU;
	static uint64_t x1974 = 16519LLU;
	volatile int8_t x1975 = INT8_MIN;
	int8_t x1976 = 14;
	uint64_t t17 = 4309736766875655402LLU;

	t17 = ((x1973>>(x1974/x1975))<<x1976);

	if (t17 != 1963678744576LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x2025 = 28U;
	int32_t x2026 = -1;
	uint16_t x2027 = UINT16_MAX;
	static uint8_t x2028 = 1U;
	uint32_t t18 = 487929791U;

	t18 = ((x2025>>(x2026/x2027))<<x2028);

	if (t18 != 56U) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x2029 = UINT16_MAX;
	int8_t x2030 = -20;
	static int16_t x2031 = -1;
	uint8_t x2032 = 7U;
	int32_t t19 = 663;

	t19 = ((x2029>>(x2030/x2031))<<x2032);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x2045 = 17;
	volatile uint8_t x2046 = UINT8_MAX;
	volatile uint16_t x2047 = 20845U;
	uint32_t x2048 = 12U;
	volatile int32_t t20 = 670;

	t20 = ((x2045>>(x2046/x2047))<<x2048);

	if (t20 != 69632) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x2073 = 42;
	int32_t x2075 = INT32_MAX;
	volatile int32_t t21 = 479;

	t21 = ((x2073>>(x2074/x2075))<<x2076);

	if (t21 != 42) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x2109 = UINT8_MAX;
	int64_t x2111 = -1289520518339LL;
	uint32_t x2112 = 1U;
	int32_t t22 = 38744663;

	t22 = ((x2109>>(x2110/x2111))<<x2112);

	if (t22 != 510) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x2129 = 38;
	uint16_t x2130 = 21U;
	int16_t x2131 = -492;
	int8_t x2132 = 0;
	int32_t t23 = 331866;

	t23 = ((x2129>>(x2130/x2131))<<x2132);

	if (t23 != 38) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x2153 = 393705787158LLU;
	int8_t x2155 = INT8_MAX;

	t24 = ((x2153>>(x2154/x2155))<<x2156);

	if (t24 != 393705787158LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x2226 = -43;
	static uint32_t x2228 = 3U;
	volatile int32_t t25 = 13;

	t25 = ((x2225>>(x2226/x2227))<<x2228);

	if (t25 != 1016) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x2370 = 28U;
	static uint64_t x2371 = 2014798421020770224LLU;
	uint8_t x2372 = 0U;
	volatile int32_t t26 = -43945572;

	t26 = ((x2369>>(x2370/x2371))<<x2372);

	if (t26 != 377217270) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x2601 = 3100LLU;
	uint8_t x2602 = 0U;
	int32_t x2603 = 406805;
	uint8_t x2604 = 27U;
	uint64_t t27 = 40679610LLU;

	t27 = ((x2601>>(x2602/x2603))<<x2604);

	if (t27 != 416074956800LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x2781 = 148576171595507LLU;
	uint16_t x2782 = 5746U;
	uint32_t x2783 = UINT32_MAX;

	t28 = ((x2781>>(x2782/x2783))<<x2784);

	if (t28 != 148576171595507LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x2817 = INT32_MAX;
	int32_t x2818 = -2933149;
	uint64_t x2819 = UINT64_MAX;
	static uint32_t x2820 = 0U;
	int32_t t29 = INT32_MAX;

	t29 = ((x2817>>(x2818/x2819))<<x2820);

	if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x2917 = INT8_MAX;
	uint8_t x2918 = UINT8_MAX;
	uint8_t x2920 = 11U;

	t30 = ((x2917>>(x2918/x2919))<<x2920);

	if (t30 != 129024) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x2973 = 16314U;

	t31 = ((x2973>>(x2974/x2975))<<x2976);

	if (t31 != 130512) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x3071 = 5;
	int8_t x3072 = 0;

	t32 = ((x3069>>(x3070/x3071))<<x3072);

	if (t32 != 107128) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x3077 = 15LL;
	int32_t x3078 = -1;
	static uint16_t x3079 = 2761U;
	uint8_t x3080 = 22U;
	int64_t t33 = -21453LL;

	t33 = ((x3077>>(x3078/x3079))<<x3080);

	if (t33 != 62914560LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x3289 = 693U;
	static uint64_t x3290 = 7654656874119927410LLU;
	uint32_t x3292 = 15U;
	int32_t t34 = 0;

	t34 = ((x3289>>(x3290/x3291))<<x3292);

	if (t34 != 22708224) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x3349 = 176121LLU;
	uint8_t x3350 = 0U;
	uint16_t x3351 = UINT16_MAX;
	int32_t x3352 = 1;
	volatile uint64_t t35 = 411860661134800458LLU;

	t35 = ((x3349>>(x3350/x3351))<<x3352);

	if (t35 != 352242LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint64_t x3373 = UINT64_MAX;
	int64_t x3374 = -1LL;
	int64_t x3375 = -3294617741650LL;
	volatile uint16_t x3376 = 9U;

	t36 = ((x3373>>(x3374/x3375))<<x3376);

	if (t36 != 18446744073709551104LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x3471 = 82416284685934LL;
	uint16_t x3472 = 1U;
	static uint64_t t37 = 51514LLU;

	t37 = ((x3469>>(x3470/x3471))<<x3472);

	if (t37 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x3561 = UINT64_MAX;
	int16_t x3562 = -107;
	volatile uint16_t x3563 = UINT16_MAX;
	uint8_t x3564 = 0U;
	volatile uint64_t t38 = UINT64_MAX;

	t38 = ((x3561>>(x3562/x3563))<<x3564);

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
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

