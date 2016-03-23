
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

static volatile uint8_t x3 = UINT8_MAX;
static volatile int8_t x4 = -1;
static int32_t x8 = 657515565;
int16_t x12 = INT16_MIN;
int64_t x17 = INT64_MIN;
int8_t x26 = INT8_MAX;
int16_t x27 = INT16_MIN;
int8_t x31 = INT8_MAX;
volatile uint16_t x32 = 1U;
int16_t x45 = INT16_MAX;
int16_t x47 = -1148;
volatile int8_t x48 = INT8_MIN;
uint16_t x53 = UINT16_MAX;
int32_t x55 = -1;
static volatile uint8_t x58 = 8U;
volatile int32_t t14 = 1671420;
uint32_t x66 = 102387U;
uint16_t x68 = 1110U;
int16_t x69 = -5350;
static int64_t x73 = -2LL;
int16_t x75 = INT16_MAX;
int32_t t18 = 25398;
int8_t x78 = INT8_MAX;
volatile uint32_t t19 = 333189416U;
int8_t x84 = -1;
int32_t t20 = 57;
int16_t x87 = -1;
static uint32_t x91 = UINT32_MAX;
int8_t x93 = 2;
int64_t t23 = INT64_MIN;
int32_t x101 = -1;
volatile int8_t x105 = INT8_MAX;
uint32_t x106 = UINT32_MAX;
volatile int64_t x112 = 681904188756390436LL;
volatile int64_t t27 = -75707489LL;
int64_t x113 = INT64_MIN;
static int16_t x116 = INT16_MAX;
volatile int32_t t28 = 16899918;
int64_t x123 = INT64_MIN;
uint64_t x147 = 296091224LLU;
volatile int32_t x157 = INT32_MIN;
int8_t x160 = 0;
volatile int16_t x163 = INT16_MAX;
int8_t x164 = INT8_MIN;
uint16_t x171 = UINT16_MAX;
int8_t x178 = -1;
int32_t x179 = INT32_MIN;
volatile int32_t t44 = 1919;
uint64_t x188 = 26986875LLU;
int16_t x194 = INT16_MIN;
int32_t x197 = -7;
int16_t x204 = INT16_MIN;
static int32_t x205 = 775266;
volatile uint16_t x206 = 99U;
volatile int8_t x217 = INT8_MIN;
static volatile int8_t x218 = 11;
int16_t x224 = 0;
int32_t t58 = 224053;
static int8_t x244 = INT8_MIN;
static int16_t x246 = INT16_MIN;
uint16_t x247 = 254U;
int64_t x256 = INT64_MAX;
volatile int8_t x259 = -1;
int32_t x260 = INT32_MIN;
static int32_t t66 = 587253087;
int32_t t68 = -187563;
volatile uint64_t x278 = 371641521562026310LLU;
volatile int16_t x293 = INT16_MIN;
int8_t x294 = -1;
int32_t x298 = -12289205;
int8_t x299 = -1;
volatile uint64_t x316 = 3LLU;
int16_t x318 = INT16_MIN;
int64_t x332 = INT64_MIN;
int64_t t82 = INT64_MIN;
int32_t x333 = INT32_MIN;
uint16_t x337 = 4088U;
volatile uint8_t x343 = UINT8_MAX;
volatile int64_t t85 = INT64_MIN;
uint8_t x347 = UINT8_MAX;
uint8_t x350 = 15U;
static int64_t x352 = 1673515845LL;
volatile int64_t t87 = -513676355870320LL;
int16_t x363 = -59;
int8_t x368 = INT8_MIN;
int16_t x379 = -1;
volatile uint8_t x385 = 7U;
int64_t x388 = INT64_MAX;
uint16_t x389 = 223U;
int32_t x392 = INT32_MIN;
int32_t t97 = INT32_MIN;
int64_t x393 = INT64_MIN;
volatile int16_t x403 = -79;
uint64_t t101 = 15640LLU;
volatile int32_t t102 = 1231138;
static uint8_t x419 = UINT8_MAX;
int64_t x420 = INT64_MIN;
int32_t x424 = 24;
int32_t t105 = 21;
int8_t x430 = INT8_MIN;
int8_t x434 = INT8_MIN;
static int32_t x441 = INT32_MIN;
int16_t x443 = INT16_MIN;
volatile int32_t x449 = -505782;
int64_t x451 = -111710811005562LL;
int16_t x456 = INT16_MIN;
int8_t x474 = -28;
static uint64_t t118 = 18013306171527970LLU;
int32_t x478 = INT32_MIN;
uint32_t x480 = 678895275U;
int64_t x481 = INT64_MIN;
uint8_t x490 = UINT8_MAX;
int8_t x495 = INT8_MAX;
uint8_t x496 = UINT8_MAX;
uint16_t x498 = 7361U;
int32_t t124 = 30840;
int16_t x505 = INT16_MIN;
uint16_t x506 = UINT16_MAX;
volatile int64_t x512 = INT64_MIN;
volatile int8_t x517 = -8;
int32_t x520 = INT32_MAX;
uint8_t x523 = UINT8_MAX;
static int16_t x524 = -4;
int32_t x532 = -1;
static uint64_t x534 = 4LLU;
int8_t x535 = 3;
int64_t x537 = INT64_MIN;
int64_t x550 = INT64_MAX;
uint8_t x552 = UINT8_MAX;
int16_t x556 = INT16_MIN;
volatile int8_t x559 = INT8_MIN;
static volatile uint64_t t139 = 4275656019LLU;
uint32_t x563 = 0U;
volatile int32_t t140 = 0;
volatile uint32_t x571 = 1005939181U;
int64_t x572 = INT64_MAX;
uint8_t x574 = UINT8_MAX;
int16_t x577 = INT16_MAX;
int32_t x580 = INT32_MIN;
volatile int32_t t145 = -54067;
int16_t x587 = INT16_MIN;
uint32_t x591 = 1307061U;
int16_t x595 = INT16_MIN;
volatile int32_t t149 = 1319963;
volatile int32_t x601 = INT32_MIN;
uint8_t x603 = 3U;
int32_t x606 = -28;
volatile int32_t t151 = -2;
int32_t x618 = 41995740;
int64_t x620 = -1LL;
int64_t x624 = -1LL;
int32_t x625 = INT32_MIN;
volatile int8_t x631 = INT8_MIN;
int32_t x633 = -906662391;
int64_t x636 = INT64_MAX;
int32_t x638 = INT32_MAX;
volatile int32_t t159 = 62;
static volatile int8_t x643 = -1;
static int16_t x644 = INT16_MAX;
static uint32_t x645 = UINT32_MAX;
volatile int32_t t161 = 402058;
volatile int32_t x653 = 4;
volatile int16_t x663 = INT16_MAX;
static volatile int64_t x666 = -783LL;
int16_t x668 = INT16_MAX;
volatile uint64_t x671 = UINT64_MAX;
volatile int32_t x683 = 167606125;
int64_t x684 = 63LL;
volatile int32_t t171 = 411960;
volatile uint64_t x690 = UINT64_MAX;
uint32_t t173 = UINT32_MAX;
static uint32_t x698 = 442376421U;
int32_t t174 = -139652;
uint64_t x703 = UINT64_MAX;
volatile int8_t x706 = INT8_MIN;
uint16_t x712 = 1335U;
int8_t x716 = INT8_MIN;
int16_t x720 = 9152;
uint8_t x726 = 25U;
int64_t x732 = INT64_MIN;
int8_t x737 = 1;
volatile int16_t x740 = INT16_MAX;
static uint32_t x744 = UINT32_MAX;
static volatile uint32_t t185 = UINT32_MAX;
int64_t x748 = INT64_MIN;
int64_t t186 = 10610075779757LL;
int16_t x749 = -1;
int64_t x756 = -370LL;
int8_t x771 = INT8_MIN;
static int64_t x775 = INT64_MIN;
uint64_t x776 = 13803543908971413LLU;
static uint64_t t193 = 80968102LLU;
static int64_t x778 = -9080523540LL;
uint16_t x790 = 13U;
int32_t x793 = 416423705;
static int8_t x799 = 3;


