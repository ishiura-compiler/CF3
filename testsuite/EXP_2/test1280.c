
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

uint8_t x56 = 5U;
static volatile int32_t t1 = 0;
int8_t x104 = 11;
int64_t x109 = INT64_MAX;
volatile int32_t x110 = INT32_MIN;
int32_t x111 = INT32_MIN;
int64_t x166 = -1LL;
uint64_t x195 = 97285709970LLU;
volatile int8_t x214 = -39;
uint8_t x244 = 4U;
uint32_t x293 = 21U;
int8_t x333 = -35;
uint32_t x334 = UINT32_MAX;
volatile int32_t x335 = -7748174;
static int32_t x341 = INT32_MIN;
int16_t x410 = INT16_MAX;
static uint8_t x424 = 0U;
volatile int64_t x502 = INT64_MAX;
int64_t x508 = 5LL;
int32_t t17 = -130;
int8_t x516 = 0;
static int32_t t18 = -252;
int8_t x529 = INT8_MIN;
int16_t x621 = INT16_MAX;
int8_t x633 = INT8_MIN;
int8_t x698 = INT8_MIN;
int32_t x700 = 1;
volatile uint32_t x730 = 5738U;
uint32_t x779 = 2502551U;
int16_t x787 = INT16_MIN;
int16_t x806 = INT16_MIN;
int32_t x808 = 13;
static uint16_t x821 = 1U;
static int16_t x823 = INT16_MIN;
static int16_t x897 = -1;
int32_t x898 = INT32_MIN;
int32_t x946 = INT32_MIN;
uint32_t x948 = 8U;
uint16_t x977 = 3U;
int8_t x1008 = 0;
uint16_t x1046 = 3741U;
int32_t x1070 = -744338099;
volatile int32_t t39 = -4893165;
int8_t x1153 = -1;
int32_t t42 = 956;
static uint16_t x1298 = 222U;
static uint16_t x1317 = 8U;
int8_t x1320 = 0;
int16_t x1545 = INT16_MIN;
volatile int64_t x1553 = 1568102648566337636LL;
static volatile uint16_t x1654 = 37U;
static int64_t x1655 = INT64_MIN;
int8_t x1656 = 20;
uint16_t x1757 = 1U;
volatile int32_t t52 = -82246;
volatile int16_t x1823 = INT16_MIN;
volatile int64_t x1858 = 12448001924715226LL;
static volatile uint32_t x1860 = 11U;
int8_t x1996 = 4;
uint32_t x2059 = 3065U;
int8_t x2065 = INT8_MIN;
volatile uint16_t x2118 = 13U;
int32_t x2119 = INT32_MAX;
volatile int64_t x2125 = -189151LL;
uint16_t x2128 = 12U;
volatile uint8_t x2237 = 6U;
volatile int32_t t63 = -159062;
uint32_t x2242 = 50848U;
volatile int8_t x2244 = 3;
static uint8_t x2297 = 3U;
volatile int32_t t65 = 86533169;
volatile int32_t t66 = -2267;
uint32_t x2333 = 1690788210U;
static volatile uint64_t x2336 = 7LLU;
uint16_t x2388 = 3U;
volatile int64_t x2499 = -1LL;
uint32_t x2520 = 0U;
uint32_t x2529 = UINT32_MAX;
uint64_t x2531 = 1940094787339127LLU;
int16_t x2593 = INT16_MIN;
volatile uint32_t x2594 = 168379U;
uint8_t x2609 = 0U;
uint64_t x2810 = 184004LLU;
int32_t t81 = -1;
uint8_t x2842 = UINT8_MAX;
static uint16_t x2843 = 56U;
static uint64_t x2854 = UINT64_MAX;
int32_t t83 = -550;
uint64_t x2866 = UINT64_MAX;
uint8_t x2943 = 1U;
volatile int16_t x2975 = INT16_MAX;
volatile int32_t t89 = -5;
int64_t x3070 = -1266141708LL;
volatile int64_t x3106 = -131961LL;
static uint64_t x3111 = 3301761139014775837LLU;
uint16_t x3112 = 29U;
volatile int32_t x3181 = -1;
int64_t x3189 = INT64_MIN;
int16_t x3190 = -5194;
int32_t t96 = 19941;
int64_t x3235 = INT64_MAX;
int8_t x3236 = 0;
int32_t t98 = 110285276;
static int64_t x3358 = INT64_MAX;
int32_t x3360 = 3;
volatile int16_t x3377 = INT16_MIN;
volatile int16_t x3439 = INT16_MIN;
int64_t x3546 = INT64_MAX;
static int32_t x3548 = 26;
uint8_t x3591 = 3U;
volatile int16_t x3675 = INT16_MIN;
static int32_t x3685 = INT32_MAX;
int32_t x3703 = 990;
volatile int64_t x3805 = INT64_MIN;
static volatile int32_t t111 = -116518;
int64_t x3851 = INT64_MIN;
int16_t x3852 = 2;
static int8_t x3858 = INT8_MIN;
int32_t x3910 = -1;
volatile int8_t x3912 = 1;
int32_t t114 = -356109;
volatile uint8_t x3915 = 0U;
volatile uint8_t x3916 = 1U;
volatile int32_t t116 = -5987;
volatile int64_t x4021 = INT64_MAX;
uint8_t x4022 = 0U;
int32_t x4023 = INT32_MIN;
int32_t t120 = -43495;
int32_t x4065 = INT32_MAX;
uint64_t x4066 = UINT64_MAX;
volatile int32_t t121 = 92;
int64_t x4071 = INT64_MIN;
int32_t x4082 = INT32_MIN;
int16_t x4231 = INT16_MIN;
volatile int32_t t126 = -2185428;
static volatile int64_t x4273 = -276LL;
int8_t x4274 = -17;
int64_t x4278 = 13040200243LL;
static uint8_t x4279 = 0U;
int16_t x4297 = INT16_MIN;
static uint16_t x4299 = 71U;
static volatile int32_t t130 = -3;
int8_t x4325 = 4;
int32_t t131 = -1151005;
int32_t x4395 = INT32_MIN;
static int16_t x4411 = 23;
static int16_t x4412 = 0;
static uint64_t x4538 = 2513798004774LLU;
static uint16_t x4541 = 8U;
uint16_t x4543 = UINT16_MAX;
uint16_t x4564 = 5U;
int32_t x4675 = INT32_MAX;
int8_t x4678 = -1;
static uint8_t x4710 = 21U;
uint32_t x4777 = 119U;
int8_t x4779 = 2;
int64_t x4813 = -1LL;
volatile int32_t x4817 = -1;
static int64_t x4861 = INT64_MIN;
uint8_t x4928 = 3U;
volatile int32_t t159 = 501;
int32_t t161 = 37070;
volatile int64_t x5178 = INT64_MIN;
int32_t x5192 = 5;
uint16_t x5233 = 96U;
uint16_t x5269 = 63U;
uint16_t x5271 = 9181U;
int8_t x5310 = INT8_MAX;
volatile int8_t x5333 = -1;
static volatile uint32_t x5334 = 32168U;
int32_t x5393 = INT32_MIN;
volatile uint16_t x5399 = 2157U;
int32_t t170 = -145;
static uint32_t x5425 = 2U;
static int32_t t171 = 104;
uint32_t x5437 = UINT32_MAX;
int16_t x5438 = -130;
uint32_t x5509 = 9U;
volatile int8_t x5510 = INT8_MIN;
int32_t t175 = -68347;
uint16_t x5574 = 9U;
uint8_t x5576 = 30U;
static volatile int32_t t177 = 60;
int8_t x5579 = -40;
volatile int16_t x5611 = INT16_MIN;
int32_t t179 = -7;
int16_t x5665 = -12916;
static volatile int32_t t180 = 1;
uint8_t x5712 = 3U;
uint64_t x5725 = 5LLU;
int64_t x5726 = INT64_MAX;
uint8_t x5728 = 2U;
int8_t x5739 = -1;
int8_t x5740 = 1;
volatile int32_t x5751 = 146;
volatile int8_t x5752 = 1;
int32_t t186 = 581744983;
uint32_t x5787 = 305U;
int16_t x5826 = INT16_MAX;
uint8_t x5828 = 30U;
static int64_t x5874 = -37800032392334LL;
static int16_t x5905 = INT16_MAX;
int32_t t191 = -108931;
int16_t x5975 = INT16_MAX;
uint32_t x5978 = UINT32_MAX;
uint64_t x5996 = 0LLU;
static int16_t x6004 = 0;
int8_t x6081 = INT8_MIN;
static int16_t x6082 = 1;
int32_t t199 = -8146112;


