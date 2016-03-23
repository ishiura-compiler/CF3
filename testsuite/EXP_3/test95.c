
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

int32_t x2 = INT32_MIN;
static int32_t x97 = INT32_MIN;
static volatile int32_t t2 = 1;
int16_t x249 = INT16_MIN;
volatile int32_t x250 = INT32_MIN;
volatile int64_t x251 = -1LL;
static int8_t x272 = 14;
static volatile int16_t x346 = INT16_MAX;
uint16_t x347 = 0U;
volatile int32_t t6 = -67;
int16_t x412 = -1;
int16_t x477 = 340;
int32_t t9 = -612694;
int8_t x801 = INT8_MIN;
uint8_t x803 = 28U;
volatile int32_t x1103 = -1;
uint64_t x1262 = 195706LLU;
uint8_t x1470 = 0U;
volatile int8_t x1472 = 3;
volatile uint8_t x1691 = 2U;
int8_t x1695 = 1;
volatile int32_t t19 = 119;
volatile int16_t x1706 = INT16_MAX;
static uint8_t x1865 = 9U;
int16_t x1866 = -3;
static volatile uint32_t x2040 = 4U;
int64_t x2092 = -1LL;
int32_t x2317 = -1;
static int32_t t27 = -47477;
int16_t x2506 = -1;
volatile int32_t t28 = 1;
uint8_t x2584 = 10U;
uint8_t x2899 = 7U;
uint8_t x3094 = 3U;
int16_t x3114 = -27;
static int8_t x3153 = INT8_MIN;
static int8_t x3154 = INT8_MAX;
int16_t x3245 = INT16_MIN;
int8_t x3279 = -1;
volatile uint8_t x3280 = 15U;
volatile int8_t x3287 = 26;
uint16_t x3299 = 2U;
int8_t x3311 = 1;
volatile int64_t x3418 = INT64_MIN;
volatile int32_t t43 = -60786;
int16_t x3493 = INT16_MIN;
volatile int16_t x3494 = -1;
int64_t x3569 = INT64_MAX;
int32_t t45 = 9252273;
int8_t x3713 = INT8_MAX;
volatile int32_t x3714 = -1623580;
static uint64_t x3931 = UINT64_MAX;
int8_t x4116 = -1;
uint16_t x4157 = 7844U;
volatile uint8_t x4159 = 7U;
static int32_t x4161 = INT32_MAX;
static int32_t x4269 = -225219306;
int32_t x4272 = 18;
volatile int32_t t58 = 524607;
int64_t x4557 = INT64_MIN;
int8_t x4559 = 0;
int32_t x4809 = INT32_MAX;
int16_t x4810 = -1;
uint8_t x4811 = 0U;
int32_t t62 = 5280;
volatile int16_t x4923 = 7;
int16_t x4924 = -1;
int64_t x4938 = INT64_MAX;
int16_t x4939 = -1;
int32_t t64 = 19414326;
uint32_t x5095 = 19U;
int64_t x5098 = -34110147234212972LL;
volatile int32_t t67 = 470;
uint32_t x5103 = 5U;
volatile int32_t x5144 = 5;
uint16_t x5239 = 6U;
static int16_t x5327 = 4;
int32_t x5392 = 0;
uint16_t x5577 = 26835U;
uint16_t x5580 = 12U;
volatile int32_t t78 = -7758;
volatile int16_t x5683 = 28;
volatile int32_t t79 = 0;
int64_t x5793 = 114354874296662842LL;
uint64_t x5830 = 192664478LLU;
uint64_t x5832 = UINT64_MAX;
int32_t x5853 = INT32_MIN;
int32_t x5854 = -1;
int16_t x6122 = INT16_MIN;
uint64_t x6180 = UINT64_MAX;
uint8_t x6239 = 11U;
volatile int32_t t89 = 0;
uint16_t x6317 = UINT16_MAX;
volatile uint64_t x6319 = UINT64_MAX;
int8_t x6480 = 2;
volatile uint8_t x6560 = 1U;
static int32_t t92 = 509204907;
volatile int32_t t94 = -1;
uint8_t x6600 = 15U;
static volatile uint8_t x6670 = 6U;
int8_t x6727 = 4;
int8_t x6728 = 1;
int16_t x6745 = INT16_MIN;
static volatile int32_t t100 = 1;
int16_t x7102 = -1;
int32_t t104 = 21435;
static int64_t x7185 = -737129148510569LL;
int32_t t105 = 2943;
int64_t x7226 = 143920147377044LL;
int32_t t106 = -617787362;


