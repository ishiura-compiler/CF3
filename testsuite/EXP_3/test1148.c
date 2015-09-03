#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x67 = 4470U;
int16_t x274 = INT16_MAX;
int32_t x279 = 396716;
int64_t x370 = 53774628645471LL;
volatile int32_t t4 = -34739;
int8_t x429 = -1;
volatile int8_t x430 = INT8_MIN;
static int8_t x431 = 9;
int64_t x447 = INT64_MAX;
int8_t x448 = 0;
int32_t x457 = -411257;
int8_t x459 = INT8_MAX;
int64_t x462 = INT64_MIN;
static uint16_t x463 = UINT16_MAX;
static int64_t t8 = -5284396146726LL;
static uint8_t x471 = 31U;
static uint8_t x648 = 2U;
static uint64_t t10 = 420329324LLU;
uint16_t x706 = UINT16_MAX;
uint32_t x735 = 915U;
static volatile uint16_t x903 = 344U;
static volatile int32_t t14 = 0;
int64_t x950 = INT64_MAX;
static int32_t x958 = -1;
volatile uint8_t x959 = UINT8_MAX;
int8_t x1352 = 0;
uint64_t x1468 = 7LLU;
static volatile uint64_t t23 = 436647531481LLU;
uint32_t x1570 = UINT32_MAX;
static int8_t x1572 = 0;
int16_t x1694 = -3;
uint16_t x1696 = 3U;
int8_t x1849 = -1;
int64_t x1935 = 6672465589639LL;
static volatile int8_t x2020 = 1;
volatile int16_t x2297 = INT16_MIN;
int16_t x2381 = -1;
uint8_t x2456 = 2U;
static uint32_t x2459 = UINT32_MAX;
static uint32_t t34 = 409568U;
uint32_t x2689 = 44262U;
uint8_t x2721 = UINT8_MAX;
static int16_t x2830 = INT16_MIN;
volatile int64_t t38 = 192978812302703LL;
int8_t x3039 = INT8_MAX;
uint16_t x3052 = 0U;
uint8_t x3378 = UINT8_MAX;
static uint16_t x3380 = 4U;
static volatile int64_t t41 = -59LL;
uint32_t x3477 = 13634854U;
uint8_t x3479 = UINT8_MAX;
volatile uint64_t x3807 = UINT64_MAX;
static volatile uint64_t t43 = 893273487030842633LLU;
volatile int64_t t47 = 308298781903448611LL;


