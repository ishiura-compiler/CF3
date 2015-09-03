#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t t1 = 2441977580LLU;
volatile int8_t x286 = -1;
volatile uint32_t t4 = 783559U;
volatile int64_t x410 = 303811268802LL;
uint32_t x456 = 2U;
volatile uint32_t t6 = 46604268U;
int16_t x600 = 37;
static uint64_t t8 = 1406011675LLU;
int64_t x617 = 13705LL;
uint8_t x618 = 3U;
uint8_t x619 = 114U;
static int8_t x645 = 38;
int16_t x648 = 2;
uint64_t t12 = 511LLU;
int8_t x741 = -3;
volatile uint64_t x782 = 4102809768LLU;
static uint32_t x846 = UINT32_MAX;
uint32_t t16 = 26781U;
uint8_t x908 = 6U;
int64_t t18 = 10420266733614965LL;
int64_t t23 = -17LL;
uint16_t x1077 = 554U;
volatile uint16_t x1078 = UINT16_MAX;
int16_t x1079 = INT16_MIN;
int8_t x1370 = 1;
int8_t x1392 = 15;
static uint8_t x1416 = 1U;
uint32_t x1508 = 17U;
uint32_t t32 = 989U;
int64_t t34 = 913440LL;
volatile int16_t x1888 = 12;
int16_t x2057 = 7516;
volatile int32_t t37 = -241437;
volatile int32_t x2077 = -335;
int16_t x2079 = INT16_MIN;
int32_t x2080 = 2;
static int32_t x2261 = 396046;
static int16_t x2297 = 1;
uint64_t x2373 = 8691693049426501647LLU;
int8_t x2376 = 3;
static volatile uint32_t x2437 = 0U;
uint64_t x2440 = 0LLU;
static int8_t x2453 = 55;
volatile uint32_t x2474 = 102967164U;
volatile uint32_t x2509 = 12U;
uint16_t x2575 = 71U;
static uint64_t t51 = 16373415LLU;
int32_t x2589 = 356;
static volatile int32_t x2590 = -1;
int8_t x2597 = INT8_MIN;
uint64_t t53 = 447859LLU;
static uint8_t x2665 = 24U;
volatile uint8_t x2836 = 5U;
volatile int64_t t56 = -11197510583784283LL;
int8_t x2845 = INT8_MAX;
uint16_t x2848 = 5U;
int8_t x3077 = INT8_MAX;
static int8_t x3115 = INT8_MAX;
uint8_t x3180 = 15U;
volatile uint64_t t61 = 676LLU;
static uint32_t x3239 = 39017U;
uint8_t x3253 = UINT8_MAX;
uint8_t x3292 = 2U;
int8_t x3480 = 3;
volatile uint64_t t70 = 5800LLU;
int32_t x4085 = INT32_MIN;
volatile int16_t x4086 = INT16_MIN;
volatile uint32_t x4087 = UINT32_MAX;
volatile uint32_t t78 = 1359485U;
static uint32_t x4473 = 64083U;
uint64_t x4474 = UINT64_MAX;
volatile uint8_t x5004 = 38U;
static int64_t t85 = -99687360LL;
int8_t x5093 = 1;
volatile int16_t x5271 = 1;
uint16_t x5613 = UINT16_MAX;
uint32_t x5614 = UINT32_MAX;
volatile int8_t x5626 = 8;
int8_t x5832 = 12;
uint8_t x5845 = 48U;
int16_t x5846 = INT16_MIN;
static int32_t t96 = 0;
volatile uint32_t x5949 = UINT32_MAX;
int8_t x5950 = 3;
static volatile uint16_t x5951 = 61U;
static volatile uint32_t t98 = 8540U;
static int32_t x6236 = 6;


