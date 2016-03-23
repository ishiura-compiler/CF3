
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

static volatile int16_t x2 = INT16_MIN;
volatile int64_t x23 = 1912219212LL;
volatile int8_t x29 = -1;
uint32_t x31 = UINT32_MAX;
static int64_t x38 = INT64_MAX;
int64_t x39 = -1LL;
volatile uint16_t x49 = 1U;
int32_t t11 = 12;
volatile int32_t x53 = -1;
uint64_t x56 = UINT64_MAX;
uint16_t x61 = 4743U;
uint32_t t14 = 1524686288U;
volatile int32_t t15 = 471;
int64_t x73 = INT64_MAX;
int32_t x74 = INT32_MAX;
uint16_t x76 = 2199U;
static uint8_t x78 = 9U;
volatile int64_t t18 = 584674798809LL;
int64_t x86 = INT64_MIN;
int32_t t20 = 3780308;
uint8_t x98 = UINT8_MAX;
int32_t t21 = -191892;
uint64_t x112 = 404984LLU;
int16_t x115 = -10644;
volatile uint8_t x127 = 6U;
uint32_t x138 = UINT32_MAX;
int64_t x145 = -95070640LL;
int32_t x148 = INT32_MAX;
static int8_t x149 = -5;
uint64_t x152 = 10891578190997667LLU;
int32_t x159 = 1274;
int32_t t35 = -1124;
int64_t x161 = 281061435406LL;
uint16_t x162 = 520U;
volatile int8_t x163 = 0;
int16_t x170 = -1;
static int64_t x172 = -1LL;
volatile int64_t t38 = -1002311548512727LL;
int32_t x175 = -1;
static int64_t x177 = INT64_MIN;
volatile uint64_t x183 = 1985203782743007LLU;
int64_t t41 = 7274628985029LL;
static volatile uint16_t x189 = 111U;
int16_t x204 = -408;
volatile int32_t t46 = -1;
static uint8_t x213 = 47U;
volatile int64_t x222 = -1LL;
int8_t x227 = INT8_MIN;
static int8_t x229 = 22;
int8_t x230 = INT8_MIN;
int16_t x238 = -1;
int8_t x240 = 31;
int32_t t54 = -37404;
int8_t x242 = INT8_MAX;
static uint32_t x252 = 32027699U;
int16_t x256 = -2;
volatile int16_t x263 = INT16_MIN;
volatile int8_t x277 = INT8_MAX;
volatile int32_t t62 = -1549600;
int16_t x282 = -1;
uint32_t x286 = 97017990U;
uint16_t x288 = 1810U;
volatile int32_t t64 = 20;
uint16_t x296 = 30U;
static int32_t x298 = -1;
int8_t x311 = 7;
volatile uint32_t t69 = 2652U;
uint64_t x322 = 6LLU;
volatile uint32_t x324 = 2281U;
volatile int8_t x328 = -1;
static int64_t x329 = -158LL;
int32_t x334 = 1;
uint8_t x336 = UINT8_MAX;
volatile uint16_t x338 = 9U;
int64_t x347 = INT64_MIN;
int32_t t78 = 11820130;
int16_t x350 = INT16_MIN;
int64_t x354 = -1LL;
int16_t x356 = -14;
int32_t t80 = -1586;
uint64_t x357 = UINT64_MAX;
static int32_t x359 = INT32_MIN;
volatile uint32_t t81 = 37727U;
int8_t x369 = INT8_MIN;
int16_t x374 = INT16_MAX;
uint32_t x380 = UINT32_MAX;
int16_t x382 = INT16_MIN;
int16_t x383 = INT16_MIN;
volatile int32_t t87 = 22;
static int32_t x388 = 522688;
int32_t t88 = -1;
int64_t x391 = INT64_MIN;
int8_t x398 = -3;
static volatile int16_t x403 = INT16_MAX;
uint8_t x404 = UINT8_MAX;
volatile uint64_t x405 = 182865609321LLU;
int8_t x414 = -7;
volatile uint64_t t95 = 248035523531LLU;
int32_t x421 = INT32_MAX;
static volatile int64_t x424 = -1LL;
uint32_t x436 = 3469U;
static uint32_t x438 = 49765595U;
volatile int8_t x440 = INT8_MIN;
static int32_t t103 = 176;
volatile int32_t x457 = INT32_MIN;
int64_t x460 = -1LL;
volatile int64_t t104 = -348644126997LL;
uint64_t t106 = 821827413LLU;
volatile int64_t x471 = -15169565LL;
int32_t t107 = -1220223;
int32_t x473 = -1732;
uint8_t x476 = 20U;
int32_t x489 = INT32_MAX;
static int16_t x499 = INT16_MAX;
int32_t x505 = -103;
volatile int16_t x507 = 770;
static int32_t t115 = -2622;
volatile uint8_t x511 = 3U;
int32_t t116 = 2;
uint64_t x515 = UINT64_MAX;
int16_t x516 = INT16_MIN;
int32_t x519 = -1;
uint16_t x523 = 1U;
int32_t t122 = -7708;
volatile uint8_t x543 = 120U;
volatile int32_t t126 = -1;
uint16_t x554 = 9765U;
volatile uint16_t x577 = 4U;
int64_t x582 = INT64_MAX;
static int16_t x589 = INT16_MIN;
int8_t x591 = 0;
uint32_t x592 = UINT32_MAX;
static int32_t x596 = 448559140;
static uint64_t x603 = UINT64_MAX;
int8_t x611 = -1;
int32_t x612 = -313045;
int64_t x619 = INT64_MIN;
uint16_t x641 = UINT16_MAX;
static int8_t x643 = INT8_MIN;
static int16_t x644 = -1;
volatile int8_t x651 = INT8_MIN;
int32_t x652 = -1;
volatile int32_t t146 = 115;
int64_t x664 = 473608505950897716LL;
int16_t x672 = -2550;
int32_t t148 = -30576;
volatile uint64_t x674 = 1330608647411LLU;
volatile int32_t t150 = -233348798;
volatile uint32_t x686 = 1972U;
static int32_t x695 = -235614281;
int64_t x704 = -6537998263LL;
uint16_t x713 = 0U;
int8_t x719 = INT8_MIN;
static int16_t x720 = INT16_MIN;
static volatile int32_t t158 = 1898665;
int64_t x721 = -1LL;
volatile int16_t x723 = INT16_MIN;
static int16_t x727 = INT16_MIN;
volatile uint64_t x728 = 2230209348LLU;
uint64_t x729 = UINT64_MAX;
volatile int32_t t161 = 59262;
int64_t x744 = -1LL;
int8_t x748 = -1;
int64_t x752 = -1LL;
int8_t x754 = -1;
uint64_t x759 = 0LLU;
static int32_t x763 = -1;
static volatile int64_t t169 = -1LL;
uint8_t x768 = 18U;
int32_t x773 = -2343710;
int8_t x774 = -11;
uint32_t x779 = UINT32_MAX;
int64_t t173 = 2065LL;
volatile int16_t x783 = INT16_MIN;
volatile uint64_t x786 = UINT64_MAX;
static volatile int64_t t175 = 17LL;
volatile int16_t x791 = -15;
volatile uint8_t x796 = 0U;
volatile int16_t x798 = -1;
int32_t t178 = 1749339;
int8_t x817 = -1;
int16_t x818 = -1;
static uint8_t x820 = 1U;
int32_t x828 = -94340;
static int16_t x838 = INT16_MAX;
int8_t x839 = INT8_MIN;
int16_t x840 = INT16_MAX;
volatile int32_t t186 = -24;
int32_t x849 = 998972;
uint8_t x850 = 58U;
int32_t x855 = INT32_MIN;
static uint32_t x857 = UINT32_MAX;
static int32_t x858 = -314634969;
volatile int8_t x860 = INT8_MAX;
int32_t x864 = INT32_MAX;
uint32_t x873 = 10U;
uint64_t x875 = 15413766LLU;
static volatile int64_t t194 = 157763623LL;
static int64_t x893 = -34128616867668325LL;
int8_t x894 = -1;
static int64_t x897 = -49592731134LL;
int16_t x900 = INT16_MIN;
int32_t t199 = -36511837;


