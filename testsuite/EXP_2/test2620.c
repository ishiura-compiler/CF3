
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

int64_t x108 = -1LL;
int16_t x112 = INT16_MIN;
int8_t x169 = 12;
uint64_t t2 = 1798473925968108423LLU;
uint32_t x370 = UINT32_MAX;
volatile int64_t t3 = 43602602481LL;
int8_t x690 = -1;
volatile uint64_t t6 = 2821904531LLU;
int8_t x845 = 7;
int8_t x848 = 6;
static uint64_t x880 = 903LLU;
volatile int32_t t10 = -3993159;
uint64_t t12 = 1662169182LLU;
static uint32_t x1521 = UINT32_MAX;
int16_t x1523 = -1;
uint32_t t15 = 1172512244U;
uint16_t x1746 = UINT16_MAX;
int16_t x1908 = -1;
int8_t x2091 = -1;
static volatile uint64_t x2217 = 371LLU;
static uint64_t x2219 = UINT64_MAX;
int16_t x2755 = 1;
uint32_t x2764 = UINT32_MAX;
static int16_t x2796 = INT16_MIN;
static uint64_t t27 = 25LLU;
uint8_t x2875 = 0U;
int16_t x2876 = INT16_MAX;
volatile int16_t x2919 = 0;
uint8_t x2934 = 4U;
static volatile int32_t x3207 = -1;
uint32_t x3509 = 16557U;
int16_t x3511 = INT16_MAX;
uint64_t x3512 = 38LLU;
static uint64_t t33 = 782654477229LLU;
volatile int8_t x3762 = -11;
static int64_t x4065 = 1LL;
int16_t x4274 = 1;
static uint16_t x4276 = 32752U;
volatile int32_t t38 = 2;
volatile uint64_t t39 = 408369882601308LLU;
static int32_t x4826 = -1;
int16_t x5008 = INT16_MAX;
static volatile int64_t t43 = -1LL;
uint64_t x5174 = UINT64_MAX;
uint64_t t45 = 776LLU;
int64_t t47 = -1LL;
volatile uint32_t x5311 = UINT32_MAX;
volatile int8_t x5712 = -1;
int16_t x5885 = INT16_MAX;
static volatile uint64_t t55 = 1876309145801LLU;
volatile uint8_t x6321 = 97U;
static uint64_t x6609 = 13238769435125100LLU;
int16_t x6610 = INT16_MIN;
uint16_t x6726 = 122U;
uint16_t x6861 = 214U;
volatile uint8_t x7104 = 8U;
static int8_t x7313 = INT8_MAX;
uint16_t x7314 = UINT16_MAX;
uint8_t x7672 = UINT8_MAX;
int32_t t67 = 965;
uint8_t x7673 = UINT8_MAX;
int32_t t69 = -3691137;
int64_t x7734 = INT64_MIN;
int64_t x7735 = INT64_MIN;
int64_t x7736 = INT64_MIN;
static uint64_t x7765 = UINT64_MAX;


