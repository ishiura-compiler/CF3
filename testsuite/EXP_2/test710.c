
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

int64_t x8 = 317LL;
uint32_t x13 = 18U;
int64_t x18 = INT64_MAX;
int16_t x21 = -943;
int16_t x26 = -1163;
static int64_t x31 = INT64_MAX;
int8_t x32 = INT8_MAX;
int8_t x33 = 5;
uint16_t x35 = UINT16_MAX;
uint32_t x36 = UINT32_MAX;
static int8_t x46 = INT8_MIN;
int8_t x50 = INT8_MIN;
int16_t x51 = -1;
static int16_t x52 = -819;
uint64_t x54 = 741278483870227LLU;
uint16_t x58 = UINT16_MAX;
uint16_t x64 = UINT16_MAX;
int64_t x67 = INT64_MIN;
static int32_t x72 = 537;
volatile int32_t t18 = 57529;
int64_t x80 = -1LL;
int32_t x84 = -1;
int64_t x86 = 12292356LL;
int8_t x88 = INT8_MAX;
int16_t x94 = INT16_MIN;
int8_t x99 = INT8_MIN;
static int16_t x101 = -59;
uint64_t x103 = 25201140210LLU;
int32_t t25 = -27;
int16_t x105 = -32;
volatile uint8_t x107 = 1U;
static int8_t x113 = -1;
int8_t x118 = -1;
int64_t x119 = INT64_MAX;
int32_t x120 = -1;
int8_t x121 = -1;
int8_t x125 = INT8_MAX;
volatile int8_t x126 = -1;
static volatile int8_t x128 = INT8_MIN;
int32_t t32 = -30009;
int32_t x145 = INT32_MAX;
volatile int8_t x147 = INT8_MIN;
int16_t x148 = INT16_MAX;
uint32_t x152 = 77903U;
volatile int8_t x161 = -1;
volatile int8_t x166 = INT8_MAX;
volatile int16_t x168 = INT16_MIN;
int32_t x172 = INT32_MIN;
static volatile int64_t x173 = -1LL;
int64_t x182 = INT64_MIN;
static int64_t x184 = INT64_MIN;
int8_t x196 = INT8_MIN;
static int32_t t48 = 62;
int16_t x197 = INT16_MIN;
int8_t x199 = INT8_MIN;
uint16_t x201 = 3U;
volatile int8_t x206 = 34;
volatile int8_t x210 = -1;
static uint64_t x214 = UINT64_MAX;
static uint16_t x215 = UINT16_MAX;
int32_t t53 = 891809;
volatile int8_t x219 = INT8_MIN;
static int64_t x220 = -1815LL;
int32_t x223 = -4924;
volatile int32_t t55 = 2193;
static volatile int32_t x225 = -203395323;
int32_t t56 = -17093695;
volatile int32_t x229 = 0;
static int64_t x231 = -495241721888LL;
volatile int64_t x242 = 327958319717LL;
volatile int8_t x244 = INT8_MIN;
static int16_t x245 = INT16_MIN;
static volatile int16_t x251 = -1;
volatile int32_t t62 = 0;
volatile int16_t x258 = INT16_MIN;
int64_t x261 = INT64_MIN;
uint64_t x264 = 73974349894636023LLU;
int8_t x268 = INT8_MIN;
static int64_t x280 = -79LL;
static int16_t x301 = -6;
int64_t x305 = INT64_MIN;
int32_t x308 = -10;
volatile int32_t t76 = 14047113;
int64_t x311 = -121315561509665267LL;
uint8_t x316 = 2U;
volatile int32_t t79 = -31;
int16_t x324 = INT16_MIN;
int32_t t80 = -707;
int32_t t81 = 94169181;
uint64_t x336 = 19983LLU;
volatile int8_t x337 = INT8_MIN;
int32_t x338 = INT32_MAX;
volatile int16_t x340 = INT16_MIN;
volatile int32_t t84 = -7604500;
int16_t x351 = 49;
static int32_t t86 = 61;
static int32_t t87 = -4;
int8_t x362 = 0;
volatile uint32_t x364 = UINT32_MAX;
static int32_t x365 = -672;
int16_t x370 = -1;
uint16_t x371 = UINT16_MAX;
static int8_t x372 = INT8_MAX;
int64_t x375 = INT64_MAX;
int32_t t92 = -7;
volatile uint64_t x382 = UINT64_MAX;
volatile int16_t x383 = -1;
static int32_t t95 = 4833;
static int32_t t96 = -2;
int8_t x402 = INT8_MIN;
int16_t x409 = INT16_MAX;
int16_t x415 = INT16_MIN;
volatile int32_t t103 = -357848;
uint64_t x422 = UINT64_MAX;
volatile uint16_t x429 = 1447U;
static int32_t t107 = 202;
int64_t x439 = 842045456514LL;
volatile uint32_t x448 = UINT32_MAX;
int64_t x449 = INT64_MIN;
volatile int16_t x454 = INT16_MAX;
int8_t x455 = 51;
volatile int32_t t112 = 1284877;
int16_t x457 = INT16_MAX;
static int16_t x459 = -2559;
uint16_t x466 = 14U;
static int64_t x467 = INT64_MIN;
int8_t x471 = 50;
int64_t x473 = INT64_MAX;
uint32_t x477 = UINT32_MAX;
volatile int32_t x485 = INT32_MAX;
static volatile int32_t t120 = -10;
static volatile int64_t x491 = INT64_MIN;
int16_t x494 = INT16_MIN;
uint16_t x495 = 1U;
volatile int32_t t122 = 61;
static int32_t x497 = -19;
int64_t x498 = INT64_MAX;
uint64_t x505 = 252166988316LLU;
volatile uint32_t x509 = 191U;
uint32_t x510 = 746386U;
static volatile uint8_t x514 = 3U;
int64_t x517 = 13096318627072931LL;
volatile int64_t x518 = -1177267887LL;
volatile int16_t x525 = -1;
int16_t x528 = -8;
int32_t t130 = -510643;
volatile int32_t x529 = INT32_MIN;
static uint32_t x530 = 30U;
uint8_t x533 = 7U;
static int64_t x535 = INT64_MIN;
static uint64_t x540 = 1LLU;
static int64_t x544 = INT64_MAX;
volatile int16_t x552 = 170;
volatile int32_t x554 = 208;
volatile int8_t x556 = 53;
int32_t t137 = 209821;
int32_t t138 = 22;
volatile int64_t x561 = -1LL;
int16_t x571 = INT16_MIN;
volatile int32_t t142 = -141222033;
volatile int32_t t144 = 0;
volatile uint8_t x585 = 3U;
int32_t x587 = INT32_MAX;
int8_t x591 = 1;
uint32_t x599 = UINT32_MAX;
int16_t x601 = INT16_MAX;
uint8_t x604 = UINT8_MAX;
int32_t t149 = 1086105;
int8_t x605 = INT8_MIN;
int16_t x609 = INT16_MAX;
uint64_t x621 = 8244785418LLU;
static uint64_t x629 = 4208082072475874LLU;
static int32_t t156 = 171665187;
int16_t x636 = 179;
static volatile int32_t t157 = -107631;
volatile int32_t t159 = 664068271;
static int64_t x646 = -1LL;
uint8_t x649 = UINT8_MAX;
static int64_t x655 = -344935LL;
static int32_t x659 = 26;
volatile int32_t t163 = 17;
uint64_t x663 = UINT64_MAX;
int32_t t164 = -5202;
uint16_t x674 = 1U;
uint32_t x682 = UINT32_MAX;
int64_t x690 = -1LL;
volatile int32_t t171 = -85;
volatile uint64_t x697 = 497LLU;
int16_t x700 = INT16_MAX;
volatile int32_t t174 = 181858;
volatile int64_t x705 = -653LL;
uint64_t x707 = UINT64_MAX;
static volatile int64_t x711 = INT64_MAX;
static uint32_t x713 = 3U;
static volatile uint64_t x717 = UINT64_MAX;
int16_t x719 = INT16_MIN;
static volatile int64_t x720 = 7LL;
uint8_t x721 = 79U;
int32_t x723 = INT32_MAX;
volatile int8_t x739 = INT8_MIN;
int8_t x741 = 3;
int32_t x752 = INT32_MIN;
int32_t x756 = INT32_MIN;
uint8_t x762 = 7U;
uint32_t x763 = 3604U;
static int32_t x772 = 111;
static int32_t t192 = 2317907;
volatile uint32_t x793 = 21696495U;
int32_t x803 = INT32_MIN;
int32_t t199 = -53756;


