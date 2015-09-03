#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x21 = INT64_MIN;
int32_t x31 = 12;
volatile int64_t t2 = -86583LL;
int16_t x142 = INT16_MAX;
uint8_t x143 = 0U;
volatile int32_t x285 = INT32_MIN;
volatile uint32_t t6 = 104U;
uint64_t x397 = UINT64_MAX;
uint32_t x430 = 2U;
uint32_t x433 = UINT32_MAX;
uint8_t x479 = 12U;
static int16_t x514 = INT16_MIN;
static uint8_t x515 = 11U;
uint16_t x566 = UINT16_MAX;
int8_t x605 = INT8_MIN;
static volatile int32_t x720 = INT32_MIN;
int32_t x724 = INT32_MIN;
volatile int64_t x813 = INT64_MIN;
static int64_t t22 = 8186LL;
int64_t x928 = INT64_MIN;
static uint64_t t23 = 112064841045LLU;
int16_t x952 = INT16_MIN;
uint8_t x983 = 23U;
static uint64_t x984 = 1777292432329LLU;
static uint32_t x1014 = 0U;
uint16_t x1060 = 3429U;
int8_t x1064 = INT8_MIN;
static volatile uint64_t t29 = 564654362LLU;
static int8_t x1135 = 1;
uint8_t x1136 = 8U;
static uint64_t x1149 = 37887LLU;
uint8_t x1150 = 0U;
static int16_t x1329 = -1;
uint64_t x1349 = 116LLU;
uint8_t x1351 = 1U;
volatile int32_t x1352 = -1;
static int8_t x1469 = INT8_MIN;
uint32_t x1472 = 438U;
static int32_t t39 = -78722;
int16_t x1517 = INT16_MIN;
static uint32_t x1520 = 2054U;
volatile int8_t x1606 = INT8_MAX;
uint16_t x1608 = 6U;
uint64_t x1609 = 4LLU;
static volatile uint64_t t42 = 520403954105178759LLU;
static uint8_t x1649 = 61U;
uint32_t x1922 = UINT32_MAX;
uint32_t x2091 = 38U;
int8_t x2092 = INT8_MIN;
uint8_t x2119 = 6U;
static volatile int32_t t49 = -717442107;
uint8_t x2123 = 7U;
static volatile uint64_t t51 = 801071820468577087LLU;
volatile uint16_t x2315 = 20U;
volatile int32_t x2357 = 400390;
int64_t x2405 = 3997590052486778647LL;
static uint8_t x2483 = 4U;
int64_t x2548 = INT64_MAX;
uint16_t x2599 = 15U;
uint64_t x2791 = 10LLU;
uint32_t x2808 = 6127U;
uint8_t x2914 = UINT8_MAX;
int32_t x2915 = 0;
static uint32_t x3082 = 853799U;
int32_t x3084 = INT32_MAX;
volatile int64_t x3104 = 765339262810279255LL;
static volatile uint32_t x3122 = 305166957U;
int8_t x3142 = INT8_MAX;
uint8_t x3334 = 110U;
uint64_t x3335 = 0LLU;
uint64_t t76 = 1232020138LLU;
int32_t x3365 = INT32_MAX;
volatile int8_t x3433 = -1;
uint32_t x3435 = 5U;
static int32_t x3545 = INT32_MAX;
static int64_t x3546 = 38927040373953646LL;
int32_t x3686 = INT32_MIN;
static volatile int16_t x3687 = 25;
volatile int64_t x3879 = 35LL;
int16_t x3880 = -27;
volatile int64_t t82 = 16490429LL;
static uint64_t x4053 = UINT64_MAX;
int8_t x4115 = 1;
volatile int16_t x4136 = INT16_MAX;
volatile uint32_t t88 = 0U;
int64_t x4325 = INT64_MAX;
uint16_t x4326 = 371U;
int64_t x4328 = INT64_MIN;
uint64_t x4378 = UINT64_MAX;
int16_t x4380 = -247;
uint64_t x4392 = UINT64_MAX;
uint64_t t96 = 2439651780487918LLU;
volatile int16_t x4479 = 0;
static int64_t x4533 = -1LL;


