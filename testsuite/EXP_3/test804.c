
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

static int32_t x16 = INT32_MIN;
uint32_t t1 = 913539090U;
uint32_t x58 = 7347624U;
int8_t x64 = -1;
volatile int64_t t4 = 2984LL;
static volatile int64_t t5 = -5LL;
static int32_t t6 = -25;
int32_t x110 = -856856;
static int8_t x119 = -1;
int64_t x148 = INT64_MIN;
uint16_t x169 = 4222U;
volatile int32_t t16 = 0;
static uint32_t x317 = UINT32_MAX;
int8_t x318 = INT8_MIN;
int8_t x320 = -1;
uint8_t x346 = 0U;
int64_t x348 = -1LL;
volatile uint16_t x365 = 32028U;
int8_t x367 = 3;
volatile int32_t t19 = 0;
uint64_t x376 = UINT64_MAX;
uint64_t t21 = 160277510228574779LLU;
int16_t x389 = -1;
volatile int8_t x429 = 15;
static uint64_t x430 = 383175683164LLU;
uint64_t x431 = UINT64_MAX;
static int64_t x437 = -1LL;
volatile uint32_t x459 = UINT32_MAX;
int32_t x474 = INT32_MIN;
static int32_t t29 = 3483;
uint8_t x607 = 18U;
int16_t x639 = 1;
volatile int32_t t33 = 3695091;
static uint16_t x643 = 28803U;
static volatile uint32_t t34 = 87U;
volatile int32_t x660 = INT32_MAX;
volatile uint8_t x677 = 69U;
uint8_t x685 = 4U;
static uint16_t x699 = 11U;
uint64_t t40 = 7939636106LLU;
static int32_t x731 = INT32_MIN;
static volatile uint16_t x745 = 513U;
uint64_t x746 = 555092871315435350LLU;
volatile uint8_t x747 = 54U;
int64_t x758 = -14168449LL;
volatile int64_t x759 = 7931307LL;
int64_t t44 = -116101911LL;
int8_t x795 = INT8_MAX;
volatile int8_t x796 = -1;
uint64_t x799 = 15350LLU;
int16_t x825 = 3005;
static volatile int32_t t48 = 450084342;
static int8_t x833 = INT8_MAX;
int16_t x835 = 2475;
uint16_t x865 = 34U;
volatile int32_t t52 = -2967;
int32_t x920 = -1;
static uint16_t x929 = 0U;
uint32_t t55 = 0U;
int8_t x979 = -1;
static uint8_t x988 = 5U;
int32_t t57 = -1;
uint16_t x1009 = 13538U;
static volatile uint64_t t58 = 692LLU;
static int8_t x1056 = -1;
uint64_t t60 = 670266947LLU;
int32_t x1095 = -30;
uint64_t x1134 = UINT64_MAX;
volatile int64_t x1178 = INT64_MIN;
int32_t x1180 = -1;
uint64_t t66 = 56856LLU;
volatile uint32_t x1192 = 375U;
uint32_t x1200 = 223245U;
volatile uint64_t x1221 = 5LLU;
int16_t x1223 = INT16_MIN;
uint64_t x1275 = UINT64_MAX;
volatile int8_t x1276 = 13;
uint64_t x1332 = 5LLU;
static uint64_t x1335 = UINT64_MAX;
uint8_t x1336 = 1U;
uint32_t x1374 = 113U;
volatile int32_t x1375 = INT32_MAX;
static uint16_t x1389 = 24200U;
volatile uint64_t t83 = 5177557170LLU;
uint64_t t85 = 1042LLU;
uint64_t t87 = 407622060422084020LLU;
int8_t x1558 = -9;
int32_t t90 = -583614;
int64_t x1625 = INT64_MAX;
static int64_t x1627 = INT64_MIN;
uint64_t x1650 = 1021288669636738458LLU;
int16_t x1657 = 232;
int8_t x1658 = 8;
static volatile int16_t x1662 = 3;
volatile int8_t x1708 = 1;
int64_t x1719 = INT64_MIN;
int64_t x1738 = -194LL;
volatile int16_t x1740 = -1;
uint16_t x1884 = 45U;
int16_t x1901 = 0;
uint16_t x1902 = 0U;
uint8_t x1903 = 16U;
static int32_t t102 = -9951290;
static volatile int32_t x1971 = 1;
int64_t x1996 = -1LL;
int8_t x2021 = 0;
static volatile int32_t x2041 = -1;
int8_t x2044 = -5;
uint64_t t106 = 7276669LLU;
static uint64_t x2102 = 770088230LLU;
static volatile int64_t x2103 = INT64_MIN;
int32_t t109 = 10599487;
uint16_t x2139 = 0U;
uint16_t x2203 = 4U;
int32_t x2204 = INT32_MIN;
int8_t x2232 = -3;
int64_t x2248 = 1LL;
volatile int64_t t116 = -1657178LL;
uint32_t x2261 = UINT32_MAX;
int32_t x2262 = -1;
uint8_t x2263 = 2U;
int16_t x2264 = 510;
uint16_t x2275 = UINT16_MAX;
int64_t x2276 = -1LL;
uint32_t x2331 = 158U;
int8_t x2338 = INT8_MIN;
volatile int32_t x2359 = 23220;
int32_t x2360 = -1;
int8_t x2415 = INT8_MAX;
uint8_t x2444 = 52U;
static volatile int16_t x2445 = INT16_MIN;
int64_t t130 = 1647314275LL;
uint32_t x2461 = 3799U;
static volatile int64_t x2469 = 1LL;
static int8_t x2509 = INT8_MAX;
int8_t x2510 = INT8_MAX;
int8_t x2648 = INT8_MIN;
int64_t x2682 = -1LL;
int16_t x2684 = -1;
volatile int64_t t142 = 14808663416441LL;
int8_t x2705 = INT8_MAX;
int32_t t143 = -16551813;
int64_t x2732 = -1LL;
int64_t x2758 = -8111LL;
static int8_t x2759 = -4;
int64_t t147 = 375223906109LL;
uint32_t x2778 = 14U;
uint32_t t148 = 52U;
volatile uint8_t x2793 = UINT8_MAX;
uint8_t x2794 = 7U;
uint8_t x2841 = UINT8_MAX;
int32_t x2842 = -5;
static int16_t x2844 = -222;
volatile int32_t t150 = -2444295;
int64_t x2879 = -26862379033600LL;
volatile int32_t t151 = 6697;
uint32_t x2890 = 13U;
uint64_t x2966 = UINT64_MAX;
uint64_t t156 = 2471038112560583LLU;
int64_t x2977 = INT64_MIN;
uint32_t x2996 = 60787984U;
int64_t t159 = 0LL;
int16_t x3031 = INT16_MAX;
int8_t x3032 = -20;
int32_t x3041 = 101768;
int32_t x3057 = INT32_MAX;
volatile int64_t t167 = INT64_MAX;
uint16_t x3169 = 0U;
int64_t x3171 = -196LL;
volatile int16_t x3172 = -1;
int64_t x3209 = 29728090LL;
volatile int64_t t172 = 231515072405LL;
uint64_t x3265 = 8756816749966779LLU;
uint16_t x3270 = UINT16_MAX;
uint8_t x3309 = 20U;
int32_t t175 = -1;
uint8_t x3329 = 26U;
uint32_t x3342 = UINT32_MAX;
int8_t x3417 = INT8_MIN;
uint32_t x3457 = UINT32_MAX;
uint32_t x3459 = UINT32_MAX;
volatile int32_t x3466 = INT32_MIN;
volatile uint16_t x3473 = UINT16_MAX;
static uint8_t x3491 = UINT8_MAX;
int16_t x3534 = -11;
static int64_t x3535 = INT64_MIN;
int8_t x3546 = INT8_MAX;
uint32_t x3548 = UINT32_MAX;
int64_t x3554 = -1673427700175871LL;
volatile int8_t x3555 = 1;
uint16_t x3559 = 1603U;
int64_t t194 = -2818LL;
uint64_t x3687 = 27168584948LLU;
volatile uint64_t x3713 = 2069434305396LLU;
uint32_t x3729 = UINT32_MAX;
uint32_t t198 = 1288360U;
int8_t x3742 = INT8_MIN;
static int32_t x3744 = INT32_MIN;


