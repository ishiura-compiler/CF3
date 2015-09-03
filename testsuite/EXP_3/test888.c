#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t0 = -4LL;
int8_t x24 = 3;
uint8_t x67 = 114U;
static int64_t x69 = -1LL;
uint64_t x70 = 1202664LLU;
volatile int32_t x330 = INT32_MIN;
int16_t x331 = INT16_MAX;
int32_t x393 = -982115;
uint16_t x461 = UINT16_MAX;
uint64_t x579 = 4965587829943439LLU;
static uint64_t t11 = 11521166127915LLU;
int64_t x602 = -13309471LL;
static int64_t x627 = INT64_MAX;
uint32_t t14 = 24016U;
volatile int32_t t15 = -191693;
volatile uint64_t x801 = 1LLU;
static uint8_t x926 = 1U;
int8_t x1182 = INT8_MIN;
int8_t x1184 = 6;
volatile int64_t t19 = 843LL;
int8_t x1290 = INT8_MIN;
uint8_t x1317 = 28U;
uint32_t x1320 = 5U;
int32_t t22 = 6;
static int64_t x1349 = -1LL;
static uint8_t x1475 = 1U;
volatile uint64_t x1479 = UINT64_MAX;
volatile uint64_t t26 = 4846912865974LLU;
volatile uint8_t x1596 = 0U;
uint8_t x1818 = 9U;
volatile int64_t t29 = -3035478976433854LL;
static uint8_t x1880 = 2U;
volatile uint32_t t30 = 16667729U;
static int64_t x1977 = INT64_MIN;
volatile int16_t x2042 = -1;
uint64_t x2043 = UINT64_MAX;
uint8_t x2044 = 24U;
volatile uint64_t x2162 = 597566935486666366LLU;
uint64_t t35 = 1495302062587LLU;
uint8_t x2297 = 2U;
uint32_t x2413 = 27135U;
uint8_t x2416 = 6U;
volatile uint8_t x2698 = UINT8_MAX;
volatile uint8_t x2850 = UINT8_MAX;
int32_t t46 = -2783959;
int32_t x2990 = INT32_MIN;
volatile uint64_t x3025 = 88795957LLU;
int16_t x3081 = INT16_MIN;
int32_t t50 = 6127082;
int64_t x3266 = -1LL;
int32_t x3357 = -303;
uint32_t x3358 = UINT32_MAX;
int64_t x3359 = 776225730511LL;
volatile int16_t x3393 = INT16_MAX;
int32_t x3394 = -1;
volatile uint64_t x3395 = 3519000LLU;
uint8_t x3396 = 1U;
uint64_t t53 = 12675LLU;
int8_t x3450 = INT8_MIN;
uint64_t t54 = 723185075767LLU;
int16_t x3496 = 0;
int64_t x3661 = -160LL;
uint32_t x3715 = UINT32_MAX;
static uint8_t x3716 = 28U;
uint64_t x3747 = 52LLU;
int8_t x3905 = -1;
int16_t x3947 = INT16_MAX;
volatile int32_t x4158 = 192;
uint8_t x4160 = 34U;
uint8_t x4179 = UINT8_MAX;
uint8_t x4348 = 0U;
int64_t t68 = -6206LL;
int8_t x4820 = 7;
int64_t t72 = 1LL;
int64_t x4973 = INT64_MIN;
volatile uint8_t x4974 = UINT8_MAX;
static uint8_t x4976 = 3U;
int64_t t73 = -3508LL;
volatile uint8_t x5170 = UINT8_MAX;
uint8_t x5172 = 4U;
int64_t x5234 = -1LL;
static volatile uint8_t x5235 = 7U;
int32_t t77 = 221136;
static int16_t x5292 = 0;
int32_t x5312 = 1;
int16_t x5318 = 247;
uint32_t x5319 = 20845U;
uint8_t x5344 = 0U;
int64_t t83 = -2354217LL;
int8_t x5467 = INT8_MAX;
static uint32_t x5528 = 1U;
int8_t x5637 = -1;
int64_t x5638 = INT64_MIN;
static volatile int8_t x5640 = 1;
static int64_t x5686 = -1LL;
volatile uint8_t x5687 = 100U;
volatile int64_t t90 = 32473LL;
static volatile int8_t x5822 = INT8_MIN;
uint16_t x5824 = 9U;
volatile uint64_t x5835 = 1095537340718928674LLU;
uint8_t x6046 = 3U;
int8_t x6176 = 0;
static int32_t x6298 = INT32_MIN;
volatile int32_t t96 = 0;
static int8_t x6335 = INT8_MAX;
int64_t x6414 = INT64_MAX;


