
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

static volatile int32_t t1 = 1;
volatile int16_t x9 = INT16_MIN;
volatile int32_t t2 = -95;
volatile int64_t x19 = 4185LL;
volatile int32_t t5 = -2255299;
volatile int32_t x27 = -5;
int32_t x31 = -1447;
volatile int32_t t8 = -15712918;
volatile int32_t x46 = -1955;
int32_t x48 = INT32_MIN;
static uint8_t x49 = 102U;
int8_t x52 = INT8_MIN;
uint64_t x58 = UINT64_MAX;
int32_t x62 = INT32_MIN;
int32_t t15 = -609443030;
uint64_t x65 = 0LLU;
uint16_t x66 = 2U;
int16_t x68 = INT16_MIN;
volatile int32_t t16 = 34512;
uint16_t x81 = 13U;
int32_t t20 = 3;
uint64_t x99 = 11880LLU;
volatile uint8_t x102 = 16U;
int32_t t25 = -2012934;
uint32_t x111 = 786U;
int32_t t26 = -101272;
int16_t x113 = INT16_MAX;
uint8_t x117 = UINT8_MAX;
uint8_t x121 = 0U;
int64_t x125 = INT64_MIN;
uint32_t x135 = 4U;
static uint64_t x136 = 2LLU;
int32_t t32 = 6;
static int64_t x137 = INT64_MAX;
static uint16_t x138 = 4484U;
int32_t t33 = 5246545;
uint64_t x142 = 46967232895845LLU;
int8_t x152 = 0;
volatile int32_t t36 = -95765;
int8_t x155 = INT8_MIN;
int32_t x162 = INT32_MIN;
volatile int32_t t39 = 11;
volatile int32_t t40 = 256401136;
volatile uint32_t x173 = UINT32_MAX;
static uint8_t x175 = 11U;
int32_t t41 = -1817318;
int32_t t42 = -52551;
int64_t x182 = -1200531717LL;
int64_t x186 = INT64_MIN;
int64_t x191 = 4504484853651618402LL;
volatile int32_t t47 = -164;
int32_t x205 = 8039690;
int64_t x208 = -448386365LL;
uint32_t x219 = 566U;
uint8_t x220 = UINT8_MAX;
int32_t t53 = 916287;
int32_t x225 = 2;
uint16_t x228 = UINT16_MAX;
int16_t x230 = INT16_MIN;
int64_t x232 = INT64_MAX;
volatile int32_t x234 = INT32_MIN;
volatile int64_t x242 = INT64_MAX;
volatile int32_t t59 = 2927341;
int32_t x249 = -1;
int32_t x251 = -1;
uint16_t x254 = UINT16_MAX;
static uint16_t x255 = UINT16_MAX;
volatile int32_t t61 = 3058228;
int32_t t64 = -1;
uint32_t x269 = 186U;
int32_t x271 = INT32_MIN;
int16_t x273 = 765;
volatile uint8_t x290 = UINT8_MAX;
static uint16_t x295 = 887U;
static int32_t t71 = -2333;
volatile uint32_t x297 = UINT32_MAX;
static int64_t x304 = INT64_MIN;
volatile int32_t t73 = -46668055;
volatile int16_t x306 = 756;
uint16_t x314 = UINT16_MAX;
static volatile int64_t x323 = INT64_MIN;
int16_t x328 = -6;
static volatile int64_t x331 = 3776310724861LL;
int64_t x333 = -3659957LL;
volatile int32_t t81 = 21;
volatile uint64_t x337 = 7606115027LLU;
int8_t x338 = -1;
uint64_t x341 = 201LLU;
int16_t x342 = INT16_MIN;
static int8_t x346 = 4;
int32_t x352 = INT32_MIN;
int16_t x356 = 3;
int8_t x365 = INT8_MIN;
volatile int64_t x369 = INT64_MAX;
uint64_t x370 = UINT64_MAX;
int16_t x374 = INT16_MIN;
int8_t x375 = INT8_MAX;
static volatile int8_t x377 = INT8_MIN;
volatile int32_t t92 = -26106;
static int64_t x382 = -729335LL;
int32_t x388 = -118;
volatile int32_t x389 = INT32_MIN;
int64_t x391 = INT64_MIN;
int16_t x400 = INT16_MAX;
int32_t t96 = -669;
static int64_t x407 = INT64_MIN;
int8_t x408 = INT8_MIN;
uint8_t x409 = 2U;
int32_t x414 = INT32_MAX;
int8_t x416 = INT8_MIN;
static uint64_t x422 = UINT64_MAX;
int8_t x426 = INT8_MIN;
int8_t x429 = INT8_MIN;
uint8_t x433 = 3U;
int8_t x434 = INT8_MAX;
uint16_t x438 = 7177U;
int32_t x440 = INT32_MAX;
uint16_t x442 = 22200U;
static uint8_t x444 = 49U;
volatile uint16_t x456 = 13776U;
int64_t x457 = INT64_MIN;
static uint8_t x461 = 6U;
int16_t x464 = 1696;
int8_t x465 = -29;
static int64_t x470 = 491456LL;
int64_t x475 = INT64_MIN;
int32_t x481 = INT32_MIN;
uint32_t x482 = UINT32_MAX;
int16_t x485 = 16;
int32_t x486 = -1;
static int32_t x490 = INT32_MAX;
volatile int64_t x491 = INT64_MAX;
int32_t x495 = INT32_MIN;
uint32_t x496 = 253935411U;
volatile uint32_t x499 = UINT32_MAX;
int64_t x522 = INT64_MIN;
int8_t x524 = INT8_MIN;
static int16_t x526 = -1;
volatile int8_t x527 = -2;
volatile int32_t t127 = -7451056;
int32_t x529 = -3360864;
volatile int8_t x532 = INT8_MAX;
int32_t t128 = -3988;
int32_t t130 = 3330;
int8_t x542 = INT8_MIN;
int64_t x545 = -86990172LL;
volatile int32_t t132 = -259922658;
uint64_t x551 = 28282365967079014LLU;
int8_t x560 = 11;
int32_t t135 = -154501;
int32_t x565 = 15444;
volatile int16_t x567 = -1;
int16_t x568 = INT16_MIN;
int16_t x569 = INT16_MAX;
int64_t x571 = -248627LL;
uint8_t x578 = 17U;
uint8_t x582 = 3U;
uint8_t x584 = 63U;
volatile int32_t t140 = -145;
static int16_t x592 = INT16_MIN;
uint16_t x595 = UINT16_MAX;
uint64_t x598 = 169495720924589LLU;
static int32_t t144 = 738;
volatile int32_t x602 = INT32_MIN;
volatile int32_t x616 = INT32_MAX;
static uint8_t x617 = 86U;
static volatile int64_t x618 = -4156336915649LL;
int32_t x620 = INT32_MIN;
uint64_t x621 = UINT64_MAX;
int32_t x645 = INT32_MAX;
volatile int32_t t154 = 1;
static uint8_t x654 = UINT8_MAX;
volatile int32_t x658 = 8554;
volatile int32_t t157 = 4885775;
static int32_t x665 = INT32_MAX;
int32_t x668 = 2146186;
static int64_t x670 = INT64_MIN;
int32_t t161 = -294;
int32_t x680 = INT32_MAX;
volatile int32_t t164 = -98661890;
uint16_t x692 = UINT16_MAX;
int8_t x693 = -1;
static int8_t x697 = INT8_MAX;
static uint8_t x698 = 5U;
static int32_t x704 = -115522;
static int16_t x705 = INT16_MIN;
int64_t x723 = 30723575LL;
static int32_t t174 = -1;
volatile int8_t x733 = INT8_MAX;
int32_t t177 = 51727;
volatile int16_t x746 = -1;
uint16_t x747 = UINT16_MAX;
static int8_t x750 = INT8_MAX;
uint32_t x766 = 1833457U;
uint64_t x769 = 500LLU;
int32_t x772 = 726851;
int32_t x773 = INT32_MIN;
volatile int32_t t186 = -1;
volatile int32_t t188 = 437;
volatile int64_t x785 = INT64_MAX;
int16_t x786 = 1;
static uint8_t x787 = 11U;
uint64_t x794 = 22LLU;
int32_t t191 = 651203967;
int16_t x806 = 2;
int64_t x807 = INT64_MIN;
int32_t t194 = 27356584;
uint32_t x812 = UINT32_MAX;
int64_t x823 = -1LL;
int32_t x825 = -1;
static uint64_t x828 = UINT64_MAX;


