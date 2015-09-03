#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 0LLU;
volatile int8_t x100 = INT8_MIN;
volatile int16_t x117 = 94;
uint16_t x118 = 1U;
int16_t x181 = INT16_MAX;
volatile int8_t x203 = 22;
uint8_t x204 = 50U;
static uint64_t t5 = 13523LLU;
int64_t t9 = 226LL;
static uint8_t x551 = 7U;
volatile uint64_t t12 = 15869LLU;
int16_t x729 = INT16_MAX;
uint64_t x730 = 0LLU;
int32_t x732 = -177583083;
volatile int8_t x766 = 1;
int8_t x768 = 1;
int8_t x807 = INT8_MIN;
static uint32_t x971 = 29320638U;
int16_t x1168 = INT16_MAX;
int16_t x1179 = INT16_MIN;
uint16_t x1339 = 986U;
uint64_t t22 = 0LLU;
uint8_t x1441 = 1U;
uint64_t x1457 = UINT64_MAX;
int8_t x1703 = INT8_MIN;
volatile int8_t x2024 = INT8_MAX;
static int64_t x2031 = -1LL;
volatile uint64_t t34 = 46565LLU;
volatile int32_t x2261 = INT32_MAX;
int16_t x2312 = -1;
uint16_t x2459 = 16025U;
static int32_t t37 = -51;
volatile int16_t x2472 = 24;
static int32_t t38 = 31;
uint16_t x2514 = 3U;
int8_t x2515 = -17;
volatile int32_t t39 = 491905071;
uint8_t x2618 = 2U;
int64_t x2620 = INT64_MIN;
int64_t x2905 = 44470LL;
int16_t x2906 = 0;
volatile uint32_t x2985 = 260466197U;
int8_t x2987 = -1;
uint16_t x2988 = UINT16_MAX;
uint64_t x3016 = UINT64_MAX;
volatile uint64_t x3089 = 93656695LLU;
int8_t x3092 = -11;
uint64_t x3097 = 9012513081243LLU;
int32_t x3100 = INT32_MAX;
uint8_t x3126 = 4U;
int8_t x3158 = 1;
int16_t x3209 = INT16_MAX;
uint8_t x3211 = 57U;
volatile uint8_t x3216 = 0U;
static uint8_t x3454 = 6U;
static uint64_t t52 = 22891651011228760LLU;
uint64_t x3609 = 4682702400207600821LLU;
int32_t x3649 = INT32_MAX;
volatile uint16_t x3650 = 0U;
uint16_t x3693 = 113U;
int32_t t55 = -90;
volatile uint8_t x3754 = 7U;
int64_t x3755 = -779669806783492LL;
uint64_t x3767 = 862800982LLU;
uint16_t x3768 = UINT16_MAX;
int64_t t58 = -39687LL;
volatile uint32_t x3910 = 1U;
uint8_t x4073 = 114U;
static volatile uint64_t t61 = 208175087546115975LLU;
static volatile int32_t t63 = -173885517;
uint16_t x4369 = 21U;
int8_t x4604 = INT8_MAX;
uint32_t t67 = 1224832U;
int64_t x4737 = 9172008382LL;
int32_t t70 = -9191;
volatile uint8_t x4798 = 27U;
static volatile uint32_t t71 = 351U;
uint32_t x4916 = 506096807U;
int8_t x5042 = 0;
int64_t t76 = -142905448756097207LL;
static volatile int32_t t79 = 15;
int64_t x5487 = INT64_MIN;
int16_t x5488 = -616;
int64_t t81 = -18737318508LL;
static int32_t x5631 = -1;
static volatile int32_t t84 = -18979910;
volatile int16_t x5774 = 0;
volatile int16_t x5899 = INT16_MIN;
int8_t x5946 = 1;
int64_t t88 = 49103173075284069LL;
uint16_t x6093 = 21U;
uint32_t x6095 = UINT32_MAX;
uint32_t t89 = 703U;
uint32_t t90 = 985U;
static uint8_t x6115 = 15U;
volatile uint8_t x6116 = 0U;
int32_t t91 = 7602;
int16_t x6146 = 7;
static int8_t x6158 = 0;
volatile uint64_t x6173 = 61326146244LLU;
static uint16_t x6261 = 365U;
static uint16_t x6277 = UINT16_MAX;
int32_t x6280 = INT32_MIN;
static uint16_t x6405 = UINT16_MAX;
uint8_t x6406 = 2U;


