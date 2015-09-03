#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x6 = UINT64_MAX;
uint64_t x18 = 21510550008857LLU;
volatile int8_t x37 = INT8_MAX;
int8_t x38 = 9;
uint8_t x177 = 22U;
volatile int8_t x243 = -43;
int8_t x511 = 49;
volatile int32_t t10 = 461837;
static int64_t x528 = INT64_MAX;
uint8_t x568 = UINT8_MAX;
int32_t x654 = INT32_MIN;
static volatile int8_t x655 = 6;
volatile int32_t x731 = 0;
uint16_t x732 = 1U;
static int32_t t16 = -23;
uint32_t x896 = UINT32_MAX;
uint64_t x901 = 14333554080LLU;
int32_t x902 = INT32_MIN;
int16_t x911 = INT16_MIN;
volatile uint64_t x1046 = 103265LLU;
uint8_t x1062 = 1U;
volatile uint64_t t23 = 25228456717555LLU;
static uint16_t x1149 = 64U;
int32_t t24 = -61166935;
uint8_t x1389 = 56U;
volatile uint64_t x1390 = 8LLU;
int64_t x1392 = INT64_MAX;
volatile int8_t x1426 = 1;
volatile int32_t t27 = -7419;
uint32_t x1674 = 204806U;
volatile int16_t x1685 = 10;
int8_t x1688 = INT8_MAX;
int64_t x1733 = INT64_MAX;
int32_t x1735 = -1;
volatile int64_t x1761 = 143LL;
volatile int64_t t31 = -285538762865486LL;
volatile uint64_t t33 = 1LLU;
uint16_t x2015 = 101U;
int8_t x2046 = 0;
int8_t x2272 = -1;
volatile int64_t x2274 = INT64_MIN;
volatile uint16_t x2275 = 0U;
uint64_t x2309 = 3665467272985500717LLU;
int64_t x2355 = INT64_MIN;
volatile int32_t x2397 = 0;
static volatile int32_t t43 = 883995791;
int32_t x2474 = 21;
int16_t x2476 = INT16_MIN;
uint32_t x2533 = 6U;
static int64_t x2535 = INT64_MIN;
volatile int32_t t48 = -90443;
int32_t x2675 = -1;
volatile int8_t x2676 = -15;
volatile int32_t t51 = 7404;
uint32_t x2841 = 32481341U;
volatile int64_t t53 = INT64_MAX;
uint8_t x3035 = 0U;
int8_t x3040 = 21;
int32_t x3378 = INT32_MIN;
uint8_t x3414 = 27U;
static uint32_t x3415 = 7U;
int32_t t59 = 1303;
uint32_t t60 = 101858027U;
uint16_t x3462 = 1U;
volatile uint64_t x3477 = UINT64_MAX;
uint32_t x3479 = UINT32_MAX;
volatile int32_t x3510 = INT32_MIN;
uint64_t x3534 = UINT64_MAX;
static int32_t x3679 = -1;
volatile int32_t t66 = -25529199;
volatile uint32_t t67 = 24319620U;
uint64_t x3750 = 11LLU;
static int32_t t68 = -65421;
int8_t x3773 = 0;
uint16_t x3866 = 0U;
int8_t x3867 = 2;
static int16_t x3872 = -99;
static int8_t x3908 = 15;
uint16_t x3963 = 0U;
int32_t x4101 = 15213;
volatile uint32_t x4200 = 1044U;
volatile uint32_t x4201 = 5240850U;
int16_t x4202 = 2;
volatile int16_t x4349 = 187;
uint16_t x4350 = 0U;
volatile int32_t t85 = 814;
int8_t x4399 = -1;
uint32_t x4465 = 0U;
uint64_t x4621 = 20284862451946LLU;
uint8_t x4624 = UINT8_MAX;
uint64_t t93 = 2239LLU;
uint32_t x4645 = 34U;
int16_t x4647 = -1933;
int8_t x4648 = -1;
volatile uint16_t x4686 = 0U;
int8_t x4732 = -20;
uint16_t x4743 = UINT16_MAX;
volatile int64_t t97 = INT64_MAX;
uint64_t x4761 = 6678018999917960LLU;
uint8_t x4798 = 0U;
static int32_t t99 = 22525703;


