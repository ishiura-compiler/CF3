#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x24 = 519665;
int16_t x145 = INT16_MAX;
uint32_t x146 = 1U;
uint16_t x169 = 10807U;
static volatile uint32_t x389 = 291U;
static uint8_t x445 = UINT8_MAX;
int32_t t7 = 1955;
volatile uint64_t t8 = 85832749315LLU;
static volatile int32_t x685 = INT32_MAX;
static volatile int32_t x753 = 2013651;
static uint16_t x817 = UINT16_MAX;
int8_t x819 = INT8_MIN;
volatile uint32_t x897 = UINT32_MAX;
int64_t x927 = -1LL;
volatile int32_t t14 = 16590214;
static volatile int16_t x1043 = 865;
volatile int8_t x1118 = 22;
int64_t x1133 = INT64_MAX;
int8_t x1168 = 7;
int64_t x1171 = -13LL;
uint8_t x1172 = 1U;
uint32_t t21 = 182031U;
uint32_t x1221 = 1228506017U;
static int32_t x1223 = INT32_MIN;
volatile int8_t x1226 = 1;
volatile int8_t x1228 = INT8_MAX;
int16_t x1285 = INT16_MAX;
uint32_t x1336 = 214406627U;
volatile uint32_t x1379 = UINT32_MAX;
volatile int8_t x1430 = 1;
volatile int32_t x1431 = INT32_MIN;
int32_t t28 = -583887215;
static int8_t x1492 = -2;
volatile int8_t x1524 = INT8_MAX;
int64_t x1546 = 30LL;
static uint8_t x1598 = 24U;
uint8_t x1599 = 3U;
volatile int32_t t35 = 114390;
volatile uint64_t x1991 = UINT64_MAX;
int8_t x2008 = INT8_MIN;
uint16_t x2014 = 9U;
static int32_t x2016 = 68;
uint32_t t38 = 1781U;
int64_t x2055 = INT64_MAX;
static uint16_t x2070 = 1U;
int64_t x2101 = INT64_MAX;
int32_t x2104 = 55;
int16_t x2269 = 1;
uint32_t x2475 = 1U;
int16_t x2573 = INT16_MAX;
int32_t x2576 = INT32_MIN;
int16_t x2667 = INT16_MAX;
static int32_t x2683 = -1;
static int32_t t54 = -44672515;
static int32_t x2721 = 1;
int32_t t55 = -14500;
uint64_t x2785 = UINT64_MAX;
int16_t x2788 = INT16_MIN;
uint8_t x2793 = UINT8_MAX;
uint16_t x2795 = 24775U;
uint8_t x2796 = 38U;
uint8_t x2804 = 113U;
static int32_t t59 = -390;
static int32_t x2899 = INT32_MIN;
int64_t t62 = -376774736903799LL;
int8_t x2919 = INT8_MIN;
int16_t x3009 = INT16_MAX;
uint8_t x3010 = 12U;
volatile int32_t t64 = -375613921;
static volatile uint64_t t65 = 176LLU;
static uint64_t x3025 = 189821LLU;
int32_t x3175 = INT32_MAX;
int32_t x3329 = 19;
uint16_t x3822 = 30U;
int16_t x3840 = -1;
int16_t x4058 = 28;
volatile uint8_t x4358 = 18U;
uint8_t x4362 = 7U;
int64_t x4363 = INT64_MIN;
static int16_t x4440 = INT16_MIN;
int64_t x4443 = INT64_MIN;
int64_t x4481 = 486896831237951LL;
static uint8_t x4482 = 4U;
volatile uint64_t t83 = 17LLU;
int64_t x4708 = INT64_MAX;
volatile uint32_t t89 = 33U;
int32_t x5024 = INT32_MAX;
static uint16_t x5106 = 9U;
uint32_t x5107 = 139U;
uint32_t t91 = 435296409U;
int64_t x5268 = -1LL;
volatile int64_t t95 = 110693432860LL;
uint8_t x5810 = 11U;
int32_t t97 = -2;
static volatile uint8_t x5877 = UINT8_MAX;
int32_t t99 = 873690485;