void f0(void) {
	int64_t x65 = -1LL;
	uint64_t x66 = 1LLU;
	uint8_t x68 = 3U;
	uint64_t t0 = 20639425LLU;

	t0 = ((x65&x66)/(x67>>x68));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x273 = -1;
	uint8_t x275 = 73U;
	static volatile int8_t x276 = 0;
	static volatile int32_t t1 = 68927792;

	t1 = ((x273&x274)/(x275>>x276));

	if (t1 != 448) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x277 = 0;
	volatile int16_t x278 = -1;
	int8_t x280 = 1;
	int32_t t2 = -46338;

	t2 = ((x277&x278)/(x279>>x280));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x369 = 1LL;
	uint8_t x371 = UINT8_MAX;
	uint16_t x372 = 1U;
	int64_t t3 = 6677547LL;

	t3 = ((x369&x370)/(x371>>x372));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x409 = -1;
	volatile int16_t x410 = INT16_MIN;
	int32_t x411 = 45441714;
	volatile int64_t x412 = 3LL;

	t4 = ((x409&x410)/(x411>>x412));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x432 = 0;
	static int32_t t5 = -7628;

	t5 = ((x429&x430)/(x431>>x432));

	if (t5 != -14) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x445 = -951330965224LL;
	int64_t x446 = INT64_MIN;
	static int64_t t6 = -1432078717LL;

	t6 = ((x445&x446)/(x447>>x448));

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x458 = 31;
	volatile uint16_t x460 = 2U;
	volatile int32_t t7 = -13205;

	t7 = ((x457&x458)/(x459>>x460));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x461 = INT32_MIN;
	volatile uint16_t x464 = 2U;

	t8 = ((x461&x462)/(x463>>x464));

	if (t8 != -562984315256960LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x469 = INT32_MAX;
	int8_t x470 = INT8_MIN;
	static volatile int64_t x472 = 0LL;
	volatile int32_t t9 = -780725863;

	t9 = ((x469&x470)/(x471>>x472));

	if (t9 != 69273661) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x645 = 3LLU;
	static uint64_t x646 = 8525LLU;
	int64_t x647 = 953028543477054LL;

	t10 = ((x645&x646)/(x647>>x648));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x705 = INT8_MAX;
	uint64_t x707 = 30LLU;
	uint8_t x708 = 4U;
	uint64_t t11 = 23457424814LLU;

	t11 = ((x705&x706)/(x707>>x708));

	if (t11 != 127LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x733 = -1073500760798LL;
	uint64_t x734 = UINT64_MAX;
	static uint8_t x736 = 1U;
	static uint64_t t12 = 74975LLU;

	t12 = ((x733&x734)/(x735>>x736));

	if (t12 != 40364864333060811LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x885 = INT32_MIN;
	int8_t x886 = -13;
	int16_t x887 = INT16_MAX;
	int8_t x888 = 2;
	int32_t t13 = 240858;

	t13 = ((x885&x886)/(x887>>x888));

	if (t13 != -262176) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x901 = -1;
	static int8_t x902 = 1;
	static uint8_t x904 = 0U;

	t14 = ((x901&x902)/(x903>>x904));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x909 = INT16_MAX;
	int8_t x910 = -1;
	int32_t x911 = INT32_MAX;
	uint8_t x912 = 0U;
	volatile int32_t t15 = -742;

	t15 = ((x909&x910)/(x911>>x912));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x949 = -1;
	volatile uint64_t x951 = 122586561LLU;
	int32_t x952 = 1;
	volatile uint64_t t16 = 1655204348LLU;

	t16 = ((x949&x950)/(x951>>x952));

	if (t16 != 150479335366LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int16_t x957 = -1;
	uint8_t x960 = 0U;
	static volatile int32_t t17 = 55986;

	t17 = ((x957&x958)/(x959>>x960));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x1061 = 224923446LL;
	int64_t x1062 = -2395LL;
	volatile int64_t x1063 = INT64_MAX;
	int8_t x1064 = 24;
	static int64_t t18 = -2926985932059LL;

	t18 = ((x1061&x1062)/(x1063>>x1064));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x1097 = 972697;
	int8_t x1098 = INT8_MIN;
	volatile int64_t x1099 = INT64_MAX;
	static uint8_t x1100 = 0U;
	volatile int64_t t19 = 136161993715206505LL;

	t19 = ((x1097&x1098)/(x1099>>x1100));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x1137 = -1;
	uint64_t x1138 = 5109971260956269835LLU;
	volatile uint32_t x1139 = 21500U;
	uint32_t x1140 = 5U;
	volatile uint64_t t20 = 68453699339293LLU;

	t20 = ((x1137&x1138)/(x1139>>x1140));

	if (t20 != 7615456424674023LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x1145 = INT64_MIN;
	static int8_t x1146 = INT8_MIN;
	uint32_t x1147 = UINT32_MAX;
	int8_t x1148 = 2;
	volatile int64_t t21 = -7929463LL;

	t21 = ((x1145&x1146)/(x1147>>x1148));

	if (t21 != -8589934600LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x1349 = 40U;
	int32_t x1350 = INT32_MIN;
	int16_t x1351 = 784;
	int32_t t22 = -1491191;

	t22 = ((x1349&x1350)/(x1351>>x1352));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1465 = -3338LL;
	static uint64_t x1466 = UINT64_MAX;
	uint16_t x1467 = UINT16_MAX;

	t23 = ((x1465&x1466)/(x1467>>x1468));

	if (t23 != 36099303471055867LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1569 = -37;
	int32_t x1571 = INT32_MAX;
	volatile uint32_t t24 = 11U;

	t24 = ((x1569&x1570)/(x1571>>x1572));

	if (t24 != 1U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x1693 = 80U;
	static int32_t x1695 = INT32_MAX;
	int32_t t25 = -57706;

	t25 = ((x1693&x1694)/(x1695>>x1696));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x1850 = INT16_MAX;
	static uint64_t x1851 = 60200101654LLU;
	volatile int8_t x1852 = 27;
	uint64_t t26 = 1430505678LLU;

	t26 = ((x1849&x1850)/(x1851>>x1852));

	if (t26 != 73LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1933 = INT64_MIN;
	int8_t x1934 = -13;
	volatile uint8_t x1936 = 0U;
	int64_t t27 = 2215375254366066LL;

	t27 = ((x1933&x1934)/(x1935>>x1936));

	if (t27 != -1382303LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1965 = UINT64_MAX;
	int16_t x1966 = INT16_MIN;
	volatile int32_t x1967 = INT32_MAX;
	int8_t x1968 = 0;
	uint64_t t28 = 14742076754LLU;

	t28 = ((x1965&x1966)/(x1967>>x1968));

	if (t28 != 8589934595LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x2017 = 165U;
	volatile int64_t x2018 = INT64_MIN;
	static volatile uint8_t x2019 = UINT8_MAX;
	static volatile int64_t t29 = 5970806LL;

	t29 = ((x2017&x2018)/(x2019>>x2020));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x2041 = INT32_MAX;
	static int8_t x2042 = INT8_MIN;
	uint32_t x2043 = UINT32_MAX;
	static uint8_t x2044 = 11U;
	uint32_t t30 = 518U;

	t30 = ((x2041&x2042)/(x2043>>x2044));

	if (t30 != 1024U) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x2298 = 2365U;
	uint64_t x2299 = 8294138LLU;
	uint16_t x2300 = 1U;
	static volatile uint64_t t31 = 1890LLU;

	t31 = ((x2297&x2298)/(x2299>>x2300));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x2382 = 3U;
	static volatile uint64_t x2383 = 29850092394LLU;
	volatile uint8_t x2384 = 2U;
	uint64_t t32 = 316611304198535995LLU;

	t32 = ((x2381&x2382)/(x2383>>x2384));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x2453 = UINT32_MAX;
	volatile int16_t x2454 = INT16_MAX;
	int16_t x2455 = INT16_MAX;
	uint32_t t33 = 84239544U;

	t33 = ((x2453&x2454)/(x2455>>x2456));

	if (t33 != 4U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x2457 = INT16_MAX;
	static uint32_t x2458 = 1439930744U;
	static uint8_t x2460 = 5U;

	t34 = ((x2457&x2458)/(x2459>>x2460));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x2690 = INT16_MIN;
	int32_t x2691 = 1;
	int8_t x2692 = 0;
	volatile uint32_t t35 = 0U;

	t35 = ((x2689&x2690)/(x2691>>x2692));

	if (t35 != 32768U) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x2722 = 305401554464044LLU;
	int8_t x2723 = 13;
	int8_t x2724 = 0;
	uint64_t t36 = 2522044118676LLU;

	t36 = ((x2721&x2722)/(x2723>>x2724));

	if (t36 != 3LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x2813 = INT64_MAX;
	volatile int8_t x2814 = 34;
	volatile int64_t x2815 = INT64_MAX;
	static int8_t x2816 = 3;
	static volatile int64_t t37 = 1LL;

	t37 = ((x2813&x2814)/(x2815>>x2816));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x2829 = INT64_MIN;
	volatile uint8_t x2831 = 26U;
	uint8_t x2832 = 1U;

	t38 = ((x2829&x2830)/(x2831>>x2832));

	if (t38 != -709490156681136600LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x3037 = -171787877;
	int64_t x3038 = 0LL;
	uint16_t x3040 = 5U;
	int64_t t39 = -7588338131LL;

	t39 = ((x3037&x3038)/(x3039>>x3040));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x3049 = 6893LL;
	int16_t x3050 = -1;
	uint8_t x3051 = UINT8_MAX;
	volatile int64_t t40 = 8156637LL;

	t40 = ((x3049&x3050)/(x3051>>x3052));

	if (t40 != 27LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x3377 = -240285526LL;
	uint16_t x3379 = UINT16_MAX;

	t41 = ((x3377&x3378)/(x3379>>x3380));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x3478 = 227;
	int8_t x3480 = 2;
	volatile uint32_t t42 = 1U;

	t42 = ((x3477&x3478)/(x3479>>x3480));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x3805 = INT8_MAX;
	int64_t x3806 = -926988619LL;
	int8_t x3808 = 54;

	t43 = ((x3805&x3806)/(x3807>>x3808));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x3969 = 4U;
	int32_t x3970 = -52;
	uint32_t x3971 = UINT32_MAX;
	volatile uint32_t x3972 = 1U;
	static uint32_t t44 = 30U;

	t44 = ((x3969&x3970)/(x3971>>x3972));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x3993 = INT8_MIN;
	int16_t x3994 = INT16_MAX;
	volatile uint16_t x3995 = 10U;
	static uint8_t x3996 = 3U;
	volatile int32_t t45 = -1110512;

	t45 = ((x3993&x3994)/(x3995>>x3996));

	if (t45 != 32640) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x4085 = -2;
	static int8_t x4086 = -41;
	static int32_t x4087 = INT32_MAX;
	uint8_t x4088 = 5U;
	volatile int32_t t46 = -121989545;

	t46 = ((x4085&x4086)/(x4087>>x4088));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x4097 = -1LL;
	volatile int32_t x4098 = -1;
	int64_t x4099 = INT64_MAX;
	uint8_t x4100 = 9U;

	t47 = ((x4097&x4098)/(x4099>>x4100));

	if (t47 != 0LL) { NG(); } else { ; }
	
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


    return 0;
}

