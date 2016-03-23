
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

int32_t t1 = 0;
volatile int8_t x9 = INT8_MIN;
int8_t x12 = INT8_MAX;
volatile int64_t t3 = 7597LL;
volatile int32_t x19 = -48407;
static volatile int32_t t6 = 61;
int64_t t9 = -2LL;
static uint16_t x42 = 6927U;
static uint64_t x45 = 159607842011LLU;
static volatile int8_t x46 = INT8_MIN;
int16_t x49 = -1;
uint16_t x54 = 8325U;
uint32_t t14 = 31047U;
int16_t x68 = INT16_MIN;
int32_t x73 = INT32_MIN;
static uint64_t x77 = 223646111LLU;
uint16_t x82 = UINT16_MAX;
static uint16_t x87 = 1803U;
static uint64_t x89 = 10547841152LLU;
uint8_t x92 = 62U;
int16_t x94 = INT16_MIN;
volatile int32_t t23 = 1;
uint16_t x101 = 69U;
int32_t t25 = 246;
uint8_t x113 = 4U;
int16_t x115 = -10;
int16_t x117 = INT16_MIN;
static volatile uint16_t x121 = UINT16_MAX;
int16_t x125 = 12084;
uint8_t x127 = UINT8_MAX;
int64_t x137 = INT64_MAX;
volatile int64_t x145 = INT64_MIN;
volatile uint8_t x148 = 1U;
volatile uint16_t x155 = 17U;
uint64_t x158 = 263869LLU;
int64_t x161 = -22452LL;
volatile int16_t x162 = INT16_MIN;
volatile int32_t t41 = -29279399;
volatile uint64_t x173 = 1290773799283576807LLU;
int8_t x174 = 1;
int32_t x175 = 1;
volatile int16_t x176 = -1;
volatile uint32_t t44 = 5U;
int8_t x181 = INT8_MIN;
uint8_t x183 = 3U;
uint16_t x184 = 5458U;
int32_t t46 = -47000;
volatile uint8_t x193 = 63U;
int8_t x194 = INT8_MIN;
int8_t x195 = -57;
static volatile int64_t t48 = -6905016445815LL;
uint16_t x197 = UINT16_MAX;
int8_t x208 = INT8_MAX;
volatile int8_t x212 = -1;
volatile int64_t x222 = -1LL;
int16_t x229 = 8;
uint8_t x232 = 114U;
static uint64_t x235 = 120419LLU;
int8_t x238 = INT8_MIN;
int64_t x239 = INT64_MIN;
int32_t x251 = INT32_MIN;
volatile int32_t t64 = -139349;
volatile int64_t t65 = 22653253529LL;
volatile int32_t t66 = 25397698;
volatile uint32_t x270 = UINT32_MAX;
int16_t x271 = 112;
int8_t x279 = INT8_MIN;
int64_t x282 = 63LL;
uint32_t x286 = UINT32_MAX;
static uint16_t x288 = UINT16_MAX;
int16_t x289 = -840;
volatile int64_t x291 = 14835989995776LL;
volatile int8_t x308 = INT8_MIN;
static volatile uint16_t x310 = 3072U;
int64_t x312 = 514260LL;
int16_t x313 = INT16_MIN;
int16_t x316 = INT16_MIN;
int32_t t78 = -1;
int8_t x328 = -1;
volatile uint16_t x331 = UINT16_MAX;
static int32_t t82 = 10340;
volatile int32_t t83 = 150274;
int32_t t84 = -1;
int64_t x341 = 9873656LL;
uint16_t x342 = 1335U;
volatile int32_t x343 = INT32_MAX;
static uint16_t x346 = 0U;
uint16_t x352 = UINT16_MAX;
int64_t x359 = INT64_MAX;
volatile int32_t t89 = 884;
int16_t x371 = INT16_MIN;
int32_t x383 = -1;
static int32_t x386 = 24396723;
int32_t x389 = INT32_MIN;
static int32_t x399 = 1010904;
static volatile uint32_t t100 = 3087U;
uint32_t x406 = 1U;
volatile int8_t x415 = 1;
int16_t x419 = INT16_MAX;
int32_t x423 = -1;
static int32_t x424 = INT32_MAX;
static volatile int32_t t105 = 118758606;
int32_t x427 = INT32_MIN;
uint8_t x432 = UINT8_MAX;
int32_t x435 = INT32_MAX;
volatile int32_t t108 = -7288266;
uint8_t x454 = UINT8_MAX;
uint16_t x461 = UINT16_MAX;
static int8_t x470 = INT8_MIN;
uint32_t x477 = 1092101643U;
int64_t x479 = -3511411092042LL;
int32_t t119 = 93128;
static int64_t x482 = INT64_MAX;
volatile int32_t x490 = -1;
int8_t x495 = INT8_MAX;
volatile int32_t t123 = -16603226;
volatile uint32_t x499 = 2594U;
static int32_t x501 = INT32_MAX;
volatile int32_t x503 = INT32_MIN;
uint8_t x504 = 33U;
volatile int16_t x508 = 465;
int32_t x509 = -1;
static int32_t x511 = INT32_MIN;
uint32_t x513 = UINT32_MAX;
uint8_t x516 = 86U;
int64_t x517 = -16407764LL;
static volatile int32_t t130 = -13780259;
int32_t x525 = -127;
uint8_t x526 = 5U;
volatile int8_t x528 = 1;
uint32_t x529 = 20U;
static uint16_t x531 = 568U;
int8_t x538 = INT8_MIN;
uint16_t x540 = UINT16_MAX;
int16_t x541 = INT16_MIN;
uint64_t x543 = UINT64_MAX;
int32_t t135 = -2848616;
volatile int8_t x546 = INT8_MIN;
int64_t x547 = INT64_MIN;
uint32_t x550 = 7203U;
static volatile uint16_t x551 = 11U;
int16_t x555 = 3;
static volatile uint64_t x556 = 436565LLU;
volatile int64_t t142 = 7451936LL;
int8_t x588 = -1;
uint32_t x590 = 1274U;
int64_t x594 = -1LL;
int64_t t149 = 51743LL;
static volatile int16_t x603 = INT16_MAX;
volatile int32_t t150 = -199364;
volatile int8_t x605 = -5;
int16_t x621 = -1;
static volatile int64_t x628 = 11LL;
volatile int64_t t156 = -17438432281129393LL;
volatile uint32_t x632 = 1060203630U;
int32_t t158 = -757;
int16_t x639 = INT16_MAX;
int32_t x653 = INT32_MAX;
static uint32_t x656 = 33576U;
static uint32_t t163 = 1U;
int64_t x660 = -1LL;
uint64_t x661 = UINT64_MAX;
volatile uint8_t x665 = 15U;
static volatile int64_t x673 = INT64_MIN;
uint16_t x678 = 2005U;
int32_t x682 = INT32_MIN;
static int16_t x684 = -1;
int8_t x690 = INT8_MAX;
volatile int32_t x691 = INT32_MIN;
volatile int64_t x699 = INT64_MAX;
uint8_t x708 = 21U;
volatile int32_t t177 = 55;
int8_t x713 = INT8_MIN;
int64_t t179 = 104545855015527LL;
int16_t x722 = INT16_MIN;
uint8_t x723 = UINT8_MAX;
int32_t x725 = -48289;
int16_t x734 = INT16_MIN;
uint32_t x737 = UINT32_MAX;
int16_t x738 = INT16_MIN;
int8_t x742 = -1;
static uint64_t x746 = UINT64_MAX;
static int32_t x748 = INT32_MAX;
int8_t x749 = -1;
int32_t x758 = -1;
static uint32_t x769 = UINT32_MAX;
int64_t x770 = INT64_MIN;
int16_t x776 = INT16_MAX;
volatile int32_t t193 = 3;
int8_t x777 = 1;
int64_t t194 = 57277715LL;
int32_t x792 = INT32_MIN;
static int64_t x799 = -6043244861948LL;
static volatile int32_t t199 = 63232552;


