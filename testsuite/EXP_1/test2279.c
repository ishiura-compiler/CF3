
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

static int8_t x5 = -1;
static uint16_t x7 = 488U;
int8_t x13 = 3;
static int16_t x41 = INT16_MAX;
int16_t x42 = INT16_MIN;
int64_t x59 = INT64_MIN;
uint32_t x61 = UINT32_MAX;
int32_t x63 = INT32_MIN;
int8_t x86 = INT8_MAX;
int32_t x96 = 26;
volatile int16_t x102 = INT16_MIN;
static int32_t x122 = -1;
int8_t x154 = -56;
int8_t x156 = 0;
static int16_t x189 = INT16_MAX;
static int8_t x192 = 1;
int8_t x217 = INT8_MIN;
int8_t x218 = -1;
int32_t t14 = -1;
static uint8_t x352 = 15U;
int64_t x354 = -1633905192438000LL;
uint8_t x356 = 3U;
int32_t t18 = -38815;
uint8_t x410 = UINT8_MAX;
uint32_t x480 = 25U;
int8_t x525 = -8;
static int32_t x534 = INT32_MIN;
int8_t x538 = INT8_MIN;
volatile int32_t t24 = 1121636;
static int64_t x549 = -5354LL;
int8_t x551 = -1;
int8_t x612 = 0;
int64_t x673 = INT64_MAX;
int64_t x758 = -1LL;
static int32_t x785 = INT32_MAX;
uint64_t x788 = 0LLU;
volatile int32_t t33 = -1;
volatile int32_t t35 = -111;
volatile uint64_t x959 = 2LLU;
static uint8_t x968 = 0U;
int8_t x982 = -47;
int64_t x983 = -3273955785687044067LL;
uint16_t x984 = 31U;
uint8_t x997 = UINT8_MAX;
static uint16_t x1000 = 1U;
volatile int32_t t41 = 23294226;
int64_t x1035 = INT64_MIN;
static int8_t x1060 = 30;
uint64_t x1097 = 790817605205LLU;
volatile uint64_t x1197 = UINT64_MAX;
volatile int16_t x1198 = INT16_MIN;
uint8_t x1200 = 1U;
static int32_t t47 = -30926413;
int32_t x1348 = 6;
static int32_t t52 = -2622;
static uint16_t x1396 = 3U;
int32_t t53 = -18;
static int16_t x1471 = -1;
volatile int32_t t57 = -47332;
int32_t x1507 = 112;
volatile uint8_t x1518 = 11U;
uint64_t x1519 = UINT64_MAX;
int32_t t59 = -1;
int16_t x1545 = INT16_MIN;
static int32_t x1562 = INT32_MAX;
static uint8_t x1564 = 2U;
int16_t x1587 = -3;
int8_t x1588 = 0;
static uint16_t x1633 = 0U;
volatile int32_t t66 = 35528826;
int8_t x1712 = 1;
uint8_t x1718 = UINT8_MAX;
uint64_t x1757 = 3406294838746938LLU;
static volatile int16_t x1758 = INT16_MAX;
static int64_t x1778 = -1LL;
static int8_t x1808 = 0;
volatile int32_t x1935 = 1033937;
int32_t x2041 = INT32_MAX;
int64_t x2066 = INT64_MAX;
int32_t x2113 = -1732100;
static int16_t x2114 = -1;
int32_t x2126 = -1;
int32_t t78 = -197;
static int16_t x2133 = INT16_MAX;
int64_t x2134 = INT64_MAX;
uint32_t x2136 = 20U;
volatile int32_t t80 = -143557;
static volatile int16_t x2170 = INT16_MAX;
int32_t t81 = 5201;
uint8_t x2208 = 7U;
uint8_t x2247 = 0U;
volatile int16_t x2248 = 13;
volatile int32_t t83 = 12952;
uint8_t x2336 = 8U;
volatile int8_t x2346 = INT8_MIN;
static uint8_t x2358 = 81U;
volatile int8_t x2449 = -49;
volatile int32_t t91 = 18;
volatile int32_t x2522 = INT32_MAX;
volatile uint8_t x2568 = 11U;
int32_t t96 = -23737832;
int16_t x2653 = -105;
volatile int16_t x2667 = -1;
uint16_t x2668 = 19U;
volatile int32_t t98 = 0;
int64_t x2730 = -3648261620712765LL;
int64_t x2731 = 20489946637673LL;
int64_t x2851 = INT64_MIN;
int32_t t101 = -2143764;
volatile int32_t t103 = -23919;
int64_t x2964 = 0LL;
int8_t x2969 = INT8_MIN;
static int64_t x2970 = INT64_MIN;
uint8_t x2971 = 7U;
uint64_t x2977 = 2139003383276445013LLU;
static int16_t x2989 = INT16_MIN;
volatile int32_t x2991 = INT32_MIN;
int16_t x3001 = 1386;
int16_t x3003 = INT16_MAX;
int8_t x3004 = 12;
int8_t x3202 = INT8_MIN;
int16_t x3279 = INT16_MIN;
volatile int32_t t113 = 1060989728;
static uint64_t x3361 = UINT64_MAX;
uint8_t x3398 = UINT8_MAX;
static int8_t x3493 = -1;
int8_t x3497 = -25;
static uint64_t x3498 = UINT64_MAX;
static volatile int32_t t122 = -105385811;
static int64_t x3522 = -1LL;
uint64_t x3523 = 8526046689094897LLU;
int8_t x3524 = 3;
static int32_t x3565 = INT32_MIN;
uint8_t x3568 = 24U;
volatile int32_t t125 = 0;
int8_t x3586 = INT8_MIN;
int16_t x3597 = -2231;
static int64_t x3599 = INT64_MAX;
static int8_t x3600 = 0;
volatile int16_t x3601 = -1;
volatile int8_t x3602 = 18;
volatile int32_t t129 = 0;
int32_t t130 = 14;
volatile uint8_t x3652 = 31U;
int8_t x3669 = INT8_MIN;
static uint8_t x3672 = 16U;
uint16_t x3689 = UINT16_MAX;
uint32_t x3695 = 1688178489U;
int16_t x3716 = 1;
uint64_t x3767 = 2016LLU;
uint16_t x3768 = 11U;
int32_t x3941 = -1;
int32_t x3942 = INT32_MIN;
uint16_t x3968 = 16U;
uint16_t x4066 = 17U;
int32_t x4098 = -109;
int32_t t142 = 0;
int8_t x4237 = INT8_MIN;
static volatile int8_t x4239 = INT8_MIN;
static int16_t x4240 = 1;
static uint32_t x4395 = UINT32_MAX;
int32_t x4398 = INT32_MIN;
uint16_t x4399 = 439U;
int32_t x4451 = INT32_MIN;
static volatile int32_t t152 = -711294381;
uint16_t x4464 = 4U;
static int64_t x4465 = -1LL;
int16_t x4499 = INT16_MIN;
volatile uint32_t x4650 = 62U;
static int32_t t161 = -130594064;
static uint8_t x4843 = UINT8_MAX;
uint8_t x4864 = 0U;
volatile int32_t t168 = -776226928;
uint32_t x4955 = UINT32_MAX;
int32_t t170 = 358;
int16_t x4969 = INT16_MIN;
int32_t x4971 = -315;
volatile int32_t t171 = 25;
uint8_t x4997 = 6U;
int16_t x4998 = 3920;
uint16_t x5060 = 0U;
int32_t x5087 = -1;
int32_t t177 = -53338;
uint8_t x5119 = UINT8_MAX;
int32_t x5168 = 0;
int64_t x5186 = -1LL;
uint64_t x5312 = 2LLU;
volatile uint8_t x5324 = 6U;
uint8_t x5396 = 0U;
static uint32_t x5530 = 1U;
volatile int8_t x5542 = 0;
int32_t t192 = -1;
uint8_t x5585 = UINT8_MAX;
int32_t x5639 = 29;
int32_t t195 = 10727;
int8_t x5795 = 1;
volatile int64_t x5835 = -1LL;
volatile int32_t t198 = -122;
int64_t x6042 = -1LL;


