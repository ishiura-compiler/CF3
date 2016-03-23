
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

static int16_t x1 = INT16_MIN;
int8_t x11 = INT8_MIN;
static volatile uint16_t x15 = 15335U;
uint16_t x16 = 6U;
static int32_t t4 = 1784733;
uint64_t x21 = 982193LLU;
int32_t x23 = -1;
int32_t t5 = 2;
volatile int16_t x26 = INT16_MIN;
int32_t t6 = 6;
int64_t x29 = INT64_MIN;
static volatile int32_t t8 = -3;
uint8_t x46 = 67U;
volatile int64_t x47 = -2592083188123130789LL;
static int32_t x53 = INT32_MIN;
int16_t x55 = INT16_MAX;
uint64_t x60 = 2LLU;
static int8_t x61 = INT8_MIN;
static int8_t x65 = INT8_MIN;
int16_t x67 = 7;
uint8_t x76 = UINT8_MAX;
int32_t t18 = 3006006;
static volatile int16_t x79 = INT16_MIN;
int8_t x82 = INT8_MIN;
uint8_t x90 = UINT8_MAX;
static int64_t x92 = INT64_MIN;
uint64_t x94 = UINT64_MAX;
static uint8_t x106 = UINT8_MAX;
static volatile int32_t t26 = 206179473;
static int64_t x109 = INT64_MAX;
uint32_t x111 = 31U;
static int64_t x117 = INT64_MAX;
volatile int32_t t29 = 1;
int16_t x131 = INT16_MIN;
volatile int32_t t32 = -1810846;
volatile uint32_t x134 = 410885U;
int64_t x142 = INT64_MIN;
int32_t x144 = INT32_MAX;
static int32_t t35 = -3;
uint16_t x146 = 12U;
int64_t x163 = 489727978118LL;
volatile int16_t x166 = 100;
volatile int32_t t42 = 980315;
uint8_t x179 = 14U;
static uint32_t x180 = 1U;
int64_t x185 = INT64_MIN;
int32_t t47 = 5;
int64_t x199 = 1860LL;
uint64_t x208 = 640190166413988913LLU;
int16_t x221 = -23;
volatile int64_t x224 = INT64_MIN;
int64_t x230 = INT64_MAX;
volatile uint16_t x235 = UINT16_MAX;
uint16_t x236 = 15411U;
volatile uint8_t x237 = UINT8_MAX;
int16_t x239 = -9;
int32_t t59 = 40371673;
volatile uint16_t x248 = 7408U;
static volatile int32_t t60 = 144;
int8_t x252 = INT8_MIN;
volatile int32_t t63 = 2;
int64_t x268 = INT64_MIN;
volatile int32_t t65 = 886;
int64_t x272 = 485LL;
uint64_t x277 = UINT64_MAX;
static uint16_t x290 = 64U;
volatile int8_t x292 = INT8_MAX;
int32_t t71 = -111433984;
int16_t x293 = -235;
static int16_t x309 = INT16_MIN;
int8_t x322 = 0;
volatile uint32_t x324 = 39122665U;
uint8_t x325 = 94U;
static uint8_t x327 = 15U;
uint64_t x328 = UINT64_MAX;
volatile uint16_t x329 = 254U;
int64_t x330 = INT64_MAX;
uint8_t x334 = 61U;
volatile int8_t x341 = INT8_MIN;
volatile uint8_t x343 = UINT8_MAX;
int32_t x344 = INT32_MAX;
int64_t x346 = -1LL;
static int8_t x352 = INT8_MAX;
static int32_t x355 = INT32_MAX;
int32_t x369 = INT32_MIN;
static int8_t x370 = -1;
uint8_t x378 = 6U;
static int32_t x381 = -1;
uint64_t x389 = UINT64_MAX;
uint16_t x396 = 845U;
static int64_t x400 = -888423097334803164LL;
static int32_t t98 = -30968;
static uint8_t x405 = 6U;
uint8_t x408 = UINT8_MAX;
static volatile int32_t t100 = 11811127;
int16_t x413 = INT16_MIN;
int32_t x415 = INT32_MAX;
static volatile int32_t x418 = INT32_MAX;
uint8_t x422 = 3U;
static uint64_t x426 = UINT64_MAX;
int32_t x434 = -1;
int16_t x435 = INT16_MIN;
uint8_t x437 = 18U;
volatile uint16_t x439 = UINT16_MAX;
static uint8_t x440 = 11U;
int32_t t108 = -2;
uint16_t x445 = 20685U;
volatile uint16_t x446 = 0U;
static int8_t x451 = -1;
static int8_t x453 = 0;
int16_t x455 = 153;
static volatile int8_t x456 = 2;
uint16_t x459 = 407U;
volatile int32_t x467 = -1;
int16_t x468 = -1;
static int64_t x474 = -1LL;
volatile uint8_t x478 = 63U;
static int32_t x480 = -2;
uint64_t x485 = 643694LLU;
static volatile int32_t x486 = INT32_MAX;
int16_t x491 = 3720;
volatile int32_t t118 = -3724;
volatile uint64_t x496 = UINT64_MAX;
static int8_t x498 = INT8_MIN;
int16_t x502 = INT16_MIN;
static volatile uint8_t x513 = UINT8_MAX;
int16_t x516 = INT16_MAX;
static int16_t x517 = INT16_MAX;
static int8_t x518 = INT8_MIN;
static int16_t x519 = 148;
int16_t x520 = INT16_MIN;
int16_t x527 = INT16_MAX;
volatile uint8_t x529 = UINT8_MAX;
static uint64_t x532 = 480129LLU;
volatile uint32_t x537 = 4228725U;
volatile int32_t t131 = -149997;
static int16_t x557 = 1444;
uint8_t x563 = 76U;
int32_t t134 = -59;
int32_t x565 = -1;
int32_t x572 = INT32_MIN;
uint64_t x574 = 235LLU;
int64_t x577 = 2327LL;
static int16_t x578 = -1;
uint16_t x579 = 7490U;
static int16_t x581 = -1;
volatile uint64_t x583 = 237619LLU;
int64_t x585 = 3020756513256754LL;
static int32_t t140 = -541602052;
int8_t x594 = 1;
int16_t x596 = INT16_MAX;
static volatile int64_t x597 = -2392096LL;
int16_t x598 = INT16_MAX;
volatile int16_t x603 = INT16_MIN;
int32_t t144 = -1965;
static int8_t x612 = INT8_MAX;
int8_t x616 = INT8_MIN;
static volatile int32_t t147 = 380133;
static int64_t x621 = 149442916349581LL;
int64_t x622 = -1LL;
static volatile uint64_t x623 = 62976LLU;
volatile int8_t x629 = INT8_MAX;
int32_t t152 = 64511893;
volatile int32_t x637 = 52651780;
static int64_t x639 = -84235757775LL;
int16_t x642 = INT16_MIN;
uint32_t x645 = 1823885U;
int16_t x649 = 0;
int32_t t156 = -2570409;
int8_t x653 = INT8_MIN;
volatile uint32_t x656 = 13U;
int16_t x658 = -476;
int8_t x667 = INT8_MIN;
int64_t x670 = -1LL;
volatile int32_t t161 = -234;
int16_t x676 = INT16_MIN;
int8_t x678 = INT8_MAX;
int64_t x680 = INT64_MIN;
int16_t x681 = INT16_MIN;
int16_t x683 = 1;
uint64_t x685 = UINT64_MAX;
uint64_t x691 = 2243774106269241LLU;
int8_t x700 = INT8_MAX;
int32_t t168 = 3;
int32_t x708 = INT32_MAX;
static uint32_t x715 = UINT32_MAX;
int64_t x726 = 106264217645LL;
int32_t t174 = -252;
uint8_t x732 = 2U;
int64_t x739 = -920422242002LL;
int16_t x744 = INT16_MIN;
uint32_t x745 = UINT32_MAX;
int64_t x750 = -4637691071799708LL;
static uint16_t x760 = 405U;
uint32_t x765 = 57U;
int8_t x767 = -1;
volatile int32_t x769 = INT32_MIN;
static int16_t x784 = INT16_MIN;
static int16_t x789 = INT16_MIN;
volatile int32_t t190 = -18;
int8_t x793 = -34;
volatile int16_t x795 = INT16_MIN;
volatile int32_t t193 = 42504;
volatile uint8_t x808 = 1U;
int32_t t194 = -162862064;
static int16_t x811 = -750;
static int8_t x819 = -1;
uint64_t x820 = 2480448544433415LLU;
static volatile uint8_t x823 = 21U;
uint64_t x830 = UINT64_MAX;


