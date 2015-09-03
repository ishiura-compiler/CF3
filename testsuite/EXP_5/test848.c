#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x52 = 7U;
volatile uint64_t t1 = 5213219137LLU;
static uint32_t t2 = 444U;
volatile uint32_t x70 = 1726471118U;
uint32_t t3 = 9083232U;
uint16_t x176 = 15312U;
int32_t x184 = -1;
uint8_t x443 = 0U;
int32_t t8 = 179;
uint32_t x523 = 2U;
int8_t x593 = -1;
static uint64_t x766 = UINT64_MAX;
int16_t x769 = INT16_MAX;
int8_t x853 = -1;
int8_t x856 = 46;
uint32_t x1190 = 7903855U;
static uint16_t x1279 = 1U;
uint32_t t22 = 6789695U;
uint64_t x1738 = 64181358446LLU;
int32_t x1814 = 3065;
int8_t x1816 = -8;
int8_t x2110 = INT8_MAX;
int32_t x2147 = 0;
uint16_t x2171 = 11U;
uint64_t t27 = 1LLU;
int8_t x2207 = 6;
volatile uint64_t x2208 = 847631LLU;
uint32_t x2374 = 9U;
volatile int16_t x2547 = 6;
int64_t x2589 = -1LL;
int16_t x2729 = INT16_MIN;
int32_t x2732 = 444;
volatile uint64_t t36 = 90652LLU;
uint8_t x2799 = 1U;
int8_t x2800 = 0;
int8_t x2850 = 20;
uint16_t x2851 = 7U;
uint16_t x2852 = UINT16_MAX;
static volatile int32_t t41 = 4113013;
static volatile uint32_t t42 = 8687U;
uint8_t x3019 = 1U;
uint8_t x3020 = UINT8_MAX;
volatile uint16_t x3122 = 1U;
uint8_t x3123 = 7U;
static int8_t x3201 = INT8_MIN;
int8_t x3204 = INT8_MIN;
uint64_t x3268 = 3LLU;
int16_t x3493 = INT16_MIN;
static volatile uint64_t x3614 = 3632LLU;
int16_t x3616 = 7238;
volatile int16_t x4175 = 3;
volatile uint64_t x4206 = 242865537540054449LLU;
int16_t x4208 = INT16_MAX;
volatile uint64_t t58 = 16506412827436LLU;
int8_t x4273 = INT8_MAX;
uint8_t x4275 = 3U;


