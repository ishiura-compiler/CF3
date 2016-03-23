
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

uint64_t x1 = UINT64_MAX;
int32_t x35 = -1;
int32_t x36 = INT32_MAX;
int16_t x39 = INT16_MIN;
uint16_t x107 = 1015U;
uint32_t x130 = 2U;
volatile int32_t t4 = -217;
int32_t x184 = INT32_MIN;
volatile int64_t x211 = 27LL;
volatile int16_t x469 = 882;
volatile int32_t x477 = 11371;
uint64_t x487 = 3543249850LLU;
static volatile int32_t x845 = 242567;
static int16_t x847 = 7453;
volatile uint16_t x919 = 1009U;
uint64_t x1069 = 6681175LLU;
uint8_t x1071 = 1U;
int16_t x1141 = INT16_MAX;
int64_t x1144 = -1LL;
int32_t t19 = 1;
uint64_t x1252 = 1LLU;
uint32_t x1257 = 27U;
uint64_t x1259 = UINT64_MAX;
static int16_t x1398 = 0;
static int32_t t24 = 54643;
static int8_t x1501 = INT8_MAX;
uint16_t x1504 = 29889U;
uint8_t x1706 = 0U;
volatile int32_t t28 = 39455214;
volatile int32_t t30 = -196;
uint32_t x2018 = 4U;
uint64_t x2020 = 98658LLU;
int32_t t32 = -2738;
static int32_t t35 = 140442541;
static uint64_t x2131 = 2239318821005495872LLU;
uint64_t x2245 = 25026222196183LLU;
int16_t x2247 = INT16_MIN;
static uint16_t x2256 = 12U;
uint16_t x2336 = 1U;
volatile int32_t t43 = -2801;
volatile int32_t x2431 = -1;
uint32_t x2432 = 6762676U;
volatile int32_t t44 = -48;
int32_t x2463 = INT32_MAX;
uint8_t x2633 = UINT8_MAX;
int64_t x2634 = 7LL;
int16_t x2636 = INT16_MIN;
int32_t t46 = 556;
uint32_t x2667 = 172850U;
int32_t t47 = 2595;
int16_t x2687 = INT16_MIN;
uint32_t x2779 = UINT32_MAX;
uint32_t x2830 = 55U;
volatile int64_t x2862 = 0LL;
int16_t x2864 = INT16_MIN;
int8_t x2874 = 1;
int8_t x3171 = INT8_MIN;
int32_t x3188 = -1;
uint16_t x3233 = UINT16_MAX;
uint32_t x3328 = 52446U;
uint32_t x3575 = UINT32_MAX;
static volatile int16_t x3690 = 4;
static volatile uint32_t x3763 = 751U;
volatile int32_t t66 = -97069799;
int32_t x3766 = 1;
int64_t x3767 = -1LL;
int64_t x3815 = INT64_MIN;
int32_t t69 = 1;
uint32_t x4031 = 724887429U;
volatile int8_t x4039 = -1;
int32_t t71 = -31828;
int16_t x4089 = 2;
volatile uint16_t x4370 = 0U;
static uint64_t x4371 = 56551591308858541LLU;
uint32_t x4372 = 1142152U;
int8_t x4374 = 1;
static int32_t t77 = 16019;
uint32_t x4529 = 499600U;
uint8_t x4546 = 5U;
int64_t x4547 = -2985317542302811LL;
int16_t x4548 = -1;
volatile int32_t t79 = -439881641;
int64_t x4721 = INT64_MAX;
int32_t t82 = 333905943;
int64_t x5000 = INT64_MIN;
int32_t x5077 = 257;
int8_t x5078 = 0;
int64_t x5080 = -1LL;
uint64_t x5201 = 1464352380056LLU;
uint8_t x5202 = 32U;
volatile int16_t x5204 = INT16_MAX;
int8_t x5460 = 1;
uint8_t x5628 = UINT8_MAX;
int64_t x5787 = -1LL;
static uint16_t x5837 = 56U;
int16_t x5839 = -1;
int32_t x5888 = -1;
int8_t x5964 = 1;
static int32_t t98 = -63685;
uint16_t x5983 = UINT16_MAX;
int32_t t99 = -385322;
int32_t t100 = -179;
uint64_t x6419 = 202417963255309139LLU;
volatile uint16_t x6541 = 1694U;
int64_t x6544 = 1013350685565293739LL;


