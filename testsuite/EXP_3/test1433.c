#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x2 = 6U;
static uint8_t x4 = UINT8_MAX;
int32_t x43 = INT32_MAX;
int64_t x44 = INT64_MIN;
volatile uint8_t x97 = 7U;
volatile int32_t x106 = 15;
int32_t t5 = -8152;
volatile int64_t x408 = -1LL;
uint16_t x494 = 3U;
static volatile uint32_t x513 = UINT32_MAX;
static volatile int64_t x515 = -1LL;
volatile uint32_t t9 = 441796U;
uint8_t x518 = 0U;
volatile int32_t t10 = -54731329;
int64_t x685 = INT64_MAX;
static uint64_t x757 = 240635498020LLU;
static volatile int32_t x948 = INT32_MIN;
uint32_t t15 = 6U;
volatile uint64_t t16 = 961LLU;
uint64_t x1011 = 307713659239159LLU;
int32_t t17 = 1;
int32_t x1108 = INT32_MIN;
static int8_t x1172 = -1;
static uint16_t x1196 = UINT16_MAX;
int8_t x1303 = -1;
int32_t t22 = 7674;
int8_t x1334 = 6;
int64_t x1335 = INT64_MAX;
static volatile uint8_t x1336 = 1U;
uint32_t x1372 = 238688U;
volatile int32_t t25 = -376518805;
volatile uint16_t x1486 = 17U;
int32_t x1546 = 1;
int64_t x1609 = INT64_MAX;
uint32_t x1610 = 22U;
uint32_t x1612 = 5040098U;
int32_t t35 = 240;
static int16_t x2047 = INT16_MIN;
int8_t x2245 = 27;
int32_t t40 = -1713;
volatile int8_t x2270 = 0;
int64_t t41 = -1020086071028LL;
static int64_t x2279 = -3291078LL;
volatile uint64_t x2280 = UINT64_MAX;
uint32_t x2341 = 20040U;
uint32_t t43 = 53U;
static int32_t t45 = -286;
volatile uint32_t x2497 = 28391U;
static int32_t x2498 = 6;
static uint32_t t48 = 58153U;
uint8_t x2502 = 3U;
uint8_t x2517 = 3U;
uint32_t x2685 = UINT32_MAX;
int64_t x2687 = INT64_MAX;
int8_t x2688 = -1;
volatile uint32_t x2716 = 4399U;
int32_t x2782 = 1;
volatile uint16_t x2784 = 3805U;
uint64_t t55 = 7805275855LLU;
static int8_t x2791 = -1;
uint8_t x2874 = 0U;
uint8_t x2876 = 31U;
uint64_t x2897 = 89097642LLU;
static int32_t t60 = 231024;
int8_t x2966 = 9;
volatile uint16_t x3108 = 522U;
static int32_t t66 = -6904;
int32_t t67 = -4;
volatile int8_t x3226 = 44;
int16_t x3227 = 23;
int8_t x3228 = -1;
uint32_t x3330 = 0U;
uint64_t x3451 = UINT64_MAX;
volatile uint32_t t75 = 156688311U;
int32_t x3539 = 30818;
int32_t x3572 = -107333;
uint32_t x3577 = UINT32_MAX;
volatile uint32_t t79 = 6317836U;
volatile uint64_t t81 = 806552907439403687LLU;
uint8_t x3629 = 2U;
int16_t x3631 = -1;
int32_t x3713 = INT32_MAX;
uint64_t x3864 = 6640LLU;
volatile uint16_t x3954 = 0U;
static uint8_t x4167 = 3U;
volatile uint8_t x4251 = UINT8_MAX;
volatile uint64_t x4296 = 3055419916LLU;
static uint16_t x4356 = 0U;
uint32_t x4377 = UINT32_MAX;
uint8_t x4378 = 1U;
int64_t x4405 = 22454071897LL;
static int64_t t93 = 29685403396LL;
volatile uint8_t x4546 = 13U;
int64_t x4547 = -1LL;
int8_t x4618 = 21;
int16_t x4680 = INT16_MAX;
uint8_t x4709 = 6U;
int32_t t98 = -140738;
uint32_t x4793 = 1U;
volatile int64_t x4794 = 0LL;
static int8_t x4796 = -1;