void f0(void) {
    	volatile int8_t x1 = 11;
	int8_t x3 = 14;
	volatile uint32_t x4 = UINT32_MAX;
	int32_t t0 = 813382064;

    t0 = ((x1!=x2)>>(x3+x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x98 = 2;
	static volatile uint8_t x99 = 14U;
	uint32_t x100 = UINT32_MAX;
	int32_t t1 = 365357119;

    t1 = ((x97!=x98)>>(x99+x100));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x233 = INT32_MAX;
	uint16_t x234 = 25955U;
	int16_t x235 = -1;
	static uint64_t x236 = 6LLU;

    t2 = ((x233!=x234)>>(x235+x236));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint8_t x252 = 24U;
	int32_t t3 = 0;

    t3 = ((x249!=x250)>>(x251+x252));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x269 = 359525321LL;
	static uint32_t x270 = UINT32_MAX;
	int64_t x271 = -1LL;
	int32_t t4 = 3;

    t4 = ((x269!=x270)>>(x271+x272));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x345 = -7320456280860120LL;
	int8_t x348 = 18;
	int32_t t5 = 233;

    t5 = ((x345!=x346)>>(x347+x348));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint32_t x361 = 3366871U;
	uint32_t x362 = 171435082U;
	uint8_t x363 = 8U;
	uint8_t x364 = 0U;

    t6 = ((x361!=x362)>>(x363+x364));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x409 = INT64_MIN;
	int32_t x410 = INT32_MIN;
	uint32_t x411 = 9U;
	static volatile int32_t t7 = 10517;

    t7 = ((x409!=x410)>>(x411+x412));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x429 = 7U;
	uint8_t x430 = 57U;
	int32_t x431 = -1;
	static uint8_t x432 = 21U;
	volatile int32_t t8 = -76;

    t8 = ((x429!=x430)>>(x431+x432));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x478 = -1;
	int16_t x479 = 5;
	int8_t x480 = -1;

    t9 = ((x477!=x478)>>(x479+x480));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x617 = INT8_MAX;
	int32_t x618 = 30110;
	uint32_t x619 = UINT32_MAX;
	int16_t x620 = 20;
	int32_t t10 = 265723472;

    t10 = ((x617!=x618)>>(x619+x620));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint64_t x802 = 7663119430635LLU;
	uint32_t x804 = UINT32_MAX;
	int32_t t11 = -14252;

    t11 = ((x801!=x802)>>(x803+x804));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint16_t x1101 = 46U;
	static int8_t x1102 = INT8_MIN;
	uint16_t x1104 = 31U;
	volatile int32_t t12 = 463458;

    t12 = ((x1101!=x1102)>>(x1103+x1104));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x1261 = INT64_MIN;
	static int8_t x1263 = 3;
	uint64_t x1264 = 6LLU;
	int32_t t13 = 468;

    t13 = ((x1261!=x1262)>>(x1263+x1264));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int8_t x1469 = INT8_MAX;
	int16_t x1471 = -1;
	static int32_t t14 = -974706359;

    t14 = ((x1469!=x1470)>>(x1471+x1472));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x1569 = -1;
	int32_t x1570 = 1003487;
	static volatile uint16_t x1571 = 5U;
	int32_t x1572 = -1;
	volatile int32_t t15 = -24315585;

    t15 = ((x1569!=x1570)>>(x1571+x1572));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint16_t x1577 = 90U;
	uint64_t x1578 = 105510332445LLU;
	uint16_t x1579 = 10U;
	static uint32_t x1580 = UINT32_MAX;
	static volatile int32_t t16 = -5107415;

    t16 = ((x1577!=x1578)>>(x1579+x1580));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x1629 = INT16_MIN;
	volatile uint32_t x1630 = 313U;
	int32_t x1631 = -1;
	static int16_t x1632 = 5;
	int32_t t17 = -393;

    t17 = ((x1629!=x1630)>>(x1631+x1632));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x1689 = INT64_MAX;
	static int32_t x1690 = -49519;
	uint16_t x1692 = 6U;
	volatile int32_t t18 = -389213;

    t18 = ((x1689!=x1690)>>(x1691+x1692));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x1693 = 9386986U;
	int32_t x1694 = INT32_MIN;
	uint8_t x1696 = 12U;

    t19 = ((x1693!=x1694)>>(x1695+x1696));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x1705 = 1U;
	int16_t x1707 = -1;
	uint8_t x1708 = 5U;
	static volatile int32_t t20 = -70;

    t20 = ((x1705!=x1706)>>(x1707+x1708));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x1773 = INT32_MIN;
	int64_t x1774 = INT64_MIN;
	int32_t x1775 = -1;
	int32_t x1776 = 10;
	volatile int32_t t21 = 12;

    t21 = ((x1773!=x1774)>>(x1775+x1776));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x1867 = -1;
	int16_t x1868 = 16;
	int32_t t22 = 14398411;

    t22 = ((x1865!=x1866)>>(x1867+x1868));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x2033 = INT8_MAX;
	volatile int8_t x2034 = -1;
	int8_t x2035 = 1;
	uint8_t x2036 = 6U;
	int32_t t23 = 0;

    t23 = ((x2033!=x2034)>>(x2035+x2036));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x2037 = 0U;
	int64_t x2038 = -23052LL;
	int8_t x2039 = 0;
	static volatile int32_t t24 = 59;

    t24 = ((x2037!=x2038)>>(x2039+x2040));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x2089 = INT16_MAX;
	int32_t x2090 = INT32_MIN;
	uint16_t x2091 = 11U;
	volatile int32_t t25 = 57;

    t25 = ((x2089!=x2090)>>(x2091+x2092));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int64_t x2318 = INT64_MAX;
	int8_t x2319 = -1;
	int32_t x2320 = 29;
	int32_t t26 = 256956;

    t26 = ((x2317!=x2318)>>(x2319+x2320));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x2329 = INT8_MIN;
	int32_t x2330 = -1014;
	static uint8_t x2331 = 13U;
	int16_t x2332 = -1;

    t27 = ((x2329!=x2330)>>(x2331+x2332));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x2505 = INT8_MIN;
	volatile uint16_t x2507 = 20U;
	static uint32_t x2508 = 2U;

    t28 = ((x2505!=x2506)>>(x2507+x2508));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint16_t x2581 = 86U;
	int64_t x2582 = 3130531600375468760LL;
	int32_t x2583 = -1;
	int32_t t29 = -234485846;

    t29 = ((x2581!=x2582)>>(x2583+x2584));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x2681 = INT32_MAX;
	uint16_t x2682 = 6849U;
	static int64_t x2683 = -1LL;
	static uint8_t x2684 = 32U;
	volatile int32_t t30 = 0;

    t30 = ((x2681!=x2682)>>(x2683+x2684));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x2897 = INT8_MIN;
	uint64_t x2898 = 266305465LLU;
	int64_t x2900 = -1LL;
	int32_t t31 = 334265035;

    t31 = ((x2897!=x2898)>>(x2899+x2900));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x2905 = INT64_MAX;
	uint32_t x2906 = 0U;
	volatile int32_t x2907 = -1;
	volatile uint16_t x2908 = 10U;
	volatile int32_t t32 = 487210;

    t32 = ((x2905!=x2906)>>(x2907+x2908));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint64_t x3041 = 5650LLU;
	int16_t x3042 = -35;
	uint32_t x3043 = UINT32_MAX;
	uint8_t x3044 = 10U;
	int32_t t33 = -608212567;

    t33 = ((x3041!=x3042)>>(x3043+x3044));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x3073 = -1;
	int8_t x3074 = INT8_MIN;
	int8_t x3075 = 6;
	volatile int16_t x3076 = -1;
	volatile int32_t t34 = -104;

    t34 = ((x3073!=x3074)>>(x3075+x3076));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x3093 = UINT16_MAX;
	volatile uint32_t x3095 = 18U;
	int8_t x3096 = -1;
	int32_t t35 = 6;

    t35 = ((x3093!=x3094)>>(x3095+x3096));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x3113 = INT32_MIN;
	uint8_t x3115 = 5U;
	uint8_t x3116 = 1U;
	static int32_t t36 = 455883;

    t36 = ((x3113!=x3114)>>(x3115+x3116));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x3155 = UINT64_MAX;
	uint8_t x3156 = 29U;
	static volatile int32_t t37 = 147791744;

    t37 = ((x3153!=x3154)>>(x3155+x3156));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x3246 = 0U;
	uint64_t x3247 = UINT64_MAX;
	volatile uint8_t x3248 = 1U;
	volatile int32_t t38 = -95984150;

    t38 = ((x3245!=x3246)>>(x3247+x3248));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x3277 = 1U;
	int8_t x3278 = INT8_MAX;
	volatile int32_t t39 = -1731890;

    t39 = ((x3277!=x3278)>>(x3279+x3280));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int32_t x3285 = INT32_MIN;
	int64_t x3286 = INT64_MIN;
	static int8_t x3288 = 1;
	static int32_t t40 = -3098;

    t40 = ((x3285!=x3286)>>(x3287+x3288));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x3297 = 353369369LL;
	uint64_t x3298 = UINT64_MAX;
	static uint32_t x3300 = UINT32_MAX;
	volatile int32_t t41 = 18834175;

    t41 = ((x3297!=x3298)>>(x3299+x3300));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x3309 = -1;
	int8_t x3310 = -1;
	static int32_t x3312 = -1;
	volatile int32_t t42 = 94;

    t42 = ((x3309!=x3310)>>(x3311+x3312));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x3417 = INT64_MIN;
	int32_t x3419 = -1;
	volatile uint8_t x3420 = 9U;

    t43 = ((x3417!=x3418)>>(x3419+x3420));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint32_t x3495 = 6U;
	static int8_t x3496 = -1;
	volatile int32_t t44 = 11156;

    t44 = ((x3493!=x3494)>>(x3495+x3496));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x3570 = 8250465491LL;
	uint8_t x3571 = 2U;
	int8_t x3572 = -1;

    t45 = ((x3569!=x3570)>>(x3571+x3572));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x3697 = 0U;
	static volatile int64_t x3698 = -1LL;
	int32_t x3699 = -1;
	static int16_t x3700 = 23;
	static volatile int32_t t46 = -224459467;

    t46 = ((x3697!=x3698)>>(x3699+x3700));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x3705 = INT64_MIN;
	volatile uint16_t x3706 = UINT16_MAX;
	volatile int16_t x3707 = 1;
	int8_t x3708 = -1;
	static volatile int32_t t47 = 12290920;

    t47 = ((x3705!=x3706)>>(x3707+x3708));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x3715 = -1;
	int8_t x3716 = 26;
	volatile int32_t t48 = -22;

    t48 = ((x3713!=x3714)>>(x3715+x3716));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x3725 = UINT32_MAX;
	int8_t x3726 = INT8_MIN;
	int32_t x3727 = -13;
	uint8_t x3728 = 31U;
	static volatile int32_t t49 = 43108;

    t49 = ((x3725!=x3726)>>(x3727+x3728));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x3781 = 1343163400U;
	int16_t x3782 = INT16_MIN;
	uint32_t x3783 = 0U;
	static volatile uint64_t x3784 = 14LLU;
	int32_t t50 = -14;

    t50 = ((x3781!=x3782)>>(x3783+x3784));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint32_t x3833 = 22889U;
	int32_t x3834 = INT32_MIN;
	volatile uint8_t x3835 = 6U;
	static int8_t x3836 = 1;
	static int32_t t51 = -9;

    t51 = ((x3833!=x3834)>>(x3835+x3836));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x3929 = 5966648U;
	int64_t x3930 = INT64_MAX;
	int8_t x3932 = 3;
	int32_t t52 = 0;

    t52 = ((x3929!=x3930)>>(x3931+x3932));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x4113 = 0U;
	int64_t x4114 = -1LL;
	volatile int8_t x4115 = 1;
	volatile int32_t t53 = 0;

    t53 = ((x4113!=x4114)>>(x4115+x4116));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x4158 = INT32_MAX;
	uint32_t x4160 = UINT32_MAX;
	volatile int32_t t54 = 3;

    t54 = ((x4157!=x4158)>>(x4159+x4160));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x4162 = UINT32_MAX;
	uint32_t x4163 = 9U;
	uint16_t x4164 = 0U;
	volatile int32_t t55 = 12;

    t55 = ((x4161!=x4162)>>(x4163+x4164));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x4253 = 12;
	static int32_t x4254 = INT32_MAX;
	volatile uint8_t x4255 = 16U;
	int64_t x4256 = -1LL;
	volatile int32_t t56 = 14501;

    t56 = ((x4253!=x4254)>>(x4255+x4256));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x4270 = INT64_MIN;
	int64_t x4271 = -1LL;
	int32_t t57 = -191326120;

    t57 = ((x4269!=x4270)>>(x4271+x4272));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint64_t x4285 = 966LLU;
	volatile int8_t x4286 = INT8_MIN;
	volatile int16_t x4287 = 0;
	static uint8_t x4288 = 0U;

    t58 = ((x4285!=x4286)>>(x4287+x4288));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x4558 = INT16_MIN;
	uint16_t x4560 = 14U;
	static volatile int32_t t59 = 0;

    t59 = ((x4557!=x4558)>>(x4559+x4560));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x4641 = 210;
	uint32_t x4642 = UINT32_MAX;
	static int8_t x4643 = -1;
	uint64_t x4644 = 3LLU;
	int32_t t60 = -3;

    t60 = ((x4641!=x4642)>>(x4643+x4644));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x4665 = 21U;
	uint8_t x4666 = 1U;
	volatile int64_t x4667 = -1LL;
	uint8_t x4668 = 21U;
	static volatile int32_t t61 = -1036359529;

    t61 = ((x4665!=x4666)>>(x4667+x4668));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x4812 = 6U;

    t62 = ((x4809!=x4810)>>(x4811+x4812));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x4921 = 184;
	static int64_t x4922 = -1LL;
	int32_t t63 = 50;

    t63 = ((x4921!=x4922)>>(x4923+x4924));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x4937 = INT64_MAX;
	volatile int8_t x4940 = 3;

    t64 = ((x4937!=x4938)>>(x4939+x4940));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x4993 = INT32_MAX;
	static uint16_t x4994 = UINT16_MAX;
	int8_t x4995 = 11;
	uint8_t x4996 = 3U;
	volatile int32_t t65 = -2353596;

    t65 = ((x4993!=x4994)>>(x4995+x4996));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x5093 = INT64_MIN;
	uint32_t x5094 = 446264U;
	int16_t x5096 = -1;
	int32_t t66 = 2130609;

    t66 = ((x5093!=x5094)>>(x5095+x5096));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x5097 = INT16_MIN;
	uint8_t x5099 = 1U;
	int16_t x5100 = -1;

    t67 = ((x5097!=x5098)>>(x5099+x5100));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x5101 = INT64_MIN;
	static int16_t x5102 = 418;
	volatile uint64_t x5104 = UINT64_MAX;
	volatile int32_t t68 = -4517338;

    t68 = ((x5101!=x5102)>>(x5103+x5104));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x5125 = -1LL;
	static volatile uint32_t x5126 = 44551225U;
	static uint8_t x5127 = 9U;
	static int64_t x5128 = -1LL;
	int32_t t69 = 18;

    t69 = ((x5125!=x5126)>>(x5127+x5128));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x5141 = -3239LL;
	uint16_t x5142 = UINT16_MAX;
	volatile uint16_t x5143 = 1U;
	volatile int32_t t70 = 50811;

    t70 = ((x5141!=x5142)>>(x5143+x5144));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x5189 = -46130;
	int16_t x5190 = 114;
	int8_t x5191 = -1;
	uint8_t x5192 = 9U;
	static int32_t t71 = 575;

    t71 = ((x5189!=x5190)>>(x5191+x5192));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x5237 = UINT16_MAX;
	uint8_t x5238 = UINT8_MAX;
	static volatile uint8_t x5240 = 0U;
	volatile int32_t t72 = 28980049;

    t72 = ((x5237!=x5238)>>(x5239+x5240));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x5309 = INT8_MAX;
	uint16_t x5310 = 1965U;
	uint32_t x5311 = 1U;
	static volatile int64_t x5312 = -1LL;
	int32_t t73 = -30783225;

    t73 = ((x5309!=x5310)>>(x5311+x5312));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x5325 = 27;
	int32_t x5326 = 176255;
	int64_t x5328 = -1LL;
	volatile int32_t t74 = 81;

    t74 = ((x5325!=x5326)>>(x5327+x5328));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x5389 = -1;
	int16_t x5390 = INT16_MAX;
	uint8_t x5391 = 17U;
	volatile int32_t t75 = -163641;

    t75 = ((x5389!=x5390)>>(x5391+x5392));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint8_t x5397 = 15U;
	int8_t x5398 = 1;
	uint16_t x5399 = 8U;
	static volatile int64_t x5400 = -1LL;
	volatile int32_t t76 = -3;

    t76 = ((x5397!=x5398)>>(x5399+x5400));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x5578 = -1;
	uint32_t x5579 = UINT32_MAX;
	int32_t t77 = 0;

    t77 = ((x5577!=x5578)>>(x5579+x5580));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x5625 = UINT64_MAX;
	uint64_t x5626 = 431422995260LLU;
	static int64_t x5627 = 20LL;
	static uint64_t x5628 = UINT64_MAX;

    t78 = ((x5625!=x5626)>>(x5627+x5628));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x5681 = INT64_MIN;
	int32_t x5682 = 3;
	static int32_t x5684 = 3;

    t79 = ((x5681!=x5682)>>(x5683+x5684));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x5749 = INT8_MIN;
	int8_t x5750 = INT8_MIN;
	uint16_t x5751 = 13U;
	int8_t x5752 = -8;
	volatile int32_t t80 = 69167554;

    t80 = ((x5749!=x5750)>>(x5751+x5752));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x5794 = -2758;
	volatile uint16_t x5795 = 2U;
	uint32_t x5796 = UINT32_MAX;
	volatile int32_t t81 = -7105;

    t81 = ((x5793!=x5794)>>(x5795+x5796));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x5829 = -1;
	uint8_t x5831 = 17U;
	static volatile int32_t t82 = 24;

    t82 = ((x5829!=x5830)>>(x5831+x5832));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x5855 = 22U;
	uint64_t x5856 = UINT64_MAX;
	int32_t t83 = -4239;

    t83 = ((x5853!=x5854)>>(x5855+x5856));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x6065 = UINT64_MAX;
	uint16_t x6066 = 5U;
	int8_t x6067 = 23;
	volatile uint8_t x6068 = 0U;
	static volatile int32_t t84 = 224274;

    t84 = ((x6065!=x6066)>>(x6067+x6068));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x6109 = INT64_MIN;
	uint16_t x6110 = 1U;
	uint8_t x6111 = 14U;
	int32_t x6112 = -1;
	int32_t t85 = 403;

    t85 = ((x6109!=x6110)>>(x6111+x6112));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x6121 = UINT32_MAX;
	uint64_t x6123 = UINT64_MAX;
	volatile int32_t x6124 = 1;
	volatile int32_t t86 = 20827;

    t86 = ((x6121!=x6122)>>(x6123+x6124));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x6177 = 1833U;
	static int16_t x6178 = -1;
	volatile int8_t x6179 = 31;
	volatile int32_t t87 = 692983327;

    t87 = ((x6177!=x6178)>>(x6179+x6180));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int8_t x6237 = -8;
	int32_t x6238 = INT32_MAX;
	uint8_t x6240 = 1U;
	int32_t t88 = 1;

    t88 = ((x6237!=x6238)>>(x6239+x6240));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x6297 = INT16_MAX;
	uint8_t x6298 = UINT8_MAX;
	static int16_t x6299 = 3;
	uint32_t x6300 = UINT32_MAX;

    t89 = ((x6297!=x6298)>>(x6299+x6300));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x6318 = -12231;
	int8_t x6320 = 12;
	int32_t t90 = -362;

    t90 = ((x6317!=x6318)>>(x6319+x6320));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x6477 = 12U;
	uint32_t x6478 = 1298016U;
	volatile int8_t x6479 = 2;
	int32_t t91 = -31333815;

    t91 = ((x6477!=x6478)>>(x6479+x6480));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint8_t x6557 = 62U;
	static int64_t x6558 = INT64_MAX;
	int16_t x6559 = 3;

    t92 = ((x6557!=x6558)>>(x6559+x6560));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x6577 = INT16_MAX;
	uint64_t x6578 = UINT64_MAX;
	static int16_t x6579 = 5;
	int16_t x6580 = -1;
	volatile int32_t t93 = -50;

    t93 = ((x6577!=x6578)>>(x6579+x6580));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x6593 = INT16_MAX;
	volatile int32_t x6594 = INT32_MIN;
	uint16_t x6595 = 3U;
	static uint64_t x6596 = UINT64_MAX;

    t94 = ((x6593!=x6594)>>(x6595+x6596));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint64_t x6597 = 854138169LLU;
	int16_t x6598 = INT16_MIN;
	int16_t x6599 = -1;
	int32_t t95 = -15;

    t95 = ((x6597!=x6598)>>(x6599+x6600));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x6633 = INT16_MIN;
	int64_t x6634 = 2726LL;
	static volatile int32_t x6635 = 4;
	int8_t x6636 = -1;
	int32_t t96 = -56;

    t96 = ((x6633!=x6634)>>(x6635+x6636));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x6669 = INT8_MIN;
	int8_t x6671 = 3;
	int64_t x6672 = -1LL;
	volatile int32_t t97 = -233607632;

    t97 = ((x6669!=x6670)>>(x6671+x6672));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x6725 = INT16_MIN;
	static volatile int64_t x6726 = -140508695019510200LL;
	int32_t t98 = 110;

    t98 = ((x6725!=x6726)>>(x6727+x6728));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x6746 = -1LL;
	volatile int64_t x6747 = -1LL;
	uint8_t x6748 = 1U;
	int32_t t99 = 70;

    t99 = ((x6745!=x6746)>>(x6747+x6748));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x6749 = INT8_MIN;
	int8_t x6750 = 1;
	uint16_t x6751 = 9U;
	int16_t x6752 = 7;

    t100 = ((x6749!=x6750)>>(x6751+x6752));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint64_t x6897 = UINT64_MAX;
	static int16_t x6898 = INT16_MAX;
	static volatile uint8_t x6899 = 2U;
	static int8_t x6900 = -1;
	volatile int32_t t101 = 38;

    t101 = ((x6897!=x6898)>>(x6899+x6900));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x6933 = 46017628436LLU;
	static int32_t x6934 = INT32_MIN;
	uint64_t x6935 = 5LLU;
	volatile uint32_t x6936 = 3U;
	static int32_t t102 = 1003;

    t102 = ((x6933!=x6934)>>(x6935+x6936));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x6941 = 49U;
	static volatile uint64_t x6942 = 135829333843741LLU;
	volatile int8_t x6943 = -1;
	uint32_t x6944 = 20U;
	int32_t t103 = 0;

    t103 = ((x6941!=x6942)>>(x6943+x6944));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x7101 = 108753665577383LLU;
	static int8_t x7103 = 1;
	static uint32_t x7104 = UINT32_MAX;

    t104 = ((x7101!=x7102)>>(x7103+x7104));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint32_t x7186 = 1502U;
	int8_t x7187 = 12;
	uint8_t x7188 = 0U;

    t105 = ((x7185!=x7186)>>(x7187+x7188));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x7225 = INT32_MIN;
	static volatile int64_t x7227 = -1LL;
	uint8_t x7228 = 2U;

    t106 = ((x7225!=x7226)>>(x7227+x7228));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x7309 = 656U;
	static volatile int64_t x7310 = INT64_MAX;
	uint16_t x7311 = 3U;
	static volatile int8_t x7312 = -1;
	int32_t t107 = 12150;

    t107 = ((x7309!=x7310)>>(x7311+x7312));

    if (t107 != 0) { NG(); } else { ; }
	
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


    return 0;
}

