#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MIN;
int8_t x35 = 0;
int16_t x39 = 1;
volatile uint16_t x71 = 1U;
uint32_t x246 = UINT32_MAX;
uint16_t x255 = 18U;
int16_t x256 = INT16_MIN;
uint16_t x299 = 1U;
uint32_t x300 = UINT32_MAX;
int32_t x453 = 579;
volatile int32_t x481 = 1;
volatile uint16_t x572 = 7U;
volatile uint32_t x597 = UINT32_MAX;
uint64_t x600 = UINT64_MAX;
uint32_t x637 = UINT32_MAX;
static uint8_t x699 = 9U;
volatile int64_t t23 = 235698501876LL;
int8_t x1076 = 0;
int16_t x1162 = INT16_MAX;
uint16_t x1163 = 15U;
uint8_t x1281 = 0U;
uint32_t x1301 = UINT32_MAX;
int16_t x1319 = 16;
volatile uint64_t t32 = 37495039LLU;
volatile int8_t x1465 = 3;
static uint16_t x1467 = 7U;
int32_t x1613 = -1;
static volatile uint8_t x1715 = 7U;
int64_t x1773 = INT64_MAX;
int8_t x1775 = 1;
uint64_t x1790 = UINT64_MAX;
int16_t x1796 = -1;
volatile int32_t x1844 = -1;
int32_t t41 = -1;
static int64_t x1932 = -88672743669593LL;
volatile uint32_t x1938 = 387U;
int8_t x1939 = 0;
int8_t x1940 = INT8_MAX;
uint64_t t44 = 16550454LLU;
uint16_t x2043 = 47U;
static uint8_t x2061 = UINT8_MAX;
uint64_t x2064 = 848375LLU;
static uint64_t t48 = 2398502476LLU;
int64_t x2138 = -960944552648501360LL;
static volatile int16_t x2242 = INT16_MIN;
uint64_t t50 = 290495480324LLU;
uint16_t x2259 = 15U;
volatile int32_t x2260 = -1;
static volatile uint32_t t52 = 1U;
uint64_t x2338 = 6505238417156383LLU;
int8_t x2359 = 8;
volatile int64_t t55 = -27118679403058804LL;
uint8_t x2447 = 9U;
int64_t x2480 = INT64_MAX;
int8_t x2482 = INT8_MAX;
int8_t x2485 = 14;
int16_t x2486 = -1;
static int16_t x2487 = 25;
volatile int32_t t60 = 164193;
static uint8_t x2525 = 6U;
uint16_t x2768 = 36U;
int16_t x2789 = INT16_MIN;
uint64_t x2792 = UINT64_MAX;
volatile uint64_t t67 = 6491535814503LLU;
volatile int32_t x2906 = INT32_MAX;
static volatile int8_t x2907 = 1;
uint64_t t69 = 425121624942LLU;
int32_t x3025 = INT32_MIN;
int8_t x3044 = INT8_MIN;
volatile int32_t t71 = -3342085;
int16_t x3069 = 21;
volatile int16_t x3071 = 1;
volatile uint8_t x3102 = 46U;
int32_t x3157 = INT32_MAX;
uint8_t x3159 = 7U;
uint16_t x3160 = 4987U;
uint8_t x3298 = UINT8_MAX;
volatile int16_t x3300 = -85;
int64_t x3333 = INT64_MIN;
uint8_t x3335 = 10U;
int32_t t85 = -45;
uint8_t x3520 = 0U;
volatile uint32_t t87 = 99152992U;
int16_t x3529 = 7;
static volatile uint32_t t88 = 13U;
int32_t t90 = -210163732;
int32_t x3582 = 158810760;
uint32_t t91 = 2U;
static int8_t x3695 = 26;
uint64_t x3702 = UINT64_MAX;
volatile int8_t x3764 = 0;
int64_t x3846 = INT64_MIN;
uint64_t x3900 = 50LLU;