void f0(void) {
    	volatile int8_t x6 = INT8_MIN;
	static uint16_t x8 = 1U;
	int32_t t0 = 3094495;

    t0 = (((x5&x6)>x7)>>x8);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x14 = -822;
	uint16_t x15 = 120U;
	uint8_t x16 = 7U;
	static volatile int32_t t1 = -716352;

    t1 = (((x13&x14)>x15)>>x16);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x17 = 67LLU;
	volatile int64_t x18 = -1LL;
	uint16_t x19 = 13509U;
	int8_t x20 = 15;
	static int32_t t2 = -322839150;

    t2 = (((x17&x18)>x19)>>x20);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x43 = INT64_MAX;
	volatile uint16_t x44 = 16U;
	int32_t t3 = -57449716;

    t3 = (((x41&x42)>x43)>>x44);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x57 = 3823568920411LL;
	uint32_t x58 = 29U;
	uint32_t x60 = 1U;
	int32_t t4 = 25023;

    t4 = (((x57&x58)>x59)>>x60);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x62 = -1;
	uint32_t x64 = 1U;
	volatile int32_t t5 = -1;

    t5 = (((x61&x62)>x63)>>x64);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint8_t x85 = 4U;
	int16_t x87 = INT16_MIN;
	uint32_t x88 = 11U;
	static volatile int32_t t6 = 0;

    t6 = (((x85&x86)>x87)>>x88);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x93 = INT32_MIN;
	uint64_t x94 = UINT64_MAX;
	int32_t x95 = INT32_MIN;
	int32_t t7 = -10997;

    t7 = (((x93&x94)>x95)>>x96);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x101 = -1LL;
	int16_t x103 = INT16_MIN;
	uint32_t x104 = 0U;
	static volatile int32_t t8 = -54648;

    t8 = (((x101&x102)>x103)>>x104);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile uint8_t x109 = UINT8_MAX;
	int64_t x110 = -26LL;
	uint16_t x111 = 1U;
	static int16_t x112 = 0;
	volatile int32_t t9 = 431242;

    t9 = (((x109&x110)>x111)>>x112);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x121 = -1;
	volatile int64_t x123 = -5920LL;
	uint8_t x124 = 2U;
	volatile int32_t t10 = 49;

    t10 = (((x121&x122)>x123)>>x124);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x153 = INT64_MIN;
	uint8_t x155 = UINT8_MAX;
	static volatile int32_t t11 = 6600;

    t11 = (((x153&x154)>x155)>>x156);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x190 = 10642U;
	uint16_t x191 = UINT16_MAX;
	static int32_t t12 = -20111450;

    t12 = (((x189&x190)>x191)>>x192);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x197 = INT64_MIN;
	static int64_t x198 = 14298019492705LL;
	int32_t x199 = -1;
	static int8_t x200 = 1;
	static int32_t t13 = -38766443;

    t13 = (((x197&x198)>x199)>>x200);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x219 = 6U;
	uint32_t x220 = 0U;

    t14 = (((x217&x218)>x219)>>x220);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x253 = INT8_MIN;
	int8_t x254 = INT8_MIN;
	volatile int16_t x255 = 110;
	volatile uint8_t x256 = 5U;
	volatile int32_t t15 = 471242432;

    t15 = (((x253&x254)>x255)>>x256);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x289 = INT32_MAX;
	int64_t x290 = INT64_MAX;
	int32_t x291 = INT32_MIN;
	int64_t x292 = 0LL;
	int32_t t16 = 93;

    t16 = (((x289&x290)>x291)>>x292);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x349 = UINT64_MAX;
	int32_t x350 = 246549;
	volatile int16_t x351 = -52;
	static int32_t t17 = 91;

    t17 = (((x349&x350)>x351)>>x352);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x353 = INT8_MIN;
	int16_t x355 = INT16_MIN;

    t18 = (((x353&x354)>x355)>>x356);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x389 = 0;
	static int64_t x390 = INT64_MIN;
	static int64_t x391 = INT64_MIN;
	static int16_t x392 = 22;
	volatile int32_t t19 = -23;

    t19 = (((x389&x390)>x391)>>x392);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x409 = UINT16_MAX;
	static volatile int8_t x411 = INT8_MAX;
	uint32_t x412 = 7U;
	volatile int32_t t20 = 14486;

    t20 = (((x409&x410)>x411)>>x412);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x477 = INT64_MIN;
	uint16_t x478 = 15573U;
	uint64_t x479 = UINT64_MAX;
	volatile int32_t t21 = -13864;

    t21 = (((x477&x478)>x479)>>x480);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x526 = INT8_MIN;
	uint64_t x527 = 72178962364519LLU;
	int8_t x528 = 24;
	int32_t t22 = 983257;

    t22 = (((x525&x526)>x527)>>x528);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x533 = UINT16_MAX;
	uint32_t x535 = UINT32_MAX;
	uint8_t x536 = 4U;
	volatile int32_t t23 = 2;

    t23 = (((x533&x534)>x535)>>x536);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x537 = -6688654617256LL;
	volatile int64_t x539 = INT64_MIN;
	int64_t x540 = 3LL;

    t24 = (((x537&x538)>x539)>>x540);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x550 = 351989;
	int8_t x552 = 13;
	static volatile int32_t t25 = 1;

    t25 = (((x549&x550)>x551)>>x552);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x609 = -1LL;
	int16_t x610 = -1;
	volatile uint16_t x611 = UINT16_MAX;
	static volatile int32_t t26 = 24;

    t26 = (((x609&x610)>x611)>>x612);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint8_t x621 = UINT8_MAX;
	int64_t x622 = 40LL;
	static int64_t x623 = INT64_MIN;
	uint16_t x624 = 13U;
	static volatile int32_t t27 = 16393461;

    t27 = (((x621&x622)>x623)>>x624);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x674 = INT8_MIN;
	int64_t x675 = INT64_MIN;
	uint64_t x676 = 3LLU;
	int32_t t28 = 15;

    t28 = (((x673&x674)>x675)>>x676);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x705 = -1;
	int32_t x706 = -56428;
	uint8_t x707 = 15U;
	static uint8_t x708 = 5U;
	int32_t t29 = 1;

    t29 = (((x705&x706)>x707)>>x708);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x757 = 226761160450695482LL;
	int32_t x759 = INT32_MAX;
	uint8_t x760 = 7U;
	volatile int32_t t30 = -2731;

    t30 = (((x757&x758)>x759)>>x760);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x786 = -115713389690314LL;
	int16_t x787 = 61;
	int32_t t31 = -435;

    t31 = (((x785&x786)>x787)>>x788);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x809 = -1;
	volatile int8_t x810 = INT8_MIN;
	uint8_t x811 = 3U;
	uint32_t x812 = 31U;
	static volatile int32_t t32 = 638;

    t32 = (((x809&x810)>x811)>>x812);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x817 = 21064362151976LL;
	uint8_t x818 = UINT8_MAX;
	volatile uint16_t x819 = 155U;
	uint8_t x820 = 12U;

    t33 = (((x817&x818)>x819)>>x820);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x833 = -1;
	int64_t x834 = INT64_MIN;
	int8_t x835 = INT8_MIN;
	static uint16_t x836 = 1U;
	static volatile int32_t t34 = -36203;

    t34 = (((x833&x834)>x835)>>x836);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x889 = INT16_MAX;
	int16_t x890 = INT16_MAX;
	volatile int32_t x891 = -1;
	uint8_t x892 = 3U;

    t35 = (((x889&x890)>x891)>>x892);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x917 = INT32_MIN;
	int64_t x918 = INT64_MIN;
	static int64_t x919 = INT64_MAX;
	static int16_t x920 = 14;
	int32_t t36 = -2565453;

    t36 = (((x917&x918)>x919)>>x920);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x957 = INT8_MAX;
	int16_t x958 = INT16_MIN;
	static uint8_t x960 = 8U;
	static int32_t t37 = -3;

    t37 = (((x957&x958)>x959)>>x960);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x965 = -1LL;
	static int64_t x966 = INT64_MIN;
	static uint8_t x967 = 67U;
	static int32_t t38 = -20;

    t38 = (((x965&x966)>x967)>>x968);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x981 = INT64_MIN;
	int32_t t39 = -817;

    t39 = (((x981&x982)>x983)>>x984);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x985 = INT64_MIN;
	static volatile int8_t x986 = INT8_MIN;
	static volatile uint64_t x987 = 11149599496LLU;
	uint8_t x988 = 11U;
	volatile int32_t t40 = -16428;

    t40 = (((x985&x986)>x987)>>x988);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x998 = 47444;
	static int32_t x999 = INT32_MIN;

    t41 = (((x997&x998)>x999)>>x1000);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x1029 = INT8_MAX;
	static volatile int16_t x1030 = INT16_MAX;
	int32_t x1031 = INT32_MAX;
	int8_t x1032 = 0;
	volatile int32_t t42 = 46292181;

    t42 = (((x1029&x1030)>x1031)>>x1032);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x1033 = INT8_MIN;
	int8_t x1034 = INT8_MIN;
	uint8_t x1036 = 17U;
	static int32_t t43 = 5;

    t43 = (((x1033&x1034)>x1035)>>x1036);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x1057 = INT16_MAX;
	volatile uint32_t x1058 = UINT32_MAX;
	volatile uint64_t x1059 = 75719365931195LLU;
	volatile int32_t t44 = -28373123;

    t44 = (((x1057&x1058)>x1059)>>x1060);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x1098 = INT32_MAX;
	uint8_t x1099 = UINT8_MAX;
	uint16_t x1100 = 10U;
	volatile int32_t t45 = -1601;

    t45 = (((x1097&x1098)>x1099)>>x1100);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x1141 = -1;
	int8_t x1142 = INT8_MIN;
	int16_t x1143 = -390;
	volatile uint16_t x1144 = 1U;
	int32_t t46 = -181;

    t46 = (((x1141&x1142)>x1143)>>x1144);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x1199 = INT8_MIN;

    t47 = (((x1197&x1198)>x1199)>>x1200);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x1245 = -1;
	static volatile int32_t x1246 = -1;
	static int16_t x1247 = -317;
	volatile uint8_t x1248 = 19U;
	volatile int32_t t48 = 764176527;

    t48 = (((x1245&x1246)>x1247)>>x1248);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x1301 = INT32_MIN;
	static uint64_t x1302 = UINT64_MAX;
	int16_t x1303 = -1;
	uint16_t x1304 = 13U;
	static volatile int32_t t49 = -1;

    t49 = (((x1301&x1302)>x1303)>>x1304);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x1333 = -1LL;
	int32_t x1334 = INT32_MIN;
	volatile int8_t x1335 = 1;
	volatile int8_t x1336 = 26;
	volatile int32_t t50 = 43674;

    t50 = (((x1333&x1334)>x1335)>>x1336);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x1345 = INT16_MIN;
	uint64_t x1346 = 35278196332924125LLU;
	uint16_t x1347 = 1017U;
	volatile int32_t t51 = -14564310;

    t51 = (((x1345&x1346)>x1347)>>x1348);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x1381 = 0U;
	int32_t x1382 = INT32_MIN;
	uint64_t x1383 = 1059766117950088LLU;
	uint16_t x1384 = 23U;

    t52 = (((x1381&x1382)>x1383)>>x1384);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint16_t x1393 = 0U;
	int16_t x1394 = INT16_MAX;
	int32_t x1395 = INT32_MAX;

    t53 = (((x1393&x1394)>x1395)>>x1396);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint32_t x1397 = UINT32_MAX;
	volatile uint16_t x1398 = 30712U;
	volatile int16_t x1399 = 1846;
	int8_t x1400 = 1;
	int32_t t54 = -1207849;

    t54 = (((x1397&x1398)>x1399)>>x1400);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x1449 = -1;
	int64_t x1450 = -40044846462LL;
	uint32_t x1451 = 78U;
	int32_t x1452 = 29;
	int32_t t55 = 218;

    t55 = (((x1449&x1450)>x1451)>>x1452);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x1461 = INT32_MIN;
	volatile int16_t x1462 = INT16_MIN;
	uint16_t x1463 = 2539U;
	uint8_t x1464 = 25U;
	volatile int32_t t56 = 4;

    t56 = (((x1461&x1462)>x1463)>>x1464);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x1469 = 476;
	uint32_t x1470 = 26373652U;
	volatile int16_t x1472 = 4;

    t57 = (((x1469&x1470)>x1471)>>x1472);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x1505 = INT32_MAX;
	int32_t x1506 = INT32_MIN;
	uint8_t x1508 = 5U;
	volatile int32_t t58 = -153139;

    t58 = (((x1505&x1506)>x1507)>>x1508);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x1517 = INT64_MAX;
	int16_t x1520 = 2;

    t59 = (((x1517&x1518)>x1519)>>x1520);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x1529 = -71;
	int8_t x1530 = INT8_MIN;
	static int32_t x1531 = INT32_MAX;
	uint16_t x1532 = 1U;
	int32_t t60 = 12934;

    t60 = (((x1529&x1530)>x1531)>>x1532);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x1546 = INT64_MAX;
	uint64_t x1547 = 695LLU;
	int8_t x1548 = 25;
	volatile int32_t t61 = 1788717;

    t61 = (((x1545&x1546)>x1547)>>x1548);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x1561 = INT8_MIN;
	uint16_t x1563 = 723U;
	static volatile int32_t t62 = 1641;

    t62 = (((x1561&x1562)>x1563)>>x1564);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x1577 = INT32_MAX;
	static int32_t x1578 = -31;
	int64_t x1579 = INT64_MAX;
	uint16_t x1580 = 23U;
	int32_t t63 = 1064296118;

    t63 = (((x1577&x1578)>x1579)>>x1580);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x1585 = INT8_MIN;
	int32_t x1586 = INT32_MAX;
	static int32_t t64 = 110;

    t64 = (((x1585&x1586)>x1587)>>x1588);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x1634 = UINT64_MAX;
	volatile int8_t x1635 = INT8_MIN;
	int8_t x1636 = 0;
	int32_t t65 = 1;

    t65 = (((x1633&x1634)>x1635)>>x1636);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x1693 = INT64_MIN;
	static int64_t x1694 = 1LL;
	uint32_t x1695 = 1U;
	uint8_t x1696 = 0U;

    t66 = (((x1693&x1694)>x1695)>>x1696);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x1709 = -1;
	uint64_t x1710 = 496LLU;
	int8_t x1711 = INT8_MIN;
	int32_t t67 = 2449892;

    t67 = (((x1709&x1710)>x1711)>>x1712);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x1717 = UINT16_MAX;
	static uint8_t x1719 = 4U;
	uint32_t x1720 = 6U;
	volatile int32_t t68 = 0;

    t68 = (((x1717&x1718)>x1719)>>x1720);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x1759 = INT16_MIN;
	volatile int8_t x1760 = 2;
	int32_t t69 = 27994;

    t69 = (((x1757&x1758)>x1759)>>x1760);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x1777 = INT8_MAX;
	uint32_t x1779 = 485U;
	static uint32_t x1780 = 2U;
	int32_t t70 = 62;

    t70 = (((x1777&x1778)>x1779)>>x1780);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x1805 = 106972U;
	volatile uint8_t x1806 = 21U;
	uint32_t x1807 = 5411471U;
	int32_t t71 = 1;

    t71 = (((x1805&x1806)>x1807)>>x1808);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x1933 = 0;
	int32_t x1934 = 266970;
	static uint16_t x1936 = 12U;
	static volatile int32_t t72 = -2;

    t72 = (((x1933&x1934)>x1935)>>x1936);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x1985 = INT64_MIN;
	uint64_t x1986 = 322780LLU;
	uint8_t x1987 = 1U;
	volatile int16_t x1988 = 11;
	volatile int32_t t73 = -3252;

    t73 = (((x1985&x1986)>x1987)>>x1988);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x2042 = 2283090LLU;
	static int8_t x2043 = INT8_MAX;
	int8_t x2044 = 1;
	int32_t t74 = 1144;

    t74 = (((x2041&x2042)>x2043)>>x2044);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x2065 = INT8_MIN;
	int8_t x2067 = INT8_MAX;
	uint8_t x2068 = 0U;
	int32_t t75 = -1542911;

    t75 = (((x2065&x2066)>x2067)>>x2068);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile uint32_t x2101 = 208786139U;
	static uint8_t x2102 = 58U;
	volatile int64_t x2103 = INT64_MAX;
	uint16_t x2104 = 10U;
	int32_t t76 = -1591030;

    t76 = (((x2101&x2102)>x2103)>>x2104);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int64_t x2115 = INT64_MAX;
	static volatile int8_t x2116 = 1;
	static int32_t t77 = -1;

    t77 = (((x2113&x2114)>x2115)>>x2116);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x2125 = -1;
	volatile int32_t x2127 = INT32_MIN;
	volatile uint32_t x2128 = 0U;

    t78 = (((x2125&x2126)>x2127)>>x2128);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x2135 = 894U;
	int32_t t79 = 1;

    t79 = (((x2133&x2134)>x2135)>>x2136);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint32_t x2149 = UINT32_MAX;
	volatile int32_t x2150 = INT32_MIN;
	volatile int16_t x2151 = INT16_MIN;
	uint16_t x2152 = 1U;

    t80 = (((x2149&x2150)>x2151)>>x2152);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x2169 = 102088U;
	int32_t x2171 = INT32_MIN;
	int32_t x2172 = 9;

    t81 = (((x2169&x2170)>x2171)>>x2172);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x2205 = 320;
	uint32_t x2206 = 15041U;
	volatile int16_t x2207 = INT16_MIN;
	static volatile int32_t t82 = 113219;

    t82 = (((x2205&x2206)>x2207)>>x2208);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x2245 = INT32_MAX;
	uint16_t x2246 = UINT16_MAX;

    t83 = (((x2245&x2246)>x2247)>>x2248);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x2269 = 43U;
	volatile int64_t x2270 = INT64_MIN;
	volatile int16_t x2271 = -1;
	uint8_t x2272 = 15U;
	volatile int32_t t84 = -29890154;

    t84 = (((x2269&x2270)>x2271)>>x2272);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x2285 = INT16_MIN;
	uint32_t x2286 = 13U;
	int64_t x2287 = INT64_MIN;
	static uint16_t x2288 = 18U;
	volatile int32_t t85 = 0;

    t85 = (((x2285&x2286)>x2287)>>x2288);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x2333 = -3;
	int64_t x2334 = INT64_MIN;
	static uint32_t x2335 = UINT32_MAX;
	volatile int32_t t86 = 515851;

    t86 = (((x2333&x2334)>x2335)>>x2336);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x2337 = 6113U;
	uint32_t x2338 = 13U;
	volatile int32_t x2339 = INT32_MAX;
	volatile uint8_t x2340 = 1U;
	volatile int32_t t87 = -1;

    t87 = (((x2337&x2338)>x2339)>>x2340);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x2345 = INT32_MIN;
	uint32_t x2347 = 27U;
	volatile uint16_t x2348 = 11U;
	volatile int32_t t88 = 2;

    t88 = (((x2345&x2346)>x2347)>>x2348);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x2357 = -6;
	static volatile int16_t x2359 = INT16_MAX;
	static volatile uint8_t x2360 = 7U;
	static int32_t t89 = 5761;

    t89 = (((x2357&x2358)>x2359)>>x2360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x2381 = INT64_MIN;
	int64_t x2382 = INT64_MIN;
	volatile int64_t x2383 = 4547987779126LL;
	static int8_t x2384 = 15;
	static int32_t t90 = -3;

    t90 = (((x2381&x2382)>x2383)>>x2384);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x2450 = -3115;
	static uint32_t x2451 = 17U;
	static int64_t x2452 = 7LL;

    t91 = (((x2449&x2450)>x2451)>>x2452);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x2521 = INT16_MIN;
	volatile int32_t x2523 = INT32_MAX;
	static uint8_t x2524 = 1U;
	int32_t t92 = -37748510;

    t92 = (((x2521&x2522)>x2523)>>x2524);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x2557 = 1960;
	static volatile uint16_t x2558 = 0U;
	static volatile uint32_t x2559 = 31312U;
	int8_t x2560 = 0;
	volatile int32_t t93 = -357304;

    t93 = (((x2557&x2558)>x2559)>>x2560);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x2565 = INT32_MIN;
	int8_t x2566 = INT8_MIN;
	uint64_t x2567 = 10199878213730LLU;
	int32_t t94 = -45695707;

    t94 = (((x2565&x2566)>x2567)>>x2568);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x2589 = INT64_MIN;
	volatile int16_t x2590 = INT16_MAX;
	int32_t x2591 = -89679962;
	volatile uint16_t x2592 = 14U;
	int32_t t95 = -14024;

    t95 = (((x2589&x2590)>x2591)>>x2592);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x2597 = UINT8_MAX;
	volatile uint8_t x2598 = UINT8_MAX;
	volatile int8_t x2599 = 23;
	int32_t x2600 = 0;

    t96 = (((x2597&x2598)>x2599)>>x2600);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int8_t x2654 = 3;
	static uint8_t x2655 = 34U;
	volatile uint8_t x2656 = 3U;
	int32_t t97 = -969;

    t97 = (((x2653&x2654)>x2655)>>x2656);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x2665 = -13;
	static int16_t x2666 = -1;

    t98 = (((x2665&x2666)>x2667)>>x2668);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x2729 = INT32_MIN;
	int8_t x2732 = 7;
	volatile int32_t t99 = 651402;

    t99 = (((x2729&x2730)>x2731)>>x2732);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x2753 = 61073366LLU;
	uint8_t x2754 = 1U;
	volatile uint64_t x2755 = UINT64_MAX;
	uint8_t x2756 = 4U;
	static volatile int32_t t100 = 18610;

    t100 = (((x2753&x2754)>x2755)>>x2756);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x2849 = 242978;
	static int16_t x2850 = INT16_MAX;
	uint16_t x2852 = 4U;

    t101 = (((x2849&x2850)>x2851)>>x2852);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x2925 = INT64_MIN;
	static volatile uint32_t x2926 = 71011U;
	int32_t x2927 = INT32_MIN;
	static int16_t x2928 = 3;
	int32_t t102 = -11527;

    t102 = (((x2925&x2926)>x2927)>>x2928);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int32_t x2929 = INT32_MIN;
	volatile int16_t x2930 = -1;
	volatile uint32_t x2931 = 42U;
	int64_t x2932 = 31LL;

    t103 = (((x2929&x2930)>x2931)>>x2932);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x2961 = -1;
	static int16_t x2962 = INT16_MIN;
	uint8_t x2963 = 0U;
	volatile int32_t t104 = 47735776;

    t104 = (((x2961&x2962)>x2963)>>x2964);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint32_t x2972 = 7U;
	volatile int32_t t105 = 0;

    t105 = (((x2969&x2970)>x2971)>>x2972);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x2978 = UINT8_MAX;
	int64_t x2979 = 12497594934LL;
	uint32_t x2980 = 5U;
	static int32_t t106 = -220;

    t106 = (((x2977&x2978)>x2979)>>x2980);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x2990 = INT8_MIN;
	volatile uint32_t x2992 = 3U;
	volatile int32_t t107 = -134;

    t107 = (((x2989&x2990)>x2991)>>x2992);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x3002 = -12284076369231649LL;
	static int32_t t108 = 4;

    t108 = (((x3001&x3002)>x3003)>>x3004);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x3117 = INT32_MIN;
	volatile int64_t x3118 = INT64_MAX;
	int64_t x3119 = -1LL;
	static int8_t x3120 = 2;
	int32_t t109 = -3831253;

    t109 = (((x3117&x3118)>x3119)>>x3120);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint32_t x3201 = UINT32_MAX;
	int16_t x3203 = 1;
	uint8_t x3204 = 22U;
	int32_t t110 = 480;

    t110 = (((x3201&x3202)>x3203)>>x3204);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x3269 = INT8_MIN;
	static uint64_t x3270 = UINT64_MAX;
	uint16_t x3271 = 12U;
	uint8_t x3272 = 3U;
	volatile int32_t t111 = 43;

    t111 = (((x3269&x3270)>x3271)>>x3272);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x3277 = -1LL;
	int64_t x3278 = -1LL;
	int8_t x3280 = 1;
	volatile int32_t t112 = -907158406;

    t112 = (((x3277&x3278)>x3279)>>x3280);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int16_t x3289 = 410;
	static uint32_t x3290 = UINT32_MAX;
	uint32_t x3291 = UINT32_MAX;
	static uint16_t x3292 = 5U;

    t113 = (((x3289&x3290)>x3291)>>x3292);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int8_t x3325 = INT8_MIN;
	int16_t x3326 = INT16_MIN;
	int8_t x3327 = -1;
	uint8_t x3328 = 2U;
	int32_t t114 = -177;

    t114 = (((x3325&x3326)>x3327)>>x3328);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x3329 = UINT32_MAX;
	int8_t x3330 = -1;
	int8_t x3331 = -1;
	uint32_t x3332 = 1U;
	int32_t t115 = 498027;

    t115 = (((x3329&x3330)>x3331)>>x3332);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x3337 = UINT8_MAX;
	uint32_t x3338 = 9137U;
	int64_t x3339 = -1351LL;
	static uint8_t x3340 = 5U;
	volatile int32_t t116 = -868;

    t116 = (((x3337&x3338)>x3339)>>x3340);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x3362 = 203766248;
	uint64_t x3363 = UINT64_MAX;
	int8_t x3364 = 0;
	int32_t t117 = -1;

    t117 = (((x3361&x3362)>x3363)>>x3364);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x3397 = INT64_MAX;
	int64_t x3399 = 5LL;
	uint64_t x3400 = 1LLU;
	volatile int32_t t118 = 0;

    t118 = (((x3397&x3398)>x3399)>>x3400);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x3453 = INT32_MAX;
	int32_t x3454 = INT32_MIN;
	static int16_t x3455 = -1;
	int16_t x3456 = 1;
	volatile int32_t t119 = -16296242;

    t119 = (((x3453&x3454)>x3455)>>x3456);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x3477 = INT8_MAX;
	int8_t x3478 = INT8_MIN;
	uint32_t x3479 = UINT32_MAX;
	static uint8_t x3480 = 13U;
	static volatile int32_t t120 = 1;

    t120 = (((x3477&x3478)>x3479)>>x3480);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x3494 = INT64_MIN;
	uint16_t x3495 = UINT16_MAX;
	uint64_t x3496 = 27LLU;
	static volatile int32_t t121 = -539;

    t121 = (((x3493&x3494)>x3495)>>x3496);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x3499 = INT8_MAX;
	static int32_t x3500 = 8;

    t122 = (((x3497&x3498)>x3499)>>x3500);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x3521 = INT64_MAX;
	int32_t t123 = -20451844;

    t123 = (((x3521&x3522)>x3523)>>x3524);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x3553 = INT16_MIN;
	static int64_t x3554 = 58486LL;
	uint32_t x3555 = 125993484U;
	uint8_t x3556 = 12U;
	volatile int32_t t124 = -3210938;

    t124 = (((x3553&x3554)>x3555)>>x3556);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x3566 = 2U;
	int32_t x3567 = INT32_MAX;

    t125 = (((x3565&x3566)>x3567)>>x3568);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x3585 = 986;
	volatile int8_t x3587 = INT8_MAX;
	static int16_t x3588 = 0;
	static int32_t t126 = 63509307;

    t126 = (((x3585&x3586)>x3587)>>x3588);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x3598 = 3709U;
	static volatile int32_t t127 = -79;

    t127 = (((x3597&x3598)>x3599)>>x3600);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x3603 = INT8_MIN;
	int8_t x3604 = 0;
	volatile int32_t t128 = 0;

    t128 = (((x3601&x3602)>x3603)>>x3604);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x3613 = -2;
	int16_t x3614 = INT16_MAX;
	int32_t x3615 = INT32_MAX;
	int8_t x3616 = 12;

    t129 = (((x3613&x3614)>x3615)>>x3616);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x3629 = INT64_MAX;
	uint64_t x3630 = 215LLU;
	uint16_t x3631 = 1U;
	static int16_t x3632 = 1;

    t130 = (((x3629&x3630)>x3631)>>x3632);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int8_t x3641 = 5;
	uint32_t x3642 = 396797U;
	int64_t x3643 = -8513758480LL;
	static volatile uint8_t x3644 = 2U;
	static int32_t t131 = 753;

    t131 = (((x3641&x3642)>x3643)>>x3644);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x3649 = -18LL;
	static int8_t x3650 = INT8_MIN;
	static int16_t x3651 = -4;
	int32_t t132 = -9574359;

    t132 = (((x3649&x3650)>x3651)>>x3652);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x3670 = UINT8_MAX;
	int16_t x3671 = -1;
	int32_t t133 = -6821;

    t133 = (((x3669&x3670)>x3671)>>x3672);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int16_t x3690 = 10;
	uint32_t x3691 = 31938U;
	int8_t x3692 = 4;
	static int32_t t134 = -30;

    t134 = (((x3689&x3690)>x3691)>>x3692);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint64_t x3693 = 2015141LLU;
	int64_t x3694 = -1LL;
	static volatile uint8_t x3696 = 9U;
	volatile int32_t t135 = -2828696;

    t135 = (((x3693&x3694)>x3695)>>x3696);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x3713 = 7U;
	uint64_t x3714 = 436256386655LLU;
	int8_t x3715 = INT8_MAX;
	static int32_t t136 = -8;

    t136 = (((x3713&x3714)>x3715)>>x3716);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x3765 = -15;
	static int32_t x3766 = INT32_MAX;
	int32_t t137 = -911670765;

    t137 = (((x3765&x3766)>x3767)>>x3768);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x3943 = 2U;
	volatile uint32_t x3944 = 31U;
	int32_t t138 = 1;

    t138 = (((x3941&x3942)>x3943)>>x3944);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x3965 = INT64_MIN;
	int8_t x3966 = -1;
	int32_t x3967 = INT32_MIN;
	volatile int32_t t139 = -22278316;

    t139 = (((x3965&x3966)>x3967)>>x3968);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x4025 = -1;
	int8_t x4026 = 1;
	int8_t x4027 = INT8_MIN;
	int8_t x4028 = 6;
	volatile int32_t t140 = -439217;

    t140 = (((x4025&x4026)>x4027)>>x4028);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint64_t x4065 = 3766LLU;
	uint8_t x4067 = 2U;
	int8_t x4068 = 1;
	static volatile int32_t t141 = -25416778;

    t141 = (((x4065&x4066)>x4067)>>x4068);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x4097 = 1U;
	int8_t x4099 = -1;
	static uint8_t x4100 = 0U;

    t142 = (((x4097&x4098)>x4099)>>x4100);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x4105 = 237U;
	int16_t x4106 = -1;
	static int16_t x4107 = INT16_MIN;
	volatile uint8_t x4108 = 1U;
	int32_t t143 = 12149;

    t143 = (((x4105&x4106)>x4107)>>x4108);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x4137 = INT32_MAX;
	volatile uint64_t x4138 = 1498921092LLU;
	int64_t x4139 = 3943384990622273180LL;
	uint32_t x4140 = 24U;
	int32_t t144 = 1;

    t144 = (((x4137&x4138)>x4139)>>x4140);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x4145 = 398;
	int32_t x4146 = 28;
	static int64_t x4147 = -1LL;
	uint8_t x4148 = 1U;
	int32_t t145 = -10181583;

    t145 = (((x4145&x4146)>x4147)>>x4148);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x4233 = INT32_MAX;
	static int8_t x4234 = INT8_MIN;
	static int16_t x4235 = 442;
	uint32_t x4236 = 1U;
	int32_t t146 = 1470202;

    t146 = (((x4233&x4234)>x4235)>>x4236);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x4238 = 77;
	int32_t t147 = 691860520;

    t147 = (((x4237&x4238)>x4239)>>x4240);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x4369 = UINT64_MAX;
	static volatile int32_t x4370 = -1;
	int16_t x4371 = -1346;
	uint8_t x4372 = 8U;
	static int32_t t148 = -3562;

    t148 = (((x4369&x4370)>x4371)>>x4372);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int16_t x4393 = INT16_MAX;
	int32_t x4394 = 1437572;
	static uint8_t x4396 = 4U;
	volatile int32_t t149 = 966;

    t149 = (((x4393&x4394)>x4395)>>x4396);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x4397 = 1314;
	int16_t x4400 = 1;
	int32_t t150 = -33;

    t150 = (((x4397&x4398)>x4399)>>x4400);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x4425 = -60254608175LL;
	int32_t x4426 = -1;
	int64_t x4427 = INT64_MIN;
	volatile int32_t x4428 = 1;
	volatile int32_t t151 = -502450442;

    t151 = (((x4425&x4426)>x4427)>>x4428);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x4449 = INT16_MIN;
	int32_t x4450 = -1;
	uint8_t x4452 = 9U;

    t152 = (((x4449&x4450)>x4451)>>x4452);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x4461 = INT64_MIN;
	static int16_t x4462 = 162;
	uint32_t x4463 = UINT32_MAX;
	volatile int32_t t153 = 1330;

    t153 = (((x4461&x4462)>x4463)>>x4464);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x4466 = 119;
	static int8_t x4467 = -1;
	uint8_t x4468 = 7U;
	int32_t t154 = 307;

    t154 = (((x4465&x4466)>x4467)>>x4468);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint64_t x4481 = 757686599LLU;
	uint64_t x4482 = UINT64_MAX;
	int64_t x4483 = INT64_MIN;
	static volatile int16_t x4484 = 1;
	volatile int32_t t155 = 5596;

    t155 = (((x4481&x4482)>x4483)>>x4484);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x4497 = 168;
	int8_t x4498 = INT8_MIN;
	uint8_t x4500 = 23U;
	volatile int32_t t156 = -1;

    t156 = (((x4497&x4498)>x4499)>>x4500);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int8_t x4573 = 21;
	int16_t x4574 = -1;
	int64_t x4575 = INT64_MIN;
	int8_t x4576 = 2;
	int32_t t157 = 1954;

    t157 = (((x4573&x4574)>x4575)>>x4576);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x4593 = -1;
	int16_t x4594 = INT16_MAX;
	uint64_t x4595 = 1LLU;
	volatile int16_t x4596 = 5;
	static volatile int32_t t158 = 73678;

    t158 = (((x4593&x4594)>x4595)>>x4596);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x4601 = 16U;
	volatile int8_t x4602 = -1;
	int8_t x4603 = INT8_MAX;
	uint16_t x4604 = 24U;
	int32_t t159 = -44652020;

    t159 = (((x4601&x4602)>x4603)>>x4604);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x4649 = INT64_MAX;
	static volatile int8_t x4651 = -1;
	static int16_t x4652 = 1;
	volatile int32_t t160 = -148;

    t160 = (((x4649&x4650)>x4651)>>x4652);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x4653 = 776U;
	int8_t x4654 = INT8_MIN;
	uint8_t x4655 = 26U;
	uint64_t x4656 = 12LLU;

    t161 = (((x4653&x4654)>x4655)>>x4656);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x4669 = INT16_MAX;
	int32_t x4670 = INT32_MIN;
	uint32_t x4671 = UINT32_MAX;
	int16_t x4672 = 1;
	volatile int32_t t162 = 1034323;

    t162 = (((x4669&x4670)>x4671)>>x4672);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x4673 = 19;
	static uint32_t x4674 = 4915642U;
	uint16_t x4675 = UINT16_MAX;
	uint8_t x4676 = 5U;
	volatile int32_t t163 = 3;

    t163 = (((x4673&x4674)>x4675)>>x4676);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x4681 = INT32_MIN;
	uint8_t x4682 = 0U;
	uint16_t x4683 = 23907U;
	uint16_t x4684 = 2U;
	volatile int32_t t164 = -181756874;

    t164 = (((x4681&x4682)>x4683)>>x4684);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x4765 = -1;
	static int16_t x4766 = INT16_MIN;
	int16_t x4767 = -1;
	static uint8_t x4768 = 28U;
	volatile int32_t t165 = -1;

    t165 = (((x4765&x4766)>x4767)>>x4768);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x4841 = UINT32_MAX;
	uint64_t x4842 = 4464571721389646502LLU;
	int8_t x4844 = 3;
	int32_t t166 = -6283;

    t166 = (((x4841&x4842)>x4843)>>x4844);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x4857 = -1;
	static int32_t x4858 = INT32_MAX;
	volatile int8_t x4859 = INT8_MIN;
	uint8_t x4860 = 0U;
	volatile int32_t t167 = 2;

    t167 = (((x4857&x4858)>x4859)>>x4860);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int8_t x4861 = -1;
	static int64_t x4862 = INT64_MAX;
	int8_t x4863 = INT8_MAX;

    t168 = (((x4861&x4862)>x4863)>>x4864);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x4897 = -100;
	static uint32_t x4898 = UINT32_MAX;
	static uint8_t x4899 = 8U;
	static int8_t x4900 = 0;
	int32_t t169 = -12;

    t169 = (((x4897&x4898)>x4899)>>x4900);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x4953 = -1697633;
	uint16_t x4954 = 648U;
	uint32_t x4956 = 4U;

    t170 = (((x4953&x4954)>x4955)>>x4956);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x4970 = INT32_MIN;
	int8_t x4972 = 1;

    t171 = (((x4969&x4970)>x4971)>>x4972);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x4999 = 4339894617937367LLU;
	static int16_t x5000 = 0;
	volatile int32_t t172 = 1569851;

    t172 = (((x4997&x4998)>x4999)>>x5000);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x5017 = INT8_MAX;
	int32_t x5018 = INT32_MIN;
	uint16_t x5019 = 0U;
	static uint8_t x5020 = 0U;
	volatile int32_t t173 = -372312;

    t173 = (((x5017&x5018)>x5019)>>x5020);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x5053 = INT64_MIN;
	int64_t x5054 = INT64_MIN;
	uint16_t x5055 = 32522U;
	uint16_t x5056 = 13U;
	volatile int32_t t174 = 0;

    t174 = (((x5053&x5054)>x5055)>>x5056);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x5057 = INT64_MIN;
	uint8_t x5058 = 66U;
	volatile uint16_t x5059 = UINT16_MAX;
	volatile int32_t t175 = -129954738;

    t175 = (((x5057&x5058)>x5059)>>x5060);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint64_t x5085 = 16016162085826LLU;
	volatile int32_t x5086 = 20;
	uint8_t x5088 = 2U;
	volatile int32_t t176 = 9;

    t176 = (((x5085&x5086)>x5087)>>x5088);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x5097 = 209986LL;
	uint16_t x5098 = 39U;
	volatile int32_t x5099 = 636966407;
	uint32_t x5100 = 10U;

    t177 = (((x5097&x5098)>x5099)>>x5100);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x5117 = 0;
	int8_t x5118 = 10;
	uint16_t x5120 = 10U;
	int32_t t178 = 1552;

    t178 = (((x5117&x5118)>x5119)>>x5120);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x5137 = INT32_MIN;
	int8_t x5138 = 1;
	uint16_t x5139 = UINT16_MAX;
	volatile uint8_t x5140 = 26U;
	static int32_t t179 = 34662697;

    t179 = (((x5137&x5138)>x5139)>>x5140);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint16_t x5165 = 12U;
	uint64_t x5166 = 4883LLU;
	static int8_t x5167 = INT8_MIN;
	volatile int32_t t180 = -3;

    t180 = (((x5165&x5166)>x5167)>>x5168);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x5185 = -1;
	volatile int32_t x5187 = INT32_MIN;
	static uint8_t x5188 = 1U;
	int32_t t181 = -128636213;

    t181 = (((x5185&x5186)>x5187)>>x5188);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x5309 = INT32_MIN;
	uint32_t x5310 = 1752640301U;
	uint8_t x5311 = 91U;
	int32_t t182 = -1078;

    t182 = (((x5309&x5310)>x5311)>>x5312);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x5317 = INT16_MIN;
	static int16_t x5318 = INT16_MIN;
	volatile int32_t x5319 = -1;
	volatile int16_t x5320 = 0;
	volatile int32_t t183 = -640393208;

    t183 = (((x5317&x5318)>x5319)>>x5320);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x5321 = 999339LL;
	volatile int32_t x5322 = 153;
	uint16_t x5323 = UINT16_MAX;
	int32_t t184 = 368850;

    t184 = (((x5321&x5322)>x5323)>>x5324);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x5393 = INT64_MIN;
	uint8_t x5394 = UINT8_MAX;
	uint16_t x5395 = 5U;
	volatile int32_t t185 = 8574;

    t185 = (((x5393&x5394)>x5395)>>x5396);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x5441 = 16793;
	int32_t x5442 = -75759649;
	int16_t x5443 = 2278;
	uint32_t x5444 = 5U;
	static int32_t t186 = 26713940;

    t186 = (((x5441&x5442)>x5443)>>x5444);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x5445 = 0;
	int32_t x5446 = -388;
	uint64_t x5447 = 80756148267LLU;
	int8_t x5448 = 1;
	volatile int32_t t187 = 1;

    t187 = (((x5445&x5446)>x5447)>>x5448);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x5525 = INT32_MAX;
	static volatile uint32_t x5526 = 569962U;
	int64_t x5527 = INT64_MAX;
	int8_t x5528 = 1;
	volatile int32_t t188 = 125080;

    t188 = (((x5525&x5526)>x5527)>>x5528);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x5529 = INT16_MAX;
	static int64_t x5531 = INT64_MIN;
	uint8_t x5532 = 8U;
	int32_t t189 = 171333807;

    t189 = (((x5529&x5530)>x5531)>>x5532);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x5541 = 126LLU;
	volatile int32_t x5543 = INT32_MAX;
	volatile uint8_t x5544 = 20U;
	static volatile int32_t t190 = -18713278;

    t190 = (((x5541&x5542)>x5543)>>x5544);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x5573 = INT16_MIN;
	int64_t x5574 = INT64_MIN;
	uint16_t x5575 = 3224U;
	static int8_t x5576 = 0;
	volatile int32_t t191 = 70763923;

    t191 = (((x5573&x5574)>x5575)>>x5576);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x5577 = INT64_MIN;
	static int32_t x5578 = 108;
	int64_t x5579 = INT64_MIN;
	static volatile int32_t x5580 = 3;

    t192 = (((x5577&x5578)>x5579)>>x5580);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x5586 = INT64_MIN;
	volatile int64_t x5587 = -237LL;
	static uint8_t x5588 = 1U;
	int32_t t193 = 14;

    t193 = (((x5585&x5586)>x5587)>>x5588);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x5637 = 5705LLU;
	uint32_t x5638 = 402U;
	uint8_t x5640 = 1U;
	volatile int32_t t194 = -22;

    t194 = (((x5637&x5638)>x5639)>>x5640);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x5765 = 3165LL;
	uint32_t x5766 = UINT32_MAX;
	int16_t x5767 = 4;
	int32_t x5768 = 5;

    t195 = (((x5765&x5766)>x5767)>>x5768);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint32_t x5793 = UINT32_MAX;
	volatile int32_t x5794 = INT32_MAX;
	int32_t x5796 = 2;
	int32_t t196 = -1186;

    t196 = (((x5793&x5794)>x5795)>>x5796);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x5833 = UINT32_MAX;
	int8_t x5834 = 1;
	volatile int32_t x5836 = 14;
	static volatile int32_t t197 = 14433996;

    t197 = (((x5833&x5834)>x5835)>>x5836);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x5913 = INT8_MIN;
	volatile int16_t x5914 = INT16_MIN;
	uint64_t x5915 = 208LLU;
	uint16_t x5916 = 1U;

    t198 = (((x5913&x5914)>x5915)>>x5916);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x6041 = 26;
	int16_t x6043 = INT16_MAX;
	int8_t x6044 = 3;
	static volatile int32_t t199 = -5;

    t199 = (((x6041&x6042)>x6043)>>x6044);

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

