#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = 3;
int32_t t1 = 3359;
volatile int32_t x158 = 1;
uint32_t x248 = 24022U;
volatile int32_t t3 = -17;
volatile int32_t t5 = 1;
int32_t t6 = 88265135;
uint8_t x577 = UINT8_MAX;
int8_t x579 = -1;
uint16_t x785 = 0U;
int32_t t8 = 6130231;
int8_t x1377 = 49;
int16_t x1380 = 123;
volatile int32_t t16 = 1;
uint64_t x1619 = 148174090LLU;
static int64_t x1841 = 84807LL;
int16_t x1843 = INT16_MIN;
int32_t x1891 = -34849506;
static volatile int64_t x1892 = INT64_MIN;
int16_t x1967 = -103;
uint8_t x1985 = 2U;
int8_t x1993 = 1;
volatile int16_t x2044 = -1;
uint16_t x2134 = 14U;
int64_t x2135 = -193416887840972556LL;
volatile int32_t t28 = 4168598;
int32_t x2360 = -1;
uint64_t x2445 = 0LLU;
static int32_t x2448 = 1;
uint16_t x2454 = 4U;
uint8_t x2494 = 2U;
int64_t x2495 = 132LL;
int16_t x2576 = -1;
int32_t t34 = -236;
int16_t x2737 = 27;
static int64_t x2778 = 0LL;
int16_t x2780 = -1855;
int64_t x3039 = INT64_MAX;
volatile int32_t x3040 = 94689;
static uint8_t x3201 = UINT8_MAX;
int32_t t42 = -2257;
int64_t x3253 = 26979LL;
volatile int32_t t43 = -5657;
static uint8_t x3405 = UINT8_MAX;
static volatile int32_t t45 = 703302025;
int16_t x3446 = 1;
uint64_t x3447 = 35518724693LLU;
volatile uint64_t x3543 = 31167181866LLU;
uint8_t x3750 = 19U;
static int16_t x3760 = -1;
volatile int32_t t53 = 7106943;
static int8_t x3910 = 15;
static uint8_t x4017 = UINT8_MAX;
int16_t x4019 = 33;
int32_t x4323 = -110;
volatile int32_t t59 = 105849957;
static int64_t x4469 = 2383136LL;
int8_t x4470 = 1;
int64_t x4472 = 9421489037LL;
volatile uint8_t x4510 = 11U;
uint16_t x4511 = 8U;
int8_t x4512 = 4;
static volatile int32_t t61 = -1935476;
volatile int32_t t62 = -55803600;
int32_t x4700 = INT32_MIN;
int8_t x4807 = 0;
int8_t x4808 = INT8_MIN;
uint16_t x4821 = 1U;
uint8_t x4834 = 12U;
int32_t t66 = 63037;
uint8_t x4844 = UINT8_MAX;
volatile int8_t x4846 = 0;
uint8_t x4848 = UINT8_MAX;
int8_t x4872 = INT8_MIN;
static uint64_t x4981 = 5860699594633045770LLU;
uint32_t x5201 = UINT32_MAX;
int32_t t73 = 42488535;
int16_t x5217 = INT16_MAX;
volatile int32_t t74 = 94;
uint64_t x5221 = 10412LLU;
static volatile uint64_t x5240 = 32273035LLU;
volatile int8_t x5250 = 1;
int32_t x5251 = INT32_MAX;
volatile int64_t x5345 = 6031474LL;
uint16_t x5493 = 0U;
static volatile int32_t t79 = -67408;
int8_t x5546 = 13;
int32_t t80 = -8041868;
static int32_t t82 = -561;
uint64_t x5925 = UINT64_MAX;
int16_t x5927 = 746;
volatile int64_t x5928 = INT64_MIN;
int64_t x5964 = 494336141LL;
int32_t t86 = -51;
int16_t x6057 = 1;
int16_t x6060 = INT16_MIN;
static int32_t t87 = -13;
int64_t x6191 = INT64_MIN;
int64_t x6259 = -343825371LL;
int16_t x6425 = INT16_MAX;
int32_t t91 = 141;
uint8_t x6494 = 0U;
volatile int16_t x6496 = -16;
volatile int32_t t92 = -571;
static volatile int64_t x6525 = 153565339705310202LL;
int32_t x6526 = 0;
uint64_t x6556 = UINT64_MAX;
uint64_t x6711 = 112423114179828910LLU;
uint32_t x6713 = 206613238U;
uint16_t x6716 = 11234U;
uint32_t x6750 = 10U;