void f0(void) {
	static volatile uint8_t x197 = 0U;
	int64_t x198 = 10677939094LL;
	static int16_t x199 = INT16_MIN;
	uint8_t x200 = 1U;
	volatile int64_t t0 = -18008954019LL;

	t0 = ((x197-(x198*x199))<<x200);

	if (t0 != 699789416464384LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x245 = INT16_MIN;
	volatile int16_t x246 = INT16_MIN;
	uint64_t x247 = 15LLU;
	int16_t x248 = 1;

	t1 = ((x245-(x246*x247))<<x248);

	if (t1 != 917504LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x257 = 103;
	volatile int8_t x258 = INT8_MAX;
	int8_t x259 = -3;
	int16_t x260 = 1;
	volatile int32_t t2 = -8;

	t2 = ((x257-(x258*x259))<<x260);

	if (t2 != 968) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x285 = 35U;
	int16_t x287 = INT16_MAX;
	uint64_t x288 = 0LLU;
	int32_t t3 = -32052325;

	t3 = ((x285-(x286*x287))<<x288);

	if (t3 != 32802) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x381 = UINT32_MAX;
	int32_t x382 = INT32_MIN;
	static uint32_t x383 = 4809U;
	uint32_t x384 = 21U;

	t4 = ((x381-(x382*x383))<<x384);

	if (t4 != 4292870144U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x409 = -109647;
	int32_t x411 = -1;
	static uint8_t x412 = 1U;
	int64_t t5 = 77LL;

	t5 = ((x409-(x410*x411))<<x412);

	if (t5 != 607622318310LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x453 = 1889;
	static volatile uint32_t x454 = UINT32_MAX;
	int8_t x455 = -1;

	t6 = ((x453-(x454*x455))<<x456);

	if (t6 != 7552U) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x497 = 0;
	uint32_t x498 = 216941U;
	volatile uint32_t x499 = 2959324U;
	int8_t x500 = 8;
	volatile uint32_t t7 = 219141U;

	t7 = ((x497-(x498*x499))<<x500);

	if (t7 != 3844297728U) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x597 = 115U;
	uint64_t x598 = 1882531139LLU;
	static uint32_t x599 = 107508U;

	t8 = ((x597-(x598*x599))<<x600);

	if (t8 != 3132942797187842048LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x620 = 10U;
	int64_t t9 = 28648269LL;

	t9 = ((x617-(x618*x619))<<x620);

	if (t9 != 13683712LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x637 = 29;
	static int64_t x638 = -1LL;
	static volatile int32_t x639 = -1;
	int64_t x640 = 13LL;
	static volatile int64_t t10 = 24023570LL;

	t10 = ((x637-(x638*x639))<<x640);

	if (t10 != 229376LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x646 = 16U;
	static uint16_t x647 = 2U;
	int32_t t11 = -1;

	t11 = ((x645-(x646*x647))<<x648);

	if (t11 != 24) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x729 = UINT64_MAX;
	uint8_t x730 = 0U;
	int8_t x731 = INT8_MAX;
	int16_t x732 = 26;

	t12 = ((x729-(x730*x731))<<x732);

	if (t12 != 18446744073642442752LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint32_t x733 = 593U;
	static int8_t x734 = 0;
	uint32_t x735 = 1011670U;
	uint16_t x736 = 1U;
	static uint32_t t13 = 8885646U;

	t13 = ((x733-(x734*x735))<<x736);

	if (t13 != 1186U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x742 = INT16_MIN;
	uint8_t x743 = 1U;
	uint8_t x744 = 1U;
	volatile int32_t t14 = 1;

	t14 = ((x741-(x742*x743))<<x744);

	if (t14 != 65530) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x781 = INT16_MIN;
	uint64_t x783 = 127LLU;
	uint32_t x784 = 0U;
	uint64_t t15 = 113760992768LLU;

	t15 = ((x781-(x782*x783))<<x784);

	if (t15 != 18446743552652678312LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x845 = -1;
	static uint32_t x847 = UINT32_MAX;
	volatile int8_t x848 = 0;

	t16 = ((x845-(x846*x847))<<x848);

	if (t16 != 4294967294U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x877 = 65409243LL;
	uint8_t x878 = 1U;
	volatile int8_t x879 = -1;
	int8_t x880 = 0;
	int64_t t17 = 3320842082332220049LL;

	t17 = ((x877-(x878*x879))<<x880);

	if (t17 != 65409244LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x905 = -13;
	int64_t x906 = 79703680LL;
	int16_t x907 = -1;

	t18 = ((x905-(x906*x907))<<x908);

	if (t18 != 5101034688LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x913 = 14459162321855261LLU;
	int64_t x914 = -285406LL;
	uint32_t x915 = 4381U;
	volatile int8_t x916 = 1;
	uint64_t t19 = 6LLU;

	t19 = ((x913-(x914*x915))<<x916);

	if (t19 != 28918327144437894LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint32_t x925 = 3U;
	static int8_t x926 = INT8_MIN;
	volatile uint16_t x927 = 382U;
	uint8_t x928 = 0U;
	uint32_t t20 = 8U;

	t20 = ((x925-(x926*x927))<<x928);

	if (t20 != 48899U) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x937 = INT16_MAX;
	uint32_t x938 = UINT32_MAX;
	static int64_t x939 = -1LL;
	static int16_t x940 = 6;
	int64_t t21 = -194522LL;

	t21 = ((x937-(x938*x939))<<x940);

	if (t21 != 274880003968LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x973 = 1;
	uint64_t x974 = 103439LLU;
	volatile uint8_t x975 = 0U;
	static uint8_t x976 = 0U;
	uint64_t t22 = 124LLU;

	t22 = ((x973-(x974*x975))<<x976);

	if (t22 != 1LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1061 = UINT8_MAX;
	int64_t x1062 = -4806043933LL;
	volatile int32_t x1063 = 0;
	static uint16_t x1064 = 41U;

	t23 = ((x1061-(x1062*x1063))<<x1064);

	if (t23 != 560750930165760LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x1080 = 0U;
	static int32_t t24 = -62900;

	t24 = ((x1077-(x1078*x1079))<<x1080);

	if (t24 != 2147451434) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1253 = 16U;
	static uint32_t x1254 = 55812U;
	int32_t x1255 = 113401;
	int64_t x1256 = 2LL;
	volatile uint32_t t25 = 15U;

	t25 = ((x1253-(x1254*x1255))<<x1256);

	if (t25 != 453257392U) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint32_t x1345 = UINT32_MAX;
	static uint16_t x1346 = 6794U;
	uint32_t x1347 = 6263U;
	int8_t x1348 = 28;
	static uint32_t t26 = 4689922U;

	t26 = ((x1345-(x1346*x1347))<<x1348);

	if (t26 != 2415919104U) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1369 = 121U;
	int16_t x1371 = 22;
	volatile uint64_t x1372 = 1LLU;
	volatile int32_t t27 = 1455;

	t27 = ((x1369-(x1370*x1371))<<x1372);

	if (t27 != 198) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x1389 = 0U;
	int8_t x1390 = INT8_MIN;
	uint8_t x1391 = 7U;
	static volatile int32_t t28 = 246;

	t28 = ((x1389-(x1390*x1391))<<x1392);

	if (t28 != 29360128) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x1413 = UINT32_MAX;
	static uint16_t x1414 = 23124U;
	static volatile int32_t x1415 = -1;
	volatile uint32_t t29 = 11519740U;

	t29 = ((x1413-(x1414*x1415))<<x1416);

	if (t29 != 46246U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x1429 = 10;
	volatile int16_t x1430 = -1;
	int8_t x1431 = 47;
	static uint8_t x1432 = 12U;
	volatile int32_t t30 = 1;

	t30 = ((x1429-(x1430*x1431))<<x1432);

	if (t30 != 233472) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x1505 = INT16_MIN;
	uint64_t x1506 = 2138609023977361LLU;
	static int32_t x1507 = -1;
	volatile uint64_t t31 = 159349172LLU;

	t31 = ((x1505-(x1506*x1507))<<x1508);

	if (t31 != 3610600880822419456LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1609 = 14U;
	volatile uint32_t x1610 = 62939368U;
	int16_t x1611 = INT16_MAX;
	uint8_t x1612 = 16U;

	t32 = ((x1609-(x1610*x1611))<<x1612);

	if (t32 != 1626734592U) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x1657 = 5U;
	uint64_t x1658 = 413LLU;
	uint8_t x1659 = 108U;
	uint8_t x1660 = 41U;
	uint64_t t33 = 0LLU;

	t33 = ((x1657-(x1658*x1659))<<x1660);

	if (t33 != 18348669835535187968LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x1829 = -59;
	int64_t x1830 = -1LL;
	int16_t x1831 = 400;
	volatile uint32_t x1832 = 3U;

	t34 = ((x1829-(x1830*x1831))<<x1832);

	if (t34 != 2728LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x1885 = 1989U;
	volatile int8_t x1886 = -8;
	static volatile int8_t x1887 = INT8_MIN;
	volatile uint32_t t35 = 232622U;

	t35 = ((x1885-(x1886*x1887))<<x1888);

	if (t35 != 3952640U) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x1889 = INT32_MIN;
	uint64_t x1890 = 12976918450541860LLU;
	static int16_t x1891 = INT16_MAX;
	uint8_t x1892 = 0U;
	uint64_t t36 = 148996815376501197LLU;

	t36 = ((x1889-(x1890*x1891))<<x1892);

	if (t36 != 17507170897976628516LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x2058 = 1;
	int32_t x2059 = 965;
	uint8_t x2060 = 0U;

	t37 = ((x2057-(x2058*x2059))<<x2060);

	if (t37 != 6551) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x2078 = UINT64_MAX;
	static volatile uint64_t t38 = 782992500079LLU;

	t38 = ((x2077-(x2078*x2079))<<x2080);

	if (t38 != 18446744073709419204LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x2121 = 1592LLU;
	int32_t x2122 = INT32_MAX;
	uint32_t x2123 = 7U;
	int32_t x2124 = 20;
	volatile uint64_t t39 = 198210363248443LLU;

	t39 = ((x2121-(x2122*x2123))<<x2124);

	if (t39 != 18444492275572539392LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x2262 = 19479354U;
	int64_t x2263 = -1LL;
	uint32_t x2264 = 1U;
	int64_t t40 = -46347097020533066LL;

	t40 = ((x2261-(x2262*x2263))<<x2264);

	if (t40 != 39750800LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2281 = 492862;
	volatile int8_t x2282 = 6;
	uint32_t x2283 = 4192979U;
	int8_t x2284 = 1;
	volatile uint32_t t41 = 50866U;

	t41 = ((x2281-(x2282*x2283))<<x2284);

	if (t41 != 4245637272U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x2298 = INT16_MIN;
	volatile int8_t x2299 = 20;
	volatile int8_t x2300 = 1;
	int32_t t42 = 13448;

	t42 = ((x2297-(x2298*x2299))<<x2300);

	if (t42 != 1310722) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x2313 = -46;
	uint8_t x2314 = 3U;
	uint64_t x2315 = 252LLU;
	volatile int32_t x2316 = 0;
	uint64_t t43 = 267134573LLU;

	t43 = ((x2313-(x2314*x2315))<<x2316);

	if (t43 != 18446744073709550814LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x2341 = 9U;
	volatile uint32_t x2342 = 2285U;
	static int16_t x2343 = -1;
	uint8_t x2344 = 15U;
	uint32_t t44 = 235U;

	t44 = ((x2341-(x2342*x2343))<<x2344);

	if (t44 != 75169792U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x2374 = -1LL;
	uint32_t x2375 = 33U;
	uint64_t t45 = 11872999044277616LLU;

	t45 = ((x2373-(x2374*x2375))<<x2376);

	if (t45 != 14193312174283358592LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int32_t x2389 = -1;
	static int64_t x2390 = -1LL;
	static uint64_t x2391 = UINT64_MAX;
	int64_t x2392 = 22LL;
	static volatile uint64_t t46 = 234700191874224LLU;

	t46 = ((x2389-(x2390*x2391))<<x2392);

	if (t46 != 18446744073701163008LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x2438 = INT16_MIN;
	uint8_t x2439 = 7U;
	uint32_t t47 = 0U;

	t47 = ((x2437-(x2438*x2439))<<x2440);

	if (t47 != 229376U) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x2454 = INT16_MIN;
	static uint64_t x2455 = 543064197LLU;
	uint64_t x2456 = 13LLU;
	volatile uint64_t t48 = 194347120598LLU;

	t48 = ((x2453-(x2454*x2455))<<x2456);

	if (t48 != 145777685359419392LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x2473 = 401;
	int8_t x2475 = INT8_MAX;
	int8_t x2476 = 22;
	volatile uint32_t t49 = 365535U;

	t49 = ((x2473-(x2474*x2475))<<x2476);

	if (t49 != 3275751424U) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint8_t x2510 = UINT8_MAX;
	static uint64_t x2511 = 232194775063967LLU;
	uint32_t x2512 = 7U;
	volatile uint64_t t50 = 8406448574309LLU;

	t50 = ((x2509-(x2510*x2511))<<x2512);

	if (t50 != 10867906615621670272LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x2573 = INT32_MIN;
	uint64_t x2574 = 1088039779154156890LLU;
	static uint32_t x2576 = 0U;

	t51 = ((x2573-(x2574*x2575))<<x2576);

	if (t51 != 14982896046455135242LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x2591 = INT8_MIN;
	static int8_t x2592 = 0;
	int32_t t52 = -87383205;

	t52 = ((x2589-(x2590*x2591))<<x2592);

	if (t52 != 228) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x2598 = 49828125LLU;
	static int32_t x2599 = INT32_MAX;
	int32_t x2600 = 54;

	t53 = ((x2597-(x2598*x2599))<<x2600);

	if (t53 != 2828260565988671488LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x2645 = -1LL;
	static int8_t x2646 = -3;
	uint64_t x2647 = UINT64_MAX;
	static volatile uint16_t x2648 = 1U;
	uint64_t t54 = 20242574117465LLU;

	t54 = ((x2645-(x2646*x2647))<<x2648);

	if (t54 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x2666 = 55571U;
	volatile int32_t x2667 = INT32_MIN;
	uint16_t x2668 = 4U;
	volatile uint32_t t55 = 1U;

	t55 = ((x2665-(x2666*x2667))<<x2668);

	if (t55 != 384U) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x2833 = UINT8_MAX;
	int16_t x2834 = INT16_MIN;
	int64_t x2835 = 0LL;

	t56 = ((x2833-(x2834*x2835))<<x2836);

	if (t56 != 8160LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x2846 = INT32_MAX;
	static volatile uint32_t x2847 = 112578U;
	volatile uint32_t t57 = 103699U;

	t57 = ((x2845-(x2846*x2847))<<x2848);

	if (t57 != 3606560U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x3078 = INT16_MIN;
	static uint64_t x3079 = 1884LLU;
	uint8_t x3080 = 5U;
	uint64_t t58 = 758431331564563LLU;

	t58 = ((x3077-(x3078*x3079))<<x3080);

	if (t58 != 1975521248LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x3085 = -300610109;
	int16_t x3086 = 9820;
	int64_t x3087 = -175549LL;
	uint16_t x3088 = 0U;
	int64_t t59 = 1579000842905950LL;

	t59 = ((x3085-(x3086*x3087))<<x3088);

	if (t59 != 1423281071LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x3113 = UINT8_MAX;
	int16_t x3114 = -1;
	static volatile int8_t x3116 = 12;
	int32_t t60 = 17;

	t60 = ((x3113-(x3114*x3115))<<x3116);

	if (t60 != 1564672) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x3177 = 9LLU;
	int8_t x3178 = -40;
	static int16_t x3179 = INT16_MIN;

	t61 = ((x3177-(x3178*x3179))<<x3180);

	if (t61 != 18446744030760173568LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x3189 = 11U;
	uint32_t x3190 = UINT32_MAX;
	volatile int16_t x3191 = -805;
	uint16_t x3192 = 5U;
	volatile uint32_t t62 = 952229U;

	t62 = ((x3189-(x3190*x3191))<<x3192);

	if (t62 != 4294941888U) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x3197 = UINT64_MAX;
	int32_t x3198 = INT32_MAX;
	static int32_t x3199 = -1;
	uint8_t x3200 = 0U;
	uint64_t t63 = 1862017786459LLU;

	t63 = ((x3197-(x3198*x3199))<<x3200);

	if (t63 != 2147483646LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x3237 = -1;
	uint64_t x3238 = 1044229026LLU;
	static volatile int32_t x3240 = 0;
	volatile uint64_t t64 = 128184245019533LLU;

	t64 = ((x3237-(x3238*x3239))<<x3240);

	if (t64 != 18446703331025644173LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x3254 = -1LL;
	uint32_t x3255 = 2815U;
	int8_t x3256 = 26;
	volatile int64_t t65 = -29305780722545LL;

	t65 = ((x3253-(x3254*x3255))<<x3256);

	if (t65 != 206024212480LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x3289 = -1LL;
	static uint8_t x3290 = 10U;
	uint64_t x3291 = UINT64_MAX;
	uint64_t t66 = 1595501LLU;

	t66 = ((x3289-(x3290*x3291))<<x3292);

	if (t66 != 36LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x3477 = UINT32_MAX;
	volatile int32_t x3478 = 3646;
	uint64_t x3479 = UINT64_MAX;
	uint64_t t67 = 12174068462536LLU;

	t67 = ((x3477-(x3478*x3479))<<x3480);

	if (t67 != 34359767528LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint32_t x3565 = 11415U;
	static int16_t x3566 = INT16_MAX;
	int32_t x3567 = -1;
	volatile uint32_t x3568 = 26U;
	uint32_t t68 = 21U;

	t68 = ((x3565-(x3566*x3567))<<x3568);

	if (t68 != 1476395008U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x3621 = INT16_MAX;
	volatile int64_t x3622 = -1LL;
	static int8_t x3623 = 0;
	uint8_t x3624 = 5U;
	int64_t t69 = -11LL;

	t69 = ((x3621-(x3622*x3623))<<x3624);

	if (t69 != 1048544LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x3685 = INT8_MIN;
	int64_t x3686 = INT64_MIN;
	uint64_t x3687 = 129603514334555LLU;
	static uint8_t x3688 = 1U;

	t70 = ((x3685-(x3686*x3687))<<x3688);

	if (t70 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x3809 = -1;
	int8_t x3810 = INT8_MIN;
	static int8_t x3811 = 55;
	int64_t x3812 = 1LL;
	volatile int32_t t71 = 254883292;

	t71 = ((x3809-(x3810*x3811))<<x3812);

	if (t71 != 14078) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x3833 = UINT64_MAX;
	uint64_t x3834 = UINT64_MAX;
	int32_t x3835 = INT32_MIN;
	static uint64_t x3836 = 12LLU;
	volatile uint64_t t72 = 124330LLU;

	t72 = ((x3833-(x3834*x3835))<<x3836);

	if (t72 != 18446735277616525312LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x3969 = -219;
	int16_t x3970 = INT16_MIN;
	uint64_t x3971 = UINT64_MAX;
	volatile uint8_t x3972 = 1U;
	volatile uint64_t t73 = 5620098902664LLU;

	t73 = ((x3969-(x3970*x3971))<<x3972);

	if (t73 != 18446744073709485642LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x3985 = -1;
	int16_t x3986 = -1;
	uint32_t x3987 = 29214099U;
	volatile uint8_t x3988 = 6U;
	volatile uint32_t t74 = 687U;

	t74 = ((x3985-(x3986*x3987))<<x3988);

	if (t74 != 1869702272U) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x4088 = 1U;
	uint32_t t75 = 148592911U;

	t75 = ((x4085-(x4086*x4087))<<x4088);

	if (t75 != 4294901760U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x4109 = INT16_MAX;
	int8_t x4110 = INT8_MIN;
	int16_t x4111 = 1;
	volatile int8_t x4112 = 0;
	int32_t t76 = 57890;

	t76 = ((x4109-(x4110*x4111))<<x4112);

	if (t76 != 32895) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int16_t x4225 = -4755;
	uint32_t x4226 = UINT32_MAX;
	uint64_t x4227 = 119487410LLU;
	int8_t x4228 = 35;
	volatile uint64_t t77 = 62LLU;

	t77 = ((x4225-(x4226*x4227))<<x4228);

	if (t77 != 4105392765314007040LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x4281 = UINT16_MAX;
	uint16_t x4282 = 8629U;
	uint32_t x4283 = 395U;
	volatile uint8_t x4284 = 27U;

	t78 = ((x4281-(x4282*x4283))<<x4284);

	if (t78 != 3221225472U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x4349 = 0U;
	int32_t x4350 = INT32_MIN;
	static uint32_t x4351 = 7408106U;
	int16_t x4352 = 0;
	static uint32_t t79 = 4U;

	t79 = ((x4349-(x4350*x4351))<<x4352);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x4475 = UINT16_MAX;
	int8_t x4476 = 5;
	volatile uint64_t t80 = 6819961332627059767LLU;

	t80 = ((x4473-(x4474*x4475))<<x4476);

	if (t80 != 4147776LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x4525 = INT64_MIN;
	int8_t x4526 = INT8_MIN;
	uint64_t x4527 = 1188807LLU;
	static uint32_t x4528 = 1U;
	volatile uint64_t t81 = 366LLU;

	t81 = ((x4525-(x4526*x4527))<<x4528);

	if (t81 != 304334592LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x4813 = INT16_MIN;
	uint32_t x4814 = 1886325U;
	volatile uint16_t x4815 = UINT16_MAX;
	int8_t x4816 = 26;
	uint32_t t82 = 49U;

	t82 = ((x4813-(x4814*x4815))<<x4816);

	if (t82 != 3556769792U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x5001 = 4U;
	volatile uint64_t x5002 = 274380520154590LLU;
	volatile int32_t x5003 = INT32_MIN;
	uint64_t t83 = 1287042618LLU;

	t83 = ((x5001-(x5002*x5003))<<x5004);

	if (t83 != 1099511627776LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x5013 = -20;
	volatile uint64_t x5014 = 1531698315030949LLU;
	static uint64_t x5015 = 735913709860LLU;
	static volatile uint16_t x5016 = 5U;
	uint64_t t84 = 34612258202321LLU;

	t84 = ((x5013-(x5014*x5015))<<x5016);

	if (t84 != 12126540958951143168LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x5061 = INT32_MAX;
	int16_t x5062 = 1269;
	volatile int64_t x5063 = -33637280LL;
	int8_t x5064 = 1;

	t85 = ((x5061-(x5062*x5063))<<x5064);

	if (t85 != 89666383934LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int8_t x5094 = -26;
	static uint32_t x5095 = 5U;
	int16_t x5096 = 23;
	volatile uint32_t t86 = 9382U;

	t86 = ((x5093-(x5094*x5095))<<x5096);

	if (t86 != 1098907648U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x5269 = UINT8_MAX;
	int16_t x5270 = -1326;
	uint8_t x5272 = 6U;
	int32_t t87 = 25378;

	t87 = ((x5269-(x5270*x5271))<<x5272);

	if (t87 != 101184) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x5377 = UINT8_MAX;
	uint64_t x5378 = UINT64_MAX;
	int64_t x5379 = 16481985LL;
	uint16_t x5380 = 7U;
	volatile uint64_t t88 = 547262766440423105LLU;

	t88 = ((x5377-(x5378*x5379))<<x5380);

	if (t88 != 2109726720LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x5615 = INT8_MIN;
	uint32_t x5616 = 0U;
	volatile uint32_t t89 = 43U;

	t89 = ((x5613-(x5614*x5615))<<x5616);

	if (t89 != 65407U) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x5625 = 43505LLU;
	int16_t x5627 = INT16_MAX;
	uint8_t x5628 = 2U;
	volatile uint64_t t90 = 8672951789549405807LLU;

	t90 = ((x5625-(x5626*x5627))<<x5628);

	if (t90 != 18446744073708677092LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x5729 = 34661683067284LLU;
	volatile uint16_t x5730 = UINT16_MAX;
	static int64_t x5731 = -1LL;
	uint64_t x5732 = 6LLU;
	uint64_t t91 = 29320013426590816LLU;

	t91 = ((x5729-(x5730*x5731))<<x5732);

	if (t91 != 2218347720500416LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x5789 = 290332343;
	int8_t x5790 = INT8_MIN;
	uint8_t x5791 = UINT8_MAX;
	static int16_t x5792 = 0;
	volatile int32_t t92 = 2;

	t92 = ((x5789-(x5790*x5791))<<x5792);

	if (t92 != 290364983) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x5801 = UINT8_MAX;
	static int16_t x5802 = -9426;
	int16_t x5803 = INT16_MAX;
	uint64_t x5804 = 1LLU;
	int32_t t93 = 261;

	t93 = ((x5801-(x5802*x5803))<<x5804);

	if (t93 != 617723994) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x5829 = 3U;
	uint32_t x5830 = 6U;
	volatile int32_t x5831 = INT32_MIN;
	volatile uint32_t t94 = 36970820U;

	t94 = ((x5829-(x5830*x5831))<<x5832);

	if (t94 != 12288U) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x5847 = 4;
	volatile uint8_t x5848 = 1U;
	int32_t t95 = 1059075;

	t95 = ((x5845-(x5846*x5847))<<x5848);

	if (t95 != 262240) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x5869 = INT8_MAX;
	uint8_t x5870 = 108U;
	static int8_t x5871 = INT8_MIN;
	uint16_t x5872 = 0U;

	t96 = ((x5869-(x5870*x5871))<<x5872);

	if (t96 != 13951) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x5893 = UINT64_MAX;
	uint64_t x5894 = UINT64_MAX;
	uint64_t x5895 = 2056321436006406744LLU;
	volatile uint8_t x5896 = 0U;
	uint64_t t97 = 1106340136447LLU;

	t97 = ((x5893-(x5894*x5895))<<x5896);

	if (t97 != 2056321436006406743LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x5952 = 9;

	t98 = ((x5949-(x5950*x5951))<<x5952);

	if (t98 != 4294873088U) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x6233 = -463371030;
	static uint64_t x6234 = 126154886LLU;
	static uint32_t x6235 = 8193860U;
	uint64_t t99 = 3140LLU;

	t99 = ((x6233-(x6234*x6235))<<x6236);

	if (t99 != 18380587533705008256LLU) { NG(); } else { ; }
	
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

