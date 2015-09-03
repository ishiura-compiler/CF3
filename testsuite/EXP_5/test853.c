#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x2 = UINT16_MAX;
static uint64_t x4 = UINT64_MAX;
int32_t t0 = -17743102;
uint8_t x46 = 3U;
uint8_t x62 = UINT8_MAX;
volatile uint8_t x63 = 8U;
int32_t t6 = -1;
volatile int8_t x300 = INT8_MIN;
volatile int32_t t9 = -7354;
int64_t x369 = -1LL;
static uint8_t x528 = UINT8_MAX;
volatile int64_t x533 = 440324676719LL;
int16_t x620 = -1;
volatile int32_t t14 = -68494707;
volatile uint64_t x743 = 6LLU;
int64_t x744 = INT64_MIN;
uint16_t x886 = 38U;
uint64_t x888 = 12LLU;
int64_t x890 = 4171582212840LL;
uint64_t x892 = UINT64_MAX;
int16_t x974 = 3261;
static uint8_t x1017 = 1U;
int16_t x1108 = -1;
int32_t t20 = 7;
uint16_t x1111 = 1U;
static volatile int32_t x1228 = 54887;
int32_t t24 = -22907;
static int32_t x1302 = 14609;
uint8_t x1379 = 1U;
uint32_t x1420 = 378047U;
volatile int32_t t27 = -225611675;
int32_t x1444 = 24194635;
static int64_t x1901 = INT64_MIN;
int64_t x1921 = -1LL;
static int8_t x1951 = 30;
volatile int32_t t33 = 78575;
static volatile uint16_t x1959 = 8U;
int64_t x1960 = INT64_MIN;
int16_t x1975 = 1;
volatile int32_t t35 = -441629;
uint16_t x2011 = 18U;
volatile int32_t t38 = -29769272;
uint16_t x2111 = 1U;
uint16_t x2294 = UINT16_MAX;
uint16_t x2530 = 466U;
int64_t x2589 = -1LL;
int16_t x2595 = 6;
static int16_t x2677 = -236;
uint8_t x2678 = 11U;
uint64_t x2679 = 0LLU;
volatile int32_t t47 = 0;
uint64_t x2761 = 34119396638LLU;
static uint8_t x2815 = 24U;
uint16_t x2942 = 11859U;
volatile int64_t x2981 = -516894513884502LL;
static int32_t x2984 = -1;
int32_t t52 = -697617822;
uint8_t x3077 = 15U;
uint8_t x3096 = 0U;
int64_t x3102 = 244207198LL;
static volatile uint8_t x3103 = 1U;
volatile int8_t x3104 = -23;
static volatile uint64_t x3170 = 29134148LLU;
int16_t x3318 = 521;
uint32_t x3338 = 643108329U;
int32_t x3340 = INT32_MAX;
int32_t t60 = -275054201;
int32_t t62 = 14426177;
static int32_t x3537 = -2;
int64_t x3617 = INT64_MIN;
int8_t x3619 = 18;
int64_t x3653 = INT64_MIN;
int8_t x3656 = INT8_MIN;
int8_t x3677 = INT8_MIN;
volatile uint32_t x3819 = 19U;
volatile int16_t x3985 = -13831;
uint8_t x3986 = 24U;
uint16_t x3987 = 25U;
static volatile int32_t x3988 = INT32_MIN;
volatile int64_t x4037 = 2753122205LL;
static volatile int32_t t70 = 9;
uint8_t x4058 = 2U;
uint64_t x4074 = 37806601253LLU;
int16_t x4075 = 9;
volatile int32_t t72 = 498988;
int64_t x4094 = INT64_MAX;
int8_t x4096 = -8;
int32_t x4113 = -1;
int32_t t76 = -1;
int32_t t77 = 0;
static int32_t x4273 = -1;
volatile int32_t t78 = 7762;
int8_t x4447 = 1;
volatile int16_t x4448 = -1;
uint16_t x4459 = 5U;
volatile int32_t x4492 = -1;
int16_t x4575 = 0;
int32_t t83 = -10052;
int32_t t84 = -180790;
volatile int16_t x4632 = INT16_MIN;
int8_t x4797 = INT8_MIN;
static uint8_t x4798 = UINT8_MAX;
uint8_t x4892 = 12U;
int8_t x5101 = INT8_MIN;
uint8_t x5102 = UINT8_MAX;
int8_t x5316 = 0;
int32_t t92 = 539404660;
uint64_t x5354 = 497662LLU;
static int16_t x5559 = 3;
volatile int32_t t96 = 4773170;


