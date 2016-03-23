
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

uint8_t x3 = 1U;
uint8_t x4 = UINT8_MAX;
static int32_t x41 = INT32_MIN;
volatile int16_t x134 = INT16_MIN;
uint8_t x142 = UINT8_MAX;
int8_t x144 = -1;
static uint32_t x200 = UINT32_MAX;
static volatile int64_t x203 = 1LL;
int32_t t5 = -794175;
int32_t x244 = INT32_MIN;
uint32_t x249 = 79228781U;
volatile uint16_t x255 = 4U;
volatile int8_t x256 = -1;
volatile int16_t x291 = 2;
static int32_t t11 = 10540;
int16_t x299 = 1;
static int8_t x354 = INT8_MIN;
int32_t t16 = -621927;
volatile int8_t x537 = -1;
int64_t x538 = INT64_MIN;
static int16_t x540 = -5352;
int16_t x541 = -1;
volatile int32_t x606 = -331;
int8_t x609 = INT8_MIN;
uint64_t x612 = 85012844LLU;
int32_t x669 = 93915;
volatile int64_t x670 = INT64_MIN;
static int32_t t24 = 119;
static int32_t x750 = -1;
int8_t x763 = 0;
static int32_t x768 = INT32_MAX;
int32_t x796 = INT32_MIN;
static int16_t x835 = 0;
uint8_t x847 = 11U;
volatile uint64_t x862 = 2LLU;
uint16_t x969 = 57U;
volatile int32_t t37 = -206656109;
static volatile int64_t x1112 = -1LL;
int32_t x1122 = -1;
volatile int8_t x1147 = 3;
int64_t x1393 = -1LL;
static int8_t x1396 = INT8_MIN;
volatile uint8_t x1407 = 24U;
int32_t t45 = 6165;
int16_t x1436 = INT16_MIN;
int64_t x1454 = -1LL;
int32_t x1468 = INT32_MIN;
int32_t t48 = -25668;
volatile int32_t x1475 = 1;
volatile int32_t t50 = -1;
int32_t x1565 = -3611348;
volatile int32_t t51 = 113079;
int16_t x1625 = INT16_MAX;
uint16_t x1626 = 1258U;
uint8_t x1627 = 31U;
static int16_t x1838 = -1;
int32_t x1840 = INT32_MAX;
static int64_t x1855 = 1LL;
int32_t t61 = -11310;
int32_t x1894 = 3128279;
uint8_t x1922 = 3U;
int16_t x1924 = INT16_MIN;
uint16_t x1991 = 3U;
static int8_t x1992 = INT8_MAX;
int16_t x2011 = 1;
static uint16_t x2061 = 1841U;
int8_t x2062 = INT8_MIN;
static uint16_t x2063 = 2U;
int16_t x2185 = INT16_MIN;
int16_t x2188 = -1;
static volatile uint8_t x2244 = 24U;
static volatile uint64_t x2465 = UINT64_MAX;
uint8_t x2467 = 4U;
int8_t x2479 = 0;
int32_t x2487 = 15;
int64_t x2579 = 0LL;
uint8_t x2601 = UINT8_MAX;
int8_t x2633 = INT8_MIN;
uint16_t x2669 = UINT16_MAX;
static int32_t x2670 = INT32_MAX;
int64_t x2672 = INT64_MIN;
int32_t t86 = 1306312;
uint8_t x2899 = 2U;
static int32_t x2934 = -4675398;
static volatile int32_t x2941 = INT32_MAX;
static volatile int64_t x2950 = -490513063LL;
volatile int32_t t93 = -557;
static int16_t x2973 = INT16_MIN;
static int16_t x3149 = -1347;
uint16_t x3151 = 14U;
static int32_t x3158 = INT32_MIN;
volatile int64_t x3213 = INT64_MIN;
static volatile int32_t t102 = -38;
int64_t x3241 = INT64_MAX;
static uint8_t x3259 = 1U;
int32_t t105 = -503;
uint64_t x3362 = 157874744062591LLU;
int32_t t108 = 6760;
uint16_t x3423 = 3U;
static volatile int32_t t111 = 210196;
volatile int8_t x3517 = INT8_MIN;
volatile int8_t x3519 = 1;
static int16_t x3520 = INT16_MAX;
static volatile int32_t t112 = 3281137;
volatile int64_t x3530 = -1LL;
static int16_t x3544 = -1;
uint8_t x3621 = UINT8_MAX;
int32_t x3622 = INT32_MIN;
int32_t x3689 = INT32_MIN;
uint64_t x3690 = UINT64_MAX;
int8_t x3691 = 1;
static int8_t x3810 = 1;
int8_t x3812 = INT8_MAX;
static volatile int8_t x3909 = INT8_MIN;
uint16_t x3931 = 10U;
int32_t t122 = 2;
int8_t x3967 = 29;
volatile int64_t x3968 = INT64_MIN;
uint16_t x3976 = 26026U;
volatile uint8_t x4102 = UINT8_MAX;
int8_t x4189 = 1;
int8_t x4192 = -1;
static uint64_t x4196 = 520807305LLU;
uint16_t x4207 = 23U;
uint16_t x4256 = 0U;
uint64_t x4261 = UINT64_MAX;
static uint32_t x4264 = 586297U;
volatile int64_t x4394 = 133727075235465487LL;
static volatile int8_t x4395 = 5;
int8_t x4405 = 1;
uint16_t x4408 = UINT16_MAX;
static uint8_t x4449 = 3U;
volatile uint8_t x4451 = 2U;
static int64_t x4574 = INT64_MAX;
int16_t x4597 = INT16_MAX;
static uint64_t x4611 = 1LLU;
int64_t x4638 = INT64_MIN;
volatile int64_t x4689 = -1LL;
uint32_t x4703 = 3U;
int32_t t144 = 764467;
uint32_t x4718 = 2618198U;
volatile int32_t t145 = 1426;
static volatile uint64_t x4743 = 0LLU;
volatile int32_t t147 = 1;
int64_t x4798 = INT64_MIN;
uint16_t x4814 = 5613U;
uint8_t x4926 = UINT8_MAX;
uint8_t x4927 = 3U;
uint32_t x4956 = 129540094U;
volatile int32_t t151 = -24416;
int32_t x4993 = -1;
volatile uint32_t x4995 = 1U;
volatile int64_t x5006 = INT64_MIN;
int16_t x5007 = 7;
int8_t x5087 = 0;
int16_t x5088 = 6673;
uint8_t x5153 = UINT8_MAX;
static int64_t x5213 = 16LL;
volatile uint64_t x5229 = 3459760238409LLU;
volatile uint16_t x5277 = UINT16_MAX;
volatile uint16_t x5279 = 23U;
static int16_t x5314 = INT16_MIN;
volatile int32_t t164 = -459541;
int8_t x5381 = INT8_MAX;
static int32_t t168 = -20109115;
volatile int64_t x5402 = -1LL;
uint16_t x5408 = 6U;
int8_t x5585 = 4;
int32_t t175 = 1135201;
volatile int64_t x5653 = -14972LL;
uint16_t x5655 = 0U;
int32_t x5710 = INT32_MIN;
int8_t x5711 = 0;
uint32_t x5873 = 952547118U;
int16_t x5874 = INT16_MAX;
uint8_t x5897 = 2U;
volatile int16_t x5899 = 0;
int64_t x5937 = -1LL;
static int8_t x5940 = 37;
int64_t x6009 = 807773890238094LL;
int8_t x6012 = -1;
uint16_t x6017 = 923U;
static int32_t x6018 = -1;
volatile int32_t x6020 = -113234568;
int32_t t184 = -727443;
int32_t x6024 = -1;
uint32_t x6038 = UINT32_MAX;
uint16_t x6039 = 0U;
int32_t t186 = 45067362;
int64_t x6064 = 896491145392632075LL;
int16_t x6182 = -1;
int8_t x6183 = 0;
int16_t x6184 = -391;
uint64_t x6373 = 2985LLU;
static uint16_t x6406 = 3U;
int64_t x6426 = INT64_MIN;
static int32_t t193 = -109;
volatile int32_t t194 = -13933;
uint64_t x6473 = 112LLU;
int16_t x6474 = INT16_MIN;
uint16_t x6502 = 2123U;
int64_t x6504 = INT64_MIN;


