#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x234 = 12;
int8_t x238 = -3;
volatile uint32_t t5 = 0U;
int8_t x398 = INT8_MIN;
int16_t x399 = INT16_MAX;
volatile uint16_t x461 = 1289U;
uint64_t x462 = UINT64_MAX;
uint32_t x537 = 89U;
int16_t x538 = INT16_MIN;
int8_t x539 = 1;
int32_t x581 = -1;
static int32_t t11 = -22;
int32_t t13 = -19612;
uint64_t x649 = UINT64_MAX;
int8_t x759 = -9;
int8_t x907 = INT8_MIN;
uint16_t x956 = 29U;
int32_t x1281 = INT32_MIN;
static int64_t x1283 = -459703390LL;
volatile uint64_t x1401 = UINT64_MAX;
volatile int32_t x1402 = INT32_MAX;
uint16_t x1403 = 185U;
uint64_t t28 = 218827429LLU;
volatile int8_t x1438 = 1;
uint64_t x1646 = 5LLU;
volatile int64_t x1766 = -136388LL;
volatile uint32_t x1790 = UINT32_MAX;
uint32_t x1827 = 12882U;
volatile int8_t x1984 = 1;
int64_t x2035 = -54682007484LL;
volatile uint16_t x2036 = 30U;
int64_t x2191 = 10520000568LL;
static volatile uint8_t x2192 = 32U;
uint32_t x2300 = 13U;
int16_t x2311 = INT16_MIN;
int64_t x2381 = -1LL;
int8_t x2392 = 13;
uint32_t x2442 = 2U;
int32_t x2462 = INT32_MIN;
int32_t x2534 = -168;
uint64_t x2537 = UINT64_MAX;
static int64_t x2598 = -1LL;
int16_t x2599 = INT16_MIN;
int32_t x2622 = INT32_MIN;
uint32_t x2623 = 8U;
static int8_t x2666 = -1;
int32_t x2667 = INT32_MAX;
int32_t t57 = 2;
int32_t x2713 = INT32_MIN;
int8_t x2716 = 1;
volatile int32_t x2785 = -17954465;
volatile int64_t x2786 = INT64_MIN;
int16_t x2850 = INT16_MIN;
uint8_t x2851 = UINT8_MAX;
uint64_t x2959 = UINT64_MAX;
uint16_t x3080 = 6U;
uint64_t x3331 = 29035667381028LLU;
int16_t x3332 = 1;
volatile int8_t x3339 = -1;
uint16_t x3341 = 53U;
int32_t x3478 = INT32_MIN;
static int8_t x3518 = INT8_MIN;
uint64_t x3520 = 17LLU;
uint64_t x3641 = 80657001LLU;
volatile uint64_t x3665 = 48123604600652LLU;
uint32_t x3667 = 3560738U;
static volatile int16_t x3797 = INT16_MIN;
int16_t x3799 = -156;
int32_t t75 = -342;
int16_t x3842 = -1;
uint32_t x3844 = 1U;
int8_t x3892 = 2;
volatile uint64_t x3909 = UINT64_MAX;
static volatile uint64_t t80 = 4715424764964890LLU;
static volatile uint64_t t81 = 96914454037557288LLU;
int64_t x3983 = -1LL;
static volatile uint8_t x3984 = 5U;
volatile uint32_t t85 = 1818202390U;
int16_t x4065 = INT16_MIN;
int32_t x4067 = INT32_MAX;
uint64_t t87 = 1882496LLU;
volatile uint64_t x4111 = UINT64_MAX;
uint32_t t89 = 828657976U;
uint64_t x4273 = 213240679702980LLU;
int32_t x4373 = INT32_MAX;
volatile int64_t x4473 = -1LL;
int8_t x4476 = 1;
int16_t x4657 = INT16_MAX;
int16_t x4687 = -991;
volatile uint64_t t95 = 1857LLU;
volatile int8_t x4749 = -1;
int32_t t96 = 3577;
int32_t x4754 = -1;
static volatile uint64_t x4805 = 2114365LLU;


