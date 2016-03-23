
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

int32_t t0 = -783638528;
volatile int8_t x81 = 0;
uint8_t x83 = 5U;
static uint8_t x124 = 19U;
volatile int32_t t3 = 16381129;
volatile int32_t t4 = -188761528;
int64_t x145 = -1LL;
static int8_t x147 = 0;
int8_t x148 = 2;
int32_t t6 = -9089919;
int64_t x207 = INT64_MIN;
int16_t x235 = -1;
uint8_t x273 = UINT8_MAX;
uint16_t x334 = UINT16_MAX;
int32_t x335 = -1043950;
static int8_t x336 = 8;
volatile int32_t t11 = -8;
uint16_t x350 = UINT16_MAX;
volatile int64_t x407 = INT64_MAX;
int32_t t16 = 806;
static uint64_t x510 = 957477100LLU;
volatile int32_t t17 = -106;
static uint16_t x573 = 6U;
volatile int64_t x617 = -1LL;
static volatile int8_t x618 = -1;
int32_t t20 = 465;
int64_t x635 = 23392476010778LL;
static int32_t x663 = INT32_MIN;
volatile int32_t t23 = 1887165;
uint8_t x863 = 1U;
static int32_t t26 = 13575238;
uint32_t x942 = UINT32_MAX;
int64_t x943 = -769271837726LL;
int8_t x1105 = 4;
int32_t t32 = 7755593;
int32_t t33 = -560;
int32_t x1158 = 133388668;
uint64_t x1213 = 3633693719LLU;
int16_t x1214 = -214;
uint8_t x1216 = 4U;
volatile int64_t x1307 = 2319853167173446LL;
static uint64_t x1311 = UINT64_MAX;
static int16_t x1312 = 1;
uint32_t x1403 = 5U;
volatile int16_t x1424 = 0;
uint16_t x1433 = UINT16_MAX;
uint64_t x1434 = 1963610260603LLU;
static uint8_t x1607 = 2U;
int16_t x1724 = 5;
int32_t t46 = 133114448;
volatile int16_t x1741 = -1;
static int16_t x1744 = 6;
int8_t x1810 = INT8_MIN;
int32_t t48 = -3;
volatile int8_t x1867 = INT8_MAX;
uint8_t x1868 = 11U;
int8_t x1885 = -1;
int32_t t53 = 88568667;
int32_t x1972 = 0;
volatile int32_t t58 = -1;
int64_t x2204 = 0LL;
int32_t t60 = 1;
volatile int32_t x2318 = 0;
volatile int32_t x2319 = 13;
uint8_t x2321 = UINT8_MAX;
volatile int64_t x2329 = -1848319779476808688LL;
int64_t x2331 = -1LL;
int32_t t63 = 11722;
uint32_t x2370 = UINT32_MAX;
static int8_t x2372 = 0;
uint8_t x2428 = 2U;
static volatile int32_t t65 = 309;
uint16_t x2441 = 19642U;
uint16_t x2498 = 180U;
int32_t x2510 = -1;
volatile int8_t x2512 = 3;
volatile uint32_t x2666 = 58U;
volatile int32_t t71 = 793900237;
int64_t x2809 = -1LL;
static int32_t x2846 = 2;
int16_t x2858 = INT16_MAX;
int8_t x2880 = 9;
static volatile uint64_t x2884 = 5LLU;
int32_t t82 = 14280171;
uint32_t x3101 = UINT32_MAX;
static uint16_t x3103 = 20U;
volatile int16_t x3109 = -57;
static int16_t x3110 = -7878;
volatile int8_t x3157 = INT8_MAX;
uint32_t x3158 = UINT32_MAX;
int64_t x3159 = INT64_MIN;
static int64_t x3160 = 5LL;
int32_t x3233 = INT32_MAX;
uint16_t x3236 = 1U;
volatile uint64_t x3260 = 4LLU;
int64_t x3306 = INT64_MIN;
uint8_t x3308 = 1U;
int16_t x3333 = INT16_MIN;
int16_t x3336 = 29;
static int8_t x3370 = INT8_MIN;
uint8_t x3408 = 2U;
uint64_t x3433 = 1687LLU;
volatile int32_t t100 = -729871488;
uint16_t x3582 = 1U;
int8_t x3583 = INT8_MAX;
uint16_t x3584 = 15U;
int32_t t102 = 812;
volatile int32_t x3622 = -1;
int64_t x3629 = INT64_MIN;
volatile int64_t x3710 = INT64_MIN;
int16_t x3712 = 0;
static int32_t t108 = 5;
uint16_t x3720 = 1U;
volatile int32_t t109 = 686;
volatile uint16_t x3781 = UINT16_MAX;
int32_t x3782 = -1;
int32_t t110 = -59175273;
int16_t x3793 = 8;
volatile uint8_t x3796 = 1U;
static int32_t t113 = -283;
static volatile int32_t t114 = -23;
volatile int64_t x3867 = INT64_MIN;
int16_t x3936 = 1;
int16_t x3984 = 4;
static int32_t x4063 = -1;
int8_t x4106 = INT8_MIN;
int32_t x4177 = INT32_MIN;
uint8_t x4180 = 2U;
int32_t x4253 = -113993563;
int64_t x4261 = INT64_MIN;
uint8_t x4416 = 3U;
int64_t x4441 = 226110413607640LL;
int32_t x4443 = -1;
int8_t x4452 = 0;
uint16_t x4455 = UINT16_MAX;
static uint16_t x4456 = 25U;
int8_t x4460 = 1;
int32_t t136 = 80356;
volatile int32_t t137 = -58;
static volatile uint8_t x4502 = UINT8_MAX;
uint8_t x4503 = 26U;
static volatile uint8_t x4508 = 1U;
static int32_t x4553 = 7;
volatile int32_t t141 = -1032178;
uint16_t x4687 = 1368U;
int32_t t144 = -2259;
uint8_t x4748 = 0U;
uint8_t x4867 = 28U;
int8_t x4895 = INT8_MAX;
volatile int32_t t149 = 11839352;
int32_t x4950 = 3733733;
int8_t x4952 = 6;
static uint8_t x4962 = UINT8_MAX;
volatile int32_t t151 = 50600;
volatile uint8_t x4968 = 2U;
uint8_t x4975 = 1U;
int16_t x4976 = 30;
uint64_t x5031 = 9217173LLU;
int64_t x5087 = 1LL;
int16_t x5101 = INT16_MIN;
int8_t x5113 = -1;
int8_t x5146 = 3;
static int16_t x5153 = -53;
int16_t x5204 = 0;
int32_t t164 = 665;
int32_t t166 = 0;
int64_t x5354 = -1LL;
int32_t x5393 = INT32_MIN;
volatile uint16_t x5396 = 0U;
int32_t x5430 = -1;
uint16_t x5431 = 47U;
volatile uint32_t x5432 = 27U;
int32_t x5501 = INT32_MIN;
volatile uint16_t x5504 = 1U;
uint32_t x5577 = UINT32_MAX;
int32_t x5579 = 183;
volatile int32_t t176 = -204;
volatile int32_t t177 = 8399300;
int16_t x5691 = -2;
uint32_t x5785 = UINT32_MAX;
int8_t x5786 = -20;
int64_t x5887 = 123741LL;
static volatile int16_t x5942 = -61;
static uint32_t x5943 = 3U;
int32_t x5957 = INT32_MIN;
uint32_t x5958 = UINT32_MAX;
static int8_t x6045 = 4;
uint8_t x6106 = 3U;
uint32_t x6177 = UINT32_MAX;
uint16_t x6182 = 221U;
uint16_t x6184 = 0U;
uint64_t x6223 = UINT64_MAX;


