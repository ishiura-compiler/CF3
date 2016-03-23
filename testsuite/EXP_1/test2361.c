
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

static int64_t x4 = INT64_MIN;
int16_t x7 = INT16_MAX;
uint16_t x15 = 53U;
int64_t x21 = INT64_MIN;
static uint8_t x26 = 3U;
volatile int32_t x27 = INT32_MAX;
volatile int32_t t5 = 1;
int8_t x30 = 3;
uint16_t x32 = 92U;
volatile int32_t t6 = 100550;
volatile int64_t x33 = INT64_MIN;
uint64_t x42 = 504LLU;
uint32_t x47 = UINT32_MAX;
volatile uint64_t x59 = 84874096902933LLU;
int32_t t13 = 14595;
int64_t x65 = INT64_MIN;
uint8_t x71 = UINT8_MAX;
volatile int16_t x72 = 74;
static int32_t t17 = 1;
uint32_t x77 = 396933583U;
uint64_t x91 = UINT64_MAX;
volatile int32_t t20 = 868903;
int8_t x93 = -1;
volatile uint8_t x95 = 0U;
int64_t x99 = INT64_MIN;
volatile int32_t t22 = 3486;
int32_t x102 = -1;
uint16_t x115 = 14634U;
static uint64_t x117 = UINT64_MAX;
int64_t x118 = INT64_MAX;
uint64_t x125 = 1555904756551659525LLU;
int8_t x126 = INT8_MIN;
uint8_t x127 = UINT8_MAX;
int32_t t29 = -155150;
static volatile int32_t t30 = -3593;
static int16_t x138 = -11036;
uint8_t x145 = 0U;
int16_t x156 = -1;
static int8_t x158 = -23;
volatile int8_t x166 = -19;
int32_t t39 = 1;
int32_t x177 = 2371;
int16_t x185 = -1;
int64_t x200 = INT64_MIN;
uint32_t x203 = 229848U;
volatile int8_t x205 = -3;
static uint8_t x206 = 10U;
volatile int64_t x207 = -1LL;
int32_t t49 = -2805495;
int8_t x217 = -17;
static int32_t t51 = 1708047;
int32_t t52 = -3431581;
static volatile int16_t x229 = INT16_MAX;
static uint32_t x231 = UINT32_MAX;
uint16_t x232 = 18U;
uint16_t x233 = 29211U;
int64_t x234 = 6397944906968617LL;
uint8_t x235 = 1U;
int16_t x241 = INT16_MIN;
uint32_t x248 = UINT32_MAX;
volatile int8_t x251 = INT8_MIN;
int32_t t58 = 465;
int8_t x254 = INT8_MAX;
int16_t x262 = INT16_MAX;
int64_t x264 = INT64_MIN;
int32_t x266 = INT32_MAX;
static uint16_t x267 = 45U;
int16_t x271 = 2;
uint8_t x274 = 0U;
int32_t x280 = INT32_MIN;
volatile int8_t x285 = 1;
int64_t x287 = -1LL;
static volatile int32_t t68 = 0;
static int16_t x297 = INT16_MIN;
int16_t x302 = -94;
volatile int8_t x303 = 3;
uint32_t x307 = 15595110U;
int16_t x309 = INT16_MIN;
volatile int16_t x314 = 7;
int32_t t74 = 2;
static int8_t x318 = -1;
volatile int32_t t75 = 5;
int8_t x321 = INT8_MIN;
volatile int16_t x322 = INT16_MAX;
int16_t x331 = 90;
int16_t x332 = INT16_MIN;
volatile int64_t x333 = INT64_MAX;
uint8_t x335 = 1U;
uint32_t x348 = 1153575077U;
uint64_t x353 = UINT64_MAX;
static int16_t x358 = -1;
volatile uint64_t x361 = UINT64_MAX;
int16_t x367 = -1;
static uint64_t x369 = 77805609005444LLU;
volatile int64_t x374 = INT64_MAX;
uint8_t x376 = 0U;
static int32_t x386 = 611;
static uint16_t x388 = 60U;
volatile int32_t x395 = 690585327;
int64_t x402 = INT64_MIN;
int32_t t95 = 178305284;
static volatile int64_t x414 = INT64_MIN;
volatile uint32_t x415 = 3584U;
int32_t x419 = -1;
int8_t x420 = -14;
int32_t x424 = INT32_MIN;
int16_t x432 = INT16_MIN;
volatile int64_t x440 = -511806082644LL;
int8_t x445 = INT8_MIN;
int16_t x451 = -1;
int32_t x452 = INT32_MAX;
static int32_t t106 = 33299392;
static volatile int32_t x460 = INT32_MIN;
volatile int32_t t108 = 78674726;
int8_t x467 = 17;
static int32_t x468 = INT32_MIN;
static uint8_t x469 = 18U;
uint64_t x470 = 3337583677956504LLU;
int64_t x478 = INT64_MAX;
int64_t x482 = 3210551447349883LL;
int8_t x484 = -15;
volatile uint16_t x485 = 5U;
volatile int16_t x489 = -132;
int32_t x493 = -387591283;
uint64_t x495 = 7268006388348LLU;
uint32_t x499 = 0U;
int16_t x514 = -1;
static volatile int32_t x516 = INT32_MAX;
uint32_t x522 = 1944U;
uint8_t x523 = UINT8_MAX;
volatile int32_t t121 = -17;
volatile int8_t x527 = -1;
int8_t x528 = -1;
uint64_t x529 = 7512953517468458LLU;
uint64_t x540 = 1570171902862256595LLU;
volatile int32_t t125 = 6;
int16_t x548 = INT16_MAX;
int64_t x553 = INT64_MIN;
int32_t x554 = INT32_MIN;
int16_t x555 = 3964;
int32_t t128 = 53634107;
int8_t x558 = INT8_MIN;
int64_t x562 = INT64_MAX;
static volatile uint16_t x568 = 10904U;
uint8_t x575 = UINT8_MAX;
volatile int32_t t133 = -16;
int16_t x582 = INT16_MIN;
int32_t t135 = -1;
uint32_t x585 = UINT32_MAX;
int16_t x586 = INT16_MIN;
static uint8_t x588 = 109U;
static volatile int64_t x593 = INT64_MIN;
int16_t x594 = -79;
int16_t x603 = INT16_MIN;
volatile int32_t t139 = -2825148;
int64_t x605 = INT64_MAX;
int16_t x611 = 93;
int32_t t143 = -14186471;
int8_t x627 = INT8_MIN;
int8_t x632 = INT8_MIN;
uint8_t x634 = 126U;
int32_t x638 = INT32_MIN;
static volatile int16_t x646 = -1;
volatile int16_t x652 = 6;
int64_t x654 = 22137664503850796LL;
int8_t x658 = INT8_MIN;
uint16_t x669 = 71U;
volatile int8_t x672 = 2;
int16_t x674 = 240;
volatile int32_t t155 = -2;
volatile int32_t t156 = -172484366;
int8_t x686 = INT8_MIN;
static volatile int64_t x692 = INT64_MIN;
int8_t x693 = INT8_MIN;
int16_t x698 = -1;
volatile int32_t t161 = -325783839;
int64_t x708 = INT64_MAX;
uint32_t x709 = 1U;
int16_t x710 = INT16_MIN;
static int16_t x711 = INT16_MIN;
int32_t x713 = -3733173;
int32_t x715 = 1753005;
volatile int32_t t166 = 876983844;
uint8_t x729 = 36U;
int8_t x739 = INT8_MIN;
uint16_t x746 = UINT16_MAX;
static int8_t x749 = INT8_MIN;
static volatile int32_t t173 = 28;
int32_t t174 = 3354;
static int8_t x765 = INT8_MAX;
static int16_t x776 = INT16_MIN;
int32_t t179 = -529306;
uint64_t x784 = 3004676LLU;
int8_t x789 = INT8_MIN;
int8_t x791 = INT8_MIN;
uint32_t x800 = 0U;
int64_t x805 = INT64_MIN;
int16_t x819 = -1;
uint16_t x824 = 2730U;
int16_t x826 = 13;
int32_t t192 = -1643;
int8_t x841 = -52;
uint16_t x848 = 3U;
volatile int64_t x850 = -1LL;
int64_t x852 = INT64_MIN;
int16_t x858 = INT16_MAX;
static int32_t x860 = -1;
static int32_t t198 = 155674;
static int32_t x871 = INT32_MAX;


