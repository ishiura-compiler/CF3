#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x67 = 1U;
volatile uint64_t t0 = 23600577539226454LLU;
int8_t x191 = -1;
static volatile int32_t x198 = -1;
int32_t x303 = -1;
volatile int32_t t4 = 2;
uint16_t x385 = 60U;
int64_t x641 = -1LL;
int8_t x705 = INT8_MAX;
int8_t x706 = -1;
int64_t x707 = -63772927324154LL;
int32_t t10 = -435;
static int64_t x843 = -1LL;
volatile int32_t t11 = -235618;
uint64_t x929 = 482296208577718LLU;
int8_t x1043 = -2;
int32_t t15 = -1839;
static volatile uint64_t x1113 = UINT64_MAX;
static volatile int64_t x1391 = -1LL;
int64_t x1392 = -1LL;
int8_t x1675 = 2;
int8_t x1991 = INT8_MIN;
volatile uint8_t x2054 = UINT8_MAX;
int64_t x2140 = -1LL;
int64_t t29 = 194267318LL;
volatile int16_t x2468 = -1;
int8_t x2889 = -1;
static int64_t x2891 = INT64_MIN;
int8_t x2949 = INT8_MIN;
int32_t x2967 = INT32_MIN;
int16_t x2968 = -1;
int16_t x3022 = INT16_MIN;
int32_t x3023 = INT32_MAX;
int16_t x3041 = 7528;
static volatile int8_t x3045 = INT8_MIN;
static uint32_t x3111 = UINT32_MAX;
static volatile int32_t x3150 = 710258;
int32_t t44 = 178326271;
int16_t x3559 = -1;
static volatile int16_t x3757 = 0;
int16_t x3758 = INT16_MIN;
uint16_t x3762 = UINT16_MAX;
int32_t t51 = 1021;
int32_t t52 = 235681;
static volatile int16_t x3866 = -1;
volatile uint16_t x4105 = 13598U;
volatile int32_t t56 = 19025;
int64_t x4122 = 656338858LL;
volatile int16_t x4123 = -1;
int8_t x4124 = -1;
uint32_t t58 = 45U;
uint64_t x4192 = UINT64_MAX;
int32_t t59 = -545984;
int64_t x4255 = INT64_MAX;
volatile int8_t x4358 = -1;
static volatile int32_t x4360 = -1;
int32_t t61 = -103;
int64_t x4367 = -1LL;
static int64_t x4493 = -19117464786120LL;
int16_t x4495 = INT16_MAX;
static int8_t x4514 = 63;
volatile int32_t t67 = -34;
int8_t x4935 = -1;
int16_t x5237 = 233;
uint32_t x5238 = 48727U;
static int32_t x5246 = -1;
static int16_t x5247 = INT16_MIN;
volatile uint16_t x5261 = 7U;
uint64_t x5500 = UINT64_MAX;
uint64_t x5563 = UINT64_MAX;
volatile int32_t t77 = 64544994;
volatile int16_t x5758 = INT16_MIN;
static int32_t x5803 = -1;
int8_t x5881 = INT8_MIN;
volatile int32_t t82 = -21343;
int32_t x6103 = INT32_MIN;
int32_t t85 = -531023696;
uint64_t x6108 = UINT64_MAX;
int16_t x6181 = 6430;
static uint64_t x6183 = 2829295356370657219LLU;
int32_t x6234 = INT32_MAX;
int8_t x6235 = INT8_MIN;
static int16_t x6324 = -1;
int8_t x6389 = 0;
static int64_t x6390 = INT64_MAX;
uint64_t x6392 = UINT64_MAX;
volatile int32_t t91 = -11799252;
uint16_t x6409 = 8U;
volatile int32_t t92 = -549;
volatile int16_t x6674 = 74;
static int64_t x6689 = INT64_MIN;
volatile int8_t x6691 = INT8_MIN;
static int8_t x6699 = INT8_MAX;
uint64_t t96 = 456395008504LLU;
int64_t x6765 = INT64_MAX;
int32_t x6768 = -1;
int16_t x6908 = -1;


