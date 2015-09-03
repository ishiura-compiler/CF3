#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x133 = INT8_MIN;
int64_t x240 = -1LL;
static volatile int16_t x375 = 0;
uint64_t t4 = 408072780452LLU;
uint8_t x485 = 9U;
static volatile int16_t x487 = 10;
uint8_t x506 = UINT8_MAX;
int64_t x509 = INT64_MAX;
int8_t x512 = INT8_MAX;
volatile int64_t t8 = 1004717LL;
int16_t x660 = -3596;
volatile int32_t t11 = 3537979;
int8_t x901 = -1;
static volatile int32_t t13 = -1;
static volatile int8_t x1009 = INT8_MAX;
volatile int8_t x1012 = INT8_MIN;
int32_t x1199 = 1;
int32_t x1321 = -13124819;
static uint64_t t21 = 26045994585219LLU;
uint8_t x1493 = UINT8_MAX;
static uint16_t x1494 = UINT16_MAX;
static int16_t x1496 = INT16_MIN;
static uint8_t x1514 = UINT8_MAX;
volatile int32_t t23 = -8166641;
static uint16_t x1523 = 8U;
int16_t x1595 = 3;
static int16_t x1596 = -7928;
int8_t x1774 = 0;
volatile uint32_t x1898 = 15500397U;
static int64_t x1900 = INT64_MAX;
int64_t x1969 = 7221208034175LL;
int32_t x1981 = 90;
static int64_t x2025 = -1LL;
int64_t t32 = -20570LL;
uint8_t x2365 = 1U;
uint16_t x2524 = 5U;
static uint64_t x2646 = UINT64_MAX;
int8_t x2647 = 6;
volatile int8_t x2668 = INT8_MIN;
uint16_t x2854 = UINT16_MAX;
uint32_t x2856 = 204189U;
static uint32_t x2950 = 5561U;
static uint8_t x2951 = 13U;
static volatile int32_t x3037 = -18142334;
int64_t x3040 = INT64_MIN;
int16_t x3112 = -126;
volatile int64_t t45 = 27LL;
volatile int32_t t46 = 601575226;
int16_t x3191 = 7;
uint64_t x3223 = 10LLU;
volatile int64_t t50 = -46453187100054LL;
uint8_t x3237 = UINT8_MAX;
static volatile uint16_t x3238 = 3U;
volatile uint32_t t51 = 4U;
volatile uint64_t t52 = 3816643486LLU;
volatile uint16_t x3581 = 3U;
volatile int64_t t59 = 29307732LL;
uint8_t x3787 = 0U;
static int16_t x3849 = INT16_MAX;
volatile int32_t t63 = -834;
int32_t x3853 = INT32_MIN;
volatile uint32_t x3856 = 119490U;
int64_t x3870 = 98521970100318820LL;
uint32_t x3872 = 327949521U;
int32_t x3889 = INT32_MIN;
int32_t t67 = INT32_MAX;
uint32_t x4091 = 11U;
uint8_t x4331 = 0U;
volatile int32_t t73 = 1;
static volatile uint8_t x4611 = 0U;
volatile int8_t x4665 = INT8_MIN;
static uint8_t x4666 = UINT8_MAX;
int8_t x4668 = -1;
int16_t x4744 = -2;
uint8_t x4827 = 3U;
uint64_t x4828 = 429288LLU;
int8_t x5035 = 2;
int64_t x5245 = -25100144867443LL;
int16_t x5327 = 0;
volatile int64_t t83 = 50423855271390LL;
int32_t x5435 = 0;
uint32_t x5509 = 11176046U;
uint64_t t87 = 20312342435715855LLU;
int8_t x5589 = -1;
static int8_t x5595 = 6;
static volatile uint64_t t89 = 17564272LLU;
uint8_t x5652 = 19U;
uint16_t x5799 = 12U;
static int64_t x5872 = INT64_MAX;
volatile uint8_t x6003 = 14U;
int32_t x6004 = -1;
volatile int64_t x6061 = -1LL;
volatile uint64_t t96 = 66923490LLU;
int8_t x6101 = INT8_MAX;
uint64_t t98 = 355698543LLU;