void f0(void) {
	uint64_t x77 = 3893056424176188122LLU;
	int64_t x78 = 2002441LL;
	static int64_t x79 = INT64_MIN;
	uint8_t x80 = 25U;
	volatile uint64_t t0 = 902626LLU;

	t0 = ((x77*(x78|x79))<<x80);

	if (t0 != 1458523594656055296LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x81 = 63003339207298LLU;
	volatile int64_t x82 = INT64_MIN;
	uint8_t x83 = 0U;
	volatile uint16_t x84 = 0U;
	static uint64_t t1 = 4015469193LLU;

	t1 = ((x81*(x82|x83))<<x84);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x201 = 0LLU;
	int32_t x202 = 66474;
	uint8_t x203 = 1U;
	uint32_t x204 = 2U;
	static uint64_t t2 = 6761224545LLU;

	t2 = ((x201*(x202|x203))<<x204);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x233 = -43;
	int64_t x235 = -1LL;
	int8_t x236 = 2;
	volatile int64_t t3 = -6LL;

	t3 = ((x233*(x234|x235))<<x236);

	if (t3 != 172LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x237 = 60U;
	int8_t x239 = 39;
	uint8_t x240 = 10U;
	static volatile uint32_t t4 = 65495U;

	t4 = ((x237*(x238|x239))<<x240);

	if (t4 != 4294905856U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x249 = 48;
	volatile uint32_t x250 = 50570697U;
	uint16_t x251 = 31U;
	uint64_t x252 = 8LLU;

	t5 = ((x249*(x250|x251))<<x252);

	if (t5 != 2937704448U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x297 = -1;
	int32_t x298 = INT32_MIN;
	volatile int64_t x299 = -401478758LL;
	static uint16_t x300 = 26U;
	int64_t t6 = 12LL;

	t6 = ((x297*(x298|x299))<<x300);

	if (t6 != 26942783369510912LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x397 = 1476528870LLU;
	volatile uint8_t x400 = 2U;
	volatile uint64_t t7 = 18LLU;

	t7 = ((x397*(x398|x399))<<x400);

	if (t7 != 18446744067803436136LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x463 = 9U;
	static volatile uint8_t x464 = 3U;
	static uint64_t t8 = 124876589810621LLU;

	t8 = ((x461*(x462|x463))<<x464);

	if (t8 != 18446744073709541304LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x540 = 10;
	uint32_t t9 = 118U;

	t9 = ((x537*(x538|x539))<<x540);

	if (t9 != 1308713984U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x573 = -2329;
	uint8_t x574 = 24U;
	static uint32_t x575 = 5812609U;
	int8_t x576 = 6;
	uint32_t t10 = 282U;

	t10 = ((x573*(x574|x575))<<x576);

	if (t10 != 1175569344U) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x582 = UINT16_MAX;
	volatile int16_t x583 = INT16_MIN;
	volatile uint64_t x584 = 3LLU;

	t11 = ((x581*(x582|x583))<<x584);

	if (t11 != 8) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x601 = INT8_MIN;
	volatile int16_t x602 = INT16_MIN;
	int8_t x603 = -1;
	uint16_t x604 = 2U;
	int32_t t12 = 56766;

	t12 = ((x601*(x602|x603))<<x604);

	if (t12 != 512) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x605 = INT16_MIN;
	int32_t x606 = -124526892;
	volatile int32_t x607 = -603;
	static uint16_t x608 = 0U;

	t13 = ((x605*(x606|x607))<<x608);

	if (t13 != 360448) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x650 = 13U;
	volatile int32_t x651 = 11685821;
	static uint16_t x652 = 7U;
	volatile uint64_t t14 = 1527558581636450835LLU;

	t14 = ((x649*(x650|x651))<<x652);

	if (t14 != 18446744072213766528LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x677 = 0U;
	int32_t x678 = -1;
	uint32_t x679 = 4310U;
	static uint8_t x680 = 5U;
	volatile uint32_t t15 = 2388899U;

	t15 = ((x677*(x678|x679))<<x680);

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x757 = INT16_MIN;
	int16_t x758 = INT16_MIN;
	volatile uint8_t x760 = 8U;
	static int32_t t16 = 8927;

	t16 = ((x757*(x758|x759))<<x760);

	if (t16 != 75497472) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x785 = -1LL;
	int16_t x786 = -1;
	int32_t x787 = 107251;
	uint64_t x788 = 11LLU;
	volatile int64_t t17 = -506LL;

	t17 = ((x785*(x786|x787))<<x788);

	if (t17 != 2048LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x877 = 666U;
	static uint32_t x878 = 0U;
	int8_t x879 = INT8_MIN;
	uint8_t x880 = 12U;
	uint32_t t18 = 23U;

	t18 = ((x877*(x878|x879))<<x880);

	if (t18 != 3945791488U) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x893 = 42U;
	uint32_t x894 = 45840U;
	uint32_t x895 = 433216494U;
	uint8_t x896 = 3U;
	volatile uint32_t t19 = 3413101U;

	t19 = ((x893*(x894|x895))<<x896);

	if (t19 != 3840589152U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x905 = INT8_MIN;
	int64_t x906 = 104555519560866495LL;
	int16_t x908 = 0;
	volatile int64_t t20 = 2618251650858846LL;

	t20 = ((x905*(x906|x907))<<x908);

	if (t20 != 8320LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x953 = 0;
	uint16_t x954 = UINT16_MAX;
	int32_t x955 = 212401894;
	int32_t t21 = 83;

	t21 = ((x953*(x954|x955))<<x956);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x1089 = -1;
	static volatile int32_t x1090 = INT32_MAX;
	uint32_t x1091 = UINT32_MAX;
	volatile int8_t x1092 = 1;
	uint32_t t22 = 2250U;

	t22 = ((x1089*(x1090|x1091))<<x1092);

	if (t22 != 2U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x1093 = INT8_MIN;
	static int16_t x1094 = INT16_MAX;
	uint32_t x1095 = 1572760U;
	uint8_t x1096 = 1U;
	volatile uint32_t t23 = 405U;

	t23 = ((x1093*(x1094|x1095))<<x1096);

	if (t23 != 3892314368U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x1109 = -1;
	int16_t x1110 = -1;
	static uint16_t x1111 = 1U;
	volatile uint8_t x1112 = 3U;
	int32_t t24 = 12115085;

	t24 = ((x1109*(x1110|x1111))<<x1112);

	if (t24 != 8) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1282 = -960LL;
	int16_t x1284 = 0;
	volatile int64_t t25 = -14637376865LL;

	t25 = ((x1281*(x1282|x1283))<<x1284);

	if (t25 != 64424509440LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1305 = 0;
	static volatile int16_t x1306 = INT16_MIN;
	int64_t x1307 = 811113LL;
	uint16_t x1308 = 8U;
	int64_t t26 = -5675LL;

	t26 = ((x1305*(x1306|x1307))<<x1308);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint32_t x1317 = 101U;
	int8_t x1318 = INT8_MIN;
	static uint64_t x1319 = 23723148131883310LLU;
	uint8_t x1320 = 2U;
	uint64_t t27 = 1078539279805LLU;

	t27 = ((x1317*(x1318|x1319))<<x1320);

	if (t27 != 18446744073709518488LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x1404 = 1U;

	t28 = ((x1401*(x1402|x1403))<<x1404);

	if (t28 != 18446744069414584322LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1437 = -1;
	static int32_t x1439 = -1;
	volatile uint16_t x1440 = 3U;
	int32_t t29 = -6;

	t29 = ((x1437*(x1438|x1439))<<x1440);

	if (t29 != 8) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x1645 = UINT16_MAX;
	volatile int16_t x1647 = INT16_MIN;
	uint32_t x1648 = 9U;
	uint64_t t30 = 710LLU;

	t30 = ((x1645*(x1646|x1647))<<x1648);

	if (t30 != 18446742974382470656LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x1765 = INT32_MIN;
	uint32_t x1767 = 10U;
	int8_t x1768 = 1;
	int64_t t31 = 277659732126478247LL;

	t31 = ((x1765*(x1766|x1767))<<x1768);

	if (t31 != 585773409632256LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1789 = 2U;
	int16_t x1791 = 12;
	static int8_t x1792 = 0;
	uint32_t t32 = 81388105U;

	t32 = ((x1789*(x1790|x1791))<<x1792);

	if (t32 != 4294967294U) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x1825 = 4U;
	static int16_t x1826 = INT16_MAX;
	uint16_t x1828 = 3U;
	volatile uint32_t t33 = 39U;

	t33 = ((x1825*(x1826|x1827))<<x1828);

	if (t33 != 1048544U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x1893 = INT8_MIN;
	int32_t x1894 = 0;
	volatile int64_t x1895 = -1LL;
	volatile uint64_t x1896 = 8LLU;
	int64_t t34 = 339574989465LL;

	t34 = ((x1893*(x1894|x1895))<<x1896);

	if (t34 != 32768LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x1909 = 2U;
	static uint64_t x1910 = UINT64_MAX;
	volatile int8_t x1911 = -1;
	uint8_t x1912 = 17U;
	uint64_t t35 = 1348LLU;

	t35 = ((x1909*(x1910|x1911))<<x1912);

	if (t35 != 18446744073709289472LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1981 = -772;
	int64_t x1982 = -1LL;
	uint8_t x1983 = UINT8_MAX;
	volatile int64_t t36 = -14115LL;

	t36 = ((x1981*(x1982|x1983))<<x1984);

	if (t36 != 1544LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x2033 = -182;
	int8_t x2034 = -1;
	volatile int64_t t37 = 1175749995684LL;

	t37 = ((x2033*(x2034|x2035))<<x2036);

	if (t37 != 195421011968LL) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int16_t x2049 = 858;
	volatile int8_t x2050 = INT8_MAX;
	volatile int16_t x2051 = 1279;
	volatile uint32_t x2052 = 1U;
	static int32_t t38 = 23;

	t38 = ((x2049*(x2050|x2051))<<x2052);

	if (t38 != 2194764) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x2129 = -48;
	int64_t x2130 = -14452117LL;
	int32_t x2131 = -295;
	volatile uint8_t x2132 = 6U;
	volatile int64_t t39 = 180509569678256LL;

	t39 = ((x2129*(x2130|x2131))<<x2132);

	if (t39 != 801792LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x2189 = 1080024457619178783LLU;
	uint16_t x2190 = UINT16_MAX;
	volatile uint64_t t40 = 51025981844LLU;

	t40 = ((x2189*(x2190|x2191))<<x2192);

	if (t40 != 9526514956070027264LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x2241 = 392LLU;
	int32_t x2242 = INT32_MAX;
	volatile uint8_t x2243 = 1U;
	static int8_t x2244 = 27;
	uint64_t t41 = 413314150299240662LLU;

	t41 = ((x2241*(x2242|x2243))<<x2244);

	if (t41 != 2305842956600344576LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x2289 = INT32_MIN;
	uint32_t x2290 = 5091973U;
	uint16_t x2291 = 29169U;
	int8_t x2292 = 17;
	uint32_t t42 = 855994U;

	t42 = ((x2289*(x2290|x2291))<<x2292);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x2297 = 7U;
	int16_t x2298 = INT16_MIN;
	int16_t x2299 = INT16_MIN;
	volatile uint32_t t43 = 45206U;

	t43 = ((x2297*(x2298|x2299))<<x2300);

	if (t43 != 2415919104U) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x2309 = -8996;
	static int64_t x2310 = INT64_MAX;
	uint16_t x2312 = 14U;
	volatile int64_t t44 = -42LL;

	t44 = ((x2309*(x2310|x2311))<<x2312);

	if (t44 != 147390464LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2329 = INT8_MIN;
	int64_t x2330 = INT64_MAX;
	uint64_t x2331 = 7619950127481LLU;
	int16_t x2332 = 0;
	volatile uint64_t t45 = 117198LLU;

	t45 = ((x2329*(x2330|x2331))<<x2332);

	if (t45 != 128LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x2337 = 30LL;
	int16_t x2338 = INT16_MAX;
	uint32_t x2339 = 1246705719U;
	volatile uint16_t x2340 = 2U;
	int64_t t46 = -89339629711015013LL;

	t46 = ((x2337*(x2338|x2339))<<x2340);

	if (t46 != 149606891400LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x2382 = INT8_MIN;
	int32_t x2383 = INT32_MAX;
	uint8_t x2384 = 2U;
	int64_t t47 = 15197527338LL;

	t47 = ((x2381*(x2382|x2383))<<x2384);

	if (t47 != 4LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x2389 = 1805825392190LL;
	static uint64_t x2390 = UINT64_MAX;
	uint8_t x2391 = 9U;
	uint64_t t48 = 0LLU;

	t48 = ((x2389*(x2390|x2391))<<x2392);

	if (t48 != 18431950752096731136LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x2441 = INT8_MIN;
	uint8_t x2443 = 0U;
	uint8_t x2444 = 2U;
	uint32_t t49 = 3383U;

	t49 = ((x2441*(x2442|x2443))<<x2444);

	if (t49 != 4294966272U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x2461 = 16578U;
	int8_t x2463 = -20;
	volatile int8_t x2464 = 0;
	volatile uint32_t t50 = 121U;

	t50 = ((x2461*(x2462|x2463))<<x2464);

	if (t50 != 4294635736U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x2489 = 421679LL;
	uint32_t x2490 = 116938U;
	uint16_t x2491 = 3U;
	static uint8_t x2492 = 10U;
	volatile int64_t t51 = 247486667LL;

	t51 = ((x2489*(x2490|x2491))<<x2492);

	if (t51 != 50494177874944LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x2533 = -1;
	int32_t x2535 = INT32_MIN;
	volatile int8_t x2536 = 0;
	volatile int32_t t52 = 7874445;

	t52 = ((x2533*(x2534|x2535))<<x2536);

	if (t52 != 168) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x2538 = 4219894170LLU;
	uint32_t x2539 = UINT32_MAX;
	volatile uint16_t x2540 = 1U;
	volatile uint64_t t53 = 3872687LLU;

	t53 = ((x2537*(x2538|x2539))<<x2540);

	if (t53 != 18446744065119617026LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x2597 = -1LL;
	int8_t x2600 = 62;
	static volatile int64_t t54 = 2713589LL;

	t54 = ((x2597*(x2598|x2599))<<x2600);

	if (t54 != 4611686018427387904LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x2601 = -1890;
	static int32_t x2602 = INT32_MAX;
	int8_t x2603 = -58;
	static uint16_t x2604 = 0U;
	int32_t t55 = -1;

	t55 = ((x2601*(x2602|x2603))<<x2604);

	if (t55 != 1890) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x2621 = 18;
	uint8_t x2624 = 3U;
	uint32_t t56 = 0U;

	t56 = ((x2621*(x2622|x2623))<<x2624);

	if (t56 != 1152U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x2665 = INT16_MIN;
	volatile int64_t x2668 = 2LL;

	t57 = ((x2665*(x2666|x2667))<<x2668);

	if (t57 != 131072) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x2714 = 1246U;
	uint64_t x2715 = UINT64_MAX;
	static uint64_t t58 = 10588299320922307LLU;

	t58 = ((x2713*(x2714|x2715))<<x2716);

	if (t58 != 4294967296LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x2787 = -1LL;
	uint32_t x2788 = 29U;
	int64_t t59 = -1LL;

	t59 = ((x2785*(x2786|x2787))<<x2788);

	if (t59 != 9639229999022080LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x2849 = 0U;
	uint8_t x2852 = 2U;
	uint32_t t60 = 289973U;

	t60 = ((x2849*(x2850|x2851))<<x2852);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x2957 = -3434867605396LL;
	int32_t x2958 = -1;
	int8_t x2960 = 1;
	volatile uint64_t t61 = 3773LLU;

	t61 = ((x2957*(x2958|x2959))<<x2960);

	if (t61 != 6869735210792LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x3077 = 0;
	int8_t x3078 = 1;
	volatile uint32_t x3079 = UINT32_MAX;
	uint32_t t62 = 615113U;

	t62 = ((x3077*(x3078|x3079))<<x3080);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x3125 = -1;
	static int8_t x3126 = 21;
	uint64_t x3127 = UINT64_MAX;
	int64_t x3128 = 4LL;
	volatile uint64_t t63 = 4479747987313320663LLU;

	t63 = ((x3125*(x3126|x3127))<<x3128);

	if (t63 != 16LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x3329 = -22517294;
	int16_t x3330 = -1;
	static uint64_t t64 = 118246060LLU;

	t64 = ((x3329*(x3330|x3331))<<x3332);

	if (t64 != 45034588LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x3337 = -120;
	volatile int64_t x3338 = -452969770LL;
	uint32_t x3340 = 1U;
	volatile int64_t t65 = 84775779703LL;

	t65 = ((x3337*(x3338|x3339))<<x3340);

	if (t65 != 240LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x3342 = 1U;
	volatile int16_t x3343 = INT16_MIN;
	volatile uint8_t x3344 = 2U;
	static volatile uint32_t t66 = 242344981U;

	t66 = ((x3341*(x3342|x3343))<<x3344);

	if (t66 != 4288020692U) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x3425 = INT8_MIN;
	int32_t x3426 = -901;
	int64_t x3427 = INT64_MIN;
	int16_t x3428 = 4;
	volatile int64_t t67 = -1LL;

	t67 = ((x3425*(x3426|x3427))<<x3428);

	if (t67 != 1845248LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x3477 = -1;
	uint64_t x3479 = 1590857200203307934LLU;
	uint8_t x3480 = 1U;
	uint64_t t68 = 2934847543412LLU;

	t68 = ((x3477*(x3478|x3479))<<x3480);

	if (t68 != 990169284LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x3517 = 387727104U;
	int16_t x3519 = 68;
	uint32_t t69 = 406U;

	t69 = ((x3517*(x3518|x3519))<<x3520);

	if (t69 != 2013265920U) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x3585 = 759574189781LLU;
	int8_t x3586 = INT8_MIN;
	uint16_t x3587 = 3303U;
	volatile uint8_t x3588 = 0U;
	uint64_t t70 = 62635LLU;

	t70 = ((x3585*(x3586|x3587))<<x3588);

	if (t70 != 18446725084354807091LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x3613 = INT16_MIN;
	uint32_t x3614 = 96243008U;
	int64_t x3615 = -1LL;
	volatile uint64_t x3616 = 0LLU;
	volatile int64_t t71 = 11LL;

	t71 = ((x3613*(x3614|x3615))<<x3616);

	if (t71 != 32768LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x3642 = -11;
	volatile int64_t x3643 = INT64_MIN;
	int8_t x3644 = 12;
	uint64_t t72 = 11121735LLU;

	t72 = ((x3641*(x3642|x3643))<<x3644);

	if (t72 != 18446740439627714560LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x3666 = 91U;
	volatile int8_t x3668 = 2;
	uint64_t t73 = 4886187LLU;

	t73 = ((x3665*(x3666|x3667))<<x3668);

	if (t73 != 2909791670050027024LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x3749 = -812;
	int8_t x3750 = INT8_MIN;
	uint16_t x3751 = 22U;
	uint32_t x3752 = 14U;
	int32_t t74 = 0;

	t74 = ((x3749*(x3750|x3751))<<x3752);

	if (t74 != 1410203648) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x3798 = -1;
	uint16_t x3800 = 13U;

	t75 = ((x3797*(x3798|x3799))<<x3800);

	if (t75 != 268435456) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x3801 = 1U;
	static volatile int16_t x3802 = -1;
	uint64_t x3803 = 873148487870LLU;
	uint8_t x3804 = 28U;
	volatile uint64_t t76 = 21572LLU;

	t76 = ((x3801*(x3802|x3803))<<x3804);

	if (t76 != 18446744073441116160LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x3841 = 463227275817933LLU;
	uint64_t x3843 = 1739335389LLU;
	volatile uint64_t t77 = 647793629093973167LLU;

	t77 = ((x3841*(x3842|x3843))<<x3844);

	if (t77 != 18445817619157915750LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x3885 = UINT32_MAX;
	volatile int8_t x3886 = -6;
	int32_t x3887 = INT32_MIN;
	static int16_t x3888 = 0;
	volatile uint32_t t78 = 4U;

	t78 = ((x3885*(x3886|x3887))<<x3888);

	if (t78 != 6U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x3889 = UINT32_MAX;
	volatile int16_t x3890 = INT16_MIN;
	int32_t x3891 = 518;
	static volatile uint32_t t79 = 7577U;

	t79 = ((x3889*(x3890|x3891))<<x3892);

	if (t79 != 129000U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x3910 = -30569262716451LL;
	uint8_t x3911 = 0U;
	volatile uint16_t x3912 = 3U;

	t80 = ((x3909*(x3910|x3911))<<x3912);

	if (t80 != 244554101731608LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint32_t x3933 = UINT32_MAX;
	static uint64_t x3934 = UINT64_MAX;
	uint8_t x3935 = 1U;
	int8_t x3936 = 1;

	t81 = ((x3933*(x3934|x3935))<<x3936);

	if (t81 != 18446744065119617026LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x3965 = -400505815282LL;
	int32_t x3966 = INT32_MIN;
	uint64_t x3967 = UINT64_MAX;
	int8_t x3968 = 0;
	uint64_t t82 = 86257026036666120LLU;

	t82 = ((x3965*(x3966|x3967))<<x3968);

	if (t82 != 400505815282LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x3981 = -1;
	int16_t x3982 = INT16_MIN;
	int64_t t83 = 20917106577158188LL;

	t83 = ((x3981*(x3982|x3983))<<x3984);

	if (t83 != 32LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x4017 = 1283306954U;
	volatile uint32_t x4018 = UINT32_MAX;
	volatile uint64_t x4019 = 2LLU;
	static uint8_t x4020 = 0U;
	uint64_t t84 = 3LLU;

	t84 = ((x4017*(x4018|x4019))<<x4020);

	if (t84 != 5511761396876069430LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x4029 = 93683U;
	static int32_t x4030 = INT32_MAX;
	int8_t x4031 = INT8_MAX;
	uint8_t x4032 = 1U;

	t85 = ((x4029*(x4030|x4031))<<x4032);

	if (t85 != 4294779930U) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x4033 = 10392243684305LLU;
	int64_t x4034 = INT64_MIN;
	int64_t x4035 = -1769845922995457309LL;
	int16_t x4036 = 17;
	uint64_t t86 = 4190086LLU;

	t86 = ((x4033*(x4034|x4035))<<x4036);

	if (t86 != 16188390444481511424LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x4066 = UINT64_MAX;
	volatile uint8_t x4068 = 7U;

	t87 = ((x4065*(x4066|x4067))<<x4068);

	if (t87 != 4194304LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x4109 = UINT8_MAX;
	int32_t x4110 = -1;
	static int8_t x4112 = 30;
	volatile uint64_t t88 = 2LLU;

	t88 = ((x4109*(x4110|x4111))<<x4112);

	if (t88 != 18446743799905386496LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x4205 = INT16_MIN;
	uint32_t x4206 = 161U;
	volatile uint16_t x4207 = 73U;
	uint8_t x4208 = 1U;

	t89 = ((x4205*(x4206|x4207))<<x4208);

	if (t89 != 4279697408U) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x4274 = 803582U;
	int16_t x4275 = 94;
	uint8_t x4276 = 1U;
	uint64_t t90 = 3LLU;

	t90 = ((x4273*(x4274|x4275))<<x4276);

	if (t90 != 10671350427388219632LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x4374 = UINT8_MAX;
	volatile uint32_t x4375 = UINT32_MAX;
	uint8_t x4376 = 7U;
	static volatile uint32_t t91 = 1158068758U;

	t91 = ((x4373*(x4374|x4375))<<x4376);

	if (t91 != 128U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x4474 = -144002245921277668LL;
	uint8_t x4475 = 104U;
	volatile int64_t t92 = -1758016678LL;

	t92 = ((x4473*(x4474|x4475))<<x4476);

	if (t92 != 288004491842555144LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x4645 = INT32_MIN;
	volatile uint64_t x4646 = UINT64_MAX;
	uint16_t x4647 = 6510U;
	int8_t x4648 = 3;
	volatile uint64_t t93 = 0LLU;

	t93 = ((x4645*(x4646|x4647))<<x4648);

	if (t93 != 17179869184LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x4658 = 171LLU;
	volatile uint16_t x4659 = 314U;
	volatile uint16_t x4660 = 38U;
	static uint64_t t94 = 35519247626720792LLU;

	t94 = ((x4657*(x4658|x4659))<<x4660);

	if (t94 != 3990067498937483264LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x4685 = 5333176938639138900LLU;
	int32_t x4686 = INT32_MIN;
	volatile int32_t x4688 = 0;

	t95 = ((x4685*(x4686|x4687))<<x4688);

	if (t95 != 9037202963254663892LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x4750 = INT8_MAX;
	int8_t x4751 = -5;
	int8_t x4752 = 0;

	t96 = ((x4749*(x4750|x4751))<<x4752);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x4753 = 0;
	volatile int32_t x4755 = -2611598;
	uint8_t x4756 = 3U;
	int32_t t97 = -83;

	t97 = ((x4753*(x4754|x4755))<<x4756);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x4806 = INT32_MIN;
	static uint32_t x4807 = 146108U;
	int16_t x4808 = 1;
	static uint64_t t98 = 243538601143LLU;

	t98 = ((x4805*(x4806|x4807))<<x4808);

	if (t98 != 9081746378089880LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x4873 = 52496037LLU;
	uint64_t x4874 = 8348958789217LLU;
	int32_t x4875 = INT32_MAX;
	uint16_t x4876 = 11U;
	uint64_t t99 = 11LLU;

	t99 = ((x4873*(x4874|x4875))<<x4876);

	if (t99 != 6027997624979347456LLU) { NG(); } else { ; }
	
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

