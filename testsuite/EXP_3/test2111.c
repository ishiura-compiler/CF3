#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x43 = INT32_MIN;
static uint8_t x264 = UINT8_MAX;
volatile int32_t t2 = 3880532;
static uint64_t x265 = 29474254456LLU;
uint64_t t3 = 2729583686345LLU;
static int64_t x353 = 18LL;
volatile int8_t x465 = 0;
int16_t x466 = 1;
uint8_t x505 = 94U;
int8_t x507 = INT8_MIN;
static int32_t t9 = 346;
uint32_t x812 = UINT32_MAX;
volatile uint32_t t13 = 53735716U;
uint8_t x878 = 2U;
int8_t x882 = 0;
uint64_t x1009 = UINT64_MAX;
uint8_t x1011 = UINT8_MAX;
uint32_t t17 = 24535695U;
volatile uint32_t x1102 = 2U;
volatile uint8_t x1225 = 29U;
uint32_t t19 = 11U;
volatile uint32_t t20 = 2U;
volatile int8_t x1454 = 4;
uint64_t x1541 = UINT64_MAX;
uint16_t x1542 = 14U;
static volatile int64_t x1544 = -1174464705264LL;
uint64_t x1615 = 939965643742353565LLU;
static uint64_t x1717 = UINT64_MAX;
static int16_t x1718 = 3;
volatile int64_t x1772 = -11634942456LL;
int8_t x1779 = 10;
uint32_t t30 = 13886388U;
int16_t x1860 = 1216;
uint8_t x1876 = 1U;
volatile uint64_t t33 = 2489807865LLU;
volatile int8_t x1955 = -13;
static int32_t x2004 = -1;
static volatile int16_t x2177 = 6587;
int8_t x2179 = INT8_MIN;
int16_t x2268 = -1;
int16_t x2279 = INT16_MIN;
uint32_t t38 = 2237895U;
volatile int32_t x2289 = INT32_MAX;
int32_t t39 = 12375;
volatile int8_t x2352 = INT8_MAX;
volatile int8_t x2403 = -1;
volatile uint32_t t42 = 12375131U;
uint16_t x2573 = 11U;
static volatile uint64_t x2576 = UINT64_MAX;
uint64_t x2599 = UINT64_MAX;
volatile int8_t x2659 = INT8_MIN;
volatile int64_t t47 = 800100421403LL;
int32_t x2750 = 4;
int32_t t49 = 19949;
int64_t x2761 = INT64_MAX;
int16_t x2764 = INT16_MIN;
int16_t x2800 = INT16_MIN;
uint64_t x2849 = 1969196322980258LLU;
int64_t x3084 = -629235850490137LL;
static int64_t t58 = 77792778073354552LL;
static uint64_t x3109 = 2836661646272LLU;
static int16_t x3177 = 63;
uint8_t x3178 = 8U;
uint32_t x3209 = UINT32_MAX;
uint16_t x3221 = 16266U;
static volatile uint8_t x3222 = 0U;
uint32_t x3224 = UINT32_MAX;
static uint64_t t64 = 7320041993904838937LLU;
uint32_t t65 = 8U;
static int32_t x3429 = INT32_MAX;
volatile int64_t x3432 = INT64_MAX;
int16_t x3485 = INT16_MAX;
volatile uint32_t x3524 = UINT32_MAX;
uint32_t x3646 = 3U;
volatile uint32_t x3673 = 3U;
volatile uint32_t t75 = 7381330U;
static int8_t x3678 = 6;
uint32_t x3774 = 23U;
int16_t x3803 = -1;
uint16_t x3829 = UINT16_MAX;
static int8_t x3830 = 31;
volatile uint64_t x3875 = 6400431124292040LLU;
uint8_t x3881 = UINT8_MAX;
int8_t x3883 = 9;
volatile int32_t x3884 = -1;
int8_t x3941 = 31;
int16_t x3943 = -1;
int64_t x3944 = INT64_MIN;
uint8_t x3988 = 43U;
static uint32_t x4069 = UINT32_MAX;
volatile uint32_t t86 = 1130483957U;
int16_t x4228 = -7;
volatile uint64_t t90 = 2322526LLU;
static volatile int32_t t92 = -107;
uint64_t x4705 = 9552349234LLU;
int8_t x4706 = 34;
static uint64_t t94 = 2227096804203667375LLU;
int16_t x4923 = INT16_MIN;
int32_t x4924 = -1;
static volatile int32_t t95 = 669763;
uint32_t t96 = 40344376U;
static int32_t x5045 = 5766349;
uint32_t x5048 = 18387U;
int16_t x5099 = INT16_MAX;


