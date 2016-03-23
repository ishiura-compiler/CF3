
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

int8_t x1 = INT8_MIN;
uint16_t x2 = UINT16_MAX;
volatile int8_t x4 = INT8_MAX;
int64_t x8 = 9843620101935744LL;
uint8_t x14 = 4U;
int32_t x18 = INT32_MAX;
int64_t x22 = INT64_MAX;
int16_t x24 = -4;
uint8_t x27 = UINT8_MAX;
static int32_t t7 = 1;
int8_t x38 = INT8_MIN;
static int8_t x40 = -54;
static uint64_t x41 = 8104100907LLU;
int32_t x44 = INT32_MAX;
uint32_t x47 = UINT32_MAX;
volatile uint16_t x52 = 122U;
int32_t t12 = 1719;
volatile int32_t t13 = -3956701;
int16_t x65 = -1;
uint32_t x78 = 15U;
int8_t x79 = INT8_MIN;
volatile int32_t x80 = 52957;
int32_t t19 = 130366323;
int32_t t21 = 0;
int32_t t22 = -4;
volatile uint32_t x96 = 7079814U;
static int32_t x97 = INT32_MIN;
int64_t x106 = 0LL;
volatile int64_t x107 = 40597788339521093LL;
uint32_t x116 = UINT32_MAX;
int32_t t29 = 3436490;
int16_t x123 = -11966;
uint32_t x124 = 1113483U;
int16_t x126 = INT16_MIN;
uint16_t x127 = 419U;
volatile uint64_t x129 = 269152330525988LLU;
uint8_t x136 = UINT8_MAX;
volatile int32_t t33 = -763;
static uint64_t x137 = 4686206062LLU;
volatile int64_t x147 = INT64_MAX;
static int32_t t36 = 171552805;
int32_t x150 = INT32_MIN;
uint64_t x152 = 276062623286LLU;
int16_t x153 = -3;
int8_t x156 = INT8_MAX;
int32_t t38 = -1;
uint32_t x160 = 33721696U;
uint16_t x161 = 0U;
static int8_t x166 = INT8_MIN;
int32_t x168 = INT32_MIN;
int32_t t41 = 10467966;
int8_t x170 = INT8_MIN;
static uint8_t x173 = 1U;
volatile int32_t t43 = -3954;
uint32_t x178 = UINT32_MAX;
static int16_t x179 = -1;
int16_t x181 = -778;
static int16_t x182 = INT16_MAX;
int32_t t45 = 6;
volatile int32_t t46 = -488000;
int64_t x192 = INT64_MIN;
volatile int16_t x198 = INT16_MIN;
static volatile int32_t t49 = -52;
int64_t x203 = INT64_MIN;
uint8_t x207 = UINT8_MAX;
uint64_t x209 = UINT64_MAX;
int64_t x212 = -1941561712133797LL;
static volatile int16_t x214 = -340;
int32_t x216 = INT32_MIN;
static int32_t x217 = INT32_MIN;
uint16_t x218 = 1981U;
volatile int32_t t54 = -654345;
uint32_t x231 = 547135235U;
int64_t x232 = -1LL;
int64_t x234 = -1LL;
uint64_t x241 = 304LLU;
int16_t x246 = -1;
uint32_t x249 = 279757U;
int32_t x250 = -533928;
static uint32_t x252 = 104270124U;
int32_t x253 = INT32_MIN;
int32_t t63 = -1;
int64_t x259 = -1LL;
int32_t x269 = -1863417;
static uint8_t x270 = 20U;
static int8_t x271 = 8;
uint32_t x276 = UINT32_MAX;
int16_t x283 = -44;
int32_t t70 = -7912998;
uint64_t x294 = 472LLU;
int64_t x295 = INT64_MIN;
uint8_t x313 = 3U;
int8_t x317 = INT8_MIN;
volatile int64_t x318 = -286LL;
uint32_t x320 = UINT32_MAX;
volatile int64_t x325 = INT64_MAX;
int32_t t82 = 1007540;
int16_t x333 = INT16_MAX;
int32_t t84 = 19697;
int16_t x343 = INT16_MIN;
volatile uint64_t x344 = 5334223788609034LLU;
int32_t t85 = 152214485;
static int8_t x348 = INT8_MAX;
int32_t t87 = -1;
volatile uint16_t x354 = 0U;
static volatile uint16_t x355 = UINT16_MAX;
static int16_t x356 = -1;
static uint8_t x364 = UINT8_MAX;
static int32_t t90 = 3428;
volatile int32_t t91 = -1;
int64_t x369 = 122103922215262565LL;
static volatile int16_t x370 = INT16_MAX;
volatile uint64_t x373 = UINT64_MAX;
int16_t x375 = INT16_MIN;
volatile int64_t x376 = -3004557040699LL;
int8_t x380 = -1;
uint64_t x381 = 207431953116697LLU;
volatile int16_t x383 = 0;
int32_t x386 = -1;
uint32_t x388 = UINT32_MAX;
uint32_t x389 = 108996109U;
int32_t x390 = INT32_MIN;
volatile uint16_t x396 = 174U;
int16_t x404 = -1;
int32_t x407 = -1;
volatile int32_t t101 = 172744925;
int64_t x412 = -1LL;
volatile int16_t x418 = INT16_MIN;
static int16_t x429 = -1;
static volatile int32_t t108 = 78805333;
static int16_t x451 = 9;
int8_t x452 = -18;
static uint16_t x456 = UINT16_MAX;
static int32_t t116 = 88628958;
static int16_t x474 = -1;
volatile int16_t x479 = INT16_MIN;
int32_t t120 = -3;
int8_t x490 = 0;
int64_t x493 = INT64_MAX;
int64_t x499 = -1LL;
int8_t x513 = INT8_MAX;
volatile int16_t x515 = INT16_MAX;
uint8_t x516 = 1U;
volatile int32_t t128 = 6266771;
volatile uint64_t x517 = 91296513245593LLU;
volatile int16_t x518 = INT16_MAX;
volatile int32_t t132 = -2264432;
volatile uint8_t x533 = 2U;
uint32_t x535 = 18U;
int32_t x539 = 64092426;
int64_t x545 = INT64_MAX;
uint16_t x546 = 5846U;
int32_t t138 = -11;
int32_t x561 = INT32_MIN;
static uint16_t x565 = UINT16_MAX;
int8_t x571 = -1;
int32_t t143 = 10134986;
uint16_t x583 = 12292U;
int8_t x588 = INT8_MAX;
int64_t x596 = 3626893657482464LL;
int64_t x597 = -13369433603LL;
static uint64_t x600 = UINT64_MAX;
static int8_t x601 = INT8_MAX;
int64_t x603 = -1LL;
int32_t t150 = -4;
uint32_t x605 = 475838360U;
static int32_t x606 = INT32_MIN;
int8_t x607 = INT8_MIN;
uint64_t x610 = UINT64_MAX;
int64_t x611 = 245331365045LL;
static int32_t t154 = -3801785;
int64_t x622 = -5066LL;
static uint32_t x624 = UINT32_MAX;
int16_t x626 = -902;
volatile int32_t x627 = -32725;
volatile int32_t t160 = 1079;
volatile uint16_t x647 = 1459U;
uint32_t x655 = 115344U;
volatile int16_t x658 = -15;
volatile int8_t x660 = -1;
int8_t x662 = INT8_MIN;
volatile uint16_t x667 = 23U;
int32_t t166 = 738708;
int32_t x669 = INT32_MIN;
static int32_t t168 = 917476647;
int64_t x680 = INT64_MIN;
int32_t x686 = -1;
int32_t t171 = -32;
int32_t x696 = -107969944;
volatile int32_t t173 = 120;
int64_t x698 = INT64_MAX;
uint32_t x701 = UINT32_MAX;
int16_t x703 = INT16_MIN;
int32_t t177 = 258606573;
int16_t x714 = -20;
int8_t x728 = INT8_MAX;
static volatile uint16_t x730 = UINT16_MAX;
uint8_t x738 = 3U;
static volatile int16_t x739 = -1;
static volatile int32_t t185 = 14446248;
int64_t x746 = -1LL;
int32_t x747 = INT32_MIN;
static int8_t x749 = INT8_MIN;
volatile int8_t x750 = INT8_MAX;
int16_t x751 = -432;
uint64_t x754 = 44992807925LLU;
int16_t x755 = INT16_MAX;
int16_t x756 = INT16_MAX;
int64_t x763 = INT64_MIN;
uint32_t x768 = UINT32_MAX;
int64_t x774 = 2740LL;
int32_t x778 = -7731;
volatile int32_t t194 = 772;
static volatile int32_t t195 = -2;
uint64_t x788 = 24196248LLU;
static int32_t x789 = INT32_MIN;
volatile int32_t t197 = -73;
volatile int64_t x794 = INT64_MIN;
uint8_t x800 = UINT8_MAX;


