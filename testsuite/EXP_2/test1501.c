
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

int8_t x5 = -1;
int8_t x7 = INT8_MIN;
uint64_t x18 = 6035071728944997LLU;
uint8_t x23 = 43U;
int32_t t5 = -11;
static int32_t x32 = -1;
uint64_t x33 = 11LLU;
int32_t t8 = -30598700;
static volatile int32_t t14 = 0;
uint16_t x65 = 2U;
uint16_t x66 = 6322U;
uint32_t t18 = 240131373U;
int64_t x77 = -1LL;
int32_t x79 = INT32_MIN;
static uint8_t x80 = 1U;
volatile int32_t t19 = -52840516;
int16_t x88 = -1;
int8_t x90 = 1;
uint64_t x91 = 2883494025LLU;
uint8_t x99 = UINT8_MAX;
int32_t x100 = INT32_MAX;
static volatile int32_t t24 = -460;
int8_t x103 = INT8_MAX;
int64_t x106 = INT64_MIN;
int32_t x108 = INT32_MAX;
int16_t x109 = INT16_MAX;
uint8_t x111 = UINT8_MAX;
static int8_t x118 = INT8_MIN;
int8_t x124 = -1;
int32_t t30 = -3185;
uint16_t x135 = UINT16_MAX;
static volatile int32_t t33 = 0;
uint8_t x140 = 6U;
int64_t x142 = -282670788574049562LL;
uint64_t x151 = 11LLU;
static volatile uint64_t t37 = 51991249891LLU;
uint16_t x154 = 31783U;
int32_t t38 = -507371405;
static int32_t x159 = -1;
int32_t x160 = INT32_MIN;
volatile int8_t x163 = -2;
uint32_t t40 = 1996U;
uint16_t x166 = UINT16_MAX;
int64_t x173 = INT64_MIN;
uint32_t x175 = 10U;
int32_t t45 = 85;
uint64_t x185 = 3299LLU;
int64_t x198 = INT64_MAX;
int16_t x201 = -1;
int8_t x206 = -1;
volatile uint64_t x208 = UINT64_MAX;
int16_t x210 = INT16_MAX;
int32_t x216 = -4;
int32_t t53 = 506563379;
static int64_t x222 = 866LL;
uint16_t x225 = 9029U;
static int8_t x231 = INT8_MIN;
int32_t x237 = -1;
int8_t x240 = -1;
volatile int32_t x244 = -298;
uint16_t x247 = 30991U;
volatile int64_t t61 = 26074808045207LL;
int16_t x255 = INT16_MIN;
uint64_t x268 = UINT64_MAX;
volatile int64_t x271 = 1LL;
int64_t x280 = INT64_MIN;
int64_t t69 = -440746318080LL;
int32_t x281 = INT32_MIN;
static uint64_t x283 = UINT64_MAX;
volatile int32_t t71 = 3;
uint64_t x296 = 157456417LLU;
static int64_t x300 = INT64_MAX;
static int64_t t74 = 518181527LL;
volatile int32_t t75 = -77314339;
volatile int32_t x306 = 17;
int64_t x307 = INT64_MAX;
volatile int64_t t77 = INT64_MAX;
uint8_t x314 = 6U;
volatile int32_t x321 = 0;
volatile int64_t x322 = INT64_MIN;
int32_t t80 = -674271;
static int64_t x329 = INT64_MIN;
uint8_t x336 = UINT8_MAX;
static int32_t t85 = INT32_MIN;
int32_t x349 = -610;
static int32_t x351 = INT32_MIN;
uint64_t x354 = 35465466099LLU;
static int8_t x355 = INT8_MIN;
static int64_t t88 = INT64_MIN;
int64_t x359 = INT64_MIN;
volatile uint64_t x364 = UINT64_MAX;
static volatile uint8_t x370 = 27U;
volatile int8_t x375 = -3;
static int32_t x380 = INT32_MIN;
static int64_t t95 = INT64_MAX;
static uint32_t x389 = UINT32_MAX;
int16_t x395 = INT16_MIN;
volatile int32_t t98 = -2516565;
volatile int32_t x403 = INT32_MIN;
volatile int32_t x417 = 249639;
int32_t t105 = 84693;
int16_t x429 = INT16_MIN;
static volatile int32_t t108 = -1132;
int32_t x438 = 1930839;
volatile int32_t t112 = -2072539;
int16_t x456 = INT16_MIN;
int16_t x458 = INT16_MAX;
int16_t x459 = -1565;
uint16_t x460 = 3U;
volatile int64_t x461 = INT64_MAX;
int16_t x466 = -6;
volatile int32_t t116 = 6;
uint64_t x479 = 875150824694674LLU;
int16_t x483 = -1;
uint32_t x486 = 4U;
volatile int16_t x488 = -275;
static int32_t t121 = 2;
static volatile uint8_t x493 = 0U;
int32_t t123 = 1641;
int8_t x511 = INT8_MAX;
volatile int32_t t127 = INT32_MIN;
volatile int32_t x520 = 1815;
volatile int64_t x521 = INT64_MAX;
volatile int16_t x524 = INT16_MIN;
int16_t x527 = 370;
int32_t t133 = INT32_MIN;
int64_t x537 = -162465094116933LL;
uint64_t x539 = UINT64_MAX;
volatile uint64_t x553 = 1655LLU;
int32_t x564 = INT32_MAX;
int64_t x575 = INT64_MAX;
int8_t x576 = INT8_MIN;
int64_t x577 = -1LL;
volatile uint64_t t144 = 581457953LLU;
uint64_t x585 = 107201253460164LLU;
int64_t x591 = INT64_MAX;
static uint32_t x608 = 7542802U;
volatile int16_t x614 = INT16_MAX;
int64_t t154 = -315166157LL;
int32_t t155 = -1;
static int16_t x627 = INT16_MAX;
uint8_t x628 = 1U;
int32_t t156 = 15292;
uint64_t x629 = UINT64_MAX;
uint64_t x630 = 966661645LLU;
int32_t x641 = 30888323;
int16_t x643 = INT16_MIN;
int32_t x648 = INT32_MAX;
uint64_t x659 = 261909LLU;
volatile int64_t t164 = INT64_MIN;
static uint16_t x666 = UINT16_MAX;
int64_t t166 = 1611821335263LL;
int8_t x671 = -1;
int64_t x681 = 350221574923008057LL;
uint32_t x685 = UINT32_MAX;
volatile int8_t x688 = -1;
int64_t t172 = -130460977931832812LL;
volatile uint16_t x700 = 203U;
static int8_t x709 = -1;
static int64_t x713 = INT64_MIN;
uint64_t x715 = UINT64_MAX;
int16_t x716 = -1;
uint8_t x718 = UINT8_MAX;
uint16_t x719 = 24U;
volatile int32_t x720 = INT32_MAX;
volatile int32_t t181 = 38;
int8_t x732 = INT8_MIN;
int64_t x748 = -15067996769LL;
int32_t x755 = 52461002;
static uint8_t x765 = 6U;
static int64_t x771 = 95927572564487306LL;
int64_t x775 = 786336525008868070LL;
int16_t x787 = -2026;
int32_t x789 = INT32_MAX;
static int32_t x792 = 1883013;
int32_t t197 = 584979492;
int32_t x796 = INT32_MIN;


