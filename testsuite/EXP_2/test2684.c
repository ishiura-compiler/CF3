
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

int8_t x4 = 54;
volatile int32_t t0 = 55338;
uint16_t x13 = UINT16_MAX;
int64_t x14 = 84LL;
int64_t x15 = INT64_MIN;
volatile int32_t t4 = -15653248;
volatile int16_t x25 = -1;
volatile uint32_t x32 = 7960053U;
static int8_t x33 = INT8_MIN;
int16_t x37 = INT16_MAX;
static int16_t x40 = INT16_MIN;
uint16_t x45 = 21U;
int8_t x50 = INT8_MAX;
static volatile uint8_t x54 = 1U;
volatile int16_t x55 = -3380;
int64_t x58 = INT64_MAX;
int64_t x62 = -1LL;
volatile int32_t t15 = -774737520;
volatile uint8_t x71 = UINT8_MAX;
int16_t x72 = -1;
static int32_t x74 = -371;
static volatile int32_t x80 = INT32_MAX;
static volatile int8_t x84 = -2;
uint16_t x86 = UINT16_MAX;
static volatile int32_t t21 = -23149;
uint16_t x97 = UINT16_MAX;
static volatile uint16_t x117 = UINT16_MAX;
int8_t x121 = INT8_MAX;
static int32_t x125 = -1;
int16_t x126 = -1;
static uint32_t x128 = UINT32_MAX;
int8_t x129 = INT8_MAX;
int16_t x130 = -3714;
volatile int32_t x132 = INT32_MAX;
static int32_t x136 = -11060848;
int16_t x137 = 3;
int32_t t34 = -40943;
uint16_t x142 = UINT16_MAX;
int8_t x143 = -1;
int64_t x146 = 287686LL;
int16_t x147 = 0;
int8_t x150 = 0;
static uint16_t x154 = 41U;
volatile int64_t x155 = -685326624155472875LL;
static int32_t t38 = -1388;
static int32_t x157 = 26972700;
uint8_t x166 = UINT8_MAX;
volatile int64_t x169 = -1351265LL;
int64_t x170 = -278973157288373LL;
static int16_t x175 = INT16_MIN;
int64_t x176 = -1LL;
uint8_t x183 = UINT8_MAX;
volatile int32_t t45 = 457944;
volatile uint32_t x188 = 45U;
uint32_t x190 = 7600540U;
int32_t t47 = -11907;
int8_t x194 = INT8_MIN;
uint16_t x195 = UINT16_MAX;
uint32_t x201 = 333371U;
int32_t x202 = INT32_MAX;
int16_t x206 = INT16_MIN;
volatile int32_t t51 = 210352628;
int64_t x210 = INT64_MIN;
static int64_t x211 = 339975731LL;
int64_t x216 = INT64_MIN;
int32_t x224 = 272882;
volatile int32_t t55 = -12491;
int16_t x228 = -2;
uint8_t x230 = UINT8_MAX;
int64_t x232 = INT64_MIN;
volatile int32_t x237 = INT32_MIN;
volatile int64_t x239 = -14558LL;
int32_t t61 = -1;
int8_t x250 = INT8_MAX;
int16_t x254 = INT16_MIN;
volatile int32_t t63 = 6796;
static int32_t t64 = 484749;
uint8_t x262 = 31U;
int64_t x263 = -1LL;
int16_t x267 = INT16_MIN;
int16_t x268 = -1;
static int16_t x269 = INT16_MIN;
int8_t x270 = INT8_MIN;
static int64_t x274 = 1525200142008538775LL;
volatile int8_t x275 = -26;
int32_t x276 = 253;
int64_t x278 = -1LL;
uint8_t x293 = UINT8_MAX;
static int64_t x301 = INT64_MIN;
uint64_t x302 = UINT64_MAX;
int32_t x304 = 1;
volatile int16_t x310 = -2;
int32_t x312 = INT32_MAX;
int64_t x317 = INT64_MAX;
int64_t x325 = INT64_MIN;
static int16_t x327 = 151;
static volatile uint8_t x330 = UINT8_MAX;
int16_t x331 = -1;
uint32_t x332 = UINT32_MAX;
volatile int32_t t82 = -400850277;
static int32_t x333 = INT32_MAX;
uint64_t x334 = UINT64_MAX;
int8_t x336 = INT8_MAX;
uint32_t x344 = UINT32_MAX;
int16_t x346 = -2356;
int32_t t86 = 1718402;
int16_t x355 = INT16_MAX;
int16_t x358 = -1;
int16_t x362 = INT16_MIN;
uint64_t x371 = 3130011018LLU;
volatile uint8_t x375 = UINT8_MAX;
int32_t t94 = -1652;
int16_t x397 = INT16_MIN;
int64_t x407 = INT64_MIN;
volatile int32_t t101 = 110320712;
int64_t x410 = INT64_MAX;
int64_t x416 = INT64_MAX;
static volatile int32_t t103 = 196097086;
int64_t x421 = INT64_MAX;
int16_t x425 = INT16_MIN;
int32_t t106 = 621003;
volatile uint32_t x432 = 34516271U;
int32_t x436 = -23;
volatile int32_t t110 = -892;
int8_t x447 = INT8_MIN;
volatile uint8_t x449 = UINT8_MAX;
uint8_t x450 = 1U;
static uint8_t x451 = UINT8_MAX;
uint64_t x467 = 17309721525830365LLU;
int32_t t117 = -132;
volatile int8_t x473 = INT8_MIN;
int64_t x474 = -1LL;
volatile int32_t t118 = 117903;
uint64_t x480 = 13620577LLU;
int8_t x486 = INT8_MIN;
volatile uint16_t x491 = 0U;
static uint16_t x493 = 3087U;
int16_t x496 = INT16_MIN;
volatile int32_t x500 = -9155;
static uint64_t x504 = 10LLU;
int32_t x509 = 460407583;
volatile uint8_t x510 = 19U;
int16_t x515 = INT16_MIN;
int64_t x516 = INT64_MIN;
int32_t x518 = INT32_MIN;
static volatile int16_t x519 = 1;
int16_t x524 = -412;
int16_t x525 = INT16_MIN;
volatile uint32_t x529 = UINT32_MAX;
static int16_t x535 = INT16_MAX;
uint32_t x538 = 160195U;
int16_t x541 = INT16_MIN;
uint16_t x542 = UINT16_MAX;
uint16_t x548 = 1U;
volatile int32_t t137 = 48618010;
uint64_t x555 = UINT64_MAX;
static volatile int8_t x562 = -24;
static uint16_t x570 = 3431U;
volatile int16_t x576 = INT16_MIN;
int8_t x577 = -1;
int32_t x583 = -1;
volatile int32_t x585 = INT32_MAX;
uint16_t x587 = 3U;
uint16_t x590 = 16U;
int64_t x591 = INT64_MAX;
volatile int32_t t147 = -19741976;
static int8_t x593 = -1;
uint32_t x595 = 101090U;
int64_t x602 = INT64_MIN;
int64_t x606 = -1183874974351301245LL;
volatile int32_t t152 = 118685;
int8_t x616 = 7;
static uint64_t x617 = 25485453214LLU;
int32_t t154 = 317748560;
int64_t x622 = 34250450610461LL;
uint8_t x629 = UINT8_MAX;
int8_t x633 = -43;
int8_t x635 = -2;
volatile int32_t t159 = 0;
int32_t x646 = -1;
uint16_t x649 = 15U;
int8_t x653 = -1;
uint64_t x656 = UINT64_MAX;
int32_t x659 = -1;
volatile int32_t t165 = 26611;
static int16_t x665 = INT16_MIN;
int32_t x667 = -1;
uint8_t x671 = 3U;
uint8_t x672 = UINT8_MAX;
volatile int32_t t169 = -6386;
volatile int8_t x683 = -1;
volatile uint32_t x687 = 1264790036U;
int8_t x688 = -1;
static volatile uint8_t x692 = UINT8_MAX;
static int64_t x693 = INT64_MIN;
volatile uint64_t x702 = UINT64_MAX;
static volatile int16_t x706 = -1;
volatile uint32_t x710 = 12245U;
volatile uint16_t x717 = 6U;
int8_t x719 = -1;
uint16_t x721 = UINT16_MAX;
uint64_t x724 = UINT64_MAX;
int16_t x729 = INT16_MIN;
int32_t t183 = 1;
static int16_t x739 = INT16_MIN;
int32_t t184 = 1889;
volatile uint32_t x742 = UINT32_MAX;
uint8_t x753 = 3U;
static volatile int32_t t190 = 0;
static uint32_t x766 = UINT32_MAX;
int32_t x773 = INT32_MAX;
int16_t x774 = INT16_MIN;
static volatile uint8_t x780 = 1U;
uint32_t x782 = UINT32_MAX;
int16_t x791 = -1;
static int8_t x793 = 1;


