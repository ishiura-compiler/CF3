
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

static int8_t x168 = -1;
int8_t x187 = -1;
volatile int16_t x217 = INT16_MAX;
uint32_t x227 = 1U;
uint16_t x228 = 20U;
int8_t x234 = INT8_MIN;
int64_t x235 = INT64_MIN;
static volatile int64_t x295 = -1LL;
static uint64_t x329 = UINT64_MAX;
uint64_t x330 = 1849LLU;
static volatile uint64_t t8 = 8460158LLU;
static int64_t x377 = -1237015LL;
int32_t x422 = INT32_MIN;
uint8_t x434 = 127U;
static uint64_t t11 = 32249665836LLU;
static uint64_t x762 = UINT64_MAX;
static int8_t x813 = -1;
volatile int8_t x814 = -1;
volatile int32_t t17 = 8;
static int8_t x1030 = -1;
int8_t x1232 = INT8_MIN;
static uint8_t x1282 = 88U;
int32_t t24 = 110386;
int64_t x1397 = INT64_MIN;
static int32_t x1398 = -1;
volatile uint32_t x1400 = UINT32_MAX;
int16_t x1443 = 31;
volatile int64_t x1650 = -1LL;
uint16_t x1750 = 1615U;
volatile uint32_t t29 = 7278052U;
int32_t t30 = -3481;
uint8_t x2098 = 2U;
int64_t x2100 = -1LL;
int16_t x2597 = INT16_MIN;
uint64_t x2598 = 1422LLU;
uint8_t x2600 = 0U;
volatile uint64_t t35 = 478333LLU;
volatile int64_t t38 = 341312LL;
volatile int64_t x3165 = 1943LL;
static int16_t x3183 = -16;
int32_t x3620 = 8;
volatile int8_t x3841 = INT8_MIN;
int64_t x3842 = -1LL;
uint16_t x3905 = 738U;
uint16_t x4037 = 43U;
uint8_t x4308 = UINT8_MAX;
volatile int32_t t55 = -121282;
int64_t x4451 = -1LL;
int8_t x4452 = -1;
static uint32_t x4462 = 11237521U;
static int8_t x4463 = -1;
uint32_t t57 = 440508346U;
volatile int64_t x4536 = INT64_MIN;
static int64_t x4813 = INT64_MAX;
int16_t x4815 = 1;
int8_t x4979 = -1;
uint64_t x4980 = UINT64_MAX;
volatile int32_t t60 = -249378;
uint32_t x5097 = UINT32_MAX;
uint8_t x5098 = 1U;
uint32_t x5099 = UINT32_MAX;
uint32_t x5100 = UINT32_MAX;
volatile int64_t x5259 = -1LL;
static int16_t x5284 = -1;
int16_t x5341 = -5;
volatile uint8_t x5356 = 2U;
uint32_t x5361 = 9U;
int8_t x5401 = INT8_MIN;
uint64_t x5402 = 5LLU;
int16_t x5654 = -1;
volatile int32_t t70 = -95361490;
volatile int64_t x5674 = INT64_MIN;
static int8_t x5730 = 1;
int16_t x5747 = -1;
static volatile uint32_t x5873 = 93U;
volatile int8_t x5901 = INT8_MAX;
uint64_t t76 = 51465280613203598LLU;
int64_t x5953 = 77543896LL;
int8_t x5956 = -1;
static volatile int8_t x6064 = 23;
int16_t x6143 = -1;
int32_t x6219 = INT32_MIN;
static int16_t x6342 = -1;
int32_t x6344 = INT32_MIN;
static uint8_t x6646 = 11U;
static int64_t x6647 = INT64_MAX;
int64_t x6648 = INT64_MAX;
volatile int8_t x6678 = INT8_MIN;
int16_t x6679 = -1;
static uint16_t x6802 = 126U;
uint16_t x6803 = UINT16_MAX;
static volatile uint16_t x6804 = UINT16_MAX;
int64_t x6873 = -1LL;
static int64_t t90 = -127166790608000LL;
static int16_t x6939 = INT16_MIN;
static int8_t x6973 = -3;
int32_t x6974 = -1;
volatile int32_t x6975 = INT32_MAX;
uint16_t x7022 = UINT16_MAX;
uint64_t x7050 = 1063577888LLU;
int16_t x7051 = -1;
uint64_t t94 = 71951LLU;
static uint64_t x7249 = 30076LLU;
static uint64_t x7485 = 3099583543298692LLU;
volatile uint64_t t100 = 47066591007LLU;
int16_t x7821 = -4;
uint32_t x8166 = UINT32_MAX;
int16_t x8168 = INT16_MIN;
uint64_t x8171 = UINT64_MAX;
static int64_t x8330 = 2LL;
int8_t x8331 = -1;
int64_t t107 = 1LL;
volatile int64_t x8605 = 117972LL;
uint64_t t110 = 7344217112LLU;
static int32_t x8676 = INT32_MIN;
int32_t t111 = -69;
int16_t x8785 = -1;
volatile int64_t x9081 = INT64_MAX;
int16_t x9221 = INT16_MIN;
uint8_t x9224 = 19U;
int16_t x9410 = INT16_MIN;
static int32_t x9444 = -1;
uint32_t x9454 = UINT32_MAX;
static int8_t x9487 = INT8_MIN;
volatile int8_t x9488 = INT8_MIN;
volatile int64_t t125 = 0LL;
int32_t t127 = 0;
int8_t x9977 = -50;
int8_t x10162 = -1;
uint8_t x10194 = 21U;
volatile int64_t x10195 = -1LL;
int16_t x10196 = -1;
static int32_t x10250 = -323042436;
uint64_t t134 = 12LLU;
uint8_t x10476 = 39U;
static int16_t x10840 = -1;
uint64_t x11000 = UINT64_MAX;
static int8_t x11118 = 1;
int64_t x11128 = -1LL;
int16_t x11238 = -1;
int32_t t144 = 157;
static uint64_t x11258 = 519897789LLU;
volatile uint64_t t145 = 616904245LLU;
volatile uint8_t x11417 = 11U;
int32_t x11462 = -14029;
int16_t x11464 = INT16_MAX;
volatile int64_t t148 = -5812LL;
int16_t x11653 = INT16_MAX;
int8_t x11655 = 1;
volatile int32_t t149 = -52;
uint64_t t150 = 342304691906309916LLU;
uint8_t x11847 = 2U;
int64_t x11873 = 0LL;
int64_t t154 = -7574555979LL;
volatile uint16_t x11909 = 1004U;
static volatile int32_t x11910 = INT32_MIN;
int64_t x11927 = -1LL;
int8_t x12004 = -27;
uint16_t x12014 = 1031U;
uint64_t x12177 = 86309637079259846LLU;
static volatile uint32_t x12206 = UINT32_MAX;
static uint64_t x12208 = UINT64_MAX;
uint64_t x12212 = UINT64_MAX;
uint64_t x12279 = UINT64_MAX;
volatile uint64_t t163 = 425276639LLU;
uint16_t x12297 = 11U;
uint64_t x12298 = 2LLU;
int8_t x12299 = 10;
volatile int8_t x12364 = INT8_MAX;
int32_t x12386 = 384;
uint64_t x12387 = UINT64_MAX;
int64_t t166 = -2868056746364984104LL;
uint32_t x12615 = UINT32_MAX;
volatile uint32_t x12635 = UINT32_MAX;
uint8_t x12798 = 18U;
volatile int8_t x12855 = INT8_MIN;
int64_t x12901 = INT64_MIN;
volatile uint8_t x12969 = UINT8_MAX;
int64_t x12971 = INT64_MIN;
uint32_t x13013 = 192217U;
uint32_t x13283 = UINT32_MAX;
int32_t x13319 = INT32_MIN;
int32_t t179 = -18474703;
int32_t x13374 = -1934883;
volatile int32_t x13376 = -1;
volatile int32_t t180 = 0;
int64_t t183 = -42831LL;
static volatile uint64_t t185 = 12LLU;
volatile uint32_t t186 = 12U;
uint64_t x13841 = 7760865602029518LLU;
volatile uint16_t x13842 = 1819U;
volatile int64_t x13854 = INT64_MIN;
int32_t x13855 = -1;
volatile uint8_t x13961 = 120U;
uint64_t t190 = 621802LLU;
int16_t x14006 = INT16_MIN;
uint64_t t191 = 561321493555910LLU;
int32_t x14073 = -1;
uint8_t x14129 = 2U;
int8_t x14190 = INT8_MIN;
int8_t x14191 = -1;
uint8_t x14456 = 11U;
volatile int64_t t197 = -6929523693LL;
int64_t x14785 = INT64_MIN;
int16_t x14787 = 7;


