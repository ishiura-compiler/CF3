
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

static uint8_t x8 = 12U;
static uint8_t x45 = 2U;
static uint8_t x48 = 18U;
uint64_t x70 = 10153475447LLU;
static uint8_t x197 = UINT8_MAX;
int32_t t7 = -17052;
uint16_t x224 = 1U;
uint8_t x238 = 26U;
int8_t x410 = 1;
volatile int8_t x450 = INT8_MIN;
int32_t t13 = 19149;
volatile uint16_t x531 = 0U;
static volatile int32_t t15 = 756180;
static volatile int32_t x597 = INT32_MIN;
int8_t x621 = -7;
int32_t x686 = -113;
int32_t x734 = INT32_MAX;
int8_t x764 = 13;
static int8_t x817 = INT8_MIN;
uint8_t x827 = 7U;
uint8_t x849 = UINT8_MAX;
int16_t x851 = INT16_MAX;
volatile int32_t t28 = 0;
uint8_t x945 = 62U;
static int8_t x947 = -21;
uint32_t x948 = 3U;
int32_t t31 = 1143392;
static int16_t x954 = -19;
uint64_t x1054 = 1176556475LLU;
volatile int32_t t35 = 0;
int8_t x1128 = 2;
int32_t x1129 = -485391;
uint32_t x1142 = UINT32_MAX;
uint64_t x1143 = 58964688735LLU;
volatile int32_t t39 = 1;
volatile uint8_t x1175 = 28U;
int32_t t41 = 752354;
int32_t t42 = 5299262;
uint8_t x1272 = 5U;
int64_t x1391 = INT64_MAX;
static volatile int32_t t45 = 197;
static int16_t x1413 = INT16_MIN;
volatile uint16_t x1414 = 1149U;
int16_t x1415 = INT16_MIN;
uint64_t x1417 = 1LLU;
int8_t x1420 = 0;
int16_t x1514 = INT16_MAX;
int8_t x1516 = 0;
uint8_t x1526 = UINT8_MAX;
int32_t x1566 = -1;
uint64_t x1568 = 0LLU;
int32_t t55 = -99157908;
uint16_t x1687 = 0U;
int32_t t56 = 2473;
int8_t x1829 = -10;
static volatile int32_t x1830 = INT32_MAX;
static int32_t x1831 = -1;
volatile int32_t t57 = 6312432;
volatile int16_t x1950 = INT16_MIN;
int8_t x1951 = INT8_MIN;
int8_t x2034 = INT8_MIN;
volatile int32_t t62 = -196889220;
static volatile int32_t t63 = -8;
volatile int32_t x2067 = INT32_MAX;
static uint16_t x2097 = 15753U;
volatile int32_t t66 = -1;
int16_t x2120 = 14;
int32_t t68 = 941675;
static volatile int16_t x2221 = 2;
static volatile int16_t x2222 = -1840;
int32_t x2244 = 1;
volatile int16_t x2249 = INT16_MIN;
int8_t x2326 = 3;
static int16_t x2337 = -1;
uint32_t x2338 = UINT32_MAX;
static int16_t x2340 = 9;
uint64_t x2389 = 409461814297LLU;
uint8_t x2454 = 2U;
int32_t x2481 = INT32_MIN;
static volatile uint32_t x2519 = 13965310U;
int32_t t80 = 6;
uint16_t x2710 = 82U;
int8_t x2711 = -1;
int16_t x2732 = 1;
int32_t t84 = -19914249;
int16_t x2774 = 0;
int8_t x2902 = -1;
uint8_t x2947 = 3U;
uint32_t x2954 = 201512U;
int64_t x3003 = 59LL;
uint8_t x3004 = 1U;
int32_t t92 = 354;
int8_t x3055 = 36;
int32_t x3094 = INT32_MIN;
int8_t x3095 = 44;
uint64_t x3126 = 431358485692LLU;
volatile int32_t t98 = 63;
int64_t x3278 = 2834LL;
uint8_t x3279 = UINT8_MAX;
uint64_t x3317 = 886329450768LLU;
static int32_t t102 = 9938142;
int32_t t103 = 12;
volatile int8_t x3340 = 7;
volatile uint64_t x3413 = 1045133312449LLU;
volatile int64_t x3414 = -1LL;
volatile uint8_t x3500 = 29U;
int64_t x3565 = -2811492111249285LL;
uint32_t x3613 = 473120U;
volatile uint8_t x3644 = 7U;
volatile int32_t t112 = -3382820;
int32_t t113 = 58197;
uint16_t x3760 = 1U;
static int32_t x3886 = INT32_MAX;
int8_t x3924 = 0;
volatile int8_t x3983 = -6;
uint64_t x4034 = 31866LLU;
int32_t t119 = 42;
int32_t t120 = -247665;
int16_t x4087 = 3;
uint16_t x4136 = 1U;
uint32_t x4217 = 8U;
int16_t x4390 = -1;
volatile int32_t t128 = -98338244;
int32_t x4423 = INT32_MAX;
static volatile int32_t t130 = 22667672;
int8_t x4492 = 2;
int32_t t131 = 1;
volatile int64_t x4541 = INT64_MIN;
volatile int32_t x4589 = INT32_MIN;
uint8_t x4621 = 1U;
static int8_t x4660 = 1;
int16_t x4780 = 0;
volatile uint16_t x4802 = UINT16_MAX;
volatile int8_t x4866 = 0;
uint16_t x4868 = 1U;
static volatile int32_t t140 = 395;
static int32_t x4965 = 434;
int32_t x5002 = INT32_MIN;
uint64_t x5021 = 5LLU;
uint64_t x5023 = 213180784459032021LLU;
static int64_t x5049 = 28348326563047LL;
volatile uint32_t x5051 = 8U;
int32_t t145 = -28;
uint8_t x5212 = 2U;
int64_t x5222 = INT64_MAX;
int32_t x5223 = -1;
int8_t x5267 = 2;
volatile int32_t t149 = 62200923;
uint64_t x5302 = 188671541934593049LLU;
int16_t x5305 = INT16_MAX;
uint16_t x5318 = 330U;
uint16_t x5437 = 58U;
int64_t x5454 = INT64_MIN;
int64_t x5455 = INT64_MIN;
int32_t t156 = 802;
uint32_t x5546 = 398U;
volatile int32_t t159 = -64422;
static volatile int16_t x5583 = -1;
int32_t x5647 = INT32_MAX;
uint64_t x5657 = 3895507758320282LLU;
volatile uint8_t x5677 = 1U;
int32_t x5680 = 28;
uint64_t x5749 = UINT64_MAX;
static int8_t x5767 = -36;
int32_t t166 = 1323;
int32_t x5793 = -1;
int32_t t167 = 1;
int64_t x5801 = -1LL;
uint8_t x5809 = UINT8_MAX;
int8_t x5812 = 0;
static int32_t t169 = -119;
int32_t x5832 = 0;
int8_t x5911 = -1;
int64_t x5922 = 16912347459LL;
static int8_t x5924 = 2;
static int8_t x5929 = -1;
static uint32_t x5987 = 12262281U;
int16_t x6099 = INT16_MIN;
uint32_t x6321 = 1211866910U;
static int32_t x6322 = INT32_MIN;
int16_t x6323 = 559;
static uint8_t x6337 = 118U;
int16_t x6339 = -1;
int16_t x6345 = INT16_MIN;
static volatile int32_t t184 = 5;
uint16_t x6402 = 6U;
int64_t x6403 = -5270603275969565LL;
static uint64_t x6405 = UINT64_MAX;
uint32_t x6432 = 13U;
volatile int8_t x6576 = 11;
uint8_t x6597 = 44U;
int32_t t193 = -300690;
static uint8_t x6670 = 73U;
static int32_t x6755 = -1;
volatile int32_t t199 = 1487;


