#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 455;
volatile int64_t t1 = 3504396LL;
volatile uint32_t x82 = UINT32_MAX;
volatile int64_t x83 = 5LL;
volatile uint32_t t2 = 1997050U;
int32_t x137 = 6;
volatile int64_t x140 = -1LL;
int64_t t3 = 232746458888699573LL;
static int8_t x266 = INT8_MAX;
static volatile uint16_t x298 = 1U;
volatile int32_t t7 = -33935047;
int32_t x304 = INT32_MIN;
volatile int32_t t8 = 16103;
uint32_t x399 = UINT32_MAX;
int32_t t11 = 0;
int16_t x437 = 50;
int16_t x439 = 3;
int32_t t12 = 117653;
uint32_t x834 = 3U;
int8_t x963 = -1;
static int8_t x1145 = 7;
uint32_t x1361 = 2U;
int64_t x1362 = -23LL;
int8_t x1364 = -8;
int16_t x1415 = INT16_MIN;
uint64_t t27 = 17332LLU;
uint64_t t28 = 4LLU;
int16_t x1738 = -1;
uint32_t x1763 = UINT32_MAX;
volatile int16_t x1764 = -6;
volatile int32_t x1822 = -1;
int8_t x1833 = 17;
uint64_t x1834 = UINT64_MAX;
static int16_t x1836 = -61;
uint64_t x1957 = 95LLU;
uint32_t x1959 = 1U;
volatile uint64_t t36 = 15271565124913LLU;
int8_t x1999 = -1;
volatile uint16_t x2070 = 2657U;
int64_t x2072 = -1LL;
int16_t x2118 = INT16_MAX;
static uint16_t x2143 = 0U;
uint32_t t42 = 6U;
uint8_t x2255 = 45U;
static volatile int64_t x2327 = -1LL;
volatile int32_t t44 = 1684448;
int8_t x2437 = 1;
int64_t x2442 = 982404LL;
int64_t t46 = 331LL;
static int64_t x2531 = INT64_MIN;
volatile int64_t t47 = -210466665776169863LL;
uint16_t x2652 = 30814U;
volatile int32_t x2668 = -1;
int64_t t49 = -79723084064LL;
static int64_t x2751 = -1LL;
volatile int64_t x2752 = -1LL;
volatile int64_t t51 = 547005814LL;
uint64_t x2909 = UINT64_MAX;
volatile int16_t x2933 = -1;
static int16_t x2934 = 302;
static volatile int32_t t56 = 882;
uint64_t x3084 = UINT64_MAX;
uint8_t x3110 = 49U;
uint8_t x3123 = 13U;
static volatile int16_t x3124 = -1;
int16_t x3196 = -1;
uint32_t x3227 = UINT32_MAX;
volatile int32_t t62 = 143954305;
int8_t x3433 = INT8_MAX;
int8_t x3435 = 2;
static int64_t x3469 = INT64_MIN;
volatile int64_t x3505 = -202629963961297LL;
int16_t x3637 = -52;
int64_t x3639 = -1LL;
volatile uint32_t x3653 = UINT32_MAX;
int64_t x3654 = INT64_MIN;
int16_t x3738 = INT16_MAX;
uint32_t x3740 = UINT32_MAX;
static uint64_t x3821 = 134319725403086LLU;
int8_t x3822 = -2;
static uint64_t x3823 = 3LLU;
volatile int8_t x3860 = -1;
int8_t x3924 = INT8_MIN;
uint64_t t77 = 88461949855893915LLU;
static volatile int32_t t79 = 100307180;
uint16_t x4067 = 38U;
static volatile int8_t x4068 = 7;
volatile uint32_t t81 = 1754U;
uint8_t x4170 = UINT8_MAX;
int32_t x4183 = -1;
static uint8_t x4366 = 42U;
int32_t x4367 = INT32_MAX;
static uint16_t x4399 = 27U;
volatile uint64_t x4794 = 573001734033LLU;
volatile int32_t x4795 = -1;
static uint64_t x4845 = 37477844243LLU;
volatile uint64_t t93 = 162243890918675695LLU;
volatile uint16_t x4862 = 6U;
volatile int16_t x4864 = -1;
volatile int64_t x4904 = -1LL;
volatile int64_t x4921 = INT64_MAX;
static int16_t x4923 = -1;
uint32_t x5005 = 9U;
static int16_t x5006 = 374;
int64_t x5010 = INT64_MAX;
uint16_t x5050 = 42U;
uint64_t x5051 = UINT64_MAX;


