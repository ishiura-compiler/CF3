
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

int8_t x1 = -1;
int32_t x6 = -1;
static int16_t x8 = -1;
uint32_t x9 = 445163U;
static int64_t x17 = INT64_MIN;
static uint64_t x23 = UINT64_MAX;
uint16_t x28 = 2U;
int32_t t6 = -8;
uint32_t x34 = 240682U;
int8_t x35 = INT8_MIN;
volatile int32_t t10 = -40565161;
volatile uint32_t x58 = UINT32_MAX;
uint32_t x66 = 381819U;
volatile int32_t t14 = -13;
uint16_t x69 = 6U;
static int32_t t16 = 6911;
uint32_t x79 = UINT32_MAX;
volatile int32_t t17 = 112738;
static volatile int32_t t18 = -52535096;
uint32_t x87 = 1886952656U;
uint32_t x92 = UINT32_MAX;
uint8_t x100 = 13U;
int16_t x101 = -1;
uint16_t x102 = 23608U;
int32_t x103 = INT32_MIN;
int32_t x104 = -1;
int8_t x105 = 1;
int64_t x110 = 33LL;
volatile int32_t t25 = -266691426;
volatile int16_t x114 = 0;
uint16_t x124 = 556U;
volatile int32_t t28 = 0;
int32_t x133 = 883199;
int16_t x134 = -1;
int64_t x135 = INT64_MIN;
volatile uint64_t x140 = 38LLU;
int32_t t32 = 1;
static int32_t t33 = 27453545;
int8_t x148 = INT8_MIN;
volatile int32_t t34 = 1700732;
uint16_t x151 = 15536U;
int32_t x152 = INT32_MIN;
uint16_t x154 = UINT16_MAX;
int8_t x155 = -1;
static volatile int32_t t36 = 369538;
int32_t t38 = -3402;
static volatile int8_t x183 = -51;
int64_t x194 = INT64_MIN;
uint32_t x195 = 207074U;
static uint16_t x205 = 0U;
static uint8_t x208 = UINT8_MAX;
volatile int32_t t45 = -4417780;
static uint64_t x215 = UINT64_MAX;
static uint64_t x217 = 4787806083947LLU;
uint16_t x219 = UINT16_MAX;
uint32_t x220 = UINT32_MAX;
volatile int32_t t47 = 25744;
volatile uint8_t x231 = 125U;
int8_t x236 = -6;
uint32_t x239 = UINT32_MAX;
static int32_t x240 = -1;
static int32_t t53 = -2423789;
int32_t t54 = 419471;
volatile int16_t x249 = 6020;
volatile uint32_t x253 = 12041334U;
int64_t x256 = -1LL;
static int32_t t57 = -115;
static int8_t x271 = INT8_MIN;
uint8_t x273 = 30U;
int16_t x275 = 4646;
uint8_t x276 = 33U;
volatile int32_t t61 = 937228;
volatile int8_t x285 = INT8_MIN;
int32_t t64 = -35314489;
static volatile int8_t x299 = INT8_MIN;
uint64_t x302 = 4645259734433070LLU;
volatile int64_t x307 = -1412LL;
int32_t x313 = -319;
static int32_t x329 = -5587;
static int32_t t73 = 21;
static int64_t x337 = 1LL;
int32_t x339 = INT32_MIN;
volatile int32_t t75 = -453870;
int32_t t79 = 133833;
volatile int64_t x357 = INT64_MAX;
int8_t x362 = -1;
static volatile uint64_t x380 = UINT64_MAX;
int64_t x382 = -708137177471LL;
volatile int16_t x386 = INT16_MIN;
int32_t t87 = -31;
int32_t x394 = -3121093;
static int16_t x398 = INT16_MIN;
static uint64_t x405 = 162992993423LLU;
int32_t t92 = -4;
volatile int32_t x419 = INT32_MAX;
int8_t x427 = INT8_MAX;
int32_t t96 = -839;
int32_t x430 = 516782350;
int8_t x439 = INT8_MIN;
int8_t x442 = INT8_MIN;
int32_t x444 = -126;
static int64_t x446 = INT64_MIN;
uint64_t x453 = UINT64_MAX;
uint64_t x456 = UINT64_MAX;
int32_t t103 = -55982756;
int16_t x463 = 4830;
int32_t x465 = INT32_MIN;
int64_t x466 = -775650652LL;
static uint32_t x472 = 0U;
volatile int32_t t107 = 3548462;
int8_t x475 = INT8_MIN;
static volatile int64_t x476 = INT64_MIN;
int16_t x477 = 0;
int16_t x484 = -1;
static int16_t x490 = INT16_MIN;
uint8_t x499 = 5U;
static uint64_t x500 = 7978186LLU;
int32_t x507 = -1;
int32_t x511 = INT32_MAX;
int16_t x523 = INT16_MIN;
int32_t t120 = -3460764;
volatile int32_t t121 = 854110;
volatile int32_t t123 = -5584;
int32_t x551 = -1;
int8_t x552 = 1;
static uint64_t x555 = UINT64_MAX;
int64_t x562 = -2LL;
int64_t x565 = -1LL;
int32_t t131 = -413;
volatile uint32_t x576 = 6289748U;
volatile int16_t x578 = -1293;
volatile int32_t t133 = -42;
int64_t x581 = -1LL;
static int32_t x587 = INT32_MIN;
int16_t x589 = -390;
static uint64_t x593 = 1597307LLU;
volatile int32_t t137 = 15504;
int8_t x601 = 1;
static int8_t x609 = -1;
int8_t x616 = INT8_MAX;
volatile uint32_t x617 = 109900U;
static int64_t x620 = INT64_MIN;
int16_t x623 = INT16_MAX;
static int32_t t145 = 3891076;
volatile int16_t x634 = INT16_MIN;
volatile uint16_t x641 = 60U;
static uint64_t x642 = 432776LLU;
int16_t x647 = 44;
int64_t x649 = 481699637096LL;
static int8_t x650 = INT8_MAX;
int64_t x653 = INT64_MIN;
uint8_t x656 = 125U;
volatile int32_t t152 = 1356;
int32_t t153 = -537723;
int64_t x665 = -1LL;
uint32_t x666 = UINT32_MAX;
volatile int32_t t154 = -1;
static volatile int16_t x671 = INT16_MIN;
int64_t x672 = -1LL;
volatile int32_t t155 = -11;
int32_t x676 = INT32_MIN;
uint8_t x689 = 14U;
int64_t x692 = INT64_MIN;
int16_t x697 = INT16_MAX;
int16_t x701 = INT16_MIN;
uint64_t x703 = 15637670LLU;
volatile int64_t x705 = 1LL;
int16_t x706 = -3;
uint16_t x710 = UINT16_MAX;
int64_t x711 = 23LL;
int32_t t163 = -13;
static volatile int32_t x718 = INT32_MIN;
int32_t t165 = -1027517;
volatile int16_t x721 = INT16_MAX;
int32_t x726 = -3614;
static int32_t x728 = INT32_MIN;
uint8_t x730 = UINT8_MAX;
int32_t t168 = 29;
int32_t t169 = 683;
int64_t x737 = INT64_MAX;
volatile int8_t x738 = -1;
uint16_t x739 = UINT16_MAX;
static int64_t x745 = 3046570316199728LL;
volatile int32_t t172 = 1;
volatile int32_t x749 = INT32_MAX;
static volatile uint32_t x752 = 2U;
volatile int32_t t173 = -467260315;
uint64_t x759 = 573452540060795130LLU;
static int8_t x770 = -1;
int16_t x772 = -1591;
static volatile int32_t t178 = 34749437;
int32_t t179 = 41778441;
int32_t t180 = -19757;
int8_t x785 = -1;
int8_t x788 = 0;
int32_t t182 = 10;
uint16_t x792 = 1219U;
static int32_t x795 = INT32_MIN;
int8_t x798 = INT8_MIN;
static volatile int32_t t185 = -14;
volatile int16_t x804 = INT16_MIN;
volatile int32_t x806 = INT32_MAX;
int32_t t187 = -317997911;
volatile int32_t t188 = -3129538;
int64_t x833 = 3676190681565113LL;
uint64_t x834 = UINT64_MAX;
static int16_t x838 = INT16_MAX;
int16_t x839 = -1;
int32_t t197 = 64;
static volatile int8_t x850 = -1;
int16_t x856 = 304;