void f0(void) {
    	int64_t x5 = INT64_MIN;
	static uint8_t x6 = 116U;
	int32_t x7 = INT32_MAX;
	volatile int32_t t0 = -260270;

    t0 = (((x5+x6)==x7)<<x8);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x46 = 22679;
	int32_t x47 = -969;
	int32_t t1 = 32740;

    t1 = (((x45+x46)==x47)<<x48);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int64_t x57 = INT64_MAX;
	volatile int64_t x58 = -1LL;
	uint64_t x59 = 57838627706027797LLU;
	uint8_t x60 = 0U;
	int32_t t2 = -3775;

    t2 = (((x57+x58)==x59)<<x60);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x69 = INT8_MAX;
	volatile uint16_t x71 = 1503U;
	uint8_t x72 = 6U;
	volatile int32_t t3 = 16606;

    t3 = (((x69+x70)==x71)<<x72);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint64_t x77 = 6051720LLU;
	uint64_t x78 = UINT64_MAX;
	static volatile uint16_t x79 = UINT16_MAX;
	int16_t x80 = 7;
	volatile int32_t t4 = 1;

    t4 = (((x77+x78)==x79)<<x80);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint16_t x137 = 130U;
	int16_t x138 = -1;
	volatile int64_t x139 = -16LL;
	int16_t x140 = 4;
	volatile int32_t t5 = -1560061;

    t5 = (((x137+x138)==x139)<<x140);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x185 = -31202360289943954LL;
	uint64_t x186 = 123227170LLU;
	volatile int8_t x187 = -1;
	uint8_t x188 = 1U;
	int32_t t6 = -868300423;

    t6 = (((x185+x186)==x187)<<x188);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x198 = UINT16_MAX;
	static int16_t x199 = INT16_MIN;
	uint16_t x200 = 0U;

    t7 = (((x197+x198)==x199)<<x200);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x221 = INT8_MIN;
	int32_t x222 = -1;
	uint64_t x223 = 289LLU;
	int32_t t8 = 457;

    t8 = (((x221+x222)==x223)<<x224);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x237 = 6587;
	static int8_t x239 = INT8_MIN;
	uint8_t x240 = 3U;
	static volatile int32_t t9 = 2008;

    t9 = (((x237+x238)==x239)<<x240);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x313 = -3;
	int16_t x314 = -1;
	int16_t x315 = -1;
	int16_t x316 = 1;
	int32_t t10 = 1272;

    t10 = (((x313+x314)==x315)<<x316);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x409 = INT32_MIN;
	static int64_t x411 = 355LL;
	uint16_t x412 = 1U;
	int32_t t11 = -209920385;

    t11 = (((x409+x410)==x411)<<x412);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x449 = 18;
	static int16_t x451 = INT16_MAX;
	volatile int8_t x452 = 12;
	volatile int32_t t12 = -5;

    t12 = (((x449+x450)==x451)<<x452);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x493 = -1;
	uint8_t x494 = UINT8_MAX;
	uint8_t x495 = UINT8_MAX;
	static uint16_t x496 = 1U;

    t13 = (((x493+x494)==x495)<<x496);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x525 = 4;
	int16_t x526 = INT16_MIN;
	static int32_t x527 = INT32_MIN;
	static int16_t x528 = 5;
	int32_t t14 = -3;

    t14 = (((x525+x526)==x527)<<x528);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x529 = 25337U;
	uint64_t x530 = UINT64_MAX;
	volatile int8_t x532 = 0;

    t15 = (((x529+x530)==x531)<<x532);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x569 = 1;
	uint8_t x570 = UINT8_MAX;
	uint16_t x571 = 829U;
	uint64_t x572 = 6LLU;
	volatile int32_t t16 = 55693;

    t16 = (((x569+x570)==x571)<<x572);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x598 = 222152001665156LLU;
	uint8_t x599 = 6U;
	int8_t x600 = 0;
	static volatile int32_t t17 = 9871841;

    t17 = (((x597+x598)==x599)<<x600);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x622 = -1;
	int16_t x623 = 7;
	uint8_t x624 = 17U;
	volatile int32_t t18 = 61189246;

    t18 = (((x621+x622)==x623)<<x624);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x633 = INT32_MAX;
	int8_t x634 = -1;
	volatile int16_t x635 = -1;
	int32_t x636 = 0;
	int32_t t19 = 58653176;

    t19 = (((x633+x634)==x635)<<x636);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x685 = 49U;
	int64_t x687 = INT64_MIN;
	int8_t x688 = 1;
	volatile int32_t t20 = 80641;

    t20 = (((x685+x686)==x687)<<x688);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x725 = INT64_MAX;
	uint64_t x726 = UINT64_MAX;
	int64_t x727 = INT64_MIN;
	int8_t x728 = 2;
	int32_t t21 = 425978;

    t21 = (((x725+x726)==x727)<<x728);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x733 = 111267053U;
	int64_t x735 = 10630082825005LL;
	uint16_t x736 = 0U;
	int32_t t22 = 301703812;

    t22 = (((x733+x734)==x735)<<x736);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x761 = 11360;
	static uint16_t x762 = 2U;
	static uint64_t x763 = 244643224629LLU;
	static int32_t t23 = -263602645;

    t23 = (((x761+x762)==x763)<<x764);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x818 = UINT64_MAX;
	uint64_t x819 = 0LLU;
	uint8_t x820 = 0U;
	static volatile int32_t t24 = 293456875;

    t24 = (((x817+x818)==x819)<<x820);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x825 = 576018LLU;
	int32_t x826 = -1;
	volatile int8_t x828 = 3;
	static volatile int32_t t25 = -1017978;

    t25 = (((x825+x826)==x827)<<x828);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x850 = 466U;
	int16_t x852 = 1;
	volatile int32_t t26 = -54179;

    t26 = (((x849+x850)==x851)<<x852);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x893 = INT64_MAX;
	uint64_t x894 = 72LLU;
	int8_t x895 = -6;
	int8_t x896 = 15;
	volatile int32_t t27 = 1469380;

    t27 = (((x893+x894)==x895)<<x896);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x905 = 349U;
	volatile int8_t x906 = -16;
	static volatile uint8_t x907 = 1U;
	uint8_t x908 = 2U;

    t28 = (((x905+x906)==x907)<<x908);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x917 = UINT32_MAX;
	int32_t x918 = INT32_MIN;
	int64_t x919 = -1LL;
	int8_t x920 = 1;
	volatile int32_t t29 = -26418;

    t29 = (((x917+x918)==x919)<<x920);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint16_t x946 = UINT16_MAX;
	static int32_t t30 = 24323083;

    t30 = (((x945+x946)==x947)<<x948);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x949 = UINT16_MAX;
	uint32_t x950 = 143U;
	int8_t x951 = INT8_MAX;
	int16_t x952 = 19;

    t31 = (((x949+x950)==x951)<<x952);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x953 = INT16_MIN;
	uint64_t x955 = 908852849128LLU;
	uint16_t x956 = 10U;
	volatile int32_t t32 = 6;

    t32 = (((x953+x954)==x955)<<x956);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x993 = UINT32_MAX;
	uint64_t x994 = 14928917941LLU;
	uint16_t x995 = 149U;
	static int8_t x996 = 0;
	int32_t t33 = 8730443;

    t33 = (((x993+x994)==x995)<<x996);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x1041 = 1377;
	volatile int16_t x1042 = INT16_MIN;
	uint32_t x1043 = 10066687U;
	uint8_t x1044 = 2U;
	volatile int32_t t34 = 533236;

    t34 = (((x1041+x1042)==x1043)<<x1044);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x1053 = INT32_MIN;
	int32_t x1055 = -195728;
	uint8_t x1056 = 4U;

    t35 = (((x1053+x1054)==x1055)<<x1056);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x1069 = UINT64_MAX;
	int64_t x1070 = INT64_MIN;
	volatile int32_t x1071 = -19673546;
	volatile int16_t x1072 = 17;
	volatile int32_t t36 = 1;

    t36 = (((x1069+x1070)==x1071)<<x1072);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x1125 = 0;
	static int16_t x1126 = INT16_MIN;
	int32_t x1127 = INT32_MIN;
	volatile int32_t t37 = -415;

    t37 = (((x1125+x1126)==x1127)<<x1128);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x1130 = 2334;
	int8_t x1131 = INT8_MIN;
	volatile uint8_t x1132 = 2U;
	static int32_t t38 = 0;

    t38 = (((x1129+x1130)==x1131)<<x1132);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x1141 = INT16_MIN;
	uint16_t x1144 = 1U;

    t39 = (((x1141+x1142)==x1143)<<x1144);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x1149 = INT64_MAX;
	int64_t x1150 = -405859LL;
	volatile int8_t x1151 = 6;
	int64_t x1152 = 14LL;
	int32_t t40 = -7928;

    t40 = (((x1149+x1150)==x1151)<<x1152);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x1173 = 475LLU;
	uint8_t x1174 = 5U;
	static uint8_t x1176 = 0U;

    t41 = (((x1173+x1174)==x1175)<<x1176);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x1221 = INT8_MAX;
	static volatile uint64_t x1222 = UINT64_MAX;
	int16_t x1223 = INT16_MAX;
	uint8_t x1224 = 22U;

    t42 = (((x1221+x1222)==x1223)<<x1224);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x1269 = INT16_MIN;
	int8_t x1270 = 1;
	static int64_t x1271 = 1925481087925716LL;
	volatile int32_t t43 = -1140;

    t43 = (((x1269+x1270)==x1271)<<x1272);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x1313 = INT8_MIN;
	int16_t x1314 = 0;
	int16_t x1315 = INT16_MIN;
	static uint16_t x1316 = 3U;
	volatile int32_t t44 = -184;

    t44 = (((x1313+x1314)==x1315)<<x1316);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x1389 = -1;
	uint8_t x1390 = 6U;
	int8_t x1392 = 2;

    t45 = (((x1389+x1390)==x1391)<<x1392);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x1397 = -105LL;
	int32_t x1398 = -1;
	int8_t x1399 = 33;
	uint8_t x1400 = 26U;
	volatile int32_t t46 = 10;

    t46 = (((x1397+x1398)==x1399)<<x1400);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x1416 = 5;
	volatile int32_t t47 = -479154;

    t47 = (((x1413+x1414)==x1415)<<x1416);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x1418 = INT32_MIN;
	uint8_t x1419 = 3U;
	int32_t t48 = -43110655;

    t48 = (((x1417+x1418)==x1419)<<x1420);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x1449 = INT32_MIN;
	int16_t x1450 = INT16_MAX;
	uint8_t x1451 = 18U;
	static uint16_t x1452 = 1U;
	int32_t t49 = -974049323;

    t49 = (((x1449+x1450)==x1451)<<x1452);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x1493 = 12U;
	int16_t x1494 = 4;
	volatile int64_t x1495 = -2514739347659LL;
	int16_t x1496 = 1;
	int32_t t50 = 281;

    t50 = (((x1493+x1494)==x1495)<<x1496);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x1513 = -1;
	static uint64_t x1515 = 5815525LLU;
	int32_t t51 = -22740;

    t51 = (((x1513+x1514)==x1515)<<x1516);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile uint32_t x1525 = 14979280U;
	static int16_t x1527 = 2;
	int8_t x1528 = 9;
	int32_t t52 = -653476;

    t52 = (((x1525+x1526)==x1527)<<x1528);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint8_t x1565 = 6U;
	volatile int16_t x1567 = 32;
	int32_t t53 = 305;

    t53 = (((x1565+x1566)==x1567)<<x1568);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x1613 = -1;
	int32_t x1614 = 49;
	volatile int64_t x1615 = INT64_MIN;
	int16_t x1616 = 6;
	volatile int32_t t54 = -201245;

    t54 = (((x1613+x1614)==x1615)<<x1616);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x1645 = INT16_MIN;
	int32_t x1646 = -1;
	int16_t x1647 = -1;
	int32_t x1648 = 3;

    t55 = (((x1645+x1646)==x1647)<<x1648);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x1685 = -432;
	uint32_t x1686 = 7926265U;
	int8_t x1688 = 1;

    t56 = (((x1685+x1686)==x1687)<<x1688);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x1832 = 1U;

    t57 = (((x1829+x1830)==x1831)<<x1832);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int64_t x1921 = INT64_MIN;
	int8_t x1922 = INT8_MAX;
	static volatile uint32_t x1923 = 1262U;
	uint16_t x1924 = 7U;
	volatile int32_t t58 = -17996970;

    t58 = (((x1921+x1922)==x1923)<<x1924);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int8_t x1949 = -1;
	uint8_t x1952 = 20U;
	static int32_t t59 = -3;

    t59 = (((x1949+x1950)==x1951)<<x1952);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x2017 = INT8_MIN;
	uint32_t x2018 = 51U;
	int64_t x2019 = INT64_MIN;
	int8_t x2020 = 1;
	static int32_t t60 = 91575909;

    t60 = (((x2017+x2018)==x2019)<<x2020);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x2033 = INT8_MAX;
	uint16_t x2035 = 4U;
	static volatile int8_t x2036 = 3;
	volatile int32_t t61 = 249811;

    t61 = (((x2033+x2034)==x2035)<<x2036);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x2045 = 11638729466LLU;
	int32_t x2046 = 1;
	int64_t x2047 = INT64_MAX;
	uint8_t x2048 = 0U;

    t62 = (((x2045+x2046)==x2047)<<x2048);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x2049 = 96U;
	uint64_t x2050 = 4LLU;
	int64_t x2051 = 8854732469LL;
	int32_t x2052 = 0;

    t63 = (((x2049+x2050)==x2051)<<x2052);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x2065 = 19932188334LLU;
	static volatile int8_t x2066 = -1;
	int32_t x2068 = 1;
	int32_t t64 = 1;

    t64 = (((x2065+x2066)==x2067)<<x2068);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x2093 = -5;
	int8_t x2094 = -1;
	volatile int64_t x2095 = -1LL;
	int8_t x2096 = 0;
	volatile int32_t t65 = -27;

    t65 = (((x2093+x2094)==x2095)<<x2096);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x2098 = UINT64_MAX;
	volatile int8_t x2099 = -18;
	volatile int8_t x2100 = 0;

    t66 = (((x2097+x2098)==x2099)<<x2100);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x2113 = INT16_MAX;
	volatile int64_t x2114 = INT64_MIN;
	static int64_t x2115 = 9424673119480LL;
	uint8_t x2116 = 2U;
	int32_t t67 = -38512394;

    t67 = (((x2113+x2114)==x2115)<<x2116);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x2117 = INT8_MIN;
	static int16_t x2118 = INT16_MAX;
	int64_t x2119 = -1LL;

    t68 = (((x2117+x2118)==x2119)<<x2120);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x2149 = INT8_MIN;
	int8_t x2150 = INT8_MIN;
	uint16_t x2151 = 269U;
	uint16_t x2152 = 2U;
	volatile int32_t t69 = -6;

    t69 = (((x2149+x2150)==x2151)<<x2152);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x2173 = 397U;
	volatile uint16_t x2174 = 443U;
	static uint8_t x2175 = 1U;
	int8_t x2176 = 1;
	int32_t t70 = -8;

    t70 = (((x2173+x2174)==x2175)<<x2176);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x2223 = 617460U;
	int8_t x2224 = 0;
	static int32_t t71 = -1;

    t71 = (((x2221+x2222)==x2223)<<x2224);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x2241 = INT64_MIN;
	volatile uint8_t x2242 = UINT8_MAX;
	static volatile int64_t x2243 = INT64_MAX;
	volatile int32_t t72 = 0;

    t72 = (((x2241+x2242)==x2243)<<x2244);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x2250 = 126427562U;
	volatile uint16_t x2251 = 0U;
	uint8_t x2252 = 1U;
	volatile int32_t t73 = -59831;

    t73 = (((x2249+x2250)==x2251)<<x2252);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x2325 = -1;
	int64_t x2327 = -4354730LL;
	volatile int16_t x2328 = 16;
	static volatile int32_t t74 = -645565;

    t74 = (((x2325+x2326)==x2327)<<x2328);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x2329 = -2;
	static int8_t x2330 = INT8_MIN;
	int32_t x2331 = -1;
	volatile uint16_t x2332 = 1U;
	static volatile int32_t t75 = 17281635;

    t75 = (((x2329+x2330)==x2331)<<x2332);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint8_t x2339 = UINT8_MAX;
	static int32_t t76 = 133;

    t76 = (((x2337+x2338)==x2339)<<x2340);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x2390 = 1;
	int16_t x2391 = INT16_MAX;
	int32_t x2392 = 1;
	static int32_t t77 = 9;

    t77 = (((x2389+x2390)==x2391)<<x2392);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x2453 = 17496823U;
	volatile int8_t x2455 = 4;
	uint8_t x2456 = 9U;
	int32_t t78 = 26;

    t78 = (((x2453+x2454)==x2455)<<x2456);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x2482 = 79U;
	int64_t x2483 = 455931204744771LL;
	uint8_t x2484 = 1U;
	static volatile int32_t t79 = 13;

    t79 = (((x2481+x2482)==x2483)<<x2484);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x2517 = -1;
	static int8_t x2518 = INT8_MIN;
	static uint32_t x2520 = 27U;

    t80 = (((x2517+x2518)==x2519)<<x2520);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x2589 = INT16_MIN;
	uint64_t x2590 = 27965181943LLU;
	uint16_t x2591 = 5020U;
	uint8_t x2592 = 3U;
	static int32_t t81 = -27;

    t81 = (((x2589+x2590)==x2591)<<x2592);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint8_t x2653 = 16U;
	uint8_t x2654 = UINT8_MAX;
	uint8_t x2655 = 14U;
	uint32_t x2656 = 26U;
	volatile int32_t t82 = -51;

    t82 = (((x2653+x2654)==x2655)<<x2656);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile uint8_t x2709 = UINT8_MAX;
	int8_t x2712 = 13;
	int32_t t83 = -52718;

    t83 = (((x2709+x2710)==x2711)<<x2712);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x2729 = 1U;
	uint32_t x2730 = 182797284U;
	int16_t x2731 = INT16_MAX;

    t84 = (((x2729+x2730)==x2731)<<x2732);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x2773 = INT8_MIN;
	volatile int8_t x2775 = 4;
	volatile uint32_t x2776 = 1U;
	volatile int32_t t85 = -87757;

    t85 = (((x2773+x2774)==x2775)<<x2776);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x2829 = INT16_MIN;
	int64_t x2830 = -1LL;
	int8_t x2831 = -1;
	static int16_t x2832 = 1;
	int32_t t86 = 192458;

    t86 = (((x2829+x2830)==x2831)<<x2832);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile uint64_t x2901 = 145282134594089LLU;
	int8_t x2903 = -1;
	int8_t x2904 = 8;
	static int32_t t87 = -295;

    t87 = (((x2901+x2902)==x2903)<<x2904);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x2909 = INT64_MIN;
	uint32_t x2910 = UINT32_MAX;
	uint8_t x2911 = 0U;
	uint16_t x2912 = 27U;
	volatile int32_t t88 = 2842;

    t88 = (((x2909+x2910)==x2911)<<x2912);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x2945 = -5018190;
	int32_t x2946 = -1380;
	int64_t x2948 = 21LL;
	static int32_t t89 = 60;

    t89 = (((x2945+x2946)==x2947)<<x2948);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x2953 = 8;
	int8_t x2955 = INT8_MIN;
	int16_t x2956 = 2;
	int32_t t90 = -1250991;

    t90 = (((x2953+x2954)==x2955)<<x2956);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x2997 = UINT64_MAX;
	volatile uint8_t x2998 = 0U;
	volatile int8_t x2999 = -1;
	uint16_t x3000 = 0U;
	int32_t t91 = 1375037;

    t91 = (((x2997+x2998)==x2999)<<x3000);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x3001 = -1;
	int64_t x3002 = 664269715017848LL;

    t92 = (((x3001+x3002)==x3003)<<x3004);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x3009 = 15;
	static uint64_t x3010 = UINT64_MAX;
	int16_t x3011 = 109;
	uint8_t x3012 = 10U;
	volatile int32_t t93 = -416164;

    t93 = (((x3009+x3010)==x3011)<<x3012);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x3049 = 26U;
	static int16_t x3050 = -33;
	volatile uint32_t x3051 = UINT32_MAX;
	int64_t x3052 = 0LL;
	int32_t t94 = -127113;

    t94 = (((x3049+x3050)==x3051)<<x3052);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x3053 = 2;
	uint16_t x3054 = 19U;
	uint8_t x3056 = 5U;
	int32_t t95 = -1930439;

    t95 = (((x3053+x3054)==x3055)<<x3056);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x3093 = 1849U;
	static uint16_t x3096 = 2U;
	static volatile int32_t t96 = 15113506;

    t96 = (((x3093+x3094)==x3095)<<x3096);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x3125 = INT8_MIN;
	int32_t x3127 = 2;
	volatile int8_t x3128 = 0;
	static int32_t t97 = -796159688;

    t97 = (((x3125+x3126)==x3127)<<x3128);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x3149 = INT32_MIN;
	uint32_t x3150 = 48940U;
	int16_t x3151 = INT16_MIN;
	int16_t x3152 = 22;

    t98 = (((x3149+x3150)==x3151)<<x3152);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x3177 = INT8_MIN;
	uint16_t x3178 = UINT16_MAX;
	int64_t x3179 = -1LL;
	int32_t x3180 = 0;
	int32_t t99 = 7613194;

    t99 = (((x3177+x3178)==x3179)<<x3180);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x3213 = INT16_MIN;
	uint32_t x3214 = 1753U;
	static volatile uint64_t x3215 = UINT64_MAX;
	uint16_t x3216 = 1U;
	volatile int32_t t100 = 180;

    t100 = (((x3213+x3214)==x3215)<<x3216);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x3277 = INT16_MIN;
	uint8_t x3280 = 0U;
	int32_t t101 = 3207601;

    t101 = (((x3277+x3278)==x3279)<<x3280);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int64_t x3318 = 413LL;
	static int32_t x3319 = INT32_MIN;
	volatile int16_t x3320 = 1;

    t102 = (((x3317+x3318)==x3319)<<x3320);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x3325 = INT64_MAX;
	uint64_t x3326 = 6282434230897LLU;
	uint64_t x3327 = 10796611821LLU;
	int32_t x3328 = 1;

    t103 = (((x3325+x3326)==x3327)<<x3328);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x3337 = INT16_MIN;
	uint32_t x3338 = UINT32_MAX;
	uint8_t x3339 = 85U;
	static int32_t t104 = -3773;

    t104 = (((x3337+x3338)==x3339)<<x3340);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x3415 = -1;
	static volatile uint16_t x3416 = 8U;
	volatile int32_t t105 = -157375;

    t105 = (((x3413+x3414)==x3415)<<x3416);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint16_t x3489 = 7198U;
	int8_t x3490 = INT8_MIN;
	static int16_t x3491 = 7;
	volatile uint8_t x3492 = 20U;
	int32_t t106 = 91;

    t106 = (((x3489+x3490)==x3491)<<x3492);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x3497 = -2;
	int8_t x3498 = INT8_MIN;
	uint8_t x3499 = 3U;
	volatile int32_t t107 = -39959684;

    t107 = (((x3497+x3498)==x3499)<<x3500);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x3537 = INT64_MIN;
	uint64_t x3538 = 22LLU;
	static volatile int8_t x3539 = -1;
	volatile uint8_t x3540 = 1U;
	volatile int32_t t108 = 7358;

    t108 = (((x3537+x3538)==x3539)<<x3540);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x3566 = -1;
	static uint32_t x3567 = 23807014U;
	uint32_t x3568 = 4U;
	int32_t t109 = -152786532;

    t109 = (((x3565+x3566)==x3567)<<x3568);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x3614 = INT64_MIN;
	int64_t x3615 = INT64_MIN;
	static int8_t x3616 = 0;
	static volatile int32_t t110 = -33;

    t110 = (((x3613+x3614)==x3615)<<x3616);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x3637 = 132752441U;
	int32_t x3638 = INT32_MAX;
	int64_t x3639 = -3026800625375LL;
	int16_t x3640 = 15;
	static volatile int32_t t111 = -26341715;

    t111 = (((x3637+x3638)==x3639)<<x3640);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x3641 = -1;
	volatile int8_t x3642 = -1;
	int32_t x3643 = INT32_MIN;

    t112 = (((x3641+x3642)==x3643)<<x3644);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x3729 = 1U;
	static uint16_t x3730 = UINT16_MAX;
	int8_t x3731 = -1;
	volatile uint8_t x3732 = 5U;

    t113 = (((x3729+x3730)==x3731)<<x3732);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x3757 = 1;
	volatile int16_t x3758 = INT16_MAX;
	uint64_t x3759 = 1LLU;
	volatile int32_t t114 = 1771;

    t114 = (((x3757+x3758)==x3759)<<x3760);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x3885 = INT16_MIN;
	uint64_t x3887 = UINT64_MAX;
	int32_t x3888 = 2;
	volatile int32_t t115 = -880;

    t115 = (((x3885+x3886)==x3887)<<x3888);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile uint32_t x3921 = 32U;
	static uint32_t x3922 = 93918873U;
	static int16_t x3923 = INT16_MIN;
	int32_t t116 = 52134;

    t116 = (((x3921+x3922)==x3923)<<x3924);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x3981 = 38942LL;
	volatile int16_t x3982 = -16383;
	volatile uint8_t x3984 = 9U;
	int32_t t117 = 520781;

    t117 = (((x3981+x3982)==x3983)<<x3984);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x4033 = INT32_MIN;
	static volatile uint16_t x4035 = UINT16_MAX;
	int8_t x4036 = 0;
	int32_t t118 = -560328932;

    t118 = (((x4033+x4034)==x4035)<<x4036);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x4037 = INT16_MIN;
	int16_t x4038 = INT16_MAX;
	uint8_t x4039 = 10U;
	static uint8_t x4040 = 5U;

    t119 = (((x4037+x4038)==x4039)<<x4040);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x4069 = INT16_MIN;
	volatile int32_t x4070 = -3859998;
	int32_t x4071 = 25322069;
	uint8_t x4072 = 2U;

    t120 = (((x4069+x4070)==x4071)<<x4072);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x4077 = UINT32_MAX;
	int64_t x4078 = -27031LL;
	static uint32_t x4079 = 1086U;
	int8_t x4080 = 1;
	static volatile int32_t t121 = -68;

    t121 = (((x4077+x4078)==x4079)<<x4080);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x4085 = INT64_MIN;
	uint8_t x4086 = 121U;
	uint16_t x4088 = 7U;
	volatile int32_t t122 = -26357;

    t122 = (((x4085+x4086)==x4087)<<x4088);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x4133 = INT64_MIN;
	static uint8_t x4134 = UINT8_MAX;
	int16_t x4135 = INT16_MIN;
	volatile int32_t t123 = -1;

    t123 = (((x4133+x4134)==x4135)<<x4136);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x4218 = 0;
	static int16_t x4219 = 9368;
	volatile uint8_t x4220 = 1U;
	int32_t t124 = -694;

    t124 = (((x4217+x4218)==x4219)<<x4220);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int64_t x4245 = 28672552LL;
	int32_t x4246 = INT32_MAX;
	volatile int8_t x4247 = INT8_MAX;
	volatile int16_t x4248 = 4;
	int32_t t125 = 13;

    t125 = (((x4245+x4246)==x4247)<<x4248);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x4269 = -1;
	int8_t x4270 = 1;
	static volatile int64_t x4271 = 4626406385146756LL;
	int8_t x4272 = 3;
	volatile int32_t t126 = 700670;

    t126 = (((x4269+x4270)==x4271)<<x4272);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x4281 = INT8_MIN;
	int32_t x4282 = -1;
	uint32_t x4283 = UINT32_MAX;
	static uint8_t x4284 = 0U;
	int32_t t127 = 104815393;

    t127 = (((x4281+x4282)==x4283)<<x4284);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x4389 = -1LL;
	int8_t x4391 = -8;
	uint8_t x4392 = 0U;

    t128 = (((x4389+x4390)==x4391)<<x4392);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x4393 = INT8_MIN;
	int8_t x4394 = -1;
	static int64_t x4395 = -1LL;
	volatile int8_t x4396 = 0;
	volatile int32_t t129 = -327;

    t129 = (((x4393+x4394)==x4395)<<x4396);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x4421 = -513151;
	uint32_t x4422 = 5150803U;
	static int8_t x4424 = 0;

    t130 = (((x4421+x4422)==x4423)<<x4424);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x4489 = INT8_MIN;
	int8_t x4490 = INT8_MIN;
	uint16_t x4491 = 1U;

    t131 = (((x4489+x4490)==x4491)<<x4492);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x4542 = 219798U;
	int8_t x4543 = 46;
	volatile uint64_t x4544 = 21LLU;
	static volatile int32_t t132 = 63371931;

    t132 = (((x4541+x4542)==x4543)<<x4544);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x4590 = INT64_MAX;
	volatile int8_t x4591 = INT8_MIN;
	int16_t x4592 = 1;
	int32_t t133 = -1453;

    t133 = (((x4589+x4590)==x4591)<<x4592);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x4622 = INT16_MIN;
	int8_t x4623 = INT8_MAX;
	volatile uint64_t x4624 = 1LLU;
	int32_t t134 = 143;

    t134 = (((x4621+x4622)==x4623)<<x4624);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x4657 = -1;
	uint64_t x4658 = UINT64_MAX;
	static int64_t x4659 = INT64_MIN;
	volatile int32_t t135 = -156;

    t135 = (((x4657+x4658)==x4659)<<x4660);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x4773 = INT16_MIN;
	int16_t x4774 = -5;
	volatile int16_t x4775 = 23;
	int8_t x4776 = 11;
	volatile int32_t t136 = -1;

    t136 = (((x4773+x4774)==x4775)<<x4776);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x4777 = 6LLU;
	static uint32_t x4778 = 870933U;
	int64_t x4779 = INT64_MIN;
	volatile int32_t t137 = -2;

    t137 = (((x4777+x4778)==x4779)<<x4780);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x4801 = 12;
	int64_t x4803 = INT64_MIN;
	static uint8_t x4804 = 18U;
	volatile int32_t t138 = 3084;

    t138 = (((x4801+x4802)==x4803)<<x4804);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x4865 = -1;
	uint16_t x4867 = 4304U;
	volatile int32_t t139 = -363;

    t139 = (((x4865+x4866)==x4867)<<x4868);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x4869 = 3;
	int32_t x4870 = -1;
	volatile uint32_t x4871 = 9U;
	volatile int8_t x4872 = 1;

    t140 = (((x4869+x4870)==x4871)<<x4872);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x4925 = -224543059356LL;
	int32_t x4926 = -48;
	int8_t x4927 = -1;
	static uint64_t x4928 = 5LLU;
	int32_t t141 = 1;

    t141 = (((x4925+x4926)==x4927)<<x4928);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x4966 = 6438U;
	volatile int32_t x4967 = INT32_MIN;
	int8_t x4968 = 18;
	int32_t t142 = -107;

    t142 = (((x4965+x4966)==x4967)<<x4968);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint32_t x5001 = UINT32_MAX;
	int8_t x5003 = INT8_MAX;
	volatile uint16_t x5004 = 1U;
	int32_t t143 = -43861;

    t143 = (((x5001+x5002)==x5003)<<x5004);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x5022 = -1;
	volatile uint8_t x5024 = 5U;
	int32_t t144 = 324760;

    t144 = (((x5021+x5022)==x5023)<<x5024);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int8_t x5050 = INT8_MIN;
	int16_t x5052 = 0;

    t145 = (((x5049+x5050)==x5051)<<x5052);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x5209 = -1LL;
	int64_t x5210 = INT64_MAX;
	int16_t x5211 = INT16_MAX;
	int32_t t146 = -1778;

    t146 = (((x5209+x5210)==x5211)<<x5212);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x5221 = 0;
	uint8_t x5224 = 4U;
	volatile int32_t t147 = -91;

    t147 = (((x5221+x5222)==x5223)<<x5224);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x5249 = UINT64_MAX;
	volatile int64_t x5250 = 755627694926682066LL;
	uint64_t x5251 = 55789LLU;
	int8_t x5252 = 1;
	static int32_t t148 = -3831;

    t148 = (((x5249+x5250)==x5251)<<x5252);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x5265 = -35322394354898091LL;
	int32_t x5266 = 998766;
	uint8_t x5268 = 8U;

    t149 = (((x5265+x5266)==x5267)<<x5268);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x5285 = -1;
	static int16_t x5286 = -1;
	int8_t x5287 = INT8_MIN;
	int8_t x5288 = 6;
	int32_t t150 = 0;

    t150 = (((x5285+x5286)==x5287)<<x5288);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint64_t x5301 = 3421819454517153704LLU;
	static volatile int16_t x5303 = INT16_MIN;
	static int16_t x5304 = 0;
	volatile int32_t t151 = 259775;

    t151 = (((x5301+x5302)==x5303)<<x5304);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x5306 = 12520778LLU;
	int8_t x5307 = -1;
	uint64_t x5308 = 3LLU;
	int32_t t152 = 1;

    t152 = (((x5305+x5306)==x5307)<<x5308);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x5317 = UINT64_MAX;
	int8_t x5319 = INT8_MIN;
	static int16_t x5320 = 1;
	int32_t t153 = 61;

    t153 = (((x5317+x5318)==x5319)<<x5320);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x5393 = -1LL;
	int32_t x5394 = INT32_MIN;
	volatile uint64_t x5395 = 28317LLU;
	int8_t x5396 = 10;
	int32_t t154 = 47772947;

    t154 = (((x5393+x5394)==x5395)<<x5396);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int16_t x5438 = INT16_MAX;
	uint8_t x5439 = 3U;
	uint32_t x5440 = 4U;
	int32_t t155 = -14;

    t155 = (((x5437+x5438)==x5439)<<x5440);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x5453 = UINT16_MAX;
	static uint64_t x5456 = 3LLU;

    t156 = (((x5453+x5454)==x5455)<<x5456);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x5501 = INT32_MIN;
	static volatile int16_t x5502 = INT16_MAX;
	int16_t x5503 = INT16_MAX;
	int8_t x5504 = 0;
	static volatile int32_t t157 = -141209;

    t157 = (((x5501+x5502)==x5503)<<x5504);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int32_t x5517 = -3258;
	volatile uint8_t x5518 = UINT8_MAX;
	static uint32_t x5519 = UINT32_MAX;
	static uint16_t x5520 = 3U;
	int32_t t158 = 6490992;

    t158 = (((x5517+x5518)==x5519)<<x5520);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x5545 = UINT64_MAX;
	uint16_t x5547 = 7U;
	uint8_t x5548 = 1U;

    t159 = (((x5545+x5546)==x5547)<<x5548);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x5581 = -1;
	uint32_t x5582 = 159192098U;
	volatile uint8_t x5584 = 23U;
	int32_t t160 = 302921;

    t160 = (((x5581+x5582)==x5583)<<x5584);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint32_t x5645 = 31504927U;
	uint16_t x5646 = UINT16_MAX;
	int8_t x5648 = 9;
	int32_t t161 = -127;

    t161 = (((x5645+x5646)==x5647)<<x5648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint64_t x5658 = 48438LLU;
	int8_t x5659 = INT8_MAX;
	int8_t x5660 = 0;
	static volatile int32_t t162 = 8;

    t162 = (((x5657+x5658)==x5659)<<x5660);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile uint32_t x5665 = 65242545U;
	uint64_t x5666 = 2222921517074LLU;
	static volatile uint64_t x5667 = 92103626820262018LLU;
	uint16_t x5668 = 0U;
	int32_t t163 = -2623;

    t163 = (((x5665+x5666)==x5667)<<x5668);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x5678 = 6851LL;
	int8_t x5679 = 7;
	volatile int32_t t164 = 87934;

    t164 = (((x5677+x5678)==x5679)<<x5680);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x5750 = INT32_MIN;
	volatile int32_t x5751 = 29;
	uint16_t x5752 = 1U;
	volatile int32_t t165 = 282710175;

    t165 = (((x5749+x5750)==x5751)<<x5752);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint8_t x5765 = 4U;
	int16_t x5766 = INT16_MAX;
	uint32_t x5768 = 15U;

    t166 = (((x5765+x5766)==x5767)<<x5768);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x5794 = INT64_MAX;
	int64_t x5795 = INT64_MAX;
	static volatile int8_t x5796 = 0;

    t167 = (((x5793+x5794)==x5795)<<x5796);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x5802 = INT8_MIN;
	static int64_t x5803 = -3217LL;
	static int8_t x5804 = 1;
	int32_t t168 = 62552474;

    t168 = (((x5801+x5802)==x5803)<<x5804);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int64_t x5810 = -1LL;
	static uint64_t x5811 = 243749440176LLU;

    t169 = (((x5809+x5810)==x5811)<<x5812);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int32_t x5829 = INT32_MAX;
	static int16_t x5830 = -1;
	int8_t x5831 = 46;
	int32_t t170 = 1;

    t170 = (((x5829+x5830)==x5831)<<x5832);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x5909 = INT8_MAX;
	int8_t x5910 = 14;
	int8_t x5912 = 3;
	int32_t t171 = 0;

    t171 = (((x5909+x5910)==x5911)<<x5912);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x5921 = -1LL;
	int16_t x5923 = -4;
	int32_t t172 = -6000316;

    t172 = (((x5921+x5922)==x5923)<<x5924);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x5925 = 2;
	int32_t x5926 = -1;
	int32_t x5927 = 99632827;
	uint8_t x5928 = 6U;
	int32_t t173 = -3905;

    t173 = (((x5925+x5926)==x5927)<<x5928);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint64_t x5930 = 496509052552136LLU;
	static volatile int32_t x5931 = INT32_MIN;
	uint16_t x5932 = 0U;
	volatile int32_t t174 = -9413726;

    t174 = (((x5929+x5930)==x5931)<<x5932);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x5985 = INT8_MIN;
	static int16_t x5986 = INT16_MIN;
	volatile uint32_t x5988 = 9U;
	volatile int32_t t175 = -238115804;

    t175 = (((x5985+x5986)==x5987)<<x5988);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x6077 = INT16_MIN;
	static uint16_t x6078 = 3464U;
	int16_t x6079 = -1;
	int16_t x6080 = 0;
	int32_t t176 = 7;

    t176 = (((x6077+x6078)==x6079)<<x6080);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x6097 = -1;
	int64_t x6098 = 16186765LL;
	static uint32_t x6100 = 0U;
	static volatile int32_t t177 = -6409356;

    t177 = (((x6097+x6098)==x6099)<<x6100);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x6185 = 7;
	static int64_t x6186 = -1LL;
	static int32_t x6187 = INT32_MIN;
	int16_t x6188 = 1;
	volatile int32_t t178 = -104836;

    t178 = (((x6185+x6186)==x6187)<<x6188);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x6297 = INT64_MAX;
	int8_t x6298 = -1;
	int32_t x6299 = INT32_MIN;
	static volatile int8_t x6300 = 8;
	static volatile int32_t t179 = 107;

    t179 = (((x6297+x6298)==x6299)<<x6300);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x6324 = 5U;
	volatile int32_t t180 = 1;

    t180 = (((x6321+x6322)==x6323)<<x6324);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x6329 = INT32_MIN;
	int64_t x6330 = INT64_MAX;
	int16_t x6331 = -1;
	uint16_t x6332 = 6U;
	static volatile int32_t t181 = -106958;

    t181 = (((x6329+x6330)==x6331)<<x6332);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x6338 = 925485778;
	int32_t x6340 = 3;
	int32_t t182 = 196;

    t182 = (((x6337+x6338)==x6339)<<x6340);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x6346 = 16U;
	uint8_t x6347 = UINT8_MAX;
	int64_t x6348 = 24LL;
	static int32_t t183 = 16035451;

    t183 = (((x6345+x6346)==x6347)<<x6348);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x6377 = INT8_MIN;
	uint16_t x6378 = 29U;
	int8_t x6379 = -1;
	uint8_t x6380 = 5U;

    t184 = (((x6377+x6378)==x6379)<<x6380);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x6385 = 51244LLU;
	volatile uint32_t x6386 = 11993204U;
	uint32_t x6387 = UINT32_MAX;
	static int16_t x6388 = 25;
	static int32_t t185 = -542;

    t185 = (((x6385+x6386)==x6387)<<x6388);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint8_t x6401 = 0U;
	static volatile uint32_t x6404 = 4U;
	volatile int32_t t186 = -3;

    t186 = (((x6401+x6402)==x6403)<<x6404);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint16_t x6406 = 930U;
	uint64_t x6407 = 655826LLU;
	int8_t x6408 = 0;
	int32_t t187 = -1;

    t187 = (((x6405+x6406)==x6407)<<x6408);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint32_t x6429 = 2976U;
	volatile int64_t x6430 = -848LL;
	int32_t x6431 = 0;
	static int32_t t188 = 456;

    t188 = (((x6429+x6430)==x6431)<<x6432);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x6473 = 54U;
	static int16_t x6474 = 221;
	int16_t x6475 = -1;
	int16_t x6476 = 0;
	int32_t t189 = -395492599;

    t189 = (((x6473+x6474)==x6475)<<x6476);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x6481 = INT8_MAX;
	static int16_t x6482 = -1;
	volatile int8_t x6483 = 37;
	int8_t x6484 = 13;
	int32_t t190 = 19315593;

    t190 = (((x6481+x6482)==x6483)<<x6484);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x6557 = -19037227548068418LL;
	int32_t x6558 = 19062704;
	int8_t x6559 = INT8_MAX;
	static uint8_t x6560 = 0U;
	volatile int32_t t191 = 176;

    t191 = (((x6557+x6558)==x6559)<<x6560);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint64_t x6573 = 1078989522LLU;
	volatile uint32_t x6574 = 1U;
	int8_t x6575 = INT8_MIN;
	volatile int32_t t192 = -10;

    t192 = (((x6573+x6574)==x6575)<<x6576);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x6598 = UINT8_MAX;
	int32_t x6599 = -7119477;
	int32_t x6600 = 12;

    t193 = (((x6597+x6598)==x6599)<<x6600);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x6621 = -26036;
	int8_t x6622 = -5;
	int64_t x6623 = 45LL;
	volatile uint8_t x6624 = 17U;
	static volatile int32_t t194 = 49601;

    t194 = (((x6621+x6622)==x6623)<<x6624);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x6625 = 682828422;
	int64_t x6626 = -1LL;
	uint8_t x6627 = 57U;
	static int8_t x6628 = 0;
	volatile int32_t t195 = -20132;

    t195 = (((x6625+x6626)==x6627)<<x6628);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x6665 = INT64_MAX;
	int64_t x6666 = -2LL;
	uint16_t x6667 = 1061U;
	uint16_t x6668 = 0U;
	int32_t t196 = 5;

    t196 = (((x6665+x6666)==x6667)<<x6668);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x6669 = -10;
	int32_t x6671 = -1;
	uint64_t x6672 = 1LLU;
	int32_t t197 = -4395859;

    t197 = (((x6669+x6670)==x6671)<<x6672);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x6717 = INT8_MIN;
	int32_t x6718 = -306219754;
	uint16_t x6719 = UINT16_MAX;
	volatile int8_t x6720 = 2;
	volatile int32_t t198 = -27;

    t198 = (((x6717+x6718)==x6719)<<x6720);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x6753 = INT16_MAX;
	int8_t x6754 = INT8_MAX;
	uint32_t x6756 = 10U;

    t199 = (((x6753+x6754)==x6755)<<x6756);

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