void f0(void) {
	volatile int32_t x1 = -1;
	int8_t x3 = 1;

	t0 = (x1==((x2<<x3)+x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	volatile uint16_t x6 = UINT16_MAX;
	uint8_t x7 = 1U;
	volatile uint64_t x8 = 3462590086LLU;
	volatile int32_t t1 = 157931625;

	t1 = (x5==((x6<<x7)+x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x45 = INT8_MIN;
	static int8_t x47 = 20;
	uint64_t x48 = 1093465457811LLU;
	int32_t t2 = -4131912;

	t2 = (x45==((x46<<x47)+x48));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x61 = INT16_MIN;
	static volatile int16_t x64 = INT16_MAX;
	volatile int32_t t3 = 33;

	t3 = (x61==((x62<<x63)+x64));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x225 = 11U;
	volatile uint32_t x226 = UINT32_MAX;
	int16_t x227 = 7;
	uint16_t x228 = UINT16_MAX;
	int32_t t4 = -379;

	t4 = (x225==((x226<<x227)+x228));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x245 = UINT32_MAX;
	volatile uint8_t x246 = UINT8_MAX;
	static volatile int16_t x247 = 2;
	volatile int32_t x248 = -130389656;
	volatile int32_t t5 = -3186;

	t5 = (x245==((x246<<x247)+x248));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x257 = UINT32_MAX;
	volatile uint8_t x258 = UINT8_MAX;
	uint8_t x259 = 2U;
	int64_t x260 = 157471LL;

	t6 = (x257==((x258<<x259)+x260));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x285 = INT32_MIN;
	volatile int8_t x286 = INT8_MAX;
	int8_t x287 = 3;
	uint64_t x288 = UINT64_MAX;
	int32_t t7 = 18288684;

	t7 = (x285==((x286<<x287)+x288));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x297 = INT16_MAX;
	uint64_t x298 = UINT64_MAX;
	uint8_t x299 = 0U;
	int32_t t8 = 125317;

	t8 = (x297==((x298<<x299)+x300));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x329 = 7719U;
	static volatile uint8_t x330 = UINT8_MAX;
	uint16_t x331 = 0U;
	int16_t x332 = -864;

	t9 = (x329==((x330<<x331)+x332));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x370 = 1;
	int8_t x371 = 30;
	uint8_t x372 = 14U;
	int32_t t10 = 4023;

	t10 = (x369==((x370<<x371)+x372));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x525 = INT8_MIN;
	int16_t x526 = 4;
	volatile uint16_t x527 = 1U;
	volatile int32_t t11 = -790956;

	t11 = (x525==((x526<<x527)+x528));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x534 = 0;
	uint16_t x535 = 3U;
	uint8_t x536 = 2U;
	volatile int32_t t12 = -21416088;

	t12 = (x533==((x534<<x535)+x536));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x541 = INT32_MIN;
	static int8_t x542 = INT8_MAX;
	static uint8_t x543 = 0U;
	static int64_t x544 = -1LL;
	volatile int32_t t13 = -33147372;

	t13 = (x541==((x542<<x543)+x544));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x617 = 22U;
	uint32_t x618 = 2087867U;
	int8_t x619 = 7;

	t14 = (x617==((x618<<x619)+x620));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x741 = 31U;
	volatile int64_t x742 = 12900270LL;
	int32_t t15 = 0;

	t15 = (x741==((x742<<x743)+x744));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x885 = -7;
	static volatile int16_t x887 = 12;
	int32_t t16 = -15083180;

	t16 = (x885==((x886<<x887)+x888));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x889 = INT64_MIN;
	uint16_t x891 = 0U;
	static volatile int32_t t17 = 3423;

	t17 = (x889==((x890<<x891)+x892));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x973 = INT64_MIN;
	static int32_t x975 = 7;
	static uint8_t x976 = 2U;
	volatile int32_t t18 = 54137138;

	t18 = (x973==((x974<<x975)+x976));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x1018 = 949U;
	static uint32_t x1019 = 14U;
	static uint64_t x1020 = UINT64_MAX;
	int32_t t19 = -68;

	t19 = (x1017==((x1018<<x1019)+x1020));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x1105 = -2;
	int8_t x1106 = 2;
	int8_t x1107 = 0;

	t20 = (x1105==((x1106<<x1107)+x1108));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x1109 = INT8_MIN;
	static uint64_t x1110 = 8515060763204592506LLU;
	volatile uint32_t x1112 = UINT32_MAX;
	static volatile int32_t t21 = 47;

	t21 = (x1109==((x1110<<x1111)+x1112));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1129 = UINT64_MAX;
	static uint16_t x1130 = 3U;
	static uint32_t x1131 = 6U;
	uint8_t x1132 = 11U;
	int32_t t22 = -62809770;

	t22 = (x1129==((x1130<<x1131)+x1132));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x1189 = 1;
	static uint8_t x1190 = UINT8_MAX;
	uint16_t x1191 = 0U;
	uint16_t x1192 = 18U;
	int32_t t23 = 1;

	t23 = (x1189==((x1190<<x1191)+x1192));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1225 = 1;
	uint64_t x1226 = 34LLU;
	int16_t x1227 = 16;

	t24 = (x1225==((x1226<<x1227)+x1228));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x1301 = 127U;
	volatile uint32_t x1303 = 10U;
	static int64_t x1304 = -1LL;
	int32_t t25 = -202647061;

	t25 = (x1301==((x1302<<x1303)+x1304));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1377 = -3874;
	int64_t x1378 = 1LL;
	int8_t x1380 = INT8_MIN;
	volatile int32_t t26 = 32718;

	t26 = (x1377==((x1378<<x1379)+x1380));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x1417 = 1664645831558463077LLU;
	uint64_t x1418 = 1356LLU;
	volatile uint8_t x1419 = 12U;

	t27 = (x1417==((x1418<<x1419)+x1420));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x1441 = UINT32_MAX;
	static volatile uint8_t x1442 = UINT8_MAX;
	uint16_t x1443 = 14U;
	int32_t t28 = 222;

	t28 = (x1441==((x1442<<x1443)+x1444));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x1729 = -1LL;
	volatile int8_t x1730 = INT8_MAX;
	static uint16_t x1731 = 0U;
	static int8_t x1732 = INT8_MAX;
	volatile int32_t t29 = 2079;

	t29 = (x1729==((x1730<<x1731)+x1732));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x1765 = -1787;
	volatile uint32_t x1766 = UINT32_MAX;
	int16_t x1767 = 7;
	int16_t x1768 = 6;
	volatile int32_t t30 = -7613;

	t30 = (x1765==((x1766<<x1767)+x1768));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x1902 = UINT64_MAX;
	uint16_t x1903 = 10U;
	int64_t x1904 = INT64_MIN;
	static volatile int32_t t31 = 510;

	t31 = (x1901==((x1902<<x1903)+x1904));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x1922 = 239U;
	uint8_t x1923 = 0U;
	volatile int64_t x1924 = INT64_MIN;
	volatile int32_t t32 = 22;

	t32 = (x1921==((x1922<<x1923)+x1924));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x1949 = UINT16_MAX;
	uint64_t x1950 = UINT64_MAX;
	volatile uint64_t x1952 = 32616002960623LLU;

	t33 = (x1949==((x1950<<x1951)+x1952));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x1957 = UINT16_MAX;
	static int64_t x1958 = 21454087LL;
	static volatile int32_t t34 = 3329142;

	t34 = (x1957==((x1958<<x1959)+x1960));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1973 = -55772;
	uint16_t x1974 = 123U;
	int16_t x1976 = INT16_MIN;

	t35 = (x1973==((x1974<<x1975)+x1976));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x2009 = 1;
	int8_t x2010 = INT8_MAX;
	int32_t x2012 = INT32_MIN;
	volatile int32_t t36 = -1;

	t36 = (x2009==((x2010<<x2011)+x2012));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x2025 = -1;
	static uint8_t x2026 = 22U;
	uint8_t x2027 = 0U;
	uint32_t x2028 = 262759457U;
	int32_t t37 = -72;

	t37 = (x2025==((x2026<<x2027)+x2028));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x2081 = 997311358047LL;
	int64_t x2082 = 1075429460977LL;
	volatile uint32_t x2083 = 0U;
	static uint8_t x2084 = 90U;

	t38 = (x2081==((x2082<<x2083)+x2084));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2109 = INT8_MIN;
	int8_t x2110 = 0;
	uint32_t x2112 = 6115U;
	int32_t t39 = 3502214;

	t39 = (x2109==((x2110<<x2111)+x2112));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x2137 = -1LL;
	int64_t x2138 = 3293LL;
	volatile int32_t x2139 = 0;
	int8_t x2140 = 1;
	volatile int32_t t40 = 3181;

	t40 = (x2137==((x2138<<x2139)+x2140));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x2221 = 15LLU;
	uint16_t x2222 = UINT16_MAX;
	uint8_t x2223 = 0U;
	int8_t x2224 = INT8_MAX;
	volatile int32_t t41 = 52429686;

	t41 = (x2221==((x2222<<x2223)+x2224));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x2265 = -1;
	uint64_t x2266 = 9929225624LLU;
	volatile int8_t x2267 = 1;
	volatile int32_t x2268 = INT32_MIN;
	static int32_t t42 = 15772725;

	t42 = (x2265==((x2266<<x2267)+x2268));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x2293 = INT32_MAX;
	static uint8_t x2295 = 2U;
	int32_t x2296 = INT32_MIN;
	int32_t t43 = 121461529;

	t43 = (x2293==((x2294<<x2295)+x2296));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x2529 = UINT8_MAX;
	int8_t x2531 = 13;
	int64_t x2532 = INT64_MIN;
	volatile int32_t t44 = -5141781;

	t44 = (x2529==((x2530<<x2531)+x2532));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x2590 = 1898557U;
	int8_t x2591 = 1;
	int64_t x2592 = -1LL;
	volatile int32_t t45 = -515889;

	t45 = (x2589==((x2590<<x2591)+x2592));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x2593 = -1;
	int8_t x2594 = INT8_MAX;
	uint16_t x2596 = UINT16_MAX;
	int32_t t46 = -27812;

	t46 = (x2593==((x2594<<x2595)+x2596));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x2680 = 2U;

	t47 = (x2677==((x2678<<x2679)+x2680));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x2762 = 5U;
	int8_t x2763 = 1;
	volatile uint64_t x2764 = 17LLU;
	volatile int32_t t48 = -2506784;

	t48 = (x2761==((x2762<<x2763)+x2764));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x2773 = INT8_MAX;
	static int32_t x2774 = 1;
	int16_t x2775 = 20;
	volatile int8_t x2776 = INT8_MIN;
	volatile int32_t t49 = -13;

	t49 = (x2773==((x2774<<x2775)+x2776));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x2813 = INT64_MAX;
	int16_t x2814 = 20;
	int16_t x2816 = INT16_MIN;
	volatile int32_t t50 = 478;

	t50 = (x2813==((x2814<<x2815)+x2816));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x2941 = 1;
	uint32_t x2943 = 3U;
	uint8_t x2944 = 119U;
	int32_t t51 = 0;

	t51 = (x2941==((x2942<<x2943)+x2944));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x2982 = 14784868U;
	volatile uint8_t x2983 = 6U;

	t52 = (x2981==((x2982<<x2983)+x2984));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x3078 = 6U;
	uint8_t x3079 = 1U;
	uint16_t x3080 = UINT16_MAX;
	int32_t t53 = 510;

	t53 = (x3077==((x3078<<x3079)+x3080));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x3093 = 6;
	int16_t x3094 = INT16_MAX;
	static volatile int8_t x3095 = 0;
	int32_t t54 = 28;

	t54 = (x3093==((x3094<<x3095)+x3096));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x3101 = INT16_MIN;
	volatile int32_t t55 = 706710354;

	t55 = (x3101==((x3102<<x3103)+x3104));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x3169 = -1;
	volatile uint16_t x3171 = 0U;
	static int8_t x3172 = -28;
	volatile int32_t t56 = 262287639;

	t56 = (x3169==((x3170<<x3171)+x3172));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x3317 = UINT16_MAX;
	int8_t x3319 = 0;
	int8_t x3320 = INT8_MAX;
	volatile int32_t t57 = -48;

	t57 = (x3317==((x3318<<x3319)+x3320));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x3337 = -5;
	int32_t x3339 = 2;
	volatile int32_t t58 = -1;

	t58 = (x3337==((x3338<<x3339)+x3340));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x3341 = INT8_MIN;
	uint8_t x3342 = 8U;
	volatile int8_t x3343 = 1;
	int16_t x3344 = 7063;
	int32_t t59 = 58867811;

	t59 = (x3341==((x3342<<x3343)+x3344));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x3349 = 151U;
	uint32_t x3350 = 3590700U;
	int16_t x3351 = 7;
	int64_t x3352 = INT64_MIN;

	t60 = (x3349==((x3350<<x3351)+x3352));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x3409 = -1LL;
	int16_t x3410 = INT16_MAX;
	static int16_t x3411 = 1;
	int16_t x3412 = 31;
	int32_t t61 = -3;

	t61 = (x3409==((x3410<<x3411)+x3412));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x3529 = -6;
	int8_t x3530 = 13;
	volatile uint8_t x3531 = 6U;
	int64_t x3532 = INT64_MIN;

	t62 = (x3529==((x3530<<x3531)+x3532));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x3538 = INT16_MAX;
	uint64_t x3539 = 0LLU;
	static int64_t x3540 = INT64_MIN;
	int32_t t63 = -1826;

	t63 = (x3537==((x3538<<x3539)+x3540));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x3618 = 54329394139LLU;
	int32_t x3620 = -1;
	volatile int32_t t64 = -22;

	t64 = (x3617==((x3618<<x3619)+x3620));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x3654 = 177058566U;
	int16_t x3655 = 0;
	int32_t t65 = -38485662;

	t65 = (x3653==((x3654<<x3655)+x3656));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x3678 = 2008068183U;
	int16_t x3679 = 31;
	int16_t x3680 = INT16_MIN;
	static volatile int32_t t66 = 263063389;

	t66 = (x3677==((x3678<<x3679)+x3680));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x3813 = -1;
	uint64_t x3814 = UINT64_MAX;
	int8_t x3815 = 0;
	volatile int64_t x3816 = INT64_MAX;
	volatile int32_t t67 = -2386;

	t67 = (x3813==((x3814<<x3815)+x3816));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x3817 = -1;
	uint16_t x3818 = 2U;
	volatile int64_t x3820 = INT64_MIN;
	volatile int32_t t68 = 0;

	t68 = (x3817==((x3818<<x3819)+x3820));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int32_t t69 = 2;

	t69 = (x3985==((x3986<<x3987)+x3988));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x4038 = UINT8_MAX;
	int8_t x4039 = 0;
	static uint16_t x4040 = 229U;

	t70 = (x4037==((x4038<<x4039)+x4040));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x4057 = 131168U;
	uint8_t x4059 = 6U;
	volatile int8_t x4060 = INT8_MIN;
	volatile int32_t t71 = 1;

	t71 = (x4057==((x4058<<x4059)+x4060));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x4073 = INT32_MIN;
	uint8_t x4076 = 0U;

	t72 = (x4073==((x4074<<x4075)+x4076));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x4093 = UINT16_MAX;
	uint32_t x4095 = 0U;
	volatile int32_t t73 = 659983;

	t73 = (x4093==((x4094<<x4095)+x4096));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x4114 = 7686U;
	uint8_t x4115 = 28U;
	int32_t x4116 = 76;
	volatile int32_t t74 = 354;

	t74 = (x4113==((x4114<<x4115)+x4116));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x4149 = 24U;
	static uint64_t x4150 = 378LLU;
	static int32_t x4151 = 62;
	int16_t x4152 = INT16_MIN;
	int32_t t75 = 11957;

	t75 = (x4149==((x4150<<x4151)+x4152));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x4157 = 1U;
	volatile uint32_t x4158 = 153395U;
	volatile int32_t x4159 = 0;
	int64_t x4160 = INT64_MIN;

	t76 = (x4157==((x4158<<x4159)+x4160));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x4201 = 1U;
	uint64_t x4202 = 12359283996814LLU;
	static volatile int8_t x4203 = 1;
	static int16_t x4204 = INT16_MAX;

	t77 = (x4201==((x4202<<x4203)+x4204));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x4274 = 2217858U;
	int32_t x4275 = 1;
	int16_t x4276 = INT16_MIN;

	t78 = (x4273==((x4274<<x4275)+x4276));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x4369 = 113791105U;
	static int8_t x4370 = 2;
	uint8_t x4371 = 1U;
	static uint16_t x4372 = UINT16_MAX;
	int32_t t79 = -9980873;

	t79 = (x4369==((x4370<<x4371)+x4372));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x4445 = INT64_MIN;
	static volatile int16_t x4446 = INT16_MAX;
	int32_t t80 = 2983;

	t80 = (x4445==((x4446<<x4447)+x4448));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x4457 = UINT64_MAX;
	volatile uint64_t x4458 = 129721399LLU;
	static int32_t x4460 = INT32_MIN;
	int32_t t81 = -949;

	t81 = (x4457==((x4458<<x4459)+x4460));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x4489 = 2006;
	int16_t x4490 = 0;
	int8_t x4491 = 0;
	volatile int32_t t82 = -1;

	t82 = (x4489==((x4490<<x4491)+x4492));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x4573 = 6U;
	uint32_t x4574 = 3756851U;
	uint8_t x4576 = 1U;

	t83 = (x4573==((x4574<<x4575)+x4576));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x4621 = INT16_MAX;
	int16_t x4622 = 1;
	uint16_t x4623 = 2U;
	uint8_t x4624 = 3U;

	t84 = (x4621==((x4622<<x4623)+x4624));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x4629 = 60712U;
	int8_t x4630 = 16;
	uint16_t x4631 = 23U;
	static volatile int32_t t85 = -2299;

	t85 = (x4629==((x4630<<x4631)+x4632));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x4799 = 9;
	uint32_t x4800 = UINT32_MAX;
	volatile int32_t t86 = 284;

	t86 = (x4797==((x4798<<x4799)+x4800));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x4889 = UINT8_MAX;
	uint32_t x4890 = UINT32_MAX;
	uint32_t x4891 = 2U;
	static int32_t t87 = 2;

	t87 = (x4889==((x4890<<x4891)+x4892));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x4929 = 31U;
	uint16_t x4930 = UINT16_MAX;
	static volatile uint8_t x4931 = 7U;
	static uint8_t x4932 = 7U;
	static int32_t t88 = -173173;

	t88 = (x4929==((x4930<<x4931)+x4932));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x5103 = 0U;
	static int32_t x5104 = -1;
	static int32_t t89 = -219699;

	t89 = (x5101==((x5102<<x5103)+x5104));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x5289 = -1;
	int8_t x5290 = INT8_MAX;
	uint8_t x5291 = 0U;
	uint16_t x5292 = UINT16_MAX;
	volatile int32_t t90 = -5;

	t90 = (x5289==((x5290<<x5291)+x5292));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x5313 = UINT32_MAX;
	volatile uint32_t x5314 = 292992781U;
	uint8_t x5315 = 0U;
	int32_t t91 = 920713;

	t91 = (x5313==((x5314<<x5315)+x5316));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x5325 = UINT32_MAX;
	uint8_t x5326 = 68U;
	uint8_t x5327 = 2U;
	volatile int32_t x5328 = INT32_MIN;

	t92 = (x5325==((x5326<<x5327)+x5328));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x5353 = 466LLU;
	uint8_t x5355 = 0U;
	uint8_t x5356 = 0U;
	int32_t t93 = 4777217;

	t93 = (x5353==((x5354<<x5355)+x5356));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x5549 = INT8_MAX;
	uint8_t x5550 = 37U;
	static int64_t x5551 = 0LL;
	int8_t x5552 = 48;
	int32_t t94 = 3484;

	t94 = (x5549==((x5550<<x5551)+x5552));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x5557 = INT64_MIN;
	static volatile int16_t x5558 = INT16_MAX;
	int16_t x5560 = INT16_MAX;
	static volatile int32_t t95 = -4;

	t95 = (x5557==((x5558<<x5559)+x5560));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x5605 = 2U;
	volatile uint8_t x5606 = UINT8_MAX;
	int16_t x5607 = 0;
	volatile uint8_t x5608 = 17U;

	t96 = (x5605==((x5606<<x5607)+x5608));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x5697 = INT64_MAX;
	uint64_t x5698 = 86585544449LLU;
	int16_t x5699 = 13;
	volatile int8_t x5700 = INT8_MIN;
	volatile int32_t t97 = 533935968;

	t97 = (x5697==((x5698<<x5699)+x5700));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x5701 = UINT32_MAX;
	int16_t x5702 = INT16_MAX;
	uint16_t x5703 = 15U;
	static volatile int32_t x5704 = INT32_MIN;
	volatile int32_t t98 = -480724495;

	t98 = (x5701==((x5702<<x5703)+x5704));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x5717 = UINT32_MAX;
	uint8_t x5718 = UINT8_MAX;
	volatile int8_t x5719 = 5;
	uint8_t x5720 = 91U;
	int32_t t99 = 18607;

	t99 = (x5717==((x5718<<x5719)+x5720));

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