void f0(void) {
    	volatile uint16_t x1 = 29736U;
	static uint8_t x2 = 7U;
	volatile int32_t t0 = 341471452;

    t0 = (((x1|x2)==x3)|x4);

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MAX;
	static int32_t x6 = INT32_MAX;
	uint8_t x7 = 60U;
	int32_t t1 = 7203;

    t1 = (((x5|x6)==x7)|x8);

    if (t1 != 657515565) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = -1;
	uint16_t x10 = 9U;
	static int8_t x11 = 7;
	volatile int32_t t2 = 26095;

    t2 = (((x9|x10)==x11)|x12);

    if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x13 = INT8_MIN;
	uint8_t x14 = 1U;
	int8_t x15 = -1;
	int8_t x16 = INT8_MAX;
	int32_t t3 = -3906;

    t3 = (((x13|x14)==x15)|x16);

    if (t3 != 127) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x18 = INT8_MAX;
	int32_t x19 = INT32_MIN;
	static int16_t x20 = INT16_MAX;
	int32_t t4 = -987606;

    t4 = (((x17|x18)==x19)|x20);

    if (t4 != 32767) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = INT64_MAX;
	uint8_t x22 = UINT8_MAX;
	int32_t x23 = -2573597;
	int8_t x24 = INT8_MIN;
	int32_t t5 = 158968549;

    t5 = (((x21|x22)==x23)|x24);

    if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint64_t x25 = UINT64_MAX;
	static int32_t x28 = INT32_MAX;
	int32_t t6 = INT32_MAX;

    t6 = (((x25|x26)==x27)|x28);

    if (t6 != INT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x29 = -17;
	int16_t x30 = INT16_MIN;
	int32_t t7 = -1;

    t7 = (((x29|x30)==x31)|x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint32_t x33 = UINT32_MAX;
	int32_t x34 = INT32_MIN;
	static int16_t x35 = INT16_MIN;
	int64_t x36 = INT64_MAX;
	int64_t t8 = INT64_MAX;

    t8 = (((x33|x34)==x35)|x36);

    if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = -1;
	static uint8_t x38 = 8U;
	int64_t x39 = INT64_MIN;
	int32_t x40 = -1037194444;
	int32_t t9 = -520159311;

    t9 = (((x37|x38)==x39)|x40);

    if (t9 != -1037194444) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MIN;
	int16_t x42 = INT16_MIN;
	int32_t x43 = -1;
	static int16_t x44 = INT16_MIN;
	static volatile int32_t t10 = -969;

    t10 = (((x41|x42)==x43)|x44);

    if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x46 = -74;
	int32_t t11 = 1;

    t11 = (((x45|x46)==x47)|x48);

    if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = INT64_MIN;
	int64_t x50 = INT64_MAX;
	static int32_t x51 = INT32_MIN;
	uint16_t x52 = 1U;
	int32_t t12 = 15;

    t12 = (((x49|x50)==x51)|x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x54 = 4106600LLU;
	uint32_t x56 = 1046239902U;
	volatile uint32_t t13 = 604U;

    t13 = (((x53|x54)==x55)|x56);

    if (t13 != 1046239902U) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint32_t x57 = 4907233U;
	static int64_t x59 = -1LL;
	int8_t x60 = INT8_MIN;

    t14 = (((x57|x58)==x59)|x60);

    if (t14 != -128) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = 41413U;
	int8_t x62 = -1;
	int32_t x63 = INT32_MAX;
	int16_t x64 = INT16_MIN;
	volatile int32_t t15 = -7005101;

    t15 = (((x61|x62)==x63)|x64);

    if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x65 = 30019517751LLU;
	static int32_t x67 = 46365;
	volatile int32_t t16 = -166144;

    t16 = (((x65|x66)==x67)|x68);

    if (t16 != 1110) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint32_t x70 = 538U;
	static int16_t x71 = 1848;
	int64_t x72 = -1LL;
	int64_t t17 = -10061731899728758LL;

    t17 = (((x69|x70)==x71)|x72);

    if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x74 = -1LL;
	int8_t x76 = INT8_MIN;

    t18 = (((x73|x74)==x75)|x76);

    if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x77 = 1U;
	uint8_t x79 = 1U;
	static uint32_t x80 = 10658U;

    t19 = (((x77|x78)==x79)|x80);

    if (t19 != 10658U) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = -2335341885744LL;
	int16_t x82 = INT16_MIN;
	uint64_t x83 = UINT64_MAX;

    t20 = (((x81|x82)==x83)|x84);

    if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint32_t x85 = 7345U;
	static uint64_t x86 = 1586877995560429LLU;
	int8_t x88 = -3;
	volatile int32_t t21 = -1;

    t21 = (((x85|x86)==x87)|x88);

    if (t21 != -3) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = 212845;
	int64_t x90 = INT64_MIN;
	volatile uint8_t x92 = 17U;
	volatile int32_t t22 = -177238229;

    t22 = (((x89|x90)==x91)|x92);

    if (t22 != 17) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x94 = INT64_MAX;
	static uint8_t x95 = UINT8_MAX;
	int64_t x96 = INT64_MIN;

    t23 = (((x93|x94)==x95)|x96);

    if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x97 = INT32_MIN;
	int8_t x98 = -1;
	int64_t x99 = INT64_MIN;
	uint16_t x100 = 7981U;
	int32_t t24 = 835707;

    t24 = (((x97|x98)==x99)|x100);

    if (t24 != 7981) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x102 = INT64_MIN;
	int8_t x103 = INT8_MIN;
	static uint16_t x104 = 367U;
	static int32_t t25 = 961;

    t25 = (((x101|x102)==x103)|x104);

    if (t25 != 367) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x107 = INT16_MIN;
	int16_t x108 = 118;
	static int32_t t26 = 184;

    t26 = (((x105|x106)==x107)|x108);

    if (t26 != 118) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x109 = INT32_MAX;
	uint16_t x110 = 14163U;
	uint64_t x111 = UINT64_MAX;

    t27 = (((x109|x110)==x111)|x112);

    if (t27 != 681904188756390436LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x114 = -1;
	volatile uint8_t x115 = 7U;

    t28 = (((x113|x114)==x115)|x116);

    if (t28 != 32767) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x117 = UINT64_MAX;
	static volatile int32_t x118 = INT32_MIN;
	uint16_t x119 = 577U;
	int32_t x120 = INT32_MAX;
	volatile int32_t t29 = INT32_MAX;

    t29 = (((x117|x118)==x119)|x120);

    if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = -1;
	int16_t x122 = 6;
	int64_t x124 = -1LL;
	volatile int64_t t30 = 1896LL;

    t30 = (((x121|x122)==x123)|x124);

    if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = INT64_MAX;
	static int8_t x126 = -14;
	int32_t x127 = -1;
	int16_t x128 = INT16_MIN;
	int32_t t31 = -21;

    t31 = (((x125|x126)==x127)|x128);

    if (t31 != -32767) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x129 = INT32_MAX;
	uint16_t x130 = UINT16_MAX;
	int8_t x131 = INT8_MIN;
	static int32_t x132 = INT32_MIN;
	static volatile int32_t t32 = INT32_MIN;

    t32 = (((x129|x130)==x131)|x132);

    if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile uint8_t x133 = UINT8_MAX;
	int32_t x134 = -1;
	uint32_t x135 = UINT32_MAX;
	int16_t x136 = INT16_MIN;
	volatile int32_t t33 = 0;

    t33 = (((x133|x134)==x135)|x136);

    if (t33 != -32767) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x137 = INT8_MIN;
	uint16_t x138 = 3U;
	int64_t x139 = INT64_MIN;
	uint32_t x140 = UINT32_MAX;
	volatile uint32_t t34 = UINT32_MAX;

    t34 = (((x137|x138)==x139)|x140);

    if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = -1LL;
	volatile int16_t x142 = -6;
	static int16_t x143 = INT16_MAX;
	static int8_t x144 = -1;
	int32_t t35 = -22710361;

    t35 = (((x141|x142)==x143)|x144);

    if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = INT64_MIN;
	uint8_t x146 = UINT8_MAX;
	int16_t x148 = INT16_MAX;
	static int32_t t36 = -2;

    t36 = (((x145|x146)==x147)|x148);

    if (t36 != 32767) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x149 = UINT8_MAX;
	static int16_t x150 = INT16_MIN;
	int16_t x151 = INT16_MAX;
	uint16_t x152 = UINT16_MAX;
	int32_t t37 = 28;

    t37 = (((x149|x150)==x151)|x152);

    if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = 191;
	static int64_t x154 = 4006251LL;
	int16_t x155 = INT16_MIN;
	static int64_t x156 = 0LL;
	volatile int64_t t38 = -162816419LL;

    t38 = (((x153|x154)==x155)|x156);

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x158 = -1;
	int16_t x159 = INT16_MIN;
	static volatile int32_t t39 = 0;

    t39 = (((x157|x158)==x159)|x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x161 = INT16_MIN;
	int8_t x162 = INT8_MIN;
	static int32_t t40 = -352075;

    t40 = (((x161|x162)==x163)|x164);

    if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x165 = -4697937LL;
	int8_t x166 = -22;
	int64_t x167 = INT64_MAX;
	volatile int32_t x168 = INT32_MIN;
	static int32_t t41 = INT32_MIN;

    t41 = (((x165|x166)==x167)|x168);

    if (t41 != INT32_MIN) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint16_t x169 = 0U;
	static uint32_t x170 = 3U;
	volatile uint16_t x172 = 136U;
	volatile int32_t t42 = 121334;

    t42 = (((x169|x170)==x171)|x172);

    if (t42 != 136) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = 5;
	int64_t x174 = INT64_MIN;
	int16_t x175 = 0;
	static int32_t x176 = INT32_MAX;
	volatile int32_t t43 = INT32_MAX;

    t43 = (((x173|x174)==x175)|x176);

    if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x177 = INT32_MIN;
	static volatile int16_t x180 = 315;

    t44 = (((x177|x178)==x179)|x180);

    if (t44 != 315) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = -30084794;
	static int16_t x182 = INT16_MIN;
	int32_t x183 = INT32_MIN;
	uint8_t x184 = 1U;
	volatile int32_t t45 = 85176302;

    t45 = (((x181|x182)==x183)|x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x185 = 6999350325782LL;
	static int32_t x186 = 23866167;
	uint16_t x187 = 16129U;
	uint64_t t46 = 726590331615LLU;

    t46 = (((x185|x186)==x187)|x188);

    if (t46 != 26986875LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x189 = INT8_MAX;
	uint8_t x190 = UINT8_MAX;
	int16_t x191 = INT16_MIN;
	uint8_t x192 = UINT8_MAX;
	static int32_t t47 = -128075;

    t47 = (((x189|x190)==x191)|x192);

    if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x193 = 451154271971LLU;
	int8_t x195 = INT8_MAX;
	static volatile int64_t x196 = INT64_MIN;
	int64_t t48 = INT64_MIN;

    t48 = (((x193|x194)==x195)|x196);

    if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x198 = INT64_MIN;
	volatile int32_t x199 = INT32_MAX;
	static volatile int64_t x200 = -1LL;
	volatile int64_t t49 = -262417971089LL;

    t49 = (((x197|x198)==x199)|x200);

    if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x201 = INT64_MAX;
	int8_t x202 = INT8_MAX;
	static int32_t x203 = INT32_MAX;
	int32_t t50 = -1;

    t50 = (((x201|x202)==x203)|x204);

    if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x207 = INT8_MAX;
	int8_t x208 = -1;
	volatile int32_t t51 = 1;

    t51 = (((x205|x206)==x207)|x208);

    if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint32_t x209 = 35775469U;
	uint8_t x210 = 15U;
	int64_t x211 = -1LL;
	int32_t x212 = 31147639;
	static int32_t t52 = -1;

    t52 = (((x209|x210)==x211)|x212);

    if (t52 != 31147639) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x213 = -790913316;
	volatile int64_t x214 = INT64_MAX;
	static int16_t x215 = INT16_MIN;
	uint32_t x216 = 26287399U;
	volatile uint32_t t53 = 274903U;

    t53 = (((x213|x214)==x215)|x216);

    if (t53 != 26287399U) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x219 = INT64_MAX;
	static volatile uint8_t x220 = 0U;
	volatile int32_t t54 = 444292;

    t54 = (((x217|x218)==x219)|x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = -1;
	static int64_t x222 = -1LL;
	int8_t x223 = -1;
	int32_t t55 = -811687122;

    t55 = (((x221|x222)==x223)|x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x225 = 2315819U;
	int16_t x226 = 1;
	uint8_t x227 = UINT8_MAX;
	int16_t x228 = 5;
	static int32_t t56 = -578179744;

    t56 = (((x225|x226)==x227)|x228);

    if (t56 != 5) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x229 = 0U;
	int64_t x230 = INT64_MIN;
	int16_t x231 = INT16_MIN;
	int16_t x232 = INT16_MIN;
	int32_t t57 = 427092;

    t57 = (((x229|x230)==x231)|x232);

    if (t57 != -32768) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x233 = UINT8_MAX;
	int32_t x234 = INT32_MAX;
	uint16_t x235 = 1885U;
	int8_t x236 = INT8_MIN;

    t58 = (((x233|x234)==x235)|x236);

    if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x237 = INT32_MAX;
	uint32_t x238 = UINT32_MAX;
	int32_t x239 = -1096;
	volatile int16_t x240 = 0;
	int32_t t59 = -160;

    t59 = (((x237|x238)==x239)|x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint32_t x241 = UINT32_MAX;
	uint8_t x242 = UINT8_MAX;
	int32_t x243 = INT32_MIN;
	volatile int32_t t60 = -117;

    t60 = (((x241|x242)==x243)|x244);

    if (t60 != -128) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int16_t x245 = -2877;
	static int32_t x248 = INT32_MAX;
	int32_t t61 = INT32_MAX;

    t61 = (((x245|x246)==x247)|x248);

    if (t61 != INT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = INT64_MAX;
	uint16_t x250 = UINT16_MAX;
	static int64_t x251 = -1LL;
	int64_t x252 = INT64_MAX;
	volatile int64_t t62 = INT64_MAX;

    t62 = (((x249|x250)==x251)|x252);

    if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x253 = 573224154697063153LLU;
	static uint16_t x254 = 41U;
	static int8_t x255 = INT8_MAX;
	static volatile int64_t t63 = INT64_MAX;

    t63 = (((x253|x254)==x255)|x256);

    if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint16_t x257 = 14U;
	static int8_t x258 = -1;
	volatile int32_t t64 = -23276;

    t64 = (((x257|x258)==x259)|x260);

    if (t64 != -2147483647) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = 7;
	int16_t x262 = -15099;
	int8_t x263 = INT8_MIN;
	int64_t x264 = INT64_MIN;
	volatile int64_t t65 = INT64_MIN;

    t65 = (((x261|x262)==x263)|x264);

    if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x265 = 79U;
	int64_t x266 = -1LL;
	uint32_t x267 = 1061U;
	uint16_t x268 = 1U;

    t66 = (((x265|x266)==x267)|x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x269 = -2;
	int8_t x270 = INT8_MIN;
	uint64_t x271 = 93490614610LLU;
	volatile int16_t x272 = INT16_MIN;
	volatile int32_t t67 = -307;

    t67 = (((x269|x270)==x271)|x272);

    if (t67 != -32768) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = INT16_MIN;
	uint8_t x274 = 0U;
	static int16_t x275 = INT16_MIN;
	static int32_t x276 = INT32_MIN;

    t68 = (((x273|x274)==x275)|x276);

    if (t68 != -2147483647) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x277 = INT32_MAX;
	int16_t x279 = -1;
	int8_t x280 = INT8_MIN;
	volatile int32_t t69 = 1676;

    t69 = (((x277|x278)==x279)|x280);

    if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x281 = 57561929718477124LLU;
	static int64_t x282 = INT64_MIN;
	int64_t x283 = 2433024763465990318LL;
	int8_t x284 = -1;
	volatile int32_t t70 = 46;

    t70 = (((x281|x282)==x283)|x284);

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = INT8_MAX;
	int8_t x286 = INT8_MAX;
	int16_t x287 = INT16_MIN;
	int8_t x288 = INT8_MAX;
	static int32_t t71 = -590143262;

    t71 = (((x285|x286)==x287)|x288);

    if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x289 = -1;
	static uint16_t x290 = UINT16_MAX;
	uint16_t x291 = 18344U;
	int64_t x292 = -261575035882809LL;
	volatile int64_t t72 = -1LL;

    t72 = (((x289|x290)==x291)|x292);

    if (t72 != -261575035882809LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x295 = UINT32_MAX;
	int32_t x296 = -1;
	static volatile int32_t t73 = -247681397;

    t73 = (((x293|x294)==x295)|x296);

    if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x297 = -790;
	volatile int32_t x300 = INT32_MIN;
	static int32_t t74 = INT32_MIN;

    t74 = (((x297|x298)==x299)|x300);

    if (t74 != INT32_MIN) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint16_t x301 = 11653U;
	uint32_t x302 = 1639U;
	static int64_t x303 = -1LL;
	int8_t x304 = INT8_MIN;
	volatile int32_t t75 = 6347;

    t75 = (((x301|x302)==x303)|x304);

    if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x305 = 47;
	static uint8_t x306 = 7U;
	int8_t x307 = -1;
	volatile int64_t x308 = INT64_MAX;
	int64_t t76 = INT64_MAX;

    t76 = (((x305|x306)==x307)|x308);

    if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = -2582088;
	uint64_t x310 = 7468174919LLU;
	static int64_t x311 = -1LL;
	static volatile int16_t x312 = INT16_MIN;
	static int32_t t77 = 54201;

    t77 = (((x309|x310)==x311)|x312);

    if (t77 != -32768) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x313 = 1;
	static int8_t x314 = INT8_MAX;
	int8_t x315 = -1;
	static uint64_t t78 = 10LLU;

    t78 = (((x313|x314)==x315)|x316);

    if (t78 != 3LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x317 = 8U;
	uint16_t x319 = 13U;
	int16_t x320 = INT16_MAX;
	int32_t t79 = -4508;

    t79 = (((x317|x318)==x319)|x320);

    if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile uint8_t x321 = 13U;
	int64_t x322 = INT64_MIN;
	int32_t x323 = 172544;
	volatile int16_t x324 = -1;
	int32_t t80 = -15414;

    t80 = (((x321|x322)==x323)|x324);

    if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x325 = UINT64_MAX;
	int8_t x326 = INT8_MIN;
	static int8_t x327 = INT8_MAX;
	volatile int8_t x328 = INT8_MIN;
	int32_t t81 = 1;

    t81 = (((x325|x326)==x327)|x328);

    if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x329 = INT16_MIN;
	static uint32_t x330 = UINT32_MAX;
	static volatile int16_t x331 = -79;

    t82 = (((x329|x330)==x331)|x332);

    if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x334 = INT16_MIN;
	volatile int8_t x335 = INT8_MIN;
	volatile uint64_t x336 = UINT64_MAX;
	static volatile uint64_t t83 = UINT64_MAX;

    t83 = (((x333|x334)==x335)|x336);

    if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x338 = INT32_MIN;
	volatile int16_t x339 = INT16_MAX;
	int16_t x340 = -1;
	int32_t t84 = 48096;

    t84 = (((x337|x338)==x339)|x340);

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x341 = UINT8_MAX;
	static int8_t x342 = INT8_MIN;
	volatile int64_t x344 = INT64_MIN;

    t85 = (((x341|x342)==x343)|x344);

    if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x345 = INT64_MIN;
	int16_t x346 = INT16_MAX;
	int32_t x348 = INT32_MIN;
	volatile int32_t t86 = INT32_MIN;

    t86 = (((x345|x346)==x347)|x348);

    if (t86 != INT32_MIN) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x349 = INT8_MAX;
	uint32_t x351 = 229285158U;

    t87 = (((x349|x350)==x351)|x352);

    if (t87 != 1673515845LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x353 = 7921U;
	volatile int16_t x354 = INT16_MAX;
	uint8_t x355 = 7U;
	uint8_t x356 = 0U;
	static int32_t t88 = -881;

    t88 = (((x353|x354)==x355)|x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x357 = INT8_MIN;
	uint16_t x358 = UINT16_MAX;
	int16_t x359 = 35;
	static volatile uint8_t x360 = UINT8_MAX;
	int32_t t89 = -21137;

    t89 = (((x357|x358)==x359)|x360);

    if (t89 != 255) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x361 = INT16_MIN;
	uint64_t x362 = 6367935003571374099LLU;
	static int32_t x364 = INT32_MIN;
	static volatile int32_t t90 = INT32_MIN;

    t90 = (((x361|x362)==x363)|x364);

    if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x365 = 11U;
	uint8_t x366 = 3U;
	static int16_t x367 = INT16_MAX;
	int32_t t91 = -282;

    t91 = (((x365|x366)==x367)|x368);

    if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x369 = INT64_MAX;
	int64_t x370 = INT64_MAX;
	volatile int16_t x371 = -3;
	static int8_t x372 = INT8_MAX;
	volatile int32_t t92 = -117;

    t92 = (((x369|x370)==x371)|x372);

    if (t92 != 127) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x373 = -106467LL;
	int32_t x374 = INT32_MIN;
	int8_t x375 = 24;
	uint64_t x376 = 19446262565837LLU;
	volatile uint64_t t93 = 112919318072438LLU;

    t93 = (((x373|x374)==x375)|x376);

    if (t93 != 19446262565837LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x377 = -1;
	volatile uint32_t x378 = 2634959U;
	volatile uint16_t x380 = UINT16_MAX;
	int32_t t94 = -1;

    t94 = (((x377|x378)==x379)|x380);

    if (t94 != 65535) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = 3;
	int16_t x382 = -1;
	int64_t x383 = INT64_MAX;
	int16_t x384 = INT16_MIN;
	static volatile int32_t t95 = -3320321;

    t95 = (((x381|x382)==x383)|x384);

    if (t95 != -32768) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint64_t x386 = UINT64_MAX;
	int32_t x387 = -40;
	volatile int64_t t96 = INT64_MAX;

    t96 = (((x385|x386)==x387)|x388);

    if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x390 = -4;
	int32_t x391 = INT32_MIN;

    t97 = (((x389|x390)==x391)|x392);

    if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x394 = 346370785810LLU;
	volatile uint32_t x395 = 1977624U;
	volatile int32_t x396 = -17;
	volatile int32_t t98 = 15414914;

    t98 = (((x393|x394)==x395)|x396);

    if (t98 != -17) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x397 = 693;
	volatile int16_t x398 = -1;
	volatile int16_t x399 = 16100;
	int8_t x400 = -56;
	int32_t t99 = 263853674;

    t99 = (((x397|x398)==x399)|x400);

    if (t99 != -56) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x401 = 0LL;
	uint16_t x402 = 148U;
	static volatile int16_t x404 = -13;
	static volatile int32_t t100 = -4;

    t100 = (((x401|x402)==x403)|x404);

    if (t100 != -13) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x405 = INT16_MIN;
	static int16_t x406 = INT16_MIN;
	static volatile uint32_t x407 = 45987193U;
	uint64_t x408 = 839322891LLU;

    t101 = (((x405|x406)==x407)|x408);

    if (t101 != 839322891LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = 952830;
	static uint16_t x410 = UINT16_MAX;
	uint32_t x411 = 3265U;
	int16_t x412 = -1;

    t102 = (((x409|x410)==x411)|x412);

    if (t102 != -1) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint64_t x413 = UINT64_MAX;
	static int32_t x414 = INT32_MIN;
	int32_t x415 = INT32_MIN;
	int16_t x416 = -1;
	volatile int32_t t103 = 3;

    t103 = (((x413|x414)==x415)|x416);

    if (t103 != -1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint32_t x417 = 468U;
	int16_t x418 = INT16_MAX;
	int64_t t104 = INT64_MIN;

    t104 = (((x417|x418)==x419)|x420);

    if (t104 != INT64_MIN) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x421 = 110731346;
	int64_t x422 = INT64_MIN;
	int32_t x423 = INT32_MAX;

    t105 = (((x421|x422)==x423)|x424);

    if (t105 != 24) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int16_t x425 = INT16_MAX;
	int64_t x426 = INT64_MAX;
	int32_t x427 = INT32_MAX;
	uint8_t x428 = UINT8_MAX;
	volatile int32_t t106 = 14195;

    t106 = (((x425|x426)==x427)|x428);

    if (t106 != 255) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x429 = INT8_MIN;
	int32_t x431 = 211276;
	int32_t x432 = 306369;
	volatile int32_t t107 = -7994331;

    t107 = (((x429|x430)==x431)|x432);

    if (t107 != 306369) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x433 = -5LL;
	uint16_t x435 = 1U;
	volatile uint32_t x436 = 1045625853U;
	volatile uint32_t t108 = 5U;

    t108 = (((x433|x434)==x435)|x436);

    if (t108 != 1045625853U) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x437 = INT8_MIN;
	static volatile int8_t x438 = -22;
	uint32_t x439 = 142839769U;
	static int64_t x440 = 180LL;
	volatile int64_t t109 = -1127970574LL;

    t109 = (((x437|x438)==x439)|x440);

    if (t109 != 180LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x442 = -4319476059391LL;
	static uint16_t x444 = UINT16_MAX;
	static int32_t t110 = -578;

    t110 = (((x441|x442)==x443)|x444);

    if (t110 != 65535) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x445 = UINT32_MAX;
	uint16_t x446 = 65U;
	uint32_t x447 = 7U;
	static int64_t x448 = -1LL;
	volatile int64_t t111 = -8905500587866646LL;

    t111 = (((x445|x446)==x447)|x448);

    if (t111 != -1LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x450 = 1387U;
	int16_t x452 = 270;
	static volatile int32_t t112 = 54;

    t112 = (((x449|x450)==x451)|x452);

    if (t112 != 270) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x453 = -1;
	uint64_t x454 = 622743779LLU;
	uint8_t x455 = 2U;
	static volatile int32_t t113 = 231537037;

    t113 = (((x453|x454)==x455)|x456);

    if (t113 != -32768) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile uint16_t x457 = 0U;
	int8_t x458 = -1;
	int64_t x459 = INT64_MIN;
	volatile uint16_t x460 = UINT16_MAX;
	int32_t t114 = -36477357;

    t114 = (((x457|x458)==x459)|x460);

    if (t114 != 65535) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x461 = 283968616U;
	uint8_t x462 = 1U;
	int8_t x463 = -1;
	int64_t x464 = -101962781531LL;
	volatile int64_t t115 = -57LL;

    t115 = (((x461|x462)==x463)|x464);

    if (t115 != -101962781531LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = INT64_MIN;
	volatile uint32_t x466 = 332U;
	int16_t x467 = 5;
	uint16_t x468 = UINT16_MAX;
	static volatile int32_t t116 = 3;

    t116 = (((x465|x466)==x467)|x468);

    if (t116 != 65535) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = INT8_MAX;
	static int8_t x470 = INT8_MIN;
	uint32_t x471 = 33604U;
	int16_t x472 = INT16_MAX;
	int32_t t117 = -1;

    t117 = (((x469|x470)==x471)|x472);

    if (t117 != 32767) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x473 = INT16_MIN;
	volatile int32_t x475 = INT32_MIN;
	uint64_t x476 = 112974LLU;

    t118 = (((x473|x474)==x475)|x476);

    if (t118 != 112974LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x477 = INT8_MIN;
	int32_t x479 = INT32_MAX;
	volatile uint32_t t119 = 128U;

    t119 = (((x477|x478)==x479)|x480);

    if (t119 != 678895275U) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint64_t x482 = UINT64_MAX;
	int64_t x483 = INT64_MIN;
	volatile int16_t x484 = INT16_MIN;
	int32_t t120 = 789;

    t120 = (((x481|x482)==x483)|x484);

    if (t120 != -32768) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile uint32_t x485 = UINT32_MAX;
	int64_t x486 = -1LL;
	static int32_t x487 = INT32_MIN;
	static int64_t x488 = INT64_MIN;
	volatile int64_t t121 = INT64_MIN;

    t121 = (((x485|x486)==x487)|x488);

    if (t121 != INT64_MIN) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint8_t x489 = UINT8_MAX;
	static int16_t x491 = 266;
	static int8_t x492 = INT8_MIN;
	volatile int32_t t122 = 111;

    t122 = (((x489|x490)==x491)|x492);

    if (t122 != -128) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x493 = 660U;
	uint16_t x494 = UINT16_MAX;
	volatile int32_t t123 = 756592011;

    t123 = (((x493|x494)==x495)|x496);

    if (t123 != 255) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x497 = -22;
	static uint8_t x499 = 3U;
	int16_t x500 = -12;

    t124 = (((x497|x498)==x499)|x500);

    if (t124 != -12) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint32_t x501 = 60519U;
	uint32_t x502 = UINT32_MAX;
	static int32_t x503 = INT32_MIN;
	int16_t x504 = -1;
	volatile int32_t t125 = 277;

    t125 = (((x501|x502)==x503)|x504);

    if (t125 != -1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x507 = -1;
	volatile int32_t x508 = 380;
	int32_t t126 = 506;

    t126 = (((x505|x506)==x507)|x508);

    if (t126 != 381) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x509 = 7U;
	int32_t x510 = INT32_MIN;
	static int64_t x511 = -1LL;
	volatile int64_t t127 = INT64_MIN;

    t127 = (((x509|x510)==x511)|x512);

    if (t127 != INT64_MIN) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x513 = 8U;
	uint64_t x514 = 13077705133564LLU;
	uint64_t x515 = UINT64_MAX;
	static int32_t x516 = INT32_MIN;
	static int32_t t128 = INT32_MIN;

    t128 = (((x513|x514)==x515)|x516);

    if (t128 != INT32_MIN) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x518 = INT32_MIN;
	int16_t x519 = INT16_MIN;
	static int32_t t129 = INT32_MAX;

    t129 = (((x517|x518)==x519)|x520);

    if (t129 != INT32_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int32_t x521 = 108272;
	int16_t x522 = -1;
	volatile int32_t t130 = -39137312;

    t130 = (((x521|x522)==x523)|x524);

    if (t130 != -4) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = INT64_MIN;
	static volatile int64_t x526 = -1LL;
	int16_t x527 = INT16_MAX;
	uint64_t x528 = UINT64_MAX;
	volatile uint64_t t131 = UINT64_MAX;

    t131 = (((x525|x526)==x527)|x528);

    if (t131 != UINT64_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = 62;
	uint8_t x530 = 3U;
	static int16_t x531 = INT16_MAX;
	volatile int32_t t132 = 218020112;

    t132 = (((x529|x530)==x531)|x532);

    if (t132 != -1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = -1;
	uint64_t x536 = 4042311LLU;
	uint64_t t133 = 12211962459846423LLU;

    t133 = (((x533|x534)==x535)|x536);

    if (t133 != 4042311LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x538 = INT64_MAX;
	static int32_t x539 = INT32_MIN;
	uint64_t x540 = 3631427565075627LLU;
	static uint64_t t134 = 1656120LLU;

    t134 = (((x537|x538)==x539)|x540);

    if (t134 != 3631427565075627LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = 0;
	volatile int16_t x542 = 9859;
	int32_t x543 = INT32_MIN;
	volatile uint8_t x544 = UINT8_MAX;
	int32_t t135 = -73;

    t135 = (((x541|x542)==x543)|x544);

    if (t135 != 255) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = 122290;
	volatile int8_t x546 = INT8_MIN;
	int64_t x547 = INT64_MIN;
	static int16_t x548 = -2314;
	int32_t t136 = -24882;

    t136 = (((x545|x546)==x547)|x548);

    if (t136 != -2314) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = INT8_MAX;
	static int16_t x551 = -16;
	static int32_t t137 = 239;

    t137 = (((x549|x550)==x551)|x552);

    if (t137 != 255) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x553 = INT64_MAX;
	int64_t x554 = -1086700LL;
	volatile int32_t x555 = 6538;
	volatile int32_t t138 = 132086;

    t138 = (((x553|x554)==x555)|x556);

    if (t138 != -32768) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x557 = -1;
	int16_t x558 = 78;
	uint64_t x560 = 4227864982676LLU;

    t139 = (((x557|x558)==x559)|x560);

    if (t139 != 4227864982676LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint8_t x561 = 6U;
	static int16_t x562 = INT16_MIN;
	static volatile int16_t x564 = INT16_MIN;

    t140 = (((x561|x562)==x563)|x564);

    if (t140 != -32768) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint32_t x565 = 8U;
	static volatile uint16_t x566 = 325U;
	int16_t x567 = -27;
	int64_t x568 = INT64_MIN;
	int64_t t141 = INT64_MIN;

    t141 = (((x565|x566)==x567)|x568);

    if (t141 != INT64_MIN) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x569 = INT8_MIN;
	volatile int32_t x570 = 170;
	volatile int64_t t142 = INT64_MAX;

    t142 = (((x569|x570)==x571)|x572);

    if (t142 != INT64_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x573 = 13U;
	static volatile int8_t x575 = -1;
	uint8_t x576 = UINT8_MAX;
	volatile int32_t t143 = 0;

    t143 = (((x573|x574)==x575)|x576);

    if (t143 != 255) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x578 = -186;
	uint32_t x579 = UINT32_MAX;
	volatile int32_t t144 = -867099;

    t144 = (((x577|x578)==x579)|x580);

    if (t144 != -2147483647) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint16_t x581 = UINT16_MAX;
	static int32_t x582 = INT32_MIN;
	uint32_t x583 = UINT32_MAX;
	int32_t x584 = -6117088;

    t145 = (((x581|x582)==x583)|x584);

    if (t145 != -6117088) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x585 = -224;
	int32_t x586 = INT32_MAX;
	static uint32_t x588 = 202777U;
	uint32_t t146 = 1U;

    t146 = (((x585|x586)==x587)|x588);

    if (t146 != 202777U) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x589 = INT64_MIN;
	volatile int64_t x590 = -1LL;
	volatile uint8_t x592 = UINT8_MAX;
	volatile int32_t t147 = -1692;

    t147 = (((x589|x590)==x591)|x592);

    if (t147 != 255) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x593 = INT64_MIN;
	uint32_t x594 = 12678U;
	static int8_t x596 = -46;
	int32_t t148 = -52426461;

    t148 = (((x593|x594)==x595)|x596);

    if (t148 != -46) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = INT32_MAX;
	int64_t x598 = INT64_MAX;
	int32_t x599 = -746;
	uint8_t x600 = UINT8_MAX;

    t149 = (((x597|x598)==x599)|x600);

    if (t149 != 255) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x602 = 107275LLU;
	int16_t x604 = -1;
	static int32_t t150 = -2;

    t150 = (((x601|x602)==x603)|x604);

    if (t150 != -1) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x605 = INT32_MIN;
	static int64_t x607 = -1LL;
	volatile int32_t x608 = 26533648;

    t151 = (((x605|x606)==x607)|x608);

    if (t151 != 26533648) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x609 = INT64_MAX;
	volatile uint32_t x610 = UINT32_MAX;
	volatile int16_t x611 = INT16_MAX;
	int8_t x612 = INT8_MAX;
	static int32_t t152 = -518962154;

    t152 = (((x609|x610)==x611)|x612);

    if (t152 != 127) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int32_t x613 = INT32_MIN;
	static uint8_t x614 = 95U;
	int16_t x615 = INT16_MIN;
	volatile int64_t x616 = 4545LL;
	volatile int64_t t153 = -4178648LL;

    t153 = (((x613|x614)==x615)|x616);

    if (t153 != 4545LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x617 = 7700692466LL;
	int8_t x619 = 28;
	static volatile int64_t t154 = 0LL;

    t154 = (((x617|x618)==x619)|x620);

    if (t154 != -1LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x621 = 3U;
	int8_t x622 = INT8_MAX;
	static int8_t x623 = INT8_MIN;
	volatile int64_t t155 = 1LL;

    t155 = (((x621|x622)==x623)|x624);

    if (t155 != -1LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x626 = 853;
	uint32_t x627 = 42U;
	int32_t x628 = INT32_MAX;
	static volatile int32_t t156 = INT32_MAX;

    t156 = (((x625|x626)==x627)|x628);

    if (t156 != INT32_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x629 = -1;
	int16_t x630 = -32;
	static int64_t x632 = INT64_MAX;
	volatile int64_t t157 = INT64_MAX;

    t157 = (((x629|x630)==x631)|x632);

    if (t157 != INT64_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x634 = UINT8_MAX;
	int8_t x635 = -1;
	int64_t t158 = INT64_MAX;

    t158 = (((x633|x634)==x635)|x636);

    if (t158 != INT64_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x637 = UINT16_MAX;
	static int16_t x639 = INT16_MIN;
	uint16_t x640 = 479U;

    t159 = (((x637|x638)==x639)|x640);

    if (t159 != 479) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint16_t x641 = 28266U;
	uint32_t x642 = UINT32_MAX;
	int32_t t160 = -1;

    t160 = (((x641|x642)==x643)|x644);

    if (t160 != 32767) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x646 = 19941343;
	volatile int8_t x647 = INT8_MIN;
	static int16_t x648 = -233;

    t161 = (((x645|x646)==x647)|x648);

    if (t161 != -233) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x649 = 31U;
	uint16_t x650 = UINT16_MAX;
	static volatile int16_t x651 = 0;
	uint64_t x652 = 1LLU;
	uint64_t t162 = 61650LLU;

    t162 = (((x649|x650)==x651)|x652);

    if (t162 != 1LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x654 = INT32_MIN;
	uint64_t x655 = UINT64_MAX;
	volatile int32_t x656 = INT32_MIN;
	static int32_t t163 = INT32_MIN;

    t163 = (((x653|x654)==x655)|x656);

    if (t163 != INT32_MIN) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = -1LL;
	int32_t x658 = 890;
	volatile int64_t x659 = 50LL;
	uint8_t x660 = 4U;
	int32_t t164 = 32893439;

    t164 = (((x657|x658)==x659)|x660);

    if (t164 != 4) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x661 = UINT64_MAX;
	uint32_t x662 = 52762278U;
	int16_t x664 = INT16_MIN;
	int32_t t165 = -7;

    t165 = (((x661|x662)==x663)|x664);

    if (t165 != -32768) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint8_t x665 = 0U;
	int32_t x667 = INT32_MAX;
	int32_t t166 = 1;

    t166 = (((x665|x666)==x667)|x668);

    if (t166 != 32767) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x669 = INT16_MIN;
	static uint8_t x670 = 8U;
	volatile uint32_t x672 = UINT32_MAX;
	static volatile uint32_t t167 = UINT32_MAX;

    t167 = (((x669|x670)==x671)|x672);

    if (t167 != UINT32_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x673 = INT32_MAX;
	int32_t x674 = INT32_MIN;
	int32_t x675 = 14389;
	int16_t x676 = 3166;
	int32_t t168 = -119266065;

    t168 = (((x673|x674)==x675)|x676);

    if (t168 != 3166) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = INT32_MAX;
	volatile int64_t x678 = INT64_MIN;
	int16_t x679 = INT16_MIN;
	int32_t x680 = INT32_MAX;
	volatile int32_t t169 = INT32_MAX;

    t169 = (((x677|x678)==x679)|x680);

    if (t169 != INT32_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x681 = INT16_MIN;
	int16_t x682 = INT16_MIN;
	int64_t t170 = 626081LL;

    t170 = (((x681|x682)==x683)|x684);

    if (t170 != 63LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x685 = -1LL;
	int16_t x686 = INT16_MIN;
	int32_t x687 = INT32_MAX;
	int8_t x688 = -5;

    t171 = (((x685|x686)==x687)|x688);

    if (t171 != -5) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int32_t x689 = 48;
	uint64_t x691 = UINT64_MAX;
	volatile int64_t x692 = -543231084924769LL;
	int64_t t172 = -13505LL;

    t172 = (((x689|x690)==x691)|x692);

    if (t172 != -543231084924769LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x693 = INT32_MIN;
	int16_t x694 = 2;
	int16_t x695 = 589;
	uint32_t x696 = UINT32_MAX;

    t173 = (((x693|x694)==x695)|x696);

    if (t173 != UINT32_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x697 = 3701791U;
	int16_t x699 = 0;
	static int16_t x700 = INT16_MIN;

    t174 = (((x697|x698)==x699)|x700);

    if (t174 != -32768) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint16_t x701 = 3516U;
	volatile int8_t x702 = INT8_MIN;
	uint64_t x704 = 146859808971LLU;
	uint64_t t175 = 132LLU;

    t175 = (((x701|x702)==x703)|x704);

    if (t175 != 146859808971LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x705 = INT8_MIN;
	uint16_t x707 = 302U;
	uint8_t x708 = 4U;
	int32_t t176 = -1;

    t176 = (((x705|x706)==x707)|x708);

    if (t176 != 4) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x709 = UINT8_MAX;
	int32_t x710 = INT32_MIN;
	volatile int16_t x711 = INT16_MIN;
	int32_t t177 = 6393140;

    t177 = (((x709|x710)==x711)|x712);

    if (t177 != 1335) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint64_t x713 = 1979893602108416LLU;
	static volatile int16_t x714 = INT16_MIN;
	volatile int16_t x715 = -3;
	static int32_t t178 = 40;

    t178 = (((x713|x714)==x715)|x716);

    if (t178 != -128) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x717 = -1LL;
	int64_t x718 = -1473493778LL;
	int16_t x719 = -1;
	int32_t t179 = -11;

    t179 = (((x717|x718)==x719)|x720);

    if (t179 != 9153) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = INT16_MIN;
	int8_t x722 = INT8_MAX;
	int8_t x723 = INT8_MAX;
	int32_t x724 = INT32_MAX;
	volatile int32_t t180 = INT32_MAX;

    t180 = (((x721|x722)==x723)|x724);

    if (t180 != INT32_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x725 = INT32_MIN;
	static int64_t x727 = -27355174LL;
	int16_t x728 = -1;
	volatile int32_t t181 = 56256298;

    t181 = (((x725|x726)==x727)|x728);

    if (t181 != -1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x729 = INT32_MIN;
	uint64_t x730 = UINT64_MAX;
	uint64_t x731 = UINT64_MAX;
	int64_t t182 = 1056978992169LL;

    t182 = (((x729|x730)==x731)|x732);

    if (t182 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x733 = 46U;
	static uint8_t x734 = 55U;
	uint32_t x735 = 20U;
	static uint32_t x736 = UINT32_MAX;
	volatile uint32_t t183 = UINT32_MAX;

    t183 = (((x733|x734)==x735)|x736);

    if (t183 != UINT32_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x738 = -1;
	static int16_t x739 = 495;
	int32_t t184 = 1493;

    t184 = (((x737|x738)==x739)|x740);

    if (t184 != 32767) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x741 = 16U;
	uint16_t x742 = 19373U;
	int64_t x743 = -16515285747644381LL;

    t185 = (((x741|x742)==x743)|x744);

    if (t185 != UINT32_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x745 = UINT64_MAX;
	int64_t x746 = INT64_MIN;
	int32_t x747 = -1;

    t186 = (((x745|x746)==x747)|x748);

    if (t186 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x750 = 6;
	static int32_t x751 = INT32_MAX;
	int16_t x752 = INT16_MIN;
	int32_t t187 = 441280;

    t187 = (((x749|x750)==x751)|x752);

    if (t187 != -32768) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint16_t x753 = 651U;
	volatile int32_t x754 = INT32_MAX;
	int32_t x755 = 5191;
	int64_t t188 = 789076LL;

    t188 = (((x753|x754)==x755)|x756);

    if (t188 != -370LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x757 = UINT32_MAX;
	int16_t x758 = 0;
	int32_t x759 = INT32_MIN;
	static volatile int16_t x760 = INT16_MIN;
	volatile int32_t t189 = -1;

    t189 = (((x757|x758)==x759)|x760);

    if (t189 != -32768) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x761 = INT16_MAX;
	int32_t x762 = INT32_MIN;
	uint64_t x763 = 2513860787982LLU;
	volatile int8_t x764 = -5;
	int32_t t190 = 315234;

    t190 = (((x761|x762)==x763)|x764);

    if (t190 != -5) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x765 = UINT64_MAX;
	uint32_t x766 = 2U;
	int32_t x767 = INT32_MIN;
	int16_t x768 = -7;
	volatile int32_t t191 = 10142;

    t191 = (((x765|x766)==x767)|x768);

    if (t191 != -7) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x769 = 10U;
	int32_t x770 = -16;
	volatile int16_t x772 = -1;
	int32_t t192 = 239;

    t192 = (((x769|x770)==x771)|x772);

    if (t192 != -1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x773 = UINT16_MAX;
	int32_t x774 = -1;

    t193 = (((x773|x774)==x775)|x776);

    if (t193 != 13803543908971413LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = INT16_MIN;
	volatile uint64_t x779 = 3524873637739392079LLU;
	int8_t x780 = INT8_MIN;
	int32_t t194 = 11317892;

    t194 = (((x777|x778)==x779)|x780);

    if (t194 != -128) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x781 = UINT64_MAX;
	int16_t x782 = -5567;
	static uint64_t x783 = 1821969310711LLU;
	int8_t x784 = INT8_MAX;
	volatile int32_t t195 = 1150355;

    t195 = (((x781|x782)==x783)|x784);

    if (t195 != 127) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x785 = 5;
	volatile uint16_t x786 = UINT16_MAX;
	int16_t x787 = INT16_MIN;
	volatile int8_t x788 = INT8_MAX;
	volatile int32_t t196 = 7702691;

    t196 = (((x785|x786)==x787)|x788);

    if (t196 != 127) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = -1;
	int64_t x791 = INT64_MIN;
	volatile uint8_t x792 = 86U;
	volatile int32_t t197 = 3895;

    t197 = (((x789|x790)==x791)|x792);

    if (t197 != 86) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x794 = UINT64_MAX;
	volatile int16_t x795 = -1;
	int64_t x796 = 51398426507570045LL;
	volatile int64_t t198 = -3960LL;

    t198 = (((x793|x794)==x795)|x796);

    if (t198 != 51398426507570045LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x797 = UINT8_MAX;
	static int8_t x798 = INT8_MIN;
	volatile int32_t x800 = 453;
	static int32_t t199 = 20319040;

    t199 = (((x797|x798)==x799)|x800);

    if (t199 != 453) { NG(); } else { ; }
	
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

