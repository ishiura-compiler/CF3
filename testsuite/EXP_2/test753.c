
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

static uint16_t x9 = 6737U;
int8_t x11 = -1;
int32_t x61 = -876937688;
int32_t x96 = 28;
uint32_t x146 = 14401697U;
volatile uint64_t x159 = 705456LLU;
int64_t x177 = INT64_MIN;
static volatile uint64_t x179 = 57395111361488112LLU;
int16_t x196 = 0;
int64_t t8 = -873LL;
int8_t x221 = INT8_MIN;
static uint8_t x223 = UINT8_MAX;
volatile int16_t x227 = INT16_MIN;
int16_t x283 = INT16_MAX;
volatile int64_t t15 = 903LL;
uint16_t x304 = 5U;
volatile uint8_t x419 = 58U;
int16_t x420 = 0;
static int8_t x472 = 28;
volatile int64_t t20 = -4018532LL;
uint16_t x543 = 14253U;
volatile int64_t x571 = -3247LL;
int64_t t24 = 151629575149LL;
int64_t x591 = INT64_MAX;
int8_t x661 = -30;
static int64_t x663 = 185LL;
int8_t x792 = 2;
volatile int64_t t30 = 15079449505LL;
int32_t x849 = -31;
int8_t x871 = -1;
int64_t x885 = -1LL;
static uint16_t x887 = UINT16_MAX;
int64_t t34 = 43520326LL;
static volatile int16_t x889 = -1;
volatile uint64_t x891 = UINT64_MAX;
static int16_t x905 = INT16_MIN;
static int8_t x906 = INT8_MIN;
int8_t x911 = 47;
volatile int8_t x941 = INT8_MAX;
volatile int64_t x942 = -28179336577940576LL;
int32_t x1068 = 22;
volatile int8_t x1124 = 1;
int32_t x1126 = INT32_MAX;
uint32_t x1127 = 42401997U;
uint64_t x1234 = 7340778677374210338LLU;
uint8_t x1236 = 13U;
int32_t x1357 = INT32_MIN;
static volatile uint32_t t48 = 4U;
uint32_t x1397 = UINT32_MAX;
int16_t x1408 = 0;
uint64_t x1453 = 77284864LLU;
int64_t x1455 = INT64_MIN;
uint8_t x1470 = 106U;
int64_t x1494 = -118LL;
static volatile uint16_t x1507 = 13U;
volatile int64_t t54 = 0LL;
uint16_t x1521 = 2U;
int8_t x1524 = 11;
int16_t x1533 = INT16_MAX;
static int64_t x1534 = -302690210LL;
static volatile uint32_t t57 = 16202U;
volatile int32_t x1549 = INT32_MAX;
uint8_t x1556 = 0U;
int64_t x1567 = INT64_MIN;
volatile int8_t x1571 = INT8_MIN;
int64_t x1573 = -457049275051LL;
volatile int64_t t63 = 762050234898461LL;
int16_t x1606 = INT16_MIN;
int32_t t66 = -54;
static uint64_t x1685 = 41LLU;
static int8_t x1686 = -1;
uint32_t x1687 = 6679U;
int16_t x1730 = INT16_MIN;
static int8_t x1742 = INT8_MAX;
static uint64_t x1781 = 0LLU;
uint64_t x1782 = UINT64_MAX;
int64_t t72 = 0LL;
int16_t x1956 = 15;
int16_t x2077 = -426;
int8_t x2078 = 0;
uint8_t x2167 = UINT8_MAX;
static uint32_t x2186 = 453U;
volatile int16_t x2193 = -1;
int32_t x2194 = INT32_MIN;
static uint16_t x2211 = UINT16_MAX;
volatile uint64_t x2309 = 1112LLU;
volatile uint8_t x2361 = UINT8_MAX;
uint32_t x2364 = 19U;
int64_t x2445 = -4LL;
uint64_t t87 = 1520365105140924LLU;
int8_t x2524 = 6;
volatile int32_t t88 = -659567;
volatile int8_t x2684 = 0;
uint8_t x2795 = UINT8_MAX;
uint32_t t94 = 7U;
static int32_t x2909 = -1;
static volatile uint32_t x2947 = 63218401U;
int64_t x2957 = INT64_MIN;
uint8_t x3077 = 30U;
uint32_t t101 = 1U;
int16_t x3085 = 3615;
volatile uint8_t x3096 = 1U;
int32_t t106 = 1;
uint16_t x3172 = 1U;
uint8_t x3202 = 0U;
uint8_t x3308 = 44U;
int32_t x3342 = -6169;
int64_t t111 = -900LL;
int16_t x3457 = 44;
volatile uint64_t x3557 = 2181471446999977538LLU;
int8_t x3559 = INT8_MIN;
int8_t x3614 = INT8_MAX;
int64_t x3630 = INT64_MAX;
volatile int64_t t117 = -20LL;
int32_t x3650 = 130034755;
int64_t x3659 = INT64_MAX;
volatile int32_t x3778 = INT32_MIN;
int64_t x3779 = INT64_MIN;
int8_t x3852 = 0;
static volatile int32_t x3858 = INT32_MIN;
uint32_t x3859 = 96U;
int8_t x3874 = -1;
static int8_t x3880 = 0;
uint32_t x3954 = 64667833U;
int16_t x3955 = 103;
static int8_t x4005 = INT8_MIN;
uint8_t x4079 = 1U;
volatile uint8_t x4108 = 29U;
volatile int16_t x4153 = 1717;
int64_t x4156 = 16LL;
volatile uint64_t x4199 = 407279195LLU;
uint16_t x4240 = 50U;
volatile uint8_t x4288 = 8U;
uint64_t t143 = 0LLU;
volatile int64_t t146 = 958220LL;
static volatile int16_t x4466 = INT16_MIN;
volatile int32_t t147 = 22445434;
int32_t x4532 = 0;
volatile int64_t t150 = 1LL;
int32_t t151 = 937;
int64_t x4618 = 11921555LL;
uint8_t x4648 = 7U;
int32_t x4755 = INT32_MAX;
volatile uint32_t x4885 = UINT32_MAX;
int32_t x4887 = INT32_MIN;
int32_t x4890 = -1;
int8_t x4913 = INT8_MAX;
int32_t x4922 = INT32_MIN;
uint32_t x4923 = 43132U;
static uint32_t t162 = 128U;
static volatile uint8_t x5024 = 0U;
static int16_t x5046 = INT16_MAX;
static int8_t x5081 = INT8_MIN;
int16_t x5091 = -1901;
static uint8_t x5140 = 20U;
uint8_t x5180 = 7U;
int32_t x5247 = -31971508;
uint8_t x5248 = 1U;
int64_t x5334 = -424896011LL;
int64_t t175 = 107LL;
uint16_t x5505 = 868U;
static volatile int32_t x5507 = -7254;
volatile uint32_t t178 = 4066U;
int32_t t179 = 1787;
uint64_t x5565 = 52601LLU;
uint32_t x5567 = 411559707U;
uint8_t x5657 = 68U;
int16_t x5700 = 2;
uint32_t x5733 = 58740U;
volatile uint32_t x5735 = 9796U;
static volatile uint32_t t186 = 1810U;
volatile uint64_t t187 = 167934870165LLU;
static int32_t x5777 = INT32_MAX;
int16_t x5817 = -927;
uint64_t x5818 = 66264880760466806LLU;
uint8_t x5819 = UINT8_MAX;
volatile int32_t t192 = -15;
uint64_t x6010 = 856220442240984916LLU;
uint16_t x6024 = 1U;
uint64_t x6030 = 6LLU;
volatile uint64_t x6230 = 417923384LLU;


