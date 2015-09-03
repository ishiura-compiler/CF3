#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x18 = 94744942506350LLU;
int8_t x123 = INT8_MIN;
static uint64_t x151 = 13980903027LLU;
uint8_t x228 = 49U;
volatile uint64_t t4 = 120596195548956LLU;
uint8_t x244 = 56U;
volatile uint8_t x311 = UINT8_MAX;
int16_t x318 = INT16_MIN;
int32_t x531 = INT32_MAX;
static int16_t x730 = INT16_MIN;
static int8_t x731 = 30;
int32_t x870 = -2318843;
static int32_t x871 = INT32_MAX;
static uint32_t x914 = 952U;
int8_t x915 = -1;
uint64_t x949 = 837925659723421LLU;
volatile uint64_t t17 = 113090LLU;
static uint8_t x1008 = 11U;
volatile uint64_t x1076 = 0LLU;
static uint32_t x1344 = 1U;
uint64_t t21 = 70853078LLU;
int32_t x1374 = 16;
volatile uint32_t t22 = 694701U;
uint16_t x1501 = 1U;
int8_t x1589 = 3;
int8_t x1590 = 59;
static volatile int16_t x1685 = INT16_MAX;
int8_t x1734 = INT8_MAX;
uint8_t x1736 = 19U;
uint16_t x1870 = 1U;
static uint8_t x1872 = 4U;
int32_t x1882 = INT32_MIN;
int32_t x1930 = INT32_MIN;
int32_t t30 = -14751;
int64_t x1997 = 457968LL;
int16_t x2260 = 27;
volatile int32_t t33 = 1398;
int64_t x2350 = -1LL;
uint8_t x2352 = 45U;
static int16_t x2421 = INT16_MIN;
uint32_t t35 = 948U;
uint64_t x2434 = 5510241760062LLU;
uint32_t x2435 = UINT32_MAX;
uint64_t t37 = 143800241239702226LLU;
uint32_t x2533 = 0U;
static uint64_t x2534 = UINT64_MAX;
uint16_t x2536 = 3U;
uint32_t x2537 = 18510027U;
uint16_t x2539 = 82U;
int16_t x2617 = -1;
static int8_t x2731 = -9;
uint8_t x2760 = 9U;
int16_t x2765 = -1;
int32_t x2770 = INT32_MIN;
static volatile uint64_t t47 = 34262724797LLU;
int64_t t50 = -3LL;
volatile int32_t x3146 = 181692775;
volatile uint32_t t51 = 261U;
uint64_t x3163 = UINT64_MAX;
int8_t x3164 = 8;
int8_t x3306 = -1;
uint16_t x3309 = 32164U;
int32_t x3312 = 1;
uint64_t x3321 = UINT64_MAX;
uint16_t x3324 = 46U;
volatile int64_t t58 = -1LL;
int16_t x3342 = INT16_MIN;
uint8_t x3344 = 20U;
uint32_t x3381 = 4400U;
static uint64_t x3483 = UINT64_MAX;
volatile uint64_t t61 = 196LLU;
int8_t x3555 = INT8_MIN;
int8_t x3606 = INT8_MIN;
int8_t x3607 = INT8_MIN;
int16_t x4009 = -1;
int16_t x4010 = INT16_MIN;
int8_t x4011 = INT8_MAX;
uint8_t x4012 = 4U;
volatile uint64_t t68 = 410714953LLU;
volatile int8_t x4064 = 0;
int16_t x4101 = -1;
static volatile int32_t t72 = 2;
uint16_t x4178 = 1929U;
int8_t x4208 = 0;
int8_t x4301 = INT8_MIN;
int32_t x4302 = INT32_MIN;
int16_t x4303 = INT16_MIN;
static volatile int32_t t75 = -973193;
int8_t x4332 = 1;
uint32_t x4364 = 2U;
int8_t x4439 = 3;
static int16_t x4465 = INT16_MAX;
uint64_t x4639 = 37807LLU;
uint64_t x4646 = UINT64_MAX;
uint16_t x4750 = 22U;
int64_t x4757 = -1LL;
int16_t x4758 = INT16_MIN;
volatile uint32_t x4825 = 59660983U;
uint16_t x4861 = 435U;
static int32_t x5026 = INT32_MIN;
static uint16_t x5165 = 5949U;