void f0(void) {
    	int8_t x2 = INT8_MAX;
	static volatile uint16_t x3 = UINT16_MAX;
	volatile int32_t x4 = INT32_MAX;
	volatile int32_t t0 = -36442530;

    t0 = (x1>(x2|(x3/x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint16_t x5 = 13U;
	volatile uint8_t x6 = UINT8_MAX;
	int32_t x7 = INT32_MAX;
	int16_t x8 = INT16_MIN;
	static int32_t t1 = 0;

    t1 = (x5>(x6|(x7/x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint8_t x9 = 24U;
	int8_t x10 = INT8_MIN;
	int32_t x12 = INT32_MAX;
	int32_t t2 = -125;

    t2 = (x9>(x10|(x11/x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = 1;
	int16_t x14 = INT16_MIN;
	int32_t t3 = -190430;

    t3 = (x13>(x14|(x15/x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x17 = -1;
	int64_t x18 = INT64_MIN;
	static int8_t x19 = -1;
	volatile uint16_t x20 = 6U;

    t4 = (x17>(x18|(x19/x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x22 = INT64_MIN;
	int64_t x24 = -1LL;

    t5 = (x21>(x22|(x23/x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MAX;
	int32_t x27 = INT32_MIN;
	int64_t x28 = INT64_MIN;

    t6 = (x25>(x26|(x27/x28)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x30 = 3;
	static uint8_t x31 = 5U;
	volatile uint8_t x32 = 6U;
	int32_t t7 = 757;

    t7 = (x29>(x30|(x31/x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int8_t x33 = INT8_MIN;
	int32_t x34 = -1;
	int16_t x35 = INT16_MIN;
	uint32_t x36 = 774U;

    t8 = (x33>(x34|(x35/x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = 6;
	volatile int64_t x38 = INT64_MIN;
	int32_t x39 = -91913;
	uint64_t x40 = UINT64_MAX;
	volatile int32_t t9 = 7888;

    t9 = (x37>(x38|(x39/x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x41 = -1;
	static int8_t x42 = -1;
	int64_t x43 = -636LL;
	volatile int64_t x44 = INT64_MAX;
	int32_t t10 = 409165;

    t10 = (x41>(x42|(x43/x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = INT32_MAX;
	volatile uint8_t x48 = 1U;
	static int32_t t11 = 8512631;

    t11 = (x45>(x46|(x47/x48)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x49 = 33377U;
	int32_t x50 = INT32_MIN;
	uint8_t x51 = UINT8_MAX;
	uint8_t x52 = UINT8_MAX;
	int32_t t12 = -217936;

    t12 = (x49>(x50|(x51/x52)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x54 = INT8_MIN;
	uint64_t x56 = UINT64_MAX;
	volatile int32_t t13 = -60099780;

    t13 = (x53>(x54|(x55/x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = INT64_MIN;
	int16_t x58 = INT16_MAX;
	static int8_t x59 = 13;
	int32_t t14 = 226;

    t14 = (x57>(x58|(x59/x60)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x62 = INT8_MIN;
	static int8_t x63 = -1;
	static int16_t x64 = INT16_MIN;
	int32_t t15 = 499;

    t15 = (x61>(x62|(x63/x64)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x66 = -42743;
	int16_t x68 = -838;
	static int32_t t16 = 1;

    t16 = (x65>(x66|(x67/x68)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = INT32_MIN;
	static uint64_t x70 = UINT64_MAX;
	int8_t x71 = -1;
	int64_t x72 = INT64_MIN;
	volatile int32_t t17 = 5162;

    t17 = (x69>(x70|(x71/x72)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x73 = INT16_MIN;
	int8_t x74 = INT8_MIN;
	static int8_t x75 = INT8_MAX;

    t18 = (x73>(x74|(x75/x76)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = -1;
	int64_t x78 = 86LL;
	int32_t x80 = INT32_MIN;
	int32_t t19 = -37;

    t19 = (x77>(x78|(x79/x80)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x81 = 17;
	int64_t x83 = -21LL;
	int32_t x84 = INT32_MIN;
	int32_t t20 = -8017054;

    t20 = (x81>(x82|(x83/x84)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = INT64_MAX;
	int64_t x86 = INT64_MAX;
	int8_t x87 = INT8_MAX;
	int64_t x88 = INT64_MIN;
	volatile int32_t t21 = 0;

    t21 = (x85>(x86|(x87/x88)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x89 = 0LLU;
	int16_t x91 = 1;
	int32_t t22 = 14;

    t22 = (x89>(x90|(x91/x92)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x93 = INT16_MIN;
	int64_t x95 = INT64_MAX;
	int64_t x96 = -3576781840248LL;
	int32_t t23 = -101;

    t23 = (x93>(x94|(x95/x96)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint16_t x97 = 16279U;
	int64_t x98 = INT64_MAX;
	int32_t x99 = INT32_MAX;
	int32_t x100 = -1013172727;
	static int32_t t24 = 1;

    t24 = (x97>(x98|(x99/x100)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x101 = INT8_MIN;
	int32_t x102 = INT32_MAX;
	int32_t x103 = -19856515;
	static uint8_t x104 = UINT8_MAX;
	static volatile int32_t t25 = -3;

    t25 = (x101>(x102|(x103/x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint64_t x105 = UINT64_MAX;
	int8_t x107 = INT8_MIN;
	uint16_t x108 = 20U;

    t26 = (x105>(x106|(x107/x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x110 = INT8_MIN;
	volatile uint64_t x112 = 2953566LLU;
	static volatile int32_t t27 = -2276;

    t27 = (x109>(x110|(x111/x112)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = -1;
	int64_t x114 = INT64_MIN;
	int16_t x115 = INT16_MAX;
	static int32_t x116 = INT32_MAX;
	volatile int32_t t28 = -47417;

    t28 = (x113>(x114|(x115/x116)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x118 = 321U;
	uint64_t x119 = UINT64_MAX;
	int16_t x120 = INT16_MIN;

    t29 = (x117>(x118|(x119/x120)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint32_t x121 = 21378275U;
	int64_t x122 = INT64_MIN;
	uint16_t x123 = UINT16_MAX;
	int8_t x124 = 9;
	volatile int32_t t30 = 510226;

    t30 = (x121>(x122|(x123/x124)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x125 = INT16_MAX;
	int64_t x126 = INT64_MIN;
	int32_t x127 = INT32_MIN;
	volatile int32_t x128 = 2;
	static int32_t t31 = 243187;

    t31 = (x125>(x126|(x127/x128)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x129 = 129315419U;
	uint16_t x130 = 2U;
	volatile int32_t x132 = -12;

    t32 = (x129>(x130|(x131/x132)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint16_t x133 = 13U;
	static uint64_t x135 = 149597LLU;
	volatile uint8_t x136 = UINT8_MAX;
	volatile int32_t t33 = 28;

    t33 = (x133>(x134|(x135/x136)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x137 = 24687592U;
	int8_t x138 = -1;
	volatile int16_t x139 = INT16_MIN;
	int32_t x140 = INT32_MAX;
	static volatile int32_t t34 = -988103853;

    t34 = (x137>(x138|(x139/x140)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = INT8_MIN;
	static uint16_t x143 = 1U;

    t35 = (x141>(x142|(x143/x144)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x145 = INT32_MIN;
	uint32_t x147 = 193942722U;
	static uint8_t x148 = 38U;
	int32_t t36 = 3585;

    t36 = (x145>(x146|(x147/x148)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x149 = -1;
	int32_t x150 = 438403;
	volatile int32_t x151 = -1423173;
	int64_t x152 = INT64_MAX;
	int32_t t37 = -307102962;

    t37 = (x149>(x150|(x151/x152)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint16_t x153 = 3915U;
	int16_t x154 = INT16_MIN;
	int32_t x155 = INT32_MAX;
	int8_t x156 = INT8_MIN;
	static int32_t t38 = 31916816;

    t38 = (x153>(x154|(x155/x156)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x157 = -1;
	int16_t x158 = INT16_MIN;
	volatile uint16_t x159 = 15U;
	int8_t x160 = INT8_MAX;
	volatile int32_t t39 = -20;

    t39 = (x157>(x158|(x159/x160)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint8_t x161 = UINT8_MAX;
	int16_t x162 = INT16_MAX;
	volatile int8_t x164 = INT8_MIN;
	volatile int32_t t40 = -1406;

    t40 = (x161>(x162|(x163/x164)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = INT32_MIN;
	volatile int8_t x167 = INT8_MAX;
	uint32_t x168 = 14634U;
	int32_t t41 = -10929621;

    t41 = (x165>(x166|(x167/x168)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x169 = INT64_MAX;
	static uint8_t x170 = UINT8_MAX;
	int16_t x171 = -190;
	int8_t x172 = -1;

    t42 = (x169>(x170|(x171/x172)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x173 = INT64_MIN;
	static uint32_t x174 = 1462976U;
	int64_t x175 = INT64_MIN;
	static uint8_t x176 = 1U;
	volatile int32_t t43 = -698;

    t43 = (x173>(x174|(x175/x176)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x177 = INT64_MIN;
	static uint16_t x178 = UINT16_MAX;
	int32_t t44 = 0;

    t44 = (x177>(x178|(x179/x180)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x186 = -5;
	uint8_t x187 = 71U;
	int64_t x188 = INT64_MIN;
	volatile int32_t t45 = -42370881;

    t45 = (x185>(x186|(x187/x188)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int32_t x189 = -1;
	int16_t x190 = INT16_MAX;
	static int8_t x191 = INT8_MIN;
	static int16_t x192 = -1;
	int32_t t46 = 20849;

    t46 = (x189>(x190|(x191/x192)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x193 = -1;
	int32_t x194 = -7;
	static volatile int16_t x195 = -1;
	int16_t x196 = 13695;

    t47 = (x193>(x194|(x195/x196)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile uint64_t x197 = UINT64_MAX;
	int8_t x198 = INT8_MAX;
	uint8_t x200 = 23U;
	volatile int32_t t48 = 1;

    t48 = (x197>(x198|(x199/x200)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x201 = -1;
	uint16_t x202 = 1U;
	uint16_t x203 = 0U;
	int32_t x204 = -368197005;
	volatile int32_t t49 = 877615;

    t49 = (x201>(x202|(x203/x204)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x205 = UINT64_MAX;
	int16_t x206 = -1491;
	uint16_t x207 = UINT16_MAX;
	volatile int32_t t50 = -5819307;

    t50 = (x205>(x206|(x207/x208)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x209 = 28879163437760784LL;
	int16_t x210 = -186;
	uint64_t x211 = 19551041663LLU;
	int8_t x212 = -1;
	volatile int32_t t51 = 0;

    t51 = (x209>(x210|(x211/x212)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int8_t x213 = INT8_MIN;
	volatile uint16_t x214 = UINT16_MAX;
	static uint16_t x215 = UINT16_MAX;
	static int16_t x216 = 692;
	volatile int32_t t52 = 96909680;

    t52 = (x213>(x214|(x215/x216)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x217 = INT64_MIN;
	static int64_t x218 = -1LL;
	static volatile uint32_t x219 = UINT32_MAX;
	int32_t x220 = -1044329;
	int32_t t53 = -100486220;

    t53 = (x217>(x218|(x219/x220)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x222 = -1;
	volatile int16_t x223 = -7;
	volatile int32_t t54 = 56614412;

    t54 = (x221>(x222|(x223/x224)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x225 = 1627745268U;
	static int8_t x226 = -1;
	uint8_t x227 = UINT8_MAX;
	uint8_t x228 = 1U;
	static int32_t t55 = -1038090;

    t55 = (x225>(x226|(x227/x228)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x229 = 145049U;
	volatile int64_t x231 = -110943566557086269LL;
	int16_t x232 = -1;
	static int32_t t56 = -495980;

    t56 = (x229>(x230|(x231/x232)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x233 = INT32_MIN;
	int16_t x234 = -4364;
	int32_t t57 = -508453;

    t57 = (x233>(x234|(x235/x236)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x238 = INT16_MIN;
	int64_t x240 = INT64_MAX;
	int32_t t58 = -7;

    t58 = (x237>(x238|(x239/x240)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x241 = INT64_MIN;
	int32_t x242 = INT32_MAX;
	volatile int16_t x243 = -1;
	static int64_t x244 = INT64_MIN;

    t59 = (x241>(x242|(x243/x244)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint16_t x245 = 32U;
	int64_t x246 = 3827028562LL;
	int32_t x247 = 1898;

    t60 = (x245>(x246|(x247/x248)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint8_t x249 = UINT8_MAX;
	int8_t x250 = INT8_MIN;
	int16_t x251 = INT16_MIN;
	volatile int32_t t61 = -474703;

    t61 = (x249>(x250|(x251/x252)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x253 = INT64_MIN;
	int8_t x254 = -1;
	volatile uint32_t x255 = UINT32_MAX;
	static int32_t x256 = INT32_MIN;
	static int32_t t62 = -7142;

    t62 = (x253>(x254|(x255/x256)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x257 = 502;
	int32_t x258 = 45529044;
	static volatile uint32_t x259 = 29U;
	int64_t x260 = -142273854483LL;

    t63 = (x257>(x258|(x259/x260)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x261 = 228002625LLU;
	static int16_t x262 = 1302;
	uint16_t x263 = 1U;
	volatile int16_t x264 = INT16_MAX;
	volatile int32_t t64 = 101;

    t64 = (x261>(x262|(x263/x264)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x265 = INT32_MIN;
	static int64_t x266 = INT64_MIN;
	int16_t x267 = INT16_MIN;

    t65 = (x265>(x266|(x267/x268)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x269 = -1;
	volatile int64_t x270 = INT64_MAX;
	static volatile uint8_t x271 = UINT8_MAX;
	static volatile int32_t t66 = 126;

    t66 = (x269>(x270|(x271/x272)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x273 = INT8_MIN;
	volatile int32_t x274 = INT32_MIN;
	uint32_t x275 = 1671860U;
	int8_t x276 = INT8_MIN;
	volatile int32_t t67 = 0;

    t67 = (x273>(x274|(x275/x276)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x278 = INT64_MIN;
	uint8_t x279 = 1U;
	int32_t x280 = 309;
	volatile int32_t t68 = 496397183;

    t68 = (x277>(x278|(x279/x280)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x281 = INT16_MAX;
	static int64_t x282 = INT64_MIN;
	static volatile uint64_t x283 = 970721LLU;
	int8_t x284 = 32;
	int32_t t69 = 277;

    t69 = (x281>(x282|(x283/x284)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x285 = -18;
	int8_t x286 = -1;
	volatile int16_t x287 = INT16_MAX;
	uint64_t x288 = 2100191913775LLU;
	volatile int32_t t70 = -2169580;

    t70 = (x285>(x286|(x287/x288)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x289 = INT8_MIN;
	static int16_t x291 = INT16_MIN;

    t71 = (x289>(x290|(x291/x292)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x294 = -1;
	int16_t x295 = INT16_MIN;
	uint32_t x296 = 1644U;
	int32_t t72 = 11135053;

    t72 = (x293>(x294|(x295/x296)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x297 = -1;
	int16_t x298 = INT16_MAX;
	int16_t x299 = -27;
	int16_t x300 = INT16_MIN;
	int32_t t73 = -691809842;

    t73 = (x297>(x298|(x299/x300)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x301 = 56;
	int16_t x302 = -6093;
	int16_t x303 = INT16_MIN;
	static int32_t x304 = 35;
	volatile int32_t t74 = -47618944;

    t74 = (x301>(x302|(x303/x304)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x305 = 45;
	volatile int32_t x306 = 28016561;
	uint8_t x307 = 6U;
	int8_t x308 = -1;
	int32_t t75 = 213;

    t75 = (x305>(x306|(x307/x308)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x310 = -1LL;
	volatile int8_t x311 = INT8_MAX;
	static int16_t x312 = -2926;
	volatile int32_t t76 = 27772309;

    t76 = (x309>(x310|(x311/x312)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x313 = 5869344341LL;
	int8_t x314 = INT8_MIN;
	uint64_t x315 = 23149111LLU;
	volatile int32_t x316 = INT32_MIN;
	static int32_t t77 = 712;

    t77 = (x313>(x314|(x315/x316)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint8_t x317 = 1U;
	static int32_t x318 = INT32_MIN;
	int32_t x319 = INT32_MIN;
	int64_t x320 = -27925641562LL;
	volatile int32_t t78 = 494;

    t78 = (x317>(x318|(x319/x320)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x321 = 4091;
	volatile uint16_t x323 = 13552U;
	static int32_t t79 = -73885;

    t79 = (x321>(x322|(x323/x324)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x326 = -1LL;
	int32_t t80 = 1;

    t80 = (x325>(x326|(x327/x328)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x331 = 22351084LLU;
	static uint8_t x332 = 6U;
	static int32_t t81 = 3493952;

    t81 = (x329>(x330|(x331/x332)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x333 = 28U;
	int16_t x335 = INT16_MAX;
	volatile int8_t x336 = -1;
	static volatile int32_t t82 = -3;

    t82 = (x333>(x334|(x335/x336)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x337 = 517187640;
	volatile uint8_t x338 = 34U;
	uint8_t x339 = UINT8_MAX;
	volatile uint8_t x340 = 11U;
	volatile int32_t t83 = 994963463;

    t83 = (x337>(x338|(x339/x340)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint32_t x342 = UINT32_MAX;
	volatile int32_t t84 = -292258626;

    t84 = (x341>(x342|(x343/x344)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x345 = INT8_MIN;
	volatile uint64_t x347 = 7609762783681426LLU;
	uint64_t x348 = 17LLU;
	volatile int32_t t85 = 9365695;

    t85 = (x345>(x346|(x347/x348)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint32_t x349 = UINT32_MAX;
	int32_t x350 = INT32_MIN;
	static uint64_t x351 = UINT64_MAX;
	volatile int32_t t86 = 20;

    t86 = (x349>(x350|(x351/x352)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x353 = 64676LL;
	int32_t x354 = 4092475;
	uint8_t x356 = 47U;
	int32_t t87 = 965408236;

    t87 = (x353>(x354|(x355/x356)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x357 = INT16_MIN;
	int8_t x358 = 2;
	uint8_t x359 = UINT8_MAX;
	uint64_t x360 = 844117330979946902LLU;
	volatile int32_t t88 = -140081944;

    t88 = (x357>(x358|(x359/x360)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x361 = INT64_MIN;
	volatile int64_t x362 = INT64_MAX;
	int64_t x363 = -1LL;
	uint64_t x364 = 916640267LLU;
	volatile int32_t t89 = 193713;

    t89 = (x361>(x362|(x363/x364)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint8_t x365 = 1U;
	int8_t x366 = INT8_MIN;
	static int8_t x367 = -1;
	volatile int16_t x368 = -445;
	int32_t t90 = -94723;

    t90 = (x365>(x366|(x367/x368)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x371 = INT64_MAX;
	int16_t x372 = INT16_MAX;
	static int32_t t91 = 466699;

    t91 = (x369>(x370|(x371/x372)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x373 = INT32_MIN;
	static int16_t x374 = -1;
	int64_t x375 = 167619641907136389LL;
	int32_t x376 = INT32_MAX;
	static volatile int32_t t92 = -101651795;

    t92 = (x373>(x374|(x375/x376)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint8_t x377 = 0U;
	int8_t x379 = INT8_MAX;
	int8_t x380 = 2;
	volatile int32_t t93 = 533787;

    t93 = (x377>(x378|(x379/x380)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x382 = 29281U;
	int8_t x383 = -1;
	volatile int32_t x384 = 43025;
	static int32_t t94 = -4;

    t94 = (x381>(x382|(x383/x384)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x390 = -1;
	uint8_t x391 = 53U;
	static uint8_t x392 = 2U;
	volatile int32_t t95 = 6767940;

    t95 = (x389>(x390|(x391/x392)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint8_t x393 = 4U;
	int64_t x394 = INT64_MIN;
	volatile uint64_t x395 = 193326329680148LLU;
	volatile int32_t t96 = -1;

    t96 = (x393>(x394|(x395/x396)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x397 = 12120751U;
	int32_t x398 = -206881995;
	int64_t x399 = INT64_MIN;
	int32_t t97 = -44888383;

    t97 = (x397>(x398|(x399/x400)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x401 = INT32_MIN;
	uint32_t x402 = 138U;
	uint64_t x403 = 27828778692126LLU;
	int8_t x404 = -12;

    t98 = (x401>(x402|(x403/x404)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x406 = 168U;
	int16_t x407 = INT16_MIN;
	int32_t t99 = 1;

    t99 = (x405>(x406|(x407/x408)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint64_t x409 = 28LLU;
	uint16_t x410 = UINT16_MAX;
	uint16_t x411 = 169U;
	static int16_t x412 = -7;

    t100 = (x409>(x410|(x411/x412)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x414 = 813;
	uint32_t x416 = 41070030U;
	static volatile int32_t t101 = 600077990;

    t101 = (x413>(x414|(x415/x416)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x417 = INT16_MIN;
	static int32_t x419 = 35;
	int16_t x420 = 62;
	int32_t t102 = 79322064;

    t102 = (x417>(x418|(x419/x420)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x421 = -1LL;
	int64_t x423 = INT64_MIN;
	int8_t x424 = INT8_MIN;
	int32_t t103 = -329083;

    t103 = (x421>(x422|(x423/x424)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int8_t x425 = -1;
	int64_t x427 = INT64_MIN;
	uint8_t x428 = 1U;
	volatile int32_t t104 = 819;

    t104 = (x425>(x426|(x427/x428)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x429 = 909U;
	static int64_t x430 = INT64_MIN;
	uint64_t x431 = 1273479528537LLU;
	int8_t x432 = -2;
	volatile int32_t t105 = 124;

    t105 = (x429>(x430|(x431/x432)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x433 = -43;
	int32_t x436 = -895334;
	volatile int32_t t106 = 21938;

    t106 = (x433>(x434|(x435/x436)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x438 = -1;
	static int32_t t107 = -22905506;

    t107 = (x437>(x438|(x439/x440)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint16_t x441 = 6546U;
	int16_t x442 = -1;
	volatile uint64_t x443 = UINT64_MAX;
	volatile uint16_t x444 = 16U;

    t108 = (x441>(x442|(x443/x444)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x447 = 1;
	uint16_t x448 = 7U;
	volatile int32_t t109 = 6;

    t109 = (x445>(x446|(x447/x448)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x449 = INT64_MAX;
	int8_t x450 = INT8_MIN;
	int16_t x452 = -1;
	volatile int32_t t110 = 2534;

    t110 = (x449>(x450|(x451/x452)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint64_t x454 = 5627522LLU;
	int32_t t111 = 44712725;

    t111 = (x453>(x454|(x455/x456)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x457 = INT16_MIN;
	int16_t x458 = INT16_MIN;
	int8_t x460 = -5;
	int32_t t112 = -6521664;

    t112 = (x457>(x458|(x459/x460)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x465 = 6;
	int64_t x466 = 3860792817664187365LL;
	volatile int32_t t113 = 0;

    t113 = (x465>(x466|(x467/x468)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x469 = 6;
	volatile int8_t x470 = INT8_MAX;
	static uint16_t x471 = 71U;
	int32_t x472 = 27246480;
	int32_t t114 = 1549697;

    t114 = (x469>(x470|(x471/x472)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x473 = -6;
	int16_t x475 = -1;
	uint32_t x476 = 20U;
	volatile int32_t t115 = -2997;

    t115 = (x473>(x474|(x475/x476)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x477 = 32149U;
	static uint16_t x479 = 254U;
	int32_t t116 = 122892437;

    t116 = (x477>(x478|(x479/x480)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x487 = INT8_MIN;
	int32_t x488 = INT32_MAX;
	volatile int32_t t117 = 11439900;

    t117 = (x485>(x486|(x487/x488)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x489 = INT8_MIN;
	static int64_t x490 = -921472642093LL;
	static uint64_t x492 = 342514228583253LLU;

    t118 = (x489>(x490|(x491/x492)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x493 = 608951347293LLU;
	uint64_t x494 = 47LLU;
	int16_t x495 = INT16_MIN;
	static volatile int32_t t119 = 10011;

    t119 = (x493>(x494|(x495/x496)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint32_t x497 = UINT32_MAX;
	static int16_t x499 = INT16_MIN;
	static int32_t x500 = 1681;
	volatile int32_t t120 = -39165;

    t120 = (x497>(x498|(x499/x500)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x501 = INT8_MIN;
	uint16_t x503 = UINT16_MAX;
	static int8_t x504 = 1;
	volatile int32_t t121 = -25347013;

    t121 = (x501>(x502|(x503/x504)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint64_t x505 = 1375035LLU;
	uint64_t x506 = 486LLU;
	static uint64_t x507 = 30518LLU;
	volatile int16_t x508 = INT16_MIN;
	int32_t t122 = 25;

    t122 = (x505>(x506|(x507/x508)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x509 = -1;
	static int8_t x510 = -3;
	volatile uint64_t x511 = UINT64_MAX;
	static volatile int64_t x512 = INT64_MAX;
	int32_t t123 = 7520;

    t123 = (x509>(x510|(x511/x512)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x514 = INT8_MIN;
	int32_t x515 = 489655;
	int32_t t124 = 0;

    t124 = (x513>(x514|(x515/x516)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t t125 = 6586065;

    t125 = (x517>(x518|(x519/x520)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x521 = -2;
	int8_t x522 = -1;
	volatile uint32_t x523 = 4428674U;
	uint16_t x524 = 124U;
	int32_t t126 = 2406278;

    t126 = (x521>(x522|(x523/x524)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x525 = 4U;
	int16_t x526 = INT16_MIN;
	int16_t x528 = 5;
	int32_t t127 = 4084;

    t127 = (x525>(x526|(x527/x528)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x530 = 8;
	int32_t x531 = -1;
	int32_t t128 = -7049;

    t128 = (x529>(x530|(x531/x532)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint16_t x533 = 44U;
	uint64_t x534 = 25205714632382LLU;
	int16_t x535 = INT16_MAX;
	static int32_t x536 = INT32_MAX;
	volatile int32_t t129 = -43;

    t129 = (x533>(x534|(x535/x536)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x538 = INT64_MIN;
	int64_t x539 = 1039616543791133647LL;
	int8_t x540 = INT8_MIN;
	static int32_t t130 = -1554;

    t130 = (x537>(x538|(x539/x540)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x549 = -1LL;
	static volatile uint8_t x550 = UINT8_MAX;
	int8_t x551 = INT8_MIN;
	int64_t x552 = INT64_MAX;

    t131 = (x549>(x550|(x551/x552)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int32_t x553 = -83664;
	static int16_t x554 = INT16_MAX;
	volatile uint8_t x555 = UINT8_MAX;
	volatile int16_t x556 = INT16_MIN;
	volatile int32_t t132 = -156;

    t132 = (x553>(x554|(x555/x556)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x558 = UINT16_MAX;
	int16_t x559 = -1;
	int32_t x560 = 701;
	static int32_t t133 = 29296;

    t133 = (x557>(x558|(x559/x560)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x561 = INT8_MIN;
	int8_t x562 = -1;
	volatile int32_t x564 = -1;

    t134 = (x561>(x562|(x563/x564)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x566 = -378178LL;
	uint64_t x567 = UINT64_MAX;
	static int32_t x568 = 1139;
	volatile int32_t t135 = 193521080;

    t135 = (x565>(x566|(x567/x568)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x569 = 5U;
	static int64_t x570 = INT64_MIN;
	static volatile int64_t x571 = -1LL;
	int32_t t136 = -1000213;

    t136 = (x569>(x570|(x571/x572)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x573 = -1;
	int8_t x575 = INT8_MIN;
	static int8_t x576 = INT8_MIN;
	int32_t t137 = -790;

    t137 = (x573>(x574|(x575/x576)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint32_t x580 = 22U;
	static volatile int32_t t138 = -27;

    t138 = (x577>(x578|(x579/x580)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x582 = INT8_MAX;
	int64_t x584 = -1LL;
	int32_t t139 = 3672771;

    t139 = (x581>(x582|(x583/x584)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x586 = INT16_MIN;
	uint8_t x587 = 94U;
	uint16_t x588 = 28624U;

    t140 = (x585>(x586|(x587/x588)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x589 = -1010058579178055LL;
	uint64_t x590 = 46142158162483LLU;
	static uint8_t x591 = 4U;
	int32_t x592 = INT32_MAX;
	int32_t t141 = -37317506;

    t141 = (x589>(x590|(x591/x592)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x593 = -1;
	int64_t x595 = INT64_MIN;
	volatile int32_t t142 = 1164;

    t142 = (x593>(x594|(x595/x596)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint64_t x599 = 3171LLU;
	volatile int64_t x600 = -41183LL;
	int32_t t143 = 53937;

    t143 = (x597>(x598|(x599/x600)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint64_t x601 = UINT64_MAX;
	volatile uint32_t x602 = 2536435U;
	int8_t x604 = 2;

    t144 = (x601>(x602|(x603/x604)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int64_t x605 = INT64_MIN;
	int32_t x606 = INT32_MIN;
	uint16_t x607 = 14760U;
	uint16_t x608 = 12822U;
	static volatile int32_t t145 = -968993;

    t145 = (x605>(x606|(x607/x608)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint64_t x609 = UINT64_MAX;
	uint16_t x610 = 428U;
	int32_t x611 = 475372;
	static volatile int32_t t146 = 1;

    t146 = (x609>(x610|(x611/x612)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int64_t x613 = -1LL;
	int8_t x614 = INT8_MIN;
	int16_t x615 = -1;

    t147 = (x613>(x614|(x615/x616)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x617 = 6217905U;
	volatile uint16_t x618 = UINT16_MAX;
	int8_t x619 = -1;
	int32_t x620 = -1;
	volatile int32_t t148 = -6;

    t148 = (x617>(x618|(x619/x620)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint16_t x624 = 1103U;
	int32_t t149 = 11;

    t149 = (x621>(x622|(x623/x624)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x625 = INT32_MIN;
	int64_t x626 = INT64_MIN;
	volatile int8_t x627 = -1;
	static int64_t x628 = -1LL;
	volatile int32_t t150 = -2352976;

    t150 = (x625>(x626|(x627/x628)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint32_t x630 = 47560915U;
	int8_t x631 = 1;
	static uint8_t x632 = 3U;
	volatile int32_t t151 = -21802;

    t151 = (x629>(x630|(x631/x632)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x633 = UINT32_MAX;
	uint32_t x634 = UINT32_MAX;
	volatile int64_t x635 = INT64_MAX;
	volatile uint8_t x636 = 2U;

    t152 = (x633>(x634|(x635/x636)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x638 = 322556061512953061LL;
	uint32_t x640 = 4365U;
	volatile int32_t t153 = 1704046;

    t153 = (x637>(x638|(x639/x640)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x641 = -447699LL;
	int32_t x643 = 1;
	uint64_t x644 = 7818355LLU;
	int32_t t154 = -33356264;

    t154 = (x641>(x642|(x643/x644)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x646 = 2468259935588LLU;
	static uint64_t x647 = UINT64_MAX;
	static int32_t x648 = -249;
	int32_t t155 = 2970;

    t155 = (x645>(x646|(x647/x648)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint8_t x650 = 5U;
	static int64_t x651 = -1LL;
	int64_t x652 = -1LL;

    t156 = (x649>(x650|(x651/x652)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x654 = INT32_MIN;
	uint64_t x655 = 13454LLU;
	int32_t t157 = -3345;

    t157 = (x653>(x654|(x655/x656)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x657 = INT8_MAX;
	int16_t x659 = INT16_MIN;
	int8_t x660 = INT8_MIN;
	volatile int32_t t158 = -291;

    t158 = (x657>(x658|(x659/x660)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x661 = UINT8_MAX;
	static volatile int8_t x662 = INT8_MIN;
	static uint16_t x663 = UINT16_MAX;
	int64_t x664 = -14842640LL;
	volatile int32_t t159 = 48018;

    t159 = (x661>(x662|(x663/x664)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x665 = -24494;
	int64_t x666 = -1LL;
	int32_t x668 = -1;
	volatile int32_t t160 = -190855201;

    t160 = (x665>(x666|(x667/x668)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x669 = -1;
	int32_t x671 = -1;
	int32_t x672 = INT32_MAX;

    t161 = (x669>(x670|(x671/x672)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x673 = -2;
	int32_t x674 = INT32_MAX;
	volatile int32_t x675 = INT32_MIN;
	int32_t t162 = 71;

    t162 = (x673>(x674|(x675/x676)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x677 = INT64_MIN;
	static int16_t x679 = -1;
	int32_t t163 = -1;

    t163 = (x677>(x678|(x679/x680)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x682 = 87U;
	int64_t x684 = -1LL;
	int32_t t164 = 1388;

    t164 = (x681>(x682|(x683/x684)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x686 = 31312796U;
	uint16_t x687 = UINT16_MAX;
	static int64_t x688 = -1LL;
	static int32_t t165 = 98148;

    t165 = (x685>(x686|(x687/x688)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x689 = INT64_MIN;
	uint32_t x690 = 206515U;
	volatile int8_t x692 = -1;
	int32_t t166 = -14188;

    t166 = (x689>(x690|(x691/x692)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x693 = 11;
	static volatile uint8_t x694 = UINT8_MAX;
	static uint32_t x695 = 79609751U;
	int16_t x696 = INT16_MIN;
	volatile int32_t t167 = 226154894;

    t167 = (x693>(x694|(x695/x696)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x697 = 15U;
	int8_t x698 = 1;
	int8_t x699 = INT8_MIN;

    t168 = (x697>(x698|(x699/x700)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x701 = INT32_MIN;
	uint32_t x702 = UINT32_MAX;
	uint8_t x703 = 1U;
	static int64_t x704 = INT64_MIN;
	int32_t t169 = -40634419;

    t169 = (x701>(x702|(x703/x704)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x705 = INT32_MIN;
	static uint16_t x706 = UINT16_MAX;
	static int16_t x707 = INT16_MAX;
	static int32_t t170 = -130662086;

    t170 = (x705>(x706|(x707/x708)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x709 = INT32_MIN;
	int16_t x710 = INT16_MIN;
	static int16_t x711 = 121;
	int32_t x712 = INT32_MAX;
	volatile int32_t t171 = -37;

    t171 = (x709>(x710|(x711/x712)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x713 = 3759U;
	int16_t x714 = INT16_MIN;
	int16_t x716 = -1;
	int32_t t172 = -503;

    t172 = (x713>(x714|(x715/x716)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x721 = 1;
	volatile int8_t x722 = INT8_MIN;
	static int64_t x723 = INT64_MIN;
	uint32_t x724 = 612U;
	int32_t t173 = -138982;

    t173 = (x721>(x722|(x723/x724)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint8_t x725 = 80U;
	uint16_t x727 = 62U;
	volatile uint32_t x728 = UINT32_MAX;

    t174 = (x725>(x726|(x727/x728)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x729 = -1LL;
	uint16_t x730 = 1432U;
	uint64_t x731 = 641986335991102869LLU;
	volatile int32_t t175 = -1;

    t175 = (x729>(x730|(x731/x732)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint64_t x733 = 3904604337609653LLU;
	volatile int32_t x734 = -1;
	uint16_t x735 = 0U;
	uint16_t x736 = UINT16_MAX;
	int32_t t176 = 0;

    t176 = (x733>(x734|(x735/x736)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x737 = 0U;
	int32_t x738 = 161428476;
	int16_t x740 = INT16_MAX;
	int32_t t177 = -64;

    t177 = (x737>(x738|(x739/x740)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x741 = INT16_MAX;
	int32_t x742 = -1;
	int16_t x743 = -37;
	int32_t t178 = 164277660;

    t178 = (x741>(x742|(x743/x744)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x746 = INT32_MAX;
	volatile int8_t x747 = INT8_MIN;
	int8_t x748 = INT8_MIN;
	static volatile int32_t t179 = 1319882;

    t179 = (x745>(x746|(x747/x748)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x749 = 1U;
	uint16_t x751 = UINT16_MAX;
	int32_t x752 = INT32_MIN;
	int32_t t180 = 6806789;

    t180 = (x749>(x750|(x751/x752)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x753 = INT32_MAX;
	uint64_t x754 = UINT64_MAX;
	int8_t x755 = INT8_MIN;
	int16_t x756 = 272;
	int32_t t181 = -403;

    t181 = (x753>(x754|(x755/x756)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x757 = INT32_MIN;
	int16_t x758 = -1;
	int32_t x759 = -1;
	int32_t t182 = 219;

    t182 = (x757>(x758|(x759/x760)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x761 = INT8_MAX;
	static int64_t x762 = -1851626093LL;
	volatile uint16_t x763 = UINT16_MAX;
	int64_t x764 = INT64_MIN;
	static int32_t t183 = 12160;

    t183 = (x761>(x762|(x763/x764)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x766 = -15883686;
	int32_t x768 = INT32_MAX;
	static int32_t t184 = -1451973;

    t184 = (x765>(x766|(x767/x768)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x770 = 5;
	volatile uint16_t x771 = UINT16_MAX;
	int16_t x772 = -357;
	volatile int32_t t185 = 5669;

    t185 = (x769>(x770|(x771/x772)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x773 = -70948430917954558LL;
	static volatile int8_t x774 = INT8_MAX;
	volatile uint8_t x775 = 4U;
	int64_t x776 = INT64_MAX;
	volatile int32_t t186 = -10066;

    t186 = (x773>(x774|(x775/x776)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x777 = 2778LLU;
	static uint8_t x778 = 1U;
	int32_t x779 = -1;
	static volatile int8_t x780 = INT8_MAX;
	int32_t t187 = 266426870;

    t187 = (x777>(x778|(x779/x780)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x781 = 2020418U;
	uint32_t x782 = UINT32_MAX;
	uint8_t x783 = 60U;
	int32_t t188 = 82351237;

    t188 = (x781>(x782|(x783/x784)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x785 = -1;
	static volatile int32_t x786 = INT32_MIN;
	uint64_t x787 = UINT64_MAX;
	int16_t x788 = INT16_MIN;
	static int32_t t189 = -7826530;

    t189 = (x785>(x786|(x787/x788)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x790 = -1;
	int32_t x791 = -7762;
	static uint16_t x792 = 9U;

    t190 = (x789>(x790|(x791/x792)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x794 = INT64_MIN;
	uint64_t x796 = UINT64_MAX;
	volatile int32_t t191 = -370;

    t191 = (x793>(x794|(x795/x796)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x797 = INT32_MIN;
	static int8_t x798 = INT8_MIN;
	int64_t x799 = INT64_MAX;
	static int8_t x800 = -1;
	int32_t t192 = -56;

    t192 = (x797>(x798|(x799/x800)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x801 = 0;
	static int16_t x802 = -1;
	uint32_t x803 = UINT32_MAX;
	uint64_t x804 = 225LLU;

    t193 = (x801>(x802|(x803/x804)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x805 = INT64_MAX;
	static volatile uint64_t x806 = UINT64_MAX;
	uint16_t x807 = UINT16_MAX;

    t194 = (x805>(x806|(x807/x808)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x809 = INT32_MIN;
	uint8_t x810 = 5U;
	uint32_t x812 = UINT32_MAX;
	volatile int32_t t195 = 1;

    t195 = (x809>(x810|(x811/x812)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x817 = -202;
	uint8_t x818 = 109U;
	volatile int32_t t196 = -1827406;

    t196 = (x817>(x818|(x819/x820)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint32_t x821 = 0U;
	static int8_t x822 = 1;
	uint64_t x824 = 30839482117929976LLU;
	int32_t t197 = 10234215;

    t197 = (x821>(x822|(x823/x824)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x825 = INT16_MIN;
	volatile int16_t x826 = INT16_MAX;
	int8_t x827 = -1;
	int16_t x828 = -1;
	int32_t t198 = -332;

    t198 = (x825>(x826|(x827/x828)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x829 = -109566266156633LL;
	int8_t x831 = INT8_MIN;
	volatile int8_t x832 = 1;
	int32_t t199 = 12;

    t199 = (x829>(x830|(x831/x832)));

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

