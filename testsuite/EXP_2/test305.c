#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x49 = -1;
int16_t x75 = -69;
static volatile uint64_t t1 = 516210547971LLU;
int8_t x137 = INT8_MAX;
static int8_t x140 = 1;
uint8_t x196 = 0U;
volatile uint8_t x230 = 0U;
uint64_t x232 = 31LLU;
int32_t t7 = -3387;
uint64_t x277 = 15745685LLU;
volatile uint64_t t10 = 2470326LLU;
int32_t x350 = -1226;
int8_t x366 = INT8_MIN;
int16_t x405 = INT16_MIN;
int64_t x407 = INT64_MIN;
volatile uint64_t t15 = 74434162119948LLU;
uint8_t x564 = 2U;
uint32_t x585 = 195U;
int32_t x799 = -33643324;
int8_t x845 = INT8_MIN;
uint8_t x893 = UINT8_MAX;
volatile int64_t x894 = 0LL;
int32_t x1010 = INT32_MIN;
int8_t x1017 = 59;
static uint8_t x1020 = 10U;
int32_t x1103 = -1;
volatile int32_t t34 = 1677;
int64_t x1783 = -1LL;
uint16_t x1815 = 222U;
static int64_t x1881 = 3755LL;
int8_t x1883 = INT8_MAX;
uint8_t x1932 = 3U;
static volatile int16_t x1979 = 1;
volatile uint32_t x2013 = UINT32_MAX;
int64_t x2014 = 6230LL;
int64_t x2161 = INT64_MIN;
uint64_t x2162 = UINT64_MAX;
int32_t x2163 = -1;
uint16_t x2164 = 49U;
uint8_t x2174 = UINT8_MAX;
int16_t x2175 = INT16_MIN;
uint32_t x2187 = 13U;
uint8_t x2188 = 0U;
int16_t x2192 = 4;
int64_t x2217 = -1LL;
static int32_t x2218 = 322867262;
static uint32_t x2222 = 3420U;
volatile uint8_t x2224 = 20U;
volatile uint32_t t49 = 1315U;
uint8_t x2356 = 2U;
int32_t t50 = -18046567;
volatile int16_t x2359 = 4;
int8_t x2400 = 2;
int64_t x2413 = INT64_MIN;
volatile int32_t x2465 = 10145926;
int64_t x2467 = -1LL;
volatile uint32_t x2468 = 4U;
uint64_t x2506 = 16070395072713253LLU;
uint64_t t57 = 4LLU;
int16_t x2653 = -6;
uint8_t x2654 = 0U;
int32_t t58 = 1;
volatile uint16_t x2689 = UINT16_MAX;
static volatile int64_t t60 = 52122354684LL;
uint32_t t61 = 2222U;
uint8_t x2765 = 6U;
int64_t x2768 = 12LL;
int32_t t62 = 226834816;
int8_t x2788 = 7;
uint64_t x2843 = 192LLU;
int16_t x2844 = 1;
volatile uint64_t t65 = 3755627220758004250LLU;
int64_t x2870 = -46140113LL;
int16_t x2974 = INT16_MIN;
volatile int32_t x2978 = INT32_MAX;
volatile uint64_t x3098 = 594LLU;
uint8_t x3099 = 3U;
int16_t x3134 = 3;
int64_t x3182 = 5LL;
int16_t x3249 = INT16_MAX;
uint32_t x3252 = 0U;
int32_t t75 = -3033;
uint32_t x3262 = 34U;
uint32_t x3429 = 2079778U;
uint16_t x3445 = 1U;
volatile uint64_t x3446 = 162LLU;
static int16_t x3447 = INT16_MIN;
volatile int16_t x3578 = 1;
uint64_t x3579 = 15055181547LLU;
static uint32_t x3603 = UINT32_MAX;
static int64_t x3677 = INT64_MIN;
int64_t x3679 = INT64_MIN;
volatile int32_t x3779 = 2470751;
int32_t t89 = -1;
volatile int8_t x3781 = 4;
static int32_t x3782 = -15119334;
uint64_t t91 = 40784LLU;
int64_t t93 = -273068154451LL;
int16_t x4086 = -1;
int16_t x4088 = 1;
uint16_t x4200 = 38U;
int32_t x4205 = -3588;
uint8_t x4208 = 0U;


