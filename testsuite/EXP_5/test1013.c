#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x100 = 17U;
volatile int8_t x166 = 0;
static volatile uint64_t t2 = 206214241754610247LLU;
uint32_t x242 = 47U;
int64_t x328 = INT64_MIN;
static uint32_t x394 = UINT32_MAX;
static volatile uint64_t t5 = 16693321763977LLU;
uint8_t x407 = 0U;
volatile int64_t t6 = -22741LL;
static volatile uint16_t x530 = 1U;
volatile uint64_t x563 = 10LLU;
uint8_t x671 = 7U;
int32_t x677 = 8586961;
volatile int32_t t12 = 354;
static uint32_t x686 = 526440278U;
uint8_t x738 = 81U;
int64_t x741 = -1LL;
volatile int64_t x742 = 86559LL;
uint16_t x743 = 2U;
uint64_t x744 = UINT64_MAX;
uint64_t t16 = UINT64_MAX;
int64_t x790 = 3092797661062016LL;
static uint16_t x792 = UINT16_MAX;
int64_t x861 = 2065LL;
static volatile uint8_t x878 = UINT8_MAX;
int64_t x880 = -47069434269LL;
volatile int8_t x961 = -1;
int8_t x964 = INT8_MIN;
uint8_t x983 = 0U;
uint32_t x1178 = 233128U;
volatile int32_t x1257 = INT32_MIN;
static uint32_t x1260 = UINT32_MAX;
uint32_t x1566 = 28U;
int16_t x1574 = INT16_MAX;
static uint64_t t35 = 5LLU;
static volatile uint8_t x1725 = 3U;
static uint64_t x2003 = 3LLU;
uint64_t t38 = 41798513120695LLU;
static volatile uint64_t t41 = 38318LLU;
uint16_t x2470 = 63U;
int32_t x2472 = INT32_MIN;
volatile int32_t x2573 = INT32_MIN;
int64_t x2574 = 14315LL;
uint64_t x2733 = UINT64_MAX;
uint64_t x2734 = 8197208785795LLU;
static uint8_t x2735 = 5U;
static int16_t x2764 = -16324;
volatile int8_t x2794 = 27;
uint8_t x2961 = 11U;
static volatile uint16_t x2962 = 1U;
static uint8_t x2963 = 1U;
int64_t t52 = 1357334421430926LL;
uint8_t x3521 = 1U;
int32_t x3560 = INT32_MIN;
int16_t x3806 = 1;
static uint8_t x3807 = 1U;
static uint8_t x3862 = 4U;
volatile uint32_t x3864 = 651222U;
int8_t x4091 = 0;
static uint16_t x4254 = UINT16_MAX;
uint32_t x4255 = 1U;
volatile int32_t t67 = 13;
uint64_t x4342 = UINT64_MAX;
uint64_t t68 = 936877660787694879LLU;
static int64_t t70 = 0LL;
int8_t x4456 = INT8_MAX;
static uint8_t x4531 = 4U;
int32_t x4532 = -1;
int8_t x4657 = INT8_MIN;
volatile uint32_t x4658 = 124052977U;
volatile uint32_t x4660 = UINT32_MAX;
uint8_t x4846 = UINT8_MAX;
uint16_t x4907 = 2U;
volatile uint64_t t80 = UINT64_MAX;
volatile int64_t x4921 = -46078968997336336LL;
uint32_t x4922 = 191359U;
static uint32_t x4950 = 20012455U;
volatile uint32_t t82 = 509986U;
volatile int16_t x5118 = 254;
volatile int64_t x5120 = INT64_MIN;
uint32_t x5236 = 507245119U;
volatile uint32_t t84 = 167U;
uint8_t x5247 = 0U;
uint8_t x5248 = 74U;
int32_t x5302 = 3197535;
int16_t x5303 = 4;
uint16_t x5644 = 11912U;
static uint32_t x5650 = 49866926U;
volatile uint64_t t89 = 17881LLU;
uint8_t x5687 = 4U;
uint8_t x5825 = 1U;
static uint8_t x5827 = 6U;
static int16_t x5857 = -1;
uint8_t x5858 = 5U;
uint8_t x5860 = 0U;
static volatile int32_t x5947 = 17;
int8_t x5948 = INT8_MIN;
static int32_t x5955 = 8;
int32_t t96 = INT32_MAX;
int8_t x6049 = 4;
volatile int32_t t97 = -6;
volatile int32_t x6141 = -1;
uint8_t x6143 = 3U;


