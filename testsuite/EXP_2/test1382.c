
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

uint32_t x8 = 1214037U;
uint8_t x11 = 9U;
int64_t x15 = -1LL;
int64_t x17 = 13293LL;
int64_t x23 = -1LL;
uint64_t x27 = 25LLU;
int16_t x31 = -360;
static uint8_t x33 = UINT8_MAX;
uint32_t x36 = UINT32_MAX;
volatile int32_t t9 = -8;
int32_t x41 = -480;
int32_t x53 = -225;
uint8_t x65 = UINT8_MAX;
int8_t x66 = -4;
uint32_t x67 = UINT32_MAX;
int32_t t16 = 335;
static volatile int32_t x69 = 5;
volatile int64_t x73 = 24246508751684330LL;
static int32_t x77 = INT32_MAX;
static int8_t x83 = INT8_MAX;
volatile int32_t t21 = -1;
uint32_t x89 = 24616715U;
int8_t x92 = INT8_MIN;
volatile int32_t t23 = -1398271;
int16_t x97 = 7004;
int8_t x103 = INT8_MIN;
int32_t t25 = 250312;
int64_t x110 = 4134658094LL;
int32_t x111 = -1;
int32_t x113 = 0;
int32_t x116 = INT32_MIN;
uint16_t x119 = 7352U;
volatile int64_t x123 = -15686LL;
int8_t x131 = 17;
volatile uint16_t x132 = UINT16_MAX;
int32_t t32 = 2;
int32_t x144 = -4;
int64_t x146 = INT64_MAX;
static int16_t x148 = -1;
int8_t x150 = INT8_MAX;
int32_t t37 = -892701;
int16_t x153 = INT16_MIN;
uint64_t x159 = UINT64_MAX;
volatile int8_t x165 = 9;
int16_t x174 = -1;
volatile uint64_t x175 = 1160346206992089243LLU;
static int8_t x179 = -1;
static int64_t x180 = -1847LL;
static volatile int32_t t44 = 60500945;
uint8_t x182 = 18U;
int8_t x183 = INT8_MIN;
volatile int32_t t46 = -44130;
int64_t x192 = INT64_MIN;
int32_t x197 = INT32_MAX;
int64_t x199 = 737LL;
volatile int32_t t50 = 1176;
static int16_t x205 = 0;
int16_t x207 = INT16_MIN;
static volatile int32_t x208 = INT32_MIN;
uint32_t x209 = UINT32_MAX;
int32_t x211 = INT32_MIN;
int64_t x215 = INT64_MIN;
volatile int16_t x217 = INT16_MIN;
int64_t x223 = INT64_MIN;
volatile int32_t t57 = 1;
static int64_t x234 = INT64_MAX;
int32_t t58 = -16328769;
static int64_t x238 = INT64_MIN;
static uint16_t x242 = 5U;
uint64_t x250 = 13022LLU;
static volatile int32_t t62 = 220274295;
int8_t x255 = -30;
static int32_t t64 = 3;
volatile int64_t x263 = INT64_MIN;
static int16_t x265 = 1;
int8_t x269 = INT8_MIN;
int16_t x273 = INT16_MIN;
uint8_t x287 = 99U;
volatile uint64_t x293 = 1035234285758005LLU;
volatile int64_t x300 = INT64_MIN;
static int32_t t74 = 923570645;
volatile int32_t t75 = 210020;
volatile int32_t t76 = -463;
uint16_t x316 = 1834U;
int8_t x329 = -8;
volatile uint64_t x334 = UINT64_MAX;
static int8_t x339 = INT8_MIN;
volatile int32_t x342 = INT32_MIN;
int64_t x346 = INT64_MAX;
volatile uint64_t x348 = 5093378965876LLU;
static int64_t x360 = INT64_MIN;
uint64_t x364 = 111497LLU;
volatile int32_t t90 = -211;
static int32_t t92 = 1;
uint32_t x374 = UINT32_MAX;
int64_t x376 = -1LL;
int8_t x377 = INT8_MAX;
static int64_t x378 = INT64_MIN;
static int8_t x379 = INT8_MIN;
int16_t x380 = INT16_MIN;
int32_t t94 = -190;
int32_t x385 = INT32_MIN;
int32_t x386 = 1335;
volatile int32_t t100 = 25680831;
volatile uint8_t x405 = 6U;
volatile int32_t x407 = INT32_MIN;
static int32_t x412 = 102668;
volatile int32_t t102 = -24611989;
static uint64_t x418 = 337LLU;
volatile int64_t x425 = INT64_MIN;
int32_t t106 = 4920698;
int64_t x431 = -1LL;
static volatile int64_t x433 = INT64_MIN;
volatile int32_t t108 = -58518;
uint32_t x437 = UINT32_MAX;
volatile int64_t x444 = INT64_MIN;
int32_t t110 = -11509;
int32_t t111 = -22;
int32_t x449 = INT32_MIN;
uint16_t x458 = UINT16_MAX;
int16_t x463 = INT16_MAX;
volatile uint16_t x465 = 9U;
int32_t x469 = INT32_MAX;
int32_t x474 = -7815;
int32_t t118 = 1690;
int8_t x477 = INT8_MIN;
static uint16_t x479 = 101U;
static uint64_t x504 = 248LLU;
volatile uint8_t x512 = 0U;
int8_t x513 = -12;
volatile int32_t t128 = 13;
int16_t x522 = INT16_MIN;
int16_t x532 = 1;
static uint64_t x533 = 438LLU;
static int16_t x535 = INT16_MIN;
volatile uint8_t x538 = 1U;
int16_t x540 = INT16_MAX;
int16_t x543 = 0;
uint8_t x544 = 9U;
int64_t x546 = -405996228LL;
uint64_t x551 = 8227743949620772LLU;
int16_t x552 = -6;
volatile int32_t t136 = -1;
int32_t x561 = INT32_MIN;
int8_t x563 = INT8_MIN;
int64_t x564 = INT64_MAX;
static uint8_t x565 = 63U;
static int32_t x566 = -4;
int32_t t142 = -3556316;
int8_t x580 = 18;
volatile int32_t t143 = 37562;
int16_t x586 = -1;
volatile int16_t x594 = 13583;
int32_t x597 = INT32_MIN;
static int8_t x601 = 2;
int16_t x603 = INT16_MIN;
int16_t x606 = INT16_MIN;
volatile int32_t t151 = 559306;
volatile int64_t x620 = -499940999413LL;
static volatile uint8_t x623 = 1U;
volatile int32_t t155 = -675197908;
int64_t x631 = INT64_MIN;
uint64_t x647 = 37492437LLU;
int32_t x663 = INT32_MIN;
volatile int32_t t164 = -1;
uint64_t x667 = UINT64_MAX;
uint64_t x668 = 64355781846793LLU;
int32_t t166 = -176;
volatile uint32_t x683 = 1237U;
int16_t x685 = -1;
int16_t x688 = -1;
int32_t t170 = -274;
int8_t x690 = INT8_MIN;
static uint16_t x692 = 1989U;
static int32_t x693 = -1;
uint64_t x697 = 187678LLU;
uint8_t x699 = 31U;
int8_t x705 = 0;
int32_t x706 = 54372;
int32_t t177 = 7068336;
int8_t x719 = INT8_MIN;
static int32_t t178 = -773619;
int32_t x731 = -1;
volatile int16_t x740 = 16;
volatile int32_t t183 = -69;
uint8_t x741 = 5U;
volatile int32_t x744 = 7940;
volatile uint8_t x749 = 7U;
uint64_t x750 = 442799735731010439LLU;
int32_t x760 = -1;
int16_t x761 = INT16_MIN;
volatile int32_t x764 = 119;
int32_t t189 = -200853;
static int8_t x765 = -1;
int8_t x768 = -21;
volatile int32_t t190 = -291774;
int32_t t193 = 2163291;
int8_t x784 = -1;
static int32_t t194 = 14788;
volatile int16_t x786 = INT16_MAX;
static int32_t t195 = -60590;
volatile int16_t x794 = -1;
static int16_t x796 = -1;
int32_t t197 = -135101979;
static uint64_t x800 = 8101722LLU;
volatile int32_t t198 = 405;