void f0(void) {
	uint64_t x65 = 139662310LLU;
	int16_t x66 = -1;
	volatile uint32_t x68 = UINT32_MAX;

	t0 = (x65%((x66|x67)==x68));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x89 = INT32_MIN;
	volatile uint16_t x90 = UINT16_MAX;
	int16_t x91 = -1;
	int8_t x92 = -1;
	int32_t t1 = -641;

	t1 = (x89%((x90|x91)==x92));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x189 = 12U;
	static int32_t x190 = -1;
	uint64_t x192 = UINT64_MAX;
	int32_t t2 = 440;

	t2 = (x189%((x190|x191)==x192));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x197 = 6608U;
	uint64_t x199 = 2LLU;
	int8_t x200 = -1;
	static volatile uint32_t t3 = 326562183U;

	t3 = (x197%((x198|x199)==x200));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x301 = -1;
	int64_t x302 = 89937371133549LL;
	static int32_t x304 = -1;

	t4 = (x301%((x302|x303)==x304));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x386 = INT64_MAX;
	int8_t x387 = INT8_MIN;
	int64_t x388 = -1LL;
	int32_t t5 = 43;

	t5 = (x385%((x386|x387)==x388));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x397 = 5;
	uint8_t x398 = 30U;
	uint32_t x399 = UINT32_MAX;
	int16_t x400 = -1;
	volatile int32_t t6 = 2044268;

	t6 = (x397%((x398|x399)==x400));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x417 = 0U;
	volatile int8_t x418 = INT8_MIN;
	static volatile int8_t x419 = -1;
	int32_t x420 = -1;
	int32_t t7 = 556466;

	t7 = (x417%((x418|x419)==x420));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x581 = INT64_MIN;
	int64_t x582 = -7979LL;
	uint16_t x583 = UINT16_MAX;
	int64_t x584 = -1LL;
	volatile int64_t t8 = -6010239LL;

	t8 = (x581%((x582|x583)==x584));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x642 = INT64_MAX;
	volatile int64_t x643 = INT64_MIN;
	static int16_t x644 = -1;
	volatile int64_t t9 = -525004970728196256LL;

	t9 = (x641%((x642|x643)==x644));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x708 = UINT64_MAX;

	t10 = (x705%((x706|x707)==x708));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x841 = -81;
	int64_t x842 = 2811715778772102311LL;
	static volatile uint64_t x844 = UINT64_MAX;

	t11 = (x841%((x842|x843)==x844));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x930 = INT64_MIN;
	uint64_t x931 = UINT64_MAX;
	int8_t x932 = -1;
	volatile uint64_t t12 = 1850LLU;

	t12 = (x929%((x930|x931)==x932));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x969 = INT16_MIN;
	volatile int16_t x970 = INT16_MIN;
	int16_t x971 = INT16_MAX;
	int8_t x972 = -1;
	volatile int32_t t13 = 5557;

	t13 = (x969%((x970|x971)==x972));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x989 = 18004U;
	volatile int8_t x990 = INT8_MAX;
	int8_t x991 = -1;
	volatile int8_t x992 = -1;
	int32_t t14 = -3858684;

	t14 = (x989%((x990|x991)==x992));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x1041 = -26;
	static volatile int32_t x1042 = 2661;
	int8_t x1044 = -1;

	t15 = (x1041%((x1042|x1043)==x1044));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x1073 = INT16_MAX;
	int8_t x1074 = -1;
	int8_t x1075 = -1;
	int8_t x1076 = -1;
	volatile int32_t t16 = -34;

	t16 = (x1073%((x1074|x1075)==x1076));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x1114 = UINT32_MAX;
	int64_t x1115 = -1LL;
	uint64_t x1116 = UINT64_MAX;
	volatile uint64_t t17 = 3649989846988415107LLU;

	t17 = (x1113%((x1114|x1115)==x1116));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x1157 = 22U;
	volatile int64_t x1158 = INT64_MAX;
	static uint64_t x1159 = UINT64_MAX;
	volatile uint64_t x1160 = UINT64_MAX;
	volatile int32_t t18 = 224129;

	t18 = (x1157%((x1158|x1159)==x1160));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x1389 = 1U;
	static int32_t x1390 = 614553207;
	static int32_t t19 = 5249;

	t19 = (x1389%((x1390|x1391)==x1392));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x1533 = -538287684435815795LL;
	uint32_t x1534 = 2U;
	uint32_t x1535 = UINT32_MAX;
	int16_t x1536 = -1;
	volatile int64_t t20 = 24913428LL;

	t20 = (x1533%((x1534|x1535)==x1536));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1597 = INT8_MAX;
	int64_t x1598 = INT64_MIN;
	int8_t x1599 = -1;
	int16_t x1600 = -1;
	int32_t t21 = 2087110;

	t21 = (x1597%((x1598|x1599)==x1600));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x1673 = 0U;
	int64_t x1674 = INT64_MAX;
	int64_t x1676 = INT64_MAX;
	int32_t t22 = -10847753;

	t22 = (x1673%((x1674|x1675)==x1676));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1677 = INT8_MIN;
	int32_t x1678 = INT32_MIN;
	uint32_t x1679 = UINT32_MAX;
	int8_t x1680 = -1;
	int32_t t23 = 1900;

	t23 = (x1677%((x1678|x1679)==x1680));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1861 = 13U;
	static uint32_t x1862 = UINT32_MAX;
	volatile int32_t x1863 = -915;
	volatile int16_t x1864 = -1;
	volatile int32_t t24 = 97372;

	t24 = (x1861%((x1862|x1863)==x1864));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1877 = INT64_MAX;
	int32_t x1878 = 11115;
	int16_t x1879 = INT16_MAX;
	int16_t x1880 = INT16_MAX;
	static int64_t t25 = -1725LL;

	t25 = (x1877%((x1878|x1879)==x1880));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1957 = -1;
	uint8_t x1958 = 110U;
	int16_t x1959 = -1;
	uint32_t x1960 = UINT32_MAX;
	volatile int32_t t26 = 0;

	t26 = (x1957%((x1958|x1959)==x1960));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1989 = 1608273LLU;
	static int8_t x1990 = -1;
	static uint32_t x1992 = UINT32_MAX;
	uint64_t t27 = 368990430814370LLU;

	t27 = (x1989%((x1990|x1991)==x1992));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x2053 = 2;
	volatile uint64_t x2055 = UINT64_MAX;
	static int8_t x2056 = -1;
	volatile int32_t t28 = -212;

	t28 = (x2053%((x2054|x2055)==x2056));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x2137 = -139LL;
	uint32_t x2138 = UINT32_MAX;
	uint64_t x2139 = UINT64_MAX;

	t29 = (x2137%((x2138|x2139)==x2140));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x2465 = 26;
	int64_t x2466 = INT64_MIN;
	uint64_t x2467 = UINT64_MAX;
	int32_t t30 = -217;

	t30 = (x2465%((x2466|x2467)==x2468));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x2625 = -1;
	int32_t x2626 = -1;
	int32_t x2627 = 1;
	int64_t x2628 = -1LL;
	int32_t t31 = -215;

	t31 = (x2625%((x2626|x2627)==x2628));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x2741 = -1LL;
	int64_t x2742 = INT64_MAX;
	int16_t x2743 = INT16_MIN;
	int32_t x2744 = -1;
	volatile int64_t t32 = 42634557590494LL;

	t32 = (x2741%((x2742|x2743)==x2744));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x2749 = 254460;
	static int32_t x2750 = 6868530;
	int16_t x2751 = -1;
	int16_t x2752 = -1;
	int32_t t33 = 2940398;

	t33 = (x2749%((x2750|x2751)==x2752));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x2769 = 239582;
	uint64_t x2770 = UINT64_MAX;
	uint32_t x2771 = UINT32_MAX;
	static int16_t x2772 = -1;
	volatile int32_t t34 = -33524;

	t34 = (x2769%((x2770|x2771)==x2772));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x2890 = -1;
	static int16_t x2892 = -1;
	int32_t t35 = 1;

	t35 = (x2889%((x2890|x2891)==x2892));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x2937 = INT32_MAX;
	static int16_t x2938 = INT16_MAX;
	int16_t x2939 = INT16_MIN;
	static uint64_t x2940 = UINT64_MAX;
	volatile int32_t t36 = 0;

	t36 = (x2937%((x2938|x2939)==x2940));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x2950 = -1;
	static volatile uint64_t x2951 = 30186732107396LLU;
	uint64_t x2952 = UINT64_MAX;
	volatile int32_t t37 = 1;

	t37 = (x2949%((x2950|x2951)==x2952));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x2965 = 1U;
	uint32_t x2966 = UINT32_MAX;
	int32_t t38 = -10;

	t38 = (x2965%((x2966|x2967)==x2968));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x3017 = 0U;
	int8_t x3018 = INT8_MIN;
	int32_t x3019 = -1;
	int64_t x3020 = -1LL;
	volatile int32_t t39 = -1;

	t39 = (x3017%((x3018|x3019)==x3020));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x3021 = INT16_MIN;
	static volatile int16_t x3024 = -1;
	volatile int32_t t40 = -2038384;

	t40 = (x3021%((x3022|x3023)==x3024));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x3042 = 29U;
	int64_t x3043 = INT64_MAX;
	int64_t x3044 = INT64_MAX;
	volatile int32_t t41 = 3868756;

	t41 = (x3041%((x3042|x3043)==x3044));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x3046 = -1LL;
	static int32_t x3047 = INT32_MIN;
	int8_t x3048 = -1;
	int32_t t42 = 1748178;

	t42 = (x3045%((x3046|x3047)==x3048));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x3109 = 5;
	int16_t x3110 = -1;
	uint32_t x3112 = UINT32_MAX;
	static volatile int32_t t43 = -5458;

	t43 = (x3109%((x3110|x3111)==x3112));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x3149 = -447820;
	int64_t x3151 = -1LL;
	int32_t x3152 = -1;

	t44 = (x3149%((x3150|x3151)==x3152));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x3429 = INT64_MAX;
	static int16_t x3430 = INT16_MIN;
	int64_t x3431 = -1LL;
	uint64_t x3432 = UINT64_MAX;
	int64_t t45 = -6489LL;

	t45 = (x3429%((x3430|x3431)==x3432));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x3557 = 27U;
	int64_t x3558 = 1LL;
	static int64_t x3560 = -1LL;
	volatile uint32_t t46 = 62108U;

	t46 = (x3557%((x3558|x3559)==x3560));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x3721 = -5470;
	static volatile int8_t x3722 = INT8_MIN;
	int64_t x3723 = INT64_MIN;
	int8_t x3724 = INT8_MIN;
	int32_t t47 = -188906554;

	t47 = (x3721%((x3722|x3723)==x3724));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x3733 = -15;
	volatile uint8_t x3734 = 0U;
	static int64_t x3735 = -1LL;
	uint64_t x3736 = UINT64_MAX;
	volatile int32_t t48 = -152411966;

	t48 = (x3733%((x3734|x3735)==x3736));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x3759 = INT64_MAX;
	volatile int8_t x3760 = -1;
	int32_t t49 = 121461;

	t49 = (x3757%((x3758|x3759)==x3760));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x3761 = -4;
	volatile uint64_t x3763 = UINT64_MAX;
	int64_t x3764 = -1LL;
	int32_t t50 = -4507440;

	t50 = (x3761%((x3762|x3763)==x3764));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x3781 = 28187U;
	volatile int16_t x3782 = 4918;
	static int16_t x3783 = -1;
	int16_t x3784 = -1;

	t51 = (x3781%((x3782|x3783)==x3784));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint16_t x3793 = 13U;
	uint32_t x3794 = UINT32_MAX;
	static volatile uint8_t x3795 = 31U;
	static int32_t x3796 = -1;

	t52 = (x3793%((x3794|x3795)==x3796));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x3865 = INT16_MIN;
	static volatile uint16_t x3867 = 1U;
	int16_t x3868 = -1;
	static volatile int32_t t53 = -207192;

	t53 = (x3865%((x3866|x3867)==x3868));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x4045 = 1;
	int8_t x4046 = -1;
	uint16_t x4047 = 22383U;
	uint32_t x4048 = UINT32_MAX;
	int32_t t54 = -80179712;

	t54 = (x4045%((x4046|x4047)==x4048));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x4069 = INT64_MIN;
	volatile int16_t x4070 = -1;
	uint32_t x4071 = UINT32_MAX;
	uint32_t x4072 = UINT32_MAX;
	volatile int64_t t55 = -3977LL;

	t55 = (x4069%((x4070|x4071)==x4072));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x4106 = UINT64_MAX;
	static volatile int16_t x4107 = INT16_MIN;
	int64_t x4108 = -1LL;

	t56 = (x4105%((x4106|x4107)==x4108));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x4121 = -1;
	int32_t t57 = -1855971;

	t57 = (x4121%((x4122|x4123)==x4124));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x4185 = UINT32_MAX;
	int8_t x4186 = -27;
	static volatile int64_t x4187 = INT64_MAX;
	int16_t x4188 = -1;

	t58 = (x4185%((x4186|x4187)==x4188));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x4189 = INT16_MIN;
	int16_t x4190 = -1;
	int8_t x4191 = -1;

	t59 = (x4189%((x4190|x4191)==x4192));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x4253 = INT16_MIN;
	volatile int8_t x4254 = -1;
	int32_t x4256 = -1;
	int32_t t60 = -1;

	t60 = (x4253%((x4254|x4255)==x4256));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x4357 = 28U;
	static int64_t x4359 = 40LL;

	t61 = (x4357%((x4358|x4359)==x4360));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x4365 = INT8_MAX;
	int64_t x4366 = INT64_MIN;
	int16_t x4368 = -1;
	volatile int32_t t62 = -55603744;

	t62 = (x4365%((x4366|x4367)==x4368));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x4445 = INT64_MAX;
	int8_t x4446 = -1;
	int64_t x4447 = -1LL;
	int32_t x4448 = -1;
	volatile int64_t t63 = 2932842025914997LL;

	t63 = (x4445%((x4446|x4447)==x4448));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x4494 = 2;
	int16_t x4496 = INT16_MAX;
	static volatile int64_t t64 = 1483969026LL;

	t64 = (x4493%((x4494|x4495)==x4496));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x4513 = 79U;
	int64_t x4515 = -1LL;
	volatile int16_t x4516 = -1;
	int32_t t65 = 710;

	t65 = (x4513%((x4514|x4515)==x4516));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x4601 = 0;
	int16_t x4602 = -24;
	volatile int8_t x4603 = INT8_MAX;
	int64_t x4604 = -1LL;
	static volatile int32_t t66 = 207;

	t66 = (x4601%((x4602|x4603)==x4604));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x4833 = INT16_MIN;
	volatile uint64_t x4834 = UINT64_MAX;
	uint8_t x4835 = 28U;
	int32_t x4836 = -1;

	t67 = (x4833%((x4834|x4835)==x4836));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x4933 = INT16_MIN;
	volatile int8_t x4934 = 0;
	static int16_t x4936 = -1;
	int32_t t68 = 76;

	t68 = (x4933%((x4934|x4935)==x4936));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int32_t x4945 = INT32_MIN;
	uint16_t x4946 = UINT16_MAX;
	static volatile int16_t x4947 = INT16_MIN;
	static uint32_t x4948 = UINT32_MAX;
	volatile int32_t t69 = 0;

	t69 = (x4945%((x4946|x4947)==x4948));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x5201 = 504;
	int16_t x5202 = -1;
	uint16_t x5203 = 7U;
	volatile uint32_t x5204 = UINT32_MAX;
	volatile int32_t t70 = -1;

	t70 = (x5201%((x5202|x5203)==x5204));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x5239 = -1LL;
	uint64_t x5240 = UINT64_MAX;
	volatile int32_t t71 = 8093;

	t71 = (x5237%((x5238|x5239)==x5240));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x5245 = -383;
	static uint64_t x5248 = UINT64_MAX;
	volatile int32_t t72 = 45;

	t72 = (x5245%((x5246|x5247)==x5248));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x5262 = 14490U;
	int32_t x5263 = -1;
	uint64_t x5264 = UINT64_MAX;
	volatile int32_t t73 = 149;

	t73 = (x5261%((x5262|x5263)==x5264));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x5373 = 3808983826312626324LL;
	int16_t x5374 = -70;
	volatile int8_t x5375 = INT8_MAX;
	uint64_t x5376 = UINT64_MAX;
	volatile int64_t t74 = -280117607612533817LL;

	t74 = (x5373%((x5374|x5375)==x5376));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x5493 = 0;
	static int16_t x5494 = -13;
	int64_t x5495 = -1LL;
	static int32_t x5496 = -1;
	volatile int32_t t75 = -488093761;

	t75 = (x5493%((x5494|x5495)==x5496));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x5497 = INT64_MAX;
	volatile int8_t x5498 = INT8_MIN;
	volatile int8_t x5499 = INT8_MAX;
	int64_t t76 = -5LL;

	t76 = (x5497%((x5498|x5499)==x5500));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x5561 = INT16_MIN;
	int32_t x5562 = -1;
	int32_t x5564 = -1;

	t77 = (x5561%((x5562|x5563)==x5564));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x5573 = -1545;
	int64_t x5574 = INT64_MAX;
	volatile int8_t x5575 = INT8_MIN;
	int8_t x5576 = -1;
	static volatile int32_t t78 = -1;

	t78 = (x5573%((x5574|x5575)==x5576));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x5661 = 3LLU;
	int16_t x5662 = INT16_MIN;
	uint16_t x5663 = UINT16_MAX;
	int8_t x5664 = -1;
	static volatile uint64_t t79 = 44147843843219440LLU;

	t79 = (x5661%((x5662|x5663)==x5664));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x5757 = 2095527439245LLU;
	int16_t x5759 = 0;
	int16_t x5760 = INT16_MIN;
	uint64_t t80 = 14374LLU;

	t80 = (x5757%((x5758|x5759)==x5760));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x5801 = INT64_MIN;
	int32_t x5802 = 19707;
	uint64_t x5804 = UINT64_MAX;
	volatile int64_t t81 = -7789654998293431LL;

	t81 = (x5801%((x5802|x5803)==x5804));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x5882 = -1;
	int16_t x5883 = INT16_MIN;
	static int64_t x5884 = -1LL;

	t82 = (x5881%((x5882|x5883)==x5884));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x6017 = 127064;
	int8_t x6018 = -1;
	int32_t x6019 = -436521499;
	static int8_t x6020 = -1;
	static volatile int32_t t83 = -22357;

	t83 = (x6017%((x6018|x6019)==x6020));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x6041 = 29U;
	int32_t x6042 = INT32_MIN;
	static int16_t x6043 = INT16_MIN;
	int16_t x6044 = INT16_MIN;
	int32_t t84 = -6730;

	t84 = (x6041%((x6042|x6043)==x6044));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x6101 = INT8_MAX;
	static int16_t x6102 = -1;
	int32_t x6104 = -1;

	t85 = (x6101%((x6102|x6103)==x6104));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x6105 = -145LL;
	static int64_t x6106 = INT64_MIN;
	int64_t x6107 = -1LL;
	volatile int64_t t86 = -4996551LL;

	t86 = (x6105%((x6106|x6107)==x6108));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x6177 = INT8_MIN;
	static uint64_t x6178 = UINT64_MAX;
	int64_t x6179 = INT64_MIN;
	static int8_t x6180 = -1;
	int32_t t87 = -15572;

	t87 = (x6177%((x6178|x6179)==x6180));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x6182 = -1;
	volatile int64_t x6184 = -1LL;
	int32_t t88 = 944;

	t88 = (x6181%((x6182|x6183)==x6184));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x6233 = -1;
	static uint32_t x6236 = UINT32_MAX;
	volatile int32_t t89 = 15939;

	t89 = (x6233%((x6234|x6235)==x6236));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x6321 = INT32_MIN;
	volatile int8_t x6322 = INT8_MIN;
	volatile int8_t x6323 = INT8_MAX;
	volatile int32_t t90 = -3544;

	t90 = (x6321%((x6322|x6323)==x6324));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x6391 = -2;

	t91 = (x6389%((x6390|x6391)==x6392));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x6410 = 50850422469560LLU;
	static int64_t x6411 = -1LL;
	int64_t x6412 = -1LL;

	t92 = (x6409%((x6410|x6411)==x6412));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x6425 = INT64_MIN;
	int16_t x6426 = 644;
	int32_t x6427 = -1;
	int16_t x6428 = -1;
	volatile int64_t t93 = 1537270LL;

	t93 = (x6425%((x6426|x6427)==x6428));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x6673 = INT64_MIN;
	static int16_t x6675 = -1;
	int64_t x6676 = -1LL;
	static int64_t t94 = -480616060438186LL;

	t94 = (x6673%((x6674|x6675)==x6676));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x6690 = INT16_MAX;
	int64_t x6692 = -1LL;
	int64_t t95 = -25821LL;

	t95 = (x6689%((x6690|x6691)==x6692));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x6697 = 206351231385238513LLU;
	static int8_t x6698 = INT8_MIN;
	int16_t x6700 = -1;

	t96 = (x6697%((x6698|x6699)==x6700));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x6766 = -311;
	volatile uint64_t x6767 = UINT64_MAX;
	static int64_t t97 = 0LL;

	t97 = (x6765%((x6766|x6767)==x6768));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x6777 = 376;
	volatile int16_t x6778 = -1;
	int8_t x6779 = INT8_MAX;
	static volatile int64_t x6780 = -1LL;
	int32_t t98 = 456853893;

	t98 = (x6777%((x6778|x6779)==x6780));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x6905 = -1;
	int16_t x6906 = -1;
	int16_t x6907 = -1;
	int32_t t99 = -529514;

	t99 = (x6905%((x6906|x6907)==x6908));

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

