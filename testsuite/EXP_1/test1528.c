#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x60 = 27U;
uint64_t x66 = 72LLU;
int64_t x115 = 20973LL;
static int64_t t3 = 3LL;
static uint64_t x179 = 7070518231885LLU;
static int8_t x236 = 4;
volatile uint16_t x421 = 270U;
uint8_t x453 = UINT8_MAX;
int16_t x546 = 440;
static int8_t x547 = INT8_MAX;
static volatile int64_t t13 = -151610LL;
int64_t x698 = -1LL;
volatile int32_t t17 = 41;
static uint32_t x989 = 1746U;
static uint16_t x1060 = 1U;
int64_t x1218 = INT64_MIN;
int16_t x1241 = -2241;
static int8_t x1458 = -1;
uint64_t x1459 = 229702475703943473LLU;
uint64_t t27 = 4LLU;
uint64_t t28 = 1LLU;
uint32_t x1535 = UINT32_MAX;
int64_t x1594 = 0LL;
uint64_t x1815 = 449LLU;
uint64_t t31 = 7973929233867561965LLU;
int64_t x1851 = -1LL;
int64_t t32 = -3202617926758LL;
volatile int8_t x1946 = INT8_MAX;
static int32_t t33 = -3681;
uint64_t x1962 = 3127455815LLU;
int64_t t35 = -20017771627LL;
int32_t t36 = 472164328;
int8_t x1990 = 0;
int32_t t37 = 60837;
static int32_t x2010 = -1;
int32_t x2011 = -1;
int64_t x2161 = -1LL;
uint8_t x2164 = 2U;
static int16_t x2193 = INT16_MAX;
int32_t x2233 = INT32_MIN;
int8_t x2234 = INT8_MIN;
uint64_t x2585 = 37LLU;
volatile uint8_t x2586 = 1U;
int8_t x2728 = 9;
int64_t x2802 = 107953124LL;
int8_t x2839 = INT8_MAX;
uint8_t x2932 = 0U;
uint8_t x3112 = 1U;
static uint8_t x3137 = 3U;
int64_t t60 = -125LL;
volatile int16_t x3193 = -1;
volatile uint16_t x3196 = 30U;
volatile int32_t t61 = 48988;
uint64_t x3208 = 6LLU;
volatile int32_t t62 = 61669;
volatile int8_t x3231 = -1;
uint64_t x3267 = 6336782634965068304LLU;
uint8_t x3268 = 13U;
uint32_t x3311 = 246U;
static int8_t x3328 = 0;
int32_t t66 = 1953;
int8_t x3356 = 1;
int16_t x3371 = 2196;
uint64_t x3713 = 111702799100111182LLU;
int64_t x3714 = -1068707336839885LL;
int32_t x3715 = -1;
volatile int32_t t71 = 28;
uint32_t x3741 = 2499180U;
volatile uint32_t t72 = 5U;
static volatile int32_t x3784 = 0;
static int64_t x3793 = INT64_MIN;
volatile uint32_t x3794 = 374061818U;
int32_t t75 = 57;
int8_t x3899 = 1;
static uint8_t x3902 = 50U;
int32_t t80 = 15416;
int32_t t81 = 23;
int8_t x3996 = 1;
int64_t x4145 = INT64_MIN;
int32_t x4146 = INT32_MIN;
uint8_t x4167 = UINT8_MAX;
int32_t t87 = -3084;
int64_t x4205 = 19809425648294373LL;
int64_t x4241 = INT64_MIN;
int8_t x4280 = 2;
uint32_t t91 = 1282943993U;
static uint8_t x4460 = 3U;
int32_t t93 = 208116;
int16_t x4529 = -1;
int16_t x4608 = 1;
int8_t x4621 = INT8_MIN;
int16_t x4702 = INT16_MAX;
uint64_t x4703 = 90811883LLU;
int32_t x4774 = INT32_MAX;


