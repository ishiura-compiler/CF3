
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

static int16_t x1 = -7;
volatile uint8_t x2 = 30U;
static int16_t x3 = INT16_MIN;
uint8_t x4 = 7U;
static volatile int32_t x65 = INT32_MIN;
int16_t x171 = INT16_MAX;
int32_t t2 = 664369;
uint16_t x192 = 15U;
uint64_t x206 = 427219206192883542LLU;
int16_t x242 = -1;
int8_t x243 = INT8_MIN;
int64_t x265 = -1LL;
static int32_t x266 = INT32_MIN;
int32_t t6 = -24;
int8_t x273 = -13;
int32_t t7 = 36;
int32_t x290 = -25635588;
uint8_t x301 = UINT8_MAX;
static uint64_t x302 = 1369683051940LLU;
int32_t x378 = INT32_MAX;
static uint8_t x384 = 1U;
volatile int32_t t13 = 3;
static int16_t x389 = INT16_MIN;
uint8_t x390 = 0U;
volatile uint32_t x391 = 2860023U;
uint8_t x410 = UINT8_MAX;
int64_t x423 = -298792758573001LL;
int16_t x458 = INT16_MIN;
uint64_t x466 = 1LLU;
uint16_t x510 = UINT16_MAX;
volatile uint16_t x511 = 3847U;
uint16_t x537 = 4657U;
int64_t x539 = -1LL;
static int32_t x541 = 52;
uint8_t x578 = 20U;
static volatile uint8_t x580 = 1U;
int64_t x595 = INT64_MIN;
uint16_t x620 = 7U;
int8_t x634 = -1;
volatile int64_t x635 = INT64_MIN;
volatile int32_t t30 = -50378384;
volatile int64_t x722 = -1LL;
int64_t x777 = INT64_MIN;
int32_t t33 = 108685;
static int8_t x877 = INT8_MAX;
volatile int32_t x929 = INT32_MAX;
int32_t x1011 = INT32_MAX;
int32_t t38 = 113422;
int8_t x1098 = 7;
int8_t x1150 = -2;
static int8_t x1165 = INT8_MIN;
volatile int32_t t45 = 470;
int16_t x1195 = -1;
volatile int16_t x1210 = -1;
int8_t x1241 = INT8_MIN;
uint16_t x1242 = 1U;
static int32_t x1243 = INT32_MAX;
int8_t x1287 = INT8_MAX;
int16_t x1290 = -4817;
volatile int32_t x1299 = 26;
volatile int32_t t53 = -250922945;
int8_t x1385 = INT8_MIN;
uint16_t x1388 = 20U;
int8_t x1395 = -1;
static volatile int16_t x1396 = 15;
static int8_t x1417 = 1;
int64_t x1419 = -1LL;
int8_t x1420 = 11;
int32_t t58 = -927030178;
volatile int32_t t59 = 221205735;
int8_t x1521 = INT8_MIN;
int8_t x1529 = -13;
int16_t x1532 = 1;
static int16_t x1573 = -1;
volatile int32_t x1574 = INT32_MIN;
volatile uint8_t x1709 = 4U;
int64_t x1738 = INT64_MAX;
uint8_t x1810 = 1U;
int64_t x1811 = -124073303LL;
volatile int32_t t66 = 141700;
int8_t x1892 = 2;
int16_t x1917 = INT16_MIN;
int32_t x1938 = -1;
int32_t t72 = 659600;
static uint32_t x2010 = 0U;
int16_t x2011 = INT16_MIN;
uint16_t x2012 = 1U;
volatile int32_t x2061 = 306;
int64_t x2139 = INT64_MAX;
volatile int32_t x2155 = INT32_MIN;
int64_t x2199 = -8931LL;
int8_t x2232 = 0;
uint16_t x2236 = 20U;
static volatile int16_t x2281 = 140;
int16_t x2282 = INT16_MIN;
static int8_t x2373 = -37;
volatile uint64_t x2374 = UINT64_MAX;
uint16_t x2385 = 869U;
uint8_t x2388 = 1U;
int8_t x2511 = -30;
uint32_t x2561 = 637081983U;
int32_t t92 = 86621617;
uint8_t x2568 = 2U;
int32_t t94 = 69895438;
int32_t x2686 = INT32_MIN;
volatile uint16_t x2688 = 14U;
int32_t t97 = -319;
uint8_t x2748 = 6U;
int32_t x2806 = INT32_MAX;
int32_t x2821 = -613;
uint32_t x2833 = 3098U;
uint16_t x2835 = 33U;
volatile int32_t t102 = -132;
int8_t x2858 = 3;
int8_t x2920 = 0;
int64_t x2926 = INT64_MIN;
uint8_t x2944 = 2U;
volatile int32_t t106 = -637;
int8_t x2994 = 26;
volatile int16_t x3170 = -11;
int16_t x3171 = -1;
static int32_t x3172 = 0;
int32_t x3197 = -6007;
int32_t t111 = -659;
int64_t x3229 = INT64_MAX;
static uint64_t x3230 = 2124421303LLU;
static uint32_t x3238 = UINT32_MAX;
int8_t x3240 = 8;
static uint8_t x3246 = 0U;
int16_t x3247 = -15659;
uint16_t x3248 = 0U;
uint16_t x3249 = 3299U;
int32_t x3350 = 125948530;
volatile int64_t x3394 = -1LL;
uint32_t x3398 = UINT32_MAX;
static int32_t t119 = -1;
static int64_t x3438 = -1LL;
int8_t x3498 = INT8_MAX;
int64_t x3499 = INT64_MIN;
int64_t x3500 = 3LL;
static int16_t x3502 = -112;
uint16_t x3503 = UINT16_MAX;
int16_t x3518 = INT16_MIN;
volatile int32_t x3533 = INT32_MIN;
int8_t x3536 = 0;
volatile int32_t t126 = 0;
int16_t x3706 = -5412;
static int32_t x3769 = -1347837;
volatile int16_t x3795 = INT16_MIN;
uint64_t x3802 = 418633783245LLU;
int64_t x3886 = INT64_MAX;
int32_t t133 = -4152357;
static int32_t x3902 = -1;
int32_t x3922 = -1;
static uint16_t x4037 = 3489U;
int16_t x4198 = INT16_MIN;
volatile int16_t x4201 = 14;
volatile int16_t x4202 = 4;
uint8_t x4203 = UINT8_MAX;
volatile int32_t t142 = -1;
int16_t x4239 = INT16_MIN;
volatile uint32_t x4267 = 1027U;
int16_t x4287 = -1;
int8_t x4301 = INT8_MIN;
volatile uint8_t x4304 = 24U;
volatile int32_t t151 = -3;
int64_t x4323 = -203839929656LL;
uint8_t x4424 = 3U;
uint8_t x4576 = 10U;
int8_t x4583 = INT8_MIN;
int32_t t161 = 94;
static volatile uint32_t x4634 = 28627U;
static int32_t x4678 = -9075;
volatile int32_t t164 = 436674165;
uint8_t x4709 = 49U;
uint32_t x4721 = UINT32_MAX;
static int32_t x4722 = INT32_MIN;
volatile int32_t t166 = 0;
volatile int32_t x4831 = 862;
volatile int32_t t170 = -7105;
static uint16_t x4971 = 2561U;
volatile int32_t x4980 = 15;
uint8_t x5013 = 3U;
int16_t x5021 = INT16_MIN;
int32_t t175 = 996561142;
uint8_t x5033 = 2U;
int32_t t176 = 209131;
static int32_t x5139 = INT32_MIN;
volatile uint8_t x5172 = 0U;
int32_t t181 = 199;
uint8_t x5220 = 7U;
int64_t x5221 = -1809016LL;
static uint8_t x5224 = 10U;
int16_t x5226 = -1;
static int64_t x5227 = -5585LL;
int64_t x5247 = -10267271597932LL;
uint8_t x5248 = 28U;
int8_t x5353 = INT8_MIN;
int32_t t187 = -596901;
volatile uint16_t x5413 = 6U;
uint8_t x5414 = 49U;
uint8_t x5488 = 13U;
volatile int8_t x5533 = -57;
int64_t x5574 = -1LL;
uint32_t x5580 = 27U;
int8_t x5585 = 1;
static int32_t x5586 = INT32_MIN;
volatile int64_t x5587 = INT64_MIN;
int64_t x5594 = -1LL;
static uint8_t x5595 = UINT8_MAX;
static int16_t x5615 = INT16_MIN;


