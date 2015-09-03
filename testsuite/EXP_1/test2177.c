#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t x57 = 15680U;
uint32_t x109 = UINT32_MAX;
volatile uint32_t t1 = 73746U;
int16_t x197 = 5;
volatile int64_t t2 = -6451682998507LL;
uint16_t x358 = 5U;
uint16_t x360 = 12U;
static volatile int16_t x401 = -1;
uint64_t x403 = 1483780519610926LLU;
int16_t x575 = -92;
int64_t x933 = -1LL;
volatile uint16_t x935 = UINT16_MAX;
uint16_t x936 = 0U;
int8_t x1172 = 4;
uint8_t x1228 = 3U;
static uint16_t x1440 = 6U;
volatile uint32_t t16 = 2294U;
uint32_t x1527 = 7811441U;
static int16_t x1528 = 0;
volatile uint64_t t17 = 4593171435827714451LLU;
int64_t x1535 = -73025756773178LL;
int64_t x1690 = 63365678LL;
uint16_t x1691 = 6U;
volatile uint64_t x1742 = 2683168472LLU;
volatile uint64_t x2005 = 1581062LLU;
int64_t x2007 = INT64_MIN;
volatile int8_t x2055 = 27;
static uint64_t x2061 = 102745643385LLU;
static uint8_t x2064 = 39U;
uint64_t x2084 = 11LLU;
volatile int8_t x2125 = INT8_MIN;
int8_t x2129 = 0;
volatile int16_t x2274 = -1;
uint32_t t31 = 48U;
static uint64_t x2473 = 0LLU;
int16_t x2474 = -1;
int64_t x2475 = -1LL;
int8_t x2476 = 14;
int64_t x2617 = -12027088LL;
int8_t x2618 = -1;
uint64_t x2646 = UINT64_MAX;
static volatile uint64_t t36 = 8653212878398016LLU;
volatile uint8_t x2695 = UINT8_MAX;
uint8_t x2744 = 36U;
static uint64_t t38 = 64473072LLU;
static int64_t x2811 = 21437979LL;
static int8_t x2815 = -1;
int16_t x2942 = INT16_MIN;
volatile uint64_t t45 = 3611873LLU;
uint64_t x3154 = UINT64_MAX;
static volatile uint64_t t47 = 2887632991259LLU;
uint8_t x3240 = 7U;
static volatile int32_t t48 = 1;
uint64_t t49 = 1LLU;
uint8_t x3346 = 24U;
volatile uint16_t x3348 = 13U;
uint64_t x3450 = UINT64_MAX;
volatile int16_t x3664 = 1;
uint64_t t54 = 37233083083LLU;
volatile int32_t x3735 = INT32_MIN;
static int8_t x3736 = 1;
volatile uint8_t x3831 = UINT8_MAX;
uint8_t x3852 = 0U;
volatile uint32_t t58 = 34190U;
int8_t x3992 = 0;
static volatile uint64_t t59 = UINT64_MAX;
volatile uint64_t x4081 = UINT64_MAX;
uint64_t x4083 = 21165060LLU;
int16_t x4085 = INT16_MIN;
static int16_t x4086 = -1;
volatile uint16_t x4095 = 21U;
uint16_t x4096 = 0U;
int32_t t65 = 3267342;
volatile int8_t x4158 = -1;
uint32_t x4160 = 2U;
volatile uint64_t t66 = 173101577LLU;
int64_t x4162 = 8LL;
uint16_t x4163 = 26U;
volatile int64_t t67 = -111102552355LL;
int16_t x4203 = -1;
int8_t x4204 = 0;
int32_t x4620 = 0;
volatile uint64_t x4622 = UINT64_MAX;
uint64_t t72 = 216127698806331LLU;
int64_t t73 = -1LL;
int8_t x4974 = INT8_MAX;
uint16_t x4975 = UINT16_MAX;
int16_t x4976 = 63;
uint64_t t74 = 75313731533944LLU;
uint64_t x5143 = 1323332476LLU;
int32_t x5182 = -82;
volatile int32_t t77 = -320;
int32_t x5346 = -1;
volatile uint8_t x5347 = 2U;
volatile int64_t t80 = 56410LL;
volatile uint64_t t83 = 7494160135782060062LLU;
volatile int8_t x5566 = 0;
uint64_t x5730 = 0LLU;
static uint32_t x5732 = 28U;
static uint32_t t86 = 840U;
uint16_t x5786 = 37U;
uint64_t x5863 = UINT64_MAX;
static uint16_t x5933 = 40U;
static uint64_t x5935 = 10467291454LLU;
static uint64_t t89 = 45897LLU;
int32_t x5951 = INT32_MAX;
volatile int16_t x5957 = 0;
int32_t x5959 = 0;
static volatile uint64_t t92 = 883LLU;
int32_t x6226 = INT32_MIN;
int16_t x6237 = INT16_MIN;
volatile uint64_t x6238 = 695672279920019598LLU;
int32_t t97 = 9;
uint16_t x6376 = 38U;
int16_t x6415 = 0;


