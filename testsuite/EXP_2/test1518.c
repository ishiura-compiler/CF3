
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

static uint32_t x73 = UINT32_MAX;
volatile uint32_t t0 = UINT32_MAX;
uint64_t t2 = 1LLU;
volatile int8_t x495 = INT8_MAX;
int16_t x525 = INT16_MAX;
int32_t x545 = 6;
int16_t x546 = INT16_MAX;
int64_t x582 = INT64_MAX;
uint32_t x661 = UINT32_MAX;
uint16_t x677 = 1U;
int8_t x680 = 13;
static volatile int32_t t9 = -15377;
static int64_t x705 = 195332281194015722LL;
uint16_t x708 = 0U;
int16_t x720 = 42;
uint16_t x760 = 3U;
uint16_t x794 = UINT16_MAX;
uint8_t x1117 = 1U;
uint16_t x1146 = UINT16_MAX;
int8_t x1148 = 4;
uint32_t x1167 = UINT32_MAX;
static int16_t x1264 = 13;
int64_t x1278 = -1668544812458415100LL;
static int16_t x1280 = 4;
int16_t x1301 = INT16_MAX;
int16_t x1304 = 0;
static int32_t t22 = 446;
static uint8_t x1448 = 13U;
volatile int32_t t23 = -586565;
volatile int64_t x1847 = INT64_MIN;
volatile uint16_t x1908 = 2U;
int64_t x2043 = -1LL;
int8_t x2430 = 0;
int8_t x2431 = INT8_MIN;
int32_t x2559 = INT32_MIN;
int16_t x2562 = 1;
volatile int16_t x2659 = INT16_MAX;
int8_t x2660 = 0;
int32_t x2795 = -1042441380;
volatile uint64_t t36 = 30557LLU;
volatile int16_t x2913 = INT16_MAX;
volatile uint64_t x3061 = 235LLU;
uint32_t x3063 = 2380U;
volatile int8_t x3064 = 14;
static volatile int32_t x3113 = 52491;
int64_t x3114 = -1LL;
volatile int32_t x3115 = -35060765;
int8_t x3134 = INT8_MIN;
uint64_t x3136 = 0LLU;
uint32_t x3266 = UINT32_MAX;
uint32_t x3268 = 15U;
int32_t t45 = -98607585;
volatile uint32_t x3287 = 1576607U;
int32_t t50 = -309;
static int16_t x3653 = 648;
int8_t x3656 = 1;
volatile int16_t x3747 = -6928;
static int16_t x4061 = 0;
static int32_t t61 = 343378787;
volatile uint64_t x4279 = 188241231LLU;


