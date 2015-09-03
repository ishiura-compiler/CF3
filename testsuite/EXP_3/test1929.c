#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x17 = INT64_MAX;
volatile int64_t t0 = -1LL;
uint64_t x25 = 59855909971123LLU;
static uint32_t x28 = 1U;
uint8_t x146 = 1U;
volatile int8_t x147 = -1;
uint32_t x230 = 1U;
static int16_t x231 = INT16_MAX;
static volatile uint64_t t3 = 201672LLU;
uint16_t x317 = 19U;
static uint16_t x417 = UINT16_MAX;
volatile uint8_t x606 = 0U;
volatile uint64_t x607 = 4735133346580171838LLU;
volatile uint32_t t8 = 130171773U;
uint64_t t9 = 31161632789333943LLU;
int32_t x755 = 0;
volatile uint8_t x1110 = 4U;
static int8_t x1114 = 1;
int8_t x1198 = 1;
static uint8_t x1212 = 22U;
static int8_t x1214 = 1;
uint64_t x1241 = 693989362910967LLU;
volatile uint32_t t23 = 5932630U;
volatile int32_t t24 = -6493;
int64_t x1527 = -19244LL;
int64_t x1548 = 16700072146296LL;
uint8_t x1550 = 5U;
int32_t x1603 = INT32_MIN;
uint8_t x1650 = 0U;
int32_t x1736 = INT32_MIN;
volatile int64_t t31 = -12450LL;
int16_t x1741 = INT16_MAX;
static uint8_t x1886 = 10U;
uint64_t x2037 = UINT64_MAX;
uint32_t x2040 = 7518494U;
int32_t t37 = -1;
volatile uint64_t x2177 = 8688363413679694984LLU;
uint64_t x2196 = UINT64_MAX;
volatile uint64_t t39 = 24665525LLU;
uint32_t x2218 = 54U;
int32_t x2288 = INT32_MIN;
volatile int32_t t41 = 11053;
uint32_t x2365 = UINT32_MAX;
uint16_t x2390 = 10U;
uint8_t x2517 = UINT8_MAX;
uint64_t t46 = 2502100LLU;
volatile int32_t x2668 = -5613364;
int64_t t48 = -4602916453918463878LL;
static volatile uint8_t x2774 = 4U;
uint16_t x2775 = 100U;
volatile int32_t x2776 = INT32_MIN;
uint8_t x2802 = 1U;
int64_t x2879 = -554518212898748483LL;
static int8_t x2882 = 0;
uint16_t x2971 = 5U;
volatile uint64_t x3027 = UINT64_MAX;
uint64_t t55 = 14739LLU;
volatile uint64_t x3031 = UINT64_MAX;
int8_t x3032 = INT8_MIN;
static volatile int64_t t57 = -48603LL;
static int16_t x3124 = INT16_MAX;
static uint64_t x3195 = 5092778987714LLU;
int64_t x3219 = INT64_MIN;
int8_t x3242 = 5;
uint64_t t61 = 1LLU;
int32_t x3397 = 9;
int32_t x3399 = 1749;
uint32_t x3585 = 389392957U;
int8_t x3587 = INT8_MIN;
int32_t x3675 = -32218780;
int32_t t68 = 132479373;
int32_t t70 = 4;
uint32_t x3993 = UINT32_MAX;
static uint8_t x3994 = 27U;
uint32_t x4017 = 14151U;
static volatile int16_t x4020 = -47;
int16_t x4281 = 2;
volatile int64_t x4283 = INT64_MAX;
uint64_t t75 = 8933084924390334LLU;
uint32_t t78 = 429U;
uint32_t x4554 = 5U;
uint16_t x4677 = 7976U;
int64_t x4851 = -1LL;
int64_t t83 = 12881243LL;
int8_t x4947 = INT8_MIN;
int64_t x5093 = 3850893944885677LL;
static uint32_t x5132 = 208U;
int64_t x5510 = 0LL;
uint16_t x5511 = UINT16_MAX;
static volatile uint16_t x5699 = UINT16_MAX;
volatile int32_t t92 = -111;
uint16_t x5817 = 69U;
uint64_t x5876 = UINT64_MAX;
volatile uint64_t t94 = 2551576739569653LLU;
uint16_t x5935 = 5U;
uint8_t x6142 = 12U;
static int8_t x6193 = INT8_MAX;