void f0(void) {
	int16_t x41 = INT16_MAX;
	int16_t x42 = INT16_MIN;
	volatile int8_t x43 = -1;
	int32_t x44 = -1;

	t0 = ((x41&x42)>>(x43-x44));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x69 = 5U;
	int64_t x70 = INT64_MAX;
	volatile uint16_t x71 = 2U;
	int64_t x72 = -1LL;

	t1 = ((x69&x70)>>(x71-x72));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x81 = INT32_MIN;
	int64_t x84 = -1LL;

	t2 = ((x81&x82)>>(x83-x84));

	if (t2 != 33554432U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x138 = INT64_MIN;
	int16_t x139 = -1;

	t3 = ((x137&x138)>>(x139-x140));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x141 = 0;
	uint8_t x142 = 36U;
	volatile int32_t x143 = -1;
	int8_t x144 = -1;
	volatile int32_t t4 = -45;

	t4 = ((x141&x142)>>(x143-x144));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x185 = -2;
	static uint64_t x186 = 1432130LLU;
	int32_t x187 = INT32_MIN;
	int32_t x188 = INT32_MIN;
	volatile uint64_t t5 = 31636621885371874LLU;

	t5 = ((x185&x186)>>(x187-x188));

	if (t5 != 1432130LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int64_t x265 = -365555147526LL;
	int8_t x267 = INT8_MIN;
	volatile int8_t x268 = INT8_MIN;
	volatile int64_t t6 = -16606710198200815LL;

	t6 = ((x265&x266)>>(x267-x268));

	if (t6 != 122LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x297 = -1;
	int8_t x299 = -1;
	volatile int32_t x300 = -1;

	t7 = ((x297&x298)>>(x299-x300));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x301 = 152;
	volatile uint16_t x302 = 201U;
	int32_t x303 = INT32_MIN;

	t8 = ((x301&x302)>>(x303-x304));

	if (t8 != 136) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x397 = UINT16_MAX;
	int64_t x398 = -1LL;
	int8_t x400 = -5;
	int64_t t9 = 141629561222344123LL;

	t9 = ((x397&x398)>>(x399-x400));

	if (t9 != 4095LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x401 = INT8_MAX;
	int16_t x402 = -1;
	volatile int8_t x403 = 0;
	static int16_t x404 = 0;
	int32_t t10 = -889;

	t10 = ((x401&x402)>>(x403-x404));

	if (t10 != 127) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x417 = INT16_MAX;
	int16_t x418 = INT16_MAX;
	static int64_t x419 = -1LL;
	int64_t x420 = -1LL;

	t11 = ((x417&x418)>>(x419-x420));

	if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int32_t x438 = 52;
	int16_t x440 = -1;

	t12 = ((x437&x438)>>(x439-x440));

	if (t12 != 3) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x441 = UINT8_MAX;
	int32_t x442 = INT32_MAX;
	volatile int8_t x443 = INT8_MIN;
	int8_t x444 = INT8_MIN;
	static int32_t t13 = 2227404;

	t13 = ((x441&x442)>>(x443-x444));

	if (t13 != 255) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x489 = 33506;
	static uint64_t x490 = 227070672LLU;
	static int32_t x491 = -1;
	int8_t x492 = -17;
	uint64_t t14 = 8554452446145976LLU;

	t14 = ((x489&x490)>>(x491-x492));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x729 = INT16_MAX;
	volatile int8_t x730 = INT8_MIN;
	uint16_t x731 = 18U;
	uint8_t x732 = 2U;
	static int32_t t15 = -42235;

	t15 = ((x729&x730)>>(x731-x732));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x833 = 15130690694513363LLU;
	static int32_t x835 = INT32_MIN;
	int32_t x836 = INT32_MIN;
	volatile uint64_t t16 = 18672185LLU;

	t16 = ((x833&x834)>>(x835-x836));

	if (t16 != 3LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x865 = 1;
	static uint16_t x866 = 0U;
	uint64_t x867 = UINT64_MAX;
	static int16_t x868 = -1;
	volatile int32_t t17 = 75;

	t17 = ((x865&x866)>>(x867-x868));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x945 = INT64_MAX;
	uint8_t x946 = UINT8_MAX;
	int16_t x947 = 1;
	uint32_t x948 = UINT32_MAX;
	int64_t t18 = -1637138255LL;

	t18 = ((x945&x946)>>(x947-x948));

	if (t18 != 63LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x961 = -1;
	uint16_t x962 = 7039U;
	int32_t x964 = -6;
	int32_t t19 = -22;

	t19 = ((x961&x962)>>(x963-x964));

	if (t19 != 219) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x1005 = 170069796U;
	static volatile int32_t x1006 = INT32_MAX;
	static volatile int64_t x1007 = -1LL;
	int8_t x1008 = -1;
	volatile uint32_t t20 = 24104U;

	t20 = ((x1005&x1006)>>(x1007-x1008));

	if (t20 != 170069796U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x1037 = 6404755LLU;
	int8_t x1038 = 0;
	int32_t x1039 = INT32_MIN;
	volatile int32_t x1040 = INT32_MIN;
	static uint64_t t21 = 89741606845347329LLU;

	t21 = ((x1037&x1038)>>(x1039-x1040));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1146 = INT64_MIN;
	uint8_t x1147 = 23U;
	int16_t x1148 = -1;
	volatile int64_t t22 = -80526741980LL;

	t22 = ((x1145&x1146)>>(x1147-x1148));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x1205 = 26U;
	uint8_t x1206 = 51U;
	uint8_t x1207 = UINT8_MAX;
	static volatile uint8_t x1208 = UINT8_MAX;
	uint32_t t23 = 1U;

	t23 = ((x1205&x1206)>>(x1207-x1208));

	if (t23 != 18U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x1363 = -1LL;
	volatile int64_t t24 = -6465957425LL;

	t24 = ((x1361&x1362)>>(x1363-x1364));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x1413 = 26U;
	static int64_t x1414 = INT64_MIN;
	static int16_t x1416 = INT16_MIN;
	volatile int64_t t25 = -186LL;

	t25 = ((x1413&x1414)>>(x1415-x1416));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1489 = 6;
	static volatile uint32_t x1490 = 848U;
	uint64_t x1491 = UINT64_MAX;
	int16_t x1492 = -1;
	volatile uint32_t t26 = 9030U;

	t26 = ((x1489&x1490)>>(x1491-x1492));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x1649 = 229678379LLU;
	uint64_t x1650 = 1415LLU;
	int16_t x1651 = -1;
	int32_t x1652 = -1;

	t27 = ((x1649&x1650)>>(x1651-x1652));

	if (t27 != 1283LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1693 = UINT64_MAX;
	uint16_t x1694 = UINT16_MAX;
	int8_t x1695 = 1;
	int8_t x1696 = -1;

	t28 = ((x1693&x1694)>>(x1695-x1696));

	if (t28 != 16383LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1737 = 33;
	volatile int8_t x1739 = -1;
	volatile int64_t x1740 = -1LL;
	static int32_t t29 = -15;

	t29 = ((x1737&x1738)>>(x1739-x1740));

	if (t29 != 33) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1761 = UINT64_MAX;
	int8_t x1762 = INT8_MIN;
	volatile uint64_t t30 = 42972818LLU;

	t30 = ((x1761&x1762)>>(x1763-x1764));

	if (t30 != 576460752303423484LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1793 = UINT8_MAX;
	int64_t x1794 = INT64_MAX;
	int64_t x1795 = 7LL;
	int32_t x1796 = -1;
	int64_t t31 = -15LL;

	t31 = ((x1793&x1794)>>(x1795-x1796));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1821 = UINT32_MAX;
	volatile int8_t x1823 = 28;
	uint8_t x1824 = 0U;
	volatile uint32_t t32 = 4417594U;

	t32 = ((x1821&x1822)>>(x1823-x1824));

	if (t32 != 15U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1835 = -1LL;
	uint64_t t33 = 913711441LLU;

	t33 = ((x1833&x1834)>>(x1835-x1836));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x1913 = -44;
	uint64_t x1914 = 315424LLU;
	volatile uint8_t x1915 = 48U;
	static uint8_t x1916 = 1U;
	static volatile uint64_t t34 = 554821533514700096LLU;

	t34 = ((x1913&x1914)>>(x1915-x1916));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x1953 = UINT16_MAX;
	int8_t x1954 = 7;
	uint64_t x1955 = 3LLU;
	static int16_t x1956 = -1;
	int32_t t35 = 1394844;

	t35 = ((x1953&x1954)>>(x1955-x1956));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1958 = INT32_MIN;
	int16_t x1960 = -1;

	t36 = ((x1957&x1958)>>(x1959-x1960));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x1961 = INT64_MIN;
	int64_t x1962 = INT64_MAX;
	static int16_t x1963 = -1;
	uint64_t x1964 = UINT64_MAX;
	static volatile int64_t t37 = -239254802776634821LL;

	t37 = ((x1961&x1962)>>(x1963-x1964));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1989 = 36;
	volatile int32_t x1990 = INT32_MAX;
	uint8_t x1991 = 1U;
	int64_t x1992 = -1LL;
	volatile int32_t t38 = 0;

	t38 = ((x1989&x1990)>>(x1991-x1992));

	if (t38 != 9) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x1997 = 19U;
	volatile uint8_t x1998 = 0U;
	uint32_t x2000 = UINT32_MAX;
	int32_t t39 = 23967010;

	t39 = ((x1997&x1998)>>(x1999-x2000));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x2069 = 1720192LL;
	int32_t x2071 = 1;
	volatile int64_t t40 = -17307LL;

	t40 = ((x2069&x2070)>>(x2071-x2072));

	if (t40 != 640LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x2117 = INT64_MIN;
	int8_t x2119 = INT8_MAX;
	int32_t x2120 = 79;
	volatile int64_t t41 = 1456522025609967LL;

	t41 = ((x2117&x2118)>>(x2119-x2120));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x2141 = 2016179115U;
	int8_t x2142 = INT8_MIN;
	uint32_t x2144 = UINT32_MAX;

	t42 = ((x2141&x2142)>>(x2143-x2144));

	if (t42 != 1008089536U) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x2253 = INT8_MIN;
	uint64_t x2254 = UINT64_MAX;
	static uint8_t x2256 = 6U;
	uint64_t t43 = 9048013LLU;

	t43 = ((x2253&x2254)>>(x2255-x2256));

	if (t43 != 33554431LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x2325 = INT16_MAX;
	uint16_t x2326 = 2U;
	int32_t x2328 = -1;

	t44 = ((x2325&x2326)>>(x2327-x2328));

	if (t44 != 2) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x2438 = INT16_MAX;
	uint8_t x2439 = 17U;
	volatile uint8_t x2440 = 9U;
	int32_t t45 = -1386;

	t45 = ((x2437&x2438)>>(x2439-x2440));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x2441 = UINT16_MAX;
	volatile uint16_t x2443 = 0U;
	int16_t x2444 = -18;

	t46 = ((x2441&x2442)>>(x2443-x2444));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x2529 = UINT32_MAX;
	int64_t x2530 = 1912960913526LL;
	int64_t x2532 = INT64_MIN;

	t47 = ((x2529&x2530)>>(x2531-x2532));

	if (t47 != 1700466806LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x2649 = -1328891LL;
	uint8_t x2650 = UINT8_MAX;
	uint16_t x2651 = 30819U;
	int64_t t48 = -213961641601575LL;

	t48 = ((x2649&x2650)>>(x2651-x2652));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x2665 = -10453077925196LL;
	uint32_t x2666 = UINT32_MAX;
	volatile uint16_t x2667 = 0U;

	t49 = ((x2665&x2666)>>(x2667-x2668));

	if (t49 != 436236634LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x2737 = -1;
	uint32_t x2738 = UINT32_MAX;
	uint64_t x2739 = UINT64_MAX;
	static int64_t x2740 = -1LL;
	volatile uint32_t t50 = UINT32_MAX;

	t50 = ((x2737&x2738)>>(x2739-x2740));

	if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x2749 = INT64_MAX;
	int32_t x2750 = INT32_MAX;

	t51 = ((x2749&x2750)>>(x2751-x2752));

	if (t51 != 2147483647LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x2809 = INT32_MAX;
	uint32_t x2810 = UINT32_MAX;
	int8_t x2811 = INT8_MAX;
	static int8_t x2812 = INT8_MAX;
	uint32_t t52 = 0U;

	t52 = ((x2809&x2810)>>(x2811-x2812));

	if (t52 != 2147483647U) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x2869 = 17654U;
	volatile int32_t x2870 = INT32_MIN;
	uint16_t x2871 = 12U;
	int16_t x2872 = 0;
	int32_t t53 = -267895586;

	t53 = ((x2869&x2870)>>(x2871-x2872));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x2910 = -1;
	int8_t x2911 = 3;
	int16_t x2912 = -1;
	static uint64_t t54 = 2LLU;

	t54 = ((x2909&x2910)>>(x2911-x2912));

	if (t54 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x2935 = 3U;
	uint32_t x2936 = 2U;
	volatile int32_t t55 = 11816017;

	t55 = ((x2933&x2934)>>(x2935-x2936));

	if (t55 != 151) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x2989 = -708;
	uint8_t x2990 = UINT8_MAX;
	int64_t x2991 = -1LL;
	int8_t x2992 = -1;

	t56 = ((x2989&x2990)>>(x2991-x2992));

	if (t56 != 60) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x3081 = 17356009U;
	int8_t x3082 = INT8_MAX;
	static uint8_t x3083 = 0U;
	volatile uint32_t t57 = 286U;

	t57 = ((x3081&x3082)>>(x3083-x3084));

	if (t57 != 52U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x3109 = INT16_MIN;
	static uint8_t x3111 = 2U;
	int64_t x3112 = -1LL;
	volatile int32_t t58 = 625;

	t58 = ((x3109&x3110)>>(x3111-x3112));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x3121 = 95645263212357LL;
	int32_t x3122 = -7;
	int64_t t59 = 29865030341351535LL;

	t59 = ((x3121&x3122)>>(x3123-x3124));

	if (t59 != 5837723584LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x3129 = 6390823168221098039LLU;
	volatile int8_t x3130 = 48;
	uint8_t x3131 = 55U;
	int16_t x3132 = -1;
	uint64_t t60 = 3248885403136237740LLU;

	t60 = ((x3129&x3130)>>(x3131-x3132));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x3193 = -1LL;
	static uint32_t x3194 = 90499U;
	uint32_t x3195 = UINT32_MAX;
	volatile int64_t t61 = 171LL;

	t61 = ((x3193&x3194)>>(x3195-x3196));

	if (t61 != 90499LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x3225 = INT8_MIN;
	int32_t x3226 = INT32_MAX;
	uint32_t x3228 = UINT32_MAX;

	t62 = ((x3225&x3226)>>(x3227-x3228));

	if (t62 != 2147483520) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x3233 = UINT16_MAX;
	int32_t x3234 = INT32_MIN;
	static int64_t x3235 = INT64_MAX;
	int64_t x3236 = INT64_MAX;
	volatile int32_t t63 = 432067574;

	t63 = ((x3233&x3234)>>(x3235-x3236));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x3305 = INT16_MIN;
	uint16_t x3306 = 602U;
	int16_t x3307 = 3;
	int64_t x3308 = 0LL;
	volatile int32_t t64 = -1;

	t64 = ((x3305&x3306)>>(x3307-x3308));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x3434 = UINT32_MAX;
	volatile int32_t x3436 = -1;
	volatile uint32_t t65 = 0U;

	t65 = ((x3433&x3434)>>(x3435-x3436));

	if (t65 != 15U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x3470 = 8U;
	uint8_t x3471 = 7U;
	int8_t x3472 = 2;
	volatile int64_t t66 = -2434LL;

	t66 = ((x3469&x3470)>>(x3471-x3472));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x3506 = 517199778LL;
	int32_t x3507 = -1;
	static volatile int64_t x3508 = -7LL;
	static int64_t t67 = -5764121740270LL;

	t67 = ((x3505&x3506)>>(x3507-x3508));

	if (t67 != 2312208LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x3549 = 414861U;
	int16_t x3550 = INT16_MIN;
	int64_t x3551 = -1LL;
	volatile int64_t x3552 = -1LL;
	volatile uint32_t t68 = 3189002U;

	t68 = ((x3549&x3550)>>(x3551-x3552));

	if (t68 != 393216U) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint64_t x3581 = UINT64_MAX;
	int32_t x3582 = INT32_MIN;
	volatile uint32_t x3583 = UINT32_MAX;
	int8_t x3584 = -43;
	static volatile uint64_t t69 = 109347976553097LLU;

	t69 = ((x3581&x3582)>>(x3583-x3584));

	if (t69 != 4194303LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x3597 = 1U;
	static int64_t x3598 = -1084122611005884LL;
	uint16_t x3599 = UINT16_MAX;
	uint16_t x3600 = UINT16_MAX;
	int64_t t70 = -2880241LL;

	t70 = ((x3597&x3598)>>(x3599-x3600));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x3638 = 628076713LL;
	int32_t x3640 = -1;
	volatile int64_t t71 = 163597702200272LL;

	t71 = ((x3637&x3638)>>(x3639-x3640));

	if (t71 != 628076680LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x3655 = -1;
	int8_t x3656 = -1;
	int64_t t72 = -103477138710909133LL;

	t72 = ((x3653&x3654)>>(x3655-x3656));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x3737 = -1;
	static int16_t x3739 = -1;
	int32_t t73 = 928;

	t73 = ((x3737&x3738)>>(x3739-x3740));

	if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x3824 = 3;
	volatile uint64_t t74 = 3095639035LLU;

	t74 = ((x3821&x3822)>>(x3823-x3824));

	if (t74 != 134319725403086LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x3857 = 11392U;
	int8_t x3858 = 4;
	static int8_t x3859 = -1;
	static int32_t t75 = -46868;

	t75 = ((x3857&x3858)>>(x3859-x3860));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x3869 = 1396;
	int8_t x3870 = -1;
	uint8_t x3871 = 10U;
	uint32_t x3872 = UINT32_MAX;
	int32_t t76 = 7122;

	t76 = ((x3869&x3870)>>(x3871-x3872));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x3921 = INT8_MIN;
	uint64_t x3922 = 6228852630LLU;
	int8_t x3923 = INT8_MIN;

	t77 = ((x3921&x3922)>>(x3923-x3924));

	if (t77 != 6228852608LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x3925 = 1U;
	int64_t x3926 = INT64_MAX;
	int32_t x3927 = -1;
	volatile int16_t x3928 = -22;
	int64_t t78 = 477855366450454LL;

	t78 = ((x3925&x3926)>>(x3927-x3928));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x4017 = INT32_MIN;
	int8_t x4018 = INT8_MAX;
	int32_t x4019 = INT32_MIN;
	int32_t x4020 = INT32_MIN;

	t79 = ((x4017&x4018)>>(x4019-x4020));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x4065 = INT16_MIN;
	int32_t x4066 = 2161;
	int32_t t80 = -28287125;

	t80 = ((x4065&x4066)>>(x4067-x4068));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x4145 = UINT16_MAX;
	static uint32_t x4146 = UINT32_MAX;
	int64_t x4147 = INT64_MIN;
	int64_t x4148 = INT64_MIN;

	t81 = ((x4145&x4146)>>(x4147-x4148));

	if (t81 != 65535U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x4149 = -16334454;
	uint64_t x4150 = UINT64_MAX;
	volatile int32_t x4151 = 0;
	int8_t x4152 = -1;
	uint64_t t82 = 2692416316517244LLU;

	t82 = ((x4149&x4150)>>(x4151-x4152));

	if (t82 != 9223372036846608581LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x4169 = -15;
	int64_t x4171 = -1LL;
	int64_t x4172 = -1LL;
	volatile int32_t t83 = -1;

	t83 = ((x4169&x4170)>>(x4171-x4172));

	if (t83 != 241) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x4181 = 1U;
	int16_t x4182 = 222;
	volatile uint32_t x4184 = UINT32_MAX;
	volatile int32_t t84 = 1;

	t84 = ((x4181&x4182)>>(x4183-x4184));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x4185 = INT8_MIN;
	uint16_t x4186 = UINT16_MAX;
	volatile int16_t x4187 = INT16_MIN;
	int16_t x4188 = INT16_MIN;
	volatile int32_t t85 = -959832655;

	t85 = ((x4185&x4186)>>(x4187-x4188));

	if (t85 != 65408) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x4237 = 0U;
	uint8_t x4238 = 6U;
	volatile int32_t x4239 = -1;
	volatile int32_t x4240 = -1;
	int32_t t86 = 34198;

	t86 = ((x4237&x4238)>>(x4239-x4240));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x4325 = INT64_MAX;
	uint64_t x4326 = 24954498534LLU;
	int16_t x4327 = INT16_MIN;
	int16_t x4328 = INT16_MIN;
	volatile uint64_t t87 = 7296LLU;

	t87 = ((x4325&x4326)>>(x4327-x4328));

	if (t87 != 24954498534LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x4365 = INT32_MIN;
	volatile int32_t x4368 = INT32_MAX;
	static int32_t t88 = 568849;

	t88 = ((x4365&x4366)>>(x4367-x4368));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x4397 = UINT16_MAX;
	int32_t x4398 = 1913;
	volatile uint32_t x4400 = UINT32_MAX;
	volatile int32_t t89 = 3165089;

	t89 = ((x4397&x4398)>>(x4399-x4400));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x4633 = INT8_MAX;
	uint8_t x4634 = UINT8_MAX;
	static int32_t x4635 = 2;
	volatile int8_t x4636 = 2;
	volatile int32_t t90 = 156573808;

	t90 = ((x4633&x4634)>>(x4635-x4636));

	if (t90 != 127) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x4761 = INT8_MAX;
	int64_t x4762 = -1LL;
	uint8_t x4763 = 5U;
	static int16_t x4764 = -1;
	int64_t t91 = 1LL;

	t91 = ((x4761&x4762)>>(x4763-x4764));

	if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x4793 = UINT8_MAX;
	uint64_t x4796 = UINT64_MAX;
	volatile uint64_t t92 = 10LLU;

	t92 = ((x4793&x4794)>>(x4795-x4796));

	if (t92 != 145LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x4846 = 48U;
	uint64_t x4847 = UINT64_MAX;
	static int8_t x4848 = -1;

	t93 = ((x4845&x4846)>>(x4847-x4848));

	if (t93 != 16LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x4861 = -1LL;
	int64_t x4863 = -1LL;
	static int64_t t94 = 1811406368778LL;

	t94 = ((x4861&x4862)>>(x4863-x4864));

	if (t94 != 6LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x4901 = 3U;
	static int8_t x4902 = -46;
	volatile int32_t x4903 = -1;
	volatile int32_t t95 = 48;

	t95 = ((x4901&x4902)>>(x4903-x4904));

	if (t95 != 2) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint16_t x4922 = UINT16_MAX;
	uint64_t x4924 = UINT64_MAX;
	static int64_t t96 = 1117225198LL;

	t96 = ((x4921&x4922)>>(x4923-x4924));

	if (t96 != 65535LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x5007 = -1;
	volatile uint64_t x5008 = UINT64_MAX;
	static uint32_t t97 = 9U;

	t97 = ((x5005&x5006)>>(x5007-x5008));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x5009 = 11392U;
	int16_t x5011 = -1;
	int16_t x5012 = -1;
	volatile int64_t t98 = 1725524707415557LL;

	t98 = ((x5009&x5010)>>(x5011-x5012));

	if (t98 != 11392LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x5049 = INT64_MAX;
	uint64_t x5052 = UINT64_MAX;
	int64_t t99 = -1584090LL;

	t99 = ((x5049&x5050)>>(x5051-x5052));

	if (t99 != 42LL) { NG(); } else { ; }
	
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