void f0(void) {
    	static uint16_t x10 = 29396U;
	static uint16_t x12 = 30U;
	int32_t t0 = 4946358;

    t0 = ((x9&(x10/x11))>>x12);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x41 = UINT8_MAX;
	int64_t x42 = -1LL;
	volatile int32_t x43 = -1;
	static uint8_t x44 = 1U;
	volatile int64_t t1 = 486724966517735450LL;

    t1 = ((x41&(x42/x43))>>x44);

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x62 = 200756733U;
	int8_t x63 = -1;
	int32_t x64 = 2;
	uint32_t t2 = 93U;

    t2 = ((x61&(x62/x63))>>x64);

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x93 = INT16_MAX;
	int32_t x94 = -1;
	int64_t x95 = 7531228119839026LL;
	int64_t t3 = -293396681510090LL;

    t3 = ((x93&(x94/x95))>>x96);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x145 = 5;
	int64_t x147 = INT64_MIN;
	uint8_t x148 = 10U;
	volatile int64_t t4 = 1873318LL;

    t4 = ((x145&(x146/x147))>>x148);

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x157 = INT32_MIN;
	uint32_t x158 = 1087U;
	volatile int16_t x160 = 2;
	uint64_t t5 = 54037345LLU;

    t5 = ((x157&(x158/x159))>>x160);

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x178 = INT16_MAX;
	static uint8_t x180 = 3U;
	uint64_t t6 = 62415367841LLU;

    t6 = ((x177&(x178/x179))>>x180);

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x193 = 0U;
	static uint64_t x194 = UINT64_MAX;
	int32_t x195 = INT32_MIN;
	uint64_t t7 = 4371520142LLU;

    t7 = ((x193&(x194/x195))>>x196);

    if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x201 = 2;
	int64_t x202 = 1119287940748709LL;
	volatile int8_t x203 = INT8_MIN;
	uint8_t x204 = 0U;

    t8 = ((x201&(x202/x203))>>x204);

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x222 = UINT16_MAX;
	volatile uint8_t x224 = 2U;
	static int32_t t9 = -3085;

    t9 = ((x221&(x222/x223))>>x224);

    if (t9 != 64) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x225 = -1;
	int16_t x226 = -1;
	uint16_t x228 = 8U;
	int32_t t10 = 31900952;

    t10 = ((x225&(x226/x227))>>x228);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x237 = -1;
	int8_t x238 = INT8_MIN;
	uint32_t x239 = 25148969U;
	static volatile int32_t x240 = 0;
	uint32_t t11 = 57754684U;

    t11 = ((x237&(x238/x239))>>x240);

    if (t11 != 170U) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x253 = INT32_MAX;
	static volatile int64_t x254 = INT64_MAX;
	int32_t x255 = INT32_MIN;
	uint8_t x256 = 18U;
	int64_t t12 = -301909LL;

    t12 = ((x253&(x254/x255))>>x256);

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x273 = 1;
	volatile int64_t x274 = INT64_MIN;
	volatile int64_t x275 = INT64_MIN;
	volatile int32_t x276 = 0;
	volatile int64_t t13 = -342463000529LL;

    t13 = ((x273&(x274/x275))>>x276);

    if (t13 != 1LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x281 = INT32_MIN;
	uint64_t x282 = 1382232512089021162LLU;
	static int8_t x284 = 0;
	volatile uint64_t t14 = 8916LLU;

    t14 = ((x281&(x282/x283))>>x284);

    if (t14 != 42183021297664LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x293 = 0;
	volatile int32_t x294 = -6232126;
	int64_t x295 = -6275348733068163LL;
	uint8_t x296 = 2U;

    t15 = ((x293&(x294/x295))>>x296);

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x301 = -586;
	int64_t x302 = -1LL;
	uint16_t x303 = UINT16_MAX;
	int64_t t16 = 5460LL;

    t16 = ((x301&(x302/x303))>>x304);

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x313 = -1;
	int16_t x314 = INT16_MIN;
	int64_t x315 = INT64_MAX;
	int64_t x316 = 2LL;
	volatile int64_t t17 = 66464192129060LL;

    t17 = ((x313&(x314/x315))>>x316);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x385 = UINT32_MAX;
	uint32_t x386 = UINT32_MAX;
	int16_t x387 = INT16_MAX;
	volatile int64_t x388 = 1LL;
	volatile uint32_t t18 = 409U;

    t18 = ((x385&(x386/x387))>>x388);

    if (t18 != 65538U) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x417 = INT32_MIN;
	int8_t x418 = INT8_MAX;
	int32_t t19 = -4581240;

    t19 = ((x417&(x418/x419))>>x420);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint16_t x469 = UINT16_MAX;
	static uint16_t x470 = 122U;
	int64_t x471 = INT64_MAX;

    t20 = ((x469&(x470/x471))>>x472);

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x509 = INT32_MAX;
	int64_t x510 = -4283LL;
	int64_t x511 = -770064LL;
	uint16_t x512 = 0U;
	static int64_t t21 = 12721015LL;

    t21 = ((x509&(x510/x511))>>x512);

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x533 = 1;
	static volatile int64_t x534 = 69384959799526LL;
	int16_t x535 = INT16_MIN;
	int32_t x536 = 1;
	volatile int64_t t22 = -388067787904LL;

    t22 = ((x533&(x534/x535))>>x536);

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x541 = 765U;
	uint32_t x542 = 80U;
	static int32_t x544 = 7;
	volatile uint32_t t23 = 176993938U;

    t23 = ((x541&(x542/x543))>>x544);

    if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x569 = INT32_MAX;
	int8_t x570 = 8;
	uint32_t x572 = 3U;

    t24 = ((x569&(x570/x571))>>x572);

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x581 = INT8_MIN;
	int64_t x582 = -6728306491122LL;
	int8_t x583 = -1;
	int8_t x584 = 1;
	static int64_t t25 = -299951778336262732LL;

    t25 = ((x581&(x582/x583))>>x584);

    if (t25 != 3364153245504LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x589 = INT32_MIN;
	volatile int32_t x590 = INT32_MIN;
	volatile uint8_t x592 = 14U;
	int64_t t26 = -2014180621710850LL;

    t26 = ((x589&(x590/x591))>>x592);

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x653 = -1;
	uint64_t x654 = 111514819631962LLU;
	volatile int32_t x655 = INT32_MIN;
	static int8_t x656 = 4;
	uint64_t t27 = 355600556428911LLU;

    t27 = ((x653&(x654/x655))>>x656);

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x662 = UINT32_MAX;
	uint8_t x664 = 6U;
	int64_t t28 = -47566424614837896LL;

    t28 = ((x661&(x662/x663))>>x664);

    if (t28 != 362750LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x757 = INT8_MAX;
	volatile int32_t x758 = INT32_MAX;
	uint8_t x759 = 31U;
	uint8_t x760 = 8U;
	volatile int32_t t29 = -6;

    t29 = ((x757&(x758/x759))>>x760);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x789 = 49U;
	static int64_t x790 = 1380786LL;
	int32_t x791 = 11;

    t30 = ((x789&(x790/x791))>>x792);

    if (t30 != 4LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x845 = INT8_MIN;
	int8_t x846 = -34;
	int16_t x847 = INT16_MIN;
	uint64_t x848 = 22LLU;
	int32_t t31 = 20366;

    t31 = ((x845&(x846/x847))>>x848);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x850 = 3U;
	int16_t x851 = INT16_MIN;
	volatile uint16_t x852 = 0U;
	int32_t t32 = 6430970;

    t32 = ((x849&(x850/x851))>>x852);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x869 = UINT16_MAX;
	volatile uint16_t x870 = UINT16_MAX;
	int8_t x872 = 0;
	volatile int32_t t33 = 660029;

    t33 = ((x869&(x870/x871))>>x872);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x886 = -4674;
	static int8_t x888 = 21;

    t34 = ((x885&(x886/x887))>>x888);

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x890 = INT8_MIN;
	static int8_t x892 = 1;
	uint64_t t35 = 47LLU;

    t35 = ((x889&(x890/x891))>>x892);

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x907 = INT8_MIN;
	uint8_t x908 = 6U;
	static int32_t t36 = 7613;

    t36 = ((x905&(x906/x907))>>x908);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int32_t x909 = 15;
	int16_t x910 = INT16_MIN;
	uint8_t x912 = 0U;
	volatile int32_t t37 = 57686104;

    t37 = ((x909&(x910/x911))>>x912);

    if (t37 != 7) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x943 = 1U;
	uint8_t x944 = 1U;
	volatile int64_t t38 = 119895139LL;

    t38 = ((x941&(x942/x943))>>x944);

    if (t38 != 16LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x1061 = INT32_MAX;
	volatile int8_t x1062 = -1;
	int32_t x1063 = INT32_MIN;
	static uint16_t x1064 = 20U;
	int32_t t39 = -459;

    t39 = ((x1061&(x1062/x1063))>>x1064);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint64_t x1065 = 1189LLU;
	static volatile int32_t x1066 = INT32_MIN;
	int64_t x1067 = INT64_MIN;
	uint64_t t40 = 4188371LLU;

    t40 = ((x1065&(x1066/x1067))>>x1068);

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint16_t x1101 = UINT16_MAX;
	int64_t x1102 = INT64_MAX;
	volatile uint64_t x1103 = 230265205LLU;
	uint8_t x1104 = 0U;
	static volatile uint64_t t41 = 1487020908707LLU;

    t41 = ((x1101&(x1102/x1103))>>x1104);

    if (t41 != 24435LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint64_t x1121 = UINT64_MAX;
	volatile int64_t x1122 = INT64_MIN;
	static int64_t x1123 = INT64_MIN;
	uint64_t t42 = 8394179250LLU;

    t42 = ((x1121&(x1122/x1123))>>x1124);

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint64_t x1125 = 7663686293LLU;
	uint32_t x1128 = 5U;
	volatile uint64_t t43 = 1285251484277297LLU;

    t43 = ((x1125&(x1126/x1127))>>x1128);

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x1193 = -526;
	volatile uint16_t x1194 = 0U;
	uint8_t x1195 = 1U;
	uint16_t x1196 = 0U;
	volatile int32_t t44 = 1836276;

    t44 = ((x1193&(x1194/x1195))>>x1196);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile int64_t x1233 = INT64_MAX;
	int32_t x1235 = -1;
	uint64_t t45 = 6307LLU;

    t45 = ((x1233&(x1234/x1235))>>x1236);

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x1345 = 63;
	volatile int8_t x1346 = -1;
	int32_t x1347 = INT32_MIN;
	static volatile uint8_t x1348 = 4U;
	static int32_t t46 = -544221862;

    t46 = ((x1345&(x1346/x1347))>>x1348);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x1358 = 4298U;
	int64_t x1359 = INT64_MIN;
	static int8_t x1360 = 6;
	static int64_t t47 = -114990293722461LL;

    t47 = ((x1357&(x1358/x1359))>>x1360);

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x1373 = UINT16_MAX;
	uint32_t x1374 = 1029958420U;
	int8_t x1375 = -1;
	static uint8_t x1376 = 15U;

    t48 = ((x1373&(x1374/x1375))>>x1376);

    if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x1398 = INT32_MIN;
	uint8_t x1399 = 100U;
	volatile uint8_t x1400 = 11U;
	volatile uint32_t t49 = 205454271U;

    t49 = ((x1397&(x1398/x1399))>>x1400);

    if (t49 != 2086666U) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x1405 = -104;
	uint32_t x1406 = UINT32_MAX;
	int8_t x1407 = INT8_MIN;
	volatile uint32_t t50 = 31U;

    t50 = ((x1405&(x1406/x1407))>>x1408);

    if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x1454 = INT8_MAX;
	volatile int8_t x1456 = 29;
	volatile uint64_t t51 = 1654671215202782LLU;

    t51 = ((x1453&(x1454/x1455))>>x1456);

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x1469 = INT8_MIN;
	int64_t x1471 = INT64_MAX;
	volatile uint8_t x1472 = 33U;
	int64_t t52 = 9976444385LL;

    t52 = ((x1469&(x1470/x1471))>>x1472);

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x1493 = INT16_MIN;
	int16_t x1495 = INT16_MIN;
	static int32_t x1496 = 2;
	int64_t t53 = -2619083947243117726LL;

    t53 = ((x1493&(x1494/x1495))>>x1496);

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x1505 = 2U;
	int64_t x1506 = INT64_MIN;
	static uint8_t x1508 = 0U;

    t54 = ((x1505&(x1506/x1507))>>x1508);

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint16_t x1522 = 11U;
	int64_t x1523 = -1LL;
	static int64_t t55 = 1688332LL;

    t55 = ((x1521&(x1522/x1523))>>x1524);

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x1535 = INT8_MAX;
	uint8_t x1536 = 14U;
	int64_t t56 = -5547LL;

    t56 = ((x1533&(x1534/x1535))>>x1536);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x1537 = 319258004U;
	uint32_t x1538 = UINT32_MAX;
	int8_t x1539 = INT8_MIN;
	int32_t x1540 = 0;

    t57 = ((x1537&(x1538/x1539))>>x1540);

    if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x1550 = INT32_MIN;
	static volatile int64_t x1551 = -92097853LL;
	volatile uint16_t x1552 = 17U;
	int64_t t58 = -413462781464LL;

    t58 = ((x1549&(x1550/x1551))>>x1552);

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x1553 = 1;
	int64_t x1554 = INT64_MAX;
	static uint32_t x1555 = 1U;
	int64_t t59 = 9462032LL;

    t59 = ((x1553&(x1554/x1555))>>x1556);

    if (t59 != 1LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile uint64_t x1565 = 50LLU;
	uint16_t x1566 = 14068U;
	uint16_t x1568 = 8U;
	volatile uint64_t t60 = 3560201253161342987LLU;

    t60 = ((x1565&(x1566/x1567))>>x1568);

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x1569 = 778629242724742193LLU;
	int16_t x1570 = -1;
	static int16_t x1572 = 23;
	uint64_t t61 = 89194038LLU;

    t61 = ((x1569&(x1570/x1571))>>x1572);

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x1574 = 0;
	static uint64_t x1575 = 406251416266LLU;
	static uint8_t x1576 = 53U;
	uint64_t t62 = 6LLU;

    t62 = ((x1573&(x1574/x1575))>>x1576);

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x1577 = UINT16_MAX;
	static int64_t x1578 = 111042LL;
	int16_t x1579 = 13;
	int32_t x1580 = 6;

    t63 = ((x1577&(x1578/x1579))>>x1580);

    if (t63 != 133LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x1605 = INT64_MIN;
	static int64_t x1607 = INT64_MIN;
	int32_t x1608 = 0;
	volatile int64_t t64 = 254055626LL;

    t64 = ((x1605&(x1606/x1607))>>x1608);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint32_t x1625 = UINT32_MAX;
	int32_t x1626 = -1;
	static uint16_t x1627 = 792U;
	int64_t x1628 = 0LL;
	uint32_t t65 = 265228662U;

    t65 = ((x1625&(x1626/x1627))>>x1628);

    if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x1673 = 51072545;
	static volatile uint16_t x1674 = UINT16_MAX;
	int16_t x1675 = INT16_MIN;
	int16_t x1676 = 19;

    t66 = ((x1673&(x1674/x1675))>>x1676);

    if (t66 != 97) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x1688 = 0;
	volatile uint64_t t67 = 1234387LLU;

    t67 = ((x1685&(x1686/x1687))>>x1688);

    if (t67 != 41LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x1693 = 6965;
	int16_t x1694 = INT16_MIN;
	volatile int16_t x1695 = INT16_MIN;
	int8_t x1696 = 7;
	volatile int32_t t68 = 1856446;

    t68 = ((x1693&(x1694/x1695))>>x1696);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x1729 = UINT32_MAX;
	int32_t x1731 = INT32_MIN;
	uint8_t x1732 = 2U;
	static volatile uint32_t t69 = 3442158U;

    t69 = ((x1729&(x1730/x1731))>>x1732);

    if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x1741 = 230;
	uint32_t x1743 = UINT32_MAX;
	volatile uint8_t x1744 = 16U;
	volatile uint32_t t70 = 409669110U;

    t70 = ((x1741&(x1742/x1743))>>x1744);

    if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x1783 = 17;
	int8_t x1784 = 36;
	uint64_t t71 = 0LLU;

    t71 = ((x1781&(x1782/x1783))>>x1784);

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x1821 = -359561387005LL;
	uint16_t x1822 = 382U;
	volatile int32_t x1823 = 19334;
	int8_t x1824 = 0;

    t72 = ((x1821&(x1822/x1823))>>x1824);

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x1857 = UINT16_MAX;
	static int32_t x1858 = INT32_MAX;
	static int8_t x1859 = INT8_MIN;
	int8_t x1860 = 2;
	int32_t t73 = -8;

    t73 = ((x1857&(x1858/x1859))>>x1860);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x1953 = INT16_MAX;
	static int64_t x1954 = INT64_MAX;
	int8_t x1955 = INT8_MIN;
	int64_t t74 = 17386705882193LL;

    t74 = ((x1953&(x1954/x1955))>>x1956);

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x2079 = -1;
	volatile uint64_t x2080 = 25LLU;
	volatile int32_t t75 = -2328;

    t75 = ((x2077&(x2078/x2079))>>x2080);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x2165 = 386102;
	int16_t x2166 = 13026;
	static int16_t x2168 = 3;
	static int32_t t76 = 19313;

    t76 = ((x2165&(x2166/x2167))>>x2168);

    if (t76 != 6) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x2185 = -2370975050098985LL;
	static int32_t x2187 = INT32_MAX;
	uint8_t x2188 = 23U;
	int64_t t77 = 213526595729481LL;

    t77 = ((x2185&(x2186/x2187))>>x2188);

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x2195 = INT64_MIN;
	uint16_t x2196 = 5U;
	int64_t t78 = 5849836764375LL;

    t78 = ((x2193&(x2194/x2195))>>x2196);

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x2209 = UINT16_MAX;
	int8_t x2210 = INT8_MIN;
	volatile uint32_t x2212 = 7U;
	volatile int32_t t79 = 5379;

    t79 = ((x2209&(x2210/x2211))>>x2212);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x2233 = INT8_MIN;
	static uint32_t x2234 = UINT32_MAX;
	static int64_t x2235 = INT64_MIN;
	int8_t x2236 = 28;
	volatile int64_t t80 = -3706780LL;

    t80 = ((x2233&(x2234/x2235))>>x2236);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x2310 = 22;
	int64_t x2311 = -652935868282LL;
	uint8_t x2312 = 0U;
	uint64_t t81 = 311774LLU;

    t81 = ((x2309&(x2310/x2311))>>x2312);

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint32_t x2362 = 428U;
	int8_t x2363 = INT8_MIN;
	static uint32_t t82 = 65U;

    t82 = ((x2361&(x2362/x2363))>>x2364);

    if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x2417 = INT64_MAX;
	static uint64_t x2418 = 430485LLU;
	static int64_t x2419 = -1LL;
	uint8_t x2420 = 62U;
	volatile uint64_t t83 = 2045059LLU;

    t83 = ((x2417&(x2418/x2419))>>x2420);

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x2446 = 9580;
	static uint64_t x2447 = 30565520795LLU;
	uint8_t x2448 = 14U;
	uint64_t t84 = 0LLU;

    t84 = ((x2445&(x2446/x2447))>>x2448);

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x2481 = INT8_MIN;
	int8_t x2482 = INT8_MAX;
	static int16_t x2483 = INT16_MIN;
	int16_t x2484 = 1;
	int32_t t85 = -29807;

    t85 = ((x2481&(x2482/x2483))>>x2484);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile uint32_t x2497 = UINT32_MAX;
	uint8_t x2498 = 14U;
	int32_t x2499 = -7388;
	static int16_t x2500 = 1;
	static uint32_t t86 = 3U;

    t86 = ((x2497&(x2498/x2499))>>x2500);

    if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x2509 = 590308LL;
	volatile int64_t x2510 = INT64_MIN;
	uint64_t x2511 = 2731295932934985341LLU;
	uint8_t x2512 = 3U;

    t87 = ((x2509&(x2510/x2511))>>x2512);

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x2521 = INT16_MIN;
	volatile uint8_t x2522 = 25U;
	int16_t x2523 = INT16_MIN;

    t88 = ((x2521&(x2522/x2523))>>x2524);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint32_t x2577 = 5U;
	volatile int8_t x2578 = -1;
	uint32_t x2579 = 143435334U;
	int8_t x2580 = 1;
	static uint32_t t89 = 190U;

    t89 = ((x2577&(x2578/x2579))>>x2580);

    if (t89 != 2U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x2653 = 5556U;
	uint64_t x2654 = 1024LLU;
	uint8_t x2655 = UINT8_MAX;
	static uint8_t x2656 = 1U;
	static uint64_t t90 = 10295313376LLU;

    t90 = ((x2653&(x2654/x2655))>>x2656);

    if (t90 != 2LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x2681 = 39U;
	int8_t x2682 = -1;
	int8_t x2683 = INT8_MIN;
	static volatile int32_t t91 = -12;

    t91 = ((x2681&(x2682/x2683))>>x2684);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x2697 = UINT64_MAX;
	uint8_t x2698 = 39U;
	uint64_t x2699 = 2258708LLU;
	uint64_t x2700 = 0LLU;
	volatile uint64_t t92 = 442829549525546LLU;

    t92 = ((x2697&(x2698/x2699))>>x2700);

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x2769 = INT64_MIN;
	int8_t x2770 = INT8_MIN;
	int16_t x2771 = INT16_MIN;
	uint8_t x2772 = 2U;
	int64_t t93 = 16705387559039038LL;

    t93 = ((x2769&(x2770/x2771))>>x2772);

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x2793 = -1;
	static uint32_t x2794 = 61U;
	volatile int32_t x2796 = 20;

    t94 = ((x2793&(x2794/x2795))>>x2796);

    if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint16_t x2877 = 226U;
	int8_t x2878 = 11;
	volatile int16_t x2879 = 54;
	uint16_t x2880 = 7U;
	int32_t t95 = 2811820;

    t95 = ((x2877&(x2878/x2879))>>x2880);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x2910 = INT32_MAX;
	int16_t x2911 = 2;
	uint8_t x2912 = 8U;
	int32_t t96 = 848850713;

    t96 = ((x2909&(x2910/x2911))>>x2912);

    if (t96 != 4194303) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x2945 = 171663U;
	int32_t x2946 = -165240178;
	volatile int16_t x2948 = 1;
	uint32_t t97 = 1307270U;

    t97 = ((x2945&(x2946/x2947))>>x2948);

    if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x2958 = INT32_MIN;
	static int16_t x2959 = INT16_MIN;
	volatile uint16_t x2960 = 8U;
	int64_t t98 = -24115215573622LL;

    t98 = ((x2957&(x2958/x2959))>>x2960);

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x3041 = 1880U;
	uint16_t x3042 = 208U;
	uint16_t x3043 = UINT16_MAX;
	static uint8_t x3044 = 12U;
	static volatile int32_t t99 = 1609;

    t99 = ((x3041&(x3042/x3043))>>x3044);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint64_t x3049 = 2742LLU;
	int8_t x3050 = INT8_MAX;
	uint8_t x3051 = 17U;
	volatile uint8_t x3052 = 41U;
	uint64_t t100 = 13994LLU;

    t100 = ((x3049&(x3050/x3051))>>x3052);

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x3078 = -1;
	static uint32_t x3079 = 56258736U;
	uint8_t x3080 = 16U;

    t101 = ((x3077&(x3078/x3079))>>x3080);

    if (t101 != 0U) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x3081 = INT64_MIN;
	volatile int32_t x3082 = 24938;
	uint32_t x3083 = 25558U;
	uint16_t x3084 = 54U;
	static int64_t t102 = -3803LL;

    t102 = ((x3081&(x3082/x3083))>>x3084);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x3086 = 1943U;
	static uint8_t x3087 = UINT8_MAX;
	static int8_t x3088 = 3;
	volatile int32_t t103 = -453668;

    t103 = ((x3085&(x3086/x3087))>>x3088);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x3093 = INT8_MIN;
	volatile uint16_t x3094 = 3741U;
	static int32_t x3095 = INT32_MAX;
	volatile int32_t t104 = -6;

    t104 = ((x3093&(x3094/x3095))>>x3096);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x3121 = 732;
	int32_t x3122 = -302183;
	static uint32_t x3123 = UINT32_MAX;
	int32_t x3124 = 0;
	static uint32_t t105 = 1U;

    t105 = ((x3121&(x3122/x3123))>>x3124);

    if (t105 != 0U) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x3153 = INT8_MIN;
	int32_t x3154 = INT32_MAX;
	int8_t x3155 = 17;
	int8_t x3156 = 26;

    t106 = ((x3153&(x3154/x3155))>>x3156);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x3169 = 1U;
	uint16_t x3170 = UINT16_MAX;
	static int32_t x3171 = INT32_MIN;
	volatile uint32_t t107 = 8563603U;

    t107 = ((x3169&(x3170/x3171))>>x3172);

    if (t107 != 0U) { NG(); } else { ; }
	
}

void f108(void) {
    	static int8_t x3201 = INT8_MIN;
	volatile uint8_t x3203 = 4U;
	static uint8_t x3204 = 1U;
	int32_t t108 = 25388;

    t108 = ((x3201&(x3202/x3203))>>x3204);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x3289 = INT64_MAX;
	int64_t x3290 = -113LL;
	int32_t x3291 = 238;
	int8_t x3292 = 3;
	volatile int64_t t109 = -689LL;

    t109 = ((x3289&(x3290/x3291))>>x3292);

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile uint8_t x3305 = 1U;
	static int64_t x3306 = INT64_MAX;
	volatile int32_t x3307 = INT32_MIN;
	volatile int64_t t110 = 0LL;

    t110 = ((x3305&(x3306/x3307))>>x3308);

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x3341 = -12816177LL;
	int16_t x3343 = -116;
	int8_t x3344 = 0;

    t111 = ((x3341&(x3342/x3343))>>x3344);

    if (t111 != 5LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x3458 = INT8_MAX;
	volatile int64_t x3459 = INT64_MAX;
	volatile int16_t x3460 = 0;
	static int64_t t112 = 3364684081823700LL;

    t112 = ((x3457&(x3458/x3459))>>x3460);

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x3533 = INT16_MIN;
	int8_t x3534 = INT8_MAX;
	volatile int16_t x3535 = INT16_MIN;
	int16_t x3536 = 9;
	volatile int32_t t113 = 305934;

    t113 = ((x3533&(x3534/x3535))>>x3536);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint32_t x3537 = UINT32_MAX;
	int32_t x3538 = INT32_MIN;
	int64_t x3539 = INT64_MIN;
	uint16_t x3540 = 2U;
	static volatile int64_t t114 = 50049LL;

    t114 = ((x3537&(x3538/x3539))>>x3540);

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x3558 = 7U;
	uint32_t x3560 = 1U;
	volatile uint64_t t115 = 3850482814518220LLU;

    t115 = ((x3557&(x3558/x3559))>>x3560);

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint16_t x3613 = 962U;
	int32_t x3615 = 1;
	uint8_t x3616 = 1U;
	volatile int32_t t116 = -327;

    t116 = ((x3613&(x3614/x3615))>>x3616);

    if (t116 != 33) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x3629 = INT32_MIN;
	static uint16_t x3631 = UINT16_MAX;
	uint8_t x3632 = 2U;

    t117 = ((x3629&(x3630/x3631))>>x3632);

    if (t117 != 35184908959744LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x3649 = INT16_MIN;
	volatile uint64_t x3651 = 1380LLU;
	volatile uint8_t x3652 = 9U;
	volatile uint64_t t118 = 247247397469LLU;

    t118 = ((x3649&(x3650/x3651))>>x3652);

    if (t118 != 128LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x3657 = INT32_MAX;
	uint16_t x3658 = 72U;
	uint8_t x3660 = 6U;
	int64_t t119 = 30338623952243LL;

    t119 = ((x3657&(x3658/x3659))>>x3660);

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x3777 = 20;
	int32_t x3780 = 4;
	int64_t t120 = -22190075234LL;

    t120 = ((x3777&(x3778/x3779))>>x3780);

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x3849 = INT64_MIN;
	int64_t x3850 = -1LL;
	int32_t x3851 = INT32_MIN;
	volatile int64_t t121 = -826269174462993799LL;

    t121 = ((x3849&(x3850/x3851))>>x3852);

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint32_t x3857 = 0U;
	volatile int8_t x3860 = 21;
	uint32_t t122 = 0U;

    t122 = ((x3857&(x3858/x3859))>>x3860);

    if (t122 != 0U) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int32_t x3873 = INT32_MIN;
	int16_t x3875 = 3878;
	static uint8_t x3876 = 1U;
	static int32_t t123 = 223392537;

    t123 = ((x3873&(x3874/x3875))>>x3876);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x3877 = -1;
	uint8_t x3878 = 0U;
	static int32_t x3879 = -1;
	static volatile int32_t t124 = 1;

    t124 = ((x3877&(x3878/x3879))>>x3880);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x3901 = -3677725LL;
	static int16_t x3902 = 2;
	uint16_t x3903 = UINT16_MAX;
	volatile uint64_t x3904 = 7LLU;
	static volatile int64_t t125 = 1LL;

    t125 = ((x3901&(x3902/x3903))>>x3904);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x3953 = INT16_MIN;
	volatile int16_t x3956 = 2;
	volatile uint32_t t126 = 1594105268U;

    t126 = ((x3953&(x3954/x3955))>>x3956);

    if (t126 != 155648U) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint32_t x4006 = UINT32_MAX;
	uint32_t x4007 = 3639U;
	volatile uint16_t x4008 = 1U;
	volatile uint32_t t127 = 2U;

    t127 = ((x4005&(x4006/x4007))>>x4008);

    if (t127 != 590080U) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x4045 = INT32_MIN;
	int8_t x4046 = 6;
	uint16_t x4047 = 980U;
	static int8_t x4048 = 1;
	int32_t t128 = 20;

    t128 = ((x4045&(x4046/x4047))>>x4048);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x4049 = 3U;
	static uint16_t x4050 = 3U;
	volatile int16_t x4051 = -7;
	uint16_t x4052 = 4U;
	volatile int32_t t129 = 12;

    t129 = ((x4049&(x4050/x4051))>>x4052);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x4061 = UINT32_MAX;
	int16_t x4062 = INT16_MIN;
	uint16_t x4063 = 231U;
	volatile int32_t x4064 = 27;
	uint32_t t130 = 271U;

    t130 = ((x4061&(x4062/x4063))>>x4064);

    if (t130 != 31U) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint8_t x4065 = UINT8_MAX;
	int8_t x4066 = INT8_MIN;
	uint8_t x4067 = 1U;
	uint64_t x4068 = 0LLU;
	int32_t t131 = 0;

    t131 = ((x4065&(x4066/x4067))>>x4068);

    if (t131 != 128) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x4073 = -14;
	int32_t x4074 = 216447124;
	uint16_t x4075 = 4048U;
	static uint16_t x4076 = 26U;
	static volatile int32_t t132 = -13365038;

    t132 = ((x4073&(x4074/x4075))>>x4076);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x4077 = INT64_MIN;
	int8_t x4078 = INT8_MAX;
	static int8_t x4080 = 1;
	volatile int64_t t133 = 636581455374LL;

    t133 = ((x4077&(x4078/x4079))>>x4080);

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x4105 = UINT64_MAX;
	static int64_t x4106 = INT64_MAX;
	static uint8_t x4107 = UINT8_MAX;
	volatile uint64_t t134 = 4981936746560628LLU;

    t134 = ((x4105&(x4106/x4107))>>x4108);

    if (t134 != 67372036LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x4137 = INT64_MIN;
	uint32_t x4138 = UINT32_MAX;
	int8_t x4139 = INT8_MAX;
	volatile uint8_t x4140 = 2U;
	static int64_t t135 = -123814LL;

    t135 = ((x4137&(x4138/x4139))>>x4140);

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x4154 = INT8_MIN;
	int8_t x4155 = -22;
	int32_t t136 = -3875612;

    t136 = ((x4153&(x4154/x4155))>>x4156);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x4157 = -1;
	uint64_t x4158 = 208206LLU;
	int64_t x4159 = -93553LL;
	static uint8_t x4160 = 2U;
	static uint64_t t137 = 609LLU;

    t137 = ((x4157&(x4158/x4159))>>x4160);

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x4185 = INT64_MIN;
	uint8_t x4186 = 114U;
	static int16_t x4187 = INT16_MAX;
	static uint8_t x4188 = 22U;
	int64_t t138 = -252379475748080726LL;

    t138 = ((x4185&(x4186/x4187))>>x4188);

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x4197 = -27293004;
	int16_t x4198 = INT16_MIN;
	uint64_t x4200 = 0LLU;
	uint64_t t139 = 8701LLU;

    t139 = ((x4197&(x4198/x4199))>>x4200);

    if (t139 != 45265357444LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x4237 = INT64_MIN;
	int8_t x4238 = INT8_MIN;
	int8_t x4239 = INT8_MIN;
	int64_t t140 = -8097746400123352LL;

    t140 = ((x4237&(x4238/x4239))>>x4240);

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint32_t x4281 = 524981U;
	int32_t x4282 = 6180070;
	static int64_t x4283 = INT64_MIN;
	static int32_t x4284 = 25;
	volatile int64_t t141 = 869LL;

    t141 = ((x4281&(x4282/x4283))>>x4284);

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint32_t x4285 = 530U;
	int16_t x4286 = INT16_MIN;
	int16_t x4287 = INT16_MAX;
	volatile uint32_t t142 = 2341204U;

    t142 = ((x4285&(x4286/x4287))>>x4288);

    if (t142 != 2U) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x4289 = 7439811LLU;
	int32_t x4290 = -21574482;
	int32_t x4291 = INT32_MAX;
	uint16_t x4292 = 12U;

    t143 = ((x4289&(x4290/x4291))>>x4292);

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x4305 = 438448559134023322LL;
	int64_t x4306 = INT64_MIN;
	int8_t x4307 = INT8_MAX;
	uint64_t x4308 = 1LLU;
	static int64_t t144 = -455553LL;

    t144 = ((x4305&(x4306/x4307))>>x4308);

    if (t144 != 219222080408489741LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x4337 = 42U;
	int8_t x4338 = INT8_MIN;
	int8_t x4339 = INT8_MAX;
	int8_t x4340 = 0;
	volatile int32_t t145 = 211;

    t145 = ((x4337&(x4338/x4339))>>x4340);

    if (t145 != 42) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x4353 = INT64_MIN;
	int8_t x4354 = -2;
	static int8_t x4355 = INT8_MIN;
	uint8_t x4356 = 5U;

    t146 = ((x4353&(x4354/x4355))>>x4356);

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x4465 = 11;
	int32_t x4467 = INT32_MIN;
	int32_t x4468 = 1;

    t147 = ((x4465&(x4466/x4467))>>x4468);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x4529 = -1;
	int8_t x4530 = -15;
	uint16_t x4531 = 36U;
	volatile int32_t t148 = -6;

    t148 = ((x4529&(x4530/x4531))>>x4532);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x4561 = INT8_MAX;
	volatile int32_t x4562 = -1;
	int8_t x4563 = INT8_MIN;
	volatile uint8_t x4564 = 7U;
	volatile int32_t t149 = 0;

    t149 = ((x4561&(x4562/x4563))>>x4564);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint8_t x4609 = UINT8_MAX;
	int64_t x4610 = -1LL;
	static uint16_t x4611 = 20074U;
	volatile uint16_t x4612 = 6U;

    t150 = ((x4609&(x4610/x4611))>>x4612);

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x4613 = INT16_MIN;
	uint16_t x4614 = 5315U;
	uint16_t x4615 = 1U;
	volatile uint8_t x4616 = 1U;

    t151 = ((x4613&(x4614/x4615))>>x4616);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x4617 = 45U;
	int32_t x4619 = -1;
	int16_t x4620 = 4;
	int64_t t152 = -19895041LL;

    t152 = ((x4617&(x4618/x4619))>>x4620);

    if (t152 != 2LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x4645 = INT16_MIN;
	uint64_t x4646 = UINT64_MAX;
	uint16_t x4647 = UINT16_MAX;
	uint64_t t153 = 1031983LLU;

    t153 = ((x4645&(x4646/x4647))>>x4648);

    if (t153 != 2199056810496LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x4753 = INT8_MIN;
	int32_t x4754 = 3014;
	int16_t x4756 = 12;
	int32_t t154 = -840113427;

    t154 = ((x4753&(x4754/x4755))>>x4756);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint64_t x4797 = 2LLU;
	int32_t x4798 = INT32_MIN;
	uint32_t x4799 = UINT32_MAX;
	static int16_t x4800 = 3;
	volatile uint64_t t155 = 307757417LLU;

    t155 = ((x4797&(x4798/x4799))>>x4800);

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint32_t x4873 = UINT32_MAX;
	int16_t x4874 = INT16_MIN;
	static int8_t x4875 = INT8_MIN;
	uint32_t x4876 = 1U;
	volatile uint32_t t156 = 2499U;

    t156 = ((x4873&(x4874/x4875))>>x4876);

    if (t156 != 128U) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x4886 = -1LL;
	int16_t x4888 = 0;
	int64_t t157 = -873514336LL;

    t157 = ((x4885&(x4886/x4887))>>x4888);

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x4889 = -1LL;
	static volatile int32_t x4891 = -717090;
	int16_t x4892 = 7;
	volatile int64_t t158 = -483415924379602827LL;

    t158 = ((x4889&(x4890/x4891))>>x4892);

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x4897 = INT8_MIN;
	uint16_t x4898 = UINT16_MAX;
	volatile int32_t x4899 = INT32_MAX;
	static uint64_t x4900 = 4LLU;
	volatile int32_t t159 = 817404265;

    t159 = ((x4897&(x4898/x4899))>>x4900);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x4909 = UINT32_MAX;
	int16_t x4910 = INT16_MIN;
	volatile int32_t x4911 = INT32_MAX;
	static uint16_t x4912 = 1U;
	volatile uint32_t t160 = 37230831U;

    t160 = ((x4909&(x4910/x4911))>>x4912);

    if (t160 != 0U) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x4914 = 1;
	int8_t x4915 = INT8_MIN;
	static volatile uint32_t x4916 = 4U;
	static volatile int32_t t161 = 356;

    t161 = ((x4913&(x4914/x4915))>>x4916);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x4921 = 9U;
	volatile uint16_t x4924 = 4U;

    t162 = ((x4921&(x4922/x4923))>>x4924);

    if (t162 != 0U) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x4989 = -1;
	int16_t x4990 = INT16_MAX;
	volatile uint16_t x4991 = 6427U;
	uint16_t x4992 = 3U;
	static volatile int32_t t163 = -6;

    t163 = ((x4989&(x4990/x4991))>>x4992);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x5021 = INT32_MIN;
	uint32_t x5022 = UINT32_MAX;
	static int64_t x5023 = INT64_MIN;
	int64_t t164 = -496014472LL;

    t164 = ((x5021&(x5022/x5023))>>x5024);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x5037 = 15;
	int16_t x5038 = INT16_MAX;
	int64_t x5039 = INT64_MIN;
	volatile uint8_t x5040 = 5U;
	volatile int64_t t165 = -86633586405265498LL;

    t165 = ((x5037&(x5038/x5039))>>x5040);

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x5045 = 19U;
	static uint8_t x5047 = UINT8_MAX;
	uint8_t x5048 = 1U;
	int32_t t166 = 935837593;

    t166 = ((x5045&(x5046/x5047))>>x5048);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x5065 = INT64_MIN;
	uint16_t x5066 = 52U;
	int64_t x5067 = INT64_MIN;
	volatile uint8_t x5068 = 18U;
	volatile int64_t t167 = 144LL;

    t167 = ((x5065&(x5066/x5067))>>x5068);

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint64_t x5082 = UINT64_MAX;
	int32_t x5083 = INT32_MIN;
	volatile uint8_t x5084 = 47U;
	volatile uint64_t t168 = 452761433LLU;

    t168 = ((x5081&(x5082/x5083))>>x5084);

    if (t168 != 0LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint8_t x5089 = 15U;
	int64_t x5090 = INT64_MIN;
	int16_t x5092 = 2;
	int64_t t169 = -107LL;

    t169 = ((x5089&(x5090/x5091))>>x5092);

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x5137 = INT16_MAX;
	static int16_t x5138 = 5622;
	int8_t x5139 = INT8_MAX;
	static volatile int32_t t170 = 74172713;

    t170 = ((x5137&(x5138/x5139))>>x5140);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint8_t x5177 = 22U;
	int64_t x5178 = 518902527328156132LL;
	int32_t x5179 = -1;
	volatile int64_t t171 = -1069198127218291LL;

    t171 = ((x5177&(x5178/x5179))>>x5180);

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x5225 = UINT16_MAX;
	int64_t x5226 = INT64_MIN;
	volatile int32_t x5227 = INT32_MIN;
	static uint8_t x5228 = 6U;
	volatile int64_t t172 = 7LL;

    t172 = ((x5225&(x5226/x5227))>>x5228);

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x5245 = 12U;
	static int32_t x5246 = -1;
	static int32_t t173 = 4904;

    t173 = ((x5245&(x5246/x5247))>>x5248);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x5333 = -3;
	int32_t x5335 = INT32_MAX;
	volatile int8_t x5336 = 5;
	int64_t t174 = -15554772LL;

    t174 = ((x5333&(x5334/x5335))>>x5336);

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x5433 = INT32_MIN;
	uint16_t x5434 = UINT16_MAX;
	int64_t x5435 = INT64_MAX;
	volatile uint8_t x5436 = 56U;

    t175 = ((x5433&(x5434/x5435))>>x5436);

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x5497 = UINT8_MAX;
	int16_t x5498 = 15;
	static int32_t x5499 = INT32_MIN;
	uint32_t x5500 = 2U;
	int32_t t176 = -213620403;

    t176 = ((x5497&(x5498/x5499))>>x5500);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile uint64_t x5506 = UINT64_MAX;
	uint8_t x5508 = 19U;
	volatile uint64_t t177 = 214466263LLU;

    t177 = ((x5505&(x5506/x5507))>>x5508);

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x5521 = -1474;
	uint32_t x5522 = 57586U;
	uint8_t x5523 = UINT8_MAX;
	uint16_t x5524 = 6U;

    t178 = ((x5521&(x5522/x5523))>>x5524);

    if (t178 != 0U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x5537 = UINT8_MAX;
	int16_t x5538 = INT16_MIN;
	int16_t x5539 = INT16_MIN;
	static int16_t x5540 = 2;

    t179 = ((x5537&(x5538/x5539))>>x5540);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x5566 = INT16_MAX;
	uint64_t x5568 = 5LLU;
	static uint64_t t180 = 3530685682577LLU;

    t180 = ((x5565&(x5566/x5567))>>x5568);

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x5573 = 434;
	static uint16_t x5574 = UINT16_MAX;
	int64_t x5575 = -3452LL;
	volatile int8_t x5576 = 18;
	int64_t t181 = -220LL;

    t181 = ((x5573&(x5574/x5575))>>x5576);

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint8_t x5605 = UINT8_MAX;
	static volatile int16_t x5606 = INT16_MAX;
	uint8_t x5607 = 25U;
	uint32_t x5608 = 15U;
	volatile int32_t t182 = -33107309;

    t182 = ((x5605&(x5606/x5607))>>x5608);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int32_t x5658 = INT32_MIN;
	int8_t x5659 = INT8_MAX;
	int8_t x5660 = 4;
	static int32_t t183 = 1;

    t183 = ((x5657&(x5658/x5659))>>x5660);

    if (t183 != 4) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x5669 = 42885589;
	uint64_t x5670 = UINT64_MAX;
	int16_t x5671 = -1;
	volatile uint32_t x5672 = 2U;
	uint64_t t184 = 37741239008LLU;

    t184 = ((x5669&(x5670/x5671))>>x5672);

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t x5697 = -1;
	int64_t x5698 = 294896442378LL;
	uint64_t x5699 = 112553512382032817LLU;
	volatile uint64_t t185 = 1856029667199170124LLU;

    t185 = ((x5697&(x5698/x5699))>>x5700);

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x5734 = INT16_MIN;
	int32_t x5736 = 1;

    t186 = ((x5733&(x5734/x5735))>>x5736);

    if (t186 != 20498U) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x5761 = INT64_MIN;
	uint32_t x5762 = UINT32_MAX;
	uint64_t x5763 = 12315288LLU;
	static int8_t x5764 = 22;

    t187 = ((x5761&(x5762/x5763))>>x5764);

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x5778 = INT16_MIN;
	static volatile uint16_t x5779 = 2U;
	uint32_t x5780 = 7U;
	int32_t t188 = 547;

    t188 = ((x5777&(x5778/x5779))>>x5780);

    if (t188 != 16777088) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint16_t x5820 = 0U;
	volatile uint64_t t189 = 261716181092841LLU;

    t189 = ((x5817&(x5818/x5819))>>x5820);

    if (t189 != 259862277491744LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x5837 = UINT16_MAX;
	int16_t x5838 = INT16_MIN;
	volatile uint64_t x5839 = UINT64_MAX;
	int16_t x5840 = 0;
	uint64_t t190 = 701LLU;

    t190 = ((x5837&(x5838/x5839))>>x5840);

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x5901 = 1;
	volatile int64_t x5902 = INT64_MIN;
	volatile uint8_t x5903 = 92U;
	volatile uint32_t x5904 = 2U;
	volatile int64_t t191 = 274424LL;

    t191 = ((x5901&(x5902/x5903))>>x5904);

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x5945 = INT16_MIN;
	static uint16_t x5946 = 11739U;
	int32_t x5947 = INT32_MIN;
	volatile uint8_t x5948 = 11U;

    t192 = ((x5945&(x5946/x5947))>>x5948);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x6001 = 42U;
	static uint32_t x6002 = UINT32_MAX;
	volatile uint32_t x6003 = 199U;
	uint32_t x6004 = 0U;
	uint32_t t193 = 72U;

    t193 = ((x6001&(x6002/x6003))>>x6004);

    if (t193 != 10U) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x6009 = -1LL;
	int32_t x6011 = INT32_MIN;
	int8_t x6012 = 0;
	volatile uint64_t t194 = 15549749LLU;

    t194 = ((x6009&(x6010/x6011))>>x6012);

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x6021 = INT64_MAX;
	uint8_t x6022 = 3U;
	volatile int16_t x6023 = INT16_MIN;
	int64_t t195 = -106821771073371480LL;

    t195 = ((x6021&(x6022/x6023))>>x6024);

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int32_t x6029 = 7;
	int8_t x6031 = 20;
	uint16_t x6032 = 2U;
	uint64_t t196 = 483LLU;

    t196 = ((x6029&(x6030/x6031))>>x6032);

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x6069 = UINT32_MAX;
	int16_t x6070 = INT16_MIN;
	int16_t x6071 = INT16_MIN;
	volatile int8_t x6072 = 0;
	volatile uint32_t t197 = 220U;

    t197 = ((x6069&(x6070/x6071))>>x6072);

    if (t197 != 1U) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x6121 = 1;
	volatile uint8_t x6122 = UINT8_MAX;
	uint64_t x6123 = 15287978572003LLU;
	int8_t x6124 = 1;
	uint64_t t198 = 315968173679916911LLU;

    t198 = ((x6121&(x6122/x6123))>>x6124);

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x6229 = -98649;
	int64_t x6231 = INT64_MAX;
	static volatile int8_t x6232 = 2;
	uint64_t t199 = 779764117794478LLU;

    t199 = ((x6229&(x6230/x6231))>>x6232);

    if (t199 != 0LLU) { NG(); } else { ; }
	
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

