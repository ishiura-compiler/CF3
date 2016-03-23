
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

uint8_t x8 = 15U;
static int16_t x20 = INT16_MIN;
volatile uint8_t x29 = UINT8_MAX;
static int8_t x30 = -11;
static int16_t x40 = INT16_MAX;
volatile int32_t t9 = 955653;
uint64_t x48 = 937250061633596382LLU;
int32_t t11 = 6928;
int8_t x51 = -1;
int16_t x55 = INT16_MIN;
int32_t t13 = 19575;
uint32_t x64 = 48167934U;
uint16_t x67 = 12U;
int8_t x71 = INT8_MAX;
int16_t x75 = INT16_MAX;
uint32_t x76 = 25513U;
int8_t x77 = INT8_MIN;
int8_t x86 = INT8_MAX;
static int64_t x100 = INT64_MIN;
static volatile int32_t t25 = -35;
int8_t x108 = INT8_MIN;
int32_t x109 = INT32_MIN;
volatile int64_t x110 = INT64_MAX;
int16_t x117 = INT16_MIN;
int8_t x119 = 1;
uint32_t x120 = 1U;
uint32_t x127 = 1984489U;
volatile int32_t t31 = -955078844;
int32_t x131 = INT32_MAX;
int32_t t33 = -103414835;
int32_t x138 = INT32_MIN;
int8_t x141 = 0;
int16_t x142 = INT16_MAX;
int16_t x144 = INT16_MIN;
uint64_t x149 = 1931391044571LLU;
int32_t x152 = 262;
uint16_t x158 = 5678U;
int8_t x159 = INT8_MAX;
uint64_t x160 = 174722327821274939LLU;
uint16_t x166 = UINT16_MAX;
volatile int32_t t41 = -1917;
volatile int64_t x175 = -1LL;
volatile uint16_t x176 = 13U;
int8_t x177 = INT8_MAX;
uint16_t x178 = 29278U;
static int16_t x179 = 734;
int32_t x181 = INT32_MIN;
int32_t t45 = 0;
volatile int64_t x185 = 79935863969LL;
int16_t x200 = -1;
int32_t t50 = 688;
uint16_t x212 = UINT16_MAX;
int32_t t52 = 6;
int32_t t53 = 1;
uint16_t x226 = UINT16_MAX;
static volatile int32_t t54 = 1;
static int64_t x229 = 4LL;
volatile int32_t t55 = -95;
int8_t x235 = INT8_MIN;
volatile int32_t x243 = -1068946483;
volatile int32_t t58 = 5;
int32_t t59 = 13779864;
static volatile int32_t t60 = 319439;
static int16_t x253 = 1;
uint16_t x256 = 14660U;
int16_t x258 = 423;
volatile int32_t t62 = -54863;
int32_t t63 = 3353954;
static volatile uint64_t x270 = UINT64_MAX;
int32_t x273 = -498942329;
int16_t x274 = -1;
uint64_t x293 = 266872075058LLU;
volatile uint32_t x305 = UINT32_MAX;
volatile int32_t t73 = -7880;
volatile int32_t t74 = 3;
int16_t x315 = -534;
static int64_t x324 = -3216LL;
static volatile int8_t x326 = 0;
uint32_t x332 = 167264U;
uint32_t x334 = 0U;
int16_t x348 = -75;
uint16_t x352 = UINT16_MAX;
int32_t t85 = 518148;
uint16_t x363 = 9672U;
volatile int32_t t86 = -848443;
static uint16_t x365 = UINT16_MAX;
int32_t x369 = -1;
volatile int16_t x377 = INT16_MAX;
volatile int8_t x383 = INT8_MIN;
uint64_t x385 = 3199891928LLU;
volatile int32_t t92 = 14;
static uint32_t x394 = 8531U;
volatile int32_t t95 = -650;
volatile int16_t x401 = INT16_MAX;
volatile int16_t x404 = INT16_MIN;
int32_t t97 = -54;
int32_t t98 = 397;
volatile int8_t x413 = INT8_MIN;
volatile int8_t x414 = -1;
int32_t x417 = 26097495;
static int32_t x423 = INT32_MIN;
int16_t x424 = 15;
uint64_t x426 = UINT64_MAX;
volatile int32_t x428 = -720;
static int64_t x429 = INT64_MAX;
int64_t x438 = INT64_MIN;
uint32_t x440 = 376U;
int64_t x443 = 66044LL;
int32_t x459 = INT32_MIN;
uint16_t x465 = 114U;
int8_t x467 = INT8_MAX;
volatile int16_t x468 = -1;
int16_t x469 = -1;
int8_t x470 = INT8_MIN;
int16_t x471 = INT16_MIN;
static uint32_t x482 = 1U;
volatile int32_t t115 = 1;
volatile uint16_t x497 = 0U;
static int16_t x502 = INT16_MAX;
static int8_t x503 = INT8_MIN;
int16_t x504 = -1;
int32_t x515 = INT32_MIN;
int32_t t123 = 14;
volatile uint32_t x523 = UINT32_MAX;
static uint64_t x532 = 935095259745LLU;
int64_t x537 = INT64_MAX;
static uint16_t x542 = UINT16_MAX;
int16_t x543 = 13;
volatile int32_t t130 = -35738620;
volatile int64_t x551 = INT64_MAX;
int16_t x552 = INT16_MIN;
static uint8_t x560 = UINT8_MAX;
int8_t x562 = 30;
uint64_t x570 = 175023106535LLU;
int8_t x572 = INT8_MIN;
uint8_t x575 = 6U;
int8_t x584 = INT8_MAX;
volatile uint32_t x586 = 98U;
static uint64_t x591 = 685LLU;
int32_t t142 = -27773;
uint32_t x597 = 24U;
volatile uint16_t x598 = 0U;
int8_t x601 = INT8_MAX;
uint16_t x602 = UINT16_MAX;
int64_t x605 = INT64_MAX;
int16_t x611 = INT16_MAX;
int8_t x614 = INT8_MIN;
int8_t x625 = INT8_MIN;
volatile int16_t x626 = INT16_MIN;
int32_t t150 = -3;
int16_t x635 = 5659;
volatile int32_t t152 = -59410;
int32_t x638 = INT32_MIN;
int32_t t153 = -12700;
static volatile uint64_t x645 = UINT64_MAX;
static int32_t x646 = INT32_MIN;
int32_t x647 = INT32_MAX;
uint64_t x654 = 496806574080561051LLU;
uint8_t x655 = UINT8_MAX;
uint32_t x656 = UINT32_MAX;
volatile int8_t x663 = -1;
int16_t x671 = -169;
uint64_t x674 = 502166798565LLU;
static int32_t x681 = 7;
volatile int64_t x683 = -600LL;
static int16_t x684 = -849;
volatile int32_t t164 = -125138721;
volatile int64_t x686 = -283506134243923057LL;
int32_t t166 = 3054392;
int64_t x703 = -20126017580027LL;
uint32_t x705 = 33678367U;
static volatile uint16_t x706 = 147U;
volatile uint64_t x707 = 397LLU;
int8_t x709 = 5;
uint64_t x711 = 847476103113LLU;
int32_t t174 = -47049581;
int32_t t176 = 6;
int8_t x741 = INT8_MIN;
int16_t x752 = INT16_MAX;
int8_t x756 = INT8_MIN;
volatile int64_t x760 = INT64_MIN;
int32_t t183 = 4;
uint64_t x764 = UINT64_MAX;
static volatile int32_t x765 = -1;
int8_t x767 = INT8_MIN;
volatile int32_t t188 = -55073;
int64_t x785 = -1LL;
volatile uint64_t x791 = UINT64_MAX;
int32_t t191 = -277017324;
volatile int8_t x799 = -1;
volatile int32_t t193 = 15115827;
int64_t x804 = INT64_MIN;
int32_t x807 = INT32_MIN;
static volatile int32_t t196 = 52517;
int64_t x818 = -1LL;