void f0(void) {
    	volatile int8_t x1 = INT8_MIN;
	int64_t x2 = INT64_MIN;
	static int8_t x3 = 2;
	volatile int32_t t0 = 159940;

    t0 = (((x1|x2)+x3)>x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MIN;
	int8_t x6 = INT8_MIN;
	static int8_t x8 = 1;
	volatile int32_t t1 = 272;

    t1 = (((x5|x6)+x7)>x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint8_t x13 = UINT8_MAX;
	uint16_t x14 = 236U;
	int64_t x16 = -335816107924LL;
	static int32_t t2 = -629248;

    t2 = (((x13|x14)+x15)>x16);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x17 = -22303742553LL;
	static int8_t x18 = -1;
	volatile int8_t x19 = INT8_MIN;
	volatile uint32_t x20 = 240554473U;
	int32_t t3 = -1140577;

    t3 = (((x17|x18)+x19)>x20);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x22 = UINT8_MAX;
	volatile uint64_t x23 = 41492LLU;
	uint8_t x24 = UINT8_MAX;
	int32_t t4 = -1829;

    t4 = (((x21|x22)+x23)>x24);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x25 = 24094945LLU;
	static volatile int64_t x28 = INT64_MAX;

    t5 = (((x25|x26)+x27)>x28);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x29 = 109746965837250668LLU;
	volatile int64_t x31 = INT64_MIN;

    t6 = (((x29|x30)+x31)>x32);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x34 = INT32_MIN;
	static volatile uint64_t x35 = UINT64_MAX;
	int32_t x36 = -1;
	volatile int32_t t7 = 2576;

    t7 = (((x33|x34)+x35)>x36);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x37 = 379550LLU;
	int32_t x38 = INT32_MIN;
	int16_t x39 = INT16_MIN;
	volatile uint64_t x40 = 3LLU;
	int32_t t8 = 57722584;

    t8 = (((x37|x38)+x39)>x40);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint64_t x41 = 2242178976069088LLU;
	int64_t x43 = INT64_MIN;
	volatile int8_t x44 = -1;
	static volatile int32_t t9 = 121;

    t9 = (((x41|x42)+x43)>x44);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x45 = INT64_MIN;
	int8_t x46 = -1;
	uint64_t x48 = 8371359238245240425LLU;
	int32_t t10 = 1988;

    t10 = (((x45|x46)+x47)>x48);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint64_t x49 = 10279538128LLU;
	uint64_t x50 = UINT64_MAX;
	uint32_t x51 = 12295054U;
	int64_t x52 = -1LL;
	volatile int32_t t11 = 22586;

    t11 = (((x49|x50)+x51)>x52);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x53 = -15468164LL;
	int32_t x54 = INT32_MAX;
	int8_t x55 = INT8_MIN;
	int64_t x56 = INT64_MIN;
	static int32_t t12 = 4;

    t12 = (((x53|x54)+x55)>x56);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x57 = 585;
	uint32_t x58 = 269038U;
	static int64_t x60 = INT64_MIN;

    t13 = (((x57|x58)+x59)>x60);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x61 = INT8_MIN;
	static int64_t x62 = INT64_MAX;
	uint64_t x63 = UINT64_MAX;
	uint8_t x64 = UINT8_MAX;
	static volatile int32_t t14 = 15;

    t14 = (((x61|x62)+x63)>x64);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x66 = 185U;
	int64_t x67 = -1LL;
	int64_t x68 = INT64_MIN;
	int32_t t15 = -1;

    t15 = (((x65|x66)+x67)>x68);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x69 = INT64_MIN;
	static volatile uint32_t x70 = 5837U;
	int32_t t16 = -226454;

    t16 = (((x69|x70)+x71)>x72);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x73 = INT32_MIN;
	static int8_t x74 = -1;
	uint64_t x75 = 298615913118332773LLU;
	static uint8_t x76 = UINT8_MAX;

    t17 = (((x73|x74)+x75)>x76);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x78 = INT32_MIN;
	static uint8_t x79 = 46U;
	uint8_t x80 = 1U;
	static volatile int32_t t18 = -11594541;

    t18 = (((x77|x78)+x79)>x80);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x85 = INT16_MIN;
	static uint64_t x86 = 5347LLU;
	int64_t x87 = INT64_MIN;
	uint32_t x88 = 416U;
	int32_t t19 = 1;

    t19 = (((x85|x86)+x87)>x88);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x89 = -1;
	uint16_t x90 = UINT16_MAX;
	static int8_t x92 = -1;

    t20 = (((x89|x90)+x91)>x92);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x94 = -29;
	int8_t x96 = 7;
	int32_t t21 = 664;

    t21 = (((x93|x94)+x95)>x96);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x97 = -1430043344LL;
	uint64_t x98 = 28435008372541000LLU;
	int16_t x100 = INT16_MIN;

    t22 = (((x97|x98)+x99)>x100);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x101 = 56734335873763LL;
	int16_t x103 = -1;
	uint16_t x104 = 1806U;
	volatile int32_t t23 = -14802521;

    t23 = (((x101|x102)+x103)>x104);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x105 = INT64_MIN;
	static uint16_t x106 = 802U;
	uint32_t x107 = 405972620U;
	uint64_t x108 = UINT64_MAX;
	static volatile int32_t t24 = -169;

    t24 = (((x105|x106)+x107)>x108);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x109 = -8;
	static int8_t x110 = -18;
	int16_t x111 = INT16_MIN;
	static int64_t x112 = INT64_MIN;
	volatile int32_t t25 = 134;

    t25 = (((x109|x110)+x111)>x112);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x113 = INT32_MIN;
	static volatile int32_t x114 = INT32_MAX;
	int8_t x116 = INT8_MAX;
	volatile int32_t t26 = -3868471;

    t26 = (((x113|x114)+x115)>x116);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x119 = INT16_MAX;
	uint32_t x120 = 5202U;
	int32_t t27 = 35034;

    t27 = (((x117|x118)+x119)>x120);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x121 = INT8_MAX;
	static volatile int16_t x122 = INT16_MAX;
	int8_t x123 = INT8_MIN;
	volatile int32_t x124 = -1969373;
	int32_t t28 = -3577;

    t28 = (((x121|x122)+x123)>x124);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x128 = 17362906U;

    t29 = (((x125|x126)+x127)>x128);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile uint32_t x129 = 2121U;
	int16_t x130 = INT16_MAX;
	static int64_t x131 = 7617735LL;
	int64_t x132 = INT64_MIN;

    t30 = (((x129|x130)+x131)>x132);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x133 = 1U;
	int8_t x134 = INT8_MIN;
	volatile int8_t x135 = -29;
	int16_t x136 = INT16_MAX;
	int32_t t31 = 41;

    t31 = (((x133|x134)+x135)>x136);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x137 = INT8_MIN;
	volatile int32_t x139 = 7910614;
	int16_t x140 = INT16_MIN;
	int32_t t32 = -64131;

    t32 = (((x137|x138)+x139)>x140);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x141 = 6U;
	uint16_t x142 = UINT16_MAX;
	volatile int64_t x143 = INT64_MIN;
	static uint64_t x144 = UINT64_MAX;
	volatile int32_t t33 = 1196;

    t33 = (((x141|x142)+x143)>x144);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x146 = INT64_MIN;
	uint64_t x147 = 194LLU;
	volatile int64_t x148 = INT64_MIN;
	int32_t t34 = 6219;

    t34 = (((x145|x146)+x147)>x148);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x149 = -1;
	int32_t x150 = INT32_MIN;
	volatile uint64_t x151 = 229093365212622312LLU;
	uint64_t x152 = 1LLU;
	static int32_t t35 = -862;

    t35 = (((x149|x150)+x151)>x152);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x153 = 3;
	int16_t x154 = INT16_MIN;
	volatile int8_t x155 = -1;
	int32_t t36 = -435799;

    t36 = (((x153|x154)+x155)>x156);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x157 = INT32_MIN;
	volatile int32_t x159 = -3;
	static uint64_t x160 = 3355329219243595LLU;
	int32_t t37 = -26353073;

    t37 = (((x157|x158)+x159)>x160);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x161 = 2291LL;
	int16_t x162 = -11;
	int32_t x163 = -1;
	volatile int8_t x164 = INT8_MAX;
	volatile int32_t t38 = 1;

    t38 = (((x161|x162)+x163)>x164);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x165 = -724394209;
	int16_t x167 = INT16_MIN;
	int8_t x168 = INT8_MAX;

    t39 = (((x165|x166)+x167)>x168);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x178 = -1LL;
	int8_t x179 = INT8_MIN;
	int64_t x180 = INT64_MIN;
	int32_t t40 = -26468;

    t40 = (((x177|x178)+x179)>x180);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x181 = INT32_MIN;
	volatile int16_t x182 = INT16_MIN;
	volatile int32_t x183 = -11106;
	int32_t x184 = -1;
	int32_t t41 = -2718;

    t41 = (((x181|x182)+x183)>x184);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x186 = INT32_MIN;
	uint16_t x187 = 18936U;
	uint32_t x188 = UINT32_MAX;
	int32_t t42 = 1129;

    t42 = (((x185|x186)+x187)>x188);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x189 = INT16_MAX;
	int16_t x190 = -1;
	uint64_t x191 = 45LLU;
	int64_t x192 = 6LL;
	int32_t t43 = 2;

    t43 = (((x189|x190)+x191)>x192);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x193 = -1;
	uint16_t x194 = UINT16_MAX;
	int64_t x195 = 108366730283365973LL;
	uint8_t x196 = 2U;
	volatile int32_t t44 = 226645109;

    t44 = (((x193|x194)+x195)>x196);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x197 = 7977682;
	int16_t x198 = 131;
	static int32_t x199 = -2190026;
	static volatile int32_t t45 = 1;

    t45 = (((x197|x198)+x199)>x200);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x201 = INT16_MIN;
	int8_t x202 = INT8_MIN;
	int16_t x204 = -1;
	static int32_t t46 = 1031851;

    t46 = (((x201|x202)+x203)>x204);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x208 = 1;
	int32_t t47 = 297281;

    t47 = (((x205|x206)+x207)>x208);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x209 = INT8_MIN;
	int32_t x210 = INT32_MIN;
	int8_t x211 = INT8_MIN;
	int64_t x212 = INT64_MIN;
	volatile int32_t t48 = -204295;

    t48 = (((x209|x210)+x211)>x212);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x213 = -1LL;
	volatile int8_t x214 = INT8_MAX;
	int32_t x215 = INT32_MIN;
	int16_t x216 = INT16_MIN;

    t49 = (((x213|x214)+x215)>x216);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x218 = -1;
	int16_t x219 = 1;
	int8_t x220 = INT8_MIN;
	int32_t t50 = 235107623;

    t50 = (((x217|x218)+x219)>x220);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint32_t x221 = UINT32_MAX;
	int16_t x222 = INT16_MAX;
	uint64_t x223 = UINT64_MAX;
	int16_t x224 = -10628;

    t51 = (((x221|x222)+x223)>x224);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint32_t x225 = 1848461045U;
	int16_t x226 = 826;
	volatile int16_t x227 = -1;
	int32_t x228 = INT32_MIN;

    t52 = (((x225|x226)+x227)>x228);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x230 = INT8_MIN;
	static int32_t t53 = 0;

    t53 = (((x229|x230)+x231)>x232);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x236 = UINT32_MAX;
	volatile int32_t t54 = 67;

    t54 = (((x233|x234)+x235)>x236);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x237 = -24;
	uint64_t x238 = 26429338300858LLU;
	int8_t x239 = 6;
	int64_t x240 = 10008520LL;
	int32_t t55 = 56260;

    t55 = (((x237|x238)+x239)>x240);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x242 = INT8_MIN;
	uint32_t x243 = UINT32_MAX;
	uint32_t x244 = 52827023U;
	int32_t t56 = 1;

    t56 = (((x241|x242)+x243)>x244);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x245 = 1719U;
	volatile int16_t x246 = -1;
	int32_t x247 = -1;
	volatile int32_t t57 = 0;

    t57 = (((x245|x246)+x247)>x248);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x249 = -501533LL;
	int16_t x250 = INT16_MAX;
	int64_t x252 = 692718139LL;

    t58 = (((x249|x250)+x251)>x252);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int16_t x253 = 96;
	static volatile int32_t x255 = -1;
	volatile int8_t x256 = -10;
	int32_t t59 = 8851;

    t59 = (((x253|x254)+x255)>x256);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x257 = INT64_MIN;
	uint16_t x258 = 14751U;
	uint8_t x259 = 9U;
	uint8_t x260 = 23U;
	static int32_t t60 = -6901613;

    t60 = (((x257|x258)+x259)>x260);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int16_t x261 = -244;
	static int8_t x263 = 7;
	volatile int32_t t61 = 2248377;

    t61 = (((x261|x262)+x263)>x264);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x265 = UINT32_MAX;
	uint16_t x268 = 2005U;
	int32_t t62 = 0;

    t62 = (((x265|x266)+x267)>x268);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x269 = 0U;
	static uint64_t x270 = 57278531LLU;
	uint16_t x272 = 1U;
	volatile int32_t t63 = -35;

    t63 = (((x269|x270)+x271)>x272);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x273 = -1;
	volatile int32_t x275 = -17633;
	int32_t x276 = 99176097;
	int32_t t64 = -28166455;

    t64 = (((x273|x274)+x275)>x276);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x277 = INT16_MAX;
	uint16_t x278 = 0U;
	uint32_t x279 = UINT32_MAX;
	int32_t t65 = -123;

    t65 = (((x277|x278)+x279)>x280);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x281 = INT64_MIN;
	int64_t x282 = -1626182216721LL;
	int8_t x283 = INT8_MIN;
	uint16_t x284 = 5168U;
	int32_t t66 = -228291658;

    t66 = (((x281|x282)+x283)>x284);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x286 = INT8_MIN;
	static uint8_t x288 = 5U;
	volatile int32_t t67 = -5531901;

    t67 = (((x285|x286)+x287)>x288);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x289 = INT8_MIN;
	static int16_t x290 = -1;
	int32_t x291 = INT32_MAX;
	int64_t x292 = 134LL;

    t68 = (((x289|x290)+x291)>x292);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x293 = INT8_MIN;
	int16_t x294 = INT16_MAX;
	static int16_t x295 = INT16_MIN;
	int64_t x296 = 790462LL;
	volatile int32_t t69 = -31872;

    t69 = (((x293|x294)+x295)>x296);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x298 = INT8_MIN;
	int64_t x299 = INT64_MAX;
	static int16_t x300 = -126;
	static volatile int32_t t70 = 813466;

    t70 = (((x297|x298)+x299)>x300);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x301 = INT32_MIN;
	int32_t x304 = 3;
	static volatile int32_t t71 = -29598692;

    t71 = (((x301|x302)+x303)>x304);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint8_t x305 = 21U;
	uint8_t x306 = UINT8_MAX;
	static volatile int64_t x308 = INT64_MIN;
	static int32_t t72 = -3411120;

    t72 = (((x305|x306)+x307)>x308);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x310 = UINT32_MAX;
	int32_t x311 = INT32_MAX;
	uint8_t x312 = UINT8_MAX;
	volatile int32_t t73 = 3000;

    t73 = (((x309|x310)+x311)>x312);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x313 = -1;
	volatile int8_t x315 = -47;
	int64_t x316 = INT64_MIN;

    t74 = (((x313|x314)+x315)>x316);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x317 = 1;
	uint32_t x319 = 747498804U;
	int8_t x320 = -1;

    t75 = (((x317|x318)+x319)>x320);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x323 = INT32_MAX;
	int32_t x324 = -3771;
	static volatile int32_t t76 = 5324018;

    t76 = (((x321|x322)+x323)>x324);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x325 = -1;
	int32_t x326 = 2;
	static int32_t x327 = -4436;
	int8_t x328 = -3;
	volatile int32_t t77 = -1258092;

    t77 = (((x325|x326)+x327)>x328);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x329 = UINT16_MAX;
	int8_t x330 = -1;
	int32_t t78 = -998;

    t78 = (((x329|x330)+x331)>x332);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x334 = INT32_MIN;
	int8_t x336 = INT8_MIN;
	static volatile int32_t t79 = -96400200;

    t79 = (((x333|x334)+x335)>x336);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x337 = -44;
	volatile int32_t x338 = -1;
	volatile int64_t x339 = 41359233979503345LL;
	int32_t x340 = -1;
	int32_t t80 = 22;

    t80 = (((x337|x338)+x339)>x340);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static int16_t x341 = -12;
	int32_t x342 = -1;
	uint16_t x343 = UINT16_MAX;
	volatile int32_t x344 = INT32_MIN;
	int32_t t81 = 17119;

    t81 = (((x341|x342)+x343)>x344);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int16_t x345 = INT16_MIN;
	int32_t x346 = -1;
	volatile int8_t x347 = INT8_MIN;
	int32_t t82 = -10;

    t82 = (((x345|x346)+x347)>x348);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint8_t x349 = UINT8_MAX;
	int16_t x350 = 45;
	uint8_t x351 = 10U;
	int16_t x352 = 1;
	volatile int32_t t83 = -13843660;

    t83 = (((x349|x350)+x351)>x352);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x354 = 5339U;
	int64_t x355 = -163210380LL;
	static int8_t x356 = INT8_MIN;
	volatile int32_t t84 = -3840;

    t84 = (((x353|x354)+x355)>x356);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int32_t x357 = -1;
	volatile int32_t x359 = 1709466;
	int32_t x360 = INT32_MAX;
	volatile int32_t t85 = 0;

    t85 = (((x357|x358)+x359)>x360);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x362 = 2;
	int8_t x363 = -1;
	uint16_t x364 = UINT16_MAX;
	int32_t t86 = 96046529;

    t86 = (((x361|x362)+x363)>x364);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile uint32_t x365 = 102144U;
	uint64_t x366 = 246LLU;
	static uint16_t x368 = 98U;
	volatile int32_t t87 = 2308;

    t87 = (((x365|x366)+x367)>x368);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile uint32_t x370 = UINT32_MAX;
	int16_t x371 = -835;
	int8_t x372 = -1;
	int32_t t88 = -32059;

    t88 = (((x369|x370)+x371)>x372);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint64_t x373 = 38616474LLU;
	int8_t x375 = -1;
	static volatile int32_t t89 = -442459;

    t89 = (((x373|x374)+x375)>x376);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x377 = INT16_MAX;
	static int64_t x378 = INT64_MIN;
	uint8_t x379 = UINT8_MAX;
	int8_t x380 = 61;
	int32_t t90 = 38;

    t90 = (((x377|x378)+x379)>x380);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x385 = INT64_MIN;
	volatile int16_t x387 = INT16_MAX;
	volatile int32_t t91 = 25497902;

    t91 = (((x385|x386)+x387)>x388);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x389 = INT16_MAX;
	volatile uint16_t x390 = 898U;
	int16_t x391 = INT16_MIN;
	int8_t x392 = -40;
	volatile int32_t t92 = -97600211;

    t92 = (((x389|x390)+x391)>x392);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x393 = INT32_MIN;
	static int32_t x394 = -65645809;
	uint16_t x396 = UINT16_MAX;
	volatile int32_t t93 = -128429777;

    t93 = (((x393|x394)+x395)>x396);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x397 = -1;
	uint16_t x398 = 15U;
	int16_t x399 = INT16_MIN;
	static int8_t x400 = -1;
	volatile int32_t t94 = -13892080;

    t94 = (((x397|x398)+x399)>x400);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x401 = 0;
	uint8_t x403 = 72U;
	int64_t x404 = 352989041795LL;

    t95 = (((x401|x402)+x403)>x404);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x405 = 103738553U;
	static volatile int64_t x406 = INT64_MAX;
	int32_t x407 = -28979723;
	volatile int8_t x408 = INT8_MIN;
	int32_t t96 = 30216807;

    t96 = (((x405|x406)+x407)>x408);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x409 = 1048U;
	static int32_t x410 = INT32_MIN;
	int32_t x411 = -1;
	uint64_t x412 = 7750664303584906LLU;
	volatile int32_t t97 = 1;

    t97 = (((x409|x410)+x411)>x412);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x413 = 315289345350930603LLU;
	uint64_t x416 = 6496147LLU;
	int32_t t98 = -215922884;

    t98 = (((x413|x414)+x415)>x416);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x417 = INT16_MIN;
	int8_t x418 = 3;
	static volatile int32_t t99 = 30347405;

    t99 = (((x417|x418)+x419)>x420);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint64_t x421 = UINT64_MAX;
	int64_t x422 = INT64_MIN;
	static int8_t x423 = INT8_MIN;
	int32_t t100 = 26930;

    t100 = (((x421|x422)+x423)>x424);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x425 = INT16_MIN;
	int64_t x426 = -1LL;
	int64_t x427 = -1LL;
	volatile int64_t x428 = -1LL;
	int32_t t101 = 426092;

    t101 = (((x425|x426)+x427)>x428);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x429 = -1;
	uint64_t x430 = 235378091512637601LLU;
	uint16_t x431 = 4953U;
	volatile int32_t t102 = 19155;

    t102 = (((x429|x430)+x431)>x432);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x437 = 835U;
	int16_t x438 = INT16_MAX;
	uint32_t x439 = UINT32_MAX;
	static int32_t t103 = -1;

    t103 = (((x437|x438)+x439)>x440);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x441 = 129082U;
	int16_t x442 = -406;
	static uint32_t x443 = 373U;
	int8_t x444 = 1;
	volatile int32_t t104 = 49;

    t104 = (((x441|x442)+x443)>x444);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x446 = -6152;
	volatile int32_t x447 = -231122031;
	int64_t x448 = INT64_MAX;
	volatile int32_t t105 = -6;

    t105 = (((x445|x446)+x447)>x448);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x449 = -1;
	static int16_t x450 = -1;

    t106 = (((x449|x450)+x451)>x452);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x457 = INT8_MIN;
	static int64_t x458 = INT64_MIN;
	int32_t x459 = INT32_MIN;
	static volatile int32_t t107 = -385;

    t107 = (((x457|x458)+x459)>x460);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x461 = INT32_MAX;
	int32_t x462 = -30;
	uint8_t x463 = 14U;
	int8_t x464 = INT8_MAX;

    t108 = (((x461|x462)+x463)>x464);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x465 = INT32_MIN;
	static int8_t x466 = -7;
	int32_t t109 = -9;

    t109 = (((x465|x466)+x467)>x468);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x471 = 1LL;
	uint16_t x472 = 38U;
	volatile int32_t t110 = 653;

    t110 = (((x469|x470)+x471)>x472);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint16_t x473 = 441U;
	int64_t x474 = -1LL;
	static uint16_t x475 = UINT16_MAX;
	int16_t x476 = -1;
	static int32_t t111 = -278;

    t111 = (((x473|x474)+x475)>x476);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int8_t x477 = 7;
	static int8_t x479 = INT8_MIN;
	int8_t x480 = INT8_MIN;
	volatile int32_t t112 = 3;

    t112 = (((x477|x478)+x479)>x480);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x481 = 439113465LLU;
	int64_t x483 = -2119836933730578LL;
	int32_t t113 = -1013;

    t113 = (((x481|x482)+x483)>x484);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x486 = 12;
	int8_t x487 = INT8_MIN;
	uint32_t x488 = UINT32_MAX;
	int32_t t114 = 243048229;

    t114 = (((x485|x486)+x487)>x488);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x490 = INT32_MIN;
	volatile uint32_t x491 = 2U;
	int16_t x492 = INT16_MIN;
	int32_t t115 = 242;

    t115 = (((x489|x490)+x491)>x492);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x494 = INT8_MAX;
	int32_t x496 = INT32_MIN;
	int32_t t116 = 3472;

    t116 = (((x493|x494)+x495)>x496);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x497 = UINT16_MAX;
	int16_t x498 = -3630;
	uint8_t x500 = 17U;
	static volatile int32_t t117 = 116;

    t117 = (((x497|x498)+x499)>x500);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x501 = UINT8_MAX;
	int64_t x502 = -226667686LL;
	static volatile uint16_t x503 = UINT16_MAX;
	int32_t x504 = INT32_MIN;
	int32_t t118 = 6620;

    t118 = (((x501|x502)+x503)>x504);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x509 = UINT8_MAX;
	int64_t x510 = 90487521839LL;
	uint32_t x511 = UINT32_MAX;
	int64_t x512 = INT64_MIN;
	int32_t t119 = -3;

    t119 = (((x509|x510)+x511)>x512);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x513 = INT64_MIN;
	int64_t x515 = -2LL;
	volatile int32_t t120 = 8;

    t120 = (((x513|x514)+x515)>x516);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x521 = INT32_MIN;
	static int64_t x524 = 1113504775769LL;

    t121 = (((x521|x522)+x523)>x524);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x525 = -1;
	int64_t x526 = -1LL;
	int32_t t122 = 3;

    t122 = (((x525|x526)+x527)>x528);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x530 = INT8_MAX;
	static uint32_t x531 = 15793U;
	int64_t x532 = INT64_MAX;
	static volatile int32_t t123 = -330685457;

    t123 = (((x529|x530)+x531)>x532);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x533 = INT16_MAX;
	uint8_t x534 = 103U;
	int32_t x535 = -408;
	int16_t x536 = 14;
	volatile int32_t t124 = -25;

    t124 = (((x533|x534)+x535)>x536);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint16_t x537 = 7707U;
	uint8_t x538 = UINT8_MAX;
	int64_t x539 = INT64_MIN;

    t125 = (((x537|x538)+x539)>x540);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x541 = UINT16_MAX;
	int32_t x542 = -8238853;
	int64_t x543 = -1LL;
	uint16_t x544 = 1U;
	static volatile int32_t t126 = -596905;

    t126 = (((x541|x542)+x543)>x544);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x545 = 54;
	int64_t x546 = INT64_MIN;
	int16_t x547 = 3;
	int32_t t127 = 854;

    t127 = (((x545|x546)+x547)>x548);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x556 = -1;

    t128 = (((x553|x554)+x555)>x556);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x557 = -1;
	uint16_t x559 = 3056U;
	int16_t x560 = -1;
	int32_t t129 = 7317870;

    t129 = (((x557|x558)+x559)>x560);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int16_t x561 = INT16_MIN;
	int16_t x563 = INT16_MIN;
	int32_t x564 = -156455;
	volatile int32_t t130 = 312202;

    t130 = (((x561|x562)+x563)>x564);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile uint32_t x565 = 11647366U;
	int64_t x566 = INT64_MIN;
	int8_t x567 = 10;
	volatile int32_t t131 = 2428557;

    t131 = (((x565|x566)+x567)>x568);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile uint16_t x569 = UINT16_MAX;
	static int8_t x570 = -1;
	int64_t x571 = -12407LL;
	int64_t x572 = -6430398LL;
	volatile int32_t t132 = 80291;

    t132 = (((x569|x570)+x571)>x572);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int16_t x573 = -3;
	int32_t x574 = INT32_MAX;
	static int32_t x576 = INT32_MIN;

    t133 = (((x573|x574)+x575)>x576);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x577 = INT64_MAX;
	volatile uint16_t x578 = UINT16_MAX;
	int64_t x579 = -362941216311593LL;
	static int8_t x580 = -1;
	int32_t t134 = -45;

    t134 = (((x577|x578)+x579)>x580);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint8_t x581 = 0U;
	uint8_t x583 = 5U;
	int16_t x584 = -1;

    t135 = (((x581|x582)+x583)>x584);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x587 = -487375LL;
	static volatile int32_t t136 = -4031;

    t136 = (((x585|x586)+x587)>x588);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x595 = INT8_MAX;
	uint32_t x596 = UINT32_MAX;
	int32_t t137 = 3;

    t137 = (((x593|x594)+x595)>x596);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x597 = INT64_MAX;
	int32_t x598 = INT32_MIN;
	static int32_t x599 = -1417646;
	int64_t x600 = -1093797357599188LL;
	int32_t t138 = 0;

    t138 = (((x597|x598)+x599)>x600);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x601 = INT64_MAX;
	volatile uint64_t x602 = UINT64_MAX;
	int32_t x604 = -1;

    t139 = (((x601|x602)+x603)>x604);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x606 = INT32_MIN;
	uint16_t x607 = 20U;
	int64_t x608 = INT64_MIN;
	int32_t t140 = -25784;

    t140 = (((x605|x606)+x607)>x608);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x609 = 1815LL;
	int32_t x610 = INT32_MIN;
	uint8_t x612 = 17U;
	int32_t t141 = -320893;

    t141 = (((x609|x610)+x611)>x612);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int64_t x617 = INT64_MIN;
	int8_t x618 = -31;
	uint16_t x619 = UINT16_MAX;
	volatile int32_t x620 = INT32_MIN;
	volatile int32_t t142 = -826;

    t142 = (((x617|x618)+x619)>x620);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x621 = INT32_MIN;
	volatile uint16_t x622 = 16115U;
	volatile uint32_t x623 = 8321529U;
	int16_t x624 = -1;

    t143 = (((x621|x622)+x623)>x624);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x625 = INT32_MAX;
	volatile int8_t x626 = INT8_MIN;
	volatile int16_t x628 = INT16_MIN;
	volatile int32_t t144 = -2;

    t144 = (((x625|x626)+x627)>x628);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x629 = 19146LLU;
	static int8_t x630 = 0;
	uint16_t x631 = UINT16_MAX;
	volatile int32_t t145 = 251;

    t145 = (((x629|x630)+x631)>x632);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x633 = UINT8_MAX;
	int32_t x635 = -1;
	int32_t x636 = INT32_MIN;
	volatile int32_t t146 = -965481919;

    t146 = (((x633|x634)+x635)>x636);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x637 = -15713799179128LL;
	uint32_t x639 = 20816283U;
	int64_t x640 = INT64_MIN;
	int32_t t147 = 159297322;

    t147 = (((x637|x638)+x639)>x640);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x645 = UINT8_MAX;
	uint64_t x647 = 104937318380698LLU;
	int32_t x648 = -962;
	volatile int32_t t148 = 877068789;

    t148 = (((x645|x646)+x647)>x648);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x649 = 703260U;
	static volatile uint16_t x650 = 19U;
	int16_t x651 = -2353;
	static volatile int32_t t149 = -384;

    t149 = (((x649|x650)+x651)>x652);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x653 = INT16_MIN;
	int16_t x655 = 10;
	int8_t x656 = INT8_MAX;
	int32_t t150 = 1153;

    t150 = (((x653|x654)+x655)>x656);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint32_t x657 = UINT32_MAX;
	uint8_t x659 = 115U;
	uint64_t x660 = UINT64_MAX;
	static volatile int32_t t151 = -9489;

    t151 = (((x657|x658)+x659)>x660);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x661 = INT32_MAX;
	uint8_t x662 = 13U;
	uint32_t x663 = 55165975U;
	int8_t x664 = -50;
	static volatile int32_t t152 = -89702120;

    t152 = (((x661|x662)+x663)>x664);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint8_t x665 = 6U;
	int8_t x666 = -1;
	int16_t x667 = -26;
	uint32_t x668 = 1076U;
	volatile int32_t t153 = 27567;

    t153 = (((x665|x666)+x667)>x668);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x670 = 2992U;
	int8_t x671 = INT8_MAX;
	static int32_t t154 = -29148;

    t154 = (((x669|x670)+x671)>x672);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x673 = 2;
	int8_t x675 = 31;
	int8_t x676 = -1;

    t155 = (((x673|x674)+x675)>x676);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x681 = INT8_MAX;
	volatile int64_t x682 = INT64_MAX;
	int64_t x683 = INT64_MIN;
	int16_t x684 = INT16_MIN;

    t156 = (((x681|x682)+x683)>x684);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint16_t x685 = UINT16_MAX;
	volatile int32_t x687 = -1;
	volatile int8_t x688 = 1;
	int32_t t157 = -1125696;

    t157 = (((x685|x686)+x687)>x688);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x689 = UINT16_MAX;
	int64_t x690 = -432491LL;
	static volatile int32_t x691 = 48816251;
	int32_t t158 = -22;

    t158 = (((x689|x690)+x691)>x692);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x694 = INT64_MIN;
	uint64_t x695 = 114LLU;
	volatile int64_t x696 = -1LL;
	volatile int32_t t159 = 1;

    t159 = (((x693|x694)+x695)>x696);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x697 = INT16_MIN;
	static uint8_t x699 = 30U;
	int32_t x700 = -1170251;
	volatile int32_t t160 = -203793669;

    t160 = (((x697|x698)+x699)>x700);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x701 = UINT64_MAX;
	int32_t x702 = INT32_MIN;
	uint16_t x703 = 15U;
	int64_t x704 = INT64_MAX;

    t161 = (((x701|x702)+x703)>x704);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x705 = INT8_MIN;
	uint8_t x706 = 3U;
	volatile uint32_t x707 = UINT32_MAX;
	int32_t t162 = -2290846;

    t162 = (((x705|x706)+x707)>x708);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint16_t x712 = 63U;
	int32_t t163 = -239570;

    t163 = (((x709|x710)+x711)>x712);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x714 = 2333;
	int16_t x716 = INT16_MIN;
	int32_t t164 = -235437;

    t164 = (((x713|x714)+x715)>x716);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint8_t x717 = UINT8_MAX;
	volatile uint32_t x718 = 6U;
	uint16_t x719 = UINT16_MAX;
	volatile uint32_t x720 = 241U;
	static volatile int32_t t165 = 43;

    t165 = (((x717|x718)+x719)>x720);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x721 = INT32_MAX;
	volatile int8_t x722 = INT8_MIN;
	volatile uint8_t x723 = 67U;
	uint32_t x724 = UINT32_MAX;

    t166 = (((x721|x722)+x723)>x724);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x725 = 1U;
	static int16_t x726 = INT16_MIN;
	int64_t x727 = 63198890LL;
	int8_t x728 = -1;
	volatile int32_t t167 = -155;

    t167 = (((x725|x726)+x727)>x728);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x730 = 12;
	int64_t x731 = INT64_MIN;
	uint8_t x732 = 0U;
	volatile int32_t t168 = -1;

    t168 = (((x729|x730)+x731)>x732);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x737 = INT64_MAX;
	volatile int64_t x738 = INT64_MIN;
	int64_t x740 = -113782857075LL;
	int32_t t169 = 7518;

    t169 = (((x737|x738)+x739)>x740);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x741 = 415615890904LL;
	uint32_t x742 = 8671566U;
	static int16_t x743 = 60;
	static int8_t x744 = INT8_MIN;
	int32_t t170 = -72904;

    t170 = (((x741|x742)+x743)>x744);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x745 = -4682879LL;
	volatile int64_t x747 = INT64_MAX;
	int32_t x748 = 971484776;
	int32_t t171 = 616;

    t171 = (((x745|x746)+x747)>x748);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x750 = -7769256LL;
	int32_t x751 = INT32_MIN;
	int16_t x752 = INT16_MIN;
	int32_t t172 = -4072386;

    t172 = (((x749|x750)+x751)>x752);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x753 = INT8_MIN;
	static int16_t x754 = INT16_MAX;
	static int64_t x755 = 6LL;
	uint8_t x756 = 1U;

    t173 = (((x753|x754)+x755)>x756);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint8_t x757 = UINT8_MAX;
	uint32_t x758 = 2131800560U;
	int16_t x759 = INT16_MIN;
	int16_t x760 = -903;

    t174 = (((x757|x758)+x759)>x760);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x761 = INT8_MAX;
	static volatile int64_t x762 = 1834562994609603LL;
	int64_t x763 = INT64_MIN;
	volatile int8_t x764 = INT8_MIN;
	volatile int32_t t175 = -49916;

    t175 = (((x761|x762)+x763)>x764);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int8_t x766 = INT8_MIN;
	static int8_t x767 = -1;
	int8_t x768 = INT8_MIN;
	volatile int32_t t176 = 0;

    t176 = (((x765|x766)+x767)>x768);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x769 = 15770U;
	static int8_t x770 = INT8_MAX;
	volatile int16_t x771 = INT16_MIN;
	int16_t x772 = INT16_MAX;
	int32_t t177 = -1658;

    t177 = (((x769|x770)+x771)>x772);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x773 = -1;
	int8_t x774 = -1;
	uint16_t x775 = UINT16_MAX;
	int32_t t178 = -1;

    t178 = (((x773|x774)+x775)>x776);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x777 = 14;
	static int8_t x778 = INT8_MIN;
	int16_t x779 = 333;
	volatile uint64_t x780 = UINT64_MAX;

    t179 = (((x777|x778)+x779)>x780);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x781 = INT16_MIN;
	static int64_t x782 = INT64_MIN;
	uint32_t x783 = 113U;
	volatile int32_t t180 = 6;

    t180 = (((x781|x782)+x783)>x784);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x785 = -14623LL;
	uint64_t x786 = 8031930LLU;
	static int64_t x787 = INT64_MIN;
	int64_t x788 = 1LL;
	volatile int32_t t181 = -1666024;

    t181 = (((x785|x786)+x787)>x788);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x790 = 3U;
	int64_t x792 = INT64_MIN;
	volatile int32_t t182 = 1036445;

    t182 = (((x789|x790)+x791)>x792);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x793 = 9U;
	static uint64_t x794 = UINT64_MAX;
	int8_t x795 = -1;
	uint16_t x796 = 396U;
	int32_t t183 = -366;

    t183 = (((x793|x794)+x795)>x796);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x797 = 0;
	int32_t x798 = INT32_MAX;
	uint32_t x799 = 400140616U;
	volatile int32_t t184 = 186289;

    t184 = (((x797|x798)+x799)>x800);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x801 = INT64_MIN;
	int16_t x802 = 33;
	static int32_t x803 = 27;
	volatile int32_t x804 = INT32_MAX;
	static volatile int32_t t185 = 13521045;

    t185 = (((x801|x802)+x803)>x804);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x806 = -1427322328372045LL;
	volatile uint64_t x807 = 963320676252113807LLU;
	static int32_t x808 = -6780466;
	static volatile int32_t t186 = -4105316;

    t186 = (((x805|x806)+x807)>x808);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint64_t x809 = UINT64_MAX;
	int64_t x810 = INT64_MIN;
	int64_t x811 = INT64_MIN;
	int64_t x812 = 262962927893LL;
	int32_t t187 = -83828441;

    t187 = (((x809|x810)+x811)>x812);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x813 = INT64_MIN;
	uint64_t x814 = 4498193LLU;
	static uint16_t x815 = 18U;
	int64_t x816 = INT64_MIN;
	int32_t t188 = -8447;

    t188 = (((x813|x814)+x815)>x816);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x817 = -209794389669LL;
	uint16_t x818 = UINT16_MAX;
	int8_t x820 = -1;
	int32_t t189 = -21;

    t189 = (((x817|x818)+x819)>x820);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x821 = UINT64_MAX;
	static int32_t x822 = 3658;
	uint8_t x823 = 3U;
	volatile int32_t t190 = -61784;

    t190 = (((x821|x822)+x823)>x824);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x825 = INT8_MIN;
	int64_t x827 = 22727862287516313LL;
	static uint32_t x828 = UINT32_MAX;
	volatile int32_t t191 = -3;

    t191 = (((x825|x826)+x827)>x828);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x833 = INT8_MAX;
	int16_t x834 = INT16_MIN;
	int16_t x835 = INT16_MIN;
	volatile int64_t x836 = INT64_MIN;

    t192 = (((x833|x834)+x835)>x836);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint64_t x837 = 15585766995952LLU;
	int16_t x838 = INT16_MIN;
	int64_t x839 = -735503LL;
	uint8_t x840 = 3U;
	int32_t t193 = -470518132;

    t193 = (((x837|x838)+x839)>x840);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x842 = -2104316823495004415LL;
	int8_t x843 = -1;
	int32_t x844 = -1;
	volatile int32_t t194 = -89;

    t194 = (((x841|x842)+x843)>x844);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x845 = -291096111LL;
	volatile uint32_t x846 = UINT32_MAX;
	uint16_t x847 = 37U;
	volatile int32_t t195 = -96694629;

    t195 = (((x845|x846)+x847)>x848);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x849 = 3682;
	static uint64_t x851 = UINT64_MAX;
	int32_t t196 = 1140;

    t196 = (((x849|x850)+x851)>x852);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x853 = -2LL;
	uint32_t x854 = UINT32_MAX;
	int32_t x855 = INT32_MIN;
	static volatile uint16_t x856 = 3477U;
	volatile int32_t t197 = 41;

    t197 = (((x853|x854)+x855)>x856);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int32_t x857 = 7;
	int64_t x859 = INT64_MIN;

    t198 = (((x857|x858)+x859)>x860);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x869 = INT64_MIN;
	uint32_t x870 = UINT32_MAX;
	volatile int32_t x872 = -1;
	static volatile int32_t t199 = -189;

    t199 = (((x869|x870)+x871)>x872);

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

