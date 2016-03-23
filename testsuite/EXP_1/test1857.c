
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

int8_t x2 = INT8_MIN;
int16_t x12 = 1;
static volatile int16_t x13 = INT16_MIN;
int8_t x16 = INT8_MAX;
int32_t x25 = -1;
volatile int32_t x29 = INT32_MIN;
int32_t t8 = -398;
int64_t x39 = -756081884191436LL;
uint32_t x44 = UINT32_MAX;
uint32_t x47 = UINT32_MAX;
int32_t x55 = -2885262;
volatile int32_t t14 = 159;
static int32_t x74 = INT32_MIN;
static volatile int32_t x76 = INT32_MIN;
uint8_t x86 = 0U;
int64_t x87 = 5801475360693LL;
static int16_t x89 = -69;
int16_t x94 = INT16_MIN;
volatile uint16_t x101 = 6850U;
int64_t x103 = -1LL;
volatile int16_t x111 = 6506;
volatile int32_t t29 = -1526;
volatile int32_t t30 = 1002459523;
uint16_t x137 = 1U;
volatile uint64_t x147 = UINT64_MAX;
volatile int32_t t36 = -664;
static uint64_t x159 = UINT64_MAX;
int32_t t39 = 35;
int64_t x175 = INT64_MAX;
uint64_t x178 = 2LLU;
int16_t x185 = -1;
int32_t x191 = -1;
volatile uint32_t x198 = 3U;
volatile int32_t x209 = INT32_MAX;
int64_t x220 = INT64_MIN;
static volatile int32_t t56 = 111233104;
uint16_t x232 = 932U;
int8_t x235 = INT8_MIN;
static int64_t x240 = -616773LL;
uint8_t x241 = 5U;
static int32_t x245 = INT32_MIN;
int32_t t61 = 45731;
uint8_t x250 = 13U;
int8_t x251 = INT8_MIN;
int32_t t62 = 1;
uint32_t x267 = 166U;
int32_t t66 = -76;
volatile int8_t x279 = -6;
uint8_t x280 = 0U;
static int32_t t69 = 184372;
volatile int32_t x284 = 3203188;
volatile int32_t t70 = -26035;
int32_t t72 = 2;
int32_t t73 = 358;
int64_t x300 = INT64_MAX;
static volatile int32_t t74 = 5322724;
int32_t x302 = INT32_MAX;
volatile int8_t x310 = INT8_MIN;
int32_t t78 = 283;
int8_t x317 = -1;
int32_t x324 = INT32_MIN;
volatile int32_t t80 = 1916;
static int16_t x328 = -1;
int32_t t81 = 3919515;
int16_t x330 = -1;
int32_t t82 = -258;
int64_t x335 = -1LL;
uint32_t x337 = 18574153U;
int16_t x341 = INT16_MAX;
uint32_t x343 = 185U;
static int16_t x345 = INT16_MIN;
uint16_t x347 = 0U;
uint16_t x349 = 1U;
int32_t x354 = -488036;
uint64_t x356 = UINT64_MAX;
int64_t x364 = -342LL;
static int32_t t90 = 45562113;
static int64_t x375 = -1LL;
int16_t x383 = INT16_MAX;
int32_t t95 = 206188;
int64_t x389 = INT64_MIN;
volatile int32_t t97 = 122;
volatile uint8_t x394 = 12U;
int16_t x396 = INT16_MIN;
static uint8_t x401 = UINT8_MAX;
volatile uint8_t x405 = UINT8_MAX;
static int8_t x408 = INT8_MIN;
int8_t x409 = 0;
static int32_t x411 = INT32_MAX;
uint16_t x418 = 2U;
int16_t x424 = INT16_MAX;
static int32_t x425 = 13;
uint8_t x435 = UINT8_MAX;
int16_t x436 = -332;
int32_t x439 = -1;
static uint8_t x440 = 6U;
static int8_t x448 = INT8_MAX;
int16_t x452 = 1159;
volatile int64_t x453 = INT64_MIN;
static int32_t t113 = 4273568;
static int8_t x472 = -2;
static int8_t x474 = INT8_MAX;
static volatile int32_t t121 = 51371;
uint16_t x489 = UINT16_MAX;
static volatile uint32_t x491 = 107341541U;
int32_t x492 = 1234063;
int32_t x499 = -1;
uint64_t x501 = 8683092391297290LLU;
int64_t x502 = INT64_MIN;
int32_t x508 = 127;
volatile int8_t x513 = INT8_MIN;
int32_t x514 = 8912240;
int32_t t128 = -527;
int32_t x519 = -1;
uint64_t x520 = UINT64_MAX;
int32_t x521 = INT32_MIN;
volatile int64_t x522 = INT64_MIN;
volatile uint64_t x530 = 3417163081405LLU;
static volatile int32_t x531 = -1;
volatile int8_t x533 = -16;
uint64_t x534 = 1321536744598LLU;
int16_t x541 = -1;
volatile uint32_t x549 = 165134U;
int32_t x550 = INT32_MIN;
static int32_t t138 = -205132717;
int64_t x575 = -1LL;
int32_t x580 = INT32_MAX;
int32_t x582 = INT32_MAX;
uint8_t x593 = 1U;
uint32_t x594 = UINT32_MAX;
uint16_t x608 = 1934U;
uint8_t x619 = 112U;
uint64_t x620 = 63LLU;
int8_t x625 = 7;
volatile uint8_t x638 = 0U;
static uint64_t x640 = 8203698LLU;
static uint16_t x645 = 165U;
int64_t x648 = 876713744502329497LL;
volatile int32_t t161 = 2;
volatile int32_t x656 = -1;
int32_t t163 = 16242;
volatile int32_t t164 = 12710290;
uint16_t x661 = UINT16_MAX;
int32_t x666 = 345;
volatile uint8_t x670 = 88U;
int64_t x672 = -1LL;
static int64_t x674 = 1092688262079218569LL;
int8_t x675 = -7;
int16_t x681 = -1;
int32_t x683 = INT32_MIN;
volatile int64_t x691 = INT64_MIN;
int8_t x703 = -1;
int8_t x707 = INT8_MIN;
int16_t x711 = INT16_MAX;
int64_t x712 = INT64_MAX;
static volatile int32_t t178 = 5147075;
int32_t t179 = 8888732;
static int32_t t182 = 70;
volatile int32_t x740 = 0;
volatile int32_t t184 = 3769;
int64_t x741 = INT64_MAX;
volatile int32_t t186 = -1;
int16_t x759 = 1;
int32_t x760 = -51;
static uint8_t x763 = UINT8_MAX;
uint8_t x765 = UINT8_MAX;
static uint32_t x767 = 1U;
int8_t x770 = INT8_MIN;
int32_t x774 = INT32_MAX;
static int16_t x780 = INT16_MIN;
int16_t x783 = INT16_MAX;
static int32_t x788 = 0;
volatile int32_t t196 = -48094;
static int32_t x789 = INT32_MIN;
static uint16_t x790 = 20U;
uint32_t x796 = 241102U;
int64_t x799 = INT64_MAX;


