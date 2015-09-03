#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x80 = 3U;
int16_t x253 = 43;
volatile int8_t x256 = INT8_MIN;
int8_t x312 = INT8_MAX;
uint8_t x337 = 1U;
volatile int64_t x339 = 17LL;
static uint32_t t4 = 453298U;
int16_t x341 = INT16_MAX;
int8_t x343 = 1;
int8_t x350 = INT8_MAX;
volatile int16_t x405 = -1;
int32_t x545 = 51;
int32_t x692 = 222759;
uint8_t x703 = 0U;
uint64_t t14 = UINT64_MAX;
static int16_t x795 = 3;
int16_t x796 = INT16_MIN;
uint64_t x910 = UINT64_MAX;
int16_t x917 = -1;
static uint8_t x951 = 8U;
static int64_t x952 = 47330491LL;
int8_t x957 = -15;
static volatile int64_t x1149 = INT64_MIN;
int8_t x1151 = 1;
static uint8_t x1152 = 102U;
volatile int64_t t23 = -11808LL;
static uint32_t x1221 = UINT32_MAX;
volatile uint32_t x1223 = 3U;
volatile uint32_t t24 = 1490U;
volatile int64_t x1304 = -1LL;
int32_t x1483 = 0;
static volatile int64_t t26 = 117018625LL;
uint64_t x1514 = 239277585294438LLU;
int16_t x1521 = 11;
static int16_t x1589 = INT16_MAX;
uint8_t x1591 = 3U;
uint16_t x1592 = 32U;
int64_t x1672 = -1LL;
static int64_t x1701 = INT64_MIN;
volatile uint32_t t32 = 184985U;
static int32_t t33 = 2;
volatile int64_t x1911 = 0LL;
volatile uint16_t x1994 = 7324U;
static uint32_t x2009 = 2034802U;
int64_t x2184 = -20909299562LL;
volatile int64_t t39 = -36535174189LL;
uint8_t x2234 = 40U;
int32_t x2242 = INT32_MAX;
int16_t x2244 = INT16_MIN;
static volatile uint64_t t42 = 32301642509LLU;
volatile uint8_t x2292 = 31U;
static uint32_t x2306 = 2238U;
volatile int16_t x2486 = 1752;
uint8_t x2487 = 1U;
volatile int64_t t46 = 9131778890083LL;
static volatile uint8_t x2578 = 3U;
volatile uint64_t x2580 = 5125883729116307LLU;
uint16_t x2793 = 156U;
int16_t x2862 = 77;
uint64_t x2998 = UINT64_MAX;
uint8_t x3151 = 0U;
volatile int32_t x3164 = -1;
volatile uint64_t x3237 = 87LLU;
uint8_t x3283 = 12U;
static volatile int16_t x3297 = INT16_MIN;
volatile int16_t x3298 = 72;
static uint16_t x3300 = 557U;
int16_t x3310 = INT16_MAX;
volatile int8_t x3332 = INT8_MIN;
uint64_t x3342 = UINT64_MAX;
uint16_t x3375 = 2U;
int32_t x3416 = 515466;
int64_t x3469 = -1LL;
uint8_t x3475 = 7U;
int32_t x3476 = INT32_MIN;
int8_t x3630 = 1;
static int16_t x3631 = 0;
static int64_t x3692 = INT64_MAX;
int8_t x3787 = 1;
int64_t x3788 = 330LL;
int64_t x3814 = 507660909933LL;
uint64_t x3934 = UINT64_MAX;
volatile uint8_t x3963 = 2U;
static uint64_t x4011 = 23LLU;
uint64_t x4012 = 115365105646375616LLU;
int8_t x4055 = 1;
static uint64_t x4078 = 29344257746923792LLU;
uint64_t t81 = 193620479695LLU;
volatile int8_t x4088 = -1;
uint8_t x4192 = UINT8_MAX;
uint16_t x4433 = 14U;
int32_t x4434 = INT32_MAX;
int16_t x4461 = INT16_MAX;
int16_t x4463 = 12;
int32_t x4474 = 6;
int64_t t87 = -23542754315636462LL;
volatile int32_t x4540 = -1;
int32_t x4551 = 6;
volatile int64_t t89 = -869886440309LL;
int64_t x4576 = INT64_MIN;
uint64_t x4666 = UINT64_MAX;
static uint8_t x4702 = 2U;
uint64_t x4704 = 1075925459LLU;
volatile uint8_t x4987 = 0U;
uint16_t x5053 = UINT16_MAX;
int32_t x5054 = INT32_MAX;
int64_t x5056 = INT64_MIN;
volatile uint64_t x5123 = 50LLU;
uint8_t x5124 = 5U;
int64_t x5155 = 0LL;
volatile int8_t x5156 = -1;


