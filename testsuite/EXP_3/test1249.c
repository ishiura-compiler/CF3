#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x84 = -4;
int8_t x198 = 6;
volatile int32_t t2 = -9;
volatile uint8_t x333 = 1U;
uint16_t x334 = 0U;
int32_t x335 = 38;
int32_t t3 = -1;
int8_t x413 = INT8_MAX;
int32_t t4 = 1;
int64_t x572 = -1LL;
static uint32_t x681 = 37620312U;
uint64_t x683 = UINT64_MAX;
int64_t x684 = 906894607LL;
uint8_t x878 = 0U;
int16_t x896 = -1;
int32_t x1119 = INT32_MAX;
volatile int32_t t14 = 656;
int64_t x1138 = 0LL;
uint16_t x1140 = UINT16_MAX;
uint8_t x1244 = UINT8_MAX;
int8_t x1290 = 6;
int32_t x1616 = INT32_MIN;
uint64_t x1665 = 224503423752LLU;
uint32_t x1769 = 244280780U;
int8_t x1771 = INT8_MIN;
uint32_t t22 = 1075U;
uint16_t x1857 = 17U;
volatile uint8_t x2086 = 6U;
volatile int8_t x2087 = INT8_MIN;
static int8_t x2228 = 1;
volatile uint64_t t29 = UINT64_MAX;
volatile int64_t x2253 = 13LL;
volatile uint8_t x2254 = 35U;
uint64_t x2549 = 46024712591517719LLU;
int32_t x2552 = 0;
uint64_t x2788 = UINT64_MAX;
static volatile uint8_t x2886 = 5U;
static uint32_t x2943 = 12U;
int32_t t40 = 5683234;
static int32_t t41 = -13964;
volatile int8_t x3068 = -1;
uint32_t x3133 = UINT32_MAX;
uint16_t x3134 = 0U;
uint32_t x3135 = 4480U;
volatile uint8_t x3344 = 0U;
uint64_t x3389 = UINT64_MAX;
uint16_t x3441 = UINT16_MAX;
uint8_t x3444 = 13U;
static uint32_t x3531 = UINT32_MAX;
int64_t t50 = -773LL;
uint16_t x3687 = 10U;
int32_t t51 = -3;
int8_t x3774 = 1;
uint64_t x3963 = 1993LLU;
int8_t x4041 = 13;
static uint16_t x4054 = 47U;
uint32_t x4056 = UINT32_MAX;
uint8_t x4062 = 14U;
static int64_t x4114 = 0LL;
int32_t x4116 = INT32_MAX;
static uint8_t x4121 = UINT8_MAX;
volatile int32_t t59 = -24;
static int16_t x4311 = 1;
int64_t x4428 = -1LL;
int64_t x4832 = -1LL;
int32_t x4916 = 10981386;
int8_t x4985 = 43;
volatile int16_t x4987 = 859;
uint64_t t73 = 6474862648364LLU;
uint64_t x5133 = 13402420LLU;
uint64_t x5167 = 56999448552LLU;
static int8_t x5168 = INT8_MIN;
volatile int64_t x5281 = 3600578516279418176LL;
int64_t x5341 = 6769907642497227LL;
int8_t x5342 = 7;
static int8_t x5344 = INT8_MIN;
int16_t x5403 = INT16_MIN;
uint8_t x5446 = 4U;
int16_t x5448 = INT16_MAX;
int16_t x5450 = 1;
static volatile int32_t t80 = -15100;
uint32_t x5494 = 0U;
int32_t t82 = 26234;
int64_t x5645 = 14561LL;
int8_t x5677 = INT8_MAX;
volatile int16_t x5680 = -1;
uint16_t x5736 = 1577U;
int64_t x5779 = 476LL;
uint32_t t87 = 7479U;
volatile uint32_t x5988 = UINT32_MAX;
volatile int32_t t90 = -121;
int64_t x6115 = 561860LL;
int32_t x6144 = INT32_MIN;
static uint64_t x6211 = UINT64_MAX;
volatile int64_t x6216 = -27647LL;
uint64_t x6260 = 63098938531794590LLU;
int8_t x6295 = INT8_MAX;
volatile int32_t t97 = -3634107;
static uint32_t x6352 = 681188465U;
volatile int8_t x6354 = 6;


