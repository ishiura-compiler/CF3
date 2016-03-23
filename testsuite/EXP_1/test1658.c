
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

static uint8_t x23 = 52U;
int16_t x24 = 1;
volatile int32_t t1 = -30;
volatile uint64_t x177 = 419775LLU;
int64_t x225 = INT64_MIN;
int32_t t5 = -1;
volatile uint16_t x271 = 2866U;
static int32_t t6 = -6;
uint64_t x312 = 19LLU;
uint16_t x316 = 2U;
uint64_t x490 = UINT64_MAX;
int8_t x492 = 7;
int64_t x538 = INT64_MIN;
int64_t x570 = -137269178119725839LL;
volatile int8_t x652 = 12;
volatile uint32_t x657 = 2043U;
static volatile int64_t x659 = -3936438582174LL;
uint8_t x661 = 14U;
int64_t x663 = -1LL;
uint8_t x664 = 17U;
int16_t x688 = 0;
static volatile int32_t t18 = -1;
static int32_t x718 = -3;
static volatile int32_t x719 = 51706;
int32_t t19 = -191010617;
volatile int8_t x725 = 15;
int32_t x755 = INT32_MIN;
static volatile int32_t t22 = -259180;
int16_t x799 = -1;
int8_t x844 = 26;
uint64_t x853 = 4037460697LLU;
int32_t t26 = -43367;
static volatile int64_t x873 = INT64_MIN;
volatile int64_t x905 = INT64_MAX;
static uint8_t x906 = 0U;
int8_t x918 = -1;
int32_t t30 = -6;
static int8_t x925 = 2;
int64_t x991 = INT64_MIN;
uint8_t x1031 = 2U;
int32_t t35 = -13452533;
int64_t x1077 = INT64_MAX;
volatile int32_t t37 = 133;
uint32_t x1114 = 173444430U;
volatile int16_t x1115 = INT16_MAX;
volatile int32_t t38 = -4013612;
volatile int32_t t40 = -17224;
static int32_t x1201 = -129236083;
uint64_t x1202 = 6261074588LLU;
uint16_t x1350 = 344U;
static volatile int32_t t43 = 169700889;
int32_t x1382 = INT32_MIN;
static uint64_t x1429 = 64988895521926857LLU;
static int8_t x1431 = INT8_MIN;
uint32_t x1436 = 6U;
static volatile int32_t x1437 = INT32_MIN;
int32_t t47 = 6;
int32_t x1461 = 137;
int32_t x1484 = 1;
static int8_t x1515 = INT8_MIN;
volatile int32_t t50 = 126067833;
static uint8_t x1536 = 1U;
static volatile int8_t x1547 = -1;
int16_t x1606 = INT16_MAX;
uint16_t x1611 = UINT16_MAX;
int32_t x1632 = 26;
volatile int32_t x1717 = INT32_MIN;
volatile int16_t x1842 = INT16_MIN;
volatile int32_t x1938 = 9790;
int8_t x1939 = INT8_MIN;
int32_t x1989 = -1;
volatile int32_t t61 = 79619;
volatile int64_t x1993 = INT64_MIN;
static uint64_t x2086 = 13446LLU;
static int8_t x2138 = INT8_MAX;
int32_t t68 = 5376;
uint16_t x2143 = 239U;
static volatile int32_t t71 = 1;
volatile int32_t t72 = 16308902;
int16_t x2187 = -152;
int32_t t74 = 367999833;
int8_t x2281 = -1;
static uint32_t x2285 = 247U;
int64_t x2357 = 1560663188940636237LL;
uint32_t x2403 = 139U;
uint32_t x2433 = 529036532U;
int8_t x2436 = 6;
int32_t t80 = -1;
int16_t x2505 = INT16_MAX;
static volatile int32_t t85 = -918;
volatile int16_t x2579 = 2619;
int8_t x2709 = -1;
volatile uint8_t x2712 = 11U;
static int16_t x2731 = INT16_MIN;
volatile int32_t x2804 = 7;
volatile int32_t t93 = 20262420;
int16_t x2901 = 9923;
int16_t x2917 = 2723;
uint64_t x2918 = 113166855444389LLU;
int32_t t97 = 15662679;
uint64_t x3013 = 30134824722705LLU;
volatile uint8_t x3036 = 28U;
volatile int32_t t101 = -1064425845;
int8_t x3051 = 10;
int8_t x3139 = -1;
int32_t t104 = 36574156;
uint8_t x3150 = 18U;
uint32_t x3151 = 4386U;
int8_t x3173 = -31;
volatile uint32_t x3178 = UINT32_MAX;
uint16_t x3208 = 3U;
int32_t t110 = 2962;
volatile int8_t x3224 = 10;
uint32_t x3231 = 20794U;
static int32_t x3399 = 12;
int32_t t115 = 3412621;
int64_t x3503 = -1LL;
int8_t x3504 = 1;
volatile int32_t t117 = 14377;
uint64_t x3532 = 3LLU;
int32_t t119 = -3940;
uint64_t x3681 = 252744889440LLU;
volatile uint16_t x3682 = UINT16_MAX;
int32_t t121 = 7347;
static int32_t x3733 = -1;
uint8_t x3734 = 66U;
volatile int32_t t124 = 7162025;
uint16_t x3848 = 2U;
uint64_t x3905 = 2LLU;
uint8_t x3928 = 1U;
int64_t x3941 = INT64_MAX;
int32_t x3942 = -1;
int16_t x3943 = INT16_MIN;
int64_t x3995 = -24496026081182563LL;
uint8_t x4028 = 1U;
volatile int32_t t131 = -63571;
static volatile uint8_t x4048 = 9U;
int8_t x4062 = INT8_MIN;
volatile int32_t t133 = 15021;
static volatile int32_t t134 = -81038618;
static int32_t x4104 = 3;
static uint64_t x4127 = 6715LLU;
static int8_t x4171 = 3;
uint32_t x4175 = 1824063U;
static int8_t x4181 = -1;
int8_t x4198 = -2;
static int32_t x4199 = -1;
int32_t t141 = -272;
int8_t x4202 = INT8_MIN;
int32_t x4203 = INT32_MIN;
static volatile int32_t t143 = -1;
uint16_t x4281 = 0U;
int8_t x4284 = 20;
uint8_t x4396 = 26U;
static uint16_t x4421 = 295U;
uint16_t x4424 = 2U;
int32_t t147 = 761;
volatile int16_t x4435 = INT16_MAX;
int32_t t148 = -84;
uint32_t x4456 = 0U;
static int32_t x4541 = INT32_MAX;
uint32_t x4564 = 7U;
int16_t x4614 = 229;
volatile uint16_t x4615 = UINT16_MAX;
int8_t x4616 = 0;
volatile int32_t t155 = 0;
int64_t x4679 = INT64_MAX;
volatile int32_t t156 = -555891738;
volatile uint8_t x4766 = UINT8_MAX;
uint64_t x4767 = 1461987729956137LLU;
static int32_t t158 = -104058;
int16_t x4805 = INT16_MAX;
int16_t x4810 = INT16_MAX;
uint64_t x4899 = UINT64_MAX;
uint16_t x4912 = 2U;
int64_t x4941 = -414464LL;
static uint16_t x4944 = 14U;
volatile uint16_t x4991 = UINT16_MAX;
int32_t t166 = -15;
int32_t t167 = 3675;
static volatile uint16_t x5105 = 118U;
volatile int16_t x5117 = -25;
int32_t t169 = -618863624;
int64_t x5185 = INT64_MAX;
static uint8_t x5188 = 29U;
int8_t x5225 = INT8_MAX;
uint8_t x5269 = 38U;
int16_t x5283 = INT16_MIN;
int8_t x5306 = INT8_MIN;
int32_t t177 = -3163122;
static int16_t x5333 = -485;
volatile int64_t x5462 = INT64_MIN;
int64_t x5499 = INT64_MAX;
volatile int32_t t182 = -1;
int32_t x5547 = INT32_MAX;
int32_t t183 = -7770339;
static int8_t x5609 = -1;
static int32_t t184 = 7089712;
uint8_t x5619 = 24U;
static uint16_t x5620 = 27U;
volatile int32_t x5749 = INT32_MIN;
volatile int32_t x5750 = -1;
int8_t x5791 = INT8_MIN;
int16_t x5795 = INT16_MIN;
int32_t t193 = 152232;
int16_t x5834 = INT16_MIN;
volatile uint16_t x5956 = 30U;


