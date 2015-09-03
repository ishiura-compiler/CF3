#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x67 = 15LLU;
int8_t x68 = -9;
static volatile int16_t x305 = INT16_MAX;
static volatile uint8_t x342 = 1U;
static volatile uint64_t t4 = 0LLU;
uint64_t x435 = 31LLU;
static uint64_t t5 = 26013587559195630LLU;
volatile uint16_t x522 = 133U;
static volatile int16_t x565 = -963;
volatile uint64_t t8 = 74LLU;
int16_t x702 = 1;
int32_t t9 = 243609845;
int8_t x926 = INT8_MAX;
int64_t x941 = INT64_MIN;
static int16_t x942 = 2;
volatile int16_t x944 = -1;
int64_t t13 = -43309LL;
uint8_t x1005 = UINT8_MAX;
static volatile uint32_t x1007 = 5U;
uint32_t x1062 = 32436270U;
uint16_t x1110 = 42U;
volatile int16_t x1122 = INT16_MAX;
volatile uint32_t t19 = 9U;
volatile uint32_t x1243 = 17U;
int64_t x1244 = INT64_MAX;
uint64_t t20 = 108081370160281LLU;
uint8_t x1245 = 58U;
int8_t x1305 = -1;
uint8_t x1311 = 13U;
static int16_t x1312 = INT16_MIN;
int16_t x1353 = INT16_MIN;
volatile uint32_t x1393 = 1364056277U;
uint64_t x1396 = 67835415018295LLU;
static int8_t x1423 = 22;
static int16_t x1424 = 1;
uint32_t t27 = 590620U;
volatile int64_t t28 = -13582815319LL;
int16_t x1588 = INT16_MAX;
uint8_t x1669 = 124U;
static uint16_t x1671 = 6U;
uint16_t x1766 = 34U;
int8_t x1767 = 3;
int32_t t32 = 4;
volatile uint64_t x1854 = 55459236540LLU;
static uint32_t x1855 = 0U;
static uint8_t x2074 = 12U;
volatile uint64_t t36 = 8993353122548736817LLU;
int64_t t37 = -2LL;
static volatile uint8_t x2238 = 0U;
static uint8_t x2243 = 13U;
uint8_t x2279 = 2U;
int8_t x2494 = 1;
volatile uint32_t x2670 = 496U;
uint32_t x2672 = UINT32_MAX;
uint16_t x2692 = UINT16_MAX;
static int32_t t45 = -30;
static int8_t x2721 = INT8_MIN;
uint64_t x2724 = 8103629224658545LLU;
int8_t x2789 = 0;
uint64_t x2930 = 2015LLU;
volatile uint64_t t48 = 6933948855476353LLU;
uint8_t x2951 = 1U;
volatile int64_t x3080 = -1LL;
int32_t t53 = -10;
uint16_t x3099 = 31U;
int64_t x3154 = 34279787788813LL;
static uint64_t x3156 = UINT64_MAX;
uint16_t x3183 = 1U;
int32_t t56 = 1608;
int16_t x3253 = INT16_MIN;
uint64_t x3277 = 48LLU;
int8_t x3279 = 0;
int64_t x3432 = INT64_MIN;
volatile int64_t t61 = -251562167654LL;
volatile uint64_t t62 = 14036729LLU;
uint32_t x3602 = 2000U;
uint8_t x3603 = 2U;
static volatile int64_t t64 = 30146632241784LL;
uint8_t x3859 = 1U;
int32_t x4120 = INT32_MIN;
volatile int8_t x4160 = INT8_MAX;
volatile uint8_t x4325 = 71U;
uint8_t x4344 = 7U;
uint16_t x4395 = 18U;
uint8_t x4475 = 0U;
volatile int64_t t75 = -1LL;
uint32_t x4624 = UINT32_MAX;
int32_t x4698 = INT32_MAX;
int8_t x4715 = 0;
static int8_t x4716 = INT8_MIN;
uint8_t x4878 = UINT8_MAX;
int16_t x4880 = INT16_MAX;
uint8_t x4926 = 4U;
int64_t x5108 = -1LL;
int8_t x5127 = 3;
static int8_t x5128 = INT8_MAX;
uint32_t x5277 = 6380863U;
uint64_t t87 = 0LLU;
uint16_t x5346 = 63U;
static uint8_t x5347 = 5U;
int64_t x5449 = INT64_MAX;
static uint8_t x5467 = 3U;
static uint8_t x5468 = 8U;
int32_t x5476 = INT32_MIN;
int8_t x5543 = 14;
uint64_t x5590 = UINT64_MAX;
uint8_t x5605 = UINT8_MAX;
static uint32_t x5646 = 261376U;
int8_t x5663 = 16;