void f0(void) {
    	int8_t x1 = -5;
	uint64_t x2 = 4369788004793034LLU;
	uint32_t x3 = 299728U;
	int8_t x4 = -1;
	int32_t t0 = 167574101;

    t0 = ((x1>x2)>(x3%x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = UINT64_MAX;
	uint64_t x6 = 93018091272292LLU;
	int32_t x7 = INT32_MAX;
	volatile int32_t t1 = -116;

    t1 = ((x5>x6)>(x7%x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = -1;
	volatile int32_t x10 = -1;
	uint64_t x11 = 581324287464299021LLU;
	uint16_t x12 = 237U;
	int32_t t2 = 2;

    t2 = ((x9>x10)>(x11%x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	volatile uint16_t x14 = 76U;
	uint32_t x15 = 697619308U;
	uint32_t x16 = 155676U;
	int32_t t3 = -15;

    t3 = ((x13>x14)>(x15%x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x17 = 49U;
	int8_t x18 = -1;
	int64_t x19 = INT64_MIN;
	int32_t t4 = 1;

    t4 = ((x17>x18)>(x19%x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x21 = -1342;
	uint32_t x22 = 11575U;
	static volatile uint32_t x23 = 81804U;
	int32_t x24 = -1;
	static int32_t t5 = -466968;

    t5 = ((x21>x22)>(x23%x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = UINT64_MAX;
	uint32_t x26 = 1U;
	int32_t x27 = -1;
	int64_t x28 = 13186322022808146LL;
	int32_t t6 = 3377;

    t6 = ((x25>x26)>(x27%x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x31 = -6552876428LL;
	int8_t x32 = INT8_MIN;
	volatile int32_t t7 = -575889253;

    t7 = ((x29>x30)>(x31%x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile uint8_t x33 = UINT8_MAX;
	int32_t x34 = -1;
	volatile uint8_t x35 = 2U;
	static volatile int16_t x36 = 11975;
	int32_t t8 = -1126237;

    t8 = ((x33>x34)>(x35%x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = -6;
	static volatile int8_t x38 = INT8_MIN;
	int8_t x39 = 26;

    t9 = ((x37>x38)>(x39%x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x41 = INT8_MIN;
	static volatile int32_t x42 = 2;
	int16_t x43 = 1244;
	static uint64_t x44 = UINT64_MAX;
	int32_t t10 = 20916;

    t10 = ((x41>x42)>(x43%x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x45 = 5U;
	int8_t x46 = INT8_MIN;
	int32_t x47 = -1;

    t11 = ((x45>x46)>(x47%x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x49 = 438U;
	int16_t x50 = -538;
	int8_t x52 = INT8_MIN;
	static int32_t t12 = -54954321;

    t12 = ((x49>x50)>(x51%x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = INT32_MAX;
	int32_t x54 = -235777;
	int16_t x56 = INT16_MIN;

    t13 = ((x53>x54)>(x55%x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x57 = 6289U;
	int64_t x58 = -1LL;
	volatile int16_t x59 = 2;
	int16_t x60 = -1;
	volatile int32_t t14 = -222;

    t14 = ((x57>x58)>(x59%x60));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = -1;
	uint64_t x62 = UINT64_MAX;
	int64_t x63 = -172487650238LL;
	volatile int32_t t15 = 29408725;

    t15 = ((x61>x62)>(x63%x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t x65 = 186690106636LLU;
	volatile uint32_t x66 = 17U;
	static uint8_t x68 = 29U;
	int32_t t16 = -18466;

    t16 = ((x65>x66)>(x67%x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint16_t x69 = 336U;
	int32_t x70 = INT32_MIN;
	volatile int8_t x72 = 10;
	volatile int32_t t17 = 6;

    t17 = ((x69>x70)>(x71%x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = INT64_MIN;
	static int16_t x74 = 15;
	static int32_t t18 = 59650056;

    t18 = ((x73>x74)>(x75%x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x78 = INT32_MAX;
	int64_t x79 = INT64_MIN;
	volatile int32_t x80 = -1;
	int32_t t19 = -430732;

    t19 = ((x77>x78)>(x79%x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int64_t x81 = -1LL;
	int64_t x82 = -1LL;
	int8_t x83 = 42;
	volatile int32_t x84 = INT32_MIN;
	int32_t t20 = -5741;

    t20 = ((x81>x82)>(x83%x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x85 = UINT8_MAX;
	volatile int16_t x87 = INT16_MIN;
	int16_t x88 = -1;
	int32_t t21 = -31502331;

    t21 = ((x85>x86)>(x87%x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x89 = 2244;
	volatile int16_t x90 = 2;
	int16_t x91 = INT16_MAX;
	volatile int32_t x92 = INT32_MIN;
	volatile int32_t t22 = -9;

    t22 = ((x89>x90)>(x91%x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint8_t x93 = 7U;
	int64_t x94 = INT64_MIN;
	static uint32_t x95 = 1455070U;
	static int64_t x96 = INT64_MIN;
	static volatile int32_t t23 = 14429;

    t23 = ((x93>x94)>(x95%x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = INT64_MAX;
	static uint32_t x98 = 106U;
	int64_t x99 = INT64_MIN;
	volatile int32_t t24 = 4;

    t24 = ((x97>x98)>(x99%x100));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x101 = 255638625U;
	int8_t x102 = INT8_MIN;
	uint64_t x103 = UINT64_MAX;
	int16_t x104 = -3869;

    t25 = ((x101>x102)>(x103%x104));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int32_t x105 = -1;
	volatile int64_t x106 = -4154605359402974026LL;
	uint8_t x107 = 26U;
	volatile int32_t t26 = 34;

    t26 = ((x105>x106)>(x107%x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint16_t x111 = 31U;
	int8_t x112 = -1;
	volatile int32_t t27 = -11125946;

    t27 = ((x109>x110)>(x111%x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = INT64_MIN;
	volatile int64_t x114 = -1LL;
	int8_t x115 = INT8_MIN;
	volatile int64_t x116 = INT64_MIN;
	int32_t t28 = -4;

    t28 = ((x113>x114)>(x115%x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x118 = INT64_MIN;
	int32_t t29 = -3777789;

    t29 = ((x117>x118)>(x119%x120));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x121 = UINT64_MAX;
	int8_t x122 = 1;
	int32_t x123 = -1;
	int16_t x124 = 3;
	volatile int32_t t30 = -9447;

    t30 = ((x121>x122)>(x123%x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x125 = 106744329224LLU;
	volatile int16_t x126 = INT16_MIN;
	int32_t x128 = -233;

    t31 = ((x125>x126)>(x127%x128));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = 1030;
	int64_t x130 = 65965351LL;
	uint16_t x132 = 254U;
	static int32_t t32 = 765;

    t32 = ((x129>x130)>(x131%x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x133 = -1693;
	volatile int64_t x134 = -1LL;
	int32_t x135 = -1;
	volatile int8_t x136 = -1;

    t33 = ((x133>x134)>(x135%x136));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = 11747LL;
	volatile uint64_t x139 = 434696LLU;
	static uint32_t x140 = 50535742U;
	static volatile int32_t t34 = -207923;

    t34 = ((x137>x138)>(x139%x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x143 = 21165U;
	volatile int32_t t35 = -305303096;

    t35 = ((x141>x142)>(x143%x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x145 = -1;
	uint8_t x146 = 18U;
	int16_t x147 = INT16_MIN;
	uint64_t x148 = 18610949132LLU;
	int32_t t36 = 65947;

    t36 = ((x145>x146)>(x147%x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x150 = 126123;
	static uint8_t x151 = UINT8_MAX;
	volatile int32_t t37 = -35384852;

    t37 = ((x149>x150)>(x151%x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x153 = INT8_MIN;
	int8_t x154 = -6;
	volatile int64_t x155 = -1LL;
	int64_t x156 = INT64_MAX;
	static int32_t t38 = -416;

    t38 = ((x153>x154)>(x155%x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x157 = UINT32_MAX;
	int32_t t39 = 632510;

    t39 = ((x157>x158)>(x159%x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = INT16_MIN;
	uint16_t x162 = 3U;
	uint64_t x163 = 185320485511845LLU;
	uint8_t x164 = UINT8_MAX;
	int32_t t40 = -218427205;

    t40 = ((x161>x162)>(x163%x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = INT64_MIN;
	uint32_t x167 = 2548U;
	uint8_t x168 = 42U;

    t41 = ((x165>x166)>(x167%x168));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = 2419607;
	uint8_t x170 = 5U;
	volatile int32_t x171 = INT32_MIN;
	static uint8_t x172 = UINT8_MAX;
	volatile int32_t t42 = 1;

    t42 = ((x169>x170)>(x171%x172));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = INT8_MAX;
	int8_t x174 = INT8_MIN;
	static volatile int32_t t43 = 4011538;

    t43 = ((x173>x174)>(x175%x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x180 = 1;
	volatile int32_t t44 = 0;

    t44 = ((x177>x178)>(x179%x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x182 = INT64_MAX;
	int16_t x183 = -6;
	int32_t x184 = INT32_MIN;

    t45 = ((x181>x182)>(x183%x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x186 = INT32_MIN;
	uint64_t x187 = UINT64_MAX;
	static int64_t x188 = INT64_MIN;
	volatile int32_t t46 = 299760800;

    t46 = ((x185>x186)>(x187%x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = INT16_MIN;
	int32_t x190 = -11197;
	static int64_t x191 = INT64_MAX;
	volatile int8_t x192 = -1;
	static int32_t t47 = 1064619683;

    t47 = ((x189>x190)>(x191%x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint64_t x197 = 69784559121475801LLU;
	volatile int64_t x198 = 30223515797335LL;
	int32_t x199 = -1;
	volatile int32_t t48 = 167;

    t48 = ((x197>x198)>(x199%x200));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x201 = INT32_MIN;
	uint8_t x202 = UINT8_MAX;
	static volatile int16_t x203 = INT16_MIN;
	volatile int16_t x204 = INT16_MIN;
	static int32_t t49 = 489;

    t49 = ((x201>x202)>(x203%x204));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x205 = 9403U;
	int16_t x206 = INT16_MIN;
	int64_t x207 = INT64_MIN;
	int64_t x208 = 1882870475025319014LL;

    t50 = ((x205>x206)>(x207%x208));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int16_t x209 = -1;
	int8_t x210 = INT8_MIN;
	uint64_t x211 = UINT64_MAX;
	static volatile int32_t t51 = 50257;

    t51 = ((x209>x210)>(x211%x212));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x213 = INT64_MIN;
	int8_t x214 = 13;
	int8_t x215 = INT8_MAX;
	int16_t x216 = -1;

    t52 = ((x213>x214)>(x215%x216));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile uint32_t x217 = 1195879463U;
	int16_t x218 = -1;
	static volatile int64_t x219 = -7949323LL;
	int32_t x220 = -1;

    t53 = ((x217>x218)>(x219%x220));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x225 = INT8_MIN;
	int8_t x227 = -8;
	volatile uint16_t x228 = UINT16_MAX;

    t54 = ((x225>x226)>(x227%x228));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x230 = INT64_MIN;
	uint16_t x231 = 1867U;
	int32_t x232 = -1;

    t55 = ((x229>x230)>(x231%x232));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x233 = INT16_MAX;
	uint32_t x234 = UINT32_MAX;
	static int32_t x236 = INT32_MIN;
	static int32_t t56 = -173695;

    t56 = ((x233>x234)>(x235%x236));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x237 = INT8_MIN;
	int8_t x238 = -14;
	int32_t x239 = -1194386;
	uint8_t x240 = 93U;
	volatile int32_t t57 = 1072838971;

    t57 = ((x237>x238)>(x239%x240));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x241 = INT16_MIN;
	uint32_t x242 = UINT32_MAX;
	static uint16_t x244 = 1U;

    t58 = ((x241>x242)>(x243%x244));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x245 = 383448U;
	int32_t x246 = INT32_MAX;
	uint8_t x247 = 3U;
	volatile int16_t x248 = -1;

    t59 = ((x245>x246)>(x247%x248));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x249 = -4189454240610745LL;
	static int8_t x250 = INT8_MIN;
	uint8_t x251 = 11U;
	static uint16_t x252 = 920U;

    t60 = ((x249>x250)>(x251%x252));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int8_t x254 = 1;
	uint32_t x255 = 12524201U;
	volatile int32_t t61 = 118318677;

    t61 = ((x253>x254)>(x255%x256));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x257 = -380770336452144LL;
	int32_t x259 = INT32_MIN;
	volatile int16_t x260 = INT16_MAX;

    t62 = ((x257>x258)>(x259%x260));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x261 = INT16_MIN;
	uint32_t x262 = 1770U;
	uint64_t x263 = UINT64_MAX;
	uint32_t x264 = 2238655U;

    t63 = ((x261>x262)>(x263%x264));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x265 = -2;
	int32_t x266 = -1;
	uint8_t x267 = 22U;
	int16_t x268 = -1;
	volatile int32_t t64 = 657622749;

    t64 = ((x265>x266)>(x267%x268));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x269 = -1;
	int64_t x271 = INT64_MAX;
	int16_t x272 = -16;
	volatile int32_t t65 = 6;

    t65 = ((x269>x270)>(x271%x272));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x275 = INT16_MIN;
	int8_t x276 = INT8_MIN;
	int32_t t66 = 7;

    t66 = ((x273>x274)>(x275%x276));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint64_t x277 = 1LLU;
	int8_t x278 = INT8_MIN;
	uint32_t x279 = 15658U;
	uint64_t x280 = 53283048LLU;
	volatile int32_t t67 = 423787;

    t67 = ((x277>x278)>(x279%x280));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x281 = 1093U;
	uint16_t x282 = 2U;
	uint8_t x283 = 0U;
	int16_t x284 = INT16_MIN;
	int32_t t68 = 802768;

    t68 = ((x281>x282)>(x283%x284));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x285 = UINT16_MAX;
	int8_t x286 = INT8_MIN;
	volatile int32_t x287 = INT32_MIN;
	volatile uint16_t x288 = 2U;
	int32_t t69 = -14150302;

    t69 = ((x285>x286)>(x287%x288));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x294 = 13U;
	uint8_t x295 = 24U;
	int64_t x296 = 999260704LL;
	int32_t t70 = -109309;

    t70 = ((x293>x294)>(x295%x296));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x297 = 229U;
	int16_t x298 = INT16_MIN;
	int32_t x299 = INT32_MIN;
	uint64_t x300 = 1454039257146372501LLU;
	int32_t t71 = -248;

    t71 = ((x297>x298)>(x299%x300));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x301 = -1;
	static int16_t x302 = -1;
	uint8_t x303 = 12U;
	int16_t x304 = INT16_MAX;
	static int32_t t72 = -6601;

    t72 = ((x301>x302)>(x303%x304));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x306 = 33642148716958LLU;
	uint64_t x307 = UINT64_MAX;
	static uint8_t x308 = 49U;

    t73 = ((x305>x306)>(x307%x308));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x309 = 924523408727707LLU;
	int64_t x310 = INT64_MIN;
	static volatile int8_t x311 = INT8_MIN;
	int8_t x312 = INT8_MIN;

    t74 = ((x309>x310)>(x311%x312));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x313 = INT32_MIN;
	static volatile int64_t x314 = -7LL;
	int64_t x316 = -1LL;
	int32_t t75 = 0;

    t75 = ((x313>x314)>(x315%x316));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint32_t x317 = 690958960U;
	int8_t x318 = INT8_MAX;
	uint16_t x319 = UINT16_MAX;
	static int64_t x320 = INT64_MIN;
	volatile int32_t t76 = -15743041;

    t76 = ((x317>x318)>(x319%x320));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int64_t x321 = -1LL;
	static int16_t x322 = INT16_MAX;
	int8_t x323 = INT8_MIN;
	int32_t t77 = -63112;

    t77 = ((x321>x322)>(x323%x324));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x325 = INT32_MIN;
	uint16_t x327 = 8264U;
	int8_t x328 = INT8_MIN;
	int32_t t78 = -45;

    t78 = ((x325>x326)>(x327%x328));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x329 = 332LLU;
	int32_t x330 = -1;
	uint8_t x331 = UINT8_MAX;
	int32_t t79 = 4;

    t79 = ((x329>x330)>(x331%x332));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x333 = INT32_MAX;
	uint8_t x335 = 96U;
	uint64_t x336 = 599841303LLU;
	static volatile int32_t t80 = 511;

    t80 = ((x333>x334)>(x335%x336));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x337 = INT16_MAX;
	volatile uint32_t x338 = UINT32_MAX;
	int64_t x339 = -1LL;
	uint16_t x340 = 3620U;
	int32_t t81 = 44167081;

    t81 = ((x337>x338)>(x339%x340));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x341 = INT16_MIN;
	static uint8_t x342 = UINT8_MAX;
	volatile uint32_t x343 = 137U;
	int8_t x344 = 18;
	static int32_t t82 = -888967;

    t82 = ((x341>x342)>(x343%x344));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x345 = INT64_MIN;
	int32_t x346 = 134;
	int8_t x347 = -3;
	volatile int32_t t83 = -603260435;

    t83 = ((x345>x346)>(x347%x348));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint64_t x349 = 53404885LLU;
	int64_t x350 = -6648922137234650LL;
	static int32_t x351 = INT32_MIN;
	static volatile int32_t t84 = -3620453;

    t84 = ((x349>x350)>(x351%x352));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x357 = UINT64_MAX;
	uint8_t x358 = UINT8_MAX;
	volatile uint64_t x359 = UINT64_MAX;
	volatile int8_t x360 = INT8_MIN;

    t85 = ((x357>x358)>(x359%x360));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x361 = 26U;
	uint16_t x362 = 52U;
	int32_t x364 = INT32_MIN;

    t86 = ((x361>x362)>(x363%x364));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x366 = INT16_MAX;
	uint16_t x367 = 166U;
	uint32_t x368 = UINT32_MAX;
	int32_t t87 = 52;

    t87 = ((x365>x366)>(x367%x368));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x370 = 226664481090177516LL;
	int8_t x371 = INT8_MIN;
	uint8_t x372 = UINT8_MAX;
	static volatile int32_t t88 = 912714;

    t88 = ((x369>x370)>(x371%x372));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x373 = 26841877560762504LLU;
	static uint64_t x374 = UINT64_MAX;
	static int16_t x375 = -6;
	uint8_t x376 = 1U;
	static int32_t t89 = 4626327;

    t89 = ((x373>x374)>(x375%x376));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x378 = -1;
	int8_t x379 = INT8_MIN;
	int16_t x380 = INT16_MIN;
	int32_t t90 = 62119;

    t90 = ((x377>x378)>(x379%x380));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x381 = INT16_MIN;
	uint32_t x382 = 581U;
	uint16_t x384 = UINT16_MAX;
	volatile int32_t t91 = 202718;

    t91 = ((x381>x382)>(x383%x384));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x386 = INT32_MIN;
	uint32_t x387 = 16316285U;
	volatile int8_t x388 = -25;

    t92 = ((x385>x386)>(x387%x388));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x389 = INT16_MAX;
	int32_t x390 = INT32_MAX;
	int16_t x391 = -6696;
	static int8_t x392 = -2;
	int32_t t93 = 366524;

    t93 = ((x389>x390)>(x391%x392));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x393 = -1;
	uint32_t x395 = 1044437U;
	uint32_t x396 = 41U;
	volatile int32_t t94 = 871461101;

    t94 = ((x393>x394)>(x395%x396));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x397 = INT32_MIN;
	int32_t x398 = -1295;
	int64_t x399 = INT64_MIN;
	volatile int32_t x400 = INT32_MAX;

    t95 = ((x397>x398)>(x399%x400));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x402 = INT32_MIN;
	volatile int64_t x403 = INT64_MAX;
	volatile int32_t t96 = 728472;

    t96 = ((x401>x402)>(x403%x404));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint64_t x405 = UINT64_MAX;
	int64_t x406 = INT64_MAX;
	int8_t x407 = -2;
	static uint32_t x408 = 24774U;

    t97 = ((x405>x406)>(x407%x408));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x409 = 3987U;
	uint32_t x410 = 9U;
	volatile int16_t x411 = 135;
	static uint16_t x412 = 222U;

    t98 = ((x409>x410)>(x411%x412));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x415 = INT32_MIN;
	int8_t x416 = INT8_MAX;
	int32_t t99 = 25922982;

    t99 = ((x413>x414)>(x415%x416));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint32_t x418 = UINT32_MAX;
	int16_t x419 = -833;
	int32_t x420 = 10038549;
	int32_t t100 = -373898665;

    t100 = ((x417>x418)>(x419%x420));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint8_t x421 = 3U;
	int16_t x422 = INT16_MIN;
	int32_t t101 = 971977995;

    t101 = ((x421>x422)>(x423%x424));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x425 = INT8_MAX;
	static uint8_t x427 = UINT8_MAX;
	int32_t t102 = -1847585;

    t102 = ((x425>x426)>(x427%x428));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x430 = INT64_MIN;
	int16_t x431 = INT16_MAX;
	volatile int16_t x432 = -5825;
	static int32_t t103 = -9148;

    t103 = ((x429>x430)>(x431%x432));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x433 = 100;
	volatile int16_t x434 = -1;
	int32_t x435 = -1;
	static int8_t x436 = INT8_MIN;
	volatile int32_t t104 = -6414;

    t104 = ((x433>x434)>(x435%x436));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x437 = -1;
	volatile int64_t x439 = 140827224984LL;
	volatile int32_t t105 = 8152956;

    t105 = ((x437>x438)>(x439%x440));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x441 = INT32_MIN;
	volatile int8_t x442 = INT8_MIN;
	int32_t x444 = -1;
	volatile int32_t t106 = -947;

    t106 = ((x441>x442)>(x443%x444));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int32_t x445 = INT32_MIN;
	volatile uint64_t x446 = 518LLU;
	volatile int32_t x447 = -50595673;
	int32_t x448 = -11087;
	volatile int32_t t107 = -1399;

    t107 = ((x445>x446)>(x447%x448));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint32_t x449 = UINT32_MAX;
	static int32_t x450 = INT32_MAX;
	int64_t x451 = INT64_MAX;
	uint16_t x452 = 14006U;
	static int32_t t108 = 1;

    t108 = ((x449>x450)>(x451%x452));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint32_t x453 = 59U;
	int64_t x454 = -1LL;
	int16_t x455 = INT16_MIN;
	int16_t x456 = -41;
	volatile int32_t t109 = -4317070;

    t109 = ((x453>x454)>(x455%x456));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x457 = -123637108;
	uint32_t x458 = UINT32_MAX;
	static volatile uint8_t x460 = 127U;
	int32_t t110 = 819755571;

    t110 = ((x457>x458)>(x459%x460));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x461 = INT16_MAX;
	int32_t x462 = INT32_MIN;
	static volatile uint32_t x463 = 0U;
	static uint64_t x464 = 21228LLU;
	volatile int32_t t111 = -625;

    t111 = ((x461>x462)>(x463%x464));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x466 = -854LL;
	volatile int32_t t112 = -365027594;

    t112 = ((x465>x466)>(x467%x468));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint64_t x472 = 564961588LLU;
	int32_t t113 = 13092244;

    t113 = ((x469>x470)>(x471%x472));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint8_t x473 = 1U;
	volatile int8_t x474 = -1;
	int16_t x475 = -1;
	int32_t x476 = -1;
	static volatile int32_t t114 = 15777298;

    t114 = ((x473>x474)>(x475%x476));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x481 = UINT64_MAX;
	uint64_t x483 = 4880368292LLU;
	uint8_t x484 = UINT8_MAX;

    t115 = ((x481>x482)>(x483%x484));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint32_t x485 = 1663640105U;
	int8_t x486 = INT8_MIN;
	int8_t x487 = -1;
	volatile uint8_t x488 = UINT8_MAX;
	int32_t t116 = -228266777;

    t116 = ((x485>x486)>(x487%x488));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x489 = -11;
	int16_t x490 = INT16_MIN;
	int32_t x491 = 136;
	uint32_t x492 = UINT32_MAX;
	int32_t t117 = -4;

    t117 = ((x489>x490)>(x491%x492));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x493 = INT16_MIN;
	int8_t x494 = -6;
	volatile int16_t x495 = 0;
	int16_t x496 = INT16_MAX;
	int32_t t118 = 72;

    t118 = ((x493>x494)>(x495%x496));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x498 = INT32_MIN;
	uint16_t x499 = 3478U;
	uint16_t x500 = UINT16_MAX;
	volatile int32_t t119 = -1;

    t119 = ((x497>x498)>(x499%x500));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x501 = INT32_MIN;
	int32_t t120 = 10107587;

    t120 = ((x501>x502)>(x503%x504));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x509 = INT16_MIN;
	int32_t x510 = -1;
	uint8_t x511 = 114U;
	int32_t x512 = 1;
	volatile int32_t t121 = -6202;

    t121 = ((x509>x510)>(x511%x512));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x513 = -1LL;
	uint16_t x514 = 84U;
	uint16_t x516 = UINT16_MAX;
	int32_t t122 = -366666;

    t122 = ((x513>x514)>(x515%x516));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int64_t x517 = INT64_MAX;
	uint64_t x518 = UINT64_MAX;
	uint8_t x519 = 1U;
	int32_t x520 = INT32_MIN;

    t123 = ((x517>x518)>(x519%x520));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x521 = INT8_MIN;
	int64_t x522 = -1LL;
	volatile int8_t x524 = INT8_MIN;
	volatile int32_t t124 = 431;

    t124 = ((x521>x522)>(x523%x524));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x525 = -94692576798LL;
	int32_t x526 = INT32_MIN;
	int8_t x527 = INT8_MIN;
	int8_t x528 = -13;
	volatile int32_t t125 = 201599840;

    t125 = ((x525>x526)>(x527%x528));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x529 = INT8_MIN;
	int8_t x530 = INT8_MIN;
	uint8_t x531 = 16U;
	static int32_t t126 = -1589789;

    t126 = ((x529>x530)>(x531%x532));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x533 = 19;
	volatile int64_t x534 = 316259942099354830LL;
	int8_t x535 = INT8_MAX;
	uint16_t x536 = UINT16_MAX;
	static int32_t t127 = -10950;

    t127 = ((x533>x534)>(x535%x536));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x538 = 3447827094419828888LLU;
	volatile int64_t x539 = INT64_MAX;
	uint64_t x540 = 7120202228420LLU;
	int32_t t128 = 91193481;

    t128 = ((x537>x538)>(x539%x540));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x541 = INT64_MIN;
	static volatile int64_t x544 = -1LL;
	int32_t t129 = -129586068;

    t129 = ((x541>x542)>(x543%x544));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x545 = -1125;
	int16_t x546 = -1;
	int8_t x547 = INT8_MAX;
	int8_t x548 = INT8_MIN;

    t130 = ((x545>x546)>(x547%x548));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x549 = UINT64_MAX;
	int8_t x550 = INT8_MAX;
	volatile int32_t t131 = -959610;

    t131 = ((x549>x550)>(x551%x552));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x553 = INT16_MIN;
	int64_t x554 = -999781057005727LL;
	int64_t x555 = -1LL;
	int16_t x556 = -5179;
	volatile int32_t t132 = 25;

    t132 = ((x553>x554)>(x555%x556));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x557 = -356713990178LL;
	static volatile uint32_t x558 = UINT32_MAX;
	static int8_t x559 = -1;
	static volatile int32_t t133 = -1;

    t133 = ((x557>x558)>(x559%x560));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x561 = 1U;
	uint32_t x563 = 743301U;
	uint64_t x564 = 1819LLU;
	static volatile int32_t t134 = -1;

    t134 = ((x561>x562)>(x563%x564));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint16_t x565 = 61U;
	static int8_t x566 = INT8_MIN;
	static int64_t x567 = INT64_MIN;
	int16_t x568 = 1344;
	int32_t t135 = -65023779;

    t135 = ((x565>x566)>(x567%x568));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x569 = INT32_MAX;
	int8_t x571 = INT8_MAX;
	int32_t t136 = 562338912;

    t136 = ((x569>x570)>(x571%x572));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x573 = UINT8_MAX;
	int16_t x574 = 6191;
	uint64_t x576 = UINT64_MAX;
	volatile int32_t t137 = 10457730;

    t137 = ((x573>x574)>(x575%x576));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x577 = INT8_MIN;
	int8_t x578 = INT8_MIN;
	int16_t x579 = INT16_MIN;
	volatile int64_t x580 = -406890LL;
	static int32_t t138 = -7;

    t138 = ((x577>x578)>(x579%x580));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x581 = 539LL;
	uint64_t x582 = 1LLU;
	int16_t x583 = 7373;
	static volatile int32_t t139 = 4;

    t139 = ((x581>x582)>(x583%x584));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x585 = UINT64_MAX;
	int8_t x587 = 5;
	volatile int16_t x588 = 666;
	volatile int32_t t140 = 54615665;

    t140 = ((x585>x586)>(x587%x588));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x589 = UINT16_MAX;
	int64_t x590 = -1LL;
	static int8_t x592 = INT8_MIN;
	volatile int32_t t141 = 2837792;

    t141 = ((x589>x590)>(x591%x592));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x593 = 1U;
	static int64_t x594 = -1LL;
	static uint16_t x595 = 17U;
	int16_t x596 = INT16_MIN;

    t142 = ((x593>x594)>(x595%x596));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint16_t x599 = UINT16_MAX;
	uint64_t x600 = 3669710LLU;
	volatile int32_t t143 = 7967;

    t143 = ((x597>x598)>(x599%x600));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x603 = 68U;
	uint64_t x604 = 10443048269917058LLU;
	volatile int32_t t144 = -483492328;

    t144 = ((x601>x602)>(x603%x604));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x606 = -1;
	int64_t x607 = INT64_MIN;
	volatile int8_t x608 = 3;
	static volatile int32_t t145 = -61716;

    t145 = ((x605>x606)>(x607%x608));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x609 = -1LL;
	int8_t x610 = -1;
	int64_t x612 = -25766243191LL;
	volatile int32_t t146 = 4;

    t146 = ((x609>x610)>(x611%x612));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x613 = INT64_MAX;
	int32_t x615 = -1;
	uint32_t x616 = 35364U;
	volatile int32_t t147 = 79045223;

    t147 = ((x613>x614)>(x615%x616));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x617 = INT8_MAX;
	uint32_t x618 = UINT32_MAX;
	int8_t x619 = -1;
	int32_t x620 = INT32_MIN;
	static int32_t t148 = -15762;

    t148 = ((x617>x618)>(x619%x620));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x621 = 4;
	volatile int16_t x622 = INT16_MIN;
	static int8_t x623 = INT8_MIN;
	uint64_t x624 = 33544606190597281LLU;
	int32_t t149 = -123;

    t149 = ((x621>x622)>(x623%x624));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x627 = 160LLU;
	uint32_t x628 = UINT32_MAX;

    t150 = ((x625>x626)>(x627%x628));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint16_t x629 = UINT16_MAX;
	int8_t x630 = INT8_MAX;
	int16_t x631 = INT16_MIN;
	uint32_t x632 = 50U;
	int32_t t151 = 2133785;

    t151 = ((x629>x630)>(x631%x632));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x633 = UINT64_MAX;
	int32_t x634 = INT32_MIN;
	uint16_t x636 = 3996U;

    t152 = ((x633>x634)>(x635%x636));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x637 = 22U;
	uint8_t x639 = 26U;
	static int16_t x640 = INT16_MAX;

    t153 = ((x637>x638)>(x639%x640));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x641 = -1;
	static volatile uint64_t x642 = 15504086383LLU;
	uint16_t x643 = 0U;
	uint16_t x644 = 927U;
	volatile int32_t t154 = 1;

    t154 = ((x641>x642)>(x643%x644));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x648 = -1LL;
	int32_t t155 = 515994893;

    t155 = ((x645>x646)>(x647%x648));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x649 = INT64_MIN;
	int64_t x650 = INT64_MIN;
	int8_t x651 = 1;
	uint64_t x652 = 90073356LLU;
	static volatile int32_t t156 = -36324304;

    t156 = ((x649>x650)>(x651%x652));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint8_t x653 = 41U;
	static int32_t t157 = -815;

    t157 = ((x653>x654)>(x655%x656));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x657 = INT8_MIN;
	uint16_t x658 = 5545U;
	uint64_t x659 = 1668LLU;
	int32_t x660 = 121;
	volatile int32_t t158 = -9336093;

    t158 = ((x657>x658)>(x659%x660));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x661 = 30;
	uint64_t x662 = 39347046402328LLU;
	volatile int32_t x664 = INT32_MIN;
	static volatile int32_t t159 = -920860;

    t159 = ((x661>x662)>(x663%x664));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x665 = 61417606330912LL;
	static int16_t x666 = -1;
	volatile int16_t x667 = -1;
	uint16_t x668 = 28U;
	volatile int32_t t160 = -514;

    t160 = ((x665>x666)>(x667%x668));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x669 = 5717U;
	volatile int64_t x670 = INT64_MAX;
	uint32_t x672 = UINT32_MAX;
	static int32_t t161 = 55720572;

    t161 = ((x669>x670)>(x671%x672));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x673 = INT32_MIN;
	static volatile int32_t x675 = -1;
	uint16_t x676 = UINT16_MAX;
	volatile int32_t t162 = 9142;

    t162 = ((x673>x674)>(x675%x676));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x677 = INT16_MIN;
	static int64_t x678 = -9451709LL;
	volatile int64_t x679 = INT64_MAX;
	int32_t x680 = -20;
	static volatile int32_t t163 = 36463;

    t163 = ((x677>x678)>(x679%x680));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint64_t x682 = 23382130LLU;

    t164 = ((x681>x682)>(x683%x684));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x685 = -1;
	static int8_t x687 = INT8_MIN;
	uint8_t x688 = 21U;
	static int32_t t165 = 6556423;

    t165 = ((x685>x686)>(x687%x688));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x689 = INT8_MIN;
	int8_t x690 = INT8_MIN;
	static uint16_t x691 = 16140U;
	volatile int16_t x692 = -34;

    t166 = ((x689>x690)>(x691%x692));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x693 = UINT64_MAX;
	volatile int16_t x694 = INT16_MIN;
	int64_t x695 = INT64_MIN;
	uint32_t x696 = 958004U;
	int32_t t167 = 0;

    t167 = ((x693>x694)>(x695%x696));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x697 = -177;
	uint16_t x698 = 1U;
	volatile uint32_t x699 = UINT32_MAX;
	int64_t x700 = INT64_MIN;
	int32_t t168 = -467;

    t168 = ((x697>x698)>(x699%x700));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x701 = UINT32_MAX;
	int8_t x702 = 0;
	volatile uint32_t x704 = 27759093U;
	int32_t t169 = 110315531;

    t169 = ((x701>x702)>(x703%x704));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x708 = INT64_MAX;
	volatile int32_t t170 = -31308;

    t170 = ((x705>x706)>(x707%x708));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x710 = 1;
	int32_t x712 = INT32_MIN;
	int32_t t171 = -10044;

    t171 = ((x709>x710)>(x711%x712));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int64_t x713 = -1LL;
	static volatile int16_t x714 = -1;
	static uint64_t x715 = UINT64_MAX;
	volatile uint16_t x716 = UINT16_MAX;
	int32_t t172 = -27822426;

    t172 = ((x713>x714)>(x715%x716));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint16_t x717 = 693U;
	int16_t x718 = -1;
	uint32_t x719 = UINT32_MAX;
	static volatile int64_t x720 = INT64_MAX;
	int32_t t173 = 2;

    t173 = ((x717>x718)>(x719%x720));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x721 = 1569U;
	int16_t x722 = INT16_MIN;
	volatile uint64_t x723 = 434290LLU;
	uint32_t x724 = UINT32_MAX;

    t174 = ((x721>x722)>(x723%x724));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x725 = INT32_MAX;
	int8_t x726 = INT8_MAX;
	int32_t x727 = INT32_MIN;
	int32_t x728 = INT32_MAX;
	int32_t t175 = 995603;

    t175 = ((x725>x726)>(x727%x728));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x729 = 0LL;
	static int8_t x730 = INT8_MIN;
	static uint64_t x731 = UINT64_MAX;
	static volatile int16_t x732 = -26;

    t176 = ((x729>x730)>(x731%x732));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x733 = INT8_MAX;
	static uint64_t x734 = 5360651LLU;
	int16_t x735 = INT16_MIN;
	int64_t x736 = INT64_MAX;
	static int32_t t177 = -454;

    t177 = ((x733>x734)>(x735%x736));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x737 = INT8_MAX;
	static int64_t x738 = INT64_MIN;
	uint16_t x739 = UINT16_MAX;
	volatile int16_t x740 = INT16_MIN;
	int32_t t178 = -4794;

    t178 = ((x737>x738)>(x739%x740));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x742 = -1;
	volatile int16_t x743 = INT16_MIN;
	uint64_t x744 = UINT64_MAX;
	volatile int32_t t179 = -156612298;

    t179 = ((x741>x742)>(x743%x744));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x745 = INT16_MIN;
	static int32_t x746 = INT32_MAX;
	int32_t x747 = INT32_MAX;
	volatile int8_t x748 = 2;
	volatile int32_t t180 = -71146257;

    t180 = ((x745>x746)>(x747%x748));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x749 = 16U;
	static volatile uint64_t x750 = 42LLU;
	uint8_t x751 = UINT8_MAX;
	volatile int32_t t181 = 157051;

    t181 = ((x749>x750)>(x751%x752));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x753 = INT8_MAX;
	static int32_t x754 = -28175969;
	static int32_t x755 = -128899980;
	int32_t t182 = 16359;

    t182 = ((x753>x754)>(x755%x756));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x757 = INT16_MIN;
	uint32_t x758 = 41474058U;
	int64_t x759 = -53832461696LL;

    t183 = ((x757>x758)>(x759%x760));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x761 = INT32_MIN;
	volatile int32_t x762 = -4934984;
	int64_t x763 = INT64_MIN;
	int32_t t184 = 12707434;

    t184 = ((x761>x762)>(x763%x764));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x766 = 28716LL;
	uint16_t x768 = UINT16_MAX;
	volatile int32_t t185 = 42744858;

    t185 = ((x765>x766)>(x767%x768));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x769 = -1;
	uint16_t x770 = 40U;
	uint16_t x771 = 1U;
	uint16_t x772 = UINT16_MAX;
	static volatile int32_t t186 = 1;

    t186 = ((x769>x770)>(x771%x772));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x773 = -1;
	int64_t x774 = INT64_MIN;
	static int8_t x775 = INT8_MAX;
	uint8_t x776 = UINT8_MAX;
	static volatile int32_t t187 = -33652;

    t187 = ((x773>x774)>(x775%x776));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x777 = INT64_MIN;
	volatile uint32_t x778 = 46995255U;
	volatile int32_t x779 = -1;
	int32_t x780 = -1;

    t188 = ((x777>x778)>(x779%x780));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int32_t x781 = -249261419;
	volatile int64_t x782 = INT64_MIN;
	int16_t x783 = INT16_MIN;
	int32_t x784 = 142841173;
	int32_t t189 = -366;

    t189 = ((x781>x782)>(x783%x784));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x786 = 459U;
	static int64_t x787 = 1LL;
	uint8_t x788 = 11U;
	volatile int32_t t190 = 0;

    t190 = ((x785>x786)>(x787%x788));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int32_t x789 = INT32_MIN;
	uint8_t x790 = UINT8_MAX;
	static uint16_t x792 = 16U;

    t191 = ((x789>x790)>(x791%x792));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x793 = 22;
	static int64_t x794 = 34970975167984191LL;
	int16_t x795 = -96;
	volatile int16_t x796 = INT16_MIN;
	int32_t t192 = 5;

    t192 = ((x793>x794)>(x795%x796));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x797 = INT8_MIN;
	volatile int64_t x798 = 217456634616840LL;
	static int32_t x800 = INT32_MIN;

    t193 = ((x797>x798)>(x799%x800));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x801 = INT64_MIN;
	uint64_t x802 = 0LLU;
	static uint32_t x803 = UINT32_MAX;
	int32_t t194 = -447;

    t194 = ((x801>x802)>(x803%x804));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x805 = INT16_MIN;
	int32_t x806 = 146;
	static int16_t x808 = 1950;
	int32_t t195 = 7632;

    t195 = ((x805>x806)>(x807%x808));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint8_t x809 = UINT8_MAX;
	int8_t x810 = -1;
	int8_t x811 = INT8_MIN;
	volatile uint16_t x812 = UINT16_MAX;

    t196 = ((x809>x810)>(x811%x812));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x813 = 1403797386894668LLU;
	uint64_t x814 = UINT64_MAX;
	int16_t x815 = -142;
	int64_t x816 = INT64_MIN;
	volatile int32_t t197 = 116968;

    t197 = ((x813>x814)>(x815%x816));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x817 = 17U;
	volatile int32_t x819 = -1;
	uint64_t x820 = 28354663364274LLU;
	volatile int32_t t198 = -23;

    t198 = ((x817>x818)>(x819%x820));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x821 = -8;
	int16_t x822 = INT16_MAX;
	static int32_t x823 = INT32_MIN;
	uint32_t x824 = UINT32_MAX;
	volatile int32_t t199 = 411709321;

    t199 = ((x821>x822)>(x823%x824));

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