void f0(void) {
	uint8_t x1 = 2U;
	static int8_t x3 = 1;
	uint16_t x4 = UINT16_MAX;
	static volatile int32_t t0 = -1239;

	t0 = (((x1&x2)<<x3)-x4);

	if (t0 != -65535) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x17 = 2028729LLU;
	static uint8_t x18 = UINT8_MAX;
	int8_t x19 = 0;
	volatile uint64_t x20 = 278332521455709317LLU;
	uint64_t t1 = 979920778780LLU;

	t1 = (((x17&x18)<<x19)-x20);

	if (t1 != 18168411552253842484LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x33 = INT16_MAX;
	volatile uint8_t x34 = 8U;
	uint8_t x36 = UINT8_MAX;
	int32_t t2 = 2;

	t2 = (((x33&x34)<<x35)-x36);

	if (t2 != -247) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x37 = UINT16_MAX;
	int64_t x38 = -141LL;
	static volatile int16_t x40 = INT16_MAX;
	int64_t t3 = 26246LL;

	t3 = (((x37&x38)<<x39)-x40);

	if (t3 != 98023LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x69 = 4921673LLU;
	int32_t x70 = INT32_MIN;
	uint32_t x72 = 755275838U;
	uint64_t t4 = 4004432LLU;

	t4 = (((x69&x70)<<x71)-x72);

	if (t4 != 18446744072954275778LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x125 = INT64_MIN;
	int16_t x126 = INT16_MAX;
	uint16_t x127 = 14U;
	int32_t x128 = 5982034;
	static int64_t t5 = 99335360LL;

	t5 = (((x125&x126)<<x127)-x128);

	if (t5 != -5982034LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x137 = UINT16_MAX;
	static uint64_t x138 = 60116968LLU;
	volatile int8_t x139 = 0;
	int16_t x140 = 1;
	uint64_t t6 = 160847404165634150LLU;

	t6 = (((x137&x138)<<x139)-x140);

	if (t6 != 20455LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x201 = UINT16_MAX;
	uint64_t x202 = 23LLU;
	static volatile uint8_t x203 = 33U;
	uint16_t x204 = UINT16_MAX;
	volatile uint64_t t7 = 60853194LLU;

	t7 = (((x201&x202)<<x203)-x204);

	if (t7 != 197568430081LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x213 = UINT16_MAX;
	uint16_t x214 = UINT16_MAX;
	int16_t x215 = 4;
	uint64_t x216 = UINT64_MAX;
	uint64_t t8 = 844857477942620LLU;

	t8 = (((x213&x214)<<x215)-x216);

	if (t8 != 1048561LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint64_t x245 = UINT64_MAX;
	uint32_t x247 = 0U;
	volatile int8_t x248 = INT8_MIN;
	uint64_t t9 = 44506724LLU;

	t9 = (((x245&x246)<<x247)-x248);

	if (t9 != 4294967423LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x253 = INT8_MIN;
	static uint32_t x254 = 1185511452U;
	volatile uint32_t t10 = 737U;

	t10 = (((x253&x254)<<x255)-x256);

	if (t10 != 3758129152U) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x261 = 7U;
	int16_t x262 = -7;
	uint16_t x263 = 4U;
	uint16_t x264 = 9U;
	volatile int32_t t11 = 992;

	t11 = (((x261&x262)<<x263)-x264);

	if (t11 != 7) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x297 = -2580;
	uint32_t x298 = UINT32_MAX;
	volatile uint32_t t12 = 1644883101U;

	t12 = (((x297&x298)<<x299)-x300);

	if (t12 != 4294962137U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x309 = 25;
	uint8_t x310 = UINT8_MAX;
	uint16_t x311 = 0U;
	int16_t x312 = INT16_MAX;
	int32_t t13 = 206;

	t13 = (((x309&x310)<<x311)-x312);

	if (t13 != -32742) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x369 = INT32_MIN;
	uint64_t x370 = 91011LLU;
	uint32_t x371 = 0U;
	static uint64_t x372 = 4LLU;
	uint64_t t14 = 20916LLU;

	t14 = (((x369&x370)<<x371)-x372);

	if (t14 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x454 = 1813975LLU;
	int16_t x455 = 0;
	int16_t x456 = INT16_MAX;
	uint64_t t15 = 15660911LLU;

	t15 = (((x453&x454)<<x455)-x456);

	if (t15 != 18446744073709518916LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x457 = UINT16_MAX;
	int8_t x458 = INT8_MIN;
	volatile int8_t x459 = 0;
	int16_t x460 = INT16_MIN;
	static volatile int32_t t16 = -100678;

	t16 = (((x457&x458)<<x459)-x460);

	if (t16 != 98176) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int16_t x482 = -1;
	volatile int64_t x483 = 29LL;
	volatile int8_t x484 = INT8_MAX;
	volatile int32_t t17 = -189;

	t17 = (((x481&x482)<<x483)-x484);

	if (t17 != 536870785) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x569 = 0;
	uint16_t x570 = 236U;
	uint8_t x571 = 22U;
	int32_t t18 = -14962328;

	t18 = (((x569&x570)<<x571)-x572);

	if (t18 != -7) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x598 = -11;
	volatile uint16_t x599 = 8U;
	static uint64_t t19 = 37274722505328163LLU;

	t19 = (((x597&x598)<<x599)-x600);

	if (t19 != 4294964481LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x633 = INT64_MIN;
	uint8_t x634 = 26U;
	int8_t x635 = 0;
	uint32_t x636 = UINT32_MAX;
	int64_t t20 = -1LL;

	t20 = (((x633&x634)<<x635)-x636);

	if (t20 != -4294967295LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x638 = 114U;
	uint8_t x639 = 25U;
	uint16_t x640 = 4782U;
	uint32_t t21 = 180U;

	t21 = (((x637&x638)<<x639)-x640);

	if (t21 != 3825200466U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x697 = -1;
	static uint32_t x698 = UINT32_MAX;
	volatile uint8_t x700 = 40U;
	volatile uint32_t t22 = 2592U;

	t22 = (((x697&x698)<<x699)-x700);

	if (t22 != 4294966744U) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x957 = UINT32_MAX;
	volatile uint16_t x958 = UINT16_MAX;
	volatile uint16_t x959 = 0U;
	int64_t x960 = -1LL;

	t23 = (((x957&x958)<<x959)-x960);

	if (t23 != 65536LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x985 = INT8_MAX;
	int64_t x986 = INT64_MIN;
	uint32_t x987 = 0U;
	uint16_t x988 = UINT16_MAX;
	volatile int64_t t24 = -9217LL;

	t24 = (((x985&x986)<<x987)-x988);

	if (t24 != -65535LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1049 = INT8_MAX;
	int8_t x1050 = -1;
	volatile uint8_t x1051 = 0U;
	static uint64_t x1052 = 107090310469439174LLU;
	uint64_t t25 = 1475661317748099LLU;

	t25 = (((x1049&x1050)<<x1051)-x1052);

	if (t25 != 18339653763240112569LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x1073 = INT32_MIN;
	volatile int32_t x1074 = 787243920;
	uint8_t x1075 = 0U;
	int32_t t26 = -35;

	t26 = (((x1073&x1074)<<x1075)-x1076);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1125 = INT64_MIN;
	int8_t x1126 = 1;
	volatile int8_t x1127 = 38;
	volatile int8_t x1128 = -1;
	static volatile int64_t t27 = -61766608411126LL;

	t27 = (((x1125&x1126)<<x1127)-x1128);

	if (t27 != 1LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x1161 = UINT32_MAX;
	int16_t x1164 = -1552;
	uint32_t t28 = 1U;

	t28 = (((x1161&x1162)<<x1163)-x1164);

	if (t28 != 1073710608U) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x1225 = 62U;
	int64_t x1226 = -1LL;
	uint8_t x1227 = 11U;
	volatile uint32_t x1228 = UINT32_MAX;
	int64_t t29 = -777444529959LL;

	t29 = (((x1225&x1226)<<x1227)-x1228);

	if (t29 != -4294840319LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x1282 = -1;
	static uint8_t x1283 = 3U;
	uint16_t x1284 = 1368U;
	static volatile int32_t t30 = 62374487;

	t30 = (((x1281&x1282)<<x1283)-x1284);

	if (t30 != -1368) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1302 = 1334439725U;
	int8_t x1303 = 1;
	static int8_t x1304 = 2;
	static volatile uint32_t t31 = 49635439U;

	t31 = (((x1301&x1302)<<x1303)-x1304);

	if (t31 != 2668879448U) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x1317 = INT8_MIN;
	uint64_t x1318 = 151415740366257698LLU;
	volatile int16_t x1320 = INT16_MAX;

	t32 = (((x1317&x1318)<<x1319)-x1320);

	if (t32 != 17280393061033017345LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1466 = -1LL;
	int16_t x1468 = -1;
	int64_t t33 = 17187426364601LL;

	t33 = (((x1465&x1466)<<x1467)-x1468);

	if (t33 != 385LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x1614 = 3U;
	static volatile int16_t x1615 = 0;
	uint64_t x1616 = UINT64_MAX;
	uint64_t t34 = 264804625592072537LLU;

	t34 = (((x1613&x1614)<<x1615)-x1616);

	if (t34 != 4LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1617 = INT32_MAX;
	volatile int8_t x1618 = INT8_MAX;
	uint8_t x1619 = 6U;
	uint8_t x1620 = 0U;
	static int32_t t35 = 2;

	t35 = (((x1617&x1618)<<x1619)-x1620);

	if (t35 != 8128) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1713 = INT32_MIN;
	int32_t x1714 = INT32_MAX;
	int32_t x1716 = 124477763;
	volatile int32_t t36 = 1;

	t36 = (((x1713&x1714)<<x1715)-x1716);

	if (t36 != -124477763) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x1774 = 1075889714U;
	int16_t x1776 = INT16_MIN;
	volatile int64_t t37 = -125140LL;

	t37 = (((x1773&x1774)<<x1775)-x1776);

	if (t37 != 2151812196LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x1777 = 19U;
	int8_t x1778 = INT8_MIN;
	int16_t x1779 = 1;
	static uint16_t x1780 = 2U;
	static int32_t t38 = -18870;

	t38 = (((x1777&x1778)<<x1779)-x1780);

	if (t38 != -2) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1789 = -32;
	static volatile uint8_t x1791 = 11U;
	static int16_t x1792 = INT16_MIN;
	static uint64_t t39 = 115922LLU;

	t39 = (((x1789&x1790)<<x1791)-x1792);

	if (t39 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x1793 = -1LL;
	static uint64_t x1794 = 31437LLU;
	int8_t x1795 = 3;
	static volatile uint64_t t40 = 117346460106306LLU;

	t40 = (((x1793&x1794)<<x1795)-x1796);

	if (t40 != 251497LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int16_t x1841 = -1;
	volatile int32_t x1842 = 232030;
	volatile int16_t x1843 = 3;

	t41 = (((x1841&x1842)<<x1843)-x1844);

	if (t41 != 1856241) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x1929 = 108704667869127229LL;
	int8_t x1930 = INT8_MAX;
	uint8_t x1931 = 4U;
	int64_t t42 = -24868580961060849LL;

	t42 = (((x1929&x1930)<<x1931)-x1932);

	if (t42 != 88672743670569LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x1937 = -2LL;
	volatile int64_t t43 = -816335LL;

	t43 = (((x1937&x1938)<<x1939)-x1940);

	if (t43 != 259LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x1977 = UINT64_MAX;
	volatile int32_t x1978 = INT32_MIN;
	uint16_t x1979 = 5U;
	int32_t x1980 = INT32_MIN;

	t44 = (((x1977&x1978)<<x1979)-x1980);

	if (t44 != 18446744007137558528LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x2041 = -1LL;
	uint16_t x2042 = 11257U;
	uint8_t x2044 = 9U;
	volatile int64_t t45 = 208092027351LL;

	t45 = (((x2041&x2042)<<x2043)-x2044);

	if (t45 != 1584281906415927287LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x2049 = 0LLU;
	int32_t x2050 = INT32_MAX;
	static uint32_t x2051 = 0U;
	int64_t x2052 = 43924103LL;
	uint64_t t46 = 1080LLU;

	t46 = (((x2049&x2050)<<x2051)-x2052);

	if (t46 != 18446744073665627513LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x2057 = 37LLU;
	uint16_t x2058 = 19U;
	volatile int8_t x2059 = 1;
	int8_t x2060 = -2;
	static uint64_t t47 = 1372907800783LLU;

	t47 = (((x2057&x2058)<<x2059)-x2060);

	if (t47 != 4LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x2062 = INT16_MIN;
	uint8_t x2063 = 0U;

	t48 = (((x2061&x2062)<<x2063)-x2064);

	if (t48 != 18446744073708703241LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x2137 = INT16_MAX;
	int8_t x2139 = 0;
	uint16_t x2140 = 19U;
	volatile int64_t t49 = 409LL;

	t49 = (((x2137&x2138)<<x2139)-x2140);

	if (t49 != 6013LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x2241 = 11589343434001784LLU;
	uint64_t x2243 = 5LLU;
	volatile uint16_t x2244 = UINT16_MAX;

	t50 = (((x2241&x2242)<<x2243)-x2244);

	if (t50 != 370858989887356929LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x2257 = 34;
	int32_t x2258 = 63250814;
	static volatile int32_t t51 = 5487574;

	t51 = (((x2257&x2258)<<x2259)-x2260);

	if (t51 != 1114113) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x2269 = 637U;
	uint8_t x2270 = 4U;
	int8_t x2271 = 2;
	int32_t x2272 = INT32_MIN;

	t52 = (((x2269&x2270)<<x2271)-x2272);

	if (t52 != 2147483664U) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x2301 = 180352;
	volatile uint64_t x2302 = UINT64_MAX;
	volatile uint8_t x2303 = 6U;
	int32_t x2304 = -1;
	volatile uint64_t t53 = 7LLU;

	t53 = (((x2301&x2302)<<x2303)-x2304);

	if (t53 != 11542529LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x2337 = INT8_MIN;
	uint8_t x2339 = 9U;
	int8_t x2340 = INT8_MAX;
	uint64_t t54 = 100092LLU;

	t54 = (((x2337&x2338)<<x2339)-x2340);

	if (t54 != 3330682069584052097LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x2357 = -20373735655269LL;
	int8_t x2358 = INT8_MAX;
	int16_t x2360 = INT16_MIN;

	t55 = (((x2357&x2358)<<x2359)-x2360);

	if (t55 != 39680LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x2429 = INT16_MAX;
	static uint16_t x2430 = UINT16_MAX;
	uint8_t x2431 = 0U;
	static int32_t x2432 = -12;
	static volatile int32_t t56 = 53;

	t56 = (((x2429&x2430)<<x2431)-x2432);

	if (t56 != 32779) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x2445 = 1801U;
	int16_t x2446 = INT16_MAX;
	int8_t x2448 = INT8_MIN;
	int32_t t57 = -266768432;

	t57 = (((x2445&x2446)<<x2447)-x2448);

	if (t57 != 922240) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x2477 = 0;
	uint64_t x2478 = UINT64_MAX;
	uint64_t x2479 = 17LLU;
	uint64_t t58 = 741LLU;

	t58 = (((x2477&x2478)<<x2479)-x2480);

	if (t58 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x2481 = INT64_MIN;
	uint16_t x2483 = 1U;
	int8_t x2484 = -2;
	int64_t t59 = -2214685795592LL;

	t59 = (((x2481&x2482)<<x2483)-x2484);

	if (t59 != 2LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x2488 = -6054193;

	t60 = (((x2485&x2486)<<x2487)-x2488);

	if (t60 != 475816241) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x2526 = -1LL;
	static int16_t x2527 = 1;
	volatile int16_t x2528 = INT16_MAX;
	static int64_t t61 = -1LL;

	t61 = (((x2525&x2526)<<x2527)-x2528);

	if (t61 != -32755LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x2573 = 6825508U;
	int8_t x2574 = -1;
	uint8_t x2575 = 16U;
	uint16_t x2576 = 298U;
	uint32_t t62 = 0U;

	t62 = (((x2573&x2574)<<x2575)-x2576);

	if (t62 != 639893206U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x2709 = 19;
	int8_t x2710 = -1;
	static uint8_t x2711 = 24U;
	int64_t x2712 = INT64_MAX;
	volatile int64_t t63 = -703290192LL;

	t63 = (((x2709&x2710)<<x2711)-x2712);

	if (t63 != -9223372036536008703LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x2741 = INT16_MIN;
	static uint8_t x2742 = UINT8_MAX;
	uint8_t x2743 = 13U;
	volatile uint64_t x2744 = 8966182745LLU;
	uint64_t t64 = 4012221277LLU;

	t64 = (((x2741&x2742)<<x2743)-x2744);

	if (t64 != 18446744064743368871LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint32_t x2765 = 165396846U;
	uint16_t x2766 = 3U;
	uint16_t x2767 = 0U;
	uint32_t t65 = 4U;

	t65 = (((x2765&x2766)<<x2767)-x2768);

	if (t65 != 4294967262U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x2769 = INT16_MIN;
	uint8_t x2770 = 0U;
	static uint64_t x2771 = 0LLU;
	int16_t x2772 = 0;
	static int32_t t66 = -3;

	t66 = (((x2769&x2770)<<x2771)-x2772);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x2790 = UINT32_MAX;
	static uint8_t x2791 = 1U;

	t67 = (((x2789&x2790)<<x2791)-x2792);

	if (t67 != 4294901761LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int8_t x2869 = -1;
	uint32_t x2870 = UINT32_MAX;
	uint32_t x2871 = 4U;
	int8_t x2872 = INT8_MAX;
	static volatile uint32_t t68 = 309U;

	t68 = (((x2869&x2870)<<x2871)-x2872);

	if (t68 != 4294967153U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x2905 = 1;
	uint64_t x2908 = 1LLU;

	t69 = (((x2905&x2906)<<x2907)-x2908);

	if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x3026 = 13U;
	uint8_t x3027 = 5U;
	static uint16_t x3028 = UINT16_MAX;
	int32_t t70 = 94;

	t70 = (((x3025&x3026)<<x3027)-x3028);

	if (t70 != -65535) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x3041 = UINT8_MAX;
	uint16_t x3042 = 2989U;
	volatile int8_t x3043 = 7;

	t71 = (((x3041&x3042)<<x3043)-x3044);

	if (t71 != 22272) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x3070 = INT64_MAX;
	uint16_t x3072 = UINT16_MAX;
	int64_t t72 = -759377402595362LL;

	t72 = (((x3069&x3070)<<x3071)-x3072);

	if (t72 != -65493LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x3101 = 135;
	uint16_t x3103 = 2U;
	static uint32_t x3104 = UINT32_MAX;
	volatile uint32_t t73 = 94319U;

	t73 = (((x3101&x3102)<<x3103)-x3104);

	if (t73 != 25U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x3125 = INT16_MIN;
	static int64_t x3126 = 4011495LL;
	uint16_t x3127 = 1U;
	volatile uint64_t x3128 = 390553695LLU;
	uint64_t t74 = 1014939671948409LLU;

	t74 = (((x3125&x3126)<<x3127)-x3128);

	if (t74 != 18446744073326993313LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x3158 = INT64_MIN;
	volatile int64_t t75 = 5711101070838519LL;

	t75 = (((x3157&x3158)<<x3159)-x3160);

	if (t75 != -4987LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x3165 = 236U;
	int64_t x3166 = -1LL;
	uint16_t x3167 = 3U;
	int16_t x3168 = INT16_MIN;
	volatile int64_t t76 = 978394313937LL;

	t76 = (((x3165&x3166)<<x3167)-x3168);

	if (t76 != 34656LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x3193 = UINT16_MAX;
	int64_t x3194 = INT64_MIN;
	int64_t x3195 = 0LL;
	int16_t x3196 = 1;
	volatile int64_t t77 = -363LL;

	t77 = (((x3193&x3194)<<x3195)-x3196);

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x3209 = 65348U;
	int8_t x3210 = INT8_MAX;
	int8_t x3211 = 0;
	int32_t x3212 = INT32_MIN;
	uint32_t t78 = 4U;

	t78 = (((x3209&x3210)<<x3211)-x3212);

	if (t78 != 2147483716U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x3213 = 15;
	int64_t x3214 = 5753647678LL;
	static uint8_t x3215 = 10U;
	static int32_t x3216 = INT32_MIN;
	int64_t t79 = -204482804063411LL;

	t79 = (((x3213&x3214)<<x3215)-x3216);

	if (t79 != 2147497984LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x3229 = UINT32_MAX;
	int8_t x3230 = -55;
	uint32_t x3231 = 0U;
	int64_t x3232 = 1LL;
	int64_t t80 = -43959329LL;

	t80 = (((x3229&x3230)<<x3231)-x3232);

	if (t80 != 4294967240LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x3297 = INT16_MIN;
	uint8_t x3299 = 14U;
	int32_t t81 = 0;

	t81 = (((x3297&x3298)<<x3299)-x3300);

	if (t81 != 85) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x3334 = UINT8_MAX;
	uint16_t x3336 = UINT16_MAX;
	int64_t t82 = 7391680109LL;

	t82 = (((x3333&x3334)<<x3335)-x3336);

	if (t82 != -65535LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x3369 = INT64_MIN;
	int8_t x3370 = 0;
	volatile int8_t x3371 = 2;
	static uint8_t x3372 = UINT8_MAX;
	int64_t t83 = 96326515LL;

	t83 = (((x3369&x3370)<<x3371)-x3372);

	if (t83 != -255LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x3397 = UINT32_MAX;
	int16_t x3398 = 0;
	int8_t x3399 = 1;
	static volatile uint32_t x3400 = 3715162U;
	static uint32_t t84 = 61U;

	t84 = (((x3397&x3398)<<x3399)-x3400);

	if (t84 != 4291252134U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x3417 = -778;
	static uint8_t x3418 = 26U;
	int8_t x3419 = 1;
	static int8_t x3420 = -32;

	t85 = (((x3417&x3418)<<x3419)-x3420);

	if (t85 != 68) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x3513 = -26;
	volatile int64_t x3514 = 6LL;
	int8_t x3515 = 0;
	uint64_t x3516 = 237LLU;
	volatile uint64_t t86 = 27719254570520LLU;

	t86 = (((x3513&x3514)<<x3515)-x3516);

	if (t86 != 18446744073709551385LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x3517 = 11988044U;
	uint8_t x3518 = UINT8_MAX;
	uint16_t x3519 = 0U;

	t87 = (((x3517&x3518)<<x3519)-x3520);

	if (t87 != 76U) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x3530 = INT16_MIN;
	int16_t x3531 = 1;
	uint32_t x3532 = UINT32_MAX;

	t88 = (((x3529&x3530)<<x3531)-x3532);

	if (t88 != 1U) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x3565 = INT8_MAX;
	static volatile int32_t x3566 = 2;
	int32_t x3567 = 1;
	uint32_t x3568 = 20486U;
	uint32_t t89 = 1865940318U;

	t89 = (((x3565&x3566)<<x3567)-x3568);

	if (t89 != 4294946814U) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x3577 = UINT16_MAX;
	int32_t x3578 = -13;
	static uint8_t x3579 = 0U;
	volatile int8_t x3580 = -1;

	t90 = (((x3577&x3578)<<x3579)-x3580);

	if (t90 != 65524) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x3581 = 94951062U;
	int16_t x3583 = 0;
	uint16_t x3584 = 852U;

	t91 = (((x3581&x3582)<<x3583)-x3584);

	if (t91 != 18890540U) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x3649 = INT64_MIN;
	uint32_t x3650 = 1U;
	uint8_t x3651 = 45U;
	volatile uint64_t x3652 = UINT64_MAX;
	uint64_t t92 = 2728450106484320LLU;

	t92 = (((x3649&x3650)<<x3651)-x3652);

	if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x3657 = 12U;
	int16_t x3658 = INT16_MAX;
	static uint8_t x3659 = 2U;
	int16_t x3660 = 0;
	int32_t t93 = 103116;

	t93 = (((x3657&x3658)<<x3659)-x3660);

	if (t93 != 48) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x3693 = 0U;
	volatile uint32_t x3694 = UINT32_MAX;
	uint32_t x3696 = UINT32_MAX;
	volatile uint32_t t94 = 22U;

	t94 = (((x3693&x3694)<<x3695)-x3696);

	if (t94 != 1U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x3701 = INT32_MIN;
	static uint16_t x3703 = 1U;
	volatile int64_t x3704 = INT64_MIN;
	volatile uint64_t t95 = 12012615551LLU;

	t95 = (((x3701&x3702)<<x3703)-x3704);

	if (t95 != 9223372032559808512LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x3745 = 24182U;
	uint64_t x3746 = 21614949LLU;
	uint8_t x3747 = 2U;
	uint64_t x3748 = 7392LLU;
	uint64_t t96 = 84657581966250LLU;

	t96 = (((x3745&x3746)<<x3747)-x3748);

	if (t96 != 74928LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x3761 = 141U;
	int32_t x3762 = INT32_MIN;
	uint8_t x3763 = 0U;
	volatile int32_t t97 = -1093;

	t97 = (((x3761&x3762)<<x3763)-x3764);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x3845 = INT8_MAX;
	uint32_t x3847 = 0U;
	int16_t x3848 = -7819;
	static volatile int64_t t98 = -274911480221102LL;

	t98 = (((x3845&x3846)<<x3847)-x3848);

	if (t98 != 7819LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x3897 = 5572U;
	int8_t x3898 = -1;
	uint8_t x3899 = 1U;
	volatile uint64_t t99 = 3878337114325577LLU;

	t99 = (((x3897&x3898)<<x3899)-x3900);

	if (t99 != 11094LLU) { NG(); } else { ; }
	
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

