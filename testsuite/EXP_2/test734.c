#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x6 = INT64_MIN;
int64_t x203 = -2161768LL;
int64_t t2 = -2004746523LL;
volatile uint64_t t3 = 7LLU;
int16_t x421 = 101;
uint64_t x422 = UINT64_MAX;
int8_t x424 = 2;
uint64_t t5 = 1438941681779777849LLU;
volatile int64_t t6 = 217592145979437465LL;
static int8_t x622 = INT8_MIN;
int16_t x647 = 391;
int32_t x657 = -1;
uint32_t x658 = 618185U;
static volatile int32_t x660 = 0;
static uint32_t x665 = UINT32_MAX;
uint32_t x706 = UINT32_MAX;
uint64_t t12 = 4599632711981240625LLU;
static int16_t x962 = INT16_MAX;
static uint8_t x964 = 1U;
int64_t x1105 = 2214425057938204LL;
uint16_t x1114 = UINT16_MAX;
int64_t x1177 = -70694LL;
uint8_t x1180 = 36U;
uint64_t t19 = 7599329045249LLU;
int8_t x1189 = INT8_MAX;
static volatile int32_t x1190 = 21330681;
static int16_t x1191 = 27;
uint64_t x1214 = 643893327LLU;
uint32_t x1215 = 20U;
static uint32_t x1226 = 1172700U;
uint16_t x1228 = 8U;
uint8_t x1240 = 1U;
static uint32_t x1341 = UINT32_MAX;
int16_t x1353 = INT16_MIN;
static int16_t x1356 = 1;
volatile uint64_t t28 = 174895766255017919LLU;
static volatile int8_t x1536 = 61;
static int16_t x1569 = 8344;
uint16_t x1572 = 0U;
int64_t t31 = 2086343944254LL;
int64_t x1663 = INT64_MIN;
uint16_t x1664 = 3U;
int16_t x1719 = 30;
uint8_t x2037 = UINT8_MAX;
uint16_t x2087 = UINT16_MAX;
volatile uint8_t x2144 = 2U;
static uint32_t x2148 = 11U;
int16_t x2226 = INT16_MIN;
int64_t x2243 = 3145935LL;
int64_t x2417 = 1019993216578240510LL;
int64_t t48 = 5LL;
volatile int16_t x2453 = INT16_MIN;
int32_t t51 = 4505;
int8_t x2463 = INT8_MIN;
int8_t x2490 = INT8_MIN;
volatile int8_t x2492 = 0;
uint64_t t56 = 123772LLU;
static int32_t x2641 = -46859;
int32_t x2689 = INT32_MIN;
uint8_t x2691 = UINT8_MAX;
int16_t x2804 = 0;
static volatile uint64_t t61 = 8988544603LLU;
int32_t x2926 = 12072407;
uint8_t x2947 = 30U;
volatile int64_t t63 = 21043LL;
uint16_t x2970 = 3U;
int16_t x2974 = -1;
int8_t x2975 = 19;
static uint16_t x3104 = 0U;
uint32_t x3129 = 5U;
uint64_t x3258 = UINT64_MAX;
int64_t x3562 = -1LL;
volatile uint64_t x3573 = UINT64_MAX;
static uint32_t x3575 = 440U;
uint16_t x3582 = UINT16_MAX;
uint64_t x3665 = 236377355305877832LLU;
static uint64_t x3798 = UINT64_MAX;
volatile uint16_t x3936 = 2U;
static uint64_t t80 = 9418741329LLU;
static volatile uint8_t x4004 = 1U;
static uint64_t x4176 = 12LLU;
volatile uint32_t x4284 = 1U;
int32_t x4474 = 332107699;
uint8_t x4476 = 29U;
uint32_t x4566 = 50238109U;
uint8_t x4568 = 1U;
volatile uint32_t t88 = 12173U;
volatile int8_t x4594 = INT8_MIN;
int32_t x4595 = INT32_MIN;
volatile int32_t x4596 = 0;
volatile int64_t t91 = -182970890393282637LL;
uint16_t x4649 = 0U;
static int8_t x4652 = 3;
static volatile int64_t x4662 = 19629869LL;
int32_t x4706 = 25112695;
volatile uint8_t x4829 = 34U;
volatile int32_t x4846 = 203949;
int32_t x4847 = -166491645;
volatile uint8_t x4867 = 2U;
volatile uint32_t x4942 = 1U;
int64_t x4943 = INT64_MAX;
volatile uint64_t x4944 = 8LLU;
int64_t t98 = -1447664919LL;
uint16_t x5007 = 13858U;


