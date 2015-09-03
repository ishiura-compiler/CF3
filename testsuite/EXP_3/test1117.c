#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x56 = 6;
int64_t x118 = -1LL;
uint64_t x199 = 3555921LLU;
volatile uint16_t x252 = 2U;
volatile int64_t x292 = 3LL;
uint32_t x301 = 5482367U;
int32_t x317 = INT32_MAX;
int64_t x376 = 22LL;
volatile int32_t t8 = 4905;
uint8_t x412 = 0U;
int64_t x505 = INT64_MIN;
uint16_t x556 = 30U;
int64_t x566 = -1LL;
static volatile uint16_t x634 = 28U;
static volatile uint64_t x822 = UINT64_MAX;
uint8_t x855 = 94U;
int8_t x856 = 0;
int32_t x911 = 253213144;
volatile uint16_t x977 = 3067U;
volatile int8_t x979 = 0;
static volatile int64_t x1105 = INT64_MIN;
int64_t x1117 = -1LL;
static int16_t x1119 = 964;
uint8_t x1120 = 6U;
int32_t t22 = 1046;
volatile uint16_t x1269 = 6082U;
volatile int32_t t23 = 31;
int64_t x1362 = INT64_MIN;
uint8_t x1364 = 1U;
static int64_t x1489 = -8497629827163LL;
volatile uint32_t x1491 = 693668U;
int8_t x1526 = INT8_MIN;
static uint32_t x1546 = 10022566U;
volatile int32_t t29 = -2899;
int16_t x1809 = -4;
volatile uint8_t x1836 = 3U;
uint16_t x1864 = 12U;
uint64_t t36 = 120348024399028LLU;
static volatile int8_t x1917 = INT8_MIN;
static uint16_t x1919 = 4661U;
static uint8_t x1960 = 3U;
int32_t x2073 = INT32_MIN;
static uint64_t x2075 = UINT64_MAX;
uint16_t x2125 = 3615U;
int64_t x2127 = 1LL;
volatile int32_t x2209 = -10759;
uint64_t x2212 = 0LLU;
int32_t x2217 = INT32_MIN;
volatile int64_t x2335 = INT64_MAX;
volatile uint8_t x2433 = 0U;
uint64_t x2434 = 187300862870707LLU;
uint16_t x2486 = 0U;
int8_t x2487 = 7;
uint32_t x2641 = UINT32_MAX;
static int8_t x2644 = 1;
int64_t x2695 = 4215547944717325355LL;
volatile int32_t t58 = -3336943;
uint8_t x2899 = 9U;
int16_t x2900 = 2;
int32_t x2977 = INT32_MIN;
int32_t x2978 = 4158613;
static uint64_t x3043 = UINT64_MAX;
uint64_t t67 = 3976886470LLU;
volatile uint32_t x3078 = UINT32_MAX;
uint16_t x3381 = 1U;
volatile int32_t t72 = 430741;
static volatile int64_t t73 = -4605965999021483956LL;
uint16_t x3541 = UINT16_MAX;
uint32_t x3543 = UINT32_MAX;
uint64_t x3609 = UINT64_MAX;
static uint8_t x3696 = 0U;
uint16_t x3904 = 7U;
volatile int16_t x3953 = 2193;
uint64_t x3956 = 0LLU;
static int32_t x4037 = -3314;
uint16_t x4039 = UINT16_MAX;
int32_t t84 = 5;
uint16_t x4180 = 11U;
uint16_t x4619 = 227U;
static uint16_t x4620 = 4U;
int32_t x4621 = INT32_MIN;
int16_t x4622 = -1;
volatile uint8_t x4705 = UINT8_MAX;
uint8_t x4708 = 1U;
uint8_t x4755 = 5U;
static volatile uint64_t x4770 = 10LLU;
static int8_t x4785 = 9;
uint32_t x4877 = UINT32_MAX;
int32_t x4880 = 28;