void f0(void) {
	volatile uint32_t x2 = 1U;
	volatile int64_t x3 = 280713730LL;
	static int8_t x4 = INT8_MIN;
	int32_t t0 = -675907529;

	t0 = (((x1<<x2)^x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 29579U;
	volatile uint8_t x6 = 7U;
	uint64_t x7 = 70128268LLU;
	static int32_t x8 = 2;

	t1 = (((x5<<x6)^x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x157 = INT16_MAX;
	static volatile uint16_t x159 = 57U;
	volatile int16_t x160 = 26;
	int32_t t2 = 1355521;

	t2 = (((x157<<x158)^x159)==x160);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x245 = INT8_MAX;
	uint8_t x246 = 8U;
	uint32_t x247 = 15U;

	t3 = (((x245<<x246)^x247)==x248);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x333 = 1;
	static int16_t x334 = 0;
	int16_t x335 = -2;
	int8_t x336 = INT8_MIN;
	volatile int32_t t4 = -452131;

	t4 = (((x333<<x334)^x335)==x336);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x369 = 842726196LLU;
	static int16_t x370 = 11;
	volatile int32_t x371 = -1;
	int32_t x372 = -74614;

	t5 = (((x369<<x370)^x371)==x372);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x377 = 15LLU;
	volatile uint32_t x378 = 13U;
	volatile int32_t x379 = INT32_MIN;
	int16_t x380 = -7768;

	t6 = (((x377<<x378)^x379)==x380);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x578 = 0U;
	int32_t x580 = INT32_MAX;
	int32_t t7 = 4149413;

	t7 = (((x577<<x578)^x579)==x580);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x786 = 18U;
	int8_t x787 = -1;
	int32_t x788 = INT32_MIN;

	t8 = (((x785<<x786)^x787)==x788);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x1189 = INT8_MAX;
	uint8_t x1190 = 19U;
	static volatile int64_t x1191 = INT64_MAX;
	int32_t x1192 = -5403;
	static volatile int32_t t9 = -1687290;

	t9 = (((x1189<<x1190)^x1191)==x1192);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x1321 = 28U;
	uint8_t x1322 = 6U;
	volatile uint16_t x1323 = 3U;
	int8_t x1324 = INT8_MIN;
	int32_t t10 = -2511707;

	t10 = (((x1321<<x1322)^x1323)==x1324);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x1345 = 506U;
	int8_t x1346 = 3;
	int64_t x1347 = -14LL;
	int8_t x1348 = INT8_MIN;
	int32_t t11 = -367783;

	t11 = (((x1345<<x1346)^x1347)==x1348);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x1378 = 6U;
	int64_t x1379 = INT64_MIN;
	volatile int32_t t12 = 6;

	t12 = (((x1377<<x1378)^x1379)==x1380);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x1493 = 5035;
	uint8_t x1494 = 3U;
	uint16_t x1495 = 1925U;
	static volatile int32_t x1496 = INT32_MIN;
	int32_t t13 = 51327001;

	t13 = (((x1493<<x1494)^x1495)==x1496);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x1513 = INT8_MAX;
	static volatile uint8_t x1514 = 4U;
	int32_t x1515 = INT32_MIN;
	volatile int16_t x1516 = -423;
	volatile int32_t t14 = -3956934;

	t14 = (((x1513<<x1514)^x1515)==x1516);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x1545 = 383620U;
	volatile int16_t x1546 = 0;
	volatile int16_t x1547 = INT16_MIN;
	int16_t x1548 = 0;
	static int32_t t15 = 874157667;

	t15 = (((x1545<<x1546)^x1547)==x1548);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x1553 = 794882797450934LLU;
	int8_t x1554 = 4;
	volatile uint8_t x1555 = UINT8_MAX;
	uint16_t x1556 = UINT16_MAX;

	t16 = (((x1553<<x1554)^x1555)==x1556);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x1617 = 349U;
	uint64_t x1618 = 0LLU;
	int16_t x1620 = 1;
	int32_t t17 = 5;

	t17 = (((x1617<<x1618)^x1619)==x1620);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x1825 = 143;
	static int32_t x1826 = 0;
	int32_t x1827 = -53658770;
	int8_t x1828 = -1;
	static volatile int32_t t18 = 252;

	t18 = (((x1825<<x1826)^x1827)==x1828);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1842 = 0;
	static int32_t x1844 = -1;
	static volatile int32_t t19 = 347;

	t19 = (((x1841<<x1842)^x1843)==x1844);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x1889 = 32;
	uint8_t x1890 = 12U;
	int32_t t20 = 2004;

	t20 = (((x1889<<x1890)^x1891)==x1892);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x1965 = 2U;
	uint8_t x1966 = 0U;
	int64_t x1968 = -57233465718LL;
	static int32_t t21 = -1;

	t21 = (((x1965<<x1966)^x1967)==x1968);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1969 = INT16_MAX;
	volatile uint16_t x1970 = 5U;
	uint16_t x1971 = UINT16_MAX;
	volatile int32_t x1972 = -27657793;
	int32_t t22 = 764585161;

	t22 = (((x1969<<x1970)^x1971)==x1972);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1986 = 11;
	uint16_t x1987 = 27448U;
	int16_t x1988 = INT16_MIN;
	int32_t t23 = -25025;

	t23 = (((x1985<<x1986)^x1987)==x1988);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x1994 = 14U;
	int8_t x1995 = -1;
	int8_t x1996 = INT8_MAX;
	static int32_t t24 = 28970;

	t24 = (((x1993<<x1994)^x1995)==x1996);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x2041 = 17;
	volatile int8_t x2042 = 1;
	int16_t x2043 = INT16_MAX;
	int32_t t25 = 25;

	t25 = (((x2041<<x2042)^x2043)==x2044);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x2133 = 8722U;
	uint64_t x2136 = 139875162218061286LLU;
	int32_t t26 = 1;

	t26 = (((x2133<<x2134)^x2135)==x2136);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x2345 = 0U;
	uint64_t x2346 = 29LLU;
	int8_t x2347 = INT8_MIN;
	int8_t x2348 = -1;
	static int32_t t27 = -1;

	t27 = (((x2345<<x2346)^x2347)==x2348);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x2349 = INT8_MAX;
	uint32_t x2350 = 1U;
	volatile int64_t x2351 = INT64_MAX;
	int16_t x2352 = -1;

	t28 = (((x2349<<x2350)^x2351)==x2352);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x2357 = 0;
	static int16_t x2358 = 1;
	int16_t x2359 = -1;
	static volatile int32_t t29 = 207;

	t29 = (((x2357<<x2358)^x2359)==x2360);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x2405 = UINT64_MAX;
	uint8_t x2406 = 27U;
	volatile uint32_t x2407 = UINT32_MAX;
	volatile uint8_t x2408 = UINT8_MAX;
	static volatile int32_t t30 = -2778;

	t30 = (((x2405<<x2406)^x2407)==x2408);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x2446 = 2;
	uint16_t x2447 = UINT16_MAX;
	int32_t t31 = -1430;

	t31 = (((x2445<<x2446)^x2447)==x2448);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x2453 = 3;
	int8_t x2455 = -7;
	volatile uint8_t x2456 = 0U;
	int32_t t32 = 3708591;

	t32 = (((x2453<<x2454)^x2455)==x2456);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x2493 = 732306LLU;
	int64_t x2496 = -9LL;
	volatile int32_t t33 = 933;

	t33 = (((x2493<<x2494)^x2495)==x2496);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x2573 = INT8_MAX;
	volatile int16_t x2574 = 0;
	int64_t x2575 = INT64_MAX;

	t34 = (((x2573<<x2574)^x2575)==x2576);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x2705 = 50291013U;
	int8_t x2706 = 2;
	int8_t x2707 = INT8_MIN;
	int16_t x2708 = 155;
	int32_t t35 = -925387872;

	t35 = (((x2705<<x2706)^x2707)==x2708);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x2738 = 0U;
	int32_t x2739 = -30873;
	uint64_t x2740 = UINT64_MAX;
	volatile int32_t t36 = -129976668;

	t36 = (((x2737<<x2738)^x2739)==x2740);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x2777 = INT64_MAX;
	volatile uint8_t x2779 = 14U;
	volatile int32_t t37 = -122;

	t37 = (((x2777<<x2778)^x2779)==x2780);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2785 = 1527;
	uint8_t x2786 = 0U;
	volatile int64_t x2787 = INT64_MIN;
	int64_t x2788 = -11268431897819LL;
	static int32_t t38 = 2;

	t38 = (((x2785<<x2786)^x2787)==x2788);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x3001 = 24643133172027069LLU;
	int8_t x3002 = 24;
	int32_t x3003 = -1;
	uint64_t x3004 = UINT64_MAX;
	int32_t t39 = 332663007;

	t39 = (((x3001<<x3002)^x3003)==x3004);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x3017 = 22;
	int16_t x3018 = 6;
	int32_t x3019 = INT32_MAX;
	volatile int64_t x3020 = INT64_MAX;
	int32_t t40 = -1798;

	t40 = (((x3017<<x3018)^x3019)==x3020);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint32_t x3037 = UINT32_MAX;
	static uint16_t x3038 = 25U;
	volatile int32_t t41 = 704647;

	t41 = (((x3037<<x3038)^x3039)==x3040);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x3202 = 0;
	static int8_t x3203 = 1;
	uint32_t x3204 = UINT32_MAX;

	t42 = (((x3201<<x3202)^x3203)==x3204);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x3254 = 1;
	int8_t x3255 = 1;
	uint64_t x3256 = 6246LLU;

	t43 = (((x3253<<x3254)^x3255)==x3256);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x3277 = 22U;
	uint16_t x3278 = 0U;
	int8_t x3279 = INT8_MAX;
	int8_t x3280 = -1;
	static int32_t t44 = 1258;

	t44 = (((x3277<<x3278)^x3279)==x3280);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x3406 = 5U;
	volatile int16_t x3407 = INT16_MAX;
	int8_t x3408 = INT8_MIN;

	t45 = (((x3405<<x3406)^x3407)==x3408);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x3445 = INT8_MAX;
	int32_t x3448 = INT32_MIN;
	int32_t t46 = 37007659;

	t46 = (((x3445<<x3446)^x3447)==x3448);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x3541 = 85772448395307LL;
	uint8_t x3542 = 1U;
	int32_t x3544 = INT32_MIN;
	static int32_t t47 = -11521557;

	t47 = (((x3541<<x3542)^x3543)==x3544);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x3597 = 34593194U;
	uint8_t x3598 = 31U;
	static volatile int32_t x3599 = -1;
	int64_t x3600 = -2211458590416331171LL;
	volatile int32_t t48 = 332665;

	t48 = (((x3597<<x3598)^x3599)==x3600);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x3601 = INT8_MAX;
	int8_t x3602 = 0;
	volatile uint16_t x3603 = 143U;
	uint32_t x3604 = 11U;
	volatile int32_t t49 = -1;

	t49 = (((x3601<<x3602)^x3603)==x3604);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x3749 = 20712U;
	int16_t x3751 = INT16_MIN;
	int64_t x3752 = -100110LL;
	int32_t t50 = 12897578;

	t50 = (((x3749<<x3750)^x3751)==x3752);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x3757 = 28U;
	uint32_t x3758 = 0U;
	uint64_t x3759 = UINT64_MAX;
	static int32_t t51 = 691534;

	t51 = (((x3757<<x3758)^x3759)==x3760);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x3797 = UINT64_MAX;
	volatile uint8_t x3798 = 1U;
	int32_t x3799 = -102976328;
	uint16_t x3800 = 4U;
	volatile int32_t t52 = -2759181;

	t52 = (((x3797<<x3798)^x3799)==x3800);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x3829 = 2U;
	uint8_t x3830 = 6U;
	static volatile uint16_t x3831 = UINT16_MAX;
	uint32_t x3832 = UINT32_MAX;

	t53 = (((x3829<<x3830)^x3831)==x3832);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x3909 = UINT16_MAX;
	static uint32_t x3911 = UINT32_MAX;
	int32_t x3912 = INT32_MIN;
	volatile int32_t t54 = 156;

	t54 = (((x3909<<x3910)^x3911)==x3912);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x4018 = 12;
	int8_t x4020 = INT8_MAX;
	volatile int32_t t55 = -1;

	t55 = (((x4017<<x4018)^x4019)==x4020);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x4073 = UINT8_MAX;
	static uint16_t x4074 = 2U;
	uint8_t x4075 = 39U;
	int16_t x4076 = -1;
	volatile int32_t t56 = 4007489;

	t56 = (((x4073<<x4074)^x4075)==x4076);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x4285 = 7U;
	volatile int8_t x4286 = 1;
	int64_t x4287 = INT64_MIN;
	volatile int32_t x4288 = -1;
	int32_t t57 = -2118359;

	t57 = (((x4285<<x4286)^x4287)==x4288);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x4321 = UINT8_MAX;
	static int8_t x4322 = 0;
	volatile int16_t x4324 = 73;
	volatile int32_t t58 = 266644;

	t58 = (((x4321<<x4322)^x4323)==x4324);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x4341 = 74LLU;
	uint8_t x4342 = 39U;
	static volatile int64_t x4343 = INT64_MAX;
	int8_t x4344 = INT8_MIN;

	t59 = (((x4341<<x4342)^x4343)==x4344);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x4471 = UINT32_MAX;
	static volatile int32_t t60 = 3;

	t60 = (((x4469<<x4470)^x4471)==x4472);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x4509 = INT16_MAX;

	t61 = (((x4509<<x4510)^x4511)==x4512);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x4641 = 3722684498LLU;
	int64_t x4642 = 50LL;
	int8_t x4643 = INT8_MIN;
	volatile uint16_t x4644 = 4464U;

	t62 = (((x4641<<x4642)^x4643)==x4644);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x4697 = 3U;
	uint8_t x4698 = 4U;
	volatile int8_t x4699 = -1;
	volatile int32_t t63 = 373;

	t63 = (((x4697<<x4698)^x4699)==x4700);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x4805 = 77223;
	uint8_t x4806 = 1U;
	volatile int32_t t64 = 0;

	t64 = (((x4805<<x4806)^x4807)==x4808);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x4822 = 28;
	volatile int64_t x4823 = -1LL;
	volatile int32_t x4824 = INT32_MIN;
	volatile int32_t t65 = -370916;

	t65 = (((x4821<<x4822)^x4823)==x4824);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x4833 = 0U;
	int64_t x4835 = INT64_MIN;
	uint32_t x4836 = 258U;

	t66 = (((x4833<<x4834)^x4835)==x4836);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x4841 = 26LLU;
	uint8_t x4842 = 0U;
	int8_t x4843 = 45;
	int32_t t67 = -3812422;

	t67 = (((x4841<<x4842)^x4843)==x4844);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x4845 = 1706;
	static volatile int8_t x4847 = INT8_MIN;
	volatile int32_t t68 = -2241619;

	t68 = (((x4845<<x4846)^x4847)==x4848);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x4869 = 77886LLU;
	uint16_t x4870 = 53U;
	uint32_t x4871 = UINT32_MAX;
	int32_t t69 = -1;

	t69 = (((x4869<<x4870)^x4871)==x4872);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x4982 = 4U;
	int64_t x4983 = INT64_MIN;
	int8_t x4984 = INT8_MIN;
	int32_t t70 = -93273;

	t70 = (((x4981<<x4982)^x4983)==x4984);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x5101 = 88830037786977218LL;
	static int8_t x5102 = 1;
	int64_t x5103 = INT64_MIN;
	int8_t x5104 = 32;
	volatile int32_t t71 = 15;

	t71 = (((x5101<<x5102)^x5103)==x5104);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x5109 = UINT8_MAX;
	static uint16_t x5110 = 18U;
	int16_t x5111 = INT16_MIN;
	uint8_t x5112 = 2U;
	int32_t t72 = -72;

	t72 = (((x5109<<x5110)^x5111)==x5112);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x5202 = 0;
	uint32_t x5203 = 297U;
	int64_t x5204 = INT64_MAX;

	t73 = (((x5201<<x5202)^x5203)==x5204);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x5218 = 0U;
	static volatile int16_t x5219 = -87;
	static int32_t x5220 = 3678;

	t74 = (((x5217<<x5218)^x5219)==x5220);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x5222 = 11U;
	int64_t x5223 = INT64_MIN;
	int16_t x5224 = INT16_MAX;
	volatile int32_t t75 = 0;

	t75 = (((x5221<<x5222)^x5223)==x5224);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x5237 = 934U;
	uint16_t x5238 = 5U;
	uint32_t x5239 = 2681U;
	static volatile int32_t t76 = -3884621;

	t76 = (((x5237<<x5238)^x5239)==x5240);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x5249 = 1U;
	uint16_t x5252 = 5U;
	static volatile int32_t t77 = 1;

	t77 = (((x5249<<x5250)^x5251)==x5252);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x5346 = 0U;
	volatile uint8_t x5347 = 27U;
	int8_t x5348 = INT8_MAX;
	static int32_t t78 = -66;

	t78 = (((x5345<<x5346)^x5347)==x5348);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x5494 = 7;
	volatile int16_t x5495 = INT16_MIN;
	volatile uint32_t x5496 = 19142U;

	t79 = (((x5493<<x5494)^x5495)==x5496);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x5545 = 190;
	int8_t x5547 = INT8_MIN;
	int16_t x5548 = 313;

	t80 = (((x5545<<x5546)^x5547)==x5548);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x5577 = 64634688765548LLU;
	int8_t x5578 = 1;
	static int64_t x5579 = INT64_MAX;
	int8_t x5580 = 0;
	volatile int32_t t81 = 231469455;

	t81 = (((x5577<<x5578)^x5579)==x5580);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x5833 = 29271U;
	int16_t x5834 = 0;
	int16_t x5835 = 0;
	volatile uint32_t x5836 = 6U;

	t82 = (((x5833<<x5834)^x5835)==x5836);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x5901 = INT16_MAX;
	static volatile uint8_t x5902 = 3U;
	int8_t x5903 = -1;
	int64_t x5904 = -1LL;
	static int32_t t83 = -3715;

	t83 = (((x5901<<x5902)^x5903)==x5904);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x5926 = 4;
	volatile int32_t t84 = 6;

	t84 = (((x5925<<x5926)^x5927)==x5928);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x5961 = 2375175U;
	uint8_t x5962 = 22U;
	uint8_t x5963 = 38U;
	volatile int32_t t85 = 367857585;

	t85 = (((x5961<<x5962)^x5963)==x5964);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x6049 = 35U;
	uint8_t x6050 = 1U;
	volatile uint16_t x6051 = UINT16_MAX;
	int64_t x6052 = -22111LL;

	t86 = (((x6049<<x6050)^x6051)==x6052);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x6058 = 4U;
	int16_t x6059 = 323;

	t87 = (((x6057<<x6058)^x6059)==x6060);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x6109 = UINT64_MAX;
	uint16_t x6110 = 0U;
	uint64_t x6111 = 43935LLU;
	volatile int32_t x6112 = 988587;
	int32_t t88 = 14;

	t88 = (((x6109<<x6110)^x6111)==x6112);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x6189 = 504390452;
	static uint16_t x6190 = 0U;
	static volatile int64_t x6192 = 2412099113LL;
	int32_t t89 = -236472555;

	t89 = (((x6189<<x6190)^x6191)==x6192);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x6257 = 6;
	volatile uint16_t x6258 = 11U;
	int8_t x6260 = INT8_MIN;
	volatile int32_t t90 = -1329859;

	t90 = (((x6257<<x6258)^x6259)==x6260);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x6426 = 2U;
	volatile int32_t x6427 = INT32_MAX;
	int8_t x6428 = -46;

	t91 = (((x6425<<x6426)^x6427)==x6428);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x6493 = 3;
	volatile int64_t x6495 = -1LL;

	t92 = (((x6493<<x6494)^x6495)==x6496);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x6527 = 0U;
	int32_t x6528 = INT32_MIN;
	volatile int32_t t93 = -3392986;

	t93 = (((x6525<<x6526)^x6527)==x6528);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x6529 = 5U;
	int8_t x6530 = 0;
	int32_t x6531 = 1356795;
	int64_t x6532 = INT64_MIN;
	static volatile int32_t t94 = 58671;

	t94 = (((x6529<<x6530)^x6531)==x6532);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x6553 = UINT64_MAX;
	static volatile uint8_t x6554 = 28U;
	static volatile int32_t x6555 = INT32_MIN;
	volatile int32_t t95 = 12874253;

	t95 = (((x6553<<x6554)^x6555)==x6556);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x6709 = INT16_MAX;
	static int16_t x6710 = 3;
	int32_t x6712 = INT32_MAX;
	volatile int32_t t96 = -3;

	t96 = (((x6709<<x6710)^x6711)==x6712);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x6714 = 20U;
	int16_t x6715 = 193;
	static volatile int32_t t97 = -10618627;

	t97 = (((x6713<<x6714)^x6715)==x6716);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x6749 = 496855639479582LLU;
	int8_t x6751 = -1;
	static int8_t x6752 = -1;
	int32_t t98 = -7907125;

	t98 = (((x6749<<x6750)^x6751)==x6752);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x6837 = 7U;
	static volatile uint8_t x6838 = 1U;
	volatile int8_t x6839 = INT8_MIN;
	int8_t x6840 = -18;
	int32_t t99 = -2033;

	t99 = (((x6837<<x6838)^x6839)==x6840);

	if (t99 != 0) { NG(); } else { ; }
	
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

