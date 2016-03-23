
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

static volatile int16_t x1 = INT16_MAX;
static uint8_t x4 = 20U;
int32_t x9 = 18346701;
int32_t x11 = INT32_MIN;
static int32_t t2 = 2;
volatile int32_t x14 = INT32_MIN;
int32_t x16 = -1;
volatile int32_t t3 = 38133;
volatile int64_t x40 = -1LL;
static int32_t x104 = INT32_MAX;
volatile int32_t t9 = 9667;
int64_t x106 = INT64_MIN;
volatile uint64_t x108 = 3LLU;
int32_t t11 = 1;
volatile int32_t t13 = 683;
uint64_t x173 = 479329LLU;
static volatile uint16_t x194 = 15U;
volatile int64_t x216 = 1LL;
uint16_t x260 = 1U;
static volatile uint16_t x273 = 441U;
int32_t t21 = 8037;
static int64_t x318 = INT64_MAX;
static int32_t x331 = INT32_MIN;
int32_t x332 = INT32_MIN;
uint64_t x396 = 12LLU;
int16_t x397 = INT16_MIN;
int64_t x410 = INT64_MAX;
int64_t x412 = -94LL;
int64_t x430 = INT64_MAX;
static uint32_t x431 = 0U;
int32_t t38 = 165806;
int16_t x458 = -5309;
static uint16_t x467 = 6014U;
volatile int32_t t43 = -20138414;
uint8_t x522 = 30U;
uint8_t x539 = UINT8_MAX;
int8_t x551 = 0;
int64_t x553 = 803LL;
volatile int32_t t48 = -333282;
int8_t x601 = -1;
static uint16_t x626 = 6615U;
int64_t x628 = -1LL;
volatile int16_t x641 = INT16_MIN;
int64_t x644 = 379547950532LL;
int32_t t55 = 12221;
volatile int16_t x673 = INT16_MAX;
volatile int64_t x674 = -1LL;
static int64_t x682 = 13549500403LL;
volatile int32_t t59 = -483530651;
static int32_t x721 = 1973;
volatile int32_t t60 = 235;
static volatile int16_t x725 = INT16_MIN;
static int16_t x768 = INT16_MIN;
volatile int32_t t64 = -328548;
int32_t x769 = INT32_MAX;
uint32_t x777 = UINT32_MAX;
int32_t x791 = INT32_MIN;
int32_t t68 = -3997105;
static int16_t x797 = INT16_MIN;
int64_t x800 = INT64_MAX;
static volatile int32_t t69 = -3;
int16_t x805 = INT16_MIN;
static volatile int32_t t70 = -56282078;
uint16_t x821 = 2U;
uint8_t x823 = 1U;
int64_t x824 = INT64_MIN;
uint32_t x838 = 174787392U;
static volatile int64_t x840 = -1LL;
int32_t t74 = 3713567;
int32_t x874 = -6535;
int8_t x913 = INT8_MIN;
int8_t x914 = INT8_MIN;
uint16_t x946 = 0U;
volatile int32_t t77 = 25;
static volatile int8_t x960 = INT8_MAX;
int32_t t80 = 3;
int16_t x968 = 2;
uint16_t x981 = 49U;
int32_t t83 = -13654563;
volatile int32_t t84 = -21616969;
int64_t x998 = INT64_MAX;
static volatile uint64_t x1002 = 11562656717LLU;
int32_t t86 = -2239378;
static int16_t x1052 = INT16_MAX;
int16_t x1082 = INT16_MIN;
static int32_t x1084 = -1;
static int32_t t93 = 1;
volatile uint32_t x1115 = 8783U;
int32_t t94 = -486800;
int32_t t95 = -93181882;
int8_t x1136 = INT8_MAX;
int16_t x1166 = INT16_MAX;
volatile uint16_t x1167 = 5379U;
static volatile int8_t x1175 = INT8_MAX;
int32_t t99 = 916;
volatile int32_t t103 = 13463;
static int64_t x1201 = 1095818323077327865LL;
int16_t x1202 = 922;
int8_t x1204 = -1;
int8_t x1225 = INT8_MAX;
int16_t x1228 = -3;
volatile int32_t t107 = 409394;
uint8_t x1263 = 9U;
static uint64_t x1311 = UINT64_MAX;
int32_t t111 = 482;
int32_t x1394 = -7;
uint32_t x1410 = UINT32_MAX;
uint32_t x1425 = 3321966U;
static int32_t x1426 = -1;
static volatile int32_t t120 = -201;
static uint16_t x1461 = 1102U;
static int64_t x1476 = 48LL;
int32_t t124 = -173;
int64_t x1501 = 0LL;
int64_t x1503 = INT64_MIN;
int32_t x1509 = INT32_MIN;
int32_t x1531 = INT32_MAX;
static int8_t x1550 = INT8_MIN;
volatile int32_t t131 = -1;
int16_t x1555 = 13;
volatile int16_t x1557 = INT16_MAX;
volatile int64_t x1563 = INT64_MIN;
int8_t x1564 = -1;
static uint8_t x1577 = 6U;
int16_t x1613 = -388;
int64_t x1620 = -1LL;
int64_t x1630 = -1LL;
volatile int32_t t139 = 98;
int16_t x1650 = INT16_MAX;
uint8_t x1659 = 5U;
int32_t t142 = 25312928;
int16_t x1707 = 1;
static int64_t x1714 = -1LL;
uint8_t x1715 = 4U;
static volatile int32_t t149 = 12;
uint8_t x1737 = UINT8_MAX;
volatile int32_t x1741 = INT32_MIN;
static int32_t x1742 = -1;
uint32_t x1767 = 5448U;
int32_t x1820 = INT32_MIN;
volatile uint64_t x1852 = UINT64_MAX;
volatile int8_t x1881 = 35;
int16_t x1901 = INT16_MAX;
int32_t t160 = 151254830;
int16_t x1909 = -1;
int8_t x1910 = 2;
volatile int32_t x1919 = INT32_MIN;
volatile uint16_t x1931 = 20U;
static volatile int32_t x1932 = INT32_MAX;
static int8_t x1934 = -1;
int32_t t166 = -772677543;
volatile int32_t x1972 = 44;
int32_t x1976 = -1;
static volatile int32_t x2004 = 22;
uint32_t x2033 = UINT32_MAX;
int16_t x2034 = INT16_MIN;
volatile uint64_t x2038 = 4174811792LLU;
int16_t x2040 = -1;
static int16_t x2045 = -1;
int64_t x2048 = -1LL;
volatile int32_t t174 = -50694018;
volatile int32_t t176 = 16263;
int16_t x2077 = 22;
int64_t x2121 = -1LL;
int16_t x2122 = -1;
int32_t x2146 = 503708504;
volatile int32_t x2206 = 15140;
static volatile int64_t x2207 = -1LL;
int16_t x2226 = -1;
int32_t x2234 = INT32_MIN;
uint64_t x2236 = UINT64_MAX;
int16_t x2265 = -1;
volatile int64_t x2266 = 18889LL;
int64_t x2268 = INT64_MIN;
static volatile uint32_t x2291 = 297208U;
volatile int32_t t196 = -965;
int16_t x2334 = INT16_MIN;
int32_t t198 = -181506;
int32_t x2356 = INT32_MAX;
static volatile int32_t t199 = 1921;


