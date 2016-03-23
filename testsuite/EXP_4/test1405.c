
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

static uint32_t x176 = UINT32_MAX;
uint32_t x526 = 14U;
volatile int8_t x527 = -1;
int64_t x638 = INT64_MIN;
volatile int64_t t4 = 1054378523804464LL;
int16_t x829 = INT16_MIN;
volatile uint8_t x830 = UINT8_MAX;
int32_t x1016 = INT32_MIN;
int64_t x1194 = INT64_MAX;
int64_t x1401 = 90726LL;
int8_t x1530 = -1;
volatile int32_t t11 = 354;
static int64_t x1665 = INT64_MAX;
int64_t x1668 = -1LL;
volatile int32_t x2033 = -225;
uint32_t x2035 = UINT32_MAX;
volatile int8_t x2153 = -1;
volatile uint64_t t15 = 19333450429284LLU;
int32_t x2276 = -1;
int32_t x2289 = 44085;
int8_t x2291 = INT8_MAX;
static int64_t x2486 = -1LL;
uint16_t x2673 = 2497U;
int32_t x2674 = 2;
int64_t x2799 = -1LL;
volatile int64_t t22 = 98128LL;
uint64_t x2917 = UINT64_MAX;
int8_t x2946 = INT8_MIN;
int16_t x3015 = INT16_MAX;
static uint64_t x3401 = 348LLU;
volatile int64_t x3404 = INT64_MIN;
int64_t x3658 = -1LL;
volatile uint64_t x3660 = UINT64_MAX;
static uint16_t x3669 = UINT16_MAX;
uint64_t x3671 = UINT64_MAX;
int32_t t32 = 76650938;
int8_t x3736 = -1;
int8_t x3811 = -1;
volatile int64_t x4008 = -1LL;
uint8_t x4085 = UINT8_MAX;
uint32_t x4218 = 69U;
int32_t x4227 = INT32_MIN;
int16_t x4289 = INT16_MIN;
uint64_t x4398 = 8570404711058LLU;
volatile uint8_t x4457 = 0U;
int32_t x4458 = -4405;
int64_t x4459 = -1LL;
uint8_t x4485 = 109U;
int64_t x4488 = INT64_MIN;
int64_t x4542 = INT64_MAX;
uint32_t x4652 = UINT32_MAX;
static int8_t x4731 = INT8_MIN;
int8_t x4732 = INT8_MIN;
volatile uint16_t x4745 = 647U;
static volatile int16_t x4927 = -1;
int16_t x5098 = -1;
int32_t t53 = -3030607;
int16_t x5169 = INT16_MAX;
int8_t x5170 = -1;
volatile int64_t t56 = 28892140022LL;
uint64_t x5288 = UINT64_MAX;
uint64_t x5290 = UINT64_MAX;
int64_t x5463 = INT64_MAX;
static int64_t x5464 = INT64_MAX;
int64_t t60 = -649110329LL;
int8_t x5469 = -14;
uint8_t x5564 = UINT8_MAX;
int64_t x5646 = INT64_MIN;
volatile int32_t t65 = 8082237;
volatile int32_t t66 = -3384;
int8_t x6018 = INT8_MAX;
int8_t x6019 = -1;
int16_t x6043 = INT16_MIN;
volatile int64_t t69 = 170966983003LL;
int64_t t71 = 382844LL;
uint64_t x6585 = UINT64_MAX;
volatile int64_t x6586 = 7212707958223LL;
int32_t x6676 = -1;
uint8_t x6693 = UINT8_MAX;
int32_t x6694 = INT32_MIN;
static volatile int32_t t75 = 2378;
uint16_t x6866 = 489U;
static volatile int32_t x6870 = 18;
static volatile int32_t t77 = 68016764;
int16_t x6881 = INT16_MAX;
uint64_t x6883 = UINT64_MAX;
int32_t t79 = 39188;
int64_t t80 = -488313LL;