void f0(void) {
    	volatile uint64_t x3 = 38992418755138LLU;
	volatile int32_t t0 = -44856142;

    t0 = (((x1|x2)==x3)!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = 1748LLU;
	int32_t x6 = INT32_MIN;
	static int16_t x7 = 1130;
	volatile int32_t t1 = 2111309;

    t1 = (((x5|x6)==x7)!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 178264268140LLU;
	uint32_t x10 = UINT32_MAX;
	uint32_t x11 = 10654U;
	int8_t x12 = 3;
	int32_t t2 = -1;

    t2 = (((x9|x10)==x11)!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = 47U;
	int32_t x15 = INT32_MIN;
	int32_t x16 = 125825;
	volatile int32_t t3 = -256761;

    t3 = (((x13|x14)==x15)!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -1;
	static uint8_t x19 = 0U;
	uint16_t x20 = 23U;
	volatile int32_t t4 = -3;

    t4 = (((x17|x18)==x19)!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = 12U;
	volatile uint8_t x23 = 95U;
	int32_t t5 = -20428;

    t5 = (((x21|x22)==x23)!=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = INT8_MIN;
	uint16_t x26 = 1U;
	int8_t x28 = INT8_MIN;
	volatile int32_t t6 = 13;

    t6 = (((x25|x26)==x27)!=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = INT16_MIN;
	static int16_t x30 = INT16_MIN;
	uint32_t x31 = 3831U;
	static int8_t x32 = INT8_MIN;

    t7 = (((x29|x30)==x31)!=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = 4068U;
	uint8_t x34 = 65U;
	int64_t x35 = INT64_MIN;
	int64_t x36 = 27LL;
	int32_t t8 = 54;

    t8 = (((x33|x34)==x35)!=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x37 = INT16_MAX;
	int8_t x39 = 0;
	int32_t t9 = 1;

    t9 = (((x37|x38)==x39)!=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x42 = 1;
	volatile uint8_t x43 = 3U;
	int32_t t10 = -4;

    t10 = (((x41|x42)==x43)!=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = INT16_MIN;
	int8_t x46 = INT8_MIN;
	int32_t x48 = 62903;
	int32_t t11 = -1590;

    t11 = (((x45|x46)==x47)!=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x49 = 1709446821LLU;
	int32_t x50 = -141;
	uint64_t x51 = 67211820129346LLU;

    t12 = (((x49|x50)==x51)!=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MIN;
	uint64_t x54 = 1971LLU;
	uint8_t x55 = UINT8_MAX;
	uint8_t x56 = 1U;

    t13 = (((x53|x54)==x55)!=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x57 = INT8_MIN;
	uint32_t x58 = 70661U;
	volatile uint32_t x59 = 366990U;
	int64_t x60 = INT64_MIN;
	volatile int32_t t14 = 102;

    t14 = (((x57|x58)==x59)!=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = -1;
	int64_t x62 = INT64_MAX;
	int64_t x63 = -4538811771308425LL;
	uint16_t x64 = 24U;
	int32_t t15 = 157456907;

    t15 = (((x61|x62)==x63)!=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x66 = UINT64_MAX;
	uint64_t x67 = 3617266431293151514LLU;
	int32_t x68 = INT32_MIN;
	static volatile int32_t t16 = 24025380;

    t16 = (((x65|x66)==x67)!=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = -1LL;
	int64_t x70 = -24736588178541LL;
	uint32_t x71 = 277935U;
	int32_t x72 = INT32_MIN;
	static int32_t t17 = 8763722;

    t17 = (((x69|x70)==x71)!=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = -102;
	static int32_t x74 = INT32_MAX;
	int32_t x75 = INT32_MAX;
	int8_t x76 = 0;
	volatile int32_t t18 = -20508;

    t18 = (((x73|x74)==x75)!=x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x77 = INT64_MIN;

    t19 = (((x77|x78)==x79)!=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x81 = 62U;
	volatile uint16_t x82 = UINT16_MAX;
	int16_t x83 = 4922;
	uint8_t x84 = UINT8_MAX;
	int32_t t20 = 328;

    t20 = (((x81|x82)==x83)!=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x85 = -1;
	int32_t x86 = -147238826;
	int64_t x87 = INT64_MAX;
	int32_t x88 = -616833;

    t21 = (((x85|x86)==x87)!=x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = INT32_MIN;
	int32_t x90 = -1;
	volatile int8_t x91 = INT8_MIN;
	uint8_t x92 = 8U;

    t22 = (((x89|x90)==x91)!=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = -1LL;
	uint64_t x94 = UINT64_MAX;
	int8_t x95 = INT8_MAX;
	volatile int32_t t23 = 1;

    t23 = (((x93|x94)==x95)!=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x98 = UINT16_MAX;
	static uint32_t x99 = 401462804U;
	static int32_t x100 = -1;
	int32_t t24 = -919375578;

    t24 = (((x97|x98)==x99)!=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = INT64_MIN;
	int8_t x102 = INT8_MAX;
	uint64_t x103 = 61284LLU;
	int32_t x104 = INT32_MIN;
	int32_t t25 = -37082;

    t25 = (((x101|x102)==x103)!=x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x105 = UINT64_MAX;
	volatile uint32_t x108 = 27U;
	volatile int32_t t26 = -30170;

    t26 = (((x105|x106)==x107)!=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x109 = 2U;
	int32_t x110 = INT32_MIN;
	int8_t x111 = INT8_MIN;
	static int16_t x112 = 5;
	volatile int32_t t27 = 12;

    t27 = (((x109|x110)==x111)!=x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint16_t x113 = 12280U;
	int64_t x114 = -1LL;
	volatile uint8_t x115 = UINT8_MAX;
	static volatile int32_t t28 = 21;

    t28 = (((x113|x114)==x115)!=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint64_t x117 = UINT64_MAX;
	volatile int8_t x118 = INT8_MIN;
	int32_t x119 = -1;
	volatile uint8_t x120 = UINT8_MAX;

    t29 = (((x117|x118)==x119)!=x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x121 = -1;
	uint64_t x122 = UINT64_MAX;
	int32_t t30 = 66560074;

    t30 = (((x121|x122)==x123)!=x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x125 = -1;
	int64_t x128 = -187LL;
	static volatile int32_t t31 = 12609626;

    t31 = (((x125|x126)==x127)!=x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x130 = INT32_MAX;
	volatile int16_t x131 = -1;
	int64_t x132 = INT64_MIN;
	volatile int32_t t32 = 355714;

    t32 = (((x129|x130)==x131)!=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = -1;
	uint8_t x134 = 0U;
	int16_t x135 = -422;

    t33 = (((x133|x134)==x135)!=x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x138 = INT32_MAX;
	uint32_t x139 = 1063401U;
	uint16_t x140 = 1484U;
	volatile int32_t t34 = 341100;

    t34 = (((x137|x138)==x139)!=x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = -1;
	uint64_t x142 = UINT64_MAX;
	static int32_t x143 = INT32_MIN;
	int32_t x144 = INT32_MAX;
	int32_t t35 = -10;

    t35 = (((x141|x142)==x143)!=x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x145 = UINT8_MAX;
	static volatile uint32_t x146 = 190U;
	int64_t x148 = -1LL;

    t36 = (((x145|x146)==x147)!=x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x149 = -1;
	static uint16_t x151 = UINT16_MAX;
	int32_t t37 = -110820669;

    t37 = (((x149|x150)==x151)!=x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x154 = -7117;
	int8_t x155 = INT8_MIN;

    t38 = (((x153|x154)==x155)!=x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x157 = -1;
	int64_t x158 = 417534157371826LL;
	uint16_t x159 = 10395U;
	static int32_t t39 = 53236;

    t39 = (((x157|x158)==x159)!=x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x162 = 174U;
	int32_t x163 = 3;
	int16_t x164 = -1;
	int32_t t40 = -8970039;

    t40 = (((x161|x162)==x163)!=x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = -65765098LL;
	uint32_t x167 = 128354089U;

    t41 = (((x165|x166)==x167)!=x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = 1573480LL;
	int64_t x171 = INT64_MIN;
	int16_t x172 = INT16_MAX;
	volatile int32_t t42 = -39759255;

    t42 = (((x169|x170)==x171)!=x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x174 = INT16_MIN;
	volatile int8_t x175 = INT8_MAX;
	int8_t x176 = 62;

    t43 = (((x173|x174)==x175)!=x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = -22350627;
	uint16_t x180 = UINT16_MAX;
	int32_t t44 = -78291;

    t44 = (((x177|x178)==x179)!=x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x183 = 0U;
	static uint32_t x184 = UINT32_MAX;

    t45 = (((x181|x182)==x183)!=x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x185 = 7;
	int64_t x186 = -1LL;
	static uint64_t x187 = UINT64_MAX;
	int16_t x188 = 2;

    t46 = (((x185|x186)==x187)!=x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = 523;
	uint64_t x190 = 18740498188025225LLU;
	uint16_t x191 = 104U;
	int32_t t47 = -1588;

    t47 = (((x189|x190)==x191)!=x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = -27448;
	int64_t x194 = 12032684LL;
	int16_t x195 = -1;
	static volatile int32_t x196 = 68;
	int32_t t48 = -988559;

    t48 = (((x193|x194)==x195)!=x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = INT64_MAX;
	uint64_t x199 = UINT64_MAX;
	volatile int16_t x200 = -1;

    t49 = (((x197|x198)==x199)!=x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = -5;
	int64_t x202 = 7342750649600911LL;
	int8_t x204 = -1;
	volatile int32_t t50 = -15;

    t50 = (((x201|x202)==x203)!=x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = 11;
	static int16_t x206 = -160;
	int16_t x208 = 7;
	int32_t t51 = -13222899;

    t51 = (((x205|x206)==x207)!=x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x210 = INT8_MAX;
	uint32_t x211 = UINT32_MAX;
	static int32_t t52 = -56316;

    t52 = (((x209|x210)==x211)!=x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x213 = -1;
	int64_t x215 = -1LL;
	volatile int32_t t53 = -586;

    t53 = (((x213|x214)==x215)!=x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x219 = -1;
	uint64_t x220 = UINT64_MAX;

    t54 = (((x217|x218)==x219)!=x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x221 = INT16_MIN;
	int32_t x222 = -1;
	int64_t x223 = INT64_MAX;
	int8_t x224 = INT8_MIN;
	volatile int32_t t55 = 7335016;

    t55 = (((x221|x222)==x223)!=x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x225 = INT16_MIN;
	int32_t x226 = INT32_MIN;
	static volatile int16_t x227 = INT16_MIN;
	int64_t x228 = INT64_MIN;
	int32_t t56 = -1;

    t56 = (((x225|x226)==x227)!=x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x229 = 2527527U;
	volatile uint32_t x230 = 123398U;
	int32_t t57 = 196933;

    t57 = (((x229|x230)==x231)!=x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x233 = UINT16_MAX;
	volatile int32_t x235 = -420525927;
	uint16_t x236 = 82U;
	int32_t t58 = 27242369;

    t58 = (((x233|x234)==x235)!=x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile uint16_t x237 = 1U;
	static volatile uint64_t x238 = 197967429572426LLU;
	uint32_t x239 = 201215204U;
	int32_t x240 = -45709;
	volatile int32_t t59 = 7;

    t59 = (((x237|x238)==x239)!=x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x242 = INT16_MIN;
	int64_t x243 = INT64_MAX;
	int32_t x244 = INT32_MIN;
	volatile int32_t t60 = 1436;

    t60 = (((x241|x242)==x243)!=x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = INT64_MIN;
	static uint64_t x247 = 3303486018938867LLU;
	uint32_t x248 = 93723188U;
	volatile int32_t t61 = -213;

    t61 = (((x245|x246)==x247)!=x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x251 = INT64_MIN;
	int32_t t62 = -54715;

    t62 = (((x249|x250)==x251)!=x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x254 = 49U;
	int64_t x255 = 7LL;
	static int8_t x256 = -1;

    t63 = (((x253|x254)==x255)!=x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x257 = -51003044138495LL;
	volatile uint8_t x258 = 122U;
	uint32_t x260 = 19240731U;
	static volatile int32_t t64 = -3663;

    t64 = (((x257|x258)==x259)!=x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int32_t x261 = INT32_MIN;
	static int32_t x262 = INT32_MIN;
	uint8_t x263 = 1U;
	static int16_t x264 = -1;
	volatile int32_t t65 = 684020772;

    t65 = (((x261|x262)==x263)!=x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int16_t x265 = INT16_MAX;
	static int16_t x266 = INT16_MIN;
	static volatile int32_t x267 = INT32_MIN;
	volatile uint64_t x268 = UINT64_MAX;
	static volatile int32_t t66 = 121173;

    t66 = (((x265|x266)==x267)!=x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x272 = -3;
	int32_t t67 = 2240807;

    t67 = (((x269|x270)==x271)!=x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint8_t x273 = 81U;
	volatile uint32_t x274 = UINT32_MAX;
	uint8_t x275 = UINT8_MAX;
	int32_t t68 = 1880;

    t68 = (((x273|x274)==x275)!=x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = 11;
	volatile int32_t x278 = INT32_MIN;
	int8_t x279 = INT8_MIN;
	uint64_t x280 = 326506LLU;
	int32_t t69 = -52012;

    t69 = (((x277|x278)==x279)!=x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x281 = 6U;
	uint64_t x282 = 3LLU;
	static int16_t x284 = -1;

    t70 = (((x281|x282)==x283)!=x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x285 = 0;
	int8_t x286 = 43;
	int32_t x287 = 2059;
	int64_t x288 = -60932862178072LL;
	volatile int32_t t71 = -60528;

    t71 = (((x285|x286)==x287)!=x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint16_t x289 = 319U;
	uint8_t x290 = 3U;
	volatile int64_t x291 = -1LL;
	int8_t x292 = -1;
	volatile int32_t t72 = 8;

    t72 = (((x289|x290)==x291)!=x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = INT32_MIN;
	int16_t x296 = INT16_MIN;
	volatile int32_t t73 = -25691170;

    t73 = (((x293|x294)==x295)!=x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint8_t x297 = 24U;
	uint16_t x298 = 3U;
	volatile int16_t x299 = INT16_MIN;
	int8_t x300 = -1;
	int32_t t74 = -213;

    t74 = (((x297|x298)==x299)!=x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = INT16_MIN;
	uint64_t x302 = 1160LLU;
	uint16_t x303 = UINT16_MAX;
	uint64_t x304 = 29129717450LLU;
	int32_t t75 = -338333;

    t75 = (((x301|x302)==x303)!=x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x305 = 18966032;
	int16_t x306 = INT16_MIN;
	static volatile int64_t x307 = -1LL;
	int8_t x308 = INT8_MIN;
	int32_t t76 = -6;

    t76 = (((x305|x306)==x307)!=x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = INT8_MIN;
	int64_t x310 = 3750362184LL;
	int64_t x311 = 275476402118604954LL;
	static volatile uint64_t x312 = UINT64_MAX;
	volatile int32_t t77 = 97;

    t77 = (((x309|x310)==x311)!=x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x314 = INT64_MIN;
	int32_t x315 = -6;
	int8_t x316 = -7;
	int32_t t78 = 6007;

    t78 = (((x313|x314)==x315)!=x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x319 = INT8_MIN;
	int32_t t79 = 14;

    t79 = (((x317|x318)==x319)!=x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x321 = INT64_MIN;
	int16_t x322 = INT16_MIN;
	static uint64_t x323 = UINT64_MAX;
	int32_t x324 = INT32_MIN;
	volatile int32_t t80 = 0;

    t80 = (((x321|x322)==x323)!=x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int64_t x326 = -1LL;
	uint64_t x327 = 2852333614700404LLU;
	int64_t x328 = INT64_MIN;
	int32_t t81 = 4;

    t81 = (((x325|x326)==x327)!=x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x329 = -1;
	int8_t x330 = 11;
	uint64_t x331 = UINT64_MAX;
	int8_t x332 = INT8_MIN;

    t82 = (((x329|x330)==x331)!=x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x334 = 23837U;
	volatile uint8_t x335 = UINT8_MAX;
	static int16_t x336 = -3;
	int32_t t83 = 1504736;

    t83 = (((x333|x334)==x335)!=x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x337 = INT64_MIN;
	int16_t x338 = INT16_MAX;
	static int8_t x339 = INT8_MIN;
	uint16_t x340 = 5U;

    t84 = (((x337|x338)==x339)!=x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint8_t x341 = 0U;
	int64_t x342 = -50696844LL;

    t85 = (((x341|x342)==x343)!=x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint8_t x345 = UINT8_MAX;
	int32_t x346 = INT32_MIN;
	uint16_t x347 = 9611U;
	int32_t t86 = 28;

    t86 = (((x345|x346)==x347)!=x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint32_t x349 = UINT32_MAX;
	int32_t x350 = INT32_MAX;
	int32_t x351 = -524;
	int16_t x352 = -1;

    t87 = (((x349|x350)==x351)!=x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x353 = UINT8_MAX;
	int32_t t88 = 6;

    t88 = (((x353|x354)==x355)!=x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x357 = 169;
	static int16_t x358 = 278;
	int64_t x359 = INT64_MIN;
	int16_t x360 = INT16_MAX;
	int32_t t89 = -508191;

    t89 = (((x357|x358)==x359)!=x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x361 = -1;
	volatile int32_t x362 = INT32_MAX;
	static int16_t x363 = 1;

    t90 = (((x361|x362)==x363)!=x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint16_t x365 = 26916U;
	int8_t x366 = 6;
	uint16_t x367 = 12963U;
	int64_t x368 = INT64_MAX;

    t91 = (((x365|x366)==x367)!=x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x371 = INT64_MIN;
	static uint16_t x372 = UINT16_MAX;
	static int32_t t92 = 964709;

    t92 = (((x369|x370)==x371)!=x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x374 = 0;
	volatile int32_t t93 = -52;

    t93 = (((x373|x374)==x375)!=x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x377 = 3U;
	uint32_t x378 = 3459U;
	int64_t x379 = 223102124LL;
	int32_t t94 = -38794622;

    t94 = (((x377|x378)==x379)!=x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x382 = -47;
	static int64_t x384 = INT64_MAX;
	volatile int32_t t95 = -2;

    t95 = (((x381|x382)==x383)!=x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint16_t x385 = UINT16_MAX;
	int8_t x387 = INT8_MIN;
	static volatile int32_t t96 = 3672;

    t96 = (((x385|x386)==x387)!=x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint16_t x391 = 24U;
	static int64_t x392 = -855014845327086795LL;
	int32_t t97 = 4;

    t97 = (((x389|x390)==x391)!=x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x393 = INT16_MIN;
	int64_t x394 = -1LL;
	uint8_t x395 = 0U;
	static volatile int32_t t98 = 23486174;

    t98 = (((x393|x394)==x395)!=x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x397 = -1LL;
	static int64_t x398 = 4009LL;
	int32_t x399 = -2909;
	volatile int32_t x400 = INT32_MIN;
	volatile int32_t t99 = 130;

    t99 = (((x397|x398)==x399)!=x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x401 = INT16_MAX;
	uint16_t x402 = UINT16_MAX;
	int8_t x403 = -1;
	static int32_t t100 = 347;

    t100 = (((x401|x402)==x403)!=x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x405 = INT8_MIN;
	volatile int32_t x406 = INT32_MIN;
	int8_t x408 = 40;

    t101 = (((x405|x406)==x407)!=x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = 968999512545883LL;
	int32_t x410 = INT32_MIN;
	uint64_t x411 = 1LLU;
	static volatile int32_t t102 = -880185;

    t102 = (((x409|x410)==x411)!=x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x413 = INT16_MAX;
	int16_t x414 = INT16_MIN;
	volatile uint64_t x415 = 5833382LLU;
	static int64_t x416 = INT64_MAX;
	int32_t t103 = 10260;

    t103 = (((x413|x414)==x415)!=x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x417 = INT16_MAX;
	volatile int64_t x419 = INT64_MIN;
	static int8_t x420 = INT8_MIN;
	static volatile int32_t t104 = -77;

    t104 = (((x417|x418)==x419)!=x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x421 = -1;
	uint8_t x422 = UINT8_MAX;
	uint8_t x423 = 54U;
	uint32_t x424 = 150U;
	int32_t t105 = -129164;

    t105 = (((x421|x422)==x423)!=x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x425 = INT8_MAX;
	int32_t x426 = INT32_MAX;
	uint8_t x427 = UINT8_MAX;
	volatile int16_t x428 = INT16_MAX;
	volatile int32_t t106 = 447500126;

    t106 = (((x425|x426)==x427)!=x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x430 = 1661466854892LL;
	uint32_t x431 = 391U;
	int8_t x432 = -1;
	static int32_t t107 = 125797;

    t107 = (((x429|x430)==x431)!=x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x433 = -1;
	int16_t x434 = -1;
	int8_t x435 = INT8_MAX;
	int16_t x436 = INT16_MIN;

    t108 = (((x433|x434)==x435)!=x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x437 = INT8_MIN;
	int8_t x438 = INT8_MIN;
	int16_t x439 = 2;
	volatile int8_t x440 = 22;
	volatile int32_t t109 = 25;

    t109 = (((x437|x438)==x439)!=x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x441 = INT16_MAX;
	static volatile int8_t x442 = INT8_MAX;
	int32_t x443 = INT32_MIN;
	volatile int8_t x444 = 28;
	static volatile int32_t t110 = -93586;

    t110 = (((x441|x442)==x443)!=x444);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = -1;
	uint64_t x446 = 16LLU;
	volatile int32_t x447 = INT32_MIN;
	volatile uint64_t x448 = 179329507LLU;
	volatile int32_t t111 = -7717951;

    t111 = (((x445|x446)==x447)!=x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x449 = -1LL;
	int64_t x450 = -1LL;
	int32_t t112 = -3964286;

    t112 = (((x449|x450)==x451)!=x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x453 = 70LLU;
	int16_t x454 = INT16_MIN;
	volatile int16_t x455 = INT16_MIN;
	volatile int32_t t113 = 264358071;

    t113 = (((x453|x454)==x455)!=x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x457 = 4908629848189876LLU;
	int64_t x458 = INT64_MIN;
	uint64_t x459 = 33811031788LLU;
	volatile int8_t x460 = INT8_MAX;
	int32_t t114 = -334575101;

    t114 = (((x457|x458)==x459)!=x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x461 = INT64_MIN;
	int8_t x462 = INT8_MIN;
	int16_t x463 = INT16_MAX;
	static int32_t x464 = -1;
	volatile int32_t t115 = -33;

    t115 = (((x461|x462)==x463)!=x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x465 = UINT8_MAX;
	uint64_t x466 = UINT64_MAX;
	static int32_t x467 = -13058982;
	static uint8_t x468 = 19U;

    t116 = (((x465|x466)==x467)!=x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint8_t x469 = 16U;
	uint32_t x470 = 90U;
	static volatile uint16_t x471 = 889U;
	int64_t x472 = 0LL;
	volatile int32_t t117 = 310323843;

    t117 = (((x469|x470)==x471)!=x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x473 = -1LL;
	int64_t x475 = -288723LL;
	volatile int8_t x476 = INT8_MIN;
	volatile int32_t t118 = -987;

    t118 = (((x473|x474)==x475)!=x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x477 = INT64_MIN;
	int32_t x478 = 64351976;
	uint8_t x480 = UINT8_MAX;
	static int32_t t119 = -21;

    t119 = (((x477|x478)==x479)!=x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x481 = 1024632706;
	static int32_t x482 = INT32_MIN;
	uint64_t x483 = 2575208156779593LLU;
	int32_t x484 = INT32_MIN;

    t120 = (((x481|x482)==x483)!=x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x485 = 121U;
	volatile int16_t x486 = 14;
	static int32_t x487 = 68066560;
	static int32_t x488 = -1;
	int32_t t121 = 6;

    t121 = (((x485|x486)==x487)!=x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = -1;
	uint64_t x491 = 99071502999689391LLU;
	int16_t x492 = 741;
	int32_t t122 = -329473;

    t122 = (((x489|x490)==x491)!=x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x494 = 0LLU;
	int64_t x495 = -337LL;
	uint64_t x496 = 368694321895994LLU;
	volatile int32_t t123 = -69;

    t123 = (((x493|x494)==x495)!=x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x497 = -1;
	volatile int64_t x498 = -14988089LL;
	static int32_t x500 = INT32_MAX;
	int32_t t124 = 72514;

    t124 = (((x497|x498)==x499)!=x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint32_t x501 = 1046181293U;
	int16_t x502 = INT16_MIN;
	static int32_t x503 = INT32_MIN;
	int32_t x504 = -1;
	volatile int32_t t125 = -255;

    t125 = (((x501|x502)==x503)!=x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x505 = 528U;
	volatile int32_t x506 = INT32_MAX;
	uint32_t x507 = 1125U;
	int16_t x508 = -1;
	int32_t t126 = 232;

    t126 = (((x505|x506)==x507)!=x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x509 = -1;
	int16_t x510 = INT16_MIN;
	volatile uint32_t x511 = 58421U;
	volatile uint16_t x512 = UINT16_MAX;
	int32_t t127 = -227380;

    t127 = (((x509|x510)==x511)!=x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x514 = INT64_MIN;

    t128 = (((x513|x514)==x515)!=x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x519 = INT16_MIN;
	int64_t x520 = -1LL;
	int32_t t129 = -377;

    t129 = (((x517|x518)==x519)!=x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint64_t x521 = UINT64_MAX;
	volatile int8_t x522 = -13;
	int64_t x523 = -1LL;
	volatile int8_t x524 = 0;
	volatile int32_t t130 = -23035768;

    t130 = (((x521|x522)==x523)!=x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = 308503778551LL;
	static int32_t x526 = INT32_MIN;
	uint32_t x527 = UINT32_MAX;
	static int16_t x528 = -1;
	int32_t t131 = -7096370;

    t131 = (((x525|x526)==x527)!=x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint8_t x529 = 45U;
	int8_t x530 = INT8_MIN;
	int32_t x531 = 26;
	int16_t x532 = -1;

    t132 = (((x529|x530)==x531)!=x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x534 = UINT8_MAX;
	int8_t x536 = -10;
	volatile int32_t t133 = 68136;

    t133 = (((x533|x534)==x535)!=x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = INT16_MIN;
	int32_t x538 = INT32_MIN;
	static int16_t x540 = -1;
	int32_t t134 = 45;

    t134 = (((x537|x538)==x539)!=x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = INT32_MAX;
	int64_t x542 = 0LL;
	int64_t x543 = INT64_MIN;
	static int8_t x544 = 1;
	volatile int32_t t135 = 3;

    t135 = (((x541|x542)==x543)!=x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x547 = INT8_MAX;
	int16_t x548 = -60;
	volatile int32_t t136 = -7542359;

    t136 = (((x545|x546)==x547)!=x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x549 = INT32_MIN;
	static int16_t x550 = -1;
	volatile uint32_t x551 = 12U;
	int8_t x552 = INT8_MIN;
	volatile int32_t t137 = 29941;

    t137 = (((x549|x550)==x551)!=x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x553 = 5;
	uint16_t x554 = UINT16_MAX;
	static volatile int8_t x555 = INT8_MIN;
	volatile int16_t x556 = INT16_MIN;

    t138 = (((x553|x554)==x555)!=x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x557 = -1;
	uint8_t x558 = UINT8_MAX;
	static uint32_t x559 = 1741U;
	int8_t x560 = 1;
	int32_t t139 = 1191;

    t139 = (((x557|x558)==x559)!=x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x562 = 84U;
	uint8_t x563 = UINT8_MAX;
	uint64_t x564 = UINT64_MAX;
	int32_t t140 = 1;

    t140 = (((x561|x562)==x563)!=x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x566 = 0;
	static int16_t x567 = -1;
	int64_t x568 = 445752072973089308LL;
	volatile int32_t t141 = -14301;

    t141 = (((x565|x566)==x567)!=x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x569 = INT16_MIN;
	volatile int32_t x570 = INT32_MIN;
	static int16_t x572 = INT16_MAX;
	volatile int32_t t142 = 1115;

    t142 = (((x569|x570)==x571)!=x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x573 = UINT16_MAX;
	int64_t x574 = -71LL;
	int32_t x575 = INT32_MIN;
	uint16_t x576 = 193U;

    t143 = (((x573|x574)==x575)!=x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x577 = INT32_MIN;
	int64_t x578 = 3LL;
	int32_t x579 = -1;
	int64_t x580 = INT64_MIN;
	volatile int32_t t144 = -31;

    t144 = (((x577|x578)==x579)!=x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int32_t x581 = -1;
	static int16_t x582 = INT16_MIN;
	int8_t x584 = -13;
	int32_t t145 = 21;

    t145 = (((x581|x582)==x583)!=x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x585 = 712010806LLU;
	static int16_t x586 = -1;
	volatile int16_t x587 = -1;
	int32_t t146 = 222;

    t146 = (((x585|x586)==x587)!=x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x589 = -1;
	int8_t x590 = INT8_MIN;
	int32_t x591 = INT32_MIN;
	static int16_t x592 = -1;
	static volatile int32_t t147 = 19964;

    t147 = (((x589|x590)==x591)!=x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int16_t x593 = INT16_MIN;
	int64_t x594 = -2034783471710715LL;
	volatile int16_t x595 = 1189;
	int32_t t148 = -275;

    t148 = (((x593|x594)==x595)!=x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x598 = INT32_MIN;
	int64_t x599 = INT64_MAX;
	volatile int32_t t149 = -25536860;

    t149 = (((x597|x598)==x599)!=x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x602 = INT32_MIN;
	volatile int64_t x604 = INT64_MIN;

    t150 = (((x601|x602)==x603)!=x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x608 = UINT16_MAX;
	int32_t t151 = -5;

    t151 = (((x605|x606)==x607)!=x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = INT32_MIN;
	int16_t x612 = 144;
	static int32_t t152 = 4088279;

    t152 = (((x609|x610)==x611)!=x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = -1;
	int8_t x614 = INT8_MIN;
	int8_t x615 = -1;
	static uint64_t x616 = 127818478338LLU;
	int32_t t153 = -958;

    t153 = (((x613|x614)==x615)!=x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint8_t x617 = 0U;
	volatile int32_t x618 = INT32_MAX;
	volatile int16_t x619 = INT16_MIN;
	int8_t x620 = INT8_MAX;

    t154 = (((x617|x618)==x619)!=x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = 88LL;
	volatile int8_t x623 = 55;
	int32_t t155 = -149;

    t155 = (((x621|x622)==x623)!=x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x625 = 638U;
	int16_t x628 = -1;
	int32_t t156 = 12;

    t156 = (((x625|x626)==x627)!=x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x629 = 44;
	static int8_t x630 = -21;
	static int16_t x631 = INT16_MAX;
	int8_t x632 = 0;
	int32_t t157 = -1453;

    t157 = (((x629|x630)==x631)!=x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x633 = INT16_MIN;
	volatile int16_t x634 = -2;
	int32_t x635 = INT32_MIN;
	static uint32_t x636 = UINT32_MAX;
	int32_t t158 = -127736;

    t158 = (((x633|x634)==x635)!=x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint64_t x637 = 152919334480027LLU;
	uint16_t x638 = 42U;
	volatile uint64_t x639 = 18853923LLU;
	volatile uint64_t x640 = 1956137360391LLU;
	static volatile int32_t t159 = -23;

    t159 = (((x637|x638)==x639)!=x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x641 = INT8_MIN;
	volatile int16_t x642 = 1559;
	static int8_t x643 = INT8_MAX;
	uint8_t x644 = 6U;

    t160 = (((x641|x642)==x643)!=x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x645 = -8;
	volatile uint64_t x646 = 341398869228244869LLU;
	volatile uint8_t x648 = UINT8_MAX;
	int32_t t161 = -19366691;

    t161 = (((x645|x646)==x647)!=x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x649 = 6592U;
	uint64_t x650 = UINT64_MAX;
	static volatile int8_t x651 = -1;
	static int16_t x652 = -1;
	int32_t t162 = 387;

    t162 = (((x649|x650)==x651)!=x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x653 = UINT64_MAX;
	int8_t x654 = 1;
	static uint8_t x656 = 11U;
	int32_t t163 = 572840;

    t163 = (((x653|x654)==x655)!=x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = -1;
	int16_t x659 = -1;
	int32_t t164 = 189018416;

    t164 = (((x657|x658)==x659)!=x660);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x661 = INT32_MIN;
	uint32_t x663 = 278000U;
	static uint64_t x664 = UINT64_MAX;
	int32_t t165 = -27947554;

    t165 = (((x661|x662)==x663)!=x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = INT32_MIN;
	int8_t x666 = INT8_MIN;
	int32_t x668 = -143555;

    t166 = (((x665|x666)==x667)!=x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x670 = 32U;
	static volatile int64_t x671 = 121644LL;
	uint8_t x672 = 10U;
	int32_t t167 = -46760030;

    t167 = (((x669|x670)==x671)!=x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x673 = INT64_MIN;
	int8_t x674 = INT8_MAX;
	uint16_t x675 = 11U;
	int64_t x676 = -1041304520LL;

    t168 = (((x673|x674)==x675)!=x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x677 = INT32_MIN;
	int64_t x678 = INT64_MAX;
	volatile int32_t x679 = INT32_MIN;
	int32_t t169 = 12046;

    t169 = (((x677|x678)==x679)!=x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = INT32_MIN;
	volatile int16_t x682 = INT16_MIN;
	uint8_t x683 = 2U;
	volatile int64_t x684 = 9LL;
	int32_t t170 = -1;

    t170 = (((x681|x682)==x683)!=x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x685 = 51U;
	int8_t x687 = INT8_MIN;
	uint32_t x688 = UINT32_MAX;

    t171 = (((x685|x686)==x687)!=x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x689 = INT8_MIN;
	volatile int16_t x690 = INT16_MIN;
	int32_t x691 = -1;
	int64_t x692 = INT64_MIN;
	volatile int32_t t172 = 279824;

    t172 = (((x689|x690)==x691)!=x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint8_t x693 = UINT8_MAX;
	static volatile int8_t x694 = -1;
	static uint64_t x695 = 2795057308577750LLU;

    t173 = (((x693|x694)==x695)!=x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x697 = INT16_MIN;
	static volatile int32_t x699 = INT32_MAX;
	uint16_t x700 = UINT16_MAX;
	int32_t t174 = -39;

    t174 = (((x697|x698)==x699)!=x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x702 = INT16_MAX;
	int8_t x704 = -1;
	int32_t t175 = -1;

    t175 = (((x701|x702)==x703)!=x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x705 = 8;
	int8_t x706 = 24;
	static volatile uint64_t x707 = UINT64_MAX;
	uint32_t x708 = 86U;
	volatile int32_t t176 = 109;

    t176 = (((x705|x706)==x707)!=x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x709 = UINT64_MAX;
	static int32_t x710 = -772954603;
	uint16_t x711 = 3U;
	int64_t x712 = INT64_MAX;

    t177 = (((x709|x710)==x711)!=x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x713 = -1;
	int64_t x715 = INT64_MIN;
	uint64_t x716 = 415280LLU;
	volatile int32_t t178 = -21830108;

    t178 = (((x713|x714)==x715)!=x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x717 = 0;
	int32_t x718 = -1;
	static int64_t x719 = INT64_MIN;
	volatile uint32_t x720 = 10513834U;
	int32_t t179 = 2845207;

    t179 = (((x717|x718)==x719)!=x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x721 = INT32_MIN;
	int32_t x722 = INT32_MIN;
	int32_t x723 = 448085011;
	volatile int8_t x724 = 13;
	volatile int32_t t180 = 108329221;

    t180 = (((x721|x722)==x723)!=x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = INT8_MIN;
	volatile uint16_t x726 = 533U;
	int16_t x727 = 12158;
	volatile int32_t t181 = -6623956;

    t181 = (((x725|x726)==x727)!=x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x729 = 306060;
	static int64_t x731 = INT64_MIN;
	static uint8_t x732 = 2U;
	volatile int32_t t182 = -16413861;

    t182 = (((x729|x730)==x731)!=x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x733 = -1;
	uint16_t x734 = 9U;
	int16_t x735 = 24;
	int8_t x736 = 2;
	volatile int32_t t183 = 10223069;

    t183 = (((x733|x734)==x735)!=x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x737 = 76;
	int16_t x740 = -1;
	static int32_t t184 = 940963614;

    t184 = (((x737|x738)==x739)!=x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x741 = INT8_MIN;
	uint32_t x742 = 89334U;
	int32_t x743 = INT32_MIN;
	int32_t x744 = 1;

    t185 = (((x741|x742)==x743)!=x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x745 = UINT32_MAX;
	volatile int64_t x748 = INT64_MIN;
	volatile int32_t t186 = 66614780;

    t186 = (((x745|x746)==x747)!=x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x752 = INT64_MIN;
	int32_t t187 = 889210041;

    t187 = (((x749|x750)==x751)!=x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = -13;
	volatile int32_t t188 = -18932600;

    t188 = (((x753|x754)==x755)!=x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = INT8_MAX;
	uint32_t x758 = 111U;
	uint32_t x759 = 6903U;
	static int64_t x760 = -5215470LL;
	int32_t t189 = 201;

    t189 = (((x757|x758)==x759)!=x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint8_t x761 = 14U;
	uint16_t x762 = 7274U;
	uint8_t x764 = 53U;
	int32_t t190 = -2989984;

    t190 = (((x761|x762)==x763)!=x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int8_t x765 = -15;
	static int16_t x766 = INT16_MIN;
	uint8_t x767 = 11U;
	static volatile int32_t t191 = -3;

    t191 = (((x765|x766)==x767)!=x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x769 = UINT16_MAX;
	static uint16_t x770 = UINT16_MAX;
	int16_t x771 = -1;
	static uint64_t x772 = 391612227036LLU;
	volatile int32_t t192 = -16004;

    t192 = (((x769|x770)==x771)!=x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x773 = INT64_MIN;
	int32_t x775 = INT32_MIN;
	static int32_t x776 = INT32_MIN;
	volatile int32_t t193 = 428560334;

    t193 = (((x773|x774)==x775)!=x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = INT8_MIN;
	static int16_t x779 = 1793;
	volatile int64_t x780 = INT64_MAX;

    t194 = (((x777|x778)==x779)!=x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int32_t x781 = INT32_MIN;
	uint32_t x782 = 24232U;
	volatile int8_t x783 = -1;
	uint16_t x784 = UINT16_MAX;

    t195 = (((x781|x782)==x783)!=x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = INT64_MIN;
	int64_t x786 = INT64_MIN;
	static int64_t x787 = INT64_MIN;
	volatile int32_t t196 = 1448556;

    t196 = (((x785|x786)==x787)!=x788);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x790 = 0;
	uint16_t x791 = UINT16_MAX;
	volatile int32_t x792 = -181835;

    t197 = (((x789|x790)==x791)!=x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x793 = 98098LL;
	uint16_t x795 = UINT16_MAX;
	int64_t x796 = INT64_MIN;
	volatile int32_t t198 = -1055876309;

    t198 = (((x793|x794)==x795)!=x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x797 = -1;
	uint8_t x798 = 18U;
	static int32_t x799 = INT32_MIN;
	static volatile int32_t t199 = -15230;

    t199 = (((x797|x798)==x799)!=x800);

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

