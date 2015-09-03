#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x39 = -1;
static int64_t x243 = INT64_MAX;
static uint64_t x254 = UINT64_MAX;
int8_t x355 = INT8_MIN;
static int64_t x356 = -1LL;
int32_t x544 = -1;
static volatile int32_t t9 = 705938827;
uint16_t x767 = UINT16_MAX;
int32_t x829 = -1;
int64_t x832 = -1LL;
volatile int32_t t14 = -351404560;
uint8_t x988 = 79U;
int8_t x999 = -1;
static int64_t x1265 = INT64_MAX;
int16_t x1339 = INT16_MIN;
int64_t x1468 = 293041857LL;
volatile int32_t t21 = -7946;
int32_t x1549 = 0;
volatile int32_t x1643 = -1872644;
volatile int32_t t24 = 29;
int32_t x1699 = -1;
int64_t x1700 = INT64_MIN;
static volatile int32_t t25 = 17211;
volatile int32_t t26 = -842467;
int32_t t27 = -2;
static uint8_t x1884 = UINT8_MAX;
volatile int32_t t31 = 1;
int64_t x2073 = -1LL;
int16_t x2076 = 5050;
int8_t x2120 = INT8_MIN;
uint8_t x2205 = 82U;
int8_t x2207 = INT8_MAX;
volatile int8_t x2389 = INT8_MIN;
uint32_t x2391 = 1873922574U;
int32_t x2392 = -1;
volatile int32_t t35 = 460813;
int8_t x2676 = INT8_MAX;
int64_t t39 = 19081542869090520LL;
int16_t x2787 = -5;
int32_t x2901 = -4;
int8_t x2903 = -1;
static volatile int32_t t41 = 11860;
static int8_t x2939 = -1;
static uint64_t x2973 = 1007921854427477163LLU;
int16_t x2975 = -1;
volatile uint64_t t43 = 934LLU;
static uint8_t x3039 = UINT8_MAX;
int16_t x3040 = 22;
volatile uint64_t t44 = 5LLU;
static uint16_t x3077 = 7U;
uint32_t x3171 = UINT32_MAX;
uint8_t x3172 = UINT8_MAX;
volatile int16_t x3176 = 1512;
int16_t x3255 = 10;
int32_t x3268 = INT32_MIN;
static volatile uint32_t t52 = 955526U;
int64_t x3375 = INT64_MIN;
int64_t x3376 = INT64_MAX;
uint32_t t53 = 15815U;
int32_t x3429 = -62;
uint32_t x3462 = UINT32_MAX;
int8_t x3463 = -9;
static uint16_t x3633 = UINT16_MAX;
int8_t x3635 = -1;
volatile uint32_t x3733 = UINT32_MAX;
int16_t x3734 = INT16_MIN;
static int8_t x3783 = 2;
static int8_t x3784 = -1;
int64_t t61 = 569LL;
int64_t x3835 = -1LL;
static int8_t x3878 = INT8_MIN;
int8_t x3880 = INT8_MIN;
int32_t x3945 = INT32_MIN;
int32_t x3948 = -1;
int32_t x3977 = -990;
int32_t t67 = 499;
int16_t x4112 = -345;
uint64_t x4113 = 134226183343468230LLU;
volatile int32_t t70 = 194973566;
uint64_t x4161 = UINT64_MAX;
int16_t x4395 = 156;
int32_t x4396 = -1;
uint64_t x4410 = UINT64_MAX;
static int8_t x4411 = -1;
int16_t x4490 = INT16_MIN;
static int16_t x4491 = INT16_MIN;
static int8_t x4493 = INT8_MIN;
int8_t x4725 = -1;
volatile int16_t x4786 = -1;
static uint8_t x4788 = UINT8_MAX;
int16_t x4802 = -1;
int32_t x5002 = -1;
uint8_t x5097 = 26U;
uint64_t x5100 = 5613912764342236LLU;
int16_t x5146 = -1;
uint64_t x5461 = 117541316467LLU;
int32_t x5467 = 0;
int8_t x5601 = -1;
static uint32_t x5727 = UINT32_MAX;
volatile int16_t x5729 = 1801;
int8_t x5846 = -1;
uint32_t t97 = 7273U;
int16_t x6064 = INT16_MIN;
int64_t x6077 = INT64_MIN;


