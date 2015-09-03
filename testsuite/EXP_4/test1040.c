#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x41 = 1803710832959410LL;
static uint8_t x44 = 1U;
uint16_t x93 = 692U;
static uint64_t x101 = 1534258LLU;
int64_t x126 = INT64_MAX;
int16_t x272 = 1;
int16_t x278 = INT16_MIN;
static int32_t x350 = -219298;
int16_t x352 = 12;
static volatile int32_t t7 = 0;
static volatile uint32_t t8 = 112U;
int16_t x390 = INT16_MIN;
static uint32_t x391 = UINT32_MAX;
int8_t x396 = 23;
uint32_t t11 = 11684235U;
volatile int64_t x449 = -13272066810114702LL;
int64_t x450 = INT64_MAX;
volatile int64_t t13 = -6148LL;
static uint64_t t16 = 189489748851298LLU;
static volatile uint32_t x770 = UINT32_MAX;
uint64_t x771 = 3471502LLU;
int8_t x788 = 2;
volatile int32_t t18 = -287706539;
static volatile int32_t x789 = -1;
int32_t x1014 = INT32_MAX;
volatile int16_t x1236 = 1;
int16_t x1261 = -7927;
volatile int64_t x1262 = -1LL;
int64_t x1294 = INT64_MIN;
static uint16_t x1296 = 26U;
static volatile uint64_t x1475 = 47415567867833LLU;
volatile uint8_t x1492 = 6U;
int64_t x1561 = -1LL;
volatile int32_t t30 = -29017;
uint8_t x1731 = 62U;
volatile uint8_t x1732 = 0U;
uint16_t x1842 = 1736U;
uint16_t x1844 = 2U;
uint8_t x1972 = 27U;
static int16_t x2019 = 11973;
int16_t x2050 = INT16_MIN;
volatile int8_t x2074 = INT8_MIN;
uint16_t x2158 = 14U;
int8_t x2159 = INT8_MAX;
static int16_t x2187 = 394;
uint32_t x2241 = 844467071U;
int32_t x2297 = -944;
uint64_t x2299 = UINT64_MAX;
uint8_t x2300 = 47U;
volatile int32_t x2302 = -39850;
int64_t x2397 = 1376098609LL;
volatile int32_t x2511 = INT32_MAX;
int32_t x2512 = 2;
volatile int32_t t51 = 0;
volatile int8_t x2549 = 48;
volatile int64_t t53 = 673847410LL;
uint32_t t54 = 9436U;
volatile uint32_t x2758 = 0U;
int8_t x2760 = 0;
volatile int64_t t56 = 615237LL;
volatile uint32_t x2946 = UINT32_MAX;
static volatile uint64_t x3113 = 48LLU;
volatile uint64_t t59 = 75LLU;
volatile int64_t x3297 = 1LL;
uint8_t x3298 = UINT8_MAX;
int8_t x3313 = INT8_MIN;
int8_t x3316 = 4;
int16_t x3386 = INT16_MIN;
volatile uint16_t x3387 = UINT16_MAX;
volatile int32_t x3475 = INT32_MAX;
uint32_t t65 = 7236804U;
volatile int32_t x3510 = INT32_MAX;
static volatile uint64_t t66 = 973535130516559542LLU;
static volatile uint8_t x3560 = 3U;
uint32_t t67 = 60U;
uint8_t x3978 = 0U;
volatile uint64_t x3979 = 93333LLU;
uint32_t x4120 = 29U;
volatile uint8_t x4587 = 6U;
volatile uint8_t x4588 = 1U;
int8_t x4618 = -7;
uint16_t x4670 = 16U;
static int32_t x5064 = 12;
static volatile uint16_t x5067 = UINT16_MAX;
int8_t x5200 = 0;
static uint8_t x5227 = 1U;
static int64_t x5414 = INT64_MIN;
int16_t x5416 = 6;
int8_t x5494 = INT8_MIN;
uint32_t x5495 = UINT32_MAX;
uint64_t t97 = 895727297843167059LLU;
static uint64_t t98 = 9727LLU;


