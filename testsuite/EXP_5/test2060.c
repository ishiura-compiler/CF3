#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x227 = 3;
volatile int16_t x228 = -1;
int8_t x396 = -2;
volatile uint32_t x1001 = 4U;
uint32_t x1004 = UINT32_MAX;
static volatile uint8_t x1044 = 0U;
uint16_t x1110 = UINT16_MAX;
volatile int16_t x1112 = -6768;
volatile int32_t t9 = INT32_MAX;
int32_t x1359 = -1;
volatile uint8_t x1400 = 7U;
uint32_t t12 = 1155743255U;
static volatile int64_t x1434 = INT64_MIN;
int32_t t13 = -600948962;
int16_t x1510 = -1;
static int64_t x1546 = -1LL;
int8_t x1547 = -1;
uint16_t x1653 = 31U;
uint32_t x1655 = UINT32_MAX;
uint64_t x1967 = UINT64_MAX;
volatile int32_t t19 = -1149;
static uint64_t x2015 = UINT64_MAX;
volatile uint32_t t20 = UINT32_MAX;
int32_t x2084 = -1008213997;
static volatile int64_t x2150 = -1LL;
int8_t x2151 = -1;
volatile int32_t t24 = -79;
uint16_t x2281 = UINT16_MAX;
int32_t x2283 = INT32_MAX;
uint32_t x2345 = 16U;
int64_t x2453 = 13LL;
uint32_t x2454 = UINT32_MAX;
uint8_t x2456 = UINT8_MAX;
volatile int64_t t28 = -28741581LL;
int32_t x2587 = -1;
int32_t x2588 = -4922;
uint32_t x2874 = 6U;
int16_t x2980 = 1548;
volatile uint32_t x3071 = UINT32_MAX;
uint64_t t39 = 0LLU;
volatile uint8_t x3157 = UINT8_MAX;
static uint8_t x3164 = 0U;
int32_t t41 = 24963;
int32_t x3169 = 0;
volatile int16_t x3216 = INT16_MAX;
int64_t x3266 = -1LL;
uint16_t x3431 = UINT16_MAX;
int32_t x3432 = -10183624;
int64_t x3463 = INT64_MIN;
uint8_t x3633 = 10U;
int32_t t49 = 1891;
int8_t x4104 = -1;
static uint64_t x4113 = UINT64_MAX;
uint8_t x4193 = UINT8_MAX;
volatile int8_t x4261 = 0;
int64_t x4342 = INT64_MIN;
volatile int32_t t58 = -134;
static uint64_t x4365 = 28620681LLU;
int64_t x4367 = INT64_MIN;
int8_t x4437 = INT8_MAX;
int8_t x4438 = 20;
volatile int32_t t60 = 6712511;
int16_t x4529 = INT16_MAX;
uint64_t x4534 = 1028728914LLU;
uint8_t x4565 = 2U;
int16_t x4748 = 1618;
static volatile int16_t x4754 = INT16_MIN;
static uint8_t x4756 = 0U;
uint32_t x4776 = 0U;
volatile int32_t x4793 = INT32_MAX;
int32_t t67 = INT32_MAX;
static uint8_t x4841 = 26U;
int64_t x5033 = 540547981317LL;
int64_t t69 = -188068127066LL;
static int16_t x5123 = -1;
int16_t x5210 = -1;
uint64_t x5211 = UINT64_MAX;
uint32_t t72 = 55093U;
static int64_t t77 = INT64_MAX;
int16_t x5840 = INT16_MIN;
int64_t x5845 = 1010285161615LL;
volatile int16_t x5848 = INT16_MIN;
static volatile int64_t t82 = 1718LL;
int8_t x5976 = 0;
int32_t t85 = INT32_MAX;
int16_t x6135 = INT16_MIN;
uint32_t t86 = 26016844U;
static volatile uint32_t x6160 = UINT32_MAX;
int8_t x6164 = INT8_MIN;
int64_t x6195 = -1LL;
static uint64_t x6258 = UINT64_MAX;
static int32_t x6452 = -862615006;
uint32_t t93 = 605U;
static int64_t x6654 = -76204141658824LL;
volatile uint8_t x6669 = 1U;
int64_t x6670 = INT64_MAX;
static int32_t x6671 = -1;
static int32_t t95 = -362;
int32_t x6688 = INT32_MIN;
uint64_t x6742 = UINT64_MAX;
uint64_t x6743 = UINT64_MAX;
static int64_t x6744 = INT64_MIN;
int32_t t97 = -151471;
int64_t x6774 = -1LL;
uint8_t x6927 = 123U;


