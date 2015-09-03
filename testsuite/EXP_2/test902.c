#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x1 = 100780097;
uint64_t x49 = 2LLU;
uint16_t x50 = 27U;
volatile int32_t t2 = 8839;
volatile uint32_t x64 = UINT32_MAX;
volatile int32_t x297 = -9058;
int32_t x300 = 210415;
int16_t x378 = INT16_MAX;
uint8_t x567 = 2U;
int8_t x568 = INT8_MIN;
uint8_t x633 = 118U;
uint8_t x639 = 12U;
volatile int16_t x881 = 1;
int32_t x941 = -149;
uint16_t x1141 = 7U;
volatile int64_t t14 = -7299739228LL;
static int16_t x1257 = 0;
uint32_t x1258 = UINT32_MAX;
volatile uint32_t t16 = 390349513U;
uint64_t t17 = 3391068951LLU;
uint64_t x1422 = 250716551LLU;
uint16_t x1469 = 14U;
uint16_t x1471 = 0U;
static volatile uint64_t t20 = 0LLU;
int16_t x1645 = -188;
int16_t x1648 = INT16_MAX;
uint8_t x1873 = UINT8_MAX;
int64_t t24 = -184036718741338867LL;
static uint64_t x2340 = UINT64_MAX;
volatile int8_t x2441 = INT8_MIN;
int32_t t26 = -93;
volatile uint64_t t27 = 3158LLU;
int8_t x2617 = -21;
int32_t x2678 = INT32_MAX;
volatile uint32_t x2835 = 0U;
int8_t x2837 = -1;
uint16_t x2909 = 11874U;
uint64_t x2910 = UINT64_MAX;
volatile uint8_t x2911 = 16U;
uint8_t x2951 = 1U;
volatile uint64_t t34 = 120202983102701108LLU;
uint8_t x2998 = UINT8_MAX;
volatile int64_t x3024 = INT64_MIN;
uint16_t x3100 = 24U;
int16_t x3125 = INT16_MAX;
uint8_t x3127 = 12U;
int8_t x3198 = 3;
uint8_t x3199 = 3U;
uint32_t x3266 = UINT32_MAX;
int32_t x3268 = 4;
volatile int64_t x3314 = 43060LL;
int64_t t43 = -2507325580567001LL;
int32_t x3402 = 1223127;
volatile int8_t x3612 = -1;
volatile uint32_t x3629 = 688059399U;
volatile int16_t x3631 = 0;
volatile int64_t t50 = 85828841LL;
volatile uint16_t x3739 = 23U;
volatile int64_t t51 = 2LL;
int64_t x3757 = 1790072LL;
uint64_t x3758 = 3918070508752049LLU;
volatile uint16_t x3921 = 0U;
static uint64_t x3994 = UINT64_MAX;
static uint64_t x4114 = 3182LLU;
int32_t x4115 = 1;
static volatile uint16_t x4164 = 229U;
static int8_t x4185 = -15;
static uint8_t x4186 = 9U;
int64_t x4354 = 84LL;
int8_t x4355 = 23;
int16_t x4377 = -1;
int64_t x4380 = -231843787950552LL;
static uint32_t x4419 = 10U;
static int64_t x4545 = INT64_MIN;
static volatile uint64_t x4574 = 3096781815028LLU;
int64_t x4575 = 19LL;
volatile uint64_t t67 = 1071213652LLU;
uint16_t x4683 = 7U;
int8_t x4684 = INT8_MIN;
uint32_t x4692 = 9976U;
volatile uint64_t t70 = 1516222353LLU;
uint32_t x5062 = UINT32_MAX;
int16_t x5111 = 0;
static volatile int32_t t72 = 179;
volatile int64_t t73 = -1402819LL;
volatile uint16_t x5229 = 99U;
uint64_t x5232 = 700038LLU;
static int8_t x5367 = 1;
volatile int64_t x5485 = INT64_MIN;
uint8_t x5487 = 59U;
int32_t x5888 = INT32_MAX;
int8_t x5998 = INT8_MAX;
volatile uint16_t x5999 = 11U;
static volatile uint32_t x6043 = 1U;
uint32_t x6044 = 1888U;
volatile uint64_t t82 = 22386951485LLU;
int8_t x6163 = 0;
int64_t x6164 = INT64_MIN;
uint8_t x6186 = 15U;
volatile uint32_t x6187 = 0U;
volatile int32_t t85 = 1388;
static volatile int64_t x6217 = INT64_MAX;
uint8_t x6220 = 2U;
uint8_t x6365 = 61U;
volatile int8_t x6367 = 11;
static int32_t x6368 = INT32_MIN;
volatile uint8_t x6511 = 1U;
volatile uint32_t x6750 = 95048308U;
int16_t x6795 = 26;
static int16_t x6945 = INT16_MAX;
uint8_t x6965 = UINT8_MAX;
volatile uint64_t t92 = 137780556LLU;
int32_t x6986 = 27994;
uint8_t x6987 = 1U;
static int8_t x7003 = 1;
int16_t x7217 = INT16_MAX;
uint32_t x7218 = UINT32_MAX;
uint32_t x7219 = 25U;
static uint16_t x7251 = 0U;
uint64_t t99 = 2190739354214930478LLU;


