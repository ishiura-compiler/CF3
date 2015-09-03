#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x18 = UINT8_MAX;
volatile int32_t t0 = -156;
volatile int32_t x32 = INT32_MIN;
static volatile int32_t x129 = INT32_MIN;
int64_t x209 = INT64_MIN;
static int8_t x210 = 0;
volatile uint16_t x237 = 1U;
volatile int16_t x240 = -1;
uint8_t x315 = 63U;
uint16_t x339 = 1U;
static int64_t t9 = 2066028117340402LL;
int32_t x615 = 5;
int64_t x616 = -88710619649LL;
int8_t x720 = 21;
static int32_t t14 = 1;
static int16_t x755 = 3;
int32_t x813 = 594;
uint8_t x815 = 2U;
int32_t x820 = INT32_MIN;
volatile int32_t t18 = 782643;
volatile int8_t x956 = -1;
uint32_t x995 = 37U;
volatile int32_t x1101 = INT32_MAX;
uint16_t x1102 = UINT16_MAX;
static int16_t x1215 = 6;
int32_t x1216 = INT32_MAX;
uint32_t x1332 = 23991359U;
int16_t x1355 = 1;
uint64_t x1429 = 2LLU;
int16_t x1432 = 7645;
uint32_t x1686 = UINT32_MAX;
int8_t x1687 = 6;
uint64_t x1728 = UINT64_MAX;
int8_t x1883 = 1;
volatile uint32_t t34 = 27133232U;
uint16_t x1963 = 3U;
uint8_t x1999 = 1U;
static uint64_t t38 = 9253LLU;
int8_t x2025 = -12;
static volatile int64_t t40 = 171484LL;
int64_t x2125 = INT64_MIN;
static int8_t x2127 = 5;
uint8_t x2212 = 7U;
static int8_t x2319 = 1;
static int8_t x2350 = INT8_MAX;
volatile uint64_t t48 = 111960141553LLU;
volatile uint64_t t49 = 3329781279LLU;
uint64_t t50 = 13548285728569LLU;
volatile int8_t x2567 = 0;
int32_t x2568 = -1;
int32_t t52 = 3075001;
uint16_t x2585 = 1011U;
int16_t x2586 = INT16_MAX;
int16_t x2588 = INT16_MIN;
static volatile int16_t x2619 = 0;
int32_t x2625 = INT32_MIN;
int32_t x2636 = 3512609;
uint16_t x2747 = 0U;
int64_t t58 = -74350821629442LL;
int8_t x2837 = INT8_MAX;


