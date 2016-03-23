
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

static uint8_t x1 = 78U;
volatile int8_t x5 = INT8_MAX;
int16_t x7 = INT16_MAX;
int8_t x12 = INT8_MIN;
int64_t x14 = INT64_MIN;
volatile int16_t x19 = INT16_MIN;
static volatile int32_t t4 = 4290972;
int32_t x23 = -39697937;
volatile int32_t t5 = 16558696;
int64_t x25 = INT64_MAX;
uint32_t x33 = UINT32_MAX;
uint16_t x36 = 22U;
uint8_t x37 = UINT8_MAX;
uint8_t x44 = 89U;
int64_t x46 = INT64_MIN;
uint64_t x47 = 231LLU;
int8_t x52 = 26;
volatile int32_t t13 = 2889540;
static uint32_t x58 = 1454481959U;
int8_t x59 = INT8_MIN;
static int8_t x60 = 4;
static volatile uint16_t x64 = UINT16_MAX;
uint32_t x65 = 53298890U;
volatile int64_t x68 = -1LL;
uint32_t x77 = 254U;
static int16_t x80 = INT16_MAX;
static uint8_t x81 = 0U;
volatile int32_t t20 = -31;
int16_t x89 = -1;
int32_t x93 = 15462;
uint32_t x96 = UINT32_MAX;
static int32_t t23 = -2;
int32_t x97 = INT32_MIN;
uint64_t x99 = UINT64_MAX;
static volatile int32_t t24 = -122;
int64_t x105 = INT64_MIN;
static uint32_t x106 = 921191037U;
volatile int32_t t27 = 2477;
int32_t t29 = -50434;
int64_t x122 = 2LL;
int64_t x127 = INT64_MAX;
int16_t x128 = INT16_MAX;
static int8_t x129 = -1;
int64_t x130 = INT64_MIN;
uint64_t x133 = 3782351086036421705LLU;
volatile int32_t t33 = 52494;
volatile int32_t x137 = INT32_MAX;
int32_t x152 = INT32_MIN;
static int64_t x153 = INT64_MIN;
uint64_t x157 = UINT64_MAX;
static int16_t x159 = -1;
static volatile int32_t t40 = -132580;
uint64_t x165 = 15LLU;
int32_t x172 = -1;
int32_t t44 = -2553;
volatile int32_t x188 = INT32_MIN;
static uint32_t x190 = UINT32_MAX;
uint64_t x196 = UINT64_MAX;
int32_t t49 = -1026444714;
int32_t x206 = INT32_MAX;
static int64_t x208 = -6182432980LL;
uint8_t x209 = 108U;
int32_t x211 = -1;
uint16_t x218 = 2U;
volatile int32_t t54 = 1;
int64_t x229 = 15LL;
static volatile int64_t x234 = -1LL;
volatile uint64_t x243 = 30781618LLU;
uint16_t x261 = UINT16_MAX;
uint64_t x265 = 32195LLU;
int16_t x268 = -3534;
uint16_t x271 = 231U;
volatile int32_t t69 = -22463;
uint64_t x281 = 32639739LLU;
int32_t x283 = -1;
int64_t x295 = -7441537770LL;
int32_t t74 = -1;
uint16_t x301 = 484U;
static volatile int32_t t76 = 88;
int32_t t79 = -1;
int32_t x332 = 106297;
int64_t x335 = 3443312830279LL;
volatile uint8_t x340 = 72U;
static volatile int8_t x345 = -1;
uint16_t x346 = 2U;
volatile uint8_t x354 = UINT8_MAX;
static volatile int32_t t88 = 4365;
uint32_t x361 = UINT32_MAX;
volatile int64_t x362 = INT64_MAX;
int16_t x363 = -1975;
static uint64_t x365 = 97057974LLU;
static volatile int32_t x367 = INT32_MIN;
static uint32_t x372 = 53U;
int16_t x380 = INT16_MAX;
volatile uint64_t x387 = UINT64_MAX;
int8_t x395 = INT8_MIN;
uint64_t x397 = UINT64_MAX;
uint16_t x398 = 45U;
uint64_t x400 = 20832357142766621LLU;
int32_t t102 = 29503;
int8_t x413 = INT8_MAX;
int8_t x416 = INT8_MIN;
int32_t x419 = 1;
static int32_t t104 = 1;
static int32_t x421 = INT32_MIN;
volatile int32_t t105 = -3673715;
uint16_t x426 = 21446U;
volatile int32_t t106 = 1;
uint8_t x429 = UINT8_MAX;
int16_t x433 = 965;
int32_t x435 = INT32_MAX;
int32_t t108 = -295252435;
uint64_t x438 = UINT64_MAX;
uint32_t x442 = 4168U;
static int16_t x444 = INT16_MIN;
int32_t t110 = 747;
static int64_t x448 = INT64_MAX;
uint64_t x454 = 1081021603691303LLU;
static uint16_t x456 = UINT16_MAX;
int64_t x457 = INT64_MIN;
int16_t x463 = -192;
static volatile uint32_t x466 = 3576140U;
int32_t x472 = INT32_MIN;
static int16_t x479 = INT16_MIN;
int32_t t120 = -320925747;
uint16_t x487 = 0U;
uint8_t x488 = UINT8_MAX;
int32_t t122 = -1;
volatile uint8_t x494 = 4U;
volatile uint64_t x496 = UINT64_MAX;
static int64_t x500 = INT64_MIN;
static uint16_t x501 = 237U;
int16_t x505 = INT16_MAX;
static volatile int32_t x511 = INT32_MIN;
int32_t t127 = 63932;
static int8_t x515 = -1;
volatile int16_t x516 = -56;
static volatile int32_t t128 = 1;
volatile int32_t x518 = INT32_MAX;
volatile int32_t t129 = 8839;
int8_t x531 = INT8_MIN;
int16_t x533 = INT16_MIN;
int16_t x534 = 0;
int16_t x535 = -2491;
int32_t x540 = INT32_MIN;
int32_t t134 = 489484190;
int8_t x544 = -42;
static uint8_t x545 = 101U;
int8_t x546 = -15;
int16_t x562 = INT16_MIN;
uint64_t x564 = 506059970LLU;
uint64_t x565 = 1532LLU;
static int32_t x567 = -1;
static int8_t x574 = INT8_MAX;
volatile uint16_t x579 = UINT16_MAX;
int32_t t147 = -297832;
int16_t x594 = INT16_MAX;
int8_t x606 = INT8_MAX;
int32_t t151 = -63115;
volatile uint64_t x611 = UINT64_MAX;
static volatile int32_t t153 = 156;
int8_t x617 = -1;
volatile int16_t x622 = INT16_MIN;
static volatile int32_t t155 = -4033;
volatile int64_t x628 = 1463004393778LL;
uint8_t x631 = 2U;
static uint64_t x638 = 1832991647643133LLU;
volatile int32_t t161 = -160967798;
volatile int16_t x651 = -1;
int32_t x652 = INT32_MAX;
int64_t x654 = -1LL;
uint8_t x655 = 0U;
int8_t x656 = INT8_MIN;
uint32_t x657 = 476137U;
int16_t x667 = INT16_MIN;
static int32_t x670 = 9;
volatile int32_t t167 = -1;
static int16_t x684 = 9929;
volatile int64_t x687 = INT64_MIN;
int32_t x694 = INT32_MAX;
uint8_t x699 = 112U;
int32_t t174 = -7;
volatile uint32_t x705 = 15622962U;
int16_t x707 = -14835;
static int32_t t176 = -33;
int32_t x712 = INT32_MIN;
int32_t t178 = -54;
volatile int16_t x724 = INT16_MIN;
volatile int32_t t180 = 1714197;
volatile int64_t x726 = -1LL;
static uint64_t x728 = UINT64_MAX;
static volatile uint8_t x729 = 78U;
uint32_t x734 = UINT32_MAX;
int32_t t183 = 384065;
int32_t x752 = 4601;
static volatile uint16_t x763 = 0U;
int64_t x765 = -1LL;
uint16_t x766 = 25U;
int32_t x770 = 412535835;
int8_t x778 = -1;
uint32_t x782 = UINT32_MAX;
int32_t x784 = 883;
int32_t t196 = -474990688;
static int32_t t198 = 38;
int64_t x798 = INT64_MIN;
volatile int32_t t199 = -6468;


