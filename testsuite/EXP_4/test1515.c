#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x2 = 0U;
uint32_t x4 = 3U;
volatile int32_t x27 = 4065;
volatile uint64_t x37 = 3547LLU;
uint32_t x40 = UINT32_MAX;
static volatile uint64_t t2 = 3742053666LLU;
volatile uint64_t x57 = 3979LLU;
static int64_t x60 = INT64_MIN;
int16_t x77 = INT16_MAX;
static int8_t x78 = 0;
uint64_t x143 = 673394103953137LLU;
static int32_t x159 = 22175101;
uint64_t t8 = 2112409938392093417LLU;
uint16_t x186 = 5U;
static int8_t x188 = INT8_MAX;
volatile int32_t t13 = 3207;
int64_t x475 = INT64_MIN;
int32_t x476 = -205490631;
int16_t x527 = -1;
static volatile int32_t x533 = INT32_MAX;
uint8_t x534 = 30U;
uint8_t x562 = 2U;
int16_t x593 = 2374;
static int64_t x609 = 227213753064472760LL;
volatile int64_t x653 = INT64_MAX;
int64_t t21 = 196718627318936LL;
volatile int32_t t22 = -1539;
int16_t x872 = INT16_MAX;
static int64_t t23 = -148249LL;
uint16_t x929 = 0U;
volatile int8_t x1013 = 19;
int8_t x1014 = 11;
int32_t x1015 = -1;
uint32_t x1016 = 23735U;
volatile int32_t t27 = 844915013;
int16_t x1048 = INT16_MAX;
int8_t x1214 = 1;
int64_t x1226 = 4LL;
int16_t x1345 = INT16_MAX;
volatile int8_t x1358 = 3;
volatile int32_t t33 = -5;
int8_t x1421 = INT8_MAX;
int32_t t34 = -7366495;
uint32_t x1666 = 0U;
int32_t x1799 = -35;
static uint64_t x1800 = 339734708661LLU;
volatile int64_t t39 = -126LL;
int16_t x1881 = INT16_MAX;
int8_t x1883 = INT8_MAX;
uint8_t x1918 = 29U;
int16_t x1919 = INT16_MIN;
volatile int64_t x1953 = 17454003971404LL;
volatile int64_t x1971 = 186631287078LL;
uint64_t t43 = 497566251899LLU;
volatile int16_t x2211 = -1;
volatile uint8_t x2213 = 34U;
int32_t x2273 = INT32_MAX;
uint8_t x2351 = 30U;
uint16_t x2393 = UINT16_MAX;
uint16_t x2395 = 0U;
volatile int32_t t52 = -11182;
int32_t x2483 = INT32_MIN;
int32_t x2484 = 1;
uint16_t x2514 = 19U;
int8_t x2542 = 6;
uint64_t x2597 = 3276617LLU;
uint32_t x2599 = UINT32_MAX;
int64_t x2736 = -1LL;
static volatile int64_t x2737 = INT64_MAX;
uint64_t x2743 = UINT64_MAX;
int8_t x2781 = INT8_MAX;
int8_t x2782 = 9;
int64_t x2783 = INT64_MIN;
int32_t x2887 = INT32_MAX;
int16_t x2893 = INT16_MAX;
int8_t x2895 = 1;
static uint16_t x3090 = 4U;
volatile uint32_t t66 = 318553125U;
volatile int16_t x3150 = 3;
static uint8_t x3206 = 5U;
uint8_t x3244 = UINT8_MAX;
uint32_t x3280 = 1732615855U;
static int32_t x3293 = INT32_MAX;
int8_t x3398 = 3;
volatile int64_t x3430 = 2LL;
volatile uint8_t x3431 = 1U;
static int32_t t75 = -5;
volatile int32_t t77 = 233533153;
uint8_t x3536 = 28U;
volatile uint64_t x3553 = 1816478128398LLU;
int64_t x3556 = 17555422LL;
int64_t x3802 = 25LL;
static uint16_t x3805 = 3U;
uint8_t x3806 = 11U;
volatile uint64_t x3811 = 8026049012LLU;
static uint8_t x4102 = 1U;
int64_t x4103 = INT64_MIN;
static int16_t x4104 = -2007;
static uint32_t x4263 = 1873756U;
static int32_t t87 = INT32_MAX;
uint16_t x4410 = 1U;
static int32_t t90 = 14;
uint16_t x4547 = UINT16_MAX;
static volatile int64_t x4548 = 14474383510549LL;
static int16_t x4574 = 1;
int8_t x4576 = -17;
volatile int32_t t94 = -274455783;
uint32_t x4797 = UINT32_MAX;
volatile uint32_t x4798 = 0U;
static uint64_t x4893 = 2852236052308416LLU;
uint64_t x4896 = 105953LLU;
int16_t x4915 = -54;


