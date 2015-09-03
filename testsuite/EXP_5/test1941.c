#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x307 = UINT32_MAX;
int32_t t5 = -60561000;
volatile uint8_t x456 = 11U;
int64_t t8 = 26742457LL;
volatile uint8_t x491 = UINT8_MAX;
int32_t t9 = -13534;
static volatile int16_t x574 = -1;
volatile uint8_t x593 = UINT8_MAX;
uint32_t x596 = 29U;
uint8_t x603 = 3U;
int64_t x833 = -1LL;
uint64_t x834 = 7496056383192896LLU;
static volatile int16_t x886 = 4366;
static int8_t x888 = 7;
volatile int64_t t20 = 20089615LL;
int32_t x1033 = INT32_MIN;
volatile uint16_t x1035 = 16U;
volatile uint32_t x1297 = UINT32_MAX;
uint16_t x1299 = UINT16_MAX;
uint8_t x1300 = 21U;
int32_t x1697 = -5;
uint8_t x1700 = 63U;
static int32_t x1789 = -2705;
uint32_t x1791 = 135U;
static volatile uint64_t t34 = 62172755814LLU;
uint64_t x2202 = 282316444346LLU;
int8_t x2203 = INT8_MIN;
int16_t x2204 = 1;
volatile int32_t t39 = -269;
volatile uint64_t x2262 = 7732865579663702418LLU;
static int16_t x2329 = -1;
uint8_t x2332 = 0U;
uint32_t x2544 = 4U;
int16_t x2609 = -29;
static uint64_t t43 = 496144909555946192LLU;
volatile int32_t t47 = 9414;
static volatile uint64_t t48 = 94LLU;
uint64_t t50 = 11366135596236LLU;
volatile uint32_t x3125 = 1U;
volatile int8_t x3313 = 0;
static int8_t x3340 = 14;
volatile uint64_t t56 = 450290355LLU;
uint16_t x3561 = 0U;
uint64_t t59 = 64188190680LLU;
uint16_t x3880 = 9U;
volatile uint64_t t61 = 7367841620LLU;
int16_t x3930 = INT16_MIN;
int16_t x4022 = INT16_MAX;
uint64_t x4158 = UINT64_MAX;
volatile uint32_t x4251 = 27639140U;
int64_t x4473 = INT64_MAX;
int16_t x4474 = 1003;
uint32_t x4475 = UINT32_MAX;
static uint8_t x4595 = UINT8_MAX;
uint8_t x4726 = UINT8_MAX;
uint64_t x4795 = 7212591197041LLU;
static uint16_t x4796 = 13U;
static int32_t x4801 = INT32_MAX;
uint16_t x4855 = 303U;
static int32_t x4885 = 0;
static int32_t x4886 = -1;
volatile uint32_t x4887 = 11U;
static uint8_t x4932 = 1U;
int64_t x4961 = INT64_MIN;
int8_t x4964 = 7;
int64_t x5064 = 1LL;
volatile uint8_t x5197 = 2U;
uint32_t x5198 = UINT32_MAX;
int8_t x5292 = 0;
int64_t x5317 = 1189736LL;
uint64_t t90 = 8107114222916LLU;
static volatile uint64_t x5411 = 11209506LLU;
static uint32_t x5441 = 1U;
uint32_t x5442 = 951372U;
int32_t x5465 = INT32_MAX;
volatile uint64_t t95 = 368152206692LLU;
volatile int16_t x5615 = -1;
uint32_t x5639 = UINT32_MAX;
int16_t x5640 = 1;