void f0(void) {
    	static int16_t x2 = INT16_MIN;
	uint16_t x3 = 86U;
	int32_t x4 = INT32_MAX;
	int32_t t0 = -15;

    t0 = (((x1<=x2)==x3)==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x6 = INT32_MAX;
	int32_t x8 = 2083910;
	static int32_t t1 = -834222705;

    t1 = (((x5<=x6)==x7)==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = UINT16_MAX;
	int32_t x10 = 5577488;
	int16_t x11 = INT16_MIN;
	int32_t t2 = 26;

    t2 = (((x9<=x10)==x11)==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = 0;
	static int32_t x15 = 1;
	volatile int64_t x16 = 4398862117714016022LL;
	volatile int32_t t3 = -1;

    t3 = (((x13<=x14)==x15)==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = UINT32_MAX;
	int64_t x18 = INT64_MIN;
	uint64_t x20 = 74587368451395770LLU;

    t4 = (((x17<=x18)==x19)==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = 30834U;
	volatile uint8_t x22 = UINT8_MAX;
	int8_t x24 = INT8_MAX;

    t5 = (((x21<=x22)==x23)==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x26 = -11LL;
	int32_t x27 = INT32_MAX;
	volatile int32_t x28 = INT32_MIN;
	int32_t t6 = 7265;

    t6 = (((x25<=x26)==x27)==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = 140LLU;
	int32_t x30 = -46;
	static int16_t x31 = INT16_MIN;
	int64_t x32 = 3943012966719077430LL;
	int32_t t7 = -23959777;

    t7 = (((x29<=x30)==x31)==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x34 = 1U;
	volatile int64_t x35 = INT64_MIN;
	int32_t t8 = 7049957;

    t8 = (((x33<=x34)==x35)==x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x38 = INT16_MIN;
	int16_t x39 = -1;
	static uint16_t x40 = 1U;
	static volatile int32_t t9 = -2285;

    t9 = (((x37<=x38)==x39)==x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = -801473150769998LL;
	volatile int16_t x42 = -4;
	static int32_t x43 = 4609;
	int32_t t10 = -367;

    t10 = (((x41<=x42)==x43)==x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x45 = UINT16_MAX;
	volatile int32_t x48 = 15;
	volatile int32_t t11 = 5;

    t11 = (((x45<=x46)==x47)==x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x49 = 68367231102554LL;
	int16_t x50 = INT16_MIN;
	uint64_t x51 = UINT64_MAX;
	volatile int32_t t12 = 16187901;

    t12 = (((x49<=x50)==x51)==x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x53 = -5;
	static uint8_t x54 = 0U;
	int32_t x55 = INT32_MAX;
	int8_t x56 = -1;

    t13 = (((x53<=x54)==x55)==x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = -1;
	volatile int32_t t14 = 442960;

    t14 = (((x57<=x58)==x59)==x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x61 = -1;
	static uint8_t x62 = 1U;
	uint8_t x63 = UINT8_MAX;
	int32_t t15 = 24512;

    t15 = (((x61<=x62)==x63)==x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x66 = INT32_MIN;
	int32_t x67 = -1;
	volatile int32_t t16 = -12372780;

    t16 = (((x65<=x66)==x67)==x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = INT8_MIN;
	volatile int8_t x70 = INT8_MIN;
	static int64_t x71 = 51442777LL;
	uint8_t x72 = UINT8_MAX;
	volatile int32_t t17 = 791189;

    t17 = (((x69<=x70)==x71)==x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint64_t x73 = 3563630485401387045LLU;
	uint64_t x74 = UINT64_MAX;
	int64_t x75 = INT64_MIN;
	uint8_t x76 = 127U;
	int32_t t18 = -32160;

    t18 = (((x73<=x74)==x75)==x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x78 = INT8_MAX;
	static uint16_t x79 = 16U;
	volatile int32_t t19 = -3146137;

    t19 = (((x77<=x78)==x79)==x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x82 = INT16_MIN;
	static int64_t x83 = INT64_MIN;
	static int8_t x84 = INT8_MIN;

    t20 = (((x81<=x82)==x83)==x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int32_t x85 = 3896;
	static int8_t x86 = INT8_MIN;
	int16_t x87 = INT16_MAX;
	static uint32_t x88 = 5U;
	int32_t t21 = 0;

    t21 = (((x85<=x86)==x87)==x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x90 = 10;
	uint16_t x91 = 24365U;
	uint16_t x92 = 1017U;
	int32_t t22 = 0;

    t22 = (((x89<=x90)==x91)==x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x94 = UINT32_MAX;
	int32_t x95 = INT32_MIN;

    t23 = (((x93<=x94)==x95)==x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x98 = UINT64_MAX;
	int8_t x100 = -30;

    t24 = (((x97<=x98)==x99)==x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = 3LL;
	int32_t x102 = INT32_MAX;
	uint64_t x103 = 3640489130243LLU;
	static uint64_t x104 = 150LLU;
	volatile int32_t t25 = -19;

    t25 = (((x101<=x102)==x103)==x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x107 = 21759501U;
	static int64_t x108 = 4LL;
	volatile int32_t t26 = -6;

    t26 = (((x105<=x106)==x107)==x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x109 = INT8_MIN;
	volatile int64_t x110 = INT64_MIN;
	uint32_t x111 = UINT32_MAX;
	int8_t x112 = -3;

    t27 = (((x109<=x110)==x111)==x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint8_t x113 = 57U;
	int32_t x114 = INT32_MAX;
	int8_t x115 = -12;
	uint32_t x116 = 937750404U;
	int32_t t28 = -1;

    t28 = (((x113<=x114)==x115)==x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint16_t x117 = 470U;
	uint64_t x118 = 209LLU;
	int8_t x119 = INT8_MAX;
	int32_t x120 = -1751598;

    t29 = (((x117<=x118)==x119)==x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x121 = 30U;
	int16_t x123 = -1;
	int16_t x124 = -1;
	int32_t t30 = -105557;

    t30 = (((x121<=x122)==x123)==x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x125 = 103U;
	uint8_t x126 = UINT8_MAX;
	int32_t t31 = -88685664;

    t31 = (((x125<=x126)==x127)==x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint32_t x131 = 1337827243U;
	uint8_t x132 = 0U;
	int32_t t32 = -761;

    t32 = (((x129<=x130)==x131)==x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x134 = -48681962;
	int16_t x135 = INT16_MIN;
	volatile int32_t x136 = INT32_MIN;

    t33 = (((x133<=x134)==x135)==x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x138 = INT32_MIN;
	int8_t x139 = 2;
	uint32_t x140 = 6U;
	volatile int32_t t34 = -5889;

    t34 = (((x137<=x138)==x139)==x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = -15;
	uint64_t x142 = 0LLU;
	int64_t x143 = INT64_MAX;
	int16_t x144 = 6237;
	int32_t t35 = -1259;

    t35 = (((x141<=x142)==x143)==x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x145 = 6U;
	int16_t x146 = INT16_MAX;
	uint32_t x147 = 6U;
	int16_t x148 = INT16_MIN;
	int32_t t36 = -62558;

    t36 = (((x145<=x146)==x147)==x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x149 = 184LLU;
	int32_t x150 = INT32_MAX;
	uint8_t x151 = 1U;
	int32_t t37 = -5602303;

    t37 = (((x149<=x150)==x151)==x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x154 = -1;
	int8_t x155 = 0;
	int8_t x156 = INT8_MIN;
	volatile int32_t t38 = -171927;

    t38 = (((x153<=x154)==x155)==x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x158 = -192;
	uint32_t x160 = 44155009U;
	int32_t t39 = 1012905;

    t39 = (((x157<=x158)==x159)==x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = 124941556;
	int64_t x162 = INT64_MIN;
	int64_t x163 = INT64_MIN;
	int32_t x164 = 5324;

    t40 = (((x161<=x162)==x163)==x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x166 = INT16_MIN;
	uint64_t x167 = 52955LLU;
	static int16_t x168 = INT16_MIN;
	static int32_t t41 = -15150081;

    t41 = (((x165<=x166)==x167)==x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint32_t x169 = UINT32_MAX;
	volatile int64_t x170 = INT64_MAX;
	volatile int16_t x171 = INT16_MIN;
	volatile int32_t t42 = -27;

    t42 = (((x169<=x170)==x171)==x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int32_t x173 = -1;
	volatile uint32_t x174 = UINT32_MAX;
	static int16_t x175 = INT16_MAX;
	static int64_t x176 = INT64_MIN;
	int32_t t43 = 3;

    t43 = (((x173<=x174)==x175)==x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = -1LL;
	int32_t x178 = -1;
	int64_t x179 = INT64_MAX;
	uint8_t x180 = 3U;

    t44 = (((x177<=x178)==x179)==x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = INT64_MIN;
	int8_t x182 = -21;
	volatile int32_t x183 = INT32_MIN;
	static uint32_t x184 = 97934U;
	volatile int32_t t45 = 5128;

    t45 = (((x181<=x182)==x183)==x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x185 = 1LL;
	int16_t x186 = 2;
	uint32_t x187 = UINT32_MAX;
	static int32_t t46 = 5;

    t46 = (((x185<=x186)==x187)==x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint64_t x189 = 802LLU;
	volatile int64_t x191 = INT64_MIN;
	static volatile int64_t x192 = -44640076LL;
	volatile int32_t t47 = 113565;

    t47 = (((x189<=x190)==x191)==x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x193 = UINT32_MAX;
	static volatile int32_t x194 = INT32_MIN;
	uint16_t x195 = 23011U;
	static volatile int32_t t48 = -3370;

    t48 = (((x193<=x194)==x195)==x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x197 = -2;
	uint64_t x198 = UINT64_MAX;
	static volatile uint16_t x199 = 146U;
	volatile uint8_t x200 = 0U;

    t49 = (((x197<=x198)==x199)==x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x201 = 33955LLU;
	static int8_t x202 = -6;
	volatile int16_t x203 = INT16_MAX;
	static int8_t x204 = INT8_MIN;
	static int32_t t50 = 3131;

    t50 = (((x201<=x202)==x203)==x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint64_t x205 = 230020744163LLU;
	uint16_t x207 = UINT16_MAX;
	int32_t t51 = 91;

    t51 = (((x205<=x206)==x207)==x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x210 = 3U;
	volatile uint16_t x212 = 27980U;
	int32_t t52 = 16122;

    t52 = (((x209<=x210)==x211)==x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x213 = INT16_MIN;
	uint64_t x214 = UINT64_MAX;
	uint32_t x215 = 1U;
	volatile int64_t x216 = INT64_MAX;
	int32_t t53 = 7571538;

    t53 = (((x213<=x214)==x215)==x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = -4401;
	static int16_t x219 = INT16_MAX;
	static uint32_t x220 = 0U;

    t54 = (((x217<=x218)==x219)==x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = -1926013;
	volatile uint8_t x222 = UINT8_MAX;
	uint8_t x223 = 3U;
	static int16_t x224 = 62;
	volatile int32_t t55 = 1039292001;

    t55 = (((x221<=x222)==x223)==x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x225 = 682465801861053530LL;
	uint64_t x226 = UINT64_MAX;
	int8_t x227 = INT8_MAX;
	int64_t x228 = INT64_MAX;
	volatile int32_t t56 = 0;

    t56 = (((x225<=x226)==x227)==x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x230 = INT8_MIN;
	uint16_t x231 = 496U;
	int16_t x232 = INT16_MIN;
	volatile int32_t t57 = -1932753;

    t57 = (((x229<=x230)==x231)==x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x233 = UINT8_MAX;
	volatile int16_t x235 = INT16_MIN;
	volatile int32_t x236 = INT32_MAX;
	volatile int32_t t58 = 2469;

    t58 = (((x233<=x234)==x235)==x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = 14131;
	uint8_t x238 = UINT8_MAX;
	int8_t x239 = INT8_MAX;
	int8_t x240 = -1;
	volatile int32_t t59 = 47;

    t59 = (((x237<=x238)==x239)==x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = INT8_MAX;
	int8_t x242 = -12;
	int64_t x244 = INT64_MIN;
	int32_t t60 = -10450;

    t60 = (((x241<=x242)==x243)==x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = INT64_MIN;
	int8_t x246 = -1;
	uint8_t x247 = 1U;
	int8_t x248 = INT8_MAX;
	static int32_t t61 = -14;

    t61 = (((x245<=x246)==x247)==x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = INT8_MIN;
	static uint32_t x250 = 518U;
	uint16_t x251 = 2033U;
	uint16_t x252 = UINT16_MAX;
	volatile int32_t t62 = 6783309;

    t62 = (((x249<=x250)==x251)==x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = -498753169248604LL;
	int64_t x254 = INT64_MIN;
	int64_t x255 = -1LL;
	static int16_t x256 = 17;
	static int32_t t63 = -2085469;

    t63 = (((x253<=x254)==x255)==x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x257 = 0LL;
	int16_t x258 = -1;
	int8_t x259 = -14;
	uint16_t x260 = 33U;
	volatile int32_t t64 = 1091704;

    t64 = (((x257<=x258)==x259)==x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x262 = INT8_MAX;
	uint32_t x263 = UINT32_MAX;
	static int64_t x264 = -1LL;
	static volatile int32_t t65 = 9428807;

    t65 = (((x261<=x262)==x263)==x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x266 = 14195027576LLU;
	int16_t x267 = 96;
	int32_t t66 = -35;

    t66 = (((x265<=x266)==x267)==x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x269 = -1;
	volatile uint8_t x270 = 53U;
	static int32_t x272 = 2098;
	volatile int32_t t67 = -1461349;

    t67 = (((x269<=x270)==x271)==x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint64_t x273 = UINT64_MAX;
	int8_t x274 = INT8_MAX;
	volatile uint16_t x275 = 1U;
	uint8_t x276 = 0U;
	int32_t t68 = -917618;

    t68 = (((x273<=x274)==x275)==x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = -72683708336026LL;
	int32_t x278 = 0;
	int16_t x279 = INT16_MAX;
	static uint32_t x280 = 9442U;

    t69 = (((x277<=x278)==x279)==x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x282 = INT64_MIN;
	uint64_t x284 = 11698206363008LLU;
	volatile int32_t t70 = 3;

    t70 = (((x281<=x282)==x283)==x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = -1;
	int8_t x286 = INT8_MIN;
	static int16_t x287 = 9713;
	int8_t x288 = INT8_MAX;
	volatile int32_t t71 = -100;

    t71 = (((x285<=x286)==x287)==x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x289 = INT16_MIN;
	uint64_t x290 = 1754879032869996163LLU;
	volatile int32_t x291 = INT32_MAX;
	int64_t x292 = INT64_MIN;
	int32_t t72 = 897;

    t72 = (((x289<=x290)==x291)==x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x293 = 14266704U;
	static int32_t x294 = INT32_MIN;
	static int8_t x296 = INT8_MIN;
	int32_t t73 = -1;

    t73 = (((x293<=x294)==x295)==x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x297 = UINT32_MAX;
	int64_t x298 = -31899354106LL;
	int8_t x299 = INT8_MIN;
	uint64_t x300 = 498137810099LLU;

    t74 = (((x297<=x298)==x299)==x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile uint64_t x302 = 55LLU;
	uint16_t x303 = 46U;
	static int64_t x304 = 1314330702LL;
	static int32_t t75 = 646066105;

    t75 = (((x301<=x302)==x303)==x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x305 = -14;
	int16_t x306 = INT16_MAX;
	static int8_t x307 = INT8_MAX;
	static int64_t x308 = INT64_MAX;

    t76 = (((x305<=x306)==x307)==x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = 15020544;
	static volatile int16_t x310 = 21;
	static uint16_t x311 = 1794U;
	int8_t x312 = INT8_MAX;
	static int32_t t77 = -1497;

    t77 = (((x309<=x310)==x311)==x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x313 = UINT64_MAX;
	int8_t x314 = 0;
	static int32_t x315 = INT32_MIN;
	volatile int16_t x316 = INT16_MIN;
	volatile int32_t t78 = 127259;

    t78 = (((x313<=x314)==x315)==x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x317 = INT32_MIN;
	uint64_t x318 = 15676553LLU;
	uint8_t x319 = 38U;
	int8_t x320 = INT8_MIN;

    t79 = (((x317<=x318)==x319)==x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x321 = INT16_MAX;
	int32_t x322 = -587259746;
	volatile uint64_t x323 = 115702498825059LLU;
	int8_t x324 = INT8_MAX;
	volatile int32_t t80 = 2744860;

    t80 = (((x321<=x322)==x323)==x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x325 = UINT64_MAX;
	int32_t x326 = -1;
	uint64_t x327 = 43132LLU;
	uint16_t x328 = UINT16_MAX;
	static volatile int32_t t81 = 126;

    t81 = (((x325<=x326)==x327)==x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = -20;
	uint8_t x330 = UINT8_MAX;
	volatile uint32_t x331 = 42U;
	volatile int32_t t82 = 1576;

    t82 = (((x329<=x330)==x331)==x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x333 = UINT16_MAX;
	volatile uint8_t x334 = 0U;
	int64_t x336 = INT64_MIN;
	volatile int32_t t83 = 97723651;

    t83 = (((x333<=x334)==x335)==x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x337 = 14685547267953360LLU;
	uint64_t x338 = UINT64_MAX;
	int8_t x339 = INT8_MIN;
	static volatile int32_t t84 = -97;

    t84 = (((x337<=x338)==x339)==x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x341 = INT16_MIN;
	volatile int32_t x342 = INT32_MAX;
	int8_t x343 = INT8_MIN;
	int32_t x344 = INT32_MAX;
	static int32_t t85 = 136940186;

    t85 = (((x341<=x342)==x343)==x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x347 = 8U;
	uint64_t x348 = 106LLU;
	volatile int32_t t86 = -1776400;

    t86 = (((x345<=x346)==x347)==x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x349 = 7U;
	uint32_t x350 = 23113U;
	static int8_t x351 = INT8_MIN;
	int8_t x352 = INT8_MIN;
	static volatile int32_t t87 = 652159029;

    t87 = (((x349<=x350)==x351)==x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint16_t x353 = 59U;
	uint16_t x355 = UINT16_MAX;
	uint64_t x356 = 288516454320LLU;

    t88 = (((x353<=x354)==x355)==x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x357 = INT16_MIN;
	static volatile int16_t x358 = -1;
	volatile int16_t x359 = INT16_MAX;
	int64_t x360 = INT64_MIN;
	int32_t t89 = 67;

    t89 = (((x357<=x358)==x359)==x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x364 = 159;
	static volatile int32_t t90 = -683102157;

    t90 = (((x361<=x362)==x363)==x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x366 = 1;
	int64_t x368 = -93265373631998LL;
	volatile int32_t t91 = -240438;

    t91 = (((x365<=x366)==x367)==x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = INT64_MIN;
	int8_t x370 = 1;
	volatile uint16_t x371 = 926U;
	volatile int32_t t92 = 0;

    t92 = (((x369<=x370)==x371)==x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x373 = INT8_MIN;
	static int8_t x374 = 12;
	int32_t x375 = INT32_MAX;
	uint64_t x376 = 65179722LLU;
	static volatile int32_t t93 = 256453;

    t93 = (((x373<=x374)==x375)==x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x377 = INT8_MIN;
	volatile int16_t x378 = INT16_MIN;
	int8_t x379 = -1;
	int32_t t94 = 76151605;

    t94 = (((x377<=x378)==x379)==x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = INT64_MIN;
	int32_t x382 = INT32_MIN;
	uint64_t x383 = UINT64_MAX;
	int16_t x384 = INT16_MIN;
	int32_t t95 = -87;

    t95 = (((x381<=x382)==x383)==x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x385 = -26679;
	volatile int32_t x386 = 158825292;
	int16_t x388 = INT16_MIN;
	static int32_t t96 = 89950;

    t96 = (((x385<=x386)==x387)==x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int64_t x389 = INT64_MAX;
	int32_t x390 = INT32_MAX;
	int32_t x391 = INT32_MAX;
	uint16_t x392 = 2883U;
	int32_t t97 = -1;

    t97 = (((x389<=x390)==x391)==x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x393 = INT16_MAX;
	int16_t x394 = -1;
	volatile uint32_t x396 = UINT32_MAX;
	volatile int32_t t98 = -2365;

    t98 = (((x393<=x394)==x395)==x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x399 = 908U;
	volatile int32_t t99 = 115111;

    t99 = (((x397<=x398)==x399)==x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = -150;
	static int32_t x402 = -1;
	int64_t x403 = INT64_MIN;
	int8_t x404 = 0;
	int32_t t100 = -461512;

    t100 = (((x401<=x402)==x403)==x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x405 = -1;
	volatile int64_t x406 = INT64_MIN;
	static int64_t x407 = -1054585489LL;
	volatile int64_t x408 = INT64_MIN;
	static int32_t t101 = 5630225;

    t101 = (((x405<=x406)==x407)==x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = INT64_MAX;
	int32_t x410 = 63;
	volatile int8_t x411 = INT8_MAX;
	static int64_t x412 = INT64_MAX;

    t102 = (((x409<=x410)==x411)==x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x414 = 0U;
	int32_t x415 = -32728;
	static int32_t t103 = -4391000;

    t103 = (((x413<=x414)==x415)==x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x417 = 24U;
	int16_t x418 = INT16_MAX;
	int8_t x420 = INT8_MIN;

    t104 = (((x417<=x418)==x419)==x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int16_t x422 = INT16_MIN;
	uint8_t x423 = UINT8_MAX;
	static int16_t x424 = INT16_MIN;

    t105 = (((x421<=x422)==x423)==x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x425 = 1456;
	volatile int32_t x427 = INT32_MAX;
	int8_t x428 = 2;

    t106 = (((x425<=x426)==x427)==x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x430 = 1U;
	volatile int16_t x431 = 3473;
	int8_t x432 = INT8_MIN;
	static volatile int32_t t107 = 1;

    t107 = (((x429<=x430)==x431)==x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x434 = -24871901;
	volatile uint64_t x436 = 492140578033522975LLU;

    t108 = (((x433<=x434)==x435)==x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x437 = INT16_MIN;
	int32_t x439 = 241602198;
	int16_t x440 = INT16_MAX;
	volatile int32_t t109 = 421041261;

    t109 = (((x437<=x438)==x439)==x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint8_t x441 = UINT8_MAX;
	int64_t x443 = -1932300115022743LL;

    t110 = (((x441<=x442)==x443)==x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x445 = 3U;
	uint64_t x446 = 8475677657686642894LLU;
	int16_t x447 = INT16_MIN;
	int32_t t111 = 7;

    t111 = (((x445<=x446)==x447)==x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x449 = INT16_MIN;
	int32_t x450 = INT32_MIN;
	uint64_t x451 = 4869101339033306LLU;
	uint16_t x452 = 395U;
	volatile int32_t t112 = -2;

    t112 = (((x449<=x450)==x451)==x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x453 = 389U;
	uint8_t x455 = UINT8_MAX;
	volatile int32_t t113 = -2545343;

    t113 = (((x453<=x454)==x455)==x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint16_t x458 = 27497U;
	int8_t x459 = INT8_MIN;
	int8_t x460 = INT8_MIN;
	int32_t t114 = 1045076800;

    t114 = (((x457<=x458)==x459)==x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint16_t x461 = UINT16_MAX;
	volatile int64_t x462 = -1LL;
	int32_t x464 = INT32_MIN;
	int32_t t115 = 27;

    t115 = (((x461<=x462)==x463)==x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int8_t x465 = INT8_MIN;
	int8_t x467 = INT8_MIN;
	int32_t x468 = -1;
	volatile int32_t t116 = 7018;

    t116 = (((x465<=x466)==x467)==x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = INT16_MIN;
	int64_t x470 = INT64_MIN;
	int8_t x471 = INT8_MAX;
	int32_t t117 = 504513;

    t117 = (((x469<=x470)==x471)==x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = INT8_MIN;
	int32_t x474 = -1;
	uint32_t x475 = 5U;
	int16_t x476 = -57;
	int32_t t118 = 386410517;

    t118 = (((x473<=x474)==x475)==x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = INT64_MIN;
	int8_t x478 = -1;
	int32_t x480 = 65260788;
	volatile int32_t t119 = 3;

    t119 = (((x477<=x478)==x479)==x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int64_t x481 = -669904175151610411LL;
	uint64_t x482 = 493981676LLU;
	int64_t x483 = INT64_MAX;
	int32_t x484 = INT32_MAX;

    t120 = (((x481<=x482)==x483)==x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = INT16_MAX;
	uint8_t x486 = 1U;
	volatile int32_t t121 = -14;

    t121 = (((x485<=x486)==x487)==x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x489 = 0U;
	volatile int32_t x490 = -1;
	static int16_t x491 = INT16_MIN;
	static int64_t x492 = 148822250139251LL;

    t122 = (((x489<=x490)==x491)==x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = -29140592300LL;
	int32_t x495 = INT32_MIN;
	int32_t t123 = 8119458;

    t123 = (((x493<=x494)==x495)==x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint64_t x497 = 3073740141778662562LLU;
	int64_t x498 = -2260613LL;
	volatile uint8_t x499 = 1U;
	static int32_t t124 = 956;

    t124 = (((x497<=x498)==x499)==x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x502 = -4018374014451LL;
	static volatile uint8_t x503 = 28U;
	volatile int32_t x504 = INT32_MIN;
	int32_t t125 = 524120842;

    t125 = (((x501<=x502)==x503)==x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x506 = -1;
	int64_t x507 = -1LL;
	uint8_t x508 = UINT8_MAX;
	static int32_t t126 = -7388;

    t126 = (((x505<=x506)==x507)==x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x509 = 0U;
	uint16_t x510 = 109U;
	static int16_t x512 = INT16_MIN;

    t127 = (((x509<=x510)==x511)==x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x513 = INT8_MIN;
	int8_t x514 = 8;

    t128 = (((x513<=x514)==x515)==x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint8_t x517 = UINT8_MAX;
	uint64_t x519 = UINT64_MAX;
	static volatile int64_t x520 = 6LL;

    t129 = (((x517<=x518)==x519)==x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x521 = 74549073U;
	int8_t x522 = 2;
	volatile int16_t x523 = INT16_MIN;
	static uint32_t x524 = UINT32_MAX;
	int32_t t130 = 58590;

    t130 = (((x521<=x522)==x523)==x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x525 = UINT8_MAX;
	uint8_t x526 = 14U;
	int16_t x527 = -1;
	uint8_t x528 = UINT8_MAX;
	int32_t t131 = 209836;

    t131 = (((x525<=x526)==x527)==x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = -1;
	int64_t x530 = 5056389533814140LL;
	static uint8_t x532 = 3U;
	int32_t t132 = 15;

    t132 = (((x529<=x530)==x531)==x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x536 = 0;
	int32_t t133 = 160;

    t133 = (((x533<=x534)==x535)==x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int32_t x537 = INT32_MAX;
	int8_t x538 = 29;
	static int8_t x539 = -3;

    t134 = (((x537<=x538)==x539)==x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = INT32_MIN;
	volatile int16_t x542 = INT16_MAX;
	int8_t x543 = -1;
	volatile int32_t t135 = -14437717;

    t135 = (((x541<=x542)==x543)==x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x547 = 243525699U;
	int32_t x548 = -36509602;
	int32_t t136 = -88969;

    t136 = (((x545<=x546)==x547)==x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = 12;
	uint16_t x550 = 4U;
	volatile int16_t x551 = -1;
	uint32_t x552 = 30U;
	int32_t t137 = 230273;

    t137 = (((x549<=x550)==x551)==x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x553 = 249903432634828214LL;
	int16_t x554 = -1;
	uint64_t x555 = 135455856995LLU;
	uint16_t x556 = UINT16_MAX;
	volatile int32_t t138 = -52926;

    t138 = (((x553<=x554)==x555)==x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x557 = 16546686310LLU;
	int16_t x558 = INT16_MIN;
	int32_t x559 = INT32_MAX;
	static int64_t x560 = -1LL;
	volatile int32_t t139 = 185;

    t139 = (((x557<=x558)==x559)==x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint32_t x561 = 13244U;
	uint8_t x563 = UINT8_MAX;
	static int32_t t140 = 3226022;

    t140 = (((x561<=x562)==x563)==x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x566 = INT16_MAX;
	int16_t x568 = 749;
	int32_t t141 = 198229;

    t141 = (((x565<=x566)==x567)==x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x569 = 213LL;
	volatile uint8_t x570 = 27U;
	int16_t x571 = INT16_MAX;
	uint8_t x572 = 1U;
	int32_t t142 = 1;

    t142 = (((x569<=x570)==x571)==x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = INT32_MIN;
	uint32_t x575 = 52825U;
	int8_t x576 = INT8_MIN;
	int32_t t143 = -2;

    t143 = (((x573<=x574)==x575)==x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = INT8_MIN;
	int32_t x578 = -1;
	int64_t x580 = 13995LL;
	int32_t t144 = 48341;

    t144 = (((x577<=x578)==x579)==x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint16_t x581 = UINT16_MAX;
	uint64_t x582 = 23LLU;
	static int8_t x583 = INT8_MAX;
	int16_t x584 = 6;
	volatile int32_t t145 = 2;

    t145 = (((x581<=x582)==x583)==x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x585 = 49;
	int32_t x586 = INT32_MIN;
	static uint8_t x587 = UINT8_MAX;
	uint64_t x588 = UINT64_MAX;
	int32_t t146 = -1195513;

    t146 = (((x585<=x586)==x587)==x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x589 = INT64_MIN;
	int16_t x590 = INT16_MIN;
	volatile int16_t x591 = -225;
	static uint8_t x592 = 1U;

    t147 = (((x589<=x590)==x591)==x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint8_t x593 = 68U;
	uint16_t x595 = UINT16_MAX;
	volatile int16_t x596 = -1;
	volatile int32_t t148 = 26576978;

    t148 = (((x593<=x594)==x595)==x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x597 = 36488LLU;
	int16_t x598 = INT16_MAX;
	int32_t x599 = INT32_MAX;
	volatile int8_t x600 = INT8_MAX;
	volatile int32_t t149 = 14689;

    t149 = (((x597<=x598)==x599)==x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x601 = -24;
	uint32_t x602 = 1U;
	int64_t x603 = -1925823190371017LL;
	static int8_t x604 = -1;
	int32_t t150 = 655092;

    t150 = (((x601<=x602)==x603)==x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = 388454;
	int16_t x607 = INT16_MIN;
	uint32_t x608 = UINT32_MAX;

    t151 = (((x605<=x606)==x607)==x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x609 = -1LL;
	int16_t x610 = INT16_MIN;
	uint16_t x612 = 645U;
	volatile int32_t t152 = -1;

    t152 = (((x609<=x610)==x611)==x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x613 = INT16_MIN;
	uint64_t x614 = UINT64_MAX;
	uint16_t x615 = 165U;
	volatile int16_t x616 = 13;

    t153 = (((x613<=x614)==x615)==x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x618 = 235165072U;
	volatile int8_t x619 = -1;
	static int32_t x620 = -1;
	int32_t t154 = -103;

    t154 = (((x617<=x618)==x619)==x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x621 = 38U;
	int16_t x623 = INT16_MIN;
	int32_t x624 = INT32_MAX;

    t155 = (((x621<=x622)==x623)==x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x625 = INT8_MAX;
	int32_t x626 = INT32_MIN;
	int16_t x627 = INT16_MIN;
	int32_t t156 = 722;

    t156 = (((x625<=x626)==x627)==x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x629 = -1;
	int16_t x630 = 119;
	uint8_t x632 = 0U;
	int32_t t157 = -3367891;

    t157 = (((x629<=x630)==x631)==x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x633 = INT16_MIN;
	uint8_t x634 = 24U;
	uint8_t x635 = UINT8_MAX;
	uint16_t x636 = UINT16_MAX;
	int32_t t158 = -277;

    t158 = (((x633<=x634)==x635)==x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x637 = -958024;
	uint8_t x639 = 29U;
	uint32_t x640 = UINT32_MAX;
	volatile int32_t t159 = -524111328;

    t159 = (((x637<=x638)==x639)==x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x641 = INT16_MIN;
	volatile int8_t x642 = -1;
	int8_t x643 = INT8_MIN;
	int32_t x644 = -17;
	static int32_t t160 = -219;

    t160 = (((x641<=x642)==x643)==x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x645 = INT16_MIN;
	volatile int16_t x646 = INT16_MIN;
	int32_t x647 = INT32_MAX;
	static int64_t x648 = INT64_MIN;

    t161 = (((x645<=x646)==x647)==x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x649 = INT8_MAX;
	int8_t x650 = INT8_MAX;
	int32_t t162 = 19;

    t162 = (((x649<=x650)==x651)==x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int8_t x653 = INT8_MIN;
	volatile int32_t t163 = 8371518;

    t163 = (((x653<=x654)==x655)==x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x658 = 1778651618767764LL;
	int64_t x659 = -1LL;
	int8_t x660 = INT8_MIN;
	int32_t t164 = 3882259;

    t164 = (((x657<=x658)==x659)==x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x661 = UINT64_MAX;
	int16_t x662 = 0;
	static int32_t x663 = INT32_MAX;
	int16_t x664 = 1;
	volatile int32_t t165 = 78;

    t165 = (((x661<=x662)==x663)==x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int8_t x665 = 0;
	int16_t x666 = INT16_MIN;
	uint16_t x668 = UINT16_MAX;
	int32_t t166 = -302;

    t166 = (((x665<=x666)==x667)==x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = -245LL;
	uint32_t x671 = 57U;
	int64_t x672 = INT64_MIN;

    t167 = (((x669<=x670)==x671)==x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x673 = 9332U;
	int8_t x674 = 1;
	uint64_t x675 = 7890LLU;
	volatile uint32_t x676 = UINT32_MAX;
	static int32_t t168 = 469;

    t168 = (((x673<=x674)==x675)==x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile uint16_t x677 = UINT16_MAX;
	int32_t x678 = INT32_MIN;
	int32_t x679 = INT32_MIN;
	static volatile uint8_t x680 = UINT8_MAX;
	volatile int32_t t169 = -14194196;

    t169 = (((x677<=x678)==x679)==x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x681 = 0U;
	uint32_t x682 = UINT32_MAX;
	static volatile int16_t x683 = INT16_MAX;
	static int32_t t170 = 924;

    t170 = (((x681<=x682)==x683)==x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x685 = -1;
	volatile int64_t x686 = 33037176978746LL;
	static int64_t x688 = 293717894299257LL;
	volatile int32_t t171 = -12;

    t171 = (((x685<=x686)==x687)==x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x689 = 1;
	int32_t x690 = INT32_MIN;
	static uint32_t x691 = UINT32_MAX;
	int64_t x692 = INT64_MIN;
	static volatile int32_t t172 = -1012355966;

    t172 = (((x689<=x690)==x691)==x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int64_t x693 = 114247LL;
	int8_t x695 = -1;
	volatile uint32_t x696 = 16824703U;
	int32_t t173 = 12646;

    t173 = (((x693<=x694)==x695)==x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = INT16_MIN;
	int8_t x698 = 1;
	int32_t x700 = INT32_MAX;

    t174 = (((x697<=x698)==x699)==x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x701 = 0U;
	int8_t x702 = INT8_MIN;
	int16_t x703 = -1;
	int16_t x704 = INT16_MAX;
	volatile int32_t t175 = -83918796;

    t175 = (((x701<=x702)==x703)==x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x706 = INT8_MIN;
	int8_t x708 = INT8_MAX;

    t176 = (((x705<=x706)==x707)==x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x709 = INT16_MIN;
	uint8_t x710 = 39U;
	uint8_t x711 = UINT8_MAX;
	static int32_t t177 = 76825801;

    t177 = (((x709<=x710)==x711)==x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x713 = -14382;
	int8_t x714 = 1;
	int32_t x715 = 6;
	volatile int8_t x716 = 5;

    t178 = (((x713<=x714)==x715)==x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x717 = INT64_MIN;
	uint8_t x718 = 1U;
	uint8_t x719 = 5U;
	uint8_t x720 = 7U;
	int32_t t179 = 63759;

    t179 = (((x717<=x718)==x719)==x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x721 = 4U;
	uint64_t x722 = 114826573LLU;
	static volatile uint8_t x723 = 4U;

    t180 = (((x721<=x722)==x723)==x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = 1;
	int64_t x727 = INT64_MIN;
	int32_t t181 = 8133321;

    t181 = (((x725<=x726)==x727)==x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x730 = 80U;
	int32_t x731 = INT32_MIN;
	volatile int32_t x732 = -1;
	static int32_t t182 = -44907;

    t182 = (((x729<=x730)==x731)==x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x733 = UINT16_MAX;
	volatile int16_t x735 = INT16_MIN;
	uint32_t x736 = UINT32_MAX;

    t183 = (((x733<=x734)==x735)==x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x737 = UINT32_MAX;
	static int8_t x738 = -1;
	int64_t x739 = INT64_MAX;
	static uint8_t x740 = UINT8_MAX;
	static int32_t t184 = 6;

    t184 = (((x737<=x738)==x739)==x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = -385;
	int64_t x742 = 3LL;
	static int64_t x743 = INT64_MAX;
	int8_t x744 = 0;
	int32_t t185 = -364762;

    t185 = (((x741<=x742)==x743)==x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = -922875;
	int64_t x746 = INT64_MIN;
	static uint16_t x747 = 0U;
	int8_t x748 = -1;
	volatile int32_t t186 = -3;

    t186 = (((x745<=x746)==x747)==x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x749 = INT64_MIN;
	int8_t x750 = INT8_MAX;
	volatile int16_t x751 = -54;
	volatile int32_t t187 = -983;

    t187 = (((x749<=x750)==x751)==x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x753 = -915;
	volatile int32_t x754 = INT32_MIN;
	static int32_t x755 = -1;
	volatile uint8_t x756 = UINT8_MAX;
	static volatile int32_t t188 = 24270;

    t188 = (((x753<=x754)==x755)==x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x757 = -1;
	uint16_t x758 = 12248U;
	volatile uint16_t x759 = 104U;
	static int16_t x760 = -1;
	volatile int32_t t189 = 55125575;

    t189 = (((x757<=x758)==x759)==x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x761 = INT32_MIN;
	int32_t x762 = INT32_MIN;
	uint16_t x764 = UINT16_MAX;
	volatile int32_t t190 = 395;

    t190 = (((x761<=x762)==x763)==x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x767 = INT64_MIN;
	static int32_t x768 = INT32_MIN;
	int32_t t191 = 2456143;

    t191 = (((x765<=x766)==x767)==x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x769 = INT32_MAX;
	static uint32_t x771 = 1464678620U;
	volatile int64_t x772 = INT64_MIN;
	volatile int32_t t192 = -6141542;

    t192 = (((x769<=x770)==x771)==x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint64_t x773 = 358LLU;
	uint64_t x774 = 408757LLU;
	int32_t x775 = INT32_MIN;
	int16_t x776 = INT16_MAX;
	int32_t t193 = 59148742;

    t193 = (((x773<=x774)==x775)==x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x777 = -97425001741305443LL;
	int8_t x779 = -1;
	uint32_t x780 = 30870124U;
	int32_t t194 = 8145119;

    t194 = (((x777<=x778)==x779)==x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x781 = UINT16_MAX;
	int64_t x783 = -2335678516252950LL;
	int32_t t195 = 8;

    t195 = (((x781<=x782)==x783)==x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = INT16_MIN;
	static int8_t x786 = -1;
	int64_t x787 = INT64_MIN;
	static int64_t x788 = 113LL;

    t196 = (((x785<=x786)==x787)==x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x789 = INT16_MAX;
	volatile int16_t x790 = -1;
	volatile uint8_t x791 = UINT8_MAX;
	volatile int64_t x792 = -1LL;
	static int32_t t197 = 1857908;

    t197 = (((x789<=x790)==x791)==x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x793 = -15226;
	uint8_t x794 = 0U;
	int16_t x795 = INT16_MIN;
	static int8_t x796 = INT8_MIN;

    t198 = (((x793<=x794)==x795)==x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static uint32_t x797 = UINT32_MAX;
	volatile int32_t x799 = -3;
	int16_t x800 = INT16_MAX;

    t199 = (((x797<=x798)==x799)==x800);

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