void f0(void) {
	uint16_t x1 = 2U;
	int64_t x3 = -1LL;
	volatile int32_t t0 = -10971;

	t0 = (x1>>(x2^(x3<x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x25 = 0U;
	uint16_t x26 = 2U;
	int16_t x28 = -11;
	int32_t t1 = -607306495;

	t1 = (x25>>(x26^(x27<x28)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x38 = 3LLU;
	uint8_t x39 = UINT8_MAX;

	t2 = (x37>>(x38^(x39<x40)));

	if (t2 != 886LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x58 = 5;
	static uint8_t x59 = 4U;
	volatile uint64_t t3 = 120118294LLU;

	t3 = (x57>>(x58^(x59<x60)));

	if (t3 != 124LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x79 = 0;
	int32_t x80 = 63192;
	int32_t t4 = 1124429;

	t4 = (x77>>(x78^(x79<x80)));

	if (t4 != 16383) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x105 = 397479U;
	uint16_t x106 = 1U;
	int16_t x107 = -1;
	volatile int64_t x108 = 90616831LL;
	static volatile uint32_t t5 = 113459U;

	t5 = (x105>>(x106^(x107<x108)));

	if (t5 != 397479U) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x141 = 2U;
	uint64_t x142 = 0LLU;
	static uint8_t x144 = UINT8_MAX;
	int32_t t6 = 1;

	t6 = (x141>>(x142^(x143<x144)));

	if (t6 != 2) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x157 = UINT8_MAX;
	volatile uint16_t x158 = 7U;
	uint32_t x160 = UINT32_MAX;
	int32_t t7 = 485109;

	t7 = (x157>>(x158^(x159<x160)));

	if (t7 != 3) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x161 = UINT64_MAX;
	static volatile int8_t x162 = 3;
	static int16_t x163 = 1;
	static uint32_t x164 = UINT32_MAX;

	t8 = (x161>>(x162^(x163<x164)));

	if (t8 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x185 = 83U;
	volatile int16_t x187 = -3187;
	volatile int32_t t9 = -8159;

	t9 = (x185>>(x186^(x187<x188)));

	if (t9 != 5) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x357 = UINT8_MAX;
	static int8_t x358 = 1;
	int32_t x359 = INT32_MIN;
	uint32_t x360 = 450176528U;
	volatile int32_t t10 = 244;

	t10 = (x357>>(x358^(x359<x360)));

	if (t10 != 127) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x365 = 7801150U;
	volatile uint8_t x366 = 1U;
	volatile int64_t x367 = INT64_MAX;
	int16_t x368 = INT16_MIN;
	uint32_t t11 = 479832U;

	t11 = (x365>>(x366^(x367<x368)));

	if (t11 != 3900575U) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x389 = 0U;
	uint8_t x390 = 14U;
	int8_t x391 = INT8_MIN;
	volatile int16_t x392 = -1;
	volatile uint32_t t12 = 28407705U;

	t12 = (x389>>(x390^(x391<x392)));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x429 = 14U;
	int8_t x430 = 1;
	int8_t x431 = -1;
	int32_t x432 = -715127016;

	t13 = (x429>>(x430^(x431<x432)));

	if (t13 != 7) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x473 = 504729584LLU;
	uint16_t x474 = 3U;
	static uint64_t t14 = 5986LLU;

	t14 = (x473>>(x474^(x475<x476)));

	if (t14 != 126182396LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x525 = 147U;
	volatile uint8_t x526 = 1U;
	volatile uint8_t x528 = 30U;
	static volatile uint32_t t15 = 148504824U;

	t15 = (x525>>(x526^(x527<x528)));

	if (t15 != 147U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x535 = INT8_MIN;
	int32_t x536 = -451173;
	int32_t t16 = -31;

	t16 = (x533>>(x534^(x535<x536)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x537 = 10244407U;
	static uint8_t x538 = 3U;
	static uint64_t x539 = 1667716LLU;
	static uint32_t x540 = 937207485U;
	volatile uint32_t t17 = 55370849U;

	t17 = (x537>>(x538^(x539<x540)));

	if (t17 != 2561101U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x561 = 239;
	int8_t x563 = INT8_MIN;
	static int32_t x564 = INT32_MIN;
	volatile int32_t t18 = -495808037;

	t18 = (x561>>(x562^(x563<x564)));

	if (t18 != 59) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x594 = 1U;
	int8_t x595 = INT8_MIN;
	static volatile uint64_t x596 = 88104098043LLU;
	int32_t t19 = 0;

	t19 = (x593>>(x594^(x595<x596)));

	if (t19 != 1187) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x610 = 15U;
	int32_t x611 = -1;
	static uint32_t x612 = 71477984U;
	volatile int64_t t20 = 218677529LL;

	t20 = (x609>>(x610^(x611<x612)));

	if (t20 != 6934013460219LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x654 = 14;
	uint64_t x655 = 1LLU;
	int32_t x656 = INT32_MIN;

	t21 = (x653>>(x654^(x655<x656)));

	if (t21 != 281474976710655LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x793 = 1U;
	static int8_t x794 = 6;
	volatile int32_t x795 = -1;
	int8_t x796 = -12;

	t22 = (x793>>(x794^(x795<x796)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x869 = INT64_MAX;
	uint32_t x870 = 8U;
	int32_t x871 = -143279188;

	t23 = (x869>>(x870^(x871<x872)));

	if (t23 != 18014398509481983LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x925 = 59313632724294LL;
	static uint16_t x926 = 3U;
	uint16_t x927 = 2U;
	int64_t x928 = -1LL;
	volatile int64_t t24 = -5LL;

	t24 = (x925>>(x926^(x927<x928)));

	if (t24 != 7414204090536LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x930 = 3;
	uint32_t x931 = 5U;
	int64_t x932 = INT64_MAX;
	volatile int32_t t25 = 1027187;

	t25 = (x929>>(x930^(x931<x932)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x941 = UINT32_MAX;
	volatile uint16_t x942 = 1U;
	uint16_t x943 = 1275U;
	int16_t x944 = 298;
	volatile uint32_t t26 = 69U;

	t26 = (x941>>(x942^(x943<x944)));

	if (t26 != 2147483647U) { NG(); } else { ; }
	
}

void f27(void) {


	t27 = (x1013>>(x1014^(x1015<x1016)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1045 = INT8_MAX;
	int8_t x1046 = 2;
	volatile int64_t x1047 = 19043LL;
	volatile int32_t t28 = -75107366;

	t28 = (x1045>>(x1046^(x1047<x1048)));

	if (t28 != 15) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1213 = INT16_MAX;
	int8_t x1215 = -1;
	volatile int32_t x1216 = -1;
	int32_t t29 = -1;

	t29 = (x1213>>(x1214^(x1215<x1216)));

	if (t29 != 16383) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1225 = 3;
	volatile int16_t x1227 = INT16_MAX;
	int64_t x1228 = 14639LL;
	static int32_t t30 = -8;

	t30 = (x1225>>(x1226^(x1227<x1228)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1285 = INT32_MAX;
	uint16_t x1286 = 0U;
	int64_t x1287 = 1169LL;
	int32_t x1288 = -1;
	static volatile int32_t t31 = INT32_MAX;

	t31 = (x1285>>(x1286^(x1287<x1288)));

	if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x1346 = 1;
	int16_t x1347 = INT16_MAX;
	int8_t x1348 = INT8_MIN;
	int32_t t32 = -6458;

	t32 = (x1345>>(x1346^(x1347<x1348)));

	if (t32 != 16383) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1357 = 4321;
	static uint16_t x1359 = UINT16_MAX;
	uint32_t x1360 = 81U;

	t33 = (x1357>>(x1358^(x1359<x1360)));

	if (t33 != 540) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x1422 = 5U;
	int64_t x1423 = INT64_MIN;
	int8_t x1424 = 1;

	t34 = (x1421>>(x1422^(x1423<x1424)));

	if (t34 != 7) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1429 = INT32_MAX;
	static int8_t x1430 = 0;
	static uint16_t x1431 = 1U;
	volatile int64_t x1432 = INT64_MIN;
	static int32_t t35 = INT32_MAX;

	t35 = (x1429>>(x1430^(x1431<x1432)));

	if (t35 != INT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x1665 = UINT64_MAX;
	uint32_t x1667 = UINT32_MAX;
	int16_t x1668 = 1015;
	uint64_t t36 = UINT64_MAX;

	t36 = (x1665>>(x1666^(x1667<x1668)));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x1769 = UINT64_MAX;
	int8_t x1770 = 6;
	int64_t x1771 = -1LL;
	int32_t x1772 = 390328984;
	volatile uint64_t t37 = 136481077149074LLU;

	t37 = (x1769>>(x1770^(x1771<x1772)));

	if (t37 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x1797 = 28U;
	uint8_t x1798 = 11U;
	static int32_t t38 = 96154295;

	t38 = (x1797>>(x1798^(x1799<x1800)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x1873 = INT64_MAX;
	int32_t x1874 = 12;
	int16_t x1875 = 0;
	volatile int32_t x1876 = INT32_MAX;

	t39 = (x1873>>(x1874^(x1875<x1876)));

	if (t39 != 1125899906842623LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1882 = 24;
	volatile int32_t x1884 = -1;
	volatile int32_t t40 = 23655380;

	t40 = (x1881>>(x1882^(x1883<x1884)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1917 = INT64_MAX;
	int8_t x1920 = -58;
	int64_t t41 = 118765123LL;

	t41 = (x1917>>(x1918^(x1919<x1920)));

	if (t41 != 34359738367LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x1954 = 21LL;
	static uint64_t x1955 = UINT64_MAX;
	volatile int64_t x1956 = INT64_MIN;
	volatile int64_t t42 = -753398110LL;

	t42 = (x1953>>(x1954^(x1955<x1956)));

	if (t42 != 8322717LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x1969 = UINT64_MAX;
	volatile int16_t x1970 = 3;
	int64_t x1972 = INT64_MAX;

	t43 = (x1969>>(x1970^(x1971<x1972)));

	if (t43 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x2185 = 6;
	uint16_t x2186 = 2U;
	int8_t x2187 = 57;
	uint8_t x2188 = UINT8_MAX;
	int32_t t44 = 174400400;

	t44 = (x2185>>(x2186^(x2187<x2188)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x2209 = 3182;
	static uint8_t x2210 = 0U;
	int16_t x2212 = -1;
	volatile int32_t t45 = 1;

	t45 = (x2209>>(x2210^(x2211<x2212)));

	if (t45 != 3182) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x2214 = 0U;
	static int8_t x2215 = 2;
	int64_t x2216 = -2LL;
	static volatile int32_t t46 = -265074898;

	t46 = (x2213>>(x2214^(x2215<x2216)));

	if (t46 != 34) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x2269 = 1218694965980LLU;
	int64_t x2270 = 22LL;
	static uint8_t x2271 = 6U;
	volatile int8_t x2272 = INT8_MAX;
	volatile uint64_t t47 = 72625LLU;

	t47 = (x2269>>(x2270^(x2271<x2272)));

	if (t47 != 145279LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x2274 = 0U;
	uint8_t x2275 = 124U;
	int16_t x2276 = INT16_MIN;
	int32_t t48 = INT32_MAX;

	t48 = (x2273>>(x2274^(x2275<x2276)));

	if (t48 != INT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x2277 = UINT64_MAX;
	uint8_t x2278 = 26U;
	volatile int8_t x2279 = INT8_MAX;
	volatile int16_t x2280 = 0;
	uint64_t t49 = 2007573721550891884LLU;

	t49 = (x2277>>(x2278^(x2279<x2280)));

	if (t49 != 274877906943LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x2285 = INT32_MAX;
	static int16_t x2286 = 0;
	uint32_t x2287 = UINT32_MAX;
	uint64_t x2288 = 4982200140171786011LLU;
	volatile int32_t t50 = -313929;

	t50 = (x2285>>(x2286^(x2287<x2288)));

	if (t50 != 1073741823) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint16_t x2349 = 9854U;
	volatile uint16_t x2350 = 13U;
	int16_t x2352 = INT16_MAX;
	volatile int32_t t51 = -1117995;

	t51 = (x2349>>(x2350^(x2351<x2352)));

	if (t51 != 2) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x2394 = 10U;
	static uint32_t x2396 = UINT32_MAX;

	t52 = (x2393>>(x2394^(x2395<x2396)));

	if (t52 != 31) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x2421 = 988735370887LLU;
	uint8_t x2422 = 3U;
	static uint64_t x2423 = 12374691478LLU;
	volatile uint8_t x2424 = 7U;
	static volatile uint64_t t53 = 669682297187761093LLU;

	t53 = (x2421>>(x2422^(x2423<x2424)));

	if (t53 != 123591921360LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x2481 = UINT64_MAX;
	volatile uint16_t x2482 = 0U;
	uint64_t t54 = 17543LLU;

	t54 = (x2481>>(x2482^(x2483<x2484)));

	if (t54 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x2513 = 0U;
	int16_t x2515 = -10248;
	uint8_t x2516 = 90U;
	static volatile int32_t t55 = 837;

	t55 = (x2513>>(x2514^(x2515<x2516)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x2541 = INT64_MAX;
	int8_t x2543 = INT8_MIN;
	int32_t x2544 = -3302814;
	volatile int64_t t56 = -3613502252109383896LL;

	t56 = (x2541>>(x2542^(x2543<x2544)));

	if (t56 != 144115188075855871LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x2598 = 1;
	uint8_t x2600 = UINT8_MAX;
	uint64_t t57 = 220LLU;

	t57 = (x2597>>(x2598^(x2599<x2600)));

	if (t57 != 1638308LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x2733 = 56U;
	int8_t x2734 = 4;
	uint64_t x2735 = UINT64_MAX;
	int32_t t58 = 193;

	t58 = (x2733>>(x2734^(x2735<x2736)));

	if (t58 != 3) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x2738 = 57;
	int16_t x2739 = 2;
	int8_t x2740 = 0;
	volatile int64_t t59 = 703876201625517LL;

	t59 = (x2737>>(x2738^(x2739<x2740)));

	if (t59 != 63LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x2741 = UINT64_MAX;
	static volatile int8_t x2742 = 0;
	int16_t x2744 = -1;
	uint64_t t60 = UINT64_MAX;

	t60 = (x2741>>(x2742^(x2743<x2744)));

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x2784 = 60U;
	int32_t t61 = -15515;

	t61 = (x2781>>(x2782^(x2783<x2784)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x2829 = 51U;
	uint8_t x2830 = 0U;
	static int64_t x2831 = -1LL;
	static volatile int8_t x2832 = INT8_MIN;
	volatile int32_t t62 = 798;

	t62 = (x2829>>(x2830^(x2831<x2832)));

	if (t62 != 51) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x2865 = 12U;
	uint16_t x2866 = 0U;
	int64_t x2867 = 52790118LL;
	uint8_t x2868 = 18U;
	int32_t t63 = 101868;

	t63 = (x2865>>(x2866^(x2867<x2868)));

	if (t63 != 12) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x2885 = 506U;
	uint8_t x2886 = 6U;
	static int16_t x2888 = 5520;
	volatile int32_t t64 = -106;

	t64 = (x2885>>(x2886^(x2887<x2888)));

	if (t64 != 7) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x2894 = 1U;
	static int16_t x2896 = -1;
	volatile int32_t t65 = -316;

	t65 = (x2893>>(x2894^(x2895<x2896)));

	if (t65 != 16383) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x3089 = 274U;
	static int32_t x3091 = INT32_MAX;
	int16_t x3092 = INT16_MIN;

	t66 = (x3089>>(x3090^(x3091<x3092)));

	if (t66 != 17U) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x3149 = 0U;
	uint32_t x3151 = 1U;
	uint64_t x3152 = 7LLU;
	int32_t t67 = -17754;

	t67 = (x3149>>(x3150^(x3151<x3152)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x3205 = 38121197668LLU;
	int16_t x3207 = 4343;
	uint8_t x3208 = 0U;
	volatile uint64_t t68 = 54440541149765LLU;

	t68 = (x3205>>(x3206^(x3207<x3208)));

	if (t68 != 1191287427LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x3225 = 7513627249LLU;
	uint8_t x3226 = 9U;
	int8_t x3227 = INT8_MIN;
	int32_t x3228 = 1326896;
	uint64_t t69 = 1377593234625LLU;

	t69 = (x3225>>(x3226^(x3227<x3228)));

	if (t69 != 29350106LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x3241 = 585LL;
	int64_t x3242 = 3LL;
	int8_t x3243 = 4;
	volatile int64_t t70 = -50049456LL;

	t70 = (x3241>>(x3242^(x3243<x3244)));

	if (t70 != 146LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x3277 = INT64_MAX;
	static int8_t x3278 = 48;
	int32_t x3279 = -28516288;
	int64_t t71 = 228944686211684LL;

	t71 = (x3277>>(x3278^(x3279<x3280)));

	if (t71 != 32767LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x3285 = INT64_MAX;
	uint16_t x3286 = 7U;
	volatile uint16_t x3287 = 173U;
	int16_t x3288 = -1;
	volatile int64_t t72 = -58045714233443LL;

	t72 = (x3285>>(x3286^(x3287<x3288)));

	if (t72 != 72057594037927935LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x3294 = 10U;
	int64_t x3295 = -1LL;
	int16_t x3296 = INT16_MIN;
	static int32_t t73 = 211292;

	t73 = (x3293>>(x3294^(x3295<x3296)));

	if (t73 != 2097151) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x3397 = UINT64_MAX;
	int64_t x3399 = INT64_MIN;
	int8_t x3400 = INT8_MIN;
	uint64_t t74 = 11867659248041669LLU;

	t74 = (x3397>>(x3398^(x3399<x3400)));

	if (t74 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x3429 = 6U;
	int32_t x3432 = INT32_MAX;

	t75 = (x3429>>(x3430^(x3431<x3432)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x3453 = UINT16_MAX;
	int8_t x3454 = 0;
	int8_t x3455 = INT8_MAX;
	int8_t x3456 = -42;
	volatile int32_t t76 = 824918520;

	t76 = (x3453>>(x3454^(x3455<x3456)));

	if (t76 != 65535) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x3469 = INT16_MAX;
	int16_t x3470 = 3;
	int8_t x3471 = INT8_MAX;
	int16_t x3472 = INT16_MIN;

	t77 = (x3469>>(x3470^(x3471<x3472)));

	if (t77 != 4095) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x3521 = 2786LLU;
	static uint8_t x3522 = 0U;
	uint8_t x3523 = UINT8_MAX;
	uint8_t x3524 = 95U;
	uint64_t t78 = 5060LLU;

	t78 = (x3521>>(x3522^(x3523<x3524)));

	if (t78 != 2786LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x3533 = 851424810U;
	int8_t x3534 = 1;
	int16_t x3535 = 30;
	uint32_t t79 = 614836365U;

	t79 = (x3533>>(x3534^(x3535<x3536)));

	if (t79 != 425712405U) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x3554 = 2U;
	int8_t x3555 = INT8_MIN;
	volatile uint64_t t80 = 8058623LLU;

	t80 = (x3553>>(x3554^(x3555<x3556)));

	if (t80 != 227059766049LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x3773 = UINT8_MAX;
	int8_t x3774 = 0;
	static uint32_t x3775 = 3U;
	int64_t x3776 = -3147175LL;
	volatile int32_t t81 = -20854899;

	t81 = (x3773>>(x3774^(x3775<x3776)));

	if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x3801 = 995;
	int16_t x3803 = INT16_MIN;
	uint64_t x3804 = 14156265521209LLU;
	volatile int32_t t82 = -1963;

	t82 = (x3801>>(x3802^(x3803<x3804)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x3807 = -1;
	uint32_t x3808 = 12U;
	static volatile int32_t t83 = 1006;

	t83 = (x3805>>(x3806^(x3807<x3808)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x3809 = 674661U;
	int8_t x3810 = 8;
	int16_t x3812 = INT16_MAX;
	uint32_t t84 = 9499U;

	t84 = (x3809>>(x3810^(x3811<x3812)));

	if (t84 != 2635U) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x4041 = 22U;
	int8_t x4042 = 0;
	int32_t x4043 = -168;
	static int8_t x4044 = 31;
	int32_t t85 = 2;

	t85 = (x4041>>(x4042^(x4043<x4044)));

	if (t85 != 11) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x4101 = 124U;
	volatile uint32_t t86 = 496U;

	t86 = (x4101>>(x4102^(x4103<x4104)));

	if (t86 != 124U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x4261 = INT32_MAX;
	static int16_t x4262 = 1;
	volatile int32_t x4264 = -1;

	t87 = (x4261>>(x4262^(x4263<x4264)));

	if (t87 != INT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x4361 = INT8_MAX;
	uint16_t x4362 = 27U;
	int8_t x4363 = -1;
	int16_t x4364 = -1;
	volatile int32_t t88 = 0;

	t88 = (x4361>>(x4362^(x4363<x4364)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x4397 = UINT64_MAX;
	uint8_t x4398 = 10U;
	int64_t x4399 = INT64_MIN;
	volatile int16_t x4400 = INT16_MIN;
	volatile uint64_t t89 = 2LLU;

	t89 = (x4397>>(x4398^(x4399<x4400)));

	if (t89 != 9007199254740991LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x4409 = 12;
	volatile int32_t x4411 = INT32_MIN;
	static uint8_t x4412 = 101U;

	t90 = (x4409>>(x4410^(x4411<x4412)));

	if (t90 != 12) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x4441 = INT64_MAX;
	static uint8_t x4442 = 3U;
	volatile int32_t x4443 = 115426;
	int32_t x4444 = -1;
	static int64_t t91 = 1LL;

	t91 = (x4441>>(x4442^(x4443<x4444)));

	if (t91 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x4545 = 1;
	volatile int32_t x4546 = 1;
	int32_t t92 = 29581237;

	t92 = (x4545>>(x4546^(x4547<x4548)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x4573 = 26;
	volatile int64_t x4575 = INT64_MIN;
	static volatile int32_t t93 = -119751302;

	t93 = (x4573>>(x4574^(x4575<x4576)));

	if (t93 != 26) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x4717 = 0U;
	static int16_t x4718 = 1;
	volatile int8_t x4719 = -1;
	int8_t x4720 = INT8_MIN;

	t94 = (x4717>>(x4718^(x4719<x4720)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x4799 = -2;
	int8_t x4800 = INT8_MIN;
	static uint32_t t95 = UINT32_MAX;

	t95 = (x4797>>(x4798^(x4799<x4800)));

	if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x4837 = 33063950LLU;
	uint8_t x4838 = 0U;
	volatile int64_t x4839 = INT64_MIN;
	uint64_t x4840 = 2182305535944196082LLU;
	uint64_t t96 = 2814775068483LLU;

	t96 = (x4837>>(x4838^(x4839<x4840)));

	if (t96 != 33063950LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x4894 = 1U;
	int32_t x4895 = -495468880;
	static volatile uint64_t t97 = 47568453940326LLU;

	t97 = (x4893>>(x4894^(x4895<x4896)));

	if (t97 != 1426118026154208LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x4909 = 150U;
	volatile int32_t x4910 = 0;
	uint64_t x4911 = 1LLU;
	int64_t x4912 = INT64_MIN;
	volatile uint32_t t98 = 0U;

	t98 = (x4909>>(x4910^(x4911<x4912)));

	if (t98 != 75U) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x4913 = 5253U;
	int32_t x4914 = 5;
	int16_t x4916 = INT16_MIN;
	volatile uint32_t t99 = 7U;

	t99 = (x4913>>(x4914^(x4915<x4916)));

	if (t99 != 164U) { NG(); } else { ; }
	
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

