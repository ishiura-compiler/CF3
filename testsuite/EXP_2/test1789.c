
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x127 = UINT8_MAX;
static uint16_t x128 = 1U;
volatile int32_t t1 = -13;
static uint32_t x220 = 10U;
volatile uint8_t x404 = 10U;
int32_t t5 = 1;
int64_t x495 = INT64_MIN;
uint16_t x501 = 1269U;
uint32_t x503 = 62043U;
int32_t x531 = INT32_MIN;
uint64_t t12 = 1320980375LLU;
uint8_t x704 = 14U;
volatile uint8_t x779 = 2U;
static int8_t x801 = 18;
uint8_t x802 = UINT8_MAX;
static int16_t x803 = INT16_MIN;
volatile int32_t t17 = -536;
volatile int8_t x907 = INT8_MAX;
uint32_t x917 = 439U;
volatile uint32_t t19 = 3U;
int16_t x973 = 3;
int32_t t21 = -58;
static uint16_t x984 = 27U;
uint8_t x1007 = UINT8_MAX;
uint8_t x1008 = 23U;
static uint8_t x1048 = 2U;
volatile int32_t x1063 = 8346;
volatile int32_t t28 = 0;
int16_t x1419 = 766;
static int8_t x1421 = 0;
int16_t x1424 = 11;
int32_t t31 = 3;
int16_t x1580 = 16;
static uint8_t x1737 = 13U;
volatile int32_t t35 = -72001829;
static int16_t x1825 = 5119;
uint16_t x1828 = 6U;
int16_t x1891 = INT16_MIN;
volatile uint64_t x1892 = 53LLU;
static volatile uint64_t t41 = 30569100008LLU;
volatile uint64_t x1957 = 365027202LLU;
volatile int32_t t43 = -3650;
int32_t x2010 = INT32_MAX;
volatile uint32_t x2081 = 1107704U;
int32_t x2083 = -961436;
uint8_t x2084 = 14U;
static volatile int32_t t47 = -425;
int64_t x2099 = INT64_MIN;
int64_t x2115 = INT64_MAX;
static volatile int64_t t50 = 1462257LL;
uint16_t x2197 = 0U;
volatile uint64_t x2198 = UINT64_MAX;
int32_t t52 = -12408;
volatile uint16_t x2364 = 7U;
static volatile uint64_t t56 = 1674126498764270LLU;
int64_t x2367 = INT64_MIN;
int16_t x2558 = -810;
uint8_t x2560 = 3U;
static uint8_t x2578 = UINT8_MAX;
uint64_t x2693 = 45111845372LLU;
uint64_t x2826 = 2693LLU;
int64_t x2827 = -902270746758621500LL;
int8_t x2846 = -1;
uint8_t x2848 = 1U;
uint8_t x3088 = 0U;
uint32_t x3133 = UINT32_MAX;
int64_t x3136 = 12LL;
uint64_t x3435 = 23165824777LLU;
uint8_t x3480 = 2U;
static uint32_t x3577 = 451U;
int16_t x3660 = 14;
static int8_t x3736 = 20;
volatile uint8_t x3868 = 1U;
static uint8_t x3913 = 4U;
int16_t x3914 = 508;
static int8_t x3928 = 1;
static int64_t x3934 = INT64_MAX;
uint64_t x3978 = 5125225507237LLU;
static uint8_t x4021 = 126U;
static uint8_t x4028 = 4U;
uint64_t x4049 = UINT64_MAX;
volatile int64_t x4058 = 136364LL;
uint16_t x4059 = 37U;
volatile int64_t t92 = 453447205692LL;
uint8_t x4081 = 7U;
int64_t x4134 = INT64_MAX;
static volatile int8_t x4135 = INT8_MIN;
int8_t x4136 = 1;
static uint8_t x4164 = 1U;
static volatile int32_t x4178 = -7;
static int16_t x4282 = 0;
static int64_t x4283 = -1LL;
int8_t x4424 = 2;
uint8_t x4456 = 9U;
volatile int64_t x4589 = 0LL;
volatile int32_t x4687 = INT32_MAX;
volatile int32_t t103 = 0;
int8_t x4710 = -1;
uint16_t x4732 = 21U;
volatile uint16_t x4851 = UINT16_MAX;
uint16_t x4901 = UINT16_MAX;
int64_t x4977 = 4073303LL;
int64_t x4979 = 67121719346216LL;
volatile int16_t x4980 = 46;
static volatile int64_t t110 = 863819900716387392LL;
uint32_t x5030 = 1133U;
int32_t x5103 = INT32_MAX;
static uint8_t x5212 = 7U;
volatile uint64_t t114 = 6LLU;
int32_t t115 = 18121;
int16_t x5349 = 3;
int16_t x5351 = INT16_MIN;
uint8_t x5364 = 2U;
uint64_t x5497 = 2865566599179488410LLU;
static volatile uint32_t x5499 = 1911506U;
static int8_t x5518 = INT8_MAX;
uint8_t x5520 = 0U;
int32_t t124 = 2;
uint32_t x5529 = UINT32_MAX;
volatile uint8_t x5532 = 1U;
uint16_t x5544 = 3U;
uint32_t t127 = 0U;
uint16_t x5772 = 7U;
int64_t x5778 = INT64_MAX;
static uint8_t x5780 = 2U;
static int8_t x5840 = 0;
int32_t t133 = -368;
uint64_t t134 = 561581079928LLU;
volatile int16_t x5906 = -1;
int8_t x5908 = 22;
volatile int32_t x5966 = INT32_MIN;
uint8_t x5974 = UINT8_MAX;
int16_t x6070 = INT16_MAX;
volatile uint8_t x6072 = 1U;
volatile uint8_t x6077 = 76U;
int32_t t140 = 3349;
volatile uint16_t x6256 = 30U;
uint32_t x6321 = 17U;
static uint64_t x6323 = UINT64_MAX;
int8_t x6324 = 1;
volatile int64_t t143 = -8200644LL;
int16_t x6449 = INT16_MAX;
static uint32_t x6505 = 0U;
uint8_t x6508 = 1U;
int32_t t147 = 62335;
static int8_t x6540 = 5;
int8_t x6678 = INT8_MAX;
static volatile int32_t t151 = -120;
static uint16_t x6780 = 0U;
uint8_t x6787 = UINT8_MAX;
static int16_t x6788 = 0;
volatile uint64_t x6897 = UINT64_MAX;
volatile int32_t x6898 = INT32_MAX;
int32_t x6899 = INT32_MIN;
uint32_t x6909 = UINT32_MAX;
static uint16_t x6911 = 0U;
static uint32_t t156 = UINT32_MAX;
volatile int32_t t157 = 3324;
uint16_t x6960 = 1U;
volatile uint32_t t160 = 2512334U;
uint8_t x7012 = 18U;
static volatile int32_t t161 = -109997258;
static int64_t x7163 = -1LL;
static uint8_t x7189 = 58U;
volatile int64_t x7206 = -1LL;
uint8_t x7208 = 17U;
uint64_t x7287 = UINT64_MAX;
volatile int64_t x7381 = 1LL;
int64_t t168 = -1673834220735494LL;
int32_t t170 = 7130603;
int8_t x7441 = INT8_MAX;
static int32_t t171 = 0;
static int32_t t172 = 78127008;
int16_t x7704 = 2;
int32_t t174 = -208342494;
static uint64_t x7789 = 1LLU;
uint16_t x7792 = 41U;
uint16_t x7934 = 1756U;
int16_t x8116 = 5;
uint8_t x8242 = 112U;
uint64_t x8289 = 11709LLU;
static int16_t x8292 = 1;
uint16_t x8322 = 13U;
uint32_t x8323 = 67924U;
static volatile uint32_t t184 = 0U;
static int8_t x8374 = -37;
volatile int32_t t185 = -7;
uint32_t x8493 = 3U;
int16_t x8578 = -1;
int64_t x8579 = INT64_MIN;
static uint32_t x8609 = UINT32_MAX;
volatile uint32_t x8635 = 110084552U;
uint64_t x8636 = 2LLU;
uint16_t x8876 = 2U;
int32_t x9077 = INT32_MAX;
int16_t x9130 = INT16_MAX;
volatile int16_t x9131 = -1;
int8_t x9132 = 0;
static int64_t x9139 = -1LL;
static int64_t x9149 = INT64_MAX;


