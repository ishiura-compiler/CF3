#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x140 = INT8_MIN;
volatile uint32_t t2 = 97754399U;
int8_t x232 = INT8_MIN;
volatile uint32_t x319 = 87213204U;
static volatile uint32_t t5 = 0U;
uint8_t x326 = 2U;
int16_t x396 = -3;
uint8_t x721 = 78U;
uint32_t x723 = UINT32_MAX;
volatile uint16_t x789 = 901U;
uint32_t x899 = UINT32_MAX;
static uint32_t t13 = 268U;
static uint8_t x986 = 11U;
int8_t x1117 = 1;
uint8_t x1177 = 1U;
int8_t x1497 = INT8_MAX;
uint64_t x1571 = UINT64_MAX;
volatile int64_t x1572 = 46219009LL;
uint16_t x1677 = 3U;
uint32_t x1678 = 0U;
int64_t t25 = 394617LL;
uint8_t x1869 = 25U;
uint64_t x2012 = 352924136840445LLU;
uint32_t x2041 = 181793711U;
uint32_t x2042 = 28U;
uint16_t x2079 = 6U;
static uint64_t x2244 = UINT64_MAX;
static volatile uint64_t t31 = 1656728270267041LLU;
volatile uint8_t x2326 = 2U;
uint64_t x2328 = 245820356772622984LLU;
int16_t x2418 = 1;
static int16_t x2437 = 6049;
static uint8_t x2438 = 5U;
uint64_t x2448 = UINT64_MAX;
volatile uint64_t t35 = 197125LLU;
volatile int32_t t36 = -498;
uint8_t x2689 = UINT8_MAX;
uint16_t x2718 = 3U;
uint64_t x2719 = UINT64_MAX;
uint64_t t39 = 1696966LLU;
volatile uint32_t x2902 = 3U;
volatile int64_t t41 = -835987740LL;
static int64_t x3104 = INT64_MIN;
int32_t x3135 = INT32_MIN;
volatile uint8_t x3136 = 88U;
volatile int8_t x3307 = 5;
volatile int64_t t44 = -11854478LL;
uint64_t x3449 = 772069835065456LLU;
uint32_t x3452 = 41U;
uint32_t x3813 = UINT32_MAX;
static uint16_t x3836 = 1737U;
int64_t t49 = -1486208686114580LL;
uint16_t x3842 = 1U;
static volatile int8_t x3856 = INT8_MIN;
uint64_t t51 = 79LLU;
volatile int64_t t52 = 39LL;
int8_t x3966 = 2;
uint64_t x4029 = 5LLU;
uint8_t x4172 = 7U;
uint32_t x4190 = 56U;
volatile int8_t x4191 = 0;
uint32_t x4469 = 1990069049U;
static volatile uint64_t x4493 = 6590056610256LLU;
uint16_t x4494 = 7U;
uint8_t x4565 = 1U;
int16_t x4582 = 1;
int8_t x4584 = INT8_MAX;
uint16_t x4748 = 14U;
uint32_t t65 = 137058U;
uint32_t x4818 = 19U;
static uint16_t x4893 = 3U;
uint32_t x5064 = 12U;
uint32_t x5129 = 794636595U;
int64_t x5132 = -328LL;
int8_t x5254 = 6;
volatile int8_t x5256 = INT8_MAX;
int64_t t72 = 0LL;
int32_t t73 = -220272970;
int16_t x5346 = 11;
volatile int32_t t75 = 227;
int64_t x5588 = INT64_MIN;
uint64_t x5607 = 30LLU;
static int16_t x5651 = -1;
static uint8_t x5652 = 26U;
static uint32_t x5961 = 14U;
int16_t x6063 = INT16_MAX;
static int8_t x6407 = INT8_MAX;
uint64_t x6408 = 18LLU;
uint32_t x6449 = 262374028U;
volatile uint8_t x6450 = 14U;
volatile int8_t x6451 = INT8_MAX;
uint32_t t86 = 397U;
static uint32_t t87 = 7996U;
uint8_t x6878 = 12U;
uint8_t x6879 = UINT8_MAX;
int8_t x6905 = INT8_MAX;
static uint64_t x7077 = 945361427LLU;
volatile uint8_t x7276 = UINT8_MAX;
static uint8_t x7413 = UINT8_MAX;
uint16_t x7414 = 1U;
static int8_t x7415 = INT8_MIN;


