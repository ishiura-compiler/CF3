
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

uint16_t x1 = 13552U;
volatile int32_t t0 = -162317169;
int32_t x323 = -1;
int64_t x405 = -1LL;
static int8_t x440 = -1;
uint32_t x593 = 231885577U;
uint64_t x771 = UINT64_MAX;
int16_t x877 = INT16_MIN;
int8_t x880 = INT8_MIN;
static int32_t t9 = -10;
int64_t x1047 = -1LL;
int32_t t11 = -27675915;
volatile int32_t t12 = -6101785;
static volatile int32_t x1079 = INT32_MIN;
static int8_t x1271 = -1;
uint32_t x1599 = UINT32_MAX;
uint32_t x1741 = UINT32_MAX;
int16_t x1923 = -1;
int8_t x1924 = -1;
int32_t x1930 = INT32_MIN;
static uint64_t x1937 = 83LLU;
int64_t x1939 = -1LL;
int16_t x2026 = 463;
volatile int32_t t23 = -1489;
static int32_t x2119 = -1;
static int32_t x2136 = -1;
int16_t x2182 = -1;
int16_t x2262 = INT16_MIN;
int8_t x2264 = INT8_MIN;
static volatile int16_t x2392 = -1;
static volatile int32_t t30 = 701446155;
static uint16_t x2698 = UINT16_MAX;
static int32_t t31 = 14081;
int8_t x2827 = 0;
int32_t t32 = -178623;
static int32_t t33 = 124;
int8_t x3157 = INT8_MIN;
volatile int64_t x3160 = INT64_MIN;
volatile int32_t t34 = -458594;
static int8_t x3161 = INT8_MAX;
static int32_t x3164 = INT32_MIN;
int32_t t35 = -424;
int64_t x3194 = 1420545LL;
static uint32_t x3548 = UINT32_MAX;
int32_t t39 = 3;
volatile int8_t x3563 = INT8_MAX;
static int32_t t40 = 87;
uint64_t x3750 = 11842298628369117LLU;
int8_t x3796 = -1;
volatile int8_t x3865 = 1;
static int32_t t43 = 687;
static volatile int8_t x3978 = INT8_MIN;
static int8_t x4057 = -2;
uint16_t x4162 = 0U;
volatile int16_t x4233 = -2;
uint16_t x4234 = UINT16_MAX;
int32_t x4235 = INT32_MIN;
int32_t x4236 = INT32_MIN;
volatile int32_t t49 = -5626031;
volatile int64_t x4569 = INT64_MAX;
int8_t x4621 = INT8_MIN;
volatile int8_t x4652 = -1;
int64_t x4821 = INT64_MAX;
volatile int32_t t55 = -8;
int8_t x5003 = -1;
static volatile uint32_t x5004 = UINT32_MAX;
volatile uint16_t x5041 = 809U;
static uint8_t x5042 = UINT8_MAX;
volatile int64_t x5129 = INT64_MIN;
int16_t x5132 = -1;
int32_t t59 = 767681;
static int64_t x5279 = INT64_MIN;
int64_t x5280 = INT64_MIN;
volatile uint32_t x5518 = 700U;