void f0(void) {
    	int32_t x13 = -1;
	volatile int16_t x14 = -21;
	volatile int8_t x15 = 0;
	static volatile int32_t t0 = 217891170;

    t0 = ((x13-x14)<<(x15%x16));

    if (t0 != 20) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x17 = 1988141U;
	uint32_t x18 = UINT32_MAX;
	uint16_t x19 = 0U;
	static int32_t x20 = INT32_MIN;

    t1 = ((x17-x18)<<(x19%x20));

    if (t1 != 1988142U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x49 = 29653U;
	volatile int64_t x50 = -51623099377LL;
	int16_t x51 = INT16_MIN;
	int32_t x52 = -1;
	volatile int64_t t2 = 13085637LL;

    t2 = ((x49-x50)<<(x51%x52));

    if (t2 != 51623129030LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x57 = 257;
	int16_t x59 = -228;
	int64_t x60 = 1LL;
	uint32_t t3 = 477U;

    t3 = ((x57-x58)<<(x59%x60));

    if (t3 != 4287619929U) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x61 = 351615711055LL;
	uint16_t x62 = 475U;
	volatile int32_t x63 = INT32_MAX;

    t4 = ((x61-x62)<<(x63%x64));

    if (t4 != 351615710580LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x65 = 205;
	int64_t x66 = -1LL;
	uint16_t x67 = 3688U;
	volatile int8_t x68 = 26;

    t5 = ((x65-x66)<<(x67%x68));

    if (t5 != 864026624LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x101 = 1085;
	volatile int16_t x102 = INT16_MIN;
	uint8_t x103 = 11U;
	uint64_t x104 = 4LLU;

    t6 = ((x101-x102)<<(x103%x104));

    if (t6 != 270824) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x109 = -1LL;
	int64_t x111 = INT64_MAX;
	static uint16_t x112 = 699U;
	volatile int64_t t7 = 13252861LL;

    t7 = ((x109-x110)<<(x111%x112));

    if (t7 != 1840082101207040LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x117 = -1150;
	int64_t x118 = INT64_MIN;
	int32_t x120 = -1;
	volatile int64_t t8 = 1407235117212907LL;

    t8 = ((x117-x118)<<(x119%x120));

    if (t8 != 9223372036854774658LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x133 = -1;
	volatile int32_t x134 = -1;
	volatile int32_t x135 = INT32_MIN;
	static int32_t x136 = -1;
	volatile int32_t t9 = -7930170;

    t9 = ((x133-x134)<<(x135%x136));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x145 = 29U;
	int64_t x146 = -1LL;
	int32_t x147 = 39;
	volatile int64_t t10 = 5824053177335649LL;

    t10 = ((x145-x146)<<(x147%x148));

    if (t10 != 16492674416640LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x170 = -1;
	uint16_t x171 = UINT16_MAX;
	volatile uint8_t x172 = 4U;
	static volatile int32_t t11 = 1;

    t11 = ((x169-x170)<<(x171%x172));

    if (t11 != 33784) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile uint8_t x189 = UINT8_MAX;
	int32_t x190 = -1;
	int32_t x191 = -1377087;
	int8_t x192 = -1;
	int32_t t12 = -9850;

    t12 = ((x189-x190)<<(x191%x192));

    if (t12 != 256) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x225 = 3343902772808418LLU;
	int32_t x226 = 1048098336;
	volatile int64_t x227 = INT64_MIN;
	int16_t x228 = INT16_MIN;
	uint64_t t13 = 12703590251173LLU;

    t13 = ((x225-x226)<<(x227%x228));

    if (t13 != 3343901724710082LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x277 = -1;
	uint64_t x278 = UINT64_MAX;
	uint8_t x279 = 4U;
	int8_t x280 = -1;
	volatile uint64_t t14 = 7605817504681210690LLU;

    t14 = ((x277-x278)<<(x279%x280));

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x285 = INT16_MIN;
	uint64_t x286 = UINT64_MAX;
	int8_t x287 = -2;
	uint32_t x288 = 138U;
	volatile uint64_t t15 = 944164727988774225LLU;

    t15 = ((x285-x286)<<(x287%x288));

    if (t15 != 72057594037927936LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x309 = INT16_MAX;
	volatile int16_t x310 = -1448;
	int16_t x311 = 7;
	static volatile int16_t x312 = INT16_MIN;

    t16 = ((x309-x310)<<(x311%x312));

    if (t16 != 4379520) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint16_t x319 = 12U;
	static volatile uint32_t t17 = 241151U;

    t17 = ((x317-x318)<<(x319%x320));

    if (t17 != 127U) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x345 = 107514;
	volatile int32_t x347 = INT32_MAX;
	volatile int32_t t18 = -74;

    t18 = ((x345-x346)<<(x347%x348));

    if (t18 != 107514) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x366 = INT16_MIN;
	volatile int32_t x368 = INT32_MIN;

    t19 = ((x365-x366)<<(x367%x368));

    if (t19 != 518368) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x373 = UINT32_MAX;
	volatile uint64_t x374 = 2326298068336602722LLU;
	static uint64_t x375 = UINT64_MAX;
	static volatile uint64_t t20 = 87074575LLU;

    t20 = ((x373-x374)<<(x375%x376));

    if (t20 != 16120446009667916189LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint8_t x381 = 1U;
	uint64_t x382 = UINT64_MAX;
	uint32_t x383 = UINT32_MAX;
	int64_t x384 = -1LL;

    t21 = ((x381-x382)<<(x383%x384));

    if (t21 != 2LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint64_t x390 = UINT64_MAX;
	static volatile int32_t x391 = INT32_MAX;
	int8_t x392 = 14;
	uint64_t t22 = 251LLU;

    t22 = ((x389-x390)<<(x391%x392));

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x432 = -1;
	uint64_t t23 = 72370723662838LLU;

    t23 = ((x429-x430)<<(x431%x432));

    if (t23 != 18446743690533868467LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x433 = 18702838938047213LLU;
	uint16_t x434 = 1U;
	int16_t x435 = -1;
	static int32_t x436 = -1;
	uint64_t t24 = 1011046897LLU;

    t24 = ((x433-x434)<<(x435%x436));

    if (t24 != 18702838938047212LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x438 = INT8_MIN;
	uint8_t x439 = 7U;
	uint16_t x440 = UINT16_MAX;
	int64_t t25 = 4391665623049023439LL;

    t25 = ((x437-x438)<<(x439%x440));

    if (t25 != 16256LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x457 = 28239750LLU;
	int32_t x458 = -1;
	static uint8_t x460 = 1U;
	uint64_t t26 = 35909311470908LLU;

    t26 = ((x457-x458)<<(x459%x460));

    if (t26 != 28239751LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x473 = -1;
	volatile int32_t x475 = INT32_MIN;
	int32_t x476 = -1;
	volatile int32_t t27 = INT32_MAX;

    t27 = ((x473-x474)<<(x475%x476));

    if (t27 != INT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x481 = INT8_MIN;
	volatile int8_t x482 = INT8_MIN;
	int32_t x483 = 1;
	int8_t x484 = INT8_MIN;
	int32_t t28 = 244428;

    t28 = ((x481-x482)<<(x483%x484));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x517 = 1U;
	int16_t x518 = 0;
	uint16_t x519 = 25U;
	uint8_t x520 = 12U;

    t29 = ((x517-x518)<<(x519%x520));

    if (t29 != 2) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x537 = UINT16_MAX;
	volatile int8_t x538 = -1;
	uint8_t x539 = 0U;
	int64_t x540 = INT64_MIN;
	int32_t t30 = 8504672;

    t30 = ((x537-x538)<<(x539%x540));

    if (t30 != 65536) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x605 = 15700LL;
	int32_t x606 = 171;
	uint32_t x608 = 15U;
	int64_t t31 = -11860124LL;

    t31 = ((x605-x606)<<(x607%x608));

    if (t31 != 124232LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint8_t x629 = 1U;
	int64_t x630 = -1LL;
	int32_t x631 = 2326553;
	int16_t x632 = -1;
	volatile int64_t t32 = 95114LL;

    t32 = ((x629-x630)<<(x631%x632));

    if (t32 != 2LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x637 = UINT16_MAX;
	int16_t x638 = INT16_MIN;
	uint8_t x640 = 1U;

    t33 = ((x637-x638)<<(x639%x640));

    if (t33 != 98303) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x641 = UINT32_MAX;
	volatile int32_t x642 = INT32_MAX;
	uint8_t x644 = 5U;

    t34 = ((x641-x642)<<(x643%x644));

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x657 = 123118986192LL;
	volatile uint8_t x658 = 116U;
	uint64_t x659 = UINT64_MAX;
	static int64_t t35 = -3017LL;

    t35 = ((x657-x658)<<(x659%x660));

    if (t35 != 984951888608LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x678 = -10;
	int8_t x679 = -1;
	int32_t x680 = 1;
	static volatile int32_t t36 = -1158134;

    t36 = ((x677-x678)<<(x679%x680));

    if (t36 != 79) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x686 = INT8_MIN;
	int8_t x687 = INT8_MIN;
	int8_t x688 = -1;
	int32_t t37 = 626707;

    t37 = ((x685-x686)<<(x687%x688));

    if (t37 != 132) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x693 = -1;
	static int32_t x694 = -1;
	static int16_t x695 = 1;
	static volatile uint16_t x696 = 3U;
	int32_t t38 = 610316437;

    t38 = ((x693-x694)<<(x695%x696));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x697 = INT8_MIN;
	static int16_t x698 = INT16_MIN;
	static volatile int16_t x700 = -1512;
	volatile int32_t t39 = -1873;

    t39 = ((x697-x698)<<(x699%x700));

    if (t39 != 66846720) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile uint64_t x713 = UINT64_MAX;
	int16_t x714 = -1;
	int8_t x715 = 5;
	static uint64_t x716 = UINT64_MAX;

    t40 = ((x713-x714)<<(x715%x716));

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x729 = 0U;
	int8_t x730 = INT8_MIN;
	volatile int16_t x732 = INT16_MIN;
	volatile int32_t t41 = 7;

    t41 = ((x729-x730)<<(x731%x732));

    if (t41 != 128) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile int32_t x748 = -1;
	static uint64_t t42 = 134LLU;

    t42 = ((x745-x746)<<(x747%x748));

    if (t42 != 17891651202394116779LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x753 = 2210007583566868LLU;
	int64_t x754 = -41848235084LL;
	uint8_t x755 = UINT8_MAX;
	int8_t x756 = -1;
	uint64_t t43 = 25875665059844160LLU;

    t43 = ((x753-x754)<<(x755%x756));

    if (t43 != 2210049431801952LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x757 = -7;
	int8_t x760 = INT8_MAX;

    t44 = ((x757-x758)<<(x759%x760));

    if (t44 != 15213248756318208LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x765 = -1;
	int16_t x766 = -1;
	uint64_t x767 = 8LLU;
	static int8_t x768 = INT8_MIN;
	static volatile int32_t t45 = -410;

    t45 = ((x765-x766)<<(x767%x768));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x793 = 1850980079351930LLU;
	uint8_t x794 = 103U;
	volatile uint64_t t46 = 2LLU;

    t46 = ((x793-x794)<<(x795%x796));

    if (t46 != 1850980079351827LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x797 = INT16_MAX;
	uint64_t x798 = 45915368LLU;
	uint8_t x800 = UINT8_MAX;
	static volatile uint64_t t47 = 1734752423376LLU;

    t47 = ((x797-x798)<<(x799%x800));

    if (t47 != 10113958863167291392LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x826 = 651;
	uint16_t x827 = UINT16_MAX;
	int8_t x828 = -1;

    t48 = ((x825-x826)<<(x827%x828));

    if (t48 != 2354) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x834 = UINT64_MAX;
	int64_t x836 = -1LL;
	static volatile uint64_t t49 = 1734464LLU;

    t49 = ((x833-x834)<<(x835%x836));

    if (t49 != 128LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x849 = 2413LL;
	static int8_t x850 = -1;
	int64_t x851 = INT64_MIN;
	int64_t x852 = INT64_MIN;
	volatile int64_t t50 = -108389571517LL;

    t50 = ((x849-x850)<<(x851%x852));

    if (t50 != 2414LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x866 = -8820;
	static int8_t x867 = -1;
	volatile uint8_t x868 = 1U;
	int32_t t51 = -121265025;

    t51 = ((x865-x866)<<(x867%x868));

    if (t51 != 8854) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x873 = INT16_MAX;
	static int16_t x874 = INT16_MIN;
	volatile uint16_t x875 = 0U;
	volatile int32_t x876 = -1;

    t52 = ((x873-x874)<<(x875%x876));

    if (t52 != 65535) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x917 = 1145725;
	int32_t x918 = -1;
	int16_t x919 = 72;
	volatile int32_t t53 = -14639478;

    t53 = ((x917-x918)<<(x919%x920));

    if (t53 != 1145726) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x930 = INT16_MIN;
	volatile uint32_t x931 = UINT32_MAX;
	static uint16_t x932 = 8U;
	static int32_t t54 = 2881708;

    t54 = ((x929-x930)<<(x931%x932));

    if (t54 != 4194304) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile uint32_t x945 = UINT32_MAX;
	int32_t x946 = INT32_MIN;
	uint32_t x947 = UINT32_MAX;
	int32_t x948 = 62;

    t55 = ((x945-x946)<<(x947%x948));

    if (t55 != 4294967288U) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile uint32_t x977 = UINT32_MAX;
	int32_t x978 = INT32_MAX;
	uint8_t x980 = 1U;
	volatile uint32_t t56 = 66661251U;

    t56 = ((x977-x978)<<(x979%x980));

    if (t56 != 2147483648U) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x985 = 4;
	volatile int16_t x986 = INT16_MIN;
	int8_t x987 = 0;

    t57 = ((x985-x986)<<(x987%x988));

    if (t57 != 32772) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x1010 = UINT64_MAX;
	volatile int8_t x1011 = -1;
	volatile int8_t x1012 = -1;

    t58 = ((x1009-x1010)<<(x1011%x1012));

    if (t58 != 13539LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x1053 = UINT32_MAX;
	static volatile int16_t x1054 = INT16_MIN;
	volatile int64_t x1055 = 7620LL;
	uint32_t t59 = 786984U;

    t59 = ((x1053-x1054)<<(x1055%x1056));

    if (t59 != 32767U) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x1061 = INT16_MIN;
	uint64_t x1062 = UINT64_MAX;
	uint64_t x1063 = 987601838504LLU;
	uint16_t x1064 = 14U;

    t60 = ((x1061-x1062)<<(x1063%x1064));

    if (t60 != 18446744073701163264LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x1073 = -1LL;
	int64_t x1074 = INT64_MIN;
	static volatile uint16_t x1075 = UINT16_MAX;
	int16_t x1076 = 1;
	volatile int64_t t61 = INT64_MAX;

    t61 = ((x1073-x1074)<<(x1075%x1076));

    if (t61 != INT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x1093 = -76;
	int8_t x1094 = INT8_MIN;
	static int32_t x1096 = -1;
	volatile int32_t t62 = -253;

    t62 = ((x1093-x1094)<<(x1095%x1096));

    if (t62 != 52) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x1113 = INT16_MAX;
	int16_t x1114 = INT16_MIN;
	uint64_t x1115 = 1029369LLU;
	uint16_t x1116 = 24U;
	int32_t t63 = 57950633;

    t63 = ((x1113-x1114)<<(x1115%x1116));

    if (t63 != 33553920) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x1125 = 167640;
	uint16_t x1126 = 230U;
	static uint64_t x1127 = 1LLU;
	int16_t x1128 = INT16_MIN;
	volatile int32_t t64 = 95180;

    t64 = ((x1125-x1126)<<(x1127%x1128));

    if (t64 != 334820) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint64_t x1133 = UINT64_MAX;
	uint64_t x1135 = UINT64_MAX;
	static int16_t x1136 = INT16_MAX;
	volatile uint64_t t65 = 64449236LLU;

    t65 = ((x1133-x1134)<<(x1135%x1136));

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint64_t x1177 = 421LLU;
	uint16_t x1179 = 1972U;

    t66 = ((x1177-x1178)<<(x1179%x1180));

    if (t66 != 9223372036854776229LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x1189 = 33U;
	int64_t x1190 = -21024587138LL;
	int16_t x1191 = 0;
	int64_t t67 = 1366LL;

    t67 = ((x1189-x1190)<<(x1191%x1192));

    if (t67 != 21024587171LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x1197 = 39773;
	uint64_t x1198 = UINT64_MAX;
	int8_t x1199 = 3;
	uint64_t t68 = 7814130217LLU;

    t68 = ((x1197-x1198)<<(x1199%x1200));

    if (t68 != 318192LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x1213 = 1;
	static int8_t x1214 = -1;
	uint32_t x1215 = UINT32_MAX;
	int8_t x1216 = 38;
	int32_t t69 = 12990340;

    t69 = ((x1213-x1214)<<(x1215%x1216));

    if (t69 != 64) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x1222 = INT8_MIN;
	int8_t x1224 = INT8_MIN;
	volatile uint64_t t70 = 1241LLU;

    t70 = ((x1221-x1222)<<(x1223%x1224));

    if (t70 != 133LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x1269 = INT64_MIN;
	uint64_t x1270 = 6939LLU;
	static uint32_t x1271 = 1997U;
	volatile int16_t x1272 = 1;
	volatile uint64_t t71 = 5243720870851388859LLU;

    t71 = ((x1269-x1270)<<(x1271%x1272));

    if (t71 != 9223372036854768869LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int64_t x1273 = 1971890191711808LL;
	int8_t x1274 = INT8_MIN;
	volatile int64_t t72 = 3LL;

    t72 = ((x1273-x1274)<<(x1275%x1276));

    if (t72 != 7887560766847744LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x1293 = 4311898201384828093LL;
	int8_t x1294 = 4;
	int64_t x1295 = -1LL;
	uint64_t x1296 = UINT64_MAX;
	volatile int64_t t73 = 51904LL;

    t73 = ((x1293-x1294)<<(x1295%x1296));

    if (t73 != 4311898201384828089LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x1321 = 45U;
	static int16_t x1322 = -485;
	static volatile int16_t x1323 = -15;
	int8_t x1324 = -1;
	int32_t t74 = 1;

    t74 = ((x1321-x1322)<<(x1323%x1324));

    if (t74 != 530) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x1329 = INT32_MIN;
	uint32_t x1330 = UINT32_MAX;
	static int32_t x1331 = -16295195;
	static uint32_t t75 = 110171U;

    t75 = ((x1329-x1330)<<(x1331%x1332));

    if (t75 != 2U) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x1333 = INT8_MAX;
	int8_t x1334 = 31;
	int32_t t76 = -199231;

    t76 = ((x1333-x1334)<<(x1335%x1336));

    if (t76 != 96) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x1373 = UINT8_MAX;
	int8_t x1376 = INT8_MAX;
	volatile uint32_t t77 = 34U;

    t77 = ((x1373-x1374)<<(x1375%x1376));

    if (t77 != 18176U) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x1381 = UINT64_MAX;
	int8_t x1382 = INT8_MIN;
	static uint8_t x1383 = 48U;
	int64_t x1384 = INT64_MIN;
	uint64_t t78 = 511252LLU;

    t78 = ((x1381-x1382)<<(x1383%x1384));

    if (t78 != 35747322042253312LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x1390 = 0;
	static volatile int32_t x1391 = INT32_MAX;
	static int16_t x1392 = INT16_MAX;
	int32_t t79 = -27988;

    t79 = ((x1389-x1390)<<(x1391%x1392));

    if (t79 != 48400) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x1413 = 8780U;
	int8_t x1414 = -1;
	static int16_t x1415 = INT16_MIN;
	int16_t x1416 = -32;
	int32_t t80 = -32202630;

    t80 = ((x1413-x1414)<<(x1415%x1416));

    if (t80 != 8781) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint16_t x1429 = 245U;
	int16_t x1430 = -1;
	static int16_t x1431 = 11;
	int16_t x1432 = 13;
	int32_t t81 = 118966521;

    t81 = ((x1429-x1430)<<(x1431%x1432));

    if (t81 != 503808) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile uint64_t x1433 = 75LLU;
	int32_t x1434 = INT32_MIN;
	uint16_t x1435 = 29U;
	static int64_t x1436 = -1LL;
	volatile uint64_t t82 = 6153996717026LLU;

    t82 = ((x1433-x1434)<<(x1435%x1436));

    if (t82 != 2147483723LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint64_t x1473 = 16671951207474LLU;
	int32_t x1474 = -371482666;
	volatile uint32_t x1475 = 860578059U;
	static int64_t x1476 = -1LL;

    t83 = ((x1473-x1474)<<(x1475%x1476));

    if (t83 != 16672322690140LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x1481 = 76U;
	uint16_t x1482 = 48U;
	volatile uint8_t x1483 = 40U;
	int64_t x1484 = -1LL;
	volatile int32_t t84 = 125404694;

    t84 = ((x1481-x1482)<<(x1483%x1484));

    if (t84 != 28) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int8_t x1533 = INT8_MAX;
	uint64_t x1534 = UINT64_MAX;
	uint64_t x1535 = UINT64_MAX;
	uint8_t x1536 = 3U;

    t85 = ((x1533-x1534)<<(x1535%x1536));

    if (t85 != 128LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x1537 = INT8_MIN;
	int32_t x1538 = INT32_MIN;
	static uint16_t x1539 = 0U;
	int16_t x1540 = -148;
	int32_t t86 = 153;

    t86 = ((x1537-x1538)<<(x1539%x1540));

    if (t86 != 2147483520) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x1541 = INT64_MIN;
	uint64_t x1542 = UINT64_MAX;
	volatile int64_t x1543 = INT64_MAX;
	volatile int16_t x1544 = -1;

    t87 = ((x1541-x1542)<<(x1543%x1544));

    if (t87 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x1557 = -1;
	static volatile int8_t x1559 = INT8_MIN;
	volatile int8_t x1560 = -1;
	volatile int32_t t88 = -414156106;

    t88 = ((x1557-x1558)<<(x1559%x1560));

    if (t88 != 8) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x1601 = -5;
	uint32_t x1602 = 25U;
	volatile int16_t x1603 = 0;
	uint8_t x1604 = 6U;
	volatile uint32_t t89 = 97641U;

    t89 = ((x1601-x1602)<<(x1603%x1604));

    if (t89 != 4294967266U) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x1613 = -1;
	int16_t x1614 = -126;
	int8_t x1615 = 1;
	int16_t x1616 = INT16_MIN;

    t90 = ((x1613-x1614)<<(x1615%x1616));

    if (t90 != 250) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x1626 = 114937U;
	int64_t x1628 = -1LL;
	int64_t t91 = -338412850LL;

    t91 = ((x1625-x1626)<<(x1627%x1628));

    if (t91 != 9223372036854660870LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x1649 = 0U;
	uint32_t x1651 = 17U;
	volatile uint64_t x1652 = UINT64_MAX;
	uint64_t t92 = 39LLU;

    t92 = ((x1649-x1650)<<(x1651%x1652));

    if (t92 != 5673236283632910336LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x1659 = INT8_MAX;
	int8_t x1660 = INT8_MAX;
	int32_t t93 = 1;

    t93 = ((x1657-x1658)<<(x1659%x1660));

    if (t93 != 224) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x1661 = 14786U;
	int64_t x1663 = INT64_MAX;
	uint8_t x1664 = 6U;
	int32_t t94 = 96354;

    t94 = ((x1661-x1662)<<(x1663%x1664));

    if (t94 != 29566) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint64_t x1705 = 273582235831LLU;
	int8_t x1706 = INT8_MIN;
	int64_t x1707 = -29575658719LL;
	volatile uint64_t t95 = 128799223471133782LLU;

    t95 = ((x1705-x1706)<<(x1707%x1708));

    if (t95 != 273582235959LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x1717 = INT16_MAX;
	static uint16_t x1718 = 1249U;
	volatile int8_t x1720 = INT8_MIN;
	static int32_t t96 = -6;

    t96 = ((x1717-x1718)<<(x1719%x1720));

    if (t96 != 31518) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x1725 = 15;
	int16_t x1726 = INT16_MIN;
	int64_t x1727 = -1LL;
	uint64_t x1728 = UINT64_MAX;
	int32_t t97 = -6773;

    t97 = ((x1725-x1726)<<(x1727%x1728));

    if (t97 != 32783) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x1729 = INT16_MIN;
	uint32_t x1730 = 11U;
	uint16_t x1731 = 21581U;
	volatile int64_t x1732 = -1LL;
	uint32_t t98 = 272207U;

    t98 = ((x1729-x1730)<<(x1731%x1732));

    if (t98 != 4294934517U) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x1737 = -11;
	int16_t x1739 = INT16_MIN;
	static volatile int64_t t99 = 45469332LL;

    t99 = ((x1737-x1738)<<(x1739%x1740));

    if (t99 != 183LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x1765 = 3896U;
	uint8_t x1766 = 4U;
	int16_t x1767 = -741;
	int16_t x1768 = -1;
	int32_t t100 = -8392823;

    t100 = ((x1765-x1766)<<(x1767%x1768));

    if (t100 != 3892) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x1881 = INT16_MAX;
	volatile int64_t x1882 = -1LL;
	volatile uint8_t x1883 = UINT8_MAX;
	volatile int64_t t101 = 425LL;

    t101 = ((x1881-x1882)<<(x1883%x1884));

    if (t101 != 35184372088832LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x1904 = INT16_MIN;

    t102 = ((x1901-x1902)<<(x1903%x1904));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x1969 = 2679U;
	volatile int8_t x1970 = 2;
	uint64_t x1972 = 2032533658020073755LLU;
	int32_t t103 = 863648587;

    t103 = ((x1969-x1970)<<(x1971%x1972));

    if (t103 != 5354) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x1993 = 30;
	volatile int16_t x1994 = INT16_MIN;
	int16_t x1995 = INT16_MIN;
	int32_t t104 = 12;

    t104 = ((x1993-x1994)<<(x1995%x1996));

    if (t104 != 32798) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x2022 = -1;
	int16_t x2023 = INT16_MIN;
	volatile int8_t x2024 = -1;
	int32_t t105 = 83539;

    t105 = ((x2021-x2022)<<(x2023%x2024));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x2042 = UINT64_MAX;
	volatile int8_t x2043 = 0;

    t106 = ((x2041-x2042)<<(x2043%x2044));

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x2057 = INT32_MAX;
	uint32_t x2058 = UINT32_MAX;
	static volatile int32_t x2059 = INT32_MIN;
	int32_t x2060 = INT32_MIN;
	uint32_t t107 = 32227772U;

    t107 = ((x2057-x2058)<<(x2059%x2060));

    if (t107 != 2147483648U) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x2101 = -1;
	volatile int8_t x2104 = 2;
	static uint64_t t108 = 13275131625989497LLU;

    t108 = ((x2101-x2102)<<(x2103%x2104));

    if (t108 != 18446744072939463385LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x2105 = 14;
	volatile int16_t x2106 = INT16_MIN;
	int32_t x2107 = INT32_MAX;
	int8_t x2108 = -1;

    t109 = ((x2105-x2106)<<(x2107%x2108));

    if (t109 != 32782) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint64_t x2137 = 36305857LLU;
	static int8_t x2138 = INT8_MAX;
	static int32_t x2140 = INT32_MIN;
	static uint64_t t110 = 201939632701746LLU;

    t110 = ((x2137-x2138)<<(x2139%x2140));

    if (t110 != 36305730LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x2149 = INT32_MAX;
	uint32_t x2150 = 94U;
	int8_t x2151 = INT8_MAX;
	int8_t x2152 = INT8_MAX;
	uint32_t t111 = 4072409U;

    t111 = ((x2149-x2150)<<(x2151%x2152));

    if (t111 != 2147483553U) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x2157 = 27507167U;
	uint8_t x2158 = 1U;
	int16_t x2159 = INT16_MIN;
	int8_t x2160 = INT8_MIN;
	volatile uint32_t t112 = 3U;

    t112 = ((x2157-x2158)<<(x2159%x2160));

    if (t112 != 27507166U) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x2201 = INT64_MAX;
	static volatile int64_t x2202 = INT64_MAX;
	volatile int64_t t113 = -14757898125818LL;

    t113 = ((x2201-x2202)<<(x2203%x2204));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x2221 = 3435732161LLU;
	static int64_t x2222 = -1844243686LL;
	uint8_t x2223 = 0U;
	int16_t x2224 = -1;
	uint64_t t114 = 8674127531395LLU;

    t114 = ((x2221-x2222)<<(x2223%x2224));

    if (t114 != 5279975847LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x2229 = 788853497U;
	int16_t x2230 = -114;
	static volatile int64_t x2231 = INT64_MAX;
	volatile uint32_t t115 = 6593U;

    t115 = ((x2229-x2230)<<(x2231%x2232));

    if (t115 != 1577707222U) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x2245 = 787354767050698LL;
	int8_t x2246 = INT8_MIN;
	int8_t x2247 = INT8_MIN;

    t116 = ((x2245-x2246)<<(x2247%x2248));

    if (t116 != 787354767050826LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint8_t x2253 = UINT8_MAX;
	int32_t x2254 = -789;
	int8_t x2255 = 42;
	uint8_t x2256 = 1U;
	int32_t t117 = 0;

    t117 = ((x2253-x2254)<<(x2255%x2256));

    if (t117 != 1044) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint32_t t118 = 53U;

    t118 = ((x2261-x2262)<<(x2263%x2264));

    if (t118 != 0U) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint16_t x2273 = UINT16_MAX;
	uint8_t x2274 = 55U;
	volatile int32_t t119 = -1019908;

    t119 = ((x2273-x2274)<<(x2275%x2276));

    if (t119 != 65480) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x2281 = UINT32_MAX;
	int32_t x2282 = -39198111;
	int32_t x2283 = INT32_MIN;
	volatile int32_t x2284 = INT32_MIN;
	volatile uint32_t t120 = 54552U;

    t120 = ((x2281-x2282)<<(x2283%x2284));

    if (t120 != 39198110U) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x2329 = 34U;
	volatile int32_t x2330 = 4;
	int32_t x2332 = 14;
	volatile int32_t t121 = 89242;

    t121 = ((x2329-x2330)<<(x2331%x2332));

    if (t121 != 480) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x2337 = INT8_MAX;
	int32_t x2339 = INT32_MAX;
	int32_t x2340 = INT32_MAX;
	static int32_t t122 = 707669409;

    t122 = ((x2337-x2338)<<(x2339%x2340));

    if (t122 != 255) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x2357 = 1U;
	int8_t x2358 = INT8_MIN;
	volatile int32_t t123 = -30;

    t123 = ((x2357-x2358)<<(x2359%x2360));

    if (t123 != 129) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x2397 = -1;
	volatile uint64_t x2398 = 635218732516194943LLU;
	uint64_t x2399 = 1LLU;
	volatile int16_t x2400 = 1;
	uint64_t t124 = 2003708122678467LLU;

    t124 = ((x2397-x2398)<<(x2399%x2400));

    if (t124 != 17811525341193356672LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile uint64_t x2405 = UINT64_MAX;
	volatile int8_t x2406 = 0;
	int64_t x2407 = INT64_MIN;
	int64_t x2408 = INT64_MIN;
	volatile uint64_t t125 = UINT64_MAX;

    t125 = ((x2405-x2406)<<(x2407%x2408));

    if (t125 != UINT64_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x2413 = UINT32_MAX;
	uint16_t x2414 = 13962U;
	static uint8_t x2416 = 4U;
	volatile uint32_t t126 = 842U;

    t126 = ((x2413-x2414)<<(x2415%x2416));

    if (t126 != 4294855592U) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint8_t x2437 = 0U;
	int16_t x2438 = INT16_MIN;
	int64_t x2439 = 1LL;
	static int16_t x2440 = INT16_MIN;
	int32_t t127 = -5;

    t127 = ((x2437-x2438)<<(x2439%x2440));

    if (t127 != 65536) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x2441 = 235754493932324LLU;
	volatile int64_t x2442 = INT64_MAX;
	int16_t x2443 = INT16_MAX;
	static uint64_t t128 = 5421776361LLU;

    t128 = ((x2441-x2442)<<(x2443%x2444));

    if (t128 != 30176575223337600LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x2446 = 314542965830661107LLU;
	uint32_t x2447 = 47U;
	static int16_t x2448 = INT16_MIN;
	volatile uint64_t t129 = 70275035712392LLU;

    t129 = ((x2445-x2446)<<(x2447%x2448));

    if (t129 != 2740018160789880832LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x2449 = 1;
	volatile int64_t x2450 = -470108548249734441LL;
	uint16_t x2451 = 0U;
	uint8_t x2452 = 105U;

    t130 = ((x2449-x2450)<<(x2451%x2452));

    if (t130 != 470108548249734442LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x2462 = 46U;
	int64_t x2463 = -4089409038027130LL;
	static int32_t x2464 = -1;
	static uint32_t t131 = 488706U;

    t131 = ((x2461-x2462)<<(x2463%x2464));

    if (t131 != 3753U) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x2470 = INT16_MIN;
	volatile uint32_t x2471 = 4U;
	volatile int8_t x2472 = INT8_MIN;
	static volatile int64_t t132 = 2903573795024LL;

    t132 = ((x2469-x2470)<<(x2471%x2472));

    if (t132 != 524304LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x2473 = INT32_MIN;
	volatile uint32_t x2474 = 50245U;
	uint64_t x2475 = 71224116662LLU;
	uint16_t x2476 = 7U;
	uint32_t t133 = 3U;

    t133 = ((x2473-x2474)<<(x2475%x2476));

    if (t133 != 4291751616U) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint32_t x2481 = 0U;
	int16_t x2482 = INT16_MIN;
	int64_t x2483 = INT64_MIN;
	int8_t x2484 = INT8_MIN;
	volatile uint32_t t134 = 7248U;

    t134 = ((x2481-x2482)<<(x2483%x2484));

    if (t134 != 32768U) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x2493 = INT16_MIN;
	static volatile uint32_t x2494 = 1455333U;
	uint8_t x2495 = 1U;
	volatile int32_t x2496 = INT32_MAX;
	uint32_t t135 = 1247785U;

    t135 = ((x2493-x2494)<<(x2495%x2496));

    if (t135 != 4291991094U) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x2511 = -1;
	static int8_t x2512 = -1;
	volatile int32_t t136 = 835352218;

    t136 = ((x2509-x2510)<<(x2511%x2512));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x2545 = 13493815779LLU;
	int32_t x2546 = INT32_MIN;
	uint8_t x2547 = 0U;
	static int64_t x2548 = 69423132910766LL;
	static volatile uint64_t t137 = 620201695338404667LLU;

    t137 = ((x2545-x2546)<<(x2547%x2548));

    if (t137 != 15641299427LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x2553 = 7U;
	uint16_t x2554 = 5U;
	int32_t x2555 = INT32_MAX;
	uint8_t x2556 = 1U;
	volatile int32_t t138 = 673481;

    t138 = ((x2553-x2554)<<(x2555%x2556));

    if (t138 != 2) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x2569 = INT8_MAX;
	volatile uint32_t x2570 = 126008U;
	uint8_t x2571 = 12U;
	uint8_t x2572 = 3U;
	uint32_t t139 = 1012068571U;

    t139 = ((x2569-x2570)<<(x2571%x2572));

    if (t139 != 4294841415U) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x2645 = -1;
	static volatile int32_t x2646 = INT32_MIN;
	int16_t x2647 = INT16_MIN;
	static int32_t t140 = INT32_MAX;

    t140 = ((x2645-x2646)<<(x2647%x2648));

    if (t140 != INT32_MAX) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int8_t x2673 = INT8_MIN;
	uint64_t x2674 = 1642988460LLU;
	uint32_t x2675 = 594745787U;
	int16_t x2676 = 5;
	volatile uint64_t t141 = 72496LLU;

    t141 = ((x2673-x2674)<<(x2675%x2676));

    if (t141 != 18446744067137597264LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint32_t x2681 = UINT32_MAX;
	int32_t x2683 = 104922904;

    t142 = ((x2681-x2682)<<(x2683%x2684));

    if (t142 != 4294967296LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x2706 = 2;
	int32_t x2707 = 14961;
	int16_t x2708 = 10;

    t143 = ((x2705-x2706)<<(x2707%x2708));

    if (t143 != 250) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x2713 = 13;
	uint8_t x2714 = 10U;
	int32_t x2715 = INT32_MAX;
	int32_t x2716 = INT32_MAX;
	volatile int32_t t144 = 36973244;

    t144 = ((x2713-x2714)<<(x2715%x2716));

    if (t144 != 3) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x2729 = -1;
	uint64_t x2730 = 4201000767630LLU;
	int16_t x2731 = INT16_MIN;
	uint64_t t145 = 107012802076169LLU;

    t145 = ((x2729-x2730)<<(x2731%x2732));

    if (t145 != 18446739872708783985LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x2737 = INT32_MIN;
	uint32_t x2738 = 7386973U;
	int16_t x2739 = INT16_MIN;
	static int8_t x2740 = -1;
	static uint32_t t146 = 439709U;

    t146 = ((x2737-x2738)<<(x2739%x2740));

    if (t146 != 2140096675U) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x2757 = 9;
	volatile int32_t x2760 = -1;

    t147 = ((x2757-x2758)<<(x2759%x2760));

    if (t147 != 8120LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x2777 = -482987572;
	static int32_t x2779 = 6;
	uint64_t x2780 = 39127832412LLU;

    t148 = ((x2777-x2778)<<(x2779%x2780));

    if (t148 != 3448532864U) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x2795 = -1;
	uint32_t x2796 = UINT32_MAX;
	int32_t t149 = -1;

    t149 = ((x2793-x2794)<<(x2795%x2796));

    if (t149 != 248) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x2843 = 10LLU;

    t150 = ((x2841-x2842)<<(x2843%x2844));

    if (t150 != 266240) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x2877 = INT16_MAX;
	int8_t x2878 = INT8_MIN;
	int64_t x2880 = -1LL;

    t151 = ((x2877-x2878)<<(x2879%x2880));

    if (t151 != 32895) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x2889 = INT8_MIN;
	int64_t x2891 = INT64_MAX;
	static uint8_t x2892 = 2U;
	uint32_t t152 = 14U;

    t152 = ((x2889-x2890)<<(x2891%x2892));

    if (t152 != 4294967014U) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x2917 = 1U;
	int16_t x2918 = -10;
	static volatile int8_t x2919 = 11;
	uint16_t x2920 = UINT16_MAX;
	uint32_t t153 = 1468730796U;

    t153 = ((x2917-x2918)<<(x2919%x2920));

    if (t153 != 22528U) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x2933 = INT8_MIN;
	static uint64_t x2934 = 33755670291504LLU;
	volatile uint16_t x2935 = 50U;
	int32_t x2936 = INT32_MAX;
	volatile uint64_t t154 = 40LLU;

    t154 = ((x2933-x2934)<<(x2935%x2936));

    if (t154 != 7872292148643627008LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x2961 = INT32_MAX;
	volatile uint8_t x2962 = UINT8_MAX;
	uint16_t x2963 = 0U;
	static int64_t x2964 = INT64_MAX;
	int32_t t155 = -28695;

    t155 = ((x2961-x2962)<<(x2963%x2964));

    if (t155 != 2147483392) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x2965 = UINT8_MAX;
	int64_t x2967 = 1113050583881LL;
	int8_t x2968 = -1;

    t156 = ((x2965-x2966)<<(x2967%x2968));

    if (t156 != 256LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x2978 = INT64_MIN;
	int64_t x2979 = -1LL;
	int8_t x2980 = -1;
	static int64_t t157 = -4060375LL;

    t157 = ((x2977-x2978)<<(x2979%x2980));

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint64_t x2993 = UINT64_MAX;
	volatile int32_t x2994 = -2470;
	static volatile int32_t x2995 = 0;
	volatile uint64_t t158 = 2660888004055310689LLU;

    t158 = ((x2993-x2994)<<(x2995%x2996));

    if (t158 != 2469LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint32_t x3013 = UINT32_MAX;
	int64_t x3014 = -7LL;
	static volatile uint64_t x3015 = UINT64_MAX;
	volatile int32_t x3016 = INT32_MAX;

    t159 = ((x3013-x3014)<<(x3015%x3016));

    if (t159 != 34359738416LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint16_t x3017 = 12561U;
	uint64_t x3018 = 3859636609540423LLU;
	static volatile int8_t x3019 = 36;
	volatile uint32_t x3020 = 100948380U;
	uint64_t t160 = 65370LLU;

    t160 = ((x3017-x3018)<<(x3019%x3020));

    if (t160 != 3374599784932311040LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x3029 = UINT16_MAX;
	int16_t x3030 = 2;
	int32_t t161 = 3;

    t161 = ((x3029-x3030)<<(x3031%x3032));

    if (t161 != 8388224) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x3042 = -1LL;
	int8_t x3043 = -3;
	uint32_t x3044 = 1U;
	static int64_t t162 = 1456952030282720LL;

    t162 = ((x3041-x3042)<<(x3043%x3044));

    if (t162 != 101769LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x3058 = -1LL;
	int64_t x3059 = -1LL;
	int8_t x3060 = -1;
	int64_t t163 = 8198848100383664LL;

    t163 = ((x3057-x3058)<<(x3059%x3060));

    if (t163 != 2147483648LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x3065 = INT8_MIN;
	uint32_t x3066 = 929466U;
	volatile uint8_t x3067 = 2U;
	int8_t x3068 = INT8_MIN;
	uint32_t t164 = 23U;

    t164 = ((x3065-x3066)<<(x3067%x3068));

    if (t164 != 4291248920U) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x3089 = 24804LLU;
	static int32_t x3090 = INT32_MAX;
	volatile uint8_t x3091 = 1U;
	static int32_t x3092 = INT32_MIN;
	volatile uint64_t t165 = 98694447955LLU;

    t165 = ((x3089-x3090)<<(x3091%x3092));

    if (t165 != 18446744069414633930LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x3101 = -1;
	volatile int8_t x3102 = -1;
	static uint32_t x3103 = 9665132U;
	volatile uint32_t x3104 = 1U;
	int32_t t166 = -14;

    t166 = ((x3101-x3102)<<(x3103%x3104));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x3125 = -1;
	int64_t x3126 = INT64_MIN;
	static int8_t x3127 = INT8_MIN;
	int64_t x3128 = -1LL;

    t167 = ((x3125-x3126)<<(x3127%x3128));

    if (t167 != INT64_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int32_t x3137 = -1;
	int64_t x3138 = INT64_MIN;
	int32_t x3139 = 202244;
	int32_t x3140 = -1;
	int64_t t168 = INT64_MAX;

    t168 = ((x3137-x3138)<<(x3139%x3140));

    if (t168 != INT64_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x3153 = INT8_MAX;
	int16_t x3154 = 0;
	volatile int8_t x3155 = 5;
	int64_t x3156 = INT64_MAX;
	int32_t t169 = -295;

    t169 = ((x3153-x3154)<<(x3155%x3156));

    if (t169 != 4064) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x3170 = -1LL;
	int64_t t170 = 7788306243391423LL;

    t170 = ((x3169-x3170)<<(x3171%x3172));

    if (t170 != 1LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x3201 = -1;
	int8_t x3202 = -58;
	static int8_t x3203 = 0;
	volatile int16_t x3204 = INT16_MIN;
	static int32_t t171 = -30;

    t171 = ((x3201-x3202)<<(x3203%x3204));

    if (t171 != 57) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x3210 = INT16_MIN;
	int64_t x3211 = 770131650LL;
	static volatile int16_t x3212 = -14;

    t172 = ((x3209-x3210)<<(x3211%x3212));

    if (t172 != 7618779648LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x3266 = INT8_MIN;
	int8_t x3267 = INT8_MAX;
	uint8_t x3268 = 5U;
	static volatile uint64_t t173 = 449404195445454LLU;

    t173 = ((x3265-x3266)<<(x3267%x3268));

    if (t173 != 35027266999867628LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x3269 = 20910347LL;
	uint64_t x3271 = UINT64_MAX;
	int32_t x3272 = 32;
	int64_t t174 = -415071800882LL;

    t174 = ((x3269-x3270)<<(x3271%x3272));

    if (t174 != 44763892915634176LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x3310 = INT8_MIN;
	uint64_t x3311 = 199365529LLU;
	uint16_t x3312 = 23U;

    t175 = ((x3309-x3310)<<(x3311%x3312));

    if (t175 != 303104) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile uint64_t x3325 = 88580313024LLU;
	int16_t x3326 = -584;
	int16_t x3327 = 16;
	int16_t x3328 = INT16_MAX;
	volatile uint64_t t176 = 1032215716369073LLU;

    t176 = ((x3325-x3326)<<(x3327%x3328));

    if (t176 != 5805199432613888LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x3330 = 22U;
	static int64_t x3331 = INT64_MIN;
	static int16_t x3332 = INT16_MIN;
	int32_t t177 = -1;

    t177 = ((x3329-x3330)<<(x3331%x3332));

    if (t177 != 4) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int16_t x3341 = -11245;
	volatile uint8_t x3343 = 5U;
	int32_t x3344 = INT32_MIN;
	uint32_t t178 = 476439U;

    t178 = ((x3341-x3342)<<(x3343%x3344));

    if (t178 != 4294607488U) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x3373 = -1;
	int16_t x3374 = INT16_MIN;
	static int8_t x3375 = INT8_MIN;
	uint32_t x3376 = 6U;
	int32_t t179 = -10067277;

    t179 = ((x3373-x3374)<<(x3375%x3376));

    if (t179 != 131068) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x3418 = INT16_MIN;
	uint16_t x3419 = 242U;
	int64_t x3420 = -1LL;
	int32_t t180 = -3668;

    t180 = ((x3417-x3418)<<(x3419%x3420));

    if (t180 != 32640) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x3437 = 6U;
	volatile int32_t x3438 = INT32_MIN;
	uint64_t x3439 = UINT64_MAX;
	int8_t x3440 = -1;
	static uint32_t t181 = 651675232U;

    t181 = ((x3437-x3438)<<(x3439%x3440));

    if (t181 != 2147483654U) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x3445 = 6255514LLU;
	int16_t x3446 = 5;
	uint64_t x3447 = UINT64_MAX;
	static int16_t x3448 = -1;
	uint64_t t182 = 42750325091830527LLU;

    t182 = ((x3445-x3446)<<(x3447%x3448));

    if (t182 != 6255509LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint16_t x3458 = 1U;
	int64_t x3460 = -1LL;
	volatile uint32_t t183 = 212U;

    t183 = ((x3457-x3458)<<(x3459%x3460));

    if (t183 != 4294967294U) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x3465 = 91U;
	uint16_t x3467 = 26913U;
	uint8_t x3468 = 115U;
	uint32_t t184 = 17784685U;

    t184 = ((x3465-x3466)<<(x3467%x3468));

    if (t184 != 728U) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x3474 = -1LL;
	volatile int8_t x3475 = INT8_MAX;
	static int8_t x3476 = -1;
	int64_t t185 = 130LL;

    t185 = ((x3473-x3474)<<(x3475%x3476));

    if (t185 != 65536LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x3489 = 0U;
	int8_t x3490 = INT8_MIN;
	uint8_t x3492 = 12U;
	int32_t t186 = 3208138;

    t186 = ((x3489-x3490)<<(x3491%x3492));

    if (t186 != 1024) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x3517 = INT16_MIN;
	volatile int32_t x3518 = INT32_MIN;
	int32_t x3519 = 55985;
	static int8_t x3520 = -1;
	volatile int32_t t187 = -621;

    t187 = ((x3517-x3518)<<(x3519%x3520));

    if (t187 != 2147450880) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x3533 = INT8_MAX;
	static int32_t x3536 = -1;
	int32_t t188 = -45193;

    t188 = ((x3533-x3534)<<(x3535%x3536));

    if (t188 != 138) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int64_t x3545 = INT64_MAX;
	static int16_t x3547 = -1;
	static volatile int64_t t189 = 570816334270644496LL;

    t189 = ((x3545-x3546)<<(x3547%x3548));

    if (t189 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x3553 = INT8_MAX;
	volatile int16_t x3556 = -1;
	volatile int64_t t190 = 37441305812888LL;

    t190 = ((x3553-x3554)<<(x3555%x3556));

    if (t190 != 1673427700175998LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x3557 = 43137390878709LLU;
	volatile int32_t x3558 = INT32_MIN;
	volatile int8_t x3560 = -5;
	uint64_t t191 = 1075357846953102LLU;

    t191 = ((x3557-x3558)<<(x3559%x3560));

    if (t191 != 345116306898856LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x3561 = 4432743U;
	volatile int8_t x3562 = INT8_MIN;
	int8_t x3563 = 1;
	static uint64_t x3564 = 29726LLU;
	static volatile uint32_t t192 = 434864344U;

    t192 = ((x3561-x3562)<<(x3563%x3564));

    if (t192 != 8865742U) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x3577 = -2;
	uint64_t x3578 = UINT64_MAX;
	uint32_t x3579 = 0U;
	int64_t x3580 = INT64_MAX;
	static volatile uint64_t t193 = UINT64_MAX;

    t193 = ((x3577-x3578)<<(x3579%x3580));

    if (t193 != UINT64_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x3649 = 7911LL;
	static volatile uint32_t x3650 = 0U;
	uint8_t x3651 = 85U;
	uint16_t x3652 = 34U;

    t194 = ((x3649-x3650)<<(x3651%x3652));

    if (t194 != 1036910592LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x3685 = INT8_MAX;
	int64_t x3686 = -1420840683686LL;
	int8_t x3688 = 31;
	static int64_t t195 = 14866195LL;

    t195 = ((x3685-x3686)<<(x3687%x3688));

    if (t195 != 5683362735252LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x3705 = 1784878292312851LLU;
	int32_t x3706 = -1;
	static int64_t x3707 = 3LL;
	volatile uint16_t x3708 = 8U;
	volatile uint64_t t196 = 8LLU;

    t196 = ((x3705-x3706)<<(x3707%x3708));

    if (t196 != 14279026338502816LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile uint64_t x3714 = UINT64_MAX;
	int16_t x3715 = INT16_MIN;
	int8_t x3716 = -1;
	uint64_t t197 = 10LLU;

    t197 = ((x3713-x3714)<<(x3715%x3716));

    if (t197 != 2069434305397LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x3730 = -1;
	static int8_t x3731 = 62;
	int64_t x3732 = -1LL;

    t198 = ((x3729-x3730)<<(x3731%x3732));

    if (t198 != 0U) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x3741 = 14637U;
	static int32_t x3743 = INT32_MIN;
	int32_t t199 = 1299230;

    t199 = ((x3741-x3742)<<(x3743%x3744));

    if (t199 != 14765) { NG(); } else { ; }
	
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