void f0(void) {
	static uint32_t x49 = UINT32_MAX;
	uint64_t x50 = UINT64_MAX;
	static uint8_t x51 = 38U;
	uint64_t t0 = 1LLU;

	t0 = (x49*((x50<<x51)+x52));

	if (t0 != 304942678009LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x53 = -7;
	static uint64_t x54 = UINT64_MAX;
	static uint64_t x55 = 5LLU;
	volatile int16_t x56 = INT16_MIN;

	t1 = (x53*((x54<<x55)+x56));

	if (t1 != 229600LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x61 = 0U;
	volatile int8_t x62 = 18;
	int16_t x63 = 1;
	int32_t x64 = INT32_MIN;

	t2 = (x61*((x62<<x63)+x64));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x69 = -1;
	uint16_t x71 = 1U;
	uint32_t x72 = 190U;

	t3 = (x69*((x70<<x71)+x72));

	if (t3 != 842024870U) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x173 = 0U;
	uint64_t x174 = 150498945LLU;
	uint32_t x175 = 1U;
	volatile uint64_t t4 = 523133662764926LLU;

	t4 = (x173*((x174<<x175)+x176));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x181 = 98551202946LL;
	int8_t x182 = INT8_MAX;
	int8_t x183 = 0;
	int64_t t5 = 974016LL;

	t5 = (x181*((x182<<x183)+x184));

	if (t5 != 12417451571196LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x193 = 49388U;
	static uint64_t x194 = 2402LLU;
	static uint8_t x195 = 50U;
	uint16_t x196 = UINT16_MAX;
	uint64_t t6 = 160544041145724051LLU;

	t6 = (x193*((x194<<x195)+x196));

	if (t6 != 11051833488803839764LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x409 = 8680696423LLU;
	volatile int16_t x410 = 22;
	static uint16_t x411 = 0U;
	int64_t x412 = -1LL;
	uint64_t t7 = 13181665LLU;

	t7 = (x409*((x410<<x411)+x412));

	if (t7 != 182294624883LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x441 = 13;
	volatile uint16_t x442 = UINT16_MAX;
	uint16_t x444 = 188U;

	t8 = (x441*((x442<<x443)+x444));

	if (t8 != 854399) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x521 = 328854003LL;
	static uint32_t x522 = 882404893U;
	int8_t x524 = 0;
	volatile int64_t t9 = -29968608LL;

	t9 = (x521*((x522<<x523)+x524));

	if (t9 != 1160729525319346716LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x594 = UINT32_MAX;
	static volatile int8_t x595 = 1;
	static int8_t x596 = -4;
	uint32_t t10 = 12U;

	t10 = (x593*((x594<<x595)+x596));

	if (t10 != 6U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x713 = -1;
	int16_t x714 = INT16_MAX;
	int32_t x715 = 1;
	volatile int32_t x716 = INT32_MIN;
	int32_t t11 = 8927884;

	t11 = (x713*((x714<<x715)+x716));

	if (t11 != 2147418114) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x765 = 0;
	int8_t x767 = 4;
	int8_t x768 = INT8_MIN;
	volatile uint64_t t12 = 5894498434LLU;

	t12 = (x765*((x766<<x767)+x768));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x770 = 13961814U;
	uint64_t x771 = 8LLU;
	int16_t x772 = INT16_MIN;
	volatile uint32_t t13 = 92U;

	t13 = (x769*((x770<<x771)+x772));

	if (t13 != 368454144U) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x854 = UINT64_MAX;
	uint16_t x855 = 2U;
	static volatile uint64_t t14 = 1440650LLU;

	t14 = (x853*((x854<<x855)+x856));

	if (t14 != 18446744073709551574LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x861 = -7148543610509348LL;
	int16_t x862 = 1;
	volatile uint16_t x863 = 15U;
	uint64_t x864 = UINT64_MAX;
	volatile uint64_t t15 = 64840374LLU;

	t15 = (x861*((x862<<x863)+x864));

	if (t15 != 5571344472664365092LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x1189 = -1;
	static volatile uint16_t x1191 = 1U;
	int32_t x1192 = -610177;
	volatile uint32_t t16 = 22U;

	t16 = (x1189*((x1190<<x1191)+x1192));

	if (t16 != 4279769763U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x1277 = INT64_MIN;
	int8_t x1278 = 0;
	static uint64_t x1280 = UINT64_MAX;
	uint64_t t17 = 266665677LLU;

	t17 = (x1277*((x1278<<x1279)+x1280));

	if (t17 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1297 = INT16_MIN;
	uint64_t x1298 = UINT64_MAX;
	int8_t x1299 = 0;
	volatile int64_t x1300 = INT64_MIN;
	static uint64_t t18 = 149636487468LLU;

	t18 = (x1297*((x1298<<x1299)+x1300));

	if (t18 != 32768LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x1321 = -1;
	int16_t x1322 = 122;
	static int32_t x1323 = 22;
	static int32_t x1324 = INT32_MIN;
	static int32_t t19 = 127143614;

	t19 = (x1321*((x1322<<x1323)+x1324));

	if (t19 != 1635778560) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1389 = 0U;
	static int8_t x1390 = INT8_MAX;
	int16_t x1391 = 12;
	int64_t x1392 = -139379498302LL;
	static volatile int64_t t20 = -56LL;

	t20 = (x1389*((x1390<<x1391)+x1392));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x1577 = 2LLU;
	static uint64_t x1578 = 934226327641407898LLU;
	volatile uint8_t x1579 = 0U;
	int16_t x1580 = INT16_MIN;
	static volatile uint64_t t21 = 609154966046LLU;

	t21 = (x1577*((x1578<<x1579)+x1580));

	if (t21 != 1868452655282750260LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1721 = -26727195;
	int32_t x1722 = 517441;
	static uint8_t x1723 = 8U;
	uint32_t x1724 = UINT32_MAX;

	t22 = (x1721*((x1722<<x1723)+x1724));

	if (t22 != 3772184603U) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint32_t x1737 = 535U;
	static uint8_t x1739 = 9U;
	int8_t x1740 = INT8_MIN;
	static volatile uint64_t t23 = 167071352376160LLU;

	t23 = (x1737*((x1738<<x1739)+x1740));

	if (t23 != 17580557705459840LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1813 = 432310111276LL;
	uint16_t x1815 = 1U;
	int64_t t24 = -1061690LL;

	t24 = (x1813*((x1814<<x1815)+x1816));

	if (t24 != 2646602501231672LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x2109 = -102;
	uint32_t x2111 = 15U;
	uint32_t x2112 = 10013866U;
	volatile uint32_t t25 = 34U;

	t25 = (x2109*((x2110<<x2111)+x2112));

	if (t25 != 2849076292U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x2145 = INT32_MIN;
	uint64_t x2146 = 4870607326LLU;
	int8_t x2148 = 2;
	uint64_t t26 = 178629180816843390LLU;

	t26 = (x2145*((x2146<<x2147)+x2148));

	if (t26 != 7987194481000579072LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x2169 = INT16_MIN;
	static uint64_t x2170 = 1872080884746LLU;
	static int16_t x2172 = INT16_MIN;

	t27 = (x2169*((x2170<<x2171)+x2172));

	if (t27 != 3493987025621614592LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int16_t x2205 = INT16_MIN;
	uint32_t x2206 = 15080663U;
	static uint64_t t28 = 34254415509001063LLU;

	t28 = (x2205*((x2206<<x2207)+x2208));

	if (t28 != 18446712419491807232LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x2373 = UINT64_MAX;
	static uint8_t x2375 = 0U;
	uint32_t x2376 = UINT32_MAX;
	volatile uint64_t t29 = 17507LLU;

	t29 = (x2373*((x2374<<x2375)+x2376));

	if (t29 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x2389 = 1;
	int64_t x2390 = 1272LL;
	volatile int64_t x2391 = 1LL;
	uint64_t x2392 = UINT64_MAX;
	uint64_t t30 = 140144309LLU;

	t30 = (x2389*((x2390<<x2391)+x2392));

	if (t30 != 2543LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x2401 = 5U;
	volatile uint8_t x2402 = UINT8_MAX;
	int16_t x2403 = 3;
	volatile uint8_t x2404 = 1U;
	int32_t t31 = -30266258;

	t31 = (x2401*((x2402<<x2403)+x2404));

	if (t31 != 10205) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x2545 = -82;
	uint8_t x2546 = UINT8_MAX;
	uint64_t x2548 = 1826722795166538161LLU;
	volatile uint64_t t32 = 358189842908LLU;

	t32 = (x2545*((x2546<<x2547)+x2548));

	if (t32 != 16229427459728497102LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x2585 = UINT64_MAX;
	static uint8_t x2586 = 125U;
	int8_t x2587 = 1;
	volatile int64_t x2588 = INT64_MIN;
	volatile uint64_t t33 = 31059004LLU;

	t33 = (x2585*((x2586<<x2587)+x2588));

	if (t33 != 9223372036854775558LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x2590 = 182942LL;
	int16_t x2591 = 0;
	int16_t x2592 = -1;
	int64_t t34 = 30208673970725386LL;

	t34 = (x2589*((x2590<<x2591)+x2592));

	if (t34 != -182941LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x2725 = INT32_MIN;
	static uint32_t x2726 = UINT32_MAX;
	int8_t x2727 = 1;
	int16_t x2728 = 39;
	uint32_t t35 = 7741U;

	t35 = (x2725*((x2726<<x2727)+x2728));

	if (t35 != 2147483648U) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x2730 = UINT64_MAX;
	uint8_t x2731 = 1U;

	t36 = (x2729*((x2730<<x2731)+x2732));

	if (t36 != 18446744073695068160LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x2797 = -299437385932LL;
	int8_t x2798 = INT8_MAX;
	static int64_t t37 = 6095821228481LL;

	t37 = (x2797*((x2798<<x2799)+x2800));

	if (t37 != -76057096026728LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x2801 = UINT64_MAX;
	int8_t x2802 = INT8_MAX;
	static volatile int64_t x2803 = 0LL;
	static int64_t x2804 = 11967861151LL;
	static uint64_t t38 = 93565541467732944LLU;

	t38 = (x2801*((x2802<<x2803)+x2804));

	if (t38 != 18446744061741690338LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2825 = -1;
	uint8_t x2826 = 3U;
	uint16_t x2827 = 2U;
	uint16_t x2828 = 53U;
	static int32_t t39 = 28006473;

	t39 = (x2825*((x2826<<x2827)+x2828));

	if (t39 != -65) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x2849 = -1;
	static volatile int32_t t40 = -8;

	t40 = (x2849*((x2850<<x2851)+x2852));

	if (t40 != -68095) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2853 = -1;
	volatile uint8_t x2854 = 1U;
	static uint8_t x2855 = 8U;
	int32_t x2856 = INT32_MIN;

	t41 = (x2853*((x2854<<x2855)+x2856));

	if (t41 != 2147483392) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x2881 = 5549U;
	static uint32_t x2882 = UINT32_MAX;
	uint8_t x2883 = 3U;
	static int32_t x2884 = 7;

	t42 = (x2881*((x2882<<x2883)+x2884));

	if (t42 != 4294961747U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x2925 = UINT32_MAX;
	volatile int32_t x2926 = INT32_MAX;
	static uint8_t x2927 = 0U;
	int16_t x2928 = INT16_MIN;
	volatile uint32_t t43 = 160515234U;

	t43 = (x2925*((x2926<<x2927)+x2928));

	if (t43 != 2147516417U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x3017 = -1;
	uint64_t x3018 = 57532106LLU;
	volatile uint64_t t44 = 279276071177LLU;

	t44 = (x3017*((x3018<<x3019)+x3020));

	if (t44 != 18446744073594487149LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x3121 = -8;
	int64_t x3124 = 339597643562LL;
	int64_t t45 = 709486571LL;

	t45 = (x3121*((x3122<<x3123)+x3124));

	if (t45 != -2716781149520LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x3193 = 304537U;
	uint32_t x3194 = 5863U;
	int16_t x3195 = 6;
	int64_t x3196 = -11806463067LL;
	static volatile int64_t t46 = 2217290167709785097LL;

	t46 = (x3193*((x3194<<x3195)+x3196));

	if (t46 != -3595390571007395LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x3202 = UINT32_MAX;
	static uint8_t x3203 = 1U;
	uint32_t t47 = 795U;

	t47 = (x3201*((x3202<<x3203)+x3204));

	if (t47 != 16640U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x3265 = UINT64_MAX;
	uint64_t x3266 = 0LLU;
	volatile int8_t x3267 = 3;
	volatile uint64_t t48 = 33295649726452847LLU;

	t48 = (x3265*((x3266<<x3267)+x3268));

	if (t48 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x3293 = -1LL;
	uint8_t x3294 = UINT8_MAX;
	int16_t x3295 = 1;
	int32_t x3296 = -1;
	int64_t t49 = -1278262825884809747LL;

	t49 = (x3293*((x3294<<x3295)+x3296));

	if (t49 != -509LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x3397 = 1287381U;
	uint64_t x3398 = UINT64_MAX;
	uint32_t x3399 = 9U;
	volatile int8_t x3400 = 6;
	volatile uint64_t t50 = 11651802232LLU;

	t50 = (x3397*((x3398<<x3399)+x3400));

	if (t50 != 18446744073058136830LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x3494 = 1102201218077770859LLU;
	static uint8_t x3495 = 5U;
	volatile int16_t x3496 = INT16_MIN;
	uint64_t t51 = 1523LLU;

	t51 = (x3493*((x3494<<x3495)+x3496));

	if (t51 != 2112003008954892288LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x3613 = -15;
	int8_t x3615 = 0;
	volatile uint64_t t52 = 364982485118LLU;

	t52 = (x3613*((x3614<<x3615)+x3616));

	if (t52 != 18446744073709388566LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x3633 = -1;
	static uint8_t x3634 = 15U;
	volatile uint16_t x3635 = 2U;
	int8_t x3636 = INT8_MIN;
	int32_t t53 = 162230663;

	t53 = (x3633*((x3634<<x3635)+x3636));

	if (t53 != 68) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x3817 = 0;
	uint8_t x3818 = 20U;
	uint8_t x3819 = 3U;
	int16_t x3820 = -1;
	static int32_t t54 = 252;

	t54 = (x3817*((x3818<<x3819)+x3820));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x3901 = 491U;
	int32_t x3902 = 0;
	int8_t x3903 = 0;
	uint16_t x3904 = 3597U;
	volatile uint32_t t55 = 7516622U;

	t55 = (x3901*((x3902<<x3903)+x3904));

	if (t55 != 1766127U) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x3913 = 1830U;
	volatile uint32_t x3914 = 443053U;
	int8_t x3915 = 1;
	uint8_t x3916 = 1U;
	static uint32_t t56 = 694U;

	t56 = (x3913*((x3914<<x3915)+x3916));

	if (t56 != 1621575810U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x4173 = -31;
	uint8_t x4174 = 27U;
	static volatile int8_t x4176 = INT8_MIN;
	int32_t t57 = -59612;

	t57 = (x4173*((x4174<<x4175)+x4176));

	if (t57 != -2728) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x4205 = INT8_MAX;
	int64_t x4207 = 1LL;

	t58 = (x4205*((x4206<<x4207)+x4208));

	if (t58 != 6347614314049336607LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x4253 = UINT8_MAX;
	static uint32_t x4254 = UINT32_MAX;
	static uint16_t x4255 = 2U;
	static uint16_t x4256 = UINT16_MAX;
	static uint32_t t59 = 1741U;

	t59 = (x4253*((x4254<<x4255)+x4256));

	if (t59 != 16710405U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x4274 = 11030;
	static int64_t x4276 = 0LL;
	static volatile int64_t t60 = 339858076103600861LL;

	t60 = (x4273*((x4274<<x4275)+x4276));

	if (t60 != 11206480LL) { NG(); } else { ; }
	
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


    return 0;
}

