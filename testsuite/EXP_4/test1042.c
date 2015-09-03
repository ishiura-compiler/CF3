#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 1945570841157689831LLU;
static int64_t x46 = -17LL;
volatile uint32_t x94 = UINT32_MAX;
uint64_t x139 = 364LLU;
int8_t x140 = 1;
static int8_t x348 = 29;
int16_t x480 = 16;
static uint8_t x556 = 1U;
volatile uint64_t t8 = 992603261634476290LLU;
static volatile int32_t t9 = -8;
static uint8_t x730 = 12U;
uint16_t x731 = 402U;
uint8_t x736 = 0U;
int64_t x741 = -466LL;
volatile int64_t x869 = 31944657686083LL;
static uint16_t x871 = 20U;
int32_t x1046 = 6;
int16_t x1047 = INT16_MAX;
int16_t x1065 = -151;
volatile uint8_t x1291 = UINT8_MAX;
volatile int8_t x1292 = 0;
uint64_t x1302 = 58472037918504363LLU;
uint8_t x1304 = 17U;
uint16_t x1645 = 47U;
int16_t x1646 = 2;
int16_t x1647 = INT16_MAX;
uint8_t x1713 = 102U;
int32_t x1714 = INT32_MIN;
volatile int8_t x1715 = 2;
volatile int8_t x1750 = INT8_MIN;
int8_t x1986 = INT8_MIN;
int8_t x1994 = 4;
uint32_t x1995 = 780652U;
static volatile uint32_t t31 = 50530U;
volatile int8_t x2144 = 7;
int32_t x2201 = -1;
int32_t t36 = 44949751;
volatile uint8_t x2223 = UINT8_MAX;
uint8_t x2226 = 57U;
uint64_t x2291 = UINT64_MAX;
static uint16_t x2316 = 9U;
uint64_t x2351 = 48178LLU;
int32_t x2421 = -12;
volatile int32_t x2422 = -803537;
uint8_t x2428 = 28U;
int32_t x2431 = INT32_MAX;
uint32_t t46 = 3774267U;
int16_t x2506 = INT16_MIN;
uint16_t x2571 = 1215U;
static int8_t x2650 = -1;
int64_t t52 = -2780713717204LL;
int32_t x2833 = INT32_MIN;
volatile int8_t x2850 = -1;
static int8_t x2852 = 10;
int64_t t56 = 3629929791137865950LL;
int16_t x2860 = 10;
uint16_t x3130 = 3370U;
int8_t x3132 = 3;
int8_t x3217 = 11;
uint16_t x3341 = UINT16_MAX;
uint8_t x3342 = UINT8_MAX;
volatile uint64_t t65 = 113843839109853LLU;
uint16_t x3436 = 4U;
int64_t x3462 = -1776LL;
uint8_t x3480 = 4U;
volatile uint64_t t72 = 437967LLU;
static int32_t x3670 = INT32_MAX;
static volatile int16_t x3699 = INT16_MAX;
int32_t x3700 = 0;
uint16_t x3729 = 1928U;
static uint16_t x3731 = 6834U;
static int16_t x3732 = 7;
int8_t x3852 = 6;
int32_t t77 = 30728;
static int8_t x3866 = INT8_MAX;
int8_t x3914 = INT8_MAX;
uint16_t x3915 = UINT16_MAX;
volatile uint32_t x3952 = 7U;
int32_t x3997 = INT32_MIN;
static uint8_t x4030 = 7U;
int8_t x4098 = -2;
uint64_t x4123 = 18250311LLU;
static volatile int64_t t87 = -26LL;
volatile int16_t x4209 = INT16_MAX;
volatile int32_t x4293 = -169598;
static int8_t x4296 = 6;
uint16_t x4333 = 15422U;
uint8_t x4334 = UINT8_MAX;
static volatile int16_t x4356 = 2;
uint16_t x4409 = 1U;
uint32_t t93 = 39U;
volatile uint64_t x4471 = UINT64_MAX;
volatile uint64_t t94 = 598806666143115135LLU;
uint8_t x4520 = 6U;
static volatile uint64_t t95 = UINT64_MAX;
static uint64_t x4548 = 1LLU;
int32_t x4585 = -2464454;
volatile int16_t x4617 = INT16_MIN;
volatile int64_t x4657 = INT64_MAX;
uint8_t x4659 = UINT8_MAX;
int32_t x4660 = 10;


