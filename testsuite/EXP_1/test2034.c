#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x15 = INT32_MIN;
uint32_t x16 = 2U;
static uint8_t x90 = 11U;
uint64_t x235 = 7698284544LLU;
uint16_t x289 = 6890U;
uint16_t x292 = 3U;
static int64_t t5 = -34973707671144LL;
static uint64_t x404 = 0LLU;
static volatile uint64_t t7 = 13LLU;
int8_t x588 = 20;
int8_t x594 = -12;
volatile uint16_t x596 = 1U;
int64_t x650 = INT64_MIN;
static int64_t t13 = -29LL;
static uint8_t x837 = 0U;
volatile uint64_t t17 = 1865648181016123LLU;
uint16_t x877 = UINT16_MAX;
int16_t x878 = -2;
int16_t x906 = -3867;
int16_t x907 = -1;
int16_t x948 = 0;
static int8_t x1034 = INT8_MIN;
static int32_t x1035 = INT32_MAX;
uint8_t x1209 = 65U;
int16_t x1210 = INT16_MAX;
uint64_t x1251 = 5982594678405396569LLU;
int8_t x1252 = 2;
int8_t x1350 = 1;
static int16_t x1351 = 1;
static uint64_t t29 = 34593869907237488LLU;
uint8_t x1360 = 14U;
volatile int32_t x1377 = INT32_MAX;
int32_t x1379 = -1;
int8_t x1485 = INT8_MAX;
int8_t x1549 = -1;
int8_t x1552 = 4;
static volatile uint32_t x1578 = UINT32_MAX;
volatile uint32_t t36 = 108U;
volatile int64_t t38 = -104257934575203363LL;
int32_t x1803 = 6275;
static volatile int32_t x1841 = -14;
static int8_t x2061 = -26;
uint64_t t43 = 62985896827616801LLU;
int32_t x2078 = -11410;
int16_t x2204 = 11;
uint16_t x2262 = 9U;
int8_t x2355 = INT8_MAX;
volatile int64_t x2387 = 199642665LL;
volatile uint8_t x2408 = 0U;
uint8_t x2424 = 2U;
int32_t x2463 = INT32_MIN;
uint64_t x2549 = UINT64_MAX;
static volatile int16_t x2550 = -1;
volatile uint32_t x2552 = 1U;
uint64_t t55 = 116563962LLU;
uint32_t x2602 = 52U;
uint8_t x2604 = 5U;
uint32_t t56 = 92U;
uint8_t x2839 = 6U;
uint16_t x2867 = UINT16_MAX;
int64_t x2910 = -1LL;
int64_t x2962 = 61840763878411111LL;
uint64_t t62 = 1LLU;
int32_t x3098 = INT32_MIN;
uint64_t x3099 = 22759610LLU;
uint64_t t63 = 7LLU;
volatile int16_t x3106 = -1;
uint32_t t66 = 214405U;
static uint32_t x3171 = UINT32_MAX;
int8_t x3190 = INT8_MAX;
uint16_t x3191 = UINT16_MAX;
int64_t x3221 = INT64_MIN;
uint16_t x3223 = 15147U;
uint64_t t70 = 654670849433LLU;
volatile uint32_t x3323 = UINT32_MAX;
static volatile uint64_t t71 = 412384513LLU;
int8_t x3485 = 0;
volatile uint8_t x3534 = 6U;
volatile int64_t t78 = -11873875958LL;
volatile uint16_t x3603 = 26983U;
int32_t t79 = 123229;
volatile uint64_t x3665 = 1LLU;
int8_t x3667 = 1;
volatile uint64_t t82 = 4196357LLU;
static uint16_t x3712 = 1U;
int64_t t83 = -469031366714LL;
uint64_t x3726 = 4052794280320LLU;
static uint32_t t86 = 125932560U;
uint64_t x3863 = 703322487281LLU;
static volatile int8_t x3864 = 1;
uint32_t x3869 = 29078U;
int32_t x3871 = 139;
int8_t x3877 = INT8_MIN;
volatile int8_t x3878 = -5;
uint32_t x3880 = 28U;
uint16_t x3919 = UINT16_MAX;
uint16_t x3970 = UINT16_MAX;
static volatile int16_t x4028 = 1;
volatile uint8_t x4440 = 1U;
static uint32_t x4561 = 6U;