void f0(void) {
    	volatile int64_t x173 = INT64_MAX;
	int8_t x174 = 1;
	int32_t x175 = -1;
	volatile int64_t t0 = 1067108981874867LL;

    t0 = (x173%(x174*(x175==x176)));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x445 = UINT64_MAX;
	int32_t x446 = INT32_MIN;
	static int64_t x447 = INT64_MIN;
	int64_t x448 = INT64_MIN;
	volatile uint64_t t1 = 2608LLU;

    t1 = (x445%(x446*(x447==x448)));

    if (t1 != 2147483647LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x485 = INT16_MAX;
	int64_t x486 = -911594927401LL;
	uint32_t x487 = UINT32_MAX;
	int16_t x488 = -1;
	int64_t t2 = -2LL;

    t2 = (x485%(x486*(x487==x488)));

    if (t2 != 32767LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x525 = 42;
	int32_t x528 = -1;
	volatile uint32_t t3 = 6725U;

    t3 = (x525%(x526*(x527==x528)));

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x637 = -1;
	uint32_t x639 = UINT32_MAX;
	uint32_t x640 = UINT32_MAX;

    t4 = (x637%(x638*(x639==x640)));

    if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x831 = -1;
	int64_t x832 = -1LL;
	int32_t t5 = 62775;

    t5 = (x829%(x830*(x831==x832)));

    if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x1013 = INT8_MIN;
	int8_t x1014 = -1;
	int32_t x1015 = INT32_MIN;
	int32_t t6 = -21144;

    t6 = (x1013%(x1014*(x1015==x1016)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x1137 = UINT32_MAX;
	static int16_t x1138 = -1;
	int16_t x1139 = -1;
	static int8_t x1140 = -1;
	static volatile uint32_t t7 = 8U;

    t7 = (x1137%(x1138*(x1139==x1140)));

    if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x1193 = INT8_MAX;
	volatile int16_t x1195 = 0;
	volatile uint8_t x1196 = 0U;
	volatile int64_t t8 = 255366LL;

    t8 = (x1193%(x1194*(x1195==x1196)));

    if (t8 != 127LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x1309 = 88U;
	static uint8_t x1310 = 96U;
	int32_t x1311 = -1;
	int64_t x1312 = -1LL;
	int32_t t9 = -95366;

    t9 = (x1309%(x1310*(x1311==x1312)));

    if (t9 != 88) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x1402 = UINT16_MAX;
	uint64_t x1403 = UINT64_MAX;
	uint64_t x1404 = UINT64_MAX;
	int64_t t10 = 9885460504372LL;

    t10 = (x1401%(x1402*(x1403==x1404)));

    if (t10 != 25191LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int16_t x1529 = -1;
	int64_t x1531 = -1LL;
	int64_t x1532 = -1LL;

    t11 = (x1529%(x1530*(x1531==x1532)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int32_t x1666 = 772886575;
	static int32_t x1667 = -1;
	volatile int64_t t12 = -3349806044837127605LL;

    t12 = (x1665%(x1666*(x1667==x1668)));

    if (t12 != 278198657LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x2034 = -46374515;
	static int32_t x2036 = -1;
	int32_t t13 = -2250;

    t13 = (x2033%(x2034*(x2035==x2036)));

    if (t13 != -225) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x2154 = -1;
	int64_t x2155 = INT64_MAX;
	int64_t x2156 = INT64_MAX;
	int32_t t14 = 346581439;

    t14 = (x2153%(x2154*(x2155==x2156)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x2241 = 12899LLU;
	int32_t x2242 = INT32_MIN;
	static int8_t x2243 = -1;
	uint32_t x2244 = UINT32_MAX;

    t15 = (x2241%(x2242*(x2243==x2244)));

    if (t15 != 12899LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x2273 = 2036U;
	uint32_t x2274 = 11461170U;
	uint64_t x2275 = UINT64_MAX;
	volatile uint32_t t16 = 32600816U;

    t16 = (x2273%(x2274*(x2275==x2276)));

    if (t16 != 2036U) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x2290 = 121;
	int8_t x2292 = INT8_MAX;
	int32_t t17 = -111089026;

    t17 = (x2289%(x2290*(x2291==x2292)));

    if (t17 != 41) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x2317 = INT16_MAX;
	volatile int32_t x2318 = INT32_MIN;
	int8_t x2319 = -1;
	int32_t x2320 = -1;
	static volatile int32_t t18 = -368;

    t18 = (x2317%(x2318*(x2319==x2320)));

    if (t18 != 32767) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x2469 = INT16_MIN;
	static int64_t x2470 = -1LL;
	int8_t x2471 = INT8_MIN;
	static volatile int8_t x2472 = INT8_MIN;
	volatile int64_t t19 = -1984LL;

    t19 = (x2469%(x2470*(x2471==x2472)));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x2485 = 2924109389282422118LLU;
	static int8_t x2487 = INT8_MIN;
	int8_t x2488 = INT8_MIN;
	uint64_t t20 = 7307701693832514191LLU;

    t20 = (x2485%(x2486*(x2487==x2488)));

    if (t20 != 2924109389282422118LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int8_t x2675 = -1;
	uint32_t x2676 = UINT32_MAX;
	int32_t t21 = -2051673;

    t21 = (x2673%(x2674*(x2675==x2676)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x2797 = -6;
	int64_t x2798 = INT64_MIN;
	volatile int32_t x2800 = -1;

    t22 = (x2797%(x2798*(x2799==x2800)));

    if (t22 != -6LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int16_t x2881 = 4678;
	static uint32_t x2882 = 837U;
	uint32_t x2883 = UINT32_MAX;
	volatile int16_t x2884 = -1;
	static uint32_t t23 = 10645U;

    t23 = (x2881%(x2882*(x2883==x2884)));

    if (t23 != 493U) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x2918 = INT32_MIN;
	volatile int32_t x2919 = INT32_MIN;
	int32_t x2920 = INT32_MIN;
	volatile uint64_t t24 = 169LLU;

    t24 = (x2917%(x2918*(x2919==x2920)));

    if (t24 != 2147483647LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x2945 = 28LLU;
	volatile int32_t x2947 = -1;
	int64_t x2948 = -1LL;
	volatile uint64_t t25 = 14LLU;

    t25 = (x2945%(x2946*(x2947==x2948)));

    if (t25 != 28LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x3013 = -1LL;
	uint16_t x3014 = 1U;
	int16_t x3016 = INT16_MAX;
	volatile int64_t t26 = 16890297276689682LL;

    t26 = (x3013%(x3014*(x3015==x3016)));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint16_t x3025 = 2U;
	volatile uint32_t x3026 = 9456534U;
	uint8_t x3027 = UINT8_MAX;
	uint8_t x3028 = UINT8_MAX;
	static uint32_t t27 = 2021U;

    t27 = (x3025%(x3026*(x3027==x3028)));

    if (t27 != 2U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x3137 = 656741825743LLU;
	int32_t x3138 = -1;
	int8_t x3139 = -1;
	int32_t x3140 = -1;
	uint64_t t28 = 13672233LLU;

    t28 = (x3137%(x3138*(x3139==x3140)));

    if (t28 != 656741825743LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint16_t x3402 = UINT16_MAX;
	int64_t x3403 = INT64_MIN;
	volatile uint64_t t29 = 479526451398906983LLU;

    t29 = (x3401%(x3402*(x3403==x3404)));

    if (t29 != 348LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x3569 = -40;
	int8_t x3570 = INT8_MAX;
	volatile uint32_t x3571 = UINT32_MAX;
	int32_t x3572 = -1;
	int32_t t30 = -22;

    t30 = (x3569%(x3570*(x3571==x3572)));

    if (t30 != -40) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x3657 = 16;
	int8_t x3659 = -1;
	volatile int64_t t31 = -13437376859LL;

    t31 = (x3657%(x3658*(x3659==x3660)));

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x3670 = INT32_MIN;
	int32_t x3672 = -1;

    t32 = (x3669%(x3670*(x3671==x3672)));

    if (t32 != 65535) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x3697 = INT16_MIN;
	static uint32_t x3698 = UINT32_MAX;
	uint8_t x3699 = 30U;
	static volatile int32_t x3700 = 30;
	volatile uint32_t t33 = 1435711U;

    t33 = (x3697%(x3698*(x3699==x3700)));

    if (t33 != 4294934528U) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x3733 = INT32_MAX;
	int32_t x3734 = INT32_MAX;
	static int32_t x3735 = -1;
	volatile int32_t t34 = 1073382262;

    t34 = (x3733%(x3734*(x3735==x3736)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x3737 = -1;
	uint16_t x3738 = 12U;
	int32_t x3739 = INT32_MIN;
	int32_t x3740 = INT32_MIN;
	static volatile int32_t t35 = 510922107;

    t35 = (x3737%(x3738*(x3739==x3740)));

    if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x3809 = INT64_MIN;
	static int8_t x3810 = INT8_MIN;
	int64_t x3812 = -1LL;
	static volatile int64_t t36 = -1280176715LL;

    t36 = (x3809%(x3810*(x3811==x3812)));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x4005 = 44506966150418312LLU;
	uint32_t x4006 = 3735U;
	int8_t x4007 = -1;
	static uint64_t t37 = 3091312LLU;

    t37 = (x4005%(x4006*(x4007==x4008)));

    if (t37 != 1262LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x4025 = -1LL;
	uint32_t x4026 = UINT32_MAX;
	int8_t x4027 = -1;
	volatile int8_t x4028 = -1;
	static int64_t t38 = -312141741938422967LL;

    t38 = (x4025%(x4026*(x4027==x4028)));

    if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x4086 = 21;
	int64_t x4087 = -1LL;
	int8_t x4088 = -1;
	volatile int32_t t39 = -1;

    t39 = (x4085%(x4086*(x4087==x4088)));

    if (t39 != 3) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x4217 = INT16_MAX;
	static int8_t x4219 = -1;
	static int16_t x4220 = -1;
	static uint32_t t40 = 463871106U;

    t40 = (x4217%(x4218*(x4219==x4220)));

    if (t40 != 61U) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x4225 = 4376U;
	volatile uint16_t x4226 = 46U;
	static int32_t x4228 = INT32_MIN;
	int32_t t41 = -1488757;

    t41 = (x4225%(x4226*(x4227==x4228)));

    if (t41 != 6) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x4290 = 40;
	static int8_t x4291 = -1;
	static uint64_t x4292 = UINT64_MAX;
	volatile int32_t t42 = 4557;

    t42 = (x4289%(x4290*(x4291==x4292)));

    if (t42 != -8) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x4397 = 17;
	int64_t x4399 = -1LL;
	int16_t x4400 = -1;
	volatile uint64_t t43 = 1433850LLU;

    t43 = (x4397%(x4398*(x4399==x4400)));

    if (t43 != 17LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x4460 = -1;
	static volatile int32_t t44 = -11;

    t44 = (x4457%(x4458*(x4459==x4460)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int64_t x4486 = -124467720454743LL;
	int64_t x4487 = INT64_MIN;
	static int64_t t45 = 351255597LL;

    t45 = (x4485%(x4486*(x4487==x4488)));

    if (t45 != 109LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int64_t x4541 = -30185278LL;
	volatile int64_t x4543 = -1LL;
	volatile int8_t x4544 = -1;
	int64_t t46 = -292389794LL;

    t46 = (x4541%(x4542*(x4543==x4544)));

    if (t46 != -30185278LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x4557 = INT32_MAX;
	int64_t x4558 = -983LL;
	static int32_t x4559 = -1;
	uint32_t x4560 = UINT32_MAX;
	volatile int64_t t47 = -3491LL;

    t47 = (x4557%(x4558*(x4559==x4560)));

    if (t47 != 221LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x4649 = -1;
	int8_t x4650 = -2;
	int32_t x4651 = -1;
	volatile int32_t t48 = 108;

    t48 = (x4649%(x4650*(x4651==x4652)));

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint16_t x4729 = 2U;
	uint64_t x4730 = 33507040LLU;
	uint64_t t49 = 153898169352442156LLU;

    t49 = (x4729%(x4730*(x4731==x4732)));

    if (t49 != 2LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x4746 = INT8_MAX;
	volatile int16_t x4747 = -1;
	uint64_t x4748 = UINT64_MAX;
	volatile int32_t t50 = 1737494;

    t50 = (x4745%(x4746*(x4747==x4748)));

    if (t50 != 12) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x4925 = INT16_MAX;
	volatile int32_t x4926 = INT32_MIN;
	volatile int16_t x4928 = -1;
	int32_t t51 = 9;

    t51 = (x4925%(x4926*(x4927==x4928)));

    if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x4969 = -1;
	volatile int8_t x4970 = INT8_MIN;
	static uint64_t x4971 = UINT64_MAX;
	int16_t x4972 = -1;
	static volatile int32_t t52 = 212;

    t52 = (x4969%(x4970*(x4971==x4972)));

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x5097 = 4;
	volatile int8_t x5099 = -1;
	int8_t x5100 = -1;

    t53 = (x5097%(x5098*(x5099==x5100)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x5171 = -1;
	uint64_t x5172 = UINT64_MAX;
	volatile int32_t t54 = 795127892;

    t54 = (x5169%(x5170*(x5171==x5172)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x5201 = INT8_MIN;
	uint16_t x5202 = 9605U;
	int32_t x5203 = INT32_MIN;
	int32_t x5204 = INT32_MIN;
	int32_t t55 = -49457953;

    t55 = (x5201%(x5202*(x5203==x5204)));

    if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
    	static int64_t x5245 = 438681693426LL;
	static uint8_t x5246 = 4U;
	uint64_t x5247 = UINT64_MAX;
	int16_t x5248 = -1;

    t56 = (x5245%(x5246*(x5247==x5248)));

    if (t56 != 2LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int32_t x5285 = -1;
	uint64_t x5286 = UINT64_MAX;
	static int32_t x5287 = -1;
	volatile uint64_t t57 = 6173017068249089LLU;

    t57 = (x5285%(x5286*(x5287==x5288)));

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x5289 = -5;
	int64_t x5291 = INT64_MIN;
	int64_t x5292 = INT64_MIN;
	uint64_t t58 = 35711037352LLU;

    t58 = (x5289%(x5290*(x5291==x5292)));

    if (t58 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x5437 = INT8_MAX;
	static int32_t x5438 = INT32_MAX;
	volatile int16_t x5439 = -1;
	static volatile int16_t x5440 = -1;
	volatile int32_t t59 = -209;

    t59 = (x5437%(x5438*(x5439==x5440)));

    if (t59 != 127) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x5461 = INT64_MIN;
	uint8_t x5462 = 19U;

    t60 = (x5461%(x5462*(x5463==x5464)));

    if (t60 != -18LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint8_t x5470 = 48U;
	volatile int64_t x5471 = INT64_MIN;
	int64_t x5472 = INT64_MIN;
	int32_t t61 = -1834087;

    t61 = (x5469%(x5470*(x5471==x5472)));

    if (t61 != -14) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x5505 = UINT16_MAX;
	int16_t x5506 = -1;
	uint32_t x5507 = UINT32_MAX;
	volatile int32_t x5508 = -1;
	static int32_t t62 = 348;

    t62 = (x5505%(x5506*(x5507==x5508)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x5561 = -19;
	static volatile uint16_t x5562 = UINT16_MAX;
	uint8_t x5563 = UINT8_MAX;
	static volatile int32_t t63 = -12475;

    t63 = (x5561%(x5562*(x5563==x5564)));

    if (t63 != -19) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x5645 = 60U;
	int8_t x5647 = -1;
	int32_t x5648 = -1;
	int64_t t64 = 2873771155349846LL;

    t64 = (x5645%(x5646*(x5647==x5648)));

    if (t64 != 60LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x5777 = -1;
	static int8_t x5778 = INT8_MIN;
	int8_t x5779 = INT8_MIN;
	int8_t x5780 = INT8_MIN;

    t65 = (x5777%(x5778*(x5779==x5780)));

    if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x5901 = -9;
	volatile int32_t x5902 = -1;
	int32_t x5903 = INT32_MAX;
	volatile int32_t x5904 = INT32_MAX;

    t66 = (x5901%(x5902*(x5903==x5904)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x5993 = INT64_MIN;
	int8_t x5994 = INT8_MIN;
	int32_t x5995 = -1;
	volatile uint64_t x5996 = UINT64_MAX;
	int64_t t67 = -943LL;

    t67 = (x5993%(x5994*(x5995==x5996)));

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x6017 = 349496U;
	volatile int8_t x6020 = -1;
	uint32_t t68 = 57438259U;

    t68 = (x6017%(x6018*(x6019==x6020)));

    if (t68 != 119U) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x6041 = -67111550374602180LL;
	int64_t x6042 = INT64_MIN;
	volatile int16_t x6044 = INT16_MIN;

    t69 = (x6041%(x6042*(x6043==x6044)));

    if (t69 != -67111550374602180LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x6153 = INT16_MAX;
	int64_t x6154 = -1LL;
	volatile int32_t x6155 = INT32_MAX;
	int32_t x6156 = INT32_MAX;
	static int64_t t70 = -6948162LL;

    t70 = (x6153%(x6154*(x6155==x6156)));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x6401 = 0;
	int64_t x6402 = INT64_MIN;
	volatile int8_t x6403 = -1;
	volatile uint64_t x6404 = UINT64_MAX;

    t71 = (x6401%(x6402*(x6403==x6404)));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint8_t x6587 = 1U;
	int64_t x6588 = 1LL;
	static uint64_t t72 = 16008321159673LLU;

    t72 = (x6585%(x6586*(x6587==x6588)));

    if (t72 != 5451191607756LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x6669 = -1;
	int8_t x6670 = INT8_MIN;
	uint32_t x6671 = UINT32_MAX;
	int16_t x6672 = -1;
	int32_t t73 = 112860229;

    t73 = (x6669%(x6670*(x6671==x6672)));

    if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x6673 = 115162241577LLU;
	int32_t x6674 = INT32_MAX;
	volatile uint32_t x6675 = UINT32_MAX;
	uint64_t t74 = 246269369751318688LLU;

    t74 = (x6673%(x6674*(x6675==x6676)));

    if (t74 != 1345608286LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint64_t x6695 = UINT64_MAX;
	int32_t x6696 = -1;

    t75 = (x6693%(x6694*(x6695==x6696)));

    if (t75 != 255) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x6865 = INT16_MIN;
	volatile int8_t x6867 = -1;
	int64_t x6868 = -1LL;
	volatile int32_t t76 = 182596274;

    t76 = (x6865%(x6866*(x6867==x6868)));

    if (t76 != -5) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x6869 = 405060555;
	int8_t x6871 = INT8_MIN;
	volatile int8_t x6872 = INT8_MIN;

    t77 = (x6869%(x6870*(x6871==x6872)));

    if (t77 != 3) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x6882 = 155435335U;
	static int16_t x6884 = -1;
	static uint32_t t78 = 800166U;

    t78 = (x6881%(x6882*(x6883==x6884)));

    if (t78 != 32767U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x6913 = 24U;
	int8_t x6914 = INT8_MAX;
	int16_t x6915 = -1;
	uint64_t x6916 = UINT64_MAX;

    t79 = (x6913%(x6914*(x6915==x6916)));

    if (t79 != 24) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x6917 = -1LL;
	volatile int8_t x6918 = -61;
	static int16_t x6919 = INT16_MIN;
	int16_t x6920 = INT16_MIN;

    t80 = (x6917%(x6918*(x6919==x6920)));

    if (t80 != -1LL) { NG(); } else { ; }
	
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


    return 0;
}