void f0(void) {
	static int16_t x13 = INT16_MIN;
	static int16_t x14 = -707;
	static volatile uint16_t x15 = UINT16_MAX;
	uint8_t x16 = 6U;
	static int32_t t0 = -93;

	t0 = ((x13*(x14|x15))>>x16);

	if (t0 != 512) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x17 = -6;
	static int32_t x19 = -1;
	uint16_t x20 = 0U;
	volatile uint64_t t1 = 26572041677272LLU;

	t1 = ((x17*(x18|x19))>>x20);

	if (t1 != 6LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x121 = UINT64_MAX;
	int64_t x122 = INT64_MAX;
	int16_t x124 = 3;
	uint64_t t2 = 5LLU;

	t2 = ((x121*(x122|x123))>>x124);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x149 = -1;
	int32_t x150 = INT32_MIN;
	uint32_t x152 = 19U;
	uint64_t t3 = 66393221217782999LLU;

	t3 = ((x149*(x150|x151))>>x152);

	if (t3 != 2005LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x225 = UINT64_MAX;
	int64_t x226 = INT64_MIN;
	static int32_t x227 = -208506632;

	t4 = ((x225*(x226|x227))>>x228);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x241 = 129U;
	uint64_t x242 = 1496423480LLU;
	int64_t x243 = INT64_MIN;
	uint64_t t5 = 52534656617983LLU;

	t5 = ((x241*(x242|x243))>>x244);

	if (t5 != 128LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x309 = UINT64_MAX;
	int64_t x310 = -1LL;
	volatile int8_t x312 = 0;
	volatile uint64_t t6 = 14141739577617LLU;

	t6 = ((x309*(x310|x311))>>x312);

	if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x317 = INT8_MIN;
	static uint8_t x319 = 1U;
	int16_t x320 = 1;
	volatile int32_t t7 = -2419293;

	t7 = ((x317*(x318|x319))>>x320);

	if (t7 != 2097088) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x365 = UINT16_MAX;
	uint64_t x366 = UINT64_MAX;
	static volatile uint8_t x367 = 51U;
	uint8_t x368 = 20U;
	volatile uint64_t t8 = 1692233096355837LLU;

	t8 = ((x365*(x366|x367))>>x368);

	if (t8 != 17592186044415LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x529 = -1;
	int64_t x530 = INT64_MIN;
	volatile uint8_t x532 = 1U;
	int64_t t9 = 5763706288966188LL;

	t9 = ((x529*(x530|x531))>>x532);

	if (t9 != 4611686017353646080LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x693 = UINT64_MAX;
	int16_t x694 = 96;
	int32_t x695 = INT32_MAX;
	uint64_t x696 = 7LLU;
	static uint64_t t10 = 523073320LLU;

	t10 = ((x693*(x694|x695))>>x696);

	if (t10 != 144115188059078656LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x729 = INT8_MIN;
	uint8_t x732 = 0U;
	volatile int32_t t11 = 472;

	t11 = ((x729*(x730|x731))>>x732);

	if (t11 != 4190464) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x821 = 3U;
	int64_t x822 = 7943529LL;
	static uint8_t x823 = UINT8_MAX;
	volatile uint8_t x824 = 45U;
	int64_t t12 = -4LL;

	t12 = ((x821*(x822|x823))>>x824);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x841 = -26LL;
	uint32_t x842 = 1696878U;
	uint64_t x843 = 619568214788LLU;
	volatile uint16_t x844 = 5U;
	volatile uint64_t t13 = 448LLU;

	t13 = ((x841*(x842|x843))>>x844);

	if (t13 != 576460248902903542LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x869 = INT16_MIN;
	volatile uint8_t x872 = 1U;
	volatile int32_t t14 = 141454708;

	t14 = ((x869*(x870|x871))>>x872);

	if (t14 != 16384) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x909 = 1;
	int64_t x910 = INT64_MAX;
	int64_t x911 = 1LL;
	static volatile uint32_t x912 = 49U;
	int64_t t15 = 42LL;

	t15 = ((x909*(x910|x911))>>x912);

	if (t15 != 16383LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x913 = 0;
	int8_t x916 = 1;
	volatile uint32_t t16 = 3144U;

	t16 = ((x913*(x914|x915))>>x916);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x950 = INT8_MIN;
	int8_t x951 = INT8_MIN;
	int8_t x952 = 42;

	t17 = ((x949*(x950|x951))>>x952);

	if (t17 != 4169917LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x1005 = UINT64_MAX;
	int64_t x1006 = 28709672219LL;
	int32_t x1007 = INT32_MIN;
	uint64_t t18 = 31361932615821LLU;

	t18 = ((x1005*(x1006|x1007))>>x1008);

	if (t18 != 661669LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x1073 = 0U;
	int16_t x1074 = 650;
	volatile int32_t x1075 = INT32_MIN;
	int32_t t19 = -903498893;

	t19 = ((x1073*(x1074|x1075))>>x1076);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1189 = -116;
	static int16_t x1190 = -1;
	uint32_t x1191 = UINT32_MAX;
	uint8_t x1192 = 16U;
	static volatile uint32_t t20 = 599U;

	t20 = ((x1189*(x1190|x1191))>>x1192);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint16_t x1341 = 29U;
	int32_t x1342 = INT32_MAX;
	uint64_t x1343 = 754776490LLU;

	t21 = ((x1341*(x1342|x1343))>>x1344);

	if (t21 != 31138512881LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x1373 = UINT32_MAX;
	uint16_t x1375 = 15694U;
	uint8_t x1376 = 0U;

	t22 = ((x1373*(x1374|x1375))>>x1376);

	if (t22 != 4294951586U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x1502 = 140269215037486067LL;
	static int8_t x1503 = INT8_MAX;
	volatile uint16_t x1504 = 0U;
	int64_t t23 = -20679LL;

	t23 = ((x1501*(x1502|x1503))>>x1504);

	if (t23 != 140269215037486079LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x1591 = 53;
	volatile uint8_t x1592 = 3U;
	int32_t t24 = 133041162;

	t24 = ((x1589*(x1590|x1591))>>x1592);

	if (t24 != 23) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x1686 = 9U;
	static volatile uint32_t x1687 = 1369676U;
	uint16_t x1688 = 3U;
	uint32_t t25 = 39386U;

	t25 = ((x1685*(x1686|x1687))>>x1688);

	if (t25 != 241316662U) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x1733 = UINT64_MAX;
	volatile int64_t x1735 = -74202091LL;
	uint64_t t26 = 4373762LLU;

	t26 = ((x1733*(x1734|x1735))>>x1736);

	if (t26 != 141LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x1857 = -1LL;
	static volatile int8_t x1858 = 29;
	int8_t x1859 = -6;
	uint16_t x1860 = 18U;
	static int64_t t27 = 6834349LL;

	t27 = ((x1857*(x1858|x1859))>>x1860);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x1869 = 5U;
	uint8_t x1871 = 72U;
	uint32_t t28 = 0U;

	t28 = ((x1869*(x1870|x1871))>>x1872);

	if (t28 != 22U) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x1881 = UINT32_MAX;
	volatile int16_t x1883 = 0;
	uint16_t x1884 = 17U;
	uint32_t t29 = 403922940U;

	t29 = ((x1881*(x1882|x1883))>>x1884);

	if (t29 != 16384U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1929 = INT8_MIN;
	int8_t x1931 = INT8_MIN;
	uint16_t x1932 = 22U;

	t30 = ((x1929*(x1930|x1931))>>x1932);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x1998 = -1;
	static uint64_t x1999 = 12LLU;
	int8_t x2000 = 8;
	volatile uint64_t t31 = 535126633889LLU;

	t31 = ((x1997*(x1998|x1999))>>x2000);

	if (t31 != 72057594037926147LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x2137 = INT16_MIN;
	volatile int32_t x2138 = INT32_MAX;
	int8_t x2139 = INT8_MIN;
	static uint8_t x2140 = 4U;
	int32_t t32 = 6534380;

	t32 = ((x2137*(x2138|x2139))>>x2140);

	if (t32 != 2048) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x2257 = -1;
	int16_t x2258 = INT16_MIN;
	int16_t x2259 = INT16_MAX;

	t33 = ((x2257*(x2258|x2259))>>x2260);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x2349 = -16157715000LL;
	int32_t x2351 = 0;
	volatile int64_t t34 = -10LL;

	t34 = ((x2349*(x2350|x2351))>>x2352);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x2422 = UINT32_MAX;
	volatile int32_t x2423 = INT32_MIN;
	uint16_t x2424 = 27U;

	t35 = ((x2421*(x2422|x2423))>>x2424);

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x2433 = UINT16_MAX;
	uint8_t x2436 = 18U;
	volatile uint64_t t36 = 38600945238090932LLU;

	t36 = ((x2433*(x2434|x2435))>>x2436);

	if (t36 != 1377589739519LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x2505 = INT16_MAX;
	static uint64_t x2506 = UINT64_MAX;
	int64_t x2507 = -1LL;
	int8_t x2508 = 0;

	t37 = ((x2505*(x2506|x2507))>>x2508);

	if (t37 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x2535 = INT64_MIN;
	uint64_t t38 = 9647218552111757LLU;

	t38 = ((x2533*(x2534|x2535))>>x2536);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x2538 = INT32_MAX;
	uint16_t x2540 = 14U;
	uint32_t t39 = 245956204U;

	t39 = ((x2537*(x2538|x2539))>>x2540);

	if (t39 != 129942U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x2589 = INT32_MAX;
	volatile uint64_t x2590 = UINT64_MAX;
	int16_t x2591 = INT16_MIN;
	uint8_t x2592 = 28U;
	uint64_t t40 = 129563393705014LLU;

	t40 = ((x2589*(x2590|x2591))>>x2592);

	if (t40 != 68719476728LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x2618 = -1LL;
	uint64_t x2619 = UINT64_MAX;
	uint16_t x2620 = 1U;
	volatile uint64_t t41 = 230991080935776LLU;

	t41 = ((x2617*(x2618|x2619))>>x2620);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x2657 = -3;
	int16_t x2658 = INT16_MIN;
	int32_t x2659 = 3075128;
	static uint32_t x2660 = 5U;
	static int32_t t42 = -6561;

	t42 = ((x2657*(x2658|x2659))>>x2660);

	if (t42 != 474) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x2685 = 3270U;
	volatile int8_t x2686 = 1;
	volatile int16_t x2687 = INT16_MAX;
	uint8_t x2688 = 10U;
	volatile int32_t t43 = 265089;

	t43 = ((x2685*(x2686|x2687))>>x2688);

	if (t43 != 104636) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x2729 = 7995U;
	static int16_t x2730 = INT16_MIN;
	int16_t x2732 = 7;
	volatile uint32_t t44 = 555677U;

	t44 = ((x2729*(x2730|x2731))>>x2732);

	if (t44 != 33553869U) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x2757 = 15U;
	static int8_t x2758 = INT8_MIN;
	uint32_t x2759 = 4112U;
	volatile uint32_t t45 = 674559U;

	t45 = ((x2757*(x2758|x2759))>>x2760);

	if (t45 != 8388604U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x2766 = INT32_MIN;
	uint16_t x2767 = 3332U;
	int8_t x2768 = 1;
	volatile int32_t t46 = -274677;

	t46 = ((x2765*(x2766|x2767))>>x2768);

	if (t46 != 1073740158) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x2769 = 264958510314996853LLU;
	uint64_t x2771 = 5280140041901LLU;
	uint16_t x2772 = 0U;

	t47 = ((x2769*(x2770|x2771))>>x2772);

	if (t47 != 18044024605306747153LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x2825 = 7766;
	int8_t x2826 = INT8_MIN;
	static uint64_t x2827 = 1142675444LLU;
	int8_t x2828 = 1;
	static uint64_t t48 = 514009691742LLU;

	t48 = ((x2825*(x2826|x2827))>>x2828);

	if (t48 != 9223372036854729212LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x2929 = INT32_MIN;
	int64_t x2930 = INT64_MIN;
	static int8_t x2931 = INT8_MIN;
	int16_t x2932 = 3;
	volatile int64_t t49 = 441558LL;

	t49 = ((x2929*(x2930|x2931))>>x2932);

	if (t49 != 34359738368LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x2993 = -1LL;
	static volatile int16_t x2994 = -1;
	int16_t x2995 = INT16_MIN;
	uint8_t x2996 = 1U;

	t50 = ((x2993*(x2994|x2995))>>x2996);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x3145 = 195079;
	volatile uint32_t x3147 = 1408391U;
	int8_t x3148 = 15;

	t51 = ((x3145*(x3146|x3147))>>x3148);

	if (t51 != 100656U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x3161 = INT16_MIN;
	volatile int8_t x3162 = 1;
	uint64_t t52 = 114603649729LLU;

	t52 = ((x3161*(x3162|x3163))>>x3164);

	if (t52 != 128LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x3245 = -1;
	int16_t x3246 = INT16_MAX;
	int8_t x3247 = -41;
	uint16_t x3248 = 4U;
	volatile int32_t t53 = -42;

	t53 = ((x3245*(x3246|x3247))>>x3248);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x3253 = INT8_MIN;
	static volatile int32_t x3254 = INT32_MIN;
	volatile int64_t x3255 = INT64_MIN;
	uint8_t x3256 = 1U;
	volatile int64_t t54 = -3995008496627322LL;

	t54 = ((x3253*(x3254|x3255))>>x3256);

	if (t54 != 137438953472LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x3305 = UINT8_MAX;
	uint32_t x3307 = 68398659U;
	uint8_t x3308 = 2U;
	uint32_t t55 = 129023U;

	t55 = ((x3305*(x3306|x3307))>>x3308);

	if (t55 != 1073741760U) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x3310 = 1384U;
	static uint16_t x3311 = 0U;
	static volatile uint32_t t56 = 307285684U;

	t56 = ((x3309*(x3310|x3311))>>x3312);

	if (t56 != 22257488U) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x3322 = 0U;
	static volatile int16_t x3323 = -12;
	volatile uint64_t t57 = 1416925LLU;

	t57 = ((x3321*(x3322|x3323))>>x3324);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x3325 = -1;
	int8_t x3326 = INT8_MIN;
	int64_t x3327 = -1LL;
	volatile uint8_t x3328 = 0U;

	t58 = ((x3325*(x3326|x3327))>>x3328);

	if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x3341 = -33524729785884388LL;
	volatile int16_t x3343 = -1;
	int64_t t59 = 49LL;

	t59 = ((x3341*(x3342|x3343))>>x3344);

	if (t59 != 31971673761LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x3382 = 152874289900442997LLU;
	int8_t x3383 = INT8_MIN;
	uint8_t x3384 = 11U;
	uint64_t t60 = 216243279528211383LLU;

	t60 = ((x3381*(x3382|x3383))>>x3384);

	if (t60 != 9007199254740968LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x3481 = 27825333860064119LLU;
	int64_t x3482 = INT64_MIN;
	int8_t x3484 = 0;

	t61 = ((x3481*(x3482|x3483))>>x3484);

	if (t61 != 18418918739849487497LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x3553 = -496361487LL;
	int16_t x3554 = 3;
	int8_t x3556 = 0;
	int64_t t62 = -19LL;

	t62 = ((x3553*(x3554|x3555))>>x3556);

	if (t62 != 62045185875LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x3593 = -21;
	uint16_t x3594 = 23U;
	int8_t x3595 = -31;
	int8_t x3596 = 28;
	static volatile int32_t t63 = 899799;

	t63 = ((x3593*(x3594|x3595))>>x3596);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x3605 = INT16_MIN;
	uint8_t x3608 = 5U;
	int32_t t64 = -10612736;

	t64 = ((x3605*(x3606|x3607))>>x3608);

	if (t64 != 131072) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x3833 = -1;
	int16_t x3834 = -1;
	static uint8_t x3835 = 3U;
	volatile uint32_t x3836 = 1U;
	int32_t t65 = 0;

	t65 = ((x3833*(x3834|x3835))>>x3836);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int8_t x3973 = -1;
	volatile uint32_t x3974 = 52364146U;
	int16_t x3975 = 2;
	uint8_t x3976 = 28U;
	static volatile uint32_t t66 = 333U;

	t66 = ((x3973*(x3974|x3975))>>x3976);

	if (t66 != 15U) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t t67 = 1972206;

	t67 = ((x4009*(x4010|x4011))>>x4012);

	if (t67 != 2040) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x4037 = -914421991883145LL;
	volatile uint64_t x4038 = 11897451453LLU;
	int8_t x4039 = INT8_MIN;
	uint8_t x4040 = 18U;

	t68 = ((x4037*(x4038|x4039))>>x4040);

	if (t68 != 233712285828LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x4053 = UINT64_MAX;
	int8_t x4054 = -1;
	volatile int8_t x4055 = INT8_MAX;
	volatile int8_t x4056 = 2;
	uint64_t t69 = 8503961924048LLU;

	t69 = ((x4053*(x4054|x4055))>>x4056);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x4061 = INT32_MIN;
	int8_t x4062 = -1;
	int64_t x4063 = 28LL;
	volatile int64_t t70 = 4621501555LL;

	t70 = ((x4061*(x4062|x4063))>>x4064);

	if (t70 != 2147483648LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x4097 = 1;
	static uint32_t x4098 = 1815439019U;
	uint32_t x4099 = UINT32_MAX;
	uint8_t x4100 = 0U;
	uint32_t t71 = UINT32_MAX;

	t71 = ((x4097*(x4098|x4099))>>x4100);

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x4102 = -15670;
	int8_t x4103 = INT8_MIN;
	static uint8_t x4104 = 8U;

	t72 = ((x4101*(x4102|x4103))>>x4104);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x4177 = INT16_MIN;
	static volatile uint64_t x4179 = UINT64_MAX;
	volatile int8_t x4180 = 0;
	volatile uint64_t t73 = 62641690014622226LLU;

	t73 = ((x4177*(x4178|x4179))>>x4180);

	if (t73 != 32768LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x4205 = 94U;
	volatile int16_t x4206 = INT16_MAX;
	int16_t x4207 = 13025;
	static int32_t t74 = -44;

	t74 = ((x4205*(x4206|x4207))>>x4208);

	if (t74 != 3080098) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x4304 = 1U;

	t75 = ((x4301*(x4302|x4303))>>x4304);

	if (t75 != 2097152) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x4329 = 80LLU;
	int16_t x4330 = -2253;
	volatile uint8_t x4331 = 1U;
	volatile uint64_t t76 = 7159110694633480LLU;

	t76 = ((x4329*(x4330|x4331))>>x4332);

	if (t76 != 9223372036854685688LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x4361 = -3LL;
	int64_t x4362 = -59LL;
	volatile uint8_t x4363 = UINT8_MAX;
	volatile int64_t t77 = 4143343419LL;

	t77 = ((x4361*(x4362|x4363))>>x4364);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint64_t x4437 = 788678095318LLU;
	uint8_t x4438 = 24U;
	uint8_t x4440 = 4U;
	volatile uint64_t t78 = 45324LLU;

	t78 = ((x4437*(x4438|x4439))>>x4440);

	if (t78 != 1330894285849LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x4466 = UINT32_MAX;
	static volatile uint32_t x4467 = UINT32_MAX;
	static uint8_t x4468 = 25U;
	static volatile uint32_t t79 = 192506U;

	t79 = ((x4465*(x4466|x4467))>>x4468);

	if (t79 != 127U) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x4521 = 719U;
	int16_t x4522 = 14715;
	volatile uint16_t x4523 = 3782U;
	volatile uint16_t x4524 = 17U;
	volatile int32_t t80 = -6;

	t80 = ((x4521*(x4522|x4523))>>x4524);

	if (t80 != 89) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x4529 = 2910U;
	uint64_t x4530 = 29873614LLU;
	volatile int8_t x4531 = INT8_MIN;
	uint8_t x4532 = 31U;
	volatile uint64_t t81 = 3511063LLU;

	t81 = ((x4529*(x4530|x4531))>>x4532);

	if (t81 != 8589934591LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x4637 = INT32_MAX;
	uint8_t x4638 = UINT8_MAX;
	volatile int8_t x4640 = 0;
	static uint64_t t82 = 50244086918LLU;

	t82 = ((x4637*(x4638|x4639))>>x4640);

	if (t82 != 81361712933889LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x4645 = INT32_MAX;
	volatile int16_t x4647 = -1;
	int8_t x4648 = 14;
	volatile uint64_t t83 = 4LLU;

	t83 = ((x4645*(x4646|x4647))>>x4648);

	if (t83 != 1125899906711552LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int8_t x4741 = INT8_MIN;
	int16_t x4742 = INT16_MIN;
	uint32_t x4743 = 104116868U;
	int16_t x4744 = 5;
	uint32_t t84 = 217U;

	t84 = ((x4741*(x4742|x4743))>>x4744);

	if (t84 != 79344U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x4749 = -1;
	volatile uint64_t x4751 = UINT64_MAX;
	uint32_t x4752 = 1U;
	volatile uint64_t t85 = 1192918291LLU;

	t85 = ((x4749*(x4750|x4751))>>x4752);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x4759 = UINT8_MAX;
	int16_t x4760 = 0;
	int64_t t86 = -53538189045LL;

	t86 = ((x4757*(x4758|x4759))>>x4760);

	if (t86 != 32513LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x4826 = -1;
	uint8_t x4827 = 0U;
	int8_t x4828 = 2;
	uint32_t t87 = 32590696U;

	t87 = ((x4825*(x4826|x4827))>>x4828);

	if (t87 != 1058826578U) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x4862 = 263165189517591847LLU;
	int64_t x4863 = INT64_MAX;
	volatile int16_t x4864 = 27;
	uint64_t t88 = 12977043386LLU;

	t88 = ((x4861*(x4862|x4863))>>x4864);

	if (t88 != 68719476735LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x4905 = -1;
	int8_t x4906 = -30;
	volatile int8_t x4907 = 0;
	int32_t x4908 = 1;
	int32_t t89 = -1331527;

	t89 = ((x4905*(x4906|x4907))>>x4908);

	if (t89 != 15) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x4953 = INT16_MIN;
	uint16_t x4954 = UINT16_MAX;
	uint32_t x4955 = UINT32_MAX;
	volatile int8_t x4956 = 1;
	uint32_t t90 = 1530599U;

	t90 = ((x4953*(x4954|x4955))>>x4956);

	if (t90 != 16384U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x4965 = INT32_MAX;
	uint64_t x4966 = 4919LLU;
	uint32_t x4967 = UINT32_MAX;
	int8_t x4968 = 1;
	uint64_t t91 = 255668818174LLU;

	t91 = ((x4965*(x4966|x4967))>>x4968);

	if (t91 != 4611686015206162432LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x4969 = INT16_MIN;
	uint64_t x4970 = 845639654075LLU;
	int8_t x4971 = 1;
	volatile int64_t x4972 = 3LL;
	volatile uint64_t t92 = 477390LLU;

	t92 = ((x4969*(x4970|x4971))>>x4972);

	if (t92 != 2302379269190602752LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x5013 = UINT32_MAX;
	uint16_t x5014 = 1U;
	uint16_t x5015 = UINT16_MAX;
	uint8_t x5016 = 0U;
	volatile uint32_t t93 = 35U;

	t93 = ((x5013*(x5014|x5015))>>x5016);

	if (t93 != 4294901761U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x5025 = -1;
	static volatile int8_t x5027 = 52;
	uint8_t x5028 = 11U;
	static int32_t t94 = -39847708;

	t94 = ((x5025*(x5026|x5027))>>x5028);

	if (t94 != 1048575) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x5065 = 18;
	volatile int32_t x5066 = 0;
	static uint8_t x5067 = 2U;
	volatile int8_t x5068 = 0;
	int32_t t95 = 32698092;

	t95 = ((x5065*(x5066|x5067))>>x5068);

	if (t95 != 36) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x5166 = 55335106819520LL;
	int32_t x5167 = 1697;
	static uint8_t x5168 = 1U;
	int64_t t96 = 47053LL;

	t96 = ((x5165*(x5166|x5167))>>x5168);

	if (t96 != 164594275236283342LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x5249 = INT64_MAX;
	volatile uint64_t x5250 = 13999155872420LLU;
	int16_t x5251 = INT16_MIN;
	uint8_t x5252 = 0U;
	volatile uint64_t t97 = 256191567789754106LLU;

	t97 = ((x5249*(x5250|x5251))>>x5252);

	if (t97 != 32092LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x5325 = 8U;
	int32_t x5326 = -522836025;
	uint64_t x5327 = UINT64_MAX;
	static volatile int16_t x5328 = 0;
	static volatile uint64_t t98 = 10276314293565LLU;

	t98 = ((x5325*(x5326|x5327))>>x5328);

	if (t98 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x5353 = -35;
	volatile int32_t x5354 = INT32_MIN;
	int64_t x5355 = INT64_MIN;
	uint8_t x5356 = 13U;
	static int64_t t99 = -2938439734257732511LL;

	t99 = ((x5353*(x5354|x5355))>>x5356);

	if (t99 != 9175040LL) { NG(); } else { ; }
	
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

