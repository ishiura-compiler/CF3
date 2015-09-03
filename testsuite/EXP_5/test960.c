#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x286 = 6808856U;
volatile uint8_t x287 = 2U;
volatile uint32_t t3 = 2U;
uint8_t x291 = 0U;
static int64_t x437 = INT64_MAX;
static volatile uint8_t x439 = 4U;
volatile int64_t x489 = 3LL;
static int32_t x558 = INT32_MAX;
int8_t x560 = -1;
uint8_t x587 = 6U;
int16_t x660 = INT16_MIN;
volatile uint32_t t10 = 150U;
int64_t x745 = INT64_MAX;
volatile uint64_t x822 = UINT64_MAX;
volatile int64_t t12 = 228245735048LL;
int64_t x1117 = INT64_MIN;
volatile int64_t t17 = -749985974449LL;
uint64_t x1177 = UINT64_MAX;
volatile int8_t x1195 = 2;
volatile int8_t x1368 = -1;
uint8_t x1412 = 9U;
volatile int16_t x1512 = -1;
int16_t x1538 = INT16_MAX;
uint64_t x1540 = 822LLU;
uint32_t t26 = 105815769U;
static int16_t x1576 = INT16_MIN;
static volatile int32_t t28 = 0;
int16_t x1853 = INT16_MAX;
int32_t t30 = -3498334;
uint32_t x1870 = 697211645U;
volatile int32_t t31 = 35108926;
static int8_t x1945 = -1;
volatile uint16_t x1947 = 1U;
int32_t t33 = 580718;
static uint16_t x2055 = 6U;
volatile int64_t x2065 = INT64_MAX;
volatile int64_t x2069 = INT64_MIN;
int64_t x2140 = -79538LL;
uint32_t t38 = 771225U;
uint64_t x2218 = 609220642022865502LLU;
volatile uint16_t x2231 = 1U;
volatile uint32_t x2232 = UINT32_MAX;
volatile uint16_t x2378 = UINT16_MAX;
volatile uint32_t t42 = 124093U;
static uint64_t x2422 = UINT64_MAX;
static volatile int64_t x2525 = INT64_MAX;
volatile uint8_t x2549 = UINT8_MAX;
int64_t x2677 = INT64_MAX;
static int16_t x2785 = INT16_MIN;
static uint64_t x2786 = 2841372860050370LLU;
uint8_t x2787 = 0U;
uint64_t x2813 = 112805370158LLU;
int32_t x2924 = 84805907;
static int8_t x3085 = INT8_MAX;
volatile uint16_t x3086 = 119U;
int16_t x3087 = 1;
volatile int32_t t55 = 126;
int8_t x3159 = 29;
static uint64_t x3192 = 251179470LLU;
int8_t x3234 = INT8_MAX;
int16_t x3262 = INT16_MAX;
volatile int32_t t61 = 774;
int64_t x3353 = -8LL;
uint8_t x3366 = 84U;
uint32_t x3454 = 297680U;
int32_t x3461 = INT32_MAX;
volatile int32_t t66 = 926930;
int32_t x3506 = 0;
uint32_t x3507 = 12U;
static int16_t x3508 = INT16_MIN;
uint64_t t67 = 885166LLU;
int64_t x3665 = -7141420LL;
volatile int64_t t70 = -46331916112782LL;
int16_t x3670 = INT16_MAX;
uint64_t x3671 = 14LLU;
int32_t x3777 = INT32_MAX;
int16_t x3779 = 16;
static uint32_t x3890 = 484U;
static volatile int32_t x4163 = 6;
uint32_t x4202 = UINT32_MAX;
uint8_t x4203 = 0U;
int32_t t82 = 959072235;
uint16_t x4351 = 0U;
int32_t x4352 = -50;
int8_t x4413 = 8;
int32_t x4414 = 42155891;
int8_t x4415 = 0;
static volatile int32_t t85 = 70;
uint32_t x4422 = 150U;
static volatile int32_t x4501 = -32764;
volatile int8_t x4503 = 7;
uint16_t x4566 = 910U;
uint8_t x4567 = 5U;
int32_t x4568 = 548271;
uint32_t x4618 = 228220926U;
int64_t t91 = -14003429775LL;
int16_t x4902 = INT16_MAX;
int32_t x4904 = -1;
int32_t x4924 = -1;
uint64_t x5030 = 49077LLU;
int32_t t94 = -49234499;
static volatile int32_t t95 = 53128;
uint64_t x5098 = 3068LLU;
uint16_t x5106 = UINT16_MAX;
volatile uint64_t x5246 = 80785524LLU;
static int16_t x5248 = INT16_MAX;
int32_t x5348 = 252586;
volatile int32_t t99 = 817467538;