void f0(void) {
	int16_t x18 = 0;
	int64_t x19 = -1LL;
	int32_t x20 = -1;

	t0 = ((x17<<x18)%(x19|x20));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x26 = 0;
	uint64_t x27 = 356315235325LLU;
	static volatile uint64_t t1 = 20641707LLU;

	t1 = ((x25<<x26)%(x27|x28));

	if (t1 != 351265671848LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x145 = UINT16_MAX;
	int32_t x148 = INT32_MAX;
	int32_t t2 = -720575;

	t2 = ((x145<<x146)%(x147|x148));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x229 = 8632760LLU;
	int16_t x232 = -49;

	t3 = ((x229<<x230)%(x231|x232));

	if (t3 != 17265520LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x318 = 1LLU;
	volatile int8_t x319 = INT8_MIN;
	uint32_t x320 = 1374U;
	static volatile uint32_t t4 = 230U;

	t4 = ((x317<<x318)%(x319|x320));

	if (t4 != 38U) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x418 = 1;
	uint32_t x419 = UINT32_MAX;
	int8_t x420 = -10;
	volatile uint32_t t5 = 36719U;

	t5 = ((x417<<x418)%(x419|x420));

	if (t5 != 131070U) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x605 = INT64_MAX;
	int64_t x608 = -1LL;
	static volatile uint64_t t6 = 7980162484746725160LLU;

	t6 = ((x605<<x606)%(x607|x608));

	if (t6 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x633 = INT64_MAX;
	volatile uint16_t x634 = 0U;
	uint32_t x635 = 6551U;
	int64_t x636 = -430546168LL;
	volatile int64_t t7 = -59738923418LL;

	t7 = ((x633<<x634)%(x635|x636));

	if (t7 != 83897167LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x681 = UINT32_MAX;
	int8_t x682 = 1;
	int32_t x683 = -1;
	int8_t x684 = 31;

	t8 = ((x681<<x682)%(x683|x684));

	if (t8 != 4294967294U) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x725 = 257U;
	uint8_t x726 = 14U;
	static uint64_t x727 = 0LLU;
	int8_t x728 = INT8_MIN;

	t9 = ((x725<<x726)%(x727|x728));

	if (t9 != 4210688LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x753 = UINT8_MAX;
	int16_t x754 = 0;
	uint64_t x756 = UINT64_MAX;
	uint64_t t10 = 126LLU;

	t10 = ((x753<<x754)%(x755|x756));

	if (t10 != 255LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x777 = 193943;
	volatile uint8_t x778 = 7U;
	int8_t x779 = INT8_MIN;
	int64_t x780 = INT64_MIN;
	volatile int64_t t11 = -1LL;

	t11 = ((x777<<x778)%(x779|x780));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x1041 = 5;
	volatile uint8_t x1042 = 1U;
	int16_t x1043 = 6;
	int64_t x1044 = 1486418LL;
	volatile int64_t t12 = 56712611836LL;

	t12 = ((x1041<<x1042)%(x1043|x1044));

	if (t12 != 10LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x1109 = UINT64_MAX;
	static volatile int8_t x1111 = INT8_MIN;
	int8_t x1112 = INT8_MIN;
	static uint64_t t13 = 8636799710646557LLU;

	t13 = ((x1109<<x1110)%(x1111|x1112));

	if (t13 != 112LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x1113 = 11025712LL;
	int8_t x1115 = 54;
	int32_t x1116 = INT32_MAX;
	static volatile int64_t t14 = -17367LL;

	t14 = ((x1113<<x1114)%(x1115|x1116));

	if (t14 != 22051424LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x1129 = UINT16_MAX;
	uint32_t x1130 = 2U;
	uint64_t x1131 = UINT64_MAX;
	uint64_t x1132 = UINT64_MAX;
	uint64_t t15 = 1LLU;

	t15 = ((x1129<<x1130)%(x1131|x1132));

	if (t15 != 262140LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x1157 = 1U;
	int8_t x1158 = 10;
	static int32_t x1159 = INT32_MAX;
	volatile int16_t x1160 = 0;
	int32_t t16 = 35621;

	t16 = ((x1157<<x1158)%(x1159|x1160));

	if (t16 != 1024) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x1197 = UINT64_MAX;
	volatile uint8_t x1199 = 126U;
	int16_t x1200 = 0;
	static uint64_t t17 = 4272410842405779694LLU;

	t17 = ((x1197<<x1198)%(x1199|x1200));

	if (t17 != 14LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x1209 = 121U;
	static volatile int8_t x1210 = 1;
	uint16_t x1211 = UINT16_MAX;
	static int32_t t18 = -1;

	t18 = ((x1209<<x1210)%(x1211|x1212));

	if (t18 != 242) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x1213 = 1629958044457LLU;
	int32_t x1215 = -3;
	int16_t x1216 = INT16_MIN;
	volatile uint64_t t19 = 901022641458LLU;

	t19 = ((x1213<<x1214)%(x1215|x1216));

	if (t19 != 3259916088914LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1242 = 1;
	volatile int64_t x1243 = -565371070LL;
	int16_t x1244 = -1;
	volatile uint64_t t20 = 20461197952488LLU;

	t20 = ((x1241<<x1242)%(x1243|x1244));

	if (t20 != 1387978725821934LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x1289 = 31LLU;
	volatile uint8_t x1290 = 54U;
	volatile int32_t x1291 = INT32_MIN;
	volatile int32_t x1292 = INT32_MAX;
	volatile uint64_t t21 = 2044789041666753070LLU;

	t21 = ((x1289<<x1290)%(x1291|x1292));

	if (t21 != 558446353793941504LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x1341 = 3235U;
	static int8_t x1342 = 1;
	int16_t x1343 = -3;
	int32_t x1344 = INT32_MAX;
	volatile uint32_t t22 = 14590U;

	t22 = ((x1341<<x1342)%(x1343|x1344));

	if (t22 != 6470U) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x1381 = UINT32_MAX;
	uint8_t x1382 = 4U;
	volatile int16_t x1383 = 13159;
	uint8_t x1384 = UINT8_MAX;

	t23 = ((x1381<<x1382)%(x1383|x1384));

	if (t23 != 87U) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x1397 = UINT16_MAX;
	volatile int16_t x1398 = 2;
	int8_t x1399 = -3;
	int8_t x1400 = INT8_MAX;

	t24 = ((x1397<<x1398)%(x1399|x1400));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x1525 = INT16_MAX;
	uint16_t x1526 = 2U;
	int32_t x1528 = INT32_MIN;
	static volatile int64_t t25 = -32LL;

	t25 = ((x1525<<x1526)%(x1527|x1528));

	if (t25 != 15604LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1545 = 47U;
	uint8_t x1546 = 0U;
	uint64_t x1547 = 11LLU;
	uint64_t t26 = 3954087LLU;

	t26 = ((x1545<<x1546)%(x1547|x1548));

	if (t26 != 47LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1549 = 120196893987LLU;
	int8_t x1551 = INT8_MIN;
	int16_t x1552 = 1623;
	uint64_t t27 = 1875172356617050LLU;

	t27 = ((x1549<<x1550)%(x1551|x1552));

	if (t27 != 3846300607584LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1601 = 82LLU;
	uint8_t x1602 = 11U;
	volatile int32_t x1604 = INT32_MAX;
	volatile uint64_t t28 = 7693287166LLU;

	t28 = ((x1601<<x1602)%(x1603|x1604));

	if (t28 != 167936LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1621 = 200674662889552803LLU;
	uint8_t x1622 = 0U;
	volatile int32_t x1623 = INT32_MIN;
	volatile int64_t x1624 = INT64_MAX;
	uint64_t t29 = 44086409LLU;

	t29 = ((x1621<<x1622)%(x1623|x1624));

	if (t29 != 200674662889552803LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x1649 = 29U;
	uint32_t x1651 = 32235275U;
	uint8_t x1652 = 109U;
	uint32_t t30 = 47U;

	t30 = ((x1649<<x1650)%(x1651|x1652));

	if (t30 != 29U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1733 = INT8_MAX;
	volatile int8_t x1734 = 1;
	int64_t x1735 = INT64_MAX;

	t31 = ((x1733<<x1734)%(x1735|x1736));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x1742 = 0LL;
	static volatile uint32_t x1743 = UINT32_MAX;
	uint8_t x1744 = 1U;
	uint32_t t32 = 313450U;

	t32 = ((x1741<<x1742)%(x1743|x1744));

	if (t32 != 32767U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1797 = 3508671413092996LL;
	volatile uint8_t x1798 = 0U;
	int8_t x1799 = -1;
	uint64_t x1800 = UINT64_MAX;
	uint64_t t33 = 94987LLU;

	t33 = ((x1797<<x1798)%(x1799|x1800));

	if (t33 != 3508671413092996LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x1829 = UINT64_MAX;
	int8_t x1830 = 1;
	int16_t x1831 = -1;
	uint64_t x1832 = 3988919445356852LLU;
	uint64_t t34 = 3124215936384446757LLU;

	t34 = ((x1829<<x1830)%(x1831|x1832));

	if (t34 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x1885 = UINT64_MAX;
	static volatile int8_t x1887 = -5;
	int32_t x1888 = INT32_MIN;
	uint64_t t35 = 98678LLU;

	t35 = ((x1885<<x1886)%(x1887|x1888));

	if (t35 != 18446744073709550592LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x2038 = 51U;
	int8_t x2039 = INT8_MIN;
	static uint64_t t36 = 2802175441608983LLU;

	t36 = ((x2037<<x2038)%(x2039|x2040));

	if (t36 != 4243596578LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x2053 = UINT16_MAX;
	uint16_t x2054 = 7U;
	int32_t x2055 = -456075;
	int32_t x2056 = INT32_MIN;

	t37 = ((x2053<<x2054)%(x2055|x2056));

	if (t37 != 179130) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x2178 = 7;
	int8_t x2179 = INT8_MIN;
	static volatile int32_t x2180 = -1;
	uint64_t t38 = 579606135LLU;

	t38 = ((x2177<<x2178)%(x2179|x2180));

	if (t38 != 5305872528427860992LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x2193 = 1;
	int8_t x2194 = 0;
	int32_t x2195 = -1;

	t39 = ((x2193<<x2194)%(x2195|x2196));

	if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x2217 = 1565405998LLU;
	uint8_t x2219 = 56U;
	static uint64_t x2220 = 1099992544LLU;
	uint64_t t40 = 2589178785LLU;

	t40 = ((x2217<<x2218)%(x2219|x2220));

	if (t40 != 414907424LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x2285 = 255;
	int8_t x2286 = 0;
	uint8_t x2287 = UINT8_MAX;

	t41 = ((x2285<<x2286)%(x2287|x2288));

	if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x2366 = 0U;
	int32_t x2367 = -51870411;
	int32_t x2368 = INT32_MAX;
	static uint32_t t42 = 1080661U;

	t42 = ((x2365<<x2366)%(x2367|x2368));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x2385 = 1;
	int32_t x2386 = 3;
	uint8_t x2387 = UINT8_MAX;
	uint32_t x2388 = 16U;
	volatile uint32_t t43 = 41150U;

	t43 = ((x2385<<x2386)%(x2387|x2388));

	if (t43 != 8U) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x2389 = 433192405LLU;
	uint64_t x2391 = 1035339494925LLU;
	int16_t x2392 = 9;
	static volatile uint64_t t44 = 5951033371161570279LLU;

	t44 = ((x2389<<x2390)%(x2391|x2392));

	if (t44 != 443589022720LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int64_t x2518 = 1LL;
	int32_t x2519 = INT32_MIN;
	uint8_t x2520 = UINT8_MAX;
	int32_t t45 = -1;

	t45 = ((x2517<<x2518)%(x2519|x2520));

	if (t45 != 510) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x2553 = 1420U;
	uint32_t x2554 = 14U;
	static int64_t x2555 = 927535LL;
	uint64_t x2556 = 1675544751LLU;

	t46 = ((x2553<<x2554)%(x2555|x2556));

	if (t46 != 23265280LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x2665 = UINT64_MAX;
	uint8_t x2666 = 28U;
	uint32_t x2667 = UINT32_MAX;
	uint64_t t47 = 626095680LLU;

	t47 = ((x2665<<x2666)%(x2667|x2668));

	if (t47 != 4026531840LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x2689 = 12780U;
	static uint8_t x2690 = 3U;
	int16_t x2691 = 0;
	int64_t x2692 = INT64_MAX;

	t48 = ((x2689<<x2690)%(x2691|x2692));

	if (t48 != 102240LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x2773 = UINT32_MAX;
	uint32_t t49 = 16394U;

	t49 = ((x2773<<x2774)%(x2775|x2776));

	if (t49 != 2147483532U) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x2801 = 224U;
	static volatile int8_t x2803 = INT8_MIN;
	static uint8_t x2804 = 4U;
	int32_t t50 = -1487904;

	t50 = ((x2801<<x2802)%(x2803|x2804));

	if (t50 != 76) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x2877 = 4947509U;
	uint8_t x2878 = 0U;
	int16_t x2880 = INT16_MIN;
	int64_t t51 = 57845257LL;

	t51 = ((x2877<<x2878)%(x2879|x2880));

	if (t51 != 21589LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x2881 = 58U;
	volatile int32_t x2883 = INT32_MAX;
	static int16_t x2884 = -14;
	int32_t t52 = 220958070;

	t52 = ((x2881<<x2882)%(x2883|x2884));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x2917 = 2U;
	int16_t x2918 = 0;
	volatile uint32_t x2919 = 242099462U;
	static int8_t x2920 = INT8_MIN;
	uint32_t t53 = 24285U;

	t53 = ((x2917<<x2918)%(x2919|x2920));

	if (t53 != 2U) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x2969 = 62;
	static uint8_t x2970 = 11U;
	int32_t x2972 = INT32_MIN;
	volatile int32_t t54 = -997007;

	t54 = ((x2969<<x2970)%(x2971|x2972));

	if (t54 != 126976) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x3025 = 30;
	int64_t x3026 = 0LL;
	int64_t x3028 = INT64_MAX;

	t55 = ((x3025<<x3026)%(x3027|x3028));

	if (t55 != 30LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x3029 = 15U;
	static int32_t x3030 = 8;
	uint64_t t56 = 150927690018960190LLU;

	t56 = ((x3029<<x3030)%(x3031|x3032));

	if (t56 != 3840LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x3069 = UINT16_MAX;
	volatile uint16_t x3070 = 1U;
	volatile int64_t x3071 = INT64_MAX;
	int32_t x3072 = INT32_MAX;

	t57 = ((x3069<<x3070)%(x3071|x3072));

	if (t57 != 131070LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x3121 = 10U;
	int8_t x3122 = 1;
	uint32_t x3123 = UINT32_MAX;
	uint32_t t58 = 2815U;

	t58 = ((x3121<<x3122)%(x3123|x3124));

	if (t58 != 20U) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x3193 = UINT64_MAX;
	int16_t x3194 = 5;
	int16_t x3196 = 920;
	static uint64_t t59 = 3727278LLU;

	t59 = ((x3193<<x3194)%(x3195|x3196));

	if (t59 != 866619394262LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x3217 = UINT8_MAX;
	volatile int8_t x3218 = 1;
	static int8_t x3220 = INT8_MIN;
	int64_t t60 = -1008927329041375LL;

	t60 = ((x3217<<x3218)%(x3219|x3220));

	if (t60 != 126LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x3241 = 11398023274196222LLU;
	int32_t x3243 = 203692;
	uint32_t x3244 = UINT32_MAX;

	t61 = ((x3241<<x3242)%(x3243|x3244));

	if (t61 != 299724259LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x3398 = 1U;
	volatile uint32_t x3400 = 138233414U;
	volatile uint32_t t62 = 1668721658U;

	t62 = ((x3397<<x3398)%(x3399|x3400));

	if (t62 != 18U) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x3445 = 1631;
	uint8_t x3446 = 0U;
	uint32_t x3447 = 37827U;
	int32_t x3448 = INT32_MAX;
	volatile uint32_t t63 = 24803650U;

	t63 = ((x3445<<x3446)%(x3447|x3448));

	if (t63 != 1631U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x3525 = INT16_MAX;
	int8_t x3526 = 1;
	int32_t x3527 = INT32_MIN;
	uint32_t x3528 = UINT32_MAX;
	static volatile uint32_t t64 = 835954U;

	t64 = ((x3525<<x3526)%(x3527|x3528));

	if (t64 != 65534U) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x3586 = 2U;
	uint32_t x3588 = 223710U;
	uint32_t t65 = 6708U;

	t65 = ((x3585<<x3586)%(x3587|x3588));

	if (t65 != 1557571828U) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x3673 = UINT16_MAX;
	volatile int8_t x3674 = 1;
	int16_t x3676 = -1;
	volatile int32_t t66 = 1524;

	t66 = ((x3673<<x3674)%(x3675|x3676));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x3697 = 218512558LLU;
	int16_t x3698 = 0;
	static int8_t x3699 = INT8_MIN;
	int16_t x3700 = INT16_MAX;
	volatile uint64_t t67 = 5LLU;

	t67 = ((x3697<<x3698)%(x3699|x3700));

	if (t67 != 218512558LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x3713 = UINT16_MAX;
	volatile uint16_t x3714 = 1U;
	int8_t x3715 = -1;
	int16_t x3716 = -219;

	t68 = ((x3713<<x3714)%(x3715|x3716));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x3797 = INT8_MAX;
	volatile uint16_t x3798 = 0U;
	int16_t x3799 = 2127;
	int16_t x3800 = INT16_MIN;
	int32_t t69 = 50;

	t69 = ((x3797<<x3798)%(x3799|x3800));

	if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint16_t x3825 = 5U;
	volatile uint8_t x3826 = 2U;
	volatile uint16_t x3827 = 6309U;
	int8_t x3828 = INT8_MIN;

	t70 = ((x3825<<x3826)%(x3827|x3828));

	if (t70 != 20) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x3957 = 48;
	static uint8_t x3958 = 1U;
	int16_t x3959 = INT16_MAX;
	int32_t x3960 = 839;
	int32_t t71 = 540173;

	t71 = ((x3957<<x3958)%(x3959|x3960));

	if (t71 != 96) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x3995 = INT64_MIN;
	int16_t x3996 = INT16_MAX;
	int64_t t72 = -3691816LL;

	t72 = ((x3993<<x3994)%(x3995|x3996));

	if (t72 != 4160749568LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x4018 = 3;
	static volatile int64_t x4019 = INT64_MIN;
	int64_t t73 = 1LL;

	t73 = ((x4017<<x4018)%(x4019|x4020));

	if (t73 != 32LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x4282 = 0;
	volatile uint8_t x4284 = 45U;
	static volatile int64_t t74 = -393717379437090LL;

	t74 = ((x4281<<x4282)%(x4283|x4284));

	if (t74 != 2LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x4361 = INT8_MAX;
	int8_t x4362 = 0;
	static int16_t x4363 = 2;
	volatile uint64_t x4364 = 976624945692964611LLU;

	t75 = ((x4361<<x4362)%(x4363|x4364));

	if (t75 != 127LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x4445 = INT8_MAX;
	uint8_t x4446 = 14U;
	uint64_t x4447 = UINT64_MAX;
	uint64_t x4448 = 2148147092695LLU;
	uint64_t t76 = 65351150212097978LLU;

	t76 = ((x4445<<x4446)%(x4447|x4448));

	if (t76 != 2080768LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x4521 = 0;
	int8_t x4522 = 19;
	uint16_t x4523 = UINT16_MAX;
	int8_t x4524 = -26;
	volatile int32_t t77 = 0;

	t77 = ((x4521<<x4522)%(x4523|x4524));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x4537 = 3416U;
	static uint64_t x4538 = 1LLU;
	uint32_t x4539 = 49187243U;
	int16_t x4540 = INT16_MIN;

	t78 = ((x4537<<x4538)%(x4539|x4540));

	if (t78 != 6832U) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x4553 = 10U;
	int8_t x4555 = 6;
	static volatile int64_t x4556 = INT64_MAX;
	volatile int64_t t79 = 141LL;

	t79 = ((x4553<<x4554)%(x4555|x4556));

	if (t79 != 320LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x4637 = 2761U;
	uint16_t x4638 = 1U;
	static int8_t x4639 = INT8_MIN;
	uint16_t x4640 = 15U;
	int32_t t80 = 0;

	t80 = ((x4637<<x4638)%(x4639|x4640));

	if (t80 != 98) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x4678 = 0U;
	volatile uint8_t x4679 = 4U;
	uint16_t x4680 = UINT16_MAX;
	int32_t t81 = -1293975;

	t81 = ((x4677<<x4678)%(x4679|x4680));

	if (t81 != 7976) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x4793 = 49U;
	uint16_t x4794 = 3U;
	volatile int8_t x4795 = 0;
	static int16_t x4796 = INT16_MIN;
	static volatile uint32_t t82 = 487415U;

	t82 = ((x4793<<x4794)%(x4795|x4796));

	if (t82 != 392U) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint8_t x4849 = 5U;
	volatile uint64_t x4850 = 18LLU;
	static int64_t x4852 = INT64_MIN;

	t83 = ((x4849<<x4850)%(x4851|x4852));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x4877 = UINT8_MAX;
	uint8_t x4878 = 6U;
	int16_t x4879 = 31;
	volatile int32_t x4880 = -51;
	int32_t t84 = 24259;

	t84 = ((x4877<<x4878)%(x4879|x4880));

	if (t84 != 18) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint16_t x4945 = UINT16_MAX;
	uint32_t x4946 = 2U;
	static volatile uint16_t x4948 = UINT16_MAX;
	int32_t t85 = -108502;

	t85 = ((x4945<<x4946)%(x4947|x4948));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x5089 = 1;
	uint8_t x5090 = 0U;
	static uint16_t x5091 = UINT16_MAX;
	volatile int8_t x5092 = INT8_MAX;
	volatile int32_t t86 = 67;

	t86 = ((x5089<<x5090)%(x5091|x5092));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x5094 = 2U;
	int16_t x5095 = INT16_MIN;
	static uint64_t x5096 = UINT64_MAX;
	volatile uint64_t t87 = 6287115LLU;

	t87 = ((x5093<<x5094)%(x5095|x5096));

	if (t87 != 15403575779542708LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x5117 = 1U;
	int16_t x5118 = 0;
	uint64_t x5119 = UINT64_MAX;
	int32_t x5120 = -1;
	static uint64_t t88 = 32253LLU;

	t88 = ((x5117<<x5118)%(x5119|x5120));

	if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x5129 = 1U;
	static int32_t x5130 = 11;
	int32_t x5131 = -12;
	uint32_t t89 = 59065U;

	t89 = ((x5129<<x5130)%(x5131|x5132));

	if (t89 != 2048U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x5509 = INT16_MAX;
	int64_t x5512 = -3066827210298488572LL;
	int64_t t90 = 1349065725643598440LL;

	t90 = ((x5509<<x5510)%(x5511|x5512));

	if (t90 != 32767LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x5697 = 12;
	uint8_t x5698 = 6U;
	static volatile uint8_t x5700 = 28U;
	static int32_t t91 = 18;

	t91 = ((x5697<<x5698)%(x5699|x5700));

	if (t91 != 768) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint16_t x5785 = 1U;
	int8_t x5786 = 29;
	int16_t x5787 = INT16_MIN;
	volatile int8_t x5788 = 1;

	t92 = ((x5785<<x5786)%(x5787|x5788));

	if (t92 != 16384) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x5818 = 19;
	uint32_t x5819 = 64U;
	static int8_t x5820 = INT8_MAX;
	uint32_t t93 = 927866053U;

	t93 = ((x5817<<x5818)%(x5819|x5820));

	if (t93 != 49U) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x5873 = 1011850U;
	static volatile int8_t x5874 = 6;
	uint8_t x5875 = 11U;

	t94 = ((x5873<<x5874)%(x5875|x5876));

	if (t94 != 64758400LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x5929 = 4741650U;
	uint8_t x5930 = 1U;
	volatile int64_t x5931 = INT64_MIN;
	int32_t x5932 = 45;
	int64_t t95 = -8119779LL;

	t95 = ((x5929<<x5930)%(x5931|x5932));

	if (t95 != 9483300LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x5933 = UINT16_MAX;
	int8_t x5934 = 0;
	uint8_t x5936 = 54U;
	int32_t t96 = -392729;

	t96 = ((x5933<<x5934)%(x5935|x5936));

	if (t96 != 30) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x5977 = 686U;
	uint8_t x5978 = 1U;
	int8_t x5979 = INT8_MIN;
	uint16_t x5980 = UINT16_MAX;
	volatile int32_t t97 = 3500;

	t97 = ((x5977<<x5978)%(x5979|x5980));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x6141 = UINT16_MAX;
	static uint64_t x6143 = 1304863286368LLU;
	static int64_t x6144 = 5937733017943748LL;
	uint64_t t98 = 18477LLU;

	t98 = ((x6141<<x6142)%(x6143|x6144));

	if (t98 != 268431360LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x6194 = 8;
	int16_t x6195 = INT16_MAX;
	uint8_t x6196 = 2U;
	volatile int32_t t99 = -194257307;

	t99 = ((x6193<<x6194)%(x6195|x6196));

	if (t99 != 32512) { NG(); } else { ; }
	
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