void f0(void) {
	uint32_t x29 = UINT32_MAX;
	uint16_t x30 = 7U;
	static int8_t x31 = INT8_MIN;
	int64_t x32 = -1LL;
	volatile int64_t t0 = 40064660117097LL;

	t0 = ((x29<<x30)+(x31+x32));

	if (t0 != 4294967039LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x53 = UINT8_MAX;
	uint32_t x54 = 0U;
	volatile int32_t x55 = -7297209;
	int8_t x56 = INT8_MIN;
	volatile int32_t t1 = 9487;

	t1 = ((x53<<x54)+(x55+x56));

	if (t1 != -7297082) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x137 = UINT32_MAX;
	static uint16_t x138 = 1U;
	static int32_t x139 = -205519601;

	t2 = ((x137<<x138)+(x139+x140));

	if (t2 != 4089447565U) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x229 = INT16_MAX;
	uint8_t x230 = 5U;
	static int32_t x231 = -1;
	volatile int32_t t3 = 887790;

	t3 = ((x229<<x230)+(x231+x232));

	if (t3 != 1048415) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x277 = 21078LLU;
	uint8_t x278 = 2U;
	static uint8_t x279 = 15U;
	static int64_t x280 = 36LL;
	static volatile uint64_t t4 = 2881278097369501118LLU;

	t4 = ((x277<<x278)+(x279+x280));

	if (t4 != 84363LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x317 = 50U;
	volatile int8_t x318 = 0;
	uint32_t x320 = UINT32_MAX;

	t5 = ((x317<<x318)+(x319+x320));

	if (t5 != 87213253U) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x325 = 3;
	int64_t x327 = -137155LL;
	int16_t x328 = INT16_MAX;
	static int64_t t6 = 0LL;

	t6 = ((x325<<x326)+(x327+x328));

	if (t6 != -104376LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x393 = INT8_MAX;
	int32_t x394 = 0;
	uint8_t x395 = UINT8_MAX;
	static int32_t t7 = -318594026;

	t7 = ((x393<<x394)+(x395+x396));

	if (t7 != 379) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x722 = 22;
	uint8_t x724 = 1U;
	volatile uint32_t t8 = 168U;

	t8 = ((x721<<x722)+(x723+x724));

	if (t8 != 327155712U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x790 = 18;
	uint64_t x791 = 63672LLU;
	uint64_t x792 = 3066LLU;
	volatile uint64_t t9 = 198921655147652962LLU;

	t9 = ((x789<<x790)+(x791+x792));

	if (t9 != 236258482LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x821 = UINT8_MAX;
	volatile uint16_t x822 = 10U;
	static uint16_t x823 = 4774U;
	static volatile int16_t x824 = INT16_MIN;
	int32_t t10 = -273025;

	t10 = ((x821<<x822)+(x823+x824));

	if (t10 != 233126) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x829 = 61U;
	int8_t x830 = 0;
	uint64_t x831 = 982653506269LLU;
	int32_t x832 = INT32_MAX;
	volatile uint64_t t11 = 6LLU;

	t11 = ((x829<<x830)+(x831+x832));

	if (t11 != 984800989977LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x885 = INT16_MAX;
	uint8_t x886 = 15U;
	volatile int32_t x887 = -479901;
	volatile uint16_t x888 = 8086U;
	int32_t t12 = -56;

	t12 = ((x885<<x886)+(x887+x888));

	if (t12 != 1073237241) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x897 = 3203;
	static volatile uint8_t x898 = 1U;
	int32_t x900 = 2781822;

	t13 = ((x897<<x898)+(x899+x900));

	if (t13 != 2788227U) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x985 = 12432838LLU;
	int32_t x987 = 786;
	uint64_t x988 = 3994952790LLU;
	uint64_t t14 = 311178LLU;

	t14 = ((x985<<x986)+(x987+x988));

	if (t14 != 29457405800LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x993 = 188751664LLU;
	uint8_t x994 = 32U;
	int64_t x995 = INT64_MAX;
	volatile int64_t x996 = INT64_MIN;
	static uint64_t t15 = 8228LLU;

	t15 = ((x993<<x994)+(x995+x996));

	if (t15 != 810682223945580543LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x1069 = UINT16_MAX;
	uint16_t x1070 = 2U;
	uint32_t x1071 = UINT32_MAX;
	int8_t x1072 = -1;
	static uint32_t t16 = 13819030U;

	t16 = ((x1069<<x1070)+(x1071+x1072));

	if (t16 != 262138U) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x1118 = 0LL;
	static int16_t x1119 = 1;
	volatile int64_t x1120 = INT64_MIN;
	volatile int64_t t17 = 2139283507LL;

	t17 = ((x1117<<x1118)+(x1119+x1120));

	if (t17 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x1178 = 30;
	uint32_t x1179 = UINT32_MAX;
	uint32_t x1180 = UINT32_MAX;
	uint32_t t18 = 2504877U;

	t18 = ((x1177<<x1178)+(x1179+x1180));

	if (t18 != 1073741822U) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint64_t x1485 = UINT64_MAX;
	uint16_t x1486 = 10U;
	int16_t x1487 = INT16_MIN;
	int16_t x1488 = -1;
	uint64_t t19 = 143108237LLU;

	t19 = ((x1485<<x1486)+(x1487+x1488));

	if (t19 != 18446744073709517823LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x1498 = 2LLU;
	volatile uint64_t x1499 = 615429LLU;
	uint8_t x1500 = UINT8_MAX;
	uint64_t t20 = 4491549315LLU;

	t20 = ((x1497<<x1498)+(x1499+x1500));

	if (t20 != 616192LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x1569 = 7U;
	static int8_t x1570 = 1;
	volatile uint64_t t21 = 51303532918LLU;

	t21 = ((x1569<<x1570)+(x1571+x1572));

	if (t21 != 46219022LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x1609 = 24;
	static uint16_t x1610 = 9U;
	int32_t x1611 = -1;
	int8_t x1612 = -1;
	int32_t t22 = -166;

	t22 = ((x1609<<x1610)+(x1611+x1612));

	if (t22 != 12286) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x1679 = 46887LL;
	uint32_t x1680 = 207998688U;
	volatile int64_t t23 = 11073649LL;

	t23 = ((x1677<<x1678)+(x1679+x1680));

	if (t23 != 208045578LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x1841 = 3;
	static int8_t x1842 = 0;
	volatile int8_t x1843 = INT8_MAX;
	uint64_t x1844 = UINT64_MAX;
	volatile uint64_t t24 = 7LLU;

	t24 = ((x1841<<x1842)+(x1843+x1844));

	if (t24 != 129LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x1861 = UINT16_MAX;
	volatile int16_t x1862 = 7;
	volatile int64_t x1863 = -1LL;
	volatile int8_t x1864 = -8;

	t25 = ((x1861<<x1862)+(x1863+x1864));

	if (t25 != 8388471LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1870 = 1;
	static uint64_t x1871 = 6026659622172754965LLU;
	int32_t x1872 = INT32_MIN;
	uint64_t t26 = 1524560854LLU;

	t26 = ((x1869<<x1870)+(x1871+x1872));

	if (t26 != 6026659620025271367LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x2009 = 7U;
	uint8_t x2010 = 25U;
	volatile int16_t x2011 = -1719;
	volatile uint64_t t27 = 49594917853117144LLU;

	t27 = ((x2009<<x2010)+(x2011+x2012));

	if (t27 != 352924371719750LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x2043 = 66443342874830LL;
	static int32_t x2044 = INT32_MIN;
	int64_t t28 = -365LL;

	t28 = ((x2041<<x2042)+(x2043+x2044));

	if (t28 != 66445221923022LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x2077 = 2094865747LLU;
	uint8_t x2078 = 1U;
	static int32_t x2080 = 3876246;
	uint64_t t29 = 7850864LLU;

	t29 = ((x2077<<x2078)+(x2079+x2080));

	if (t29 != 4193607746LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int16_t x2189 = INT16_MAX;
	int16_t x2190 = 0;
	uint16_t x2191 = 0U;
	int32_t x2192 = INT32_MIN;
	static int32_t t30 = -2048306;

	t30 = ((x2189<<x2190)+(x2191+x2192));

	if (t30 != -2147450881) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x2241 = 82U;
	int16_t x2242 = 19;
	volatile int64_t x2243 = -837912LL;

	t31 = ((x2241<<x2242)+(x2243+x2244));

	if (t31 != 42153703LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x2325 = 2U;
	int64_t x2327 = INT64_MAX;
	volatile uint64_t t32 = 574690546842LLU;

	t32 = ((x2325<<x2326)+(x2327+x2328));

	if (t32 != 9469192393627398799LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x2417 = UINT64_MAX;
	int64_t x2419 = -1LL;
	volatile int32_t x2420 = INT32_MIN;
	static uint64_t t33 = 440394072LLU;

	t33 = ((x2417<<x2418)+(x2419+x2420));

	if (t33 != 18446744071562067965LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x2439 = 6;
	int8_t x2440 = -1;
	volatile int32_t t34 = 134717;

	t34 = ((x2437<<x2438)+(x2439+x2440));

	if (t34 != 193573) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x2445 = UINT32_MAX;
	uint8_t x2446 = 0U;
	volatile int64_t x2447 = INT64_MIN;

	t35 = ((x2445<<x2446)+(x2447+x2448));

	if (t35 != 9223372041149743102LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x2565 = 26U;
	uint8_t x2566 = 0U;
	uint16_t x2567 = UINT16_MAX;
	volatile uint8_t x2568 = UINT8_MAX;

	t36 = ((x2565<<x2566)+(x2567+x2568));

	if (t36 != 65816) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x2690 = 12U;
	volatile int64_t x2691 = INT64_MIN;
	uint16_t x2692 = 798U;
	volatile int64_t t37 = 47878066527507189LL;

	t37 = ((x2689<<x2690)+(x2691+x2692));

	if (t37 != -9223372036853730530LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2713 = 4;
	uint16_t x2714 = 7U;
	uint64_t x2715 = 3282033409725733871LLU;
	int32_t x2716 = INT32_MIN;
	static uint64_t t38 = 19435497484868881LLU;

	t38 = ((x2713<<x2714)+(x2715+x2716));

	if (t38 != 3282033407578250735LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x2717 = UINT64_MAX;
	uint16_t x2720 = 20U;

	t39 = ((x2717<<x2718)+(x2719+x2720));

	if (t39 != 11LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint8_t x2901 = 22U;
	int32_t x2903 = -13;
	int64_t x2904 = -1LL;
	int64_t t40 = -2134540807LL;

	t40 = ((x2901<<x2902)+(x2903+x2904));

	if (t40 != 162LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x3081 = 111256110283LL;
	uint8_t x3082 = 6U;
	int8_t x3083 = INT8_MIN;
	int8_t x3084 = INT8_MIN;

	t41 = ((x3081<<x3082)+(x3083+x3084));

	if (t41 != 7120391057856LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x3101 = 108493794U;
	static int8_t x3102 = 4;
	uint32_t x3103 = 94U;
	int64_t t42 = 954133997LL;

	t42 = ((x3101<<x3102)+(x3103+x3104));

	if (t42 != -9223372035118875010LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x3133 = UINT16_MAX;
	volatile uint8_t x3134 = 0U;
	volatile int32_t t43 = -1965;

	t43 = ((x3133<<x3134)+(x3135+x3136));

	if (t43 != -2147418025) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x3305 = 3801249LL;
	uint8_t x3306 = 6U;
	int8_t x3308 = INT8_MIN;

	t44 = ((x3305<<x3306)+(x3307+x3308));

	if (t44 != 243279813LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x3417 = 11;
	int8_t x3418 = 0;
	uint32_t x3419 = 45016852U;
	static uint64_t x3420 = UINT64_MAX;
	volatile uint64_t t45 = 456192207LLU;

	t45 = ((x3417<<x3418)+(x3419+x3420));

	if (t45 != 45016862LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x3450 = 3;
	uint8_t x3451 = 1U;
	volatile uint64_t t46 = 12550LLU;

	t46 = ((x3449<<x3450)+(x3451+x3452));

	if (t46 != 6176558680523690LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x3505 = UINT64_MAX;
	uint8_t x3506 = 0U;
	uint8_t x3507 = UINT8_MAX;
	int8_t x3508 = -1;
	static volatile uint64_t t47 = 1046262779940773LLU;

	t47 = ((x3505<<x3506)+(x3507+x3508));

	if (t47 != 253LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x3814 = 2;
	int16_t x3815 = INT16_MIN;
	volatile int64_t x3816 = -1LL;
	static volatile int64_t t48 = 1077677195395855LL;

	t48 = ((x3813<<x3814)+(x3815+x3816));

	if (t48 != 4294934523LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x3833 = INT16_MAX;
	uint16_t x3834 = 0U;
	int64_t x3835 = INT64_MIN;

	t49 = ((x3833<<x3834)+(x3835+x3836));

	if (t49 != -9223372036854741304LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x3841 = 369103U;
	uint64_t x3843 = UINT64_MAX;
	volatile int64_t x3844 = INT64_MIN;
	static uint64_t t50 = 1371401202LLU;

	t50 = ((x3841<<x3842)+(x3843+x3844));

	if (t50 != 9223372036855514013LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x3853 = INT16_MAX;
	uint16_t x3854 = 1U;
	volatile uint64_t x3855 = UINT64_MAX;

	t51 = ((x3853<<x3854)+(x3855+x3856));

	if (t51 != 65405LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x3897 = 10424595LL;
	static int8_t x3898 = 9;
	uint32_t x3899 = 74358U;
	static int16_t x3900 = INT16_MIN;

	t52 = ((x3897<<x3898)+(x3899+x3900));

	if (t52 != 5337434230LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x3965 = INT16_MAX;
	uint8_t x3967 = UINT8_MAX;
	static int32_t x3968 = INT32_MIN;
	int32_t t53 = 160659;

	t53 = ((x3965<<x3966)+(x3967+x3968));

	if (t53 != -2147352325) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x4030 = 24U;
	uint64_t x4031 = 32183139LLU;
	static int8_t x4032 = INT8_MAX;
	volatile uint64_t t54 = 11623654329LLU;

	t54 = ((x4029<<x4030)+(x4031+x4032));

	if (t54 != 116069346LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x4097 = UINT8_MAX;
	int8_t x4098 = 1;
	static uint8_t x4099 = 9U;
	static uint16_t x4100 = 2U;
	int32_t t55 = -3;

	t55 = ((x4097<<x4098)+(x4099+x4100));

	if (t55 != 521) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x4169 = 1966898316567932LLU;
	volatile uint64_t x4170 = 0LLU;
	static volatile int32_t x4171 = INT32_MIN;
	volatile uint64_t t56 = 4023LLU;

	t56 = ((x4169<<x4170)+(x4171+x4172));

	if (t56 != 1966896169084291LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x4189 = 974723LLU;
	int64_t x4192 = -5402229143LL;
	volatile uint64_t t57 = 1497LLU;

	t57 = ((x4189<<x4190)+(x4191+x4192));

	if (t57 != 9439544813566330473LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x4225 = 117586348891LL;
	uint32_t x4226 = 0U;
	static int32_t x4227 = INT32_MIN;
	static volatile uint16_t x4228 = UINT16_MAX;
	int64_t t58 = -3488576970472091LL;

	t58 = ((x4225<<x4226)+(x4227+x4228));

	if (t58 != 115438930778LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x4297 = 1639;
	uint8_t x4298 = 3U;
	int16_t x4299 = INT16_MIN;
	static int32_t x4300 = -1;
	static volatile int32_t t59 = 0;

	t59 = ((x4297<<x4298)+(x4299+x4300));

	if (t59 != -19657) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x4470 = 6LLU;
	int16_t x4471 = INT16_MIN;
	volatile int16_t x4472 = INT16_MAX;
	uint32_t t60 = 8U;

	t60 = ((x4469<<x4470)+(x4471+x4472));

	if (t60 != 2810367551U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x4495 = INT16_MIN;
	int16_t x4496 = -1;
	uint64_t t61 = 5070471934LLU;

	t61 = ((x4493<<x4494)+(x4495+x4496));

	if (t61 != 843527246079999LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x4566 = 6;
	int8_t x4567 = INT8_MIN;
	int8_t x4568 = INT8_MAX;
	static int32_t t62 = 0;

	t62 = ((x4565<<x4566)+(x4567+x4568));

	if (t62 != 63) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x4581 = 3U;
	int16_t x4583 = -1;
	static volatile int32_t t63 = -66998;

	t63 = ((x4581<<x4582)+(x4583+x4584));

	if (t63 != 132) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x4629 = INT8_MAX;
	static uint16_t x4630 = 5U;
	static uint64_t x4631 = UINT64_MAX;
	int32_t x4632 = INT32_MAX;
	uint64_t t64 = 1098239272LLU;

	t64 = ((x4629<<x4630)+(x4631+x4632));

	if (t64 != 2147487710LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x4745 = 1927U;
	static int32_t x4746 = 1;
	uint32_t x4747 = 968U;

	t65 = ((x4745<<x4746)+(x4747+x4748));

	if (t65 != 4836U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x4817 = INT8_MAX;
	int64_t x4819 = -3229747219514347LL;
	uint32_t x4820 = 1295U;
	volatile int64_t t66 = -4167612027663155544LL;

	t66 = ((x4817<<x4818)+(x4819+x4820));

	if (t66 != -3229747152928476LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x4894 = 9;
	volatile int16_t x4895 = INT16_MAX;
	int64_t x4896 = -6507301887LL;
	int64_t t67 = -5630144344304536LL;

	t67 = ((x4893<<x4894)+(x4895+x4896));

	if (t67 != -6507267584LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x5061 = UINT64_MAX;
	int8_t x5062 = 1;
	uint8_t x5063 = 28U;
	uint64_t t68 = 98LLU;

	t68 = ((x5061<<x5062)+(x5063+x5064));

	if (t68 != 38LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x5105 = UINT8_MAX;
	static int8_t x5106 = 0;
	volatile int16_t x5107 = -1;
	uint8_t x5108 = 1U;
	volatile int32_t t69 = -3290;

	t69 = ((x5105<<x5106)+(x5107+x5108));

	if (t69 != 255) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x5130 = 0U;
	int32_t x5131 = 362695;
	static volatile int64_t t70 = -10510789970LL;

	t70 = ((x5129<<x5130)+(x5131+x5132));

	if (t70 != 794998962LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x5253 = INT16_MAX;
	int8_t x5255 = INT8_MIN;
	volatile int32_t t71 = 1;

	t71 = ((x5253<<x5254)+(x5255+x5256));

	if (t71 != 2097087) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x5277 = 102596;
	volatile int64_t x5278 = 0LL;
	int64_t x5279 = -263979843010LL;
	uint32_t x5280 = UINT32_MAX;

	t72 = ((x5277<<x5278)+(x5279+x5280));

	if (t72 != -259684773119LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x5285 = 29U;
	uint16_t x5286 = 23U;
	static int32_t x5287 = INT32_MIN;
	int16_t x5288 = INT16_MAX;

	t73 = ((x5285<<x5286)+(x5287+x5288));

	if (t73 != -1904181249) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x5345 = 378969037052116LLU;
	static volatile int8_t x5347 = -1;
	static uint32_t x5348 = 3899544U;
	volatile uint64_t t74 = 57207280986LLU;

	t74 = ((x5345<<x5346)+(x5347+x5348));

	if (t74 != 776128587886633111LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x5353 = UINT16_MAX;
	uint16_t x5354 = 4U;
	int32_t x5355 = INT32_MIN;
	volatile int8_t x5356 = 1;

	t75 = ((x5353<<x5354)+(x5355+x5356));

	if (t75 != -2146435087) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x5457 = 2632U;
	uint8_t x5458 = 0U;
	uint64_t x5459 = 1926LLU;
	volatile int64_t x5460 = INT64_MIN;
	uint64_t t76 = 129239031308LLU;

	t76 = ((x5457<<x5458)+(x5459+x5460));

	if (t76 != 9223372036854780366LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x5509 = 0;
	uint16_t x5510 = 1U;
	int16_t x5511 = INT16_MIN;
	int8_t x5512 = -1;
	volatile int32_t t77 = 13;

	t77 = ((x5509<<x5510)+(x5511+x5512));

	if (t77 != -32769) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x5585 = INT64_MAX;
	static int64_t x5586 = 0LL;
	int32_t x5587 = INT32_MAX;
	static volatile int64_t t78 = 3LL;

	t78 = ((x5585<<x5586)+(x5587+x5588));

	if (t78 != 2147483646LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x5605 = 10;
	int64_t x5606 = 5LL;
	volatile int16_t x5608 = INT16_MAX;
	static volatile uint64_t t79 = 194945160204039190LLU;

	t79 = ((x5605<<x5606)+(x5607+x5608));

	if (t79 != 33117LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x5649 = 122482634U;
	volatile uint32_t x5650 = 2U;
	uint32_t t80 = 811U;

	t80 = ((x5649<<x5650)+(x5651+x5652));

	if (t80 != 489930561U) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint8_t x5962 = 1U;
	static int32_t x5963 = 0;
	int8_t x5964 = INT8_MIN;
	static volatile uint32_t t81 = 555347U;

	t81 = ((x5961<<x5962)+(x5963+x5964));

	if (t81 != 4294967196U) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x6061 = 74;
	static int16_t x6062 = 2;
	uint8_t x6064 = 1U;
	volatile int32_t t82 = 5035;

	t82 = ((x6061<<x6062)+(x6063+x6064));

	if (t82 != 33064) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x6137 = 13580;
	uint8_t x6138 = 7U;
	volatile uint8_t x6139 = UINT8_MAX;
	uint8_t x6140 = 0U;
	int32_t t83 = -30856;

	t83 = ((x6137<<x6138)+(x6139+x6140));

	if (t83 != 1738495) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x6289 = 231;
	uint8_t x6290 = 18U;
	int16_t x6291 = -381;
	int8_t x6292 = INT8_MAX;
	int32_t t84 = 3;

	t84 = ((x6289<<x6290)+(x6291+x6292));

	if (t84 != 60555010) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x6405 = 41U;
	uint16_t x6406 = 3U;
	volatile uint64_t t85 = 14188567383701773LLU;

	t85 = ((x6405<<x6406)+(x6407+x6408));

	if (t85 != 473LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x6452 = -1;

	t86 = ((x6449<<x6450)+(x6451+x6452));

	if (t86 != 3768778878U) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x6581 = UINT16_MAX;
	uint32_t x6582 = 2U;
	uint32_t x6583 = 15583543U;
	int16_t x6584 = -81;

	t87 = ((x6581<<x6582)+(x6583+x6584));

	if (t87 != 15845602U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x6637 = 6995LLU;
	int8_t x6638 = 2;
	int16_t x6639 = 14;
	uint64_t x6640 = UINT64_MAX;
	static volatile uint64_t t88 = 883657190550858079LLU;

	t88 = ((x6637<<x6638)+(x6639+x6640));

	if (t88 != 27993LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x6721 = 2;
	uint16_t x6722 = 3U;
	static volatile uint8_t x6723 = 61U;
	int64_t x6724 = INT64_MIN;
	static int64_t t89 = 13040111LL;

	t89 = ((x6721<<x6722)+(x6723+x6724));

	if (t89 != -9223372036854775731LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x6813 = 62983102U;
	int8_t x6814 = 2;
	uint64_t x6815 = UINT64_MAX;
	int32_t x6816 = 36097;
	volatile uint64_t t90 = 8923211698635302930LLU;

	t90 = ((x6813<<x6814)+(x6815+x6816));

	if (t90 != 251968504LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x6877 = UINT16_MAX;
	volatile int8_t x6880 = INT8_MIN;
	int32_t t91 = -1;

	t91 = ((x6877<<x6878)+(x6879+x6880));

	if (t91 != 268431487) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x6906 = 1;
	int32_t x6907 = -1;
	int32_t x6908 = -1;
	int32_t t92 = -15453;

	t92 = ((x6905<<x6906)+(x6907+x6908));

	if (t92 != 252) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x7078 = 3U;
	static int32_t x7079 = INT32_MIN;
	uint32_t x7080 = UINT32_MAX;
	uint64_t t93 = 267793661734975846LLU;

	t93 = ((x7077<<x7078)+(x7079+x7080));

	if (t93 != 9710375063LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x7253 = 601;
	uint16_t x7254 = 0U;
	static uint8_t x7255 = UINT8_MAX;
	static int8_t x7256 = 2;
	static volatile int32_t t94 = -602495;

	t94 = ((x7253<<x7254)+(x7255+x7256));

	if (t94 != 858) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x7273 = UINT16_MAX;
	static uint8_t x7274 = 1U;
	static uint64_t x7275 = 9752LLU;
	uint64_t t95 = 22755958368LLU;

	t95 = ((x7273<<x7274)+(x7275+x7276));

	if (t95 != 141077LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x7285 = UINT32_MAX;
	int8_t x7286 = 6;
	int64_t x7287 = -4808460249LL;
	int32_t x7288 = INT32_MAX;
	int64_t t96 = 0LL;

	t96 = ((x7285<<x7286)+(x7287+x7288));

	if (t96 != 1633990630LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x7329 = UINT32_MAX;
	uint32_t x7330 = 3U;
	static uint64_t x7331 = 610896426835788176LLU;
	int64_t x7332 = INT64_MIN;
	volatile uint64_t t97 = 7226486LLU;

	t97 = ((x7329<<x7330)+(x7331+x7332));

	if (t97 != 9834268467985531272LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x7416 = 0;
	volatile int32_t t98 = 3298;

	t98 = ((x7413<<x7414)+(x7415+x7416));

	if (t98 != 382) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x7429 = 2028U;
	static int32_t x7430 = 1;
	uint64_t x7431 = UINT64_MAX;
	volatile int64_t x7432 = -313628016LL;
	uint64_t t99 = 9254269903467LLU;

	t99 = ((x7429<<x7430)+(x7431+x7432));

	if (t99 != 18446744073395927655LLU) { NG(); } else { ; }
	
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

