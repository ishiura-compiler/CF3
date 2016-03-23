
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

static volatile int32_t x9 = INT32_MIN;
int8_t x19 = 9;
uint64_t x22 = 7LLU;
volatile uint64_t t5 = 927422LLU;
int8_t x41 = -44;
int64_t x105 = INT64_MAX;
int32_t x109 = 431037581;
int16_t x113 = INT16_MIN;
volatile int64_t x125 = 710LL;
int64_t x128 = INT64_MIN;
int32_t x142 = 29220983;
uint32_t t20 = 27U;
uint8_t x157 = 54U;
static volatile int32_t t21 = 1952707;
volatile int8_t x163 = INT8_MAX;
volatile int32_t t22 = -2770742;
volatile int16_t x169 = -5;
uint64_t x171 = 439286831001424LLU;
static volatile int8_t x181 = INT8_MAX;
uint8_t x182 = 0U;
volatile int32_t t25 = -2;
uint8_t x196 = UINT8_MAX;
uint64_t x204 = UINT64_MAX;
int32_t t27 = 859315;
volatile int32_t x215 = INT32_MAX;
int32_t t29 = -1;
volatile uint32_t t30 = 503U;
uint16_t x227 = UINT16_MAX;
uint16_t x228 = 15U;
int32_t x229 = INT32_MIN;
static int8_t x231 = INT8_MIN;
volatile uint64_t t32 = 495580669836261LLU;
int8_t x234 = 13;
int16_t x270 = INT16_MAX;
volatile int64_t t37 = -10LL;
uint16_t x273 = 10219U;
static int16_t x275 = INT16_MIN;
uint32_t x288 = 7U;
static int32_t x289 = 0;
uint8_t x292 = UINT8_MAX;
uint64_t x295 = 9318850000307833LLU;
uint64_t x296 = 7994416924614618LLU;
volatile int8_t x298 = 51;
int8_t x301 = -1;
int16_t x307 = INT16_MIN;
volatile uint32_t x313 = UINT32_MAX;
uint64_t x315 = 3556390827410682LLU;
volatile int8_t x338 = INT8_MAX;
volatile int32_t x351 = -1;
static uint32_t x370 = 5U;
int8_t x400 = -1;
int16_t x411 = 7;
static uint8_t x424 = 6U;
volatile int32_t t59 = -9;
int64_t x433 = INT64_MIN;
uint8_t x436 = UINT8_MAX;
int64_t x441 = INT64_MIN;
static int16_t x453 = 1828;
int16_t x457 = 969;
volatile uint64_t x459 = 823369LLU;
int32_t x463 = -1;
uint64_t x464 = 12485LLU;
uint16_t x466 = 925U;
uint16_t x468 = 345U;
int64_t x469 = -1LL;
int32_t x470 = INT32_MAX;
static uint16_t x479 = UINT16_MAX;
static volatile int32_t t70 = -6840576;
static uint16_t x500 = 2U;
static int8_t x502 = INT8_MAX;
int32_t x503 = INT32_MIN;
static int32_t t73 = -36237019;
uint32_t x539 = 1450U;
int64_t x540 = 22LL;
uint32_t x550 = UINT32_MAX;
static volatile uint32_t t81 = UINT32_MAX;
uint32_t x554 = 4U;
int64_t x579 = INT64_MIN;
int64_t x583 = 77757818356LL;
int16_t x584 = INT16_MIN;
static uint8_t x589 = 2U;
volatile int16_t x606 = 0;
volatile int64_t t93 = -174403995LL;
int32_t x662 = 72982;
int64_t x663 = 41422640508469LL;
volatile int32_t t95 = -39851547;
volatile int8_t x679 = -17;
int8_t x681 = -28;
int8_t x684 = INT8_MIN;
uint8_t x693 = 1U;
uint64_t x694 = 698155097318LLU;
static int16_t x703 = -46;
static int16_t x707 = INT16_MIN;
static int32_t x711 = -13359;
static int16_t x716 = -1;
static uint64_t x720 = 50LLU;
static uint32_t x725 = 704249021U;
static uint32_t t106 = 4768768U;
volatile uint32_t t107 = UINT32_MAX;
static uint8_t x782 = UINT8_MAX;
int32_t x803 = INT32_MIN;
int64_t x827 = INT64_MIN;
uint64_t t113 = UINT64_MAX;
uint32_t x849 = 39837U;
volatile uint16_t x865 = UINT16_MAX;
volatile uint64_t x868 = UINT64_MAX;
int32_t t118 = -986351539;
int32_t t119 = -119;
int8_t x875 = INT8_MIN;
int32_t x887 = INT32_MIN;
int8_t x895 = 37;
uint32_t x898 = UINT32_MAX;
uint16_t x899 = 7297U;
int32_t t125 = -19496;
static uint32_t x913 = UINT32_MAX;
int32_t x939 = -1;
int32_t x942 = 489;
int8_t x944 = 0;
int8_t x946 = 1;
int16_t x948 = INT16_MIN;
int32_t t131 = -408584439;
volatile int16_t x950 = INT16_MAX;
static int8_t x951 = INT8_MIN;
volatile int32_t t132 = -10493312;
int8_t x961 = INT8_MIN;
volatile int32_t t133 = 14911;
int32_t x973 = INT32_MAX;
uint8_t x982 = 94U;
uint32_t x984 = UINT32_MAX;
uint16_t x989 = UINT16_MAX;
static int32_t x992 = 10310;
uint64_t x994 = 244604394567LLU;
volatile uint16_t x995 = UINT16_MAX;
volatile uint64_t t138 = 13595LLU;
uint32_t t139 = UINT32_MAX;
int8_t x1014 = 57;
int64_t t142 = -29622068106LL;
volatile uint64_t x1054 = UINT64_MAX;
uint64_t x1062 = UINT64_MAX;
int8_t x1070 = 51;
uint8_t x1075 = UINT8_MAX;
volatile int32_t x1081 = -46;
static volatile uint64_t x1085 = UINT64_MAX;
volatile uint64_t t148 = UINT64_MAX;
int16_t x1092 = INT16_MIN;
uint8_t x1094 = 21U;
int32_t t151 = -83063885;
uint64_t x1114 = 296432290153111582LLU;
int8_t x1117 = 2;
uint16_t x1118 = 27679U;
static int32_t x1126 = INT32_MAX;
int8_t x1127 = INT8_MIN;
volatile int8_t x1137 = INT8_MAX;
volatile int32_t t157 = 2;
volatile uint8_t x1161 = UINT8_MAX;
uint8_t x1168 = 3U;
int32_t x1169 = 375877370;
uint8_t x1170 = 88U;
uint8_t x1180 = 2U;
static uint64_t x1184 = 11577776LLU;
volatile int32_t x1189 = INT32_MAX;
uint8_t x1192 = 25U;
uint32_t x1198 = 22701U;
int32_t x1210 = INT32_MAX;
int32_t x1215 = INT32_MAX;
int32_t x1216 = INT32_MIN;
static uint16_t x1219 = 723U;
volatile uint8_t x1230 = 3U;
int32_t x1240 = 49705056;
int16_t x1245 = INT16_MIN;
static volatile uint32_t x1258 = UINT32_MAX;
volatile uint32_t t176 = UINT32_MAX;
uint16_t x1266 = UINT16_MAX;
static uint8_t x1285 = 118U;
int32_t t179 = -91360;
int32_t x1307 = 0;
uint16_t x1309 = 360U;
volatile uint32_t t182 = UINT32_MAX;
uint16_t x1338 = UINT16_MAX;
uint16_t x1339 = 31190U;
uint64_t x1341 = UINT64_MAX;
uint8_t x1343 = 118U;
volatile uint16_t x1347 = UINT16_MAX;
uint64_t x1380 = UINT64_MAX;
static int32_t t188 = -2821348;
uint16_t x1381 = 20028U;
uint32_t x1383 = UINT32_MAX;
int64_t x1390 = INT64_MAX;
static int32_t x1391 = -1;
int16_t x1412 = INT16_MIN;
int8_t x1415 = 1;
uint32_t x1416 = UINT32_MAX;
volatile int64_t t193 = 27215LL;
uint64_t x1421 = 125LLU;
int16_t x1423 = -988;
uint64_t t194 = 110641466738093537LLU;
volatile uint64_t t195 = 1620648829100791749LLU;
static volatile int64_t t197 = INT64_MAX;
uint64_t x1464 = UINT64_MAX;
int32_t t198 = 15655195;