void f0(void) {
    	static volatile int8_t x74 = 3;
	volatile int8_t x75 = INT8_MIN;
	int16_t x76 = 0;

    t0 = ((x73>>(x74==x75))<<x76);

    if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x81 = 441970637;
	int32_t x82 = INT32_MIN;
	int64_t x83 = INT64_MIN;
	int16_t x84 = 1;
	volatile int32_t t1 = 0;

    t1 = ((x81>>(x82==x83))<<x84);

    if (t1 != 883941274) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x309 = 273168717LLU;
	static int8_t x310 = INT8_MIN;
	int16_t x311 = INT16_MAX;
	volatile int8_t x312 = 1;

    t2 = ((x309>>(x310==x311))<<x312);

    if (t2 != 546337434LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x425 = UINT64_MAX;
	int8_t x426 = 1;
	volatile int16_t x427 = -218;
	uint8_t x428 = 38U;
	static volatile uint64_t t3 = 1232890555LLU;

    t3 = ((x425>>(x426==x427))<<x428);

    if (t3 != 18446743798831644672LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x493 = 81U;
	uint64_t x494 = 12465269697LLU;
	uint8_t x496 = 3U;
	static uint32_t t4 = 307U;

    t4 = ((x493>>(x494==x495))<<x496);

    if (t4 != 648U) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x526 = INT64_MIN;
	uint16_t x527 = 1U;
	uint16_t x528 = 2U;
	static int32_t t5 = -29504085;

    t5 = ((x525>>(x526==x527))<<x528);

    if (t5 != 131068) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x547 = 205U;
	uint32_t x548 = 26U;
	static volatile int32_t t6 = 2591;

    t6 = ((x545>>(x546==x547))<<x548);

    if (t6 != 402653184) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint32_t x581 = 44U;
	static uint32_t x583 = UINT32_MAX;
	static volatile uint8_t x584 = 24U;
	static volatile uint32_t t7 = 132074660U;

    t7 = ((x581>>(x582==x583))<<x584);

    if (t7 != 738197504U) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x662 = 53;
	uint16_t x663 = 1U;
	uint16_t x664 = 1U;
	volatile uint32_t t8 = 6U;

    t8 = ((x661>>(x662==x663))<<x664);

    if (t8 != 4294967294U) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile uint16_t x678 = 7217U;
	uint16_t x679 = 2U;

    t9 = ((x677>>(x678==x679))<<x680);

    if (t9 != 8192) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x681 = 1;
	int16_t x682 = INT16_MIN;
	int64_t x683 = INT64_MIN;
	static uint8_t x684 = 7U;
	volatile int32_t t10 = 164101;

    t10 = ((x681>>(x682==x683))<<x684);

    if (t10 != 128) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x706 = 513714;
	static int32_t x707 = 42379708;
	static volatile int64_t t11 = 1LL;

    t11 = ((x705>>(x706==x707))<<x708);

    if (t11 != 195332281194015722LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x717 = 44028LL;
	int8_t x718 = INT8_MIN;
	int32_t x719 = -1;
	volatile int64_t t12 = -749057LL;

    t12 = ((x717>>(x718==x719))<<x720);

    if (t12 != 193637191790886912LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x757 = 5266U;
	static int64_t x758 = -1LL;
	int64_t x759 = INT64_MAX;
	volatile int32_t t13 = 155773098;

    t13 = ((x757>>(x758==x759))<<x760);

    if (t13 != 42128) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x793 = 19;
	static volatile int64_t x795 = INT64_MIN;
	static uint8_t x796 = 4U;
	static volatile int32_t t14 = -16101720;

    t14 = ((x793>>(x794==x795))<<x796);

    if (t14 != 304) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x1118 = 0U;
	volatile uint16_t x1119 = UINT16_MAX;
	int8_t x1120 = 17;
	static volatile int32_t t15 = 976060236;

    t15 = ((x1117>>(x1118==x1119))<<x1120);

    if (t15 != 131072) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x1145 = 185U;
	static int64_t x1147 = 103057916LL;
	volatile int32_t t16 = 8658;

    t16 = ((x1145>>(x1146==x1147))<<x1148);

    if (t16 != 2960) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x1165 = 35;
	uint32_t x1166 = 1U;
	static volatile uint64_t x1168 = 25LLU;
	volatile int32_t t17 = -10507940;

    t17 = ((x1165>>(x1166==x1167))<<x1168);

    if (t17 != 1174405120) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x1201 = UINT8_MAX;
	int64_t x1202 = 55867590691778LL;
	int16_t x1203 = INT16_MIN;
	volatile uint8_t x1204 = 6U;
	int32_t t18 = -7478705;

    t18 = ((x1201>>(x1202==x1203))<<x1204);

    if (t18 != 16320) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x1261 = 184U;
	static int64_t x1262 = -163961537988804193LL;
	int32_t x1263 = INT32_MIN;
	volatile int32_t t19 = 7;

    t19 = ((x1261>>(x1262==x1263))<<x1264);

    if (t19 != 1507328) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x1277 = 0;
	static int32_t x1279 = INT32_MAX;
	volatile int32_t t20 = -180862;

    t20 = ((x1277>>(x1278==x1279))<<x1280);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile uint8_t x1297 = UINT8_MAX;
	int32_t x1298 = -96079804;
	uint16_t x1299 = 25U;
	static volatile uint8_t x1300 = 3U;
	static int32_t t21 = -193204452;

    t21 = ((x1297>>(x1298==x1299))<<x1300);

    if (t21 != 2040) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x1302 = INT8_MAX;
	uint64_t x1303 = 587706975852804856LLU;

    t22 = ((x1301>>(x1302==x1303))<<x1304);

    if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x1445 = 3;
	int32_t x1446 = INT32_MIN;
	int16_t x1447 = 1;

    t23 = ((x1445>>(x1446==x1447))<<x1448);

    if (t23 != 24576) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x1845 = 1;
	int32_t x1846 = INT32_MIN;
	int8_t x1848 = 19;
	int32_t t24 = 282;

    t24 = ((x1845>>(x1846==x1847))<<x1848);

    if (t24 != 524288) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x1905 = 1;
	int8_t x1906 = INT8_MIN;
	volatile int8_t x1907 = -13;
	int32_t t25 = 16055;

    t25 = ((x1905>>(x1906==x1907))<<x1908);

    if (t25 != 4) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x2021 = 13;
	int64_t x2022 = 3700256356LL;
	static int8_t x2023 = INT8_MIN;
	static int16_t x2024 = 13;
	static int32_t t26 = 1549;

    t26 = ((x2021>>(x2022==x2023))<<x2024);

    if (t26 != 106496) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x2041 = INT8_MAX;
	int32_t x2042 = 76722;
	uint32_t x2044 = 0U;
	volatile int32_t t27 = -822079;

    t27 = ((x2041>>(x2042==x2043))<<x2044);

    if (t27 != 127) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x2065 = INT8_MAX;
	int64_t x2066 = INT64_MIN;
	int64_t x2067 = -232814LL;
	volatile uint32_t x2068 = 5U;
	volatile int32_t t28 = -16940438;

    t28 = ((x2065>>(x2066==x2067))<<x2068);

    if (t28 != 4064) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint64_t x2105 = 1LLU;
	volatile int8_t x2106 = INT8_MIN;
	int8_t x2107 = -7;
	static uint16_t x2108 = 23U;
	uint64_t t29 = 970283086306639350LLU;

    t29 = ((x2105>>(x2106==x2107))<<x2108);

    if (t29 != 8388608LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x2237 = 223503825397063LLU;
	uint64_t x2238 = 1142LLU;
	int64_t x2239 = INT64_MAX;
	static uint16_t x2240 = 4U;
	volatile uint64_t t30 = 15564042263646941LLU;

    t30 = ((x2237>>(x2238==x2239))<<x2240);

    if (t30 != 3576061206353008LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x2429 = INT8_MAX;
	static uint32_t x2432 = 16U;
	int32_t t31 = -62;

    t31 = ((x2429>>(x2430==x2431))<<x2432);

    if (t31 != 8323072) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x2557 = INT16_MAX;
	static int32_t x2558 = INT32_MAX;
	uint32_t x2560 = 0U;
	int32_t t32 = 6273339;

    t32 = ((x2557>>(x2558==x2559))<<x2560);

    if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x2561 = 37183840U;
	volatile uint8_t x2563 = 2U;
	uint16_t x2564 = 19U;
	uint32_t t33 = 71U;

    t33 = ((x2561>>(x2562==x2563))<<x2564);

    if (t33 != 184549376U) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint8_t x2657 = 105U;
	uint64_t x2658 = UINT64_MAX;
	static volatile int32_t t34 = 0;

    t34 = ((x2657>>(x2658==x2659))<<x2660);

    if (t34 != 105) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint64_t x2793 = 254515607LLU;
	static int64_t x2794 = -4275084308993154LL;
	static volatile uint8_t x2796 = 5U;
	uint64_t t35 = 1LLU;

    t35 = ((x2793>>(x2794==x2795))<<x2796);

    if (t35 != 8144499424LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x2797 = UINT64_MAX;
	int8_t x2798 = INT8_MIN;
	static int32_t x2799 = -1;
	uint16_t x2800 = 11U;

    t36 = ((x2797>>(x2798==x2799))<<x2800);

    if (t36 != 18446744073709549568LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x2805 = 1;
	volatile int32_t x2806 = INT32_MIN;
	int8_t x2807 = -1;
	uint64_t x2808 = 2LLU;
	static volatile int32_t t37 = -1;

    t37 = ((x2805>>(x2806==x2807))<<x2808);

    if (t37 != 4) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint32_t x2893 = 70683417U;
	static uint8_t x2894 = UINT8_MAX;
	int32_t x2895 = -4670861;
	int16_t x2896 = 0;
	uint32_t t38 = 125U;

    t38 = ((x2893>>(x2894==x2895))<<x2896);

    if (t38 != 70683417U) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x2914 = UINT32_MAX;
	int8_t x2915 = 2;
	int8_t x2916 = 1;
	volatile int32_t t39 = -211415;

    t39 = ((x2913>>(x2914==x2915))<<x2916);

    if (t39 != 65534) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x3062 = 3223418LLU;
	uint64_t t40 = 5687LLU;

    t40 = ((x3061>>(x3062==x3063))<<x3064);

    if (t40 != 3850240LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint8_t x3089 = 1U;
	uint64_t x3090 = UINT64_MAX;
	static int64_t x3091 = 12LL;
	volatile int8_t x3092 = 0;
	volatile int32_t t41 = 91;

    t41 = ((x3089>>(x3090==x3091))<<x3092);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x3116 = 5U;
	int32_t t42 = -3846168;

    t42 = ((x3113>>(x3114==x3115))<<x3116);

    if (t42 != 1679712) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x3133 = INT32_MAX;
	int8_t x3135 = INT8_MAX;
	volatile int32_t t43 = INT32_MAX;

    t43 = ((x3133>>(x3134==x3135))<<x3136);

    if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x3137 = INT8_MAX;
	static uint32_t x3138 = 47326U;
	volatile int64_t x3139 = INT64_MAX;
	volatile int32_t x3140 = 1;
	volatile int32_t t44 = 1;

    t44 = ((x3137>>(x3138==x3139))<<x3140);

    if (t44 != 254) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x3265 = INT16_MAX;
	int8_t x3267 = INT8_MIN;

    t45 = ((x3265>>(x3266==x3267))<<x3268);

    if (t45 != 1073709056) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x3285 = 5U;
	int64_t x3286 = INT64_MIN;
	uint16_t x3288 = 6U;
	volatile int32_t t46 = 195620;

    t46 = ((x3285>>(x3286==x3287))<<x3288);

    if (t46 != 320) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x3357 = 1249;
	int16_t x3358 = -1;
	int32_t x3359 = 4359606;
	uint16_t x3360 = 2U;
	int32_t t47 = -634479;

    t47 = ((x3357>>(x3358==x3359))<<x3360);

    if (t47 != 4996) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x3373 = 1063366332060430266LLU;
	volatile int8_t x3374 = -1;
	int32_t x3375 = 3;
	uint8_t x3376 = 2U;
	uint64_t t48 = 53642LLU;

    t48 = ((x3373>>(x3374==x3375))<<x3376);

    if (t48 != 4253465328241721064LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int8_t x3413 = 1;
	uint32_t x3414 = 93U;
	int16_t x3415 = INT16_MIN;
	volatile int16_t x3416 = 30;
	volatile int32_t t49 = 1;

    t49 = ((x3413>>(x3414==x3415))<<x3416);

    if (t49 != 1073741824) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x3445 = UINT16_MAX;
	uint64_t x3446 = UINT64_MAX;
	static int8_t x3447 = 1;
	int32_t x3448 = 3;

    t50 = ((x3445>>(x3446==x3447))<<x3448);

    if (t50 != 524280) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x3485 = 326394;
	uint16_t x3486 = 12655U;
	int32_t x3487 = INT32_MIN;
	static int8_t x3488 = 3;
	volatile int32_t t51 = -5869679;

    t51 = ((x3485>>(x3486==x3487))<<x3488);

    if (t51 != 2611152) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t x3577 = 656;
	int8_t x3578 = INT8_MAX;
	uint8_t x3579 = 3U;
	uint16_t x3580 = 0U;
	int32_t t52 = -874;

    t52 = ((x3577>>(x3578==x3579))<<x3580);

    if (t52 != 656) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x3649 = 456U;
	int8_t x3650 = -1;
	uint16_t x3651 = 2238U;
	volatile int8_t x3652 = 1;
	volatile int32_t t53 = 12981714;

    t53 = ((x3649>>(x3650==x3651))<<x3652);

    if (t53 != 912) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x3654 = 85U;
	uint64_t x3655 = 16642198635290LLU;
	volatile int32_t t54 = -14526829;

    t54 = ((x3653>>(x3654==x3655))<<x3656);

    if (t54 != 1296) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x3745 = INT8_MAX;
	int16_t x3746 = -3678;
	uint32_t x3748 = 0U;
	volatile int32_t t55 = -25;

    t55 = ((x3745>>(x3746==x3747))<<x3748);

    if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint64_t x3793 = 3797417096454382970LLU;
	volatile uint32_t x3794 = UINT32_MAX;
	static int16_t x3795 = 7252;
	uint8_t x3796 = 16U;
	volatile uint64_t t56 = 35275563918077043LLU;

    t56 = ((x3793>>(x3794==x3795))<<x3796);

    if (t56 != 2502534818881470464LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x3961 = UINT16_MAX;
	int8_t x3962 = INT8_MIN;
	uint32_t x3963 = 82312U;
	uint32_t x3964 = 0U;
	int32_t t57 = 0;

    t57 = ((x3961>>(x3962==x3963))<<x3964);

    if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint32_t x4053 = 1607049420U;
	uint32_t x4054 = 1610420U;
	int32_t x4055 = INT32_MIN;
	int8_t x4056 = 26;
	volatile uint32_t t58 = 30662U;

    t58 = ((x4053>>(x4054==x4055))<<x4056);

    if (t58 != 805306368U) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x4062 = INT64_MIN;
	int64_t x4063 = -1LL;
	static uint64_t x4064 = 0LLU;
	int32_t t59 = 6;

    t59 = ((x4061>>(x4062==x4063))<<x4064);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x4097 = INT32_MAX;
	uint8_t x4098 = UINT8_MAX;
	int16_t x4099 = -1;
	volatile uint64_t x4100 = 0LLU;
	int32_t t60 = INT32_MAX;

    t60 = ((x4097>>(x4098==x4099))<<x4100);

    if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x4253 = 1U;
	volatile int64_t x4254 = INT64_MIN;
	int64_t x4255 = -24594601860LL;
	int16_t x4256 = 4;

    t61 = ((x4253>>(x4254==x4255))<<x4256);

    if (t61 != 16) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x4277 = 9;
	static uint8_t x4278 = 14U;
	volatile int16_t x4280 = 0;
	int32_t t62 = -3163;

    t62 = ((x4277>>(x4278==x4279))<<x4280);

    if (t62 != 9) { NG(); } else { ; }
	
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


    return 0;
}

