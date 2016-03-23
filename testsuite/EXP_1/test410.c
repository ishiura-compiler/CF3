
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

static uint8_t x5 = 0U;
int16_t x6 = INT16_MIN;
int32_t t0 = 0;
int32_t x9 = -1;
int16_t x18 = -1;
int16_t x20 = INT16_MIN;
uint64_t x22 = UINT64_MAX;
uint16_t x23 = 1U;
int8_t x30 = INT8_MIN;
uint8_t x44 = UINT8_MAX;
static int8_t x78 = INT8_MAX;
static int32_t t10 = 74;
uint32_t x81 = UINT32_MAX;
volatile int64_t t11 = 148220575LL;
volatile uint64_t t12 = 4067439439904209351LLU;
int32_t x98 = 11590;
uint64_t t16 = 899877LLU;
int16_t x139 = -1;
uint64_t t19 = 11406192443209966LLU;
uint64_t t20 = 716973LLU;
int64_t x148 = 56130154932LL;
uint16_t x150 = UINT16_MAX;
int64_t x152 = -1LL;
int32_t x153 = -38;
int16_t x154 = 224;
int64_t t28 = 0LL;
static int8_t x201 = INT8_MIN;
int64_t x215 = -1LL;
int32_t x216 = INT32_MAX;
int64_t t31 = -420856837LL;
int64_t x220 = 28LL;
int32_t x224 = -20;
volatile uint32_t t33 = 195U;
volatile int32_t x226 = INT32_MIN;
int16_t x230 = INT16_MAX;
static int16_t x232 = -41;
uint16_t x234 = 82U;
int8_t x238 = INT8_MAX;
int16_t x240 = INT16_MAX;
static uint8_t x245 = 87U;
static volatile int32_t t39 = 0;
int8_t x256 = INT8_MIN;
int64_t x283 = -2872274113503525LL;
int8_t x284 = INT8_MIN;
volatile int64_t t44 = 2422920018303774LL;
static int32_t x286 = -1;
volatile uint8_t x287 = UINT8_MAX;
uint8_t x306 = 5U;
int8_t x307 = 1;
int16_t x308 = INT16_MAX;
volatile int64_t t50 = 59506LL;
static uint16_t x325 = UINT16_MAX;
int32_t t51 = -1095243;
static uint32_t x332 = UINT32_MAX;
uint32_t t52 = 26939907U;
int8_t x335 = INT8_MIN;
static volatile int64_t x348 = 33027358LL;
int8_t x352 = -45;
int64_t x358 = 40766LL;
uint8_t x361 = UINT8_MAX;
static volatile uint64_t t59 = 921173303001LLU;
volatile uint16_t x379 = UINT16_MAX;
volatile uint32_t t61 = 691847U;
volatile uint64_t x382 = 17728049290729LLU;
int8_t x385 = INT8_MIN;
int16_t x387 = INT16_MAX;
uint8_t x388 = UINT8_MAX;
int8_t x394 = INT8_MIN;
static uint8_t x398 = 1U;
static int32_t t66 = 0;
int16_t x406 = -1;
int8_t x407 = INT8_MAX;
int32_t x408 = -4781248;
int32_t t67 = 32064593;
int64_t x416 = -1275LL;
int64_t x423 = -1LL;
uint8_t x424 = 4U;
uint64_t x441 = UINT64_MAX;
int64_t x452 = INT64_MIN;
int16_t x454 = -16;
int64_t x464 = 3864331LL;
static int16_t x468 = INT16_MIN;
int64_t t74 = -35525351956LL;
uint8_t x469 = UINT8_MAX;
int16_t x491 = INT16_MIN;
volatile uint8_t x492 = 3U;
static int32_t t79 = 1;
volatile uint64_t t80 = 742979857461418LLU;
int8_t x515 = INT8_MIN;
int16_t x522 = INT16_MAX;
volatile int16_t x523 = -1;
uint8_t x524 = 1U;
int64_t x568 = -7631654583961634LL;
static volatile int64_t t90 = -5642359723473LL;
volatile int8_t x580 = INT8_MIN;
uint32_t x581 = 52217782U;
int8_t x582 = 7;
uint8_t x586 = 12U;
static volatile int64_t t94 = 2LL;
static int8_t x593 = -1;
static uint8_t x595 = 1U;
static int16_t x598 = -21;
uint16_t x600 = 31U;
int64_t t99 = -156754646449LL;
int64_t x612 = INT64_MIN;
int16_t x617 = -1;
static volatile int64_t x619 = -1LL;
int8_t x622 = 45;
uint64_t x623 = 211976310934LLU;
volatile uint16_t x625 = 11440U;
int32_t x628 = INT32_MAX;
volatile int64_t t104 = 866302539811455LL;
int8_t x636 = INT8_MIN;
static uint64_t x637 = UINT64_MAX;
static volatile uint8_t x638 = 116U;
int16_t x640 = 15971;
static uint16_t x643 = 239U;
static volatile uint8_t x645 = 0U;
uint32_t t108 = 1U;
int32_t x649 = INT32_MAX;
int32_t x651 = -1;
static int32_t x653 = 1924;
static int64_t x657 = -128359216350196LL;
uint32_t x658 = 26U;
static int16_t x663 = INT16_MIN;
int16_t x666 = INT16_MIN;
uint32_t x673 = UINT32_MAX;
uint64_t t116 = 45984706686LLU;
volatile int64_t x686 = -1LL;
static volatile int8_t x690 = INT8_MAX;
uint16_t x707 = UINT16_MAX;
static int64_t x730 = -1LL;
uint64_t x736 = 57LLU;
uint16_t x741 = 7U;
uint64_t x745 = 7526299424575859LLU;
uint8_t x749 = 3U;
int64_t t128 = -1652409888216LL;
int8_t x753 = -1;
int16_t x754 = 1371;
static uint8_t x755 = 46U;
volatile int32_t t129 = 15;
int8_t x759 = INT8_MIN;
static int16_t x761 = INT16_MIN;
static int64_t x762 = 4LL;
static uint16_t x766 = UINT16_MAX;
volatile uint8_t x779 = UINT8_MAX;
uint16_t x793 = 206U;
uint16_t x794 = 55U;
int32_t x795 = 626150653;
volatile int32_t t135 = 16;
static uint32_t x808 = UINT32_MAX;
int32_t x809 = INT32_MIN;
volatile int16_t x811 = INT16_MIN;
uint8_t x814 = 0U;
int8_t x820 = -1;
static int8_t x821 = 0;
int16_t x824 = 70;
uint64_t t141 = 48LLU;
int64_t x846 = -1899275LL;
uint64_t t142 = 147707231541LLU;
int8_t x853 = -27;
int32_t t143 = 3512446;
int32_t x858 = -1;
static volatile int8_t x864 = INT8_MIN;
volatile int64_t t146 = 64401726LL;
uint32_t x881 = 1643165206U;
static uint64_t x886 = 559184871983124896LLU;
int32_t x889 = 883446;
volatile int16_t x896 = INT16_MIN;
volatile int64_t t152 = -749LL;
uint64_t x909 = 372035911LLU;
uint8_t x912 = UINT8_MAX;
volatile uint8_t x921 = UINT8_MAX;
volatile int32_t x923 = -1;
static uint32_t x930 = 11866926U;
int8_t x934 = -1;
uint16_t x945 = 193U;
static volatile int32_t x952 = INT32_MAX;
volatile int64_t x979 = INT64_MAX;
uint32_t x980 = UINT32_MAX;
int16_t x983 = 1572;
uint64_t x984 = 16843951LLU;
int64_t t166 = -57LL;
int16_t x1002 = INT16_MIN;
uint64_t x1009 = UINT64_MAX;
int8_t x1018 = INT8_MIN;
int16_t x1019 = INT16_MAX;
volatile int8_t x1039 = INT8_MIN;
uint64_t x1042 = UINT64_MAX;
static uint64_t t177 = 8LLU;
volatile uint64_t x1045 = 7730911LLU;
static int64_t x1048 = INT64_MAX;
int16_t x1054 = -5299;
int8_t x1067 = -50;
uint32_t t182 = 129U;
uint8_t x1084 = 1U;
volatile uint64_t x1096 = 4132060506810154LLU;
int8_t x1099 = INT8_MIN;
int8_t x1100 = -1;
uint32_t t185 = 1009U;
uint8_t x1109 = 7U;
volatile int64_t t189 = 1307LL;
int8_t x1123 = -1;
uint64_t x1127 = 7483258456135770LLU;
int8_t x1134 = -3;
int64_t x1142 = INT64_MIN;
static volatile uint64_t x1145 = 0LLU;
int8_t x1151 = -1;
int32_t x1156 = -1773;