void f0(void) {
    	static uint8_t x1 = UINT8_MAX;
	uint64_t x2 = UINT64_MAX;
	static uint64_t x3 = UINT64_MAX;

    t0 = ((x1<=(x2^x3))<=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 247699U;
	int8_t x6 = 21;
	uint16_t x7 = 185U;
	static int64_t x8 = -1LL;
	volatile int32_t t1 = 28697024;

    t1 = ((x5<=(x6^x7))<=x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int64_t x9 = INT64_MIN;
	static int32_t x10 = -1;
	int16_t x11 = INT16_MAX;
	volatile int32_t x12 = INT32_MAX;
	volatile int32_t t2 = 11721;

    t2 = ((x9<=(x10^x11))<=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x16 = INT16_MIN;
	int32_t t3 = -131512159;

    t3 = ((x13<=(x14^x15))<=x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = -1LL;
	int64_t x18 = INT64_MIN;
	int8_t x19 = INT8_MAX;
	volatile uint8_t x20 = UINT8_MAX;

    t4 = ((x17<=(x18^x19))<=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = UINT8_MAX;
	int64_t x22 = INT64_MIN;
	static uint16_t x23 = UINT16_MAX;
	volatile int64_t x24 = INT64_MIN;
	volatile int32_t t5 = 12;

    t5 = ((x21<=(x22^x23))<=x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x26 = INT16_MAX;
	int32_t x27 = 183521182;
	int32_t x28 = INT32_MIN;
	int32_t t6 = -29;

    t6 = ((x25<=(x26^x27))<=x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x29 = INT32_MAX;
	int32_t x30 = INT32_MIN;
	int8_t x31 = -5;
	static volatile int32_t t7 = 0;

    t7 = ((x29<=(x30^x31))<=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x34 = INT8_MAX;
	static volatile int32_t x35 = INT32_MIN;
	int64_t x36 = INT64_MIN;
	volatile int32_t t8 = -234807665;

    t8 = ((x33<=(x34^x35))<=x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x38 = INT8_MAX;
	static int16_t x39 = -1;
	static int32_t t9 = 102;

    t9 = ((x37<=(x38^x39))<=x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MIN;
	int32_t x42 = INT32_MIN;
	int16_t x43 = INT16_MIN;
	uint64_t x44 = 3353464816287LLU;
	volatile int32_t t10 = 15;

    t10 = ((x41<=(x42^x43))<=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x46 = -1LL;
	static int8_t x47 = INT8_MAX;
	int8_t x48 = -1;
	volatile int32_t t11 = 24386;

    t11 = ((x45<=(x46^x47))<=x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = INT32_MIN;
	volatile int16_t x51 = INT16_MIN;
	volatile int64_t x52 = INT64_MIN;
	static int32_t t12 = -237994;

    t12 = ((x49<=(x50^x51))<=x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = -1LL;
	volatile int16_t x56 = 708;
	volatile int32_t t13 = -27721;

    t13 = ((x53<=(x54^x55))<=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x57 = -1;
	int64_t x59 = -130210032255591LL;
	static volatile int64_t x60 = INT64_MIN;
	volatile int32_t t14 = 10525;

    t14 = ((x57<=(x58^x59))<=x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint16_t x61 = 2838U;
	int32_t x63 = INT32_MIN;
	static int16_t x64 = INT16_MIN;

    t15 = ((x61<=(x62^x63))<=x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x65 = INT32_MAX;
	int64_t x66 = -95LL;
	static uint8_t x67 = 82U;
	int32_t x68 = -161;
	int32_t t16 = 14259;

    t16 = ((x65<=(x66^x67))<=x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x69 = -4;
	uint16_t x70 = UINT16_MAX;
	int32_t t17 = 837;

    t17 = ((x69<=(x70^x71))<=x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = -1;
	int16_t x75 = -2;
	uint64_t x76 = 3LLU;
	int32_t t18 = -7;

    t18 = ((x73<=(x74^x75))<=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = -1;
	uint64_t x78 = 0LLU;
	uint8_t x79 = UINT8_MAX;
	volatile int32_t t19 = 0;

    t19 = ((x77<=(x78^x79))<=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x81 = INT64_MIN;
	uint8_t x82 = 4U;
	static int8_t x83 = INT8_MAX;
	static volatile int32_t t20 = 15640896;

    t20 = ((x81<=(x82^x83))<=x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint8_t x85 = 0U;
	uint32_t x87 = UINT32_MAX;
	static int32_t x88 = INT32_MIN;

    t21 = ((x85<=(x86^x87))<=x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = -1;
	volatile uint8_t x90 = UINT8_MAX;
	uint8_t x91 = 2U;
	int16_t x92 = INT16_MAX;
	volatile int32_t t22 = 18;

    t22 = ((x89<=(x90^x91))<=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x93 = -1;
	volatile int32_t x94 = INT32_MIN;
	volatile int8_t x95 = -28;
	int16_t x96 = 8112;
	int32_t t23 = -677159;

    t23 = ((x93<=(x94^x95))<=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x98 = UINT8_MAX;
	int32_t x99 = -1409035;
	volatile int8_t x100 = 14;
	int32_t t24 = -1818;

    t24 = ((x97<=(x98^x99))<=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x101 = -1;
	int8_t x102 = INT8_MAX;
	static uint64_t x103 = 5740757750LLU;
	volatile int64_t x104 = INT64_MIN;
	volatile int32_t t25 = -10895460;

    t25 = ((x101<=(x102^x103))<=x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint64_t x105 = 8283137153883570LLU;
	int32_t x106 = -1;
	uint32_t x107 = 2072665U;
	int16_t x108 = INT16_MAX;
	volatile int32_t t26 = -25564990;

    t26 = ((x105<=(x106^x107))<=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x109 = UINT64_MAX;
	volatile int64_t x110 = INT64_MIN;
	static uint16_t x111 = UINT16_MAX;
	static volatile int32_t x112 = 77;
	int32_t t27 = -1;

    t27 = ((x109<=(x110^x111))<=x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = -1;
	static int16_t x114 = -1;
	volatile int64_t x115 = INT64_MAX;
	static volatile int64_t x116 = 5LL;
	int32_t t28 = 31;

    t28 = ((x113<=(x114^x115))<=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x118 = 961;
	int8_t x119 = 20;
	int32_t x120 = 322;
	static volatile int32_t t29 = -1038843480;

    t29 = ((x117<=(x118^x119))<=x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x122 = INT16_MIN;
	int32_t x123 = INT32_MIN;
	uint8_t x124 = UINT8_MAX;
	int32_t t30 = 6651;

    t30 = ((x121<=(x122^x123))<=x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x127 = UINT32_MAX;
	static int32_t t31 = -363564;

    t31 = ((x125<=(x126^x127))<=x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x131 = UINT16_MAX;
	volatile int32_t t32 = 30075609;

    t32 = ((x129<=(x130^x131))<=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x133 = INT64_MAX;
	uint32_t x134 = UINT32_MAX;
	int8_t x135 = -1;
	int32_t t33 = 7;

    t33 = ((x133<=(x134^x135))<=x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x138 = -229526308LL;
	static int16_t x139 = INT16_MIN;
	volatile int32_t x140 = INT32_MAX;

    t34 = ((x137<=(x138^x139))<=x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x141 = INT32_MIN;
	static int8_t x144 = INT8_MAX;
	static int32_t t35 = -66383;

    t35 = ((x141<=(x142^x143))<=x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = INT64_MAX;
	uint8_t x148 = UINT8_MAX;
	int32_t t36 = -27868272;

    t36 = ((x145<=(x146^x147))<=x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x149 = INT32_MIN;
	int64_t x151 = -1LL;
	int32_t x152 = -1;
	int32_t t37 = 3;

    t37 = ((x149<=(x150^x151))<=x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x153 = -227LL;
	int64_t x156 = 87971524549LL;

    t38 = ((x153<=(x154^x155))<=x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x158 = INT16_MAX;
	int8_t x159 = -1;
	int64_t x160 = -67LL;
	static volatile int32_t t39 = -83975;

    t39 = ((x157<=(x158^x159))<=x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x161 = INT8_MIN;
	int16_t x162 = -124;
	volatile uint32_t x163 = UINT32_MAX;
	volatile int16_t x164 = INT16_MIN;
	volatile int32_t t40 = -76671208;

    t40 = ((x161<=(x162^x163))<=x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x165 = UINT32_MAX;
	int16_t x167 = INT16_MIN;
	volatile int8_t x168 = -43;
	int32_t t41 = 2826;

    t41 = ((x165<=(x166^x167))<=x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x171 = -7;
	int8_t x172 = 29;
	int32_t t42 = -259697455;

    t42 = ((x169<=(x170^x171))<=x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint64_t x173 = 619815806580279094LLU;
	uint64_t x174 = 59890760814LLU;
	int32_t t43 = 3419488;

    t43 = ((x173<=(x174^x175))<=x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x177 = INT16_MIN;
	volatile int8_t x178 = 0;
	uint64_t x179 = 2562313491586183063LLU;
	int32_t x180 = 1023955640;
	volatile int32_t t44 = 265;

    t44 = ((x177<=(x178^x179))<=x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x181 = INT8_MIN;
	int64_t x182 = -127630LL;
	volatile int8_t x184 = INT8_MIN;

    t45 = ((x181<=(x182^x183))<=x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = 0;
	volatile uint8_t x186 = UINT8_MAX;
	volatile int16_t x187 = 699;
	static int32_t t46 = -453340573;

    t46 = ((x185<=(x186^x187))<=x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = -1LL;
	int32_t x191 = INT32_MAX;
	int64_t x192 = 900949626055634LL;

    t47 = ((x189<=(x190^x191))<=x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x193 = -395406LL;
	static uint16_t x196 = 296U;
	volatile int32_t t48 = -15645;

    t48 = ((x193<=(x194^x195))<=x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x197 = 482492;
	int64_t x198 = 2039642264LL;
	int8_t x199 = INT8_MIN;
	volatile int64_t x200 = 4706LL;
	volatile int32_t t49 = -26881493;

    t49 = ((x197<=(x198^x199))<=x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x203 = -1;
	volatile uint32_t x204 = UINT32_MAX;
	volatile int32_t t50 = 3;

    t50 = ((x201<=(x202^x203))<=x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x205 = UINT8_MAX;
	static int16_t x207 = -1;
	static volatile int8_t x208 = INT8_MAX;

    t51 = ((x205<=(x206^x207))<=x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint32_t x209 = 57173U;
	int64_t x212 = 525437852674929597LL;
	volatile int32_t t52 = -1;

    t52 = ((x209<=(x210^x211))<=x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = -5;
	int16_t x214 = INT16_MIN;
	int8_t x215 = 1;
	static volatile int32_t t53 = 384362;

    t53 = ((x213<=(x214^x215))<=x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x217 = INT32_MAX;
	int8_t x218 = INT8_MAX;
	volatile int64_t x219 = INT64_MIN;
	static volatile int16_t x220 = INT16_MIN;
	int32_t t54 = 20788236;

    t54 = ((x217<=(x218^x219))<=x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = 279601228;
	uint16_t x222 = UINT16_MAX;
	uint8_t x223 = 0U;

    t55 = ((x221<=(x222^x223))<=x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = INT64_MIN;
	volatile int32_t x226 = -7639236;
	int64_t x227 = INT64_MIN;
	volatile int32_t t56 = -90611030;

    t56 = ((x225<=(x226^x227))<=x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint16_t x229 = 2U;
	static volatile int8_t x231 = INT8_MIN;
	int32_t t57 = 5961;

    t57 = ((x229<=(x230^x231))<=x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x233 = 5654757706LLU;
	static uint32_t x234 = 2U;
	static volatile int8_t x235 = INT8_MIN;
	volatile int32_t x236 = INT32_MIN;
	int32_t t58 = 81866596;

    t58 = ((x233<=(x234^x235))<=x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x238 = INT32_MIN;
	int8_t x240 = -1;
	int32_t t59 = -1;

    t59 = ((x237<=(x238^x239))<=x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x241 = UINT8_MAX;
	static volatile int8_t x242 = 0;
	uint32_t x243 = 8U;
	uint32_t x244 = 517030542U;
	volatile int32_t t60 = 4016298;

    t60 = ((x241<=(x242^x243))<=x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x245 = 65240400;
	int16_t x246 = INT16_MIN;
	int16_t x247 = INT16_MIN;
	static uint8_t x248 = 52U;

    t61 = ((x245<=(x246^x247))<=x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x249 = 329U;
	int16_t x251 = INT16_MIN;
	int16_t x252 = 1;
	volatile int32_t t62 = 732643;

    t62 = ((x249<=(x250^x251))<=x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int16_t x253 = INT16_MIN;
	uint16_t x255 = UINT16_MAX;
	static uint32_t x256 = 55U;

    t63 = ((x253<=(x254^x255))<=x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x257 = 341026LLU;
	uint8_t x258 = 1U;
	volatile int8_t x259 = INT8_MIN;
	static uint8_t x260 = UINT8_MAX;

    t64 = ((x257<=(x258^x259))<=x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = -1;
	int8_t x264 = -1;
	volatile int32_t t65 = 433187643;

    t65 = ((x261<=(x262^x263))<=x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = INT8_MIN;
	int32_t x266 = -1;
	volatile int32_t t66 = -122;

    t66 = ((x265<=(x266^x267))<=x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x271 = 4064447;
	int16_t x272 = -1;
	int32_t t67 = 254121;

    t67 = ((x269<=(x270^x271))<=x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x273 = -1LL;
	int32_t t68 = -78145;

    t68 = ((x273<=(x274^x275))<=x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = INT64_MIN;
	uint64_t x279 = 145157133312813993LLU;
	int32_t x280 = INT32_MIN;
	int32_t t69 = -2856;

    t69 = ((x277<=(x278^x279))<=x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x281 = -28;
	static int16_t x282 = 11;
	uint64_t x283 = UINT64_MAX;
	static int16_t x284 = INT16_MIN;
	volatile int32_t t70 = 113192079;

    t70 = ((x281<=(x282^x283))<=x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x285 = -1;
	volatile int32_t x286 = -1;
	int64_t x287 = -1LL;
	int64_t x288 = INT64_MIN;
	volatile int32_t t71 = 599613;

    t71 = ((x285<=(x286^x287))<=x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint32_t x289 = 10U;
	static int64_t x290 = INT64_MAX;
	int8_t x291 = -1;
	static volatile uint8_t x292 = 12U;
	static volatile int32_t t72 = 1897792;

    t72 = ((x289<=(x290^x291))<=x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x294 = INT64_MIN;
	int16_t x295 = INT16_MIN;
	volatile int32_t x296 = INT32_MIN;
	int32_t t73 = 8191;

    t73 = ((x293<=(x294^x295))<=x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = INT64_MIN;
	volatile uint64_t x298 = UINT64_MAX;
	volatile int16_t x299 = 171;
	int16_t x300 = 3;
	int32_t t74 = 3047;

    t74 = ((x297<=(x298^x299))<=x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x303 = INT32_MIN;
	volatile int32_t t75 = 155;

    t75 = ((x301<=(x302^x303))<=x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = -17;
	int32_t x306 = INT32_MIN;
	uint8_t x307 = UINT8_MAX;
	uint64_t x308 = UINT64_MAX;
	int32_t t76 = -5305227;

    t76 = ((x305<=(x306^x307))<=x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x309 = -1;
	static int16_t x311 = -1;
	volatile int32_t t77 = 7002;

    t77 = ((x309<=(x310^x311))<=x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x313 = INT16_MAX;
	int64_t x314 = INT64_MIN;
	int32_t x315 = INT32_MAX;
	volatile uint8_t x316 = 18U;
	volatile int32_t t78 = -4;

    t78 = ((x313<=(x314^x315))<=x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x318 = INT32_MIN;
	int16_t x319 = INT16_MAX;
	int32_t x320 = INT32_MAX;
	static volatile int32_t t79 = 0;

    t79 = ((x317<=(x318^x319))<=x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint64_t x321 = 28817014LLU;
	int8_t x322 = 0;
	static uint8_t x323 = UINT8_MAX;
	int32_t x324 = INT32_MIN;
	int32_t t80 = 4;

    t80 = ((x321<=(x322^x323))<=x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x326 = 5084847886501770113LLU;
	int64_t x328 = -1LL;
	int32_t t81 = -1;

    t81 = ((x325<=(x326^x327))<=x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = INT64_MIN;

    t82 = ((x329<=(x330^x331))<=x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile uint8_t x335 = 1U;
	int32_t t83 = 98838;

    t83 = ((x333<=(x334^x335))<=x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x337 = -1;
	int32_t x338 = INT32_MAX;
	volatile uint64_t x339 = UINT64_MAX;
	volatile uint16_t x340 = UINT16_MAX;
	static int32_t t84 = 224095;

    t84 = ((x337<=(x338^x339))<=x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x341 = UINT16_MAX;
	int8_t x342 = 31;
	volatile int8_t x343 = 0;
	static int32_t t85 = 2025091;

    t85 = ((x341<=(x342^x343))<=x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x345 = -51526906964536LL;
	int64_t x347 = 450962273LL;
	volatile uint8_t x348 = UINT8_MAX;

    t86 = ((x345<=(x346^x347))<=x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x349 = UINT32_MAX;
	int16_t x350 = 1;
	static uint32_t x351 = 424U;
	static volatile int16_t x352 = INT16_MIN;
	int32_t t87 = 1;

    t87 = ((x349<=(x350^x351))<=x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x353 = INT8_MIN;
	uint8_t x354 = UINT8_MAX;
	static int16_t x356 = -1;
	volatile int32_t t88 = -229;

    t88 = ((x353<=(x354^x355))<=x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = INT8_MAX;
	int32_t x359 = 7;
	int16_t x360 = INT16_MIN;
	volatile int32_t t89 = 472006;

    t89 = ((x357<=(x358^x359))<=x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint16_t x361 = 5152U;
	int8_t x363 = 4;
	int16_t x364 = INT16_MAX;
	volatile int32_t t90 = 48919545;

    t90 = ((x361<=(x362^x363))<=x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = INT64_MAX;
	uint64_t x366 = 221108177667316194LLU;
	int16_t x367 = INT16_MIN;
	static int32_t x368 = INT32_MAX;
	volatile int32_t t91 = 65;

    t91 = ((x365<=(x366^x367))<=x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = INT32_MIN;
	int64_t x370 = INT64_MIN;
	int8_t x372 = -1;
	static int32_t t92 = -18793442;

    t92 = ((x369<=(x370^x371))<=x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x373 = INT16_MIN;
	uint16_t x374 = UINT16_MAX;
	volatile uint16_t x376 = 5U;
	volatile int32_t t93 = -761352;

    t93 = ((x373<=(x374^x375))<=x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x377 = 53256393U;
	int32_t x378 = -1;
	volatile int8_t x379 = INT8_MAX;
	int64_t x380 = INT64_MIN;

    t94 = ((x377<=(x378^x379))<=x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x381 = 13379873293616LLU;
	static int16_t x382 = INT16_MIN;
	volatile uint16_t x383 = UINT16_MAX;
	static int16_t x384 = INT16_MAX;
	int32_t t95 = 18;

    t95 = ((x381<=(x382^x383))<=x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint16_t x385 = 1U;
	int32_t x386 = 13029;
	static volatile int32_t x387 = INT32_MIN;
	static volatile int8_t x388 = -1;
	int32_t t96 = 10;

    t96 = ((x385<=(x386^x387))<=x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x389 = UINT8_MAX;
	int32_t x390 = INT32_MIN;
	int32_t x391 = INT32_MAX;
	int16_t x392 = 302;
	volatile int32_t t97 = -7309;

    t97 = ((x389<=(x390^x391))<=x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x393 = INT64_MIN;
	uint64_t x394 = 252048498LLU;
	int64_t x395 = INT64_MIN;
	uint32_t x396 = UINT32_MAX;
	volatile int32_t t98 = -58281;

    t98 = ((x393<=(x394^x395))<=x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x398 = -1;
	static int64_t x399 = 2133106736751352205LL;
	volatile uint16_t x400 = UINT16_MAX;
	volatile int32_t t99 = -782;

    t99 = ((x397<=(x398^x399))<=x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x401 = 111U;
	volatile int32_t x402 = 40135;
	int16_t x403 = INT16_MIN;
	volatile int32_t x404 = INT32_MIN;
	volatile int32_t t100 = 25240;

    t100 = ((x401<=(x402^x403))<=x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x405 = 12U;
	uint32_t x406 = 15U;
	static int16_t x408 = -1;

    t101 = ((x405<=(x406^x407))<=x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x409 = INT8_MAX;
	static int16_t x411 = -996;
	int64_t x412 = INT64_MAX;
	int32_t t102 = -1214918;

    t102 = ((x409<=(x410^x411))<=x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x413 = 954482720589593LLU;
	static int16_t x414 = -1;
	uint64_t x415 = 6347685151616959LLU;

    t103 = ((x413<=(x414^x415))<=x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint16_t x417 = 28186U;
	volatile int32_t x418 = INT32_MIN;
	uint8_t x419 = 11U;
	static int8_t x420 = -3;
	volatile int32_t t104 = -280;

    t104 = ((x417<=(x418^x419))<=x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint16_t x422 = 2U;
	int64_t x423 = INT64_MIN;
	volatile uint8_t x424 = 3U;
	int32_t t105 = 1542582;

    t105 = ((x421<=(x422^x423))<=x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x426 = -13;
	uint16_t x427 = UINT16_MAX;
	volatile uint32_t x428 = UINT32_MAX;

    t106 = ((x425<=(x426^x427))<=x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x429 = 1167LLU;
	int64_t x430 = INT64_MIN;
	uint8_t x431 = UINT8_MAX;
	int32_t t107 = 16448622;

    t107 = ((x429<=(x430^x431))<=x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x433 = -20;
	volatile int64_t x434 = 279LL;
	int32_t x435 = INT32_MAX;
	volatile int32_t t108 = 711246898;

    t108 = ((x433<=(x434^x435))<=x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x437 = INT16_MIN;
	uint16_t x438 = UINT16_MAX;
	uint16_t x439 = 1480U;
	uint8_t x440 = 3U;
	volatile int32_t t109 = 5;

    t109 = ((x437<=(x438^x439))<=x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x441 = INT32_MIN;
	uint32_t x442 = 7470U;
	uint32_t x443 = UINT32_MAX;
	uint16_t x444 = 0U;

    t110 = ((x441<=(x442^x443))<=x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = INT32_MIN;
	uint64_t x446 = 25062786741910439LLU;
	int8_t x448 = INT8_MIN;
	static volatile int32_t t111 = -177447624;

    t111 = ((x445<=(x446^x447))<=x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x452 = INT32_MIN;
	volatile int32_t t112 = 7;

    t112 = ((x449<=(x450^x451))<=x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x453 = INT16_MIN;
	uint8_t x454 = 3U;
	volatile int8_t x455 = -3;
	int64_t x456 = INT64_MIN;
	static int32_t t113 = 1258601;

    t113 = ((x453<=(x454^x455))<=x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint16_t x457 = 4U;
	static uint64_t x458 = 68568163329302170LLU;
	int64_t x459 = -1LL;
	volatile uint64_t x460 = UINT64_MAX;
	volatile int32_t t114 = -8728016;

    t114 = ((x457<=(x458^x459))<=x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x461 = 40U;
	int16_t x462 = 0;
	int16_t x463 = 33;
	int64_t x464 = -4LL;
	int32_t t115 = 366;

    t115 = ((x461<=(x462^x463))<=x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x465 = -136299;
	static volatile int8_t x466 = -9;
	uint16_t x468 = 26463U;
	static volatile int32_t t116 = -832143;

    t116 = ((x465<=(x466^x467))<=x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x469 = INT64_MAX;
	uint8_t x470 = UINT8_MAX;
	int16_t x471 = -1;
	volatile int8_t x472 = 29;

    t117 = ((x469<=(x470^x471))<=x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x475 = INT16_MIN;
	int8_t x476 = INT8_MAX;

    t118 = ((x473<=(x474^x475))<=x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x477 = 8611143927693LLU;
	volatile int8_t x478 = -1;
	int32_t x479 = INT32_MIN;
	int32_t t119 = -7106040;

    t119 = ((x477<=(x478^x479))<=x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x481 = INT32_MAX;
	int8_t x482 = INT8_MAX;
	int32_t x483 = INT32_MIN;
	int64_t x484 = -8022015LL;
	int32_t t120 = -1778915;

    t120 = ((x481<=(x482^x483))<=x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint64_t x485 = 1LLU;
	volatile int16_t x487 = INT16_MAX;
	int32_t x488 = INT32_MAX;
	static int32_t t121 = 40;

    t121 = ((x485<=(x486^x487))<=x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int32_t x489 = INT32_MAX;
	int8_t x490 = INT8_MIN;
	static volatile uint64_t x492 = 8334442LLU;
	int32_t t122 = 6;

    t122 = ((x489<=(x490^x491))<=x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x494 = INT16_MIN;
	int32_t x495 = 9;
	int32_t t123 = -422;

    t123 = ((x493<=(x494^x495))<=x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x497 = INT32_MIN;
	int64_t x498 = INT64_MIN;
	uint8_t x499 = 1U;
	int32_t t124 = 1;

    t124 = ((x497<=(x498^x499))<=x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x501 = INT16_MIN;
	int32_t x502 = INT32_MAX;
	int64_t x503 = INT64_MAX;
	int32_t t125 = -81936;

    t125 = ((x501<=(x502^x503))<=x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x505 = INT32_MAX;
	volatile uint16_t x506 = 384U;
	int16_t x507 = -1;
	uint32_t x508 = UINT32_MAX;
	volatile int32_t t126 = 1;

    t126 = ((x505<=(x506^x507))<=x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int8_t x511 = -1;
	int32_t x512 = -1;
	volatile int32_t t127 = -206;

    t127 = ((x509<=(x510^x511))<=x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = INT8_MIN;
	static int32_t x514 = INT32_MIN;
	int32_t t128 = 509936956;

    t128 = ((x513<=(x514^x515))<=x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x517 = INT64_MIN;
	uint8_t x520 = UINT8_MAX;
	volatile int32_t t129 = 743250;

    t129 = ((x517<=(x518^x519))<=x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x521 = INT32_MIN;
	static uint8_t x522 = UINT8_MAX;
	int8_t x523 = INT8_MAX;
	int32_t t130 = 6;

    t130 = ((x521<=(x522^x523))<=x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x526 = 3137813952072171871LLU;
	int32_t x527 = INT32_MIN;
	int8_t x528 = INT8_MIN;
	int32_t t131 = 3612900;

    t131 = ((x525<=(x526^x527))<=x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x530 = INT64_MIN;
	volatile int8_t x531 = INT8_MIN;
	static volatile int8_t x532 = -1;
	int32_t t132 = -921;

    t132 = ((x529<=(x530^x531))<=x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile uint32_t x533 = 2847363U;
	uint16_t x534 = 34U;
	int16_t x536 = 6;
	volatile int32_t t133 = 163562070;

    t133 = ((x533<=(x534^x535))<=x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x537 = -1;
	uint64_t x539 = 38LLU;
	int8_t x540 = INT8_MAX;
	volatile int32_t t134 = -36110340;

    t134 = ((x537<=(x538^x539))<=x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x543 = 3;
	static int64_t x544 = INT64_MAX;
	int32_t t135 = -30081;

    t135 = ((x541<=(x542^x543))<=x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = -1;
	int32_t x546 = INT32_MIN;
	int64_t x547 = INT64_MIN;
	int32_t t136 = -25969569;

    t136 = ((x545<=(x546^x547))<=x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x549 = 3;
	uint8_t x550 = 6U;
	uint64_t x551 = UINT64_MAX;
	uint8_t x552 = 2U;

    t137 = ((x549<=(x550^x551))<=x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = INT32_MAX;
	int16_t x554 = INT16_MIN;
	uint16_t x556 = UINT16_MAX;
	static int32_t t138 = -839;

    t138 = ((x553<=(x554^x555))<=x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x557 = INT64_MIN;
	static int8_t x558 = INT8_MIN;
	static int16_t x559 = INT16_MIN;
	int16_t x560 = INT16_MAX;
	static volatile int32_t t139 = -1;

    t139 = ((x557<=(x558^x559))<=x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x561 = INT32_MIN;
	int16_t x563 = -1;
	volatile uint64_t x564 = UINT64_MAX;
	volatile int32_t t140 = -1246;

    t140 = ((x561<=(x562^x563))<=x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x565 = UINT8_MAX;
	uint64_t x566 = 65LLU;
	uint32_t x567 = 1368462U;
	int64_t x568 = INT64_MIN;
	volatile int32_t t141 = 663126;

    t141 = ((x565<=(x566^x567))<=x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x569 = 1629813593281LLU;
	volatile uint16_t x571 = 1U;
	volatile int16_t x572 = -1;
	volatile int32_t t142 = -1;

    t142 = ((x569<=(x570^x571))<=x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint64_t x573 = UINT64_MAX;
	static volatile int32_t x574 = INT32_MIN;
	volatile int16_t x575 = INT16_MAX;
	volatile int32_t t143 = -240532963;

    t143 = ((x573<=(x574^x575))<=x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x578 = UINT64_MAX;
	uint64_t x579 = 11425182048277LLU;
	int16_t x580 = INT16_MIN;
	int32_t t144 = 8325001;

    t144 = ((x577<=(x578^x579))<=x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint16_t x581 = 3U;
	int64_t x582 = INT64_MAX;
	volatile int8_t x584 = -1;
	int32_t t145 = -4944;

    t145 = ((x581<=(x582^x583))<=x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint8_t x586 = UINT8_MAX;
	volatile int16_t x588 = INT16_MIN;
	int32_t t146 = -3;

    t146 = ((x585<=(x586^x587))<=x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint32_t x589 = 63048119U;
	int8_t x592 = -1;

    t147 = ((x589<=(x590^x591))<=x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x594 = INT64_MIN;
	volatile int32_t x596 = -176525;
	static int32_t t148 = -65238;

    t148 = ((x593<=(x594^x595))<=x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x597 = 5U;
	volatile int32_t x598 = INT32_MIN;
	static int64_t x599 = -1LL;
	int64_t x600 = 27LL;
	volatile int32_t t149 = -260771;

    t149 = ((x597<=(x598^x599))<=x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x601 = -4712LL;
	volatile int16_t x603 = -1;
	int16_t x604 = -1;
	volatile int32_t t150 = 1054107;

    t150 = ((x601<=(x602^x603))<=x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = INT8_MAX;
	int8_t x607 = INT8_MIN;
	uint8_t x608 = UINT8_MAX;
	volatile int32_t t151 = 45676;

    t151 = ((x605<=(x606^x607))<=x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile uint8_t x609 = 0U;
	int16_t x610 = -11;
	int32_t x611 = -573129;
	volatile int16_t x612 = INT16_MAX;

    t152 = ((x609<=(x610^x611))<=x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = INT32_MAX;
	volatile int32_t x614 = -949;
	static uint32_t x615 = 10U;
	int32_t t153 = -1538;

    t153 = ((x613<=(x614^x615))<=x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x618 = -1;
	int64_t x619 = -1LL;
	static int32_t x620 = INT32_MIN;

    t154 = ((x617<=(x618^x619))<=x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x621 = INT8_MAX;
	int64_t x623 = -1LL;
	static volatile int64_t x624 = INT64_MIN;
	int32_t t155 = 14;

    t155 = ((x621<=(x622^x623))<=x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x625 = INT8_MIN;
	int8_t x626 = 12;
	int64_t x627 = 1829092495046695LL;
	static int16_t x628 = 12423;
	int32_t t156 = -35;

    t156 = ((x625<=(x626^x627))<=x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x630 = UINT8_MAX;
	volatile uint32_t x631 = 266343762U;
	uint64_t x632 = UINT64_MAX;
	static int32_t t157 = -144922833;

    t157 = ((x629<=(x630^x631))<=x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x634 = INT32_MAX;
	uint64_t x636 = 165109LLU;
	static volatile int32_t t158 = -1;

    t158 = ((x633<=(x634^x635))<=x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x637 = 11U;
	static int16_t x638 = INT16_MAX;
	volatile int32_t x639 = INT32_MIN;
	volatile int64_t x640 = INT64_MIN;

    t159 = ((x637<=(x638^x639))<=x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x641 = -1;
	volatile int8_t x642 = -1;
	int32_t x643 = INT32_MIN;
	volatile int32_t x644 = -13;
	volatile int32_t t160 = -69251277;

    t160 = ((x641<=(x642^x643))<=x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x645 = INT16_MIN;
	static volatile int16_t x647 = INT16_MIN;
	int64_t x648 = -1LL;
	static volatile int32_t t161 = -1;

    t161 = ((x645<=(x646^x647))<=x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint8_t x650 = 21U;
	static int64_t x651 = INT64_MAX;
	static int32_t x652 = -282717173;
	static volatile int32_t t162 = -11413566;

    t162 = ((x649<=(x650^x651))<=x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x654 = -46;
	int16_t x655 = INT16_MIN;
	int32_t t163 = 97;

    t163 = ((x653<=(x654^x655))<=x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = INT8_MIN;
	volatile int8_t x658 = -1;
	static volatile int8_t x660 = INT8_MIN;
	volatile int32_t t164 = 225;

    t164 = ((x657<=(x658^x659))<=x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = -6315951150LL;
	int16_t x662 = INT16_MIN;
	static uint64_t x663 = 3101672514380LLU;
	static int32_t x664 = INT32_MIN;

    t165 = ((x661<=(x662^x663))<=x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x666 = INT8_MAX;
	uint64_t x668 = 302587116LLU;
	static volatile int32_t t166 = 933809016;

    t166 = ((x665<=(x666^x667))<=x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x669 = INT8_MIN;
	int16_t x670 = INT16_MAX;
	volatile int32_t t167 = 1;

    t167 = ((x669<=(x670^x671))<=x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x673 = INT64_MIN;
	uint16_t x674 = 1U;
	int16_t x675 = 12706;
	static int8_t x676 = INT8_MIN;
	volatile int32_t t168 = -1;

    t168 = ((x673<=(x674^x675))<=x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x677 = INT16_MIN;
	uint64_t x678 = 1564907663269593892LLU;
	int32_t x679 = INT32_MIN;
	int32_t x680 = 94;

    t169 = ((x677<=(x678^x679))<=x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x681 = 2U;
	uint16_t x682 = 3048U;
	static int64_t x684 = INT64_MAX;
	static int32_t t170 = 1525512;

    t170 = ((x681<=(x682^x683))<=x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x685 = INT8_MIN;
	int64_t x686 = -1LL;
	int32_t t171 = 1236;

    t171 = ((x685<=(x686^x687))<=x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint8_t x689 = UINT8_MAX;
	int16_t x690 = -5429;
	volatile uint16_t x691 = 2439U;
	int32_t t172 = 35;

    t172 = ((x689<=(x690^x691))<=x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int16_t x694 = -112;
	int32_t x695 = INT32_MIN;
	int16_t x696 = INT16_MIN;
	int32_t t173 = -2174;

    t173 = ((x693<=(x694^x695))<=x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x697 = 43U;
	int8_t x698 = INT8_MIN;
	static int8_t x699 = INT8_MIN;
	static int16_t x700 = INT16_MIN;
	int32_t t174 = 16160963;

    t174 = ((x697<=(x698^x699))<=x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x701 = -113;
	int16_t x703 = INT16_MAX;
	static volatile int64_t x704 = INT64_MAX;
	int32_t t175 = -150086;

    t175 = ((x701<=(x702^x703))<=x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x705 = 6053U;
	static uint32_t x707 = UINT32_MAX;
	int16_t x708 = 4990;
	volatile int32_t t176 = 410719;

    t176 = ((x705<=(x706^x707))<=x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = INT16_MIN;
	uint8_t x711 = 5U;
	int16_t x712 = INT16_MIN;
	int32_t t177 = -308388;

    t177 = ((x709<=(x710^x711))<=x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x713 = INT16_MAX;
	static int16_t x714 = -1;
	volatile int32_t x715 = -590;
	int32_t x716 = INT32_MIN;
	int32_t t178 = 532336;

    t178 = ((x713<=(x714^x715))<=x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x718 = 1742695489664614LL;
	int64_t x720 = INT64_MAX;
	volatile int32_t t179 = 2348;

    t179 = ((x717<=(x718^x719))<=x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x722 = INT32_MAX;
	int32_t x723 = INT32_MIN;
	int32_t t180 = 1753;

    t180 = ((x721<=(x722^x723))<=x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x725 = INT32_MAX;
	uint16_t x726 = UINT16_MAX;
	uint8_t x727 = UINT8_MAX;
	uint16_t x728 = UINT16_MAX;
	volatile int32_t t181 = -4;

    t181 = ((x725<=(x726^x727))<=x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x730 = -1;
	int64_t x731 = -46558LL;
	static int16_t x732 = INT16_MIN;
	int32_t t182 = -7;

    t182 = ((x729<=(x730^x731))<=x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x733 = INT16_MAX;
	int64_t x734 = -1LL;
	static uint64_t x735 = 10534131LLU;
	int64_t x736 = INT64_MIN;

    t183 = ((x733<=(x734^x735))<=x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x737 = INT64_MAX;
	uint32_t x738 = UINT32_MAX;
	int32_t x740 = INT32_MIN;

    t184 = ((x737<=(x738^x739))<=x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x741 = INT64_MIN;
	static int8_t x743 = 2;
	int16_t x744 = -119;
	static volatile int32_t t185 = 3065;

    t185 = ((x741<=(x742^x743))<=x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x745 = -1;
	static uint32_t x746 = UINT32_MAX;
	int32_t x747 = INT32_MIN;
	static int16_t x748 = INT16_MIN;
	static volatile int32_t t186 = 2029;

    t186 = ((x745<=(x746^x747))<=x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint32_t x749 = 2228U;
	volatile uint16_t x750 = 2U;
	int64_t x751 = INT64_MIN;
	volatile uint8_t x752 = UINT8_MAX;
	volatile int32_t t187 = 0;

    t187 = ((x749<=(x750^x751))<=x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x754 = -1;
	static int64_t x755 = INT64_MIN;
	volatile int32_t x756 = INT32_MIN;
	int32_t t188 = -14573369;

    t188 = ((x753<=(x754^x755))<=x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x757 = 3U;
	int16_t x758 = INT16_MIN;
	int64_t x759 = -94LL;
	uint64_t x760 = 3LLU;
	int32_t t189 = 906254;

    t189 = ((x757<=(x758^x759))<=x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x761 = -4347LL;
	static int64_t x762 = -1LL;
	int8_t x763 = -1;
	int16_t x764 = 0;

    t190 = ((x761<=(x762^x763))<=x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x765 = 2U;
	int32_t x767 = -26496;
	static int32_t x768 = -1;
	static int32_t t191 = 54;

    t191 = ((x765<=(x766^x767))<=x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x769 = INT64_MAX;
	static int32_t x770 = INT32_MAX;
	volatile int64_t x771 = -1LL;
	static int64_t x772 = -1111943863LL;
	static volatile int32_t t192 = 3840;

    t192 = ((x769<=(x770^x771))<=x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x775 = -1LL;
	volatile uint32_t x776 = UINT32_MAX;
	volatile int32_t t193 = 94046;

    t193 = ((x773<=(x774^x775))<=x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x777 = UINT8_MAX;
	int32_t x778 = -1;
	static int8_t x779 = -1;
	int32_t t194 = 2;

    t194 = ((x777<=(x778^x779))<=x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x781 = -1LL;
	static int64_t x783 = INT64_MIN;
	uint16_t x784 = 19U;
	int32_t t195 = 5;

    t195 = ((x781<=(x782^x783))<=x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x785 = 81U;
	int64_t x786 = 13971418645269333LL;
	int16_t x787 = 568;
	static int8_t x788 = -10;
	volatile int32_t t196 = 798884;

    t196 = ((x785<=(x786^x787))<=x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x789 = 525124440LL;
	uint16_t x790 = 185U;
	static uint64_t x792 = UINT64_MAX;
	int32_t t197 = 1140;

    t197 = ((x789<=(x790^x791))<=x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x794 = -14;
	int64_t x795 = -1LL;
	static uint8_t x796 = 0U;
	int32_t t198 = -2;

    t198 = ((x793<=(x794^x795))<=x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x797 = 250524U;
	uint8_t x798 = UINT8_MAX;
	static int16_t x799 = INT16_MAX;
	static volatile uint16_t x800 = UINT16_MAX;
	volatile int32_t t199 = -4395613;

    t199 = ((x797<=(x798^x799))<=x800);

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

