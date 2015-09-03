#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x8 = 15;
volatile int32_t t4 = 1;
int8_t x234 = -1;
int64_t x313 = INT64_MIN;
uint8_t x316 = 12U;
static int8_t x329 = -46;
volatile int8_t x369 = -1;
int32_t x370 = INT32_MAX;
volatile int8_t x585 = INT8_MIN;
int32_t x586 = INT32_MIN;
uint64_t x587 = UINT64_MAX;
uint8_t x693 = 4U;
static int32_t t15 = 11398653;
uint16_t x930 = UINT16_MAX;
volatile uint64_t x976 = UINT64_MAX;
volatile int16_t x1002 = 1;
uint8_t x1003 = 0U;
int8_t x1028 = 0;
static int16_t x1040 = 0;
volatile int64_t x1045 = INT64_MAX;
static volatile int32_t t22 = 477441316;
uint64_t x1059 = UINT64_MAX;
int8_t x1163 = 1;
int8_t x1164 = 17;
int32_t t24 = -179458038;
int64_t x1229 = INT64_MAX;
int8_t x1232 = -1;
static int8_t x1321 = INT8_MIN;
volatile int16_t x1322 = -1;
int16_t x1356 = 1;
volatile int32_t t30 = 111;
volatile int64_t x1787 = -1LL;
int32_t x1862 = 105851259;
int32_t t33 = 26561379;
int16_t x1926 = -1;
static uint8_t x2495 = 19U;
static int16_t x2625 = -1;
static uint8_t x2628 = 1U;
volatile uint16_t x2726 = 65U;
volatile int32_t t40 = 25488;
uint16_t x2812 = 1U;
volatile int32_t t43 = 2466270;
volatile uint8_t x2989 = 2U;
uint8_t x2991 = 20U;
uint16_t x3107 = 1U;
int32_t t45 = 1940;
int64_t x3111 = -1LL;
uint8_t x3158 = 2U;
int8_t x3257 = INT8_MAX;
int8_t x3259 = -1;
static int32_t x3293 = -764368;
int8_t x3295 = -1;
uint16_t x3325 = 7942U;
volatile int32_t t54 = 533228597;
volatile int32_t t55 = 3740;
static uint64_t x3794 = 5602369045785003343LLU;
uint64_t x3795 = 15LLU;
int16_t x3826 = INT16_MIN;
uint8_t x3899 = 6U;
volatile int32_t t59 = 3607861;
int8_t x4036 = -13;
static uint8_t x4130 = 7U;
int16_t x4705 = -1;
uint8_t x4745 = UINT8_MAX;
static int8_t x4747 = -1;
uint16_t x4816 = 7U;
uint64_t x4945 = 5466LLU;
uint8_t x4978 = 0U;
static int8_t x4979 = -1;
volatile int32_t t72 = -13;
static uint8_t x5267 = 3U;
uint8_t x5647 = 30U;
int32_t t76 = -592305;
volatile int32_t t77 = -331;
uint8_t x5976 = 8U;
int64_t x6054 = -2535333LL;
volatile int32_t t79 = -8;
int16_t x6100 = -1;
static int32_t x6245 = -166909;
static uint64_t x6246 = 2192449838392LLU;
uint64_t x6523 = 6LLU;
static int32_t t85 = -619174211;
volatile int32_t t88 = -5358040;
volatile int32_t t90 = -91993806;
volatile int32_t t91 = 0;
int8_t x6785 = INT8_MAX;
int16_t x6837 = -1;
int64_t x6838 = 2LL;
static int64_t x6839 = -1LL;
volatile int64_t x6878 = -1LL;
static uint64_t x6880 = UINT64_MAX;
int8_t x6903 = -1;
volatile int32_t t95 = 460416558;
uint8_t x6918 = 11U;
int32_t x7065 = INT32_MIN;
uint8_t x7068 = 6U;


