#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x299 = INT8_MAX;
static int32_t x313 = 8211980;
static volatile int32_t t7 = -4098250;
uint64_t x401 = UINT64_MAX;
int8_t x420 = 15;
static int16_t x479 = -1;
static int32_t t10 = 110470232;
uint64_t x482 = UINT64_MAX;
uint16_t x716 = 7U;
static uint8_t x756 = 0U;
static volatile int32_t t17 = -154642229;
static volatile int32_t t18 = 355;
int64_t x818 = -154773LL;
volatile int16_t x897 = -1;
static uint8_t x906 = 17U;
static int8_t x907 = -23;
volatile int32_t t25 = 119840989;
int64_t x1067 = -1LL;
static int32_t t27 = 119;
uint64_t x1137 = 300LLU;
volatile int32_t t28 = 0;
int8_t x1147 = INT8_MIN;
volatile uint16_t x1148 = 0U;
int8_t x1149 = -6;
volatile int8_t x1150 = INT8_MAX;
uint16_t x1152 = 3U;
int32_t t30 = 5310462;
static int32_t x1181 = -1;
static int32_t t31 = 390;
int64_t x1220 = 11LL;
static int64_t x1323 = 7003LL;
volatile uint16_t x1324 = 5U;
int64_t x1367 = -2276LL;
volatile int32_t x1399 = -1;
uint16_t x1425 = 2U;
int32_t x1437 = INT32_MIN;
static uint64_t x1439 = 197353744LLU;
volatile uint16_t x1440 = 11U;
volatile uint32_t x1550 = 1U;
static int16_t x1706 = INT16_MAX;
static int8_t x1758 = 13;
uint8_t x1802 = 119U;
int32_t t49 = -306463014;
int16_t x2033 = INT16_MIN;
volatile int64_t x2034 = 230954280705LL;
int8_t x2036 = 0;
volatile uint8_t x2080 = 0U;
volatile int32_t t52 = 174;
volatile uint8_t x2122 = 1U;
volatile int32_t t53 = 190;
int16_t x2138 = INT16_MIN;
int16_t x2188 = 1;
static uint8_t x2193 = 9U;
int16_t x2249 = INT16_MAX;
static int64_t x2306 = INT64_MAX;
int32_t t63 = -58585;
static uint32_t x2430 = UINT32_MAX;
volatile int32_t t65 = 63382780;
volatile int16_t x2657 = -7;
int8_t x2695 = INT8_MAX;
int8_t x2696 = 1;
int8_t x2713 = -2;
volatile uint32_t x2715 = 0U;
uint8_t x2716 = 1U;
int64_t x2717 = 3LL;
volatile int32_t t73 = 517020;
int64_t x2841 = -22LL;
int16_t x2843 = INT16_MIN;
int64_t x2885 = INT64_MIN;
int32_t x2887 = -2318;
volatile int32_t t76 = 5878;
int16_t x2911 = 184;
int8_t x2912 = 2;
volatile uint8_t x2929 = UINT8_MAX;
int32_t x2930 = -1;
int32_t x2932 = 0;
static int8_t x2988 = 0;
int16_t x3010 = -721;
static int8_t x3012 = 1;
static uint8_t x3095 = 20U;
static int32_t t82 = 6;
int16_t x3099 = -888;
volatile int32_t t83 = -7;
uint16_t x3165 = 30U;
static volatile int8_t x3166 = INT8_MIN;
volatile uint16_t x3168 = 15U;
uint16_t x3194 = 12049U;
uint8_t x3196 = 0U;
volatile int32_t t86 = 486179067;
uint64_t x3267 = 345992881147LLU;
uint8_t x3292 = 6U;
volatile int16_t x3297 = -1;
int16_t x3351 = INT16_MAX;
static uint16_t x3442 = UINT16_MAX;
int32_t t95 = 85983;
int8_t x3501 = INT8_MAX;
uint64_t x3504 = 0LLU;
volatile int16_t x3513 = -14;