void f0(void) {
	volatile int64_t x22 = -1220459138438727LL;
	static uint8_t x23 = 11U;
	uint64_t x24 = 914LLU;
	volatile uint64_t t0 = 1LLU;

	t0 = (((x21^x22)>>x23)%x24);

	if (t0 != 877LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x29 = INT32_MAX;
	static uint32_t x30 = 2U;
	volatile int32_t x32 = INT32_MIN;
	volatile uint32_t t1 = 566994U;

	t1 = (((x29^x30)>>x31)%x32);

	if (t1 != 524287U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x37 = 0U;
	int64_t x38 = 253070750254505LL;
	static uint16_t x39 = 0U;
	volatile int8_t x40 = INT8_MAX;

	t2 = (((x37^x38)>>x39)%x40);

	if (t2 != 15LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x141 = 10789;
	static uint8_t x144 = 1U;
	int32_t t3 = -4;

	t3 = (((x141^x142)>>x143)%x144);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x193 = INT16_MIN;
	volatile int32_t x194 = INT32_MIN;
	volatile int16_t x195 = 19;
	int8_t x196 = INT8_MAX;
	static volatile int32_t t4 = -425;

	t4 = (((x193^x194)>>x195)%x196);

	if (t4 != 31) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x205 = -226;
	static int16_t x206 = -1462;
	int16_t x207 = 1;
	uint64_t x208 = 3834LLU;
	volatile uint64_t t5 = 46733887323974683LLU;

	t5 = (((x205^x206)>>x207)%x208);

	if (t5 != 682LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x286 = 1028U;
	static uint8_t x287 = 0U;
	static int8_t x288 = -1;

	t6 = (((x285^x286)>>x287)%x288);

	if (t6 != 2147484676U) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x377 = 40U;
	uint16_t x378 = 10U;
	volatile uint8_t x379 = 14U;
	int64_t x380 = -582420510LL;
	static int64_t t7 = -7LL;

	t7 = (((x377^x378)>>x379)%x380);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x389 = INT32_MIN;
	int16_t x390 = -1066;
	int8_t x391 = 0;
	uint32_t x392 = UINT32_MAX;
	volatile uint32_t t8 = 40U;

	t8 = (((x389^x390)>>x391)%x392);

	if (t8 != 2147482582U) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x398 = 9589U;
	static volatile uint8_t x399 = 25U;
	volatile int32_t x400 = INT32_MAX;
	uint64_t t9 = 158607229093693234LLU;

	t9 = (((x397^x398)>>x399)%x400);

	if (t9 != 255LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x429 = 66035428LLU;
	static volatile int8_t x431 = 27;
	int16_t x432 = INT16_MIN;
	uint64_t t10 = 142281442LLU;

	t10 = (((x429^x430)>>x431)%x432);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x434 = 2;
	uint16_t x435 = 3U;
	static volatile int8_t x436 = -1;
	volatile uint32_t t11 = 86767324U;

	t11 = (((x433^x434)>>x435)%x436);

	if (t11 != 536870911U) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x477 = UINT8_MAX;
	static volatile uint64_t x478 = 348LLU;
	uint32_t x480 = 1621U;
	volatile uint64_t t12 = 2572837839479843964LLU;

	t12 = (((x477^x478)>>x479)%x480);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x513 = 130532550U;
	int64_t x516 = INT64_MIN;
	volatile int64_t t13 = 274360404138220419LL;

	t13 = (((x513^x514)>>x515)%x516);

	if (t13 != 2033416LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x533 = 49;
	static uint8_t x534 = 7U;
	int64_t x535 = 3LL;
	int32_t x536 = -1;
	volatile int32_t t14 = 14764;

	t14 = (((x533^x534)>>x535)%x536);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x565 = 10386407;
	volatile uint16_t x567 = 11U;
	static volatile int16_t x568 = INT16_MIN;
	volatile int32_t t15 = 6986808;

	t15 = (((x565^x566)>>x567)%x568);

	if (t15 != 5072) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x606 = INT8_MIN;
	static volatile uint8_t x607 = 25U;
	int8_t x608 = -27;
	volatile int32_t t16 = 21024;

	t16 = (((x605^x606)>>x607)%x608);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x621 = INT64_MIN;
	volatile int32_t x622 = INT32_MIN;
	int8_t x623 = 3;
	int32_t x624 = -2;
	int64_t t17 = -9867614575204721LL;

	t17 = (((x621^x622)>>x623)%x624);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x717 = INT8_MAX;
	int16_t x718 = 11;
	static int8_t x719 = 0;
	int32_t t18 = 373927;

	t18 = (((x717^x718)>>x719)%x720);

	if (t18 != 116) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x721 = INT64_MAX;
	static uint64_t x722 = UINT64_MAX;
	volatile uint8_t x723 = 41U;
	uint64_t t19 = 11LLU;

	t19 = (((x721^x722)>>x723)%x724);

	if (t19 != 4194304LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x769 = -1;
	volatile uint32_t x770 = UINT32_MAX;
	volatile uint8_t x771 = 5U;
	int64_t x772 = 199038065LL;
	volatile int64_t t20 = -456644159454LL;

	t20 = (((x769^x770)>>x771)%x772);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x797 = 20U;
	static int16_t x798 = -1;
	volatile uint32_t x799 = 5U;
	static volatile int32_t x800 = -13282;
	uint32_t t21 = 3U;

	t21 = (((x797^x798)>>x799)%x800);

	if (t21 != 134217727U) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x814 = INT16_MIN;
	static uint16_t x815 = 15U;
	int16_t x816 = INT16_MAX;

	t22 = (((x813^x814)>>x815)%x816);

	if (t22 != 7LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x925 = INT32_MAX;
	volatile uint64_t x926 = UINT64_MAX;
	volatile uint16_t x927 = 19U;

	t23 = (((x925^x926)>>x927)%x928);

	if (t23 != 35184372084736LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x949 = INT16_MIN;
	static volatile int16_t x950 = -1;
	int32_t x951 = 2;
	int32_t t24 = 61954;

	t24 = (((x949^x950)>>x951)%x952);

	if (t24 != 8191) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x981 = INT8_MIN;
	static int64_t x982 = -233536477100LL;
	volatile uint64_t t25 = 339208701653LLU;

	t25 = (((x981^x982)>>x983)%x984);

	if (t25 != 27839LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x1013 = INT16_MAX;
	uint8_t x1015 = 1U;
	uint8_t x1016 = UINT8_MAX;
	uint32_t t26 = 7004972U;

	t26 = (((x1013^x1014)>>x1015)%x1016);

	if (t26 != 63U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x1033 = -18;
	static uint32_t x1034 = 6U;
	uint64_t x1035 = 11LLU;
	volatile int32_t x1036 = -1;
	static uint32_t t27 = 15132U;

	t27 = (((x1033^x1034)>>x1035)%x1036);

	if (t27 != 2097151U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x1057 = UINT8_MAX;
	int32_t x1058 = INT32_MAX;
	int16_t x1059 = 1;
	volatile int32_t t28 = 331152;

	t28 = (((x1057^x1058)>>x1059)%x1060);

	if (t28 != 1781) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1061 = UINT64_MAX;
	static volatile int16_t x1062 = INT16_MIN;
	int8_t x1063 = 39;

	t29 = (((x1061^x1062)>>x1063)%x1064);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1117 = 214614LLU;
	volatile uint8_t x1118 = 7U;
	volatile int16_t x1119 = 31;
	static int32_t x1120 = -1;
	static volatile uint64_t t30 = 1574830LLU;

	t30 = (((x1117^x1118)>>x1119)%x1120);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1133 = 38U;
	static volatile int8_t x1134 = INT8_MAX;
	volatile int32_t t31 = 22068;

	t31 = (((x1133^x1134)>>x1135)%x1136);

	if (t31 != 4) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1151 = 0;
	volatile int32_t x1152 = INT32_MAX;
	volatile uint64_t t32 = 171415054444545254LLU;

	t32 = (((x1149^x1150)>>x1151)%x1152);

	if (t32 != 37887LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x1201 = 11U;
	static volatile uint64_t x1202 = 385166LLU;
	uint16_t x1203 = 0U;
	int8_t x1204 = INT8_MAX;
	volatile uint64_t t33 = 2032938304271657879LLU;

	t33 = (((x1201^x1202)>>x1203)%x1204);

	if (t33 != 93LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint64_t x1309 = 963801999327915632LLU;
	static uint8_t x1310 = UINT8_MAX;
	int8_t x1311 = 1;
	volatile uint64_t x1312 = 56595LLU;
	volatile uint64_t t34 = 2648LLU;

	t34 = (((x1309^x1310)>>x1311)%x1312);

	if (t34 != 51316LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x1330 = 55U;
	volatile uint8_t x1331 = 5U;
	int16_t x1332 = INT16_MIN;
	static volatile uint32_t t35 = 594U;

	t35 = (((x1329^x1330)>>x1331)%x1332);

	if (t35 != 134217726U) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x1350 = INT32_MIN;
	uint64_t t36 = 372171LLU;

	t36 = (((x1349^x1350)>>x1351)%x1352);

	if (t36 != 9223372035781034042LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x1385 = 80365643861912LLU;
	uint8_t x1386 = UINT8_MAX;
	volatile uint8_t x1387 = 21U;
	static volatile int64_t x1388 = INT64_MAX;
	uint64_t t37 = 1716LLU;

	t37 = (((x1385^x1386)>>x1387)%x1388);

	if (t37 != 38321325LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1470 = INT32_MIN;
	uint32_t x1471 = 6U;
	static uint32_t t38 = 2219U;

	t38 = (((x1469^x1470)>>x1471)%x1472);

	if (t38 != 126U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1481 = INT32_MAX;
	static int8_t x1482 = INT8_MAX;
	uint8_t x1483 = 5U;
	uint8_t x1484 = UINT8_MAX;

	t39 = (((x1481^x1482)>>x1483)%x1484);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint64_t x1518 = 1651LLU;
	volatile uint16_t x1519 = 8U;
	volatile uint64_t t40 = 863193473658717473LLU;

	t40 = (((x1517^x1518)>>x1519)%x1520);

	if (t40 != 758LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x1605 = 0U;
	int8_t x1607 = 2;
	volatile int32_t t41 = -83129;

	t41 = (((x1605^x1606)>>x1607)%x1608);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x1610 = -1;
	volatile uint16_t x1611 = 1U;
	int16_t x1612 = 828;

	t42 = (((x1609^x1610)>>x1611)%x1612);

	if (t42 != 437LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x1650 = UINT32_MAX;
	static int8_t x1651 = 0;
	volatile int8_t x1652 = -1;
	static uint32_t t43 = 89463U;

	t43 = (((x1649^x1650)>>x1651)%x1652);

	if (t43 != 4294967234U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x1661 = INT16_MAX;
	static int8_t x1662 = 5;
	static uint8_t x1663 = 14U;
	uint32_t x1664 = 6136U;
	volatile uint32_t t44 = 60U;

	t44 = (((x1661^x1662)>>x1663)%x1664);

	if (t44 != 1U) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x1725 = 4611U;
	volatile int16_t x1726 = -1;
	volatile uint16_t x1727 = 2U;
	static int64_t x1728 = -1LL;
	volatile int64_t t45 = -63055080176234257LL;

	t45 = (((x1725^x1726)>>x1727)%x1728);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x1833 = 95U;
	int32_t x1834 = 120737;
	int8_t x1835 = 6;
	static uint32_t x1836 = UINT32_MAX;
	static uint32_t t46 = 66436U;

	t46 = (((x1833^x1834)>>x1835)%x1836);

	if (t46 != 1887U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x1921 = INT8_MIN;
	uint32_t x1923 = 0U;
	uint16_t x1924 = 345U;
	volatile uint32_t t47 = 477U;

	t47 = (((x1921^x1922)>>x1923)%x1924);

	if (t47 != 127U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x2089 = INT64_MIN;
	uint64_t x2090 = 1038652097670830LLU;
	uint64_t t48 = 26031087LLU;

	t48 = (((x2089^x2090)>>x2091)%x2092);

	if (t48 != 33558210LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x2117 = INT32_MIN;
	static int32_t x2118 = -833690;
	static int16_t x2120 = -19;

	t49 = (((x2117^x2118)>>x2119)%x2120);

	if (t49 != 2) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int64_t x2121 = INT64_MIN;
	int64_t x2122 = INT64_MIN;
	volatile uint64_t x2124 = 3324628291337779LLU;
	volatile uint64_t t50 = 10LLU;

	t50 = (((x2121^x2122)>>x2123)%x2124);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x2173 = 47321500879580LLU;
	int8_t x2174 = -1;
	int16_t x2175 = 51;
	uint32_t x2176 = 5789U;

	t51 = (((x2173^x2174)>>x2175)%x2176);

	if (t51 != 2402LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x2269 = UINT64_MAX;
	volatile uint32_t x2270 = 823006U;
	uint16_t x2271 = 3U;
	uint16_t x2272 = UINT16_MAX;
	uint64_t t52 = 12411LLU;

	t52 = (((x2269^x2270)>>x2271)%x2272);

	if (t52 != 36386LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x2313 = -84389;
	uint64_t x2314 = UINT64_MAX;
	int8_t x2316 = INT8_MIN;
	uint64_t t53 = 1985798258500LLU;

	t53 = (((x2313^x2314)>>x2315)%x2316);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x2358 = UINT16_MAX;
	int8_t x2359 = 1;
	int32_t x2360 = INT32_MIN;
	int32_t t54 = -528491;

	t54 = (((x2357^x2358)>>x2359)%x2360);

	if (t54 != 225788) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x2406 = 4473576247952LLU;
	volatile int8_t x2407 = 0;
	uint64_t x2408 = 3765LLU;
	uint64_t t55 = 11322438682223092LLU;

	t55 = (((x2405^x2406)>>x2407)%x2408);

	if (t55 != 1136LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x2409 = 13255004LLU;
	volatile uint64_t x2410 = 111836402642LLU;
	static int64_t x2411 = 1LL;
	volatile int8_t x2412 = INT8_MIN;
	uint64_t t56 = 4870456884256LLU;

	t56 = (((x2409^x2410)>>x2411)%x2412);

	if (t56 != 55911721287LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x2433 = 9;
	int64_t x2434 = 362736LL;
	uint16_t x2435 = 30U;
	int64_t x2436 = INT64_MAX;
	volatile int64_t t57 = -24LL;

	t57 = (((x2433^x2434)>>x2435)%x2436);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x2481 = INT32_MAX;
	uint32_t x2482 = 459195838U;
	volatile int32_t x2484 = -1;
	uint32_t t58 = 13U;

	t58 = (((x2481^x2482)>>x2483)%x2484);

	if (t58 != 105517988U) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x2485 = -1;
	int16_t x2486 = -1;
	static int8_t x2487 = 0;
	static int32_t x2488 = -1;
	volatile int32_t t59 = -6347;

	t59 = (((x2485^x2486)>>x2487)%x2488);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x2545 = -1815591;
	int8_t x2546 = -1;
	uint8_t x2547 = 0U;
	volatile int64_t t60 = -3315989LL;

	t60 = (((x2545^x2546)>>x2547)%x2548);

	if (t60 != 1815590LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x2553 = -25950955211LL;
	int64_t x2554 = INT64_MIN;
	int32_t x2555 = 1;
	volatile int32_t x2556 = -318;
	volatile int64_t t61 = 6905LL;

	t61 = (((x2553^x2554)>>x2555)%x2556);

	if (t61 != 166LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x2597 = INT64_MAX;
	volatile int8_t x2598 = INT8_MAX;
	int8_t x2600 = -1;
	volatile int64_t t62 = -2150370445115167LL;

	t62 = (((x2597^x2598)>>x2599)%x2600);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x2637 = UINT8_MAX;
	uint8_t x2638 = UINT8_MAX;
	uint64_t x2639 = 3LLU;
	int8_t x2640 = INT8_MIN;
	int32_t t63 = -7;

	t63 = (((x2637^x2638)>>x2639)%x2640);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x2765 = 11352821304158LLU;
	int64_t x2766 = INT64_MIN;
	static volatile uint8_t x2767 = 20U;
	int8_t x2768 = 3;
	static uint64_t t64 = 243420646734LLU;

	t64 = (((x2765^x2766)>>x2767)%x2768);

	if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x2789 = INT16_MIN;
	int32_t x2790 = -430591;
	static volatile int64_t x2792 = INT64_MIN;
	int64_t t65 = -27058275686594155LL;

	t65 = (((x2789^x2790)>>x2791)%x2792);

	if (t65 != 443LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x2805 = -5;
	static int64_t x2806 = -652851LL;
	uint8_t x2807 = 0U;
	volatile int64_t t66 = -26LL;

	t66 = (((x2805^x2806)>>x2807)%x2808);

	if (t66 != 3392LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x2913 = INT32_MAX;
	static int8_t x2916 = INT8_MIN;
	int32_t t67 = 1;

	t67 = (((x2913^x2914)>>x2915)%x2916);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x2929 = -220;
	static uint64_t x2930 = 9LLU;
	int16_t x2931 = 0;
	int64_t x2932 = -1LL;
	static volatile uint64_t t68 = 342936LLU;

	t68 = (((x2929^x2930)>>x2931)%x2932);

	if (t68 != 18446744073709551405LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x3077 = 15U;
	uint8_t x3078 = 10U;
	uint8_t x3079 = 11U;
	static volatile int64_t x3080 = INT64_MIN;
	static int64_t t69 = -248357LL;

	t69 = (((x3077^x3078)>>x3079)%x3080);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x3081 = UINT32_MAX;
	volatile int8_t x3083 = 7;
	uint32_t t70 = 17U;

	t70 = (((x3081^x3082)>>x3083)%x3084);

	if (t70 != 33547761U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x3101 = INT32_MAX;
	uint16_t x3102 = 14U;
	uint32_t x3103 = 12U;
	volatile int64_t t71 = -1792708831827383382LL;

	t71 = (((x3101^x3102)>>x3103)%x3104);

	if (t71 != 524287LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x3121 = INT8_MAX;
	static uint8_t x3123 = 1U;
	uint16_t x3124 = 1781U;
	uint32_t t72 = 50U;

	t72 = (((x3121^x3122)>>x3123)%x3124);

	if (t72 != 1601U) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x3141 = 17U;
	uint8_t x3143 = 2U;
	int32_t x3144 = 765;
	uint32_t t73 = 8018488U;

	t73 = (((x3141^x3142)>>x3143)%x3144);

	if (t73 != 27U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x3149 = INT32_MAX;
	uint64_t x3150 = 9207310940394896149LLU;
	uint16_t x3151 = 0U;
	volatile uint32_t x3152 = 8U;
	static volatile uint64_t t74 = 2358818933575941746LLU;

	t74 = (((x3149^x3150)>>x3151)%x3152);

	if (t74 != 2LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x3169 = -1LL;
	int32_t x3170 = INT32_MIN;
	static uint64_t x3171 = 2LLU;
	static int64_t x3172 = INT64_MAX;
	static volatile int64_t t75 = 3586535963066050LL;

	t75 = (((x3169^x3170)>>x3171)%x3172);

	if (t75 != 536870911LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x3333 = UINT8_MAX;
	uint64_t x3336 = UINT64_MAX;

	t76 = (((x3333^x3334)>>x3335)%x3336);

	if (t76 != 145LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x3366 = UINT64_MAX;
	uint16_t x3367 = 1U;
	int64_t x3368 = INT64_MIN;
	volatile uint64_t t77 = 84957935836179LLU;

	t77 = (((x3365^x3366)>>x3367)%x3368);

	if (t77 != 9223372035781033984LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x3434 = INT8_MIN;
	int64_t x3436 = INT64_MAX;
	int64_t t78 = 1757879624398LL;

	t78 = (((x3433^x3434)>>x3435)%x3436);

	if (t78 != 3LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x3547 = 12;
	int64_t x3548 = INT64_MAX;
	volatile int64_t t79 = 78940780525167LL;

	t79 = (((x3545^x3546)>>x3547)%x3548);

	if (t79 != 9503671723430LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x3685 = -1;
	int8_t x3688 = INT8_MIN;
	static volatile int32_t t80 = 86880;

	t80 = (((x3685^x3686)>>x3687)%x3688);

	if (t80 != 63) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint32_t x3861 = UINT32_MAX;
	uint64_t x3862 = UINT64_MAX;
	uint8_t x3863 = 18U;
	uint64_t x3864 = UINT64_MAX;
	uint64_t t81 = 858LLU;

	t81 = (((x3861^x3862)>>x3863)%x3864);

	if (t81 != 70368744161280LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x3877 = UINT16_MAX;
	int64_t x3878 = INT64_MAX;

	t82 = (((x3877^x3878)>>x3879)%x3880);

	if (t82 != 24LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x4021 = UINT8_MAX;
	volatile uint64_t x4022 = 640599159LLU;
	static uint16_t x4023 = 11U;
	int64_t x4024 = 1LL;
	volatile uint64_t t83 = 10918390472517LLU;

	t83 = (((x4021^x4022)>>x4023)%x4024);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x4025 = 6U;
	uint64_t x4026 = 668820839915702LLU;
	uint8_t x4027 = 3U;
	static uint64_t x4028 = 1602666LLU;
	uint64_t t84 = 17150929961652LLU;

	t84 = (((x4025^x4026)>>x4027)%x4028);

	if (t84 != 1077934LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x4054 = INT32_MAX;
	static uint16_t x4055 = 21U;
	static int8_t x4056 = 1;
	volatile uint64_t t85 = 29439LLU;

	t85 = (((x4053^x4054)>>x4055)%x4056);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x4077 = INT64_MAX;
	static uint16_t x4078 = 0U;
	uint8_t x4079 = 18U;
	static uint64_t x4080 = UINT64_MAX;
	volatile uint64_t t86 = 451LLU;

	t86 = (((x4077^x4078)>>x4079)%x4080);

	if (t86 != 35184372088831LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x4113 = INT64_MIN;
	int16_t x4114 = -1;
	uint16_t x4116 = 387U;
	volatile int64_t t87 = -9LL;

	t87 = (((x4113^x4114)>>x4115)%x4116);

	if (t87 != 192LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x4133 = -6;
	volatile uint32_t x4134 = UINT32_MAX;
	int16_t x4135 = 15;

	t88 = (((x4133^x4134)>>x4135)%x4136);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x4189 = 355174640U;
	int8_t x4190 = INT8_MAX;
	int8_t x4191 = 0;
	int16_t x4192 = INT16_MIN;
	uint32_t t89 = 793299730U;

	t89 = (((x4189^x4190)>>x4191)%x4192);

	if (t89 != 355174543U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x4197 = INT8_MIN;
	static int8_t x4198 = INT8_MIN;
	uint32_t x4199 = 0U;
	int16_t x4200 = INT16_MAX;
	volatile int32_t t90 = -8069;

	t90 = (((x4197^x4198)>>x4199)%x4200);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x4285 = INT32_MAX;
	int8_t x4286 = INT8_MAX;
	int8_t x4287 = 0;
	volatile uint16_t x4288 = UINT16_MAX;
	static int32_t t91 = -6248459;

	t91 = (((x4285^x4286)>>x4287)%x4288);

	if (t91 != 32640) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x4327 = 8U;
	volatile int64_t t92 = -356749726436301565LL;

	t92 = (((x4325^x4326)>>x4327)%x4328);

	if (t92 != 36028797018963966LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x4353 = -12;
	int16_t x4354 = -24;
	static uint8_t x4355 = 31U;
	int16_t x4356 = 1;
	int32_t t93 = 51346;

	t93 = (((x4353^x4354)>>x4355)%x4356);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x4377 = -1;
	uint16_t x4379 = 4U;
	uint64_t t94 = 99978LLU;

	t94 = (((x4377^x4378)>>x4379)%x4380);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x4389 = 1193222U;
	volatile int16_t x4390 = INT16_MAX;
	uint8_t x4391 = 16U;
	static volatile uint64_t t95 = 8756LLU;

	t95 = (((x4389^x4390)>>x4391)%x4392);

	if (t95 != 18LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x4433 = INT32_MAX;
	volatile int64_t x4434 = INT64_MAX;
	uint16_t x4435 = 13U;
	volatile uint64_t x4436 = 33620385098095LLU;

	t96 = (((x4433^x4434)>>x4435)%x4436);

	if (t96 != 16427198343345LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x4465 = INT32_MAX;
	static int16_t x4466 = INT16_MAX;
	uint32_t x4467 = 10U;
	int16_t x4468 = 58;
	int32_t t97 = 30125227;

	t97 = (((x4465^x4466)>>x4467)%x4468);

	if (t97 != 14) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x4477 = 1118306U;
	uint8_t x4478 = 40U;
	uint16_t x4480 = 1403U;
	volatile uint32_t t98 = 131793934U;

	t98 = (((x4477^x4478)>>x4479)%x4480);

	if (t98 != 91U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x4534 = -1LL;
	uint8_t x4535 = 3U;
	int16_t x4536 = INT16_MIN;
	volatile int64_t t99 = -246945090878LL;

	t99 = (((x4533^x4534)>>x4535)%x4536);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

