#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x7 = 94U;
volatile int32_t t1 = 7453;
static volatile int32_t t3 = INT32_MAX;
int8_t x365 = INT8_MIN;
int8_t x366 = 0;
uint8_t x419 = 92U;
uint32_t x426 = 13U;
static uint64_t x487 = 847060739329666LLU;
int16_t x488 = 37;
uint32_t x503 = UINT32_MAX;
volatile int32_t t11 = -124;
int64_t x615 = INT64_MAX;
uint8_t x616 = 8U;
static uint64_t t14 = 194810LLU;
int32_t x748 = 6;
int8_t x789 = 0;
int32_t x790 = -82;
volatile int32_t x818 = -1;
int16_t x953 = -40;
int32_t x954 = -1;
uint32_t x1066 = 2U;
static int32_t x1093 = INT32_MAX;
uint32_t x1094 = 3U;
int32_t t24 = 1062334;
static uint8_t x1121 = UINT8_MAX;
uint16_t x1122 = 9U;
int32_t t29 = -56;
uint8_t x1308 = 5U;
uint64_t x1426 = UINT64_MAX;
int8_t x1481 = INT8_MIN;
int16_t x1616 = 3;
volatile int32_t x1621 = 24822250;
volatile int32_t t35 = -203;
int8_t x1737 = INT8_MIN;
static uint64_t x1740 = 1LLU;
int16_t x1765 = INT16_MAX;
int8_t x1994 = -1;
int8_t x2073 = -1;
volatile uint16_t x2074 = 7U;
volatile int8_t x2130 = INT8_MIN;
int64_t x2178 = 15LL;
volatile int32_t t46 = -4620;
int64_t x2199 = INT64_MAX;
int16_t x2258 = INT16_MAX;
static uint8_t x2512 = 0U;
int64_t x2769 = INT64_MAX;
static uint64_t x2772 = 4LLU;
volatile int32_t t51 = 2861;
int16_t x2818 = 6641;
uint8_t x2820 = 6U;
int64_t t53 = -477264582879331LL;
static uint32_t x2912 = 1U;
uint64_t x2922 = UINT64_MAX;
uint8_t x3169 = 3U;
volatile int32_t t58 = 9186472;
volatile uint64_t t59 = 217227686098074LLU;
int32_t t60 = -123014;
int64_t x3434 = -56213595LL;
volatile int8_t x3436 = 2;
volatile uint32_t x3726 = UINT32_MAX;
volatile int8_t x3728 = 0;
static int8_t x3760 = 42;
int16_t x3977 = INT16_MIN;
uint8_t x3980 = 1U;
int8_t x4008 = 1;
uint32_t x4260 = 23U;
static volatile uint64_t t74 = 8109LLU;
int8_t x4480 = 0;
static int16_t x4493 = -98;
int64_t x4613 = -1LL;
volatile uint32_t t77 = 3557129U;
int16_t x4691 = INT16_MAX;
static int8_t x4709 = INT8_MIN;
int32_t x4710 = INT32_MIN;
volatile int8_t x4712 = 1;
uint16_t x4901 = 2U;
static uint16_t x4904 = 2U;
int64_t x4941 = INT64_MIN;
volatile uint64_t t87 = UINT64_MAX;
int32_t t90 = 419355626;
static uint8_t x5147 = UINT8_MAX;
uint64_t x5293 = 193400387410LLU;
int8_t x5301 = INT8_MIN;
uint64_t x5302 = UINT64_MAX;
uint8_t x5334 = UINT8_MAX;
uint8_t x5336 = 3U;
int8_t x5360 = 0;
uint32_t x5373 = UINT32_MAX;
int64_t x5642 = INT64_MIN;
int8_t x5644 = 15;
static volatile uint32_t x5659 = UINT32_MAX;


