
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

int32_t x1 = INT32_MAX;
volatile int16_t x4 = INT16_MAX;
uint8_t x8 = UINT8_MAX;
int32_t x17 = INT32_MIN;
int64_t x27 = INT64_MIN;
volatile int64_t t5 = 2324LL;
int64_t x30 = 833588378LL;
int64_t t6 = -87545423LL;
uint64_t x42 = 0LLU;
int16_t x43 = INT16_MAX;
int64_t t9 = -1LL;
static int64_t x51 = INT64_MAX;
static uint64_t t12 = 17233LLU;
volatile int8_t x62 = INT8_MIN;
int32_t t14 = -15;
volatile int32_t t16 = 1896342;
int32_t x88 = -1;
int16_t x101 = INT16_MIN;
static int64_t x103 = 32LL;
volatile int32_t t22 = -2025;
int8_t x105 = INT8_MAX;
static volatile int16_t x107 = INT16_MAX;
int32_t x116 = INT32_MIN;
volatile int64_t x117 = INT64_MAX;
static volatile int32_t t26 = -7594;
uint64_t t27 = 13256676LLU;
volatile uint64_t x128 = UINT64_MAX;
volatile int64_t x131 = INT64_MAX;
int16_t x132 = INT16_MIN;
volatile uint32_t t31 = 23729405U;
int32_t t32 = -1096;
int8_t x149 = INT8_MIN;
volatile int16_t x151 = -18;
static volatile uint8_t x157 = 2U;
static int64_t x158 = -73832466256268LL;
int8_t x171 = INT8_MIN;
int16_t x172 = -493;
static uint32_t x180 = 12318U;
int32_t x181 = -3198972;
uint64_t x186 = 20LLU;
uint16_t x193 = 32129U;
int8_t x195 = -29;
int16_t x196 = -5608;
int32_t x203 = INT32_MIN;
int16_t x204 = -1;
int64_t x218 = -1LL;
static uint8_t x222 = 0U;
int32_t t49 = -85296948;
uint8_t x225 = 6U;
int8_t x228 = -1;
static int8_t x233 = 0;
volatile int8_t x236 = -49;
uint64_t t53 = 400350450LLU;
static volatile uint64_t t54 = 5772LLU;
uint8_t x252 = 2U;
int64_t x264 = INT64_MAX;
volatile int64_t x265 = INT64_MIN;
int32_t t59 = -30165;
static int8_t x275 = INT8_MIN;
int32_t x279 = 15;
int64_t x280 = -1LL;
static int16_t x288 = INT16_MIN;
int32_t t64 = -243;
uint64_t x289 = 6474791428LLU;
static volatile int16_t x291 = -1;
volatile int32_t t65 = -139;
uint64_t x295 = UINT64_MAX;
volatile int32_t x305 = INT32_MIN;
int16_t x306 = INT16_MIN;
volatile uint32_t x307 = 491U;
uint32_t x314 = 443U;
int8_t x317 = -36;
static uint8_t x320 = 83U;
volatile int64_t x321 = INT64_MIN;
uint16_t x326 = 2961U;
uint8_t x327 = 0U;
static int8_t x328 = INT8_MIN;
volatile uint64_t x331 = 6609651515LLU;
int32_t t74 = 1;
volatile int8_t x333 = INT8_MIN;
volatile int16_t x334 = INT16_MAX;
int32_t t76 = -1;
uint32_t x341 = 121200U;
int32_t x345 = -1;
int32_t t78 = 58831;
int64_t x350 = -1LL;
static volatile int16_t x353 = INT16_MIN;
static int8_t x359 = 1;
static int32_t t81 = -228966;
int32_t t83 = -32976983;
volatile int32_t t84 = 6365;
volatile int32_t t85 = -28269135;
int64_t x385 = INT64_MIN;
int32_t x391 = 451125923;
volatile int8_t x397 = -1;
uint8_t x399 = UINT8_MAX;
int32_t x401 = INT32_MAX;
int32_t t92 = 590861287;
int16_t x415 = INT16_MIN;
static int16_t x419 = INT16_MIN;
int32_t x435 = INT32_MIN;
static volatile int8_t x443 = INT8_MAX;
volatile int64_t t100 = -5097035LL;
int32_t x446 = INT32_MIN;
int8_t x449 = 45;
static uint64_t x453 = UINT64_MAX;
static volatile int64_t x467 = -354LL;
static volatile int64_t x477 = INT64_MIN;
int8_t x480 = INT8_MAX;
volatile int16_t x482 = INT16_MAX;
volatile int32_t t107 = -4;
int64_t x500 = -1LL;
volatile int32_t x501 = INT32_MIN;
volatile uint32_t x506 = 5168305U;
int16_t x526 = 121;
uint8_t x534 = UINT8_MAX;
uint64_t x542 = UINT64_MAX;
int64_t x552 = 1294205LL;
int64_t t122 = -53304290LL;
static volatile uint32_t x553 = 33793906U;
volatile int32_t x558 = INT32_MIN;
uint32_t x560 = 111U;
uint8_t x561 = 3U;
int64_t x569 = -36457545995289LL;
volatile int64_t t127 = -2058248LL;
static int16_t x573 = 0;
int16_t x574 = 24;
volatile int32_t x580 = INT32_MAX;
volatile int32_t t129 = -38785;
int64_t x585 = INT64_MIN;
static int8_t x589 = INT8_MAX;
uint64_t x602 = 51421430085932885LLU;
volatile uint64_t t135 = 2165597391LLU;
volatile uint64_t x617 = 32339LLU;
uint64_t x618 = 30090386158LLU;
int64_t x621 = INT64_MIN;
volatile int16_t x627 = INT16_MAX;
static uint8_t x633 = 4U;
volatile uint32_t x640 = UINT32_MAX;
int32_t x642 = -1;
static uint32_t x643 = 3357631U;
static int16_t x655 = INT16_MIN;
volatile uint32_t t148 = 1144241U;
int8_t x657 = -1;
int8_t x658 = 11;
int8_t x665 = 34;
int8_t x667 = INT8_MAX;
static int8_t x670 = INT8_MAX;
int32_t x673 = INT32_MIN;
int32_t x675 = INT32_MAX;
volatile int32_t t153 = -62484533;
int64_t x697 = 24369673LL;
uint32_t x699 = 2U;
uint8_t x704 = 16U;
static volatile int32_t t160 = -18707589;
uint32_t x709 = 2U;
static int64_t x710 = INT64_MIN;
static uint16_t x712 = 6789U;
volatile int32_t x719 = INT32_MAX;
volatile int32_t t163 = -197;
int8_t x725 = -1;
volatile int16_t x727 = -6;
static uint32_t x728 = UINT32_MAX;
static int16_t x734 = 151;
static int16_t x748 = INT16_MAX;
int8_t x750 = -1;
static uint32_t x751 = 0U;
int8_t x757 = 14;
int32_t x761 = -1;
static int16_t x762 = INT16_MIN;
uint8_t x763 = UINT8_MAX;
volatile int32_t t172 = 8666278;
static int32_t t174 = -27997;
int32_t t176 = 258954;
volatile int32_t t181 = -30664797;
uint32_t x824 = UINT32_MAX;
int32_t x825 = 133057;
volatile int8_t x828 = INT8_MAX;
volatile uint64_t x831 = 7972LLU;
uint64_t x842 = UINT64_MAX;
int32_t t188 = 68124652;
static volatile int32_t t189 = -15991;
static int32_t x853 = -1;
static int16_t x862 = INT16_MAX;
static int32_t x868 = 207749591;
uint8_t x870 = 9U;
volatile int32_t t195 = -5477848;
int32_t x880 = -54;
static uint32_t x885 = 625892567U;
volatile int64_t t197 = -202982333244LL;


