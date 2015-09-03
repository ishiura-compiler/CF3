#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x90 = 17;
uint16_t x95 = 0U;
uint32_t t2 = 5594U;
volatile int64_t t6 = 1032LL;
int32_t x230 = 1;
static volatile int8_t x254 = 3;
int32_t x299 = 254;
volatile int32_t t9 = 130772314;
int16_t x347 = -1;
static int32_t t11 = 1;
volatile int32_t t12 = 1298249;
uint64_t x525 = 4348870132LLU;
int32_t x526 = 1;
uint64_t t14 = 75626100951LLU;
uint64_t x713 = 188428184585213LLU;
int32_t t17 = -402756;
int16_t x797 = 15;
uint16_t x899 = 9682U;
volatile int64_t t21 = 2079546289147908250LL;
static uint32_t x1010 = 1U;
int32_t x1012 = -1;
int16_t x1062 = 0;
uint64_t x1063 = 119665128202354LLU;
uint32_t x1064 = 17983242U;
int32_t t25 = 8168679;
int8_t x1357 = INT8_MAX;
static int32_t x1359 = INT32_MIN;
uint16_t x1432 = 121U;
int8_t x1714 = 0;
static volatile int32_t t33 = 109468360;
static int32_t x1760 = INT32_MIN;
int8_t x1980 = 0;
volatile uint64_t x2039 = 570LLU;
static uint32_t x2048 = 5674454U;
volatile int32_t t38 = -114600172;
volatile int64_t x2049 = INT64_MAX;
uint32_t x2052 = UINT32_MAX;
static uint32_t x2061 = 98U;
volatile uint8_t x2081 = UINT8_MAX;
static int32_t t41 = -16815634;
uint64_t x2109 = 493LLU;
static uint32_t t43 = 6458165U;
uint8_t x2322 = 3U;
volatile int16_t x2380 = INT16_MAX;
int64_t x2384 = INT64_MIN;
int64_t x2421 = INT64_MAX;
volatile uint8_t x2422 = 2U;
int16_t x2424 = -1;
static volatile uint8_t x2490 = 1U;
int32_t t50 = -1099;
static uint64_t x2524 = 1659LLU;
uint64_t x2539 = 506LLU;
uint8_t x2683 = 42U;
static int32_t x2685 = 125;
uint8_t x2749 = UINT8_MAX;
volatile int16_t x2752 = INT16_MIN;
uint8_t x2813 = 112U;
volatile int8_t x2883 = INT8_MAX;
int16_t x2947 = INT16_MIN;
uint32_t x2948 = 3U;
volatile uint64_t t66 = 1147293889132480LLU;
volatile uint32_t x3005 = 2699359U;
int32_t x3007 = INT32_MIN;
volatile int64_t t68 = 418815LL;
int64_t x3323 = 62661400LL;
volatile int32_t t72 = 790757082;
volatile int32_t t75 = 4217;
int16_t x3511 = INT16_MAX;
int64_t x3549 = 347196728LL;
uint16_t x3550 = 27U;
uint8_t x3593 = 38U;
static uint16_t x3673 = 7107U;
volatile int32_t t80 = 4414;
uint8_t x3681 = UINT8_MAX;
int16_t x3871 = 2850;
uint8_t x3872 = 2U;
volatile int64_t x3980 = INT64_MAX;
int64_t x4167 = -92943895635985LL;
static int32_t x4289 = INT32_MAX;
uint16_t x4290 = 7U;
int32_t x4291 = 1806300;
static int64_t x4292 = -122LL;
int32_t t90 = -982983080;
static volatile int64_t x4384 = INT64_MIN;
uint32_t x4406 = 2U;
int8_t x4407 = INT8_MAX;
int32_t t94 = -31521006;
uint16_t x4597 = UINT16_MAX;
int16_t x4599 = INT16_MIN;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	uint16_t x2 = 2U;
	int64_t x3 = -1LL;
	uint64_t x4 = 153LLU;
	volatile uint64_t t0 = 4LLU;

	t0 = ((x1>>x2)^(x3==x4));

	if (t0 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x89 = UINT32_MAX;
	uint64_t x91 = 860886LLU;
	uint8_t x92 = 40U;
	volatile uint32_t t1 = 50212U;

	t1 = ((x89>>x90)^(x91==x92));

	if (t1 != 32767U) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x93 = 104001747U;
	volatile int8_t x94 = 0;
	int64_t x96 = INT64_MIN;

	t2 = ((x93>>x94)^(x95==x96));

	if (t2 != 104001747U) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x113 = UINT16_MAX;
	uint16_t x114 = 10U;
	volatile int64_t x115 = -1LL;
	int16_t x116 = 30;
	volatile int32_t t3 = 11555;

	t3 = ((x113>>x114)^(x115==x116));

	if (t3 != 63) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x121 = 52310;
	int16_t x122 = 1;
	uint16_t x123 = UINT16_MAX;
	int32_t x124 = INT32_MIN;
	volatile int32_t t4 = 1003037632;

	t4 = ((x121>>x122)^(x123==x124));

	if (t4 != 26155) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x165 = 1U;
	uint8_t x166 = 1U;
	int8_t x167 = INT8_MIN;
	int8_t x168 = -15;
	static int32_t t5 = 0;

	t5 = ((x165>>x166)^(x167==x168));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x197 = 1LL;
	volatile uint16_t x198 = 52U;
	volatile int8_t x199 = INT8_MIN;
	volatile uint16_t x200 = UINT16_MAX;

	t6 = ((x197>>x198)^(x199==x200));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x229 = 1U;
	volatile uint8_t x231 = 15U;
	static volatile int64_t x232 = -873510LL;
	int32_t t7 = -42837910;

	t7 = ((x229>>x230)^(x231==x232));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x253 = 506U;
	static int64_t x255 = INT64_MIN;
	volatile int8_t x256 = -54;
	uint32_t t8 = 2657U;

	t8 = ((x253>>x254)^(x255==x256));

	if (t8 != 63U) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x297 = UINT16_MAX;
	volatile int32_t x298 = 0;
	volatile int64_t x300 = INT64_MIN;

	t9 = ((x297>>x298)^(x299==x300));

	if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x341 = INT64_MAX;
	uint16_t x342 = 42U;
	int64_t x343 = INT64_MIN;
	volatile int8_t x344 = -1;
	static int64_t t10 = 3301LL;

	t10 = ((x341>>x342)^(x343==x344));

	if (t10 != 2097151LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x345 = 109U;
	uint8_t x346 = 4U;
	static int64_t x348 = -1LL;

	t11 = ((x345>>x346)^(x347==x348));

	if (t11 != 7) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x357 = 1U;
	uint8_t x358 = 1U;
	uint64_t x359 = 391519397LLU;
	int8_t x360 = -45;

	t12 = ((x357>>x358)^(x359==x360));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x421 = 7091239600392087593LLU;
	int16_t x422 = 20;
	volatile uint64_t x423 = 11130830411012323LLU;
	uint32_t x424 = UINT32_MAX;
	static uint64_t t13 = 455LLU;

	t13 = ((x421>>x422)^(x423==x424));

	if (t13 != 6762733078376LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x527 = INT64_MIN;
	static int8_t x528 = INT8_MIN;

	t14 = ((x525>>x526)^(x527==x528));

	if (t14 != 2174435066LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x641 = UINT32_MAX;
	uint8_t x642 = 21U;
	int64_t x643 = -1LL;
	int8_t x644 = INT8_MIN;
	uint32_t t15 = 10483U;

	t15 = ((x641>>x642)^(x643==x644));

	if (t15 != 2047U) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x714 = 63U;
	static int16_t x715 = -105;
	int8_t x716 = INT8_MIN;
	static volatile uint64_t t16 = 237409938280494LLU;

	t16 = ((x713>>x714)^(x715==x716));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x781 = UINT8_MAX;
	static uint8_t x782 = 9U;
	uint32_t x783 = 353703U;
	int64_t x784 = INT64_MIN;

	t17 = ((x781>>x782)^(x783==x784));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x798 = 2U;
	volatile uint32_t x799 = 945U;
	int64_t x800 = INT64_MIN;
	static int32_t t18 = 0;

	t18 = ((x797>>x798)^(x799==x800));

	if (t18 != 3) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x809 = UINT16_MAX;
	uint32_t x810 = 0U;
	int8_t x811 = INT8_MIN;
	int16_t x812 = INT16_MAX;
	volatile int32_t t19 = -225793;

	t19 = ((x809>>x810)^(x811==x812));

	if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x897 = 9232LLU;
	volatile uint8_t x898 = 0U;
	volatile int32_t x900 = INT32_MAX;
	uint64_t t20 = 54747023107142LLU;

	t20 = ((x897>>x898)^(x899==x900));

	if (t20 != 9232LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x901 = 9LL;
	uint32_t x902 = 0U;
	int8_t x903 = INT8_MAX;
	int64_t x904 = INT64_MAX;

	t21 = ((x901>>x902)^(x903==x904));

	if (t21 != 9LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x1009 = INT8_MAX;
	int8_t x1011 = -1;
	int32_t t22 = -57;

	t22 = ((x1009>>x1010)^(x1011==x1012));

	if (t22 != 62) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x1057 = UINT32_MAX;
	uint8_t x1058 = 0U;
	static uint32_t x1059 = 1004U;
	int32_t x1060 = INT32_MAX;
	uint32_t t23 = UINT32_MAX;

	t23 = ((x1057>>x1058)^(x1059==x1060));

	if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x1061 = 32U;
	volatile int32_t t24 = -53422994;

	t24 = ((x1061>>x1062)^(x1063==x1064));

	if (t24 != 32) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x1237 = UINT16_MAX;
	int8_t x1238 = 27;
	int64_t x1239 = -31LL;
	uint32_t x1240 = UINT32_MAX;

	t25 = ((x1237>>x1238)^(x1239==x1240));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1325 = 13LL;
	uint8_t x1326 = 5U;
	static int64_t x1327 = INT64_MIN;
	static int16_t x1328 = INT16_MIN;
	volatile int64_t t26 = 150155311777560LL;

	t26 = ((x1325>>x1326)^(x1327==x1328));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1358 = 1;
	uint8_t x1360 = UINT8_MAX;
	volatile int32_t t27 = -58678214;

	t27 = ((x1357>>x1358)^(x1359==x1360));

	if (t27 != 63) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1361 = 84U;
	int8_t x1362 = 1;
	volatile int8_t x1363 = 8;
	static uint8_t x1364 = 59U;
	int32_t t28 = 93;

	t28 = ((x1361>>x1362)^(x1363==x1364));

	if (t28 != 42) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1401 = 2;
	volatile uint16_t x1402 = 2U;
	volatile uint8_t x1403 = 80U;
	int32_t x1404 = INT32_MIN;
	int32_t t29 = 347334366;

	t29 = ((x1401>>x1402)^(x1403==x1404));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x1429 = UINT16_MAX;
	uint8_t x1430 = 5U;
	int16_t x1431 = -1;
	static int32_t t30 = -74;

	t30 = ((x1429>>x1430)^(x1431==x1432));

	if (t30 != 2047) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1629 = 5415624;
	uint8_t x1630 = 8U;
	volatile uint64_t x1631 = 260LLU;
	int16_t x1632 = -1;
	volatile int32_t t31 = -1000616;

	t31 = ((x1629>>x1630)^(x1631==x1632));

	if (t31 != 21154) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1713 = 3;
	volatile int32_t x1715 = -1;
	volatile int16_t x1716 = -1;
	volatile int32_t t32 = 15387;

	t32 = ((x1713>>x1714)^(x1715==x1716));

	if (t32 != 2) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1721 = 39;
	static uint16_t x1722 = 6U;
	int32_t x1723 = INT32_MIN;
	int8_t x1724 = -1;

	t33 = ((x1721>>x1722)^(x1723==x1724));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x1757 = UINT64_MAX;
	uint8_t x1758 = 1U;
	uint8_t x1759 = 12U;
	volatile uint64_t t34 = 463LLU;

	t34 = ((x1757>>x1758)^(x1759==x1760));

	if (t34 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x1913 = 27827U;
	static uint16_t x1914 = 19U;
	volatile int32_t x1915 = INT32_MAX;
	static uint64_t x1916 = UINT64_MAX;
	static volatile int32_t t35 = -98868;

	t35 = ((x1913>>x1914)^(x1915==x1916));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x1977 = 1U;
	uint8_t x1978 = 30U;
	int64_t x1979 = INT64_MIN;
	static volatile int32_t t36 = 40408823;

	t36 = ((x1977>>x1978)^(x1979==x1980));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x2037 = INT32_MAX;
	int8_t x2038 = 1;
	uint32_t x2040 = 6445U;
	volatile int32_t t37 = 4;

	t37 = ((x2037>>x2038)^(x2039==x2040));

	if (t37 != 1073741823) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x2045 = 23880U;
	int8_t x2046 = 0;
	int64_t x2047 = 1685558116481813LL;

	t38 = ((x2045>>x2046)^(x2047==x2048));

	if (t38 != 23880) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x2050 = 34;
	int8_t x2051 = -3;
	int64_t t39 = -723LL;

	t39 = ((x2049>>x2050)^(x2051==x2052));

	if (t39 != 536870911LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x2062 = 2LLU;
	uint32_t x2063 = 24U;
	int32_t x2064 = -1;
	volatile uint32_t t40 = 18288387U;

	t40 = ((x2061>>x2062)^(x2063==x2064));

	if (t40 != 24U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x2082 = 19U;
	int8_t x2083 = 10;
	static int64_t x2084 = INT64_MIN;

	t41 = ((x2081>>x2082)^(x2083==x2084));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x2110 = 14U;
	int64_t x2111 = 490384561250045LL;
	uint8_t x2112 = 6U;
	uint64_t t42 = 60777843910009061LLU;

	t42 = ((x2109>>x2110)^(x2111==x2112));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x2113 = UINT32_MAX;
	static uint8_t x2114 = 26U;
	static int16_t x2115 = INT16_MIN;
	int16_t x2116 = -1;

	t43 = ((x2113>>x2114)^(x2115==x2116));

	if (t43 != 63U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x2237 = 3;
	uint16_t x2238 = 27U;
	int64_t x2239 = -1293085054563LL;
	int8_t x2240 = INT8_MIN;
	int32_t t44 = 1342422;

	t44 = ((x2237>>x2238)^(x2239==x2240));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x2321 = UINT16_MAX;
	volatile int16_t x2323 = INT16_MAX;
	int32_t x2324 = 7129863;
	static volatile int32_t t45 = 4228;

	t45 = ((x2321>>x2322)^(x2323==x2324));

	if (t45 != 8191) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2377 = INT8_MAX;
	uint8_t x2378 = 2U;
	uint8_t x2379 = 58U;
	static volatile int32_t t46 = 907294561;

	t46 = ((x2377>>x2378)^(x2379==x2380));

	if (t46 != 31) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x2381 = 86017U;
	int8_t x2382 = 29;
	uint32_t x2383 = 75072134U;
	uint32_t t47 = 26728966U;

	t47 = ((x2381>>x2382)^(x2383==x2384));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x2389 = 1;
	int8_t x2390 = 0;
	int8_t x2391 = -1;
	int8_t x2392 = 7;
	int32_t t48 = -118162;

	t48 = ((x2389>>x2390)^(x2391==x2392));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x2423 = -3;
	static int64_t t49 = -287489618382LL;

	t49 = ((x2421>>x2422)^(x2423==x2424));

	if (t49 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x2489 = UINT8_MAX;
	volatile int8_t x2491 = INT8_MIN;
	uint8_t x2492 = 29U;

	t50 = ((x2489>>x2490)^(x2491==x2492));

	if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x2521 = 56078782426922LL;
	uint8_t x2522 = 1U;
	int16_t x2523 = INT16_MIN;
	int64_t t51 = -424463062LL;

	t51 = ((x2521>>x2522)^(x2523==x2524));

	if (t51 != 28039391213461LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x2537 = 52;
	int8_t x2538 = 1;
	volatile int8_t x2540 = INT8_MIN;
	static volatile int32_t t52 = -41583;

	t52 = ((x2537>>x2538)^(x2539==x2540));

	if (t52 != 26) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x2553 = 137596;
	uint8_t x2554 = 1U;
	uint8_t x2555 = 116U;
	uint16_t x2556 = UINT16_MAX;
	int32_t t53 = -2444;

	t53 = ((x2553>>x2554)^(x2555==x2556));

	if (t53 != 68798) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x2565 = UINT8_MAX;
	uint16_t x2566 = 1U;
	uint32_t x2567 = 236082931U;
	uint32_t x2568 = 40193U;
	int32_t t54 = 119802787;

	t54 = ((x2565>>x2566)^(x2567==x2568));

	if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x2581 = 0U;
	int8_t x2582 = 3;
	int32_t x2583 = -1;
	volatile int32_t x2584 = INT32_MAX;
	volatile int32_t t55 = 1932;

	t55 = ((x2581>>x2582)^(x2583==x2584));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x2649 = 10;
	volatile int16_t x2650 = 25;
	int8_t x2651 = INT8_MIN;
	uint64_t x2652 = 65LLU;
	int32_t t56 = -412;

	t56 = ((x2649>>x2650)^(x2651==x2652));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x2681 = INT8_MAX;
	int8_t x2682 = 0;
	int8_t x2684 = INT8_MIN;
	int32_t t57 = -2017;

	t57 = ((x2681>>x2682)^(x2683==x2684));

	if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x2686 = 7U;
	static volatile int32_t x2687 = INT32_MIN;
	uint64_t x2688 = 925LLU;
	volatile int32_t t58 = -152;

	t58 = ((x2685>>x2686)^(x2687==x2688));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x2737 = 2501615U;
	static int32_t x2738 = 9;
	int64_t x2739 = INT64_MIN;
	static volatile int16_t x2740 = 0;
	uint32_t t59 = 2436U;

	t59 = ((x2737>>x2738)^(x2739==x2740));

	if (t59 != 4885U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x2750 = 15U;
	uint16_t x2751 = 18U;
	int32_t t60 = 4;

	t60 = ((x2749>>x2750)^(x2751==x2752));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x2757 = 682690037165LLU;
	static int16_t x2758 = 49;
	int64_t x2759 = INT64_MIN;
	uint8_t x2760 = 11U;
	volatile uint64_t t61 = 5803711549622639524LLU;

	t61 = ((x2757>>x2758)^(x2759==x2760));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x2765 = INT16_MAX;
	int8_t x2766 = 2;
	static int8_t x2767 = INT8_MAX;
	volatile uint16_t x2768 = 23U;
	int32_t t62 = 32162;

	t62 = ((x2765>>x2766)^(x2767==x2768));

	if (t62 != 8191) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x2769 = 1;
	uint8_t x2770 = 0U;
	int16_t x2771 = INT16_MIN;
	volatile int16_t x2772 = INT16_MIN;
	int32_t t63 = 110;

	t63 = ((x2769>>x2770)^(x2771==x2772));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x2814 = 31;
	uint16_t x2815 = 13387U;
	volatile uint8_t x2816 = 76U;
	int32_t t64 = 25;

	t64 = ((x2813>>x2814)^(x2815==x2816));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x2881 = UINT64_MAX;
	uint8_t x2882 = 57U;
	volatile int8_t x2884 = -4;
	uint64_t t65 = 526189144132LLU;

	t65 = ((x2881>>x2882)^(x2883==x2884));

	if (t65 != 127LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x2945 = 2532665486754399LLU;
	uint64_t x2946 = 15LLU;

	t66 = ((x2945>>x2946)^(x2947==x2948));

	if (t66 != 77290816856LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x3006 = 3U;
	static int64_t x3008 = INT64_MAX;
	volatile uint32_t t67 = 1773U;

	t67 = ((x3005>>x3006)^(x3007==x3008));

	if (t67 != 337419U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x3013 = INT64_MAX;
	uint16_t x3014 = 2U;
	int16_t x3015 = -1;
	static uint64_t x3016 = 4052013LLU;

	t68 = ((x3013>>x3014)^(x3015==x3016));

	if (t68 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x3245 = UINT32_MAX;
	int8_t x3246 = 7;
	static int32_t x3247 = -1;
	int64_t x3248 = INT64_MIN;
	uint32_t t69 = 41U;

	t69 = ((x3245>>x3246)^(x3247==x3248));

	if (t69 != 33554431U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x3317 = INT16_MAX;
	volatile uint64_t x3318 = 29LLU;
	int64_t x3319 = INT64_MAX;
	uint64_t x3320 = 16765868629053LLU;
	int32_t t70 = 117;

	t70 = ((x3317>>x3318)^(x3319==x3320));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x3321 = 59U;
	uint16_t x3322 = 0U;
	uint64_t x3324 = UINT64_MAX;
	static int32_t t71 = -71771050;

	t71 = ((x3321>>x3322)^(x3323==x3324));

	if (t71 != 59) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int32_t x3329 = INT32_MAX;
	uint32_t x3330 = 31U;
	int8_t x3331 = INT8_MIN;
	volatile int32_t x3332 = 9690;

	t72 = ((x3329>>x3330)^(x3331==x3332));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x3425 = 6;
	uint32_t x3426 = 27U;
	int32_t x3427 = -2;
	uint32_t x3428 = 32132574U;
	int32_t t73 = -5643113;

	t73 = ((x3425>>x3426)^(x3427==x3428));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x3489 = INT8_MAX;
	uint16_t x3490 = 0U;
	int16_t x3491 = -1;
	static int64_t x3492 = 35669086454899LL;
	volatile int32_t t74 = -13445;

	t74 = ((x3489>>x3490)^(x3491==x3492));

	if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x3501 = UINT16_MAX;
	uint8_t x3502 = 13U;
	volatile int8_t x3503 = 1;
	static uint32_t x3504 = 252002U;

	t75 = ((x3501>>x3502)^(x3503==x3504));

	if (t75 != 7) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x3509 = 10172U;
	static volatile uint16_t x3510 = 1U;
	int32_t x3512 = INT32_MIN;
	static uint32_t t76 = 158748154U;

	t76 = ((x3509>>x3510)^(x3511==x3512));

	if (t76 != 5086U) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x3551 = UINT32_MAX;
	static uint64_t x3552 = 1020228228816199LLU;
	volatile int64_t t77 = 1903LL;

	t77 = ((x3549>>x3550)^(x3551==x3552));

	if (t77 != 2LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x3594 = 1U;
	uint32_t x3595 = UINT32_MAX;
	volatile int8_t x3596 = INT8_MIN;
	volatile int32_t t78 = 0;

	t78 = ((x3593>>x3594)^(x3595==x3596));

	if (t78 != 19) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x3637 = UINT8_MAX;
	int8_t x3638 = 0;
	uint32_t x3639 = UINT32_MAX;
	volatile uint8_t x3640 = UINT8_MAX;
	volatile int32_t t79 = -106174;

	t79 = ((x3637>>x3638)^(x3639==x3640));

	if (t79 != 255) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x3674 = 8;
	volatile uint32_t x3675 = 17601695U;
	uint32_t x3676 = UINT32_MAX;

	t80 = ((x3673>>x3674)^(x3675==x3676));

	if (t80 != 27) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x3682 = 4U;
	int16_t x3683 = 261;
	int16_t x3684 = -645;
	static volatile int32_t t81 = 42;

	t81 = ((x3681>>x3682)^(x3683==x3684));

	if (t81 != 15) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x3869 = UINT8_MAX;
	uint64_t x3870 = 1LLU;
	int32_t t82 = -4055685;

	t82 = ((x3869>>x3870)^(x3871==x3872));

	if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x3977 = INT32_MAX;
	uint16_t x3978 = 6U;
	static volatile uint32_t x3979 = 410955163U;
	int32_t t83 = 242533210;

	t83 = ((x3977>>x3978)^(x3979==x3980));

	if (t83 != 33554431) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x4117 = UINT16_MAX;
	uint8_t x4118 = 4U;
	static int16_t x4119 = INT16_MAX;
	uint16_t x4120 = 21490U;
	int32_t t84 = -94;

	t84 = ((x4117>>x4118)^(x4119==x4120));

	if (t84 != 4095) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint64_t x4161 = 4143553002723636148LLU;
	uint16_t x4162 = 45U;
	static int16_t x4163 = -1;
	uint16_t x4164 = 75U;
	static volatile uint64_t t85 = 7699485LLU;

	t85 = ((x4161>>x4162)^(x4163==x4164));

	if (t85 != 117766LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x4165 = UINT16_MAX;
	uint32_t x4166 = 3U;
	int8_t x4168 = INT8_MAX;
	static volatile int32_t t86 = 892631;

	t86 = ((x4165>>x4166)^(x4167==x4168));

	if (t86 != 8191) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x4269 = 1003U;
	int8_t x4270 = 16;
	int8_t x4271 = INT8_MAX;
	static uint64_t x4272 = UINT64_MAX;
	volatile int32_t t87 = -11;

	t87 = ((x4269>>x4270)^(x4271==x4272));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t t88 = -1;

	t88 = ((x4289>>x4290)^(x4291==x4292));

	if (t88 != 16777215) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x4353 = 2LLU;
	volatile uint16_t x4354 = 6U;
	int32_t x4355 = INT32_MIN;
	int8_t x4356 = -4;
	volatile uint64_t t89 = 5845893387576895287LLU;

	t89 = ((x4353>>x4354)^(x4355==x4356));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x4369 = UINT16_MAX;
	uint8_t x4370 = 5U;
	uint8_t x4371 = 0U;
	int8_t x4372 = -8;

	t90 = ((x4369>>x4370)^(x4371==x4372));

	if (t90 != 2047) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x4381 = 11U;
	int8_t x4382 = 10;
	int16_t x4383 = INT16_MAX;
	volatile int32_t t91 = 169550;

	t91 = ((x4381>>x4382)^(x4383==x4384));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x4405 = INT16_MAX;
	int8_t x4408 = -23;
	static volatile int32_t t92 = 17;

	t92 = ((x4405>>x4406)^(x4407==x4408));

	if (t92 != 8191) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x4445 = INT16_MAX;
	uint8_t x4446 = 4U;
	uint64_t x4447 = UINT64_MAX;
	static int64_t x4448 = 916409702260158459LL;
	int32_t t93 = -14;

	t93 = ((x4445>>x4446)^(x4447==x4448));

	if (t93 != 2047) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x4505 = INT32_MAX;
	int8_t x4506 = 29;
	uint8_t x4507 = 45U;
	uint8_t x4508 = 30U;

	t94 = ((x4505>>x4506)^(x4507==x4508));

	if (t94 != 3) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x4569 = 105080030LLU;
	uint16_t x4570 = 43U;
	volatile int8_t x4571 = INT8_MAX;
	int8_t x4572 = -12;
	static uint64_t t95 = 216LLU;

	t95 = ((x4569>>x4570)^(x4571==x4572));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x4581 = 3;
	uint8_t x4582 = 2U;
	int32_t x4583 = -1;
	int8_t x4584 = 33;
	volatile int32_t t96 = -12099140;

	t96 = ((x4581>>x4582)^(x4583==x4584));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x4598 = 31;
	static int8_t x4600 = -1;
	int32_t t97 = -814;

	t97 = ((x4597>>x4598)^(x4599==x4600));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x4637 = 7U;
	uint8_t x4638 = 1U;
	int8_t x4639 = INT8_MIN;
	int64_t x4640 = INT64_MIN;
	volatile int32_t t98 = 0;

	t98 = ((x4637>>x4638)^(x4639==x4640));

	if (t98 != 3) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x4681 = UINT64_MAX;
	static uint16_t x4682 = 10U;
	int64_t x4683 = -1LL;
	uint8_t x4684 = UINT8_MAX;
	uint64_t t99 = 54417746510023535LLU;

	t99 = ((x4681>>x4682)^(x4683==x4684));

	if (t99 != 18014398509481983LLU) { NG(); } else { ; }
	
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