void f0(void) {
	int32_t x65 = -1;
	static uint16_t x66 = 882U;
	static int32_t t0 = 4586;

	t0 = (x65*((x66>>x67)%x68));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x289 = -111;
	int8_t x290 = 4;
	uint16_t x291 = 9U;
	uint16_t x292 = 832U;
	int32_t t1 = -480;

	t1 = (x289*((x290>>x291)%x292));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x306 = UINT8_MAX;
	uint32_t x307 = 2U;
	int32_t x308 = INT32_MIN;
	volatile int32_t t2 = -831613;

	t2 = (x305*((x306>>x307)%x308));

	if (t2 != 2064321) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x341 = INT8_MAX;
	int16_t x343 = 2;
	int8_t x344 = INT8_MIN;
	static int32_t t3 = 192842443;

	t3 = (x341*((x342>>x343)%x344));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x361 = 1601382U;
	uint64_t x362 = 34307039537LLU;
	int8_t x363 = 2;
	volatile int64_t x364 = INT64_MIN;

	t4 = (x361*((x362>>x363)%x364));

	if (t4 != 13734668896559688LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x433 = 7U;
	static uint8_t x434 = UINT8_MAX;
	uint64_t x436 = 488LLU;

	t5 = (x433*((x434>>x435)%x436));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x521 = INT8_MAX;
	uint8_t x523 = 27U;
	int64_t x524 = INT64_MIN;
	int64_t t6 = 309LL;

	t6 = (x521*((x522>>x523)%x524));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x566 = 1659878097234LLU;
	uint8_t x567 = 60U;
	static int8_t x568 = INT8_MIN;
	volatile uint64_t t7 = 139680001747431LLU;

	t7 = (x565*((x566>>x567)%x568));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x645 = -15550751;
	uint64_t x646 = 46175545224LLU;
	volatile int8_t x647 = 1;
	static int8_t x648 = INT8_MIN;

	t8 = (x645*((x646>>x647)%x648));

	if (t8 != 18087711870675720004LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x701 = 27339U;
	volatile uint16_t x703 = 2U;
	int16_t x704 = INT16_MIN;

	t9 = (x701*((x702>>x703)%x704));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x745 = -19;
	int32_t x746 = INT32_MAX;
	uint8_t x747 = 6U;
	int64_t x748 = INT64_MIN;
	static volatile int64_t t10 = 426937951083120640LL;

	t10 = (x745*((x746>>x747)%x748));

	if (t10 != -637534189LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x761 = INT16_MIN;
	uint64_t x762 = 25417LLU;
	uint8_t x763 = 15U;
	uint64_t x764 = UINT64_MAX;
	volatile uint64_t t11 = 17943328534550LLU;

	t11 = (x761*((x762>>x763)%x764));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x925 = INT8_MAX;
	uint32_t x927 = 0U;
	uint8_t x928 = UINT8_MAX;
	volatile int32_t t12 = 903352443;

	t12 = (x925*((x926>>x927)%x928));

	if (t12 != 16129) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x943 = 2U;

	t13 = (x941*((x942>>x943)%x944));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x1006 = 80;
	int64_t x1008 = INT64_MIN;
	int64_t t14 = 7927LL;

	t14 = (x1005*((x1006>>x1007)%x1008));

	if (t14 != 510LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x1049 = 1U;
	uint8_t x1050 = UINT8_MAX;
	int64_t x1051 = 0LL;
	static int16_t x1052 = -21;
	volatile uint32_t t15 = 1983687195U;

	t15 = (x1049*((x1050>>x1051)%x1052));

	if (t15 != 3U) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x1061 = 62U;
	int8_t x1063 = 1;
	static int8_t x1064 = INT8_MIN;
	volatile uint32_t t16 = 51733934U;

	t16 = (x1061*((x1062>>x1063)%x1064));

	if (t16 != 1005524370U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x1109 = 5U;
	static volatile int8_t x1111 = 1;
	int16_t x1112 = INT16_MAX;
	volatile int32_t t17 = 259695;

	t17 = (x1109*((x1110>>x1111)%x1112));

	if (t17 != 105) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x1121 = INT16_MAX;
	uint8_t x1123 = 5U;
	int64_t x1124 = INT64_MIN;
	volatile int64_t t18 = 135596LL;

	t18 = (x1121*((x1122>>x1123)%x1124));

	if (t18 != 33520641LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x1217 = 102749637U;
	int32_t x1218 = 139186;
	uint16_t x1219 = 0U;
	int16_t x1220 = -1;

	t19 = (x1217*((x1218>>x1219)%x1220));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x1241 = INT32_MIN;
	static uint64_t x1242 = 3363901LLU;

	t20 = (x1241*((x1242>>x1243)%x1244));

	if (t20 != 18446744020022460416LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1246 = 83U;
	uint8_t x1247 = 15U;
	volatile int64_t x1248 = 822108820515906LL;
	volatile int64_t t21 = -888LL;

	t21 = (x1245*((x1246>>x1247)%x1248));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x1297 = INT16_MIN;
	uint64_t x1298 = 461210414898381LLU;
	int16_t x1299 = 1;
	static volatile int16_t x1300 = INT16_MAX;
	volatile uint64_t t22 = 217LLU;

	t22 = (x1297*((x1298>>x1299)%x1300));

	if (t22 != 18446744072901689344LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x1306 = 0;
	static uint8_t x1307 = 0U;
	uint16_t x1308 = 529U;
	static int32_t t23 = -578;

	t23 = (x1305*((x1306>>x1307)%x1308));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x1309 = -1;
	int8_t x1310 = 1;
	int32_t t24 = -834865297;

	t24 = (x1309*((x1310>>x1311)%x1312));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x1354 = 47U;
	int16_t x1355 = 5;
	int64_t x1356 = 853520LL;
	int64_t t25 = -4LL;

	t25 = (x1353*((x1354>>x1355)%x1356));

	if (t25 != -32768LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x1394 = 4U;
	static uint16_t x1395 = 15U;
	uint64_t t26 = 37LLU;

	t26 = (x1393*((x1394>>x1395)%x1396));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1421 = 732673657U;
	static int16_t x1422 = 1;

	t27 = (x1421*((x1422>>x1423)%x1424));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1513 = -1LL;
	uint8_t x1514 = 3U;
	uint8_t x1515 = 5U;
	uint16_t x1516 = UINT16_MAX;

	t28 = (x1513*((x1514>>x1515)%x1516));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x1585 = -1;
	int16_t x1586 = 1;
	uint32_t x1587 = 11U;
	volatile int32_t t29 = -2605235;

	t29 = (x1585*((x1586>>x1587)%x1588));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x1670 = 4640132177LLU;
	int64_t x1672 = -1522630976LL;
	uint64_t t30 = 9400166340LLU;

	t30 = (x1669*((x1670>>x1671)%x1672));

	if (t30 != 8990256060LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x1761 = 2431U;
	uint16_t x1762 = 22U;
	uint16_t x1763 = 8U;
	int8_t x1764 = INT8_MIN;
	int32_t t31 = 7313;

	t31 = (x1761*((x1762>>x1763)%x1764));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x1765 = INT8_MIN;
	static uint16_t x1768 = UINT16_MAX;

	t32 = (x1765*((x1766>>x1767)%x1768));

	if (t32 != -512) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1853 = INT64_MIN;
	int32_t x1856 = 156625;
	volatile uint64_t t33 = 7020505LLU;

	t33 = (x1853*((x1854>>x1855)%x1856));

	if (t33 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x1937 = -1;
	int8_t x1938 = INT8_MAX;
	static uint8_t x1939 = 1U;
	int16_t x1940 = 218;
	static volatile int32_t t34 = -50;

	t34 = (x1937*((x1938>>x1939)%x1940));

	if (t34 != -63) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x2025 = INT8_MAX;
	uint16_t x2026 = 190U;
	int16_t x2027 = 0;
	int8_t x2028 = -61;
	static volatile int32_t t35 = -96394;

	t35 = (x2025*((x2026>>x2027)%x2028));

	if (t35 != 889) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x2073 = 1899316022596LLU;
	uint16_t x2075 = 6U;
	int8_t x2076 = INT8_MIN;

	t36 = (x2073*((x2074>>x2075)%x2076));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x2113 = 77U;
	uint16_t x2114 = 9590U;
	uint8_t x2115 = 3U;
	static volatile int64_t x2116 = INT64_MAX;

	t37 = (x2113*((x2114>>x2115)%x2116));

	if (t37 != 92246LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x2233 = 2040491132095LLU;
	uint64_t x2234 = 134865LLU;
	uint16_t x2235 = 51U;
	int64_t x2236 = INT64_MAX;
	uint64_t t38 = 3676572504081LLU;

	t38 = (x2233*((x2234>>x2235)%x2236));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x2237 = 395699U;
	static uint8_t x2239 = 29U;
	int32_t x2240 = INT32_MAX;
	volatile uint32_t t39 = 1926U;

	t39 = (x2237*((x2238>>x2239)%x2240));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x2241 = UINT32_MAX;
	volatile int8_t x2242 = INT8_MAX;
	static uint8_t x2244 = 30U;
	uint32_t t40 = 848138U;

	t40 = (x2241*((x2242>>x2243)%x2244));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x2277 = UINT32_MAX;
	static volatile uint64_t x2278 = 20925182412LLU;
	int8_t x2280 = INT8_MIN;
	volatile uint64_t t41 = 11562592LLU;

	t41 = (x2277*((x2278>>x2279)%x2280));

	if (t41 != 4021499451652752269LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x2493 = INT64_MIN;
	static uint16_t x2495 = 0U;
	uint8_t x2496 = UINT8_MAX;
	static volatile int64_t t42 = INT64_MIN;

	t42 = (x2493*((x2494>>x2495)%x2496));

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x2669 = UINT8_MAX;
	uint16_t x2671 = 8U;
	static uint32_t t43 = 160112946U;

	t43 = (x2669*((x2670>>x2671)%x2672));

	if (t43 != 255U) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x2689 = -47;
	uint16_t x2690 = UINT16_MAX;
	int8_t x2691 = 4;
	int32_t t44 = -5543852;

	t44 = (x2689*((x2690>>x2691)%x2692));

	if (t44 != -192465) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x2693 = 7738U;
	static uint8_t x2694 = UINT8_MAX;
	static uint16_t x2695 = 12U;
	int32_t x2696 = INT32_MIN;

	t45 = (x2693*((x2694>>x2695)%x2696));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x2722 = 877U;
	uint8_t x2723 = 3U;
	uint64_t t46 = 574051706553LLU;

	t46 = (x2721*((x2722>>x2723)%x2724));

	if (t46 != 18446744073709537664LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x2790 = UINT16_MAX;
	uint16_t x2791 = 6U;
	volatile int8_t x2792 = INT8_MIN;
	volatile int32_t t47 = -19214;

	t47 = (x2789*((x2790>>x2791)%x2792));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint64_t x2929 = UINT64_MAX;
	static uint8_t x2931 = 0U;
	volatile int32_t x2932 = INT32_MIN;

	t48 = (x2929*((x2930>>x2931)%x2932));

	if (t48 != 18446744073709549601LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x2949 = 21;
	uint64_t x2950 = 60LLU;
	volatile int32_t x2952 = -1;
	static uint64_t t49 = 2LLU;

	t49 = (x2949*((x2950>>x2951)%x2952));

	if (t49 != 630LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x3013 = INT64_MIN;
	int16_t x3014 = INT16_MAX;
	int8_t x3015 = 20;
	uint8_t x3016 = 106U;
	int64_t t50 = -468255715429LL;

	t50 = (x3013*((x3014>>x3015)%x3016));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x3065 = 0;
	static volatile int64_t x3066 = 1083LL;
	int16_t x3067 = 1;
	int8_t x3068 = INT8_MAX;
	static int64_t t51 = -387401LL;

	t51 = (x3065*((x3066>>x3067)%x3068));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x3077 = INT32_MIN;
	uint64_t x3078 = 46737231567403LLU;
	volatile uint8_t x3079 = 58U;
	volatile uint64_t t52 = 2474021743833958572LLU;

	t52 = (x3077*((x3078>>x3079)%x3080));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x3081 = UINT16_MAX;
	static uint8_t x3082 = 4U;
	uint16_t x3083 = 0U;
	int8_t x3084 = -1;

	t53 = (x3081*((x3082>>x3083)%x3084));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x3097 = 162024796;
	int16_t x3098 = 59;
	int8_t x3100 = INT8_MIN;
	volatile int32_t t54 = 123;

	t54 = (x3097*((x3098>>x3099)%x3100));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x3153 = 0;
	uint32_t x3155 = 1U;
	uint64_t t55 = 7318198LLU;

	t55 = (x3153*((x3154>>x3155)%x3156));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x3181 = 12;
	int16_t x3182 = 509;
	uint16_t x3184 = 219U;

	t56 = (x3181*((x3182>>x3183)%x3184));

	if (t56 != 420) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x3213 = -1;
	uint16_t x3214 = 1U;
	static volatile int16_t x3215 = 3;
	int32_t x3216 = INT32_MIN;
	int32_t t57 = 8857355;

	t57 = (x3213*((x3214>>x3215)%x3216));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x3254 = 1635U;
	uint8_t x3255 = 28U;
	int32_t x3256 = INT32_MIN;
	static volatile uint32_t t58 = 8690U;

	t58 = (x3253*((x3254>>x3255)%x3256));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x3278 = INT8_MAX;
	int64_t x3280 = INT64_MIN;
	uint64_t t59 = 1758527297867LLU;

	t59 = (x3277*((x3278>>x3279)%x3280));

	if (t59 != 6096LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x3429 = INT8_MIN;
	int32_t x3430 = INT32_MAX;
	int64_t x3431 = 4LL;
	volatile int64_t t60 = 705310LL;

	t60 = (x3429*((x3430>>x3431)%x3432));

	if (t60 != -17179869056LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x3449 = 2028811532U;
	int64_t x3450 = 0LL;
	int8_t x3451 = 55;
	int16_t x3452 = -1;

	t61 = (x3449*((x3450>>x3451)%x3452));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x3573 = UINT64_MAX;
	int64_t x3574 = 650286205413165LL;
	int16_t x3575 = 1;
	volatile uint16_t x3576 = UINT16_MAX;

	t62 = (x3573*((x3574>>x3575)%x3576));

	if (t62 != 18446744073709501839LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x3601 = 0U;
	static volatile int8_t x3604 = -20;
	uint32_t t63 = 8U;

	t63 = (x3601*((x3602>>x3603)%x3604));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x3733 = INT8_MIN;
	static volatile uint8_t x3734 = UINT8_MAX;
	int8_t x3735 = 6;
	volatile int64_t x3736 = INT64_MIN;

	t64 = (x3733*((x3734>>x3735)%x3736));

	if (t64 != -384LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x3857 = INT32_MIN;
	uint8_t x3858 = UINT8_MAX;
	volatile uint64_t x3860 = 2153740767967LLU;
	uint64_t t65 = 1604802110848418992LLU;

	t65 = (x3857*((x3858>>x3859)%x3860));

	if (t65 != 18446743800979128320LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x3889 = -46;
	int8_t x3890 = 7;
	int16_t x3891 = 31;
	uint8_t x3892 = 7U;
	volatile int32_t t66 = 456;

	t66 = (x3889*((x3890>>x3891)%x3892));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x3981 = 1U;
	uint64_t x3982 = 5918LLU;
	static int16_t x3983 = 2;
	int16_t x3984 = INT16_MIN;
	static volatile uint64_t t67 = 66749594898213LLU;

	t67 = (x3981*((x3982>>x3983)%x3984));

	if (t67 != 1479LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x4117 = INT32_MIN;
	uint16_t x4118 = 21U;
	uint64_t x4119 = 19LLU;
	int32_t t68 = -9729;

	t68 = (x4117*((x4118>>x4119)%x4120));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x4157 = 44300LLU;
	uint8_t x4158 = 2U;
	int8_t x4159 = 1;
	volatile uint64_t t69 = 14LLU;

	t69 = (x4157*((x4158>>x4159)%x4160));

	if (t69 != 44300LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x4249 = 230LLU;
	static volatile int8_t x4250 = INT8_MAX;
	int8_t x4251 = 6;
	uint64_t x4252 = 607LLU;
	uint64_t t70 = 8226168373065337LLU;

	t70 = (x4249*((x4250>>x4251)%x4252));

	if (t70 != 230LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x4326 = 2;
	static int32_t x4327 = 6;
	volatile uint32_t x4328 = UINT32_MAX;
	volatile uint32_t t71 = 4U;

	t71 = (x4325*((x4326>>x4327)%x4328));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x4341 = INT32_MAX;
	uint64_t x4342 = 3226596715444LLU;
	uint16_t x4343 = 0U;
	uint64_t t72 = 731421545004559658LLU;

	t72 = (x4341*((x4342>>x4343)%x4344));

	if (t72 != 8589934588LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x4393 = 42422346U;
	uint16_t x4394 = 28U;
	uint8_t x4396 = 1U;
	uint32_t t73 = 79710364U;

	t73 = (x4393*((x4394>>x4395)%x4396));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x4445 = INT64_MIN;
	static volatile int16_t x4446 = 1;
	uint8_t x4447 = 31U;
	int64_t x4448 = INT64_MIN;
	static volatile int64_t t74 = 25019LL;

	t74 = (x4445*((x4446>>x4447)%x4448));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x4473 = 649245;
	uint16_t x4474 = 406U;
	int64_t x4476 = INT64_MAX;

	t75 = (x4473*((x4474>>x4475)%x4476));

	if (t75 != 263593470LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x4621 = 308562;
	volatile uint16_t x4622 = UINT16_MAX;
	uint8_t x4623 = 2U;
	uint32_t t76 = 1778811313U;

	t76 = (x4621*((x4622>>x4623)%x4624));

	if (t76 != 760203950U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x4641 = UINT64_MAX;
	volatile int32_t x4642 = INT32_MAX;
	uint64_t x4643 = 1LLU;
	static uint16_t x4644 = UINT16_MAX;
	volatile uint64_t t77 = 1086LLU;

	t77 = (x4641*((x4642>>x4643)%x4644));

	if (t77 != 18446744073709535233LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x4657 = UINT16_MAX;
	uint16_t x4658 = 1U;
	uint16_t x4659 = 0U;
	static volatile int64_t x4660 = INT64_MIN;
	volatile int64_t t78 = -189LL;

	t78 = (x4657*((x4658>>x4659)%x4660));

	if (t78 != 65535LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x4697 = UINT32_MAX;
	int32_t x4699 = 7;
	int16_t x4700 = INT16_MIN;
	volatile uint32_t t79 = 46U;

	t79 = (x4697*((x4698>>x4699)%x4700));

	if (t79 != 4294934529U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x4713 = INT16_MIN;
	static int64_t x4714 = 599322761LL;
	volatile int64_t t80 = 25LL;

	t80 = (x4713*((x4714>>x4715)%x4716));

	if (t80 != -294912LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x4785 = -1LL;
	uint16_t x4786 = UINT16_MAX;
	uint16_t x4787 = 13U;
	volatile uint64_t x4788 = 223LLU;
	uint64_t t81 = 55490812967LLU;

	t81 = (x4785*((x4786>>x4787)%x4788));

	if (t81 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x4877 = UINT8_MAX;
	int64_t x4879 = 1LL;
	int32_t t82 = -27347262;

	t82 = (x4877*((x4878>>x4879)%x4880));

	if (t82 != 32385) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x4925 = INT8_MIN;
	uint16_t x4927 = 6U;
	int32_t x4928 = INT32_MAX;
	int32_t t83 = 0;

	t83 = (x4925*((x4926>>x4927)%x4928));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x5105 = UINT64_MAX;
	int16_t x5106 = INT16_MAX;
	int8_t x5107 = 1;
	static uint64_t t84 = 3583089348737187292LLU;

	t84 = (x5105*((x5106>>x5107)%x5108));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x5125 = INT32_MAX;
	int64_t x5126 = INT64_MAX;
	volatile int64_t t85 = -7466194LL;

	t85 = (x5125*((x5126>>x5127)%x5128));

	if (t85 != 32212254705LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x5278 = 36U;
	uint32_t x5279 = 4U;
	uint64_t x5280 = 298420542300585LLU;
	volatile uint64_t t86 = 4112164422835LLU;

	t86 = (x5277*((x5278>>x5279)%x5280));

	if (t86 != 12761726LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x5281 = UINT64_MAX;
	volatile uint64_t x5282 = UINT64_MAX;
	volatile uint8_t x5283 = 4U;
	uint8_t x5284 = 15U;

	t87 = (x5281*((x5282>>x5283)%x5284));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x5345 = -1;
	uint8_t x5348 = UINT8_MAX;
	volatile int32_t t88 = -467;

	t88 = (x5345*((x5346>>x5347)%x5348));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x5373 = -1;
	static uint8_t x5374 = 15U;
	static uint8_t x5375 = 18U;
	uint64_t x5376 = 408307590721542LLU;
	static volatile uint64_t t89 = 280952363498271LLU;

	t89 = (x5373*((x5374>>x5375)%x5376));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x5421 = 4816U;
	int32_t x5422 = 3;
	uint8_t x5423 = 2U;
	int64_t x5424 = INT64_MAX;
	int64_t t90 = -426LL;

	t90 = (x5421*((x5422>>x5423)%x5424));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x5450 = UINT64_MAX;
	uint8_t x5451 = 19U;
	static int32_t x5452 = -13378;
	volatile uint64_t t91 = 846989LLU;

	t91 = (x5449*((x5450>>x5451)%x5452));

	if (t91 != 9223336852482686977LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x5465 = INT16_MIN;
	int64_t x5466 = INT64_MAX;
	int64_t t92 = 14693591LL;

	t92 = (x5465*((x5466>>x5467)%x5468));

	if (t92 != -229376LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x5473 = UINT16_MAX;
	int64_t x5474 = 422314LL;
	volatile int8_t x5475 = 0;
	int64_t t93 = -1753393919655500156LL;

	t93 = (x5473*((x5474>>x5475)%x5476));

	if (t93 != 27676347990LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x5477 = 1023;
	uint64_t x5478 = 4252389958593LLU;
	static uint64_t x5479 = 10LLU;
	static volatile int32_t x5480 = INT32_MIN;
	uint64_t t94 = 295714929115147LLU;

	t94 = (x5477*((x5478>>x5479)%x5480));

	if (t94 != 4248237233064LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x5541 = UINT32_MAX;
	uint32_t x5542 = 61009033U;
	uint16_t x5544 = 317U;
	volatile uint32_t t95 = 606066U;

	t95 = (x5541*((x5542>>x5543)%x5544));

	if (t95 != 4294967060U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x5589 = INT8_MIN;
	static volatile int16_t x5591 = 0;
	int8_t x5592 = INT8_MAX;
	uint64_t t96 = 2106914934392662775LLU;

	t96 = (x5589*((x5590>>x5591)%x5592));

	if (t96 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x5606 = INT8_MAX;
	int16_t x5607 = 7;
	uint8_t x5608 = 2U;
	volatile int32_t t97 = -31731;

	t97 = (x5605*((x5606>>x5607)%x5608));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x5645 = -1;
	int32_t x5647 = 1;
	uint64_t x5648 = UINT64_MAX;
	volatile uint64_t t98 = 800814132LLU;

	t98 = (x5645*((x5646>>x5647)%x5648));

	if (t98 != 18446744073709420928LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x5661 = INT8_MIN;
	volatile int32_t x5662 = 4;
	volatile int32_t x5664 = -19644719;
	int32_t t99 = 429485;

	t99 = (x5661*((x5662>>x5663)%x5664));

	if (t99 != 0) { NG(); } else { ; }
	
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

