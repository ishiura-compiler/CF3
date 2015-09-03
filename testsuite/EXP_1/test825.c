#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x5 = UINT16_MAX;
uint16_t x10 = 2000U;
int8_t x138 = INT8_MIN;
volatile uint32_t x139 = 1423U;
static volatile uint16_t x185 = UINT16_MAX;
int8_t x193 = 5;
int32_t x259 = INT32_MAX;
uint8_t x260 = 0U;
static volatile int32_t t5 = INT32_MAX;
int8_t x428 = 3;
static volatile uint64_t t8 = 17573001618447LLU;
int8_t x484 = 2;
int8_t x502 = 11;
static int64_t x503 = INT64_MAX;
volatile int8_t x729 = -3;
int16_t x732 = 1;
volatile uint32_t t13 = 358622820U;
int8_t x805 = INT8_MAX;
uint32_t x809 = 10965748U;
uint32_t t17 = 1966893U;
int8_t x1044 = 5;
volatile int16_t x1074 = INT16_MAX;
int16_t x1079 = INT16_MAX;
int8_t x1080 = 3;
volatile int32_t t20 = 42992;
static uint32_t t22 = 6U;
int8_t x1176 = 1;
volatile uint32_t t23 = 51791878U;
uint8_t x1281 = UINT8_MAX;
volatile int32_t t24 = 6750;
int32_t x1290 = INT32_MAX;
volatile uint8_t x1292 = 0U;
volatile uint32_t t25 = 2084U;
int16_t x1439 = 14;
int64_t x1464 = 0LL;
int32_t x1507 = -15490965;
uint8_t x1508 = 9U;
volatile int16_t x1524 = 18;
int64_t x1601 = 8LL;
static uint32_t x1603 = 1U;
int32_t x1855 = 434204;
uint16_t x2372 = 6U;
int64_t x2644 = 0LL;
volatile uint32_t t40 = 1743U;
uint64_t x2657 = 2464167071868132554LLU;
static uint8_t x2723 = UINT8_MAX;
static uint64_t t43 = 3408772271699389LLU;
static int64_t x2756 = 1LL;
int64_t x2797 = INT64_MIN;
static volatile uint8_t x2805 = UINT8_MAX;
int16_t x2808 = 0;
int64_t x2925 = -7885927210LL;
uint64_t x2927 = UINT64_MAX;
volatile uint64_t t49 = 2102248830854LLU;
static int8_t x2934 = INT8_MIN;
int32_t t50 = 246630455;
volatile int8_t x3016 = 0;
static int64_t x3127 = INT64_MAX;
volatile int16_t x3179 = INT16_MAX;
uint16_t x3264 = 1U;
uint16_t x3305 = 10U;
volatile uint64_t t61 = 6008540870619116LLU;
static uint8_t x3535 = UINT8_MAX;
volatile int32_t t63 = -692;
int16_t x3570 = -1;
static int16_t x3590 = INT16_MAX;
int64_t t68 = 2860259666280LL;
uint8_t x3796 = 37U;
uint64_t t70 = 1991324533014399LLU;
volatile int64_t t71 = 94230026926437LL;
static uint64_t x3891 = 6LLU;
volatile uint32_t x3914 = UINT32_MAX;
static uint8_t x3916 = 4U;
int8_t x4180 = 7;
volatile uint64_t t79 = 15LLU;
volatile uint16_t x4228 = 25U;
uint64_t t80 = 32297747098LLU;
static int8_t x4409 = -1;
uint32_t t82 = 28089U;
int32_t x4424 = 17;
int64_t x4461 = INT64_MIN;
uint16_t x4486 = UINT16_MAX;
uint16_t x4593 = 53U;
int64_t x4594 = -1LL;
static int16_t x4617 = INT16_MAX;
uint64_t x4618 = 45229244255LLU;
uint8_t x4745 = 61U;
uint32_t x4754 = 308031471U;
uint16_t x4875 = UINT16_MAX;
uint16_t x4884 = 5U;
int32_t x4895 = 186914254;
int8_t x5073 = 0;
uint8_t x5078 = 4U;
uint32_t t96 = 124379U;
static int64_t x5134 = INT64_MIN;
static int16_t x5190 = -1;
int64_t t98 = -2110606408039LL;
int16_t x5269 = 0;