void f0(void) {
    	volatile uint16_t x105 = UINT16_MAX;
	int8_t x106 = -1;
	int8_t x107 = -1;
	int64_t t0 = -1LL;

    t0 = ((x105<<(x106^x107))-x108);

    if (t0 != 65536LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x109 = UINT64_MAX;
	int64_t x110 = INT64_MIN;
	int64_t x111 = INT64_MIN;
	volatile uint64_t t1 = 2945395706193LLU;

    t1 = ((x109<<(x110^x111))-x112);

    if (t1 != 32767LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x170 = INT8_MIN;
	volatile int8_t x171 = INT8_MIN;
	static uint64_t x172 = UINT64_MAX;

    t2 = ((x169<<(x170^x171))-x172);

    if (t2 != 13LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x369 = 1LL;
	static int8_t x371 = -1;
	static int32_t x372 = -3;

    t3 = ((x369<<(x370^x371))-x372);

    if (t3 != 4LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x397 = 125444883071LLU;
	int32_t x398 = INT32_MIN;
	int32_t x399 = INT32_MIN;
	int8_t x400 = INT8_MAX;
	uint64_t t4 = 10367366955LLU;

    t4 = ((x397<<(x398^x399))-x400);

    if (t4 != 125444882944LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x521 = 22;
	uint16_t x522 = 11U;
	static int16_t x523 = 3;
	volatile uint32_t x524 = 103U;
	static uint32_t t5 = 46U;

    t5 = ((x521<<(x522^x523))-x524);

    if (t5 != 5529U) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint64_t x689 = 97082962LLU;
	uint64_t x691 = UINT64_MAX;
	int64_t x692 = 948306184411149LL;

    t6 = ((x689<<(x690^x691))-x692);

    if (t6 != 18445795767622223429LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x846 = 1;
	static volatile uint8_t x847 = 10U;
	static volatile int32_t t7 = -186;

    t7 = ((x845<<(x846^x847))-x848);

    if (t7 != 14330) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x877 = UINT8_MAX;
	uint64_t x878 = UINT64_MAX;
	int16_t x879 = -1;
	uint64_t t8 = 17172292018LLU;

    t8 = ((x877<<(x878^x879))-x880);

    if (t8 != 18446744073709550968LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x965 = 27U;
	volatile int8_t x966 = 0;
	uint64_t x967 = 11LLU;
	static int64_t x968 = 233343LL;
	int64_t t9 = 1LL;

    t9 = ((x965<<(x966^x967))-x968);

    if (t9 != -178047LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x993 = INT8_MAX;
	static volatile uint64_t x994 = UINT64_MAX;
	static volatile int16_t x995 = -1;
	volatile int16_t x996 = -1;

    t10 = ((x993<<(x994^x995))-x996);

    if (t10 != 128) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint8_t x1269 = UINT8_MAX;
	volatile uint16_t x1270 = UINT16_MAX;
	uint16_t x1271 = UINT16_MAX;
	int16_t x1272 = INT16_MAX;
	int32_t t11 = 0;

    t11 = ((x1269<<(x1270^x1271))-x1272);

    if (t11 != -32512) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint64_t x1301 = 17047443358LLU;
	volatile int32_t x1302 = INT32_MIN;
	int32_t x1303 = INT32_MIN;
	static volatile int16_t x1304 = INT16_MIN;

    t12 = ((x1301<<(x1302^x1303))-x1304);

    if (t12 != 17047476126LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x1421 = INT32_MAX;
	int16_t x1422 = -1;
	static int64_t x1423 = -1LL;
	int16_t x1424 = INT16_MAX;
	int32_t t13 = -47445;

    t13 = ((x1421<<(x1422^x1423))-x1424);

    if (t13 != 2147450880) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint64_t x1457 = 10292308LLU;
	int8_t x1458 = -1;
	int8_t x1459 = -37;
	uint64_t x1460 = UINT64_MAX;
	uint64_t t14 = 198144LLU;

    t14 = ((x1457<<(x1458^x1459))-x1460);

    if (t14 != 707282020165746689LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x1522 = -15;
	static int8_t x1524 = INT8_MAX;

    t15 = ((x1521<<(x1522^x1523))-x1524);

    if (t15 != 4294950785U) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t x1745 = UINT64_MAX;
	uint16_t x1747 = UINT16_MAX;
	uint32_t x1748 = 588U;
	static volatile uint64_t t16 = 22112411174369LLU;

    t16 = ((x1745<<(x1746^x1747))-x1748);

    if (t16 != 18446744073709551027LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x1905 = 135U;
	volatile int16_t x1906 = INT16_MIN;
	int16_t x1907 = INT16_MIN;
	volatile int32_t t17 = 36;

    t17 = ((x1905<<(x1906^x1907))-x1908);

    if (t17 != 136) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint64_t x1981 = 11371574810905141LLU;
	int16_t x1982 = 0;
	uint8_t x1983 = 0U;
	int16_t x1984 = INT16_MIN;
	static uint64_t t18 = 29969217604585LLU;

    t18 = ((x1981<<(x1982^x1983))-x1984);

    if (t18 != 11371574810937909LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x2089 = 500253629428059LL;
	uint64_t x2090 = UINT64_MAX;
	volatile uint32_t x2092 = 34U;
	volatile int64_t t19 = -123468716LL;

    t19 = ((x2089<<(x2090^x2091))-x2092);

    if (t19 != 500253629428025LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x2218 = -1;
	int16_t x2220 = INT16_MIN;
	volatile uint64_t t20 = 17892LLU;

    t20 = ((x2217<<(x2218^x2219))-x2220);

    if (t20 != 33139LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x2237 = INT16_MAX;
	static int16_t x2238 = -1;
	static int32_t x2239 = -1;
	static uint8_t x2240 = 1U;
	static int32_t t21 = 500344521;

    t21 = ((x2237<<(x2238^x2239))-x2240);

    if (t21 != 32766) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x2469 = 1;
	int32_t x2470 = INT32_MIN;
	int32_t x2471 = INT32_MIN;
	int16_t x2472 = INT16_MIN;
	int32_t t22 = 3459;

    t22 = ((x2469<<(x2470^x2471))-x2472);

    if (t22 != 32769) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint32_t x2753 = UINT32_MAX;
	volatile uint8_t x2754 = 31U;
	int8_t x2756 = -1;
	uint32_t t23 = 20083U;

    t23 = ((x2753<<(x2754^x2755))-x2756);

    if (t23 != 3221225473U) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x2761 = 4;
	static int16_t x2762 = 5;
	int8_t x2763 = 3;
	uint32_t t24 = 8131U;

    t24 = ((x2761<<(x2762^x2763))-x2764);

    if (t24 != 257U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x2793 = 21U;
	uint64_t x2794 = UINT64_MAX;
	static int32_t x2795 = -1;
	volatile int32_t t25 = 214;

    t25 = ((x2793<<(x2794^x2795))-x2796);

    if (t25 != 32789) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint16_t x2813 = 29019U;
	int8_t x2814 = 2;
	uint16_t x2815 = 7U;
	static volatile int64_t x2816 = INT64_MAX;
	int64_t t26 = 395LL;

    t26 = ((x2813<<(x2814^x2815))-x2816);

    if (t26 != -9223372036853847199LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x2817 = UINT64_MAX;
	uint64_t x2818 = UINT64_MAX;
	int64_t x2819 = -1LL;
	static volatile uint32_t x2820 = 215U;

    t27 = ((x2817<<(x2818^x2819))-x2820);

    if (t27 != 18446744073709551400LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint16_t x2873 = 77U;
	volatile int8_t x2874 = 3;
	volatile int32_t t28 = 27860;

    t28 = ((x2873<<(x2874^x2875))-x2876);

    if (t28 != -32151) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x2917 = 334471763137194812LLU;
	static int8_t x2918 = 2;
	int8_t x2920 = -8;
	volatile uint64_t t29 = 12564LLU;

    t29 = ((x2917<<(x2918^x2919))-x2920);

    if (t29 != 1337887052548779256LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x2933 = UINT32_MAX;
	int8_t x2935 = 18;
	static volatile uint16_t x2936 = 411U;
	uint32_t t30 = 46821U;

    t30 = ((x2933<<(x2934^x2935))-x2936);

    if (t30 != 4290772581U) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int8_t x3153 = INT8_MAX;
	int64_t x3154 = -1LL;
	volatile int32_t x3155 = -1;
	uint8_t x3156 = 1U;
	volatile int32_t t31 = 0;

    t31 = ((x3153<<(x3154^x3155))-x3156);

    if (t31 != 126) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x3205 = 29U;
	static volatile int32_t x3206 = -1;
	int32_t x3208 = 29703217;
	int32_t t32 = 162904030;

    t32 = ((x3205<<(x3206^x3207))-x3208);

    if (t32 != -29703188) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x3510 = INT16_MAX;

    t33 = ((x3509<<(x3510^x3511))-x3512);

    if (t33 != 16519LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint64_t x3581 = 8403703331701473LLU;
	int8_t x3582 = -1;
	static uint32_t x3583 = UINT32_MAX;
	static int64_t x3584 = -1LL;
	uint64_t t34 = 2499920315683LLU;

    t34 = ((x3581<<(x3582^x3583))-x3584);

    if (t34 != 8403703331701474LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x3753 = 0U;
	int16_t x3754 = -1;
	volatile uint64_t x3755 = UINT64_MAX;
	uint16_t x3756 = 22U;
	uint32_t t35 = 424497003U;

    t35 = ((x3753<<(x3754^x3755))-x3756);

    if (t35 != 4294967274U) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x3761 = 46U;
	volatile int64_t x3763 = -1LL;
	uint16_t x3764 = 4971U;
	volatile int32_t t36 = -184049;

    t36 = ((x3761<<(x3762^x3763))-x3764);

    if (t36 != 42133) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x4066 = -1;
	volatile int16_t x4067 = -1;
	int64_t x4068 = -328967254575270LL;
	static volatile int64_t t37 = 103620369898LL;

    t37 = ((x4065<<(x4066^x4067))-x4068);

    if (t37 != 328967254575271LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x4273 = 4U;
	uint32_t x4275 = 1U;

    t38 = ((x4273<<(x4274^x4275))-x4276);

    if (t38 != -32748) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x4557 = UINT64_MAX;
	volatile int32_t x4558 = INT32_MIN;
	int32_t x4559 = INT32_MIN;
	int8_t x4560 = 12;

    t39 = ((x4557<<(x4558^x4559))-x4560);

    if (t39 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x4825 = UINT32_MAX;
	int32_t x4827 = -1;
	static int8_t x4828 = INT8_MIN;
	uint32_t t40 = 40523277U;

    t40 = ((x4825<<(x4826^x4827))-x4828);

    if (t40 != 127U) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint32_t x4925 = 463645948U;
	int16_t x4926 = INT16_MIN;
	int16_t x4927 = INT16_MIN;
	volatile uint8_t x4928 = 83U;
	uint32_t t41 = 16211U;

    t41 = ((x4925<<(x4926^x4927))-x4928);

    if (t41 != 463645865U) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint32_t x5005 = 2U;
	int16_t x5006 = INT16_MIN;
	int16_t x5007 = INT16_MIN;
	volatile uint32_t t42 = 71530U;

    t42 = ((x5005<<(x5006^x5007))-x5008);

    if (t42 != 4294934531U) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x5013 = INT64_MAX;
	int8_t x5014 = INT8_MIN;
	int8_t x5015 = INT8_MIN;
	volatile uint8_t x5016 = UINT8_MAX;

    t43 = ((x5013<<(x5014^x5015))-x5016);

    if (t43 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x5165 = UINT32_MAX;
	int64_t x5166 = -1LL;
	volatile int64_t x5167 = -1LL;
	int16_t x5168 = 1;
	volatile uint32_t t44 = 61U;

    t44 = ((x5165<<(x5166^x5167))-x5168);

    if (t44 != 4294967294U) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x5173 = 2LLU;
	static volatile int16_t x5175 = -1;
	int16_t x5176 = INT16_MIN;

    t45 = ((x5173<<(x5174^x5175))-x5176);

    if (t45 != 32770LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x5197 = 245825U;
	static volatile int8_t x5198 = -1;
	volatile uint64_t x5199 = UINT64_MAX;
	static uint16_t x5200 = UINT16_MAX;
	static volatile uint32_t t46 = 18992651U;

    t46 = ((x5197<<(x5198^x5199))-x5200);

    if (t46 != 180290U) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x5209 = UINT32_MAX;
	static int8_t x5210 = -9;
	int32_t x5211 = -1;
	int64_t x5212 = INT64_MAX;

    t47 = ((x5209<<(x5210^x5211))-x5212);

    if (t47 != -9223372032559808767LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint64_t x5309 = 106508188569LLU;
	int16_t x5310 = -1;
	uint32_t x5312 = 754625890U;
	static volatile uint64_t t48 = 871207LLU;

    t48 = ((x5309<<(x5310^x5311))-x5312);

    if (t48 != 105753562679LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x5689 = 7;
	static int8_t x5690 = 31;
	int32_t x5691 = 26;
	static uint8_t x5692 = UINT8_MAX;
	volatile int32_t t49 = 2;

    t49 = ((x5689<<(x5690^x5691))-x5692);

    if (t49 != -31) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint8_t x5709 = 1U;
	int64_t x5710 = -26LL;
	int32_t x5711 = -1;
	int32_t t50 = -2003184;

    t50 = ((x5709<<(x5710^x5711))-x5712);

    if (t50 != 33554433) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x5777 = 7326;
	int32_t x5778 = -1;
	uint64_t x5779 = UINT64_MAX;
	uint8_t x5780 = 17U;
	int32_t t51 = -16;

    t51 = ((x5777<<(x5778^x5779))-x5780);

    if (t51 != 7309) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x5886 = 5U;
	int8_t x5887 = 0;
	int16_t x5888 = INT16_MIN;
	volatile int32_t t52 = 704;

    t52 = ((x5885<<(x5886^x5887))-x5888);

    if (t52 != 1081312) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x5961 = 1255;
	int16_t x5962 = -1;
	int32_t x5963 = -1;
	uint8_t x5964 = UINT8_MAX;
	static int32_t t53 = 83593;

    t53 = ((x5961<<(x5962^x5963))-x5964);

    if (t53 != 1000) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x6013 = 37U;
	int64_t x6014 = INT64_MIN;
	int64_t x6015 = INT64_MIN;
	static int32_t x6016 = -1;
	int32_t t54 = 479379;

    t54 = ((x6013<<(x6014^x6015))-x6016);

    if (t54 != 38) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x6101 = UINT64_MAX;
	uint8_t x6102 = 22U;
	volatile int8_t x6103 = 44;
	uint32_t x6104 = UINT32_MAX;

    t55 = ((x6101<<(x6102^x6103))-x6104);

    if (t55 != 18158513693262872577LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint8_t x6273 = 0U;
	volatile int64_t x6274 = INT64_MIN;
	int64_t x6275 = INT64_MIN;
	volatile int64_t x6276 = 1620494679LL;
	volatile int64_t t56 = -35475972254404LL;

    t56 = ((x6273<<(x6274^x6275))-x6276);

    if (t56 != -1620494679LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x6322 = -1;
	volatile int64_t x6323 = -1LL;
	volatile uint16_t x6324 = 837U;
	int32_t t57 = -629;

    t57 = ((x6321<<(x6322^x6323))-x6324);

    if (t57 != -740) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x6611 = INT16_MIN;
	int8_t x6612 = INT8_MIN;
	volatile uint64_t t58 = 2659083585327478LLU;

    t58 = ((x6609<<(x6610^x6611))-x6612);

    if (t58 != 13238769435125228LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint16_t x6713 = 751U;
	volatile int8_t x6714 = 4;
	uint8_t x6715 = 7U;
	static int8_t x6716 = INT8_MAX;
	volatile int32_t t59 = 4743873;

    t59 = ((x6713<<(x6714^x6715))-x6716);

    if (t59 != 5881) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint64_t x6725 = UINT64_MAX;
	volatile int8_t x6727 = INT8_MAX;
	int32_t x6728 = INT32_MIN;
	uint64_t t60 = 16507183064LLU;

    t60 = ((x6725<<(x6726^x6727))-x6728);

    if (t60 != 2147483616LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x6841 = UINT32_MAX;
	static int64_t x6842 = INT64_MAX;
	int64_t x6843 = INT64_MAX;
	uint64_t x6844 = UINT64_MAX;
	volatile uint64_t t61 = 12744448LLU;

    t61 = ((x6841<<(x6842^x6843))-x6844);

    if (t61 != 4294967296LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x6845 = INT32_MAX;
	int16_t x6846 = INT16_MIN;
	int16_t x6847 = INT16_MIN;
	volatile int64_t x6848 = -1LL;
	volatile int64_t t62 = 940826263644559758LL;

    t62 = ((x6845<<(x6846^x6847))-x6848);

    if (t62 != 2147483648LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x6862 = -1LL;
	int64_t x6863 = -1LL;
	int64_t x6864 = INT64_MAX;
	volatile int64_t t63 = 8034517432597LL;

    t63 = ((x6861<<(x6862^x6863))-x6864);

    if (t63 != -9223372036854775593LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x7033 = 125051390LL;
	int64_t x7034 = INT64_MIN;
	int64_t x7035 = INT64_MIN;
	static uint8_t x7036 = 3U;
	int64_t t64 = -352707701LL;

    t64 = ((x7033<<(x7034^x7035))-x7036);

    if (t64 != 125051387LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x7101 = 0;
	static int8_t x7102 = 24;
	static uint16_t x7103 = 0U;
	int32_t t65 = 495627445;

    t65 = ((x7101<<(x7102^x7103))-x7104);

    if (t65 != -8) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint16_t x7315 = UINT16_MAX;
	int32_t x7316 = INT32_MAX;
	static volatile int32_t t66 = 354516316;

    t66 = ((x7313<<(x7314^x7315))-x7316);

    if (t66 != -2147483520) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x7669 = 1292U;
	int16_t x7670 = -1;
	static int64_t x7671 = -1LL;

    t67 = ((x7669<<(x7670^x7671))-x7672);

    if (t67 != 1037) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x7674 = 14U;
	static uint32_t x7675 = 4U;
	static int64_t x7676 = INT64_MAX;
	int64_t t68 = -878LL;

    t68 = ((x7673<<(x7674^x7675))-x7676);

    if (t68 != -9223372036854514687LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x7685 = INT8_MAX;
	int8_t x7686 = INT8_MIN;
	int32_t x7687 = -118;
	int32_t x7688 = INT32_MAX;

    t69 = ((x7685<<(x7686^x7687))-x7688);

    if (t69 != -2147353599) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint8_t x7709 = UINT8_MAX;
	int8_t x7710 = -1;
	int16_t x7711 = -1;
	volatile int8_t x7712 = 1;
	volatile int32_t t70 = 1633;

    t70 = ((x7709<<(x7710^x7711))-x7712);

    if (t70 != 254) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint64_t x7733 = 80853781LLU;
	uint64_t t71 = 87027LLU;

    t71 = ((x7733<<(x7734^x7735))-x7736);

    if (t71 != 9223372036935629589LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x7766 = -9;
	uint64_t x7767 = UINT64_MAX;
	static int64_t x7768 = 197729193548619677LL;
	uint64_t t72 = 444858LLU;

    t72 = ((x7765<<(x7766^x7767))-x7768);

    if (t72 != 18249014880160931683LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x7973 = 0U;
	static int32_t x7974 = INT32_MIN;
	volatile int32_t x7975 = INT32_MIN;
	int32_t x7976 = 13066;
	int32_t t73 = -4389;

    t73 = ((x7973<<(x7974^x7975))-x7976);

    if (t73 != -13066) { NG(); } else { ; }
	
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


    return 0;
}

