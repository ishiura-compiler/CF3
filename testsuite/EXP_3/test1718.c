
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

int32_t x13 = INT32_MAX;
int64_t x32 = INT64_MIN;
static uint32_t x38 = 19U;
uint8_t x138 = 20U;
int8_t x139 = 1;
int32_t t3 = 3;
uint16_t x269 = 2432U;
int32_t t6 = -6477;
uint8_t x274 = 1U;
volatile int32_t t7 = 57652;
volatile int32_t x277 = 16159;
static int8_t x278 = 0;
int32_t x280 = -149992;
int32_t t9 = -35475;
int32_t t10 = 542620;
volatile uint16_t x410 = 12U;
int32_t t11 = -10;
volatile int32_t t12 = -30297;
int16_t x485 = 1810;
volatile int8_t x487 = -1;
uint32_t x644 = UINT32_MAX;
static uint8_t x706 = 19U;
uint8_t x794 = 1U;
int8_t x843 = -1;
int32_t x944 = -1;
volatile int32_t t21 = 0;
int8_t x995 = 23;
static int64_t x1020 = INT64_MIN;
int8_t x1025 = 1;
volatile uint64_t x1157 = UINT64_MAX;
int64_t x1193 = INT64_MAX;
volatile uint64_t x1195 = 264775313836152449LLU;
volatile int32_t t28 = -204410022;
static int64_t x1249 = INT64_MAX;
volatile int32_t t30 = -1;
int32_t x1316 = INT32_MIN;
int32_t x1388 = -11403714;
uint64_t x1392 = UINT64_MAX;
int32_t t33 = -384680945;
uint32_t x1943 = UINT32_MAX;
uint16_t x2087 = UINT16_MAX;
static uint8_t x2088 = 3U;
static uint64_t x2157 = UINT64_MAX;
static uint16_t x2160 = 3103U;
static volatile uint16_t x2197 = 8890U;
int32_t t40 = -37573;
int8_t x2350 = 3;
uint32_t x2498 = 2U;
volatile uint64_t x2552 = 101245LLU;
volatile int32_t t53 = 161037;
int8_t x3020 = INT8_MAX;
volatile int32_t t56 = 3;
uint64_t x3049 = 269088664490LLU;
int8_t x3051 = INT8_MIN;
uint16_t x3156 = 36U;
uint8_t x3197 = UINT8_MAX;
static volatile int8_t x3200 = INT8_MIN;
uint64_t x3213 = 1490418517225511LLU;
uint8_t x3339 = 21U;
volatile uint8_t x3470 = 1U;
uint32_t x3471 = 0U;
int64_t x3524 = 18269656504865342LL;
uint32_t x3563 = UINT32_MAX;
volatile int64_t x3586 = 0LL;
static int32_t x3588 = INT32_MIN;
volatile int32_t t71 = 20;
int8_t x3694 = 0;
int64_t x3696 = -33160149986409LL;
int8_t x3706 = 27;
static uint8_t x3758 = 1U;
int32_t x3760 = INT32_MAX;
volatile int64_t x3800 = INT64_MIN;
static volatile int32_t t76 = -3169;
volatile int32_t x3847 = INT32_MIN;
int64_t x3848 = 877LL;
int32_t t77 = 10;
int8_t x3894 = 30;
int32_t t78 = -24895712;
int16_t x3976 = 5;
static uint64_t x4006 = 1LLU;
int32_t t82 = -46322;
uint16_t x4052 = 32748U;
volatile uint16_t x4062 = 9U;
int16_t x4063 = INT16_MAX;
volatile int32_t t86 = 258744;
uint32_t x4186 = 1U;
uint16_t x4253 = 329U;
volatile int32_t t90 = 66570575;
uint32_t x4345 = 911U;
volatile uint8_t x4350 = 1U;
volatile int64_t x4413 = 159673053714LL;
uint8_t x4414 = 1U;
uint64_t x4415 = 6595839694203009026LLU;
volatile uint32_t x4431 = 11513721U;
uint64_t x4500 = 3664931350686293999LLU;
int16_t x4508 = -1;
static uint64_t x4529 = 952LLU;
int32_t t100 = -15;
uint8_t x4554 = 0U;
int32_t t101 = -40493;
uint64_t x4645 = UINT64_MAX;
uint64_t x4681 = UINT64_MAX;
uint64_t x4684 = 61762222020416LLU;
int32_t t103 = 137323313;
volatile uint8_t x4690 = 7U;
volatile uint16_t x4705 = 1486U;
int32_t x4707 = INT32_MAX;
static volatile int32_t t106 = 5331720;
int64_t x4850 = 8LL;
static int32_t t107 = -15;
uint8_t x4866 = 21U;
int32_t x4868 = -1;
int32_t x4923 = 1448;
int32_t x4924 = -2555902;
int64_t x4941 = 10001LL;
int16_t x4943 = INT16_MIN;
int32_t t111 = -1945072;
uint16_t x4965 = 1U;
int8_t x4966 = 1;
int8_t x5065 = 57;
int32_t x5067 = -1;
volatile int32_t t116 = 3;
static int16_t x5244 = INT16_MIN;
int32_t t120 = -6888;
uint64_t x5507 = 1LLU;
uint8_t x5508 = 43U;
volatile int32_t t125 = 518623570;
uint32_t x5931 = 33785U;
uint8_t x5958 = 1U;
uint8_t x6093 = 56U;
uint8_t x6094 = 28U;
int32_t x6099 = -1;
static volatile int8_t x6170 = 0;
static int16_t x6213 = 609;
int32_t t138 = 13706932;
int32_t t139 = -1496142;
int64_t x6306 = 0LL;
int64_t x6499 = INT64_MIN;
volatile int16_t x6500 = INT16_MIN;
uint64_t x6685 = 14LLU;
int32_t x6688 = -289019027;
int8_t x6705 = INT8_MAX;
volatile int32_t t145 = 44284;
int32_t x6733 = INT32_MAX;
int32_t x6864 = INT32_MAX;
uint8_t x6886 = 8U;
volatile int64_t x6888 = 2544344LL;
volatile int16_t x6957 = INT16_MAX;
uint64_t x6999 = 7065855647226895LLU;
static int64_t x7065 = 2LL;
int32_t t151 = -6249;
int8_t x7302 = 1;
volatile uint64_t x7437 = 29032972261057294LLU;
int8_t x7518 = 1;
int8_t x7550 = 3;
volatile int32_t t160 = -6073;
volatile uint32_t x7593 = 4U;
uint8_t x7629 = 35U;
static volatile uint16_t x7631 = UINT16_MAX;
uint16_t x7658 = 26U;
volatile int8_t x7710 = 25;
int8_t x7787 = INT8_MAX;
int16_t x7857 = INT16_MAX;
int16_t x8054 = 0;
int64_t x8081 = 70962648291969LL;
int16_t x8106 = 0;
int32_t x8108 = -1;
int8_t x8278 = 6;
uint16_t x8310 = 0U;
int64_t x8319 = -391199637LL;
static volatile uint64_t x8321 = 59434LLU;
int32_t t182 = -211341;
volatile int16_t x8350 = 0;
int8_t x8375 = -1;
uint8_t x8390 = 5U;
static int64_t x8433 = INT64_MAX;
uint64_t x8445 = UINT64_MAX;
static volatile int64_t x8617 = 24582LL;
static uint8_t x8828 = 3U;
int32_t t192 = -29269;
uint32_t x8945 = UINT32_MAX;
static int64_t x9008 = 312017LL;
volatile int32_t t196 = 28548980;
uint16_t x9086 = 3U;