void f0(void) {
	int8_t x37 = INT8_MIN;
	int16_t x38 = 667;
	int8_t x39 = 0;
	int64_t x40 = INT64_MIN;
	volatile int64_t t0 = 14LL;

	t0 = (x37^((x38<<x39)&x40));

	if (t0 != -128LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x134 = 2;
	volatile uint16_t x135 = 4U;
	int64_t x136 = INT64_MAX;
	volatile int64_t t1 = 6759394852LL;

	t1 = (x133^((x134<<x135)&x136));

	if (t1 != -96LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x173 = 388219U;
	static int8_t x174 = INT8_MAX;
	int8_t x175 = 8;
	uint16_t x176 = 222U;
	uint32_t t2 = 203699U;

	t2 = (x173^((x174<<x175)&x176));

	if (t2 != 388219U) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x237 = 2U;
	volatile uint32_t x238 = 4799U;
	uint8_t x239 = 1U;
	int64_t t3 = -36696471500LL;

	t3 = (x237^((x238<<x239)&x240));

	if (t3 != 9596LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x373 = UINT8_MAX;
	volatile uint64_t x374 = UINT64_MAX;
	int32_t x376 = INT32_MAX;

	t4 = (x373^((x374<<x375)&x376));

	if (t4 != 2147483392LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x486 = 9U;
	int64_t x488 = 19LL;
	volatile int64_t t5 = 1535LL;

	t5 = (x485^((x486<<x487)&x488));

	if (t5 != 9LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x505 = INT8_MAX;
	static uint64_t x507 = 0LLU;
	int16_t x508 = -1;
	int32_t t6 = -27056819;

	t6 = (x505^((x506<<x507)&x508));

	if (t6 != 128) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x510 = 1U;
	int8_t x511 = 15;
	volatile int64_t t7 = INT64_MAX;

	t7 = (x509^((x510<<x511)&x512));

	if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x521 = INT64_MIN;
	uint16_t x522 = UINT16_MAX;
	uint32_t x523 = 0U;
	static volatile int16_t x524 = -1;

	t8 = (x521^((x522<<x523)&x524));

	if (t8 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x613 = INT16_MIN;
	int32_t x614 = INT32_MAX;
	uint8_t x615 = 0U;
	int64_t x616 = -30098973982403LL;
	volatile int64_t t9 = 2895LL;

	t9 = (x613^((x614<<x615)&x616));

	if (t9 != -156860099LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x645 = INT8_MIN;
	volatile int16_t x646 = INT16_MAX;
	int8_t x647 = 4;
	int64_t x648 = INT64_MAX;
	volatile int64_t t10 = -878883944651132010LL;

	t10 = (x645^((x646<<x647)&x648));

	if (t10 != -524176LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x657 = INT32_MIN;
	uint8_t x658 = 41U;
	int8_t x659 = 1;

	t11 = (x657^((x658<<x659)&x660));

	if (t11 != -2147483568) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x801 = 0;
	uint64_t x802 = 38498200LLU;
	static int16_t x803 = 12;
	volatile int8_t x804 = -1;
	uint64_t t12 = 0LLU;

	t12 = (x801^((x802<<x803)&x804));

	if (t12 != 157688627200LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x902 = 0U;
	volatile int8_t x903 = 26;
	volatile int32_t x904 = 593979;

	t13 = (x901^((x902<<x903)&x904));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x961 = UINT16_MAX;
	uint8_t x962 = 70U;
	uint8_t x963 = 4U;
	static int64_t x964 = 13LL;
	static volatile int64_t t14 = 41675865805428LL;

	t14 = (x961^((x962<<x963)&x964));

	if (t14 != 65535LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x1010 = INT8_MAX;
	uint64_t x1011 = 0LLU;
	volatile int32_t t15 = 0;

	t15 = (x1009^((x1010<<x1011)&x1012));

	if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x1037 = 2924U;
	int16_t x1038 = 1;
	uint8_t x1039 = 3U;
	uint8_t x1040 = 5U;
	uint32_t t16 = 9U;

	t16 = (x1037^((x1038<<x1039)&x1040));

	if (t16 != 2924U) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x1073 = UINT8_MAX;
	volatile int8_t x1074 = INT8_MAX;
	uint8_t x1075 = 12U;
	static volatile int64_t x1076 = INT64_MIN;
	int64_t t17 = -248153661221721LL;

	t17 = (x1073^((x1074<<x1075)&x1076));

	if (t17 != 255LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x1133 = -1;
	int64_t x1134 = 317924LL;
	int8_t x1135 = 0;
	static int64_t x1136 = INT64_MIN;
	int64_t t18 = 1375312611714755LL;

	t18 = (x1133^((x1134<<x1135)&x1136));

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x1197 = 3;
	int16_t x1198 = INT16_MAX;
	int8_t x1200 = 0;
	int32_t t19 = -2;

	t19 = (x1197^((x1198<<x1199)&x1200));

	if (t19 != 3) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x1322 = 2LLU;
	int8_t x1323 = 1;
	int32_t x1324 = INT32_MIN;
	uint64_t t20 = 29LLU;

	t20 = (x1321^((x1322<<x1323)&x1324));

	if (t20 != 18446744073696426797LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x1381 = UINT16_MAX;
	uint64_t x1382 = 97185LLU;
	uint8_t x1383 = 3U;
	int16_t x1384 = -1;

	t21 = (x1381^((x1382<<x1383)&x1384));

	if (t21 != 729847LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x1495 = 7U;
	int32_t t22 = -772493;

	t22 = (x1493^((x1494<<x1495)&x1496));

	if (t22 != 8356095) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1513 = 10936;
	volatile int8_t x1515 = 5;
	int8_t x1516 = INT8_MAX;

	t23 = (x1513^((x1514<<x1515)&x1516));

	if (t23 != 10968) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x1517 = INT64_MAX;
	uint8_t x1518 = UINT8_MAX;
	volatile uint32_t x1519 = 0U;
	int32_t x1520 = INT32_MIN;
	int64_t t24 = INT64_MAX;

	t24 = (x1517^((x1518<<x1519)&x1520));

	if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x1521 = UINT64_MAX;
	volatile uint32_t x1522 = 1295U;
	static int32_t x1524 = INT32_MIN;
	uint64_t t25 = UINT64_MAX;

	t25 = (x1521^((x1522<<x1523)&x1524));

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x1593 = -137197;
	int32_t x1594 = 213403;
	static int32_t t26 = -24;

	t26 = (x1593^((x1594<<x1595)&x1596));

	if (t26 != -1578981) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1621 = -1;
	uint32_t x1622 = 1U;
	int32_t x1623 = 1;
	int16_t x1624 = INT16_MAX;
	uint32_t t27 = 85U;

	t27 = (x1621^((x1622<<x1623)&x1624));

	if (t27 != 4294967293U) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x1773 = INT64_MIN;
	uint32_t x1775 = 13U;
	int64_t x1776 = INT64_MIN;
	volatile int64_t t28 = INT64_MIN;

	t28 = (x1773^((x1774<<x1775)&x1776));

	if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1897 = 2041111LL;
	volatile int8_t x1899 = 0;
	volatile int64_t t29 = 327489279LL;

	t29 = (x1897^((x1898<<x1899)&x1900));

	if (t29 != 15966586LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1970 = INT32_MAX;
	uint16_t x1971 = 0U;
	static uint8_t x1972 = 0U;
	static volatile int64_t t30 = 0LL;

	t30 = (x1969^((x1970<<x1971)&x1972));

	if (t30 != 7221208034175LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1982 = INT32_MAX;
	static volatile int8_t x1983 = 0;
	int32_t x1984 = INT32_MIN;
	volatile int32_t t31 = -1414227;

	t31 = (x1981^((x1982<<x1983)&x1984));

	if (t31 != 90) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x2026 = 48356;
	uint8_t x2027 = 1U;
	volatile uint32_t x2028 = UINT32_MAX;

	t32 = (x2025^((x2026<<x2027)&x2028));

	if (t32 != -96713LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x2185 = 15661U;
	uint32_t x2186 = 6071U;
	uint16_t x2187 = 14U;
	int32_t x2188 = -1;
	volatile uint32_t t33 = 49354372U;

	t33 = (x2185^((x2186<<x2187)&x2188));

	if (t33 != 99482925U) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint8_t x2349 = UINT8_MAX;
	static volatile uint32_t x2350 = 819380998U;
	static volatile int8_t x2351 = 10;
	int32_t x2352 = -29;
	static volatile uint32_t t34 = 1897411U;

	t34 = (x2349^((x2350<<x2351)&x2352));

	if (t34 != 1527519487U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x2366 = INT16_MAX;
	uint8_t x2367 = 4U;
	int32_t x2368 = INT32_MAX;
	static volatile int32_t t35 = 1;

	t35 = (x2365^((x2366<<x2367)&x2368));

	if (t35 != 524273) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x2481 = 302731U;
	static uint8_t x2482 = UINT8_MAX;
	uint8_t x2483 = 2U;
	int8_t x2484 = INT8_MIN;
	volatile uint32_t t36 = 80U;

	t36 = (x2481^((x2482<<x2483)&x2484));

	if (t36 != 302347U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x2521 = -1;
	uint64_t x2522 = UINT64_MAX;
	uint64_t x2523 = 0LLU;
	uint64_t t37 = 300LLU;

	t37 = (x2521^((x2522<<x2523)&x2524));

	if (t37 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x2581 = UINT16_MAX;
	volatile uint32_t x2582 = 7U;
	uint8_t x2583 = 3U;
	uint32_t x2584 = 7068771U;
	uint32_t t38 = 15808645U;

	t38 = (x2581^((x2582<<x2583)&x2584));

	if (t38 != 65503U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2601 = -1;
	volatile int16_t x2602 = INT16_MAX;
	volatile uint32_t x2603 = 0U;
	int32_t x2604 = INT32_MIN;
	static int32_t t39 = -823805623;

	t39 = (x2601^((x2602<<x2603)&x2604));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x2645 = UINT32_MAX;
	static int64_t x2648 = INT64_MIN;
	uint64_t t40 = 20457639388737850LLU;

	t40 = (x2645^((x2646<<x2647)&x2648));

	if (t40 != 9223372041149743103LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x2665 = 31;
	static int32_t x2666 = 13341;
	volatile int32_t x2667 = 3;
	int32_t t41 = -171337793;

	t41 = (x2665^((x2666<<x2667)&x2668));

	if (t41 != 106655) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x2853 = 0U;
	uint64_t x2855 = 12LLU;
	static uint32_t t42 = 336332U;

	t42 = (x2853^((x2854<<x2855)&x2856));

	if (t42 != 200704U) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint16_t x2949 = 8975U;
	int64_t x2952 = -109400050591950153LL;
	volatile int64_t t43 = 1LL;

	t43 = (x2949^((x2950<<x2951)&x2952));

	if (t43 != 33956623LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x3038 = UINT32_MAX;
	int8_t x3039 = 26;
	int64_t t44 = 107LL;

	t44 = (x3037^((x3038<<x3039)&x3040));

	if (t44 != -18142334LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x3109 = -63645025LL;
	uint32_t x3110 = 8U;
	volatile uint64_t x3111 = 24LLU;

	t45 = (x3109^((x3110<<x3111)&x3112));

	if (t45 != -197862753LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x3121 = UINT16_MAX;
	static uint8_t x3122 = 58U;
	int16_t x3123 = 0;
	int16_t x3124 = -1;

	t46 = (x3121^((x3122<<x3123)&x3124));

	if (t46 != 65477) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x3177 = 49168654LLU;
	static int64_t x3178 = 2436015LL;
	volatile int16_t x3179 = 0;
	int16_t x3180 = 102;
	volatile uint64_t t47 = 2537632773LLU;

	t47 = (x3177^((x3178<<x3179)&x3180));

	if (t47 != 49168680LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x3189 = INT32_MIN;
	int16_t x3190 = INT16_MAX;
	static int8_t x3192 = -1;
	int32_t t48 = 13;

	t48 = (x3189^((x3190<<x3191)&x3192));

	if (t48 != -2143289472) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x3205 = UINT64_MAX;
	uint8_t x3206 = 45U;
	volatile int16_t x3207 = 2;
	int8_t x3208 = INT8_MIN;
	static uint64_t t49 = 84360435162LLU;

	t49 = (x3205^((x3206<<x3207)&x3208));

	if (t49 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x3221 = INT64_MAX;
	int32_t x3222 = 493;
	static uint16_t x3224 = 8936U;

	t50 = (x3221^((x3222<<x3223)&x3224));

	if (t50 != 9223372036854767615LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x3239 = 2U;
	volatile uint32_t x3240 = 49598U;

	t51 = (x3237^((x3238<<x3239)&x3240));

	if (t51 != 243U) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x3333 = INT64_MAX;
	int8_t x3334 = INT8_MAX;
	uint8_t x3335 = 6U;
	uint64_t x3336 = 49103896818LLU;

	t52 = (x3333^((x3334<<x3335)&x3336));

	if (t52 != 9223372036854775615LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x3389 = UINT8_MAX;
	int16_t x3390 = INT16_MAX;
	volatile uint8_t x3391 = 0U;
	static volatile int8_t x3392 = -2;
	static int32_t t53 = -30899;

	t53 = (x3389^((x3390<<x3391)&x3392));

	if (t53 != 32513) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x3477 = INT16_MAX;
	uint64_t x3478 = UINT64_MAX;
	static int8_t x3479 = 0;
	int32_t x3480 = -112034;
	static uint64_t t54 = 101844853LLU;

	t54 = (x3477^((x3478<<x3479)&x3480));

	if (t54 != 18446744073709434273LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x3545 = -29LL;
	static int32_t x3546 = INT32_MAX;
	uint16_t x3547 = 0U;
	volatile int8_t x3548 = INT8_MAX;
	static volatile int64_t t55 = -8149LL;

	t55 = (x3545^((x3546<<x3547)&x3548));

	if (t55 != -100LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x3553 = -1;
	static uint8_t x3554 = 56U;
	int16_t x3555 = 1;
	static int16_t x3556 = 4196;
	int32_t t56 = 1;

	t56 = (x3553^((x3554<<x3555)&x3556));

	if (t56 != -97) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int64_t x3582 = 1LL;
	int8_t x3583 = 5;
	uint64_t x3584 = 1777421LLU;
	static volatile uint64_t t57 = 7111153055315566227LLU;

	t57 = (x3581^((x3582<<x3583)&x3584));

	if (t57 != 3LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x3609 = INT16_MIN;
	uint8_t x3610 = UINT8_MAX;
	static volatile uint16_t x3611 = 5U;
	static volatile int8_t x3612 = -1;
	int32_t t58 = 2;

	t58 = (x3609^((x3610<<x3611)&x3612));

	if (t58 != -24608) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x3661 = 14;
	int64_t x3662 = 257016494406LL;
	static int8_t x3663 = 1;
	uint32_t x3664 = 59U;

	t59 = (x3661^((x3662<<x3663)&x3664));

	if (t59 != 6LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x3725 = 560U;
	uint8_t x3726 = 28U;
	volatile uint8_t x3727 = 6U;
	static int8_t x3728 = INT8_MAX;
	static int32_t t60 = -1;

	t60 = (x3725^((x3726<<x3727)&x3728));

	if (t60 != 560) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x3777 = INT8_MIN;
	uint64_t x3778 = 79966LLU;
	uint16_t x3779 = 3U;
	int64_t x3780 = 1061LL;
	uint64_t t61 = 13295536938LLU;

	t61 = (x3777^((x3778<<x3779)&x3780));

	if (t61 != 18446744073709551520LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x3785 = 64;
	volatile uint32_t x3786 = 85U;
	uint64_t x3788 = UINT64_MAX;
	uint64_t t62 = 109044740619LLU;

	t62 = (x3785^((x3786<<x3787)&x3788));

	if (t62 != 21LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x3850 = 24582U;
	int32_t x3851 = 6;
	static volatile int16_t x3852 = -1;

	t63 = (x3849^((x3850<<x3851)&x3852));

	if (t63 != 1605247) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x3854 = 0;
	int8_t x3855 = 16;
	uint32_t t64 = 6U;

	t64 = (x3853^((x3854<<x3855)&x3856));

	if (t64 != 2147483648U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x3869 = INT16_MIN;
	int8_t x3871 = 2;
	int64_t t65 = -6433932259392655LL;

	t65 = (x3869^((x3870<<x3871)&x3872));

	if (t65 != -294156144LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x3890 = 5827U;
	uint64_t x3891 = 1LLU;
	int16_t x3892 = INT16_MIN;
	volatile int32_t t66 = INT32_MIN;

	t66 = (x3889^((x3890<<x3891)&x3892));

	if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x3905 = INT32_MAX;
	volatile uint8_t x3906 = 115U;
	uint32_t x3907 = 0U;
	int16_t x3908 = INT16_MIN;

	t67 = (x3905^((x3906<<x3907)&x3908));

	if (t67 != INT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x4077 = INT64_MAX;
	int64_t x4078 = 31171137LL;
	static uint8_t x4079 = 0U;
	int16_t x4080 = INT16_MIN;
	static volatile int64_t t68 = 369LL;

	t68 = (x4077^((x4078<<x4079)&x4080));

	if (t68 != 9223372036823613439LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x4089 = 0U;
	uint8_t x4090 = UINT8_MAX;
	int8_t x4092 = INT8_MIN;
	volatile int32_t t69 = 49675;

	t69 = (x4089^((x4090<<x4091)&x4092));

	if (t69 != 522240) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x4329 = INT32_MIN;
	static uint16_t x4330 = 26U;
	int8_t x4332 = INT8_MIN;
	int32_t t70 = INT32_MIN;

	t70 = (x4329^((x4330<<x4331)&x4332));

	if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x4337 = -67863;
	static int8_t x4338 = 3;
	int16_t x4339 = 1;
	uint8_t x4340 = UINT8_MAX;
	int32_t t71 = -498810211;

	t71 = (x4337^((x4338<<x4339)&x4340));

	if (t71 != -67857) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x4505 = 6024430496LLU;
	uint8_t x4506 = UINT8_MAX;
	int8_t x4507 = 0;
	static uint32_t x4508 = UINT32_MAX;
	volatile uint64_t t72 = 31440989375487LLU;

	t72 = (x4505^((x4506<<x4507)&x4508));

	if (t72 != 6024430431LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x4601 = INT8_MIN;
	static volatile int32_t x4602 = 142366425;
	volatile int32_t x4603 = 1;
	uint8_t x4604 = UINT8_MAX;

	t73 = (x4601^((x4602<<x4603)&x4604));

	if (t73 != -206) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x4609 = INT16_MAX;
	static uint32_t x4610 = 1U;
	int64_t x4612 = -1LL;
	int64_t t74 = 5492408LL;

	t74 = (x4609^((x4610<<x4611)&x4612));

	if (t74 != 32766LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x4667 = 13;
	volatile int32_t t75 = 7;

	t75 = (x4665^((x4666<<x4667)&x4668));

	if (t75 != -2089088) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x4729 = 90U;
	uint64_t x4730 = 8LLU;
	int16_t x4731 = 6;
	uint8_t x4732 = UINT8_MAX;
	volatile uint64_t t76 = 7695LLU;

	t76 = (x4729^((x4730<<x4731)&x4732));

	if (t76 != 90LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x4741 = INT64_MIN;
	volatile int8_t x4742 = INT8_MAX;
	int8_t x4743 = 5;
	volatile int64_t t77 = -62144LL;

	t77 = (x4741^((x4742<<x4743)&x4744));

	if (t77 != -9223372036854771744LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x4825 = 1U;
	int8_t x4826 = INT8_MAX;
	uint64_t t78 = 4336916745773LLU;

	t78 = (x4825^((x4826<<x4827)&x4828));

	if (t78 != 233LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x5033 = 112617246LLU;
	int16_t x5034 = 1091;
	uint16_t x5036 = UINT16_MAX;
	volatile uint64_t t79 = 124566914476704LLU;

	t79 = (x5033^((x5034<<x5035)&x5036));

	if (t79 != 112621074LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x5061 = UINT16_MAX;
	volatile int64_t x5062 = INT64_MAX;
	int8_t x5063 = 0;
	static int16_t x5064 = 8;
	int64_t t80 = 12669572LL;

	t80 = (x5061^((x5062<<x5063)&x5064));

	if (t80 != 65527LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x5241 = 413997U;
	int32_t x5242 = INT32_MAX;
	uint8_t x5243 = 0U;
	static uint16_t x5244 = 7836U;
	uint32_t t81 = 1745U;

	t81 = (x5241^((x5242<<x5243)&x5244));

	if (t81 != 413617U) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x5246 = 170045473LLU;
	static volatile uint32_t x5247 = 13U;
	static uint8_t x5248 = 2U;
	static volatile uint64_t t82 = 240656LLU;

	t82 = (x5245^((x5246<<x5247)&x5248));

	if (t82 != 18446718973564684173LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x5325 = -1;
	static uint16_t x5326 = UINT16_MAX;
	volatile int64_t x5328 = INT64_MIN;

	t83 = (x5325^((x5326<<x5327)&x5328));

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x5385 = 1U;
	int64_t x5386 = 1503086462361894LL;
	int16_t x5387 = 5;
	int32_t x5388 = INT32_MAX;
	static int64_t t84 = -2LL;

	t84 = (x5385^((x5386<<x5387)&x5388));

	if (t84 != 1425810625LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x5433 = -4610295919638002000LL;
	int8_t x5434 = 1;
	int32_t x5436 = INT32_MIN;
	volatile int64_t t85 = 105LL;

	t85 = (x5433^((x5434<<x5435)&x5436));

	if (t85 != -4610295919638002000LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int8_t x5510 = 49;
	static uint16_t x5511 = 23U;
	int8_t x5512 = -1;
	uint32_t t86 = 262917934U;

	t86 = (x5509^((x5510<<x5511)&x5512));

	if (t86 != 405440622U) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x5573 = 5983388U;
	uint64_t x5574 = 2242450895550989486LLU;
	uint8_t x5575 = 58U;
	uint32_t x5576 = 0U;

	t87 = (x5573^((x5574<<x5575)&x5576));

	if (t87 != 5983388LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x5590 = INT16_MAX;
	int8_t x5591 = 5;
	volatile int16_t x5592 = 13570;
	int32_t t88 = -19749770;

	t88 = (x5589^((x5590<<x5591)&x5592));

	if (t88 != -13569) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x5593 = 3571308945559LLU;
	volatile uint16_t x5594 = 1U;
	int64_t x5596 = 0LL;

	t89 = (x5593^((x5594<<x5595)&x5596));

	if (t89 != 3571308945559LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x5649 = INT16_MAX;
	uint8_t x5650 = 73U;
	int32_t x5651 = 6;
	int32_t t90 = 12136;

	t90 = (x5649^((x5650<<x5651)&x5652));

	if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x5693 = INT16_MAX;
	int16_t x5694 = INT16_MAX;
	volatile int8_t x5695 = 5;
	int16_t x5696 = -1;
	volatile int32_t t91 = -1;

	t91 = (x5693^((x5694<<x5695)&x5696));

	if (t91 != 1015839) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x5797 = 25217434368LLU;
	uint64_t x5798 = UINT64_MAX;
	volatile int32_t x5800 = 335273;
	volatile uint64_t t92 = 1554461862136353LLU;

	t92 = (x5797^((x5798<<x5799)&x5800));

	if (t92 != 25217635072LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x5869 = -1;
	uint8_t x5870 = UINT8_MAX;
	int8_t x5871 = 4;
	volatile int64_t t93 = -931959LL;

	t93 = (x5869^((x5870<<x5871)&x5872));

	if (t93 != -4081LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x6001 = 0U;
	static uint32_t x6002 = 343U;
	uint32_t t94 = 649204960U;

	t94 = (x6001^((x6002<<x6003)&x6004));

	if (t94 != 5619712U) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x6049 = 2276;
	uint8_t x6050 = 66U;
	uint8_t x6051 = 1U;
	uint8_t x6052 = UINT8_MAX;
	volatile int32_t t95 = -6694;

	t95 = (x6049^((x6050<<x6051)&x6052));

	if (t95 != 2144) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x6062 = UINT8_MAX;
	int8_t x6063 = 1;
	uint64_t x6064 = 15580319LLU;

	t96 = (x6061^((x6062<<x6063)&x6064));

	if (t96 != 18446744073709551457LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x6102 = 28;
	uint8_t x6103 = 2U;
	uint16_t x6104 = UINT16_MAX;
	int32_t t97 = -29614;

	t97 = (x6101^((x6102<<x6103)&x6104));

	if (t97 != 15) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x6157 = -1LL;
	uint64_t x6158 = 342988867LLU;
	volatile uint32_t x6159 = 6U;
	int32_t x6160 = -243695217;

	t98 = (x6157^((x6158<<x6159)&x6160));

	if (t98 != 18446744051959988095LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x6169 = 0;
	static uint32_t x6170 = 221366U;
	int16_t x6171 = 26;
	uint16_t x6172 = UINT16_MAX;
	volatile uint32_t t99 = 32U;

	t99 = (x6169^((x6170<<x6171)&x6172));

	if (t99 != 0U) { NG(); } else { ; }
	
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