void f0(void) {
	volatile int8_t x17 = 1;
	int16_t x19 = 11;
	int32_t x20 = 1385812;

	t0 = ((x17^(x18>>x19))%x20);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x29 = 75U;
	static volatile uint16_t x30 = 2045U;
	uint8_t x31 = 1U;
	volatile uint32_t t1 = 542303U;

	t1 = ((x29^(x30>>x31))%x32);

	if (t1 != 949U) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int16_t x130 = 710;
	int8_t x131 = 1;
	int32_t x132 = INT32_MAX;
	int32_t t2 = -1;

	t2 = ((x129^(x130>>x131))%x132);

	if (t2 != -2147483293) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x211 = 1U;
	volatile uint8_t x212 = UINT8_MAX;
	int64_t t3 = 5821LL;

	t3 = ((x209^(x210>>x211))%x212);

	if (t3 != -128LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x238 = UINT32_MAX;
	int8_t x239 = 1;
	static uint32_t t4 = 88602U;

	t4 = ((x237^(x238>>x239))%x240);

	if (t4 != 2147483646U) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x313 = 15U;
	uint64_t x314 = UINT64_MAX;
	static int32_t x316 = INT32_MIN;
	static uint64_t t5 = 5193512047745LLU;

	t5 = ((x313^(x314>>x315))%x316);

	if (t5 != 14LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x337 = INT16_MAX;
	volatile int16_t x338 = 12;
	int16_t x340 = INT16_MIN;
	static int32_t t6 = 1;

	t6 = ((x337^(x338>>x339))%x340);

	if (t6 != 32761) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x345 = -1;
	uint8_t x346 = 15U;
	static volatile uint8_t x347 = 5U;
	int32_t x348 = 29838252;
	int32_t t7 = -811352620;

	t7 = ((x345^(x346>>x347))%x348);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x413 = -10653;
	uint64_t x414 = 132704114616747LLU;
	uint8_t x415 = 10U;
	volatile int32_t x416 = -2548;
	static uint64_t t8 = 7576238LLU;

	t8 = ((x413^(x414>>x415))%x416);

	if (t8 != 18446743944115695945LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x553 = 734529404;
	uint16_t x554 = 12U;
	static int16_t x555 = 1;
	int64_t x556 = INT64_MIN;

	t9 = ((x553^(x554>>x555))%x556);

	if (t9 != 734529402LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x613 = INT16_MAX;
	uint8_t x614 = UINT8_MAX;
	int64_t t10 = -19090LL;

	t10 = ((x613^(x614>>x615))%x616);

	if (t10 != 32760LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x617 = INT32_MAX;
	int64_t x618 = INT64_MAX;
	uint32_t x619 = 33U;
	volatile int16_t x620 = -1;
	int64_t t11 = 31LL;

	t11 = ((x617^(x618>>x619))%x620);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x621 = -3832LL;
	int8_t x622 = INT8_MAX;
	int64_t x623 = 25LL;
	int64_t x624 = -447546404963426416LL;
	int64_t t12 = -1LL;

	t12 = ((x621^(x622>>x623))%x624);

	if (t12 != -3832LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x629 = -1;
	volatile uint64_t x630 = 229408LLU;
	uint8_t x631 = 3U;
	int8_t x632 = INT8_MIN;
	volatile uint64_t t13 = 65083598LLU;

	t13 = ((x629^(x630>>x631))%x632);

	if (t13 != 18446744073709522939LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x717 = 1U;
	volatile int16_t x718 = INT16_MAX;
	static uint32_t x719 = 5U;

	t14 = ((x717^(x718>>x719))%x720);

	if (t14 != 14) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x733 = 1;
	uint64_t x734 = 28297872507661682LLU;
	volatile uint8_t x735 = 2U;
	int16_t x736 = INT16_MIN;
	volatile uint64_t t15 = 1947857964LLU;

	t15 = ((x733^(x734>>x735))%x736);

	if (t15 != 7074468126915421LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x753 = INT32_MIN;
	volatile int16_t x754 = INT16_MAX;
	static int16_t x756 = INT16_MIN;
	volatile int32_t t16 = 22;

	t16 = ((x753^(x754>>x755))%x756);

	if (t16 != -28673) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x814 = UINT64_MAX;
	static uint16_t x816 = UINT16_MAX;
	uint64_t t17 = 6407LLU;

	t17 = ((x813^(x814>>x815))%x816);

	if (t17 != 15789LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x817 = INT8_MIN;
	int16_t x818 = 480;
	uint8_t x819 = 1U;

	t18 = ((x817^(x818>>x819))%x820);

	if (t18 != -144) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x853 = INT64_MIN;
	uint64_t x854 = 117LLU;
	volatile int8_t x855 = 0;
	volatile int8_t x856 = INT8_MIN;
	uint64_t t19 = 43LLU;

	t19 = ((x853^(x854>>x855))%x856);

	if (t19 != 9223372036854775925LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x953 = -1;
	int8_t x954 = 5;
	uint8_t x955 = 1U;
	volatile int32_t t20 = -1101516;

	t20 = ((x953^(x954>>x955))%x956);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x989 = -1;
	uint32_t x990 = 1545U;
	uint64_t x991 = 2LLU;
	int32_t x992 = INT32_MAX;
	uint32_t t21 = 2966092U;

	t21 = ((x989^(x990>>x991))%x992);

	if (t21 != 2147483262U) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x993 = 406U;
	uint64_t x994 = 239885114LLU;
	static uint16_t x996 = 2583U;
	volatile uint64_t t22 = 62764389255555LLU;

	t22 = ((x993^(x994>>x995))%x996);

	if (t22 != 406LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x1103 = 4U;
	static uint16_t x1104 = UINT16_MAX;
	volatile int32_t t23 = 145;

	t23 = ((x1101^(x1102>>x1103))%x1104);

	if (t23 != 28672) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x1213 = -1;
	uint16_t x1214 = UINT16_MAX;
	int32_t t24 = -795265;

	t24 = ((x1213^(x1214>>x1215))%x1216);

	if (t24 != -1024) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1261 = INT8_MAX;
	uint32_t x1262 = UINT32_MAX;
	uint16_t x1263 = 17U;
	int32_t x1264 = -1;
	volatile uint32_t t25 = 1U;

	t25 = ((x1261^(x1262>>x1263))%x1264);

	if (t25 != 32640U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1329 = INT8_MIN;
	static uint64_t x1330 = UINT64_MAX;
	uint16_t x1331 = 4U;
	uint64_t t26 = 109736193LLU;

	t26 = ((x1329^(x1330>>x1331))%x1332);

	if (t26 != 17197070LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x1353 = 0;
	int8_t x1354 = 17;
	int32_t x1356 = INT32_MAX;
	static volatile int32_t t27 = 20;

	t27 = ((x1353^(x1354>>x1355))%x1356);

	if (t27 != 8) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1430 = 56U;
	uint16_t x1431 = 0U;
	volatile uint64_t t28 = 5654117913278542778LLU;

	t28 = ((x1429^(x1430>>x1431))%x1432);

	if (t28 != 58LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1441 = 1;
	static int16_t x1442 = INT16_MAX;
	static uint64_t x1443 = 1LLU;
	uint8_t x1444 = UINT8_MAX;
	static volatile int32_t t29 = -3299;

	t29 = ((x1441^(x1442>>x1443))%x1444);

	if (t29 != 62) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x1561 = -1;
	uint32_t x1562 = 649294U;
	uint8_t x1563 = 0U;
	static volatile uint16_t x1564 = UINT16_MAX;
	static volatile uint32_t t30 = 30U;

	t30 = ((x1561^(x1562>>x1563))%x1564);

	if (t30 != 6056U) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x1685 = -1;
	int64_t x1688 = -1LL;
	int64_t t31 = -1353716LL;

	t31 = ((x1685^(x1686>>x1687))%x1688);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1709 = 8871052U;
	static volatile uint64_t x1710 = 15472470090128LLU;
	uint8_t x1711 = 1U;
	volatile int32_t x1712 = INT32_MIN;
	static uint64_t t32 = 1754764461560LLU;

	t32 = ((x1709^(x1710>>x1711))%x1712);

	if (t32 != 7736226868292LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1725 = INT64_MAX;
	static volatile uint32_t x1726 = 36869143U;
	uint32_t x1727 = 23U;
	uint64_t t33 = 5576LLU;

	t33 = ((x1725^(x1726>>x1727))%x1728);

	if (t33 != 9223372036854775803LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1881 = INT32_MIN;
	volatile uint32_t x1882 = 109U;
	uint16_t x1884 = 22108U;

	t34 = ((x1881^(x1882>>x1883))%x1884);

	if (t34 != 1014U) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x1953 = 12U;
	uint64_t x1954 = UINT64_MAX;
	uint8_t x1955 = 1U;
	int64_t x1956 = -1LL;
	uint64_t t35 = 2057019714754LLU;

	t35 = ((x1953^(x1954>>x1955))%x1956);

	if (t35 != 9223372036854775795LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x1961 = UINT64_MAX;
	volatile uint8_t x1962 = UINT8_MAX;
	int64_t x1964 = -146LL;
	uint64_t t36 = 27098LLU;

	t36 = ((x1961^(x1962>>x1963))%x1964);

	if (t36 != 114LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x1997 = INT32_MAX;
	uint8_t x1998 = 24U;
	int64_t x2000 = -1LL;
	int64_t t37 = 5797467893358770LL;

	t37 = ((x1997^(x1998>>x1999))%x2000);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x2005 = -1;
	uint64_t x2006 = 12955LLU;
	uint8_t x2007 = 1U;
	static volatile int64_t x2008 = -152098LL;

	t38 = ((x2005^(x2006>>x2007))%x2008);

	if (t38 != 145620LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x2026 = 57691786306291LL;
	int8_t x2027 = 30;
	volatile int32_t x2028 = INT32_MAX;
	int64_t t39 = 46115463LL;

	t39 = ((x2025^(x2026>>x2027))%x2028);

	if (t39 != -53739LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x2073 = 19822785031LL;
	volatile uint16_t x2074 = 5U;
	int16_t x2075 = 0;
	int16_t x2076 = INT16_MAX;

	t40 = ((x2073^(x2074>>x2075))%x2076);

	if (t40 != 27939LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x2109 = INT32_MIN;
	uint8_t x2110 = 6U;
	static int8_t x2111 = 2;
	int64_t x2112 = INT64_MIN;
	static int64_t t41 = 6928631LL;

	t41 = ((x2109^(x2110>>x2111))%x2112);

	if (t41 != -2147483647LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x2126 = 171U;
	static int16_t x2128 = 3410;
	volatile int64_t t42 = 1LL;

	t42 = ((x2125^(x2126>>x2127))%x2128);

	if (t42 != -3LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x2209 = 79380390797LLU;
	static volatile uint8_t x2210 = 30U;
	int8_t x2211 = 3;
	volatile uint64_t t43 = 529958704698441LLU;

	t43 = ((x2209^(x2210>>x2211))%x2212);

	if (t43 != 2LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x2301 = -1;
	int16_t x2302 = INT16_MAX;
	volatile uint16_t x2303 = 17U;
	int64_t x2304 = INT64_MIN;
	volatile int64_t t44 = 6328745420LL;

	t44 = ((x2301^(x2302>>x2303))%x2304);

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x2309 = INT16_MIN;
	int8_t x2310 = INT8_MAX;
	uint16_t x2311 = 31U;
	volatile int64_t x2312 = 1009679015010928919LL;
	volatile int64_t t45 = -93455994705619841LL;

	t45 = ((x2309^(x2310>>x2311))%x2312);

	if (t45 != -32768LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x2317 = 1377U;
	uint16_t x2318 = 188U;
	volatile int8_t x2320 = -1;
	static int32_t t46 = 19619;

	t46 = ((x2317^(x2318>>x2319))%x2320);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x2349 = INT16_MIN;
	uint16_t x2351 = 0U;
	uint16_t x2352 = UINT16_MAX;
	int32_t t47 = 2190480;

	t47 = ((x2349^(x2350>>x2351))%x2352);

	if (t47 != -32641) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x2397 = INT16_MIN;
	static volatile uint64_t x2398 = 202344860759428128LLU;
	uint16_t x2399 = 17U;
	uint16_t x2400 = UINT16_MAX;

	t48 = ((x2397^(x2398>>x2399))%x2400);

	if (t48 != 9383LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x2401 = UINT64_MAX;
	volatile int64_t x2402 = 413352591LL;
	volatile uint32_t x2403 = 5U;
	int32_t x2404 = INT32_MIN;

	t49 = ((x2401^(x2402>>x2403))%x2404);

	if (t49 != 2134566379LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x2421 = -1;
	uint64_t x2422 = 2LLU;
	uint8_t x2423 = 7U;
	uint8_t x2424 = 80U;

	t50 = ((x2421^(x2422>>x2423))%x2424);

	if (t50 != 15LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x2453 = UINT64_MAX;
	uint8_t x2454 = UINT8_MAX;
	static int8_t x2455 = 10;
	volatile uint64_t x2456 = 1848623754412829335LLU;
	volatile uint64_t t51 = 262224056372LLU;

	t51 = ((x2453^(x2454>>x2455))%x2456);

	if (t51 != 1809130283994087600LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x2565 = UINT16_MAX;
	uint8_t x2566 = 44U;

	t52 = ((x2565^(x2566>>x2567))%x2568);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x2587 = 0LLU;
	static int32_t t53 = -1;

	t53 = ((x2585^(x2586>>x2587))%x2588);

	if (t53 != 31756) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x2609 = 65;
	volatile int16_t x2610 = 1;
	static uint16_t x2611 = 17U;
	static uint16_t x2612 = UINT16_MAX;
	volatile int32_t t54 = 0;

	t54 = ((x2609^(x2610>>x2611))%x2612);

	if (t54 != 65) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x2617 = 13;
	int16_t x2618 = 45;
	int32_t x2620 = INT32_MIN;
	static int32_t t55 = 15888;

	t55 = ((x2617^(x2618>>x2619))%x2620);

	if (t55 != 32) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x2626 = INT8_MAX;
	static uint16_t x2627 = 0U;
	int8_t x2628 = -35;
	static int32_t t56 = 1;

	t56 = ((x2625^(x2626>>x2627))%x2628);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x2633 = -1LL;
	uint16_t x2634 = 9U;
	uint64_t x2635 = 11LLU;
	volatile int64_t t57 = -221098LL;

	t57 = ((x2633^(x2634>>x2635))%x2636);

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x2745 = INT32_MIN;
	static uint16_t x2746 = UINT16_MAX;
	int64_t x2748 = -478104LL;

	t58 = ((x2745^(x2746>>x2747))%x2748);

	if (t58 != -253049LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x2805 = -1;
	int16_t x2806 = 6;
	int8_t x2807 = 0;
	int16_t x2808 = INT16_MAX;
	static int32_t t59 = 0;

	t59 = ((x2805^(x2806>>x2807))%x2808);

	if (t59 != -7) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x2838 = INT64_MAX;
	uint16_t x2839 = 0U;
	static int64_t x2840 = 112LL;
	static volatile int64_t t60 = 38776356105012983LL;

	t60 = ((x2837^(x2838>>x2839))%x2840);

	if (t60 != 48LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x3025 = -1;
	uint16_t x3026 = 2592U;
	static uint8_t x3027 = 9U;
	static int8_t x3028 = INT8_MAX;
	volatile int32_t t61 = -29;

	t61 = ((x3025^(x3026>>x3027))%x3028);

	if (t61 != -6) { NG(); } else { ; }
	
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


    return 0;
}

