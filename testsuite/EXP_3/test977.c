
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

int64_t x37 = INT64_MIN;
int32_t t2 = -51868;
int16_t x122 = -5;
int16_t x173 = INT16_MIN;
int32_t x176 = INT32_MAX;
int64_t x201 = -3LL;
int32_t x219 = -1;
static int8_t x220 = -1;
uint32_t t11 = 852195U;
static int16_t x223 = 4;
int16_t x224 = INT16_MIN;
int32_t x245 = INT32_MIN;
uint16_t x251 = UINT16_MAX;
int32_t t14 = -125243081;
uint8_t x289 = 1U;
static int32_t x296 = -8;
volatile int32_t x317 = -1;
int32_t x323 = 7;
static volatile int32_t x365 = 4105043;
int8_t x391 = 53;
static volatile uint64_t x392 = 4544727259697822LLU;
static volatile int32_t t22 = 796751;
uint16_t x421 = UINT16_MAX;
static volatile int32_t x479 = 290222;
int32_t t26 = -112111201;
int16_t x587 = 217;
volatile int32_t x593 = INT32_MIN;
int8_t x594 = INT8_MIN;
uint16_t x630 = 248U;
volatile int8_t x632 = -44;
uint16_t x661 = UINT16_MAX;
int64_t x663 = INT64_MIN;
int8_t x665 = 6;
int64_t x666 = INT64_MAX;
int16_t x669 = 5145;
static volatile uint64_t x670 = 206064892LLU;
static int32_t x724 = -1;
int64_t t38 = 2110838613LL;
uint64_t x748 = UINT64_MAX;
static uint64_t x770 = UINT64_MAX;
uint32_t x779 = 24U;
static uint32_t x785 = 111375680U;
static volatile uint32_t t43 = 13U;
int8_t x811 = INT8_MAX;
int16_t x821 = 49;
int32_t x823 = 16692253;
uint8_t x824 = 3U;
int32_t t45 = 416;
int8_t x827 = INT8_MAX;
static volatile uint32_t x830 = UINT32_MAX;
static int32_t x834 = -1;
uint16_t x835 = 47U;
uint16_t x860 = 20U;
uint32_t x880 = 506878703U;
uint32_t x887 = UINT32_MAX;
int32_t t52 = -15;
int8_t x913 = INT8_MAX;
static int16_t x915 = -1;
int8_t x936 = -1;
volatile int32_t t57 = -64;
volatile int32_t x988 = 17;
uint16_t x1009 = UINT16_MAX;
uint16_t x1010 = 2290U;
static int8_t x1012 = INT8_MIN;
int32_t t60 = -93571323;
int64_t x1044 = -1LL;
int64_t t61 = -111LL;
uint16_t x1099 = UINT16_MAX;
volatile uint32_t x1130 = UINT32_MAX;
static uint8_t x1131 = 26U;
uint64_t x1132 = 21836868482034528LLU;
int8_t x1136 = INT8_MIN;
int32_t t69 = 1897;
uint8_t x1212 = 3U;
volatile uint64_t t70 = 1LLU;
uint16_t x1302 = 11U;
uint32_t t74 = 51369U;
int16_t x1343 = -1;
int16_t x1469 = INT16_MIN;
int8_t x1480 = INT8_MAX;
uint64_t x1498 = UINT64_MAX;
int64_t x1517 = -1LL;
volatile int8_t x1519 = INT8_MAX;
int64_t t81 = -4LL;
uint64_t x1550 = 20568360179139LLU;
uint64_t t83 = 0LLU;
int32_t x1557 = 643;
volatile int32_t x1558 = 177960;
int32_t t84 = 2;
static uint32_t x1598 = 103556U;
int64_t x1636 = INT64_MIN;
uint64_t t88 = 24551962795421456LLU;
int64_t t89 = -2017886704582269020LL;
int8_t x1657 = -8;
uint64_t x1674 = 921372LLU;
int16_t x1752 = -1;
uint8_t x1757 = UINT8_MAX;
int32_t x1845 = INT32_MAX;
uint32_t x1846 = 1859337U;
int32_t x1847 = INT32_MIN;
int8_t x1883 = INT8_MAX;
int64_t x1966 = -1181561049LL;
uint8_t x1968 = 6U;
uint64_t t107 = 56788229LLU;
int16_t x1989 = INT16_MAX;
volatile int16_t x2039 = 3;
static int16_t x2078 = INT16_MIN;
int64_t x2085 = -1LL;
static volatile int64_t t113 = 3LL;
int8_t x2091 = INT8_MIN;
volatile int16_t x2092 = -1;
int32_t x2133 = -25;
uint64_t x2146 = 1660372LLU;
int16_t x2148 = INT16_MIN;
uint16_t x2161 = 452U;
uint32_t x2194 = UINT32_MAX;
static uint8_t x2205 = 3U;
int16_t x2206 = 3;
volatile uint8_t x2208 = 43U;
static int64_t t122 = 5651LL;
uint8_t x2271 = 1U;
volatile uint64_t t123 = 3267LLU;
volatile uint8_t x2278 = 6U;
int64_t x2280 = INT64_MIN;
int8_t x2285 = INT8_MIN;
int16_t x2299 = INT16_MIN;
uint32_t x2317 = 533U;
uint16_t x2318 = UINT16_MAX;
static volatile int64_t t130 = 2467681LL;
uint32_t x2442 = 437691U;
uint32_t t133 = 164268U;
int64_t x2450 = INT64_MIN;
int64_t x2456 = 1LL;
volatile int32_t t136 = 7;
uint64_t x2464 = UINT64_MAX;
int16_t x2465 = INT16_MAX;
volatile uint32_t x2467 = 17U;
volatile int32_t x2482 = -1;
static int16_t x2522 = INT16_MIN;
volatile uint8_t x2524 = 2U;
int8_t x2549 = -1;
static volatile int8_t x2551 = 0;
int32_t t144 = 2462690;
int8_t x2560 = -1;
int64_t t145 = -13604336485LL;
volatile uint64_t x2563 = UINT64_MAX;
volatile uint32_t t146 = 11423502U;
int32_t x2582 = -1;
static int32_t x2583 = INT32_MAX;
int32_t x2616 = 158465119;
uint32_t x2692 = 1U;
int32_t x2704 = INT32_MIN;
volatile uint64_t t155 = 7125532113LLU;
static volatile int16_t x2751 = -1;
uint64_t x2752 = UINT64_MAX;
int32_t x2770 = INT32_MIN;
int32_t x2771 = -1;
static volatile int8_t x2785 = INT8_MIN;
uint8_t x2811 = 0U;
volatile int32_t x2825 = -1;
int32_t x2841 = INT32_MIN;
uint16_t x2873 = UINT16_MAX;
volatile uint16_t x2874 = UINT16_MAX;
volatile int8_t x2875 = 0;
int8_t x2876 = INT8_MIN;
static uint64_t x2928 = 2LLU;
volatile uint32_t x2975 = UINT32_MAX;
static uint32_t t170 = 2U;
static uint32_t x2998 = 31U;
int32_t x2999 = INT32_MIN;
uint64_t x3000 = 13LLU;
uint32_t x3073 = UINT32_MAX;
int32_t t177 = 14471;
static int16_t x3179 = INT16_MIN;
uint32_t t178 = 3U;
uint32_t x3185 = UINT32_MAX;
uint64_t x3188 = 470671978LLU;
uint32_t x3191 = UINT32_MAX;
int8_t x3199 = 0;
uint64_t x3229 = 13LLU;
int8_t x3232 = -1;
uint32_t t185 = 204886988U;
int64_t x3280 = INT64_MIN;
volatile int64_t x3289 = INT64_MIN;
static int16_t x3388 = -1;
int32_t t189 = 160704;
int16_t x3427 = INT16_MIN;
static uint64_t t194 = 12655018950723108LLU;
uint8_t x3437 = UINT8_MAX;
uint8_t x3483 = 13U;
volatile uint32_t x3513 = UINT32_MAX;
volatile int32_t x3517 = INT32_MIN;


