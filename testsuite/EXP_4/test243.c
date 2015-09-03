#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x4 = UINT32_MAX;
int16_t x7 = 6;
volatile int32_t t3 = -207769;
volatile uint8_t x343 = 0U;
volatile int8_t x397 = INT8_MAX;
uint64_t x436 = UINT64_MAX;
static int32_t t7 = 3576222;
uint32_t x440 = UINT32_MAX;
static int32_t t8 = -700983;
int8_t x963 = INT8_MIN;
volatile int32_t t10 = 3;
int32_t x1020 = -1;
uint64_t x1083 = UINT64_MAX;
int64_t x1084 = -1LL;
int8_t x1172 = -2;
volatile uint32_t x1176 = UINT32_MAX;
static volatile uint64_t x1446 = UINT64_MAX;
int8_t x1672 = -6;
int16_t x1941 = INT16_MIN;
static volatile int32_t x1942 = INT32_MAX;
static int8_t x1944 = INT8_MAX;
int32_t t21 = 203325;
static volatile int32_t t23 = 10119477;
int32_t t24 = -939779;
static uint8_t x2297 = 1U;
volatile int32_t t26 = 6699;
int32_t x2586 = 1;
int64_t x2732 = -1LL;
volatile int32_t t31 = 29049105;
uint32_t x2789 = 59007U;
int8_t x2791 = 20;
uint8_t x2803 = 1U;
static int32_t x3100 = INT32_MIN;
int32_t x3105 = -37;
static volatile int8_t x3179 = -1;
volatile int32_t t38 = 29866435;
volatile int8_t x3203 = -1;
static volatile int32_t t39 = -14;
static volatile int32_t x3293 = INT32_MAX;
volatile int64_t x3295 = INT64_MIN;
int32_t t41 = -6032522;
int64_t x3626 = INT64_MAX;
volatile int32_t t45 = 87204095;
volatile int32_t x3709 = INT32_MAX;
int8_t x3712 = 0;
static int32_t x3763 = 26;
int16_t x3807 = 3;
uint32_t x3984 = UINT32_MAX;
static uint64_t x4162 = 8724276699764238LLU;
static int32_t x4553 = INT32_MAX;
int8_t x4556 = -1;
volatile uint16_t x4590 = 2U;
uint32_t x4592 = UINT32_MAX;
int32_t t56 = 123954;
uint32_t x4612 = UINT32_MAX;
uint8_t x4638 = 74U;
uint32_t x4639 = UINT32_MAX;
uint8_t x4646 = 42U;
int32_t t59 = -92768;
int32_t t62 = -24;
uint16_t x4973 = 30169U;
volatile int16_t x4974 = INT16_MAX;
static int16_t x5081 = INT16_MIN;
int32_t x5082 = INT32_MAX;
uint8_t x5189 = 28U;
uint16_t x5190 = 3U;
int32_t t67 = -166429;
uint8_t x5358 = 3U;
int32_t x5496 = -1;
int32_t t69 = 485146582;
static uint64_t x5579 = UINT64_MAX;
volatile int32_t x5580 = -1;
static volatile int32_t t71 = 710;
uint32_t x5698 = 9362U;
volatile uint8_t x5913 = 7U;
int64_t x5989 = INT64_MIN;
uint16_t x6055 = 2U;
static uint8_t x6056 = 1U;
uint8_t x6699 = 13U;
static int16_t x6795 = -2;
int32_t x6796 = -2;
static int32_t x6801 = -2105;
volatile int32_t t82 = 653928343;
int32_t x7145 = -5;
uint16_t x7389 = 0U;
volatile uint32_t x7391 = UINT32_MAX;
int32_t t87 = 152;
volatile int8_t x7514 = 14;
int16_t x7596 = -1;
static uint8_t x7686 = 0U;
static uint64_t x7709 = UINT64_MAX;
static uint64_t x7710 = UINT64_MAX;
volatile int32_t t93 = -30067230;
static volatile int64_t x7921 = -4425310879589LL;
static int32_t t95 = 29240;
int8_t x7936 = -1;
int32_t t96 = -132;
int8_t x8215 = -1;
uint64_t x8216 = UINT64_MAX;


