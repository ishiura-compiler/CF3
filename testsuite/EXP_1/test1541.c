#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x37 = INT32_MAX;
volatile uint64_t x57 = UINT64_MAX;
int64_t x250 = INT64_MIN;
volatile int8_t x364 = 1;
uint32_t x375 = UINT32_MAX;
static volatile int32_t t6 = -1;
int64_t x485 = INT64_MAX;
uint64_t x487 = 75656LLU;
static uint8_t x492 = 11U;
int8_t x640 = 5;
int16_t x698 = 5;
uint32_t x699 = UINT32_MAX;
static uint32_t x807 = UINT32_MAX;
uint8_t x884 = 9U;
static int32_t x1009 = -1;
int64_t x1011 = -1LL;
static volatile uint64_t t17 = 28807LLU;
uint8_t x1346 = UINT8_MAX;
int16_t x1349 = -17;
volatile int32_t t19 = -796783988;
uint64_t t21 = 541132378577483LLU;
volatile uint64_t x1499 = 1127282627124LLU;
static volatile int32_t x1517 = INT32_MIN;
uint16_t x1641 = 1667U;
int32_t t24 = 5699525;
static volatile uint16_t x1681 = 194U;
static volatile uint32_t t26 = 419333609U;
volatile int16_t x1753 = -2601;
uint64_t x1755 = 231408595195LLU;
uint64_t x1789 = UINT64_MAX;
uint8_t x1930 = 113U;
static volatile int32_t t29 = 0;
volatile uint8_t x2192 = 13U;
volatile int64_t x2434 = INT64_MAX;
volatile int32_t t36 = 15032;
uint64_t x2544 = 17LLU;
int32_t t43 = -5617529;
int8_t x2933 = -1;
volatile uint64_t t44 = 3174934LLU;
int64_t x3186 = 836586613LL;
static int64_t x3490 = INT64_MIN;
static volatile int16_t x3492 = 0;
uint64_t x3562 = UINT64_MAX;
static int32_t t51 = -3543644;
volatile int16_t x3729 = INT16_MIN;
volatile int32_t t53 = -12350;
int32_t x3769 = -1;
uint64_t x3771 = 708LLU;
uint8_t x3784 = 14U;
uint64_t x3893 = 2140452383LLU;
int64_t x3895 = -1LL;
volatile int8_t x3897 = 18;
int8_t x3899 = INT8_MIN;
volatile uint64_t t58 = 40955LLU;
int8_t x4042 = INT8_MIN;
static volatile int32_t t61 = 1;
static int32_t x4289 = -52991313;
int8_t x4309 = -10;
static volatile int64_t t63 = 290692LL;
int32_t t64 = 9630067;
int16_t x4457 = INT16_MIN;
uint16_t x4542 = 3U;
static int32_t x4650 = INT32_MAX;
int32_t x4711 = -12;
volatile int32_t t70 = 134;
uint64_t x4758 = UINT64_MAX;
int8_t x4760 = 9;
uint16_t x4796 = 25U;
static int64_t x4805 = INT64_MIN;
static int8_t x4835 = -13;
static volatile uint64_t t75 = 2144706854108134LLU;
static uint16_t x4954 = UINT16_MAX;
uint32_t x4955 = UINT32_MAX;
static int32_t x5009 = 95;
static volatile int8_t x5071 = INT8_MIN;
static uint32_t x5072 = 4U;
int32_t t81 = -71;
uint32_t x5076 = 14U;
volatile int32_t t83 = -83866;
int8_t x5379 = -12;
int8_t x5380 = 1;
int32_t x5409 = 7892790;
uint64_t t86 = 2560LLU;
int32_t t87 = 817316368;
static uint32_t x5454 = 822134U;
static int8_t x5456 = 0;
int32_t t89 = 1905777;
uint32_t t92 = 2619U;
int32_t t94 = 112;
static uint64_t x5795 = 59LLU;
uint32_t x5823 = 16266U;
int8_t x5824 = 13;
static int32_t x5831 = -15620;
static int8_t x5832 = 1;
volatile int32_t t98 = -52306;
volatile uint16_t x5896 = 0U;
int32_t t99 = 134752103;