void f0(void) {
    	uint64_t x1 = 0LLU;
	static int64_t x3 = INT64_MAX;
	int64_t x4 = 13031064062259LL;
	static volatile int64_t t0 = 275661433LL;

    t0 = (((x1<=x2)==x3)-x4);

    if (t0 != -13031064062259LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x9 = INT32_MIN;
	uint32_t x10 = 16U;
	int32_t x11 = 22198991;
	uint32_t x12 = UINT32_MAX;
	static uint32_t t1 = 281555U;

    t1 = (((x9<=x10)==x11)-x12);

    if (t1 != 1U) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x13 = -1;
	volatile int64_t x14 = -1LL;
	volatile int16_t x15 = INT16_MIN;
	volatile int64_t x16 = INT64_MAX;
	int64_t t2 = -8742321341590747LL;

    t2 = (((x13<=x14)==x15)-x16);

    if (t2 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x17 = INT32_MAX;
	static int32_t x18 = 2;
	volatile uint8_t x19 = UINT8_MAX;
	static uint8_t x20 = UINT8_MAX;
	volatile int32_t t3 = 3;

    t3 = (((x17<=x18)==x19)-x20);

    if (t3 != -255) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x21 = INT8_MAX;
	volatile uint16_t x22 = 2U;
	int8_t x24 = -31;
	volatile int32_t t4 = -131647629;

    t4 = (((x21<=x22)==x23)-x24);

    if (t4 != 31) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x25 = INT32_MIN;
	uint16_t x26 = 6U;
	uint8_t x27 = 76U;
	volatile int64_t x28 = -2507218370LL;
	volatile int64_t t5 = 1693LL;

    t5 = (((x25<=x26)==x27)-x28);

    if (t5 != 2507218370LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x30 = INT16_MIN;
	volatile int8_t x32 = 21;
	volatile int32_t t6 = -63;

    t6 = (((x29<=x30)==x31)-x32);

    if (t6 != -21) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x33 = INT32_MAX;
	uint32_t x34 = 4U;
	volatile uint32_t x35 = 48U;
	uint32_t x36 = UINT32_MAX;
	uint32_t t7 = 21243U;

    t7 = (((x33<=x34)==x35)-x36);

    if (t7 != 1U) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x37 = INT64_MAX;
	static volatile int32_t x40 = -3;
	int32_t t8 = 113312917;

    t8 = (((x37<=x38)==x39)-x40);

    if (t8 != 3) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x41 = -1;
	int8_t x42 = INT8_MAX;
	uint64_t x43 = 1804619105616555LLU;
	uint8_t x44 = UINT8_MAX;
	volatile int32_t t9 = -499;

    t9 = (((x41<=x42)==x43)-x44);

    if (t9 != -255) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x45 = -1;
	volatile uint8_t x46 = UINT8_MAX;
	int32_t x47 = -1836960;
	int16_t x48 = -1;
	volatile int32_t t10 = -9097;

    t10 = (((x45<=x46)==x47)-x48);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint32_t x50 = 1176U;
	uint32_t x51 = 3136620U;
	int16_t x52 = -1;

    t11 = (((x49<=x50)==x51)-x52);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x54 = INT8_MAX;
	uint8_t x55 = 1U;
	uint64_t t12 = 1997LLU;

    t12 = (((x53<=x54)==x55)-x56);

    if (t12 != 2LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x57 = 16243104891047LLU;
	int64_t x58 = -1LL;
	int32_t x59 = INT32_MAX;
	static uint16_t x60 = 322U;
	int32_t t13 = 2433;

    t13 = (((x57<=x58)==x59)-x60);

    if (t13 != -322) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x62 = INT64_MAX;
	static int32_t x63 = INT32_MAX;
	volatile uint32_t x64 = UINT32_MAX;

    t14 = (((x61<=x62)==x63)-x64);

    if (t14 != 1U) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x69 = -1073809LL;
	int64_t x70 = INT64_MIN;
	volatile int32_t x71 = -27745822;
	static int32_t x72 = INT32_MAX;

    t15 = (((x69<=x70)==x71)-x72);

    if (t15 != -2147483647) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int32_t x75 = INT32_MIN;
	volatile int32_t t16 = -50;

    t16 = (((x73<=x74)==x75)-x76);

    if (t16 != -2199) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x77 = INT16_MIN;
	int64_t x79 = -1LL;
	volatile int8_t x80 = 3;
	int32_t t17 = 8290891;

    t17 = (((x77<=x78)==x79)-x80);

    if (t17 != -3) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x81 = 25;
	int32_t x82 = INT32_MAX;
	static uint64_t x83 = UINT64_MAX;
	volatile int64_t x84 = INT64_MAX;

    t18 = (((x81<=x82)==x83)-x84);

    if (t18 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int16_t x85 = -1428;
	static int8_t x87 = INT8_MIN;
	int8_t x88 = -1;
	int32_t t19 = -19;

    t19 = (((x85<=x86)==x87)-x88);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int32_t x89 = INT32_MIN;
	volatile int8_t x90 = -10;
	static int16_t x91 = -5433;
	uint8_t x92 = 1U;

    t20 = (((x89<=x90)==x91)-x92);

    if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x97 = 31;
	int32_t x99 = INT32_MIN;
	uint8_t x100 = UINT8_MAX;

    t21 = (((x97<=x98)==x99)-x100);

    if (t21 != -255) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x101 = INT64_MIN;
	uint64_t x102 = 1911089LLU;
	static int32_t x103 = INT32_MIN;
	static int16_t x104 = 0;
	int32_t t22 = -13766;

    t22 = (((x101<=x102)==x103)-x104);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x105 = INT16_MIN;
	int8_t x106 = INT8_MAX;
	int32_t x107 = INT32_MAX;
	int16_t x108 = 1;
	int32_t t23 = 967;

    t23 = (((x105<=x106)==x107)-x108);

    if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x109 = INT64_MIN;
	static int32_t x110 = INT32_MIN;
	uint64_t x111 = UINT64_MAX;
	volatile uint64_t t24 = 11703401640LLU;

    t24 = (((x109<=x110)==x111)-x112);

    if (t24 != 18446744073709146632LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x113 = INT32_MAX;
	volatile int8_t x114 = 22;
	int8_t x116 = INT8_MIN;
	static int32_t t25 = -3964130;

    t25 = (((x113<=x114)==x115)-x116);

    if (t25 != 128) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x117 = -1;
	static int64_t x118 = -471LL;
	int16_t x119 = -88;
	static uint16_t x120 = UINT16_MAX;
	int32_t t26 = -188197796;

    t26 = (((x117<=x118)==x119)-x120);

    if (t26 != -65535) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x121 = -1;
	int16_t x122 = 368;
	int16_t x123 = 356;
	int16_t x124 = 221;
	int32_t t27 = -4;

    t27 = (((x121<=x122)==x123)-x124);

    if (t27 != -221) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x125 = -83;
	uint64_t x126 = 102934643546046LLU;
	int8_t x128 = INT8_MAX;
	int32_t t28 = 401387176;

    t28 = (((x125<=x126)==x127)-x128);

    if (t28 != -127) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x129 = INT16_MIN;
	volatile uint8_t x130 = 1U;
	int8_t x131 = -2;
	int32_t x132 = -1;
	volatile int32_t t29 = -30;

    t29 = (((x129<=x130)==x131)-x132);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x137 = 4U;
	int32_t x139 = INT32_MIN;
	int8_t x140 = -1;
	static int32_t t30 = -7;

    t30 = (((x137<=x138)==x139)-x140);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x141 = UINT32_MAX;
	static volatile uint64_t x142 = 321066894819836LLU;
	int32_t x143 = 2;
	int32_t x144 = INT32_MAX;
	int32_t t31 = 159815;

    t31 = (((x141<=x142)==x143)-x144);

    if (t31 != -2147483647) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x146 = 0U;
	static uint16_t x147 = 116U;
	volatile int32_t t32 = 1;

    t32 = (((x145<=x146)==x147)-x148);

    if (t32 != -2147483647) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x150 = -1;
	int8_t x151 = INT8_MIN;
	static volatile uint64_t t33 = 163295088138131974LLU;

    t33 = (((x149<=x150)==x151)-x152);

    if (t33 != 18435852495518553949LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x153 = INT64_MIN;
	int16_t x154 = 1;
	int16_t x155 = 2364;
	int32_t x156 = -7431;
	volatile int32_t t34 = -650;

    t34 = (((x153<=x154)==x155)-x156);

    if (t34 != 7431) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x157 = -1;
	volatile int8_t x158 = 1;
	int8_t x160 = INT8_MIN;

    t35 = (((x157<=x158)==x159)-x160);

    if (t35 != 128) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint64_t x164 = UINT64_MAX;
	static uint64_t t36 = 4505131958LLU;

    t36 = (((x161<=x162)==x163)-x164);

    if (t36 != 2LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x165 = 1;
	int64_t x166 = INT64_MIN;
	int32_t x167 = INT32_MAX;
	int16_t x168 = INT16_MAX;
	static volatile int32_t t37 = -1;

    t37 = (((x165<=x166)==x167)-x168);

    if (t37 != -32767) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint64_t x169 = UINT64_MAX;
	static int32_t x171 = -1;

    t38 = (((x169<=x170)==x171)-x172);

    if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x173 = -1LL;
	uint64_t x174 = UINT64_MAX;
	int64_t x176 = 645102030574911548LL;
	volatile int64_t t39 = 6760LL;

    t39 = (((x173<=x174)==x175)-x176);

    if (t39 != -645102030574911548LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x178 = 3301U;
	volatile int32_t x179 = 492;
	uint64_t x180 = 2LLU;
	uint64_t t40 = 221048711896271726LLU;

    t40 = (((x177<=x178)==x179)-x180);

    if (t40 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x181 = 10402940LLU;
	int8_t x182 = INT8_MIN;
	int64_t x184 = INT64_MAX;

    t41 = (((x181<=x182)==x183)-x184);

    if (t41 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x185 = INT64_MAX;
	int64_t x186 = INT64_MIN;
	uint32_t x187 = 0U;
	static uint16_t x188 = 0U;
	static volatile int32_t t42 = 1;

    t42 = (((x185<=x186)==x187)-x188);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x190 = 559453092381402499LL;
	int32_t x191 = INT32_MAX;
	uint16_t x192 = UINT16_MAX;
	int32_t t43 = 682;

    t43 = (((x189<=x190)==x191)-x192);

    if (t43 != -65535) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x193 = INT16_MIN;
	static int16_t x194 = INT16_MIN;
	int16_t x195 = -1;
	static volatile int64_t x196 = -1LL;
	volatile int64_t t44 = -136753193669030LL;

    t44 = (((x193<=x194)==x195)-x196);

    if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x197 = 147464;
	int8_t x198 = INT8_MAX;
	volatile uint16_t x199 = 116U;
	static volatile int32_t x200 = INT32_MAX;
	static volatile int32_t t45 = 973933381;

    t45 = (((x197<=x198)==x199)-x200);

    if (t45 != -2147483647) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x201 = INT8_MAX;
	static int64_t x202 = INT64_MAX;
	static uint16_t x203 = 449U;

    t46 = (((x201<=x202)==x203)-x204);

    if (t46 != 408) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x205 = INT32_MIN;
	int32_t x206 = INT32_MAX;
	int8_t x207 = INT8_MIN;
	uint8_t x208 = UINT8_MAX;
	int32_t t47 = -22;

    t47 = (((x205<=x206)==x207)-x208);

    if (t47 != -255) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x214 = INT32_MAX;
	static int8_t x215 = INT8_MIN;
	volatile int16_t x216 = INT16_MIN;
	int32_t t48 = 11;

    t48 = (((x213<=x214)==x215)-x216);

    if (t48 != 32768) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x217 = -1LL;
	int64_t x218 = INT64_MIN;
	static int8_t x219 = INT8_MIN;
	uint64_t x220 = 7756783358048LLU;
	uint64_t t49 = 682759377LLU;

    t49 = (((x217<=x218)==x219)-x220);

    if (t49 != 18446736316926193568LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x221 = -1;
	volatile int16_t x223 = -1;
	int32_t x224 = 28;
	int32_t t50 = -554;

    t50 = (((x221<=x222)==x223)-x224);

    if (t50 != -28) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int64_t x225 = INT64_MAX;
	int8_t x226 = -1;
	int32_t x228 = -5;
	volatile int32_t t51 = 817784;

    t51 = (((x225<=x226)==x227)-x228);

    if (t51 != 5) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x231 = INT16_MAX;
	int8_t x232 = -1;
	volatile int32_t t52 = 1629;

    t52 = (((x229<=x230)==x231)-x232);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x233 = UINT64_MAX;
	uint16_t x234 = 0U;
	int64_t x235 = -1LL;
	int8_t x236 = -1;
	static int32_t t53 = -536;

    t53 = (((x233<=x234)==x235)-x236);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x237 = -1;
	volatile int8_t x239 = INT8_MAX;

    t54 = (((x237<=x238)==x239)-x240);

    if (t54 != -31) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x241 = 258226355;
	int32_t x243 = 263;
	static uint16_t x244 = 873U;
	int32_t t55 = 81;

    t55 = (((x241<=x242)==x243)-x244);

    if (t55 != -873) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile uint8_t x249 = 122U;
	int64_t x250 = INT64_MIN;
	int16_t x251 = -4;
	volatile uint32_t t56 = 938557906U;

    t56 = (((x249<=x250)==x251)-x252);

    if (t56 != 4262939597U) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x253 = 1381935385753734LLU;
	static volatile int32_t x254 = INT32_MIN;
	volatile int8_t x255 = -1;
	static int32_t t57 = -128570896;

    t57 = (((x253<=x254)==x255)-x256);

    if (t57 != 2) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x261 = 15217;
	int32_t x262 = 25746055;
	static int8_t x264 = INT8_MIN;
	int32_t t58 = -16143285;

    t58 = (((x261<=x262)==x263)-x264);

    if (t58 != 128) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x265 = INT64_MAX;
	int8_t x266 = -1;
	uint8_t x267 = 24U;
	int64_t x268 = 9113541181019211LL;
	int64_t t59 = -13106133717399LL;

    t59 = (((x265<=x266)==x267)-x268);

    if (t59 != -9113541181019211LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x269 = 9;
	uint64_t x270 = UINT64_MAX;
	int8_t x271 = INT8_MIN;
	int64_t x272 = -90145290955278LL;
	volatile int64_t t60 = -1432185758070466543LL;

    t60 = (((x269<=x270)==x271)-x272);

    if (t60 != 90145290955278LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x273 = INT8_MIN;
	volatile int32_t x274 = INT32_MIN;
	static uint64_t x275 = UINT64_MAX;
	uint32_t x276 = UINT32_MAX;
	volatile uint32_t t61 = 3U;

    t61 = (((x273<=x274)==x275)-x276);

    if (t61 != 1U) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x278 = UINT8_MAX;
	int16_t x279 = -6932;
	int8_t x280 = INT8_MIN;

    t62 = (((x277<=x278)==x279)-x280);

    if (t62 != 128) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x281 = INT64_MIN;
	volatile uint16_t x283 = 2025U;
	static volatile uint16_t x284 = 573U;
	volatile int32_t t63 = -1;

    t63 = (((x281<=x282)==x283)-x284);

    if (t63 != -573) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x285 = UINT64_MAX;
	int8_t x287 = INT8_MIN;

    t64 = (((x285<=x286)==x287)-x288);

    if (t64 != -1810) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x289 = -8961;
	volatile int64_t x290 = INT64_MIN;
	int64_t x291 = -1LL;
	static uint32_t x292 = UINT32_MAX;
	uint32_t t65 = 3801U;

    t65 = (((x289<=x290)==x291)-x292);

    if (t65 != 1U) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x293 = -1;
	int32_t x294 = INT32_MIN;
	int64_t x295 = -903LL;
	volatile int32_t t66 = 23;

    t66 = (((x293<=x294)==x295)-x296);

    if (t66 != -30) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x297 = INT64_MIN;
	uint16_t x299 = UINT16_MAX;
	int16_t x300 = INT16_MIN;
	volatile int32_t t67 = -200798;

    t67 = (((x297<=x298)==x299)-x300);

    if (t67 != 32768) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x305 = -10;
	uint32_t x306 = 570U;
	volatile int8_t x307 = INT8_MAX;
	volatile int64_t x308 = -1LL;
	volatile int64_t t68 = 50549LL;

    t68 = (((x305<=x306)==x307)-x308);

    if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x309 = -1;
	uint64_t x310 = 24678849136LLU;
	static uint32_t x312 = 24U;

    t69 = (((x309<=x310)==x311)-x312);

    if (t69 != 4294967272U) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x313 = INT16_MIN;
	static int32_t x314 = -1;
	int32_t x315 = -971465;
	uint64_t x316 = UINT64_MAX;
	volatile uint64_t t70 = 9543025900LLU;

    t70 = (((x313<=x314)==x315)-x316);

    if (t70 != 1LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint8_t x317 = 1U;
	int8_t x318 = INT8_MIN;
	static int8_t x319 = INT8_MAX;
	static volatile int32_t x320 = -1;
	volatile int32_t t71 = -28026266;

    t71 = (((x317<=x318)==x319)-x320);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x321 = INT32_MAX;
	int8_t x323 = INT8_MIN;
	uint32_t t72 = 10U;

    t72 = (((x321<=x322)==x323)-x324);

    if (t72 != 4294965015U) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x325 = 1U;
	static uint64_t x326 = 1386LLU;
	int32_t x327 = 972311;
	volatile int32_t t73 = 14;

    t73 = (((x325<=x326)==x327)-x328);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x330 = INT32_MIN;
	int16_t x331 = INT16_MAX;
	volatile uint8_t x332 = UINT8_MAX;
	int32_t t74 = -255;

    t74 = (((x329<=x330)==x331)-x332);

    if (t74 != -255) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x333 = -1;
	static uint32_t x335 = UINT32_MAX;
	volatile int32_t t75 = -28;

    t75 = (((x333<=x334)==x335)-x336);

    if (t75 != -255) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x337 = -3;
	uint32_t x339 = 12207537U;
	uint16_t x340 = 446U;
	volatile int32_t t76 = -3;

    t76 = (((x337<=x338)==x339)-x340);

    if (t76 != -446) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x341 = -8850LL;
	volatile int32_t x342 = INT32_MAX;
	uint16_t x343 = 4U;
	uint32_t x344 = 2239U;
	uint32_t t77 = 56297U;

    t77 = (((x341<=x342)==x343)-x344);

    if (t77 != 4294965057U) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x345 = 2U;
	volatile int32_t x346 = INT32_MIN;
	int8_t x348 = INT8_MIN;

    t78 = (((x345<=x346)==x347)-x348);

    if (t78 != 128) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x349 = -10;
	volatile int8_t x351 = 5;
	volatile uint8_t x352 = UINT8_MAX;
	int32_t t79 = 4955434;

    t79 = (((x349<=x350)==x351)-x352);

    if (t79 != -255) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x353 = 3909282U;
	static int16_t x355 = INT16_MAX;

    t80 = (((x353<=x354)==x355)-x356);

    if (t80 != 14) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x358 = INT8_MIN;
	uint32_t x360 = 573605U;

    t81 = (((x357<=x358)==x359)-x360);

    if (t81 != 4294393691U) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x361 = UINT64_MAX;
	volatile uint32_t x362 = 15770U;
	uint8_t x363 = 2U;
	int8_t x364 = INT8_MAX;
	volatile int32_t t82 = -25;

    t82 = (((x361<=x362)==x363)-x364);

    if (t82 != -127) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint32_t x365 = 33708764U;
	int32_t x366 = INT32_MIN;
	static int32_t x367 = -1;
	static uint64_t x368 = 2011751926LLU;
	uint64_t t83 = 92290303517061810LLU;

    t83 = (((x365<=x366)==x367)-x368);

    if (t83 != 18446744071697799690LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x370 = INT16_MIN;
	volatile int32_t x371 = INT32_MIN;
	int8_t x372 = INT8_MAX;
	volatile int32_t t84 = -157;

    t84 = (((x369<=x370)==x371)-x372);

    if (t84 != -127) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint8_t x373 = 124U;
	volatile int64_t x375 = INT64_MIN;
	int64_t x376 = INT64_MAX;
	volatile int64_t t85 = -8700206992549240LL;

    t85 = (((x373<=x374)==x375)-x376);

    if (t85 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint64_t x377 = 3611916870050LLU;
	int32_t x378 = INT32_MIN;
	volatile int64_t x379 = INT64_MIN;
	uint32_t t86 = 32U;

    t86 = (((x377<=x378)==x379)-x380);

    if (t86 != 1U) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x381 = -1;
	int8_t x384 = INT8_MIN;

    t87 = (((x381<=x382)==x383)-x384);

    if (t87 != 128) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x385 = 22448136LL;
	int32_t x386 = 10330;
	static uint8_t x387 = UINT8_MAX;

    t88 = (((x385<=x386)==x387)-x388);

    if (t88 != -522688) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x389 = -1LL;
	static int32_t x390 = INT32_MIN;
	uint64_t x392 = 27529012160798805LLU;
	uint64_t t89 = 249343947LLU;

    t89 = (((x389<=x390)==x391)-x392);

    if (t89 != 18419215061548752811LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint64_t x397 = UINT64_MAX;
	int32_t x399 = -1;
	int8_t x400 = INT8_MIN;
	volatile int32_t t90 = 130172;

    t90 = (((x397<=x398)==x399)-x400);

    if (t90 != 128) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x401 = INT32_MIN;
	int16_t x402 = INT16_MAX;
	int32_t t91 = 1749;

    t91 = (((x401<=x402)==x403)-x404);

    if (t91 != -255) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x406 = -1;
	int32_t x407 = -1;
	int16_t x408 = INT16_MIN;
	int32_t t92 = -205971;

    t92 = (((x405<=x406)==x407)-x408);

    if (t92 != 32768) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x409 = INT16_MIN;
	volatile int64_t x410 = -1LL;
	volatile int32_t x411 = 2123;
	int64_t x412 = INT64_MAX;
	int64_t t93 = -1032342057944378LL;

    t93 = (((x409<=x410)==x411)-x412);

    if (t93 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static int16_t x413 = INT16_MIN;
	static volatile uint64_t x415 = 2424824LLU;
	volatile int32_t x416 = 232226;
	int32_t t94 = 4827615;

    t94 = (((x413<=x414)==x415)-x416);

    if (t94 != -232226) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint16_t x417 = 12731U;
	uint16_t x418 = UINT16_MAX;
	int16_t x419 = INT16_MIN;
	uint64_t x420 = 12143501458013251LLU;

    t95 = (((x417<=x418)==x419)-x420);

    if (t95 != 18434600572251538365LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint64_t x422 = 5274536720LLU;
	int16_t x423 = INT16_MIN;
	static volatile int64_t t96 = -1036206153336432LL;

    t96 = (((x421<=x422)==x423)-x424);

    if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x425 = -1;
	uint32_t x426 = UINT32_MAX;
	uint32_t x427 = 43450882U;
	volatile int16_t x428 = -1;
	volatile int32_t t97 = -1119528;

    t97 = (((x425<=x426)==x427)-x428);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x429 = -1063793808129390651LL;
	int16_t x430 = INT16_MIN;
	static volatile int32_t x431 = 22503118;
	uint32_t x432 = UINT32_MAX;
	volatile uint32_t t98 = 161306U;

    t98 = (((x429<=x430)==x431)-x432);

    if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint8_t x433 = UINT8_MAX;
	volatile int16_t x434 = 6;
	volatile int8_t x435 = INT8_MIN;
	volatile uint32_t t99 = 1421357U;

    t99 = (((x433<=x434)==x435)-x436);

    if (t99 != 4294963827U) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x437 = UINT16_MAX;
	static int64_t x439 = INT64_MIN;
	static int32_t t100 = -8400377;

    t100 = (((x437<=x438)==x439)-x440);

    if (t100 != 128) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x441 = -44;
	volatile int16_t x442 = 743;
	int8_t x443 = INT8_MAX;
	int16_t x444 = INT16_MIN;
	static volatile int32_t t101 = -46402690;

    t101 = (((x441<=x442)==x443)-x444);

    if (t101 != 32768) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x445 = UINT8_MAX;
	uint32_t x446 = 43658567U;
	int16_t x447 = -2;
	int16_t x448 = -1;
	volatile int32_t t102 = -80842708;

    t102 = (((x445<=x446)==x447)-x448);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile uint16_t x453 = UINT16_MAX;
	int64_t x454 = -1LL;
	static uint8_t x455 = 4U;
	volatile int32_t x456 = -1;

    t103 = (((x453<=x454)==x455)-x456);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x458 = 6386;
	volatile uint16_t x459 = UINT16_MAX;

    t104 = (((x457<=x458)==x459)-x460);

    if (t104 != 1LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x461 = INT16_MAX;
	volatile uint16_t x462 = 7U;
	int16_t x463 = -150;
	int8_t x464 = 25;
	volatile int32_t t105 = -12;

    t105 = (((x461<=x462)==x463)-x464);

    if (t105 != -25) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x465 = -1;
	static int32_t x466 = INT32_MIN;
	int64_t x467 = INT64_MIN;
	uint64_t x468 = 265969478044LLU;

    t106 = (((x465<=x466)==x467)-x468);

    if (t106 != 18446743807740073572LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x469 = -1;
	uint8_t x470 = UINT8_MAX;
	uint16_t x472 = 1247U;

    t107 = (((x469<=x470)==x471)-x472);

    if (t107 != -1247) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint32_t x474 = UINT32_MAX;
	int32_t x475 = -1;
	int32_t t108 = -93;

    t108 = (((x473<=x474)==x475)-x476);

    if (t108 != -20) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x477 = INT32_MIN;
	static volatile int16_t x478 = INT16_MIN;
	volatile int8_t x479 = 3;
	int8_t x480 = -1;
	static int32_t t109 = -37776143;

    t109 = (((x477<=x478)==x479)-x480);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x485 = 55651LLU;
	int32_t x486 = INT32_MIN;
	static int8_t x487 = 12;
	static int64_t x488 = -2930207814LL;
	volatile int64_t t110 = 832676407955044901LL;

    t110 = (((x485<=x486)==x487)-x488);

    if (t110 != 2930207814LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint64_t x490 = 12684LLU;
	int64_t x491 = 896442LL;
	int16_t x492 = INT16_MIN;
	int32_t t111 = 432481;

    t111 = (((x489<=x490)==x491)-x492);

    if (t111 != 32768) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int64_t x493 = -1LL;
	int16_t x494 = INT16_MIN;
	static uint16_t x495 = UINT16_MAX;
	volatile int16_t x496 = -1;
	volatile int32_t t112 = 176697;

    t112 = (((x493<=x494)==x495)-x496);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint32_t x497 = 6U;
	uint8_t x498 = 6U;
	int32_t x500 = -1;
	volatile int32_t t113 = 14;

    t113 = (((x497<=x498)==x499)-x500);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x501 = INT8_MIN;
	int8_t x502 = INT8_MAX;
	volatile uint8_t x503 = 8U;
	int16_t x504 = 548;
	static volatile int32_t t114 = 3710691;

    t114 = (((x501<=x502)==x503)-x504);

    if (t114 != -548) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int16_t x506 = INT16_MIN;
	int8_t x508 = INT8_MIN;

    t115 = (((x505<=x506)==x507)-x508);

    if (t115 != 128) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x509 = INT64_MIN;
	int16_t x510 = -1;
	uint8_t x512 = 44U;

    t116 = (((x509<=x510)==x511)-x512);

    if (t116 != -44) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x513 = -533502433240527831LL;
	int32_t x514 = INT32_MIN;
	int32_t t117 = -160984;

    t117 = (((x513<=x514)==x515)-x516);

    if (t117 != 32768) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x517 = INT16_MIN;
	int32_t x518 = INT32_MIN;
	uint64_t x520 = 293348226389425LLU;
	uint64_t t118 = 6LLU;

    t118 = (((x517<=x518)==x519)-x520);

    if (t118 != 18446450725483162191LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint32_t x521 = 63958U;
	uint8_t x522 = 24U;
	static volatile int16_t x524 = INT16_MAX;
	volatile int32_t t119 = 511012;

    t119 = (((x521<=x522)==x523)-x524);

    if (t119 != -32767) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint64_t x525 = 2900453LLU;
	int64_t x526 = INT64_MIN;
	int8_t x527 = -1;
	uint8_t x528 = UINT8_MAX;
	int32_t t120 = -225;

    t120 = (((x525<=x526)==x527)-x528);

    if (t120 != -255) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x529 = INT16_MAX;
	int64_t x530 = 63656473259147LL;
	int64_t x531 = -1LL;
	int32_t x532 = INT32_MAX;
	volatile int32_t t121 = -7438385;

    t121 = (((x529<=x530)==x531)-x532);

    if (t121 != -2147483647) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x533 = -1LL;
	static volatile int64_t x534 = 236328340LL;
	static uint16_t x535 = 0U;
	int16_t x536 = INT16_MAX;

    t122 = (((x533<=x534)==x535)-x536);

    if (t122 != -32767) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int8_t x537 = INT8_MIN;
	int8_t x538 = -1;
	int32_t x539 = INT32_MIN;
	uint8_t x540 = UINT8_MAX;
	volatile int32_t t123 = 64690;

    t123 = (((x537<=x538)==x539)-x540);

    if (t123 != -255) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x541 = INT32_MAX;
	int32_t x542 = -1;
	static int8_t x544 = INT8_MAX;
	int32_t t124 = -9508;

    t124 = (((x541<=x542)==x543)-x544);

    if (t124 != -127) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x545 = 2;
	uint32_t x546 = UINT32_MAX;
	uint8_t x547 = 0U;
	static int32_t x548 = 13042;
	static volatile int32_t t125 = 45044;

    t125 = (((x545<=x546)==x547)-x548);

    if (t125 != -13042) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x549 = 7;
	volatile uint16_t x550 = UINT16_MAX;
	static volatile int16_t x551 = INT16_MIN;
	volatile int8_t x552 = INT8_MIN;

    t126 = (((x549<=x550)==x551)-x552);

    if (t126 != 128) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x553 = INT8_MAX;
	uint8_t x555 = UINT8_MAX;
	volatile uint8_t x556 = UINT8_MAX;
	int32_t t127 = -252724;

    t127 = (((x553<=x554)==x555)-x556);

    if (t127 != -255) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x561 = INT64_MIN;
	uint32_t x562 = 1U;
	int32_t x563 = INT32_MAX;
	static uint32_t x564 = 3690U;
	static volatile uint32_t t128 = 24398U;

    t128 = (((x561<=x562)==x563)-x564);

    if (t128 != 4294963606U) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x573 = INT16_MIN;
	int32_t x574 = INT32_MAX;
	int32_t x575 = -1;
	static int16_t x576 = -1;
	int32_t t129 = -102536;

    t129 = (((x573<=x574)==x575)-x576);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint64_t x578 = 479817437870656LLU;
	static int64_t x579 = INT64_MIN;
	uint16_t x580 = 0U;
	static volatile int32_t t130 = 1;

    t130 = (((x577<=x578)==x579)-x580);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x581 = UINT64_MAX;
	static uint32_t x583 = 33064U;
	int16_t x584 = -8160;
	volatile int32_t t131 = 31250;

    t131 = (((x581<=x582)==x583)-x584);

    if (t131 != 8160) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x585 = -1;
	uint64_t x586 = UINT64_MAX;
	static uint32_t x587 = UINT32_MAX;
	int8_t x588 = INT8_MIN;
	volatile int32_t t132 = 1255152;

    t132 = (((x585<=x586)==x587)-x588);

    if (t132 != 128) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint8_t x590 = 2U;
	uint32_t t133 = 1319421777U;

    t133 = (((x589<=x590)==x591)-x592);

    if (t133 != 1U) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint64_t x593 = UINT64_MAX;
	static int8_t x594 = INT8_MIN;
	uint8_t x595 = 44U;
	volatile int32_t t134 = 1;

    t134 = (((x593<=x594)==x595)-x596);

    if (t134 != -448559140) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x601 = -1;
	int32_t x602 = -1;
	static uint32_t x604 = 369U;
	volatile uint32_t t135 = 2000U;

    t135 = (((x601<=x602)==x603)-x604);

    if (t135 != 4294966927U) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x605 = INT16_MIN;
	uint16_t x606 = 13U;
	static int16_t x607 = -3108;
	int16_t x608 = INT16_MIN;
	int32_t t136 = -106576;

    t136 = (((x605<=x606)==x607)-x608);

    if (t136 != 32768) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x609 = INT64_MIN;
	volatile int32_t x610 = -1;
	volatile int32_t t137 = 1742840;

    t137 = (((x609<=x610)==x611)-x612);

    if (t137 != 313045) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x613 = INT64_MAX;
	volatile int32_t x614 = -56097;
	uint16_t x615 = UINT16_MAX;
	static int16_t x616 = INT16_MIN;
	volatile int32_t t138 = 957292300;

    t138 = (((x613<=x614)==x615)-x616);

    if (t138 != 32768) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x617 = INT64_MIN;
	int8_t x618 = -8;
	static uint64_t x620 = UINT64_MAX;
	uint64_t t139 = 2468747587LLU;

    t139 = (((x617<=x618)==x619)-x620);

    if (t139 != 1LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x625 = -1;
	uint16_t x626 = 3378U;
	volatile uint32_t x627 = 1570U;
	int8_t x628 = -1;
	int32_t t140 = 224;

    t140 = (((x625<=x626)==x627)-x628);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x629 = 3;
	uint64_t x630 = 1861834LLU;
	uint32_t x631 = 16U;
	volatile int8_t x632 = INT8_MIN;
	volatile int32_t t141 = 52;

    t141 = (((x629<=x630)==x631)-x632);

    if (t141 != 128) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x642 = INT8_MIN;
	volatile int32_t t142 = 53254;

    t142 = (((x641<=x642)==x643)-x644);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x645 = UINT16_MAX;
	uint8_t x646 = 3U;
	uint16_t x647 = 0U;
	volatile uint64_t x648 = 743LLU;
	uint64_t t143 = 4488447327279671LLU;

    t143 = (((x645<=x646)==x647)-x648);

    if (t143 != 18446744073709550874LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x649 = -1943225948582LL;
	static uint64_t x650 = UINT64_MAX;
	int32_t t144 = 6;

    t144 = (((x649<=x650)==x651)-x652);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x653 = INT8_MAX;
	uint64_t x654 = UINT64_MAX;
	int8_t x655 = -2;
	int64_t x656 = -1LL;
	static int64_t t145 = -1831111612575LL;

    t145 = (((x653<=x654)==x655)-x656);

    if (t145 != 1LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x657 = -1;
	static int64_t x658 = INT64_MIN;
	int64_t x659 = -45974918892265287LL;
	int16_t x660 = -1;

    t146 = (((x657<=x658)==x659)-x660);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x661 = 464658487834426400LLU;
	int8_t x662 = 7;
	uint8_t x663 = 1U;
	static volatile int64_t t147 = 2089345528966886LL;

    t147 = (((x661<=x662)==x663)-x664);

    if (t147 != -473608505950897716LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint32_t x669 = 15299U;
	volatile int8_t x670 = INT8_MIN;
	uint8_t x671 = 7U;

    t148 = (((x669<=x670)==x671)-x672);

    if (t148 != 2550) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x673 = 74152U;
	int64_t x675 = INT64_MIN;
	int32_t x676 = 18027;
	int32_t t149 = -8113007;

    t149 = (((x673<=x674)==x675)-x676);

    if (t149 != -18027) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int32_t x681 = INT32_MIN;
	int16_t x682 = -1;
	uint16_t x683 = 206U;
	uint16_t x684 = 9U;

    t150 = (((x681<=x682)==x683)-x684);

    if (t150 != -9) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x685 = UINT16_MAX;
	int8_t x687 = 0;
	volatile int8_t x688 = INT8_MIN;
	volatile int32_t t151 = 1833;

    t151 = (((x685<=x686)==x687)-x688);

    if (t151 != 129) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint8_t x689 = 7U;
	static int32_t x690 = INT32_MIN;
	uint8_t x691 = UINT8_MAX;
	volatile uint8_t x692 = 7U;
	int32_t t152 = -10;

    t152 = (((x689<=x690)==x691)-x692);

    if (t152 != -7) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x693 = INT32_MIN;
	int64_t x694 = INT64_MIN;
	int32_t x696 = -344281035;
	volatile int32_t t153 = 9;

    t153 = (((x693<=x694)==x695)-x696);

    if (t153 != 344281035) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x697 = INT16_MIN;
	int64_t x698 = INT64_MAX;
	int64_t x699 = -1LL;
	int16_t x700 = -1;
	int32_t t154 = -153141923;

    t154 = (((x697<=x698)==x699)-x700);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint32_t x701 = UINT32_MAX;
	uint16_t x702 = 4U;
	uint16_t x703 = UINT16_MAX;
	int64_t t155 = 4097563565771LL;

    t155 = (((x701<=x702)==x703)-x704);

    if (t155 != 6537998263LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x705 = INT64_MAX;
	int64_t x706 = -1483167435034413455LL;
	static int16_t x707 = INT16_MIN;
	int64_t x708 = INT64_MAX;
	int64_t t156 = -13602412LL;

    t156 = (((x705<=x706)==x707)-x708);

    if (t156 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint16_t x714 = 2021U;
	int64_t x715 = -1LL;
	volatile int16_t x716 = -15;
	int32_t t157 = -23108562;

    t157 = (((x713<=x714)==x715)-x716);

    if (t157 != 15) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x717 = 63U;
	int32_t x718 = INT32_MAX;

    t158 = (((x717<=x718)==x719)-x720);

    if (t158 != 32768) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x722 = -672;
	int16_t x724 = INT16_MIN;
	static int32_t t159 = -213252370;

    t159 = (((x721<=x722)==x723)-x724);

    if (t159 != 32768) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x725 = INT32_MAX;
	static int64_t x726 = 0LL;
	volatile uint64_t t160 = 1473381623263803825LLU;

    t160 = (((x725<=x726)==x727)-x728);

    if (t160 != 18446744071479342268LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x730 = 1LL;
	int32_t x731 = INT32_MIN;
	int8_t x732 = -63;

    t161 = (((x729<=x730)==x731)-x732);

    if (t161 != 63) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x733 = INT8_MIN;
	int32_t x734 = 1398654;
	int16_t x735 = -3942;
	int64_t x736 = 60LL;
	int64_t t162 = -82991614LL;

    t162 = (((x733<=x734)==x735)-x736);

    if (t162 != -60LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x737 = INT32_MIN;
	static int16_t x738 = -1;
	static uint32_t x739 = 46199U;
	volatile int64_t x740 = -1LL;
	volatile int64_t t163 = 418LL;

    t163 = (((x737<=x738)==x739)-x740);

    if (t163 != 1LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x741 = INT32_MIN;
	int16_t x742 = INT16_MAX;
	uint64_t x743 = 835375485994607965LLU;
	volatile int64_t t164 = 2381728014304063210LL;

    t164 = (((x741<=x742)==x743)-x744);

    if (t164 != 1LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int32_t x745 = INT32_MIN;
	static int16_t x746 = INT16_MIN;
	static int16_t x747 = INT16_MIN;
	volatile int32_t t165 = 261777603;

    t165 = (((x745<=x746)==x747)-x748);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x749 = INT32_MAX;
	volatile int16_t x750 = INT16_MAX;
	uint8_t x751 = 5U;
	int64_t t166 = 3634718LL;

    t166 = (((x749<=x750)==x751)-x752);

    if (t166 != 1LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x753 = INT64_MAX;
	int8_t x755 = INT8_MAX;
	static uint16_t x756 = 23U;
	static int32_t t167 = -337;

    t167 = (((x753<=x754)==x755)-x756);

    if (t167 != -23) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x757 = 1904674568U;
	int32_t x758 = -24;
	uint8_t x760 = 4U;
	volatile int32_t t168 = -53353;

    t168 = (((x757<=x758)==x759)-x760);

    if (t168 != -4) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x761 = UINT32_MAX;
	uint8_t x762 = UINT8_MAX;
	int64_t x764 = -1LL;

    t169 = (((x761<=x762)==x763)-x764);

    if (t169 != 1LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x765 = UINT32_MAX;
	int32_t x766 = 238482;
	int64_t x767 = 79045LL;
	volatile int32_t t170 = 3;

    t170 = (((x765<=x766)==x767)-x768);

    if (t170 != -18) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x769 = 0;
	volatile uint32_t x770 = 3060049U;
	int16_t x771 = INT16_MAX;
	volatile uint64_t x772 = 14233885708511159LLU;
	static volatile uint64_t t171 = 14418LLU;

    t171 = (((x769<=x770)==x771)-x772);

    if (t171 != 18432510188001040457LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x775 = -3310LL;
	uint32_t x776 = 993207U;
	uint32_t t172 = 12803U;

    t172 = (((x773<=x774)==x775)-x776);

    if (t172 != 4293974089U) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x777 = INT32_MAX;
	int32_t x778 = INT32_MAX;
	int64_t x780 = INT64_MAX;

    t173 = (((x777<=x778)==x779)-x780);

    if (t173 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x781 = -1484371;
	int16_t x782 = INT16_MIN;
	int8_t x784 = -1;
	volatile int32_t t174 = -2369186;

    t174 = (((x781<=x782)==x783)-x784);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x785 = 0;
	static int8_t x787 = 3;
	int64_t x788 = 105186718145LL;

    t175 = (((x785<=x786)==x787)-x788);

    if (t175 != -105186718145LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x789 = INT16_MIN;
	int64_t x790 = INT64_MIN;
	uint16_t x792 = 1U;
	volatile int32_t t176 = 2090899;

    t176 = (((x789<=x790)==x791)-x792);

    if (t176 != -1) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile int32_t x793 = INT32_MAX;
	uint16_t x794 = UINT16_MAX;
	uint8_t x795 = UINT8_MAX;
	volatile int32_t t177 = -1;

    t177 = (((x793<=x794)==x795)-x796);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x797 = UINT8_MAX;
	int8_t x799 = INT8_MIN;
	int8_t x800 = 4;

    t178 = (((x797<=x798)==x799)-x800);

    if (t178 != -4) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x801 = -59;
	int32_t x802 = -1;
	int32_t x803 = INT32_MAX;
	uint64_t x804 = 3350584779507932LLU;
	uint64_t t179 = 5708011LLU;

    t179 = (((x801<=x802)==x803)-x804);

    if (t179 != 18443393488930043684LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint8_t x809 = 81U;
	int8_t x810 = INT8_MAX;
	uint16_t x811 = UINT16_MAX;
	int8_t x812 = 41;
	int32_t t180 = -4061693;

    t180 = (((x809<=x810)==x811)-x812);

    if (t180 != -41) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile uint32_t x819 = UINT32_MAX;
	int32_t t181 = -855156345;

    t181 = (((x817<=x818)==x819)-x820);

    if (t181 != -1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x821 = INT64_MIN;
	int64_t x822 = INT64_MIN;
	volatile int16_t x823 = INT16_MIN;
	uint16_t x824 = 1636U;
	volatile int32_t t182 = 359101234;

    t182 = (((x821<=x822)==x823)-x824);

    if (t182 != -1636) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x825 = INT64_MIN;
	uint32_t x826 = UINT32_MAX;
	static volatile int16_t x827 = INT16_MIN;
	int32_t t183 = -29970;

    t183 = (((x825<=x826)==x827)-x828);

    if (t183 != 94340) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint32_t x833 = UINT32_MAX;
	int32_t x834 = -1135;
	static int32_t x835 = -7;
	int64_t x836 = -3462484671905004798LL;
	volatile int64_t t184 = -11LL;

    t184 = (((x833<=x834)==x835)-x836);

    if (t184 != 3462484671905004798LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile uint32_t x837 = 7U;
	volatile int32_t t185 = 1065494;

    t185 = (((x837<=x838)==x839)-x840);

    if (t185 != -32767) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x845 = 0;
	int32_t x846 = INT32_MIN;
	uint64_t x847 = 794092LLU;
	int32_t x848 = -116724;

    t186 = (((x845<=x846)==x847)-x848);

    if (t186 != 116724) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x851 = INT8_MAX;
	volatile uint32_t x852 = 52218748U;
	volatile uint32_t t187 = 631U;

    t187 = (((x849<=x850)==x851)-x852);

    if (t187 != 4242748548U) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x853 = 1386U;
	int8_t x854 = INT8_MAX;
	int16_t x856 = INT16_MIN;
	volatile int32_t t188 = -2792616;

    t188 = (((x853<=x854)==x855)-x856);

    if (t188 != 32768) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x859 = -1;
	int32_t t189 = -5;

    t189 = (((x857<=x858)==x859)-x860);

    if (t189 != -127) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x861 = 1608164126809690221LLU;
	int32_t x862 = INT32_MAX;
	volatile int32_t x863 = INT32_MAX;
	int32_t t190 = 446;

    t190 = (((x861<=x862)==x863)-x864);

    if (t190 != -2147483647) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x865 = INT8_MIN;
	uint16_t x866 = 956U;
	uint64_t x867 = UINT64_MAX;
	static volatile int64_t x868 = INT64_MAX;
	int64_t t191 = -1737086LL;

    t191 = (((x865<=x866)==x867)-x868);

    if (t191 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x869 = -1;
	volatile uint8_t x870 = 3U;
	int16_t x871 = INT16_MAX;
	uint16_t x872 = 30178U;
	int32_t t192 = -1204113;

    t192 = (((x869<=x870)==x871)-x872);

    if (t192 != -30178) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x874 = INT16_MIN;
	volatile uint32_t x876 = 2796564U;
	uint32_t t193 = 32U;

    t193 = (((x873<=x874)==x875)-x876);

    if (t193 != 4292170732U) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x877 = 7484036U;
	static int16_t x878 = INT16_MIN;
	int8_t x879 = INT8_MIN;
	static int64_t x880 = 23707347LL;

    t194 = (((x877<=x878)==x879)-x880);

    if (t194 != -23707347LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x881 = INT16_MIN;
	volatile int32_t x882 = -727363270;
	int64_t x883 = INT64_MAX;
	volatile uint32_t x884 = 1U;
	volatile uint32_t t195 = UINT32_MAX;

    t195 = (((x881<=x882)==x883)-x884);

    if (t195 != UINT32_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x885 = 0;
	uint32_t x886 = 287511U;
	static uint64_t x887 = 3995243655640415LLU;
	int16_t x888 = INT16_MAX;
	volatile int32_t t196 = 22202;

    t196 = (((x885<=x886)==x887)-x888);

    if (t196 != -32767) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x889 = INT32_MIN;
	uint64_t x890 = 957451LLU;
	static uint8_t x891 = 29U;
	int8_t x892 = INT8_MIN;
	int32_t t197 = 9493545;

    t197 = (((x889<=x890)==x891)-x892);

    if (t197 != 128) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x895 = -1430;
	int8_t x896 = -1;
	volatile int32_t t198 = -1319;

    t198 = (((x893<=x894)==x895)-x896);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x898 = INT8_MIN;
	static int8_t x899 = 2;

    t199 = (((x897<=x898)==x899)-x900);

    if (t199 != 32768) { NG(); } else { ; }
	
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