void f0(void) {
	uint32_t x58 = UINT32_MAX;
	static volatile int8_t x59 = INT8_MIN;
	uint16_t x60 = 0U;
	uint32_t t0 = 244U;

	t0 = (((x57^x58)|x59)<<x60);

	if (t0 != 4294967231U) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x110 = 4U;
	uint16_t x111 = 1637U;
	volatile int8_t x112 = 6;

	t1 = (((x109^x110)|x111)<<x112);

	if (t1 != 4294967232U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x198 = 149LL;
	uint8_t x199 = 55U;
	uint16_t x200 = 14U;

	t2 = (((x197^x198)|x199)<<x200);

	if (t2 != 2998272LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x237 = INT8_MIN;
	static int32_t x238 = -1;
	volatile uint8_t x239 = 6U;
	static uint32_t x240 = 8U;
	int32_t t3 = 138185;

	t3 = (((x237^x238)|x239)<<x240);

	if (t3 != 32512) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x357 = UINT8_MAX;
	uint8_t x359 = UINT8_MAX;
	volatile int32_t t4 = -466408;

	t4 = (((x357^x358)|x359)<<x360);

	if (t4 != 1044480) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x402 = -836;
	volatile uint32_t x404 = 6U;
	volatile uint64_t t5 = 727335858628753LLU;

	t5 = (((x401^x402)|x403)<<x404);

	if (t5 != 94961953255119808LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x485 = INT32_MIN;
	uint64_t x486 = 295337279936LLU;
	static int32_t x487 = INT32_MIN;
	uint8_t x488 = 0U;
	static volatile uint64_t t6 = 17515749766LLU;

	t6 = (((x485^x486)|x487)<<x488);

	if (t6 != 18446744072694088128LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x569 = 15372185646702373LLU;
	uint8_t x570 = UINT8_MAX;
	int8_t x571 = -1;
	int8_t x572 = 4;
	volatile uint64_t t7 = 199329803512506LLU;

	t7 = (((x569^x570)|x571)<<x572);

	if (t7 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x573 = 37U;
	uint64_t x574 = UINT64_MAX;
	volatile uint64_t x576 = 3LLU;
	uint64_t t8 = 214LLU;

	t8 = (((x573^x574)|x575)<<x576);

	if (t8 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x865 = 345U;
	int64_t x866 = 27LL;
	int8_t x867 = 63;
	static int8_t x868 = 14;
	volatile int64_t t9 = -7555LL;

	t9 = (((x865^x866)|x867)<<x868);

	if (t9 != 6275072LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x934 = -1;
	int64_t t10 = 632298455303889245LL;

	t10 = (((x933^x934)|x935)<<x936);

	if (t10 != 65535LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x1169 = -1;
	uint32_t x1170 = 0U;
	static int32_t x1171 = 16742125;
	volatile uint32_t t11 = 1007560794U;

	t11 = (((x1169^x1170)|x1171)<<x1172);

	if (t11 != 4294967280U) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x1225 = UINT16_MAX;
	int8_t x1226 = 1;
	int32_t x1227 = 8251604;
	volatile int32_t t12 = -10;

	t12 = (((x1225^x1226)|x1227)<<x1228);

	if (t12 != 66060272) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x1269 = INT16_MAX;
	volatile int8_t x1270 = INT8_MAX;
	static uint64_t x1271 = 3LLU;
	uint64_t x1272 = 24LLU;
	volatile uint64_t t13 = 0LLU;

	t13 = (((x1269^x1270)|x1271)<<x1272);

	if (t13 != 547658661888LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x1333 = -1;
	static volatile int32_t x1334 = -1;
	int8_t x1335 = INT8_MAX;
	static uint32_t x1336 = 3U;
	volatile int32_t t14 = 10;

	t14 = (((x1333^x1334)|x1335)<<x1336);

	if (t14 != 1016) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x1437 = INT16_MIN;
	uint32_t x1438 = 19953U;
	int8_t x1439 = -1;
	volatile uint32_t t15 = 30U;

	t15 = (((x1437^x1438)|x1439)<<x1440);

	if (t15 != 4294967232U) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x1481 = 3297U;
	uint32_t x1482 = UINT32_MAX;
	uint16_t x1483 = 8U;
	uint16_t x1484 = 0U;

	t16 = (((x1481^x1482)|x1483)<<x1484);

	if (t16 != 4294963998U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x1525 = UINT64_MAX;
	static uint16_t x1526 = UINT16_MAX;

	t17 = (((x1525^x1526)|x1527)<<x1528);

	if (t17 != 18446744073709498737LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x1533 = -1;
	uint64_t x1534 = 253468317417760LLU;
	static int8_t x1536 = 2;
	uint64_t t18 = 215LLU;

	t18 = (((x1533^x1534)|x1535)<<x1536);

	if (t18 != 18446453766132464508LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1613 = INT8_MIN;
	volatile int8_t x1614 = -1;
	uint8_t x1615 = 3U;
	static volatile uint8_t x1616 = 2U;
	volatile int32_t t19 = -13;

	t19 = (((x1613^x1614)|x1615)<<x1616);

	if (t19 != 508) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x1689 = 76U;
	volatile int16_t x1692 = 0;
	int64_t t20 = 1LL;

	t20 = (((x1689^x1690)|x1691)<<x1692);

	if (t20 != 63365734LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1741 = INT32_MIN;
	int8_t x1743 = INT8_MIN;
	int8_t x1744 = 53;
	volatile uint64_t t21 = 582696LLU;

	t21 = (((x1741^x1742)|x1743)<<x1744);

	if (t21 != 18086456103519911936LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x2006 = INT8_MIN;
	int16_t x2008 = 0;
	static volatile uint64_t t22 = 811581677793539414LLU;

	t22 = (((x2005^x2006)|x2007)<<x2008);

	if (t22 != 18446744073707970438LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x2025 = 16681739323917418LL;
	uint8_t x2026 = 86U;
	volatile int16_t x2027 = 1;
	int8_t x2028 = 1;
	int64_t t23 = -32058LL;

	t23 = (((x2025^x2026)|x2027)<<x2028);

	if (t23 != 33363478647834746LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x2053 = INT16_MIN;
	int8_t x2054 = -7;
	uint8_t x2056 = 2U;
	int32_t t24 = 3;

	t24 = (((x2053^x2054)|x2055)<<x2056);

	if (t24 != 131052) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x2062 = 81U;
	int32_t x2063 = 1149;
	volatile uint64_t t25 = 997773014284LLU;

	t25 = (((x2061^x2062)|x2063)<<x2064);

	if (t25 != 1085014017207959552LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x2081 = INT16_MIN;
	static int8_t x2082 = INT8_MIN;
	static int32_t x2083 = 2;
	int32_t t26 = -8;

	t26 = (((x2081^x2082)|x2083)<<x2084);

	if (t26 != 66850816) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x2126 = 9959065860819813LLU;
	uint8_t x2127 = 80U;
	uint16_t x2128 = 6U;
	volatile uint64_t t27 = 512009LLU;

	t27 = (((x2125^x2126)|x2127)<<x2128);

	if (t27 != 17809363858617089344LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x2130 = 1U;
	uint64_t x2131 = UINT64_MAX;
	int8_t x2132 = 0;
	static volatile uint64_t t28 = UINT64_MAX;

	t28 = (((x2129^x2130)|x2131)<<x2132);

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x2141 = INT8_MAX;
	uint64_t x2142 = 3893LLU;
	static int16_t x2143 = 119;
	static uint8_t x2144 = 10U;
	volatile uint64_t t29 = 2692338047LLU;

	t29 = (((x2141^x2142)|x2143)<<x2144);

	if (t29 != 4062208LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x2273 = UINT64_MAX;
	int64_t x2275 = INT64_MIN;
	int16_t x2276 = 15;
	uint64_t t30 = 1376LLU;

	t30 = (((x2273^x2274)|x2275)<<x2276);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int16_t x2373 = INT16_MIN;
	static int32_t x2374 = 703528;
	uint32_t x2375 = 3593771U;
	uint64_t x2376 = 2LLU;

	t31 = (((x2373^x2374)|x2375)<<x2376);

	if (t31 != 4292868268U) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x2469 = UINT64_MAX;
	int64_t x2470 = -1LL;
	uint16_t x2471 = UINT16_MAX;
	int8_t x2472 = 1;
	volatile uint64_t t32 = 1LLU;

	t32 = (((x2469^x2470)|x2471)<<x2472);

	if (t32 != 131070LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t t33 = 427LLU;

	t33 = (((x2473^x2474)|x2475)<<x2476);

	if (t33 != 18446744073709535232LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x2533 = 0LL;
	static uint64_t x2534 = 172426789384LLU;
	static uint64_t x2535 = UINT64_MAX;
	static uint8_t x2536 = 7U;
	volatile uint64_t t34 = 130LLU;

	t34 = (((x2533^x2534)|x2535)<<x2536);

	if (t34 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x2619 = INT16_MAX;
	uint32_t x2620 = 0U;
	int64_t t35 = 13380LL;

	t35 = (((x2617^x2618)|x2619)<<x2620);

	if (t35 != 12058623LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x2645 = 1026201U;
	static volatile int16_t x2647 = INT16_MIN;
	int64_t x2648 = 12LL;

	t36 = (((x2645^x2646)|x2647)<<x2648);

	if (t36 != 18446744073666977792LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x2693 = 1590;
	uint64_t x2694 = 358877LLU;
	int8_t x2696 = 24;
	volatile uint64_t t37 = 2LLU;

	t37 = (((x2693^x2694)|x2695)<<x2696);

	if (t37 != 6047297175552LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x2741 = INT64_MIN;
	static uint64_t x2742 = UINT64_MAX;
	int8_t x2743 = -1;

	t38 = (((x2741^x2742)|x2743)<<x2744);

	if (t38 != 18446744004990074880LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x2793 = 6664U;
	uint16_t x2794 = UINT16_MAX;
	uint16_t x2795 = UINT16_MAX;
	uint8_t x2796 = 6U;
	volatile int32_t t39 = 12;

	t39 = (((x2793^x2794)|x2795)<<x2796);

	if (t39 != 4194240) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x2809 = 995146798174789701LLU;
	int16_t x2810 = INT16_MIN;
	static int16_t x2812 = 0;
	volatile uint64_t t40 = 955428114809LLU;

	t40 = (((x2809^x2810)|x2811)<<x2812);

	if (t40 != 17451597275534982751LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x2813 = UINT32_MAX;
	uint16_t x2814 = 51U;
	int16_t x2816 = 5;
	volatile uint32_t t41 = 53496U;

	t41 = (((x2813^x2814)|x2815)<<x2816);

	if (t41 != 4294967264U) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x2881 = 25934569984054778LLU;
	static int8_t x2882 = INT8_MIN;
	volatile uint32_t x2883 = 0U;
	uint8_t x2884 = 2U;
	uint64_t t42 = 17286LLU;

	t42 = (((x2881^x2882)|x2883)<<x2884);

	if (t42 != 18343005793773332968LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x2925 = 1LLU;
	uint16_t x2926 = 4087U;
	int64_t x2927 = -67274231223390726LL;
	volatile uint8_t x2928 = 7U;
	uint64_t t43 = 129143758594160LLU;

	t43 = (((x2925^x2926)|x2927)<<x2928);

	if (t43 != 9835642477115604736LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x2941 = -1;
	uint64_t x2943 = 3656842731797283847LLU;
	int64_t x2944 = 1LL;
	uint64_t t44 = 3317LLU;

	t44 = (((x2941^x2942)|x2943)<<x2944);

	if (t44 != 7313685463594631166LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x2953 = UINT64_MAX;
	volatile int64_t x2954 = INT64_MIN;
	int64_t x2955 = -8672225LL;
	int8_t x2956 = 31;

	t45 = (((x2953^x2954)|x2955)<<x2956);

	if (t45 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2957 = -1;
	volatile uint64_t x2958 = 1667234281731437LLU;
	static int64_t x2959 = INT64_MIN;
	uint8_t x2960 = 10U;
	volatile uint64_t t46 = 1414797508LLU;

	t46 = (((x2957^x2958)|x2959)<<x2960);

	if (t46 != 16739496169216559104LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x3153 = UINT8_MAX;
	int32_t x3155 = -1;
	volatile int64_t x3156 = 1LL;

	t47 = (((x3153^x3154)|x3155)<<x3156);

	if (t47 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x3237 = INT8_MIN;
	static int32_t x3238 = -339;
	volatile int8_t x3239 = INT8_MAX;

	t48 = (((x3237^x3238)|x3239)<<x3240);

	if (t48 != 49024) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x3269 = -27LL;
	uint64_t x3270 = 2185LLU;
	int64_t x3271 = INT64_MIN;
	uint8_t x3272 = 7U;

	t49 = (((x3269^x3270)|x3271)<<x3272);

	if (t49 != 18446744073709270528LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x3293 = INT16_MIN;
	volatile int64_t x3294 = INT64_MAX;
	uint64_t x3295 = 180158175814680LLU;
	static int8_t x3296 = 16;
	volatile uint64_t t50 = 20346LLU;

	t50 = (((x3293^x3294)|x3295)<<x3296);

	if (t50 != 11806846211732733952LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x3345 = 7787885117LL;
	uint16_t x3347 = 0U;
	int64_t t51 = -52LL;

	t51 = (((x3345^x3346)|x3347)<<x3348);

	if (t51 != 63798354681856LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x3381 = -13599;
	int32_t x3382 = INT32_MIN;
	uint64_t x3383 = 51949719332LLU;
	int32_t x3384 = 1;
	static volatile uint64_t t52 = 172488506299555004LLU;

	t52 = (((x3381^x3382)|x3383)<<x3384);

	if (t52 != 107374157770LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x3449 = 16U;
	uint64_t x3451 = UINT64_MAX;
	static uint8_t x3452 = 10U;
	volatile uint64_t t53 = 254818255443911LLU;

	t53 = (((x3449^x3450)|x3451)<<x3452);

	if (t53 != 18446744073709550592LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x3661 = INT32_MIN;
	int64_t x3662 = -9080373846LL;
	uint64_t x3663 = 13970865917LLU;

	t54 = (((x3661^x3662)|x3663)<<x3664);

	if (t54 != 29091495934LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x3697 = INT8_MAX;
	int64_t x3698 = 257834LL;
	int16_t x3699 = 5;
	volatile uint32_t x3700 = 10U;
	volatile int64_t t55 = -3515598LL;

	t55 = (((x3697^x3698)|x3699)<<x3700);

	if (t55 != 264066048LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x3733 = 4U;
	volatile uint8_t x3734 = 0U;
	uint32_t t56 = 61879594U;

	t56 = (((x3733^x3734)|x3735)<<x3736);

	if (t56 != 8U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x3829 = -25;
	uint64_t x3830 = 549971447943LLU;
	uint64_t x3832 = 26LLU;
	volatile uint64_t t57 = 79753709282LLU;

	t57 = (((x3829^x3830)|x3831)<<x3832);

	if (t57 != 18432273126231375872LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x3849 = 43044536U;
	int8_t x3850 = INT8_MIN;
	static int32_t x3851 = 271;

	t58 = (((x3849^x3850)|x3851)<<x3852);

	if (t58 != 4251922751U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x3989 = -17076615362262686LL;
	volatile int64_t x3990 = -59819576726LL;
	static uint64_t x3991 = UINT64_MAX;

	t59 = (((x3989^x3990)|x3991)<<x3992);

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x4045 = INT8_MIN;
	uint64_t x4046 = 575594776509719540LLU;
	static uint16_t x4047 = 1489U;
	volatile uint32_t x4048 = 9U;
	volatile uint64_t t60 = 491046763335427580LLU;

	t60 = (((x4045^x4046)|x4047)<<x4048);

	if (t60 != 443379606376671744LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x4065 = -1;
	uint16_t x4066 = 20U;
	uint64_t x4067 = UINT64_MAX;
	static uint16_t x4068 = 0U;
	static uint64_t t61 = UINT64_MAX;

	t61 = (((x4065^x4066)|x4067)<<x4068);

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x4082 = INT16_MIN;
	uint8_t x4084 = 6U;
	volatile uint64_t t62 = 886306718550391LLU;

	t62 = (((x4081^x4082)|x4083)<<x4084);

	if (t62 != 1354760128LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x4087 = 14LL;
	int16_t x4088 = 0;
	volatile int64_t t63 = 15125449134966LL;

	t63 = (((x4085^x4086)|x4087)<<x4088);

	if (t63 != 32767LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x4093 = UINT8_MAX;
	uint16_t x4094 = 2923U;
	int32_t t64 = 0;

	t64 = (((x4093^x4094)|x4095)<<x4096);

	if (t64 != 2965) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x4137 = 13U;
	int8_t x4138 = INT8_MAX;
	static volatile uint8_t x4139 = 44U;
	int32_t x4140 = 7;

	t65 = (((x4137^x4138)|x4139)<<x4140);

	if (t65 != 16128) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x4157 = 6089U;
	static volatile uint64_t x4159 = UINT64_MAX;

	t66 = (((x4157^x4158)|x4159)<<x4160);

	if (t66 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x4161 = INT8_MAX;
	int8_t x4164 = 8;

	t67 = (((x4161^x4162)|x4163)<<x4164);

	if (t67 != 32512LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x4201 = INT8_MAX;
	uint32_t x4202 = 269U;
	static volatile uint32_t t68 = UINT32_MAX;

	t68 = (((x4201^x4202)|x4203)<<x4204);

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x4441 = 0U;
	int64_t x4442 = -1LL;
	uint64_t x4443 = 0LLU;
	volatile uint8_t x4444 = 1U;
	volatile uint64_t t69 = 221602927LLU;

	t69 = (((x4441^x4442)|x4443)<<x4444);

	if (t69 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x4457 = 547887830833837LLU;
	int32_t x4458 = INT32_MIN;
	int32_t x4459 = INT32_MAX;
	static uint8_t x4460 = 23U;
	uint64_t t70 = 12754251LLU;

	t70 = (((x4457^x4458)|x4459)<<x4460);

	if (t70 != 15672526703240937472LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x4617 = 3041529317LLU;
	static int8_t x4618 = 56;
	volatile int16_t x4619 = -4048;
	uint64_t t71 = 1742231LLU;

	t71 = (((x4617^x4618)|x4619)<<x4620);

	if (t71 != 18446744073709551101LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x4621 = -1;
	uint8_t x4623 = UINT8_MAX;
	static uint16_t x4624 = 45U;

	t72 = (((x4621^x4622)|x4623)<<x4624);

	if (t72 != 8972014882652160LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x4793 = 1587375715LL;
	volatile uint32_t x4794 = UINT32_MAX;
	int8_t x4795 = INT8_MAX;
	int8_t x4796 = 0;

	t73 = (((x4793^x4794)|x4795)<<x4796);

	if (t73 != 2707591679LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x4973 = UINT64_MAX;

	t74 = (((x4973^x4974)|x4975)<<x4976);

	if (t74 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x5037 = INT8_MIN;
	uint64_t x5038 = UINT64_MAX;
	uint64_t x5039 = 119LLU;
	uint8_t x5040 = 3U;
	uint64_t t75 = 37801LLU;

	t75 = (((x5037^x5038)|x5039)<<x5040);

	if (t75 != 1016LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x5141 = INT64_MAX;
	int32_t x5142 = INT32_MAX;
	volatile uint8_t x5144 = 41U;
	volatile uint64_t t76 = 1939828LLU;

	t76 = (((x5141^x5142)|x5143)<<x5144);

	if (t76 != 13900069978809303040LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x5181 = -3;
	uint16_t x5183 = 71U;
	uint8_t x5184 = 6U;

	t77 = (((x5181^x5182)|x5183)<<x5184);

	if (t77 != 5568) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x5253 = INT16_MIN;
	uint64_t x5254 = 6257759272616360LLU;
	int64_t x5255 = -1LL;
	uint8_t x5256 = 5U;
	uint64_t t78 = 1604599LLU;

	t78 = (((x5253^x5254)|x5255)<<x5256);

	if (t78 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x5333 = UINT32_MAX;
	int32_t x5334 = -1;
	static int8_t x5335 = -1;
	int8_t x5336 = 9;
	uint32_t t79 = 1981009150U;

	t79 = (((x5333^x5334)|x5335)<<x5336);

	if (t79 != 4294966784U) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int64_t x5345 = -93000418LL;
	uint16_t x5348 = 1U;

	t80 = (((x5345^x5346)|x5347)<<x5348);

	if (t80 != 186000838LL) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int32_t x5349 = 58320715;
	uint64_t x5350 = UINT64_MAX;
	uint16_t x5351 = 153U;
	static uint8_t x5352 = 3U;
	volatile uint64_t t81 = 4136021168221881LLU;

	t81 = (((x5349^x5350)|x5351)<<x5352);

	if (t81 != 18446744073242985960LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x5477 = -6501302152609LL;
	int16_t x5478 = INT16_MIN;
	int16_t x5479 = INT16_MAX;
	volatile int8_t x5480 = 1;
	int64_t t82 = -74094973273882LL;

	t82 = (((x5477^x5478)|x5479)<<x5480);

	if (t82 != 13002604347390LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x5541 = UINT64_MAX;
	volatile int8_t x5542 = -1;
	uint8_t x5543 = UINT8_MAX;
	int8_t x5544 = 1;

	t83 = (((x5541^x5542)|x5543)<<x5544);

	if (t83 != 510LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x5565 = INT16_MAX;
	uint8_t x5567 = UINT8_MAX;
	uint64_t x5568 = 5LLU;
	volatile int32_t t84 = 85744466;

	t84 = (((x5565^x5566)|x5567)<<x5568);

	if (t84 != 1048544) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x5729 = UINT16_MAX;
	int32_t x5731 = 24454823;
	static volatile uint64_t t85 = 127371117LLU;

	t85 = (((x5729^x5730)|x5731)<<x5732);

	if (t85 != 6579477312176128LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x5745 = INT16_MIN;
	uint32_t x5746 = 23775U;
	int16_t x5747 = -1;
	static uint8_t x5748 = 17U;

	t86 = (((x5745^x5746)|x5747)<<x5748);

	if (t86 != 4294836224U) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x5785 = 868487947998233LLU;
	int64_t x5787 = INT64_MAX;
	static uint8_t x5788 = 0U;
	static volatile uint64_t t87 = 2891560930666LLU;

	t87 = (((x5785^x5786)|x5787)<<x5788);

	if (t87 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x5861 = 5U;
	volatile uint8_t x5862 = 61U;
	static int64_t x5864 = 6LL;
	volatile uint64_t t88 = 16864245242LLU;

	t88 = (((x5861^x5862)|x5863)<<x5864);

	if (t88 != 18446744073709551552LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x5934 = -1LL;
	uint8_t x5936 = 1U;

	t89 = (((x5933^x5934)|x5935)<<x5936);

	if (t89 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x5949 = INT64_MIN;
	int16_t x5950 = -1;
	static uint16_t x5952 = 0U;
	static int64_t t90 = INT64_MAX;

	t90 = (((x5949^x5950)|x5951)<<x5952);

	if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x5958 = UINT8_MAX;
	volatile uint8_t x5960 = 13U;
	int32_t t91 = -494781016;

	t91 = (((x5957^x5958)|x5959)<<x5960);

	if (t91 != 2088960) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x5977 = INT32_MIN;
	int32_t x5978 = INT32_MIN;
	uint64_t x5979 = 3553LLU;
	static int32_t x5980 = 0;

	t92 = (((x5977^x5978)|x5979)<<x5980);

	if (t92 != 3553LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x6061 = 2114519194228LLU;
	int16_t x6062 = INT16_MIN;
	uint16_t x6063 = UINT16_MAX;
	volatile uint8_t x6064 = 10U;
	volatile uint64_t t93 = 29301LLU;

	t93 = (((x6061^x6062)|x6063)<<x6064);

	if (t93 != 18444578806078372864LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x6217 = 644557590540LLU;
	int32_t x6218 = -1;
	uint32_t x6219 = UINT32_MAX;
	volatile uint8_t x6220 = 11U;
	uint64_t t94 = 81LLU;

	t94 = (((x6217^x6218)|x6219)<<x6220);

	if (t94 != 18445424659756218368LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x6225 = INT8_MIN;
	uint32_t x6227 = UINT32_MAX;
	uint8_t x6228 = 18U;
	uint32_t t95 = 1U;

	t95 = (((x6225^x6226)|x6227)<<x6228);

	if (t95 != 4294705152U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x6239 = -1;
	static volatile uint8_t x6240 = 35U;
	uint64_t t96 = 1375LLU;

	t96 = (((x6237^x6238)|x6239)<<x6240);

	if (t96 != 18446744039349813248LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint8_t x6257 = 0U;
	volatile uint8_t x6258 = 30U;
	static int8_t x6259 = INT8_MAX;
	int8_t x6260 = 7;

	t97 = (((x6257^x6258)|x6259)<<x6260);

	if (t97 != 16256) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x6373 = INT16_MIN;
	uint64_t x6374 = 338684032LLU;
	static int16_t x6375 = INT16_MIN;
	volatile uint64_t t98 = 4312029LLU;

	t98 = (((x6373^x6374)|x6375)<<x6376);

	if (t98 != 18445090408221376512LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x6413 = 28U;
	static volatile int8_t x6414 = INT8_MAX;
	uint32_t x6416 = 1U;
	int32_t t99 = 7477;

	t99 = (((x6413^x6414)|x6415)<<x6416);

	if (t99 != 198) { NG(); } else { ; }
	
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