void f0(void) {
	static int8_t x37 = -1;
	uint32_t x38 = UINT32_MAX;
	static uint8_t x40 = UINT8_MAX;
	int32_t t0 = 94599;

	t0 = (x37%(x38==(x39|x40)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x185 = INT64_MIN;
	int32_t x186 = -1;
	volatile int8_t x187 = -1;
	volatile int32_t x188 = -1;
	volatile int64_t t1 = 648901276918LL;

	t1 = (x185%(x186==(x187|x188)));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x225 = 5U;
	uint64_t x226 = UINT64_MAX;
	int32_t x227 = -1;
	static int32_t x228 = INT32_MAX;
	static volatile int32_t t2 = 98;

	t2 = (x225%(x226==(x227|x228)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x241 = 1371991442530LLU;
	static int16_t x242 = -1;
	int32_t x244 = -2782;
	volatile uint64_t t3 = 815988157778977494LLU;

	t3 = (x241%(x242==(x243|x244)));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x253 = -2;
	int32_t x255 = -1;
	int8_t x256 = INT8_MIN;
	volatile int32_t t4 = 539768;

	t4 = (x253%(x254==(x255|x256)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x353 = -1LL;
	uint64_t x354 = UINT64_MAX;
	static int64_t t5 = 31805665LL;

	t5 = (x353%(x354==(x355|x356)));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x425 = -1;
	int8_t x426 = -1;
	int32_t x427 = INT32_MIN;
	static int16_t x428 = -1;
	volatile int32_t t6 = 16426;

	t6 = (x425%(x426==(x427|x428)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x433 = 1496749U;
	int16_t x434 = -1;
	uint64_t x435 = UINT64_MAX;
	int16_t x436 = INT16_MIN;
	uint32_t t7 = 106294882U;

	t7 = (x433%(x434==(x435|x436)));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x541 = INT32_MAX;
	static volatile uint64_t x542 = UINT64_MAX;
	volatile uint16_t x543 = UINT16_MAX;
	volatile int32_t t8 = -509;

	t8 = (x541%(x542==(x543|x544)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x601 = INT32_MIN;
	static int8_t x602 = -1;
	volatile uint32_t x603 = 129860U;
	int16_t x604 = -1;

	t9 = (x601%(x602==(x603|x604)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x681 = 3U;
	static uint64_t x682 = UINT64_MAX;
	int8_t x683 = INT8_MAX;
	int32_t x684 = -1;
	uint32_t t10 = 180474U;

	t10 = (x681%(x682==(x683|x684)));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x765 = 6U;
	static int16_t x766 = -1;
	static int16_t x768 = INT16_MIN;
	int32_t t11 = -540;

	t11 = (x765%(x766==(x767|x768)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x789 = 3;
	static int16_t x790 = -1;
	int8_t x791 = -1;
	int16_t x792 = 96;
	int32_t t12 = 8569;

	t12 = (x789%(x790==(x791|x792)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x809 = INT32_MIN;
	uint64_t x810 = UINT64_MAX;
	int64_t x811 = INT64_MIN;
	volatile int64_t x812 = -1LL;
	static int32_t t13 = -118507648;

	t13 = (x809%(x810==(x811|x812)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x830 = -1;
	uint8_t x831 = 2U;

	t14 = (x829%(x830==(x831|x832)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x985 = INT64_MIN;
	int64_t x986 = -1LL;
	static int16_t x987 = -1;
	volatile int64_t t15 = 143769601589472406LL;

	t15 = (x985%(x986==(x987|x988)));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x993 = INT16_MIN;
	volatile int64_t x994 = -1LL;
	int16_t x995 = -1;
	int32_t x996 = -175857;
	int32_t t16 = -816559;

	t16 = (x993%(x994==(x995|x996)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x997 = 1U;
	uint64_t x998 = UINT64_MAX;
	volatile int32_t x1000 = INT32_MAX;
	static int32_t t17 = 141402297;

	t17 = (x997%(x998==(x999|x1000)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x1266 = UINT32_MAX;
	volatile uint16_t x1267 = UINT16_MAX;
	volatile int8_t x1268 = INT8_MIN;
	volatile int64_t t18 = -207723186883LL;

	t18 = (x1265%(x1266==(x1267|x1268)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x1337 = INT64_MIN;
	uint64_t x1338 = UINT64_MAX;
	static uint64_t x1340 = UINT64_MAX;
	int64_t t19 = -13089534LL;

	t19 = (x1337%(x1338==(x1339|x1340)));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x1465 = 60U;
	uint64_t x1466 = UINT64_MAX;
	volatile int16_t x1467 = -1;
	int32_t t20 = -681516;

	t20 = (x1465%(x1466==(x1467|x1468)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1489 = -1;
	static int8_t x1490 = -1;
	volatile int8_t x1491 = -1;
	static int32_t x1492 = -3;

	t21 = (x1489%(x1490==(x1491|x1492)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1525 = UINT64_MAX;
	static volatile uint64_t x1526 = UINT64_MAX;
	int32_t x1527 = -1;
	static volatile uint64_t x1528 = 5834521345LLU;
	static volatile uint64_t t22 = 2134346887923LLU;

	t22 = (x1525%(x1526==(x1527|x1528)));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1550 = UINT64_MAX;
	int8_t x1551 = -1;
	volatile uint16_t x1552 = 2307U;
	static volatile int32_t t23 = -11030;

	t23 = (x1549%(x1550==(x1551|x1552)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x1641 = INT8_MIN;
	int32_t x1642 = -1;
	int32_t x1644 = -1;

	t24 = (x1641%(x1642==(x1643|x1644)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1697 = -1;
	uint64_t x1698 = UINT64_MAX;

	t25 = (x1697%(x1698==(x1699|x1700)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x1737 = UINT16_MAX;
	uint64_t x1738 = UINT64_MAX;
	volatile int16_t x1739 = -1;
	uint8_t x1740 = 3U;

	t26 = (x1737%(x1738==(x1739|x1740)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1769 = 2U;
	int8_t x1770 = INT8_MIN;
	int64_t x1771 = INT64_MIN;
	int8_t x1772 = INT8_MIN;

	t27 = (x1769%(x1770==(x1771|x1772)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x1777 = UINT32_MAX;
	uint32_t x1778 = UINT32_MAX;
	static uint8_t x1779 = UINT8_MAX;
	volatile int8_t x1780 = INT8_MIN;
	static uint32_t t28 = 1156137663U;

	t28 = (x1777%(x1778==(x1779|x1780)));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x1845 = 111U;
	volatile int32_t x1846 = -1;
	int32_t x1847 = -114;
	volatile uint64_t x1848 = UINT64_MAX;
	volatile int32_t t29 = -2604250;

	t29 = (x1845%(x1846==(x1847|x1848)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x1881 = INT8_MAX;
	uint8_t x1882 = UINT8_MAX;
	volatile int8_t x1883 = INT8_MAX;
	static int32_t t30 = 77;

	t30 = (x1881%(x1882==(x1883|x1884)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1973 = INT16_MIN;
	int16_t x1974 = -1;
	static volatile int16_t x1975 = INT16_MIN;
	int64_t x1976 = -1LL;

	t31 = (x1973%(x1974==(x1975|x1976)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x2074 = -1;
	static volatile uint32_t x2075 = UINT32_MAX;
	static volatile int64_t t32 = -1975044792LL;

	t32 = (x2073%(x2074==(x2075|x2076)));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x2117 = 338511562U;
	uint32_t x2118 = UINT32_MAX;
	int32_t x2119 = -1;
	uint32_t t33 = 34948480U;

	t33 = (x2117%(x2118==(x2119|x2120)));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x2206 = -1;
	static int64_t x2208 = -1LL;
	static int32_t t34 = 328562;

	t34 = (x2205%(x2206==(x2207|x2208)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x2390 = UINT32_MAX;

	t35 = (x2389%(x2390==(x2391|x2392)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x2625 = UINT8_MAX;
	static volatile int64_t x2626 = -1LL;
	volatile int8_t x2627 = INT8_MIN;
	uint8_t x2628 = UINT8_MAX;
	int32_t t36 = 1604007;

	t36 = (x2625%(x2626==(x2627|x2628)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x2673 = -1;
	int16_t x2674 = -1;
	int16_t x2675 = -1;
	static volatile int32_t t37 = -46;

	t37 = (x2673%(x2674==(x2675|x2676)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x2737 = 57993108743924814LL;
	volatile int64_t x2738 = -1LL;
	int64_t x2739 = INT64_MIN;
	static int64_t x2740 = INT64_MAX;
	volatile int64_t t38 = -84LL;

	t38 = (x2737%(x2738==(x2739|x2740)));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x2741 = INT64_MIN;
	uint64_t x2742 = UINT64_MAX;
	int8_t x2743 = -1;
	static int32_t x2744 = 10777;

	t39 = (x2741%(x2742==(x2743|x2744)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2785 = INT8_MIN;
	uint32_t x2786 = UINT32_MAX;
	static uint32_t x2788 = UINT32_MAX;
	int32_t t40 = 1329075;

	t40 = (x2785%(x2786==(x2787|x2788)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2902 = -1;
	int16_t x2904 = INT16_MIN;

	t41 = (x2901%(x2902==(x2903|x2904)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x2937 = 0U;
	uint64_t x2938 = UINT64_MAX;
	static int32_t x2940 = -14;
	static volatile int32_t t42 = -12674;

	t42 = (x2937%(x2938==(x2939|x2940)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x2974 = UINT32_MAX;
	uint32_t x2976 = 378385839U;

	t43 = (x2973%(x2974==(x2975|x2976)));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x3037 = UINT64_MAX;
	static uint8_t x3038 = UINT8_MAX;

	t44 = (x3037%(x3038==(x3039|x3040)));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x3061 = 238U;
	static int32_t x3062 = -1;
	int32_t x3063 = -1;
	int8_t x3064 = -1;
	uint32_t t45 = 2U;

	t45 = (x3061%(x3062==(x3063|x3064)));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x3078 = -1;
	volatile uint16_t x3079 = 0U;
	volatile int64_t x3080 = -1LL;
	volatile int32_t t46 = 4028;

	t46 = (x3077%(x3078==(x3079|x3080)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x3121 = -1;
	uint64_t x3122 = UINT64_MAX;
	volatile int16_t x3123 = INT16_MIN;
	int16_t x3124 = INT16_MAX;
	volatile int32_t t47 = -36;

	t47 = (x3121%(x3122==(x3123|x3124)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x3169 = UINT32_MAX;
	static volatile uint32_t x3170 = UINT32_MAX;
	uint32_t t48 = 3293508U;

	t48 = (x3169%(x3170==(x3171|x3172)));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x3173 = 0;
	static int64_t x3174 = -1LL;
	int32_t x3175 = -1;
	int32_t t49 = -3555300;

	t49 = (x3173%(x3174==(x3175|x3176)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x3253 = UINT64_MAX;
	int8_t x3254 = -1;
	volatile int8_t x3256 = -1;
	uint64_t t50 = 7529728571LLU;

	t50 = (x3253%(x3254==(x3255|x3256)));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x3265 = INT64_MAX;
	int32_t x3266 = INT32_MIN;
	int32_t x3267 = INT32_MIN;
	int64_t t51 = -37146427156123LL;

	t51 = (x3265%(x3266==(x3267|x3268)));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x3301 = UINT32_MAX;
	int16_t x3302 = -1;
	static volatile int8_t x3303 = -1;
	int8_t x3304 = INT8_MIN;

	t52 = (x3301%(x3302==(x3303|x3304)));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x3373 = 2299733U;
	int64_t x3374 = -1LL;

	t53 = (x3373%(x3374==(x3375|x3376)));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x3430 = -1LL;
	int64_t x3431 = 7LL;
	int8_t x3432 = -1;
	int32_t t54 = 67;

	t54 = (x3429%(x3430==(x3431|x3432)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x3461 = 833964172715570515LLU;
	int32_t x3464 = -6;
	uint64_t t55 = 2649612799144013LLU;

	t55 = (x3461%(x3462==(x3463|x3464)));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x3593 = 1667902368944725LLU;
	int8_t x3594 = -1;
	int16_t x3595 = -1;
	int16_t x3596 = INT16_MIN;
	uint64_t t56 = 1216750LLU;

	t56 = (x3593%(x3594==(x3595|x3596)));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x3634 = -1;
	int16_t x3636 = INT16_MIN;
	volatile int32_t t57 = -2;

	t57 = (x3633%(x3634==(x3635|x3636)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x3685 = -1;
	uint32_t x3686 = UINT32_MAX;
	volatile int8_t x3687 = -1;
	int8_t x3688 = INT8_MIN;
	static int32_t t58 = 3224;

	t58 = (x3685%(x3686==(x3687|x3688)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x3735 = INT32_MIN;
	static volatile int16_t x3736 = INT16_MIN;
	volatile uint32_t t59 = 855948U;

	t59 = (x3733%(x3734==(x3735|x3736)));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x3781 = 14U;
	int64_t x3782 = -1LL;
	volatile int32_t t60 = -2532;

	t60 = (x3781%(x3782==(x3783|x3784)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x3801 = INT64_MAX;
	static int16_t x3802 = -1;
	uint64_t x3803 = UINT64_MAX;
	static int16_t x3804 = -4;

	t61 = (x3801%(x3802==(x3803|x3804)));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x3833 = INT64_MAX;
	static int16_t x3834 = -1;
	static volatile uint16_t x3836 = 3430U;
	volatile int64_t t62 = 127313390036207535LL;

	t62 = (x3833%(x3834==(x3835|x3836)));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x3877 = -1LL;
	static int8_t x3879 = INT8_MIN;
	static int64_t t63 = 0LL;

	t63 = (x3877%(x3878==(x3879|x3880)));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x3893 = 1831516975U;
	int16_t x3894 = -1;
	uint64_t x3895 = UINT64_MAX;
	int16_t x3896 = -1;
	static volatile uint32_t t64 = 32813063U;

	t64 = (x3893%(x3894==(x3895|x3896)));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x3941 = UINT8_MAX;
	int32_t x3942 = -1;
	static int8_t x3943 = -1;
	int16_t x3944 = INT16_MAX;
	int32_t t65 = 2348660;

	t65 = (x3941%(x3942==(x3943|x3944)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x3946 = UINT32_MAX;
	uint16_t x3947 = 346U;
	volatile int32_t t66 = 118367580;

	t66 = (x3945%(x3946==(x3947|x3948)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x3978 = UINT64_MAX;
	int64_t x3979 = INT64_MIN;
	int32_t x3980 = -1;

	t67 = (x3977%(x3978==(x3979|x3980)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x4109 = -1;
	int8_t x4110 = -1;
	int32_t x4111 = -1;
	int32_t t68 = -62538951;

	t68 = (x4109%(x4110==(x4111|x4112)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x4114 = UINT8_MAX;
	volatile uint8_t x4115 = UINT8_MAX;
	static volatile uint8_t x4116 = 4U;
	static volatile uint64_t t69 = 21687859835001088LLU;

	t69 = (x4113%(x4114==(x4115|x4116)));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x4129 = INT16_MIN;
	volatile uint32_t x4130 = UINT32_MAX;
	uint16_t x4131 = 98U;
	int8_t x4132 = -3;

	t70 = (x4129%(x4130==(x4131|x4132)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x4162 = -1;
	static int64_t x4163 = INT64_MAX;
	int8_t x4164 = -3;
	uint64_t t71 = 312896884405237LLU;

	t71 = (x4161%(x4162==(x4163|x4164)));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x4393 = UINT8_MAX;
	uint32_t x4394 = UINT32_MAX;
	volatile int32_t t72 = -937573109;

	t72 = (x4393%(x4394==(x4395|x4396)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x4409 = -1;
	int32_t x4412 = -1;
	volatile int32_t t73 = -1006;

	t73 = (x4409%(x4410==(x4411|x4412)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x4489 = 883863LL;
	int8_t x4492 = 0;
	volatile int64_t t74 = 48661117409658LL;

	t74 = (x4489%(x4490==(x4491|x4492)));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x4494 = -1;
	int16_t x4495 = -1;
	volatile uint64_t x4496 = 10197LLU;
	volatile int32_t t75 = -87811;

	t75 = (x4493%(x4494==(x4495|x4496)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x4637 = 30790579088456245LLU;
	int32_t x4638 = -1;
	static volatile int32_t x4639 = INT32_MAX;
	volatile int8_t x4640 = -1;
	volatile uint64_t t76 = 24LLU;

	t76 = (x4637%(x4638==(x4639|x4640)));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x4726 = -1LL;
	uint8_t x4727 = UINT8_MAX;
	static int64_t x4728 = -1LL;
	int32_t t77 = -2506;

	t77 = (x4725%(x4726==(x4727|x4728)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x4785 = 888;
	int16_t x4787 = -1;
	int32_t t78 = -382368;

	t78 = (x4785%(x4786==(x4787|x4788)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x4801 = 6991493U;
	uint64_t x4803 = UINT64_MAX;
	volatile uint64_t x4804 = UINT64_MAX;
	static volatile uint32_t t79 = 208436U;

	t79 = (x4801%(x4802==(x4803|x4804)));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x5001 = -56698632665518262LL;
	int32_t x5003 = -1;
	volatile int8_t x5004 = INT8_MAX;
	static int64_t t80 = 1646718959786LL;

	t80 = (x5001%(x5002==(x5003|x5004)));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x5089 = INT64_MIN;
	int32_t x5090 = -1;
	uint64_t x5091 = UINT64_MAX;
	static int32_t x5092 = INT32_MIN;
	int64_t t81 = -3720210LL;

	t81 = (x5089%(x5090==(x5091|x5092)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x5098 = -1;
	volatile int32_t x5099 = -1;
	volatile int32_t t82 = 292;

	t82 = (x5097%(x5098==(x5099|x5100)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x5105 = INT16_MAX;
	uint64_t x5106 = UINT64_MAX;
	int16_t x5107 = -1;
	int64_t x5108 = INT64_MIN;
	int32_t t83 = -182;

	t83 = (x5105%(x5106==(x5107|x5108)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x5145 = INT64_MIN;
	static int16_t x5147 = -1;
	uint64_t x5148 = 513862502001192LLU;
	int64_t t84 = -493456LL;

	t84 = (x5145%(x5146==(x5147|x5148)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x5325 = 896645U;
	uint8_t x5326 = UINT8_MAX;
	uint8_t x5327 = UINT8_MAX;
	uint8_t x5328 = 35U;
	volatile uint32_t t85 = 197U;

	t85 = (x5325%(x5326==(x5327|x5328)));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x5462 = UINT64_MAX;
	static int64_t x5463 = INT64_MIN;
	uint64_t x5464 = UINT64_MAX;
	uint64_t t86 = 1117770344LLU;

	t86 = (x5461%(x5462==(x5463|x5464)));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x5465 = UINT8_MAX;
	int16_t x5466 = -1;
	volatile uint64_t x5468 = UINT64_MAX;
	static int32_t t87 = -84151268;

	t87 = (x5465%(x5466==(x5467|x5468)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x5533 = INT32_MIN;
	int8_t x5534 = -1;
	uint32_t x5535 = UINT32_MAX;
	uint16_t x5536 = 1141U;
	volatile int32_t t88 = -229;

	t88 = (x5533%(x5534==(x5535|x5536)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x5557 = -1LL;
	static volatile int64_t x5558 = -1LL;
	int8_t x5559 = -1;
	int32_t x5560 = -1;
	volatile int64_t t89 = -39992059LL;

	t89 = (x5557%(x5558==(x5559|x5560)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x5577 = 113134570U;
	volatile int16_t x5578 = -1;
	uint8_t x5579 = UINT8_MAX;
	int64_t x5580 = -1LL;
	volatile uint32_t t90 = 224007U;

	t90 = (x5577%(x5578==(x5579|x5580)));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x5602 = -1;
	int8_t x5603 = -1;
	static volatile int64_t x5604 = INT64_MAX;
	volatile int32_t t91 = -72;

	t91 = (x5601%(x5602==(x5603|x5604)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x5673 = UINT32_MAX;
	int16_t x5674 = -1;
	int32_t x5675 = -1;
	uint16_t x5676 = 1505U;
	volatile uint32_t t92 = 1044481915U;

	t92 = (x5673%(x5674==(x5675|x5676)));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x5725 = -1;
	static int16_t x5726 = -1;
	int32_t x5728 = INT32_MAX;
	volatile int32_t t93 = -3244651;

	t93 = (x5725%(x5726==(x5727|x5728)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x5730 = -1;
	static volatile int16_t x5731 = -1;
	static volatile uint16_t x5732 = 1953U;
	int32_t t94 = 0;

	t94 = (x5729%(x5730==(x5731|x5732)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x5845 = -1LL;
	static uint32_t x5847 = UINT32_MAX;
	uint8_t x5848 = 4U;
	static int64_t t95 = 50307LL;

	t95 = (x5845%(x5846==(x5847|x5848)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x5885 = UINT16_MAX;
	static int64_t x5886 = -1LL;
	static int32_t x5887 = INT32_MAX;
	volatile int64_t x5888 = -1LL;
	volatile int32_t t96 = -5;

	t96 = (x5885%(x5886==(x5887|x5888)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x6009 = UINT32_MAX;
	int64_t x6010 = -1LL;
	int64_t x6011 = INT64_MIN;
	int64_t x6012 = -1LL;

	t97 = (x6009%(x6010==(x6011|x6012)));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x6061 = 43;
	static volatile int16_t x6062 = -1;
	volatile uint32_t x6063 = UINT32_MAX;
	int32_t t98 = 499225491;

	t98 = (x6061%(x6062==(x6063|x6064)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x6078 = -1;
	int32_t x6079 = INT32_MIN;
	uint32_t x6080 = UINT32_MAX;
	int64_t t99 = 63740610692926LL;

	t99 = (x6077%(x6078==(x6079|x6080)));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