void f0(void) {
	uint16_t x50 = UINT16_MAX;
	uint64_t x51 = 1LLU;
	uint32_t x52 = 5U;
	uint64_t t0 = 325701935262220848LLU;

	t0 = ((x49&(x50-x51))<<x52);

	if (t0 != 2097088LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x73 = INT32_MIN;
	uint64_t x74 = 1456283569711780LLU;
	static volatile uint8_t x76 = 14U;

	t1 = ((x73&(x74-x75))<<x76);

	if (t1 != 5412974908378447872LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x93 = INT16_MAX;
	int8_t x94 = INT8_MIN;
	static int16_t x95 = -105;
	uint8_t x96 = 4U;
	static volatile int32_t t2 = 3018;

	t2 = ((x93&(x94-x95))<<x96);

	if (t2 != 523920) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x133 = INT64_MIN;
	int64_t x134 = -3LL;
	uint64_t x135 = 242993812LLU;
	int8_t x136 = 2;
	static uint64_t t3 = 4LLU;

	t3 = ((x133&(x134-x135))<<x136);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x138 = 1;
	volatile int32_t x139 = -1;
	volatile int32_t t4 = 273730;

	t4 = ((x137&(x138-x139))<<x140);

	if (t4 != 4) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x193 = 153945762513747566LLU;
	int16_t x194 = INT16_MIN;
	static volatile int64_t x195 = -1LL;
	static volatile uint64_t t5 = 71LLU;

	t5 = ((x193&(x194-x195))<<x196);

	if (t5 != 153945762513715200LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x229 = INT16_MIN;
	int64_t x231 = -125056LL;
	int64_t t6 = 31417LL;

	t6 = ((x229&(x230-x231))<<x232);

	if (t6 != 211106232532992LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x233 = UINT16_MAX;
	static int8_t x234 = INT8_MIN;
	int32_t x235 = 5017382;
	uint32_t x236 = 0U;

	t7 = ((x233&(x234-x235))<<x236);

	if (t7 != 28762) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x249 = -1;
	int8_t x250 = INT8_MAX;
	uint8_t x251 = 1U;
	static int8_t x252 = 5;
	volatile int32_t t8 = -9;

	t8 = ((x249&(x250-x251))<<x252);

	if (t8 != 4032) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x257 = 27120955;
	volatile int64_t x258 = INT64_MAX;
	uint64_t x259 = UINT64_MAX;
	uint8_t x260 = 3U;
	uint64_t t9 = 2641131147763LLU;

	t9 = ((x257&(x258-x259))<<x260);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x278 = -52LL;
	volatile int64_t x279 = INT64_MIN;
	static int8_t x280 = 6;

	t10 = ((x277&(x278-x279))<<x280);

	if (t10 != 1007722752LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x349 = 304;
	static int64_t x351 = -1LL;
	volatile int32_t x352 = 52;
	volatile int64_t t11 = -3390364179129347LL;

	t11 = ((x349&(x350-x351))<<x352);

	if (t11 != 1369094286720630784LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x357 = INT16_MIN;
	int32_t x358 = -1;
	int8_t x359 = -1;
	uint8_t x360 = 4U;
	int32_t t12 = 244765;

	t12 = ((x357&(x358-x359))<<x360);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x365 = 3U;
	uint32_t x367 = UINT32_MAX;
	static int32_t x368 = 27;
	volatile uint32_t t13 = 7U;

	t13 = ((x365&(x366-x367))<<x368);

	if (t13 != 134217728U) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x381 = 20934437524789LLU;
	static int64_t x382 = INT64_MIN;
	int16_t x383 = -16;
	uint8_t x384 = 47U;
	volatile uint64_t t14 = 52035278525728LLU;

	t14 = ((x381&(x382-x383))<<x384);

	if (t14 != 2251799813685248LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x406 = 3LLU;
	uint8_t x408 = 17U;

	t15 = ((x405&(x406-x407))<<x408);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x521 = INT32_MAX;
	volatile uint64_t x522 = UINT64_MAX;
	uint64_t x523 = UINT64_MAX;
	int16_t x524 = 13;
	static volatile uint64_t t16 = 54880064096LLU;

	t16 = ((x521&(x522-x523))<<x524);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x557 = INT16_MIN;
	int32_t x558 = 10857;
	int64_t x559 = -7106593988LL;
	volatile uint32_t x560 = 1U;
	volatile int64_t t17 = -256796509LL;

	t17 = ((x557&(x558-x559))<<x560);

	if (t17 != 14213185536LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint64_t x561 = UINT64_MAX;
	int16_t x562 = -2912;
	int64_t x563 = INT64_MIN;
	volatile uint64_t t18 = 130LLU;

	t18 = ((x561&(x562-x563))<<x564);

	if (t18 != 18446744073709539968LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x586 = -252;
	int8_t x587 = -60;
	int8_t x588 = 2;
	volatile uint32_t t19 = 102914045U;

	t19 = ((x585&(x586-x587))<<x588);

	if (t19 != 256U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x701 = INT16_MIN;
	int32_t x702 = INT32_MAX;
	static uint64_t x703 = 3671952801945LLU;
	static volatile uint16_t x704 = 7U;
	volatile uint64_t t20 = 1618LLU;

	t20 = ((x701&(x702-x703))<<x704);

	if (t20 != 18446274338626732032LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x761 = -1;
	uint32_t x762 = 5194753U;
	uint8_t x763 = 27U;
	static uint16_t x764 = 6U;
	uint32_t t21 = 1016849U;

	t21 = ((x761&(x762-x763))<<x764);

	if (t21 != 332462464U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x797 = 7;
	static volatile int64_t x798 = INT64_MIN;
	static int16_t x800 = 1;
	static volatile int64_t t22 = -11356407939LL;

	t22 = ((x797&(x798-x799))<<x800);

	if (t22 != 8LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x846 = INT16_MIN;
	volatile int16_t x847 = INT16_MIN;
	static int64_t x848 = 0LL;
	volatile int32_t t23 = -12619;

	t23 = ((x845&(x846-x847))<<x848);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x895 = 2418;
	volatile uint16_t x896 = 8U;
	volatile int64_t t24 = -8514117513300LL;

	t24 = ((x893&(x894-x895))<<x896);

	if (t24 != 36352LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x909 = 18;
	int32_t x910 = -1060491878;
	int8_t x911 = INT8_MIN;
	uint8_t x912 = 3U;
	volatile int32_t t25 = -1892;

	t25 = ((x909&(x910-x911))<<x912);

	if (t25 != 144) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1001 = 748LL;
	int32_t x1002 = -3;
	uint16_t x1003 = 21030U;
	static int32_t x1004 = 0;
	volatile int64_t t26 = 18437967036424LL;

	t26 = ((x1001&(x1002-x1003))<<x1004);

	if (t26 != 196LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x1009 = 24U;
	int16_t x1011 = INT16_MIN;
	uint8_t x1012 = 0U;
	uint32_t t27 = 3956144U;

	t27 = ((x1009&(x1010-x1011))<<x1012);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint16_t x1018 = 1U;
	uint32_t x1019 = 474702649U;
	volatile uint32_t t28 = 18573689U;

	t28 = ((x1017&(x1018-x1019))<<x1020);

	if (t28 != 8192U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x1101 = UINT64_MAX;
	static uint8_t x1102 = UINT8_MAX;
	uint32_t x1104 = 1U;
	uint64_t t29 = 264843253190LLU;

	t29 = ((x1101&(x1102-x1103))<<x1104);

	if (t29 != 512LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x1153 = INT8_MAX;
	static int64_t x1154 = -9601700376LL;
	int8_t x1155 = 5;
	uint16_t x1156 = 15U;
	int64_t t30 = -101268017LL;

	t30 = ((x1153&(x1154-x1155))<<x1156);

	if (t30 != 3244032LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x1249 = 15788LLU;
	uint8_t x1250 = UINT8_MAX;
	uint32_t x1251 = UINT32_MAX;
	int8_t x1252 = 1;
	uint64_t t31 = 35800LLU;

	t31 = ((x1249&(x1250-x1251))<<x1252);

	if (t31 != 512LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1397 = 8740U;
	static int8_t x1398 = 47;
	volatile uint16_t x1399 = 4U;
	uint8_t x1400 = 11U;
	volatile int32_t t32 = -881344;

	t32 = ((x1397&(x1398-x1399))<<x1400);

	if (t32 != 65536) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x1433 = UINT8_MAX;
	static int64_t x1434 = INT64_MAX;
	int32_t x1435 = INT32_MAX;
	int32_t x1436 = 0;
	volatile int64_t t33 = 217LL;

	t33 = ((x1433&(x1434-x1435))<<x1436);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1509 = -1;
	static uint16_t x1510 = UINT16_MAX;
	volatile uint8_t x1511 = UINT8_MAX;
	uint32_t x1512 = 2U;

	t34 = ((x1509&(x1510-x1511))<<x1512);

	if (t34 != 261120) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint32_t x1761 = 72269246U;
	uint64_t x1762 = 525323293103175LLU;
	static uint64_t x1763 = 6012122053120LLU;
	int8_t x1764 = 1;
	static uint64_t t35 = 6610059888281048LLU;

	t35 = ((x1761&(x1762-x1763))<<x1764);

	if (t35 != 142684172LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint16_t x1781 = 23U;
	int8_t x1782 = -1;
	uint16_t x1784 = 20U;
	int64_t t36 = 99523317584365734LL;

	t36 = ((x1781&(x1782-x1783))<<x1784);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x1785 = UINT8_MAX;
	static volatile int64_t x1786 = INT64_MIN;
	int16_t x1787 = -1;
	uint16_t x1788 = 1U;
	int64_t t37 = 15204LL;

	t37 = ((x1785&(x1786-x1787))<<x1788);

	if (t37 != 2LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x1813 = 12543U;
	volatile uint16_t x1814 = 4U;
	volatile int8_t x1816 = 1;
	static volatile int32_t t38 = 0;

	t38 = ((x1813&(x1814-x1815))<<x1816);

	if (t38 != 24652) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x1882 = 486884406U;
	int16_t x1884 = 21;
	static int64_t t39 = -1095944439111633LL;

	t39 = ((x1881&(x1882-x1883))<<x1884);

	if (t39 != 1415577600LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x1929 = -1;
	uint32_t x1930 = 1881102U;
	volatile uint64_t x1931 = 9465LLU;
	uint64_t t40 = 2781311802535703LLU;

	t40 = ((x1929&(x1930-x1931))<<x1932);

	if (t40 != 14973096LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x1977 = 18;
	uint16_t x1978 = 73U;
	static uint8_t x1980 = 1U;
	int32_t t41 = 395617533;

	t41 = ((x1977&(x1978-x1979))<<x1980);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x2015 = INT8_MAX;
	int8_t x2016 = 6;
	int64_t t42 = -3836466LL;

	t42 = ((x2013&(x2014-x2015))<<x2016);

	if (t42 != 390592LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2097 = INT16_MIN;
	volatile uint32_t x2098 = UINT32_MAX;
	int32_t x2099 = -37;
	static int8_t x2100 = 0;
	uint32_t t43 = 2531606U;

	t43 = ((x2097&(x2098-x2099))<<x2100);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t t44 = 590499335122LLU;

	t44 = ((x2161&(x2162-x2163))<<x2164);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x2173 = -1;
	int16_t x2176 = 1;
	volatile int32_t t45 = 5116081;

	t45 = ((x2173&(x2174-x2175))<<x2176);

	if (t45 != 66046) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x2185 = 183911814U;
	uint64_t x2186 = UINT64_MAX;
	volatile uint64_t t46 = 7015791479LLU;

	t46 = ((x2185&(x2186-x2187))<<x2188);

	if (t46 != 183911810LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x2189 = 41U;
	uint16_t x2190 = 88U;
	int8_t x2191 = INT8_MAX;
	int32_t t47 = 15;

	t47 = ((x2189&(x2190-x2191))<<x2192);

	if (t47 != 144) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x2219 = 10968U;
	uint8_t x2220 = 7U;
	volatile int64_t t48 = -1LL;

	t48 = ((x2217&(x2218-x2219))<<x2220);

	if (t48 != 41325605632LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x2221 = INT32_MIN;
	volatile int8_t x2223 = INT8_MIN;

	t49 = ((x2221&(x2222-x2223))<<x2224);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x2353 = INT8_MAX;
	int16_t x2354 = -1;
	int16_t x2355 = INT16_MIN;

	t50 = ((x2353&(x2354-x2355))<<x2356);

	if (t50 != 508) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x2357 = INT64_MIN;
	volatile uint32_t x2358 = 604525U;
	uint8_t x2360 = 0U;
	volatile int64_t t51 = -13275118990881LL;

	t51 = ((x2357&(x2358-x2359))<<x2360);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int16_t x2397 = INT16_MAX;
	static int16_t x2398 = 316;
	uint32_t x2399 = 421119U;
	volatile uint32_t t52 = 509U;

	t52 = ((x2397&(x2398-x2399))<<x2400);

	if (t52 != 20724U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x2414 = INT32_MAX;
	int32_t x2415 = 5581752;
	static uint8_t x2416 = 7U;
	static int64_t t53 = 12975467209LL;

	t53 = ((x2413&(x2414-x2415))<<x2416);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x2433 = UINT16_MAX;
	uint32_t x2434 = 222033U;
	static int64_t x2435 = -42921641630315873LL;
	int8_t x2436 = 39;
	static int64_t t54 = -46686LL;

	t54 = ((x2433&(x2434-x2435))<<x2436);

	if (t54 != 21489954764881920LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x2453 = 60U;
	int64_t x2454 = -1LL;
	int64_t x2455 = -129856455968513LL;
	static int8_t x2456 = 3;
	int64_t t55 = -32220537774LL;

	t55 = ((x2453&(x2454-x2455))<<x2456);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x2466 = INT16_MAX;
	volatile int64_t t56 = -2LL;

	t56 = ((x2465&(x2466-x2467))<<x2468);

	if (t56 != 524288LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x2505 = -1;
	int8_t x2507 = INT8_MIN;
	int16_t x2508 = 1;

	t57 = ((x2505&(x2506-x2507))<<x2508);

	if (t57 != 32140790145426762LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x2655 = -1;
	uint8_t x2656 = 3U;

	t58 = ((x2653&(x2654-x2655))<<x2656);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x2690 = INT8_MAX;
	int16_t x2691 = -1;
	static uint8_t x2692 = 1U;
	volatile int32_t t59 = -6819;

	t59 = ((x2689&(x2690-x2691))<<x2692);

	if (t59 != 256) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x2705 = -1;
	int16_t x2706 = INT16_MAX;
	int64_t x2707 = -2680026157553LL;
	uint32_t x2708 = 4U;

	t60 = ((x2705&(x2706-x2707))<<x2708);

	if (t60 != 42880419045120LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x2717 = INT8_MIN;
	volatile uint32_t x2718 = 353903979U;
	int16_t x2719 = INT16_MAX;
	uint8_t x2720 = 3U;

	t61 = ((x2717&(x2718-x2719))<<x2720);

	if (t61 != 2830968832U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x2766 = 62;
	static int16_t x2767 = -3;

	t62 = ((x2765&(x2766-x2767))<<x2768);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x2785 = INT64_MIN;
	uint64_t x2786 = 55075LLU;
	int32_t x2787 = INT32_MAX;
	uint64_t t63 = 710559988LLU;

	t63 = ((x2785&(x2786-x2787))<<x2788);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x2809 = 4U;
	int64_t x2810 = INT64_MIN;
	int8_t x2811 = INT8_MIN;
	volatile int16_t x2812 = 1;
	int64_t t64 = -132396788008LL;

	t64 = ((x2809&(x2810-x2811))<<x2812);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x2841 = INT16_MAX;
	int32_t x2842 = -1;

	t65 = ((x2841&(x2842-x2843))<<x2844);

	if (t65 != 65150LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x2869 = INT32_MAX;
	int32_t x2871 = -1;
	int8_t x2872 = 1;
	volatile int64_t t66 = 624LL;

	t66 = ((x2869&(x2870-x2871))<<x2872);

	if (t66 != 4202687072LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint8_t x2941 = 1U;
	int32_t x2942 = -1;
	static int32_t x2943 = INT32_MIN;
	volatile uint8_t x2944 = 3U;
	volatile int32_t t67 = -166202424;

	t67 = ((x2941&(x2942-x2943))<<x2944);

	if (t67 != 8) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x2961 = 2;
	int64_t x2962 = INT64_MIN;
	int16_t x2963 = -924;
	int32_t x2964 = 18;
	volatile int64_t t68 = 133989712844830LL;

	t68 = ((x2961&(x2962-x2963))<<x2964);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x2973 = INT16_MAX;
	int16_t x2975 = INT16_MAX;
	int32_t x2976 = 1;
	volatile int32_t t69 = 50696492;

	t69 = ((x2973&(x2974-x2975))<<x2976);

	if (t69 != 2) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x2977 = -821LL;
	uint32_t x2979 = 2081430393U;
	uint8_t x2980 = 3U;
	int64_t t70 = 5362980685133LL;

	t70 = ((x2977&(x2978-x2979))<<x2980);

	if (t70 != 528426000LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x3049 = -89106189;
	int16_t x3050 = INT16_MIN;
	uint32_t x3051 = 130740345U;
	volatile int8_t x3052 = 21;
	volatile uint32_t t71 = 259769U;

	t71 = ((x3049&(x3050-x3051))<<x3052);

	if (t71 != 274726912U) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x3097 = 94U;
	uint8_t x3100 = 0U;
	uint64_t t72 = 110826LLU;

	t72 = ((x3097&(x3098-x3099))<<x3100);

	if (t72 != 78LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x3133 = -7;
	int8_t x3135 = INT8_MIN;
	static uint64_t x3136 = 6LLU;
	int32_t t73 = 67542642;

	t73 = ((x3133&(x3134-x3135))<<x3136);

	if (t73 != 8256) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x3181 = INT16_MAX;
	int64_t x3183 = -60153759037074LL;
	uint16_t x3184 = 7U;
	int64_t t74 = 47209337672380168LL;

	t74 = ((x3181&(x3182-x3183))<<x3184);

	if (t74 != 3885952LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x3250 = -1;
	int32_t x3251 = -132470;

	t75 = ((x3249&(x3250-x3251))<<x3252);

	if (t75 != 1397) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x3261 = UINT16_MAX;
	int64_t x3263 = 11050201380620077LL;
	int8_t x3264 = 1;
	static int64_t t76 = 1424692438LL;

	t76 = ((x3261&(x3262-x3263))<<x3264);

	if (t76 != 127466LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x3321 = -1LL;
	static uint64_t x3322 = 1LLU;
	volatile int8_t x3323 = -4;
	static int8_t x3324 = 1;
	volatile uint64_t t77 = 2496965605LLU;

	t77 = ((x3321&(x3322-x3323))<<x3324);

	if (t77 != 10LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint16_t x3377 = UINT16_MAX;
	int8_t x3378 = INT8_MIN;
	uint64_t x3379 = 124893990745353043LLU;
	uint64_t x3380 = 3LLU;
	uint64_t t78 = 2491406695622883LLU;

	t78 = ((x3377&(x3378-x3379))<<x3380);

	if (t78 != 434536LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x3430 = -33;
	int64_t x3431 = 246577941LL;
	int8_t x3432 = 1;
	volatile int64_t t79 = 64387266808267LL;

	t79 = ((x3429&(x3430-x3431))<<x3432);

	if (t79 != 1771524LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x3448 = 6U;
	volatile uint64_t t80 = 23196167497LLU;

	t80 = ((x3445&(x3446-x3447))<<x3448);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x3489 = 454222586LLU;
	static uint64_t x3490 = 18270001795149LLU;
	volatile uint32_t x3491 = 506U;
	static int64_t x3492 = 30LL;
	uint64_t t81 = 8544864LLU;

	t81 = ((x3489&(x3490-x3491))<<x3492);

	if (t81 != 289532835721641984LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x3577 = INT32_MIN;
	uint8_t x3580 = 63U;
	volatile uint64_t t82 = 5609748LLU;

	t82 = ((x3577&(x3578-x3579))<<x3580);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x3601 = 14U;
	volatile uint8_t x3602 = UINT8_MAX;
	int8_t x3604 = 1;
	uint32_t t83 = 748749U;

	t83 = ((x3601&(x3602-x3603))<<x3604);

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x3617 = -37128;
	static uint16_t x3618 = UINT16_MAX;
	volatile int64_t x3619 = -27949LL;
	int8_t x3620 = 9;
	int64_t t84 = -2882448788847167633LL;

	t84 = ((x3617&(x3618-x3619))<<x3620);

	if (t84 != 47730688LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x3678 = UINT64_MAX;
	int8_t x3680 = 0;
	uint64_t t85 = 1670142778561714127LLU;

	t85 = ((x3677&(x3678-x3679))<<x3680);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x3681 = 2781169U;
	int16_t x3682 = 9;
	int32_t x3683 = -1;
	uint8_t x3684 = 6U;
	volatile uint32_t t86 = 336U;

	t86 = ((x3681&(x3682-x3683))<<x3684);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x3705 = 2U;
	static volatile int16_t x3706 = -3;
	int8_t x3707 = -1;
	uint8_t x3708 = 1U;
	static volatile int32_t t87 = -110019;

	t87 = ((x3705&(x3706-x3707))<<x3708);

	if (t87 != 4) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x3745 = 24U;
	int8_t x3746 = 2;
	int8_t x3747 = INT8_MIN;
	uint8_t x3748 = 6U;
	static volatile uint32_t t88 = 16U;

	t88 = ((x3745&(x3746-x3747))<<x3748);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x3777 = 249;
	int8_t x3778 = -1;
	static uint8_t x3780 = 2U;

	t89 = ((x3777&(x3778-x3779))<<x3780);

	if (t89 != 640) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x3783 = INT16_MIN;
	int64_t x3784 = 12LL;
	volatile int32_t t90 = 2229270;

	t90 = ((x3781&(x3782-x3783))<<x3784);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x3877 = INT32_MIN;
	uint64_t x3878 = 56825265182864LLU;
	uint8_t x3879 = 1U;
	uint8_t x3880 = 18U;

	t91 = ((x3877&(x3878-x3879))<<x3880);

	if (t91 != 14896218717481336832LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x3897 = 1365871;
	uint32_t x3898 = 15884172U;
	int32_t x3899 = 633;
	uint64_t x3900 = 1LLU;
	static uint32_t t92 = 1U;

	t92 = ((x3897&(x3898-x3899))<<x3900);

	if (t92 != 2140678U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x3989 = -1647359465720473169LL;
	volatile int32_t x3990 = 54645;
	uint32_t x3991 = 23167U;
	uint8_t x3992 = 20U;

	t93 = ((x3989&(x3990-x3991))<<x3992);

	if (t93 != 6616514560LL) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint64_t x4085 = UINT64_MAX;
	int8_t x4087 = INT8_MAX;
	volatile uint64_t t94 = 6782LLU;

	t94 = ((x4085&(x4086-x4087))<<x4088);

	if (t94 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x4105 = INT8_MIN;
	uint64_t x4106 = 30LLU;
	volatile int64_t x4107 = INT64_MIN;
	int8_t x4108 = 2;
	volatile uint64_t t95 = 463646822650LLU;

	t95 = ((x4105&(x4106-x4107))<<x4108);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x4117 = INT64_MAX;
	uint8_t x4118 = UINT8_MAX;
	static uint32_t x4119 = UINT32_MAX;
	volatile int8_t x4120 = 0;
	int64_t t96 = -77675618LL;

	t96 = ((x4117&(x4118-x4119))<<x4120);

	if (t96 != 256LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x4133 = UINT32_MAX;
	uint16_t x4134 = 62U;
	int64_t x4135 = -1174622676LL;
	uint8_t x4136 = 6U;
	static volatile int64_t t97 = 123394973124227887LL;

	t97 = ((x4133&(x4134-x4135))<<x4136);

	if (t97 != 75175855232LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x4197 = -1;
	int8_t x4198 = -1;
	uint64_t x4199 = UINT64_MAX;
	uint64_t t98 = 51296817294LLU;

	t98 = ((x4197&(x4198-x4199))<<x4200);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x4206 = UINT64_MAX;
	int16_t x4207 = 15;
	volatile uint64_t t99 = 101684036276714LLU;

	t99 = ((x4205&(x4206-x4207))<<x4208);

	if (t99 != 18446744073709548016LLU) { NG(); } else { ; }
	
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