void f0(void) {
    	int32_t x1 = INT32_MAX;
	volatile int8_t x2 = INT8_MIN;
	volatile int64_t x3 = INT64_MAX;
	uint32_t x4 = 187U;
	int32_t t0 = 37470833;

    t0 = ((x1/x2)==(x3<=x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = UINT16_MAX;
	int32_t x6 = -1;
	int8_t x7 = INT8_MIN;
	int8_t x8 = INT8_MAX;

    t1 = ((x5/x6)==(x7<=x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x10 = INT32_MIN;
	int8_t x11 = INT8_MIN;
	int8_t x12 = INT8_MIN;

    t2 = ((x9/x10)==(x11<=x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x13 = 1;
	static int64_t x14 = INT64_MIN;
	uint8_t x15 = 6U;
	static int64_t x16 = -1LL;
	volatile int32_t t3 = -2;

    t3 = ((x13/x14)==(x15<=x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -1;
	static uint16_t x18 = 56U;
	static uint32_t x20 = 1207786707U;
	volatile int32_t t4 = -65183666;

    t4 = ((x17/x18)==(x19<=x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = UINT8_MAX;
	int16_t x22 = 1560;
	uint16_t x23 = UINT16_MAX;
	int8_t x24 = INT8_MIN;

    t5 = ((x21/x22)==(x23<=x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x25 = 1LL;
	static uint32_t x26 = 54534U;
	static int64_t x28 = INT64_MAX;
	int32_t t6 = -2;

    t6 = ((x25/x26)==(x27<=x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = UINT16_MAX;
	static volatile uint16_t x30 = UINT16_MAX;
	int8_t x32 = INT8_MIN;
	volatile int32_t t7 = -1;

    t7 = ((x29/x30)==(x31<=x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = INT32_MIN;
	int16_t x34 = INT16_MAX;
	int32_t x35 = 28280;
	static uint32_t x36 = 51123U;

    t8 = ((x33/x34)==(x35<=x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MAX;
	uint8_t x38 = UINT8_MAX;
	int8_t x39 = INT8_MIN;
	uint32_t x40 = 24U;
	volatile int32_t t9 = 3;

    t9 = ((x37/x38)==(x39<=x40));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint16_t x41 = UINT16_MAX;
	int64_t x42 = INT64_MIN;
	volatile int8_t x43 = INT8_MAX;
	static int32_t x44 = INT32_MIN;
	volatile int32_t t10 = -12009840;

    t10 = ((x41/x42)==(x43<=x44));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x45 = 8616636;
	int32_t x47 = INT32_MAX;
	int32_t t11 = -1;

    t11 = ((x45/x46)==(x47<=x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x50 = 9492LL;
	static volatile int32_t x51 = INT32_MAX;
	int32_t t12 = -213185;

    t12 = ((x49/x50)==(x51<=x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = 12945U;
	static int8_t x54 = 51;
	static volatile int64_t x55 = -1LL;
	int16_t x56 = -2930;
	int32_t t13 = 208136;

    t13 = ((x53/x54)==(x55<=x56));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = 31985LL;
	volatile int32_t x59 = -1;
	static volatile uint64_t x60 = UINT64_MAX;
	int32_t t14 = -13357578;

    t14 = ((x57/x58)==(x59<=x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x61 = INT32_MAX;
	volatile int16_t x63 = -201;
	int32_t x64 = INT32_MAX;

    t15 = ((x61/x62)==(x63<=x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x67 = -1LL;

    t16 = ((x65/x66)==(x67<=x68));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = -1340276332LL;
	volatile uint16_t x70 = 4U;
	int16_t x71 = -1;
	volatile int16_t x72 = INT16_MIN;
	volatile int32_t t17 = -1607897;

    t17 = ((x69/x70)==(x71<=x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x73 = 163U;
	static int32_t x74 = 1;
	static int32_t x75 = -1;
	uint8_t x76 = 96U;
	int32_t t18 = -10773;

    t18 = ((x73/x74)==(x75<=x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x77 = 3417U;
	int16_t x78 = 135;
	int16_t x79 = INT16_MAX;
	int16_t x80 = INT16_MAX;
	static int32_t t19 = -4;

    t19 = ((x77/x78)==(x79<=x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x82 = -2376308;
	uint64_t x83 = 547751374972946933LLU;
	uint64_t x84 = 6LLU;

    t20 = ((x81/x82)==(x83<=x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x85 = 74296398U;
	uint64_t x86 = 70747411234LLU;
	int8_t x87 = -1;
	uint16_t x88 = UINT16_MAX;
	volatile int32_t t21 = 179273;

    t21 = ((x85/x86)==(x87<=x88));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x93 = INT32_MAX;
	static int16_t x94 = INT16_MIN;
	uint64_t x95 = 703LLU;
	int64_t x96 = -1LL;
	int32_t t22 = -63;

    t22 = ((x93/x94)==(x95<=x96));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x97 = INT32_MIN;
	uint8_t x98 = UINT8_MAX;
	int64_t x100 = -3482366755727991LL;
	static int32_t t23 = 1;

    t23 = ((x97/x98)==(x99<=x100));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x101 = 7U;
	volatile int16_t x103 = 423;
	volatile int16_t x104 = INT16_MIN;
	volatile int32_t t24 = 637;

    t24 = ((x101/x102)==(x103<=x104));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x105 = -203;
	static volatile int64_t x106 = INT64_MIN;
	uint8_t x107 = 89U;
	uint16_t x108 = UINT16_MAX;

    t25 = ((x105/x106)==(x107<=x108));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x109 = INT32_MAX;
	int64_t x110 = -1LL;
	int32_t x112 = INT32_MIN;

    t26 = ((x109/x110)==(x111<=x112));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x114 = INT32_MIN;
	static int8_t x115 = INT8_MAX;
	uint16_t x116 = 321U;
	int32_t t27 = 95921;

    t27 = ((x113/x114)==(x115<=x116));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x118 = 2U;
	int32_t x119 = -1;
	static volatile uint32_t x120 = UINT32_MAX;
	static volatile int32_t t28 = 1;

    t28 = ((x117/x118)==(x119<=x120));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x122 = -1;
	int16_t x123 = -1;
	static int64_t x124 = -22LL;
	volatile int32_t t29 = 55971;

    t29 = ((x121/x122)==(x123<=x124));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x126 = -12;
	volatile int32_t x127 = -842507596;
	int16_t x128 = -1;
	int32_t t30 = -645254;

    t30 = ((x125/x126)==(x127<=x128));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x129 = INT16_MIN;
	uint16_t x130 = UINT16_MAX;
	static volatile int32_t x131 = 32820652;
	static int32_t x132 = -1;
	static int32_t t31 = -251422;

    t31 = ((x129/x130)==(x131<=x132));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x133 = INT16_MIN;
	int8_t x134 = -1;

    t32 = ((x133/x134)==(x135<=x136));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x139 = -1;
	int64_t x140 = INT64_MIN;

    t33 = ((x137/x138)==(x139<=x140));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int32_t x141 = -1;
	int16_t x143 = -38;
	volatile int16_t x144 = 15300;
	volatile int32_t t34 = -363803469;

    t34 = ((x141/x142)==(x143<=x144));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x145 = INT16_MAX;
	uint16_t x146 = 1U;
	static int16_t x147 = -1;
	int16_t x148 = -1;
	static volatile int32_t t35 = 1409270;

    t35 = ((x145/x146)==(x147<=x148));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x149 = UINT8_MAX;
	uint16_t x150 = UINT16_MAX;
	int8_t x151 = -1;

    t36 = ((x149/x150)==(x151<=x152));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x153 = 366U;
	uint8_t x154 = 2U;
	int64_t x156 = INT64_MIN;
	static int32_t t37 = 1;

    t37 = ((x153/x154)==(x155<=x156));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x157 = -1;
	volatile int16_t x158 = INT16_MAX;
	uint32_t x159 = 78756910U;
	int16_t x160 = -1;
	static int32_t t38 = 812368525;

    t38 = ((x157/x158)==(x159<=x160));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x161 = INT16_MIN;
	volatile int16_t x163 = -3404;
	static int32_t x164 = 121;

    t39 = ((x161/x162)==(x163<=x164));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x169 = INT64_MIN;
	static int32_t x170 = 284067;
	int16_t x171 = INT16_MAX;
	volatile int64_t x172 = INT64_MIN;

    t40 = ((x169/x170)==(x171<=x172));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x174 = INT16_MAX;
	int8_t x176 = -1;

    t41 = ((x173/x174)==(x175<=x176));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x177 = 680480055LLU;
	int16_t x178 = INT16_MIN;
	int32_t x179 = 220927868;
	int16_t x180 = INT16_MIN;

    t42 = ((x177/x178)==(x179<=x180));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint8_t x181 = 54U;
	volatile int64_t x183 = INT64_MIN;
	int32_t x184 = INT32_MAX;
	volatile int32_t t43 = -5;

    t43 = ((x181/x182)==(x183<=x184));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x185 = INT32_MIN;
	volatile uint64_t x187 = 3LLU;
	int32_t x188 = -99;
	volatile int32_t t44 = -94;

    t44 = ((x185/x186)==(x187<=x188));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint8_t x189 = UINT8_MAX;
	int8_t x190 = INT8_MIN;
	volatile int8_t x192 = 16;
	volatile int32_t t45 = -7232025;

    t45 = ((x189/x190)==(x191<=x192));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x193 = INT8_MAX;
	volatile int16_t x194 = 1;
	int8_t x195 = -1;
	static int32_t x196 = INT32_MIN;
	static int32_t t46 = 52106;

    t46 = ((x193/x194)==(x195<=x196));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x197 = 1U;
	int8_t x198 = INT8_MIN;
	uint64_t x199 = 45691365822LLU;
	uint8_t x200 = 24U;

    t47 = ((x197/x198)==(x199<=x200));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint8_t x201 = 14U;
	int64_t x202 = INT64_MIN;
	int64_t x203 = INT64_MAX;
	int32_t x204 = INT32_MIN;
	int32_t t48 = 13028832;

    t48 = ((x201/x202)==(x203<=x204));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x206 = INT32_MIN;
	int8_t x207 = -1;
	volatile int32_t t49 = -627;

    t49 = ((x205/x206)==(x207<=x208));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x209 = 7U;
	int16_t x210 = INT16_MAX;
	int8_t x211 = INT8_MIN;
	int64_t x212 = -152631LL;
	volatile int32_t t50 = -942335074;

    t50 = ((x209/x210)==(x211<=x212));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x213 = INT64_MAX;
	volatile int16_t x214 = INT16_MAX;
	static int64_t x215 = INT64_MAX;
	uint16_t x216 = UINT16_MAX;
	volatile int32_t t51 = 131383189;

    t51 = ((x213/x214)==(x215<=x216));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x217 = INT8_MIN;
	uint64_t x218 = 1577LLU;
	static volatile int32_t t52 = 7;

    t52 = ((x217/x218)==(x219<=x220));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x221 = UINT8_MAX;
	volatile int8_t x222 = -1;
	static volatile int64_t x223 = -1LL;
	int64_t x224 = -1LL;

    t53 = ((x221/x222)==(x223<=x224));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x226 = INT64_MIN;
	volatile int16_t x227 = -1;
	volatile int32_t t54 = 39902;

    t54 = ((x225/x226)==(x227<=x228));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x229 = 147589679U;
	volatile int16_t x231 = INT16_MIN;
	int32_t t55 = 336;

    t55 = ((x229/x230)==(x231<=x232));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x233 = 56;
	uint32_t x235 = 1U;
	volatile uint32_t x236 = UINT32_MAX;
	int32_t t56 = -6021;

    t56 = ((x233/x234)==(x235<=x236));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x237 = INT64_MIN;
	static int32_t x238 = -6;
	int32_t x239 = INT32_MIN;
	uint32_t x240 = 1U;
	volatile int32_t t57 = -474091029;

    t57 = ((x237/x238)==(x239<=x240));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x241 = -1;
	uint32_t x243 = 8467849U;
	static int8_t x244 = 1;
	int32_t t58 = 543806258;

    t58 = ((x241/x242)==(x243<=x244));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x245 = INT8_MIN;
	int64_t x246 = INT64_MIN;
	int16_t x247 = -1150;
	static int64_t x248 = -1566203LL;

    t59 = ((x245/x246)==(x247<=x248));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x250 = INT8_MAX;
	volatile uint32_t x252 = UINT32_MAX;
	int32_t t60 = 1;

    t60 = ((x249/x250)==(x251<=x252));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint16_t x253 = 4810U;
	int64_t x256 = 1767060611LL;

    t61 = ((x253/x254)==(x255<=x256));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x257 = 156U;
	uint32_t x258 = 168U;
	int64_t x259 = INT64_MAX;
	static uint64_t x260 = UINT64_MAX;
	int32_t t62 = -282;

    t62 = ((x257/x258)==(x259<=x260));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x261 = -51;
	uint32_t x262 = UINT32_MAX;
	uint32_t x263 = 1671U;
	static int16_t x264 = INT16_MIN;
	int32_t t63 = -23;

    t63 = ((x261/x262)==(x263<=x264));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x265 = UINT16_MAX;
	static volatile int32_t x266 = INT32_MIN;
	int64_t x267 = 9288360LL;
	int8_t x268 = INT8_MAX;

    t64 = ((x265/x266)==(x267<=x268));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint8_t x270 = 2U;
	static volatile int16_t x272 = 11;
	int32_t t65 = -7740139;

    t65 = ((x269/x270)==(x271<=x272));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x274 = INT64_MIN;
	static uint16_t x275 = 3U;
	static int16_t x276 = -955;
	int32_t t66 = 103423;

    t66 = ((x273/x274)==(x275<=x276));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x277 = 2245;
	static int32_t x278 = -1;
	uint32_t x279 = 29U;
	int64_t x280 = 3LL;
	static int32_t t67 = 1434998;

    t67 = ((x277/x278)==(x279<=x280));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x281 = -1;
	int16_t x282 = 23;
	volatile int64_t x283 = INT64_MIN;
	int32_t x284 = INT32_MIN;
	int32_t t68 = 6;

    t68 = ((x281/x282)==(x283<=x284));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint32_t x285 = 595888U;
	uint32_t x286 = 59606U;
	int8_t x287 = -1;
	volatile int16_t x288 = INT16_MIN;
	volatile int32_t t69 = 2037546;

    t69 = ((x285/x286)==(x287<=x288));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x289 = INT64_MIN;
	int64_t x291 = -1LL;
	int64_t x292 = INT64_MAX;
	static int32_t t70 = -15427;

    t70 = ((x289/x290)==(x291<=x292));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x293 = 12;
	uint64_t x294 = 307LLU;
	volatile int16_t x296 = INT16_MIN;

    t71 = ((x293/x294)==(x295<=x296));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x298 = -1;
	static int16_t x299 = -1;
	volatile int16_t x300 = -10593;
	volatile int32_t t72 = 1316697;

    t72 = ((x297/x298)==(x299<=x300));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x301 = 260U;
	int16_t x302 = -12;
	int64_t x303 = -1LL;

    t73 = ((x301/x302)==(x303<=x304));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x305 = INT16_MIN;
	static int8_t x307 = INT8_MAX;
	static uint64_t x308 = 70340758103898LLU;
	static volatile int32_t t74 = -28059344;

    t74 = ((x305/x306)==(x307<=x308));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x309 = -6072875949446887LL;
	int16_t x310 = INT16_MIN;
	int32_t x311 = -1;
	uint32_t x312 = 870U;
	volatile int32_t t75 = 32742;

    t75 = ((x309/x310)==(x311<=x312));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x313 = 1;
	int8_t x315 = INT8_MIN;
	int16_t x316 = INT16_MIN;
	int32_t t76 = 93608931;

    t76 = ((x313/x314)==(x315<=x316));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x317 = -167;
	uint32_t x318 = 324883510U;
	volatile int8_t x319 = -1;
	int64_t x320 = -1LL;
	int32_t t77 = 4;

    t77 = ((x317/x318)==(x319<=x320));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x321 = 0;
	int8_t x322 = INT8_MAX;
	uint64_t x324 = 454031006088384943LLU;
	int32_t t78 = -6823;

    t78 = ((x321/x322)==(x323<=x324));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x325 = 517;
	volatile uint32_t x326 = UINT32_MAX;
	uint32_t x327 = 73U;
	int32_t t79 = -413864;

    t79 = ((x325/x326)==(x327<=x328));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x329 = 2;
	int64_t x330 = INT64_MIN;
	static int32_t x332 = -1;
	volatile int32_t t80 = -1007076;

    t80 = ((x329/x330)==(x331<=x332));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x334 = -1LL;
	static int16_t x335 = -1;
	static int8_t x336 = INT8_MIN;

    t81 = ((x333/x334)==(x335<=x336));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x339 = -1LL;
	int32_t x340 = -1;
	static volatile int32_t t82 = -3;

    t82 = ((x337/x338)==(x339<=x340));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x343 = -1;
	volatile int32_t x344 = INT32_MIN;
	static volatile int32_t t83 = 2236;

    t83 = ((x341/x342)==(x343<=x344));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x345 = INT16_MIN;
	uint8_t x347 = UINT8_MAX;
	int32_t x348 = INT32_MIN;
	static volatile int32_t t84 = -58341;

    t84 = ((x345/x346)==(x347<=x348));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x349 = 7U;
	int32_t x350 = 3641;
	uint8_t x351 = 7U;
	static volatile int32_t t85 = 25502981;

    t85 = ((x349/x350)==(x351<=x352));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x353 = 2;
	volatile int16_t x354 = -4;
	volatile int32_t x355 = -1;
	volatile int32_t t86 = 56;

    t86 = ((x353/x354)==(x355<=x356));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x357 = 50;
	static int8_t x358 = 17;
	volatile int8_t x359 = INT8_MIN;
	int64_t x360 = INT64_MIN;
	static int32_t t87 = 709669;

    t87 = ((x357/x358)==(x359<=x360));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x361 = -15800553598LL;
	int16_t x362 = -1;
	uint8_t x363 = 43U;
	uint8_t x364 = 4U;
	volatile int32_t t88 = 9;

    t88 = ((x361/x362)==(x363<=x364));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x366 = -14;
	uint64_t x367 = 179300795881LLU;
	volatile int8_t x368 = -3;
	volatile int32_t t89 = 2;

    t89 = ((x365/x366)==(x367<=x368));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x371 = INT8_MAX;
	uint64_t x372 = 768LLU;
	int32_t t90 = -7543934;

    t90 = ((x369/x370)==(x371<=x372));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x373 = INT64_MIN;
	int8_t x376 = INT8_MAX;
	volatile int32_t t91 = -37;

    t91 = ((x373/x374)==(x375<=x376));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x378 = INT32_MAX;
	int16_t x379 = 2;
	uint8_t x380 = 66U;

    t92 = ((x377/x378)==(x379<=x380));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x381 = INT16_MIN;
	int64_t x383 = -1LL;
	uint16_t x384 = 6U;
	static volatile int32_t t93 = -55365180;

    t93 = ((x381/x382)==(x383<=x384));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x385 = -1LL;
	static int32_t x386 = INT32_MAX;
	int32_t x387 = -4853537;
	int32_t t94 = -479835646;

    t94 = ((x385/x386)==(x387<=x388));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x390 = INT8_MIN;
	int64_t x392 = 2115LL;
	volatile int32_t t95 = -127990;

    t95 = ((x389/x390)==(x391<=x392));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x397 = -39870522270273LL;
	uint32_t x398 = UINT32_MAX;
	uint16_t x399 = 1921U;

    t96 = ((x397/x398)==(x399<=x400));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint64_t x401 = UINT64_MAX;
	uint32_t x402 = 394U;
	int16_t x403 = -11501;
	uint32_t x404 = 468693579U;
	static volatile int32_t t97 = -8956239;

    t97 = ((x401/x402)==(x403<=x404));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x405 = 3655;
	int8_t x406 = 10;
	static volatile int32_t t98 = -1;

    t98 = ((x405/x406)==(x407<=x408));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x410 = UINT64_MAX;
	static uint8_t x411 = 17U;
	int32_t x412 = -1;
	int32_t t99 = 718763;

    t99 = ((x409/x410)==(x411<=x412));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x413 = INT32_MIN;
	int32_t x415 = -1;
	int32_t t100 = 2441;

    t100 = ((x413/x414)==(x415<=x416));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x417 = INT8_MAX;
	static uint8_t x418 = 6U;
	uint16_t x419 = UINT16_MAX;
	int16_t x420 = INT16_MIN;
	int32_t t101 = 63379;

    t101 = ((x417/x418)==(x419<=x420));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x421 = -1;
	static uint32_t x423 = UINT32_MAX;
	volatile int64_t x424 = INT64_MAX;
	volatile int32_t t102 = -3;

    t102 = ((x421/x422)==(x423<=x424));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x425 = 4379U;
	int32_t x427 = INT32_MIN;
	volatile uint64_t x428 = 2861890753LLU;
	volatile int32_t t103 = -435525899;

    t103 = ((x425/x426)==(x427<=x428));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint16_t x430 = 74U;
	int32_t x431 = INT32_MIN;
	volatile int64_t x432 = INT64_MIN;
	volatile int32_t t104 = 18;

    t104 = ((x429/x430)==(x431<=x432));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x435 = 1;
	int32_t x436 = INT32_MIN;
	int32_t t105 = -3;

    t105 = ((x433/x434)==(x435<=x436));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x437 = -1;
	volatile int16_t x439 = INT16_MAX;
	int32_t t106 = 729007135;

    t106 = ((x437/x438)==(x439<=x440));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x441 = INT64_MAX;
	uint16_t x443 = 2U;
	static int32_t t107 = 136;

    t107 = ((x441/x442)==(x443<=x444));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint32_t x445 = UINT32_MAX;
	volatile int64_t x446 = -2695012824311101LL;
	int16_t x447 = 1;
	int32_t x448 = INT32_MIN;
	int32_t t108 = 15322763;

    t108 = ((x445/x446)==(x447<=x448));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x449 = 4;
	volatile uint8_t x450 = 7U;
	static volatile uint16_t x451 = 560U;
	uint64_t x452 = 1031233806LLU;
	int32_t t109 = 3121;

    t109 = ((x449/x450)==(x451<=x452));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int8_t x453 = -1;
	int16_t x454 = INT16_MIN;
	volatile int64_t x455 = INT64_MAX;
	static volatile int32_t t110 = 1;

    t110 = ((x453/x454)==(x455<=x456));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x458 = INT8_MIN;
	uint64_t x459 = UINT64_MAX;
	static uint32_t x460 = 543U;
	int32_t t111 = 1;

    t111 = ((x457/x458)==(x459<=x460));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x462 = INT32_MAX;
	int16_t x463 = INT16_MIN;
	int32_t t112 = -7948228;

    t112 = ((x461/x462)==(x463<=x464));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x466 = INT32_MIN;
	volatile int64_t x467 = 0LL;
	int8_t x468 = INT8_MIN;
	volatile int32_t t113 = -211;

    t113 = ((x465/x466)==(x467<=x468));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint64_t x469 = 4558LLU;
	static uint16_t x471 = 666U;
	static uint16_t x472 = 5361U;
	volatile int32_t t114 = -92199149;

    t114 = ((x469/x470)==(x471<=x472));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x473 = INT64_MIN;
	volatile uint32_t x474 = 15925U;
	int8_t x476 = INT8_MAX;
	int32_t t115 = -1652;

    t115 = ((x473/x474)==(x475<=x476));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x477 = 1;
	static uint16_t x478 = UINT16_MAX;
	uint8_t x479 = 49U;
	static int32_t x480 = INT32_MIN;
	volatile int32_t t116 = 123243;

    t116 = ((x477/x478)==(x479<=x480));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x483 = -1;
	uint8_t x484 = UINT8_MAX;
	volatile int32_t t117 = -6864886;

    t117 = ((x481/x482)==(x483<=x484));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x487 = -1LL;
	int64_t x488 = -1LL;
	int32_t t118 = 20007752;

    t118 = ((x485/x486)==(x487<=x488));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint8_t x489 = UINT8_MAX;
	int32_t x492 = 2517;
	int32_t t119 = -1;

    t119 = ((x489/x490)==(x491<=x492));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x493 = -297;
	uint8_t x494 = 11U;
	volatile int32_t t120 = 0;

    t120 = ((x493/x494)==(x495<=x496));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x497 = -1;
	static volatile int64_t x498 = INT64_MIN;
	int32_t x500 = INT32_MIN;
	static volatile int32_t t121 = -29755;

    t121 = ((x497/x498)==(x499<=x500));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int16_t x505 = INT16_MIN;
	int16_t x506 = INT16_MIN;
	static volatile int16_t x507 = 573;
	uint8_t x508 = 19U;
	volatile int32_t t122 = 580;

    t122 = ((x505/x506)==(x507<=x508));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x509 = INT8_MIN;
	int32_t x510 = -1;
	static uint8_t x511 = 2U;
	int32_t x512 = INT32_MAX;
	volatile int32_t t123 = 1;

    t123 = ((x509/x510)==(x511<=x512));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x513 = -3;
	uint8_t x514 = 1U;
	uint8_t x515 = 0U;
	int16_t x516 = 55;
	volatile int32_t t124 = 8;

    t124 = ((x513/x514)==(x515<=x516));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x517 = INT32_MAX;
	int16_t x518 = 6;
	static uint64_t x519 = UINT64_MAX;
	volatile uint32_t x520 = 3125314U;
	int32_t t125 = 113;

    t125 = ((x517/x518)==(x519<=x520));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x521 = 2815051LL;
	int8_t x523 = INT8_MIN;
	volatile int32_t t126 = -5;

    t126 = ((x521/x522)==(x523<=x524));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint16_t x525 = 23U;
	volatile uint32_t x528 = 1855114U;

    t127 = ((x525/x526)==(x527<=x528));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x530 = INT32_MIN;
	volatile int32_t x531 = -73032903;

    t128 = ((x529/x530)==(x531<=x532));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int32_t x533 = 233963;
	volatile uint32_t x534 = UINT32_MAX;
	int32_t x535 = -138765831;
	uint8_t x536 = 4U;
	static volatile int32_t t129 = -177928;

    t129 = ((x533/x534)==(x535<=x536));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x537 = 248U;
	int32_t x538 = INT32_MIN;
	int16_t x539 = INT16_MIN;
	volatile int32_t x540 = -1;

    t130 = ((x537/x538)==(x539<=x540));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint16_t x541 = 0U;
	int32_t x543 = -1;
	int16_t x544 = -1;
	volatile int32_t t131 = -55;

    t131 = ((x541/x542)==(x543<=x544));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x546 = INT8_MIN;
	static volatile int8_t x547 = INT8_MIN;
	int32_t x548 = INT32_MAX;

    t132 = ((x545/x546)==(x547<=x548));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x549 = INT32_MIN;
	int16_t x550 = 3;
	int8_t x552 = -1;
	int32_t t133 = -41753;

    t133 = ((x549/x550)==(x551<=x552));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x553 = -1;
	int16_t x554 = INT16_MAX;
	int64_t x555 = INT64_MIN;
	volatile int8_t x556 = -1;
	volatile int32_t t134 = 19;

    t134 = ((x553/x554)==(x555<=x556));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint32_t x557 = 10372418U;
	int32_t x558 = -1;
	int64_t x559 = 134967088352532003LL;

    t135 = ((x557/x558)==(x559<=x560));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x561 = 883734324LL;
	int64_t x562 = -1LL;
	int8_t x563 = INT8_MIN;
	int16_t x564 = INT16_MIN;
	int32_t t136 = 369243715;

    t136 = ((x561/x562)==(x563<=x564));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x566 = -22809413LL;
	int32_t t137 = -1283003;

    t137 = ((x565/x566)==(x567<=x568));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile uint64_t x570 = UINT64_MAX;
	int32_t x572 = INT32_MAX;
	volatile int32_t t138 = -176927;

    t138 = ((x569/x570)==(x571<=x572));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint8_t x577 = 7U;
	int32_t x579 = 916802;
	uint16_t x580 = 60U;
	int32_t t139 = -2842618;

    t139 = ((x577/x578)==(x579<=x580));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x581 = INT64_MAX;
	uint64_t x583 = UINT64_MAX;

    t140 = ((x581/x582)==(x583<=x584));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x585 = 524U;
	int64_t x586 = 2574309LL;
	volatile uint16_t x587 = 176U;
	int32_t x588 = INT32_MIN;
	int32_t t141 = -16452636;

    t141 = ((x585/x586)==(x587<=x588));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x589 = 1787;
	volatile int32_t x590 = INT32_MAX;
	volatile uint16_t x591 = 121U;
	int32_t t142 = -79422392;

    t142 = ((x589/x590)==(x591<=x592));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int64_t x593 = -12LL;
	int64_t x594 = -411808LL;
	int64_t x596 = 6171329556937LL;
	static int32_t t143 = -386;

    t143 = ((x593/x594)==(x595<=x596));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint32_t x597 = 6502U;
	volatile int8_t x599 = INT8_MIN;
	int8_t x600 = INT8_MAX;

    t144 = ((x597/x598)==(x599<=x600));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x601 = INT32_MIN;
	uint8_t x603 = UINT8_MAX;
	uint8_t x604 = 6U;
	int32_t t145 = 1;

    t145 = ((x601/x602)==(x603<=x604));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x605 = -1;
	static uint8_t x606 = 1U;
	uint16_t x607 = 957U;
	int16_t x608 = INT16_MIN;
	int32_t t146 = -3829;

    t146 = ((x605/x606)==(x607<=x608));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x609 = -13;
	int32_t x610 = INT32_MIN;
	int32_t x611 = INT32_MAX;
	volatile int32_t x612 = -184;
	volatile int32_t t147 = 1;

    t147 = ((x609/x610)==(x611<=x612));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x613 = INT16_MAX;
	int16_t x614 = -3;
	uint8_t x615 = 1U;
	volatile int32_t t148 = -13591;

    t148 = ((x613/x614)==(x615<=x616));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x619 = INT16_MAX;
	volatile int32_t t149 = -4171110;

    t149 = ((x617/x618)==(x619<=x620));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x622 = UINT8_MAX;
	volatile int16_t x623 = INT16_MAX;
	uint8_t x624 = UINT8_MAX;
	int32_t t150 = 4565330;

    t150 = ((x621/x622)==(x623<=x624));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x625 = -3302;
	uint64_t x626 = UINT64_MAX;
	static int32_t x627 = INT32_MIN;
	static int32_t x628 = 118064;
	int32_t t151 = 1;

    t151 = ((x625/x626)==(x627<=x628));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x629 = INT16_MIN;
	int32_t x630 = INT32_MAX;
	volatile int16_t x631 = -1;
	static int8_t x632 = INT8_MAX;
	volatile int32_t t152 = -86;

    t152 = ((x629/x630)==(x631<=x632));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x633 = INT32_MAX;
	int32_t x634 = INT32_MIN;
	int64_t x635 = 56917033517295575LL;
	uint32_t x636 = UINT32_MAX;
	static int32_t t153 = -10794;

    t153 = ((x633/x634)==(x635<=x636));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x646 = INT64_MIN;
	int64_t x647 = INT64_MIN;
	int8_t x648 = 7;

    t154 = ((x645/x646)==(x647<=x648));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x649 = 1;
	int8_t x650 = -1;
	int64_t x651 = -1LL;
	int16_t x652 = 5;
	int32_t t155 = 132;

    t155 = ((x649/x650)==(x651<=x652));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x653 = INT8_MAX;
	int16_t x655 = INT16_MAX;
	static uint16_t x656 = 7U;
	volatile int32_t t156 = 22717431;

    t156 = ((x653/x654)==(x655<=x656));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x657 = INT32_MAX;
	volatile int16_t x659 = 0;
	int8_t x660 = INT8_MIN;

    t157 = ((x657/x658)==(x659<=x660));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x661 = INT64_MIN;
	int64_t x662 = INT64_MIN;
	int32_t x663 = INT32_MIN;
	volatile uint8_t x664 = 23U;
	static int32_t t158 = -400061441;

    t158 = ((x661/x662)==(x663<=x664));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x666 = INT8_MIN;
	static volatile int8_t x667 = -16;
	int32_t t159 = -264;

    t159 = ((x665/x666)==(x667<=x668));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x669 = 13;
	uint16_t x671 = 26U;
	int16_t x672 = INT16_MAX;
	static volatile int32_t t160 = -152579;

    t160 = ((x669/x670)==(x671<=x672));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x673 = 21U;
	int64_t x674 = INT64_MAX;
	volatile int8_t x675 = INT8_MIN;
	volatile int8_t x676 = INT8_MIN;

    t161 = ((x673/x674)==(x675<=x676));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint8_t x677 = 3U;
	uint64_t x678 = 199116LLU;
	volatile int8_t x679 = INT8_MAX;
	volatile int32_t t162 = 85081;

    t162 = ((x677/x678)==(x679<=x680));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x681 = INT8_MAX;
	int16_t x682 = -10;
	int64_t x683 = -1LL;
	int16_t x684 = INT16_MIN;
	volatile int32_t t163 = 39088;

    t163 = ((x681/x682)==(x683<=x684));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint64_t x685 = UINT64_MAX;
	int32_t x686 = 1;
	uint16_t x687 = 154U;
	uint64_t x688 = 6364527774814LLU;

    t164 = ((x685/x686)==(x687<=x688));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int64_t x689 = -110940316499LL;
	int64_t x690 = INT64_MIN;
	volatile uint64_t x691 = 173771117750LLU;
	volatile int32_t t165 = -171652;

    t165 = ((x689/x690)==(x691<=x692));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x694 = INT8_MIN;
	static uint32_t x695 = 227U;
	int64_t x696 = INT64_MAX;
	volatile int32_t t166 = -316980;

    t166 = ((x693/x694)==(x695<=x696));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x699 = -105787365LL;
	uint64_t x700 = 499LLU;
	int32_t t167 = 13270;

    t167 = ((x697/x698)==(x699<=x700));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x701 = -2691;
	volatile int16_t x702 = INT16_MIN;
	int32_t x703 = -594;
	volatile int32_t t168 = 3250861;

    t168 = ((x701/x702)==(x703<=x704));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x706 = INT64_MAX;
	static int8_t x707 = INT8_MIN;
	uint8_t x708 = UINT8_MAX;
	static volatile int32_t t169 = -10054587;

    t169 = ((x705/x706)==(x707<=x708));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x709 = INT64_MIN;
	uint64_t x710 = 5LLU;
	uint16_t x711 = 53U;
	uint8_t x712 = 110U;
	int32_t t170 = -4042;

    t170 = ((x709/x710)==(x711<=x712));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x713 = 588U;
	int8_t x714 = 6;
	static uint16_t x715 = 5718U;
	int64_t x716 = -4855622LL;
	static int32_t t171 = -3228378;

    t171 = ((x713/x714)==(x715<=x716));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint16_t x717 = 2907U;
	int8_t x718 = -9;
	static volatile int32_t x719 = INT32_MIN;
	static int64_t x720 = INT64_MAX;
	int32_t t172 = 2023180;

    t172 = ((x717/x718)==(x719<=x720));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x721 = INT32_MAX;
	int8_t x722 = -1;
	int16_t x724 = 0;
	volatile int32_t t173 = -44;

    t173 = ((x721/x722)==(x723<=x724));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x725 = UINT8_MAX;
	int16_t x726 = -1;
	uint32_t x727 = UINT32_MAX;
	int16_t x728 = 0;

    t174 = ((x725/x726)==(x727<=x728));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x729 = UINT8_MAX;
	static uint32_t x730 = 26256U;
	int16_t x731 = 742;
	int16_t x732 = INT16_MIN;
	volatile int32_t t175 = 3;

    t175 = ((x729/x730)==(x731<=x732));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x734 = -1;
	int8_t x735 = INT8_MAX;
	static int64_t x736 = -7232LL;
	volatile int32_t t176 = -14677754;

    t176 = ((x733/x734)==(x735<=x736));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x737 = INT64_MIN;
	uint32_t x738 = UINT32_MAX;
	int16_t x739 = -3;
	uint64_t x740 = 5887210035975937LLU;

    t177 = ((x737/x738)==(x739<=x740));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x741 = 9012278983LL;
	int16_t x742 = INT16_MIN;
	static int16_t x743 = INT16_MIN;
	volatile int8_t x744 = INT8_MAX;
	int32_t t178 = 65254;

    t178 = ((x741/x742)==(x743<=x744));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x745 = 5206504876551878LLU;
	volatile int32_t x748 = -3121;
	volatile int32_t t179 = 2036;

    t179 = ((x745/x746)==(x747<=x748));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x749 = INT16_MIN;
	volatile int16_t x751 = INT16_MIN;
	int8_t x752 = INT8_MIN;
	static int32_t t180 = -740;

    t180 = ((x749/x750)==(x751<=x752));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x753 = 52201925230750480LL;
	int16_t x754 = INT16_MIN;
	int16_t x755 = -10;
	uint8_t x756 = 40U;
	int32_t t181 = 151;

    t181 = ((x753/x754)==(x755<=x756));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x757 = INT32_MIN;
	int64_t x758 = -5130003389LL;
	static int16_t x759 = INT16_MIN;
	int8_t x760 = INT8_MIN;
	volatile int32_t t182 = -204;

    t182 = ((x757/x758)==(x759<=x760));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x761 = INT8_MIN;
	int16_t x762 = 5104;
	volatile uint32_t x763 = 1026400U;
	static volatile uint32_t x764 = 54U;
	static int32_t t183 = -1;

    t183 = ((x761/x762)==(x763<=x764));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x765 = 0;
	volatile int8_t x767 = -3;
	uint64_t x768 = 7LLU;
	volatile int32_t t184 = 65440;

    t184 = ((x765/x766)==(x767<=x768));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x770 = INT64_MAX;
	int32_t x771 = 1725;
	int32_t t185 = 540;

    t185 = ((x769/x770)==(x771<=x772));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x774 = INT32_MIN;
	volatile int32_t x775 = INT32_MIN;
	uint8_t x776 = 8U;

    t186 = ((x773/x774)==(x775<=x776));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint8_t x777 = UINT8_MAX;
	static uint16_t x778 = 1U;
	int16_t x779 = INT16_MIN;
	int32_t x780 = INT32_MIN;
	static volatile int32_t t187 = 32496;

    t187 = ((x777/x778)==(x779<=x780));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int8_t x781 = -1;
	int32_t x782 = -198;
	uint16_t x783 = UINT16_MAX;
	int16_t x784 = -1;

    t188 = ((x781/x782)==(x783<=x784));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x788 = 15;
	volatile int32_t t189 = 234;

    t189 = ((x785/x786)==(x787<=x788));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x789 = INT16_MIN;
	int8_t x790 = INT8_MAX;
	volatile int8_t x791 = INT8_MIN;
	volatile uint32_t x792 = 193414U;
	volatile int32_t t190 = 299915;

    t190 = ((x789/x790)==(x791<=x792));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x793 = INT8_MAX;
	int32_t x795 = INT32_MIN;
	volatile int64_t x796 = -1LL;

    t191 = ((x793/x794)==(x795<=x796));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x797 = INT16_MIN;
	int64_t x798 = -1LL;
	volatile int32_t x799 = -1;
	int64_t x800 = INT64_MIN;
	int32_t t192 = 4;

    t192 = ((x797/x798)==(x799<=x800));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x801 = UINT16_MAX;
	int64_t x802 = -21694872619437434LL;
	static int32_t x803 = INT32_MIN;
	int16_t x804 = -2714;
	static int32_t t193 = 843156112;

    t193 = ((x801/x802)==(x803<=x804));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x805 = -1;
	int8_t x808 = INT8_MIN;

    t194 = ((x805/x806)==(x807<=x808));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x809 = INT16_MIN;
	int16_t x810 = INT16_MIN;
	int64_t x811 = -511730359903815653LL;
	int32_t t195 = 3211;

    t195 = ((x809/x810)==(x811<=x812));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x813 = INT32_MIN;
	int16_t x814 = INT16_MIN;
	int64_t x815 = -1LL;
	uint64_t x816 = 5491699761815894983LLU;
	int32_t t196 = 1998494;

    t196 = ((x813/x814)==(x815<=x816));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x817 = 24204U;
	int8_t x818 = INT8_MAX;
	volatile int32_t x819 = INT32_MIN;
	int64_t x820 = -1LL;
	static int32_t t197 = -2058484;

    t197 = ((x817/x818)==(x819<=x820));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x821 = 39U;
	int64_t x822 = 3LL;
	int64_t x824 = INT64_MIN;
	volatile int32_t t198 = 144705945;

    t198 = ((x821/x822)==(x823<=x824));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x826 = 25;
	static uint16_t x827 = 1U;
	volatile int32_t t199 = -10;

    t199 = ((x825/x826)==(x827<=x828));

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