void f0(void) {
	int32_t x38 = -1;
	static int64_t x39 = -20263219055195LL;
	int8_t x40 = 12;
	volatile int64_t t0 = 4LL;

	t0 = (((x37<=x38)-x39)>>x40);

	if (t0 != 4947074964LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x58 = UINT64_MAX;
	uint64_t x59 = UINT64_MAX;
	uint8_t x60 = 0U;
	static uint64_t t1 = 683406LLU;

	t1 = (((x57<=x58)-x59)>>x60);

	if (t1 != 2LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x249 = 7084290U;
	volatile int8_t x251 = INT8_MIN;
	int16_t x252 = 3;
	int32_t t2 = -34212;

	t2 = (((x249<=x250)-x251)>>x252);

	if (t2 != 16) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x313 = -1;
	int8_t x314 = INT8_MIN;
	uint64_t x315 = UINT64_MAX;
	uint32_t x316 = 1U;
	uint64_t t3 = 22225LLU;

	t3 = (((x313<=x314)-x315)>>x316);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x361 = INT32_MIN;
	static int64_t x362 = -3LL;
	volatile int8_t x363 = -1;
	int32_t t4 = -279819;

	t4 = (((x361<=x362)-x363)>>x364);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x373 = INT64_MAX;
	int32_t x374 = INT32_MAX;
	volatile uint8_t x376 = 2U;
	static volatile uint32_t t5 = 390397U;

	t5 = (((x373<=x374)-x375)>>x376);

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x389 = 15982296741147424LLU;
	int16_t x390 = 52;
	int32_t x391 = -1;
	uint8_t x392 = 4U;

	t6 = (((x389<=x390)-x391)>>x392);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x486 = 1;
	uint8_t x488 = 23U;
	volatile uint64_t t7 = 94958061LLU;

	t7 = (((x485<=x486)-x487)>>x488);

	if (t7 != 2199023255551LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x489 = -7;
	int8_t x490 = INT8_MIN;
	int8_t x491 = -1;
	int32_t t8 = 38;

	t8 = (((x489<=x490)-x491)>>x492);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x637 = INT8_MAX;
	uint8_t x638 = UINT8_MAX;
	int32_t x639 = -540376892;
	volatile int32_t t9 = -402;

	t9 = (((x637<=x638)-x639)>>x640);

	if (t9 != 16886777) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x697 = INT64_MIN;
	int64_t x700 = 1LL;
	volatile uint32_t t10 = 200U;

	t10 = (((x697<=x698)-x699)>>x700);

	if (t10 != 1U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x805 = INT16_MIN;
	int8_t x806 = INT8_MAX;
	volatile uint32_t x808 = 4U;
	volatile uint32_t t11 = 8321619U;

	t11 = (((x805<=x806)-x807)>>x808);

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x881 = INT64_MIN;
	uint64_t x882 = UINT64_MAX;
	static uint32_t x883 = 49U;
	volatile uint32_t t12 = 34733U;

	t12 = (((x881<=x882)-x883)>>x884);

	if (t12 != 8388607U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x909 = -1LL;
	static volatile int8_t x910 = -1;
	int8_t x911 = 0;
	int32_t x912 = 1;
	int32_t t13 = -10480;

	t13 = (((x909<=x910)-x911)>>x912);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x973 = INT8_MIN;
	int32_t x974 = 946062268;
	int16_t x975 = INT16_MIN;
	volatile int8_t x976 = 29;
	int32_t t14 = -6086;

	t14 = (((x973<=x974)-x975)>>x976);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x1010 = -342976228LL;
	uint8_t x1012 = 0U;
	volatile int64_t t15 = 173158766675775LL;

	t15 = (((x1009<=x1010)-x1011)>>x1012);

	if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x1185 = -2;
	int32_t x1186 = -421826;
	int8_t x1187 = -7;
	int16_t x1188 = 0;
	static volatile int32_t t16 = 484483171;

	t16 = (((x1185<=x1186)-x1187)>>x1188);

	if (t16 != 7) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x1261 = INT64_MAX;
	int16_t x1262 = 123;
	volatile uint64_t x1263 = UINT64_MAX;
	int8_t x1264 = 1;

	t17 = (((x1261<=x1262)-x1263)>>x1264);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x1345 = 0;
	int8_t x1347 = INT8_MIN;
	static uint8_t x1348 = 2U;
	volatile int32_t t18 = 1845706;

	t18 = (((x1345<=x1346)-x1347)>>x1348);

	if (t18 != 32) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x1350 = INT8_MIN;
	static int8_t x1351 = -17;
	uint8_t x1352 = 3U;

	t19 = (((x1349<=x1350)-x1351)>>x1352);

	if (t19 != 2) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x1353 = UINT16_MAX;
	uint16_t x1354 = UINT16_MAX;
	uint16_t x1355 = 0U;
	uint8_t x1356 = 2U;
	int32_t t20 = -2159928;

	t20 = (((x1353<=x1354)-x1355)>>x1356);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int16_t x1489 = INT16_MIN;
	int8_t x1490 = -1;
	uint64_t x1491 = UINT64_MAX;
	int16_t x1492 = 12;

	t21 = (((x1489<=x1490)-x1491)>>x1492);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x1497 = INT16_MIN;
	int16_t x1498 = INT16_MAX;
	int8_t x1500 = 1;
	uint64_t t22 = 2714100862407LLU;

	t22 = (((x1497<=x1498)-x1499)>>x1500);

	if (t22 != 9223371473213462246LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x1518 = 17406U;
	int8_t x1519 = INT8_MIN;
	static int16_t x1520 = 1;
	volatile int32_t t23 = -148265;

	t23 = (((x1517<=x1518)-x1519)>>x1520);

	if (t23 != 64) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1642 = INT16_MIN;
	int16_t x1643 = INT16_MIN;
	uint8_t x1644 = 20U;

	t24 = (((x1641<=x1642)-x1643)>>x1644);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x1682 = 28U;
	static volatile int16_t x1683 = -1;
	static uint8_t x1684 = 0U;
	volatile int32_t t25 = 56;

	t25 = (((x1681<=x1682)-x1683)>>x1684);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x1713 = UINT32_MAX;
	int32_t x1714 = -902678135;
	uint32_t x1715 = 29485831U;
	static uint16_t x1716 = 11U;

	t26 = (((x1713<=x1714)-x1715)>>x1716);

	if (t26 != 2082754U) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1754 = 1U;
	int16_t x1756 = 2;
	static uint64_t t27 = 786006LLU;

	t27 = (((x1753<=x1754)-x1755)>>x1756);

	if (t27 != 4611685960575239105LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x1790 = 26U;
	int8_t x1791 = INT8_MIN;
	uint16_t x1792 = 2U;
	volatile int32_t t28 = -23876484;

	t28 = (((x1789<=x1790)-x1791)>>x1792);

	if (t28 != 32) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1929 = -1929270LL;
	int16_t x1931 = INT16_MIN;
	uint64_t x1932 = 3LLU;

	t29 = (((x1929<=x1930)-x1931)>>x1932);

	if (t29 != 4096) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x2009 = UINT64_MAX;
	int32_t x2010 = INT32_MIN;
	static int8_t x2011 = INT8_MIN;
	uint8_t x2012 = 1U;
	volatile int32_t t30 = -11;

	t30 = (((x2009<=x2010)-x2011)>>x2012);

	if (t30 != 64) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x2037 = -77427;
	int64_t x2038 = INT64_MAX;
	static uint32_t x2039 = 37065U;
	int8_t x2040 = 1;
	static volatile uint32_t t31 = 233586U;

	t31 = (((x2037<=x2038)-x2039)>>x2040);

	if (t31 != 2147465116U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x2189 = INT16_MAX;
	static uint16_t x2190 = 18U;
	int8_t x2191 = INT8_MIN;
	static volatile int32_t t32 = 3634;

	t32 = (((x2189<=x2190)-x2191)>>x2192);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x2197 = INT8_MIN;
	int16_t x2198 = INT16_MAX;
	uint32_t x2199 = 1983U;
	static uint16_t x2200 = 7U;
	static uint32_t t33 = 18U;

	t33 = (((x2197<=x2198)-x2199)>>x2200);

	if (t33 != 33554416U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x2209 = INT32_MIN;
	uint32_t x2210 = UINT32_MAX;
	int16_t x2211 = 1;
	volatile int16_t x2212 = 13;
	static int32_t t34 = -11002;

	t34 = (((x2209<=x2210)-x2211)>>x2212);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x2373 = INT8_MIN;
	int16_t x2374 = -1;
	int32_t x2375 = -1;
	uint16_t x2376 = 15U;
	static volatile int32_t t35 = 1;

	t35 = (((x2373<=x2374)-x2375)>>x2376);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x2433 = INT16_MAX;
	int8_t x2435 = INT8_MIN;
	uint8_t x2436 = 0U;

	t36 = (((x2433<=x2434)-x2435)>>x2436);

	if (t36 != 129) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x2437 = 28715226102395676LL;
	uint16_t x2438 = 3U;
	int16_t x2439 = INT16_MIN;
	static int8_t x2440 = 1;
	int32_t t37 = 1;

	t37 = (((x2437<=x2438)-x2439)>>x2440);

	if (t37 != 16384) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x2517 = INT32_MIN;
	static volatile uint8_t x2518 = 0U;
	volatile int32_t x2519 = -441627;
	uint16_t x2520 = 1U;
	volatile int32_t t38 = 6731580;

	t38 = (((x2517<=x2518)-x2519)>>x2520);

	if (t38 != 220814) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2541 = 59;
	int8_t x2542 = INT8_MAX;
	static int8_t x2543 = INT8_MIN;
	int32_t t39 = 1516513;

	t39 = (((x2541<=x2542)-x2543)>>x2544);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x2797 = 0;
	int64_t x2798 = INT64_MIN;
	uint32_t x2799 = 1339019U;
	uint16_t x2800 = 17U;
	static uint32_t t40 = 0U;

	t40 = (((x2797<=x2798)-x2799)>>x2800);

	if (t40 != 32757U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x2805 = -1LL;
	int32_t x2806 = -1;
	int32_t x2807 = -103;
	static volatile uint8_t x2808 = 0U;
	volatile int32_t t41 = -1941;

	t41 = (((x2805<=x2806)-x2807)>>x2808);

	if (t41 != 104) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x2817 = 244;
	uint64_t x2818 = 33583LLU;
	int8_t x2819 = 0;
	uint16_t x2820 = 1U;
	static int32_t t42 = 156311;

	t42 = (((x2817<=x2818)-x2819)>>x2820);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x2901 = 1380249U;
	int64_t x2902 = -1LL;
	int16_t x2903 = INT16_MIN;
	static int8_t x2904 = 27;

	t43 = (((x2901<=x2902)-x2903)>>x2904);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x2934 = -3LL;
	uint64_t x2935 = 262079726LLU;
	uint16_t x2936 = 1U;

	t44 = (((x2933<=x2934)-x2935)>>x2936);

	if (t44 != 9223372036723735945LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x2965 = INT16_MIN;
	uint64_t x2966 = 473289199090765LLU;
	uint32_t x2967 = 14U;
	volatile int64_t x2968 = 0LL;
	static uint32_t t45 = 2U;

	t45 = (((x2965<=x2966)-x2967)>>x2968);

	if (t45 != 4294967282U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x3101 = 1;
	volatile int16_t x3102 = -1;
	int64_t x3103 = -2307934LL;
	uint8_t x3104 = 8U;
	volatile int64_t t46 = 0LL;

	t46 = (((x3101<=x3102)-x3103)>>x3104);

	if (t46 != 9015LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x3185 = INT16_MIN;
	static int16_t x3187 = -1;
	static uint16_t x3188 = 0U;
	int32_t t47 = 351;

	t47 = (((x3185<=x3186)-x3187)>>x3188);

	if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x3309 = 34U;
	static int8_t x3310 = -1;
	uint32_t x3311 = UINT32_MAX;
	static int16_t x3312 = 6;
	static volatile uint32_t t48 = 6935290U;

	t48 = (((x3309<=x3310)-x3311)>>x3312);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x3457 = UINT8_MAX;
	uint16_t x3458 = 3796U;
	volatile uint8_t x3459 = 0U;
	uint16_t x3460 = 8U;
	static int32_t t49 = 1628;

	t49 = (((x3457<=x3458)-x3459)>>x3460);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x3489 = 16039644306LL;
	int16_t x3491 = -1;
	volatile int32_t t50 = 28;

	t50 = (((x3489<=x3490)-x3491)>>x3492);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x3561 = 1;
	int16_t x3563 = -34;
	int32_t x3564 = 2;

	t51 = (((x3561<=x3562)-x3563)>>x3564);

	if (t51 != 8) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x3609 = INT16_MIN;
	int8_t x3610 = INT8_MIN;
	uint32_t x3611 = UINT32_MAX;
	volatile int8_t x3612 = 1;
	volatile uint32_t t52 = 927276857U;

	t52 = (((x3609<=x3610)-x3611)>>x3612);

	if (t52 != 1U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x3730 = 1;
	int16_t x3731 = -651;
	static uint32_t x3732 = 3U;

	t53 = (((x3729<=x3730)-x3731)>>x3732);

	if (t53 != 81) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x3770 = UINT32_MAX;
	uint32_t x3772 = 23U;
	volatile uint64_t t54 = 2518866576555387LLU;

	t54 = (((x3769<=x3770)-x3771)>>x3772);

	if (t54 != 2199023255551LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x3781 = UINT32_MAX;
	uint8_t x3782 = 7U;
	int32_t x3783 = -1;
	int32_t t55 = -5;

	t55 = (((x3781<=x3782)-x3783)>>x3784);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x3894 = 1679006388LLU;
	int8_t x3896 = 1;
	int64_t t56 = -348489032398LL;

	t56 = (((x3893<=x3894)-x3895)>>x3896);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x3898 = 58U;
	uint8_t x3900 = 9U;
	int32_t t57 = 52972531;

	t57 = (((x3897<=x3898)-x3899)>>x3900);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x3977 = 44560LLU;
	volatile int16_t x3978 = 2845;
	static uint64_t x3979 = 164037840891LLU;
	uint16_t x3980 = 50U;

	t58 = (((x3977<=x3978)-x3979)>>x3980);

	if (t58 != 16383LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x4041 = INT32_MIN;
	int8_t x4043 = -1;
	int16_t x4044 = 0;
	static int32_t t59 = 48806507;

	t59 = (((x4041<=x4042)-x4043)>>x4044);

	if (t59 != 2) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x4053 = 734116653663LL;
	uint8_t x4054 = 0U;
	int64_t x4055 = -1LL;
	uint8_t x4056 = 36U;
	int64_t t60 = 887387756LL;

	t60 = (((x4053<=x4054)-x4055)>>x4056);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint64_t x4229 = 1041165272404120389LLU;
	int32_t x4230 = -1;
	volatile int8_t x4231 = 0;
	uint8_t x4232 = 15U;

	t61 = (((x4229<=x4230)-x4231)>>x4232);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x4290 = -5;
	uint64_t x4291 = 2475640290176LLU;
	static int32_t x4292 = 12;
	uint64_t t62 = 1047562426484960493LLU;

	t62 = (((x4289<=x4290)-x4291)>>x4292);

	if (t62 != 4503599022966128LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x4310 = INT64_MAX;
	int64_t x4311 = -6136021482075LL;
	volatile uint32_t x4312 = 11U;

	t63 = (((x4309<=x4310)-x4311)>>x4312);

	if (t63 != 2996104239LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x4453 = INT8_MIN;
	int32_t x4454 = 22550921;
	static int32_t x4455 = -11798990;
	uint32_t x4456 = 3U;

	t64 = (((x4453<=x4454)-x4455)>>x4456);

	if (t64 != 1474873) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x4458 = INT8_MAX;
	static int8_t x4459 = INT8_MIN;
	int8_t x4460 = 8;
	int32_t t65 = 11261;

	t65 = (((x4457<=x4458)-x4459)>>x4460);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x4533 = 120U;
	int8_t x4534 = INT8_MIN;
	int8_t x4535 = -1;
	uint16_t x4536 = 30U;
	int32_t t66 = -16150;

	t66 = (((x4533<=x4534)-x4535)>>x4536);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x4541 = INT64_MIN;
	uint64_t x4543 = UINT64_MAX;
	uint16_t x4544 = 4U;
	static volatile uint64_t t67 = 30951616775LLU;

	t67 = (((x4541<=x4542)-x4543)>>x4544);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x4649 = -1;
	int8_t x4651 = INT8_MIN;
	static uint64_t x4652 = 0LLU;
	int32_t t68 = 2416279;

	t68 = (((x4649<=x4650)-x4651)>>x4652);

	if (t68 != 129) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x4709 = INT32_MIN;
	int8_t x4710 = INT8_MIN;
	static uint64_t x4712 = 30LLU;
	static volatile int32_t t69 = -150767;

	t69 = (((x4709<=x4710)-x4711)>>x4712);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x4729 = -1;
	int8_t x4730 = INT8_MIN;
	int8_t x4731 = -1;
	uint16_t x4732 = 2U;

	t70 = (((x4729<=x4730)-x4731)>>x4732);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x4757 = UINT32_MAX;
	int8_t x4759 = -1;
	int32_t t71 = -186655397;

	t71 = (((x4757<=x4758)-x4759)>>x4760);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x4793 = -1LL;
	static uint16_t x4794 = 203U;
	uint32_t x4795 = UINT32_MAX;
	volatile uint32_t t72 = 7U;

	t72 = (((x4793<=x4794)-x4795)>>x4796);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x4806 = UINT8_MAX;
	static volatile uint32_t x4807 = 14U;
	uint8_t x4808 = 7U;
	volatile uint32_t t73 = 340180855U;

	t73 = (((x4805<=x4806)-x4807)>>x4808);

	if (t73 != 33554431U) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x4833 = 14501LL;
	int64_t x4834 = -1LL;
	volatile uint32_t x4836 = 1U;
	int32_t t74 = -91986840;

	t74 = (((x4833<=x4834)-x4835)>>x4836);

	if (t74 != 6) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x4889 = -51509;
	static int32_t x4890 = -16787665;
	uint64_t x4891 = UINT64_MAX;
	int64_t x4892 = 41LL;

	t75 = (((x4889<=x4890)-x4891)>>x4892);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x4905 = 497U;
	uint64_t x4906 = UINT64_MAX;
	int16_t x4907 = INT16_MIN;
	static int8_t x4908 = 3;
	volatile int32_t t76 = -29;

	t76 = (((x4905<=x4906)-x4907)>>x4908);

	if (t76 != 4096) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x4953 = INT16_MAX;
	uint8_t x4956 = 1U;
	volatile uint32_t t77 = 247603U;

	t77 = (((x4953<=x4954)-x4955)>>x4956);

	if (t77 != 1U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x4973 = -1;
	uint32_t x4974 = 640039U;
	int32_t x4975 = -404740;
	int8_t x4976 = 2;
	static int32_t t78 = 725284638;

	t78 = (((x4973<=x4974)-x4975)>>x4976);

	if (t78 != 101185) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x5010 = INT64_MIN;
	static uint64_t x5011 = UINT64_MAX;
	uint16_t x5012 = 58U;
	volatile uint64_t t79 = 5LLU;

	t79 = (((x5009<=x5010)-x5011)>>x5012);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x5061 = 44U;
	int32_t x5062 = INT32_MAX;
	int16_t x5063 = -706;
	uint16_t x5064 = 1U;
	int32_t t80 = 0;

	t80 = (((x5061<=x5062)-x5063)>>x5064);

	if (t80 != 353) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x5069 = 1U;
	int8_t x5070 = INT8_MIN;

	t81 = (((x5069<=x5070)-x5071)>>x5072);

	if (t81 != 8) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x5073 = INT32_MAX;
	int8_t x5074 = -1;
	volatile uint32_t x5075 = UINT32_MAX;
	uint32_t t82 = 150U;

	t82 = (((x5073<=x5074)-x5075)>>x5076);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x5105 = 3;
	volatile uint64_t x5106 = 1629476LLU;
	int8_t x5107 = INT8_MIN;
	volatile uint8_t x5108 = 31U;

	t83 = (((x5105<=x5106)-x5107)>>x5108);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x5325 = -1;
	int64_t x5326 = INT64_MAX;
	volatile uint64_t x5327 = 1LLU;
	volatile int8_t x5328 = 17;
	uint64_t t84 = 280003LLU;

	t84 = (((x5325<=x5326)-x5327)>>x5328);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x5377 = -1;
	uint16_t x5378 = 473U;
	volatile int32_t t85 = -1;

	t85 = (((x5377<=x5378)-x5379)>>x5380);

	if (t85 != 6) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x5410 = 2110995LLU;
	uint64_t x5411 = 7606944631550796LLU;
	int16_t x5412 = 12;

	t86 = (((x5409<=x5410)-x5411)>>x5412);

	if (t86 != 4501742463153808LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x5417 = 87099414611773LL;
	static int64_t x5418 = INT64_MAX;
	int8_t x5419 = -1;
	uint8_t x5420 = 16U;

	t87 = (((x5417<=x5418)-x5419)>>x5420);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x5453 = INT32_MAX;
	int32_t x5455 = -119759;
	int32_t t88 = 73808;

	t88 = (((x5453<=x5454)-x5455)>>x5456);

	if (t88 != 119759) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x5457 = 21U;
	int16_t x5458 = INT16_MIN;
	volatile uint16_t x5459 = 1U;
	uint8_t x5460 = 1U;

	t89 = (((x5457<=x5458)-x5459)>>x5460);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x5493 = 127;
	uint8_t x5494 = UINT8_MAX;
	int8_t x5495 = -16;
	volatile int16_t x5496 = 3;
	volatile int32_t t90 = -137139505;

	t90 = (((x5493<=x5494)-x5495)>>x5496);

	if (t90 != 2) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x5581 = INT8_MAX;
	uint32_t x5582 = UINT32_MAX;
	int16_t x5583 = -1;
	uint32_t x5584 = 23U;
	volatile int32_t t91 = 1951122;

	t91 = (((x5581<=x5582)-x5583)>>x5584);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x5585 = INT16_MAX;
	uint32_t x5586 = 4844269U;
	volatile uint32_t x5587 = UINT32_MAX;
	uint64_t x5588 = 0LLU;

	t92 = (((x5585<=x5586)-x5587)>>x5588);

	if (t92 != 2U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x5617 = INT64_MIN;
	int8_t x5618 = 30;
	int64_t x5619 = -1LL;
	static int8_t x5620 = 37;
	int64_t t93 = -3805826089508LL;

	t93 = (((x5617<=x5618)-x5619)>>x5620);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x5637 = -530717158;
	int16_t x5638 = INT16_MAX;
	int8_t x5639 = -1;
	uint64_t x5640 = 0LLU;

	t94 = (((x5637<=x5638)-x5639)>>x5640);

	if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x5793 = 30722945U;
	int64_t x5794 = -3820986094471LL;
	uint8_t x5796 = 36U;
	uint64_t t95 = 399330011404LLU;

	t95 = (((x5793<=x5794)-x5795)>>x5796);

	if (t95 != 268435455LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x5821 = UINT8_MAX;
	int16_t x5822 = -1;
	uint32_t t96 = 3U;

	t96 = (((x5821<=x5822)-x5823)>>x5824);

	if (t96 != 524286U) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x5829 = INT8_MAX;
	int64_t x5830 = 8055354LL;
	static int32_t t97 = -15;

	t97 = (((x5829<=x5830)-x5831)>>x5832);

	if (t97 != 7810) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x5877 = -1;
	uint8_t x5878 = 0U;
	int16_t x5879 = -1;
	volatile uint8_t x5880 = 19U;

	t98 = (((x5877<=x5878)-x5879)>>x5880);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x5893 = INT32_MIN;
	int8_t x5894 = INT8_MIN;
	static int16_t x5895 = INT16_MIN;

	t99 = (((x5893<=x5894)-x5895)>>x5896);

	if (t99 != 32769) { NG(); } else { ; }
	
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