void f0(void) {
	int8_t x49 = INT8_MAX;
	volatile int16_t x50 = 9;
	uint16_t x51 = UINT16_MAX;
	int16_t x52 = 3;
	int32_t t0 = 24634167;

	t0 = (((x49<=x50)+x51)>>x52);

	if (t0 != 8191) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x57 = INT16_MAX;
	int16_t x58 = -1;
	uint32_t x59 = 446U;
	volatile uint32_t t1 = 73603420U;

	t1 = (((x57<=x58)+x59)>>x60);

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x65 = 103255288986358LLU;
	uint64_t x67 = 10459LLU;
	int16_t x68 = 1;
	uint64_t t2 = 377LLU;

	t2 = (((x65<=x66)+x67)>>x68);

	if (t2 != 5229LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x113 = UINT64_MAX;
	int8_t x114 = -1;
	volatile uint8_t x116 = 5U;

	t3 = (((x113<=x114)+x115)>>x116);

	if (t3 != 655LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x177 = 120U;
	static int8_t x178 = INT8_MAX;
	int8_t x180 = 18;
	volatile uint64_t t4 = 6035037054286006LLU;

	t4 = (((x177<=x178)+x179)>>x180);

	if (t4 != 26971886LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x233 = -1;
	int32_t x234 = -1;
	int16_t x235 = 0;
	volatile int32_t t5 = 1;

	t5 = (((x233<=x234)+x235)>>x236);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x325 = INT32_MIN;
	volatile int8_t x326 = INT8_MIN;
	int32_t x327 = 10;
	static volatile uint8_t x328 = 10U;
	volatile int32_t t6 = 1;

	t6 = (((x325<=x326)+x327)>>x328);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x361 = 1U;
	int64_t x362 = INT64_MAX;
	static uint32_t x363 = 22638179U;
	uint8_t x364 = 29U;
	static uint32_t t7 = 659U;

	t7 = (((x361<=x362)+x363)>>x364);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint64_t x417 = 15593691LLU;
	static int32_t x418 = INT32_MIN;
	int8_t x419 = -1;
	int8_t x420 = 0;
	volatile int32_t t8 = 125;

	t8 = (((x417<=x418)+x419)>>x420);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x422 = 0;
	uint16_t x423 = 4561U;
	uint32_t x424 = 0U;
	int32_t t9 = -195;

	t9 = (((x421<=x422)+x423)>>x424);

	if (t9 != 4561) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x454 = -1LL;
	uint64_t x455 = 231LLU;
	int8_t x456 = 14;
	uint64_t t10 = 39LLU;

	t10 = (((x453<=x454)+x455)>>x456);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x545 = -1;
	static int8_t x548 = 3;
	static int32_t t11 = 662466465;

	t11 = (((x545<=x546)+x547)>>x548);

	if (t11 != 16) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x557 = 9997;
	uint32_t x558 = 27U;
	uint8_t x559 = 1U;
	uint8_t x560 = 0U;
	volatile int32_t t12 = 41;

	t12 = (((x557<=x558)+x559)>>x560);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x573 = -1;
	uint64_t x574 = 12LLU;
	int64_t x575 = INT64_MAX;
	int8_t x576 = 2;

	t13 = (((x573<=x574)+x575)>>x576);

	if (t13 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x669 = UINT64_MAX;
	uint32_t x670 = 83U;
	int32_t x671 = 3926642;
	uint8_t x672 = 1U;
	int32_t t14 = -19240;

	t14 = (((x669<=x670)+x671)>>x672);

	if (t14 != 1963321) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x697 = UINT16_MAX;
	uint32_t x699 = UINT32_MAX;
	int8_t x700 = 1;
	volatile uint32_t t15 = 301095U;

	t15 = (((x697<=x698)+x699)>>x700);

	if (t15 != 2147483647U) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x785 = 556;
	int32_t x786 = -1;
	static int16_t x787 = 8;
	volatile int16_t x788 = 0;
	int32_t t16 = 7382;

	t16 = (((x785<=x786)+x787)>>x788);

	if (t16 != 8) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x865 = 0U;
	volatile int8_t x866 = INT8_MIN;
	uint8_t x867 = 12U;
	uint32_t x868 = 0U;

	t17 = (((x865<=x866)+x867)>>x868);

	if (t17 != 12) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x990 = UINT32_MAX;
	uint8_t x991 = UINT8_MAX;
	uint8_t x992 = 1U;
	volatile int32_t t18 = -3214;

	t18 = (((x989<=x990)+x991)>>x992);

	if (t18 != 128) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x1057 = 1;
	uint32_t x1058 = UINT32_MAX;
	volatile uint8_t x1059 = 14U;
	static int32_t t19 = 5875672;

	t19 = (((x1057<=x1058)+x1059)>>x1060);

	if (t19 != 7) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x1093 = INT32_MIN;
	static uint16_t x1094 = UINT16_MAX;
	volatile uint8_t x1095 = 4U;
	uint8_t x1096 = 11U;
	volatile int32_t t20 = -56566718;

	t20 = (((x1093<=x1094)+x1095)>>x1096);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int64_t x1189 = -16638996231085135LL;
	int32_t x1190 = INT32_MIN;
	uint16_t x1191 = 2U;
	uint8_t x1192 = 4U;
	static volatile int32_t t21 = 0;

	t21 = (((x1189<=x1190)+x1191)>>x1192);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1209 = -1;
	int64_t x1210 = INT64_MIN;
	int16_t x1211 = 2483;
	int16_t x1212 = 0;
	volatile int32_t t22 = 253989;

	t22 = (((x1209<=x1210)+x1211)>>x1212);

	if (t22 != 2483) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1217 = 400U;
	int8_t x1219 = INT8_MAX;
	uint16_t x1220 = 8U;
	static int32_t t23 = -11;

	t23 = (((x1217<=x1218)+x1219)>>x1220);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1225 = -1;
	uint16_t x1226 = 63U;
	uint8_t x1227 = 79U;
	volatile uint16_t x1228 = 4U;
	static int32_t t24 = -2395506;

	t24 = (((x1225<=x1226)+x1227)>>x1228);

	if (t24 != 5) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1242 = INT16_MAX;
	volatile uint16_t x1243 = UINT16_MAX;
	volatile uint8_t x1244 = 6U;
	volatile int32_t t25 = 509;

	t25 = (((x1241<=x1242)+x1243)>>x1244);

	if (t25 != 1024) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1297 = INT64_MAX;
	volatile int32_t x1298 = -41;
	uint8_t x1299 = UINT8_MAX;
	uint32_t x1300 = 0U;
	static volatile int32_t t26 = 28998;

	t26 = (((x1297<=x1298)+x1299)>>x1300);

	if (t26 != 255) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1457 = INT8_MIN;
	int8_t x1460 = 1;

	t27 = (((x1457<=x1458)+x1459)>>x1460);

	if (t27 != 114851237851971737LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x1521 = 1U;
	int64_t x1522 = -1LL;
	uint64_t x1523 = 1352190098LLU;
	uint8_t x1524 = 2U;

	t28 = (((x1521<=x1522)+x1523)>>x1524);

	if (t28 != 338047524LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1533 = 11759475920981732LLU;
	uint32_t x1534 = 7836191U;
	uint8_t x1536 = 7U;
	volatile uint32_t t29 = 758008586U;

	t29 = (((x1533<=x1534)+x1535)>>x1536);

	if (t29 != 33554431U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x1593 = -5;
	int64_t x1595 = -1LL;
	uint16_t x1596 = 16U;
	volatile int64_t t30 = -1025284462859LL;

	t30 = (((x1593<=x1594)+x1595)>>x1596);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1813 = INT8_MIN;
	int64_t x1814 = INT64_MIN;
	static volatile uint8_t x1816 = 0U;

	t31 = (((x1813<=x1814)+x1815)>>x1816);

	if (t31 != 449LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1849 = 93410677636LLU;
	volatile uint64_t x1850 = 7962768360243LLU;
	int8_t x1852 = 22;

	t32 = (((x1849<=x1850)+x1851)>>x1852);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x1945 = -1LL;
	static uint8_t x1947 = 106U;
	uint32_t x1948 = 0U;

	t33 = (((x1945<=x1946)+x1947)>>x1948);

	if (t33 != 107) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x1961 = UINT64_MAX;
	int64_t x1963 = 4LL;
	uint8_t x1964 = 1U;
	static int64_t t34 = 635089LL;

	t34 = (((x1961<=x1962)+x1963)>>x1964);

	if (t34 != 2LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x1965 = INT64_MAX;
	uint32_t x1966 = UINT32_MAX;
	int64_t x1967 = INT64_MAX;
	uint8_t x1968 = 42U;

	t35 = (((x1965<=x1966)+x1967)>>x1968);

	if (t35 != 2097151LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x1981 = 172LLU;
	int64_t x1982 = INT64_MIN;
	uint16_t x1983 = 23U;
	volatile uint16_t x1984 = 5U;

	t36 = (((x1981<=x1982)+x1983)>>x1984);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1989 = -1LL;
	uint8_t x1991 = UINT8_MAX;
	int8_t x1992 = 1;

	t37 = (((x1989<=x1990)+x1991)>>x1992);

	if (t37 != 128) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x2009 = -59;
	uint8_t x2012 = 3U;
	volatile int32_t t38 = 756;

	t38 = (((x2009<=x2010)+x2011)>>x2012);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x2117 = -1LL;
	int16_t x2118 = 0;
	uint8_t x2119 = 64U;
	volatile int8_t x2120 = 2;
	int32_t t39 = -3766718;

	t39 = (((x2117<=x2118)+x2119)>>x2120);

	if (t39 != 16) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x2162 = 13655U;
	volatile uint64_t x2163 = 860583190497899LLU;
	static uint64_t t40 = 170128516343331205LLU;

	t40 = (((x2161<=x2162)+x2163)>>x2164);

	if (t40 != 215145797624475LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x2194 = UINT8_MAX;
	volatile uint32_t x2195 = UINT32_MAX;
	uint8_t x2196 = 2U;
	uint32_t t41 = 47264U;

	t41 = (((x2193<=x2194)+x2195)>>x2196);

	if (t41 != 1073741823U) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint8_t x2235 = 3U;
	int8_t x2236 = 29;
	volatile int32_t t42 = -5;

	t42 = (((x2233<=x2234)+x2235)>>x2236);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2249 = -4971;
	uint8_t x2250 = UINT8_MAX;
	static uint16_t x2251 = 48U;
	volatile int8_t x2252 = 3;
	int32_t t43 = 371805486;

	t43 = (((x2249<=x2250)+x2251)>>x2252);

	if (t43 != 6) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x2365 = INT8_MAX;
	uint32_t x2366 = UINT32_MAX;
	static int16_t x2367 = 13;
	uint8_t x2368 = 26U;
	int32_t t44 = 118;

	t44 = (((x2365<=x2366)+x2367)>>x2368);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x2469 = INT16_MIN;
	volatile uint8_t x2470 = 0U;
	static volatile int16_t x2471 = 6;
	uint8_t x2472 = 2U;
	volatile int32_t t45 = 12113203;

	t45 = (((x2469<=x2470)+x2471)>>x2472);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2521 = INT8_MIN;
	int16_t x2522 = -521;
	int64_t x2523 = 79609685LL;
	int8_t x2524 = 0;
	volatile int64_t t46 = -5727098LL;

	t46 = (((x2521<=x2522)+x2523)>>x2524);

	if (t46 != 79609685LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x2549 = UINT64_MAX;
	static uint8_t x2550 = 14U;
	volatile int8_t x2551 = INT8_MAX;
	uint64_t x2552 = 2LLU;
	static int32_t t47 = -115160;

	t47 = (((x2549<=x2550)+x2551)>>x2552);

	if (t47 != 31) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x2587 = INT64_MAX;
	static int8_t x2588 = 0;
	volatile int64_t t48 = INT64_MAX;

	t48 = (((x2585<=x2586)+x2587)>>x2588);

	if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x2641 = 3805014U;
	volatile int32_t x2642 = 106;
	uint64_t x2643 = 1380955286LLU;
	volatile uint16_t x2644 = 3U;
	volatile uint64_t t49 = 13942LLU;

	t49 = (((x2641<=x2642)+x2643)>>x2644);

	if (t49 != 172619410LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x2725 = -190;
	uint8_t x2726 = 2U;
	uint32_t x2727 = UINT32_MAX;
	uint32_t t50 = 5U;

	t50 = (((x2725<=x2726)+x2727)>>x2728);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x2801 = 1U;
	uint32_t x2803 = UINT32_MAX;
	int8_t x2804 = 5;
	volatile uint32_t t51 = 3558U;

	t51 = (((x2801<=x2802)+x2803)>>x2804);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x2837 = -63;
	uint16_t x2838 = UINT16_MAX;
	volatile uint16_t x2840 = 0U;
	static int32_t t52 = 405099208;

	t52 = (((x2837<=x2838)+x2839)>>x2840);

	if (t52 != 128) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x2929 = -1;
	int16_t x2930 = -1714;
	static volatile uint64_t x2931 = UINT64_MAX;
	static volatile uint64_t t53 = UINT64_MAX;

	t53 = (((x2929<=x2930)+x2931)>>x2932);

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x2953 = INT64_MIN;
	int16_t x2954 = -1;
	uint64_t x2955 = 51900414LLU;
	uint8_t x2956 = 8U;
	uint64_t t54 = 1040796198722LLU;

	t54 = (((x2953<=x2954)+x2955)>>x2956);

	if (t54 != 202735LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x3065 = 1;
	int32_t x3066 = -1;
	static uint32_t x3067 = UINT32_MAX;
	int8_t x3068 = 0;
	uint32_t t55 = UINT32_MAX;

	t55 = (((x3065<=x3066)+x3067)>>x3068);

	if (t55 != UINT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x3105 = 66U;
	static int8_t x3106 = 3;
	int32_t x3107 = INT32_MAX;
	int8_t x3108 = 26;
	volatile int32_t t56 = 230;

	t56 = (((x3105<=x3106)+x3107)>>x3108);

	if (t56 != 31) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x3109 = -119165;
	volatile uint16_t x3110 = 467U;
	int16_t x3111 = -1;
	static int32_t t57 = 562843712;

	t57 = (((x3109<=x3110)+x3111)>>x3112);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint64_t x3138 = UINT64_MAX;
	int64_t x3139 = -1LL;
	uint32_t x3140 = 0U;
	volatile int64_t t58 = 4374720756436919LL;

	t58 = (((x3137<=x3138)+x3139)>>x3140);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x3141 = 6U;
	int64_t x3142 = INT64_MAX;
	static uint8_t x3143 = UINT8_MAX;
	int16_t x3144 = 18;
	volatile int32_t t59 = -139203738;

	t59 = (((x3141<=x3142)+x3143)>>x3144);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x3177 = UINT64_MAX;
	int8_t x3178 = INT8_MIN;
	int64_t x3179 = 305932973315LL;
	int64_t x3180 = 1LL;

	t60 = (((x3177<=x3178)+x3179)>>x3180);

	if (t60 != 152966486657LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x3194 = -69096170;
	uint8_t x3195 = UINT8_MAX;

	t61 = (((x3193<=x3194)+x3195)>>x3196);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x3205 = 23805U;
	uint8_t x3206 = 2U;
	uint8_t x3207 = UINT8_MAX;

	t62 = (((x3205<=x3206)+x3207)>>x3208);

	if (t62 != 3) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x3229 = -1LL;
	uint8_t x3230 = 13U;
	uint16_t x3232 = 2U;
	volatile int32_t t63 = 344;

	t63 = (((x3229<=x3230)+x3231)>>x3232);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x3265 = 10U;
	static int64_t x3266 = 4253774LL;
	uint64_t t64 = 13062914781LLU;

	t64 = (((x3265<=x3266)+x3267)>>x3268);

	if (t64 != 773533036494759LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x3309 = -510;
	uint32_t x3310 = 276U;
	volatile uint32_t x3312 = 28U;
	uint32_t t65 = 202003911U;

	t65 = (((x3309<=x3310)+x3311)>>x3312);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x3325 = -1;
	uint8_t x3326 = 3U;
	int16_t x3327 = -1;

	t66 = (((x3325<=x3326)+x3327)>>x3328);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x3353 = 5289U;
	uint32_t x3354 = 3U;
	volatile uint32_t x3355 = 100U;
	volatile uint32_t t67 = 78U;

	t67 = (((x3353<=x3354)+x3355)>>x3356);

	if (t67 != 50U) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x3369 = 4089U;
	int16_t x3370 = 0;
	static int8_t x3372 = 1;
	volatile int32_t t68 = -4521630;

	t68 = (((x3369<=x3370)+x3371)>>x3372);

	if (t68 != 1098) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x3549 = -1;
	static volatile uint16_t x3550 = 205U;
	static int32_t x3551 = -1;
	uint8_t x3552 = 0U;
	int32_t t69 = 358042086;

	t69 = (((x3549<=x3550)+x3551)>>x3552);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x3677 = INT32_MIN;
	int64_t x3678 = INT64_MIN;
	uint16_t x3679 = 18447U;
	uint16_t x3680 = 0U;
	volatile int32_t t70 = 3;

	t70 = (((x3677<=x3678)+x3679)>>x3680);

	if (t70 != 18447) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x3716 = 1;

	t71 = (((x3713<=x3714)+x3715)>>x3716);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x3742 = 14375;
	uint32_t x3743 = 41005363U;
	uint16_t x3744 = 8U;

	t72 = (((x3741<=x3742)+x3743)>>x3744);

	if (t72 != 160177U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x3753 = -1;
	int32_t x3754 = INT32_MIN;
	uint16_t x3755 = 18U;
	volatile uint32_t x3756 = 0U;
	int32_t t73 = -483976221;

	t73 = (((x3753<=x3754)+x3755)>>x3756);

	if (t73 != 18) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x3781 = 18;
	int8_t x3782 = -25;
	int32_t x3783 = 54923474;
	static volatile int32_t t74 = 98678;

	t74 = (((x3781<=x3782)+x3783)>>x3784);

	if (t74 != 54923474) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x3795 = -1;
	uint8_t x3796 = 22U;

	t75 = (((x3793<=x3794)+x3795)>>x3796);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x3801 = 119LLU;
	volatile int32_t x3802 = 49;
	static uint64_t x3803 = 474757LLU;
	int8_t x3804 = 6;
	volatile uint64_t t76 = 2235160LLU;

	t76 = (((x3801<=x3802)+x3803)>>x3804);

	if (t76 != 7418LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x3821 = 5U;
	int64_t x3822 = 66613692208092LL;
	uint16_t x3823 = 183U;
	int16_t x3824 = 25;
	volatile int32_t t77 = 166808;

	t77 = (((x3821<=x3822)+x3823)>>x3824);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x3897 = -3736022LL;
	uint32_t x3898 = 9470U;
	int8_t x3900 = 25;
	volatile int32_t t78 = 3;

	t78 = (((x3897<=x3898)+x3899)>>x3900);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x3901 = INT8_MAX;
	volatile uint8_t x3903 = 10U;
	volatile uint64_t x3904 = 0LLU;
	volatile int32_t t79 = 961;

	t79 = (((x3901<=x3902)+x3903)>>x3904);

	if (t79 != 10) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x3917 = 4LLU;
	volatile int16_t x3918 = 22;
	int16_t x3919 = -1;
	uint8_t x3920 = 2U;

	t80 = (((x3917<=x3918)+x3919)>>x3920);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x3953 = INT32_MIN;
	uint64_t x3954 = 3735486428LLU;
	uint16_t x3955 = UINT16_MAX;
	uint8_t x3956 = 0U;

	t81 = (((x3953<=x3954)+x3955)>>x3956);

	if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x3993 = 0U;
	int8_t x3994 = 0;
	int8_t x3995 = 6;
	int32_t t82 = 45858;

	t82 = (((x3993<=x3994)+x3995)>>x3996);

	if (t82 != 3) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x4089 = INT16_MIN;
	int8_t x4090 = 5;
	uint64_t x4091 = UINT64_MAX;
	int8_t x4092 = 6;
	static uint64_t t83 = 495LLU;

	t83 = (((x4089<=x4090)+x4091)>>x4092);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x4097 = 4U;
	int64_t x4098 = INT64_MIN;
	uint8_t x4099 = 124U;
	uint64_t x4100 = 14LLU;
	static int32_t t84 = -99;

	t84 = (((x4097<=x4098)+x4099)>>x4100);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x4109 = 0U;
	uint8_t x4110 = UINT8_MAX;
	int16_t x4111 = 1296;
	uint16_t x4112 = 0U;
	volatile int32_t t85 = 3193052;

	t85 = (((x4109<=x4110)+x4111)>>x4112);

	if (t85 != 1297) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x4147 = INT8_MAX;
	volatile uint16_t x4148 = 0U;
	static int32_t t86 = 3600550;

	t86 = (((x4145<=x4146)+x4147)>>x4148);

	if (t86 != 128) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x4165 = 5081791LLU;
	static volatile int8_t x4166 = -1;
	uint8_t x4168 = 3U;

	t87 = (((x4165<=x4166)+x4167)>>x4168);

	if (t87 != 32) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x4206 = 3U;
	int16_t x4207 = 2707;
	static uint8_t x4208 = 10U;
	volatile int32_t t88 = -29551;

	t88 = (((x4205<=x4206)+x4207)>>x4208);

	if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x4242 = INT16_MIN;
	uint64_t x4243 = 33LLU;
	int8_t x4244 = 5;
	volatile uint64_t t89 = 1923126839LLU;

	t89 = (((x4241<=x4242)+x4243)>>x4244);

	if (t89 != 1LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x4277 = 9U;
	uint8_t x4278 = UINT8_MAX;
	uint32_t x4279 = 6931413U;
	volatile uint32_t t90 = 30U;

	t90 = (((x4277<=x4278)+x4279)>>x4280);

	if (t90 != 1732853U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x4333 = INT8_MAX;
	uint64_t x4334 = UINT64_MAX;
	uint32_t x4335 = 30U;
	int16_t x4336 = 29;

	t91 = (((x4333<=x4334)+x4335)>>x4336);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x4353 = 21246085LLU;
	int64_t x4354 = INT64_MIN;
	uint8_t x4355 = UINT8_MAX;
	volatile uint64_t x4356 = 1LLU;
	static int32_t t92 = -24610;

	t92 = (((x4353<=x4354)+x4355)>>x4356);

	if (t92 != 128) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x4457 = INT16_MIN;
	int64_t x4458 = INT64_MAX;
	int16_t x4459 = INT16_MAX;

	t93 = (((x4457<=x4458)+x4459)>>x4460);

	if (t93 != 4096) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x4530 = INT64_MAX;
	static uint32_t x4531 = 30437379U;
	int8_t x4532 = 1;
	static volatile uint32_t t94 = 5311886U;

	t94 = (((x4529<=x4530)+x4531)>>x4532);

	if (t94 != 15218690U) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x4605 = 3642U;
	volatile int16_t x4606 = INT16_MIN;
	static uint8_t x4607 = 0U;
	int32_t t95 = -13966;

	t95 = (((x4605<=x4606)+x4607)>>x4608);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x4622 = INT32_MIN;
	int8_t x4623 = INT8_MAX;
	uint8_t x4624 = 25U;
	int32_t t96 = 76206649;

	t96 = (((x4621<=x4622)+x4623)>>x4624);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x4665 = 58;
	volatile int64_t x4666 = 1680445638783028706LL;
	volatile uint32_t x4667 = 17912660U;
	uint8_t x4668 = 2U;
	volatile uint32_t t97 = 425U;

	t97 = (((x4665<=x4666)+x4667)>>x4668);

	if (t97 != 4478165U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x4701 = -1;
	volatile int16_t x4704 = 6;
	volatile uint64_t t98 = 11213002554873LLU;

	t98 = (((x4701<=x4702)+x4703)>>x4704);

	if (t98 != 1418935LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x4773 = -1;
	uint16_t x4775 = UINT16_MAX;
	int16_t x4776 = 0;
	volatile int32_t t99 = -1;

	t99 = (((x4773<=x4774)+x4775)>>x4776);

	if (t99 != 65536) { NG(); } else { ; }
	
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