void f0(void) {
	int64_t x5 = 133110443094908795LL;
	int8_t x7 = -4;
	int64_t x8 = -1LL;
	int64_t t0 = -30737384788095462LL;

	t0 = (x5<<(x6%(x7-x8)));

	if (t0 != 532441772379635180LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x17 = 15U;
	volatile uint32_t x19 = 7U;
	static volatile int16_t x20 = -1;
	static volatile int32_t t1 = -1;

	t1 = (x17<<(x18%(x19-x20)));

	if (t1 != 30) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x39 = INT8_MIN;
	static int64_t x40 = INT64_MIN;
	static int32_t t2 = 140265707;

	t2 = (x37<<(x38%(x39-x40)));

	if (t2 != 65024) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x178 = 13468LLU;
	volatile int8_t x179 = 37;
	int8_t x180 = -1;
	static volatile int32_t t3 = -432175;

	t3 = (x177<<(x178%(x179-x180)));

	if (t3 != 1441792) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x241 = 4408986877LL;
	int8_t x242 = INT8_MAX;
	int32_t x244 = -1;
	volatile int64_t t4 = -2LL;

	t4 = (x241<<(x242%(x243-x244)));

	if (t4 != 8817973754LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x253 = 43U;
	int64_t x254 = INT64_MAX;
	int8_t x255 = -21;
	int64_t x256 = INT64_MIN;
	int32_t t5 = -2987883;

	t5 = (x253<<(x254%(x255-x256)));

	if (t5 != 45088768) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x297 = 99950282263LLU;
	uint64_t x298 = UINT64_MAX;
	int16_t x299 = -1;
	static volatile int16_t x300 = INT16_MIN;
	volatile uint64_t t6 = 15708LLU;

	t6 = (x297<<(x298%(x299-x300)));

	if (t6 != 3275170849193984LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x349 = 4U;
	static int16_t x350 = 1;
	int64_t x351 = -1LL;
	uint8_t x352 = UINT8_MAX;
	static volatile int32_t t7 = 6364;

	t7 = (x349<<(x350%(x351-x352)));

	if (t7 != 8) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x353 = UINT32_MAX;
	int32_t x354 = INT32_MIN;
	uint32_t x355 = UINT32_MAX;
	int16_t x356 = INT16_MIN;
	uint32_t t8 = 76U;

	t8 = (x353<<(x354%(x355-x356)));

	if (t8 != 4294967292U) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x485 = 5184U;
	int64_t x486 = 2985937LL;
	int64_t x487 = -1LL;
	static int16_t x488 = 11;
	int32_t t9 = 35;

	t9 = (x485<<(x486%(x487-x488)));

	if (t9 != 10368) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x509 = 439;
	uint16_t x510 = 0U;
	static uint64_t x512 = UINT64_MAX;

	t10 = (x509<<(x510%(x511-x512)));

	if (t10 != 439) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x525 = UINT16_MAX;
	volatile uint8_t x526 = 4U;
	volatile int32_t x527 = 4;
	int32_t t11 = 857;

	t11 = (x525<<(x526%(x527-x528)));

	if (t11 != 1048560) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x565 = INT32_MAX;
	int16_t x566 = INT16_MIN;
	int8_t x567 = -1;
	static int32_t t12 = INT32_MAX;

	t12 = (x565<<(x566%(x567-x568)));

	if (t12 != INT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x605 = UINT32_MAX;
	static uint16_t x606 = 5U;
	static int32_t x607 = -1;
	static uint8_t x608 = 49U;
	static uint32_t t13 = 14U;

	t13 = (x605<<(x606%(x607-x608)));

	if (t13 != 4294967264U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x653 = 67125521613897LL;
	uint8_t x656 = 14U;
	volatile int64_t t14 = -312592620169LL;

	t14 = (x653<<(x654%(x655-x656)));

	if (t14 != 67125521613897LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x693 = 2063LLU;
	int64_t x694 = INT64_MIN;
	int16_t x695 = -1;
	int8_t x696 = INT8_MAX;
	static volatile uint64_t t15 = 23LLU;

	t15 = (x693<<(x694%(x695-x696)));

	if (t15 != 2063LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x729 = 195U;
	static int64_t x730 = INT64_MIN;

	t16 = (x729<<(x730%(x731-x732)));

	if (t16 != 195) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x853 = INT8_MAX;
	int8_t x854 = INT8_MIN;
	uint8_t x855 = 3U;
	static int32_t x856 = -1;
	volatile int32_t t17 = -7;

	t17 = (x853<<(x854%(x855-x856)));

	if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x893 = INT8_MAX;
	int16_t x894 = INT16_MAX;
	uint8_t x895 = 27U;
	volatile int32_t t18 = -19;

	t18 = (x893<<(x894%(x895-x896)));

	if (t18 != 16256) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x903 = INT8_MAX;
	uint64_t x904 = UINT64_MAX;
	volatile uint64_t t19 = 669681791650361LLU;

	t19 = (x901<<(x902%(x903-x904)));

	if (t19 != 14333554080LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x909 = INT64_MAX;
	uint8_t x910 = 0U;
	int16_t x912 = -1;
	volatile int64_t t20 = INT64_MAX;

	t20 = (x909<<(x910%(x911-x912)));

	if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x1045 = 1730043U;
	static uint8_t x1047 = 13U;
	volatile int8_t x1048 = 4;
	volatile uint32_t t21 = 70581U;

	t21 = (x1045<<(x1046%(x1047-x1048)));

	if (t21 != 442891008U) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x1061 = 1U;
	volatile int16_t x1063 = INT16_MIN;
	int32_t x1064 = INT32_MIN;
	static volatile int32_t t22 = -14846;

	t22 = (x1061<<(x1062%(x1063-x1064)));

	if (t22 != 2) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x1093 = UINT64_MAX;
	static uint16_t x1094 = 4129U;
	int8_t x1095 = INT8_MAX;
	uint8_t x1096 = 2U;

	t23 = (x1093<<(x1094%(x1095-x1096)));

	if (t23 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1150 = -5;
	static uint8_t x1151 = 21U;
	static uint64_t x1152 = UINT64_MAX;

	t24 = (x1149<<(x1150%(x1151-x1152)));

	if (t24 != 131072) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1391 = 460U;
	int32_t t25 = 1501;

	t25 = (x1389<<(x1390%(x1391-x1392)));

	if (t25 != 14336) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x1393 = 2901U;
	int16_t x1394 = INT16_MAX;
	int16_t x1395 = -1;
	int8_t x1396 = INT8_MIN;
	volatile uint32_t t26 = 3847U;

	t26 = (x1393<<(x1394%(x1395-x1396)));

	if (t26 != 5802U) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1425 = 25U;
	volatile uint32_t x1427 = 0U;
	uint64_t x1428 = 115991878LLU;

	t27 = (x1425<<(x1426%(x1427-x1428)));

	if (t27 != 50) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int64_t x1673 = 789LL;
	volatile int64_t x1675 = -1LL;
	uint8_t x1676 = UINT8_MAX;
	static volatile int64_t t28 = 339886344LL;

	t28 = (x1673<<(x1674%(x1675-x1676)));

	if (t28 != 50496LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x1686 = 0U;
	int64_t x1687 = INT64_MAX;
	int32_t t29 = 172;

	t29 = (x1685<<(x1686%(x1687-x1688)));

	if (t29 != 10) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1734 = INT64_MIN;
	volatile int8_t x1736 = 7;
	volatile int64_t t30 = INT64_MAX;

	t30 = (x1733<<(x1734%(x1735-x1736)));

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1762 = 74962135U;
	static uint8_t x1763 = 1U;
	static int32_t x1764 = -1;

	t31 = (x1761<<(x1762%(x1763-x1764)));

	if (t31 != 286LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x1873 = 3U;
	static volatile uint16_t x1874 = 0U;
	int64_t x1875 = INT64_MAX;
	volatile uint64_t x1876 = 5380LLU;
	static volatile int32_t t32 = 16237198;

	t32 = (x1873<<(x1874%(x1875-x1876)));

	if (t32 != 3) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1933 = 1109818775874016LLU;
	static uint8_t x1934 = 19U;
	static int32_t x1935 = -301760;
	int32_t x1936 = -138204792;

	t33 = (x1933<<(x1934%(x1935-x1936)));

	if (t33 != 10015600080440000512LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x1969 = 1U;
	int16_t x1970 = -1;
	volatile int8_t x1971 = 2;
	uint16_t x1972 = 1U;
	volatile int32_t t34 = 14935594;

	t34 = (x1969<<(x1970%(x1971-x1972)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x2013 = 6;
	static volatile int8_t x2014 = INT8_MAX;
	int64_t x2016 = -1LL;
	static int32_t t35 = -6;

	t35 = (x2013<<(x2014%(x2015-x2016)));

	if (t35 != 201326592) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x2033 = 3414781;
	static uint64_t x2034 = 6LLU;
	static volatile int8_t x2035 = INT8_MAX;
	static uint64_t x2036 = 2933028811188LLU;
	int32_t t36 = -101781753;

	t36 = (x2033<<(x2034%(x2035-x2036)));

	if (t36 != 218545984) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x2045 = 0;
	int32_t x2047 = 26;
	uint16_t x2048 = 173U;
	volatile int32_t t37 = -2;

	t37 = (x2045<<(x2046%(x2047-x2048)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x2269 = 1;
	uint64_t x2270 = 5288545LLU;
	uint16_t x2271 = 0U;
	volatile int32_t t38 = -133333387;

	t38 = (x2269<<(x2270%(x2271-x2272)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x2273 = INT64_MAX;
	int8_t x2276 = -1;
	int64_t t39 = INT64_MAX;

	t39 = (x2273<<(x2274%(x2275-x2276)));

	if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x2310 = 1U;
	uint16_t x2311 = UINT16_MAX;
	static int32_t x2312 = -10141751;
	volatile uint64_t t40 = 73689399LLU;

	t40 = (x2309<<(x2310%(x2311-x2312)));

	if (t40 != 7330934545971001434LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2325 = 14;
	volatile int8_t x2326 = 8;
	int16_t x2327 = INT16_MAX;
	uint64_t x2328 = 277103003573349LLU;
	volatile int32_t t41 = 3;

	t41 = (x2325<<(x2326%(x2327-x2328)));

	if (t41 != 3584) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x2353 = 147U;
	volatile uint8_t x2354 = 5U;
	int32_t x2356 = -1;
	int32_t t42 = -559;

	t42 = (x2353<<(x2354%(x2355-x2356)));

	if (t42 != 4704) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x2398 = 27;
	int8_t x2399 = INT8_MAX;
	volatile uint8_t x2400 = UINT8_MAX;

	t43 = (x2397<<(x2398%(x2399-x2400)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x2437 = INT8_MAX;
	uint16_t x2438 = 17U;
	uint64_t x2439 = 12006LLU;
	int64_t x2440 = -25LL;
	volatile int32_t t44 = -1017296;

	t44 = (x2437<<(x2438%(x2439-x2440)));

	if (t44 != 16646144) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint64_t x2473 = UINT64_MAX;
	static int16_t x2475 = -3;
	volatile uint64_t t45 = 865730771465080LLU;

	t45 = (x2473<<(x2474%(x2475-x2476)));

	if (t45 != 18446744073707454464LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x2517 = 201U;
	int16_t x2518 = INT16_MIN;
	volatile uint32_t x2519 = 116U;
	int32_t x2520 = -1;
	volatile int32_t t46 = 12429880;

	t46 = (x2517<<(x2518%(x2519-x2520)));

	if (t46 != 3293184) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x2534 = 1U;
	uint64_t x2536 = 27LLU;
	volatile uint32_t t47 = 30070U;

	t47 = (x2533<<(x2534%(x2535-x2536)));

	if (t47 != 12U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x2585 = 56;
	int32_t x2586 = INT32_MIN;
	int16_t x2587 = -1;
	int8_t x2588 = INT8_MAX;

	t48 = (x2585<<(x2586%(x2587-x2588)));

	if (t48 != 56) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x2633 = 1913674U;
	uint32_t x2634 = UINT32_MAX;
	uint32_t x2635 = UINT32_MAX;
	int8_t x2636 = INT8_MIN;
	uint32_t t49 = 1328U;

	t49 = (x2633<<(x2634%(x2635-x2636)));

	if (t49 != 2577727488U) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x2673 = 0U;
	uint16_t x2674 = UINT16_MAX;
	volatile int32_t t50 = -4166860;

	t50 = (x2673<<(x2674%(x2675-x2676)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x2729 = INT8_MAX;
	int8_t x2730 = -1;
	uint64_t x2731 = 7LLU;
	uint8_t x2732 = 19U;

	t51 = (x2729<<(x2730%(x2731-x2732)));

	if (t51 != 260096) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x2842 = UINT64_MAX;
	int64_t x2843 = 115LL;
	int16_t x2844 = -26;
	uint32_t t52 = 34U;

	t52 = (x2841<<(x2842%(x2843-x2844)));

	if (t52 != 1023410176U) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x2849 = INT64_MAX;
	int16_t x2850 = INT16_MIN;
	uint64_t x2851 = UINT64_MAX;
	int8_t x2852 = INT8_MIN;

	t53 = (x2849<<(x2850%(x2851-x2852)));

	if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x3033 = INT32_MAX;
	uint16_t x3034 = 40U;
	int8_t x3036 = -1;
	volatile int32_t t54 = INT32_MAX;

	t54 = (x3033<<(x3034%(x3035-x3036)));

	if (t54 != INT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x3037 = UINT8_MAX;
	volatile int8_t x3038 = INT8_MAX;
	int16_t x3039 = 0;
	int32_t t55 = -739808;

	t55 = (x3037<<(x3038%(x3039-x3040)));

	if (t55 != 510) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint32_t x3049 = UINT32_MAX;
	uint8_t x3050 = 0U;
	int32_t x3051 = 413591;
	volatile int16_t x3052 = INT16_MIN;
	uint32_t t56 = UINT32_MAX;

	t56 = (x3049<<(x3050%(x3051-x3052)));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x3289 = UINT8_MAX;
	int16_t x3290 = 127;
	volatile int8_t x3291 = 20;
	static uint32_t x3292 = UINT32_MAX;
	static int32_t t57 = 287;

	t57 = (x3289<<(x3290%(x3291-x3292)));

	if (t57 != 510) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x3377 = 56U;
	int64_t x3379 = -1LL;
	int8_t x3380 = INT8_MAX;
	volatile int32_t t58 = 1;

	t58 = (x3377<<(x3378%(x3379-x3380)));

	if (t58 != 56) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x3413 = UINT8_MAX;
	int32_t x3416 = -1;

	t59 = (x3413<<(x3414%(x3415-x3416)));

	if (t59 != 2040) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x3425 = 985618U;
	uint8_t x3426 = 1U;
	volatile int32_t x3427 = -1;
	volatile uint16_t x3428 = 2U;

	t60 = (x3425<<(x3426%(x3427-x3428)));

	if (t60 != 1971236U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x3461 = 57U;
	volatile uint32_t x3463 = 1U;
	static int32_t x3464 = INT32_MAX;
	uint32_t t61 = 8U;

	t61 = (x3461<<(x3462%(x3463-x3464)));

	if (t61 != 114U) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x3478 = 13U;
	int64_t x3480 = INT64_MAX;
	volatile uint64_t t62 = 291250133182021995LLU;

	t62 = (x3477<<(x3478%(x3479-x3480)));

	if (t62 != 18446744073709543424LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x3509 = INT32_MAX;
	uint16_t x3511 = UINT16_MAX;
	uint64_t x3512 = UINT64_MAX;
	int32_t t63 = INT32_MAX;

	t63 = (x3509<<(x3510%(x3511-x3512)));

	if (t63 != INT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x3533 = 2U;
	int16_t x3535 = -1;
	int64_t x3536 = INT64_MIN;
	volatile int32_t t64 = -428;

	t64 = (x3533<<(x3534%(x3535-x3536)));

	if (t64 != 4) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint16_t x3585 = 55U;
	static volatile int8_t x3586 = 4;
	uint64_t x3587 = UINT64_MAX;
	int8_t x3588 = 1;
	int32_t t65 = -8064238;

	t65 = (x3585<<(x3586%(x3587-x3588)));

	if (t65 != 880) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x3677 = 1;
	int32_t x3678 = INT32_MAX;
	int8_t x3680 = INT8_MIN;

	t66 = (x3677<<(x3678%(x3679-x3680)));

	if (t66 != 128) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x3745 = 2056708U;
	static volatile int64_t x3746 = -94868LL;
	static int32_t x3747 = -1;
	int32_t x3748 = 1;

	t67 = (x3745<<(x3746%(x3747-x3748)));

	if (t67 != 2056708U) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x3749 = 31U;
	volatile uint64_t x3751 = UINT64_MAX;
	int32_t x3752 = INT32_MIN;

	t68 = (x3749<<(x3750%(x3751-x3752)));

	if (t68 != 63488) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x3774 = 2;
	int16_t x3775 = -1;
	static int8_t x3776 = INT8_MIN;
	int32_t t69 = 31;

	t69 = (x3773<<(x3774%(x3775-x3776)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x3865 = 2U;
	int16_t x3868 = -154;
	volatile int32_t t70 = -62977684;

	t70 = (x3865<<(x3866%(x3867-x3868)));

	if (t70 != 2) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x3869 = INT16_MAX;
	uint64_t x3870 = 3LLU;
	static int16_t x3871 = INT16_MAX;
	volatile int32_t t71 = 41473;

	t71 = (x3869<<(x3870%(x3871-x3872)));

	if (t71 != 262136) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x3905 = 96797U;
	static uint8_t x3906 = 33U;
	static volatile uint16_t x3907 = 45U;
	uint32_t t72 = 160885U;

	t72 = (x3905<<(x3906%(x3907-x3908)));

	if (t72 != 774376U) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x3913 = 29U;
	static uint16_t x3914 = 0U;
	static volatile int32_t x3915 = 1645749;
	volatile int64_t x3916 = -1LL;
	volatile uint32_t t73 = 907622130U;

	t73 = (x3913<<(x3914%(x3915-x3916)));

	if (t73 != 29U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x3945 = INT16_MAX;
	static uint8_t x3946 = 1U;
	int16_t x3947 = INT16_MAX;
	uint16_t x3948 = 77U;
	volatile int32_t t74 = 3;

	t74 = (x3945<<(x3946%(x3947-x3948)));

	if (t74 != 65534) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x3961 = UINT16_MAX;
	volatile int32_t x3962 = INT32_MIN;
	int32_t x3964 = -1;
	volatile int32_t t75 = -262;

	t75 = (x3961<<(x3962%(x3963-x3964)));

	if (t75 != 65535) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x4053 = 10U;
	int64_t x4054 = INT64_MAX;
	volatile uint64_t x4055 = 212LLU;
	static int32_t x4056 = -1;
	volatile uint32_t t76 = 632584U;

	t76 = (x4053<<(x4054%(x4055-x4056)));

	if (t76 != 160U) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x4065 = 4U;
	static volatile uint32_t x4066 = UINT32_MAX;
	int32_t x4067 = INT32_MIN;
	static int64_t x4068 = -1LL;
	int32_t t77 = -13;

	t77 = (x4065<<(x4066%(x4067-x4068)));

	if (t77 != 8) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x4069 = 1261U;
	int8_t x4070 = 1;
	uint16_t x4071 = 38U;
	static uint8_t x4072 = 0U;
	volatile int32_t t78 = 12885;

	t78 = (x4069<<(x4070%(x4071-x4072)));

	if (t78 != 2522) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x4102 = UINT32_MAX;
	uint16_t x4103 = 3U;
	volatile uint64_t x4104 = UINT64_MAX;
	static int32_t t79 = 45253;

	t79 = (x4101<<(x4102%(x4103-x4104)));

	if (t79 != 121704) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x4109 = 3106LLU;
	uint8_t x4110 = 8U;
	uint16_t x4111 = UINT16_MAX;
	static volatile uint64_t x4112 = UINT64_MAX;
	volatile uint64_t t80 = 3255556546832205757LLU;

	t80 = (x4109<<(x4110%(x4111-x4112)));

	if (t80 != 795136LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x4193 = 14081077U;
	uint64_t x4194 = 4LLU;
	int32_t x4195 = INT32_MIN;
	int8_t x4196 = -28;
	volatile uint32_t t81 = 283849U;

	t81 = (x4193<<(x4194%(x4195-x4196)));

	if (t81 != 225297232U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x4197 = INT16_MAX;
	uint16_t x4198 = 0U;
	volatile uint64_t x4199 = 431809783224099192LLU;
	static volatile int32_t t82 = 1;

	t82 = (x4197<<(x4198%(x4199-x4200)));

	if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x4203 = -7;
	volatile int32_t x4204 = 24541;
	uint32_t t83 = 682230279U;

	t83 = (x4201<<(x4202%(x4203-x4204)));

	if (t83 != 20963400U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x4351 = INT8_MIN;
	uint16_t x4352 = 414U;
	volatile int32_t t84 = 5840;

	t84 = (x4349<<(x4350%(x4351-x4352)));

	if (t84 != 187) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x4389 = 10U;
	static uint16_t x4390 = 784U;
	uint32_t x4391 = 1U;
	uint32_t x4392 = UINT32_MAX;

	t85 = (x4389<<(x4390%(x4391-x4392)));

	if (t85 != 10) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x4397 = INT16_MAX;
	uint32_t x4398 = 3U;
	static volatile uint16_t x4400 = UINT16_MAX;
	volatile int32_t t86 = 222;

	t86 = (x4397<<(x4398%(x4399-x4400)));

	if (t86 != 262136) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x4461 = 1837U;
	uint8_t x4462 = 1U;
	static uint16_t x4463 = 1435U;
	int8_t x4464 = -4;
	int32_t t87 = -15844;

	t87 = (x4461<<(x4462%(x4463-x4464)));

	if (t87 != 3674) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x4466 = 10U;
	int16_t x4467 = 1;
	int8_t x4468 = INT8_MIN;
	uint32_t t88 = 877847U;

	t88 = (x4465<<(x4466%(x4467-x4468)));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x4541 = 5U;
	static uint16_t x4542 = 7U;
	int64_t x4543 = INT64_MAX;
	int16_t x4544 = 5;
	int32_t t89 = 5937;

	t89 = (x4541<<(x4542%(x4543-x4544)));

	if (t89 != 640) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x4553 = UINT32_MAX;
	int32_t x4554 = INT32_MAX;
	static uint64_t x4555 = 54LLU;
	int16_t x4556 = -1;
	volatile uint32_t t90 = 0U;

	t90 = (x4553<<(x4554%(x4555-x4556)));

	if (t90 != 4294963200U) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x4565 = 88943U;
	int32_t x4566 = 3;
	int32_t x4567 = INT32_MIN;
	int16_t x4568 = INT16_MIN;
	volatile uint32_t t91 = 3U;

	t91 = (x4565<<(x4566%(x4567-x4568)));

	if (t91 != 711544U) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x4605 = 118U;
	static int16_t x4606 = INT16_MAX;
	uint8_t x4607 = 1U;
	uint64_t x4608 = UINT64_MAX;
	static int32_t t92 = 222;

	t92 = (x4605<<(x4606%(x4607-x4608)));

	if (t92 != 236) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x4622 = 259;
	static int32_t x4623 = -1;

	t93 = (x4621<<(x4622%(x4623-x4624)));

	if (t93 != 162278899615568LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x4646 = 29;
	volatile uint32_t t94 = 423933285U;

	t94 = (x4645<<(x4646%(x4647-x4648)));

	if (t94 != 1073741824U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x4685 = INT16_MAX;
	int8_t x4687 = 8;
	int64_t x4688 = -604757435LL;
	volatile int32_t t95 = -490450;

	t95 = (x4685<<(x4686%(x4687-x4688)));

	if (t95 != 32767) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x4729 = 0U;
	int8_t x4730 = INT8_MIN;
	uint64_t x4731 = 0LLU;
	static int32_t t96 = -783;

	t96 = (x4729<<(x4730%(x4731-x4732)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x4741 = INT64_MAX;
	static int32_t x4742 = INT32_MIN;
	int16_t x4744 = -1;

	t97 = (x4741<<(x4742%(x4743-x4744)));

	if (t97 != INT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x4762 = 1;
	int64_t x4763 = INT64_MIN;
	uint64_t x4764 = UINT64_MAX;
	volatile uint64_t t98 = 9076LLU;

	t98 = (x4761<<(x4762%(x4763-x4764)));

	if (t98 != 13356037999835920LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x4797 = 46U;
	static int8_t x4799 = INT8_MIN;
	int64_t x4800 = INT64_MIN;

	t99 = (x4797<<(x4798%(x4799-x4800)));

	if (t99 != 46) { NG(); } else { ; }
	
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