void f0(void) {
    	int8_t x1 = -7;
	static int32_t x2 = INT32_MAX;
	int16_t x3 = INT16_MIN;
	uint32_t x4 = UINT32_MAX;
	int32_t t0 = -3;

    t0 = ((x1+(x2==x3))<=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = 95U;
	uint16_t x6 = 0U;
	int16_t x7 = INT16_MAX;
	int32_t t1 = -2016;

    t1 = ((x5+(x6==x7))<=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 7U;
	int64_t x10 = 123962876490563781LL;
	volatile int32_t x12 = INT32_MIN;
	int32_t t2 = -3419;

    t2 = ((x9+(x10==x11))<=x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x13 = -210;
	int16_t x14 = -1;
	uint16_t x16 = UINT16_MAX;
	volatile int32_t t3 = -129472431;

    t3 = ((x13+(x14==x15))<=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x18 = -1;
	int16_t x19 = INT16_MAX;
	int16_t x20 = INT16_MAX;
	int32_t t4 = -34271;

    t4 = ((x17+(x18==x19))<=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x21 = INT8_MIN;
	int8_t x22 = INT8_MIN;
	static int16_t x24 = -1799;
	volatile int32_t t5 = 218757;

    t5 = ((x21+(x22==x23))<=x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = 2526289766512669LLU;
	int32_t x26 = INT32_MAX;
	volatile uint16_t x28 = UINT16_MAX;
	int32_t t6 = 8;

    t6 = ((x25+(x26==x27))<=x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x29 = UINT8_MAX;
	volatile int8_t x30 = -1;
	int16_t x32 = -1;
	volatile int32_t t7 = -481;

    t7 = ((x29+(x30==x31))<=x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x34 = 668824LLU;
	uint8_t x35 = 7U;
	int32_t t8 = 2697159;

    t8 = ((x33+(x34==x35))<=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x37 = 3U;
	int8_t x38 = INT8_MIN;
	volatile int8_t x39 = INT8_MIN;
	uint8_t x40 = 114U;

    t9 = ((x37+(x38==x39))<=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x42 = INT8_MAX;
	int32_t x43 = INT32_MAX;
	static int8_t x44 = 43;
	volatile int32_t t10 = 1;

    t10 = ((x41+(x42==x43))<=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x45 = -1;
	int8_t x46 = -1;
	int16_t x47 = -1893;
	static int16_t x48 = INT16_MIN;
	volatile int32_t t11 = 4831796;

    t11 = ((x45+(x46==x47))<=x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x49 = UINT32_MAX;
	int8_t x50 = -1;
	static int8_t x51 = -1;
	volatile int8_t x52 = INT8_MAX;
	int32_t t12 = 15174;

    t12 = ((x49+(x50==x51))<=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x54 = UINT16_MAX;
	uint8_t x55 = UINT8_MAX;
	int16_t x56 = INT16_MIN;
	int32_t t13 = 15917;

    t13 = ((x53+(x54==x55))<=x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x57 = 36;
	static int32_t x58 = -1;
	uint64_t x59 = 83138448741640LLU;
	static int32_t x60 = -357;
	volatile int32_t t14 = 117962205;

    t14 = ((x57+(x58==x59))<=x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x61 = UINT8_MAX;
	uint16_t x62 = 61U;
	int32_t x63 = INT32_MIN;
	static uint64_t x64 = 30LLU;
	int32_t t15 = 38317848;

    t15 = ((x61+(x62==x63))<=x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x68 = 197LLU;

    t16 = ((x65+(x66==x67))<=x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x70 = -56176872;
	uint8_t x71 = 4U;
	volatile uint16_t x72 = 1363U;
	static volatile int32_t t17 = 2;

    t17 = ((x69+(x70==x71))<=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x74 = -207;
	volatile int8_t x75 = INT8_MAX;
	int8_t x76 = 23;
	static volatile int32_t t18 = 1565219;

    t18 = ((x73+(x74==x75))<=x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x78 = INT16_MIN;
	uint64_t x79 = 83623046LLU;
	volatile int16_t x80 = 7;
	int32_t t19 = 9811;

    t19 = ((x77+(x78==x79))<=x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = INT32_MIN;
	static int32_t x82 = 12711;
	volatile int32_t x84 = 5875755;
	int32_t t20 = 225;

    t20 = ((x81+(x82==x83))<=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x85 = INT16_MAX;
	volatile int8_t x86 = INT8_MIN;
	int64_t x87 = -128780117012LL;
	static volatile int8_t x88 = INT8_MAX;

    t21 = ((x85+(x86==x87))<=x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x90 = INT64_MIN;
	int32_t x91 = 6;
	int32_t t22 = 4170154;

    t22 = ((x89+(x90==x91))<=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x93 = UINT64_MAX;
	static volatile int32_t x94 = INT32_MAX;
	static uint8_t x95 = 37U;
	int32_t x96 = -4327063;

    t23 = ((x93+(x94==x95))<=x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x98 = INT8_MAX;
	int64_t x99 = -504740713LL;
	uint8_t x100 = UINT8_MAX;
	volatile int32_t t24 = 4;

    t24 = ((x97+(x98==x99))<=x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = INT8_MIN;
	static int8_t x102 = INT8_MAX;
	int8_t x104 = INT8_MAX;

    t25 = ((x101+(x102==x103))<=x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = -1;
	int32_t x106 = INT32_MIN;
	uint32_t x107 = UINT32_MAX;
	static int64_t x108 = INT64_MIN;
	volatile int32_t t26 = 1361922;

    t26 = ((x105+(x106==x107))<=x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x109 = 742059LLU;
	int8_t x112 = -1;
	static int32_t t27 = -672068269;

    t27 = ((x109+(x110==x111))<=x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x114 = -6;
	uint8_t x115 = 59U;
	int32_t t28 = 112;

    t28 = ((x113+(x114==x115))<=x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = -1LL;
	int8_t x118 = 39;
	int8_t x120 = 55;
	volatile int32_t t29 = -9951;

    t29 = ((x117+(x118==x119))<=x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x121 = 18U;
	int64_t x122 = -1LL;
	int16_t x124 = INT16_MAX;
	int32_t t30 = 2;

    t30 = ((x121+(x122==x123))<=x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = -1482;
	static int16_t x126 = INT16_MIN;
	int32_t x127 = -1;
	uint32_t x128 = 1214954U;
	volatile int32_t t31 = -75242;

    t31 = ((x125+(x126==x127))<=x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = INT64_MIN;
	volatile int16_t x130 = INT16_MIN;

    t32 = ((x129+(x130==x131))<=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x133 = 3;
	static uint8_t x134 = 6U;
	int8_t x135 = INT8_MIN;
	volatile int16_t x136 = -1;
	int32_t t33 = -13;

    t33 = ((x133+(x134==x135))<=x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = INT8_MIN;
	uint16_t x138 = 78U;
	uint64_t x139 = UINT64_MAX;
	int64_t x140 = 71618551LL;
	volatile int32_t t34 = -4;

    t34 = ((x137+(x138==x139))<=x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = INT16_MIN;
	static uint64_t x142 = UINT64_MAX;
	int16_t x143 = INT16_MIN;
	int32_t t35 = 300012343;

    t35 = ((x141+(x142==x143))<=x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint16_t x145 = 3126U;
	int32_t x147 = 5473862;
	static volatile int32_t t36 = -1002623831;

    t36 = ((x145+(x146==x147))<=x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x149 = UINT32_MAX;
	int32_t x151 = 308227103;
	static int8_t x152 = INT8_MIN;

    t37 = ((x149+(x150==x151))<=x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x154 = -1LL;
	static int8_t x155 = 1;
	uint32_t x156 = UINT32_MAX;
	int32_t t38 = -5831571;

    t38 = ((x153+(x154==x155))<=x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = INT16_MIN;
	static int8_t x158 = 0;
	static int8_t x160 = INT8_MIN;
	int32_t t39 = -5694;

    t39 = ((x157+(x158==x159))<=x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = -37223612732757883LL;
	int64_t x162 = 424107411529LL;
	int16_t x163 = INT16_MIN;
	int64_t x164 = INT64_MAX;
	int32_t t40 = -13248333;

    t40 = ((x161+(x162==x163))<=x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x166 = -1;
	volatile uint64_t x167 = 64867LLU;
	static uint32_t x168 = 367U;
	int32_t t41 = -229;

    t41 = ((x165+(x166==x167))<=x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x169 = -1;
	int16_t x170 = -1;
	int8_t x171 = INT8_MAX;
	uint16_t x172 = UINT16_MAX;
	int32_t t42 = 0;

    t42 = ((x169+(x170==x171))<=x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = INT8_MAX;
	uint64_t x176 = 1223991233879624LLU;
	volatile int32_t t43 = 87904;

    t43 = ((x173+(x174==x175))<=x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x177 = -1;
	uint32_t x178 = 25809625U;

    t44 = ((x177+(x178==x179))<=x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = 0;
	uint16_t x184 = 4U;
	int32_t t45 = 1954;

    t45 = ((x181+(x182==x183))<=x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x185 = INT64_MIN;
	static volatile int64_t x186 = -134LL;
	volatile uint16_t x187 = 0U;
	volatile uint8_t x188 = 15U;

    t46 = ((x185+(x186==x187))<=x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x189 = 2722U;
	volatile int64_t x190 = -1LL;
	volatile int64_t x191 = INT64_MIN;
	int32_t t47 = 1;

    t47 = ((x189+(x190==x191))<=x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x193 = 1U;
	uint16_t x194 = 19752U;
	int16_t x195 = -1;
	static uint64_t x196 = 694615970329543766LLU;
	int32_t t48 = 3324859;

    t48 = ((x193+(x194==x195))<=x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x198 = 19U;
	int64_t x200 = INT64_MAX;
	volatile int32_t t49 = 22;

    t49 = ((x197+(x198==x199))<=x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x201 = INT64_MAX;
	static int32_t x202 = -509;
	volatile int32_t x203 = INT32_MIN;
	int64_t x204 = INT64_MIN;

    t50 = ((x201+(x202==x203))<=x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x206 = INT8_MIN;
	volatile int32_t t51 = -504570507;

    t51 = ((x205+(x206==x207))<=x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x210 = -1;
	uint32_t x212 = UINT32_MAX;
	int32_t t52 = 921;

    t52 = ((x209+(x210==x211))<=x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = INT32_MAX;
	static uint8_t x214 = UINT8_MAX;
	int16_t x216 = INT16_MIN;
	int32_t t53 = 886;

    t53 = ((x213+(x214==x215))<=x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x218 = 10;
	int16_t x219 = INT16_MAX;
	volatile int8_t x220 = -25;
	int32_t t54 = 5299;

    t54 = ((x217+(x218==x219))<=x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = INT32_MAX;
	volatile int16_t x222 = 265;
	uint32_t x224 = 76999U;
	volatile int32_t t55 = -986482012;

    t55 = ((x221+(x222==x223))<=x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x225 = 20534379;
	volatile int16_t x226 = INT16_MAX;
	uint8_t x227 = UINT8_MAX;
	int32_t x228 = INT32_MAX;
	static int32_t t56 = -19;

    t56 = ((x225+(x226==x227))<=x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = 197;
	static volatile int8_t x230 = -54;
	int16_t x231 = INT16_MIN;
	int64_t x232 = INT64_MIN;

    t57 = ((x229+(x230==x231))<=x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x233 = 34537906812LLU;
	volatile int8_t x235 = 19;
	int64_t x236 = INT64_MIN;

    t58 = ((x233+(x234==x235))<=x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x237 = 114;
	uint16_t x239 = 1U;
	static int32_t x240 = INT32_MAX;
	int32_t t59 = -1;

    t59 = ((x237+(x238==x239))<=x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x241 = UINT8_MAX;
	int32_t x243 = INT32_MAX;
	int32_t x244 = INT32_MIN;
	int32_t t60 = -192;

    t60 = ((x241+(x242==x243))<=x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x245 = INT32_MIN;
	static int16_t x246 = 1401;
	static volatile int32_t x247 = INT32_MIN;
	int64_t x248 = -1LL;
	volatile int32_t t61 = -754;

    t61 = ((x245+(x246==x247))<=x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = 25;
	static uint8_t x251 = UINT8_MAX;
	int32_t x252 = INT32_MIN;

    t62 = ((x249+(x250==x251))<=x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = 31;
	static int16_t x254 = INT16_MIN;
	uint64_t x256 = UINT64_MAX;
	static int32_t t63 = 187757380;

    t63 = ((x253+(x254==x255))<=x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x257 = INT64_MIN;
	uint8_t x258 = UINT8_MAX;
	int8_t x259 = -1;
	volatile int16_t x260 = 163;

    t64 = ((x257+(x258==x259))<=x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = INT32_MIN;
	int32_t x262 = INT32_MAX;
	int64_t x264 = INT64_MIN;
	int32_t t65 = -8;

    t65 = ((x261+(x262==x263))<=x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x266 = INT8_MAX;
	int8_t x267 = -1;
	uint32_t x268 = 350102624U;
	static int32_t t66 = 0;

    t66 = ((x265+(x266==x267))<=x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x270 = -1093583676254339LL;
	uint64_t x271 = UINT64_MAX;
	int64_t x272 = -1LL;
	int32_t t67 = -1191;

    t67 = ((x269+(x270==x271))<=x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x274 = INT8_MIN;
	static int64_t x275 = -1LL;
	uint8_t x276 = UINT8_MAX;
	volatile int32_t t68 = 1;

    t68 = ((x273+(x274==x275))<=x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x277 = INT64_MIN;
	int32_t x278 = -1;
	uint8_t x279 = UINT8_MAX;
	static int32_t x280 = INT32_MAX;
	int32_t t69 = 1403;

    t69 = ((x277+(x278==x279))<=x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x281 = UINT8_MAX;
	uint16_t x282 = UINT16_MAX;
	static uint32_t x283 = 7014U;
	int8_t x284 = -1;
	int32_t t70 = 109484121;

    t70 = ((x281+(x282==x283))<=x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x285 = UINT8_MAX;
	static uint8_t x286 = UINT8_MAX;
	static uint16_t x288 = 3U;
	volatile int32_t t71 = -1816056;

    t71 = ((x285+(x286==x287))<=x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x289 = UINT16_MAX;
	volatile int16_t x290 = INT16_MIN;
	volatile uint8_t x291 = 0U;
	int8_t x292 = -1;
	static int32_t t72 = 1033281;

    t72 = ((x289+(x290==x291))<=x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x294 = INT32_MIN;
	int16_t x295 = 30;
	static volatile uint64_t x296 = 3144820LLU;
	volatile int32_t t73 = 53;

    t73 = ((x293+(x294==x295))<=x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = -1LL;
	uint64_t x298 = UINT64_MAX;
	int32_t x299 = -7790319;

    t74 = ((x297+(x298==x299))<=x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x301 = INT8_MIN;
	int8_t x302 = INT8_MIN;
	volatile uint16_t x303 = 1U;
	int8_t x304 = INT8_MAX;

    t75 = ((x301+(x302==x303))<=x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = -3LL;
	volatile uint8_t x306 = 28U;
	static int64_t x307 = -39LL;
	int64_t x308 = 40LL;

    t76 = ((x305+(x306==x307))<=x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x309 = 9;
	uint64_t x310 = 5463374LLU;
	int16_t x311 = INT16_MAX;
	int8_t x312 = INT8_MIN;
	volatile int32_t t77 = 30527;

    t77 = ((x309+(x310==x311))<=x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x313 = INT32_MAX;
	int8_t x314 = INT8_MAX;
	int16_t x315 = INT16_MIN;
	static volatile int32_t t78 = 21;

    t78 = ((x313+(x314==x315))<=x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x317 = 7;
	uint64_t x318 = UINT64_MAX;
	uint16_t x319 = 130U;
	uint8_t x320 = 0U;
	int32_t t79 = 3;

    t79 = ((x317+(x318==x319))<=x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x321 = INT32_MAX;
	uint8_t x322 = 0U;
	volatile int32_t x323 = 62;
	int64_t x324 = INT64_MIN;
	volatile int32_t t80 = -26;

    t80 = ((x321+(x322==x323))<=x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x325 = INT64_MAX;
	int64_t x326 = -9908191437LL;
	int16_t x327 = INT16_MIN;
	static int16_t x328 = 166;
	static volatile int32_t t81 = 5;

    t81 = ((x325+(x326==x327))<=x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x330 = INT8_MIN;
	uint8_t x331 = 1U;
	volatile uint8_t x332 = 85U;
	static int32_t t82 = -484493013;

    t82 = ((x329+(x330==x331))<=x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint32_t x333 = 2U;
	int64_t x335 = 56986979060LL;
	static int16_t x336 = INT16_MAX;
	int32_t t83 = -41403743;

    t83 = ((x333+(x334==x335))<=x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int64_t x337 = 487464LL;
	uint8_t x338 = UINT8_MAX;
	uint32_t x340 = UINT32_MAX;
	static int32_t t84 = 2;

    t84 = ((x337+(x338==x339))<=x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x341 = INT8_MAX;
	volatile int16_t x343 = INT16_MAX;
	int16_t x344 = 55;
	volatile int32_t t85 = 35981511;

    t85 = ((x341+(x342==x343))<=x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x345 = 1;
	int32_t x347 = INT32_MIN;
	volatile int32_t t86 = 638558;

    t86 = ((x345+(x346==x347))<=x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x349 = INT32_MIN;
	uint8_t x350 = UINT8_MAX;
	int16_t x351 = INT16_MIN;
	static uint16_t x352 = 10007U;
	volatile int32_t t87 = 393;

    t87 = ((x349+(x350==x351))<=x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x353 = 351280U;
	uint8_t x354 = 1U;
	int8_t x355 = -14;
	int8_t x356 = 6;
	int32_t t88 = 4;

    t88 = ((x353+(x354==x355))<=x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint32_t x357 = UINT32_MAX;
	volatile int8_t x358 = 22;
	static uint32_t x359 = 2501U;
	int32_t t89 = 1805;

    t89 = ((x357+(x358==x359))<=x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x361 = 47;
	volatile int32_t x362 = -49466;
	volatile uint8_t x363 = UINT8_MAX;

    t90 = ((x361+(x362==x363))<=x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x365 = UINT32_MAX;
	uint32_t x366 = 2271816U;
	uint32_t x367 = 1U;
	int32_t x368 = INT32_MIN;
	static int32_t t91 = 0;

    t91 = ((x365+(x366==x367))<=x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x369 = UINT16_MAX;
	int32_t x370 = INT32_MAX;
	static volatile uint8_t x371 = UINT8_MAX;
	uint32_t x372 = UINT32_MAX;

    t92 = ((x369+(x370==x371))<=x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x373 = 42U;
	volatile int64_t x375 = 512896336691LL;
	int32_t t93 = 174425;

    t93 = ((x373+(x374==x375))<=x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    

    t94 = ((x377+(x378==x379))<=x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = INT8_MIN;
	int64_t x382 = 454784170285234LL;
	int16_t x383 = -22;
	int32_t x384 = INT32_MIN;
	volatile int32_t t95 = 123;

    t95 = ((x381+(x382==x383))<=x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x387 = 0U;
	uint8_t x388 = 1U;
	int32_t t96 = 497109787;

    t96 = ((x385+(x386==x387))<=x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint64_t x389 = 1LLU;
	volatile int16_t x390 = -1;
	static int16_t x391 = -1;
	uint32_t x392 = UINT32_MAX;
	volatile int32_t t97 = 51;

    t97 = ((x389+(x390==x391))<=x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x393 = UINT8_MAX;
	int8_t x394 = 1;
	volatile uint16_t x395 = UINT16_MAX;
	int16_t x396 = INT16_MIN;
	volatile int32_t t98 = -15;

    t98 = ((x393+(x394==x395))<=x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x397 = UINT16_MAX;
	volatile uint32_t x398 = 4U;
	uint16_t x399 = 6236U;
	int64_t x400 = INT64_MIN;
	int32_t t99 = -353241;

    t99 = ((x397+(x398==x399))<=x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int16_t x401 = -1;
	int32_t x402 = INT32_MIN;
	int8_t x403 = -1;
	static int8_t x404 = 24;

    t100 = ((x401+(x402==x403))<=x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x406 = -6;
	uint16_t x408 = UINT16_MAX;
	static volatile int32_t t101 = -782306370;

    t101 = ((x405+(x406==x407))<=x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x409 = -1;
	volatile uint16_t x410 = 225U;
	volatile int16_t x411 = INT16_MAX;

    t102 = ((x409+(x410==x411))<=x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x413 = -1;
	volatile uint32_t x414 = UINT32_MAX;
	static int8_t x415 = 1;
	uint32_t x416 = 0U;
	int32_t t103 = -83241575;

    t103 = ((x413+(x414==x415))<=x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint64_t x417 = 2660581303139233LLU;
	uint32_t x419 = 4019737U;
	int32_t x420 = INT32_MIN;
	int32_t t104 = 3;

    t104 = ((x417+(x418==x419))<=x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x421 = -1;
	int64_t x422 = INT64_MIN;
	volatile uint8_t x423 = 84U;
	uint64_t x424 = 61751475LLU;
	volatile int32_t t105 = 2164224;

    t105 = ((x421+(x422==x423))<=x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x426 = 9;
	int8_t x427 = -1;
	int16_t x428 = -1;

    t106 = ((x425+(x426==x427))<=x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x429 = INT16_MIN;
	int16_t x430 = -2;
	int32_t x432 = -21;
	volatile int32_t t107 = 13;

    t107 = ((x429+(x430==x431))<=x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x434 = 1;
	int64_t x435 = 2LL;
	volatile uint32_t x436 = UINT32_MAX;

    t108 = ((x433+(x434==x435))<=x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x438 = -20;
	int64_t x439 = INT64_MAX;
	int16_t x440 = -1;
	int32_t t109 = -6342360;

    t109 = ((x437+(x438==x439))<=x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x441 = -1;
	int32_t x442 = -29458;
	int64_t x443 = 61LL;

    t110 = ((x441+(x442==x443))<=x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = INT64_MAX;
	uint32_t x446 = 1564437906U;
	uint64_t x447 = 184215LLU;
	int8_t x448 = INT8_MAX;

    t111 = ((x445+(x446==x447))<=x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x450 = 16;
	int64_t x451 = -64161511446746LL;
	int16_t x452 = INT16_MIN;
	static volatile int32_t t112 = 25;

    t112 = ((x449+(x450==x451))<=x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile uint32_t x453 = 1505798945U;
	int16_t x454 = 0;
	static int64_t x455 = -1LL;
	int32_t x456 = INT32_MIN;
	int32_t t113 = -257;

    t113 = ((x453+(x454==x455))<=x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x457 = 1U;
	int64_t x459 = -826LL;
	static int16_t x460 = INT16_MIN;
	volatile int32_t t114 = -248479;

    t114 = ((x457+(x458==x459))<=x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x461 = INT8_MIN;
	int16_t x462 = INT16_MIN;
	int32_t x464 = INT32_MAX;
	int32_t t115 = 0;

    t115 = ((x461+(x462==x463))<=x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x466 = INT64_MAX;
	static int64_t x467 = 276952424765454131LL;
	volatile int32_t x468 = INT32_MAX;
	volatile int32_t t116 = -606234217;

    t116 = ((x465+(x466==x467))<=x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x470 = 46751967U;
	int16_t x471 = INT16_MIN;
	int32_t x472 = 6;
	volatile int32_t t117 = 917;

    t117 = ((x469+(x470==x471))<=x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = -1;
	int64_t x475 = -1LL;
	uint16_t x476 = UINT16_MAX;

    t118 = ((x473+(x474==x475))<=x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x478 = INT64_MIN;
	static uint16_t x480 = UINT16_MAX;
	int32_t t119 = 451;

    t119 = ((x477+(x478==x479))<=x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x481 = INT16_MIN;
	volatile int16_t x482 = INT16_MIN;
	uint32_t x483 = 63544879U;
	uint8_t x484 = UINT8_MAX;
	int32_t t120 = -154;

    t120 = ((x481+(x482==x483))<=x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = 777621LL;
	int8_t x486 = INT8_MIN;
	int8_t x487 = -6;
	static volatile int8_t x488 = INT8_MAX;
	int32_t t121 = -1;

    t121 = ((x485+(x486==x487))<=x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x489 = 6181;
	uint16_t x490 = 27070U;
	static volatile uint16_t x491 = 362U;
	static uint64_t x492 = UINT64_MAX;
	int32_t t122 = -38243494;

    t122 = ((x489+(x490==x491))<=x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x493 = -1;
	int8_t x494 = 42;
	int64_t x495 = INT64_MIN;
	int32_t x496 = INT32_MAX;
	static int32_t t123 = 2314108;

    t123 = ((x493+(x494==x495))<=x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x497 = UINT32_MAX;
	volatile int16_t x498 = INT16_MIN;
	int16_t x499 = 35;
	static int16_t x500 = -1;
	int32_t t124 = 1;

    t124 = ((x497+(x498==x499))<=x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x501 = -1;
	int32_t x502 = INT32_MIN;
	uint32_t x503 = 624U;
	int32_t t125 = -14492;

    t125 = ((x501+(x502==x503))<=x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x509 = INT8_MIN;
	static int32_t x510 = 104047;
	int8_t x511 = INT8_MIN;
	volatile int32_t t126 = -11968;

    t126 = ((x509+(x510==x511))<=x512);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x514 = -1;
	int32_t x515 = 35;
	static volatile int32_t x516 = INT32_MAX;
	static int32_t t127 = -10;

    t127 = ((x513+(x514==x515))<=x516);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint16_t x517 = 41U;
	int64_t x518 = -214LL;
	volatile int8_t x519 = INT8_MAX;
	int8_t x520 = INT8_MIN;

    t128 = ((x517+(x518==x519))<=x520);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x521 = UINT16_MAX;
	int32_t x523 = -1;
	int8_t x524 = -14;
	int32_t t129 = -9978;

    t129 = ((x521+(x522==x523))<=x524);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x525 = 21;
	int64_t x526 = INT64_MIN;
	int64_t x527 = 14994349771740LL;
	static int64_t x528 = -1LL;
	int32_t t130 = -97391;

    t130 = ((x525+(x526==x527))<=x528);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x529 = UINT8_MAX;
	uint32_t x530 = 2968462U;
	int16_t x531 = -1;
	int32_t t131 = -170094;

    t131 = ((x529+(x530==x531))<=x532);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x534 = -1;
	int64_t x536 = INT64_MIN;
	static volatile int32_t t132 = 247532836;

    t132 = ((x533+(x534==x535))<=x536);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x537 = INT64_MIN;
	volatile int64_t x539 = 1374743690684887LL;
	volatile int32_t t133 = -3618;

    t133 = ((x537+(x538==x539))<=x540);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x541 = -1LL;
	int64_t x542 = INT64_MIN;
	int32_t t134 = 11697594;

    t134 = ((x541+(x542==x543))<=x544);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x545 = 0;
	volatile uint32_t x547 = 2361061U;
	static uint64_t x548 = UINT64_MAX;
	volatile int32_t t135 = 19189;

    t135 = ((x545+(x546==x547))<=x548);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x549 = UINT16_MAX;
	uint16_t x550 = 33U;

    t136 = ((x549+(x550==x551))<=x552);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x553 = INT8_MIN;
	volatile uint32_t x554 = 18581U;
	uint16_t x555 = UINT16_MAX;
	uint8_t x556 = 2U;
	int32_t t137 = 0;

    t137 = ((x553+(x554==x555))<=x556);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x557 = 9;
	uint8_t x558 = 18U;
	int32_t x559 = -4;
	uint16_t x560 = 10U;
	int32_t t138 = -1220538;

    t138 = ((x557+(x558==x559))<=x560);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x562 = -703;
	volatile int32_t t139 = 1762;

    t139 = ((x561+(x562==x563))<=x564);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static int64_t x567 = INT64_MAX;
	uint16_t x568 = 1022U;
	int32_t t140 = -1;

    t140 = ((x565+(x566==x567))<=x568);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x569 = UINT32_MAX;
	volatile uint16_t x570 = UINT16_MAX;
	uint8_t x571 = UINT8_MAX;
	int16_t x572 = INT16_MIN;
	int32_t t141 = 26963;

    t141 = ((x569+(x570==x571))<=x572);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x573 = 9149U;
	static volatile uint16_t x574 = 173U;
	int8_t x575 = INT8_MIN;
	int16_t x576 = INT16_MIN;

    t142 = ((x573+(x574==x575))<=x576);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x577 = UINT32_MAX;
	uint64_t x578 = UINT64_MAX;
	uint64_t x579 = UINT64_MAX;

    t143 = ((x577+(x578==x579))<=x580);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x581 = -28822;
	static int32_t x582 = INT32_MIN;
	int32_t x583 = INT32_MIN;
	volatile int16_t x584 = -1;
	int32_t t144 = -2233;

    t144 = ((x581+(x582==x583))<=x584);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x585 = INT64_MAX;
	static int16_t x587 = INT16_MAX;
	int64_t x588 = -332952LL;
	int32_t t145 = 832976;

    t145 = ((x585+(x586==x587))<=x588);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x589 = -6070LL;
	int8_t x590 = INT8_MIN;
	int64_t x591 = INT64_MIN;
	uint32_t x592 = UINT32_MAX;
	static int32_t t146 = 6128;

    t146 = ((x589+(x590==x591))<=x592);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x593 = UINT64_MAX;
	static int16_t x595 = INT16_MIN;
	uint16_t x596 = 29561U;
	volatile int32_t t147 = 100;

    t147 = ((x593+(x594==x595))<=x596);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x598 = INT8_MIN;
	int32_t x599 = -1;
	volatile uint32_t x600 = 2359229U;
	int32_t t148 = -764;

    t148 = ((x597+(x598==x599))<=x600);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x602 = INT16_MIN;
	uint16_t x604 = UINT16_MAX;
	volatile int32_t t149 = -251029906;

    t149 = ((x601+(x602==x603))<=x604);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x605 = UINT32_MAX;
	int16_t x607 = INT16_MIN;
	uint8_t x608 = 30U;
	volatile int32_t t150 = -47;

    t150 = ((x605+(x606==x607))<=x608);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x609 = INT64_MIN;
	volatile int64_t x610 = INT64_MAX;
	volatile int64_t x611 = -139388400596135LL;
	static uint32_t x612 = 27U;

    t151 = ((x609+(x610==x611))<=x612);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x613 = UINT32_MAX;
	uint32_t x614 = 177449U;
	static int64_t x615 = INT64_MIN;
	int16_t x616 = -2794;
	int32_t t152 = -364756962;

    t152 = ((x613+(x614==x615))<=x616);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x617 = INT16_MAX;
	volatile int16_t x618 = INT16_MAX;
	int16_t x619 = 12962;
	volatile int32_t t153 = -42635060;

    t153 = ((x617+(x618==x619))<=x620);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x621 = INT8_MIN;
	static int32_t x622 = -860698;
	static uint8_t x624 = UINT8_MAX;
	int32_t t154 = 1964914;

    t154 = ((x621+(x622==x623))<=x624);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x625 = -5851;
	int32_t x626 = -1;
	static uint8_t x627 = UINT8_MAX;
	int8_t x628 = INT8_MAX;

    t155 = ((x625+(x626==x627))<=x628);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x629 = 7810646LL;
	int16_t x630 = 7;
	static volatile int64_t x632 = -1LL;
	volatile int32_t t156 = -264467;

    t156 = ((x629+(x630==x631))<=x632);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x633 = INT32_MIN;
	uint8_t x634 = 60U;
	volatile int16_t x635 = INT16_MAX;
	int64_t x636 = INT64_MIN;
	volatile int32_t t157 = 34;

    t157 = ((x633+(x634==x635))<=x636);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x637 = UINT8_MAX;
	int8_t x638 = -1;
	uint8_t x639 = 20U;
	int16_t x640 = 50;
	int32_t t158 = -638;

    t158 = ((x637+(x638==x639))<=x640);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x641 = INT8_MIN;
	static int32_t x642 = 0;
	int8_t x643 = INT8_MAX;
	uint8_t x644 = 104U;
	int32_t t159 = -10922991;

    t159 = ((x641+(x642==x643))<=x644);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x645 = INT32_MAX;
	uint16_t x646 = UINT16_MAX;
	static uint8_t x648 = 0U;
	static volatile int32_t t160 = -15247906;

    t160 = ((x645+(x646==x647))<=x648);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x649 = 39U;
	volatile int32_t x650 = INT32_MIN;
	int32_t x651 = -1;
	int64_t x652 = INT64_MAX;
	volatile int32_t t161 = 1647284;

    t161 = ((x649+(x650==x651))<=x652);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x653 = -6;
	static uint8_t x654 = 1U;
	int32_t x655 = INT32_MIN;
	static int16_t x656 = -4808;
	static volatile int32_t t162 = 95952;

    t162 = ((x653+(x654==x655))<=x656);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x657 = UINT32_MAX;
	int16_t x658 = -127;
	uint32_t x659 = UINT32_MAX;
	volatile int16_t x660 = INT16_MIN;
	int32_t t163 = -111;

    t163 = ((x657+(x658==x659))<=x660);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x661 = 16324U;
	int32_t x662 = INT32_MAX;
	volatile int16_t x664 = INT16_MAX;

    t164 = ((x661+(x662==x663))<=x664);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint8_t x665 = 1U;
	int64_t x666 = -305385864LL;
	static volatile int32_t t165 = 34;

    t165 = ((x665+(x666==x667))<=x668);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint64_t x669 = 31LLU;
	uint32_t x670 = 1U;
	int16_t x671 = INT16_MAX;
	int8_t x672 = -1;

    t166 = ((x669+(x670==x671))<=x672);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x673 = 31U;
	static int64_t x674 = INT64_MIN;
	int8_t x675 = INT8_MIN;
	int32_t x676 = INT32_MIN;
	volatile int32_t t167 = -1547;

    t167 = ((x673+(x674==x675))<=x676);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x677 = UINT8_MAX;
	volatile int8_t x678 = -1;
	int8_t x679 = INT8_MIN;
	uint8_t x680 = 53U;
	volatile int32_t t168 = -242;

    t168 = ((x677+(x678==x679))<=x680);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x681 = 0U;
	static uint8_t x682 = 0U;
	uint64_t x684 = 2879908422704274750LLU;
	static volatile int32_t t169 = 1;

    t169 = ((x681+(x682==x683))<=x684);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x686 = 0;
	int16_t x687 = -1;

    t170 = ((x685+(x686==x687))<=x688);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x689 = INT32_MAX;
	int64_t x691 = INT64_MIN;
	int32_t t171 = 3253;

    t171 = ((x689+(x690==x691))<=x692);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x694 = INT64_MIN;
	static int32_t x695 = INT32_MIN;
	int64_t x696 = INT64_MIN;
	int32_t t172 = 400;

    t172 = ((x693+(x694==x695))<=x696);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x698 = UINT8_MAX;
	uint16_t x700 = UINT16_MAX;
	volatile int32_t t173 = -1;

    t173 = ((x697+(x698==x699))<=x700);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x701 = INT8_MIN;
	volatile uint16_t x702 = UINT16_MAX;
	uint32_t x703 = UINT32_MAX;
	static uint8_t x704 = 9U;
	static int32_t t174 = -1;

    t174 = ((x701+(x702==x703))<=x704);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x707 = INT64_MAX;
	uint32_t x708 = 4489U;
	int32_t t175 = 3;

    t175 = ((x705+(x706==x707))<=x708);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x709 = INT16_MAX;
	uint8_t x710 = UINT8_MAX;
	int64_t x711 = INT64_MIN;
	int64_t x712 = -1LL;
	volatile int32_t t176 = -11703;

    t176 = ((x709+(x710==x711))<=x712);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x713 = 1U;
	volatile uint64_t x714 = UINT64_MAX;
	volatile int64_t x715 = -1LL;
	volatile uint16_t x716 = 8160U;

    t177 = ((x713+(x714==x715))<=x716);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x717 = INT64_MIN;
	int16_t x718 = INT16_MIN;
	int16_t x720 = 3;

    t178 = ((x717+(x718==x719))<=x720);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x721 = 112;
	volatile int8_t x722 = -1;
	uint16_t x723 = 2U;
	static int32_t x724 = 116995704;
	static volatile int32_t t179 = 162785608;

    t179 = ((x721+(x722==x723))<=x724);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x725 = INT64_MAX;
	uint16_t x726 = 6029U;
	static uint8_t x727 = 0U;
	static int64_t x728 = 7908076529716255LL;
	int32_t t180 = 9006638;

    t180 = ((x725+(x726==x727))<=x728);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x729 = UINT16_MAX;
	uint8_t x730 = UINT8_MAX;
	int8_t x732 = INT8_MIN;
	int32_t t181 = -8267;

    t181 = ((x729+(x730==x731))<=x732);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x733 = INT16_MAX;
	uint32_t x734 = UINT32_MAX;
	volatile int32_t x735 = 12583779;
	int16_t x736 = -1;
	int32_t t182 = -3;

    t182 = ((x733+(x734==x735))<=x736);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x737 = 242269;
	int8_t x738 = INT8_MIN;
	uint16_t x739 = 2U;

    t183 = ((x737+(x738==x739))<=x740);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x742 = UINT64_MAX;
	int16_t x743 = -1;
	static int32_t t184 = 54;

    t184 = ((x741+(x742==x743))<=x744);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x745 = INT8_MAX;
	int8_t x746 = 1;
	int8_t x747 = 27;
	uint8_t x748 = 30U;
	static volatile int32_t t185 = -8634;

    t185 = ((x745+(x746==x747))<=x748);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x751 = INT16_MIN;
	uint16_t x752 = UINT16_MAX;
	int32_t t186 = -176691;

    t186 = ((x749+(x750==x751))<=x752);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint16_t x753 = 481U;
	volatile int16_t x754 = INT16_MIN;
	static volatile uint8_t x755 = UINT8_MAX;
	int32_t x756 = -1;
	int32_t t187 = -10;

    t187 = ((x753+(x754==x755))<=x756);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x757 = INT8_MIN;
	int8_t x758 = INT8_MAX;
	uint8_t x759 = 0U;
	int32_t t188 = 15;

    t188 = ((x757+(x758==x759))<=x760);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x762 = -1;
	volatile int32_t x763 = -1;

    t189 = ((x761+(x762==x763))<=x764);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint16_t x766 = UINT16_MAX;
	int32_t x767 = INT32_MAX;

    t190 = ((x765+(x766==x767))<=x768);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x769 = 44U;
	uint16_t x770 = 1U;
	int8_t x771 = -1;
	uint8_t x772 = 9U;
	volatile int32_t t191 = -125454935;

    t191 = ((x769+(x770==x771))<=x772);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x773 = -7291357873118LL;
	int32_t x774 = -1;
	int32_t x775 = 45;
	int64_t x776 = 2443510128365LL;
	int32_t t192 = 4882348;

    t192 = ((x773+(x774==x775))<=x776);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x777 = INT8_MAX;
	static int8_t x778 = INT8_MIN;
	uint64_t x779 = 127439691430LLU;
	uint64_t x780 = 800769823399LLU;

    t193 = ((x777+(x778==x779))<=x780);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x781 = INT16_MIN;
	int32_t x782 = INT32_MIN;
	volatile uint64_t x783 = UINT64_MAX;

    t194 = ((x781+(x782==x783))<=x784);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint16_t x785 = 2U;
	volatile int32_t x787 = INT32_MIN;
	int64_t x788 = 3804481LL;

    t195 = ((x785+(x786==x787))<=x788);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int32_t x789 = INT32_MIN;
	int64_t x790 = 259LL;
	static uint32_t x791 = 4556U;
	uint8_t x792 = 9U;
	int32_t t196 = 2737941;

    t196 = ((x789+(x790==x791))<=x792);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x793 = 0U;
	uint16_t x795 = 573U;

    t197 = ((x793+(x794==x795))<=x796);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x797 = INT32_MIN;
	uint64_t x798 = 49991153890904795LLU;
	int16_t x799 = -664;

    t198 = ((x797+(x798==x799))<=x800);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x801 = INT32_MAX;
	static volatile int16_t x802 = INT16_MAX;
	uint64_t x803 = 50LLU;
	uint32_t x804 = UINT32_MAX;
	volatile int32_t t199 = -288976254;

    t199 = ((x801+(x802==x803))<=x804);

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