void f0(void) {
	volatile uint16_t x97 = UINT16_MAX;
	static volatile int32_t x98 = 7943856;
	uint64_t x99 = 6LLU;
	int32_t t0 = -278873;

	t0 = (x97|((x98<<x99)^x100));

	if (t0 != 508428287) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x165 = 24LL;
	int64_t x167 = 0LL;
	int64_t x168 = INT64_MIN;
	volatile int64_t t1 = 34667353LL;

	t1 = (x165|((x166<<x167)^x168));

	if (t1 != -9223372036854775784LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x237 = 4082LLU;
	int32_t x238 = 133;
	int8_t x239 = 1;
	int32_t x240 = -6774;

	t2 = (x237|((x238<<x239)^x240));

	if (t2 != 18446744073709547506LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x241 = INT16_MIN;
	uint16_t x243 = 29U;
	uint8_t x244 = 64U;
	volatile uint32_t t3 = 1734093U;

	t3 = (x241|((x242<<x243)^x244));

	if (t3 != 4294934592U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x325 = -6;
	uint32_t x326 = UINT32_MAX;
	volatile uint8_t x327 = 14U;
	int64_t t4 = 140716189239288443LL;

	t4 = (x325|((x326<<x327)^x328));

	if (t4 != -6LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x393 = UINT32_MAX;
	uint64_t x395 = 15LLU;
	uint64_t x396 = 62LLU;

	t5 = (x393|((x394<<x395)^x396));

	if (t5 != 4294967295LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x405 = INT8_MAX;
	int64_t x406 = 1409093LL;
	int8_t x408 = INT8_MAX;

	t6 = (x405|((x406<<x407)^x408));

	if (t6 != 1409151LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x509 = 17;
	int64_t x510 = 304295919056LL;
	uint64_t x511 = 0LLU;
	static volatile int8_t x512 = -1;
	volatile int64_t t7 = 235LL;

	t7 = (x509|((x510<<x511)^x512));

	if (t7 != -304295919041LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x529 = UINT16_MAX;
	static int8_t x531 = 7;
	int64_t x532 = -6LL;
	int64_t t8 = -961139562LL;

	t8 = (x529|((x530<<x531)^x532));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x561 = 9U;
	uint64_t x562 = UINT64_MAX;
	int64_t x564 = INT64_MIN;
	static uint64_t t9 = 5680390565503403270LLU;

	t9 = (x561|((x562<<x563)^x564));

	if (t9 != 9223372036854774793LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x609 = 28800658U;
	uint64_t x610 = 67175330141669LLU;
	volatile uint32_t x611 = 31U;
	uint64_t x612 = 536901420620082484LLU;
	volatile uint64_t t10 = 3110637421361LLU;

	t10 = (x609|((x610<<x611)^x612));

	if (t10 != 4299563314062000054LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x669 = INT32_MIN;
	uint16_t x670 = UINT16_MAX;
	int8_t x672 = INT8_MAX;
	static int32_t t11 = 30826960;

	t11 = (x669|((x670<<x671)^x672));

	if (t11 != -2139095041) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x678 = 15;
	uint8_t x679 = 22U;
	volatile int32_t x680 = INT32_MAX;

	t12 = (x677|((x678<<x679)^x680));

	if (t12 != 2092957695) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x685 = INT64_MIN;
	static uint16_t x687 = 0U;
	int8_t x688 = -29;
	int64_t t13 = -2697679LL;

	t13 = (x685|((x686<<x687)^x688));

	if (t13 != -9223372033086248779LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x709 = 15U;
	int8_t x710 = INT8_MAX;
	static uint8_t x711 = 0U;
	int64_t x712 = 505LL;
	volatile int64_t t14 = -91559416051648LL;

	t14 = (x709|((x710<<x711)^x712));

	if (t14 != 399LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x737 = -5059;
	int32_t x739 = 10;
	int64_t x740 = INT64_MAX;
	volatile int64_t t15 = 4106054980059824LL;

	t15 = (x737|((x738<<x739)^x740));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {


	t16 = (x741|((x742<<x743)^x744));

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x753 = -132427845521160LL;
	volatile uint16_t x754 = 4U;
	volatile uint8_t x755 = 6U;
	uint8_t x756 = 10U;
	volatile int64_t t17 = 0LL;

	t17 = (x753|((x754<<x755)^x756));

	if (t17 != -132427845520902LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x789 = UINT16_MAX;
	uint8_t x791 = 2U;
	int64_t t18 = -631LL;

	t18 = (x789|((x790<<x791)^x792));

	if (t18 != 12371190644277247LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x862 = INT16_MAX;
	uint8_t x863 = 0U;
	uint32_t x864 = 417445534U;
	volatile int64_t t19 = 3243LL;

	t19 = (x861|((x862<<x863)^x864));

	if (t19 != 417450353LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x877 = UINT64_MAX;
	static int16_t x879 = 0;
	uint64_t t20 = UINT64_MAX;

	t20 = (x877|((x878<<x879)^x880));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x881 = UINT8_MAX;
	uint32_t x882 = 2726U;
	uint8_t x883 = 0U;
	int64_t x884 = INT64_MAX;
	int64_t t21 = -159048LL;

	t21 = (x881|((x882<<x883)^x884));

	if (t21 != 9223372036854773247LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x962 = 20280U;
	volatile uint8_t x963 = 31U;
	uint32_t t22 = UINT32_MAX;

	t22 = (x961|((x962<<x963)^x964));

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint64_t x981 = 4LLU;
	static volatile int64_t x982 = 4356909901798324906LL;
	uint64_t x984 = 644261463210LLU;
	uint64_t t23 = 78LLU;

	t23 = (x981|((x982<<x983)^x984));

	if (t23 != 4356910408618737156LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x1177 = 137310623636701791LL;
	int8_t x1179 = 1;
	int8_t x1180 = -46;
	int64_t t24 = 741742LL;

	t24 = (x1177|((x1178<<x1179)^x1180));

	if (t24 != 137310624143696607LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x1258 = 0U;
	uint32_t x1259 = 16U;
	uint32_t t25 = UINT32_MAX;

	t25 = (x1257|((x1258<<x1259)^x1260));

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x1369 = 1021U;
	volatile uint64_t x1370 = 2886866LLU;
	int32_t x1371 = 7;
	int32_t x1372 = -601511457;
	uint64_t t26 = 1292476LLU;

	t26 = (x1369|((x1370<<x1371)^x1372));

	if (t26 != 18446744072805925887LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1417 = -1;
	int8_t x1418 = INT8_MAX;
	static int16_t x1419 = 1;
	volatile int16_t x1420 = INT16_MIN;
	static int32_t t27 = 29386126;

	t27 = (x1417|((x1418<<x1419)^x1420));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1425 = -1;
	static volatile int16_t x1426 = 222;
	uint8_t x1427 = 21U;
	int64_t x1428 = INT64_MIN;
	int64_t t28 = 3603LL;

	t28 = (x1425|((x1426<<x1427)^x1428));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x1441 = UINT8_MAX;
	uint16_t x1442 = 1199U;
	int32_t x1443 = 13;
	int16_t x1444 = INT16_MAX;
	int32_t t29 = -3;

	t29 = (x1441|((x1442<<x1443)^x1444));

	if (t29 != 9805823) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x1509 = UINT8_MAX;
	volatile int64_t x1510 = INT64_MAX;
	int32_t x1511 = 0;
	int8_t x1512 = -41;
	static volatile int64_t t30 = 0LL;

	t30 = (x1509|((x1510<<x1511)^x1512));

	if (t30 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1565 = INT64_MIN;
	uint8_t x1567 = 1U;
	int32_t x1568 = INT32_MIN;
	int64_t t31 = -4174784258947692LL;

	t31 = (x1565|((x1566<<x1567)^x1568));

	if (t31 != -9223372034707292104LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x1573 = INT16_MAX;
	int8_t x1575 = 1;
	int8_t x1576 = INT8_MAX;
	int32_t t32 = 2374;

	t32 = (x1573|((x1574<<x1575)^x1576));

	if (t32 != 65535) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x1597 = 2;
	uint64_t x1598 = 10738724266219LLU;
	volatile uint8_t x1599 = 4U;
	int8_t x1600 = INT8_MIN;
	static volatile uint64_t t33 = 32925085718110173LLU;

	t33 = (x1597|((x1598<<x1599)^x1600));

	if (t33 != 18446572254121292082LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x1693 = 37U;
	static int64_t x1694 = 62943665653000LL;
	uint64_t x1695 = 3LLU;
	int64_t x1696 = INT64_MAX;
	volatile int64_t t34 = -19346851164811315LL;

	t34 = (x1693|((x1694<<x1695)^x1696));

	if (t34 != 9222868487529551807LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x1701 = UINT32_MAX;
	uint64_t x1702 = UINT64_MAX;
	static int8_t x1703 = 1;
	volatile int16_t x1704 = -1;

	t35 = (x1701|((x1702<<x1703)^x1704));

	if (t35 != 4294967295LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1726 = 33;
	int8_t x1727 = 1;
	int32_t x1728 = -1;
	int32_t t36 = -156;

	t36 = (x1725|((x1726<<x1727)^x1728));

	if (t36 != -65) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x2001 = INT8_MIN;
	uint8_t x2002 = UINT8_MAX;
	int8_t x2004 = INT8_MIN;
	volatile int32_t t37 = -16053296;

	t37 = (x2001|((x2002<<x2003)^x2004));

	if (t37 != -8) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x2005 = -2793;
	uint16_t x2006 = 1119U;
	static uint32_t x2007 = 1U;
	uint64_t x2008 = 371669824494713282LLU;

	t38 = (x2005|((x2006<<x2007)^x2008));

	if (t38 != 18446744073709548927LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x2189 = UINT64_MAX;
	static uint16_t x2190 = 5U;
	uint8_t x2191 = 1U;
	int8_t x2192 = -1;
	static uint64_t t39 = UINT64_MAX;

	t39 = (x2189|((x2190<<x2191)^x2192));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x2257 = 21377212U;
	static uint8_t x2258 = UINT8_MAX;
	int16_t x2259 = 0;
	static uint8_t x2260 = 6U;
	uint32_t t40 = 42U;

	t40 = (x2257|((x2258<<x2259)^x2260));

	if (t40 != 21377277U) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x2349 = 4U;
	volatile uint64_t x2350 = 2819080365986LLU;
	volatile uint8_t x2351 = 9U;
	static int8_t x2352 = INT8_MIN;

	t41 = (x2349|((x2350<<x2351)^x2352));

	if (t41 != 18445300704562166660LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x2437 = 27435U;
	uint16_t x2438 = 4U;
	uint8_t x2439 = 1U;
	int16_t x2440 = -130;
	int32_t t42 = -60055;

	t42 = (x2437|((x2438<<x2439)^x2440));

	if (t42 != -129) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x2469 = UINT64_MAX;
	static int8_t x2471 = 0;
	static volatile uint64_t t43 = UINT64_MAX;

	t43 = (x2469|((x2470<<x2471)^x2472));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x2575 = 5U;
	volatile int16_t x2576 = INT16_MIN;
	int64_t t44 = 54LL;

	t44 = (x2573|((x2574<<x2575)^x2576));

	if (t44 != -426656LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x2701 = INT8_MIN;
	static uint16_t x2702 = 1301U;
	uint16_t x2703 = 2U;
	static int16_t x2704 = INT16_MAX;
	volatile int32_t t45 = -3339;

	t45 = (x2701|((x2702<<x2703)^x2704));

	if (t45 != -85) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x2736 = -1;
	volatile uint64_t t46 = UINT64_MAX;

	t46 = (x2733|((x2734<<x2735)^x2736));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x2761 = UINT32_MAX;
	volatile uint8_t x2762 = 24U;
	volatile uint16_t x2763 = 1U;
	volatile uint32_t t47 = UINT32_MAX;

	t47 = (x2761|((x2762<<x2763)^x2764));

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x2793 = 15U;
	static volatile int8_t x2795 = 1;
	volatile int64_t x2796 = 89964624944LL;
	int64_t t48 = -234643359100582988LL;

	t48 = (x2793|((x2794<<x2795)^x2796));

	if (t48 != 89964624911LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x2869 = -1;
	uint32_t x2870 = UINT32_MAX;
	volatile uint8_t x2871 = 3U;
	static volatile int32_t x2872 = INT32_MIN;
	uint32_t t49 = UINT32_MAX;

	t49 = (x2869|((x2870<<x2871)^x2872));

	if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x2953 = 3;
	int8_t x2954 = 10;
	volatile uint16_t x2955 = 0U;
	static volatile uint64_t x2956 = 27947244298LLU;
	volatile uint64_t t50 = 10LLU;

	t50 = (x2953|((x2954<<x2955)^x2956));

	if (t50 != 27947244291LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x2964 = 1;
	volatile int32_t t51 = -1843789;

	t51 = (x2961|((x2962<<x2963)^x2964));

	if (t51 != 11) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int32_t x3013 = -1;
	int16_t x3014 = 9;
	uint16_t x3015 = 6U;
	int64_t x3016 = -1LL;

	t52 = (x3013|((x3014<<x3015)^x3016));

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x3289 = UINT32_MAX;
	int16_t x3290 = 3560;
	uint8_t x3291 = 1U;
	int64_t x3292 = -1LL;
	volatile int64_t t53 = 12370803103955004LL;

	t53 = (x3289|((x3290<<x3291)^x3292));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x3309 = 71815701LLU;
	int8_t x3310 = INT8_MAX;
	uint8_t x3311 = 3U;
	static int8_t x3312 = -35;
	volatile uint64_t t54 = 2635579201LLU;

	t54 = (x3309|((x3310<<x3311)^x3312));

	if (t54 != 18446744073709551157LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x3425 = INT32_MIN;
	uint32_t x3426 = UINT32_MAX;
	static int8_t x3427 = 0;
	static uint64_t x3428 = 2497351266306LLU;
	static uint64_t t55 = 46848165976256623LLU;

	t55 = (x3425|((x3426<<x3427)^x3428));

	if (t55 != 18446744071734284285LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x3522 = 2U;
	uint8_t x3523 = 2U;
	int32_t x3524 = INT32_MIN;
	static volatile int32_t t56 = -8;

	t56 = (x3521|((x3522<<x3523)^x3524));

	if (t56 != -2147483639) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x3557 = 8300405034953564LLU;
	static uint16_t x3558 = 40U;
	uint8_t x3559 = 1U;
	static uint64_t t57 = 5014747845804146LLU;

	t57 = (x3557|((x3558<<x3559)^x3560));

	if (t57 != 18446744072192895836LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x3609 = 87876766U;
	static volatile uint64_t x3610 = 6447908LLU;
	uint32_t x3611 = 9U;
	static volatile int64_t x3612 = 4327449335LL;
	uint64_t t58 = 1298441272010440340LLU;

	t58 = (x3609|((x3610<<x3611)^x3612));

	if (t58 != 7604137727LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x3713 = INT32_MIN;
	static int8_t x3714 = 17;
	static uint8_t x3715 = 2U;
	static int8_t x3716 = 50;
	int32_t t59 = -9744747;

	t59 = (x3713|((x3714<<x3715)^x3716));

	if (t59 != -2147483530) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x3805 = -45489878LL;
	int32_t x3808 = 444102;
	int64_t t60 = -84LL;

	t60 = (x3805|((x3806<<x3807)^x3808));

	if (t60 != -45094930LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x3861 = INT64_MIN;
	volatile uint32_t x3863 = 13U;
	int64_t t61 = 3289030LL;

	t61 = (x3861|((x3862<<x3863)^x3864));

	if (t61 != -9223372036854157354LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x4001 = INT8_MAX;
	uint8_t x4002 = 68U;
	static uint16_t x4003 = 6U;
	volatile uint32_t x4004 = UINT32_MAX;
	volatile uint32_t t62 = 2024996U;

	t62 = (x4001|((x4002<<x4003)^x4004));

	if (t62 != 4294962943U) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int64_t x4017 = INT64_MAX;
	static uint16_t x4018 = 2015U;
	static int8_t x4019 = 14;
	int16_t x4020 = 2683;
	volatile int64_t t63 = INT64_MAX;

	t63 = (x4017|((x4018<<x4019)^x4020));

	if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x4089 = UINT16_MAX;
	volatile int32_t x4090 = 13;
	static int32_t x4092 = -5;
	int32_t t64 = 1593606;

	t64 = (x4089|((x4090<<x4091)^x4092));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x4133 = INT8_MIN;
	uint64_t x4134 = UINT64_MAX;
	uint16_t x4135 = 10U;
	uint64_t x4136 = UINT64_MAX;
	static volatile uint64_t t65 = UINT64_MAX;

	t65 = (x4133|((x4134<<x4135)^x4136));

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x4145 = INT8_MIN;
	static uint64_t x4146 = UINT64_MAX;
	uint32_t x4147 = 16U;
	static int32_t x4148 = INT32_MIN;
	volatile uint64_t t66 = 873572825420215624LLU;

	t66 = (x4145|((x4146<<x4147)^x4148));

	if (t66 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x4253 = -3;
	uint8_t x4256 = 6U;

	t67 = (x4253|((x4254<<x4255)^x4256));

	if (t67 != -3) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x4341 = 16U;
	static uint32_t x4343 = 9U;
	static volatile uint16_t x4344 = UINT16_MAX;

	t68 = (x4341|((x4342<<x4343)^x4344));

	if (t68 != 18446744073709486591LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x4397 = 1;
	uint32_t x4398 = 6U;
	uint32_t x4399 = 5U;
	uint8_t x4400 = 2U;
	volatile uint32_t t69 = 413378762U;

	t69 = (x4397|((x4398<<x4399)^x4400));

	if (t69 != 195U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x4409 = INT16_MIN;
	static int16_t x4410 = 1;
	volatile int8_t x4411 = 0;
	int64_t x4412 = INT64_MIN;

	t70 = (x4409|((x4410<<x4411)^x4412));

	if (t70 != -32767LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x4437 = 26892875U;
	int64_t x4438 = 4387590753140583LL;
	static int16_t x4439 = 3;
	uint32_t x4440 = UINT32_MAX;
	volatile int64_t t71 = -16LL;

	t71 = (x4437|((x4438<<x4439)^x4440));

	if (t71 != 35100724882464463LL) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int32_t x4453 = -1;
	uint64_t x4454 = 120317665901418842LLU;
	volatile uint8_t x4455 = 13U;
	volatile uint64_t t72 = UINT64_MAX;

	t72 = (x4453|((x4454<<x4455)^x4456));

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x4509 = -1;
	uint8_t x4510 = UINT8_MAX;
	static int16_t x4511 = 10;
	uint64_t x4512 = 8173071345439LLU;
	volatile uint64_t t73 = UINT64_MAX;

	t73 = (x4509|((x4510<<x4511)^x4512));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x4529 = INT16_MIN;
	uint8_t x4530 = 0U;
	static volatile int32_t t74 = -58;

	t74 = (x4529|((x4530<<x4531)^x4532));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x4659 = 1U;
	volatile uint32_t t75 = 768U;

	t75 = (x4657|((x4658<<x4659)^x4660));

	if (t75 != 4294967197U) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x4693 = UINT16_MAX;
	uint32_t x4694 = UINT32_MAX;
	int8_t x4695 = 20;
	static volatile uint64_t x4696 = UINT64_MAX;
	uint64_t t76 = 976115172LLU;

	t76 = (x4693|((x4694<<x4695)^x4696));

	if (t76 != 18446744069415632895LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int8_t x4845 = -1;
	int16_t x4847 = 3;
	int64_t x4848 = INT64_MIN;
	int64_t t77 = -20657907670252LL;

	t77 = (x4845|((x4846<<x4847)^x4848));

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x4853 = INT32_MIN;
	static uint32_t x4854 = 4125U;
	int16_t x4855 = 27;
	uint64_t x4856 = 734789LLU;
	uint64_t t78 = 42851940872942LLU;

	t78 = (x4853|((x4854<<x4855)^x4856));

	if (t78 != 18446744073307633221LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x4885 = -1;
	uint16_t x4886 = UINT16_MAX;
	int8_t x4887 = 0;
	static int32_t x4888 = -1;
	int32_t t79 = 47601;

	t79 = (x4885|((x4886<<x4887)^x4888));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x4905 = INT64_MAX;
	uint64_t x4906 = 20959203740LLU;
	static int8_t x4908 = -62;

	t80 = (x4905|((x4906<<x4907)^x4908));

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x4923 = 2;
	int32_t x4924 = INT32_MAX;
	static volatile int64_t t81 = 1596342669557743LL;

	t81 = (x4921|((x4922<<x4923)^x4924));

	if (t81 != -46078968952227085LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x4949 = UINT16_MAX;
	static volatile uint8_t x4951 = 7U;
	volatile int16_t x4952 = INT16_MIN;

	t82 = (x4949|((x4950<<x4951)^x4952));

	if (t82 != 1733427199U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x5117 = 3368LLU;
	int64_t x5119 = 1LL;
	volatile uint64_t t83 = 293797174715514631LLU;

	t83 = (x5117|((x5118<<x5119)^x5120));

	if (t83 != 9223372036854779388LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x5233 = 0U;
	uint8_t x5234 = UINT8_MAX;
	int16_t x5235 = 2;

	t84 = (x5233|((x5234<<x5235)^x5236));

	if (t84 != 507244995U) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x5245 = UINT32_MAX;
	int64_t x5246 = INT64_MAX;
	volatile int64_t t85 = INT64_MAX;

	t85 = (x5245|((x5246<<x5247)^x5248));

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x5301 = UINT64_MAX;
	static uint32_t x5304 = 24610547U;
	volatile uint64_t t86 = UINT64_MAX;

	t86 = (x5301|((x5302<<x5303)^x5304));

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x5393 = 0U;
	int64_t x5394 = 1LL;
	int8_t x5395 = 0;
	int16_t x5396 = 2;
	volatile int64_t t87 = 1047579957930352603LL;

	t87 = (x5393|((x5394<<x5395)^x5396));

	if (t87 != 3LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x5641 = INT8_MIN;
	int32_t x5642 = 825;
	uint8_t x5643 = 1U;
	int32_t t88 = 200;

	t88 = (x5641|((x5642<<x5643)^x5644));

	if (t88 != -6) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x5649 = 1;
	int64_t x5651 = 12LL;
	volatile uint64_t x5652 = 428002LLU;

	t89 = (x5649|((x5650<<x5651)^x5652));

	if (t89 != 2391566307LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x5685 = 218;
	volatile uint32_t x5686 = 11U;
	int64_t x5688 = INT64_MAX;
	static int64_t t90 = -136543461LL;

	t90 = (x5685|((x5686<<x5687)^x5688));

	if (t90 != 9223372036854775775LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x5749 = INT32_MIN;
	uint8_t x5750 = UINT8_MAX;
	uint32_t x5751 = 1U;
	int16_t x5752 = INT16_MIN;
	int32_t t91 = -4065119;

	t91 = (x5749|((x5750<<x5751)^x5752));

	if (t91 != -32258) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x5777 = 58U;
	int16_t x5778 = 199;
	int64_t x5779 = 10LL;
	volatile int8_t x5780 = 8;
	int32_t t92 = -59054012;

	t92 = (x5777|((x5778<<x5779)^x5780));

	if (t92 != 203834) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x5826 = 13U;
	int64_t x5828 = INT64_MAX;
	static volatile int64_t t93 = -536545909011LL;

	t93 = (x5825|((x5826<<x5827)^x5828));

	if (t93 != 9223372036854774975LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x5859 = 6;
	int32_t t94 = -36453457;

	t94 = (x5857|((x5858<<x5859)^x5860));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x5945 = -1;
	static uint8_t x5946 = 22U;
	int32_t t95 = 4487128;

	t95 = (x5945|((x5946<<x5947)^x5948));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x5953 = INT16_MAX;
	int8_t x5954 = INT8_MAX;
	int32_t x5956 = INT32_MAX;

	t96 = (x5953|((x5954<<x5955)^x5956));

	if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x6050 = 1;
	uint8_t x6051 = 6U;
	int16_t x6052 = INT16_MIN;

	t97 = (x6049|((x6050<<x6051)^x6052));

	if (t97 != -32700) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x6142 = INT16_MAX;
	int8_t x6144 = -14;
	int32_t t98 = 30349880;

	t98 = (x6141|((x6142<<x6143)^x6144));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x6153 = INT32_MAX;
	uint16_t x6154 = UINT16_MAX;
	uint8_t x6155 = 14U;
	static int16_t x6156 = INT16_MIN;
	int32_t t99 = -2775;

	t99 = (x6153|((x6154<<x6155)^x6156));

	if (t99 != -1) { NG(); } else { ; }
	
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