void f0(void) {
	int16_t x5 = INT16_MIN;
	int32_t x6 = INT32_MAX;
	static volatile uint64_t x7 = 14LLU;
	volatile int8_t x8 = 2;

	t0 = (x5-(x6*(x7>>x8)));

	if (t0 != 18446744067267067907LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x45 = INT32_MIN;
	static volatile int16_t x47 = 0;
	static uint8_t x48 = 1U;
	volatile int64_t t1 = 17131710LL;

	t1 = (x45-(x46*(x47>>x48)));

	if (t1 != -2147483648LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x73 = INT64_MIN;
	static int8_t x74 = -1;
	uint64_t x75 = 720440878070LLU;
	static uint16_t x76 = 7U;
	volatile uint64_t t2 = 36793610LLU;

	t2 = (x73-(x74*(x75>>x76)));

	if (t2 != 9223372042483220167LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x93 = -1LL;
	uint8_t x95 = UINT8_MAX;
	volatile uint32_t x96 = 15U;
	int64_t t3 = -1855223125491563009LL;

	t3 = (x93-(x94*(x95>>x96)));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x137 = 6;
	uint64_t x138 = 1852911924056LLU;
	static uint64_t t4 = 0LLU;

	t4 = (x137-(x138*(x139>>x140)));

	if (t4 != 18446406843739373430LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x333 = INT32_MIN;
	uint8_t x334 = UINT8_MAX;
	volatile uint64_t x335 = 17892357713002LLU;
	int32_t x336 = 1;
	volatile uint64_t t5 = 60509469035LLU;

	t5 = (x333-(x334*(x335>>x336)));

	if (t5 != 18444462795953660213LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x345 = INT32_MIN;
	int8_t x346 = 3;
	uint16_t x347 = UINT16_MAX;
	int32_t t6 = INT32_MIN;

	t6 = (x345-(x346*(x347>>x348)));

	if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x477 = 391788LL;
	int32_t x478 = INT32_MIN;
	int16_t x479 = INT16_MAX;
	volatile int64_t t7 = 14LL;

	t7 = (x477-(x478*(x479>>x480)));

	if (t7 != 391788LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x553 = 104493145LLU;
	int16_t x554 = INT16_MIN;
	volatile uint16_t x555 = 3240U;

	t8 = (x553-(x554*(x555>>x556)));

	if (t8 != 157577305LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x645 = UINT16_MAX;
	uint8_t x646 = 5U;
	volatile int16_t x647 = 2;
	uint32_t x648 = 0U;

	t9 = (x645-(x646*(x647>>x648)));

	if (t9 != 65525) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x729 = INT16_MIN;
	volatile int32_t x732 = 0;
	volatile int32_t t10 = 97776644;

	t10 = (x729-(x730*(x731>>x732)));

	if (t10 != -37592) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x733 = 1;
	int32_t x734 = INT32_MIN;
	uint32_t x735 = 14714U;
	volatile uint32_t t11 = 110U;

	t11 = (x733-(x734*(x735>>x736)));

	if (t11 != 1U) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x742 = 0U;
	uint16_t x743 = 51U;
	uint8_t x744 = 7U;
	volatile int64_t t12 = 829890382739987LL;

	t12 = (x741-(x742*(x743>>x744)));

	if (t12 != -466LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x753 = 421738565LLU;
	volatile uint16_t x754 = 1063U;
	int32_t x755 = 2186;
	int8_t x756 = 6;
	uint64_t t13 = 309LLU;

	t13 = (x753-(x754*(x755>>x756)));

	if (t13 != 421702423LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x870 = -1;
	volatile uint32_t x872 = 6U;
	static int64_t t14 = 86192068418196LL;

	t14 = (x869-(x870*(x871>>x872)));

	if (t14 != 31944657686083LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x885 = INT64_MIN;
	static int16_t x886 = -15580;
	uint64_t x887 = 615LLU;
	uint8_t x888 = 6U;
	uint64_t t15 = 3632LLU;

	t15 = (x885-(x886*(x887>>x888)));

	if (t15 != 9223372036854916028LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x1045 = -1;
	static volatile int8_t x1048 = 0;
	static int32_t t16 = -14086775;

	t16 = (x1045-(x1046*(x1047>>x1048)));

	if (t16 != -196603) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1066 = 42;
	static volatile int16_t x1067 = INT16_MAX;
	int32_t x1068 = 14;
	volatile int32_t t17 = 1;

	t17 = (x1065-(x1066*(x1067>>x1068)));

	if (t17 != -193) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x1105 = 356325960LLU;
	static int32_t x1106 = -1;
	static volatile int16_t x1107 = 181;
	volatile int32_t x1108 = 3;
	uint64_t t18 = 97405055049LLU;

	t18 = (x1105-(x1106*(x1107>>x1108)));

	if (t18 != 356325982LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x1289 = INT32_MIN;
	int16_t x1290 = -1;
	volatile int32_t t19 = 2411613;

	t19 = (x1289-(x1290*(x1291>>x1292)));

	if (t19 != -2147483393) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x1301 = UINT64_MAX;
	int64_t x1303 = INT64_MAX;
	uint64_t t20 = 96301572848985LLU;

	t20 = (x1301-(x1302*(x1303>>x1304)));

	if (t20 != 14079655421550589354LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x1325 = 53;
	int8_t x1326 = INT8_MAX;
	uint8_t x1327 = 5U;
	uint64_t x1328 = 1LLU;
	int32_t t21 = -58703;

	t21 = (x1325-(x1326*(x1327>>x1328)));

	if (t21 != -201) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x1648 = 0U;
	int32_t t22 = 16154006;

	t22 = (x1645-(x1646*(x1647>>x1648)));

	if (t22 != -65487) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1716 = 2U;
	volatile int32_t t23 = 784298217;

	t23 = (x1713-(x1714*(x1715>>x1716)));

	if (t23 != 102) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x1749 = INT32_MIN;
	uint16_t x1751 = 7U;
	static volatile int8_t x1752 = 1;
	int32_t t24 = 59;

	t24 = (x1749-(x1750*(x1751>>x1752)));

	if (t24 != -2147483264) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1889 = INT8_MIN;
	volatile int32_t x1890 = -2723078;
	uint8_t x1891 = 64U;
	int16_t x1892 = 10;
	volatile int32_t t25 = -214620;

	t25 = (x1889-(x1890*(x1891>>x1892)));

	if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x1917 = 0U;
	static int16_t x1918 = INT16_MIN;
	int32_t x1919 = 251338;
	uint8_t x1920 = 30U;
	int32_t t26 = 9;

	t26 = (x1917-(x1918*(x1919>>x1920)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x1929 = -1LL;
	int32_t x1930 = -13732;
	int8_t x1931 = 32;
	static int16_t x1932 = 3;
	volatile int64_t t27 = 614240LL;

	t27 = (x1929-(x1930*(x1931>>x1932)));

	if (t27 != 54927LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1933 = INT8_MIN;
	static int64_t x1934 = 34112748589LL;
	int64_t x1935 = INT64_MAX;
	volatile uint8_t x1936 = 51U;
	int64_t t28 = 68LL;

	t28 = (x1933-(x1934*(x1935>>x1936)));

	if (t28 != -139691705472083LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1977 = UINT64_MAX;
	uint16_t x1978 = 233U;
	uint16_t x1979 = 2654U;
	int32_t x1980 = 6;
	static volatile uint64_t t29 = 265382269781464LLU;

	t29 = (x1977-(x1978*(x1979>>x1980)));

	if (t29 != 18446744073709542062LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1985 = 1;
	int64_t x1987 = 705943501468993LL;
	uint8_t x1988 = 63U;
	volatile int64_t t30 = -5266997127LL;

	t30 = (x1985-(x1986*(x1987>>x1988)));

	if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x1993 = 12;
	volatile uint8_t x1996 = 0U;

	t31 = (x1993-(x1994*(x1995>>x1996)));

	if (t31 != 4291844700U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x2093 = INT32_MIN;
	static int32_t x2094 = INT32_MIN;
	uint8_t x2095 = 60U;
	volatile uint8_t x2096 = 6U;
	static volatile int32_t t32 = INT32_MIN;

	t32 = (x2093-(x2094*(x2095>>x2096)));

	if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x2121 = INT16_MIN;
	uint64_t x2122 = UINT64_MAX;
	uint64_t x2123 = UINT64_MAX;
	int32_t x2124 = 1;
	static volatile uint64_t t33 = 916652450432571010LLU;

	t33 = (x2121-(x2122*(x2123>>x2124)));

	if (t33 != 9223372036854743039LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x2133 = -1;
	uint16_t x2134 = UINT16_MAX;
	uint64_t x2135 = UINT64_MAX;
	uint8_t x2136 = 1U;
	static volatile uint64_t t34 = 87958965490LLU;

	t34 = (x2133-(x2134*(x2135>>x2136)));

	if (t34 != 9223372036854841342LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x2141 = 25348U;
	int64_t x2142 = 4085612266972LL;
	uint8_t x2143 = 6U;
	static int64_t t35 = 3937044264572488584LL;

	t35 = (x2141-(x2142*(x2143>>x2144)));

	if (t35 != 25348LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x2202 = UINT8_MAX;
	int32_t x2203 = 22505;
	uint16_t x2204 = 0U;

	t36 = (x2201-(x2202*(x2203>>x2204)));

	if (t36 != -5738776) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x2221 = INT64_MAX;
	static uint64_t x2222 = UINT64_MAX;
	uint16_t x2224 = 1U;
	volatile uint64_t t37 = 33935290257951950LLU;

	t37 = (x2221-(x2222*(x2223>>x2224)));

	if (t37 != 9223372036854775934LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2225 = 1455;
	int8_t x2227 = 1;
	int32_t x2228 = 20;
	static int32_t t38 = -58164;

	t38 = (x2225-(x2226*(x2227>>x2228)));

	if (t38 != 1455) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x2253 = -2;
	volatile uint32_t x2254 = 22417925U;
	int8_t x2255 = INT8_MAX;
	volatile uint8_t x2256 = 5U;
	uint32_t t39 = 843066U;

	t39 = (x2253-(x2254*(x2255>>x2256)));

	if (t39 != 4227713519U) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int8_t x2289 = 0;
	uint64_t x2290 = 4323072446LLU;
	static uint8_t x2292 = 2U;
	volatile uint64_t t40 = 136774091LLU;

	t40 = (x2289-(x2290*(x2291>>x2292)));

	if (t40 != 9223372041177848254LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x2313 = UINT16_MAX;
	int16_t x2314 = -1;
	uint8_t x2315 = 21U;
	static volatile int32_t t41 = -232796541;

	t41 = (x2313-(x2314*(x2315>>x2316)));

	if (t41 != 65535) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x2349 = -479399;
	static volatile int32_t x2350 = INT32_MIN;
	int16_t x2352 = 2;
	volatile uint64_t t42 = 4LLU;

	t42 = (x2349-(x2350*(x2351>>x2352)));

	if (t42 != 25864292577113LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x2389 = 64939729379764LLU;
	int8_t x2390 = INT8_MIN;
	static volatile uint8_t x2391 = 52U;
	uint16_t x2392 = 3U;
	volatile uint64_t t43 = 1895254604594472LLU;

	t43 = (x2389-(x2390*(x2391>>x2392)));

	if (t43 != 64939729380532LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x2423 = 122252412095194170LLU;
	int16_t x2424 = 7;
	uint64_t t44 = 126463449LLU;

	t44 = (x2421-(x2422*(x2423>>x2424)));

	if (t44 != 11139246553970814780LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2425 = INT8_MAX;
	int32_t x2426 = INT32_MIN;
	static volatile uint8_t x2427 = UINT8_MAX;
	volatile int32_t t45 = 0;

	t45 = (x2425-(x2426*(x2427>>x2428)));

	if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x2429 = 73U;
	uint32_t x2430 = 601507U;
	uint16_t x2432 = 29U;

	t46 = (x2429-(x2430*(x2431>>x2432)));

	if (t46 != 4293162848U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x2453 = INT16_MIN;
	uint64_t x2454 = 480384LLU;
	int8_t x2455 = 1;
	uint64_t x2456 = 17LLU;
	uint64_t t47 = 13016176580795LLU;

	t47 = (x2453-(x2454*(x2455>>x2456)));

	if (t47 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x2505 = UINT8_MAX;
	volatile uint64_t x2507 = 17177722257LLU;
	uint16_t x2508 = 6U;
	uint64_t t48 = 48LLU;

	t48 = (x2505-(x2506*(x2507>>x2508)));

	if (t48 != 8794993787135LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x2565 = -218555485595LL;
	int8_t x2566 = INT8_MIN;
	int16_t x2567 = 1;
	uint32_t x2568 = 15U;
	int64_t t49 = 41293071106055718LL;

	t49 = (x2565-(x2566*(x2567>>x2568)));

	if (t49 != -218555485595LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x2569 = INT16_MIN;
	uint64_t x2570 = 16468628LLU;
	int8_t x2572 = 0;
	uint64_t t50 = 477418055186346751LLU;

	t50 = (x2569-(x2570*(x2571>>x2572)));

	if (t50 != 18446744053700135828LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x2649 = -1;
	int64_t x2651 = 8121332530LL;
	volatile int8_t x2652 = 1;
	volatile int64_t t51 = -1LL;

	t51 = (x2649-(x2650*(x2651>>x2652)));

	if (t51 != 4060666264LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x2757 = INT8_MIN;
	int64_t x2758 = INT64_MAX;
	volatile uint8_t x2759 = 3U;
	static int8_t x2760 = 4;

	t52 = (x2757-(x2758*(x2759>>x2760)));

	if (t52 != -128LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x2821 = UINT32_MAX;
	int32_t x2822 = INT32_MIN;
	uint32_t x2823 = 370905U;
	int16_t x2824 = 0;
	volatile uint32_t t53 = 977U;

	t53 = (x2821-(x2822*(x2823>>x2824)));

	if (t53 != 2147483647U) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x2834 = 530714797U;
	volatile int8_t x2835 = INT8_MAX;
	static int32_t x2836 = 4;
	static volatile uint32_t t54 = 22424U;

	t54 = (x2833-(x2834*(x2835>>x2836)));

	if (t54 != 2727447365U) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x2837 = UINT64_MAX;
	int64_t x2838 = -1LL;
	uint16_t x2839 = 10U;
	uint8_t x2840 = 2U;
	static volatile uint64_t t55 = 1989305620321789467LLU;

	t55 = (x2837-(x2838*(x2839>>x2840)));

	if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x2849 = 799181075100LL;
	uint8_t x2851 = 3U;

	t56 = (x2849-(x2850*(x2851>>x2852)));

	if (t56 != 799181075100LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x2857 = 24;
	int8_t x2858 = -1;
	uint16_t x2859 = 11467U;
	int32_t t57 = 506;

	t57 = (x2857-(x2858*(x2859>>x2860)));

	if (t57 != 35) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x2873 = 14913733973LLU;
	uint16_t x2874 = 11U;
	int16_t x2875 = INT16_MAX;
	int8_t x2876 = 1;
	volatile uint64_t t58 = 124616LLU;

	t58 = (x2873-(x2874*(x2875>>x2876)));

	if (t58 != 14913553760LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x2905 = 366994985453LLU;
	int32_t x2906 = 13;
	static int64_t x2907 = 8827867715LL;
	int8_t x2908 = 27;
	uint64_t t59 = 66501655978LLU;

	t59 = (x2905-(x2906*(x2907>>x2908)));

	if (t59 != 366994984608LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x3129 = -1;
	uint8_t x3131 = 93U;
	volatile int32_t t60 = -223118874;

	t60 = (x3129-(x3130*(x3131>>x3132)));

	if (t60 != -37071) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x3201 = 349408267;
	int8_t x3202 = INT8_MAX;
	int8_t x3203 = 3;
	static volatile int8_t x3204 = 0;
	volatile int32_t t61 = 22644343;

	t61 = (x3201-(x3202*(x3203>>x3204)));

	if (t61 != 349407886) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x3218 = UINT32_MAX;
	static volatile int16_t x3219 = INT16_MAX;
	int16_t x3220 = 0;
	volatile uint32_t t62 = 538842268U;

	t62 = (x3217-(x3218*(x3219>>x3220)));

	if (t62 != 32778U) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x3265 = INT16_MIN;
	int16_t x3266 = INT16_MIN;
	uint64_t x3267 = UINT64_MAX;
	uint8_t x3268 = 2U;
	volatile uint64_t t63 = 32802096LLU;

	t63 = (x3265-(x3266*(x3267>>x3268)));

	if (t63 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x3343 = 840U;
	static uint8_t x3344 = 28U;
	volatile int32_t t64 = -15;

	t64 = (x3341-(x3342*(x3343>>x3344)));

	if (t64 != 65535) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x3365 = INT64_MIN;
	int8_t x3366 = -1;
	static uint64_t x3367 = UINT64_MAX;
	volatile uint16_t x3368 = 26U;

	t65 = (x3365-(x3366*(x3367>>x3368)));

	if (t65 != 9223372311732682751LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x3433 = -1LL;
	int8_t x3434 = -1;
	uint32_t x3435 = 1U;
	volatile int64_t t66 = -16505332LL;

	t66 = (x3433-(x3434*(x3435>>x3436)));

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x3461 = UINT16_MAX;
	uint16_t x3463 = 1368U;
	static int8_t x3464 = 1;
	static volatile int64_t t67 = -440LL;

	t67 = (x3461-(x3462*(x3463>>x3464)));

	if (t67 != 1280319LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x3477 = 14993LLU;
	volatile int16_t x3478 = 0;
	uint8_t x3479 = UINT8_MAX;
	volatile uint64_t t68 = 482864351607LLU;

	t68 = (x3477-(x3478*(x3479>>x3480)));

	if (t68 != 14993LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x3493 = INT16_MIN;
	uint16_t x3494 = 4U;
	int64_t x3495 = 68795119968091628LL;
	volatile uint16_t x3496 = 6U;
	int64_t t69 = 121864134588777466LL;

	t69 = (x3493-(x3494*(x3495>>x3496)));

	if (t69 != -4299694998038492LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x3513 = 27511009U;
	uint8_t x3514 = UINT8_MAX;
	uint8_t x3515 = 3U;
	static uint16_t x3516 = 0U;
	uint32_t t70 = 27U;

	t70 = (x3513-(x3514*(x3515>>x3516)));

	if (t70 != 27510244U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x3557 = 7298427987594776LL;
	static volatile uint8_t x3558 = 106U;
	int8_t x3559 = 17;
	uint16_t x3560 = 2U;
	static volatile int64_t t71 = 254535801LL;

	t71 = (x3557-(x3558*(x3559>>x3560)));

	if (t71 != 7298427987594352LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x3605 = INT16_MIN;
	static int8_t x3606 = 8;
	uint64_t x3607 = 3660739041121LLU;
	volatile uint8_t x3608 = 0U;

	t72 = (x3605-(x3606*(x3607>>x3608)));

	if (t72 != 18446714787797189880LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x3669 = INT16_MAX;
	int64_t x3671 = 238818LL;
	uint64_t x3672 = 3LLU;
	volatile int64_t t73 = -3383009962LL;

	t73 = (x3669-(x3670*(x3671>>x3672)));

	if (t73 != -64106681797477LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x3697 = 11;
	int16_t x3698 = -495;
	static int32_t t74 = 479978199;

	t74 = (x3697-(x3698*(x3699>>x3700)));

	if (t74 != 16219676) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x3730 = 64060201178665LLU;
	uint64_t t75 = 11751126043562839LLU;

	t75 = (x3729-(x3730*(x3731>>x3732)));

	if (t75 != 18443348883047084299LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x3825 = 1U;
	static int64_t x3826 = -739LL;
	uint64_t x3827 = 34684187467538097LLU;
	uint8_t x3828 = 7U;
	uint64_t t76 = 28LLU;

	t76 = (x3825-(x3826*(x3827>>x3828)));

	if (t76 != 200246988582114200LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x3849 = 30477U;
	int8_t x3850 = 5;
	uint16_t x3851 = 13371U;

	t77 = (x3849-(x3850*(x3851>>x3852)));

	if (t77 != 29437) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x3865 = 27851328082798593LLU;
	uint64_t x3867 = UINT64_MAX;
	int8_t x3868 = 0;
	volatile uint64_t t78 = 653600370359394LLU;

	t78 = (x3865-(x3866*(x3867>>x3868)));

	if (t78 != 27851328082798720LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x3901 = 1853997770LLU;
	uint16_t x3902 = 3U;
	uint16_t x3903 = 29U;
	uint16_t x3904 = 12U;
	uint64_t t79 = 5611092993987970LLU;

	t79 = (x3901-(x3902*(x3903>>x3904)));

	if (t79 != 1853997770LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x3913 = 1U;
	static int16_t x3916 = 11;
	static volatile int32_t t80 = 481158;

	t80 = (x3913-(x3914*(x3915>>x3916)));

	if (t80 != -3936) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x3929 = INT16_MIN;
	int64_t x3930 = 2556467342LL;
	int8_t x3931 = 22;
	volatile uint32_t x3932 = 25U;
	static volatile int64_t t81 = 345531054312487LL;

	t81 = (x3929-(x3930*(x3931>>x3932)));

	if (t81 != -32768LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x3949 = -1;
	int64_t x3950 = INT64_MIN;
	int8_t x3951 = INT8_MAX;
	static volatile int64_t t82 = -29096868989LL;

	t82 = (x3949-(x3950*(x3951>>x3952)));

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x3998 = 1610264470996LLU;
	static uint8_t x3999 = 2U;
	static uint16_t x4000 = 3U;
	uint64_t t83 = 4358935LLU;

	t83 = (x3997-(x3998*(x3999>>x4000)));

	if (t83 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x4029 = UINT16_MAX;
	uint8_t x4031 = UINT8_MAX;
	uint32_t x4032 = 25U;
	int32_t t84 = 252368;

	t84 = (x4029-(x4030*(x4031>>x4032)));

	if (t84 != 65535) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x4097 = INT16_MIN;
	static uint32_t x4099 = 29827U;
	uint8_t x4100 = 2U;
	static uint32_t t85 = 325667534U;

	t85 = (x4097-(x4098*(x4099>>x4100)));

	if (t85 != 4294949440U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x4121 = -260996657970339046LL;
	uint8_t x4122 = 14U;
	static int8_t x4124 = 1;
	uint64_t t86 = 3417076827391836502LLU;

	t86 = (x4121-(x4122*(x4123>>x4124)));

	if (t86 != 18185747415611460400LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x4189 = -395LL;
	int8_t x4190 = INT8_MIN;
	int64_t x4191 = INT64_MAX;
	static int32_t x4192 = 54;

	t87 = (x4189-(x4190*(x4191>>x4192)));

	if (t87 != 65013LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x4210 = INT32_MIN;
	volatile uint16_t x4211 = UINT16_MAX;
	volatile uint16_t x4212 = 21U;
	int32_t t88 = 21826771;

	t88 = (x4209-(x4210*(x4211>>x4212)));

	if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x4294 = INT32_MIN;
	uint8_t x4295 = 47U;
	static volatile int32_t t89 = -3951085;

	t89 = (x4293-(x4294*(x4295>>x4296)));

	if (t89 != -169598) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint8_t x4321 = 6U;
	static int8_t x4322 = INT8_MIN;
	uint32_t x4323 = 9583U;
	uint8_t x4324 = 1U;
	volatile uint32_t t90 = 652U;

	t90 = (x4321-(x4322*(x4323>>x4324)));

	if (t90 != 613254U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x4335 = INT64_MAX;
	uint8_t x4336 = 24U;
	static volatile int64_t t91 = -98974336678660LL;

	t91 = (x4333-(x4334*(x4335>>x4336)));

	if (t91 != -140187732525763LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x4353 = INT8_MIN;
	uint64_t x4354 = 7517334020892LLU;
	static uint32_t x4355 = 398087014U;
	uint64_t t92 = 757LLU;

	t92 = (x4353-(x4354*(x4355>>x4356)));

	if (t92 != 8178247376381152452LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x4410 = 15431U;
	static volatile uint16_t x4411 = 0U;
	int8_t x4412 = 1;

	t93 = (x4409-(x4410*(x4411>>x4412)));

	if (t93 != 1U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x4469 = INT8_MIN;
	volatile uint8_t x4470 = 3U;
	int16_t x4472 = 21;

	t94 = (x4469-(x4470*(x4471>>x4472)));

	if (t94 != 18446717685430484867LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x4517 = UINT64_MAX;
	static int16_t x4518 = INT16_MIN;
	uint8_t x4519 = 12U;

	t95 = (x4517-(x4518*(x4519>>x4520)));

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x4545 = 3067U;
	static uint8_t x4546 = UINT8_MAX;
	static volatile uint64_t x4547 = 18738925895LLU;
	uint64_t t96 = 204584694470LLU;

	t96 = (x4545-(x4546*(x4547>>x4548)));

	if (t96 != 18446741684496503198LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x4586 = INT64_MIN;
	uint64_t x4587 = UINT64_MAX;
	static int64_t x4588 = 43LL;
	uint64_t t97 = 2LLU;

	t97 = (x4585-(x4586*(x4587>>x4588)));

	if (t97 != 9223372036852311354LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x4618 = -22;
	uint8_t x4619 = 37U;
	static uint8_t x4620 = 25U;
	int32_t t98 = -28640;

	t98 = (x4617-(x4618*(x4619>>x4620)));

	if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x4658 = UINT8_MAX;
	volatile int64_t t99 = INT64_MAX;

	t99 = (x4657-(x4658*(x4659>>x4660)));

	if (t99 != INT64_MAX) { NG(); } else { ; }
	
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