void f0(void) {
	static uint8_t x1 = 21U;
	volatile uint32_t x3 = 61466999U;
	volatile int32_t t0 = -180833439;

	t0 = ((x1>>x2)*(x3<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x41 = INT64_MAX;
	volatile int16_t x42 = 10;
	int64_t t1 = 143630LL;

	t1 = ((x41>>x42)*(x43<x44));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x98 = 1U;
	int8_t x99 = INT8_MIN;
	static volatile int16_t x100 = 159;
	int32_t t2 = -320246;

	t2 = ((x97>>x98)*(x99<x100));

	if (t2 != 3) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x105 = INT8_MAX;
	static uint8_t x107 = 0U;
	uint32_t x108 = 503222102U;
	int32_t t3 = -41;

	t3 = ((x105>>x106)*(x107<x108));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x301 = 33LLU;
	int8_t x302 = 5;
	static int32_t x303 = 1;
	int64_t x304 = 726590032921859LL;
	uint64_t t4 = 3697695711050623730LLU;

	t4 = ((x301>>x302)*(x303<x304));

	if (t4 != 1LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x337 = 0;
	uint8_t x338 = 5U;
	volatile int8_t x339 = 0;
	uint8_t x340 = UINT8_MAX;

	t5 = ((x337>>x338)*(x339<x340));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x377 = UINT8_MAX;
	uint8_t x378 = 4U;
	int16_t x379 = INT16_MAX;
	volatile uint16_t x380 = 3915U;
	volatile int32_t t6 = -65016498;

	t6 = ((x377>>x378)*(x379<x380));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x405 = 11761906488417861LL;
	uint16_t x406 = 4U;
	uint32_t x407 = UINT32_MAX;
	int64_t t7 = -4LL;

	t7 = ((x405>>x406)*(x407<x408));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x493 = 63505756;
	int16_t x495 = INT16_MAX;
	int64_t x496 = INT64_MIN;
	volatile int32_t t8 = -14;

	t8 = ((x493>>x494)*(x495<x496));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x514 = 19U;
	int16_t x516 = INT16_MIN;

	t9 = ((x513>>x514)*(x515<x516));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x517 = 1U;
	static volatile int32_t x519 = INT32_MIN;
	int64_t x520 = INT64_MAX;

	t10 = ((x517>>x518)*(x519<x520));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x677 = INT64_MAX;
	static volatile int32_t x678 = 1;
	volatile uint16_t x679 = 397U;
	int8_t x680 = -1;
	static volatile int64_t t11 = 78365LL;

	t11 = ((x677>>x678)*(x679<x680));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x686 = 1;
	int16_t x687 = INT16_MIN;
	int32_t x688 = -7;
	volatile int64_t t12 = -8082979864652LL;

	t12 = ((x685>>x686)*(x687<x688));

	if (t12 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x758 = 5U;
	int16_t x759 = 0;
	int32_t x760 = INT32_MIN;
	volatile uint64_t t13 = 20669073560554LLU;

	t13 = ((x757>>x758)*(x759<x760));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x945 = UINT64_MAX;
	uint8_t x946 = 0U;
	int32_t x947 = INT32_MIN;
	volatile uint64_t t14 = 8LLU;

	t14 = ((x945>>x946)*(x947<x948));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x949 = 18U;
	uint32_t x950 = 1U;
	uint16_t x951 = 61U;
	uint16_t x952 = UINT16_MAX;

	t15 = ((x949>>x950)*(x951<x952));

	if (t15 != 9U) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x985 = 2LLU;
	int16_t x986 = 1;
	int8_t x987 = INT8_MIN;
	uint32_t x988 = UINT32_MAX;

	t16 = ((x985>>x986)*(x987<x988));

	if (t16 != 1LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x1009 = UINT8_MAX;
	uint64_t x1010 = 11LLU;
	int32_t x1012 = INT32_MAX;

	t17 = ((x1009>>x1010)*(x1011<x1012));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x1105 = 22U;
	volatile int64_t x1106 = 1LL;
	static volatile int8_t x1107 = 12;
	volatile int32_t t18 = 22639;

	t18 = ((x1105>>x1106)*(x1107<x1108));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x1109 = 0U;
	static int32_t x1110 = 1;
	uint64_t x1111 = 1041035433149LLU;
	int32_t x1112 = INT32_MAX;
	volatile int32_t t19 = -1;

	t19 = ((x1109>>x1110)*(x1111<x1112));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x1169 = 65453;
	uint64_t x1170 = 0LLU;
	int16_t x1171 = -1;
	int32_t t20 = -1888195;

	t20 = ((x1169>>x1170)*(x1171<x1172));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1193 = 27282963U;
	uint8_t x1194 = 10U;
	int64_t x1195 = -226940032965773296LL;
	volatile uint32_t t21 = 1625631776U;

	t21 = ((x1193>>x1194)*(x1195<x1196));

	if (t21 != 26643U) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x1301 = 1291U;
	uint16_t x1302 = 1U;
	static uint32_t x1304 = 854U;

	t22 = ((x1301>>x1302)*(x1303<x1304));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x1333 = UINT16_MAX;
	volatile int32_t t23 = 533;

	t23 = ((x1333>>x1334)*(x1335<x1336));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x1369 = INT32_MAX;
	uint8_t x1370 = 12U;
	int8_t x1371 = 14;
	volatile int32_t t24 = -7216;

	t24 = ((x1369>>x1370)*(x1371<x1372));

	if (t24 != 524287) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x1433 = INT16_MAX;
	uint8_t x1434 = 0U;
	static volatile int16_t x1435 = -1;
	int8_t x1436 = -1;

	t25 = ((x1433>>x1434)*(x1435<x1436));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1477 = UINT32_MAX;
	int64_t x1478 = 11LL;
	uint8_t x1479 = 0U;
	uint8_t x1480 = UINT8_MAX;
	uint32_t t26 = 2U;

	t26 = ((x1477>>x1478)*(x1479<x1480));

	if (t26 != 2097151U) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1485 = 3U;
	int8_t x1487 = 1;
	uint8_t x1488 = 5U;
	volatile int32_t t27 = -29;

	t27 = ((x1485>>x1486)*(x1487<x1488));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1529 = UINT16_MAX;
	uint16_t x1530 = 16U;
	int64_t x1531 = INT64_MIN;
	volatile int32_t x1532 = INT32_MAX;
	int32_t t28 = -26006125;

	t28 = ((x1529>>x1530)*(x1531<x1532));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1545 = 32239721;
	int64_t x1547 = -930966977371092419LL;
	uint16_t x1548 = UINT16_MAX;
	volatile int32_t t29 = -10042272;

	t29 = ((x1545>>x1546)*(x1547<x1548));

	if (t29 != 16119860) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1611 = INT16_MAX;
	int64_t t30 = -15467LL;

	t30 = ((x1609>>x1610)*(x1611<x1612));

	if (t30 != 2199023255551LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1637 = INT8_MAX;
	uint8_t x1638 = 3U;
	int16_t x1639 = -1;
	volatile uint8_t x1640 = UINT8_MAX;
	volatile int32_t t31 = -1;

	t31 = ((x1637>>x1638)*(x1639<x1640));

	if (t31 != 15) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1641 = 6U;
	volatile int64_t x1642 = 15LL;
	static uint8_t x1643 = UINT8_MAX;
	uint32_t x1644 = UINT32_MAX;
	int32_t t32 = 789;

	t32 = ((x1641>>x1642)*(x1643<x1644));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1853 = 14;
	volatile uint8_t x1854 = 9U;
	int8_t x1855 = -61;
	uint32_t x1856 = 157685400U;
	int32_t t33 = -890;

	t33 = ((x1853>>x1854)*(x1855<x1856));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1893 = INT16_MAX;
	uint8_t x1894 = 0U;
	int32_t x1895 = -1;
	volatile uint8_t x1896 = UINT8_MAX;
	int32_t t34 = 37352436;

	t34 = ((x1893>>x1894)*(x1895<x1896));

	if (t34 != 32767) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x1973 = 0;
	static volatile uint8_t x1974 = 1U;
	uint32_t x1975 = UINT32_MAX;
	int64_t x1976 = INT64_MAX;

	t35 = ((x1973>>x1974)*(x1975<x1976));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x1985 = 1;
	volatile int8_t x1986 = 4;
	volatile int64_t x1987 = INT64_MIN;
	uint8_t x1988 = UINT8_MAX;
	static volatile int32_t t36 = 3265;

	t36 = ((x1985>>x1986)*(x1987<x1988));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x2045 = INT64_MAX;
	uint8_t x2046 = 3U;
	int8_t x2048 = INT8_MAX;
	int64_t t37 = -3395249703004146LL;

	t37 = ((x2045>>x2046)*(x2047<x2048));

	if (t37 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x2097 = 302U;
	int64_t x2098 = 3LL;
	uint16_t x2099 = 4066U;
	uint16_t x2100 = UINT16_MAX;
	uint32_t t38 = 22234579U;

	t38 = ((x2097>>x2098)*(x2099<x2100));

	if (t38 != 37U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x2169 = 3LL;
	uint64_t x2170 = 33LLU;
	static int64_t x2171 = INT64_MIN;
	uint64_t x2172 = UINT64_MAX;
	volatile int64_t t39 = 1LL;

	t39 = ((x2169>>x2170)*(x2171<x2172));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x2246 = 25U;
	static int32_t x2247 = INT32_MAX;
	int16_t x2248 = -7;

	t40 = ((x2245>>x2246)*(x2247<x2248));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x2269 = 396458659744LL;
	volatile int8_t x2271 = INT8_MIN;
	uint32_t x2272 = 94921U;

	t41 = ((x2269>>x2270)*(x2271<x2272));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x2277 = 132U;
	volatile uint8_t x2278 = 0U;
	int32_t t42 = -16967915;

	t42 = ((x2277>>x2278)*(x2279<x2280));

	if (t42 != 132) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x2342 = 0LLU;
	int16_t x2343 = INT16_MIN;
	int32_t x2344 = -1;

	t43 = ((x2341>>x2342)*(x2343<x2344));

	if (t43 != 20040U) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x2361 = 0U;
	uint8_t x2362 = 0U;
	int16_t x2363 = INT16_MIN;
	static int8_t x2364 = -1;
	static uint32_t t44 = 44U;

	t44 = ((x2361>>x2362)*(x2363<x2364));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint16_t x2373 = UINT16_MAX;
	volatile uint16_t x2374 = 10U;
	volatile uint32_t x2375 = UINT32_MAX;
	int32_t x2376 = 6444;

	t45 = ((x2373>>x2374)*(x2375<x2376));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x2409 = INT8_MAX;
	int32_t x2410 = 19;
	int32_t x2411 = -1;
	volatile int64_t x2412 = INT64_MIN;
	int32_t t46 = -515373056;

	t46 = ((x2409>>x2410)*(x2411<x2412));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x2425 = INT32_MAX;
	uint32_t x2426 = 0U;
	int8_t x2427 = INT8_MIN;
	int16_t x2428 = 67;
	int32_t t47 = INT32_MAX;

	t47 = ((x2425>>x2426)*(x2427<x2428));

	if (t47 != INT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x2499 = -1;
	static int32_t x2500 = 32061;

	t48 = ((x2497>>x2498)*(x2499<x2500));

	if (t48 != 443U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x2501 = 9712;
	int16_t x2503 = INT16_MIN;
	int8_t x2504 = INT8_MAX;
	volatile int32_t t49 = -206366;

	t49 = ((x2501>>x2502)*(x2503<x2504));

	if (t49 != 1214) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x2518 = 0;
	static volatile uint16_t x2519 = UINT16_MAX;
	static int16_t x2520 = INT16_MIN;
	static int32_t t50 = 3;

	t50 = ((x2517>>x2518)*(x2519<x2520));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x2529 = INT32_MAX;
	volatile int8_t x2530 = 1;
	uint16_t x2531 = UINT16_MAX;
	int8_t x2532 = 24;
	static int32_t t51 = -472004573;

	t51 = ((x2529>>x2530)*(x2531<x2532));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x2686 = 6;
	uint32_t t52 = 480531237U;

	t52 = ((x2685>>x2686)*(x2687<x2688));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x2713 = 5218879U;
	uint8_t x2714 = 0U;
	int8_t x2715 = -1;
	uint32_t t53 = 21U;

	t53 = ((x2713>>x2714)*(x2715<x2716));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x2773 = 3883646U;
	int8_t x2774 = 29;
	int32_t x2775 = INT32_MIN;
	int8_t x2776 = INT8_MAX;
	volatile uint32_t t54 = 46903U;

	t54 = ((x2773>>x2774)*(x2775<x2776));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x2781 = 1902763LLU;
	volatile int32_t x2783 = INT32_MAX;

	t55 = ((x2781>>x2782)*(x2783<x2784));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x2789 = 30U;
	int64_t x2790 = 0LL;
	int64_t x2792 = INT64_MIN;
	int32_t t56 = 7619829;

	t56 = ((x2789>>x2790)*(x2791<x2792));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x2849 = UINT32_MAX;
	uint8_t x2850 = 1U;
	int8_t x2851 = 5;
	int8_t x2852 = -1;
	volatile uint32_t t57 = 9392U;

	t57 = ((x2849>>x2850)*(x2851<x2852));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int64_t x2873 = 472941162346LL;
	static int64_t x2875 = -7980117846LL;
	int64_t t58 = -1LL;

	t58 = ((x2873>>x2874)*(x2875<x2876));

	if (t58 != 472941162346LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x2898 = 1U;
	volatile int8_t x2899 = -1;
	int64_t x2900 = -475832006LL;
	static volatile uint64_t t59 = 9459LLU;

	t59 = ((x2897>>x2898)*(x2899<x2900));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x2905 = UINT16_MAX;
	uint8_t x2906 = 0U;
	int8_t x2907 = INT8_MAX;
	uint64_t x2908 = 45LLU;

	t60 = ((x2905>>x2906)*(x2907<x2908));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x2929 = 58U;
	int8_t x2930 = 0;
	uint32_t x2931 = UINT32_MAX;
	int32_t x2932 = -1;
	static int32_t t61 = -22975817;

	t61 = ((x2929>>x2930)*(x2931<x2932));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x2965 = INT32_MAX;
	static uint32_t x2967 = 359333977U;
	static uint32_t x2968 = UINT32_MAX;
	int32_t t62 = -778426;

	t62 = ((x2965>>x2966)*(x2967<x2968));

	if (t62 != 4194303) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x2973 = 1U;
	static int16_t x2974 = 1;
	static int8_t x2975 = 1;
	int16_t x2976 = 187;
	volatile int32_t t63 = -242;

	t63 = ((x2973>>x2974)*(x2975<x2976));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x2985 = 4631U;
	int8_t x2986 = 1;
	volatile uint16_t x2987 = UINT16_MAX;
	int32_t x2988 = INT32_MIN;
	volatile int32_t t64 = -117305841;

	t64 = ((x2985>>x2986)*(x2987<x2988));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x3077 = INT32_MAX;
	volatile uint8_t x3078 = 1U;
	static uint16_t x3079 = 331U;
	volatile uint64_t x3080 = 29337406LLU;
	static volatile int32_t t65 = -1;

	t65 = ((x3077>>x3078)*(x3079<x3080));

	if (t65 != 1073741823) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x3105 = 10U;
	int8_t x3106 = 0;
	volatile int8_t x3107 = INT8_MIN;

	t66 = ((x3105>>x3106)*(x3107<x3108));

	if (t66 != 10) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x3109 = 38953;
	int8_t x3110 = 3;
	int8_t x3111 = INT8_MIN;
	static uint16_t x3112 = UINT16_MAX;

	t67 = ((x3109>>x3110)*(x3111<x3112));

	if (t67 != 4869) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x3169 = 15765206LLU;
	volatile int32_t x3170 = 7;
	int16_t x3171 = INT16_MIN;
	uint64_t x3172 = 0LLU;
	uint64_t t68 = 16434978443442LLU;

	t68 = ((x3169>>x3170)*(x3171<x3172));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x3209 = 9U;
	int8_t x3210 = 0;
	int32_t x3211 = INT32_MAX;
	static int64_t x3212 = -1LL;
	static int32_t t69 = 5188;

	t69 = ((x3209>>x3210)*(x3211<x3212));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x3225 = 222LLU;
	uint64_t t70 = 1765880506304351942LLU;

	t70 = ((x3225>>x3226)*(x3227<x3228));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x3241 = UINT8_MAX;
	volatile uint16_t x3242 = 10U;
	uint8_t x3243 = 0U;
	uint16_t x3244 = 53U;
	volatile int32_t t71 = 0;

	t71 = ((x3241>>x3242)*(x3243<x3244));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x3261 = INT16_MAX;
	uint8_t x3262 = 7U;
	volatile int8_t x3263 = INT8_MAX;
	volatile int32_t x3264 = 18391;
	volatile int32_t t72 = 6298;

	t72 = ((x3261>>x3262)*(x3263<x3264));

	if (t72 != 255) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x3329 = UINT8_MAX;
	static int16_t x3331 = INT16_MIN;
	int64_t x3332 = INT64_MAX;
	volatile int32_t t73 = 222670;

	t73 = ((x3329>>x3330)*(x3331<x3332));

	if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x3449 = 107303633273902LL;
	uint8_t x3450 = 1U;
	volatile int64_t x3452 = -1LL;
	static int64_t t74 = -1LL;

	t74 = ((x3449>>x3450)*(x3451<x3452));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x3457 = UINT32_MAX;
	static uint32_t x3458 = 24U;
	uint8_t x3459 = 0U;
	volatile int64_t x3460 = 1265886588658335829LL;

	t75 = ((x3457>>x3458)*(x3459<x3460));

	if (t75 != 255U) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x3537 = 14430785143334702LLU;
	uint16_t x3538 = 0U;
	int64_t x3540 = -242788504LL;
	uint64_t t76 = 25359148122142LLU;

	t76 = ((x3537>>x3538)*(x3539<x3540));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x3561 = 3243U;
	volatile uint8_t x3562 = 2U;
	int64_t x3563 = -1LL;
	int32_t x3564 = -75;
	volatile int32_t t77 = -37199;

	t77 = ((x3561>>x3562)*(x3563<x3564));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x3569 = UINT32_MAX;
	int8_t x3570 = 14;
	int8_t x3571 = -1;
	static volatile uint32_t t78 = 23705899U;

	t78 = ((x3569>>x3570)*(x3571<x3572));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x3578 = 1;
	int64_t x3579 = -1LL;
	volatile int8_t x3580 = -2;

	t79 = ((x3577>>x3578)*(x3579<x3580));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x3589 = INT32_MAX;
	static int8_t x3590 = 0;
	static int8_t x3591 = -1;
	int8_t x3592 = -2;
	int32_t t80 = 253697;

	t80 = ((x3589>>x3590)*(x3591<x3592));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x3621 = 2417114LLU;
	volatile uint8_t x3622 = 19U;
	uint16_t x3623 = UINT16_MAX;
	int8_t x3624 = 1;

	t81 = ((x3621>>x3622)*(x3623<x3624));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x3630 = 0U;
	int8_t x3632 = 9;
	int32_t t82 = -16420;

	t82 = ((x3629>>x3630)*(x3631<x3632));

	if (t82 != 2) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x3714 = 31;
	int8_t x3715 = 23;
	int8_t x3716 = INT8_MIN;
	volatile int32_t t83 = -1009;

	t83 = ((x3713>>x3714)*(x3715<x3716));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x3861 = 4;
	volatile uint8_t x3862 = 12U;
	int16_t x3863 = -1494;
	volatile int32_t t84 = 1;

	t84 = ((x3861>>x3862)*(x3863<x3864));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x3889 = 26U;
	int8_t x3890 = 3;
	uint8_t x3891 = UINT8_MAX;
	int64_t x3892 = INT64_MIN;
	volatile int32_t t85 = -557;

	t85 = ((x3889>>x3890)*(x3891<x3892));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x3953 = UINT8_MAX;
	int16_t x3955 = -1;
	int16_t x3956 = INT16_MIN;
	volatile int32_t t86 = 1;

	t86 = ((x3953>>x3954)*(x3955<x3956));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x3961 = INT16_MAX;
	int8_t x3962 = 0;
	volatile uint32_t x3963 = 166670U;
	static uint32_t x3964 = UINT32_MAX;
	static int32_t t87 = -185591610;

	t87 = ((x3961>>x3962)*(x3963<x3964));

	if (t87 != 32767) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x4165 = 7953LL;
	int16_t x4166 = 8;
	uint16_t x4168 = UINT16_MAX;
	int64_t t88 = 30928390LL;

	t88 = ((x4165>>x4166)*(x4167<x4168));

	if (t88 != 31LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x4249 = UINT64_MAX;
	volatile int8_t x4250 = 23;
	int64_t x4252 = INT64_MIN;
	uint64_t t89 = 406327LLU;

	t89 = ((x4249>>x4250)*(x4251<x4252));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x4293 = 14U;
	int32_t x4294 = 7;
	int16_t x4295 = 670;
	volatile int32_t t90 = 1;

	t90 = ((x4293>>x4294)*(x4295<x4296));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x4353 = INT16_MAX;
	int64_t x4354 = 1LL;
	uint64_t x4355 = 272240LLU;
	int32_t t91 = -18;

	t91 = ((x4353>>x4354)*(x4355<x4356));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x4379 = UINT64_MAX;
	int8_t x4380 = INT8_MIN;
	volatile uint32_t t92 = 3266U;

	t92 = ((x4377>>x4378)*(x4379<x4380));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x4406 = 5;
	volatile int32_t x4407 = INT32_MIN;
	uint8_t x4408 = 22U;

	t93 = ((x4405>>x4406)*(x4407<x4408));

	if (t93 != 701689746LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x4501 = 1U;
	uint64_t x4502 = 3LLU;
	static int16_t x4503 = -1;
	volatile uint16_t x4504 = 2U;
	volatile int32_t t94 = -8;

	t94 = ((x4501>>x4502)*(x4503<x4504));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x4545 = 435173LL;
	int64_t x4548 = INT64_MIN;
	volatile int64_t t95 = -1243927367128063557LL;

	t95 = ((x4545>>x4546)*(x4547<x4548));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x4617 = 1U;
	static volatile int64_t x4619 = -1601814389LL;
	int32_t x4620 = INT32_MAX;
	volatile int32_t t96 = 457448;

	t96 = ((x4617>>x4618)*(x4619<x4620));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x4677 = INT64_MAX;
	int8_t x4678 = 38;
	volatile uint64_t x4679 = 415726674154630934LLU;
	int64_t t97 = -3621582834790LL;

	t97 = ((x4677>>x4678)*(x4679<x4680));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x4710 = 3U;
	int64_t x4711 = 10820302553527LL;
	static int32_t x4712 = INT32_MIN;

	t98 = ((x4709>>x4710)*(x4711<x4712));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x4795 = INT64_MIN;
	volatile uint32_t t99 = 1077U;

	t99 = ((x4793>>x4794)*(x4795<x4796));

	if (t99 != 1U) { NG(); } else { ; }
	
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