void f0(void) {
	static int32_t x277 = INT32_MAX;
	int64_t x278 = INT64_MIN;
	uint64_t x279 = 1123230631724942LLU;
	static int8_t x280 = 0;
	volatile uint64_t t0 = 114523041LLU;

	t0 = (x277/((x278|x279)>>x280));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x305 = INT8_MAX;
	int8_t x306 = INT8_MAX;
	volatile uint64_t x308 = 30LLU;
	uint32_t t1 = 1231U;

	t1 = (x305/((x306|x307)>>x308));

	if (t1 != 42U) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int32_t x361 = 183;
	uint16_t x362 = 948U;
	static uint64_t x363 = 920482780406538LLU;
	int32_t x364 = 3;
	volatile uint64_t t2 = 3331457LLU;

	t2 = (x361/((x362|x363)>>x364));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x389 = -1LL;
	static int64_t x390 = 1084LL;
	uint16_t x391 = 0U;
	uint16_t x392 = 6U;
	volatile int64_t t3 = -302476430377756961LL;

	t3 = (x389/((x390|x391)>>x392));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x405 = 23U;
	int64_t x406 = INT64_MIN;
	volatile uint64_t x407 = UINT64_MAX;
	uint8_t x408 = 1U;
	volatile uint64_t t4 = 146LLU;

	t4 = (x405/((x406|x407)>>x408));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x433 = -1;
	static int8_t x434 = INT8_MAX;
	static uint16_t x435 = 3U;
	int8_t x436 = 0;

	t5 = (x433/((x434|x435)>>x436));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x437 = UINT8_MAX;
	int16_t x438 = 13606;
	static volatile uint32_t x439 = UINT32_MAX;
	volatile uint16_t x440 = 24U;
	static uint32_t t6 = 1055U;

	t6 = (x437/((x438|x439)>>x440));

	if (t6 != 1U) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x453 = 0U;
	int16_t x454 = INT16_MIN;
	uint64_t x455 = UINT64_MAX;
	uint64_t t7 = 3276268085349128024LLU;

	t7 = (x453/((x454|x455)>>x456));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x477 = INT16_MAX;
	static int64_t x478 = 7005LL;
	static uint32_t x479 = 3529U;
	uint32_t x480 = 3U;

	t8 = (x477/((x478|x479)>>x480));

	if (t8 != 32LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x489 = INT16_MIN;
	uint8_t x490 = UINT8_MAX;
	int8_t x492 = 1;

	t9 = (x489/((x490|x491)>>x492));

	if (t9 != -258) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x569 = 3118LLU;
	static int32_t x570 = INT32_MAX;
	uint32_t x571 = 4325641U;
	int16_t x572 = 8;
	uint64_t t10 = 1061563781774LLU;

	t10 = (x569/((x570|x571)>>x572));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x573 = 43401U;
	uint32_t x575 = 909017U;
	static int16_t x576 = 24;
	volatile uint32_t t11 = 16U;

	t11 = (x573/((x574|x575)>>x576));

	if (t11 != 170U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x594 = INT32_MAX;
	uint64_t x595 = 607341587LLU;
	uint64_t t12 = 40359581LLU;

	t12 = (x593/((x594|x595)>>x596));

	if (t12 != 85LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x601 = -1LL;
	int8_t x602 = 1;
	uint8_t x604 = 1U;
	volatile int64_t t13 = 596876116502974556LL;

	t13 = (x601/((x602|x603)>>x604));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x813 = -1;
	int16_t x814 = 5;
	volatile uint64_t x815 = UINT64_MAX;
	volatile int32_t x816 = 1;
	volatile uint64_t t14 = 2915067391448903728LLU;

	t14 = (x813/((x814|x815)>>x816));

	if (t14 != 2LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x835 = UINT8_MAX;
	static volatile uint8_t x836 = 4U;
	volatile uint64_t t15 = 823200673914LLU;

	t15 = (x833/((x834|x835)>>x836));

	if (t15 != 39373LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x853 = 449871329LLU;
	int8_t x854 = INT8_MAX;
	int32_t x855 = 3633;
	uint8_t x856 = 1U;
	volatile uint64_t t16 = 44241233LLU;

	t16 = (x853/((x854|x855)>>x856));

	if (t16 != 242518LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x877 = -1;
	int32_t x878 = 60;
	int8_t x879 = 0;
	static volatile int8_t x880 = 0;
	volatile int32_t t17 = -17073124;

	t17 = (x877/((x878|x879)>>x880));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x885 = INT32_MIN;
	static int64_t x887 = INT64_MAX;
	int64_t t18 = -1455250369234620LL;

	t18 = (x885/((x886|x887)>>x888));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x949 = INT16_MAX;
	volatile uint16_t x950 = 3U;
	uint8_t x951 = UINT8_MAX;
	int8_t x952 = 0;
	int32_t t19 = -2186;

	t19 = (x949/((x950|x951)>>x952));

	if (t19 != 128) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x1013 = -1LL;
	int64_t x1014 = 1473503LL;
	volatile int32_t x1015 = 545;
	volatile uint8_t x1016 = 3U;

	t20 = (x1013/((x1014|x1015)>>x1016));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1034 = 113U;
	int32_t x1036 = 5;
	volatile int32_t t21 = 3692518;

	t21 = (x1033/((x1034|x1035)>>x1036));

	if (t21 != -715827882) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1145 = INT16_MIN;
	uint16_t x1146 = 1U;
	uint16_t x1147 = 7017U;
	static volatile uint8_t x1148 = 8U;
	volatile int32_t t22 = -83672763;

	t22 = (x1145/((x1146|x1147)>>x1148));

	if (t22 != -1213) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1165 = INT64_MAX;
	uint16_t x1166 = 60U;
	int32_t x1167 = 17654;
	static uint64_t x1168 = 1LLU;
	volatile int64_t t23 = 1577651546LL;

	t23 = (x1165/((x1166|x1167)>>x1168));

	if (t23 != 1044431212417028LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1257 = 0;
	uint64_t x1258 = 43LLU;
	static int16_t x1259 = -1;
	static uint8_t x1260 = 63U;
	volatile uint64_t t24 = 1182274055059182342LLU;

	t24 = (x1257/((x1258|x1259)>>x1260));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1298 = INT32_MAX;
	static uint32_t t25 = 516371U;

	t25 = (x1297/((x1298|x1299)>>x1300));

	if (t25 != 4198404U) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint16_t x1465 = 67U;
	int16_t x1466 = -948;
	volatile uint64_t x1467 = UINT64_MAX;
	uint8_t x1468 = 5U;
	static volatile uint64_t t26 = 319336078256LLU;

	t26 = (x1465/((x1466|x1467)>>x1468));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1517 = UINT16_MAX;
	int32_t x1518 = 3110054;
	uint64_t x1519 = 981177168380962LLU;
	int8_t x1520 = 1;
	uint64_t t27 = 1389221LLU;

	t27 = (x1517/((x1518|x1519)>>x1520));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1549 = INT16_MIN;
	uint64_t x1550 = 3432541192007488LLU;
	volatile int8_t x1551 = INT8_MAX;
	static volatile uint8_t x1552 = 0U;
	volatile uint64_t t28 = 47LLU;

	t28 = (x1549/((x1550|x1551)>>x1552));

	if (t28 != 5374LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x1698 = INT8_MIN;
	static uint64_t x1699 = 12057LLU;
	uint64_t t29 = 53024649461860LLU;

	t29 = (x1697/((x1698|x1699)>>x1700));

	if (t29 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x1733 = 18239U;
	uint16_t x1734 = 18U;
	uint8_t x1735 = UINT8_MAX;
	int8_t x1736 = 1;
	static int32_t t30 = 5;

	t30 = (x1733/((x1734|x1735)>>x1736));

	if (t30 != 143) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1790 = UINT32_MAX;
	uint8_t x1792 = 7U;
	uint32_t t31 = 22855U;

	t31 = (x1789/((x1790|x1791)>>x1792));

	if (t31 != 127U) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1885 = 6U;
	static volatile int8_t x1886 = 2;
	uint16_t x1887 = 21033U;
	uint16_t x1888 = 0U;
	volatile int32_t t32 = 26012;

	t32 = (x1885/((x1886|x1887)>>x1888));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x1921 = INT32_MAX;
	volatile int64_t x1922 = 23LL;
	volatile uint32_t x1923 = 213206U;
	uint8_t x1924 = 6U;
	static volatile int64_t t33 = -2566582863LL;

	t33 = (x1921/((x1922|x1923)>>x1924));

	if (t33 != 644696LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x2029 = UINT16_MAX;
	static uint64_t x2030 = 8516145LLU;
	static uint16_t x2031 = 12596U;
	uint8_t x2032 = 6U;

	t34 = (x2029/((x2030|x2031)>>x2032));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x2109 = INT32_MIN;
	int16_t x2110 = 1516;
	volatile uint8_t x2111 = UINT8_MAX;
	uint16_t x2112 = 0U;
	static volatile int32_t t35 = 6300;

	t35 = (x2109/((x2110|x2111)>>x2112));

	if (t35 != -1399012) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x2133 = 8193896823LL;
	uint8_t x2134 = 25U;
	uint64_t x2135 = UINT64_MAX;
	static uint32_t x2136 = 2U;
	uint64_t t36 = 2628680688572838LLU;

	t36 = (x2133/((x2134|x2135)>>x2136));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x2169 = -1;
	static uint16_t x2170 = 20U;
	uint32_t x2171 = 308310965U;
	uint16_t x2172 = 1U;
	static volatile uint32_t t37 = 46U;

	t37 = (x2169/((x2170|x2171)>>x2172));

	if (t37 != 27U) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x2201 = 56U;
	volatile uint64_t t38 = 8504297023649192151LLU;

	t38 = (x2201/((x2202|x2203)>>x2204));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x2237 = INT32_MIN;
	uint16_t x2238 = 16U;
	int32_t x2239 = INT32_MAX;
	static uint32_t x2240 = 2U;

	t39 = (x2237/((x2238|x2239)>>x2240));

	if (t39 != -4) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x2261 = -1;
	volatile int64_t x2263 = INT64_MIN;
	int8_t x2264 = 1;
	volatile uint64_t t40 = 7649024LLU;

	t40 = (x2261/((x2262|x2263)>>x2264));

	if (t40 != 2LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x2330 = 4U;
	static uint16_t x2331 = 30U;
	int32_t t41 = -4871364;

	t41 = (x2329/((x2330|x2331)>>x2332));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x2541 = 99LLU;
	uint32_t x2542 = 48U;
	int16_t x2543 = 21;
	volatile uint64_t t42 = 811560178789414LLU;

	t42 = (x2541/((x2542|x2543)>>x2544));

	if (t42 != 33LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x2610 = UINT64_MAX;
	int8_t x2611 = INT8_MIN;
	int16_t x2612 = 1;

	t43 = (x2609/((x2610|x2611)>>x2612));

	if (t43 != 1LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint32_t x2645 = 280U;
	static uint64_t x2646 = 32760033032LLU;
	uint32_t x2647 = 650106175U;
	int32_t x2648 = 0;
	uint64_t t44 = 277126LLU;

	t44 = (x2645/((x2646|x2647)>>x2648));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2749 = 1;
	uint8_t x2750 = UINT8_MAX;
	static int32_t x2751 = 110;
	volatile int16_t x2752 = 0;
	volatile int32_t t45 = 1;

	t45 = (x2749/((x2750|x2751)>>x2752));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x2805 = 14539;
	static uint64_t x2806 = 237LLU;
	int8_t x2807 = INT8_MIN;
	static int8_t x2808 = 2;
	uint64_t t46 = 174229655LLU;

	t46 = (x2805/((x2806|x2807)>>x2808));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x2861 = UINT8_MAX;
	volatile uint16_t x2862 = UINT16_MAX;
	uint8_t x2863 = UINT8_MAX;
	volatile uint8_t x2864 = 1U;

	t47 = (x2861/((x2862|x2863)>>x2864));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x2885 = 3U;
	volatile int16_t x2886 = INT16_MIN;
	volatile uint64_t x2887 = 1452343464455461LLU;
	uint16_t x2888 = 24U;

	t48 = (x2885/((x2886|x2887)>>x2888));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x2941 = INT8_MIN;
	uint64_t x2942 = 342954102LLU;
	int8_t x2943 = INT8_MIN;
	static int8_t x2944 = 1;
	uint64_t t49 = 148883981120775LLU;

	t49 = (x2941/((x2942|x2943)>>x2944));

	if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x2957 = UINT16_MAX;
	int8_t x2958 = INT8_MIN;
	static volatile uint64_t x2959 = 29809994214276LLU;
	uint16_t x2960 = 1U;

	t50 = (x2957/((x2958|x2959)>>x2960));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x2989 = INT16_MAX;
	volatile uint32_t x2990 = 821U;
	static volatile int16_t x2991 = INT16_MAX;
	uint8_t x2992 = 2U;
	uint32_t t51 = 1013828137U;

	t51 = (x2989/((x2990|x2991)>>x2992));

	if (t51 != 4U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x3126 = 25952215;
	uint16_t x3127 = 577U;
	static int8_t x3128 = 2;
	volatile uint32_t t52 = 407348U;

	t52 = (x3125/((x3126|x3127)>>x3128));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x3314 = 0U;
	uint16_t x3315 = 310U;
	volatile int8_t x3316 = 5;
	volatile int32_t t53 = 2013;

	t53 = (x3313/((x3314|x3315)>>x3316));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x3337 = -63;
	static uint32_t x3338 = UINT32_MAX;
	int16_t x3339 = INT16_MIN;
	static uint32_t t54 = 3U;

	t54 = (x3337/((x3338|x3339)>>x3340));

	if (t54 != 16384U) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x3373 = UINT32_MAX;
	uint32_t x3374 = 24037U;
	uint8_t x3375 = UINT8_MAX;
	int8_t x3376 = 1;
	uint32_t t55 = 9961U;

	t55 = (x3373/((x3374|x3375)>>x3376));

	if (t55 != 356991U) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x3541 = 17444725909972909LL;
	uint64_t x3542 = 6733491363LLU;
	static int64_t x3543 = INT64_MIN;
	uint8_t x3544 = 0U;

	t56 = (x3541/((x3542|x3543)>>x3544));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x3562 = UINT64_MAX;
	uint16_t x3563 = 220U;
	static volatile uint32_t x3564 = 5U;
	uint64_t t57 = 790840529808LLU;

	t57 = (x3561/((x3562|x3563)>>x3564));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x3697 = -6141;
	static int64_t x3698 = 13799LL;
	uint8_t x3699 = 11U;
	uint8_t x3700 = 4U;
	int64_t t58 = -10289LL;

	t58 = (x3697/((x3698|x3699)>>x3700));

	if (t58 != -7LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x3861 = UINT32_MAX;
	int32_t x3862 = INT32_MIN;
	uint64_t x3863 = 2756345447085729LLU;
	uint64_t x3864 = 13LLU;

	t59 = (x3861/((x3862|x3863)>>x3864));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x3877 = 0;
	uint8_t x3878 = UINT8_MAX;
	static uint32_t x3879 = 2407449U;
	volatile uint32_t t60 = 199036U;

	t60 = (x3877/((x3878|x3879)>>x3880));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x3881 = INT64_MIN;
	uint64_t x3882 = 1589702831559945804LLU;
	uint8_t x3883 = UINT8_MAX;
	static uint32_t x3884 = 3U;

	t61 = (x3881/((x3882|x3883)>>x3884));

	if (t61 != 46LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x3929 = INT32_MAX;
	volatile uint32_t x3931 = UINT32_MAX;
	uint32_t x3932 = 3U;
	uint32_t t62 = 4644U;

	t62 = (x3929/((x3930|x3931)>>x3932));

	if (t62 != 4U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x4021 = -1935;
	int32_t x4023 = 7;
	uint8_t x4024 = 0U;
	static volatile int32_t t63 = -70071;

	t63 = (x4021/((x4022|x4023)>>x4024));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x4041 = INT32_MAX;
	static uint64_t x4042 = 155195108530LLU;
	int32_t x4043 = 1;
	uint64_t x4044 = 1LLU;
	volatile uint64_t t64 = 281LLU;

	t64 = (x4041/((x4042|x4043)>>x4044));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x4049 = INT32_MAX;
	uint16_t x4050 = UINT16_MAX;
	static int8_t x4051 = INT8_MAX;
	int8_t x4052 = 1;
	volatile int32_t t65 = 11;

	t65 = (x4049/((x4050|x4051)>>x4052));

	if (t65 != 65538) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x4117 = 905645834U;
	int16_t x4118 = INT16_MAX;
	static volatile int64_t x4119 = 1543549711368550081LL;
	uint16_t x4120 = 27U;
	int64_t t66 = 41086093836884LL;

	t66 = (x4117/((x4118|x4119)>>x4120));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x4157 = UINT32_MAX;
	uint16_t x4159 = 40U;
	static int16_t x4160 = 0;
	uint64_t t67 = 443LLU;

	t67 = (x4157/((x4158|x4159)>>x4160));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x4249 = INT16_MIN;
	uint8_t x4250 = UINT8_MAX;
	static int8_t x4252 = 0;
	volatile uint32_t t68 = 32595881U;

	t68 = (x4249/((x4250|x4251)>>x4252));

	if (t68 != 155U) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x4361 = 7U;
	static volatile uint32_t x4362 = UINT32_MAX;
	uint32_t x4363 = UINT32_MAX;
	uint16_t x4364 = 3U;
	uint32_t t69 = 2U;

	t69 = (x4361/((x4362|x4363)>>x4364));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x4401 = 1U;
	uint64_t x4402 = UINT64_MAX;
	volatile uint16_t x4403 = 5336U;
	static int16_t x4404 = 11;
	uint64_t t70 = 3554LLU;

	t70 = (x4401/((x4402|x4403)>>x4404));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x4425 = UINT32_MAX;
	volatile int16_t x4426 = 54;
	volatile uint32_t x4427 = UINT32_MAX;
	static uint8_t x4428 = 30U;
	uint32_t t71 = 1349296013U;

	t71 = (x4425/((x4426|x4427)>>x4428));

	if (t71 != 1431655765U) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x4476 = 10U;
	int64_t t72 = -362185451LL;

	t72 = (x4473/((x4474|x4475)>>x4476));

	if (t72 != 2199023779840LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x4529 = INT32_MIN;
	uint64_t x4530 = 5146889350310LLU;
	volatile uint16_t x4531 = 700U;
	volatile int16_t x4532 = 1;
	volatile uint64_t t73 = 3696803242208LLU;

	t73 = (x4529/((x4530|x4531)>>x4532));

	if (t73 != 7168113LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x4593 = INT8_MIN;
	uint8_t x4594 = 0U;
	volatile uint8_t x4596 = 3U;
	int32_t t74 = 0;

	t74 = (x4593/((x4594|x4595)>>x4596));

	if (t74 != -4) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x4693 = 8963615768LLU;
	int16_t x4694 = -467;
	uint64_t x4695 = 614LLU;
	uint8_t x4696 = 1U;
	static volatile uint64_t t75 = 392697224LLU;

	t75 = (x4693/((x4694|x4695)>>x4696));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x4725 = 382349LLU;
	uint16_t x4727 = 6230U;
	volatile int64_t x4728 = 2LL;
	uint64_t t76 = 271796185536LLU;

	t76 = (x4725/((x4726|x4727)>>x4728));

	if (t76 != 239LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x4737 = -1;
	int16_t x4738 = INT16_MIN;
	volatile uint32_t x4739 = UINT32_MAX;
	volatile uint16_t x4740 = 0U;
	volatile uint32_t t77 = 7648U;

	t77 = (x4737/((x4738|x4739)>>x4740));

	if (t77 != 1U) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x4793 = 12U;
	int16_t x4794 = 7;
	uint64_t t78 = 27331908713247233LLU;

	t78 = (x4793/((x4794|x4795)>>x4796));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x4802 = INT8_MAX;
	int16_t x4803 = INT16_MAX;
	int32_t x4804 = 5;
	volatile int32_t t79 = -1;

	t79 = (x4801/((x4802|x4803)>>x4804));

	if (t79 != 2099202) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x4853 = UINT32_MAX;
	uint16_t x4854 = 1891U;
	uint8_t x4856 = 2U;
	volatile uint32_t t80 = 249337U;

	t80 = (x4853/((x4854|x4855)>>x4856));

	if (t80 != 9042036U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x4888 = 12;
	volatile uint32_t t81 = 635083685U;

	t81 = (x4885/((x4886|x4887)>>x4888));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x4917 = UINT16_MAX;
	uint64_t x4918 = 169LLU;
	static uint32_t x4919 = 16742719U;
	int32_t x4920 = 3;
	static volatile uint64_t t82 = 401014726LLU;

	t82 = (x4917/((x4918|x4919)>>x4920));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x4929 = 13U;
	uint8_t x4930 = 11U;
	static int64_t x4931 = INT64_MAX;
	volatile int64_t t83 = 3LL;

	t83 = (x4929/((x4930|x4931)>>x4932));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x4962 = 512;
	int8_t x4963 = 11;
	volatile int64_t t84 = -222774LL;

	t84 = (x4961/((x4962|x4963)>>x4964));

	if (t84 != -2305843009213693952LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x5061 = -1;
	int8_t x5062 = -1;
	uint64_t x5063 = 839049750LLU;
	uint64_t t85 = 3240018753840LLU;

	t85 = (x5061/((x5062|x5063)>>x5064));

	if (t85 != 2LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x5199 = UINT32_MAX;
	volatile int8_t x5200 = 15;
	uint32_t t86 = 1811539U;

	t86 = (x5197/((x5198|x5199)>>x5200));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x5225 = INT16_MIN;
	volatile int64_t x5226 = INT64_MAX;
	uint8_t x5227 = 37U;
	int8_t x5228 = 6;
	volatile int64_t t87 = -8625LL;

	t87 = (x5225/((x5226|x5227)>>x5228));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x5289 = UINT16_MAX;
	static volatile int16_t x5290 = 427;
	int8_t x5291 = 14;
	int32_t t88 = 57156;

	t88 = (x5289/((x5290|x5291)>>x5292));

	if (t88 != 152) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x5318 = 26LLU;
	static uint16_t x5319 = 14247U;
	uint8_t x5320 = 1U;
	uint64_t t89 = 1LLU;

	t89 = (x5317/((x5318|x5319)>>x5320));

	if (t89 != 166LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x5357 = 0U;
	int8_t x5358 = 0;
	uint64_t x5359 = UINT64_MAX;
	static uint16_t x5360 = 19U;

	t90 = (x5357/((x5358|x5359)>>x5360));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x5409 = INT8_MAX;
	int64_t x5410 = 1480337LL;
	uint16_t x5412 = 23U;
	static uint64_t t91 = 5392099553331LLU;

	t91 = (x5409/((x5410|x5411)>>x5412));

	if (t91 != 127LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x5443 = -1;
	uint64_t x5444 = 1LLU;
	uint32_t t92 = 2056876487U;

	t92 = (x5441/((x5442|x5443)>>x5444));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x5466 = 15;
	static int64_t x5467 = 250932439797LL;
	uint16_t x5468 = 3U;
	volatile int64_t t93 = -15084030765LL;

	t93 = (x5465/((x5466|x5467)>>x5468));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x5529 = INT16_MAX;
	uint32_t x5530 = UINT32_MAX;
	int8_t x5531 = -55;
	static int16_t x5532 = 4;
	uint32_t t94 = 213U;

	t94 = (x5529/((x5530|x5531)>>x5532));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x5601 = INT16_MAX;
	static uint64_t x5602 = 1006021431380743925LLU;
	uint16_t x5603 = 11817U;
	int32_t x5604 = 29;

	t95 = (x5601/((x5602|x5603)>>x5604));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x5613 = 16067U;
	volatile uint32_t x5614 = 367804775U;
	uint16_t x5616 = 1U;
	volatile uint32_t t96 = 2189665U;

	t96 = (x5613/((x5614|x5615)>>x5616));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint64_t x5637 = 3142LLU;
	static uint8_t x5638 = 7U;
	static uint64_t t97 = 32966201784LLU;

	t97 = (x5637/((x5638|x5639)>>x5640));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x5701 = INT8_MAX;
	static volatile uint16_t x5702 = 314U;
	uint16_t x5703 = 251U;
	static uint8_t x5704 = 0U;
	int32_t t98 = -116203;

	t98 = (x5701/((x5702|x5703)>>x5704));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x5813 = -1;
	volatile uint16_t x5814 = 0U;
	static uint8_t x5815 = 41U;
	int64_t x5816 = 2LL;
	volatile int32_t t99 = 4094116;

	t99 = (x5813/((x5814|x5815)>>x5816));

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