void f0(void) {
	int16_t x5 = INT16_MIN;
	uint16_t x6 = 55U;
	volatile uint32_t x7 = 1598515U;
	int8_t x8 = 29;
	volatile uint32_t t0 = 37583U;

	t0 = (((x5^x6)+x7)<<x8);

	if (t0 != 1073741824U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x13 = INT8_MAX;
	uint64_t x14 = UINT64_MAX;
	uint64_t t1 = 2683443475020LLU;

	t1 = (((x13^x14)+x15)<<x16);

	if (t1 != 18446744065119616512LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x17 = INT8_MIN;
	static uint64_t x18 = 127431LLU;
	static int64_t x19 = INT64_MIN;
	uint8_t x20 = 1U;
	uint64_t t2 = 409722845041LLU;

	t2 = (((x17^x18)+x19)<<x20);

	if (t2 != 18446744073709296782LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x89 = UINT32_MAX;
	int64_t x91 = -1739485LL;
	static int16_t x92 = 0;
	volatile int64_t t3 = 80035792120459603LL;

	t3 = (((x89^x90)+x91)<<x92);

	if (t3 != 4293227799LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x233 = -9366;
	volatile uint16_t x234 = 542U;
	uint16_t x236 = 16U;
	static uint64_t t4 = 1978854729316911LLU;

	t4 = (((x233^x234)+x235)<<x236);

	if (t4 != 504514129166336LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x290 = 1;
	int64_t x291 = -1LL;

	t5 = (((x289^x290)+x291)<<x292);

	if (t5 != 55120LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x401 = 52U;
	volatile uint16_t x402 = 6278U;
	static int16_t x403 = 1238;
	int32_t t6 = 7207881;

	t6 = (((x401^x402)+x403)<<x404);

	if (t6 != 7560) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int32_t x477 = INT32_MIN;
	int16_t x478 = -37;
	uint64_t x479 = 48349827540LLU;
	uint8_t x480 = 3U;

	t7 = (((x477^x478)+x479)<<x480);

	if (t7 != 403978489208LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x585 = 28385U;
	uint64_t x586 = 2199319LLU;
	volatile int8_t x587 = INT8_MAX;
	volatile uint64_t t8 = 17499982269789666LLU;

	t8 = (((x585^x586)+x587)<<x588);

	if (t8 != 2328531828736LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x593 = 5;
	uint8_t x595 = 20U;
	volatile int32_t t9 = -112;

	t9 = (((x593^x594)+x595)<<x596);

	if (t9 != 10) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x597 = 9957U;
	int32_t x598 = 188765;
	static int32_t x599 = INT32_MAX;
	static uint64_t x600 = 19LLU;
	uint32_t t10 = 13U;

	t10 = (((x597^x598)+x599)<<x600);

	if (t10 != 1035468800U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x617 = INT8_MIN;
	int16_t x618 = -6;
	int8_t x619 = -1;
	volatile uint8_t x620 = 6U;
	volatile int32_t t11 = -51092873;

	t11 = (((x617^x618)+x619)<<x620);

	if (t11 != 7744) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x649 = INT32_MIN;
	int8_t x651 = -47;
	int8_t x652 = 0;
	volatile int64_t t12 = -1009983662680LL;

	t12 = (((x649^x650)+x651)<<x652);

	if (t12 != 9223372034707292113LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x685 = 1762341226095342863LL;
	uint32_t x686 = 80U;
	uint32_t x687 = UINT32_MAX;
	uint8_t x688 = 0U;

	t13 = (((x685^x686)+x687)<<x688);

	if (t13 != 1762341230390310238LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x749 = INT32_MAX;
	volatile uint64_t x750 = 356993669416827LLU;
	int64_t x751 = INT64_MIN;
	int32_t x752 = 1;
	uint64_t t14 = 21771790LLU;

	t14 = (((x749^x750)+x751)<<x752);

	if (t14 != 713990502838536LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x838 = -11;
	uint16_t x839 = UINT16_MAX;
	uint8_t x840 = 1U;
	volatile int32_t t15 = 14547;

	t15 = (((x837^x838)+x839)<<x840);

	if (t15 != 131048) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x861 = -1;
	volatile uint64_t x862 = 10814674947LLU;
	int8_t x863 = -1;
	int32_t x864 = 58;
	uint64_t t16 = 0LLU;

	t16 = (((x861^x862)+x863)<<x864);

	if (t16 != 17005592192950992896LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x869 = INT32_MIN;
	volatile uint64_t x870 = 211LLU;
	uint16_t x871 = 0U;
	static uint8_t x872 = 5U;

	t17 = (((x869^x870)+x871)<<x872);

	if (t17 != 18446744004990081632LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint32_t x879 = 12969U;
	uint16_t x880 = 9U;
	volatile uint32_t t18 = 226050201U;

	t18 = (((x877^x878)+x879)<<x880);

	if (t18 != 4268053504U) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x905 = 139731U;
	static int8_t x908 = 21;
	uint32_t t19 = 28135049U;

	t19 = (((x905^x906)+x907)<<x908);

	if (t19 != 648019968U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x913 = INT8_MIN;
	uint8_t x914 = UINT8_MAX;
	static uint32_t x915 = 481U;
	uint8_t x916 = 7U;
	uint32_t t20 = 15588U;

	t20 = (((x913^x914)+x915)<<x916);

	if (t20 != 45056U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x945 = -10;
	int64_t x946 = -2408LL;
	volatile uint8_t x947 = 124U;
	static volatile int64_t t21 = 1495LL;

	t21 = (((x945^x946)+x947)<<x948);

	if (t21 != 2538LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x1033 = 162906U;
	static uint32_t x1036 = 9U;
	static volatile uint32_t t22 = 112973335U;

	t22 = (((x1033^x1034)+x1035)<<x1036);

	if (t22 != 4211585536U) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x1169 = UINT64_MAX;
	uint32_t x1170 = 89039U;
	int8_t x1171 = -1;
	volatile int8_t x1172 = 26;
	volatile uint64_t t23 = 9510849642639814LLU;

	t23 = (((x1169^x1170)+x1171)<<x1172);

	if (t23 != 18446738098269192192LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x1211 = 167U;
	uint32_t x1212 = 2U;
	volatile int32_t t24 = 292;

	t24 = (((x1209^x1210)+x1211)<<x1212);

	if (t24 != 131476) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x1217 = INT8_MIN;
	int16_t x1218 = 6715;
	volatile uint64_t x1219 = 377640498LLU;
	int8_t x1220 = 15;
	static uint64_t t25 = 2448440118549LLU;

	t25 = (((x1217^x1218)+x1219)<<x1220);

	if (t25 != 12374303473664LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x1249 = 14366U;
	int16_t x1250 = -1;
	static uint64_t t26 = 139408318079LLU;

	t26 = (((x1249^x1250)+x1251)<<x1252);

	if (t26 != 5483634639911977192LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1265 = 183U;
	volatile int8_t x1266 = INT8_MAX;
	int32_t x1267 = 8166;
	int8_t x1268 = 1;
	volatile uint32_t t27 = 415U;

	t27 = (((x1265^x1266)+x1267)<<x1268);

	if (t27 != 16732U) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x1325 = UINT8_MAX;
	volatile int32_t x1326 = 13;
	int32_t x1327 = 717;
	volatile int16_t x1328 = 14;
	static volatile int32_t t28 = -462;

	t28 = (((x1325^x1326)+x1327)<<x1328);

	if (t28 != 15712256) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint64_t x1349 = UINT64_MAX;
	int16_t x1352 = 2;

	t29 = (((x1349^x1350)+x1351)<<x1352);

	if (t29 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x1357 = INT8_MAX;
	int8_t x1358 = INT8_MIN;
	volatile uint64_t x1359 = 4568441LLU;
	uint64_t t30 = 49963965347775LLU;

	t30 = (((x1357^x1358)+x1359)<<x1360);

	if (t30 != 74849320960LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x1369 = 121241812838LLU;
	static int64_t x1370 = -1LL;
	int64_t x1371 = -1LL;
	uint8_t x1372 = 2U;
	uint64_t t31 = 3550394127531487LLU;

	t31 = (((x1369^x1370)+x1371)<<x1372);

	if (t31 != 18446743588742300256LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x1378 = 3554LLU;
	uint8_t x1380 = 13U;
	uint64_t t32 = 0LLU;

	t32 = (((x1377^x1378)+x1379)<<x1380);

	if (t32 != 17592156913664LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint64_t x1486 = UINT64_MAX;
	int32_t x1487 = INT32_MIN;
	static uint16_t x1488 = 6U;
	static uint64_t t33 = 3002241396042LLU;

	t33 = (((x1485^x1486)+x1487)<<x1488);

	if (t33 != 18446743936270589952LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1541 = -1LL;
	static int16_t x1542 = -9;
	uint64_t x1543 = 26878731256089LLU;
	static int8_t x1544 = 1;
	volatile uint64_t t34 = 49291206LLU;

	t34 = (((x1541^x1542)+x1543)<<x1544);

	if (t34 != 53757462512194LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x1550 = -1;
	int16_t x1551 = INT16_MAX;
	int32_t t35 = -655;

	t35 = (((x1549^x1550)+x1551)<<x1552);

	if (t35 != 524272) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x1577 = 1;
	uint16_t x1579 = UINT16_MAX;
	int8_t x1580 = 0;

	t36 = (((x1577^x1578)+x1579)<<x1580);

	if (t36 != 65533U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1769 = INT64_MAX;
	volatile int8_t x1770 = 0;
	volatile uint64_t x1771 = UINT64_MAX;
	uint8_t x1772 = 43U;
	volatile uint64_t t37 = 2LLU;

	t37 = (((x1769^x1770)+x1771)<<x1772);

	if (t37 != 18446726481523507200LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x1797 = INT32_MIN;
	volatile int16_t x1798 = -5;
	int64_t x1799 = -1LL;
	volatile uint8_t x1800 = 27U;

	t38 = (((x1797^x1798)+x1799)<<x1800);

	if (t38 != 288230375346405376LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x1801 = 1673017699LLU;
	static int8_t x1802 = -6;
	int16_t x1804 = 9;
	uint64_t t39 = 301213985654045LLU;

	t39 = (((x1801^x1802)+x1803)<<x1804);

	if (t39 != 18446743217127700480LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1817 = 3;
	uint32_t x1818 = 27225123U;
	int16_t x1819 = INT16_MIN;
	int16_t x1820 = 1;
	uint32_t t40 = 259995687U;

	t40 = (((x1817^x1818)+x1819)<<x1820);

	if (t40 != 54384704U) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x1842 = -23;
	uint32_t x1843 = 24U;
	uint16_t x1844 = 31U;
	uint32_t t41 = 2U;

	t41 = (((x1841^x1842)+x1843)<<x1844);

	if (t41 != 2147483648U) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x2013 = 2U;
	int8_t x2014 = 30;
	static uint32_t x2015 = 18127147U;
	volatile uint32_t x2016 = 14U;
	uint32_t t42 = 218020669U;

	t42 = (((x2013^x2014)+x2015)<<x2016);

	if (t42 != 642891776U) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x2062 = 18LLU;
	volatile int8_t x2063 = INT8_MIN;
	static uint8_t x2064 = 3U;

	t43 = (((x2061^x2062)+x2063)<<x2064);

	if (t43 != 18446744073709550496LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x2077 = -1;
	static uint32_t x2079 = UINT32_MAX;
	static volatile int8_t x2080 = 12;
	volatile uint32_t t44 = 16044U;

	t44 = (((x2077^x2078)+x2079)<<x2080);

	if (t44 != 46727168U) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x2161 = UINT32_MAX;
	int32_t x2162 = 3;
	int16_t x2163 = INT16_MIN;
	int8_t x2164 = 17;
	static volatile uint32_t t45 = 10405725U;

	t45 = (((x2161^x2162)+x2163)<<x2164);

	if (t45 != 4294443008U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x2201 = UINT64_MAX;
	int32_t x2202 = INT32_MAX;
	static uint32_t x2203 = UINT32_MAX;
	uint64_t t46 = 67973159LLU;

	t46 = (((x2201^x2202)+x2203)<<x2204);

	if (t46 != 4398046509056LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x2261 = INT8_MIN;
	volatile int32_t x2263 = INT32_MAX;
	int8_t x2264 = 0;
	static volatile int32_t t47 = -200;

	t47 = (((x2261^x2262)+x2263)<<x2264);

	if (t47 != 2147483528) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x2337 = INT32_MIN;
	int8_t x2338 = INT8_MIN;
	int8_t x2339 = INT8_MIN;
	int16_t x2340 = 0;
	static int32_t t48 = -222;

	t48 = (((x2337^x2338)+x2339)<<x2340);

	if (t48 != 2147483392) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x2353 = 6561453015928473485LLU;
	int8_t x2354 = 1;
	static volatile int8_t x2356 = 0;
	volatile uint64_t t49 = 167821LLU;

	t49 = (((x2353^x2354)+x2355)<<x2356);

	if (t49 != 6561453015928473611LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x2357 = UINT32_MAX;
	int8_t x2358 = INT8_MIN;
	static volatile uint32_t x2359 = 822283U;
	int16_t x2360 = 0;
	static volatile uint32_t t50 = 32235U;

	t50 = (((x2357^x2358)+x2359)<<x2360);

	if (t50 != 822410U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x2385 = 0;
	static volatile int16_t x2386 = INT16_MAX;
	static uint8_t x2388 = 0U;
	int64_t t51 = -111923442LL;

	t51 = (((x2385^x2386)+x2387)<<x2388);

	if (t51 != 199675432LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x2405 = INT64_MIN;
	static int32_t x2406 = -1;
	static int32_t x2407 = INT32_MIN;
	volatile int64_t t52 = 56289346710LL;

	t52 = (((x2405^x2406)+x2407)<<x2408);

	if (t52 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x2421 = 46U;
	uint64_t x2422 = 58LLU;
	int16_t x2423 = -112;
	uint64_t t53 = 51749294118998037LLU;

	t53 = (((x2421^x2422)+x2423)<<x2424);

	if (t53 != 18446744073709551248LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x2461 = -9;
	static uint64_t x2462 = UINT64_MAX;
	int8_t x2464 = 4;
	volatile uint64_t t54 = 42LLU;

	t54 = (((x2461^x2462)+x2463)<<x2464);

	if (t54 != 18446744039349813376LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x2551 = UINT64_MAX;

	t55 = (((x2549^x2550)+x2551)<<x2552);

	if (t55 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x2601 = -3923;
	int32_t x2603 = -316;

	t56 = (((x2601^x2602)+x2603)<<x2604);

	if (t56 != 4294831008U) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x2793 = 1875LLU;
	static int16_t x2794 = INT16_MAX;
	uint64_t x2795 = 11LLU;
	volatile uint8_t x2796 = 4U;
	uint64_t t57 = 1738888230537930251LLU;

	t57 = (((x2793^x2794)+x2795)<<x2796);

	if (t57 != 494448LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x2837 = INT8_MIN;
	int16_t x2838 = -1;
	int8_t x2840 = 0;
	static volatile int32_t t58 = -168521;

	t58 = (((x2837^x2838)+x2839)<<x2840);

	if (t58 != 133) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x2865 = 6U;
	static int16_t x2866 = INT16_MIN;
	uint8_t x2868 = 14U;
	uint32_t t59 = 88546550U;

	t59 = (((x2865^x2866)+x2867)<<x2868);

	if (t59 != 536952832U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x2909 = -1;
	static int16_t x2911 = 3850;
	int16_t x2912 = 0;
	static volatile int64_t t60 = -36647LL;

	t60 = (((x2909^x2910)+x2911)<<x2912);

	if (t60 != 3850LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x2961 = INT8_MAX;
	static uint64_t x2963 = 2973992LLU;
	volatile int16_t x2964 = 4;
	volatile uint64_t t61 = 6998LLU;

	t61 = (((x2961^x2962)+x2963)<<x2964);

	if (t61 != 989452222102160384LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x3065 = 18;
	volatile uint64_t x3066 = 10887592LLU;
	uint8_t x3067 = 1U;
	volatile int16_t x3068 = 52;

	t62 = (((x3065^x3066)+x3067)<<x3068);

	if (t62 != 1995094634925129728LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x3097 = INT8_MAX;
	uint8_t x3100 = 4U;

	t63 = (((x3097^x3098)+x3099)<<x3100);

	if (t63 != 18446744039713969040LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x3105 = INT16_MIN;
	uint64_t x3107 = 461638LLU;
	int8_t x3108 = 0;
	volatile uint64_t t64 = 11LLU;

	t64 = (((x3105^x3106)+x3107)<<x3108);

	if (t64 != 494405LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x3129 = INT16_MIN;
	static volatile int16_t x3130 = INT16_MIN;
	static uint64_t x3131 = 202605LLU;
	uint8_t x3132 = 18U;
	uint64_t t65 = 303878586385152LLU;

	t65 = (((x3129^x3130)+x3131)<<x3132);

	if (t65 != 53111685120LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x3149 = -1;
	uint32_t x3150 = 1U;
	int8_t x3151 = INT8_MAX;
	uint8_t x3152 = 21U;

	t66 = (((x3149^x3150)+x3151)<<x3152);

	if (t66 != 262144000U) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x3169 = 11U;
	int16_t x3170 = INT16_MAX;
	int8_t x3172 = 1;
	static uint32_t t67 = 1U;

	t67 = (((x3169^x3170)+x3171)<<x3172);

	if (t67 != 65510U) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x3189 = UINT8_MAX;
	static uint8_t x3192 = 4U;
	int32_t t68 = 325019;

	t68 = (((x3189^x3190)+x3191)<<x3192);

	if (t68 != 1050608) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x3222 = UINT64_MAX;
	uint8_t x3224 = 4U;
	static volatile uint64_t t69 = 433793LLU;

	t69 = (((x3221^x3222)+x3223)<<x3224);

	if (t69 != 242336LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x3245 = UINT64_MAX;
	int64_t x3246 = -11335532949749LL;
	volatile uint16_t x3247 = 11088U;
	uint8_t x3248 = 0U;

	t70 = (((x3245^x3246)+x3247)<<x3248);

	if (t70 != 11335532960836LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x3321 = UINT64_MAX;
	volatile int32_t x3322 = INT32_MIN;
	int16_t x3324 = 1;

	t71 = (((x3321^x3322)+x3323)<<x3324);

	if (t71 != 12884901884LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x3381 = 0U;
	volatile uint16_t x3382 = 11203U;
	uint8_t x3383 = 10U;
	int64_t x3384 = 2LL;
	volatile uint32_t t72 = 3868U;

	t72 = (((x3381^x3382)+x3383)<<x3384);

	if (t72 != 44852U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x3397 = INT8_MIN;
	int16_t x3398 = 0;
	volatile uint16_t x3399 = 1781U;
	int8_t x3400 = 1;
	volatile int32_t t73 = -116326349;

	t73 = (((x3397^x3398)+x3399)<<x3400);

	if (t73 != 3306) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x3401 = INT16_MIN;
	volatile int8_t x3402 = INT8_MIN;
	int16_t x3403 = 110;
	uint32_t x3404 = 8U;
	volatile int32_t t74 = 4426;

	t74 = (((x3401^x3402)+x3403)<<x3404);

	if (t74 != 8384000) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x3486 = INT8_MAX;
	int16_t x3487 = 1;
	uint16_t x3488 = 16U;
	int32_t t75 = 1;

	t75 = (((x3485^x3486)+x3487)<<x3488);

	if (t75 != 8388608) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x3533 = 1;
	uint8_t x3535 = 92U;
	static int32_t x3536 = 2;
	volatile int32_t t76 = -10239;

	t76 = (((x3533^x3534)+x3535)<<x3536);

	if (t76 != 396) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x3553 = 1339947435U;
	volatile uint16_t x3554 = 26894U;
	uint32_t x3555 = 1U;
	static int8_t x3556 = 2;
	volatile uint32_t t77 = 5U;

	t77 = (((x3553^x3554)+x3555)<<x3556);

	if (t77 != 1064714904U) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int8_t x3569 = INT8_MIN;
	int16_t x3570 = -1;
	volatile int64_t x3571 = -1LL;
	uint16_t x3572 = 0U;

	t78 = (((x3569^x3570)+x3571)<<x3572);

	if (t78 != 126LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x3601 = UINT8_MAX;
	static volatile int16_t x3602 = 77;
	static int64_t x3604 = 1LL;

	t79 = (((x3601^x3602)+x3603)<<x3604);

	if (t79 != 54322) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x3666 = -5867701;
	int8_t x3668 = 0;
	volatile uint64_t t80 = 74777521311955LLU;

	t80 = (((x3665^x3666)+x3667)<<x3668);

	if (t80 != 18446744073703683915LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x3689 = 32310574286LLU;
	static int64_t x3690 = INT64_MIN;
	static int64_t x3691 = -1LL;
	uint16_t x3692 = 8U;
	uint64_t t81 = 267363314825334695LLU;

	t81 = (((x3689^x3690)+x3691)<<x3692);

	if (t81 != 8271507016960LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x3701 = 19275190480154LLU;
	static int16_t x3702 = INT16_MIN;
	int16_t x3703 = INT16_MIN;
	uint16_t x3704 = 34U;

	t82 = (((x3701^x3702)+x3703)<<x3704);

	if (t82 != 10697936323634790400LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x3709 = -6535LL;
	volatile int16_t x3710 = INT16_MIN;
	uint8_t x3711 = 1U;

	t83 = (((x3709^x3710)+x3711)<<x3712);

	if (t83 != 52468LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x3725 = 1804673U;
	int32_t x3727 = INT32_MAX;
	volatile uint16_t x3728 = 1U;
	uint64_t t84 = 445344093115872LLU;

	t84 = (((x3725^x3726)+x3727)<<x3728);

	if (t84 != 8109880573952LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x3765 = -2LL;
	int16_t x3766 = INT16_MIN;
	int8_t x3767 = -1;
	int32_t x3768 = 3;
	int64_t t85 = -2291994840710354182LL;

	t85 = (((x3765^x3766)+x3767)<<x3768);

	if (t85 != 262120LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x3813 = -1;
	uint32_t x3814 = 7U;
	int16_t x3815 = INT16_MAX;
	int16_t x3816 = 0;

	t86 = (((x3813^x3814)+x3815)<<x3816);

	if (t86 != 32759U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x3817 = 1809124LLU;
	static volatile int64_t x3818 = INT64_MAX;
	int64_t x3819 = -1LL;
	uint8_t x3820 = 3U;
	volatile uint64_t t87 = 785855348LLU;

	t87 = (((x3817^x3818)+x3819)<<x3820);

	if (t87 != 18446744073695078608LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x3861 = -379;
	uint8_t x3862 = 3U;
	volatile uint64_t t88 = 2301072616809LLU;

	t88 = (((x3861^x3862)+x3863)<<x3864);

	if (t88 != 1406644973806LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x3870 = INT8_MIN;
	static uint64_t x3872 = 2LLU;
	static uint32_t t89 = 376817U;

	t89 = (((x3869^x3870)+x3871)<<x3872);

	if (t89 != 4294851204U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x3879 = 1873LL;
	volatile int64_t t90 = -188745LL;

	t90 = (((x3877^x3878)+x3879)<<x3880);

	if (t90 != 535797170176LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x3917 = 18;
	int8_t x3918 = INT8_MIN;
	uint16_t x3920 = 2U;
	int32_t t91 = -19;

	t91 = (((x3917^x3918)+x3919)<<x3920);

	if (t91 != 261700) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x3969 = INT8_MAX;
	static int32_t x3971 = 73688;
	volatile uint8_t x3972 = 0U;
	int32_t t92 = 292;

	t92 = (((x3969^x3970)+x3971)<<x3972);

	if (t92 != 139096) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x4025 = UINT64_MAX;
	int8_t x4026 = INT8_MIN;
	static int16_t x4027 = INT16_MAX;
	static uint64_t t93 = 34801LLU;

	t93 = (((x4025^x4026)+x4027)<<x4028);

	if (t93 != 65788LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x4033 = 2U;
	static int8_t x4034 = -3;
	uint64_t x4035 = 52078968698850LLU;
	uint8_t x4036 = 3U;
	static volatile uint64_t t94 = 1087LLU;

	t94 = (((x4033^x4034)+x4035)<<x4036);

	if (t94 != 416631749590792LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x4049 = 28176U;
	volatile uint8_t x4050 = 0U;
	int32_t x4051 = INT32_MIN;
	int8_t x4052 = 20;
	static volatile uint32_t t95 = 662638489U;

	t95 = (((x4049^x4050)+x4051)<<x4052);

	if (t95 != 3774873600U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x4109 = INT8_MAX;
	uint8_t x4110 = UINT8_MAX;
	int64_t x4111 = -3LL;
	int16_t x4112 = 0;
	int64_t t96 = 126LL;

	t96 = (((x4109^x4110)+x4111)<<x4112);

	if (t96 != 125LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x4145 = INT8_MAX;
	uint64_t x4146 = 1091LLU;
	int16_t x4147 = -363;
	uint8_t x4148 = 15U;
	static volatile uint64_t t97 = 1700840261164LLU;

	t97 = (((x4145^x4146)+x4147)<<x4148);

	if (t97 != 23625728LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x4437 = 1594933LLU;
	static volatile int8_t x4438 = -1;
	int8_t x4439 = 3;
	volatile uint64_t t98 = 466580LLU;

	t98 = (((x4437^x4438)+x4439)<<x4440);

	if (t98 != 18446744073706361754LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x4562 = 14680U;
	int16_t x4563 = INT16_MIN;
	uint16_t x4564 = 1U;
	uint32_t t99 = 199763U;

	t99 = (((x4561^x4562)+x4563)<<x4564);

	if (t99 != 4294931132U) { NG(); } else { ; }
	
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