void f0(void) {
    	static int32_t x37 = INT32_MAX;
	int32_t x38 = 482811;
	int32_t x39 = -86677;
	static uint16_t x40 = 10U;

    t0 = ((x37==(x38+x39))<<x40);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x45 = INT32_MIN;
	uint32_t x46 = 13827U;
	int16_t x47 = 94;
	static uint32_t x48 = 0U;
	volatile int32_t t1 = -7983384;

    t1 = ((x45==(x46+x47))<<x48);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x82 = -1;
	uint8_t x84 = 0U;
	volatile int32_t t2 = 749777952;

    t2 = ((x81==(x82+x83))<<x84);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x121 = -1;
	int64_t x122 = 949051819382894374LL;
	uint32_t x123 = 11U;

    t3 = ((x121==(x122+x123))<<x124);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x125 = -1;
	static volatile uint64_t x126 = 8510702444464LLU;
	volatile int64_t x127 = INT64_MIN;
	int64_t x128 = 1LL;

    t4 = ((x125==(x126+x127))<<x128);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint32_t x146 = UINT32_MAX;
	volatile int32_t t5 = 111741087;

    t5 = ((x145==(x146+x147))<<x148);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x197 = UINT8_MAX;
	int64_t x198 = 1837949614335LL;
	static int8_t x199 = INT8_MIN;
	static volatile int8_t x200 = 1;

    t6 = ((x197==(x198+x199))<<x200);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x205 = UINT16_MAX;
	static int64_t x206 = INT64_MAX;
	uint8_t x208 = 3U;
	int32_t t7 = 101240;

    t7 = ((x205==(x206+x207))<<x208);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x233 = INT32_MIN;
	int8_t x234 = -7;
	int8_t x236 = 16;
	volatile int32_t t8 = -45577138;

    t8 = ((x233==(x234+x235))<<x236);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x274 = -1;
	uint64_t x275 = 1970584652985LLU;
	static uint16_t x276 = 0U;
	static volatile int32_t t9 = 0;

    t9 = ((x273==(x274+x275))<<x276);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x333 = UINT8_MAX;
	static int32_t t10 = -9378;

    t10 = ((x333==(x334+x335))<<x336);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x337 = 638205746205136142LLU;
	volatile uint64_t x338 = 3970571219379921216LLU;
	static int8_t x339 = -1;
	uint8_t x340 = 18U;

    t11 = ((x337==(x338+x339))<<x340);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x341 = 8U;
	int16_t x342 = INT16_MIN;
	static uint8_t x343 = UINT8_MAX;
	static volatile uint8_t x344 = 20U;
	volatile int32_t t12 = 64;

    t12 = ((x341==(x342+x343))<<x344);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x349 = 764661LL;
	static int8_t x351 = INT8_MIN;
	int8_t x352 = 0;
	volatile int32_t t13 = 2;

    t13 = ((x349==(x350+x351))<<x352);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x373 = 1;
	static uint16_t x374 = UINT16_MAX;
	uint8_t x375 = 4U;
	static int8_t x376 = 2;
	volatile int32_t t14 = -24;

    t14 = ((x373==(x374+x375))<<x376);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x405 = INT16_MAX;
	volatile int32_t x406 = INT32_MIN;
	uint32_t x408 = 1U;
	static volatile int32_t t15 = -344791305;

    t15 = ((x405==(x406+x407))<<x408);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x433 = -4;
	uint8_t x434 = 7U;
	uint8_t x435 = 24U;
	static uint16_t x436 = 0U;

    t16 = ((x433==(x434+x435))<<x436);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x509 = UINT8_MAX;
	uint8_t x511 = 3U;
	int16_t x512 = 0;

    t17 = ((x509==(x510+x511))<<x512);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x541 = 2050;
	volatile int16_t x542 = INT16_MAX;
	int8_t x543 = INT8_MIN;
	static uint64_t x544 = 0LLU;
	int32_t t18 = 3747669;

    t18 = ((x541==(x542+x543))<<x544);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x574 = 649369U;
	static uint8_t x575 = 96U;
	uint16_t x576 = 10U;
	int32_t t19 = 0;

    t19 = ((x573==(x574+x575))<<x576);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x619 = INT16_MAX;
	uint16_t x620 = 0U;

    t20 = ((x617==(x618+x619))<<x620);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x633 = UINT64_MAX;
	static uint32_t x634 = UINT32_MAX;
	int8_t x636 = 3;
	static int32_t t21 = -21467;

    t21 = ((x633==(x634+x635))<<x636);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x661 = 0U;
	static uint16_t x662 = UINT16_MAX;
	volatile int32_t x664 = 6;
	volatile int32_t t22 = -6935198;

    t22 = ((x661==(x662+x663))<<x664);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint64_t x765 = 855835025011077787LLU;
	int8_t x766 = INT8_MIN;
	volatile int8_t x767 = -1;
	int8_t x768 = 1;

    t23 = ((x765==(x766+x767))<<x768);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x853 = 93U;
	int32_t x854 = INT32_MIN;
	int16_t x855 = INT16_MAX;
	volatile int8_t x856 = 0;
	static int32_t t24 = -7;

    t24 = ((x853==(x854+x855))<<x856);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x861 = 6;
	uint16_t x862 = UINT16_MAX;
	int16_t x864 = 1;
	int32_t t25 = 146630;

    t25 = ((x861==(x862+x863))<<x864);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x881 = INT16_MIN;
	static uint64_t x882 = 523195LLU;
	volatile int8_t x883 = INT8_MIN;
	int8_t x884 = 1;

    t26 = ((x881==(x882+x883))<<x884);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x917 = INT32_MIN;
	int8_t x918 = -3;
	static uint16_t x919 = 13502U;
	int8_t x920 = 11;
	int32_t t27 = -278;

    t27 = ((x917==(x918+x919))<<x920);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x925 = -1;
	static int16_t x926 = INT16_MIN;
	int8_t x927 = -1;
	uint8_t x928 = 3U;
	static volatile int32_t t28 = 302;

    t28 = ((x925==(x926+x927))<<x928);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x941 = 1949U;
	uint8_t x944 = 2U;
	static int32_t t29 = 3800140;

    t29 = ((x941==(x942+x943))<<x944);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x993 = INT16_MAX;
	int32_t x994 = INT32_MIN;
	volatile uint8_t x995 = 18U;
	uint32_t x996 = 12U;
	int32_t t30 = -126;

    t30 = ((x993==(x994+x995))<<x996);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint64_t x1033 = 22888411618LLU;
	static int32_t x1034 = -2;
	uint8_t x1035 = 23U;
	uint64_t x1036 = 5LLU;
	volatile int32_t t31 = -745;

    t31 = ((x1033==(x1034+x1035))<<x1036);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x1106 = 2096U;
	int16_t x1107 = -1;
	static int8_t x1108 = 1;

    t32 = ((x1105==(x1106+x1107))<<x1108);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x1125 = INT8_MIN;
	int64_t x1126 = 15405136263791335LL;
	int64_t x1127 = -987740713564759870LL;
	int8_t x1128 = 1;

    t33 = ((x1125==(x1126+x1127))<<x1128);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x1137 = INT64_MAX;
	volatile int64_t x1138 = -1348293108652022LL;
	int64_t x1139 = INT64_MAX;
	int8_t x1140 = 0;
	static int32_t t34 = 1;

    t34 = ((x1137==(x1138+x1139))<<x1140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x1157 = 156953;
	int16_t x1159 = 0;
	uint8_t x1160 = 3U;
	int32_t t35 = -98;

    t35 = ((x1157==(x1158+x1159))<<x1160);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x1201 = UINT8_MAX;
	uint64_t x1202 = UINT64_MAX;
	int32_t x1203 = 16691968;
	int8_t x1204 = 1;
	static int32_t t36 = -945033;

    t36 = ((x1201==(x1202+x1203))<<x1204);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x1215 = 2236U;
	static volatile int32_t t37 = -880538;

    t37 = ((x1213==(x1214+x1215))<<x1216);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x1305 = UINT64_MAX;
	static uint32_t x1306 = 1529606U;
	int8_t x1308 = 11;
	int32_t t38 = -102007254;

    t38 = ((x1305==(x1306+x1307))<<x1308);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x1309 = INT32_MIN;
	int64_t x1310 = INT64_MIN;
	static volatile int32_t t39 = -25538;

    t39 = ((x1309==(x1310+x1311))<<x1312);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x1389 = 8U;
	volatile uint16_t x1390 = UINT16_MAX;
	static volatile int64_t x1391 = INT64_MIN;
	uint16_t x1392 = 3U;
	int32_t t40 = 687;

    t40 = ((x1389==(x1390+x1391))<<x1392);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x1401 = -1;
	volatile uint64_t x1402 = 4678434557130LLU;
	int32_t x1404 = 9;
	volatile int32_t t41 = 396794877;

    t41 = ((x1401==(x1402+x1403))<<x1404);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint8_t x1421 = UINT8_MAX;
	static int8_t x1422 = INT8_MIN;
	static volatile int16_t x1423 = -481;
	volatile int32_t t42 = 2;

    t42 = ((x1421==(x1422+x1423))<<x1424);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x1435 = 5U;
	int32_t x1436 = 5;
	volatile int32_t t43 = 147707;

    t43 = ((x1433==(x1434+x1435))<<x1436);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint64_t x1505 = UINT64_MAX;
	volatile int32_t x1506 = INT32_MIN;
	static uint16_t x1507 = UINT16_MAX;
	int16_t x1508 = 1;
	volatile int32_t t44 = -426080622;

    t44 = ((x1505==(x1506+x1507))<<x1508);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x1605 = INT32_MIN;
	volatile int8_t x1606 = -1;
	static uint8_t x1608 = 3U;
	static int32_t t45 = -1;

    t45 = ((x1605==(x1606+x1607))<<x1608);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x1721 = -3;
	uint16_t x1722 = 7U;
	uint8_t x1723 = UINT8_MAX;

    t46 = ((x1721==(x1722+x1723))<<x1724);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x1742 = INT64_MIN;
	uint16_t x1743 = 3567U;
	int32_t t47 = 53066;

    t47 = ((x1741==(x1742+x1743))<<x1744);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x1809 = -1;
	uint64_t x1811 = 4345880444873240878LLU;
	uint8_t x1812 = 18U;

    t48 = ((x1809==(x1810+x1811))<<x1812);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x1853 = 16889539LL;
	uint32_t x1854 = 8482U;
	uint8_t x1855 = 48U;
	volatile uint32_t x1856 = 1U;
	static volatile int32_t t49 = -6372488;

    t49 = ((x1853==(x1854+x1855))<<x1856);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x1865 = INT16_MIN;
	static volatile int8_t x1866 = -1;
	int32_t t50 = 565283;

    t50 = ((x1865==(x1866+x1867))<<x1868);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x1877 = INT32_MIN;
	int16_t x1878 = 507;
	int8_t x1879 = 1;
	int8_t x1880 = 0;
	volatile int32_t t51 = -414;

    t51 = ((x1877==(x1878+x1879))<<x1880);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x1881 = 606U;
	volatile uint8_t x1882 = 0U;
	int32_t x1883 = 14191;
	int16_t x1884 = 1;
	int32_t t52 = -122605;

    t52 = ((x1881==(x1882+x1883))<<x1884);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x1886 = 1U;
	int32_t x1887 = INT32_MIN;
	volatile int16_t x1888 = 26;

    t53 = ((x1885==(x1886+x1887))<<x1888);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x1969 = UINT8_MAX;
	int16_t x1970 = INT16_MIN;
	int16_t x1971 = -1;
	int32_t t54 = -6647;

    t54 = ((x1969==(x1970+x1971))<<x1972);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint32_t x2025 = UINT32_MAX;
	uint16_t x2026 = 171U;
	static uint32_t x2027 = 1777634917U;
	int8_t x2028 = 0;
	int32_t t55 = -2;

    t55 = ((x2025==(x2026+x2027))<<x2028);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x2057 = -1LL;
	static int32_t x2058 = INT32_MIN;
	static uint64_t x2059 = 31190LLU;
	static uint8_t x2060 = 2U;
	volatile int32_t t56 = 115317;

    t56 = ((x2057==(x2058+x2059))<<x2060);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x2085 = 261469219U;
	uint64_t x2086 = UINT64_MAX;
	static volatile int64_t x2087 = INT64_MIN;
	static uint8_t x2088 = 5U;
	static int32_t t57 = -104;

    t57 = ((x2085==(x2086+x2087))<<x2088);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x2089 = UINT16_MAX;
	uint32_t x2090 = 1829U;
	static uint32_t x2091 = UINT32_MAX;
	uint16_t x2092 = 1U;

    t58 = ((x2089==(x2090+x2091))<<x2092);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x2109 = INT32_MAX;
	int16_t x2110 = INT16_MIN;
	int32_t x2111 = 35;
	int32_t x2112 = 1;
	static int32_t t59 = -22;

    t59 = ((x2109==(x2110+x2111))<<x2112);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x2201 = -1;
	uint32_t x2202 = UINT32_MAX;
	int32_t x2203 = -402;

    t60 = ((x2201==(x2202+x2203))<<x2204);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x2317 = UINT16_MAX;
	static volatile int8_t x2320 = 19;
	static int32_t t61 = 25868;

    t61 = ((x2317==(x2318+x2319))<<x2320);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x2322 = 351280938329755LLU;
	int32_t x2323 = INT32_MAX;
	uint32_t x2324 = 0U;
	int32_t t62 = 7560717;

    t62 = ((x2321==(x2322+x2323))<<x2324);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint8_t x2330 = 87U;
	uint8_t x2332 = 20U;

    t63 = ((x2329==(x2330+x2331))<<x2332);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x2369 = INT16_MIN;
	static int8_t x2371 = -1;
	static volatile int32_t t64 = 6411;

    t64 = ((x2369==(x2370+x2371))<<x2372);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x2425 = 729;
	int32_t x2426 = INT32_MIN;
	static uint16_t x2427 = 4779U;

    t65 = ((x2425==(x2426+x2427))<<x2428);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint32_t x2437 = UINT32_MAX;
	static volatile uint8_t x2438 = 32U;
	uint16_t x2439 = 5U;
	uint8_t x2440 = 0U;
	int32_t t66 = 13;

    t66 = ((x2437==(x2438+x2439))<<x2440);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x2442 = -1;
	uint64_t x2443 = 1679129294LLU;
	int8_t x2444 = 2;
	int32_t t67 = -8268;

    t67 = ((x2441==(x2442+x2443))<<x2444);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x2497 = INT16_MIN;
	int64_t x2499 = INT64_MIN;
	int8_t x2500 = 30;
	int32_t t68 = -543;

    t68 = ((x2497==(x2498+x2499))<<x2500);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x2509 = INT16_MIN;
	volatile int32_t x2511 = -1;
	int32_t t69 = -16127449;

    t69 = ((x2509==(x2510+x2511))<<x2512);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x2665 = UINT64_MAX;
	uint64_t x2667 = UINT64_MAX;
	static uint16_t x2668 = 1U;
	volatile int32_t t70 = 2207340;

    t70 = ((x2665==(x2666+x2667))<<x2668);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint8_t x2669 = UINT8_MAX;
	static uint16_t x2670 = 6U;
	uint8_t x2671 = 3U;
	int8_t x2672 = 0;

    t71 = ((x2669==(x2670+x2671))<<x2672);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x2681 = INT8_MAX;
	int64_t x2682 = 303LL;
	uint32_t x2683 = 29392609U;
	int8_t x2684 = 3;
	int32_t t72 = 88204;

    t72 = ((x2681==(x2682+x2683))<<x2684);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint16_t x2753 = UINT16_MAX;
	int16_t x2754 = INT16_MAX;
	int8_t x2755 = INT8_MIN;
	uint16_t x2756 = 19U;
	volatile int32_t t73 = -1867737;

    t73 = ((x2753==(x2754+x2755))<<x2756);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x2789 = INT8_MAX;
	uint8_t x2790 = UINT8_MAX;
	int32_t x2791 = 1;
	uint8_t x2792 = 2U;
	int32_t t74 = 3;

    t74 = ((x2789==(x2790+x2791))<<x2792);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint8_t x2810 = 18U;
	int64_t x2811 = INT64_MIN;
	static int8_t x2812 = 15;
	volatile int32_t t75 = 60;

    t75 = ((x2809==(x2810+x2811))<<x2812);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x2833 = INT16_MIN;
	int64_t x2834 = 4160650464583LL;
	static int8_t x2835 = 0;
	int16_t x2836 = 13;
	volatile int32_t t76 = 519740;

    t76 = ((x2833==(x2834+x2835))<<x2836);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x2845 = INT32_MIN;
	static uint16_t x2847 = UINT16_MAX;
	volatile uint16_t x2848 = 4U;
	int32_t t77 = -245;

    t77 = ((x2845==(x2846+x2847))<<x2848);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x2857 = 6705LLU;
	static volatile int32_t x2859 = 396631;
	uint64_t x2860 = 1LLU;
	int32_t t78 = -3122;

    t78 = ((x2857==(x2858+x2859))<<x2860);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x2877 = INT64_MIN;
	int8_t x2878 = -1;
	static int8_t x2879 = INT8_MIN;
	volatile int32_t t79 = -19883;

    t79 = ((x2877==(x2878+x2879))<<x2880);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x2881 = 0;
	int64_t x2882 = -1LL;
	static int16_t x2883 = INT16_MIN;
	int32_t t80 = 1716;

    t80 = ((x2881==(x2882+x2883))<<x2884);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x2885 = 3575U;
	int8_t x2886 = 0;
	volatile uint32_t x2887 = 635U;
	static uint8_t x2888 = 3U;
	int32_t t81 = -2;

    t81 = ((x2885==(x2886+x2887))<<x2888);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x2981 = INT32_MIN;
	int32_t x2982 = -1;
	static int32_t x2983 = INT32_MAX;
	uint32_t x2984 = 1U;

    t82 = ((x2981==(x2982+x2983))<<x2984);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x3005 = INT32_MAX;
	int64_t x3006 = INT64_MIN;
	uint16_t x3007 = 363U;
	volatile int8_t x3008 = 24;
	volatile int32_t t83 = 7;

    t83 = ((x3005==(x3006+x3007))<<x3008);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x3009 = INT32_MAX;
	volatile int64_t x3010 = INT64_MIN;
	static int64_t x3011 = INT64_MAX;
	uint16_t x3012 = 1U;
	static volatile int32_t t84 = -57183323;

    t84 = ((x3009==(x3010+x3011))<<x3012);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int64_t x3013 = INT64_MIN;
	static uint32_t x3014 = UINT32_MAX;
	int16_t x3015 = INT16_MIN;
	uint8_t x3016 = 4U;
	int32_t t85 = -10;

    t85 = ((x3013==(x3014+x3015))<<x3016);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x3102 = 107U;
	uint16_t x3104 = 3U;
	volatile int32_t t86 = -1178325;

    t86 = ((x3101==(x3102+x3103))<<x3104);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint16_t x3111 = 10U;
	volatile uint8_t x3112 = 0U;
	volatile int32_t t87 = -6853;

    t87 = ((x3109==(x3110+x3111))<<x3112);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x3121 = 50488LL;
	int8_t x3122 = -1;
	int64_t x3123 = -1LL;
	uint16_t x3124 = 1U;
	volatile int32_t t88 = -35;

    t88 = ((x3121==(x3122+x3123))<<x3124);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x3141 = 10U;
	int8_t x3142 = INT8_MAX;
	int16_t x3143 = INT16_MIN;
	uint8_t x3144 = 14U;
	volatile int32_t t89 = -3;

    t89 = ((x3141==(x3142+x3143))<<x3144);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t t90 = -1;

    t90 = ((x3157==(x3158+x3159))<<x3160);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint16_t x3205 = 540U;
	int64_t x3206 = -308551447002558654LL;
	static int32_t x3207 = INT32_MIN;
	uint16_t x3208 = 13U;
	int32_t t91 = 167544844;

    t91 = ((x3205==(x3206+x3207))<<x3208);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x3234 = INT8_MAX;
	static int8_t x3235 = 59;
	static int32_t t92 = -554090311;

    t92 = ((x3233==(x3234+x3235))<<x3236);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x3257 = INT64_MAX;
	uint16_t x3258 = UINT16_MAX;
	volatile uint64_t x3259 = 3831LLU;
	volatile int32_t t93 = -502;

    t93 = ((x3257==(x3258+x3259))<<x3260);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x3305 = INT8_MIN;
	int64_t x3307 = 28653555LL;
	static int32_t t94 = 0;

    t94 = ((x3305==(x3306+x3307))<<x3308);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x3334 = INT8_MIN;
	int8_t x3335 = -4;
	int32_t t95 = -4536092;

    t95 = ((x3333==(x3334+x3335))<<x3336);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x3369 = -1;
	static uint8_t x3371 = 100U;
	uint16_t x3372 = 15U;
	volatile int32_t t96 = 29839311;

    t96 = ((x3369==(x3370+x3371))<<x3372);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint64_t x3393 = 2110183712049404LLU;
	int64_t x3394 = INT64_MIN;
	int64_t x3395 = INT64_MAX;
	uint16_t x3396 = 12U;
	int32_t t97 = 248674908;

    t97 = ((x3393==(x3394+x3395))<<x3396);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x3405 = -1LL;
	uint8_t x3406 = UINT8_MAX;
	static int16_t x3407 = INT16_MAX;
	static int32_t t98 = 681856639;

    t98 = ((x3405==(x3406+x3407))<<x3408);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x3434 = 2184;
	static volatile int32_t x3435 = -1;
	int16_t x3436 = 7;
	int32_t t99 = 16;

    t99 = ((x3433==(x3434+x3435))<<x3436);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x3441 = 13035;
	volatile uint8_t x3442 = 3U;
	int64_t x3443 = INT64_MIN;
	static uint8_t x3444 = 4U;

    t100 = ((x3441==(x3442+x3443))<<x3444);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x3445 = -1;
	uint16_t x3446 = 24105U;
	uint64_t x3447 = 16LLU;
	uint32_t x3448 = 22U;
	volatile int32_t t101 = 13757;

    t101 = ((x3445==(x3446+x3447))<<x3448);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x3581 = INT16_MIN;

    t102 = ((x3581==(x3582+x3583))<<x3584);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x3621 = 96U;
	int32_t x3623 = -1;
	uint16_t x3624 = 3U;
	volatile int32_t t103 = 41088659;

    t103 = ((x3621==(x3622+x3623))<<x3624);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x3630 = INT32_MIN;
	int64_t x3631 = INT64_MAX;
	int8_t x3632 = 4;
	volatile int32_t t104 = 708;

    t104 = ((x3629==(x3630+x3631))<<x3632);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x3685 = 4;
	volatile int16_t x3686 = INT16_MAX;
	int32_t x3687 = INT32_MIN;
	uint8_t x3688 = 10U;
	int32_t t105 = 460563;

    t105 = ((x3685==(x3686+x3687))<<x3688);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x3693 = INT8_MIN;
	volatile int64_t x3694 = 12473557499088634LL;
	int16_t x3695 = INT16_MIN;
	uint8_t x3696 = 13U;
	volatile int32_t t106 = 14;

    t106 = ((x3693==(x3694+x3695))<<x3696);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x3705 = INT64_MIN;
	uint32_t x3706 = 115705942U;
	volatile int8_t x3707 = -1;
	static uint8_t x3708 = 14U;
	int32_t t107 = 3;

    t107 = ((x3705==(x3706+x3707))<<x3708);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x3709 = UINT32_MAX;
	int64_t x3711 = 29061898LL;

    t108 = ((x3709==(x3710+x3711))<<x3712);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int64_t x3717 = INT64_MIN;
	volatile int8_t x3718 = -29;
	int16_t x3719 = INT16_MAX;

    t109 = ((x3717==(x3718+x3719))<<x3720);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint32_t x3783 = UINT32_MAX;
	static uint8_t x3784 = 1U;

    t110 = ((x3781==(x3782+x3783))<<x3784);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x3794 = -2;
	static int32_t x3795 = 428;
	volatile int32_t t111 = 80;

    t111 = ((x3793==(x3794+x3795))<<x3796);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x3805 = -1;
	int64_t x3806 = 94558629992577322LL;
	int32_t x3807 = INT32_MIN;
	uint8_t x3808 = 26U;
	int32_t t112 = -980491;

    t112 = ((x3805==(x3806+x3807))<<x3808);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x3825 = INT16_MIN;
	volatile uint32_t x3826 = 1904005656U;
	int8_t x3827 = INT8_MIN;
	uint8_t x3828 = 4U;

    t113 = ((x3825==(x3826+x3827))<<x3828);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x3833 = -1;
	uint32_t x3834 = 4612U;
	uint32_t x3835 = UINT32_MAX;
	uint8_t x3836 = 0U;

    t114 = ((x3833==(x3834+x3835))<<x3836);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile uint8_t x3849 = UINT8_MAX;
	int16_t x3850 = INT16_MIN;
	int64_t x3851 = 33466069784432LL;
	uint8_t x3852 = 1U;
	static int32_t t115 = -6439028;

    t115 = ((x3849==(x3850+x3851))<<x3852);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x3865 = -1;
	int64_t x3866 = INT64_MAX;
	uint16_t x3868 = 0U;
	volatile int32_t t116 = -1513098;

    t116 = ((x3865==(x3866+x3867))<<x3868);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x3893 = 2U;
	uint32_t x3894 = UINT32_MAX;
	int16_t x3895 = INT16_MAX;
	volatile uint64_t x3896 = 3LLU;
	static int32_t t117 = 189812;

    t117 = ((x3893==(x3894+x3895))<<x3896);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x3933 = 11179830LLU;
	int64_t x3934 = 908LL;
	int64_t x3935 = -111548LL;
	static volatile int32_t t118 = 10;

    t118 = ((x3933==(x3934+x3935))<<x3936);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x3973 = 5402875940122868800LLU;
	static uint64_t x3974 = UINT64_MAX;
	uint16_t x3975 = 31U;
	volatile uint16_t x3976 = 14U;
	volatile int32_t t119 = -385;

    t119 = ((x3973==(x3974+x3975))<<x3976);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x3981 = 126;
	int32_t x3982 = -1;
	int32_t x3983 = -13969;
	int32_t t120 = 1;

    t120 = ((x3981==(x3982+x3983))<<x3984);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x4017 = INT8_MAX;
	volatile uint16_t x4018 = UINT16_MAX;
	uint64_t x4019 = 556473881085LLU;
	int8_t x4020 = 4;
	int32_t t121 = -29441;

    t121 = ((x4017==(x4018+x4019))<<x4020);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x4061 = 49745LLU;
	static int32_t x4062 = -1;
	volatile uint16_t x4064 = 1U;
	static volatile int32_t t122 = 6;

    t122 = ((x4061==(x4062+x4063))<<x4064);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x4105 = -20;
	static int16_t x4107 = INT16_MIN;
	static uint8_t x4108 = 2U;
	volatile int32_t t123 = 30207;

    t123 = ((x4105==(x4106+x4107))<<x4108);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x4117 = INT8_MAX;
	int16_t x4118 = INT16_MIN;
	int16_t x4119 = 3742;
	uint8_t x4120 = 1U;
	volatile int32_t t124 = 35882709;

    t124 = ((x4117==(x4118+x4119))<<x4120);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x4178 = 93U;
	uint32_t x4179 = UINT32_MAX;
	static volatile int32_t t125 = -2414;

    t125 = ((x4177==(x4178+x4179))<<x4180);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x4241 = 5363;
	int8_t x4242 = 1;
	static int64_t x4243 = 13468506121503LL;
	volatile uint8_t x4244 = 26U;
	int32_t t126 = 25451;

    t126 = ((x4241==(x4242+x4243))<<x4244);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x4254 = 29U;
	int32_t x4255 = -96787998;
	uint8_t x4256 = 11U;
	static volatile int32_t t127 = 947907235;

    t127 = ((x4253==(x4254+x4255))<<x4256);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x4257 = INT64_MAX;
	uint8_t x4258 = 2U;
	static volatile int64_t x4259 = 266205518LL;
	int8_t x4260 = 0;
	static int32_t t128 = -7336756;

    t128 = ((x4257==(x4258+x4259))<<x4260);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x4262 = INT16_MIN;
	volatile uint64_t x4263 = UINT64_MAX;
	uint16_t x4264 = 15U;
	volatile int32_t t129 = 201305;

    t129 = ((x4261==(x4262+x4263))<<x4264);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint64_t x4317 = UINT64_MAX;
	uint8_t x4318 = 66U;
	uint8_t x4319 = 15U;
	int8_t x4320 = 1;
	int32_t t130 = 109450663;

    t130 = ((x4317==(x4318+x4319))<<x4320);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x4413 = 38943680981826LL;
	uint16_t x4414 = UINT16_MAX;
	uint8_t x4415 = 119U;
	volatile int32_t t131 = -47518;

    t131 = ((x4413==(x4414+x4415))<<x4416);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x4425 = 1U;
	static uint64_t x4426 = 13808057401029LLU;
	int64_t x4427 = 625371763LL;
	static volatile uint8_t x4428 = 17U;
	volatile int32_t t132 = 62741;

    t132 = ((x4425==(x4426+x4427))<<x4428);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x4442 = -1;
	static volatile uint32_t x4444 = 12U;
	volatile int32_t t133 = 942613276;

    t133 = ((x4441==(x4442+x4443))<<x4444);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x4449 = INT32_MAX;
	uint64_t x4450 = UINT64_MAX;
	uint8_t x4451 = 6U;
	int32_t t134 = 31654151;

    t134 = ((x4449==(x4450+x4451))<<x4452);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint8_t x4453 = UINT8_MAX;
	volatile int8_t x4454 = INT8_MIN;
	int32_t t135 = -12;

    t135 = ((x4453==(x4454+x4455))<<x4456);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x4457 = 170U;
	volatile int64_t x4458 = -121LL;
	volatile int16_t x4459 = INT16_MIN;

    t136 = ((x4457==(x4458+x4459))<<x4460);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x4485 = 0;
	int16_t x4486 = INT16_MAX;
	int8_t x4487 = INT8_MIN;
	static int64_t x4488 = 0LL;

    t137 = ((x4485==(x4486+x4487))<<x4488);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile int64_t x4489 = 11451056517885992LL;
	int8_t x4490 = INT8_MIN;
	static int8_t x4491 = INT8_MIN;
	uint16_t x4492 = 4U;
	volatile int32_t t138 = 282976350;

    t138 = ((x4489==(x4490+x4491))<<x4492);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x4501 = UINT32_MAX;
	uint8_t x4504 = 4U;
	volatile int32_t t139 = 11;

    t139 = ((x4501==(x4502+x4503))<<x4504);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x4505 = 14U;
	volatile int8_t x4506 = INT8_MIN;
	int8_t x4507 = -21;
	int32_t t140 = -15;

    t140 = ((x4505==(x4506+x4507))<<x4508);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x4554 = 41;
	volatile int64_t x4555 = 24956LL;
	int8_t x4556 = 0;

    t141 = ((x4553==(x4554+x4555))<<x4556);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x4665 = INT16_MAX;
	int32_t x4666 = -153208004;
	volatile uint16_t x4667 = 349U;
	static uint8_t x4668 = 3U;
	static volatile int32_t t142 = -8885;

    t142 = ((x4665==(x4666+x4667))<<x4668);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int32_t x4673 = INT32_MAX;
	int32_t x4674 = INT32_MAX;
	volatile int16_t x4675 = INT16_MIN;
	int8_t x4676 = 3;
	volatile int32_t t143 = 2;

    t143 = ((x4673==(x4674+x4675))<<x4676);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x4685 = UINT32_MAX;
	uint32_t x4686 = 15540U;
	int8_t x4688 = 1;

    t144 = ((x4685==(x4686+x4687))<<x4688);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint16_t x4745 = 26471U;
	int64_t x4746 = -151200585585163078LL;
	int32_t x4747 = -753932892;
	int32_t t145 = -410;

    t145 = ((x4745==(x4746+x4747))<<x4748);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint64_t x4801 = UINT64_MAX;
	uint32_t x4802 = 63450747U;
	int16_t x4803 = INT16_MIN;
	uint32_t x4804 = 2U;
	volatile int32_t t146 = 3;

    t146 = ((x4801==(x4802+x4803))<<x4804);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint16_t x4865 = 1828U;
	static int64_t x4866 = 1LL;
	volatile int8_t x4868 = 15;
	volatile int32_t t147 = -3894612;

    t147 = ((x4865==(x4866+x4867))<<x4868);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x4893 = INT8_MAX;
	volatile int32_t x4894 = INT32_MIN;
	int32_t x4896 = 1;
	static volatile int32_t t148 = 174197748;

    t148 = ((x4893==(x4894+x4895))<<x4896);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x4909 = 15U;
	static int16_t x4910 = -1;
	uint8_t x4911 = 0U;
	uint16_t x4912 = 0U;

    t149 = ((x4909==(x4910+x4911))<<x4912);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x4949 = 28U;
	volatile uint32_t x4951 = 9752U;
	int32_t t150 = 2936;

    t150 = ((x4949==(x4950+x4951))<<x4952);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x4961 = INT32_MIN;
	int16_t x4963 = 6;
	static int8_t x4964 = 5;

    t151 = ((x4961==(x4962+x4963))<<x4964);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x4965 = INT8_MAX;
	volatile uint64_t x4966 = 141886798065902863LLU;
	int8_t x4967 = INT8_MAX;
	int32_t t152 = -1485;

    t152 = ((x4965==(x4966+x4967))<<x4968);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x4973 = INT64_MIN;
	int8_t x4974 = 0;
	volatile int32_t t153 = -1;

    t153 = ((x4973==(x4974+x4975))<<x4976);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x5025 = UINT16_MAX;
	static volatile int8_t x5026 = 0;
	volatile uint8_t x5027 = 123U;
	volatile uint16_t x5028 = 5U;
	volatile int32_t t154 = -63;

    t154 = ((x5025==(x5026+x5027))<<x5028);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x5029 = INT32_MAX;
	int32_t x5030 = -1;
	volatile int8_t x5032 = 11;
	volatile int32_t t155 = 852;

    t155 = ((x5029==(x5030+x5031))<<x5032);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint64_t x5053 = 109674677656LLU;
	volatile uint32_t x5054 = 22380587U;
	int8_t x5055 = INT8_MAX;
	int8_t x5056 = 4;
	int32_t t156 = -16955;

    t156 = ((x5053==(x5054+x5055))<<x5056);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int32_t x5085 = INT32_MAX;
	static int16_t x5086 = INT16_MAX;
	uint8_t x5088 = 1U;
	int32_t t157 = -101137;

    t157 = ((x5085==(x5086+x5087))<<x5088);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x5102 = INT32_MAX;
	static volatile int64_t x5103 = -17010359418232692LL;
	uint8_t x5104 = 23U;
	volatile int32_t t158 = -3735523;

    t158 = ((x5101==(x5102+x5103))<<x5104);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x5114 = INT16_MAX;
	static volatile int8_t x5115 = INT8_MIN;
	static uint8_t x5116 = 0U;
	int32_t t159 = -16971808;

    t159 = ((x5113==(x5114+x5115))<<x5116);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x5145 = 1LLU;
	static volatile uint16_t x5147 = UINT16_MAX;
	int8_t x5148 = 13;
	volatile int32_t t160 = -3312334;

    t160 = ((x5145==(x5146+x5147))<<x5148);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x5154 = 2;
	int32_t x5155 = INT32_MIN;
	int16_t x5156 = 3;
	volatile int32_t t161 = -45352;

    t161 = ((x5153==(x5154+x5155))<<x5156);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x5161 = INT32_MIN;
	uint32_t x5162 = UINT32_MAX;
	uint32_t x5163 = 62442585U;
	volatile uint8_t x5164 = 14U;
	volatile int32_t t162 = -7382;

    t162 = ((x5161==(x5162+x5163))<<x5164);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x5173 = 97U;
	static int64_t x5174 = -625LL;
	int8_t x5175 = 7;
	volatile uint16_t x5176 = 6U;
	volatile int32_t t163 = 3653;

    t163 = ((x5173==(x5174+x5175))<<x5176);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x5201 = INT8_MIN;
	uint8_t x5202 = 0U;
	int16_t x5203 = 229;

    t164 = ((x5201==(x5202+x5203))<<x5204);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x5205 = -1;
	static volatile uint8_t x5206 = 29U;
	static int64_t x5207 = 1022000837596017LL;
	uint8_t x5208 = 7U;
	int32_t t165 = 4534016;

    t165 = ((x5205==(x5206+x5207))<<x5208);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x5297 = -1LL;
	int64_t x5298 = INT64_MIN;
	uint64_t x5299 = UINT64_MAX;
	volatile uint64_t x5300 = 5LLU;

    t166 = ((x5297==(x5298+x5299))<<x5300);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint8_t x5353 = UINT8_MAX;
	uint8_t x5355 = UINT8_MAX;
	static uint16_t x5356 = 5U;
	volatile int32_t t167 = -443723562;

    t167 = ((x5353==(x5354+x5355))<<x5356);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x5357 = 1U;
	int64_t x5358 = INT64_MIN;
	volatile uint16_t x5359 = UINT16_MAX;
	int8_t x5360 = 0;
	volatile int32_t t168 = -614211010;

    t168 = ((x5357==(x5358+x5359))<<x5360);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x5365 = INT8_MIN;
	int32_t x5366 = 136876452;
	int8_t x5367 = -28;
	static int64_t x5368 = 8LL;
	volatile int32_t t169 = 229;

    t169 = ((x5365==(x5366+x5367))<<x5368);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int16_t x5394 = -43;
	int16_t x5395 = INT16_MIN;
	int32_t t170 = 57968;

    t170 = ((x5393==(x5394+x5395))<<x5396);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x5409 = INT64_MIN;
	static int64_t x5410 = -2569692LL;
	int64_t x5411 = 219374444765791LL;
	volatile uint8_t x5412 = 15U;
	int32_t t171 = 15;

    t171 = ((x5409==(x5410+x5411))<<x5412);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x5429 = 1U;
	static volatile int32_t t172 = -252027;

    t172 = ((x5429==(x5430+x5431))<<x5432);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x5477 = 1026723300U;
	static uint64_t x5478 = 6515468LLU;
	uint16_t x5479 = UINT16_MAX;
	int32_t x5480 = 10;
	int32_t t173 = 53056;

    t173 = ((x5477==(x5478+x5479))<<x5480);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x5502 = UINT32_MAX;
	static int32_t x5503 = INT32_MIN;
	int32_t t174 = -415;

    t174 = ((x5501==(x5502+x5503))<<x5504);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x5578 = UINT8_MAX;
	volatile int32_t x5580 = 5;
	static volatile int32_t t175 = -1849365;

    t175 = ((x5577==(x5578+x5579))<<x5580);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x5613 = UINT8_MAX;
	static uint8_t x5614 = UINT8_MAX;
	int64_t x5615 = 3737974979460403544LL;
	uint32_t x5616 = 4U;

    t176 = ((x5613==(x5614+x5615))<<x5616);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint16_t x5657 = 14U;
	volatile uint64_t x5658 = 4372206849098577037LLU;
	static int32_t x5659 = -1;
	uint16_t x5660 = 23U;

    t177 = ((x5657==(x5658+x5659))<<x5660);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int32_t x5681 = INT32_MIN;
	int16_t x5682 = -7433;
	static volatile int8_t x5683 = 1;
	int64_t x5684 = 0LL;
	volatile int32_t t178 = 8034;

    t178 = ((x5681==(x5682+x5683))<<x5684);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x5689 = UINT8_MAX;
	static uint32_t x5690 = 2032989U;
	volatile uint32_t x5692 = 4U;
	int32_t t179 = -10479;

    t179 = ((x5689==(x5690+x5691))<<x5692);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x5787 = -6;
	int8_t x5788 = 11;
	int32_t t180 = 178012;

    t180 = ((x5785==(x5786+x5787))<<x5788);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x5845 = 31U;
	static int8_t x5846 = -36;
	int32_t x5847 = 1;
	static uint8_t x5848 = 4U;
	static volatile int32_t t181 = 1;

    t181 = ((x5845==(x5846+x5847))<<x5848);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x5849 = -19947759;
	volatile uint32_t x5850 = 3U;
	static uint64_t x5851 = 899075LLU;
	volatile uint16_t x5852 = 1U;
	volatile int32_t t182 = -4860;

    t182 = ((x5849==(x5850+x5851))<<x5852);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint32_t x5865 = 0U;
	int32_t x5866 = 107358778;
	int64_t x5867 = 2264043LL;
	uint8_t x5868 = 5U;
	volatile int32_t t183 = 16;

    t183 = ((x5865==(x5866+x5867))<<x5868);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x5885 = -5772934;
	static volatile int8_t x5886 = -1;
	int8_t x5888 = 4;
	int32_t t184 = -4;

    t184 = ((x5885==(x5886+x5887))<<x5888);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x5941 = INT64_MIN;
	int8_t x5944 = 7;
	volatile int32_t t185 = -100;

    t185 = ((x5941==(x5942+x5943))<<x5944);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x5959 = 1;
	static uint16_t x5960 = 30U;
	int32_t t186 = -3173966;

    t186 = ((x5957==(x5958+x5959))<<x5960);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x6001 = UINT32_MAX;
	int64_t x6002 = INT64_MIN;
	static int8_t x6003 = 24;
	int16_t x6004 = 1;
	volatile int32_t t187 = 122024698;

    t187 = ((x6001==(x6002+x6003))<<x6004);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x6029 = 216;
	volatile int8_t x6030 = 0;
	volatile uint64_t x6031 = 5LLU;
	static volatile uint8_t x6032 = 1U;
	static int32_t t188 = 14715134;

    t188 = ((x6029==(x6030+x6031))<<x6032);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x6046 = -1;
	int32_t x6047 = -837328940;
	uint8_t x6048 = 8U;
	volatile int32_t t189 = -234354;

    t189 = ((x6045==(x6046+x6047))<<x6048);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x6069 = INT64_MIN;
	int8_t x6070 = -1;
	int32_t x6071 = -1788;
	int8_t x6072 = 26;
	static int32_t t190 = -55116290;

    t190 = ((x6069==(x6070+x6071))<<x6072);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint16_t x6073 = UINT16_MAX;
	int64_t x6074 = -490150301LL;
	static int16_t x6075 = INT16_MAX;
	int8_t x6076 = 0;
	int32_t t191 = 420786;

    t191 = ((x6073==(x6074+x6075))<<x6076);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x6105 = -1;
	int8_t x6107 = 1;
	int64_t x6108 = 5LL;
	static volatile int32_t t192 = -344;

    t192 = ((x6105==(x6106+x6107))<<x6108);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x6117 = INT16_MIN;
	volatile int64_t x6118 = INT64_MIN;
	uint32_t x6119 = 843418U;
	static uint8_t x6120 = 9U;
	static int32_t t193 = -23167791;

    t193 = ((x6117==(x6118+x6119))<<x6120);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x6129 = INT64_MIN;
	volatile int8_t x6130 = INT8_MIN;
	int32_t x6131 = -1;
	static int16_t x6132 = 0;
	volatile int32_t t194 = 1275;

    t194 = ((x6129==(x6130+x6131))<<x6132);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x6178 = 964U;
	static int16_t x6179 = -1;
	volatile uint8_t x6180 = 0U;
	volatile int32_t t195 = -6;

    t195 = ((x6177==(x6178+x6179))<<x6180);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x6181 = INT64_MIN;
	int16_t x6183 = -3410;
	volatile int32_t t196 = -26;

    t196 = ((x6181==(x6182+x6183))<<x6184);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x6197 = 0;
	int8_t x6198 = INT8_MIN;
	volatile int8_t x6199 = -1;
	volatile int8_t x6200 = 10;
	int32_t t197 = -102640;

    t197 = ((x6197==(x6198+x6199))<<x6200);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x6217 = INT16_MIN;
	volatile int32_t x6218 = INT32_MIN;
	static int8_t x6219 = 1;
	int16_t x6220 = 1;
	static volatile int32_t t198 = 1;

    t198 = ((x6217==(x6218+x6219))<<x6220);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x6221 = UINT16_MAX;
	static uint16_t x6222 = 2860U;
	int16_t x6224 = 3;
	static int32_t t199 = 545520790;

    t199 = ((x6221==(x6222+x6223))<<x6224);

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

