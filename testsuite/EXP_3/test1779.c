#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x16 = 63484486LL;
int64_t t1 = -604455321297321199LL;
static uint16_t x74 = 0U;
volatile int16_t x75 = -32;
int8_t x205 = 4;
static int8_t x421 = 0;
static volatile uint8_t x482 = 31U;
int8_t x564 = INT8_MIN;
uint8_t x733 = 2U;
int32_t x736 = -1;
uint32_t x765 = 12864315U;
uint32_t x835 = UINT32_MAX;
volatile int8_t x854 = 13;
uint8_t x855 = 13U;
static int32_t x891 = 0;
uint16_t x892 = 162U;
volatile int32_t t16 = 8133;
uint64_t x920 = UINT64_MAX;
static volatile uint64_t x937 = 798421679540347LLU;
volatile uint64_t t18 = 449118721333824LLU;
int16_t x1079 = -1;
static uint32_t x1166 = 20U;
int64_t x1168 = INT64_MIN;
static int64_t t23 = -14LL;
uint16_t x1232 = 0U;
volatile int64_t t25 = -3LL;
int16_t x1308 = -4;
volatile uint16_t x1369 = 1826U;
volatile uint32_t t27 = 1U;
uint16_t x1686 = 16U;
volatile int64_t x1688 = -59771670958LL;
volatile uint8_t x1766 = 5U;
int8_t x2148 = INT8_MIN;
volatile int16_t x2236 = -1;
volatile uint32_t x2298 = 1U;
uint64_t t38 = 424972436465LLU;
volatile uint8_t x2442 = 24U;
int32_t x2443 = 46;
int8_t x2593 = 54;
uint32_t x2635 = UINT32_MAX;
int32_t x2636 = -332285427;
volatile uint8_t x2670 = 21U;
uint32_t x2737 = UINT32_MAX;
static uint32_t t46 = 91U;
int16_t x2924 = INT16_MIN;
int32_t x2939 = INT32_MAX;
static int64_t x3017 = 4030150989LL;
static volatile uint64_t x3039 = 843LLU;
int64_t x3068 = INT64_MIN;
static uint64_t t52 = 420276324LLU;
volatile int16_t x3271 = 1129;
uint32_t x3354 = 30U;
volatile int16_t x3635 = INT16_MIN;
uint32_t x3649 = UINT32_MAX;
uint8_t x3650 = 28U;
volatile int16_t x3719 = -7;
static int16_t x3720 = INT16_MIN;
static uint16_t x3818 = 1U;
static int32_t x3820 = 482933;
volatile uint32_t x3845 = 2214548U;
int32_t x3847 = INT32_MIN;
volatile uint16_t x3848 = 7868U;
volatile uint32_t t63 = 2539U;
uint64_t x3853 = 10950562LLU;
int32_t x3856 = INT32_MAX;
uint64_t t64 = 359LLU;
static volatile uint8_t x4018 = 16U;
static int8_t x4317 = 58;
int32_t x4561 = INT32_MAX;
int16_t x4644 = INT16_MIN;
int64_t x4790 = 0LL;
int64_t t74 = 140091LL;
int8_t x4848 = INT8_MAX;
static uint32_t x4899 = 1669779726U;
volatile uint16_t x5172 = UINT16_MAX;
volatile int64_t t79 = -5692747284019LL;
int16_t x5195 = INT16_MIN;
int32_t x5212 = -2623099;
static uint16_t x5238 = 1U;
volatile int8_t x5239 = -3;
volatile int32_t t83 = -47323;
uint32_t x5315 = 80U;
volatile int32_t x5356 = 718667946;
static uint32_t x5370 = 23U;
static int32_t t87 = 78;
volatile uint64_t t92 = 8453105280154LLU;
uint8_t x5910 = 6U;
uint32_t t93 = 1438780U;
uint8_t x5954 = 5U;
static volatile int64_t t94 = -70442548LL;
uint32_t x6177 = 1U;
int8_t x6192 = INT8_MIN;
static int64_t x6259 = INT64_MIN;
int16_t x6331 = INT16_MIN;
int16_t x6489 = INT16_MAX;