void f0(void) {
    	uint32_t x2 = 67374U;
	int32_t x3 = INT32_MAX;
	int16_t x4 = 20;
	int32_t t0 = 84523284;

    t0 = ((x1+(x2/x3))>x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x5 = -1041672859255695143LL;
	uint16_t x7 = UINT16_MAX;
	int32_t t1 = -1;

    t1 = ((x5+(x6/x7))>x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x10 = 16921U;
	int32_t x11 = -1;
	static volatile int16_t x12 = -1;
	int32_t t2 = 154;

    t2 = ((x9+(x10/x11))>x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint16_t x13 = UINT16_MAX;
	volatile int16_t x14 = 1;
	static volatile int32_t x15 = INT32_MIN;
	uint16_t x16 = 186U;
	int32_t t3 = -3912;

    t3 = ((x13+(x14/x15))>x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint64_t x18 = 204675LLU;
	uint64_t x19 = 12899520959806LLU;
	int64_t x20 = INT64_MAX;
	int32_t t4 = -384826111;

    t4 = ((x17+(x18/x19))>x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint8_t x21 = UINT8_MAX;
	volatile int64_t x22 = -1LL;
	uint8_t x24 = UINT8_MAX;
	static volatile int32_t t5 = 2432;

    t5 = ((x21+(x22/x23))>x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = 1U;
	int32_t x26 = -1;
	uint16_t x27 = UINT16_MAX;

    t6 = ((x25+(x26/x27))>x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x29 = INT32_MAX;
	int64_t x30 = 140667743981523LL;
	uint64_t x31 = UINT64_MAX;
	uint16_t x32 = 1102U;
	int32_t t7 = 1;

    t7 = ((x29+(x30/x31))>x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x33 = 6569466U;
	volatile uint64_t x36 = 2951419353490951500LLU;
	int32_t t8 = -860283;

    t8 = ((x33+(x34/x35))>x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x37 = 6660U;
	static volatile int64_t x38 = -1LL;
	uint8_t x39 = 1U;
	static int8_t x40 = INT8_MIN;
	volatile int32_t t9 = 1;

    t9 = ((x37+(x38/x39))>x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x41 = 83063080;
	volatile int8_t x42 = INT8_MIN;
	int8_t x43 = INT8_MAX;
	volatile int16_t x44 = 7;

    t10 = ((x41+(x42/x43))>x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x45 = 8696U;
	int32_t x46 = INT32_MIN;
	volatile int8_t x47 = 2;
	int32_t x48 = -1;
	volatile int32_t t11 = 1270712;

    t11 = ((x45+(x46/x47))>x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint8_t x57 = 98U;
	uint64_t x59 = UINT64_MAX;
	uint8_t x60 = UINT8_MAX;
	static int32_t t12 = 10569176;

    t12 = ((x57+(x58/x59))>x60);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x61 = -1LL;
	static int64_t x62 = -3408LL;
	int64_t x63 = INT64_MIN;
	int64_t x64 = -1LL;
	static volatile int32_t t13 = 501;

    t13 = ((x61+(x62/x63))>x64);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x65 = -1;
	uint32_t x67 = UINT32_MAX;
	volatile int32_t x68 = INT32_MAX;

    t14 = ((x65+(x66/x67))>x68);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint64_t x70 = 16326380625LLU;
	int64_t x71 = -1LL;
	uint64_t x72 = UINT64_MAX;
	int32_t t15 = 2;

    t15 = ((x69+(x70/x71))>x72);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x73 = 2;
	static int64_t x74 = INT64_MIN;
	volatile int16_t x75 = INT16_MIN;
	static volatile int16_t x76 = INT16_MAX;

    t16 = ((x73+(x74/x75))>x76);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x77 = -1;
	uint8_t x78 = 1U;
	static int64_t x80 = 308865595161961603LL;

    t17 = ((x77+(x78/x79))>x80);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x81 = -602;
	static int32_t x82 = 636;
	uint32_t x83 = 112U;
	static volatile int64_t x84 = INT64_MIN;

    t18 = ((x81+(x82/x83))>x84);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x85 = UINT64_MAX;
	uint8_t x86 = 48U;
	uint8_t x88 = UINT8_MAX;
	volatile int32_t t19 = 22;

    t19 = ((x85+(x86/x87))>x88);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x89 = 27LL;
	static int64_t x90 = 661706LL;
	uint8_t x91 = UINT8_MAX;
	int32_t t20 = -239;

    t20 = ((x89+(x90/x91))>x92);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x93 = -1;
	uint16_t x94 = UINT16_MAX;
	int32_t x95 = -1;
	uint64_t x96 = UINT64_MAX;
	volatile int32_t t21 = 488435;

    t21 = ((x93+(x94/x95))>x96);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x97 = UINT64_MAX;
	int8_t x98 = INT8_MIN;
	int8_t x99 = -1;
	int32_t t22 = 450;

    t22 = ((x97+(x98/x99))>x100);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t t23 = 351516641;

    t23 = ((x101+(x102/x103))>x104);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x106 = -3253;
	int32_t x107 = -301683;
	int64_t x108 = INT64_MIN;
	static int32_t t24 = -25020363;

    t24 = ((x105+(x106/x107))>x108);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x109 = INT64_MIN;
	int8_t x111 = INT8_MAX;
	static int32_t x112 = -1;

    t25 = ((x109+(x110/x111))>x112);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x113 = -1;
	volatile int16_t x115 = INT16_MIN;
	static int64_t x116 = INT64_MIN;
	volatile int32_t t26 = -1;

    t26 = ((x113+(x114/x115))>x116);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x117 = INT8_MIN;
	int8_t x118 = INT8_MIN;
	int8_t x119 = INT8_MAX;
	int64_t x120 = 28646LL;
	int32_t t27 = -2;

    t27 = ((x117+(x118/x119))>x120);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint8_t x121 = 23U;
	int16_t x122 = 1;
	uint8_t x123 = UINT8_MAX;

    t28 = ((x121+(x122/x123))>x124);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x125 = -1;
	uint16_t x126 = 127U;
	uint16_t x127 = 536U;
	static int64_t x128 = INT64_MIN;
	int32_t t29 = -1;

    t29 = ((x125+(x126/x127))>x128);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x129 = INT16_MAX;
	int64_t x130 = INT64_MAX;
	int16_t x131 = INT16_MIN;
	uint8_t x132 = 2U;
	volatile int32_t t30 = 28;

    t30 = ((x129+(x130/x131))>x132);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x136 = -1;
	volatile int32_t t31 = 4;

    t31 = ((x133+(x134/x135))>x136);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x137 = -1;
	int64_t x138 = INT64_MIN;
	int64_t x139 = INT64_MIN;

    t32 = ((x137+(x138/x139))>x140);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x141 = UINT32_MAX;
	int16_t x142 = -1;
	uint32_t x143 = 827U;
	int8_t x144 = -21;

    t33 = ((x141+(x142/x143))>x144);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x145 = INT8_MIN;
	static uint8_t x146 = 1U;
	uint16_t x147 = UINT16_MAX;

    t34 = ((x145+(x146/x147))>x148);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x149 = UINT8_MAX;
	int32_t x150 = 45991;
	static volatile int32_t t35 = 254403;

    t35 = ((x149+(x150/x151))>x152);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x153 = INT64_MAX;
	int64_t x156 = INT64_MIN;

    t36 = ((x153+(x154/x155))>x156);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x157 = UINT16_MAX;
	static uint64_t x158 = 27367LLU;
	uint64_t x159 = UINT64_MAX;
	int16_t x160 = 15803;
	volatile int32_t t37 = 916;

    t37 = ((x157+(x158/x159))>x160);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x161 = 1U;
	uint16_t x162 = 482U;
	volatile int32_t x163 = INT32_MIN;
	volatile int16_t x164 = 1;

    t38 = ((x161+(x162/x163))>x164);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x173 = 2U;
	int16_t x174 = INT16_MAX;
	uint64_t x175 = UINT64_MAX;
	int64_t x176 = -1LL;
	int32_t t39 = 1;

    t39 = ((x173+(x174/x175))>x176);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x181 = INT64_MIN;
	static int16_t x182 = INT16_MIN;
	volatile uint8_t x184 = 0U;
	volatile int32_t t40 = 129327147;

    t40 = ((x181+(x182/x183))>x184);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x185 = -3;
	uint64_t x186 = 376454319LLU;
	static int64_t x187 = 21504587955142574LL;
	int8_t x188 = INT8_MIN;
	volatile int32_t t41 = -1758;

    t41 = ((x185+(x186/x187))>x188);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x189 = 466924166059862LLU;
	int32_t x190 = INT32_MIN;
	volatile int32_t x191 = -612;
	uint16_t x192 = 7886U;
	int32_t t42 = 2;

    t42 = ((x189+(x190/x191))>x192);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x193 = -50;
	uint8_t x196 = 25U;
	volatile int32_t t43 = -39956284;

    t43 = ((x193+(x194/x195))>x196);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x201 = INT32_MAX;
	static uint16_t x202 = 5397U;
	int32_t x203 = INT32_MAX;
	int8_t x204 = INT8_MIN;
	volatile int32_t t44 = 46776801;

    t44 = ((x201+(x202/x203))>x204);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x206 = UINT64_MAX;
	static int64_t x207 = INT64_MIN;

    t45 = ((x205+(x206/x207))>x208);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x213 = -160;
	int8_t x214 = 0;
	static int64_t x216 = 34LL;
	volatile int32_t t46 = -758168830;

    t46 = ((x213+(x214/x215))>x216);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x218 = UINT16_MAX;

    t47 = ((x217+(x218/x219))>x220);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x221 = 5U;
	static int16_t x222 = -6870;
	uint8_t x223 = 12U;
	static volatile uint16_t x224 = 164U;
	static volatile int32_t t48 = 2;

    t48 = ((x221+(x222/x223))>x224);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x225 = -1;
	int16_t x226 = INT16_MIN;
	uint32_t x227 = 243462576U;
	static int8_t x228 = -3;
	static volatile int32_t t49 = 0;

    t49 = ((x225+(x226/x227))>x228);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x229 = 1170U;
	int32_t x230 = -42;
	volatile uint16_t x232 = 428U;
	int32_t t50 = 1008;

    t50 = ((x229+(x230/x231))>x232);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x233 = 229841LLU;
	uint8_t x234 = 4U;
	int64_t x235 = -1LL;
	int32_t t51 = -4;

    t51 = ((x233+(x234/x235))>x236);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x237 = UINT32_MAX;
	volatile int32_t x238 = 877351108;
	volatile int32_t t52 = -453071;

    t52 = ((x237+(x238/x239))>x240);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x241 = INT64_MIN;
	uint8_t x242 = 57U;
	int8_t x243 = 3;
	int16_t x244 = 316;

    t53 = ((x241+(x242/x243))>x244);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x245 = -10734252;
	int8_t x246 = INT8_MIN;
	int16_t x247 = -1;
	int32_t x248 = INT32_MAX;

    t54 = ((x245+(x246/x247))>x248);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x250 = INT64_MIN;
	volatile int8_t x251 = -9;
	static int16_t x252 = 4;
	int32_t t55 = 680744834;

    t55 = ((x249+(x250/x251))>x252);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x254 = 9289670LL;
	volatile int8_t x255 = -1;
	int32_t t56 = -2060842;

    t56 = ((x253+(x254/x255))>x256);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x257 = 54829055;
	uint64_t x258 = 855736594768013559LLU;
	uint32_t x259 = UINT32_MAX;
	uint16_t x260 = UINT16_MAX;

    t57 = ((x257+(x258/x259))>x260);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x261 = INT16_MAX;
	static volatile int32_t x262 = -1;
	int64_t x263 = -5349353643585379LL;
	volatile int32_t x264 = INT32_MIN;
	int32_t t58 = 21407;

    t58 = ((x261+(x262/x263))>x264);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x265 = -1;
	static int16_t x266 = -1;
	uint64_t x267 = UINT64_MAX;
	int64_t x268 = -1655155074LL;
	int32_t t59 = 95;

    t59 = ((x265+(x266/x267))>x268);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x269 = INT8_MIN;
	uint16_t x270 = 3377U;
	static int16_t x272 = INT16_MIN;
	int32_t t60 = 83;

    t60 = ((x269+(x270/x271))>x272);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x274 = 36;

    t61 = ((x273+(x274/x275))>x276);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int16_t x277 = -15;
	uint16_t x278 = 291U;
	int16_t x279 = INT16_MIN;
	static uint8_t x280 = UINT8_MAX;
	volatile int32_t t62 = -11085904;

    t62 = ((x277+(x278/x279))>x280);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x286 = 37;
	int8_t x287 = INT8_MIN;
	int64_t x288 = INT64_MIN;
	static int32_t t63 = 130023201;

    t63 = ((x285+(x286/x287))>x288);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int16_t x293 = INT16_MAX;
	volatile int16_t x294 = INT16_MAX;
	int8_t x295 = INT8_MAX;
	static uint8_t x296 = 7U;

    t64 = ((x293+(x294/x295))>x296);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x297 = -1;
	uint8_t x298 = UINT8_MAX;
	uint64_t x300 = 1907517LLU;
	static volatile int32_t t65 = -5279;

    t65 = ((x297+(x298/x299))>x300);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x301 = -1;
	int8_t x303 = INT8_MAX;
	int64_t x304 = 10998226307LL;
	volatile int32_t t66 = -80508;

    t66 = ((x301+(x302/x303))>x304);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int32_t x305 = INT32_MIN;
	int32_t x306 = INT32_MIN;
	int8_t x308 = -28;
	volatile int32_t t67 = -252;

    t67 = ((x305+(x306/x307))>x308);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x309 = 4401;
	uint16_t x310 = 31984U;
	int16_t x311 = 1775;
	uint8_t x312 = 50U;
	volatile int32_t t68 = -12432;

    t68 = ((x309+(x310/x311))>x312);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x314 = -1140333LL;
	int8_t x315 = -1;
	uint32_t x316 = 613U;
	volatile int32_t t69 = 500244347;

    t69 = ((x313+(x314/x315))>x316);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint64_t x317 = UINT64_MAX;
	int8_t x318 = -1;
	int64_t x319 = INT64_MIN;
	volatile uint64_t x320 = UINT64_MAX;
	int32_t t70 = -605;

    t70 = ((x317+(x318/x319))>x320);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x321 = -1;
	int8_t x322 = 3;
	static uint16_t x323 = 15908U;
	static int8_t x324 = INT8_MAX;
	volatile int32_t t71 = -110;

    t71 = ((x321+(x322/x323))>x324);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x325 = UINT32_MAX;
	int16_t x326 = 40;
	int64_t x327 = -604759188513155LL;
	static int8_t x328 = INT8_MIN;
	int32_t t72 = 12226;

    t72 = ((x325+(x326/x327))>x328);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint32_t x330 = UINT32_MAX;
	int32_t x331 = 177;
	volatile uint32_t x332 = 10213U;

    t73 = ((x329+(x330/x331))>x332);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x333 = INT16_MAX;
	uint64_t x334 = 49925905470983LLU;
	volatile uint16_t x335 = UINT16_MAX;
	static int32_t x336 = -31;
	volatile int32_t t74 = 41904;

    t74 = ((x333+(x334/x335))>x336);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x338 = 0;
	uint32_t x340 = 545168267U;

    t75 = ((x337+(x338/x339))>x340);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint8_t x341 = 21U;
	static int8_t x342 = -7;
	int32_t x343 = INT32_MAX;
	uint16_t x344 = 1731U;
	volatile int32_t t76 = 1298;

    t76 = ((x341+(x342/x343))>x344);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x345 = INT64_MIN;
	int8_t x346 = INT8_MIN;
	int16_t x347 = -2178;
	uint32_t x348 = 14003U;
	static volatile int32_t t77 = 33043;

    t77 = ((x345+(x346/x347))>x348);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint8_t x349 = UINT8_MAX;
	volatile uint8_t x350 = 75U;
	uint8_t x351 = UINT8_MAX;
	int16_t x352 = INT16_MIN;
	volatile int32_t t78 = 1020;

    t78 = ((x349+(x350/x351))>x352);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x353 = 60LLU;
	uint16_t x354 = 264U;
	int32_t x355 = INT32_MIN;
	uint16_t x356 = UINT16_MAX;

    t79 = ((x353+(x354/x355))>x356);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x358 = INT32_MAX;
	int64_t x359 = INT64_MIN;
	uint32_t x360 = 6929359U;
	volatile int32_t t80 = -1;

    t80 = ((x357+(x358/x359))>x360);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x361 = INT16_MAX;
	int8_t x363 = INT8_MIN;
	uint32_t x364 = 18069U;
	int32_t t81 = 466978;

    t81 = ((x361+(x362/x363))>x364);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x369 = -1;
	uint32_t x370 = UINT32_MAX;
	uint16_t x371 = UINT16_MAX;
	volatile int64_t x372 = -15815683887LL;
	static int32_t t82 = -30;

    t82 = ((x369+(x370/x371))>x372);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x373 = INT16_MAX;
	int16_t x374 = -1;
	uint8_t x375 = 1U;
	uint16_t x376 = 48U;
	volatile int32_t t83 = -38640601;

    t83 = ((x373+(x374/x375))>x376);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x377 = -15622;
	static uint32_t x378 = 159507595U;
	volatile int16_t x379 = INT16_MAX;
	int32_t t84 = 693293;

    t84 = ((x377+(x378/x379))>x380);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x381 = 5;
	volatile uint16_t x383 = 7064U;
	int16_t x384 = -1;
	volatile int32_t t85 = -35840;

    t85 = ((x381+(x382/x383))>x384);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x385 = INT8_MAX;
	uint8_t x387 = UINT8_MAX;
	uint32_t x388 = 7846U;
	int32_t t86 = -112;

    t86 = ((x385+(x386/x387))>x388);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x389 = -1;
	int16_t x390 = 0;
	int32_t x391 = INT32_MAX;
	static volatile int64_t x392 = INT64_MAX;

    t87 = ((x389+(x390/x391))>x392);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x393 = -1;
	uint16_t x395 = 929U;
	int16_t x396 = -1;
	int32_t t88 = 58934395;

    t88 = ((x393+(x394/x395))>x396);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x397 = INT16_MAX;
	static uint16_t x399 = 1603U;
	uint8_t x400 = UINT8_MAX;
	volatile int32_t t89 = -1;

    t89 = ((x397+(x398/x399))>x400);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x401 = INT16_MIN;
	volatile int16_t x402 = -1;
	volatile int8_t x403 = INT8_MIN;
	volatile uint32_t x404 = 58394616U;
	int32_t t90 = -502020;

    t90 = ((x401+(x402/x403))>x404);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x406 = INT16_MIN;
	uint16_t x407 = 27U;
	static volatile uint64_t x408 = 558455992766053LLU;
	volatile int32_t t91 = -143;

    t91 = ((x405+(x406/x407))>x408);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x409 = INT64_MIN;
	volatile uint64_t x410 = UINT64_MAX;
	int64_t x411 = INT64_MAX;
	int32_t x412 = INT32_MAX;

    t92 = ((x409+(x410/x411))>x412);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x413 = INT32_MIN;
	int32_t x414 = INT32_MIN;
	static uint32_t x415 = UINT32_MAX;
	uint32_t x416 = 4988U;
	volatile int32_t t93 = -219;

    t93 = ((x413+(x414/x415))>x416);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x417 = -1;
	uint32_t x418 = 99429U;
	int32_t x420 = -1;
	volatile int32_t t94 = -5148171;

    t94 = ((x417+(x418/x419))>x420);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x421 = UINT16_MAX;
	uint64_t x422 = 637586334LLU;
	int8_t x423 = 2;
	int8_t x424 = INT8_MAX;
	int32_t t95 = 1617;

    t95 = ((x421+(x422/x423))>x424);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x425 = INT32_MIN;
	int32_t x426 = -1;
	static volatile int64_t x428 = INT64_MIN;

    t96 = ((x425+(x426/x427))>x428);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x429 = INT16_MIN;
	int16_t x431 = INT16_MIN;
	static uint32_t x432 = UINT32_MAX;
	static volatile int32_t t97 = 3984601;

    t97 = ((x429+(x430/x431))>x432);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x433 = INT16_MIN;
	int64_t x434 = 1646226204747544LL;
	volatile int16_t x435 = INT16_MAX;
	uint64_t x436 = 359112879393LLU;
	volatile int32_t t98 = -93683580;

    t98 = ((x433+(x434/x435))>x436);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x437 = 19711015LL;
	int16_t x438 = -143;
	volatile int16_t x440 = 272;
	int32_t t99 = 210284231;

    t99 = ((x437+(x438/x439))>x440);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x441 = 202301LL;
	static int64_t x443 = INT64_MIN;
	volatile int32_t t100 = 1;

    t100 = ((x441+(x442/x443))>x444);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x445 = 1;
	int32_t x447 = INT32_MIN;
	int32_t x448 = INT32_MIN;
	volatile int32_t t101 = 12658113;

    t101 = ((x445+(x446/x447))>x448);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x449 = 48136396610LLU;
	int16_t x450 = -39;
	static int16_t x451 = INT16_MIN;
	int16_t x452 = -360;
	int32_t t102 = 0;

    t102 = ((x449+(x450/x451))>x452);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x454 = INT32_MIN;
	uint16_t x455 = 755U;

    t103 = ((x453+(x454/x455))>x456);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x457 = -4;
	int32_t x458 = 15965847;
	int8_t x459 = -1;
	uint64_t x460 = 4326LLU;
	int32_t t104 = 5384050;

    t104 = ((x457+(x458/x459))>x460);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint32_t x461 = 2808791U;
	volatile uint32_t x462 = 37U;
	int32_t x464 = -8;
	static int32_t t105 = 6;

    t105 = ((x461+(x462/x463))>x464);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x467 = -1;
	uint16_t x468 = 53U;
	volatile int32_t t106 = 1;

    t106 = ((x465+(x466/x467))>x468);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x469 = UINT16_MAX;
	int16_t x470 = -1;
	static int16_t x471 = INT16_MIN;

    t107 = ((x469+(x470/x471))>x472);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x473 = -1;
	int32_t x474 = -40463466;
	int32_t t108 = -667591;

    t108 = ((x473+(x474/x475))>x476);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x478 = INT32_MAX;
	static int16_t x479 = -1;
	int8_t x480 = 38;
	int32_t t109 = 55;

    t109 = ((x477+(x478/x479))>x480);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x481 = 205252809LL;
	uint16_t x482 = 23012U;
	int16_t x483 = -6;
	static int32_t t110 = 168358;

    t110 = ((x481+(x482/x483))>x484);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint32_t x485 = UINT32_MAX;
	int64_t x486 = -1LL;
	volatile int8_t x487 = INT8_MIN;
	static uint16_t x488 = 37U;
	int32_t t111 = -9425;

    t111 = ((x485+(x486/x487))>x488);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x489 = 104U;
	static int64_t x491 = INT64_MIN;
	int32_t x492 = INT32_MAX;
	volatile int32_t t112 = 2536;

    t112 = ((x489+(x490/x491))>x492);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int8_t x493 = INT8_MIN;
	int16_t x494 = INT16_MIN;
	uint8_t x495 = 67U;
	uint64_t x496 = UINT64_MAX;
	volatile int32_t t113 = 1;

    t113 = ((x493+(x494/x495))>x496);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x497 = INT8_MAX;
	volatile uint16_t x498 = 54U;
	int32_t t114 = 2887573;

    t114 = ((x497+(x498/x499))>x500);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x501 = -14;
	uint8_t x502 = UINT8_MAX;
	int64_t x503 = INT64_MAX;
	uint64_t x504 = UINT64_MAX;
	int32_t t115 = -5552;

    t115 = ((x501+(x502/x503))>x504);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x505 = -1497699LL;
	volatile int8_t x506 = -1;
	int32_t x508 = INT32_MIN;
	int32_t t116 = 50074033;

    t116 = ((x505+(x506/x507))>x508);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x509 = -1107;
	int64_t x510 = INT64_MIN;
	volatile uint64_t x512 = UINT64_MAX;
	int32_t t117 = 207;

    t117 = ((x509+(x510/x511))>x512);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x517 = 4002;
	volatile uint16_t x518 = 24U;
	volatile uint8_t x519 = 2U;
	int16_t x520 = 1482;
	volatile int32_t t118 = -79990;

    t118 = ((x517+(x518/x519))>x520);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint8_t x521 = UINT8_MAX;
	static uint8_t x522 = 0U;
	static uint64_t x524 = 1681951258381010LLU;
	int32_t t119 = -5094;

    t119 = ((x521+(x522/x523))>x524);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x525 = -1;
	int8_t x526 = INT8_MAX;
	int16_t x527 = INT16_MIN;
	static int16_t x528 = -1;

    t120 = ((x525+(x526/x527))>x528);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x529 = INT32_MAX;
	int32_t x530 = INT32_MIN;
	volatile int64_t x531 = INT64_MAX;
	uint8_t x532 = UINT8_MAX;

    t121 = ((x529+(x530/x531))>x532);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x533 = 2398U;
	uint8_t x534 = 5U;
	static int16_t x535 = -1;
	volatile int64_t x536 = INT64_MIN;
	int32_t t122 = 11813292;

    t122 = ((x533+(x534/x535))>x536);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x537 = -1;
	int16_t x538 = -384;
	volatile uint64_t x539 = UINT64_MAX;
	int64_t x540 = INT64_MAX;

    t123 = ((x537+(x538/x539))>x540);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x541 = INT8_MIN;
	volatile int32_t x542 = 129890;
	uint64_t x543 = 4543655207029402160LLU;
	uint16_t x544 = 5378U;
	volatile int32_t t124 = 1953563;

    t124 = ((x541+(x542/x543))>x544);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint16_t x545 = 3151U;
	volatile uint64_t x546 = 74776186018890LLU;
	static volatile int64_t x547 = 23131LL;
	uint64_t x548 = UINT64_MAX;
	int32_t t125 = 233967478;

    t125 = ((x545+(x546/x547))>x548);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x549 = 1645260476U;
	int8_t x550 = INT8_MAX;
	volatile int32_t t126 = -159487727;

    t126 = ((x549+(x550/x551))>x552);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x553 = INT32_MIN;
	volatile uint32_t x554 = 33276U;
	int8_t x556 = INT8_MAX;
	volatile int32_t t127 = -74683;

    t127 = ((x553+(x554/x555))>x556);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x557 = 1;
	int16_t x558 = INT16_MIN;
	volatile uint16_t x559 = 20U;
	int64_t x560 = 250892462886977703LL;
	static volatile int32_t t128 = 891131;

    t128 = ((x557+(x558/x559))>x560);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x561 = 891LL;
	static int32_t x563 = INT32_MIN;
	uint64_t x564 = 1086244LLU;
	static int32_t t129 = -931435;

    t129 = ((x561+(x562/x563))>x564);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x566 = INT8_MIN;
	int8_t x567 = 2;
	int64_t x568 = 1503LL;
	static int32_t t130 = 1688;

    t130 = ((x565+(x566/x567))>x568);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x569 = 173206416984678835LLU;
	uint64_t x570 = UINT64_MAX;
	static int64_t x571 = INT64_MIN;
	int32_t x572 = 263875590;

    t131 = ((x569+(x570/x571))>x572);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x573 = 1;
	volatile uint16_t x574 = 239U;
	int32_t x575 = -1;
	volatile int32_t t132 = 2646309;

    t132 = ((x573+(x574/x575))>x576);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x577 = INT16_MIN;
	volatile int32_t x579 = INT32_MAX;
	int8_t x580 = -1;

    t133 = ((x577+(x578/x579))>x580);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint16_t x582 = 12U;
	static int8_t x583 = INT8_MIN;
	int64_t x584 = -1LL;
	static int32_t t134 = 21;

    t134 = ((x581+(x582/x583))>x584);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint16_t x585 = 3U;
	volatile int16_t x586 = INT16_MIN;
	static volatile int64_t x588 = INT64_MIN;
	int32_t t135 = -3815;

    t135 = ((x585+(x586/x587))>x588);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint64_t x590 = 25484535385270885LLU;
	uint64_t x591 = 9LLU;
	volatile int16_t x592 = INT16_MAX;
	volatile int32_t t136 = 1644;

    t136 = ((x589+(x590/x591))>x592);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x594 = -1;
	static uint32_t x595 = 13U;
	volatile int64_t x596 = -1LL;

    t137 = ((x593+(x594/x595))>x596);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x602 = UINT8_MAX;
	volatile uint16_t x603 = 16U;
	uint32_t x604 = UINT32_MAX;
	volatile int32_t t138 = 881463;

    t138 = ((x601+(x602/x603))>x604);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x605 = 16;
	int16_t x606 = INT16_MAX;
	int32_t x607 = 74;
	uint8_t x608 = 11U;
	int32_t t139 = 2046;

    t139 = ((x605+(x606/x607))>x608);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x610 = 20U;
	int8_t x611 = INT8_MAX;
	int8_t x612 = -1;
	static int32_t t140 = -2;

    t140 = ((x609+(x610/x611))>x612);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x613 = INT64_MIN;
	uint64_t x614 = 7049653914789LLU;
	static int8_t x615 = INT8_MAX;
	int32_t t141 = -100;

    t141 = ((x613+(x614/x615))>x616);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x618 = 1502147094LLU;
	int8_t x619 = INT8_MAX;
	int32_t t142 = 0;

    t142 = ((x617+(x618/x619))>x620);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x621 = 74U;
	uint16_t x622 = UINT16_MAX;
	uint64_t x624 = UINT64_MAX;
	volatile int32_t t143 = -28;

    t143 = ((x621+(x622/x623))>x624);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x625 = UINT8_MAX;
	uint32_t x626 = 19192U;
	uint8_t x627 = 1U;
	int16_t x628 = INT16_MIN;
	static int32_t t144 = -6;

    t144 = ((x625+(x626/x627))>x628);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x629 = INT8_MAX;
	volatile int32_t x630 = -14;
	int8_t x631 = INT8_MIN;
	int8_t x632 = INT8_MIN;

    t145 = ((x629+(x630/x631))>x632);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x633 = INT8_MIN;
	int16_t x635 = -1;
	uint8_t x636 = 1U;
	volatile int32_t t146 = 7063043;

    t146 = ((x633+(x634/x635))>x636);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint32_t x637 = 215U;
	int32_t x638 = 94245;
	int32_t x639 = INT32_MIN;
	int16_t x640 = -1;
	volatile int32_t t147 = 207;

    t147 = ((x637+(x638/x639))>x640);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x643 = 10222U;
	int16_t x644 = -1;
	int32_t t148 = -3579;

    t148 = ((x641+(x642/x643))>x644);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x645 = INT16_MIN;
	volatile uint64_t x646 = 3945867676LLU;
	int16_t x648 = -46;
	int32_t t149 = 8;

    t149 = ((x645+(x646/x647))>x648);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x651 = INT64_MIN;
	int32_t x652 = INT32_MIN;
	static volatile int32_t t150 = -1;

    t150 = ((x649+(x650/x651))>x652);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x654 = -4;
	int16_t x655 = INT16_MIN;
	int32_t t151 = 250;

    t151 = ((x653+(x654/x655))>x656);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint16_t x657 = 0U;
	int64_t x658 = INT64_MIN;
	uint64_t x659 = 422LLU;
	int8_t x660 = INT8_MAX;

    t152 = ((x657+(x658/x659))>x660);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x661 = -153;
	int64_t x662 = 1LL;
	uint32_t x663 = 27U;
	int64_t x664 = INT64_MAX;

    t153 = ((x661+(x662/x663))>x664);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x667 = -2321;
	uint32_t x668 = 148014281U;

    t154 = ((x665+(x666/x667))>x668);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile uint16_t x669 = UINT16_MAX;
	static int64_t x670 = INT64_MIN;

    t155 = ((x669+(x670/x671))>x672);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x673 = UINT8_MAX;
	int8_t x674 = 23;
	int64_t x675 = INT64_MIN;
	static volatile int32_t t156 = 120;

    t156 = ((x673+(x674/x675))>x676);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x677 = -27;
	int64_t x678 = 9LL;
	static int8_t x679 = -42;
	uint16_t x680 = UINT16_MAX;
	int32_t t157 = 1;

    t157 = ((x677+(x678/x679))>x680);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x685 = 1;
	volatile int8_t x686 = INT8_MIN;
	uint16_t x687 = UINT16_MAX;
	static uint16_t x688 = 154U;
	volatile int32_t t158 = -173715553;

    t158 = ((x685+(x686/x687))>x688);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x690 = -1;
	uint32_t x691 = 139U;
	int32_t t159 = -729;

    t159 = ((x689+(x690/x691))>x692);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x698 = INT16_MIN;
	static uint64_t x699 = 11428160113LLU;
	int64_t x700 = 1882173446330LL;
	volatile int32_t t160 = -180;

    t160 = ((x697+(x698/x699))>x700);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x702 = 7728415LL;
	int16_t x704 = INT16_MIN;
	volatile int32_t t161 = -23757012;

    t161 = ((x701+(x702/x703))>x704);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x707 = 5;
	uint8_t x708 = 37U;
	volatile int32_t t162 = 11715984;

    t162 = ((x705+(x706/x707))>x708);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint16_t x709 = 7U;
	uint16_t x712 = 97U;

    t163 = ((x709+(x710/x711))>x712);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x713 = -1;
	uint8_t x714 = 2U;
	int16_t x715 = -1;
	int16_t x716 = -1;
	static int32_t t164 = -6310244;

    t164 = ((x713+(x714/x715))>x716);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile uint64_t x717 = 6628505131LLU;
	int64_t x719 = INT64_MIN;
	int64_t x720 = 21974903LL;

    t165 = ((x717+(x718/x719))>x720);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x722 = INT32_MIN;
	volatile uint64_t x723 = 48LLU;
	int32_t x724 = -713;
	int32_t t166 = -9108519;

    t166 = ((x721+(x722/x723))>x724);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x725 = INT8_MIN;
	static volatile int8_t x727 = -1;
	int32_t t167 = 567893;

    t167 = ((x725+(x726/x727))>x728);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x729 = 6U;
	static uint64_t x731 = UINT64_MAX;
	uint64_t x732 = 33118344308332820LLU;

    t168 = ((x729+(x730/x731))>x732);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x733 = INT64_MIN;
	uint8_t x734 = 122U;
	static uint16_t x735 = UINT16_MAX;
	uint64_t x736 = UINT64_MAX;

    t169 = ((x733+(x734/x735))>x736);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x740 = 4285668475279867LLU;
	volatile int32_t t170 = -2020;

    t170 = ((x737+(x738/x739))>x740);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x741 = UINT8_MAX;
	static uint32_t x742 = 538564U;
	static volatile int64_t x743 = -1LL;
	uint8_t x744 = 23U;
	volatile int32_t t171 = 9494106;

    t171 = ((x741+(x742/x743))>x744);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x746 = 76360U;
	volatile uint16_t x747 = UINT16_MAX;
	int16_t x748 = INT16_MIN;

    t172 = ((x745+(x746/x747))>x748);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x750 = -4089861473023285LL;
	int64_t x751 = INT64_MIN;

    t173 = ((x749+(x750/x751))>x752);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x753 = INT8_MIN;
	volatile int64_t x754 = -1LL;
	int32_t x755 = INT32_MIN;
	uint8_t x756 = 13U;
	int32_t t174 = 1;

    t174 = ((x753+(x754/x755))>x756);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x757 = UINT8_MAX;
	static uint16_t x758 = UINT16_MAX;
	int64_t x760 = INT64_MIN;
	int32_t t175 = -10;

    t175 = ((x757+(x758/x759))>x760);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x761 = INT64_MIN;
	int16_t x762 = -1;
	volatile uint8_t x763 = 9U;
	uint8_t x764 = 101U;
	static int32_t t176 = 12;

    t176 = ((x761+(x762/x763))>x764);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x765 = UINT32_MAX;
	int64_t x766 = 7420LL;
	int16_t x767 = -9522;
	int8_t x768 = 1;
	int32_t t177 = 35920;

    t177 = ((x765+(x766/x767))>x768);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x769 = -1446;
	uint16_t x771 = 3218U;

    t178 = ((x769+(x770/x771))>x772);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x773 = 2LL;
	volatile int8_t x774 = INT8_MIN;
	uint8_t x775 = UINT8_MAX;
	uint64_t x776 = 223466728805501122LLU;

    t179 = ((x773+(x774/x775))>x776);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x777 = 28823514;
	static volatile uint16_t x778 = 0U;
	uint32_t x779 = UINT32_MAX;
	int16_t x780 = INT16_MIN;

    t180 = ((x777+(x778/x779))>x780);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x781 = INT32_MIN;
	static uint32_t x782 = 726210U;
	int16_t x783 = INT16_MAX;
	uint16_t x784 = UINT16_MAX;
	static int32_t t181 = -17721902;

    t181 = ((x781+(x782/x783))>x784);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x786 = 64158128;
	static int32_t x787 = -1;

    t182 = ((x785+(x786/x787))>x788);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x789 = 443957207;
	static volatile int64_t x790 = -390LL;
	uint64_t x791 = 2004550LLU;
	int32_t t183 = -3674;

    t183 = ((x789+(x790/x791))>x792);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint8_t x793 = 82U;
	static int16_t x794 = -1;
	static int16_t x796 = INT16_MIN;
	int32_t t184 = -2006663;

    t184 = ((x793+(x794/x795))>x796);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x797 = INT16_MAX;
	static volatile int32_t x799 = INT32_MIN;
	int8_t x800 = INT8_MIN;

    t185 = ((x797+(x798/x799))>x800);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int64_t x801 = INT64_MIN;
	volatile uint64_t x802 = UINT64_MAX;
	int16_t x803 = -1;
	int32_t t186 = 1747593;

    t186 = ((x801+(x802/x803))>x804);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x805 = -1;
	uint16_t x807 = UINT16_MAX;
	uint8_t x808 = 33U;

    t187 = ((x805+(x806/x807))>x808);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint8_t x809 = UINT8_MAX;
	int8_t x810 = -1;
	int8_t x811 = INT8_MIN;
	int32_t x812 = 4357790;

    t188 = ((x809+(x810/x811))>x812);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x813 = 548386468134LLU;
	static int64_t x814 = 6980228766LL;
	uint8_t x815 = UINT8_MAX;
	static volatile int32_t x816 = INT32_MIN;
	static int32_t t189 = 371;

    t189 = ((x813+(x814/x815))>x816);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x817 = INT32_MIN;
	int8_t x818 = INT8_MIN;
	volatile int8_t x819 = -1;
	uint16_t x820 = 388U;
	volatile int32_t t190 = -128658;

    t190 = ((x817+(x818/x819))>x820);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x821 = 1;
	int8_t x822 = INT8_MIN;
	volatile int64_t x823 = 812469LL;
	uint64_t x824 = UINT64_MAX;
	volatile int32_t t191 = 484;

    t191 = ((x821+(x822/x823))>x824);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x825 = INT32_MIN;
	int16_t x826 = -7;
	uint64_t x827 = 551788481739807LLU;
	int16_t x828 = -15;
	int32_t t192 = -5288;

    t192 = ((x825+(x826/x827))>x828);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x829 = -1;
	int32_t x830 = 1;
	volatile int16_t x831 = -1;
	int8_t x832 = -3;
	int32_t t193 = -64435578;

    t193 = ((x829+(x830/x831))>x832);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x835 = INT64_MIN;
	int64_t x836 = INT64_MIN;
	static volatile int32_t t194 = 576;

    t194 = ((x833+(x834/x835))>x836);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x837 = 0;
	volatile int32_t x840 = INT32_MIN;
	int32_t t195 = -7897429;

    t195 = ((x837+(x838/x839))>x840);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x841 = -1;
	uint64_t x842 = 187LLU;
	uint8_t x843 = 11U;
	uint32_t x844 = 1537U;
	volatile int32_t t196 = -64019;

    t196 = ((x841+(x842/x843))>x844);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x845 = -1LL;
	uint32_t x846 = 124152567U;
	int16_t x847 = INT16_MIN;
	int8_t x848 = INT8_MIN;

    t197 = ((x845+(x846/x847))>x848);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x849 = INT16_MAX;
	static int16_t x851 = -3665;
	volatile int64_t x852 = INT64_MIN;
	int32_t t198 = 0;

    t198 = ((x849+(x850/x851))>x852);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x853 = INT32_MAX;
	int16_t x854 = 499;
	uint64_t x855 = 781422LLU;
	int32_t t199 = -386;

    t199 = ((x853+(x854/x855))>x856);

    if (t199 != 1) { NG(); } else { ; }
	
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

