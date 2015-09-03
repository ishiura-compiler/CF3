#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x6 = INT16_MIN;
static uint8_t x8 = 5U;
int32_t x83 = INT32_MIN;
volatile int16_t x116 = 1;
volatile uint64_t t4 = 59038LLU;
uint16_t x290 = 837U;
static int32_t x291 = -12670476;
uint8_t x292 = 12U;
int32_t t7 = 0;
static volatile uint32_t x363 = 851703042U;
uint64_t x373 = UINT64_MAX;
static int32_t x473 = INT32_MAX;
uint8_t x481 = UINT8_MAX;
uint64_t t15 = 1126568197504037924LLU;
int8_t x560 = 0;
int32_t t16 = -34565;
int64_t x582 = 2035634479931LL;
volatile int16_t x583 = 1;
static int64_t t17 = -12880080307060454LL;
uint16_t x601 = 24256U;
int8_t x602 = -1;
int64_t x603 = 3237096349LL;
uint32_t x794 = 1493231U;
uint8_t x796 = 2U;
int64_t x866 = INT64_MIN;
int8_t x956 = 7;
uint8_t x984 = 0U;
int32_t x1111 = INT32_MIN;
volatile int16_t x1221 = -1;
uint64_t x1225 = 4920351LLU;
uint64_t x1227 = 1023325379686LLU;
int32_t x1230 = INT32_MIN;
static uint64_t x1231 = 4256449LLU;
uint8_t x1232 = 53U;
uint8_t x1348 = 0U;
int8_t x1481 = -1;
volatile int16_t x1637 = 0;
int16_t x1645 = -5651;
volatile uint8_t x1648 = 3U;
static int16_t x1692 = 18;
int32_t t40 = -558;
int16_t x1861 = -1;
static volatile uint8_t x1863 = UINT8_MAX;
int16_t x1874 = -1;
uint16_t x1897 = 57U;
uint64_t x1898 = 21188778167360218LLU;
uint64_t t45 = 7723331906LLU;
uint16_t x2128 = 4U;
static int32_t t47 = -253;
uint8_t x2458 = 8U;
int8_t x2459 = -29;
static volatile int32_t x2597 = 1;
uint16_t x2598 = 66U;
volatile int32_t t52 = 5830463;
int64_t x2603 = -62LL;
static int8_t x2612 = 0;
uint32_t x2625 = 1U;
int8_t x2636 = 1;
uint16_t x2692 = 0U;
int64_t x2734 = 286859788975294LL;
int64_t t58 = -122984529560933933LL;
int8_t x2753 = INT8_MIN;
uint8_t x2756 = 7U;
volatile uint64_t x2965 = UINT64_MAX;
int32_t x2968 = 23;
int32_t x3058 = INT32_MAX;
static uint32_t x3181 = 8U;
static int16_t x3242 = INT16_MIN;
volatile int64_t t70 = -33464624481019LL;
static uint32_t x3279 = 43U;
uint32_t x3286 = UINT32_MAX;
uint16_t x3288 = 4U;
volatile int32_t x3342 = -879;
volatile uint8_t x3507 = UINT8_MAX;
static int8_t x3508 = 4;
int16_t x3711 = 1;
int8_t x3712 = 37;
int64_t x3714 = -1LL;
int32_t x3747 = 5946294;
int16_t x3837 = -1;
int64_t x3838 = 20LL;
int16_t x3840 = 46;
volatile uint16_t x3931 = 78U;
uint32_t x3933 = 42U;
uint16_t x3935 = UINT16_MAX;
uint32_t t84 = 1U;
int16_t x3942 = INT16_MIN;
uint32_t x3943 = 1346710731U;
uint8_t x4000 = 5U;
int8_t x4001 = -1;
uint32_t x4004 = 8U;
volatile uint64_t t88 = 2865980934135536313LLU;
volatile uint64_t t89 = 6205LLU;
volatile int16_t x4162 = INT16_MAX;
int8_t x4219 = INT8_MIN;
static int8_t x4329 = INT8_MIN;
int16_t x4403 = -11848;
static int8_t x4472 = 1;
static int16_t x4541 = INT16_MIN;
int8_t x4544 = 0;
volatile int64_t x4569 = 935357642495057LL;
int8_t x4570 = -1;
uint32_t x4572 = 46U;
volatile uint64_t t98 = 30842LLU;