void f0(void) {
	uint16_t x13 = 210U;
	int8_t x14 = 1;
	uint32_t x15 = 151U;
	int64_t t0 = -7403LL;

	t0 = ((x13>>x14)&(x15&x16));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint8_t x41 = 20U;
	uint8_t x42 = 10U;
	volatile int8_t x43 = 9;
	volatile int64_t x44 = 41408208640808457LL;

	t1 = ((x41>>x42)&(x43&x44));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x73 = UINT32_MAX;
	uint16_t x76 = UINT16_MAX;
	uint32_t t2 = 4036U;

	t2 = ((x73>>x74)&(x75&x76));

	if (t2 != 65504U) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x206 = 0;
	int64_t x207 = -1LL;
	static int8_t x208 = INT8_MAX;
	volatile int64_t t3 = -1037068569768114418LL;

	t3 = ((x205>>x206)&(x207&x208));

	if (t3 != 4LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint32_t x245 = UINT32_MAX;
	uint8_t x246 = 3U;
	volatile int32_t x247 = -160;
	int8_t x248 = 56;
	volatile uint32_t t4 = 1013976042U;

	t4 = ((x245>>x246)&(x247&x248));

	if (t4 != 32U) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x305 = UINT32_MAX;
	volatile uint8_t x306 = 6U;
	int64_t x307 = INT64_MIN;
	uint8_t x308 = UINT8_MAX;
	static int64_t t5 = 11567902LL;

	t5 = ((x305>>x306)&(x307&x308));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x422 = 17;
	uint16_t x423 = UINT16_MAX;
	int64_t x424 = INT64_MIN;
	int64_t t6 = -18889446LL;

	t6 = ((x421>>x422)&(x423&x424));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x477 = 0;
	volatile uint32_t x478 = 3U;
	int64_t x479 = INT64_MAX;
	uint8_t x480 = 30U;
	static int64_t t7 = 1467752124271LL;

	t7 = ((x477>>x478)&(x479&x480));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x481 = INT8_MAX;
	int64_t x483 = INT64_MIN;
	int16_t x484 = INT16_MIN;
	int64_t t8 = 15114LL;

	t8 = ((x481>>x482)&(x483&x484));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x561 = 9612888764261LLU;
	volatile int8_t x562 = 1;
	static volatile uint64_t x563 = 7LLU;
	volatile uint64_t t9 = 89LLU;

	t9 = ((x561>>x562)&(x563&x564));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x677 = INT16_MAX;
	uint16_t x678 = 31U;
	uint64_t x679 = 625LLU;
	uint32_t x680 = 395U;
	volatile uint64_t t10 = 5881275109339992424LLU;

	t10 = ((x677>>x678)&(x679&x680));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x693 = 133LLU;
	int8_t x694 = 0;
	int16_t x695 = INT16_MAX;
	static int16_t x696 = -217;
	volatile uint64_t t11 = 31203365333LLU;

	t11 = ((x693>>x694)&(x695&x696));

	if (t11 != 5LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x734 = 22;
	volatile int32_t x735 = INT32_MIN;
	volatile int32_t t12 = -748593;

	t12 = ((x733>>x734)&(x735&x736));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x766 = 2U;
	static int64_t x767 = -8703133971425071LL;
	int16_t x768 = -1;
	volatile int64_t t13 = 248843568246364LL;

	t13 = ((x765>>x766)&(x767&x768));

	if (t13 != 3215552LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x833 = 102U;
	uint16_t x834 = 0U;
	int64_t x836 = INT64_MIN;
	volatile int64_t t14 = -133497133574257763LL;

	t14 = ((x833>>x834)&(x835&x836));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x853 = INT16_MAX;
	int32_t x856 = 45248001;
	int32_t t15 = 4;

	t15 = ((x853>>x854)&(x855&x856));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x889 = 8;
	int8_t x890 = 19;

	t16 = ((x889>>x890)&(x891&x892));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x917 = 6518410;
	uint16_t x918 = 4U;
	static volatile int32_t x919 = -17600;
	volatile uint64_t t17 = 6LLU;

	t17 = ((x917>>x918)&(x919&x920));

	if (t17 != 406336LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x938 = 17U;
	static int16_t x939 = 0;
	volatile int8_t x940 = -2;

	t18 = ((x937>>x938)&(x939&x940));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x941 = 444LLU;
	static int16_t x942 = 0;
	int64_t x943 = INT64_MIN;
	uint8_t x944 = UINT8_MAX;
	volatile uint64_t t19 = 4220733670008LLU;

	t19 = ((x941>>x942)&(x943&x944));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x957 = INT64_MAX;
	uint8_t x958 = 23U;
	volatile int64_t x959 = 32729LL;
	volatile int16_t x960 = -1;
	volatile int64_t t20 = -2964387664454LL;

	t20 = ((x957>>x958)&(x959&x960));

	if (t20 != 32729LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x1077 = 1917U;
	uint8_t x1078 = 0U;
	static int64_t x1080 = 354520431522LL;
	volatile int64_t t21 = -32486731308405531LL;

	t21 = ((x1077>>x1078)&(x1079&x1080));

	if (t21 != 800LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1157 = UINT64_MAX;
	uint16_t x1158 = 24U;
	int16_t x1159 = INT16_MIN;
	int64_t x1160 = -892282LL;
	volatile uint64_t t22 = 81281937953145LLU;

	t22 = ((x1157>>x1158)&(x1159&x1160));

	if (t22 != 1099510710272LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x1165 = 4U;
	uint8_t x1167 = UINT8_MAX;

	t23 = ((x1165>>x1166)&(x1167&x1168));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1221 = 156;
	static int8_t x1222 = 0;
	volatile int8_t x1223 = 22;
	int8_t x1224 = INT8_MIN;
	static volatile int32_t t24 = 41699;

	t24 = ((x1221>>x1222)&(x1223&x1224));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1229 = 30937240765005353LL;
	int8_t x1230 = 0;
	int32_t x1231 = INT32_MIN;

	t25 = ((x1229>>x1230)&(x1231&x1232));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1305 = 118520373;
	int8_t x1306 = 7;
	static int64_t x1307 = -1LL;
	static volatile int64_t t26 = -107318342747990LL;

	t26 = ((x1305>>x1306)&(x1307&x1308));

	if (t26 != 925940LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x1370 = 0;
	volatile uint32_t x1371 = 964U;
	int16_t x1372 = -446;

	t27 = ((x1369>>x1370)&(x1371&x1372));

	if (t27 != 512U) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x1685 = 1899807643413517LLU;
	static uint32_t x1687 = UINT32_MAX;
	static volatile uint64_t t28 = 74938501896603LLU;

	t28 = ((x1685>>x1686)&(x1687&x1688));

	if (t28 != 357838354LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1705 = 5;
	uint16_t x1706 = 7U;
	volatile int32_t x1707 = -1;
	int8_t x1708 = INT8_MAX;
	static volatile int32_t t29 = 25;

	t29 = ((x1705>>x1706)&(x1707&x1708));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1737 = 0;
	volatile int8_t x1738 = 1;
	volatile int8_t x1739 = INT8_MAX;
	uint64_t x1740 = 1965262LLU;
	static uint64_t t30 = 2518207124774025676LLU;

	t30 = ((x1737>>x1738)&(x1739&x1740));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x1765 = UINT64_MAX;
	volatile uint32_t x1767 = 0U;
	int64_t x1768 = -443834LL;
	uint64_t t31 = 3918183LLU;

	t31 = ((x1765>>x1766)&(x1767&x1768));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1833 = 8;
	int8_t x1834 = 1;
	int16_t x1835 = -9;
	static uint64_t x1836 = 10686296602727102LLU;
	static uint64_t t32 = 14547LLU;

	t32 = ((x1833>>x1834)&(x1835&x1836));

	if (t32 != 4LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x1905 = 7U;
	int16_t x1906 = 0;
	uint8_t x1907 = 5U;
	volatile uint64_t x1908 = UINT64_MAX;
	uint64_t t33 = 26021732312694436LLU;

	t33 = ((x1905>>x1906)&(x1907&x1908));

	if (t33 != 5LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x2065 = 502980757100923LLU;
	volatile uint16_t x2066 = 19U;
	static int32_t x2067 = INT32_MIN;
	volatile int16_t x2068 = 13949;
	static volatile uint64_t t34 = 28867965LLU;

	t34 = ((x2065>>x2066)&(x2067&x2068));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x2081 = 10311U;
	uint8_t x2082 = 29U;
	int8_t x2083 = -1;
	volatile int16_t x2084 = 11314;
	int32_t t35 = 271241830;

	t35 = ((x2081>>x2082)&(x2083&x2084));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x2145 = INT32_MAX;
	int8_t x2146 = 1;
	int8_t x2147 = -1;
	volatile int32_t t36 = -4;

	t36 = ((x2145>>x2146)&(x2147&x2148));

	if (t36 != 1073741696) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x2233 = 209000U;
	uint16_t x2234 = 7U;
	volatile uint32_t x2235 = 2627284U;
	volatile uint32_t t37 = 1976U;

	t37 = ((x2233>>x2234)&(x2235&x2236));

	if (t37 != 1600U) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x2297 = 1964934927120LLU;
	int16_t x2299 = INT16_MAX;
	int64_t x2300 = INT64_MIN;

	t38 = ((x2297>>x2298)&(x2299&x2300));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint8_t x2441 = 1U;
	int8_t x2444 = -1;
	volatile int32_t t39 = 135;

	t39 = ((x2441>>x2442)&(x2443&x2444));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x2545 = 297729U;
	uint32_t x2546 = 24U;
	int32_t x2547 = 33;
	volatile int16_t x2548 = 1;
	uint32_t t40 = 3060427U;

	t40 = ((x2545>>x2546)&(x2547&x2548));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x2589 = 96U;
	volatile uint8_t x2590 = 2U;
	uint16_t x2591 = UINT16_MAX;
	int16_t x2592 = 1;
	volatile int32_t t41 = 3494426;

	t41 = ((x2589>>x2590)&(x2591&x2592));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x2594 = 3U;
	static uint64_t x2595 = 2215908210018850518LLU;
	uint64_t x2596 = 326LLU;
	static uint64_t t42 = 97209469LLU;

	t42 = ((x2593>>x2594)&(x2595&x2596));

	if (t42 != 6LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x2633 = 83U;
	uint8_t x2634 = 0U;
	volatile uint32_t t43 = 37228U;

	t43 = ((x2633>>x2634)&(x2635&x2636));

	if (t43 != 1U) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x2669 = 5U;
	int8_t x2671 = -1;
	static int32_t x2672 = INT32_MAX;
	int32_t t44 = -2282708;

	t44 = ((x2669>>x2670)&(x2671&x2672));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x2693 = 248662453;
	uint32_t x2694 = 14U;
	uint16_t x2695 = 28399U;
	static int64_t x2696 = INT64_MIN;
	int64_t t45 = 1676498562LL;

	t45 = ((x2693>>x2694)&(x2695&x2696));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x2738 = 7U;
	int32_t x2739 = INT32_MAX;
	uint8_t x2740 = 6U;

	t46 = ((x2737>>x2738)&(x2739&x2740));

	if (t46 != 6U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x2745 = INT16_MAX;
	volatile int32_t x2746 = 9;
	uint16_t x2747 = UINT16_MAX;
	static int16_t x2748 = -118;
	volatile int32_t t47 = -490;

	t47 = ((x2745>>x2746)&(x2747&x2748));

	if (t47 != 10) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x2921 = UINT64_MAX;
	int32_t x2922 = 4;
	int32_t x2923 = -921290585;
	volatile uint64_t t48 = 55903LLU;

	t48 = ((x2921>>x2922)&(x2923&x2924));

	if (t48 != 1152921503685541888LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x2937 = 6045U;
	uint32_t x2938 = 0U;
	int32_t x2940 = INT32_MIN;
	int32_t t49 = 26792;

	t49 = ((x2937>>x2938)&(x2939&x2940));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x3018 = 1U;
	uint64_t x3019 = 3634384314395340LLU;
	int64_t x3020 = INT64_MAX;
	volatile uint64_t t50 = 4368934715785321LLU;

	t50 = ((x3017>>x3018)&(x3019&x3020));

	if (t50 != 134809732LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x3037 = 867;
	static uint8_t x3038 = 1U;
	uint32_t x3040 = UINT32_MAX;
	static volatile uint64_t t51 = 228336288531LLU;

	t51 = ((x3037>>x3038)&(x3039&x3040));

	if (t51 != 257LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x3065 = 20;
	volatile uint8_t x3066 = 12U;
	uint64_t x3067 = UINT64_MAX;

	t52 = ((x3065>>x3066)&(x3067&x3068));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x3101 = INT16_MAX;
	static volatile uint8_t x3102 = 1U;
	uint32_t x3103 = 13460U;
	int32_t x3104 = -1940;
	uint32_t t53 = 407051109U;

	t53 = ((x3101>>x3102)&(x3103&x3104));

	if (t53 != 12292U) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint16_t x3189 = 7U;
	int8_t x3190 = 0;
	int32_t x3191 = INT32_MAX;
	static int8_t x3192 = 1;
	volatile int32_t t54 = -22;

	t54 = ((x3189>>x3190)&(x3191&x3192));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x3209 = 1;
	uint8_t x3210 = 5U;
	static int64_t x3211 = -81322879448398261LL;
	int32_t x3212 = 467172096;
	int64_t t55 = 7163105802LL;

	t55 = ((x3209>>x3210)&(x3211&x3212));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x3269 = INT8_MAX;
	static uint16_t x3270 = 7U;
	int32_t x3272 = INT32_MAX;
	static volatile int32_t t56 = 444;

	t56 = ((x3269>>x3270)&(x3271&x3272));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint64_t x3353 = 675182LLU;
	int8_t x3355 = INT8_MIN;
	volatile int64_t x3356 = INT64_MIN;
	static uint64_t t57 = 478585LLU;

	t57 = ((x3353>>x3354)&(x3355&x3356));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x3589 = 1390442305060179251LLU;
	uint8_t x3590 = 8U;
	uint16_t x3591 = 5U;
	int64_t x3592 = INT64_MIN;
	uint64_t t58 = 1124655876733904687LLU;

	t58 = ((x3589>>x3590)&(x3591&x3592));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint32_t x3633 = 426U;
	uint16_t x3634 = 0U;
	volatile int32_t x3636 = INT32_MAX;
	volatile uint32_t t59 = 7978U;

	t59 = ((x3633>>x3634)&(x3635&x3636));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x3651 = UINT64_MAX;
	uint8_t x3652 = UINT8_MAX;
	uint64_t t60 = 11290445LLU;

	t60 = ((x3649>>x3650)&(x3651&x3652));

	if (t60 != 15LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x3717 = 1U;
	uint8_t x3718 = 5U;
	volatile int32_t t61 = -303811455;

	t61 = ((x3717>>x3718)&(x3719&x3720));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x3817 = 3705U;
	uint8_t x3819 = 8U;
	volatile int32_t t62 = -103079684;

	t62 = ((x3817>>x3818)&(x3819&x3820));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x3846 = 6;

	t63 = ((x3845>>x3846)&(x3847&x3848));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x3854 = 5U;
	int32_t x3855 = 8362718;

	t64 = ((x3853>>x3854)&(x3855&x3856));

	if (t64 != 333980LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x4017 = 29LLU;
	int8_t x4019 = -1;
	uint32_t x4020 = 2U;
	volatile uint64_t t65 = 56070444096627826LLU;

	t65 = ((x4017>>x4018)&(x4019&x4020));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x4081 = 106427460016492114LL;
	uint8_t x4082 = 28U;
	uint64_t x4083 = 3793019341205LLU;
	int16_t x4084 = INT16_MAX;
	static uint64_t t66 = 195867689364LLU;

	t66 = ((x4081>>x4082)&(x4083&x4084));

	if (t66 != 256LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x4318 = 6U;
	static volatile int32_t x4319 = 0;
	static int64_t x4320 = INT64_MIN;
	static volatile int64_t t67 = -13555780684LL;

	t67 = ((x4317>>x4318)&(x4319&x4320));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x4389 = UINT32_MAX;
	static uint8_t x4390 = 6U;
	int64_t x4391 = INT64_MIN;
	volatile int64_t x4392 = INT64_MIN;
	int64_t t68 = -22158404166LL;

	t68 = ((x4389>>x4390)&(x4391&x4392));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x4433 = UINT64_MAX;
	static volatile uint16_t x4434 = 51U;
	int64_t x4435 = 1046507271LL;
	uint16_t x4436 = 18U;
	uint64_t t69 = 284LLU;

	t69 = ((x4433>>x4434)&(x4435&x4436));

	if (t69 != 2LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x4562 = 0U;
	static int64_t x4563 = INT64_MIN;
	static uint8_t x4564 = 1U;
	volatile int64_t t70 = -7225LL;

	t70 = ((x4561>>x4562)&(x4563&x4564));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint64_t x4609 = 468578169519113719LLU;
	uint8_t x4610 = 31U;
	int8_t x4611 = INT8_MIN;
	int16_t x4612 = -1;
	uint64_t t71 = 1771LLU;

	t71 = ((x4609>>x4610)&(x4611&x4612));

	if (t71 != 218198656LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x4641 = 679;
	static uint8_t x4642 = 11U;
	int64_t x4643 = INT64_MAX;
	volatile int64_t t72 = 1109LL;

	t72 = ((x4641>>x4642)&(x4643&x4644));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x4789 = INT16_MAX;
	static int32_t x4791 = -37781;
	static uint64_t x4792 = 11LLU;
	static uint64_t t73 = 1LLU;

	t73 = ((x4789>>x4790)&(x4791&x4792));

	if (t73 != 11LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x4817 = 13U;
	uint8_t x4818 = 11U;
	int64_t x4819 = -1LL;
	uint16_t x4820 = 179U;

	t74 = ((x4817>>x4818)&(x4819&x4820));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x4845 = 23;
	uint16_t x4846 = 14U;
	int32_t x4847 = -1;
	static int32_t t75 = -15;

	t75 = ((x4845>>x4846)&(x4847&x4848));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x4897 = 9543340U;
	uint8_t x4898 = 28U;
	static int8_t x4900 = INT8_MIN;
	static uint32_t t76 = 29271U;

	t76 = ((x4897>>x4898)&(x4899&x4900));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x5025 = 0U;
	uint32_t x5026 = 6U;
	static uint64_t x5027 = UINT64_MAX;
	volatile int32_t x5028 = -1;
	uint64_t t77 = 480495924372855LLU;

	t77 = ((x5025>>x5026)&(x5027&x5028));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x5105 = INT16_MAX;
	uint16_t x5106 = 2U;
	int64_t x5107 = -1LL;
	int16_t x5108 = -1;
	volatile int64_t t78 = -91319056844515900LL;

	t78 = ((x5105>>x5106)&(x5107&x5108));

	if (t78 != 8191LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x5169 = INT64_MAX;
	volatile uint8_t x5170 = 7U;
	uint8_t x5171 = 3U;

	t79 = ((x5169>>x5170)&(x5171&x5172));

	if (t79 != 3LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x5193 = INT32_MAX;
	uint16_t x5194 = 22U;
	volatile uint16_t x5196 = UINT16_MAX;
	int32_t t80 = 87957;

	t80 = ((x5193>>x5194)&(x5195&x5196));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x5209 = UINT8_MAX;
	volatile uint8_t x5210 = 1U;
	static uint64_t x5211 = 387507160272352684LLU;
	static uint64_t t81 = 118023915610578041LLU;

	t81 = ((x5209>>x5210)&(x5211&x5212));

	if (t81 != 4LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x5233 = UINT64_MAX;
	int8_t x5234 = 3;
	static int64_t x5235 = INT64_MIN;
	static uint16_t x5236 = UINT16_MAX;
	uint64_t t82 = 17506563LLU;

	t82 = ((x5233>>x5234)&(x5235&x5236));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x5237 = 500774132;
	int32_t x5240 = INT32_MAX;

	t83 = ((x5237>>x5238)&(x5239&x5240));

	if (t83 != 250387064) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x5313 = 6U;
	uint16_t x5314 = 4U;
	uint8_t x5316 = 64U;
	uint32_t t84 = 97918396U;

	t84 = ((x5313>>x5314)&(x5315&x5316));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x5353 = UINT8_MAX;
	volatile int16_t x5354 = 24;
	int32_t x5355 = -87847381;
	int32_t t85 = -43595972;

	t85 = ((x5353>>x5354)&(x5355&x5356));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x5369 = 49U;
	static int64_t x5371 = -1LL;
	uint16_t x5372 = 679U;
	static int64_t t86 = 9914176857534930LL;

	t86 = ((x5369>>x5370)&(x5371&x5372));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint8_t x5473 = UINT8_MAX;
	uint32_t x5474 = 18U;
	static int32_t x5475 = -1;
	static int32_t x5476 = INT32_MIN;

	t87 = ((x5473>>x5474)&(x5475&x5476));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x5545 = 4;
	uint32_t x5546 = 11U;
	int32_t x5547 = 2064;
	int64_t x5548 = INT64_MAX;
	volatile int64_t t88 = 193412247LL;

	t88 = ((x5545>>x5546)&(x5547&x5548));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x5613 = 21158206266LLU;
	static uint8_t x5614 = 46U;
	int64_t x5615 = -1LL;
	volatile uint32_t x5616 = 1U;
	uint64_t t89 = 1732305700686LLU;

	t89 = ((x5613>>x5614)&(x5615&x5616));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x5661 = 0;
	uint8_t x5662 = 1U;
	int8_t x5663 = INT8_MIN;
	int16_t x5664 = INT16_MIN;
	volatile int32_t t90 = 1831;

	t90 = ((x5661>>x5662)&(x5663&x5664));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint64_t x5737 = 16633687151LLU;
	volatile int16_t x5738 = 1;
	int16_t x5739 = -1;
	int32_t x5740 = -1;
	volatile uint64_t t91 = 1LLU;

	t91 = ((x5737>>x5738)&(x5739&x5740));

	if (t91 != 8316843575LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x5817 = UINT64_MAX;
	uint8_t x5818 = 21U;
	int64_t x5819 = INT64_MIN;
	uint64_t x5820 = 19496500553166LLU;

	t92 = ((x5817>>x5818)&(x5819&x5820));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x5909 = 2U;
	uint32_t x5911 = 1719590063U;
	volatile int16_t x5912 = INT16_MIN;

	t93 = ((x5909>>x5910)&(x5911&x5912));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x5953 = INT16_MAX;
	uint8_t x5955 = UINT8_MAX;
	static int64_t x5956 = -267336894LL;

	t94 = ((x5953>>x5954)&(x5955&x5956));

	if (t94 != 66LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x6178 = 3U;
	volatile int32_t x6179 = INT32_MIN;
	uint32_t x6180 = 50912306U;
	uint32_t t95 = 13874403U;

	t95 = ((x6177>>x6178)&(x6179&x6180));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x6189 = 5498U;
	uint16_t x6190 = 1U;
	int32_t x6191 = INT32_MIN;
	int32_t t96 = 110;

	t96 = ((x6189>>x6190)&(x6191&x6192));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x6257 = 3444458354937204614LLU;
	uint8_t x6258 = 8U;
	uint8_t x6260 = 22U;
	volatile uint64_t t97 = 49179751216175782LLU;

	t97 = ((x6257>>x6258)&(x6259&x6260));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x6329 = UINT64_MAX;
	int32_t x6330 = 13;
	static uint32_t x6332 = 8U;
	volatile uint64_t t98 = 3281407942LLU;

	t98 = ((x6329>>x6330)&(x6331&x6332));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x6490 = 10U;
	uint32_t x6491 = 14711U;
	volatile int16_t x6492 = -1;
	uint32_t t99 = 3U;

	t99 = ((x6489>>x6490)&(x6491&x6492));

	if (t99 != 23U) { NG(); } else { ; }
	
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

