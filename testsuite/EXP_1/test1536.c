
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

uint8_t x4 = 0U;
int32_t t2 = 55;
static int32_t x17 = -1;
static volatile uint8_t x25 = UINT8_MAX;
int8_t x31 = 5;
int32_t x34 = INT32_MAX;
uint16_t x37 = 0U;
volatile int16_t x38 = -1;
uint8_t x41 = 26U;
static int64_t x45 = INT64_MAX;
uint64_t x47 = 0LLU;
volatile int64_t x58 = INT64_MIN;
static int16_t x60 = -28;
static uint32_t x61 = 64482U;
uint64_t x62 = 235LLU;
volatile int32_t x63 = INT32_MIN;
uint8_t x68 = UINT8_MAX;
uint64_t x73 = 27106967LLU;
int64_t x80 = INT64_MAX;
int32_t t19 = -97;
volatile uint32_t x81 = 405592331U;
static int16_t x83 = 0;
static volatile int32_t t21 = -176021357;
int64_t x90 = 66747899805LL;
static int32_t x91 = INT32_MIN;
uint16_t x103 = 63U;
int32_t x108 = 635227652;
uint8_t x111 = 49U;
int64_t x115 = INT64_MAX;
uint8_t x118 = UINT8_MAX;
static volatile int32_t x123 = 1;
int8_t x126 = -20;
int8_t x130 = -29;
static uint32_t x132 = 31374U;
volatile int32_t t32 = 563;
int8_t x140 = INT8_MAX;
uint8_t x143 = 3U;
volatile int16_t x144 = INT16_MIN;
int32_t x145 = -6576;
static volatile int8_t x148 = -1;
static volatile int32_t t37 = 13753842;
uint8_t x156 = UINT8_MAX;
static int32_t x157 = INT32_MAX;
int32_t t39 = -1935764;
int16_t x161 = INT16_MAX;
int32_t x169 = -1;
uint64_t x171 = 558LLU;
int8_t x172 = INT8_MAX;
static int32_t x179 = INT32_MIN;
int64_t x183 = INT64_MAX;
uint8_t x185 = 6U;
int64_t x186 = -1LL;
int32_t t46 = -5378;
static int8_t x190 = INT8_MIN;
volatile int8_t x191 = -1;
int32_t x195 = INT32_MAX;
static int32_t t48 = 127058;
int8_t x197 = -1;
uint64_t x200 = 2609LLU;
int8_t x204 = INT8_MIN;
int8_t x206 = -1;
int8_t x207 = INT8_MIN;
int16_t x216 = -1;
int16_t x219 = INT16_MIN;
static volatile int32_t t54 = -6572573;
static int8_t x226 = INT8_MIN;
uint32_t x227 = UINT32_MAX;
uint64_t x231 = UINT64_MAX;
uint64_t x235 = UINT64_MAX;
uint64_t x242 = 295LLU;
int8_t x253 = INT8_MIN;
static uint64_t x255 = 166LLU;
int8_t x258 = 8;
int8_t x263 = INT8_MIN;
int8_t x264 = INT8_MAX;
static volatile int32_t t65 = 15687;
static int16_t x279 = INT16_MIN;
int8_t x284 = INT8_MIN;
uint64_t x290 = 4380415243369809954LLU;
uint8_t x303 = 11U;
int32_t t75 = 7;
int32_t x310 = INT32_MIN;
static int32_t x319 = INT32_MAX;
uint64_t x320 = 909640LLU;
static int32_t t79 = 743653;
uint32_t x326 = 59U;
static uint8_t x334 = 39U;
volatile int32_t t85 = -798783;
int16_t x348 = 3;
int64_t x354 = 5LL;
uint16_t x359 = UINT16_MAX;
int16_t x365 = INT16_MIN;
int8_t x369 = INT8_MIN;
int32_t t92 = -1;
int32_t x375 = INT32_MIN;
int16_t x377 = INT16_MIN;
volatile int64_t x379 = 93114143437305LL;
int64_t x380 = -1LL;
int32_t t94 = 500;
volatile int32_t t95 = -89172;
int32_t t97 = 98;
static uint16_t x393 = 3U;
int32_t t98 = -13303;
int8_t x408 = 4;
int32_t t101 = -33255322;
int8_t x412 = -1;
uint64_t x413 = UINT64_MAX;
int8_t x416 = -15;
volatile uint8_t x417 = 15U;
int32_t t106 = -32043163;
uint8_t x430 = 1U;
static uint8_t x437 = 0U;
int64_t x440 = INT64_MAX;
volatile int64_t x441 = -3790LL;
int64_t x443 = INT64_MIN;
volatile int64_t x444 = -1LL;
int32_t t110 = -43772;
int16_t x446 = -2;
volatile int32_t t111 = 65538;
int64_t x451 = 92LL;
int64_t x456 = INT64_MAX;
static int8_t x470 = INT8_MIN;
int32_t t118 = 2093343;
static volatile uint8_t x477 = 14U;
int8_t x482 = -1;
int32_t x484 = 11361;
uint16_t x486 = UINT16_MAX;
int16_t x491 = INT16_MIN;
uint8_t x493 = UINT8_MAX;
uint64_t x496 = 1171981120676714LLU;
int8_t x499 = -59;
int8_t x514 = -1;
int32_t t128 = -2;
int64_t x519 = INT64_MIN;
uint16_t x521 = UINT16_MAX;
uint16_t x522 = 93U;
int8_t x531 = -1;
int64_t x534 = INT64_MIN;
uint64_t x535 = 126332LLU;
static int32_t t133 = 25066026;
static volatile int64_t x545 = -14888741545393LL;
int32_t t136 = -7433;
static int32_t x549 = INT32_MIN;
int32_t x554 = 0;
uint64_t x558 = 52040047988016702LLU;
int64_t x559 = INT64_MIN;
uint8_t x560 = 98U;
volatile uint16_t x562 = 8905U;
int64_t x572 = -1LL;
static int32_t t142 = 82;
volatile uint8_t x580 = UINT8_MAX;
volatile uint16_t x584 = 1U;
static volatile int32_t t146 = 7;
static int64_t x589 = 791LL;
int16_t x590 = -37;
uint16_t x592 = 18627U;
static uint32_t x596 = 4738659U;
static int16_t x609 = INT16_MAX;
uint8_t x610 = 11U;
volatile int32_t t152 = 0;
static int32_t t153 = -172;
uint16_t x619 = UINT16_MAX;
uint64_t x620 = 34828LLU;
uint64_t x625 = 1281434554033172558LLU;
static int16_t x626 = INT16_MIN;
int64_t x628 = INT64_MAX;
static int64_t x629 = 14190833677620LL;
int8_t x633 = -1;
int64_t x642 = INT64_MIN;
int64_t x643 = INT64_MAX;
volatile int32_t t160 = -1318;
static int32_t x664 = INT32_MAX;
volatile int32_t t165 = 457;
int16_t x672 = INT16_MIN;
int64_t x676 = INT64_MIN;
static int16_t x683 = INT16_MAX;
uint8_t x693 = UINT8_MAX;
int32_t t174 = -51554633;
volatile int32_t x702 = -1;
int32_t t175 = -13618594;
volatile int8_t x706 = INT8_MAX;
int64_t x713 = -7456129LL;
volatile uint32_t x716 = 9579U;
int64_t x721 = INT64_MIN;
uint32_t x724 = 2408579U;
static volatile int32_t t180 = 3453800;
volatile int64_t x732 = 9428LL;
int32_t t183 = 19;
volatile uint8_t x742 = 31U;
static int8_t x751 = -1;
static int8_t x752 = -1;
static int32_t t188 = -2;
volatile int16_t x763 = INT16_MAX;
int32_t x765 = -461244;
static int8_t x773 = -1;
int32_t x780 = -2562;
volatile int32_t t194 = 87636294;
int16_t x782 = INT16_MIN;
static int32_t x783 = INT32_MAX;
int64_t x790 = INT64_MIN;
int32_t t197 = 254636;
uint16_t x797 = 14618U;
volatile int32_t x799 = INT32_MIN;