void f0(void) {
	int8_t x189 = -41;
	volatile uint32_t x190 = 9740U;
	int16_t x191 = -187;
	uint32_t x192 = 0U;
	int32_t t0 = 7;

	t0 = ((x189==(x190*x191))<<x192);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x229 = 46806U;
	int8_t x230 = -7;
	uint8_t x231 = 98U;
	volatile int8_t x232 = 1;
	volatile int32_t t1 = 120;

	t1 = ((x229==(x230*x231))<<x232);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x293 = UINT16_MAX;
	int8_t x294 = -1;
	int16_t x295 = -1;
	static int16_t x296 = 10;
	int32_t t2 = 2432;

	t2 = ((x293==(x294*x295))<<x296);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x297 = -1;
	static volatile int16_t x298 = INT16_MIN;
	volatile uint8_t x300 = 8U;
	volatile int32_t t3 = -121109566;

	t3 = ((x297==(x298*x299))<<x300);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x309 = UINT16_MAX;
	static int16_t x310 = 954;
	int32_t x311 = 95342;
	static int8_t x312 = 1;
	int32_t t4 = 30;

	t4 = ((x309==(x310*x311))<<x312);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x314 = 3992518095901LLU;
	static uint16_t x315 = 245U;
	int8_t x316 = 0;
	volatile int32_t t5 = -934225;

	t5 = ((x313==(x314*x315))<<x316);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x333 = 132286036641618LL;
	static uint32_t x334 = UINT32_MAX;
	static int16_t x335 = -5;
	uint16_t x336 = 0U;
	int32_t t6 = -1;

	t6 = ((x333==(x334*x335))<<x336);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x373 = UINT8_MAX;
	int8_t x374 = INT8_MAX;
	uint32_t x375 = 12632U;
	int8_t x376 = 13;

	t7 = ((x373==(x374*x375))<<x376);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x402 = -1LL;
	int32_t x403 = INT32_MIN;
	uint8_t x404 = 7U;
	static volatile int32_t t8 = -16441036;

	t8 = ((x401==(x402*x403))<<x404);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x417 = 2057252773U;
	volatile uint8_t x418 = 1U;
	int8_t x419 = INT8_MAX;
	int32_t t9 = 1886636;

	t9 = ((x417==(x418*x419))<<x420);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x477 = -1053322007487LL;
	static int32_t x478 = -2373;
	volatile uint16_t x480 = 16U;

	t10 = ((x477==(x478*x479))<<x480);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int64_t x481 = 27352LL;
	int8_t x483 = -1;
	uint8_t x484 = 2U;
	static int32_t t11 = -1;

	t11 = ((x481==(x482*x483))<<x484);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x485 = INT64_MAX;
	int16_t x486 = 96;
	uint64_t x487 = 563817LLU;
	uint16_t x488 = 10U;
	int32_t t12 = -2515508;

	t12 = ((x485==(x486*x487))<<x488);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x509 = INT32_MAX;
	uint16_t x510 = 1398U;
	volatile int8_t x511 = INT8_MIN;
	volatile uint8_t x512 = 0U;
	static volatile int32_t t13 = 15;

	t13 = ((x509==(x510*x511))<<x512);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x521 = INT8_MAX;
	uint8_t x522 = 5U;
	int8_t x523 = -1;
	int8_t x524 = 2;
	int32_t t14 = -262107;

	t14 = ((x521==(x522*x523))<<x524);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x713 = UINT16_MAX;
	static int16_t x714 = INT16_MIN;
	static volatile int8_t x715 = INT8_MIN;
	int32_t t15 = 255654;

	t15 = ((x713==(x714*x715))<<x716);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x753 = -1;
	uint8_t x754 = 8U;
	int64_t x755 = -166891963LL;
	volatile int32_t t16 = -3;

	t16 = ((x753==(x754*x755))<<x756);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x761 = INT16_MAX;
	int64_t x762 = -1LL;
	int32_t x763 = INT32_MIN;
	static uint16_t x764 = 2U;

	t17 = ((x761==(x762*x763))<<x764);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x789 = 3667LLU;
	uint8_t x790 = UINT8_MAX;
	int8_t x791 = -6;
	int16_t x792 = 3;

	t18 = ((x789==(x790*x791))<<x792);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x797 = 426846567;
	int32_t x798 = INT32_MAX;
	uint32_t x799 = 1U;
	uint8_t x800 = 27U;
	int32_t t19 = -8;

	t19 = ((x797==(x798*x799))<<x800);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x817 = 244U;
	int8_t x819 = -3;
	static uint16_t x820 = 6U;
	volatile int32_t t20 = -698;

	t20 = ((x817==(x818*x819))<<x820);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x849 = -1;
	int8_t x850 = INT8_MIN;
	int32_t x851 = 7750976;
	int8_t x852 = 31;
	volatile int32_t t21 = 2571347;

	t21 = ((x849==(x850*x851))<<x852);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x898 = 1446;
	volatile int8_t x899 = -1;
	static uint16_t x900 = 3U;
	int32_t t22 = 12343;

	t22 = ((x897==(x898*x899))<<x900);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x901 = -177;
	static int64_t x902 = -870360103LL;
	static int8_t x903 = INT8_MIN;
	static int16_t x904 = 2;
	static volatile int32_t t23 = -1426533;

	t23 = ((x901==(x902*x903))<<x904);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x905 = 1761307U;
	static volatile uint8_t x908 = 3U;
	volatile int32_t t24 = -14239;

	t24 = ((x905==(x906*x907))<<x908);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x921 = -198;
	int64_t x922 = INT64_MIN;
	uint64_t x923 = UINT64_MAX;
	volatile uint16_t x924 = 0U;

	t25 = ((x921==(x922*x923))<<x924);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x973 = UINT16_MAX;
	int8_t x974 = INT8_MIN;
	uint32_t x975 = 382U;
	uint16_t x976 = 12U;
	volatile int32_t t26 = 490976;

	t26 = ((x973==(x974*x975))<<x976);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x1065 = UINT16_MAX;
	volatile uint8_t x1066 = 14U;
	int8_t x1068 = 0;

	t27 = ((x1065==(x1066*x1067))<<x1068);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x1138 = -1;
	static volatile uint32_t x1139 = 16493804U;
	uint16_t x1140 = 1U;

	t28 = ((x1137==(x1138*x1139))<<x1140);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x1145 = UINT64_MAX;
	static int16_t x1146 = INT16_MAX;
	int32_t t29 = -21980;

	t29 = ((x1145==(x1146*x1147))<<x1148);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1151 = -475;

	t30 = ((x1149==(x1150*x1151))<<x1152);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1182 = 51U;
	volatile int8_t x1183 = INT8_MAX;
	uint8_t x1184 = 11U;

	t31 = ((x1181==(x1182*x1183))<<x1184);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x1217 = UINT32_MAX;
	static int8_t x1218 = -1;
	int64_t x1219 = 2686073375988487LL;
	volatile int32_t t32 = 115;

	t32 = ((x1217==(x1218*x1219))<<x1220);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x1281 = INT32_MIN;
	int32_t x1282 = -1;
	uint16_t x1283 = 1461U;
	uint64_t x1284 = 3LLU;
	volatile int32_t t33 = 3813198;

	t33 = ((x1281==(x1282*x1283))<<x1284);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x1321 = -1LL;
	static int16_t x1322 = -12791;
	int32_t t34 = -1765656;

	t34 = ((x1321==(x1322*x1323))<<x1324);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x1365 = 24U;
	volatile uint32_t x1366 = 127913U;
	int32_t x1368 = 0;
	volatile int32_t t35 = 7;

	t35 = ((x1365==(x1366*x1367))<<x1368);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1397 = -1;
	int16_t x1398 = INT16_MIN;
	uint16_t x1400 = 30U;
	int32_t t36 = 1;

	t36 = ((x1397==(x1398*x1399))<<x1400);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x1426 = INT8_MIN;
	int32_t x1427 = -1;
	static int8_t x1428 = 8;
	volatile int32_t t37 = -70262;

	t37 = ((x1425==(x1426*x1427))<<x1428);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint16_t x1438 = UINT16_MAX;
	volatile int32_t t38 = 17;

	t38 = ((x1437==(x1438*x1439))<<x1440);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x1549 = INT16_MIN;
	int64_t x1551 = INT64_MAX;
	uint32_t x1552 = 1U;
	static volatile int32_t t39 = 469478155;

	t39 = ((x1549==(x1550*x1551))<<x1552);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x1625 = INT16_MIN;
	volatile uint32_t x1626 = 5915U;
	volatile int16_t x1627 = INT16_MAX;
	volatile uint16_t x1628 = 8U;
	volatile int32_t t40 = 366;

	t40 = ((x1625==(x1626*x1627))<<x1628);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x1661 = 13897666883LL;
	uint8_t x1662 = UINT8_MAX;
	static int64_t x1663 = -48LL;
	volatile int8_t x1664 = 0;
	int32_t t41 = 41;

	t41 = ((x1661==(x1662*x1663))<<x1664);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint32_t x1669 = UINT32_MAX;
	static int64_t x1670 = 321863189723516605LL;
	int8_t x1671 = -1;
	static volatile int8_t x1672 = 1;
	volatile int32_t t42 = -5;

	t42 = ((x1669==(x1670*x1671))<<x1672);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x1685 = UINT8_MAX;
	uint64_t x1686 = 16327960LLU;
	volatile int64_t x1687 = INT64_MIN;
	volatile uint64_t x1688 = 8LLU;
	volatile int32_t t43 = -3803783;

	t43 = ((x1685==(x1686*x1687))<<x1688);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x1705 = UINT64_MAX;
	int8_t x1707 = INT8_MIN;
	volatile uint16_t x1708 = 1U;
	volatile int32_t t44 = -10002;

	t44 = ((x1705==(x1706*x1707))<<x1708);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x1757 = 61334920LL;
	uint32_t x1759 = 1747105143U;
	int32_t x1760 = 1;
	int32_t t45 = 13583;

	t45 = ((x1757==(x1758*x1759))<<x1760);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x1765 = UINT8_MAX;
	int8_t x1766 = -1;
	uint16_t x1767 = 570U;
	uint16_t x1768 = 0U;
	static int32_t t46 = -269;

	t46 = ((x1765==(x1766*x1767))<<x1768);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x1773 = INT64_MIN;
	static int8_t x1774 = INT8_MIN;
	int16_t x1775 = INT16_MAX;
	static volatile uint8_t x1776 = 0U;
	volatile int32_t t47 = -202;

	t47 = ((x1773==(x1774*x1775))<<x1776);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x1801 = INT64_MAX;
	int32_t x1803 = -1;
	uint8_t x1804 = 0U;
	volatile int32_t t48 = 52970;

	t48 = ((x1801==(x1802*x1803))<<x1804);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x1877 = INT32_MAX;
	static uint16_t x1878 = 14892U;
	volatile int16_t x1879 = INT16_MAX;
	uint16_t x1880 = 1U;

	t49 = ((x1877==(x1878*x1879))<<x1880);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x2013 = 604426705U;
	volatile uint8_t x2014 = 1U;
	volatile uint8_t x2015 = 6U;
	uint8_t x2016 = 1U;
	static volatile int32_t t50 = 3354;

	t50 = ((x2013==(x2014*x2015))<<x2016);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x2035 = 26419U;
	volatile int32_t t51 = -24;

	t51 = ((x2033==(x2034*x2035))<<x2036);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x2077 = UINT16_MAX;
	uint8_t x2078 = 1U;
	uint32_t x2079 = 14042226U;

	t52 = ((x2077==(x2078*x2079))<<x2080);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x2121 = 780U;
	uint16_t x2123 = UINT16_MAX;
	static uint8_t x2124 = 0U;

	t53 = ((x2121==(x2122*x2123))<<x2124);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x2137 = -1;
	volatile int8_t x2139 = -1;
	int8_t x2140 = 22;
	static volatile int32_t t54 = 0;

	t54 = ((x2137==(x2138*x2139))<<x2140);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x2185 = INT64_MIN;
	uint32_t x2186 = 46507026U;
	uint8_t x2187 = 54U;
	static int32_t t55 = 7;

	t55 = ((x2185==(x2186*x2187))<<x2188);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x2194 = INT16_MIN;
	uint8_t x2195 = 87U;
	static int8_t x2196 = 2;
	int32_t t56 = 759149570;

	t56 = ((x2193==(x2194*x2195))<<x2196);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x2213 = 125726487LLU;
	volatile int8_t x2214 = INT8_MAX;
	int8_t x2215 = INT8_MIN;
	int8_t x2216 = 0;
	volatile int32_t t57 = 15829;

	t57 = ((x2213==(x2214*x2215))<<x2216);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x2217 = INT8_MIN;
	volatile uint32_t x2218 = 380911359U;
	int8_t x2219 = -1;
	static uint32_t x2220 = 11U;
	volatile int32_t t58 = 457739239;

	t58 = ((x2217==(x2218*x2219))<<x2220);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x2250 = 61U;
	int16_t x2251 = INT16_MIN;
	int8_t x2252 = 31;
	volatile int32_t t59 = -9556;

	t59 = ((x2249==(x2250*x2251))<<x2252);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x2277 = 1204870607LLU;
	int8_t x2278 = 0;
	int64_t x2279 = 833688401692160LL;
	uint32_t x2280 = 16U;
	volatile int32_t t60 = -847799;

	t60 = ((x2277==(x2278*x2279))<<x2280);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x2305 = INT8_MIN;
	static int8_t x2307 = -1;
	uint8_t x2308 = 15U;
	static volatile int32_t t61 = -1;

	t61 = ((x2305==(x2306*x2307))<<x2308);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x2329 = -6;
	uint64_t x2330 = UINT64_MAX;
	uint64_t x2331 = UINT64_MAX;
	uint8_t x2332 = 12U;
	volatile int32_t t62 = 66;

	t62 = ((x2329==(x2330*x2331))<<x2332);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x2337 = UINT16_MAX;
	int16_t x2338 = INT16_MIN;
	volatile uint64_t x2339 = 30513509LLU;
	static volatile uint16_t x2340 = 6U;

	t63 = ((x2337==(x2338*x2339))<<x2340);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x2353 = 47U;
	uint64_t x2354 = 27890LLU;
	uint32_t x2355 = 12627U;
	int16_t x2356 = 6;
	volatile int32_t t64 = -599;

	t64 = ((x2353==(x2354*x2355))<<x2356);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x2429 = 21U;
	uint32_t x2431 = 115U;
	int8_t x2432 = 0;

	t65 = ((x2429==(x2430*x2431))<<x2432);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x2437 = -35;
	volatile uint64_t x2438 = UINT64_MAX;
	uint32_t x2439 = 614322856U;
	int32_t x2440 = 0;
	int32_t t66 = 157;

	t66 = ((x2437==(x2438*x2439))<<x2440);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x2601 = UINT16_MAX;
	int8_t x2602 = -1;
	int16_t x2603 = INT16_MAX;
	int16_t x2604 = 8;
	static int32_t t67 = 61;

	t67 = ((x2601==(x2602*x2603))<<x2604);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x2658 = -1;
	static uint16_t x2659 = 4U;
	uint8_t x2660 = 5U;
	volatile int32_t t68 = -1;

	t68 = ((x2657==(x2658*x2659))<<x2660);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x2661 = 9856LLU;
	static int8_t x2662 = 1;
	static int32_t x2663 = 761175;
	static int64_t x2664 = 2LL;
	int32_t t69 = 59021;

	t69 = ((x2661==(x2662*x2663))<<x2664);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x2693 = -1;
	int16_t x2694 = INT16_MIN;
	volatile int32_t t70 = 3047;

	t70 = ((x2693==(x2694*x2695))<<x2696);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x2714 = INT64_MIN;
	static volatile int32_t t71 = -4912;

	t71 = ((x2713==(x2714*x2715))<<x2716);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x2718 = 32883003539119588LL;
	uint64_t x2719 = 60849988LLU;
	static volatile uint8_t x2720 = 3U;
	volatile int32_t t72 = 0;

	t72 = ((x2717==(x2718*x2719))<<x2720);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x2765 = INT16_MAX;
	uint32_t x2766 = 92U;
	int8_t x2767 = -31;
	int8_t x2768 = 13;

	t73 = ((x2765==(x2766*x2767))<<x2768);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x2842 = 8008107LLU;
	int8_t x2844 = 20;
	int32_t t74 = -6193719;

	t74 = ((x2841==(x2842*x2843))<<x2844);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x2865 = INT16_MAX;
	int32_t x2866 = -1;
	int8_t x2867 = -1;
	static int8_t x2868 = 1;
	int32_t t75 = -263006237;

	t75 = ((x2865==(x2866*x2867))<<x2868);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x2886 = INT16_MAX;
	int16_t x2888 = 3;

	t76 = ((x2885==(x2886*x2887))<<x2888);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x2901 = UINT32_MAX;
	int64_t x2902 = INT64_MAX;
	static uint64_t x2903 = 1265LLU;
	static uint8_t x2904 = 29U;
	volatile int32_t t77 = 8713;

	t77 = ((x2901==(x2902*x2903))<<x2904);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x2909 = 4LL;
	int16_t x2910 = -3797;
	volatile int32_t t78 = 11;

	t78 = ((x2909==(x2910*x2911))<<x2912);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x2931 = 19124U;
	int32_t t79 = -13314;

	t79 = ((x2929==(x2930*x2931))<<x2932);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x2985 = INT64_MIN;
	volatile int16_t x2986 = INT16_MIN;
	static int8_t x2987 = -2;
	int32_t t80 = 1;

	t80 = ((x2985==(x2986*x2987))<<x2988);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x3009 = 1;
	int32_t x3011 = 7;
	int32_t t81 = 42109392;

	t81 = ((x3009==(x3010*x3011))<<x3012);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x3093 = INT16_MAX;
	volatile uint16_t x3094 = UINT16_MAX;
	uint32_t x3096 = 13U;

	t82 = ((x3093==(x3094*x3095))<<x3096);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x3097 = 33456U;
	static int64_t x3098 = -1LL;
	static uint16_t x3100 = 1U;

	t83 = ((x3097==(x3098*x3099))<<x3100);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x3167 = UINT8_MAX;
	int32_t t84 = 62;

	t84 = ((x3165==(x3166*x3167))<<x3168);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x3189 = INT64_MAX;
	int8_t x3190 = -1;
	uint16_t x3191 = 6235U;
	static uint16_t x3192 = 0U;
	int32_t t85 = 1;

	t85 = ((x3189==(x3190*x3191))<<x3192);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x3193 = 401606338;
	uint64_t x3195 = 112740LLU;

	t86 = ((x3193==(x3194*x3195))<<x3196);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x3229 = INT32_MIN;
	int32_t x3230 = INT32_MIN;
	static volatile int64_t x3231 = -1LL;
	uint8_t x3232 = 7U;
	volatile int32_t t87 = -7553137;

	t87 = ((x3229==(x3230*x3231))<<x3232);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x3261 = 111U;
	int32_t x3262 = INT32_MAX;
	static uint64_t x3263 = 45022LLU;
	int32_t x3264 = 2;
	volatile int32_t t88 = 579682470;

	t88 = ((x3261==(x3262*x3263))<<x3264);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x3265 = INT16_MIN;
	uint8_t x3266 = 1U;
	uint8_t x3268 = 28U;
	volatile int32_t t89 = -88;

	t89 = ((x3265==(x3266*x3267))<<x3268);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x3289 = INT64_MAX;
	int16_t x3290 = INT16_MAX;
	int64_t x3291 = -1LL;
	int32_t t90 = -3410023;

	t90 = ((x3289==(x3290*x3291))<<x3292);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x3298 = -1LL;
	uint16_t x3299 = 34U;
	int16_t x3300 = 6;
	volatile int32_t t91 = 1;

	t91 = ((x3297==(x3298*x3299))<<x3300);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x3309 = UINT32_MAX;
	volatile uint16_t x3310 = 0U;
	int32_t x3311 = 21585340;
	uint32_t x3312 = 30U;
	volatile int32_t t92 = -70523510;

	t92 = ((x3309==(x3310*x3311))<<x3312);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x3349 = UINT32_MAX;
	static int16_t x3350 = -1;
	int8_t x3352 = 16;
	int32_t t93 = -18;

	t93 = ((x3349==(x3350*x3351))<<x3352);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x3401 = 26159003LL;
	static uint16_t x3402 = 1658U;
	int16_t x3403 = -30;
	int8_t x3404 = 0;
	int32_t t94 = 589;

	t94 = ((x3401==(x3402*x3403))<<x3404);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint64_t x3441 = 9271833LLU;
	static int16_t x3443 = 2129;
	uint8_t x3444 = 20U;

	t95 = ((x3441==(x3442*x3443))<<x3444);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x3445 = UINT16_MAX;
	static int8_t x3446 = -1;
	volatile int32_t x3447 = 1;
	static volatile uint16_t x3448 = 13U;
	volatile int32_t t96 = -16363221;

	t96 = ((x3445==(x3446*x3447))<<x3448);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x3502 = 16;
	int16_t x3503 = INT16_MAX;
	volatile int32_t t97 = 631482488;

	t97 = ((x3501==(x3502*x3503))<<x3504);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x3514 = INT16_MAX;
	int8_t x3515 = 7;
	volatile uint16_t x3516 = 15U;
	int32_t t98 = -6578978;

	t98 = ((x3513==(x3514*x3515))<<x3516);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x3557 = INT32_MIN;
	int8_t x3558 = 19;
	int16_t x3559 = INT16_MAX;
	uint8_t x3560 = 0U;
	volatile int32_t t99 = -15942;

	t99 = ((x3557==(x3558*x3559))<<x3560);

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