void f0(void) {
    	int64_t x1 = 9LL;
	uint16_t x2 = UINT16_MAX;
	int32_t x3 = INT32_MIN;
	int16_t x4 = INT16_MAX;
	static volatile int64_t t0 = -75981994951014330LL;

    t0 = (x1|(x2>>(x3!=x4)));

    if (t0 != 32767LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MIN;
	static int16_t x6 = 1;
	uint64_t x7 = 623251LLU;
	int32_t x8 = INT32_MIN;
	int64_t t1 = INT64_MIN;

    t1 = (x5|(x6>>(x7!=x8)));

    if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint32_t x10 = 373U;
	int16_t x11 = 2053;
	uint32_t x12 = 30563641U;
	static volatile uint32_t t2 = 9U;

    t2 = (x9|(x10>>(x11!=x12)));

    if (t2 != 2147483834U) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = 19;
	int16_t x14 = 14058;
	static uint16_t x15 = UINT16_MAX;
	int8_t x16 = -1;
	volatile int32_t t3 = 22873923;

    t3 = (x13|(x14>>(x15!=x16)));

    if (t3 != 7031) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MIN;
	uint16_t x18 = UINT16_MAX;
	static volatile int32_t x20 = INT32_MIN;
	int32_t t4 = 0;

    t4 = (x17|(x18>>(x19!=x20)));

    if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = UINT16_MAX;
	uint16_t x23 = UINT16_MAX;
	int32_t x24 = INT32_MAX;

    t5 = (x21|(x22>>(x23!=x24)));

    if (t5 != 65535LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x29 = INT32_MIN;
	volatile uint32_t x30 = 264915303U;
	int32_t x31 = -1;
	static int16_t x32 = INT16_MIN;
	uint32_t t6 = 7U;

    t6 = (x29|(x30>>(x31!=x32)));

    if (t6 != 2279941299U) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint64_t x33 = 1600573992040180818LLU;
	uint64_t x34 = UINT64_MAX;
	uint16_t x35 = UINT16_MAX;
	int8_t x36 = 1;
	volatile uint64_t t7 = 1LLU;

    t7 = (x33|(x34>>(x35!=x36)));

    if (t7 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x37 = INT16_MIN;
	int64_t x38 = 31181980LL;
	int8_t x39 = INT8_MAX;
	uint64_t x40 = UINT64_MAX;
	volatile int64_t t8 = 36LL;

    t8 = (x37|(x38>>(x39!=x40)));

    if (t8 != -6578LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x42 = 54169602096184994LLU;
	int8_t x43 = INT8_MIN;
	int16_t x44 = -450;
	uint64_t t9 = 10236085750829LLU;

    t9 = (x41|(x42>>(x43!=x44)));

    if (t9 != 18446744073709551573LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint32_t x53 = UINT32_MAX;
	volatile uint32_t x54 = 17054946U;
	uint16_t x55 = 65U;
	uint64_t x56 = UINT64_MAX;
	volatile uint32_t t10 = UINT32_MAX;

    t10 = (x53|(x54>>(x55!=x56)));

    if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x69 = 1;
	uint8_t x70 = UINT8_MAX;
	static uint8_t x71 = 114U;
	int8_t x72 = 22;
	volatile int32_t t11 = -911977226;

    t11 = (x69|(x70>>(x71!=x72)));

    if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x81 = INT8_MIN;
	volatile uint64_t x82 = UINT64_MAX;
	int8_t x83 = 0;
	uint64_t x84 = 34155977010427LLU;
	volatile uint64_t t12 = UINT64_MAX;

    t12 = (x81|(x82>>(x83!=x84)));

    if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x89 = 0U;
	volatile uint16_t x90 = 1962U;
	uint8_t x91 = 106U;
	static int16_t x92 = -71;
	int32_t t13 = -4239894;

    t13 = (x89|(x90>>(x91!=x92)));

    if (t13 != 981) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x106 = 10896U;
	uint32_t x107 = UINT32_MAX;
	static int64_t x108 = INT64_MIN;
	int64_t t14 = INT64_MAX;

    t14 = (x105|(x106>>(x107!=x108)));

    if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x110 = UINT64_MAX;
	static volatile int16_t x111 = -10209;
	int16_t x112 = INT16_MIN;
	volatile uint64_t t15 = 8455LLU;

    t15 = (x109|(x110>>(x111!=x112)));

    if (t15 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x114 = 19070073;
	volatile int64_t x115 = -1LL;
	int64_t x116 = -1LL;
	int32_t t16 = 443;

    t16 = (x113|(x114>>(x115!=x116)));

    if (t16 != -903) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint64_t x126 = UINT64_MAX;
	int32_t x127 = INT32_MAX;
	volatile uint64_t t17 = 21511750544LLU;

    t17 = (x125|(x126>>(x127!=x128)));

    if (t17 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x129 = INT64_MIN;
	int64_t x130 = INT64_MAX;
	int64_t x131 = INT64_MAX;
	int32_t x132 = 30456940;
	int64_t t18 = 1LL;

    t18 = (x129|(x130>>(x131!=x132)));

    if (t18 != -4611686018427387905LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x141 = INT8_MIN;
	uint16_t x143 = 6756U;
	int8_t x144 = -1;
	volatile int32_t t19 = 1;

    t19 = (x141|(x142>>(x143!=x144)));

    if (t19 != -69) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x145 = UINT8_MAX;
	uint32_t x146 = 74861683U;
	int8_t x147 = -1;
	volatile int32_t x148 = 1400701;

    t20 = (x145|(x146>>(x147!=x148)));

    if (t20 != 37431039U) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x158 = 1;
	int8_t x159 = INT8_MIN;
	int16_t x160 = -1;

    t21 = (x157|(x158>>(x159!=x160)));

    if (t21 != 54) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x161 = UINT8_MAX;
	uint16_t x162 = 1U;
	int32_t x164 = INT32_MIN;

    t22 = (x161|(x162>>(x163!=x164)));

    if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint16_t x170 = UINT16_MAX;
	int16_t x172 = -1;
	int32_t t23 = -354242;

    t23 = (x169|(x170>>(x171!=x172)));

    if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x173 = INT16_MAX;
	static volatile uint16_t x174 = UINT16_MAX;
	uint8_t x175 = UINT8_MAX;
	static int64_t x176 = INT64_MAX;
	static int32_t t24 = 659516;

    t24 = (x173|(x174>>(x175!=x176)));

    if (t24 != 32767) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x183 = -9;
	static int8_t x184 = -55;

    t25 = (x181|(x182>>(x183!=x184)));

    if (t25 != 127) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x193 = INT16_MIN;
	volatile uint8_t x194 = 7U;
	int64_t x195 = -1LL;
	int32_t t26 = -872275899;

    t26 = (x193|(x194>>(x195!=x196)));

    if (t26 != -32765) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x201 = UINT8_MAX;
	static int32_t x202 = 488;
	static int16_t x203 = -6804;

    t27 = (x201|(x202>>(x203!=x204)));

    if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x205 = -10;
	uint64_t x206 = 13LLU;
	uint64_t x207 = UINT64_MAX;
	volatile int16_t x208 = -1;
	volatile uint64_t t28 = UINT64_MAX;

    t28 = (x205|(x206>>(x207!=x208)));

    if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x213 = INT8_MAX;
	volatile uint8_t x214 = 1U;
	int32_t x216 = 119038883;

    t29 = (x213|(x214>>(x215!=x216)));

    if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x221 = INT8_MIN;
	uint32_t x222 = 2869757U;
	static int16_t x223 = -1;
	uint16_t x224 = UINT16_MAX;

    t30 = (x221|(x222>>(x223!=x224)));

    if (t30 != 4294967294U) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x225 = INT8_MIN;
	volatile uint64_t x226 = 433602LLU;
	static uint64_t t31 = 435952907956LLU;

    t31 = (x225|(x226>>(x227!=x228)));

    if (t31 != 18446744073709551585LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x230 = 3529LLU;
	uint64_t x232 = UINT64_MAX;

    t32 = (x229|(x230>>(x231!=x232)));

    if (t32 != 18446744071562069732LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x233 = -456;
	int64_t x235 = INT64_MIN;
	static int8_t x236 = -1;
	int32_t t33 = 971082;

    t33 = (x233|(x234>>(x235!=x236)));

    if (t33 != -450) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint16_t x245 = UINT16_MAX;
	uint8_t x246 = 6U;
	static int32_t x247 = 1;
	int64_t x248 = -1LL;
	volatile int32_t t34 = -3;

    t34 = (x245|(x246>>(x247!=x248)));

    if (t34 != 65535) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x249 = INT32_MIN;
	static volatile int32_t x250 = INT32_MAX;
	static int32_t x251 = INT32_MAX;
	uint64_t x252 = 68606967141508080LLU;
	volatile int32_t t35 = 14;

    t35 = (x249|(x250>>(x251!=x252)));

    if (t35 != -1073741825) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x257 = -61;
	static uint16_t x258 = 1867U;
	uint64_t x259 = 2LLU;
	int8_t x260 = INT8_MIN;
	volatile int32_t t36 = 940516;

    t36 = (x257|(x258>>(x259!=x260)));

    if (t36 != -25) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x269 = 456511047094LL;
	volatile int16_t x271 = INT16_MIN;
	uint32_t x272 = 11U;

    t37 = (x269|(x270>>(x271!=x272)));

    if (t37 != 456511062015LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint8_t x274 = 0U;
	int32_t x276 = INT32_MIN;
	volatile int32_t t38 = -55505221;

    t38 = (x273|(x274>>(x275!=x276)));

    if (t38 != 10219) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x277 = -14985LL;
	volatile int8_t x278 = 3;
	int16_t x279 = INT16_MIN;
	int8_t x280 = INT8_MAX;
	static volatile int64_t t39 = -286LL;

    t39 = (x277|(x278>>(x279!=x280)));

    if (t39 != -14985LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint16_t x285 = 14U;
	uint32_t x286 = 2368858U;
	int8_t x287 = 1;
	uint32_t t40 = 44864U;

    t40 = (x285|(x286>>(x287!=x288)));

    if (t40 != 1184431U) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x290 = INT8_MAX;
	volatile int32_t x291 = -3421;
	volatile int32_t t41 = 4789;

    t41 = (x289|(x290>>(x291!=x292)));

    if (t41 != 63) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x293 = 494U;
	uint32_t x294 = 124896817U;
	uint32_t t42 = 394072U;

    t42 = (x293|(x294>>(x295!=x296)));

    if (t42 != 62448638U) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x297 = 7;
	uint32_t x299 = 2327636U;
	int64_t x300 = INT64_MAX;
	int32_t t43 = 56628075;

    t43 = (x297|(x298>>(x299!=x300)));

    if (t43 != 31) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x302 = 354;
	static uint8_t x303 = UINT8_MAX;
	int32_t x304 = INT32_MIN;
	int32_t t44 = 324885097;

    t44 = (x301|(x302>>(x303!=x304)));

    if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint32_t x305 = UINT32_MAX;
	static int64_t x306 = 1408306431LL;
	uint8_t x308 = 28U;
	volatile int64_t t45 = -582018LL;

    t45 = (x305|(x306>>(x307!=x308)));

    if (t45 != 4294967295LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x314 = INT8_MAX;
	int32_t x316 = INT32_MIN;
	static uint32_t t46 = UINT32_MAX;

    t46 = (x313|(x314>>(x315!=x316)));

    if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x317 = INT16_MIN;
	uint8_t x318 = UINT8_MAX;
	uint16_t x319 = 2131U;
	int32_t x320 = -1;
	int32_t t47 = 47;

    t47 = (x317|(x318>>(x319!=x320)));

    if (t47 != -32641) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x337 = UINT16_MAX;
	int16_t x339 = INT16_MIN;
	volatile uint64_t x340 = UINT64_MAX;
	volatile int32_t t48 = -1;

    t48 = (x337|(x338>>(x339!=x340)));

    if (t48 != 65535) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x345 = UINT8_MAX;
	volatile uint8_t x346 = 84U;
	uint32_t x347 = 11U;
	volatile uint16_t x348 = 65U;
	int32_t t49 = 21947;

    t49 = (x345|(x346>>(x347!=x348)));

    if (t49 != 255) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x349 = 1U;
	uint32_t x350 = UINT32_MAX;
	int64_t x352 = -182206231072LL;
	uint32_t t50 = 1902U;

    t50 = (x349|(x350>>(x351!=x352)));

    if (t50 != 2147483647U) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x353 = INT64_MIN;
	static volatile uint32_t x354 = 76U;
	int32_t x355 = INT32_MAX;
	uint16_t x356 = 30041U;
	volatile int64_t t51 = -3234LL;

    t51 = (x353|(x354>>(x355!=x356)));

    if (t51 != -9223372036854775770LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x357 = INT32_MIN;
	uint32_t x358 = 235882473U;
	volatile int32_t x359 = -1;
	int64_t x360 = -1LL;
	volatile uint32_t t52 = 1739U;

    t52 = (x357|(x358>>(x359!=x360)));

    if (t52 != 2383366121U) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x369 = INT16_MIN;
	uint64_t x371 = 293703LLU;
	int32_t x372 = INT32_MIN;
	uint32_t t53 = 19414U;

    t53 = (x369|(x370>>(x371!=x372)));

    if (t53 != 4294934530U) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x377 = INT32_MIN;
	int64_t x378 = INT64_MAX;
	volatile int8_t x379 = INT8_MIN;
	int16_t x380 = -63;
	volatile int64_t t54 = 4946679LL;

    t54 = (x377|(x378>>(x379!=x380)));

    if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x385 = INT64_MIN;
	int64_t x386 = INT64_MAX;
	int32_t x387 = INT32_MIN;
	int32_t x388 = -226403188;
	int64_t t55 = -8854100328586469LL;

    t55 = (x385|(x386>>(x387!=x388)));

    if (t55 != -4611686018427387905LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x389 = -16;
	uint64_t x390 = 29330466LLU;
	static int16_t x391 = 2108;
	volatile int8_t x392 = INT8_MIN;
	volatile uint64_t t56 = 3786877LLU;

    t56 = (x389|(x390>>(x391!=x392)));

    if (t56 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x397 = 6;
	static int8_t x398 = INT8_MAX;
	uint64_t x399 = UINT64_MAX;
	int32_t t57 = 34369;

    t57 = (x397|(x398>>(x399!=x400)));

    if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x409 = INT16_MAX;
	int64_t x410 = 2503567994162301269LL;
	uint64_t x412 = 690LLU;
	volatile int64_t t58 = 701LL;

    t58 = (x409|(x410>>(x411!=x412)));

    if (t58 != 1251783997081157631LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint16_t x421 = 2270U;
	volatile int32_t x422 = INT32_MAX;
	int32_t x423 = 1647309;

    t59 = (x421|(x422>>(x423!=x424)));

    if (t59 != 1073741823) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint16_t x425 = 2925U;
	volatile int64_t x426 = 1725910134LL;
	int16_t x427 = INT16_MIN;
	int32_t x428 = INT32_MIN;
	int64_t t60 = 522778973085578LL;

    t60 = (x425|(x426>>(x427!=x428)));

    if (t60 != 862957439LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x434 = 1;
	int16_t x435 = INT16_MAX;
	volatile int64_t t61 = INT64_MIN;

    t61 = (x433|(x434>>(x435!=x436)));

    if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x442 = 416U;
	static int64_t x443 = -1LL;
	int32_t x444 = 34863;
	int64_t t62 = -379262430633263LL;

    t62 = (x441|(x442>>(x443!=x444)));

    if (t62 != -9223372036854775600LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x449 = UINT8_MAX;
	uint16_t x450 = UINT16_MAX;
	static int16_t x451 = -85;
	static volatile int64_t x452 = -1245LL;
	int32_t t63 = -2668;

    t63 = (x449|(x450>>(x451!=x452)));

    if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x454 = 104U;
	int16_t x455 = 8;
	static int64_t x456 = INT64_MIN;
	int32_t t64 = 139;

    t64 = (x453|(x454>>(x455!=x456)));

    if (t64 != 1844) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x458 = 926027181LL;
	int8_t x460 = -1;
	int64_t t65 = -595040194682LL;

    t65 = (x457|(x458>>(x459!=x460)));

    if (t65 != 463013855LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x461 = UINT32_MAX;
	int64_t x462 = INT64_MAX;
	int64_t t66 = 8268246124LL;

    t66 = (x461|(x462>>(x463!=x464)));

    if (t66 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x465 = 87395127992868782LLU;
	uint16_t x467 = UINT16_MAX;
	uint64_t t67 = 669988418157LLU;

    t67 = (x465|(x466>>(x467!=x468)));

    if (t67 != 87395127992868846LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x471 = INT8_MAX;
	static uint32_t x472 = UINT32_MAX;
	int64_t t68 = 13LL;

    t68 = (x469|(x470>>(x471!=x472)));

    if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x477 = INT32_MAX;
	static int8_t x478 = INT8_MAX;
	volatile int16_t x480 = INT16_MIN;
	volatile int32_t t69 = INT32_MAX;

    t69 = (x477|(x478>>(x479!=x480)));

    if (t69 != INT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x493 = INT32_MIN;
	volatile int8_t x494 = INT8_MAX;
	uint32_t x495 = 12288U;
	uint32_t x496 = UINT32_MAX;

    t70 = (x493|(x494>>(x495!=x496)));

    if (t70 != -2147483585) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x497 = 323859045U;
	static uint32_t x498 = 189766604U;
	volatile uint16_t x499 = UINT16_MAX;
	uint32_t t71 = 967200467U;

    t71 = (x497|(x498>>(x499!=x500)));

    if (t71 != 401604583U) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile uint16_t x501 = 128U;
	int16_t x504 = INT16_MAX;
	int32_t t72 = 13691;

    t72 = (x501|(x502>>(x503!=x504)));

    if (t72 != 191) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int16_t x505 = INT16_MIN;
	int32_t x506 = INT32_MAX;
	uint8_t x507 = UINT8_MAX;
	volatile int8_t x508 = INT8_MIN;

    t73 = (x505|(x506>>(x507!=x508)));

    if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x509 = 3598096LLU;
	static int64_t x510 = INT64_MAX;
	static int64_t x511 = -1LL;
	int32_t x512 = INT32_MAX;
	static uint64_t t74 = 9627LLU;

    t74 = (x509|(x510>>(x511!=x512)));

    if (t74 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x513 = INT64_MAX;
	static int32_t x514 = INT32_MAX;
	static int64_t x515 = INT64_MIN;
	static uint32_t x516 = 1977411U;
	static int64_t t75 = INT64_MAX;

    t75 = (x513|(x514>>(x515!=x516)));

    if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x521 = -11;
	uint32_t x522 = UINT32_MAX;
	static uint8_t x523 = UINT8_MAX;
	uint64_t x524 = 3726989277311321317LLU;
	volatile uint32_t t76 = UINT32_MAX;

    t76 = (x521|(x522>>(x523!=x524)));

    if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x529 = INT8_MIN;
	int32_t x530 = INT32_MAX;
	volatile uint8_t x531 = UINT8_MAX;
	uint8_t x532 = UINT8_MAX;
	volatile int32_t t77 = 0;

    t77 = (x529|(x530>>(x531!=x532)));

    if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x537 = INT8_MIN;
	static volatile uint32_t x538 = UINT32_MAX;
	static uint32_t t78 = UINT32_MAX;

    t78 = (x537|(x538>>(x539!=x540)));

    if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x541 = INT32_MAX;
	int16_t x542 = INT16_MAX;
	static volatile int64_t x543 = INT64_MIN;
	int16_t x544 = INT16_MIN;
	int32_t t79 = INT32_MAX;

    t79 = (x541|(x542>>(x543!=x544)));

    if (t79 != INT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x545 = INT32_MAX;
	int64_t x546 = INT64_MAX;
	uint32_t x547 = UINT32_MAX;
	volatile uint8_t x548 = 0U;
	static volatile int64_t t80 = -6389756540314381LL;

    t80 = (x545|(x546>>(x547!=x548)));

    if (t80 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x549 = -1;
	static int8_t x551 = INT8_MIN;
	uint32_t x552 = UINT32_MAX;

    t81 = (x549|(x550>>(x551!=x552)));

    if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x553 = 6343U;
	int8_t x555 = 0;
	volatile uint32_t x556 = UINT32_MAX;
	uint32_t t82 = 364U;

    t82 = (x553|(x554>>(x555!=x556)));

    if (t82 != 6343U) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x557 = -866LL;
	uint32_t x558 = UINT32_MAX;
	int32_t x559 = -8274872;
	int32_t x560 = 189;
	volatile int64_t t83 = 6072444LL;

    t83 = (x557|(x558>>(x559!=x560)));

    if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x573 = -24435737;
	static volatile int32_t x574 = INT32_MAX;
	int64_t x575 = -1050033507LL;
	volatile uint64_t x576 = 393241714209LLU;
	volatile int32_t t84 = 15;

    t84 = (x573|(x574>>(x575!=x576)));

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x577 = -1;
	int32_t x578 = INT32_MAX;
	int16_t x580 = -1;
	int32_t t85 = 8;

    t85 = (x577|(x578>>(x579!=x580)));

    if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x581 = 3579018363LLU;
	uint64_t x582 = 131345089863409886LLU;
	uint64_t t86 = 43229353471LLU;

    t86 = (x581|(x582>>(x583!=x584)));

    if (t86 != 65672545289337983LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x590 = 4;
	uint32_t x591 = 383414235U;
	static int64_t x592 = INT64_MIN;
	int32_t t87 = 0;

    t87 = (x589|(x590>>(x591!=x592)));

    if (t87 != 2) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint16_t x601 = 1U;
	volatile uint64_t x602 = UINT64_MAX;
	volatile uint64_t x603 = 5798165659649LLU;
	static uint64_t x604 = 6886168109990LLU;
	uint64_t t88 = 217036381097406LLU;

    t88 = (x601|(x602>>(x603!=x604)));

    if (t88 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint8_t x605 = UINT8_MAX;
	uint8_t x607 = UINT8_MAX;
	int16_t x608 = -3;
	volatile int32_t t89 = -3728;

    t89 = (x605|(x606>>(x607!=x608)));

    if (t89 != 255) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x613 = INT8_MIN;
	int16_t x614 = INT16_MAX;
	static int64_t x615 = 81465889762635LL;
	volatile int32_t x616 = INT32_MIN;
	volatile int32_t t90 = -4;

    t90 = (x613|(x614>>(x615!=x616)));

    if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x617 = 29U;
	static uint16_t x618 = UINT16_MAX;
	int8_t x619 = INT8_MIN;
	volatile int16_t x620 = -22;
	int32_t t91 = 339;

    t91 = (x617|(x618>>(x619!=x620)));

    if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint8_t x621 = UINT8_MAX;
	volatile uint8_t x622 = UINT8_MAX;
	volatile int8_t x623 = INT8_MIN;
	uint8_t x624 = 50U;
	static int32_t t92 = 666;

    t92 = (x621|(x622>>(x623!=x624)));

    if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x625 = 1;
	volatile int64_t x626 = INT64_MAX;
	uint8_t x627 = UINT8_MAX;
	int16_t x628 = INT16_MAX;

    t93 = (x625|(x626>>(x627!=x628)));

    if (t93 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x649 = 1777874LLU;
	static uint8_t x650 = 4U;
	volatile int16_t x651 = -1;
	int64_t x652 = INT64_MIN;
	static volatile uint64_t t94 = 436749249LLU;

    t94 = (x649|(x650>>(x651!=x652)));

    if (t94 != 1777874LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x661 = INT8_MAX;
	int32_t x664 = 4;

    t95 = (x661|(x662>>(x663!=x664)));

    if (t95 != 36607) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint16_t x673 = UINT16_MAX;
	uint8_t x674 = 0U;
	volatile int8_t x675 = INT8_MIN;
	volatile uint8_t x676 = 0U;
	volatile int32_t t96 = -4;

    t96 = (x673|(x674>>(x675!=x676)));

    if (t96 != 65535) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x677 = 81U;
	static int8_t x678 = INT8_MAX;
	int32_t x680 = 0;
	volatile int32_t t97 = -82;

    t97 = (x677|(x678>>(x679!=x680)));

    if (t97 != 127) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x682 = UINT64_MAX;
	uint8_t x683 = 1U;
	uint64_t t98 = UINT64_MAX;

    t98 = (x681|(x682>>(x683!=x684)));

    if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x695 = 62LL;
	uint16_t x696 = 327U;
	static uint64_t t99 = 121390LLU;

    t99 = (x693|(x694>>(x695!=x696)));

    if (t99 != 349077548659LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x697 = INT32_MIN;
	int8_t x698 = 58;
	volatile uint64_t x699 = 117968755LLU;
	static uint32_t x700 = 120U;
	volatile int32_t t100 = 968;

    t100 = (x697|(x698>>(x699!=x700)));

    if (t100 != -2147483619) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x701 = -1;
	static int64_t x702 = INT64_MAX;
	static int8_t x704 = 0;
	static int64_t t101 = 54325247LL;

    t101 = (x701|(x702>>(x703!=x704)));

    if (t101 != -1LL) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x705 = INT8_MAX;
	static volatile int8_t x706 = 4;
	uint16_t x708 = 31U;
	static int32_t t102 = -59489559;

    t102 = (x705|(x706>>(x707!=x708)));

    if (t102 != 127) { NG(); } else { ; }
	
}

void f103(void) {
    	static int64_t x709 = INT64_MAX;
	uint64_t x710 = 3696197025002LLU;
	int8_t x712 = -1;
	volatile uint64_t t103 = 364098648888977879LLU;

    t103 = (x709|(x710>>(x711!=x712)));

    if (t103 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x713 = INT16_MIN;
	uint8_t x714 = UINT8_MAX;
	uint64_t x715 = 8922887593281LLU;
	volatile int32_t t104 = 540;

    t104 = (x713|(x714>>(x715!=x716)));

    if (t104 != -32641) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x717 = INT32_MAX;
	volatile int32_t x718 = INT32_MAX;
	volatile uint64_t x719 = UINT64_MAX;
	volatile int32_t t105 = INT32_MAX;

    t105 = (x717|(x718>>(x719!=x720)));

    if (t105 != INT32_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x726 = 1718505U;
	uint32_t x727 = 71846296U;
	int32_t x728 = -47253465;

    t106 = (x725|(x726>>(x727!=x728)));

    if (t106 != 704511229U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x737 = UINT32_MAX;
	int16_t x738 = 39;
	int8_t x739 = INT8_MIN;
	volatile int8_t x740 = -41;

    t107 = (x737|(x738>>(x739!=x740)));

    if (t107 != UINT32_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x757 = -1LL;
	uint64_t x758 = 116127308425892LLU;
	int64_t x759 = 4132046LL;
	uint8_t x760 = UINT8_MAX;
	volatile uint64_t t108 = UINT64_MAX;

    t108 = (x757|(x758>>(x759!=x760)));

    if (t108 != UINT64_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x781 = 3544221851881062466LL;
	int16_t x783 = INT16_MAX;
	uint16_t x784 = UINT16_MAX;
	int64_t t109 = -8LL;

    t109 = (x781|(x782>>(x783!=x784)));

    if (t109 != 3544221851881062527LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x789 = 319;
	volatile uint16_t x790 = 4U;
	volatile int32_t x791 = -11;
	int16_t x792 = INT16_MIN;
	static volatile int32_t t110 = -2106751;

    t110 = (x789|(x790>>(x791!=x792)));

    if (t110 != 319) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x801 = 6487225LLU;
	int32_t x802 = INT32_MAX;
	volatile uint8_t x804 = 0U;
	uint64_t t111 = 3794777LLU;

    t111 = (x801|(x802>>(x803!=x804)));

    if (t111 != 1073741823LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x817 = -27;
	uint8_t x818 = 0U;
	int16_t x819 = INT16_MIN;
	uint16_t x820 = 1022U;
	static volatile int32_t t112 = -29838768;

    t112 = (x817|(x818>>(x819!=x820)));

    if (t112 != -27) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x825 = UINT64_MAX;
	uint64_t x826 = UINT64_MAX;
	int64_t x828 = -2747539181793567516LL;

    t113 = (x825|(x826>>(x827!=x828)));

    if (t113 != UINT64_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x833 = 10028748150LL;
	int32_t x834 = 12416953;
	int8_t x835 = INT8_MIN;
	static volatile uint32_t x836 = 2039790U;
	volatile int64_t t114 = 543806154775334952LL;

    t114 = (x833|(x834>>(x835!=x836)));

    if (t114 != 10030596094LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x837 = 71136596;
	volatile uint32_t x838 = 293794113U;
	uint32_t x839 = UINT32_MAX;
	int64_t x840 = -1LL;
	volatile uint32_t t115 = 3075U;

    t115 = (x837|(x838>>(x839!=x840)));

    if (t115 != 217939444U) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x841 = 172341;
	uint32_t x842 = 404885622U;
	uint64_t x843 = 1893591LLU;
	int64_t x844 = -40364LL;
	volatile uint32_t t116 = 825603U;

    t116 = (x841|(x842>>(x843!=x844)));

    if (t116 != 202615103U) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x850 = 3U;
	uint16_t x851 = 18U;
	int8_t x852 = -9;
	static volatile uint32_t t117 = 226823U;

    t117 = (x849|(x850>>(x851!=x852)));

    if (t117 != 39837U) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x866 = INT8_MAX;
	int64_t x867 = 1LL;

    t118 = (x865|(x866>>(x867!=x868)));

    if (t118 != 65535) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x869 = UINT8_MAX;
	int32_t x870 = 13;
	uint8_t x871 = UINT8_MAX;
	int8_t x872 = -1;

    t119 = (x869|(x870>>(x871!=x872)));

    if (t119 != 255) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x873 = -1;
	uint64_t x874 = 153812854924478LLU;
	uint8_t x876 = 23U;
	uint64_t t120 = UINT64_MAX;

    t120 = (x873|(x874>>(x875!=x876)));

    if (t120 != UINT64_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint8_t x885 = 27U;
	volatile int32_t x886 = 866;
	int8_t x888 = -1;
	int32_t t121 = 339557967;

    t121 = (x885|(x886>>(x887!=x888)));

    if (t121 != 443) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x893 = INT8_MIN;
	static uint64_t x894 = 1LLU;
	uint64_t x896 = 5180886748498376345LLU;
	uint64_t t122 = 273975LLU;

    t122 = (x893|(x894>>(x895!=x896)));

    if (t122 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x897 = 1U;
	int16_t x900 = INT16_MIN;
	volatile uint32_t t123 = 5U;

    t123 = (x897|(x898>>(x899!=x900)));

    if (t123 != 2147483647U) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x901 = UINT16_MAX;
	int32_t x902 = 233640;
	int64_t x903 = INT64_MIN;
	int8_t x904 = -1;
	int32_t t124 = 938;

    t124 = (x901|(x902>>(x903!=x904)));

    if (t124 != 131071) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x905 = 3U;
	int16_t x906 = INT16_MAX;
	volatile int8_t x907 = -1;
	int8_t x908 = 7;

    t125 = (x905|(x906>>(x907!=x908)));

    if (t125 != 16383) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x909 = UINT64_MAX;
	uint8_t x910 = UINT8_MAX;
	static volatile int16_t x911 = INT16_MIN;
	uint32_t x912 = 4U;
	static volatile uint64_t t126 = UINT64_MAX;

    t126 = (x909|(x910>>(x911!=x912)));

    if (t126 != UINT64_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x914 = 13;
	static int64_t x915 = 2641681LL;
	uint8_t x916 = 58U;
	volatile uint32_t t127 = UINT32_MAX;

    t127 = (x913|(x914>>(x915!=x916)));

    if (t127 != UINT32_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x917 = INT8_MAX;
	volatile int16_t x918 = 5;
	uint64_t x919 = UINT64_MAX;
	uint16_t x920 = 2U;
	volatile int32_t t128 = 0;

    t128 = (x917|(x918>>(x919!=x920)));

    if (t128 != 127) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint64_t x937 = 254097611955605490LLU;
	uint64_t x938 = 44321828452LLU;
	uint8_t x940 = 2U;
	uint64_t t129 = 6416985103LLU;

    t129 = (x937|(x938>>(x939!=x940)));

    if (t129 != 254097616787718130LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x941 = INT64_MIN;
	int32_t x943 = 221261390;
	int64_t t130 = -63363LL;

    t130 = (x941|(x942>>(x943!=x944)));

    if (t130 != -9223372036854775564LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x945 = INT8_MIN;
	volatile uint8_t x947 = UINT8_MAX;

    t131 = (x945|(x946>>(x947!=x948)));

    if (t131 != -128) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x949 = 22U;
	int32_t x952 = INT32_MAX;

    t132 = (x949|(x950>>(x951!=x952)));

    if (t132 != 16383) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x962 = 18;
	uint16_t x963 = UINT16_MAX;
	static uint32_t x964 = 585U;

    t133 = (x961|(x962>>(x963!=x964)));

    if (t133 != -119) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x974 = 1U;
	uint64_t x975 = 25LLU;
	int64_t x976 = 15129545964LL;
	int32_t t134 = INT32_MAX;

    t134 = (x973|(x974>>(x975!=x976)));

    if (t134 != INT32_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x977 = 14U;
	int64_t x978 = 3083635LL;
	volatile uint64_t x979 = UINT64_MAX;
	volatile int8_t x980 = INT8_MIN;
	static volatile int64_t t135 = -5390722LL;

    t135 = (x977|(x978>>(x979!=x980)));

    if (t135 != 1541823LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x981 = UINT64_MAX;
	static int32_t x983 = INT32_MAX;
	uint64_t t136 = UINT64_MAX;

    t136 = (x981|(x982>>(x983!=x984)));

    if (t136 != UINT64_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x990 = INT8_MAX;
	int64_t x991 = INT64_MIN;
	int32_t t137 = -9665855;

    t137 = (x989|(x990>>(x991!=x992)));

    if (t137 != 65535) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x993 = INT32_MIN;
	uint16_t x996 = UINT16_MAX;

    t138 = (x993|(x994>>(x995!=x996)));

    if (t138 != 18446744073500810311LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint32_t x997 = UINT32_MAX;
	uint32_t x998 = 23023560U;
	static int32_t x999 = INT32_MAX;
	int64_t x1000 = -1LL;

    t139 = (x997|(x998>>(x999!=x1000)));

    if (t139 != UINT32_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x1001 = 20;
	int64_t x1002 = INT64_MAX;
	uint16_t x1003 = 23U;
	uint32_t x1004 = 1538U;
	static volatile int64_t t140 = 239031358LL;

    t140 = (x1001|(x1002>>(x1003!=x1004)));

    if (t140 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x1013 = INT8_MIN;
	int64_t x1015 = -21922763482380817LL;
	static uint64_t x1016 = 16456975610LLU;
	int32_t t141 = 387;

    t141 = (x1013|(x1014>>(x1015!=x1016)));

    if (t141 != -100) { NG(); } else { ; }
	
}

void f142(void) {
    	static int64_t x1021 = -1LL;
	static int32_t x1022 = 50473;
	static uint16_t x1023 = UINT16_MAX;
	int64_t x1024 = -1LL;

    t142 = (x1021|(x1022>>(x1023!=x1024)));

    if (t142 != -1LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x1053 = -1LL;
	volatile int32_t x1055 = INT32_MIN;
	uint16_t x1056 = 11U;
	uint64_t t143 = UINT64_MAX;

    t143 = (x1053|(x1054>>(x1055!=x1056)));

    if (t143 != UINT64_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x1061 = INT32_MIN;
	uint8_t x1063 = 4U;
	int32_t x1064 = 1;
	volatile uint64_t t144 = UINT64_MAX;

    t144 = (x1061|(x1062>>(x1063!=x1064)));

    if (t144 != UINT64_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x1069 = 0U;
	uint8_t x1071 = 1U;
	volatile int32_t x1072 = -23210039;
	int32_t t145 = -19980;

    t145 = (x1069|(x1070>>(x1071!=x1072)));

    if (t145 != 25) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x1073 = 237U;
	uint16_t x1074 = UINT16_MAX;
	int8_t x1076 = INT8_MIN;
	uint32_t t146 = 5306034U;

    t146 = (x1073|(x1074>>(x1075!=x1076)));

    if (t146 != 32767U) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x1082 = 2;
	int16_t x1083 = 0;
	static int32_t x1084 = -1415422;
	volatile int32_t t147 = -43907168;

    t147 = (x1081|(x1082>>(x1083!=x1084)));

    if (t147 != -45) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x1086 = 8;
	int32_t x1087 = -1;
	int16_t x1088 = -3487;

    t148 = (x1085|(x1086>>(x1087!=x1088)));

    if (t148 != UINT64_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x1089 = 0U;
	int16_t x1090 = INT16_MAX;
	uint8_t x1091 = 3U;
	uint32_t t149 = 1U;

    t149 = (x1089|(x1090>>(x1091!=x1092)));

    if (t149 != 16383U) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x1093 = UINT16_MAX;
	int16_t x1095 = INT16_MIN;
	uint64_t x1096 = 1LLU;
	static volatile int32_t t150 = 489329656;

    t150 = (x1093|(x1094>>(x1095!=x1096)));

    if (t150 != 65535) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint8_t x1105 = 0U;
	int8_t x1106 = INT8_MAX;
	int64_t x1107 = INT64_MIN;
	uint16_t x1108 = 17040U;

    t151 = (x1105|(x1106>>(x1107!=x1108)));

    if (t151 != 63) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x1113 = -11;
	volatile int16_t x1115 = INT16_MIN;
	static int64_t x1116 = 197771426045065879LL;
	static volatile uint64_t t152 = UINT64_MAX;

    t152 = (x1113|(x1114>>(x1115!=x1116)));

    if (t152 != UINT64_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x1119 = 1;
	static uint16_t x1120 = UINT16_MAX;
	volatile int32_t t153 = -15206;

    t153 = (x1117|(x1118>>(x1119!=x1120)));

    if (t153 != 13839) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x1125 = INT8_MIN;
	uint8_t x1128 = 25U;
	static volatile int32_t t154 = 9804;

    t154 = (x1125|(x1126>>(x1127!=x1128)));

    if (t154 != -1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x1138 = 1U;
	volatile int16_t x1139 = 333;
	volatile int64_t x1140 = -46286545976687169LL;
	int32_t t155 = -31649655;

    t155 = (x1137|(x1138>>(x1139!=x1140)));

    if (t155 != 127) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x1153 = -1;
	volatile uint16_t x1154 = UINT16_MAX;
	volatile int64_t x1155 = 6643504795139LL;
	int16_t x1156 = INT16_MAX;
	int32_t t156 = -11829881;

    t156 = (x1153|(x1154>>(x1155!=x1156)));

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x1157 = INT32_MIN;
	uint8_t x1158 = UINT8_MAX;
	static volatile uint16_t x1159 = UINT16_MAX;
	static int16_t x1160 = -1;

    t157 = (x1157|(x1158>>(x1159!=x1160)));

    if (t157 != -2147483521) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x1162 = 22;
	static volatile int32_t x1163 = 3852540;
	uint64_t x1164 = 603788889LLU;
	volatile int32_t t158 = 3;

    t158 = (x1161|(x1162>>(x1163!=x1164)));

    if (t158 != 255) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x1165 = -394;
	uint16_t x1166 = 61U;
	static int16_t x1167 = INT16_MIN;
	int32_t t159 = -5;

    t159 = (x1165|(x1166>>(x1167!=x1168)));

    if (t159 != -386) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x1171 = 141;
	volatile int16_t x1172 = INT16_MIN;
	int32_t t160 = 894;

    t160 = (x1169|(x1170>>(x1171!=x1172)));

    if (t160 != 375877374) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x1173 = INT32_MIN;
	uint8_t x1174 = UINT8_MAX;
	int64_t x1175 = INT64_MIN;
	volatile uint64_t x1176 = 4103395267LLU;
	int32_t t161 = -1455007;

    t161 = (x1173|(x1174>>(x1175!=x1176)));

    if (t161 != -2147483521) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x1177 = 1;
	int64_t x1178 = INT64_MAX;
	uint8_t x1179 = 39U;
	volatile int64_t t162 = 5441320321899825LL;

    t162 = (x1177|(x1178>>(x1179!=x1180)));

    if (t162 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint16_t x1181 = 26U;
	int32_t x1182 = 53200;
	uint16_t x1183 = 19033U;
	static int32_t t163 = 0;

    t163 = (x1181|(x1182>>(x1183!=x1184)));

    if (t163 != 26618) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int64_t x1185 = INT64_MAX;
	uint64_t x1186 = 268571932LLU;
	volatile int16_t x1187 = -5099;
	volatile uint32_t x1188 = 21970U;
	static uint64_t t164 = 3286317LLU;

    t164 = (x1185|(x1186>>(x1187!=x1188)));

    if (t164 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x1190 = 481306LLU;
	int8_t x1191 = -1;
	static uint64_t t165 = 263LLU;

    t165 = (x1189|(x1190>>(x1191!=x1192)));

    if (t165 != 2147483647LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint8_t x1197 = 1U;
	int32_t x1199 = -1;
	int64_t x1200 = INT64_MIN;
	uint32_t t166 = 8226845U;

    t166 = (x1197|(x1198>>(x1199!=x1200)));

    if (t166 != 11351U) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x1205 = INT8_MIN;
	uint16_t x1206 = UINT16_MAX;
	uint32_t x1207 = UINT32_MAX;
	int32_t x1208 = -33956862;
	volatile int32_t t167 = 10584;

    t167 = (x1205|(x1206>>(x1207!=x1208)));

    if (t167 != -1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x1209 = 825949LLU;
	volatile int8_t x1211 = -3;
	int64_t x1212 = INT64_MIN;
	volatile uint64_t t168 = 6LLU;

    t168 = (x1209|(x1210>>(x1211!=x1212)));

    if (t168 != 1073741823LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x1213 = INT8_MIN;
	volatile uint16_t x1214 = 6706U;
	volatile int32_t t169 = -5;

    t169 = (x1213|(x1214>>(x1215!=x1216)));

    if (t169 != -103) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x1217 = INT64_MIN;
	volatile int32_t x1218 = INT32_MAX;
	int8_t x1220 = 0;
	volatile int64_t t170 = 43952124522547977LL;

    t170 = (x1217|(x1218>>(x1219!=x1220)));

    if (t170 != -9223372035781033985LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x1221 = -1;
	int64_t x1222 = INT64_MAX;
	uint32_t x1223 = UINT32_MAX;
	static volatile uint32_t x1224 = 1U;
	int64_t t171 = -3LL;

    t171 = (x1221|(x1222>>(x1223!=x1224)));

    if (t171 != -1LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x1229 = -1;
	uint16_t x1231 = UINT16_MAX;
	uint64_t x1232 = UINT64_MAX;
	static int32_t t172 = -161364;

    t172 = (x1229|(x1230>>(x1231!=x1232)));

    if (t172 != -1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x1237 = UINT16_MAX;
	uint32_t x1238 = 54782501U;
	volatile int64_t x1239 = INT64_MIN;
	volatile uint32_t t173 = 3916U;

    t173 = (x1237|(x1238>>(x1239!=x1240)));

    if (t173 != 27394047U) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint32_t x1246 = 370979579U;
	int16_t x1247 = -67;
	int8_t x1248 = -1;
	uint32_t t174 = 2047433978U;

    t174 = (x1245|(x1246>>(x1247!=x1248)));

    if (t174 != 4294957437U) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x1253 = 81;
	uint8_t x1254 = 0U;
	int16_t x1255 = INT16_MIN;
	volatile int32_t x1256 = INT32_MAX;
	int32_t t175 = -128775742;

    t175 = (x1253|(x1254>>(x1255!=x1256)));

    if (t175 != 81) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x1257 = INT32_MIN;
	uint8_t x1259 = UINT8_MAX;
	int8_t x1260 = -1;

    t176 = (x1257|(x1258>>(x1259!=x1260)));

    if (t176 != UINT32_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x1265 = INT16_MAX;
	static int64_t x1267 = -1LL;
	uint8_t x1268 = UINT8_MAX;
	int32_t t177 = 0;

    t177 = (x1265|(x1266>>(x1267!=x1268)));

    if (t177 != 32767) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x1269 = INT64_MIN;
	uint16_t x1270 = 6U;
	int64_t x1271 = INT64_MIN;
	int32_t x1272 = -1;
	int64_t t178 = -10378832753570LL;

    t178 = (x1269|(x1270>>(x1271!=x1272)));

    if (t178 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x1286 = 2046095;
	volatile int64_t x1287 = INT64_MIN;
	uint32_t x1288 = 22208U;

    t179 = (x1285|(x1286>>(x1287!=x1288)));

    if (t179 != 1023095) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x1305 = 10U;
	int64_t x1306 = 100147320860LL;
	int64_t x1308 = -5601925087LL;
	volatile int64_t t180 = -2436LL;

    t180 = (x1305|(x1306>>(x1307!=x1308)));

    if (t180 != 50073660430LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x1310 = 20;
	int64_t x1311 = -1LL;
	int32_t x1312 = -1;
	int32_t t181 = -85278;

    t181 = (x1309|(x1310>>(x1311!=x1312)));

    if (t181 != 380) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x1317 = UINT32_MAX;
	volatile uint8_t x1318 = 3U;
	uint32_t x1319 = 1408U;
	uint8_t x1320 = 62U;

    t182 = (x1317|(x1318>>(x1319!=x1320)));

    if (t182 != UINT32_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x1337 = -335479842759665706LL;
	static int8_t x1340 = 13;
	int64_t t183 = 5824113018523950LL;

    t183 = (x1337|(x1338>>(x1339!=x1340)));

    if (t183 != -335479842759639041LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x1342 = 665;
	int8_t x1344 = -1;
	volatile uint64_t t184 = UINT64_MAX;

    t184 = (x1341|(x1342>>(x1343!=x1344)));

    if (t184 != UINT64_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x1345 = -1;
	static uint32_t x1346 = 126U;
	static int64_t x1348 = -131601644LL;
	volatile uint32_t t185 = UINT32_MAX;

    t185 = (x1345|(x1346>>(x1347!=x1348)));

    if (t185 != UINT32_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x1357 = UINT64_MAX;
	static int8_t x1358 = 42;
	uint16_t x1359 = 286U;
	uint64_t x1360 = 14047LLU;
	uint64_t t186 = UINT64_MAX;

    t186 = (x1357|(x1358>>(x1359!=x1360)));

    if (t186 != UINT64_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x1365 = -37;
	int16_t x1366 = INT16_MAX;
	int64_t x1367 = -248704749397898743LL;
	int32_t x1368 = INT32_MAX;
	static volatile int32_t t187 = -1096;

    t187 = (x1365|(x1366>>(x1367!=x1368)));

    if (t187 != -1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1377 = INT8_MIN;
	uint8_t x1378 = UINT8_MAX;
	uint16_t x1379 = UINT16_MAX;

    t188 = (x1377|(x1378>>(x1379!=x1380)));

    if (t188 != -1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x1382 = 42869179;
	volatile int16_t x1384 = INT16_MIN;
	volatile int32_t t189 = -2228799;

    t189 = (x1381|(x1382>>(x1383!=x1384)));

    if (t189 != 21454589) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x1389 = INT16_MIN;
	static int8_t x1392 = 60;
	volatile int64_t t190 = 94068LL;

    t190 = (x1389|(x1390>>(x1391!=x1392)));

    if (t190 != -1LL) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint16_t x1401 = 37U;
	uint64_t x1402 = 5661LLU;
	int32_t x1403 = -591144454;
	static uint32_t x1404 = UINT32_MAX;
	uint64_t t191 = 16711647LLU;

    t191 = (x1401|(x1402>>(x1403!=x1404)));

    if (t191 != 2863LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x1409 = INT8_MIN;
	static uint32_t x1410 = 136023U;
	volatile int32_t x1411 = INT32_MAX;
	volatile uint32_t t192 = 215478U;

    t192 = (x1409|(x1410>>(x1411!=x1412)));

    if (t192 != 4294967211U) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x1413 = INT64_MIN;
	uint32_t x1414 = UINT32_MAX;

    t193 = (x1413|(x1414>>(x1415!=x1416)));

    if (t193 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x1422 = UINT32_MAX;
	static uint64_t x1424 = UINT64_MAX;

    t194 = (x1421|(x1422>>(x1423!=x1424)));

    if (t194 != 2147483647LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x1433 = INT32_MAX;
	uint64_t x1434 = 6LLU;
	static int32_t x1435 = -1;
	int64_t x1436 = INT64_MIN;

    t195 = (x1433|(x1434>>(x1435!=x1436)));

    if (t195 != 2147483647LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint32_t x1437 = 10163U;
	volatile uint16_t x1438 = 46U;
	int32_t x1439 = -1;
	volatile uint16_t x1440 = 55U;
	volatile uint32_t t196 = 66255768U;

    t196 = (x1437|(x1438>>(x1439!=x1440)));

    if (t196 != 10167U) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x1457 = INT64_MAX;
	static int8_t x1458 = INT8_MAX;
	static uint32_t x1459 = UINT32_MAX;
	uint64_t x1460 = 1144238971220429LLU;

    t197 = (x1457|(x1458>>(x1459!=x1460)));

    if (t197 != INT64_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x1461 = -1;
	static int8_t x1462 = INT8_MAX;
	int8_t x1463 = -1;

    t198 = (x1461|(x1462>>(x1463!=x1464)));

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint8_t x1465 = 48U;
	volatile uint64_t x1466 = 786503309LLU;
	int16_t x1467 = INT16_MIN;
	static volatile int16_t x1468 = 111;
	uint64_t t199 = 91LLU;

    t199 = (x1465|(x1466>>(x1467!=x1468)));

    if (t199 != 393251702LLU) { NG(); } else { ; }
	
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