void f0(void) {
	int64_t x5 = 12410841LL;
	uint8_t x7 = 39U;
	static uint64_t x8 = 29LLU;
	int64_t t0 = -237232LL;

	t0 = ((x5%(x6%x7))<<x8);

	if (t0 != 536870912LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x25 = INT16_MIN;
	uint8_t x26 = UINT8_MAX;
	static int64_t x27 = 191LL;
	volatile uint16_t x28 = 4U;
	volatile int64_t t1 = 1871LL;

	t1 = ((x25%(x26%x27))<<x28);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x201 = 13;
	int8_t x202 = -1;
	volatile uint16_t x204 = 1U;

	t2 = ((x201%(x202%x203))<<x204);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x265 = INT8_MIN;
	uint64_t x266 = 30360127718930LLU;
	static int32_t x267 = INT32_MIN;
	volatile uint64_t x268 = 1LLU;

	t3 = ((x265%(x266%x267))<<x268);

	if (t3 != 43104141680556LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x321 = INT64_MIN;
	static uint64_t x322 = UINT64_MAX;
	uint8_t x323 = 7U;
	int16_t x324 = 0;
	uint64_t t4 = 1296166580482075LLU;

	t4 = ((x321%(x322%x323))<<x324);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x423 = 119U;

	t5 = ((x421%(x422%x423))<<x424);

	if (t5 != 64LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x481 = 1U;
	static int32_t x482 = INT32_MIN;
	int64_t x483 = INT64_MIN;
	uint8_t x484 = 26U;

	t6 = ((x481%(x482%x483))<<x484);

	if (t6 != 67108864LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x621 = 25U;
	uint64_t x623 = 154289514LLU;
	uint8_t x624 = 29U;
	uint64_t t7 = 108895603527655463LLU;

	t7 = ((x621%(x622%x623))<<x624);

	if (t7 != 13421772800LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x645 = -1741899359022167342LL;
	uint32_t x646 = 62U;
	uint64_t x648 = 5LLU;
	volatile int64_t t8 = 2376343827019250LL;

	t8 = ((x645%(x646%x647))<<x648);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x659 = -1;
	static uint32_t t9 = 245821U;

	t9 = ((x657%(x658%x659))<<x660);

	if (t9 != 436100U) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x666 = -1;
	int8_t x667 = 3;
	int8_t x668 = 1;
	volatile uint32_t t10 = 492712U;

	t10 = ((x665%(x666%x667))<<x668);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x705 = 13LL;
	uint16_t x707 = 145U;
	uint16_t x708 = 28U;
	int64_t t11 = 4257377831044LL;

	t11 = ((x705%(x706%x707))<<x708);

	if (t11 != 3489660928LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x817 = 3504485477318394379LLU;
	int8_t x818 = -1;
	static int16_t x819 = INT16_MIN;
	uint8_t x820 = 40U;

	t12 = ((x817%(x818%x819))<<x820);

	if (t12 != 1441726925339885568LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x913 = INT16_MIN;
	int8_t x914 = -1;
	uint16_t x915 = 854U;
	volatile uint16_t x916 = 0U;
	int32_t t13 = 76993155;

	t13 = ((x913%(x914%x915))<<x916);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x961 = UINT8_MAX;
	int8_t x963 = INT8_MIN;
	static volatile int32_t t14 = 83132;

	t14 = ((x961%(x962%x963))<<x964);

	if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x1033 = 1;
	int8_t x1034 = -1;
	int32_t x1035 = -503942679;
	uint8_t x1036 = 1U;
	static int32_t t15 = -20087867;

	t15 = ((x1033%(x1034%x1035))<<x1036);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x1093 = 96LL;
	int64_t x1094 = INT64_MAX;
	int64_t x1095 = INT64_MIN;
	int32_t x1096 = 14;
	int64_t t16 = 16889LL;

	t16 = ((x1093%(x1094%x1095))<<x1096);

	if (t16 != 1572864LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x1106 = 11431796LLU;
	volatile int8_t x1107 = 14;
	uint16_t x1108 = 15U;
	volatile uint64_t t17 = 60231288787LLU;

	t17 = ((x1105%(x1106%x1107))<<x1108);

	if (t17 != 131072LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint16_t x1113 = 28U;
	uint32_t x1115 = 3801U;
	volatile uint8_t x1116 = 20U;
	static volatile uint32_t t18 = 106703241U;

	t18 = ((x1113%(x1114%x1115))<<x1116);

	if (t18 != 29360128U) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x1178 = 41U;
	volatile uint64_t x1179 = UINT64_MAX;

	t19 = ((x1177%(x1178%x1179))<<x1180);

	if (t19 != 412316860416LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x1192 = 0U;
	int32_t t20 = 603577418;

	t20 = ((x1189%(x1190%x1191))<<x1192);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int16_t x1213 = -1;
	int8_t x1216 = 1;
	uint64_t t21 = 290897LLU;

	t21 = ((x1213%(x1214%x1215))<<x1216);

	if (t21 != 2LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1225 = INT64_MAX;
	int64_t x1227 = INT64_MIN;
	int64_t t22 = 318067561195360LL;

	t22 = ((x1225%(x1226%x1227))<<x1228);

	if (t22 != 176488192LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1237 = 3U;
	int64_t x1238 = -17LL;
	int64_t x1239 = INT64_MAX;
	volatile int64_t t23 = 5241751129707LL;

	t23 = ((x1237%(x1238%x1239))<<x1240);

	if (t23 != 6LL) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x1321 = INT8_MIN;
	static int64_t x1322 = -1LL;
	int16_t x1323 = -201;
	uint32_t x1324 = 58U;
	int64_t t24 = 667603313609978640LL;

	t24 = ((x1321%(x1322%x1323))<<x1324);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x1329 = 3U;
	uint64_t x1330 = 1LLU;
	int8_t x1331 = INT8_MIN;
	static uint32_t x1332 = 3U;
	uint64_t t25 = 21928748LLU;

	t25 = ((x1329%(x1330%x1331))<<x1332);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x1342 = UINT64_MAX;
	uint8_t x1343 = 111U;
	uint8_t x1344 = 9U;
	static uint64_t t26 = 25731022576644LLU;

	t26 = ((x1341%(x1342%x1343))<<x1344);

	if (t26 != 7680LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1354 = UINT16_MAX;
	uint64_t x1355 = 24690691134LLU;
	uint64_t t27 = 30221404LLU;

	t27 = ((x1353%(x1354%x1355))<<x1356);

	if (t27 != 65536LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1469 = UINT64_MAX;
	volatile int8_t x1470 = INT8_MIN;
	int64_t x1471 = INT64_MAX;
	int16_t x1472 = 1;

	t28 = ((x1469%(x1470%x1471))<<x1472);

	if (t28 != 254LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x1489 = 2U;
	volatile int16_t x1490 = INT16_MAX;
	uint64_t x1491 = UINT64_MAX;
	int64_t x1492 = 6LL;
	static volatile uint64_t t29 = 1889730492044977053LLU;

	t29 = ((x1489%(x1490%x1491))<<x1492);

	if (t29 != 128LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1533 = 400285776168289LLU;
	volatile uint8_t x1534 = 1U;
	volatile int64_t x1535 = INT64_MAX;
	uint64_t t30 = 41LLU;

	t30 = ((x1533%(x1534%x1535))<<x1536);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1570 = INT8_MIN;
	int64_t x1571 = 1749264440704LL;

	t31 = ((x1569%(x1570%x1571))<<x1572);

	if (t31 != 24LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1581 = UINT16_MAX;
	int8_t x1582 = -6;
	static int64_t x1583 = INT64_MIN;
	uint8_t x1584 = 3U;
	static int64_t t32 = 80939229657LL;

	t32 = ((x1581%(x1582%x1583))<<x1584);

	if (t32 != 24LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1641 = INT32_MIN;
	static volatile uint64_t x1642 = 98799053203730LLU;
	uint64_t x1643 = UINT64_MAX;
	int64_t x1644 = 0LL;
	uint64_t t33 = 377796464545938863LLU;

	t33 = ((x1641%(x1642%x1643))<<x1644);

	if (t33 != 71646946843398LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1661 = INT8_MIN;
	uint64_t x1662 = UINT64_MAX;
	uint64_t t34 = 1488897562138LLU;

	t34 = ((x1661%(x1662%x1663))<<x1664);

	if (t34 != 18446744073709550600LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x1717 = UINT32_MAX;
	uint32_t x1718 = 2U;
	static volatile int8_t x1720 = 0;
	static volatile uint32_t t35 = 470012U;

	t35 = ((x1717%(x1718%x1719))<<x1720);

	if (t35 != 1U) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x1889 = UINT16_MAX;
	uint16_t x1890 = 392U;
	int32_t x1891 = INT32_MAX;
	uint8_t x1892 = 1U;
	int32_t t36 = -7;

	t36 = ((x1889%(x1890%x1891))<<x1892);

	if (t36 != 142) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1941 = 83831LL;
	int8_t x1942 = 1;
	int64_t x1943 = INT64_MIN;
	uint64_t x1944 = 17LLU;
	volatile int64_t t37 = 2173780456874028LL;

	t37 = ((x1941%(x1942%x1943))<<x1944);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x2021 = 686LL;
	uint64_t x2022 = 86149LLU;
	uint16_t x2023 = UINT16_MAX;
	static uint8_t x2024 = 23U;
	static uint64_t t38 = 338186LLU;

	t38 = ((x2021%(x2022%x2023))<<x2024);

	if (t38 != 5754585088LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x2038 = 50LLU;
	int64_t x2039 = 12766341393LL;
	uint16_t x2040 = 1U;
	static uint64_t t39 = 1054080269809846805LLU;

	t39 = ((x2037%(x2038%x2039))<<x2040);

	if (t39 != 10LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x2085 = 51U;
	uint32_t x2086 = 24U;
	uint8_t x2088 = 1U;
	static uint32_t t40 = 109123U;

	t40 = ((x2085%(x2086%x2087))<<x2088);

	if (t40 != 6U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2141 = -1;
	uint32_t x2142 = UINT32_MAX;
	volatile uint8_t x2143 = 2U;
	uint32_t t41 = 113U;

	t41 = ((x2141%(x2142%x2143))<<x2144);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x2145 = INT16_MIN;
	volatile int8_t x2146 = -2;
	int8_t x2147 = INT8_MIN;
	volatile int32_t t42 = -727968847;

	t42 = ((x2145%(x2146%x2147))<<x2148);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2225 = INT16_MIN;
	uint64_t x2227 = UINT64_MAX;
	int8_t x2228 = 5;
	static uint64_t t43 = 1470887LLU;

	t43 = ((x2225%(x2226%x2227))<<x2228);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x2241 = INT64_MAX;
	int32_t x2242 = INT32_MIN;
	static volatile int8_t x2244 = 2;
	volatile int64_t t44 = -32134596LL;

	t44 = ((x2241%(x2242%x2243))<<x2244);

	if (t44 != 3085012LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x2269 = 512;
	volatile int16_t x2270 = INT16_MIN;
	int32_t x2271 = -11756;
	static uint8_t x2272 = 10U;
	static int32_t t45 = -62527007;

	t45 = ((x2269%(x2270%x2271))<<x2272);

	if (t45 != 524288) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x2305 = 6158U;
	int64_t x2306 = INT64_MIN;
	int32_t x2307 = -34401;
	uint8_t x2308 = 50U;
	volatile int64_t t46 = 1LL;

	t46 = ((x2305%(x2306%x2307))<<x2308);

	if (t46 != 6933291626336878592LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x2361 = 1000U;
	int64_t x2362 = 23833854008862LL;
	volatile int8_t x2363 = INT8_MIN;
	uint8_t x2364 = 13U;
	int64_t t47 = -11LL;

	t47 = ((x2361%(x2362%x2363))<<x2364);

	if (t47 != 81920LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x2418 = INT64_MIN;
	static volatile uint32_t x2419 = 1991228310U;
	int8_t x2420 = 19;

	t48 = ((x2417%(x2418%x2419))<<x2420);

	if (t48 != 285884389785600LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x2421 = INT64_MAX;
	volatile int8_t x2422 = INT8_MIN;
	int32_t x2423 = INT32_MIN;
	volatile uint8_t x2424 = 3U;
	volatile int64_t t49 = 1LL;

	t49 = ((x2421%(x2422%x2423))<<x2424);

	if (t49 != 1016LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x2437 = UINT64_MAX;
	uint8_t x2438 = 23U;
	int32_t x2439 = -753284;
	uint16_t x2440 = 1U;
	volatile uint64_t t50 = 10953LLU;

	t50 = ((x2437%(x2438%x2439))<<x2440);

	if (t50 != 10LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x2454 = INT16_MIN;
	int32_t x2455 = INT32_MAX;
	volatile uint8_t x2456 = 14U;

	t51 = ((x2453%(x2454%x2455))<<x2456);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x2461 = 502225141441303932LLU;
	static int64_t x2462 = -1LL;
	uint32_t x2464 = 2U;
	volatile uint64_t t52 = 2LLU;

	t52 = ((x2461%(x2462%x2463))<<x2464);

	if (t52 != 2008900565765215728LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x2485 = -400;
	int32_t x2486 = -1;
	int32_t x2487 = 977570117;
	int32_t x2488 = 26;
	static int32_t t53 = 0;

	t53 = ((x2485%(x2486%x2487))<<x2488);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x2489 = 6894877U;
	int64_t x2491 = INT64_MIN;
	volatile int64_t t54 = -426791750516873025LL;

	t54 = ((x2489%(x2490%x2491))<<x2492);

	if (t54 != 29LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x2497 = 0U;
	int64_t x2498 = -1LL;
	int32_t x2499 = 2;
	uint8_t x2500 = 13U;
	int64_t t55 = -105650656761440571LL;

	t55 = ((x2497%(x2498%x2499))<<x2500);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x2501 = 50822701125883150LLU;
	int64_t x2502 = INT64_MIN;
	int16_t x2503 = 1399;
	uint8_t x2504 = 1U;

	t56 = ((x2501%(x2502%x2503))<<x2504);

	if (t56 != 101645402251766300LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x2609 = -1;
	static uint64_t x2610 = 5212725140196752LLU;
	int64_t x2611 = 32533958274LL;
	int8_t x2612 = 47;
	uint64_t t57 = 15245035167864269LLU;

	t57 = ((x2609%(x2610%x2611))<<x2612);

	if (t57 != 13458866748908371968LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x2642 = -1;
	int32_t x2643 = INT32_MAX;
	int32_t x2644 = 18;
	int32_t t58 = 1528749;

	t58 = ((x2641%(x2642%x2643))<<x2644);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x2690 = -1;
	uint16_t x2692 = 1U;
	volatile int32_t t59 = 270117518;

	t59 = ((x2689%(x2690%x2691))<<x2692);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x2765 = 1850134096LLU;
	volatile int16_t x2766 = -162;
	int64_t x2767 = INT64_MIN;
	int8_t x2768 = 1;
	uint64_t t60 = 953246LLU;

	t60 = ((x2765%(x2766%x2767))<<x2768);

	if (t60 != 3700268192LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x2801 = -1LL;
	uint64_t x2802 = 589LLU;
	uint8_t x2803 = 41U;

	t61 = ((x2801%(x2802%x2803))<<x2804);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x2925 = INT8_MAX;
	int64_t x2927 = INT64_MIN;
	static volatile int16_t x2928 = 17;
	volatile int64_t t62 = 8092740834LL;

	t62 = ((x2925%(x2926%x2927))<<x2928);

	if (t62 != 16646144LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x2945 = 88969910U;
	volatile int64_t x2946 = INT64_MIN;
	volatile uint16_t x2948 = 56U;

	t63 = ((x2945%(x2946%x2947))<<x2948);

	if (t63 != 432345564227567616LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x2961 = 3U;
	int64_t x2962 = INT64_MIN;
	uint8_t x2963 = 25U;
	volatile uint16_t x2964 = 9U;
	volatile int64_t t64 = 130976LL;

	t64 = ((x2961%(x2962%x2963))<<x2964);

	if (t64 != 1536LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x2969 = 3LLU;
	static int16_t x2971 = 1141;
	uint8_t x2972 = 15U;
	volatile uint64_t t65 = 1009492LLU;

	t65 = ((x2969%(x2970%x2971))<<x2972);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x2973 = 1U;
	uint8_t x2976 = 22U;
	volatile int32_t t66 = 255954;

	t66 = ((x2973%(x2974%x2975))<<x2976);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x3101 = 0U;
	int8_t x3102 = 28;
	static int16_t x3103 = -184;
	static volatile int32_t t67 = 16332912;

	t67 = ((x3101%(x3102%x3103))<<x3104);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x3130 = 1;
	volatile uint8_t x3131 = 17U;
	static int8_t x3132 = 1;
	uint32_t t68 = 3234U;

	t68 = ((x3129%(x3130%x3131))<<x3132);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x3257 = INT8_MIN;
	int64_t x3259 = 547LL;
	int16_t x3260 = 0;
	uint64_t t69 = 5LLU;

	t69 = ((x3257%(x3258%x3259))<<x3260);

	if (t69 != 54LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x3449 = 5842;
	volatile int16_t x3450 = INT16_MIN;
	static int64_t x3451 = 22897059LL;
	uint64_t x3452 = 7LLU;
	volatile int64_t t70 = 41055847178LL;

	t70 = ((x3449%(x3450%x3451))<<x3452);

	if (t70 != 747776LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x3465 = -1LL;
	uint64_t x3466 = 22614LLU;
	int32_t x3467 = -1;
	static int64_t x3468 = 1LL;
	volatile uint64_t t71 = 892235819881011394LLU;

	t71 = ((x3465%(x3466%x3467))<<x3468);

	if (t71 != 3570LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x3561 = UINT32_MAX;
	uint32_t x3563 = 24U;
	uint32_t x3564 = 1U;
	volatile int64_t t72 = -1412LL;

	t72 = ((x3561%(x3562%x3563))<<x3564);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x3569 = 264856803807570LL;
	int16_t x3570 = INT16_MIN;
	int8_t x3571 = INT8_MAX;
	static int16_t x3572 = 37;
	int64_t t73 = -532666839784526LL;

	t73 = ((x3569%(x3570%x3571))<<x3572);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x3574 = UINT32_MAX;
	static uint8_t x3576 = 15U;
	volatile uint64_t t74 = 562LLU;

	t74 = ((x3573%(x3574%x3575))<<x3576);

	if (t74 != 3440640LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x3581 = INT32_MAX;
	int16_t x3583 = INT16_MIN;
	uint8_t x3584 = 4U;
	static volatile int32_t t75 = -267963169;

	t75 = ((x3581%(x3582%x3583))<<x3584);

	if (t75 != 16) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x3637 = 84U;
	static uint32_t x3638 = 1U;
	volatile uint32_t x3639 = 1702740U;
	volatile int64_t x3640 = 22LL;
	static volatile uint32_t t76 = 979958U;

	t76 = ((x3637%(x3638%x3639))<<x3640);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x3666 = 1096874709554058618LLU;
	int64_t x3667 = INT64_MIN;
	uint32_t x3668 = 11U;
	volatile uint64_t t77 = 15657LLU;

	t77 = ((x3665%(x3666%x3667))<<x3668);

	if (t77 != 4485477749989457920LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x3797 = 763;
	int8_t x3799 = INT8_MAX;
	uint8_t x3800 = 2U;
	volatile uint64_t t78 = 485291102232LLU;

	t78 = ((x3797%(x3798%x3799))<<x3800);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x3881 = -1;
	uint64_t x3882 = 47865LLU;
	int16_t x3883 = INT16_MIN;
	uint8_t x3884 = 0U;
	volatile uint64_t t79 = 34164856592129462LLU;

	t79 = ((x3881%(x3882%x3883))<<x3884);

	if (t79 != 13275LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x3933 = 518730941527251LLU;
	int32_t x3934 = 260;
	volatile int8_t x3935 = INT8_MIN;

	t80 = ((x3933%(x3934%x3935))<<x3936);

	if (t80 != 12LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x4001 = INT16_MAX;
	int16_t x4002 = -1;
	uint16_t x4003 = 14U;
	volatile int32_t t81 = -43408334;

	t81 = ((x4001%(x4002%x4003))<<x4004);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint32_t x4021 = UINT32_MAX;
	uint8_t x4022 = 125U;
	uint64_t x4023 = UINT64_MAX;
	static uint64_t x4024 = 7LLU;
	uint64_t t82 = 2243646986LLU;

	t82 = ((x4021%(x4022%x4023))<<x4024);

	if (t82 != 5760LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x4089 = 1;
	int8_t x4090 = INT8_MIN;
	volatile int32_t x4091 = INT32_MAX;
	static volatile int8_t x4092 = 0;
	volatile int32_t t83 = 209384;

	t83 = ((x4089%(x4090%x4091))<<x4092);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x4173 = 8616U;
	int32_t x4174 = -1;
	uint16_t x4175 = UINT16_MAX;
	uint32_t t84 = 2298U;

	t84 = ((x4173%(x4174%x4175))<<x4176);

	if (t84 != 35291136U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x4241 = 885338;
	static int16_t x4242 = 26;
	static int64_t x4243 = INT64_MAX;
	volatile uint8_t x4244 = 0U;
	int64_t t85 = 6555LL;

	t85 = ((x4241%(x4242%x4243))<<x4244);

	if (t85 != 12LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x4281 = INT8_MAX;
	int8_t x4282 = -1;
	volatile int16_t x4283 = 3956;
	int32_t t86 = 0;

	t86 = ((x4281%(x4282%x4283))<<x4284);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x4473 = INT64_MAX;
	int32_t x4475 = INT32_MIN;
	volatile int64_t t87 = 0LL;

	t87 = ((x4473%(x4474%x4475))<<x4476);

	if (t87 != 71928687036989440LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x4565 = INT32_MIN;
	uint32_t x4567 = 12465098U;

	t88 = ((x4565%(x4566%x4567))<<x4568);

	if (t88 != 325006U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x4593 = 577552LLU;
	uint64_t t89 = 5780492LLU;

	t89 = ((x4593%(x4594%x4595))<<x4596);

	if (t89 != 577552LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x4601 = 5U;
	volatile int64_t x4602 = -1LL;
	int32_t x4603 = 5;
	static int32_t x4604 = 1;
	volatile int64_t t90 = 82632131LL;

	t90 = ((x4601%(x4602%x4603))<<x4604);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x4629 = 1751U;
	int16_t x4630 = -1;
	int64_t x4631 = 288971630932LL;
	uint16_t x4632 = 0U;

	t91 = ((x4629%(x4630%x4631))<<x4632);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x4650 = INT8_MIN;
	int32_t x4651 = -52090;
	volatile int32_t t92 = 548034117;

	t92 = ((x4649%(x4650%x4651))<<x4652);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x4661 = 1782U;
	int16_t x4663 = 2404;
	uint16_t x4664 = 14U;
	volatile int64_t t93 = 14774462836517345LL;

	t93 = ((x4661%(x4662%x4663))<<x4664);

	if (t93 != 9388032LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x4705 = 1U;
	uint64_t x4707 = 21931LLU;
	int16_t x4708 = 1;
	uint64_t t94 = 35717LLU;

	t94 = ((x4705%(x4706%x4707))<<x4708);

	if (t94 != 2LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x4830 = UINT32_MAX;
	static int16_t x4831 = -6075;
	volatile uint8_t x4832 = 6U;
	static volatile uint32_t t95 = 15767613U;

	t95 = ((x4829%(x4830%x4831))<<x4832);

	if (t95 != 2176U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x4845 = INT8_MAX;
	static int16_t x4848 = 0;
	volatile int32_t t96 = -179757576;

	t96 = ((x4845%(x4846%x4847))<<x4848);

	if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x4865 = INT16_MAX;
	int16_t x4866 = -1;
	volatile int32_t x4868 = 1;
	int32_t t97 = 4;

	t97 = ((x4865%(x4866%x4867))<<x4868);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x4941 = 31U;

	t98 = ((x4941%(x4942%x4943))<<x4944);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x5005 = 6062;
	static volatile int32_t x5006 = -106;
	uint8_t x5008 = 2U;
	volatile int32_t t99 = 52601024;

	t99 = ((x5005%(x5006%x5007))<<x5008);

	if (t99 != 80) { NG(); } else { ; }
	
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

