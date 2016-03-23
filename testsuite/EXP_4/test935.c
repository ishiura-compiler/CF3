
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

volatile int8_t x12 = -1;
uint32_t x21 = 128U;
uint32_t x23 = 441969536U;
int64_t x389 = INT64_MAX;
volatile uint8_t x390 = 1U;
uint32_t t7 = 57U;
int64_t x631 = 646LL;
int8_t x632 = INT8_MAX;
uint16_t x926 = 1U;
uint16_t x1095 = 5U;
static uint16_t x1450 = 6U;
uint32_t t13 = 92U;
uint64_t x1531 = 101306LLU;
uint16_t x1532 = 273U;
uint8_t x1909 = UINT8_MAX;
volatile uint32_t t20 = 110308535U;
uint16_t x2351 = 28U;
int8_t x2352 = -1;
static int8_t x2443 = 0;
int32_t x2799 = 2536461;
uint64_t x2884 = 61LLU;
uint64_t x3229 = UINT64_MAX;
uint64_t x3269 = 1003LLU;
static uint64_t x3352 = 19LLU;
volatile int16_t x3376 = INT16_MAX;
volatile int32_t t31 = 59785;
uint16_t x3530 = 1U;
int32_t t33 = -22;
uint32_t x3592 = 778933366U;
volatile int64_t x3889 = 33633826014LL;
uint16_t x3914 = UINT16_MAX;
volatile int32_t t39 = -342803911;
int16_t x4082 = 6;
volatile int8_t x4440 = 5;
int8_t x4512 = -2;
static int8_t x4600 = INT8_MAX;
int16_t x4661 = 1;
int8_t x4664 = INT8_MAX;
static int8_t x4871 = 1;
int8_t x5062 = 2;
static volatile int32_t t52 = 54462213;
uint32_t t54 = 6U;
volatile int32_t x5453 = 0;
uint16_t x5458 = 2U;
volatile int32_t x5459 = -1;
int32_t t56 = 29335;
volatile uint16_t x5678 = 3U;
int64_t x5680 = -1LL;
uint32_t x5717 = UINT32_MAX;
volatile uint64_t x5790 = 29LLU;
uint32_t x5829 = 7389715U;
static uint32_t t62 = 943199720U;
uint8_t x6112 = 70U;
static uint16_t x6328 = 12U;
uint64_t x6334 = 7LLU;
volatile int16_t x6335 = INT16_MIN;
uint8_t x6378 = 1U;
int8_t x6458 = INT8_MAX;
uint8_t x6460 = UINT8_MAX;
static uint16_t x6544 = 1U;
int8_t x6747 = 10;
static volatile int64_t t77 = 5LL;
uint64_t t79 = 59704340731457LLU;
uint8_t x7189 = UINT8_MAX;
int16_t x7192 = -1;
uint32_t x7249 = UINT32_MAX;
int8_t x7550 = 1;
volatile uint64_t t83 = 49LLU;
uint16_t x7850 = UINT16_MAX;
static uint32_t t85 = 1298602U;
int8_t x8044 = 1;
volatile int32_t t86 = 111045;
int32_t t87 = -354;
volatile int8_t x8302 = INT8_MAX;
volatile uint64_t x8303 = 15LLU;
int16_t x8304 = -1444;
uint64_t t90 = UINT64_MAX;