void f0(void) {
    	int16_t x1 = -948;
	static uint64_t x2 = 120LLU;
	volatile uint32_t x3 = 58329U;
	int32_t t0 = -65721820;

    t0 = (((x1==x2)&x3)<=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x5 = 0;
	static volatile int32_t x6 = -54464502;
	int16_t x7 = -13693;
	volatile int8_t x8 = -1;
	volatile int32_t t1 = 7814017;

    t1 = (((x5==x6)&x7)<=x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x9 = 22213353;
	volatile uint16_t x10 = UINT16_MAX;
	int16_t x11 = INT16_MAX;
	static int8_t x12 = INT8_MAX;

    t2 = (((x9==x10)&x11)<=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint64_t x13 = 111605823777LLU;
	static uint8_t x14 = UINT8_MAX;
	int8_t x15 = INT8_MIN;
	static int8_t x16 = -5;
	int32_t t3 = -106418642;

    t3 = (((x13==x14)&x15)<=x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x18 = -1;
	static int64_t x19 = -1LL;
	volatile int64_t x20 = -1LL;
	static int32_t t4 = 4;

    t4 = (((x17==x18)&x19)<=x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint16_t x21 = 31141U;
	uint32_t x22 = 870U;
	int16_t x23 = INT16_MAX;
	volatile int16_t x24 = INT16_MIN;
	static volatile int32_t t5 = -272391;

    t5 = (((x21==x22)&x23)<=x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x26 = INT32_MIN;
	static int64_t x27 = INT64_MIN;
	uint16_t x28 = 11824U;
	int32_t t6 = -5667;

    t6 = (((x25==x26)&x27)<=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = 8067626335LLU;
	uint16_t x30 = UINT16_MAX;
	uint8_t x32 = 3U;
	volatile int32_t t7 = 29465101;

    t7 = (((x29==x30)&x31)<=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint32_t x33 = 6U;
	static int32_t x35 = -14;
	int16_t x36 = 3;
	volatile int32_t t8 = -415649;

    t8 = (((x33==x34)&x35)<=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x39 = 64857786122LL;
	int16_t x40 = INT16_MIN;
	volatile int32_t t9 = 61;

    t9 = (((x37==x38)&x39)<=x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x42 = INT8_MAX;
	uint8_t x43 = UINT8_MAX;
	int32_t x44 = INT32_MIN;
	int32_t t10 = -70;

    t10 = (((x41==x42)&x43)<=x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int64_t x46 = INT64_MIN;
	static uint16_t x48 = UINT16_MAX;
	int32_t t11 = 3317673;

    t11 = (((x45==x46)&x47)<=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = -1LL;
	int64_t x50 = -49201385233421LL;
	uint64_t x51 = UINT64_MAX;
	volatile int64_t x52 = 65257638974832703LL;
	int32_t t12 = 1581669;

    t12 = (((x49==x50)&x51)<=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x53 = INT32_MIN;
	int32_t x54 = -1;
	uint8_t x55 = UINT8_MAX;
	int32_t x56 = INT32_MAX;
	int32_t t13 = 619076339;

    t13 = (((x53==x54)&x55)<=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = -1;
	static uint64_t x59 = UINT64_MAX;
	volatile int32_t t14 = 4127825;

    t14 = (((x57==x58)&x59)<=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x64 = INT8_MAX;
	int32_t t15 = -10;

    t15 = (((x61==x62)&x63)<=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int32_t x65 = INT32_MIN;
	static int8_t x66 = 1;
	int8_t x67 = -1;
	int32_t t16 = 52907;

    t16 = (((x65==x66)&x67)<=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = -1LL;
	static int8_t x70 = INT8_MAX;
	volatile int16_t x71 = -241;
	int8_t x72 = INT8_MAX;
	volatile int32_t t17 = 85959754;

    t17 = (((x69==x70)&x71)<=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x74 = INT16_MIN;
	int32_t x75 = -155768428;
	uint16_t x76 = UINT16_MAX;
	volatile int32_t t18 = 129328;

    t18 = (((x73==x74)&x75)<=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x77 = 19239U;
	static int16_t x78 = INT16_MIN;
	static volatile uint8_t x79 = UINT8_MAX;

    t19 = (((x77==x78)&x79)<=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x82 = -26;
	volatile uint64_t x84 = 39672709LLU;
	static volatile int32_t t20 = -273175;

    t20 = (((x81==x82)&x83)<=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = INT32_MIN;
	int32_t x86 = 674539;
	volatile uint32_t x87 = UINT32_MAX;
	int8_t x88 = -22;

    t21 = (((x85==x86)&x87)<=x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = INT16_MIN;
	int16_t x92 = 243;
	int32_t t22 = -12296;

    t22 = (((x89==x90)&x91)<=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = -1;
	int32_t x94 = 855940462;
	volatile uint64_t x95 = 334124566581LLU;
	uint8_t x96 = UINT8_MAX;
	int32_t t23 = 6;

    t23 = (((x93==x94)&x95)<=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x97 = -5;
	int32_t x98 = -3332650;
	int16_t x99 = INT16_MIN;
	int8_t x100 = -2;
	int32_t t24 = 77656;

    t24 = (((x97==x98)&x99)<=x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint32_t x101 = 18U;
	int16_t x102 = INT16_MAX;
	int16_t x104 = -1;
	static volatile int32_t t25 = -40660714;

    t25 = (((x101==x102)&x103)<=x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x105 = -1;
	int32_t x106 = INT32_MIN;
	int32_t x107 = -1;
	static int32_t t26 = -1454392;

    t26 = (((x105==x106)&x107)<=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint8_t x109 = UINT8_MAX;
	volatile uint8_t x110 = 12U;
	uint8_t x112 = 13U;
	volatile int32_t t27 = -160661898;

    t27 = (((x109==x110)&x111)<=x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x113 = INT16_MIN;
	int8_t x114 = -1;
	volatile uint32_t x116 = 61431U;
	int32_t t28 = 80912;

    t28 = (((x113==x114)&x115)<=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = -1794;
	int64_t x119 = -161672387640LL;
	volatile int32_t x120 = INT32_MIN;
	volatile int32_t t29 = 7;

    t29 = (((x117==x118)&x119)<=x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = -11325;
	int32_t x122 = 74;
	static uint8_t x124 = 16U;
	volatile int32_t t30 = -176308875;

    t30 = (((x121==x122)&x123)<=x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int8_t x125 = INT8_MIN;
	static uint16_t x127 = UINT16_MAX;
	int64_t x128 = -5419LL;
	int32_t t31 = 69496712;

    t31 = (((x125==x126)&x127)<=x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint16_t x129 = 25000U;
	int32_t x131 = -1;

    t32 = (((x129==x130)&x131)<=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x133 = -1;
	int8_t x134 = INT8_MAX;
	int16_t x135 = 6735;
	int16_t x136 = INT16_MIN;
	volatile int32_t t33 = 91500452;

    t33 = (((x133==x134)&x135)<=x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = INT16_MIN;
	volatile int16_t x138 = -1;
	uint16_t x139 = 3U;
	int32_t t34 = -308224;

    t34 = (((x137==x138)&x139)<=x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = INT8_MIN;
	static int32_t x142 = INT32_MIN;
	int32_t t35 = -1515;

    t35 = (((x141==x142)&x143)<=x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint64_t x146 = 192568068LLU;
	int8_t x147 = -1;
	int32_t t36 = -812;

    t36 = (((x145==x146)&x147)<=x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = INT64_MIN;
	static int64_t x150 = -1LL;
	volatile uint8_t x151 = 116U;
	uint8_t x152 = 1U;

    t37 = (((x149==x150)&x151)<=x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = INT32_MIN;
	volatile int64_t x154 = -147833178LL;
	uint32_t x155 = 14U;
	static volatile int32_t t38 = -7;

    t38 = (((x153==x154)&x155)<=x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x158 = 27U;
	int8_t x159 = INT8_MIN;
	int8_t x160 = INT8_MIN;

    t39 = (((x157==x158)&x159)<=x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x162 = 872561858LLU;
	volatile int16_t x163 = INT16_MIN;
	int8_t x164 = -1;
	static volatile int32_t t40 = -19539974;

    t40 = (((x161==x162)&x163)<=x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = INT64_MIN;
	uint8_t x166 = 75U;
	volatile uint8_t x167 = 5U;
	static int64_t x168 = -1LL;
	int32_t t41 = -1672;

    t41 = (((x165==x166)&x167)<=x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x170 = -1;
	static volatile int32_t t42 = 0;

    t42 = (((x169==x170)&x171)<=x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x173 = UINT32_MAX;
	volatile uint16_t x174 = 1U;
	static int32_t x175 = INT32_MAX;
	static uint8_t x176 = 4U;
	static volatile int32_t t43 = 3805;

    t43 = (((x173==x174)&x175)<=x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x177 = 426U;
	static int32_t x178 = INT32_MIN;
	volatile int16_t x180 = INT16_MIN;
	int32_t t44 = 29691529;

    t44 = (((x177==x178)&x179)<=x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = -8076;
	static int64_t x182 = INT64_MAX;
	int16_t x184 = -6363;
	int32_t t45 = -100;

    t45 = (((x181==x182)&x183)<=x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile uint16_t x187 = 329U;
	int16_t x188 = INT16_MAX;

    t46 = (((x185==x186)&x187)<=x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint16_t x189 = UINT16_MAX;
	static int8_t x192 = INT8_MIN;
	volatile int32_t t47 = -46975091;

    t47 = (((x189==x190)&x191)<=x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x193 = 6;
	static volatile int32_t x194 = INT32_MIN;
	uint32_t x196 = UINT32_MAX;

    t48 = (((x193==x194)&x195)<=x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x198 = UINT8_MAX;
	uint16_t x199 = 53U;
	static volatile int32_t t49 = 6;

    t49 = (((x197==x198)&x199)<=x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x201 = 1045LLU;
	volatile int8_t x202 = -27;
	int16_t x203 = INT16_MAX;
	int32_t t50 = -31;

    t50 = (((x201==x202)&x203)<=x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint32_t x205 = UINT32_MAX;
	int8_t x208 = -1;
	volatile int32_t t51 = 1350208;

    t51 = (((x205==x206)&x207)<=x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = INT32_MAX;
	volatile uint64_t x210 = 58899489441044457LLU;
	int64_t x211 = -1LL;
	uint8_t x212 = 0U;
	volatile int32_t t52 = 591902539;

    t52 = (((x209==x210)&x211)<=x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x213 = UINT16_MAX;
	uint64_t x214 = 14LLU;
	uint16_t x215 = UINT16_MAX;
	int32_t t53 = 191;

    t53 = (((x213==x214)&x215)<=x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint64_t x217 = 65442303618058846LLU;
	int8_t x218 = -1;
	static volatile int32_t x220 = -1;

    t54 = (((x217==x218)&x219)<=x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x221 = UINT64_MAX;
	uint8_t x222 = UINT8_MAX;
	volatile uint8_t x223 = 21U;
	static int32_t x224 = INT32_MIN;
	volatile int32_t t55 = 904;

    t55 = (((x221==x222)&x223)<=x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = INT16_MIN;
	uint16_t x228 = 389U;
	volatile int32_t t56 = -608;

    t56 = (((x225==x226)&x227)<=x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = INT32_MIN;
	int32_t x230 = -1;
	uint64_t x232 = 993083844294807437LLU;
	volatile int32_t t57 = -41;

    t57 = (((x229==x230)&x231)<=x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = -361369968;
	int64_t x234 = -167020LL;
	uint8_t x236 = 0U;
	static int32_t t58 = -66325850;

    t58 = (((x233==x234)&x235)<=x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x237 = 5886;
	int32_t x238 = INT32_MIN;
	int32_t x239 = INT32_MIN;
	uint8_t x240 = 1U;
	int32_t t59 = -140837848;

    t59 = (((x237==x238)&x239)<=x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x241 = 950U;
	volatile int64_t x243 = 2941894698139777173LL;
	volatile int32_t x244 = -1;
	int32_t t60 = 15158;

    t60 = (((x241==x242)&x243)<=x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = INT64_MIN;
	int32_t x246 = INT32_MIN;
	static int64_t x247 = 6180738897619LL;
	uint64_t x248 = 212949LLU;
	int32_t t61 = -7377513;

    t61 = (((x245==x246)&x247)<=x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = INT64_MAX;
	int32_t x250 = -214317378;
	int64_t x251 = INT64_MAX;
	volatile int32_t x252 = INT32_MIN;
	int32_t t62 = -425;

    t62 = (((x249==x250)&x251)<=x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x254 = UINT8_MAX;
	uint64_t x256 = 1917LLU;
	volatile int32_t t63 = -57;

    t63 = (((x253==x254)&x255)<=x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x257 = 25360LLU;
	int8_t x259 = INT8_MIN;
	static uint32_t x260 = 72U;
	volatile int32_t t64 = -17147;

    t64 = (((x257==x258)&x259)<=x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x261 = -1;
	volatile int64_t x262 = 1LL;

    t65 = (((x261==x262)&x263)<=x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = -1LL;
	int64_t x266 = INT64_MIN;
	uint8_t x267 = 5U;
	uint8_t x268 = UINT8_MAX;
	static volatile int32_t t66 = -795;

    t66 = (((x265==x266)&x267)<=x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint8_t x269 = 17U;
	int32_t x270 = -10987;
	uint16_t x271 = 2073U;
	static int64_t x272 = INT64_MIN;
	int32_t t67 = 7541645;

    t67 = (((x269==x270)&x271)<=x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x273 = -14362597931792LL;
	volatile int32_t x274 = -1;
	uint32_t x275 = 1661U;
	uint64_t x276 = 2115908415761LLU;
	volatile int32_t t68 = -385;

    t68 = (((x273==x274)&x275)<=x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint64_t x277 = 5LLU;
	int16_t x278 = -6419;
	int16_t x280 = INT16_MIN;
	volatile int32_t t69 = -15;

    t69 = (((x277==x278)&x279)<=x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x281 = INT32_MAX;
	volatile uint8_t x282 = 8U;
	uint64_t x283 = UINT64_MAX;
	int32_t t70 = -81540577;

    t70 = (((x281==x282)&x283)<=x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint8_t x285 = 1U;
	uint16_t x286 = 1U;
	uint32_t x287 = UINT32_MAX;
	uint32_t x288 = 83U;
	int32_t t71 = -40288849;

    t71 = (((x285==x286)&x287)<=x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = 193857809832134220LL;
	volatile int16_t x291 = INT16_MIN;
	int16_t x292 = -82;
	volatile int32_t t72 = -24493;

    t72 = (((x289==x290)&x291)<=x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x293 = -2940402260LL;
	int32_t x294 = INT32_MAX;
	int32_t x295 = INT32_MAX;
	static int32_t x296 = -1;
	static int32_t t73 = -128823;

    t73 = (((x293==x294)&x295)<=x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x297 = -1;
	int32_t x298 = -144801224;
	uint8_t x299 = 40U;
	int8_t x300 = 38;
	volatile int32_t t74 = -3;

    t74 = (((x297==x298)&x299)<=x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = INT16_MAX;
	static uint64_t x302 = 5123LLU;
	int32_t x304 = INT32_MIN;

    t75 = (((x301==x302)&x303)<=x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x305 = 1U;
	uint64_t x306 = UINT64_MAX;
	int64_t x307 = INT64_MIN;
	uint8_t x308 = UINT8_MAX;
	volatile int32_t t76 = 5260267;

    t76 = (((x305==x306)&x307)<=x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x309 = UINT32_MAX;
	int64_t x311 = INT64_MIN;
	volatile uint32_t x312 = 8808U;
	volatile int32_t t77 = -25369;

    t77 = (((x309==x310)&x311)<=x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int32_t x313 = -1;
	int16_t x314 = -1;
	volatile uint8_t x315 = 7U;
	static int64_t x316 = -1LL;
	static volatile int32_t t78 = -10742994;

    t78 = (((x313==x314)&x315)<=x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x317 = INT16_MIN;
	uint8_t x318 = 9U;

    t79 = (((x317==x318)&x319)<=x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x321 = INT64_MIN;
	volatile uint16_t x322 = 1268U;
	int8_t x323 = INT8_MIN;
	int8_t x324 = -11;
	int32_t t80 = -520225;

    t80 = (((x321==x322)&x323)<=x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = INT16_MIN;
	uint64_t x327 = 3LLU;
	int16_t x328 = -1;
	int32_t t81 = 28;

    t81 = (((x325==x326)&x327)<=x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x329 = INT32_MIN;
	static int16_t x330 = 1595;
	static int8_t x331 = 0;
	int32_t x332 = INT32_MAX;
	int32_t t82 = 44093;

    t82 = (((x329==x330)&x331)<=x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = INT32_MAX;
	int64_t x335 = INT64_MIN;
	int32_t x336 = INT32_MAX;
	int32_t t83 = -131615608;

    t83 = (((x333==x334)&x335)<=x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x337 = INT16_MAX;
	int64_t x338 = INT64_MAX;
	int64_t x339 = 4777LL;
	int32_t x340 = 63;
	int32_t t84 = -7;

    t84 = (((x337==x338)&x339)<=x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x341 = -173;
	uint8_t x342 = 0U;
	uint32_t x343 = 28265479U;
	uint64_t x344 = 17LLU;

    t85 = (((x341==x342)&x343)<=x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = -37;
	int8_t x346 = INT8_MIN;
	int32_t x347 = INT32_MAX;
	static volatile int32_t t86 = -119469;

    t86 = (((x345==x346)&x347)<=x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = -1;
	volatile int8_t x350 = 4;
	int8_t x351 = INT8_MIN;
	uint8_t x352 = 11U;
	int32_t t87 = 31352;

    t87 = (((x349==x350)&x351)<=x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x353 = 2812927302284875826LL;
	uint16_t x355 = UINT16_MAX;
	uint16_t x356 = 27U;
	static int32_t t88 = 115457137;

    t88 = (((x353==x354)&x355)<=x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = -1;
	uint8_t x358 = 2U;
	int8_t x360 = INT8_MAX;
	static int32_t t89 = 61;

    t89 = (((x357==x358)&x359)<=x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = INT32_MAX;
	int8_t x362 = INT8_MIN;
	uint16_t x363 = 12612U;
	static int64_t x364 = INT64_MIN;
	static volatile int32_t t90 = 5555263;

    t90 = (((x361==x362)&x363)<=x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x366 = INT8_MIN;
	int64_t x367 = INT64_MAX;
	volatile int8_t x368 = INT8_MAX;
	volatile int32_t t91 = -823;

    t91 = (((x365==x366)&x367)<=x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x370 = INT16_MAX;
	int16_t x371 = INT16_MAX;
	uint16_t x372 = 25310U;

    t92 = (((x369==x370)&x371)<=x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x373 = -1LL;
	volatile int32_t x374 = 16678432;
	volatile int16_t x376 = INT16_MIN;
	static int32_t t93 = 194;

    t93 = (((x373==x374)&x375)<=x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x378 = INT32_MAX;

    t94 = (((x377==x378)&x379)<=x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint16_t x381 = UINT16_MAX;
	static uint16_t x382 = 60U;
	volatile int64_t x383 = INT64_MIN;
	int16_t x384 = INT16_MIN;

    t95 = (((x381==x382)&x383)<=x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x385 = INT16_MAX;
	uint16_t x386 = 39U;
	static int8_t x387 = INT8_MAX;
	int8_t x388 = INT8_MIN;
	int32_t t96 = 0;

    t96 = (((x385==x386)&x387)<=x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint32_t x389 = UINT32_MAX;
	int8_t x390 = 3;
	volatile uint32_t x391 = 112U;
	uint64_t x392 = 58424186LLU;

    t97 = (((x389==x390)&x391)<=x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x394 = INT8_MIN;
	static uint8_t x395 = 7U;
	int64_t x396 = -5467570LL;

    t98 = (((x393==x394)&x395)<=x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x397 = 4456839749LLU;
	volatile int32_t x398 = -1;
	uint16_t x399 = 47U;
	volatile uint64_t x400 = 1646452LLU;
	volatile int32_t t99 = 443627839;

    t99 = (((x397==x398)&x399)<=x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x401 = 35701631;
	uint8_t x402 = 105U;
	int16_t x403 = INT16_MIN;
	int16_t x404 = INT16_MIN;
	volatile int32_t t100 = 6;

    t100 = (((x401==x402)&x403)<=x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x405 = 0;
	uint16_t x406 = 7U;
	static int16_t x407 = INT16_MIN;

    t101 = (((x405==x406)&x407)<=x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x409 = 3337;
	int16_t x410 = -552;
	static int8_t x411 = INT8_MIN;
	static int32_t t102 = -596;

    t102 = (((x409==x410)&x411)<=x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x414 = INT16_MAX;
	volatile int8_t x415 = 53;
	volatile int32_t t103 = -4;

    t103 = (((x413==x414)&x415)<=x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x418 = -58;
	int64_t x419 = 6992221LL;
	static uint32_t x420 = 1536788U;
	static volatile int32_t t104 = -7599;

    t104 = (((x417==x418)&x419)<=x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = INT16_MAX;
	int32_t x422 = INT32_MIN;
	int64_t x423 = INT64_MIN;
	static int64_t x424 = INT64_MIN;
	int32_t t105 = 2715369;

    t105 = (((x421==x422)&x423)<=x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = -1;
	int64_t x426 = INT64_MIN;
	int8_t x427 = -1;
	int64_t x428 = -121877741879240203LL;

    t106 = (((x425==x426)&x427)<=x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = INT64_MIN;
	volatile int8_t x431 = INT8_MIN;
	volatile uint16_t x432 = UINT16_MAX;
	volatile int32_t t107 = -25;

    t107 = (((x429==x430)&x431)<=x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint8_t x433 = 3U;
	int8_t x434 = INT8_MIN;
	int8_t x435 = INT8_MIN;
	uint64_t x436 = UINT64_MAX;
	int32_t t108 = -119641;

    t108 = (((x433==x434)&x435)<=x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x438 = 633573469611484LLU;
	volatile int16_t x439 = INT16_MIN;
	static int32_t t109 = -382;

    t109 = (((x437==x438)&x439)<=x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x442 = 2;

    t110 = (((x441==x442)&x443)<=x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = INT64_MAX;
	int16_t x447 = -4;
	uint64_t x448 = UINT64_MAX;

    t111 = (((x445==x446)&x447)<=x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x449 = -1;
	int8_t x450 = -1;
	int64_t x452 = INT64_MAX;
	int32_t t112 = 0;

    t112 = (((x449==x450)&x451)<=x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = 2;
	static volatile int16_t x454 = -7;
	static uint32_t x455 = 187U;
	int32_t t113 = -4;

    t113 = (((x453==x454)&x455)<=x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x457 = UINT16_MAX;
	int32_t x458 = INT32_MIN;
	int32_t x459 = INT32_MIN;
	int8_t x460 = INT8_MAX;
	volatile int32_t t114 = -9904;

    t114 = (((x457==x458)&x459)<=x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x461 = 493U;
	int8_t x462 = 21;
	static int64_t x463 = -217047558567LL;
	volatile int32_t x464 = INT32_MIN;
	static volatile int32_t t115 = 4887;

    t115 = (((x461==x462)&x463)<=x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x465 = INT8_MAX;
	volatile int32_t x466 = -569159211;
	int32_t x467 = 4550239;
	uint16_t x468 = 39U;
	int32_t t116 = -1;

    t116 = (((x465==x466)&x467)<=x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x469 = INT64_MAX;
	static int16_t x471 = -1;
	int8_t x472 = INT8_MIN;
	int32_t t117 = -3219;

    t117 = (((x469==x470)&x471)<=x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x473 = UINT32_MAX;
	volatile uint32_t x474 = 0U;
	volatile int64_t x475 = INT64_MIN;
	int8_t x476 = -1;

    t118 = (((x473==x474)&x475)<=x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x478 = INT64_MIN;
	static int16_t x479 = -1430;
	volatile uint32_t x480 = UINT32_MAX;
	int32_t t119 = 1183;

    t119 = (((x477==x478)&x479)<=x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint64_t x481 = 5915LLU;
	int8_t x483 = INT8_MAX;
	volatile int32_t t120 = -16146005;

    t120 = (((x481==x482)&x483)<=x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = -7;
	int16_t x487 = 7874;
	int64_t x488 = INT64_MAX;
	volatile int32_t t121 = -347086201;

    t121 = (((x485==x486)&x487)<=x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x489 = -1LL;
	volatile int32_t x490 = -1;
	uint32_t x492 = 1U;
	static int32_t t122 = 42026;

    t122 = (((x489==x490)&x491)<=x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x494 = INT16_MAX;
	uint32_t x495 = 8395998U;
	int32_t t123 = 60;

    t123 = (((x493==x494)&x495)<=x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x497 = UINT32_MAX;
	static int8_t x498 = INT8_MIN;
	volatile int8_t x500 = -14;
	volatile int32_t t124 = -82738;

    t124 = (((x497==x498)&x499)<=x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x501 = UINT32_MAX;
	static volatile int16_t x502 = INT16_MAX;
	int8_t x503 = -3;
	volatile int64_t x504 = INT64_MIN;
	volatile int32_t t125 = -253550;

    t125 = (((x501==x502)&x503)<=x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = INT8_MIN;
	uint16_t x506 = 25U;
	static uint8_t x507 = 12U;
	int32_t x508 = INT32_MIN;
	int32_t t126 = 40450220;

    t126 = (((x505==x506)&x507)<=x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x509 = INT8_MAX;
	int32_t x510 = INT32_MIN;
	int16_t x511 = -1;
	volatile int32_t x512 = INT32_MIN;
	volatile int32_t t127 = 3;

    t127 = (((x509==x510)&x511)<=x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int8_t x513 = INT8_MIN;
	int64_t x515 = -1LL;
	int8_t x516 = 1;

    t128 = (((x513==x514)&x515)<=x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x517 = 2384U;
	int64_t x518 = -1LL;
	int16_t x520 = INT16_MAX;
	static volatile int32_t t129 = -678405;

    t129 = (((x517==x518)&x519)<=x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x523 = 90;
	int64_t x524 = 7067636LL;
	int32_t t130 = 935;

    t130 = (((x521==x522)&x523)<=x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x525 = INT16_MIN;
	volatile uint64_t x526 = 2010624LLU;
	int16_t x527 = -6527;
	volatile int32_t x528 = 13728;
	int32_t t131 = 10;

    t131 = (((x525==x526)&x527)<=x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x529 = INT16_MIN;
	static int64_t x530 = 77736204954LL;
	uint8_t x532 = 0U;
	static volatile int32_t t132 = -9;

    t132 = (((x529==x530)&x531)<=x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x533 = 0;
	static uint32_t x536 = 1844174756U;

    t133 = (((x533==x534)&x535)<=x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x537 = -1LL;
	static uint16_t x538 = 1803U;
	volatile int32_t x539 = -1;
	volatile uint8_t x540 = UINT8_MAX;
	volatile int32_t t134 = -158465;

    t134 = (((x537==x538)&x539)<=x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x541 = INT8_MIN;
	volatile int32_t x542 = -1;
	volatile uint16_t x543 = UINT16_MAX;
	int64_t x544 = -7858828336219567LL;
	static volatile int32_t t135 = 43204;

    t135 = (((x541==x542)&x543)<=x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint8_t x546 = 5U;
	static int64_t x547 = -1LL;
	int16_t x548 = INT16_MIN;

    t136 = (((x545==x546)&x547)<=x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static int16_t x550 = INT16_MIN;
	int32_t x551 = INT32_MIN;
	static int64_t x552 = -214076382215LL;
	static volatile int32_t t137 = 1983;

    t137 = (((x549==x550)&x551)<=x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x553 = INT64_MIN;
	int32_t x555 = INT32_MIN;
	int32_t x556 = 3716701;
	volatile int32_t t138 = -16;

    t138 = (((x553==x554)&x555)<=x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x557 = UINT8_MAX;
	int32_t t139 = -1;

    t139 = (((x557==x558)&x559)<=x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x561 = -1;
	int64_t x563 = INT64_MAX;
	int8_t x564 = 1;
	int32_t t140 = -42955;

    t140 = (((x561==x562)&x563)<=x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x565 = 769000;
	int32_t x566 = INT32_MAX;
	int16_t x567 = INT16_MIN;
	static volatile uint64_t x568 = 10LLU;
	int32_t t141 = 0;

    t141 = (((x565==x566)&x567)<=x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile uint32_t x569 = UINT32_MAX;
	uint8_t x570 = 4U;
	static uint8_t x571 = 0U;

    t142 = (((x569==x570)&x571)<=x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x573 = 11988270625LLU;
	uint16_t x574 = UINT16_MAX;
	static int64_t x575 = -1LL;
	static int16_t x576 = INT16_MIN;
	int32_t t143 = -1469976;

    t143 = (((x573==x574)&x575)<=x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = INT32_MIN;
	static volatile int16_t x578 = INT16_MIN;
	volatile int16_t x579 = -1;
	volatile int32_t t144 = 4351;

    t144 = (((x577==x578)&x579)<=x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile uint64_t x581 = UINT64_MAX;
	uint8_t x582 = 0U;
	int64_t x583 = -1LL;
	int32_t t145 = 2001290;

    t145 = (((x581==x582)&x583)<=x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x585 = -1LL;
	uint64_t x586 = 58LLU;
	static uint32_t x587 = UINT32_MAX;
	int8_t x588 = -13;

    t146 = (((x585==x586)&x587)<=x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x591 = -1;
	volatile int32_t t147 = -157;

    t147 = (((x589==x590)&x591)<=x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x593 = INT32_MIN;
	int32_t x594 = -59;
	int32_t x595 = 33;
	volatile int32_t t148 = -28171;

    t148 = (((x593==x594)&x595)<=x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile uint32_t x597 = UINT32_MAX;
	static int32_t x598 = INT32_MAX;
	int64_t x599 = INT64_MAX;
	static int32_t x600 = INT32_MAX;
	static volatile int32_t t149 = 237278;

    t149 = (((x597==x598)&x599)<=x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x601 = 14577862140LLU;
	static volatile uint16_t x602 = 14221U;
	uint16_t x603 = UINT16_MAX;
	volatile int16_t x604 = 7669;
	volatile int32_t t150 = 482314390;

    t150 = (((x601==x602)&x603)<=x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x605 = -31;
	uint32_t x606 = 209482742U;
	int32_t x607 = INT32_MIN;
	int32_t x608 = -1;
	int32_t t151 = -1;

    t151 = (((x605==x606)&x607)<=x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x611 = INT8_MIN;
	static int32_t x612 = 10;

    t152 = (((x609==x610)&x611)<=x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = -1;
	volatile uint32_t x614 = 10603U;
	uint64_t x615 = 2926604526192251LLU;
	volatile uint64_t x616 = 24275287814353LLU;

    t153 = (((x613==x614)&x615)<=x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x617 = -836LL;
	volatile uint32_t x618 = UINT32_MAX;
	volatile int32_t t154 = 0;

    t154 = (((x617==x618)&x619)<=x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x621 = -203667389367742931LL;
	volatile uint16_t x622 = 234U;
	int32_t x623 = -21320560;
	int64_t x624 = -127714422125122216LL;
	int32_t t155 = -251;

    t155 = (((x621==x622)&x623)<=x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x627 = 12697632U;
	volatile int32_t t156 = 230485;

    t156 = (((x625==x626)&x627)<=x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x630 = INT16_MIN;
	int64_t x631 = INT64_MIN;
	volatile uint16_t x632 = UINT16_MAX;
	volatile int32_t t157 = 1909188;

    t157 = (((x629==x630)&x631)<=x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint8_t x634 = UINT8_MAX;
	int8_t x635 = -1;
	uint8_t x636 = 22U;
	int32_t t158 = -13037;

    t158 = (((x633==x634)&x635)<=x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x637 = INT64_MIN;
	static uint64_t x638 = UINT64_MAX;
	int16_t x639 = -15;
	uint8_t x640 = UINT8_MAX;
	volatile int32_t t159 = 571000;

    t159 = (((x637==x638)&x639)<=x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x641 = INT8_MIN;
	uint16_t x644 = UINT16_MAX;

    t160 = (((x641==x642)&x643)<=x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x645 = INT64_MIN;
	uint8_t x646 = 13U;
	uint16_t x647 = 30348U;
	int32_t x648 = INT32_MAX;
	volatile int32_t t161 = 227127;

    t161 = (((x645==x646)&x647)<=x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x649 = INT8_MIN;
	int64_t x650 = INT64_MAX;
	uint64_t x651 = 514747882951805028LLU;
	static volatile int64_t x652 = INT64_MIN;
	static volatile int32_t t162 = -1015;

    t162 = (((x649==x650)&x651)<=x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x653 = INT8_MIN;
	uint64_t x654 = 247153747442LLU;
	static int16_t x655 = INT16_MAX;
	uint64_t x656 = 3083654993452LLU;
	volatile int32_t t163 = 13879939;

    t163 = (((x653==x654)&x655)<=x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = -2612;
	int64_t x658 = INT64_MIN;
	uint8_t x659 = 5U;
	int32_t x660 = -231;
	static int32_t t164 = 1;

    t164 = (((x657==x658)&x659)<=x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = -1LL;
	int8_t x662 = -3;
	int64_t x663 = 4076042LL;

    t165 = (((x661==x662)&x663)<=x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = -1;
	int64_t x666 = INT64_MAX;
	static int8_t x667 = 0;
	static int64_t x668 = -81LL;
	int32_t t166 = 159318094;

    t166 = (((x665==x666)&x667)<=x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x669 = INT32_MIN;
	int64_t x670 = 123722LL;
	int32_t x671 = INT32_MAX;
	static volatile int32_t t167 = 750;

    t167 = (((x669==x670)&x671)<=x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x673 = 90U;
	static int32_t x674 = 0;
	static volatile uint8_t x675 = UINT8_MAX;
	static volatile int32_t t168 = 24;

    t168 = (((x673==x674)&x675)<=x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint32_t x677 = 10397U;
	static int64_t x678 = INT64_MAX;
	int8_t x679 = 62;
	uint8_t x680 = 1U;
	volatile int32_t t169 = 277371061;

    t169 = (((x677==x678)&x679)<=x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint16_t x681 = 44U;
	volatile uint32_t x682 = 864U;
	static int8_t x684 = INT8_MIN;
	volatile int32_t t170 = 3479517;

    t170 = (((x681==x682)&x683)<=x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x685 = INT8_MIN;
	volatile int16_t x686 = -2826;
	volatile int8_t x687 = -14;
	static volatile int32_t x688 = INT32_MAX;
	int32_t t171 = -177589985;

    t171 = (((x685==x686)&x687)<=x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint8_t x689 = 8U;
	int8_t x690 = INT8_MAX;
	volatile uint64_t x691 = 3266066693778453LLU;
	int8_t x692 = INT8_MIN;
	static int32_t t172 = -385656;

    t172 = (((x689==x690)&x691)<=x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x694 = -7952168;
	int8_t x695 = -1;
	uint16_t x696 = UINT16_MAX;
	int32_t t173 = 2419;

    t173 = (((x693==x694)&x695)<=x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x697 = 2U;
	int16_t x698 = 181;
	int32_t x699 = INT32_MIN;
	static uint32_t x700 = 1558817348U;

    t174 = (((x697==x698)&x699)<=x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x701 = 11585019261LL;
	int16_t x703 = -403;
	int8_t x704 = INT8_MAX;

    t175 = (((x701==x702)&x703)<=x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x705 = INT32_MAX;
	uint8_t x707 = 1U;
	int32_t x708 = 3;
	int32_t t176 = -306;

    t176 = (((x705==x706)&x707)<=x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x709 = UINT8_MAX;
	static int16_t x710 = 12;
	int64_t x711 = 1104LL;
	uint32_t x712 = 1U;
	volatile int32_t t177 = 1999586;

    t177 = (((x709==x710)&x711)<=x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint32_t x714 = UINT32_MAX;
	int16_t x715 = -1;
	int32_t t178 = 31347283;

    t178 = (((x713==x714)&x715)<=x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x717 = INT8_MAX;
	int8_t x718 = INT8_MIN;
	int64_t x719 = INT64_MAX;
	uint32_t x720 = 5739895U;
	static volatile int32_t t179 = 6917828;

    t179 = (((x717==x718)&x719)<=x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint32_t x722 = 12154567U;
	uint64_t x723 = 2836788LLU;

    t180 = (((x721==x722)&x723)<=x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x725 = 45562396981LL;
	uint64_t x726 = 1122LLU;
	int16_t x727 = INT16_MAX;
	uint16_t x728 = 3543U;
	int32_t t181 = -77786;

    t181 = (((x725==x726)&x727)<=x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x729 = 14U;
	static int32_t x730 = INT32_MIN;
	int32_t x731 = 43662478;
	volatile int32_t t182 = 16438;

    t182 = (((x729==x730)&x731)<=x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x733 = UINT64_MAX;
	uint16_t x734 = UINT16_MAX;
	uint32_t x735 = 363719U;
	volatile int16_t x736 = INT16_MAX;

    t183 = (((x733==x734)&x735)<=x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x737 = INT64_MIN;
	uint32_t x738 = UINT32_MAX;
	int8_t x739 = -1;
	int64_t x740 = 4183230083LL;
	static volatile int32_t t184 = -62;

    t184 = (((x737==x738)&x739)<=x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x741 = -1LL;
	static int64_t x743 = -1LL;
	int64_t x744 = INT64_MAX;
	volatile int32_t t185 = 1122829;

    t185 = (((x741==x742)&x743)<=x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x745 = -1;
	volatile int8_t x746 = -42;
	int64_t x747 = 736LL;
	static uint8_t x748 = 33U;
	volatile int32_t t186 = -8725157;

    t186 = (((x745==x746)&x747)<=x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x749 = INT16_MIN;
	volatile int32_t x750 = 0;
	static volatile int32_t t187 = 36967219;

    t187 = (((x749==x750)&x751)<=x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x753 = -1;
	static uint32_t x754 = 7U;
	int32_t x755 = -13342339;
	int16_t x756 = INT16_MIN;

    t188 = (((x753==x754)&x755)<=x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint64_t x757 = 1629315LLU;
	int32_t x758 = -2;
	static uint32_t x759 = 327U;
	uint16_t x760 = 22024U;
	volatile int32_t t189 = -3;

    t189 = (((x757==x758)&x759)<=x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x761 = 105836U;
	int32_t x762 = -11523;
	static int64_t x764 = -14750974956117568LL;
	volatile int32_t t190 = 21285;

    t190 = (((x761==x762)&x763)<=x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int8_t x766 = INT8_MAX;
	static uint16_t x767 = 3080U;
	uint8_t x768 = UINT8_MAX;
	int32_t t191 = 235283274;

    t191 = (((x765==x766)&x767)<=x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x769 = 3313712180728701LLU;
	uint8_t x770 = 38U;
	int32_t x771 = 7;
	int64_t x772 = -1LL;
	volatile int32_t t192 = 1235692;

    t192 = (((x769==x770)&x771)<=x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x774 = 9847743770LL;
	int32_t x775 = INT32_MIN;
	volatile uint32_t x776 = 321U;
	int32_t t193 = 16580149;

    t193 = (((x773==x774)&x775)<=x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint32_t x777 = UINT32_MAX;
	static int32_t x778 = -53316;
	static int32_t x779 = -1;

    t194 = (((x777==x778)&x779)<=x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x781 = INT32_MIN;
	uint8_t x784 = 37U;
	int32_t t195 = 8651004;

    t195 = (((x781==x782)&x783)<=x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint64_t x785 = 34386762260415498LLU;
	int32_t x786 = -10887;
	int8_t x787 = 3;
	int16_t x788 = INT16_MIN;
	int32_t t196 = 18;

    t196 = (((x785==x786)&x787)<=x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x789 = INT16_MIN;
	int32_t x791 = 1037;
	uint8_t x792 = UINT8_MAX;

    t197 = (((x789==x790)&x791)<=x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x793 = -1;
	int64_t x794 = INT64_MIN;
	static int64_t x795 = 3040942075281841LL;
	int64_t x796 = 277818953072515LL;
	int32_t t198 = -400427;

    t198 = (((x793==x794)&x795)<=x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint64_t x798 = 520743540317392LLU;
	int8_t x800 = -1;
	int32_t t199 = 439;

    t199 = (((x797==x798)&x799)<=x800);

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

