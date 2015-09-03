#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x2 = 1U;
uint16_t x4 = 564U;
volatile int64_t t0 = -2210131333718911458LL;
static int16_t x66 = 11;
int16_t x143 = INT16_MIN;
int16_t x144 = -49;
int32_t x146 = 1;
volatile int32_t t4 = 29153;
static uint8_t x322 = 7U;
uint16_t x479 = 3U;
volatile int32_t t9 = 42700260;
volatile uint8_t x721 = 13U;
int16_t x724 = 3;
static int8_t x752 = -1;
int16_t x1293 = 5;
uint16_t x1302 = 0U;
volatile int32_t t19 = 0;
uint32_t x1417 = UINT32_MAX;
int8_t x1418 = 4;
static int8_t x1419 = INT8_MIN;
static volatile uint32_t t20 = 122U;
volatile int64_t x1442 = 0LL;
static volatile int64_t x1443 = -1LL;
int8_t x1582 = 24;
volatile uint8_t x1584 = UINT8_MAX;
uint32_t x1773 = 1219645264U;
int16_t x1963 = 1;
int8_t x2134 = 30;
uint16_t x2138 = 1U;
volatile int16_t x2139 = -1;
volatile uint64_t t35 = 4542552233720LLU;
static volatile int16_t x2271 = -1;
uint8_t x2350 = 0U;
int64_t x2373 = INT64_MAX;
int32_t x2403 = -1;
uint32_t x2449 = UINT32_MAX;
int32_t x2476 = -1;
volatile int16_t x2600 = 18;
int16_t x2641 = INT16_MAX;
int8_t x2802 = 10;
static int64_t x2803 = INT64_MIN;
int16_t x2862 = 3;
volatile uint32_t t54 = 80261U;
static uint8_t x2961 = 0U;
int64_t x2998 = 1LL;
int32_t x3116 = 14733;
uint16_t x3241 = 426U;
int64_t t59 = 289159708782LL;
volatile int32_t x3312 = INT32_MAX;
volatile uint32_t t61 = 635347U;
int8_t x3475 = INT8_MIN;
uint8_t x3476 = 0U;
volatile int64_t t66 = -142LL;
static int64_t x3569 = 15LL;
volatile int16_t x3570 = 0;
static uint32_t x3571 = 27828U;
uint32_t x3645 = 31534U;
int16_t x3731 = INT16_MIN;
static int64_t x3732 = INT64_MAX;
uint32_t x3813 = 2008652449U;
volatile uint32_t t73 = 116U;
int64_t x4167 = 1759046LL;
volatile int64_t t74 = 886900461811LL;
int8_t x4177 = INT8_MAX;
uint32_t x4178 = 1U;
int64_t x4179 = -4813146315405878LL;
int64_t x4289 = 899538889586LL;
int8_t x4433 = 1;
uint32_t t80 = 345620U;
int8_t x4500 = -47;
volatile int32_t t85 = 2574988;
volatile uint32_t t87 = 504119U;
static volatile uint16_t x4970 = 1U;
volatile int32_t t90 = -39;
int64_t x5211 = INT64_MIN;
static volatile int32_t t92 = -6;
int32_t x5287 = INT32_MAX;
static volatile int32_t t94 = 50;
int8_t x5357 = INT8_MAX;
uint16_t x5438 = 24U;
volatile int64_t t97 = -9699LL;
int8_t x5477 = 1;
uint16_t x5617 = 2U;
int32_t x5619 = INT32_MAX;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	int64_t x3 = INT64_MIN;

	t0 = (((x1>>x2)/x3)-x4);

	if (t0 != -564LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x65 = 2U;
	int32_t x67 = INT32_MIN;
	int16_t x68 = 12;
	volatile int32_t t1 = -32537;

	t1 = (((x65>>x66)/x67)-x68);

	if (t1 != -12) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x141 = 1;
	uint8_t x142 = 5U;
	int32_t t2 = -91430338;

	t2 = (((x141>>x142)/x143)-x144);

	if (t2 != 49) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x145 = 1;
	int8_t x147 = 12;
	int32_t x148 = -1;
	static volatile int32_t t3 = -468698;

	t3 = (((x145>>x146)/x147)-x148);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x217 = 3;
	uint8_t x218 = 1U;
	static uint8_t x219 = 63U;
	int8_t x220 = 1;

	t4 = (((x217>>x218)/x219)-x220);

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x253 = INT16_MAX;
	uint32_t x254 = 2U;
	static volatile uint8_t x255 = 24U;
	int8_t x256 = INT8_MIN;
	volatile int32_t t5 = -3917;

	t5 = (((x253>>x254)/x255)-x256);

	if (t5 != 469) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x321 = 3214U;
	int16_t x323 = INT16_MIN;
	int8_t x324 = INT8_MIN;
	static volatile int32_t t6 = 204550;

	t6 = (((x321>>x322)/x323)-x324);

	if (t6 != 128) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x477 = UINT16_MAX;
	int8_t x478 = 28;
	uint64_t x480 = 2562858647707LLU;
	uint64_t t7 = 9010302852807LLU;

	t7 = (((x477>>x478)/x479)-x480);

	if (t7 != 18446741510850903909LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x565 = 1;
	uint8_t x566 = 7U;
	int8_t x567 = -2;
	volatile uint8_t x568 = UINT8_MAX;
	static volatile int32_t t8 = -3;

	t8 = (((x565>>x566)/x567)-x568);

	if (t8 != -255) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x685 = UINT16_MAX;
	int8_t x686 = 1;
	static uint16_t x687 = UINT16_MAX;
	uint8_t x688 = UINT8_MAX;

	t9 = (((x685>>x686)/x687)-x688);

	if (t9 != -255) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint8_t x722 = 11U;
	uint32_t x723 = 58166U;
	static uint32_t t10 = 0U;

	t10 = (((x721>>x722)/x723)-x724);

	if (t10 != 4294967293U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x749 = 117LL;
	int16_t x750 = 0;
	int32_t x751 = INT32_MIN;
	volatile int64_t t11 = -15486418LL;

	t11 = (((x749>>x750)/x751)-x752);

	if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x861 = UINT64_MAX;
	volatile uint8_t x862 = 3U;
	uint8_t x863 = 25U;
	int32_t x864 = -201406;
	volatile uint64_t t12 = 4624999120848765LLU;

	t12 = (((x861>>x862)/x863)-x864);

	if (t12 != 92233720368749164LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x869 = 5;
	uint8_t x870 = 0U;
	int16_t x871 = 3;
	static int64_t x872 = INT64_MAX;
	int64_t t13 = 13355079067807LL;

	t13 = (((x869>>x870)/x871)-x872);

	if (t13 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x997 = UINT16_MAX;
	volatile uint8_t x998 = 13U;
	static int64_t x999 = INT64_MIN;
	static uint16_t x1000 = 53U;
	int64_t t14 = 2213910466959999LL;

	t14 = (((x997>>x998)/x999)-x1000);

	if (t14 != -53LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x1149 = 1U;
	uint32_t x1150 = 0U;
	static int8_t x1151 = 10;
	uint64_t x1152 = 2051295930052LLU;
	uint64_t t15 = 16089989122LLU;

	t15 = (((x1149>>x1150)/x1151)-x1152);

	if (t15 != 18446742022413621564LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x1294 = 23U;
	volatile int16_t x1295 = INT16_MIN;
	uint64_t x1296 = UINT64_MAX;
	volatile uint64_t t16 = 453459472LLU;

	t16 = (((x1293>>x1294)/x1295)-x1296);

	if (t16 != 1LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x1301 = UINT8_MAX;
	int16_t x1303 = INT16_MIN;
	int32_t x1304 = INT32_MAX;
	volatile int32_t t17 = -10;

	t17 = (((x1301>>x1302)/x1303)-x1304);

	if (t17 != -2147483647) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x1337 = UINT8_MAX;
	static int16_t x1338 = 1;
	int64_t x1339 = INT64_MAX;
	int32_t x1340 = 220162086;
	int64_t t18 = 1996617021844LL;

	t18 = (((x1337>>x1338)/x1339)-x1340);

	if (t18 != -220162086LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x1409 = 3279;
	static int8_t x1410 = 5;
	int8_t x1411 = INT8_MIN;
	int8_t x1412 = INT8_MIN;

	t19 = (((x1409>>x1410)/x1411)-x1412);

	if (t19 != 128) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x1420 = -985;

	t20 = (((x1417>>x1418)/x1419)-x1420);

	if (t20 != 985U) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1441 = UINT8_MAX;
	uint8_t x1444 = 7U;
	int64_t t21 = -130937LL;

	t21 = (((x1441>>x1442)/x1443)-x1444);

	if (t21 != -262LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x1449 = 1991792U;
	uint8_t x1450 = 2U;
	static int32_t x1451 = -1;
	int16_t x1452 = 1828;
	uint32_t t22 = 0U;

	t22 = (((x1449>>x1450)/x1451)-x1452);

	if (t22 != 4294965468U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1581 = 37;
	uint16_t x1583 = 5378U;
	volatile int32_t t23 = -3;

	t23 = (((x1581>>x1582)/x1583)-x1584);

	if (t23 != -255) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x1725 = 7270535U;
	int8_t x1726 = 19;
	uint64_t x1727 = 9220286LLU;
	uint32_t x1728 = 6U;
	volatile uint64_t t24 = 58LLU;

	t24 = (((x1725>>x1726)/x1727)-x1728);

	if (t24 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x1774 = 31;
	int16_t x1775 = 234;
	int32_t x1776 = INT32_MIN;
	uint32_t t25 = 82903U;

	t25 = (((x1773>>x1774)/x1775)-x1776);

	if (t25 != 2147483648U) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x1829 = 29U;
	int32_t x1830 = 31;
	static int16_t x1831 = INT16_MAX;
	static int8_t x1832 = INT8_MIN;
	static volatile int32_t t26 = 61371294;

	t26 = (((x1829>>x1830)/x1831)-x1832);

	if (t26 != 128) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1853 = UINT64_MAX;
	uint8_t x1854 = 5U;
	int32_t x1855 = 60032;
	int32_t x1856 = -17041;
	static uint64_t t27 = 3LLU;

	t27 = (((x1853>>x1854)/x1855)-x1856);

	if (t27 != 9602557857916LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1901 = 22U;
	uint16_t x1902 = 3U;
	volatile int16_t x1903 = INT16_MIN;
	int64_t x1904 = -19520002819150LL;
	int64_t t28 = 1670900132896347LL;

	t28 = (((x1901>>x1902)/x1903)-x1904);

	if (t28 != 19520002819150LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x1961 = 0LL;
	volatile uint8_t x1962 = 1U;
	int16_t x1964 = -4;
	volatile int64_t t29 = -16076588509085473LL;

	t29 = (((x1961>>x1962)/x1963)-x1964);

	if (t29 != 4LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1965 = 473361870207919LLU;
	static int16_t x1966 = 0;
	uint8_t x1967 = UINT8_MAX;
	int16_t x1968 = INT16_MIN;
	uint64_t t30 = 362743298681LLU;

	t30 = (((x1965>>x1966)/x1967)-x1968);

	if (t30 != 1856321092406LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x2033 = 7625LLU;
	uint32_t x2034 = 62U;
	volatile int16_t x2035 = -14;
	uint32_t x2036 = 7U;
	volatile uint64_t t31 = 100393074668757299LLU;

	t31 = (((x2033>>x2034)/x2035)-x2036);

	if (t31 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x2069 = UINT32_MAX;
	uint64_t x2070 = 5LLU;
	int32_t x2071 = INT32_MAX;
	static uint16_t x2072 = 2U;
	volatile uint32_t t32 = 19314395U;

	t32 = (((x2069>>x2070)/x2071)-x2072);

	if (t32 != 4294967294U) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x2133 = 3U;
	static int64_t x2135 = -9276616637797432LL;
	static int32_t x2136 = INT32_MAX;
	int64_t t33 = -2800408488002LL;

	t33 = (((x2133>>x2134)/x2135)-x2136);

	if (t33 != -2147483647LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x2137 = UINT64_MAX;
	uint32_t x2140 = 18829385U;
	volatile uint64_t t34 = 1008442289491017102LLU;

	t34 = (((x2137>>x2138)/x2139)-x2140);

	if (t34 != 18446744073690722231LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x2141 = 583651472LLU;
	uint16_t x2142 = 2U;
	static int16_t x2143 = -1;
	uint16_t x2144 = 26U;

	t35 = (((x2141>>x2142)/x2143)-x2144);

	if (t35 != 18446744073709551590LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x2149 = UINT16_MAX;
	volatile int8_t x2150 = 24;
	int64_t x2151 = INT64_MIN;
	uint16_t x2152 = 1U;
	static volatile int64_t t36 = 1380957551098650268LL;

	t36 = (((x2149>>x2150)/x2151)-x2152);

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x2269 = 23U;
	uint16_t x2270 = 3U;
	int8_t x2272 = -25;
	volatile int32_t t37 = -1;

	t37 = (((x2269>>x2270)/x2271)-x2272);

	if (t37 != 23) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x2349 = 1;
	int8_t x2351 = -1;
	int32_t x2352 = 18341;
	int32_t t38 = 103997972;

	t38 = (((x2349>>x2350)/x2351)-x2352);

	if (t38 != -18342) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x2361 = 11;
	static int16_t x2362 = 0;
	uint8_t x2363 = 39U;
	static int8_t x2364 = -1;
	static volatile int32_t t39 = 12666409;

	t39 = (((x2361>>x2362)/x2363)-x2364);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x2374 = 2U;
	uint16_t x2375 = 758U;
	int8_t x2376 = INT8_MIN;
	volatile int64_t t40 = -103514220353LL;

	t40 = (((x2373>>x2374)/x2375)-x2376);

	if (t40 != 3042009246983893LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x2401 = 15980U;
	static uint8_t x2402 = 20U;
	int8_t x2404 = INT8_MAX;
	int32_t t41 = -856342;

	t41 = (((x2401>>x2402)/x2403)-x2404);

	if (t41 != -127) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x2413 = INT64_MAX;
	volatile uint16_t x2414 = 0U;
	static int32_t x2415 = INT32_MIN;
	static int8_t x2416 = INT8_MAX;
	volatile int64_t t42 = 15770557806668608LL;

	t42 = (((x2413>>x2414)/x2415)-x2416);

	if (t42 != -4294967422LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x2450 = 30U;
	volatile uint32_t x2451 = UINT32_MAX;
	static uint64_t x2452 = UINT64_MAX;
	uint64_t t43 = 407LLU;

	t43 = (((x2449>>x2450)/x2451)-x2452);

	if (t43 != 1LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x2473 = 1734678778U;
	int8_t x2474 = 2;
	volatile uint16_t x2475 = UINT16_MAX;
	volatile uint32_t t44 = 1785762U;

	t44 = (((x2473>>x2474)/x2475)-x2476);

	if (t44 != 6618U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2525 = 7;
	int8_t x2526 = 0;
	int8_t x2527 = 63;
	int8_t x2528 = -36;
	volatile int32_t t45 = -1;

	t45 = (((x2525>>x2526)/x2527)-x2528);

	if (t45 != 36) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x2597 = 241;
	volatile uint16_t x2598 = 4U;
	volatile uint32_t x2599 = 1U;
	volatile uint32_t t46 = 1U;

	t46 = (((x2597>>x2598)/x2599)-x2600);

	if (t46 != 4294967293U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x2609 = UINT16_MAX;
	int16_t x2610 = 1;
	uint32_t x2611 = UINT32_MAX;
	uint16_t x2612 = 151U;
	volatile uint32_t t47 = 2U;

	t47 = (((x2609>>x2610)/x2611)-x2612);

	if (t47 != 4294967145U) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x2617 = UINT32_MAX;
	int16_t x2618 = 20;
	int64_t x2619 = INT64_MAX;
	static int64_t x2620 = -361919856425113LL;
	volatile int64_t t48 = 89301366866064LL;

	t48 = (((x2617>>x2618)/x2619)-x2620);

	if (t48 != 361919856425113LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x2642 = 2LL;
	int8_t x2643 = INT8_MIN;
	static uint8_t x2644 = 18U;
	static int32_t t49 = -81;

	t49 = (((x2641>>x2642)/x2643)-x2644);

	if (t49 != -81) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x2773 = 3343326459758061LLU;
	int8_t x2774 = 6;
	int16_t x2775 = -1;
	static uint8_t x2776 = 5U;
	volatile uint64_t t50 = 584547LLU;

	t50 = (((x2773>>x2774)/x2775)-x2776);

	if (t50 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x2801 = UINT32_MAX;
	static volatile uint8_t x2804 = 25U;
	int64_t t51 = 20LL;

	t51 = (((x2801>>x2802)/x2803)-x2804);

	if (t51 != -25LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x2845 = 94U;
	uint8_t x2846 = 11U;
	int32_t x2847 = -1004;
	uint8_t x2848 = 7U;
	volatile int32_t t52 = -721642132;

	t52 = (((x2845>>x2846)/x2847)-x2848);

	if (t52 != -7) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x2861 = UINT8_MAX;
	int16_t x2863 = INT16_MIN;
	uint32_t x2864 = UINT32_MAX;
	volatile uint32_t t53 = 0U;

	t53 = (((x2861>>x2862)/x2863)-x2864);

	if (t53 != 1U) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x2929 = 1U;
	uint16_t x2930 = 0U;
	uint32_t x2931 = 198926045U;
	int8_t x2932 = INT8_MAX;

	t54 = (((x2929>>x2930)/x2931)-x2932);

	if (t54 != 4294967169U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x2962 = 0;
	uint32_t x2963 = 61947481U;
	int64_t x2964 = 5436947LL;
	int64_t t55 = -3621443358079930LL;

	t55 = (((x2961>>x2962)/x2963)-x2964);

	if (t55 != -5436947LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x2997 = 7;
	static int16_t x2999 = INT16_MIN;
	uint64_t x3000 = 212533815960863LLU;
	uint64_t t56 = 23565723675930888LLU;

	t56 = (((x2997>>x2998)/x2999)-x3000);

	if (t56 != 18446531539893590753LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x3113 = 39972U;
	uint16_t x3114 = 10U;
	int32_t x3115 = -1;
	static volatile uint32_t t57 = 870401U;

	t57 = (((x3113>>x3114)/x3115)-x3116);

	if (t57 != 4294952563U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x3221 = 5U;
	uint16_t x3222 = 0U;
	static volatile uint16_t x3223 = UINT16_MAX;
	uint8_t x3224 = UINT8_MAX;
	volatile int32_t t58 = -13145432;

	t58 = (((x3221>>x3222)/x3223)-x3224);

	if (t58 != -255) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x3242 = 12;
	int64_t x3243 = -1LL;
	volatile uint32_t x3244 = UINT32_MAX;

	t59 = (((x3241>>x3242)/x3243)-x3244);

	if (t59 != -4294967295LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x3269 = 3U;
	int8_t x3270 = 1;
	volatile uint64_t x3271 = UINT64_MAX;
	int64_t x3272 = INT64_MIN;
	volatile uint64_t t60 = 994LLU;

	t60 = (((x3269>>x3270)/x3271)-x3272);

	if (t60 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x3309 = 1;
	uint8_t x3310 = 13U;
	uint32_t x3311 = 547938983U;

	t61 = (((x3309>>x3310)/x3311)-x3312);

	if (t61 != 2147483649U) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x3381 = 227U;
	uint32_t x3382 = 6U;
	int64_t x3383 = -15280136LL;
	uint16_t x3384 = UINT16_MAX;
	volatile int64_t t62 = 17609530193855LL;

	t62 = (((x3381>>x3382)/x3383)-x3384);

	if (t62 != -65535LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x3473 = 3879U;
	int8_t x3474 = 2;
	static int32_t t63 = -126;

	t63 = (((x3473>>x3474)/x3475)-x3476);

	if (t63 != -7) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x3529 = 16;
	volatile uint8_t x3530 = 9U;
	static uint16_t x3531 = 13782U;
	volatile int8_t x3532 = -1;
	volatile int32_t t64 = 3;

	t64 = (((x3529>>x3530)/x3531)-x3532);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x3533 = INT8_MAX;
	int8_t x3534 = 0;
	uint16_t x3535 = 14U;
	uint32_t x3536 = 2761U;
	volatile uint32_t t65 = 638U;

	t65 = (((x3533>>x3534)/x3535)-x3536);

	if (t65 != 4294964544U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x3549 = INT32_MAX;
	int8_t x3550 = 6;
	static volatile int64_t x3551 = -1LL;
	volatile uint32_t x3552 = 91366647U;

	t66 = (((x3549>>x3550)/x3551)-x3552);

	if (t66 != -124921078LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x3572 = -434;
	static int64_t t67 = 256615876276LL;

	t67 = (((x3569>>x3570)/x3571)-x3572);

	if (t67 != 434LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x3646 = 0;
	static uint64_t x3647 = UINT64_MAX;
	int8_t x3648 = 41;
	volatile uint64_t t68 = 871239666789LLU;

	t68 = (((x3645>>x3646)/x3647)-x3648);

	if (t68 != 18446744073709551575LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x3649 = INT16_MAX;
	uint32_t x3650 = 6U;
	static volatile uint16_t x3651 = UINT16_MAX;
	uint16_t x3652 = 28U;
	static volatile int32_t t69 = -14;

	t69 = (((x3649>>x3650)/x3651)-x3652);

	if (t69 != -28) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x3729 = 0U;
	uint16_t x3730 = 1U;
	volatile int64_t t70 = 0LL;

	t70 = (((x3729>>x3730)/x3731)-x3732);

	if (t70 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x3737 = 2U;
	uint8_t x3738 = 7U;
	int32_t x3739 = INT32_MIN;
	int32_t x3740 = INT32_MAX;
	int32_t t71 = -32484242;

	t71 = (((x3737>>x3738)/x3739)-x3740);

	if (t71 != -2147483647) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x3745 = 3U;
	static volatile uint16_t x3746 = 0U;
	volatile int32_t x3747 = INT32_MAX;
	uint8_t x3748 = 29U;
	volatile int32_t t72 = 53246;

	t72 = (((x3745>>x3746)/x3747)-x3748);

	if (t72 != -29) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x3814 = 2U;
	uint8_t x3815 = UINT8_MAX;
	int32_t x3816 = -1;

	t73 = (((x3813>>x3814)/x3815)-x3816);

	if (t73 != 1969268U) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x4165 = 960834U;
	int16_t x4166 = 0;
	int64_t x4168 = -1LL;

	t74 = (((x4165>>x4166)/x4167)-x4168);

	if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x4180 = INT8_MIN;
	int64_t t75 = -953204300LL;

	t75 = (((x4177>>x4178)/x4179)-x4180);

	if (t75 != 128LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x4273 = INT64_MAX;
	uint16_t x4274 = 1U;
	int16_t x4275 = INT16_MAX;
	int8_t x4276 = INT8_MAX;
	static int64_t t76 = 3LL;

	t76 = (((x4273>>x4274)/x4275)-x4276);

	if (t76 != 140741783453573LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x4290 = 7U;
	volatile int32_t x4291 = INT32_MIN;
	int16_t x4292 = 10;
	volatile int64_t t77 = 1261070970769LL;

	t77 = (((x4289>>x4290)/x4291)-x4292);

	if (t77 != -13LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x4413 = INT32_MAX;
	volatile uint8_t x4414 = 1U;
	int16_t x4415 = -1;
	int16_t x4416 = -1;
	volatile int32_t t78 = -60;

	t78 = (((x4413>>x4414)/x4415)-x4416);

	if (t78 != -1073741822) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x4434 = 4U;
	static uint64_t x4435 = 99066LLU;
	int32_t x4436 = -1;
	static uint64_t t79 = 1914511493LLU;

	t79 = (((x4433>>x4434)/x4435)-x4436);

	if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x4437 = UINT32_MAX;
	static volatile int16_t x4438 = 10;
	int16_t x4439 = -1;
	int8_t x4440 = 0;

	t80 = (((x4437>>x4438)/x4439)-x4440);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x4493 = UINT16_MAX;
	volatile uint16_t x4494 = 0U;
	volatile int32_t x4495 = -1124923;
	volatile int8_t x4496 = -1;
	volatile int32_t t81 = 8058;

	t81 = (((x4493>>x4494)/x4495)-x4496);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x4497 = INT8_MAX;
	int16_t x4498 = 3;
	int8_t x4499 = INT8_MIN;
	int32_t t82 = 23862;

	t82 = (((x4497>>x4498)/x4499)-x4500);

	if (t82 != 47) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x4513 = 528199952241LL;
	uint8_t x4514 = 15U;
	volatile int8_t x4515 = INT8_MAX;
	uint32_t x4516 = 73U;
	int64_t t83 = -3404LL;

	t83 = (((x4513>>x4514)/x4515)-x4516);

	if (t83 != 126851LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x4533 = 13LLU;
	int8_t x4534 = 3;
	static int32_t x4535 = INT32_MAX;
	static uint8_t x4536 = UINT8_MAX;
	uint64_t t84 = 4165701LLU;

	t84 = (((x4533>>x4534)/x4535)-x4536);

	if (t84 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x4805 = UINT8_MAX;
	volatile uint16_t x4806 = 17U;
	int16_t x4807 = -1;
	volatile int16_t x4808 = 5;

	t85 = (((x4805>>x4806)/x4807)-x4808);

	if (t85 != -5) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x4813 = UINT8_MAX;
	volatile uint8_t x4814 = 0U;
	uint8_t x4815 = UINT8_MAX;
	static int64_t x4816 = 127LL;
	int64_t t86 = -383967439326163LL;

	t86 = (((x4813>>x4814)/x4815)-x4816);

	if (t86 != -126LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x4833 = UINT32_MAX;
	int16_t x4834 = 1;
	uint16_t x4835 = UINT16_MAX;
	volatile int32_t x4836 = -6261766;

	t87 = (((x4833>>x4834)/x4835)-x4836);

	if (t87 != 6294534U) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x4897 = 13U;
	uint8_t x4898 = 3U;
	int8_t x4899 = 44;
	uint64_t x4900 = 15631291LLU;
	uint64_t t88 = 436461LLU;

	t88 = (((x4897>>x4898)/x4899)-x4900);

	if (t88 != 18446744073693920325LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x4969 = 9517U;
	int64_t x4971 = -1LL;
	int16_t x4972 = -35;
	volatile int64_t t89 = 15847LL;

	t89 = (((x4969>>x4970)/x4971)-x4972);

	if (t89 != -4723LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x5169 = UINT16_MAX;
	int8_t x5170 = 3;
	static int32_t x5171 = INT32_MIN;
	static volatile int32_t x5172 = 24863508;

	t90 = (((x5169>>x5170)/x5171)-x5172);

	if (t90 != -24863508) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x5209 = 1;
	static int8_t x5210 = 0;
	static uint16_t x5212 = 21U;
	volatile int64_t t91 = 262386741327397959LL;

	t91 = (((x5209>>x5210)/x5211)-x5212);

	if (t91 != -21LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x5221 = 6;
	static uint8_t x5222 = 1U;
	int32_t x5223 = INT32_MAX;
	uint8_t x5224 = 18U;

	t92 = (((x5221>>x5222)/x5223)-x5224);

	if (t92 != -18) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x5257 = 39;
	static int16_t x5258 = 1;
	uint32_t x5259 = 421624U;
	static int32_t x5260 = INT32_MIN;
	uint32_t t93 = 606866U;

	t93 = (((x5257>>x5258)/x5259)-x5260);

	if (t93 != 2147483648U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x5285 = INT32_MAX;
	static volatile int8_t x5286 = 0;
	uint8_t x5288 = 44U;

	t94 = (((x5285>>x5286)/x5287)-x5288);

	if (t94 != -43) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x5297 = 1;
	static int8_t x5298 = 0;
	uint64_t x5299 = UINT64_MAX;
	uint8_t x5300 = 1U;
	volatile uint64_t t95 = UINT64_MAX;

	t95 = (((x5297>>x5298)/x5299)-x5300);

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x5358 = 10U;
	static uint8_t x5359 = UINT8_MAX;
	int32_t x5360 = INT32_MAX;
	int32_t t96 = 25;

	t96 = (((x5357>>x5358)/x5359)-x5360);

	if (t96 != -2147483647) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x5437 = UINT32_MAX;
	int32_t x5439 = INT32_MAX;
	int64_t x5440 = INT64_MAX;

	t97 = (((x5437>>x5438)/x5439)-x5440);

	if (t97 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x5478 = 5;
	int16_t x5479 = 50;
	volatile int8_t x5480 = -37;
	int32_t t98 = 22;

	t98 = (((x5477>>x5478)/x5479)-x5480);

	if (t98 != 37) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x5618 = 1U;
	int8_t x5620 = INT8_MAX;
	volatile int32_t t99 = -165;

	t99 = (((x5617>>x5618)/x5619)-x5620);

	if (t99 != -127) { NG(); } else { ; }
	
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