void f0(void) {
    	int16_t x1 = -196;
	volatile uint32_t x3 = 85U;
	static int16_t x4 = -1;
	volatile int32_t t0 = -1;

    t0 = (((x1<=x2)!=x3)>x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x5 = INT64_MIN;
	volatile int8_t x6 = 1;
	int64_t x7 = -222452874LL;
	int8_t x8 = INT8_MAX;
	int32_t t1 = -139;

    t1 = (((x5<=x6)!=x7)>x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint64_t x9 = UINT64_MAX;
	int64_t x10 = -214523LL;
	uint16_t x11 = 16541U;
	volatile int32_t t2 = -265456;

    t2 = (((x9<=x10)!=x11)>x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x14 = -20765983421404LL;
	uint64_t x15 = 195LLU;
	volatile int32_t t3 = -1035361;

    t3 = (((x13<=x14)!=x15)>x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = INT32_MAX;
	uint16_t x18 = UINT16_MAX;
	int16_t x19 = 0;
	int64_t x20 = INT64_MAX;
	volatile int32_t t4 = 9766727;

    t4 = (((x17<=x18)!=x19)>x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = UINT64_MAX;
	volatile int32_t x22 = INT32_MAX;
	int32_t x23 = INT32_MAX;
	int32_t x24 = INT32_MAX;
	volatile int32_t t5 = -476183;

    t5 = (((x21<=x22)!=x23)>x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x26 = INT8_MAX;
	volatile uint8_t x27 = 28U;
	int32_t x28 = INT32_MIN;
	static int32_t t6 = -17544904;

    t6 = (((x25<=x26)!=x27)>x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x30 = -1LL;
	volatile uint32_t x31 = UINT32_MAX;
	uint8_t x32 = 107U;
	int32_t t7 = 60920879;

    t7 = (((x29<=x30)!=x31)>x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MIN;
	static int32_t x34 = -1;
	int32_t x35 = -1;
	volatile int32_t x36 = INT32_MIN;

    t8 = (((x33<=x34)!=x35)>x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = 233;
	uint8_t x38 = 1U;
	int32_t x40 = INT32_MIN;
	int32_t t9 = 36088;

    t9 = (((x37<=x38)!=x39)>x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = -1;
	int8_t x42 = INT8_MIN;
	int32_t x43 = 374328;
	int32_t t10 = -2;

    t10 = (((x41<=x42)!=x43)>x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = -1;
	int64_t x46 = INT64_MAX;
	int8_t x48 = -1;
	int32_t t11 = 1;

    t11 = (((x45<=x46)!=x47)>x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x49 = 1U;
	int8_t x50 = -1;
	uint64_t x51 = 5867LLU;
	int32_t x52 = -6955;
	static volatile int32_t t12 = -5242875;

    t12 = (((x49<=x50)!=x51)>x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x53 = INT16_MAX;
	uint64_t x54 = 2210147828LLU;
	uint16_t x56 = UINT16_MAX;
	int32_t t13 = 6286138;

    t13 = (((x53<=x54)!=x55)>x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x57 = UINT64_MAX;
	static int64_t x58 = -1LL;
	int8_t x59 = INT8_MIN;
	int32_t x60 = -1;

    t14 = (((x57<=x58)!=x59)>x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = 414088070U;
	int64_t x62 = INT64_MIN;
	int8_t x63 = INT8_MAX;
	volatile int64_t x64 = INT64_MIN;
	volatile int32_t t15 = 0;

    t15 = (((x61<=x62)!=x63)>x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x65 = 786U;
	uint16_t x66 = 0U;
	uint8_t x67 = UINT8_MAX;
	int16_t x68 = -1107;
	volatile int32_t t16 = -114940129;

    t16 = (((x65<=x66)!=x67)>x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x69 = INT8_MIN;
	int32_t x70 = -1;
	volatile int8_t x71 = INT8_MIN;
	uint32_t x72 = UINT32_MAX;
	static volatile int32_t t17 = -1;

    t17 = (((x69<=x70)!=x71)>x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile int8_t x73 = INT8_MIN;
	int64_t x75 = INT64_MAX;
	int32_t t18 = 1778;

    t18 = (((x73<=x74)!=x75)>x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x77 = 2106517994047LLU;
	int16_t x78 = INT16_MIN;
	volatile int16_t x79 = 1549;
	uint16_t x80 = 16U;
	int32_t t19 = -1655;

    t19 = (((x77<=x78)!=x79)>x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint32_t x81 = 2586U;
	static int64_t x82 = -1LL;
	uint8_t x83 = 3U;
	volatile int64_t x84 = 198495LL;
	int32_t t20 = 14115;

    t20 = (((x81<=x82)!=x83)>x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int32_t x85 = -1;
	volatile uint32_t x88 = 3U;
	static int32_t t21 = 138;

    t21 = (((x85<=x86)!=x87)>x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint8_t x90 = UINT8_MAX;
	int16_t x91 = -1;
	static uint32_t x92 = UINT32_MAX;
	volatile int32_t t22 = -100620547;

    t22 = (((x89<=x90)!=x91)>x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = INT8_MAX;
	int32_t x95 = -1;
	uint32_t x96 = UINT32_MAX;
	int32_t t23 = 594689879;

    t23 = (((x93<=x94)!=x95)>x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint64_t x97 = UINT64_MAX;
	int8_t x98 = INT8_MAX;
	uint16_t x99 = 9277U;
	static int64_t x100 = INT64_MIN;
	int32_t t24 = -260795161;

    t24 = (((x97<=x98)!=x99)>x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x102 = -1LL;
	int8_t x104 = 3;
	volatile int32_t t25 = 163854;

    t25 = (((x101<=x102)!=x103)>x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = INT32_MIN;
	volatile int16_t x106 = 59;
	uint16_t x107 = UINT16_MAX;
	int32_t x108 = INT32_MIN;
	int32_t t26 = 4;

    t26 = (((x105<=x106)!=x107)>x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x109 = 26363957;
	uint8_t x110 = 0U;
	uint64_t x112 = 7812515LLU;
	volatile int32_t t27 = -48;

    t27 = (((x109<=x110)!=x111)>x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint32_t x113 = 92026882U;
	int64_t x114 = INT64_MIN;
	volatile int16_t x115 = -1;
	int64_t x116 = INT64_MIN;
	int32_t t28 = 6542727;

    t28 = (((x113<=x114)!=x115)>x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x117 = 41;
	uint16_t x118 = 358U;
	int32_t x119 = INT32_MIN;
	int16_t x120 = INT16_MAX;

    t29 = (((x117<=x118)!=x119)>x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = -1;
	int64_t x122 = INT64_MIN;
	int8_t x123 = INT8_MIN;
	uint64_t x124 = UINT64_MAX;

    t30 = (((x121<=x122)!=x123)>x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = INT8_MIN;
	static int8_t x126 = -3;
	static uint16_t x127 = 13602U;
	static uint8_t x128 = 79U;
	volatile int32_t t31 = 116;

    t31 = (((x125<=x126)!=x127)>x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x129 = UINT8_MAX;
	uint64_t x130 = UINT64_MAX;
	int8_t x131 = -1;
	static uint8_t x132 = 87U;
	static int32_t t32 = 271;

    t32 = (((x129<=x130)!=x131)>x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x133 = 31U;
	int64_t x134 = -1LL;
	int64_t x135 = INT64_MIN;
	static int8_t x136 = INT8_MIN;
	volatile int32_t t33 = -669966;

    t33 = (((x133<=x134)!=x135)>x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x138 = INT16_MIN;
	uint64_t x139 = UINT64_MAX;
	volatile int8_t x140 = -26;
	static int32_t t34 = -1258;

    t34 = (((x137<=x138)!=x139)>x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x141 = INT32_MIN;
	volatile int16_t x142 = -10;
	static volatile int16_t x143 = INT16_MAX;
	int8_t x144 = INT8_MAX;
	int32_t t35 = -647;

    t35 = (((x141<=x142)!=x143)>x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x145 = UINT64_MAX;
	uint8_t x146 = 10U;
	int16_t x148 = INT16_MAX;

    t36 = (((x145<=x146)!=x147)>x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x149 = INT32_MIN;
	static int32_t x150 = -1774943;
	volatile uint16_t x151 = UINT16_MAX;
	volatile int64_t x152 = -1LL;
	int32_t t37 = -106796277;

    t37 = (((x149<=x150)!=x151)>x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = INT8_MIN;
	volatile uint32_t x154 = 17U;
	int64_t x155 = 0LL;
	uint8_t x156 = 22U;
	int32_t t38 = -75230916;

    t38 = (((x153<=x154)!=x155)>x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = INT8_MAX;
	volatile int64_t x158 = INT64_MAX;
	static int32_t x160 = 27;

    t39 = (((x157<=x158)!=x159)>x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x161 = INT64_MAX;
	static uint32_t x162 = UINT32_MAX;
	static int8_t x163 = 1;
	static int8_t x164 = 5;
	volatile int32_t t40 = -42658897;

    t40 = (((x161<=x162)!=x163)>x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int16_t x165 = 0;
	int32_t x166 = 5692;
	int8_t x167 = -1;
	int64_t x168 = -1LL;
	static volatile int32_t t41 = 1486310;

    t41 = (((x165<=x166)!=x167)>x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x169 = INT64_MIN;
	int8_t x170 = INT8_MIN;
	int32_t x171 = INT32_MIN;
	uint32_t x172 = 8017U;
	static int32_t t42 = 26;

    t42 = (((x169<=x170)!=x171)>x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint8_t x173 = 58U;
	static int32_t x174 = -1;
	int64_t x176 = -159617LL;
	int32_t t43 = 3726;

    t43 = (((x173<=x174)!=x175)>x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x177 = 1343U;
	uint32_t x179 = 476325U;
	int64_t x180 = 3LL;
	static int32_t t44 = 696;

    t44 = (((x177<=x178)!=x179)>x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = INT32_MAX;
	int64_t x182 = INT64_MIN;
	static int16_t x183 = -6;
	uint32_t x184 = UINT32_MAX;
	static volatile int32_t t45 = -2307716;

    t45 = (((x181<=x182)!=x183)>x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x186 = 1;
	int8_t x187 = -25;
	int64_t x188 = INT64_MIN;
	int32_t t46 = -2473173;

    t46 = (((x185<=x186)!=x187)>x188);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x189 = -1;
	uint16_t x190 = 0U;
	volatile int16_t x192 = -876;
	int32_t t47 = -131763979;

    t47 = (((x189<=x190)!=x191)>x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x193 = UINT16_MAX;
	static uint16_t x194 = UINT16_MAX;
	int16_t x195 = -1;
	int16_t x196 = 15;
	volatile int32_t t48 = -2593111;

    t48 = (((x193<=x194)!=x195)>x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x197 = -1;
	int8_t x199 = -1;
	volatile int16_t x200 = -327;
	static int32_t t49 = 3132678;

    t49 = (((x197<=x198)!=x199)>x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = INT8_MAX;
	volatile int32_t x202 = -1;
	volatile int64_t x203 = INT64_MAX;
	int64_t x204 = -67904949LL;
	int32_t t50 = -6046;

    t50 = (((x201<=x202)!=x203)>x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x205 = INT8_MAX;
	int16_t x206 = INT16_MAX;
	int8_t x207 = 20;
	uint8_t x208 = UINT8_MAX;
	static volatile int32_t t51 = 836049201;

    t51 = (((x205<=x206)!=x207)>x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x210 = INT32_MIN;
	static uint8_t x211 = 10U;
	static volatile uint16_t x212 = UINT16_MAX;
	int32_t t52 = -1;

    t52 = (((x209<=x210)!=x211)>x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = INT64_MIN;
	static uint16_t x214 = 1182U;
	int16_t x215 = 465;
	int8_t x216 = INT8_MAX;
	volatile int32_t t53 = 2;

    t53 = (((x213<=x214)!=x215)>x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = -60;
	static volatile uint32_t x218 = 3182U;
	volatile int32_t x219 = -1;
	static int32_t t54 = -7585117;

    t54 = (((x217<=x218)!=x219)>x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x221 = UINT32_MAX;
	volatile uint32_t x222 = 4171055U;
	int32_t x223 = INT32_MIN;
	uint8_t x224 = 46U;
	int32_t t55 = -82623;

    t55 = (((x221<=x222)!=x223)>x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x225 = INT32_MIN;
	uint16_t x226 = 11569U;
	int16_t x227 = 379;
	int16_t x228 = -31;

    t56 = (((x225<=x226)!=x227)>x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = 10059308976LL;
	int16_t x230 = INT16_MIN;
	int8_t x231 = -1;
	volatile int32_t t57 = -3025852;

    t57 = (((x229<=x230)!=x231)>x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x233 = INT16_MIN;
	int64_t x234 = INT64_MAX;
	int64_t x236 = -55129478431LL;
	int32_t t58 = 3117;

    t58 = (((x233<=x234)!=x235)>x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x237 = INT32_MIN;
	uint64_t x238 = 2545005LLU;
	uint32_t x239 = 2820U;
	static volatile int32_t t59 = 0;

    t59 = (((x237<=x238)!=x239)>x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x242 = -1;
	volatile int16_t x243 = INT16_MIN;
	volatile int16_t x244 = -1;
	int32_t t60 = -9247641;

    t60 = (((x241<=x242)!=x243)>x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x246 = INT16_MIN;
	uint8_t x247 = UINT8_MAX;
	volatile int64_t x248 = INT64_MAX;

    t61 = (((x245<=x246)!=x247)>x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x249 = INT32_MIN;
	int64_t x252 = -1LL;

    t62 = (((x249<=x250)!=x251)>x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x253 = 0;
	uint8_t x254 = UINT8_MAX;
	static volatile int8_t x255 = 0;
	int64_t x256 = INT64_MAX;
	static int32_t t63 = 0;

    t63 = (((x253<=x254)!=x255)>x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x257 = 251U;
	volatile uint8_t x258 = 116U;
	int32_t x259 = 1305;
	static uint32_t x260 = 43982U;
	int32_t t64 = -1578;

    t64 = (((x257<=x258)!=x259)>x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x261 = -1;
	int8_t x262 = -30;
	int32_t x263 = -1;
	int16_t x264 = -1;
	volatile int32_t t65 = -51;

    t65 = (((x261<=x262)!=x263)>x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x265 = 197LLU;
	static int32_t x266 = -113;
	uint16_t x268 = 1U;

    t66 = (((x265<=x266)!=x267)>x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x269 = UINT8_MAX;
	int16_t x270 = INT16_MIN;
	uint32_t x271 = UINT32_MAX;
	static uint16_t x272 = 798U;
	volatile int32_t t67 = 2089;

    t67 = (((x269<=x270)!=x271)>x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint16_t x273 = UINT16_MAX;
	volatile int32_t x274 = -1;
	int32_t x275 = INT32_MAX;
	int8_t x276 = INT8_MIN;
	int32_t t68 = -15;

    t68 = (((x273<=x274)!=x275)>x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x277 = UINT16_MAX;
	uint16_t x278 = 5U;

    t69 = (((x277<=x278)!=x279)>x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x281 = UINT8_MAX;
	int64_t x282 = INT64_MIN;
	int16_t x283 = -1294;

    t70 = (((x281<=x282)!=x283)>x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x285 = 2U;
	volatile uint32_t x286 = 2001535U;
	uint8_t x287 = UINT8_MAX;
	uint16_t x288 = 2236U;
	int32_t t71 = 17535265;

    t71 = (((x285<=x286)!=x287)>x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x289 = INT16_MIN;
	int8_t x290 = INT8_MAX;
	int16_t x291 = INT16_MIN;
	uint8_t x292 = 83U;

    t72 = (((x289<=x290)!=x291)>x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x293 = 34U;
	int16_t x294 = -1;
	int8_t x295 = INT8_MIN;
	int64_t x296 = INT64_MIN;

    t73 = (((x293<=x294)!=x295)>x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x297 = 5609381847993967535LLU;
	uint16_t x298 = 1U;
	uint32_t x299 = 2003U;

    t74 = (((x297<=x298)!=x299)>x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x301 = 25300U;
	int16_t x303 = INT16_MIN;
	static uint16_t x304 = UINT16_MAX;
	volatile int32_t t75 = 83936;

    t75 = (((x301<=x302)!=x303)>x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = INT64_MIN;
	uint16_t x306 = 23948U;
	int16_t x307 = 1;
	int64_t x308 = INT64_MIN;
	int32_t t76 = -924;

    t76 = (((x305<=x306)!=x307)>x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = -1;
	uint8_t x311 = UINT8_MAX;
	static int16_t x312 = INT16_MIN;
	static int32_t t77 = -20;

    t77 = (((x309<=x310)!=x311)>x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x313 = UINT16_MAX;
	static int16_t x314 = -1;
	int8_t x315 = -1;
	int64_t x316 = -4LL;

    t78 = (((x313<=x314)!=x315)>x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x318 = 45787LL;
	int16_t x319 = -24;
	static volatile int32_t x320 = -42251010;
	static int32_t t79 = -5393;

    t79 = (((x317<=x318)!=x319)>x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x321 = -1;
	int64_t x322 = INT64_MIN;
	int32_t x323 = INT32_MIN;

    t80 = (((x321<=x322)!=x323)>x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = -1;
	static uint8_t x326 = 13U;
	int8_t x327 = INT8_MIN;

    t81 = (((x325<=x326)!=x327)>x328);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x329 = 40U;
	static int64_t x331 = INT64_MIN;
	uint16_t x332 = 8U;

    t82 = (((x329<=x330)!=x331)>x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x333 = UINT16_MAX;
	uint16_t x334 = UINT16_MAX;
	static uint16_t x336 = 0U;
	int32_t t83 = -7;

    t83 = (((x333<=x334)!=x335)>x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x338 = INT16_MIN;
	int64_t x339 = 114LL;
	int8_t x340 = INT8_MAX;
	int32_t t84 = 1985;

    t84 = (((x337<=x338)!=x339)>x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x342 = 39626336904LL;
	int8_t x344 = INT8_MIN;
	volatile int32_t t85 = -5;

    t85 = (((x341<=x342)!=x343)>x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x346 = INT32_MAX;
	int16_t x348 = 6;
	volatile int32_t t86 = 157361351;

    t86 = (((x345<=x346)!=x347)>x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x350 = UINT16_MAX;
	int8_t x351 = INT8_MIN;
	int32_t x352 = 23645844;
	int32_t t87 = -569380232;

    t87 = (((x349<=x350)!=x351)>x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile uint64_t x353 = 874280219LLU;
	static int32_t x355 = INT32_MIN;
	static volatile int32_t t88 = -39;

    t88 = (((x353<=x354)!=x355)>x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x357 = -3399537LL;
	static uint8_t x358 = 27U;
	int8_t x359 = -1;
	int8_t x360 = INT8_MIN;
	volatile int32_t t89 = -212;

    t89 = (((x357<=x358)!=x359)>x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x361 = UINT64_MAX;
	int8_t x362 = INT8_MAX;
	int16_t x363 = 34;

    t90 = (((x361<=x362)!=x363)>x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x365 = 0U;
	int64_t x366 = INT64_MIN;
	uint16_t x367 = UINT16_MAX;
	volatile int32_t x368 = -1;
	static int32_t t91 = 1104669;

    t91 = (((x365<=x366)!=x367)>x368);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x369 = UINT64_MAX;
	uint32_t x370 = 703285995U;
	int64_t x371 = -528624219271LL;
	uint32_t x372 = 6979U;
	volatile int32_t t92 = 1;

    t92 = (((x369<=x370)!=x371)>x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x373 = 496695;
	int32_t x374 = -41;
	volatile uint64_t x376 = 442LLU;
	volatile int32_t t93 = -13;

    t93 = (((x373<=x374)!=x375)>x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x377 = -1LL;
	int64_t x378 = -63LL;
	int8_t x379 = -1;
	int64_t x380 = -1LL;
	static volatile int32_t t94 = 98237;

    t94 = (((x377<=x378)!=x379)>x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x381 = INT16_MIN;
	int8_t x382 = -1;
	int8_t x384 = -17;

    t95 = (((x381<=x382)!=x383)>x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int8_t x385 = 0;
	volatile int8_t x386 = -3;
	volatile int64_t x387 = -1LL;
	int16_t x388 = INT16_MIN;
	volatile int32_t t96 = 101;

    t96 = (((x385<=x386)!=x387)>x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x390 = -1;
	int8_t x391 = INT8_MIN;
	int64_t x392 = -10017532535LL;

    t97 = (((x389<=x390)!=x391)>x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint64_t x393 = 66152894590032523LLU;
	uint32_t x395 = 1U;
	volatile int32_t t98 = -1;

    t98 = (((x393<=x394)!=x395)>x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x397 = 0U;
	int16_t x398 = -3896;
	int16_t x399 = 1;
	int8_t x400 = 5;
	int32_t t99 = 54218;

    t99 = (((x397<=x398)!=x399)>x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x402 = INT8_MIN;
	uint32_t x403 = 9396U;
	static uint8_t x404 = 25U;
	volatile int32_t t100 = 43;

    t100 = (((x401<=x402)!=x403)>x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x406 = INT16_MIN;
	uint8_t x407 = UINT8_MAX;
	static int32_t t101 = -140418532;

    t101 = (((x405<=x406)!=x407)>x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x410 = 252374;
	static int32_t x412 = -1;
	int32_t t102 = 757382512;

    t102 = (((x409<=x410)!=x411)>x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint32_t x413 = UINT32_MAX;
	static volatile int8_t x414 = 7;
	uint16_t x415 = 2293U;
	static int16_t x416 = 7871;
	volatile int32_t t103 = -7271530;

    t103 = (((x413<=x414)!=x415)>x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = 28;
	int32_t x419 = INT32_MAX;
	int16_t x420 = INT16_MAX;
	volatile int32_t t104 = -22;

    t104 = (((x417<=x418)!=x419)>x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x421 = -1;
	int16_t x422 = 208;
	int8_t x423 = -4;
	int32_t t105 = -1;

    t105 = (((x421<=x422)!=x423)>x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x426 = -108;
	int16_t x427 = -407;
	uint8_t x428 = UINT8_MAX;
	int32_t t106 = -887440904;

    t106 = (((x425<=x426)!=x427)>x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = -1LL;
	int16_t x430 = INT16_MAX;
	int32_t x431 = INT32_MIN;
	uint16_t x432 = 10689U;
	volatile int32_t t107 = -1718;

    t107 = (((x429<=x430)!=x431)>x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x433 = 0U;
	int32_t x434 = INT32_MIN;
	volatile int32_t t108 = -35;

    t108 = (((x433<=x434)!=x435)>x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = INT32_MIN;
	volatile int64_t x438 = -1LL;
	static int32_t t109 = 9888323;

    t109 = (((x437<=x438)!=x439)>x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int16_t x441 = INT16_MIN;
	int64_t x442 = -1LL;
	int64_t x443 = INT64_MAX;
	static int64_t x444 = 60116LL;
	int32_t t110 = 122329526;

    t110 = (((x441<=x442)!=x443)>x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x445 = 13U;
	int16_t x446 = INT16_MAX;
	volatile uint64_t x447 = UINT64_MAX;
	static int32_t t111 = -2;

    t111 = (((x445<=x446)!=x447)>x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x449 = INT64_MIN;
	uint16_t x450 = UINT16_MAX;
	int32_t x451 = INT32_MIN;
	static int32_t t112 = -16;

    t112 = (((x449<=x450)!=x451)>x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x454 = INT32_MIN;
	int16_t x455 = -1;
	int32_t x456 = INT32_MIN;

    t113 = (((x453<=x454)!=x455)>x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x457 = 0U;
	int32_t x458 = -47467;
	static int32_t x459 = 33;
	int32_t x460 = INT32_MAX;
	static volatile int32_t t114 = -1850;

    t114 = (((x457<=x458)!=x459)>x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x461 = 260759LLU;
	int32_t x462 = INT32_MAX;
	uint32_t x463 = 26U;
	int8_t x464 = 1;
	volatile int32_t t115 = -14792875;

    t115 = (((x461<=x462)!=x463)>x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x465 = INT32_MIN;
	int32_t x466 = INT32_MAX;
	uint32_t x467 = 3343U;
	volatile uint32_t x468 = UINT32_MAX;
	static volatile int32_t t116 = 227;

    t116 = (((x465<=x466)!=x467)>x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x469 = UINT16_MAX;
	volatile uint16_t x470 = 5U;
	uint32_t x471 = 68573881U;
	volatile int32_t t117 = 1065020;

    t117 = (((x469<=x470)!=x471)>x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x473 = UINT16_MAX;
	static uint16_t x475 = 135U;
	volatile uint16_t x476 = UINT16_MAX;
	static int32_t t118 = 2059349;

    t118 = (((x473<=x474)!=x475)>x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint8_t x477 = 1U;
	volatile uint8_t x478 = 30U;
	int64_t x479 = INT64_MIN;
	uint16_t x480 = 9U;
	volatile int32_t t119 = 48;

    t119 = (((x477<=x478)!=x479)>x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x481 = INT32_MAX;
	static int16_t x482 = INT16_MIN;
	uint32_t x483 = 120476U;
	uint64_t x484 = 171LLU;
	static volatile int32_t t120 = -126;

    t120 = (((x481<=x482)!=x483)>x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x485 = UINT64_MAX;
	int32_t x486 = INT32_MIN;
	uint64_t x487 = 6460212LLU;
	volatile int64_t x488 = 2003935148692949LL;

    t121 = (((x485<=x486)!=x487)>x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x490 = UINT16_MAX;
	volatile int32_t t122 = -1;

    t122 = (((x489<=x490)!=x491)>x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x493 = UINT32_MAX;
	int32_t x494 = 445829;
	int64_t x495 = INT64_MIN;
	int32_t x496 = -1;
	volatile int32_t t123 = 27680;

    t123 = (((x493<=x494)!=x495)>x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint64_t x497 = 14LLU;
	static uint16_t x498 = 19U;
	int64_t x500 = -1LL;
	volatile int32_t t124 = -247577;

    t124 = (((x497<=x498)!=x499)>x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x503 = 1U;
	int64_t x504 = -549419910162448LL;
	static volatile int32_t t125 = 1512;

    t125 = (((x501<=x502)!=x503)>x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x505 = UINT16_MAX;
	volatile int32_t x506 = INT32_MAX;
	volatile int64_t x507 = -38981286590611LL;
	int32_t t126 = -17;

    t126 = (((x505<=x506)!=x507)>x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x509 = 349227914LLU;
	uint8_t x510 = UINT8_MAX;
	int16_t x511 = -2;
	int8_t x512 = -1;
	volatile int32_t t127 = 360;

    t127 = (((x509<=x510)!=x511)>x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x515 = 5190908;
	int64_t x516 = INT64_MIN;

    t128 = (((x513<=x514)!=x515)>x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x517 = 1U;
	int8_t x518 = INT8_MIN;
	int32_t t129 = 40632098;

    t129 = (((x517<=x518)!=x519)>x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x523 = INT32_MAX;
	static int32_t x524 = -829475;
	int32_t t130 = 236108041;

    t130 = (((x521<=x522)!=x523)>x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x525 = -1;
	uint32_t x526 = UINT32_MAX;
	int32_t x527 = INT32_MIN;
	volatile uint16_t x528 = 0U;
	int32_t t131 = -127;

    t131 = (((x525<=x526)!=x527)>x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x529 = UINT16_MAX;
	int8_t x532 = INT8_MIN;
	volatile int32_t t132 = -2433;

    t132 = (((x529<=x530)!=x531)>x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x535 = INT64_MAX;
	static volatile int16_t x536 = -1;
	int32_t t133 = 434155;

    t133 = (((x533<=x534)!=x535)>x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile uint16_t x537 = 15U;
	static uint64_t x538 = 14907373394LLU;
	volatile uint32_t x539 = 1479919663U;
	int32_t x540 = INT32_MAX;
	static int32_t t134 = 57;

    t134 = (((x537<=x538)!=x539)>x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x542 = INT32_MAX;
	int16_t x543 = -1129;
	static uint32_t x544 = 0U;
	int32_t t135 = 232;

    t135 = (((x541<=x542)!=x543)>x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x545 = -2;
	int64_t x546 = INT64_MIN;
	uint64_t x547 = 1017059507023250LLU;
	volatile uint64_t x548 = 2438757930561001385LLU;
	int32_t t136 = -50871070;

    t136 = (((x545<=x546)!=x547)>x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x551 = INT32_MAX;
	volatile int16_t x552 = -1839;
	static int32_t t137 = 442815963;

    t137 = (((x549<=x550)!=x551)>x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x553 = 0U;
	int16_t x554 = INT16_MAX;
	int16_t x555 = -163;
	volatile uint64_t x556 = 4068936736808676LLU;

    t138 = (((x553<=x554)!=x555)>x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint8_t x557 = UINT8_MAX;
	volatile int8_t x558 = -1;
	static int64_t x559 = INT64_MAX;
	int8_t x560 = 0;
	volatile int32_t t139 = -2466;

    t139 = (((x557<=x558)!=x559)>x560);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x561 = INT64_MIN;
	int64_t x562 = -1LL;
	volatile int32_t x563 = INT32_MIN;
	volatile int64_t x564 = -1LL;
	volatile int32_t t140 = 159;

    t140 = (((x561<=x562)!=x563)>x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x565 = INT64_MAX;
	int64_t x566 = 116705571649365648LL;
	uint8_t x567 = UINT8_MAX;
	int8_t x568 = INT8_MAX;
	volatile int32_t t141 = -7565142;

    t141 = (((x565<=x566)!=x567)>x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x569 = -10797;
	int8_t x570 = -1;
	int32_t x571 = INT32_MAX;
	int32_t x572 = INT32_MAX;
	int32_t t142 = 4;

    t142 = (((x569<=x570)!=x571)>x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x573 = INT8_MIN;
	volatile int8_t x574 = -1;
	volatile int64_t x576 = INT64_MAX;
	volatile int32_t t143 = -368;

    t143 = (((x573<=x574)!=x575)>x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint64_t x577 = UINT64_MAX;
	static int64_t x578 = 12014792469LL;
	static volatile uint32_t x579 = 3U;
	volatile int32_t t144 = -54926093;

    t144 = (((x577<=x578)!=x579)>x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x581 = 2U;
	int16_t x583 = INT16_MAX;
	int16_t x584 = 460;
	volatile int32_t t145 = -51;

    t145 = (((x581<=x582)!=x583)>x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x585 = 0;
	uint8_t x586 = UINT8_MAX;
	volatile int64_t x587 = 0LL;
	static uint8_t x588 = 75U;
	int32_t t146 = 1;

    t146 = (((x585<=x586)!=x587)>x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x589 = INT16_MAX;
	volatile int16_t x590 = 3568;
	int16_t x591 = -1;
	uint16_t x592 = 309U;
	volatile int32_t t147 = 57154;

    t147 = (((x589<=x590)!=x591)>x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x595 = -1;
	uint8_t x596 = UINT8_MAX;
	int32_t t148 = -51873983;

    t148 = (((x593<=x594)!=x595)>x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x597 = 0U;
	static int8_t x598 = INT8_MAX;
	int8_t x599 = -3;
	volatile int16_t x600 = INT16_MIN;
	static int32_t t149 = -390;

    t149 = (((x597<=x598)!=x599)>x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x601 = 12847345U;
	int64_t x602 = INT64_MIN;
	static int16_t x603 = INT16_MAX;
	int32_t x604 = INT32_MIN;
	static volatile int32_t t150 = 72309961;

    t150 = (((x601<=x602)!=x603)>x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = -1590790;
	static volatile int16_t x606 = INT16_MIN;
	static int16_t x607 = INT16_MIN;
	int32_t t151 = -125279;

    t151 = (((x605<=x606)!=x607)>x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x609 = INT8_MIN;
	static volatile int64_t x610 = -41LL;
	static int16_t x611 = 5862;
	uint64_t x612 = 136798097554LLU;
	volatile int32_t t152 = -6223193;

    t152 = (((x609<=x610)!=x611)>x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x613 = -3;
	static int32_t x614 = -2540;
	uint16_t x615 = 7U;
	int16_t x616 = -1;
	int32_t t153 = 6;

    t153 = (((x613<=x614)!=x615)>x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x617 = 35U;
	uint8_t x618 = UINT8_MAX;
	int32_t t154 = 532;

    t154 = (((x617<=x618)!=x619)>x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int16_t x621 = INT16_MIN;
	int16_t x622 = -1;
	int32_t x623 = -3621;
	uint32_t x624 = 6U;
	volatile int32_t t155 = -318;

    t155 = (((x621<=x622)!=x623)>x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x626 = -2;
	uint16_t x627 = UINT16_MAX;
	int8_t x628 = -1;
	static volatile int32_t t156 = 1195;

    t156 = (((x625<=x626)!=x627)>x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x629 = -405570;
	volatile int64_t x630 = INT64_MIN;
	volatile int8_t x631 = INT8_MIN;
	int64_t x632 = INT64_MIN;
	volatile int32_t t157 = -149094569;

    t157 = (((x629<=x630)!=x631)>x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x633 = -1;
	uint16_t x634 = UINT16_MAX;
	int64_t x635 = INT64_MAX;
	uint64_t x636 = 24445028087119LLU;
	volatile int32_t t158 = 14824;

    t158 = (((x633<=x634)!=x635)>x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x637 = -1LL;
	int8_t x639 = INT8_MIN;
	int32_t t159 = -1463;

    t159 = (((x637<=x638)!=x639)>x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint32_t x641 = 100U;
	int64_t x642 = INT64_MAX;
	static int16_t x643 = INT16_MIN;
	int8_t x644 = -14;
	volatile int32_t t160 = 1569;

    t160 = (((x641<=x642)!=x643)>x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint64_t x646 = 4207784389214877763LLU;
	uint32_t x647 = 7U;

    t161 = (((x645<=x646)!=x647)>x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = -1LL;
	static int32_t x650 = INT32_MAX;
	int64_t x651 = -31328207910004LL;
	static int16_t x652 = -1;
	volatile int32_t t162 = -13435929;

    t162 = (((x649<=x650)!=x651)>x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x653 = 2U;
	int16_t x654 = 0;
	volatile int16_t x655 = -5603;

    t163 = (((x653<=x654)!=x655)>x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x657 = 191755;
	uint16_t x658 = 17U;
	uint64_t x659 = 25157139LLU;
	volatile uint32_t x660 = 468077380U;

    t164 = (((x657<=x658)!=x659)>x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x662 = -5;
	volatile int8_t x663 = INT8_MAX;
	uint64_t x664 = UINT64_MAX;
	static volatile int32_t t165 = 49;

    t165 = (((x661<=x662)!=x663)>x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x665 = INT32_MAX;
	int32_t x667 = INT32_MIN;
	uint16_t x668 = 2652U;
	int32_t t166 = -761127;

    t166 = (((x665<=x666)!=x667)>x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x669 = INT8_MIN;
	volatile uint64_t x671 = UINT64_MAX;
	static volatile int32_t t167 = 1;

    t167 = (((x669<=x670)!=x671)>x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x673 = -1LL;
	static int8_t x676 = INT8_MIN;
	static volatile int32_t t168 = -3286;

    t168 = (((x673<=x674)!=x675)>x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x677 = UINT32_MAX;
	int32_t x678 = INT32_MAX;
	static uint32_t x679 = 142287006U;
	int8_t x680 = -1;
	static int32_t t169 = 57602;

    t169 = (((x677<=x678)!=x679)>x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x682 = UINT32_MAX;
	static volatile uint16_t x684 = UINT16_MAX;
	int32_t t170 = -43006;

    t170 = (((x681<=x682)!=x683)>x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x685 = INT8_MIN;
	static uint16_t x686 = 2169U;
	int16_t x687 = INT16_MAX;
	volatile int64_t x688 = -1986626443340LL;
	volatile int32_t t171 = 4262349;

    t171 = (((x685<=x686)!=x687)>x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x689 = INT32_MIN;
	static int32_t x690 = INT32_MIN;
	int32_t x692 = 0;
	int32_t t172 = 12;

    t172 = (((x689<=x690)!=x691)>x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = -1;
	int16_t x694 = -1;
	volatile int64_t x695 = -1LL;
	int32_t x696 = -809140;
	int32_t t173 = -7;

    t173 = (((x693<=x694)!=x695)>x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = -1;
	int16_t x698 = -3;
	uint32_t x699 = 818U;
	uint32_t x700 = 718U;
	static int32_t t174 = -27;

    t174 = (((x697<=x698)!=x699)>x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint8_t x701 = 11U;
	int32_t x702 = -1;
	uint8_t x704 = UINT8_MAX;
	int32_t t175 = -4964386;

    t175 = (((x701<=x702)!=x703)>x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = -1;
	int64_t x706 = -521136144445LL;
	static uint32_t x708 = 1126791U;
	int32_t t176 = 0;

    t176 = (((x705<=x706)!=x707)>x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = INT16_MIN;
	static uint8_t x710 = 39U;
	volatile int32_t t177 = 33846;

    t177 = (((x709<=x710)!=x711)>x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x713 = INT64_MAX;
	int8_t x714 = 2;
	int8_t x715 = -1;
	uint16_t x716 = 0U;

    t178 = (((x713<=x714)!=x715)>x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x717 = INT8_MIN;
	volatile uint16_t x718 = 17570U;
	uint16_t x719 = 754U;
	int16_t x720 = 0;

    t179 = (((x717<=x718)!=x719)>x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x721 = 47;
	uint64_t x722 = 3121445060LLU;
	int64_t x723 = -14305008609570242LL;
	static volatile uint8_t x724 = UINT8_MAX;
	volatile int32_t t180 = 887921737;

    t180 = (((x721<=x722)!=x723)>x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint32_t x725 = 316885747U;
	volatile int32_t x726 = INT32_MAX;
	int64_t x727 = INT64_MIN;
	uint16_t x728 = 1529U;
	int32_t t181 = -631274410;

    t181 = (((x725<=x726)!=x727)>x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x729 = 47103398U;
	int32_t x730 = -1;
	static int64_t x731 = INT64_MAX;
	int64_t x732 = INT64_MIN;

    t182 = (((x729<=x730)!=x731)>x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint64_t x733 = 1115521LLU;
	int8_t x734 = INT8_MIN;
	int64_t x735 = INT64_MIN;
	static uint16_t x736 = UINT16_MAX;
	volatile int32_t t183 = 1;

    t183 = (((x733<=x734)!=x735)>x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x737 = 1;
	int32_t x738 = 10;
	uint16_t x739 = 371U;

    t184 = (((x737<=x738)!=x739)>x740);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int16_t x742 = INT16_MIN;
	int64_t x743 = INT64_MIN;
	int16_t x744 = INT16_MAX;
	int32_t t185 = 64;

    t185 = (((x741<=x742)!=x743)>x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint64_t x745 = 47LLU;
	static int32_t x746 = 35;
	int64_t x747 = -3873921391LL;
	int64_t x748 = -1LL;

    t186 = (((x745<=x746)!=x747)>x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint64_t x749 = UINT64_MAX;
	int16_t x750 = 920;
	uint8_t x751 = UINT8_MAX;
	uint8_t x752 = 0U;
	int32_t t187 = -64;

    t187 = (((x749<=x750)!=x751)>x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x753 = INT64_MIN;
	int8_t x754 = 0;
	int8_t x755 = INT8_MAX;
	uint16_t x756 = 51U;
	int32_t t188 = 6249;

    t188 = (((x753<=x754)!=x755)>x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x757 = INT16_MIN;
	int16_t x758 = 5;
	volatile int32_t t189 = -456;

    t189 = (((x757<=x758)!=x759)>x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x761 = 2078212973537799823LLU;
	volatile int8_t x762 = INT8_MAX;
	uint8_t x764 = 22U;
	int32_t t190 = 833604326;

    t190 = (((x761<=x762)!=x763)>x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x766 = INT8_MIN;
	uint32_t x768 = 320473146U;
	volatile int32_t t191 = -306499;

    t191 = (((x765<=x766)!=x767)>x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x769 = 7;
	uint64_t x771 = 40578894LLU;
	volatile uint8_t x772 = UINT8_MAX;
	int32_t t192 = -415636672;

    t192 = (((x769<=x770)!=x771)>x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x773 = 110;
	static int32_t x775 = INT32_MIN;
	volatile int32_t x776 = 18940;
	static volatile int32_t t193 = -661187081;

    t193 = (((x773<=x774)!=x775)>x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = -1;
	static int8_t x778 = 0;
	int16_t x779 = -1;
	volatile int32_t t194 = -1660884;

    t194 = (((x777<=x778)!=x779)>x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x781 = UINT16_MAX;
	volatile int32_t x782 = INT32_MIN;
	static int8_t x784 = INT8_MIN;
	volatile int32_t t195 = 1;

    t195 = (((x781<=x782)!=x783)>x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = INT64_MIN;
	volatile int16_t x786 = INT16_MIN;
	uint32_t x787 = UINT32_MAX;

    t196 = (((x785<=x786)!=x787)>x788);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x791 = -15423014LL;
	int8_t x792 = INT8_MAX;
	int32_t t197 = -2013249;

    t197 = (((x789<=x790)!=x791)>x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x793 = INT64_MIN;
	int64_t x794 = INT64_MAX;
	static int64_t x795 = -1LL;
	volatile int32_t t198 = 79210;

    t198 = (((x793<=x794)!=x795)>x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x797 = 1731LLU;
	uint8_t x798 = 0U;
	int64_t x800 = INT64_MIN;
	volatile int32_t t199 = -374690;

    t199 = (((x797<=x798)!=x799)>x800);

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

