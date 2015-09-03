#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x14 = 0U;
volatile int16_t x16 = 12;
static int64_t x62 = -1LL;
static volatile int32_t x126 = INT32_MIN;
volatile uint8_t x128 = 0U;
uint8_t x179 = 0U;
uint64_t x315 = UINT64_MAX;
volatile int64_t x381 = -1LL;
static int8_t x565 = INT8_MIN;
static volatile uint64_t x1012 = 3LLU;
static volatile int64_t t14 = -2359764242832813LL;
volatile int8_t x1094 = INT8_MIN;
uint16_t x1345 = 27U;
volatile uint8_t x1404 = 0U;
static int64_t x1478 = 10LL;
static int16_t x1661 = 44;
int8_t x1695 = INT8_MAX;
static int8_t x1865 = 0;
uint8_t x1908 = 1U;
static int32_t t28 = 54471;
static volatile uint64_t t29 = 169023LLU;
uint32_t x2073 = UINT32_MAX;
volatile uint16_t x2187 = 132U;
static volatile uint64_t t31 = 60327846959439LLU;
int8_t x2257 = -1;
int32_t x2343 = INT32_MAX;
int64_t x2441 = -251029526645613473LL;
uint64_t x2475 = UINT64_MAX;
uint64_t t35 = 0LLU;
uint8_t x2611 = 82U;
int64_t x2665 = INT64_MAX;
int8_t x2666 = INT8_MAX;
int8_t x2667 = INT8_MAX;
uint8_t x2671 = 1U;
int64_t x2672 = 28LL;
uint16_t x2993 = 11U;
volatile int8_t x2994 = INT8_MAX;
volatile int32_t x3270 = INT32_MAX;
static int32_t x3291 = INT32_MAX;
static int8_t x3355 = INT8_MAX;
volatile uint16_t x3384 = 4U;
static uint32_t x3506 = 2U;
volatile uint32_t x3631 = 554563455U;
int16_t x3745 = 323;
uint8_t x3748 = 4U;
static int8_t x3959 = INT8_MAX;
uint32_t t59 = 70U;
static uint16_t x3961 = 5694U;
int64_t t62 = -4293764086461LL;
volatile int32_t x4249 = INT32_MIN;
static int32_t x4250 = INT32_MIN;
uint8_t x4324 = 18U;
uint16_t x4353 = 1U;
int32_t x4402 = -1;
int16_t x4723 = INT16_MAX;
volatile int32_t t73 = 205367;
volatile int32_t t74 = -2782;
uint16_t x5087 = 0U;
int16_t x5164 = 10;
static uint64_t x5237 = UINT64_MAX;
volatile uint32_t x5238 = UINT32_MAX;
volatile uint64_t t79 = 8287130139096947893LLU;
int16_t x5258 = -1;
volatile uint64_t t80 = 2776076086697133LLU;
volatile int8_t x5269 = INT8_MIN;
int8_t x5271 = INT8_MAX;
int32_t x5293 = -1;
uint8_t x5295 = 11U;
int16_t x5467 = 0;
int32_t x5490 = INT32_MAX;
int32_t x5542 = INT32_MIN;
uint64_t x5550 = UINT64_MAX;
volatile int64_t t88 = 13732LL;
static uint8_t x5717 = 11U;
uint32_t x5719 = 1664040U;
static volatile int64_t t90 = -21470088173420553LL;
volatile uint64_t t91 = 85923405837496LLU;
int8_t x5853 = 0;
int64_t x5855 = INT64_MAX;
int64_t x5857 = 10429LL;
volatile uint32_t x6027 = UINT32_MAX;
uint16_t x6028 = 10U;


