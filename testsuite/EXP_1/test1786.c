
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

static int32_t x2 = INT32_MAX;
int64_t x7 = INT64_MAX;
static int32_t t2 = 5880;
volatile int16_t x22 = INT16_MIN;
volatile int32_t t6 = 2;
volatile int16_t x41 = -59;
uint8_t x45 = 42U;
volatile int16_t x50 = -1;
uint16_t x59 = 6U;
int32_t x60 = -2164;
volatile uint32_t x63 = 4173419U;
uint8_t x89 = 3U;
volatile int32_t t17 = -1;
int32_t t18 = 0;
int16_t x107 = INT16_MIN;
int64_t x114 = INT64_MIN;
static uint64_t x118 = 6526698354LLU;
static int64_t x120 = 16673990LL;
int32_t t22 = -16393771;
uint16_t x129 = 12216U;
static volatile int32_t x130 = 208741435;
uint8_t x132 = UINT8_MAX;
int64_t x133 = -31182LL;
int16_t x134 = 4;
int8_t x140 = INT8_MIN;
uint64_t x142 = 3333LLU;
int16_t x145 = -1;
uint8_t x152 = 15U;
static volatile int32_t t29 = 1;
volatile int32_t x159 = -786427675;
int16_t x174 = 10430;
int16_t x182 = INT16_MIN;
volatile int32_t t35 = -13;
uint64_t x195 = 1LLU;
volatile int8_t x199 = -1;
int64_t x205 = 0LL;
uint8_t x216 = UINT8_MAX;
static uint16_t x220 = 907U;
int32_t t44 = -176;
int32_t t45 = -510;
int64_t x233 = 173411442LL;
int16_t x234 = INT16_MIN;
uint16_t x247 = 13U;
static volatile int32_t t51 = 265755398;
static volatile uint32_t x255 = UINT32_MAX;
int8_t x256 = INT8_MAX;
uint16_t x260 = UINT16_MAX;
uint32_t x261 = 124761U;
int16_t x266 = -1;
uint64_t x267 = 181416936665LLU;
uint8_t x272 = 3U;
volatile int8_t x282 = -1;
static int32_t x299 = -1;
int64_t x305 = -1LL;
volatile int16_t x309 = INT16_MIN;
int64_t x318 = INT64_MIN;
int16_t x327 = 134;
int8_t x331 = INT8_MIN;
uint32_t x338 = 724179U;
uint8_t x343 = UINT8_MAX;
int64_t x348 = INT64_MIN;
int8_t x354 = -1;
static uint32_t x355 = 104733U;
volatile int32_t t75 = 545872530;
static uint32_t x359 = 320U;
volatile int8_t x361 = INT8_MIN;
static int64_t x363 = INT64_MAX;
uint64_t x376 = 503002532251LLU;
int32_t t80 = 109;
uint8_t x377 = UINT8_MAX;
static uint32_t x380 = UINT32_MAX;
uint16_t x381 = UINT16_MAX;
static int8_t x383 = INT8_MIN;
static uint64_t x386 = 4060661LLU;
int32_t x391 = -1;
volatile int32_t t84 = 512145;
int16_t x395 = INT16_MIN;
int32_t t85 = 161437;
int32_t x402 = 6025388;
static volatile int32_t t87 = -6019773;
uint16_t x415 = 148U;
int32_t x421 = INT32_MIN;
volatile int32_t t91 = -3;
int64_t x432 = -3393667821354765LL;
static volatile int32_t t95 = 17482566;
int16_t x447 = INT16_MAX;
volatile int32_t t97 = -2859387;
int8_t x449 = 36;
uint16_t x452 = 1320U;
int32_t t98 = -56018;
int64_t x455 = 1LL;
int32_t x472 = INT32_MAX;
uint16_t x473 = 9921U;
uint32_t x488 = 2439U;
uint8_t x491 = 12U;
volatile int32_t t104 = 207;
int16_t x502 = INT16_MIN;
static uint64_t x504 = UINT64_MAX;
volatile int32_t t105 = 461637245;
int32_t x521 = INT32_MIN;
int32_t x523 = INT32_MAX;
static volatile int16_t x524 = INT16_MAX;
uint16_t x525 = 3917U;
static uint16_t x526 = 3U;
static volatile int8_t x530 = INT8_MAX;
int32_t t110 = -5;
int16_t x538 = INT16_MIN;
static volatile int32_t t112 = -19;
int32_t x542 = INT32_MAX;
volatile int32_t t113 = 0;
static int8_t x560 = -1;
static int64_t x564 = INT64_MIN;
volatile int16_t x578 = INT16_MIN;
int32_t x579 = -1;
static int32_t x581 = INT32_MIN;
int64_t x594 = -1LL;
static uint16_t x597 = 691U;
int32_t x599 = -1;
int32_t t126 = 1046306;
volatile int32_t t127 = -961480295;
int64_t x608 = INT64_MIN;
int32_t t128 = 241;
int8_t x615 = 1;
int16_t x618 = INT16_MAX;
volatile int32_t t131 = 0;
uint8_t x634 = UINT8_MAX;
static volatile int16_t x636 = INT16_MIN;
int32_t t134 = -1;
static uint8_t x638 = 1U;
static volatile int32_t t135 = 105669;
static int32_t x648 = 1624;
int32_t t136 = -8;
static int16_t x649 = INT16_MIN;
int32_t x655 = 60;
int16_t x658 = INT16_MIN;
static uint8_t x659 = UINT8_MAX;
static int32_t x662 = INT32_MIN;
volatile int32_t t140 = 47716423;
volatile int32_t t141 = 922374;
int32_t x677 = -1;
volatile int32_t t143 = 394;
volatile int64_t x683 = 890033773LL;
int8_t x686 = INT8_MIN;
uint64_t x707 = UINT64_MAX;
int64_t x708 = -1LL;
static int32_t t150 = 2;
static int8_t x713 = -1;
volatile int32_t t151 = 1718477;
static volatile int16_t x721 = INT16_MAX;
static uint8_t x725 = 28U;
int16_t x726 = 0;
int64_t x727 = -1LL;
int32_t t154 = -3;
static uint16_t x736 = 72U;
int32_t t158 = 14379;
volatile int8_t x747 = 2;
volatile int8_t x755 = INT8_MAX;
static int32_t x765 = INT32_MIN;
static volatile int32_t t164 = -499698287;
uint32_t x776 = 2U;
int8_t x777 = INT8_MIN;
volatile int16_t x785 = INT16_MIN;
int32_t x790 = INT32_MIN;
int8_t x792 = INT8_MAX;
int32_t t169 = -11;
static int32_t x794 = INT32_MIN;
static int8_t x802 = -1;
int16_t x803 = 151;
int64_t x804 = INT64_MIN;
volatile int16_t x814 = -1;
static int32_t x815 = INT32_MAX;
int64_t x823 = INT64_MAX;
static volatile int32_t x841 = -27;
int16_t x842 = -16;
int64_t x848 = -1LL;
int8_t x863 = -5;
volatile int32_t t185 = 6523;
static uint32_t x869 = UINT32_MAX;
int32_t x871 = INT32_MAX;
int32_t t186 = -197;
int32_t x873 = -83965;
int64_t x874 = -9245291785LL;
static uint8_t x878 = UINT8_MAX;
int32_t x882 = 21;
uint64_t x894 = 808LLU;
static volatile int64_t x898 = -2894196LL;
int64_t x902 = INT64_MAX;
static uint64_t x907 = 69445562334281314LLU;
int32_t t198 = -3408;
int32_t x927 = -1;