void f0(void) {
    	uint8_t x17 = 12U;
	int64_t x18 = -1408841648345471937LL;
	int64_t x19 = INT64_MIN;
	int64_t x20 = INT64_MIN;
	volatile int64_t t0 = 2232171147LL;

    t0 = ((x17%x18)<<(x19^x20));

    if (t0 != 12LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x165 = INT32_MAX;
	volatile int32_t x166 = INT32_MIN;
	uint32_t x167 = UINT32_MAX;
	int32_t t1 = INT32_MAX;

    t1 = ((x165%x166)<<(x167^x168));

    if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x185 = UINT64_MAX;
	int64_t x186 = -1LL;
	static uint64_t x188 = UINT64_MAX;
	volatile uint64_t t2 = 102449323519LLU;

    t2 = ((x185%x186)<<(x187^x188));

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x218 = INT8_MIN;
	int8_t x219 = 6;
	volatile int16_t x220 = 11;
	static volatile int32_t t3 = -630846076;

    t3 = ((x217%x218)<<(x219^x220));

    if (t3 != 1040384) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x225 = INT8_MAX;
	volatile int16_t x226 = INT16_MIN;
	static volatile int32_t t4 = 116167804;

    t4 = ((x225%x226)<<(x227^x228));

    if (t4 != 266338304) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x233 = INT32_MAX;
	int64_t x236 = INT64_MIN;
	volatile int32_t t5 = 5760046;

    t5 = ((x233%x234)<<(x235^x236));

    if (t5 != 127) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x293 = UINT16_MAX;
	static int8_t x294 = -1;
	int8_t x296 = -1;
	int32_t t6 = 26314668;

    t6 = ((x293%x294)<<(x295^x296));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint8_t x331 = 16U;
	static int16_t x332 = 0;
	uint64_t t7 = 2LLU;

    t7 = ((x329%x330)<<(x331^x332));

    if (t7 != 30801920LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x349 = INT16_MIN;
	static uint64_t x350 = 812954961450LLU;
	volatile uint32_t x351 = UINT32_MAX;
	int8_t x352 = -15;

    t8 = ((x349%x350)<<(x351^x352));

    if (t8 != 1892380824338432LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x378 = -1;
	static int32_t x379 = -1;
	int64_t x380 = -1LL;
	static int64_t t9 = -584405999512LL;

    t9 = ((x377%x378)<<(x379^x380));

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile uint32_t x421 = UINT32_MAX;
	int32_t x423 = -1;
	uint64_t x424 = UINT64_MAX;
	uint32_t t10 = 967U;

    t10 = ((x421%x422)<<(x423^x424));

    if (t10 != 2147483647U) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile uint64_t x433 = 19LLU;
	uint64_t x435 = UINT64_MAX;
	static int64_t x436 = -1LL;

    t11 = ((x433%x434)<<(x435^x436));

    if (t11 != 19LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x597 = 1U;
	int64_t x598 = INT64_MIN;
	uint8_t x599 = 0U;
	static uint16_t x600 = 18U;
	int64_t t12 = 40056LL;

    t12 = ((x597%x598)<<(x599^x600));

    if (t12 != 262144LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint32_t x669 = 168U;
	volatile uint32_t x670 = UINT32_MAX;
	int16_t x671 = -1;
	int32_t x672 = -1;
	volatile uint32_t t13 = 367088U;

    t13 = ((x669%x670)<<(x671^x672));

    if (t13 != 168U) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x761 = INT64_MIN;
	volatile int8_t x763 = -15;
	volatile uint32_t x764 = UINT32_MAX;
	volatile uint64_t t14 = 2277742760LLU;

    t14 = ((x761%x762)<<(x763^x764));

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile uint16_t x815 = 22U;
	static uint8_t x816 = 0U;
	int32_t t15 = 685644;

    t15 = ((x813%x814)<<(x815^x816));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x817 = 4204382236979174439LLU;
	volatile int32_t x818 = 983;
	static uint8_t x819 = 1U;
	static uint8_t x820 = 7U;
	uint64_t t16 = 95335LLU;

    t16 = ((x817%x818)<<(x819^x820));

    if (t16 != 41024LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x861 = INT8_MAX;
	uint16_t x862 = 2444U;
	int64_t x863 = 1LL;
	uint16_t x864 = 7U;

    t17 = ((x861%x862)<<(x863^x864));

    if (t17 != 8128) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint16_t x873 = 4U;
	int64_t x874 = INT64_MIN;
	int32_t x875 = INT32_MIN;
	int32_t x876 = INT32_MIN;
	static int64_t t18 = -2379356342LL;

    t18 = ((x873%x874)<<(x875^x876));

    if (t18 != 4LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x1013 = INT16_MAX;
	int32_t x1014 = INT32_MIN;
	static int8_t x1015 = 0;
	volatile int32_t x1016 = 4;
	static volatile int32_t t19 = 426;

    t19 = ((x1013%x1014)<<(x1015^x1016));

    if (t19 != 524272) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x1029 = 92317121;
	int16_t x1031 = -22;
	static int8_t x1032 = -1;
	int32_t t20 = 273048;

    t20 = ((x1029%x1030)<<(x1031^x1032));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x1169 = 525713828965247565LL;
	int32_t x1170 = INT32_MIN;
	int16_t x1171 = -1;
	volatile int8_t x1172 = -1;
	static volatile int64_t t21 = 14LL;

    t21 = ((x1169%x1170)<<(x1171^x1172));

    if (t21 != 754707021LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x1225 = UINT8_MAX;
	int32_t x1226 = -27;
	int8_t x1227 = -1;
	static volatile uint64_t x1228 = UINT64_MAX;
	static volatile int32_t t22 = 14112;

    t22 = ((x1225%x1226)<<(x1227^x1228));

    if (t22 != 12) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x1229 = 1122017781U;
	uint64_t x1230 = 440236516432958106LLU;
	volatile int8_t x1231 = INT8_MIN;
	uint64_t t23 = 824897925978LLU;

    t23 = ((x1229%x1230)<<(x1231^x1232));

    if (t23 != 1122017781LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x1281 = 20358685;
	volatile int16_t x1283 = INT16_MAX;
	volatile int16_t x1284 = INT16_MAX;

    t24 = ((x1281%x1282)<<(x1283^x1284));

    if (t24 != 61) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x1317 = 778LLU;
	uint64_t x1318 = 1990550LLU;
	uint8_t x1319 = 0U;
	int8_t x1320 = 1;
	static volatile uint64_t t25 = 3791344LLU;

    t25 = ((x1317%x1318)<<(x1319^x1320));

    if (t25 != 1556LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x1399 = -1;
	int64_t t26 = 1243769946927484550LL;

    t26 = ((x1397%x1398)<<(x1399^x1400));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x1441 = UINT32_MAX;
	int8_t x1442 = -8;
	uint8_t x1444 = 5U;
	volatile uint32_t t27 = 1483237124U;

    t27 = ((x1441%x1442)<<(x1443^x1444));

    if (t27 != 469762048U) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x1649 = INT8_MIN;
	int64_t x1651 = -1LL;
	static int8_t x1652 = -36;
	int64_t t28 = -131136840LL;

    t28 = ((x1649%x1650)<<(x1651^x1652));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint32_t x1749 = UINT32_MAX;
	int16_t x1751 = -1;
	int16_t x1752 = -1;

    t29 = ((x1749%x1750)<<(x1751^x1752));

    if (t29 != 765U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x1825 = UINT8_MAX;
	int32_t x1826 = INT32_MIN;
	int8_t x1827 = INT8_MIN;
	volatile int8_t x1828 = INT8_MIN;

    t30 = ((x1825%x1826)<<(x1827^x1828));

    if (t30 != 255) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x2009 = UINT8_MAX;
	static int16_t x2010 = -1;
	int16_t x2011 = -1;
	uint64_t x2012 = UINT64_MAX;
	int32_t t31 = -257823637;

    t31 = ((x2009%x2010)<<(x2011^x2012));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x2097 = INT8_MAX;
	volatile int32_t x2099 = -1;
	int32_t t32 = 133;

    t32 = ((x2097%x2098)<<(x2099^x2100));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x2277 = 114U;
	int8_t x2278 = INT8_MIN;
	static int32_t x2279 = INT32_MIN;
	int32_t x2280 = INT32_MIN;
	int32_t t33 = -186894;

    t33 = ((x2277%x2278)<<(x2279^x2280));

    if (t33 != 114) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x2425 = UINT8_MAX;
	int16_t x2426 = -7914;
	int8_t x2427 = -1;
	int64_t x2428 = -1LL;
	int32_t t34 = 1;

    t34 = ((x2425%x2426)<<(x2427^x2428));

    if (t34 != 255) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x2599 = 1U;

    t35 = ((x2597%x2598)<<(x2599^x2600));

    if (t35 != 2032LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint64_t x2621 = 23616950069661LLU;
	static volatile uint32_t x2622 = 2108006U;
	static uint8_t x2623 = 12U;
	uint16_t x2624 = 4U;
	uint64_t t36 = 17322459LLU;

    t36 = ((x2621%x2622)<<(x2623^x2624));

    if (t36 != 465135872LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x2641 = INT8_MIN;
	static volatile int8_t x2642 = 16;
	volatile int16_t x2643 = -1;
	int8_t x2644 = -1;
	volatile int32_t t37 = 195;

    t37 = ((x2641%x2642)<<(x2643^x2644));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x2685 = INT64_MIN;
	int32_t x2686 = -1;
	uint8_t x2687 = UINT8_MAX;
	uint8_t x2688 = UINT8_MAX;

    t38 = ((x2685%x2686)<<(x2687^x2688));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x2781 = INT32_MAX;
	int8_t x2782 = -1;
	volatile int64_t x2783 = INT64_MIN;
	int64_t x2784 = INT64_MIN;
	int32_t t39 = 1;

    t39 = ((x2781%x2782)<<(x2783^x2784));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint64_t x3137 = UINT64_MAX;
	int16_t x3138 = INT16_MIN;
	static int32_t x3139 = 6;
	int8_t x3140 = 1;
	volatile uint64_t t40 = 26LLU;

    t40 = ((x3137%x3138)<<(x3139^x3140));

    if (t40 != 4194176LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x3166 = INT8_MIN;
	uint64_t x3167 = UINT64_MAX;
	volatile int8_t x3168 = -4;
	volatile int64_t t41 = 91560076865LL;

    t41 = ((x3165%x3166)<<(x3167^x3168));

    if (t41 != 184LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint32_t x3181 = 35853387U;
	uint64_t x3182 = UINT64_MAX;
	int64_t x3184 = -1LL;
	uint64_t t42 = 6080LLU;

    t42 = ((x3181%x3182)<<(x3183^x3184));

    if (t42 != 1174843785216LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x3381 = INT8_MIN;
	int64_t x3382 = -1LL;
	static int32_t x3383 = INT32_MAX;
	int32_t x3384 = INT32_MAX;
	int64_t t43 = -91419619LL;

    t43 = ((x3381%x3382)<<(x3383^x3384));

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint8_t x3513 = 2U;
	volatile int32_t x3514 = INT32_MIN;
	uint64_t x3515 = UINT64_MAX;
	volatile int32_t x3516 = -1;
	volatile int32_t t44 = 0;

    t44 = ((x3513%x3514)<<(x3515^x3516));

    if (t44 != 2) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x3573 = INT32_MAX;
	uint32_t x3574 = 1U;
	uint64_t x3575 = UINT64_MAX;
	int64_t x3576 = -1LL;
	uint32_t t45 = 240656216U;

    t45 = ((x3573%x3574)<<(x3575^x3576));

    if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x3617 = 26U;
	int16_t x3618 = INT16_MAX;
	uint8_t x3619 = 2U;
	volatile uint32_t t46 = 61518961U;

    t46 = ((x3617%x3618)<<(x3619^x3620));

    if (t46 != 26624U) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x3637 = UINT32_MAX;
	int64_t x3638 = INT64_MIN;
	volatile uint32_t x3639 = 4U;
	uint8_t x3640 = 4U;
	int64_t t47 = 717072677741LL;

    t47 = ((x3637%x3638)<<(x3639^x3640));

    if (t47 != 4294967295LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x3641 = INT8_MAX;
	int8_t x3642 = -1;
	int32_t x3643 = -1;
	volatile uint64_t x3644 = UINT64_MAX;
	volatile int32_t t48 = 87870488;

    t48 = ((x3641%x3642)<<(x3643^x3644));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x3645 = INT8_MIN;
	static int8_t x3646 = -1;
	int8_t x3647 = -1;
	int8_t x3648 = -1;
	volatile int32_t t49 = -757;

    t49 = ((x3645%x3646)<<(x3647^x3648));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint64_t x3649 = 108948224787LLU;
	uint64_t x3650 = 233353722LLU;
	int8_t x3651 = INT8_MIN;
	static volatile int8_t x3652 = INT8_MIN;
	volatile uint64_t t50 = 943LLU;

    t50 = ((x3649%x3650)<<(x3651^x3652));

    if (t50 != 205390335LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x3843 = -1;
	uint32_t x3844 = UINT32_MAX;
	volatile int64_t t51 = -460151LL;

    t51 = ((x3841%x3842)<<(x3843^x3844));

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x3906 = INT64_MAX;
	int32_t x3907 = -1;
	static uint64_t x3908 = UINT64_MAX;
	volatile int64_t t52 = 63933627LL;

    t52 = ((x3905%x3906)<<(x3907^x3908));

    if (t52 != 738LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x4038 = 46625733374225LLU;
	int16_t x4039 = -17;
	volatile int32_t x4040 = -1;
	uint64_t t53 = 27726666LLU;

    t53 = ((x4037%x4038)<<(x4039^x4040));

    if (t53 != 2818048LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x4245 = 447532LL;
	volatile int8_t x4246 = INT8_MIN;
	int64_t x4247 = INT64_MIN;
	volatile int64_t x4248 = INT64_MIN;
	int64_t t54 = 104687713168LL;

    t54 = ((x4245%x4246)<<(x4247^x4248));

    if (t54 != 44LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x4305 = INT8_MIN;
	int8_t x4306 = -1;
	uint8_t x4307 = UINT8_MAX;

    t55 = ((x4305%x4306)<<(x4307^x4308));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x4449 = 1220575624LLU;
	int8_t x4450 = 53;
	static uint64_t t56 = 477LLU;

    t56 = ((x4449%x4450)<<(x4451^x4452));

    if (t56 != 40LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x4461 = UINT32_MAX;
	int16_t x4464 = -1;

    t57 = ((x4461%x4462)<<(x4463^x4464));

    if (t57 != 2234273U) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint8_t x4533 = 6U;
	int64_t x4534 = INT64_MIN;
	int64_t x4535 = INT64_MIN;
	static volatile int64_t t58 = 1205431474LL;

    t58 = ((x4533%x4534)<<(x4535^x4536));

    if (t58 != 6LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x4814 = -255677622LL;
	volatile int8_t x4816 = 0;
	volatile int64_t t59 = 8450723258643196LL;

    t59 = ((x4813%x4814)<<(x4815^x4816));

    if (t59 != 415952234LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x4977 = INT8_MAX;
	int8_t x4978 = INT8_MIN;

    t60 = ((x4977%x4978)<<(x4979^x4980));

    if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint32_t t61 = 108584U;

    t61 = ((x5097%x5098)<<(x5099^x5100));

    if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile uint16_t x5257 = UINT16_MAX;
	int8_t x5258 = INT8_MIN;
	volatile int64_t x5260 = -1LL;
	volatile int32_t t62 = -3717;

    t62 = ((x5257%x5258)<<(x5259^x5260));

    if (t62 != 127) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x5281 = 13U;
	int8_t x5282 = INT8_MIN;
	int16_t x5283 = -4;
	int32_t t63 = 126404;

    t63 = ((x5281%x5282)<<(x5283^x5284));

    if (t63 != 104) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x5305 = INT64_MIN;
	uint64_t x5306 = 305653697550107271LLU;
	int8_t x5307 = -1;
	int8_t x5308 = -36;
	static volatile uint64_t t64 = 205433541LLU;

    t64 = ((x5305%x5306)<<(x5307^x5308));

    if (t64 != 7629556746150739968LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x5342 = -1;
	volatile int16_t x5343 = -1;
	int8_t x5344 = -25;
	volatile int32_t t65 = -475665;

    t65 = ((x5341%x5342)<<(x5343^x5344));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x5353 = 8455177968410022LLU;
	int64_t x5354 = -49750LL;
	uint8_t x5355 = 7U;
	uint64_t t66 = 958LLU;

    t66 = ((x5353%x5354)<<(x5355^x5356));

    if (t66 != 270565694989120704LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x5362 = INT8_MAX;
	int8_t x5363 = 27;
	uint8_t x5364 = 1U;
	volatile uint32_t t67 = 2748407U;

    t67 = ((x5361%x5362)<<(x5363^x5364));

    if (t67 != 603979776U) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x5403 = INT64_MIN;
	int64_t x5404 = INT64_MIN;
	volatile uint64_t t68 = 32191439153852LLU;

    t68 = ((x5401%x5402)<<(x5403^x5404));

    if (t68 != 3LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x5521 = 124590U;
	int64_t x5522 = INT64_MIN;
	uint32_t x5523 = UINT32_MAX;
	volatile int8_t x5524 = -1;
	int64_t t69 = 2025913142867195LL;

    t69 = ((x5521%x5522)<<(x5523^x5524));

    if (t69 != 124590LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x5653 = INT32_MIN;
	static uint8_t x5655 = 21U;
	uint8_t x5656 = 2U;

    t70 = ((x5653%x5654)<<(x5655^x5656));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x5673 = INT64_MIN;
	int8_t x5675 = 1;
	int16_t x5676 = 7;
	int64_t t71 = -625845LL;

    t71 = ((x5673%x5674)<<(x5675^x5676));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x5729 = INT8_MAX;
	volatile int32_t x5731 = -1;
	int32_t x5732 = -1;
	int32_t t72 = 3311;

    t72 = ((x5729%x5730)<<(x5731^x5732));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x5745 = 188299293086881496LLU;
	int16_t x5746 = INT16_MIN;
	int16_t x5748 = -1;
	static volatile uint64_t t73 = 8727381LLU;

    t73 = ((x5745%x5746)<<(x5747^x5748));

    if (t73 != 188299293086881496LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x5874 = INT64_MIN;
	uint8_t x5875 = 29U;
	uint8_t x5876 = 13U;
	int64_t t74 = -58442643983LL;

    t74 = ((x5873%x5874)<<(x5875^x5876));

    if (t74 != 6094848LL) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x5902 = INT16_MIN;
	int32_t x5903 = INT32_MIN;
	int32_t x5904 = INT32_MIN;
	volatile int32_t t75 = 3;

    t75 = ((x5901%x5902)<<(x5903^x5904));

    if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x5917 = INT8_MIN;
	static uint64_t x5918 = 899LLU;
	volatile int8_t x5919 = INT8_MIN;
	int8_t x5920 = INT8_MIN;

    t76 = ((x5917%x5918)<<(x5919^x5920));

    if (t76 != 12LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x5933 = -1LL;
	static int8_t x5934 = -1;
	int8_t x5935 = -1;
	int32_t x5936 = -1;
	volatile int64_t t77 = 255580107975264146LL;

    t77 = ((x5933%x5934)<<(x5935^x5936));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int64_t x5954 = INT64_MAX;
	int64_t x5955 = -1LL;
	int64_t t78 = -5629221LL;

    t78 = ((x5953%x5954)<<(x5955^x5956));

    if (t78 != 77543896LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x6061 = 59U;
	int8_t x6062 = -1;
	volatile uint32_t x6063 = 2U;
	int32_t t79 = -1331;

    t79 = ((x6061%x6062)<<(x6063^x6064));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint32_t x6117 = 178U;
	uint32_t x6118 = UINT32_MAX;
	static int8_t x6119 = -1;
	uint64_t x6120 = UINT64_MAX;
	uint32_t t80 = 57001U;

    t80 = ((x6117%x6118)<<(x6119^x6120));

    if (t80 != 178U) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x6141 = INT64_MAX;
	volatile uint32_t x6142 = UINT32_MAX;
	uint32_t x6144 = UINT32_MAX;
	volatile int64_t t81 = -341737035833LL;

    t81 = ((x6141%x6142)<<(x6143^x6144));

    if (t81 != 2147483647LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x6217 = INT64_MIN;
	volatile uint16_t x6218 = 1U;
	int32_t x6220 = INT32_MIN;
	int64_t t82 = 384428112359591LL;

    t82 = ((x6217%x6218)<<(x6219^x6220));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x6273 = UINT8_MAX;
	int16_t x6274 = INT16_MAX;
	int8_t x6275 = 17;
	uint8_t x6276 = 21U;
	static int32_t t83 = -7483942;

    t83 = ((x6273%x6274)<<(x6275^x6276));

    if (t83 != 4080) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x6341 = 376253470;
	int32_t x6343 = INT32_MIN;
	int32_t t84 = -1;

    t84 = ((x6341%x6342)<<(x6343^x6344));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x6529 = INT16_MAX;
	int8_t x6530 = 4;
	static int64_t x6531 = -6LL;
	volatile int32_t x6532 = -1;
	volatile int32_t t85 = 224044;

    t85 = ((x6529%x6530)<<(x6531^x6532));

    if (t85 != 96) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x6645 = INT8_MAX;
	volatile int32_t t86 = -91840206;

    t86 = ((x6645%x6646)<<(x6647^x6648));

    if (t86 != 6) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x6677 = UINT32_MAX;
	static uint32_t x6680 = UINT32_MAX;
	uint32_t t87 = 7440U;

    t87 = ((x6677%x6678)<<(x6679^x6680));

    if (t87 != 127U) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x6709 = 6280LLU;
	uint32_t x6710 = 1928U;
	int16_t x6711 = -1;
	uint32_t x6712 = UINT32_MAX;
	volatile uint64_t t88 = 29LLU;

    t88 = ((x6709%x6710)<<(x6711^x6712));

    if (t88 != 496LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x6801 = 1500982497U;
	uint32_t t89 = 56377530U;

    t89 = ((x6801%x6802)<<(x6803^x6804));

    if (t89 != 63U) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x6874 = -1;
	int16_t x6875 = -1;
	static int8_t x6876 = -3;

    t90 = ((x6873%x6874)<<(x6875^x6876));

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint8_t x6937 = UINT8_MAX;
	volatile uint32_t x6938 = 300U;
	int16_t x6940 = INT16_MIN;
	static volatile uint32_t t91 = 27131317U;

    t91 = ((x6937%x6938)<<(x6939^x6940));

    if (t91 != 255U) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x6976 = INT32_MAX;
	static volatile int32_t t92 = -12767;

    t92 = ((x6973%x6974)<<(x6975^x6976));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x7021 = 2601173041413890048LL;
	static volatile int8_t x7023 = -1;
	int16_t x7024 = -1;
	int64_t t93 = 29887982257007040LL;

    t93 = ((x7021%x7022)<<(x7023^x7024));

    if (t93 != 63998LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x7049 = 1951109480422113078LLU;
	int64_t x7052 = -1LL;

    t94 = ((x7049%x7050)<<(x7051^x7052));

    if (t94 != 867105334LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x7205 = 1U;
	static int32_t x7206 = 211904655;
	uint64_t x7207 = UINT64_MAX;
	int64_t x7208 = -1LL;
	volatile int32_t t95 = -219;

    t95 = ((x7205%x7206)<<(x7207^x7208));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x7250 = -1;
	uint16_t x7251 = UINT16_MAX;
	uint16_t x7252 = UINT16_MAX;
	uint64_t t96 = 210766126LLU;

    t96 = ((x7249%x7250)<<(x7251^x7252));

    if (t96 != 30076LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x7421 = 0U;
	int8_t x7422 = -4;
	int8_t x7423 = INT8_MIN;
	volatile int8_t x7424 = INT8_MIN;
	static volatile int32_t t97 = 1418;

    t97 = ((x7421%x7422)<<(x7423^x7424));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x7486 = -9;
	int64_t x7487 = INT64_MIN;
	volatile int64_t x7488 = INT64_MIN;
	uint64_t t98 = 938684201785875498LLU;

    t98 = ((x7485%x7486)<<(x7487^x7488));

    if (t98 != 3099583543298692LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x7529 = 3U;
	volatile uint8_t x7530 = UINT8_MAX;
	int8_t x7531 = 9;
	uint8_t x7532 = 26U;
	volatile int32_t t99 = -3743814;

    t99 = ((x7529%x7530)<<(x7531^x7532));

    if (t99 != 1572864) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x7581 = -1LL;
	uint64_t x7582 = 506773LLU;
	volatile int16_t x7583 = INT16_MAX;
	int16_t x7584 = INT16_MAX;

    t100 = ((x7581%x7582)<<(x7583^x7584));

    if (t100 != 55969LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x7822 = 267LLU;
	static int32_t x7823 = INT32_MIN;
	int32_t x7824 = INT32_MIN;
	uint64_t t101 = 19293195LLU;

    t101 = ((x7821%x7822)<<(x7823^x7824));

    if (t101 != 63LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x7881 = INT8_MIN;
	volatile uint64_t x7882 = UINT64_MAX;
	volatile uint8_t x7883 = UINT8_MAX;
	uint8_t x7884 = UINT8_MAX;
	volatile uint64_t t102 = 22290065LLU;

    t102 = ((x7881%x7882)<<(x7883^x7884));

    if (t102 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x7925 = -1LL;
	uint64_t x7926 = 2511149LLU;
	int64_t x7927 = INT64_MIN;
	static int64_t x7928 = INT64_MIN;
	static uint64_t t103 = 551863459LLU;

    t103 = ((x7925%x7926)<<(x7927^x7928));

    if (t103 != 790395LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x8153 = UINT64_MAX;
	int16_t x8154 = INT16_MAX;
	int8_t x8155 = -1;
	static volatile uint64_t x8156 = UINT64_MAX;
	uint64_t t104 = 6493081152108587049LLU;

    t104 = ((x8153%x8154)<<(x8155^x8156));

    if (t104 != 15LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint32_t x8165 = UINT32_MAX;
	static int16_t x8167 = INT16_MIN;
	volatile uint32_t t105 = 2U;

    t105 = ((x8165%x8166)<<(x8167^x8168));

    if (t105 != 0U) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint32_t x8169 = UINT32_MAX;
	int64_t x8170 = -1LL;
	volatile int8_t x8172 = -2;
	volatile int64_t t106 = -349169LL;

    t106 = ((x8169%x8170)<<(x8171^x8172));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x8329 = INT64_MAX;
	volatile uint64_t x8332 = UINT64_MAX;

    t107 = ((x8329%x8330)<<(x8331^x8332));

    if (t107 != 1LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x8589 = 240434U;
	volatile uint16_t x8590 = UINT16_MAX;
	volatile uint64_t x8591 = UINT64_MAX;
	static int32_t x8592 = -1;
	uint32_t t108 = 1U;

    t108 = ((x8589%x8590)<<(x8591^x8592));

    if (t108 != 43829U) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x8606 = -167001806134LL;
	volatile int32_t x8607 = INT32_MIN;
	int32_t x8608 = INT32_MIN;
	static volatile int64_t t109 = -15LL;

    t109 = ((x8605%x8606)<<(x8607^x8608));

    if (t109 != 117972LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x8669 = INT16_MIN;
	uint64_t x8670 = 233505LLU;
	uint32_t x8671 = UINT32_MAX;
	int32_t x8672 = -1;

    t110 = ((x8669%x8670)<<(x8671^x8672));

    if (t110 != 180998LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint16_t x8673 = 20822U;
	int8_t x8674 = 1;
	int32_t x8675 = INT32_MIN;

    t111 = ((x8673%x8674)<<(x8675^x8676));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x8729 = -7;
	volatile int16_t x8730 = -1;
	uint16_t x8731 = UINT16_MAX;
	uint16_t x8732 = UINT16_MAX;
	static volatile int32_t t112 = -8385629;

    t112 = ((x8729%x8730)<<(x8731^x8732));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x8786 = 3438371U;
	static int16_t x8787 = INT16_MIN;
	int16_t x8788 = INT16_MIN;
	static volatile uint32_t t113 = 3080301U;

    t113 = ((x8785%x8786)<<(x8787^x8788));

    if (t113 != 441916U) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x8877 = 1;
	int64_t x8878 = INT64_MAX;
	int64_t x8879 = -1LL;
	int32_t x8880 = -1;
	int64_t t114 = 242LL;

    t114 = ((x8877%x8878)<<(x8879^x8880));

    if (t114 != 1LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x8937 = INT16_MAX;
	uint32_t x8938 = 214105U;
	static volatile int16_t x8939 = -1;
	volatile int8_t x8940 = -1;
	volatile uint32_t t115 = 8152U;

    t115 = ((x8937%x8938)<<(x8939^x8940));

    if (t115 != 32767U) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint32_t x8957 = 19U;
	uint16_t x8958 = 431U;
	static int8_t x8959 = -1;
	int64_t x8960 = -1LL;
	uint32_t t116 = 6968U;

    t116 = ((x8957%x8958)<<(x8959^x8960));

    if (t116 != 19U) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x9082 = -10278782385LL;
	volatile uint8_t x9083 = 0U;
	volatile uint64_t x9084 = 0LLU;
	volatile int64_t t117 = -17236982LL;

    t117 = ((x9081%x9082)<<(x9083^x9084));

    if (t117 != 9845511322LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x9222 = INT8_MIN;
	static volatile int8_t x9223 = 10;
	volatile int32_t t118 = -473;

    t118 = ((x9221%x9222)<<(x9223^x9224));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x9265 = INT16_MAX;
	int8_t x9266 = INT8_MAX;
	uint64_t x9267 = UINT64_MAX;
	int16_t x9268 = -1;
	int32_t t119 = 200;

    t119 = ((x9265%x9266)<<(x9267^x9268));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x9305 = INT16_MIN;
	static uint32_t x9306 = 1735988U;
	uint32_t x9307 = UINT32_MAX;
	int8_t x9308 = -3;
	uint32_t t120 = 16183084U;

    t120 = ((x9305%x9306)<<(x9307^x9308));

    if (t120 != 400864U) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x9397 = 208845028LLU;
	int16_t x9398 = -1;
	static int64_t x9399 = -1LL;
	static volatile int8_t x9400 = -1;
	uint64_t t121 = 15258897319359837LLU;

    t121 = ((x9397%x9398)<<(x9399^x9400));

    if (t121 != 208845028LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint32_t x9409 = UINT32_MAX;
	int32_t x9411 = -1;
	uint32_t x9412 = UINT32_MAX;
	volatile uint32_t t122 = 67056918U;

    t122 = ((x9409%x9410)<<(x9411^x9412));

    if (t122 != 32767U) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x9441 = -1;
	volatile uint32_t x9442 = UINT32_MAX;
	int16_t x9443 = -1;
	uint32_t t123 = 74931125U;

    t123 = ((x9441%x9442)<<(x9443^x9444));

    if (t123 != 0U) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x9453 = INT8_MIN;
	int64_t x9455 = -6LL;
	uint64_t x9456 = UINT64_MAX;
	static volatile uint32_t t124 = 56186152U;

    t124 = ((x9453%x9454)<<(x9455^x9456));

    if (t124 != 4294963200U) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x9485 = INT64_MAX;
	int64_t x9486 = INT64_MAX;

    t125 = ((x9485%x9486)<<(x9487^x9488));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x9513 = UINT8_MAX;
	uint64_t x9514 = 28617457052407576LLU;
	int8_t x9515 = -16;
	volatile int16_t x9516 = -1;
	uint64_t t126 = 89029LLU;

    t126 = ((x9513%x9514)<<(x9515^x9516));

    if (t126 != 8355840LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x9525 = 3340;
	int16_t x9526 = INT16_MIN;
	int8_t x9527 = -1;
	volatile int16_t x9528 = -1;

    t127 = ((x9525%x9526)<<(x9527^x9528));

    if (t127 != 3340) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x9657 = 3055823U;
	uint8_t x9658 = 3U;
	static int16_t x9659 = 0;
	uint64_t x9660 = 15LLU;
	static uint32_t t128 = 195373167U;

    t128 = ((x9657%x9658)<<(x9659^x9660));

    if (t128 != 65536U) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x9978 = 1;
	uint32_t x9979 = UINT32_MAX;
	int16_t x9980 = -1;
	int32_t t129 = 115559765;

    t129 = ((x9977%x9978)<<(x9979^x9980));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x9981 = 4390374963924LLU;
	int32_t x9982 = -986780;
	int8_t x9983 = -1;
	int8_t x9984 = -21;
	volatile uint64_t t130 = 1036814LLU;

    t130 = ((x9981%x9982)<<(x9983^x9984));

    if (t130 != 4603641818171572224LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x10161 = 0U;
	int64_t x10163 = INT64_MIN;
	volatile int64_t x10164 = INT64_MIN;
	int32_t t131 = 153212;

    t131 = ((x10161%x10162)<<(x10163^x10164));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x10193 = INT16_MAX;
	volatile int32_t t132 = 10802677;

    t132 = ((x10193%x10194)<<(x10195^x10196));

    if (t132 != 7) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x10249 = 1987;
	volatile int8_t x10251 = 8;
	uint8_t x10252 = 1U;
	volatile int32_t t133 = -15;

    t133 = ((x10249%x10250)<<(x10251^x10252));

    if (t133 != 1017344) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x10329 = -1;
	uint64_t x10330 = UINT64_MAX;
	int16_t x10331 = 1;
	volatile int8_t x10332 = 21;

    t134 = ((x10329%x10330)<<(x10331^x10332));

    if (t134 != 0LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x10337 = UINT32_MAX;
	uint16_t x10338 = 171U;
	volatile int32_t x10339 = -1;
	volatile int8_t x10340 = -1;
	uint32_t t135 = 253016644U;

    t135 = ((x10337%x10338)<<(x10339^x10340));

    if (t135 != 138U) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x10473 = INT8_MIN;
	volatile int64_t x10474 = -1LL;
	uint8_t x10475 = 0U;
	int64_t t136 = 7432LL;

    t136 = ((x10473%x10474)<<(x10475^x10476));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x10837 = -1;
	static int32_t x10838 = -1;
	int16_t x10839 = -3;
	int32_t t137 = -7029036;

    t137 = ((x10837%x10838)<<(x10839^x10840));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint16_t x10941 = 6994U;
	uint16_t x10942 = UINT16_MAX;
	int16_t x10943 = -1;
	volatile uint32_t x10944 = UINT32_MAX;
	int32_t t138 = 65070;

    t138 = ((x10941%x10942)<<(x10943^x10944));

    if (t138 != 6994) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint32_t x10997 = 2065786556U;
	int32_t x10998 = INT32_MIN;
	int8_t x10999 = -1;
	uint32_t t139 = 26U;

    t139 = ((x10997%x10998)<<(x10999^x11000));

    if (t139 != 2065786556U) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x11049 = INT32_MAX;
	int64_t x11050 = INT64_MIN;
	static int8_t x11051 = INT8_MAX;
	int8_t x11052 = INT8_MAX;
	static int64_t t140 = 12LL;

    t140 = ((x11049%x11050)<<(x11051^x11052));

    if (t140 != 2147483647LL) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int64_t x11117 = 46LL;
	uint32_t x11119 = UINT32_MAX;
	int32_t x11120 = -1;
	volatile int64_t t141 = 30648899367494LL;

    t141 = ((x11117%x11118)<<(x11119^x11120));

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x11125 = 29573066LLU;
	int8_t x11126 = -1;
	int16_t x11127 = -1;
	volatile uint64_t t142 = 17LLU;

    t142 = ((x11125%x11126)<<(x11127^x11128));

    if (t142 != 29573066LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x11141 = 244832866;
	static int16_t x11142 = INT16_MIN;
	int64_t x11143 = INT64_MIN;
	volatile int64_t x11144 = INT64_MIN;
	int32_t t143 = -4507221;

    t143 = ((x11141%x11142)<<(x11143^x11144));

    if (t143 != 23138) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint16_t x11237 = 6U;
	uint64_t x11239 = UINT64_MAX;
	int8_t x11240 = -1;

    t144 = ((x11237%x11238)<<(x11239^x11240));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x11257 = -2;
	static volatile int8_t x11259 = 10;
	int64_t x11260 = 3LL;

    t145 = ((x11257%x11258)<<(x11259^x11260));

    if (t145 != 139461772288LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x11418 = 56;
	int16_t x11419 = INT16_MIN;
	volatile int16_t x11420 = INT16_MIN;
	int32_t t146 = -396790382;

    t146 = ((x11417%x11418)<<(x11419^x11420));

    if (t146 != 11) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint8_t x11461 = 4U;
	int16_t x11463 = INT16_MAX;
	int32_t t147 = 4071172;

    t147 = ((x11461%x11462)<<(x11463^x11464));

    if (t147 != 4) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x11613 = INT64_MAX;
	int64_t x11614 = -1LL;
	static int64_t x11615 = -1LL;
	int64_t x11616 = -1LL;

    t148 = ((x11613%x11614)<<(x11615^x11616));

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x11654 = INT16_MIN;
	volatile int8_t x11656 = 4;

    t149 = ((x11653%x11654)<<(x11655^x11656));

    if (t149 != 1048544) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x11725 = INT8_MIN;
	uint64_t x11726 = 71860180324LLU;
	volatile int16_t x11727 = -1;
	uint64_t x11728 = UINT64_MAX;

    t150 = ((x11725%x11726)<<(x11727^x11728));

    if (t150 != 11287108444LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x11773 = INT32_MAX;
	static int32_t x11774 = INT32_MIN;
	int16_t x11775 = INT16_MIN;
	int16_t x11776 = INT16_MIN;
	volatile int32_t t151 = INT32_MAX;

    t151 = ((x11773%x11774)<<(x11775^x11776));

    if (t151 != INT32_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x11777 = 135364711627964371LLU;
	volatile uint8_t x11778 = 28U;
	int8_t x11779 = -1;
	int64_t x11780 = -63LL;
	uint64_t t152 = 131883124LLU;

    t152 = ((x11777%x11778)<<(x11779^x11780));

    if (t152 != 13835058055282163712LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x11845 = -1;
	int32_t x11846 = -1;
	uint8_t x11848 = 5U;
	static volatile int32_t t153 = 1;

    t153 = ((x11845%x11846)<<(x11847^x11848));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x11874 = INT16_MAX;
	static int32_t x11875 = -32705;
	int16_t x11876 = INT16_MIN;

    t154 = ((x11873%x11874)<<(x11875^x11876));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x11911 = INT8_MIN;
	int8_t x11912 = INT8_MIN;
	volatile int32_t t155 = -11546;

    t155 = ((x11909%x11910)<<(x11911^x11912));

    if (t155 != 1004) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x11925 = INT16_MIN;
	int8_t x11926 = INT8_MIN;
	int8_t x11928 = -1;
	int32_t t156 = -664;

    t156 = ((x11925%x11926)<<(x11927^x11928));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x12001 = 3308LLU;
	volatile int32_t x12002 = -11594;
	int64_t x12003 = -1LL;
	static uint64_t t157 = 1833440931LLU;

    t157 = ((x12001%x12002)<<(x12003^x12004));

    if (t157 != 221996122112LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x12013 = UINT16_MAX;
	int8_t x12015 = -1;
	int8_t x12016 = -6;
	static int32_t t158 = -1;

    t158 = ((x12013%x12014)<<(x12015^x12016));

    if (t158 != 18624) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x12178 = -1LL;
	static int8_t x12179 = INT8_MAX;
	uint16_t x12180 = 104U;
	static volatile uint64_t t159 = 8242760LLU;

    t159 = ((x12177%x12178)<<(x12179^x12180));

    if (t159 != 1453931149586857984LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x12205 = INT64_MAX;
	int16_t x12207 = -1;
	int64_t t160 = -421228165013537437LL;

    t160 = ((x12205%x12206)<<(x12207^x12208));

    if (t160 != 2147483647LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x12209 = -7482;
	uint32_t x12210 = UINT32_MAX;
	uint64_t x12211 = UINT64_MAX;
	uint32_t t161 = 12639770U;

    t161 = ((x12209%x12210)<<(x12211^x12212));

    if (t161 != 4294959814U) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x12277 = INT8_MAX;
	static int32_t x12278 = -6371;
	volatile int64_t x12280 = -1LL;
	static volatile int32_t t162 = 3680;

    t162 = ((x12277%x12278)<<(x12279^x12280));

    if (t162 != 127) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x12289 = INT16_MIN;
	volatile uint64_t x12290 = 560172768LLU;
	int8_t x12291 = -2;
	int64_t x12292 = -1LL;

    t163 = ((x12289%x12290)<<(x12291^x12292));

    if (t163 != 634365760LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint8_t x12300 = 16U;
	uint64_t t164 = 2075918LLU;

    t164 = ((x12297%x12298)<<(x12299^x12300));

    if (t164 != 67108864LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x12361 = 6;
	int64_t x12362 = -1LL;
	uint8_t x12363 = 69U;
	volatile int64_t t165 = 12094687348502LL;

    t165 = ((x12361%x12362)<<(x12363^x12364));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x12385 = INT64_MAX;
	static uint64_t x12388 = UINT64_MAX;

    t166 = ((x12385%x12386)<<(x12387^x12388));

    if (t166 != 127LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint8_t x12545 = 38U;
	uint8_t x12546 = 7U;
	volatile int32_t x12547 = -1;
	volatile uint64_t x12548 = UINT64_MAX;
	volatile int32_t t167 = 33;

    t167 = ((x12545%x12546)<<(x12547^x12548));

    if (t167 != 3) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x12613 = 13501U;
	uint8_t x12614 = UINT8_MAX;
	int8_t x12616 = -1;
	int32_t t168 = 1;

    t168 = ((x12613%x12614)<<(x12615^x12616));

    if (t168 != 241) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x12633 = INT16_MIN;
	uint16_t x12634 = 1U;
	int16_t x12636 = -19;
	static volatile int32_t t169 = -7919835;

    t169 = ((x12633%x12634)<<(x12635^x12636));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x12669 = INT16_MAX;
	uint32_t x12670 = UINT32_MAX;
	static int32_t x12671 = -1;
	int8_t x12672 = -1;
	uint32_t t170 = 1038868U;

    t170 = ((x12669%x12670)<<(x12671^x12672));

    if (t170 != 32767U) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x12797 = UINT64_MAX;
	uint8_t x12799 = 3U;
	int16_t x12800 = 16;
	volatile uint64_t t171 = 4785486LLU;

    t171 = ((x12797%x12798)<<(x12799^x12800));

    if (t171 != 7864320LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x12853 = 0;
	int32_t x12854 = -1;
	int8_t x12856 = INT8_MIN;
	static volatile int32_t t172 = -381121;

    t172 = ((x12853%x12854)<<(x12855^x12856));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x12902 = 7057315LLU;
	uint8_t x12903 = 11U;
	uint8_t x12904 = 29U;
	volatile uint64_t t173 = 13LLU;

    t173 = ((x12901%x12902)<<(x12903^x12904));

    if (t173 != 17033919987712LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint32_t x12970 = UINT32_MAX;
	static int64_t x12972 = INT64_MIN;
	uint32_t t174 = 1219830U;

    t174 = ((x12969%x12970)<<(x12971^x12972));

    if (t174 != 255U) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x13014 = -42;
	int16_t x13015 = -2;
	int64_t x13016 = -1LL;
	uint32_t t175 = 87U;

    t175 = ((x13013%x13014)<<(x13015^x13016));

    if (t175 != 384434U) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x13045 = 0;
	static uint8_t x13046 = 33U;
	int32_t x13047 = -1;
	static volatile int32_t x13048 = -1;
	volatile int32_t t176 = -1;

    t176 = ((x13045%x13046)<<(x13047^x13048));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x13229 = 5U;
	int32_t x13230 = 3960;
	int32_t x13231 = -3;
	volatile uint32_t x13232 = UINT32_MAX;
	static int32_t t177 = 659324916;

    t177 = ((x13229%x13230)<<(x13231^x13232));

    if (t177 != 20) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint32_t x13281 = UINT32_MAX;
	uint32_t x13282 = 43U;
	static uint32_t x13284 = UINT32_MAX;
	uint32_t t178 = 112290500U;

    t178 = ((x13281%x13282)<<(x13283^x13284));

    if (t178 != 15U) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint16_t x13317 = UINT16_MAX;
	volatile uint16_t x13318 = 421U;
	volatile int32_t x13320 = INT32_MIN;

    t179 = ((x13317%x13318)<<(x13319^x13320));

    if (t179 != 280) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x13373 = INT32_MAX;
	int8_t x13375 = -1;

    t180 = ((x13373%x13374)<<(x13375^x13376));

    if (t180 != 1698400) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x13493 = UINT8_MAX;
	int8_t x13494 = 12;
	int32_t x13495 = INT32_MIN;
	int32_t x13496 = INT32_MIN;
	int32_t t181 = 23712845;

    t181 = ((x13493%x13494)<<(x13495^x13496));

    if (t181 != 3) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x13609 = 401596U;
	uint64_t x13610 = UINT64_MAX;
	int32_t x13611 = INT32_MIN;
	int32_t x13612 = INT32_MIN;
	static volatile uint64_t t182 = 16700302LLU;

    t182 = ((x13609%x13610)<<(x13611^x13612));

    if (t182 != 401596LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x13713 = INT64_MAX;
	uint8_t x13714 = 24U;
	volatile int8_t x13715 = -1;
	uint32_t x13716 = UINT32_MAX;

    t183 = ((x13713%x13714)<<(x13715^x13716));

    if (t183 != 7LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x13717 = UINT16_MAX;
	static int16_t x13718 = 5;
	int8_t x13719 = -1;
	uint32_t x13720 = UINT32_MAX;
	volatile int32_t t184 = 62338;

    t184 = ((x13717%x13718)<<(x13719^x13720));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x13785 = 19735LLU;
	volatile int32_t x13786 = INT32_MIN;
	volatile int32_t x13787 = -1;
	int8_t x13788 = -35;

    t185 = ((x13785%x13786)<<(x13787^x13788));

    if (t185 != 339044718346240LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x13805 = 3898U;
	static volatile uint32_t x13806 = 6579U;
	uint64_t x13807 = 8LLU;
	uint8_t x13808 = 1U;

    t186 = ((x13805%x13806)<<(x13807^x13808));

    if (t186 != 1995776U) { NG(); } else { ; }
	
}

void f187(void) {
    	static int8_t x13843 = -5;
	int64_t x13844 = -1LL;
	volatile uint64_t t187 = 1747811880255315653LLU;

    t187 = ((x13841%x13842)<<(x13843^x13844));

    if (t187 != 10160LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x13853 = 732716U;
	int32_t x13856 = -1;
	volatile int64_t t188 = -49271LL;

    t188 = ((x13853%x13854)<<(x13855^x13856));

    if (t188 != 732716LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int16_t x13962 = INT16_MIN;
	uint16_t x13963 = UINT16_MAX;
	static volatile uint16_t x13964 = UINT16_MAX;
	volatile int32_t t189 = 3;

    t189 = ((x13961%x13962)<<(x13963^x13964));

    if (t189 != 120) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x13977 = UINT64_MAX;
	int32_t x13978 = INT32_MAX;
	int64_t x13979 = -1LL;
	int32_t x13980 = -1;

    t190 = ((x13977%x13978)<<(x13979^x13980));

    if (t190 != 3LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint64_t x14005 = 28439677358LLU;
	int8_t x14007 = 1;
	int8_t x14008 = 5;

    t191 = ((x14005%x14006)<<(x14007^x14008));

    if (t191 != 455034837728LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x14074 = UINT32_MAX;
	uint32_t x14075 = UINT32_MAX;
	int8_t x14076 = -1;
	static volatile uint32_t t192 = 2U;

    t192 = ((x14073%x14074)<<(x14075^x14076));

    if (t192 != 0U) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint64_t x14097 = 1987LLU;
	int16_t x14098 = -1;
	int32_t x14099 = INT32_MIN;
	volatile int32_t x14100 = INT32_MIN;
	uint64_t t193 = 58904LLU;

    t193 = ((x14097%x14098)<<(x14099^x14100));

    if (t193 != 1987LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x14105 = 1162105702LL;
	static int8_t x14106 = INT8_MIN;
	uint8_t x14107 = 33U;
	volatile uint32_t x14108 = 3U;
	volatile int64_t t194 = -189978652804LL;

    t194 = ((x14105%x14106)<<(x14107^x14108));

    if (t194 != 1752346656768LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile uint64_t x14130 = UINT64_MAX;
	uint8_t x14131 = 1U;
	uint16_t x14132 = 1U;
	static uint64_t t195 = 5526158259228984LLU;

    t195 = ((x14129%x14130)<<(x14131^x14132));

    if (t195 != 2LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x14189 = UINT32_MAX;
	static int8_t x14192 = -1;
	uint32_t t196 = 13U;

    t196 = ((x14189%x14190)<<(x14191^x14192));

    if (t196 != 127U) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint32_t x14453 = 585817U;
	static volatile int64_t x14454 = INT64_MIN;
	volatile int8_t x14455 = 2;

    t197 = ((x14453%x14454)<<(x14455^x14456));

    if (t197 != 299938304LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x14633 = UINT8_MAX;
	static volatile int16_t x14634 = 9;
	int32_t x14635 = INT32_MAX;
	int32_t x14636 = INT32_MAX;
	int32_t t198 = 222;

    t198 = ((x14633%x14634)<<(x14635^x14636));

    if (t198 != 3) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x14786 = INT8_MIN;
	static uint8_t x14788 = 11U;
	volatile int64_t t199 = -716848424049096014LL;

    t199 = ((x14785%x14786)<<(x14787^x14788));

    if (t199 != 0LL) { NG(); } else { ; }
	
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