void f0(void) {
	int8_t x1 = -5;
	static int16_t x2 = INT16_MAX;
	int32_t x3 = -1;
	volatile int32_t t0 = -128563;

	t0 = (x1<(x2<<(x3-x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 4U;
	int8_t x6 = 19;
	static uint8_t x8 = 1U;
	volatile int32_t t1 = -341;

	t1 = (x5<(x6<<(x7-x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x141 = 12472192U;
	static volatile int64_t x142 = 107874594059286LL;
	int16_t x143 = -1;
	int16_t x144 = -1;
	volatile int32_t t2 = -12750;

	t2 = (x141<(x142<<(x143-x144)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x153 = UINT8_MAX;
	int8_t x154 = 4;
	static int16_t x155 = -1;
	volatile int8_t x156 = -1;

	t3 = (x153<(x154<<(x155-x156)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x341 = 155;
	uint32_t x342 = 833151U;
	uint64_t x344 = UINT64_MAX;
	int32_t t4 = 12;

	t4 = (x341<(x342<<(x343-x344)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x377 = 58864718LLU;
	static int16_t x378 = INT16_MAX;
	int8_t x379 = INT8_MIN;
	static int8_t x380 = INT8_MIN;
	int32_t t5 = -131267;

	t5 = (x377<(x378<<(x379-x380)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x398 = INT64_MAX;
	int16_t x399 = -1;
	int64_t x400 = -1LL;
	volatile int32_t t6 = 4;

	t6 = (x397<(x398<<(x399-x400)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x433 = -9056;
	static volatile uint64_t x434 = 617LLU;
	int32_t x435 = -1;

	t7 = (x433<(x434<<(x435-x436)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x437 = INT8_MIN;
	volatile uint8_t x438 = 0U;
	int8_t x439 = -1;

	t8 = (x437<(x438<<(x439-x440)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x557 = UINT32_MAX;
	volatile uint64_t x558 = UINT64_MAX;
	uint32_t x559 = UINT32_MAX;
	int16_t x560 = -62;
	volatile int32_t t9 = 1458;

	t9 = (x557<(x558<<(x559-x560)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x961 = 0U;
	int8_t x962 = INT8_MAX;
	static int8_t x964 = INT8_MIN;

	t10 = (x961<(x962<<(x963-x964)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x1017 = 3004U;
	volatile uint16_t x1018 = 3U;
	uint32_t x1019 = 6U;
	int32_t t11 = 3070;

	t11 = (x1017<(x1018<<(x1019-x1020)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x1081 = -1;
	volatile int16_t x1082 = INT16_MAX;
	volatile int32_t t12 = -1184580;

	t12 = (x1081<(x1082<<(x1083-x1084)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x1169 = INT8_MAX;
	uint64_t x1170 = 43468919292LLU;
	uint64_t x1171 = UINT64_MAX;
	volatile int32_t t13 = -1;

	t13 = (x1169<(x1170<<(x1171-x1172)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x1173 = 15;
	uint32_t x1174 = 8221U;
	uint32_t x1175 = 3U;
	int32_t t14 = -16;

	t14 = (x1173<(x1174<<(x1175-x1176)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint16_t x1185 = 1586U;
	static uint8_t x1186 = 16U;
	int16_t x1187 = -1;
	volatile int32_t x1188 = -11;
	static int32_t t15 = 24;

	t15 = (x1185<(x1186<<(x1187-x1188)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x1277 = INT16_MAX;
	volatile int64_t x1278 = 48568432LL;
	volatile int16_t x1279 = 0;
	int16_t x1280 = -1;
	static volatile int32_t t16 = 5654883;

	t16 = (x1277<(x1278<<(x1279-x1280)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x1445 = 9;
	int64_t x1447 = -1LL;
	static int8_t x1448 = -1;
	static int32_t t17 = -52;

	t17 = (x1445<(x1446<<(x1447-x1448)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1669 = INT16_MIN;
	static uint32_t x1670 = 101335U;
	volatile int8_t x1671 = -2;
	volatile int32_t t18 = -4628;

	t18 = (x1669<(x1670<<(x1671-x1672)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x1725 = INT32_MIN;
	int16_t x1726 = 13;
	volatile int16_t x1727 = -1;
	int32_t x1728 = -1;
	static volatile int32_t t19 = 8;

	t19 = (x1725<(x1726<<(x1727-x1728)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1893 = INT8_MAX;
	static uint32_t x1894 = 37242U;
	volatile int8_t x1895 = -1;
	static uint64_t x1896 = UINT64_MAX;
	int32_t t20 = 28158035;

	t20 = (x1893<(x1894<<(x1895-x1896)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1943 = INT8_MAX;

	t21 = (x1941<(x1942<<(x1943-x1944)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x2049 = INT8_MIN;
	uint32_t x2050 = 66342129U;
	int64_t x2051 = 5LL;
	int16_t x2052 = -1;
	volatile int32_t t22 = 3093;

	t22 = (x2049<(x2050<<(x2051-x2052)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x2061 = 2LL;
	static uint64_t x2062 = UINT64_MAX;
	uint32_t x2063 = UINT32_MAX;
	int32_t x2064 = -1;

	t23 = (x2061<(x2062<<(x2063-x2064)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x2073 = 1;
	volatile uint16_t x2074 = UINT16_MAX;
	int64_t x2075 = INT64_MAX;
	int64_t x2076 = INT64_MAX;

	t24 = (x2073<(x2074<<(x2075-x2076)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x2298 = 0U;
	volatile int32_t x2299 = 3;
	int16_t x2300 = -1;
	volatile int32_t t25 = 17727404;

	t25 = (x2297<(x2298<<(x2299-x2300)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x2477 = 4U;
	int64_t x2478 = INT64_MAX;
	int64_t x2479 = -1LL;
	volatile int32_t x2480 = -1;

	t26 = (x2477<(x2478<<(x2479-x2480)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x2517 = 291362158LLU;
	uint64_t x2518 = UINT64_MAX;
	uint8_t x2519 = 59U;
	static volatile int8_t x2520 = -1;
	static volatile int32_t t27 = 24339954;

	t27 = (x2517<(x2518<<(x2519-x2520)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x2553 = UINT16_MAX;
	uint64_t x2554 = 1988802670985301LLU;
	int32_t x2555 = -1;
	static int64_t x2556 = -1LL;
	static volatile int32_t t28 = -4105;

	t28 = (x2553<(x2554<<(x2555-x2556)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x2561 = 2LL;
	volatile uint32_t x2562 = 191799U;
	uint16_t x2563 = 30U;
	static uint64_t x2564 = UINT64_MAX;
	int32_t t29 = 200;

	t29 = (x2561<(x2562<<(x2563-x2564)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x2585 = -1;
	static int32_t x2587 = -1;
	int8_t x2588 = -1;
	int32_t t30 = 1;

	t30 = (x2585<(x2586<<(x2587-x2588)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x2729 = 276490822LLU;
	volatile uint64_t x2730 = 51731LLU;
	static int8_t x2731 = 11;

	t31 = (x2729<(x2730<<(x2731-x2732)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x2753 = -1520151374072986907LL;
	volatile int16_t x2754 = INT16_MAX;
	int32_t x2755 = -1;
	uint64_t x2756 = UINT64_MAX;
	volatile int32_t t32 = 473175;

	t32 = (x2753<(x2754<<(x2755-x2756)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x2790 = 11553545457LLU;
	static int64_t x2792 = -1LL;
	volatile int32_t t33 = 18458;

	t33 = (x2789<(x2790<<(x2791-x2792)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x2801 = 608973LLU;
	uint8_t x2802 = 14U;
	int32_t x2804 = -1;
	volatile int32_t t34 = -29;

	t34 = (x2801<(x2802<<(x2803-x2804)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x2841 = -34147584;
	int32_t x2842 = INT32_MAX;
	int64_t x2843 = -1LL;
	int8_t x2844 = -1;
	volatile int32_t t35 = 7468847;

	t35 = (x2841<(x2842<<(x2843-x2844)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x3097 = INT64_MIN;
	int8_t x3098 = INT8_MAX;
	int32_t x3099 = INT32_MIN;
	volatile int32_t t36 = 1224166;

	t36 = (x3097<(x3098<<(x3099-x3100)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x3106 = 0;
	volatile int64_t x3107 = 10LL;
	uint8_t x3108 = 5U;
	int32_t t37 = -639;

	t37 = (x3105<(x3106<<(x3107-x3108)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x3177 = UINT8_MAX;
	uint64_t x3178 = 22801832798LLU;
	uint64_t x3180 = UINT64_MAX;

	t38 = (x3177<(x3178<<(x3179-x3180)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x3201 = INT16_MIN;
	uint16_t x3202 = UINT16_MAX;
	int8_t x3204 = -1;

	t39 = (x3201<(x3202<<(x3203-x3204)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x3294 = UINT64_MAX;
	volatile int64_t x3296 = INT64_MIN;
	volatile int32_t t40 = -44;

	t40 = (x3293<(x3294<<(x3295-x3296)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x3321 = 15U;
	volatile int8_t x3322 = INT8_MAX;
	int16_t x3323 = -1;
	int8_t x3324 = -1;

	t41 = (x3321<(x3322<<(x3323-x3324)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x3401 = 209U;
	int8_t x3402 = INT8_MAX;
	int16_t x3403 = INT16_MIN;
	static volatile int16_t x3404 = INT16_MIN;
	int32_t t42 = 3986108;

	t42 = (x3401<(x3402<<(x3403-x3404)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x3481 = 929;
	uint64_t x3482 = 92164790780LLU;
	int8_t x3483 = INT8_MAX;
	int8_t x3484 = INT8_MAX;
	int32_t t43 = 3;

	t43 = (x3481<(x3482<<(x3483-x3484)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x3601 = INT8_MAX;
	static int16_t x3602 = 1;
	int32_t x3603 = -1;
	int16_t x3604 = -1;
	int32_t t44 = -205039399;

	t44 = (x3601<(x3602<<(x3603-x3604)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x3625 = INT16_MAX;
	int64_t x3627 = INT64_MAX;
	int64_t x3628 = INT64_MAX;

	t45 = (x3625<(x3626<<(x3627-x3628)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x3710 = 1;
	uint8_t x3711 = 1U;
	static volatile int32_t t46 = -1;

	t46 = (x3709<(x3710<<(x3711-x3712)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x3761 = 638750903;
	static uint16_t x3762 = 11U;
	int16_t x3764 = -1;
	int32_t t47 = -159350050;

	t47 = (x3761<(x3762<<(x3763-x3764)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x3805 = -1;
	uint32_t x3806 = UINT32_MAX;
	uint32_t x3808 = UINT32_MAX;
	volatile int32_t t48 = 234046;

	t48 = (x3805<(x3806<<(x3807-x3808)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x3945 = INT64_MIN;
	uint64_t x3946 = 917440733478LLU;
	uint8_t x3947 = 54U;
	uint8_t x3948 = 11U;
	static int32_t t49 = -13302894;

	t49 = (x3945<(x3946<<(x3947-x3948)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x3973 = -2;
	uint8_t x3974 = 3U;
	int16_t x3975 = INT16_MIN;
	int16_t x3976 = INT16_MIN;
	volatile int32_t t50 = -17622626;

	t50 = (x3973<(x3974<<(x3975-x3976)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x3981 = 609LLU;
	static uint16_t x3982 = 965U;
	int8_t x3983 = -1;
	volatile int32_t t51 = -31766;

	t51 = (x3981<(x3982<<(x3983-x3984)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x4057 = INT32_MIN;
	volatile int8_t x4058 = INT8_MAX;
	int16_t x4059 = -1;
	int8_t x4060 = -1;
	int32_t t52 = 21382;

	t52 = (x4057<(x4058<<(x4059-x4060)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x4161 = INT8_MAX;
	uint64_t x4163 = 12LLU;
	volatile uint32_t x4164 = 5U;
	int32_t t53 = -664238338;

	t53 = (x4161<(x4162<<(x4163-x4164)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x4381 = -1;
	static uint16_t x4382 = UINT16_MAX;
	uint32_t x4383 = UINT32_MAX;
	static int32_t x4384 = -1;
	volatile int32_t t54 = -4;

	t54 = (x4381<(x4382<<(x4383-x4384)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x4554 = INT32_MAX;
	uint32_t x4555 = UINT32_MAX;
	int32_t t55 = -2615;

	t55 = (x4553<(x4554<<(x4555-x4556)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int16_t x4589 = -14;
	int16_t x4591 = -1;

	t56 = (x4589<(x4590<<(x4591-x4592)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x4609 = 761504LLU;
	uint32_t x4610 = UINT32_MAX;
	volatile uint16_t x4611 = 1U;
	volatile int32_t t57 = 170917945;

	t57 = (x4609<(x4610<<(x4611-x4612)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x4637 = 2;
	static int16_t x4640 = -1;
	volatile int32_t t58 = 79;

	t58 = (x4637<(x4638<<(x4639-x4640)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x4645 = -1777;
	static int32_t x4647 = -1;
	int32_t x4648 = -1;

	t59 = (x4645<(x4646<<(x4647-x4648)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x4745 = INT32_MIN;
	volatile uint16_t x4746 = 5735U;
	int64_t x4747 = INT64_MIN;
	volatile int64_t x4748 = INT64_MIN;
	static volatile int32_t t60 = -101;

	t60 = (x4745<(x4746<<(x4747-x4748)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x4873 = -7;
	uint32_t x4874 = UINT32_MAX;
	int8_t x4875 = 12;
	int16_t x4876 = -2;
	int32_t t61 = -108526;

	t61 = (x4873<(x4874<<(x4875-x4876)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x4949 = INT64_MIN;
	int16_t x4950 = 30;
	uint8_t x4951 = 7U;
	volatile int16_t x4952 = -1;

	t62 = (x4949<(x4950<<(x4951-x4952)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x4975 = 11;
	int32_t x4976 = -1;
	int32_t t63 = -471677700;

	t63 = (x4973<(x4974<<(x4975-x4976)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x5025 = 1003021488LL;
	volatile uint64_t x5026 = 40434439LLU;
	int32_t x5027 = 0;
	static uint64_t x5028 = UINT64_MAX;
	int32_t t64 = 1;

	t64 = (x5025<(x5026<<(x5027-x5028)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x5083 = -1;
	int8_t x5084 = -1;
	static int32_t t65 = 209857944;

	t65 = (x5081<(x5082<<(x5083-x5084)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x5191 = UINT16_MAX;
	volatile uint16_t x5192 = UINT16_MAX;
	int32_t t66 = -888;

	t66 = (x5189<(x5190<<(x5191-x5192)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x5301 = INT16_MIN;
	uint32_t x5302 = 5002U;
	uint64_t x5303 = UINT64_MAX;
	int16_t x5304 = -1;

	t67 = (x5301<(x5302<<(x5303-x5304)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x5357 = UINT8_MAX;
	uint8_t x5359 = 2U;
	static uint16_t x5360 = 1U;
	int32_t t68 = 423;

	t68 = (x5357<(x5358<<(x5359-x5360)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x5493 = 0;
	uint32_t x5494 = UINT32_MAX;
	static volatile int16_t x5495 = 1;

	t69 = (x5493<(x5494<<(x5495-x5496)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x5509 = 462U;
	static uint16_t x5510 = UINT16_MAX;
	int16_t x5511 = 1;
	volatile int32_t x5512 = -1;
	int32_t t70 = -3308;

	t70 = (x5509<(x5510<<(x5511-x5512)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x5577 = 1;
	uint32_t x5578 = UINT32_MAX;

	t71 = (x5577<(x5578<<(x5579-x5580)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x5697 = INT32_MIN;
	volatile int64_t x5699 = INT64_MAX;
	static int64_t x5700 = INT64_MAX;
	int32_t t72 = -722080869;

	t72 = (x5697<(x5698<<(x5699-x5700)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x5914 = INT64_MAX;
	volatile int64_t x5915 = INT64_MIN;
	static int64_t x5916 = INT64_MIN;
	volatile int32_t t73 = 683849108;

	t73 = (x5913<(x5914<<(x5915-x5916)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x5985 = INT8_MAX;
	static int8_t x5986 = 3;
	int64_t x5987 = -1LL;
	int8_t x5988 = -1;
	int32_t t74 = -355;

	t74 = (x5985<(x5986<<(x5987-x5988)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x5990 = UINT32_MAX;
	int32_t x5991 = INT32_MAX;
	static int32_t x5992 = INT32_MAX;
	int32_t t75 = -3787;

	t75 = (x5989<(x5990<<(x5991-x5992)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x6053 = -1;
	static volatile uint8_t x6054 = UINT8_MAX;
	volatile int32_t t76 = -9;

	t76 = (x6053<(x6054<<(x6055-x6056)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x6177 = INT64_MAX;
	uint8_t x6178 = 12U;
	int64_t x6179 = -5LL;
	int8_t x6180 = -20;
	volatile int32_t t77 = 401024029;

	t77 = (x6177<(x6178<<(x6179-x6180)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x6365 = INT64_MIN;
	int64_t x6366 = 13459322565705253LL;
	uint16_t x6367 = 3U;
	uint32_t x6368 = UINT32_MAX;
	static int32_t t78 = -12;

	t78 = (x6365<(x6366<<(x6367-x6368)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x6697 = -7;
	uint64_t x6698 = UINT64_MAX;
	int32_t x6700 = 1;
	static int32_t t79 = 1;

	t79 = (x6697<(x6698<<(x6699-x6700)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x6717 = 2;
	uint64_t x6718 = 267876208589492LLU;
	static int8_t x6719 = 14;
	volatile int16_t x6720 = -22;
	int32_t t80 = -5;

	t80 = (x6717<(x6718<<(x6719-x6720)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x6793 = 2549U;
	uint16_t x6794 = UINT16_MAX;
	volatile int32_t t81 = -77423662;

	t81 = (x6793<(x6794<<(x6795-x6796)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x6802 = INT64_MAX;
	static int8_t x6803 = -1;
	static uint64_t x6804 = UINT64_MAX;

	t82 = (x6801<(x6802<<(x6803-x6804)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x7137 = INT32_MIN;
	uint8_t x7138 = 66U;
	volatile int16_t x7139 = 11;
	volatile int32_t x7140 = -1;
	int32_t t83 = -1;

	t83 = (x7137<(x7138<<(x7139-x7140)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x7146 = 194;
	uint8_t x7147 = 2U;
	static int16_t x7148 = -1;
	volatile int32_t t84 = -482873997;

	t84 = (x7145<(x7146<<(x7147-x7148)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x7293 = INT64_MIN;
	static int32_t x7294 = 23;
	int32_t x7295 = -1;
	static int64_t x7296 = -1LL;
	volatile int32_t t85 = 1232;

	t85 = (x7293<(x7294<<(x7295-x7296)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x7349 = -1;
	int16_t x7350 = INT16_MAX;
	int64_t x7351 = 3LL;
	int32_t x7352 = -1;
	int32_t t86 = -47;

	t86 = (x7349<(x7350<<(x7351-x7352)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x7390 = 32891LLU;
	static int16_t x7392 = -13;

	t87 = (x7389<(x7390<<(x7391-x7392)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x7429 = INT16_MIN;
	uint64_t x7430 = 206676LLU;
	int32_t x7431 = -1;
	int32_t x7432 = -1;
	static volatile int32_t t88 = -109124;

	t88 = (x7429<(x7430<<(x7431-x7432)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x7513 = INT32_MAX;
	uint32_t x7515 = 5U;
	uint64_t x7516 = 0LLU;
	int32_t t89 = 161627;

	t89 = (x7513<(x7514<<(x7515-x7516)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x7593 = 1U;
	static uint64_t x7594 = UINT64_MAX;
	static volatile uint8_t x7595 = 3U;
	int32_t t90 = 1;

	t90 = (x7593<(x7594<<(x7595-x7596)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x7685 = INT16_MAX;
	static uint8_t x7687 = 23U;
	uint16_t x7688 = 3U;
	int32_t t91 = 57;

	t91 = (x7685<(x7686<<(x7687-x7688)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x7711 = -1;
	int64_t x7712 = -1LL;
	int32_t t92 = -524618441;

	t92 = (x7709<(x7710<<(x7711-x7712)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x7889 = 801622146U;
	static volatile int16_t x7890 = INT16_MAX;
	uint8_t x7891 = 1U;
	int8_t x7892 = -3;

	t93 = (x7889<(x7890<<(x7891-x7892)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x7922 = 5U;
	uint32_t x7923 = 2U;
	static int8_t x7924 = 1;
	volatile int32_t t94 = -1;

	t94 = (x7921<(x7922<<(x7923-x7924)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x7925 = -1;
	uint32_t x7926 = UINT32_MAX;
	static int32_t x7927 = -1;
	static volatile uint64_t x7928 = UINT64_MAX;

	t95 = (x7925<(x7926<<(x7927-x7928)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x7933 = INT32_MIN;
	static int16_t x7934 = INT16_MAX;
	int8_t x7935 = -1;

	t96 = (x7933<(x7934<<(x7935-x7936)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x7957 = INT32_MIN;
	int32_t x7958 = 43;
	volatile int64_t x7959 = 0LL;
	int32_t x7960 = -1;
	static int32_t t97 = 27980145;

	t97 = (x7957<(x7958<<(x7959-x7960)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x7993 = INT64_MIN;
	uint32_t x7994 = 3195658U;
	static volatile int8_t x7995 = -3;
	static int16_t x7996 = -3;
	int32_t t98 = 887;

	t98 = (x7993<(x7994<<(x7995-x7996)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x8213 = INT32_MAX;
	volatile int32_t x8214 = INT32_MAX;
	volatile int32_t t99 = 228854432;

	t99 = (x8213<(x8214<<(x8215-x8216)));

	if (t99 != 0) { NG(); } else { ; }
	
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