void f0(void) {
	int64_t x77 = INT64_MAX;
	uint32_t x78 = 12740358U;
	volatile int16_t x79 = 7;
	int64_t t0 = -71807920709LL;

	t0 = (x77^((x78<<x79)^x80));

	if (t0 != 9223372035224009980LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x254 = 23123066907271LLU;
	uint64_t x255 = 2LLU;
	uint64_t t1 = 5908LLU;

	t1 = (x253^((x254<<x255)^x256));

	if (t1 != 18446651581441922487LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x301 = -1;
	int16_t x302 = INT16_MAX;
	uint16_t x303 = 1U;
	int8_t x304 = INT8_MIN;
	volatile int32_t t2 = -225465409;

	t2 = (x301^((x302<<x303)^x304));

	if (t2 != 65409) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x309 = INT16_MIN;
	uint32_t x310 = UINT32_MAX;
	int32_t x311 = 0;
	uint32_t t3 = 1379943U;

	t3 = (x309^((x310<<x311)^x312));

	if (t3 != 32640U) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x338 = UINT32_MAX;
	uint8_t x340 = UINT8_MAX;

	t4 = (x337^((x338<<x339)^x340));

	if (t4 != 4294836478U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x342 = 177347741387472LLU;
	int64_t x344 = INT64_MIN;
	uint64_t t5 = 2981992009LLU;

	t5 = (x341^((x342<<x343)^x344));

	if (t5 != 9223726732337572447LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x349 = -7;
	static int16_t x351 = 4;
	int32_t x352 = -1;
	static volatile int32_t t6 = 13864;

	t6 = (x349^((x350<<x351)^x352));

	if (t6 != 2038) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x406 = INT16_MAX;
	int8_t x407 = 1;
	int64_t x408 = INT64_MAX;
	volatile int64_t t7 = -3LL;

	t7 = (x405^((x406<<x407)^x408));

	if (t7 != -9223372036854710274LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x433 = 52036LLU;
	uint16_t x434 = 186U;
	int8_t x435 = 4;
	static uint32_t x436 = 244631U;
	volatile uint64_t t8 = 41508818395860854LLU;

	t8 = (x433^((x434<<x435)^x436));

	if (t8 != 228211LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x546 = INT16_MAX;
	volatile int8_t x547 = 10;
	uint32_t x548 = UINT32_MAX;
	volatile uint32_t t9 = 138479101U;

	t9 = (x545^((x546<<x547)^x548));

	if (t9 != 4261413836U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x601 = INT32_MAX;
	volatile uint16_t x602 = 1407U;
	static uint8_t x603 = 0U;
	int16_t x604 = -1;
	volatile int32_t t10 = 316;

	t10 = (x601^((x602<<x603)^x604));

	if (t10 != -2147482241) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x633 = INT32_MIN;
	int16_t x634 = INT16_MAX;
	uint32_t x635 = 7U;
	int64_t x636 = 759294LL;
	static volatile int64_t t11 = -556945909022890136LL;

	t11 = (x633^((x634<<x635)^x636));

	if (t11 != -2144048514LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x689 = -1;
	int64_t x690 = 0LL;
	uint32_t x691 = 6U;
	int64_t t12 = 422985219606LL;

	t12 = (x689^((x690<<x691)^x692));

	if (t12 != -222760LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x697 = INT16_MAX;
	uint8_t x698 = 49U;
	volatile uint8_t x699 = 12U;
	static int32_t x700 = 110250;
	volatile int32_t t13 = 33212;

	t13 = (x697^((x698<<x699)^x700));

	if (t13 != 180565) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x701 = INT8_MIN;
	uint64_t x702 = UINT64_MAX;
	static volatile int8_t x704 = INT8_MIN;

	t14 = (x701^((x702<<x703)^x704));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x733 = 60U;
	int8_t x734 = INT8_MAX;
	uint8_t x735 = 2U;
	volatile int32_t x736 = INT32_MIN;
	volatile int32_t t15 = 1713281;

	t15 = (x733^((x734<<x735)^x736));

	if (t15 != -2147483200) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x793 = INT8_MAX;
	uint64_t x794 = 6416694445767012267LLU;
	static uint64_t t16 = 38792018985297198LLU;

	t16 = (x793^((x794<<x795)^x796));

	if (t16 != 4006676654992588071LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x909 = -3;
	uint8_t x911 = 0U;
	uint16_t x912 = 992U;
	static volatile uint64_t t17 = 2007LLU;

	t17 = (x909^((x910<<x911)^x912));

	if (t17 != 994LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x918 = INT8_MAX;
	static uint8_t x919 = 0U;
	static int16_t x920 = INT16_MIN;
	int32_t t18 = 5;

	t18 = (x917^((x918<<x919)^x920));

	if (t18 != 32640) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x941 = -264947380;
	uint64_t x942 = 83LLU;
	static uint8_t x943 = 3U;
	int16_t x944 = -24;
	uint64_t t19 = 206435446LLU;

	t19 = (x941^((x942<<x943)^x944));

	if (t19 != 264946748LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x949 = INT16_MIN;
	volatile int8_t x950 = 10;
	int64_t t20 = 8368298799LL;

	t20 = (x949^((x950<<x951)^x952));

	if (t20 != -47333701LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x958 = 31;
	uint8_t x959 = 9U;
	static int32_t x960 = INT32_MIN;
	volatile int32_t t21 = -1473633;

	t21 = (x957^((x958<<x959)^x960));

	if (t21 != 2147467761) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x1113 = INT32_MAX;
	uint64_t x1114 = UINT64_MAX;
	uint32_t x1115 = 0U;
	int16_t x1116 = -3421;
	volatile uint64_t t22 = 2000LLU;

	t22 = (x1113^((x1114<<x1115)^x1116));

	if (t22 != 2147480227LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x1150 = INT8_MAX;

	t23 = (x1149^((x1150<<x1151)^x1152));

	if (t23 != -9223372036854775656LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x1222 = UINT32_MAX;
	uint32_t x1224 = 6U;

	t24 = (x1221^((x1222<<x1223)^x1224));

	if (t24 != 1U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1301 = INT32_MIN;
	uint8_t x1302 = 0U;
	int8_t x1303 = 11;
	int64_t t25 = 834104717371053LL;

	t25 = (x1301^((x1302<<x1303)^x1304));

	if (t25 != 2147483647LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1481 = INT64_MIN;
	int16_t x1482 = INT16_MAX;
	static uint8_t x1484 = 112U;

	t26 = (x1481^((x1482<<x1483)^x1484));

	if (t26 != -9223372036854743153LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1513 = -1LL;
	volatile int8_t x1515 = 3;
	int32_t x1516 = 4;
	uint64_t t27 = 189009LLU;

	t27 = (x1513^((x1514<<x1515)^x1516));

	if (t27 != 18444829853027196107LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1522 = UINT16_MAX;
	uint8_t x1523 = 5U;
	int8_t x1524 = INT8_MIN;
	volatile int32_t t28 = -617896352;

	t28 = (x1521^((x1522<<x1523)^x1524));

	if (t28 != -2097045) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x1590 = 214373U;
	static volatile uint32_t t29 = 6736086U;

	t29 = (x1589^((x1590<<x1591)^x1592));

	if (t29 != 1725687U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1669 = INT32_MAX;
	int8_t x1670 = 0;
	uint8_t x1671 = 24U;
	volatile int64_t t30 = 599557101964243LL;

	t30 = (x1669^((x1670<<x1671)^x1672));

	if (t30 != -2147483648LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x1702 = 48U;
	static int8_t x1703 = 9;
	int8_t x1704 = INT8_MIN;
	int64_t t31 = -68785471242360LL;

	t31 = (x1701^((x1702<<x1703)^x1704));

	if (t31 != 9223372036854751104LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1853 = -1;
	uint32_t x1854 = 209242718U;
	uint32_t x1855 = 3U;
	volatile int32_t x1856 = INT32_MAX;

	t32 = (x1853^((x1854<<x1855)^x1856));

	if (t32 != 3821425392U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x1873 = -1;
	static uint16_t x1874 = UINT16_MAX;
	static int64_t x1875 = 8LL;
	int8_t x1876 = INT8_MIN;

	t33 = (x1873^((x1874<<x1875)^x1876));

	if (t33 != 16777087) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1909 = INT32_MAX;
	uint16_t x1910 = 11U;
	int32_t x1912 = -12188905;
	int32_t t34 = 1;

	t34 = (x1909^((x1910<<x1911)^x1912));

	if (t34 != -2135294749) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x1925 = -1;
	static volatile uint64_t x1926 = 339LLU;
	uint32_t x1927 = 12U;
	int32_t x1928 = -358260462;
	static uint64_t t35 = 5420LLU;

	t35 = (x1925^((x1926<<x1927)^x1928));

	if (t35 != 357543661LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x1993 = UINT16_MAX;
	uint8_t x1995 = 5U;
	int64_t x1996 = -137574827135663994LL;
	int64_t t36 = 26225528418LL;

	t36 = (x1993^((x1994<<x1995)^x1996));

	if (t36 != -137574827135832839LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x2010 = 117876026LLU;
	uint16_t x2011 = 7U;
	int8_t x2012 = -1;
	uint64_t t37 = 70387036519464LLU;

	t37 = (x2009^((x2010<<x2011)^x2012));

	if (t37 != 18446744058621750925LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x2025 = -1;
	volatile uint8_t x2026 = 0U;
	static uint8_t x2027 = 27U;
	int16_t x2028 = INT16_MIN;
	volatile int32_t t38 = 26;

	t38 = (x2025^((x2026<<x2027)^x2028));

	if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x2181 = -1LL;
	volatile uint8_t x2182 = 2U;
	uint16_t x2183 = 1U;

	t39 = (x2181^((x2182<<x2183)^x2184));

	if (t39 != 20909299565LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x2193 = 1442U;
	volatile int32_t x2194 = INT32_MAX;
	static volatile int8_t x2195 = 0;
	int8_t x2196 = INT8_MAX;
	static uint32_t t40 = 18841U;

	t40 = (x2193^((x2194<<x2195)^x2196));

	if (t40 != 2147482146U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2233 = INT32_MIN;
	uint32_t x2235 = 0U;
	int16_t x2236 = INT16_MIN;
	static int32_t t41 = -2;

	t41 = (x2233^((x2234<<x2235)^x2236));

	if (t41 != 2147450920) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x2241 = 12926525LLU;
	volatile uint8_t x2243 = 0U;

	t42 = (x2241^((x2242<<x2243)^x2244));

	if (t42 != 18446744071574995394LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x2289 = -1;
	uint8_t x2290 = 7U;
	uint8_t x2291 = 4U;
	static volatile int32_t t43 = -591572;

	t43 = (x2289^((x2290<<x2291)^x2292));

	if (t43 != -112) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x2305 = INT8_MIN;
	volatile int8_t x2307 = 5;
	int16_t x2308 = INT16_MAX;
	uint32_t t44 = 58U;

	t44 = (x2305^((x2306<<x2307)^x2308));

	if (t44 != 4294875071U) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint64_t x2413 = UINT64_MAX;
	int8_t x2414 = INT8_MAX;
	uint16_t x2415 = 1U;
	static uint32_t x2416 = 57664496U;
	volatile uint64_t t45 = 14633474LLU;

	t45 = (x2413^((x2414<<x2415)^x2416));

	if (t45 != 18446744073651887345LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2485 = -1;
	static int64_t x2488 = 32LL;

	t46 = (x2485^((x2486<<x2487)^x2488));

	if (t46 != -3473LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x2573 = 7U;
	uint16_t x2574 = 3096U;
	uint16_t x2575 = 14U;
	uint8_t x2576 = UINT8_MAX;
	int32_t t47 = -2735660;

	t47 = (x2573^((x2574<<x2575)^x2576));

	if (t47 != 50725112) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x2577 = INT16_MAX;
	uint16_t x2579 = 11U;
	volatile uint64_t t48 = 910682753LLU;

	t48 = (x2577^((x2578<<x2579)^x2580));

	if (t48 != 5125883729091436LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x2597 = INT16_MIN;
	uint64_t x2598 = 93LLU;
	static volatile uint8_t x2599 = 5U;
	volatile uint16_t x2600 = 2U;
	volatile uint64_t t49 = 2392036030857LLU;

	t49 = (x2597^((x2598<<x2599)^x2600));

	if (t49 != 18446744073709521826LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x2713 = -1;
	uint16_t x2714 = 25U;
	volatile uint8_t x2715 = 6U;
	int32_t x2716 = -20953;
	volatile int32_t t50 = 1496;

	t50 = (x2713^((x2714<<x2715)^x2716));

	if (t50 != 22424) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x2794 = 2;
	static int16_t x2795 = 1;
	uint16_t x2796 = 10233U;
	static int32_t t51 = -45939387;

	t51 = (x2793^((x2794<<x2795)^x2796));

	if (t51 != 10081) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x2813 = 13;
	volatile uint64_t x2814 = 16069944982LLU;
	static int8_t x2815 = 2;
	volatile uint32_t x2816 = 2131726096U;
	uint64_t t52 = 1LLU;

	t52 = (x2813^((x2814<<x2815)^x2816));

	if (t52 != 62416491845LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x2849 = 1053U;
	uint8_t x2850 = 0U;
	static uint8_t x2851 = 5U;
	volatile int64_t x2852 = INT64_MIN;
	volatile int64_t t53 = 304345692268LL;

	t53 = (x2849^((x2850<<x2851)^x2852));

	if (t53 != -9223372036854774755LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x2861 = INT16_MIN;
	uint32_t x2863 = 18U;
	int16_t x2864 = -4;
	static volatile int32_t t54 = 7;

	t54 = (x2861^((x2862<<x2863)^x2864));

	if (t54 != 20217852) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x2997 = INT16_MIN;
	int8_t x2999 = 6;
	uint16_t x3000 = 1872U;
	volatile uint64_t t55 = 258LLU;

	t55 = (x2997^((x2998<<x2999)^x3000));

	if (t55 != 30864LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint8_t x3145 = 14U;
	uint64_t x3146 = 3655178567752LLU;
	static int8_t x3147 = 0;
	uint32_t x3148 = 0U;
	volatile uint64_t t56 = 284LLU;

	t56 = (x3145^((x3146<<x3147)^x3148));

	if (t56 != 3655178567750LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x3149 = INT64_MIN;
	uint32_t x3150 = UINT32_MAX;
	int32_t x3152 = INT32_MAX;
	volatile int64_t t57 = -778LL;

	t57 = (x3149^((x3150<<x3151)^x3152));

	if (t57 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int32_t x3161 = INT32_MIN;
	volatile int16_t x3162 = 485;
	static volatile uint32_t x3163 = 1U;
	static int32_t t58 = 252319;

	t58 = (x3161^((x3162<<x3163)^x3164));

	if (t58 != 2147482677) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x3238 = 294051015266771197LLU;
	int8_t x3239 = 0;
	int16_t x3240 = 12667;
	volatile uint64_t t59 = 13LLU;

	t59 = (x3237^((x3238<<x3239)^x3240));

	if (t59 != 294051015266767313LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x3281 = 2U;
	volatile int16_t x3282 = INT16_MAX;
	volatile uint32_t x3284 = 333559830U;
	volatile uint32_t t60 = 991323U;

	t60 = (x3281^((x3282<<x3283)^x3284));

	if (t60 != 337528852U) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x3299 = 9U;
	int32_t t61 = 744;

	t61 = (x3297^((x3298<<x3299)^x3300));

	if (t61 != -60883) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x3309 = 13882U;
	uint32_t x3311 = 3U;
	uint16_t x3312 = 1U;
	static volatile int32_t t62 = 2435;

	t62 = (x3309^((x3310<<x3311)^x3312));

	if (t62 != 248259) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x3329 = -4;
	uint64_t x3330 = UINT64_MAX;
	static uint32_t x3331 = 0U;
	volatile uint64_t t63 = 1040371175LLU;

	t63 = (x3329^((x3330<<x3331)^x3332));

	if (t63 != 18446744073709551491LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x3341 = 28U;
	static int8_t x3343 = 3;
	int32_t x3344 = INT32_MAX;
	volatile uint64_t t64 = 2764730163847312576LLU;

	t64 = (x3341^((x3342<<x3343)^x3344));

	if (t64 != 18446744071562067995LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x3373 = INT32_MIN;
	int8_t x3374 = 1;
	static int32_t x3376 = 7;
	volatile int32_t t65 = 20768;

	t65 = (x3373^((x3374<<x3375)^x3376));

	if (t65 != -2147483645) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x3385 = 581U;
	uint64_t x3386 = UINT64_MAX;
	volatile uint8_t x3387 = 2U;
	int32_t x3388 = INT32_MAX;
	uint64_t t66 = 221653LLU;

	t66 = (x3385^((x3386<<x3387)^x3388));

	if (t66 != 18446744071562068550LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x3393 = 1;
	static uint8_t x3394 = 6U;
	uint8_t x3395 = 21U;
	static uint32_t x3396 = UINT32_MAX;
	static volatile uint32_t t67 = 191110833U;

	t67 = (x3393^((x3394<<x3395)^x3396));

	if (t67 != 4282384382U) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x3405 = 200442721;
	uint64_t x3406 = UINT64_MAX;
	volatile uint8_t x3407 = 10U;
	int64_t x3408 = INT64_MIN;
	uint64_t t68 = 27737589007078591LLU;

	t68 = (x3405^((x3406<<x3407)^x3408));

	if (t68 != 9223372036654333793LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x3413 = -1;
	uint8_t x3414 = UINT8_MAX;
	static uint16_t x3415 = 2U;
	int32_t t69 = -64;

	t69 = (x3413^((x3414<<x3415)^x3416));

	if (t69 != -515703) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x3470 = 54;
	uint16_t x3471 = 8U;
	int32_t x3472 = INT32_MIN;
	volatile int64_t t70 = 3247544LL;

	t70 = (x3469^((x3470<<x3471)^x3472));

	if (t70 != 2147469823LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x3473 = INT8_MIN;
	int16_t x3474 = 56;
	static int32_t t71 = 611;

	t71 = (x3473^((x3474<<x3475)^x3476));

	if (t71 != 2147476352) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x3597 = INT64_MAX;
	volatile uint32_t x3598 = UINT32_MAX;
	uint16_t x3599 = 7U;
	int64_t x3600 = -1LL;
	volatile int64_t t72 = 179LL;

	t72 = (x3597^((x3598<<x3599)^x3600));

	if (t72 != -9223372032559808640LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x3629 = INT16_MIN;
	int64_t x3632 = -58963160188424LL;
	int64_t t73 = 551055LL;

	t73 = (x3629^((x3630<<x3631)^x3632));

	if (t73 != 58963160185337LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x3689 = -1;
	uint8_t x3690 = UINT8_MAX;
	volatile uint8_t x3691 = 4U;
	volatile int64_t t74 = 0LL;

	t74 = (x3689^((x3690<<x3691)^x3692));

	if (t74 != -9223372036854771728LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x3785 = INT16_MIN;
	int32_t x3786 = 43913;
	volatile int64_t t75 = -230626LL;

	t75 = (x3785^((x3786<<x3787)^x3788));

	if (t75 != -76200LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x3813 = -1;
	int32_t x3815 = 0;
	volatile uint8_t x3816 = 1U;
	static volatile int64_t t76 = -218360783528LL;

	t76 = (x3813^((x3814<<x3815)^x3816));

	if (t76 != -507660909933LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x3933 = 2U;
	uint16_t x3935 = 0U;
	uint8_t x3936 = UINT8_MAX;
	static volatile uint64_t t77 = 5765503491LLU;

	t77 = (x3933^((x3934<<x3935)^x3936));

	if (t77 != 18446744073709551362LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x3961 = INT16_MAX;
	uint8_t x3962 = 8U;
	int64_t x3964 = 1167698451063558186LL;
	int64_t t78 = -20917LL;

	t78 = (x3961^((x3962<<x3963)^x3964));

	if (t78 != 1167698451063549941LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x4009 = -1;
	static volatile uint32_t x4010 = 196U;
	uint64_t t79 = 996784587270LLU;

	t79 = (x4009^((x4010<<x4011)^x4012));

	if (t79 != 18331378968566492479LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x4053 = -1542808LL;
	static int32_t x4054 = 47;
	static volatile int8_t x4056 = INT8_MAX;
	volatile int64_t t80 = 10376LL;

	t80 = (x4053^((x4054<<x4055)^x4056));

	if (t80 != -1542839LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x4077 = 184625U;
	uint8_t x4079 = 2U;
	uint64_t x4080 = 421593544LLU;

	t81 = (x4077^((x4078<<x4079)^x4080));

	if (t81 != 117377031140545721LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x4085 = 205782U;
	uint16_t x4086 = 3011U;
	uint8_t x4087 = 1U;
	volatile uint32_t t82 = 397649171U;

	t82 = (x4085^((x4086<<x4087)^x4088));

	if (t82 != 4294757295U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x4189 = UINT64_MAX;
	uint8_t x4190 = UINT8_MAX;
	volatile int16_t x4191 = 0;
	volatile uint64_t t83 = UINT64_MAX;

	t83 = (x4189^((x4190<<x4191)^x4192));

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x4435 = 0U;
	uint8_t x4436 = 110U;
	int32_t t84 = -222;

	t84 = (x4433^((x4434<<x4435)^x4436));

	if (t84 != 2147483551) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x4462 = 100230;
	int16_t x4464 = 2;
	volatile int32_t t85 = 1;

	t85 = (x4461^((x4462<<x4463)^x4464));

	if (t85 != 410525693) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x4473 = 3246875;
	static uint32_t x4475 = 2U;
	uint8_t x4476 = 42U;
	static int32_t t86 = 133142775;

	t86 = (x4473^((x4474<<x4475)^x4476));

	if (t86 != 3246889) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x4497 = INT64_MIN;
	uint32_t x4498 = 1U;
	uint8_t x4499 = 30U;
	int64_t x4500 = INT64_MIN;

	t87 = (x4497^((x4498<<x4499)^x4500));

	if (t87 != 1073741824LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int32_t x4537 = 119876676;
	int32_t x4538 = 53379;
	int8_t x4539 = 13;
	static volatile int32_t t88 = -620;

	t88 = (x4537^((x4538<<x4539)^x4540));

	if (t88 != -490032197) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x4549 = 6790692U;
	volatile int16_t x4550 = INT16_MAX;
	int64_t x4552 = -27268177247LL;

	t89 = (x4549^((x4550<<x4551)^x4552));

	if (t89 != -27266596027LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x4573 = INT32_MIN;
	volatile uint64_t x4574 = UINT64_MAX;
	uint8_t x4575 = 26U;
	volatile uint64_t t90 = 184529856116620LLU;

	t90 = (x4573^((x4574<<x4575)^x4576));

	if (t90 != 9223372038935150592LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x4665 = INT8_MIN;
	volatile int32_t x4667 = 0;
	volatile uint8_t x4668 = UINT8_MAX;
	volatile uint64_t t91 = 17501LLU;

	t91 = (x4665^((x4666<<x4667)^x4668));

	if (t91 != 128LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x4701 = INT8_MIN;
	uint32_t x4703 = 13U;
	volatile uint64_t t92 = 2074554749951LLU;

	t92 = (x4701^((x4702<<x4703)^x4704));

	if (t92 != 18446744072633642579LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x4717 = -247;
	int16_t x4718 = 4;
	int8_t x4719 = 0;
	static volatile int32_t x4720 = INT32_MIN;
	volatile int32_t t93 = -21240;

	t93 = (x4717^((x4718<<x4719)^x4720));

	if (t93 != 2147483405) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x4985 = -31188110562LL;
	uint16_t x4986 = UINT16_MAX;
	int32_t x4988 = INT32_MIN;
	volatile int64_t t94 = 33050LL;

	t94 = (x4985^((x4986<<x4987)^x4988));

	if (t94 != 31088954593LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x5055 = 0;
	static int64_t t95 = -1LL;

	t95 = (x5053^((x5054<<x5055)^x5056));

	if (t95 != -9223372034707357696LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x5121 = -4094;
	uint64_t x5122 = UINT64_MAX;
	volatile uint64_t t96 = 0LLU;

	t96 = (x5121^((x5122<<x5123)^x5124));

	if (t96 != 1125899906838535LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x5153 = 186U;
	uint64_t x5154 = 11769382382433LLU;
	uint64_t t97 = 19055472783139LLU;

	t97 = (x5153^((x5154<<x5155)^x5156));

	if (t97 != 18446732304327169060LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x5221 = INT64_MAX;
	static int16_t x5222 = INT16_MAX;
	static volatile uint64_t x5223 = 1LLU;
	int32_t x5224 = INT32_MIN;
	int64_t t98 = -16978155959LL;

	t98 = (x5221^((x5222<<x5223)^x5224));

	if (t98 != -9223372034707357695LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x5253 = 31924361;
	uint32_t x5254 = 545249U;
	volatile int64_t x5255 = 13LL;
	int32_t x5256 = -1;
	static uint32_t t99 = 2U;

	t99 = (x5253^((x5254<<x5255)^x5256));

	if (t99 != 4096065398U) { NG(); } else { ; }
	
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