void f0(void) {
	uint64_t x89 = 6264773334LLU;
	static volatile uint16_t x90 = 5U;
	uint64_t x91 = 5050035669912LLU;
	volatile int32_t x92 = -513;

	t0 = (((x89<<x90)+x91)^x92);

	if (t0 != 18446738823201135527LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x97 = 1LL;
	int8_t x98 = 24;
	static volatile uint32_t x99 = 90U;
	volatile int64_t t1 = -1402LL;

	t1 = (((x97<<x98)+x99)^x100);

	if (t1 != -16777254LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x119 = -1;
	uint8_t x120 = 14U;
	static int32_t t2 = 1;

	t2 = (((x117<<x118)+x119)^x120);

	if (t2 != 181) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x165 = 0;
	static uint8_t x166 = 1U;
	static volatile int16_t x167 = -3933;
	volatile int16_t x168 = INT16_MIN;
	int32_t t3 = -63;

	t3 = (((x165<<x166)+x167)^x168);

	if (t3 != 28835) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x182 = 1;
	uint64_t x183 = 145206394375181LLU;
	int32_t x184 = INT32_MIN;
	static volatile uint64_t t4 = 477587408367286434LLU;

	t4 = (((x181<<x182)+x183)^x184);

	if (t4 != 18446598869447822347LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x201 = UINT64_MAX;
	int8_t x202 = 1;

	t5 = (((x201<<x202)+x203)^x204);

	if (t5 != 38LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x217 = UINT32_MAX;
	uint8_t x218 = 2U;
	static int64_t x219 = -1891123809LL;
	volatile int8_t x220 = 5;
	int64_t t6 = 182228LL;

	t6 = (((x217<<x218)+x219)^x220);

	if (t6 != 2403843486LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x241 = 95U;
	uint16_t x242 = 1U;
	uint64_t x243 = UINT64_MAX;
	uint32_t x244 = 3753U;
	static uint64_t t7 = 157557902259LLU;

	t7 = (((x241<<x242)+x243)^x244);

	if (t7 != 3604LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x285 = 8188346U;
	volatile int8_t x286 = 0;
	volatile int16_t x287 = INT16_MAX;
	int32_t x288 = INT32_MAX;
	uint32_t t8 = 230035137U;

	t8 = (((x285<<x286)+x287)^x288);

	if (t8 != 2139262534U) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x417 = 6545U;
	uint32_t x418 = 1U;
	int64_t x419 = 26336459526560851LL;
	int8_t x420 = -2;

	t9 = (((x417<<x418)+x419)^x420);

	if (t9 != -26336459526573941LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x533 = 1275LL;
	static uint8_t x534 = 0U;
	volatile int64_t x535 = INT64_MIN;
	int16_t x536 = 7744;
	static int64_t t10 = -1LL;

	t10 = (((x533<<x534)+x535)^x536);

	if (t10 != -9223372036854768965LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x549 = 12U;
	static int8_t x550 = 10;
	int32_t x552 = -1;
	static uint32_t t11 = 0U;

	t11 = (((x549<<x550)+x551)^x552);

	if (t11 != 4294955000U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x569 = 54420677;
	int64_t x570 = 0LL;
	int16_t x571 = -1;
	static uint64_t x572 = 2726724080353335LLU;

	t12 = (((x569<<x570)+x571)^x572);

	if (t12 != 2726724127925491LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x731 = 244401LLU;
	static uint64_t t13 = 66272LLU;

	t13 = (((x729<<x730)+x731)^x732);

	if (t13 != 18446744073532241573LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x765 = 187;
	static int16_t x767 = 9;
	static int32_t t14 = -351;

	t14 = (((x765<<x766)+x767)^x768);

	if (t14 != 382) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x805 = UINT8_MAX;
	static int8_t x806 = 0;
	volatile int64_t x808 = -1LL;
	int64_t t15 = 21110257997371LL;

	t15 = (((x805<<x806)+x807)^x808);

	if (t15 != -128LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x969 = UINT8_MAX;
	int8_t x970 = 1;
	int64_t x972 = -5829LL;
	volatile int64_t t16 = 580LL;

	t16 = (((x969<<x970)+x971)^x972);

	if (t16 != -29323641LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x1065 = 46996779869LLU;
	uint16_t x1066 = 0U;
	volatile int16_t x1067 = INT16_MIN;
	int32_t x1068 = INT32_MAX;
	uint64_t t17 = 470639574LLU;

	t17 = (((x1065<<x1066)+x1067)^x1068);

	if (t17 != 45345049762LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x1137 = 73LLU;
	int8_t x1138 = 9;
	uint32_t x1139 = 3U;
	int32_t x1140 = 194;
	uint64_t t18 = 23722LLU;

	t18 = (((x1137<<x1138)+x1139)^x1140);

	if (t18 != 37569LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x1165 = 5189;
	int8_t x1166 = 16;
	int64_t x1167 = INT64_MIN;
	volatile int64_t t19 = -66646715LL;

	t19 = (((x1165<<x1166)+x1167)^x1168);

	if (t19 != -9223372036514676737LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x1177 = 2816U;
	uint8_t x1178 = 7U;
	uint64_t x1180 = 377872615090561LLU;
	volatile uint64_t t20 = 68105779767LLU;

	t20 = (((x1177<<x1178)+x1179)^x1180);

	if (t20 != 377872614893953LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x1289 = 1731;
	static int32_t x1290 = 0;
	int16_t x1291 = INT16_MIN;
	int64_t x1292 = -2626208079LL;
	volatile int64_t t21 = 11906056LL;

	t21 = (((x1289<<x1290)+x1291)^x1292);

	if (t21 != 2626205810LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1337 = UINT64_MAX;
	uint32_t x1338 = 4U;
	volatile int8_t x1340 = INT8_MIN;

	t22 = (((x1337<<x1338)+x1339)^x1340);

	if (t22 != 18446744073709550666LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1361 = 235187074LLU;
	uint8_t x1362 = 9U;
	int8_t x1363 = INT8_MIN;
	int32_t x1364 = INT32_MIN;
	uint64_t t23 = 39341LLU;

	t23 = (((x1361<<x1362)+x1363)^x1364);

	if (t23 != 18446743951459681152LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1389 = UINT8_MAX;
	uint8_t x1390 = 8U;
	int64_t x1391 = INT64_MIN;
	int8_t x1392 = 11;
	volatile int64_t t24 = 89144LL;

	t24 = (((x1389<<x1390)+x1391)^x1392);

	if (t24 != -9223372036854710517LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x1442 = 3;
	volatile uint8_t x1443 = 30U;
	static int32_t x1444 = 214907987;
	static int32_t t25 = -150469391;

	t25 = (((x1441<<x1442)+x1443)^x1444);

	if (t25 != 214908021) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x1458 = 3U;
	int16_t x1459 = 830;
	uint16_t x1460 = UINT16_MAX;
	static uint64_t t26 = 6278LLU;

	t26 = (((x1457<<x1458)+x1459)^x1460);

	if (t26 != 64713LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x1701 = 1054235636LL;
	uint8_t x1702 = 0U;
	static int32_t x1704 = INT32_MIN;
	volatile int64_t t27 = 599819451438408LL;

	t27 = (((x1701<<x1702)+x1703)^x1704);

	if (t27 != -1093248140LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1721 = UINT16_MAX;
	static uint8_t x1722 = 3U;
	static int16_t x1723 = INT16_MIN;
	int64_t x1724 = INT64_MAX;
	static int64_t t28 = 21961861LL;

	t28 = (((x1721<<x1722)+x1723)^x1724);

	if (t28 != 9223372036854284295LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x1741 = UINT16_MAX;
	volatile uint8_t x1742 = 1U;
	static uint64_t x1743 = UINT64_MAX;
	int64_t x1744 = -109LL;
	static volatile uint64_t t29 = 2175313309217033448LLU;

	t29 = (((x1741<<x1742)+x1743)^x1744);

	if (t29 != 18446744073709420654LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x1993 = 234U;
	int16_t x1994 = 2;
	int32_t x1995 = INT32_MIN;
	int8_t x1996 = INT8_MIN;
	static volatile int32_t t30 = -1755515;

	t30 = (((x1993<<x1994)+x1995)^x1996);

	if (t30 != 2147482664) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x2013 = 27089612891778LLU;
	static uint8_t x2014 = 1U;
	static int8_t x2015 = INT8_MAX;
	volatile int32_t x2016 = INT32_MAX;
	static volatile uint64_t t31 = 11128085LLU;

	t31 = (((x2013<<x2014)+x2015)^x2016);

	if (t31 != 54180651610748LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x2021 = 21LLU;
	uint16_t x2022 = 11U;
	uint64_t x2023 = UINT64_MAX;
	volatile uint64_t t32 = 33288578864LLU;

	t32 = (((x2021<<x2022)+x2023)^x2024);

	if (t32 != 42880LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x2029 = 130279715384LLU;
	static uint16_t x2030 = 59U;
	static uint16_t x2032 = 3U;
	static volatile uint64_t t33 = 5939410745LLU;

	t33 = (((x2029<<x2030)+x2031)^x2032);

	if (t33 != 13835058055282163708LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x2125 = UINT8_MAX;
	int8_t x2126 = 4;
	uint64_t x2127 = 1463713275635167LLU;
	uint32_t x2128 = UINT32_MAX;

	t34 = (((x2125<<x2126)+x2127)^x2128);

	if (t34 != 1463714958477872LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x2262 = 0;
	int32_t x2263 = -836;
	int16_t x2264 = INT16_MIN;
	int32_t t35 = -46287;

	t35 = (((x2261<<x2262)+x2263)^x2264);

	if (t35 != -2147451717) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x2309 = 6U;
	static int16_t x2310 = 0;
	volatile int32_t x2311 = 108993730;
	int32_t t36 = 59760186;

	t36 = (((x2309<<x2310)+x2311)^x2312);

	if (t36 != -108993737) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x2457 = 3U;
	volatile uint8_t x2458 = 7U;
	volatile uint8_t x2460 = 80U;

	t37 = (((x2457<<x2458)+x2459)^x2460);

	if (t37 != 16457) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x2469 = 4;
	uint8_t x2470 = 8U;
	int32_t x2471 = INT32_MIN;

	t38 = (((x2469<<x2470)+x2471)^x2472);

	if (t38 != -2147482600) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2513 = 51;
	int32_t x2516 = -1;

	t39 = (((x2513<<x2514)+x2515)^x2516);

	if (t39 != -392) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x2617 = 1501096;
	volatile uint8_t x2619 = 57U;
	static volatile int64_t t40 = 11LL;

	t40 = (((x2617<<x2618)+x2619)^x2620);

	if (t40 != -9223372036848771367LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x2907 = INT32_MIN;
	uint64_t x2908 = UINT64_MAX;
	static volatile uint64_t t41 = 7LLU;

	t41 = (((x2905<<x2906)+x2907)^x2908);

	if (t41 != 2147439177LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x2986 = 1U;
	uint32_t t42 = 1614U;

	t42 = (((x2985<<x2986)+x2987)^x2988);

	if (t42 != 520893398U) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x3005 = 24U;
	static int32_t x3006 = 26;
	uint64_t x3007 = UINT64_MAX;
	int16_t x3008 = 14867;
	static uint64_t t43 = 7567LLU;

	t43 = (((x3005<<x3006)+x3007)^x3008);

	if (t43 != 1610597868LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x3013 = 7U;
	static uint8_t x3014 = 3U;
	static uint32_t x3015 = 107U;
	uint64_t t44 = 1008800LLU;

	t44 = (((x3013<<x3014)+x3015)^x3016);

	if (t44 != 18446744073709551452LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x3090 = 1U;
	int8_t x3091 = INT8_MAX;
	volatile uint64_t t45 = 4058225253109LLU;

	t45 = (((x3089<<x3090)+x3091)^x3092);

	if (t45 != 18446744073522238104LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x3098 = 30;
	uint32_t x3099 = 100947U;
	uint64_t t46 = 192250440941LLU;

	t46 = (((x3097<<x3098)+x3099)^x3100);

	if (t46 != 11018340053913859500LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint16_t x3125 = UINT16_MAX;
	int8_t x3127 = 1;
	int16_t x3128 = INT16_MAX;
	volatile int32_t t47 = -344656;

	t47 = (((x3125<<x3126)+x3127)^x3128);

	if (t47 != 1015822) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x3157 = 833;
	static int32_t x3159 = INT32_MIN;
	uint32_t x3160 = 666U;
	uint32_t t48 = 20919U;

	t48 = (((x3157<<x3158)+x3159)^x3160);

	if (t48 != 2147484696U) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x3210 = 9U;
	uint8_t x3212 = UINT8_MAX;
	int32_t t49 = -41;

	t49 = (((x3209<<x3210)+x3211)^x3212);

	if (t49 != 16776902) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x3213 = INT16_MAX;
	int64_t x3214 = 9LL;
	int32_t x3215 = INT32_MIN;
	int32_t t50 = 1;

	t50 = (((x3213<<x3214)+x3215)^x3216);

	if (t50 != -2130706944) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x3453 = 7U;
	uint8_t x3455 = UINT8_MAX;
	volatile int64_t x3456 = -1LL;
	volatile int64_t t51 = -10068253184876876LL;

	t51 = (((x3453<<x3454)+x3455)^x3456);

	if (t51 != -704LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x3493 = 804116LLU;
	static int16_t x3494 = 8;
	volatile int32_t x3495 = 558268;
	int32_t x3496 = INT32_MIN;

	t52 = (((x3493<<x3494)+x3495)^x3496);

	if (t52 != 18446744071768479932LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x3610 = 1U;
	static int32_t x3611 = -357091251;
	static int8_t x3612 = INT8_MIN;
	uint64_t t53 = 1LLU;

	t53 = (((x3609<<x3610)+x3611)^x3612);

	if (t53 != 9081339273651441207LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x3651 = UINT32_MAX;
	int8_t x3652 = -1;
	uint32_t t54 = 597249U;

	t54 = (((x3649<<x3650)+x3651)^x3652);

	if (t54 != 2147483649U) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x3694 = 1U;
	int8_t x3695 = INT8_MIN;
	uint16_t x3696 = 0U;

	t55 = (((x3693<<x3694)+x3695)^x3696);

	if (t55 != 98) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x3753 = INT8_MAX;
	int8_t x3756 = INT8_MAX;
	static int64_t t56 = 240LL;

	t56 = (((x3753<<x3754)+x3755)^x3756);

	if (t56 != -779669806767357LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x3765 = INT32_MAX;
	int16_t x3766 = 0;
	uint64_t t57 = 42LLU;

	t57 = (((x3765<<x3766)+x3767)^x3768);

	if (t57 != 3010311082LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x3829 = 200;
	volatile uint8_t x3830 = 22U;
	uint8_t x3831 = 5U;
	int64_t x3832 = INT64_MIN;

	t58 = (((x3829<<x3830)+x3831)^x3832);

	if (t58 != -9223372036015915003LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x3909 = UINT8_MAX;
	int64_t x3911 = INT64_MIN;
	static volatile int16_t x3912 = INT16_MIN;
	volatile int64_t t59 = -610960445882239028LL;

	t59 = (((x3909<<x3910)+x3911)^x3912);

	if (t59 != 9223372036854743550LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x3973 = INT8_MAX;
	static int8_t x3974 = 1;
	uint64_t x3975 = 99530LLU;
	static int8_t x3976 = 1;
	static uint64_t t60 = 117138653LLU;

	t60 = (((x3973<<x3974)+x3975)^x3976);

	if (t60 != 99785LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x4074 = 3U;
	static uint64_t x4075 = UINT64_MAX;
	int16_t x4076 = 2352;

	t61 = (((x4073<<x4074)+x4075)^x4076);

	if (t61 != 2751LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x4089 = 1;
	int8_t x4090 = 10;
	volatile int32_t x4091 = 447;
	uint8_t x4092 = 58U;
	int32_t t62 = -233042224;

	t62 = (((x4089<<x4090)+x4091)^x4092);

	if (t62 != 1413) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x4277 = 363;
	int8_t x4278 = 17;
	uint8_t x4279 = UINT8_MAX;
	int32_t x4280 = -812057;

	t63 = (((x4277<<x4278)+x4279)^x4280);

	if (t63 != -47867112) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x4370 = 1U;
	uint16_t x4371 = UINT16_MAX;
	uint16_t x4372 = UINT16_MAX;
	int32_t t64 = -593305136;

	t64 = (((x4369<<x4370)+x4371)^x4372);

	if (t64 != 131030) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x4389 = 15728236LLU;
	int16_t x4390 = 0;
	int16_t x4391 = 50;
	static volatile uint8_t x4392 = 20U;
	static volatile uint64_t t65 = 10336LLU;

	t65 = (((x4389<<x4390)+x4391)^x4392);

	if (t65 != 15728266LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x4601 = UINT32_MAX;
	static uint8_t x4602 = 10U;
	static int32_t x4603 = -1314013;
	uint32_t t66 = 260036066U;

	t66 = (((x4601<<x4602)+x4603)^x4604);

	if (t66 != 4293652316U) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x4641 = 2U;
	int16_t x4642 = 1;
	uint32_t x4643 = 181U;
	int32_t x4644 = INT32_MIN;

	t67 = (((x4641<<x4642)+x4643)^x4644);

	if (t67 != 2147483833U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x4665 = 12041;
	uint8_t x4666 = 0U;
	volatile int32_t x4667 = 110574334;
	int16_t x4668 = -1;
	volatile int32_t t68 = 1666291;

	t68 = (((x4665<<x4666)+x4667)^x4668);

	if (t68 != -110586376) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x4738 = 7U;
	volatile int64_t x4739 = INT64_MIN;
	int8_t x4740 = -1;
	volatile int64_t t69 = 16722317911013751LL;

	t69 = (((x4737<<x4738)+x4739)^x4740);

	if (t69 != 9223370862837702911LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x4765 = 0U;
	int8_t x4766 = 5;
	int8_t x4767 = INT8_MIN;
	int8_t x4768 = INT8_MIN;

	t70 = (((x4765<<x4766)+x4767)^x4768);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x4797 = 54672U;
	volatile uint32_t x4799 = 3U;
	int8_t x4800 = 0;

	t71 = (((x4797<<x4798)+x4799)^x4800);

	if (t71 != 2147483651U) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x4817 = 255U;
	int8_t x4818 = 11;
	uint32_t x4819 = UINT32_MAX;
	volatile int16_t x4820 = INT16_MIN;
	volatile uint32_t t72 = 30562856U;

	t72 = (((x4817<<x4818)+x4819)^x4820);

	if (t72 != 4294473727U) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint8_t x4913 = 34U;
	static volatile uint16_t x4914 = 12U;
	volatile uint32_t x4915 = UINT32_MAX;
	volatile uint32_t t73 = 170U;

	t73 = (((x4913<<x4914)+x4915)^x4916);

	if (t73 != 505967448U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x5041 = 35702;
	int16_t x5043 = -1;
	volatile uint64_t x5044 = 35LLU;
	volatile uint64_t t74 = 7666588LLU;

	t74 = (((x5041<<x5042)+x5043)^x5044);

	if (t74 != 35670LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x5113 = UINT64_MAX;
	uint8_t x5114 = 1U;
	uint32_t x5115 = UINT32_MAX;
	int32_t x5116 = INT32_MIN;
	volatile uint64_t t75 = 925LLU;

	t75 = (((x5113<<x5114)+x5115)^x5116);

	if (t75 != 18446744071562067965LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x5253 = UINT8_MAX;
	int16_t x5254 = 1;
	volatile uint32_t x5255 = 2U;
	int64_t x5256 = 6883209265446LL;

	t76 = (((x5253<<x5254)+x5255)^x5256);

	if (t76 != 6883209265958LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x5317 = UINT8_MAX;
	uint64_t x5318 = 0LLU;
	uint32_t x5319 = 2129U;
	uint32_t x5320 = 0U;
	uint32_t t77 = 4899U;

	t77 = (((x5317<<x5318)+x5319)^x5320);

	if (t77 != 2384U) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint8_t x5321 = UINT8_MAX;
	volatile uint16_t x5322 = 12U;
	int32_t x5323 = 18470222;
	uint8_t x5324 = UINT8_MAX;
	int32_t t78 = -6;

	t78 = (((x5321<<x5322)+x5323)^x5324);

	if (t78 != 19514801) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x5381 = 12U;
	volatile uint8_t x5382 = 1U;
	uint16_t x5383 = 375U;
	static volatile int32_t x5384 = -1;

	t79 = (((x5381<<x5382)+x5383)^x5384);

	if (t79 != -400) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x5393 = 43302U;
	int16_t x5394 = 24;
	int64_t x5395 = -828795871742LL;
	int16_t x5396 = INT16_MIN;
	volatile int64_t t80 = -2487LL;

	t80 = (((x5393<<x5394)+x5395)^x5396);

	if (t80 != 828158320130LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x5485 = 1U;
	int64_t x5486 = 1LL;

	t81 = (((x5485<<x5486)+x5487)^x5488);

	if (t81 != 9223372036854775194LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x5557 = INT8_MAX;
	static uint8_t x5558 = 1U;
	static uint64_t x5559 = 1025963806LLU;
	uint8_t x5560 = 9U;
	volatile uint64_t t82 = 60918LLU;

	t82 = (((x5557<<x5558)+x5559)^x5560);

	if (t82 != 1025964053LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x5629 = 404670;
	static uint8_t x5630 = 3U;
	static uint64_t x5632 = UINT64_MAX;
	volatile uint64_t t83 = 30LLU;

	t83 = (((x5629<<x5630)+x5631)^x5632);

	if (t83 != 18446744073706314256LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x5645 = 19U;
	volatile int8_t x5646 = 3;
	int32_t x5647 = -1;
	int8_t x5648 = -1;

	t84 = (((x5645<<x5646)+x5647)^x5648);

	if (t84 != -152) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x5741 = 419820192U;
	static uint32_t x5742 = 23U;
	uint64_t x5743 = 905907LLU;
	uint64_t x5744 = 683758618LLU;
	volatile uint64_t t85 = 1LLU;

	t85 = (((x5741<<x5742)+x5743)^x5744);

	if (t85 != 2026669737LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x5773 = UINT8_MAX;
	static uint32_t x5775 = UINT32_MAX;
	static volatile uint16_t x5776 = 2028U;
	volatile uint32_t t86 = 154718436U;

	t86 = (((x5773<<x5774)+x5775)^x5776);

	if (t86 != 1810U) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x5897 = 4066U;
	uint8_t x5898 = 2U;
	static int16_t x5900 = 3432;
	volatile uint32_t t87 = 0U;

	t87 = (((x5897<<x5898)+x5899)^x5900);

	if (t87 != 4294947552U) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x5945 = 1U;
	static int8_t x5947 = INT8_MIN;
	volatile int64_t x5948 = INT64_MAX;

	t88 = (((x5945<<x5946)+x5947)^x5948);

	if (t88 != 9223372032559808637LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x6094 = 26U;
	int32_t x6096 = -1;

	t89 = (((x6093<<x6094)+x6095)^x6096);

	if (t89 != 2885681152U) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x6105 = 32180479U;
	uint16_t x6106 = 3U;
	uint8_t x6107 = 4U;
	static volatile int8_t x6108 = 0;

	t90 = (((x6105<<x6106)+x6107)^x6108);

	if (t90 != 257443836U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x6113 = INT8_MAX;
	int8_t x6114 = 0;

	t91 = (((x6113<<x6114)+x6115)^x6116);

	if (t91 != 142) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x6145 = 530;
	int16_t x6147 = INT16_MAX;
	uint64_t x6148 = UINT64_MAX;
	static volatile uint64_t t92 = 4381821680440042LLU;

	t92 = (((x6145<<x6146)+x6147)^x6148);

	if (t92 != 18446744073709451008LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x6149 = 12U;
	uint8_t x6150 = 13U;
	static int32_t x6151 = INT32_MIN;
	int32_t x6152 = -1;
	volatile uint32_t t93 = 57210533U;

	t93 = (((x6149<<x6150)+x6151)^x6152);

	if (t93 != 2147385343U) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x6157 = 7663751LLU;
	static uint64_t x6159 = UINT64_MAX;
	static int8_t x6160 = 2;
	volatile uint64_t t94 = 32453245LLU;

	t94 = (((x6157<<x6158)+x6159)^x6160);

	if (t94 != 7663748LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x6174 = 0U;
	int8_t x6175 = -13;
	int32_t x6176 = 605642;
	uint64_t t95 = 82311837497235LLU;

	t95 = (((x6173<<x6174)+x6175)^x6176);

	if (t95 != 61326722941LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x6241 = 250963LLU;
	int8_t x6242 = 1;
	uint64_t x6243 = UINT64_MAX;
	volatile int32_t x6244 = INT32_MIN;
	volatile uint64_t t96 = 210277848955355097LLU;

	t96 = (((x6241<<x6242)+x6243)^x6244);

	if (t96 != 18446744071562569893LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x6262 = 13U;
	uint8_t x6263 = 13U;
	volatile int64_t x6264 = 416033457LL;
	static volatile int64_t t97 = -12701879083LL;

	t97 = (((x6261<<x6262)+x6263)^x6264);

	if (t97 != 417434300LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x6278 = 0U;
	int16_t x6279 = INT16_MIN;
	int32_t t98 = 2418799;

	t98 = (((x6277<<x6278)+x6279)^x6280);

	if (t98 != -2147450881) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x6407 = -1LL;
	static int8_t x6408 = INT8_MIN;
	int64_t t99 = -2701683LL;

	t99 = (((x6405<<x6406)+x6407)^x6408);

	if (t99 != -262021LL) { NG(); } else { ; }
	
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