void f0(void) {
	static volatile uint64_t x13 = 5606248086995557LLU;
	uint8_t x14 = UINT8_MAX;
	volatile uint8_t x15 = 0U;
	int32_t x16 = 495902;
	static uint64_t t0 = 2062559LLU;

	t0 = (x13&((x14<<x15)<x16));

	if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x129 = INT16_MIN;
	static uint16_t x130 = UINT16_MAX;
	uint8_t x131 = 12U;
	static volatile int8_t x132 = INT8_MAX;
	volatile int32_t t1 = -45;

	t1 = (x129&((x130<<x131)<x132));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x281 = INT8_MIN;
	uint64_t x282 = 2LLU;
	int8_t x283 = 60;
	int16_t x284 = -1;
	volatile int32_t t2 = 146111231;

	t2 = (x281&((x282<<x283)<x284));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x285 = 3101222U;
	int8_t x288 = INT8_MIN;

	t3 = (x285&((x286<<x287)<x288));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x289 = -1;
	volatile int16_t x290 = 11372;
	volatile int64_t x292 = INT64_MAX;
	int32_t t4 = -14945296;

	t4 = (x289&((x290<<x291)<x292));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x438 = 484808147U;
	int32_t x440 = INT32_MIN;
	int64_t t5 = 120534458635LL;

	t5 = (x437&((x438<<x439)<x440));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x490 = UINT8_MAX;
	volatile int16_t x491 = 1;
	int32_t x492 = INT32_MAX;
	int64_t t6 = -1LL;

	t6 = (x489&((x490<<x491)<x492));

	if (t6 != 1LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x557 = UINT16_MAX;
	uint64_t x559 = 0LLU;
	int32_t t7 = 97;

	t7 = (x557&((x558<<x559)<x560));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x585 = -1431500404489986610LL;
	int16_t x586 = 1134;
	uint8_t x588 = 1U;
	volatile int64_t t8 = 468977LL;

	t8 = (x585&((x586<<x587)<x588));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x621 = INT64_MAX;
	volatile int32_t x622 = INT32_MAX;
	int8_t x623 = 0;
	uint8_t x624 = 0U;
	int64_t t9 = 2904704574610LL;

	t9 = (x621&((x622<<x623)<x624));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x657 = 916855625U;
	volatile uint32_t x658 = 447976U;
	uint16_t x659 = 3U;

	t10 = (x657&((x658<<x659)<x660));

	if (t10 != 1U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x746 = 16097122113982LL;
	volatile uint8_t x747 = 19U;
	volatile uint32_t x748 = UINT32_MAX;
	volatile int64_t t11 = 148804LL;

	t11 = (x745&((x746<<x747)<x748));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x821 = -1LL;
	int8_t x823 = 53;
	static int16_t x824 = INT16_MIN;

	t12 = (x821&((x822<<x823)<x824));

	if (t12 != 1LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x841 = 967135U;
	uint32_t x842 = 15855437U;
	volatile uint8_t x843 = 0U;
	int64_t x844 = -1LL;
	volatile uint32_t t13 = 32670U;

	t13 = (x841&((x842<<x843)<x844));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x845 = UINT32_MAX;
	uint32_t x846 = UINT32_MAX;
	uint8_t x847 = 25U;
	int64_t x848 = -39137LL;
	volatile uint32_t t14 = 183U;

	t14 = (x845&((x846<<x847)<x848));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x925 = 795;
	static uint16_t x926 = 489U;
	volatile uint8_t x927 = 7U;
	int8_t x928 = INT8_MIN;
	int32_t t15 = 1;

	t15 = (x925&((x926<<x927)<x928));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x941 = -11517;
	int16_t x942 = INT16_MAX;
	uint16_t x943 = 1U;
	static uint16_t x944 = 14495U;
	volatile int32_t t16 = -1;

	t16 = (x941&((x942<<x943)<x944));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint16_t x1118 = UINT16_MAX;
	int8_t x1119 = 1;
	volatile uint8_t x1120 = 27U;

	t17 = (x1117&((x1118<<x1119)<x1120));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x1178 = 51244269402199LL;
	volatile int8_t x1179 = 2;
	volatile uint8_t x1180 = 5U;
	static uint64_t t18 = 970705LLU;

	t18 = (x1177&((x1178<<x1179)<x1180));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1193 = 30204992387LLU;
	uint32_t x1194 = 0U;
	static int16_t x1196 = -27;
	volatile uint64_t t19 = 0LLU;

	t19 = (x1193&((x1194<<x1195)<x1196));

	if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x1329 = INT64_MAX;
	volatile int32_t x1330 = INT32_MAX;
	int8_t x1331 = 0;
	uint8_t x1332 = UINT8_MAX;
	int64_t t20 = 10610200239525686LL;

	t20 = (x1329&((x1330<<x1331)<x1332));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x1365 = 2U;
	uint16_t x1366 = UINT16_MAX;
	uint16_t x1367 = 0U;
	volatile int32_t t21 = -260;

	t21 = (x1365&((x1366<<x1367)<x1368));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x1393 = INT8_MIN;
	uint64_t x1394 = UINT64_MAX;
	uint8_t x1395 = 6U;
	static int32_t x1396 = INT32_MAX;
	volatile int32_t t22 = -2743;

	t22 = (x1393&((x1394<<x1395)<x1396));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1409 = INT8_MIN;
	uint16_t x1410 = 398U;
	int8_t x1411 = 1;
	static int32_t t23 = -5;

	t23 = (x1409&((x1410<<x1411)<x1412));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1417 = 1891868LL;
	uint32_t x1418 = UINT32_MAX;
	static int16_t x1419 = 1;
	static volatile int32_t x1420 = INT32_MIN;
	volatile int64_t t24 = -3295427LL;

	t24 = (x1417&((x1418<<x1419)<x1420));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x1509 = 2704U;
	int8_t x1510 = 1;
	int8_t x1511 = 5;
	int32_t t25 = 1;

	t25 = (x1509&((x1510<<x1511)<x1512));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1537 = 1472U;
	volatile uint32_t x1539 = 0U;

	t26 = (x1537&((x1538<<x1539)<x1540));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x1573 = 30868272LLU;
	static uint32_t x1574 = 26U;
	uint16_t x1575 = 11U;
	uint64_t t27 = 3538174137469765LLU;

	t27 = (x1573&((x1574<<x1575)<x1576));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1633 = 2220U;
	static uint8_t x1634 = 0U;
	uint8_t x1635 = 2U;
	static int64_t x1636 = -1LL;

	t28 = (x1633&((x1634<<x1635)<x1636));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x1693 = UINT8_MAX;
	static uint8_t x1694 = 104U;
	static int16_t x1695 = 1;
	volatile uint32_t x1696 = UINT32_MAX;
	int32_t t29 = -16;

	t29 = (x1693&((x1694<<x1695)<x1696));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1854 = 269891076LL;
	int16_t x1855 = 1;
	volatile int16_t x1856 = 21;

	t30 = (x1853&((x1854<<x1855)<x1856));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x1869 = UINT16_MAX;
	uint8_t x1871 = 0U;
	volatile uint8_t x1872 = UINT8_MAX;

	t31 = (x1869&((x1870<<x1871)<x1872));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x1933 = INT16_MIN;
	uint64_t x1934 = 17743LLU;
	volatile uint64_t x1935 = 1LLU;
	int16_t x1936 = INT16_MAX;
	volatile int32_t t32 = 1;

	t32 = (x1933&((x1934<<x1935)<x1936));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1946 = 320132681736127LLU;
	int16_t x1948 = INT16_MAX;

	t33 = (x1945&((x1946<<x1947)<x1948));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x2009 = 25;
	int16_t x2010 = INT16_MAX;
	int16_t x2011 = 15;
	int64_t x2012 = INT64_MIN;
	static volatile int32_t t34 = -61888;

	t34 = (x2009&((x2010<<x2011)<x2012));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x2053 = 0;
	uint16_t x2054 = UINT16_MAX;
	uint16_t x2056 = 11923U;
	static int32_t t35 = 2125284;

	t35 = (x2053&((x2054<<x2055)<x2056));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x2066 = 212;
	uint8_t x2067 = 21U;
	uint16_t x2068 = 2844U;
	volatile int64_t t36 = 449LL;

	t36 = (x2065&((x2066<<x2067)<x2068));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x2070 = 5U;
	volatile int8_t x2071 = 2;
	uint8_t x2072 = UINT8_MAX;
	int64_t t37 = 1LL;

	t37 = (x2069&((x2070<<x2071)<x2072));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x2137 = 57U;
	static uint8_t x2138 = 1U;
	static uint8_t x2139 = 15U;

	t38 = (x2137&((x2138<<x2139)<x2140));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x2217 = INT64_MIN;
	int8_t x2219 = 5;
	volatile uint64_t x2220 = 152LLU;
	volatile int64_t t39 = 274LL;

	t39 = (x2217&((x2218<<x2219)<x2220));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x2229 = -330403911;
	static uint16_t x2230 = 1031U;
	int32_t t40 = 7;

	t40 = (x2229&((x2230<<x2231)<x2232));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x2301 = 6810LL;
	static int8_t x2302 = INT8_MAX;
	volatile uint64_t x2303 = 15LLU;
	volatile int8_t x2304 = -1;
	volatile int64_t t41 = -4987580432760542LL;

	t41 = (x2301&((x2302<<x2303)<x2304));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x2377 = 126U;
	static uint16_t x2379 = 0U;
	int16_t x2380 = INT16_MIN;

	t42 = (x2377&((x2378<<x2379)<x2380));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x2421 = -1LL;
	static int8_t x2423 = 6;
	int32_t x2424 = -9209792;
	volatile int64_t t43 = 7089LL;

	t43 = (x2421&((x2422<<x2423)<x2424));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x2489 = 364U;
	uint32_t x2490 = 127U;
	uint8_t x2491 = 0U;
	uint8_t x2492 = UINT8_MAX;
	volatile int32_t t44 = 1;

	t44 = (x2489&((x2490<<x2491)<x2492));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x2505 = -1;
	static uint64_t x2506 = UINT64_MAX;
	int8_t x2507 = 0;
	int32_t x2508 = INT32_MIN;
	volatile int32_t t45 = 10807437;

	t45 = (x2505&((x2506<<x2507)<x2508));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2526 = INT8_MAX;
	static uint16_t x2527 = 7U;
	int16_t x2528 = -2037;
	volatile int64_t t46 = -117996LL;

	t46 = (x2525&((x2526<<x2527)<x2528));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x2550 = 1;
	uint8_t x2551 = 10U;
	int16_t x2552 = INT16_MAX;
	int32_t t47 = 10245472;

	t47 = (x2549&((x2550<<x2551)<x2552));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x2678 = 1891U;
	static uint32_t x2679 = 7U;
	int8_t x2680 = INT8_MIN;
	int64_t t48 = 59558163514150969LL;

	t48 = (x2677&((x2678<<x2679)<x2680));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x2777 = INT32_MIN;
	volatile uint16_t x2778 = 178U;
	int8_t x2779 = 7;
	static uint64_t x2780 = 143LLU;
	static volatile int32_t t49 = 14;

	t49 = (x2777&((x2778<<x2779)<x2780));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x2788 = UINT64_MAX;
	int32_t t50 = 425201;

	t50 = (x2785&((x2786<<x2787)<x2788));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x2814 = 47;
	uint8_t x2815 = 6U;
	static uint64_t x2816 = 14LLU;
	uint64_t t51 = 159431997628LLU;

	t51 = (x2813&((x2814<<x2815)<x2816));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x2849 = INT8_MAX;
	uint16_t x2850 = 661U;
	uint64_t x2851 = 2LLU;
	uint32_t x2852 = 5894997U;
	static volatile int32_t t52 = 47740596;

	t52 = (x2849&((x2850<<x2851)<x2852));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x2921 = -70LL;
	static uint8_t x2922 = 58U;
	uint16_t x2923 = 12U;
	volatile int64_t t53 = -58LL;

	t53 = (x2921&((x2922<<x2923)<x2924));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x3049 = 48;
	static int32_t x3050 = 1;
	int32_t x3051 = 0;
	static int8_t x3052 = 1;
	volatile int32_t t54 = -896752194;

	t54 = (x3049&((x3050<<x3051)<x3052));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x3088 = INT32_MAX;

	t55 = (x3085&((x3086<<x3087)<x3088));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x3157 = INT16_MIN;
	int8_t x3158 = 0;
	volatile int16_t x3160 = 0;
	static int32_t t56 = -127218;

	t56 = (x3157&((x3158<<x3159)<x3160));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x3189 = -1;
	uint64_t x3190 = UINT64_MAX;
	int64_t x3191 = 2LL;
	int32_t t57 = -146371124;

	t57 = (x3189&((x3190<<x3191)<x3192));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x3233 = -249LL;
	uint32_t x3235 = 0U;
	int64_t x3236 = 1587949623959LL;
	static int64_t t58 = -245LL;

	t58 = (x3233&((x3234<<x3235)<x3236));

	if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int16_t x3237 = INT16_MIN;
	static uint64_t x3238 = UINT64_MAX;
	uint16_t x3239 = 17U;
	int32_t x3240 = -49578526;
	int32_t t59 = -465307560;

	t59 = (x3237&((x3238<<x3239)<x3240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x3261 = UINT8_MAX;
	uint16_t x3263 = 3U;
	static int64_t x3264 = 72LL;
	volatile int32_t t60 = 212106440;

	t60 = (x3261&((x3262<<x3263)<x3264));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x3297 = -1;
	uint64_t x3298 = 28676LLU;
	int32_t x3299 = 5;
	int32_t x3300 = INT32_MIN;

	t61 = (x3297&((x3298<<x3299)<x3300));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x3354 = 41;
	uint8_t x3355 = 13U;
	uint64_t x3356 = 1128111778488079LLU;
	int64_t t62 = 70836LL;

	t62 = (x3353&((x3354<<x3355)<x3356));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x3365 = INT64_MAX;
	static int32_t x3367 = 3;
	static int8_t x3368 = INT8_MAX;
	volatile int64_t t63 = 2886LL;

	t63 = (x3365&((x3366<<x3367)<x3368));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x3453 = 0;
	uint64_t x3455 = 6LLU;
	int8_t x3456 = INT8_MAX;
	int32_t t64 = -100114;

	t64 = (x3453&((x3454<<x3455)<x3456));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x3462 = 1U;
	int32_t x3463 = 24;
	int32_t x3464 = INT32_MAX;
	int32_t t65 = 66148;

	t65 = (x3461&((x3462<<x3463)<x3464));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x3497 = 5400U;
	int8_t x3498 = 25;
	volatile uint8_t x3499 = 5U;
	int8_t x3500 = INT8_MIN;

	t66 = (x3497&((x3498<<x3499)<x3500));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x3505 = 4803241921361219LLU;

	t67 = (x3505&((x3506<<x3507)<x3508));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x3541 = UINT64_MAX;
	uint64_t x3542 = 2413289665072LLU;
	uint8_t x3543 = 27U;
	int64_t x3544 = INT64_MAX;
	volatile uint64_t t68 = 4119764286655650LLU;

	t68 = (x3541&((x3542<<x3543)<x3544));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x3553 = INT16_MIN;
	static int32_t x3554 = 2;
	int16_t x3555 = 15;
	static volatile int32_t x3556 = -1;
	volatile int32_t t69 = -180;

	t69 = (x3553&((x3554<<x3555)<x3556));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x3666 = UINT64_MAX;
	int16_t x3667 = 1;
	uint16_t x3668 = 177U;

	t70 = (x3665&((x3666<<x3667)<x3668));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x3669 = INT8_MIN;
	volatile int8_t x3672 = -1;
	volatile int32_t t71 = -1411;

	t71 = (x3669&((x3670<<x3671)<x3672));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x3681 = -1;
	uint8_t x3682 = UINT8_MAX;
	uint8_t x3683 = 5U;
	static uint32_t x3684 = UINT32_MAX;
	int32_t t72 = -26;

	t72 = (x3681&((x3682<<x3683)<x3684));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x3701 = INT8_MIN;
	static uint64_t x3702 = 26458388075261913LLU;
	int8_t x3703 = 51;
	static int16_t x3704 = INT16_MAX;
	static volatile int32_t t73 = 337218022;

	t73 = (x3701&((x3702<<x3703)<x3704));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x3733 = INT32_MAX;
	static uint32_t x3734 = 20045U;
	uint8_t x3735 = 5U;
	int32_t x3736 = -1;
	int32_t t74 = -51;

	t74 = (x3733&((x3734<<x3735)<x3736));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x3778 = 3;
	volatile uint8_t x3780 = UINT8_MAX;
	static volatile int32_t t75 = -128117008;

	t75 = (x3777&((x3778<<x3779)<x3780));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x3889 = 951672605LL;
	static uint8_t x3891 = 15U;
	int8_t x3892 = INT8_MIN;
	static int64_t t76 = 199197LL;

	t76 = (x3889&((x3890<<x3891)<x3892));

	if (t76 != 1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x3961 = INT64_MIN;
	uint64_t x3962 = 3008031712LLU;
	volatile uint32_t x3963 = 39U;
	volatile int32_t x3964 = INT32_MAX;
	static int64_t t77 = -7460028178398LL;

	t77 = (x3961&((x3962<<x3963)<x3964));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x4161 = 1;
	uint64_t x4162 = 261341934638669LLU;
	int64_t x4164 = 1699LL;
	static volatile int32_t t78 = -218682933;

	t78 = (x4161&((x4162<<x4163)<x4164));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x4193 = 0U;
	int16_t x4194 = 23;
	uint8_t x4195 = 5U;
	static int64_t x4196 = INT64_MIN;
	volatile int32_t t79 = -10645734;

	t79 = (x4193&((x4194<<x4195)<x4196));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x4201 = -1;
	int32_t x4204 = -519;
	int32_t t80 = 87433;

	t80 = (x4201&((x4202<<x4203)<x4204));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x4253 = UINT32_MAX;
	static int16_t x4254 = 2761;
	uint32_t x4255 = 3U;
	volatile int8_t x4256 = 23;
	uint32_t t81 = 657125U;

	t81 = (x4253&((x4254<<x4255)<x4256));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x4293 = UINT16_MAX;
	volatile int32_t x4294 = 49864;
	volatile uint8_t x4295 = 12U;
	uint32_t x4296 = UINT32_MAX;

	t82 = (x4293&((x4294<<x4295)<x4296));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x4297 = -18409;
	volatile uint16_t x4298 = UINT16_MAX;
	int64_t x4299 = 3LL;
	static uint64_t x4300 = 1570109LLU;
	int32_t t83 = -151955307;

	t83 = (x4297&((x4298<<x4299)<x4300));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x4349 = UINT64_MAX;
	uint16_t x4350 = 85U;
	uint64_t t84 = 237886628528500LLU;

	t84 = (x4349&((x4350<<x4351)<x4352));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x4416 = 1955091;

	t85 = (x4413&((x4414<<x4415)<x4416));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x4421 = 501528U;
	uint8_t x4423 = 4U;
	int32_t x4424 = INT32_MIN;
	uint32_t t86 = 895U;

	t86 = (x4421&((x4422<<x4423)<x4424));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x4502 = 160U;
	volatile int16_t x4504 = -246;
	int32_t t87 = -751132448;

	t87 = (x4501&((x4502<<x4503)<x4504));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x4565 = UINT16_MAX;
	static volatile int32_t t88 = -14449;

	t88 = (x4565&((x4566<<x4567)<x4568));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x4617 = INT64_MAX;
	static uint8_t x4619 = 0U;
	static uint8_t x4620 = 2U;
	int64_t t89 = 71599221LL;

	t89 = (x4617&((x4618<<x4619)<x4620));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x4649 = INT16_MIN;
	int8_t x4650 = INT8_MAX;
	static int8_t x4651 = 0;
	volatile uint16_t x4652 = 11U;
	volatile int32_t t90 = -24;

	t90 = (x4649&((x4650<<x4651)<x4652));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x4653 = INT64_MAX;
	volatile uint16_t x4654 = 1U;
	uint8_t x4655 = 2U;
	static int32_t x4656 = -1;

	t91 = (x4653&((x4654<<x4655)<x4656));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x4901 = INT16_MIN;
	int8_t x4903 = 1;
	volatile int32_t t92 = 1;

	t92 = (x4901&((x4902<<x4903)<x4904));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x4921 = 4;
	static uint16_t x4922 = UINT16_MAX;
	static uint8_t x4923 = 4U;
	int32_t t93 = -54779;

	t93 = (x4921&((x4922<<x4923)<x4924));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int32_t x5029 = 369209808;
	static int16_t x5031 = 6;
	uint16_t x5032 = UINT16_MAX;

	t94 = (x5029&((x5030<<x5031)<x5032));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x5045 = INT32_MIN;
	static volatile int8_t x5046 = 3;
	int32_t x5047 = 0;
	volatile uint8_t x5048 = 51U;

	t95 = (x5045&((x5046<<x5047)<x5048));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x5097 = INT64_MAX;
	volatile uint8_t x5099 = 15U;
	volatile int32_t x5100 = INT32_MAX;
	volatile int64_t t96 = 151LL;

	t96 = (x5097&((x5098<<x5099)<x5100));

	if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x5105 = INT8_MIN;
	uint16_t x5107 = 1U;
	volatile int16_t x5108 = 2684;
	int32_t t97 = -847;

	t97 = (x5105&((x5106<<x5107)<x5108));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x5245 = INT8_MIN;
	static uint8_t x5247 = 27U;
	volatile int32_t t98 = -480;

	t98 = (x5245&((x5246<<x5247)<x5248));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x5345 = 31U;
	int8_t x5346 = 30;
	int8_t x5347 = 1;

	t99 = (x5345&((x5346<<x5347)<x5348));

	if (t99 != 1) { NG(); } else { ; }
	
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