void f0(void) {
    	int64_t x2 = -3709LL;
	int16_t x3 = -1;
	static uint64_t x4 = UINT64_MAX;

    t0 = (x1!=(x2%(x3==x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x153 = INT8_MAX;
	uint16_t x154 = 85U;
	static volatile uint64_t x155 = UINT64_MAX;
	int8_t x156 = -1;
	int32_t t1 = -3;

    t1 = (x153!=(x154%(x155==x156)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint64_t x321 = 14476254401952LLU;
	volatile int32_t x322 = 1;
	uint32_t x324 = UINT32_MAX;
	volatile int32_t t2 = 3868745;

    t2 = (x321!=(x322%(x323==x324)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x406 = -1;
	volatile uint32_t x407 = UINT32_MAX;
	int16_t x408 = -1;
	int32_t t3 = 32391019;

    t3 = (x405!=(x406%(x407==x408)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x437 = 29346634214577LLU;
	volatile int32_t x438 = 7;
	int64_t x439 = -1LL;
	volatile int32_t t4 = -964509;

    t4 = (x437!=(x438%(x439==x440)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int32_t x529 = 5156;
	static int64_t x530 = INT64_MIN;
	volatile int16_t x531 = -1;
	static volatile int64_t x532 = -1LL;
	int32_t t5 = -4269867;

    t5 = (x529!=(x530%(x531==x532)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x594 = INT64_MIN;
	volatile int16_t x595 = -1;
	int64_t x596 = -1LL;
	static volatile int32_t t6 = -2777764;

    t6 = (x593!=(x594%(x595==x596)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x769 = INT32_MAX;
	volatile uint8_t x770 = UINT8_MAX;
	uint64_t x772 = UINT64_MAX;
	static volatile int32_t t7 = 1404384;

    t7 = (x769!=(x770%(x771==x772)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x878 = -25589124079577LL;
	int8_t x879 = INT8_MIN;
	volatile int32_t t8 = -405991;

    t8 = (x877!=(x878%(x879==x880)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x989 = 10U;
	uint64_t x990 = 5LLU;
	int8_t x991 = -1;
	int8_t x992 = -1;

    t9 = (x989!=(x990%(x991==x992)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint8_t x1033 = 1U;
	int64_t x1034 = -363LL;
	int16_t x1035 = INT16_MIN;
	int16_t x1036 = INT16_MIN;
	int32_t t10 = 1752;

    t10 = (x1033!=(x1034%(x1035==x1036)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x1045 = INT8_MAX;
	static uint64_t x1046 = 445927334375711080LLU;
	int8_t x1048 = -1;

    t11 = (x1045!=(x1046%(x1047==x1048)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int32_t x1053 = INT32_MIN;
	static uint64_t x1054 = 320266LLU;
	int8_t x1055 = -1;
	uint64_t x1056 = UINT64_MAX;

    t12 = (x1053!=(x1054%(x1055==x1056)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int16_t x1077 = 7;
	uint64_t x1078 = 895035151992380LLU;
	int32_t x1080 = INT32_MIN;
	volatile int32_t t13 = -1754;

    t13 = (x1077!=(x1078%(x1079==x1080)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x1269 = 0U;
	volatile int64_t x1270 = INT64_MAX;
	int64_t x1272 = -1LL;
	static volatile int32_t t14 = -36224;

    t14 = (x1269!=(x1270%(x1271==x1272)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x1457 = INT16_MIN;
	int32_t x1458 = 115562;
	int16_t x1459 = -1;
	volatile int16_t x1460 = -1;
	volatile int32_t t15 = -3;

    t15 = (x1457!=(x1458%(x1459==x1460)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x1597 = -1;
	uint16_t x1598 = 26U;
	volatile int8_t x1600 = -1;
	int32_t t16 = 80678;

    t16 = (x1597!=(x1598%(x1599==x1600)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x1733 = 211042079LLU;
	uint64_t x1734 = 2LLU;
	int8_t x1735 = INT8_MIN;
	volatile int8_t x1736 = INT8_MIN;
	volatile int32_t t17 = -109713323;

    t17 = (x1733!=(x1734%(x1735==x1736)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int64_t x1742 = INT64_MAX;
	int16_t x1743 = INT16_MAX;
	int16_t x1744 = INT16_MAX;
	int32_t t18 = 909833;

    t18 = (x1741!=(x1742%(x1743==x1744)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x1901 = INT16_MIN;
	int64_t x1902 = -1LL;
	static int16_t x1903 = INT16_MIN;
	int16_t x1904 = INT16_MIN;
	volatile int32_t t19 = -619885;

    t19 = (x1901!=(x1902%(x1903==x1904)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x1921 = UINT8_MAX;
	int8_t x1922 = -3;
	volatile int32_t t20 = 128178;

    t20 = (x1921!=(x1922%(x1923==x1924)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x1929 = -1LL;
	static int16_t x1931 = -1;
	uint32_t x1932 = UINT32_MAX;
	static int32_t t21 = 4379;

    t21 = (x1929!=(x1930%(x1931==x1932)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x1938 = INT64_MIN;
	volatile int8_t x1940 = -1;
	static volatile int32_t t22 = -10;

    t22 = (x1937!=(x1938%(x1939==x1940)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x2025 = UINT8_MAX;
	volatile uint64_t x2027 = UINT64_MAX;
	static volatile int64_t x2028 = -1LL;

    t23 = (x2025!=(x2026%(x2027==x2028)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint64_t x2117 = 387628307035162525LLU;
	int32_t x2118 = INT32_MIN;
	int64_t x2120 = -1LL;
	volatile int32_t t24 = -2021;

    t24 = (x2117!=(x2118%(x2119==x2120)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x2133 = INT32_MIN;
	int64_t x2134 = -1LL;
	uint32_t x2135 = UINT32_MAX;
	int32_t t25 = -49864563;

    t25 = (x2133!=(x2134%(x2135==x2136)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x2181 = INT16_MIN;
	int64_t x2183 = INT64_MAX;
	int64_t x2184 = INT64_MAX;
	static int32_t t26 = -7;

    t26 = (x2181!=(x2182%(x2183==x2184)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x2185 = 7991670U;
	int32_t x2186 = -143;
	volatile int16_t x2187 = -1;
	volatile uint32_t x2188 = UINT32_MAX;
	int32_t t27 = -94541859;

    t27 = (x2185!=(x2186%(x2187==x2188)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x2261 = 1803;
	volatile int8_t x2263 = INT8_MIN;
	int32_t t28 = 2;

    t28 = (x2261!=(x2262%(x2263==x2264)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x2389 = INT16_MIN;
	static uint64_t x2390 = UINT64_MAX;
	uint32_t x2391 = UINT32_MAX;
	volatile int32_t t29 = 811737;

    t29 = (x2389!=(x2390%(x2391==x2392)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x2393 = -15956107032792LL;
	int32_t x2394 = -1;
	volatile int32_t x2395 = INT32_MIN;
	int32_t x2396 = INT32_MIN;

    t30 = (x2393!=(x2394%(x2395==x2396)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x2697 = UINT8_MAX;
	int16_t x2699 = -1;
	static volatile uint32_t x2700 = UINT32_MAX;

    t31 = (x2697!=(x2698%(x2699==x2700)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x2825 = INT64_MAX;
	static volatile int32_t x2826 = INT32_MAX;
	int32_t x2828 = 0;

    t32 = (x2825!=(x2826%(x2827==x2828)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint64_t x2949 = 57399LLU;
	static int16_t x2950 = -1;
	uint32_t x2951 = UINT32_MAX;
	volatile int32_t x2952 = -1;

    t33 = (x2949!=(x2950%(x2951==x2952)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int8_t x3158 = INT8_MAX;
	static volatile int64_t x3159 = INT64_MIN;

    t34 = (x3157!=(x3158%(x3159==x3160)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x3162 = 9543418274LLU;
	int32_t x3163 = INT32_MIN;

    t35 = (x3161!=(x3162%(x3163==x3164)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x3193 = -1;
	volatile uint32_t x3195 = UINT32_MAX;
	volatile int32_t x3196 = -1;
	volatile int32_t t36 = -1633;

    t36 = (x3193!=(x3194%(x3195==x3196)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x3309 = -1;
	int8_t x3310 = -41;
	int8_t x3311 = -1;
	static int8_t x3312 = -1;
	int32_t t37 = -217729;

    t37 = (x3309!=(x3310%(x3311==x3312)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x3441 = 99U;
	volatile uint8_t x3442 = UINT8_MAX;
	static int32_t x3443 = INT32_MIN;
	static volatile int32_t x3444 = INT32_MIN;
	int32_t t38 = -4707679;

    t38 = (x3441!=(x3442%(x3443==x3444)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x3545 = -11398;
	int16_t x3546 = -1;
	int8_t x3547 = -1;

    t39 = (x3545!=(x3546%(x3547==x3548)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x3561 = 0;
	volatile uint32_t x3562 = 56450610U;
	int8_t x3564 = INT8_MAX;

    t40 = (x3561!=(x3562%(x3563==x3564)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x3749 = -1;
	int16_t x3751 = INT16_MIN;
	int16_t x3752 = INT16_MIN;
	int32_t t41 = 46;

    t41 = (x3749!=(x3750%(x3751==x3752)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile uint32_t x3793 = 2390693U;
	int16_t x3794 = INT16_MIN;
	uint64_t x3795 = UINT64_MAX;
	static int32_t t42 = -2252;

    t42 = (x3793!=(x3794%(x3795==x3796)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x3866 = 2;
	uint8_t x3867 = UINT8_MAX;
	uint8_t x3868 = UINT8_MAX;

    t43 = (x3865!=(x3866%(x3867==x3868)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x3921 = 12036;
	static volatile uint64_t x3922 = 2403308792620LLU;
	int16_t x3923 = INT16_MAX;
	static int16_t x3924 = INT16_MAX;
	int32_t t44 = -23791435;

    t44 = (x3921!=(x3922%(x3923==x3924)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x3973 = INT8_MAX;
	static int16_t x3974 = 70;
	int64_t x3975 = -1LL;
	volatile int16_t x3976 = -1;
	volatile int32_t t45 = 1;

    t45 = (x3973!=(x3974%(x3975==x3976)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x3977 = -1;
	volatile int16_t x3979 = INT16_MIN;
	int16_t x3980 = INT16_MIN;
	static int32_t t46 = 4;

    t46 = (x3977!=(x3978%(x3979==x3980)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x4058 = INT16_MIN;
	static int8_t x4059 = -1;
	volatile int16_t x4060 = -1;
	static int32_t t47 = -508349364;

    t47 = (x4057!=(x4058%(x4059==x4060)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x4161 = 3395LL;
	int64_t x4163 = -1LL;
	static int8_t x4164 = -1;
	static int32_t t48 = 240944794;

    t48 = (x4161!=(x4162%(x4163==x4164)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    

    t49 = (x4233!=(x4234%(x4235==x4236)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x4473 = INT32_MAX;
	int64_t x4474 = 10113LL;
	int16_t x4475 = -1;
	static volatile int16_t x4476 = -1;
	static volatile int32_t t50 = -18787702;

    t50 = (x4473!=(x4474%(x4475==x4476)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint8_t x4570 = 95U;
	uint32_t x4571 = UINT32_MAX;
	int16_t x4572 = -1;
	int32_t t51 = 355503;

    t51 = (x4569!=(x4570%(x4571==x4572)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint8_t x4622 = 3U;
	int32_t x4623 = -1;
	static int32_t x4624 = -1;
	int32_t t52 = 6;

    t52 = (x4621!=(x4622%(x4623==x4624)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x4649 = -62;
	uint8_t x4650 = 4U;
	uint64_t x4651 = UINT64_MAX;
	volatile int32_t t53 = -1;

    t53 = (x4649!=(x4650%(x4651==x4652)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x4669 = INT8_MIN;
	int16_t x4670 = 25;
	int8_t x4671 = -1;
	int8_t x4672 = -1;
	int32_t t54 = -222586077;

    t54 = (x4669!=(x4670%(x4671==x4672)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x4822 = -25;
	static int8_t x4823 = INT8_MAX;
	static int8_t x4824 = INT8_MAX;

    t55 = (x4821!=(x4822%(x4823==x4824)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x5001 = -1;
	volatile int8_t x5002 = -1;
	volatile int32_t t56 = 23327;

    t56 = (x5001!=(x5002%(x5003==x5004)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x5043 = -1;
	int32_t x5044 = -1;
	int32_t t57 = 122;

    t57 = (x5041!=(x5042%(x5043==x5044)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x5130 = INT8_MIN;
	int8_t x5131 = -1;
	int32_t t58 = 19256934;

    t58 = (x5129!=(x5130%(x5131==x5132)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x5269 = 1845199U;
	int64_t x5270 = INT64_MIN;
	volatile uint32_t x5271 = UINT32_MAX;
	uint32_t x5272 = UINT32_MAX;

    t59 = (x5269!=(x5270%(x5271==x5272)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x5277 = 0;
	int8_t x5278 = INT8_MIN;
	int32_t t60 = -133144642;

    t60 = (x5277!=(x5278%(x5279==x5280)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x5425 = 98LLU;
	uint32_t x5426 = UINT32_MAX;
	int32_t x5427 = -1;
	volatile uint32_t x5428 = UINT32_MAX;
	int32_t t61 = -11;

    t61 = (x5425!=(x5426%(x5427==x5428)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x5461 = -1LL;
	volatile int8_t x5462 = INT8_MIN;
	int32_t x5463 = INT32_MAX;
	int32_t x5464 = INT32_MAX;
	volatile int32_t t62 = -33591;

    t62 = (x5461!=(x5462%(x5463==x5464)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x5517 = UINT64_MAX;
	static uint8_t x5519 = 10U;
	uint8_t x5520 = 10U;
	int32_t t63 = 109248;

    t63 = (x5517!=(x5518%(x5519==x5520)));

    if (t63 != 1) { NG(); } else { ; }
	
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


    return 0;
}