void f0(void) {
	int64_t x5 = 16382795LL;
	volatile int8_t x6 = INT8_MAX;
	static uint16_t x7 = 6U;
	static uint8_t x8 = 18U;

	t0 = ((x5/x6)/(x7<<x8));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x21 = UINT16_MAX;
	int64_t x22 = INT64_MIN;
	uint32_t x23 = UINT32_MAX;
	volatile int64_t t1 = -31235LL;

	t1 = ((x21/x22)/(x23<<x24));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x65 = 22871513LLU;
	int8_t x66 = INT8_MAX;
	static int16_t x68 = 4;
	uint64_t t2 = 2810521LLU;

	t2 = ((x65/x66)/(x67<<x68));

	if (t2 != 98LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x71 = UINT16_MAX;
	uint8_t x72 = 9U;
	uint64_t t3 = 67899264560LLU;

	t3 = ((x69/x70)/(x71<<x72));

	if (t3 != 457122LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x157 = INT16_MIN;
	volatile int32_t x158 = INT32_MIN;
	static int8_t x159 = INT8_MAX;
	int8_t x160 = 0;
	volatile int32_t t4 = -9;

	t4 = ((x157/x158)/(x159<<x160));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x329 = -1;
	volatile uint32_t x332 = 0U;
	static int32_t t5 = 1;

	t5 = ((x329/x330)/(x331<<x332));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x361 = 2699545LLU;
	volatile int64_t x362 = INT64_MIN;
	static volatile uint64_t x363 = 4117141LLU;
	volatile int64_t x364 = 48LL;
	uint64_t t6 = 2425489829358182498LLU;

	t6 = ((x361/x362)/(x363<<x364));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x394 = -4300LL;
	uint8_t x395 = UINT8_MAX;
	int8_t x396 = 0;
	volatile int64_t t7 = -3LL;

	t7 = ((x393/x394)/(x395<<x396));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x453 = INT8_MIN;
	uint64_t x454 = UINT64_MAX;
	volatile uint16_t x455 = 33U;
	uint16_t x456 = 6U;
	volatile uint64_t t8 = 7411710LLU;

	t8 = ((x453/x454)/(x455<<x456));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x462 = INT64_MIN;
	volatile uint32_t x463 = 2593U;
	int8_t x464 = 2;
	int64_t t9 = -2841247480LL;

	t9 = ((x461/x462)/(x463<<x464));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x573 = 3778U;
	int64_t x574 = INT64_MAX;
	uint64_t x575 = 276474110LLU;
	int64_t x576 = 30LL;
	uint64_t t10 = 44235786701823448LLU;

	t10 = ((x573/x574)/(x575<<x576));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x577 = 161574624612373426LLU;
	static volatile int16_t x578 = -1;
	uint8_t x580 = 0U;

	t11 = ((x577/x578)/(x579<<x580));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x601 = 39518444;
	int16_t x603 = INT16_MAX;
	volatile int64_t x604 = 3LL;
	int64_t t12 = 19756LL;

	t12 = ((x601/x602)/(x603<<x604));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x625 = 203773522178LLU;
	int8_t x626 = -1;
	uint32_t x628 = 0U;
	volatile uint64_t t13 = 120514751LLU;

	t13 = ((x625/x626)/(x627<<x628));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x649 = UINT8_MAX;
	uint16_t x650 = 8U;
	uint32_t x651 = 73181985U;
	uint8_t x652 = 4U;

	t14 = ((x649/x650)/(x651<<x652));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x781 = UINT16_MAX;
	int32_t x782 = -146612277;
	uint8_t x783 = UINT8_MAX;
	static volatile int8_t x784 = 3;

	t15 = ((x781/x782)/(x783<<x784));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x802 = INT32_MAX;
	uint64_t x803 = 1011LLU;
	uint32_t x804 = 14U;
	volatile uint64_t t16 = 10LLU;

	t16 = ((x801/x802)/(x803<<x804));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x925 = 0;
	uint32_t x927 = 15194554U;
	volatile uint8_t x928 = 25U;
	uint32_t t17 = 4950419U;

	t17 = ((x925/x926)/(x927<<x928));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x1181 = -260191894LL;
	int32_t x1183 = 20118;
	volatile int64_t t18 = -29404399321750873LL;

	t18 = ((x1181/x1182)/(x1183<<x1184));

	if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x1193 = -1;
	int64_t x1194 = INT64_MAX;
	uint8_t x1195 = 13U;
	uint64_t x1196 = 5LLU;

	t19 = ((x1193/x1194)/(x1195<<x1196));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1277 = 1U;
	static uint16_t x1278 = UINT16_MAX;
	uint64_t x1279 = 19716LLU;
	static uint16_t x1280 = 0U;
	uint64_t t20 = 0LLU;

	t20 = ((x1277/x1278)/(x1279<<x1280));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x1289 = UINT64_MAX;
	volatile uint64_t x1291 = UINT64_MAX;
	int16_t x1292 = 1;
	static uint64_t t21 = 15LLU;

	t21 = ((x1289/x1290)/(x1291<<x1292));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1318 = INT32_MIN;
	uint16_t x1319 = UINT16_MAX;

	t22 = ((x1317/x1318)/(x1319<<x1320));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x1350 = 3U;
	volatile int32_t x1351 = 1416727;
	static uint8_t x1352 = 0U;
	volatile int64_t t23 = -634LL;

	t23 = ((x1349/x1350)/(x1351<<x1352));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1457 = -1;
	static int16_t x1458 = INT16_MAX;
	uint32_t x1459 = 27947748U;
	int8_t x1460 = 0;
	uint32_t t24 = 120U;

	t24 = ((x1457/x1458)/(x1459<<x1460));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1473 = 54219472U;
	uint16_t x1474 = UINT16_MAX;
	uint32_t x1476 = 1U;
	uint32_t t25 = 2977978U;

	t25 = ((x1473/x1474)/(x1475<<x1476));

	if (t25 != 413U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x1477 = INT8_MIN;
	uint32_t x1478 = 94194982U;
	static int8_t x1480 = 5;

	t26 = ((x1477/x1478)/(x1479<<x1480));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x1593 = INT16_MIN;
	uint64_t x1594 = 6LLU;
	static uint8_t x1595 = UINT8_MAX;
	static volatile uint64_t t27 = 66LLU;

	t27 = ((x1593/x1594)/(x1595<<x1596));

	if (t27 != 12056695473012757LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1729 = INT16_MAX;
	uint16_t x1730 = UINT16_MAX;
	uint8_t x1731 = UINT8_MAX;
	uint32_t x1732 = 5U;
	volatile int32_t t28 = 118449312;

	t28 = ((x1729/x1730)/(x1731<<x1732));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1817 = INT64_MIN;
	static uint8_t x1819 = 1U;
	static volatile int8_t x1820 = 7;

	t29 = ((x1817/x1818)/(x1819<<x1820));

	if (t29 != -8006399337547548LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x1877 = -1;
	uint32_t x1878 = UINT32_MAX;
	int16_t x1879 = 12984;

	t30 = ((x1877/x1878)/(x1879<<x1880));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1978 = -13;
	int16_t x1979 = 2;
	static int8_t x1980 = 8;
	volatile int64_t t31 = -37043LL;

	t31 = ((x1977/x1978)/(x1979<<x1980));

	if (t31 != 1385722962267844LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x2041 = 1455U;
	uint64_t t32 = 928004013568256034LLU;

	t32 = ((x2041/x2042)/(x2043<<x2044));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x2161 = 174478292313908LLU;
	static volatile uint32_t x2163 = 168363U;
	uint8_t x2164 = 0U;
	volatile uint64_t t33 = 126567287388LLU;

	t33 = ((x2161/x2162)/(x2163<<x2164));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x2209 = INT64_MIN;
	volatile int32_t x2210 = INT32_MIN;
	int8_t x2211 = 3;
	volatile uint64_t x2212 = 11LLU;
	int64_t t34 = 270644438202618LL;

	t34 = ((x2209/x2210)/(x2211<<x2212));

	if (t34 != 699050LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x2217 = UINT64_MAX;
	int16_t x2218 = INT16_MIN;
	uint16_t x2219 = UINT16_MAX;
	uint8_t x2220 = 1U;

	t35 = ((x2217/x2218)/(x2219<<x2220));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x2293 = -1;
	int16_t x2294 = INT16_MAX;
	uint32_t x2295 = 23135U;
	static uint16_t x2296 = 22U;
	volatile uint32_t t36 = 1U;

	t36 = ((x2293/x2294)/(x2295<<x2296));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x2298 = -1;
	int32_t x2299 = INT32_MAX;
	volatile int16_t x2300 = 0;
	volatile int32_t t37 = 428;

	t37 = ((x2297/x2298)/(x2299<<x2300));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x2345 = UINT64_MAX;
	uint8_t x2346 = 9U;
	uint32_t x2347 = UINT32_MAX;
	static uint8_t x2348 = 6U;
	volatile uint64_t t38 = 2203365471482057LLU;

	t38 = ((x2345/x2346)/(x2347<<x2348));

	if (t38 != 477218595LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x2414 = UINT32_MAX;
	volatile int8_t x2415 = 38;
	volatile uint32_t t39 = 7766U;

	t39 = ((x2413/x2414)/(x2415<<x2416));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x2453 = INT16_MAX;
	int16_t x2454 = INT16_MAX;
	static uint16_t x2455 = UINT16_MAX;
	static uint8_t x2456 = 3U;
	int32_t t40 = 824272;

	t40 = ((x2453/x2454)/(x2455<<x2456));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x2689 = -1;
	volatile uint32_t x2690 = 6246U;
	uint8_t x2691 = 59U;
	static uint16_t x2692 = 3U;
	volatile uint32_t t41 = 18596454U;

	t41 = ((x2689/x2690)/(x2691<<x2692));

	if (t41 != 1456U) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint8_t x2697 = 3U;
	uint32_t x2699 = 42U;
	static int16_t x2700 = 6;
	static volatile uint32_t t42 = 85811U;

	t42 = ((x2697/x2698)/(x2699<<x2700));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x2785 = 86065177LLU;
	int8_t x2786 = INT8_MIN;
	int64_t x2787 = 6644059LL;
	int8_t x2788 = 1;
	static uint64_t t43 = 8103280369439LLU;

	t43 = ((x2785/x2786)/(x2787<<x2788));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x2849 = -1LL;
	uint64_t x2851 = 508461662460985LLU;
	uint8_t x2852 = 7U;
	static uint64_t t44 = 7740503578112846288LLU;

	t44 = ((x2849/x2850)/(x2851<<x2852));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x2877 = 37U;
	volatile int16_t x2878 = 10;
	uint64_t x2879 = UINT64_MAX;
	int16_t x2880 = 1;
	static volatile uint64_t t45 = 13441880031510LLU;

	t45 = ((x2877/x2878)/(x2879<<x2880));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x2945 = -1;
	static uint16_t x2946 = UINT16_MAX;
	int16_t x2947 = 12;
	uint16_t x2948 = 2U;

	t46 = ((x2945/x2946)/(x2947<<x2948));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x2989 = INT32_MAX;
	volatile uint8_t x2991 = UINT8_MAX;
	uint8_t x2992 = 11U;
	volatile int32_t t47 = -19761;

	t47 = ((x2989/x2990)/(x2991<<x2992));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x3026 = INT32_MIN;
	static volatile uint16_t x3027 = 122U;
	int8_t x3028 = 1;
	uint64_t t48 = 256096LLU;

	t48 = ((x3025/x3026)/(x3027<<x3028));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x3082 = 5;
	uint16_t x3083 = UINT16_MAX;
	uint8_t x3084 = 0U;
	volatile int32_t t49 = -56246;

	t49 = ((x3081/x3082)/(x3083<<x3084));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x3189 = -1;
	static int8_t x3190 = INT8_MAX;
	int16_t x3191 = 60;
	int8_t x3192 = 0;

	t50 = ((x3189/x3190)/(x3191<<x3192));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x3265 = 2;
	volatile uint64_t x3267 = 6LLU;
	static volatile uint8_t x3268 = 2U;
	volatile uint64_t t51 = 7951576356214LLU;

	t51 = ((x3265/x3266)/(x3267<<x3268));

	if (t51 != 768614336404564650LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int8_t x3360 = 1;
	volatile int64_t t52 = -5647945253525LL;

	t52 = ((x3357/x3358)/(x3359<<x3360));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {


	t53 = ((x3393/x3394)/(x3395<<x3396));

	if (t53 != 2621020755002LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x3449 = 5U;
	uint64_t x3451 = UINT64_MAX;
	static int8_t x3452 = 8;

	t54 = ((x3449/x3450)/(x3451<<x3452));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x3493 = 1624U;
	int16_t x3494 = 3649;
	static uint32_t x3495 = 10820U;
	volatile uint32_t t55 = 1U;

	t55 = ((x3493/x3494)/(x3495<<x3496));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x3537 = UINT8_MAX;
	volatile int64_t x3538 = INT64_MIN;
	int16_t x3539 = 1804;
	uint8_t x3540 = 0U;
	volatile int64_t t56 = -491779768861384503LL;

	t56 = ((x3537/x3538)/(x3539<<x3540));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x3662 = INT16_MIN;
	uint8_t x3663 = 54U;
	static volatile int8_t x3664 = 0;
	int64_t t57 = 42166LL;

	t57 = ((x3661/x3662)/(x3663<<x3664));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x3713 = 148010582;
	volatile int16_t x3714 = 7074;
	uint32_t t58 = 2U;

	t58 = ((x3713/x3714)/(x3715<<x3716));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x3745 = UINT32_MAX;
	uint16_t x3746 = 4U;
	int8_t x3748 = 6;
	uint64_t t59 = 5LLU;

	t59 = ((x3745/x3746)/(x3747<<x3748));

	if (t59 != 322638LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x3906 = 202261677776753391LLU;
	uint16_t x3907 = 1930U;
	int16_t x3908 = 1;
	uint64_t t60 = 1100598481005LLU;

	t60 = ((x3905/x3906)/(x3907<<x3908));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x3945 = 30U;
	volatile int16_t x3946 = INT16_MIN;
	static int8_t x3948 = 0;
	volatile int32_t t61 = -362757818;

	t61 = ((x3945/x3946)/(x3947<<x3948));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x4157 = -1;
	uint64_t x4159 = 11869443985LLU;
	volatile uint64_t t62 = 17396829085706935LLU;

	t62 = ((x4157/x4158)/(x4159<<x4160));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x4177 = INT64_MIN;
	int8_t x4178 = INT8_MAX;
	uint32_t x4180 = 14U;
	int64_t t63 = 17648088242472219LL;

	t63 = ((x4177/x4178)/(x4179<<x4180));

	if (t63 != -17383046268LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x4261 = 6650U;
	uint32_t x4262 = 7436U;
	uint16_t x4263 = UINT16_MAX;
	uint8_t x4264 = 1U;
	volatile uint32_t t64 = 2487U;

	t64 = ((x4261/x4262)/(x4263<<x4264));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x4333 = 6904U;
	uint16_t x4334 = UINT16_MAX;
	uint32_t x4335 = 16775579U;
	static int16_t x4336 = 4;
	volatile uint32_t t65 = 326U;

	t65 = ((x4333/x4334)/(x4335<<x4336));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x4345 = INT16_MIN;
	int64_t x4346 = INT64_MIN;
	uint8_t x4347 = 52U;
	int64_t t66 = 16514399LL;

	t66 = ((x4345/x4346)/(x4347<<x4348));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x4369 = 5397U;
	int64_t x4370 = 1383LL;
	int8_t x4371 = 1;
	volatile uint32_t x4372 = 2U;
	int64_t t67 = 56004LL;

	t67 = ((x4369/x4370)/(x4371<<x4372));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x4545 = 858U;
	static int8_t x4546 = -1;
	int64_t x4547 = 14903LL;
	static uint16_t x4548 = 4U;

	t68 = ((x4545/x4546)/(x4547<<x4548));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x4557 = UINT8_MAX;
	int8_t x4558 = -1;
	volatile uint64_t x4559 = 2105324476LLU;
	int8_t x4560 = 1;
	uint64_t t69 = 2LLU;

	t69 = ((x4557/x4558)/(x4559<<x4560));

	if (t69 != 4380974116LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint8_t x4721 = 2U;
	int8_t x4722 = INT8_MIN;
	uint32_t x4723 = 228224263U;
	int64_t x4724 = 1LL;
	uint32_t t70 = 593386U;

	t70 = ((x4721/x4722)/(x4723<<x4724));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x4741 = UINT16_MAX;
	volatile int8_t x4742 = INT8_MIN;
	static uint8_t x4743 = 12U;
	uint8_t x4744 = 11U;
	volatile int32_t t71 = 1;

	t71 = ((x4741/x4742)/(x4743<<x4744));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x4817 = 12;
	volatile int64_t x4818 = -1LL;
	int8_t x4819 = 5;

	t72 = ((x4817/x4818)/(x4819<<x4820));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x4975 = 545;

	t73 = ((x4973/x4974)/(x4975<<x4976));

	if (t73 != -8295891380513LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x5169 = 1573U;
	int16_t x5171 = INT16_MAX;
	uint32_t t74 = 709113815U;

	t74 = ((x5169/x5170)/(x5171<<x5172));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x5193 = INT8_MAX;
	int32_t x5194 = -6302;
	uint8_t x5195 = UINT8_MAX;
	volatile uint32_t x5196 = 19U;
	volatile int32_t t75 = -18997;

	t75 = ((x5193/x5194)/(x5195<<x5196));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x5233 = 7;
	int8_t x5236 = 11;
	volatile int64_t t76 = 4799676LL;

	t76 = ((x5233/x5234)/(x5235<<x5236));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x5241 = UINT8_MAX;
	int32_t x5242 = INT32_MIN;
	volatile uint16_t x5243 = UINT16_MAX;
	int32_t x5244 = 12;

	t77 = ((x5241/x5242)/(x5243<<x5244));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x5253 = 5046U;
	volatile int32_t x5254 = -15;
	static uint32_t x5255 = 2783329U;
	uint8_t x5256 = 10U;
	volatile uint32_t t78 = 1017U;

	t78 = ((x5253/x5254)/(x5255<<x5256));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x5289 = UINT16_MAX;
	int64_t x5290 = -1LL;
	static uint16_t x5291 = UINT16_MAX;
	int64_t t79 = 126102835677976364LL;

	t79 = ((x5289/x5290)/(x5291<<x5292));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x5301 = INT64_MAX;
	volatile int64_t x5302 = INT64_MAX;
	uint64_t x5303 = 1104046LLU;
	uint32_t x5304 = 1U;
	static uint64_t t80 = 22019LLU;

	t80 = ((x5301/x5302)/(x5303<<x5304));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x5309 = 28;
	uint32_t x5310 = 31589U;
	uint8_t x5311 = 2U;
	uint32_t t81 = 462466095U;

	t81 = ((x5309/x5310)/(x5311<<x5312));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x5317 = -1;
	int8_t x5320 = 1;
	uint32_t t82 = 2045912U;

	t82 = ((x5317/x5318)/(x5319<<x5320));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x5341 = -76058LL;
	volatile uint16_t x5342 = UINT16_MAX;
	int64_t x5343 = 4976116LL;

	t83 = ((x5341/x5342)/(x5343<<x5344));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x5417 = INT64_MIN;
	int16_t x5418 = INT16_MAX;
	uint8_t x5419 = UINT8_MAX;
	static uint16_t x5420 = 9U;
	int64_t t84 = -419818157339227LL;

	t84 = ((x5417/x5418)/(x5419<<x5420));

	if (t84 != -2155970947LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x5465 = INT32_MIN;
	int64_t x5466 = INT64_MIN;
	int16_t x5468 = 9;
	int64_t t85 = 6833524422LL;

	t85 = ((x5465/x5466)/(x5467<<x5468));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x5477 = INT16_MIN;
	int64_t x5478 = -11326263LL;
	volatile uint16_t x5479 = 9U;
	uint8_t x5480 = 1U;
	int64_t t86 = 1LL;

	t86 = ((x5477/x5478)/(x5479<<x5480));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x5525 = -1739680648148LL;
	volatile int8_t x5526 = INT8_MAX;
	int8_t x5527 = 14;
	static volatile int64_t t87 = 474429LL;

	t87 = ((x5525/x5526)/(x5527<<x5528));

	if (t87 != -489224029LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x5541 = -1;
	int32_t x5542 = -216602;
	static uint16_t x5543 = 1U;
	static int8_t x5544 = 1;
	volatile int32_t t88 = 111;

	t88 = ((x5541/x5542)/(x5543<<x5544));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x5639 = 1;
	volatile int64_t t89 = -8228333638878LL;

	t89 = ((x5637/x5638)/(x5639<<x5640));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x5685 = -1LL;
	uint8_t x5688 = 9U;

	t90 = ((x5685/x5686)/(x5687<<x5688));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x5821 = -1;
	uint8_t x5823 = UINT8_MAX;
	volatile int32_t t91 = 0;

	t91 = ((x5821/x5822)/(x5823<<x5824));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x5833 = 4U;
	volatile int32_t x5834 = INT32_MAX;
	int8_t x5836 = 1;
	uint64_t t92 = 353066216LLU;

	t92 = ((x5833/x5834)/(x5835<<x5836));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x6005 = UINT16_MAX;
	int64_t x6006 = INT64_MIN;
	uint16_t x6007 = UINT16_MAX;
	uint8_t x6008 = 1U;
	volatile int64_t t93 = -10541882LL;

	t93 = ((x6005/x6006)/(x6007<<x6008));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x6045 = 337U;
	uint64_t x6047 = UINT64_MAX;
	uint16_t x6048 = 3U;
	uint64_t t94 = 63049958333110102LLU;

	t94 = ((x6045/x6046)/(x6047<<x6048));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x6173 = -1;
	int16_t x6174 = -342;
	static int16_t x6175 = 3491;
	volatile int32_t t95 = -27771;

	t95 = ((x6173/x6174)/(x6175<<x6176));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x6297 = UINT8_MAX;
	volatile int32_t x6299 = 2098;
	uint8_t x6300 = 3U;

	t96 = ((x6297/x6298)/(x6299<<x6300));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x6333 = UINT8_MAX;
	uint16_t x6334 = 25U;
	uint8_t x6336 = 10U;
	volatile int32_t t97 = 29750589;

	t97 = ((x6333/x6334)/(x6335<<x6336));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x6413 = INT64_MIN;
	volatile int16_t x6415 = INT16_MAX;
	int8_t x6416 = 0;
	volatile int64_t t98 = 9282343189117LL;

	t98 = ((x6413/x6414)/(x6415<<x6416));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x6445 = 12069025093LL;
	int32_t x6446 = -1;
	uint32_t x6447 = 30456010U;
	uint64_t x6448 = 5LLU;
	volatile int64_t t99 = 3204LL;

	t99 = ((x6445/x6446)/(x6447<<x6448));

	if (t99 != -12LL) { NG(); } else { ; }
	
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