void f0(void) {
    	uint64_t x1 = UINT64_MAX;
	int16_t x3 = -1;
	int16_t x4 = -16251;
	volatile int32_t t0 = 669078;

    t0 = (((x1<=x2)-x3)==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x5 = 0;
	uint64_t x6 = 294522214198718781LLU;
	static int64_t x8 = INT64_MAX;
	int32_t t1 = -1343094;

    t1 = (((x5<=x6)-x7)==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MAX;
	static int16_t x10 = -4;
	uint8_t x11 = 15U;
	volatile int8_t x12 = INT8_MAX;

    t2 = (((x9<=x10)-x11)==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	volatile uint32_t x14 = 1807037U;
	volatile int64_t x15 = -829392LL;
	uint32_t x16 = 548203U;
	int32_t t3 = 655;

    t3 = (((x13<=x14)-x15)==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x17 = 703LL;
	uint16_t x18 = UINT16_MAX;
	static uint8_t x19 = 47U;
	volatile int8_t x20 = INT8_MAX;
	static volatile int32_t t4 = 0;

    t4 = (((x17<=x18)-x19)==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = 3;
	uint8_t x23 = 39U;
	int8_t x24 = 41;
	volatile int32_t t5 = -124;

    t5 = (((x21<=x22)-x23)==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MAX;
	static int8_t x26 = 0;
	int16_t x27 = INT16_MIN;
	int8_t x28 = INT8_MAX;

    t6 = (((x25<=x26)-x27)==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = INT16_MAX;
	int8_t x30 = -35;
	static uint32_t x31 = 6868053U;
	uint64_t x32 = 37053319894LLU;
	static int32_t t7 = -3;

    t7 = (((x29<=x30)-x31)==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int64_t x42 = 532573303158225LL;
	uint8_t x43 = 1U;
	int32_t x44 = -1;
	int32_t t8 = -609;

    t8 = (((x41<=x42)-x43)==x44);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x46 = 104;
	int8_t x47 = 1;
	int32_t x48 = INT32_MAX;
	volatile int32_t t9 = 34945042;

    t9 = (((x45<=x46)-x47)==x48);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x49 = 57821;
	static uint64_t x51 = 357984LLU;
	int16_t x52 = -399;
	int32_t t10 = -111;

    t10 = (((x49<=x50)-x51)==x52);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x53 = 166;
	uint64_t x54 = UINT64_MAX;
	int16_t x55 = 3;
	static uint16_t x56 = 3716U;
	volatile int32_t t11 = 1;

    t11 = (((x53<=x54)-x55)==x56);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x57 = -1;
	volatile int16_t x58 = INT16_MAX;
	int32_t t12 = 306;

    t12 = (((x57<=x58)-x59)==x60);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x61 = INT32_MAX;
	uint32_t x62 = UINT32_MAX;
	uint8_t x64 = UINT8_MAX;
	int32_t t13 = -82756069;

    t13 = (((x61<=x62)-x63)==x64);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x65 = INT16_MAX;
	uint8_t x66 = UINT8_MAX;
	static volatile uint64_t x67 = UINT64_MAX;
	int8_t x68 = INT8_MAX;
	int32_t t14 = 5;

    t14 = (((x65<=x66)-x67)==x68);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x81 = 2;
	int8_t x82 = INT8_MIN;
	int8_t x83 = 2;
	int8_t x84 = 0;
	int32_t t15 = 1;

    t15 = (((x81<=x82)-x83)==x84);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x85 = -1;
	int16_t x86 = INT16_MAX;
	static int64_t x87 = -1LL;
	uint64_t x88 = 526424785864135087LLU;
	static volatile int32_t t16 = 3;

    t16 = (((x85<=x86)-x87)==x88);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint64_t x90 = 2LLU;
	volatile int16_t x91 = INT16_MIN;
	uint64_t x92 = UINT64_MAX;

    t17 = (((x89<=x90)-x91)==x92);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x97 = 169U;
	uint32_t x98 = 42U;
	static int8_t x99 = -1;
	uint32_t x100 = 4U;

    t18 = (((x97<=x98)-x99)==x100);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint8_t x105 = 14U;
	static int16_t x106 = -741;
	uint8_t x108 = 119U;
	volatile int32_t t19 = -217858845;

    t19 = (((x105<=x106)-x107)==x108);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint8_t x109 = UINT8_MAX;
	volatile int32_t x110 = INT32_MIN;
	int8_t x111 = INT8_MIN;
	int16_t x112 = 740;
	int32_t t20 = 7642419;

    t20 = (((x109<=x110)-x111)==x112);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint8_t x113 = 9U;
	static uint64_t x115 = UINT64_MAX;
	int64_t x116 = INT64_MAX;
	int32_t t21 = -5732737;

    t21 = (((x113<=x114)-x115)==x116);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x117 = INT16_MIN;
	int32_t x119 = -8240;

    t22 = (((x117<=x118)-x119)==x120);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x125 = -1;
	volatile uint32_t x126 = UINT32_MAX;
	static volatile int64_t x127 = INT64_MAX;
	uint16_t x128 = 3U;
	int32_t t23 = -10;

    t23 = (((x125<=x126)-x127)==x128);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x131 = INT64_MAX;
	volatile int32_t t24 = 16150480;

    t24 = (((x129<=x130)-x131)==x132);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x135 = -1;
	volatile int8_t x136 = INT8_MAX;
	volatile int32_t t25 = -3;

    t25 = (((x133<=x134)-x135)==x136);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x137 = INT16_MIN;
	int32_t x138 = INT32_MAX;
	int32_t x139 = -1;
	int32_t t26 = -4;

    t26 = (((x137<=x138)-x139)==x140);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x141 = 7678LL;
	static uint32_t x143 = 73857U;
	int64_t x144 = INT64_MIN;
	volatile int32_t t27 = -10479;

    t27 = (((x141<=x142)-x143)==x144);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x146 = -50;
	int8_t x147 = -1;
	int8_t x148 = INT8_MIN;
	int32_t t28 = 24085;

    t28 = (((x145<=x146)-x147)==x148);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x149 = -1;
	uint16_t x150 = 28U;
	int16_t x151 = INT16_MAX;

    t29 = (((x149<=x150)-x151)==x152);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x153 = 4U;
	int16_t x154 = INT16_MIN;
	volatile uint16_t x155 = 433U;
	int8_t x156 = INT8_MIN;
	int32_t t30 = -2857566;

    t30 = (((x153<=x154)-x155)==x156);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile uint16_t x157 = 1087U;
	volatile int64_t x158 = 1889153031691032LL;
	static int8_t x160 = INT8_MIN;
	volatile int32_t t31 = -14839044;

    t31 = (((x157<=x158)-x159)==x160);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x169 = 88U;
	uint64_t x170 = 29382283LLU;
	int64_t x171 = -1LL;
	static volatile int32_t x172 = INT32_MIN;
	volatile int32_t t32 = -15349411;

    t32 = (((x169<=x170)-x171)==x172);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x173 = -1LL;
	int16_t x175 = -1;
	static uint64_t x176 = 28702358095692LLU;
	volatile int32_t t33 = 0;

    t33 = (((x173<=x174)-x175)==x176);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x177 = INT8_MIN;
	int32_t x178 = INT32_MIN;
	int64_t x179 = -1LL;
	uint16_t x180 = 6715U;
	volatile int32_t t34 = -1337562;

    t34 = (((x177<=x178)-x179)==x180);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x181 = 1060255507133LL;
	int64_t x183 = -1LL;
	static int64_t x184 = INT64_MIN;

    t35 = (((x181<=x182)-x183)==x184);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x185 = INT64_MIN;
	uint64_t x186 = UINT64_MAX;
	volatile int16_t x187 = 5482;
	uint32_t x188 = 43U;
	volatile int32_t t36 = 14;

    t36 = (((x185<=x186)-x187)==x188);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x189 = -60077263;
	volatile uint32_t x190 = 6762061U;
	static int8_t x191 = INT8_MAX;
	volatile uint32_t x192 = 121093873U;
	volatile int32_t t37 = -1;

    t37 = (((x189<=x190)-x191)==x192);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x193 = INT32_MIN;
	int64_t x194 = -1LL;
	int64_t x196 = 294753975238LL;
	int32_t t38 = 7500;

    t38 = (((x193<=x194)-x195)==x196);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x197 = -1267;
	uint16_t x198 = 119U;
	uint64_t x200 = 53959LLU;
	int32_t t39 = 527369237;

    t39 = (((x197<=x198)-x199)==x200);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x201 = 815U;
	static int8_t x202 = INT8_MIN;
	int16_t x203 = INT16_MIN;
	int16_t x204 = -607;
	volatile int32_t t40 = 30469;

    t40 = (((x201<=x202)-x203)==x204);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint16_t x206 = 3U;
	uint16_t x207 = UINT16_MAX;
	uint16_t x208 = UINT16_MAX;
	int32_t t41 = -210418;

    t41 = (((x205<=x206)-x207)==x208);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint16_t x209 = 280U;
	int16_t x210 = -1;
	static int16_t x211 = INT16_MIN;
	int64_t x212 = INT64_MAX;
	volatile int32_t t42 = -106286;

    t42 = (((x209<=x210)-x211)==x212);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x213 = 440;
	uint64_t x214 = 8068526629070LLU;
	volatile uint32_t x215 = 95189999U;
	static volatile int32_t t43 = -2;

    t43 = (((x213<=x214)-x215)==x216);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x217 = 0;
	int16_t x218 = -1;
	static volatile uint32_t x219 = 21576U;

    t44 = (((x217<=x218)-x219)==x220);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x221 = INT64_MAX;
	uint8_t x222 = UINT8_MAX;
	static int8_t x223 = -7;
	uint64_t x224 = 3209306802581912571LLU;

    t45 = (((x221<=x222)-x223)==x224);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint16_t x229 = UINT16_MAX;
	uint64_t x230 = UINT64_MAX;
	int32_t x231 = -180;
	volatile int8_t x232 = -13;
	static int32_t t46 = -231333;

    t46 = (((x229<=x230)-x231)==x232);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint16_t x235 = UINT16_MAX;
	static int64_t x236 = INT64_MAX;
	static int32_t t47 = 133060289;

    t47 = (((x233<=x234)-x235)==x236);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x237 = 2359929235852706456LL;
	static int32_t x238 = INT32_MAX;
	volatile int16_t x239 = -1;
	uint64_t x240 = 97924534568867LLU;
	volatile int32_t t48 = -1;

    t48 = (((x237<=x238)-x239)==x240);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint8_t x241 = 61U;
	static int8_t x242 = INT8_MIN;
	volatile int16_t x243 = INT16_MAX;
	volatile int64_t x244 = -1LL;
	volatile int32_t t49 = 39;

    t49 = (((x241<=x242)-x243)==x244);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x245 = INT16_MIN;
	int32_t x246 = INT32_MIN;
	static int16_t x248 = -1;
	volatile int32_t t50 = 169909071;

    t50 = (((x245<=x246)-x247)==x248);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x249 = UINT32_MAX;
	int8_t x250 = 3;
	uint64_t x251 = 851017LLU;
	int16_t x252 = -1;

    t51 = (((x249<=x250)-x251)==x252);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x253 = 13;
	static int64_t x254 = INT64_MIN;
	volatile int32_t t52 = 21827574;

    t52 = (((x253<=x254)-x255)==x256);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x257 = -2;
	uint32_t x258 = UINT32_MAX;
	int16_t x259 = INT16_MIN;
	volatile int32_t t53 = 16694134;

    t53 = (((x257<=x258)-x259)==x260);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x262 = UINT64_MAX;
	uint32_t x263 = 18723U;
	volatile uint8_t x264 = UINT8_MAX;
	volatile int32_t t54 = 250007;

    t54 = (((x261<=x262)-x263)==x264);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x265 = 4U;
	uint32_t x268 = 1U;
	volatile int32_t t55 = -73;

    t55 = (((x265<=x266)-x267)==x268);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x269 = INT64_MIN;
	int16_t x270 = 383;
	static uint16_t x271 = 0U;
	static volatile int32_t t56 = -1015176522;

    t56 = (((x269<=x270)-x271)==x272);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x273 = INT8_MIN;
	uint8_t x274 = 96U;
	int16_t x275 = 3;
	int64_t x276 = INT64_MIN;
	int32_t t57 = -1220546;

    t57 = (((x273<=x274)-x275)==x276);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint32_t x281 = 2761072U;
	int64_t x283 = -413269180LL;
	int64_t x284 = INT64_MIN;
	static int32_t t58 = 105384;

    t58 = (((x281<=x282)-x283)==x284);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x285 = 321636U;
	uint32_t x286 = 27U;
	uint64_t x287 = 13961378LLU;
	uint16_t x288 = 30995U;
	int32_t t59 = -21;

    t59 = (((x285<=x286)-x287)==x288);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x289 = 36U;
	static volatile int32_t x290 = INT32_MIN;
	static int64_t x291 = -1563730606822813LL;
	volatile int8_t x292 = -1;
	static volatile int32_t t60 = 1340;

    t60 = (((x289<=x290)-x291)==x292);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x293 = 24840294420612741LL;
	uint64_t x294 = UINT64_MAX;
	int16_t x295 = -1;
	static int32_t x296 = -514384;
	static volatile int32_t t61 = -58;

    t61 = (((x293<=x294)-x295)==x296);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x297 = INT64_MIN;
	uint64_t x298 = 1153428LLU;
	volatile int64_t x300 = INT64_MIN;
	volatile int32_t t62 = 72332;

    t62 = (((x297<=x298)-x299)==x300);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x301 = -1;
	uint32_t x302 = UINT32_MAX;
	uint32_t x303 = 219U;
	int8_t x304 = 28;
	volatile int32_t t63 = -1608971;

    t63 = (((x301<=x302)-x303)==x304);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x306 = UINT8_MAX;
	int32_t x307 = INT32_MAX;
	uint16_t x308 = 1U;
	static volatile int32_t t64 = 515;

    t64 = (((x305<=x306)-x307)==x308);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x310 = 13U;
	static uint32_t x311 = UINT32_MAX;
	static uint64_t x312 = 1866415LLU;
	static volatile int32_t t65 = -750911416;

    t65 = (((x309<=x310)-x311)==x312);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x313 = INT64_MAX;
	int16_t x314 = INT16_MIN;
	uint32_t x315 = UINT32_MAX;
	uint8_t x316 = 53U;
	static int32_t t66 = -9;

    t66 = (((x313<=x314)-x315)==x316);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x317 = INT8_MIN;
	int16_t x319 = 1;
	uint8_t x320 = 1U;
	volatile int32_t t67 = -365;

    t67 = (((x317<=x318)-x319)==x320);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x321 = INT64_MAX;
	uint32_t x322 = 396U;
	volatile uint32_t x323 = 10U;
	int16_t x324 = INT16_MAX;
	static volatile int32_t t68 = -1627107;

    t68 = (((x321<=x322)-x323)==x324);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x325 = INT32_MIN;
	int8_t x326 = -1;
	int64_t x328 = INT64_MIN;
	int32_t t69 = -12;

    t69 = (((x325<=x326)-x327)==x328);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x329 = 1U;
	int64_t x330 = -1LL;
	static volatile uint16_t x332 = 202U;
	volatile int32_t t70 = 8896984;

    t70 = (((x329<=x330)-x331)==x332);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x333 = INT8_MIN;
	uint16_t x334 = 1605U;
	int16_t x335 = -1153;
	uint32_t x336 = 26184U;
	int32_t t71 = -57717;

    t71 = (((x333<=x334)-x335)==x336);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x337 = INT32_MAX;
	int8_t x339 = 43;
	uint64_t x340 = UINT64_MAX;
	volatile int32_t t72 = -1883815;

    t72 = (((x337<=x338)-x339)==x340);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint32_t x341 = 65369793U;
	uint32_t x342 = 1495U;
	int64_t x344 = -177LL;
	volatile int32_t t73 = 12361;

    t73 = (((x341<=x342)-x343)==x344);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x345 = 1U;
	volatile uint16_t x346 = 1834U;
	static int8_t x347 = INT8_MAX;
	int32_t t74 = 87159;

    t74 = (((x345<=x346)-x347)==x348);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x353 = 15U;
	int64_t x356 = INT64_MAX;

    t75 = (((x353<=x354)-x355)==x356);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x357 = 0;
	volatile uint32_t x358 = UINT32_MAX;
	int8_t x360 = 0;
	int32_t t76 = 35;

    t76 = (((x357<=x358)-x359)==x360);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x362 = INT32_MAX;
	int8_t x364 = INT8_MIN;
	static volatile int32_t t77 = 810;

    t77 = (((x361<=x362)-x363)==x364);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x365 = UINT64_MAX;
	volatile int64_t x366 = -590020564721LL;
	int64_t x367 = INT64_MAX;
	int64_t x368 = INT64_MAX;
	int32_t t78 = -3;

    t78 = (((x365<=x366)-x367)==x368);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x369 = 0;
	volatile int8_t x370 = -1;
	int8_t x371 = INT8_MIN;
	uint16_t x372 = 4690U;
	int32_t t79 = -708300194;

    t79 = (((x369<=x370)-x371)==x372);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint64_t x373 = UINT64_MAX;
	int32_t x374 = INT32_MIN;
	int32_t x375 = -1;

    t80 = (((x373<=x374)-x375)==x376);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x378 = INT8_MAX;
	uint8_t x379 = 2U;
	int32_t t81 = -870111;

    t81 = (((x377<=x378)-x379)==x380);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x382 = -1;
	static uint32_t x384 = UINT32_MAX;
	volatile int32_t t82 = 1;

    t82 = (((x381<=x382)-x383)==x384);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x385 = INT8_MIN;
	uint64_t x387 = 15649386100174096LLU;
	static uint64_t x388 = 31LLU;
	static volatile int32_t t83 = 8;

    t83 = (((x385<=x386)-x387)==x388);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x389 = -1;
	int16_t x390 = -166;
	static int32_t x392 = INT32_MIN;

    t84 = (((x389<=x390)-x391)==x392);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x393 = INT32_MIN;
	int8_t x394 = INT8_MAX;
	int8_t x396 = 36;

    t85 = (((x393<=x394)-x395)==x396);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x397 = INT16_MIN;
	uint64_t x398 = 65429102706869767LLU;
	int8_t x399 = -1;
	int64_t x400 = -10497109985872332LL;
	int32_t t86 = -15;

    t86 = (((x397<=x398)-x399)==x400);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x401 = -1;
	int8_t x403 = INT8_MIN;
	int32_t x404 = -493374;

    t87 = (((x401<=x402)-x403)==x404);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x409 = INT16_MIN;
	int64_t x410 = 224LL;
	static uint16_t x411 = 2U;
	int64_t x412 = -1LL;
	volatile int32_t t88 = -113352738;

    t88 = (((x409<=x410)-x411)==x412);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x413 = INT16_MAX;
	int64_t x414 = INT64_MIN;
	int32_t x416 = INT32_MIN;
	static volatile int32_t t89 = -2;

    t89 = (((x413<=x414)-x415)==x416);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x417 = 30;
	volatile int64_t x418 = INT64_MIN;
	static uint8_t x419 = 4U;
	uint16_t x420 = 3617U;
	volatile int32_t t90 = -1013298033;

    t90 = (((x417<=x418)-x419)==x420);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x422 = INT16_MAX;
	volatile int32_t x423 = 12126;
	int8_t x424 = INT8_MIN;

    t91 = (((x421<=x422)-x423)==x424);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x425 = INT32_MIN;
	volatile uint32_t x426 = 0U;
	volatile int16_t x427 = 22;
	int8_t x428 = 5;
	volatile int32_t t92 = 30;

    t92 = (((x425<=x426)-x427)==x428);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x429 = 49334607274LLU;
	uint8_t x430 = UINT8_MAX;
	static int64_t x431 = 3747156LL;
	int32_t t93 = 97889;

    t93 = (((x429<=x430)-x431)==x432);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x433 = 742U;
	int64_t x434 = 36875041LL;
	int64_t x435 = INT64_MAX;
	int32_t x436 = 7;
	volatile int32_t t94 = 17;

    t94 = (((x433<=x434)-x435)==x436);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x437 = 37;
	static int16_t x438 = 9841;
	int64_t x439 = -2206112791130895298LL;
	static int32_t x440 = -363;

    t95 = (((x437<=x438)-x439)==x440);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x441 = 30U;
	int8_t x442 = 0;
	int64_t x443 = -74LL;
	uint8_t x444 = UINT8_MAX;
	int32_t t96 = 170;

    t96 = (((x441<=x442)-x443)==x444);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x445 = 1;
	int64_t x446 = INT64_MAX;
	int8_t x448 = 6;

    t97 = (((x445<=x446)-x447)==x448);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x450 = UINT64_MAX;
	static uint64_t x451 = UINT64_MAX;

    t98 = (((x449<=x450)-x451)==x452);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x453 = 22733854U;
	static uint16_t x454 = 636U;
	static int16_t x456 = INT16_MIN;
	int32_t t99 = 87;

    t99 = (((x453<=x454)-x455)==x456);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x469 = INT8_MIN;
	int8_t x470 = -1;
	int8_t x471 = INT8_MIN;
	static int32_t t100 = 7433129;

    t100 = (((x469<=x470)-x471)==x472);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x474 = 1631278689U;
	int16_t x475 = INT16_MIN;
	static uint32_t x476 = 1U;
	volatile int32_t t101 = -1;

    t101 = (((x473<=x474)-x475)==x476);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x481 = INT16_MAX;
	int32_t x482 = -1;
	uint16_t x483 = 91U;
	int8_t x484 = -3;
	int32_t t102 = 538566;

    t102 = (((x481<=x482)-x483)==x484);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint8_t x485 = 4U;
	int16_t x486 = -646;
	static int16_t x487 = -1;
	int32_t t103 = -33164674;

    t103 = (((x485<=x486)-x487)==x488);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x489 = INT64_MIN;
	int64_t x490 = INT64_MAX;
	int32_t x492 = -1;

    t104 = (((x489<=x490)-x491)==x492);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x501 = UINT64_MAX;
	int8_t x503 = INT8_MIN;

    t105 = (((x501<=x502)-x503)==x504);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile uint32_t x509 = 9814118U;
	uint8_t x510 = UINT8_MAX;
	uint64_t x511 = 4153678957LLU;
	volatile int64_t x512 = 5514596188LL;
	volatile int32_t t106 = -156;

    t106 = (((x509<=x510)-x511)==x512);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x517 = INT8_MAX;
	int32_t x518 = -74876;
	int16_t x519 = 482;
	uint8_t x520 = 95U;
	volatile int32_t t107 = 148364004;

    t107 = (((x517<=x518)-x519)==x520);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint32_t x522 = 28U;
	static volatile int32_t t108 = 98;

    t108 = (((x521<=x522)-x523)==x524);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x527 = INT8_MAX;
	volatile int32_t x528 = INT32_MIN;
	int32_t t109 = -1361;

    t109 = (((x525<=x526)-x527)==x528);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x529 = 238646116797069LL;
	int8_t x531 = -21;
	int64_t x532 = INT64_MAX;

    t110 = (((x529<=x530)-x531)==x532);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x533 = INT32_MIN;
	int8_t x534 = -1;
	uint32_t x535 = 24298012U;
	static volatile int16_t x536 = -1;
	int32_t t111 = -67;

    t111 = (((x533<=x534)-x535)==x536);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint8_t x537 = 1U;
	int32_t x539 = INT32_MAX;
	uint16_t x540 = 25U;

    t112 = (((x537<=x538)-x539)==x540);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x541 = 74880469078014796LLU;
	volatile int8_t x543 = INT8_MAX;
	static uint32_t x544 = 267158969U;

    t113 = (((x541<=x542)-x543)==x544);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x545 = -49242;
	static int8_t x546 = INT8_MIN;
	uint32_t x547 = UINT32_MAX;
	int8_t x548 = -6;
	volatile int32_t t114 = -14884091;

    t114 = (((x545<=x546)-x547)==x548);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x549 = -1LL;
	int64_t x550 = 25070166254090427LL;
	int64_t x551 = -14496370LL;
	uint32_t x552 = UINT32_MAX;
	static volatile int32_t t115 = -4;

    t115 = (((x549<=x550)-x551)==x552);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x553 = 35;
	int64_t x554 = 4415LL;
	uint16_t x555 = 53U;
	int16_t x556 = 5;
	volatile int32_t t116 = 59975;

    t116 = (((x553<=x554)-x555)==x556);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x557 = INT16_MIN;
	static uint32_t x558 = UINT32_MAX;
	static volatile int64_t x559 = -2106882161387201LL;
	int32_t t117 = -1;

    t117 = (((x557<=x558)-x559)==x560);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x561 = 35297434;
	uint64_t x562 = UINT64_MAX;
	int16_t x563 = -1;
	volatile int32_t t118 = 3;

    t118 = (((x561<=x562)-x563)==x564);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x565 = 22888432577792579LLU;
	static int8_t x566 = INT8_MAX;
	int32_t x567 = -1;
	static uint16_t x568 = 7271U;
	volatile int32_t t119 = 7;

    t119 = (((x565<=x566)-x567)==x568);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x569 = -6;
	static int16_t x570 = -983;
	static volatile uint32_t x571 = 234U;
	int8_t x572 = INT8_MIN;
	int32_t t120 = -3278;

    t120 = (((x569<=x570)-x571)==x572);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x573 = INT16_MIN;
	int32_t x574 = -1;
	int8_t x575 = 2;
	static volatile uint8_t x576 = 0U;
	static int32_t t121 = 47;

    t121 = (((x573<=x574)-x575)==x576);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x577 = 479880899376LL;
	uint64_t x580 = UINT64_MAX;
	int32_t t122 = 127;

    t122 = (((x577<=x578)-x579)==x580);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint32_t x582 = 683206U;
	static volatile uint16_t x583 = 4U;
	volatile int16_t x584 = INT16_MIN;
	int32_t t123 = 245399;

    t123 = (((x581<=x582)-x583)==x584);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x585 = 65666LLU;
	int64_t x586 = 6722414LL;
	static int8_t x587 = INT8_MIN;
	volatile uint32_t x588 = 507U;
	volatile int32_t t124 = 7;

    t124 = (((x585<=x586)-x587)==x588);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x593 = INT8_MIN;
	volatile uint64_t x595 = 4748198446781057LLU;
	int64_t x596 = INT64_MAX;
	int32_t t125 = -152930081;

    t125 = (((x593<=x594)-x595)==x596);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x598 = UINT32_MAX;
	int8_t x600 = -1;

    t126 = (((x597<=x598)-x599)==x600);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int16_t x601 = -1;
	volatile uint32_t x602 = 813977U;
	volatile uint8_t x603 = 5U;
	int16_t x604 = INT16_MAX;

    t127 = (((x601<=x602)-x603)==x604);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x605 = 249LLU;
	int32_t x606 = -371;
	uint32_t x607 = 996U;

    t128 = (((x605<=x606)-x607)==x608);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x609 = INT8_MAX;
	static uint8_t x610 = 30U;
	static uint8_t x611 = 28U;
	int16_t x612 = INT16_MIN;
	int32_t t129 = -15;

    t129 = (((x609<=x610)-x611)==x612);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x613 = UINT64_MAX;
	int16_t x614 = -1;
	int8_t x616 = 61;
	static volatile int32_t t130 = 3;

    t130 = (((x613<=x614)-x615)==x616);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x617 = 862U;
	static int8_t x619 = 15;
	int16_t x620 = 1;

    t131 = (((x617<=x618)-x619)==x620);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x621 = 61425687LL;
	uint32_t x622 = UINT32_MAX;
	uint8_t x623 = 6U;
	static uint32_t x624 = UINT32_MAX;
	volatile int32_t t132 = -8868;

    t132 = (((x621<=x622)-x623)==x624);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x625 = -2188648434784442LL;
	static int32_t x626 = -1;
	uint8_t x627 = 1U;
	uint8_t x628 = 31U;
	int32_t t133 = -15099792;

    t133 = (((x625<=x626)-x627)==x628);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x633 = 10U;
	uint8_t x635 = 43U;

    t134 = (((x633<=x634)-x635)==x636);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x637 = 680LLU;
	int64_t x639 = INT64_MAX;
	int64_t x640 = INT64_MAX;

    t135 = (((x637<=x638)-x639)==x640);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x645 = 0;
	int8_t x646 = INT8_MIN;
	int32_t x647 = -2210;

    t136 = (((x645<=x646)-x647)==x648);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x650 = 1839;
	int64_t x651 = 2047636981459493LL;
	int32_t x652 = -5;
	static volatile int32_t t137 = -64677;

    t137 = (((x649<=x650)-x651)==x652);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x653 = -45;
	int32_t x654 = INT32_MIN;
	uint64_t x656 = 22625LLU;
	int32_t t138 = 5349105;

    t138 = (((x653<=x654)-x655)==x656);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x657 = INT8_MIN;
	int8_t x660 = INT8_MIN;
	volatile int32_t t139 = -929;

    t139 = (((x657<=x658)-x659)==x660);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x661 = INT16_MIN;
	volatile int8_t x663 = -8;
	uint8_t x664 = UINT8_MAX;

    t140 = (((x661<=x662)-x663)==x664);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x665 = INT8_MIN;
	int16_t x666 = -1;
	static int16_t x667 = INT16_MAX;
	uint64_t x668 = UINT64_MAX;

    t141 = (((x665<=x666)-x667)==x668);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x673 = -1LL;
	static int32_t x674 = 10;
	int16_t x675 = INT16_MAX;
	int16_t x676 = INT16_MIN;
	int32_t t142 = -8620;

    t142 = (((x673<=x674)-x675)==x676);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x678 = 1U;
	uint16_t x679 = UINT16_MAX;
	uint16_t x680 = 56U;

    t143 = (((x677<=x678)-x679)==x680);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x681 = -9;
	uint32_t x682 = 124854729U;
	static volatile uint8_t x684 = 61U;
	static volatile int32_t t144 = -14693;

    t144 = (((x681<=x682)-x683)==x684);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x685 = -1;
	volatile int16_t x687 = INT16_MIN;
	static uint8_t x688 = 12U;
	static volatile int32_t t145 = 6898236;

    t145 = (((x685<=x686)-x687)==x688);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x689 = 0U;
	static volatile uint16_t x690 = 3U;
	uint32_t x691 = 1U;
	volatile int16_t x692 = INT16_MIN;
	volatile int32_t t146 = 9;

    t146 = (((x689<=x690)-x691)==x692);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint64_t x693 = UINT64_MAX;
	int64_t x694 = -1250550225LL;
	int16_t x695 = -1;
	static uint64_t x696 = 8309031LLU;
	int32_t t147 = 0;

    t147 = (((x693<=x694)-x695)==x696);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x701 = INT32_MIN;
	int64_t x702 = -1LL;
	uint16_t x703 = 1U;
	int32_t x704 = -1;
	volatile int32_t t148 = 3646;

    t148 = (((x701<=x702)-x703)==x704);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x705 = 1640;
	int8_t x706 = INT8_MIN;
	volatile int32_t t149 = -22134229;

    t149 = (((x705<=x706)-x707)==x708);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x709 = -1;
	int64_t x710 = 784984886LL;
	int8_t x711 = 15;
	int8_t x712 = INT8_MIN;

    t150 = (((x709<=x710)-x711)==x712);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x714 = 2U;
	int32_t x715 = -1;
	int64_t x716 = 114084987085LL;

    t151 = (((x713<=x714)-x715)==x716);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x717 = -1LL;
	volatile int32_t x718 = -1;
	int8_t x719 = 1;
	uint32_t x720 = 5221863U;
	volatile int32_t t152 = 11;

    t152 = (((x717<=x718)-x719)==x720);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x722 = -1;
	int64_t x723 = INT64_MAX;
	static volatile int64_t x724 = 5821532LL;
	volatile int32_t t153 = -5;

    t153 = (((x721<=x722)-x723)==x724);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x728 = 12993993U;

    t154 = (((x725<=x726)-x727)==x728);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x729 = INT32_MIN;
	volatile int8_t x730 = INT8_MIN;
	uint16_t x731 = UINT16_MAX;
	int8_t x732 = INT8_MIN;
	volatile int32_t t155 = -3402;

    t155 = (((x729<=x730)-x731)==x732);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x733 = -1LL;
	int64_t x734 = -1LL;
	int64_t x735 = -1LL;
	int32_t t156 = 102737732;

    t156 = (((x733<=x734)-x735)==x736);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint64_t x737 = 49208LLU;
	int8_t x738 = INT8_MIN;
	static int32_t x739 = -63379;
	static uint8_t x740 = 19U;
	volatile int32_t t157 = -1;

    t157 = (((x737<=x738)-x739)==x740);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x741 = UINT64_MAX;
	volatile int16_t x742 = 109;
	static int16_t x743 = INT16_MIN;
	static int8_t x744 = INT8_MAX;

    t158 = (((x741<=x742)-x743)==x744);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x745 = -1;
	static int16_t x746 = INT16_MIN;
	int64_t x748 = 74LL;
	int32_t t159 = 898433121;

    t159 = (((x745<=x746)-x747)==x748);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x749 = UINT32_MAX;
	int16_t x750 = -1;
	static int64_t x751 = INT64_MAX;
	uint64_t x752 = UINT64_MAX;
	volatile int32_t t160 = -10534613;

    t160 = (((x749<=x750)-x751)==x752);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x753 = -1;
	int32_t x754 = -1269;
	int32_t x756 = -1;
	int32_t t161 = 180822767;

    t161 = (((x753<=x754)-x755)==x756);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x757 = 32454U;
	volatile int16_t x758 = -1;
	int32_t x759 = -1;
	int8_t x760 = -5;
	static volatile int32_t t162 = 61201277;

    t162 = (((x757<=x758)-x759)==x760);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x761 = 7U;
	volatile int32_t x762 = -1;
	uint16_t x763 = 2082U;
	static int16_t x764 = INT16_MAX;
	int32_t t163 = 6663640;

    t163 = (((x761<=x762)-x763)==x764);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x766 = 28200U;
	uint32_t x767 = 126041543U;
	uint32_t x768 = 3U;

    t164 = (((x765<=x766)-x767)==x768);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x769 = INT64_MAX;
	static uint64_t x770 = 911578592501369889LLU;
	uint8_t x771 = 14U;
	static int16_t x772 = -221;
	volatile int32_t t165 = -363989844;

    t165 = (((x769<=x770)-x771)==x772);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint16_t x773 = 699U;
	int16_t x774 = 2473;
	static volatile int64_t x775 = 1333LL;
	volatile int32_t t166 = 30;

    t166 = (((x773<=x774)-x775)==x776);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x778 = -12;
	uint32_t x779 = UINT32_MAX;
	uint32_t x780 = 26022U;
	volatile int32_t t167 = -207192895;

    t167 = (((x777<=x778)-x779)==x780);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x786 = INT8_MAX;
	static volatile uint64_t x787 = UINT64_MAX;
	uint32_t x788 = 25806694U;
	int32_t t168 = 1;

    t168 = (((x785<=x786)-x787)==x788);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x789 = 0U;
	int8_t x791 = INT8_MIN;

    t169 = (((x789<=x790)-x791)==x792);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x793 = -1;
	uint32_t x795 = UINT32_MAX;
	uint32_t x796 = 179757546U;
	int32_t t170 = -6698152;

    t170 = (((x793<=x794)-x795)==x796);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x801 = -1;
	static int32_t t171 = 3270479;

    t171 = (((x801<=x802)-x803)==x804);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x805 = -1;
	int64_t x806 = INT64_MIN;
	int8_t x807 = INT8_MIN;
	volatile uint8_t x808 = 34U;
	int32_t t172 = -44770044;

    t172 = (((x805<=x806)-x807)==x808);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint16_t x809 = 90U;
	uint32_t x810 = UINT32_MAX;
	static int16_t x811 = INT16_MIN;
	int64_t x812 = -133813124LL;
	volatile int32_t t173 = 8084220;

    t173 = (((x809<=x810)-x811)==x812);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint8_t x813 = 1U;
	static int64_t x816 = -1LL;
	volatile int32_t t174 = 1;

    t174 = (((x813<=x814)-x815)==x816);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x817 = 1U;
	int64_t x818 = INT64_MIN;
	int8_t x819 = INT8_MAX;
	int64_t x820 = INT64_MAX;
	volatile int32_t t175 = 319694546;

    t175 = (((x817<=x818)-x819)==x820);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x821 = 438389U;
	volatile int8_t x822 = -1;
	volatile int32_t x824 = -3;
	volatile int32_t t176 = 30751;

    t176 = (((x821<=x822)-x823)==x824);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x825 = 210224973781953LLU;
	uint16_t x826 = UINT16_MAX;
	int8_t x827 = INT8_MAX;
	uint64_t x828 = UINT64_MAX;
	volatile int32_t t177 = 10400852;

    t177 = (((x825<=x826)-x827)==x828);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x829 = INT8_MIN;
	int8_t x830 = INT8_MIN;
	static int64_t x831 = -3762138LL;
	volatile uint32_t x832 = UINT32_MAX;
	volatile int32_t t178 = -98879;

    t178 = (((x829<=x830)-x831)==x832);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x833 = -5;
	int64_t x834 = INT64_MAX;
	int8_t x835 = -20;
	int64_t x836 = -1LL;
	static volatile int32_t t179 = 46;

    t179 = (((x833<=x834)-x835)==x836);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x843 = INT16_MIN;
	int8_t x844 = -1;
	volatile int32_t t180 = 181;

    t180 = (((x841<=x842)-x843)==x844);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x845 = -266;
	int16_t x846 = -1;
	volatile int32_t x847 = -438592541;
	volatile int32_t t181 = -1686;

    t181 = (((x845<=x846)-x847)==x848);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x849 = 178193850335648352LLU;
	uint32_t x850 = 960U;
	static uint8_t x851 = 57U;
	volatile int8_t x852 = INT8_MAX;
	static volatile int32_t t182 = -274978;

    t182 = (((x849<=x850)-x851)==x852);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint64_t x853 = 196107LLU;
	uint64_t x854 = 49LLU;
	int8_t x855 = 14;
	static volatile int16_t x856 = INT16_MIN;
	volatile int32_t t183 = 10;

    t183 = (((x853<=x854)-x855)==x856);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x857 = INT64_MAX;
	int64_t x858 = INT64_MIN;
	int16_t x859 = INT16_MIN;
	int64_t x860 = INT64_MIN;
	int32_t t184 = 226;

    t184 = (((x857<=x858)-x859)==x860);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x861 = 81U;
	int32_t x862 = 33948756;
	int32_t x864 = INT32_MIN;

    t185 = (((x861<=x862)-x863)==x864);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x870 = INT64_MIN;
	uint8_t x872 = 1U;

    t186 = (((x869<=x870)-x871)==x872);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint16_t x875 = 55U;
	volatile uint16_t x876 = 2U;
	volatile int32_t t187 = -805;

    t187 = (((x873<=x874)-x875)==x876);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x877 = INT8_MAX;
	int8_t x879 = -1;
	int8_t x880 = -1;
	int32_t t188 = 0;

    t188 = (((x877<=x878)-x879)==x880);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint32_t x881 = 33184U;
	int64_t x883 = 46674459326967300LL;
	int8_t x884 = -18;
	static volatile int32_t t189 = -38876448;

    t189 = (((x881<=x882)-x883)==x884);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x889 = INT8_MIN;
	volatile int16_t x890 = 1;
	volatile uint16_t x891 = UINT16_MAX;
	uint8_t x892 = 3U;
	static volatile int32_t t190 = 108945078;

    t190 = (((x889<=x890)-x891)==x892);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x893 = 24U;
	int8_t x895 = 5;
	int32_t x896 = INT32_MIN;
	int32_t t191 = -105;

    t191 = (((x893<=x894)-x895)==x896);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x897 = 19203395LLU;
	uint16_t x899 = 5240U;
	static uint64_t x900 = 2077308497LLU;
	int32_t t192 = -12150;

    t192 = (((x897<=x898)-x899)==x900);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x901 = 1;
	uint32_t x903 = 559360988U;
	uint32_t x904 = 9630U;
	int32_t t193 = 6222892;

    t193 = (((x901<=x902)-x903)==x904);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x905 = UINT64_MAX;
	uint8_t x906 = 5U;
	int32_t x908 = INT32_MIN;
	int32_t t194 = -173310955;

    t194 = (((x905<=x906)-x907)==x908);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x909 = -13401;
	int16_t x910 = -1;
	uint8_t x911 = 28U;
	uint8_t x912 = UINT8_MAX;
	static int32_t t195 = 62;

    t195 = (((x909<=x910)-x911)==x912);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x913 = 45U;
	static int64_t x914 = INT64_MAX;
	int16_t x915 = -4;
	int16_t x916 = INT16_MIN;
	int32_t t196 = 50408;

    t196 = (((x913<=x914)-x915)==x916);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x917 = UINT32_MAX;
	int32_t x918 = -1;
	int64_t x919 = -769588LL;
	int16_t x920 = 90;
	volatile int32_t t197 = 0;

    t197 = (((x917<=x918)-x919)==x920);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x921 = 0U;
	int64_t x922 = INT64_MAX;
	int16_t x923 = INT16_MIN;
	static int32_t x924 = -1;

    t198 = (((x921<=x922)-x923)==x924);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint8_t x925 = UINT8_MAX;
	static uint32_t x926 = 841063827U;
	int32_t x928 = -1197;
	int32_t t199 = -5555122;

    t199 = (((x925<=x926)-x927)==x928);

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