void f0(void) {
	uint64_t x2 = 1LLU;
	uint32_t x3 = 3U;
	int32_t x4 = -1;
	uint64_t t0 = 2683914579551LLU;

	t0 = ((x1%(x2<<x3))%x4);

	if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x51 = 0U;
	uint16_t x52 = 24763U;
	volatile uint64_t t1 = 844602367384974LLU;

	t1 = ((x49%(x50<<x51))%x52);

	if (t1 != 2LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x53 = INT32_MAX;
	int8_t x54 = 11;
	volatile uint16_t x55 = 1U;
	static int8_t x56 = -1;

	t2 = ((x53%(x54<<x55))%x56);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x61 = 236LLU;
	uint32_t x62 = UINT32_MAX;
	volatile uint8_t x63 = 14U;
	uint64_t t3 = 152283380LLU;

	t3 = ((x61%(x62<<x63))%x64);

	if (t3 != 236LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x298 = 16LLU;
	uint16_t x299 = 37U;
	uint64_t t4 = 946LLU;

	t4 = ((x297%(x298<<x299))%x300);

	if (t4 != 68804LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x377 = INT32_MIN;
	int16_t x379 = 1;
	int16_t x380 = INT16_MIN;
	int32_t t5 = -3123;

	t5 = ((x377%(x378<<x379))%x380);

	if (t5 != -2) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x469 = -1300425626781669245LL;
	static int32_t x470 = 347921;
	uint8_t x471 = 2U;
	uint64_t x472 = 8849650LLU;
	uint64_t t6 = 1663903985265377727LLU;

	t6 = ((x469%(x470<<x471))%x472);

	if (t6 != 8680035LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x565 = 3U;
	volatile uint16_t x566 = 10U;
	volatile int32_t t7 = 1629;

	t7 = ((x565%(x566<<x567))%x568);

	if (t7 != 3) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x634 = 7803LLU;
	uint32_t x635 = 6U;
	int16_t x636 = -1;
	volatile uint64_t t8 = 533219121LLU;

	t8 = ((x633%(x634<<x635))%x636);

	if (t8 != 118LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x637 = 821839394U;
	static uint16_t x638 = 466U;
	static volatile uint16_t x640 = 28U;
	uint32_t t9 = 390U;

	t9 = ((x637%(x638<<x639))%x640);

	if (t9 != 14U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x705 = INT64_MIN;
	static uint16_t x706 = 912U;
	uint32_t x707 = 4U;
	volatile int64_t x708 = -3902640846858010LL;
	int64_t t10 = 2729028600325LL;

	t10 = ((x705%(x706<<x707))%x708);

	if (t10 != -512LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x882 = UINT16_MAX;
	uint16_t x883 = 5U;
	uint64_t x884 = UINT64_MAX;
	uint64_t t11 = 1248270912386537LLU;

	t11 = ((x881%(x882<<x883))%x884);

	if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x942 = INT16_MAX;
	static uint16_t x943 = 6U;
	int64_t x944 = INT64_MAX;
	volatile int64_t t12 = -2625191844LL;

	t12 = ((x941%(x942<<x943))%x944);

	if (t12 != -149LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x953 = INT64_MAX;
	volatile int64_t x954 = 23720099LL;
	int16_t x955 = 2;
	uint32_t x956 = UINT32_MAX;
	int64_t t13 = 15LL;

	t13 = ((x953%(x954<<x955))%x956);

	if (t13 != 22383875LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x1142 = UINT8_MAX;
	uint32_t x1143 = 0U;
	int64_t x1144 = 136989404037227LL;

	t14 = ((x1141%(x1142<<x1143))%x1144);

	if (t14 != 7LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x1173 = 3U;
	int16_t x1174 = 1;
	static int8_t x1175 = 0;
	uint8_t x1176 = 109U;
	int32_t t15 = -618712496;

	t15 = ((x1173%(x1174<<x1175))%x1176);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x1259 = 3U;
	int16_t x1260 = INT16_MIN;

	t16 = ((x1257%(x1258<<x1259))%x1260);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x1357 = -1;
	uint32_t x1358 = 553312587U;
	uint8_t x1359 = 3U;
	uint64_t x1360 = 60425818445LLU;

	t17 = ((x1357%(x1358<<x1359))%x1360);

	if (t17 != 85898495LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x1421 = INT32_MIN;
	uint8_t x1423 = 0U;
	static uint8_t x1424 = 63U;
	volatile uint64_t t18 = 235103086398LLU;

	t18 = ((x1421%(x1422<<x1423))%x1424);

	if (t18 != 9LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x1470 = 3U;
	uint8_t x1472 = UINT8_MAX;
	int32_t t19 = 767;

	t19 = ((x1469%(x1470<<x1471))%x1472);

	if (t19 != 2) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1473 = -1;
	uint8_t x1474 = UINT8_MAX;
	static int8_t x1475 = 1;
	uint64_t x1476 = 115507128288310LLU;

	t20 = ((x1473%(x1474<<x1475))%x1476);

	if (t20 != 24671809867995LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1646 = 5U;
	int8_t x1647 = 1;
	volatile int32_t t21 = -3;

	t21 = ((x1645%(x1646<<x1647))%x1648);

	if (t21 != -8) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1685 = INT16_MIN;
	volatile int64_t x1686 = 745122LL;
	uint8_t x1687 = 4U;
	static int16_t x1688 = INT16_MIN;
	volatile int64_t t22 = 996LL;

	t22 = ((x1685%(x1686<<x1687))%x1688);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1874 = 4113807051612247LLU;
	volatile int32_t x1875 = 1;
	static uint16_t x1876 = UINT16_MAX;
	volatile uint64_t t23 = 194015815930084948LLU;

	t23 = ((x1873%(x1874<<x1875))%x1876);

	if (t23 != 255LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x2069 = INT64_MIN;
	uint32_t x2070 = 178579246U;
	uint64_t x2071 = 5LLU;
	uint32_t x2072 = 396108177U;

	t24 = ((x2069%(x2070<<x2071))%x2072);

	if (t24 != -184032128LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x2337 = -1;
	static uint64_t x2338 = 267128058421724563LLU;
	volatile int32_t x2339 = 1;
	uint64_t t25 = 12472439270620LLU;

	t25 = ((x2337%(x2338<<x2339))%x2340);

	if (t25 != 282036101032281331LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x2442 = 3U;
	int16_t x2443 = 0;
	volatile int32_t x2444 = INT32_MIN;

	t26 = ((x2441%(x2442<<x2443))%x2444);

	if (t26 != -2) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x2585 = UINT32_MAX;
	uint64_t x2586 = UINT64_MAX;
	uint16_t x2587 = 30U;
	uint64_t x2588 = UINT64_MAX;

	t27 = ((x2585%(x2586<<x2587))%x2588);

	if (t27 != 4294967295LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x2618 = INT8_MAX;
	volatile uint16_t x2619 = 1U;
	static int32_t x2620 = INT32_MIN;
	volatile int32_t t28 = 516830;

	t28 = ((x2617%(x2618<<x2619))%x2620);

	if (t28 != -21) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x2677 = -7;
	uint8_t x2679 = 0U;
	int8_t x2680 = 1;
	volatile int32_t t29 = -154266;

	t29 = ((x2677%(x2678<<x2679))%x2680);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x2833 = 1;
	int64_t x2834 = INT64_MAX;
	static int16_t x2836 = INT16_MIN;
	volatile int64_t t30 = -58140621LL;

	t30 = ((x2833%(x2834<<x2835))%x2836);

	if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x2838 = UINT8_MAX;
	uint8_t x2839 = 0U;
	uint64_t x2840 = 3027268LLU;
	uint64_t t31 = 17095029930949LLU;

	t31 = ((x2837%(x2838<<x2839))%x2840);

	if (t31 != 1642339LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x2912 = -1;
	volatile uint64_t t32 = 113882576LLU;

	t32 = ((x2909%(x2910<<x2911))%x2912);

	if (t32 != 11874LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x2937 = INT64_MIN;
	static volatile int8_t x2938 = 7;
	static uint64_t x2939 = 0LLU;
	static int32_t x2940 = 65863;
	int64_t t33 = 1586235520LL;

	t33 = ((x2937%(x2938<<x2939))%x2940);

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x2949 = UINT8_MAX;
	uint32_t x2950 = UINT32_MAX;
	uint64_t x2952 = UINT64_MAX;

	t34 = ((x2949%(x2950<<x2951))%x2952);

	if (t34 != 255LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x2957 = -1;
	uint32_t x2958 = UINT32_MAX;
	uint8_t x2959 = 16U;
	static int8_t x2960 = INT8_MAX;
	volatile uint32_t t35 = 4U;

	t35 = ((x2957%(x2958<<x2959))%x2960);

	if (t35 != 3U) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x2965 = UINT16_MAX;
	volatile uint8_t x2966 = 44U;
	int64_t x2967 = 1LL;
	int32_t x2968 = INT32_MAX;
	int32_t t36 = -1;

	t36 = ((x2965%(x2966<<x2967))%x2968);

	if (t36 != 63) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x2997 = -8148LL;
	uint16_t x2999 = 0U;
	static uint32_t x3000 = 89351763U;
	int64_t t37 = 107988LL;

	t37 = ((x2997%(x2998<<x2999))%x3000);

	if (t37 != -243LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x3021 = INT64_MIN;
	uint16_t x3022 = 1005U;
	int16_t x3023 = 9;
	volatile int64_t t38 = -2627055747LL;

	t38 = ((x3021%(x3022<<x3023))%x3024);

	if (t38 != -247808LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x3097 = 371U;
	uint8_t x3098 = 10U;
	static uint8_t x3099 = 13U;
	static volatile int32_t t39 = -50623;

	t39 = ((x3097%(x3098<<x3099))%x3100);

	if (t39 != 11) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint64_t x3126 = UINT64_MAX;
	int64_t x3128 = -6484926LL;
	volatile uint64_t t40 = 62332LLU;

	t40 = ((x3125%(x3126<<x3127))%x3128);

	if (t40 != 32767LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x3197 = INT16_MIN;
	volatile uint64_t x3200 = 761277385300279LLU;
	volatile uint64_t t41 = 13782219510124712LLU;

	t41 = ((x3197%(x3198<<x3199))%x3200);

	if (t41 != 231750498491159LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x3265 = INT8_MIN;
	int8_t x3267 = 0;
	uint32_t t42 = 5539782U;

	t42 = ((x3265%(x3266<<x3267))%x3268);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x3313 = INT16_MAX;
	static int64_t x3315 = 1LL;
	static int64_t x3316 = -904996274862LL;

	t43 = ((x3313%(x3314<<x3315))%x3316);

	if (t43 != 32767LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x3321 = 0U;
	volatile uint32_t x3322 = 81292332U;
	uint16_t x3323 = 12U;
	int32_t x3324 = INT32_MIN;
	uint32_t t44 = 738213918U;

	t44 = ((x3321%(x3322<<x3323))%x3324);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x3401 = -21;
	volatile uint8_t x3403 = 3U;
	volatile uint32_t x3404 = 11U;
	uint32_t t45 = 3U;

	t45 = ((x3401%(x3402<<x3403))%x3404);

	if (t45 != 5U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x3453 = INT32_MIN;
	static uint64_t x3454 = 2080901557LLU;
	static int16_t x3455 = 31;
	uint32_t x3456 = 383154727U;
	volatile uint64_t t46 = 50259LLU;

	t46 = ((x3453%(x3454<<x3455))%x3456);

	if (t46 != 228037844LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x3609 = UINT64_MAX;
	uint32_t x3610 = 18641547U;
	int16_t x3611 = 0;
	volatile uint64_t t47 = 93254539645LLU;

	t47 = ((x3609%(x3610<<x3611))%x3612);

	if (t47 != 10260645LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x3630 = 84U;
	int64_t x3632 = INT64_MAX;
	static int64_t t48 = 24319LL;

	t48 = ((x3629%(x3630<<x3631))%x3632);

	if (t48 != 27LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x3685 = 1U;
	volatile uint64_t x3686 = 1145590815253961LLU;
	static volatile int16_t x3687 = 1;
	volatile uint8_t x3688 = 2U;
	uint64_t t49 = 926725LLU;

	t49 = ((x3685%(x3686<<x3687))%x3688);

	if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x3709 = -9;
	uint32_t x3710 = 7U;
	int16_t x3711 = 1;
	static int64_t x3712 = -1LL;

	t50 = ((x3709%(x3710<<x3711))%x3712);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x3737 = INT64_MIN;
	uint8_t x3738 = 4U;
	int8_t x3740 = -1;

	t51 = ((x3737%(x3738<<x3739))%x3740);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x3745 = INT8_MIN;
	static int64_t x3746 = 1916419714546560LL;
	uint8_t x3747 = 0U;
	volatile int64_t x3748 = INT64_MIN;
	volatile int64_t t52 = 2602LL;

	t52 = ((x3745%(x3746<<x3747))%x3748);

	if (t52 != -128LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x3759 = 1U;
	int64_t x3760 = INT64_MAX;
	static uint64_t t53 = 28086131085328LLU;

	t53 = ((x3757%(x3758<<x3759))%x3760);

	if (t53 != 1790072LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x3922 = 13U;
	int8_t x3923 = 12;
	static uint16_t x3924 = UINT16_MAX;
	int32_t t54 = 2547;

	t54 = ((x3921%(x3922<<x3923))%x3924);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x3993 = UINT64_MAX;
	static int8_t x3995 = 5;
	uint16_t x3996 = UINT16_MAX;
	static volatile uint64_t t55 = 16073878938003LLU;

	t55 = ((x3993%(x3994<<x3995))%x3996);

	if (t55 != 31LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x4113 = 6;
	static int8_t x4116 = INT8_MIN;
	volatile uint64_t t56 = 648884245638LLU;

	t56 = ((x4113%(x4114<<x4115))%x4116);

	if (t56 != 6LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x4161 = INT16_MAX;
	volatile uint16_t x4162 = UINT16_MAX;
	uint64_t x4163 = 7LLU;
	volatile int32_t t57 = 38130;

	t57 = ((x4161%(x4162<<x4163))%x4164);

	if (t57 != 20) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x4187 = 0;
	uint64_t x4188 = UINT64_MAX;
	uint64_t t58 = 4100053125112LLU;

	t58 = ((x4185%(x4186<<x4187))%x4188);

	if (t58 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x4273 = 788;
	static uint8_t x4274 = 3U;
	uint8_t x4275 = 1U;
	uint64_t x4276 = 570128065901858LLU;
	volatile uint64_t t59 = 2735728214678611LLU;

	t59 = ((x4273%(x4274<<x4275))%x4276);

	if (t59 != 2LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x4353 = UINT32_MAX;
	int8_t x4356 = 24;
	volatile int64_t t60 = 893312975317LL;

	t60 = ((x4353%(x4354<<x4355))%x4356);

	if (t60 != 15LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x4378 = 1;
	int8_t x4379 = 29;
	static int64_t t61 = 4092915LL;

	t61 = ((x4377%(x4378<<x4379))%x4380);

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x4417 = 1126222786574LLU;
	volatile uint8_t x4418 = UINT8_MAX;
	int64_t x4420 = INT64_MAX;
	static volatile uint64_t t62 = 65077017199LLU;

	t62 = ((x4417%(x4418<<x4419))%x4420);

	if (t62 != 215054LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x4481 = 18283U;
	volatile uint32_t x4482 = 594781951U;
	uint8_t x4483 = 10U;
	volatile int64_t x4484 = -1LL;
	int64_t t63 = -3617130427316LL;

	t63 = ((x4481%(x4482<<x4483))%x4484);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x4521 = INT32_MAX;
	int16_t x4522 = 2772;
	int8_t x4523 = 1;
	uint32_t x4524 = UINT32_MAX;
	volatile uint32_t t64 = 10630U;

	t64 = ((x4521%(x4522<<x4523))%x4524);

	if (t64 != 4159U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x4546 = 3877U;
	int8_t x4547 = 11;
	uint16_t x4548 = UINT16_MAX;
	volatile int64_t t65 = -116525916LL;

	t65 = ((x4545%(x4546<<x4547))%x4548);

	if (t65 != -6256LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x4573 = INT64_MAX;
	int16_t x4576 = 23;
	volatile uint64_t t66 = 457LLU;

	t66 = ((x4573%(x4574<<x4575))%x4576);

	if (t66 != 9LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x4585 = 46;
	uint16_t x4586 = 42U;
	uint8_t x4587 = 1U;
	static volatile uint64_t x4588 = 45500337643LLU;

	t67 = ((x4585%(x4586<<x4587))%x4588);

	if (t67 != 46LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x4681 = INT8_MAX;
	int16_t x4682 = 246;
	volatile int32_t t68 = -960440725;

	t68 = ((x4681%(x4682<<x4683))%x4684);

	if (t68 != 127) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x4689 = INT8_MAX;
	int8_t x4690 = 5;
	volatile uint16_t x4691 = 5U;
	static volatile uint32_t t69 = 6103295U;

	t69 = ((x4689%(x4690<<x4691))%x4692);

	if (t69 != 127U) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x4949 = INT8_MIN;
	uint64_t x4950 = 1983864542302368LLU;
	uint32_t x4951 = 4U;
	int32_t x4952 = 469;

	t70 = ((x4949%(x4950<<x4951))%x4952);

	if (t70 != 63LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x5061 = UINT32_MAX;
	volatile uint8_t x5063 = 1U;
	int16_t x5064 = INT16_MIN;
	volatile uint32_t t71 = 3U;

	t71 = ((x5061%(x5062<<x5063))%x5064);

	if (t71 != 1U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x5109 = -1;
	uint16_t x5110 = UINT16_MAX;
	uint16_t x5112 = 883U;

	t72 = ((x5109%(x5110<<x5111))%x5112);

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x5113 = UINT8_MAX;
	uint32_t x5114 = 53862309U;
	uint16_t x5115 = 15U;
	int64_t x5116 = 1727043387784LL;

	t73 = ((x5113%(x5114<<x5115))%x5116);

	if (t73 != 255LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x5201 = UINT8_MAX;
	int8_t x5202 = INT8_MAX;
	int16_t x5203 = 0;
	static uint16_t x5204 = 4992U;
	volatile int32_t t74 = -1690777;

	t74 = ((x5201%(x5202<<x5203))%x5204);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x5230 = 56U;
	int8_t x5231 = 1;
	volatile uint64_t t75 = 6LLU;

	t75 = ((x5229%(x5230<<x5231))%x5232);

	if (t75 != 99LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x5365 = 2U;
	volatile uint64_t x5366 = UINT64_MAX;
	static volatile uint16_t x5368 = 2U;
	volatile uint64_t t76 = 9337867LLU;

	t76 = ((x5365%(x5366<<x5367))%x5368);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x5486 = 1326656803LLU;
	uint32_t x5488 = 7338104U;
	uint64_t t77 = 8365012958LLU;

	t77 = ((x5485%(x5486<<x5487))%x5488);

	if (t77 != 285032LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x5629 = 1056U;
	int64_t x5630 = 1177709LL;
	uint8_t x5631 = 6U;
	static volatile int32_t x5632 = -2926699;
	volatile int64_t t78 = 14021517LL;

	t78 = ((x5629%(x5630<<x5631))%x5632);

	if (t78 != 1056LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x5881 = UINT64_MAX;
	static uint64_t x5882 = 29219417LLU;
	int16_t x5883 = 60;
	volatile uint32_t x5884 = 8269746U;
	volatile uint64_t t79 = 53492060237930419LLU;

	t79 = ((x5881%(x5882<<x5883))%x5884);

	if (t79 != 2739507LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x5885 = INT8_MAX;
	volatile uint32_t x5886 = 27U;
	uint16_t x5887 = 7U;
	uint32_t t80 = 0U;

	t80 = ((x5885%(x5886<<x5887))%x5888);

	if (t80 != 127U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x5997 = 0U;
	int64_t x6000 = INT64_MIN;
	int64_t t81 = -1857070766907226354LL;

	t81 = ((x5997%(x5998<<x5999))%x6000);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x6041 = 15528422832384429LLU;
	uint64_t x6042 = 4572574857LLU;

	t82 = ((x6041%(x6042<<x6043))%x6044);

	if (t82 != 1639LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x6053 = INT32_MIN;
	uint64_t x6054 = UINT64_MAX;
	volatile uint8_t x6055 = 5U;
	int64_t x6056 = INT64_MIN;
	uint64_t t83 = 16861528425090915LLU;

	t83 = ((x6053%(x6054<<x6055))%x6056);

	if (t83 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x6161 = -1LL;
	static uint8_t x6162 = 13U;
	volatile int64_t t84 = -366118613LL;

	t84 = ((x6161%(x6162<<x6163))%x6164);

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint16_t x6185 = UINT16_MAX;
	int16_t x6188 = -1;

	t85 = ((x6185%(x6186<<x6187))%x6188);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x6218 = INT8_MAX;
	int16_t x6219 = 0;
	int64_t t86 = -115517530532923646LL;

	t86 = ((x6217%(x6218<<x6219))%x6220);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x6366 = 9;
	static int32_t t87 = -4596;

	t87 = ((x6365%(x6366<<x6367))%x6368);

	if (t87 != 61) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x6509 = INT16_MAX;
	static volatile uint8_t x6510 = 21U;
	uint32_t x6512 = 112U;
	uint32_t t88 = 5354U;

	t88 = ((x6509%(x6510<<x6511))%x6512);

	if (t88 != 7U) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x6749 = 6U;
	uint16_t x6751 = 13U;
	uint16_t x6752 = UINT16_MAX;
	volatile uint32_t t89 = 52U;

	t89 = ((x6749%(x6750<<x6751))%x6752);

	if (t89 != 6U) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x6793 = 3200410U;
	int64_t x6794 = 146534LL;
	volatile int32_t x6796 = -1;
	static volatile int64_t t90 = -254LL;

	t90 = ((x6793%(x6794<<x6795))%x6796);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x6946 = INT16_MAX;
	int8_t x6947 = 0;
	static uint8_t x6948 = UINT8_MAX;
	volatile int32_t t91 = -355416;

	t91 = ((x6945%(x6946<<x6947))%x6948);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint32_t x6966 = UINT32_MAX;
	volatile uint8_t x6967 = 10U;
	uint64_t x6968 = 304990LLU;

	t92 = ((x6965%(x6966<<x6967))%x6968);

	if (t92 != 255LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x6985 = INT32_MAX;
	uint32_t x6988 = UINT32_MAX;
	uint32_t t93 = 112326773U;

	t93 = ((x6985%(x6986<<x6987))%x6988);

	if (t93 != 7919U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x7001 = INT64_MAX;
	volatile int32_t x7002 = 799245;
	volatile int32_t x7004 = -1;
	int64_t t94 = -67685LL;

	t94 = ((x7001%(x7002<<x7003))%x7004);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x7201 = INT64_MAX;
	int16_t x7202 = INT16_MAX;
	static volatile uint16_t x7203 = 3U;
	uint32_t x7204 = UINT32_MAX;
	int64_t t95 = 10630481068325273LL;

	t95 = ((x7201%(x7202<<x7203))%x7204);

	if (t95 != 7LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x7220 = 35730859006645893LLU;
	volatile uint64_t t96 = 11101LLU;

	t96 = ((x7217%(x7218<<x7219))%x7220);

	if (t96 != 32767LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x7225 = 1;
	volatile uint32_t x7226 = 374U;
	int16_t x7227 = 16;
	uint8_t x7228 = UINT8_MAX;
	uint32_t t97 = 254375U;

	t97 = ((x7225%(x7226<<x7227))%x7228);

	if (t97 != 1U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x7249 = 327595928LL;
	int8_t x7250 = INT8_MAX;
	int64_t x7252 = -6470806LL;
	int64_t t98 = -88216480509LL;

	t98 = ((x7249%(x7250<<x7251))%x7252);

	if (t98 != 63LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x7253 = 9203534907344LLU;
	int16_t x7254 = INT16_MAX;
	uint64_t x7255 = 3LLU;
	static uint32_t x7256 = 172U;

	t99 = ((x7253%(x7254<<x7255))%x7256);

	if (t99 != 60LLU) { NG(); } else { ; }
	
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