void f0(void) {
    	static uint64_t x1 = UINT64_MAX;
	static volatile uint8_t x2 = 13U;
	static int16_t x3 = 49;
	int16_t x4 = INT16_MAX;
	static int32_t t0 = -113;

    t0 = ((x1<=(x2==x3))*x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x6 = -1;
	int8_t x8 = -1;
	int32_t t1 = -499298340;

    t1 = ((x5<=(x6==x7))*x8);

    if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x9 = 0;
	int16_t x10 = -1;
	uint32_t x11 = 715U;
	static int8_t x12 = -1;
	int32_t t2 = 391550017;

    t2 = ((x9<=(x10==x11))*x12);

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MIN;
	int64_t x14 = INT64_MAX;
	uint32_t x15 = 640U;
	uint64_t x16 = UINT64_MAX;
	volatile uint64_t t3 = UINT64_MAX;

    t3 = ((x13<=(x14==x15))*x16);

    if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MIN;
	static volatile int64_t x19 = 21523398096390617LL;
	volatile uint8_t x20 = 118U;
	volatile int32_t t4 = 806;

    t4 = ((x17<=(x18==x19))*x20);

    if (t4 != 118) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x21 = -1LL;
	static volatile uint8_t x22 = 0U;
	uint16_t x24 = 22351U;

    t5 = ((x21<=(x22==x23))*x24);

    if (t5 != 22351) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = 498LLU;
	int32_t x26 = -2;
	int32_t x27 = -1;
	int64_t x28 = INT64_MAX;
	volatile int64_t t6 = 469453089502900LL;

    t6 = ((x25<=(x26==x27))*x28);

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint64_t x29 = 176162944LLU;
	int16_t x30 = INT16_MIN;
	int8_t x31 = INT8_MAX;
	volatile int32_t t7 = 186;

    t7 = ((x29<=(x30==x31))*x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x34 = -1;
	uint16_t x35 = 0U;
	static uint8_t x36 = UINT8_MAX;

    t8 = ((x33<=(x34==x35))*x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x37 = INT32_MIN;
	volatile int16_t x38 = INT16_MIN;
	int8_t x39 = -14;
	volatile uint8_t x40 = 14U;
	int32_t t9 = 1011114735;

    t9 = ((x37<=(x38==x39))*x40);

    if (t9 != 14) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = 2;
	uint16_t x42 = 240U;
	int32_t x43 = -105;
	int8_t x44 = -1;
	static volatile int32_t t10 = -17;

    t10 = ((x41<=(x42==x43))*x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x45 = INT32_MIN;
	int16_t x46 = INT16_MAX;
	int8_t x47 = INT8_MIN;
	volatile int8_t x48 = -13;
	volatile int32_t t11 = 6241;

    t11 = ((x45<=(x46==x47))*x48);

    if (t11 != -13) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x49 = 29;
	static int8_t x50 = 0;
	static int32_t x51 = -184221766;
	int64_t x52 = INT64_MAX;
	volatile int64_t t12 = -243052969709598LL;

    t12 = ((x49<=(x50==x51))*x52);

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x53 = -1;
	static int64_t x54 = INT64_MIN;
	int32_t x55 = -116;
	int16_t x56 = INT16_MAX;
	volatile int32_t t13 = -12;

    t13 = ((x53<=(x54==x55))*x56);

    if (t13 != 32767) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x57 = INT64_MIN;
	int64_t x58 = INT64_MAX;
	volatile uint64_t x59 = 5657017970947822LLU;
	int16_t x60 = INT16_MIN;

    t14 = ((x57<=(x58==x59))*x60);

    if (t14 != -32768) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = INT16_MIN;
	volatile int16_t x62 = INT16_MAX;
	static volatile int64_t x63 = -1LL;
	volatile uint16_t x64 = 50U;
	volatile int32_t t15 = -1;

    t15 = ((x61<=(x62==x63))*x64);

    if (t15 != 50) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x67 = INT8_MAX;
	static int8_t x68 = INT8_MIN;
	static int32_t t16 = 66072150;

    t16 = ((x65<=(x66==x67))*x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x69 = INT32_MIN;
	volatile uint64_t x70 = 118265095552245390LLU;
	uint64_t x71 = 180107337LLU;
	int16_t x72 = INT16_MAX;
	volatile int32_t t17 = -3;

    t17 = ((x69<=(x70==x71))*x72);

    if (t17 != 32767) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = -1LL;
	static int32_t x74 = -266631488;
	static volatile uint8_t x75 = UINT8_MAX;
	volatile uint32_t x76 = 4178244U;

    t18 = ((x73<=(x74==x75))*x76);

    if (t18 != 4178244U) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x78 = -4;

    t19 = ((x77<=(x78==x79))*x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x81 = UINT8_MAX;
	int8_t x82 = INT8_MAX;
	uint32_t x83 = UINT32_MAX;
	int32_t x84 = INT32_MIN;
	volatile int32_t t20 = 38;

    t20 = ((x81<=(x82==x83))*x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint32_t x85 = 1384302207U;
	int8_t x86 = -1;
	volatile int16_t x87 = -62;
	static volatile int32_t t21 = -1;

    t21 = ((x85<=(x86==x87))*x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x89 = -49009177;
	int16_t x92 = 3507;
	volatile int32_t t22 = 50190202;

    t22 = ((x89<=(x90==x91))*x92);

    if (t22 != 3507) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x93 = 820U;
	int8_t x94 = INT8_MAX;
	int8_t x95 = -1;
	int8_t x96 = 3;
	volatile int32_t t23 = -17;

    t23 = ((x93<=(x94==x95))*x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x97 = INT32_MAX;
	int32_t x98 = -1;

    t24 = ((x97<=(x98==x99))*x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = INT64_MIN;
	static int8_t x102 = -1;
	static volatile int32_t x104 = INT32_MIN;
	volatile int32_t t25 = INT32_MIN;

    t25 = ((x101<=(x102==x103))*x104);

    if (t25 != INT32_MIN) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x105 = INT8_MAX;
	static volatile uint32_t x107 = 390142305U;
	int32_t t26 = 28552707;

    t26 = ((x105<=(x106==x107))*x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x110 = INT32_MIN;
	volatile int32_t x112 = INT32_MIN;
	volatile int32_t t27 = 1265385;

    t27 = ((x109<=(x110==x111))*x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x113 = 12314;
	int16_t x114 = INT16_MIN;
	int64_t x115 = -13395LL;
	static uint16_t x116 = 15887U;
	volatile int32_t t28 = -48;

    t28 = ((x113<=(x114==x115))*x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x117 = 68U;
	int16_t x119 = INT16_MIN;
	volatile uint16_t x120 = UINT16_MAX;
	int32_t t29 = 251322;

    t29 = ((x117<=(x118==x119))*x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x121 = UINT64_MAX;
	uint8_t x122 = UINT8_MAX;
	uint64_t x123 = UINT64_MAX;

    t30 = ((x121<=(x122==x123))*x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x125 = -1LL;
	static int32_t x126 = INT32_MIN;
	static int8_t x127 = -1;
	static volatile uint32_t x128 = 8U;
	static uint32_t t31 = 162381U;

    t31 = ((x125<=(x126==x127))*x128);

    if (t31 != 8U) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x129 = 0U;
	int64_t x130 = INT64_MIN;
	static int8_t x131 = 46;
	static uint32_t x132 = UINT32_MAX;
	uint32_t t32 = UINT32_MAX;

    t32 = ((x129<=(x130==x131))*x132);

    if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = INT64_MIN;
	int8_t x134 = INT8_MAX;
	volatile int16_t x136 = INT16_MIN;

    t33 = ((x133<=(x134==x135))*x136);

    if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x137 = -1;
	int64_t x138 = -971LL;
	static int8_t x139 = INT8_MIN;
	volatile int32_t t34 = -85652643;

    t34 = ((x137<=(x138==x139))*x140);

    if (t34 != 6) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x141 = 715329U;
	int8_t x143 = INT8_MAX;
	int32_t x144 = -964871992;
	static volatile int32_t t35 = 100866;

    t35 = ((x141<=(x142==x143))*x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = -166856;
	volatile uint64_t x146 = UINT64_MAX;
	static int16_t x147 = -1;
	int32_t x148 = -488267;
	volatile int32_t t36 = -102;

    t36 = ((x145<=(x146==x147))*x148);

    if (t36 != -488267) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint32_t x149 = 236U;
	int8_t x150 = INT8_MIN;
	uint64_t x152 = 8315005572LLU;

    t37 = ((x149<=(x150==x151))*x152);

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = 14;
	static uint16_t x155 = UINT16_MAX;
	int32_t x156 = INT32_MIN;

    t38 = ((x153<=(x154==x155))*x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x157 = -48060736LL;
	static uint32_t x158 = 1540326U;
	volatile int32_t t39 = INT32_MIN;

    t39 = ((x157<=(x158==x159))*x160);

    if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = 94852LL;
	int8_t x162 = INT8_MIN;
	uint32_t x164 = 13028085U;

    t40 = ((x161<=(x162==x163))*x164);

    if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x165 = -5118LL;
	volatile uint16_t x167 = 11U;
	uint8_t x168 = 59U;
	int32_t t41 = 321028;

    t41 = ((x165<=(x166==x167))*x168);

    if (t41 != 59) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x169 = INT16_MIN;
	static uint8_t x170 = UINT8_MAX;
	uint32_t x171 = 807U;
	volatile uint16_t x172 = UINT16_MAX;
	volatile int32_t t42 = -1;

    t42 = ((x169<=(x170==x171))*x172);

    if (t42 != 65535) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x174 = INT8_MAX;
	uint32_t x176 = 13234395U;
	volatile uint32_t t43 = 355975816U;

    t43 = ((x173<=(x174==x175))*x176);

    if (t43 != 13234395U) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = INT64_MIN;
	uint64_t x178 = UINT64_MAX;
	static int16_t x179 = INT16_MIN;
	int64_t x180 = INT64_MIN;
	static int64_t t44 = INT64_MIN;

    t44 = ((x177<=(x178==x179))*x180);

    if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x181 = INT8_MIN;
	uint32_t x182 = UINT32_MAX;
	uint64_t x183 = UINT64_MAX;
	uint16_t x184 = 8U;

    t45 = ((x181<=(x182==x183))*x184);

    if (t45 != 8) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x186 = -1LL;
	volatile int32_t x187 = -410079207;
	uint16_t x188 = 568U;
	volatile int32_t t46 = -13865;

    t46 = ((x185<=(x186==x187))*x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int64_t x189 = INT64_MAX;
	int8_t x190 = INT8_MAX;
	uint16_t x191 = UINT16_MAX;
	int16_t x192 = INT16_MAX;
	volatile int32_t t47 = 1632942;

    t47 = ((x189<=(x190==x191))*x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = INT16_MAX;
	uint16_t x194 = 3443U;
	int16_t x195 = INT16_MIN;
	int16_t x196 = 1;
	volatile int32_t t48 = 29659919;

    t48 = ((x193<=(x194==x195))*x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = -7;
	int8_t x199 = INT8_MIN;
	volatile int64_t x200 = INT64_MIN;
	int64_t t49 = INT64_MIN;

    t49 = ((x197<=(x198==x199))*x200);

    if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x202 = 3U;
	uint16_t x203 = 0U;
	uint16_t x204 = 43U;
	int32_t t50 = -23946;

    t50 = ((x201<=(x202==x203))*x204);

    if (t50 != 43) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint32_t x205 = UINT32_MAX;
	static int8_t x207 = INT8_MIN;
	uint64_t t51 = 20292047418530LLU;

    t51 = ((x205<=(x206==x207))*x208);

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = 0;
	static uint64_t x211 = UINT64_MAX;
	int32_t x212 = INT32_MIN;
	volatile int32_t t52 = INT32_MIN;

    t52 = ((x209<=(x210==x211))*x212);

    if (t52 != INT32_MIN) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = INT32_MIN;
	uint32_t x214 = 344265U;
	int16_t x215 = INT16_MIN;

    t53 = ((x213<=(x214==x215))*x216);

    if (t53 != -4) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = INT16_MIN;
	int16_t x218 = -1;
	volatile int32_t x219 = 3;
	uint8_t x220 = 31U;
	volatile int32_t t54 = -498775771;

    t54 = ((x217<=(x218==x219))*x220);

    if (t54 != 31) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = -1;
	static int16_t x223 = INT16_MIN;
	static int32_t x224 = INT32_MIN;
	static volatile int32_t t55 = INT32_MIN;

    t55 = ((x221<=(x222==x223))*x224);

    if (t55 != INT32_MIN) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x226 = 283;
	int32_t x227 = INT32_MIN;
	int32_t x228 = -1;
	volatile int32_t t56 = 40207;

    t56 = ((x225<=(x226==x227))*x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x229 = 4U;
	static int16_t x230 = INT16_MAX;
	int64_t x232 = INT64_MAX;
	static volatile int64_t t57 = 481690LL;

    t57 = ((x229<=(x230==x231))*x232);

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint8_t x233 = 1U;
	volatile uint16_t x234 = 1U;
	volatile uint64_t x235 = 1380424LLU;
	int8_t x236 = -1;
	volatile int32_t t58 = 1;

    t58 = ((x233<=(x234==x235))*x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x238 = INT8_MIN;
	static volatile uint8_t x239 = 45U;
	int32_t t59 = -5449;

    t59 = ((x237<=(x238==x239))*x240);

    if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x241 = INT64_MIN;
	int16_t x242 = -1;
	static int8_t x243 = -1;
	volatile int32_t t60 = 26481;

    t60 = ((x241<=(x242==x243))*x244);

    if (t60 != -298) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x245 = 0U;
	int8_t x246 = -1;
	volatile int64_t x248 = 132549LL;

    t61 = ((x245<=(x246==x247))*x248);

    if (t61 != 132549LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = INT64_MIN;
	int16_t x250 = INT16_MIN;
	static int32_t x251 = INT32_MAX;
	int16_t x252 = INT16_MAX;
	static volatile int32_t t62 = 13;

    t62 = ((x249<=(x250==x251))*x252);

    if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x253 = -17063945608677LL;
	uint64_t x254 = UINT64_MAX;
	uint16_t x256 = 1U;
	int32_t t63 = -31;

    t63 = ((x253<=(x254==x255))*x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x257 = -1;
	uint16_t x258 = 14U;
	int16_t x259 = INT16_MIN;
	int8_t x260 = INT8_MIN;
	int32_t t64 = -1640;

    t64 = ((x257<=(x258==x259))*x260);

    if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x261 = INT64_MAX;
	int8_t x262 = 1;
	uint64_t x263 = UINT64_MAX;
	int8_t x264 = INT8_MIN;
	int32_t t65 = -10;

    t65 = ((x261<=(x262==x263))*x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint8_t x265 = 2U;
	uint32_t x266 = 78U;
	int16_t x267 = -1;
	uint64_t t66 = 34099170621332606LLU;

    t66 = ((x265<=(x266==x267))*x268);

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = INT64_MAX;
	static int16_t x270 = INT16_MIN;
	int64_t x272 = INT64_MIN;
	volatile int64_t t67 = -43LL;

    t67 = ((x269<=(x270==x271))*x272);

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile uint8_t x273 = UINT8_MAX;
	uint32_t x274 = UINT32_MAX;
	static int16_t x275 = INT16_MIN;
	uint8_t x276 = 105U;
	static volatile int32_t t68 = 95764;

    t68 = ((x273<=(x274==x275))*x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x277 = 22980U;
	volatile int16_t x278 = 2;
	int32_t x279 = INT32_MIN;

    t69 = ((x277<=(x278==x279))*x280);

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x282 = INT8_MAX;
	volatile int64_t x284 = -1LL;
	volatile int64_t t70 = -69700139564441856LL;

    t70 = ((x281<=(x282==x283))*x284);

    if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x285 = UINT16_MAX;
	uint64_t x286 = UINT64_MAX;
	uint32_t x287 = 7719437U;
	int8_t x288 = INT8_MAX;

    t71 = ((x285<=(x286==x287))*x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x289 = INT8_MIN;
	uint16_t x290 = 15315U;
	static uint8_t x291 = 0U;
	int16_t x292 = -1;
	int32_t t72 = -141620919;

    t72 = ((x289<=(x290==x291))*x292);

    if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint8_t x293 = 30U;
	volatile uint16_t x294 = 2U;
	int64_t x295 = INT64_MIN;
	volatile uint64_t t73 = 609LLU;

    t73 = ((x293<=(x294==x295))*x296);

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x297 = 5715LLU;
	int64_t x298 = INT64_MAX;
	int16_t x299 = INT16_MIN;

    t74 = ((x297<=(x298==x299))*x300);

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = 15196LL;
	uint32_t x302 = 49729U;
	volatile int16_t x303 = INT16_MIN;
	int8_t x304 = INT8_MIN;

    t75 = ((x301<=(x302==x303))*x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x305 = -1;
	int32_t x308 = INT32_MIN;
	int32_t t76 = INT32_MIN;

    t76 = ((x305<=(x306==x307))*x308);

    if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x309 = -1;
	int16_t x310 = INT16_MIN;
	static int32_t x311 = -6;
	int64_t x312 = INT64_MAX;

    t77 = ((x309<=(x310==x311))*x312);

    if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x313 = 1U;
	int8_t x315 = INT8_MIN;
	int16_t x316 = INT16_MIN;
	static volatile int32_t t78 = -13;

    t78 = ((x313<=(x314==x315))*x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x317 = INT64_MAX;
	static volatile int32_t x318 = INT32_MAX;
	int32_t x319 = INT32_MIN;
	int64_t x320 = -8360456LL;
	int64_t t79 = -45LL;

    t79 = ((x317<=(x318==x319))*x320);

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint8_t x323 = 65U;
	static int32_t x324 = -1;

    t80 = ((x321<=(x322==x323))*x324);

    if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint16_t x325 = 26344U;
	int16_t x326 = 29;
	int8_t x327 = INT8_MIN;
	int64_t x328 = INT64_MIN;
	int64_t t81 = -979989542742329LL;

    t81 = ((x325<=(x326==x327))*x328);

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint8_t x330 = 8U;
	int16_t x331 = -1;
	static volatile uint32_t x332 = UINT32_MAX;
	uint32_t t82 = UINT32_MAX;

    t82 = ((x329<=(x330==x331))*x332);

    if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = -1914;
	int32_t x334 = INT32_MIN;
	static uint8_t x335 = 14U;
	volatile int32_t t83 = -249023;

    t83 = ((x333<=(x334==x335))*x336);

    if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint64_t x337 = UINT64_MAX;
	int64_t x338 = INT64_MIN;
	int64_t x339 = INT64_MAX;
	int64_t x340 = INT64_MIN;
	int64_t t84 = -7799898158LL;

    t84 = ((x337<=(x338==x339))*x340);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x341 = -1;
	static int32_t x342 = -198033;
	volatile uint32_t x343 = 135U;
	volatile int32_t x344 = INT32_MIN;

    t85 = ((x341<=(x342==x343))*x344);

    if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x345 = -14;
	volatile int16_t x346 = INT16_MIN;
	volatile int32_t x347 = -2806344;
	static volatile int32_t x348 = INT32_MAX;
	volatile int32_t t86 = INT32_MAX;

    t86 = ((x345<=(x346==x347))*x348);

    if (t86 != INT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x350 = UINT64_MAX;
	int8_t x352 = INT8_MIN;
	volatile int32_t t87 = 542463;

    t87 = ((x349<=(x350==x351))*x352);

    if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = INT8_MIN;
	static int64_t x356 = INT64_MIN;

    t88 = ((x353<=(x354==x355))*x356);

    if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x357 = INT16_MIN;
	int64_t x358 = INT64_MIN;
	static int64_t x360 = INT64_MAX;
	volatile int64_t t89 = INT64_MAX;

    t89 = ((x357<=(x358==x359))*x360);

    if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x361 = 5U;
	volatile uint16_t x362 = UINT16_MAX;
	static uint32_t x363 = UINT32_MAX;
	volatile uint64_t t90 = 171537540387032LLU;

    t90 = ((x361<=(x362==x363))*x364);

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x365 = -1;
	int16_t x366 = INT16_MIN;
	static volatile int16_t x367 = INT16_MIN;
	uint64_t x368 = UINT64_MAX;
	uint64_t t91 = UINT64_MAX;

    t91 = ((x365<=(x366==x367))*x368);

    if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x369 = -1LL;
	volatile int16_t x371 = INT16_MIN;
	uint16_t x372 = 2387U;
	int32_t t92 = -1990651;

    t92 = ((x369<=(x370==x371))*x372);

    if (t92 != 2387) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x373 = UINT32_MAX;
	int32_t x374 = INT32_MAX;
	volatile int8_t x376 = -1;
	int32_t t93 = -3119286;

    t93 = ((x373<=(x374==x375))*x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x377 = INT16_MAX;
	static volatile int8_t x378 = INT8_MIN;
	int64_t x379 = -3154852224180LL;
	int32_t t94 = -782;

    t94 = ((x377<=(x378==x379))*x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x381 = -1;
	static uint32_t x382 = 64U;
	static int16_t x383 = 0;
	int64_t x384 = INT64_MAX;

    t95 = ((x381<=(x382==x383))*x384);

    if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x385 = INT16_MIN;
	volatile uint32_t x386 = 2461U;
	static volatile uint16_t x387 = UINT16_MAX;
	uint8_t x388 = 61U;
	int32_t t96 = 976566908;

    t96 = ((x385<=(x386==x387))*x388);

    if (t96 != 61) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x390 = INT8_MIN;
	int8_t x391 = -1;
	static volatile int64_t x392 = -478LL;
	int64_t t97 = 1577LL;

    t97 = ((x389<=(x390==x391))*x392);

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x393 = -1;
	int32_t x394 = -1;
	int16_t x396 = INT16_MAX;

    t98 = ((x393<=(x394==x395))*x396);

    if (t98 != 32767) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x397 = -1;
	uint16_t x398 = UINT16_MAX;
	int16_t x399 = -108;
	static int32_t x400 = -1;
	volatile int32_t t99 = -7890626;

    t99 = ((x397<=(x398==x399))*x400);

    if (t99 != -1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x401 = -11396635223298LL;
	volatile uint64_t x402 = UINT64_MAX;
	int32_t x404 = -1391585;
	volatile int32_t t100 = -412;

    t100 = ((x401<=(x402==x403))*x404);

    if (t100 != -1391585) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x405 = -18;
	uint64_t x406 = UINT64_MAX;
	int8_t x407 = INT8_MAX;
	int64_t x408 = -2147LL;
	volatile int64_t t101 = 1LL;

    t101 = ((x405<=(x406==x407))*x408);

    if (t101 != -2147LL) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint8_t x409 = UINT8_MAX;
	volatile int32_t x410 = INT32_MIN;
	int16_t x411 = INT16_MIN;
	int64_t x412 = -1LL;
	int64_t t102 = 257286738608092LL;

    t102 = ((x409<=(x410==x411))*x412);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x413 = 18358U;
	int8_t x414 = INT8_MIN;
	int64_t x415 = -6435669495347496LL;
	int32_t x416 = -1;
	volatile int32_t t103 = -7;

    t103 = ((x413<=(x414==x415))*x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x418 = 392947U;
	uint32_t x419 = 23U;
	volatile uint8_t x420 = UINT8_MAX;
	int32_t t104 = 46912;

    t104 = ((x417<=(x418==x419))*x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x421 = 7218304431663755LLU;
	static int64_t x422 = -233LL;
	int32_t x423 = INT32_MIN;
	volatile uint8_t x424 = 8U;

    t105 = ((x421<=(x422==x423))*x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = INT16_MAX;
	static volatile int64_t x426 = -1LL;
	static int32_t x427 = -1;
	static int64_t x428 = -3002613000LL;
	static int64_t t106 = 249108027096957815LL;

    t106 = ((x425<=(x426==x427))*x428);

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x430 = INT8_MIN;
	int16_t x431 = INT16_MIN;
	int16_t x432 = INT16_MAX;
	static volatile int32_t t107 = -4;

    t107 = ((x429<=(x430==x431))*x432);

    if (t107 != 32767) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint32_t x433 = UINT32_MAX;
	uint16_t x434 = 15U;
	int32_t x435 = INT32_MIN;
	static volatile int32_t x436 = -1;

    t108 = ((x433<=(x434==x435))*x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x437 = INT16_MIN;
	int32_t x439 = -1;
	int16_t x440 = INT16_MIN;
	volatile int32_t t109 = -1;

    t109 = ((x437<=(x438==x439))*x440);

    if (t109 != -32768) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x441 = INT16_MIN;
	static uint64_t x442 = 58950223274908LLU;
	int16_t x443 = -1;
	volatile int8_t x444 = -1;
	volatile int32_t t110 = -282545;

    t110 = ((x441<=(x442==x443))*x444);

    if (t110 != -1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x445 = 18559081;
	static uint8_t x446 = 13U;
	int32_t x447 = 1;
	int64_t x448 = INT64_MAX;
	volatile int64_t t111 = 31005208760506501LL;

    t111 = ((x445<=(x446==x447))*x448);

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint64_t x449 = UINT64_MAX;
	static uint32_t x450 = 15909U;
	int8_t x451 = INT8_MIN;
	int32_t x452 = INT32_MIN;

    t112 = ((x449<=(x450==x451))*x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = INT32_MIN;
	int16_t x454 = 1;
	uint8_t x455 = 1U;
	volatile int32_t t113 = -1;

    t113 = ((x453<=(x454==x455))*x456);

    if (t113 != -32768) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x457 = INT8_MAX;
	volatile int32_t t114 = 41059013;

    t114 = ((x457<=(x458==x459))*x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x462 = -1;
	uint64_t x463 = UINT64_MAX;
	uint8_t x464 = 1U;
	static volatile int32_t t115 = -25612;

    t115 = ((x461<=(x462==x463))*x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = INT64_MAX;
	uint16_t x467 = 432U;
	int16_t x468 = -1;

    t116 = ((x465<=(x466==x467))*x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x469 = INT32_MAX;
	int16_t x470 = -1;
	volatile int8_t x471 = 47;
	volatile int16_t x472 = INT16_MAX;
	int32_t t117 = -116;

    t117 = ((x469<=(x470==x471))*x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = -16;
	int32_t x474 = INT32_MAX;
	volatile int16_t x475 = INT16_MIN;
	static uint8_t x476 = 74U;
	static int32_t t118 = 826;

    t118 = ((x473<=(x474==x475))*x476);

    if (t118 != 74) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = -31252;
	volatile int8_t x478 = INT8_MIN;
	volatile int32_t x480 = INT32_MIN;
	int32_t t119 = INT32_MIN;

    t119 = ((x477<=(x478==x479))*x480);

    if (t119 != INT32_MIN) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = -1671LL;
	volatile int16_t x482 = INT16_MIN;
	static int8_t x484 = -3;
	volatile int32_t t120 = -956;

    t120 = ((x481<=(x482==x483))*x484);

    if (t120 != -3) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x485 = INT8_MIN;
	static uint32_t x487 = UINT32_MAX;

    t121 = ((x485<=(x486==x487))*x488);

    if (t121 != -275) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x489 = -3278;
	static int32_t x490 = INT32_MIN;
	uint8_t x491 = 4U;
	int8_t x492 = 4;
	int32_t t122 = 23956;

    t122 = ((x489<=(x490==x491))*x492);

    if (t122 != 4) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x494 = -1;
	static uint32_t x495 = 32U;
	uint16_t x496 = UINT16_MAX;

    t123 = ((x493<=(x494==x495))*x496);

    if (t123 != 65535) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int16_t x497 = -1;
	static uint8_t x498 = UINT8_MAX;
	uint8_t x499 = 3U;
	int64_t x500 = -1LL;
	static int64_t t124 = 208083876743691115LL;

    t124 = ((x497<=(x498==x499))*x500);

    if (t124 != -1LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x501 = 98U;
	volatile int16_t x502 = -1;
	int16_t x503 = -1;
	uint16_t x504 = UINT16_MAX;
	int32_t t125 = -1;

    t125 = ((x501<=(x502==x503))*x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint8_t x505 = UINT8_MAX;
	static int64_t x506 = -1LL;
	uint16_t x507 = UINT16_MAX;
	static int64_t x508 = -1LL;
	volatile int64_t t126 = 2562LL;

    t126 = ((x505<=(x506==x507))*x508);

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x509 = INT32_MIN;
	volatile int32_t x510 = -1;
	int32_t x512 = INT32_MIN;

    t127 = ((x509<=(x510==x511))*x512);

    if (t127 != INT32_MIN) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint16_t x513 = 3922U;
	volatile uint64_t x514 = 578131284LLU;
	volatile int8_t x515 = INT8_MIN;
	int32_t x516 = INT32_MAX;
	volatile int32_t t128 = -2016016;

    t128 = ((x513<=(x514==x515))*x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x517 = -1;
	uint32_t x518 = UINT32_MAX;
	uint16_t x519 = 11U;
	int32_t t129 = 49220860;

    t129 = ((x517<=(x518==x519))*x520);

    if (t129 != 1815) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x522 = INT8_MIN;
	static int8_t x523 = INT8_MIN;
	volatile int32_t t130 = 7;

    t130 = ((x521<=(x522==x523))*x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = -1LL;
	static int64_t x526 = INT64_MIN;
	int16_t x528 = INT16_MAX;
	int32_t t131 = -97173;

    t131 = ((x525<=(x526==x527))*x528);

    if (t131 != 32767) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x529 = INT16_MAX;
	uint64_t x530 = 44167229744458LLU;
	static volatile int64_t x531 = INT64_MAX;
	int32_t x532 = INT32_MIN;
	volatile int32_t t132 = -157195;

    t132 = ((x529<=(x530==x531))*x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x533 = INT8_MIN;
	static int64_t x534 = INT64_MAX;
	int64_t x535 = INT64_MIN;
	volatile int32_t x536 = INT32_MIN;

    t133 = ((x533<=(x534==x535))*x536);

    if (t133 != INT32_MIN) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x538 = INT8_MIN;
	int16_t x540 = INT16_MIN;
	static int32_t t134 = 10;

    t134 = ((x537<=(x538==x539))*x540);

    if (t134 != -32768) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x541 = 186U;
	int64_t x542 = -2175LL;
	int16_t x543 = 1503;
	int64_t x544 = -155213LL;
	static volatile int64_t t135 = -24LL;

    t135 = ((x541<=(x542==x543))*x544);

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x545 = INT8_MIN;
	uint64_t x546 = UINT64_MAX;
	volatile int32_t x547 = INT32_MAX;
	uint16_t x548 = UINT16_MAX;
	volatile int32_t t136 = 208240466;

    t136 = ((x545<=(x546==x547))*x548);

    if (t136 != 65535) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x549 = 36U;
	int32_t x550 = INT32_MIN;
	int32_t x551 = -366684067;
	static int64_t x552 = INT64_MAX;
	int64_t t137 = -868211LL;

    t137 = ((x549<=(x550==x551))*x552);

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x554 = 0;
	uint16_t x555 = UINT16_MAX;
	int16_t x556 = INT16_MIN;
	static int32_t t138 = 668;

    t138 = ((x553<=(x554==x555))*x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = INT64_MAX;
	static int64_t x558 = -1LL;
	uint32_t x559 = 0U;
	int64_t x560 = 10566012140520LL;
	volatile int64_t t139 = -1LL;

    t139 = ((x557<=(x558==x559))*x560);

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x561 = UINT32_MAX;
	volatile uint16_t x562 = 0U;
	volatile int32_t x563 = INT32_MIN;
	volatile int32_t t140 = 364071812;

    t140 = ((x561<=(x562==x563))*x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x565 = -1LL;
	uint32_t x566 = UINT32_MAX;
	int64_t x567 = INT64_MAX;
	static int64_t x568 = -1LL;
	int64_t t141 = -1043121840LL;

    t141 = ((x565<=(x566==x567))*x568);

    if (t141 != -1LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x569 = 1;
	uint16_t x570 = 12U;
	int32_t x571 = INT32_MIN;
	static volatile int16_t x572 = INT16_MIN;
	int32_t t142 = -3;

    t142 = ((x569<=(x570==x571))*x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x573 = -1LL;
	static int16_t x574 = INT16_MAX;
	int32_t t143 = 62;

    t143 = ((x573<=(x574==x575))*x576);

    if (t143 != -128) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x578 = INT8_MIN;
	uint32_t x579 = 104U;
	uint64_t x580 = 16388436809839LLU;

    t144 = ((x577<=(x578==x579))*x580);

    if (t144 != 16388436809839LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int64_t x581 = INT64_MIN;
	int64_t x582 = INT64_MIN;
	volatile int64_t x583 = INT64_MAX;
	int32_t x584 = -1;
	volatile int32_t t145 = 0;

    t145 = ((x581<=(x582==x583))*x584);

    if (t145 != -1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x586 = 2U;
	static uint64_t x587 = 1LLU;
	uint16_t x588 = 423U;
	volatile int32_t t146 = 128;

    t146 = ((x585<=(x586==x587))*x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = -1;
	uint8_t x590 = 1U;
	volatile int16_t x592 = INT16_MIN;
	int32_t t147 = -44;

    t147 = ((x589<=(x590==x591))*x592);

    if (t147 != -32768) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x593 = 331;
	static volatile int16_t x594 = -8;
	uint8_t x595 = 121U;
	int16_t x596 = INT16_MIN;
	volatile int32_t t148 = -712;

    t148 = ((x593<=(x594==x595))*x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile uint8_t x597 = UINT8_MAX;
	volatile uint32_t x598 = UINT32_MAX;
	volatile int8_t x599 = INT8_MIN;
	volatile uint16_t x600 = UINT16_MAX;
	static volatile int32_t t149 = -2128395;

    t149 = ((x597<=(x598==x599))*x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x601 = -1;
	int64_t x602 = INT64_MIN;
	volatile int64_t x603 = INT64_MIN;
	int8_t x604 = -5;
	int32_t t150 = -626339686;

    t150 = ((x601<=(x602==x603))*x604);

    if (t150 != -5) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x605 = 0U;
	volatile int32_t x606 = -4054;
	int32_t x607 = INT32_MAX;
	uint32_t t151 = 22U;

    t151 = ((x605<=(x606==x607))*x608);

    if (t151 != 7542802U) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = INT32_MAX;
	int32_t x610 = INT32_MAX;
	int16_t x611 = 0;
	volatile uint8_t x612 = 0U;
	volatile int32_t t152 = -170399089;

    t152 = ((x609<=(x610==x611))*x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x613 = -16910275387LL;
	int64_t x615 = INT64_MIN;
	int32_t x616 = INT32_MIN;
	static volatile int32_t t153 = INT32_MIN;

    t153 = ((x613<=(x614==x615))*x616);

    if (t153 != INT32_MIN) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint8_t x617 = 95U;
	uint16_t x618 = 0U;
	static volatile int32_t x619 = -903;
	int64_t x620 = INT64_MIN;

    t154 = ((x617<=(x618==x619))*x620);

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint8_t x621 = 25U;
	int8_t x622 = INT8_MAX;
	int16_t x623 = INT16_MAX;
	volatile int8_t x624 = INT8_MAX;

    t155 = ((x621<=(x622==x623))*x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile uint64_t x625 = 2873594LLU;
	volatile int16_t x626 = 2;

    t156 = ((x625<=(x626==x627))*x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x631 = 7542386;
	int8_t x632 = INT8_MIN;
	static volatile int32_t t157 = 1451;

    t157 = ((x629<=(x630==x631))*x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x633 = -1;
	static int32_t x634 = INT32_MIN;
	static uint32_t x635 = UINT32_MAX;
	int64_t x636 = -581212827624621218LL;
	volatile int64_t t158 = -33897286099002LL;

    t158 = ((x633<=(x634==x635))*x636);

    if (t158 != -581212827624621218LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x637 = -13LL;
	volatile uint32_t x638 = 15U;
	int64_t x639 = INT64_MAX;
	uint32_t x640 = UINT32_MAX;
	volatile uint32_t t159 = UINT32_MAX;

    t159 = ((x637<=(x638==x639))*x640);

    if (t159 != UINT32_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x642 = 7U;
	int64_t x644 = -1669345943095LL;
	int64_t t160 = 3875836572108681LL;

    t160 = ((x641<=(x642==x643))*x644);

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x645 = INT8_MIN;
	uint64_t x646 = UINT64_MAX;
	int16_t x647 = -1;
	volatile int32_t t161 = INT32_MAX;

    t161 = ((x645<=(x646==x647))*x648);

    if (t161 != INT32_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = -1LL;
	uint8_t x650 = 2U;
	int16_t x651 = -1;
	int16_t x652 = INT16_MIN;
	int32_t t162 = -109;

    t162 = ((x649<=(x650==x651))*x652);

    if (t162 != -32768) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = INT32_MIN;
	static int16_t x654 = -1;
	volatile int64_t x655 = INT64_MAX;
	int16_t x656 = INT16_MIN;
	int32_t t163 = 1378;

    t163 = ((x653<=(x654==x655))*x656);

    if (t163 != -32768) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = -101795093LL;
	volatile int64_t x658 = -2856622312LL;
	int64_t x660 = INT64_MIN;

    t164 = ((x657<=(x658==x659))*x660);

    if (t164 != INT64_MIN) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = 1;
	int8_t x662 = 1;
	int8_t x663 = INT8_MIN;
	volatile uint64_t x664 = UINT64_MAX;
	volatile uint64_t t165 = 1268LLU;

    t165 = ((x661<=(x662==x663))*x664);

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint8_t x665 = 0U;
	static uint8_t x667 = UINT8_MAX;
	int64_t x668 = -1LL;

    t166 = ((x665<=(x666==x667))*x668);

    if (t166 != -1LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x669 = 807;
	volatile uint16_t x670 = 15488U;
	volatile uint64_t x672 = UINT64_MAX;
	volatile uint64_t t167 = 1332LLU;

    t167 = ((x669<=(x670==x671))*x672);

    if (t167 != 0LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x673 = INT32_MIN;
	int8_t x674 = INT8_MIN;
	volatile int8_t x675 = 1;
	volatile uint8_t x676 = 16U;
	int32_t t168 = 32;

    t168 = ((x673<=(x674==x675))*x676);

    if (t168 != 16) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = -1;
	int32_t x678 = INT32_MAX;
	uint32_t x679 = UINT32_MAX;
	int64_t x680 = INT64_MAX;
	int64_t t169 = INT64_MAX;

    t169 = ((x677<=(x678==x679))*x680);

    if (t169 != INT64_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x682 = -1;
	int32_t x683 = INT32_MAX;
	int64_t x684 = -646025563311874531LL;
	int64_t t170 = 13154LL;

    t170 = ((x681<=(x682==x683))*x684);

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint32_t x686 = 5466U;
	uint64_t x687 = UINT64_MAX;
	volatile int32_t t171 = 21;

    t171 = ((x685<=(x686==x687))*x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x689 = -615;
	static uint32_t x690 = 1437U;
	static uint64_t x691 = UINT64_MAX;
	int64_t x692 = -9363705956LL;

    t172 = ((x689<=(x690==x691))*x692);

    if (t172 != -9363705956LL) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x693 = -1LL;
	int16_t x694 = 16241;
	uint32_t x695 = 25U;
	uint32_t x696 = 217207U;
	static volatile uint32_t t173 = 482536U;

    t173 = ((x693<=(x694==x695))*x696);

    if (t173 != 217207U) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x697 = UINT64_MAX;
	uint8_t x698 = 75U;
	int8_t x699 = -26;
	static volatile int32_t t174 = -174270;

    t174 = ((x697<=(x698==x699))*x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = INT8_MIN;
	int16_t x702 = INT16_MIN;
	int64_t x703 = INT64_MAX;
	int16_t x704 = 552;
	static int32_t t175 = 12719;

    t175 = ((x701<=(x702==x703))*x704);

    if (t175 != 552) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x705 = INT64_MIN;
	uint64_t x706 = 31LLU;
	static uint32_t x707 = 20U;
	static uint64_t x708 = UINT64_MAX;
	volatile uint64_t t176 = UINT64_MAX;

    t176 = ((x705<=(x706==x707))*x708);

    if (t176 != UINT64_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x710 = -1;
	int16_t x711 = INT16_MIN;
	int64_t x712 = 126LL;
	int64_t t177 = -9LL;

    t177 = ((x709<=(x710==x711))*x712);

    if (t177 != 126LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x714 = 27LLU;
	volatile int32_t t178 = 542083;

    t178 = ((x713<=(x714==x715))*x716);

    if (t178 != -1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x717 = INT16_MIN;
	volatile int32_t t179 = INT32_MAX;

    t179 = ((x717<=(x718==x719))*x720);

    if (t179 != INT32_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x721 = -1LL;
	static volatile int32_t x722 = INT32_MIN;
	int8_t x723 = -3;
	static int8_t x724 = -26;
	static volatile int32_t t180 = -11;

    t180 = ((x721<=(x722==x723))*x724);

    if (t180 != -26) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x725 = INT16_MIN;
	volatile int64_t x726 = -1LL;
	volatile int64_t x727 = 407284511LL;
	static int16_t x728 = INT16_MIN;

    t181 = ((x725<=(x726==x727))*x728);

    if (t181 != -32768) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x729 = INT16_MAX;
	volatile uint8_t x730 = 17U;
	volatile int32_t x731 = 5356715;
	int32_t t182 = 1988;

    t182 = ((x729<=(x730==x731))*x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x733 = -1LL;
	int32_t x734 = -236489;
	int16_t x735 = -1;
	static int8_t x736 = -1;
	static volatile int32_t t183 = 2712;

    t183 = ((x733<=(x734==x735))*x736);

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x737 = 0LL;
	static int16_t x738 = INT16_MIN;
	volatile int16_t x739 = -1;
	int8_t x740 = INT8_MIN;
	volatile int32_t t184 = 1;

    t184 = ((x737<=(x738==x739))*x740);

    if (t184 != -128) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x741 = UINT64_MAX;
	int8_t x742 = 1;
	static uint8_t x743 = 6U;
	static int64_t x744 = INT64_MIN;
	volatile int64_t t185 = 64210LL;

    t185 = ((x741<=(x742==x743))*x744);

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x745 = UINT8_MAX;
	uint32_t x746 = 117688806U;
	static int32_t x747 = -7785;
	volatile int64_t t186 = 2260515LL;

    t186 = ((x745<=(x746==x747))*x748);

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x749 = -8527;
	uint32_t x750 = 2488573U;
	int32_t x751 = INT32_MAX;
	volatile uint16_t x752 = 2U;
	static int32_t t187 = -6917;

    t187 = ((x749<=(x750==x751))*x752);

    if (t187 != 2) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x753 = 3LLU;
	int8_t x754 = -1;
	uint8_t x756 = 61U;
	int32_t t188 = 19000170;

    t188 = ((x753<=(x754==x755))*x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x757 = -1;
	uint32_t x758 = 1501418U;
	int8_t x759 = INT8_MIN;
	int64_t x760 = INT64_MAX;
	volatile int64_t t189 = INT64_MAX;

    t189 = ((x757<=(x758==x759))*x760);

    if (t189 != INT64_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile uint8_t x761 = 31U;
	int16_t x762 = INT16_MIN;
	int8_t x763 = INT8_MIN;
	volatile int64_t x764 = INT64_MIN;
	int64_t t190 = -3658988174763265074LL;

    t190 = ((x761<=(x762==x763))*x764);

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x766 = INT8_MIN;
	uint64_t x767 = 58LLU;
	uint16_t x768 = 12251U;
	volatile int32_t t191 = 586;

    t191 = ((x765<=(x766==x767))*x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = INT64_MIN;
	int16_t x770 = INT16_MAX;
	static int16_t x772 = INT16_MAX;
	volatile int32_t t192 = -923;

    t192 = ((x769<=(x770==x771))*x772);

    if (t192 != 32767) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x773 = INT32_MAX;
	static int32_t x774 = 201099455;
	volatile int32_t x776 = -1;
	int32_t t193 = 10936;

    t193 = ((x773<=(x774==x775))*x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint32_t x777 = UINT32_MAX;
	int64_t x778 = 649LL;
	uint32_t x779 = UINT32_MAX;
	volatile uint16_t x780 = 2U;
	int32_t t194 = -62163343;

    t194 = ((x777<=(x778==x779))*x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x781 = UINT64_MAX;
	static int64_t x782 = 2825906515594788LL;
	int8_t x783 = INT8_MIN;
	volatile int64_t x784 = 47449910355LL;
	int64_t t195 = -677LL;

    t195 = ((x781<=(x782==x783))*x784);

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x785 = INT8_MAX;
	int64_t x786 = INT64_MIN;
	int64_t x788 = INT64_MIN;
	volatile int64_t t196 = -2LL;

    t196 = ((x785<=(x786==x787))*x788);

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint64_t x790 = 17521LLU;
	static int8_t x791 = INT8_MIN;

    t197 = ((x789<=(x790==x791))*x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x793 = INT16_MIN;
	int16_t x794 = -11420;
	static int32_t x795 = -1;
	volatile int32_t t198 = INT32_MIN;

    t198 = ((x793<=(x794==x795))*x796);

    if (t198 != INT32_MIN) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x797 = 1396U;
	static uint64_t x798 = UINT64_MAX;
	static int64_t x799 = -1LL;
	volatile uint16_t x800 = UINT16_MAX;
	volatile int32_t t199 = 334;

    t199 = ((x797<=(x798==x799))*x800);

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

