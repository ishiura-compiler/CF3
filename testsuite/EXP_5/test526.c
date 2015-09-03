#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x369 = UINT8_MAX;
volatile int8_t x370 = 33;
volatile int32_t t4 = -442;
uint8_t x622 = 20U;
int16_t x936 = -1;
int32_t t7 = -22409;
uint64_t x1025 = UINT64_MAX;
uint64_t t8 = UINT64_MAX;
static uint32_t x1090 = UINT32_MAX;
volatile int64_t t16 = INT64_MAX;
uint64_t t18 = 1585707432561023253LLU;
int8_t x2042 = INT8_MAX;
volatile uint32_t x2088 = UINT32_MAX;
int64_t x2160 = -1LL;
static volatile uint32_t t26 = 0U;
volatile uint16_t x2185 = 2050U;
volatile int8_t x2188 = -1;
int32_t t27 = 605;
volatile int16_t x2269 = 26;
int32_t x2270 = 26;
uint16_t x2271 = 89U;
uint64_t x2272 = UINT64_MAX;
static int8_t x2308 = -1;
int8_t x2361 = INT8_MAX;
int8_t x2377 = INT8_MAX;
uint64_t x2378 = 4243078178198LLU;
uint32_t x2605 = 594465U;
volatile int32_t t38 = -23;
int32_t x2907 = INT32_MIN;
int8_t x2927 = INT8_MIN;
volatile int32_t t41 = -58;
uint16_t x3013 = 1U;
volatile int32_t t42 = 736;
uint64_t x3112 = UINT64_MAX;
static int8_t x3122 = INT8_MIN;
int8_t x3198 = -1;
int16_t x3514 = -5;
volatile int32_t x3515 = -2623074;
uint16_t x3516 = 0U;
uint64_t x3681 = 219934651713673751LLU;
uint32_t x3761 = 28477209U;
uint32_t t53 = 55299U;
volatile int16_t x3796 = -1;
static int32_t t54 = 48616;
int8_t x3812 = -13;
volatile int32_t t55 = -564535446;
static int8_t x3818 = 3;
int8_t x3819 = INT8_MIN;
volatile uint32_t t57 = 10015U;
uint64_t x3925 = UINT64_MAX;
static int32_t x3926 = INT32_MIN;
int8_t x3930 = INT8_MIN;
int32_t x3932 = -1;
static volatile uint64_t x4200 = UINT64_MAX;
uint8_t x4221 = 4U;
int16_t x4224 = -1;
int8_t x4284 = -1;
uint64_t x4290 = UINT64_MAX;
uint8_t x4291 = 1U;
volatile int32_t t68 = 56;
int8_t x4356 = -1;
static int16_t x4367 = INT16_MIN;
volatile int32_t t71 = 5361;
static uint64_t x4442 = UINT64_MAX;
static volatile int32_t t73 = -13;
int8_t x4487 = INT8_MAX;
int64_t x4488 = -1LL;
uint64_t x4554 = 29LLU;
volatile uint64_t t75 = 912626088LLU;
uint32_t x4573 = 81U;
uint64_t x4574 = UINT64_MAX;
uint64_t x4576 = UINT64_MAX;
uint16_t x4606 = 29U;
int32_t t79 = -6215;
int32_t t80 = 0;
uint16_t x5001 = 489U;
int64_t x5003 = 7200593068301LL;
uint32_t x5686 = 6U;
int16_t x5710 = 9133;
int32_t x5712 = -5;
static int8_t x5741 = INT8_MAX;
static uint16_t x5831 = 1U;
uint8_t x5850 = 1U;
uint32_t x5851 = 2U;
int16_t x5852 = -1;
volatile int64_t t92 = -419172LL;
static int16_t x5986 = 3;
uint32_t x6037 = UINT32_MAX;
volatile uint32_t t95 = 133756211U;
volatile uint32_t x6044 = UINT32_MAX;
int32_t t96 = 236265749;
int16_t x6091 = -1;