void f0(void) {
    	uint16_t x14 = 0U;
	volatile int64_t x15 = -694563524013LL;
	int32_t x16 = -1;
	volatile int32_t t0 = 654729;

    t0 = ((x13>>x14)<=(x15>x16));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x29 = INT64_MAX;
	volatile uint16_t x30 = 4U;
	int64_t x31 = INT64_MIN;
	int32_t t1 = -245390481;

    t1 = ((x29>>x30)<=(x31>x32));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x37 = INT64_MAX;
	static volatile uint8_t x39 = UINT8_MAX;
	static volatile int16_t x40 = INT16_MIN;
	volatile int32_t t2 = 121;

    t2 = ((x37>>x38)<=(x39>x40));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint64_t x137 = 26994LLU;
	int8_t x140 = INT8_MAX;

    t3 = ((x137>>x138)<=(x139>x140));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int64_t x141 = 152060282692LL;
	uint16_t x142 = 30U;
	int8_t x143 = -1;
	volatile int8_t x144 = -1;
	int32_t t4 = 758818;

    t4 = ((x141>>x142)<=(x143>x144));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x173 = INT8_MAX;
	volatile uint32_t x174 = 6U;
	int8_t x175 = 1;
	static int32_t x176 = INT32_MIN;
	int32_t t5 = 30281392;

    t5 = ((x173>>x174)<=(x175>x176));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x270 = 1U;
	static int16_t x271 = INT16_MIN;
	int32_t x272 = 3034;

    t6 = ((x269>>x270)<=(x271>x272));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x273 = 3094760247387305LLU;
	int32_t x275 = INT32_MIN;
	int64_t x276 = INT64_MIN;

    t7 = ((x273>>x274)<=(x275>x276));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x279 = 49LL;
	int32_t t8 = -42077908;

    t8 = ((x277>>x278)<=(x279>x280));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x289 = 4U;
	uint8_t x290 = 0U;
	static uint8_t x291 = UINT8_MAX;
	static uint8_t x292 = UINT8_MAX;

    t9 = ((x289>>x290)<=(x291>x292));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x393 = 3U;
	int8_t x394 = 1;
	int8_t x395 = INT8_MAX;
	int8_t x396 = -1;

    t10 = ((x393>>x394)<=(x395>x396));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint8_t x409 = 97U;
	volatile uint8_t x411 = UINT8_MAX;
	int16_t x412 = -1;

    t11 = ((x409>>x410)<=(x411>x412));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x453 = INT16_MAX;
	uint64_t x454 = 1LLU;
	int64_t x455 = INT64_MIN;
	int64_t x456 = INT64_MAX;

    t12 = ((x453>>x454)<=(x455>x456));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint64_t x477 = UINT64_MAX;
	int16_t x478 = 1;
	static int16_t x479 = 0;
	uint64_t x480 = 99845LLU;
	volatile int32_t t13 = 9389172;

    t13 = ((x477>>x478)<=(x479>x480));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile uint32_t x486 = 0U;
	static volatile int8_t x488 = INT8_MIN;
	int32_t t14 = -2;

    t14 = ((x485>>x486)<=(x487>x488));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x641 = UINT64_MAX;
	int8_t x642 = 0;
	int32_t x643 = INT32_MAX;
	volatile int32_t t15 = -522232414;

    t15 = ((x641>>x642)<=(x643>x644));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint32_t x657 = 6419U;
	static uint16_t x658 = 1U;
	static uint16_t x659 = 539U;
	int16_t x660 = INT16_MIN;
	int32_t t16 = 603;

    t16 = ((x657>>x658)<=(x659>x660));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x705 = 48U;
	static int64_t x707 = INT64_MIN;
	int16_t x708 = 1;
	static int32_t t17 = 11266697;

    t17 = ((x705>>x706)<=(x707>x708));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint8_t x793 = UINT8_MAX;
	uint32_t x795 = 26U;
	volatile uint64_t x796 = 60470074LLU;
	volatile int32_t t18 = 5947391;

    t18 = ((x793>>x794)<=(x795>x796));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x833 = INT8_MAX;
	static int8_t x834 = 0;
	static uint32_t x835 = UINT32_MAX;
	uint16_t x836 = UINT16_MAX;
	static volatile int32_t t19 = 52719257;

    t19 = ((x833>>x834)<=(x835>x836));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x841 = 107150;
	int8_t x842 = 0;
	uint64_t x844 = 1331710661LLU;
	int32_t t20 = -362;

    t20 = ((x841>>x842)<=(x843>x844));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x941 = 18789980U;
	int16_t x942 = 1;
	int8_t x943 = 17;

    t21 = ((x941>>x942)<=(x943>x944));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x993 = UINT32_MAX;
	int8_t x994 = 1;
	uint8_t x996 = UINT8_MAX;
	int32_t t22 = -720494;

    t22 = ((x993>>x994)<=(x995>x996));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x1017 = 63U;
	int8_t x1018 = 28;
	volatile uint32_t x1019 = 12U;
	volatile int32_t t23 = -8;

    t23 = ((x1017>>x1018)<=(x1019>x1020));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x1026 = 1;
	int16_t x1027 = -5362;
	int64_t x1028 = -1LL;
	int32_t t24 = 11768;

    t24 = ((x1025>>x1026)<=(x1027>x1028));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x1029 = INT8_MAX;
	uint8_t x1030 = 7U;
	int8_t x1031 = -1;
	uint64_t x1032 = 32664292827LLU;
	volatile int32_t t25 = 0;

    t25 = ((x1029>>x1030)<=(x1031>x1032));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint16_t x1141 = UINT16_MAX;
	int8_t x1142 = 1;
	uint32_t x1143 = 219319674U;
	volatile int16_t x1144 = 1770;
	int32_t t26 = -333321679;

    t26 = ((x1141>>x1142)<=(x1143>x1144));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x1158 = 1;
	int8_t x1159 = INT8_MIN;
	int32_t x1160 = -52823;
	static int32_t t27 = -24596;

    t27 = ((x1157>>x1158)<=(x1159>x1160));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint8_t x1194 = 19U;
	int64_t x1196 = INT64_MIN;

    t28 = ((x1193>>x1194)<=(x1195>x1196));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x1205 = INT8_MAX;
	static int64_t x1206 = 1LL;
	volatile int16_t x1207 = -8169;
	volatile uint8_t x1208 = 78U;
	volatile int32_t t29 = 417;

    t29 = ((x1205>>x1206)<=(x1207>x1208));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x1250 = 5;
	int64_t x1251 = INT64_MAX;
	static int16_t x1252 = -1;

    t30 = ((x1249>>x1250)<=(x1251>x1252));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x1313 = INT8_MAX;
	static uint16_t x1314 = 5U;
	int8_t x1315 = -10;
	volatile int32_t t31 = 88613791;

    t31 = ((x1313>>x1314)<=(x1315>x1316));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x1385 = 2381U;
	uint16_t x1386 = 0U;
	int8_t x1387 = INT8_MIN;
	int32_t t32 = -1341;

    t32 = ((x1385>>x1386)<=(x1387>x1388));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x1389 = INT64_MAX;
	static uint8_t x1390 = 14U;
	uint32_t x1391 = 33160668U;

    t33 = ((x1389>>x1390)<=(x1391>x1392));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint8_t x1653 = 0U;
	uint32_t x1654 = 0U;
	int64_t x1655 = INT64_MIN;
	uint8_t x1656 = 1U;
	int32_t t34 = -61357;

    t34 = ((x1653>>x1654)<=(x1655>x1656));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint16_t x1657 = 46U;
	uint64_t x1658 = 0LLU;
	volatile int64_t x1659 = -1LL;
	uint32_t x1660 = 44790808U;
	volatile int32_t t35 = -1030;

    t35 = ((x1657>>x1658)<=(x1659>x1660));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x1941 = 3471;
	int8_t x1942 = 1;
	uint8_t x1944 = 0U;
	int32_t t36 = 0;

    t36 = ((x1941>>x1942)<=(x1943>x1944));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x2085 = 674;
	int64_t x2086 = 0LL;
	int32_t t37 = 0;

    t37 = ((x2085>>x2086)<=(x2087>x2088));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x2121 = 750787470LL;
	uint16_t x2122 = 1U;
	volatile uint8_t x2123 = UINT8_MAX;
	uint64_t x2124 = 85856LLU;
	volatile int32_t t38 = 339;

    t38 = ((x2121>>x2122)<=(x2123>x2124));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x2158 = 0;
	int32_t x2159 = -1;
	int32_t t39 = -42;

    t39 = ((x2157>>x2158)<=(x2159>x2160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint8_t x2198 = 5U;
	uint64_t x2199 = 5337103124599154LLU;
	static int8_t x2200 = -1;

    t40 = ((x2197>>x2198)<=(x2199>x2200));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x2209 = INT32_MAX;
	uint8_t x2210 = 6U;
	int8_t x2211 = INT8_MIN;
	uint16_t x2212 = 13026U;
	int32_t t41 = 2045;

    t41 = ((x2209>>x2210)<=(x2211>x2212));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int64_t x2289 = INT64_MAX;
	static int8_t x2290 = 0;
	int16_t x2291 = -1;
	volatile int16_t x2292 = -1;
	int32_t t42 = -7150;

    t42 = ((x2289>>x2290)<=(x2291>x2292));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x2337 = INT16_MAX;
	volatile int16_t x2338 = 1;
	int32_t x2339 = -1;
	volatile int8_t x2340 = INT8_MIN;
	int32_t t43 = -23700083;

    t43 = ((x2337>>x2338)<=(x2339>x2340));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x2349 = 220866U;
	volatile int64_t x2351 = 984LL;
	static int64_t x2352 = 48563090LL;
	int32_t t44 = 1;

    t44 = ((x2349>>x2350)<=(x2351>x2352));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x2425 = 309;
	uint8_t x2426 = 19U;
	volatile int16_t x2427 = INT16_MIN;
	int64_t x2428 = INT64_MIN;
	volatile int32_t t45 = -251563844;

    t45 = ((x2425>>x2426)<=(x2427>x2428));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x2497 = UINT8_MAX;
	static uint32_t x2499 = 63718U;
	uint64_t x2500 = UINT64_MAX;
	int32_t t46 = 453625966;

    t46 = ((x2497>>x2498)<=(x2499>x2500));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x2529 = INT64_MAX;
	int16_t x2530 = 1;
	int32_t x2531 = -1;
	int64_t x2532 = 5415692565170036LL;
	int32_t t47 = 8078055;

    t47 = ((x2529>>x2530)<=(x2531>x2532));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint16_t x2549 = UINT16_MAX;
	int8_t x2550 = 1;
	uint16_t x2551 = UINT16_MAX;
	int32_t t48 = -60403173;

    t48 = ((x2549>>x2550)<=(x2551>x2552));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x2617 = 0;
	uint8_t x2618 = 14U;
	volatile int32_t x2619 = -4384529;
	int32_t x2620 = INT32_MIN;
	volatile int32_t t49 = 20995;

    t49 = ((x2617>>x2618)<=(x2619>x2620));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x2657 = INT16_MAX;
	int16_t x2658 = 2;
	static volatile uint8_t x2659 = 49U;
	int32_t x2660 = -1;
	int32_t t50 = 927606341;

    t50 = ((x2657>>x2658)<=(x2659>x2660));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x2753 = 25;
	uint8_t x2754 = 15U;
	uint16_t x2755 = UINT16_MAX;
	int32_t x2756 = -1;
	volatile int32_t t51 = 82637;

    t51 = ((x2753>>x2754)<=(x2755>x2756));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint16_t x2825 = UINT16_MAX;
	static volatile int64_t x2826 = 1LL;
	int64_t x2827 = INT64_MAX;
	int64_t x2828 = -7735031707LL;
	int32_t t52 = -309721601;

    t52 = ((x2825>>x2826)<=(x2827>x2828));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x2853 = 93732555LLU;
	uint32_t x2854 = 10U;
	int32_t x2855 = INT32_MAX;
	int64_t x2856 = -1LL;

    t53 = ((x2853>>x2854)<=(x2855>x2856));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x2957 = 26;
	int16_t x2958 = 1;
	int32_t x2959 = -1;
	int16_t x2960 = INT16_MAX;
	int32_t t54 = 0;

    t54 = ((x2957>>x2958)<=(x2959>x2960));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x3009 = 2826713937807135LLU;
	static volatile uint8_t x3010 = 12U;
	static volatile int8_t x3011 = INT8_MAX;
	uint8_t x3012 = 5U;
	static int32_t t55 = 6;

    t55 = ((x3009>>x3010)<=(x3011>x3012));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x3017 = UINT32_MAX;
	volatile int8_t x3018 = 15;
	volatile uint8_t x3019 = 23U;

    t56 = ((x3017>>x3018)<=(x3019>x3020));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x3021 = 40224558158755LLU;
	uint8_t x3022 = 24U;
	static volatile int16_t x3023 = INT16_MAX;
	int16_t x3024 = INT16_MIN;
	int32_t t57 = 3604851;

    t57 = ((x3021>>x3022)<=(x3023>x3024));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x3050 = 9U;
	int64_t x3052 = INT64_MAX;
	int32_t t58 = 11407;

    t58 = ((x3049>>x3050)<=(x3051>x3052));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x3093 = INT8_MAX;
	volatile uint32_t x3094 = 1U;
	uint8_t x3095 = UINT8_MAX;
	int32_t x3096 = INT32_MAX;
	int32_t t59 = 692739;

    t59 = ((x3093>>x3094)<=(x3095>x3096));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x3117 = 43;
	int8_t x3118 = 5;
	static volatile int8_t x3119 = INT8_MAX;
	int8_t x3120 = INT8_MIN;
	int32_t t60 = -15495726;

    t60 = ((x3117>>x3118)<=(x3119>x3120));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint8_t x3125 = 16U;
	uint8_t x3126 = 1U;
	static int64_t x3127 = -1LL;
	uint16_t x3128 = UINT16_MAX;
	int32_t t61 = -245;

    t61 = ((x3125>>x3126)<=(x3127>x3128));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile uint16_t x3153 = 101U;
	int8_t x3154 = 1;
	volatile int32_t x3155 = 17810215;
	int32_t t62 = 3237917;

    t62 = ((x3153>>x3154)<=(x3155>x3156));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint16_t x3198 = 7U;
	uint16_t x3199 = 378U;
	volatile int32_t t63 = 0;

    t63 = ((x3197>>x3198)<=(x3199>x3200));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x3214 = 7;
	static int32_t x3215 = -12828529;
	int32_t x3216 = -1;
	int32_t t64 = -30875;

    t64 = ((x3213>>x3214)<=(x3215>x3216));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int8_t x3289 = 38;
	int64_t x3290 = 1LL;
	int8_t x3291 = INT8_MIN;
	volatile int32_t x3292 = INT32_MAX;
	int32_t t65 = -2;

    t65 = ((x3289>>x3290)<=(x3291>x3292));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint8_t x3337 = 15U;
	uint8_t x3338 = 27U;
	static volatile int32_t x3340 = -1;
	volatile int32_t t66 = 5604237;

    t66 = ((x3337>>x3338)<=(x3339>x3340));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x3381 = UINT8_MAX;
	static volatile uint8_t x3382 = 3U;
	volatile int64_t x3383 = -1LL;
	static int64_t x3384 = INT64_MIN;
	volatile int32_t t67 = 0;

    t67 = ((x3381>>x3382)<=(x3383>x3384));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x3469 = INT16_MAX;
	static int32_t x3472 = INT32_MAX;
	static int32_t t68 = 13777;

    t68 = ((x3469>>x3470)<=(x3471>x3472));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x3521 = 315483351744LLU;
	uint16_t x3522 = 0U;
	int16_t x3523 = 588;
	int32_t t69 = -6;

    t69 = ((x3521>>x3522)<=(x3523>x3524));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x3561 = 88936643596875LLU;
	uint16_t x3562 = 2U;
	static int64_t x3564 = INT64_MIN;
	volatile int32_t t70 = 198218;

    t70 = ((x3561>>x3562)<=(x3563>x3564));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x3585 = 41862LLU;
	static volatile int16_t x3587 = INT16_MIN;

    t71 = ((x3585>>x3586)<=(x3587>x3588));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x3693 = INT8_MAX;
	int32_t x3695 = INT32_MIN;
	int32_t t72 = -23341694;

    t72 = ((x3693>>x3694)<=(x3695>x3696));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x3705 = UINT64_MAX;
	uint64_t x3707 = 31988866LLU;
	volatile uint8_t x3708 = 5U;
	int32_t t73 = 1249039;

    t73 = ((x3705>>x3706)<=(x3707>x3708));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x3757 = INT8_MAX;
	uint8_t x3759 = 2U;
	volatile int32_t t74 = 710;

    t74 = ((x3757>>x3758)<=(x3759>x3760));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x3785 = 110357321246102LLU;
	int8_t x3786 = 10;
	int16_t x3787 = INT16_MIN;
	int64_t x3788 = 1LL;
	volatile int32_t t75 = -3791573;

    t75 = ((x3785>>x3786)<=(x3787>x3788));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x3797 = 45U;
	volatile uint8_t x3798 = 3U;
	int64_t x3799 = INT64_MIN;

    t76 = ((x3797>>x3798)<=(x3799>x3800));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x3845 = UINT8_MAX;
	uint8_t x3846 = 22U;

    t77 = ((x3845>>x3846)<=(x3847>x3848));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x3893 = 8U;
	static int16_t x3895 = -6;
	int64_t x3896 = INT64_MIN;

    t78 = ((x3893>>x3894)<=(x3895>x3896));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x3969 = 1574572;
	int8_t x3970 = 26;
	int64_t x3971 = -1LL;
	uint16_t x3972 = 13349U;
	static int32_t t79 = 803849;

    t79 = ((x3969>>x3970)<=(x3971>x3972));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x3973 = 21U;
	volatile int32_t x3974 = 3;
	int8_t x3975 = INT8_MIN;
	int32_t t80 = 12602;

    t80 = ((x3973>>x3974)<=(x3975>x3976));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x4005 = INT16_MAX;
	volatile int32_t x4007 = INT32_MIN;
	static uint64_t x4008 = 548618LLU;
	volatile int32_t t81 = 1071411544;

    t81 = ((x4005>>x4006)<=(x4007>x4008));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x4045 = 26256U;
	int16_t x4046 = 13;
	int32_t x4047 = INT32_MIN;
	volatile int8_t x4048 = 0;

    t82 = ((x4045>>x4046)<=(x4047>x4048));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x4049 = 5034LLU;
	static uint8_t x4050 = 24U;
	uint32_t x4051 = 46U;
	static volatile int32_t t83 = 148993195;

    t83 = ((x4049>>x4050)<=(x4051>x4052));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x4061 = 390U;
	volatile uint16_t x4064 = 477U;
	static int32_t t84 = 239;

    t84 = ((x4061>>x4062)<=(x4063>x4064));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint16_t x4065 = 50U;
	static uint16_t x4066 = 1U;
	volatile int32_t x4067 = INT32_MIN;
	int16_t x4068 = INT16_MIN;
	static int32_t t85 = -137;

    t85 = ((x4065>>x4066)<=(x4067>x4068));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x4077 = 18;
	uint8_t x4078 = 4U;
	int16_t x4079 = -1;
	volatile int32_t x4080 = -1;

    t86 = ((x4077>>x4078)<=(x4079>x4080));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x4161 = INT16_MAX;
	static uint16_t x4162 = 2U;
	int32_t x4163 = INT32_MAX;
	volatile int64_t x4164 = -10231344LL;
	int32_t t87 = -399440;

    t87 = ((x4161>>x4162)<=(x4163>x4164));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x4185 = UINT8_MAX;
	volatile uint64_t x4187 = 14815681509961LLU;
	int16_t x4188 = INT16_MIN;
	static int32_t t88 = -264;

    t88 = ((x4185>>x4186)<=(x4187>x4188));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x4189 = INT8_MAX;
	static uint8_t x4190 = 13U;
	volatile uint16_t x4191 = 9434U;
	int64_t x4192 = INT64_MAX;
	int32_t t89 = 57223;

    t89 = ((x4189>>x4190)<=(x4191>x4192));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint8_t x4254 = 29U;
	int64_t x4255 = -20LL;
	static volatile int8_t x4256 = -1;

    t90 = ((x4253>>x4254)<=(x4255>x4256));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x4346 = 10;
	int64_t x4347 = -1LL;
	int8_t x4348 = -44;
	int32_t t91 = -4048101;

    t91 = ((x4345>>x4346)<=(x4347>x4348));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint64_t x4349 = 107990LLU;
	int16_t x4351 = -14;
	uint8_t x4352 = 0U;
	static volatile int32_t t92 = -15560;

    t92 = ((x4349>>x4350)<=(x4351>x4352));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x4416 = 124LL;
	int32_t t93 = -1748573;

    t93 = ((x4413>>x4414)<=(x4415>x4416));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x4429 = UINT32_MAX;
	uint8_t x4430 = 2U;
	volatile int16_t x4432 = -1;
	int32_t t94 = -275250;

    t94 = ((x4429>>x4430)<=(x4431>x4432));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x4457 = INT64_MAX;
	uint8_t x4458 = 23U;
	static int64_t x4459 = INT64_MAX;
	static int16_t x4460 = -1;
	static volatile int32_t t95 = 55736976;

    t95 = ((x4457>>x4458)<=(x4459>x4460));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x4497 = 56285;
	int8_t x4498 = 11;
	int8_t x4499 = INT8_MIN;
	static volatile int32_t t96 = -3;

    t96 = ((x4497>>x4498)<=(x4499>x4500));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x4505 = INT16_MAX;
	int8_t x4506 = 3;
	int8_t x4507 = 62;
	static int32_t t97 = 3894703;

    t97 = ((x4505>>x4506)<=(x4507>x4508));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x4530 = 50LLU;
	int32_t x4531 = -1;
	int16_t x4532 = INT16_MAX;
	int32_t t98 = 7226;

    t98 = ((x4529>>x4530)<=(x4531>x4532));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x4533 = 218642926;
	int64_t x4534 = 4LL;
	int64_t x4535 = -1LL;
	volatile int64_t x4536 = INT64_MIN;
	volatile int32_t t99 = 1;

    t99 = ((x4533>>x4534)<=(x4535>x4536));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x4545 = INT64_MAX;
	int8_t x4546 = 62;
	uint16_t x4547 = UINT16_MAX;
	int64_t x4548 = -1LL;

    t100 = ((x4545>>x4546)<=(x4547>x4548));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x4553 = 794469679996239708LL;
	int64_t x4555 = INT64_MIN;
	static volatile int8_t x4556 = -1;

    t101 = ((x4553>>x4554)<=(x4555>x4556));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint32_t x4646 = 3U;
	int16_t x4647 = INT16_MIN;
	int32_t x4648 = INT32_MAX;
	static int32_t t102 = -1157;

    t102 = ((x4645>>x4646)<=(x4647>x4648));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x4682 = 1U;
	int8_t x4683 = -1;

    t103 = ((x4681>>x4682)<=(x4683>x4684));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x4689 = 6U;
	static int16_t x4691 = INT16_MAX;
	int32_t x4692 = INT32_MIN;
	int32_t t104 = -6;

    t104 = ((x4689>>x4690)<=(x4691>x4692));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x4706 = 27U;
	uint16_t x4708 = 29U;
	static volatile int32_t t105 = 37;

    t105 = ((x4705>>x4706)<=(x4707>x4708));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x4737 = UINT64_MAX;
	static int32_t x4738 = 5;
	uint16_t x4739 = 1732U;
	volatile int16_t x4740 = INT16_MIN;

    t106 = ((x4737>>x4738)<=(x4739>x4740));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x4849 = INT16_MAX;
	static int16_t x4851 = 2010;
	static int16_t x4852 = 822;

    t107 = ((x4849>>x4850)<=(x4851>x4852));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x4865 = 2026U;
	static uint16_t x4867 = UINT16_MAX;
	volatile int32_t t108 = 0;

    t108 = ((x4865>>x4866)<=(x4867>x4868));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile uint16_t x4909 = 1U;
	uint8_t x4910 = 7U;
	static volatile int8_t x4911 = 25;
	int64_t x4912 = -108LL;
	volatile int32_t t109 = 15942746;

    t109 = ((x4909>>x4910)<=(x4911>x4912));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x4921 = 7U;
	static volatile uint8_t x4922 = 1U;
	volatile int32_t t110 = 346;

    t110 = ((x4921>>x4922)<=(x4923>x4924));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x4942 = 3;
	int16_t x4944 = INT16_MIN;

    t111 = ((x4941>>x4942)<=(x4943>x4944));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint64_t x4953 = UINT64_MAX;
	static int8_t x4954 = 15;
	uint16_t x4955 = UINT16_MAX;
	int8_t x4956 = INT8_MAX;
	volatile int32_t t112 = -359423646;

    t112 = ((x4953>>x4954)<=(x4955>x4956));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x4967 = -2291578501662088182LL;
	uint32_t x4968 = UINT32_MAX;
	int32_t t113 = 987397170;

    t113 = ((x4965>>x4966)<=(x4967>x4968));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x5066 = 14U;
	static uint16_t x5068 = 148U;
	int32_t t114 = 468;

    t114 = ((x5065>>x5066)<=(x5067>x5068));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x5129 = 7031865208647552LLU;
	volatile int16_t x5130 = 13;
	int64_t x5131 = -1LL;
	static uint32_t x5132 = UINT32_MAX;
	volatile int32_t t115 = -930010158;

    t115 = ((x5129>>x5130)<=(x5131>x5132));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x5141 = 22;
	int16_t x5142 = 0;
	static uint32_t x5143 = 1U;
	int32_t x5144 = INT32_MIN;

    t116 = ((x5141>>x5142)<=(x5143>x5144));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x5165 = 919776LL;
	int8_t x5166 = 5;
	volatile int8_t x5167 = -1;
	int32_t x5168 = 336284;
	static volatile int32_t t117 = -3119766;

    t117 = ((x5165>>x5166)<=(x5167>x5168));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint16_t x5213 = 1U;
	int8_t x5214 = 12;
	uint64_t x5215 = 43607768175848LLU;
	static int64_t x5216 = INT64_MIN;
	volatile int32_t t118 = 6200023;

    t118 = ((x5213>>x5214)<=(x5215>x5216));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x5241 = 14521;
	int8_t x5242 = 0;
	int64_t x5243 = INT64_MIN;
	static volatile int32_t t119 = -26;

    t119 = ((x5241>>x5242)<=(x5243>x5244));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x5385 = UINT32_MAX;
	uint64_t x5386 = 0LLU;
	static int64_t x5387 = -25909940468771LL;
	volatile uint32_t x5388 = UINT32_MAX;

    t120 = ((x5385>>x5386)<=(x5387>x5388));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x5505 = 27856950;
	uint16_t x5506 = 22U;
	static volatile int32_t t121 = 19721;

    t121 = ((x5505>>x5506)<=(x5507>x5508));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint8_t x5593 = 6U;
	int32_t x5594 = 0;
	int32_t x5595 = INT32_MAX;
	int8_t x5596 = 0;
	int32_t t122 = 4266858;

    t122 = ((x5593>>x5594)<=(x5595>x5596));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x5725 = UINT16_MAX;
	uint8_t x5726 = 3U;
	volatile int16_t x5727 = 6718;
	int64_t x5728 = INT64_MIN;
	volatile int32_t t123 = 1482;

    t123 = ((x5725>>x5726)<=(x5727>x5728));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x5745 = 117U;
	volatile int8_t x5746 = 9;
	int32_t x5747 = INT32_MIN;
	int8_t x5748 = INT8_MIN;
	volatile int32_t t124 = 67631067;

    t124 = ((x5745>>x5746)<=(x5747>x5748));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x5757 = INT8_MAX;
	volatile uint16_t x5758 = 12U;
	int16_t x5759 = -1;
	volatile int32_t x5760 = INT32_MIN;

    t125 = ((x5757>>x5758)<=(x5759>x5760));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x5765 = INT8_MAX;
	static int8_t x5766 = 8;
	static volatile int32_t x5767 = 26089418;
	int64_t x5768 = -36193605466263687LL;
	volatile int32_t t126 = -5762763;

    t126 = ((x5765>>x5766)<=(x5767>x5768));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x5813 = 11841;
	int8_t x5814 = 0;
	int16_t x5815 = INT16_MIN;
	int32_t x5816 = INT32_MAX;
	volatile int32_t t127 = -1;

    t127 = ((x5813>>x5814)<=(x5815>x5816));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x5817 = 31U;
	uint8_t x5818 = 3U;
	int8_t x5819 = INT8_MIN;
	uint16_t x5820 = 121U;
	volatile int32_t t128 = 860652;

    t128 = ((x5817>>x5818)<=(x5819>x5820));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x5873 = 17U;
	uint8_t x5874 = 1U;
	static int16_t x5875 = -3293;
	int64_t x5876 = -1LL;
	int32_t t129 = -59;

    t129 = ((x5873>>x5874)<=(x5875>x5876));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x5929 = 16478040798LLU;
	uint8_t x5930 = 0U;
	int16_t x5932 = -1;
	int32_t t130 = 0;

    t130 = ((x5929>>x5930)<=(x5931>x5932));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x5957 = 19U;
	static volatile int64_t x5959 = INT64_MIN;
	uint32_t x5960 = 2U;
	int32_t t131 = -123882808;

    t131 = ((x5957>>x5958)<=(x5959>x5960));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x6077 = 57630;
	volatile int8_t x6078 = 2;
	uint64_t x6079 = 439075LLU;
	uint32_t x6080 = 810U;
	static int32_t t132 = 7633939;

    t132 = ((x6077>>x6078)<=(x6079>x6080));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int8_t x6095 = INT8_MIN;
	static int64_t x6096 = 2395986LL;
	static int32_t t133 = 27898;

    t133 = ((x6093>>x6094)<=(x6095>x6096));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint64_t x6097 = 28760777169112311LLU;
	uint8_t x6098 = 31U;
	uint64_t x6100 = 12333370204863LLU;
	int32_t t134 = 3;

    t134 = ((x6097>>x6098)<=(x6099>x6100));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x6105 = INT8_MAX;
	uint16_t x6106 = 8U;
	uint8_t x6107 = 1U;
	static int32_t x6108 = INT32_MIN;
	int32_t t135 = -488;

    t135 = ((x6105>>x6106)<=(x6107>x6108));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x6121 = INT8_MAX;
	uint32_t x6122 = 8U;
	uint8_t x6123 = 0U;
	int32_t x6124 = INT32_MIN;
	int32_t t136 = -8014093;

    t136 = ((x6121>>x6122)<=(x6123>x6124));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x6169 = UINT64_MAX;
	volatile int16_t x6171 = INT16_MAX;
	uint16_t x6172 = 28U;
	int32_t t137 = -193511;

    t137 = ((x6169>>x6170)<=(x6171>x6172));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x6214 = 12U;
	int8_t x6215 = INT8_MAX;
	int32_t x6216 = INT32_MAX;

    t138 = ((x6213>>x6214)<=(x6215>x6216));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x6233 = INT32_MAX;
	int8_t x6234 = 1;
	volatile uint64_t x6235 = UINT64_MAX;
	int16_t x6236 = INT16_MIN;

    t139 = ((x6233>>x6234)<=(x6235>x6236));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint64_t x6305 = 173474LLU;
	uint16_t x6307 = 47U;
	uint32_t x6308 = 1U;
	static volatile int32_t t140 = -1;

    t140 = ((x6305>>x6306)<=(x6307>x6308));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int64_t x6489 = INT64_MAX;
	uint64_t x6490 = 9LLU;
	uint32_t x6491 = 2U;
	int8_t x6492 = INT8_MIN;
	static volatile int32_t t141 = 733838698;

    t141 = ((x6489>>x6490)<=(x6491>x6492));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x6497 = INT32_MAX;
	static uint8_t x6498 = 18U;
	int32_t t142 = -96852279;

    t142 = ((x6497>>x6498)<=(x6499>x6500));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x6501 = INT8_MAX;
	uint8_t x6502 = 7U;
	static int64_t x6503 = 3449948163LL;
	uint32_t x6504 = UINT32_MAX;
	static int32_t t143 = -42;

    t143 = ((x6501>>x6502)<=(x6503>x6504));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x6686 = 29U;
	int32_t x6687 = 69489;
	int32_t t144 = -477;

    t144 = ((x6685>>x6686)<=(x6687>x6688));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x6706 = 8;
	uint64_t x6707 = UINT64_MAX;
	uint64_t x6708 = 22781LLU;

    t145 = ((x6705>>x6706)<=(x6707>x6708));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x6734 = 0U;
	int64_t x6735 = -233179227583047LL;
	int8_t x6736 = -1;
	int32_t t146 = 0;

    t146 = ((x6733>>x6734)<=(x6735>x6736));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x6861 = 0;
	uint8_t x6862 = 7U;
	volatile uint64_t x6863 = 106679029877LLU;
	volatile int32_t t147 = -281415421;

    t147 = ((x6861>>x6862)<=(x6863>x6864));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x6885 = UINT64_MAX;
	volatile int64_t x6887 = INT64_MAX;
	static volatile int32_t t148 = -2617;

    t148 = ((x6885>>x6886)<=(x6887>x6888));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint64_t x6958 = 31LLU;
	int64_t x6959 = -62851565980478LL;
	static int8_t x6960 = -1;
	static int32_t t149 = 29255;

    t149 = ((x6957>>x6958)<=(x6959>x6960));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint32_t x6997 = UINT32_MAX;
	uint16_t x6998 = 0U;
	uint16_t x7000 = UINT16_MAX;
	int32_t t150 = 7;

    t150 = ((x6997>>x6998)<=(x6999>x7000));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x7066 = 0;
	int16_t x7067 = 3191;
	static uint32_t x7068 = UINT32_MAX;

    t151 = ((x7065>>x7066)<=(x7067>x7068));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x7101 = 63U;
	static volatile int8_t x7102 = 0;
	volatile uint32_t x7103 = 141184U;
	static int64_t x7104 = INT64_MIN;
	int32_t t152 = 8723;

    t152 = ((x7101>>x7102)<=(x7103>x7104));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x7301 = 3656272LLU;
	volatile int8_t x7303 = -1;
	static int8_t x7304 = 1;
	volatile int32_t t153 = 513323;

    t153 = ((x7301>>x7302)<=(x7303>x7304));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint8_t x7321 = UINT8_MAX;
	uint8_t x7322 = 3U;
	volatile int8_t x7323 = INT8_MAX;
	volatile int8_t x7324 = INT8_MAX;
	volatile int32_t t154 = -1984265;

    t154 = ((x7321>>x7322)<=(x7323>x7324));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint8_t x7365 = UINT8_MAX;
	static int8_t x7366 = 1;
	int16_t x7367 = INT16_MAX;
	int64_t x7368 = -1LL;
	static volatile int32_t t155 = -1;

    t155 = ((x7365>>x7366)<=(x7367>x7368));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint8_t x7438 = 0U;
	static volatile int64_t x7439 = -1LL;
	int16_t x7440 = -49;
	volatile int32_t t156 = -401930;

    t156 = ((x7437>>x7438)<=(x7439>x7440));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint8_t x7441 = 95U;
	uint8_t x7442 = 1U;
	uint64_t x7443 = UINT64_MAX;
	uint16_t x7444 = 6110U;
	static int32_t t157 = 271911370;

    t157 = ((x7441>>x7442)<=(x7443>x7444));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x7481 = 0U;
	uint8_t x7482 = 1U;
	static volatile int32_t x7483 = INT32_MAX;
	uint32_t x7484 = 51547551U;
	volatile int32_t t158 = -1021838876;

    t158 = ((x7481>>x7482)<=(x7483>x7484));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x7517 = UINT64_MAX;
	int32_t x7519 = INT32_MIN;
	int8_t x7520 = -1;
	int32_t t159 = 6965;

    t159 = ((x7517>>x7518)<=(x7519>x7520));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x7549 = 341U;
	int32_t x7551 = INT32_MIN;
	static volatile int8_t x7552 = INT8_MIN;

    t160 = ((x7549>>x7550)<=(x7551>x7552));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x7594 = 0U;
	static uint32_t x7595 = 2977U;
	static int8_t x7596 = INT8_MAX;
	int32_t t161 = -5883476;

    t161 = ((x7593>>x7594)<=(x7595>x7596));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x7630 = 0;
	int8_t x7632 = -11;
	int32_t t162 = 4059;

    t162 = ((x7629>>x7630)<=(x7631>x7632));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile uint8_t x7653 = UINT8_MAX;
	uint8_t x7654 = 1U;
	uint32_t x7655 = UINT32_MAX;
	static int16_t x7656 = -411;
	static volatile int32_t t163 = -32;

    t163 = ((x7653>>x7654)<=(x7655>x7656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x7657 = INT16_MAX;
	volatile uint8_t x7659 = UINT8_MAX;
	uint64_t x7660 = 92LLU;
	volatile int32_t t164 = -1119;

    t164 = ((x7657>>x7658)<=(x7659>x7660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x7709 = 0;
	int32_t x7711 = -1;
	int16_t x7712 = INT16_MIN;
	int32_t t165 = 5216;

    t165 = ((x7709>>x7710)<=(x7711>x7712));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x7761 = 3374983U;
	int64_t x7762 = 4LL;
	static int32_t x7763 = -1;
	volatile uint8_t x7764 = 2U;
	int32_t t166 = -11679328;

    t166 = ((x7761>>x7762)<=(x7763>x7764));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x7785 = 10786958270409806LL;
	uint8_t x7786 = 0U;
	static volatile int8_t x7788 = INT8_MIN;
	volatile int32_t t167 = 1;

    t167 = ((x7785>>x7786)<=(x7787>x7788));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint8_t x7858 = 10U;
	uint16_t x7859 = 15U;
	uint8_t x7860 = 29U;
	volatile int32_t t168 = -188;

    t168 = ((x7857>>x7858)<=(x7859>x7860));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x7873 = 1540574450763247658LLU;
	static int16_t x7874 = 0;
	uint8_t x7875 = 119U;
	int32_t x7876 = -1;
	volatile int32_t t169 = 221;

    t169 = ((x7873>>x7874)<=(x7875>x7876));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x7889 = 1401599369337265468LLU;
	uint16_t x7890 = 47U;
	uint64_t x7891 = 57542LLU;
	uint32_t x7892 = 1U;
	int32_t t170 = 155721;

    t170 = ((x7889>>x7890)<=(x7891>x7892));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x7897 = 54051780784LLU;
	int16_t x7898 = 0;
	uint8_t x7899 = 0U;
	static int32_t x7900 = -1;
	static int32_t t171 = 6;

    t171 = ((x7897>>x7898)<=(x7899>x7900));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int32_t x8053 = 1;
	int64_t x8055 = 342354767143LL;
	static uint16_t x8056 = 0U;
	volatile int32_t t172 = -5149;

    t172 = ((x8053>>x8054)<=(x8055>x8056));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x8082 = 21;
	uint8_t x8083 = 8U;
	int32_t x8084 = 6615878;
	static int32_t t173 = 0;

    t173 = ((x8081>>x8082)<=(x8083>x8084));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x8105 = 3U;
	int8_t x8107 = -12;
	int32_t t174 = -5163;

    t174 = ((x8105>>x8106)<=(x8107>x8108));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x8245 = UINT16_MAX;
	uint16_t x8246 = 0U;
	uint8_t x8247 = UINT8_MAX;
	static uint32_t x8248 = 27U;
	volatile int32_t t175 = -3;

    t175 = ((x8245>>x8246)<=(x8247>x8248));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x8273 = 2353U;
	volatile uint16_t x8274 = 12U;
	int16_t x8275 = INT16_MIN;
	static int32_t x8276 = 24;
	int32_t t176 = 120;

    t176 = ((x8273>>x8274)<=(x8275>x8276));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x8277 = 1U;
	static int32_t x8279 = -1;
	uint8_t x8280 = 1U;
	int32_t t177 = -13;

    t177 = ((x8277>>x8278)<=(x8279>x8280));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x8285 = INT16_MAX;
	uint16_t x8286 = 5U;
	uint64_t x8287 = 75LLU;
	int16_t x8288 = INT16_MAX;
	volatile int32_t t178 = 9;

    t178 = ((x8285>>x8286)<=(x8287>x8288));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint64_t x8309 = 95615820505LLU;
	int32_t x8311 = INT32_MIN;
	static int32_t x8312 = INT32_MAX;
	volatile int32_t t179 = 310672;

    t179 = ((x8309>>x8310)<=(x8311>x8312));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x8317 = 1LL;
	uint32_t x8318 = 7U;
	uint16_t x8320 = UINT16_MAX;
	int32_t t180 = 397254928;

    t180 = ((x8317>>x8318)<=(x8319>x8320));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint16_t x8322 = 7U;
	static int64_t x8323 = -1LL;
	volatile uint32_t x8324 = UINT32_MAX;
	volatile int32_t t181 = 11625017;

    t181 = ((x8321>>x8322)<=(x8323>x8324));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x8341 = UINT8_MAX;
	int16_t x8342 = 3;
	uint8_t x8343 = UINT8_MAX;
	uint8_t x8344 = 3U;

    t182 = ((x8341>>x8342)<=(x8343>x8344));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x8349 = 1;
	int32_t x8351 = 1;
	uint64_t x8352 = UINT64_MAX;
	int32_t t183 = -2232974;

    t183 = ((x8349>>x8350)<=(x8351>x8352));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x8373 = 28U;
	static uint8_t x8374 = 12U;
	int16_t x8376 = 29;
	static volatile int32_t t184 = -2000554;

    t184 = ((x8373>>x8374)<=(x8375>x8376));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x8389 = 3U;
	uint64_t x8391 = 187843338371042LLU;
	int64_t x8392 = INT64_MAX;
	volatile int32_t t185 = -389;

    t185 = ((x8389>>x8390)<=(x8391>x8392));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x8434 = 11;
	static int64_t x8435 = -7022066334033LL;
	volatile int8_t x8436 = -1;
	static int32_t t186 = 19104366;

    t186 = ((x8433>>x8434)<=(x8435>x8436));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x8446 = 10U;
	uint8_t x8447 = 48U;
	static uint16_t x8448 = 5553U;
	static volatile int32_t t187 = -187163;

    t187 = ((x8445>>x8446)<=(x8447>x8448));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x8597 = UINT32_MAX;
	int16_t x8598 = 0;
	int8_t x8599 = INT8_MIN;
	int32_t x8600 = -1;
	int32_t t188 = 13871;

    t188 = ((x8597>>x8598)<=(x8599>x8600));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x8601 = INT16_MAX;
	int8_t x8602 = 3;
	int32_t x8603 = -14;
	static volatile int16_t x8604 = 0;
	static volatile int32_t t189 = 55084671;

    t189 = ((x8601>>x8602)<=(x8603>x8604));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x8618 = 2;
	static int16_t x8619 = INT16_MAX;
	static int64_t x8620 = INT64_MAX;
	int32_t t190 = 216;

    t190 = ((x8617>>x8618)<=(x8619>x8620));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x8781 = INT16_MAX;
	volatile int32_t x8782 = 3;
	uint32_t x8783 = 12359U;
	uint16_t x8784 = 161U;
	int32_t t191 = -981556;

    t191 = ((x8781>>x8782)<=(x8783>x8784));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile uint32_t x8825 = 15625U;
	int32_t x8826 = 1;
	int64_t x8827 = -1LL;

    t192 = ((x8825>>x8826)<=(x8827>x8828));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint16_t x8946 = 11U;
	static int32_t x8947 = -1;
	uint8_t x8948 = 1U;
	int32_t t193 = 585877613;

    t193 = ((x8945>>x8946)<=(x8947>x8948));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x8961 = INT32_MAX;
	uint16_t x8962 = 2U;
	static uint8_t x8963 = UINT8_MAX;
	volatile uint8_t x8964 = 12U;
	volatile int32_t t194 = 29355;

    t194 = ((x8961>>x8962)<=(x8963>x8964));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x9005 = 28;
	volatile uint8_t x9006 = 21U;
	int8_t x9007 = INT8_MIN;
	volatile int32_t t195 = -93;

    t195 = ((x9005>>x9006)<=(x9007>x9008));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint16_t x9061 = 823U;
	int8_t x9062 = 0;
	static int16_t x9063 = INT16_MIN;
	uint32_t x9064 = UINT32_MAX;

    t196 = ((x9061>>x9062)<=(x9063>x9064));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x9085 = 0;
	static uint64_t x9087 = UINT64_MAX;
	int64_t x9088 = INT64_MAX;
	volatile int32_t t197 = 3133;

    t197 = ((x9085>>x9086)<=(x9087>x9088));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x9105 = INT32_MAX;
	uint16_t x9106 = 0U;
	volatile int64_t x9107 = INT64_MIN;
	int8_t x9108 = -1;
	volatile int32_t t198 = -28377;

    t198 = ((x9105>>x9106)<=(x9107>x9108));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x9121 = INT8_MAX;
	static int8_t x9122 = 0;
	int32_t x9123 = 12437;
	uint8_t x9124 = UINT8_MAX;
	volatile int32_t t199 = 5617594;

    t199 = ((x9121>>x9122)<=(x9123>x9124));

    if (t199 != 0) { NG(); } else { ; }
	
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