void f0(void) {
    	uint16_t x5 = UINT16_MAX;
	int16_t x6 = INT16_MAX;
	static int16_t x7 = 3;
	uint8_t x8 = 89U;
	int32_t t0 = 111017035;

    t0 = ((x5^x6)>>(x7%x8));

    if (t0 != 4096) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x38 = -520322718;
	uint8_t x39 = 15U;
	int32_t x40 = -1;
	static volatile int64_t t1 = -49562LL;

    t1 = ((x37^x38)>>(x39%x40));

    if (t1 != 9223372036334453090LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x69 = INT32_MAX;
	int8_t x70 = 1;
	uint16_t x71 = 3U;
	int16_t x72 = INT16_MAX;

    t2 = ((x69^x70)>>(x71%x72));

    if (t2 != 268435455) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x73 = INT64_MIN;
	int8_t x74 = INT8_MIN;
	uint32_t x75 = 59U;
	uint32_t x76 = UINT32_MAX;
	volatile int64_t t3 = 401LL;

    t3 = ((x73^x74)>>(x75%x76));

    if (t3 != 15LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x89 = -1;
	volatile int64_t x90 = -444789258894LL;
	uint8_t x91 = 6U;
	uint32_t x92 = 219U;
	static volatile int64_t t4 = -118913795744LL;

    t4 = ((x89^x90)>>(x91%x92));

    if (t4 != 6949832170LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x121 = INT64_MIN;
	uint16_t x123 = 0U;
	int32_t x124 = INT32_MIN;
	static volatile int64_t t5 = 9272LL;

    t5 = ((x121^x122)>>(x123%x124));

    if (t5 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x145 = INT32_MIN;
	int8_t x146 = INT8_MIN;
	uint8_t x147 = 7U;
	uint8_t x148 = UINT8_MAX;
	volatile int32_t t6 = 1543242;

    t6 = ((x145^x146)>>(x147%x148));

    if (t6 != 16777215) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x153 = 8U;
	uint16_t x154 = UINT16_MAX;
	uint8_t x155 = 6U;
	int8_t x156 = INT8_MIN;
	volatile uint32_t t7 = 3389441U;

    t7 = ((x153^x154)>>(x155%x156));

    if (t7 != 1023U) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x174 = -149184;
	int8_t x175 = 1;
	volatile int32_t t8 = 27;

    t8 = ((x173^x174)>>(x175%x176));

    if (t8 != 72864) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x185 = -1;
	uint64_t x186 = 31578LLU;
	volatile uint32_t x187 = 3U;
	static volatile uint16_t x188 = 60U;
	volatile uint64_t t9 = 555331755919381888LLU;

    t9 = ((x185^x186)>>(x187%x188));

    if (t9 != 2305843009213690004LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x202 = -1;
	int16_t x203 = INT16_MIN;
	volatile uint8_t x204 = 1U;
	volatile int64_t t10 = -4730188LL;

    t10 = ((x201^x202)>>(x203%x204));

    if (t10 != 2LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x217 = -24;
	uint32_t x218 = 3244U;

    t11 = ((x217^x218)>>(x219%x220));

    if (t11 != 4294964036U) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x221 = -3LL;
	uint64_t x222 = 9343990640LLU;
	uint64_t t12 = 34343LLU;

    t12 = ((x221^x222)>>(x223%x224));

    if (t12 != 1152921504022847560LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x246 = -8;
	volatile uint64_t x247 = 7526371526LLU;
	int8_t x248 = 1;
	volatile int32_t t13 = -6075;

    t13 = ((x245^x246)>>(x247%x248));

    if (t13 != 2147483640) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile uint8_t x249 = 46U;
	uint8_t x250 = 27U;
	uint16_t x252 = 2U;

    t14 = ((x249^x250)>>(x251%x252));

    if (t14 != 26) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x265 = 6314007928572LLU;
	volatile uint64_t x266 = 285LLU;
	int64_t x267 = -186272905LL;
	uint8_t x268 = 1U;
	uint64_t t15 = 432975LLU;

    t15 = ((x265^x266)>>(x267%x268));

    if (t15 != 6314007928801LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint16_t x290 = UINT16_MAX;
	static int32_t x291 = -1;
	volatile int64_t x292 = -1LL;
	volatile int32_t t16 = 3976;

    t16 = ((x289^x290)>>(x291%x292));

    if (t16 != 65534) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint64_t x293 = 273324630276392LLU;
	static volatile uint16_t x294 = 5812U;
	int16_t x295 = INT16_MIN;
	uint64_t t17 = 1725409745LLU;

    t17 = ((x293^x294)>>(x295%x296));

    if (t17 != 273324630273948LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x318 = -23844LL;
	uint64_t x319 = 5LLU;
	int16_t x320 = INT16_MAX;
	volatile int64_t t18 = -2372232405LL;

    t18 = ((x317^x318)>>(x319%x320));

    if (t18 != 745LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x321 = 8LLU;
	uint64_t x322 = UINT64_MAX;
	int8_t x324 = 13;
	uint64_t t19 = 142371LLU;

    t19 = ((x321^x322)>>(x323%x324));

    if (t19 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint16_t x366 = UINT16_MAX;
	static volatile int64_t x367 = INT64_MIN;
	static int16_t x368 = INT16_MIN;
	volatile int32_t t20 = -19;

    t20 = ((x365^x366)>>(x367%x368));

    if (t20 != 4086956) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x389 = INT64_MIN;
	int32_t x390 = -1;
	volatile int64_t t21 = -1381987LL;

    t21 = ((x389^x390)>>(x391%x392));

    if (t21 != 1023LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x417 = INT8_MIN;
	int16_t x418 = INT16_MIN;
	static int32_t x419 = 33;
	int8_t x420 = -2;

    t22 = ((x417^x418)>>(x419%x420));

    if (t22 != 16320) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x422 = 1942067286371LLU;
	uint16_t x423 = 24U;
	uint32_t x424 = 744914600U;
	uint64_t t23 = 990579217LLU;

    t23 = ((x421^x422)>>(x423%x424));

    if (t23 != 115756LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x465 = 3U;
	uint8_t x466 = 116U;
	int64_t x467 = -64316437289581407LL;
	int8_t x468 = -1;
	volatile int32_t t24 = -463862;

    t24 = ((x465^x466)>>(x467%x468));

    if (t24 != 119) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x477 = 791035LLU;
	volatile int8_t x478 = 1;
	volatile int8_t x480 = -1;
	volatile uint64_t t25 = 486392531LLU;

    t25 = ((x477^x478)>>(x479%x480));

    if (t25 != 791034LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int32_t x557 = INT32_MIN;
	volatile int16_t x558 = -187;
	static volatile int16_t x559 = INT16_MIN;
	int16_t x560 = -1;

    t26 = ((x557^x558)>>(x559%x560));

    if (t26 != 2147483461) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x585 = -19;
	static int32_t x586 = INT32_MIN;
	int64_t x588 = 6LL;
	int32_t t27 = 117;

    t27 = ((x585^x586)>>(x587%x588));

    if (t27 != 1073741814) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x589 = INT32_MAX;
	static int64_t x590 = 16546105725LL;
	int8_t x591 = INT8_MIN;
	int32_t x592 = -1;
	volatile int64_t t28 = 3527083264LL;

    t28 = ((x589^x590)>>(x591%x592));

    if (t28 != 15666148994LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint8_t x595 = 3U;
	volatile int32_t x596 = INT32_MIN;
	int32_t t29 = 2022387;

    t29 = ((x593^x594)>>(x595%x596));

    if (t29 != 268435440) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x621 = -1;
	volatile int16_t x622 = -2038;
	volatile int8_t x623 = 1;
	uint64_t x624 = UINT64_MAX;
	static volatile int32_t t30 = 295166386;

    t30 = ((x621^x622)>>(x623%x624));

    if (t30 != 1018) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x629 = 1637832U;
	uint64_t x631 = 19LLU;
	uint32_t t31 = 4193698U;

    t31 = ((x629^x630)>>(x631%x632));

    if (t31 != 3U) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x637 = UINT8_MAX;
	int8_t x638 = 6;
	int8_t x639 = 30;
	int8_t x640 = INT8_MIN;
	int32_t t32 = -1;

    t32 = ((x637^x638)>>(x639%x640));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x657 = INT32_MAX;
	int16_t x658 = 4;
	int64_t x659 = -1LL;
	int8_t x660 = -1;
	volatile int32_t t33 = 25;

    t33 = ((x657^x658)>>(x659%x660));

    if (t33 != 2147483643) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x662 = 174U;
	int32_t x664 = -1;
	volatile int32_t t34 = -7;

    t34 = ((x661^x662)>>(x663%x664));

    if (t34 != 65361) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x667 = 4U;
	uint64_t x668 = 62644LLU;
	static int64_t t35 = 40692199736436LL;

    t35 = ((x665^x666)>>(x667%x668));

    if (t35 != 576460752303423487LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int64_t x671 = -705218445709010LL;
	uint16_t x672 = 1U;
	volatile uint64_t t36 = 2752LLU;

    t36 = ((x669^x670)>>(x671%x672));

    if (t36 != 206067941LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x673 = -20;
	static int16_t x674 = -1;
	int32_t x675 = INT32_MAX;
	int64_t x676 = -1LL;
	volatile int32_t t37 = -64254672;

    t37 = ((x673^x674)>>(x675%x676));

    if (t37 != 19) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x721 = -173719LL;
	int32_t x722 = INT32_MIN;
	int32_t x723 = INT32_MIN;

    t38 = ((x721^x722)>>(x723%x724));

    if (t38 != 2147309929LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x745 = -6725154;
	uint64_t x746 = 3082080711800LLU;
	int64_t x747 = 3LL;
	uint64_t t39 = 31LLU;

    t39 = ((x745^x746)>>(x747%x748));

    if (t39 != 2305842623953846964LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x769 = INT8_MIN;
	uint8_t x771 = 29U;
	int32_t x772 = -52131;
	uint64_t t40 = 756420539276781894LLU;

    t40 = ((x769^x770)>>(x771%x772));

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x777 = INT64_MIN;
	int64_t x778 = INT64_MIN;
	int64_t x780 = 7240848389009LL;
	static volatile int64_t t41 = 3109525666034593LL;

    t41 = ((x777^x778)>>(x779%x780));

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x781 = INT8_MIN;
	int64_t x782 = INT64_MIN;
	volatile uint32_t x783 = 8U;
	static int64_t x784 = INT64_MAX;
	int64_t t42 = -756482127388152LL;

    t42 = ((x781^x782)>>(x783%x784));

    if (t42 != 36028797018963967LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint8_t x786 = 0U;
	int32_t x787 = INT32_MIN;
	volatile int32_t x788 = INT32_MIN;

    t43 = ((x785^x786)>>(x787%x788));

    if (t43 != 111375680U) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x809 = INT64_MAX;
	uint8_t x810 = 0U;
	uint8_t x812 = 3U;
	volatile int64_t t44 = 517635302675LL;

    t44 = ((x809^x810)>>(x811%x812));

    if (t44 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x822 = UINT8_MAX;

    t45 = ((x821^x822)>>(x823%x824));

    if (t45 != 103) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint16_t x825 = 21U;
	static uint16_t x826 = 2U;
	volatile int16_t x828 = 17;
	int32_t t46 = 311454;

    t46 = ((x825^x826)>>(x827%x828));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x829 = UINT32_MAX;
	int16_t x831 = INT16_MIN;
	int8_t x832 = INT8_MIN;
	static uint32_t t47 = 2008U;

    t47 = ((x829^x830)>>(x831%x832));

    if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x833 = INT64_MIN;
	volatile uint64_t x836 = 16403624878319LLU;
	volatile int64_t t48 = -18755872683LL;

    t48 = ((x833^x834)>>(x835%x836));

    if (t48 != 65535LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x857 = INT32_MIN;
	int8_t x858 = -1;
	uint64_t x859 = 1312396LLU;
	static int32_t t49 = 1719659;

    t49 = ((x857^x858)>>(x859%x860));

    if (t49 != 32767) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint8_t x877 = UINT8_MAX;
	int8_t x878 = 29;
	int64_t x879 = 5LL;
	static int32_t t50 = -50936170;

    t50 = ((x877^x878)>>(x879%x880));

    if (t50 != 7) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x885 = -29391364;
	int16_t x886 = -15;
	int16_t x888 = 1;
	static volatile int32_t t51 = 0;

    t51 = ((x885^x886)>>(x887%x888));

    if (t51 != 29391373) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x901 = 134U;
	static volatile int8_t x902 = INT8_MAX;
	int64_t x903 = INT64_MAX;
	int8_t x904 = -1;

    t52 = ((x901^x902)>>(x903%x904));

    if (t52 != 249) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x905 = INT8_MIN;
	static int8_t x906 = INT8_MIN;
	static volatile int8_t x907 = -1;
	int16_t x908 = -1;
	int32_t t53 = 758153;

    t53 = ((x905^x906)>>(x907%x908));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x914 = 3598;
	uint64_t x916 = UINT64_MAX;
	int32_t t54 = 419;

    t54 = ((x913^x914)>>(x915%x916));

    if (t54 != 3697) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint16_t x933 = 17682U;
	static volatile uint8_t x934 = 8U;
	volatile int32_t x935 = -1;
	volatile int32_t t55 = 0;

    t55 = ((x933^x934)>>(x935%x936));

    if (t55 != 17690) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x937 = INT16_MAX;
	uint8_t x938 = UINT8_MAX;
	int32_t x939 = 10;
	static int32_t x940 = INT32_MIN;
	volatile int32_t t56 = -3;

    t56 = ((x937^x938)>>(x939%x940));

    if (t56 != 31) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int8_t x949 = 0;
	int32_t x950 = 47665505;
	volatile uint64_t x951 = UINT64_MAX;
	int16_t x952 = INT16_MAX;

    t57 = ((x949^x950)>>(x951%x952));

    if (t57 != 1454) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x973 = UINT64_MAX;
	uint16_t x974 = 29U;
	static volatile uint32_t x975 = 747071U;
	int64_t x976 = -1LL;
	static volatile uint64_t t58 = 7668890931081155571LLU;

    t58 = ((x973^x974)>>(x975%x976));

    if (t58 != 18446744073709551586LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x985 = INT16_MAX;
	int64_t x986 = 1866910744494403887LL;
	uint8_t x987 = 0U;
	int64_t t59 = -184580208LL;

    t59 = ((x985^x986)>>(x987%x988));

    if (t59 != 1866910744494378704LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x1011 = INT64_MIN;

    t60 = ((x1009^x1010)>>(x1011%x1012));

    if (t60 != 63245) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x1041 = 13409U;
	int64_t x1042 = 13061787606LL;
	volatile int8_t x1043 = -45;

    t61 = ((x1041^x1042)>>(x1043%x1044));

    if (t61 != 13061798839LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x1097 = UINT64_MAX;
	static int16_t x1098 = INT16_MIN;
	volatile uint8_t x1100 = 47U;
	static volatile uint64_t t62 = 3841098579802479869LLU;

    t62 = ((x1097^x1098)>>(x1099%x1100));

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x1113 = INT8_MIN;
	volatile int8_t x1114 = -1;
	int8_t x1115 = INT8_MIN;
	volatile uint32_t x1116 = 88U;
	int32_t t63 = -58;

    t63 = ((x1113^x1114)>>(x1115%x1116));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x1117 = UINT32_MAX;
	int8_t x1118 = INT8_MAX;
	uint16_t x1119 = 1U;
	uint8_t x1120 = UINT8_MAX;
	static uint32_t t64 = 110058554U;

    t64 = ((x1117^x1118)>>(x1119%x1120));

    if (t64 != 2147483584U) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x1125 = -2907315901LL;
	uint64_t x1126 = 1509196LLU;
	int32_t x1127 = -221;
	int32_t x1128 = 1;
	uint64_t t65 = 289016970723566LLU;

    t65 = ((x1125^x1126)>>(x1127%x1128));

    if (t65 != 18446744070800991759LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x1129 = 1;
	uint32_t t66 = 3U;

    t66 = ((x1129^x1130)>>(x1131%x1132));

    if (t66 != 63U) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x1133 = INT8_MIN;
	uint64_t x1134 = 2127304LLU;
	int64_t x1135 = INT64_MIN;
	uint64_t t67 = 757LLU;

    t67 = ((x1133^x1134)>>(x1135%x1136));

    if (t67 != 18446744073707424328LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x1157 = -1;
	int32_t x1158 = INT32_MIN;
	volatile uint8_t x1159 = 14U;
	volatile uint8_t x1160 = UINT8_MAX;
	volatile int32_t t68 = 888675386;

    t68 = ((x1157^x1158)>>(x1159%x1160));

    if (t68 != 131071) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x1181 = INT8_MIN;
	volatile int16_t x1182 = INT16_MIN;
	volatile uint16_t x1183 = 6692U;
	int8_t x1184 = 35;

    t69 = ((x1181^x1182)>>(x1183%x1184));

    if (t69 != 255) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x1209 = 210595727794946530LLU;
	int16_t x1210 = INT16_MIN;
	static uint8_t x1211 = 6U;

    t70 = ((x1209^x1210)>>(x1211%x1212));

    if (t70 != 18236148345914606050LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x1301 = INT32_MAX;
	static int8_t x1303 = INT8_MAX;
	static volatile int8_t x1304 = 27;
	int32_t t71 = -3012724;

    t71 = ((x1301^x1302)>>(x1303%x1304));

    if (t71 != 4095) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x1305 = 12750LLU;
	int64_t x1306 = -786LL;
	int64_t x1307 = -1LL;
	static volatile uint16_t x1308 = 1U;
	volatile uint64_t t72 = 39252LLU;

    t72 = ((x1305^x1306)>>(x1307%x1308));

    if (t72 != 18446744073709538592LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x1313 = UINT16_MAX;
	static uint16_t x1314 = 2315U;
	static int8_t x1315 = INT8_MAX;
	uint8_t x1316 = 9U;
	int32_t t73 = 6966759;

    t73 = ((x1313^x1314)>>(x1315%x1316));

    if (t73 != 31610) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint16_t x1321 = 653U;
	uint32_t x1322 = UINT32_MAX;
	static int8_t x1323 = INT8_MIN;
	volatile int8_t x1324 = -1;

    t74 = ((x1321^x1322)>>(x1323%x1324));

    if (t74 != 4294966642U) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile uint32_t x1333 = UINT32_MAX;
	int8_t x1334 = -1;
	static int16_t x1335 = -4;
	static int8_t x1336 = -1;
	uint32_t t75 = 8U;

    t75 = ((x1333^x1334)>>(x1335%x1336));

    if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x1341 = INT8_MIN;
	int8_t x1342 = -1;
	volatile int16_t x1344 = -1;
	volatile int32_t t76 = 129164;

    t76 = ((x1341^x1342)>>(x1343%x1344));

    if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x1433 = 46162989408575LL;
	int16_t x1434 = 0;
	int8_t x1435 = -1;
	volatile int64_t x1436 = -1LL;
	int64_t t77 = 23114604524655LL;

    t77 = ((x1433^x1434)>>(x1435%x1436));

    if (t77 != 46162989408575LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x1470 = -1;
	static int32_t x1471 = INT32_MIN;
	int32_t x1472 = 1;
	static volatile int32_t t78 = -13;

    t78 = ((x1469^x1470)>>(x1471%x1472));

    if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x1477 = INT32_MIN;
	static uint64_t x1478 = 27878LLU;
	int8_t x1479 = INT8_MAX;
	volatile uint64_t t79 = 53920151LLU;

    t79 = ((x1477^x1478)>>(x1479%x1480));

    if (t79 != 18446744071562095846LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x1497 = INT8_MAX;
	int32_t x1499 = 1;
	static int16_t x1500 = 10739;
	volatile uint64_t t80 = 2448758146840LLU;

    t80 = ((x1497^x1498)>>(x1499%x1500));

    if (t80 != 9223372036854775744LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x1518 = -1;
	volatile uint32_t x1520 = 7U;

    t81 = ((x1517^x1518)>>(x1519%x1520));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x1521 = INT64_MIN;
	static int32_t x1522 = INT32_MIN;
	uint8_t x1523 = 0U;
	volatile int32_t x1524 = -3438;
	static int64_t t82 = 14447872LL;

    t82 = ((x1521^x1522)>>(x1523%x1524));

    if (t82 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x1549 = -1LL;
	uint64_t x1551 = 55831LLU;
	int8_t x1552 = 48;

    t83 = ((x1549^x1550)>>(x1551%x1552));

    if (t83 != 144115027385541972LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint64_t x1559 = UINT64_MAX;
	static int8_t x1560 = INT8_MAX;

    t84 = ((x1557^x1558)>>(x1559%x1560));

    if (t84 != 88789) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x1569 = INT32_MAX;
	static volatile uint16_t x1570 = 9U;
	int16_t x1571 = INT16_MIN;
	static int8_t x1572 = -1;
	int32_t t85 = -943517;

    t85 = ((x1569^x1570)>>(x1571%x1572));

    if (t85 != 2147483638) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x1585 = INT8_MIN;
	static int16_t x1586 = INT16_MIN;
	volatile int32_t x1587 = INT32_MAX;
	static int8_t x1588 = 28;
	static volatile int32_t t86 = 288;

    t86 = ((x1585^x1586)>>(x1587%x1588));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x1597 = INT16_MIN;
	int16_t x1599 = INT16_MIN;
	int16_t x1600 = -1;
	uint32_t t87 = 773525U;

    t87 = ((x1597^x1598)>>(x1599%x1600));

    if (t87 != 4294841476U) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x1633 = INT32_MAX;
	uint64_t x1634 = 66850780900617834LLU;
	uint8_t x1635 = 5U;

    t88 = ((x1633^x1634)>>(x1635%x1636));

    if (t88 != 2089086877413516LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int16_t x1641 = INT16_MAX;
	int64_t x1642 = 5LL;
	uint16_t x1643 = 348U;
	static int32_t x1644 = -1;

    t89 = ((x1641^x1642)>>(x1643%x1644));

    if (t89 != 32762LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x1658 = INT64_MIN;
	int16_t x1659 = -1;
	int32_t x1660 = -1;
	int64_t t90 = -6625334056LL;

    t90 = ((x1657^x1658)>>(x1659%x1660));

    if (t90 != 9223372036854775800LL) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x1673 = INT32_MIN;
	volatile int32_t x1675 = 59503;
	uint16_t x1676 = 2972U;
	volatile uint64_t t91 = 48465054LLU;

    t91 = ((x1673^x1674)>>(x1675%x1676));

    if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint16_t x1697 = 148U;
	static int8_t x1698 = 1;
	int8_t x1699 = 1;
	uint64_t x1700 = UINT64_MAX;
	static volatile int32_t t92 = -1953605;

    t92 = ((x1697^x1698)>>(x1699%x1700));

    if (t92 != 74) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x1749 = INT8_MIN;
	int64_t x1750 = -20419277LL;
	static int16_t x1751 = -1;
	static volatile int64_t t93 = 9343934LL;

    t93 = ((x1749^x1750)>>(x1751%x1752));

    if (t93 != 20419251LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x1758 = INT64_MAX;
	int64_t x1759 = -333708LL;
	volatile int8_t x1760 = -1;
	int64_t t94 = 3LL;

    t94 = ((x1757^x1758)>>(x1759%x1760));

    if (t94 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x1773 = -608;
	int16_t x1774 = INT16_MIN;
	static uint16_t x1775 = 2U;
	uint8_t x1776 = 28U;
	int32_t t95 = 929390866;

    t95 = ((x1773^x1774)>>(x1775%x1776));

    if (t95 != 8040) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x1797 = -668703;
	uint64_t x1798 = UINT64_MAX;
	static uint16_t x1799 = 7U;
	int16_t x1800 = INT16_MAX;
	uint64_t t96 = 5368405233210LLU;

    t96 = ((x1797^x1798)>>(x1799%x1800));

    if (t96 != 5224LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x1813 = 2990959U;
	int32_t x1814 = INT32_MAX;
	static uint8_t x1815 = 6U;
	int32_t x1816 = -1;
	static volatile uint32_t t97 = 2063640U;

    t97 = ((x1813^x1814)>>(x1815%x1816));

    if (t97 != 2144492688U) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x1817 = -1;
	uint64_t x1818 = UINT64_MAX;
	static int8_t x1819 = INT8_MAX;
	int8_t x1820 = -2;
	volatile uint64_t t98 = 471LLU;

    t98 = ((x1817^x1818)>>(x1819%x1820));

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x1821 = INT16_MAX;
	uint64_t x1822 = 284616231LLU;
	int64_t x1823 = INT64_MIN;
	int16_t x1824 = -1;
	uint64_t t99 = 52949904613551127LLU;

    t99 = ((x1821^x1822)>>(x1823%x1824));

    if (t99 != 284596696LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x1848 = INT8_MIN;
	uint32_t t100 = 22701U;

    t100 = ((x1845^x1846)>>(x1847%x1848));

    if (t100 != 2145624310U) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x1861 = -51LL;
	uint64_t x1862 = 3522949996787LLU;
	uint64_t x1863 = UINT64_MAX;
	volatile int32_t x1864 = -1;
	uint64_t t101 = 2426138883LLU;

    t101 = ((x1861^x1862)>>(x1863%x1864));

    if (t101 != 18446740550759554878LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x1881 = 3U;
	uint16_t x1882 = UINT16_MAX;
	uint32_t x1884 = 13U;
	int32_t t102 = 125915;

    t102 = ((x1881^x1882)>>(x1883%x1884));

    if (t102 != 63) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x1929 = -1;
	int64_t x1930 = -1LL;
	uint16_t x1931 = 20U;
	uint16_t x1932 = 3483U;
	volatile int64_t t103 = -29LL;

    t103 = ((x1929^x1930)>>(x1931%x1932));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint16_t x1957 = 143U;
	uint32_t x1958 = 11U;
	uint64_t x1959 = 1LLU;
	uint32_t x1960 = 2637844U;
	volatile uint32_t t104 = 1259212056U;

    t104 = ((x1957^x1958)>>(x1959%x1960));

    if (t104 != 66U) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x1965 = -1;
	int32_t x1967 = INT32_MAX;
	volatile int64_t t105 = 4157971283848LL;

    t105 = ((x1965^x1966)>>(x1967%x1968));

    if (t105 != 590780524LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x1969 = INT8_MIN;
	int8_t x1970 = -29;
	int8_t x1971 = INT8_MIN;
	int8_t x1972 = 1;
	static volatile int32_t t106 = -1;

    t106 = ((x1969^x1970)>>(x1971%x1972));

    if (t106 != 99) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x1977 = INT32_MIN;
	static uint64_t x1978 = 4970LLU;
	int8_t x1979 = 1;
	int64_t x1980 = INT64_MAX;

    t107 = ((x1977^x1978)>>(x1979%x1980));

    if (t107 != 9223372035781036469LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int32_t x1990 = INT32_MAX;
	int8_t x1991 = INT8_MAX;
	static int8_t x1992 = INT8_MAX;
	static volatile int32_t t108 = 163323;

    t108 = ((x1989^x1990)>>(x1991%x1992));

    if (t108 != 2147450880) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x1997 = INT8_MIN;
	int64_t x1998 = INT64_MIN;
	uint8_t x1999 = UINT8_MAX;
	volatile uint8_t x2000 = 63U;
	int64_t t109 = 821496385374454LL;

    t109 = ((x1997^x1998)>>(x1999%x2000));

    if (t109 != 1152921504606846960LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x2037 = 48802528LLU;
	uint16_t x2038 = 24141U;
	int8_t x2040 = INT8_MAX;
	uint64_t t110 = 1927817LLU;

    t110 = ((x2037^x2038)>>(x2039%x2040));

    if (t110 != 6102677LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x2049 = 3693963824944447405LLU;
	static volatile int32_t x2050 = INT32_MIN;
	uint64_t x2051 = 17230492245347LLU;
	static int32_t x2052 = 9;
	volatile uint64_t t111 = 429324371408616LLU;

    t111 = ((x2049^x2050)>>(x2051%x2052));

    if (t111 != 57628047854990591LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x2077 = -1LL;
	int32_t x2079 = INT32_MIN;
	static int32_t x2080 = INT32_MIN;
	static volatile int64_t t112 = -161031397862690LL;

    t112 = ((x2077^x2078)>>(x2079%x2080));

    if (t112 != 32767LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x2086 = INT8_MIN;
	int64_t x2087 = INT64_MIN;
	volatile int64_t x2088 = -1LL;

    t113 = ((x2085^x2086)>>(x2087%x2088));

    if (t113 != 127LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x2089 = 7048634789761937LL;
	uint32_t x2090 = 643515337U;
	volatile int64_t t114 = 396539621LL;

    t114 = ((x2089^x2090)>>(x2091%x2092));

    if (t114 != 7048634215485528LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint16_t x2097 = UINT16_MAX;
	int8_t x2098 = 1;
	static int32_t x2099 = INT32_MAX;
	static volatile int8_t x2100 = INT8_MAX;
	volatile int32_t t115 = -43172124;

    t115 = ((x2097^x2098)>>(x2099%x2100));

    if (t115 != 511) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x2134 = -1842;
	int16_t x2135 = INT16_MAX;
	volatile int32_t x2136 = 1;
	int32_t t116 = -388910;

    t116 = ((x2133^x2134)>>(x2135%x2136));

    if (t116 != 1833) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x2145 = UINT16_MAX;
	volatile uint16_t x2147 = 33U;
	uint64_t t117 = 870857121654740LLU;

    t117 = ((x2145^x2146)>>(x2147%x2148));

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x2157 = INT32_MAX;
	volatile uint32_t x2158 = UINT32_MAX;
	volatile int8_t x2159 = 0;
	uint8_t x2160 = 103U;
	uint32_t t118 = 4U;

    t118 = ((x2157^x2158)>>(x2159%x2160));

    if (t118 != 2147483648U) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint64_t x2162 = 21964631217092072LLU;
	int8_t x2163 = 8;
	int64_t x2164 = -47LL;
	volatile uint64_t t119 = 1729LLU;

    t119 = ((x2161^x2162)>>(x2163%x2164));

    if (t119 != 85799340691764LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x2193 = -1;
	static volatile int16_t x2195 = INT16_MIN;
	static int8_t x2196 = INT8_MIN;
	uint32_t t120 = 7U;

    t120 = ((x2193^x2194)>>(x2195%x2196));

    if (t120 != 0U) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x2207 = 7U;
	static volatile int32_t t121 = 141740521;

    t121 = ((x2205^x2206)>>(x2207%x2208));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x2237 = -261LL;
	int16_t x2238 = -1;
	uint8_t x2239 = 9U;
	volatile int8_t x2240 = -1;

    t122 = ((x2237^x2238)>>(x2239%x2240));

    if (t122 != 260LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint8_t x2269 = 0U;
	uint64_t x2270 = UINT64_MAX;
	int64_t x2272 = INT64_MIN;

    t123 = ((x2269^x2270)>>(x2271%x2272));

    if (t123 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x2277 = 12;
	int64_t x2279 = INT64_MIN;
	int32_t t124 = -22;

    t124 = ((x2277^x2278)>>(x2279%x2280));

    if (t124 != 10) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x2286 = -139;
	static int64_t x2287 = INT64_MIN;
	int32_t x2288 = -1;
	volatile int32_t t125 = 3777495;

    t125 = ((x2285^x2286)>>(x2287%x2288));

    if (t125 != 245) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x2297 = INT64_MIN;
	volatile int32_t x2298 = -864;
	uint16_t x2300 = 1U;
	volatile int64_t t126 = 30158807620485LL;

    t126 = ((x2297^x2298)>>(x2299%x2300));

    if (t126 != 9223372036854774944LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint64_t x2313 = UINT64_MAX;
	int64_t x2314 = 71129447361LL;
	volatile int64_t x2315 = INT64_MIN;
	int8_t x2316 = INT8_MIN;
	static uint64_t t127 = 348450202102440019LLU;

    t127 = ((x2313^x2314)>>(x2315%x2316));

    if (t127 != 18446744002580104254LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x2319 = 15;
	int16_t x2320 = INT16_MIN;
	uint32_t t128 = 6U;

    t128 = ((x2317^x2318)>>(x2319%x2320));

    if (t128 != 1U) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint16_t x2349 = UINT16_MAX;
	uint16_t x2350 = UINT16_MAX;
	uint8_t x2351 = 13U;
	int8_t x2352 = INT8_MIN;
	static int32_t t129 = -1914349;

    t129 = ((x2349^x2350)>>(x2351%x2352));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x2377 = -1955596505274703760LL;
	int16_t x2378 = -519;
	uint16_t x2379 = UINT16_MAX;
	int16_t x2380 = -1;

    t130 = ((x2377^x2378)>>(x2379%x2380));

    if (t130 != 1955596505274703241LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x2389 = UINT64_MAX;
	volatile int32_t x2390 = 12939;
	uint32_t x2391 = UINT32_MAX;
	int32_t x2392 = INT32_MAX;
	uint64_t t131 = 300LLU;

    t131 = ((x2389^x2390)>>(x2391%x2392));

    if (t131 != 9223372036854769338LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x2429 = 88454076166955376LLU;
	int64_t x2430 = INT64_MIN;
	int16_t x2431 = INT16_MIN;
	int8_t x2432 = INT8_MIN;
	uint64_t t132 = 45196319LLU;

    t132 = ((x2429^x2430)>>(x2431%x2432));

    if (t132 != 9311826113021731184LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x2441 = -6119870;
	volatile int8_t x2443 = 0;
	volatile int64_t x2444 = 104346166253474007LL;

    t133 = ((x2441^x2442)>>(x2443%x2444));

    if (t133 != 4288951289U) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x2449 = -1;
	uint16_t x2451 = 252U;
	int64_t x2452 = 11LL;
	volatile int64_t t134 = -28630916914073816LL;

    t134 = ((x2449^x2450)>>(x2451%x2452));

    if (t134 != 9007199254740991LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint64_t x2453 = UINT64_MAX;
	volatile int16_t x2454 = INT16_MAX;
	volatile int8_t x2455 = -1;
	uint64_t t135 = 68371LLU;

    t135 = ((x2453^x2454)>>(x2455%x2456));

    if (t135 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x2457 = INT8_MAX;
	static volatile int8_t x2458 = 35;
	int64_t x2459 = 1797091042498543LL;
	volatile uint8_t x2460 = 16U;

    t136 = ((x2457^x2458)>>(x2459%x2460));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x2461 = INT64_MIN;
	static volatile int64_t x2462 = INT64_MIN;
	volatile uint16_t x2463 = 17U;
	static volatile int64_t t137 = -3537898892522622238LL;

    t137 = ((x2461^x2462)>>(x2463%x2464));

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x2466 = INT32_MAX;
	static int64_t x2468 = INT64_MIN;
	volatile int32_t t138 = -3624;

    t138 = ((x2465^x2466)>>(x2467%x2468));

    if (t138 != 16383) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x2473 = INT16_MIN;
	volatile uint32_t x2474 = 1U;
	static int32_t x2475 = -1;
	uint64_t x2476 = UINT64_MAX;
	volatile uint32_t t139 = 4309U;

    t139 = ((x2473^x2474)>>(x2475%x2476));

    if (t139 != 4294934529U) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x2481 = -1;
	int8_t x2483 = INT8_MIN;
	static volatile int8_t x2484 = -1;
	static volatile int32_t t140 = 402722436;

    t140 = ((x2481^x2482)>>(x2483%x2484));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint64_t x2509 = UINT64_MAX;
	static int64_t x2510 = INT64_MIN;
	static int16_t x2511 = -1;
	uint32_t x2512 = 24U;
	uint64_t t141 = 6632947LLU;

    t141 = ((x2509^x2510)>>(x2511%x2512));

    if (t141 != 281474976710655LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x2521 = -27;
	static int32_t x2523 = INT32_MIN;
	static volatile int32_t t142 = -1;

    t142 = ((x2521^x2522)>>(x2523%x2524));

    if (t142 != 32741) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x2541 = UINT64_MAX;
	uint32_t x2542 = UINT32_MAX;
	int16_t x2543 = INT16_MAX;
	uint8_t x2544 = 5U;
	uint64_t t143 = 33302100479764645LLU;

    t143 = ((x2541^x2542)>>(x2543%x2544));

    if (t143 != 4611686017353646080LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x2550 = INT8_MIN;
	int64_t x2552 = INT64_MIN;

    t144 = ((x2549^x2550)>>(x2551%x2552));

    if (t144 != 127) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x2557 = INT16_MIN;
	int64_t x2558 = -12328467044831068LL;
	int16_t x2559 = -1;

    t145 = ((x2557^x2558)>>(x2559%x2560));

    if (t145 != 12328467044855972LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint8_t x2561 = 108U;
	uint32_t x2562 = 16215357U;
	uint8_t x2564 = UINT8_MAX;

    t146 = ((x2561^x2562)>>(x2563%x2564));

    if (t146 != 16215377U) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint64_t x2569 = UINT64_MAX;
	static volatile uint16_t x2570 = 113U;
	static int8_t x2571 = 0;
	int16_t x2572 = 7824;
	uint64_t t147 = 7551169568868208121LLU;

    t147 = ((x2569^x2570)>>(x2571%x2572));

    if (t147 != 18446744073709551502LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x2581 = INT64_MIN;
	int16_t x2584 = -5;
	volatile int64_t t148 = 502134983570809688LL;

    t148 = ((x2581^x2582)>>(x2583%x2584));

    if (t148 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x2601 = -1LL;
	int16_t x2602 = INT16_MIN;
	uint8_t x2603 = 3U;
	int64_t x2604 = -1LL;
	volatile int64_t t149 = 56559240514724LL;

    t149 = ((x2601^x2602)>>(x2603%x2604));

    if (t149 != 32767LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x2613 = INT64_MIN;
	int8_t x2614 = -1;
	static int8_t x2615 = 1;
	volatile int64_t t150 = 33921016LL;

    t150 = ((x2613^x2614)>>(x2615%x2616));

    if (t150 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x2617 = -1LL;
	volatile uint64_t x2618 = UINT64_MAX;
	int64_t x2619 = 55LL;
	int32_t x2620 = INT32_MAX;
	volatile uint64_t t151 = 245097418506140LLU;

    t151 = ((x2617^x2618)>>(x2619%x2620));

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x2621 = -1788;
	int8_t x2622 = INT8_MIN;
	int64_t x2623 = 30LL;
	uint16_t x2624 = UINT16_MAX;
	int32_t t152 = -116;

    t152 = ((x2621^x2622)>>(x2623%x2624));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x2689 = 971555652LL;
	volatile int16_t x2690 = INT16_MAX;
	uint64_t x2691 = 367034770288329541LLU;
	static volatile int64_t t153 = 1072478571295545LL;

    t153 = ((x2689^x2690)>>(x2691%x2692));

    if (t153 != 971553979LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x2701 = INT8_MIN;
	volatile int8_t x2702 = INT8_MIN;
	uint8_t x2703 = 14U;
	int32_t t154 = 58913;

    t154 = ((x2701^x2702)>>(x2703%x2704));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x2737 = -8;
	uint64_t x2738 = 185309547LLU;
	int64_t x2739 = INT64_MAX;
	static int32_t x2740 = -1;

    t155 = ((x2737^x2738)>>(x2739%x2740));

    if (t155 != 18446744073524242067LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x2749 = 243402176LL;
	uint16_t x2750 = UINT16_MAX;
	int64_t t156 = -1976213389LL;

    t156 = ((x2749^x2750)>>(x2751%x2752));

    if (t156 != 243464767LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x2769 = -100;
	volatile uint32_t x2772 = UINT32_MAX;
	static volatile int32_t t157 = 2;

    t157 = ((x2769^x2770)>>(x2771%x2772));

    if (t157 != 2147483548) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x2786 = INT16_MIN;
	int8_t x2787 = 0;
	int32_t x2788 = 192041686;
	int32_t t158 = 44;

    t158 = ((x2785^x2786)>>(x2787%x2788));

    if (t158 != 32640) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x2809 = INT8_MAX;
	uint16_t x2810 = UINT16_MAX;
	static volatile int64_t x2812 = INT64_MIN;
	volatile int32_t t159 = 27248;

    t159 = ((x2809^x2810)>>(x2811%x2812));

    if (t159 != 65408) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x2826 = INT64_MIN;
	uint8_t x2827 = 2U;
	int64_t x2828 = -14LL;
	volatile int64_t t160 = -1991659760707945LL;

    t160 = ((x2825^x2826)>>(x2827%x2828));

    if (t160 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x2833 = 1730U;
	uint32_t x2834 = UINT32_MAX;
	static volatile uint16_t x2835 = 1U;
	uint32_t x2836 = 19149399U;
	uint32_t t161 = 3U;

    t161 = ((x2833^x2834)>>(x2835%x2836));

    if (t161 != 2147482782U) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x2842 = -9;
	int16_t x2843 = INT16_MIN;
	int64_t x2844 = -1LL;
	volatile int32_t t162 = 1011;

    t162 = ((x2841^x2842)>>(x2843%x2844));

    if (t162 != 2147483639) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t t163 = -37;

    t163 = ((x2873^x2874)>>(x2875%x2876));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint8_t x2901 = UINT8_MAX;
	uint64_t x2902 = 156758215913362226LLU;
	volatile int32_t x2903 = INT32_MAX;
	uint32_t x2904 = 3U;
	uint64_t t164 = 450587LLU;

    t164 = ((x2901^x2902)>>(x2903%x2904));

    if (t164 != 78379107956681190LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x2921 = INT32_MAX;
	int32_t x2922 = 1611;
	int8_t x2923 = 2;
	uint8_t x2924 = 7U;
	int32_t t165 = 3886501;

    t165 = ((x2921^x2922)>>(x2923%x2924));

    if (t165 != 536870509) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x2925 = INT32_MAX;
	int16_t x2926 = INT16_MAX;
	static int8_t x2927 = INT8_MAX;
	volatile int32_t t166 = -29;

    t166 = ((x2925^x2926)>>(x2927%x2928));

    if (t166 != 1073725440) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x2949 = INT64_MIN;
	int64_t x2950 = -23LL;
	int32_t x2951 = 3688658;
	uint64_t x2952 = 135LLU;
	static volatile int64_t t167 = -2876972298172497LL;

    t167 = ((x2949^x2950)>>(x2951%x2952));

    if (t167 != 1023LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x2961 = 400U;
	static int64_t x2962 = 25248251351599636LL;
	int32_t x2963 = 1;
	uint8_t x2964 = 15U;
	volatile int64_t t168 = -7576528698LL;

    t168 = ((x2961^x2962)>>(x2963%x2964));

    if (t168 != 12624125675800002LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x2973 = 3U;
	uint64_t x2974 = 26LLU;
	uint8_t x2976 = 20U;
	uint64_t t169 = 4096682LLU;

    t169 = ((x2973^x2974)>>(x2975%x2976));

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x2977 = UINT32_MAX;
	uint16_t x2978 = 20U;
	int8_t x2979 = 5;
	volatile uint16_t x2980 = UINT16_MAX;

    t170 = ((x2977^x2978)>>(x2979%x2980));

    if (t170 != 134217727U) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x2997 = INT16_MIN;
	volatile uint32_t t171 = 6245U;

    t171 = ((x2997^x2998)>>(x2999%x3000));

    if (t171 != 134216704U) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x3025 = -1LL;
	int32_t x3026 = -1;
	uint32_t x3027 = 10U;
	uint8_t x3028 = 51U;
	int64_t t172 = 131815675LL;

    t172 = ((x3025^x3026)>>(x3027%x3028));

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x3037 = INT8_MIN;
	volatile uint64_t x3038 = 167117973037LLU;
	uint16_t x3039 = 108U;
	uint32_t x3040 = 10U;
	uint64_t t173 = 2450476LLU;

    t173 = ((x3037^x3038)>>(x3039%x3040));

    if (t173 != 72057593385123353LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x3057 = -3;
	int8_t x3058 = INT8_MIN;
	int64_t x3059 = -1LL;
	int64_t x3060 = -1LL;
	int32_t t174 = -10;

    t174 = ((x3057^x3058)>>(x3059%x3060));

    if (t174 != 125) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x3074 = -1;
	static int64_t x3075 = 29LL;
	static uint64_t x3076 = UINT64_MAX;
	static uint32_t t175 = 609U;

    t175 = ((x3073^x3074)>>(x3075%x3076));

    if (t175 != 0U) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x3101 = -1;
	int16_t x3102 = -1;
	volatile uint64_t x3103 = UINT64_MAX;
	volatile int8_t x3104 = -1;
	volatile int32_t t176 = 786;

    t176 = ((x3101^x3102)>>(x3103%x3104));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x3145 = -1;
	int16_t x3146 = INT16_MIN;
	uint8_t x3147 = 2U;
	int32_t x3148 = INT32_MAX;

    t177 = ((x3145^x3146)>>(x3147%x3148));

    if (t177 != 8191) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x3177 = 15U;
	uint32_t x3178 = UINT32_MAX;
	int8_t x3180 = -1;

    t178 = ((x3177^x3178)>>(x3179%x3180));

    if (t178 != 4294967280U) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x3186 = -1;
	uint8_t x3187 = 6U;
	uint32_t t179 = 5576U;

    t179 = ((x3185^x3186)>>(x3187%x3188));

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x3189 = INT8_MIN;
	uint32_t x3190 = 160422862U;
	uint16_t x3192 = 292U;
	volatile uint32_t t180 = 23U;

    t180 = ((x3189^x3190)>>(x3191%x3192));

    if (t180 != 1U) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x3197 = INT8_MAX;
	static uint32_t x3198 = 3U;
	static int16_t x3200 = -42;
	uint32_t t181 = 45097507U;

    t181 = ((x3197^x3198)>>(x3199%x3200));

    if (t181 != 124U) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x3225 = INT16_MAX;
	uint8_t x3226 = 0U;
	volatile int64_t x3227 = INT64_MAX;
	int32_t x3228 = INT32_MAX;
	static int32_t t182 = -2088;

    t182 = ((x3225^x3226)>>(x3227%x3228));

    if (t182 != 16383) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x3230 = -29;
	volatile int32_t x3231 = -64;
	uint64_t t183 = 164888972LLU;

    t183 = ((x3229^x3230)>>(x3231%x3232));

    if (t183 != 18446744073709551598LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x3241 = -653964LL;
	volatile int16_t x3242 = -626;
	int64_t x3243 = INT64_MIN;
	int8_t x3244 = INT8_MIN;
	static volatile int64_t t184 = -4892LL;

    t184 = ((x3241^x3242)>>(x3243%x3244));

    if (t184 != 653562LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x3245 = UINT32_MAX;
	uint32_t x3246 = 165U;
	int16_t x3247 = 317;
	int16_t x3248 = -2;

    t185 = ((x3245^x3246)>>(x3247%x3248));

    if (t185 != 2147483565U) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x3277 = 1351;
	static uint32_t x3278 = 156U;
	volatile uint16_t x3279 = 1U;
	volatile uint32_t t186 = 19380U;

    t186 = ((x3277^x3278)>>(x3279%x3280));

    if (t186 != 749U) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x3290 = INT64_MIN;
	static int64_t x3291 = 5435LL;
	uint8_t x3292 = 8U;
	static int64_t t187 = 218559913323LL;

    t187 = ((x3289^x3290)>>(x3291%x3292));

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint64_t x3321 = 8395LLU;
	int16_t x3322 = -1;
	int16_t x3323 = INT16_MIN;
	int16_t x3324 = -1;
	static volatile uint64_t t188 = 1LLU;

    t188 = ((x3321^x3322)>>(x3323%x3324));

    if (t188 != 18446744073709543220LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x3385 = INT8_MAX;
	volatile int8_t x3386 = 2;
	volatile int16_t x3387 = INT16_MIN;

    t189 = ((x3385^x3386)>>(x3387%x3388));

    if (t189 != 125) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x3405 = INT64_MIN;
	uint64_t x3406 = UINT64_MAX;
	static uint16_t x3407 = 124U;
	int8_t x3408 = -1;
	uint64_t t190 = 2934962609LLU;

    t190 = ((x3405^x3406)>>(x3407%x3408));

    if (t190 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x3413 = INT32_MIN;
	volatile int8_t x3414 = INT8_MIN;
	uint16_t x3415 = UINT16_MAX;
	int32_t x3416 = -1;
	volatile int32_t t191 = -1;

    t191 = ((x3413^x3414)>>(x3415%x3416));

    if (t191 != 2147483520) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint16_t x3421 = UINT16_MAX;
	volatile uint16_t x3422 = UINT16_MAX;
	int32_t x3423 = INT32_MAX;
	int64_t x3424 = -1LL;
	int32_t t192 = -5;

    t192 = ((x3421^x3422)>>(x3423%x3424));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x3425 = 27742909371618LL;
	volatile int16_t x3426 = INT16_MAX;
	int64_t x3428 = -1LL;
	static int64_t t193 = 8592801999436090LL;

    t193 = ((x3425^x3426)>>(x3427%x3428));

    if (t193 != 27742909393693LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x3433 = UINT64_MAX;
	static int8_t x3434 = INT8_MIN;
	uint16_t x3435 = 7U;
	static uint64_t x3436 = 124748594LLU;

    t194 = ((x3433^x3434)>>(x3435%x3436));

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x3438 = 0;
	int16_t x3439 = 28;
	int32_t x3440 = 478632757;
	int32_t t195 = 168856345;

    t195 = ((x3437^x3438)>>(x3439%x3440));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x3461 = 195642576267LL;
	int16_t x3462 = 11;
	volatile int64_t x3463 = INT64_MAX;
	int64_t x3464 = -200LL;
	volatile int64_t t196 = -3691364435931LL;

    t196 = ((x3461^x3462)>>(x3463%x3464));

    if (t196 != 1528457627LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint64_t x3481 = UINT64_MAX;
	static int64_t x3482 = -1LL;
	volatile int16_t x3484 = INT16_MAX;
	volatile uint64_t t197 = 1151LLU;

    t197 = ((x3481^x3482)>>(x3483%x3484));

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x3514 = INT32_MIN;
	int32_t x3515 = INT32_MAX;
	volatile int16_t x3516 = INT16_MAX;
	static uint32_t t198 = 0U;

    t198 = ((x3513^x3514)>>(x3515%x3516));

    if (t198 != 1073741823U) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x3518 = -1LL;
	uint64_t x3519 = 48LLU;
	int8_t x3520 = -9;
	volatile int64_t t199 = 525608760LL;

    t199 = ((x3517^x3518)>>(x3519%x3520));

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