void f0(void) {
    	int8_t x7 = INT8_MAX;
	volatile uint16_t x8 = 47U;

    t0 = (((x5*x6)-x7)/x8);

    if (t0 != -2) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint32_t x10 = 49157U;
	static int8_t x11 = 4;
	int32_t x12 = INT32_MIN;
	volatile uint32_t t1 = 7779U;

    t1 = (((x9*x10)-x11)/x12);

    if (t1 != 1U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x13 = 30U;
	static volatile int64_t x14 = -8LL;
	int64_t x15 = -77532LL;
	uint8_t x16 = 6U;
	volatile int64_t t2 = -3747939LL;

    t2 = (((x13*x14)-x15)/x16);

    if (t2 != 12882LL) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint8_t x17 = 2U;
	int8_t x19 = -29;
	static int32_t t3 = -4201;

    t3 = (((x17*x18)-x19)/x20);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint8_t x21 = 19U;
	volatile int64_t x24 = 25546542LL;
	uint64_t t4 = 77715513218LLU;

    t4 = (((x21*x22)-x23)/x24);

    if (t4 != 722083798022LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint16_t x25 = 9U;
	volatile uint8_t x26 = 0U;
	uint8_t x27 = 14U;
	uint64_t x28 = 124751907LLU;
	static volatile uint64_t t5 = 1531042079666779LLU;

    t5 = (((x25*x26)-x27)/x28);

    if (t5 != 147867431587LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x29 = INT8_MIN;
	int8_t x31 = 9;
	volatile uint64_t x32 = UINT64_MAX;
	volatile uint64_t t6 = 87352613242829557LLU;

    t6 = (((x29*x30)-x31)/x32);

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int8_t x33 = INT8_MIN;
	static uint32_t x34 = 54089284U;
	uint32_t x35 = UINT32_MAX;
	int64_t x36 = INT64_MIN;
	volatile int64_t t7 = -1815967547792LL;

    t7 = (((x33*x34)-x35)/x36);

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x37 = INT8_MIN;
	volatile uint32_t x38 = UINT32_MAX;
	static int16_t x39 = INT16_MIN;
	uint64_t x40 = 18104983609LLU;
	volatile uint64_t t8 = 163LLU;

    t8 = (((x37*x38)-x39)/x40);

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x41 = INT8_MAX;
	int8_t x42 = INT8_MIN;
	int8_t x43 = 35;
	int32_t t9 = 201778068;

    t9 = (((x41*x42)-x43)/x44);

    if (t9 != -63) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x77 = -1;
	static int16_t x79 = INT16_MIN;
	int16_t x80 = -1;

    t10 = (((x77*x78)-x79)/x80);

    if (t10 != -32641) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x82 = -1;
	volatile int64_t x83 = -1LL;
	volatile int16_t x84 = INT16_MIN;

    t11 = (((x81*x82)-x83)/x84);

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint64_t x93 = UINT64_MAX;
	int8_t x94 = INT8_MAX;
	volatile int8_t x95 = INT8_MIN;
	volatile int16_t x96 = INT16_MAX;

    t12 = (((x93*x94)-x95)/x96);

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x97 = 1;
	uint64_t x99 = UINT64_MAX;
	uint64_t x100 = UINT64_MAX;
	uint64_t t13 = 1323400126106LLU;

    t13 = (((x97*x98)-x99)/x100);

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint8_t x101 = 6U;
	int16_t x102 = INT16_MIN;
	uint16_t x103 = 7525U;
	uint32_t x104 = 84U;
	volatile uint32_t t14 = 69U;

    t14 = (((x101*x102)-x103)/x104);

    if (t14 != 51128132U) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint64_t x105 = UINT64_MAX;
	int8_t x106 = INT8_MIN;
	int32_t x107 = -1;
	static uint16_t x108 = 1U;
	volatile uint64_t t15 = 5642156100685060LLU;

    t15 = (((x105*x106)-x107)/x108);

    if (t15 != 129LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x109 = INT8_MIN;
	static int64_t x110 = 1462LL;
	uint64_t x111 = UINT64_MAX;
	static int64_t x112 = 7369554LL;

    t16 = (((x109*x110)-x111)/x112);

    if (t16 != 2503101825932LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x121 = 1519199966543LLU;
	volatile int16_t x122 = INT16_MIN;
	int64_t x123 = -15538078574512LL;
	volatile int32_t x124 = 1065462707;
	uint64_t t17 = 4525624450738025193LLU;

    t17 = (((x121*x122)-x123)/x124);

    if (t17 != 17266656398LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x133 = -70;
	volatile uint32_t x134 = 464103380U;
	int32_t x135 = 994;
	uint8_t x136 = 4U;
	volatile uint32_t t18 = 10U;

    t18 = (((x133*x134)-x135)/x136);

    if (t18 != 468125193U) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint64_t x137 = 11200764664528270LLU;
	int64_t x138 = -1LL;
	volatile int16_t x140 = -1;

    t19 = (((x137*x138)-x139)/x140);

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x141 = INT16_MIN;
	uint64_t x142 = UINT64_MAX;
	int32_t x143 = INT32_MAX;
	uint16_t x144 = UINT16_MAX;

    t20 = (((x141*x142)-x143)/x144);

    if (t20 != 281479271710721LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x145 = INT8_MIN;
	static uint64_t x146 = 254977936556856778LLU;
	uint8_t x147 = UINT8_MAX;
	uint64_t t21 = 60LLU;

    t21 = (((x145*x146)-x147)/x148);

    if (t21 != 75829334LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x149 = INT8_MIN;
	static int8_t x151 = INT8_MIN;
	volatile int64_t t22 = -102809449691987223LL;

    t22 = (((x149*x150)-x151)/x152);

    if (t22 != 8388352LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint64_t x155 = UINT64_MAX;
	uint8_t x156 = 7U;
	uint64_t t23 = 225LLU;

    t23 = (((x153*x154)-x155)/x156);

    if (t23 != 2635249153387077586LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int8_t x157 = INT8_MAX;
	int8_t x158 = INT8_MIN;
	int32_t x159 = INT32_MIN;
	int64_t x160 = INT64_MIN;
	int64_t t24 = 491017708614LL;

    t24 = (((x157*x158)-x159)/x160);

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x169 = 1822U;
	uint32_t x170 = 0U;
	uint8_t x171 = UINT8_MAX;
	volatile int32_t x172 = -1;
	uint32_t t25 = 40775U;

    t25 = (((x169*x170)-x171)/x172);

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x173 = -1;
	int32_t x174 = 143;
	int64_t x175 = -1LL;
	uint8_t x176 = 6U;
	volatile int64_t t26 = -93311LL;

    t26 = (((x173*x174)-x175)/x176);

    if (t26 != -23LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint16_t x181 = 86U;
	int16_t x182 = INT16_MAX;
	uint8_t x183 = 113U;
	static int8_t x184 = -1;
	int32_t t27 = 5;

    t27 = (((x181*x182)-x183)/x184);

    if (t27 != -2817849) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x189 = 3548768944LL;
	volatile int16_t x190 = INT16_MIN;
	int64_t x191 = 0LL;
	static int64_t x192 = INT64_MIN;

    t28 = (((x189*x190)-x191)/x192);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x202 = INT16_MIN;
	static int64_t x203 = -1LL;
	int8_t x204 = -2;
	int64_t t29 = 41LL;

    t29 = (((x201*x202)-x203)/x204);

    if (t29 != -2097152LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x205 = UINT8_MAX;
	static volatile uint64_t x206 = 5729201LLU;
	uint8_t x207 = UINT8_MAX;
	int32_t x208 = INT32_MIN;
	volatile uint64_t t30 = 6107280671230185LLU;

    t30 = (((x205*x206)-x207)/x208);

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x213 = -1;
	volatile int16_t x214 = -1;

    t31 = (((x213*x214)-x215)/x216);

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x217 = 27;
	uint16_t x218 = 220U;
	static int8_t x219 = INT8_MIN;
	int64_t t32 = -5224LL;

    t32 = (((x217*x218)-x219)/x220);

    if (t32 != 216LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x221 = 23U;
	uint8_t x222 = 32U;
	int8_t x223 = 33;

    t33 = (((x221*x222)-x223)/x224);

    if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x225 = 9020672U;
	int16_t x227 = -1;
	uint16_t x228 = UINT16_MAX;
	volatile uint32_t t34 = 844078U;

    t34 = (((x225*x226)-x227)/x228);

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x229 = -1LL;
	uint32_t x231 = UINT32_MAX;
	int64_t t35 = -3434611018045614193LL;

    t35 = (((x229*x230)-x231)/x232);

    if (t35 != 104756099LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x233 = INT8_MAX;
	int64_t x235 = 9LL;
	int64_t x236 = INT64_MIN;
	int64_t t36 = 2995104920LL;

    t36 = (((x233*x234)-x235)/x236);

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x237 = -1LL;
	uint16_t x239 = UINT16_MAX;
	static int64_t t37 = 6146299345LL;

    t37 = (((x237*x238)-x239)/x240);

    if (t37 != -2LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint32_t x241 = UINT32_MAX;
	int32_t x242 = -1;
	volatile uint16_t x243 = 170U;
	int8_t x244 = INT8_MIN;
	volatile uint32_t t38 = 16967010U;

    t38 = (((x241*x242)-x243)/x244);

    if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x246 = UINT8_MAX;
	static uint16_t x247 = 12052U;
	int8_t x248 = 13;

    t39 = (((x245*x246)-x247)/x248);

    if (t39 != 779) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x249 = 2758;
	volatile int16_t x250 = INT16_MIN;
	static uint16_t x251 = 834U;
	int8_t x252 = -1;
	static int32_t t40 = 14;

    t40 = (((x249*x250)-x251)/x252);

    if (t40 != 90374978) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x253 = -56;
	int16_t x254 = INT16_MAX;
	volatile int8_t x255 = INT8_MAX;
	volatile int32_t t41 = -6362661;

    t41 = (((x253*x254)-x255)/x256);

    if (t41 != 14336) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x257 = INT16_MAX;
	int8_t x258 = INT8_MIN;
	int64_t x259 = INT64_MIN;
	volatile int32_t x260 = INT32_MAX;
	int64_t t42 = 14690030442LL;

    t42 = (((x257*x258)-x259)/x260);

    if (t42 != 4294967297LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x265 = UINT8_MAX;
	uint64_t x266 = UINT64_MAX;
	static int16_t x267 = INT16_MIN;
	int64_t x268 = INT64_MIN;
	uint64_t t43 = 86296775637LLU;

    t43 = (((x265*x266)-x267)/x268);

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x281 = INT32_MAX;
	int64_t x282 = -1LL;

    t44 = (((x281*x282)-x283)/x284);

    if (t44 != -22439624734530LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x285 = 365;
	int8_t x288 = -9;
	static volatile int32_t t45 = 138;

    t45 = (((x285*x286)-x287)/x288);

    if (t45 != 68) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x289 = INT16_MIN;
	volatile int8_t x290 = 26;
	uint8_t x291 = 118U;
	int8_t x292 = INT8_MIN;
	static int32_t t46 = -105481776;

    t46 = (((x289*x290)-x291)/x292);

    if (t46 != 6656) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint16_t x293 = 3556U;
	int8_t x294 = INT8_MAX;
	static int16_t x295 = INT16_MIN;
	volatile int8_t x296 = INT8_MAX;
	volatile int32_t t47 = -121093355;

    t47 = (((x293*x294)-x295)/x296);

    if (t47 != 3814) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x305 = INT8_MAX;
	volatile int32_t t48 = -111306647;

    t48 = (((x305*x306)-x307)/x308);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x309 = INT8_MAX;
	uint16_t x310 = UINT16_MAX;
	uint16_t x311 = UINT16_MAX;
	uint16_t x312 = 59U;
	static int32_t t49 = -2047;

    t49 = (((x309*x310)-x311)/x312);

    if (t49 != 139956) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x317 = 0LL;
	static volatile int8_t x318 = 46;
	static uint8_t x319 = 14U;
	int64_t x320 = -925054LL;

    t50 = (((x317*x318)-x319)/x320);

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x326 = 0;
	static int16_t x327 = 0;
	int8_t x328 = -1;

    t51 = (((x325*x326)-x327)/x328);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x329 = -1;
	int16_t x330 = INT16_MAX;
	int8_t x331 = -1;

    t52 = (((x329*x330)-x331)/x332);

    if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x333 = UINT8_MAX;
	uint64_t x334 = 893208465LLU;
	static int16_t x336 = INT16_MAX;
	volatile uint64_t t53 = 486632LLU;

    t53 = (((x333*x334)-x335)/x336);

    if (t53 != 6951144LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x337 = INT16_MIN;
	int64_t x338 = 23LL;
	int64_t x339 = 9683429520LL;
	static uint32_t x340 = 7U;
	volatile int64_t t54 = -18530825LL;

    t54 = (((x337*x338)-x339)/x340);

    if (t54 != -1383454740LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x345 = -1;
	volatile uint32_t x346 = UINT32_MAX;
	uint16_t x347 = UINT16_MAX;
	volatile int64_t t55 = -3945152LL;

    t55 = (((x345*x346)-x347)/x348);

    if (t55 != 130LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x349 = INT32_MIN;
	uint32_t x350 = 1740498254U;
	int32_t x351 = INT32_MIN;
	volatile uint32_t t56 = 110U;

    t56 = (((x349*x350)-x351)/x352);

    if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x357 = 65U;
	uint16_t x359 = 32289U;
	int16_t x360 = INT16_MIN;
	volatile int64_t t57 = -20500308919302127LL;

    t57 = (((x357*x358)-x359)/x360);

    if (t57 != -79LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint64_t x362 = UINT64_MAX;
	int16_t x363 = -35;
	uint32_t x364 = UINT32_MAX;
	uint64_t t58 = 0LLU;

    t58 = (((x361*x362)-x363)/x364);

    if (t58 != 4294967296LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile uint16_t x365 = 1U;
	int8_t x366 = -1;
	volatile uint16_t x367 = UINT16_MAX;
	static volatile uint64_t x368 = 214357421762LLU;

    t59 = (((x365*x366)-x367)/x368);

    if (t59 != 86056008LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x369 = INT8_MIN;
	uint8_t x370 = UINT8_MAX;
	uint16_t x371 = 100U;
	int16_t x372 = INT16_MIN;
	static volatile int32_t t60 = -2;

    t60 = (((x369*x370)-x371)/x372);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x377 = -8651;
	uint32_t x378 = 253518U;
	uint32_t x380 = UINT32_MAX;

    t61 = (((x377*x378)-x379)/x380);

    if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x381 = INT16_MAX;
	int16_t x383 = INT16_MAX;
	uint8_t x384 = UINT8_MAX;
	uint64_t t62 = 1LLU;

    t62 = (((x381*x382)-x383)/x384);

    if (t62 != 2278019572977585LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x386 = 1857083935LLU;
	static volatile uint64_t t63 = 62LLU;

    t63 = (((x385*x386)-x387)/x388);

    if (t63 != 72340171905893235LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x389 = INT8_MIN;
	int16_t x390 = INT16_MAX;
	uint8_t x391 = 34U;
	uint64_t x392 = 3794685950706720285LLU;
	uint64_t t64 = 277LLU;

    t64 = (((x389*x390)-x391)/x392);

    if (t64 != 4LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x393 = 5U;
	int32_t x395 = -9205362;
	uint64_t x396 = UINT64_MAX;
	volatile uint64_t t65 = 305LLU;

    t65 = (((x393*x394)-x395)/x396);

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x397 = INT8_MIN;
	int16_t x399 = 7;
	static volatile int8_t x400 = INT8_MIN;

    t66 = (((x397*x398)-x399)/x400);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x405 = INT16_MIN;

    t67 = (((x405*x406)-x407)/x408);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x413 = -4599493LL;
	int32_t x414 = INT32_MIN;
	static int8_t x415 = 0;
	volatile int64_t t68 = -104340669367765LL;

    t68 = (((x413*x414)-x415)/x416);

    if (t68 != -7746930201247LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x421 = 1U;
	int8_t x422 = -1;
	int64_t t69 = 6842576913737LL;

    t69 = (((x421*x422)-x423)/x424);

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x442 = 63U;
	uint16_t x443 = 1U;
	uint64_t x444 = 4282516572254004LLU;
	uint64_t t70 = 834710793713LLU;

    t70 = (((x441*x442)-x443)/x444);

    if (t70 != 4307LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint64_t x449 = UINT64_MAX;
	int8_t x450 = 35;
	uint8_t x451 = UINT8_MAX;
	volatile uint64_t t71 = 30169448268743LLU;

    t71 = (((x449*x450)-x451)/x452);

    if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int16_t x453 = -1;
	int16_t x455 = INT16_MIN;
	static int8_t x456 = -8;
	int32_t t72 = -984890508;

    t72 = (((x453*x454)-x455)/x456);

    if (t72 != -4098) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint32_t x461 = 98563U;
	uint16_t x462 = UINT16_MAX;
	int16_t x463 = 1246;
	int64_t t73 = -1LL;

    t73 = (((x461*x462)-x463)/x464);

    if (t73 != 560LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x465 = -61870546242471LL;
	volatile int64_t x466 = 73LL;
	volatile int16_t x467 = INT16_MAX;

    t74 = (((x465*x466)-x467)/x468);

    if (t74 != 137834163688LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x470 = 12;
	int16_t x471 = INT16_MIN;
	uint32_t x472 = UINT32_MAX;
	static uint32_t t75 = 42U;

    t75 = (((x469*x470)-x471)/x472);

    if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint8_t x481 = 3U;
	int16_t x482 = 0;
	int32_t x483 = INT32_MAX;
	int8_t x484 = INT8_MIN;
	volatile int32_t t76 = 154133;

    t76 = (((x481*x482)-x483)/x484);

    if (t76 != 16777215) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x485 = UINT64_MAX;
	int8_t x486 = -1;
	int32_t x487 = 8189265;
	uint8_t x488 = UINT8_MAX;
	static uint64_t t77 = 25066330731529993LLU;

    t77 = (((x485*x486)-x487)/x488);

    if (t77 != 72340172838044558LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x489 = 5108LL;
	int8_t x490 = INT8_MIN;
	int64_t t78 = 417050LL;

    t78 = (((x489*x490)-x491)/x492);

    if (t78 != -207018LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x493 = 24U;
	static uint8_t x494 = 2U;
	int16_t x495 = -1;
	int16_t x496 = INT16_MAX;

    t79 = (((x493*x494)-x495)/x496);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint64_t x505 = 8103489LLU;
	int8_t x506 = INT8_MIN;
	int16_t x507 = -1;
	int16_t x508 = INT16_MAX;

    t80 = (((x505*x506)-x507)/x508);

    if (t80 != 562967133783144LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x509 = 2LLU;
	uint16_t x510 = 293U;
	uint16_t x511 = 1751U;
	static int64_t x512 = -1LL;
	uint64_t t81 = 14431589613525LLU;

    t81 = (((x509*x510)-x511)/x512);

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint64_t x513 = UINT64_MAX;
	volatile int64_t x514 = 114569LL;
	static volatile int16_t x516 = -1;
	uint64_t t82 = 1332554LLU;

    t82 = (((x513*x514)-x515)/x516);

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x521 = INT16_MIN;
	int32_t t83 = -28880668;

    t83 = (((x521*x522)-x523)/x524);

    if (t83 != -1073709055) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x529 = UINT32_MAX;
	int64_t x530 = -1LL;
	static uint16_t x531 = 3U;
	int16_t x532 = INT16_MAX;
	int64_t t84 = -7083452LL;

    t84 = (((x529*x530)-x531)/x532);

    if (t84 != -131076LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x533 = -3;
	volatile int16_t x534 = 2;
	static uint16_t x535 = UINT16_MAX;
	uint32_t x536 = 276058U;
	static volatile uint32_t t85 = 588126U;

    t85 = (((x533*x534)-x535)/x536);

    if (t85 != 15557U) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x541 = INT64_MAX;
	int16_t x542 = 1;
	uint8_t x543 = 5U;
	int32_t x544 = INT32_MAX;
	int64_t t86 = 99683LL;

    t86 = (((x541*x542)-x543)/x544);

    if (t86 != 4294967297LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x545 = 4272;
	int16_t x546 = INT16_MIN;
	volatile int32_t x547 = INT32_MIN;
	int16_t x548 = 50;
	volatile int32_t t87 = 3984622;

    t87 = (((x545*x546)-x547)/x548);

    if (t87 != 40149975) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x553 = 6285992680837424LLU;
	int64_t x554 = 67697870678213361LL;
	int64_t x555 = -89043766LL;
	volatile int16_t x556 = 15818;
	volatile uint64_t t88 = 18545105149338LLU;

    t88 = (((x553*x554)-x555)/x556);

    if (t88 != 584310933158869LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x557 = -1LL;
	uint32_t x558 = 23940864U;
	int8_t x559 = 10;
	uint8_t x560 = UINT8_MAX;
	int64_t t89 = -28188LL;

    t89 = (((x557*x558)-x559)/x560);

    if (t89 != -93885LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x565 = INT8_MIN;
	int8_t x566 = -1;
	volatile int64_t x567 = -1LL;

    t90 = (((x565*x566)-x567)/x568);

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x569 = 0LL;
	uint64_t x570 = 3410609609LLU;
	int32_t x571 = 43305296;
	static volatile uint64_t x572 = 29678398LLU;
	uint64_t t91 = 127727120512868838LLU;

    t91 = (((x569*x570)-x571)/x572);

    if (t91 != 621554575609LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x577 = 0U;
	int32_t x578 = -49970;
	static int16_t x579 = 0;
	static volatile int32_t t92 = -1812;

    t92 = (((x577*x578)-x579)/x580);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x583 = UINT16_MAX;
	uint16_t x584 = UINT16_MAX;
	volatile uint32_t t93 = 44853U;

    t93 = (((x581*x582)-x583)/x584);

    if (t93 != 5576U) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint16_t x585 = UINT16_MAX;
	volatile int16_t x587 = 6;
	static int64_t x588 = 467LL;

    t94 = (((x585*x586)-x587)/x588);

    if (t94 != 1683LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x589 = INT16_MAX;
	static uint64_t x590 = 7876247993167LLU;
	int64_t x591 = 5094955LL;
	int32_t x592 = INT32_MAX;
	volatile uint64_t t95 = 3342233116051LLU;

    t95 = (((x589*x590)-x591)/x592);

    if (t95 != 120178339LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x594 = INT16_MIN;
	int8_t x596 = -3;
	volatile int32_t t96 = 460693;

    t96 = (((x593*x594)-x595)/x596);

    if (t96 != -10922) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x597 = 0U;
	static uint32_t x599 = UINT32_MAX;
	volatile uint32_t t97 = 8325290U;

    t97 = (((x597*x598)-x599)/x600);

    if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x601 = INT16_MIN;
	uint32_t x602 = 2049774733U;
	static int16_t x603 = 58;
	int16_t x604 = INT16_MIN;
	uint32_t t98 = 310U;

    t98 = (((x601*x602)-x603)/x604);

    if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x605 = 0;
	int64_t x606 = -1LL;
	static int16_t x607 = -1;
	int8_t x608 = -1;

    t99 = (((x605*x606)-x607)/x608);

    if (t99 != -1LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x609 = -1LL;
	static uint64_t x610 = 47798LLU;
	uint64_t x611 = UINT64_MAX;
	uint64_t t100 = 455079594323536919LLU;

    t100 = (((x609*x610)-x611)/x612);

    if (t100 != 1LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x618 = -1;
	uint64_t x620 = UINT64_MAX;
	static volatile uint64_t t101 = 63566638LLU;

    t101 = (((x617*x618)-x619)/x620);

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x621 = 3773U;
	int16_t x624 = INT16_MAX;
	volatile uint64_t t102 = 578254341739814282LLU;

    t102 = (((x621*x622)-x623)/x624);

    if (t102 != 562967127345604LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint16_t x626 = UINT16_MAX;
	int16_t x627 = INT16_MIN;
	int32_t t103 = 14;

    t103 = (((x625*x626)-x627)/x628);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x629 = -14;
	int64_t x630 = -1LL;
	static uint32_t x631 = UINT32_MAX;
	static uint16_t x632 = 12U;

    t104 = (((x629*x630)-x631)/x632);

    if (t104 != -357913940LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x633 = 1459815709U;
	int16_t x634 = INT16_MIN;
	static volatile int16_t x635 = 0;
	volatile uint32_t t105 = 47080U;

    t105 = (((x633*x634)-x635)/x636);

    if (t105 != 0U) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x639 = INT32_MAX;
	uint64_t t106 = 48LLU;

    t106 = (((x637*x638)-x639)/x640);

    if (t106 != 1155014969104130LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile uint64_t x641 = 625856797LLU;
	volatile int64_t x642 = INT64_MAX;
	int64_t x644 = INT64_MAX;
	uint64_t t107 = 8089365544144LLU;

    t107 = (((x641*x642)-x643)/x644);

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x646 = UINT32_MAX;
	static uint32_t x647 = UINT32_MAX;
	int8_t x648 = INT8_MAX;

    t108 = (((x645*x646)-x647)/x648);

    if (t108 != 0U) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x650 = -1LL;
	uint8_t x652 = UINT8_MAX;
	int64_t t109 = 15364LL;

    t109 = (((x649*x650)-x651)/x652);

    if (t109 != -8421504LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x654 = -1;
	volatile uint64_t x655 = UINT64_MAX;
	int32_t x656 = -1;
	volatile uint64_t t110 = 6306189331442398LLU;

    t110 = (((x653*x654)-x655)/x656);

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x659 = INT16_MAX;
	volatile int16_t x660 = INT16_MIN;
	static volatile int64_t t111 = 82LL;

    t111 = (((x657*x658)-x659)/x660);

    if (t111 != 101847522739LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x661 = INT8_MIN;
	int16_t x662 = 0;
	int32_t x664 = -1;
	volatile int32_t t112 = 81964;

    t112 = (((x661*x662)-x663)/x664);

    if (t112 != -32768) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x665 = -1;
	volatile int16_t x667 = 170;
	int32_t x668 = INT32_MAX;
	volatile int32_t t113 = -273;

    t113 = (((x665*x666)-x667)/x668);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x669 = INT8_MIN;
	uint16_t x670 = 916U;
	uint32_t x671 = UINT32_MAX;
	uint32_t x672 = 1U;
	volatile uint32_t t114 = 53U;

    t114 = (((x669*x670)-x671)/x672);

    if (t114 != 4294850049U) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x674 = 0;
	int64_t x675 = -72529498805LL;
	int16_t x676 = 5118;
	volatile int64_t t115 = -39504434030300117LL;

    t115 = (((x673*x674)-x675)/x676);

    if (t115 != 14171453LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x681 = INT64_MIN;
	uint64_t x682 = 5821LLU;
	int32_t x683 = INT32_MIN;
	static volatile uint32_t x684 = 5U;

    t116 = (((x681*x682)-x683)/x684);

    if (t116 != 1844674407800451891LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x685 = 1;
	int64_t x687 = 278374021190071730LL;
	int16_t x688 = -1;
	static int64_t t117 = 25349022429662964LL;

    t117 = (((x685*x686)-x687)/x688);

    if (t117 != 278374021190071731LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x689 = -1;
	static int64_t x691 = -6928043LL;
	int32_t x692 = 1061346720;
	static volatile int64_t t118 = 896375786677471LL;

    t118 = (((x689*x690)-x691)/x692);

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x697 = 32185155992516LLU;
	uint8_t x698 = 19U;
	int32_t x699 = 48445;
	int64_t x700 = INT64_MAX;
	uint64_t t119 = 5688LLU;

    t119 = (((x697*x698)-x699)/x700);

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x705 = 76576496LLU;
	static uint8_t x706 = 3U;
	int16_t x708 = INT16_MIN;
	uint64_t t120 = 38315556572831069LLU;

    t120 = (((x705*x706)-x707)/x708);

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x709 = INT32_MIN;
	uint64_t x710 = UINT64_MAX;
	int16_t x711 = 3821;
	int64_t x712 = 1497052160185046LL;
	volatile uint64_t t121 = 5342000951000529LLU;

    t121 = (((x709*x710)-x711)/x712);

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x713 = UINT8_MAX;
	static volatile int8_t x714 = -1;
	uint64_t x715 = 13980210564705493LLU;
	volatile int8_t x716 = INT8_MIN;
	static volatile uint64_t t122 = 1920392668799721LLU;

    t122 = (((x713*x714)-x715)/x716);

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int64_t x725 = 0LL;
	volatile int16_t x726 = INT16_MAX;
	int8_t x727 = -1;
	static int64_t x728 = 703LL;
	static int64_t t123 = -55229655718LL;

    t123 = (((x725*x726)-x727)/x728);

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x729 = 3U;
	volatile int32_t x731 = INT32_MIN;
	int8_t x732 = -1;
	int64_t t124 = -62460548717892535LL;

    t124 = (((x729*x730)-x731)/x732);

    if (t124 != -2147483645LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x733 = -1;
	int32_t x734 = INT32_MAX;
	volatile int64_t x735 = -1LL;
	uint64_t t125 = 832245674171924LLU;

    t125 = (((x733*x734)-x735)/x736);

    if (t125 != 323627088974773122LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x742 = -1913;
	int32_t x743 = INT32_MIN;
	int8_t x744 = -1;
	volatile int32_t t126 = -357059;

    t126 = (((x741*x742)-x743)/x744);

    if (t126 != -2147470257) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x746 = 2160U;
	uint32_t x747 = UINT32_MAX;
	uint32_t x748 = 5082178U;
	volatile uint64_t t127 = 257954LLU;

    t127 = (((x745*x746)-x747)/x748);

    if (t127 != 3198787361007LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x750 = 0LL;
	static int16_t x751 = -1;
	static volatile int8_t x752 = INT8_MIN;

    t128 = (((x749*x750)-x751)/x752);

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x756 = INT16_MIN;

    t129 = (((x753*x754)-x755)/x756);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint32_t x757 = 521883U;
	int32_t x758 = 56014;
	static int8_t x760 = -1;
	static uint32_t t130 = 127U;

    t130 = (((x757*x758)-x759)/x760);

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int32_t x763 = -1;
	volatile uint16_t x764 = 81U;
	static int64_t t131 = 258574LL;

    t131 = (((x761*x762)-x763)/x764);

    if (t131 != -1618LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x765 = 3U;
	volatile uint8_t x767 = UINT8_MAX;
	static int8_t x768 = -2;
	volatile int32_t t132 = 59338;

    t132 = (((x765*x766)-x767)/x768);

    if (t132 != -98175) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x777 = 25U;
	uint32_t x778 = 1733763U;
	int32_t x780 = INT32_MAX;
	volatile uint32_t t133 = 33677U;

    t133 = (((x777*x778)-x779)/x780);

    if (t133 != 0U) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x789 = -770;
	uint16_t x790 = UINT16_MAX;
	int16_t x791 = -2;
	uint32_t x792 = 444752U;
	uint32_t t134 = 57344195U;

    t134 = (((x789*x790)-x791)/x792);

    if (t134 != 9543U) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x796 = -1;

    t135 = (((x793*x794)-x795)/x796);

    if (t135 != 626139323) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x805 = 157U;
	int16_t x806 = INT16_MAX;
	int64_t x807 = 1250155317LL;
	volatile int64_t t136 = 51LL;

    t136 = (((x805*x806)-x807)/x808);

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x810 = 39919LLU;
	uint8_t x812 = 78U;
	static uint64_t t137 = 302958897LLU;

    t137 = (((x809*x810)-x811)/x812);

    if (t137 != 236495619850126152LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x813 = INT8_MIN;
	int8_t x815 = INT8_MIN;
	int16_t x816 = -565;
	int32_t t138 = -250;

    t138 = (((x813*x814)-x815)/x816);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x817 = INT8_MIN;
	int64_t x818 = -1LL;
	int8_t x819 = 1;
	volatile int64_t t139 = -217723846LL;

    t139 = (((x817*x818)-x819)/x820);

    if (t139 != -127LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x822 = -1;
	uint64_t x823 = 2935378170LLU;
	uint64_t t140 = 13838541068718LLU;

    t140 = (((x821*x822)-x823)/x824);

    if (t140 != 263524915296773906LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x833 = INT32_MIN;
	uint64_t x834 = UINT64_MAX;
	int8_t x835 = INT8_MIN;
	volatile uint16_t x836 = 237U;

    t141 = (((x833*x834)-x835)/x836);

    if (t141 != 9061112LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static int64_t x845 = -1LL;
	uint32_t x847 = 869870U;
	static uint64_t x848 = 120096LLU;

    t142 = (((x845*x846)-x847)/x848);

    if (t142 != 8LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x854 = INT16_MAX;
	uint16_t x855 = 72U;
	static int32_t x856 = -1;

    t143 = (((x853*x854)-x855)/x856);

    if (t143 != 884781) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x857 = -1LL;
	uint32_t x859 = 0U;
	int8_t x860 = INT8_MIN;
	int64_t t144 = 66285132900592942LL;

    t144 = (((x857*x858)-x859)/x860);

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x861 = INT8_MIN;
	static uint32_t x862 = 64846U;
	static int16_t x863 = 74;
	volatile uint32_t t145 = 137U;

    t145 = (((x861*x862)-x863)/x864);

    if (t145 != 0U) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x869 = -1;
	volatile int8_t x870 = -1;
	int32_t x871 = INT32_MAX;
	static int64_t x872 = INT64_MIN;

    t146 = (((x869*x870)-x871)/x872);

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x882 = INT32_MIN;
	uint32_t x883 = 909U;
	int32_t x884 = 26811082;
	volatile uint32_t t147 = 1460729940U;

    t147 = (((x881*x882)-x883)/x884);

    if (t147 != 160U) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x885 = -1;
	volatile int16_t x887 = -12679;
	uint32_t x888 = 224082U;
	uint64_t t148 = 181372925602365641LLU;

    t148 = (((x885*x886)-x887)/x888);

    if (t148 != 79825953007052LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile uint8_t x890 = UINT8_MAX;
	volatile int64_t x891 = INT64_MAX;
	int32_t x892 = INT32_MIN;
	int64_t t149 = -11LL;

    t149 = (((x889*x890)-x891)/x892);

    if (t149 != 4294967295LL) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint64_t x893 = 402555253916LLU;
	int16_t x894 = INT16_MAX;
	int32_t x895 = INT32_MIN;
	uint64_t t150 = 9339100950LLU;

    t150 = (((x893*x894)-x895)/x896);

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x901 = INT8_MAX;
	int8_t x902 = -2;
	int8_t x903 = INT8_MAX;
	uint16_t x904 = 116U;
	int32_t t151 = -14282172;

    t151 = (((x901*x902)-x903)/x904);

    if (t151 != -3) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x905 = 112U;
	uint8_t x906 = 3U;
	volatile int64_t x907 = -28271653772886LL;
	int8_t x908 = 7;

    t152 = (((x905*x906)-x907)/x908);

    if (t152 != 4038807681888LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x910 = INT32_MIN;
	volatile int8_t x911 = -1;
	uint64_t t153 = 430209980249LLU;

    t153 = (((x909*x910)-x911)/x912);

    if (t153 != 69207070738699091LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x913 = 0;
	volatile int16_t x914 = -1;
	static int64_t x915 = 242402LL;
	int32_t x916 = -12743;
	volatile int64_t t154 = 11054714LL;

    t154 = (((x913*x914)-x915)/x916);

    if (t154 != 19LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x917 = 3U;
	static int16_t x918 = INT16_MIN;
	uint16_t x919 = 1100U;
	int16_t x920 = INT16_MIN;
	volatile int32_t t155 = -35267487;

    t155 = (((x917*x918)-x919)/x920);

    if (t155 != 3) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x922 = 18U;
	int32_t x924 = 180;
	static volatile int32_t t156 = -19;

    t156 = (((x921*x922)-x923)/x924);

    if (t156 != 25) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint16_t x929 = UINT16_MAX;
	volatile int8_t x931 = INT8_MIN;
	volatile uint32_t x932 = UINT32_MAX;
	static volatile uint32_t t157 = 100175U;

    t157 = (((x929*x930)-x931)/x932);

    if (t157 != 0U) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x933 = UINT32_MAX;
	static uint64_t x935 = UINT64_MAX;
	int32_t x936 = INT32_MIN;
	uint64_t t158 = 15252337201277002LLU;

    t158 = (((x933*x934)-x935)/x936);

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x946 = -1;
	int8_t x947 = -1;
	volatile uint16_t x948 = 3U;
	int32_t t159 = -20859;

    t159 = (((x945*x946)-x947)/x948);

    if (t159 != -64) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x949 = INT8_MAX;
	uint32_t x950 = 66600538U;
	int32_t x951 = INT32_MAX;
	volatile uint32_t t160 = 72735U;

    t160 = (((x949*x950)-x951)/x952);

    if (t160 != 0U) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x953 = 0U;
	volatile int16_t x954 = INT16_MIN;
	int64_t x955 = 1381191953175465LL;
	static int16_t x956 = INT16_MIN;
	int64_t t161 = -30938045943LL;

    t161 = (((x953*x954)-x955)/x956);

    if (t161 != 42150633336LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint64_t x957 = UINT64_MAX;
	static int8_t x958 = INT8_MIN;
	int32_t x959 = INT32_MAX;
	static int64_t x960 = INT64_MAX;
	volatile uint64_t t162 = 6765550984149940310LLU;

    t162 = (((x957*x958)-x959)/x960);

    if (t162 != 1LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x965 = INT32_MIN;
	int64_t x966 = -3040254043LL;
	uint16_t x967 = 1U;
	int64_t x968 = -1LL;
	static volatile int64_t t163 = 723979458150LL;

    t163 = (((x965*x966)-x967)/x968);

    if (t163 != -6528895843108388863LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x977 = 106;
	int16_t x978 = INT16_MAX;
	volatile int64_t t164 = -1087314072294LL;

    t164 = (((x977*x978)-x979)/x980);

    if (t164 != -2147483648LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x981 = 4141089239LLU;
	int16_t x982 = INT16_MIN;
	uint64_t t165 = 4543721923079946LLU;

    t165 = (((x981*x982)-x983)/x984);

    if (t165 != 1095147354590LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x989 = 1;
	int64_t x990 = 3187723198733320LL;
	uint16_t x991 = UINT16_MAX;
	int16_t x992 = INT16_MIN;

    t166 = (((x989*x990)-x991)/x992);

    if (t166 != -97281591756LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x993 = 3U;
	int16_t x994 = -228;
	int8_t x995 = 2;
	uint16_t x996 = UINT16_MAX;
	volatile int32_t t167 = -98899;

    t167 = (((x993*x994)-x995)/x996);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x1001 = 0;
	int32_t x1003 = -1569385;
	static int32_t x1004 = -1;
	int32_t t168 = -528029472;

    t168 = (((x1001*x1002)-x1003)/x1004);

    if (t168 != -1569385) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x1005 = INT8_MIN;
	volatile uint8_t x1006 = 5U;
	volatile int16_t x1007 = -1;
	static int8_t x1008 = 1;
	volatile int32_t t169 = -6343649;

    t169 = (((x1005*x1006)-x1007)/x1008);

    if (t169 != -639) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x1010 = -5820LL;
	volatile int32_t x1011 = INT32_MIN;
	volatile int64_t x1012 = 55204071297LL;
	uint64_t t170 = 3018369264138277179LLU;

    t170 = (((x1009*x1010)-x1011)/x1012);

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x1017 = INT8_MIN;
	int64_t x1020 = -17LL;
	int64_t t171 = -55376129LL;

    t171 = (((x1017*x1018)-x1019)/x1020);

    if (t171 != 963LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x1021 = 240U;
	volatile int16_t x1022 = INT16_MIN;
	static volatile uint64_t x1023 = 3385589101LLU;
	uint16_t x1024 = UINT16_MAX;
	static uint64_t t172 = 26LLU;

    t172 = (((x1021*x1022)-x1023)/x1024);

    if (t172 != 13756LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x1025 = -178813385322139LL;
	int8_t x1026 = -1;
	uint64_t x1027 = UINT64_MAX;
	volatile uint8_t x1028 = 37U;
	volatile uint64_t t173 = 85LLU;

    t173 = (((x1025*x1026)-x1027)/x1028);

    if (t173 != 4832794197895LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x1029 = UINT16_MAX;
	static int16_t x1030 = -1;
	static int16_t x1031 = INT16_MIN;
	uint8_t x1032 = 23U;
	int32_t t174 = 436;

    t174 = (((x1029*x1030)-x1031)/x1032);

    if (t174 != -1424) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x1033 = INT8_MAX;
	volatile int8_t x1034 = INT8_MIN;
	static int64_t x1035 = 300918882146LL;
	volatile uint8_t x1036 = 6U;
	int64_t t175 = 1LL;

    t175 = (((x1033*x1034)-x1035)/x1036);

    if (t175 != -50153149733LL) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint64_t x1037 = 104781340234795859LLU;
	int16_t x1038 = 523;
	int16_t x1040 = INT16_MAX;
	volatile uint64_t t176 = 269884286LLU;

    t176 = (((x1037*x1038)-x1039)/x1040);

    if (t176 != 546499612273907LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x1041 = UINT16_MAX;
	int8_t x1043 = 3;
	int64_t x1044 = -1LL;

    t177 = (((x1041*x1042)-x1043)/x1044);

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x1046 = INT16_MAX;
	uint64_t x1047 = UINT64_MAX;
	volatile uint64_t t178 = 53099855LLU;

    t178 = (((x1045*x1046)-x1047)/x1048);

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x1053 = UINT8_MAX;
	static int8_t x1055 = 1;
	uint64_t x1056 = UINT64_MAX;
	volatile uint64_t t179 = 4LLU;

    t179 = (((x1053*x1054)-x1055)/x1056);

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x1057 = 4;
	int8_t x1058 = -15;
	int32_t x1059 = INT32_MIN;
	uint8_t x1060 = UINT8_MAX;
	volatile int32_t t180 = 1;

    t180 = (((x1057*x1058)-x1059)/x1060);

    if (t180 != 8421504) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x1065 = -1;
	int64_t x1066 = INT64_MAX;
	uint32_t x1068 = UINT32_MAX;
	static volatile int64_t t181 = 66104189LL;

    t181 = (((x1065*x1066)-x1067)/x1068);

    if (t181 != -2147483648LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x1069 = UINT32_MAX;
	uint16_t x1070 = 804U;
	int8_t x1071 = 1;
	volatile uint32_t x1072 = 49U;

    t182 = (((x1069*x1070)-x1071)/x1072);

    if (t182 != 87652377U) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x1081 = -1;
	static volatile int32_t x1082 = -75660;
	static uint64_t x1083 = 36666794LLU;
	volatile uint64_t t183 = 160588703162LLU;

    t183 = (((x1081*x1082)-x1083)/x1084);

    if (t183 != 18446744073672960482LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x1093 = -1;
	int64_t x1094 = -1LL;
	static uint32_t x1095 = UINT32_MAX;
	volatile uint64_t t184 = 61681LLU;

    t184 = (((x1093*x1094)-x1095)/x1096);

    if (t184 != 4464LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x1097 = 104U;
	int32_t x1098 = -1;

    t185 = (((x1097*x1098)-x1099)/x1100);

    if (t185 != 0U) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x1101 = 10U;
	int64_t x1102 = -1LL;
	static volatile int16_t x1103 = INT16_MIN;
	uint8_t x1104 = 119U;
	volatile int64_t t186 = 126153526911885685LL;

    t186 = (((x1101*x1102)-x1103)/x1104);

    if (t186 != 275LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x1105 = 33;
	uint32_t x1106 = 598U;
	static uint32_t x1107 = 1403U;
	int32_t x1108 = INT32_MIN;
	volatile uint32_t t187 = 229U;

    t187 = (((x1105*x1106)-x1107)/x1108);

    if (t187 != 0U) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint64_t x1110 = 67382529LLU;
	uint32_t x1111 = 1417U;
	volatile uint16_t x1112 = UINT16_MAX;
	uint64_t t188 = 38348112371499LLU;

    t188 = (((x1109*x1110)-x1111)/x1112);

    if (t188 != 7197LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x1113 = UINT32_MAX;
	static uint32_t x1114 = 508451723U;
	int32_t x1115 = 44804112;
	static volatile int64_t x1116 = 898080885886180LL;

    t189 = (((x1113*x1114)-x1115)/x1116);

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x1117 = 2180523963158349LL;
	int8_t x1118 = -1;
	uint8_t x1119 = 2U;
	volatile int16_t x1120 = 188;
	static volatile int64_t t190 = -7LL;

    t190 = (((x1117*x1118)-x1119)/x1120);

    if (t190 != -11598531718927LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x1121 = 39389;
	uint32_t x1122 = 4139482U;
	int16_t x1124 = INT16_MIN;
	volatile uint32_t t191 = 15462301U;

    t191 = (((x1121*x1122)-x1123)/x1124);

    if (t191 != 0U) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x1125 = INT32_MAX;
	uint32_t x1126 = UINT32_MAX;
	uint32_t x1128 = 2880464U;
	volatile uint64_t t192 = 29119964LLU;

    t192 = (((x1125*x1126)-x1127)/x1128);

    if (t192 != 6401489766024LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int64_t x1129 = INT64_MAX;
	uint64_t x1130 = 3713216661656417447LLU;
	int16_t x1131 = 253;
	static uint16_t x1132 = UINT16_MAX;
	volatile uint64_t t193 = 7LLU;

    t193 = (((x1129*x1130)-x1131)/x1132);

    if (t193 != 84079581524351LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x1133 = 798377913U;
	volatile int32_t x1135 = -1;
	int8_t x1136 = -36;
	volatile uint32_t t194 = 60U;

    t194 = (((x1133*x1134)-x1135)/x1136);

    if (t194 != 0U) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x1137 = INT32_MIN;
	static volatile int64_t x1138 = -216LL;
	uint8_t x1139 = 3U;
	int64_t x1140 = INT64_MAX;
	volatile int64_t t195 = 90922107837847922LL;

    t195 = (((x1137*x1138)-x1139)/x1140);

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint8_t x1141 = 1U;
	volatile int8_t x1143 = -14;
	int64_t x1144 = -6443LL;
	int64_t t196 = 3LL;

    t196 = (((x1141*x1142)-x1143)/x1144);

    if (t196 != 1431533763286477LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x1146 = INT32_MAX;
	uint16_t x1147 = 322U;
	int8_t x1148 = -1;
	static uint64_t t197 = 13804899040469LLU;

    t197 = (((x1145*x1146)-x1147)/x1148);

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x1149 = 1U;
	int32_t x1150 = 38777514;
	int64_t x1152 = INT64_MIN;
	int64_t t198 = -870LL;

    t198 = (((x1149*x1150)-x1151)/x1152);

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x1153 = INT32_MAX;
	volatile uint32_t x1154 = 669U;
	static volatile int8_t x1155 = INT8_MAX;
	uint32_t t199 = 0U;

    t199 = (((x1153*x1154)-x1155)/x1156);

    if (t199 != 0U) { NG(); } else { ; }
	
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