void f0(void) {
    	static volatile int32_t t0 = -483896;

    t0 = ((x1==(x2==x3))<<x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x66 = 21602342947LL;
	int32_t x67 = -1;
	static uint8_t x68 = 3U;
	volatile int32_t t1 = 880671154;

    t1 = ((x65==(x66==x67))<<x68);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x169 = INT8_MAX;
	int8_t x170 = INT8_MIN;
	static uint8_t x172 = 3U;

    t2 = ((x169==(x170==x171))<<x172);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x189 = -1;
	int8_t x190 = -1;
	int8_t x191 = 61;
	int32_t t3 = -12742230;

    t3 = ((x189==(x190==x191))<<x192);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x205 = -1;
	int16_t x207 = 49;
	uint16_t x208 = 1U;
	int32_t t4 = 0;

    t4 = ((x205==(x206==x207))<<x208);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint64_t x241 = 0LLU;
	volatile int16_t x244 = 0;
	static int32_t t5 = 936119;

    t5 = ((x241==(x242==x243))<<x244);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x267 = 57;
	uint64_t x268 = 8LLU;

    t6 = ((x265==(x266==x267))<<x268);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x274 = 0;
	int64_t x275 = -782348936LL;
	volatile int8_t x276 = 1;

    t7 = ((x273==(x274==x275))<<x276);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x289 = -23795636;
	static int32_t x291 = -1;
	int32_t x292 = 1;
	static int32_t t8 = 0;

    t8 = ((x289==(x290==x291))<<x292);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint32_t x303 = 21509008U;
	uint32_t x304 = 3U;
	volatile int32_t t9 = 131086491;

    t9 = ((x301==(x302==x303))<<x304);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint32_t x317 = UINT32_MAX;
	static int32_t x318 = -1;
	int8_t x319 = INT8_MIN;
	uint16_t x320 = 1U;
	int32_t t10 = 40402003;

    t10 = ((x317==(x318==x319))<<x320);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x357 = 2752;
	int64_t x358 = INT64_MIN;
	uint64_t x359 = 156870269470737LLU;
	int64_t x360 = 3LL;
	static volatile int32_t t11 = 278577;

    t11 = ((x357==(x358==x359))<<x360);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x377 = 1797;
	static int8_t x379 = 1;
	static volatile uint32_t x380 = 10U;
	int32_t t12 = 0;

    t12 = ((x377==(x378==x379))<<x380);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x381 = INT8_MIN;
	int16_t x382 = INT16_MIN;
	uint8_t x383 = 1U;

    t13 = ((x381==(x382==x383))<<x384);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int8_t x392 = 3;
	volatile int32_t t14 = 160256412;

    t14 = ((x389==(x390==x391))<<x392);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x409 = 3U;
	int16_t x411 = 249;
	uint16_t x412 = 8U;
	int32_t t15 = 289664;

    t15 = ((x409==(x410==x411))<<x412);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x421 = 15489U;
	uint16_t x422 = UINT16_MAX;
	uint16_t x424 = 3U;
	volatile int32_t t16 = -3043;

    t16 = ((x421==(x422==x423))<<x424);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x437 = 2U;
	int8_t x438 = -1;
	static int8_t x439 = -1;
	volatile int16_t x440 = 1;
	int32_t t17 = -212498;

    t17 = ((x437==(x438==x439))<<x440);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x457 = INT64_MIN;
	uint16_t x459 = 390U;
	int8_t x460 = 0;
	int32_t t18 = 874365;

    t18 = ((x457==(x458==x459))<<x460);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x465 = -1326387LL;
	volatile int16_t x467 = INT16_MAX;
	uint16_t x468 = 1U;
	volatile int32_t t19 = -872341;

    t19 = ((x465==(x466==x467))<<x468);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x509 = INT8_MAX;
	uint64_t x512 = 3LLU;
	static volatile int32_t t20 = 698237;

    t20 = ((x509==(x510==x511))<<x512);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int8_t x538 = 1;
	volatile uint8_t x540 = 0U;
	int32_t t21 = -50;

    t21 = ((x537==(x538==x539))<<x540);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x542 = INT8_MIN;
	int16_t x543 = -1;
	volatile uint8_t x544 = 7U;
	static int32_t t22 = -91;

    t22 = ((x541==(x542==x543))<<x544);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x557 = INT16_MAX;
	volatile int64_t x558 = INT64_MIN;
	static int8_t x559 = INT8_MIN;
	uint8_t x560 = 7U;
	volatile int32_t t23 = -1;

    t23 = ((x557==(x558==x559))<<x560);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x577 = -44848110454LL;
	int8_t x579 = 1;
	volatile int32_t t24 = -4;

    t24 = ((x577==(x578==x579))<<x580);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x585 = INT16_MIN;
	int64_t x586 = INT64_MIN;
	int32_t x587 = INT32_MAX;
	static uint32_t x588 = 1U;
	volatile int32_t t25 = 364980;

    t25 = ((x585==(x586==x587))<<x588);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x593 = INT64_MIN;
	static int16_t x594 = INT16_MIN;
	volatile uint16_t x596 = 0U;
	volatile int32_t t26 = 33581327;

    t26 = ((x593==(x594==x595))<<x596);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x613 = -1LL;
	int16_t x614 = INT16_MIN;
	int64_t x615 = -34667LL;
	int16_t x616 = 3;
	int32_t t27 = 130942;

    t27 = ((x613==(x614==x615))<<x616);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x617 = 13397627LLU;
	volatile int64_t x618 = INT64_MIN;
	uint32_t x619 = UINT32_MAX;
	static volatile int32_t t28 = -14;

    t28 = ((x617==(x618==x619))<<x620);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x633 = INT8_MIN;
	static uint16_t x636 = 0U;
	static int32_t t29 = 868;

    t29 = ((x633==(x634==x635))<<x636);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int32_t x697 = -25324;
	volatile int8_t x698 = INT8_MAX;
	volatile uint32_t x699 = 283207704U;
	uint8_t x700 = 24U;

    t30 = ((x697==(x698==x699))<<x700);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x713 = 2031254958U;
	int8_t x714 = -1;
	int16_t x715 = INT16_MIN;
	static volatile uint8_t x716 = 31U;
	static int32_t t31 = -26614;

    t31 = ((x713==(x714==x715))<<x716);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x721 = INT8_MAX;
	int16_t x723 = INT16_MIN;
	static int8_t x724 = 9;
	volatile int32_t t32 = -17239814;

    t32 = ((x721==(x722==x723))<<x724);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x778 = UINT8_MAX;
	int64_t x779 = 1468LL;
	int8_t x780 = 6;

    t33 = ((x777==(x778==x779))<<x780);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint16_t x878 = UINT16_MAX;
	int16_t x879 = INT16_MIN;
	volatile int16_t x880 = 7;
	int32_t t34 = 12943;

    t34 = ((x877==(x878==x879))<<x880);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x930 = INT16_MAX;
	int64_t x931 = INT64_MAX;
	static int32_t x932 = 18;
	volatile int32_t t35 = -19353053;

    t35 = ((x929==(x930==x931))<<x932);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x957 = 9U;
	volatile int64_t x958 = INT64_MIN;
	int8_t x959 = INT8_MIN;
	uint8_t x960 = 0U;
	static int32_t t36 = -371220885;

    t36 = ((x957==(x958==x959))<<x960);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x1009 = -1;
	static int16_t x1010 = 0;
	uint8_t x1012 = 28U;
	int32_t t37 = -242113;

    t37 = ((x1009==(x1010==x1011))<<x1012);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x1041 = -1;
	int64_t x1042 = INT64_MAX;
	static int32_t x1043 = 257976863;
	static volatile uint8_t x1044 = 5U;

    t38 = ((x1041==(x1042==x1043))<<x1044);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x1097 = -195;
	volatile uint64_t x1099 = 8212451490013LLU;
	volatile uint8_t x1100 = 21U;
	int32_t t39 = 3;

    t39 = ((x1097==(x1098==x1099))<<x1100);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x1101 = 63821U;
	static volatile int8_t x1102 = -1;
	uint8_t x1103 = 5U;
	volatile int8_t x1104 = 1;
	static int32_t t40 = 231313;

    t40 = ((x1101==(x1102==x1103))<<x1104);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x1113 = INT32_MIN;
	uint32_t x1114 = UINT32_MAX;
	volatile int8_t x1115 = INT8_MIN;
	uint32_t x1116 = 0U;
	static int32_t t41 = 530585956;

    t41 = ((x1113==(x1114==x1115))<<x1116);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x1149 = 23;
	volatile uint8_t x1151 = UINT8_MAX;
	uint8_t x1152 = 14U;
	volatile int32_t t42 = -14;

    t42 = ((x1149==(x1150==x1151))<<x1152);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x1166 = 1;
	int16_t x1167 = 0;
	int8_t x1168 = 2;
	volatile int32_t t43 = -1691756;

    t43 = ((x1165==(x1166==x1167))<<x1168);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x1185 = -1;
	static volatile uint8_t x1186 = 1U;
	uint32_t x1187 = UINT32_MAX;
	static int8_t x1188 = 1;
	volatile int32_t t44 = 31585;

    t44 = ((x1185==(x1186==x1187))<<x1188);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint32_t x1189 = UINT32_MAX;
	volatile int16_t x1190 = INT16_MAX;
	uint8_t x1191 = UINT8_MAX;
	int8_t x1192 = 1;

    t45 = ((x1189==(x1190==x1191))<<x1192);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x1193 = UINT8_MAX;
	static int32_t x1194 = INT32_MIN;
	uint8_t x1196 = 12U;
	static volatile int32_t t46 = 0;

    t46 = ((x1193==(x1194==x1195))<<x1196);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x1209 = 1U;
	uint32_t x1211 = UINT32_MAX;
	static volatile int16_t x1212 = 0;
	int32_t t47 = -1014520;

    t47 = ((x1209==(x1210==x1211))<<x1212);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint16_t x1244 = 2U;
	static int32_t t48 = 23;

    t48 = ((x1241==(x1242==x1243))<<x1244);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x1257 = INT64_MAX;
	int32_t x1258 = INT32_MIN;
	int64_t x1259 = INT64_MAX;
	static int8_t x1260 = 1;
	int32_t t49 = 113299;

    t49 = ((x1257==(x1258==x1259))<<x1260);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int32_t x1285 = INT32_MAX;
	static int64_t x1286 = INT64_MIN;
	int16_t x1288 = 14;
	static volatile int32_t t50 = -304192143;

    t50 = ((x1285==(x1286==x1287))<<x1288);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x1289 = INT64_MIN;
	static uint16_t x1291 = 12861U;
	static int8_t x1292 = 2;
	int32_t t51 = -19415230;

    t51 = ((x1289==(x1290==x1291))<<x1292);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x1297 = -1;
	int32_t x1298 = INT32_MIN;
	int32_t x1300 = 0;
	static volatile int32_t t52 = 1858;

    t52 = ((x1297==(x1298==x1299))<<x1300);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x1309 = -2719135836207338789LL;
	static int16_t x1310 = INT16_MIN;
	uint32_t x1311 = 50262U;
	static volatile uint16_t x1312 = 19U;

    t53 = ((x1309==(x1310==x1311))<<x1312);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x1386 = INT8_MIN;
	int8_t x1387 = -1;
	volatile int32_t t54 = -2778;

    t54 = ((x1385==(x1386==x1387))<<x1388);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x1393 = 542;
	int32_t x1394 = 127;
	int32_t t55 = 44347414;

    t55 = ((x1393==(x1394==x1395))<<x1396);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x1418 = 17U;
	int32_t t56 = 3871740;

    t56 = ((x1417==(x1418==x1419))<<x1420);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x1429 = -1LL;
	int64_t x1430 = INT64_MIN;
	int32_t x1431 = -1;
	int16_t x1432 = 0;
	int32_t t57 = 7181085;

    t57 = ((x1429==(x1430==x1431))<<x1432);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x1461 = INT64_MIN;
	uint32_t x1462 = 4087443U;
	uint16_t x1463 = UINT16_MAX;
	uint8_t x1464 = 0U;

    t58 = ((x1461==(x1462==x1463))<<x1464);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint16_t x1485 = UINT16_MAX;
	static int32_t x1486 = INT32_MIN;
	volatile uint32_t x1487 = UINT32_MAX;
	uint8_t x1488 = 0U;

    t59 = ((x1485==(x1486==x1487))<<x1488);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x1522 = INT8_MIN;
	uint64_t x1523 = 92921247107LLU;
	uint16_t x1524 = 5U;
	int32_t t60 = 11;

    t60 = ((x1521==(x1522==x1523))<<x1524);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x1530 = -1;
	static int64_t x1531 = 58652263831225250LL;
	int32_t t61 = 14;

    t61 = ((x1529==(x1530==x1531))<<x1532);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x1575 = 348737229848905LL;
	uint8_t x1576 = 0U;
	static volatile int32_t t62 = 3428;

    t62 = ((x1573==(x1574==x1575))<<x1576);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x1710 = UINT16_MAX;
	int64_t x1711 = INT64_MIN;
	volatile uint8_t x1712 = 20U;
	volatile int32_t t63 = 5752;

    t63 = ((x1709==(x1710==x1711))<<x1712);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x1737 = INT64_MIN;
	int16_t x1739 = 4;
	int8_t x1740 = 0;
	static int32_t t64 = 11367752;

    t64 = ((x1737==(x1738==x1739))<<x1740);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint16_t x1769 = UINT16_MAX;
	static int8_t x1770 = 7;
	int16_t x1771 = INT16_MIN;
	uint16_t x1772 = 29U;
	int32_t t65 = 185895;

    t65 = ((x1769==(x1770==x1771))<<x1772);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x1809 = 42U;
	uint8_t x1812 = 29U;

    t66 = ((x1809==(x1810==x1811))<<x1812);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x1889 = -1;
	int32_t x1890 = -5;
	int16_t x1891 = INT16_MIN;
	static volatile int32_t t67 = 12498299;

    t67 = ((x1889==(x1890==x1891))<<x1892);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x1918 = INT8_MIN;
	int32_t x1919 = INT32_MIN;
	int32_t x1920 = 3;
	int32_t t68 = -309;

    t68 = ((x1917==(x1918==x1919))<<x1920);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x1937 = UINT8_MAX;
	uint16_t x1939 = 9U;
	int32_t x1940 = 0;
	int32_t t69 = -10951560;

    t69 = ((x1937==(x1938==x1939))<<x1940);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x1977 = 773U;
	uint16_t x1978 = 204U;
	uint16_t x1979 = 6U;
	int8_t x1980 = 3;
	volatile int32_t t70 = -719026;

    t70 = ((x1977==(x1978==x1979))<<x1980);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x1981 = INT32_MIN;
	int8_t x1982 = -2;
	int8_t x1983 = INT8_MAX;
	int8_t x1984 = 15;
	static volatile int32_t t71 = 1;

    t71 = ((x1981==(x1982==x1983))<<x1984);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x1993 = -1LL;
	int8_t x1994 = INT8_MIN;
	volatile int32_t x1995 = INT32_MIN;
	uint8_t x1996 = 4U;

    t72 = ((x1993==(x1994==x1995))<<x1996);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x2009 = 47U;
	int32_t t73 = 205;

    t73 = ((x2009==(x2010==x2011))<<x2012);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x2053 = INT64_MIN;
	uint8_t x2054 = 2U;
	int16_t x2055 = -21;
	static volatile uint16_t x2056 = 12U;
	int32_t t74 = 308829688;

    t74 = ((x2053==(x2054==x2055))<<x2056);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int16_t x2062 = INT16_MAX;
	static int64_t x2063 = INT64_MIN;
	static uint16_t x2064 = 19U;
	int32_t t75 = 0;

    t75 = ((x2061==(x2062==x2063))<<x2064);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x2101 = -33487389;
	static volatile int8_t x2102 = 23;
	static uint16_t x2103 = 24U;
	static int8_t x2104 = 0;
	volatile int32_t t76 = -28;

    t76 = ((x2101==(x2102==x2103))<<x2104);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint8_t x2109 = UINT8_MAX;
	static int64_t x2110 = -1LL;
	static int8_t x2111 = -1;
	uint32_t x2112 = 11U;
	volatile int32_t t77 = 0;

    t77 = ((x2109==(x2110==x2111))<<x2112);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x2137 = -1;
	uint64_t x2138 = UINT64_MAX;
	uint8_t x2140 = 0U;
	static int32_t t78 = 37;

    t78 = ((x2137==(x2138==x2139))<<x2140);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x2153 = UINT16_MAX;
	uint8_t x2154 = 6U;
	static uint8_t x2156 = 8U;
	static int32_t t79 = 27959707;

    t79 = ((x2153==(x2154==x2155))<<x2156);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x2161 = UINT8_MAX;
	static uint16_t x2162 = 45U;
	uint64_t x2163 = 124653320912LLU;
	static uint16_t x2164 = 10U;
	volatile int32_t t80 = 0;

    t80 = ((x2161==(x2162==x2163))<<x2164);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x2197 = UINT32_MAX;
	volatile int8_t x2198 = INT8_MAX;
	static volatile int8_t x2200 = 5;
	int32_t t81 = 17670;

    t81 = ((x2197==(x2198==x2199))<<x2200);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x2229 = INT32_MIN;
	uint16_t x2230 = 2019U;
	volatile int8_t x2231 = -1;
	int32_t t82 = 32055291;

    t82 = ((x2229==(x2230==x2231))<<x2232);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x2233 = UINT32_MAX;
	volatile uint32_t x2234 = UINT32_MAX;
	int32_t x2235 = -1;
	static volatile int32_t t83 = 71213;

    t83 = ((x2233==(x2234==x2235))<<x2236);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x2283 = INT64_MIN;
	uint8_t x2284 = 5U;
	static int32_t t84 = -24;

    t84 = ((x2281==(x2282==x2283))<<x2284);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x2375 = 14LLU;
	volatile uint8_t x2376 = 1U;
	volatile int32_t t85 = 474081190;

    t85 = ((x2373==(x2374==x2375))<<x2376);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint32_t x2381 = 529395U;
	int8_t x2382 = 1;
	static volatile int64_t x2383 = -407413590LL;
	uint8_t x2384 = 9U;
	volatile int32_t t86 = 685;

    t86 = ((x2381==(x2382==x2383))<<x2384);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x2386 = INT8_MAX;
	int32_t x2387 = 123;
	volatile int32_t t87 = 1;

    t87 = ((x2385==(x2386==x2387))<<x2388);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x2393 = INT16_MAX;
	static int8_t x2394 = 5;
	uint64_t x2395 = UINT64_MAX;
	int16_t x2396 = 3;
	static volatile int32_t t88 = 0;

    t88 = ((x2393==(x2394==x2395))<<x2396);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x2441 = -1LL;
	int16_t x2442 = -1;
	volatile int32_t x2443 = 20;
	volatile int8_t x2444 = 7;
	volatile int32_t t89 = -11355;

    t89 = ((x2441==(x2442==x2443))<<x2444);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x2509 = INT8_MAX;
	static int8_t x2510 = INT8_MIN;
	uint8_t x2512 = 4U;
	volatile int32_t t90 = 4962;

    t90 = ((x2509==(x2510==x2511))<<x2512);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x2513 = -138;
	volatile uint8_t x2514 = UINT8_MAX;
	static int8_t x2515 = -1;
	int16_t x2516 = 15;
	int32_t t91 = 16;

    t91 = ((x2513==(x2514==x2515))<<x2516);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int16_t x2562 = INT16_MIN;
	int16_t x2563 = INT16_MAX;
	static volatile uint64_t x2564 = 3LLU;

    t92 = ((x2561==(x2562==x2563))<<x2564);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x2565 = 0U;
	uint8_t x2566 = 1U;
	int16_t x2567 = 1568;
	static volatile int32_t t93 = 5303000;

    t93 = ((x2565==(x2566==x2567))<<x2568);

    if (t93 != 4) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x2589 = -144367;
	uint8_t x2590 = UINT8_MAX;
	int32_t x2591 = 65369;
	int16_t x2592 = 6;

    t94 = ((x2589==(x2590==x2591))<<x2592);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x2681 = -1;
	int8_t x2682 = -1;
	uint16_t x2683 = UINT16_MAX;
	int8_t x2684 = 7;
	static int32_t t95 = -1;

    t95 = ((x2681==(x2682==x2683))<<x2684);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int16_t x2685 = 4;
	uint8_t x2687 = 16U;
	volatile int32_t t96 = -1;

    t96 = ((x2685==(x2686==x2687))<<x2688);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x2717 = 7368LLU;
	int16_t x2718 = -3;
	uint32_t x2719 = 358U;
	static int8_t x2720 = 26;

    t97 = ((x2717==(x2718==x2719))<<x2720);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x2745 = UINT16_MAX;
	uint16_t x2746 = 15623U;
	static uint64_t x2747 = 79515LLU;
	volatile int32_t t98 = -682715;

    t98 = ((x2745==(x2746==x2747))<<x2748);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint64_t x2765 = 98846605420154572LLU;
	int16_t x2766 = INT16_MIN;
	int64_t x2767 = -1LL;
	uint8_t x2768 = 27U;
	int32_t t99 = -448810574;

    t99 = ((x2765==(x2766==x2767))<<x2768);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x2805 = 1;
	int8_t x2807 = -1;
	uint8_t x2808 = 0U;
	int32_t t100 = -2192846;

    t100 = ((x2805==(x2806==x2807))<<x2808);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x2822 = INT8_MIN;
	uint8_t x2823 = UINT8_MAX;
	static int32_t x2824 = 0;
	volatile int32_t t101 = 1;

    t101 = ((x2821==(x2822==x2823))<<x2824);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x2834 = -1LL;
	int32_t x2836 = 0;

    t102 = ((x2833==(x2834==x2835))<<x2836);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x2857 = 13304LLU;
	volatile int8_t x2859 = 58;
	uint8_t x2860 = 5U;
	static int32_t t103 = 7892861;

    t103 = ((x2857==(x2858==x2859))<<x2860);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x2917 = 42496458LL;
	static uint32_t x2918 = 60U;
	int32_t x2919 = -1;
	volatile int32_t t104 = 7;

    t104 = ((x2917==(x2918==x2919))<<x2920);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x2925 = -21;
	volatile uint8_t x2927 = 2U;
	uint8_t x2928 = 1U;
	static int32_t t105 = -84042262;

    t105 = ((x2925==(x2926==x2927))<<x2928);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x2941 = -1;
	volatile int64_t x2942 = -1LL;
	int32_t x2943 = -1;

    t106 = ((x2941==(x2942==x2943))<<x2944);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint64_t x2993 = 4369463794950902LLU;
	static volatile uint32_t x2995 = 11172450U;
	uint8_t x2996 = 21U;
	int32_t t107 = 598179;

    t107 = ((x2993==(x2994==x2995))<<x2996);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x3113 = UINT64_MAX;
	static uint16_t x3114 = UINT16_MAX;
	volatile int32_t x3115 = INT32_MIN;
	int8_t x3116 = 0;
	int32_t t108 = 168801;

    t108 = ((x3113==(x3114==x3115))<<x3116);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x3169 = INT16_MIN;
	static int32_t t109 = 489121;

    t109 = ((x3169==(x3170==x3171))<<x3172);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x3177 = 3498363428667357598LLU;
	static int16_t x3178 = 23;
	static int8_t x3179 = INT8_MIN;
	volatile uint8_t x3180 = 1U;
	int32_t t110 = 145;

    t110 = ((x3177==(x3178==x3179))<<x3180);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x3198 = 283;
	int64_t x3199 = -1LL;
	static int8_t x3200 = 1;

    t111 = ((x3197==(x3198==x3199))<<x3200);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x3231 = UINT32_MAX;
	uint8_t x3232 = 29U;
	volatile int32_t t112 = 27568;

    t112 = ((x3229==(x3230==x3231))<<x3232);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x3237 = INT8_MIN;
	static volatile int16_t x3239 = INT16_MIN;
	int32_t t113 = -10510;

    t113 = ((x3237==(x3238==x3239))<<x3240);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x3245 = INT8_MAX;
	int32_t t114 = -7121917;

    t114 = ((x3245==(x3246==x3247))<<x3248);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x3250 = 12;
	static uint32_t x3251 = 141U;
	uint32_t x3252 = 4U;
	volatile int32_t t115 = 223318860;

    t115 = ((x3249==(x3250==x3251))<<x3252);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x3293 = INT16_MIN;
	int8_t x3294 = 1;
	int8_t x3295 = 9;
	volatile int8_t x3296 = 2;
	static volatile int32_t t116 = 31895;

    t116 = ((x3293==(x3294==x3295))<<x3296);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x3349 = -1LL;
	static int32_t x3351 = 2749081;
	uint16_t x3352 = 3U;
	static int32_t t117 = 63448;

    t117 = ((x3349==(x3350==x3351))<<x3352);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint32_t x3393 = UINT32_MAX;
	volatile int8_t x3395 = INT8_MIN;
	uint32_t x3396 = 30U;
	static volatile int32_t t118 = 261602;

    t118 = ((x3393==(x3394==x3395))<<x3396);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x3397 = INT64_MIN;
	volatile int32_t x3399 = -62;
	uint8_t x3400 = 12U;

    t119 = ((x3397==(x3398==x3399))<<x3400);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x3429 = INT32_MIN;
	volatile int64_t x3430 = INT64_MAX;
	uint16_t x3431 = UINT16_MAX;
	static uint16_t x3432 = 0U;
	static int32_t t120 = 86840;

    t120 = ((x3429==(x3430==x3431))<<x3432);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x3437 = -1;
	uint8_t x3439 = 1U;
	volatile uint32_t x3440 = 14U;
	volatile int32_t t121 = 228;

    t121 = ((x3437==(x3438==x3439))<<x3440);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x3497 = INT64_MIN;
	volatile int32_t t122 = 8286260;

    t122 = ((x3497==(x3498==x3499))<<x3500);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x3501 = 250;
	int16_t x3504 = 1;
	static volatile int32_t t123 = -1;

    t123 = ((x3501==(x3502==x3503))<<x3504);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x3517 = -1;
	int64_t x3519 = -1LL;
	static int8_t x3520 = 0;
	int32_t t124 = 248267;

    t124 = ((x3517==(x3518==x3519))<<x3520);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x3534 = INT64_MIN;
	volatile int16_t x3535 = INT16_MAX;
	int32_t t125 = 65460129;

    t125 = ((x3533==(x3534==x3535))<<x3536);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x3641 = UINT64_MAX;
	int8_t x3642 = -1;
	static int32_t x3643 = -1;
	uint8_t x3644 = 6U;

    t126 = ((x3641==(x3642==x3643))<<x3644);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x3705 = 877638484473311LLU;
	int64_t x3707 = 103886LL;
	static volatile int16_t x3708 = 0;
	int32_t t127 = -1037427;

    t127 = ((x3705==(x3706==x3707))<<x3708);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x3770 = UINT32_MAX;
	volatile uint8_t x3771 = 53U;
	volatile uint8_t x3772 = 31U;
	int32_t t128 = 959666206;

    t128 = ((x3769==(x3770==x3771))<<x3772);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x3793 = 93867748LLU;
	volatile uint8_t x3794 = 45U;
	static int8_t x3796 = 1;
	int32_t t129 = 19958792;

    t129 = ((x3793==(x3794==x3795))<<x3796);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x3801 = INT32_MIN;
	int16_t x3803 = INT16_MIN;
	static uint32_t x3804 = 24U;
	volatile int32_t t130 = 4765;

    t130 = ((x3801==(x3802==x3803))<<x3804);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x3841 = 135043289U;
	static int8_t x3842 = -27;
	static uint16_t x3843 = UINT16_MAX;
	static uint8_t x3844 = 6U;
	int32_t t131 = 30741937;

    t131 = ((x3841==(x3842==x3843))<<x3844);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x3849 = 39;
	int64_t x3850 = INT64_MIN;
	int16_t x3851 = -1;
	int32_t x3852 = 1;
	int32_t t132 = -42235160;

    t132 = ((x3849==(x3850==x3851))<<x3852);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x3885 = INT16_MIN;
	uint32_t x3887 = 875U;
	int8_t x3888 = 19;

    t133 = ((x3885==(x3886==x3887))<<x3888);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int8_t x3901 = 1;
	volatile uint8_t x3903 = UINT8_MAX;
	static uint16_t x3904 = 4U;
	int32_t t134 = -233927;

    t134 = ((x3901==(x3902==x3903))<<x3904);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x3913 = -1LL;
	uint16_t x3914 = 372U;
	int64_t x3915 = -1LL;
	uint8_t x3916 = 3U;
	volatile int32_t t135 = 982400641;

    t135 = ((x3913==(x3914==x3915))<<x3916);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile uint8_t x3921 = 6U;
	volatile uint32_t x3923 = 1002U;
	uint16_t x3924 = 21U;
	int32_t t136 = -1;

    t136 = ((x3921==(x3922==x3923))<<x3924);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x3941 = -1;
	int8_t x3942 = INT8_MIN;
	static int8_t x3943 = INT8_MIN;
	uint8_t x3944 = 5U;
	volatile int32_t t137 = -3290;

    t137 = ((x3941==(x3942==x3943))<<x3944);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x4038 = -1LL;
	int8_t x4039 = -1;
	static uint16_t x4040 = 6U;
	int32_t t138 = 1430320;

    t138 = ((x4037==(x4038==x4039))<<x4040);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x4133 = 115U;
	int8_t x4134 = INT8_MIN;
	int64_t x4135 = INT64_MIN;
	static uint32_t x4136 = 1U;
	volatile int32_t t139 = 14981;

    t139 = ((x4133==(x4134==x4135))<<x4136);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint64_t x4169 = UINT64_MAX;
	static int8_t x4170 = INT8_MIN;
	volatile int32_t x4171 = INT32_MIN;
	uint16_t x4172 = 26U;
	int32_t t140 = -5;

    t140 = ((x4169==(x4170==x4171))<<x4172);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int64_t x4197 = -1LL;
	int32_t x4199 = -1;
	static volatile uint16_t x4200 = 3U;
	int32_t t141 = -61754910;

    t141 = ((x4197==(x4198==x4199))<<x4200);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x4204 = 0U;

    t142 = ((x4201==(x4202==x4203))<<x4204);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x4205 = 759193301LLU;
	static uint8_t x4206 = 11U;
	int64_t x4207 = INT64_MIN;
	volatile uint8_t x4208 = 5U;
	volatile int32_t t143 = 0;

    t143 = ((x4205==(x4206==x4207))<<x4208);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x4237 = INT64_MAX;
	volatile uint8_t x4238 = 119U;
	static uint16_t x4240 = 28U;
	volatile int32_t t144 = -1;

    t144 = ((x4237==(x4238==x4239))<<x4240);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x4241 = -1;
	volatile int64_t x4242 = INT64_MIN;
	static int8_t x4243 = INT8_MIN;
	volatile uint8_t x4244 = 18U;
	int32_t t145 = -284618305;

    t145 = ((x4241==(x4242==x4243))<<x4244);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x4253 = INT8_MIN;
	volatile int32_t x4254 = INT32_MIN;
	volatile uint32_t x4255 = UINT32_MAX;
	static volatile uint32_t x4256 = 3U;
	volatile int32_t t146 = 50750492;

    t146 = ((x4253==(x4254==x4255))<<x4256);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint32_t x4265 = 24U;
	int64_t x4266 = 48LL;
	int8_t x4268 = 23;
	volatile int32_t t147 = 0;

    t147 = ((x4265==(x4266==x4267))<<x4268);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x4285 = -1224;
	int16_t x4286 = -1;
	int16_t x4288 = 0;
	static volatile int32_t t148 = -755206;

    t148 = ((x4285==(x4286==x4287))<<x4288);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x4289 = INT64_MIN;
	int16_t x4290 = -1;
	static volatile uint16_t x4291 = 771U;
	uint8_t x4292 = 14U;
	volatile int32_t t149 = -262570808;

    t149 = ((x4289==(x4290==x4291))<<x4292);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x4302 = 128;
	int8_t x4303 = 17;
	int32_t t150 = -13645;

    t150 = ((x4301==(x4302==x4303))<<x4304);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint16_t x4309 = 0U;
	static int32_t x4310 = -19944656;
	static uint64_t x4311 = 4492391LLU;
	uint16_t x4312 = 24U;

    t151 = ((x4309==(x4310==x4311))<<x4312);

    if (t151 != 16777216) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x4321 = -1;
	static int16_t x4322 = INT16_MAX;
	volatile int16_t x4324 = 27;
	int32_t t152 = 1;

    t152 = ((x4321==(x4322==x4323))<<x4324);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x4333 = UINT32_MAX;
	int64_t x4334 = INT64_MAX;
	uint64_t x4335 = 2133404584462768LLU;
	uint8_t x4336 = 2U;
	volatile int32_t t153 = -6;

    t153 = ((x4333==(x4334==x4335))<<x4336);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint32_t x4353 = 1U;
	volatile int64_t x4354 = INT64_MAX;
	volatile int8_t x4355 = INT8_MIN;
	uint32_t x4356 = 3U;
	static int32_t t154 = -572184108;

    t154 = ((x4353==(x4354==x4355))<<x4356);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x4417 = 3951340339707058066LLU;
	volatile uint16_t x4418 = UINT16_MAX;
	volatile int16_t x4419 = INT16_MIN;
	volatile int8_t x4420 = 0;
	volatile int32_t t155 = 988642;

    t155 = ((x4417==(x4418==x4419))<<x4420);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x4421 = 0U;
	uint32_t x4422 = UINT32_MAX;
	int16_t x4423 = -1594;
	int32_t t156 = -14681;

    t156 = ((x4421==(x4422==x4423))<<x4424);

    if (t156 != 8) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x4433 = -1;
	volatile int64_t x4434 = INT64_MIN;
	uint64_t x4435 = 103622873818264802LLU;
	uint8_t x4436 = 16U;
	volatile int32_t t157 = 1;

    t157 = ((x4433==(x4434==x4435))<<x4436);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x4549 = 0;
	uint16_t x4550 = UINT16_MAX;
	uint64_t x4551 = UINT64_MAX;
	uint8_t x4552 = 22U;
	int32_t t158 = -215;

    t158 = ((x4549==(x4550==x4551))<<x4552);

    if (t158 != 4194304) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x4573 = INT16_MIN;
	int64_t x4574 = -1LL;
	uint64_t x4575 = 456LLU;
	int32_t t159 = -1325897;

    t159 = ((x4573==(x4574==x4575))<<x4576);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int16_t x4581 = 31;
	static volatile int32_t x4582 = 13803;
	uint8_t x4584 = 8U;
	int32_t t160 = -65228;

    t160 = ((x4581==(x4582==x4583))<<x4584);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x4585 = -1;
	int8_t x4586 = INT8_MAX;
	int8_t x4587 = -3;
	uint8_t x4588 = 3U;

    t161 = ((x4585==(x4586==x4587))<<x4588);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x4633 = -1LL;
	uint16_t x4635 = 7708U;
	uint8_t x4636 = 12U;
	volatile int32_t t162 = 265399826;

    t162 = ((x4633==(x4634==x4635))<<x4636);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x4665 = INT16_MAX;
	static int16_t x4666 = INT16_MAX;
	int32_t x4667 = INT32_MIN;
	uint8_t x4668 = 9U;
	volatile int32_t t163 = 10218;

    t163 = ((x4665==(x4666==x4667))<<x4668);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x4677 = -8123;
	int8_t x4679 = INT8_MAX;
	uint32_t x4680 = 3U;

    t164 = ((x4677==(x4678==x4679))<<x4680);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x4710 = 16;
	int16_t x4711 = INT16_MAX;
	uint32_t x4712 = 1U;
	int32_t t165 = -3;

    t165 = ((x4709==(x4710==x4711))<<x4712);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint8_t x4723 = 34U;
	uint8_t x4724 = 0U;

    t166 = ((x4721==(x4722==x4723))<<x4724);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x4733 = 570933120145274950LL;
	int64_t x4734 = INT64_MIN;
	static int32_t x4735 = INT32_MAX;
	static int16_t x4736 = 8;
	static int32_t t167 = 7;

    t167 = ((x4733==(x4734==x4735))<<x4736);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x4813 = INT64_MAX;
	uint64_t x4814 = 46375765100071196LLU;
	int64_t x4815 = INT64_MAX;
	static volatile int8_t x4816 = 1;
	volatile int32_t t168 = -22151;

    t168 = ((x4813==(x4814==x4815))<<x4816);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x4829 = -1;
	uint64_t x4830 = UINT64_MAX;
	int8_t x4832 = 1;
	int32_t t169 = 0;

    t169 = ((x4829==(x4830==x4831))<<x4832);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x4933 = -13;
	int64_t x4934 = -62432LL;
	int16_t x4935 = INT16_MIN;
	int8_t x4936 = 0;

    t170 = ((x4933==(x4934==x4935))<<x4936);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x4969 = INT64_MIN;
	int16_t x4970 = 3;
	uint8_t x4972 = 0U;
	volatile int32_t t171 = 1752;

    t171 = ((x4969==(x4970==x4971))<<x4972);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x4977 = INT16_MIN;
	uint8_t x4978 = UINT8_MAX;
	int8_t x4979 = INT8_MIN;
	int32_t t172 = -33413687;

    t172 = ((x4977==(x4978==x4979))<<x4980);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x4985 = INT32_MIN;
	static volatile int32_t x4986 = INT32_MIN;
	int32_t x4987 = INT32_MIN;
	uint16_t x4988 = 1U;
	volatile int32_t t173 = 200471;

    t173 = ((x4985==(x4986==x4987))<<x4988);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x5014 = INT8_MIN;
	int16_t x5015 = -1;
	uint8_t x5016 = 6U;
	int32_t t174 = 64;

    t174 = ((x5013==(x5014==x5015))<<x5016);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x5022 = UINT64_MAX;
	int16_t x5023 = INT16_MIN;
	volatile int16_t x5024 = 0;

    t175 = ((x5021==(x5022==x5023))<<x5024);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint64_t x5034 = 89891930885574LLU;
	int32_t x5035 = -1;
	uint8_t x5036 = 2U;

    t176 = ((x5033==(x5034==x5035))<<x5036);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint16_t x5109 = 2667U;
	int64_t x5110 = 818038LL;
	int8_t x5111 = INT8_MAX;
	uint16_t x5112 = 6U;
	volatile int32_t t177 = 496078612;

    t177 = ((x5109==(x5110==x5111))<<x5112);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x5137 = INT16_MIN;
	uint64_t x5138 = 131005LLU;
	int16_t x5140 = 0;
	volatile int32_t t178 = 84807;

    t178 = ((x5137==(x5138==x5139))<<x5140);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x5169 = 78U;
	volatile uint32_t x5170 = 0U;
	int16_t x5171 = 4;
	static int32_t t179 = 134068;

    t179 = ((x5169==(x5170==x5171))<<x5172);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x5189 = INT16_MIN;
	int8_t x5190 = -1;
	int8_t x5191 = -43;
	volatile uint8_t x5192 = 21U;
	static int32_t t180 = 728633;

    t180 = ((x5189==(x5190==x5191))<<x5192);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x5201 = 2039970U;
	static uint64_t x5202 = 6LLU;
	int64_t x5203 = 241254553062LL;
	int8_t x5204 = 6;

    t181 = ((x5201==(x5202==x5203))<<x5204);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x5217 = -1LL;
	uint32_t x5218 = UINT32_MAX;
	int64_t x5219 = INT64_MIN;
	static int32_t t182 = -1138;

    t182 = ((x5217==(x5218==x5219))<<x5220);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile uint64_t x5222 = 87580510LLU;
	volatile int8_t x5223 = -25;
	static volatile int32_t t183 = 2028793;

    t183 = ((x5221==(x5222==x5223))<<x5224);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x5225 = -1459;
	uint8_t x5228 = 3U;
	int32_t t184 = 1371307;

    t184 = ((x5225==(x5226==x5227))<<x5228);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint8_t x5245 = UINT8_MAX;
	int32_t x5246 = INT32_MAX;
	volatile int32_t t185 = -459363168;

    t185 = ((x5245==(x5246==x5247))<<x5248);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x5281 = INT16_MIN;
	int16_t x5282 = -1;
	int16_t x5283 = -32;
	volatile uint32_t x5284 = 2U;
	volatile int32_t t186 = 476;

    t186 = ((x5281==(x5282==x5283))<<x5284);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x5354 = -1;
	uint8_t x5355 = 9U;
	int8_t x5356 = 4;

    t187 = ((x5353==(x5354==x5355))<<x5356);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x5415 = INT8_MAX;
	uint16_t x5416 = 26U;
	static int32_t t188 = -12529;

    t188 = ((x5413==(x5414==x5415))<<x5416);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x5465 = INT64_MAX;
	volatile uint32_t x5466 = UINT32_MAX;
	volatile int32_t x5467 = INT32_MIN;
	uint16_t x5468 = 4U;
	int32_t t189 = 838528;

    t189 = ((x5465==(x5466==x5467))<<x5468);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int8_t x5485 = INT8_MAX;
	static uint64_t x5486 = 3956016338064595495LLU;
	int16_t x5487 = INT16_MIN;
	int32_t t190 = -2;

    t190 = ((x5485==(x5486==x5487))<<x5488);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x5505 = 62640823LLU;
	volatile uint32_t x5506 = UINT32_MAX;
	int32_t x5507 = INT32_MIN;
	static volatile int16_t x5508 = 13;
	static volatile int32_t t191 = 113;

    t191 = ((x5505==(x5506==x5507))<<x5508);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x5534 = 28155560U;
	volatile int8_t x5535 = 0;
	volatile uint8_t x5536 = 1U;
	static int32_t t192 = -3070120;

    t192 = ((x5533==(x5534==x5535))<<x5536);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x5573 = -1;
	static int16_t x5575 = 0;
	static int8_t x5576 = 0;
	int32_t t193 = 0;

    t193 = ((x5573==(x5574==x5575))<<x5576);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x5577 = INT64_MIN;
	static volatile int8_t x5578 = -1;
	uint8_t x5579 = 114U;
	int32_t t194 = 375982208;

    t194 = ((x5577==(x5578==x5579))<<x5580);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x5588 = 9U;
	int32_t t195 = 120835;

    t195 = ((x5585==(x5586==x5587))<<x5588);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint64_t x5593 = UINT64_MAX;
	static volatile uint32_t x5596 = 1U;
	volatile int32_t t196 = 1;

    t196 = ((x5593==(x5594==x5595))<<x5596);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x5605 = INT8_MAX;
	static int32_t x5606 = 289869302;
	int8_t x5607 = -1;
	uint16_t x5608 = 26U;
	int32_t t197 = 2927427;

    t197 = ((x5605==(x5606==x5607))<<x5608);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x5613 = UINT16_MAX;
	int8_t x5614 = -53;
	int8_t x5616 = 6;
	volatile int32_t t198 = -191408841;

    t198 = ((x5613==(x5614==x5615))<<x5616);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x5705 = INT16_MIN;
	uint16_t x5706 = 911U;
	volatile int8_t x5707 = INT8_MAX;
	uint8_t x5708 = 9U;
	volatile int32_t t199 = -48047;

    t199 = ((x5705==(x5706==x5707))<<x5708);

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