void f0(void) {
	int8_t x13 = 43;
	static volatile uint16_t x15 = 26630U;
	volatile uint32_t t0 = 30U;

	t0 = ((x13-x14)+(x15>>x16));

	if (t0 != 49U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x61 = INT16_MIN;
	static uint64_t x63 = UINT64_MAX;
	uint16_t x64 = 0U;
	uint64_t t1 = 181234672890LLU;

	t1 = ((x61-x62)+(x63>>x64));

	if (t1 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x125 = 25197233LLU;
	uint32_t x127 = 16144U;
	uint64_t t2 = 12089276LLU;

	t2 = ((x125-x126)+(x127>>x128));

	if (t2 != 2172697025LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int64_t x129 = INT64_MIN;
	int32_t x130 = -1;
	uint32_t x131 = 29230383U;
	int8_t x132 = 1;
	volatile int64_t t3 = -13462526LL;

	t3 = ((x129-x130)+(x131>>x132));

	if (t3 != -9223372036840160616LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x173 = INT16_MAX;
	uint32_t x174 = UINT32_MAX;
	volatile int32_t x175 = 23129;
	static int16_t x176 = 0;
	uint32_t t4 = 126U;

	t4 = ((x173-x174)+(x175>>x176));

	if (t4 != 55897U) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x177 = 1996U;
	uint64_t x178 = 263792822096564LLU;
	volatile uint16_t x180 = 1U;
	uint64_t t5 = 9668077LLU;

	t5 = ((x177-x178)+(x179>>x180));

	if (t5 != 18446480280887457048LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x313 = 912850U;
	uint64_t x314 = UINT64_MAX;
	uint8_t x316 = 1U;
	volatile uint64_t t6 = 124428767LLU;

	t6 = ((x313-x314)+(x315>>x316));

	if (t6 != 9223372036855688658LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x349 = 1U;
	volatile int16_t x350 = 13790;
	static uint8_t x351 = 117U;
	int64_t x352 = 1LL;
	static volatile int32_t t7 = -1069847;

	t7 = ((x349-x350)+(x351>>x352));

	if (t7 != -13731) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x382 = 24U;
	volatile int8_t x383 = 27;
	int16_t x384 = 18;
	volatile int64_t t8 = 4052371695322574062LL;

	t8 = ((x381-x382)+(x383>>x384));

	if (t8 != -25LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x566 = 274620856815656762LLU;
	int16_t x567 = INT16_MAX;
	volatile int8_t x568 = 9;
	volatile uint64_t t9 = 248948070001LLU;

	t9 = ((x565-x566)+(x567>>x568));

	if (t9 != 18172123216893894789LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x601 = 5653U;
	volatile uint64_t x602 = 96200LLU;
	uint32_t x603 = 808U;
	int16_t x604 = 0;
	uint64_t t10 = 190796LLU;

	t10 = ((x601-x602)+(x603>>x604));

	if (t10 != 18446744073709461877LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x653 = UINT8_MAX;
	int16_t x654 = -1;
	uint8_t x655 = 3U;
	uint8_t x656 = 1U;
	int32_t t11 = 29761;

	t11 = ((x653-x654)+(x655>>x656));

	if (t11 != 257) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x837 = 1;
	int8_t x838 = INT8_MIN;
	uint64_t x839 = 860464LLU;
	int16_t x840 = 4;
	volatile uint64_t t12 = 215386770542881793LLU;

	t12 = ((x837-x838)+(x839>>x840));

	if (t12 != 53908LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x981 = -1;
	static volatile int32_t x982 = INT32_MAX;
	uint64_t x983 = 121946702831LLU;
	uint8_t x984 = 43U;
	uint64_t t13 = 1394331466541020LLU;

	t13 = ((x981-x982)+(x983>>x984));

	if (t13 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x1009 = 3;
	int32_t x1010 = -1493618;
	int64_t x1011 = 568270559863013LL;

	t14 = ((x1009-x1010)+(x1011>>x1012));

	if (t14 != 71033821476497LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x1093 = UINT8_MAX;
	int32_t x1095 = INT32_MAX;
	int16_t x1096 = 3;
	volatile int32_t t15 = 64513;

	t15 = ((x1093-x1094)+(x1095>>x1096));

	if (t15 != 268435838) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x1213 = 0U;
	uint32_t x1214 = 9454835U;
	int8_t x1215 = INT8_MAX;
	static uint64_t x1216 = 6LLU;
	static volatile uint32_t t16 = 614946676U;

	t16 = ((x1213-x1214)+(x1215>>x1216));

	if (t16 != 4285512462U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x1346 = INT64_MAX;
	uint64_t x1347 = 13092800LLU;
	uint64_t x1348 = 7LLU;
	static volatile uint64_t t17 = 916169729642894787LLU;

	t17 = ((x1345-x1346)+(x1347>>x1348));

	if (t17 != 9223372036854878123LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x1389 = INT16_MAX;
	uint32_t x1390 = 15046662U;
	int64_t x1391 = 92LL;
	static uint8_t x1392 = 38U;
	volatile int64_t t18 = 300602308375560LL;

	t18 = ((x1389-x1390)+(x1391>>x1392));

	if (t18 != 4279953401LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x1401 = -1LL;
	uint8_t x1402 = 1U;
	static int64_t x1403 = 8911LL;
	volatile int64_t t19 = -3983440341751LL;

	t19 = ((x1401-x1402)+(x1403>>x1404));

	if (t19 != 8909LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x1469 = 6U;
	uint16_t x1470 = 1U;
	int32_t x1471 = INT32_MAX;
	int8_t x1472 = 30;
	int32_t t20 = 57;

	t20 = ((x1469-x1470)+(x1471>>x1472));

	if (t20 != 6) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1477 = INT16_MIN;
	uint64_t x1479 = 952413912987LLU;
	uint16_t x1480 = 1U;
	uint64_t t21 = 27LLU;

	t21 = ((x1477-x1478)+(x1479>>x1480));

	if (t21 != 476206923715LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x1497 = -100;
	int16_t x1498 = INT16_MAX;
	uint64_t x1499 = 8689194314669943LLU;
	volatile int8_t x1500 = 0;
	uint64_t t22 = 16LLU;

	t22 = ((x1497-x1498)+(x1499>>x1500));

	if (t22 != 8689194314637076LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1662 = 2016U;
	int8_t x1663 = INT8_MAX;
	int16_t x1664 = 0;
	static int32_t t23 = -918844348;

	t23 = ((x1661-x1662)+(x1663>>x1664));

	if (t23 != -1845) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x1693 = -9;
	int8_t x1694 = INT8_MAX;
	uint16_t x1696 = 2U;
	volatile int32_t t24 = 9576952;

	t24 = ((x1693-x1694)+(x1695>>x1696));

	if (t24 != -105) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x1741 = 2U;
	volatile int8_t x1742 = -1;
	static volatile uint32_t x1743 = 3645U;
	int8_t x1744 = 1;
	uint32_t t25 = 2U;

	t25 = ((x1741-x1742)+(x1743>>x1744));

	if (t25 != 1825U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1866 = -1;
	static volatile uint8_t x1867 = 0U;
	uint8_t x1868 = 6U;
	int32_t t26 = -1;

	t26 = ((x1865-x1866)+(x1867>>x1868));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1905 = 6U;
	volatile int16_t x1906 = INT16_MIN;
	uint8_t x1907 = 8U;
	uint32_t t27 = 4686U;

	t27 = ((x1905-x1906)+(x1907>>x1908));

	if (t27 != 32778U) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1917 = 40U;
	int32_t x1918 = -400;
	uint8_t x1919 = 6U;
	uint16_t x1920 = 26U;

	t28 = ((x1917-x1918)+(x1919>>x1920));

	if (t28 != 440) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x2069 = 106069LLU;
	int32_t x2070 = -1;
	static volatile uint16_t x2071 = 1U;
	uint8_t x2072 = 21U;

	t29 = ((x2069-x2070)+(x2071>>x2072));

	if (t29 != 106070LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x2074 = 36;
	int64_t x2075 = INT64_MAX;
	static volatile int16_t x2076 = 21;
	static int64_t t30 = 28LL;

	t30 = ((x2073-x2074)+(x2075>>x2076));

	if (t30 != 4402341478362LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x2185 = UINT16_MAX;
	uint64_t x2186 = 7135214LLU;
	int32_t x2188 = 20;

	t31 = ((x2185-x2186)+(x2187>>x2188));

	if (t31 != 18446744073702481937LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x2258 = INT32_MIN;
	static uint32_t x2259 = UINT32_MAX;
	volatile uint8_t x2260 = 1U;
	static uint32_t t32 = 800U;

	t32 = ((x2257-x2258)+(x2259>>x2260));

	if (t32 != 4294967294U) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x2341 = 12U;
	volatile int64_t x2342 = -73552854LL;
	uint16_t x2344 = 1U;
	volatile int64_t t33 = -70543005391820924LL;

	t33 = ((x2341-x2342)+(x2343>>x2344));

	if (t33 != 1147294689LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x2442 = UINT16_MAX;
	int64_t x2443 = 958433367569454LL;
	static volatile uint8_t x2444 = 3U;
	volatile int64_t t34 = -190735LL;

	t34 = ((x2441-x2442)+(x2443>>x2444));

	if (t34 != -250909722474732827LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x2473 = UINT8_MAX;
	static int32_t x2474 = INT32_MAX;
	static volatile int8_t x2476 = 1;

	t35 = ((x2473-x2474)+(x2475>>x2476));

	if (t35 != 9223372034707292415LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint8_t x2529 = 3U;
	volatile int16_t x2530 = INT16_MAX;
	int64_t x2531 = 25234291557628LL;
	volatile int8_t x2532 = 7;
	volatile int64_t t36 = 57885833LL;

	t36 = ((x2529-x2530)+(x2531>>x2532));

	if (t36 != 197142870029LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x2609 = INT64_MAX;
	int32_t x2610 = INT32_MAX;
	uint8_t x2612 = 16U;
	int64_t t37 = -70623692939912956LL;

	t37 = ((x2609-x2610)+(x2611>>x2612));

	if (t37 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x2668 = 0;
	volatile int64_t t38 = INT64_MAX;

	t38 = ((x2665-x2666)+(x2667>>x2668));

	if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2669 = INT8_MAX;
	uint32_t x2670 = 6983U;
	uint32_t t39 = 209690433U;

	t39 = ((x2669-x2670)+(x2671>>x2672));

	if (t39 != 4294960440U) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x2741 = -5;
	volatile uint8_t x2742 = 0U;
	int16_t x2743 = 1682;
	uint8_t x2744 = 9U;
	static int32_t t40 = -5165;

	t40 = ((x2741-x2742)+(x2743>>x2744));

	if (t40 != -2) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x2765 = INT64_MIN;
	uint64_t x2766 = UINT64_MAX;
	uint64_t x2767 = 3374LLU;
	int32_t x2768 = 23;
	uint64_t t41 = 1LLU;

	t41 = ((x2765-x2766)+(x2767>>x2768));

	if (t41 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2881 = INT8_MAX;
	int64_t x2882 = -22624LL;
	uint32_t x2883 = 1U;
	int16_t x2884 = 0;
	int64_t t42 = -3LL;

	t42 = ((x2881-x2882)+(x2883>>x2884));

	if (t42 != 22752LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x2995 = UINT64_MAX;
	static int8_t x2996 = 0;
	uint64_t t43 = 2460235844759741LLU;

	t43 = ((x2993-x2994)+(x2995>>x2996));

	if (t43 != 18446744073709551499LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x3009 = -4;
	uint32_t x3010 = UINT32_MAX;
	static uint16_t x3011 = UINT16_MAX;
	int8_t x3012 = 3;
	uint32_t t44 = 274744810U;

	t44 = ((x3009-x3010)+(x3011>>x3012));

	if (t44 != 8188U) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x3141 = 44301971739594556LLU;
	int32_t x3142 = -307;
	static volatile uint32_t x3143 = 23295U;
	uint8_t x3144 = 4U;
	volatile uint64_t t45 = 3LLU;

	t45 = ((x3141-x3142)+(x3143>>x3144));

	if (t45 != 44301971739596318LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x3269 = 22;
	uint16_t x3271 = 11503U;
	uint32_t x3272 = 1U;
	static int32_t t46 = 363;

	t46 = ((x3269-x3270)+(x3271>>x3272));

	if (t46 != -2147477874) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x3289 = INT16_MIN;
	volatile uint32_t x3290 = 25490U;
	uint8_t x3292 = 6U;
	uint32_t t47 = 46U;

	t47 = ((x3289-x3290)+(x3291>>x3292));

	if (t47 != 33496173U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x3317 = -1LL;
	static uint16_t x3318 = 15U;
	static uint32_t x3319 = 1995477U;
	uint8_t x3320 = 29U;
	volatile int64_t t48 = 11553389089226LL;

	t48 = ((x3317-x3318)+(x3319>>x3320));

	if (t48 != -16LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x3353 = INT16_MIN;
	uint32_t x3354 = UINT32_MAX;
	int8_t x3356 = 3;
	static uint32_t t49 = 12081946U;

	t49 = ((x3353-x3354)+(x3355>>x3356));

	if (t49 != 4294934544U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x3369 = -4960;
	static uint64_t x3370 = 90680981186753LLU;
	uint32_t x3371 = UINT32_MAX;
	int8_t x3372 = 8;
	uint64_t t50 = 712771294895LLU;

	t50 = ((x3369-x3370)+(x3371>>x3372));

	if (t50 != 18446653392745137118LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x3381 = -1;
	int8_t x3382 = INT8_MAX;
	int64_t x3383 = 130615928LL;
	volatile int64_t t51 = -14897LL;

	t51 = ((x3381-x3382)+(x3383>>x3384));

	if (t51 != 8163367LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x3505 = INT8_MIN;
	int64_t x3507 = 221556397536322LL;
	int8_t x3508 = 0;
	static int64_t t52 = -937399583043024LL;

	t52 = ((x3505-x3506)+(x3507>>x3508));

	if (t52 != 221560692503488LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x3629 = INT64_MIN;
	int32_t x3630 = INT32_MIN;
	int8_t x3632 = 0;
	int64_t t53 = 11391898782615446LL;

	t53 = ((x3629-x3630)+(x3631>>x3632));

	if (t53 != -9223372034152728705LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x3697 = -1;
	int8_t x3698 = 2;
	volatile int32_t x3699 = INT32_MAX;
	static uint8_t x3700 = 1U;
	volatile int32_t t54 = -1208419;

	t54 = ((x3697-x3698)+(x3699>>x3700));

	if (t54 != 1073741820) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x3705 = 1139;
	static int16_t x3706 = INT16_MIN;
	int16_t x3707 = INT16_MAX;
	uint8_t x3708 = 5U;
	int32_t t55 = 0;

	t55 = ((x3705-x3706)+(x3707>>x3708));

	if (t55 != 34930) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x3746 = INT16_MAX;
	volatile int8_t x3747 = 1;
	static volatile int32_t t56 = 86065;

	t56 = ((x3745-x3746)+(x3747>>x3748));

	if (t56 != -32444) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x3781 = 24;
	int16_t x3782 = -5;
	volatile int32_t x3783 = 234;
	static uint8_t x3784 = 12U;
	volatile int32_t t57 = 737757526;

	t57 = ((x3781-x3782)+(x3783>>x3784));

	if (t57 != 29) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x3945 = INT64_MAX;
	uint8_t x3946 = 1U;
	static volatile uint8_t x3947 = UINT8_MAX;
	uint32_t x3948 = 11U;
	static int64_t t58 = -2LL;

	t58 = ((x3945-x3946)+(x3947>>x3948));

	if (t58 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x3957 = -3;
	volatile uint32_t x3958 = 13653724U;
	static volatile uint32_t x3960 = 3U;

	t59 = ((x3957-x3958)+(x3959>>x3960));

	if (t59 != 4281313584U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x3962 = 0;
	static uint64_t x3963 = UINT64_MAX;
	volatile int16_t x3964 = 16;
	static volatile uint64_t t60 = 339053766976LLU;

	t60 = ((x3961-x3962)+(x3963>>x3964));

	if (t60 != 281474976716349LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x4017 = INT16_MAX;
	int8_t x4018 = 0;
	uint64_t x4019 = 1712452LLU;
	int8_t x4020 = 2;
	uint64_t t61 = 261002LLU;

	t61 = ((x4017-x4018)+(x4019>>x4020));

	if (t61 != 460880LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x4241 = 103637484LL;
	static int64_t x4242 = -1LL;
	static volatile uint32_t x4243 = 142323565U;
	uint16_t x4244 = 4U;

	t62 = ((x4241-x4242)+(x4243>>x4244));

	if (t62 != 112532707LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x4251 = INT8_MAX;
	uint8_t x4252 = 1U;
	int32_t t63 = -224795450;

	t63 = ((x4249-x4250)+(x4251>>x4252));

	if (t63 != 63) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x4321 = 52202U;
	int64_t x4322 = -16909527942LL;
	uint32_t x4323 = 3975675U;
	static volatile int64_t t64 = 489616308LL;

	t64 = ((x4321-x4322)+(x4323>>x4324));

	if (t64 != 16909580159LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x4354 = UINT64_MAX;
	int32_t x4355 = 135563;
	static int64_t x4356 = 12LL;
	uint64_t t65 = 2027153901LLU;

	t65 = ((x4353-x4354)+(x4355>>x4356));

	if (t65 != 35LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x4397 = -1;
	int64_t x4398 = 12209LL;
	uint16_t x4399 = UINT16_MAX;
	uint8_t x4400 = 18U;
	int64_t t66 = -167323456642831LL;

	t66 = ((x4397-x4398)+(x4399>>x4400));

	if (t66 != -12210LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x4401 = 15LLU;
	int64_t x4403 = INT64_MAX;
	uint32_t x4404 = 1U;
	volatile uint64_t t67 = 2573850429586691775LLU;

	t67 = ((x4401-x4402)+(x4403>>x4404));

	if (t67 != 4611686018427387919LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x4417 = 2;
	uint16_t x4418 = UINT16_MAX;
	int64_t x4419 = INT64_MAX;
	uint8_t x4420 = 61U;
	static volatile int64_t t68 = 23216292245901779LL;

	t68 = ((x4417-x4418)+(x4419>>x4420));

	if (t68 != -65530LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x4597 = 15834796472465LL;
	int32_t x4598 = INT32_MIN;
	uint32_t x4599 = 3168039U;
	static int64_t x4600 = 0LL;
	static volatile int64_t t69 = -119160221LL;

	t69 = ((x4597-x4598)+(x4599>>x4600));

	if (t69 != 15836947124152LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x4709 = INT32_MAX;
	uint32_t x4710 = UINT32_MAX;
	static int64_t x4711 = 27718LL;
	int16_t x4712 = 20;
	static int64_t t70 = 8919384202369LL;

	t70 = ((x4709-x4710)+(x4711>>x4712));

	if (t70 != 2147483648LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x4721 = 5;
	volatile int8_t x4722 = -1;
	uint8_t x4724 = 1U;
	int32_t t71 = -67205;

	t71 = ((x4721-x4722)+(x4723>>x4724));

	if (t71 != 16389) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x4745 = UINT16_MAX;
	volatile int16_t x4746 = INT16_MIN;
	int32_t x4747 = INT32_MAX;
	uint32_t x4748 = 5U;
	static int32_t t72 = -610;

	t72 = ((x4745-x4746)+(x4747>>x4748));

	if (t72 != 67207166) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x4809 = INT16_MIN;
	int16_t x4810 = INT16_MIN;
	int16_t x4811 = INT16_MAX;
	int8_t x4812 = 9;

	t73 = ((x4809-x4810)+(x4811>>x4812));

	if (t73 != 63) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x4829 = -31370;
	int16_t x4830 = -47;
	uint8_t x4831 = UINT8_MAX;
	int16_t x4832 = 1;

	t74 = ((x4829-x4830)+(x4831>>x4832));

	if (t74 != -31196) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x4945 = -1;
	int16_t x4946 = INT16_MIN;
	int16_t x4947 = INT16_MAX;
	int16_t x4948 = 1;
	int32_t t75 = 80;

	t75 = ((x4945-x4946)+(x4947>>x4948));

	if (t75 != 49150) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x5033 = -29306756954LL;
	int32_t x5034 = -4324827;
	int8_t x5035 = INT8_MAX;
	int16_t x5036 = 26;
	volatile int64_t t76 = 844LL;

	t76 = ((x5033-x5034)+(x5035>>x5036));

	if (t76 != -29302432127LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x5085 = -645;
	int8_t x5086 = INT8_MIN;
	int16_t x5088 = 29;
	static volatile int32_t t77 = 294786;

	t77 = ((x5085-x5086)+(x5087>>x5088));

	if (t77 != -517) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x5161 = INT8_MIN;
	volatile int64_t x5162 = 1921658LL;
	volatile int8_t x5163 = INT8_MAX;
	volatile int64_t t78 = -1033LL;

	t78 = ((x5161-x5162)+(x5163>>x5164));

	if (t78 != -1921786LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x5239 = INT64_MAX;
	static volatile int32_t x5240 = 0;

	t79 = ((x5237-x5238)+(x5239>>x5240));

	if (t79 != 9223372032559808511LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x5257 = INT16_MIN;
	static uint64_t x5259 = 1026167705LLU;
	int32_t x5260 = 0;

	t80 = ((x5257-x5258)+(x5259>>x5260));

	if (t80 != 1026134938LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int8_t x5270 = INT8_MIN;
	volatile uint32_t x5272 = 1U;
	volatile int32_t t81 = 34;

	t81 = ((x5269-x5270)+(x5271>>x5272));

	if (t81 != 63) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x5294 = INT64_MAX;
	int32_t x5296 = 1;
	volatile int64_t t82 = 0LL;

	t82 = ((x5293-x5294)+(x5295>>x5296));

	if (t82 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x5465 = 29;
	uint32_t x5466 = 51U;
	volatile uint8_t x5468 = 7U;
	uint32_t t83 = 17925U;

	t83 = ((x5465-x5466)+(x5467>>x5468));

	if (t83 != 4294967274U) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x5489 = 384891U;
	uint64_t x5491 = 12LLU;
	volatile int8_t x5492 = 0;
	volatile uint64_t t84 = 205801508866LLU;

	t84 = ((x5489-x5490)+(x5491>>x5492));

	if (t84 != 2147868552LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x5541 = 183U;
	uint64_t x5543 = UINT64_MAX;
	static int8_t x5544 = 39;
	static volatile uint64_t t85 = 182674304653074LLU;

	t85 = ((x5541-x5542)+(x5543>>x5544));

	if (t85 != 2181038262LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x5549 = 9913LLU;
	int16_t x5551 = INT16_MAX;
	static int8_t x5552 = 1;
	uint64_t t86 = 2258LLU;

	t86 = ((x5549-x5550)+(x5551>>x5552));

	if (t86 != 26297LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x5569 = 94U;
	int16_t x5570 = INT16_MAX;
	static int32_t x5571 = INT32_MAX;
	volatile int16_t x5572 = 0;
	volatile int32_t t87 = -89873;

	t87 = ((x5569-x5570)+(x5571>>x5572));

	if (t87 != 2147450974) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x5649 = -42;
	static uint32_t x5650 = 2665U;
	static int64_t x5651 = INT64_MAX;
	volatile uint8_t x5652 = 1U;

	t88 = ((x5649-x5650)+(x5651>>x5652));

	if (t88 != 4611686022722352492LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x5718 = 43LLU;
	int8_t x5720 = 2;
	uint64_t t89 = 52250LLU;

	t89 = ((x5717-x5718)+(x5719>>x5720));

	if (t89 != 415978LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x5745 = INT64_MAX;
	uint32_t x5746 = 3453382U;
	volatile uint8_t x5747 = 61U;
	uint32_t x5748 = 1U;

	t90 = ((x5745-x5746)+(x5747>>x5748));

	if (t90 != 9223372036851322455LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x5781 = UINT64_MAX;
	volatile int32_t x5782 = -8243;
	static volatile uint64_t x5783 = 1864814021417670435LLU;
	volatile uint8_t x5784 = 1U;

	t91 = ((x5781-x5782)+(x5783>>x5784));

	if (t91 != 932407010708843459LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x5797 = 135435161LL;
	int8_t x5798 = INT8_MIN;
	uint64_t x5799 = 161754LLU;
	static int32_t x5800 = 1;
	volatile uint64_t t92 = 14973LLU;

	t92 = ((x5797-x5798)+(x5799>>x5800));

	if (t92 != 135516166LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x5854 = INT32_MAX;
	int8_t x5856 = 7;
	int64_t t93 = 43868262478565LL;

	t93 = ((x5853-x5854)+(x5855>>x5856));

	if (t93 != 72057591890444288LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x5858 = INT32_MAX;
	int32_t x5859 = 23856;
	int16_t x5860 = 0;
	static volatile int64_t t94 = -832LL;

	t94 = ((x5857-x5858)+(x5859>>x5860));

	if (t94 != -2147449362LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x5961 = -1;
	static int16_t x5962 = 11;
	uint8_t x5963 = 37U;
	static volatile uint32_t x5964 = 4U;
	volatile int32_t t95 = -2624058;

	t95 = ((x5961-x5962)+(x5963>>x5964));

	if (t95 != -10) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x6025 = UINT16_MAX;
	int8_t x6026 = INT8_MIN;
	static volatile uint32_t t96 = 68508U;

	t96 = ((x6025-x6026)+(x6027>>x6028));

	if (t96 != 4259966U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x6097 = UINT64_MAX;
	uint16_t x6098 = 9985U;
	uint8_t x6099 = 23U;
	uint8_t x6100 = 1U;
	static volatile uint64_t t97 = 6709627950856LLU;

	t97 = ((x6097-x6098)+(x6099>>x6100));

	if (t97 != 18446744073709541641LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x6105 = -1;
	static uint64_t x6106 = 96042647837LLU;
	volatile uint8_t x6107 = 0U;
	uint8_t x6108 = 19U;
	volatile uint64_t t98 = 19043528LLU;

	t98 = ((x6105-x6106)+(x6107>>x6108));

	if (t98 != 18446743977666903778LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x6137 = 37727108U;
	uint64_t x6138 = 413688555998324LLU;
	uint16_t x6139 = 3U;
	static int64_t x6140 = 9LL;
	volatile uint64_t t99 = 13622909778434407LLU;

	t99 = ((x6137-x6138)+(x6139>>x6140));

	if (t99 != 18446330385191280400LLU) { NG(); } else { ; }
	
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