void f0(void) {
    	uint8_t x9 = 10U;
	static int16_t x10 = 7;
	uint16_t x11 = UINT16_MAX;
	int32_t t0 = -29;

    t0 = (x9>>(x10>>(x11%x12)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x22 = 0;
	uint16_t x24 = 1U;
	volatile uint32_t t1 = 39097813U;

    t1 = (x21>>(x22>>(x23%x24)));

    if (t1 != 128U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x33 = 719940U;
	uint32_t x34 = 38U;
	uint32_t x35 = 13U;
	static volatile int8_t x36 = INT8_MAX;
	static uint32_t t2 = 3179998U;

    t2 = (x33>>(x34>>(x35%x36)));

    if (t2 != 719940U) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x309 = INT16_MAX;
	static int8_t x310 = 0;
	static volatile int32_t x311 = INT32_MAX;
	uint16_t x312 = 5U;
	volatile int32_t t3 = 192;

    t3 = (x309>>(x310>>(x311%x312)));

    if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint8_t x365 = UINT8_MAX;
	int8_t x366 = INT8_MAX;
	uint8_t x367 = 6U;
	uint32_t x368 = 795510965U;
	volatile int32_t t4 = -1;

    t4 = (x365>>(x366>>(x367%x368)));

    if (t4 != 127) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x369 = INT64_MAX;
	static volatile int8_t x370 = 0;
	volatile uint8_t x371 = UINT8_MAX;
	static int8_t x372 = 7;
	int64_t t5 = INT64_MAX;

    t5 = (x369>>(x370>>(x371%x372)));

    if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x391 = UINT64_MAX;
	int8_t x392 = 17;
	static volatile int64_t t6 = 300964274859632764LL;

    t6 = (x389>>(x390>>(x391%x392)));

    if (t6 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x577 = UINT32_MAX;
	uint8_t x578 = 6U;
	static uint64_t x579 = UINT64_MAX;
	volatile int16_t x580 = -1;

    t7 = (x577>>(x578>>(x579%x580)));

    if (t7 != 67108863U) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x597 = INT64_MAX;
	uint8_t x598 = 9U;
	int8_t x599 = -1;
	volatile uint32_t x600 = 8U;
	volatile int64_t t8 = INT64_MAX;

    t8 = (x597>>(x598>>(x599%x600)));

    if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x629 = INT32_MAX;
	uint16_t x630 = 19U;
	static int32_t t9 = INT32_MAX;

    t9 = (x629>>(x630>>(x631%x632)));

    if (t9 != INT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x925 = INT16_MAX;
	int32_t x927 = -1;
	int64_t x928 = -1LL;
	int32_t t10 = 11430;

    t10 = (x925>>(x926>>(x927%x928)));

    if (t10 != 16383) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x1057 = 27U;
	static int16_t x1058 = INT16_MAX;
	uint8_t x1059 = 25U;
	int16_t x1060 = INT16_MIN;
	static volatile int32_t t11 = 812306276;

    t11 = (x1057>>(x1058>>(x1059%x1060)));

    if (t11 != 27) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x1093 = UINT8_MAX;
	uint32_t x1094 = 27U;
	volatile uint32_t x1096 = UINT32_MAX;
	static volatile int32_t t12 = 16904;

    t12 = (x1093>>(x1094>>(x1095%x1096)));

    if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint32_t x1449 = UINT32_MAX;
	int32_t x1451 = -1;
	volatile int8_t x1452 = -1;

    t13 = (x1449>>(x1450>>(x1451%x1452)));

    if (t13 != 67108863U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x1481 = 3117U;
	uint8_t x1482 = 42U;
	uint16_t x1483 = 31U;
	int64_t x1484 = 13680224232LL;
	static volatile int32_t t14 = -3228702;

    t14 = (x1481>>(x1482>>(x1483%x1484)));

    if (t14 != 3117) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile uint8_t x1529 = 47U;
	uint16_t x1530 = UINT16_MAX;
	static int32_t t15 = 440;

    t15 = (x1529>>(x1530>>(x1531%x1532)));

    if (t15 != 47) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x1845 = 2U;
	int16_t x1846 = 19;
	int16_t x1847 = -1;
	volatile uint64_t x1848 = UINT64_MAX;
	static volatile int32_t t16 = -5;

    t16 = (x1845>>(x1846>>(x1847%x1848)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x1910 = 1LLU;
	int16_t x1911 = -1;
	static uint64_t x1912 = UINT64_MAX;
	static int32_t t17 = -824;

    t17 = (x1909>>(x1910>>(x1911%x1912)));

    if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x1997 = 853869733129152662LL;
	volatile uint8_t x1998 = 1U;
	uint8_t x1999 = 15U;
	int16_t x2000 = -1;
	static volatile int64_t t18 = -20LL;

    t18 = (x1997>>(x1998>>(x1999%x2000)));

    if (t18 != 426934866564576331LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x2005 = 0LLU;
	static int8_t x2006 = 2;
	static uint8_t x2007 = 11U;
	volatile int32_t x2008 = 2696;
	uint64_t t19 = 1996553108LLU;

    t19 = (x2005>>(x2006>>(x2007%x2008)));

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x2141 = 1U;
	uint16_t x2142 = 607U;
	static int64_t x2143 = 32550815555849621LL;
	volatile uint8_t x2144 = 41U;

    t20 = (x2141>>(x2142>>(x2143%x2144)));

    if (t20 != 1U) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x2349 = INT16_MAX;
	uint16_t x2350 = 0U;
	static int32_t t21 = -42;

    t21 = (x2349>>(x2350>>(x2351%x2352)));

    if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x2441 = 5745269863128LL;
	uint16_t x2442 = 3U;
	volatile int32_t x2444 = 1037;
	volatile int64_t t22 = -55031473538634LL;

    t22 = (x2441>>(x2442>>(x2443%x2444)));

    if (t22 != 718158732891LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x2445 = INT8_MAX;
	static uint16_t x2446 = 14U;
	static int8_t x2447 = INT8_MIN;
	uint64_t x2448 = 10LLU;
	int32_t t23 = -1;

    t23 = (x2445>>(x2446>>(x2447%x2448)));

    if (t23 != 127) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x2797 = 467756522U;
	int16_t x2798 = 72;
	uint8_t x2800 = 7U;
	volatile uint32_t t24 = 132015381U;

    t24 = (x2797>>(x2798>>(x2799%x2800)));

    if (t24 != 29234782U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x2881 = UINT32_MAX;
	volatile uint32_t x2882 = 474U;
	uint64_t x2883 = UINT64_MAX;
	uint32_t t25 = UINT32_MAX;

    t25 = (x2881>>(x2882>>(x2883%x2884)));

    if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	static int64_t x3181 = INT64_MAX;
	int32_t x3182 = 1;
	uint8_t x3183 = UINT8_MAX;
	int8_t x3184 = -1;
	volatile int64_t t26 = -17LL;

    t26 = (x3181>>(x3182>>(x3183%x3184)));

    if (t26 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int8_t x3230 = 7;
	int16_t x3231 = INT16_MAX;
	int8_t x3232 = -15;
	volatile uint64_t t27 = UINT64_MAX;

    t27 = (x3229>>(x3230>>(x3231%x3232)));

    if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x3270 = 1;
	static uint8_t x3271 = 0U;
	static volatile int64_t x3272 = INT64_MAX;
	volatile uint64_t t28 = 2100994773255LLU;

    t28 = (x3269>>(x3270>>(x3271%x3272)));

    if (t28 != 501LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x3281 = 4;
	uint8_t x3282 = 0U;
	static volatile uint64_t x3283 = UINT64_MAX;
	static int32_t x3284 = -1;
	int32_t t29 = -14816853;

    t29 = (x3281>>(x3282>>(x3283%x3284)));

    if (t29 != 4) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x3349 = 3;
	int8_t x3350 = INT8_MAX;
	int32_t x3351 = -1;
	volatile int32_t t30 = 519637594;

    t30 = (x3349>>(x3350>>(x3351%x3352)));

    if (t30 != 3) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x3373 = 10519U;
	uint16_t x3374 = 4U;
	int8_t x3375 = 2;

    t31 = (x3373>>(x3374>>(x3375%x3376)));

    if (t31 != 5259) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x3409 = INT32_MAX;
	uint8_t x3410 = 3U;
	volatile int16_t x3411 = INT16_MAX;
	uint8_t x3412 = 3U;
	volatile int32_t t32 = -20589752;

    t32 = (x3409>>(x3410>>(x3411%x3412)));

    if (t32 != 1073741823) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x3529 = INT32_MAX;
	volatile int32_t x3531 = -6389967;
	static uint8_t x3532 = 3U;

    t33 = (x3529>>(x3530>>(x3531%x3532)));

    if (t33 != 1073741823) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x3589 = 2285842LLU;
	static int32_t x3590 = 30303067;
	uint16_t x3591 = 26U;
	volatile uint64_t t34 = 3347451139240LLU;

    t34 = (x3589>>(x3590>>(x3591%x3592)));

    if (t34 != 2285842LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x3637 = 8828258628389847LLU;
	int32_t x3638 = 1;
	int32_t x3639 = INT32_MAX;
	int16_t x3640 = -1;
	volatile uint64_t t35 = 7LLU;

    t35 = (x3637>>(x3638>>(x3639%x3640)));

    if (t35 != 4414129314194923LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x3721 = INT8_MAX;
	int32_t x3722 = 8;
	uint8_t x3723 = 13U;
	uint64_t x3724 = 225LLU;
	static int32_t t36 = -429;

    t36 = (x3721>>(x3722>>(x3723%x3724)));

    if (t36 != 127) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x3809 = 16582U;
	uint32_t x3810 = 1U;
	int8_t x3811 = 11;
	int64_t x3812 = -1LL;
	static volatile int32_t t37 = -415952;

    t37 = (x3809>>(x3810>>(x3811%x3812)));

    if (t37 != 8291) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int16_t x3890 = 0;
	static int16_t x3891 = 1;
	int64_t x3892 = 1866861163759494LL;
	volatile int64_t t38 = -193569066LL;

    t38 = (x3889>>(x3890>>(x3891%x3892)));

    if (t38 != 33633826014LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile uint8_t x3913 = UINT8_MAX;
	static uint64_t x3915 = UINT64_MAX;
	volatile uint32_t x3916 = 93U;

    t39 = (x3913>>(x3914>>(x3915%x3916)));

    if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x3957 = 41;
	volatile uint8_t x3958 = UINT8_MAX;
	volatile uint32_t x3959 = 13U;
	static int8_t x3960 = INT8_MIN;
	volatile int32_t t40 = 3683265;

    t40 = (x3957>>(x3958>>(x3959%x3960)));

    if (t40 != 41) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x3961 = UINT32_MAX;
	uint8_t x3962 = 0U;
	int8_t x3963 = 2;
	int32_t x3964 = INT32_MIN;
	static uint32_t t41 = UINT32_MAX;

    t41 = (x3961>>(x3962>>(x3963%x3964)));

    if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x4061 = 1558U;
	volatile uint16_t x4062 = 25U;
	int8_t x4063 = INT8_MIN;
	int8_t x4064 = INT8_MIN;
	uint32_t t42 = 108179U;

    t42 = (x4061>>(x4062>>(x4063%x4064)));

    if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x4081 = UINT64_MAX;
	uint8_t x4083 = 11U;
	int64_t x4084 = -14540259162LL;
	uint64_t t43 = UINT64_MAX;

    t43 = (x4081>>(x4082>>(x4083%x4084)));

    if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint8_t x4245 = UINT8_MAX;
	volatile int8_t x4246 = 1;
	int32_t x4247 = INT32_MIN;
	uint8_t x4248 = 1U;
	static volatile int32_t t44 = 288812820;

    t44 = (x4245>>(x4246>>(x4247%x4248)));

    if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x4261 = 2841766199934LLU;
	static uint8_t x4262 = UINT8_MAX;
	volatile uint32_t x4263 = 245128237U;
	static uint8_t x4264 = 13U;
	volatile uint64_t t45 = 139266363789625LLU;

    t45 = (x4261>>(x4262>>(x4263%x4264)));

    if (t45 != 1323LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x4437 = INT8_MAX;
	volatile int8_t x4438 = 50;
	int32_t x4439 = INT32_MAX;
	int32_t t46 = -2042;

    t46 = (x4437>>(x4438>>(x4439%x4440)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x4509 = 2051250934LL;
	static uint8_t x4510 = 0U;
	int16_t x4511 = INT16_MAX;
	volatile int64_t t47 = 3LL;

    t47 = (x4509>>(x4510>>(x4511%x4512)));

    if (t47 != 2051250934LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint16_t x4597 = 2202U;
	uint8_t x4598 = UINT8_MAX;
	uint16_t x4599 = 3U;
	volatile int32_t t48 = 14;

    t48 = (x4597>>(x4598>>(x4599%x4600)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile uint8_t x4662 = 110U;
	uint8_t x4663 = 30U;
	static volatile int32_t t49 = 659582;

    t49 = (x4661>>(x4662>>(x4663%x4664)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x4869 = INT64_MAX;
	int16_t x4870 = 3;
	uint32_t x4872 = 1U;
	static int64_t t50 = 436213008843609600LL;

    t50 = (x4869>>(x4870>>(x4871%x4872)));

    if (t50 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x4977 = 40;
	int8_t x4978 = 26;
	int64_t x4979 = INT64_MIN;
	volatile int8_t x4980 = INT8_MIN;
	static volatile int32_t t51 = -3;

    t51 = (x4977>>(x4978>>(x4979%x4980)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint16_t x5061 = 1U;
	uint64_t x5063 = UINT64_MAX;
	uint16_t x5064 = UINT16_MAX;

    t52 = (x5061>>(x5062>>(x5063%x5064)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x5313 = 0U;
	int64_t x5314 = 22492LL;
	uint16_t x5315 = 12U;
	uint64_t x5316 = 77475596505373LLU;
	int32_t t53 = 109930;

    t53 = (x5313>>(x5314>>(x5315%x5316)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x5425 = UINT32_MAX;
	static int8_t x5426 = INT8_MAX;
	int32_t x5427 = INT32_MAX;
	static int16_t x5428 = 5;

    t54 = (x5425>>(x5426>>(x5427%x5428)));

    if (t54 != 1U) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x5454 = 23U;
	uint16_t x5455 = 3U;
	int16_t x5456 = INT16_MAX;
	static volatile int32_t t55 = 2998781;

    t55 = (x5453>>(x5454>>(x5455%x5456)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x5457 = 24;
	int64_t x5460 = -1LL;

    t56 = (x5457>>(x5458>>(x5459%x5460)));

    if (t56 != 6) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x5469 = 3220U;
	uint8_t x5470 = UINT8_MAX;
	static int64_t x5471 = INT64_MAX;
	volatile int8_t x5472 = -39;
	volatile uint32_t t57 = 549573801U;

    t57 = (x5469>>(x5470>>(x5471%x5472)));

    if (t57 != 1610U) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x5569 = 216U;
	uint8_t x5570 = 7U;
	static int8_t x5571 = INT8_MIN;
	int16_t x5572 = -1;
	static int32_t t58 = -68;

    t58 = (x5569>>(x5570>>(x5571%x5572)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint32_t x5677 = 49U;
	int32_t x5679 = -892608;
	uint32_t t59 = 185891795U;

    t59 = (x5677>>(x5678>>(x5679%x5680)));

    if (t59 != 6U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x5718 = UINT8_MAX;
	volatile uint8_t x5719 = 3U;
	int64_t x5720 = INT64_MAX;
	volatile uint32_t t60 = 1338683474U;

    t60 = (x5717>>(x5718>>(x5719%x5720)));

    if (t60 != 1U) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint64_t x5789 = 29LLU;
	volatile int32_t x5791 = INT32_MIN;
	volatile int64_t x5792 = -1LL;
	uint64_t t61 = 188667144LLU;

    t61 = (x5789>>(x5790>>(x5791%x5792)));

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x5830 = INT8_MAX;
	volatile uint16_t x5831 = 17U;
	int32_t x5832 = INT32_MIN;

    t62 = (x5829>>(x5830>>(x5831%x5832)));

    if (t62 != 7389715U) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint16_t x5945 = UINT16_MAX;
	int8_t x5946 = 0;
	uint32_t x5947 = UINT32_MAX;
	int32_t x5948 = INT32_MAX;
	int32_t t63 = -192;

    t63 = (x5945>>(x5946>>(x5947%x5948)));

    if (t63 != 65535) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x6077 = 2681817829335012LLU;
	volatile int16_t x6078 = INT16_MAX;
	uint8_t x6079 = 12U;
	int16_t x6080 = 108;
	volatile uint64_t t64 = 8LLU;

    t64 = (x6077>>(x6078>>(x6079%x6080)));

    if (t64 != 20951701791679LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x6109 = INT8_MAX;
	uint16_t x6110 = 6U;
	uint64_t x6111 = 1LLU;
	int32_t t65 = -1355;

    t65 = (x6109>>(x6110>>(x6111%x6112)));

    if (t65 != 15) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x6313 = UINT16_MAX;
	uint32_t x6314 = 11114U;
	volatile uint16_t x6315 = 27U;
	volatile uint64_t x6316 = UINT64_MAX;
	int32_t t66 = 0;

    t66 = (x6313>>(x6314>>(x6315%x6316)));

    if (t66 != 65535) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x6325 = 1;
	volatile int8_t x6326 = INT8_MAX;
	uint64_t x6327 = UINT64_MAX;
	static volatile int32_t t67 = -1463009;

    t67 = (x6325>>(x6326>>(x6327%x6328)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x6333 = INT16_MAX;
	static int64_t x6336 = -1LL;
	int32_t t68 = -880;

    t68 = (x6333>>(x6334>>(x6335%x6336)));

    if (t68 != 255) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x6349 = INT8_MAX;
	uint8_t x6350 = 5U;
	static int16_t x6351 = 0;
	static int32_t x6352 = -13196;
	int32_t t69 = 976885;

    t69 = (x6349>>(x6350>>(x6351%x6352)));

    if (t69 != 3) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint64_t x6361 = 2LLU;
	uint8_t x6362 = 0U;
	int32_t x6363 = -1;
	uint32_t x6364 = UINT32_MAX;
	volatile uint64_t t70 = 117810736552LLU;

    t70 = (x6361>>(x6362>>(x6363%x6364)));

    if (t70 != 2LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x6377 = 6U;
	static volatile int32_t x6379 = INT32_MAX;
	int16_t x6380 = INT16_MAX;
	int32_t t71 = 30;

    t71 = (x6377>>(x6378>>(x6379%x6380)));

    if (t71 != 6) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x6457 = UINT32_MAX;
	volatile uint8_t x6459 = 12U;
	volatile uint32_t t72 = UINT32_MAX;

    t72 = (x6457>>(x6458>>(x6459%x6460)));

    if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x6541 = 9U;
	int8_t x6542 = 4;
	int32_t x6543 = -1;
	volatile int32_t t73 = 13604396;

    t73 = (x6541>>(x6542>>(x6543%x6544)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint16_t x6681 = 3383U;
	int64_t x6682 = 2242LL;
	int64_t x6683 = INT64_MAX;
	int16_t x6684 = INT16_MAX;
	volatile int32_t t74 = 32903;

    t74 = (x6681>>(x6682>>(x6683%x6684)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x6745 = 33534U;
	volatile int32_t x6746 = 3127;
	volatile uint64_t x6748 = UINT64_MAX;
	volatile uint32_t t75 = 3289U;

    t75 = (x6745>>(x6746>>(x6747%x6748)));

    if (t75 != 4191U) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint64_t x6849 = 411LLU;
	uint64_t x6850 = 243352139834506919LLU;
	uint16_t x6851 = 56U;
	int8_t x6852 = INT8_MAX;
	volatile uint64_t t76 = 0LLU;

    t76 = (x6849>>(x6850>>(x6851%x6852)));

    if (t76 != 51LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x6981 = 4372222438148334LL;
	uint8_t x6982 = UINT8_MAX;
	int8_t x6983 = 14;
	uint16_t x6984 = 7603U;

    t77 = (x6981>>(x6982>>(x6983%x6984)));

    if (t77 != 4372222438148334LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x6993 = 1948U;
	static volatile int16_t x6994 = 993;
	static uint8_t x6995 = 8U;
	int16_t x6996 = INT16_MIN;
	uint32_t t78 = 33031U;

    t78 = (x6993>>(x6994>>(x6995%x6996)));

    if (t78 != 243U) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile uint64_t x7133 = 858743856459LLU;
	int32_t x7134 = 491;
	int16_t x7135 = INT16_MAX;
	int64_t x7136 = 4LL;

    t79 = (x7133>>(x7134>>(x7135%x7136)));

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint8_t x7190 = 2U;
	static int64_t x7191 = INT64_MIN;
	static volatile int32_t t80 = -104106903;

    t80 = (x7189>>(x7190>>(x7191%x7192)));

    if (t80 != 63) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int16_t x7250 = 0;
	int8_t x7251 = 3;
	static int8_t x7252 = INT8_MIN;
	uint32_t t81 = UINT32_MAX;

    t81 = (x7249>>(x7250>>(x7251%x7252)));

    if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x7265 = 345404298374586936LLU;
	int8_t x7266 = 2;
	int16_t x7267 = 6;
	uint8_t x7268 = 40U;
	uint64_t t82 = 1366867675893865LLU;

    t82 = (x7265>>(x7266>>(x7267%x7268)));

    if (t82 != 345404298374586936LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint64_t x7549 = 3LLU;
	uint64_t x7551 = UINT64_MAX;
	static uint32_t x7552 = 9840U;

    t83 = (x7549>>(x7550>>(x7551%x7552)));

    if (t83 != 3LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x7849 = 473LL;
	volatile int16_t x7851 = 27;
	int64_t x7852 = INT64_MAX;
	int64_t t84 = 1427427624936528010LL;

    t84 = (x7849>>(x7850>>(x7851%x7852)));

    if (t84 != 473LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x8021 = UINT32_MAX;
	uint8_t x8022 = 50U;
	int8_t x8023 = 3;
	int64_t x8024 = -331240513009247LL;

    t85 = (x8021>>(x8022>>(x8023%x8024)));

    if (t85 != 67108863U) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x8041 = INT16_MAX;
	uint8_t x8042 = 0U;
	int64_t x8043 = INT64_MAX;

    t86 = (x8041>>(x8042>>(x8043%x8044)));

    if (t86 != 32767) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x8177 = INT32_MAX;
	static uint16_t x8178 = 2U;
	static uint16_t x8179 = 1U;
	static int16_t x8180 = INT16_MIN;

    t87 = (x8177>>(x8178>>(x8179%x8180)));

    if (t87 != 1073741823) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x8237 = 35020LLU;
	static uint8_t x8238 = 18U;
	int64_t x8239 = -28398272567590551LL;
	int16_t x8240 = 3;
	volatile uint64_t t88 = 2LLU;

    t88 = (x8237>>(x8238>>(x8239%x8240)));

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x8301 = 16;
	volatile int32_t t89 = -5936316;

    t89 = (x8301>>(x8302>>(x8303%x8304)));

    if (t89 != 16) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x8305 = UINT64_MAX;
	volatile int8_t x8306 = 13;
	uint64_t x8307 = 714621865401LLU;
	static uint8_t x8308 = 12U;

    t90 = (x8305>>(x8306>>(x8307%x8308)));

    if (t90 != UINT64_MAX) { NG(); } else { ; }
	
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


    return 0;
}