void f0(void) {
    	uint32_t x41 = 32U;
	int16_t x42 = -1;
	static volatile int16_t x43 = 34;
	uint8_t x44 = 0U;
	int32_t t0 = 57;

    t0 = ((x41==(x42!=x43))<<x44);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x53 = 1125264443427549651LL;
	uint16_t x54 = 412U;
	int32_t x55 = -12;

    t1 = ((x53==(x54!=x55))<<x56);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x101 = -1LL;
	int64_t x102 = 8346639LL;
	uint32_t x103 = UINT32_MAX;
	volatile int32_t t2 = -13129;

    t2 = ((x101==(x102!=x103))<<x104);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x112 = 0U;
	int32_t t3 = -474539912;

    t3 = ((x109==(x110!=x111))<<x112);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x141 = 3044814;
	int16_t x142 = -4988;
	int8_t x143 = INT8_MAX;
	uint8_t x144 = 1U;
	volatile int32_t t4 = -1;

    t4 = ((x141==(x142!=x143))<<x144);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint8_t x165 = UINT8_MAX;
	static int16_t x167 = INT16_MIN;
	uint8_t x168 = 0U;
	int32_t t5 = 284520717;

    t5 = ((x165==(x166!=x167))<<x168);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x193 = 134;
	volatile int32_t x194 = -1;
	volatile uint64_t x196 = 2LLU;
	int32_t t6 = -2371;

    t6 = ((x193==(x194!=x195))<<x196);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x213 = UINT16_MAX;
	int16_t x215 = 6;
	volatile int8_t x216 = 1;
	volatile int32_t t7 = 0;

    t7 = ((x213==(x214!=x215))<<x216);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x241 = INT16_MIN;
	static volatile int8_t x242 = -1;
	int32_t x243 = INT32_MIN;
	volatile int32_t t8 = 30;

    t8 = ((x241==(x242!=x243))<<x244);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x294 = 1;
	volatile int16_t x295 = -451;
	uint32_t x296 = 25U;
	int32_t t9 = -12;

    t9 = ((x293==(x294!=x295))<<x296);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x336 = 0;
	volatile int32_t t10 = -48483;

    t10 = ((x333==(x334!=x335))<<x336);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x342 = UINT64_MAX;
	uint16_t x343 = 12U;
	uint8_t x344 = 9U;
	int32_t t11 = -45513630;

    t11 = ((x341==(x342!=x343))<<x344);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int32_t x409 = INT32_MIN;
	uint16_t x411 = 2U;
	uint8_t x412 = 12U;
	int32_t t12 = -6801944;

    t12 = ((x409==(x410!=x411))<<x412);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x421 = INT64_MIN;
	int8_t x422 = INT8_MAX;
	uint32_t x423 = 6246U;
	int32_t t13 = 410929;

    t13 = ((x421==(x422!=x423))<<x424);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x433 = INT16_MIN;
	static int32_t x434 = INT32_MIN;
	static int64_t x435 = -1000840880691943LL;
	volatile int8_t x436 = 8;
	int32_t t14 = 245797;

    t14 = ((x433==(x434!=x435))<<x436);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x449 = -1;
	int64_t x450 = INT64_MIN;
	uint32_t x451 = UINT32_MAX;
	volatile int32_t x452 = 1;
	int32_t t15 = -885075;

    t15 = ((x449==(x450!=x451))<<x452);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x501 = 1258;
	int64_t x503 = INT64_MIN;
	static uint8_t x504 = 3U;
	volatile int32_t t16 = 46921;

    t16 = ((x501==(x502!=x503))<<x504);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x505 = 0U;
	static volatile int32_t x506 = 2015251;
	int16_t x507 = -1;

    t17 = ((x505==(x506!=x507))<<x508);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x513 = INT32_MAX;
	static int32_t x514 = INT32_MIN;
	static volatile int16_t x515 = INT16_MIN;

    t18 = ((x513==(x514!=x515))<<x516);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint8_t x530 = 8U;
	static uint16_t x531 = 1462U;
	uint32_t x532 = 13U;
	static volatile int32_t t19 = -1723332;

    t19 = ((x529==(x530!=x531))<<x532);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x537 = INT16_MAX;
	volatile int8_t x538 = INT8_MAX;
	int8_t x539 = 1;
	uint16_t x540 = 14U;
	volatile int32_t t20 = -2;

    t20 = ((x537==(x538!=x539))<<x540);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x622 = INT16_MIN;
	static int8_t x623 = INT8_MIN;
	uint8_t x624 = 1U;
	int32_t t21 = 255519;

    t21 = ((x621==(x622!=x623))<<x624);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x634 = INT8_MIN;
	uint64_t x635 = 959633089534632LLU;
	uint8_t x636 = 2U;
	static volatile int32_t t22 = -88;

    t22 = ((x633==(x634!=x635))<<x636);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x697 = INT32_MAX;
	volatile int32_t x699 = -1;
	static volatile int32_t t23 = -9859191;

    t23 = ((x697==(x698!=x699))<<x700);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x709 = UINT16_MAX;
	static volatile int64_t x710 = INT64_MIN;
	int8_t x711 = INT8_MIN;
	static int64_t x712 = 0LL;
	int32_t t24 = -4885943;

    t24 = ((x709==(x710!=x711))<<x712);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x729 = INT32_MIN;
	int16_t x731 = -5696;
	static volatile uint16_t x732 = 2U;
	static volatile int32_t t25 = -157289623;

    t25 = ((x729==(x730!=x731))<<x732);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x777 = -1;
	static uint64_t x778 = 449630LLU;
	volatile uint64_t x780 = 2LLU;
	volatile int32_t t26 = 3444;

    t26 = ((x777==(x778!=x779))<<x780);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint64_t x785 = 44214319LLU;
	static int64_t x786 = -20LL;
	volatile uint32_t x788 = 0U;
	int32_t t27 = -46537;

    t27 = ((x785==(x786!=x787))<<x788);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x805 = UINT8_MAX;
	volatile uint16_t x807 = 5651U;
	int32_t t28 = 0;

    t28 = ((x805==(x806!=x807))<<x808);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x822 = INT16_MIN;
	uint32_t x824 = 27U;
	int32_t t29 = -291059;

    t29 = ((x821==(x822!=x823))<<x824);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x899 = -1;
	static int32_t x900 = 1;
	volatile int32_t t30 = -3;

    t30 = ((x897==(x898!=x899))<<x900);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x917 = 6954;
	volatile uint64_t x918 = 80700195873459LLU;
	int8_t x919 = -1;
	int64_t x920 = 26LL;
	volatile int32_t t31 = 108050295;

    t31 = ((x917==(x918!=x919))<<x920);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x945 = UINT8_MAX;
	volatile uint64_t x947 = 4136071626776020305LLU;
	volatile int32_t t32 = 280;

    t32 = ((x945==(x946!=x947))<<x948);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x978 = INT64_MIN;
	static volatile int8_t x979 = -1;
	uint8_t x980 = 1U;
	int32_t t33 = 3;

    t33 = ((x977==(x978!=x979))<<x980);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x1005 = INT32_MIN;
	uint32_t x1006 = 2973920U;
	volatile uint64_t x1007 = UINT64_MAX;
	int32_t t34 = -897434361;

    t34 = ((x1005==(x1006!=x1007))<<x1008);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x1037 = -100938;
	uint16_t x1038 = 374U;
	static int64_t x1039 = 285984453707453LL;
	uint8_t x1040 = 31U;
	volatile int32_t t35 = 42229830;

    t35 = ((x1037==(x1038!=x1039))<<x1040);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x1045 = INT64_MIN;
	int64_t x1047 = INT64_MIN;
	volatile int16_t x1048 = 6;
	volatile int32_t t36 = 0;

    t36 = ((x1045==(x1046!=x1047))<<x1048);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x1049 = UINT16_MAX;
	int8_t x1050 = 12;
	volatile int8_t x1051 = -55;
	int8_t x1052 = 1;
	int32_t t37 = 231293951;

    t37 = ((x1049==(x1050!=x1051))<<x1052);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x1069 = 183298795707206701LL;
	uint64_t x1071 = UINT64_MAX;
	uint64_t x1072 = 4LLU;
	volatile int32_t t38 = 32160377;

    t38 = ((x1069==(x1070!=x1071))<<x1072);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x1141 = INT16_MIN;
	int64_t x1142 = INT64_MAX;
	int64_t x1143 = INT64_MIN;
	uint8_t x1144 = 3U;

    t39 = ((x1141==(x1142!=x1143))<<x1144);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x1154 = 52941228120701220LLU;
	static int32_t x1155 = INT32_MIN;
	int8_t x1156 = 0;
	volatile int32_t t40 = 904960;

    t40 = ((x1153==(x1154!=x1155))<<x1156);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x1249 = INT32_MIN;
	static int16_t x1250 = INT16_MAX;
	uint16_t x1251 = UINT16_MAX;
	uint16_t x1252 = 1U;
	static volatile int32_t t41 = -682;

    t41 = ((x1249==(x1250!=x1251))<<x1252);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint32_t x1269 = 154212U;
	volatile uint8_t x1270 = 0U;
	int64_t x1271 = 59309LL;
	static volatile uint8_t x1272 = 0U;

    t42 = ((x1269==(x1270!=x1271))<<x1272);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile uint16_t x1297 = UINT16_MAX;
	uint64_t x1299 = 2114LLU;
	uint16_t x1300 = 3U;
	volatile int32_t t43 = -1790499;

    t43 = ((x1297==(x1298!=x1299))<<x1300);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint16_t x1309 = 740U;
	uint16_t x1310 = 0U;
	uint16_t x1311 = 1885U;
	static int8_t x1312 = 30;
	static volatile int32_t t44 = 57610;

    t44 = ((x1309==(x1310!=x1311))<<x1312);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x1318 = 12663U;
	int64_t x1319 = 57804209358936019LL;
	static int32_t t45 = -55026441;

    t45 = ((x1317==(x1318!=x1319))<<x1320);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x1417 = INT8_MIN;
	int64_t x1418 = -13820817168941786LL;
	static volatile int16_t x1419 = -1;
	uint8_t x1420 = 5U;
	volatile int32_t t46 = -457;

    t46 = ((x1417==(x1418!=x1419))<<x1420);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x1546 = 54012LLU;
	uint8_t x1547 = 102U;
	static int8_t x1548 = 27;
	volatile int32_t t47 = 951;

    t47 = ((x1545==(x1546!=x1547))<<x1548);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x1554 = 2596664LL;
	static uint8_t x1555 = 9U;
	uint8_t x1556 = 1U;
	volatile int32_t t48 = 25;

    t48 = ((x1553==(x1554!=x1555))<<x1556);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x1569 = INT64_MIN;
	int16_t x1570 = 0;
	int8_t x1571 = INT8_MIN;
	int16_t x1572 = 6;
	int32_t t49 = 22;

    t49 = ((x1569==(x1570!=x1571))<<x1572);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x1653 = 143215087234LL;
	int32_t t50 = -53;

    t50 = ((x1653==(x1654!=x1655))<<x1656);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x1693 = -6;
	int64_t x1694 = -3211838047858904526LL;
	uint16_t x1695 = 1718U;
	uint64_t x1696 = 17LLU;
	int32_t t51 = 15190;

    t51 = ((x1693==(x1694!=x1695))<<x1696);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t x1758 = -1;
	uint8_t x1759 = UINT8_MAX;
	static int8_t x1760 = 0;

    t52 = ((x1757==(x1758!=x1759))<<x1760);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x1821 = INT8_MAX;
	uint8_t x1822 = UINT8_MAX;
	int16_t x1824 = 0;
	static volatile int32_t t53 = -79628863;

    t53 = ((x1821==(x1822!=x1823))<<x1824);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x1857 = -1;
	int64_t x1859 = 3855LL;
	static volatile int32_t t54 = -43779;

    t54 = ((x1857==(x1858!=x1859))<<x1860);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x1993 = 9;
	int16_t x1994 = INT16_MAX;
	volatile uint8_t x1995 = 83U;
	static int32_t t55 = -320947184;

    t55 = ((x1993==(x1994!=x1995))<<x1996);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x2001 = UINT32_MAX;
	static int64_t x2002 = INT64_MAX;
	static int16_t x2003 = INT16_MIN;
	static uint8_t x2004 = 6U;
	volatile int32_t t56 = 29827;

    t56 = ((x2001==(x2002!=x2003))<<x2004);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x2057 = INT8_MAX;
	static int32_t x2058 = 38481967;
	uint8_t x2060 = 13U;
	static volatile int32_t t57 = -14107;

    t57 = ((x2057==(x2058!=x2059))<<x2060);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int16_t x2066 = INT16_MIN;
	int64_t x2067 = 126566763204888LL;
	static int16_t x2068 = 1;
	int32_t t58 = -1019837851;

    t58 = ((x2065==(x2066!=x2067))<<x2068);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x2117 = -24;
	uint16_t x2120 = 28U;
	int32_t t59 = 17948;

    t59 = ((x2117==(x2118!=x2119))<<x2120);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x2126 = 2745316;
	int32_t x2127 = -1;
	int32_t t60 = -738958;

    t60 = ((x2125==(x2126!=x2127))<<x2128);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int8_t x2209 = INT8_MIN;
	int32_t x2210 = 44517144;
	int64_t x2211 = INT64_MIN;
	static int32_t x2212 = 5;
	int32_t t61 = -143437;

    t61 = ((x2209==(x2210!=x2211))<<x2212);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x2221 = INT64_MAX;
	uint16_t x2222 = UINT16_MAX;
	volatile int32_t x2223 = INT32_MAX;
	uint8_t x2224 = 31U;
	static volatile int32_t t62 = -11873;

    t62 = ((x2221==(x2222!=x2223))<<x2224);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x2238 = 189487;
	int64_t x2239 = INT64_MIN;
	static volatile uint16_t x2240 = 17U;

    t63 = ((x2237==(x2238!=x2239))<<x2240);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile uint64_t x2241 = 2LLU;
	uint32_t x2243 = UINT32_MAX;
	int32_t t64 = -35291937;

    t64 = ((x2241==(x2242!=x2243))<<x2244);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x2298 = INT16_MIN;
	int8_t x2299 = INT8_MAX;
	uint64_t x2300 = 0LLU;

    t65 = ((x2297==(x2298!=x2299))<<x2300);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x2305 = -1;
	static uint8_t x2306 = 2U;
	uint32_t x2307 = 277914489U;
	uint8_t x2308 = 31U;

    t66 = ((x2305==(x2306!=x2307))<<x2308);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x2334 = 38522494U;
	uint32_t x2335 = 1922U;
	volatile int32_t t67 = -30881;

    t67 = ((x2333==(x2334!=x2335))<<x2336);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile uint16_t x2337 = 64U;
	uint32_t x2338 = 14165U;
	static int16_t x2339 = 99;
	uint8_t x2340 = 1U;
	int32_t t68 = 1395;

    t68 = ((x2337==(x2338!=x2339))<<x2340);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x2385 = -1;
	uint8_t x2386 = 7U;
	int32_t x2387 = -11995737;
	int32_t t69 = -113671;

    t69 = ((x2385==(x2386!=x2387))<<x2388);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x2389 = 12;
	uint32_t x2390 = 78723693U;
	int8_t x2391 = -1;
	uint8_t x2392 = 0U;
	static int32_t t70 = 0;

    t70 = ((x2389==(x2390!=x2391))<<x2392);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x2485 = -25587;
	int32_t x2486 = INT32_MIN;
	int16_t x2487 = INT16_MAX;
	uint16_t x2488 = 2U;
	volatile int32_t t71 = -46094937;

    t71 = ((x2485==(x2486!=x2487))<<x2488);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x2497 = -1;
	uint64_t x2498 = 4816616921LLU;
	static int16_t x2500 = 2;
	volatile int32_t t72 = -218;

    t72 = ((x2497==(x2498!=x2499))<<x2500);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x2517 = INT32_MIN;
	static volatile uint32_t x2518 = 32692U;
	static uint32_t x2519 = UINT32_MAX;
	int32_t t73 = -526406;

    t73 = ((x2517==(x2518!=x2519))<<x2520);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int64_t x2521 = -22555555207664514LL;
	int16_t x2522 = INT16_MAX;
	volatile uint16_t x2523 = 88U;
	int16_t x2524 = 7;
	int32_t t74 = -320;

    t74 = ((x2521==(x2522!=x2523))<<x2524);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x2530 = 90;
	uint8_t x2532 = 0U;
	int32_t t75 = 5763;

    t75 = ((x2529==(x2530!=x2531))<<x2532);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x2595 = INT8_MAX;
	int16_t x2596 = 1;
	int32_t t76 = -17960784;

    t76 = ((x2593==(x2594!=x2595))<<x2596);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x2610 = UINT64_MAX;
	volatile uint32_t x2611 = 99U;
	static int8_t x2612 = 0;
	int32_t t77 = -233413;

    t77 = ((x2609==(x2610!=x2611))<<x2612);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x2677 = 51U;
	uint32_t x2678 = 8U;
	int32_t x2679 = INT32_MIN;
	static int8_t x2680 = 0;
	static volatile int32_t t78 = -23;

    t78 = ((x2677==(x2678!=x2679))<<x2680);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x2701 = UINT64_MAX;
	int16_t x2702 = INT16_MIN;
	int8_t x2703 = 7;
	uint16_t x2704 = 1U;
	static volatile int32_t t79 = -27447;

    t79 = ((x2701==(x2702!=x2703))<<x2704);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x2809 = 230;
	int32_t x2811 = 323;
	uint16_t x2812 = 0U;
	volatile int32_t t80 = -23096;

    t80 = ((x2809==(x2810!=x2811))<<x2812);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x2833 = -1LL;
	volatile uint64_t x2834 = UINT64_MAX;
	int64_t x2835 = 772072282969528864LL;
	uint8_t x2836 = 14U;

    t81 = ((x2833==(x2834!=x2835))<<x2836);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint32_t x2841 = UINT32_MAX;
	uint64_t x2844 = 2LLU;
	volatile int32_t t82 = 56;

    t82 = ((x2841==(x2842!=x2843))<<x2844);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x2853 = 1;
	int8_t x2855 = INT8_MAX;
	int8_t x2856 = 0;

    t83 = ((x2853==(x2854!=x2855))<<x2856);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x2865 = -208249LL;
	int32_t x2867 = INT32_MAX;
	static uint32_t x2868 = 15U;
	int32_t t84 = 19;

    t84 = ((x2865==(x2866!=x2867))<<x2868);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x2925 = -1;
	uint64_t x2926 = 599LLU;
	static int8_t x2927 = -1;
	uint8_t x2928 = 1U;
	static int32_t t85 = 259412208;

    t85 = ((x2925==(x2926!=x2927))<<x2928);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x2941 = -22;
	static int8_t x2942 = -22;
	volatile uint8_t x2944 = 0U;
	int32_t t86 = 41;

    t86 = ((x2941==(x2942!=x2943))<<x2944);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint16_t x2953 = 5080U;
	uint8_t x2954 = 1U;
	uint8_t x2955 = 1U;
	int8_t x2956 = 0;
	int32_t t87 = -3474;

    t87 = ((x2953==(x2954!=x2955))<<x2956);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x2973 = -5LL;
	int8_t x2974 = INT8_MIN;
	static volatile uint8_t x2976 = 8U;
	int32_t t88 = 338500;

    t88 = ((x2973==(x2974!=x2975))<<x2976);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x3033 = INT8_MIN;
	int64_t x3034 = INT64_MIN;
	uint16_t x3035 = 3273U;
	volatile int32_t x3036 = 0;

    t89 = ((x3033==(x3034!=x3035))<<x3036);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x3069 = -1;
	int16_t x3071 = INT16_MAX;
	static uint8_t x3072 = 3U;
	volatile int32_t t90 = 110758;

    t90 = ((x3069==(x3070!=x3071))<<x3072);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x3105 = INT8_MIN;
	int64_t x3107 = INT64_MAX;
	uint8_t x3108 = 2U;
	int32_t t91 = 24198;

    t91 = ((x3105==(x3106!=x3107))<<x3108);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x3109 = 8857587LLU;
	int8_t x3110 = INT8_MIN;
	volatile int32_t t92 = 36836911;

    t92 = ((x3109==(x3110!=x3111))<<x3112);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x3125 = INT8_MIN;
	static int16_t x3126 = INT16_MIN;
	static volatile uint8_t x3127 = 1U;
	uint16_t x3128 = 15U;
	int32_t t93 = 64;

    t93 = ((x3125==(x3126!=x3127))<<x3128);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint64_t x3169 = UINT64_MAX;
	uint16_t x3170 = 2526U;
	uint16_t x3171 = 131U;
	volatile uint8_t x3172 = 2U;
	volatile int32_t t94 = -372;

    t94 = ((x3169==(x3170!=x3171))<<x3172);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x3182 = -6735292;
	static int32_t x3183 = 8528970;
	static volatile uint8_t x3184 = 0U;
	volatile int32_t t95 = 16119;

    t95 = ((x3181==(x3182!=x3183))<<x3184);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x3191 = UINT32_MAX;
	uint8_t x3192 = 2U;

    t96 = ((x3189==(x3190!=x3191))<<x3192);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x3233 = INT32_MAX;
	volatile uint16_t x3234 = 7U;
	int32_t t97 = 7628376;

    t97 = ((x3233==(x3234!=x3235))<<x3236);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x3309 = INT64_MAX;
	volatile int64_t x3310 = 473LL;
	int16_t x3311 = INT16_MAX;
	uint16_t x3312 = 1U;

    t98 = ((x3309==(x3310!=x3311))<<x3312);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x3357 = -1664678911801213LL;
	uint16_t x3359 = UINT16_MAX;
	volatile int32_t t99 = -27406;

    t99 = ((x3357==(x3358!=x3359))<<x3360);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x3378 = 7316U;
	volatile int16_t x3379 = INT16_MIN;
	uint8_t x3380 = 19U;
	int32_t t100 = 14886570;

    t100 = ((x3377==(x3378!=x3379))<<x3380);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x3425 = UINT8_MAX;
	int64_t x3426 = INT64_MAX;
	uint16_t x3427 = UINT16_MAX;
	static uint8_t x3428 = 1U;
	volatile int32_t t101 = 1;

    t101 = ((x3425==(x3426!=x3427))<<x3428);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x3437 = INT8_MAX;
	uint16_t x3438 = 84U;
	volatile uint8_t x3440 = 16U;
	volatile int32_t t102 = 22693543;

    t102 = ((x3437==(x3438!=x3439))<<x3440);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x3509 = -1LL;
	int8_t x3510 = -1;
	volatile int8_t x3511 = -46;
	static volatile uint8_t x3512 = 0U;
	volatile int32_t t103 = 7355105;

    t103 = ((x3509==(x3510!=x3511))<<x3512);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x3537 = INT64_MIN;
	static volatile uint8_t x3538 = 18U;
	static int64_t x3539 = -1LL;
	static int8_t x3540 = 0;
	volatile int32_t t104 = -1011524903;

    t104 = ((x3537==(x3538!=x3539))<<x3540);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x3545 = INT64_MIN;
	uint32_t x3547 = 1381565U;
	static volatile int32_t t105 = -3;

    t105 = ((x3545==(x3546!=x3547))<<x3548);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint32_t x3589 = 114846279U;
	int16_t x3590 = INT16_MIN;
	volatile uint8_t x3592 = 24U;
	int32_t t106 = -495744;

    t106 = ((x3589==(x3590!=x3591))<<x3592);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x3673 = UINT32_MAX;
	static uint32_t x3674 = 121690U;
	uint16_t x3676 = 27U;
	volatile int32_t t107 = -5057154;

    t107 = ((x3673==(x3674!=x3675))<<x3676);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x3686 = 4U;
	int8_t x3687 = -3;
	uint16_t x3688 = 15U;
	volatile int32_t t108 = -1;

    t108 = ((x3685==(x3686!=x3687))<<x3688);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x3701 = INT64_MIN;
	uint16_t x3702 = 10U;
	uint8_t x3704 = 0U;
	volatile int32_t t109 = 3984770;

    t109 = ((x3701==(x3702!=x3703))<<x3704);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x3789 = 1139205825781LL;
	int32_t x3790 = INT32_MIN;
	int16_t x3791 = INT16_MAX;
	uint8_t x3792 = 12U;
	volatile int32_t t110 = 141234;

    t110 = ((x3789==(x3790!=x3791))<<x3792);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint32_t x3806 = 1230213U;
	uint16_t x3807 = 13932U;
	volatile int8_t x3808 = 10;

    t111 = ((x3805==(x3806!=x3807))<<x3808);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x3849 = INT64_MIN;
	static int8_t x3850 = 19;
	static volatile int32_t t112 = 18485;

    t112 = ((x3849==(x3850!=x3851))<<x3852);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint64_t x3857 = UINT64_MAX;
	uint32_t x3859 = 31357U;
	uint16_t x3860 = 6U;
	static int32_t t113 = -32450;

    t113 = ((x3857==(x3858!=x3859))<<x3860);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x3909 = INT64_MIN;
	uint64_t x3911 = UINT64_MAX;

    t114 = ((x3909==(x3910!=x3911))<<x3912);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint64_t x3913 = 5864084484593LLU;
	uint16_t x3914 = 24698U;
	int32_t t115 = 5;

    t115 = ((x3913==(x3914!=x3915))<<x3916);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x3937 = INT8_MAX;
	int64_t x3938 = -1LL;
	volatile uint8_t x3939 = 118U;
	uint8_t x3940 = 1U;

    t116 = ((x3937==(x3938!=x3939))<<x3940);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x3973 = -16;
	int64_t x3974 = -1LL;
	uint64_t x3975 = 30369319054429905LLU;
	static uint8_t x3976 = 1U;
	static int32_t t117 = -603122;

    t117 = ((x3973==(x3974!=x3975))<<x3976);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x4024 = 27U;
	volatile int32_t t118 = 2;

    t118 = ((x4021==(x4022!=x4023))<<x4024);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint16_t x4029 = 8185U;
	int16_t x4030 = INT16_MAX;
	uint16_t x4031 = 5560U;
	int8_t x4032 = 1;
	static volatile int32_t t119 = 1;

    t119 = ((x4029==(x4030!=x4031))<<x4032);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x4041 = -1LL;
	int64_t x4042 = INT64_MIN;
	static int64_t x4043 = INT64_MAX;
	int8_t x4044 = 1;

    t120 = ((x4041==(x4042!=x4043))<<x4044);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint64_t x4067 = 1LLU;
	static uint16_t x4068 = 9U;

    t121 = ((x4065==(x4066!=x4067))<<x4068);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x4069 = INT8_MIN;
	uint32_t x4070 = 17U;
	volatile uint8_t x4072 = 13U;
	int32_t t122 = 86;

    t122 = ((x4069==(x4070!=x4071))<<x4072);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x4081 = 2U;
	int32_t x4083 = 15;
	static int16_t x4084 = 24;
	int32_t t123 = 352007702;

    t123 = ((x4081==(x4082!=x4083))<<x4084);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint8_t x4085 = UINT8_MAX;
	volatile int16_t x4086 = INT16_MIN;
	volatile int32_t x4087 = INT32_MIN;
	volatile uint16_t x4088 = 0U;
	int32_t t124 = -53858;

    t124 = ((x4085==(x4086!=x4087))<<x4088);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x4157 = 0U;
	int8_t x4158 = INT8_MIN;
	volatile int64_t x4159 = INT64_MIN;
	static uint16_t x4160 = 1U;
	int32_t t125 = 2426;

    t125 = ((x4157==(x4158!=x4159))<<x4160);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x4229 = 1997898624624907991LLU;
	uint16_t x4230 = 192U;
	volatile uint8_t x4232 = 0U;

    t126 = ((x4229==(x4230!=x4231))<<x4232);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x4275 = 455077105U;
	uint32_t x4276 = 2U;
	static volatile int32_t t127 = 59;

    t127 = ((x4273==(x4274!=x4275))<<x4276);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x4277 = -947550;
	static volatile int16_t x4280 = 2;
	volatile int32_t t128 = 19007;

    t128 = ((x4277==(x4278!=x4279))<<x4280);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x4289 = 47865700U;
	int8_t x4290 = INT8_MIN;
	int8_t x4291 = INT8_MIN;
	int8_t x4292 = 22;
	volatile int32_t t129 = 1;

    t129 = ((x4289==(x4290!=x4291))<<x4292);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x4298 = INT8_MAX;
	uint8_t x4300 = 16U;

    t130 = ((x4297==(x4298!=x4299))<<x4300);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x4326 = INT64_MIN;
	static uint32_t x4327 = 130716239U;
	volatile uint8_t x4328 = 1U;

    t131 = ((x4325==(x4326!=x4327))<<x4328);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x4393 = INT8_MIN;
	int64_t x4394 = INT64_MAX;
	int8_t x4396 = 1;
	int32_t t132 = 473544635;

    t132 = ((x4393==(x4394!=x4395))<<x4396);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x4409 = 22383;
	static int8_t x4410 = -1;
	int32_t t133 = -42248938;

    t133 = ((x4409==(x4410!=x4411))<<x4412);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x4473 = INT64_MIN;
	uint8_t x4474 = 11U;
	static int8_t x4475 = -33;
	int8_t x4476 = 7;
	volatile int32_t t134 = 1;

    t134 = ((x4473==(x4474!=x4475))<<x4476);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x4517 = -1;
	volatile uint16_t x4518 = UINT16_MAX;
	volatile int64_t x4519 = INT64_MIN;
	static int8_t x4520 = 21;
	static volatile int32_t t135 = 13310;

    t135 = ((x4517==(x4518!=x4519))<<x4520);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x4537 = -1;
	static uint64_t x4539 = 41961279751090LLU;
	uint8_t x4540 = 2U;
	volatile int32_t t136 = -3723;

    t136 = ((x4537==(x4538!=x4539))<<x4540);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x4542 = -1LL;
	static int8_t x4544 = 0;
	int32_t t137 = 54141;

    t137 = ((x4541==(x4542!=x4543))<<x4544);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint16_t x4553 = 12U;
	int8_t x4554 = INT8_MAX;
	int32_t x4555 = INT32_MIN;
	int8_t x4556 = 2;
	int32_t t138 = 1;

    t138 = ((x4553==(x4554!=x4555))<<x4556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x4561 = INT32_MIN;
	int64_t x4562 = 835585LL;
	int64_t x4563 = INT64_MIN;
	int32_t t139 = 116101239;

    t139 = ((x4561==(x4562!=x4563))<<x4564);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x4597 = 2327;
	int64_t x4598 = INT64_MIN;
	int64_t x4599 = 85363550LL;
	volatile uint8_t x4600 = 13U;
	static volatile int32_t t140 = 15;

    t140 = ((x4597==(x4598!=x4599))<<x4600);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x4641 = INT64_MIN;
	uint64_t x4642 = UINT64_MAX;
	volatile int8_t x4643 = -32;
	static int32_t x4644 = 7;
	int32_t t141 = -6600026;

    t141 = ((x4641==(x4642!=x4643))<<x4644);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x4661 = INT16_MAX;
	int64_t x4662 = INT64_MIN;
	uint8_t x4663 = 0U;
	uint64_t x4664 = 2LLU;
	int32_t t142 = 8726425;

    t142 = ((x4661==(x4662!=x4663))<<x4664);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile uint32_t x4669 = UINT32_MAX;
	int8_t x4670 = INT8_MIN;
	volatile int8_t x4671 = INT8_MIN;
	static volatile int8_t x4672 = 0;
	int32_t t143 = 100;

    t143 = ((x4669==(x4670!=x4671))<<x4672);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x4673 = INT16_MAX;
	uint16_t x4674 = 43U;
	uint64_t x4676 = 1LLU;
	int32_t t144 = 4;

    t144 = ((x4673==(x4674!=x4675))<<x4676);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint64_t x4677 = UINT64_MAX;
	uint16_t x4679 = UINT16_MAX;
	uint16_t x4680 = 1U;
	static volatile int32_t t145 = -1243793;

    t145 = ((x4677==(x4678!=x4679))<<x4680);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x4697 = -1;
	int32_t x4698 = -97;
	volatile int32_t x4699 = -1;
	int8_t x4700 = 0;
	static int32_t t146 = 29;

    t146 = ((x4697==(x4698!=x4699))<<x4700);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile uint8_t x4709 = 0U;
	static int32_t x4711 = -33938;
	static int8_t x4712 = 28;
	int32_t t147 = 1771611;

    t147 = ((x4709==(x4710!=x4711))<<x4712);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x4778 = INT8_MAX;
	int8_t x4780 = 0;
	int32_t t148 = -58813;

    t148 = ((x4777==(x4778!=x4779))<<x4780);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x4814 = INT32_MIN;
	static uint8_t x4815 = 12U;
	uint8_t x4816 = 16U;
	int32_t t149 = 987502;

    t149 = ((x4813==(x4814!=x4815))<<x4816);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint64_t x4818 = 45513089854056454LLU;
	int16_t x4819 = -1;
	int8_t x4820 = 1;
	volatile int32_t t150 = -26829502;

    t150 = ((x4817==(x4818!=x4819))<<x4820);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x4841 = -1;
	int32_t x4842 = INT32_MIN;
	int32_t x4843 = INT32_MAX;
	volatile uint16_t x4844 = 1U;
	static volatile int32_t t151 = 978809;

    t151 = ((x4841==(x4842!=x4843))<<x4844);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x4845 = 53U;
	int16_t x4846 = -5990;
	int16_t x4847 = 1;
	uint32_t x4848 = 1U;
	int32_t t152 = -372;

    t152 = ((x4845==(x4846!=x4847))<<x4848);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x4862 = -1;
	volatile int64_t x4863 = -1LL;
	static volatile uint8_t x4864 = 4U;
	int32_t t153 = 266;

    t153 = ((x4861==(x4862!=x4863))<<x4864);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x4885 = UINT32_MAX;
	uint16_t x4886 = 3463U;
	uint64_t x4887 = UINT64_MAX;
	uint8_t x4888 = 4U;
	static volatile int32_t t154 = -93;

    t154 = ((x4885==(x4886!=x4887))<<x4888);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x4925 = -2176338;
	int32_t x4926 = -95693331;
	int32_t x4927 = -22984;
	int32_t t155 = -963864590;

    t155 = ((x4925==(x4926!=x4927))<<x4928);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x4949 = INT64_MIN;
	int32_t x4950 = INT32_MIN;
	volatile int16_t x4951 = INT16_MIN;
	static uint8_t x4952 = 0U;
	volatile int32_t t156 = -974364816;

    t156 = ((x4949==(x4950!=x4951))<<x4952);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x4957 = 266LLU;
	static int32_t x4958 = -72751;
	int64_t x4959 = 49593362LL;
	int8_t x4960 = 3;
	int32_t t157 = 207;

    t157 = ((x4957==(x4958!=x4959))<<x4960);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x5013 = -2;
	static int8_t x5014 = 3;
	volatile int32_t x5015 = -486706;
	uint8_t x5016 = 8U;
	int32_t t158 = -808149158;

    t158 = ((x5013==(x5014!=x5015))<<x5016);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x5033 = 38981617LLU;
	static int32_t x5034 = INT32_MAX;
	static uint32_t x5035 = 1U;
	uint8_t x5036 = 2U;

    t159 = ((x5033==(x5034!=x5035))<<x5036);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x5037 = -11;
	int64_t x5038 = -1LL;
	int16_t x5039 = -1;
	uint8_t x5040 = 7U;
	int32_t t160 = -598803;

    t160 = ((x5037==(x5038!=x5039))<<x5040);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x5045 = INT32_MIN;
	int16_t x5046 = 1;
	volatile int16_t x5047 = INT16_MIN;
	uint8_t x5048 = 0U;

    t161 = ((x5045==(x5046!=x5047))<<x5048);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x5165 = -1LL;
	int64_t x5166 = INT64_MIN;
	int64_t x5167 = INT64_MAX;
	uint8_t x5168 = 0U;
	int32_t t162 = -3;

    t162 = ((x5165==(x5166!=x5167))<<x5168);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x5177 = -1;
	int16_t x5179 = INT16_MAX;
	int8_t x5180 = 0;
	volatile int32_t t163 = -7923764;

    t163 = ((x5177==(x5178!=x5179))<<x5180);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x5189 = 25236645U;
	uint64_t x5190 = 183090639742354134LLU;
	int8_t x5191 = INT8_MIN;
	int32_t t164 = 17932703;

    t164 = ((x5189==(x5190!=x5191))<<x5192);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint8_t x5234 = UINT8_MAX;
	int64_t x5235 = 19326703750726LL;
	volatile uint8_t x5236 = 16U;
	int32_t t165 = 1621778;

    t165 = ((x5233==(x5234!=x5235))<<x5236);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x5270 = INT64_MAX;
	uint32_t x5272 = 10U;
	int32_t t166 = -4;

    t166 = ((x5269==(x5270!=x5271))<<x5272);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x5309 = 0;
	int64_t x5311 = INT64_MIN;
	volatile uint8_t x5312 = 2U;
	volatile int32_t t167 = -303230652;

    t167 = ((x5309==(x5310!=x5311))<<x5312);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x5335 = INT32_MAX;
	static uint16_t x5336 = 0U;
	volatile int32_t t168 = 41430682;

    t168 = ((x5333==(x5334!=x5335))<<x5336);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x5394 = INT8_MIN;
	volatile int32_t x5395 = INT32_MIN;
	uint8_t x5396 = 0U;
	int32_t t169 = 2559;

    t169 = ((x5393==(x5394!=x5395))<<x5396);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x5397 = INT32_MIN;
	static int16_t x5398 = -100;
	uint8_t x5400 = 2U;

    t170 = ((x5397==(x5398!=x5399))<<x5400);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x5426 = 1;
	int64_t x5427 = 215811545684LL;
	uint8_t x5428 = 7U;

    t171 = ((x5425==(x5426!=x5427))<<x5428);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x5433 = 63U;
	int32_t x5434 = -1786363;
	uint8_t x5435 = UINT8_MAX;
	int8_t x5436 = 1;
	static int32_t t172 = 0;

    t172 = ((x5433==(x5434!=x5435))<<x5436);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x5439 = INT32_MIN;
	int8_t x5440 = 0;
	volatile int32_t t173 = -201;

    t173 = ((x5437==(x5438!=x5439))<<x5440);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x5511 = 735691LLU;
	volatile uint16_t x5512 = 3U;
	volatile int32_t t174 = 2962425;

    t174 = ((x5509==(x5510!=x5511))<<x5512);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x5521 = 275299U;
	int16_t x5522 = INT16_MIN;
	static int64_t x5523 = -49LL;
	static volatile int32_t x5524 = 16;

    t175 = ((x5521==(x5522!=x5523))<<x5524);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x5549 = -13;
	int32_t x5550 = INT32_MIN;
	static uint8_t x5551 = 3U;
	static uint32_t x5552 = 0U;
	volatile int32_t t176 = -7270059;

    t176 = ((x5549==(x5550!=x5551))<<x5552);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint16_t x5573 = 11407U;
	int32_t x5575 = INT32_MIN;

    t177 = ((x5573==(x5574!=x5575))<<x5576);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x5577 = UINT64_MAX;
	int32_t x5578 = INT32_MIN;
	uint16_t x5580 = 5U;
	int32_t t178 = 312034;

    t178 = ((x5577==(x5578!=x5579))<<x5580);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x5609 = 12528644LLU;
	int16_t x5610 = -7;
	uint8_t x5612 = 1U;

    t179 = ((x5609==(x5610!=x5611))<<x5612);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x5666 = 8567;
	uint64_t x5667 = 1LLU;
	int8_t x5668 = 19;

    t180 = ((x5665==(x5666!=x5667))<<x5668);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x5669 = INT8_MIN;
	int16_t x5670 = INT16_MIN;
	static int16_t x5671 = -441;
	static int8_t x5672 = 1;
	int32_t t181 = -503;

    t181 = ((x5669==(x5670!=x5671))<<x5672);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x5673 = 6722180755385LLU;
	int32_t x5674 = -1;
	uint16_t x5675 = 75U;
	static int8_t x5676 = 9;
	int32_t t182 = 103952;

    t182 = ((x5673==(x5674!=x5675))<<x5676);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint8_t x5709 = 111U;
	int64_t x5710 = -1LL;
	uint8_t x5711 = UINT8_MAX;
	static volatile int32_t t183 = 138796967;

    t183 = ((x5709==(x5710!=x5711))<<x5712);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint64_t x5727 = 39088LLU;
	volatile int32_t t184 = 0;

    t184 = ((x5725==(x5726!=x5727))<<x5728);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x5737 = 34207LLU;
	int32_t x5738 = -1;
	volatile int32_t t185 = 4829165;

    t185 = ((x5737==(x5738!=x5739))<<x5740);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x5749 = INT8_MAX;
	volatile uint64_t x5750 = UINT64_MAX;

    t186 = ((x5749==(x5750!=x5751))<<x5752);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint16_t x5785 = 0U;
	static uint8_t x5786 = UINT8_MAX;
	static int16_t x5788 = 1;
	int32_t t187 = 1192;

    t187 = ((x5785==(x5786!=x5787))<<x5788);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x5825 = INT8_MAX;
	uint8_t x5827 = 75U;
	static volatile int32_t t188 = 7310358;

    t188 = ((x5825==(x5826!=x5827))<<x5828);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x5873 = INT8_MIN;
	int16_t x5875 = -1;
	static uint16_t x5876 = 3U;
	int32_t t189 = 366;

    t189 = ((x5873==(x5874!=x5875))<<x5876);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x5906 = -1;
	static uint32_t x5907 = UINT32_MAX;
	uint32_t x5908 = 1U;
	static volatile int32_t t190 = -33603;

    t190 = ((x5905==(x5906!=x5907))<<x5908);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x5969 = 0;
	static uint64_t x5970 = 14255LLU;
	int32_t x5971 = INT32_MIN;
	uint8_t x5972 = 24U;

    t191 = ((x5969==(x5970!=x5971))<<x5972);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x5973 = 80;
	int8_t x5974 = INT8_MIN;
	static uint16_t x5976 = 0U;
	volatile int32_t t192 = -132721172;

    t192 = ((x5973==(x5974!=x5975))<<x5976);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x5977 = UINT64_MAX;
	volatile int16_t x5979 = INT16_MIN;
	uint8_t x5980 = 0U;
	volatile int32_t t193 = 15;

    t193 = ((x5977==(x5978!=x5979))<<x5980);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x5985 = 641;
	volatile int32_t x5986 = 4082;
	int32_t x5987 = INT32_MAX;
	static uint8_t x5988 = 0U;
	int32_t t194 = -3958383;

    t194 = ((x5985==(x5986!=x5987))<<x5988);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x5993 = INT16_MIN;
	volatile uint32_t x5994 = 1743157430U;
	volatile int64_t x5995 = INT64_MIN;
	volatile int32_t t195 = 0;

    t195 = ((x5993==(x5994!=x5995))<<x5996);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x6001 = -1;
	volatile int64_t x6002 = -1LL;
	uint16_t x6003 = 9U;
	int32_t t196 = -558134878;

    t196 = ((x6001==(x6002!=x6003))<<x6004);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x6029 = INT64_MIN;
	static int64_t x6030 = INT64_MAX;
	static uint16_t x6031 = 578U;
	uint8_t x6032 = 20U;
	int32_t t197 = 7787;

    t197 = ((x6029==(x6030!=x6031))<<x6032);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x6061 = INT16_MIN;
	static volatile uint64_t x6062 = 7352LLU;
	int32_t x6063 = 535491327;
	static int8_t x6064 = 2;
	volatile int32_t t198 = -101;

    t198 = ((x6061==(x6062!=x6063))<<x6064);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x6083 = 5684U;
	int8_t x6084 = 0;

    t199 = ((x6081==(x6082!=x6083))<<x6084);

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