void f0(void) {
	int64_t x25 = INT64_MAX;
	uint64_t x26 = UINT64_MAX;
	int32_t x27 = -1;
	int32_t x28 = INT32_MIN;
	static int64_t t0 = INT64_MAX;

	t0 = (x25<<((x26^x27)*x28));

	if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x225 = 14U;
	int16_t x226 = -1;
	volatile int32_t t1 = -3;

	t1 = (x225<<((x226^x227)*x228));

	if (t1 != 224) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x393 = 58U;
	uint8_t x394 = UINT8_MAX;
	uint8_t x395 = UINT8_MAX;
	uint32_t t2 = 24451475U;

	t2 = (x393<<((x394^x395)*x396));

	if (t2 != 58U) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x529 = 7U;
	int64_t x530 = -1LL;
	int8_t x531 = -1;
	int64_t x532 = -3LL;
	uint32_t t3 = 606063899U;

	t3 = (x529<<((x530^x531)*x532));

	if (t3 != 7U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x577 = 116188780141198LLU;
	uint64_t x578 = UINT64_MAX;
	int8_t x579 = -1;
	volatile uint32_t x580 = 1271866U;
	uint64_t t4 = 1953833560959693LLU;

	t4 = (x577<<((x578^x579)*x580));

	if (t4 != 116188780141198LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x873 = INT32_MAX;
	int64_t x874 = -1LL;
	static int64_t x875 = -1LL;
	int64_t x876 = -207281874866609LL;
	int32_t t5 = INT32_MAX;

	t5 = (x873<<((x874^x875)*x876));

	if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x1002 = 3U;
	int8_t x1003 = -28;
	static volatile uint32_t t6 = 22126U;

	t6 = (x1001<<((x1002^x1003)*x1004));

	if (t6 != 134217728U) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x1029 = UINT8_MAX;
	int16_t x1030 = 1;
	int16_t x1031 = 1;
	uint32_t x1032 = 72604993U;
	volatile int32_t t7 = -95505;

	t7 = (x1029<<((x1030^x1031)*x1032));

	if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x1041 = INT64_MAX;
	int32_t x1042 = INT32_MIN;
	uint64_t x1043 = UINT64_MAX;
	int64_t t8 = INT64_MAX;

	t8 = (x1041<<((x1042^x1043)*x1044));

	if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x1109 = INT32_MAX;
	volatile uint16_t x1111 = UINT16_MAX;

	t9 = (x1109<<((x1110^x1111)*x1112));

	if (t9 != INT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x1225 = 6738U;
	int16_t x1226 = -1;
	int64_t x1227 = -1LL;
	int32_t x1228 = 483722;
	volatile int32_t t10 = 0;

	t10 = (x1225<<((x1226^x1227)*x1228));

	if (t10 != 6738) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x1357 = UINT8_MAX;
	uint8_t x1358 = 3U;
	uint64_t x1360 = UINT64_MAX;
	int32_t t11 = 23887758;

	t11 = (x1357<<((x1358^x1359)*x1360));

	if (t11 != 4080) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x1397 = 27U;
	static int32_t x1398 = -1;
	static int32_t x1399 = -1;

	t12 = (x1397<<((x1398^x1399)*x1400));

	if (t12 != 27U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x1433 = INT16_MAX;
	static int32_t x1435 = INT32_MAX;
	volatile int8_t x1436 = 0;

	t13 = (x1433<<((x1434^x1435)*x1436));

	if (t13 != 32767) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x1509 = INT64_MAX;
	int8_t x1511 = -1;
	static int16_t x1512 = INT16_MIN;
	volatile int64_t t14 = INT64_MAX;

	t14 = (x1509<<((x1510^x1511)*x1512));

	if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x1545 = 3;
	int8_t x1548 = -1;
	static volatile int32_t t15 = 2814;

	t15 = (x1545<<((x1546^x1547)*x1548));

	if (t15 != 3) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x1577 = INT8_MAX;
	uint8_t x1578 = UINT8_MAX;
	uint64_t x1579 = UINT64_MAX;
	volatile int64_t x1580 = INT64_MIN;
	volatile int32_t t16 = 3827557;

	t16 = (x1577<<((x1578^x1579)*x1580));

	if (t16 != 127) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x1649 = 0U;
	volatile int32_t x1650 = INT32_MAX;
	static int16_t x1651 = INT16_MIN;
	volatile uint16_t x1652 = 0U;
	volatile int32_t t17 = 11;

	t17 = (x1649<<((x1650^x1651)*x1652));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x1654 = -1;
	volatile int64_t x1656 = 13288205920489LL;
	static int32_t t18 = 74626;

	t18 = (x1653<<((x1654^x1655)*x1656));

	if (t18 != 31) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x1965 = 38U;
	volatile int16_t x1966 = -657;
	static int64_t x1968 = INT64_MIN;

	t19 = (x1965<<((x1966^x1967)*x1968));

	if (t19 != 38) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x2013 = UINT32_MAX;
	static volatile int32_t x2014 = -1;
	int8_t x2016 = INT8_MIN;

	t20 = (x2013<<((x2014^x2015)*x2016));

	if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x2077 = 2475591086656108637LLU;
	int32_t x2078 = -1;
	uint8_t x2079 = 49U;
	int8_t x2080 = -1;
	static uint64_t t21 = 24034877661654336LLU;

	t21 = (x2077<<((x2078^x2079)*x2080));

	if (t21 != 16245609755832221696LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x2081 = 0U;
	int8_t x2082 = INT8_MAX;
	int8_t x2083 = INT8_MAX;
	int32_t t22 = 90321;

	t22 = (x2081<<((x2082^x2083)*x2084));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x2093 = 25;
	uint64_t x2094 = UINT64_MAX;
	int16_t x2095 = -1638;
	volatile int8_t x2096 = 0;
	int32_t t23 = -151701;

	t23 = (x2093<<((x2094^x2095)*x2096));

	if (t23 != 25) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x2149 = INT8_MAX;
	static int64_t x2152 = INT64_MIN;

	t24 = (x2149<<((x2150^x2151)*x2152));

	if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x2282 = 357024998U;
	volatile uint64_t x2284 = 0LLU;
	static volatile int32_t t25 = 5883;

	t25 = (x2281<<((x2282^x2283)*x2284));

	if (t25 != 65535) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x2289 = UINT16_MAX;
	static int8_t x2290 = -1;
	int16_t x2291 = -1;
	int64_t x2292 = INT64_MIN;
	static int32_t t26 = -6;

	t26 = (x2289<<((x2290^x2291)*x2292));

	if (t26 != 65535) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x2346 = -1;
	volatile int8_t x2347 = -1;
	int64_t x2348 = -1LL;
	static uint32_t t27 = 80876U;

	t27 = (x2345<<((x2346^x2347)*x2348));

	if (t27 != 16U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x2455 = -1;

	t28 = (x2453<<((x2454^x2455)*x2456));

	if (t28 != 13LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x2477 = 1U;
	int8_t x2478 = -1;
	int64_t x2479 = -1LL;
	static volatile int64_t x2480 = -1LL;
	int32_t t29 = 230;

	t29 = (x2477<<((x2478^x2479)*x2480));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x2485 = 1944U;
	volatile int8_t x2486 = -1;
	uint32_t x2487 = UINT32_MAX;
	volatile uint16_t x2488 = 3228U;
	volatile int32_t t30 = 22675;

	t30 = (x2485<<((x2486^x2487)*x2488));

	if (t30 != 1944) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x2585 = 999U;
	int16_t x2586 = -1;
	static volatile uint32_t t31 = 1973103U;

	t31 = (x2585<<((x2586^x2587)*x2588));

	if (t31 != 999U) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x2609 = 52U;
	uint64_t x2610 = UINT64_MAX;
	int32_t x2611 = -1;
	int64_t x2612 = -1LL;
	int32_t t32 = -805002;

	t32 = (x2609<<((x2610^x2611)*x2612));

	if (t32 != 52) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x2633 = 124675295LLU;
	uint8_t x2634 = 6U;
	int64_t x2635 = -1LL;
	int32_t x2636 = -1;
	static volatile uint64_t t33 = 30917745877822495LLU;

	t33 = (x2633<<((x2634^x2635)*x2636));

	if (t33 != 15958437760LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x2677 = 1U;
	int16_t x2678 = INT16_MIN;
	int16_t x2679 = 4;
	static int64_t x2680 = 0LL;
	int32_t t34 = -13573;

	t34 = (x2677<<((x2678^x2679)*x2680));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x2861 = 883036909628262514LLU;
	int8_t x2862 = -1;
	volatile int32_t x2863 = -1;
	int8_t x2864 = -5;
	uint64_t t35 = 201442099171187LLU;

	t35 = (x2861<<((x2862^x2863)*x2864));

	if (t35 != 883036909628262514LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x2873 = UINT8_MAX;
	int64_t x2875 = INT64_MAX;
	int32_t x2876 = 0;
	volatile int32_t t36 = 23002;

	t36 = (x2873<<((x2874^x2875)*x2876));

	if (t36 != 255) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x2977 = 315030929639565098LL;
	int8_t x2978 = -1;
	volatile uint32_t x2979 = UINT32_MAX;
	int64_t t37 = -3236076LL;

	t37 = (x2977<<((x2978^x2979)*x2980));

	if (t37 != 315030929639565098LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x3069 = INT32_MAX;
	volatile int8_t x3070 = INT8_MIN;
	uint16_t x3072 = 0U;
	int32_t t38 = INT32_MAX;

	t38 = (x3069<<((x3070^x3071)*x3072));

	if (t38 != INT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x3105 = 75269574418254614LLU;
	int8_t x3106 = -7;
	uint32_t x3107 = 7U;
	static int32_t x3108 = INT32_MAX;

	t39 = (x3105<<((x3106^x3107)*x3108));

	if (t39 != 301078297673018456LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x3158 = -1;
	int16_t x3159 = -1;
	int16_t x3160 = INT16_MIN;
	volatile int32_t t40 = -2057;

	t40 = (x3157<<((x3158^x3159)*x3160));

	if (t40 != 255) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x3161 = 17U;
	static uint64_t x3162 = 1LLU;
	int32_t x3163 = -3459;

	t41 = (x3161<<((x3162^x3163)*x3164));

	if (t41 != 17) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x3170 = INT64_MIN;
	static int64_t x3171 = INT64_MIN;
	int32_t x3172 = INT32_MIN;
	volatile int32_t t42 = -34;

	t42 = (x3169<<((x3170^x3171)*x3172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x3213 = UINT16_MAX;
	volatile int16_t x3214 = -1;
	uint64_t x3215 = UINT64_MAX;
	volatile int32_t t43 = -1971;

	t43 = (x3213<<((x3214^x3215)*x3216));

	if (t43 != 65535) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x3265 = 11528256U;
	static int64_t x3267 = -1LL;
	uint8_t x3268 = 46U;
	static uint32_t t44 = 494U;

	t44 = (x3265<<((x3266^x3267)*x3268));

	if (t44 != 11528256U) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x3429 = 106U;
	uint16_t x3430 = UINT16_MAX;
	int32_t t45 = 75;

	t45 = (x3429<<((x3430^x3431)*x3432));

	if (t45 != 106) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x3461 = INT16_MAX;
	volatile int64_t x3462 = -1LL;
	uint8_t x3464 = 0U;
	int32_t t46 = 571059;

	t46 = (x3461<<((x3462^x3463)*x3464));

	if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x3497 = 0;
	uint16_t x3498 = 14U;
	volatile int32_t x3499 = -1;
	uint64_t x3500 = UINT64_MAX;
	int32_t t47 = 1004;

	t47 = (x3497<<((x3498^x3499)*x3500));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x3621 = 209938;
	volatile int8_t x3622 = INT8_MIN;
	volatile int8_t x3623 = INT8_MAX;
	uint8_t x3624 = 0U;
	int32_t t48 = 89432374;

	t48 = (x3621<<((x3622^x3623)*x3624));

	if (t48 != 209938) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x3634 = 52182953432350948LLU;
	int8_t x3635 = 22;
	volatile uint8_t x3636 = 0U;

	t49 = (x3633<<((x3634^x3635)*x3636));

	if (t49 != 10) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x3809 = INT64_MAX;
	volatile int16_t x3810 = INT16_MIN;
	static int16_t x3811 = INT16_MIN;
	volatile int16_t x3812 = INT16_MIN;
	int64_t t50 = INT64_MAX;

	t50 = (x3809<<((x3810^x3811)*x3812));

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x3877 = 3U;
	int16_t x3878 = -12;
	int32_t x3879 = -422515700;
	static uint16_t x3880 = 0U;
	volatile int32_t t51 = -848866805;

	t51 = (x3877<<((x3878^x3879)*x3880));

	if (t51 != 3) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x4101 = INT16_MAX;
	uint32_t x4102 = UINT32_MAX;
	int32_t x4103 = -1;
	volatile int32_t t52 = 944506921;

	t52 = (x4101<<((x4102^x4103)*x4104));

	if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x4109 = 255U;
	int16_t x4110 = INT16_MIN;
	int16_t x4111 = INT16_MIN;
	uint16_t x4112 = 696U;
	volatile int32_t t53 = 52;

	t53 = (x4109<<((x4110^x4111)*x4112));

	if (t53 != 255) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x4114 = UINT8_MAX;
	int8_t x4115 = -1;
	volatile uint16_t x4116 = 0U;
	uint64_t t54 = UINT64_MAX;

	t54 = (x4113<<((x4114^x4115)*x4116));

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x4125 = INT32_MAX;
	int8_t x4126 = -1;
	uint32_t x4127 = UINT32_MAX;
	static int32_t x4128 = -1;
	volatile int32_t t55 = INT32_MAX;

	t55 = (x4125<<((x4126^x4127)*x4128));

	if (t55 != INT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x4194 = INT8_MIN;
	int8_t x4195 = INT8_MIN;
	volatile int8_t x4196 = INT8_MAX;
	volatile int32_t t56 = -6623042;

	t56 = (x4193<<((x4194^x4195)*x4196));

	if (t56 != 255) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x4262 = INT8_MIN;
	int8_t x4263 = INT8_MIN;
	uint32_t x4264 = 0U;
	volatile int32_t t57 = -20;

	t57 = (x4261<<((x4262^x4263)*x4264));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x4341 = 7;
	static int64_t x4343 = INT64_MAX;
	int32_t x4344 = -1;

	t58 = (x4341<<((x4342^x4343)*x4344));

	if (t58 != 14) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x4366 = 3U;
	int64_t x4368 = 0LL;
	uint64_t t59 = 1112269745914135305LLU;

	t59 = (x4365<<((x4366^x4367)*x4368));

	if (t59 != 28620681LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x4439 = INT64_MAX;
	int16_t x4440 = 0;

	t60 = (x4437<<((x4438^x4439)*x4440));

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x4530 = INT32_MIN;
	uint32_t x4531 = UINT32_MAX;
	int64_t x4532 = 0LL;
	int32_t t61 = 229038258;

	t61 = (x4529<<((x4530^x4531)*x4532));

	if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x4533 = 1385689469543688LL;
	int16_t x4535 = INT16_MIN;
	static int64_t x4536 = INT64_MIN;
	int64_t t62 = -17397325928647710LL;

	t62 = (x4533<<((x4534^x4535)*x4536));

	if (t62 != 1385689469543688LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x4566 = 0U;
	int64_t x4567 = INT64_MIN;
	uint64_t x4568 = 1362930379342LLU;
	int32_t t63 = 1;

	t63 = (x4565<<((x4566^x4567)*x4568));

	if (t63 != 2) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint16_t x4745 = 8666U;
	int64_t x4746 = -1LL;
	int64_t x4747 = -1LL;
	volatile int32_t t64 = 357;

	t64 = (x4745<<((x4746^x4747)*x4748));

	if (t64 != 8666) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x4753 = INT16_MAX;
	uint8_t x4755 = UINT8_MAX;
	volatile int32_t t65 = 80145249;

	t65 = (x4753<<((x4754^x4755)*x4756));

	if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x4773 = 3583U;
	static int16_t x4774 = INT16_MIN;
	int64_t x4775 = 35849634988457955LL;
	int32_t t66 = -7;

	t66 = (x4773<<((x4774^x4775)*x4776));

	if (t66 != 3583) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x4794 = INT64_MIN;
	int64_t x4795 = INT64_MIN;
	int16_t x4796 = INT16_MIN;

	t67 = (x4793<<((x4794^x4795)*x4796));

	if (t67 != INT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x4842 = 699U;
	uint32_t x4843 = UINT32_MAX;
	int8_t x4844 = 0;
	int32_t t68 = 377644;

	t68 = (x4841<<((x4842^x4843)*x4844));

	if (t68 != 26) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x5034 = -1;
	uint64_t x5035 = 14097LLU;
	int64_t x5036 = INT64_MIN;

	t69 = (x5033<<((x5034^x5035)*x5036));

	if (t69 != 540547981317LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x5121 = UINT64_MAX;
	volatile uint64_t x5122 = UINT64_MAX;
	uint16_t x5124 = 274U;
	volatile uint64_t t70 = UINT64_MAX;

	t70 = (x5121<<((x5122^x5123)*x5124));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x5173 = 2203915596LL;
	int32_t x5174 = INT32_MIN;
	volatile int32_t x5175 = INT32_MIN;
	volatile int32_t x5176 = INT32_MAX;
	int64_t t71 = -229689878178LL;

	t71 = (x5173<<((x5174^x5175)*x5176));

	if (t71 != 2203915596LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x5209 = 1028868U;
	int16_t x5212 = INT16_MIN;

	t72 = (x5209<<((x5210^x5211)*x5212));

	if (t72 != 1028868U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x5261 = 30U;
	int64_t x5262 = -1LL;
	volatile int32_t x5263 = -1;
	uint16_t x5264 = 4U;
	volatile int32_t t73 = 10;

	t73 = (x5261<<((x5262^x5263)*x5264));

	if (t73 != 30) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x5317 = 149LLU;
	int8_t x5318 = -61;
	static int8_t x5319 = 23;
	int32_t x5320 = -1;
	uint64_t t74 = 117042753LLU;

	t74 = (x5317<<((x5318^x5319)*x5320));

	if (t74 != 2621235720617984LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x5357 = 35428568372459624LLU;
	static uint64_t x5358 = 665LLU;
	volatile uint16_t x5359 = 105U;
	static int64_t x5360 = INT64_MIN;
	uint64_t t75 = 200200269788LLU;

	t75 = (x5357<<((x5358^x5359)*x5360));

	if (t75 != 35428568372459624LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x5501 = 32U;
	int32_t x5502 = INT32_MIN;
	int64_t x5503 = 0LL;
	int16_t x5504 = 0;
	int32_t t76 = 1;

	t76 = (x5501<<((x5502^x5503)*x5504));

	if (t76 != 32) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x5605 = INT64_MAX;
	int32_t x5606 = -1;
	uint32_t x5607 = UINT32_MAX;
	int32_t x5608 = INT32_MIN;

	t77 = (x5605<<((x5606^x5607)*x5608));

	if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x5657 = UINT64_MAX;
	static int8_t x5658 = INT8_MAX;
	volatile int8_t x5659 = INT8_MIN;
	int8_t x5660 = -36;
	volatile uint64_t t78 = 3150094903LLU;

	t78 = (x5657<<((x5658^x5659)*x5660));

	if (t78 != 18446744004990074880LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x5761 = 1U;
	volatile int8_t x5762 = -1;
	int64_t x5763 = -1LL;
	static volatile int64_t x5764 = INT64_MAX;
	int32_t t79 = -453837;

	t79 = (x5761<<((x5762^x5763)*x5764));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x5829 = 260U;
	uint32_t x5830 = 50U;
	volatile int64_t x5831 = 16404984LL;
	int32_t x5832 = 0;
	static volatile int32_t t80 = 3;

	t80 = (x5829<<((x5830^x5831)*x5832));

	if (t80 != 260) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x5837 = 17740U;
	int32_t x5838 = -1;
	volatile uint32_t x5839 = UINT32_MAX;
	volatile uint32_t t81 = 5082061U;

	t81 = (x5837<<((x5838^x5839)*x5840));

	if (t81 != 17740U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x5846 = -1;
	int32_t x5847 = -1;

	t82 = (x5845<<((x5846^x5847)*x5848));

	if (t82 != 1010285161615LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x5933 = INT16_MAX;
	volatile int32_t x5934 = 15091740;
	int8_t x5935 = -1;
	volatile uint64_t x5936 = 0LLU;
	volatile int32_t t83 = 129004;

	t83 = (x5933<<((x5934^x5935)*x5936));

	if (t83 != 32767) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x5973 = 29715625633095165LLU;
	volatile int32_t x5974 = -129264968;
	static volatile int64_t x5975 = 1565789415385662LL;
	uint64_t t84 = 26034423868LLU;

	t84 = (x5973<<((x5974^x5975)*x5976));

	if (t84 != 29715625633095165LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x6085 = INT32_MAX;
	static int32_t x6086 = -1;
	uint32_t x6087 = 267U;
	int32_t x6088 = INT32_MIN;

	t85 = (x6085<<((x6086^x6087)*x6088));

	if (t85 != INT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x6133 = 880U;
	int32_t x6134 = INT32_MIN;
	int8_t x6136 = 0;

	t86 = (x6133<<((x6134^x6135)*x6136));

	if (t86 != 880U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x6157 = INT64_MAX;
	int64_t x6158 = INT64_MAX;
	static volatile int64_t x6159 = INT64_MAX;
	static int64_t t87 = INT64_MAX;

	t87 = (x6157<<((x6158^x6159)*x6160));

	if (t87 != INT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x6161 = UINT32_MAX;
	volatile uint16_t x6162 = UINT16_MAX;
	uint16_t x6163 = UINT16_MAX;
	uint32_t t88 = UINT32_MAX;

	t88 = (x6161<<((x6162^x6163)*x6164));

	if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x6193 = 13225U;
	uint8_t x6194 = 3U;
	int64_t x6196 = -1LL;
	volatile int32_t t89 = 3;

	t89 = (x6193<<((x6194^x6195)*x6196));

	if (t89 != 211600) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x6257 = 521U;
	int32_t x6259 = -139;
	int64_t x6260 = INT64_MIN;
	static int32_t t90 = -1006338010;

	t90 = (x6257<<((x6258^x6259)*x6260));

	if (t90 != 521) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x6389 = 9530U;
	int8_t x6390 = INT8_MIN;
	int32_t x6391 = -2704420;
	volatile uint16_t x6392 = 0U;
	int32_t t91 = 1106049;

	t91 = (x6389<<((x6390^x6391)*x6392));

	if (t91 != 9530) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x6449 = 56U;
	int8_t x6450 = 5;
	volatile uint8_t x6451 = 5U;
	int32_t t92 = 1627;

	t92 = (x6449<<((x6450^x6451)*x6452));

	if (t92 != 56) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x6545 = 804346U;
	int64_t x6546 = 8525708641609886LL;
	int8_t x6547 = 2;
	uint16_t x6548 = 0U;

	t93 = (x6545<<((x6546^x6547)*x6548));

	if (t93 != 804346U) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x6653 = 61397908U;
	int32_t x6655 = -1;
	volatile int16_t x6656 = 0;
	static uint32_t t94 = 24U;

	t94 = (x6653<<((x6654^x6655)*x6656));

	if (t94 != 61397908U) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x6672 = 0U;

	t95 = (x6669<<((x6670^x6671)*x6672));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x6685 = UINT64_MAX;
	int32_t x6686 = -1;
	int8_t x6687 = -1;
	uint64_t t96 = UINT64_MAX;

	t96 = (x6685<<((x6686^x6687)*x6688));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x6741 = UINT16_MAX;

	t97 = (x6741<<((x6742^x6743)*x6744));

	if (t97 != 65535) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x6773 = UINT64_MAX;
	int32_t x6775 = INT32_MIN;
	uint64_t x6776 = 0LLU;
	volatile uint64_t t98 = UINT64_MAX;

	t98 = (x6773<<((x6774^x6775)*x6776));

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x6925 = UINT8_MAX;
	volatile uint32_t x6926 = 1417217U;
	int32_t x6928 = INT32_MIN;
	static int32_t t99 = -740997693;

	t99 = (x6925<<((x6926^x6927)*x6928));

	if (t99 != 255) { NG(); } else { ; }
	
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