void f0(void) {
	static int64_t x5 = 3920LL;
	static int32_t x6 = INT32_MIN;
	static uint32_t x8 = 2U;
	volatile int32_t t0 = 27568791;

	t0 = (((x5<x6)|x7)>>x8);

	if (t0 != 23) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x21 = -105;
	static int64_t x22 = INT64_MAX;
	uint16_t x23 = 28U;
	volatile uint8_t x24 = 0U;

	t1 = (((x21<x22)|x23)>>x24);

	if (t1 != 29) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x129 = -1;
	static uint16_t x130 = 0U;
	static uint64_t x131 = 143620865512027LLU;
	uint8_t x132 = 17U;
	volatile uint64_t t2 = 246240519550046629LLU;

	t2 = (((x129<x130)|x131)>>x132);

	if (t2 != 1095740245LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x201 = INT8_MAX;
	uint64_t x202 = UINT64_MAX;
	int32_t x203 = INT32_MAX;
	int8_t x204 = 0;

	t3 = (((x201<x202)|x203)>>x204);

	if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x367 = 24U;
	volatile int16_t x368 = 7;
	int32_t t4 = -63237538;

	t4 = (((x365<x366)|x367)>>x368);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint8_t x401 = 8U;
	volatile int16_t x402 = -4;
	int8_t x403 = 2;
	int8_t x404 = 18;
	volatile int32_t t5 = 1;

	t5 = (((x401<x402)|x403)>>x404);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x417 = INT16_MAX;
	uint16_t x418 = 36U;
	uint16_t x420 = 15U;
	volatile int32_t t6 = 20724;

	t6 = (((x417<x418)|x419)>>x420);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x425 = 200U;
	int32_t x427 = 168473161;
	uint8_t x428 = 28U;
	static int32_t t7 = -126122742;

	t7 = (((x425<x426)|x427)>>x428);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x461 = -1;
	static uint8_t x462 = 0U;
	uint8_t x463 = 7U;
	uint32_t x464 = 15U;
	volatile int32_t t8 = -261355;

	t8 = (((x461<x462)|x463)>>x464);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x485 = INT8_MIN;
	static volatile int8_t x486 = -1;
	uint64_t t9 = 713691470224896LLU;

	t9 = (((x485<x486)|x487)>>x488);

	if (t9 != 6163LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x501 = INT32_MIN;
	int64_t x502 = -1LL;
	int8_t x504 = 10;
	volatile uint32_t t10 = 4808U;

	t10 = (((x501<x502)|x503)>>x504);

	if (t10 != 4194303U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x541 = UINT32_MAX;
	int64_t x542 = 1LL;
	int8_t x543 = INT8_MAX;
	uint32_t x544 = 3U;

	t11 = (((x541<x542)|x543)>>x544);

	if (t11 != 15) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x585 = INT16_MAX;
	uint64_t x586 = UINT64_MAX;
	volatile int8_t x587 = INT8_MAX;
	volatile uint8_t x588 = 16U;
	int32_t t12 = -2268;

	t12 = (((x585<x586)|x587)>>x588);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x613 = 5892405672974LLU;
	static volatile uint16_t x614 = 10036U;
	int64_t t13 = 413531023895768LL;

	t13 = (((x613<x614)|x615)>>x616);

	if (t13 != 36028797018963967LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x705 = UINT32_MAX;
	static int32_t x706 = INT32_MIN;
	static uint64_t x707 = UINT64_MAX;
	uint8_t x708 = 38U;

	t14 = (((x705<x706)|x707)>>x708);

	if (t14 != 67108863LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x745 = INT8_MIN;
	uint64_t x746 = 256175LLU;
	volatile uint64_t x747 = 59434373LLU;
	uint64_t t15 = 7763132751092851LLU;

	t15 = (((x745<x746)|x747)>>x748);

	if (t15 != 928662LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x773 = INT32_MIN;
	int8_t x774 = 2;
	int64_t x775 = 19530246378864LL;
	int8_t x776 = 31;
	int64_t t16 = -14543968899394LL;

	t16 = (((x773<x774)|x775)>>x776);

	if (t16 != 9094LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x791 = 1U;
	int8_t x792 = 0;
	static int32_t t17 = -2;

	t17 = (((x789<x790)|x791)>>x792);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x817 = INT8_MAX;
	int32_t x819 = INT32_MAX;
	uint32_t x820 = 3U;
	static int32_t t18 = -23;

	t18 = (((x817<x818)|x819)>>x820);

	if (t18 != 268435455) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x821 = -1;
	volatile int8_t x822 = INT8_MIN;
	uint32_t x823 = 194775U;
	int8_t x824 = 7;
	volatile uint32_t t19 = 2330803U;

	t19 = (((x821<x822)|x823)>>x824);

	if (t19 != 1521U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x955 = INT16_MAX;
	volatile uint16_t x956 = 1U;
	volatile int32_t t20 = -132106031;

	t20 = (((x953<x954)|x955)>>x956);

	if (t20 != 16383) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x1025 = INT8_MIN;
	static uint8_t x1026 = 1U;
	int32_t x1027 = 1;
	int8_t x1028 = 1;
	int32_t t21 = 106765;

	t21 = (((x1025<x1026)|x1027)>>x1028);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1057 = INT32_MIN;
	int16_t x1058 = -1;
	int8_t x1059 = 1;
	uint16_t x1060 = 5U;
	int32_t t22 = 718;

	t22 = (((x1057<x1058)|x1059)>>x1060);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x1065 = 441U;
	int16_t x1067 = INT16_MAX;
	uint8_t x1068 = 4U;
	int32_t t23 = -4;

	t23 = (((x1065<x1066)|x1067)>>x1068);

	if (t23 != 2047) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x1095 = INT32_MAX;
	uint8_t x1096 = 24U;

	t24 = (((x1093<x1094)|x1095)>>x1096);

	if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x1123 = INT64_MAX;
	int8_t x1124 = 2;
	volatile int64_t t25 = -19687286375789LL;

	t25 = (((x1121<x1122)|x1123)>>x1124);

	if (t25 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x1137 = 2879011509239LLU;
	int8_t x1138 = 6;
	volatile int16_t x1139 = 13774;
	static uint8_t x1140 = 3U;
	volatile int32_t t26 = 7374902;

	t26 = (((x1137<x1138)|x1139)>>x1140);

	if (t26 != 1721) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1193 = 33U;
	int64_t x1194 = INT64_MIN;
	static uint32_t x1195 = 3346U;
	static uint8_t x1196 = 0U;
	uint32_t t27 = 663698U;

	t27 = (((x1193<x1194)|x1195)>>x1196);

	if (t27 != 3346U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x1233 = 22555U;
	int32_t x1234 = INT32_MAX;
	int8_t x1235 = INT8_MAX;
	uint8_t x1236 = 2U;
	int32_t t28 = 403662;

	t28 = (((x1233<x1234)|x1235)>>x1236);

	if (t28 != 31) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1249 = INT8_MAX;
	volatile int8_t x1250 = INT8_MIN;
	int8_t x1251 = 1;
	static int64_t x1252 = 15LL;

	t29 = (((x1249<x1250)|x1251)>>x1252);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x1305 = 13U;
	int64_t x1306 = INT64_MIN;
	volatile int64_t x1307 = INT64_MAX;
	volatile int64_t t30 = 933145949828562595LL;

	t30 = (((x1305<x1306)|x1307)>>x1308);

	if (t30 != 288230376151711743LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x1425 = UINT16_MAX;
	static uint16_t x1427 = 18U;
	static volatile int16_t x1428 = 7;
	volatile int32_t t31 = -5186;

	t31 = (((x1425<x1426)|x1427)>>x1428);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x1482 = INT32_MIN;
	static uint8_t x1483 = 6U;
	volatile uint8_t x1484 = 1U;
	int32_t t32 = 6985928;

	t32 = (((x1481<x1482)|x1483)>>x1484);

	if (t32 != 3) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1613 = 10689;
	int8_t x1614 = INT8_MIN;
	uint16_t x1615 = 482U;
	int32_t t33 = -15;

	t33 = (((x1613<x1614)|x1615)>>x1616);

	if (t33 != 60) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x1622 = 634U;
	int32_t x1623 = 101860244;
	uint8_t x1624 = 12U;
	int32_t t34 = 4;

	t34 = (((x1621<x1622)|x1623)>>x1624);

	if (t34 != 24868) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x1733 = 23U;
	uint64_t x1734 = UINT64_MAX;
	int8_t x1735 = 1;
	uint16_t x1736 = 5U;

	t35 = (((x1733<x1734)|x1735)>>x1736);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x1738 = UINT32_MAX;
	uint8_t x1739 = UINT8_MAX;
	static volatile int32_t t36 = 990165;

	t36 = (((x1737<x1738)|x1739)>>x1740);

	if (t36 != 127) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x1766 = 1679U;
	int16_t x1767 = 35;
	int8_t x1768 = 0;
	int32_t t37 = -27465;

	t37 = (((x1765<x1766)|x1767)>>x1768);

	if (t37 != 35) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x1969 = UINT32_MAX;
	uint32_t x1970 = 924462U;
	uint64_t x1971 = UINT64_MAX;
	static int8_t x1972 = 0;
	volatile uint64_t t38 = UINT64_MAX;

	t38 = (((x1969<x1970)|x1971)>>x1972);

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x1985 = 55508430545764LLU;
	int64_t x1986 = INT64_MAX;
	int32_t x1987 = 45;
	volatile int8_t x1988 = 0;
	int32_t t39 = 32683;

	t39 = (((x1985<x1986)|x1987)>>x1988);

	if (t39 != 45) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x1993 = INT32_MIN;
	static volatile uint8_t x1995 = 1U;
	uint16_t x1996 = 1U;
	volatile int32_t t40 = 4036069;

	t40 = (((x1993<x1994)|x1995)>>x1996);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x2045 = -1;
	int16_t x2046 = -209;
	volatile uint64_t x2047 = UINT64_MAX;
	uint8_t x2048 = 3U;
	uint64_t t41 = 2808770443513092282LLU;

	t41 = (((x2045<x2046)|x2047)>>x2048);

	if (t41 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x2069 = UINT8_MAX;
	int16_t x2070 = -1;
	uint16_t x2071 = 5357U;
	uint16_t x2072 = 0U;
	int32_t t42 = -28;

	t42 = (((x2069<x2070)|x2071)>>x2072);

	if (t42 != 5357) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x2075 = 1;
	uint8_t x2076 = 8U;
	volatile int32_t t43 = 221;

	t43 = (((x2073<x2074)|x2075)>>x2076);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x2121 = 2;
	static uint32_t x2122 = 11377654U;
	volatile int32_t x2123 = 1942;
	int16_t x2124 = 8;
	volatile int32_t t44 = -1824;

	t44 = (((x2121<x2122)|x2123)>>x2124);

	if (t44 != 7) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x2129 = -1LL;
	static int8_t x2131 = 0;
	volatile uint8_t x2132 = 14U;
	volatile int32_t t45 = -781;

	t45 = (((x2129<x2130)|x2131)>>x2132);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x2177 = -227;
	static int16_t x2179 = 24;
	volatile uint16_t x2180 = 9U;

	t46 = (((x2177<x2178)|x2179)>>x2180);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x2197 = INT8_MIN;
	volatile int64_t x2198 = INT64_MIN;
	volatile int8_t x2200 = 63;
	volatile int64_t t47 = -5384LL;

	t47 = (((x2197<x2198)|x2199)>>x2200);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x2201 = 2080610329281LLU;
	static uint32_t x2202 = 126295091U;
	uint8_t x2203 = 0U;
	uint64_t x2204 = 17LLU;
	int32_t t48 = -16863;

	t48 = (((x2201<x2202)|x2203)>>x2204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x2257 = INT64_MIN;
	uint64_t x2259 = 38348LLU;
	uint8_t x2260 = 44U;
	static volatile uint64_t t49 = 32183LLU;

	t49 = (((x2257<x2258)|x2259)>>x2260);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x2509 = 196U;
	volatile int8_t x2510 = -31;
	volatile int32_t x2511 = INT32_MAX;
	int32_t t50 = INT32_MAX;

	t50 = (((x2509<x2510)|x2511)>>x2512);

	if (t50 != INT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x2770 = INT8_MIN;
	int16_t x2771 = 191;

	t51 = (((x2769<x2770)|x2771)>>x2772);

	if (t51 != 11) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x2809 = 6;
	volatile uint8_t x2810 = UINT8_MAX;
	uint8_t x2811 = UINT8_MAX;
	uint8_t x2812 = 20U;
	volatile int32_t t52 = -293;

	t52 = (((x2809<x2810)|x2811)>>x2812);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x2817 = 729869092730029947LLU;
	int64_t x2819 = INT64_MAX;

	t53 = (((x2817<x2818)|x2819)>>x2820);

	if (t53 != 144115188075855871LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x2909 = 28U;
	static int8_t x2910 = 0;
	volatile uint32_t x2911 = 298967U;
	uint32_t t54 = 22U;

	t54 = (((x2909<x2910)|x2911)>>x2912);

	if (t54 != 149483U) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x2913 = UINT8_MAX;
	int8_t x2914 = 1;
	static uint64_t x2915 = 194555931680930LLU;
	static volatile uint8_t x2916 = 0U;
	static uint64_t t55 = 698614289491LLU;

	t55 = (((x2913<x2914)|x2915)>>x2916);

	if (t55 != 194555931680930LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x2921 = 0U;
	uint64_t x2923 = UINT64_MAX;
	uint16_t x2924 = 2U;
	static uint64_t t56 = 498LLU;

	t56 = (((x2921<x2922)|x2923)>>x2924);

	if (t56 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x2933 = 0U;
	static uint8_t x2934 = 3U;
	static int64_t x2935 = INT64_MAX;
	uint8_t x2936 = 1U;
	int64_t t57 = 304236435854LL;

	t57 = (((x2933<x2934)|x2935)>>x2936);

	if (t57 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x3170 = 982LLU;
	uint16_t x3171 = UINT16_MAX;
	static int8_t x3172 = 0;

	t58 = (((x3169<x3170)|x3171)>>x3172);

	if (t58 != 65535) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x3293 = -84018;
	uint8_t x3294 = 1U;
	static uint64_t x3295 = UINT64_MAX;
	int16_t x3296 = 14;

	t59 = (((x3293<x3294)|x3295)>>x3296);

	if (t59 != 1125899906842623LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x3305 = -1LL;
	static int16_t x3306 = -1;
	uint16_t x3307 = 1U;
	int32_t x3308 = 15;

	t60 = (((x3305<x3306)|x3307)>>x3308);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x3369 = 429444U;
	int16_t x3370 = INT16_MAX;
	static uint32_t x3371 = 40564U;
	static int64_t x3372 = 3LL;
	volatile uint32_t t61 = 15326326U;

	t61 = (((x3369<x3370)|x3371)>>x3372);

	if (t61 != 5070U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x3433 = 59;
	static int64_t x3435 = INT64_MAX;
	int64_t t62 = -533927602725182262LL;

	t62 = (((x3433<x3434)|x3435)>>x3436);

	if (t62 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x3721 = 15U;
	volatile int8_t x3722 = -1;
	int16_t x3723 = 88;
	uint8_t x3724 = 0U;
	volatile int32_t t63 = 11585;

	t63 = (((x3721<x3722)|x3723)>>x3724);

	if (t63 != 89) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x3725 = -1;
	uint16_t x3727 = 929U;
	int32_t t64 = -973;

	t64 = (((x3725<x3726)|x3727)>>x3728);

	if (t64 != 929) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x3757 = -1;
	int8_t x3758 = INT8_MAX;
	int64_t x3759 = 0LL;
	int64_t t65 = 16038LL;

	t65 = (((x3757<x3758)|x3759)>>x3760);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int8_t x3949 = -2;
	uint64_t x3950 = 609786735098882747LLU;
	uint64_t x3951 = 86465896916LLU;
	int16_t x3952 = 28;
	uint64_t t66 = 841LLU;

	t66 = (((x3949<x3950)|x3951)>>x3952);

	if (t66 != 322LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x3978 = INT16_MAX;
	uint16_t x3979 = 31U;
	static volatile int32_t t67 = 43;

	t67 = (((x3977<x3978)|x3979)>>x3980);

	if (t67 != 15) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x3985 = -1985354853239LL;
	int32_t x3986 = INT32_MIN;
	uint64_t x3987 = 7661397858LLU;
	static int8_t x3988 = 4;
	uint64_t t68 = 172LLU;

	t68 = (((x3985<x3986)|x3987)>>x3988);

	if (t68 != 478837366LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x4005 = 250U;
	static int8_t x4006 = INT8_MIN;
	uint64_t x4007 = UINT64_MAX;
	static volatile uint64_t t69 = 3410LLU;

	t69 = (((x4005<x4006)|x4007)>>x4008);

	if (t69 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x4009 = 0U;
	int64_t x4010 = -1LL;
	static volatile uint8_t x4011 = 34U;
	int32_t x4012 = 13;
	volatile int32_t t70 = 85;

	t70 = (((x4009<x4010)|x4011)>>x4012);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x4037 = -450480174417LL;
	static uint64_t x4038 = 442LLU;
	static uint16_t x4039 = UINT16_MAX;
	uint8_t x4040 = 1U;
	int32_t t71 = 1;

	t71 = (((x4037<x4038)|x4039)>>x4040);

	if (t71 != 32767) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x4153 = INT8_MIN;
	int16_t x4154 = INT16_MIN;
	uint32_t x4155 = UINT32_MAX;
	uint8_t x4156 = 0U;
	volatile uint32_t t72 = UINT32_MAX;

	t72 = (((x4153<x4154)|x4155)>>x4156);

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x4257 = 16219378U;
	int32_t x4258 = 24846;
	uint64_t x4259 = UINT64_MAX;
	static uint64_t t73 = 3601729349679243LLU;

	t73 = (((x4257<x4258)|x4259)>>x4260);

	if (t73 != 2199023255551LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x4393 = INT16_MIN;
	static int8_t x4394 = -2;
	static uint64_t x4395 = UINT64_MAX;
	int32_t x4396 = 13;

	t74 = (((x4393<x4394)|x4395)>>x4396);

	if (t74 != 2251799813685247LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x4477 = UINT16_MAX;
	static uint64_t x4478 = UINT64_MAX;
	uint32_t x4479 = 5U;
	uint32_t t75 = 1548407U;

	t75 = (((x4477<x4478)|x4479)>>x4480);

	if (t75 != 5U) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x4494 = INT32_MAX;
	static int32_t x4495 = INT32_MAX;
	int16_t x4496 = 2;
	int32_t t76 = 85079;

	t76 = (((x4493<x4494)|x4495)>>x4496);

	if (t76 != 536870911) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x4614 = -6604;
	uint32_t x4615 = 9918870U;
	uint8_t x4616 = 0U;

	t77 = (((x4613<x4614)|x4615)>>x4616);

	if (t77 != 9918870U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x4621 = 14U;
	volatile uint16_t x4622 = 25U;
	static volatile uint64_t x4623 = 36436076534LLU;
	static int8_t x4624 = 4;
	volatile uint64_t t78 = 94623293310910184LLU;

	t78 = (((x4621<x4622)|x4623)>>x4624);

	if (t78 != 2277254783LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x4625 = -1;
	uint32_t x4626 = 5U;
	static int16_t x4627 = INT16_MAX;
	int16_t x4628 = 0;
	volatile int32_t t79 = -11;

	t79 = (((x4625<x4626)|x4627)>>x4628);

	if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x4669 = 9032046U;
	volatile int8_t x4670 = INT8_MIN;
	static int32_t x4671 = INT32_MAX;
	int16_t x4672 = 9;
	static volatile int32_t t80 = 119;

	t80 = (((x4669<x4670)|x4671)>>x4672);

	if (t80 != 4194303) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x4689 = -1LL;
	static int32_t x4690 = 6;
	uint16_t x4692 = 18U;
	int32_t t81 = 1603789;

	t81 = (((x4689<x4690)|x4691)>>x4692);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x4711 = INT64_MAX;
	int64_t t82 = 870839861388LL;

	t82 = (((x4709<x4710)|x4711)>>x4712);

	if (t82 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x4713 = INT64_MIN;
	int32_t x4714 = INT32_MAX;
	static volatile uint64_t x4715 = 35595191465LLU;
	static uint32_t x4716 = 7U;
	uint64_t t83 = 1127892035228893235LLU;

	t83 = (((x4713<x4714)|x4715)>>x4716);

	if (t83 != 278087433LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x4717 = INT64_MIN;
	volatile int64_t x4718 = INT64_MAX;
	int8_t x4719 = INT8_MAX;
	int32_t x4720 = 19;
	volatile int32_t t84 = 13576203;

	t84 = (((x4717<x4718)|x4719)>>x4720);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x4902 = 12U;
	int8_t x4903 = 0;
	int32_t t85 = -158;

	t85 = (((x4901<x4902)|x4903)>>x4904);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x4942 = 24U;
	volatile uint64_t x4943 = 66280206198875122LLU;
	static int8_t x4944 = 1;
	uint64_t t86 = 64789541348632LLU;

	t86 = (((x4941<x4942)|x4943)>>x4944);

	if (t86 != 33140103099437561LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x5001 = -1LL;
	int16_t x5002 = -72;
	uint64_t x5003 = UINT64_MAX;
	uint8_t x5004 = 0U;

	t87 = (((x5001<x5002)|x5003)>>x5004);

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x5013 = UINT16_MAX;
	int16_t x5014 = -1;
	volatile int8_t x5015 = INT8_MAX;
	static uint16_t x5016 = 3U;
	int32_t t88 = -48974;

	t88 = (((x5013<x5014)|x5015)>>x5016);

	if (t88 != 15) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint64_t x5073 = 5018425128711LLU;
	int16_t x5074 = -1;
	volatile int32_t x5075 = INT32_MAX;
	static int8_t x5076 = 5;
	int32_t t89 = -130;

	t89 = (((x5073<x5074)|x5075)>>x5076);

	if (t89 != 67108863) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x5093 = 4863286087222990LLU;
	static volatile int64_t x5094 = INT64_MIN;
	uint8_t x5095 = 5U;
	uint8_t x5096 = 3U;

	t90 = (((x5093<x5094)|x5095)>>x5096);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x5145 = -40946300;
	uint16_t x5146 = 119U;
	int16_t x5148 = 1;
	static int32_t t91 = -854691850;

	t91 = (((x5145<x5146)|x5147)>>x5148);

	if (t91 != 127) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x5294 = UINT32_MAX;
	static uint64_t x5295 = 6236LLU;
	volatile int16_t x5296 = 2;
	volatile uint64_t t92 = 27342525LLU;

	t92 = (((x5293<x5294)|x5295)>>x5296);

	if (t92 != 1559LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x5303 = 30494U;
	static uint32_t x5304 = 15U;
	static volatile uint32_t t93 = 2U;

	t93 = (((x5301<x5302)|x5303)>>x5304);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x5333 = INT8_MIN;
	static uint16_t x5335 = UINT16_MAX;
	volatile int32_t t94 = 1517834;

	t94 = (((x5333<x5334)|x5335)>>x5336);

	if (t94 != 8191) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x5357 = 5U;
	uint8_t x5358 = 13U;
	uint64_t x5359 = 3035688752236003487LLU;
	volatile uint64_t t95 = 537356224LLU;

	t95 = (((x5357<x5358)|x5359)>>x5360);

	if (t95 != 3035688752236003487LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x5374 = 15246619;
	int32_t x5375 = 4;
	static uint8_t x5376 = 1U;
	int32_t t96 = 118252665;

	t96 = (((x5373<x5374)|x5375)>>x5376);

	if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x5641 = -1;
	uint16_t x5643 = 1880U;
	int32_t t97 = 69764461;

	t97 = (((x5641<x5642)|x5643)>>x5644);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x5657 = -1LL;
	int32_t x5658 = 1;
	volatile int16_t x5660 = 0;
	static volatile uint32_t t98 = UINT32_MAX;

	t98 = (((x5657<x5658)|x5659)>>x5660);

	if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x5681 = UINT32_MAX;
	volatile int16_t x5682 = INT16_MAX;
	int32_t x5683 = INT32_MAX;
	uint32_t x5684 = 10U;
	static int32_t t99 = 117;

	t99 = (((x5681<x5682)|x5683)>>x5684);

	if (t99 != 2097151) { NG(); } else { ; }
	
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