void f0(void) {
    	int16_t x2 = INT16_MIN;
	static int64_t x3 = INT64_MIN;
	int32_t t0 = 132094;

    t0 = ((x1!=(x2-x3))/x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MIN;
	int64_t x6 = -1LL;
	int32_t x7 = INT32_MAX;
	volatile int32_t t1 = 7477;

    t1 = ((x5!=(x6-x7))/x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = 74U;
	int64_t x10 = INT64_MIN;
	uint64_t x11 = UINT64_MAX;
	int32_t x12 = -1;
	int32_t t2 = -157046;

    t2 = ((x9!=(x10-x11))/x12);

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x18 = 697;
	uint8_t x19 = 0U;
	uint64_t x20 = 113073LLU;
	uint64_t t3 = 1075451276LLU;

    t3 = ((x17!=(x18-x19))/x20);

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x21 = INT64_MIN;
	static volatile int64_t x22 = -1985907691702054589LL;
	uint64_t x23 = 226190346448953LLU;
	volatile uint32_t x24 = 59U;
	volatile uint32_t t4 = 212146U;

    t4 = ((x21!=(x22-x23))/x24);

    if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint32_t x25 = 549168365U;
	int16_t x26 = -94;
	static int64_t x28 = INT64_MAX;

    t5 = ((x25!=(x26-x27))/x28);

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x29 = -1;
	int32_t x31 = -2406;
	int64_t x32 = INT64_MAX;

    t6 = ((x29!=(x30-x31))/x32);

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x33 = 15U;
	int8_t x34 = 0;
	uint32_t x35 = 1U;
	static int64_t x36 = 668502747LL;
	volatile int64_t t7 = -145822674000601980LL;

    t7 = ((x33!=(x34-x35))/x36);

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x37 = -1;
	static int64_t x38 = 1650192LL;
	volatile uint32_t x39 = 3459U;
	static int16_t x40 = -1;
	int32_t t8 = -260573779;

    t8 = ((x37!=(x38-x39))/x40);

    if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x41 = INT64_MAX;
	static volatile int64_t x44 = INT64_MIN;

    t9 = ((x41!=(x42-x43))/x44);

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x45 = 64U;
	int32_t x46 = 99360;
	volatile int32_t x47 = INT32_MAX;
	int64_t x48 = -1LL;
	volatile int64_t t10 = 40188472234344LL;

    t10 = ((x45!=(x46-x47))/x48);

    if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint64_t x49 = UINT64_MAX;
	int64_t x50 = 10677LL;
	int64_t x52 = INT64_MAX;
	volatile int64_t t11 = 23132LL;

    t11 = ((x49!=(x50-x51))/x52);

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x53 = INT8_MAX;
	static uint32_t x54 = 584915009U;
	uint32_t x55 = 33U;
	uint64_t x56 = 24LLU;

    t12 = ((x53!=(x54-x55))/x56);

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x57 = -1;
	static volatile int64_t x58 = 1LL;
	static int64_t x59 = -1LL;
	int16_t x60 = INT16_MIN;
	int32_t t13 = -4;

    t13 = ((x57!=(x58-x59))/x60);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x61 = INT8_MIN;
	volatile int32_t x63 = -1;
	volatile uint8_t x64 = UINT8_MAX;

    t14 = ((x61!=(x62-x63))/x64);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x65 = 0;
	static int8_t x66 = INT8_MAX;
	static volatile int32_t x67 = -10790;
	static volatile int32_t x68 = -1;
	int32_t t15 = 144;

    t15 = ((x65!=(x66-x67))/x68);

    if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x69 = INT16_MIN;
	static int8_t x70 = -1;
	volatile int64_t x71 = -299824LL;
	int8_t x72 = INT8_MAX;

    t16 = ((x69!=(x70-x71))/x72);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x73 = INT8_MIN;
	static int8_t x74 = -10;
	int32_t x75 = -1;
	volatile int32_t x76 = INT32_MIN;
	volatile int32_t t17 = -3307;

    t17 = ((x73!=(x74-x75))/x76);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x77 = INT32_MIN;
	int32_t x78 = -1;
	int32_t x79 = INT32_MAX;
	int32_t x80 = INT32_MIN;
	volatile int32_t t18 = 986;

    t18 = ((x77!=(x78-x79))/x80);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x85 = INT8_MIN;
	static uint64_t x86 = 556097401185240LLU;
	static uint32_t x87 = UINT32_MAX;
	volatile int32_t t19 = 265756968;

    t19 = ((x85!=(x86-x87))/x88);

    if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x93 = INT64_MIN;
	int32_t x94 = 48512;
	int8_t x95 = INT8_MAX;
	volatile int8_t x96 = 1;
	volatile int32_t t20 = 980021066;

    t20 = ((x93!=(x94-x95))/x96);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x97 = 346288797;
	uint64_t x98 = UINT64_MAX;
	int64_t x99 = -67161755557901LL;
	uint32_t x100 = UINT32_MAX;
	volatile uint32_t t21 = 11195616U;

    t21 = ((x97!=(x98-x99))/x100);

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x102 = -1;
	volatile uint8_t x104 = 8U;

    t22 = ((x101!=(x102-x103))/x104);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x106 = 410;
	volatile uint64_t x108 = 182LLU;
	uint64_t t23 = 3699411049116408LLU;

    t23 = ((x105!=(x106-x107))/x108);

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x109 = 16221008LLU;
	static uint64_t x110 = 11131801492984LLU;
	volatile uint16_t x111 = 148U;
	int32_t x112 = 6188;
	volatile int32_t t24 = -56820;

    t24 = ((x109!=(x110-x111))/x112);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint64_t x113 = 32719126LLU;
	uint8_t x114 = 0U;
	volatile uint64_t x115 = UINT64_MAX;
	int32_t t25 = 13;

    t25 = ((x113!=(x114-x115))/x116);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x118 = 9281;
	volatile int8_t x119 = INT8_MIN;
	static volatile uint8_t x120 = 10U;

    t26 = ((x117!=(x118-x119))/x120);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x121 = 86549142316LLU;
	int8_t x122 = INT8_MAX;
	int32_t x123 = 1;
	volatile uint64_t x124 = 6551444LLU;

    t27 = ((x121!=(x122-x123))/x124);

    if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x125 = INT16_MAX;
	uint64_t x126 = UINT64_MAX;
	uint32_t x127 = UINT32_MAX;
	static uint64_t t28 = 44676LLU;

    t28 = ((x125!=(x126-x127))/x128);

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x129 = -1LL;
	static uint16_t x130 = UINT16_MAX;
	static int32_t t29 = -30;

    t29 = ((x129!=(x130-x131))/x132);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x133 = INT16_MIN;
	int16_t x134 = 237;
	int32_t x135 = 472228841;
	volatile int64_t x136 = 942031529593402829LL;
	int64_t t30 = 48090951LL;

    t30 = ((x133!=(x134-x135))/x136);

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x137 = -67483692811976579LL;
	uint32_t x138 = UINT32_MAX;
	int8_t x139 = -18;
	uint32_t x140 = 110462733U;

    t31 = ((x137!=(x138-x139))/x140);

    if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x141 = 0U;
	int64_t x142 = 1LL;
	uint16_t x143 = UINT16_MAX;
	uint16_t x144 = UINT16_MAX;

    t32 = ((x141!=(x142-x143))/x144);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x145 = 3479;
	uint64_t x146 = 3279653991707476809LLU;
	int16_t x147 = INT16_MIN;
	static uint64_t x148 = 96585306037674LLU;
	static volatile uint64_t t33 = 142436104744971LLU;

    t33 = ((x145!=(x146-x147))/x148);

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x150 = -16508;
	int64_t x152 = -585434918772886LL;
	volatile int64_t t34 = 23199505462380352LL;

    t34 = ((x149!=(x150-x151))/x152);

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x159 = INT16_MAX;
	uint32_t x160 = 85U;
	uint32_t t35 = 8293681U;

    t35 = ((x157!=(x158-x159))/x160);

    if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x161 = INT8_MAX;
	static uint16_t x162 = 17337U;
	int16_t x163 = -1;
	volatile int32_t x164 = INT32_MAX;
	volatile int32_t t36 = 377;

    t36 = ((x161!=(x162-x163))/x164);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x165 = 27U;
	static uint32_t x166 = 1563123271U;
	static volatile uint8_t x167 = 7U;
	uint16_t x168 = 15639U;
	int32_t t37 = 12991;

    t37 = ((x165!=(x166-x167))/x168);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x169 = INT16_MIN;
	int8_t x170 = -1;
	volatile int32_t t38 = 1686280;

    t38 = ((x169!=(x170-x171))/x172);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint16_t x173 = UINT16_MAX;
	volatile uint64_t x174 = 34363313010LLU;
	int8_t x175 = -1;
	int8_t x176 = -1;
	volatile int32_t t39 = 227;

    t39 = ((x173!=(x174-x175))/x176);

    if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x177 = UINT8_MAX;
	volatile uint32_t x178 = 4783U;
	int8_t x179 = 8;
	static volatile uint32_t t40 = 81200904U;

    t40 = ((x177!=(x178-x179))/x180);

    if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x182 = INT32_MAX;
	volatile uint8_t x183 = UINT8_MAX;
	int32_t x184 = INT32_MAX;
	int32_t t41 = -751077;

    t41 = ((x181!=(x182-x183))/x184);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x185 = 0LLU;
	int64_t x187 = INT64_MIN;
	volatile int32_t x188 = -1;
	int32_t t42 = -56096;

    t42 = ((x185!=(x186-x187))/x188);

    if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x189 = 5U;
	int16_t x190 = -10424;
	uint8_t x191 = UINT8_MAX;
	int16_t x192 = -1;
	int32_t t43 = -91;

    t43 = ((x189!=(x190-x191))/x192);

    if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint8_t x194 = 42U;
	int32_t t44 = -10;

    t44 = ((x193!=(x194-x195))/x196);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x201 = 1U;
	int32_t x202 = INT32_MIN;
	int32_t t45 = -6;

    t45 = ((x201!=(x202-x203))/x204);

    if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x209 = -1;
	static int8_t x210 = 61;
	uint16_t x211 = 216U;
	int32_t x212 = 2;
	volatile int32_t t46 = -205;

    t46 = ((x209!=(x210-x211))/x212);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x213 = 5380LLU;
	uint16_t x214 = 12U;
	int8_t x215 = INT8_MAX;
	static uint64_t x216 = UINT64_MAX;
	uint64_t t47 = 1216665056276004LLU;

    t47 = ((x213!=(x214-x215))/x216);

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x217 = -26;
	int64_t x219 = INT64_MAX;
	uint32_t x220 = 494U;
	volatile uint32_t t48 = 2009966U;

    t48 = ((x217!=(x218-x219))/x220);

    if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x221 = -48429612LL;
	uint16_t x223 = UINT16_MAX;
	static volatile uint8_t x224 = 4U;

    t49 = ((x221!=(x222-x223))/x224);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x226 = -1LL;
	volatile int32_t x227 = 34;
	int32_t t50 = 1839;

    t50 = ((x225!=(x226-x227))/x228);

    if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x229 = INT64_MIN;
	volatile uint16_t x230 = 1U;
	uint32_t x231 = 2104828U;
	static int16_t x232 = -1;
	volatile int32_t t51 = 107;

    t51 = ((x229!=(x230-x231))/x232);

    if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x234 = 43;
	static int32_t x235 = -59485;
	volatile int32_t t52 = -97906;

    t52 = ((x233!=(x234-x235))/x236);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x237 = 14;
	uint64_t x238 = 20LLU;
	uint8_t x239 = UINT8_MAX;
	uint64_t x240 = 32241210LLU;

    t53 = ((x237!=(x238-x239))/x240);

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint8_t x245 = 0U;
	static uint16_t x246 = UINT16_MAX;
	uint8_t x247 = UINT8_MAX;
	uint64_t x248 = UINT64_MAX;

    t54 = ((x245!=(x246-x247))/x248);

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x249 = INT32_MAX;
	static int8_t x250 = INT8_MAX;
	static uint8_t x251 = UINT8_MAX;
	volatile int32_t t55 = -823;

    t55 = ((x249!=(x250-x251))/x252);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x253 = -96792;
	uint32_t x254 = 0U;
	uint16_t x255 = UINT16_MAX;
	uint8_t x256 = 2U;
	static volatile int32_t t56 = -1;

    t56 = ((x253!=(x254-x255))/x256);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint32_t x257 = 242301U;
	static int32_t x258 = -23;
	static uint32_t x259 = UINT32_MAX;
	volatile int32_t x260 = 58074;
	volatile int32_t t57 = -266235704;

    t57 = ((x257!=(x258-x259))/x260);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x261 = 326578821;
	int8_t x262 = INT8_MAX;
	int64_t x263 = 199LL;
	static volatile int64_t t58 = 18940625663LL;

    t58 = ((x261!=(x262-x263))/x264);

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x266 = 785714689352LL;
	int16_t x267 = INT16_MIN;
	int16_t x268 = INT16_MAX;

    t59 = ((x265!=(x266-x267))/x268);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x269 = INT64_MIN;
	static int16_t x270 = 39;
	uint64_t x271 = 10121548LLU;
	volatile int32_t x272 = 15942;
	int32_t t60 = 342754160;

    t60 = ((x269!=(x270-x271))/x272);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x273 = INT16_MIN;
	uint16_t x274 = 9U;
	int32_t x276 = INT32_MAX;
	int32_t t61 = -142941;

    t61 = ((x273!=(x274-x275))/x276);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint8_t x277 = 12U;
	volatile int32_t x278 = -1;
	volatile int64_t t62 = 58959530211706138LL;

    t62 = ((x277!=(x278-x279))/x280);

    if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x281 = INT8_MIN;
	int16_t x282 = -1;
	int16_t x283 = 572;
	int32_t x284 = -1;
	static int32_t t63 = -67;

    t63 = ((x281!=(x282-x283))/x284);

    if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x285 = INT64_MIN;
	static int16_t x286 = -206;
	int16_t x287 = INT16_MIN;

    t64 = ((x285!=(x286-x287))/x288);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x290 = 673428938U;
	int32_t x292 = 1329299;

    t65 = ((x289!=(x290-x291))/x292);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x293 = UINT64_MAX;
	int32_t x294 = INT32_MAX;
	volatile int32_t x296 = -1;
	static volatile int32_t t66 = 1022050833;

    t66 = ((x293!=(x294-x295))/x296);

    if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x297 = 16LL;
	static int32_t x298 = INT32_MIN;
	int8_t x299 = INT8_MIN;
	int8_t x300 = 5;
	volatile int32_t t67 = -795;

    t67 = ((x297!=(x298-x299))/x300);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x308 = UINT16_MAX;
	int32_t t68 = 297055;

    t68 = ((x305!=(x306-x307))/x308);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int16_t x309 = INT16_MAX;
	uint16_t x310 = 0U;
	static int8_t x311 = INT8_MAX;
	int64_t x312 = INT64_MIN;
	volatile int64_t t69 = -1LL;

    t69 = ((x309!=(x310-x311))/x312);

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x313 = INT64_MAX;
	static int32_t x315 = -1;
	static uint8_t x316 = 122U;
	volatile int32_t t70 = -9;

    t70 = ((x313!=(x314-x315))/x316);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x318 = -1LL;
	static uint32_t x319 = 86037U;
	volatile int32_t t71 = -6;

    t71 = ((x317!=(x318-x319))/x320);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x322 = UINT64_MAX;
	int32_t x323 = INT32_MIN;
	uint8_t x324 = UINT8_MAX;
	static int32_t t72 = 56;

    t72 = ((x321!=(x322-x323))/x324);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x325 = INT64_MIN;
	int32_t t73 = -6830398;

    t73 = ((x325!=(x326-x327))/x328);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x329 = 18;
	static int64_t x330 = INT64_MIN;
	volatile uint8_t x332 = UINT8_MAX;

    t74 = ((x329!=(x330-x331))/x332);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x335 = -1LL;
	static int64_t x336 = INT64_MIN;
	int64_t t75 = -78210929644LL;

    t75 = ((x333!=(x334-x335))/x336);

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x337 = -1;
	int8_t x338 = INT8_MIN;
	static int64_t x339 = -1LL;
	uint16_t x340 = UINT16_MAX;

    t76 = ((x337!=(x338-x339))/x340);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x342 = 2554491U;
	int8_t x343 = INT8_MIN;
	uint8_t x344 = UINT8_MAX;
	volatile int32_t t77 = 69174300;

    t77 = ((x341!=(x342-x343))/x344);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x346 = 67667503;
	uint32_t x347 = 7027U;
	int8_t x348 = -1;

    t78 = ((x345!=(x346-x347))/x348);

    if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x349 = -1;
	static uint16_t x351 = UINT16_MAX;
	int16_t x352 = -457;
	volatile int32_t t79 = 98;

    t79 = ((x349!=(x350-x351))/x352);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x354 = INT16_MAX;
	int16_t x355 = INT16_MAX;
	int32_t x356 = INT32_MIN;
	volatile int32_t t80 = -34677;

    t80 = ((x353!=(x354-x355))/x356);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x357 = 141620LLU;
	static int8_t x358 = -1;
	int16_t x360 = INT16_MIN;

    t81 = ((x357!=(x358-x359))/x360);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x361 = 1986780U;
	volatile int32_t x362 = -1;
	uint16_t x363 = UINT16_MAX;
	volatile int64_t x364 = INT64_MAX;
	int64_t t82 = 16396546596LL;

    t82 = ((x361!=(x362-x363))/x364);

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x369 = INT32_MIN;
	int32_t x370 = 2187;
	int16_t x371 = INT16_MIN;
	int8_t x372 = INT8_MIN;

    t83 = ((x369!=(x370-x371))/x372);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x373 = -1;
	uint32_t x374 = 40336U;
	static volatile int32_t x375 = INT32_MIN;
	int8_t x376 = INT8_MIN;

    t84 = ((x373!=(x374-x375))/x376);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x381 = INT64_MAX;
	int64_t x382 = INT64_MIN;
	int64_t x383 = -1LL;
	int16_t x384 = -519;

    t85 = ((x381!=(x382-x383))/x384);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x386 = INT16_MAX;
	uint8_t x387 = UINT8_MAX;
	static volatile uint64_t x388 = 4167520194LLU;
	uint64_t t86 = 1608LLU;

    t86 = ((x385!=(x386-x387))/x388);

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x389 = -1;
	static uint16_t x390 = UINT16_MAX;
	uint16_t x392 = 1U;
	int32_t t87 = -41003;

    t87 = ((x389!=(x390-x391))/x392);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x393 = 11611938LLU;
	int8_t x394 = 0;
	int8_t x395 = INT8_MIN;
	static int8_t x396 = -1;
	int32_t t88 = 234;

    t88 = ((x393!=(x394-x395))/x396);

    if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x398 = 4234U;
	volatile uint64_t x400 = 3615134605LLU;
	volatile uint64_t t89 = 95206LLU;

    t89 = ((x397!=(x398-x399))/x400);

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x402 = 30U;
	static int64_t x403 = -101512307229LL;
	uint32_t x404 = UINT32_MAX;
	uint32_t t90 = 237U;

    t90 = ((x401!=(x402-x403))/x404);

    if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x405 = -1;
	int32_t x406 = -39;
	volatile uint64_t x407 = 1LLU;
	int32_t x408 = 858394901;
	int32_t t91 = -49091;

    t91 = ((x405!=(x406-x407))/x408);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x409 = INT16_MIN;
	uint16_t x410 = 28U;
	volatile int8_t x411 = 0;
	uint8_t x412 = UINT8_MAX;

    t92 = ((x409!=(x410-x411))/x412);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x413 = -30;
	int64_t x414 = 6LL;
	static uint32_t x416 = UINT32_MAX;
	volatile uint32_t t93 = 35U;

    t93 = ((x413!=(x414-x415))/x416);

    if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x417 = 785955789085230295LL;
	int8_t x418 = INT8_MIN;
	static uint32_t x420 = 183U;
	uint32_t t94 = 1844U;

    t94 = ((x417!=(x418-x419))/x420);

    if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x421 = UINT32_MAX;
	volatile int8_t x422 = -1;
	uint8_t x423 = 4U;
	static int32_t x424 = INT32_MAX;
	volatile int32_t t95 = 59087336;

    t95 = ((x421!=(x422-x423))/x424);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x425 = -2;
	int64_t x426 = -475577795594120LL;
	volatile int64_t x427 = 147953LL;
	uint8_t x428 = 1U;
	int32_t t96 = -8223389;

    t96 = ((x425!=(x426-x427))/x428);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x429 = INT8_MIN;
	uint64_t x430 = 3298643175034719332LLU;
	volatile uint16_t x431 = 7603U;
	volatile int64_t x432 = -1LL;
	int64_t t97 = -5324LL;

    t97 = ((x429!=(x430-x431))/x432);

    if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x433 = -1;
	uint32_t x434 = UINT32_MAX;
	uint32_t x436 = 2403U;
	uint32_t t98 = 31U;

    t98 = ((x433!=(x434-x435))/x436);

    if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x437 = INT8_MIN;
	volatile int64_t x438 = 1LL;
	static int32_t x439 = -208994645;
	int32_t x440 = INT32_MIN;
	static int32_t t99 = -5;

    t99 = ((x437!=(x438-x439))/x440);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x441 = 1;
	int64_t x442 = INT64_MAX;
	volatile int64_t x444 = -945130LL;

    t100 = ((x441!=(x442-x443))/x444);

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x445 = INT8_MAX;
	int16_t x447 = -16254;
	int32_t x448 = INT32_MIN;
	static volatile int32_t t101 = 252;

    t101 = ((x445!=(x446-x447))/x448);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x450 = 8U;
	uint8_t x451 = 111U;
	uint16_t x452 = 1595U;
	volatile int32_t t102 = 157268;

    t102 = ((x449!=(x450-x451))/x452);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x454 = 0U;
	static int8_t x455 = INT8_MAX;
	int64_t x456 = INT64_MIN;
	int64_t t103 = 51LL;

    t103 = ((x453!=(x454-x455))/x456);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x461 = INT8_MIN;
	uint8_t x462 = 0U;
	static int64_t x463 = -1LL;
	int64_t x464 = INT64_MAX;
	volatile int64_t t104 = 920601353707567104LL;

    t104 = ((x461!=(x462-x463))/x464);

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x465 = 55U;
	uint16_t x466 = UINT16_MAX;
	uint16_t x468 = 1624U;
	volatile int32_t t105 = -326880890;

    t105 = ((x465!=(x466-x467))/x468);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x478 = 43U;
	int16_t x479 = -103;
	int32_t t106 = -69;

    t106 = ((x477!=(x478-x479))/x480);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x481 = UINT32_MAX;
	int16_t x483 = INT16_MIN;
	int16_t x484 = -446;

    t107 = ((x481!=(x482-x483))/x484);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x485 = -1;
	static int64_t x486 = 13689427840298LL;
	static volatile int8_t x487 = -1;
	int64_t x488 = -1LL;
	int64_t t108 = 19482649LL;

    t108 = ((x485!=(x486-x487))/x488);

    if (t108 != -1LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int64_t x489 = -1LL;
	uint8_t x490 = 40U;
	static int32_t x491 = -42;
	int32_t x492 = INT32_MAX;
	int32_t t109 = 8302128;

    t109 = ((x489!=(x490-x491))/x492);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x493 = -1LL;
	uint8_t x494 = 17U;
	static int64_t x495 = 9784080023LL;
	static uint8_t x496 = 1U;
	volatile int32_t t110 = 3465;

    t110 = ((x493!=(x494-x495))/x496);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x497 = -1;
	int8_t x498 = 1;
	volatile uint32_t x499 = 0U;
	volatile int64_t t111 = -204854279954LL;

    t111 = ((x497!=(x498-x499))/x500);

    if (t111 != -1LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x502 = INT32_MAX;
	int32_t x503 = INT32_MAX;
	volatile int16_t x504 = INT16_MIN;
	volatile int32_t t112 = 1950;

    t112 = ((x501!=(x502-x503))/x504);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int32_t x505 = INT32_MIN;
	uint64_t x507 = UINT64_MAX;
	int32_t x508 = INT32_MAX;
	int32_t t113 = 1;

    t113 = ((x505!=(x506-x507))/x508);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x509 = INT8_MAX;
	int8_t x510 = INT8_MAX;
	uint64_t x511 = 697LLU;
	volatile int32_t x512 = INT32_MAX;
	volatile int32_t t114 = -2;

    t114 = ((x509!=(x510-x511))/x512);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x513 = INT8_MIN;
	uint64_t x514 = 97LLU;
	int16_t x515 = INT16_MAX;
	volatile uint32_t x516 = 1888220U;
	uint32_t t115 = 241799U;

    t115 = ((x513!=(x514-x515))/x516);

    if (t115 != 0U) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x521 = 19U;
	static uint16_t x522 = UINT16_MAX;
	uint8_t x523 = 3U;
	uint64_t x524 = 315559328893LLU;
	uint64_t t116 = 18966LLU;

    t116 = ((x521!=(x522-x523))/x524);

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x525 = -1;
	int32_t x527 = -1;
	int16_t x528 = -1;
	volatile int32_t t117 = 29904;

    t117 = ((x525!=(x526-x527))/x528);

    if (t117 != -1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x529 = -2;
	static int8_t x530 = INT8_MAX;
	static volatile int32_t x531 = 40;
	volatile uint16_t x532 = UINT16_MAX;
	int32_t t118 = 7731588;

    t118 = ((x529!=(x530-x531))/x532);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x533 = 3328U;
	int16_t x535 = -833;
	volatile int16_t x536 = -3;
	static int32_t t119 = 686;

    t119 = ((x533!=(x534-x535))/x536);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x537 = UINT64_MAX;
	volatile int16_t x538 = 1;
	int32_t x539 = INT32_MAX;
	volatile int8_t x540 = INT8_MAX;
	int32_t t120 = -139757751;

    t120 = ((x537!=(x538-x539))/x540);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x541 = INT64_MIN;
	static uint16_t x543 = UINT16_MAX;
	volatile uint64_t x544 = 45374733LLU;
	volatile uint64_t t121 = 341370LLU;

    t121 = ((x541!=(x542-x543))/x544);

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int32_t x549 = -1;
	int16_t x550 = 14503;
	int8_t x551 = -59;

    t122 = ((x549!=(x550-x551))/x552);

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x554 = -1;
	uint8_t x555 = 97U;
	int16_t x556 = INT16_MAX;
	volatile int32_t t123 = -301147796;

    t123 = ((x553!=(x554-x555))/x556);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x557 = -1LL;
	volatile int32_t x559 = INT32_MIN;
	static volatile uint32_t t124 = 4908U;

    t124 = ((x557!=(x558-x559))/x560);

    if (t124 != 0U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x562 = 165006LLU;
	int32_t x563 = -1;
	uint8_t x564 = 13U;
	volatile int32_t t125 = 3131009;

    t125 = ((x561!=(x562-x563))/x564);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x565 = INT16_MIN;
	uint64_t x566 = 473888LLU;
	uint16_t x567 = 232U;
	uint16_t x568 = UINT16_MAX;
	static volatile int32_t t126 = -1104;

    t126 = ((x565!=(x566-x567))/x568);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x570 = INT16_MIN;
	int64_t x571 = -6913019LL;
	int64_t x572 = 15LL;

    t127 = ((x569!=(x570-x571))/x572);

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int32_t x575 = 20436;
	uint8_t x576 = 114U;
	volatile int32_t t128 = -1;

    t128 = ((x573!=(x574-x575))/x576);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x577 = 496320;
	int8_t x578 = -1;
	int16_t x579 = INT16_MAX;

    t129 = ((x577!=(x578-x579))/x580);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x581 = UINT64_MAX;
	uint16_t x582 = 1U;
	static int32_t x583 = INT32_MAX;
	volatile uint32_t x584 = UINT32_MAX;
	static uint32_t t130 = 1U;

    t130 = ((x581!=(x582-x583))/x584);

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x586 = UINT8_MAX;
	uint8_t x587 = 3U;
	int32_t x588 = -32567;
	int32_t t131 = 69;

    t131 = ((x585!=(x586-x587))/x588);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x590 = UINT32_MAX;
	volatile int64_t x591 = -1LL;
	uint16_t x592 = UINT16_MAX;
	volatile int32_t t132 = 388854510;

    t132 = ((x589!=(x590-x591))/x592);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x593 = 25379530LLU;
	volatile int32_t x594 = INT32_MIN;
	int8_t x595 = INT8_MIN;
	uint16_t x596 = 4U;
	volatile int32_t t133 = 182543;

    t133 = ((x593!=(x594-x595))/x596);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x597 = 4062338LL;
	static int64_t x598 = -676162641175510LL;
	int16_t x599 = INT16_MAX;
	volatile uint8_t x600 = 19U;
	volatile int32_t t134 = -185;

    t134 = ((x597!=(x598-x599))/x600);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x601 = -5830;
	int64_t x603 = -1LL;
	uint64_t x604 = 262973935406LLU;

    t135 = ((x601!=(x602-x603))/x604);

    if (t135 != 0LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x605 = 23;
	uint8_t x606 = UINT8_MAX;
	uint32_t x607 = 12470285U;
	static int64_t x608 = INT64_MAX;
	volatile int64_t t136 = 180805727735177347LL;

    t136 = ((x605!=(x606-x607))/x608);

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x609 = INT16_MIN;
	int8_t x610 = 3;
	uint16_t x611 = UINT16_MAX;
	uint32_t x612 = 3U;
	volatile uint32_t t137 = 202396081U;

    t137 = ((x609!=(x610-x611))/x612);

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint8_t x613 = 13U;
	volatile int8_t x614 = INT8_MAX;
	int16_t x615 = INT16_MIN;
	int64_t x616 = INT64_MIN;
	int64_t t138 = 46LL;

    t138 = ((x613!=(x614-x615))/x616);

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x619 = 18U;
	int8_t x620 = INT8_MIN;
	volatile int32_t t139 = -1204099;

    t139 = ((x617!=(x618-x619))/x620);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x622 = UINT32_MAX;
	volatile int16_t x623 = -1;
	int64_t x624 = 207395402295233LL;
	volatile int64_t t140 = 1LL;

    t140 = ((x621!=(x622-x623))/x624);

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x625 = 491U;
	uint64_t x626 = 1LLU;
	static volatile int32_t x628 = INT32_MAX;
	int32_t t141 = 103366804;

    t141 = ((x625!=(x626-x627))/x628);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x629 = INT64_MIN;
	static int64_t x630 = INT64_MIN;
	static int64_t x631 = INT64_MIN;
	static volatile int8_t x632 = -1;
	int32_t t142 = 19;

    t142 = ((x629!=(x630-x631))/x632);

    if (t142 != -1) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int64_t x634 = -9911407LL;
	static int8_t x635 = INT8_MAX;
	volatile uint16_t x636 = UINT16_MAX;
	int32_t t143 = 511498;

    t143 = ((x633!=(x634-x635))/x636);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x637 = UINT16_MAX;
	int64_t x638 = INT64_MIN;
	static int64_t x639 = INT64_MIN;
	uint32_t t144 = 48U;

    t144 = ((x637!=(x638-x639))/x640);

    if (t144 != 0U) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x641 = INT16_MIN;
	int16_t x644 = 1;
	static volatile int32_t t145 = -40499;

    t145 = ((x641!=(x642-x643))/x644);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x645 = -1;
	static volatile uint8_t x646 = 0U;
	int64_t x647 = -15LL;
	int64_t x648 = -212033LL;
	int64_t t146 = -3LL;

    t146 = ((x645!=(x646-x647))/x648);

    if (t146 != 0LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x649 = -6634;
	static uint32_t x650 = UINT32_MAX;
	uint32_t x651 = 53111U;
	int32_t x652 = -10;
	static int32_t t147 = 239;

    t147 = ((x649!=(x650-x651))/x652);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x653 = -1;
	int64_t x654 = INT64_MIN;
	volatile uint32_t x656 = UINT32_MAX;

    t148 = ((x653!=(x654-x655))/x656);

    if (t148 != 0U) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x659 = UINT16_MAX;
	int32_t x660 = INT32_MAX;
	volatile int32_t t149 = -566211165;

    t149 = ((x657!=(x658-x659))/x660);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x661 = -1LL;
	static volatile int8_t x662 = -41;
	volatile int8_t x663 = INT8_MAX;
	int16_t x664 = -1;
	volatile int32_t t150 = 435164;

    t150 = ((x661!=(x662-x663))/x664);

    if (t150 != -1) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint64_t x666 = UINT64_MAX;
	uint16_t x668 = 7202U;
	volatile int32_t t151 = -482691987;

    t151 = ((x665!=(x666-x667))/x668);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint16_t x669 = 507U;
	static uint16_t x671 = 957U;
	static int32_t x672 = -1;
	static int32_t t152 = 4;

    t152 = ((x669!=(x670-x671))/x672);

    if (t152 != -1) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x674 = INT16_MAX;
	static volatile int16_t x676 = -1;

    t153 = ((x673!=(x674-x675))/x676);

    if (t153 != -1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x677 = 2876LLU;
	int8_t x678 = 0;
	uint8_t x679 = 1U;
	volatile uint32_t x680 = 47171U;
	volatile uint32_t t154 = 3032993U;

    t154 = ((x677!=(x678-x679))/x680);

    if (t154 != 0U) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x685 = -717655538;
	int32_t x686 = -574509;
	volatile int16_t x687 = INT16_MIN;
	uint8_t x688 = 17U;
	static volatile int32_t t155 = -31434812;

    t155 = ((x685!=(x686-x687))/x688);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int16_t x689 = 3;
	int8_t x690 = INT8_MIN;
	static int32_t x691 = -1508;
	volatile uint32_t x692 = UINT32_MAX;
	volatile uint32_t t156 = 14426562U;

    t156 = ((x689!=(x690-x691))/x692);

    if (t156 != 0U) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x693 = INT32_MIN;
	volatile int32_t x694 = 39;
	int8_t x695 = -1;
	int64_t x696 = -1LL;
	volatile int64_t t157 = 455451850LL;

    t157 = ((x693!=(x694-x695))/x696);

    if (t157 != -1LL) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x698 = INT16_MIN;
	static volatile int32_t x700 = INT32_MIN;
	int32_t t158 = -128084;

    t158 = ((x697!=(x698-x699))/x700);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x701 = -3566133265377587379LL;
	int64_t x702 = -1LL;
	int64_t x703 = 1236244492LL;
	static volatile int32_t t159 = -204;

    t159 = ((x701!=(x702-x703))/x704);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x705 = INT16_MIN;
	uint16_t x706 = UINT16_MAX;
	volatile int32_t x707 = INT32_MAX;
	volatile uint8_t x708 = UINT8_MAX;

    t160 = ((x705!=(x706-x707))/x708);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x711 = INT16_MIN;
	int32_t t161 = -5;

    t161 = ((x709!=(x710-x711))/x712);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x713 = 711U;
	uint8_t x714 = 43U;
	uint32_t x715 = 78988U;
	uint64_t x716 = UINT64_MAX;
	volatile uint64_t t162 = 38474029242LLU;

    t162 = ((x713!=(x714-x715))/x716);

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x717 = 16042864561881583LL;
	int16_t x718 = -1;
	int16_t x720 = INT16_MIN;

    t163 = ((x717!=(x718-x719))/x720);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x721 = UINT64_MAX;
	static uint16_t x722 = 715U;
	int32_t x723 = INT32_MAX;
	uint32_t x724 = 5U;
	volatile uint32_t t164 = 1763512703U;

    t164 = ((x721!=(x722-x723))/x724);

    if (t164 != 0U) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x726 = -767758;
	static volatile uint32_t t165 = 915U;

    t165 = ((x725!=(x726-x727))/x728);

    if (t165 != 0U) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x733 = 53U;
	uint32_t x735 = 216878U;
	volatile int8_t x736 = INT8_MIN;
	int32_t t166 = 1771122;

    t166 = ((x733!=(x734-x735))/x736);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x737 = UINT64_MAX;
	int64_t x738 = INT64_MIN;
	uint16_t x739 = 0U;
	int8_t x740 = INT8_MAX;
	volatile int32_t t167 = -148;

    t167 = ((x737!=(x738-x739))/x740);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x745 = -1;
	static uint32_t x746 = 44U;
	int64_t x747 = INT64_MAX;
	int32_t t168 = 3855551;

    t168 = ((x745!=(x746-x747))/x748);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x749 = -44;
	int64_t x752 = INT64_MIN;
	int64_t t169 = 774363LL;

    t169 = ((x749!=(x750-x751))/x752);

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x753 = INT16_MIN;
	int64_t x754 = INT64_MIN;
	volatile int64_t x755 = INT64_MIN;
	uint64_t x756 = 6LLU;
	uint64_t t170 = 184969459190LLU;

    t170 = ((x753!=(x754-x755))/x756);

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x758 = UINT8_MAX;
	static volatile uint64_t x759 = 1069529918048617LLU;
	static int16_t x760 = -2674;
	static volatile int32_t t171 = -2035;

    t171 = ((x757!=(x758-x759))/x760);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x764 = INT16_MAX;

    t172 = ((x761!=(x762-x763))/x764);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x765 = INT16_MAX;
	int16_t x766 = -1;
	int16_t x767 = INT16_MIN;
	int64_t x768 = -531149264465545239LL;
	int64_t t173 = 37LL;

    t173 = ((x765!=(x766-x767))/x768);

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x773 = INT8_MIN;
	uint8_t x774 = 7U;
	uint64_t x775 = UINT64_MAX;
	volatile int8_t x776 = 25;

    t174 = ((x773!=(x774-x775))/x776);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x777 = INT64_MAX;
	volatile uint32_t x778 = 86221U;
	int8_t x779 = INT8_MAX;
	int32_t x780 = -1;
	volatile int32_t t175 = -51164;

    t175 = ((x777!=(x778-x779))/x780);

    if (t175 != -1) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint8_t x781 = 0U;
	uint8_t x782 = UINT8_MAX;
	static uint16_t x783 = 87U;
	int16_t x784 = -1;

    t176 = ((x781!=(x782-x783))/x784);

    if (t176 != -1) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x785 = -1;
	uint32_t x786 = UINT32_MAX;
	int8_t x787 = 1;
	int16_t x788 = -1;
	volatile int32_t t177 = -3;

    t177 = ((x785!=(x786-x787))/x788);

    if (t177 != -1) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint64_t x789 = 86556472LLU;
	int16_t x790 = INT16_MAX;
	uint32_t x791 = 15U;
	volatile int64_t x792 = INT64_MIN;
	int64_t t178 = -2586894301495LL;

    t178 = ((x789!=(x790-x791))/x792);

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x793 = UINT8_MAX;
	static uint16_t x794 = 334U;
	volatile int64_t x795 = 85409680148154882LL;
	static int8_t x796 = INT8_MIN;
	int32_t t179 = -3808;

    t179 = ((x793!=(x794-x795))/x796);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x797 = INT32_MAX;
	int16_t x798 = -1;
	int64_t x799 = -6413LL;
	static int16_t x800 = INT16_MIN;
	volatile int32_t t180 = 4;

    t180 = ((x797!=(x798-x799))/x800);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x805 = INT8_MIN;
	volatile int64_t x806 = INT64_MIN;
	int64_t x807 = INT64_MIN;
	int16_t x808 = INT16_MAX;

    t181 = ((x805!=(x806-x807))/x808);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x809 = INT64_MIN;
	uint16_t x810 = UINT16_MAX;
	static int32_t x811 = 490;
	int8_t x812 = -53;
	int32_t t182 = 507319339;

    t182 = ((x809!=(x810-x811))/x812);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x821 = INT8_MIN;
	uint8_t x822 = 68U;
	static int8_t x823 = INT8_MIN;
	volatile uint32_t t183 = 0U;

    t183 = ((x821!=(x822-x823))/x824);

    if (t183 != 0U) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x826 = 11U;
	int64_t x827 = -1LL;
	int32_t t184 = -67;

    t184 = ((x825!=(x826-x827))/x828);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x829 = -286;
	int16_t x830 = 32;
	static uint64_t x832 = 6860759169474928LLU;
	uint64_t t185 = 9422818279287330LLU;

    t185 = ((x829!=(x830-x831))/x832);

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x837 = UINT16_MAX;
	uint16_t x838 = 76U;
	static int8_t x839 = INT8_MIN;
	static int8_t x840 = INT8_MIN;
	int32_t t186 = -28947;

    t186 = ((x837!=(x838-x839))/x840);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x841 = -4;
	static int64_t x843 = INT64_MIN;
	uint16_t x844 = 222U;
	static volatile int32_t t187 = -464986;

    t187 = ((x841!=(x842-x843))/x844);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile uint32_t x845 = UINT32_MAX;
	uint32_t x846 = UINT32_MAX;
	int16_t x847 = -1;
	int8_t x848 = INT8_MIN;

    t188 = ((x845!=(x846-x847))/x848);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint8_t x849 = 11U;
	static int8_t x850 = INT8_MIN;
	int64_t x851 = INT64_MIN;
	int16_t x852 = INT16_MIN;

    t189 = ((x849!=(x850-x851))/x852);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x854 = -3229;
	static uint64_t x855 = UINT64_MAX;
	int64_t x856 = INT64_MAX;
	static volatile int64_t t190 = -8335338948LL;

    t190 = ((x853!=(x854-x855))/x856);

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x857 = -1;
	volatile int64_t x858 = -1LL;
	volatile int32_t x859 = -1;
	uint8_t x860 = 11U;
	static int32_t t191 = -339;

    t191 = ((x857!=(x858-x859))/x860);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x861 = 32352105LLU;
	int16_t x863 = 59;
	int64_t x864 = -1444362884597436285LL;
	volatile int64_t t192 = -6536908025LL;

    t192 = ((x861!=(x862-x863))/x864);

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x865 = 111;
	uint8_t x866 = 10U;
	int8_t x867 = -1;
	static int32_t t193 = -238;

    t193 = ((x865!=(x866-x867))/x868);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x869 = -1;
	volatile uint16_t x871 = 0U;
	volatile uint8_t x872 = 49U;
	static volatile int32_t t194 = -862;

    t194 = ((x869!=(x870-x871))/x872);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x873 = INT8_MAX;
	static uint8_t x874 = 1U;
	static uint32_t x875 = 1039973U;
	uint16_t x876 = UINT16_MAX;

    t195 = ((x873!=(x874-x875))/x876);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile uint64_t x877 = 6LLU;
	uint32_t x878 = 1104050073U;
	int64_t x879 = 25697808442LL;
	int32_t t196 = -167073;

    t196 = ((x877!=(x878-x879))/x880);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x886 = 11;
	static volatile int8_t x887 = -1;
	int64_t x888 = -1LL;

    t197 = ((x885!=(x886-x887))/x888);

    if (t197 != -1LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x889 = 0;
	uint16_t x890 = 25U;
	int16_t x891 = -1;
	uint16_t x892 = UINT16_MAX;
	volatile int32_t t198 = -16303950;

    t198 = ((x889!=(x890-x891))/x892);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x893 = INT16_MIN;
	int64_t x894 = INT64_MIN;
	volatile int8_t x895 = INT8_MIN;
	static int16_t x896 = INT16_MAX;
	volatile int32_t t199 = 135;

    t199 = ((x893!=(x894-x895))/x896);

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