void f0(void) {
	static int32_t x21 = INT32_MAX;
	int8_t x22 = 1;
	int64_t x23 = INT64_MIN;
	int32_t t0 = INT32_MAX;

	t0 = (x21>>(x22-(x23<=x24)));

	if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x29 = UINT8_MAX;
	volatile int8_t x30 = 3;
	uint32_t x31 = 345681870U;
	int32_t x32 = -113;
	int32_t t1 = -685;

	t1 = (x29>>(x30-(x31<=x32)));

	if (t1 != 63) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x69 = 12899567LLU;
	uint8_t x70 = 3U;
	int32_t x71 = INT32_MIN;
	uint64_t x72 = UINT64_MAX;
	uint64_t t2 = 11289LLU;

	t2 = (x69>>(x70-(x71<=x72)));

	if (t2 != 3224891LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x73 = UINT8_MAX;
	static uint16_t x74 = 2U;
	int32_t x75 = -221059452;
	static int16_t x76 = INT16_MIN;
	int32_t t3 = -527299011;

	t3 = (x73>>(x74-(x75<=x76)));

	if (t3 != 127) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x147 = -1;
	int32_t x148 = 91137438;
	static int32_t t4 = 2938119;

	t4 = (x145>>(x146-(x147<=x148)));

	if (t4 != 32767) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x170 = 9U;
	int8_t x171 = -1;
	uint8_t x172 = UINT8_MAX;
	static int32_t t5 = 106134;

	t5 = (x169>>(x170-(x171<=x172)));

	if (t5 != 42) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x390 = 1;
	int32_t x391 = INT32_MAX;
	int64_t x392 = -1LL;
	uint32_t t6 = 21209U;

	t6 = (x389>>(x390-(x391<=x392)));

	if (t6 != 145U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x446 = 24U;
	volatile int32_t x447 = INT32_MIN;
	int16_t x448 = INT16_MIN;

	t7 = (x445>>(x446-(x447<=x448)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x569 = 153638400LLU;
	uint64_t x570 = 20LLU;
	int16_t x571 = 0;
	int8_t x572 = -3;

	t8 = (x569>>(x570-(x571<=x572)));

	if (t8 != 146LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x649 = 13620688782951489LL;
	uint16_t x650 = 29U;
	uint32_t x651 = 138363U;
	volatile uint32_t x652 = 1936179801U;
	int64_t t9 = 186290764013LL;

	t9 = (x649>>(x650-(x651<=x652)));

	if (t9 != 50741019LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x686 = 19;
	volatile uint8_t x687 = 8U;
	int32_t x688 = -295;
	int32_t t10 = 5365635;

	t10 = (x685>>(x686-(x687<=x688)));

	if (t10 != 4095) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x754 = 20U;
	int64_t x755 = -1LL;
	int32_t x756 = INT32_MIN;
	volatile int32_t t11 = -13381334;

	t11 = (x753>>(x754-(x755<=x756)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x818 = 1;
	int8_t x820 = -7;
	static volatile int32_t t12 = -3829;

	t12 = (x817>>(x818-(x819<=x820)));

	if (t12 != 65535) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x898 = 2;
	static int16_t x899 = INT16_MIN;
	int64_t x900 = INT64_MAX;
	uint32_t t13 = 105825121U;

	t13 = (x897>>(x898-(x899<=x900)));

	if (t13 != 2147483647U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x925 = 0;
	uint8_t x926 = 14U;
	uint32_t x928 = 111464U;

	t14 = (x925>>(x926-(x927<=x928)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x1041 = 333291968LLU;
	uint32_t x1042 = 1U;
	static int32_t x1044 = INT32_MIN;
	volatile uint64_t t15 = 6798LLU;

	t15 = (x1041>>(x1042-(x1043<=x1044)));

	if (t15 != 166645984LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x1089 = 1;
	int8_t x1090 = 1;
	int16_t x1091 = -162;
	static int8_t x1092 = INT8_MIN;
	int32_t t16 = -191;

	t16 = (x1089>>(x1090-(x1091<=x1092)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x1117 = INT64_MAX;
	uint64_t x1119 = 27228305148LLU;
	uint64_t x1120 = UINT64_MAX;
	volatile int64_t t17 = 5244498278910LL;

	t17 = (x1117>>(x1118-(x1119<=x1120)));

	if (t17 != 4398046511103LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x1134 = 3U;
	volatile int8_t x1135 = -1;
	volatile uint64_t x1136 = 330004LLU;
	static volatile int64_t t18 = -7LL;

	t18 = (x1133>>(x1134-(x1135<=x1136)));

	if (t18 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1161 = 13LLU;
	uint8_t x1162 = 12U;
	uint16_t x1163 = 151U;
	uint32_t x1164 = 3U;
	volatile uint64_t t19 = 101LLU;

	t19 = (x1161>>(x1162-(x1163<=x1164)));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x1165 = INT8_MAX;
	static uint32_t x1166 = 3U;
	uint8_t x1167 = UINT8_MAX;
	volatile int32_t t20 = 28100;

	t20 = (x1165>>(x1166-(x1167<=x1168)));

	if (t20 != 15) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x1169 = 99015647U;
	static volatile uint32_t x1170 = 1U;

	t21 = (x1169>>(x1170-(x1171<=x1172)));

	if (t21 != 99015647U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x1222 = 13;
	static int32_t x1224 = INT32_MAX;
	volatile uint32_t t22 = 0U;

	t22 = (x1221>>(x1222-(x1223<=x1224)));

	if (t22 != 299928U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x1225 = 345U;
	uint64_t x1227 = UINT64_MAX;
	volatile int32_t t23 = 1;

	t23 = (x1225>>(x1226-(x1227<=x1228)));

	if (t23 != 172) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1286 = 1;
	uint8_t x1287 = 0U;
	static uint8_t x1288 = UINT8_MAX;
	volatile int32_t t24 = -1;

	t24 = (x1285>>(x1286-(x1287<=x1288)));

	if (t24 != 32767) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x1333 = UINT16_MAX;
	uint32_t x1334 = 4U;
	static int64_t x1335 = INT64_MIN;
	volatile int32_t t25 = 27;

	t25 = (x1333>>(x1334-(x1335<=x1336)));

	if (t25 != 8191) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1345 = 4LL;
	int8_t x1346 = 1;
	uint64_t x1347 = 266212975802222LLU;
	int64_t x1348 = -1LL;
	volatile int64_t t26 = -1793482368625433LL;

	t26 = (x1345>>(x1346-(x1347<=x1348)));

	if (t26 != 4LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1377 = INT8_MAX;
	static uint16_t x1378 = 3U;
	int16_t x1380 = INT16_MIN;
	volatile int32_t t27 = -6;

	t27 = (x1377>>(x1378-(x1379<=x1380)));

	if (t27 != 15) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1429 = 11;
	volatile int8_t x1432 = 0;

	t28 = (x1429>>(x1430-(x1431<=x1432)));

	if (t28 != 11) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x1489 = UINT16_MAX;
	int8_t x1490 = 1;
	volatile int8_t x1491 = -1;
	volatile int32_t t29 = 117570761;

	t29 = (x1489>>(x1490-(x1491<=x1492)));

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x1521 = 30U;
	int8_t x1522 = 26;
	static volatile int64_t x1523 = INT64_MIN;
	static uint32_t t30 = 86U;

	t30 = (x1521>>(x1522-(x1523<=x1524)));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x1525 = UINT64_MAX;
	volatile uint8_t x1526 = 43U;
	int64_t x1527 = INT64_MAX;
	int32_t x1528 = 12406438;
	static volatile uint64_t t31 = 5381678768LLU;

	t31 = (x1525>>(x1526-(x1527<=x1528)));

	if (t31 != 2097151LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1545 = UINT32_MAX;
	uint32_t x1547 = UINT32_MAX;
	static uint32_t x1548 = 6525U;
	volatile uint32_t t32 = 395U;

	t32 = (x1545>>(x1546-(x1547<=x1548)));

	if (t32 != 3U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x1597 = UINT8_MAX;
	uint8_t x1600 = 0U;
	static volatile int32_t t33 = 0;

	t33 = (x1597>>(x1598-(x1599<=x1600)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x1773 = UINT32_MAX;
	int8_t x1774 = 1;
	uint8_t x1775 = 54U;
	int32_t x1776 = INT32_MAX;
	uint32_t t34 = UINT32_MAX;

	t34 = (x1773>>(x1774-(x1775<=x1776)));

	if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1793 = INT32_MAX;
	int16_t x1794 = 12;
	uint64_t x1795 = 5785LLU;
	int16_t x1796 = -1;

	t35 = (x1793>>(x1794-(x1795<=x1796)));

	if (t35 != 1048575) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x1989 = 28U;
	uint8_t x1990 = 14U;
	uint32_t x1992 = UINT32_MAX;
	volatile int32_t t36 = 1;

	t36 = (x1989>>(x1990-(x1991<=x1992)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x2005 = INT64_MAX;
	uint16_t x2006 = 61U;
	int32_t x2007 = INT32_MAX;
	static int64_t t37 = 33352923455817733LL;

	t37 = (x2005>>(x2006-(x2007<=x2008)));

	if (t37 != 3LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x2013 = 964052U;
	static int32_t x2015 = INT32_MIN;

	t38 = (x2013>>(x2014-(x2015<=x2016)));

	if (t38 != 3765U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x2033 = INT16_MAX;
	uint16_t x2034 = 6U;
	uint16_t x2035 = 82U;
	static int8_t x2036 = -46;
	volatile int32_t t39 = -85080;

	t39 = (x2033>>(x2034-(x2035<=x2036)));

	if (t39 != 511) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x2045 = 23184401651116779LLU;
	volatile uint8_t x2046 = 15U;
	int32_t x2047 = INT32_MIN;
	volatile uint8_t x2048 = 7U;
	static uint64_t t40 = 24333229883LLU;

	t40 = (x2045>>(x2046-(x2047<=x2048)));

	if (t40 != 1415063577338LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x2053 = 2;
	uint16_t x2054 = 2U;
	int32_t x2056 = INT32_MIN;
	int32_t t41 = -19645719;

	t41 = (x2053>>(x2054-(x2055<=x2056)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x2069 = 1;
	volatile int16_t x2071 = 1;
	int32_t x2072 = -1;
	int32_t t42 = 1;

	t42 = (x2069>>(x2070-(x2071<=x2072)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x2077 = 96U;
	uint16_t x2078 = 8U;
	int16_t x2079 = INT16_MIN;
	static volatile uint16_t x2080 = UINT16_MAX;
	static volatile int32_t t43 = -232169541;

	t43 = (x2077>>(x2078-(x2079<=x2080)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x2102 = 5U;
	volatile int64_t x2103 = INT64_MIN;
	volatile int64_t t44 = -6125405658094153LL;

	t44 = (x2101>>(x2102-(x2103<=x2104)));

	if (t44 != 576460752303423487LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x2169 = UINT64_MAX;
	uint16_t x2170 = 6U;
	uint64_t x2171 = 100749235296247LLU;
	int64_t x2172 = 10639397347166843LL;
	uint64_t t45 = 258495490368566LLU;

	t45 = (x2169>>(x2170-(x2171<=x2172)));

	if (t45 != 576460752303423487LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x2205 = 5270715784486401LLU;
	static volatile int32_t x2206 = 16;
	int32_t x2207 = -1;
	int8_t x2208 = INT8_MIN;
	static volatile uint64_t t46 = 14525232276419LLU;

	t46 = (x2205>>(x2206-(x2207<=x2208)));

	if (t46 != 80424740363LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x2253 = UINT32_MAX;
	uint8_t x2254 = 5U;
	int8_t x2255 = -1;
	volatile int64_t x2256 = INT64_MIN;
	uint32_t t47 = 30U;

	t47 = (x2253>>(x2254-(x2255<=x2256)));

	if (t47 != 134217727U) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x2270 = 13U;
	int32_t x2271 = -133997;
	int8_t x2272 = INT8_MIN;
	volatile int32_t t48 = 61169553;

	t48 = (x2269>>(x2270-(x2271<=x2272)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x2409 = 1768562940LLU;
	volatile uint8_t x2410 = 29U;
	int16_t x2411 = 265;
	static uint64_t x2412 = 36LLU;
	volatile uint64_t t49 = 3298994875LLU;

	t49 = (x2409>>(x2410-(x2411<=x2412)));

	if (t49 != 3LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x2461 = UINT16_MAX;
	int64_t x2462 = 17LL;
	static uint64_t x2463 = 247753844998860036LLU;
	int32_t x2464 = INT32_MIN;
	static int32_t t50 = 3559;

	t50 = (x2461>>(x2462-(x2463<=x2464)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x2473 = 18U;
	volatile uint16_t x2474 = 3U;
	int64_t x2476 = INT64_MIN;
	uint32_t t51 = 22810U;

	t51 = (x2473>>(x2474-(x2475<=x2476)));

	if (t51 != 2U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x2574 = 26;
	static uint16_t x2575 = UINT16_MAX;
	int32_t t52 = -2032269;

	t52 = (x2573>>(x2574-(x2575<=x2576)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x2665 = 2834987000519216774LLU;
	uint8_t x2666 = 60U;
	volatile uint8_t x2668 = 44U;
	volatile uint64_t t53 = 2965610143889747LLU;

	t53 = (x2665>>(x2666-(x2667<=x2668)));

	if (t53 != 2LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x2681 = 2U;
	static uint8_t x2682 = 9U;
	int16_t x2684 = INT16_MIN;

	t54 = (x2681>>(x2682-(x2683<=x2684)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x2722 = 1U;
	int32_t x2723 = 294289;
	int8_t x2724 = 29;

	t55 = (x2721>>(x2722-(x2723<=x2724)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x2757 = 2;
	int8_t x2758 = 12;
	uint64_t x2759 = 130LLU;
	int8_t x2760 = -43;
	static volatile int32_t t56 = 6870628;

	t56 = (x2757>>(x2758-(x2759<=x2760)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x2786 = 8;
	uint64_t x2787 = 683965LLU;
	uint64_t t57 = 407761653014927782LLU;

	t57 = (x2785>>(x2786-(x2787<=x2788)));

	if (t57 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x2794 = 1U;
	int32_t t58 = 9;

	t58 = (x2793>>(x2794-(x2795<=x2796)));

	if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x2801 = INT8_MAX;
	volatile uint16_t x2802 = 31U;
	static uint64_t x2803 = UINT64_MAX;

	t59 = (x2801>>(x2802-(x2803<=x2804)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x2869 = 15U;
	uint8_t x2870 = 13U;
	static volatile uint32_t x2871 = 12U;
	int16_t x2872 = 1;
	static volatile int32_t t60 = 3763442;

	t60 = (x2869>>(x2870-(x2871<=x2872)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x2873 = 26;
	volatile uint16_t x2874 = 1U;
	uint32_t x2875 = 7553986U;
	static volatile int32_t x2876 = 192786213;
	volatile int32_t t61 = 2008;

	t61 = (x2873>>(x2874-(x2875<=x2876)));

	if (t61 != 26) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x2897 = 551173913021580LL;
	volatile uint8_t x2898 = 22U;
	static uint32_t x2900 = UINT32_MAX;

	t62 = (x2897>>(x2898-(x2899<=x2900)));

	if (t62 != 262820202LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x2917 = 87;
	static volatile int8_t x2918 = 1;
	static uint8_t x2920 = UINT8_MAX;
	int32_t t63 = -1;

	t63 = (x2917>>(x2918-(x2919<=x2920)));

	if (t63 != 87) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x3011 = INT32_MIN;
	volatile int16_t x3012 = 20;

	t64 = (x3009>>(x3010-(x3011<=x3012)));

	if (t64 != 15) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x3021 = 23170015324125783LLU;
	int16_t x3022 = 10;
	int64_t x3023 = -36151LL;
	int16_t x3024 = INT16_MIN;

	t65 = (x3021>>(x3022-(x3023<=x3024)));

	if (t65 != 45253936179933LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x3026 = 0U;
	int64_t x3027 = INT64_MAX;
	uint16_t x3028 = 7U;
	volatile uint64_t t66 = 143057LLU;

	t66 = (x3025>>(x3026-(x3027<=x3028)));

	if (t66 != 189821LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x3173 = 6;
	uint8_t x3174 = 3U;
	uint64_t x3176 = 6638LLU;
	int32_t t67 = -38647;

	t67 = (x3173>>(x3174-(x3175<=x3176)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x3330 = 12U;
	int32_t x3331 = INT32_MIN;
	static int64_t x3332 = -192591713LL;
	volatile int32_t t68 = -179;

	t68 = (x3329>>(x3330-(x3331<=x3332)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x3477 = INT16_MAX;
	uint16_t x3478 = 3U;
	static int32_t x3479 = -3;
	int16_t x3480 = 1;
	static volatile int32_t t69 = 5;

	t69 = (x3477>>(x3478-(x3479<=x3480)));

	if (t69 != 8191) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x3645 = 15LL;
	uint32_t x3646 = 1U;
	static int8_t x3647 = 0;
	int32_t x3648 = 226;
	int64_t t70 = -83LL;

	t70 = (x3645>>(x3646-(x3647<=x3648)));

	if (t70 != 15LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x3821 = UINT16_MAX;
	uint16_t x3823 = 158U;
	static uint64_t x3824 = UINT64_MAX;
	static int32_t t71 = -4418903;

	t71 = (x3821>>(x3822-(x3823<=x3824)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x3837 = 55059964;
	uint8_t x3838 = 1U;
	int8_t x3839 = 3;
	volatile int32_t t72 = -955948;

	t72 = (x3837>>(x3838-(x3839<=x3840)));

	if (t72 != 27529982) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x4005 = 843957964;
	volatile uint16_t x4006 = 3U;
	uint8_t x4007 = 0U;
	int16_t x4008 = INT16_MAX;
	volatile int32_t t73 = -1;

	t73 = (x4005>>(x4006-(x4007<=x4008)));

	if (t73 != 210989491) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x4057 = 0U;
	uint32_t x4059 = 901U;
	int8_t x4060 = -15;
	int32_t t74 = 1875;

	t74 = (x4057>>(x4058-(x4059<=x4060)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x4077 = INT32_MAX;
	uint8_t x4078 = 10U;
	volatile uint64_t x4079 = UINT64_MAX;
	static uint8_t x4080 = 94U;
	volatile int32_t t75 = -4;

	t75 = (x4077>>(x4078-(x4079<=x4080)));

	if (t75 != 2097151) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x4205 = UINT8_MAX;
	uint16_t x4206 = 12U;
	uint8_t x4207 = 8U;
	volatile uint8_t x4208 = 12U;
	static volatile int32_t t76 = 294758;

	t76 = (x4205>>(x4206-(x4207<=x4208)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x4289 = 971945U;
	uint8_t x4290 = 11U;
	int32_t x4291 = -1;
	static int16_t x4292 = -1;
	volatile uint32_t t77 = 550U;

	t77 = (x4289>>(x4290-(x4291<=x4292)));

	if (t77 != 949U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x4357 = UINT64_MAX;
	int16_t x4359 = INT16_MIN;
	volatile int32_t x4360 = 3;
	volatile uint64_t t78 = 27205297312200LLU;

	t78 = (x4357>>(x4358-(x4359<=x4360)));

	if (t78 != 140737488355327LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x4361 = 1567U;
	static uint16_t x4364 = 24612U;
	int32_t t79 = -6870;

	t79 = (x4361>>(x4362-(x4363<=x4364)));

	if (t79 != 24) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x4437 = 181LLU;
	static int8_t x4438 = 26;
	int8_t x4439 = INT8_MAX;
	volatile uint64_t t80 = 523857063916842819LLU;

	t80 = (x4437>>(x4438-(x4439<=x4440)));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x4441 = 47U;
	volatile uint8_t x4442 = 2U;
	volatile int8_t x4444 = INT8_MAX;
	volatile uint32_t t81 = 159168959U;

	t81 = (x4441>>(x4442-(x4443<=x4444)));

	if (t81 != 23U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x4483 = INT16_MIN;
	volatile int16_t x4484 = 2322;
	volatile int64_t t82 = 168LL;

	t82 = (x4481>>(x4482-(x4483<=x4484)));

	if (t82 != 60862103904743LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x4533 = UINT64_MAX;
	static uint16_t x4534 = 2U;
	int32_t x4535 = INT32_MIN;
	static volatile int16_t x4536 = INT16_MAX;

	t83 = (x4533>>(x4534-(x4535<=x4536)));

	if (t83 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x4705 = 39722262854689LL;
	uint32_t x4706 = 54U;
	int16_t x4707 = -100;
	int64_t t84 = -10093540145291LL;

	t84 = (x4705>>(x4706-(x4707<=x4708)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x4813 = 26;
	static int8_t x4814 = 1;
	uint16_t x4815 = UINT16_MAX;
	uint16_t x4816 = UINT16_MAX;
	int32_t t85 = 32593324;

	t85 = (x4813>>(x4814-(x4815<=x4816)));

	if (t85 != 26) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x4825 = 9773;
	uint8_t x4826 = 6U;
	int64_t x4827 = 12289462110LL;
	uint32_t x4828 = 45315U;
	volatile int32_t t86 = 27576;

	t86 = (x4825>>(x4826-(x4827<=x4828)));

	if (t86 != 152) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x4845 = UINT16_MAX;
	static uint8_t x4846 = 12U;
	int16_t x4847 = INT16_MAX;
	static int8_t x4848 = INT8_MAX;
	volatile int32_t t87 = 1855;

	t87 = (x4845>>(x4846-(x4847<=x4848)));

	if (t87 != 15) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x5001 = 248279;
	uint8_t x5002 = 2U;
	static int16_t x5003 = INT16_MIN;
	int16_t x5004 = INT16_MIN;
	int32_t t88 = 162041014;

	t88 = (x5001>>(x5002-(x5003<=x5004)));

	if (t88 != 124139) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x5017 = 93U;
	uint16_t x5018 = 2U;
	int32_t x5019 = 21;
	static int16_t x5020 = INT16_MIN;

	t89 = (x5017>>(x5018-(x5019<=x5020)));

	if (t89 != 23U) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x5021 = 120U;
	uint8_t x5022 = 5U;
	uint8_t x5023 = UINT8_MAX;
	static volatile int32_t t90 = -20484603;

	t90 = (x5021>>(x5022-(x5023<=x5024)));

	if (t90 != 7) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x5105 = 3U;
	uint16_t x5108 = 66U;

	t91 = (x5105>>(x5106-(x5107<=x5108)));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x5145 = 201;
	int16_t x5146 = 5;
	static uint8_t x5147 = UINT8_MAX;
	uint32_t x5148 = 47184U;
	volatile int32_t t92 = 32919362;

	t92 = (x5145>>(x5146-(x5147<=x5148)));

	if (t92 != 12) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x5205 = 3586LLU;
	uint16_t x5206 = 3U;
	uint8_t x5207 = 124U;
	uint64_t x5208 = 6257LLU;
	volatile uint64_t t93 = 213003129830LLU;

	t93 = (x5205>>(x5206-(x5207<=x5208)));

	if (t93 != 896LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x5265 = 7446LL;
	int8_t x5266 = 1;
	int8_t x5267 = INT8_MAX;
	volatile int64_t t94 = -2006437LL;

	t94 = (x5265>>(x5266-(x5267<=x5268)));

	if (t94 != 3723LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x5421 = INT64_MAX;
	int8_t x5422 = 10;
	int8_t x5423 = 0;
	static volatile int16_t x5424 = -8646;

	t95 = (x5421>>(x5422-(x5423<=x5424)));

	if (t95 != 9007199254740991LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int16_t x5561 = 1;
	int8_t x5562 = 1;
	int64_t x5563 = INT64_MIN;
	volatile int16_t x5564 = 0;
	volatile int32_t t96 = -1;

	t96 = (x5561>>(x5562-(x5563<=x5564)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x5809 = 11118;
	int16_t x5811 = INT16_MAX;
	static int8_t x5812 = 0;

	t97 = (x5809>>(x5810-(x5811<=x5812)));

	if (t97 != 5) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x5873 = 1;
	int16_t x5874 = 1;
	int8_t x5875 = 13;
	static int32_t x5876 = INT32_MIN;
	int32_t t98 = -3725740;

	t98 = (x5873>>(x5874-(x5875<=x5876)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x5878 = 5;
	uint16_t x5879 = 11857U;
	static int64_t x5880 = INT64_MAX;

	t99 = (x5877>>(x5878-(x5879<=x5880)));

	if (t99 != 15) { NG(); } else { ; }
	
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