void f0(void) {
    	int32_t x21 = -1520;
	uint64_t x22 = UINT64_MAX;
	int32_t t0 = 451;

    t0 = (((x21>x22)!=x23)<<x24);

    if (t0 != 2) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x65 = INT32_MAX;
	static uint8_t x66 = UINT8_MAX;
	int64_t x67 = -32482LL;
	uint64_t x68 = 0LLU;

    t1 = (((x65>x66)!=x67)<<x68);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x125 = INT32_MIN;
	uint32_t x126 = 3U;
	uint16_t x127 = 5233U;
	volatile uint32_t x128 = 3U;
	int32_t t2 = -2347806;

    t2 = (((x125>x126)!=x127)<<x128);

    if (t2 != 8) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x141 = INT8_MAX;
	uint64_t x142 = 5147375796547LLU;
	int8_t x143 = 1;
	uint8_t x144 = 2U;
	int32_t t3 = 96;

    t3 = (((x141>x142)!=x143)<<x144);

    if (t3 != 4) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x178 = -23;
	static int64_t x179 = -435220LL;
	int16_t x180 = 1;
	volatile int32_t t4 = -474666843;

    t4 = (((x177>x178)!=x179)<<x180);

    if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x226 = 21U;
	volatile int16_t x227 = INT16_MIN;
	uint64_t x228 = 0LLU;

    t5 = (((x225>x226)!=x227)<<x228);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int32_t x269 = INT32_MAX;
	volatile int64_t x270 = 2879217229303LL;
	uint32_t x272 = 14U;

    t6 = (((x269>x270)!=x271)<<x272);

    if (t6 != 16384) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x309 = UINT64_MAX;
	static uint64_t x310 = 1249675069887LLU;
	volatile int8_t x311 = 4;
	static volatile int32_t t7 = -13491;

    t7 = (((x309>x310)!=x311)<<x312);

    if (t7 != 524288) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x313 = 30534821U;
	int64_t x314 = INT64_MIN;
	int64_t x315 = -9827832350602843LL;
	static int32_t t8 = -16309780;

    t8 = (((x313>x314)!=x315)<<x316);

    if (t8 != 4) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x401 = -1;
	volatile int16_t x402 = INT16_MIN;
	int16_t x403 = INT16_MIN;
	volatile int8_t x404 = 1;
	static volatile int32_t t9 = -522346013;

    t9 = (((x401>x402)!=x403)<<x404);

    if (t9 != 2) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x437 = 4;
	static int32_t x438 = -710931;
	uint8_t x439 = UINT8_MAX;
	uint16_t x440 = 1U;
	int32_t t10 = 29;

    t10 = (((x437>x438)!=x439)<<x440);

    if (t10 != 2) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x489 = INT32_MIN;
	static uint32_t x491 = 7667U;
	static int32_t t11 = -30229;

    t11 = (((x489>x490)!=x491)<<x492);

    if (t11 != 128) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x537 = UINT8_MAX;
	static int16_t x539 = -121;
	int32_t x540 = 1;
	int32_t t12 = -268979935;

    t12 = (((x537>x538)!=x539)<<x540);

    if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x569 = INT64_MIN;
	static int32_t x571 = INT32_MIN;
	volatile uint64_t x572 = 3LLU;
	int32_t t13 = 62;

    t13 = (((x569>x570)!=x571)<<x572);

    if (t13 != 8) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x649 = 106861062;
	int32_t x650 = INT32_MAX;
	int16_t x651 = INT16_MIN;
	int32_t t14 = 16575;

    t14 = (((x649>x650)!=x651)<<x652);

    if (t14 != 4096) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x658 = 3367U;
	static int16_t x660 = 2;
	static volatile int32_t t15 = 333699;

    t15 = (((x657>x658)!=x659)<<x660);

    if (t15 != 4) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x662 = -2210;
	volatile int32_t t16 = 1577108;

    t16 = (((x661>x662)!=x663)<<x664);

    if (t16 != 131072) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int16_t x685 = 0;
	volatile uint16_t x686 = 57U;
	uint8_t x687 = 23U;
	int32_t t17 = -2945;

    t17 = (((x685>x686)!=x687)<<x688);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x705 = INT16_MIN;
	int32_t x706 = -1;
	int16_t x707 = 100;
	uint16_t x708 = 27U;

    t18 = (((x705>x706)!=x707)<<x708);

    if (t18 != 134217728) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x717 = -1;
	static uint32_t x720 = 23U;

    t19 = (((x717>x718)!=x719)<<x720);

    if (t19 != 8388608) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x726 = -3933;
	int8_t x727 = INT8_MIN;
	static volatile uint64_t x728 = 7LLU;
	volatile int32_t t20 = 79828;

    t20 = (((x725>x726)!=x727)<<x728);

    if (t20 != 128) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x753 = -1;
	uint64_t x754 = 1460236258958LLU;
	int32_t x756 = 1;
	static int32_t t21 = 125346;

    t21 = (((x753>x754)!=x755)<<x756);

    if (t21 != 2) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x761 = UINT64_MAX;
	static int64_t x762 = INT64_MIN;
	int64_t x763 = INT64_MAX;
	uint8_t x764 = 2U;

    t22 = (((x761>x762)!=x763)<<x764);

    if (t22 != 4) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x797 = INT64_MIN;
	static int64_t x798 = -91LL;
	uint8_t x800 = 5U;
	int32_t t23 = 0;

    t23 = (((x797>x798)!=x799)<<x800);

    if (t23 != 32) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x833 = 2245U;
	int64_t x834 = 33792906107248293LL;
	uint16_t x835 = UINT16_MAX;
	uint8_t x836 = 30U;
	static volatile int32_t t24 = 872804003;

    t24 = (((x833>x834)!=x835)<<x836);

    if (t24 != 1073741824) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint64_t x841 = 74577548070LLU;
	volatile int8_t x842 = 7;
	static volatile int8_t x843 = INT8_MIN;
	volatile int32_t t25 = -3539;

    t25 = (((x841>x842)!=x843)<<x844);

    if (t25 != 67108864) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x854 = INT8_MAX;
	int8_t x855 = INT8_MIN;
	int32_t x856 = 4;

    t26 = (((x853>x854)!=x855)<<x856);

    if (t26 != 16) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x865 = INT16_MIN;
	int32_t x866 = INT32_MIN;
	int64_t x867 = 1LL;
	volatile int8_t x868 = 1;
	int32_t t27 = -494580;

    t27 = (((x865>x866)!=x867)<<x868);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t x874 = INT32_MIN;
	int16_t x875 = -1;
	volatile uint8_t x876 = 12U;
	volatile int32_t t28 = 7;

    t28 = (((x873>x874)!=x875)<<x876);

    if (t28 != 4096) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x907 = 3528U;
	uint8_t x908 = 1U;
	volatile int32_t t29 = -15755;

    t29 = (((x905>x906)!=x907)<<x908);

    if (t29 != 2) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x917 = 107U;
	int16_t x919 = INT16_MAX;
	static int16_t x920 = 15;

    t30 = (((x917>x918)!=x919)<<x920);

    if (t30 != 32768) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x926 = 9241U;
	volatile int16_t x927 = -38;
	uint16_t x928 = 7U;
	int32_t t31 = -5076236;

    t31 = (((x925>x926)!=x927)<<x928);

    if (t31 != 128) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint32_t x957 = 419045317U;
	int64_t x958 = -4309549LL;
	int64_t x959 = INT64_MIN;
	uint16_t x960 = 1U;
	volatile int32_t t32 = -11;

    t32 = (((x957>x958)!=x959)<<x960);

    if (t32 != 2) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x961 = -1687;
	static volatile int32_t x962 = 21673;
	int8_t x963 = INT8_MAX;
	uint8_t x964 = 3U;
	int32_t t33 = -32;

    t33 = (((x961>x962)!=x963)<<x964);

    if (t33 != 8) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x989 = 51U;
	uint64_t x990 = 1389196524236686004LLU;
	volatile uint16_t x992 = 0U;
	static volatile int32_t t34 = 7501230;

    t34 = (((x989>x990)!=x991)<<x992);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x1029 = 7;
	int32_t x1030 = INT32_MAX;
	static uint8_t x1032 = 0U;

    t35 = (((x1029>x1030)!=x1031)<<x1032);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x1049 = INT64_MAX;
	static int64_t x1050 = 810044LL;
	int8_t x1051 = -1;
	volatile int8_t x1052 = 18;
	volatile int32_t t36 = -402018064;

    t36 = (((x1049>x1050)!=x1051)<<x1052);

    if (t36 != 262144) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x1078 = -1;
	uint32_t x1079 = 100U;
	int8_t x1080 = 0;

    t37 = (((x1077>x1078)!=x1079)<<x1080);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x1113 = 71U;
	int8_t x1116 = 15;

    t38 = (((x1113>x1114)!=x1115)<<x1116);

    if (t38 != 32768) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x1137 = UINT16_MAX;
	uint32_t x1138 = UINT32_MAX;
	int8_t x1139 = INT8_MIN;
	volatile uint16_t x1140 = 4U;
	volatile int32_t t39 = -614;

    t39 = (((x1137>x1138)!=x1139)<<x1140);

    if (t39 != 16) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x1165 = 452;
	static int8_t x1166 = INT8_MIN;
	int64_t x1167 = -16587482875193LL;
	uint8_t x1168 = 1U;

    t40 = (((x1165>x1166)!=x1167)<<x1168);

    if (t40 != 2) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x1203 = INT8_MIN;
	uint8_t x1204 = 19U;
	static int32_t t41 = 6;

    t41 = (((x1201>x1202)!=x1203)<<x1204);

    if (t41 != 524288) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint8_t x1289 = UINT8_MAX;
	static uint32_t x1290 = 5325U;
	int32_t x1291 = 1;
	int8_t x1292 = 0;
	static volatile int32_t t42 = 6195907;

    t42 = (((x1289>x1290)!=x1291)<<x1292);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x1349 = INT32_MAX;
	int8_t x1351 = -3;
	int64_t x1352 = 1LL;

    t43 = (((x1349>x1350)!=x1351)<<x1352);

    if (t43 != 2) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x1381 = -18;
	int32_t x1383 = 353273;
	volatile uint32_t x1384 = 7U;
	int32_t t44 = -2051376;

    t44 = (((x1381>x1382)!=x1383)<<x1384);

    if (t44 != 128) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x1430 = UINT8_MAX;
	static uint8_t x1432 = 15U;
	volatile int32_t t45 = 8437488;

    t45 = (((x1429>x1430)!=x1431)<<x1432);

    if (t45 != 32768) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x1433 = INT8_MAX;
	volatile int32_t x1434 = INT32_MIN;
	int32_t x1435 = 239865;
	volatile int32_t t46 = 1736;

    t46 = (((x1433>x1434)!=x1435)<<x1436);

    if (t46 != 64) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint64_t x1438 = 2717966320982449LLU;
	uint32_t x1439 = UINT32_MAX;
	volatile uint32_t x1440 = 26U;

    t47 = (((x1437>x1438)!=x1439)<<x1440);

    if (t47 != 67108864) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint64_t x1462 = UINT64_MAX;
	int8_t x1463 = -1;
	int32_t x1464 = 3;
	volatile int32_t t48 = -5;

    t48 = (((x1461>x1462)!=x1463)<<x1464);

    if (t48 != 8) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint32_t x1481 = UINT32_MAX;
	volatile int8_t x1482 = 0;
	int64_t x1483 = -29869962LL;
	int32_t t49 = -1976636;

    t49 = (((x1481>x1482)!=x1483)<<x1484);

    if (t49 != 2) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x1513 = 11916;
	int16_t x1514 = -921;
	uint16_t x1516 = 29U;

    t50 = (((x1513>x1514)!=x1515)<<x1516);

    if (t50 != 536870912) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x1533 = -1;
	volatile int16_t x1534 = 14866;
	int32_t x1535 = INT32_MIN;
	static volatile int32_t t51 = 0;

    t51 = (((x1533>x1534)!=x1535)<<x1536);

    if (t51 != 2) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x1545 = INT32_MIN;
	int32_t x1546 = 232096342;
	volatile uint8_t x1548 = 3U;
	volatile int32_t t52 = 167;

    t52 = (((x1545>x1546)!=x1547)<<x1548);

    if (t52 != 8) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x1605 = -1;
	int8_t x1607 = -1;
	int8_t x1608 = 4;
	int32_t t53 = -383792677;

    t53 = (((x1605>x1606)!=x1607)<<x1608);

    if (t53 != 16) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x1609 = INT16_MIN;
	volatile int8_t x1610 = -1;
	volatile int16_t x1612 = 29;
	volatile int32_t t54 = 44002;

    t54 = (((x1609>x1610)!=x1611)<<x1612);

    if (t54 != 536870912) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x1629 = -1;
	uint32_t x1630 = 20976686U;
	static uint8_t x1631 = 3U;
	int32_t t55 = 74205001;

    t55 = (((x1629>x1630)!=x1631)<<x1632);

    if (t55 != 67108864) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x1657 = -6741396704039LL;
	static int64_t x1658 = -315751493350285919LL;
	int16_t x1659 = INT16_MAX;
	uint8_t x1660 = 3U;
	static int32_t t56 = -17;

    t56 = (((x1657>x1658)!=x1659)<<x1660);

    if (t56 != 8) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x1718 = INT16_MIN;
	int32_t x1719 = -1;
	uint8_t x1720 = 5U;
	volatile int32_t t57 = -771454756;

    t57 = (((x1717>x1718)!=x1719)<<x1720);

    if (t57 != 32) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x1805 = INT8_MIN;
	int16_t x1806 = INT16_MIN;
	static int16_t x1807 = INT16_MIN;
	static uint16_t x1808 = 3U;
	int32_t t58 = 2044;

    t58 = (((x1805>x1806)!=x1807)<<x1808);

    if (t58 != 8) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x1841 = INT16_MAX;
	int16_t x1843 = -1;
	int8_t x1844 = 5;
	volatile int32_t t59 = -3616;

    t59 = (((x1841>x1842)!=x1843)<<x1844);

    if (t59 != 32) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x1937 = 27;
	volatile int8_t x1940 = 29;
	volatile int32_t t60 = -7;

    t60 = (((x1937>x1938)!=x1939)<<x1940);

    if (t60 != 536870912) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x1990 = INT8_MIN;
	uint32_t x1991 = 263983118U;
	static int32_t x1992 = 6;

    t61 = (((x1989>x1990)!=x1991)<<x1992);

    if (t61 != 64) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x1994 = 1U;
	volatile int16_t x1995 = -1;
	uint8_t x1996 = 2U;
	volatile int32_t t62 = -6653475;

    t62 = (((x1993>x1994)!=x1995)<<x1996);

    if (t62 != 4) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x1997 = INT32_MIN;
	int16_t x1998 = INT16_MIN;
	int16_t x1999 = 1179;
	int8_t x2000 = 1;
	volatile int32_t t63 = -2007;

    t63 = (((x1997>x1998)!=x1999)<<x2000);

    if (t63 != 2) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x2029 = INT8_MAX;
	int8_t x2030 = 5;
	uint16_t x2031 = UINT16_MAX;
	static volatile int16_t x2032 = 6;
	int32_t t64 = 15938428;

    t64 = (((x2029>x2030)!=x2031)<<x2032);

    if (t64 != 64) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x2057 = INT16_MAX;
	int16_t x2058 = -111;
	int8_t x2059 = INT8_MIN;
	static int16_t x2060 = 5;
	int32_t t65 = 163;

    t65 = (((x2057>x2058)!=x2059)<<x2060);

    if (t65 != 32) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x2085 = -1;
	static volatile uint64_t x2087 = 3211515049081342LLU;
	static int8_t x2088 = 1;
	int32_t t66 = 10620;

    t66 = (((x2085>x2086)!=x2087)<<x2088);

    if (t66 != 2) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x2129 = 0;
	int64_t x2130 = 287197607705LL;
	static volatile int64_t x2131 = INT64_MAX;
	int16_t x2132 = 3;
	int32_t t67 = 9;

    t67 = (((x2129>x2130)!=x2131)<<x2132);

    if (t67 != 8) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint8_t x2137 = 4U;
	int32_t x2139 = INT32_MIN;
	int8_t x2140 = 0;

    t68 = (((x2137>x2138)!=x2139)<<x2140);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x2141 = INT16_MIN;
	uint16_t x2142 = 732U;
	volatile uint16_t x2144 = 9U;
	volatile int32_t t69 = -299;

    t69 = (((x2141>x2142)!=x2143)<<x2144);

    if (t69 != 512) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int8_t x2149 = INT8_MIN;
	int32_t x2150 = INT32_MAX;
	int64_t x2151 = 27945001937LL;
	volatile uint8_t x2152 = 4U;
	volatile int32_t t70 = 48613425;

    t70 = (((x2149>x2150)!=x2151)<<x2152);

    if (t70 != 16) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x2153 = 12U;
	int64_t x2154 = INT64_MAX;
	static int64_t x2155 = INT64_MAX;
	int16_t x2156 = 0;

    t71 = (((x2153>x2154)!=x2155)<<x2156);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x2173 = INT16_MIN;
	int16_t x2174 = -1;
	volatile int8_t x2175 = -1;
	volatile uint64_t x2176 = 3LLU;

    t72 = (((x2173>x2174)!=x2175)<<x2176);

    if (t72 != 8) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint8_t x2185 = 4U;
	int32_t x2186 = INT32_MIN;
	uint8_t x2188 = 0U;
	int32_t t73 = 1073200034;

    t73 = (((x2185>x2186)!=x2187)<<x2188);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x2269 = 57U;
	int32_t x2270 = INT32_MIN;
	uint16_t x2271 = 98U;
	uint32_t x2272 = 1U;

    t74 = (((x2269>x2270)!=x2271)<<x2272);

    if (t74 != 2) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x2282 = INT64_MAX;
	uint32_t x2283 = 25748U;
	uint16_t x2284 = 26U;
	int32_t t75 = -44452;

    t75 = (((x2281>x2282)!=x2283)<<x2284);

    if (t75 != 67108864) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x2286 = INT16_MAX;
	static int32_t x2287 = -471;
	uint8_t x2288 = 26U;
	volatile int32_t t76 = -434178;

    t76 = (((x2285>x2286)!=x2287)<<x2288);

    if (t76 != 67108864) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x2358 = 1;
	volatile int64_t x2359 = 330LL;
	uint8_t x2360 = 1U;
	int32_t t77 = -3560;

    t77 = (((x2357>x2358)!=x2359)<<x2360);

    if (t77 != 2) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x2401 = -1;
	static uint32_t x2402 = 227U;
	uint32_t x2404 = 7U;
	static volatile int32_t t78 = -1726538;

    t78 = (((x2401>x2402)!=x2403)<<x2404);

    if (t78 != 128) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x2434 = INT64_MAX;
	int32_t x2435 = -510221698;
	int32_t t79 = -2209;

    t79 = (((x2433>x2434)!=x2435)<<x2436);

    if (t79 != 64) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x2437 = UINT16_MAX;
	static int16_t x2438 = 14647;
	uint8_t x2439 = UINT8_MAX;
	int32_t x2440 = 2;

    t80 = (((x2437>x2438)!=x2439)<<x2440);

    if (t80 != 4) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x2465 = INT32_MIN;
	int32_t x2466 = -339973687;
	int8_t x2467 = INT8_MIN;
	uint8_t x2468 = 1U;
	volatile int32_t t81 = 327;

    t81 = (((x2465>x2466)!=x2467)<<x2468);

    if (t81 != 2) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x2477 = INT32_MIN;
	static int16_t x2478 = -2;
	int32_t x2479 = -1;
	int8_t x2480 = 0;
	int32_t t82 = 147;

    t82 = (((x2477>x2478)!=x2479)<<x2480);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x2489 = 29U;
	int8_t x2490 = INT8_MAX;
	volatile uint64_t x2491 = 1894LLU;
	uint8_t x2492 = 7U;
	int32_t t83 = 3031;

    t83 = (((x2489>x2490)!=x2491)<<x2492);

    if (t83 != 128) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x2506 = INT64_MIN;
	int64_t x2507 = -290721246568736780LL;
	int32_t x2508 = 0;
	volatile int32_t t84 = -2726;

    t84 = (((x2505>x2506)!=x2507)<<x2508);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x2509 = UINT16_MAX;
	int64_t x2510 = 1043562871119723039LL;
	int64_t x2511 = -669500756299826646LL;
	int8_t x2512 = 24;

    t85 = (((x2509>x2510)!=x2511)<<x2512);

    if (t85 != 16777216) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x2577 = -1;
	volatile uint64_t x2578 = 19962777830LLU;
	uint32_t x2580 = 2U;
	int32_t t86 = 315130;

    t86 = (((x2577>x2578)!=x2579)<<x2580);

    if (t86 != 4) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint8_t x2637 = 6U;
	int16_t x2638 = 0;
	int16_t x2639 = 1;
	int16_t x2640 = 1;
	int32_t t87 = 219319364;

    t87 = (((x2637>x2638)!=x2639)<<x2640);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x2649 = -23;
	int16_t x2650 = INT16_MAX;
	uint8_t x2651 = 11U;
	static int8_t x2652 = 30;
	volatile int32_t t88 = 10684934;

    t88 = (((x2649>x2650)!=x2651)<<x2652);

    if (t88 != 1073741824) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x2689 = -450272492;
	volatile uint16_t x2690 = 27158U;
	int16_t x2691 = 5;
	static uint16_t x2692 = 8U;
	int32_t t89 = -66606114;

    t89 = (((x2689>x2690)!=x2691)<<x2692);

    if (t89 != 256) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x2710 = INT64_MIN;
	uint16_t x2711 = UINT16_MAX;
	volatile int32_t t90 = 1;

    t90 = (((x2709>x2710)!=x2711)<<x2712);

    if (t90 != 2048) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x2729 = 968355954615992439LLU;
	int64_t x2730 = INT64_MIN;
	uint16_t x2732 = 0U;
	volatile int32_t t91 = 76;

    t91 = (((x2729>x2730)!=x2731)<<x2732);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint16_t x2733 = UINT16_MAX;
	static volatile uint64_t x2734 = UINT64_MAX;
	static int8_t x2735 = INT8_MAX;
	int8_t x2736 = 1;
	int32_t t92 = 1;

    t92 = (((x2733>x2734)!=x2735)<<x2736);

    if (t92 != 2) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x2801 = INT16_MIN;
	volatile uint8_t x2802 = 4U;
	int32_t x2803 = 28;

    t93 = (((x2801>x2802)!=x2803)<<x2804);

    if (t93 != 128) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x2821 = INT8_MAX;
	static int32_t x2822 = INT32_MIN;
	uint16_t x2823 = 16167U;
	uint8_t x2824 = 30U;
	int32_t t94 = -20064;

    t94 = (((x2821>x2822)!=x2823)<<x2824);

    if (t94 != 1073741824) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x2841 = INT8_MIN;
	int16_t x2842 = -1;
	volatile int32_t x2843 = INT32_MAX;
	static uint8_t x2844 = 0U;
	int32_t t95 = -11191;

    t95 = (((x2841>x2842)!=x2843)<<x2844);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x2902 = 4LLU;
	uint16_t x2903 = UINT16_MAX;
	uint16_t x2904 = 2U;
	static volatile int32_t t96 = -2544;

    t96 = (((x2901>x2902)!=x2903)<<x2904);

    if (t96 != 4) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x2919 = INT8_MIN;
	static uint8_t x2920 = 26U;

    t97 = (((x2917>x2918)!=x2919)<<x2920);

    if (t97 != 67108864) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x2945 = -1;
	static int16_t x2946 = INT16_MIN;
	int16_t x2947 = -1;
	int8_t x2948 = 1;
	int32_t t98 = -3035;

    t98 = (((x2945>x2946)!=x2947)<<x2948);

    if (t98 != 2) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x3014 = 4;
	static int16_t x3015 = INT16_MIN;
	static uint8_t x3016 = 7U;
	volatile int32_t t99 = 15234783;

    t99 = (((x3013>x3014)!=x3015)<<x3016);

    if (t99 != 128) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x3025 = 81511187LL;
	int8_t x3026 = INT8_MIN;
	int64_t x3027 = INT64_MIN;
	volatile uint8_t x3028 = 20U;
	volatile int32_t t100 = -3779013;

    t100 = (((x3025>x3026)!=x3027)<<x3028);

    if (t100 != 1048576) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x3033 = UINT32_MAX;
	uint8_t x3034 = 4U;
	volatile int8_t x3035 = 1;

    t101 = (((x3033>x3034)!=x3035)<<x3036);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x3049 = 3379851566LLU;
	int32_t x3050 = -1;
	int16_t x3052 = 8;
	volatile int32_t t102 = 160;

    t102 = (((x3049>x3050)!=x3051)<<x3052);

    if (t102 != 256) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile uint32_t x3077 = 132663754U;
	uint16_t x3078 = UINT16_MAX;
	uint16_t x3079 = 36U;
	uint32_t x3080 = 20U;
	volatile int32_t t103 = -1;

    t103 = (((x3077>x3078)!=x3079)<<x3080);

    if (t103 != 1048576) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x3137 = -1;
	int32_t x3138 = 1774;
	uint8_t x3140 = 14U;

    t104 = (((x3137>x3138)!=x3139)<<x3140);

    if (t104 != 16384) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x3149 = -1;
	uint8_t x3152 = 0U;
	int32_t t105 = 31936405;

    t105 = (((x3149>x3150)!=x3151)<<x3152);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x3174 = -3151;
	int32_t x3175 = INT32_MIN;
	uint32_t x3176 = 1U;
	int32_t t106 = 3267738;

    t106 = (((x3173>x3174)!=x3175)<<x3176);

    if (t106 != 2) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x3177 = -3;
	uint64_t x3179 = UINT64_MAX;
	uint8_t x3180 = 4U;
	int32_t t107 = 197;

    t107 = (((x3177>x3178)!=x3179)<<x3180);

    if (t107 != 16) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x3185 = -5;
	uint8_t x3186 = 110U;
	int16_t x3187 = -23;
	static int8_t x3188 = 13;
	int32_t t108 = 1646;

    t108 = (((x3185>x3186)!=x3187)<<x3188);

    if (t108 != 8192) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x3205 = -150;
	int16_t x3206 = 1;
	int8_t x3207 = INT8_MIN;
	volatile int32_t t109 = 1;

    t109 = (((x3205>x3206)!=x3207)<<x3208);

    if (t109 != 8) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x3217 = -5466077;
	uint16_t x3218 = 22657U;
	int32_t x3219 = -81234268;
	uint8_t x3220 = 19U;

    t110 = (((x3217>x3218)!=x3219)<<x3220);

    if (t110 != 524288) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x3221 = 7;
	volatile uint16_t x3222 = 15668U;
	static uint64_t x3223 = 36967431895719LLU;
	int32_t t111 = -2;

    t111 = (((x3221>x3222)!=x3223)<<x3224);

    if (t111 != 1024) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x3229 = 3772U;
	static int8_t x3230 = -1;
	int8_t x3232 = 11;
	int32_t t112 = -923378;

    t112 = (((x3229>x3230)!=x3231)<<x3232);

    if (t112 != 2048) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x3365 = 108U;
	int32_t x3366 = INT32_MIN;
	uint8_t x3367 = 53U;
	volatile uint64_t x3368 = 18LLU;
	volatile int32_t t113 = 1659553;

    t113 = (((x3365>x3366)!=x3367)<<x3368);

    if (t113 != 262144) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint32_t x3397 = 197641238U;
	int8_t x3398 = -1;
	uint8_t x3400 = 6U;
	int32_t t114 = -385029755;

    t114 = (((x3397>x3398)!=x3399)<<x3400);

    if (t114 != 64) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x3417 = INT8_MAX;
	int64_t x3418 = 142005123251LL;
	static int8_t x3419 = INT8_MIN;
	static int16_t x3420 = 7;

    t115 = (((x3417>x3418)!=x3419)<<x3420);

    if (t115 != 128) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint16_t x3421 = 9359U;
	static uint32_t x3422 = 1092U;
	uint32_t x3423 = UINT32_MAX;
	int16_t x3424 = 6;
	int32_t t116 = 31865668;

    t116 = (((x3421>x3422)!=x3423)<<x3424);

    if (t116 != 64) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint8_t x3501 = 5U;
	int8_t x3502 = INT8_MAX;

    t117 = (((x3501>x3502)!=x3503)<<x3504);

    if (t117 != 2) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x3529 = INT16_MAX;
	uint8_t x3530 = UINT8_MAX;
	int32_t x3531 = -1;
	int32_t t118 = 1241;

    t118 = (((x3529>x3530)!=x3531)<<x3532);

    if (t118 != 8) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x3637 = INT16_MAX;
	uint16_t x3638 = 27U;
	int8_t x3639 = 1;
	int8_t x3640 = 1;

    t119 = (((x3637>x3638)!=x3639)<<x3640);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x3683 = INT8_MIN;
	static volatile int8_t x3684 = 4;
	volatile int32_t t120 = 85652552;

    t120 = (((x3681>x3682)!=x3683)<<x3684);

    if (t120 != 16) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile uint8_t x3709 = 1U;
	int64_t x3710 = INT64_MAX;
	int32_t x3711 = INT32_MAX;
	static uint32_t x3712 = 1U;

    t121 = (((x3709>x3710)!=x3711)<<x3712);

    if (t121 != 2) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x3735 = 1522304U;
	int8_t x3736 = 1;
	int32_t t122 = 3;

    t122 = (((x3733>x3734)!=x3735)<<x3736);

    if (t122 != 2) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x3757 = UINT8_MAX;
	static int32_t x3758 = INT32_MIN;
	uint8_t x3759 = UINT8_MAX;
	uint32_t x3760 = 24U;
	volatile int32_t t123 = 76871;

    t123 = (((x3757>x3758)!=x3759)<<x3760);

    if (t123 != 16777216) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile uint8_t x3785 = 0U;
	int32_t x3786 = INT32_MIN;
	volatile uint64_t x3787 = UINT64_MAX;
	static int16_t x3788 = 0;

    t124 = (((x3785>x3786)!=x3787)<<x3788);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x3845 = 8165222U;
	volatile int16_t x3846 = INT16_MIN;
	int16_t x3847 = INT16_MAX;
	int32_t t125 = 1944;

    t125 = (((x3845>x3846)!=x3847)<<x3848);

    if (t125 != 4) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x3906 = 24692069LL;
	uint32_t x3907 = UINT32_MAX;
	int8_t x3908 = 9;
	static volatile int32_t t126 = -1;

    t126 = (((x3905>x3906)!=x3907)<<x3908);

    if (t126 != 512) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint64_t x3925 = 50845730678728886LLU;
	int32_t x3926 = INT32_MIN;
	uint64_t x3927 = 741980203LLU;
	int32_t t127 = 4829;

    t127 = (((x3925>x3926)!=x3927)<<x3928);

    if (t127 != 2) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x3944 = 2;
	static volatile int32_t t128 = -12076248;

    t128 = (((x3941>x3942)!=x3943)<<x3944);

    if (t128 != 4) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x3981 = INT16_MAX;
	int16_t x3982 = INT16_MAX;
	static int8_t x3983 = INT8_MIN;
	uint16_t x3984 = 5U;
	volatile int32_t t129 = -443761;

    t129 = (((x3981>x3982)!=x3983)<<x3984);

    if (t129 != 32) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x3993 = INT32_MIN;
	volatile int32_t x3994 = INT32_MIN;
	uint8_t x3996 = 9U;
	volatile int32_t t130 = -30507456;

    t130 = (((x3993>x3994)!=x3995)<<x3996);

    if (t130 != 512) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x4025 = INT16_MAX;
	int32_t x4026 = -679216687;
	int32_t x4027 = INT32_MIN;

    t131 = (((x4025>x4026)!=x4027)<<x4028);

    if (t131 != 2) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x4045 = 14342U;
	static int32_t x4046 = INT32_MIN;
	volatile uint16_t x4047 = 82U;
	volatile int32_t t132 = -175228;

    t132 = (((x4045>x4046)!=x4047)<<x4048);

    if (t132 != 512) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x4061 = INT32_MAX;
	int64_t x4063 = INT64_MAX;
	uint8_t x4064 = 18U;

    t133 = (((x4061>x4062)!=x4063)<<x4064);

    if (t133 != 262144) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x4081 = INT8_MIN;
	static int16_t x4082 = -1;
	uint8_t x4083 = UINT8_MAX;
	uint64_t x4084 = 1LLU;

    t134 = (((x4081>x4082)!=x4083)<<x4084);

    if (t134 != 2) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint8_t x4101 = 15U;
	int16_t x4102 = INT16_MAX;
	int8_t x4103 = INT8_MAX;
	int32_t t135 = 3;

    t135 = (((x4101>x4102)!=x4103)<<x4104);

    if (t135 != 8) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x4125 = -2;
	int32_t x4126 = INT32_MIN;
	uint16_t x4128 = 11U;
	int32_t t136 = -288;

    t136 = (((x4125>x4126)!=x4127)<<x4128);

    if (t136 != 2048) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int8_t x4169 = INT8_MAX;
	volatile int32_t x4170 = INT32_MIN;
	volatile uint8_t x4172 = 1U;
	int32_t t137 = 994;

    t137 = (((x4169>x4170)!=x4171)<<x4172);

    if (t137 != 2) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x4173 = 38;
	uint64_t x4174 = 1047362LLU;
	int32_t x4176 = 1;
	static int32_t t138 = 740324959;

    t138 = (((x4173>x4174)!=x4175)<<x4176);

    if (t138 != 2) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x4182 = 466;
	uint64_t x4183 = 16218344722044LLU;
	uint64_t x4184 = 7LLU;
	int32_t t139 = 1;

    t139 = (((x4181>x4182)!=x4183)<<x4184);

    if (t139 != 128) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int64_t x4189 = INT64_MIN;
	int64_t x4190 = INT64_MIN;
	volatile int8_t x4191 = -2;
	uint8_t x4192 = 3U;
	volatile int32_t t140 = -12665;

    t140 = (((x4189>x4190)!=x4191)<<x4192);

    if (t140 != 8) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x4197 = 26330LL;
	uint8_t x4200 = 15U;

    t141 = (((x4197>x4198)!=x4199)<<x4200);

    if (t141 != 32768) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x4201 = 6;
	uint16_t x4204 = 6U;
	int32_t t142 = 649469;

    t142 = (((x4201>x4202)!=x4203)<<x4204);

    if (t142 != 64) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint32_t x4205 = 183U;
	static uint64_t x4206 = UINT64_MAX;
	static int8_t x4207 = -39;
	static uint16_t x4208 = 5U;

    t143 = (((x4205>x4206)!=x4207)<<x4208);

    if (t143 != 32) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x4282 = -1;
	int8_t x4283 = 10;
	static volatile int32_t t144 = 302856790;

    t144 = (((x4281>x4282)!=x4283)<<x4284);

    if (t144 != 1048576) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x4393 = INT8_MAX;
	int8_t x4394 = -1;
	uint32_t x4395 = UINT32_MAX;
	static int32_t t145 = 20770898;

    t145 = (((x4393>x4394)!=x4395)<<x4396);

    if (t145 != 67108864) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x4417 = 0;
	uint16_t x4418 = UINT16_MAX;
	int32_t x4419 = INT32_MIN;
	int16_t x4420 = 0;
	static volatile int32_t t146 = -362;

    t146 = (((x4417>x4418)!=x4419)<<x4420);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x4422 = 492969848LLU;
	int64_t x4423 = INT64_MIN;

    t147 = (((x4421>x4422)!=x4423)<<x4424);

    if (t147 != 4) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x4433 = -1;
	uint8_t x4434 = 77U;
	uint32_t x4436 = 20U;

    t148 = (((x4433>x4434)!=x4435)<<x4436);

    if (t148 != 1048576) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x4453 = INT16_MAX;
	volatile uint64_t x4454 = 34824016307132064LLU;
	volatile int16_t x4455 = INT16_MIN;
	volatile int32_t t149 = -2;

    t149 = (((x4453>x4454)!=x4455)<<x4456);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x4542 = 158U;
	int8_t x4543 = INT8_MAX;
	volatile uint16_t x4544 = 13U;
	volatile int32_t t150 = -8;

    t150 = (((x4541>x4542)!=x4543)<<x4544);

    if (t150 != 8192) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x4561 = 1;
	int8_t x4562 = INT8_MIN;
	uint32_t x4563 = UINT32_MAX;
	int32_t t151 = -1;

    t151 = (((x4561>x4562)!=x4563)<<x4564);

    if (t151 != 128) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x4565 = 14U;
	int32_t x4566 = INT32_MIN;
	static uint8_t x4567 = 3U;
	uint8_t x4568 = 2U;
	int32_t t152 = 0;

    t152 = (((x4565>x4566)!=x4567)<<x4568);

    if (t152 != 4) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x4593 = 6U;
	int8_t x4594 = -1;
	int16_t x4595 = 7705;
	uint16_t x4596 = 11U;
	volatile int32_t t153 = 58657;

    t153 = (((x4593>x4594)!=x4595)<<x4596);

    if (t153 != 2048) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile uint8_t x4613 = 1U;
	volatile int32_t t154 = -5336658;

    t154 = (((x4613>x4614)!=x4615)<<x4616);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x4649 = INT32_MIN;
	uint64_t x4650 = 1748284977342925LLU;
	int32_t x4651 = -16310;
	uint64_t x4652 = 7LLU;

    t155 = (((x4649>x4650)!=x4651)<<x4652);

    if (t155 != 128) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x4677 = 118U;
	volatile uint8_t x4678 = 5U;
	int16_t x4680 = 8;

    t156 = (((x4677>x4678)!=x4679)<<x4680);

    if (t156 != 256) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x4749 = UINT8_MAX;
	int16_t x4750 = 11502;
	int16_t x4751 = INT16_MIN;
	static uint8_t x4752 = 2U;
	volatile int32_t t157 = 986301;

    t157 = (((x4749>x4750)!=x4751)<<x4752);

    if (t157 != 4) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x4765 = -45;
	uint8_t x4768 = 3U;

    t158 = (((x4765>x4766)!=x4767)<<x4768);

    if (t158 != 8) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x4806 = INT16_MIN;
	int16_t x4807 = -1;
	uint64_t x4808 = 1LLU;
	volatile int32_t t159 = -1171;

    t159 = (((x4805>x4806)!=x4807)<<x4808);

    if (t159 != 2) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x4809 = INT8_MIN;
	int8_t x4811 = INT8_MAX;
	uint8_t x4812 = 0U;
	int32_t t160 = -707756;

    t160 = (((x4809>x4810)!=x4811)<<x4812);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x4837 = INT64_MIN;
	int16_t x4838 = INT16_MIN;
	int64_t x4839 = -845412103639129LL;
	static uint8_t x4840 = 27U;
	volatile int32_t t161 = 126702;

    t161 = (((x4837>x4838)!=x4839)<<x4840);

    if (t161 != 134217728) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x4897 = 1U;
	int16_t x4898 = -1;
	static volatile uint8_t x4900 = 3U;
	int32_t t162 = -11407;

    t162 = (((x4897>x4898)!=x4899)<<x4900);

    if (t162 != 8) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x4909 = -1;
	int8_t x4910 = -1;
	int64_t x4911 = -455316454391LL;
	volatile int32_t t163 = 1107;

    t163 = (((x4909>x4910)!=x4911)<<x4912);

    if (t163 != 4) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x4942 = 1;
	int32_t x4943 = INT32_MAX;
	volatile int32_t t164 = -40527861;

    t164 = (((x4941>x4942)!=x4943)<<x4944);

    if (t164 != 16384) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x4989 = 543;
	int8_t x4990 = INT8_MAX;
	static uint16_t x4992 = 6U;
	volatile int32_t t165 = 3;

    t165 = (((x4989>x4990)!=x4991)<<x4992);

    if (t165 != 64) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x5001 = UINT8_MAX;
	int16_t x5002 = 0;
	int32_t x5003 = INT32_MIN;
	static int16_t x5004 = 4;

    t166 = (((x5001>x5002)!=x5003)<<x5004);

    if (t166 != 16) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x5089 = INT8_MAX;
	int8_t x5090 = -59;
	volatile uint16_t x5091 = 11U;
	uint16_t x5092 = 26U;

    t167 = (((x5089>x5090)!=x5091)<<x5092);

    if (t167 != 67108864) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint8_t x5106 = 122U;
	uint32_t x5107 = 7862242U;
	static volatile uint8_t x5108 = 10U;
	volatile int32_t t168 = 317822240;

    t168 = (((x5105>x5106)!=x5107)<<x5108);

    if (t168 != 1024) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x5118 = -37;
	uint32_t x5119 = 770546U;
	int32_t x5120 = 26;

    t169 = (((x5117>x5118)!=x5119)<<x5120);

    if (t169 != 67108864) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x5125 = UINT16_MAX;
	static int32_t x5126 = -1;
	int32_t x5127 = INT32_MAX;
	int8_t x5128 = 0;
	volatile int32_t t170 = -674;

    t170 = (((x5125>x5126)!=x5127)<<x5128);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x5177 = -1;
	uint64_t x5178 = 53947100680203LLU;
	int16_t x5179 = INT16_MIN;
	static uint32_t x5180 = 18U;
	int32_t t171 = -7917794;

    t171 = (((x5177>x5178)!=x5179)<<x5180);

    if (t171 != 262144) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int16_t x5186 = -394;
	int32_t x5187 = -1;
	volatile int32_t t172 = 3547;

    t172 = (((x5185>x5186)!=x5187)<<x5188);

    if (t172 != 536870912) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x5226 = INT64_MIN;
	int32_t x5227 = 10232544;
	static uint8_t x5228 = 1U;
	static int32_t t173 = 1714922;

    t173 = (((x5225>x5226)!=x5227)<<x5228);

    if (t173 != 2) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x5241 = INT32_MIN;
	int32_t x5242 = -10228;
	int8_t x5243 = -1;
	int8_t x5244 = 20;
	volatile int32_t t174 = -3;

    t174 = (((x5241>x5242)!=x5243)<<x5244);

    if (t174 != 1048576) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x5270 = INT32_MAX;
	volatile int16_t x5271 = INT16_MIN;
	int8_t x5272 = 0;
	static volatile int32_t t175 = 825203;

    t175 = (((x5269>x5270)!=x5271)<<x5272);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x5281 = -1;
	int16_t x5282 = INT16_MIN;
	uint16_t x5284 = 5U;
	int32_t t176 = -535;

    t176 = (((x5281>x5282)!=x5283)<<x5284);

    if (t176 != 32) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint16_t x5305 = 1U;
	volatile int16_t x5307 = INT16_MAX;
	int8_t x5308 = 0;

    t177 = (((x5305>x5306)!=x5307)<<x5308);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x5334 = INT16_MAX;
	int16_t x5335 = INT16_MAX;
	int8_t x5336 = 0;
	static volatile int32_t t178 = -167197;

    t178 = (((x5333>x5334)!=x5335)<<x5336);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x5361 = -4;
	int16_t x5362 = -44;
	int8_t x5363 = -1;
	static int16_t x5364 = 14;
	int32_t t179 = 412800121;

    t179 = (((x5361>x5362)!=x5363)<<x5364);

    if (t179 != 16384) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x5417 = 425U;
	int16_t x5418 = INT16_MAX;
	static int8_t x5419 = INT8_MIN;
	volatile int16_t x5420 = 1;
	volatile int32_t t180 = 0;

    t180 = (((x5417>x5418)!=x5419)<<x5420);

    if (t180 != 2) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint8_t x5461 = 95U;
	uint16_t x5463 = UINT16_MAX;
	int8_t x5464 = 28;
	int32_t t181 = 6;

    t181 = (((x5461>x5462)!=x5463)<<x5464);

    if (t181 != 268435456) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x5497 = INT32_MAX;
	static int32_t x5498 = INT32_MAX;
	uint8_t x5500 = 11U;

    t182 = (((x5497>x5498)!=x5499)<<x5500);

    if (t182 != 2048) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x5545 = INT64_MIN;
	int8_t x5546 = INT8_MIN;
	uint8_t x5548 = 3U;

    t183 = (((x5545>x5546)!=x5547)<<x5548);

    if (t183 != 8) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x5610 = INT16_MAX;
	static int8_t x5611 = INT8_MIN;
	uint16_t x5612 = 7U;

    t184 = (((x5609>x5610)!=x5611)<<x5612);

    if (t184 != 128) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x5617 = UINT16_MAX;
	int16_t x5618 = 0;
	static int32_t t185 = -367111;

    t185 = (((x5617>x5618)!=x5619)<<x5620);

    if (t185 != 134217728) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x5621 = INT64_MIN;
	int8_t x5622 = -1;
	static volatile int64_t x5623 = -1LL;
	uint8_t x5624 = 30U;
	static volatile int32_t t186 = 2948779;

    t186 = (((x5621>x5622)!=x5623)<<x5624);

    if (t186 != 1073741824) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x5649 = 5U;
	static volatile int64_t x5650 = -2094732322461587LL;
	static volatile int8_t x5651 = INT8_MAX;
	uint8_t x5652 = 26U;
	volatile int32_t t187 = 627;

    t187 = (((x5649>x5650)!=x5651)<<x5652);

    if (t187 != 67108864) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x5657 = 18489554U;
	int16_t x5658 = INT16_MIN;
	int16_t x5659 = INT16_MIN;
	int8_t x5660 = 0;
	volatile int32_t t188 = -259300;

    t188 = (((x5657>x5658)!=x5659)<<x5660);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x5697 = -1;
	static volatile uint64_t x5698 = UINT64_MAX;
	int8_t x5699 = INT8_MIN;
	static volatile uint8_t x5700 = 0U;
	int32_t t189 = 296108715;

    t189 = (((x5697>x5698)!=x5699)<<x5700);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint64_t x5751 = 417594339758LLU;
	int16_t x5752 = 0;
	static int32_t t190 = -166;

    t190 = (((x5749>x5750)!=x5751)<<x5752);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x5789 = INT32_MIN;
	int8_t x5790 = -1;
	volatile int8_t x5792 = 2;
	volatile int32_t t191 = 578642;

    t191 = (((x5789>x5790)!=x5791)<<x5792);

    if (t191 != 4) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x5793 = -1;
	uint16_t x5794 = 16953U;
	uint32_t x5796 = 0U;
	int32_t t192 = 206;

    t192 = (((x5793>x5794)!=x5795)<<x5796);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x5801 = UINT64_MAX;
	uint8_t x5802 = UINT8_MAX;
	int8_t x5803 = -1;
	uint32_t x5804 = 1U;

    t193 = (((x5801>x5802)!=x5803)<<x5804);

    if (t193 != 2) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x5833 = -1;
	uint8_t x5835 = 2U;
	int8_t x5836 = 11;
	static int32_t t194 = -1014465504;

    t194 = (((x5833>x5834)!=x5835)<<x5836);

    if (t194 != 2048) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x5937 = -37;
	static int8_t x5938 = INT8_MIN;
	int32_t x5939 = INT32_MIN;
	static volatile uint16_t x5940 = 18U;
	int32_t t195 = 17086;

    t195 = (((x5937>x5938)!=x5939)<<x5940);

    if (t195 != 262144) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x5953 = INT64_MIN;
	static uint8_t x5954 = 29U;
	static int32_t x5955 = INT32_MAX;
	volatile int32_t t196 = 12;

    t196 = (((x5953>x5954)!=x5955)<<x5956);

    if (t196 != 1073741824) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint64_t x5973 = 6523926778418385389LLU;
	int16_t x5974 = -131;
	int16_t x5975 = INT16_MAX;
	uint32_t x5976 = 1U;
	int32_t t197 = 7;

    t197 = (((x5973>x5974)!=x5975)<<x5976);

    if (t197 != 2) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x5985 = INT16_MAX;
	uint64_t x5986 = 374723680075LLU;
	volatile int64_t x5987 = 783262048613645LL;
	uint16_t x5988 = 1U;
	int32_t t198 = -3683745;

    t198 = (((x5985>x5986)!=x5987)<<x5988);

    if (t198 != 2) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x6009 = INT64_MAX;
	static int16_t x6010 = -1;
	static int8_t x6011 = INT8_MIN;
	uint32_t x6012 = 7U;
	int32_t t199 = 530232;

    t199 = (((x6009>x6010)!=x6011)<<x6012);

    if (t199 != 128) { NG(); } else { ; }
	
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