void f0(void) {
	uint16_t x53 = 3232U;
	static int8_t x54 = INT8_MIN;
	volatile uint64_t x55 = UINT64_MAX;
	static volatile uint64_t t0 = 4354LLU;

	t0 = ((x53==x54)|(x55>>x56));

	if (t0 != 288230376151711743LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x117 = INT16_MIN;
	int32_t x119 = 1;
	static uint16_t x120 = 3U;
	volatile int32_t t1 = -188677;

	t1 = ((x117==x118)|(x119>>x120));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x197 = 2U;
	int32_t x198 = -1;
	uint8_t x200 = 0U;
	volatile uint64_t t2 = 51855LLU;

	t2 = ((x197==x198)|(x199>>x200));

	if (t2 != 3555921LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x249 = -1;
	int8_t x250 = INT8_MIN;
	uint32_t x251 = 2U;
	volatile uint32_t t3 = 13005U;

	t3 = ((x249==x250)|(x251>>x252));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x289 = INT8_MIN;
	int16_t x290 = -1;
	uint8_t x291 = 9U;
	int32_t t4 = 148024;

	t4 = ((x289==x290)|(x291>>x292));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x302 = 366434452903785LL;
	uint16_t x303 = UINT16_MAX;
	int16_t x304 = 4;
	int32_t t5 = 440;

	t5 = ((x301==x302)|(x303>>x304));

	if (t5 != 4095) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x318 = INT32_MIN;
	uint16_t x319 = 7U;
	static uint8_t x320 = 0U;
	int32_t t6 = -29;

	t6 = ((x317==x318)|(x319>>x320));

	if (t6 != 7) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint64_t x345 = UINT64_MAX;
	int32_t x346 = INT32_MIN;
	int8_t x347 = 8;
	static uint8_t x348 = 1U;
	int32_t t7 = 984142868;

	t7 = ((x345==x346)|(x347>>x348));

	if (t7 != 4) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x373 = INT64_MIN;
	int8_t x374 = INT8_MIN;
	int8_t x375 = INT8_MAX;

	t8 = ((x373==x374)|(x375>>x376));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x409 = INT8_MIN;
	uint16_t x410 = 1336U;
	volatile uint64_t x411 = 26125143169607660LLU;
	volatile uint64_t t9 = 2046788519172421LLU;

	t9 = ((x409==x410)|(x411>>x412));

	if (t9 != 26125143169607660LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x417 = 142986835U;
	int8_t x418 = INT8_MAX;
	int32_t x419 = INT32_MAX;
	static int16_t x420 = 7;
	volatile int32_t t10 = 0;

	t10 = ((x417==x418)|(x419>>x420));

	if (t10 != 16777215) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x506 = UINT8_MAX;
	static int16_t x507 = 0;
	volatile int32_t x508 = 1;
	volatile int32_t t11 = -1194424;

	t11 = ((x505==x506)|(x507>>x508));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x553 = UINT16_MAX;
	static volatile int32_t x554 = INT32_MIN;
	volatile uint64_t x555 = UINT64_MAX;
	volatile uint64_t t12 = 11050910590LLU;

	t12 = ((x553==x554)|(x555>>x556));

	if (t12 != 17179869183LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x565 = 0;
	uint64_t x567 = 1507968637378246LLU;
	static uint16_t x568 = 22U;
	uint64_t t13 = 3LLU;

	t13 = ((x565==x566)|(x567>>x568));

	if (t13 != 359527739LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x633 = INT16_MIN;
	int32_t x635 = INT32_MAX;
	volatile uint8_t x636 = 0U;
	volatile int32_t t14 = INT32_MAX;

	t14 = ((x633==x634)|(x635>>x636));

	if (t14 != INT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x681 = -1;
	volatile int8_t x682 = 0;
	int8_t x683 = 5;
	int8_t x684 = 2;
	static volatile int32_t t15 = 0;

	t15 = ((x681==x682)|(x683>>x684));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x821 = -1;
	int64_t x823 = 244621041670650LL;
	uint8_t x824 = 8U;
	int64_t t16 = -354772694LL;

	t16 = ((x821==x822)|(x823>>x824));

	if (t16 != 955550944025LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x825 = -1;
	static uint16_t x826 = UINT16_MAX;
	volatile uint16_t x827 = 0U;
	uint16_t x828 = 4U;
	int32_t t17 = 119;

	t17 = ((x825==x826)|(x827>>x828));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x853 = INT64_MAX;
	uint32_t x854 = 10814200U;
	int32_t t18 = 345;

	t18 = ((x853==x854)|(x855>>x856));

	if (t18 != 94) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x909 = INT8_MAX;
	int64_t x910 = -1LL;
	uint16_t x912 = 3U;
	static int32_t t19 = 25576121;

	t19 = ((x909==x910)|(x911>>x912));

	if (t19 != 31651643) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x978 = UINT64_MAX;
	uint16_t x980 = 7U;
	static int32_t t20 = -3025812;

	t20 = ((x977==x978)|(x979>>x980));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1106 = 324;
	static volatile int32_t x1107 = 38433900;
	uint16_t x1108 = 29U;
	volatile int32_t t21 = 234674;

	t21 = ((x1105==x1106)|(x1107>>x1108));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1118 = 167374998LLU;

	t22 = ((x1117==x1118)|(x1119>>x1120));

	if (t22 != 15) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x1270 = INT16_MIN;
	uint16_t x1271 = UINT16_MAX;
	uint32_t x1272 = 26U;

	t23 = ((x1269==x1270)|(x1271>>x1272));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x1333 = UINT32_MAX;
	static volatile int64_t x1334 = INT64_MIN;
	uint32_t x1335 = 2109661524U;
	volatile int8_t x1336 = 22;
	volatile uint32_t t24 = 1556U;

	t24 = ((x1333==x1334)|(x1335>>x1336));

	if (t24 != 502U) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x1361 = -1;
	uint32_t x1363 = 461429315U;
	static uint32_t t25 = 976853492U;

	t25 = ((x1361==x1362)|(x1363>>x1364));

	if (t25 != 230714657U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x1409 = INT16_MAX;
	uint8_t x1410 = 0U;
	uint64_t x1411 = 161794087LLU;
	volatile uint16_t x1412 = 2U;
	volatile uint64_t t26 = 676LLU;

	t26 = ((x1409==x1410)|(x1411>>x1412));

	if (t26 != 40448521LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1490 = INT32_MIN;
	int8_t x1492 = 1;
	static volatile uint32_t t27 = 241327U;

	t27 = ((x1489==x1490)|(x1491>>x1492));

	if (t27 != 346834U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x1525 = 306;
	static volatile uint16_t x1527 = UINT16_MAX;
	int64_t x1528 = 0LL;
	volatile int32_t t28 = -594;

	t28 = ((x1525==x1526)|(x1527>>x1528));

	if (t28 != 65535) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x1545 = INT32_MIN;
	uint16_t x1547 = 17U;
	volatile uint8_t x1548 = 0U;

	t29 = ((x1545==x1546)|(x1547>>x1548));

	if (t29 != 17) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int16_t x1593 = -1;
	static int16_t x1594 = INT16_MIN;
	uint64_t x1595 = 1539152LLU;
	int8_t x1596 = 0;
	volatile uint64_t t30 = 12180LLU;

	t30 = ((x1593==x1594)|(x1595>>x1596));

	if (t30 != 1539152LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1637 = -528;
	int8_t x1638 = INT8_MIN;
	int64_t x1639 = 3486417994981112LL;
	int8_t x1640 = 0;
	int64_t t31 = 4608291061415477LL;

	t31 = ((x1637==x1638)|(x1639>>x1640));

	if (t31 != 3486417994981112LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x1697 = INT32_MAX;
	int16_t x1698 = -1;
	int32_t x1699 = 4570837;
	int16_t x1700 = 1;
	int32_t t32 = -196;

	t32 = ((x1697==x1698)|(x1699>>x1700));

	if (t32 != 2285418) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x1733 = 212;
	volatile int32_t x1734 = INT32_MIN;
	uint16_t x1735 = UINT16_MAX;
	static uint64_t x1736 = 6LLU;
	int32_t t33 = 16857498;

	t33 = ((x1733==x1734)|(x1735>>x1736));

	if (t33 != 1023) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x1810 = INT8_MIN;
	static int64_t x1811 = INT64_MAX;
	static volatile int16_t x1812 = 3;
	int64_t t34 = 19976599555319243LL;

	t34 = ((x1809==x1810)|(x1811>>x1812));

	if (t34 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x1833 = 257U;
	uint16_t x1834 = 4U;
	int16_t x1835 = INT16_MAX;
	int32_t t35 = -13157161;

	t35 = ((x1833==x1834)|(x1835>>x1836));

	if (t35 != 4095) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1861 = INT32_MIN;
	int8_t x1862 = INT8_MIN;
	static volatile uint64_t x1863 = UINT64_MAX;

	t36 = ((x1861==x1862)|(x1863>>x1864));

	if (t36 != 4503599627370495LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x1913 = UINT32_MAX;
	int64_t x1914 = INT64_MAX;
	uint8_t x1915 = UINT8_MAX;
	volatile int16_t x1916 = 0;
	static int32_t t37 = -26;

	t37 = ((x1913==x1914)|(x1915>>x1916));

	if (t37 != 255) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1918 = 0;
	int8_t x1920 = 4;
	volatile int32_t t38 = 3;

	t38 = ((x1917==x1918)|(x1919>>x1920));

	if (t38 != 291) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1957 = -1;
	static int8_t x1958 = INT8_MIN;
	uint64_t x1959 = 863831540508554574LLU;
	volatile uint64_t t39 = 953LLU;

	t39 = ((x1957==x1958)|(x1959>>x1960));

	if (t39 != 107978942563569321LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x2009 = 114;
	int16_t x2010 = INT16_MIN;
	volatile int8_t x2011 = INT8_MAX;
	uint8_t x2012 = 0U;
	static int32_t t40 = -720097;

	t40 = ((x2009==x2010)|(x2011>>x2012));

	if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x2013 = 76517757856268609LLU;
	int16_t x2014 = INT16_MIN;
	volatile uint32_t x2015 = 479U;
	uint16_t x2016 = 5U;
	static volatile uint32_t t41 = 0U;

	t41 = ((x2013==x2014)|(x2015>>x2016));

	if (t41 != 14U) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x2041 = UINT8_MAX;
	static uint64_t x2042 = 2106409532118LLU;
	static uint32_t x2043 = UINT32_MAX;
	uint8_t x2044 = 7U;
	uint32_t t42 = 7167U;

	t42 = ((x2041==x2042)|(x2043>>x2044));

	if (t42 != 33554431U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x2074 = INT64_MIN;
	static int8_t x2076 = 0;
	uint64_t t43 = UINT64_MAX;

	t43 = ((x2073==x2074)|(x2075>>x2076));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x2126 = UINT16_MAX;
	uint16_t x2128 = 21U;
	volatile int64_t t44 = 7345602932101LL;

	t44 = ((x2125==x2126)|(x2127>>x2128));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x2197 = 1;
	volatile uint32_t x2198 = UINT32_MAX;
	uint64_t x2199 = 7021563954289LLU;
	uint8_t x2200 = 5U;
	uint64_t t45 = 14613622885LLU;

	t45 = ((x2197==x2198)|(x2199>>x2200));

	if (t45 != 219423873571LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x2210 = 363727733835109LL;
	uint8_t x2211 = UINT8_MAX;
	int32_t t46 = 148;

	t46 = ((x2209==x2210)|(x2211>>x2212));

	if (t46 != 255) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x2218 = 17U;
	static int64_t x2219 = INT64_MAX;
	static uint8_t x2220 = 28U;
	volatile int64_t t47 = 1673079LL;

	t47 = ((x2217==x2218)|(x2219>>x2220));

	if (t47 != 34359738367LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x2265 = 49U;
	volatile int32_t x2266 = INT32_MAX;
	int32_t x2267 = 1;
	static uint8_t x2268 = 23U;
	volatile int32_t t48 = 14621292;

	t48 = ((x2265==x2266)|(x2267>>x2268));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x2285 = 356U;
	int8_t x2286 = 53;
	volatile uint64_t x2287 = 208560298LLU;
	int64_t x2288 = 0LL;
	volatile uint64_t t49 = 116476LLU;

	t49 = ((x2285==x2286)|(x2287>>x2288));

	if (t49 != 208560298LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x2333 = INT32_MIN;
	int64_t x2334 = -39946418357801LL;
	uint32_t x2336 = 14U;
	int64_t t50 = 11LL;

	t50 = ((x2333==x2334)|(x2335>>x2336));

	if (t50 != 562949953421311LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x2435 = UINT32_MAX;
	static volatile uint8_t x2436 = 31U;
	volatile uint32_t t51 = 248665U;

	t51 = ((x2433==x2434)|(x2435>>x2436));

	if (t51 != 1U) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint32_t x2485 = 2004U;
	volatile uint8_t x2488 = 0U;
	volatile int32_t t52 = -245920;

	t52 = ((x2485==x2486)|(x2487>>x2488));

	if (t52 != 7) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x2537 = 0;
	int16_t x2538 = INT16_MIN;
	volatile uint16_t x2539 = 3430U;
	static int16_t x2540 = 1;
	volatile int32_t t53 = 920180160;

	t53 = ((x2537==x2538)|(x2539>>x2540));

	if (t53 != 1715) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x2605 = 41865836LLU;
	static int8_t x2606 = INT8_MAX;
	uint8_t x2607 = 12U;
	static int8_t x2608 = 23;
	volatile int32_t t54 = -2;

	t54 = ((x2605==x2606)|(x2607>>x2608));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x2642 = INT64_MIN;
	static int16_t x2643 = INT16_MAX;
	static volatile int32_t t55 = -21415023;

	t55 = ((x2641==x2642)|(x2643>>x2644));

	if (t55 != 16383) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x2693 = 16U;
	static volatile uint64_t x2694 = 11271527520999118LLU;
	int32_t x2696 = 3;
	int64_t t56 = -6423LL;

	t56 = ((x2693==x2694)|(x2695>>x2696));

	if (t56 != 526943493089665669LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x2725 = INT16_MIN;
	int32_t x2726 = INT32_MIN;
	volatile uint64_t x2727 = 13165830392873541LLU;
	int8_t x2728 = 0;
	static uint64_t t57 = 65323984461150387LLU;

	t57 = ((x2725==x2726)|(x2727>>x2728));

	if (t57 != 13165830392873541LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x2789 = INT32_MIN;
	int32_t x2790 = -1;
	static int32_t x2791 = INT32_MAX;
	uint16_t x2792 = 2U;

	t58 = ((x2789==x2790)|(x2791>>x2792));

	if (t58 != 536870911) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x2793 = INT16_MIN;
	uint8_t x2794 = UINT8_MAX;
	int8_t x2795 = 16;
	uint64_t x2796 = 30LLU;
	volatile int32_t t59 = -3;

	t59 = ((x2793==x2794)|(x2795>>x2796));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x2805 = 491103351157436985LLU;
	uint16_t x2806 = UINT16_MAX;
	uint16_t x2807 = 3U;
	static int32_t x2808 = 3;
	volatile int32_t t60 = 3367708;

	t60 = ((x2805==x2806)|(x2807>>x2808));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x2845 = -1;
	static uint8_t x2846 = 0U;
	volatile uint32_t x2847 = 1886341082U;
	volatile int8_t x2848 = 14;
	uint32_t t61 = 15611572U;

	t61 = ((x2845==x2846)|(x2847>>x2848));

	if (t61 != 115133U) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x2861 = 0LL;
	uint16_t x2862 = UINT16_MAX;
	int8_t x2863 = 0;
	static uint8_t x2864 = 1U;
	static volatile int32_t t62 = 3763;

	t62 = ((x2861==x2862)|(x2863>>x2864));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x2897 = -1LL;
	int8_t x2898 = INT8_MAX;
	volatile int32_t t63 = 8051;

	t63 = ((x2897==x2898)|(x2899>>x2900));

	if (t63 != 2) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x2913 = 22U;
	int32_t x2914 = -1;
	static int64_t x2915 = 170781237547LL;
	static int8_t x2916 = 1;
	static volatile int64_t t64 = 1104027906LL;

	t64 = ((x2913==x2914)|(x2915>>x2916));

	if (t64 != 85390618773LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x2917 = 6897U;
	static uint64_t x2918 = 78184412LLU;
	uint16_t x2919 = 7327U;
	volatile int8_t x2920 = 0;
	volatile int32_t t65 = 673451;

	t65 = ((x2917==x2918)|(x2919>>x2920));

	if (t65 != 7327) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x2979 = 1U;
	int16_t x2980 = 19;
	volatile int32_t t66 = -6;

	t66 = ((x2977==x2978)|(x2979>>x2980));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x3041 = INT32_MIN;
	int8_t x3042 = INT8_MAX;
	volatile uint16_t x3044 = 3U;

	t67 = ((x3041==x3042)|(x3043>>x3044));

	if (t67 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x3077 = -1LL;
	uint32_t x3079 = UINT32_MAX;
	uint8_t x3080 = 1U;
	uint32_t t68 = 1U;

	t68 = ((x3077==x3078)|(x3079>>x3080));

	if (t68 != 2147483647U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x3257 = INT64_MAX;
	int16_t x3258 = -1;
	static uint32_t x3259 = UINT32_MAX;
	uint8_t x3260 = 11U;
	static volatile uint32_t t69 = 25317U;

	t69 = ((x3257==x3258)|(x3259>>x3260));

	if (t69 != 2097151U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x3353 = 49;
	uint32_t x3354 = 2U;
	uint16_t x3355 = 11534U;
	static uint8_t x3356 = 2U;
	int32_t t70 = 1144;

	t70 = ((x3353==x3354)|(x3355>>x3356));

	if (t70 != 2883) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x3382 = INT8_MIN;
	int64_t x3383 = INT64_MAX;
	uint8_t x3384 = 0U;
	int64_t t71 = INT64_MAX;

	t71 = ((x3381==x3382)|(x3383>>x3384));

	if (t71 != INT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x3389 = 67LLU;
	static uint16_t x3390 = 20108U;
	uint16_t x3391 = 30971U;
	volatile int32_t x3392 = 27;

	t72 = ((x3389==x3390)|(x3391>>x3392));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x3409 = INT64_MIN;
	uint8_t x3410 = 1U;
	int64_t x3411 = 101952LL;
	volatile int16_t x3412 = 1;

	t73 = ((x3409==x3410)|(x3411>>x3412));

	if (t73 != 50976LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x3417 = -1;
	volatile int8_t x3418 = -56;
	int8_t x3419 = INT8_MAX;
	uint32_t x3420 = 3U;
	int32_t t74 = -45529793;

	t74 = ((x3417==x3418)|(x3419>>x3420));

	if (t74 != 15) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x3542 = 39;
	volatile uint8_t x3544 = 7U;
	volatile uint32_t t75 = 7U;

	t75 = ((x3541==x3542)|(x3543>>x3544));

	if (t75 != 33554431U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x3610 = INT64_MIN;
	uint64_t x3611 = 0LLU;
	volatile uint32_t x3612 = 5U;
	volatile uint64_t t76 = 30051166328LLU;

	t76 = ((x3609==x3610)|(x3611>>x3612));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x3681 = UINT64_MAX;
	volatile uint8_t x3682 = UINT8_MAX;
	static uint32_t x3683 = 2635U;
	uint8_t x3684 = 7U;
	uint32_t t77 = 0U;

	t77 = ((x3681==x3682)|(x3683>>x3684));

	if (t77 != 20U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x3693 = INT16_MAX;
	uint64_t x3694 = 485738872282107902LLU;
	uint32_t x3695 = 12U;
	uint32_t t78 = 28746676U;

	t78 = ((x3693==x3694)|(x3695>>x3696));

	if (t78 != 12U) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x3793 = UINT16_MAX;
	int16_t x3794 = -1;
	int8_t x3795 = 1;
	static volatile int32_t x3796 = 3;
	volatile int32_t t79 = 42910933;

	t79 = ((x3793==x3794)|(x3795>>x3796));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x3889 = 18U;
	int32_t x3890 = 20;
	volatile int16_t x3891 = INT16_MAX;
	int32_t x3892 = 0;
	int32_t t80 = -71818997;

	t80 = ((x3889==x3890)|(x3891>>x3892));

	if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x3901 = -55642661;
	int64_t x3902 = 115LL;
	int16_t x3903 = 193;
	int32_t t81 = 1;

	t81 = ((x3901==x3902)|(x3903>>x3904));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x3921 = INT64_MIN;
	volatile int32_t x3922 = -2282;
	int16_t x3923 = 6978;
	uint8_t x3924 = 5U;
	int32_t t82 = 142;

	t82 = ((x3921==x3922)|(x3923>>x3924));

	if (t82 != 218) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x3954 = UINT16_MAX;
	static uint64_t x3955 = 253779062LLU;
	volatile uint64_t t83 = 1192131211740974525LLU;

	t83 = ((x3953==x3954)|(x3955>>x3956));

	if (t83 != 253779062LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x4038 = INT32_MAX;
	static int8_t x4040 = 23;

	t84 = ((x4037==x4038)|(x4039>>x4040));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x4177 = 23U;
	uint8_t x4178 = 12U;
	static int8_t x4179 = 62;
	static int32_t t85 = -900789;

	t85 = ((x4177==x4178)|(x4179>>x4180));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x4353 = 0;
	static int32_t x4354 = INT32_MIN;
	volatile int8_t x4355 = INT8_MAX;
	uint32_t x4356 = 1U;
	volatile int32_t t86 = -46200;

	t86 = ((x4353==x4354)|(x4355>>x4356));

	if (t86 != 63) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x4557 = INT16_MIN;
	static int64_t x4558 = INT64_MIN;
	int32_t x4559 = INT32_MAX;
	volatile uint32_t x4560 = 0U;
	volatile int32_t t87 = INT32_MAX;

	t87 = ((x4557==x4558)|(x4559>>x4560));

	if (t87 != INT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x4569 = UINT64_MAX;
	static int64_t x4570 = INT64_MAX;
	int64_t x4571 = INT64_MAX;
	int32_t x4572 = 1;
	volatile int64_t t88 = -245852719682468LL;

	t88 = ((x4569==x4570)|(x4571>>x4572));

	if (t88 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x4617 = INT8_MIN;
	volatile int64_t x4618 = 28LL;
	static int32_t t89 = 303811;

	t89 = ((x4617==x4618)|(x4619>>x4620));

	if (t89 != 14) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x4623 = 202831298U;
	volatile int8_t x4624 = 6;
	static uint32_t t90 = 4U;

	t90 = ((x4621==x4622)|(x4623>>x4624));

	if (t90 != 3169239U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x4706 = UINT32_MAX;
	volatile uint8_t x4707 = UINT8_MAX;
	int32_t t91 = -15;

	t91 = ((x4705==x4706)|(x4707>>x4708));

	if (t91 != 127) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x4713 = -3;
	int8_t x4714 = -1;
	uint16_t x4715 = UINT16_MAX;
	uint8_t x4716 = 6U;
	int32_t t92 = 5;

	t92 = ((x4713==x4714)|(x4715>>x4716));

	if (t92 != 1023) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x4753 = INT64_MAX;
	static uint16_t x4754 = UINT16_MAX;
	uint8_t x4756 = 14U;
	volatile int32_t t93 = -123106641;

	t93 = ((x4753==x4754)|(x4755>>x4756));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x4769 = INT8_MIN;
	int32_t x4771 = 39707933;
	int64_t x4772 = 4LL;
	int32_t t94 = 6;

	t94 = ((x4769==x4770)|(x4771>>x4772));

	if (t94 != 2481745) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x4781 = UINT64_MAX;
	volatile uint8_t x4782 = 2U;
	volatile int64_t x4783 = 2721646632LL;
	volatile uint32_t x4784 = 33U;
	static int64_t t95 = -13552370LL;

	t95 = ((x4781==x4782)|(x4783>>x4784));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x4786 = INT64_MIN;
	int32_t x4787 = INT32_MAX;
	uint8_t x4788 = 5U;
	int32_t t96 = -3733;

	t96 = ((x4785==x4786)|(x4787>>x4788));

	if (t96 != 67108863) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x4878 = 115069592U;
	uint16_t x4879 = 0U;
	int32_t t97 = 1;

	t97 = ((x4877==x4878)|(x4879>>x4880));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x4925 = INT32_MAX;
	uint16_t x4926 = 1930U;
	static uint64_t x4927 = 393245869097137LLU;
	uint8_t x4928 = 45U;
	uint64_t t98 = 401458945LLU;

	t98 = ((x4925==x4926)|(x4927>>x4928));

	if (t98 != 11LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x4985 = 12;
	int16_t x4986 = INT16_MIN;
	uint16_t x4987 = 28883U;
	static uint16_t x4988 = 1U;
	static int32_t t99 = -685165241;

	t99 = ((x4985==x4986)|(x4987>>x4988));

	if (t99 != 14441) { NG(); } else { ; }
	
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

