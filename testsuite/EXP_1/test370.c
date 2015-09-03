#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x20 = 7U;
uint16_t x33 = 3U;
uint64_t t1 = 1700739845183086796LLU;
int64_t x70 = INT64_MAX;
volatile uint32_t x71 = 3142836U;
uint8_t x76 = 0U;
int16_t x86 = INT16_MIN;
uint16_t x96 = 1U;
int32_t x155 = INT32_MAX;
uint64_t t11 = 0LLU;
uint32_t x312 = 23U;
uint64_t x345 = 34991882184615748LLU;
uint64_t x346 = UINT64_MAX;
int32_t x347 = INT32_MAX;
int8_t x348 = 0;
volatile int32_t x396 = 13;
int64_t x405 = 6608LL;
int32_t x406 = INT32_MAX;
static uint8_t x424 = 6U;
int8_t x571 = INT8_MIN;
uint32_t x572 = 3U;
volatile int32_t t19 = 14;
uint32_t x671 = 3U;
int8_t x672 = 1;
int8_t x790 = 2;
static volatile int32_t t22 = -13;
volatile uint64_t t23 = 2008089020159LLU;
static volatile uint16_t x872 = 2U;
static uint16_t x898 = UINT16_MAX;
uint64_t x899 = 279192638091760196LLU;
volatile uint64_t x946 = 483536LLU;
int32_t x1074 = INT32_MIN;
int32_t x1125 = -676;
int16_t x1126 = -1;
int8_t x1221 = -58;
int16_t x1224 = 23;
int32_t x1293 = INT32_MIN;
volatile int64_t x1323 = -28107742879LL;
int8_t x1365 = 0;
static volatile int8_t x1367 = INT8_MIN;
static int8_t x1483 = INT8_MAX;
int32_t t37 = 356034;
static volatile int64_t x1774 = -1LL;
static volatile int8_t x1775 = 46;
static int16_t x1912 = 0;
int64_t x1949 = 25LL;
volatile int32_t x1952 = 0;
uint8_t x2127 = 53U;
uint32_t t44 = 2991358U;
int16_t x2314 = -1;
uint8_t x2436 = 2U;
uint16_t x2444 = 24U;
static uint8_t x2464 = 1U;
static uint32_t x2583 = 3363235U;
int8_t x2604 = 48;
volatile int16_t x2677 = 3;
static volatile int8_t x2678 = 1;
static int8_t x2679 = 1;
static uint32_t x2744 = 14U;
static uint8_t x2854 = UINT8_MAX;
volatile int32_t t53 = 885194743;
uint8_t x2965 = 65U;
volatile uint16_t x2967 = 15U;
static uint32_t t55 = 251693970U;
static uint64_t x2970 = UINT64_MAX;
int8_t x3239 = INT8_MAX;
volatile uint32_t t59 = 1308790U;
int8_t x3368 = 2;
static volatile uint64_t x3374 = 11LLU;
int16_t x3603 = 113;
volatile uint64_t t65 = 21891116177013LLU;
uint8_t x3676 = 5U;
uint64_t x3761 = 222950439347794LLU;
volatile int8_t x3764 = 0;
volatile int16_t x3923 = -1;
int16_t x3925 = INT16_MAX;
static int8_t x3927 = 0;
uint8_t x4237 = 0U;
uint32_t x4269 = UINT32_MAX;
uint8_t x4272 = 4U;
volatile int8_t x4398 = 0;
volatile int8_t x4654 = INT8_MIN;
int64_t x4655 = 256LL;
uint32_t x4731 = UINT32_MAX;
static uint8_t x4732 = 6U;
volatile int16_t x4758 = -28;
volatile int32_t t79 = -10566192;
static uint64_t x5042 = 492956242072861165LLU;
int32_t x5081 = 48799605;
volatile uint32_t x5185 = 40U;
uint32_t x5285 = UINT32_MAX;
static int8_t x5288 = 3;
uint32_t x5311 = UINT32_MAX;
int16_t x5594 = -747;
uint32_t x5595 = 216462843U;
uint64_t x5606 = 6100646728LLU;
uint64_t t90 = 987274459225LLU;
volatile uint64_t x5690 = 52266113728856707LLU;
uint32_t t92 = 3848777U;
volatile int8_t x5782 = 23;
int32_t t93 = 3;
static uint64_t x5812 = 26LLU;
int8_t x5817 = -1;
uint32_t t99 = 0U;