void f0(void) {
    	static uint8_t x1 = 2U;
	int8_t x2 = -1;
	static int32_t t0 = 796577;

    t0 = (((x1<=x2)>>x3)!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x42 = 1U;
	uint8_t x43 = 14U;
	static int32_t x44 = -12636940;
	volatile int32_t t1 = 205279;

    t1 = (((x41<=x42)>>x43)!=x44);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint64_t x133 = 1608000908LLU;
	uint16_t x135 = 0U;
	static int32_t x136 = 258195892;
	volatile int32_t t2 = -3;

    t2 = (((x133<=x134)>>x135)!=x136);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x141 = INT8_MAX;
	int8_t x143 = 31;
	int32_t t3 = -43;

    t3 = (((x141<=x142)>>x143)!=x144);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint8_t x197 = 98U;
	int64_t x198 = INT64_MAX;
	volatile uint8_t x199 = 11U;
	int32_t t4 = 5;

    t4 = (((x197<=x198)>>x199)!=x200);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x201 = -1;
	int64_t x202 = -1LL;
	static volatile int16_t x204 = -1;

    t5 = (((x201<=x202)>>x203)!=x204);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x241 = INT16_MAX;
	volatile uint16_t x242 = UINT16_MAX;
	uint8_t x243 = 0U;
	volatile int32_t t6 = -23930;

    t6 = (((x241<=x242)>>x243)!=x244);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x245 = -112475764;
	uint16_t x246 = 1951U;
	int8_t x247 = 1;
	uint64_t x248 = 885LLU;
	int32_t t7 = 66488713;

    t7 = (((x245<=x246)>>x247)!=x248);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x250 = UINT32_MAX;
	volatile int8_t x251 = 1;
	int64_t x252 = -1LL;
	int32_t t8 = 1044622;

    t8 = (((x249<=x250)>>x251)!=x252);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x253 = 37;
	uint8_t x254 = 12U;
	int32_t t9 = 1;

    t9 = (((x253<=x254)>>x255)!=x256);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint32_t x261 = 13191U;
	uint32_t x262 = 1986853087U;
	uint8_t x263 = 1U;
	int16_t x264 = -9;
	volatile int32_t t10 = 11010;

    t10 = (((x261<=x262)>>x263)!=x264);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x289 = -583;
	uint64_t x290 = 19LLU;
	uint16_t x292 = 1521U;

    t11 = (((x289<=x290)>>x291)!=x292);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x297 = 77824236404LLU;
	static int32_t x298 = -813;
	int8_t x300 = 0;
	volatile int32_t t12 = -953666;

    t12 = (((x297<=x298)>>x299)!=x300);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x353 = -1;
	static uint8_t x355 = 14U;
	static int16_t x356 = INT16_MIN;
	volatile int32_t t13 = 57822192;

    t13 = (((x353<=x354)>>x355)!=x356);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x389 = INT16_MIN;
	int32_t x390 = 1;
	static uint16_t x391 = 11U;
	volatile int32_t x392 = INT32_MIN;
	volatile int32_t t14 = -1884;

    t14 = (((x389<=x390)>>x391)!=x392);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x393 = INT16_MIN;
	volatile int32_t x394 = INT32_MIN;
	uint8_t x395 = 4U;
	uint8_t x396 = 14U;
	static volatile int32_t t15 = -196136;

    t15 = (((x393<=x394)>>x395)!=x396);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x413 = 7U;
	volatile uint16_t x414 = UINT16_MAX;
	volatile uint8_t x415 = 2U;
	int64_t x416 = INT64_MIN;

    t16 = (((x413<=x414)>>x415)!=x416);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x445 = INT16_MAX;
	static uint64_t x446 = 61548LLU;
	uint16_t x447 = 7U;
	int16_t x448 = INT16_MAX;
	static int32_t t17 = -131568;

    t17 = (((x445<=x446)>>x447)!=x448);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x489 = 28896850451435LLU;
	uint8_t x490 = 14U;
	uint64_t x491 = 1LLU;
	int8_t x492 = INT8_MAX;
	int32_t t18 = -856203802;

    t18 = (((x489<=x490)>>x491)!=x492);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x539 = 1U;
	int32_t t19 = -2099648;

    t19 = (((x537<=x538)>>x539)!=x540);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x542 = 0;
	uint8_t x543 = 0U;
	uint32_t x544 = 3422U;
	volatile int32_t t20 = -7416;

    t20 = (((x541<=x542)>>x543)!=x544);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x593 = INT8_MAX;
	int8_t x594 = INT8_MAX;
	static uint8_t x595 = 27U;
	int64_t x596 = 237900921LL;
	int32_t t21 = 20;

    t21 = (((x593<=x594)>>x595)!=x596);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x605 = -1;
	static int8_t x607 = 17;
	uint32_t x608 = UINT32_MAX;
	volatile int32_t t22 = 7765;

    t22 = (((x605<=x606)>>x607)!=x608);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int32_t x610 = INT32_MIN;
	static int16_t x611 = 0;
	static volatile int32_t t23 = 0;

    t23 = (((x609<=x610)>>x611)!=x612);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x671 = 4;
	int8_t x672 = -1;

    t24 = (((x669<=x670)>>x671)!=x672);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x689 = 52279735540LLU;
	int64_t x690 = INT64_MIN;
	volatile uint16_t x691 = 3U;
	uint64_t x692 = 30223LLU;
	static int32_t t25 = -178727;

    t25 = (((x689<=x690)>>x691)!=x692);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint8_t x749 = 47U;
	uint32_t x751 = 13U;
	int32_t x752 = INT32_MAX;
	int32_t t26 = -1;

    t26 = (((x749<=x750)>>x751)!=x752);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x761 = -5384;
	uint32_t x762 = 55U;
	int64_t x764 = INT64_MIN;
	volatile int32_t t27 = -122;

    t27 = (((x761<=x762)>>x763)!=x764);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x765 = INT8_MIN;
	static int64_t x766 = INT64_MAX;
	uint8_t x767 = 0U;
	static volatile int32_t t28 = 1;

    t28 = (((x765<=x766)>>x767)!=x768);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x777 = INT16_MIN;
	volatile uint64_t x778 = 425680LLU;
	uint8_t x779 = 1U;
	static int64_t x780 = INT64_MIN;
	volatile int32_t t29 = 1414614;

    t29 = (((x777<=x778)>>x779)!=x780);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x781 = 19064U;
	int32_t x782 = INT32_MIN;
	volatile int8_t x783 = 10;
	int8_t x784 = INT8_MAX;
	int32_t t30 = 57721509;

    t30 = (((x781<=x782)>>x783)!=x784);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x793 = -1;
	static int8_t x794 = 9;
	uint16_t x795 = 2U;
	volatile int32_t t31 = -294118337;

    t31 = (((x793<=x794)>>x795)!=x796);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x833 = INT16_MAX;
	uint8_t x834 = UINT8_MAX;
	uint16_t x836 = 15U;
	volatile int32_t t32 = -184775;

    t32 = (((x833<=x834)>>x835)!=x836);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x845 = INT64_MAX;
	static uint8_t x846 = UINT8_MAX;
	static int8_t x848 = INT8_MAX;
	int32_t t33 = -6459132;

    t33 = (((x845<=x846)>>x847)!=x848);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint16_t x853 = 206U;
	uint16_t x854 = 11444U;
	volatile uint8_t x855 = 1U;
	int16_t x856 = -54;
	int32_t t34 = 61177332;

    t34 = (((x853<=x854)>>x855)!=x856);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x861 = 68U;
	static uint8_t x863 = 0U;
	uint16_t x864 = UINT16_MAX;
	static volatile int32_t t35 = -37602046;

    t35 = (((x861<=x862)>>x863)!=x864);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile uint16_t x970 = 19U;
	uint8_t x971 = 2U;
	int8_t x972 = INT8_MAX;
	volatile int32_t t36 = 0;

    t36 = (((x969<=x970)>>x971)!=x972);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x1097 = -85424373;
	uint64_t x1098 = UINT64_MAX;
	static uint8_t x1099 = 5U;
	volatile int64_t x1100 = INT64_MIN;

    t37 = (((x1097<=x1098)>>x1099)!=x1100);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x1109 = INT8_MAX;
	volatile int32_t x1110 = INT32_MIN;
	uint16_t x1111 = 3U;
	int32_t t38 = 37;

    t38 = (((x1109<=x1110)>>x1111)!=x1112);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x1121 = INT8_MIN;
	int32_t x1123 = 2;
	uint32_t x1124 = UINT32_MAX;
	volatile int32_t t39 = -28370159;

    t39 = (((x1121<=x1122)>>x1123)!=x1124);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint64_t x1137 = UINT64_MAX;
	uint16_t x1138 = 0U;
	uint16_t x1139 = 1U;
	volatile int32_t x1140 = INT32_MAX;
	volatile int32_t t40 = -14918956;

    t40 = (((x1137<=x1138)>>x1139)!=x1140);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x1145 = INT64_MIN;
	int64_t x1146 = INT64_MAX;
	uint64_t x1148 = 132560363494LLU;
	static volatile int32_t t41 = -2;

    t41 = (((x1145<=x1146)>>x1147)!=x1148);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x1289 = UINT16_MAX;
	int64_t x1290 = INT64_MIN;
	static uint8_t x1291 = 8U;
	volatile int16_t x1292 = 2477;
	volatile int32_t t42 = 1480;

    t42 = (((x1289<=x1290)>>x1291)!=x1292);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x1297 = 375U;
	uint16_t x1298 = 7682U;
	int8_t x1299 = 1;
	int8_t x1300 = INT8_MIN;
	volatile int32_t t43 = -4;

    t43 = (((x1297<=x1298)>>x1299)!=x1300);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x1394 = 3891U;
	volatile int8_t x1395 = 0;
	int32_t t44 = 263898;

    t44 = (((x1393<=x1394)>>x1395)!=x1396);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int64_t x1405 = 6562030260800LL;
	uint32_t x1406 = 12970U;
	int8_t x1408 = -1;

    t45 = (((x1405<=x1406)>>x1407)!=x1408);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint32_t x1433 = 9677731U;
	uint16_t x1434 = 31U;
	int32_t x1435 = 8;
	volatile int32_t t46 = -29;

    t46 = (((x1433<=x1434)>>x1435)!=x1436);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x1453 = INT8_MIN;
	int32_t x1455 = 0;
	volatile uint64_t x1456 = 152LLU;
	volatile int32_t t47 = 3;

    t47 = (((x1453<=x1454)>>x1455)!=x1456);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x1465 = -1;
	int16_t x1466 = INT16_MAX;
	volatile uint8_t x1467 = 2U;

    t48 = (((x1465<=x1466)>>x1467)!=x1468);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x1473 = 885524900U;
	int16_t x1474 = INT16_MIN;
	volatile int64_t x1476 = 11587LL;
	static int32_t t49 = 564802;

    t49 = (((x1473<=x1474)>>x1475)!=x1476);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x1517 = 5U;
	int16_t x1518 = -1;
	volatile uint8_t x1519 = 18U;
	int32_t x1520 = -1;

    t50 = (((x1517<=x1518)>>x1519)!=x1520);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x1566 = 2;
	uint8_t x1567 = 16U;
	int8_t x1568 = INT8_MIN;

    t51 = (((x1565<=x1566)>>x1567)!=x1568);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x1628 = -6;
	int32_t t52 = 170152;

    t52 = (((x1625<=x1626)>>x1627)!=x1628);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x1641 = INT16_MAX;
	volatile int32_t x1642 = INT32_MAX;
	uint16_t x1643 = 0U;
	uint16_t x1644 = 16U;
	volatile int32_t t53 = 12;

    t53 = (((x1641<=x1642)>>x1643)!=x1644);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x1661 = 2U;
	int64_t x1662 = INT64_MIN;
	volatile int16_t x1663 = 1;
	volatile int8_t x1664 = -26;
	int32_t t54 = 12;

    t54 = (((x1661<=x1662)>>x1663)!=x1664);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint64_t x1717 = UINT64_MAX;
	int8_t x1718 = -1;
	uint64_t x1719 = 20LLU;
	int8_t x1720 = INT8_MIN;
	volatile int32_t t55 = 1;

    t55 = (((x1717<=x1718)>>x1719)!=x1720);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x1729 = INT16_MAX;
	uint32_t x1730 = UINT32_MAX;
	uint32_t x1731 = 3U;
	int32_t x1732 = 242;
	volatile int32_t t56 = 134758;

    t56 = (((x1729<=x1730)>>x1731)!=x1732);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x1765 = INT16_MIN;
	int32_t x1766 = INT32_MIN;
	uint16_t x1767 = 7U;
	static volatile uint64_t x1768 = 6355007LLU;
	static volatile int32_t t57 = -8;

    t57 = (((x1765<=x1766)>>x1767)!=x1768);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x1797 = UINT64_MAX;
	uint8_t x1798 = 12U;
	static uint8_t x1799 = 0U;
	int16_t x1800 = 0;
	volatile int32_t t58 = 2;

    t58 = (((x1797<=x1798)>>x1799)!=x1800);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint16_t x1837 = 1U;
	uint16_t x1839 = 3U;
	int32_t t59 = 236126;

    t59 = (((x1837<=x1838)>>x1839)!=x1840);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x1853 = INT32_MAX;
	int32_t x1854 = INT32_MIN;
	static int8_t x1856 = 14;
	static int32_t t60 = -251764;

    t60 = (((x1853<=x1854)>>x1855)!=x1856);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x1877 = UINT32_MAX;
	uint8_t x1878 = 49U;
	static int8_t x1879 = 0;
	static volatile uint64_t x1880 = 1924LLU;

    t61 = (((x1877<=x1878)>>x1879)!=x1880);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x1889 = INT8_MIN;
	int8_t x1890 = INT8_MAX;
	int32_t x1891 = 1;
	int32_t x1892 = -5145;
	volatile int32_t t62 = 258291054;

    t62 = (((x1889<=x1890)>>x1891)!=x1892);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x1893 = INT64_MIN;
	uint8_t x1895 = 12U;
	volatile uint8_t x1896 = UINT8_MAX;
	volatile int32_t t63 = -5;

    t63 = (((x1893<=x1894)>>x1895)!=x1896);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x1921 = 1;
	static volatile uint8_t x1923 = 1U;
	static volatile int32_t t64 = 2568;

    t64 = (((x1921<=x1922)>>x1923)!=x1924);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x1925 = 2043;
	int8_t x1926 = INT8_MIN;
	int8_t x1927 = 9;
	static uint64_t x1928 = 4236377117021997LLU;
	static int32_t t65 = 103602;

    t65 = (((x1925<=x1926)>>x1927)!=x1928);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x1957 = INT8_MIN;
	static int64_t x1958 = INT64_MAX;
	volatile uint8_t x1959 = 13U;
	int64_t x1960 = INT64_MAX;
	int32_t t66 = -8;

    t66 = (((x1957<=x1958)>>x1959)!=x1960);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x1989 = INT64_MIN;
	static volatile int8_t x1990 = INT8_MAX;
	int32_t t67 = -309023423;

    t67 = (((x1989<=x1990)>>x1991)!=x1992);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x1993 = INT8_MAX;
	uint32_t x1994 = UINT32_MAX;
	uint8_t x1995 = 1U;
	uint32_t x1996 = 1U;
	int32_t t68 = 250430521;

    t68 = (((x1993<=x1994)>>x1995)!=x1996);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x2009 = UINT8_MAX;
	volatile uint8_t x2010 = 0U;
	uint16_t x2012 = 26424U;
	int32_t t69 = -72031983;

    t69 = (((x2009<=x2010)>>x2011)!=x2012);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x2064 = UINT16_MAX;
	int32_t t70 = 22655;

    t70 = (((x2061<=x2062)>>x2063)!=x2064);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x2073 = -2158721821158LL;
	int8_t x2074 = -1;
	int64_t x2075 = 1LL;
	static int8_t x2076 = INT8_MIN;
	int32_t t71 = 3322;

    t71 = (((x2073<=x2074)>>x2075)!=x2076);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x2145 = 85U;
	int16_t x2146 = INT16_MIN;
	int16_t x2147 = 4;
	volatile uint8_t x2148 = UINT8_MAX;
	volatile int32_t t72 = -54029;

    t72 = (((x2145<=x2146)>>x2147)!=x2148);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x2161 = 190241U;
	int64_t x2162 = -1LL;
	static int16_t x2163 = 1;
	int8_t x2164 = 6;
	static int32_t t73 = 8555785;

    t73 = (((x2161<=x2162)>>x2163)!=x2164);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x2186 = 10498009696264LLU;
	uint16_t x2187 = 0U;
	static volatile int32_t t74 = -63493725;

    t74 = (((x2185<=x2186)>>x2187)!=x2188);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x2241 = INT8_MIN;
	int64_t x2242 = 124225556LL;
	uint16_t x2243 = 3U;
	volatile int32_t t75 = -246243233;

    t75 = (((x2241<=x2242)>>x2243)!=x2244);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x2466 = INT8_MIN;
	int16_t x2468 = -707;
	volatile int32_t t76 = 0;

    t76 = (((x2465<=x2466)>>x2467)!=x2468);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x2477 = INT64_MIN;
	int32_t x2478 = INT32_MIN;
	int16_t x2480 = -9;
	volatile int32_t t77 = -13597596;

    t77 = (((x2477<=x2478)>>x2479)!=x2480);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x2485 = 8317449991533022673LLU;
	int64_t x2486 = 17LL;
	int16_t x2488 = INT16_MIN;
	volatile int32_t t78 = 125;

    t78 = (((x2485<=x2486)>>x2487)!=x2488);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x2521 = 52U;
	static volatile int16_t x2522 = INT16_MAX;
	static volatile int16_t x2523 = 1;
	volatile int16_t x2524 = -1;
	static volatile int32_t t79 = -13;

    t79 = (((x2521<=x2522)>>x2523)!=x2524);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x2573 = 0U;
	static int32_t x2574 = -361;
	uint8_t x2575 = 11U;
	static uint64_t x2576 = 9109478LLU;
	int32_t t80 = 1707;

    t80 = (((x2573<=x2574)>>x2575)!=x2576);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x2577 = UINT32_MAX;
	static int8_t x2578 = INT8_MIN;
	static uint64_t x2580 = UINT64_MAX;
	int32_t t81 = 1;

    t81 = (((x2577<=x2578)>>x2579)!=x2580);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x2602 = -1LL;
	int8_t x2603 = 2;
	int64_t x2604 = INT64_MIN;
	int32_t t82 = 160825;

    t82 = (((x2601<=x2602)>>x2603)!=x2604);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x2625 = -7352319;
	static int8_t x2626 = INT8_MAX;
	volatile uint8_t x2627 = 12U;
	volatile int8_t x2628 = -12;
	static volatile int32_t t83 = -9798;

    t83 = (((x2625<=x2626)>>x2627)!=x2628);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x2634 = 1;
	uint32_t x2635 = 1U;
	uint64_t x2636 = 10LLU;
	int32_t t84 = 1640212;

    t84 = (((x2633<=x2634)>>x2635)!=x2636);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x2671 = 24U;
	int32_t t85 = 28965;

    t85 = (((x2669<=x2670)>>x2671)!=x2672);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x2765 = 245;
	int8_t x2766 = -1;
	int8_t x2767 = 4;
	uint8_t x2768 = 2U;

    t86 = (((x2765<=x2766)>>x2767)!=x2768);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x2781 = 24289465LL;
	static volatile uint16_t x2782 = 0U;
	volatile int32_t x2783 = 1;
	int8_t x2784 = INT8_MAX;
	volatile int32_t t87 = 1;

    t87 = (((x2781<=x2782)>>x2783)!=x2784);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x2865 = INT16_MIN;
	static int16_t x2866 = INT16_MAX;
	uint8_t x2867 = 0U;
	volatile uint64_t x2868 = 1LLU;
	int32_t t88 = -5910;

    t88 = (((x2865<=x2866)>>x2867)!=x2868);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint32_t x2897 = 0U;
	static volatile int64_t x2898 = 233LL;
	int32_t x2900 = INT32_MIN;
	int32_t t89 = -1;

    t89 = (((x2897<=x2898)>>x2899)!=x2900);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x2917 = INT32_MIN;
	int8_t x2918 = 22;
	uint32_t x2919 = 1U;
	int16_t x2920 = INT16_MIN;
	int32_t t90 = -1;

    t90 = (((x2917<=x2918)>>x2919)!=x2920);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x2933 = -31;
	int16_t x2935 = 11;
	int8_t x2936 = -34;
	int32_t t91 = -24253;

    t91 = (((x2933<=x2934)>>x2935)!=x2936);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint16_t x2942 = UINT16_MAX;
	static int64_t x2943 = 1LL;
	int64_t x2944 = INT64_MAX;
	int32_t t92 = -638;

    t92 = (((x2941<=x2942)>>x2943)!=x2944);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x2949 = 176241481;
	int8_t x2951 = 2;
	static uint32_t x2952 = UINT32_MAX;

    t93 = (((x2949<=x2950)>>x2951)!=x2952);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x2974 = 88U;
	volatile int8_t x2975 = 1;
	volatile int8_t x2976 = INT8_MIN;
	volatile int32_t t94 = -32072;

    t94 = (((x2973<=x2974)>>x2975)!=x2976);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int16_t x2977 = INT16_MAX;
	int8_t x2978 = INT8_MIN;
	volatile uint16_t x2979 = 12U;
	static int8_t x2980 = INT8_MIN;
	volatile int32_t t95 = 91;

    t95 = (((x2977<=x2978)>>x2979)!=x2980);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x2997 = -7159471950852LL;
	int32_t x2998 = -1573685;
	int8_t x2999 = 0;
	static int16_t x3000 = -1;
	volatile int32_t t96 = 1832368;

    t96 = (((x2997<=x2998)>>x2999)!=x3000);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x3089 = INT16_MIN;
	static int16_t x3090 = -1;
	uint8_t x3091 = 12U;
	volatile int16_t x3092 = 589;
	int32_t t97 = 32317;

    t97 = (((x3089<=x3090)>>x3091)!=x3092);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile uint32_t x3105 = UINT32_MAX;
	uint32_t x3106 = 144U;
	uint16_t x3107 = 7U;
	static volatile uint8_t x3108 = 89U;
	volatile int32_t t98 = 1600438;

    t98 = (((x3105<=x3106)>>x3107)!=x3108);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int64_t x3150 = -4LL;
	int32_t x3152 = 2931316;
	volatile int32_t t99 = 509646;

    t99 = (((x3149<=x3150)>>x3151)!=x3152);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x3157 = 0U;
	uint8_t x3159 = 1U;
	volatile int8_t x3160 = -5;
	int32_t t100 = 4;

    t100 = (((x3157<=x3158)>>x3159)!=x3160);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x3185 = -1;
	uint16_t x3186 = 4525U;
	static int32_t x3187 = 2;
	static int16_t x3188 = INT16_MIN;
	int32_t t101 = 1;

    t101 = (((x3185<=x3186)>>x3187)!=x3188);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x3214 = UINT32_MAX;
	uint32_t x3215 = 28U;
	int64_t x3216 = -7930LL;

    t102 = (((x3213<=x3214)>>x3215)!=x3216);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x3217 = INT16_MAX;
	uint32_t x3218 = 315135U;
	static uint16_t x3219 = 6U;
	volatile int64_t x3220 = INT64_MIN;
	volatile int32_t t103 = 24788658;

    t103 = (((x3217<=x3218)>>x3219)!=x3220);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x3242 = 73027811LL;
	uint16_t x3243 = 22U;
	static int32_t x3244 = INT32_MIN;
	static int32_t t104 = -469369295;

    t104 = (((x3241<=x3242)>>x3243)!=x3244);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x3257 = INT16_MAX;
	static int64_t x3258 = INT64_MAX;
	volatile uint32_t x3260 = 45176U;

    t105 = (((x3257<=x3258)>>x3259)!=x3260);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x3261 = 0;
	volatile uint16_t x3262 = 86U;
	int8_t x3263 = 2;
	uint32_t x3264 = 91249U;
	int32_t t106 = -10;

    t106 = (((x3261<=x3262)>>x3263)!=x3264);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint32_t x3301 = UINT32_MAX;
	uint8_t x3302 = UINT8_MAX;
	uint16_t x3303 = 0U;
	int32_t x3304 = -1;
	int32_t t107 = 26194;

    t107 = (((x3301<=x3302)>>x3303)!=x3304);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x3361 = INT16_MIN;
	int8_t x3363 = 18;
	static int64_t x3364 = -2630257131312189LL;

    t108 = (((x3361<=x3362)>>x3363)!=x3364);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x3421 = INT8_MAX;
	static int16_t x3422 = 2;
	int16_t x3424 = -28;
	volatile int32_t t109 = -27098;

    t109 = (((x3421<=x3422)>>x3423)!=x3424);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x3437 = -120;
	int8_t x3438 = -1;
	uint16_t x3439 = 3U;
	static uint8_t x3440 = 1U;
	static int32_t t110 = 3858;

    t110 = (((x3437<=x3438)>>x3439)!=x3440);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x3509 = INT64_MIN;
	static volatile uint32_t x3510 = 16220631U;
	uint8_t x3511 = 1U;
	uint16_t x3512 = 9637U;

    t111 = (((x3509<=x3510)>>x3511)!=x3512);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x3518 = INT8_MIN;

    t112 = (((x3517<=x3518)>>x3519)!=x3520);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x3529 = 2;
	int8_t x3531 = 0;
	int8_t x3532 = -1;
	int32_t t113 = 10073;

    t113 = (((x3529<=x3530)>>x3531)!=x3532);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x3541 = 28311936483LL;
	volatile int8_t x3542 = INT8_MAX;
	int8_t x3543 = 13;
	int32_t t114 = 1012715451;

    t114 = (((x3541<=x3542)>>x3543)!=x3544);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint8_t x3601 = UINT8_MAX;
	int16_t x3602 = -1;
	static volatile int64_t x3603 = 0LL;
	int8_t x3604 = 2;
	static volatile int32_t t115 = -10447191;

    t115 = (((x3601<=x3602)>>x3603)!=x3604);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x3623 = 28;
	int16_t x3624 = INT16_MIN;
	int32_t t116 = -20;

    t116 = (((x3621<=x3622)>>x3623)!=x3624);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x3653 = 1162753U;
	volatile int16_t x3654 = INT16_MAX;
	static int8_t x3655 = 0;
	uint64_t x3656 = UINT64_MAX;
	int32_t t117 = -1;

    t117 = (((x3653<=x3654)>>x3655)!=x3656);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x3692 = -1LL;
	volatile int32_t t118 = -1;

    t118 = (((x3689<=x3690)>>x3691)!=x3692);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x3809 = -353592586;
	volatile int32_t x3811 = 1;
	int32_t t119 = 1023522;

    t119 = (((x3809<=x3810)>>x3811)!=x3812);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x3869 = -1;
	int64_t x3870 = -2876212786096LL;
	uint32_t x3871 = 0U;
	uint64_t x3872 = UINT64_MAX;
	static int32_t t120 = 698432;

    t120 = (((x3869<=x3870)>>x3871)!=x3872);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x3910 = UINT16_MAX;
	uint16_t x3911 = 0U;
	static int64_t x3912 = INT64_MAX;
	volatile int32_t t121 = -48824026;

    t121 = (((x3909<=x3910)>>x3911)!=x3912);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x3929 = 1751088LL;
	volatile uint8_t x3930 = 6U;
	static int32_t x3932 = INT32_MIN;

    t122 = (((x3929<=x3930)>>x3931)!=x3932);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x3965 = -1;
	int8_t x3966 = -1;
	static volatile int32_t t123 = -2885;

    t123 = (((x3965<=x3966)>>x3967)!=x3968);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x3969 = INT64_MIN;
	volatile int16_t x3970 = -3;
	static volatile int8_t x3971 = 0;
	int8_t x3972 = INT8_MIN;
	volatile int32_t t124 = -182354;

    t124 = (((x3969<=x3970)>>x3971)!=x3972);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x3973 = 32302;
	static int16_t x3974 = -1;
	int16_t x3975 = 31;
	int32_t t125 = -7;

    t125 = (((x3973<=x3974)>>x3975)!=x3976);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x4049 = INT8_MIN;
	int64_t x4050 = INT64_MAX;
	uint8_t x4051 = 5U;
	uint8_t x4052 = 34U;
	int32_t t126 = 679113990;

    t126 = (((x4049<=x4050)>>x4051)!=x4052);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x4101 = INT64_MIN;
	int8_t x4103 = 10;
	int64_t x4104 = INT64_MAX;
	int32_t t127 = 18267069;

    t127 = (((x4101<=x4102)>>x4103)!=x4104);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x4129 = 920;
	uint32_t x4130 = 48762570U;
	uint16_t x4131 = 1U;
	int32_t x4132 = -1;
	volatile int32_t t128 = 736822254;

    t128 = (((x4129<=x4130)>>x4131)!=x4132);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x4190 = -1LL;
	uint8_t x4191 = 0U;
	static volatile int32_t t129 = 10881;

    t129 = (((x4189<=x4190)>>x4191)!=x4192);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x4193 = INT32_MIN;
	int64_t x4194 = INT64_MIN;
	int16_t x4195 = 13;
	int32_t t130 = 154089424;

    t130 = (((x4193<=x4194)>>x4195)!=x4196);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x4205 = -134;
	uint8_t x4206 = 14U;
	volatile int8_t x4208 = INT8_MAX;
	int32_t t131 = 4685854;

    t131 = (((x4205<=x4206)>>x4207)!=x4208);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile uint64_t x4253 = UINT64_MAX;
	int8_t x4254 = 16;
	volatile uint8_t x4255 = 2U;
	int32_t t132 = -3;

    t132 = (((x4253<=x4254)>>x4255)!=x4256);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint64_t x4262 = 5900629LLU;
	int8_t x4263 = 0;
	static volatile int32_t t133 = 21;

    t133 = (((x4261<=x4262)>>x4263)!=x4264);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x4393 = -112;
	static uint32_t x4396 = UINT32_MAX;
	volatile int32_t t134 = -1;

    t134 = (((x4393<=x4394)>>x4395)!=x4396);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x4406 = INT16_MAX;
	uint32_t x4407 = 4U;
	int32_t t135 = 104139034;

    t135 = (((x4405<=x4406)>>x4407)!=x4408);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x4450 = INT8_MAX;
	int64_t x4452 = -1LL;
	volatile int32_t t136 = 1;

    t136 = (((x4449<=x4450)>>x4451)!=x4452);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x4549 = 8U;
	int16_t x4550 = INT16_MIN;
	int16_t x4551 = 0;
	volatile int16_t x4552 = INT16_MAX;
	int32_t t137 = -91450;

    t137 = (((x4549<=x4550)>>x4551)!=x4552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x4573 = INT32_MIN;
	uint8_t x4575 = 12U;
	int16_t x4576 = INT16_MIN;
	volatile int32_t t138 = -645931;

    t138 = (((x4573<=x4574)>>x4575)!=x4576);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x4598 = INT16_MIN;
	static int8_t x4599 = 1;
	int64_t x4600 = -172950240LL;
	volatile int32_t t139 = 1038585032;

    t139 = (((x4597<=x4598)>>x4599)!=x4600);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x4609 = 83U;
	static uint16_t x4610 = 6509U;
	int32_t x4612 = 25185;
	volatile int32_t t140 = -75116124;

    t140 = (((x4609<=x4610)>>x4611)!=x4612);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile uint8_t x4637 = 37U;
	volatile int8_t x4639 = 2;
	int16_t x4640 = INT16_MIN;
	static int32_t t141 = -146;

    t141 = (((x4637<=x4638)>>x4639)!=x4640);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x4690 = UINT64_MAX;
	uint8_t x4691 = 1U;
	volatile int32_t x4692 = -20;
	int32_t t142 = -161275;

    t142 = (((x4689<=x4690)>>x4691)!=x4692);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x4693 = -1LL;
	int32_t x4694 = INT32_MIN;
	uint64_t x4695 = 0LLU;
	int16_t x4696 = INT16_MIN;
	volatile int32_t t143 = -5526190;

    t143 = (((x4693<=x4694)>>x4695)!=x4696);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x4701 = INT8_MAX;
	uint32_t x4702 = 121992U;
	volatile int64_t x4704 = -1LL;

    t144 = (((x4701<=x4702)>>x4703)!=x4704);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x4717 = -1;
	uint8_t x4719 = 0U;
	volatile int64_t x4720 = INT64_MIN;

    t145 = (((x4717<=x4718)>>x4719)!=x4720);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x4741 = -1LL;
	static uint16_t x4742 = UINT16_MAX;
	int64_t x4744 = INT64_MIN;
	volatile int32_t t146 = 6;

    t146 = (((x4741<=x4742)>>x4743)!=x4744);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint8_t x4785 = 39U;
	volatile int32_t x4786 = INT32_MIN;
	static int16_t x4787 = 31;
	uint16_t x4788 = 35U;

    t147 = (((x4785<=x4786)>>x4787)!=x4788);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint32_t x4797 = 11783U;
	static uint8_t x4799 = 7U;
	volatile int32_t x4800 = -1;
	volatile int32_t t148 = -14;

    t148 = (((x4797<=x4798)>>x4799)!=x4800);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x4813 = 113405618U;
	static volatile uint16_t x4815 = 6U;
	static int32_t x4816 = INT32_MAX;
	volatile int32_t t149 = -710547;

    t149 = (((x4813<=x4814)>>x4815)!=x4816);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x4925 = INT16_MAX;
	int32_t x4928 = INT32_MIN;
	volatile int32_t t150 = 1999;

    t150 = (((x4925<=x4926)>>x4927)!=x4928);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x4953 = 24010634357LLU;
	volatile uint32_t x4954 = 14672U;
	uint32_t x4955 = 1U;

    t151 = (((x4953<=x4954)>>x4955)!=x4956);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int32_t x4994 = -1;
	int8_t x4996 = INT8_MAX;
	static int32_t t152 = 5751;

    t152 = (((x4993<=x4994)>>x4995)!=x4996);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x5001 = 2;
	int32_t x5002 = INT32_MAX;
	uint16_t x5003 = 31U;
	int8_t x5004 = -1;
	volatile int32_t t153 = -2605099;

    t153 = (((x5001<=x5002)>>x5003)!=x5004);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x5005 = 5116808644077539LLU;
	volatile int16_t x5008 = INT16_MAX;
	static int32_t t154 = -117462;

    t154 = (((x5005<=x5006)>>x5007)!=x5008);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int16_t x5081 = INT16_MAX;
	static volatile int64_t x5082 = INT64_MAX;
	uint32_t x5083 = 5U;
	uint32_t x5084 = 11726420U;
	static volatile int32_t t155 = -115795;

    t155 = (((x5081<=x5082)>>x5083)!=x5084);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x5085 = INT16_MIN;
	volatile int16_t x5086 = 2;
	int32_t t156 = -3;

    t156 = (((x5085<=x5086)>>x5087)!=x5088);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x5105 = -239537954;
	int64_t x5106 = INT64_MAX;
	static volatile int8_t x5107 = 0;
	uint8_t x5108 = 58U;
	int32_t t157 = -3;

    t157 = (((x5105<=x5106)>>x5107)!=x5108);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x5154 = INT16_MAX;
	volatile uint16_t x5155 = 5U;
	volatile int8_t x5156 = 2;
	volatile int32_t t158 = -1930723;

    t158 = (((x5153<=x5154)>>x5155)!=x5156);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x5214 = -1;
	int16_t x5215 = 3;
	int32_t x5216 = -1;
	volatile int32_t t159 = -29;

    t159 = (((x5213<=x5214)>>x5215)!=x5216);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x5230 = UINT8_MAX;
	int8_t x5231 = 1;
	volatile int64_t x5232 = INT64_MAX;
	volatile int32_t t160 = 44;

    t160 = (((x5229<=x5230)>>x5231)!=x5232);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x5278 = -1LL;
	int16_t x5280 = -1;
	volatile int32_t t161 = 872042691;

    t161 = (((x5277<=x5278)>>x5279)!=x5280);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x5297 = 2310;
	static volatile int16_t x5298 = -1;
	static uint8_t x5299 = 1U;
	static volatile int16_t x5300 = -7;
	volatile int32_t t162 = 4642;

    t162 = (((x5297<=x5298)>>x5299)!=x5300);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x5313 = 1;
	uint8_t x5315 = 0U;
	uint32_t x5316 = UINT32_MAX;
	static volatile int32_t t163 = 1;

    t163 = (((x5313<=x5314)>>x5315)!=x5316);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x5317 = INT8_MIN;
	int16_t x5318 = -1;
	volatile uint16_t x5319 = 9U;
	volatile int8_t x5320 = -1;

    t164 = (((x5317<=x5318)>>x5319)!=x5320);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int32_t x5345 = INT32_MIN;
	volatile int64_t x5346 = 34LL;
	volatile int64_t x5347 = 17LL;
	int16_t x5348 = 290;
	static volatile int32_t t165 = -2019;

    t165 = (((x5345<=x5346)>>x5347)!=x5348);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x5365 = INT64_MAX;
	int8_t x5366 = -5;
	int8_t x5367 = 21;
	int16_t x5368 = -1;
	static volatile int32_t t166 = -42;

    t166 = (((x5365<=x5366)>>x5367)!=x5368);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x5369 = 436320U;
	int32_t x5370 = INT32_MIN;
	volatile int8_t x5371 = 7;
	int64_t x5372 = 483274036679138477LL;
	int32_t t167 = -233;

    t167 = (((x5369<=x5370)>>x5371)!=x5372);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x5382 = 1U;
	int8_t x5383 = 1;
	int64_t x5384 = 25LL;

    t168 = (((x5381<=x5382)>>x5383)!=x5384);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x5389 = -79;
	int64_t x5390 = INT64_MIN;
	int16_t x5391 = 0;
	uint16_t x5392 = 3U;
	int32_t t169 = -1521;

    t169 = (((x5389<=x5390)>>x5391)!=x5392);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x5401 = INT8_MIN;
	volatile int8_t x5403 = 0;
	uint32_t x5404 = 205U;
	volatile int32_t t170 = 869005607;

    t170 = (((x5401<=x5402)>>x5403)!=x5404);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x5405 = 883;
	static int16_t x5406 = INT16_MAX;
	int16_t x5407 = 3;
	int32_t t171 = -18093259;

    t171 = (((x5405<=x5406)>>x5407)!=x5408);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x5581 = INT16_MIN;
	int16_t x5582 = INT16_MIN;
	uint8_t x5583 = 0U;
	int16_t x5584 = -1;
	static int32_t t172 = 91540;

    t172 = (((x5581<=x5582)>>x5583)!=x5584);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x5586 = INT16_MIN;
	uint8_t x5587 = 20U;
	uint8_t x5588 = UINT8_MAX;
	volatile int32_t t173 = 184000;

    t173 = (((x5585<=x5586)>>x5587)!=x5588);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint16_t x5613 = UINT16_MAX;
	int16_t x5614 = INT16_MIN;
	volatile uint8_t x5615 = 18U;
	volatile int16_t x5616 = INT16_MAX;
	volatile int32_t t174 = 839606;

    t174 = (((x5613<=x5614)>>x5615)!=x5616);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint32_t x5633 = 449156804U;
	int8_t x5634 = INT8_MAX;
	uint32_t x5635 = 13U;
	int8_t x5636 = -1;

    t175 = (((x5633<=x5634)>>x5635)!=x5636);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x5654 = INT32_MAX;
	int8_t x5656 = INT8_MIN;
	volatile int32_t t176 = -12496825;

    t176 = (((x5653<=x5654)>>x5655)!=x5656);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x5709 = -109;
	volatile uint32_t x5712 = UINT32_MAX;
	volatile int32_t t177 = -16;

    t177 = (((x5709<=x5710)>>x5711)!=x5712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x5809 = 2855LL;
	int8_t x5810 = INT8_MIN;
	volatile int8_t x5811 = 1;
	volatile int32_t x5812 = 479;
	static volatile int32_t t178 = -22;

    t178 = (((x5809<=x5810)>>x5811)!=x5812);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x5875 = 0;
	int64_t x5876 = -1LL;
	int32_t t179 = -130682597;

    t179 = (((x5873<=x5874)>>x5875)!=x5876);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x5898 = 10U;
	int8_t x5900 = 0;
	int32_t t180 = 30;

    t180 = (((x5897<=x5898)>>x5899)!=x5900);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x5938 = -356LL;
	static uint64_t x5939 = 18LLU;
	static volatile int32_t t181 = -29;

    t181 = (((x5937<=x5938)>>x5939)!=x5940);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x5969 = -1;
	uint32_t x5970 = UINT32_MAX;
	static uint8_t x5971 = 0U;
	int32_t x5972 = INT32_MIN;
	int32_t t182 = -134655;

    t182 = (((x5969<=x5970)>>x5971)!=x5972);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint8_t x6010 = 6U;
	static int8_t x6011 = 1;
	volatile int32_t t183 = 47;

    t183 = (((x6009<=x6010)>>x6011)!=x6012);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x6019 = 3U;

    t184 = (((x6017<=x6018)>>x6019)!=x6020);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint8_t x6021 = 33U;
	int8_t x6022 = -25;
	uint16_t x6023 = 24U;
	int32_t t185 = -8124651;

    t185 = (((x6021<=x6022)>>x6023)!=x6024);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x6037 = -1LL;
	static int32_t x6040 = INT32_MAX;

    t186 = (((x6037<=x6038)>>x6039)!=x6040);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x6061 = INT16_MIN;
	int16_t x6062 = -1;
	uint16_t x6063 = 1U;
	static int32_t t187 = 1;

    t187 = (((x6061<=x6062)>>x6063)!=x6064);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x6181 = -560187215;
	static int32_t t188 = 1;

    t188 = (((x6181<=x6182)>>x6183)!=x6184);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x6345 = -9699;
	uint8_t x6346 = 1U;
	uint16_t x6347 = 4U;
	uint8_t x6348 = UINT8_MAX;
	volatile int32_t t189 = 1;

    t189 = (((x6345<=x6346)>>x6347)!=x6348);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x6374 = -1LL;
	uint32_t x6375 = 2U;
	int32_t x6376 = 1950058;
	int32_t t190 = 996;

    t190 = (((x6373<=x6374)>>x6375)!=x6376);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x6401 = INT32_MIN;
	static volatile int64_t x6402 = -1LL;
	uint8_t x6403 = 11U;
	volatile uint32_t x6404 = UINT32_MAX;
	volatile int32_t t191 = -44;

    t191 = (((x6401<=x6402)>>x6403)!=x6404);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint64_t x6405 = 3738LLU;
	int16_t x6407 = 5;
	static uint8_t x6408 = UINT8_MAX;
	int32_t t192 = -4730888;

    t192 = (((x6405<=x6406)>>x6407)!=x6408);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x6425 = INT64_MIN;
	volatile uint16_t x6427 = 1U;
	uint16_t x6428 = UINT16_MAX;

    t193 = (((x6425<=x6426)>>x6427)!=x6428);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x6437 = 2837898939669754527LLU;
	static volatile int16_t x6438 = INT16_MIN;
	int8_t x6439 = 0;
	uint32_t x6440 = 245U;

    t194 = (((x6437<=x6438)>>x6439)!=x6440);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint8_t x6475 = 4U;
	static int64_t x6476 = INT64_MAX;
	volatile int32_t t195 = 23;

    t195 = (((x6473<=x6474)>>x6475)!=x6476);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x6481 = 6844192238204019LLU;
	static uint8_t x6482 = 108U;
	uint8_t x6483 = 21U;
	uint64_t x6484 = UINT64_MAX;
	volatile int32_t t196 = 2082055;

    t196 = (((x6481<=x6482)>>x6483)!=x6484);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int64_t x6485 = 787175737LL;
	volatile int8_t x6486 = INT8_MIN;
	static uint8_t x6487 = 1U;
	int64_t x6488 = INT64_MIN;
	volatile int32_t t197 = -276;

    t197 = (((x6485<=x6486)>>x6487)!=x6488);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x6501 = 10;
	uint32_t x6503 = 30U;
	int32_t t198 = 353461110;

    t198 = (((x6501<=x6502)>>x6503)!=x6504);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x6569 = 6598U;
	volatile int16_t x6570 = INT16_MIN;
	uint8_t x6571 = 1U;
	int16_t x6572 = INT16_MAX;
	int32_t t199 = 11782;

    t199 = (((x6569<=x6570)>>x6571)!=x6572);

    if (t199 != 1) { NG(); } else { ; }
	
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