void f0(void) {
	uint32_t x81 = UINT32_MAX;
	uint8_t x82 = 5U;
	uint8_t x83 = UINT8_MAX;
	uint32_t t0 = 162938U;

	t0 = ((x81<<x82)+(x83==x84));

	if (t0 != 4294967264U) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x141 = 92U;
	uint8_t x142 = 1U;
	int16_t x143 = -1;
	int8_t x144 = INT8_MIN;
	static int32_t t1 = 29;

	t1 = ((x141<<x142)+(x143==x144));

	if (t1 != 184) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x197 = 12U;
	static volatile int8_t x199 = 3;
	static uint32_t x200 = 2073996U;

	t2 = ((x197<<x198)+(x199==x200));

	if (t2 != 768) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x336 = -98;

	t3 = ((x333<<x334)+(x335==x336));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x414 = 7LLU;
	uint32_t x415 = 193817U;
	volatile int16_t x416 = INT16_MIN;

	t4 = ((x413<<x414)+(x415==x416));

	if (t4 != 16256) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint16_t x569 = 93U;
	static volatile uint8_t x570 = 3U;
	volatile int16_t x571 = -1810;
	volatile int32_t t5 = -875;

	t5 = ((x569<<x570)+(x571==x572));

	if (t5 != 744) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x665 = 4U;
	volatile uint16_t x666 = 0U;
	uint32_t x667 = UINT32_MAX;
	uint64_t x668 = 9875470422470653LLU;
	static int32_t t6 = 53;

	t6 = ((x665<<x666)+(x667==x668));

	if (t6 != 4) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x682 = 15U;
	volatile uint32_t t7 = 1814U;

	t7 = ((x681<<x682)+(x683==x684));

	if (t7 != 86769664U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x757 = INT8_MAX;
	static uint8_t x758 = 1U;
	int32_t x759 = -1;
	static volatile int32_t x760 = 453059;
	volatile int32_t t8 = -1979997;

	t8 = ((x757<<x758)+(x759==x760));

	if (t8 != 254) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x801 = UINT32_MAX;
	int16_t x802 = 1;
	uint8_t x803 = UINT8_MAX;
	volatile uint32_t x804 = UINT32_MAX;
	uint32_t t9 = 846068U;

	t9 = ((x801<<x802)+(x803==x804));

	if (t9 != 4294967294U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x877 = 392435;
	int8_t x879 = INT8_MAX;
	int32_t x880 = -8366037;
	int32_t t10 = -163387370;

	t10 = ((x877<<x878)+(x879==x880));

	if (t10 != 392435) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x893 = 1;
	volatile uint16_t x894 = 21U;
	static int16_t x895 = -1;
	int32_t t11 = -213;

	t11 = ((x893<<x894)+(x895==x896));

	if (t11 != 2097153) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x1077 = 2U;
	static volatile uint8_t x1078 = 6U;
	static int64_t x1079 = INT64_MIN;
	int64_t x1080 = 15466168954782055LL;
	volatile int32_t t12 = -625478;

	t12 = ((x1077<<x1078)+(x1079==x1080));

	if (t12 != 128) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x1085 = 1U;
	uint8_t x1086 = 12U;
	int64_t x1087 = 22467375610LL;
	static int8_t x1088 = INT8_MAX;
	static volatile int32_t t13 = 929;

	t13 = ((x1085<<x1086)+(x1087==x1088));

	if (t13 != 4096) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x1117 = UINT16_MAX;
	int8_t x1118 = 3;
	static int16_t x1120 = -1;

	t14 = ((x1117<<x1118)+(x1119==x1120));

	if (t14 != 524280) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x1137 = UINT32_MAX;
	int64_t x1139 = INT64_MIN;
	uint32_t t15 = UINT32_MAX;

	t15 = ((x1137<<x1138)+(x1139==x1140));

	if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x1241 = 1;
	uint8_t x1242 = 30U;
	uint32_t x1243 = UINT32_MAX;
	int32_t t16 = 5903;

	t16 = ((x1241<<x1242)+(x1243==x1244));

	if (t16 != 1073741824) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint64_t x1245 = 0LLU;
	uint32_t x1246 = 8U;
	int32_t x1247 = INT32_MIN;
	int32_t x1248 = INT32_MAX;
	volatile uint64_t t17 = 65316261LLU;

	t17 = ((x1245<<x1246)+(x1247==x1248));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x1289 = INT16_MAX;
	uint32_t x1291 = 95229981U;
	int64_t x1292 = INT64_MIN;
	int32_t t18 = -115869;

	t18 = ((x1289<<x1290)+(x1291==x1292));

	if (t18 != 2097088) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x1537 = 2U;
	uint32_t x1538 = 1U;
	int16_t x1539 = -1;
	uint16_t x1540 = 1242U;
	volatile uint32_t t19 = 214558U;

	t19 = ((x1537<<x1538)+(x1539==x1540));

	if (t19 != 4U) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x1613 = 10523734727111798LLU;
	volatile uint32_t x1614 = 24U;
	volatile int64_t x1615 = INT64_MIN;
	volatile uint64_t t20 = 219LLU;

	t20 = ((x1613<<x1614)+(x1615==x1616));

	if (t20 != 5183113981572677632LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1666 = 44U;
	static int32_t x1667 = -2;
	int8_t x1668 = INT8_MIN;
	volatile uint64_t t21 = 418983143LLU;

	t21 = ((x1665<<x1666)+(x1667==x1668));

	if (t21 != 2751840109811728384LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x1770 = 9;
	int32_t x1772 = INT32_MIN;

	t22 = ((x1769<<x1770)+(x1771==x1772));

	if (t22 != 517707776U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x1858 = 7LL;
	uint64_t x1859 = 621268841282366145LLU;
	static uint32_t x1860 = 1013150883U;
	volatile int32_t t23 = 228312;

	t23 = ((x1857<<x1858)+(x1859==x1860));

	if (t23 != 2176) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1893 = 7953;
	uint8_t x1894 = 4U;
	int16_t x1895 = 11;
	int8_t x1896 = 0;
	volatile int32_t t24 = -454;

	t24 = ((x1893<<x1894)+(x1895==x1896));

	if (t24 != 127248) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x2061 = 16;
	int64_t x2062 = 23LL;
	static uint32_t x2063 = 4234U;
	int8_t x2064 = INT8_MIN;
	int32_t t25 = 0;

	t25 = ((x2061<<x2062)+(x2063==x2064));

	if (t25 != 134217728) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x2085 = UINT64_MAX;
	static int8_t x2088 = INT8_MIN;
	static volatile uint64_t t26 = 38334796847653601LLU;

	t26 = ((x2085<<x2086)+(x2087==x2088));

	if (t26 != 18446744073709551553LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x2153 = 31U;
	uint16_t x2154 = 4U;
	int32_t x2155 = -4331675;
	volatile int64_t x2156 = INT64_MIN;
	volatile int32_t t27 = -8074301;

	t27 = ((x2153<<x2154)+(x2155==x2156));

	if (t27 != 496) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x2209 = UINT16_MAX;
	uint8_t x2210 = 5U;
	volatile uint64_t x2211 = 279722983340595677LLU;
	int32_t x2212 = -1;
	static volatile int32_t t28 = -19276;

	t28 = ((x2209<<x2210)+(x2211==x2212));

	if (t28 != 2097120) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x2225 = UINT64_MAX;
	int8_t x2226 = 0;
	volatile int16_t x2227 = INT16_MAX;

	t29 = ((x2225<<x2226)+(x2227==x2228));

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x2237 = 755U;
	uint16_t x2238 = 3U;
	static int16_t x2239 = INT16_MIN;
	int64_t x2240 = 30LL;
	volatile int32_t t30 = 171605;

	t30 = ((x2237<<x2238)+(x2239==x2240));

	if (t30 != 6040) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x2255 = -9;
	uint16_t x2256 = UINT16_MAX;
	volatile int64_t t31 = -8184459971LL;

	t31 = ((x2253<<x2254)+(x2255==x2256));

	if (t31 != 446676598784LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x2305 = 7882U;
	uint8_t x2306 = 1U;
	int64_t x2307 = -50106LL;
	int8_t x2308 = -1;
	volatile int32_t t32 = 64242;

	t32 = ((x2305<<x2306)+(x2307==x2308));

	if (t32 != 15764) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint64_t x2425 = UINT64_MAX;
	uint8_t x2426 = 0U;
	int8_t x2427 = -1;
	uint16_t x2428 = 606U;
	volatile uint64_t t33 = UINT64_MAX;

	t33 = ((x2425<<x2426)+(x2427==x2428));

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x2509 = UINT8_MAX;
	uint8_t x2510 = 3U;
	volatile int16_t x2511 = -1;
	static uint16_t x2512 = 415U;
	volatile int32_t t34 = 185112751;

	t34 = ((x2509<<x2510)+(x2511==x2512));

	if (t34 != 2040) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x2513 = 625U;
	volatile uint8_t x2514 = 21U;
	static int32_t x2515 = INT32_MIN;
	uint16_t x2516 = UINT16_MAX;
	static int32_t t35 = -36361;

	t35 = ((x2513<<x2514)+(x2515==x2516));

	if (t35 != 1310720000) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x2550 = 37;
	int32_t x2551 = -17;
	uint64_t t36 = 59604562LLU;

	t36 = ((x2549<<x2550)+(x2551==x2552));

	if (t36 != 11314452799934169088LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint32_t x2621 = 1323U;
	static uint8_t x2622 = 0U;
	volatile int32_t x2623 = -1;
	volatile int8_t x2624 = -1;
	uint32_t t37 = 32405289U;

	t37 = ((x2621<<x2622)+(x2623==x2624));

	if (t37 != 1324U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2785 = 1;
	uint64_t x2786 = 9LLU;
	int16_t x2787 = INT16_MIN;
	volatile int32_t t38 = 14002;

	t38 = ((x2785<<x2786)+(x2787==x2788));

	if (t38 != 512) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x2885 = UINT64_MAX;
	int64_t x2887 = INT64_MIN;
	uint16_t x2888 = 4820U;
	uint64_t t39 = 3538690059238036572LLU;

	t39 = ((x2885<<x2886)+(x2887==x2888));

	if (t39 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x2941 = UINT8_MAX;
	uint32_t x2942 = 5U;
	uint8_t x2944 = UINT8_MAX;

	t40 = ((x2941<<x2942)+(x2943==x2944));

	if (t40 != 8160) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x3037 = 10;
	int16_t x3038 = 1;
	int16_t x3039 = INT16_MIN;
	volatile int16_t x3040 = INT16_MAX;

	t41 = ((x3037<<x3038)+(x3039==x3040));

	if (t41 != 20) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x3045 = 0U;
	uint8_t x3046 = 2U;
	int16_t x3047 = 3;
	uint8_t x3048 = UINT8_MAX;
	uint32_t t42 = 2058926084U;

	t42 = ((x3045<<x3046)+(x3047==x3048));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x3065 = 434U;
	static uint16_t x3066 = 3U;
	int16_t x3067 = 1;
	volatile int32_t t43 = -15138808;

	t43 = ((x3065<<x3066)+(x3067==x3068));

	if (t43 != 3472) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x3136 = INT8_MIN;
	volatile uint32_t t44 = UINT32_MAX;

	t44 = ((x3133<<x3134)+(x3135==x3136));

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x3341 = 381;
	int8_t x3342 = 8;
	volatile int16_t x3343 = 27;
	int32_t t45 = -3;

	t45 = ((x3341<<x3342)+(x3343==x3344));

	if (t45 != 97536) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x3357 = INT64_MAX;
	uint64_t x3358 = 0LLU;
	int64_t x3359 = 233954161008418LL;
	uint32_t x3360 = 1708727U;
	volatile int64_t t46 = INT64_MAX;

	t46 = ((x3357<<x3358)+(x3359==x3360));

	if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x3390 = 1LLU;
	static int8_t x3391 = INT8_MIN;
	int32_t x3392 = INT32_MIN;
	uint64_t t47 = 11464416261818714LLU;

	t47 = ((x3389<<x3390)+(x3391==x3392));

	if (t47 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x3442 = 1LL;
	static int16_t x3443 = INT16_MAX;
	volatile int32_t t48 = -1;

	t48 = ((x3441<<x3442)+(x3443==x3444));

	if (t48 != 131070) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x3529 = INT8_MAX;
	volatile int16_t x3530 = 6;
	int16_t x3532 = INT16_MAX;
	int32_t t49 = 13931;

	t49 = ((x3529<<x3530)+(x3531==x3532));

	if (t49 != 8128) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x3549 = 509567964LL;
	volatile uint8_t x3550 = 4U;
	static uint32_t x3551 = 942160U;
	uint16_t x3552 = 537U;

	t50 = ((x3549<<x3550)+(x3551==x3552));

	if (t50 != 8153087424LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x3685 = 1414;
	int8_t x3686 = 3;
	uint64_t x3688 = 305683416576773LLU;

	t51 = ((x3685<<x3686)+(x3687==x3688));

	if (t51 != 11312) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x3701 = 11487033733182223LL;
	uint8_t x3702 = 3U;
	volatile int8_t x3703 = -1;
	static volatile uint16_t x3704 = 482U;
	static int64_t t52 = 0LL;

	t52 = ((x3701<<x3702)+(x3703==x3704));

	if (t52 != 91896269865457784LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x3773 = 1U;
	int8_t x3775 = -31;
	uint32_t x3776 = 22U;
	int32_t t53 = -2723385;

	t53 = ((x3773<<x3774)+(x3775==x3776));

	if (t53 != 2) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x3961 = UINT32_MAX;
	uint8_t x3962 = 11U;
	int16_t x3964 = INT16_MAX;
	uint32_t t54 = 95309815U;

	t54 = ((x3961<<x3962)+(x3963==x3964));

	if (t54 != 4294965248U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x4042 = 3U;
	uint32_t x4043 = UINT32_MAX;
	int32_t x4044 = -1;
	volatile int32_t t55 = 58353417;

	t55 = ((x4041<<x4042)+(x4043==x4044));

	if (t55 != 105) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x4053 = 126514191341975LLU;
	int8_t x4055 = INT8_MAX;
	volatile uint64_t t56 = 228LLU;

	t56 = ((x4053<<x4054)+(x4055==x4056));

	if (t56 != 10145343323070529536LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x4061 = UINT8_MAX;
	static int64_t x4063 = INT64_MIN;
	uint8_t x4064 = UINT8_MAX;
	int32_t t57 = -2;

	t57 = ((x4061<<x4062)+(x4063==x4064));

	if (t57 != 4177920) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x4113 = 3;
	int16_t x4115 = INT16_MIN;
	int32_t t58 = 0;

	t58 = ((x4113<<x4114)+(x4115==x4116));

	if (t58 != 3) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x4122 = 0U;
	int64_t x4123 = INT64_MIN;
	int32_t x4124 = -1;

	t59 = ((x4121<<x4122)+(x4123==x4124));

	if (t59 != 255) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x4309 = 67100627LLU;
	uint16_t x4310 = 30U;
	volatile int8_t x4312 = 48;
	volatile uint64_t t60 = 65990LLU;

	t60 = ((x4309<<x4310)+(x4311==x4312));

	if (t60 != 72048749626523648LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x4425 = 21856240;
	int8_t x4426 = 0;
	int8_t x4427 = -1;
	volatile int32_t t61 = 31097241;

	t61 = ((x4425<<x4426)+(x4427==x4428));

	if (t61 != 21856241) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x4553 = 63726577456971LL;
	volatile uint8_t x4554 = 0U;
	static int64_t x4555 = INT64_MIN;
	uint32_t x4556 = 483U;
	volatile int64_t t62 = 0LL;

	t62 = ((x4553<<x4554)+(x4555==x4556));

	if (t62 != 63726577456971LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x4681 = UINT32_MAX;
	uint16_t x4682 = 16U;
	static uint64_t x4683 = UINT64_MAX;
	static int32_t x4684 = INT32_MAX;
	volatile uint32_t t63 = 88794213U;

	t63 = ((x4681<<x4682)+(x4683==x4684));

	if (t63 != 4294901760U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x4709 = 4U;
	static uint8_t x4710 = 10U;
	int8_t x4711 = -1;
	uint16_t x4712 = 911U;
	volatile int32_t t64 = -527145047;

	t64 = ((x4709<<x4710)+(x4711==x4712));

	if (t64 != 4096) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x4829 = INT32_MAX;
	int16_t x4830 = 0;
	uint8_t x4831 = UINT8_MAX;
	static int32_t t65 = INT32_MAX;

	t65 = ((x4829<<x4830)+(x4831==x4832));

	if (t65 != INT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x4849 = INT8_MAX;
	volatile int8_t x4850 = 0;
	volatile int8_t x4851 = INT8_MAX;
	static volatile int64_t x4852 = INT64_MIN;
	static int32_t t66 = -18812;

	t66 = ((x4849<<x4850)+(x4851==x4852));

	if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x4901 = 112293956LL;
	static uint32_t x4902 = 15U;
	int64_t x4903 = INT64_MIN;
	int32_t x4904 = 379;
	volatile int64_t t67 = 485182464966191636LL;

	t67 = ((x4901<<x4902)+(x4903==x4904));

	if (t67 != 3679648350208LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x4913 = 932764163LLU;
	uint8_t x4914 = 5U;
	volatile uint8_t x4915 = UINT8_MAX;
	uint64_t t68 = 17589556617368036LLU;

	t68 = ((x4913<<x4914)+(x4915==x4916));

	if (t68 != 29848453216LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x4917 = 1535LL;
	static int8_t x4918 = 2;
	int32_t x4919 = INT32_MIN;
	int8_t x4920 = 11;
	volatile int64_t t69 = 258190415663LL;

	t69 = ((x4917<<x4918)+(x4919==x4920));

	if (t69 != 6140LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x4933 = UINT64_MAX;
	volatile int8_t x4934 = 31;
	int64_t x4935 = INT64_MAX;
	int8_t x4936 = 5;
	uint64_t t70 = 2562863399044LLU;

	t70 = ((x4933<<x4934)+(x4935==x4936));

	if (t70 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x4986 = 1;
	volatile int8_t x4988 = 3;
	int32_t t71 = 123;

	t71 = ((x4985<<x4986)+(x4987==x4988));

	if (t71 != 86) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x5009 = 1650251U;
	uint16_t x5010 = 1U;
	int8_t x5011 = INT8_MAX;
	int16_t x5012 = -1;
	volatile uint32_t t72 = 107657U;

	t72 = ((x5009<<x5010)+(x5011==x5012));

	if (t72 != 3300502U) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x5129 = 8279004522LLU;
	int16_t x5130 = 23;
	volatile int8_t x5131 = INT8_MAX;
	static int32_t x5132 = INT32_MIN;

	t73 = ((x5129<<x5130)+(x5131==x5132));

	if (t73 != 69449323565285376LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x5134 = 18;
	int64_t x5135 = -1LL;
	int32_t x5136 = -17344;
	volatile uint64_t t74 = 5034710LLU;

	t74 = ((x5133<<x5134)+(x5135==x5136));

	if (t74 != 3513363988480LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x5165 = 5U;
	static uint16_t x5166 = 1U;
	static volatile int32_t t75 = 363501026;

	t75 = ((x5165<<x5166)+(x5167==x5168));

	if (t75 != 10) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x5282 = 1U;
	uint16_t x5283 = 3526U;
	uint8_t x5284 = UINT8_MAX;
	volatile int64_t t76 = -9252421019689290LL;

	t76 = ((x5281<<x5282)+(x5283==x5284));

	if (t76 != 7201157032558836352LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x5343 = -1;
	volatile int64_t t77 = -22413722040LL;

	t77 = ((x5341<<x5342)+(x5343==x5344));

	if (t77 != 866548178239645056LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x5401 = UINT64_MAX;
	uint16_t x5402 = 39U;
	volatile uint8_t x5404 = UINT8_MAX;
	static volatile uint64_t t78 = 234678845940986LLU;

	t78 = ((x5401<<x5402)+(x5403==x5404));

	if (t78 != 18446743523953737728LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint32_t x5445 = UINT32_MAX;
	int8_t x5447 = 12;
	uint32_t t79 = 29U;

	t79 = ((x5445<<x5446)+(x5447==x5448));

	if (t79 != 4294967280U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x5449 = 54;
	volatile uint64_t x5451 = UINT64_MAX;
	volatile int8_t x5452 = -1;

	t80 = ((x5449<<x5450)+(x5451==x5452));

	if (t80 != 109) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x5493 = 3870;
	uint8_t x5495 = 30U;
	static int64_t x5496 = 9891104828264494LL;
	volatile int32_t t81 = 1883;

	t81 = ((x5493<<x5494)+(x5495==x5496));

	if (t81 != 3870) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x5593 = 0U;
	uint16_t x5594 = 24U;
	volatile int64_t x5595 = -59LL;
	uint64_t x5596 = 829LLU;

	t82 = ((x5593<<x5594)+(x5595==x5596));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x5646 = 14U;
	uint64_t x5647 = 1706663385LLU;
	volatile uint32_t x5648 = UINT32_MAX;
	volatile int64_t t83 = 77414845487627565LL;

	t83 = ((x5645<<x5646)+(x5647==x5648));

	if (t83 != 238567424LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x5678 = 4U;
	static uint8_t x5679 = UINT8_MAX;
	volatile int32_t t84 = -21021641;

	t84 = ((x5677<<x5678)+(x5679==x5680));

	if (t84 != 2032) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x5733 = 27U;
	static uint16_t x5734 = 0U;
	int16_t x5735 = -82;
	volatile int32_t t85 = -7;

	t85 = ((x5733<<x5734)+(x5735==x5736));

	if (t85 != 27) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x5777 = UINT8_MAX;
	volatile uint32_t x5778 = 18U;
	static volatile int64_t x5780 = INT64_MAX;
	int32_t t86 = -100283;

	t86 = ((x5777<<x5778)+(x5779==x5780));

	if (t86 != 66846720) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x5789 = 3U;
	uint16_t x5790 = 14U;
	static int16_t x5791 = -1;
	int8_t x5792 = INT8_MAX;

	t87 = ((x5789<<x5790)+(x5791==x5792));

	if (t87 != 49152U) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x5909 = 26927458801LLU;
	uint16_t x5910 = 10U;
	uint16_t x5911 = 1399U;
	volatile uint8_t x5912 = UINT8_MAX;
	uint64_t t88 = 398LLU;

	t88 = ((x5909<<x5910)+(x5911==x5912));

	if (t88 != 27573717812224LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x5917 = 118U;
	uint16_t x5918 = 0U;
	uint64_t x5919 = 3155019115785660LLU;
	int16_t x5920 = INT16_MIN;
	int32_t t89 = 1;

	t89 = ((x5917<<x5918)+(x5919==x5920));

	if (t89 != 118) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x5985 = 3U;
	int8_t x5986 = 0;
	volatile int16_t x5987 = INT16_MIN;

	t90 = ((x5985<<x5986)+(x5987==x5988));

	if (t90 != 3) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x6009 = 145U;
	uint32_t x6010 = 19U;
	int32_t x6011 = INT32_MIN;
	static uint16_t x6012 = 1U;
	uint32_t t91 = 642087U;

	t91 = ((x6009<<x6010)+(x6011==x6012));

	if (t91 != 76021760U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x6113 = 782886;
	static uint8_t x6114 = 0U;
	int32_t x6116 = 716807032;
	volatile int32_t t92 = -57201;

	t92 = ((x6113<<x6114)+(x6115==x6116));

	if (t92 != 782886) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x6141 = 103081221834442LLU;
	static uint8_t x6142 = 5U;
	uint16_t x6143 = UINT16_MAX;
	volatile uint64_t t93 = 419778052365330349LLU;

	t93 = ((x6141<<x6142)+(x6143==x6144));

	if (t93 != 3298599098702144LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x6209 = 1291801LL;
	uint8_t x6210 = 13U;
	int16_t x6212 = -10;
	static volatile int64_t t94 = -1019568809056LL;

	t94 = ((x6209<<x6210)+(x6211==x6212));

	if (t94 != 10582433792LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x6213 = UINT8_MAX;
	static volatile uint8_t x6214 = 7U;
	int32_t x6215 = 265438977;
	volatile int32_t t95 = 3404861;

	t95 = ((x6213<<x6214)+(x6215==x6216));

	if (t95 != 32640) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x6257 = 4913383987LLU;
	uint64_t x6258 = 12LLU;
	volatile int64_t x6259 = INT64_MAX;
	volatile uint64_t t96 = 26070628LLU;

	t96 = ((x6257<<x6258)+(x6259==x6260));

	if (t96 != 20125220810752LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x6293 = 0;
	uint16_t x6294 = 1U;
	volatile uint32_t x6296 = 15930297U;

	t97 = ((x6293<<x6294)+(x6295==x6296));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x6349 = UINT64_MAX;
	int8_t x6350 = 7;
	volatile int64_t x6351 = INT64_MIN;
	uint64_t t98 = 1LLU;

	t98 = ((x6349<<x6350)+(x6351==x6352));

	if (t98 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x6353 = UINT32_MAX;
	volatile int16_t x6355 = -1;
	int64_t x6356 = INT64_MIN;
	volatile uint32_t t99 = 1U;

	t99 = ((x6353<<x6354)+(x6355==x6356));

	if (t99 != 4294967232U) { NG(); } else { ; }
	
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