void f0(void) {
	uint32_t x17 = 1914874U;
	int16_t x18 = -1;
	static volatile int32_t x19 = INT32_MAX;
	uint32_t t0 = 1178102228U;

	t0 = (((x17*x18)*x19)<<x20);

	if (t0 != 245103872U) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x34 = UINT64_MAX;
	static volatile uint64_t x35 = 6425422128102LLU;
	int16_t x36 = 1;

	t1 = (((x33*x34)*x35)<<x36);

	if (t1 != 18446705521176783004LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint64_t x69 = 16281LLU;
	int8_t x72 = 0;
	volatile uint64_t t2 = 975537662198128693LLU;

	t2 = (((x69*x70)*x71)<<x72);

	if (t2 != 18446744022541038700LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x73 = 960U;
	int16_t x74 = -12154;
	static int16_t x75 = INT16_MAX;
	volatile uint32_t t3 = 6U;

	t3 = (((x73*x74)*x75)<<x76);

	if (t3 != 4226943360U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x85 = -1LL;
	int16_t x87 = 429;
	uint8_t x88 = 5U;
	volatile int64_t t4 = 509LL;

	t4 = (((x85*x86)*x87)<<x88);

	if (t4 != 449839104LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x93 = -592;
	static volatile int64_t x94 = -1LL;
	static volatile uint64_t x95 = UINT64_MAX;
	uint64_t t5 = 66510906LLU;

	t5 = (((x93*x94)*x95)<<x96);

	if (t5 != 18446744073709550432LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x105 = 1;
	uint64_t x106 = 19LLU;
	volatile int8_t x107 = 1;
	uint8_t x108 = 29U;
	uint64_t t6 = 8202073776456LLU;

	t6 = (((x105*x106)*x107)<<x108);

	if (t6 != 10200547328LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x137 = 772LLU;
	int16_t x138 = INT16_MIN;
	uint16_t x139 = 503U;
	uint8_t x140 = 0U;
	uint64_t t7 = 1744LLU;

	t7 = (((x137*x138)*x139)<<x140);

	if (t7 != 18446744060985212928LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x149 = 1;
	int16_t x150 = 47;
	int32_t x151 = 66;
	static volatile uint8_t x152 = 6U;
	volatile int32_t t8 = 994;

	t8 = (((x149*x150)*x151)<<x152);

	if (t8 != 198528) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x153 = 858989445536005LLU;
	uint64_t x154 = 3167723984381LLU;
	volatile uint32_t x156 = 0U;
	volatile uint64_t t9 = 160120LLU;

	t9 = (((x153*x154)*x155)<<x156);

	if (t9 != 6911474861258218767LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x213 = 117454599218LLU;
	int16_t x214 = 1;
	volatile uint64_t x215 = 19588519071549LLU;
	int8_t x216 = 0;
	uint64_t t10 = 5557198054LLU;

	t10 = (((x213*x214)*x215)<<x216);

	if (t10 != 9948973587145694698LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x241 = -2LL;
	uint8_t x242 = UINT8_MAX;
	static volatile uint64_t x243 = 35422378278372428LLU;
	static int32_t x244 = 26;

	t11 = (((x241*x242)*x243)<<x244);

	if (t11 != 11962945730269675520LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x309 = 1;
	uint32_t x310 = 124U;
	int16_t x311 = 173;
	volatile uint32_t t12 = 148047U;

	t12 = (((x309*x310)*x311)<<x312);

	if (t12 != 3858759680U) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t t13 = 133172LLU;

	t13 = (((x345*x346)*x347)<<x348);

	if (t13 != 14315497685977851716LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x393 = 0;
	int8_t x394 = INT8_MAX;
	uint16_t x395 = 7524U;
	int32_t t14 = 0;

	t14 = (((x393*x394)*x395)<<x396);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x407 = 13U;
	int16_t x408 = 7;
	static int64_t t15 = -20501098LL;

	t15 = (((x405*x406)*x407)<<x408);

	if (t15 != 23613111707121664LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x413 = UINT16_MAX;
	uint64_t x414 = UINT64_MAX;
	static int32_t x415 = 1;
	int8_t x416 = 19;
	uint64_t t16 = 8164LLU;

	t16 = (((x413*x414)*x415)<<x416);

	if (t16 != 18446744039350337536LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x421 = UINT32_MAX;
	uint16_t x422 = UINT16_MAX;
	static int8_t x423 = INT8_MIN;
	volatile uint32_t t17 = 1294U;

	t17 = (((x421*x422)*x423)<<x424);

	if (t17 != 536862720U) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x569 = INT64_MIN;
	uint64_t x570 = UINT64_MAX;
	volatile uint64_t t18 = 10LLU;

	t18 = (((x569*x570)*x571)<<x572);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x581 = INT8_MIN;
	int16_t x582 = INT16_MIN;
	uint8_t x583 = 3U;
	static uint8_t x584 = 0U;

	t19 = (((x581*x582)*x583)<<x584);

	if (t19 != 12582912) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x669 = -1LL;
	int16_t x670 = INT16_MIN;
	int64_t t20 = 2471549048028514LL;

	t20 = (((x669*x670)*x671)<<x672);

	if (t20 != 196608LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x777 = -1;
	static volatile uint64_t x778 = UINT64_MAX;
	int8_t x779 = INT8_MIN;
	uint8_t x780 = 55U;
	volatile uint64_t t21 = 61315631LLU;

	t21 = (((x777*x778)*x779)<<x780);

	if (t21 != 13835058055282163712LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x789 = 1U;
	uint16_t x791 = UINT16_MAX;
	static volatile int16_t x792 = 1;

	t22 = (((x789*x790)*x791)<<x792);

	if (t22 != 262140) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x865 = 2665LL;
	static int32_t x866 = INT32_MIN;
	uint64_t x867 = 63440527500800944LLU;
	static uint32_t x868 = 9U;

	t23 = (((x865*x866)*x867)<<x868);

	if (t23 != 6894113828015964160LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint32_t x869 = 3667U;
	uint8_t x870 = UINT8_MAX;
	volatile int16_t x871 = INT16_MIN;
	uint32_t t24 = 3834539U;

	t24 = (((x869*x870)*x871)<<x872);

	if (t24 != 1990590464U) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x881 = 0U;
	volatile uint32_t x882 = 753038U;
	int16_t x883 = -10161;
	static uint8_t x884 = 0U;
	static volatile uint32_t t25 = 32149U;

	t25 = (((x881*x882)*x883)<<x884);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x897 = 747766LL;
	uint8_t x900 = 1U;
	uint64_t t26 = 10711LLU;

	t26 = (((x897*x898)*x899)<<x900);

	if (t26 != 6282521141066179920LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x925 = -1;
	static volatile int16_t x926 = INT16_MIN;
	uint32_t x927 = 0U;
	static uint8_t x928 = 5U;
	uint32_t t27 = 163385U;

	t27 = (((x925*x926)*x927)<<x928);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x945 = -1;
	int8_t x947 = 37;
	uint16_t x948 = 52U;
	volatile uint64_t t28 = 1223589924318493LLU;

	t28 = (((x945*x946)*x947)<<x948);

	if (t28 != 2233785415175766016LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1073 = UINT64_MAX;
	int64_t x1075 = 1252752749LL;
	uint16_t x1076 = 25U;
	volatile uint64_t t29 = 53LLU;

	t29 = (((x1073*x1074)*x1075)<<x1076);

	if (t29 != 7854277750134145024LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x1127 = 4671447986LLU;
	static int8_t x1128 = 10;
	volatile uint64_t t30 = 1482549588076LLU;

	t30 = (((x1125*x1126)*x1127)<<x1128);

	if (t30 != 3233688410660864LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x1217 = 0;
	int8_t x1218 = -7;
	uint64_t x1219 = UINT64_MAX;
	uint8_t x1220 = 47U;
	volatile uint64_t t31 = 5836754037945305253LLU;

	t31 = (((x1217*x1218)*x1219)<<x1220);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x1222 = -1LL;
	static int16_t x1223 = INT16_MAX;
	static int64_t t32 = 2LL;

	t32 = (((x1221*x1222)*x1223)<<x1224);

	if (t32 != 15942432063488LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x1294 = 3801525546880090LLU;
	uint32_t x1295 = UINT32_MAX;
	uint32_t x1296 = 3U;
	volatile uint64_t t33 = 10583805LLU;

	t33 = (((x1293*x1294)*x1295)<<x1296);

	if (t33 != 10326245318353485824LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1321 = INT32_MIN;
	uint32_t x1322 = 14U;
	volatile uint32_t x1324 = 2U;
	volatile int64_t t34 = 57235128312285LL;

	t34 = (((x1321*x1322)*x1323)<<x1324);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1366 = INT32_MIN;
	uint16_t x1368 = 15U;
	static volatile int32_t t35 = -27;

	t35 = (((x1365*x1366)*x1367)<<x1368);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1481 = INT64_MAX;
	uint64_t x1482 = UINT64_MAX;
	uint16_t x1484 = 5U;
	volatile uint64_t t36 = 107LLU;

	t36 = (((x1481*x1482)*x1483)<<x1484);

	if (t36 != 4064LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x1501 = -461;
	int16_t x1502 = -3372;
	uint8_t x1503 = 1U;
	int8_t x1504 = 7;

	t37 = (((x1501*x1502)*x1503)<<x1504);

	if (t37 != 198974976) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1565 = INT8_MIN;
	uint64_t x1566 = 58597LLU;
	uint16_t x1567 = UINT16_MAX;
	static int8_t x1568 = 20;
	volatile uint64_t t38 = 157LLU;

	t38 = (((x1565*x1566)*x1567)<<x1568);

	if (t38 != 17931327275643437056LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x1721 = UINT32_MAX;
	int8_t x1722 = INT8_MAX;
	uint64_t x1723 = UINT64_MAX;
	int8_t x1724 = 41;
	static volatile uint64_t t39 = 1765494163431LLU;

	t39 = (((x1721*x1722)*x1723)<<x1724);

	if (t39 != 279275953455104LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x1773 = -7711;
	uint8_t x1776 = 13U;
	volatile int64_t t40 = -30285397LL;

	t40 = (((x1773*x1774)*x1775)<<x1776);

	if (t40 != 2905751552LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x1909 = 4U;
	uint32_t x1910 = 9U;
	volatile uint8_t x1911 = 126U;
	static uint32_t t41 = 56261U;

	t41 = (((x1909*x1910)*x1911)<<x1912);

	if (t41 != 4536U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x1950 = 1;
	uint16_t x1951 = UINT16_MAX;
	int64_t t42 = 562LL;

	t42 = (((x1949*x1950)*x1951)<<x1952);

	if (t42 != 1638375LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x2125 = 1;
	int16_t x2126 = INT16_MAX;
	uint8_t x2128 = 0U;
	int32_t t43 = 0;

	t43 = (((x2125*x2126)*x2127)<<x2128);

	if (t43 != 1736651) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x2277 = INT16_MIN;
	uint32_t x2278 = 500916U;
	static volatile int8_t x2279 = INT8_MAX;
	uint8_t x2280 = 9U;

	t44 = (((x2277*x2278)*x2279)<<x2280);

	if (t44 != 3019898880U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x2313 = UINT32_MAX;
	int8_t x2315 = 3;
	uint32_t x2316 = 3U;
	static volatile uint32_t t45 = 1105655610U;

	t45 = (((x2313*x2314)*x2315)<<x2316);

	if (t45 != 24U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x2433 = INT32_MIN;
	uint64_t x2434 = 118601862LLU;
	int64_t x2435 = INT64_MIN;
	volatile uint64_t t46 = 9LLU;

	t46 = (((x2433*x2434)*x2435)<<x2436);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x2441 = -1LL;
	static uint64_t x2442 = 13893LLU;
	uint64_t x2443 = 2451195261LLU;
	volatile uint64_t t47 = 1069LLU;

	t47 = (((x2441*x2442)*x2443)<<x2444);

	if (t47 != 510106219029987328LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x2461 = INT32_MIN;
	uint64_t x2462 = UINT64_MAX;
	int64_t x2463 = 4184173288586696060LL;
	static uint64_t t48 = 402LLU;

	t48 = (((x2461*x2462)*x2463)<<x2464);

	if (t48 != 17357811379880329216LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x2581 = UINT8_MAX;
	uint64_t x2582 = UINT64_MAX;
	uint16_t x2584 = 0U;
	volatile uint64_t t49 = 665650168010LLU;

	t49 = (((x2581*x2582)*x2583)<<x2584);

	if (t49 != 18446744072851926691LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x2601 = 12534132071LLU;
	volatile uint64_t x2602 = UINT64_MAX;
	uint64_t x2603 = 1122113700390LLU;
	static uint64_t t50 = 868979920047454437LLU;

	t50 = (((x2601*x2602)*x2603)<<x2604);

	if (t50 != 13021595372588367872LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x2680 = 0;
	volatile int32_t t51 = 103;

	t51 = (((x2677*x2678)*x2679)<<x2680);

	if (t51 != 3) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x2741 = 23;
	volatile int32_t x2742 = -1;
	static int16_t x2743 = -1;
	volatile int32_t t52 = 1;

	t52 = (((x2741*x2742)*x2743)<<x2744);

	if (t52 != 376832) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x2853 = 7;
	uint16_t x2855 = 48U;
	uint32_t x2856 = 2U;

	t53 = (((x2853*x2854)*x2855)<<x2856);

	if (t53 != 342720) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x2941 = 291099291LLU;
	uint32_t x2942 = UINT32_MAX;
	int64_t x2943 = INT64_MAX;
	uint16_t x2944 = 0U;
	volatile uint64_t t54 = 52207LLU;

	t54 = (((x2941*x2942)*x2943)<<x2944);

	if (t54 != 7973110102412087963LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x2966 = 7661627U;
	int16_t x2968 = 2;

	t55 = (((x2965*x2966)*x2967)<<x2968);

	if (t55 != 4110541524U) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x2969 = INT8_MAX;
	static uint32_t x2971 = UINT32_MAX;
	volatile int32_t x2972 = 0;
	uint64_t t56 = 160627820560414762LLU;

	t56 = (((x2969*x2970)*x2971)<<x2972);

	if (t56 != 18446743528248705151LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x3125 = UINT16_MAX;
	uint32_t x3126 = 1U;
	int16_t x3127 = -1;
	volatile int8_t x3128 = 30;
	static volatile uint32_t t57 = 70U;

	t57 = (((x3125*x3126)*x3127)<<x3128);

	if (t57 != 1073741824U) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x3213 = UINT64_MAX;
	volatile uint32_t x3214 = 0U;
	volatile uint8_t x3215 = UINT8_MAX;
	uint32_t x3216 = 41U;
	uint64_t t58 = 2307LLU;

	t58 = (((x3213*x3214)*x3215)<<x3216);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x3237 = UINT32_MAX;
	int8_t x3238 = 7;
	volatile uint8_t x3240 = 1U;

	t59 = (((x3237*x3238)*x3239)<<x3240);

	if (t59 != 4294965518U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x3257 = INT8_MIN;
	static int8_t x3258 = -20;
	uint32_t x3259 = UINT32_MAX;
	uint8_t x3260 = 29U;
	static volatile uint32_t t60 = 351012915U;

	t60 = (((x3257*x3258)*x3259)<<x3260);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x3293 = 197U;
	int64_t x3294 = -62LL;
	volatile int64_t x3295 = -65816988944761LL;
	static uint64_t x3296 = 3LLU;
	int64_t t61 = -3LL;

	t61 = (((x3293*x3294)*x3295)<<x3296);

	if (t61 != 6431109623770486832LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x3365 = INT8_MIN;
	int16_t x3366 = -21;
	volatile uint64_t x3367 = 14747LLU;
	uint64_t t62 = 1295719381494791239LLU;

	t62 = (((x3365*x3366)*x3367)<<x3368);

	if (t62 != 158559744LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x3373 = INT16_MIN;
	volatile int64_t x3375 = INT64_MAX;
	static uint8_t x3376 = 36U;
	uint64_t t63 = 33076118719100777LLU;

	t63 = (((x3373*x3374)*x3375)<<x3376);

	if (t63 != 24769797950537728LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x3601 = UINT64_MAX;
	static int8_t x3602 = 1;
	int8_t x3604 = 0;
	volatile uint64_t t64 = 45456593945LLU;

	t64 = (((x3601*x3602)*x3603)<<x3604);

	if (t64 != 18446744073709551503LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x3649 = 66511LLU;
	uint8_t x3650 = 77U;
	volatile int8_t x3651 = INT8_MIN;
	uint8_t x3652 = 1U;

	t65 = (((x3649*x3650)*x3651)<<x3652);

	if (t65 != 18446744072398486784LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x3673 = INT8_MAX;
	uint64_t x3674 = 480799439LLU;
	int32_t x3675 = INT32_MIN;
	static uint64_t t66 = 16758LLU;

	t66 = (((x3673*x3674)*x3675)<<x3676);

	if (t66 != 9741344199399178240LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x3685 = INT8_MAX;
	static int16_t x3686 = -231;
	static volatile uint32_t x3687 = 7685233U;
	uint16_t x3688 = 6U;
	uint32_t t67 = 104276U;

	t67 = (((x3685*x3686)*x3687)<<x3688);

	if (t67 != 1542561216U) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x3762 = UINT8_MAX;
	volatile int64_t x3763 = INT64_MIN;
	static uint64_t t68 = 108887808286704LLU;

	t68 = (((x3761*x3762)*x3763)<<x3764);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x3785 = 4133LLU;
	static volatile int32_t x3786 = INT32_MIN;
	volatile uint64_t x3787 = UINT64_MAX;
	uint8_t x3788 = 1U;
	static volatile uint64_t t69 = 282897340114296876LLU;

	t69 = (((x3785*x3786)*x3787)<<x3788);

	if (t69 != 17751099834368LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x3921 = 3966603597794681389LLU;
	int32_t x3922 = INT32_MAX;
	int16_t x3924 = 22;
	uint64_t t70 = 3914712917LLU;

	t70 = (((x3921*x3922)*x3923)<<x3924);

	if (t70 != 17839555993835405312LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x3926 = -101;
	int8_t x3928 = 4;
	int32_t t71 = 30981;

	t71 = (((x3925*x3926)*x3927)<<x3928);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x4238 = 2;
	uint64_t x4239 = 206180LLU;
	uint8_t x4240 = 0U;
	static uint64_t t72 = 256468033976642915LLU;

	t72 = (((x4237*x4238)*x4239)<<x4240);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int32_t x4270 = INT32_MAX;
	int32_t x4271 = -1;
	volatile uint32_t t73 = 191U;

	t73 = (((x4269*x4270)*x4271)<<x4272);

	if (t73 != 4294967280U) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x4397 = 0U;
	int32_t x4399 = -250;
	uint32_t x4400 = 0U;
	static volatile int32_t t74 = -6561759;

	t74 = (((x4397*x4398)*x4399)<<x4400);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x4653 = 783722569U;
	uint8_t x4656 = 3U;
	volatile int64_t t75 = -1463427LL;

	t75 = (((x4653*x4654)*x4655)<<x4656);

	if (t75 != 5658063405056LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x4721 = 23487202LLU;
	uint32_t x4722 = 481680046U;
	uint16_t x4723 = 26U;
	uint32_t x4724 = 55U;
	volatile uint64_t t76 = 953184645162553794LLU;

	t76 = (((x4721*x4722)*x4723)<<x4724);

	if (t76 != 17005592192950992896LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x4729 = 541261586LLU;
	volatile int16_t x4730 = -1;
	uint64_t t77 = 1390190600071LLU;

	t77 = (((x4729*x4730)*x4731)<<x4732);

	if (t77 != 17239844829156852864LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x4757 = 1933LLU;
	int8_t x4759 = -1;
	uint64_t x4760 = 3LLU;
	uint64_t t78 = 773733559841895199LLU;

	t78 = (((x4757*x4758)*x4759)<<x4760);

	if (t78 != 432992LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x5029 = 0;
	int8_t x5030 = 1;
	volatile int32_t x5031 = INT32_MIN;
	static uint8_t x5032 = 1U;

	t79 = (((x5029*x5030)*x5031)<<x5032);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int16_t x5041 = -1;
	volatile uint32_t x5043 = 1U;
	uint16_t x5044 = 42U;
	uint64_t t80 = 36333LLU;

	t80 = (((x5041*x5042)*x5043)<<x5044);

	if (t80 != 13697781829531074560LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x5082 = 1LL;
	int8_t x5083 = 0;
	int8_t x5084 = 4;
	int64_t t81 = 193505848962LL;

	t81 = (((x5081*x5082)*x5083)<<x5084);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x5186 = 1;
	static int32_t x5187 = INT32_MIN;
	static int32_t x5188 = 0;
	volatile uint32_t t82 = 1769U;

	t82 = (((x5185*x5186)*x5187)<<x5188);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x5213 = 11U;
	uint64_t x5214 = 117075LLU;
	uint16_t x5215 = UINT16_MAX;
	static uint8_t x5216 = 7U;
	uint64_t t83 = 1317002243091880LLU;

	t83 = (((x5213*x5214)*x5215)<<x5216);

	if (t83 != 10802894256000LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x5286 = -1;
	uint8_t x5287 = 20U;
	uint32_t t84 = 3U;

	t84 = (((x5285*x5286)*x5287)<<x5288);

	if (t84 != 160U) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x5309 = 0U;
	int64_t x5310 = INT64_MIN;
	int16_t x5312 = 57;
	int64_t t85 = -1855123060963558LL;

	t85 = (((x5309*x5310)*x5311)<<x5312);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x5433 = 2931;
	static uint64_t x5434 = 3489LLU;
	int16_t x5435 = INT16_MAX;
	volatile int8_t x5436 = 1;
	static volatile uint64_t t86 = 15690754LLU;

	t86 = (((x5433*x5434)*x5435)<<x5436);

	if (t86 != 670167657306LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x5485 = INT64_MAX;
	static volatile uint64_t x5486 = 25LLU;
	int16_t x5487 = -1;
	int16_t x5488 = 12;
	volatile uint64_t t87 = 350464062738LLU;

	t87 = (((x5485*x5486)*x5487)<<x5488);

	if (t87 != 102400LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x5521 = 5U;
	int8_t x5522 = INT8_MIN;
	uint8_t x5523 = 0U;
	int16_t x5524 = 2;
	int32_t t88 = 31396813;

	t88 = (((x5521*x5522)*x5523)<<x5524);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x5593 = INT16_MIN;
	uint8_t x5596 = 30U;
	uint32_t t89 = 2393120U;

	t89 = (((x5593*x5594)*x5595)<<x5596);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x5605 = -1LL;
	int16_t x5607 = INT16_MAX;
	uint16_t x5608 = 2U;

	t90 = (((x5605*x5606)*x5607)<<x5608);

	if (t90 != 18445944474144206112LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x5689 = -1;
	int16_t x5691 = 1;
	uint32_t x5692 = 12U;
	uint64_t t91 = 5831700LLU;

	t91 = (((x5689*x5690)*x5691)<<x5692);

	if (t91 != 7278927051117547520LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x5745 = 2U;
	int16_t x5746 = INT16_MAX;
	int8_t x5747 = INT8_MIN;
	int16_t x5748 = 1;

	t92 = (((x5745*x5746)*x5747)<<x5748);

	if (t92 != 4278190592U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x5781 = -48;
	int8_t x5783 = -1;
	int16_t x5784 = 3;

	t93 = (((x5781*x5782)*x5783)<<x5784);

	if (t93 != 8832) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x5809 = -1;
	uint32_t x5810 = 241U;
	int16_t x5811 = -7;
	volatile uint32_t t94 = 451U;

	t94 = (((x5809*x5810)*x5811)<<x5812);

	if (t94 != 1543503872U) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x5818 = -1;
	uint8_t x5819 = UINT8_MAX;
	uint16_t x5820 = 20U;
	int32_t t95 = 1217;

	t95 = (((x5817*x5818)*x5819)<<x5820);

	if (t95 != 267386880) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x5993 = -1;
	volatile uint32_t x5994 = 150798U;
	uint64_t x5995 = 447949599LLU;
	static uint8_t x5996 = 0U;
	volatile uint64_t t96 = 5615697684167LLU;

	t96 = (((x5993*x5994)*x5995)<<x5996);

	if (t96 != 1923861328057684302LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x6009 = 1453U;
	int16_t x6010 = -625;
	uint64_t x6011 = 79238LLU;
	uint8_t x6012 = 2U;
	uint64_t t97 = 2027263084336539LLU;

	t97 = (((x6009*x6010)*x6011)<<x6012);

	if (t97 != 18446743785877516616LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x6013 = -1;
	uint32_t x6014 = 84691039U;
	uint16_t x6015 = 11778U;
	uint64_t x6016 = 26LLU;
	uint32_t t98 = 33030068U;

	t98 = (((x6013*x6014)*x6015)<<x6016);

	if (t98 != 134217728U) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x6157 = UINT8_MAX;
	uint32_t x6158 = 863U;
	int32_t x6159 = INT32_MIN;
	static volatile uint16_t x6160 = 1U;

	t99 = (((x6157*x6158)*x6159)<<x6160);

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