void f0(void) {
    	uint8_t x2 = 7U;
	volatile int64_t x3 = 126919949LL;
	int16_t x4 = INT16_MIN;
	int32_t t0 = 1;

    t0 = (((x1>>x2)*x3)!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x33 = INT32_MAX;
	uint8_t x34 = 3U;
	volatile int32_t t1 = -207068823;

    t1 = (((x33>>x34)*x35)!=x36);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x37 = UINT8_MAX;
	int16_t x38 = 1;
	volatile int16_t x40 = 1844;
	volatile int32_t t2 = 5;

    t2 = (((x37>>x38)*x39)!=x40);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x105 = 1LL;
	int16_t x106 = 1;
	volatile int16_t x108 = -108;
	volatile int32_t t3 = 8;

    t3 = (((x105>>x106)*x107)!=x108);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint64_t x129 = 50652834569848187LLU;
	static int16_t x131 = INT16_MAX;
	int8_t x132 = 2;

    t4 = (((x129>>x130)*x131)!=x132);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x181 = UINT64_MAX;
	uint32_t x182 = 5U;
	uint64_t x183 = 8767518017010681LLU;
	int32_t t5 = -149;

    t5 = (((x181>>x182)*x183)!=x184);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint64_t x209 = 17814LLU;
	volatile uint32_t x210 = 6U;
	int8_t x212 = INT8_MAX;
	static int32_t t6 = -51866482;

    t6 = (((x209>>x210)*x211)!=x212);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x333 = 5208313LLU;
	uint64_t x334 = 58LLU;
	volatile int16_t x335 = INT16_MIN;
	int32_t x336 = INT32_MAX;
	volatile int32_t t7 = 0;

    t7 = (((x333>>x334)*x335)!=x336);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x470 = 29;
	volatile int8_t x471 = -1;
	static volatile int64_t x472 = -108383LL;
	volatile int32_t t8 = -6636;

    t8 = (((x469>>x470)*x471)!=x472);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x478 = 3;
	static volatile int8_t x479 = -1;
	static int16_t x480 = -196;
	int32_t t9 = 1;

    t9 = (((x477>>x478)*x479)!=x480);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x485 = 8570566LLU;
	int8_t x486 = 1;
	int64_t x488 = 0LL;
	volatile int32_t t10 = -9;

    t10 = (((x485>>x486)*x487)!=x488);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x701 = 2858058386192LL;
	int16_t x702 = 13;
	volatile int16_t x703 = -47;
	static int8_t x704 = 13;
	static volatile int32_t t11 = -30;

    t11 = (((x701>>x702)*x703)!=x704);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint64_t x745 = 245057700128LLU;
	int16_t x746 = 1;
	int8_t x747 = 27;
	static int64_t x748 = -1LL;
	volatile int32_t t12 = -5;

    t12 = (((x745>>x746)*x747)!=x748);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint16_t x829 = 202U;
	static volatile uint8_t x830 = 15U;
	volatile int8_t x831 = INT8_MIN;
	uint16_t x832 = UINT16_MAX;
	int32_t t13 = 177562214;

    t13 = (((x829>>x830)*x831)!=x832);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x846 = 0U;
	int64_t x848 = INT64_MAX;
	int32_t t14 = -160886;

    t14 = (((x845>>x846)*x847)!=x848);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint64_t x893 = 55952489643110LLU;
	uint16_t x894 = 0U;
	int8_t x895 = -28;
	uint64_t x896 = UINT64_MAX;
	int32_t t15 = 497751;

    t15 = (((x893>>x894)*x895)!=x896);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x917 = INT16_MAX;
	uint16_t x918 = 4U;
	int32_t x920 = 653751;
	static volatile int32_t t16 = -1849;

    t16 = (((x917>>x918)*x919)!=x920);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile uint16_t x1070 = 1U;
	int8_t x1072 = INT8_MIN;
	volatile int32_t t17 = -1413273;

    t17 = (((x1069>>x1070)*x1071)!=x1072);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x1142 = 12;
	static uint32_t x1143 = UINT32_MAX;
	volatile int32_t t18 = 10606967;

    t18 = (((x1141>>x1142)*x1143)!=x1144);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x1201 = 144966148LLU;
	int16_t x1202 = 32;
	static uint64_t x1203 = UINT64_MAX;
	uint16_t x1204 = 31978U;

    t19 = (((x1201>>x1202)*x1203)!=x1204);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x1249 = INT8_MAX;
	static uint32_t x1250 = 2U;
	static int8_t x1251 = INT8_MIN;
	static volatile int32_t t20 = -486490061;

    t20 = (((x1249>>x1250)*x1251)!=x1252);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x1258 = 23U;
	int32_t x1260 = -1;
	int32_t t21 = 86767;

    t21 = (((x1257>>x1258)*x1259)!=x1260);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x1397 = 49473314704471LL;
	int16_t x1399 = -1;
	volatile int16_t x1400 = INT16_MIN;
	int32_t t22 = 712146293;

    t22 = (((x1397>>x1398)*x1399)!=x1400);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x1441 = 4U;
	volatile int8_t x1442 = 0;
	int8_t x1443 = INT8_MAX;
	int16_t x1444 = -606;
	int32_t t23 = 19;

    t23 = (((x1441>>x1442)*x1443)!=x1444);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x1485 = 42U;
	uint16_t x1486 = 1U;
	int16_t x1487 = INT16_MAX;
	uint64_t x1488 = UINT64_MAX;

    t24 = (((x1485>>x1486)*x1487)!=x1488);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint8_t x1502 = 15U;
	int16_t x1503 = -10824;
	int32_t t25 = 3421;

    t25 = (((x1501>>x1502)*x1503)!=x1504);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static int64_t x1605 = 8072241984LL;
	int8_t x1606 = 11;
	volatile int8_t x1607 = INT8_MAX;
	volatile int16_t x1608 = INT16_MIN;
	int32_t t26 = 46004542;

    t26 = (((x1605>>x1606)*x1607)!=x1608);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x1677 = INT32_MAX;
	volatile int32_t x1678 = 2;
	uint64_t x1679 = 285LLU;
	uint64_t x1680 = 1007949986753363813LLU;
	volatile int32_t t27 = 17324;

    t27 = (((x1677>>x1678)*x1679)!=x1680);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x1705 = 7;
	uint64_t x1707 = 189479659846484042LLU;
	int16_t x1708 = -11847;

    t28 = (((x1705>>x1706)*x1707)!=x1708);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x1833 = INT32_MAX;
	static uint8_t x1834 = 12U;
	int32_t x1835 = -133;
	uint32_t x1836 = 1019582U;
	static int32_t t29 = 1876;

    t29 = (((x1833>>x1834)*x1835)!=x1836);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x1917 = 1U;
	static uint32_t x1918 = 2U;
	int8_t x1919 = INT8_MIN;
	volatile int32_t x1920 = -1;

    t30 = (((x1917>>x1918)*x1919)!=x1920);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x1953 = 28U;
	uint32_t x1954 = 20U;
	uint64_t x1955 = UINT64_MAX;
	uint8_t x1956 = 50U;
	volatile int32_t t31 = 1230;

    t31 = (((x1953>>x1954)*x1955)!=x1956);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x2017 = UINT32_MAX;
	int16_t x2019 = INT16_MIN;

    t32 = (((x2017>>x2018)*x2019)!=x2020);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int8_t x2045 = 0;
	static uint8_t x2046 = 23U;
	int32_t x2047 = INT32_MIN;
	int32_t x2048 = INT32_MAX;
	volatile int32_t t33 = 1;

    t33 = (((x2045>>x2046)*x2047)!=x2048);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x2065 = 3U;
	uint8_t x2066 = 5U;
	uint16_t x2067 = 451U;
	uint32_t x2068 = 159201372U;
	volatile int32_t t34 = -6;

    t34 = (((x2065>>x2066)*x2067)!=x2068);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x2121 = INT16_MAX;
	int16_t x2122 = 24;
	int32_t x2123 = 117960492;
	uint16_t x2124 = UINT16_MAX;

    t35 = (((x2121>>x2122)*x2123)!=x2124);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x2129 = UINT64_MAX;
	uint32_t x2130 = 1U;
	uint16_t x2132 = 11959U;
	static int32_t t36 = 458;

    t36 = (((x2129>>x2130)*x2131)!=x2132);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x2137 = 1;
	uint64_t x2138 = 7LLU;
	int8_t x2139 = INT8_MIN;
	volatile int64_t x2140 = -1LL;
	int32_t t37 = 129688040;

    t37 = (((x2137>>x2138)*x2139)!=x2140);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x2181 = UINT32_MAX;
	int16_t x2182 = 15;
	int32_t x2183 = INT32_MIN;
	uint8_t x2184 = 5U;
	int32_t t38 = 13913;

    t38 = (((x2181>>x2182)*x2183)!=x2184);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x2246 = 10;
	uint8_t x2248 = UINT8_MAX;
	volatile int32_t t39 = 2043265;

    t39 = (((x2245>>x2246)*x2247)!=x2248);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x2253 = 20176603;
	int8_t x2254 = 15;
	uint16_t x2255 = 6525U;
	volatile int32_t t40 = 579165;

    t40 = (((x2253>>x2254)*x2255)!=x2256);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint64_t x2293 = UINT64_MAX;
	static uint16_t x2294 = 20U;
	int64_t x2295 = INT64_MIN;
	int32_t x2296 = 7397143;
	volatile int32_t t41 = 65;

    t41 = (((x2293>>x2294)*x2295)!=x2296);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x2333 = 330LLU;
	int8_t x2334 = 59;
	static volatile int64_t x2335 = -710213129LL;
	volatile int32_t t42 = 12043;

    t42 = (((x2333>>x2334)*x2335)!=x2336);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint64_t x2369 = UINT64_MAX;
	volatile uint32_t x2370 = 3U;
	int8_t x2371 = INT8_MIN;
	uint8_t x2372 = UINT8_MAX;

    t43 = (((x2369>>x2370)*x2371)!=x2372);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint16_t x2429 = 2U;
	int16_t x2430 = 0;

    t44 = (((x2429>>x2430)*x2431)!=x2432);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint64_t x2461 = UINT64_MAX;
	static volatile int32_t x2462 = 30;
	int64_t x2464 = 18669105233393372LL;
	volatile int32_t t45 = 4155996;

    t45 = (((x2461>>x2462)*x2463)!=x2464);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x2635 = -5655;

    t46 = (((x2633>>x2634)*x2635)!=x2636);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint64_t x2665 = 96511645210LLU;
	volatile uint16_t x2666 = 1U;
	static volatile int64_t x2668 = -51334LL;

    t47 = (((x2665>>x2666)*x2667)!=x2668);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint16_t x2685 = UINT16_MAX;
	uint16_t x2686 = 1U;
	volatile int8_t x2688 = INT8_MIN;
	volatile int32_t t48 = 390441;

    t48 = (((x2685>>x2686)*x2687)!=x2688);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x2777 = 31U;
	int32_t x2778 = 0;
	volatile int8_t x2780 = -1;
	int32_t t49 = -30069;

    t49 = (((x2777>>x2778)*x2779)!=x2780);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x2785 = 11597860U;
	int8_t x2786 = 3;
	int16_t x2787 = 3420;
	volatile uint8_t x2788 = UINT8_MAX;
	int32_t t50 = -871;

    t50 = (((x2785>>x2786)*x2787)!=x2788);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x2829 = INT64_MAX;
	uint8_t x2831 = 13U;
	uint64_t x2832 = 66232737440873LLU;
	int32_t t51 = -13;

    t51 = (((x2829>>x2830)*x2831)!=x2832);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x2861 = UINT64_MAX;
	uint64_t x2863 = 454LLU;
	volatile int32_t t52 = -89296929;

    t52 = (((x2861>>x2862)*x2863)!=x2864);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x2873 = UINT64_MAX;
	uint64_t x2875 = 240LLU;
	int32_t x2876 = -407;
	int32_t t53 = 60762;

    t53 = (((x2873>>x2874)*x2875)!=x2876);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x2901 = 71U;
	int16_t x2902 = 1;
	uint16_t x2903 = 28285U;
	int16_t x2904 = INT16_MAX;
	int32_t t54 = 26;

    t54 = (((x2901>>x2902)*x2903)!=x2904);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x3149 = 73LL;
	int8_t x3150 = 1;
	int16_t x3151 = 268;
	int16_t x3152 = -1;
	int32_t t55 = 0;

    t55 = (((x3149>>x3150)*x3151)!=x3152);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint16_t x3169 = 317U;
	int16_t x3170 = 0;
	static volatile int16_t x3172 = INT16_MIN;
	int32_t t56 = 48168;

    t56 = (((x3169>>x3170)*x3171)!=x3172);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x3185 = INT8_MAX;
	int32_t x3186 = 7;
	int16_t x3187 = INT16_MAX;
	int32_t t57 = 0;

    t57 = (((x3185>>x3186)*x3187)!=x3188);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x3234 = 18;
	int16_t x3235 = INT16_MAX;
	static volatile uint16_t x3236 = 0U;
	static volatile int32_t t58 = 148722666;

    t58 = (((x3233>>x3234)*x3235)!=x3236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x3269 = 11U;
	volatile uint8_t x3270 = 2U;
	uint16_t x3271 = 26U;
	uint16_t x3272 = 1U;
	int32_t t59 = -1001;

    t59 = (((x3269>>x3270)*x3271)!=x3272);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x3325 = 0U;
	uint16_t x3326 = 2U;
	uint64_t x3327 = UINT64_MAX;
	volatile int32_t t60 = -56986834;

    t60 = (((x3325>>x3326)*x3327)!=x3328);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x3345 = 303;
	int8_t x3346 = 1;
	static int32_t x3347 = -1;
	static volatile int8_t x3348 = INT8_MIN;
	int32_t t61 = -3;

    t61 = (((x3345>>x3346)*x3347)!=x3348);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x3405 = 1756;
	volatile uint8_t x3406 = 23U;
	int8_t x3407 = INT8_MIN;
	int64_t x3408 = INT64_MIN;
	int32_t t62 = 43298;

    t62 = (((x3405>>x3406)*x3407)!=x3408);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x3573 = 11U;
	uint8_t x3574 = 7U;
	int16_t x3576 = INT16_MIN;
	volatile int32_t t63 = 592;

    t63 = (((x3573>>x3574)*x3575)!=x3576);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x3689 = 66286537475698LL;
	int16_t x3691 = -10;
	int8_t x3692 = INT8_MIN;
	volatile int32_t t64 = 3;

    t64 = (((x3689>>x3690)*x3691)!=x3692);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint32_t x3741 = 10045U;
	static uint8_t x3742 = 1U;
	uint16_t x3743 = 0U;
	uint32_t x3744 = 110340745U;
	volatile int32_t t65 = -59;

    t65 = (((x3741>>x3742)*x3743)!=x3744);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint32_t x3761 = 8829U;
	uint8_t x3762 = 12U;
	int16_t x3764 = -7;

    t66 = (((x3761>>x3762)*x3763)!=x3764);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint64_t x3765 = 430829035LLU;
	static int32_t x3768 = INT32_MAX;
	static volatile int32_t t67 = 139546342;

    t67 = (((x3765>>x3766)*x3767)!=x3768);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x3813 = 3;
	uint16_t x3814 = 23U;
	uint16_t x3816 = 17186U;
	static int32_t t68 = 181183;

    t68 = (((x3813>>x3814)*x3815)!=x3816);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint16_t x3889 = 1U;
	int64_t x3890 = 0LL;
	uint32_t x3891 = 361U;
	static int64_t x3892 = INT64_MAX;

    t69 = (((x3889>>x3890)*x3891)!=x3892);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x4029 = 37U;
	uint8_t x4030 = 4U;
	int16_t x4032 = INT16_MIN;
	volatile int32_t t70 = 662;

    t70 = (((x4029>>x4030)*x4031)!=x4032);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x4037 = INT16_MAX;
	int64_t x4038 = 6LL;
	volatile int32_t x4040 = INT32_MAX;

    t71 = (((x4037>>x4038)*x4039)!=x4040);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x4053 = 0LLU;
	uint32_t x4054 = 2U;
	int64_t x4055 = INT64_MIN;
	volatile uint8_t x4056 = 81U;
	volatile int32_t t72 = 0;

    t72 = (((x4053>>x4054)*x4055)!=x4056);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint16_t x4090 = 2U;
	static int16_t x4091 = 113;
	int16_t x4092 = -3573;
	int32_t t73 = -419081708;

    t73 = (((x4089>>x4090)*x4091)!=x4092);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x4109 = UINT64_MAX;
	volatile uint16_t x4110 = 1U;
	uint32_t x4111 = 6047U;
	int64_t x4112 = -1LL;
	volatile int32_t t74 = -2;

    t74 = (((x4109>>x4110)*x4111)!=x4112);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x4309 = 1U;
	int32_t x4310 = 1;
	int32_t x4311 = 3855;
	int16_t x4312 = -1;
	int32_t t75 = 0;

    t75 = (((x4309>>x4310)*x4311)!=x4312);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x4369 = 3U;
	int32_t t76 = 16266;

    t76 = (((x4369>>x4370)*x4371)!=x4372);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint32_t x4373 = 146865U;
	int64_t x4375 = -1LL;
	volatile int8_t x4376 = -1;

    t77 = (((x4373>>x4374)*x4375)!=x4376);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x4530 = 7;
	int16_t x4531 = INT16_MAX;
	int8_t x4532 = 7;
	int32_t t78 = 3;

    t78 = (((x4529>>x4530)*x4531)!=x4532);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint8_t x4545 = 8U;

    t79 = (((x4545>>x4546)*x4547)!=x4548);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x4722 = 9;
	static volatile uint64_t x4723 = 1LLU;
	int8_t x4724 = -1;
	int32_t t80 = -1921;

    t80 = (((x4721>>x4722)*x4723)!=x4724);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x4757 = 1658654807543339946LLU;
	volatile int8_t x4758 = 7;
	int8_t x4759 = 31;
	uint64_t x4760 = UINT64_MAX;
	volatile int32_t t81 = -405;

    t81 = (((x4757>>x4758)*x4759)!=x4760);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int8_t x4777 = 53;
	int8_t x4778 = 5;
	volatile uint16_t x4779 = 24U;
	int64_t x4780 = INT64_MIN;

    t82 = (((x4777>>x4778)*x4779)!=x4780);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x4997 = 991U;
	uint16_t x4998 = 7U;
	int8_t x4999 = -1;
	static int32_t t83 = -8;

    t83 = (((x4997>>x4998)*x4999)!=x5000);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x5079 = -11173;
	int32_t t84 = 109;

    t84 = (((x5077>>x5078)*x5079)!=x5080);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int8_t x5203 = INT8_MAX;
	volatile int32_t t85 = -1;

    t85 = (((x5201>>x5202)*x5203)!=x5204);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint64_t x5245 = 9979LLU;
	uint64_t x5246 = 0LLU;
	volatile int16_t x5247 = INT16_MIN;
	uint8_t x5248 = 1U;
	volatile int32_t t86 = 14197937;

    t86 = (((x5245>>x5246)*x5247)!=x5248);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x5329 = INT32_MAX;
	int8_t x5330 = 20;
	static volatile int8_t x5331 = INT8_MIN;
	int8_t x5332 = INT8_MAX;
	int32_t t87 = 2372099;

    t87 = (((x5329>>x5330)*x5331)!=x5332);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x5337 = INT16_MAX;
	static int16_t x5338 = 0;
	volatile uint8_t x5339 = UINT8_MAX;
	volatile uint32_t x5340 = UINT32_MAX;
	int32_t t88 = 599;

    t88 = (((x5337>>x5338)*x5339)!=x5340);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint8_t x5457 = 86U;
	static int32_t x5458 = 2;
	int16_t x5459 = INT16_MAX;
	int32_t t89 = -31018906;

    t89 = (((x5457>>x5458)*x5459)!=x5460);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x5545 = 5363567632359991599LLU;
	int8_t x5546 = 1;
	static int64_t x5547 = 3LL;
	static uint16_t x5548 = 18U;
	int32_t t90 = 922011625;

    t90 = (((x5545>>x5546)*x5547)!=x5548);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x5553 = 252;
	static volatile uint8_t x5554 = 2U;
	int8_t x5555 = -53;
	volatile uint8_t x5556 = 6U;
	static volatile int32_t t91 = -189;

    t91 = (((x5553>>x5554)*x5555)!=x5556);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint8_t x5625 = UINT8_MAX;
	static int16_t x5626 = 4;
	uint16_t x5627 = 7565U;
	static volatile int32_t t92 = 39;

    t92 = (((x5625>>x5626)*x5627)!=x5628);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x5701 = 12;
	uint16_t x5702 = 1U;
	uint16_t x5703 = 96U;
	int32_t x5704 = -1;
	volatile int32_t t93 = 44000;

    t93 = (((x5701>>x5702)*x5703)!=x5704);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint64_t x5785 = 8245387919536911002LLU;
	uint32_t x5786 = 24U;
	int64_t x5788 = INT64_MAX;
	int32_t t94 = -254149036;

    t94 = (((x5785>>x5786)*x5787)!=x5788);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int8_t x5838 = 7;
	int32_t x5840 = INT32_MAX;
	volatile int32_t t95 = -110667;

    t95 = (((x5837>>x5838)*x5839)!=x5840);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint8_t x5885 = 0U;
	uint8_t x5886 = 1U;
	uint32_t x5887 = 6U;
	int32_t t96 = 18;

    t96 = (((x5885>>x5886)*x5887)!=x5888);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x5897 = UINT16_MAX;
	uint16_t x5898 = 2U;
	static volatile int64_t x5899 = -1LL;
	uint8_t x5900 = 25U;
	static int32_t t97 = -503;

    t97 = (((x5897>>x5898)*x5899)!=x5900);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x5961 = 108LL;
	uint8_t x5962 = 39U;
	int8_t x5963 = INT8_MAX;

    t98 = (((x5961>>x5962)*x5963)!=x5964);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x5981 = 59U;
	static uint8_t x5982 = 2U;
	int32_t x5984 = INT32_MIN;

    t99 = (((x5981>>x5982)*x5983)!=x5984);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x6061 = INT8_MAX;
	static uint8_t x6062 = 9U;
	static int32_t x6063 = 8338962;
	static int64_t x6064 = 5LL;

    t100 = (((x6061>>x6062)*x6063)!=x6064);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x6157 = 3;
	static uint8_t x6158 = 1U;
	volatile uint16_t x6159 = 0U;
	int8_t x6160 = 18;
	volatile int32_t t101 = -1;

    t101 = (((x6157>>x6158)*x6159)!=x6160);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x6173 = 3U;
	uint8_t x6174 = 0U;
	static int16_t x6175 = INT16_MAX;
	uint16_t x6176 = 3096U;
	int32_t t102 = 35456;

    t102 = (((x6173>>x6174)*x6175)!=x6176);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x6301 = 1851440U;
	volatile int16_t x6302 = 13;
	int16_t x6303 = -1;
	uint64_t x6304 = 142830237008LLU;
	int32_t t103 = 2775822;

    t103 = (((x6301>>x6302)*x6303)!=x6304);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x6357 = INT32_MAX;
	uint16_t x6358 = 3U;
	static int16_t x6359 = -1;
	int64_t x6360 = INT64_MAX;
	volatile int32_t t104 = -1047088757;

    t104 = (((x6357>>x6358)*x6359)!=x6360);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x6417 = UINT16_MAX;
	int32_t x6418 = 20;
	static volatile int16_t x6420 = 11668;
	int32_t t105 = -181;

    t105 = (((x6417>>x6418)*x6419)!=x6420);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int16_t x6542 = 0;
	int8_t x6543 = -21;
	int32_t t106 = 5;

    t106 = (((x6541>>x6542)*x6543)!=x6544);

    if (t106 != 1) { NG(); } else { ; }
	
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


    return 0;
}