void f0(void) {
	volatile int8_t x133 = 0;
	int8_t x134 = -1;
	static uint16_t x135 = 804U;
	int8_t x136 = -1;
	volatile int32_t t0 = -3522;

	t0 = (x133<<((x134/x135)-x136));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x177 = 10U;
	uint64_t x178 = 8313547452LLU;
	int16_t x179 = INT16_MIN;
	volatile int8_t x180 = -1;
	volatile uint32_t t1 = 27578483U;

	t1 = (x177<<((x178/x179)-x180));

	if (t1 != 20U) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x205 = 1U;
	int8_t x206 = INT8_MIN;
	int32_t x207 = INT32_MIN;
	uint32_t x208 = UINT32_MAX;
	static volatile uint32_t t2 = 109U;

	t2 = (x205<<((x206/x207)-x208));

	if (t2 != 2U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x325 = INT8_MAX;
	uint16_t x326 = 30778U;
	int16_t x327 = INT16_MIN;
	static int32_t x328 = -1;
	static int32_t t3 = 44388;

	t3 = (x325<<((x326/x327)-x328));

	if (t3 != 254) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x371 = 321U;
	int32_t x372 = -1;

	t4 = (x369<<((x370/x371)-x372));

	if (t4 != 510) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x621 = UINT32_MAX;
	uint64_t x623 = 11855882702LLU;
	int8_t x624 = -1;
	uint32_t t5 = 548075U;

	t5 = (x621<<((x622/x623)-x624));

	if (t5 != 4294967294U) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x709 = INT16_MAX;
	uint8_t x710 = 33U;
	int8_t x711 = INT8_MIN;
	int16_t x712 = 0;
	int32_t t6 = -40448;

	t6 = (x709<<((x710/x711)-x712));

	if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x933 = 5U;
	int16_t x934 = INT16_MIN;
	static int64_t x935 = INT64_MIN;

	t7 = (x933<<((x934/x935)-x936));

	if (t7 != 10) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint16_t x1026 = UINT16_MAX;
	int16_t x1027 = INT16_MIN;
	int16_t x1028 = -1;

	t8 = (x1025<<((x1026/x1027)-x1028));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x1089 = 12U;
	int32_t x1091 = INT32_MIN;
	volatile int16_t x1092 = -1;
	static volatile int32_t t9 = 17;

	t9 = (x1089<<((x1090/x1091)-x1092));

	if (t9 != 48) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x1137 = 14165U;
	volatile uint64_t x1138 = 1601071457232056078LLU;
	volatile int8_t x1139 = -1;
	int8_t x1140 = -1;
	volatile uint32_t t10 = 6183U;

	t10 = (x1137<<((x1138/x1139)-x1140));

	if (t10 != 28330U) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x1149 = 9U;
	uint8_t x1150 = 1U;
	int32_t x1151 = 153;
	int16_t x1152 = -1;
	int32_t t11 = 8571994;

	t11 = (x1149<<((x1150/x1151)-x1152));

	if (t11 != 18) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x1177 = 64527;
	int8_t x1178 = INT8_MAX;
	int8_t x1179 = INT8_MIN;
	int16_t x1180 = 0;
	volatile int32_t t12 = -157377;

	t12 = (x1177<<((x1178/x1179)-x1180));

	if (t12 != 64527) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x1193 = 434;
	uint8_t x1194 = 3U;
	static uint64_t x1195 = UINT64_MAX;
	int32_t x1196 = -1;
	volatile int32_t t13 = -15122;

	t13 = (x1193<<((x1194/x1195)-x1196));

	if (t13 != 868) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x1213 = UINT64_MAX;
	static int64_t x1214 = INT64_MIN;
	static uint64_t x1215 = UINT64_MAX;
	static int16_t x1216 = -1;
	volatile uint64_t t14 = 140939443870957059LLU;

	t14 = (x1213<<((x1214/x1215)-x1216));

	if (t14 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x1373 = 1U;
	uint8_t x1374 = 0U;
	static int64_t x1375 = -88633044163LL;
	uint32_t x1376 = 0U;
	int32_t t15 = -26144;

	t15 = (x1373<<((x1374/x1375)-x1376));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int64_t x1501 = INT64_MAX;
	uint8_t x1502 = UINT8_MAX;
	static int32_t x1503 = INT32_MIN;
	int16_t x1504 = 0;

	t16 = (x1501<<((x1502/x1503)-x1504));

	if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x1593 = UINT32_MAX;
	int64_t x1594 = -1LL;
	volatile uint16_t x1595 = 7066U;
	static volatile int64_t x1596 = -1LL;
	volatile uint32_t t17 = 53555375U;

	t17 = (x1593<<((x1594/x1595)-x1596));

	if (t17 != 4294967294U) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x1665 = 643394519091646359LLU;
	int64_t x1666 = 43LL;
	uint8_t x1667 = UINT8_MAX;
	int8_t x1668 = -1;

	t18 = (x1665<<((x1666/x1667)-x1668));

	if (t18 != 1286789038183292718LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x1805 = INT8_MAX;
	static int32_t x1806 = 1;
	int32_t x1807 = INT32_MIN;
	static volatile uint64_t x1808 = UINT64_MAX;
	static volatile int32_t t19 = 54;

	t19 = (x1805<<((x1806/x1807)-x1808));

	if (t19 != 254) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x1893 = 1227U;
	volatile uint64_t x1894 = 97LLU;
	int16_t x1895 = -6382;
	int8_t x1896 = 0;
	uint32_t t20 = 1466U;

	t20 = (x1893<<((x1894/x1895)-x1896));

	if (t20 != 1227U) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1909 = 2U;
	int8_t x1910 = INT8_MAX;
	int8_t x1911 = INT8_MIN;
	static int8_t x1912 = -1;
	volatile int32_t t21 = -6646;

	t21 = (x1909<<((x1910/x1911)-x1912));

	if (t21 != 4) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x1937 = 1;
	int8_t x1938 = INT8_MAX;
	int32_t x1939 = -1;
	int8_t x1940 = INT8_MIN;
	volatile int32_t t22 = 291536;

	t22 = (x1937<<((x1938/x1939)-x1940));

	if (t22 != 2) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x2041 = 3957U;
	volatile int32_t x2043 = -446601589;
	int8_t x2044 = -1;
	volatile int32_t t23 = 4087;

	t23 = (x2041<<((x2042/x2043)-x2044));

	if (t23 != 7914) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x2049 = 17;
	int16_t x2050 = INT16_MIN;
	int64_t x2051 = INT64_MIN;
	static int8_t x2052 = -1;
	volatile int32_t t24 = 9672;

	t24 = (x2049<<((x2050/x2051)-x2052));

	if (t24 != 34) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x2085 = UINT16_MAX;
	int8_t x2086 = -1;
	int32_t x2087 = INT32_MIN;
	volatile int32_t t25 = -814773;

	t25 = (x2085<<((x2086/x2087)-x2088));

	if (t25 != 131070) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x2157 = 325U;
	int32_t x2158 = -1;
	int32_t x2159 = INT32_MAX;

	t26 = (x2157<<((x2158/x2159)-x2160));

	if (t26 != 650U) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x2186 = 1;
	uint32_t x2187 = 3U;

	t27 = (x2185<<((x2186/x2187)-x2188));

	if (t27 != 4100) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x2205 = 306U;
	volatile int64_t x2206 = -1LL;
	volatile uint32_t x2207 = UINT32_MAX;
	volatile int16_t x2208 = -1;
	int32_t t28 = 4;

	t28 = (x2205<<((x2206/x2207)-x2208));

	if (t28 != 612) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x2233 = 2;
	int16_t x2234 = INT16_MIN;
	static uint16_t x2235 = UINT16_MAX;
	uint32_t x2236 = UINT32_MAX;
	volatile int32_t t29 = 132359502;

	t29 = (x2233<<((x2234/x2235)-x2236));

	if (t29 != 4) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int32_t t30 = -7169211;

	t30 = (x2269<<((x2270/x2271)-x2272));

	if (t30 != 52) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x2305 = UINT8_MAX;
	static uint16_t x2306 = 961U;
	int32_t x2307 = INT32_MAX;
	static int32_t t31 = -635312968;

	t31 = (x2305<<((x2306/x2307)-x2308));

	if (t31 != 510) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x2362 = -3220;
	int64_t x2363 = INT64_MAX;
	int8_t x2364 = -1;
	int32_t t32 = 466697301;

	t32 = (x2361<<((x2362/x2363)-x2364));

	if (t32 != 254) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x2379 = INT16_MIN;
	static int32_t x2380 = -1;
	int32_t t33 = 878765;

	t33 = (x2377<<((x2378/x2379)-x2380));

	if (t33 != 254) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x2606 = -22;
	int8_t x2607 = -1;
	static int32_t x2608 = -1;
	volatile uint32_t t34 = 3U;

	t34 = (x2605<<((x2606/x2607)-x2608));

	if (t34 != 276824064U) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x2693 = 6U;
	static int32_t x2694 = INT32_MAX;
	static int32_t x2695 = -17286889;
	int8_t x2696 = INT8_MIN;
	volatile int32_t t35 = -9;

	t35 = (x2693<<((x2694/x2695)-x2696));

	if (t35 != 96) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x2877 = UINT16_MAX;
	uint16_t x2878 = UINT16_MAX;
	uint16_t x2879 = UINT16_MAX;
	int32_t x2880 = -1;
	static volatile int32_t t36 = -521174100;

	t36 = (x2877<<((x2878/x2879)-x2880));

	if (t36 != 262140) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x2885 = UINT64_MAX;
	uint16_t x2886 = 36U;
	volatile uint8_t x2887 = 37U;
	int8_t x2888 = 0;
	uint64_t t37 = UINT64_MAX;

	t37 = (x2885<<((x2886/x2887)-x2888));

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x2897 = 192;
	uint16_t x2898 = 3554U;
	static int64_t x2899 = INT64_MIN;
	int8_t x2900 = 0;

	t38 = (x2897<<((x2898/x2899)-x2900));

	if (t38 != 192) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x2905 = 3U;
	volatile uint32_t x2906 = 0U;
	int32_t x2908 = -1;
	static int32_t t39 = 96704;

	t39 = (x2905<<((x2906/x2907)-x2908));

	if (t39 != 6) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x2925 = UINT32_MAX;
	uint32_t x2926 = UINT32_MAX;
	uint32_t x2928 = UINT32_MAX;
	volatile uint32_t t40 = 1157005164U;

	t40 = (x2925<<((x2926/x2927)-x2928));

	if (t40 != 4294967292U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2969 = 1;
	int32_t x2970 = 4306;
	int64_t x2971 = -2342498930709946LL;
	int32_t x2972 = -1;

	t41 = (x2969<<((x2970/x2971)-x2972));

	if (t41 != 2) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x3014 = 52;
	static volatile int8_t x3015 = INT8_MAX;
	int8_t x3016 = -1;

	t42 = (x3013<<((x3014/x3015)-x3016));

	if (t42 != 2) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x3109 = 298090LLU;
	int32_t x3110 = -1;
	static volatile int32_t x3111 = -69278;
	static uint64_t t43 = 242628215LLU;

	t43 = (x3109<<((x3110/x3111)-x3112));

	if (t43 != 596180LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x3121 = 10;
	int64_t x3123 = INT64_MIN;
	volatile int16_t x3124 = -1;
	int32_t t44 = -82;

	t44 = (x3121<<((x3122/x3123)-x3124));

	if (t44 != 20) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x3197 = UINT8_MAX;
	static int16_t x3199 = 759;
	static int16_t x3200 = -1;
	volatile int32_t t45 = 1734;

	t45 = (x3197<<((x3198/x3199)-x3200));

	if (t45 != 510) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x3305 = 357181U;
	volatile int16_t x3306 = INT16_MAX;
	int16_t x3307 = INT16_MIN;
	int64_t x3308 = -1LL;
	uint32_t t46 = 30490397U;

	t46 = (x3305<<((x3306/x3307)-x3308));

	if (t46 != 714362U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x3505 = 51U;
	uint16_t x3506 = UINT16_MAX;
	uint64_t x3507 = 4087250831LLU;
	volatile int64_t x3508 = -1LL;
	static int32_t t47 = 1;

	t47 = (x3505<<((x3506/x3507)-x3508));

	if (t47 != 102) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x3513 = 1161;
	int32_t t48 = 0;

	t48 = (x3513<<((x3514/x3515)-x3516));

	if (t48 != 1161) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x3525 = UINT8_MAX;
	uint8_t x3526 = 25U;
	int32_t x3527 = INT32_MIN;
	int32_t x3528 = -1;
	int32_t t49 = -287942;

	t49 = (x3525<<((x3526/x3527)-x3528));

	if (t49 != 510) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x3617 = 10630U;
	int8_t x3618 = -1;
	volatile int8_t x3619 = 6;
	int32_t x3620 = -1;
	static int32_t t50 = 204;

	t50 = (x3617<<((x3618/x3619)-x3620));

	if (t50 != 21260) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x3629 = 26372900372663LL;
	int32_t x3630 = INT32_MIN;
	int32_t x3631 = INT32_MAX;
	uint64_t x3632 = UINT64_MAX;
	int64_t t51 = -152LL;

	t51 = (x3629<<((x3630/x3631)-x3632));

	if (t51 != 26372900372663LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x3682 = UINT64_MAX;
	uint32_t x3683 = UINT32_MAX;
	volatile uint32_t x3684 = UINT32_MAX;
	static volatile uint64_t t52 = 1532966LLU;

	t52 = (x3681<<((x3682/x3683)-x3684));

	if (t52 != 879738606854695004LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x3762 = 6U;
	int16_t x3763 = INT16_MAX;
	int16_t x3764 = 0;

	t53 = (x3761<<((x3762/x3763)-x3764));

	if (t53 != 28477209U) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x3793 = 13798U;
	uint8_t x3794 = 24U;
	static int8_t x3795 = INT8_MAX;

	t54 = (x3793<<((x3794/x3795)-x3796));

	if (t54 != 27596) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x3809 = 29419U;
	volatile int32_t x3810 = 86603107;
	static volatile int32_t x3811 = INT32_MIN;

	t55 = (x3809<<((x3810/x3811)-x3812));

	if (t55 != 241000448) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x3817 = INT16_MAX;
	int16_t x3820 = -1;
	int32_t t56 = 19430;

	t56 = (x3817<<((x3818/x3819)-x3820));

	if (t56 != 65534) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x3861 = UINT32_MAX;
	static int8_t x3862 = 5;
	volatile uint16_t x3863 = 767U;
	int8_t x3864 = -1;

	t57 = (x3861<<((x3862/x3863)-x3864));

	if (t57 != 4294967294U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x3927 = INT32_MIN;
	uint8_t x3928 = 0U;
	uint64_t t58 = 7577LLU;

	t58 = (x3925<<((x3926/x3927)-x3928));

	if (t58 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x3929 = UINT64_MAX;
	int64_t x3931 = INT64_MIN;
	volatile uint64_t t59 = 9969LLU;

	t59 = (x3929<<((x3930/x3931)-x3932));

	if (t59 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x3989 = 123219U;
	uint16_t x3990 = 13903U;
	int64_t x3991 = -3306389265767258201LL;
	int16_t x3992 = -1;
	volatile uint32_t t60 = 443421796U;

	t60 = (x3989<<((x3990/x3991)-x3992));

	if (t60 != 246438U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x4053 = 6;
	static int16_t x4054 = 1;
	int64_t x4055 = INT64_MAX;
	int64_t x4056 = -1LL;
	static volatile int32_t t61 = 139590988;

	t61 = (x4053<<((x4054/x4055)-x4056));

	if (t61 != 12) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x4125 = UINT16_MAX;
	int16_t x4126 = -1;
	uint32_t x4127 = UINT32_MAX;
	int32_t x4128 = -1;
	int32_t t62 = -4430;

	t62 = (x4125<<((x4126/x4127)-x4128));

	if (t62 != 262140) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x4197 = 3519293040LLU;
	int32_t x4198 = INT32_MIN;
	volatile uint64_t x4199 = 6820277205206468416LLU;
	static uint64_t t63 = 85LLU;

	t63 = (x4197<<((x4198/x4199)-x4200));

	if (t63 != 28154344320LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x4222 = 14U;
	int8_t x4223 = INT8_MAX;
	volatile int32_t t64 = -7431;

	t64 = (x4221<<((x4222/x4223)-x4224));

	if (t64 != 8) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x4233 = 2;
	int32_t x4234 = -1;
	uint16_t x4235 = UINT16_MAX;
	int8_t x4236 = -1;
	volatile int32_t t65 = -8180636;

	t65 = (x4233<<((x4234/x4235)-x4236));

	if (t65 != 4) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x4281 = INT16_MAX;
	static int32_t x4282 = 2;
	int32_t x4283 = INT32_MIN;
	volatile int32_t t66 = -7654;

	t66 = (x4281<<((x4282/x4283)-x4284));

	if (t66 != 65534) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x4289 = INT16_MAX;
	int16_t x4292 = -5;
	static volatile int32_t t67 = 52155;

	t67 = (x4289<<((x4290/x4291)-x4292));

	if (t67 != 524272) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x4317 = UINT16_MAX;
	int16_t x4318 = INT16_MAX;
	int64_t x4319 = INT64_MAX;
	static int32_t x4320 = -1;

	t68 = (x4317<<((x4318/x4319)-x4320));

	if (t68 != 131070) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x4321 = 228U;
	volatile int32_t x4322 = -1;
	int8_t x4323 = -1;
	int32_t x4324 = 0;
	volatile int32_t t69 = -12209;

	t69 = (x4321<<((x4322/x4323)-x4324));

	if (t69 != 456) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x4353 = 2398873558534965044LLU;
	volatile uint64_t x4354 = 3296371LLU;
	int32_t x4355 = INT32_MAX;
	volatile uint64_t t70 = 6971923844LLU;

	t70 = (x4353<<((x4354/x4355)-x4356));

	if (t70 != 4797747117069930088LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x4365 = 11323094;
	int8_t x4366 = INT8_MAX;
	int16_t x4368 = -1;

	t71 = (x4365<<((x4366/x4367)-x4368));

	if (t71 != 22646188) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x4377 = 2U;
	int64_t x4378 = -1LL;
	int8_t x4379 = -1;
	uint64_t x4380 = UINT64_MAX;
	static volatile int32_t t72 = -12793;

	t72 = (x4377<<((x4378/x4379)-x4380));

	if (t72 != 8) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x4441 = INT8_MAX;
	uint8_t x4443 = 1U;
	int8_t x4444 = -1;

	t73 = (x4441<<((x4442/x4443)-x4444));

	if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x4485 = 90434743U;
	int16_t x4486 = 411;
	uint32_t t74 = 1987004U;

	t74 = (x4485<<((x4486/x4487)-x4488));

	if (t74 != 1446955888U) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x4553 = UINT64_MAX;
	static uint64_t x4555 = 5958836LLU;
	volatile int16_t x4556 = -1;

	t75 = (x4553<<((x4554/x4555)-x4556));

	if (t75 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x4575 = INT64_MAX;
	volatile uint32_t t76 = 194U;

	t76 = (x4573<<((x4574/x4575)-x4576));

	if (t76 != 648U) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x4605 = 493U;
	volatile uint64_t x4607 = 64176LLU;
	int16_t x4608 = -1;
	volatile int32_t t77 = -55786755;

	t77 = (x4605<<((x4606/x4607)-x4608));

	if (t77 != 986) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x4621 = UINT8_MAX;
	uint8_t x4622 = 122U;
	int64_t x4623 = INT64_MAX;
	static int16_t x4624 = -1;
	int32_t t78 = 1;

	t78 = (x4621<<((x4622/x4623)-x4624));

	if (t78 != 510) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x4649 = 55;
	volatile int16_t x4650 = 4;
	volatile int32_t x4651 = -1;
	int8_t x4652 = -16;

	t79 = (x4649<<((x4650/x4651)-x4652));

	if (t79 != 225280) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x4881 = 536U;
	volatile int32_t x4882 = 21723;
	int16_t x4883 = INT16_MIN;
	int16_t x4884 = -2;

	t80 = (x4881<<((x4882/x4883)-x4884));

	if (t80 != 2144) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x5002 = INT16_MIN;
	int32_t x5004 = -1;
	static int32_t t81 = -1;

	t81 = (x5001<<((x5002/x5003)-x5004));

	if (t81 != 978) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x5013 = UINT32_MAX;
	int8_t x5014 = -8;
	int16_t x5015 = INT16_MIN;
	int16_t x5016 = -7;
	static uint32_t t82 = 25205841U;

	t82 = (x5013<<((x5014/x5015)-x5016));

	if (t82 != 4294967168U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x5017 = 51U;
	int64_t x5018 = INT64_MAX;
	int64_t x5019 = INT64_MAX;
	int8_t x5020 = -1;
	volatile int32_t t83 = -105067210;

	t83 = (x5017<<((x5018/x5019)-x5020));

	if (t83 != 204) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x5373 = 3931U;
	static uint64_t x5374 = UINT64_MAX;
	static int16_t x5375 = -1;
	int16_t x5376 = 0;
	volatile int32_t t84 = 512004051;

	t84 = (x5373<<((x5374/x5375)-x5376));

	if (t84 != 7862) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x5541 = 104253U;
	static volatile uint16_t x5542 = 8731U;
	int64_t x5543 = 15633002033LL;
	uint64_t x5544 = UINT64_MAX;
	uint32_t t85 = 15479997U;

	t85 = (x5541<<((x5542/x5543)-x5544));

	if (t85 != 208506U) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x5685 = 106U;
	static uint32_t x5687 = 179U;
	int64_t x5688 = -1LL;
	static volatile int32_t t86 = 194260;

	t86 = (x5685<<((x5686/x5687)-x5688));

	if (t86 != 212) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x5709 = UINT8_MAX;
	volatile uint64_t x5711 = 2985447LLU;
	int32_t t87 = -1050007316;

	t87 = (x5709<<((x5710/x5711)-x5712));

	if (t87 != 8160) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x5737 = 3;
	int64_t x5738 = -1LL;
	uint16_t x5739 = UINT16_MAX;
	static volatile int32_t x5740 = -26;
	static int32_t t88 = -2001356;

	t88 = (x5737<<((x5738/x5739)-x5740));

	if (t88 != 201326592) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x5742 = 6U;
	static uint8_t x5743 = UINT8_MAX;
	volatile uint64_t x5744 = UINT64_MAX;
	static volatile int32_t t89 = -137713;

	t89 = (x5741<<((x5742/x5743)-x5744));

	if (t89 != 254) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x5745 = UINT8_MAX;
	uint32_t x5746 = UINT32_MAX;
	int16_t x5747 = INT16_MIN;
	int64_t x5748 = -1LL;
	int32_t t90 = 1011;

	t90 = (x5745<<((x5746/x5747)-x5748));

	if (t90 != 1020) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x5829 = INT8_MAX;
	uint8_t x5830 = 0U;
	int8_t x5832 = 0;
	static volatile int32_t t91 = -1926224;

	t91 = (x5829<<((x5830/x5831)-x5832));

	if (t91 != 127) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x5849 = 2071220LL;

	t92 = (x5849<<((x5850/x5851)-x5852));

	if (t92 != 4142440LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x5961 = 2U;
	int32_t x5962 = -1;
	int8_t x5963 = INT8_MAX;
	static int32_t x5964 = -1;
	uint32_t t93 = 30673348U;

	t93 = (x5961<<((x5962/x5963)-x5964));

	if (t93 != 4U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x5985 = 8910U;
	uint64_t x5987 = 53164LLU;
	int8_t x5988 = -11;
	volatile uint32_t t94 = 11798574U;

	t94 = (x5985<<((x5986/x5987)-x5988));

	if (t94 != 18247680U) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint16_t x6038 = 83U;
	uint32_t x6039 = 2259U;
	static int8_t x6040 = -1;

	t95 = (x6037<<((x6038/x6039)-x6040));

	if (t95 != 4294967294U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x6041 = INT8_MAX;
	uint8_t x6042 = 112U;
	static uint32_t x6043 = 214U;

	t96 = (x6041<<((x6042/x6043)-x6044));

	if (t96 != 254) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x6061 = 65609231LLU;
	static int16_t x6062 = -1;
	int32_t x6063 = -1;
	int16_t x6064 = 1;
	static uint64_t t97 = 746LLU;

	t97 = (x6061<<((x6062/x6063)-x6064));

	if (t97 != 65609231LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x6089 = INT64_MAX;
	static int8_t x6090 = 1;
	int16_t x6092 = -1;
	static volatile int64_t t98 = INT64_MAX;

	t98 = (x6089<<((x6090/x6091)-x6092));

	if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x6153 = UINT16_MAX;
	static uint32_t x6154 = UINT32_MAX;
	static int32_t x6155 = INT32_MIN;
	static volatile int64_t x6156 = -1LL;
	static int32_t t99 = 22;

	t99 = (x6153<<((x6154/x6155)-x6156));

	if (t99 != 262140) { NG(); } else { ; }
	
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