void f0(void) {
    	int16_t x2 = -1;
	static uint16_t x3 = 354U;
	volatile int32_t t0 = -845556257;

    t0 = ((x1==x2)<<(x3%x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = 4148719LLU;
	volatile int16_t x6 = -1;
	volatile uint32_t x7 = 13U;
	int16_t x8 = 143;
	int32_t t1 = -2491;

    t1 = ((x5==x6)<<(x7%x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x10 = -995052317718289LL;
	int16_t x12 = INT16_MIN;

    t2 = ((x9==x10)<<(x11%x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = 17835174U;
	int64_t x15 = 197490830767844708LL;

    t3 = ((x13==x14)<<(x15%x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x29 = INT16_MAX;
	int64_t x30 = -1LL;
	volatile int8_t x31 = INT8_MIN;
	static int16_t x32 = -1;
	volatile int32_t t4 = 11;

    t4 = ((x29==x30)<<(x31%x32));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x37 = INT64_MAX;
	static uint64_t x38 = UINT64_MAX;
	static uint32_t x39 = UINT32_MAX;
	int32_t t5 = -22;

    t5 = ((x37==x38)<<(x39%x40));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x57 = -1;
	volatile int8_t x58 = 0;
	static int16_t x59 = 21;
	int8_t x60 = -23;
	int32_t t6 = 0;

    t6 = ((x57==x58)<<(x59%x60));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x65 = INT32_MAX;
	uint8_t x66 = UINT8_MAX;
	int64_t x67 = INT64_MAX;
	volatile int16_t x68 = 7;
	volatile int32_t t7 = 948054552;

    t7 = ((x65==x66)<<(x67%x68));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x97 = 115U;
	uint16_t x98 = 3879U;
	volatile int16_t x99 = INT16_MAX;
	uint16_t x100 = 1U;
	int32_t t8 = 98522897;

    t8 = ((x97==x98)<<(x99%x100));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x101 = INT16_MIN;
	int64_t x102 = INT64_MAX;
	uint64_t x103 = UINT64_MAX;

    t9 = ((x101==x102)<<(x103%x104));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint32_t x105 = 398U;
	int32_t x107 = -31;
	static int32_t t10 = -9555086;

    t10 = ((x105==x106)<<(x107%x108));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x129 = -90;
	int64_t x130 = INT64_MIN;
	int16_t x131 = 1028;
	int8_t x132 = -1;

    t11 = ((x129==x130)<<(x131%x132));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x149 = 491U;
	int64_t x150 = INT64_MAX;
	volatile uint32_t x151 = 2U;
	volatile int16_t x152 = INT16_MIN;
	volatile int32_t t12 = -3;

    t12 = ((x149==x150)<<(x151%x152));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x161 = INT16_MIN;
	volatile uint8_t x162 = 20U;
	int64_t x163 = -1LL;
	int8_t x164 = -1;

    t13 = ((x161==x162)<<(x163%x164));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x174 = -1;
	int8_t x175 = INT8_MAX;
	int8_t x176 = INT8_MAX;
	volatile int32_t t14 = -6603091;

    t14 = ((x173==x174)<<(x175%x176));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x181 = -15490;
	static volatile uint8_t x182 = 45U;
	static int32_t x183 = -1;
	int32_t x184 = -1;
	volatile int32_t t15 = -1;

    t15 = ((x181==x182)<<(x183%x184));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x185 = 6U;
	int64_t x186 = INT64_MIN;
	uint8_t x187 = 0U;
	int16_t x188 = -1;
	volatile int32_t t16 = -36;

    t16 = ((x185==x186)<<(x187%x188));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x193 = INT8_MAX;
	uint8_t x195 = 30U;
	volatile uint32_t x196 = 1222U;
	static volatile int32_t t17 = 1973;

    t17 = ((x193==x194)<<(x195%x196));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x213 = -1;
	int8_t x214 = 61;
	int32_t x215 = INT32_MIN;
	static int32_t t18 = 1;

    t18 = ((x213==x214)<<(x215%x216));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint32_t x245 = 0U;
	int32_t x246 = -2625223;
	volatile int32_t x247 = INT32_MIN;
	static int16_t x248 = INT16_MIN;
	int32_t t19 = 1;

    t19 = ((x245==x246)<<(x247%x248));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int64_t x257 = 31762655427LL;
	volatile uint64_t x258 = 2088189206395775LLU;
	int16_t x259 = INT16_MIN;
	volatile int32_t t20 = 523;

    t20 = ((x257==x258)<<(x259%x260));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x274 = 172542859330770LL;
	volatile uint8_t x275 = 6U;
	uint16_t x276 = 232U;

    t21 = ((x273==x274)<<(x275%x276));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint32_t x293 = 8297841U;
	int16_t x294 = -72;
	uint64_t x295 = 1539344645136371LLU;
	volatile int32_t x296 = 7;
	volatile int32_t t22 = 1198;

    t22 = ((x293==x294)<<(x295%x296));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile uint64_t x305 = UINT64_MAX;
	int32_t x306 = INT32_MAX;
	volatile uint16_t x307 = 3U;
	static volatile int8_t x308 = -1;
	int32_t t23 = 162114227;

    t23 = ((x305==x306)<<(x307%x308));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x317 = UINT64_MAX;
	int8_t x319 = -1;
	uint32_t x320 = 4U;
	volatile int32_t t24 = 1417;

    t24 = ((x317==x318)<<(x319%x320));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x329 = INT8_MIN;
	int8_t x330 = -1;
	volatile int32_t t25 = 40022606;

    t25 = ((x329==x330)<<(x331%x332));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint8_t x349 = 60U;
	int8_t x350 = -1;
	int64_t x351 = INT64_MAX;
	uint8_t x352 = 2U;
	int32_t t26 = -23;

    t26 = ((x349==x350)<<(x351%x352));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x357 = -39;
	uint32_t x358 = UINT32_MAX;
	int8_t x359 = INT8_MIN;
	int8_t x360 = INT8_MIN;
	volatile int32_t t27 = -49737;

    t27 = ((x357==x358)<<(x359%x360));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x361 = 1;
	int32_t x362 = -1404;
	int8_t x363 = 1;
	int32_t x364 = 91173305;
	int32_t t28 = 85447;

    t28 = ((x361==x362)<<(x363%x364));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x365 = -1;
	int64_t x366 = INT64_MIN;
	int64_t x367 = -22LL;
	static int32_t x368 = -1;
	int32_t t29 = 21;

    t29 = ((x365==x366)<<(x367%x368));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x377 = 127LLU;
	int8_t x378 = INT8_MIN;
	static int32_t x379 = -7041;
	uint8_t x380 = 1U;
	static int32_t t30 = 27054;

    t30 = ((x377==x378)<<(x379%x380));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x393 = 0;
	int64_t x394 = -1LL;
	volatile int64_t x395 = 135061783221548LL;
	int32_t t31 = 10758851;

    t31 = ((x393==x394)<<(x395%x396));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint32_t x398 = 3771149U;
	uint64_t x399 = UINT64_MAX;
	int8_t x400 = 48;
	static volatile int32_t t32 = -949756;

    t32 = ((x397==x398)<<(x399%x400));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x409 = 12U;
	int64_t x411 = 1LL;
	int32_t t33 = 4771;

    t33 = ((x409==x410)<<(x411%x412));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x429 = -3;
	int32_t x432 = INT32_MAX;
	int32_t t34 = 12842248;

    t34 = ((x429==x430)<<(x431%x432));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x437 = 699U;
	int16_t x438 = INT16_MAX;
	volatile int64_t x439 = -1098346427LL;
	int64_t x440 = -1LL;
	static int32_t t35 = -12634762;

    t35 = ((x437==x438)<<(x439%x440));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x441 = INT8_MIN;
	int8_t x442 = 48;
	uint32_t x443 = UINT32_MAX;
	int16_t x444 = INT16_MAX;
	volatile int32_t t36 = 1;

    t36 = ((x441==x442)<<(x443%x444));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint32_t x449 = UINT32_MAX;
	static uint8_t x450 = 8U;
	volatile int64_t x451 = 2LL;
	static int32_t x452 = -1;
	int32_t t37 = 526;

    t37 = ((x449==x450)<<(x451%x452));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x453 = INT16_MIN;
	volatile uint8_t x454 = 2U;
	static volatile int16_t x455 = 0;
	int32_t x456 = INT32_MIN;

    t38 = ((x453==x454)<<(x455%x456));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int64_t x457 = INT64_MIN;
	int64_t x459 = INT64_MIN;
	int16_t x460 = INT16_MIN;
	volatile int32_t t39 = -3101;

    t39 = ((x457==x458)<<(x459%x460));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint16_t x465 = 14U;
	uint8_t x466 = 0U;
	int64_t x468 = -1LL;
	volatile int32_t t40 = 820959199;

    t40 = ((x465==x466)<<(x467%x468));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x469 = INT16_MIN;
	static int16_t x470 = 2;
	volatile int8_t x471 = INT8_MAX;
	static volatile int32_t x472 = -19;
	int32_t t41 = -197;

    t41 = ((x469==x470)<<(x471%x472));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x485 = UINT8_MAX;
	int64_t x486 = INT64_MIN;
	uint32_t x487 = 786382U;
	uint8_t x488 = 19U;
	int32_t t42 = -211814573;

    t42 = ((x485==x486)<<(x487%x488));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x489 = -1LL;
	int16_t x490 = INT16_MIN;
	volatile int64_t x491 = -1LL;
	int8_t x492 = -1;

    t43 = ((x489==x490)<<(x491%x492));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x521 = INT8_MIN;
	volatile uint8_t x523 = 2U;
	static volatile int16_t x524 = INT16_MAX;
	volatile int32_t t44 = 2131241;

    t44 = ((x521==x522)<<(x523%x524));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint64_t x537 = 99600605524739LLU;
	volatile int32_t x538 = -89612;
	uint8_t x540 = UINT8_MAX;
	int32_t t45 = -7993325;

    t45 = ((x537==x538)<<(x539%x540));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x541 = INT8_MIN;
	volatile int8_t x542 = INT8_MAX;
	uint32_t x543 = UINT32_MAX;
	int8_t x544 = 1;
	volatile int32_t t46 = 12;

    t46 = ((x541==x542)<<(x543%x544));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x549 = UINT32_MAX;
	int8_t x550 = -10;
	uint32_t x552 = UINT32_MAX;
	volatile int32_t t47 = 33;

    t47 = ((x549==x550)<<(x551%x552));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint64_t x554 = UINT64_MAX;
	int64_t x555 = -1LL;
	int16_t x556 = -1;

    t48 = ((x553==x554)<<(x555%x556));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x557 = 62;
	int64_t x558 = INT64_MIN;
	int8_t x559 = 0;
	int32_t x560 = 1;
	int32_t t49 = 1719;

    t49 = ((x557==x558)<<(x559%x560));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x569 = INT8_MIN;
	volatile uint64_t x570 = 2591851009345LLU;
	uint8_t x571 = UINT8_MAX;
	uint16_t x572 = 4U;
	static int32_t t50 = -14310044;

    t50 = ((x569==x570)<<(x571%x572));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x581 = INT16_MIN;
	int8_t x582 = -1;
	int16_t x583 = INT16_MIN;
	int8_t x584 = -1;
	static volatile int32_t t51 = 494688557;

    t51 = ((x581==x582)<<(x583%x584));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x602 = 0;
	volatile int8_t x603 = INT8_MAX;
	uint8_t x604 = 6U;
	volatile int32_t t52 = -148;

    t52 = ((x601==x602)<<(x603%x604));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x625 = INT64_MAX;
	static int32_t x627 = INT32_MIN;
	volatile int32_t t53 = -46335;

    t53 = ((x625==x626)<<(x627%x628));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint16_t x642 = 90U;
	int16_t x643 = 0;
	static volatile int32_t t54 = 4;

    t54 = ((x641==x642)<<(x643%x644));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x649 = 97634034U;
	uint64_t x650 = 1733370389117831LLU;
	uint8_t x651 = 1U;
	uint8_t x652 = 27U;

    t55 = ((x649==x650)<<(x651%x652));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x669 = INT8_MIN;
	int8_t x670 = 1;
	int8_t x671 = 1;
	int8_t x672 = INT8_MIN;
	volatile int32_t t56 = 401539;

    t56 = ((x669==x670)<<(x671%x672));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x675 = 18;
	uint16_t x676 = 1105U;
	volatile int32_t t57 = -53;

    t57 = ((x673==x674)<<(x675%x676));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x681 = -1;
	uint16_t x683 = UINT16_MAX;
	static volatile int16_t x684 = INT16_MAX;
	static volatile int32_t t58 = -1;

    t58 = ((x681==x682)<<(x683%x684));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile uint16_t x705 = 17050U;
	int32_t x706 = -1;
	int16_t x707 = INT16_MIN;
	volatile int16_t x708 = INT16_MIN;

    t59 = ((x705==x706)<<(x707%x708));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x722 = -1;
	static volatile int16_t x723 = INT16_MAX;
	int8_t x724 = INT8_MAX;

    t60 = ((x721==x722)<<(x723%x724));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x726 = INT16_MAX;
	uint8_t x727 = 0U;
	static int8_t x728 = INT8_MAX;
	static volatile int32_t t61 = 1;

    t61 = ((x725==x726)<<(x727%x728));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x729 = -484817504;
	static uint16_t x730 = UINT16_MAX;
	int32_t x731 = INT32_MAX;
	int32_t x732 = INT32_MAX;
	int32_t t62 = 995178474;

    t62 = ((x729==x730)<<(x731%x732));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x761 = -1LL;
	uint8_t x762 = 44U;
	uint16_t x763 = 1U;
	int8_t x764 = INT8_MAX;
	volatile int32_t t63 = -48;

    t63 = ((x761==x762)<<(x763%x764));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x765 = INT16_MIN;
	static int16_t x766 = INT16_MIN;
	int32_t x767 = INT32_MIN;

    t64 = ((x765==x766)<<(x767%x768));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile uint64_t x770 = 0LLU;
	int32_t x771 = -13553;
	int64_t x772 = -1LL;
	volatile int32_t t65 = 1904244;

    t65 = ((x769==x770)<<(x771%x772));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x778 = -1LL;
	static uint8_t x779 = 1U;
	uint8_t x780 = 1U;
	int32_t t66 = -66;

    t66 = ((x777==x778)<<(x779%x780));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x789 = 1676U;
	volatile uint64_t x790 = 198464964157772345LLU;
	static int64_t x792 = -1LL;
	static int32_t t67 = 1;

    t67 = ((x789==x790)<<(x791%x792));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x793 = -1;
	static int32_t x794 = INT32_MIN;
	uint64_t x795 = 302017578700895LLU;
	static uint8_t x796 = 1U;

    t68 = ((x793==x794)<<(x795%x796));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x798 = UINT32_MAX;
	int64_t x799 = INT64_MAX;

    t69 = ((x797==x798)<<(x799%x800));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x806 = 1;
	int64_t x807 = -13877LL;
	int8_t x808 = 1;

    t70 = ((x805==x806)<<(x807%x808));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x822 = -1LL;
	static int32_t t71 = -31193;

    t71 = ((x821==x822)<<(x823%x824));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x829 = 41U;
	int64_t x830 = -1LL;
	int16_t x831 = -11194;
	uint8_t x832 = 2U;
	volatile int32_t t72 = 2095008;

    t72 = ((x829==x830)<<(x831%x832));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x837 = INT64_MAX;
	uint16_t x839 = 31291U;
	volatile int32_t t73 = 4;

    t73 = ((x837==x838)<<(x839%x840));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint32_t x861 = UINT32_MAX;
	static int32_t x862 = 1801;
	static uint8_t x863 = UINT8_MAX;
	uint8_t x864 = 28U;

    t74 = ((x861==x862)<<(x863%x864));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x873 = UINT8_MAX;
	uint8_t x875 = 24U;
	int32_t x876 = -520475101;
	static int32_t t75 = -34207;

    t75 = ((x873==x874)<<(x875%x876));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int8_t x915 = -1;
	int64_t x916 = -1LL;
	static int32_t t76 = -8;

    t76 = ((x913==x914)<<(x915%x916));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x945 = 34U;
	static volatile uint16_t x947 = 1U;
	uint8_t x948 = UINT8_MAX;

    t77 = ((x945==x946)<<(x947%x948));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x949 = UINT64_MAX;
	int32_t x950 = -30;
	int16_t x951 = INT16_MIN;
	int8_t x952 = -1;
	static int32_t t78 = 21;

    t78 = ((x949==x950)<<(x951%x952));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x953 = UINT64_MAX;
	int32_t x954 = INT32_MIN;
	int64_t x955 = INT64_MAX;
	int8_t x956 = 15;
	int32_t t79 = -1;

    t79 = ((x953==x954)<<(x955%x956));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x957 = UINT64_MAX;
	uint8_t x958 = 42U;
	int16_t x959 = 7;

    t80 = ((x957==x958)<<(x959%x960));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x965 = 0U;
	int64_t x966 = 20566888506810LL;
	static int64_t x967 = -689780154742378LL;
	static volatile int32_t t81 = 73061;

    t81 = ((x965==x966)<<(x967%x968));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x969 = 0U;
	uint16_t x970 = UINT16_MAX;
	static uint8_t x971 = UINT8_MAX;
	static uint32_t x972 = 16U;
	int32_t t82 = -1;

    t82 = ((x969==x970)<<(x971%x972));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint64_t x982 = UINT64_MAX;
	int64_t x983 = INT64_MIN;
	int8_t x984 = INT8_MIN;

    t83 = ((x981==x982)<<(x983%x984));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x989 = 0U;
	int16_t x990 = -3526;
	int8_t x991 = 1;
	static int16_t x992 = -1;

    t84 = ((x989==x990)<<(x991%x992));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x997 = INT64_MIN;
	volatile uint8_t x999 = 0U;
	int8_t x1000 = -2;
	volatile int32_t t85 = -2;

    t85 = ((x997==x998)<<(x999%x1000));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x1001 = 16837U;
	uint32_t x1003 = 31U;
	volatile int32_t x1004 = INT32_MIN;

    t86 = ((x1001==x1002)<<(x1003%x1004));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x1021 = INT16_MIN;
	int8_t x1022 = INT8_MAX;
	static uint8_t x1023 = UINT8_MAX;
	int8_t x1024 = INT8_MAX;
	static int32_t t87 = -1;

    t87 = ((x1021==x1022)<<(x1023%x1024));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x1029 = 82U;
	static int32_t x1030 = -1;
	int64_t x1031 = 272034443160289729LL;
	volatile uint16_t x1032 = 4U;
	volatile int32_t t88 = 98;

    t88 = ((x1029==x1030)<<(x1031%x1032));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x1037 = INT16_MAX;
	static int64_t x1038 = -1LL;
	volatile uint8_t x1039 = 0U;
	uint8_t x1040 = 2U;
	int32_t t89 = 239163693;

    t89 = ((x1037==x1038)<<(x1039%x1040));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int64_t x1041 = -13794860LL;
	volatile int32_t x1042 = INT32_MIN;
	volatile uint8_t x1043 = UINT8_MAX;
	int64_t x1044 = -1LL;
	static int32_t t90 = 106852;

    t90 = ((x1041==x1042)<<(x1043%x1044));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int8_t x1049 = INT8_MIN;
	int8_t x1050 = -1;
	uint8_t x1051 = 3U;
	volatile int32_t t91 = -1;

    t91 = ((x1049==x1050)<<(x1051%x1052));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x1081 = INT32_MIN;
	volatile int32_t x1083 = INT32_MIN;
	volatile int32_t t92 = -28511167;

    t92 = ((x1081==x1082)<<(x1083%x1084));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x1085 = INT16_MIN;
	uint8_t x1086 = 15U;
	uint16_t x1087 = 3095U;
	uint64_t x1088 = 205LLU;

    t93 = ((x1085==x1086)<<(x1087%x1088));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x1113 = INT8_MAX;
	static int64_t x1114 = INT64_MAX;
	uint8_t x1116 = 24U;

    t94 = ((x1113==x1114)<<(x1115%x1116));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x1125 = INT16_MIN;
	uint16_t x1126 = UINT16_MAX;
	int64_t x1127 = INT64_MIN;
	int8_t x1128 = 1;

    t95 = ((x1125==x1126)<<(x1127%x1128));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x1133 = UINT16_MAX;
	int16_t x1134 = -3968;
	static int64_t x1135 = INT64_MAX;
	int32_t t96 = -62;

    t96 = ((x1133==x1134)<<(x1135%x1136));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x1165 = -1;
	int16_t x1168 = 16;
	volatile int32_t t97 = 6519;

    t97 = ((x1165==x1166)<<(x1167%x1168));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x1173 = -3046;
	int32_t x1174 = -1;
	int8_t x1176 = INT8_MAX;
	volatile int32_t t98 = -14794;

    t98 = ((x1173==x1174)<<(x1175%x1176));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x1177 = INT8_MAX;
	int64_t x1178 = INT64_MIN;
	uint16_t x1179 = 3U;
	uint32_t x1180 = UINT32_MAX;

    t99 = ((x1177==x1178)<<(x1179%x1180));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x1181 = 33;
	int64_t x1182 = INT64_MIN;
	int32_t x1183 = 14910346;
	int16_t x1184 = -1;
	volatile int32_t t100 = -4;

    t100 = ((x1181==x1182)<<(x1183%x1184));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint16_t x1189 = 0U;
	static int32_t x1190 = INT32_MIN;
	int64_t x1191 = -38097404286738LL;
	int8_t x1192 = -1;
	int32_t t101 = 476918350;

    t101 = ((x1189==x1190)<<(x1191%x1192));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x1193 = 1476072U;
	uint16_t x1194 = 0U;
	volatile int64_t x1195 = INT64_MIN;
	int8_t x1196 = INT8_MIN;
	int32_t t102 = 16581;

    t102 = ((x1193==x1194)<<(x1195%x1196));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x1197 = 120LL;
	uint16_t x1198 = 6841U;
	volatile int32_t x1199 = INT32_MIN;
	int8_t x1200 = INT8_MIN;

    t103 = ((x1197==x1198)<<(x1199%x1200));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x1203 = -1LL;
	static volatile int32_t t104 = -1981325;

    t104 = ((x1201==x1202)<<(x1203%x1204));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x1226 = INT32_MAX;
	int8_t x1227 = 1;
	volatile int32_t t105 = -227602442;

    t105 = ((x1225==x1226)<<(x1227%x1228));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x1245 = 0U;
	int16_t x1246 = INT16_MIN;
	int64_t x1247 = INT64_MIN;
	int32_t x1248 = INT32_MIN;
	volatile int32_t t106 = 503248605;

    t106 = ((x1245==x1246)<<(x1247%x1248));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x1249 = INT8_MIN;
	int32_t x1250 = -1;
	int64_t x1251 = 1215595972047384LL;
	uint8_t x1252 = 9U;

    t107 = ((x1249==x1250)<<(x1251%x1252));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x1261 = 357U;
	volatile int8_t x1262 = INT8_MAX;
	int8_t x1264 = INT8_MAX;
	int32_t t108 = -211441607;

    t108 = ((x1261==x1262)<<(x1263%x1264));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x1265 = INT64_MIN;
	int16_t x1266 = -1;
	static int32_t x1267 = 31356;
	uint16_t x1268 = 21U;
	int32_t t109 = -3846;

    t109 = ((x1265==x1266)<<(x1267%x1268));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x1309 = 1930U;
	int16_t x1310 = INT16_MIN;
	uint32_t x1312 = UINT32_MAX;
	int32_t t110 = 16179;

    t110 = ((x1309==x1310)<<(x1311%x1312));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x1341 = 347956;
	static int8_t x1342 = -8;
	uint8_t x1343 = 2U;
	int32_t x1344 = INT32_MIN;

    t111 = ((x1341==x1342)<<(x1343%x1344));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x1345 = -32;
	int16_t x1346 = INT16_MIN;
	volatile int8_t x1347 = 37;
	int8_t x1348 = -1;
	static volatile int32_t t112 = 9085745;

    t112 = ((x1345==x1346)<<(x1347%x1348));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x1353 = INT16_MIN;
	int16_t x1354 = 13;
	static int16_t x1355 = INT16_MAX;
	volatile int32_t x1356 = -27;
	volatile int32_t t113 = 3;

    t113 = ((x1353==x1354)<<(x1355%x1356));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x1385 = INT8_MAX;
	volatile uint32_t x1386 = UINT32_MAX;
	static uint64_t x1387 = UINT64_MAX;
	static uint32_t x1388 = UINT32_MAX;
	int32_t t114 = 88412389;

    t114 = ((x1385==x1386)<<(x1387%x1388));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x1393 = 4U;
	uint32_t x1395 = 19072808U;
	uint8_t x1396 = 5U;
	int32_t t115 = -27703859;

    t115 = ((x1393==x1394)<<(x1395%x1396));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x1409 = INT32_MIN;
	static int16_t x1411 = INT16_MAX;
	volatile uint8_t x1412 = 3U;
	int32_t t116 = 28254;

    t116 = ((x1409==x1410)<<(x1411%x1412));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint32_t x1427 = 1U;
	int16_t x1428 = INT16_MIN;
	int32_t t117 = -4470150;

    t117 = ((x1425==x1426)<<(x1427%x1428));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x1433 = INT8_MIN;
	int16_t x1434 = -7;
	int8_t x1435 = 1;
	static int64_t x1436 = -1LL;
	volatile int32_t t118 = -8;

    t118 = ((x1433==x1434)<<(x1435%x1436));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x1437 = INT32_MIN;
	int32_t x1438 = INT32_MAX;
	uint64_t x1439 = UINT64_MAX;
	int64_t x1440 = INT64_MAX;
	static int32_t t119 = 4;

    t119 = ((x1437==x1438)<<(x1439%x1440));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint32_t x1445 = 46405787U;
	int8_t x1446 = -1;
	static int64_t x1447 = INT64_MIN;
	int16_t x1448 = INT16_MIN;

    t120 = ((x1445==x1446)<<(x1447%x1448));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x1453 = -1;
	static uint8_t x1454 = 10U;
	int16_t x1455 = INT16_MAX;
	volatile int32_t x1456 = -1;
	volatile int32_t t121 = 15;

    t121 = ((x1453==x1454)<<(x1455%x1456));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x1462 = -1LL;
	uint8_t x1463 = 0U;
	uint64_t x1464 = UINT64_MAX;
	static int32_t t122 = -121;

    t122 = ((x1461==x1462)<<(x1463%x1464));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x1469 = -22;
	uint32_t x1470 = 0U;
	uint16_t x1471 = 29U;
	int16_t x1472 = 1;
	static volatile int32_t t123 = 2124;

    t123 = ((x1469==x1470)<<(x1471%x1472));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint8_t x1473 = 13U;
	int16_t x1474 = 6505;
	static uint8_t x1475 = 50U;

    t124 = ((x1473==x1474)<<(x1475%x1476));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x1502 = 1U;
	int64_t x1504 = -1LL;
	int32_t t125 = 224;

    t125 = ((x1501==x1502)<<(x1503%x1504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x1510 = 1;
	static uint16_t x1511 = UINT16_MAX;
	static volatile int16_t x1512 = -1;
	int32_t t126 = 2841;

    t126 = ((x1509==x1510)<<(x1511%x1512));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x1521 = INT16_MIN;
	volatile int32_t x1522 = INT32_MIN;
	uint16_t x1523 = UINT16_MAX;
	int16_t x1524 = -1;
	volatile int32_t t127 = -441972896;

    t127 = ((x1521==x1522)<<(x1523%x1524));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x1529 = INT8_MIN;
	int16_t x1530 = -1;
	static volatile int32_t x1532 = INT32_MAX;
	volatile int32_t t128 = 1279;

    t128 = ((x1529==x1530)<<(x1531%x1532));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint16_t x1541 = 17U;
	int32_t x1542 = -1;
	int32_t x1543 = INT32_MAX;
	int8_t x1544 = INT8_MAX;
	volatile int32_t t129 = -1;

    t129 = ((x1541==x1542)<<(x1543%x1544));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x1545 = INT32_MIN;
	volatile uint16_t x1546 = UINT16_MAX;
	static volatile uint8_t x1547 = 0U;
	int16_t x1548 = -1;
	volatile int32_t t130 = 10;

    t130 = ((x1545==x1546)<<(x1547%x1548));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x1549 = INT16_MAX;
	uint8_t x1551 = 101U;
	int16_t x1552 = -1;

    t131 = ((x1549==x1550)<<(x1551%x1552));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x1553 = -76296923764LL;
	uint8_t x1554 = 65U;
	int8_t x1556 = 3;
	static int32_t t132 = 7882;

    t132 = ((x1553==x1554)<<(x1555%x1556));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x1558 = -1124190517514179LL;
	volatile int16_t x1559 = INT16_MIN;
	int8_t x1560 = INT8_MIN;
	static int32_t t133 = 59;

    t133 = ((x1557==x1558)<<(x1559%x1560));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x1561 = 7U;
	volatile uint16_t x1562 = 1559U;
	int32_t t134 = -917413301;

    t134 = ((x1561==x1562)<<(x1563%x1564));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint8_t x1578 = UINT8_MAX;
	volatile uint32_t x1579 = 2U;
	static volatile uint8_t x1580 = 1U;
	volatile int32_t t135 = -916180239;

    t135 = ((x1577==x1578)<<(x1579%x1580));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x1589 = -50330LL;
	int8_t x1590 = INT8_MIN;
	int32_t x1591 = INT32_MIN;
	int8_t x1592 = INT8_MIN;
	volatile int32_t t136 = -372331367;

    t136 = ((x1589==x1590)<<(x1591%x1592));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x1614 = INT16_MIN;
	static int32_t x1615 = INT32_MIN;
	int32_t x1616 = INT32_MIN;
	volatile int32_t t137 = 335;

    t137 = ((x1613==x1614)<<(x1615%x1616));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint16_t x1617 = UINT16_MAX;
	int32_t x1618 = -11564503;
	static uint8_t x1619 = 12U;
	volatile int32_t t138 = -1568;

    t138 = ((x1617==x1618)<<(x1619%x1620));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x1629 = -1529306499256900LL;
	static volatile uint8_t x1631 = UINT8_MAX;
	int8_t x1632 = -28;

    t139 = ((x1629==x1630)<<(x1631%x1632));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x1649 = INT64_MIN;
	static int8_t x1651 = 1;
	int16_t x1652 = INT16_MIN;
	volatile int32_t t140 = 448;

    t140 = ((x1649==x1650)<<(x1651%x1652));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x1653 = 121049073;
	int8_t x1654 = -1;
	static uint8_t x1655 = UINT8_MAX;
	int16_t x1656 = -1;
	volatile int32_t t141 = -2;

    t141 = ((x1653==x1654)<<(x1655%x1656));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x1657 = -1LL;
	volatile int64_t x1658 = -1LL;
	static int8_t x1660 = -1;

    t142 = ((x1657==x1658)<<(x1659%x1660));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x1665 = INT8_MIN;
	int64_t x1666 = -1LL;
	uint64_t x1667 = 20696LLU;
	static uint16_t x1668 = 766U;
	int32_t t143 = 1;

    t143 = ((x1665==x1666)<<(x1667%x1668));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x1685 = -1LL;
	uint8_t x1686 = UINT8_MAX;
	volatile int64_t x1687 = INT64_MAX;
	volatile int64_t x1688 = -1LL;
	volatile int32_t t144 = 40;

    t144 = ((x1685==x1686)<<(x1687%x1688));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x1689 = INT32_MIN;
	uint8_t x1690 = 106U;
	static int64_t x1691 = INT64_MIN;
	static int8_t x1692 = INT8_MIN;
	volatile int32_t t145 = -1;

    t145 = ((x1689==x1690)<<(x1691%x1692));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x1705 = -1;
	uint16_t x1706 = 0U;
	int32_t x1708 = INT32_MIN;
	volatile int32_t t146 = 0;

    t146 = ((x1705==x1706)<<(x1707%x1708));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x1713 = -1;
	int64_t x1716 = -1LL;
	int32_t t147 = -5521;

    t147 = ((x1713==x1714)<<(x1715%x1716));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x1721 = INT16_MIN;
	uint16_t x1722 = 56U;
	int32_t x1723 = INT32_MIN;
	int64_t x1724 = -1LL;
	volatile int32_t t148 = 1276427;

    t148 = ((x1721==x1722)<<(x1723%x1724));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x1729 = 9890772LL;
	volatile uint32_t x1730 = UINT32_MAX;
	uint8_t x1731 = 15U;
	int16_t x1732 = -1;

    t149 = ((x1729==x1730)<<(x1731%x1732));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint64_t x1738 = 4772407563622604264LLU;
	int8_t x1739 = INT8_MAX;
	static int16_t x1740 = -1;
	static int32_t t150 = -1;

    t150 = ((x1737==x1738)<<(x1739%x1740));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int8_t x1743 = INT8_MIN;
	int32_t x1744 = -1;
	static volatile int32_t t151 = -13981;

    t151 = ((x1741==x1742)<<(x1743%x1744));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x1745 = 27601631LLU;
	uint16_t x1746 = 447U;
	static uint64_t x1747 = 70343936285532654LLU;
	int8_t x1748 = 1;
	int32_t t152 = 4;

    t152 = ((x1745==x1746)<<(x1747%x1748));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x1765 = INT64_MIN;
	uint64_t x1766 = 909326208877279051LLU;
	uint8_t x1768 = 1U;
	volatile int32_t t153 = -1;

    t153 = ((x1765==x1766)<<(x1767%x1768));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x1801 = -1;
	volatile int64_t x1802 = -1LL;
	int32_t x1803 = INT32_MIN;
	int16_t x1804 = INT16_MIN;
	static volatile int32_t t154 = 162;

    t154 = ((x1801==x1802)<<(x1803%x1804));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x1817 = 45;
	int32_t x1818 = INT32_MIN;
	static int64_t x1819 = INT64_MIN;
	volatile int32_t t155 = -106;

    t155 = ((x1817==x1818)<<(x1819%x1820));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x1821 = -258113016969600592LL;
	static uint8_t x1822 = 6U;
	int8_t x1823 = INT8_MIN;
	int16_t x1824 = -1;
	int32_t t156 = 28;

    t156 = ((x1821==x1822)<<(x1823%x1824));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x1849 = UINT16_MAX;
	static int64_t x1850 = INT64_MIN;
	uint64_t x1851 = 11LLU;
	int32_t t157 = 824377857;

    t157 = ((x1849==x1850)<<(x1851%x1852));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint32_t x1882 = 264973998U;
	volatile uint32_t x1883 = 2031277202U;
	static uint64_t x1884 = 23LLU;
	volatile int32_t t158 = -652558;

    t158 = ((x1881==x1882)<<(x1883%x1884));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x1889 = 26U;
	static int8_t x1890 = INT8_MAX;
	uint16_t x1891 = 189U;
	uint8_t x1892 = 1U;
	volatile int32_t t159 = -47478;

    t159 = ((x1889==x1890)<<(x1891%x1892));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x1902 = INT64_MIN;
	int8_t x1903 = 7;
	static volatile int64_t x1904 = INT64_MIN;

    t160 = ((x1901==x1902)<<(x1903%x1904));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x1911 = 2;
	volatile int16_t x1912 = INT16_MIN;
	int32_t t161 = 1;

    t161 = ((x1909==x1910)<<(x1911%x1912));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x1917 = -2819504;
	uint64_t x1918 = 22LLU;
	int16_t x1920 = INT16_MIN;
	static int32_t t162 = -737733764;

    t162 = ((x1917==x1918)<<(x1919%x1920));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x1929 = INT16_MIN;
	uint32_t x1930 = 39U;
	int32_t t163 = 11173;

    t163 = ((x1929==x1930)<<(x1931%x1932));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x1933 = INT32_MIN;
	int32_t x1935 = 7;
	int64_t x1936 = INT64_MAX;
	int32_t t164 = -1;

    t164 = ((x1933==x1934)<<(x1935%x1936));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x1941 = 20U;
	int64_t x1942 = INT64_MAX;
	int8_t x1943 = 0;
	volatile uint16_t x1944 = UINT16_MAX;
	int32_t t165 = -1;

    t165 = ((x1941==x1942)<<(x1943%x1944));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x1965 = 520936813;
	uint32_t x1966 = 517190780U;
	int64_t x1967 = 94937400LL;
	int8_t x1968 = 2;

    t166 = ((x1965==x1966)<<(x1967%x1968));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x1969 = INT16_MIN;
	uint32_t x1970 = 3735072U;
	uint32_t x1971 = 7758U;
	volatile int32_t t167 = -733;

    t167 = ((x1969==x1970)<<(x1971%x1972));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile uint8_t x1973 = 6U;
	uint64_t x1974 = UINT64_MAX;
	int8_t x1975 = INT8_MIN;
	int32_t t168 = 70774841;

    t168 = ((x1973==x1974)<<(x1975%x1976));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int8_t x1977 = -1;
	volatile uint16_t x1978 = UINT16_MAX;
	static int16_t x1979 = INT16_MAX;
	int8_t x1980 = INT8_MAX;
	volatile int32_t t169 = 17746;

    t169 = ((x1977==x1978)<<(x1979%x1980));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x1985 = INT8_MAX;
	uint16_t x1986 = UINT16_MAX;
	int16_t x1987 = INT16_MAX;
	int8_t x1988 = -1;
	static int32_t t170 = -1;

    t170 = ((x1985==x1986)<<(x1987%x1988));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x2001 = INT64_MIN;
	static int32_t x2002 = INT32_MIN;
	uint32_t x2003 = UINT32_MAX;
	int32_t t171 = 1689;

    t171 = ((x2001==x2002)<<(x2003%x2004));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x2035 = 0;
	static int64_t x2036 = INT64_MIN;
	int32_t t172 = 62826233;

    t172 = ((x2033==x2034)<<(x2035%x2036));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint8_t x2037 = 3U;
	static volatile int16_t x2039 = -1;
	static volatile int32_t t173 = -648;

    t173 = ((x2037==x2038)<<(x2039%x2040));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x2046 = INT16_MIN;
	volatile int32_t x2047 = -1;

    t174 = ((x2045==x2046)<<(x2047%x2048));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x2049 = INT16_MAX;
	volatile uint8_t x2050 = 2U;
	int8_t x2051 = INT8_MIN;
	static int8_t x2052 = -1;
	static volatile int32_t t175 = -2989228;

    t175 = ((x2049==x2050)<<(x2051%x2052));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x2053 = INT64_MIN;
	uint8_t x2054 = 97U;
	volatile int16_t x2055 = 20;
	uint8_t x2056 = UINT8_MAX;

    t176 = ((x2053==x2054)<<(x2055%x2056));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x2057 = -43;
	uint8_t x2058 = 3U;
	int64_t x2059 = -1LL;
	static uint8_t x2060 = 1U;
	volatile int32_t t177 = -43750101;

    t177 = ((x2057==x2058)<<(x2059%x2060));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x2061 = 95119928LLU;
	volatile int8_t x2062 = INT8_MIN;
	static uint16_t x2063 = 2587U;
	int32_t x2064 = -1;
	int32_t t178 = 134;

    t178 = ((x2061==x2062)<<(x2063%x2064));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint32_t x2073 = UINT32_MAX;
	int8_t x2074 = INT8_MAX;
	int8_t x2075 = 2;
	int8_t x2076 = 1;
	volatile int32_t t179 = 2;

    t179 = ((x2073==x2074)<<(x2075%x2076));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x2078 = -298924511LL;
	int64_t x2079 = INT64_MAX;
	static int32_t x2080 = -1;
	int32_t t180 = 27940;

    t180 = ((x2077==x2078)<<(x2079%x2080));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x2123 = 15330U;
	int64_t x2124 = -1LL;
	volatile int32_t t181 = 97;

    t181 = ((x2121==x2122)<<(x2123%x2124));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x2145 = 249010;
	uint64_t x2147 = UINT64_MAX;
	volatile uint32_t x2148 = UINT32_MAX;
	int32_t t182 = 8780;

    t182 = ((x2145==x2146)<<(x2147%x2148));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x2197 = -1728052LL;
	uint16_t x2198 = 0U;
	int64_t x2199 = -1LL;
	int64_t x2200 = -1LL;
	volatile int32_t t183 = 51817235;

    t183 = ((x2197==x2198)<<(x2199%x2200));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint32_t x2201 = UINT32_MAX;
	uint16_t x2202 = 1423U;
	static int8_t x2203 = 2;
	volatile int8_t x2204 = INT8_MAX;
	int32_t t184 = 3;

    t184 = ((x2201==x2202)<<(x2203%x2204));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x2205 = -1;
	uint64_t x2208 = 10LLU;
	volatile int32_t t185 = -55870665;

    t185 = ((x2205==x2206)<<(x2207%x2208));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x2209 = INT16_MIN;
	static volatile uint8_t x2210 = 52U;
	uint32_t x2211 = UINT32_MAX;
	volatile uint8_t x2212 = UINT8_MAX;
	int32_t t186 = -3;

    t186 = ((x2209==x2210)<<(x2211%x2212));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x2217 = INT64_MAX;
	static int32_t x2218 = 238574244;
	uint8_t x2219 = 3U;
	int32_t x2220 = INT32_MIN;
	volatile int32_t t187 = 6584543;

    t187 = ((x2217==x2218)<<(x2219%x2220));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x2221 = UINT8_MAX;
	volatile int32_t x2222 = INT32_MAX;
	uint8_t x2223 = 16U;
	volatile int8_t x2224 = 26;
	volatile int32_t t188 = 11269340;

    t188 = ((x2221==x2222)<<(x2223%x2224));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint32_t x2225 = UINT32_MAX;
	volatile uint32_t x2227 = 1U;
	uint8_t x2228 = 1U;
	volatile int32_t t189 = 194;

    t189 = ((x2225==x2226)<<(x2227%x2228));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x2229 = 30367U;
	uint16_t x2230 = 1U;
	uint8_t x2231 = UINT8_MAX;
	int16_t x2232 = -1;
	static volatile int32_t t190 = 2881;

    t190 = ((x2229==x2230)<<(x2231%x2232));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x2233 = UINT64_MAX;
	static int64_t x2235 = -1LL;
	int32_t t191 = 2988198;

    t191 = ((x2233==x2234)<<(x2235%x2236));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x2257 = -1;
	static uint16_t x2258 = 21142U;
	volatile int8_t x2259 = 0;
	static uint8_t x2260 = 3U;
	static int32_t t192 = -14015550;

    t192 = ((x2257==x2258)<<(x2259%x2260));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x2267 = 12LLU;
	volatile int32_t t193 = -1651564;

    t193 = ((x2265==x2266)<<(x2267%x2268));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x2285 = INT8_MIN;
	int64_t x2286 = INT64_MAX;
	static volatile uint64_t x2287 = UINT64_MAX;
	uint64_t x2288 = UINT64_MAX;
	static volatile int32_t t194 = -266013739;

    t194 = ((x2285==x2286)<<(x2287%x2288));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint8_t x2289 = 2U;
	static int8_t x2290 = INT8_MAX;
	uint64_t x2292 = 65LLU;
	int32_t t195 = 66249960;

    t195 = ((x2289==x2290)<<(x2291%x2292));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x2309 = INT32_MIN;
	int32_t x2310 = -1;
	int64_t x2311 = INT64_MIN;
	volatile int8_t x2312 = INT8_MIN;

    t196 = ((x2309==x2310)<<(x2311%x2312));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x2333 = INT16_MIN;
	int32_t x2335 = INT32_MIN;
	uint32_t x2336 = 10U;
	volatile int32_t t197 = -7890548;

    t197 = ((x2333==x2334)<<(x2335%x2336));

    if (t197 != 256) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x2349 = INT16_MIN;
	int64_t x2350 = INT64_MIN;
	volatile int8_t x2351 = INT8_MIN;
	volatile uint32_t x2352 = 3U;

    t198 = ((x2349==x2350)<<(x2351%x2352));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x2353 = -1;
	int8_t x2354 = INT8_MAX;
	static uint64_t x2355 = UINT64_MAX;

    t199 = ((x2353==x2354)<<(x2355%x2356));

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