void f0(void) {
	int64_t x41 = INT64_MAX;
	uint8_t x42 = 2U;
	volatile int64_t x44 = INT64_MAX;
	volatile int64_t t0 = 73LL;

	t0 = ((x41>>x42)%(x43^x44));

	if (t0 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x113 = 5U;
	int8_t x114 = 2;
	int8_t x115 = INT8_MAX;
	int16_t x116 = INT16_MAX;
	int32_t t1 = -1583;

	t1 = ((x113>>x114)%(x115^x116));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x261 = 1U;
	uint8_t x262 = 1U;
	int32_t x263 = 0;

	t2 = ((x261>>x262)%(x263^x264));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x266 = 2U;
	uint64_t x267 = 2217192LLU;
	static int8_t x268 = INT8_MIN;

	t3 = ((x265>>x266)%(x267^x268));

	if (t3 != 7368563614LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x269 = UINT32_MAX;
	static uint8_t x270 = 30U;
	uint8_t x271 = 0U;
	uint8_t x272 = UINT8_MAX;
	uint32_t t4 = 11249454U;

	t4 = ((x269>>x270)%(x271^x272));

	if (t4 != 3U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x354 = 2U;
	int8_t x355 = INT8_MIN;
	int16_t x356 = INT16_MIN;
	int64_t t5 = -27425351490279675LL;

	t5 = ((x353>>x354)%(x355^x356));

	if (t5 != 4LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x467 = INT32_MAX;
	int16_t x468 = -1;
	int32_t t6 = -117;

	t6 = ((x465>>x466)%(x467^x468));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x469 = 664LLU;
	uint8_t x470 = 4U;
	static uint16_t x471 = 476U;
	int16_t x472 = INT16_MIN;
	uint64_t t7 = 14934100796LLU;

	t7 = ((x469>>x470)%(x471^x472));

	if (t7 != 41LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x477 = 0;
	uint8_t x478 = 4U;
	int32_t x479 = INT32_MIN;
	static int8_t x480 = INT8_MIN;
	volatile int32_t t8 = 4538;

	t8 = ((x477>>x478)%(x479^x480));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x506 = 15U;
	static int32_t x508 = -1;

	t9 = ((x505>>x506)%(x507^x508));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x541 = INT16_MAX;
	volatile int8_t x542 = 1;
	uint16_t x543 = UINT16_MAX;
	int16_t x544 = 26;
	volatile int32_t t10 = 5;

	t10 = ((x541>>x542)%(x543^x544));

	if (t10 != 16383) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x593 = 119962U;
	uint8_t x594 = 0U;
	int16_t x595 = INT16_MAX;
	int64_t x596 = -3LL;
	volatile int64_t t11 = -926053638068LL;

	t11 = ((x593>>x594)%(x595^x596));

	if (t11 != 21664LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x609 = 411U;
	volatile int8_t x610 = 6;
	int64_t x611 = -1LL;
	static int8_t x612 = INT8_MIN;
	volatile int64_t t12 = -1630613310LL;

	t12 = ((x609>>x610)%(x611^x612));

	if (t12 != 6LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x809 = 638U;
	uint8_t x810 = 12U;
	static uint8_t x811 = 30U;

	t13 = ((x809>>x810)%(x811^x812));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x877 = 1LLU;
	int8_t x879 = INT8_MIN;
	uint32_t x880 = 242U;
	static volatile uint64_t t14 = 64804LLU;

	t14 = ((x877>>x878)%(x879^x880));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint64_t x881 = UINT64_MAX;
	uint8_t x883 = 1U;
	volatile int32_t x884 = INT32_MIN;
	static volatile uint64_t t15 = 26580376250427404LLU;

	t15 = ((x881>>x882)%(x883^x884));

	if (t15 != 2147483646LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint8_t x1010 = 2U;
	int8_t x1012 = INT8_MAX;
	uint64_t t16 = 798182LLU;

	t16 = ((x1009>>x1010)%(x1011^x1012));

	if (t16 != 127LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x1017 = UINT32_MAX;
	int32_t x1018 = 1;
	static int16_t x1019 = INT16_MIN;
	int32_t x1020 = -1;

	t17 = ((x1017>>x1018)%(x1019^x1020));

	if (t17 != 1U) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x1101 = UINT8_MAX;
	int64_t x1103 = INT64_MIN;
	uint64_t x1104 = 197131576639LLU;
	volatile uint64_t t18 = 253989640703255341LLU;

	t18 = ((x1101>>x1102)%(x1103^x1104));

	if (t18 != 63LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x1226 = 12;
	uint32_t x1227 = 886927357U;
	int8_t x1228 = -7;

	t19 = ((x1225>>x1226)%(x1227^x1228));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1249 = INT8_MAX;
	volatile uint64_t x1250 = 0LLU;
	static uint8_t x1251 = UINT8_MAX;
	static uint32_t x1252 = 48710787U;

	t20 = ((x1249>>x1250)%(x1251^x1252));

	if (t20 != 127U) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x1309 = 27U;
	int16_t x1310 = 0;
	uint64_t x1311 = 309000LLU;
	uint64_t x1312 = 97963291974LLU;
	static uint64_t t21 = 138494716LLU;

	t21 = ((x1309>>x1310)%(x1311^x1312));

	if (t21 != 27LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1437 = 4604831712LL;
	int8_t x1438 = 0;
	volatile int64_t x1439 = -3608LL;
	static uint32_t x1440 = 285U;
	int64_t t22 = -10201463039LL;

	t22 = ((x1437>>x1438)%(x1439^x1440));

	if (t22 != 2313LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint16_t x1453 = UINT16_MAX;
	volatile int16_t x1455 = INT16_MAX;
	static volatile uint8_t x1456 = 17U;
	static int32_t t23 = -6707;

	t23 = ((x1453>>x1454)%(x1455^x1456));

	if (t23 != 4095) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x1543 = 3226853U;
	uint64_t t24 = 195347387975LLU;

	t24 = ((x1541>>x1542)%(x1543^x1544));

	if (t24 != 1125899906842623LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1569 = 27;
	static uint8_t x1570 = 1U;
	uint64_t x1571 = 28081286LLU;
	int16_t x1572 = INT16_MIN;
	uint64_t t25 = 8348768889LLU;

	t25 = ((x1569>>x1570)%(x1571^x1572));

	if (t25 != 13LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x1613 = 998847904224891702LLU;
	int8_t x1614 = 0;
	volatile uint16_t x1616 = UINT16_MAX;
	uint64_t t26 = 5440582071968LLU;

	t26 = ((x1613>>x1614)%(x1615^x1616));

	if (t26 != 58882260482550740LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x1641 = INT16_MAX;
	int8_t x1642 = 1;
	static volatile int8_t x1643 = -1;
	int16_t x1644 = -2949;
	volatile int32_t t27 = 0;

	t27 = ((x1641>>x1642)%(x1643^x1644));

	if (t27 != 1643) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x1719 = INT8_MIN;
	int16_t x1720 = INT16_MIN;
	uint64_t t28 = 4809023657780451LLU;

	t28 = ((x1717>>x1718)%(x1719^x1720));

	if (t28 != 8191LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x1769 = 6;
	int16_t x1770 = 2;
	uint8_t x1771 = UINT8_MAX;
	int64_t t29 = 5555695LL;

	t29 = ((x1769>>x1770)%(x1771^x1772));

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1777 = INT16_MAX;
	static int16_t x1778 = 14;
	uint32_t x1780 = UINT32_MAX;

	t30 = ((x1777>>x1778)%(x1779^x1780));

	if (t30 != 1U) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x1857 = UINT64_MAX;
	int16_t x1858 = 1;
	uint64_t x1859 = UINT64_MAX;
	uint64_t t31 = 57633136LLU;

	t31 = ((x1857>>x1858)%(x1859^x1860));

	if (t31 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1873 = 23218U;
	int16_t x1874 = 6;
	static uint64_t x1875 = 625361897966LLU;
	volatile uint64_t t32 = 11311LLU;

	t32 = ((x1873>>x1874)%(x1875^x1876));

	if (t32 != 362LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x1877 = 27309099033608LLU;
	int8_t x1878 = 1;
	static int16_t x1879 = INT16_MIN;
	int32_t x1880 = INT32_MIN;

	t33 = ((x1877>>x1878)%(x1879^x1880));

	if (t33 != 1056821764LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x1953 = 35U;
	uint8_t x1954 = 21U;
	int8_t x1956 = INT8_MIN;
	int32_t t34 = 4;

	t34 = ((x1953>>x1954)%(x1955^x1956));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x2001 = 23U;
	volatile uint16_t x2002 = 0U;
	static volatile uint8_t x2003 = 1U;
	static int32_t t35 = -11977476;

	t35 = ((x2001>>x2002)%(x2003^x2004));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x2178 = 1;
	volatile uint64_t x2180 = UINT64_MAX;
	volatile uint64_t t36 = 7637315326100147691LLU;

	t36 = ((x2177>>x2178)%(x2179^x2180));

	if (t36 != 118LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x2265 = INT16_MAX;
	static volatile uint8_t x2266 = 8U;
	int32_t x2267 = -1193550;
	volatile int32_t t37 = 0;

	t37 = ((x2265>>x2266)%(x2267^x2268));

	if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x2277 = 7U;
	int16_t x2278 = 26;
	int16_t x2280 = -1;

	t38 = ((x2277>>x2278)%(x2279^x2280));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x2290 = 1;
	int8_t x2291 = INT8_MAX;
	uint8_t x2292 = UINT8_MAX;

	t39 = ((x2289>>x2290)%(x2291^x2292));

	if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x2349 = INT32_MAX;
	int16_t x2350 = 0;
	int16_t x2351 = 6;
	volatile int32_t t40 = -4465723;

	t40 = ((x2349>>x2350)%(x2351^x2352));

	if (t40 != 89) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x2401 = UINT16_MAX;
	int8_t x2402 = 0;
	int32_t x2404 = -643;
	volatile int32_t t41 = 499;

	t41 = ((x2401>>x2402)%(x2403^x2404));

	if (t41 != 51) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x2421 = INT16_MAX;
	volatile int32_t x2422 = 6;
	static uint16_t x2423 = 31554U;
	uint32_t x2424 = UINT32_MAX;

	t42 = ((x2421>>x2422)%(x2423^x2424));

	if (t42 != 511U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x2453 = UINT16_MAX;
	static uint8_t x2454 = 16U;
	static volatile int8_t x2455 = -8;
	static uint16_t x2456 = 4462U;
	int32_t t43 = -19454919;

	t43 = ((x2453>>x2454)%(x2455^x2456));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x2457 = 1183U;
	volatile uint8_t x2458 = 1U;
	static int8_t x2459 = 1;
	uint32_t x2460 = UINT32_MAX;
	uint32_t t44 = 133939943U;

	t44 = ((x2457>>x2458)%(x2459^x2460));

	if (t44 != 591U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x2574 = 22;
	uint32_t x2575 = 6051963U;
	uint64_t t45 = 9608509LLU;

	t45 = ((x2573>>x2574)%(x2575^x2576));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x2597 = 3256;
	static int16_t x2598 = 1;
	uint16_t x2600 = 2U;
	uint64_t t46 = 5886827828788919552LLU;

	t46 = ((x2597>>x2598)%(x2599^x2600));

	if (t46 != 1628LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x2657 = 193695810;
	volatile uint32_t x2658 = 7U;
	volatile int64_t x2660 = -132149347193853LL;

	t47 = ((x2657>>x2658)%(x2659^x2660));

	if (t47 != 1513248LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x2693 = INT64_MAX;
	uint32_t x2694 = 5U;
	uint64_t x2695 = 1006040LLU;
	volatile int16_t x2696 = INT16_MIN;
	volatile uint64_t t48 = 1135075042LLU;

	t48 = ((x2693>>x2694)%(x2695^x2696));

	if (t48 != 288230376151711743LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x2749 = 23963U;
	int32_t x2751 = -560771476;
	volatile int32_t x2752 = -1;

	t49 = ((x2749>>x2750)%(x2751^x2752));

	if (t49 != 1497) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x2762 = 2U;
	static volatile uint64_t x2763 = 424887LLU;
	uint64_t t50 = 982882730415324LLU;

	t50 = ((x2761>>x2762)%(x2763^x2764));

	if (t50 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x2765 = 7U;
	int16_t x2766 = 1;
	volatile int64_t x2767 = -1LL;
	volatile uint16_t x2768 = UINT16_MAX;
	volatile int64_t t51 = -3LL;

	t51 = ((x2765>>x2766)%(x2767^x2768));

	if (t51 != 3LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x2773 = 40U;
	uint8_t x2774 = 1U;
	static int32_t x2775 = 9;
	uint16_t x2776 = 1123U;
	static int32_t t52 = 3558;

	t52 = ((x2773>>x2774)%(x2775^x2776));

	if (t52 != 20) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x2797 = UINT64_MAX;
	uint8_t x2798 = 14U;
	static int8_t x2799 = INT8_MAX;
	uint64_t t53 = 29805998062079LLU;

	t53 = ((x2797>>x2798)%(x2799^x2800));

	if (t53 != 1125899906842623LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x2850 = 7U;
	volatile int64_t x2851 = -1LL;
	uint8_t x2852 = 32U;
	uint64_t t54 = 32626321903699445LLU;

	t54 = ((x2849>>x2850)%(x2851^x2852));

	if (t54 != 15384346273283LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x2893 = INT16_MAX;
	uint8_t x2894 = 19U;
	static uint16_t x2895 = UINT16_MAX;
	int16_t x2896 = INT16_MAX;
	int32_t t55 = 1;

	t55 = ((x2893>>x2894)%(x2895^x2896));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x3073 = 210U;
	int16_t x3074 = 29;
	uint8_t x3075 = UINT8_MAX;
	int64_t x3076 = 188026743146LL;
	volatile int64_t t56 = 93334289599LL;

	t56 = ((x3073>>x3074)%(x3075^x3076));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x3081 = UINT8_MAX;
	uint8_t x3082 = 4U;
	uint16_t x3083 = 3U;
	int64_t t57 = 1LL;

	t57 = ((x3081>>x3082)%(x3083^x3084));

	if (t57 != 15LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x3089 = INT64_MAX;
	uint8_t x3090 = 18U;
	static uint8_t x3091 = 39U;
	static int16_t x3092 = INT16_MAX;

	t58 = ((x3089>>x3090)%(x3091^x3092));

	if (t58 != 31271LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x3110 = 3U;
	volatile uint64_t x3111 = 14LLU;
	volatile int32_t x3112 = -11;
	static volatile uint64_t t59 = 506734LLU;

	t59 = ((x3109>>x3110)%(x3111^x3112));

	if (t59 != 354582705784LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x3179 = -66760012;
	uint32_t x3180 = UINT32_MAX;
	uint32_t t60 = 247850824U;

	t60 = ((x3177>>x3178)%(x3179^x3180));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x3210 = 5U;
	static uint32_t x3211 = 392U;
	static uint8_t x3212 = 27U;
	uint32_t t61 = 37080U;

	t61 = ((x3209>>x3210)%(x3211^x3212));

	if (t61 != 189U) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint32_t x3223 = 2728U;
	volatile uint32_t t62 = 1871061U;

	t62 = ((x3221>>x3222)%(x3223^x3224));

	if (t62 != 16266U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x3245 = 477045LLU;
	uint8_t x3246 = 7U;
	int32_t x3247 = -110612964;
	volatile int32_t x3248 = 318028;
	uint64_t t63 = 7592081730704434LLU;

	t63 = ((x3245>>x3246)%(x3247^x3248));

	if (t63 != 3726LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x3265 = 7LLU;
	uint8_t x3266 = 1U;
	int32_t x3267 = -1;
	int8_t x3268 = 1;

	t64 = ((x3265>>x3266)%(x3267^x3268));

	if (t64 != 3LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x3277 = 10U;
	int8_t x3278 = 1;
	uint8_t x3279 = 69U;
	static uint32_t x3280 = 159U;

	t65 = ((x3277>>x3278)%(x3279^x3280));

	if (t65 != 5U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x3397 = INT16_MAX;
	int16_t x3398 = 2;
	static int8_t x3399 = INT8_MIN;
	static volatile int64_t x3400 = INT64_MIN;
	int64_t t66 = -33LL;

	t66 = ((x3397>>x3398)%(x3399^x3400));

	if (t66 != 8191LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint16_t x3430 = 1U;
	int32_t x3431 = -302751;
	volatile int64_t t67 = 13882655114245368LL;

	t67 = ((x3429>>x3430)%(x3431^x3432));

	if (t67 != 1073741823LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x3433 = UINT8_MAX;
	uint8_t x3434 = 23U;
	int16_t x3435 = INT16_MIN;
	uint16_t x3436 = 121U;
	int32_t t68 = -1053443899;

	t68 = ((x3433>>x3434)%(x3435^x3436));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x3486 = 30;
	uint32_t x3487 = 3359986U;
	int32_t x3488 = INT32_MAX;
	volatile uint32_t t69 = 20148U;

	t69 = ((x3485>>x3486)%(x3487^x3488));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x3521 = UINT64_MAX;
	static uint16_t x3522 = 57U;
	int64_t x3523 = -1418271905595LL;
	volatile uint64_t t70 = 235LLU;

	t70 = ((x3521>>x3522)%(x3523^x3524));

	if (t70 != 127LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x3553 = 5855085954LLU;
	int8_t x3554 = 2;
	volatile int16_t x3555 = 838;
	int32_t x3556 = INT32_MIN;
	uint64_t t71 = 882536LLU;

	t71 = ((x3553>>x3554)%(x3555^x3556));

	if (t71 != 1463771488LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x3581 = 6U;
	static uint16_t x3582 = 1U;
	static volatile int16_t x3583 = -407;
	static volatile uint64_t x3584 = 3623275289334886331LLU;
	static volatile uint64_t t72 = 50577834615116768LLU;

	t72 = ((x3581>>x3582)%(x3583^x3584));

	if (t72 != 3LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x3617 = 67144265891818551LL;
	uint16_t x3618 = 2U;
	volatile int16_t x3619 = -1;
	volatile uint64_t x3620 = 3756530689028863487LLU;
	uint64_t t73 = 3003739LLU;

	t73 = ((x3617>>x3618)%(x3619^x3620));

	if (t73 != 16786066472954637LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x3645 = UINT16_MAX;
	static int16_t x3647 = INT16_MIN;
	volatile uint64_t x3648 = 215320LLU;
	static volatile uint64_t t74 = 254LLU;

	t74 = ((x3645>>x3646)%(x3647^x3648));

	if (t74 != 8191LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x3674 = 12U;
	uint32_t x3675 = 1U;
	static volatile int32_t x3676 = 1282540;

	t75 = ((x3673>>x3674)%(x3675^x3676));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x3677 = 2044U;
	int32_t x3679 = 16567;
	volatile int16_t x3680 = INT16_MIN;
	uint32_t t76 = 237614978U;

	t76 = ((x3677>>x3678)%(x3679^x3680));

	if (t76 != 31U) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x3681 = UINT64_MAX;
	volatile uint32_t x3682 = 10U;
	static int16_t x3683 = INT16_MAX;
	int32_t x3684 = -1019;
	static volatile uint64_t t77 = 476LLU;

	t77 = ((x3681>>x3682)%(x3683^x3684));

	if (t77 != 18014398509481983LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x3773 = 58U;
	int64_t x3775 = INT64_MIN;
	int64_t x3776 = -868849LL;
	int64_t t78 = 1669914366819184LL;

	t78 = ((x3773>>x3774)%(x3775^x3776));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x3801 = UINT16_MAX;
	int16_t x3802 = 0;
	volatile int64_t x3804 = 25094842LL;
	static int64_t t79 = -3401812784639LL;

	t79 = ((x3801>>x3802)%(x3803^x3804));

	if (t79 != 65535LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x3831 = -1;
	volatile int32_t x3832 = INT32_MAX;
	int32_t t80 = 3;

	t80 = ((x3829>>x3830)%(x3831^x3832));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x3873 = 247;
	uint8_t x3874 = 23U;
	int8_t x3876 = INT8_MIN;
	volatile uint64_t t81 = 50241042LLU;

	t81 = ((x3873>>x3874)%(x3875^x3876));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x3882 = 20U;
	volatile int32_t t82 = 6707;

	t82 = ((x3881>>x3882)%(x3883^x3884));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x3942 = 0;
	static int64_t t83 = -2LL;

	t83 = ((x3941>>x3942)%(x3943^x3944));

	if (t83 != 31LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x3965 = 0U;
	uint16_t x3966 = 9U;
	uint16_t x3967 = UINT16_MAX;
	int8_t x3968 = 40;
	int32_t t84 = 896789525;

	t84 = ((x3965>>x3966)%(x3967^x3968));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x3985 = INT32_MAX;
	static int8_t x3986 = 11;
	int64_t x3987 = INT64_MIN;
	int64_t t85 = -9100876540492659LL;

	t85 = ((x3985>>x3986)%(x3987^x3988));

	if (t85 != 1048575LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x4070 = 16U;
	volatile uint32_t x4071 = 15127U;
	int8_t x4072 = 15;

	t86 = ((x4069>>x4070)%(x4071^x4072));

	if (t86 != 5023U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x4089 = INT8_MAX;
	uint8_t x4090 = 10U;
	volatile uint32_t x4091 = 62534U;
	volatile int8_t x4092 = INT8_MIN;
	volatile uint32_t t87 = 32588128U;

	t87 = ((x4089>>x4090)%(x4091^x4092));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x4225 = UINT16_MAX;
	int8_t x4226 = 3;
	volatile int16_t x4227 = 1;
	static volatile int32_t t88 = -27;

	t88 = ((x4225>>x4226)%(x4227^x4228));

	if (t88 != 7) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x4317 = 0U;
	uint8_t x4318 = 0U;
	volatile int32_t x4319 = -1;
	static volatile uint64_t x4320 = 1083LLU;
	uint64_t t89 = 519460688529371230LLU;

	t89 = ((x4317>>x4318)%(x4319^x4320));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x4329 = 57987U;
	uint32_t x4330 = 1U;
	volatile uint32_t x4331 = UINT32_MAX;
	uint64_t x4332 = 9LLU;

	t90 = ((x4329>>x4330)%(x4331^x4332));

	if (t90 != 28993LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x4569 = 6402615767LL;
	uint8_t x4570 = 7U;
	volatile int16_t x4571 = -1277;
	int8_t x4572 = INT8_MIN;
	volatile int64_t t91 = 2796LL;

	t91 = ((x4569>>x4570)%(x4571^x4572));

	if (t91 != 850LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x4625 = UINT8_MAX;
	volatile uint8_t x4626 = 1U;
	int8_t x4627 = INT8_MIN;
	int32_t x4628 = -7111;

	t92 = ((x4625>>x4626)%(x4627^x4628));

	if (t92 != 127) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x4697 = 0;
	uint16_t x4698 = 7U;
	static int8_t x4699 = -1;
	int16_t x4700 = INT16_MIN;
	int32_t t93 = -606201;

	t93 = ((x4697>>x4698)%(x4699^x4700));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x4707 = 32618U;
	uint8_t x4708 = UINT8_MAX;

	t94 = ((x4705>>x4706)%(x4707^x4708));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x4921 = 0;
	uint8_t x4922 = 0U;

	t95 = ((x4921>>x4922)%(x4923^x4924));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x4953 = 14U;
	uint8_t x4954 = 2U;
	uint32_t x4955 = UINT32_MAX;
	int16_t x4956 = INT16_MAX;

	t96 = ((x4953>>x4954)%(x4955^x4956));

	if (t96 != 3U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x5037 = 27;
	int32_t x5038 = 4;
	static int32_t x5039 = -1;
	static int16_t x5040 = INT16_MIN;
	volatile int32_t t97 = 377264908;

	t97 = ((x5037>>x5038)%(x5039^x5040));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x5046 = 3U;
	int8_t x5047 = 1;
	uint32_t t98 = 32332U;

	t98 = ((x5045>>x5046)%(x5047^x5048));

	if (t98 != 3739U) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x5097 = 10U;
	uint64_t x5098 = 0LLU;
	static uint64_t x5100 = UINT64_MAX;
	uint64_t t99 = 7137777385988LLU;

	t99 = ((x5097>>x5098)%(x5099^x5100));

	if (t99 != 10LLU) { NG(); } else { ; }
	
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