void f0(void) {
    	uint64_t x125 = 2LLU;
	uint64_t x126 = UINT64_MAX;
	static uint64_t t0 = 159486272941LLU;

    t0 = ((x125-(x126<=x127))>>x128);

    if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x161 = UINT8_MAX;
	int16_t x162 = -1;
	volatile uint64_t x163 = UINT64_MAX;
	uint8_t x164 = 25U;

    t1 = ((x161-(x162<=x163))>>x164);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x165 = INT8_MAX;
	static volatile int32_t x166 = INT32_MIN;
	int32_t x167 = -1;
	int16_t x168 = 7;
	int32_t t2 = 5;

    t2 = ((x165-(x166<=x167))>>x168);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x217 = UINT64_MAX;
	volatile int8_t x218 = -1;
	int64_t x219 = INT64_MIN;
	volatile uint64_t t3 = 5338849LLU;

    t3 = ((x217-(x218<=x219))>>x220);

    if (t3 != 18014398509481983LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x401 = 32;
	uint8_t x402 = 16U;
	uint32_t x403 = 31060824U;
	volatile int32_t t4 = 36285131;

    t4 = ((x401-(x402<=x403))>>x404);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x405 = INT32_MAX;
	uint16_t x406 = 31722U;
	uint64_t x407 = UINT64_MAX;
	uint8_t x408 = 5U;

    t5 = ((x405-(x406<=x407))>>x408);

    if (t5 != 67108863) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint32_t x445 = UINT32_MAX;
	int16_t x446 = INT16_MIN;
	int32_t x447 = INT32_MIN;
	uint8_t x448 = 0U;
	uint32_t t6 = UINT32_MAX;

    t6 = ((x445-(x446<=x447))>>x448);

    if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x465 = UINT64_MAX;
	static int8_t x466 = 7;
	int16_t x467 = INT16_MIN;
	volatile uint16_t x468 = 7U;
	uint64_t t7 = 1LLU;

    t7 = ((x465-(x466<=x467))>>x468);

    if (t7 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x493 = 1U;
	volatile int8_t x494 = INT8_MIN;
	uint8_t x496 = 6U;
	int32_t t8 = 238598810;

    t8 = ((x493-(x494<=x495))>>x496);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x502 = INT8_MAX;
	int16_t x504 = 1;
	static int32_t t9 = 5991;

    t9 = ((x501-(x502<=x503))>>x504);

    if (t9 != 634) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x529 = 152411LLU;
	int64_t x530 = 107920737837921063LL;
	static volatile int64_t x532 = 31LL;
	uint64_t t10 = 144761458078601LLU;

    t10 = ((x529-(x530<=x531))>>x532);

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x549 = 21679119610472LL;
	volatile uint64_t x550 = UINT64_MAX;
	static int32_t x551 = -1;
	uint8_t x552 = 24U;
	int64_t t11 = -2LL;

    t11 = ((x549-(x550<=x551))>>x552);

    if (t11 != 1292176LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x553 = 57LLU;
	int8_t x554 = -1;
	int8_t x555 = INT8_MIN;
	uint16_t x556 = 2U;

    t12 = ((x553-(x554<=x555))>>x556);

    if (t12 != 14LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint64_t x685 = UINT64_MAX;
	uint16_t x686 = UINT16_MAX;
	uint32_t x687 = 1300451U;
	static volatile uint64_t x688 = 55LLU;
	uint64_t t13 = 736197LLU;

    t13 = ((x685-(x686<=x687))>>x688);

    if (t13 != 511LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x701 = UINT8_MAX;
	static int32_t x702 = INT32_MAX;
	static volatile uint16_t x703 = 1468U;
	volatile int32_t t14 = -9625;

    t14 = ((x701-(x702<=x703))>>x704);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint32_t x777 = UINT32_MAX;
	int64_t x778 = -1LL;
	uint8_t x780 = 1U;
	volatile uint32_t t15 = 496U;

    t15 = ((x777-(x778<=x779))>>x780);

    if (t15 != 2147483647U) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint32_t x785 = 448198U;
	uint64_t x786 = 4669535295039147LLU;
	uint64_t x787 = UINT64_MAX;
	static int8_t x788 = 3;
	volatile uint32_t t16 = 448U;

    t16 = ((x785-(x786<=x787))>>x788);

    if (t16 != 56024U) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x804 = 1;

    t17 = ((x801-(x802<=x803))>>x804);

    if (t17 != 9) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x905 = 3;
	uint16_t x906 = 3556U;
	volatile uint16_t x908 = 6U;
	volatile int32_t t18 = 2;

    t18 = ((x905-(x906<=x907))>>x908);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x918 = 567U;
	int32_t x919 = -1;
	int8_t x920 = 17;

    t19 = ((x917-(x918<=x919))>>x920);

    if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint16_t x957 = 20U;
	int32_t x958 = INT32_MIN;
	int8_t x959 = -16;
	static uint8_t x960 = 19U;
	volatile int32_t t20 = 3462;

    t20 = ((x957-(x958<=x959))>>x960);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x974 = UINT16_MAX;
	int64_t x975 = -1LL;
	uint8_t x976 = 28U;

    t21 = ((x973-(x974<=x975))>>x976);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint64_t x981 = 2028315512782937737LLU;
	int8_t x982 = INT8_MAX;
	volatile int8_t x983 = INT8_MIN;
	volatile uint64_t t22 = 1654128770804402337LLU;

    t22 = ((x981-(x982<=x983))>>x984);

    if (t22 != 15112128203LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint32_t x1001 = 0U;
	uint16_t x1002 = 831U;
	int8_t x1003 = INT8_MIN;
	static uint32_t x1004 = 4U;
	volatile uint32_t t23 = 3477U;

    t23 = ((x1001-(x1002<=x1003))>>x1004);

    if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x1005 = 4476441851598306LLU;
	int32_t x1006 = -1;
	uint64_t t24 = 864912262764725LLU;

    t24 = ((x1005-(x1006<=x1007))>>x1008);

    if (t24 != 533633452LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x1009 = 5U;
	static int8_t x1010 = INT8_MAX;
	int16_t x1011 = -458;
	uint16_t x1012 = 0U;
	volatile int32_t t25 = 16014779;

    t25 = ((x1009-(x1010<=x1011))>>x1012);

    if (t25 != 5) { NG(); } else { ; }
	
}

void f26(void) {
    	static int64_t x1025 = 212565272941146518LL;
	int32_t x1026 = -1;
	int32_t x1027 = INT32_MAX;
	int8_t x1028 = 1;
	int64_t t26 = 455099LL;

    t26 = ((x1025-(x1026<=x1027))>>x1028);

    if (t26 != 106282636470573258LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x1045 = 3U;
	uint16_t x1046 = 3437U;
	uint16_t x1047 = 1U;
	volatile int32_t t27 = -18;

    t27 = ((x1045-(x1046<=x1047))>>x1048);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x1061 = 0U;
	int32_t x1062 = 223666015;
	uint16_t x1064 = 2U;

    t28 = ((x1061-(x1062<=x1063))>>x1064);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint8_t x1105 = 92U;
	int64_t x1106 = INT64_MIN;
	int8_t x1107 = INT8_MIN;
	volatile uint8_t x1108 = 0U;
	static volatile int32_t t29 = 1969;

    t29 = ((x1105-(x1106<=x1107))>>x1108);

    if (t29 != 91) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x1417 = 2U;
	int32_t x1418 = INT32_MIN;
	uint64_t x1420 = 7LLU;
	int32_t t30 = -14903;

    t30 = ((x1417-(x1418<=x1419))>>x1420);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x1422 = -21550LL;
	static int16_t x1423 = INT16_MIN;

    t31 = ((x1421-(x1422<=x1423))>>x1424);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint32_t x1577 = UINT32_MAX;
	uint64_t x1578 = UINT64_MAX;
	static int16_t x1579 = INT16_MIN;
	volatile uint32_t t32 = 1U;

    t32 = ((x1577-(x1578<=x1579))>>x1580);

    if (t32 != 65535U) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x1657 = INT8_MAX;
	static int16_t x1658 = -1;
	static uint32_t x1659 = 6925337U;
	volatile int64_t x1660 = 7LL;
	static volatile int32_t t33 = -7777240;

    t33 = ((x1657-(x1658<=x1659))>>x1660);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x1677 = INT32_MAX;
	uint32_t x1678 = UINT32_MAX;
	int8_t x1679 = -13;
	static uint8_t x1680 = 29U;
	int32_t t34 = -34;

    t34 = ((x1677-(x1678<=x1679))>>x1680);

    if (t34 != 3) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x1738 = 199;
	int64_t x1739 = -2853503LL;
	int8_t x1740 = 0;

    t35 = ((x1737-(x1738<=x1739))>>x1740);

    if (t35 != 13) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x1793 = 10591;
	int16_t x1794 = INT16_MIN;
	int64_t x1795 = INT64_MAX;
	uint8_t x1796 = 0U;
	int32_t t36 = -4336257;

    t36 = ((x1793-(x1794<=x1795))>>x1796);

    if (t36 != 10590) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x1826 = INT64_MIN;
	int64_t x1827 = INT64_MIN;
	int32_t t37 = 642393512;

    t37 = ((x1825-(x1826<=x1827))>>x1828);

    if (t37 != 79) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x1829 = UINT64_MAX;
	volatile int8_t x1830 = INT8_MIN;
	volatile uint8_t x1831 = 113U;
	int32_t x1832 = 0;
	volatile uint64_t t38 = 698LLU;

    t38 = ((x1829-(x1830<=x1831))>>x1832);

    if (t38 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x1889 = UINT64_MAX;
	int16_t x1890 = INT16_MIN;
	volatile uint64_t t39 = 136110328634647LLU;

    t39 = ((x1889-(x1890<=x1891))>>x1892);

    if (t39 != 2047LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x1893 = 50830LLU;
	int64_t x1894 = INT64_MAX;
	uint16_t x1895 = 1959U;
	uint32_t x1896 = 0U;
	uint64_t t40 = 237595587LLU;

    t40 = ((x1893-(x1894<=x1895))>>x1896);

    if (t40 != 50830LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x1945 = UINT64_MAX;
	static int32_t x1946 = INT32_MIN;
	int64_t x1947 = INT64_MAX;
	static int32_t x1948 = 0;

    t41 = ((x1945-(x1946<=x1947))>>x1948);

    if (t41 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x1958 = INT8_MIN;
	volatile uint16_t x1959 = 8U;
	uint8_t x1960 = 2U;
	static uint64_t t42 = 1000605548LLU;

    t42 = ((x1957-(x1958<=x1959))>>x1960);

    if (t42 != 91256800LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint8_t x1985 = UINT8_MAX;
	int16_t x1986 = INT16_MIN;
	volatile int32_t x1987 = INT32_MAX;
	uint8_t x1988 = 25U;

    t43 = ((x1985-(x1986<=x1987))>>x1988);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x2009 = 4776U;
	int8_t x2011 = 0;
	volatile int64_t x2012 = 11LL;
	volatile uint32_t t44 = 19U;

    t44 = ((x2009-(x2010<=x2011))>>x2012);

    if (t44 != 2U) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x2025 = 864489188710420LLU;
	volatile uint16_t x2026 = 1U;
	int8_t x2027 = -1;
	static int64_t x2028 = 6LL;
	uint64_t t45 = 867533144980401LLU;

    t45 = ((x2025-(x2026<=x2027))>>x2028);

    if (t45 != 13507643573600LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x2082 = INT32_MAX;
	uint32_t t46 = 724463U;

    t46 = ((x2081-(x2082<=x2083))>>x2084);

    if (t46 != 67U) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x2085 = 22;
	static int8_t x2086 = INT8_MIN;
	int32_t x2087 = 5565978;
	volatile uint16_t x2088 = 0U;

    t47 = ((x2085-(x2086<=x2087))>>x2088);

    if (t47 != 21) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x2097 = 7;
	uint64_t x2098 = UINT64_MAX;
	volatile uint8_t x2100 = 3U;
	volatile int32_t t48 = -27183865;

    t48 = ((x2097-(x2098<=x2099))>>x2100);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint32_t x2113 = 1328U;
	static uint8_t x2114 = UINT8_MAX;
	static volatile uint8_t x2116 = 4U;
	uint32_t t49 = 4084U;

    t49 = ((x2113-(x2114<=x2115))>>x2116);

    if (t49 != 82U) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x2137 = INT64_MAX;
	uint64_t x2138 = 40618LLU;
	static int32_t x2139 = INT32_MAX;
	uint8_t x2140 = 3U;

    t50 = ((x2137-(x2138<=x2139))>>x2140);

    if (t50 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x2165 = INT32_MAX;
	static uint32_t x2166 = 951507U;
	uint32_t x2167 = 16U;
	int8_t x2168 = 0;
	int32_t t51 = INT32_MAX;

    t51 = ((x2165-(x2166<=x2167))>>x2168);

    if (t51 != INT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x2199 = 1U;
	static uint8_t x2200 = 16U;

    t52 = ((x2197-(x2198<=x2199))>>x2200);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x2273 = 780831902914LL;
	volatile int64_t x2274 = -1LL;
	int16_t x2275 = 2;
	int8_t x2276 = 15;
	static int64_t t53 = -184936LL;

    t53 = ((x2273-(x2274<=x2275))>>x2276);

    if (t53 != 23829098LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x2281 = 239340LLU;
	int8_t x2282 = -13;
	int32_t x2283 = INT32_MIN;
	volatile int8_t x2284 = 1;
	volatile uint64_t t54 = 19630437456LLU;

    t54 = ((x2281-(x2282<=x2283))>>x2284);

    if (t54 != 119670LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x2349 = 639395297681LL;
	uint32_t x2350 = UINT32_MAX;
	volatile int64_t x2351 = INT64_MIN;
	volatile int64_t x2352 = 0LL;
	int64_t t55 = 141414566809362LL;

    t55 = ((x2349-(x2350<=x2351))>>x2352);

    if (t55 != 639395297681LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint64_t x2361 = UINT64_MAX;
	int8_t x2362 = -3;
	int64_t x2363 = 865548817LL;

    t56 = ((x2361-(x2362<=x2363))>>x2364);

    if (t56 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x2365 = UINT64_MAX;
	static volatile int16_t x2366 = INT16_MIN;
	int64_t x2368 = 1LL;
	uint64_t t57 = 490995128300838845LLU;

    t57 = ((x2365-(x2366<=x2367))>>x2368);

    if (t57 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x2421 = 1;
	static uint64_t x2422 = 78904LLU;
	uint8_t x2423 = UINT8_MAX;
	int8_t x2424 = 7;
	volatile int32_t t58 = 71;

    t58 = ((x2421-(x2422<=x2423))>>x2424);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x2481 = 59U;
	int16_t x2482 = -1;
	uint8_t x2483 = 3U;
	uint8_t x2484 = 4U;
	int32_t t59 = -56196703;

    t59 = ((x2481-(x2482<=x2483))>>x2484);

    if (t59 != 3) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x2557 = INT8_MAX;
	int16_t x2559 = INT16_MIN;
	volatile int32_t t60 = -486;

    t60 = ((x2557-(x2558<=x2559))>>x2560);

    if (t60 != 15) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x2577 = 3;
	static int16_t x2579 = INT16_MAX;
	uint8_t x2580 = 2U;
	int32_t t61 = -1269457;

    t61 = ((x2577-(x2578<=x2579))>>x2580);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x2605 = 2U;
	static int16_t x2606 = INT16_MAX;
	int32_t x2607 = INT32_MIN;
	static volatile uint8_t x2608 = 3U;
	int32_t t62 = 2;

    t62 = ((x2605-(x2606<=x2607))>>x2608);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x2661 = 1804064205965LLU;
	uint16_t x2662 = 237U;
	int32_t x2663 = INT32_MIN;
	uint8_t x2664 = 1U;
	volatile uint64_t t63 = 50878776840414LLU;

    t63 = ((x2661-(x2662<=x2663))>>x2664);

    if (t63 != 902032102982LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint64_t x2694 = UINT64_MAX;
	int16_t x2695 = -830;
	uint8_t x2696 = 4U;
	uint64_t t64 = 5627399301757095789LLU;

    t64 = ((x2693-(x2694<=x2695))>>x2696);

    if (t64 != 2819490335LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x2825 = 4426945LLU;
	uint8_t x2828 = 3U;
	uint64_t t65 = 4443894246LLU;

    t65 = ((x2825-(x2826<=x2827))>>x2828);

    if (t65 != 553368LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x2845 = 6U;
	uint16_t x2847 = 4U;
	uint32_t t66 = 3411363U;

    t66 = ((x2845-(x2846<=x2847))>>x2848);

    if (t66 != 2U) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x2997 = 2280016LLU;
	static int32_t x2998 = INT32_MIN;
	int32_t x2999 = -7264994;
	int16_t x3000 = 1;
	volatile uint64_t t67 = 1751LLU;

    t67 = ((x2997-(x2998<=x2999))>>x3000);

    if (t67 != 1140007LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint64_t x3085 = UINT64_MAX;
	static uint64_t x3086 = 176509289LLU;
	uint16_t x3087 = 1U;
	volatile uint64_t t68 = UINT64_MAX;

    t68 = ((x3085-(x3086<=x3087))>>x3088);

    if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x3089 = UINT16_MAX;
	int32_t x3090 = INT32_MAX;
	int64_t x3091 = -85158840674934LL;
	volatile uint16_t x3092 = 25U;
	int32_t t69 = 799;

    t69 = ((x3089-(x3090<=x3091))>>x3092);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x3134 = INT32_MIN;
	volatile int8_t x3135 = INT8_MIN;
	static volatile uint32_t t70 = 1U;

    t70 = ((x3133-(x3134<=x3135))>>x3136);

    if (t70 != 1048575U) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x3329 = 1U;
	static int32_t x3330 = INT32_MAX;
	uint8_t x3331 = UINT8_MAX;
	volatile uint16_t x3332 = 3U;
	int32_t t71 = -815289;

    t71 = ((x3329-(x3330<=x3331))>>x3332);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x3385 = 12;
	int16_t x3386 = INT16_MIN;
	int64_t x3387 = -547180962LL;
	static volatile int32_t x3388 = 0;
	volatile int32_t t72 = -31;

    t72 = ((x3385-(x3386<=x3387))>>x3388);

    if (t72 != 12) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int16_t x3401 = INT16_MAX;
	uint16_t x3402 = UINT16_MAX;
	volatile int16_t x3403 = INT16_MIN;
	uint8_t x3404 = 7U;
	static int32_t t73 = 276894;

    t73 = ((x3401-(x3402<=x3403))>>x3404);

    if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x3433 = 3968558LL;
	int8_t x3434 = 3;
	static uint8_t x3436 = 3U;
	static volatile int64_t t74 = -1LL;

    t74 = ((x3433-(x3434<=x3435))>>x3436);

    if (t74 != 496069LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x3477 = 479;
	volatile int32_t x3478 = -1;
	int16_t x3479 = -1;
	static int32_t t75 = 5;

    t75 = ((x3477-(x3478<=x3479))>>x3480);

    if (t75 != 119) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x3481 = 9321;
	int16_t x3482 = -1;
	int32_t x3483 = -1;
	volatile uint16_t x3484 = 3U;
	static int32_t t76 = 37;

    t76 = ((x3481-(x3482<=x3483))>>x3484);

    if (t76 != 1165) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x3578 = INT64_MAX;
	volatile int16_t x3579 = INT16_MIN;
	uint16_t x3580 = 0U;
	volatile uint32_t t77 = 9185U;

    t77 = ((x3577-(x3578<=x3579))>>x3580);

    if (t77 != 451U) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint32_t x3609 = 6267U;
	static int8_t x3610 = INT8_MIN;
	volatile int8_t x3611 = 5;
	static uint16_t x3612 = 3U;
	volatile uint32_t t78 = 2507U;

    t78 = ((x3609-(x3610<=x3611))>>x3612);

    if (t78 != 783U) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint8_t x3657 = UINT8_MAX;
	int8_t x3658 = INT8_MIN;
	int32_t x3659 = -1;
	volatile int32_t t79 = -2;

    t79 = ((x3657-(x3658<=x3659))>>x3660);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x3701 = 3859481998LLU;
	uint32_t x3702 = 12695651U;
	int8_t x3703 = -1;
	static int8_t x3704 = 0;
	volatile uint64_t t80 = 53LLU;

    t80 = ((x3701-(x3702<=x3703))>>x3704);

    if (t80 != 3859481997LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x3733 = 1;
	static int8_t x3734 = 14;
	int16_t x3735 = INT16_MAX;
	int32_t t81 = -118;

    t81 = ((x3733-(x3734<=x3735))>>x3736);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x3865 = 1;
	static int16_t x3866 = INT16_MAX;
	uint64_t x3867 = 431651742795858632LLU;
	int32_t t82 = -51951799;

    t82 = ((x3865-(x3866<=x3867))>>x3868);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x3915 = -1;
	int16_t x3916 = 11;
	int32_t t83 = 137891;

    t83 = ((x3913-(x3914<=x3915))>>x3916);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x3925 = 6;
	uint8_t x3926 = 0U;
	uint8_t x3927 = 106U;
	static int32_t t84 = 3175;

    t84 = ((x3925-(x3926<=x3927))>>x3928);

    if (t84 != 2) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint32_t x3933 = 8116191U;
	uint8_t x3935 = 0U;
	static uint16_t x3936 = 2U;
	volatile uint32_t t85 = 1743327U;

    t85 = ((x3933-(x3934<=x3935))>>x3936);

    if (t85 != 2029047U) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x3957 = 58981379;
	uint32_t x3958 = 134U;
	volatile int64_t x3959 = 4LL;
	volatile int8_t x3960 = 4;
	int32_t t86 = 18;

    t86 = ((x3957-(x3958<=x3959))>>x3960);

    if (t86 != 3686336) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x3977 = 59208;
	uint16_t x3979 = UINT16_MAX;
	volatile uint32_t x3980 = 9U;
	volatile int32_t t87 = -2;

    t87 = ((x3977-(x3978<=x3979))>>x3980);

    if (t87 != 115) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x4022 = INT32_MIN;
	static volatile uint64_t x4023 = UINT64_MAX;
	uint8_t x4024 = 0U;
	int32_t t88 = 453067;

    t88 = ((x4021-(x4022<=x4023))>>x4024);

    if (t88 != 125) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x4025 = INT16_MAX;
	volatile uint32_t x4026 = 2750041U;
	int32_t x4027 = 1;
	int32_t t89 = 532988;

    t89 = ((x4025-(x4026<=x4027))>>x4028);

    if (t89 != 2047) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x4045 = 1U;
	static int64_t x4046 = INT64_MIN;
	static int8_t x4047 = INT8_MAX;
	uint16_t x4048 = 18U;
	int32_t t90 = 555;

    t90 = ((x4045-(x4046<=x4047))>>x4048);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x4050 = 59U;
	int16_t x4051 = -1;
	uint8_t x4052 = 4U;
	volatile uint64_t t91 = 41LLU;

    t91 = ((x4049-(x4050<=x4051))>>x4052);

    if (t91 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x4057 = INT64_MAX;
	static uint16_t x4060 = 4U;

    t92 = ((x4057-(x4058<=x4059))>>x4060);

    if (t92 != 576460752303423487LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x4082 = INT8_MIN;
	int64_t x4083 = -1LL;
	static volatile uint8_t x4084 = 0U;
	volatile int32_t t93 = 189;

    t93 = ((x4081-(x4082<=x4083))>>x4084);

    if (t93 != 6) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x4125 = 12;
	static int64_t x4126 = INT64_MAX;
	static int16_t x4127 = -41;
	static uint8_t x4128 = 1U;
	volatile int32_t t94 = 5737950;

    t94 = ((x4125-(x4126<=x4127))>>x4128);

    if (t94 != 6) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x4133 = 0U;
	static volatile uint32_t t95 = 42U;

    t95 = ((x4133-(x4134<=x4135))>>x4136);

    if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint64_t x4161 = 7554787394LLU;
	int64_t x4162 = -1LL;
	int16_t x4163 = 236;
	static uint64_t t96 = 348243LLU;

    t96 = ((x4161-(x4162<=x4163))>>x4164);

    if (t96 != 3777393696LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x4177 = 4U;
	int32_t x4179 = -1;
	uint8_t x4180 = 18U;
	static volatile int32_t t97 = 3;

    t97 = ((x4177-(x4178<=x4179))>>x4180);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x4237 = 19;
	int64_t x4238 = -61LL;
	int64_t x4239 = 286676916553912LL;
	uint8_t x4240 = 0U;
	int32_t t98 = -833510;

    t98 = ((x4237-(x4238<=x4239))>>x4240);

    if (t98 != 18) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x4281 = 8086519439038LL;
	volatile uint8_t x4284 = 1U;
	int64_t t99 = -30438032528LL;

    t99 = ((x4281-(x4282<=x4283))>>x4284);

    if (t99 != 4043259719519LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x4421 = 2U;
	int64_t x4422 = -12743974003919321LL;
	static int8_t x4423 = -5;
	volatile int32_t t100 = -25700;

    t100 = ((x4421-(x4422<=x4423))>>x4424);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x4453 = 19455550U;
	volatile int16_t x4454 = 6;
	uint32_t x4455 = UINT32_MAX;
	uint32_t t101 = 1510U;

    t101 = ((x4453-(x4454<=x4455))>>x4456);

    if (t101 != 37999U) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x4590 = INT64_MAX;
	int32_t x4591 = -185356;
	int8_t x4592 = 17;
	static int64_t t102 = 5671932139408764LL;

    t102 = ((x4589-(x4590<=x4591))>>x4592);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x4685 = 63U;
	volatile int8_t x4686 = INT8_MAX;
	uint64_t x4688 = 0LLU;

    t103 = ((x4685-(x4686<=x4687))>>x4688);

    if (t103 != 62) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x4709 = UINT16_MAX;
	int32_t x4711 = 403550;
	uint8_t x4712 = 19U;
	volatile int32_t t104 = -159422;

    t104 = ((x4709-(x4710<=x4711))>>x4712);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x4729 = INT16_MAX;
	uint8_t x4730 = 8U;
	int16_t x4731 = INT16_MIN;
	static volatile int32_t t105 = 19654651;

    t105 = ((x4729-(x4730<=x4731))>>x4732);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint8_t x4737 = 1U;
	uint8_t x4738 = UINT8_MAX;
	volatile int8_t x4739 = INT8_MIN;
	static volatile uint16_t x4740 = 1U;
	int32_t t106 = -12;

    t106 = ((x4737-(x4738<=x4739))>>x4740);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x4849 = 3209810894994572941LL;
	int64_t x4850 = INT64_MAX;
	volatile uint8_t x4852 = 0U;
	static int64_t t107 = -148316767693638LL;

    t107 = ((x4849-(x4850<=x4851))>>x4852);

    if (t107 != 3209810894994572941LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x4902 = 41U;
	static int16_t x4903 = -1;
	static volatile uint8_t x4904 = 3U;
	volatile int32_t t108 = 26;

    t108 = ((x4901-(x4902<=x4903))>>x4904);

    if (t108 != 8191) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x4961 = 40177LLU;
	int64_t x4962 = INT64_MIN;
	uint64_t x4963 = UINT64_MAX;
	int8_t x4964 = 0;
	uint64_t t109 = 9412LLU;

    t109 = ((x4961-(x4962<=x4963))>>x4964);

    if (t109 != 40176LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x4978 = INT16_MIN;

    t110 = ((x4977-(x4978<=x4979))>>x4980);

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x5029 = 31LLU;
	int32_t x5031 = -1;
	int16_t x5032 = 30;
	static volatile uint64_t t111 = 65639LLU;

    t111 = ((x5029-(x5030<=x5031))>>x5032);

    if (t111 != 0LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint16_t x5033 = UINT16_MAX;
	uint8_t x5034 = UINT8_MAX;
	uint64_t x5035 = 78655041734906325LLU;
	int8_t x5036 = 1;
	int32_t t112 = 61465;

    t112 = ((x5033-(x5034<=x5035))>>x5036);

    if (t112 != 32767) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x5101 = 8179LLU;
	int8_t x5102 = INT8_MIN;
	static int32_t x5104 = 4;
	static uint64_t t113 = 37LLU;

    t113 = ((x5101-(x5102<=x5103))>>x5104);

    if (t113 != 511LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x5209 = 150273LLU;
	static int8_t x5210 = INT8_MAX;
	uint8_t x5211 = 1U;

    t114 = ((x5209-(x5210<=x5211))>>x5212);

    if (t114 != 1174LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x5225 = UINT16_MAX;
	static int16_t x5226 = -13;
	int32_t x5227 = 13219;
	int16_t x5228 = 4;

    t115 = ((x5225-(x5226<=x5227))>>x5228);

    if (t115 != 4095) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x5269 = 1;
	static int64_t x5270 = INT64_MIN;
	volatile int8_t x5271 = -12;
	uint16_t x5272 = 3U;
	static volatile int32_t t116 = 116;

    t116 = ((x5269-(x5270<=x5271))>>x5272);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x5329 = 783U;
	static int32_t x5330 = -1;
	int32_t x5331 = -1;
	int8_t x5332 = 3;
	int32_t t117 = -33;

    t117 = ((x5329-(x5330<=x5331))>>x5332);

    if (t117 != 97) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int8_t x5350 = 6;
	uint8_t x5352 = 5U;
	static int32_t t118 = -60;

    t118 = ((x5349-(x5350<=x5351))>>x5352);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint64_t x5361 = UINT64_MAX;
	static volatile uint64_t x5362 = 798842554994LLU;
	static int16_t x5363 = INT16_MIN;
	volatile uint64_t t119 = 974241385LLU;

    t119 = ((x5361-(x5362<=x5363))>>x5364);

    if (t119 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x5389 = INT64_MAX;
	static uint16_t x5390 = UINT16_MAX;
	int64_t x5391 = 3935448LL;
	static volatile uint64_t x5392 = 30LLU;
	static volatile int64_t t120 = -401974LL;

    t120 = ((x5389-(x5390<=x5391))>>x5392);

    if (t120 != 8589934591LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint8_t x5498 = 11U;
	int16_t x5500 = 1;
	volatile uint64_t t121 = 6362648831LLU;

    t121 = ((x5497-(x5498<=x5499))>>x5500);

    if (t121 != 1432783299589744204LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint8_t x5501 = 12U;
	int32_t x5502 = INT32_MIN;
	int32_t x5503 = -84;
	volatile int32_t x5504 = 0;
	volatile int32_t t122 = 47021866;

    t122 = ((x5501-(x5502<=x5503))>>x5504);

    if (t122 != 11) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x5517 = 3769364971922682160LLU;
	int32_t x5519 = -1;
	volatile uint64_t t123 = 2111LLU;

    t123 = ((x5517-(x5518<=x5519))>>x5520);

    if (t123 != 3769364971922682160LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x5525 = UINT16_MAX;
	static volatile int64_t x5526 = INT64_MIN;
	static volatile uint8_t x5527 = UINT8_MAX;
	uint8_t x5528 = 6U;

    t124 = ((x5525-(x5526<=x5527))>>x5528);

    if (t124 != 1023) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint64_t x5530 = 111186LLU;
	int32_t x5531 = -1;
	static volatile uint32_t t125 = 719630U;

    t125 = ((x5529-(x5530<=x5531))>>x5532);

    if (t125 != 2147483647U) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint32_t x5541 = 1138951382U;
	static uint16_t x5542 = 316U;
	int16_t x5543 = INT16_MIN;
	volatile uint32_t t126 = 225212U;

    t126 = ((x5541-(x5542<=x5543))>>x5544);

    if (t126 != 142368922U) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint32_t x5665 = UINT32_MAX;
	volatile int16_t x5666 = -1;
	int8_t x5667 = -35;
	uint8_t x5668 = 1U;

    t127 = ((x5665-(x5666<=x5667))>>x5668);

    if (t127 != 2147483647U) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x5737 = 60;
	int8_t x5738 = INT8_MIN;
	volatile int16_t x5739 = INT16_MIN;
	uint8_t x5740 = 3U;
	int32_t t128 = 30894;

    t128 = ((x5737-(x5738<=x5739))>>x5740);

    if (t128 != 7) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x5761 = 55279610383055867LL;
	static volatile int16_t x5762 = INT16_MIN;
	uint16_t x5763 = UINT16_MAX;
	volatile int16_t x5764 = 51;
	volatile int64_t t129 = -6681LL;

    t129 = ((x5761-(x5762<=x5763))>>x5764);

    if (t129 != 24LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint8_t x5769 = 75U;
	int32_t x5770 = INT32_MAX;
	int64_t x5771 = INT64_MIN;
	int32_t t130 = 120;

    t130 = ((x5769-(x5770<=x5771))>>x5772);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x5777 = 1124;
	int16_t x5779 = -1;
	volatile int32_t t131 = 3;

    t131 = ((x5777-(x5778<=x5779))>>x5780);

    if (t131 != 281) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x5829 = UINT16_MAX;
	int16_t x5830 = INT16_MIN;
	int64_t x5831 = INT64_MAX;
	uint8_t x5832 = 3U;
	int32_t t132 = -976926;

    t132 = ((x5829-(x5830<=x5831))>>x5832);

    if (t132 != 8191) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x5837 = 3812;
	uint64_t x5838 = UINT64_MAX;
	static uint8_t x5839 = UINT8_MAX;

    t133 = ((x5837-(x5838<=x5839))>>x5840);

    if (t133 != 3812) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint64_t x5881 = 49266025254621062LLU;
	static int8_t x5882 = INT8_MIN;
	static int64_t x5883 = -269155357853373LL;
	static volatile uint32_t x5884 = 1U;

    t134 = ((x5881-(x5882<=x5883))>>x5884);

    if (t134 != 24633012627310531LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint32_t x5905 = UINT32_MAX;
	int16_t x5907 = INT16_MIN;
	uint32_t t135 = 35055410U;

    t135 = ((x5905-(x5906<=x5907))>>x5908);

    if (t135 != 1023U) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x5965 = 3;
	volatile int64_t x5967 = INT64_MIN;
	int8_t x5968 = 0;
	int32_t t136 = 0;

    t136 = ((x5965-(x5966<=x5967))>>x5968);

    if (t136 != 3) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x5973 = 186U;
	volatile int32_t x5975 = INT32_MAX;
	int8_t x5976 = 1;
	int32_t t137 = -1353;

    t137 = ((x5973-(x5974<=x5975))>>x5976);

    if (t137 != 92) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x5985 = 295;
	uint16_t x5986 = 0U;
	int8_t x5987 = -1;
	uint8_t x5988 = 12U;
	volatile int32_t t138 = -996861;

    t138 = ((x5985-(x5986<=x5987))>>x5988);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x6069 = UINT64_MAX;
	volatile int64_t x6071 = 97946152558LL;
	volatile uint64_t t139 = 70378718142250LLU;

    t139 = ((x6069-(x6070<=x6071))>>x6072);

    if (t139 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x6078 = INT64_MIN;
	uint32_t x6079 = 1892U;
	static int32_t x6080 = 21;

    t140 = ((x6077-(x6078<=x6079))>>x6080);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x6253 = 109653LLU;
	int16_t x6254 = INT16_MIN;
	volatile int8_t x6255 = 1;
	uint64_t t141 = 16905416707LLU;

    t141 = ((x6253-(x6254<=x6255))>>x6256);

    if (t141 != 0LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x6322 = INT8_MAX;
	uint32_t t142 = 286421969U;

    t142 = ((x6321-(x6322<=x6323))>>x6324);

    if (t142 != 8U) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x6401 = INT64_MAX;
	int64_t x6402 = INT64_MAX;
	int8_t x6403 = INT8_MAX;
	int8_t x6404 = 22;

    t143 = ((x6401-(x6402<=x6403))>>x6404);

    if (t143 != 2199023255551LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x6450 = -1;
	uint8_t x6451 = UINT8_MAX;
	int8_t x6452 = 1;
	volatile int32_t t144 = -38;

    t144 = ((x6449-(x6450<=x6451))>>x6452);

    if (t144 != 16383) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x6481 = INT16_MAX;
	static int32_t x6482 = INT32_MIN;
	uint8_t x6483 = UINT8_MAX;
	uint8_t x6484 = 30U;
	int32_t t145 = -64050;

    t145 = ((x6481-(x6482<=x6483))>>x6484);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x6506 = 24568712993616LLU;
	int16_t x6507 = INT16_MAX;
	static volatile uint32_t t146 = 99U;

    t146 = ((x6505-(x6506<=x6507))>>x6508);

    if (t146 != 0U) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint16_t x6529 = UINT16_MAX;
	volatile uint64_t x6530 = 163663991101LLU;
	int8_t x6531 = INT8_MAX;
	volatile uint8_t x6532 = 8U;

    t147 = ((x6529-(x6530<=x6531))>>x6532);

    if (t147 != 255) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x6537 = 1184803LLU;
	volatile int64_t x6538 = INT64_MIN;
	uint16_t x6539 = 4U;
	uint64_t t148 = 29667329274581LLU;

    t148 = ((x6537-(x6538<=x6539))>>x6540);

    if (t148 != 37025LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x6577 = INT32_MAX;
	uint32_t x6578 = 69102335U;
	int16_t x6579 = INT16_MAX;
	int8_t x6580 = 7;
	int32_t t149 = -1;

    t149 = ((x6577-(x6578<=x6579))>>x6580);

    if (t149 != 16777215) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x6677 = 11195U;
	int32_t x6679 = 30;
	uint8_t x6680 = 19U;
	int32_t t150 = -1;

    t150 = ((x6677-(x6678<=x6679))>>x6680);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x6709 = 1;
	int64_t x6710 = 68LL;
	uint32_t x6711 = 786U;
	uint8_t x6712 = 10U;

    t151 = ((x6709-(x6710<=x6711))>>x6712);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x6777 = 3185807575964937002LL;
	int16_t x6778 = INT16_MIN;
	int8_t x6779 = -1;
	int64_t t152 = -4LL;

    t152 = ((x6777-(x6778<=x6779))>>x6780);

    if (t152 != 3185807575964937001LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x6785 = 389;
	static int64_t x6786 = 3134926LL;
	volatile int32_t t153 = -31;

    t153 = ((x6785-(x6786<=x6787))>>x6788);

    if (t153 != 389) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x6809 = 4560;
	int32_t x6810 = INT32_MIN;
	int16_t x6811 = INT16_MAX;
	static uint8_t x6812 = 23U;
	volatile int32_t t154 = 11;

    t154 = ((x6809-(x6810<=x6811))>>x6812);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x6900 = 15;
	uint64_t t155 = 1264LLU;

    t155 = ((x6897-(x6898<=x6899))>>x6900);

    if (t155 != 562949953421311LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x6910 = UINT8_MAX;
	uint8_t x6912 = 0U;

    t156 = ((x6909-(x6910<=x6911))>>x6912);

    if (t156 != UINT32_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x6917 = 3388U;
	int64_t x6918 = INT64_MIN;
	uint16_t x6919 = 59U;
	uint8_t x6920 = 0U;

    t157 = ((x6917-(x6918<=x6919))>>x6920);

    if (t157 != 3387) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x6957 = INT8_MAX;
	static int16_t x6958 = -1;
	volatile uint8_t x6959 = 29U;
	volatile int32_t t158 = 212;

    t158 = ((x6957-(x6958<=x6959))>>x6960);

    if (t158 != 63) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile uint32_t x6977 = 185U;
	static uint64_t x6978 = UINT64_MAX;
	int16_t x6979 = 5317;
	static int8_t x6980 = 2;
	uint32_t t159 = 4165214U;

    t159 = ((x6977-(x6978<=x6979))>>x6980);

    if (t159 != 46U) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x6989 = 339654753U;
	int8_t x6990 = 6;
	uint32_t x6991 = 20U;
	uint32_t x6992 = 0U;

    t160 = ((x6989-(x6990<=x6991))>>x6992);

    if (t160 != 339654752U) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x7009 = 43U;
	int8_t x7010 = INT8_MIN;
	uint64_t x7011 = 1663563LLU;

    t161 = ((x7009-(x7010<=x7011))>>x7012);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x7097 = 43791920252LL;
	uint32_t x7098 = UINT32_MAX;
	int16_t x7099 = INT16_MAX;
	uint8_t x7100 = 1U;
	volatile int64_t t162 = 1296205306LL;

    t162 = ((x7097-(x7098<=x7099))>>x7100);

    if (t162 != 21895960126LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int64_t x7161 = INT64_MAX;
	uint16_t x7162 = 1U;
	uint16_t x7164 = 26U;
	static int64_t t163 = -92043887882LL;

    t163 = ((x7161-(x7162<=x7163))>>x7164);

    if (t163 != 137438953471LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x7190 = 20U;
	int8_t x7191 = INT8_MAX;
	int8_t x7192 = 13;
	int32_t t164 = 7;

    t164 = ((x7189-(x7190<=x7191))>>x7192);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x7205 = INT8_MAX;
	int64_t x7207 = INT64_MIN;
	volatile int32_t t165 = -229240;

    t165 = ((x7205-(x7206<=x7207))>>x7208);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x7233 = 50383LLU;
	int32_t x7234 = -51539659;
	volatile int32_t x7235 = INT32_MIN;
	uint64_t x7236 = 28LLU;
	volatile uint64_t t166 = 4926445LLU;

    t166 = ((x7233-(x7234<=x7235))>>x7236);

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x7285 = UINT8_MAX;
	static uint32_t x7286 = UINT32_MAX;
	uint8_t x7288 = 1U;
	static int32_t t167 = 2015768;

    t167 = ((x7285-(x7286<=x7287))>>x7288);

    if (t167 != 127) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x7382 = 1894;
	int32_t x7383 = -3;
	int8_t x7384 = 1;

    t168 = ((x7381-(x7382<=x7383))>>x7384);

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x7389 = 470679301615135764LLU;
	volatile int16_t x7390 = INT16_MIN;
	volatile int64_t x7391 = -4LL;
	static int64_t x7392 = 52LL;
	uint64_t t169 = 55503LLU;

    t169 = ((x7389-(x7390<=x7391))>>x7392);

    if (t169 != 104LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint8_t x7393 = 58U;
	uint32_t x7394 = 234327U;
	int8_t x7395 = INT8_MAX;
	static int8_t x7396 = 1;

    t170 = ((x7393-(x7394<=x7395))>>x7396);

    if (t170 != 29) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint16_t x7442 = 1U;
	int8_t x7443 = INT8_MAX;
	volatile uint8_t x7444 = 5U;

    t171 = ((x7441-(x7442<=x7443))>>x7444);

    if (t171 != 3) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x7561 = INT32_MAX;
	static int8_t x7562 = INT8_MIN;
	int16_t x7563 = INT16_MIN;
	static int8_t x7564 = 1;

    t172 = ((x7561-(x7562<=x7563))>>x7564);

    if (t172 != 1073741823) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x7685 = INT8_MAX;
	uint64_t x7686 = 178701963LLU;
	int16_t x7687 = INT16_MAX;
	uint32_t x7688 = 1U;
	volatile int32_t t173 = 16;

    t173 = ((x7685-(x7686<=x7687))>>x7688);

    if (t173 != 63) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x7701 = 0;
	uint8_t x7702 = 50U;
	int16_t x7703 = INT16_MIN;

    t174 = ((x7701-(x7702<=x7703))>>x7704);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x7790 = INT16_MIN;
	int32_t x7791 = INT32_MIN;
	uint64_t t175 = 26153736527639592LLU;

    t175 = ((x7789-(x7790<=x7791))>>x7792);

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint16_t x7933 = 6U;
	volatile int8_t x7935 = INT8_MIN;
	static uint8_t x7936 = 18U;
	static volatile int32_t t176 = -1;

    t176 = ((x7933-(x7934<=x7935))>>x7936);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x7949 = 27;
	static uint64_t x7950 = 138549701LLU;
	int8_t x7951 = 7;
	uint64_t x7952 = 1LLU;
	volatile int32_t t177 = -301289;

    t177 = ((x7949-(x7950<=x7951))>>x7952);

    if (t177 != 13) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint32_t x7997 = 57894675U;
	volatile int32_t x7998 = 941805538;
	static int16_t x7999 = -10435;
	volatile uint16_t x8000 = 1U;
	static uint32_t t178 = 371240533U;

    t178 = ((x7997-(x7998<=x7999))>>x8000);

    if (t178 != 28947337U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x8113 = UINT8_MAX;
	int64_t x8114 = INT64_MAX;
	uint16_t x8115 = 711U;
	volatile int32_t t179 = 2;

    t179 = ((x8113-(x8114<=x8115))>>x8116);

    if (t179 != 7) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x8161 = 6LLU;
	static int16_t x8162 = INT16_MIN;
	static uint64_t x8163 = 990901043901140LLU;
	volatile uint8_t x8164 = 1U;
	uint64_t t180 = 15LLU;

    t180 = ((x8161-(x8162<=x8163))>>x8164);

    if (t180 != 3LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x8233 = UINT8_MAX;
	volatile int8_t x8234 = INT8_MIN;
	int64_t x8235 = -2771127931673697LL;
	int16_t x8236 = 13;
	volatile int32_t t181 = -4060697;

    t181 = ((x8233-(x8234<=x8235))>>x8236);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x8241 = 30;
	volatile int8_t x8243 = -3;
	uint8_t x8244 = 0U;
	volatile int32_t t182 = 3181;

    t182 = ((x8241-(x8242<=x8243))>>x8244);

    if (t182 != 30) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x8290 = -462837626643LL;
	int16_t x8291 = INT16_MAX;
	volatile uint64_t t183 = 527801233240764LLU;

    t183 = ((x8289-(x8290<=x8291))>>x8292);

    if (t183 != 5854LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x8321 = 0U;
	volatile uint16_t x8324 = 1U;

    t184 = ((x8321-(x8322<=x8323))>>x8324);

    if (t184 != 2147483647U) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile uint16_t x8373 = UINT16_MAX;
	static int8_t x8375 = INT8_MAX;
	uint16_t x8376 = 1U;

    t185 = ((x8373-(x8374<=x8375))>>x8376);

    if (t185 != 32767) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x8437 = 7881736057925740111LLU;
	int32_t x8438 = INT32_MIN;
	uint64_t x8439 = 102831LLU;
	uint8_t x8440 = 9U;
	uint64_t t186 = 16335LLU;

    t186 = ((x8437-(x8438<=x8439))>>x8440);

    if (t186 != 15394015738136211LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x8481 = 21;
	int8_t x8482 = -1;
	int8_t x8483 = INT8_MAX;
	static int32_t x8484 = 21;
	int32_t t187 = -1;

    t187 = ((x8481-(x8482<=x8483))>>x8484);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x8494 = 48;
	volatile int32_t x8495 = 5176;
	int32_t x8496 = 1;
	uint32_t t188 = 339U;

    t188 = ((x8493-(x8494<=x8495))>>x8496);

    if (t188 != 1U) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x8497 = INT16_MAX;
	static volatile int32_t x8498 = INT32_MAX;
	int16_t x8499 = -6;
	uint8_t x8500 = 8U;
	volatile int32_t t189 = 28583596;

    t189 = ((x8497-(x8498<=x8499))>>x8500);

    if (t189 != 127) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x8577 = 2075381LL;
	uint16_t x8580 = 1U;
	int64_t t190 = -133907479514423883LL;

    t190 = ((x8577-(x8578<=x8579))>>x8580);

    if (t190 != 1037690LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x8610 = 4;
	uint32_t x8611 = 380223635U;
	static int8_t x8612 = 11;
	volatile uint32_t t191 = 15822543U;

    t191 = ((x8609-(x8610<=x8611))>>x8612);

    if (t191 != 2097151U) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int8_t x8633 = 0;
	int16_t x8634 = INT16_MIN;
	int32_t t192 = -366;

    t192 = ((x8633-(x8634<=x8635))>>x8636);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x8773 = INT32_MAX;
	volatile int16_t x8774 = 7;
	int64_t x8775 = -1LL;
	volatile uint8_t x8776 = 8U;
	int32_t t193 = 11867692;

    t193 = ((x8773-(x8774<=x8775))>>x8776);

    if (t193 != 8388607) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint32_t x8801 = 0U;
	uint8_t x8802 = UINT8_MAX;
	volatile int16_t x8803 = INT16_MIN;
	uint8_t x8804 = 1U;
	volatile uint32_t t194 = 16388843U;

    t194 = ((x8801-(x8802<=x8803))>>x8804);

    if (t194 != 0U) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x8873 = UINT32_MAX;
	int64_t x8874 = INT64_MAX;
	uint8_t x8875 = UINT8_MAX;
	uint32_t t195 = 21991U;

    t195 = ((x8873-(x8874<=x8875))>>x8876);

    if (t195 != 1073741823U) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x9078 = INT8_MAX;
	uint64_t x9079 = UINT64_MAX;
	int64_t x9080 = 1LL;
	int32_t t196 = 10727983;

    t196 = ((x9077-(x9078<=x9079))>>x9080);

    if (t196 != 1073741823) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x9129 = 7U;
	static volatile int32_t t197 = 145956;

    t197 = ((x9129-(x9130<=x9131))>>x9132);

    if (t197 != 7) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x9137 = INT32_MAX;
	volatile uint16_t x9138 = 1U;
	uint16_t x9140 = 2U;
	static volatile int32_t t198 = -16490892;

    t198 = ((x9137-(x9138<=x9139))>>x9140);

    if (t198 != 536870911) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x9150 = -1;
	volatile int64_t x9151 = -1LL;
	uint16_t x9152 = 1U;
	static volatile int64_t t199 = -12773123LL;

    t199 = ((x9149-(x9150<=x9151))>>x9152);

    if (t199 != 4611686018427387903LL) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