void f0(void) {
	uint16_t x42 = 822U;
	int32_t x43 = INT32_MAX;
	volatile int64_t t0 = 87842000679LL;

	t0 = (x41^(x42-(x43>>x44)));

	if (t0 != -1803710582104955LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x94 = UINT64_MAX;
	uint64_t x95 = 29192037401LLU;
	int8_t x96 = 3;
	static volatile uint64_t t1 = 0LLU;

	t1 = (x93^(x94-(x95>>x96)));

	if (t1 != 18446744070060546504LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x102 = 22754U;
	volatile uint16_t x103 = 22U;
	uint8_t x104 = 29U;
	uint64_t t2 = 979836317100396LLU;

	t2 = (x101^(x102-(x103>>x104)));

	if (t2 != 1520080LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x125 = UINT8_MAX;
	volatile int8_t x127 = 40;
	static int8_t x128 = 15;
	int64_t t3 = -123255827LL;

	t3 = (x125^(x126-(x127>>x128)));

	if (t3 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x265 = -76;
	static volatile int32_t x266 = 8036779;
	static int32_t x267 = 7630;
	uint32_t x268 = 1U;
	int32_t t4 = -220;

	t4 = (x265^(x266-(x267>>x268)));

	if (t4 != -8032912) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x269 = INT16_MIN;
	static int64_t x270 = INT64_MAX;
	static volatile uint64_t x271 = 4LLU;
	volatile uint64_t t5 = 978541019LLU;

	t5 = (x269^(x270-(x271>>x272)));

	if (t5 != 9223372036854808573LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x277 = 3;
	int16_t x279 = INT16_MAX;
	uint64_t x280 = 0LLU;
	int32_t t6 = 6033;

	t6 = (x277^(x278-(x279>>x280)));

	if (t6 != -65534) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x349 = UINT16_MAX;
	int16_t x351 = 182;

	t7 = (x349^(x350-(x351>>x352)));

	if (t7 != -239455) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x369 = INT32_MIN;
	static uint8_t x370 = UINT8_MAX;
	static volatile uint32_t x371 = 2126770045U;
	uint8_t x372 = 10U;

	t8 = (x369^(x370-(x371>>x372)));

	if (t8 != 2145406980U) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x389 = 2050U;
	int16_t x392 = 1;
	uint32_t t9 = 24864U;

	t9 = (x389^(x390-(x391>>x392)));

	if (t9 != 2147452931U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x393 = INT8_MIN;
	int32_t x394 = 2;
	uint8_t x395 = 1U;
	int32_t t10 = 7;

	t10 = (x393^(x394-(x395>>x396)));

	if (t10 != -126) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint8_t x437 = 127U;
	volatile uint32_t x438 = 3542U;
	volatile uint32_t x439 = UINT32_MAX;
	static volatile uint8_t x440 = 14U;

	t11 = (x437^(x438-(x439>>x440)));

	if (t11 != 4294708648U) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x451 = UINT8_MAX;
	uint8_t x452 = 19U;
	int64_t t12 = -229442618922090666LL;

	t12 = (x449^(x450-(x451>>x452)));

	if (t12 != -9210099970044661107LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x509 = -2912LL;
	static uint32_t x510 = UINT32_MAX;
	int16_t x511 = INT16_MAX;
	int32_t x512 = 6;

	t13 = (x509^(x510-(x511>>x512)));

	if (t13 != -4294964576LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x645 = UINT16_MAX;
	uint8_t x646 = 1U;
	static uint32_t x647 = 28169U;
	uint16_t x648 = 11U;
	volatile uint32_t t14 = 8133841U;

	t14 = (x645^(x646-(x647>>x648)));

	if (t14 != 4294901771U) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x649 = 115;
	int64_t x650 = -1LL;
	int16_t x651 = INT16_MAX;
	static uint8_t x652 = 23U;
	int64_t t15 = -789023LL;

	t15 = (x649^(x650-(x651>>x652)));

	if (t15 != -116LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x657 = 239LLU;
	volatile uint8_t x658 = 31U;
	volatile int16_t x659 = 569;
	int8_t x660 = 1;

	t16 = (x657^(x658-(x659>>x660)));

	if (t16 != 18446744073709551596LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x769 = INT64_MIN;
	uint8_t x772 = 8U;
	volatile uint64_t t17 = 571LLU;

	t17 = (x769^(x770-(x771>>x772)));

	if (t17 != 9223372041149729543LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x785 = INT32_MIN;
	int8_t x786 = 0;
	int8_t x787 = INT8_MAX;

	t18 = (x785^(x786-(x787>>x788)));

	if (t18 != 2147483617) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x790 = UINT16_MAX;
	int16_t x791 = INT16_MAX;
	volatile int16_t x792 = 8;
	int32_t t19 = 526;

	t19 = (x789^(x790-(x791>>x792)));

	if (t19 != -65409) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x1013 = 760417359204LL;
	uint8_t x1015 = UINT8_MAX;
	volatile int8_t x1016 = 18;
	volatile int64_t t20 = 126651394601LL;

	t20 = (x1013^(x1014-(x1015>>x1016)));

	if (t20 != 762148547227LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x1137 = 24U;
	volatile uint64_t x1138 = 157515021311637LLU;
	volatile int64_t x1139 = INT64_MAX;
	uint32_t x1140 = 3U;
	static uint64_t t21 = 2813306LLU;

	t21 = (x1137^(x1138-(x1139>>x1140)));

	if (t21 != 17293980084124016270LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x1169 = 14U;
	static int8_t x1170 = INT8_MIN;
	uint16_t x1171 = UINT16_MAX;
	uint8_t x1172 = 1U;
	static int32_t t22 = -115671;

	t22 = (x1169^(x1170-(x1171>>x1172)));

	if (t22 != -32881) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x1233 = INT8_MAX;
	static uint16_t x1234 = UINT16_MAX;
	uint8_t x1235 = 53U;
	int32_t t23 = 1;

	t23 = (x1233^(x1234-(x1235>>x1236)));

	if (t23 != 65434) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1263 = 0U;
	uint16_t x1264 = 2U;
	volatile int64_t t24 = 1LL;

	t24 = (x1261^(x1262-(x1263>>x1264)));

	if (t24 != 7926LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1293 = -41;
	static uint8_t x1295 = UINT8_MAX;
	int64_t t25 = 5030609061414032LL;

	t25 = (x1293^(x1294-(x1295>>x1296)));

	if (t25 != 9223372036854775767LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1473 = 3081;
	uint32_t x1474 = 1736U;
	int16_t x1476 = 0;
	uint64_t t26 = 432499951322LLU;

	t26 = (x1473^(x1474-(x1475>>x1476)));

	if (t26 != 18446696658141686534LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1489 = 3098U;
	uint16_t x1490 = 3691U;
	static uint64_t x1491 = UINT64_MAX;
	volatile uint64_t t27 = 110858299125LLU;

	t27 = (x1489^(x1490-(x1491>>x1492)));

	if (t27 != 18158513697557840502LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1553 = 0U;
	static volatile uint16_t x1554 = 409U;
	int64_t x1555 = INT64_MAX;
	uint8_t x1556 = 0U;
	volatile int64_t t28 = -55799191257753468LL;

	t28 = (x1553^(x1554-(x1555>>x1556)));

	if (t28 != -9223372036854775398LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1562 = -1;
	static uint64_t x1563 = 53585194LLU;
	int16_t x1564 = 3;
	uint64_t t29 = 180303518662126LLU;

	t29 = (x1561^(x1562-(x1563>>x1564)));

	if (t29 != 6698149LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x1681 = INT32_MIN;
	uint16_t x1682 = 0U;
	int16_t x1683 = INT16_MAX;
	static volatile int8_t x1684 = 3;

	t30 = (x1681^(x1682-(x1683>>x1684)));

	if (t30 != 2147479553) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x1729 = 410U;
	uint32_t x1730 = 16976562U;
	uint32_t t31 = 166454U;

	t31 = (x1729^(x1730-(x1731>>x1732)));

	if (t31 != 16976878U) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1841 = UINT16_MAX;
	int8_t x1843 = 2;
	volatile int32_t t32 = -56;

	t32 = (x1841^(x1842-(x1843>>x1844)));

	if (t32 != 63799) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x1945 = -1;
	static int8_t x1946 = INT8_MIN;
	uint16_t x1947 = 22U;
	int16_t x1948 = 29;
	volatile int32_t t33 = -96;

	t33 = (x1945^(x1946-(x1947>>x1948)));

	if (t33 != 127) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1969 = -1;
	volatile int8_t x1970 = INT8_MAX;
	static volatile uint32_t x1971 = UINT32_MAX;
	static uint32_t t34 = 14U;

	t34 = (x1969^(x1970-(x1971>>x1972)));

	if (t34 != 4294967199U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x2009 = UINT16_MAX;
	int64_t x2010 = 569LL;
	int8_t x2011 = INT8_MAX;
	static int32_t x2012 = 1;
	int64_t t35 = -172143465692658261LL;

	t35 = (x2009^(x2010-(x2011>>x2012)));

	if (t35 != 65029LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x2017 = INT32_MIN;
	static volatile uint16_t x2018 = 7838U;
	uint8_t x2020 = 3U;
	volatile int32_t t36 = -124;

	t36 = (x2017^(x2018-(x2019>>x2020)));

	if (t36 != -2147477306) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x2049 = 20;
	static int16_t x2051 = INT16_MAX;
	volatile uint32_t x2052 = 1U;
	int32_t t37 = -701689;

	t37 = (x2049^(x2050-(x2051>>x2052)));

	if (t37 != -49131) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint64_t x2073 = UINT64_MAX;
	uint16_t x2075 = UINT16_MAX;
	uint32_t x2076 = 18U;
	static uint64_t t38 = 341140LLU;

	t38 = (x2073^(x2074-(x2075>>x2076)));

	if (t38 != 127LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x2081 = INT16_MAX;
	uint64_t x2082 = 37LLU;
	int16_t x2083 = INT16_MAX;
	volatile uint16_t x2084 = 0U;
	static volatile uint64_t t39 = 14810855632092312LLU;

	t39 = (x2081^(x2082-(x2083>>x2084)));

	if (t39 != 18446744073709551577LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x2085 = 100;
	int8_t x2086 = 6;
	static uint64_t x2087 = UINT64_MAX;
	int16_t x2088 = 1;
	volatile uint64_t t40 = 1087802819657245454LLU;

	t40 = (x2085^(x2086-(x2087>>x2088)));

	if (t40 != 9223372036854775907LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x2157 = INT8_MIN;
	volatile int8_t x2160 = 8;
	int32_t t41 = -1;

	t41 = (x2157^(x2158-(x2159>>x2160)));

	if (t41 != -114) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x2185 = 43;
	static uint64_t x2186 = 30122598324277569LLU;
	int8_t x2188 = 14;
	uint64_t t42 = 1321562LLU;

	t42 = (x2185^(x2186-(x2187>>x2188)));

	if (t42 != 30122598324277610LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x2242 = 128U;
	uint64_t x2243 = 14382198599003328LLU;
	uint8_t x2244 = 13U;
	uint64_t t43 = 624045LLU;

	t43 = (x2241^(x2242-(x2243>>x2244)));

	if (t43 != 18446742317234520232LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x2293 = INT16_MAX;
	volatile int32_t x2294 = -1155653;
	static uint16_t x2295 = 2U;
	uint64_t x2296 = 11LLU;
	volatile int32_t t44 = 1016;

	t44 = (x2293^(x2294-(x2295>>x2296)));

	if (t44 != -1170876) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x2298 = UINT64_MAX;
	volatile uint64_t t45 = 138862475917989212LLU;

	t45 = (x2297^(x2298-(x2299>>x2300)));

	if (t45 != 130128LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x2301 = INT16_MIN;
	int8_t x2303 = INT8_MAX;
	int8_t x2304 = 2;
	static volatile int32_t t46 = -63868016;

	t46 = (x2301^(x2302-(x2303>>x2304)));

	if (t46 != 58423) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x2333 = UINT8_MAX;
	int16_t x2334 = 433;
	int32_t x2335 = 392488457;
	static int8_t x2336 = 1;
	int32_t t47 = -1100;

	t47 = (x2333^(x2334-(x2335>>x2336)));

	if (t47 != -196243886) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int32_t x2398 = 832490;
	int16_t x2399 = 44;
	uint16_t x2400 = 14U;
	int64_t t48 = -356159369LL;

	t48 = (x2397^(x2398-(x2399>>x2400)));

	if (t48 != 1376332507LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x2441 = -107431LL;
	uint8_t x2442 = 50U;
	uint8_t x2443 = UINT8_MAX;
	uint8_t x2444 = 1U;
	int64_t t49 = 1127645313802LL;

	t49 = (x2441^(x2442-(x2443>>x2444)));

	if (t49 != 107498LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x2445 = INT32_MAX;
	int64_t x2446 = -1LL;
	static volatile int32_t x2447 = 30699;
	uint8_t x2448 = 1U;
	volatile int64_t t50 = 0LL;

	t50 = (x2445^(x2446-(x2447>>x2448)));

	if (t50 != -2147468299LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x2509 = -1;
	volatile int8_t x2510 = INT8_MIN;

	t51 = (x2509^(x2510-(x2511>>x2512)));

	if (t51 != 536871038) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x2550 = INT16_MIN;
	uint16_t x2551 = UINT16_MAX;
	static volatile uint8_t x2552 = 5U;
	static volatile int32_t t52 = 199838;

	t52 = (x2549^(x2550-(x2551>>x2552)));

	if (t52 != -34767) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x2573 = 26346337373602LL;
	static uint32_t x2574 = UINT32_MAX;
	static volatile uint8_t x2575 = UINT8_MAX;
	uint16_t x2576 = 9U;

	t53 = (x2573^(x2574-(x2575>>x2576)));

	if (t53 != 26348616381021LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x2581 = INT8_MAX;
	static volatile uint32_t x2582 = 2066101U;
	static volatile uint16_t x2583 = 348U;
	static int8_t x2584 = 0;

	t54 = (x2581^(x2582-(x2583>>x2584)));

	if (t54 != 2065702U) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x2741 = -3;
	volatile int32_t x2742 = 1;
	uint8_t x2743 = UINT8_MAX;
	int8_t x2744 = 1;
	static volatile int32_t t55 = 4;

	t55 = (x2741^(x2742-(x2743>>x2744)));

	if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x2757 = -1;
	static int64_t x2759 = 8495361277634LL;

	t56 = (x2757^(x2758-(x2759>>x2760)));

	if (t56 != 8495361277633LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x2945 = UINT64_MAX;
	uint32_t x2947 = UINT32_MAX;
	uint8_t x2948 = 1U;
	uint64_t t57 = 8237599210027278LLU;

	t57 = (x2945^(x2946-(x2947>>x2948)));

	if (t57 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x3045 = INT32_MIN;
	volatile int32_t x3046 = INT32_MAX;
	int16_t x3047 = INT16_MAX;
	static uint32_t x3048 = 0U;
	volatile int32_t t58 = -3402;

	t58 = (x3045^(x3046-(x3047>>x3048)));

	if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x3114 = INT8_MAX;
	static uint8_t x3115 = UINT8_MAX;
	uint8_t x3116 = 11U;

	t59 = (x3113^(x3114-(x3115>>x3116)));

	if (t59 != 79LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x3299 = 25U;
	uint16_t x3300 = 6U;
	int64_t t60 = -4980LL;

	t60 = (x3297^(x3298-(x3299>>x3300)));

	if (t60 != 254LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x3314 = INT16_MAX;
	int32_t x3315 = 948826594;
	int32_t t61 = -57;

	t61 = (x3313^(x3314-(x3315>>x3316)));

	if (t61 != 59268961) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x3385 = UINT32_MAX;
	static uint8_t x3388 = 7U;
	volatile uint32_t t62 = 47122U;

	t62 = (x3385^(x3386-(x3387>>x3388)));

	if (t62 != 33278U) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x3429 = 7U;
	static volatile uint16_t x3430 = 6U;
	int64_t x3431 = INT64_MAX;
	uint8_t x3432 = 0U;
	int64_t t63 = INT64_MIN;

	t63 = (x3429^(x3430-(x3431>>x3432)));

	if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x3473 = INT64_MIN;
	int32_t x3474 = 177376;
	uint8_t x3476 = 25U;
	volatile int64_t t64 = 3737976031055043676LL;

	t64 = (x3473^(x3474-(x3475>>x3476)));

	if (t64 != -9223372036854598495LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x3477 = 12525070;
	uint8_t x3478 = 5U;
	uint32_t x3479 = 101U;
	uint16_t x3480 = 26U;

	t65 = (x3477^(x3478-(x3479>>x3480)));

	if (t65 != 12525067U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x3509 = INT16_MAX;
	uint64_t x3511 = 55140LLU;
	static int8_t x3512 = 7;

	t66 = (x3509^(x3510-(x3511>>x3512)));

	if (t66 != 2147451310LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x3557 = INT8_MIN;
	uint32_t x3558 = 30U;
	int16_t x3559 = INT16_MAX;

	t67 = (x3557^(x3558-(x3559>>x3560)));

	if (t67 != 3999U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x3629 = INT64_MIN;
	int8_t x3630 = -10;
	uint64_t x3631 = 3481539498607320132LLU;
	int16_t x3632 = 39;
	static uint64_t t68 = 12LLU;

	t68 = (x3629^(x3630-(x3631>>x3632)));

	if (t68 != 9223372036848442915LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int8_t x3637 = -12;
	int64_t x3638 = INT64_MAX;
	uint8_t x3639 = 18U;
	int8_t x3640 = 23;
	volatile int64_t t69 = -286914180527449591LL;

	t69 = (x3637^(x3638-(x3639>>x3640)));

	if (t69 != -9223372036854775797LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x3977 = 35U;
	int8_t x3980 = 1;
	volatile uint64_t t70 = 7312LLU;

	t70 = (x3977^(x3978-(x3979>>x3980)));

	if (t70 != 18446744073709504917LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x4009 = INT64_MAX;
	int32_t x4010 = -1;
	int16_t x4011 = INT16_MAX;
	volatile int8_t x4012 = 1;
	int64_t t71 = -264360830LL;

	t71 = (x4009^(x4010-(x4011>>x4012)));

	if (t71 != -9223372036854759425LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x4073 = -443;
	uint32_t x4074 = 502U;
	uint8_t x4075 = 25U;
	uint8_t x4076 = 12U;
	uint32_t t72 = 78U;

	t72 = (x4073^(x4074-(x4075>>x4076)));

	if (t72 != 4294967219U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x4117 = INT16_MIN;
	static uint32_t x4118 = UINT32_MAX;
	int64_t x4119 = 10LL;
	volatile int64_t t73 = 2LL;

	t73 = (x4117^(x4118-(x4119>>x4120)));

	if (t73 != -4294934529LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x4169 = 69U;
	volatile uint16_t x4170 = 0U;
	static volatile uint8_t x4171 = UINT8_MAX;
	uint8_t x4172 = 1U;
	int32_t t74 = 66939547;

	t74 = (x4169^(x4170-(x4171>>x4172)));

	if (t74 != -60) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x4221 = 10439U;
	int16_t x4222 = INT16_MIN;
	static volatile uint8_t x4223 = UINT8_MAX;
	volatile int8_t x4224 = 0;
	volatile int32_t t75 = 14739738;

	t75 = (x4221^(x4222-(x4223>>x4224)));

	if (t75 != -43066) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x4321 = INT32_MIN;
	int8_t x4322 = INT8_MAX;
	int64_t x4323 = INT64_MAX;
	static int8_t x4324 = 0;
	int64_t t76 = -35070617250LL;

	t76 = (x4321^(x4322-(x4323>>x4324)));

	if (t76 != 9223372034707292288LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x4493 = UINT32_MAX;
	volatile uint64_t x4494 = 15084080176492LLU;
	uint32_t x4495 = UINT32_MAX;
	int8_t x4496 = 3;
	volatile uint64_t t77 = 6261467995479040031LLU;

	t77 = (x4493^(x4494-(x4495>>x4496)));

	if (t77 != 15080012014226LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x4497 = INT16_MIN;
	int8_t x4498 = INT8_MIN;
	uint64_t x4499 = 246935748115LLU;
	uint8_t x4500 = 0U;
	volatile uint64_t t78 = 100095907LLU;

	t78 = (x4497^(x4498-(x4499>>x4500)));

	if (t78 != 246935716205LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int8_t x4585 = 28;
	volatile uint32_t x4586 = 5623U;
	volatile uint32_t t79 = 12520U;

	t79 = (x4585^(x4586-(x4587>>x4588)));

	if (t79 != 5608U) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x4617 = -61;
	uint64_t x4619 = 16672691687LLU;
	uint8_t x4620 = 0U;
	volatile uint64_t t80 = 239679992LLU;

	t80 = (x4617^(x4618-(x4619>>x4620)));

	if (t80 != 16672691665LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x4669 = INT64_MIN;
	int16_t x4671 = 0;
	uint8_t x4672 = 0U;
	static volatile int64_t t81 = 117LL;

	t81 = (x4669^(x4670-(x4671>>x4672)));

	if (t81 != -9223372036854775792LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x4741 = 8936993932313LLU;
	int32_t x4742 = 542617;
	volatile int32_t x4743 = 0;
	volatile uint8_t x4744 = 2U;
	uint64_t t82 = 13454LLU;

	t82 = (x4741^(x4742-(x4743>>x4744)));

	if (t82 != 8936993391488LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x4781 = -203320800;
	int64_t x4782 = INT64_MIN;
	static int16_t x4783 = INT16_MAX;
	static volatile uint16_t x4784 = 19U;
	int64_t t83 = -8166330LL;

	t83 = (x4781^(x4782-(x4783>>x4784)));

	if (t83 != 9223372036651455008LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x4913 = UINT8_MAX;
	int16_t x4914 = INT16_MAX;
	uint8_t x4915 = 8U;
	uint16_t x4916 = 30U;
	static volatile int32_t t84 = -159279605;

	t84 = (x4913^(x4914-(x4915>>x4916)));

	if (t84 != 32512) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x5061 = 12;
	static uint16_t x5062 = UINT16_MAX;
	uint8_t x5063 = 61U;
	static int32_t t85 = 110;

	t85 = (x5061^(x5062-(x5063>>x5064)));

	if (t85 != 65523) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x5065 = 3;
	uint32_t x5066 = 1U;
	uint16_t x5068 = 0U;
	uint32_t t86 = 127801U;

	t86 = (x5065^(x5066-(x5067>>x5068)));

	if (t86 != 4294901761U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x5161 = -7032883;
	int32_t x5162 = INT32_MAX;
	int32_t x5163 = INT32_MAX;
	volatile int8_t x5164 = 0;
	int32_t t87 = 520038;

	t87 = (x5161^(x5162-(x5163>>x5164)));

	if (t87 != -7032883) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x5197 = 2U;
	uint64_t x5198 = 2091338104203419LLU;
	int16_t x5199 = 3188;
	static uint64_t t88 = 0LLU;

	t88 = (x5197^(x5198-(x5199>>x5200)));

	if (t88 != 2091338104200229LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x5225 = 121670U;
	int16_t x5226 = 2744;
	uint8_t x5228 = 1U;
	uint32_t t89 = 1U;

	t89 = (x5225^(x5226-(x5227>>x5228)));

	if (t89 != 119294U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x5413 = -258;
	int32_t x5415 = 0;
	int64_t t90 = -1256292LL;

	t90 = (x5413^(x5414-(x5415>>x5416)));

	if (t90 != 9223372036854775550LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x5457 = 3084463289618LLU;
	int64_t x5458 = 5153LL;
	volatile uint64_t x5459 = 36255259LLU;
	volatile uint16_t x5460 = 2U;
	volatile uint64_t t91 = 367281LLU;

	t91 = (x5457^(x5458-(x5459>>x5460)));

	if (t91 != 18446740989237490569LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x5493 = INT64_MAX;
	static uint8_t x5496 = 0U;
	static int64_t t92 = 39LL;

	t92 = (x5493^(x5494-(x5495>>x5496)));

	if (t92 != 9223372032559808638LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x5581 = 0;
	int32_t x5582 = INT32_MAX;
	uint32_t x5583 = 89920U;
	uint16_t x5584 = 19U;
	uint32_t t93 = 3823U;

	t93 = (x5581^(x5582-(x5583>>x5584)));

	if (t93 != 2147483647U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x5593 = -10;
	int64_t x5594 = -1LL;
	uint16_t x5595 = 8047U;
	uint8_t x5596 = 10U;
	int64_t t94 = 2289089LL;

	t94 = (x5593^(x5594-(x5595>>x5596)));

	if (t94 != 14LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x5685 = INT64_MIN;
	int32_t x5686 = INT32_MAX;
	static uint8_t x5687 = 15U;
	volatile uint8_t x5688 = 7U;
	volatile int64_t t95 = 11726170418182LL;

	t95 = (x5685^(x5686-(x5687>>x5688)));

	if (t95 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x5761 = INT16_MIN;
	int8_t x5762 = -1;
	int64_t x5763 = 35688033693181597LL;
	volatile int8_t x5764 = 5;
	int64_t t96 = 20LL;

	t96 = (x5761^(x5762-(x5763>>x5764)));

	if (t96 != 1115251052929739LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x5765 = -994LL;
	int8_t x5766 = -1;
	uint64_t x5767 = 99LLU;
	uint16_t x5768 = 1U;

	t97 = (x5765^(x5766-(x5767>>x5768)));

	if (t97 != 976LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x5869 = 247561264965514391LLU;
	volatile int32_t x5870 = 431103515;
	int64_t x5871 = INT64_MAX;
	uint8_t x5872 = 0U;

	t98 = (x5869^(x5870-(x5871>>x5872)));

	if (t98 != 9470933301978491531LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x5913 = INT64_MAX;
	int32_t x5914 = -1;
	uint16_t x5915 = 2149U;
	uint8_t x5916 = 10U;
	int64_t t99 = 144822032LL;

	t99 = (x5913^(x5914-(x5915>>x5916)));

	if (t99 != -9223372036854775806LL) { NG(); } else { ; }
	
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