void f0(void) {
    	int8_t x1 = -1;
	static int64_t x2 = -1LL;
	int64_t x3 = 444LL;
	volatile uint8_t x4 = 34U;
	static int32_t t0 = -61;

    t0 = ((x1>(x2/x3))<=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = 198;
	static uint16_t x6 = UINT16_MAX;
	uint16_t x7 = UINT16_MAX;
	volatile int32_t t1 = 543231343;

    t1 = ((x5>(x6/x7))<=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x9 = INT64_MIN;
	volatile uint8_t x10 = 29U;
	uint64_t x11 = 11508474221LLU;
	uint16_t x12 = UINT16_MAX;
	int32_t t2 = -155848584;

    t2 = ((x9>(x10/x11))<=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x14 = -48;
	int32_t x15 = INT32_MIN;
	static int16_t x16 = INT16_MIN;
	int32_t t3 = -31032316;

    t3 = ((x13>(x14/x15))<=x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MIN;
	uint16_t x19 = 6U;
	volatile int8_t x20 = -1;
	volatile int32_t t4 = -2201234;

    t4 = ((x17>(x18/x19))<=x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x22 = INT16_MIN;
	volatile int16_t x23 = -1;
	volatile int16_t x24 = INT16_MIN;
	int32_t t5 = 1;

    t5 = ((x21>(x22/x23))<=x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = -1LL;
	volatile uint16_t x27 = UINT16_MAX;
	int64_t x28 = INT64_MAX;
	int32_t t6 = -8959914;

    t6 = ((x25>(x26/x27))<=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MAX;
	int32_t x30 = -4994;
	int32_t t7 = 773004497;

    t7 = ((x29>(x30/x31))<=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x34 = -9;
	int32_t t8 = -121095;

    t8 = ((x33>(x34/x35))<=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint16_t x37 = 6335U;
	int64_t x38 = -1LL;
	static int8_t x39 = -13;
	uint64_t x40 = 5740819LLU;
	static int32_t t9 = 795166;

    t9 = ((x37>(x38/x39))<=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MIN;
	static int64_t x42 = -749842119LL;
	volatile uint16_t x43 = UINT16_MAX;
	uint32_t x44 = 4686546U;
	volatile int32_t t10 = -2272754;

    t10 = ((x41>(x42/x43))<=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = -1298039226832598LL;
	volatile int32_t x47 = -194047973;
	volatile uint16_t x48 = 1923U;
	static int32_t t11 = 19861583;

    t11 = ((x45>(x46/x47))<=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int32_t x49 = INT32_MIN;
	int32_t t12 = 182460;

    t12 = ((x49>(x50/x51))<=x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x53 = UINT64_MAX;
	int32_t x55 = INT32_MAX;
	uint32_t x56 = UINT32_MAX;
	volatile int32_t t13 = -582;

    t13 = ((x53>(x54/x55))<=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int16_t x57 = INT16_MIN;
	uint16_t x59 = 319U;
	int16_t x60 = -3;
	volatile int32_t t14 = 18302;

    t14 = ((x57>(x58/x59))<=x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x61 = 27U;
	int8_t x62 = INT8_MAX;
	static int16_t x63 = INT16_MAX;
	int32_t t15 = -7753;

    t15 = ((x61>(x62/x63))<=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x65 = 4;
	int16_t x66 = INT16_MAX;
	uint16_t x68 = 4U;
	int32_t t16 = -38;

    t16 = ((x65>(x66/x67))<=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint8_t x69 = 23U;
	int32_t x70 = INT32_MIN;
	int32_t x71 = 66995;
	int32_t t17 = -27406862;

    t17 = ((x69>(x70/x71))<=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x73 = 30631LLU;
	static int64_t x74 = INT64_MIN;
	int8_t x75 = INT8_MAX;
	int32_t x76 = -49342579;

    t18 = ((x73>(x74/x75))<=x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = -1;
	int8_t x78 = -2;
	uint32_t x79 = 1149912915U;
	volatile int32_t t19 = -3916;

    t19 = ((x77>(x78/x79))<=x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = -1;
	static uint8_t x82 = 15U;
	static uint64_t x83 = 156298LLU;
	volatile int32_t t20 = 15344433;

    t20 = ((x81>(x82/x83))<=x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = -1;
	uint32_t x87 = 1052488U;
	volatile int32_t t21 = -8;

    t21 = ((x85>(x86/x87))<=x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x89 = INT8_MIN;
	uint32_t x90 = 164U;
	static uint64_t x91 = UINT64_MAX;
	int64_t x92 = INT64_MAX;
	volatile int32_t t22 = -15071331;

    t22 = ((x89>(x90/x91))<=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = INT64_MIN;
	static int64_t x95 = 16444152433429689LL;
	volatile uint64_t x96 = 5LLU;
	volatile int32_t t23 = -2;

    t23 = ((x93>(x94/x95))<=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x97 = INT16_MIN;
	int16_t x98 = -1;
	volatile int16_t x100 = INT16_MAX;
	volatile int32_t t24 = 1;

    t24 = ((x97>(x98/x99))<=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x102 = INT64_MIN;
	int8_t x104 = -1;

    t25 = ((x101>(x102/x103))<=x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x106 = INT8_MIN;
	static uint8_t x108 = 127U;
	int32_t t26 = -50;

    t26 = ((x105>(x106/x107))<=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint64_t x109 = UINT64_MAX;
	uint8_t x110 = 47U;
	static int32_t x111 = INT32_MIN;
	volatile uint8_t x112 = 6U;
	volatile int32_t t27 = -1029598;

    t27 = ((x109>(x110/x111))<=x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x114 = INT8_MIN;
	int32_t x115 = -1;
	int64_t x116 = 2418162592011LL;
	volatile int32_t t28 = 3;

    t28 = ((x113>(x114/x115))<=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x117 = UINT8_MAX;
	static int32_t t29 = -856142;

    t29 = ((x117>(x118/x119))<=x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x122 = -1;
	int64_t x123 = INT64_MIN;
	volatile int64_t x124 = -1LL;
	int32_t t30 = 77;

    t30 = ((x121>(x122/x123))<=x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x127 = -24;
	volatile int32_t t31 = 16323132;

    t31 = ((x125>(x126/x127))<=x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = -1;
	static uint16_t x130 = UINT16_MAX;
	static uint8_t x131 = 37U;
	int64_t x132 = 420535717316926LL;

    t32 = ((x129>(x130/x131))<=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = INT64_MAX;
	int32_t x134 = -1;
	static uint64_t x135 = 834810798LLU;
	uint32_t x136 = 11U;
	volatile int32_t t33 = -38;

    t33 = ((x133>(x134/x135))<=x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x137 = 19734U;
	static volatile int8_t x138 = INT8_MIN;
	int8_t x139 = -1;
	static uint16_t x140 = 2736U;
	volatile int32_t t34 = 1753350;

    t34 = ((x137>(x138/x139))<=x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = INT64_MAX;
	int8_t x142 = -3;
	int32_t x143 = INT32_MAX;
	static int8_t x144 = INT8_MIN;
	volatile int32_t t35 = 68;

    t35 = ((x141>(x142/x143))<=x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x146 = INT16_MIN;
	static int32_t t36 = 774897;

    t36 = ((x145>(x146/x147))<=x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint64_t x149 = UINT64_MAX;
	static volatile uint16_t x150 = 7975U;
	int64_t x151 = INT64_MIN;
	volatile int32_t t37 = -7;

    t37 = ((x149>(x150/x151))<=x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x153 = 0;
	int32_t x154 = 4932747;
	uint16_t x155 = 21U;
	uint8_t x156 = 4U;
	static int32_t t38 = 2738484;

    t38 = ((x153>(x154/x155))<=x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = 30;
	int32_t x158 = -1;
	static int8_t x159 = INT8_MAX;
	uint64_t x160 = 3184LLU;
	static volatile int32_t t39 = 240046008;

    t39 = ((x157>(x158/x159))<=x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x162 = 0;
	int8_t x163 = INT8_MIN;
	static int16_t x164 = INT16_MAX;
	volatile int32_t t40 = -5043071;

    t40 = ((x161>(x162/x163))<=x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = INT8_MIN;
	static uint64_t x167 = 9128804440LLU;
	int32_t t41 = -1;

    t41 = ((x165>(x166/x167))<=x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = 1;
	int32_t x170 = 12955;
	int16_t x171 = INT16_MAX;
	int32_t t42 = 0;

    t42 = ((x169>(x170/x171))<=x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x174 = UINT64_MAX;
	int16_t x175 = -719;
	static int16_t x176 = INT16_MIN;
	int32_t t43 = -3;

    t43 = ((x173>(x174/x175))<=x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = 2LL;
	uint64_t x178 = 2340LLU;
	int64_t x179 = -1LL;
	int16_t x180 = 41;
	int32_t t44 = -94;

    t44 = ((x177>(x178/x179))<=x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = 8982;
	int8_t x183 = INT8_MIN;
	volatile int32_t t45 = -236936424;

    t45 = ((x181>(x182/x183))<=x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = INT16_MIN;
	static int8_t x186 = INT8_MAX;
	int8_t x187 = INT8_MAX;
	static uint16_t x188 = UINT16_MAX;
	int32_t t46 = 384;

    t46 = ((x185>(x186/x187))<=x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x189 = 5244LL;
	int16_t x190 = 52;
	uint8_t x191 = 3U;
	static int16_t x192 = INT16_MIN;
	volatile int32_t t47 = 32495;

    t47 = ((x189>(x190/x191))<=x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = INT64_MIN;
	static volatile int64_t x194 = -1LL;
	int8_t x195 = INT8_MAX;

    t48 = ((x193>(x194/x195))<=x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x198 = 54057785LL;
	int32_t x200 = INT32_MIN;
	static int32_t t49 = 1791;

    t49 = ((x197>(x198/x199))<=x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x202 = INT16_MIN;
	uint64_t x203 = 112161881097204LLU;
	uint32_t x204 = 55815833U;
	volatile int32_t t50 = -4;

    t50 = ((x201>(x202/x203))<=x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x205 = -1;
	static int64_t x207 = INT64_MIN;
	int64_t x208 = -1LL;
	static volatile int32_t t51 = 3;

    t51 = ((x205>(x206/x207))<=x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int64_t x209 = 4911757791433615LL;
	static uint8_t x211 = 10U;
	static volatile uint16_t x212 = 26966U;
	int32_t t52 = -118;

    t52 = ((x209>(x210/x211))<=x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = 6;
	int8_t x216 = 11;

    t53 = ((x213>(x214/x215))<=x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x217 = -164075;
	uint32_t x218 = 7165U;
	static volatile int32_t t54 = -97;

    t54 = ((x217>(x218/x219))<=x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x221 = 0U;
	int16_t x222 = INT16_MAX;
	int32_t x224 = INT32_MIN;

    t55 = ((x221>(x222/x223))<=x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint16_t x226 = UINT16_MAX;
	static int8_t x227 = INT8_MIN;
	uint16_t x228 = 297U;

    t56 = ((x225>(x226/x227))<=x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x230 = 559U;
	static uint8_t x232 = 7U;
	volatile int32_t t57 = 3;

    t57 = ((x229>(x230/x231))<=x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = -1;
	int16_t x234 = INT16_MIN;
	static volatile uint32_t x235 = UINT32_MAX;
	static uint32_t x236 = UINT32_MAX;
	volatile int32_t t58 = -16040657;

    t58 = ((x233>(x234/x235))<=x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x237 = 19U;
	static int32_t x238 = -1;
	static int8_t x239 = INT8_MAX;
	int8_t x240 = -17;
	int32_t t59 = 15950840;

    t59 = ((x237>(x238/x239))<=x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int16_t x241 = -898;
	int64_t x243 = -10303LL;
	volatile int32_t t60 = -9445;

    t60 = ((x241>(x242/x243))<=x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x246 = -1LL;
	volatile int64_t x247 = -300550057LL;
	int32_t x248 = 93877007;
	volatile int32_t t61 = -56663551;

    t61 = ((x245>(x246/x247))<=x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = INT64_MIN;
	int8_t x250 = INT8_MIN;
	static uint32_t x252 = UINT32_MAX;

    t62 = ((x249>(x250/x251))<=x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = -2LL;
	int64_t x254 = INT64_MIN;
	int64_t x255 = 1708277653342LL;
	uint64_t x256 = UINT64_MAX;
	int32_t t63 = 475869586;

    t63 = ((x253>(x254/x255))<=x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x257 = INT8_MAX;
	volatile int16_t x259 = -1;
	uint16_t x260 = 1362U;
	volatile int32_t t64 = -1272;

    t64 = ((x257>(x258/x259))<=x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint64_t x262 = UINT64_MAX;
	volatile int16_t x263 = INT16_MIN;
	volatile int32_t t65 = -226;

    t65 = ((x261>(x262/x263))<=x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = -1LL;
	int64_t x266 = 40LL;
	volatile int32_t x267 = -1;
	volatile int32_t t66 = 110406;

    t66 = ((x265>(x266/x267))<=x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x269 = 1;
	int64_t x270 = 20LL;
	static uint16_t x271 = 1U;
	int16_t x272 = INT16_MIN;
	int32_t t67 = -3321;

    t67 = ((x269>(x270/x271))<=x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = -1;
	int32_t x274 = INT32_MIN;
	int16_t x275 = -5;
	uint16_t x276 = 22519U;
	volatile int32_t t68 = 1290;

    t68 = ((x273>(x274/x275))<=x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x277 = 35805U;
	static int8_t x278 = -1;
	volatile int32_t x279 = INT32_MAX;
	int32_t t69 = 286923622;

    t69 = ((x277>(x278/x279))<=x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x281 = 29267460LL;
	volatile int32_t x282 = INT32_MIN;
	static volatile int16_t x283 = INT16_MIN;
	volatile uint8_t x284 = UINT8_MAX;
	volatile int32_t t70 = 2;

    t70 = ((x281>(x282/x283))<=x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x285 = UINT16_MAX;
	int8_t x286 = INT8_MIN;
	static int32_t x287 = -1;
	volatile uint8_t x288 = 20U;
	volatile int32_t t71 = 19672;

    t71 = ((x285>(x286/x287))<=x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x289 = INT64_MIN;
	uint8_t x290 = UINT8_MAX;
	volatile uint8_t x291 = UINT8_MAX;
	volatile int16_t x292 = -1;
	volatile int32_t t72 = 1481915;

    t72 = ((x289>(x290/x291))<=x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = INT32_MIN;
	static int8_t x294 = INT8_MAX;
	int8_t x295 = -1;
	static int32_t x296 = INT32_MIN;
	static volatile int32_t t73 = -20;

    t73 = ((x293>(x294/x295))<=x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int16_t x297 = INT16_MAX;
	int8_t x298 = -1;
	int64_t x299 = INT64_MIN;
	volatile int64_t x300 = INT64_MIN;
	int32_t t74 = -7483;

    t74 = ((x297>(x298/x299))<=x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint8_t x302 = UINT8_MAX;
	volatile uint16_t x303 = 440U;
	int8_t x304 = -1;
	volatile int32_t t75 = -46502604;

    t75 = ((x301>(x302/x303))<=x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile uint16_t x306 = 30U;
	int16_t x307 = INT16_MIN;

    t76 = ((x305>(x306/x307))<=x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x309 = -1;
	int32_t x310 = INT32_MIN;
	uint64_t x312 = UINT64_MAX;
	static int32_t t77 = 13;

    t77 = ((x309>(x310/x311))<=x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x313 = UINT8_MAX;
	int8_t x314 = INT8_MIN;
	uint8_t x315 = UINT8_MAX;
	volatile int32_t t78 = -18436;

    t78 = ((x313>(x314/x315))<=x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x317 = 2092238U;
	uint32_t x318 = 850819528U;
	uint16_t x319 = UINT16_MAX;
	int32_t x320 = INT32_MIN;

    t79 = ((x317>(x318/x319))<=x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x321 = INT8_MIN;
	static volatile int8_t x322 = -1;
	static uint64_t x323 = UINT64_MAX;

    t80 = ((x321>(x322/x323))<=x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x325 = -1LL;
	volatile int16_t x326 = 3843;
	volatile int8_t x327 = -29;
	static volatile int32_t x328 = 54447;

    t81 = ((x325>(x326/x327))<=x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x333 = 29U;
	static volatile int32_t x334 = 254307;
	int32_t x335 = -1;
	int32_t t82 = -4;

    t82 = ((x333>(x334/x335))<=x336);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x339 = INT32_MIN;
	int32_t t83 = 26385120;

    t83 = ((x337>(x338/x339))<=x340);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x341 = INT16_MAX;
	static int8_t x342 = -1;
	static int8_t x343 = -1;
	static int16_t x344 = INT16_MIN;

    t84 = ((x341>(x342/x343))<=x344);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x345 = INT64_MIN;
	static int8_t x346 = -1;
	static uint16_t x347 = UINT16_MAX;
	int32_t x348 = -1;
	static int32_t t85 = 886184850;

    t85 = ((x345>(x346/x347))<=x348);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x349 = 1;
	volatile int64_t x350 = INT64_MAX;
	uint64_t x352 = 7318LLU;

    t86 = ((x349>(x350/x351))<=x352);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x353 = 132;
	int32_t x354 = INT32_MIN;
	int64_t x355 = INT64_MIN;
	uint16_t x356 = 78U;

    t87 = ((x353>(x354/x355))<=x356);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x357 = INT16_MIN;
	volatile uint16_t x358 = UINT16_MAX;
	uint64_t x359 = 235737LLU;
	int8_t x360 = INT8_MIN;
	int32_t t88 = -34611;

    t88 = ((x357>(x358/x359))<=x360);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x361 = INT64_MAX;
	int16_t x363 = -1;
	static volatile int32_t t89 = 0;

    t89 = ((x361>(x362/x363))<=x364);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x366 = -1;
	static volatile int32_t x367 = INT32_MIN;
	static volatile uint8_t x368 = UINT8_MAX;
	volatile int32_t t90 = -9627;

    t90 = ((x365>(x366/x367))<=x368);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int8_t x369 = INT8_MAX;
	volatile int32_t t91 = 113410467;

    t91 = ((x369>(x370/x371))<=x372);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x373 = 188669U;
	static int32_t x374 = INT32_MIN;
	uint8_t x376 = UINT8_MAX;

    t92 = ((x373>(x374/x375))<=x376);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x377 = UINT16_MAX;
	static volatile int16_t x378 = -1;
	int64_t x379 = INT64_MIN;
	int64_t x380 = 796LL;
	int32_t t93 = -11;

    t93 = ((x377>(x378/x379))<=x380);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x381 = UINT8_MAX;
	static volatile uint64_t x384 = 9159734822654122LLU;
	int32_t t94 = -1525;

    t94 = ((x381>(x382/x383))<=x384);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x385 = INT16_MIN;
	static volatile uint8_t x386 = 19U;
	uint32_t x387 = 7U;
	uint16_t x388 = 2U;

    t95 = ((x385>(x386/x387))<=x388);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x389 = 22U;
	uint64_t x390 = UINT64_MAX;
	int32_t x391 = INT32_MIN;
	volatile int16_t x392 = -1;

    t96 = ((x389>(x390/x391))<=x392);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x393 = -1;
	volatile uint32_t x394 = UINT32_MAX;
	volatile int8_t x395 = -1;
	static int32_t x396 = INT32_MAX;
	volatile int32_t t97 = -279;

    t97 = ((x393>(x394/x395))<=x396);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x397 = INT16_MIN;
	uint16_t x398 = 124U;
	uint64_t x399 = 19008LLU;
	static volatile int8_t x400 = INT8_MAX;
	int32_t t98 = -348182353;

    t98 = ((x397>(x398/x399))<=x400);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x401 = 3U;
	int16_t x403 = INT16_MIN;
	volatile uint64_t x404 = UINT64_MAX;
	int32_t t99 = 6;

    t99 = ((x401>(x402/x403))<=x404);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x405 = 535U;
	static int16_t x406 = -47;
	static int32_t x407 = INT32_MAX;
	int64_t x408 = -1LL;
	static volatile int32_t t100 = 6609378;

    t100 = ((x405>(x406/x407))<=x408);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x410 = INT32_MIN;
	volatile uint16_t x411 = UINT16_MAX;
	int8_t x412 = INT8_MIN;
	volatile int32_t t101 = -1981;

    t101 = ((x409>(x410/x411))<=x412);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x413 = INT32_MIN;
	static int32_t x414 = INT32_MAX;
	uint8_t x416 = UINT8_MAX;
	volatile int32_t t102 = 25259362;

    t102 = ((x413>(x414/x415))<=x416);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint16_t x417 = 15509U;
	static int32_t x418 = INT32_MIN;
	uint8_t x419 = UINT8_MAX;
	volatile int32_t x420 = INT32_MIN;

    t103 = ((x417>(x418/x419))<=x420);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int64_t x421 = INT64_MIN;
	static int64_t x423 = INT64_MIN;
	uint16_t x424 = 5980U;
	int32_t t104 = 322;

    t104 = ((x421>(x422/x423))<=x424);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint64_t x425 = UINT64_MAX;
	static int8_t x426 = INT8_MIN;
	volatile int64_t x427 = -483LL;
	uint64_t x428 = 131023250640875LLU;
	volatile int32_t t105 = -477676;

    t105 = ((x425>(x426/x427))<=x428);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint16_t x430 = UINT16_MAX;
	int32_t x431 = INT32_MAX;
	int8_t x432 = INT8_MIN;
	int32_t t106 = 375786;

    t106 = ((x429>(x430/x431))<=x432);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x433 = -1;
	int16_t x434 = INT16_MAX;
	static int32_t x435 = -1;
	static int64_t x436 = INT64_MIN;

    t107 = ((x433>(x434/x435))<=x436);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint64_t x437 = 129015572LLU;
	int16_t x438 = INT16_MIN;
	int16_t x440 = INT16_MIN;
	int32_t t108 = 28;

    t108 = ((x437>(x438/x439))<=x440);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x441 = INT8_MAX;
	uint32_t x442 = UINT32_MAX;
	int32_t x443 = -1;
	uint16_t x444 = UINT16_MAX;
	int32_t t109 = -8940;

    t109 = ((x441>(x442/x443))<=x444);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x445 = INT32_MIN;
	volatile int64_t x446 = INT64_MIN;
	int8_t x447 = INT8_MIN;
	int32_t t110 = -6;

    t110 = ((x445>(x446/x447))<=x448);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x450 = -11041707507526094LL;
	int16_t x451 = INT16_MIN;
	volatile int16_t x452 = -54;
	static int32_t t111 = -5;

    t111 = ((x449>(x450/x451))<=x452);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint8_t x453 = 117U;
	int32_t x456 = INT32_MIN;

    t112 = ((x453>(x454/x455))<=x456);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x458 = -8965666197516397LL;
	int8_t x460 = -1;
	int32_t t113 = 2939;

    t113 = ((x457>(x458/x459))<=x460);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x461 = INT8_MIN;
	uint8_t x462 = 7U;
	volatile int32_t x463 = -1;
	static uint64_t x464 = 73469LLU;
	volatile int32_t t114 = -151995;

    t114 = ((x461>(x462/x463))<=x464);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x465 = -116059LL;
	int32_t x468 = -195;
	int32_t t115 = -5222289;

    t115 = ((x465>(x466/x467))<=x468);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x469 = 21U;
	uint8_t x470 = 55U;
	int32_t x472 = -1;
	int32_t t116 = -233596;

    t116 = ((x469>(x470/x471))<=x472);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x474 = -3054;
	int16_t x475 = 437;
	int8_t x476 = -1;
	volatile int32_t t117 = 35491;

    t117 = ((x473>(x474/x475))<=x476);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x478 = 12513;
	uint32_t x479 = 359584529U;
	uint8_t x480 = UINT8_MAX;
	volatile int32_t t118 = 1;

    t118 = ((x477>(x478/x479))<=x480);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x481 = 4U;
	volatile int8_t x482 = INT8_MIN;
	static int8_t x483 = INT8_MIN;
	int64_t x484 = 315943LL;
	static int32_t t119 = 2;

    t119 = ((x481>(x482/x483))<=x484);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint8_t x486 = 4U;
	volatile int32_t x487 = INT32_MAX;
	uint64_t x488 = UINT64_MAX;

    t120 = ((x485>(x486/x487))<=x488);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x489 = INT32_MAX;
	static int16_t x490 = -1;
	static uint8_t x492 = 0U;
	volatile int32_t t121 = -4020422;

    t121 = ((x489>(x490/x491))<=x492);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x493 = INT64_MAX;
	static int64_t x496 = INT64_MIN;

    t122 = ((x493>(x494/x495))<=x496);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x499 = INT8_MIN;
	static uint16_t x500 = 15U;
	int32_t t123 = -353;

    t123 = ((x497>(x498/x499))<=x500);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x501 = 65;
	int64_t x502 = -1LL;
	volatile int64_t x503 = -4926670277LL;
	static int8_t x504 = -2;
	static int32_t t124 = -1;

    t124 = ((x501>(x502/x503))<=x504);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint64_t x506 = 91LLU;
	static uint32_t x507 = 633859U;
	static uint64_t x508 = UINT64_MAX;
	int32_t t125 = -28856074;

    t125 = ((x505>(x506/x507))<=x508);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int32_t x511 = -599926;
	uint16_t x512 = 845U;
	volatile int32_t t126 = -1;

    t126 = ((x509>(x510/x511))<=x512);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint8_t x513 = 7U;
	uint64_t x515 = 2LLU;
	static uint16_t x516 = 3530U;
	int32_t t127 = 436091;

    t127 = ((x513>(x514/x515))<=x516);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x519 = 42U;
	int16_t x520 = INT16_MIN;
	int32_t t128 = 56;

    t128 = ((x517>(x518/x519))<=x520);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x521 = INT64_MAX;
	static int32_t x522 = -2377735;
	int8_t x523 = -3;
	static int64_t x524 = -1LL;
	volatile int32_t t129 = 671166;

    t129 = ((x521>(x522/x523))<=x524);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int16_t x526 = 35;
	int32_t x527 = -5;

    t130 = ((x525>(x526/x527))<=x528);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x531 = 30349420U;
	static int32_t x532 = 4;
	int32_t t131 = 1782;

    t131 = ((x529>(x530/x531))<=x532);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x534 = INT16_MIN;
	int16_t x536 = 5747;
	int32_t t132 = 1952;

    t132 = ((x533>(x534/x535))<=x536);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x537 = -1;
	volatile int8_t x538 = INT8_MIN;
	volatile uint16_t x539 = UINT16_MAX;
	volatile int32_t t133 = 109;

    t133 = ((x537>(x538/x539))<=x540);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x541 = UINT32_MAX;
	volatile int8_t x542 = INT8_MIN;
	uint64_t x543 = 1LLU;
	static int32_t t134 = -3956811;

    t134 = ((x541>(x542/x543))<=x544);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x545 = 1861899;
	static uint32_t x546 = UINT32_MAX;
	static volatile uint16_t x547 = 12U;
	int16_t x548 = -4;
	int32_t t135 = 707;

    t135 = ((x545>(x546/x547))<=x548);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x549 = INT64_MAX;
	int16_t x550 = INT16_MAX;
	volatile int32_t x551 = -221250;
	int32_t t136 = 16808;

    t136 = ((x549>(x550/x551))<=x552);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x553 = -3611;
	volatile int16_t x555 = -1;

    t137 = ((x553>(x554/x555))<=x556);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x557 = 1546;
	static volatile int32_t x558 = -4554548;
	uint8_t x559 = 67U;
	static int64_t x560 = INT64_MIN;

    t138 = ((x557>(x558/x559))<=x560);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x562 = INT32_MIN;
	int32_t x563 = -4100258;
	uint64_t x564 = 20670LLU;
	static int32_t t139 = -139;

    t139 = ((x561>(x562/x563))<=x564);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x565 = INT8_MIN;
	uint32_t x566 = 4152U;
	int16_t x567 = INT16_MIN;
	int8_t x568 = INT8_MIN;
	volatile int32_t t140 = 101;

    t140 = ((x565>(x566/x567))<=x568);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int16_t x569 = 11;
	int16_t x570 = 180;
	int64_t x572 = 195LL;
	volatile int32_t t141 = 6;

    t141 = ((x569>(x570/x571))<=x572);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x573 = 3U;
	int8_t x574 = -1;
	int8_t x575 = INT8_MIN;
	int32_t x576 = INT32_MIN;

    t142 = ((x573>(x574/x575))<=x576);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x577 = INT64_MIN;
	static int16_t x578 = INT16_MIN;
	int8_t x579 = INT8_MAX;
	int64_t x580 = -1LL;
	volatile int32_t t143 = 15732743;

    t143 = ((x577>(x578/x579))<=x580);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x581 = INT8_MIN;
	int8_t x582 = INT8_MIN;
	int8_t x583 = 25;
	int64_t x584 = -1LL;

    t144 = ((x581>(x582/x583))<=x584);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x586 = -1;
	int8_t x588 = 3;
	volatile int32_t t145 = 144266;

    t145 = ((x585>(x586/x587))<=x588);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x589 = -1;
	static int16_t x590 = INT16_MIN;
	static int64_t x592 = 9406254502434531LL;
	int32_t t146 = 24;

    t146 = ((x589>(x590/x591))<=x592);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint16_t x593 = UINT16_MAX;
	int32_t x594 = INT32_MIN;
	static uint32_t x595 = 158673596U;
	static int64_t x596 = -1LL;
	int32_t t147 = -424241;

    t147 = ((x593>(x594/x595))<=x596);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x597 = UINT8_MAX;
	uint8_t x598 = UINT8_MAX;
	static volatile int32_t x600 = -1;
	volatile int32_t t148 = 1277;

    t148 = ((x597>(x598/x599))<=x600);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x602 = -636833775894081LL;
	volatile int64_t x603 = INT64_MIN;

    t149 = ((x601>(x602/x603))<=x604);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int64_t x606 = -285052532678708LL;
	int8_t x607 = -1;
	int32_t x608 = INT32_MIN;
	volatile int32_t t150 = -36033;

    t150 = ((x605>(x606/x607))<=x608);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x610 = INT8_MAX;
	volatile int64_t x611 = -1LL;
	uint32_t x612 = 150U;
	volatile int32_t t151 = 394893;

    t151 = ((x609>(x610/x611))<=x612);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x613 = UINT32_MAX;
	int32_t x614 = INT32_MIN;
	int32_t x615 = 1;
	uint32_t x616 = 3U;
	static int32_t t152 = 14987;

    t152 = ((x613>(x614/x615))<=x616);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x617 = 37481603LL;
	volatile int8_t x618 = INT8_MIN;
	int8_t x619 = -11;
	static int32_t x620 = INT32_MIN;
	int32_t t153 = 1;

    t153 = ((x617>(x618/x619))<=x620);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x622 = -1LL;
	int32_t x623 = 2891517;
	uint16_t x624 = 38U;
	volatile int32_t t154 = 1263218;

    t154 = ((x621>(x622/x623))<=x624);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x625 = 29015U;
	uint64_t x626 = 78570LLU;
	int16_t x627 = INT16_MIN;
	int32_t x628 = INT32_MIN;
	int32_t t155 = 2;

    t155 = ((x625>(x626/x627))<=x628);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x630 = UINT8_MAX;
	volatile uint64_t x631 = 1973943154LLU;
	int16_t x632 = INT16_MAX;

    t156 = ((x629>(x630/x631))<=x632);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x633 = 1LLU;
	int16_t x634 = -1432;
	int64_t x635 = INT64_MIN;

    t157 = ((x633>(x634/x635))<=x636);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x637 = INT16_MAX;
	uint64_t x638 = 14660675085474015LLU;
	volatile int8_t x639 = INT8_MAX;
	int16_t x640 = INT16_MIN;
	volatile int32_t t158 = 2115;

    t158 = ((x637>(x638/x639))<=x640);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x641 = INT64_MAX;
	int64_t x642 = INT64_MIN;
	uint64_t x643 = UINT64_MAX;
	static volatile int16_t x644 = -207;

    t159 = ((x641>(x642/x643))<=x644);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x645 = INT32_MIN;
	int64_t x647 = -1LL;
	uint8_t x648 = 26U;
	int32_t t160 = -1;

    t160 = ((x645>(x646/x647))<=x648);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x650 = 0;
	static int8_t x651 = INT8_MIN;
	volatile int32_t x652 = INT32_MAX;
	static volatile int32_t t161 = 13939;

    t161 = ((x649>(x650/x651))<=x652);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x653 = INT8_MIN;
	int16_t x654 = INT16_MAX;
	int16_t x656 = INT16_MAX;
	volatile int32_t t162 = 129784;

    t162 = ((x653>(x654/x655))<=x656);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x657 = 4LLU;
	uint16_t x658 = UINT16_MAX;
	int16_t x660 = 17;

    t163 = ((x657>(x658/x659))<=x660);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x661 = INT8_MAX;
	uint8_t x662 = UINT8_MAX;
	int32_t x664 = -6733;

    t164 = ((x661>(x662/x663))<=x664);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x665 = 461482216LL;
	uint64_t x666 = UINT64_MAX;
	volatile int16_t x667 = INT16_MAX;
	uint32_t x668 = 5U;
	static volatile int32_t t165 = -347712796;

    t165 = ((x665>(x666/x667))<=x668);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x669 = 1;
	static volatile uint8_t x670 = 36U;
	int32_t x671 = -1;
	static uint8_t x672 = 35U;
	static volatile int32_t t166 = -21;

    t166 = ((x669>(x670/x671))<=x672);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x673 = INT64_MIN;
	uint8_t x675 = 1U;
	int8_t x676 = -1;
	int32_t t167 = -3804;

    t167 = ((x673>(x674/x675))<=x676);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x677 = INT16_MAX;
	uint16_t x678 = 8567U;
	int16_t x679 = -91;
	int16_t x680 = 16;
	int32_t t168 = 393455;

    t168 = ((x677>(x678/x679))<=x680);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x681 = 1460;
	static volatile int8_t x683 = 15;
	int64_t x684 = INT64_MIN;
	volatile int32_t t169 = 4667;

    t169 = ((x681>(x682/x683))<=x684);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x685 = -1;
	int32_t x686 = INT32_MIN;
	int64_t x687 = INT64_MAX;
	static volatile int64_t x688 = INT64_MIN;
	static volatile int32_t t170 = 157663;

    t170 = ((x685>(x686/x687))<=x688);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x689 = 57;
	volatile int64_t x691 = -1LL;
	static volatile int32_t x692 = -1;

    t171 = ((x689>(x690/x691))<=x692);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x693 = 768672519U;
	int32_t x694 = 1;
	uint8_t x695 = 3U;
	static uint16_t x696 = 33U;
	int32_t t172 = 456702;

    t172 = ((x693>(x694/x695))<=x696);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x698 = INT8_MIN;
	int8_t x699 = INT8_MAX;
	static volatile int32_t t173 = 238603900;

    t173 = ((x697>(x698/x699))<=x700);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint8_t x701 = 20U;
	volatile int64_t x702 = -1LL;
	int64_t x703 = 30LL;
	uint64_t x704 = 7LLU;

    t174 = ((x701>(x702/x703))<=x704);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x706 = INT64_MIN;
	volatile int32_t x708 = INT32_MIN;
	static int32_t t175 = 20741109;

    t175 = ((x705>(x706/x707))<=x708);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x709 = INT8_MIN;
	int64_t x710 = INT64_MIN;
	int64_t x712 = INT64_MIN;
	int32_t t176 = -497;

    t176 = ((x709>(x710/x711))<=x712);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x714 = 62;
	int16_t x715 = INT16_MIN;
	volatile uint32_t x716 = 1168978605U;
	int32_t t177 = -5426;

    t177 = ((x713>(x714/x715))<=x716);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x718 = -1LL;
	volatile int32_t t178 = -66522;

    t178 = ((x717>(x718/x719))<=x720);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint32_t x722 = UINT32_MAX;
	uint64_t x724 = 6063534764LLU;
	volatile int32_t t179 = 174957027;

    t179 = ((x721>(x722/x723))<=x724);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x725 = 63;
	static volatile int32_t x726 = INT32_MIN;
	int16_t x727 = 1;
	int16_t x728 = INT16_MAX;
	volatile int32_t t180 = 348813;

    t180 = ((x725>(x726/x727))<=x728);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x729 = 379256127403965790LLU;
	static int32_t x730 = INT32_MAX;
	static int32_t x731 = INT32_MIN;
	uint16_t x732 = 4087U;
	volatile int32_t t181 = -3;

    t181 = ((x729>(x730/x731))<=x732);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int8_t x737 = -1;
	static volatile int16_t x738 = -1;
	int16_t x740 = INT16_MIN;
	int32_t t182 = 3929343;

    t182 = ((x737>(x738/x739))<=x740);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint8_t x742 = UINT8_MAX;
	uint32_t x743 = UINT32_MAX;
	uint16_t x744 = UINT16_MAX;
	volatile int32_t t183 = -15313;

    t183 = ((x741>(x742/x743))<=x744);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x745 = -245LL;
	volatile int16_t x746 = INT16_MIN;
	uint16_t x747 = 2040U;
	volatile uint16_t x748 = 7U;
	static volatile int32_t t184 = -86702;

    t184 = ((x745>(x746/x747))<=x748);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x749 = UINT64_MAX;
	volatile int8_t x750 = INT8_MIN;
	uint64_t x751 = 392LLU;
	volatile int32_t t185 = -117;

    t185 = ((x749>(x750/x751))<=x752);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x753 = INT16_MAX;
	uint64_t x754 = 77376LLU;
	int64_t x755 = -1LL;
	int32_t t186 = -88;

    t186 = ((x753>(x754/x755))<=x756);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x761 = INT8_MIN;
	int32_t x764 = 25444860;
	volatile int32_t t187 = -85;

    t187 = ((x761>(x762/x763))<=x764);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint16_t x765 = UINT16_MAX;
	int64_t x766 = -39688373233LL;
	int8_t x767 = INT8_MIN;
	int64_t x768 = INT64_MIN;
	volatile int32_t t188 = 886875320;

    t188 = ((x765>(x766/x767))<=x768);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x769 = 23LL;
	static uint8_t x770 = UINT8_MAX;
	volatile uint64_t x771 = 2594081964LLU;
	volatile int32_t t189 = 0;

    t189 = ((x769>(x770/x771))<=x772);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x773 = INT64_MIN;
	int16_t x774 = INT16_MIN;
	uint16_t x775 = 2341U;
	int32_t x776 = INT32_MIN;
	static int32_t t190 = -2038022;

    t190 = ((x773>(x774/x775))<=x776);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x777 = 3159752045532LLU;
	uint16_t x778 = 3424U;
	static uint64_t x779 = 1LLU;
	int32_t x780 = -5;
	int32_t t191 = 0;

    t191 = ((x777>(x778/x779))<=x780);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x781 = INT32_MIN;
	uint8_t x782 = 20U;
	uint32_t x783 = UINT32_MAX;
	int8_t x784 = -1;

    t192 = ((x781>(x782/x783))<=x784);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint64_t x785 = 59559472LLU;
	volatile int64_t x786 = INT64_MIN;
	static int32_t x787 = INT32_MIN;
	volatile uint16_t x788 = UINT16_MAX;
	int32_t t193 = 229401048;

    t193 = ((x785>(x786/x787))<=x788);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x789 = INT32_MIN;
	int16_t x790 = -5;
	int16_t x791 = 3;
	static volatile int8_t x792 = 2;
	int32_t t194 = 49251;

    t194 = ((x789>(x790/x791))<=x792);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x794 = -1LL;
	uint64_t x795 = UINT64_MAX;
	volatile int16_t x796 = -1;
	volatile int32_t t195 = 415;

    t195 = ((x793>(x794/x795))<=x796);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x797 = 310608754U;
	static int64_t x798 = -1LL;
	uint64_t x799 = 12112081604LLU;
	int64_t x800 = -1LL;
	volatile int32_t t196 = -248;

    t196 = ((x797>(x798/x799))<=x800);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x801 = -1;
	int64_t x802 = 12LL;
	uint64_t x804 = UINT64_MAX;
	static volatile int32_t t197 = 979390;

    t197 = ((x801>(x802/x803))<=x804);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x805 = INT32_MIN;
	uint8_t x806 = UINT8_MAX;
	static uint32_t x807 = 3U;
	uint16_t x808 = UINT16_MAX;
	volatile int32_t t198 = -66959822;

    t198 = ((x805>(x806/x807))<=x808);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x809 = 176374LLU;
	uint64_t x810 = UINT64_MAX;
	int32_t x811 = INT32_MIN;
	static volatile int16_t x812 = -39;

    t199 = ((x809>(x810/x811))<=x812);

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