void f0(void) {
	static int32_t x6 = -412;
	uint8_t x7 = 12U;
	uint8_t x8 = 8U;
	static volatile int32_t t0 = 61637560;

	t0 = (((x5%x6)|x7)<<x8);

	if (t0 != 7936) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = INT64_MAX;
	uint8_t x11 = UINT8_MAX;
	int16_t x12 = 7;
	int64_t t1 = -65253688322432182LL;

	t1 = (((x9%x10)|x11)<<x12);

	if (t1 != 262016LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x137 = 0U;
	static int8_t x140 = 0;
	uint32_t t2 = 0U;

	t2 = (((x137%x138)|x139)<<x140);

	if (t2 != 1423U) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x186 = 572776209952290211LLU;
	int32_t x187 = INT32_MAX;
	uint8_t x188 = 3U;
	uint64_t t3 = 88098436458757LLU;

	t3 = (((x185%x186)|x187)<<x188);

	if (t3 != 17179869176LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x194 = INT16_MIN;
	uint8_t x195 = UINT8_MAX;
	static uint8_t x196 = 5U;
	int32_t t4 = -3559;

	t4 = (((x193%x194)|x195)<<x196);

	if (t4 != 8160) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x257 = 6228U;
	uint8_t x258 = UINT8_MAX;

	t5 = (((x257%x258)|x259)<<x260);

	if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x265 = -71;
	int8_t x266 = INT8_MIN;
	uint32_t x267 = 113241845U;
	static uint16_t x268 = 2U;
	volatile uint32_t t6 = 213U;

	t6 = (((x265%x266)|x267)<<x268);

	if (t6 != 4294967284U) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x425 = 977U;
	int32_t x426 = 31352;
	volatile uint8_t x427 = UINT8_MAX;
	volatile int32_t t7 = -1;

	t7 = (((x425%x426)|x427)<<x428);

	if (t7 != 8184) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x437 = 434007041U;
	static int32_t x438 = INT32_MAX;
	volatile uint64_t x439 = UINT64_MAX;
	uint8_t x440 = 48U;

	t8 = (((x437%x438)|x439)<<x440);

	if (t8 != 18446462598732840960LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x481 = 719571367U;
	uint8_t x482 = 112U;
	int16_t x483 = 5;
	uint32_t t9 = 1U;

	t9 = (((x481%x482)|x483)<<x484);

	if (t9 != 156U) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x501 = 8422679467998150716LLU;
	uint8_t x504 = 51U;
	volatile uint64_t t10 = 2372927232016471LLU;

	t10 = (((x501%x502)|x503)<<x504);

	if (t10 != 18444492273895866368LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x613 = UINT32_MAX;
	volatile uint16_t x614 = UINT16_MAX;
	uint64_t x615 = 324028624752LLU;
	static int32_t x616 = 1;
	uint64_t t11 = 1LLU;

	t11 = (((x613%x614)|x615)<<x616);

	if (t11 != 648057249504LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x621 = INT32_MAX;
	uint32_t x622 = 14419U;
	static int8_t x623 = INT8_MIN;
	static int8_t x624 = 1;
	volatile uint32_t t12 = 10493U;

	t12 = (((x621%x622)|x623)<<x624);

	if (t12 != 4294967194U) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x730 = -32;
	uint32_t x731 = 0U;

	t13 = (((x729%x730)|x731)<<x732);

	if (t13 != 4294967290U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x806 = -1;
	static volatile int8_t x807 = 8;
	volatile int8_t x808 = 0;
	static int32_t t14 = 16;

	t14 = (((x805%x806)|x807)<<x808);

	if (t14 != 8) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x810 = INT32_MIN;
	int16_t x811 = -207;
	volatile int16_t x812 = 0;
	volatile uint32_t t15 = 100U;

	t15 = (((x809%x810)|x811)<<x812);

	if (t15 != 4294967285U) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x885 = 3615631355636159LLU;
	int64_t x886 = 25041541687207431LL;
	int64_t x887 = -465842491165563956LL;
	int16_t x888 = 6;
	volatile uint64_t t16 = 740878836690LLU;

	t16 = (((x885%x886)|x887)<<x888);

	if (t16 != 7151645279964037056LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x957 = 1323526U;
	int8_t x958 = 12;
	int8_t x959 = 1;
	int64_t x960 = 1LL;

	t17 = (((x957%x958)|x959)<<x960);

	if (t17 != 22U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1041 = -1;
	int32_t x1042 = 1690639;
	volatile uint64_t x1043 = 1LLU;
	volatile uint64_t t18 = 142654243121LLU;

	t18 = (((x1041%x1042)|x1043)<<x1044);

	if (t18 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x1073 = 22275943U;
	int64_t x1075 = 388483725607269LL;
	static int8_t x1076 = 0;
	volatile int64_t t19 = -2542213052420081140LL;

	t19 = (((x1073%x1074)|x1075)<<x1076);

	if (t19 != 388483725618031LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x1077 = INT16_MIN;
	int8_t x1078 = INT8_MIN;

	t20 = (((x1077%x1078)|x1079)<<x1080);

	if (t20 != 262136) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x1109 = 386735570LLU;
	int32_t x1110 = INT32_MIN;
	int32_t x1111 = INT32_MAX;
	int32_t x1112 = 5;
	static uint64_t t21 = 549547164589808LLU;

	t21 = (((x1109%x1110)|x1111)<<x1112);

	if (t21 != 68719476704LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x1133 = 85U;
	uint32_t x1134 = 411U;
	int8_t x1135 = INT8_MIN;
	uint16_t x1136 = 3U;

	t22 = (((x1133%x1134)|x1135)<<x1136);

	if (t22 != 4294966952U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x1173 = -1;
	static uint32_t x1174 = 13054U;
	uint8_t x1175 = UINT8_MAX;

	t23 = (((x1173%x1174)|x1175)<<x1176);

	if (t23 != 11262U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x1282 = 59571173;
	uint8_t x1283 = 39U;
	uint16_t x1284 = 5U;

	t24 = (((x1281%x1282)|x1283)<<x1284);

	if (t24 != 8160) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint16_t x1289 = 0U;
	uint32_t x1291 = 2U;

	t25 = (((x1289%x1290)|x1291)<<x1292);

	if (t25 != 2U) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1377 = UINT32_MAX;
	uint8_t x1378 = 8U;
	int16_t x1379 = INT16_MIN;
	int16_t x1380 = 1;
	volatile uint32_t t26 = 2501744U;

	t26 = (((x1377%x1378)|x1379)<<x1380);

	if (t26 != 4294901774U) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1437 = 3U;
	int64_t x1438 = INT64_MIN;
	volatile uint8_t x1440 = 2U;
	int64_t t27 = -421363762647733LL;

	t27 = (((x1437%x1438)|x1439)<<x1440);

	if (t27 != 60LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x1461 = 2U;
	int64_t x1462 = INT64_MIN;
	static uint8_t x1463 = UINT8_MAX;
	int64_t t28 = -3592969325425LL;

	t28 = (((x1461%x1462)|x1463)<<x1464);

	if (t28 != 255LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x1505 = 19046656U;
	uint64_t x1506 = UINT64_MAX;
	volatile uint64_t t29 = 281798536464802965LLU;

	t29 = (((x1505%x1506)|x1507)<<x1508);

	if (t29 != 18446744066852050432LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x1521 = UINT64_MAX;
	static int32_t x1522 = 22704;
	int32_t x1523 = -1;
	static volatile uint64_t t30 = 292267271LLU;

	t30 = (((x1521%x1522)|x1523)<<x1524);

	if (t30 != 18446744073709289472LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x1541 = INT64_MIN;
	uint64_t x1542 = 956940925LLU;
	int64_t x1543 = -1LL;
	uint8_t x1544 = 8U;
	uint64_t t31 = 1LLU;

	t31 = (((x1541%x1542)|x1543)<<x1544);

	if (t31 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1602 = UINT32_MAX;
	static int8_t x1604 = 53;
	volatile int64_t t32 = 21618339324150932LL;

	t32 = (((x1601%x1602)|x1603)<<x1604);

	if (t32 != 81064793292668928LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1825 = 4318545LLU;
	static int16_t x1826 = 94;
	int8_t x1827 = INT8_MIN;
	volatile int8_t x1828 = 1;
	volatile uint64_t t33 = 126914228844731953LLU;

	t33 = (((x1825%x1826)|x1827)<<x1828);

	if (t33 != 18446744073709551542LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x1853 = INT8_MIN;
	static uint32_t x1854 = 21714U;
	uint8_t x1856 = 1U;
	uint32_t t34 = 8918081U;

	t34 = (((x1853%x1854)|x1855)<<x1856);

	if (t34 != 874620U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x1993 = 137U;
	static int8_t x1994 = 1;
	uint16_t x1995 = UINT16_MAX;
	int8_t x1996 = 0;
	int32_t t35 = 30849756;

	t35 = (((x1993%x1994)|x1995)<<x1996);

	if (t35 != 65535) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x2369 = UINT16_MAX;
	int8_t x2370 = -1;
	uint16_t x2371 = UINT16_MAX;
	volatile int32_t t36 = 1;

	t36 = (((x2369%x2370)|x2371)<<x2372);

	if (t36 != 4194240) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x2373 = INT32_MIN;
	volatile int32_t x2374 = 1;
	uint64_t x2375 = 60905161566250055LLU;
	int32_t x2376 = 2;
	volatile uint64_t t37 = 289513327716053LLU;

	t37 = (((x2373%x2374)|x2375)<<x2376);

	if (t37 != 243620646265000220LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x2473 = 6515U;
	int8_t x2474 = -1;
	uint64_t x2475 = 121868LLU;
	static uint32_t x2476 = 3U;
	volatile uint64_t t38 = 530564LLU;

	t38 = (((x2473%x2474)|x2475)<<x2476);

	if (t38 != 974944LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x2485 = 579;
	int64_t x2486 = INT64_MIN;
	static volatile uint16_t x2487 = 9954U;
	uint16_t x2488 = 5U;
	volatile int64_t t39 = 25LL;

	t39 = (((x2485%x2486)|x2487)<<x2488);

	if (t39 != 318560LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x2641 = UINT32_MAX;
	volatile int16_t x2642 = INT16_MIN;
	uint16_t x2643 = UINT16_MAX;

	t40 = (((x2641%x2642)|x2643)<<x2644);

	if (t40 != 65535U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x2645 = INT16_MAX;
	int64_t x2646 = INT64_MAX;
	int16_t x2647 = INT16_MAX;
	int16_t x2648 = 0;
	static int64_t t41 = -70LL;

	t41 = (((x2645%x2646)|x2647)<<x2648);

	if (t41 != 32767LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x2658 = 19502LLU;
	uint8_t x2659 = 0U;
	uint64_t x2660 = 0LLU;
	uint64_t t42 = 252LLU;

	t42 = (((x2657%x2658)|x2659)<<x2660);

	if (t42 != 18648LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x2721 = 236603LLU;
	uint32_t x2722 = 785852U;
	uint8_t x2724 = 11U;

	t43 = (((x2721%x2722)|x2723)<<x2724);

	if (t43 != 484964352LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x2753 = 16772979404630LL;
	int32_t x2754 = INT32_MIN;
	volatile int32_t x2755 = 125;
	volatile int64_t t44 = 420743LL;

	t44 = (((x2753%x2754)|x2755)<<x2756);

	if (t44 != 2264227582LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x2798 = 31U;
	uint64_t x2799 = UINT64_MAX;
	uint8_t x2800 = 20U;
	uint64_t t45 = 31344218102LLU;

	t45 = (((x2797%x2798)|x2799)<<x2800);

	if (t45 != 18446744073708503040LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x2806 = INT32_MIN;
	uint8_t x2807 = UINT8_MAX;
	volatile int32_t t46 = 54863237;

	t46 = (((x2805%x2806)|x2807)<<x2808);

	if (t46 != 255) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x2869 = 1933LLU;
	int64_t x2870 = -163LL;
	uint16_t x2871 = UINT16_MAX;
	uint32_t x2872 = 1U;
	volatile uint64_t t47 = 6LLU;

	t47 = (((x2869%x2870)|x2871)<<x2872);

	if (t47 != 131070LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x2881 = UINT64_MAX;
	int64_t x2882 = INT64_MIN;
	static int32_t x2883 = INT32_MIN;
	static volatile uint16_t x2884 = 0U;
	uint64_t t48 = UINT64_MAX;

	t48 = (((x2881%x2882)|x2883)<<x2884);

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x2926 = INT8_MIN;
	uint8_t x2928 = 4U;

	t49 = (((x2925%x2926)|x2927)<<x2928);

	if (t49 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x2933 = INT8_MIN;
	int32_t x2935 = 13951;
	volatile uint8_t x2936 = 0U;

	t50 = (((x2933%x2934)|x2935)<<x2936);

	if (t50 != 13951) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x2953 = INT8_MAX;
	uint64_t x2954 = 480901LLU;
	static uint64_t x2955 = 204LLU;
	int32_t x2956 = 23;
	uint64_t t51 = 1040362287LLU;

	t51 = (((x2953%x2954)|x2955)<<x2956);

	if (t51 != 2139095040LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x3013 = INT8_MIN;
	static int8_t x3014 = 2;
	volatile int8_t x3015 = 3;
	volatile int32_t t52 = -1946;

	t52 = (((x3013%x3014)|x3015)<<x3016);

	if (t52 != 3) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x3125 = UINT32_MAX;
	static int8_t x3126 = -50;
	int8_t x3128 = 0;
	static volatile int64_t t53 = INT64_MAX;

	t53 = (((x3125%x3126)|x3127)<<x3128);

	if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x3133 = INT32_MAX;
	volatile int64_t x3134 = 153LL;
	int16_t x3135 = INT16_MAX;
	volatile uint8_t x3136 = 2U;
	static int64_t t54 = -60891720970LL;

	t54 = (((x3133%x3134)|x3135)<<x3136);

	if (t54 != 131068LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x3157 = UINT32_MAX;
	int16_t x3158 = 266;
	uint16_t x3159 = UINT16_MAX;
	uint32_t x3160 = 0U;
	uint32_t t55 = 0U;

	t55 = (((x3157%x3158)|x3159)<<x3160);

	if (t55 != 65535U) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x3173 = 0LLU;
	static volatile int8_t x3174 = -1;
	int32_t x3175 = 101;
	volatile uint16_t x3176 = 3U;
	volatile uint64_t t56 = 8131933331804389264LLU;

	t56 = (((x3173%x3174)|x3175)<<x3176);

	if (t56 != 808LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x3177 = 8;
	volatile uint8_t x3178 = UINT8_MAX;
	int32_t x3180 = 0;
	static volatile int32_t t57 = -21183;

	t57 = (((x3177%x3178)|x3179)<<x3180);

	if (t57 != 32767) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x3261 = 0;
	uint16_t x3262 = 4851U;
	uint32_t x3263 = UINT32_MAX;
	static uint32_t t58 = 406536U;

	t58 = (((x3261%x3262)|x3263)<<x3264);

	if (t58 != 4294967294U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x3306 = -1;
	uint16_t x3307 = UINT16_MAX;
	static volatile uint8_t x3308 = 5U;
	volatile int32_t t59 = -192615784;

	t59 = (((x3305%x3306)|x3307)<<x3308);

	if (t59 != 2097120) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x3345 = -1LL;
	volatile uint64_t x3346 = 5112LLU;
	int16_t x3347 = INT16_MIN;
	static volatile int8_t x3348 = 0;
	uint64_t t60 = 431LLU;

	t60 = (((x3345%x3346)|x3347)<<x3348);

	if (t60 != 18446744073709523543LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x3397 = 113LLU;
	uint16_t x3398 = UINT16_MAX;
	int32_t x3399 = -139871991;
	int8_t x3400 = 8;

	t61 = (((x3397%x3398)|x3399)<<x3400);

	if (t61 != 18446744037902350592LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x3429 = -1;
	int8_t x3430 = -1;
	uint32_t x3431 = UINT32_MAX;
	uint8_t x3432 = 12U;
	uint32_t t62 = 2137U;

	t62 = (((x3429%x3430)|x3431)<<x3432);

	if (t62 != 4294963200U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x3533 = 1U;
	int8_t x3534 = INT8_MAX;
	volatile uint32_t x3536 = 8U;

	t63 = (((x3533%x3534)|x3535)<<x3536);

	if (t63 != 65280) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x3569 = INT32_MIN;
	volatile uint16_t x3571 = 241U;
	int16_t x3572 = 7;
	int32_t t64 = -252;

	t64 = (((x3569%x3570)|x3571)<<x3572);

	if (t64 != 30848) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x3589 = 2539222;
	uint16_t x3591 = UINT16_MAX;
	int8_t x3592 = 4;
	static volatile int32_t t65 = 19;

	t65 = (((x3589%x3590)|x3591)<<x3592);

	if (t65 != 1048560) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint64_t x3661 = 73939290549235685LLU;
	static int64_t x3662 = -94177956253927LL;
	static int16_t x3663 = -1;
	int8_t x3664 = 54;
	uint64_t t66 = 18LLU;

	t66 = (((x3661%x3662)|x3663)<<x3664);

	if (t66 != 18428729675200069632LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x3733 = UINT32_MAX;
	int8_t x3734 = 21;
	int32_t x3735 = -1;
	int8_t x3736 = 1;
	static uint32_t t67 = 2U;

	t67 = (((x3733%x3734)|x3735)<<x3736);

	if (t67 != 4294967294U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x3757 = INT64_MAX;
	int32_t x3758 = -1;
	int8_t x3759 = INT8_MAX;
	volatile int8_t x3760 = 7;

	t68 = (((x3757%x3758)|x3759)<<x3760);

	if (t68 != 16256LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x3789 = INT32_MAX;
	static int16_t x3790 = INT16_MAX;
	uint8_t x3791 = 5U;
	int16_t x3792 = 17;
	volatile int32_t t69 = -61254006;

	t69 = (((x3789%x3790)|x3791)<<x3792);

	if (t69 != 655360) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x3793 = INT16_MAX;
	int8_t x3794 = -1;
	uint64_t x3795 = 2128LLU;

	t70 = (((x3793%x3794)|x3795)<<x3796);

	if (t70 != 292470092988416LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x3885 = 1081405268907LL;
	int64_t x3886 = INT64_MAX;
	static volatile uint8_t x3887 = UINT8_MAX;
	static uint16_t x3888 = 1U;

	t71 = (((x3885%x3886)|x3887)<<x3888);

	if (t71 != 2162810537982LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x3889 = INT16_MIN;
	static int16_t x3890 = INT16_MIN;
	uint8_t x3892 = 1U;
	volatile uint64_t t72 = 101568135LLU;

	t72 = (((x3889%x3890)|x3891)<<x3892);

	if (t72 != 12LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x3913 = INT8_MIN;
	static int32_t x3915 = INT32_MAX;
	uint32_t t73 = 2367656U;

	t73 = (((x3913%x3914)|x3915)<<x3916);

	if (t73 != 4294967280U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x4013 = -4971;
	uint32_t x4014 = 1U;
	int32_t x4015 = INT32_MIN;
	int8_t x4016 = 1;
	volatile uint32_t t74 = 1U;

	t74 = (((x4013%x4014)|x4015)<<x4016);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x4021 = INT16_MIN;
	volatile uint32_t x4022 = UINT32_MAX;
	int8_t x4023 = INT8_MAX;
	int32_t x4024 = 8;
	static uint32_t t75 = 218U;

	t75 = (((x4021%x4022)|x4023)<<x4024);

	if (t75 != 4286611200U) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x4029 = 1521U;
	uint8_t x4030 = 3U;
	int32_t x4031 = 59;
	static uint8_t x4032 = 13U;
	volatile uint32_t t76 = 509566937U;

	t76 = (((x4029%x4030)|x4031)<<x4032);

	if (t76 != 483328U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x4045 = INT8_MAX;
	int16_t x4046 = 9;
	volatile uint16_t x4047 = UINT16_MAX;
	uint8_t x4048 = 2U;
	volatile int32_t t77 = -1;

	t77 = (((x4045%x4046)|x4047)<<x4048);

	if (t77 != 262140) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x4089 = 0;
	int8_t x4090 = INT8_MAX;
	uint16_t x4091 = UINT16_MAX;
	int8_t x4092 = 4;
	static volatile int32_t t78 = -3683789;

	t78 = (((x4089%x4090)|x4091)<<x4092);

	if (t78 != 1048560) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x4177 = 3138LL;
	volatile uint64_t x4178 = 13LLU;
	static int16_t x4179 = 13672;

	t79 = (((x4177%x4178)|x4179)<<x4180);

	if (t79 != 1750656LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint64_t x4225 = 130274739LLU;
	static uint32_t x4226 = UINT32_MAX;
	int32_t x4227 = -1;

	t80 = (((x4225%x4226)|x4227)<<x4228);

	if (t80 != 18446744073675997184LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x4289 = INT32_MIN;
	int16_t x4290 = -1;
	uint8_t x4291 = 4U;
	static uint8_t x4292 = 24U;
	static int32_t t81 = -5713;

	t81 = (((x4289%x4290)|x4291)<<x4292);

	if (t81 != 67108864) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x4410 = UINT32_MAX;
	uint8_t x4411 = UINT8_MAX;
	int8_t x4412 = 0;

	t82 = (((x4409%x4410)|x4411)<<x4412);

	if (t82 != 255U) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x4421 = 32384U;
	int32_t x4422 = -76;
	uint64_t x4423 = 64591575664290817LLU;
	uint64_t t83 = 490904443226178709LLU;

	t83 = (((x4421%x4422)|x4423)<<x4424);

	if (t83 != 17538219710952374272LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x4462 = -6788;
	volatile uint64_t x4463 = 855700908LLU;
	volatile uint8_t x4464 = 40U;
	volatile uint64_t t84 = 18LLU;

	t84 = (((x4461%x4462)|x4463)<<x4464);

	if (t84 != 18446722083476996096LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x4485 = 13265U;
	int8_t x4487 = INT8_MAX;
	int16_t x4488 = 1;
	static volatile int32_t t85 = 10394912;

	t85 = (((x4485%x4486)|x4487)<<x4488);

	if (t85 != 26622) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x4493 = -1;
	volatile uint32_t x4494 = 602406U;
	uint16_t x4495 = UINT16_MAX;
	uint16_t x4496 = 17U;
	uint32_t t86 = 1087140U;

	t86 = (((x4493%x4494)|x4495)<<x4496);

	if (t86 != 4294836224U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x4595 = 0;
	uint8_t x4596 = 1U;
	static volatile int64_t t87 = -25839LL;

	t87 = (((x4593%x4594)|x4595)<<x4596);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x4619 = INT32_MIN;
	static uint8_t x4620 = 11U;
	volatile uint64_t t88 = 34779977238LLU;

	t88 = (((x4617%x4618)|x4619)<<x4620);

	if (t88 != 18446739675730147328LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x4746 = 51552043U;
	volatile int16_t x4747 = 61;
	static uint32_t x4748 = 2U;
	static volatile uint32_t t89 = 14783U;

	t89 = (((x4745%x4746)|x4747)<<x4748);

	if (t89 != 244U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x4753 = INT32_MIN;
	static uint16_t x4755 = UINT16_MAX;
	static uint32_t x4756 = 8U;
	volatile uint32_t t90 = 14U;

	t90 = (((x4753%x4754)|x4755)<<x4756);

	if (t90 != 3607101184U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x4873 = 738LL;
	int64_t x4874 = -1LL;
	int8_t x4876 = 0;
	int64_t t91 = -207331375002LL;

	t91 = (((x4873%x4874)|x4875)<<x4876);

	if (t91 != 65535LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x4881 = UINT32_MAX;
	static int16_t x4882 = INT16_MIN;
	int8_t x4883 = INT8_MIN;
	uint32_t t92 = 221420U;

	t92 = (((x4881%x4882)|x4883)<<x4884);

	if (t92 != 4294967264U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x4893 = INT16_MIN;
	uint64_t x4894 = 8140965298625658LLU;
	uint8_t x4896 = 1U;
	static uint64_t t93 = 372445815736364572LLU;

	t93 = (((x4893%x4894)|x4895)<<x4896);

	if (t93 != 14915344980884412LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x5065 = INT8_MAX;
	uint32_t x5066 = UINT32_MAX;
	volatile int32_t x5067 = 5;
	uint8_t x5068 = 1U;
	static uint32_t t94 = 685U;

	t94 = (((x5065%x5066)|x5067)<<x5068);

	if (t94 != 254U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x5074 = 212366;
	uint16_t x5075 = 120U;
	static int32_t x5076 = 15;
	int32_t t95 = 10;

	t95 = (((x5073%x5074)|x5075)<<x5076);

	if (t95 != 3932160) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x5077 = 1;
	uint32_t x5079 = 41326623U;
	int8_t x5080 = 7;

	t96 = (((x5077%x5078)|x5079)<<x5080);

	if (t96 != 994840448U) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x5133 = 22U;
	int32_t x5135 = INT32_MAX;
	volatile uint16_t x5136 = 2U;
	volatile int64_t t97 = -4236747681755LL;

	t97 = (((x5133%x5134)|x5135)<<x5136);

	if (t97 != 8589934588LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x5189 = -1LL;
	volatile int16_t x5191 = INT16_MAX;
	static uint16_t x5192 = 1U;

	t98 = (((x5189%x5190)|x5191)<<x5192);

	if (t98 != 65534LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x5270 = INT64_MIN;
	uint64_t x5271 = 3843827454493106316LLU;
	static uint16_t x5272 = 0U;
	static volatile uint64_t t99 = 3908828628585LLU;

	t99 = (((x5269%x5270)|x5271)<<x5272);

	if (t99 != 3843827454493106316LLU) { NG(); } else { ; }
	
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