void f0(void) {
	int16_t x5 = -1;
	uint8_t x7 = 12U;
	int32_t t0 = 14690086;

	t0 = (((x5*x6)/x7)>>x8);

	if (t0 != 85) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x81 = INT32_MIN;
	uint64_t x82 = UINT64_MAX;
	int8_t x84 = 20;
	uint64_t t1 = 230092444274LLU;

	t1 = (((x81*x82)/x83)>>x84);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x85 = 559083LL;
	uint8_t x86 = 17U;
	static volatile int64_t x87 = INT64_MAX;
	volatile int32_t x88 = 0;
	int64_t t2 = 5759846964LL;

	t2 = (((x85*x86)/x87)>>x88);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x101 = 9343097140LLU;
	int8_t x102 = -1;
	static int64_t x103 = INT64_MIN;
	uint8_t x104 = 3U;
	volatile uint64_t t3 = 85LLU;

	t3 = (((x101*x102)/x103)>>x104);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x113 = -1;
	uint16_t x114 = UINT16_MAX;
	volatile uint64_t x115 = 45613LLU;

	t4 = (((x113*x114)/x115)>>x116);

	if (t4 != 202209283249396LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x269 = UINT16_MAX;
	static uint16_t x270 = 292U;
	int8_t x271 = 11;
	uint8_t x272 = 19U;
	volatile int32_t t5 = -59821766;

	t5 = (((x269*x270)/x271)>>x272);

	if (t5 != 3) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x281 = -1;
	int16_t x282 = 1;
	static int8_t x283 = -1;
	uint8_t x284 = 1U;
	volatile int32_t t6 = -380979896;

	t6 = (((x281*x282)/x283)>>x284);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x289 = 294U;

	t7 = (((x289*x290)/x291)>>x292);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x361 = INT8_MIN;
	uint8_t x362 = UINT8_MAX;
	uint8_t x364 = 16U;
	volatile uint32_t t8 = 324764U;

	t8 = (((x361*x362)/x363)>>x364);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x374 = UINT16_MAX;
	int64_t x375 = -16960220975LL;
	static uint16_t x376 = 5U;
	static uint64_t t9 = 1243625LLU;

	t9 = (((x373*x374)/x375)>>x376);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x389 = UINT64_MAX;
	int32_t x390 = INT32_MIN;
	volatile int64_t x391 = INT64_MIN;
	volatile int16_t x392 = 3;
	uint64_t t10 = 22610663909702537LLU;

	t10 = (((x389*x390)/x391)>>x392);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x465 = UINT32_MAX;
	static int16_t x466 = -1;
	static int32_t x467 = -1;
	int8_t x468 = 0;
	volatile uint32_t t11 = 88066U;

	t11 = (((x465*x466)/x467)>>x468);

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x474 = 8LLU;
	static int16_t x475 = -1;
	uint16_t x476 = 3U;
	uint64_t t12 = 64LLU;

	t12 = (((x473*x474)/x475)>>x476);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x482 = 1U;
	uint64_t x483 = 7604401LLU;
	static int16_t x484 = 1;
	uint64_t t13 = 4829490999343LLU;

	t13 = (((x481*x482)/x483)>>x484);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x493 = 50277664087142743LLU;
	int32_t x494 = INT32_MIN;
	static int32_t x495 = 1;
	static volatile int16_t x496 = 0;
	uint64_t t14 = 25071412835659LLU;

	t14 = (((x493*x494)/x495)>>x496);

	if (t14 != 10230356825543278592LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x505 = -14918;
	uint64_t x506 = UINT64_MAX;
	volatile int64_t x507 = INT64_MIN;
	uint16_t x508 = 1U;

	t15 = (((x505*x506)/x507)>>x508);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x557 = 4U;
	int8_t x558 = -1;
	volatile int16_t x559 = INT16_MAX;

	t16 = (((x557*x558)/x559)>>x560);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x581 = 7U;
	uint8_t x584 = 3U;

	t17 = (((x581*x582)/x583)>>x584);

	if (t17 != 1781180169939LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x604 = 28U;
	volatile int64_t t18 = -60050756603LL;

	t18 = (((x601*x602)/x603)>>x604);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x669 = INT16_MIN;
	uint32_t x670 = 171U;
	int32_t x671 = INT32_MIN;
	uint16_t x672 = 0U;
	uint32_t t19 = 10567U;

	t19 = (((x669*x670)/x671)>>x672);

	if (t19 != 1U) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x793 = 2LLU;
	int64_t x795 = INT64_MIN;
	volatile uint64_t t20 = 5258LLU;

	t20 = (((x793*x794)/x795)>>x796);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x797 = INT16_MAX;
	int16_t x798 = -1;
	int8_t x799 = INT8_MIN;
	uint8_t x800 = 27U;
	volatile int32_t t21 = 117667851;

	t21 = (((x797*x798)/x799)>>x800);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x865 = UINT64_MAX;
	static int64_t x867 = INT64_MAX;
	static uint32_t x868 = 0U;
	uint64_t t22 = 32188562LLU;

	t22 = (((x865*x866)/x867)>>x868);

	if (t22 != 1LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x905 = 0;
	int8_t x906 = INT8_MIN;
	int16_t x907 = -1;
	int16_t x908 = 18;
	int32_t t23 = -8752;

	t23 = (((x905*x906)/x907)>>x908);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x953 = UINT16_MAX;
	static int16_t x954 = INT16_MAX;
	uint8_t x955 = UINT8_MAX;
	int32_t t24 = 4495;

	t24 = (((x953*x954)/x955)>>x956);

	if (t24 != 65789) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x981 = -1LL;
	uint8_t x982 = UINT8_MAX;
	volatile int16_t x983 = -1;
	volatile int64_t t25 = 7796731688514261LL;

	t25 = (((x981*x982)/x983)>>x984);

	if (t25 != 255LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x1061 = -11;
	static int8_t x1062 = INT8_MIN;
	int8_t x1063 = 59;
	int8_t x1064 = 1;
	volatile int32_t t26 = -1;

	t26 = (((x1061*x1062)/x1063)>>x1064);

	if (t26 != 11) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1097 = -1LL;
	static int32_t x1098 = 0;
	int32_t x1099 = INT32_MIN;
	uint32_t x1100 = 5U;
	int64_t t27 = -64899146645LL;

	t27 = (((x1097*x1098)/x1099)>>x1100);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1109 = -1;
	static uint8_t x1110 = 12U;
	uint8_t x1112 = 13U;
	static int32_t t28 = 1;

	t28 = (((x1109*x1110)/x1111)>>x1112);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x1149 = 41627573LLU;
	static volatile int64_t x1150 = INT64_MAX;
	int64_t x1151 = -2095543LL;
	uint8_t x1152 = 24U;
	static volatile uint64_t t29 = 72763LLU;

	t29 = (((x1149*x1150)/x1151)>>x1152);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1222 = INT8_MIN;
	volatile uint64_t x1223 = 64LLU;
	volatile uint32_t x1224 = 18U;
	uint64_t t30 = 133874651097233517LLU;

	t30 = (((x1221*x1222)/x1223)>>x1224);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x1226 = -37;
	uint16_t x1228 = 0U;
	static uint64_t t31 = 2549118439LLU;

	t31 = (((x1225*x1226)/x1227)>>x1228);

	if (t31 != 18026274LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1229 = UINT32_MAX;
	static uint64_t t32 = 1002721679383LLU;

	t32 = (((x1229*x1230)/x1231)>>x1232);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x1345 = 176164U;
	int8_t x1346 = -6;
	int64_t x1347 = 85938LL;
	static volatile int64_t t33 = -35LL;

	t33 = (((x1345*x1346)/x1347)>>x1348);

	if (t33 != 49965LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x1433 = 0U;
	uint32_t x1434 = 6U;
	volatile int32_t x1435 = 213850;
	uint8_t x1436 = 30U;
	uint32_t t34 = 11128U;

	t34 = (((x1433*x1434)/x1435)>>x1436);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x1482 = -112016320307LL;
	uint8_t x1483 = 1U;
	uint8_t x1484 = 15U;
	volatile int64_t t35 = 206471LL;

	t35 = (((x1481*x1482)/x1483)>>x1484);

	if (t35 != 3418466LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1545 = -1LL;
	int16_t x1546 = 287;
	int32_t x1547 = INT32_MIN;
	static uint32_t x1548 = 0U;
	int64_t t36 = 231139530908LL;

	t36 = (((x1545*x1546)/x1547)>>x1548);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x1638 = INT16_MIN;
	volatile int32_t x1639 = -21;
	uint16_t x1640 = 0U;
	int32_t t37 = 2429655;

	t37 = (((x1637*x1638)/x1639)>>x1640);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1646 = 11531LL;
	static uint64_t x1647 = 108559401771159920LLU;
	uint64_t t38 = 684065993967LLU;

	t38 = (((x1645*x1646)/x1647)>>x1648);

	if (t38 != 21LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1689 = -1LL;
	int32_t x1690 = 22;
	static uint64_t x1691 = 150128211288LLU;
	uint64_t t39 = 390852713LLU;

	t39 = (((x1689*x1690)/x1691)>>x1692);

	if (t39 != 468LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x1709 = 1U;
	int8_t x1710 = -2;
	int32_t x1711 = INT32_MAX;
	uint32_t x1712 = 6U;

	t40 = (((x1709*x1710)/x1711)>>x1712);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x1833 = INT8_MIN;
	static volatile int8_t x1834 = INT8_MAX;
	static int16_t x1835 = INT16_MAX;
	uint64_t x1836 = 1LLU;
	volatile int32_t t41 = 408624;

	t41 = (((x1833*x1834)/x1835)>>x1836);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1862 = -1;
	uint32_t x1864 = 0U;
	int32_t t42 = -5827679;

	t42 = (((x1861*x1862)/x1863)>>x1864);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x1873 = 1U;
	int8_t x1875 = INT8_MIN;
	uint16_t x1876 = 1U;
	int32_t t43 = 25;

	t43 = (((x1873*x1874)/x1875)>>x1876);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x1899 = -3;
	static uint16_t x1900 = 57U;
	static volatile uint64_t t44 = 1006972405758LLU;

	t44 = (((x1897*x1898)/x1899)>>x1900);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x2005 = INT32_MIN;
	uint64_t x2006 = 55LLU;
	uint8_t x2007 = 40U;
	uint8_t x2008 = 3U;

	t45 = (((x2005*x2006)/x2007)>>x2008);

	if (t45 != 57646074861243596LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2117 = INT8_MAX;
	int16_t x2118 = -622;
	int32_t x2119 = -1;
	int8_t x2120 = 1;
	int32_t t46 = 93301199;

	t46 = (((x2117*x2118)/x2119)>>x2120);

	if (t46 != 39497) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x2125 = INT16_MIN;
	int8_t x2126 = INT8_MIN;
	int32_t x2127 = INT32_MAX;

	t47 = (((x2125*x2126)/x2127)>>x2128);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x2157 = -1;
	uint8_t x2158 = 0U;
	int64_t x2159 = INT64_MAX;
	int16_t x2160 = 6;
	int64_t t48 = -3811LL;

	t48 = (((x2157*x2158)/x2159)>>x2160);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x2177 = -1;
	int64_t x2178 = -1LL;
	uint64_t x2179 = 20LLU;
	uint16_t x2180 = 33U;
	volatile uint64_t t49 = 0LLU;

	t49 = (((x2177*x2178)/x2179)>>x2180);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x2365 = 1U;
	static volatile int8_t x2366 = -6;
	uint8_t x2367 = UINT8_MAX;
	uint16_t x2368 = 13U;
	int32_t t50 = 17;

	t50 = (((x2365*x2366)/x2367)>>x2368);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x2457 = INT16_MIN;
	uint16_t x2460 = 0U;
	volatile int32_t t51 = 3251955;

	t51 = (((x2457*x2458)/x2459)>>x2460);

	if (t51 != 9039) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x2599 = 407;
	uint8_t x2600 = 18U;

	t52 = (((x2597*x2598)/x2599)>>x2600);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x2601 = UINT64_MAX;
	int64_t x2602 = 130115373561302LL;
	static volatile uint8_t x2604 = 11U;
	uint64_t t53 = 25LLU;

	t53 = (((x2601*x2602)/x2603)>>x2604);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x2609 = INT8_MIN;
	int16_t x2610 = INT16_MAX;
	int32_t x2611 = -4098698;
	volatile int32_t t54 = -2;

	t54 = (((x2609*x2610)/x2611)>>x2612);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x2626 = 28164314LLU;
	int32_t x2627 = INT32_MAX;
	int8_t x2628 = 7;
	static volatile uint64_t t55 = 1037LLU;

	t55 = (((x2625*x2626)/x2627)>>x2628);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x2633 = 58U;
	int8_t x2634 = -1;
	volatile uint64_t x2635 = 3316174393707LLU;
	volatile uint64_t t56 = 23199056335LLU;

	t56 = (((x2633*x2634)/x2635)>>x2636);

	if (t56 != 2781329LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x2689 = 1U;
	int8_t x2690 = 41;
	uint64_t x2691 = 2319478467510LLU;
	static uint64_t t57 = 122881LLU;

	t57 = (((x2689*x2690)/x2691)>>x2692);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x2733 = 2U;
	uint32_t x2735 = UINT32_MAX;
	int8_t x2736 = 24;

	t58 = (((x2733*x2734)/x2735)>>x2736);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x2754 = 61574625LLU;
	uint8_t x2755 = 52U;
	volatile uint64_t t59 = 737946254070194743LLU;

	t59 = (((x2753*x2754)/x2755)>>x2756);

	if (t59 != 2771445923351562LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x2769 = UINT32_MAX;
	int8_t x2770 = INT8_MIN;
	int8_t x2771 = INT8_MIN;
	uint8_t x2772 = 1U;
	volatile uint32_t t60 = 35U;

	t60 = (((x2769*x2770)/x2771)>>x2772);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x2773 = 3906;
	static volatile uint64_t x2774 = 963136LLU;
	int64_t x2775 = -1LL;
	static int8_t x2776 = 28;
	uint64_t t61 = 16953009LLU;

	t61 = (((x2773*x2774)/x2775)>>x2776);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x2905 = UINT8_MAX;
	volatile uint8_t x2906 = 12U;
	static int64_t x2907 = INT64_MIN;
	uint8_t x2908 = 3U;
	int64_t t62 = 552310215213181600LL;

	t62 = (((x2905*x2906)/x2907)>>x2908);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x2966 = INT64_MIN;
	int64_t x2967 = INT64_MIN;
	volatile uint64_t t63 = 0LLU;

	t63 = (((x2965*x2966)/x2967)>>x2968);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x3025 = 12U;
	int16_t x3026 = 1;
	int32_t x3027 = 4791;
	volatile uint16_t x3028 = 0U;
	int32_t t64 = -4;

	t64 = (((x3025*x3026)/x3027)>>x3028);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint32_t x3057 = 60U;
	int32_t x3059 = -72;
	int16_t x3060 = 6;
	uint32_t t65 = 328551168U;

	t65 = (((x3057*x3058)/x3059)>>x3060);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x3081 = INT8_MAX;
	volatile int8_t x3082 = 3;
	uint8_t x3083 = UINT8_MAX;
	uint32_t x3084 = 2U;
	int32_t t66 = 4;

	t66 = (((x3081*x3082)/x3083)>>x3084);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x3145 = INT32_MIN;
	static uint32_t x3146 = 0U;
	uint16_t x3147 = 2652U;
	int16_t x3148 = 8;
	uint32_t t67 = 37769U;

	t67 = (((x3145*x3146)/x3147)>>x3148);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x3182 = 1U;
	int8_t x3183 = -1;
	uint8_t x3184 = 18U;
	uint32_t t68 = 12645226U;

	t68 = (((x3181*x3182)/x3183)>>x3184);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x3241 = UINT8_MAX;
	int32_t x3243 = -61603965;
	int8_t x3244 = 31;
	volatile int32_t t69 = 1648;

	t69 = (((x3241*x3242)/x3243)>>x3244);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x3249 = INT16_MAX;
	volatile int8_t x3250 = INT8_MIN;
	static int64_t x3251 = 4988068LL;
	volatile uint8_t x3252 = 61U;

	t70 = (((x3249*x3250)/x3251)>>x3252);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x3277 = 426LLU;
	int32_t x3278 = -1;
	static volatile int8_t x3280 = 2;
	volatile uint64_t t71 = 1801648103102295077LLU;

	t71 = (((x3277*x3278)/x3279)>>x3280);

	if (t71 != 107248512056450879LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x3285 = UINT16_MAX;
	int16_t x3287 = 15832;
	uint32_t t72 = 70273335U;

	t72 = (((x3285*x3286)/x3287)>>x3288);

	if (t72 != 16954U) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x3341 = 11U;
	static uint16_t x3343 = 1U;
	volatile uint8_t x3344 = 29U;
	static uint32_t t73 = 3U;

	t73 = (((x3341*x3342)/x3343)>>x3344);

	if (t73 != 7U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x3505 = UINT32_MAX;
	volatile uint8_t x3506 = 1U;
	static volatile uint32_t t74 = 1032386U;

	t74 = (((x3505*x3506)/x3507)>>x3508);

	if (t74 != 1052688U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x3557 = -1;
	int16_t x3558 = -1;
	int8_t x3559 = -5;
	int16_t x3560 = 4;
	volatile int32_t t75 = -1017;

	t75 = (((x3557*x3558)/x3559)>>x3560);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x3565 = -1LL;
	volatile uint64_t x3566 = UINT64_MAX;
	static int32_t x3567 = 14809388;
	uint8_t x3568 = 3U;
	static volatile uint64_t t76 = 304047275358LLU;

	t76 = (((x3565*x3566)/x3567)>>x3568);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x3709 = -1LL;
	static int32_t x3710 = -35;
	int64_t t77 = 28688693121133176LL;

	t77 = (((x3709*x3710)/x3711)>>x3712);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x3713 = 2;
	static int16_t x3715 = -1;
	uint8_t x3716 = 2U;
	volatile int64_t t78 = 2596726382LL;

	t78 = (((x3713*x3714)/x3715)>>x3716);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x3745 = 4429041440935597LLU;
	uint16_t x3746 = 2U;
	uint8_t x3748 = 23U;
	static uint64_t t79 = 31037802070LLU;

	t79 = (((x3745*x3746)/x3747)>>x3748);

	if (t79 != 177LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x3839 = INT16_MAX;
	static volatile int64_t t80 = 7820LL;

	t80 = (((x3837*x3838)/x3839)>>x3840);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x3905 = UINT32_MAX;
	static int8_t x3906 = -3;
	uint64_t x3907 = UINT64_MAX;
	uint8_t x3908 = 6U;
	volatile uint64_t t81 = 3426618404574357153LLU;

	t81 = (((x3905*x3906)/x3907)>>x3908);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int16_t x3917 = 0;
	int16_t x3918 = INT16_MIN;
	uint64_t x3919 = 17589189381LLU;
	static volatile uint8_t x3920 = 9U;
	uint64_t t82 = 439LLU;

	t82 = (((x3917*x3918)/x3919)>>x3920);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x3929 = -63103749682LL;
	volatile int16_t x3930 = -1;
	uint8_t x3932 = 41U;
	int64_t t83 = -3660665452021797384LL;

	t83 = (((x3929*x3930)/x3931)>>x3932);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x3934 = UINT32_MAX;
	int16_t x3936 = 10;

	t84 = (((x3933*x3934)/x3935)>>x3936);

	if (t84 != 64U) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x3941 = 100U;
	volatile uint8_t x3944 = 0U;
	volatile uint32_t t85 = 106181023U;

	t85 = (((x3941*x3942)/x3943)>>x3944);

	if (t85 != 3U) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x3989 = -1;
	int16_t x3990 = INT16_MAX;
	int32_t x3991 = INT32_MIN;
	uint32_t x3992 = 4U;
	volatile int32_t t86 = 2941;

	t86 = (((x3989*x3990)/x3991)>>x3992);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x3997 = 2U;
	static uint8_t x3998 = UINT8_MAX;
	volatile int32_t x3999 = INT32_MIN;
	static int32_t t87 = -216264367;

	t87 = (((x3997*x3998)/x3999)>>x4000);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x4002 = 2556640882939447LLU;
	static int64_t x4003 = -1LL;

	t88 = (((x4001*x4002)/x4003)>>x4004);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x4145 = UINT64_MAX;
	static uint32_t x4146 = 18390U;
	static int64_t x4147 = INT64_MIN;
	int16_t x4148 = 4;

	t89 = (((x4145*x4146)/x4147)>>x4148);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x4161 = 3;
	static int8_t x4163 = INT8_MAX;
	int8_t x4164 = 0;
	int32_t t90 = -693174196;

	t90 = (((x4161*x4162)/x4163)>>x4164);

	if (t90 != 774) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x4217 = INT16_MIN;
	int8_t x4218 = 4;
	uint8_t x4220 = 8U;
	volatile int32_t t91 = 460953207;

	t91 = (((x4217*x4218)/x4219)>>x4220);

	if (t91 != 4) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x4330 = 7U;
	static int64_t x4331 = INT64_MAX;
	static uint32_t x4332 = 1U;
	static int64_t t92 = 3456648501145447LL;

	t92 = (((x4329*x4330)/x4331)>>x4332);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x4349 = 858U;
	int8_t x4350 = -1;
	int64_t x4351 = -1LL;
	volatile int8_t x4352 = 5;
	int64_t t93 = 16265116839815672LL;

	t93 = (((x4349*x4350)/x4351)>>x4352);

	if (t93 != 26LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x4401 = 69610861505965LLU;
	static uint16_t x4402 = 94U;
	static uint64_t x4404 = 47LLU;
	volatile uint64_t t94 = 830710279LLU;

	t94 = (((x4401*x4402)/x4403)>>x4404);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x4469 = -7;
	uint32_t x4470 = UINT32_MAX;
	int8_t x4471 = 10;
	volatile uint32_t t95 = 801556902U;

	t95 = (((x4469*x4470)/x4471)>>x4472);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x4542 = 3189798915470LL;
	int64_t x4543 = -1LL;
	volatile int64_t t96 = 962982481137077138LL;

	t96 = (((x4541*x4542)/x4543)>>x4544);

	if (t96 != 104523330862120960LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x4571 = -1;
	int64_t t97 = 2010529396134LL;

	t97 = (((x4569*x4570)/x4571)>>x4572);

	if (t97 != 13LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x4577 = INT16_MAX;
	static int16_t x4578 = INT16_MIN;
	uint64_t x4579 = 13LLU;
	volatile int16_t x4580 = 0;

	t98 = (((x4577*x4578)/x4579)>>x4580);

	if (t98 != 1418980313279680196LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x4673 = 4U;
	volatile int16_t x4674 = -1;
	int16_t x4675 = INT16_MIN;
	int8_t x4676 = 7;
	int32_t t99 = 99752679;

	t99 = (((x4673*x4674)/x4675)>>x4676);

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