void f0(void) {
    	uint16_t x1 = 6U;
	static int32_t x2 = INT32_MIN;
	volatile int64_t x3 = -261901242977915LL;
	int64_t x4 = INT64_MIN;
	static volatile int64_t t0 = 448002270008645LL;

    t0 = ((x1<=(x2<=x3))&x4);

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 96936627U;
	static int64_t x6 = -1LL;
	int8_t x7 = -1;
	uint8_t x8 = 68U;

    t1 = ((x5<=(x6<=x7))&x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x10 = INT16_MIN;
	int8_t x11 = -7;
	volatile int32_t t2 = 1;

    t2 = ((x9<=(x10<=x11))&x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = UINT32_MAX;
	int16_t x14 = -63;
	int32_t x15 = -1;
	int64_t x16 = -1LL;

    t3 = ((x13<=(x14<=x15))&x16);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -1;
	volatile uint16_t x18 = 187U;
	uint32_t x20 = UINT32_MAX;
	uint32_t t4 = 2680U;

    t4 = ((x17<=(x18<=x19))&x20);

    if (t4 != 1U) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x21 = INT32_MAX;
	static int16_t x22 = -1;
	static int32_t x23 = INT32_MIN;
	uint16_t x24 = 2670U;
	static volatile int32_t t5 = -1;

    t5 = ((x21<=(x22<=x23))&x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint16_t x25 = 134U;
	static uint32_t x26 = 5092332U;
	static uint16_t x27 = 7U;
	static uint8_t x28 = 21U;

    t6 = ((x25<=(x26<=x27))&x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = INT16_MAX;
	int16_t x30 = INT16_MIN;
	uint16_t x31 = 5643U;
	static volatile int16_t x32 = -1;
	int32_t t7 = -7;

    t7 = ((x29<=(x30<=x31))&x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x33 = INT8_MAX;
	int32_t x34 = INT32_MIN;
	volatile uint16_t x35 = 2023U;
	volatile int16_t x36 = INT16_MIN;
	int32_t t8 = 11691453;

    t8 = ((x33<=(x34<=x35))&x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x37 = UINT32_MAX;
	volatile uint16_t x38 = 0U;
	uint16_t x39 = UINT16_MAX;
	static volatile int64_t x40 = 15559316514158807LL;

    t9 = ((x37<=(x38<=x39))&x40);

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint8_t x41 = UINT8_MAX;
	int32_t x43 = INT32_MIN;
	static int8_t x44 = -1;
	static int32_t t10 = 556;

    t10 = ((x41<=(x42<=x43))&x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x47 = -3;
	int64_t x48 = -1LL;
	static int64_t t11 = 867664584034416LL;

    t11 = ((x45<=(x46<=x47))&x48);

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x50 = UINT64_MAX;
	int8_t x51 = 12;
	int32_t x52 = -1;
	volatile int32_t t12 = 56793;

    t12 = ((x49<=(x50<=x51))&x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint8_t x53 = 2U;
	uint16_t x55 = 394U;
	int32_t x56 = 88;
	int32_t t13 = 0;

    t13 = ((x53<=(x54<=x55))&x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint64_t x57 = 285580576LLU;
	static uint64_t x58 = UINT64_MAX;
	uint32_t x59 = UINT32_MAX;
	uint32_t x60 = 188492477U;

    t14 = ((x57<=(x58<=x59))&x60);

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = INT64_MIN;
	uint64_t x62 = 23074467LLU;
	uint8_t x63 = 1U;
	uint16_t x64 = 13538U;
	volatile int32_t t15 = 90040687;

    t15 = ((x61<=(x62<=x63))&x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = INT8_MAX;
	int8_t x66 = INT8_MAX;
	int32_t x67 = 169432182;
	volatile int32_t t16 = -84010769;

    t16 = ((x65<=(x66<=x67))&x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = -1;
	int64_t x70 = INT64_MIN;
	int32_t x71 = -1;
	volatile uint16_t x72 = UINT16_MAX;
	int32_t t17 = 0;

    t17 = ((x69<=(x70<=x71))&x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint16_t x74 = 23U;
	uint32_t x75 = UINT32_MAX;
	int64_t x76 = INT64_MAX;
	int64_t t18 = 10LL;

    t18 = ((x73<=(x74<=x75))&x76);

    if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x78 = 154U;
	int64_t x79 = INT64_MAX;
	static uint8_t x80 = 1U;
	static int32_t t19 = 171415;

    t19 = ((x77<=(x78<=x79))&x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x81 = 3LLU;
	int8_t x83 = INT8_MIN;
	int16_t x84 = INT16_MIN;
	int32_t t20 = -55863;

    t20 = ((x81<=(x82<=x83))&x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x85 = 0U;
	uint8_t x86 = 0U;
	volatile int16_t x88 = -3;
	int32_t t21 = -85829346;

    t21 = ((x85<=(x86<=x87))&x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x90 = UINT8_MAX;
	int8_t x91 = INT8_MIN;
	int32_t t22 = 0;

    t22 = ((x89<=(x90<=x91))&x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = INT8_MIN;
	uint16_t x95 = UINT16_MAX;
	static uint8_t x96 = 46U;

    t23 = ((x93<=(x94<=x95))&x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = INT16_MIN;
	volatile int8_t x98 = INT8_MIN;
	volatile int64_t x99 = INT64_MAX;
	int32_t x100 = INT32_MAX;
	volatile int32_t t24 = 24678609;

    t24 = ((x97<=(x98<=x99))&x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint32_t x102 = UINT32_MAX;
	int32_t x103 = -1;
	int16_t x104 = INT16_MIN;

    t25 = ((x101<=(x102<=x103))&x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x105 = 0;
	int32_t x106 = -687471585;
	int64_t x107 = INT64_MAX;
	uint16_t x108 = 124U;
	static volatile int32_t t26 = 19;

    t26 = ((x105<=(x106<=x107))&x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = INT16_MAX;
	uint8_t x110 = 8U;
	int32_t x111 = INT32_MAX;
	int64_t x112 = INT64_MIN;
	int64_t t27 = 995698257908LL;

    t27 = ((x109<=(x110<=x111))&x112);

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x114 = INT8_MIN;
	int8_t x116 = 1;
	static int32_t t28 = 503948;

    t28 = ((x113<=(x114<=x115))&x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x118 = 666726LL;
	volatile uint8_t x119 = UINT8_MAX;
	uint64_t x120 = 120768543486455500LLU;
	uint64_t t29 = 185603LLU;

    t29 = ((x117<=(x118<=x119))&x120);

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x122 = 7044U;
	int8_t x123 = 0;
	int8_t x124 = INT8_MIN;
	int32_t t30 = -2;

    t30 = ((x121<=(x122<=x123))&x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x126 = INT16_MAX;
	static int8_t x128 = INT8_MIN;
	int32_t t31 = -32793247;

    t31 = ((x125<=(x126<=x127))&x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x129 = 0;
	int32_t x130 = INT32_MAX;
	int32_t x131 = -10;
	int32_t x132 = -1;
	static int32_t t32 = -5;

    t32 = ((x129<=(x130<=x131))&x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x133 = 410U;
	int64_t x134 = -1LL;
	uint8_t x135 = 14U;
	uint8_t x136 = 0U;
	int32_t t33 = 5983;

    t33 = ((x133<=(x134<=x135))&x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint16_t x138 = 2U;
	uint16_t x139 = UINT16_MAX;
	int16_t x140 = INT16_MIN;
	static volatile int32_t t34 = 1157569;

    t34 = ((x137<=(x138<=x139))&x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = INT32_MAX;
	int32_t x142 = INT32_MIN;
	int16_t x143 = INT16_MIN;
	uint16_t x144 = 1U;
	static volatile int32_t t35 = 1;

    t35 = ((x141<=(x142<=x143))&x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x146 = INT64_MAX;
	static int32_t x147 = INT32_MIN;
	volatile int32_t t36 = -912430324;

    t36 = ((x145<=(x146<=x147))&x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = INT64_MIN;
	static uint32_t x150 = UINT32_MAX;
	int8_t x151 = 1;
	int16_t x152 = INT16_MIN;
	static int32_t t37 = 14601;

    t37 = ((x149<=(x150<=x151))&x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = 0;
	int64_t x154 = -1025950LL;
	static int8_t x156 = 1;
	volatile int32_t t38 = 21;

    t38 = ((x153<=(x154<=x155))&x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = 20037;
	int16_t x159 = 63;
	static volatile uint16_t x160 = UINT16_MAX;
	volatile int32_t t39 = 1908;

    t39 = ((x157<=(x158<=x159))&x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x163 = 11883;
	uint64_t x164 = 28056855LLU;
	volatile uint64_t t40 = 7LLU;

    t40 = ((x161<=(x162<=x163))&x164);

    if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = -3;
	int32_t x166 = 57549;
	int32_t x167 = INT32_MIN;
	uint16_t x168 = 6U;

    t41 = ((x165<=(x166<=x167))&x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x169 = 5U;
	uint32_t x170 = 1456371U;
	int64_t x171 = INT64_MIN;
	int64_t x172 = INT64_MIN;
	static volatile int64_t t42 = 166180LL;

    t42 = ((x169<=(x170<=x171))&x172);

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t t43 = -21062;

    t43 = ((x173<=(x174<=x175))&x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int8_t x177 = INT8_MIN;
	int16_t x178 = -342;
	volatile uint8_t x179 = UINT8_MAX;
	uint32_t x180 = 12097U;

    t44 = ((x177<=(x178<=x179))&x180);

    if (t44 != 1U) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x182 = -1LL;
	volatile int32_t t45 = -341;

    t45 = ((x181<=(x182<=x183))&x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x185 = -20500655181633965LL;
	int8_t x186 = INT8_MIN;
	uint8_t x187 = 7U;
	static uint16_t x188 = UINT16_MAX;

    t46 = ((x185<=(x186<=x187))&x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x189 = 2704LLU;
	static int8_t x190 = -62;
	static int16_t x191 = -1;
	uint64_t x192 = 285156459044609761LLU;
	static volatile uint64_t t47 = 1055011151851144LLU;

    t47 = ((x189<=(x190<=x191))&x192);

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x196 = INT64_MIN;

    t48 = ((x193<=(x194<=x195))&x196);

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint16_t x198 = 4563U;
	uint8_t x199 = UINT8_MAX;
	uint64_t x200 = 360991321646578LLU;
	volatile uint64_t t49 = 8247288665LLU;

    t49 = ((x197<=(x198<=x199))&x200);

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint8_t x201 = UINT8_MAX;
	volatile uint16_t x202 = 215U;
	int64_t x203 = INT64_MIN;
	int8_t x204 = INT8_MIN;
	int32_t t50 = -294082243;

    t50 = ((x201<=(x202<=x203))&x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint32_t x205 = 15015U;
	volatile int64_t x206 = -1LL;
	int32_t x207 = 566215;
	int32_t t51 = 445568564;

    t51 = ((x205<=(x206<=x207))&x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x209 = 265072886LLU;
	uint16_t x210 = UINT16_MAX;
	int8_t x211 = INT8_MAX;
	int32_t t52 = -7771441;

    t52 = ((x209<=(x210<=x211))&x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint64_t x213 = UINT64_MAX;
	int32_t x214 = 0;
	uint16_t x215 = 1537U;
	int16_t x216 = INT16_MIN;
	int32_t t53 = 1229351;

    t53 = ((x213<=(x214<=x215))&x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = INT16_MIN;
	static uint64_t x218 = 0LLU;
	int32_t x219 = 30;
	int32_t x220 = INT32_MIN;
	volatile int32_t t54 = -455253839;

    t54 = ((x217<=(x218<=x219))&x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x221 = INT16_MAX;
	int16_t x223 = INT16_MIN;
	static volatile int64_t x224 = INT64_MAX;
	static volatile int64_t t55 = 0LL;

    t55 = ((x221<=(x222<=x223))&x224);

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = INT64_MIN;
	int8_t x226 = INT8_MAX;
	volatile int8_t x227 = -2;
	volatile int16_t x228 = -2;
	volatile int32_t t56 = 224529839;

    t56 = ((x225<=(x226<=x227))&x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x230 = -1;
	uint16_t x231 = UINT16_MAX;
	volatile int32_t t57 = 60660;

    t57 = ((x229<=(x230<=x231))&x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x233 = INT8_MAX;
	volatile int8_t x234 = INT8_MAX;
	int64_t x236 = 2124819738481698LL;
	static volatile int64_t t58 = 295206LL;

    t58 = ((x233<=(x234<=x235))&x236);

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = INT16_MAX;
	int8_t x240 = 0;
	int32_t t59 = -12384;

    t59 = ((x237<=(x238<=x239))&x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x241 = -444311200LL;
	uint32_t x242 = UINT32_MAX;
	int16_t x243 = INT16_MIN;
	int16_t x244 = INT16_MIN;
	volatile int32_t t60 = 1;

    t60 = ((x241<=(x242<=x243))&x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x245 = INT32_MIN;
	int16_t x246 = -1;
	uint32_t x247 = 4U;
	volatile int32_t x248 = -211665;
	volatile int32_t t61 = 527;

    t61 = ((x245<=(x246<=x247))&x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x249 = -1;
	int16_t x250 = INT16_MAX;
	int8_t x252 = INT8_MIN;
	static volatile int32_t t62 = -274199556;

    t62 = ((x249<=(x250<=x251))&x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x253 = UINT16_MAX;
	static int16_t x254 = INT16_MAX;
	int64_t x255 = INT64_MIN;
	int64_t x256 = -55620888LL;
	volatile int64_t t63 = -908985298711850004LL;

    t63 = ((x253<=(x254<=x255))&x256);

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x257 = 1LL;
	static uint32_t x258 = 18095290U;
	static uint16_t x259 = UINT16_MAX;
	volatile int16_t x260 = INT16_MIN;

    t64 = ((x257<=(x258<=x259))&x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x261 = UINT16_MAX;
	volatile int64_t x262 = INT64_MIN;
	int32_t x263 = INT32_MIN;
	int64_t x264 = -1LL;

    t65 = ((x261<=(x262<=x263))&x264);

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = -3057563LL;
	uint8_t x266 = UINT8_MAX;
	int8_t x267 = 18;
	volatile int32_t x268 = INT32_MIN;

    t66 = ((x265<=(x266<=x267))&x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = INT64_MIN;
	uint16_t x272 = 437U;
	volatile int32_t t67 = -149;

    t67 = ((x269<=(x270<=x271))&x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x273 = -2929005401624883065LL;
	volatile int16_t x274 = INT16_MIN;
	int8_t x275 = -1;
	static uint16_t x276 = 9425U;
	static volatile int32_t t68 = 1550;

    t68 = ((x273<=(x274<=x275))&x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = INT16_MIN;
	int8_t x278 = INT8_MAX;
	int32_t x280 = INT32_MAX;
	int32_t t69 = -6;

    t69 = ((x277<=(x278<=x279))&x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = 3;
	int64_t x283 = INT64_MIN;
	int16_t x284 = INT16_MIN;
	static volatile int32_t t70 = 87;

    t70 = ((x281<=(x282<=x283))&x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = -38;
	static volatile uint8_t x287 = UINT8_MAX;
	int32_t t71 = 135853;

    t71 = ((x285<=(x286<=x287))&x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x290 = INT64_MAX;
	uint16_t x292 = 74U;
	int32_t t72 = -11393;

    t72 = ((x289<=(x290<=x291))&x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = INT64_MIN;
	static int32_t x294 = INT32_MIN;
	int8_t x295 = -31;
	int8_t x296 = -1;
	int32_t t73 = 2697534;

    t73 = ((x293<=(x294<=x295))&x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint64_t x297 = 20251568994178LLU;
	uint8_t x298 = 8U;
	int64_t x299 = INT64_MIN;
	volatile int64_t x300 = 26LL;
	int64_t t74 = 1LL;

    t74 = ((x297<=(x298<=x299))&x300);

    if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = INT64_MAX;
	uint16_t x302 = 6368U;
	uint16_t x303 = UINT16_MAX;
	int64_t x304 = -13LL;
	int64_t t75 = -5301410LL;

    t75 = ((x301<=(x302<=x303))&x304);

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x305 = UINT32_MAX;
	static int16_t x306 = INT16_MIN;
	static int64_t x307 = -1LL;
	int32_t t76 = -26874183;

    t76 = ((x305<=(x306<=x307))&x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = -9990;
	volatile int64_t x311 = -2139LL;
	volatile int64_t t77 = -16086697653930268LL;

    t77 = ((x309<=(x310<=x311))&x312);

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint32_t x314 = UINT32_MAX;
	int16_t x315 = INT16_MIN;

    t78 = ((x313<=(x314<=x315))&x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x317 = -52111;
	int8_t x318 = -6;
	int64_t x319 = INT64_MAX;
	int32_t x320 = -1645;
	volatile int32_t t79 = 71;

    t79 = ((x317<=(x318<=x319))&x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x321 = 1951U;
	volatile int32_t x322 = -1;
	static uint32_t x323 = 736780U;
	uint32_t x324 = UINT32_MAX;
	uint32_t t80 = 464U;

    t80 = ((x321<=(x322<=x323))&x324);

    if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x325 = 2532U;
	volatile int32_t x326 = INT32_MAX;
	uint64_t x327 = 1335514LLU;
	int32_t t81 = -520562967;

    t81 = ((x325<=(x326<=x327))&x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x329 = INT64_MIN;
	int8_t x330 = INT8_MIN;
	uint16_t x332 = UINT16_MAX;

    t82 = ((x329<=(x330<=x331))&x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = 43771252;
	static volatile uint64_t x334 = UINT64_MAX;
	int16_t x335 = -127;
	int32_t x336 = -85;

    t83 = ((x333<=(x334<=x335))&x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = INT32_MAX;
	static int32_t x338 = -1;
	uint8_t x339 = 6U;
	int32_t x340 = 2108430;

    t84 = ((x337<=(x338<=x339))&x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x344 = INT16_MIN;
	int32_t t85 = 782946164;

    t85 = ((x341<=(x342<=x343))&x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x345 = INT8_MIN;
	int64_t x347 = -1LL;
	int32_t x348 = INT32_MAX;
	int32_t t86 = 3864;

    t86 = ((x345<=(x346<=x347))&x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x349 = 18298655921LL;
	int32_t x350 = -1;
	int32_t x351 = -445969714;
	int32_t t87 = 1783221;

    t87 = ((x349<=(x350<=x351))&x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint16_t x353 = 2387U;
	static volatile int16_t x354 = INT16_MIN;
	uint32_t x355 = UINT32_MAX;
	uint64_t x356 = 29055425451892LLU;
	volatile uint64_t t88 = 694893524177LLU;

    t88 = ((x353<=(x354<=x355))&x356);

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x357 = INT64_MIN;
	uint32_t x358 = 1950074379U;
	int32_t x360 = 1043;

    t89 = ((x357<=(x358<=x359))&x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x361 = 12U;
	int32_t x362 = INT32_MAX;
	uint64_t x363 = 1LLU;
	int8_t x364 = INT8_MIN;
	volatile int32_t t90 = -125;

    t90 = ((x361<=(x362<=x363))&x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x365 = INT8_MIN;
	volatile uint8_t x366 = 1U;
	uint32_t x367 = 71U;
	static int8_t x368 = INT8_MIN;
	static volatile int32_t t91 = -780873;

    t91 = ((x365<=(x366<=x367))&x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x369 = 25;
	volatile uint16_t x370 = 816U;
	volatile int16_t x372 = -1;
	static volatile int32_t t92 = 1063835873;

    t92 = ((x369<=(x370<=x371))&x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x373 = INT8_MAX;
	uint32_t x374 = 4U;
	int16_t x375 = INT16_MIN;
	int8_t x376 = -1;
	volatile int32_t t93 = 28928360;

    t93 = ((x373<=(x374<=x375))&x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = INT8_MAX;
	static uint8_t x378 = 1U;
	uint8_t x379 = 2U;
	int8_t x380 = -5;
	volatile int32_t t94 = 27138370;

    t94 = ((x377<=(x378<=x379))&x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x381 = INT16_MIN;
	int16_t x382 = INT16_MIN;
	int64_t x384 = INT64_MIN;
	int64_t t95 = -10434033577768782LL;

    t95 = ((x381<=(x382<=x383))&x384);

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x385 = INT64_MIN;
	uint8_t x387 = 7U;
	int8_t x388 = INT8_MAX;
	int32_t t96 = 0;

    t96 = ((x385<=(x386<=x387))&x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x390 = 82889LL;
	int16_t x391 = -9;
	int32_t x392 = INT32_MIN;
	int32_t t97 = -56974;

    t97 = ((x389<=(x390<=x391))&x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x393 = -22271177;
	volatile int8_t x394 = 1;
	uint64_t x395 = UINT64_MAX;
	uint8_t x396 = 84U;
	static volatile int32_t t98 = -230;

    t98 = ((x393<=(x394<=x395))&x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x397 = 5358LLU;
	static uint64_t x398 = 57LLU;
	int16_t x400 = -1;
	static int32_t t99 = 1;

    t99 = ((x397<=(x398<=x399))&x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x401 = INT64_MAX;
	static volatile int32_t x402 = 1;
	int32_t x403 = 13956906;
	uint32_t x404 = 1951638209U;

    t100 = ((x401<=(x402<=x403))&x404);

    if (t100 != 0U) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int8_t x405 = -1;
	volatile int32_t x407 = -24779;
	int32_t x408 = INT32_MIN;
	int32_t t101 = -86;

    t101 = ((x405<=(x406<=x407))&x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x409 = INT8_MIN;
	int8_t x410 = INT8_MIN;
	int16_t x411 = INT16_MIN;
	static volatile int64_t x412 = INT64_MIN;
	static int64_t t102 = -456269787LL;

    t102 = ((x409<=(x410<=x411))&x412);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = -164;
	volatile int16_t x414 = -177;
	int64_t x416 = INT64_MIN;
	static volatile int64_t t103 = 53650841LL;

    t103 = ((x413<=(x414<=x415))&x416);

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int16_t x417 = 3731;
	static int64_t x418 = INT64_MIN;
	static volatile uint8_t x420 = UINT8_MAX;
	static volatile int32_t t104 = 357;

    t104 = ((x417<=(x418<=x419))&x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x421 = INT8_MIN;
	int8_t x422 = -1;

    t105 = ((x421<=(x422<=x423))&x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = INT16_MIN;
	static int64_t x426 = INT64_MIN;
	int16_t x428 = -1;
	static int32_t t106 = -935193189;

    t106 = ((x425<=(x426<=x427))&x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x429 = -116731;
	uint16_t x430 = UINT16_MAX;
	uint32_t x431 = 129339U;
	static int32_t t107 = -3913888;

    t107 = ((x429<=(x430<=x431))&x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x433 = UINT8_MAX;
	int64_t x434 = -4211723458237LL;
	static int32_t x436 = INT32_MIN;

    t108 = ((x433<=(x434<=x435))&x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x437 = INT8_MIN;
	static volatile int64_t x438 = -623580278101941193LL;
	static int32_t x439 = INT32_MIN;
	uint32_t x440 = 867697472U;
	volatile uint32_t t109 = 241U;

    t109 = ((x437<=(x438<=x439))&x440);

    if (t109 != 0U) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x441 = 4U;
	uint64_t x442 = 6505LLU;
	volatile int16_t x443 = INT16_MAX;
	uint32_t x444 = 4104328U;
	volatile uint32_t t110 = 359U;

    t110 = ((x441<=(x442<=x443))&x444);

    if (t110 != 0U) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = -1655;
	int64_t x446 = -14059128543558LL;
	uint8_t x447 = 3U;
	static int32_t x448 = INT32_MIN;
	volatile int32_t t111 = -703229673;

    t111 = ((x445<=(x446<=x447))&x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x449 = 44U;
	uint64_t x450 = 405LLU;
	static uint64_t x451 = 454620379LLU;
	volatile int16_t x452 = INT16_MIN;
	volatile int32_t t112 = 6;

    t112 = ((x449<=(x450<=x451))&x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x453 = -476;
	static int64_t x455 = -79114641LL;
	int32_t x456 = INT32_MIN;
	int32_t t113 = -2;

    t113 = ((x453<=(x454<=x455))&x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x457 = UINT32_MAX;
	int32_t x458 = 799;
	static int32_t x459 = -1;
	volatile int16_t x460 = -101;
	volatile int32_t t114 = -6476;

    t114 = ((x457<=(x458<=x459))&x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x462 = INT8_MIN;
	volatile uint8_t x463 = UINT8_MAX;
	volatile int32_t x464 = -10355927;
	volatile int32_t t115 = 3245;

    t115 = ((x461<=(x462<=x463))&x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = -1LL;
	uint16_t x466 = 11U;
	int32_t x467 = -1;
	uint64_t x468 = 100382461868LLU;
	volatile uint64_t t116 = 489461519553376LLU;

    t116 = ((x465<=(x466<=x467))&x468);

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x469 = INT64_MIN;
	int64_t x471 = INT64_MIN;
	int32_t x472 = INT32_MIN;
	int32_t t117 = -13678;

    t117 = ((x469<=(x470<=x471))&x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x473 = 1076511039357251LLU;
	int16_t x474 = INT16_MAX;
	uint32_t x475 = UINT32_MAX;
	volatile int8_t x476 = INT8_MIN;
	int32_t t118 = 3;

    t118 = ((x473<=(x474<=x475))&x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x478 = UINT16_MAX;
	int32_t x480 = 806785417;

    t119 = ((x477<=(x478<=x479))&x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint32_t x481 = UINT32_MAX;
	uint16_t x483 = 4921U;
	static volatile int64_t x484 = INT64_MIN;
	static volatile int64_t t120 = -134900378764LL;

    t120 = ((x481<=(x482<=x483))&x484);

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x485 = 11U;
	uint16_t x486 = 10654U;
	int8_t x487 = -30;
	volatile int64_t x488 = INT64_MIN;
	int64_t t121 = 1500LL;

    t121 = ((x485<=(x486<=x487))&x488);

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x489 = -1;
	volatile uint16_t x491 = 416U;
	volatile int8_t x492 = -1;
	static volatile int32_t t122 = 1938799;

    t122 = ((x489<=(x490<=x491))&x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile uint16_t x493 = 1U;
	uint8_t x494 = 7U;
	uint8_t x496 = 12U;

    t123 = ((x493<=(x494<=x495))&x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x497 = 45089U;
	volatile int32_t x498 = INT32_MIN;
	static int16_t x500 = -1;
	volatile int32_t t124 = -9436;

    t124 = ((x497<=(x498<=x499))&x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x502 = -9;
	static volatile int32_t t125 = 51;

    t125 = ((x501<=(x502<=x503))&x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x505 = INT64_MIN;
	int32_t x506 = -1;
	static int16_t x507 = INT16_MAX;
	volatile int32_t t126 = -412305;

    t126 = ((x505<=(x506<=x507))&x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x510 = 1U;
	int32_t x512 = INT32_MAX;
	volatile int32_t t127 = -30;

    t127 = ((x509<=(x510<=x511))&x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x514 = -1;
	int16_t x515 = -425;
	static int32_t t128 = 3497816;

    t128 = ((x513<=(x514<=x515))&x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x518 = INT32_MAX;
	uint8_t x519 = UINT8_MAX;
	volatile int16_t x520 = 1;
	int32_t t129 = 5955961;

    t129 = ((x517<=(x518<=x519))&x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile uint32_t x521 = 6321297U;
	int32_t x522 = INT32_MIN;
	uint16_t x523 = 29U;
	volatile int32_t x524 = -1;

    t130 = ((x521<=(x522<=x523))&x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x527 = 997U;
	volatile int32_t t131 = -122;

    t131 = ((x525<=(x526<=x527))&x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x530 = UINT16_MAX;
	uint32_t x532 = 1U;
	static volatile uint32_t t132 = 49118804U;

    t132 = ((x529<=(x530<=x531))&x532);

    if (t132 != 0U) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x533 = 3U;
	volatile int32_t x534 = INT32_MIN;
	static uint8_t x535 = UINT8_MAX;
	static uint16_t x536 = UINT16_MAX;
	volatile int32_t t133 = 2848353;

    t133 = ((x533<=(x534<=x535))&x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x537 = INT64_MIN;
	static uint8_t x539 = 0U;
	volatile int32_t t134 = -492420;

    t134 = ((x537<=(x538<=x539))&x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x542 = 3102U;
	int32_t x544 = INT32_MIN;

    t135 = ((x541<=(x542<=x543))&x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = INT32_MAX;
	static int8_t x548 = INT8_MAX;
	int32_t t136 = -75;

    t136 = ((x545<=(x546<=x547))&x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = INT8_MIN;
	static volatile int64_t x552 = -2707090484376543021LL;
	int64_t t137 = 33382286399754LL;

    t137 = ((x549<=(x550<=x551))&x552);

    if (t137 != 1LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x553 = INT32_MAX;
	volatile int16_t x554 = 78;
	volatile uint64_t t138 = 88377038239LLU;

    t138 = ((x553<=(x554<=x555))&x556);

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x557 = INT16_MAX;
	static volatile int16_t x558 = 7;
	int16_t x559 = INT16_MIN;
	static uint32_t x560 = UINT32_MAX;
	uint32_t t139 = 454646U;

    t139 = ((x557<=(x558<=x559))&x560);

    if (t139 != 0U) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x561 = 1;
	int8_t x562 = -2;
	int16_t x563 = INT16_MAX;
	uint8_t x564 = UINT8_MAX;
	static int32_t t140 = -1366502;

    t140 = ((x561<=(x562<=x563))&x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = 298;
	int64_t x566 = INT64_MIN;
	int64_t x567 = INT64_MIN;
	int16_t x568 = INT16_MIN;
	static int32_t t141 = 39205;

    t141 = ((x565<=(x566<=x567))&x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x569 = UINT16_MAX;
	int32_t x570 = -1;
	int32_t x571 = INT32_MIN;
	int64_t x572 = INT64_MIN;

    t142 = ((x569<=(x570<=x571))&x572);

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = 151;
	int8_t x574 = INT8_MIN;
	uint16_t x575 = UINT16_MAX;
	volatile int32_t x576 = -1;
	int32_t t143 = 42;

    t143 = ((x573<=(x574<=x575))&x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x577 = -1;
	uint8_t x578 = 26U;
	int32_t x579 = -1;
	int64_t x580 = -20249598369496LL;
	volatile int64_t t144 = 8586891088LL;

    t144 = ((x577<=(x578<=x579))&x580);

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = INT32_MAX;
	volatile int16_t x582 = INT16_MIN;
	static int32_t x583 = -1;
	int8_t x584 = -1;
	int32_t t145 = -289752;

    t145 = ((x581<=(x582<=x583))&x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int16_t x585 = -1;
	int32_t x586 = -1;
	int16_t x587 = INT16_MIN;
	int32_t t146 = 377099077;

    t146 = ((x585<=(x586<=x587))&x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x589 = 72633290058090392LLU;
	static int8_t x591 = INT8_MIN;
	int64_t x592 = -326534599263LL;
	volatile int64_t t147 = 3178LL;

    t147 = ((x589<=(x590<=x591))&x592);

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x593 = 15295;
	int8_t x595 = INT8_MIN;
	int32_t x596 = INT32_MIN;
	volatile int32_t t148 = 1;

    t148 = ((x593<=(x594<=x595))&x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x597 = INT32_MAX;
	volatile int16_t x598 = INT16_MIN;
	volatile int8_t x599 = INT8_MAX;
	int64_t x600 = INT64_MIN;

    t149 = ((x597<=(x598<=x599))&x600);

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x601 = INT8_MIN;
	static volatile int32_t x602 = INT32_MIN;
	int16_t x604 = INT16_MIN;

    t150 = ((x601<=(x602<=x603))&x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint16_t x606 = UINT16_MAX;
	int32_t x607 = -1;
	volatile int32_t x608 = INT32_MAX;
	volatile int32_t t151 = 922740;

    t151 = ((x605<=(x606<=x607))&x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x609 = INT64_MIN;
	int16_t x610 = -652;
	int8_t x611 = INT8_MIN;
	uint16_t x612 = UINT16_MAX;
	volatile int32_t t152 = -1;

    t152 = ((x609<=(x610<=x611))&x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x613 = INT32_MAX;
	volatile uint64_t x614 = 4301477363221323LLU;
	volatile int8_t x615 = INT8_MIN;
	int8_t x616 = -1;
	volatile int32_t t153 = 3;

    t153 = ((x613<=(x614<=x615))&x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x617 = INT8_MIN;
	static int32_t x618 = INT32_MIN;
	int16_t x619 = 7;
	static volatile int8_t x620 = 45;
	volatile int32_t t154 = -2907;

    t154 = ((x617<=(x618<=x619))&x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x622 = INT64_MIN;
	volatile int16_t x623 = -738;
	uint64_t x624 = UINT64_MAX;
	uint64_t t155 = 499500708419LLU;

    t155 = ((x621<=(x622<=x623))&x624);

    if (t155 != 1LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x625 = INT16_MIN;
	volatile int64_t x626 = -16210553370LL;
	int64_t x627 = INT64_MAX;

    t156 = ((x625<=(x626<=x627))&x628);

    if (t156 != 1LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x629 = 1U;
	static int16_t x630 = INT16_MIN;
	uint32_t x631 = 95265376U;
	volatile uint32_t t157 = 7805437U;

    t157 = ((x629<=(x630<=x631))&x632);

    if (t157 != 0U) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x633 = 4319U;
	volatile int16_t x634 = -1121;
	static int16_t x635 = INT16_MIN;
	volatile uint8_t x636 = UINT8_MAX;

    t158 = ((x633<=(x634<=x635))&x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x637 = INT32_MAX;
	int32_t x638 = INT32_MAX;
	static volatile uint16_t x640 = UINT16_MAX;
	static volatile int32_t t159 = 4118641;

    t159 = ((x637<=(x638<=x639))&x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint32_t x641 = UINT32_MAX;
	uint32_t x642 = 12688U;
	static int64_t x643 = INT64_MIN;
	int64_t x644 = INT64_MAX;
	int64_t t160 = 288016445723LL;

    t160 = ((x641<=(x642<=x643))&x644);

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x645 = -1;
	int16_t x646 = INT16_MIN;
	int64_t x647 = -1LL;
	int8_t x648 = INT8_MIN;
	static volatile int32_t t161 = -1138176;

    t161 = ((x645<=(x646<=x647))&x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = 0;
	int32_t x650 = -16;
	int32_t x651 = INT32_MAX;
	volatile int64_t x652 = -6066761426LL;
	int64_t t162 = -10285461910LL;

    t162 = ((x649<=(x650<=x651))&x652);

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint64_t x654 = 3650LLU;
	int32_t x655 = -1;

    t163 = ((x653<=(x654<=x655))&x656);

    if (t163 != 0U) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = INT64_MAX;
	int32_t x658 = -31;
	static uint8_t x659 = 7U;
	int64_t t164 = 16293LL;

    t164 = ((x657<=(x658<=x659))&x660);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x662 = UINT64_MAX;
	int32_t x663 = 73178;
	uint16_t x664 = 4037U;
	int32_t t165 = -1;

    t165 = ((x661<=(x662<=x663))&x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x666 = INT64_MIN;
	int32_t x667 = INT32_MAX;
	int32_t x668 = -1;
	static volatile int32_t t166 = -12;

    t166 = ((x665<=(x666<=x667))&x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x669 = UINT32_MAX;
	int16_t x670 = INT16_MIN;
	uint32_t x671 = 313006097U;
	static uint32_t x672 = 1773114256U;
	volatile uint32_t t167 = 205505269U;

    t167 = ((x669<=(x670<=x671))&x672);

    if (t167 != 0U) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x674 = INT8_MAX;
	uint8_t x675 = UINT8_MAX;
	uint8_t x676 = UINT8_MAX;
	volatile int32_t t168 = 21;

    t168 = ((x673<=(x674<=x675))&x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x677 = -2;
	uint32_t x679 = 917U;
	uint8_t x680 = 57U;
	int32_t t169 = 9;

    t169 = ((x677<=(x678<=x679))&x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x681 = INT16_MAX;
	int8_t x683 = 24;
	volatile int32_t t170 = -3;

    t170 = ((x681<=(x682<=x683))&x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x685 = -252;
	volatile int64_t x686 = INT64_MIN;
	static uint32_t x687 = UINT32_MAX;
	int32_t x688 = -17136;
	volatile int32_t t171 = -319867652;

    t171 = ((x685<=(x686<=x687))&x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x689 = -1;
	uint32_t x692 = 54180U;
	uint32_t t172 = 1479226629U;

    t172 = ((x689<=(x690<=x691))&x692);

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x693 = INT32_MIN;
	volatile int8_t x694 = -1;
	uint8_t x695 = 19U;
	int16_t x696 = 944;
	int32_t t173 = -693645649;

    t173 = ((x693<=(x694<=x695))&x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x697 = 20312173LLU;
	int16_t x698 = INT16_MIN;
	int32_t x700 = -1;
	int32_t t174 = -54142712;

    t174 = ((x697<=(x698<=x699))&x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int64_t x701 = -1LL;
	int32_t x702 = 132;
	uint32_t x703 = UINT32_MAX;
	static volatile uint16_t x704 = UINT16_MAX;
	volatile int32_t t175 = 2283450;

    t175 = ((x701<=(x702<=x703))&x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int8_t x705 = INT8_MIN;
	int16_t x706 = INT16_MAX;
	int8_t x707 = INT8_MAX;
	volatile int32_t t176 = 3234435;

    t176 = ((x705<=(x706<=x707))&x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = 12;
	int8_t x710 = INT8_MIN;
	int8_t x711 = INT8_MIN;
	int32_t x712 = INT32_MIN;

    t177 = ((x709<=(x710<=x711))&x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x714 = 7U;
	uint16_t x715 = UINT16_MAX;
	static uint8_t x716 = 1U;
	volatile int32_t t178 = -1017794;

    t178 = ((x713<=(x714<=x715))&x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x717 = INT8_MIN;
	int32_t x718 = -1;
	uint32_t x719 = UINT32_MAX;
	int64_t x720 = -1LL;

    t179 = ((x717<=(x718<=x719))&x720);

    if (t179 != 1LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x721 = -1715;
	int8_t x724 = INT8_MIN;
	volatile int32_t t180 = 16887885;

    t180 = ((x721<=(x722<=x723))&x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x726 = INT8_MIN;
	int64_t x727 = -1LL;
	uint64_t x728 = UINT64_MAX;
	uint64_t t181 = 35720LLU;

    t181 = ((x725<=(x726<=x727))&x728);

    if (t181 != 1LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x729 = -1;
	volatile int16_t x730 = INT16_MIN;
	int8_t x731 = -6;
	uint64_t x732 = 1832838732LLU;
	static volatile uint64_t t182 = 1575790937298LLU;

    t182 = ((x729<=(x730<=x731))&x732);

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = 133778;
	static uint64_t x735 = 380416253LLU;
	volatile uint16_t x736 = UINT16_MAX;
	int32_t t183 = 728848494;

    t183 = ((x733<=(x734<=x735))&x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x739 = -1LL;
	int32_t x740 = 1045;
	volatile int32_t t184 = 2294;

    t184 = ((x737<=(x738<=x739))&x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x741 = -7671932367LL;
	uint32_t x743 = 13299400U;
	int8_t x744 = INT8_MIN;
	volatile int32_t t185 = 1;

    t185 = ((x741<=(x742<=x743))&x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x745 = -1LL;
	int8_t x747 = INT8_MIN;
	static volatile int32_t t186 = -310792;

    t186 = ((x745<=(x746<=x747))&x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x750 = INT8_MAX;
	int16_t x751 = INT16_MIN;
	uint8_t x752 = 17U;
	static int32_t t187 = -37014683;

    t187 = ((x749<=(x750<=x751))&x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = INT8_MAX;
	static volatile uint16_t x754 = 191U;
	volatile uint32_t x755 = UINT32_MAX;
	int8_t x756 = INT8_MIN;
	volatile int32_t t188 = -61;

    t188 = ((x753<=(x754<=x755))&x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x757 = 224006U;
	static int8_t x759 = 1;
	int64_t x760 = -1LL;
	static int64_t t189 = 793LL;

    t189 = ((x757<=(x758<=x759))&x760);

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x761 = 234037260749568106LL;
	static volatile uint16_t x762 = UINT16_MAX;
	int8_t x763 = -18;
	int64_t x764 = 43144482254561441LL;
	volatile int64_t t190 = -138167553555421LL;

    t190 = ((x761<=(x762<=x763))&x764);

    if (t190 != 0LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = 1;
	static int64_t x766 = -1LL;
	volatile int16_t x767 = 8957;
	int32_t x768 = INT32_MIN;
	int32_t t191 = 2166184;

    t191 = ((x765<=(x766<=x767))&x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x771 = 11692U;
	static int8_t x772 = INT8_MIN;
	int32_t t192 = -342992555;

    t192 = ((x769<=(x770<=x771))&x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x773 = 14LL;
	uint8_t x774 = UINT8_MAX;
	uint32_t x775 = 2044U;

    t193 = ((x773<=(x774<=x775))&x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint8_t x778 = 6U;
	static int8_t x779 = INT8_MIN;
	volatile int64_t x780 = 196323969LL;

    t194 = ((x777<=(x778<=x779))&x780);

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = INT16_MIN;
	int8_t x782 = INT8_MIN;
	int8_t x783 = 0;
	static volatile uint8_t x784 = 14U;
	volatile int32_t t195 = -3;

    t195 = ((x781<=(x782<=x783))&x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int32_t x785 = INT32_MIN;
	volatile int8_t x786 = INT8_MIN;
	uint16_t x787 = 22U;
	int8_t x788 = -1;
	volatile int32_t t196 = -373337;

    t196 = ((x785<=(x786<=x787))&x788);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x789 = -1;
	volatile int64_t x790 = INT64_MIN;
	static int8_t x791 = -24;
	int32_t t197 = 982254065;

    t197 = ((x789<=(x790<=x791))&x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x793 = 420811U;
	int32_t x794 = -1;
	static uint8_t x795 = UINT8_MAX;
	volatile uint8_t x796 = 2U;
	volatile int32_t t198 = 8;

    t198 = ((x793<=(x794<=x795))&x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x797 = 1;
	uint32_t x798 = 49U;
	static volatile int16_t x800 = INT16_MIN;

    t199 = ((x797<=(x798<=x799))&x800);

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