void f0(void) {
	int32_t x5 = INT32_MIN;
	int8_t x6 = -7;
	int16_t x7 = -1;
	int32_t t0 = -873588498;

	t0 = ((x5<=x6)<<(x7+x8));

	if (t0 != 16384) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x49 = 72LLU;
	int8_t x50 = INT8_MIN;
	int64_t x51 = 18LL;
	volatile int64_t x52 = 0LL;
	int32_t t1 = -376766;

	t1 = ((x49<=x50)<<(x51+x52));

	if (t1 != 262144) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x129 = INT64_MAX;
	int8_t x130 = INT8_MIN;
	int32_t x131 = 1;
	volatile uint32_t x132 = 3U;
	int32_t t2 = -1;

	t2 = ((x129<=x130)<<(x131+x132));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x141 = INT32_MIN;
	static uint8_t x142 = UINT8_MAX;
	uint8_t x143 = 10U;
	uint32_t x144 = UINT32_MAX;
	int32_t t3 = 102;

	t3 = ((x141<=x142)<<(x143+x144));

	if (t3 != 512) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x173 = 18U;
	uint32_t x174 = 3125579U;
	static uint8_t x175 = 17U;
	int8_t x176 = 0;

	t4 = ((x173<=x174)<<(x175+x176));

	if (t4 != 131072) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x233 = 129504594U;
	volatile int16_t x235 = 2;
	uint16_t x236 = 23U;
	int32_t t5 = 129735;

	t5 = ((x233<=x234)<<(x235+x236));

	if (t5 != 33554432) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x314 = -564943318899409LL;
	int16_t x315 = -1;
	int32_t t6 = 597;

	t6 = ((x313<=x314)<<(x315+x316));

	if (t6 != 2048) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x330 = UINT64_MAX;
	int16_t x331 = 4;
	static int64_t x332 = -1LL;
	int32_t t7 = 9;

	t7 = ((x329<=x330)<<(x331+x332));

	if (t7 != 8) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x371 = -43;
	uint8_t x372 = 52U;
	volatile int32_t t8 = -32513;

	t8 = ((x369<=x370)<<(x371+x372));

	if (t8 != 512) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x389 = INT64_MIN;
	int16_t x390 = INT16_MIN;
	volatile int32_t x391 = -1;
	uint16_t x392 = 1U;
	static int32_t t9 = -17;

	t9 = ((x389<=x390)<<(x391+x392));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x549 = INT8_MIN;
	volatile int32_t x550 = INT32_MIN;
	uint16_t x551 = 0U;
	uint16_t x552 = 0U;
	int32_t t10 = -1853021;

	t10 = ((x549<=x550)<<(x551+x552));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x569 = INT8_MIN;
	int64_t x570 = INT64_MIN;
	int32_t x571 = -1;
	int8_t x572 = 5;
	volatile int32_t t11 = 3;

	t11 = ((x569<=x570)<<(x571+x572));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x588 = 2;
	int32_t t12 = -5619625;

	t12 = ((x585<=x586)<<(x587+x588));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x617 = INT8_MIN;
	static int16_t x618 = -1;
	int32_t x619 = -1;
	uint8_t x620 = 2U;
	static int32_t t13 = 2;

	t13 = ((x617<=x618)<<(x619+x620));

	if (t13 != 2) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x649 = 1200U;
	volatile int32_t x650 = 1;
	uint64_t x651 = 2LLU;
	int8_t x652 = -1;
	volatile int32_t t14 = 1496;

	t14 = ((x649<=x650)<<(x651+x652));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x694 = 19U;
	static uint8_t x695 = 1U;
	int32_t x696 = -1;

	t15 = ((x693<=x694)<<(x695+x696));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x929 = UINT8_MAX;
	int8_t x931 = -6;
	uint16_t x932 = 32U;
	volatile int32_t t16 = 50;

	t16 = ((x929<=x930)<<(x931+x932));

	if (t16 != 67108864) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x941 = 20955U;
	int64_t x942 = INT64_MIN;
	static int16_t x943 = -1;
	int8_t x944 = 1;
	int32_t t17 = -62696152;

	t17 = ((x941<=x942)<<(x943+x944));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x973 = INT64_MIN;
	static uint64_t x974 = 107235217562014LLU;
	int8_t x975 = 19;
	volatile int32_t t18 = -1;

	t18 = ((x973<=x974)<<(x975+x976));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1001 = -1;
	uint8_t x1004 = 5U;
	volatile int32_t t19 = 1610;

	t19 = ((x1001<=x1002)<<(x1003+x1004));

	if (t19 != 32) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1025 = INT16_MIN;
	volatile uint8_t x1026 = 70U;
	uint8_t x1027 = 9U;
	volatile int32_t t20 = 6;

	t20 = ((x1025<=x1026)<<(x1027+x1028));

	if (t20 != 512) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x1037 = INT32_MIN;
	static int64_t x1038 = INT64_MAX;
	static uint8_t x1039 = 28U;
	volatile int32_t t21 = -404686370;

	t21 = ((x1037<=x1038)<<(x1039+x1040));

	if (t21 != 268435456) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1046 = -26855LL;
	volatile uint8_t x1047 = 6U;
	uint8_t x1048 = 3U;

	t22 = ((x1045<=x1046)<<(x1047+x1048));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x1057 = UINT16_MAX;
	static int8_t x1058 = 29;
	uint8_t x1060 = 5U;
	volatile int32_t t23 = 3087;

	t23 = ((x1057<=x1058)<<(x1059+x1060));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x1161 = INT32_MIN;
	static volatile int64_t x1162 = INT64_MIN;

	t24 = ((x1161<=x1162)<<(x1163+x1164));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x1189 = 6U;
	volatile int32_t x1190 = 2;
	volatile uint8_t x1191 = 8U;
	int64_t x1192 = -1LL;
	volatile int32_t t25 = 0;

	t25 = ((x1189<=x1190)<<(x1191+x1192));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x1230 = -10637479;
	uint16_t x1231 = 1U;
	volatile int32_t t26 = -1100;

	t26 = ((x1229<=x1230)<<(x1231+x1232));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1323 = 8U;
	int8_t x1324 = -1;
	volatile int32_t t27 = 1;

	t27 = ((x1321<=x1322)<<(x1323+x1324));

	if (t27 != 128) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x1353 = -1;
	int32_t x1354 = 212998570;
	uint16_t x1355 = 1U;
	static volatile int32_t t28 = -129;

	t28 = ((x1353<=x1354)<<(x1355+x1356));

	if (t28 != 4) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x1481 = INT64_MIN;
	int8_t x1482 = INT8_MIN;
	int8_t x1483 = 3;
	uint16_t x1484 = 5U;
	static volatile int32_t t29 = -3538861;

	t29 = ((x1481<=x1482)<<(x1483+x1484));

	if (t29 != 256) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x1497 = 22U;
	int64_t x1498 = INT64_MAX;
	static volatile int32_t x1499 = -1;
	static uint16_t x1500 = 11U;

	t30 = ((x1497<=x1498)<<(x1499+x1500));

	if (t30 != 1024) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x1581 = 1010U;
	volatile int16_t x1582 = 6;
	volatile int8_t x1583 = 9;
	static int32_t x1584 = -1;
	int32_t t31 = -1;

	t31 = ((x1581<=x1582)<<(x1583+x1584));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x1785 = INT16_MIN;
	static int32_t x1786 = INT32_MAX;
	static uint16_t x1788 = 7U;
	int32_t t32 = -830620038;

	t32 = ((x1785<=x1786)<<(x1787+x1788));

	if (t32 != 64) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x1861 = UINT32_MAX;
	int16_t x1863 = 30;
	uint32_t x1864 = UINT32_MAX;

	t33 = ((x1861<=x1862)<<(x1863+x1864));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x1917 = 1;
	int16_t x1918 = INT16_MAX;
	int8_t x1919 = -1;
	uint16_t x1920 = 10U;
	static int32_t t34 = -7409;

	t34 = ((x1917<=x1918)<<(x1919+x1920));

	if (t34 != 512) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x1925 = 2605347LL;
	uint32_t x1927 = 12U;
	int16_t x1928 = -1;
	volatile int32_t t35 = 74842019;

	t35 = ((x1925<=x1926)<<(x1927+x1928));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x2105 = -441;
	int64_t x2106 = INT64_MIN;
	static uint64_t x2107 = UINT64_MAX;
	static uint8_t x2108 = 1U;
	int32_t t36 = 210143;

	t36 = ((x2105<=x2106)<<(x2107+x2108));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x2313 = 20;
	int32_t x2314 = -1;
	uint8_t x2315 = 4U;
	uint32_t x2316 = 1U;
	static volatile int32_t t37 = 10;

	t37 = ((x2313<=x2314)<<(x2315+x2316));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x2493 = -30;
	int64_t x2494 = -428236LL;
	int8_t x2496 = -5;
	static volatile int32_t t38 = 26720;

	t38 = ((x2493<=x2494)<<(x2495+x2496));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x2626 = -1;
	int8_t x2627 = 3;
	volatile int32_t t39 = 2750;

	t39 = ((x2625<=x2626)<<(x2627+x2628));

	if (t39 != 16) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x2725 = -1;
	static uint32_t x2727 = 11U;
	int16_t x2728 = -1;

	t40 = ((x2725<=x2726)<<(x2727+x2728));

	if (t40 != 1024) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x2729 = -32822876;
	int16_t x2730 = INT16_MIN;
	int8_t x2731 = -1;
	static uint32_t x2732 = 6U;
	int32_t t41 = -1;

	t41 = ((x2729<=x2730)<<(x2731+x2732));

	if (t41 != 32) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x2809 = -4;
	int32_t x2810 = INT32_MIN;
	uint64_t x2811 = UINT64_MAX;
	static int32_t t42 = 122817129;

	t42 = ((x2809<=x2810)<<(x2811+x2812));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x2889 = 11U;
	int8_t x2890 = INT8_MIN;
	int32_t x2891 = 0;
	volatile int64_t x2892 = 0LL;

	t43 = ((x2889<=x2890)<<(x2891+x2892));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x2990 = 8636LLU;
	uint32_t x2992 = UINT32_MAX;
	int32_t t44 = -1046;

	t44 = ((x2989<=x2990)<<(x2991+x2992));

	if (t44 != 524288) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x3105 = INT64_MIN;
	static int16_t x3106 = INT16_MIN;
	volatile uint64_t x3108 = 14LLU;

	t45 = ((x3105<=x3106)<<(x3107+x3108));

	if (t45 != 32768) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x3109 = UINT8_MAX;
	int8_t x3110 = -1;
	static volatile uint16_t x3112 = 30U;
	volatile int32_t t46 = -95;

	t46 = ((x3109<=x3110)<<(x3111+x3112));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x3157 = 61639942136862246LLU;
	int64_t x3159 = -1LL;
	int16_t x3160 = 23;
	volatile int32_t t47 = 182;

	t47 = ((x3157<=x3158)<<(x3159+x3160));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x3258 = UINT16_MAX;
	int64_t x3260 = 3LL;
	volatile int32_t t48 = 7;

	t48 = ((x3257<=x3258)<<(x3259+x3260));

	if (t48 != 4) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x3294 = INT16_MAX;
	static uint16_t x3296 = 26U;
	volatile int32_t t49 = -192027;

	t49 = ((x3293<=x3294)<<(x3295+x3296));

	if (t49 != 33554432) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x3326 = 0LLU;
	uint8_t x3327 = 12U;
	int64_t x3328 = -1LL;
	volatile int32_t t50 = -5;

	t50 = ((x3325<=x3326)<<(x3327+x3328));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x3329 = UINT64_MAX;
	uint8_t x3330 = UINT8_MAX;
	int16_t x3331 = 1;
	volatile uint8_t x3332 = 0U;
	volatile int32_t t51 = -2;

	t51 = ((x3329<=x3330)<<(x3331+x3332));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x3361 = INT8_MIN;
	uint16_t x3362 = UINT16_MAX;
	int16_t x3363 = 27;
	int8_t x3364 = -1;
	static int32_t t52 = 332;

	t52 = ((x3361<=x3362)<<(x3363+x3364));

	if (t52 != 67108864) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x3445 = INT8_MIN;
	volatile int64_t x3446 = -1LL;
	uint64_t x3447 = UINT64_MAX;
	static uint8_t x3448 = 13U;
	int32_t t53 = 147;

	t53 = ((x3445<=x3446)<<(x3447+x3448));

	if (t53 != 4096) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint32_t x3521 = UINT32_MAX;
	int64_t x3522 = INT64_MIN;
	int8_t x3523 = 2;
	volatile int32_t x3524 = -1;

	t54 = ((x3521<=x3522)<<(x3523+x3524));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x3693 = 1302190;
	int8_t x3694 = -1;
	volatile int16_t x3695 = 25;
	static uint32_t x3696 = 3U;

	t55 = ((x3693<=x3694)<<(x3695+x3696));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x3793 = 1264761U;
	int8_t x3796 = 1;
	int32_t t56 = 646418055;

	t56 = ((x3793<=x3794)<<(x3795+x3796));

	if (t56 != 65536) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x3825 = 1452512U;
	uint8_t x3827 = 13U;
	volatile uint32_t x3828 = UINT32_MAX;
	volatile int32_t t57 = -500;

	t57 = ((x3825<=x3826)<<(x3827+x3828));

	if (t57 != 4096) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x3897 = INT8_MIN;
	volatile int32_t x3898 = 18;
	volatile int32_t x3900 = -1;
	volatile int32_t t58 = 1324;

	t58 = ((x3897<=x3898)<<(x3899+x3900));

	if (t58 != 32) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x3953 = -1;
	int8_t x3954 = INT8_MIN;
	uint8_t x3955 = 13U;
	volatile int8_t x3956 = -1;

	t59 = ((x3953<=x3954)<<(x3955+x3956));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x4033 = UINT32_MAX;
	uint64_t x4034 = 118005326LLU;
	uint32_t x4035 = 38U;
	int32_t t60 = -340;

	t60 = ((x4033<=x4034)<<(x4035+x4036));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x4129 = INT32_MIN;
	volatile uint64_t x4131 = UINT64_MAX;
	volatile int8_t x4132 = 1;
	int32_t t61 = -199829;

	t61 = ((x4129<=x4130)<<(x4131+x4132));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint32_t x4197 = 0U;
	int16_t x4198 = -1;
	int32_t x4199 = 14;
	volatile uint64_t x4200 = UINT64_MAX;
	static int32_t t62 = 2711;

	t62 = ((x4197<=x4198)<<(x4199+x4200));

	if (t62 != 8192) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x4237 = INT16_MAX;
	uint16_t x4238 = 13349U;
	int8_t x4239 = 3;
	int16_t x4240 = 4;
	int32_t t63 = 245547990;

	t63 = ((x4237<=x4238)<<(x4239+x4240));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x4305 = 0U;
	uint32_t x4306 = UINT32_MAX;
	volatile int32_t x4307 = -1;
	uint8_t x4308 = 3U;
	volatile int32_t t64 = -521862;

	t64 = ((x4305<=x4306)<<(x4307+x4308));

	if (t64 != 4) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x4381 = 4581;
	static int16_t x4382 = INT16_MIN;
	int16_t x4383 = -1;
	int8_t x4384 = 13;
	int32_t t65 = 29;

	t65 = ((x4381<=x4382)<<(x4383+x4384));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x4509 = INT32_MIN;
	uint64_t x4510 = 10206414341018LLU;
	int32_t x4511 = -1;
	int8_t x4512 = 16;
	int32_t t66 = 148121;

	t66 = ((x4509<=x4510)<<(x4511+x4512));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x4706 = 1045396173LL;
	uint32_t x4707 = 0U;
	static int8_t x4708 = 1;
	volatile int32_t t67 = -49;

	t67 = ((x4705<=x4706)<<(x4707+x4708));

	if (t67 != 2) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x4746 = 31691LLU;
	int8_t x4748 = 8;
	int32_t t68 = -37017790;

	t68 = ((x4745<=x4746)<<(x4747+x4748));

	if (t68 != 128) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x4813 = 2517U;
	int8_t x4814 = INT8_MIN;
	uint16_t x4815 = 23U;
	int32_t t69 = -52626848;

	t69 = ((x4813<=x4814)<<(x4815+x4816));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x4946 = 0U;
	int32_t x4947 = -1;
	static uint32_t x4948 = 31U;
	static int32_t t70 = 52897058;

	t70 = ((x4945<=x4946)<<(x4947+x4948));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x4977 = INT32_MIN;
	uint8_t x4980 = 1U;
	volatile int32_t t71 = -119965;

	t71 = ((x4977<=x4978)<<(x4979+x4980));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x5077 = -1;
	volatile int8_t x5078 = 1;
	volatile uint64_t x5079 = UINT64_MAX;
	uint8_t x5080 = 3U;

	t72 = ((x5077<=x5078)<<(x5079+x5080));

	if (t72 != 4) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x5217 = 1;
	uint16_t x5218 = 31U;
	int16_t x5219 = 6;
	uint16_t x5220 = 12U;
	int32_t t73 = -62;

	t73 = ((x5217<=x5218)<<(x5219+x5220));

	if (t73 != 262144) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x5265 = UINT64_MAX;
	volatile int8_t x5266 = INT8_MIN;
	uint32_t x5268 = 10U;
	int32_t t74 = -34108720;

	t74 = ((x5265<=x5266)<<(x5267+x5268));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x5645 = INT32_MIN;
	int32_t x5646 = INT32_MAX;
	static int8_t x5648 = -1;
	int32_t t75 = -46;

	t75 = ((x5645<=x5646)<<(x5647+x5648));

	if (t75 != 536870912) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x5709 = 6947767930353LLU;
	uint64_t x5710 = 992089155073553LLU;
	uint8_t x5711 = 0U;
	volatile int8_t x5712 = 4;

	t76 = ((x5709<=x5710)<<(x5711+x5712));

	if (t76 != 16) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x5969 = 11463U;
	static volatile int32_t x5970 = INT32_MIN;
	uint32_t x5971 = 2U;
	volatile uint32_t x5972 = 18U;

	t77 = ((x5969<=x5970)<<(x5971+x5972));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x5973 = 375822U;
	volatile int8_t x5974 = -6;
	static uint64_t x5975 = UINT64_MAX;
	static volatile int32_t t78 = -3303;

	t78 = ((x5973<=x5974)<<(x5975+x5976));

	if (t78 != 128) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x6053 = INT64_MIN;
	int16_t x6055 = -1;
	uint16_t x6056 = 7U;

	t79 = ((x6053<=x6054)<<(x6055+x6056));

	if (t79 != 64) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x6073 = INT32_MIN;
	uint8_t x6074 = 18U;
	uint64_t x6075 = UINT64_MAX;
	uint16_t x6076 = 4U;
	volatile int32_t t80 = -436117;

	t80 = ((x6073<=x6074)<<(x6075+x6076));

	if (t80 != 8) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x6097 = INT32_MAX;
	uint8_t x6098 = 93U;
	static int8_t x6099 = 11;
	volatile int32_t t81 = -3626618;

	t81 = ((x6097<=x6098)<<(x6099+x6100));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x6247 = -1;
	int8_t x6248 = 1;
	static volatile int32_t t82 = -90;

	t82 = ((x6245<=x6246)<<(x6247+x6248));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x6257 = -1;
	uint8_t x6258 = 0U;
	volatile uint8_t x6259 = 2U;
	int64_t x6260 = -1LL;
	volatile int32_t t83 = 474706688;

	t83 = ((x6257<=x6258)<<(x6259+x6260));

	if (t83 != 2) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x6301 = INT16_MIN;
	int64_t x6302 = INT64_MIN;
	int8_t x6303 = -1;
	int8_t x6304 = 1;
	int32_t t84 = 135;

	t84 = ((x6301<=x6302)<<(x6303+x6304));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x6521 = -1;
	int8_t x6522 = -5;
	int64_t x6524 = 19LL;

	t85 = ((x6521<=x6522)<<(x6523+x6524));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x6549 = INT8_MAX;
	uint8_t x6550 = 126U;
	volatile int8_t x6551 = 1;
	int8_t x6552 = 0;
	int32_t t86 = -106877808;

	t86 = ((x6549<=x6550)<<(x6551+x6552));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x6561 = 11U;
	int64_t x6562 = INT64_MAX;
	uint32_t x6563 = 3U;
	int32_t x6564 = 2;
	volatile int32_t t87 = 207969;

	t87 = ((x6561<=x6562)<<(x6563+x6564));

	if (t87 != 32) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x6609 = 850U;
	int8_t x6610 = 1;
	uint8_t x6611 = 4U;
	uint64_t x6612 = UINT64_MAX;

	t88 = ((x6609<=x6610)<<(x6611+x6612));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x6713 = 20624U;
	int16_t x6714 = 9;
	int16_t x6715 = -6;
	volatile int8_t x6716 = 16;
	volatile int32_t t89 = -6;

	t89 = ((x6713<=x6714)<<(x6715+x6716));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x6733 = UINT8_MAX;
	uint16_t x6734 = 4U;
	int8_t x6735 = -3;
	int32_t x6736 = 3;

	t90 = ((x6733<=x6734)<<(x6735+x6736));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x6777 = -1;
	uint8_t x6778 = 0U;
	uint32_t x6779 = 1U;
	int16_t x6780 = 1;

	t91 = ((x6777<=x6778)<<(x6779+x6780));

	if (t91 != 4) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x6786 = -1;
	static volatile uint16_t x6787 = 5U;
	int64_t x6788 = -1LL;
	volatile int32_t t92 = -130461;

	t92 = ((x6785<=x6786)<<(x6787+x6788));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x6840 = 28LLU;
	int32_t t93 = -2;

	t93 = ((x6837<=x6838)<<(x6839+x6840));

	if (t93 != 134217728) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x6877 = 195U;
	volatile uint8_t x6879 = 2U;
	volatile int32_t t94 = -12723;

	t94 = ((x6877<=x6878)<<(x6879+x6880));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint64_t x6901 = 98336758604796LLU;
	int16_t x6902 = INT16_MIN;
	static volatile int8_t x6904 = 1;

	t95 = ((x6901<=x6902)<<(x6903+x6904));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x6917 = INT32_MIN;
	uint16_t x6919 = 4U;
	volatile int32_t x6920 = -1;
	static volatile int32_t t96 = 135792;

	t96 = ((x6917<=x6918)<<(x6919+x6920));

	if (t96 != 8) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x6933 = 15;
	static int64_t x6934 = INT64_MIN;
	uint64_t x6935 = UINT64_MAX;
	uint16_t x6936 = 23U;
	volatile int32_t t97 = -98623924;

	t97 = ((x6933<=x6934)<<(x6935+x6936));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x7021 = 1LLU;
	static volatile int32_t x7022 = INT32_MIN;
	int8_t x7023 = 1;
	static int8_t x7024 = 0;
	volatile int32_t t98 = 45;

	t98 = ((x7021<=x7022)<<(x7023+x7024));

	if (t98 != 2) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x7066 = 650LLU;
	static int16_t x7067 = -1;
	volatile int32_t t99 = -1789;

	t99 = ((x7065<=x7066)<<(x7067+x7068));

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

