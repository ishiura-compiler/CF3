
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

int32_t x2 = 15230030;
uint64_t x3 = UINT64_MAX;
int16_t x10 = INT16_MIN;
uint64_t x12 = 127565152995007618LLU;
int32_t t2 = 31;
uint16_t x25 = UINT16_MAX;
volatile uint16_t x26 = 1359U;
volatile uint32_t x27 = 1656874U;
int8_t x30 = -1;
int8_t x31 = INT8_MAX;
int32_t t7 = -3133632;
volatile int32_t t10 = 5724591;
volatile int32_t t11 = 1;
volatile int32_t x59 = INT32_MAX;
int64_t x62 = 164576585162LL;
uint16_t x63 = UINT16_MAX;
int32_t t13 = 26181;
int64_t x70 = INT64_MIN;
int16_t x73 = 326;
uint32_t x77 = 6751U;
uint8_t x86 = 45U;
volatile uint64_t x87 = 652783LLU;
static volatile int32_t x89 = -4;
int16_t x92 = INT16_MIN;
volatile uint32_t x93 = 880U;
int64_t x99 = INT64_MIN;
int16_t x108 = INT16_MIN;
int16_t x109 = 301;
static uint64_t x114 = 305464284071333LLU;
volatile int32_t t27 = -315756808;
volatile int32_t t28 = 46917588;
int32_t x144 = INT32_MIN;
static int32_t x162 = -169188129;
uint8_t x170 = UINT8_MAX;
int8_t x171 = 4;
int32_t t35 = 542217055;
volatile int64_t x177 = 34496158LL;
int16_t x182 = INT16_MIN;
volatile int32_t x195 = -1;
volatile uint32_t x202 = UINT32_MAX;
static int64_t x204 = 397LL;
uint8_t x205 = 27U;
static volatile uint32_t x206 = 8300248U;
uint64_t x208 = 6818945482396841LLU;
volatile int32_t t44 = 63;
int8_t x210 = INT8_MAX;
uint32_t x211 = 202172606U;
uint16_t x218 = UINT16_MAX;
uint8_t x220 = UINT8_MAX;
int64_t x221 = -23470055676LL;
int8_t x226 = INT8_MIN;
static int64_t x233 = INT64_MAX;
int8_t x242 = -1;
volatile int8_t x244 = 0;
int8_t x245 = 15;
int64_t x246 = 129LL;
int64_t x248 = INT64_MAX;
int8_t x254 = -1;
static int64_t x256 = -7615057514LL;
int32_t t56 = 12;
int8_t x262 = INT8_MIN;
int32_t t58 = 2218;
volatile int16_t x268 = -3;
static uint64_t x275 = 2950890336939247904LLU;
int32_t t60 = -12;
uint8_t x291 = UINT8_MAX;
static int16_t x293 = 52;
uint8_t x305 = 99U;
volatile uint16_t x306 = 1120U;
int8_t x312 = -18;
uint16_t x315 = UINT16_MAX;
int16_t x322 = INT16_MAX;
volatile int32_t t73 = -30249516;
uint16_t x334 = UINT16_MAX;
static uint16_t x346 = 6U;
int8_t x347 = -1;
uint8_t x352 = UINT8_MAX;
int8_t x357 = 1;
uint16_t x384 = 20996U;
int64_t x392 = -1LL;
volatile int32_t t86 = -11938164;
volatile int32_t t88 = -1872502;
volatile uint16_t x405 = UINT16_MAX;
uint8_t x408 = 12U;
int32_t x410 = -1;
static int32_t x414 = 407267823;
static volatile int64_t x415 = INT64_MIN;
uint32_t x420 = UINT32_MAX;
static volatile int32_t t92 = 42537;
int32_t x425 = INT32_MIN;
uint64_t x433 = 3299LLU;
volatile int32_t t97 = -28773930;
static int32_t x454 = 155;
volatile int32_t t100 = -303;
uint8_t x463 = UINT8_MAX;
int32_t t101 = -2222;
uint8_t x469 = UINT8_MAX;
static volatile int16_t x471 = 1;
uint32_t x474 = 174211933U;
int32_t t104 = 480021399;
volatile int32_t t107 = -297594;
uint8_t x495 = 0U;
int16_t x505 = INT16_MIN;
static volatile int16_t x509 = INT16_MAX;
volatile int32_t x511 = INT32_MIN;
uint16_t x513 = 34U;
uint64_t x520 = 9634358622645391LLU;
uint64_t x524 = 175LLU;
uint8_t x525 = 2U;
int64_t x528 = INT64_MAX;
volatile int16_t x533 = -2;
int32_t x542 = 2;
int64_t x544 = 24LL;
uint16_t x545 = 10U;
static int32_t t120 = 31;
int32_t x554 = 1913729;
uint16_t x563 = UINT16_MAX;
volatile int32_t t124 = -3625573;
static int64_t x567 = INT64_MIN;
int8_t x569 = -1;
int32_t t127 = -494441267;
static int16_t x581 = -1;
int64_t x593 = INT64_MIN;
volatile int8_t x599 = INT8_MAX;
uint8_t x604 = UINT8_MAX;
int16_t x617 = 13;
volatile int32_t x619 = INT32_MIN;
int8_t x620 = INT8_MIN;
volatile int32_t t138 = 7865;
int64_t x629 = 1014LL;
uint32_t x631 = 7249798U;
volatile int32_t t140 = -2445711;
int32_t x633 = 28397;
volatile int16_t x636 = 0;
uint16_t x637 = 4U;
uint32_t x644 = 1480U;
uint64_t x650 = 116LLU;
int32_t x651 = -99;
volatile int64_t x652 = -24LL;
static int64_t x669 = -1LL;
static int64_t x679 = INT64_MIN;
int64_t x682 = -1LL;
uint16_t x684 = 681U;
int32_t x688 = 0;
int8_t x695 = INT8_MIN;
volatile int32_t t154 = 400121;
volatile int64_t x703 = -1LL;
static int8_t x710 = INT8_MIN;
int8_t x711 = 0;
int8_t x719 = -1;
int8_t x734 = INT8_MIN;
volatile int32_t t161 = -12198241;
static int8_t x739 = INT8_MIN;
int32_t t162 = 1477;
volatile int32_t t163 = 13032285;
uint8_t x751 = 13U;
static volatile int16_t x758 = -1;
uint16_t x759 = 287U;
int16_t x762 = 52;
uint32_t x767 = 57477844U;
int64_t x769 = -37LL;
static int16_t x771 = INT16_MAX;
static int8_t x774 = INT8_MIN;
volatile int32_t x778 = INT32_MIN;
static uint64_t x779 = 2419267640050321LLU;
int32_t t171 = 153046321;
int8_t x784 = INT8_MIN;
static int64_t x795 = INT64_MIN;
int8_t x805 = -1;
static uint8_t x809 = 45U;
volatile int64_t x810 = -1LL;
int16_t x811 = INT16_MIN;
volatile int32_t x812 = -31;
int16_t x813 = INT16_MIN;
int8_t x817 = INT8_MIN;
uint8_t x820 = UINT8_MAX;
static int16_t x821 = INT16_MIN;
int64_t x824 = INT64_MAX;
int16_t x830 = -3194;
int32_t t183 = 141935920;
int8_t x833 = 0;
static uint8_t x837 = 1U;
int32_t x839 = INT32_MAX;
int8_t x840 = INT8_MIN;
uint64_t x844 = 46556936066464LLU;
int16_t x857 = 327;
static int8_t x860 = INT8_MIN;
volatile int32_t t191 = -1;
int64_t x870 = INT64_MIN;
int64_t x879 = 376482441128795675LL;
int32_t x882 = 311281195;
int8_t x893 = -48;
uint8_t x895 = 1U;
static int32_t x899 = 26566;
volatile int64_t x901 = INT64_MAX;
uint8_t x902 = UINT8_MAX;
int32_t t199 = -6;


void f0(void) {
    	int32_t x1 = 27778930;
	int16_t x4 = -1;
	volatile int32_t t0 = -9;

    t0 = (((x1-x2)&x3)>x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x5 = 30;
	uint32_t x6 = 19258U;
	int8_t x7 = 0;
	static uint32_t x8 = UINT32_MAX;
	int32_t t1 = -20727293;

    t1 = (((x5-x6)&x7)>x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x9 = -9;
	int16_t x11 = INT16_MIN;

    t2 = (((x9-x10)&x11)>x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = -1;
	int64_t x14 = INT64_MIN;
	int64_t x15 = INT64_MIN;
	static int8_t x16 = INT8_MIN;
	volatile int32_t t3 = 1;

    t3 = (((x13-x14)&x15)>x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int32_t x17 = INT32_MIN;
	int8_t x18 = INT8_MIN;
	uint64_t x19 = 6496767LLU;
	int64_t x20 = -1LL;
	int32_t t4 = 1205;

    t4 = (((x17-x18)&x19)>x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MAX;
	int16_t x22 = INT16_MIN;
	uint16_t x23 = 998U;
	volatile uint8_t x24 = UINT8_MAX;
	volatile int32_t t5 = -7;

    t5 = (((x21-x22)&x23)>x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x28 = 2U;
	volatile int32_t t6 = -17588;

    t6 = (((x25-x26)&x27)>x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = 3586370719LLU;
	volatile int64_t x32 = 21306LL;

    t7 = (((x29-x30)&x31)>x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x33 = -1;
	int32_t x34 = 6009;
	static int64_t x35 = -10035LL;
	uint8_t x36 = 9U;
	static int32_t t8 = -1527;

    t8 = (((x33-x34)&x35)>x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x41 = 2;
	int16_t x42 = -12;
	int64_t x43 = 20293LL;
	uint64_t x44 = UINT64_MAX;
	volatile int32_t t9 = 301;

    t9 = (((x41-x42)&x43)>x44);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x49 = INT32_MIN;
	volatile int64_t x50 = -1LL;
	volatile int8_t x51 = -54;
	volatile int16_t x52 = INT16_MIN;

    t10 = (((x49-x50)&x51)>x52);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x53 = UINT16_MAX;
	static int8_t x54 = -1;
	volatile int64_t x55 = 991912925283363LL;
	static volatile int16_t x56 = INT16_MIN;

    t11 = (((x53-x54)&x55)>x56);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint64_t x57 = 2LLU;
	static uint64_t x58 = 2324442627LLU;
	volatile int32_t x60 = INT32_MAX;
	int32_t t12 = -3748;

    t12 = (((x57-x58)&x59)>x60);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x61 = INT8_MIN;
	uint32_t x64 = UINT32_MAX;

    t13 = (((x61-x62)&x63)>x64);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x65 = INT16_MAX;
	uint32_t x66 = 2639364U;
	int16_t x67 = INT16_MIN;
	int32_t x68 = -1;
	volatile int32_t t14 = 10344;

    t14 = (((x65-x66)&x67)>x68);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x69 = INT32_MIN;
	uint8_t x71 = UINT8_MAX;
	int32_t x72 = INT32_MIN;
	int32_t t15 = -460;

    t15 = (((x69-x70)&x71)>x72);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x74 = -1;
	int64_t x75 = -6446295LL;
	int16_t x76 = -1;
	volatile int32_t t16 = -1868111;

    t16 = (((x73-x74)&x75)>x76);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x78 = 81U;
	static uint8_t x79 = 120U;
	static volatile uint32_t x80 = 1585U;
	int32_t t17 = 0;

    t17 = (((x77-x78)&x79)>x80);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x85 = 12U;
	volatile uint64_t x88 = UINT64_MAX;
	int32_t t18 = 0;

    t18 = (((x85-x86)&x87)>x88);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x90 = 12U;
	static int16_t x91 = -1;
	volatile int32_t t19 = 334778;

    t19 = (((x89-x90)&x91)>x92);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x94 = 9460U;
	int16_t x95 = INT16_MIN;
	static int64_t x96 = INT64_MAX;
	volatile int32_t t20 = 3;

    t20 = (((x93-x94)&x95)>x96);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x97 = 61165181LL;
	uint64_t x98 = 49029LLU;
	volatile int64_t x100 = INT64_MAX;
	int32_t t21 = -58526;

    t21 = (((x97-x98)&x99)>x100);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x101 = 4060U;
	volatile int16_t x102 = INT16_MAX;
	static uint8_t x103 = 3U;
	int64_t x104 = -46414798656LL;
	volatile int32_t t22 = 166;

    t22 = (((x101-x102)&x103)>x104);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x105 = -1326;
	static volatile int16_t x106 = INT16_MIN;
	uint64_t x107 = 622899186275171954LLU;
	static volatile int32_t t23 = -1772411;

    t23 = (((x105-x106)&x107)>x108);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x110 = -1;
	int16_t x111 = INT16_MAX;
	uint32_t x112 = 7U;
	volatile int32_t t24 = -56521;

    t24 = (((x109-x110)&x111)>x112);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x113 = -50;
	uint32_t x115 = 128U;
	static int32_t x116 = INT32_MAX;
	static int32_t t25 = 20;

    t25 = (((x113-x114)&x115)>x116);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x117 = UINT64_MAX;
	uint32_t x118 = 60779U;
	int8_t x119 = -1;
	int8_t x120 = INT8_MIN;
	int32_t t26 = 6535;

    t26 = (((x117-x118)&x119)>x120);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x121 = 833U;
	int32_t x122 = 226971;
	int32_t x123 = INT32_MIN;
	int16_t x124 = INT16_MIN;

    t27 = (((x121-x122)&x123)>x124);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x133 = -805463;
	volatile uint8_t x134 = UINT8_MAX;
	int64_t x135 = 165190515071041LL;
	volatile int8_t x136 = INT8_MIN;

    t28 = (((x133-x134)&x135)>x136);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x137 = UINT64_MAX;
	volatile int8_t x138 = 2;
	int32_t x139 = 7675;
	int8_t x140 = INT8_MIN;
	static int32_t t29 = 17851;

    t29 = (((x137-x138)&x139)>x140);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint64_t x141 = UINT64_MAX;
	int64_t x142 = INT64_MIN;
	int64_t x143 = INT64_MAX;
	int32_t t30 = 63727279;

    t30 = (((x141-x142)&x143)>x144);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x149 = -2026LL;
	static int16_t x150 = INT16_MIN;
	int8_t x151 = 0;
	static uint16_t x152 = 1U;
	static int32_t t31 = 1784;

    t31 = (((x149-x150)&x151)>x152);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x157 = 1346026557LL;
	volatile int8_t x158 = INT8_MIN;
	int16_t x159 = 1;
	uint64_t x160 = UINT64_MAX;
	static int32_t t32 = -5;

    t32 = (((x157-x158)&x159)>x160);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x161 = -1;
	volatile int16_t x163 = 2;
	volatile int16_t x164 = -1;
	int32_t t33 = -413;

    t33 = (((x161-x162)&x163)>x164);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x165 = 19661U;
	uint16_t x166 = 4U;
	volatile int64_t x167 = INT64_MIN;
	static int64_t x168 = INT64_MIN;
	int32_t t34 = 147058;

    t34 = (((x165-x166)&x167)>x168);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x169 = INT8_MAX;
	int8_t x172 = INT8_MIN;

    t35 = (((x169-x170)&x171)>x172);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x173 = INT16_MAX;
	static volatile int32_t x174 = -1;
	int16_t x175 = -1;
	int8_t x176 = INT8_MIN;
	int32_t t36 = 1299;

    t36 = (((x173-x174)&x175)>x176);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x178 = -27599213550LL;
	int32_t x179 = -1;
	int32_t x180 = -5893;
	int32_t t37 = -6262513;

    t37 = (((x177-x178)&x179)>x180);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x181 = INT8_MIN;
	uint16_t x183 = UINT16_MAX;
	uint32_t x184 = 20762364U;
	volatile int32_t t38 = 688;

    t38 = (((x181-x182)&x183)>x184);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x185 = -1;
	static uint32_t x186 = 0U;
	int64_t x187 = -1LL;
	int64_t x188 = -1LL;
	volatile int32_t t39 = 1;

    t39 = (((x185-x186)&x187)>x188);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint8_t x189 = 10U;
	uint64_t x190 = 874LLU;
	uint32_t x191 = 0U;
	int16_t x192 = -5;
	int32_t t40 = -2189;

    t40 = (((x189-x190)&x191)>x192);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x193 = -1;
	int16_t x194 = INT16_MIN;
	uint64_t x196 = 0LLU;
	int32_t t41 = 918;

    t41 = (((x193-x194)&x195)>x196);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x197 = -112;
	int32_t x198 = -21004299;
	static uint16_t x199 = UINT16_MAX;
	uint64_t x200 = UINT64_MAX;
	volatile int32_t t42 = -962949230;

    t42 = (((x197-x198)&x199)>x200);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x201 = 9;
	volatile uint8_t x203 = UINT8_MAX;
	static volatile int32_t t43 = 3;

    t43 = (((x201-x202)&x203)>x204);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x207 = 5U;

    t44 = (((x205-x206)&x207)>x208);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x209 = INT16_MIN;
	int16_t x212 = -1;
	volatile int32_t t45 = 1559888;

    t45 = (((x209-x210)&x211)>x212);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile uint64_t x213 = UINT64_MAX;
	int16_t x214 = -1;
	int8_t x215 = INT8_MIN;
	uint32_t x216 = UINT32_MAX;
	volatile int32_t t46 = -5800369;

    t46 = (((x213-x214)&x215)>x216);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x217 = -163874LL;
	int8_t x219 = INT8_MIN;
	volatile int32_t t47 = 16460488;

    t47 = (((x217-x218)&x219)>x220);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x222 = INT64_MIN;
	int8_t x223 = -1;
	int64_t x224 = -285LL;
	volatile int32_t t48 = 3;

    t48 = (((x221-x222)&x223)>x224);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x225 = -1;
	uint8_t x227 = 0U;
	int16_t x228 = -1;
	static volatile int32_t t49 = -12508;

    t49 = (((x225-x226)&x227)>x228);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x229 = -43;
	static volatile int32_t x230 = INT32_MIN;
	uint16_t x231 = UINT16_MAX;
	int32_t x232 = INT32_MAX;
	int32_t t50 = 60016995;

    t50 = (((x229-x230)&x231)>x232);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x234 = UINT8_MAX;
	int8_t x235 = -1;
	static volatile int8_t x236 = -3;
	volatile int32_t t51 = -278606;

    t51 = (((x233-x234)&x235)>x236);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x237 = INT8_MIN;
	int8_t x238 = INT8_MAX;
	int64_t x239 = INT64_MIN;
	uint8_t x240 = UINT8_MAX;
	volatile int32_t t52 = 317161230;

    t52 = (((x237-x238)&x239)>x240);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint8_t x241 = UINT8_MAX;
	static uint64_t x243 = UINT64_MAX;
	volatile int32_t t53 = 4163721;

    t53 = (((x241-x242)&x243)>x244);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x247 = INT32_MIN;
	volatile int32_t t54 = 6943;

    t54 = (((x245-x246)&x247)>x248);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x249 = UINT64_MAX;
	int16_t x250 = INT16_MAX;
	static int8_t x251 = INT8_MAX;
	int32_t x252 = -236065340;
	volatile int32_t t55 = -7699;

    t55 = (((x249-x250)&x251)>x252);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x253 = -1;
	int16_t x255 = INT16_MIN;

    t56 = (((x253-x254)&x255)>x256);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x257 = UINT64_MAX;
	volatile int16_t x258 = -1;
	volatile int8_t x259 = 3;
	uint16_t x260 = 23U;
	volatile int32_t t57 = -512796812;

    t57 = (((x257-x258)&x259)>x260);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x261 = -1LL;
	static uint8_t x263 = 46U;
	volatile uint64_t x264 = 15652810564773LLU;

    t58 = (((x261-x262)&x263)>x264);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x265 = -1LL;
	volatile uint32_t x266 = 7332796U;
	int64_t x267 = INT64_MIN;
	int32_t t59 = -1;

    t59 = (((x265-x266)&x267)>x268);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x273 = INT64_MIN;
	int32_t x274 = INT32_MIN;
	int16_t x276 = -203;

    t60 = (((x273-x274)&x275)>x276);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x277 = -914363;
	static int16_t x278 = 1988;
	uint64_t x279 = 966785LLU;
	static int8_t x280 = -3;
	static volatile int32_t t61 = 239686995;

    t61 = (((x277-x278)&x279)>x280);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x285 = INT16_MIN;
	int32_t x286 = INT32_MIN;
	volatile uint16_t x287 = 18U;
	int8_t x288 = INT8_MIN;
	static volatile int32_t t62 = 1;

    t62 = (((x285-x286)&x287)>x288);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x289 = INT16_MIN;
	int32_t x290 = INT32_MIN;
	int16_t x292 = INT16_MAX;
	int32_t t63 = 454975;

    t63 = (((x289-x290)&x291)>x292);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x294 = 52158707599LL;
	uint16_t x295 = 761U;
	int8_t x296 = INT8_MIN;
	int32_t t64 = -475;

    t64 = (((x293-x294)&x295)>x296);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int32_t x297 = -1;
	static uint32_t x298 = 3U;
	static int32_t x299 = -125178709;
	volatile int8_t x300 = 0;
	volatile int32_t t65 = -1;

    t65 = (((x297-x298)&x299)>x300);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x301 = INT16_MIN;
	volatile int16_t x302 = -246;
	volatile uint16_t x303 = 35U;
	int16_t x304 = INT16_MAX;
	int32_t t66 = 2009;

    t66 = (((x301-x302)&x303)>x304);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x307 = -1;
	int8_t x308 = -1;
	int32_t t67 = -425673;

    t67 = (((x305-x306)&x307)>x308);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint64_t x309 = UINT64_MAX;
	int32_t x310 = INT32_MIN;
	int8_t x311 = INT8_MAX;
	int32_t t68 = 5;

    t68 = (((x309-x310)&x311)>x312);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x313 = INT16_MIN;
	int32_t x314 = 721723;
	uint8_t x316 = UINT8_MAX;
	volatile int32_t t69 = 459704;

    t69 = (((x313-x314)&x315)>x316);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x317 = -21;
	volatile int64_t x318 = INT64_MIN;
	int32_t x319 = INT32_MIN;
	uint16_t x320 = UINT16_MAX;
	volatile int32_t t70 = 279054;

    t70 = (((x317-x318)&x319)>x320);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x321 = INT8_MIN;
	int8_t x323 = 2;
	int8_t x324 = INT8_MIN;
	volatile int32_t t71 = 183622027;

    t71 = (((x321-x322)&x323)>x324);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x325 = -414780;
	int64_t x326 = 375LL;
	int64_t x327 = -1LL;
	int64_t x328 = INT64_MIN;
	volatile int32_t t72 = -1058116427;

    t72 = (((x325-x326)&x327)>x328);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x329 = INT64_MAX;
	uint64_t x330 = 2052207131332LLU;
	int16_t x331 = INT16_MIN;
	volatile int8_t x332 = 1;

    t73 = (((x329-x330)&x331)>x332);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x333 = 0;
	static int64_t x335 = -18436043LL;
	int8_t x336 = INT8_MIN;
	volatile int32_t t74 = 65;

    t74 = (((x333-x334)&x335)>x336);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint32_t x345 = 1242U;
	int32_t x348 = INT32_MAX;
	volatile int32_t t75 = -367;

    t75 = (((x345-x346)&x347)>x348);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int16_t x349 = -1;
	uint16_t x350 = 8U;
	static int16_t x351 = INT16_MIN;
	int32_t t76 = -982949907;

    t76 = (((x349-x350)&x351)>x352);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x353 = 1149694;
	static int64_t x354 = -39399715890777666LL;
	volatile uint32_t x355 = 48334U;
	int64_t x356 = -40876722229462676LL;
	int32_t t77 = 117;

    t77 = (((x353-x354)&x355)>x356);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x358 = UINT8_MAX;
	static uint32_t x359 = 9246868U;
	static volatile int64_t x360 = 59787230LL;
	int32_t t78 = 229;

    t78 = (((x357-x358)&x359)>x360);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x361 = INT64_MIN;
	static int64_t x362 = -1LL;
	volatile int16_t x363 = -3;
	int16_t x364 = INT16_MIN;
	static int32_t t79 = 260841513;

    t79 = (((x361-x362)&x363)>x364);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x365 = UINT8_MAX;
	int8_t x366 = -7;
	int32_t x367 = INT32_MAX;
	volatile int32_t x368 = 572;
	int32_t t80 = 12555;

    t80 = (((x365-x366)&x367)>x368);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x369 = UINT8_MAX;
	volatile uint32_t x370 = 6036U;
	static uint16_t x371 = UINT16_MAX;
	int32_t x372 = INT32_MAX;
	volatile int32_t t81 = 54571534;

    t81 = (((x369-x370)&x371)>x372);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x373 = 5U;
	static volatile int8_t x374 = INT8_MAX;
	int8_t x375 = INT8_MIN;
	int16_t x376 = INT16_MIN;
	int32_t t82 = -26922312;

    t82 = (((x373-x374)&x375)>x376);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x377 = -1LL;
	uint8_t x378 = 1U;
	int8_t x379 = 0;
	int64_t x380 = 99069101734421595LL;
	int32_t t83 = 2021;

    t83 = (((x377-x378)&x379)>x380);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint32_t x381 = 10191553U;
	volatile uint16_t x382 = 65U;
	int64_t x383 = -169975LL;
	int32_t t84 = 62;

    t84 = (((x381-x382)&x383)>x384);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x389 = UINT64_MAX;
	int8_t x390 = INT8_MIN;
	uint32_t x391 = UINT32_MAX;
	volatile int32_t t85 = -4100500;

    t85 = (((x389-x390)&x391)>x392);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x393 = INT8_MIN;
	static volatile int16_t x394 = INT16_MIN;
	int64_t x395 = INT64_MIN;
	uint8_t x396 = 110U;

    t86 = (((x393-x394)&x395)>x396);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x397 = INT16_MIN;
	int64_t x398 = -1LL;
	int64_t x399 = INT64_MAX;
	uint8_t x400 = 1U;
	volatile int32_t t87 = 124610169;

    t87 = (((x397-x398)&x399)>x400);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x401 = 318174485U;
	int8_t x402 = INT8_MIN;
	uint8_t x403 = UINT8_MAX;
	volatile int16_t x404 = INT16_MIN;

    t88 = (((x401-x402)&x403)>x404);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x406 = -3;
	static int64_t x407 = INT64_MIN;
	int32_t t89 = 1601;

    t89 = (((x405-x406)&x407)>x408);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x409 = 1018U;
	int8_t x411 = -1;
	int16_t x412 = INT16_MIN;
	volatile int32_t t90 = 237;

    t90 = (((x409-x410)&x411)>x412);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x413 = 32006LL;
	volatile uint8_t x416 = UINT8_MAX;
	volatile int32_t t91 = 31;

    t91 = (((x413-x414)&x415)>x416);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x417 = INT8_MAX;
	uint32_t x418 = 101261009U;
	int32_t x419 = 153462433;

    t92 = (((x417-x418)&x419)>x420);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x426 = 135469U;
	volatile uint64_t x427 = UINT64_MAX;
	uint16_t x428 = 1U;
	static volatile int32_t t93 = -1;

    t93 = (((x425-x426)&x427)>x428);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint64_t x429 = 2LLU;
	int32_t x430 = 31115;
	uint8_t x431 = 1U;
	int8_t x432 = 6;
	static volatile int32_t t94 = -93331865;

    t94 = (((x429-x430)&x431)>x432);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x434 = UINT16_MAX;
	static volatile int8_t x435 = -23;
	uint32_t x436 = UINT32_MAX;
	volatile int32_t t95 = -7480500;

    t95 = (((x433-x434)&x435)>x436);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x437 = INT32_MIN;
	int8_t x438 = -1;
	int64_t x439 = INT64_MIN;
	uint16_t x440 = 23977U;
	int32_t t96 = 5914;

    t96 = (((x437-x438)&x439)>x440);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x441 = UINT8_MAX;
	int16_t x442 = INT16_MIN;
	uint64_t x443 = 8097203438869575LLU;
	int16_t x444 = INT16_MAX;

    t97 = (((x441-x442)&x443)>x444);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x449 = -1LL;
	volatile int32_t x450 = -1;
	static int32_t x451 = -1;
	static int8_t x452 = 1;
	volatile int32_t t98 = -5360162;

    t98 = (((x449-x450)&x451)>x452);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint64_t x453 = 1147LLU;
	volatile uint8_t x455 = 20U;
	volatile int8_t x456 = 1;
	static int32_t t99 = -26740;

    t99 = (((x453-x454)&x455)>x456);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int32_t x457 = 634;
	volatile uint8_t x458 = 33U;
	uint32_t x459 = 70137U;
	volatile int8_t x460 = -21;

    t100 = (((x457-x458)&x459)>x460);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x461 = -1;
	static uint16_t x462 = 23475U;
	static int16_t x464 = INT16_MAX;

    t101 = (((x461-x462)&x463)>x464);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x470 = -1;
	int32_t x472 = -1;
	int32_t t102 = 79964;

    t102 = (((x469-x470)&x471)>x472);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x473 = 172U;
	int64_t x475 = INT64_MIN;
	volatile uint64_t x476 = 63413135780LLU;
	int32_t t103 = -4180229;

    t103 = (((x473-x474)&x475)>x476);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x477 = INT16_MIN;
	int8_t x478 = 3;
	uint16_t x479 = 219U;
	static int32_t x480 = INT32_MIN;

    t104 = (((x477-x478)&x479)>x480);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int32_t x481 = -1;
	volatile int32_t x482 = INT32_MIN;
	int16_t x483 = 0;
	uint8_t x484 = 1U;
	volatile int32_t t105 = -76281308;

    t105 = (((x481-x482)&x483)>x484);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x485 = -19;
	uint32_t x486 = 87816U;
	int16_t x487 = INT16_MIN;
	static int32_t x488 = INT32_MIN;
	volatile int32_t t106 = 22;

    t106 = (((x485-x486)&x487)>x488);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x489 = UINT32_MAX;
	uint32_t x490 = 19432U;
	int16_t x491 = INT16_MIN;
	uint8_t x492 = 0U;

    t107 = (((x489-x490)&x491)>x492);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x493 = INT64_MIN;
	volatile uint64_t x494 = 201035408291296103LLU;
	int8_t x496 = INT8_MIN;
	volatile int32_t t108 = -678918;

    t108 = (((x493-x494)&x495)>x496);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x497 = INT32_MAX;
	volatile int32_t x498 = INT32_MAX;
	int8_t x499 = INT8_MIN;
	int32_t x500 = INT32_MAX;
	int32_t t109 = 22;

    t109 = (((x497-x498)&x499)>x500);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x506 = INT8_MIN;
	static int32_t x507 = -1;
	int8_t x508 = 42;
	int32_t t110 = -65;

    t110 = (((x505-x506)&x507)>x508);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x510 = 379938771269757436LL;
	static int16_t x512 = -96;
	volatile int32_t t111 = 28975;

    t111 = (((x509-x510)&x511)>x512);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x514 = INT16_MIN;
	int64_t x515 = -1LL;
	int16_t x516 = -1;
	volatile int32_t t112 = -1824711;

    t112 = (((x513-x514)&x515)>x516);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x517 = -1LL;
	static uint8_t x518 = 54U;
	int8_t x519 = 1;
	volatile int32_t t113 = -7431;

    t113 = (((x517-x518)&x519)>x520);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x521 = INT16_MIN;
	int16_t x522 = INT16_MAX;
	int32_t x523 = INT32_MAX;
	volatile int32_t t114 = 276473;

    t114 = (((x521-x522)&x523)>x524);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x526 = 0;
	uint8_t x527 = 23U;
	volatile int32_t t115 = -386066517;

    t115 = (((x525-x526)&x527)>x528);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x529 = -1;
	int16_t x530 = 4073;
	static uint64_t x531 = UINT64_MAX;
	static int16_t x532 = INT16_MIN;
	volatile int32_t t116 = -84976327;

    t116 = (((x529-x530)&x531)>x532);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x534 = 39U;
	volatile int32_t x535 = INT32_MIN;
	uint64_t x536 = 781771122LLU;
	int32_t t117 = 24554;

    t117 = (((x533-x534)&x535)>x536);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x537 = 28;
	uint64_t x538 = UINT64_MAX;
	int8_t x539 = -1;
	int32_t x540 = -1;
	volatile int32_t t118 = 50654415;

    t118 = (((x537-x538)&x539)>x540);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x541 = 4905;
	uint16_t x543 = 34U;
	static volatile int32_t t119 = 0;

    t119 = (((x541-x542)&x543)>x544);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint8_t x546 = 7U;
	static uint32_t x547 = 14620032U;
	volatile int32_t x548 = 144761;

    t120 = (((x545-x546)&x547)>x548);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x549 = 233134U;
	static volatile int8_t x550 = 53;
	uint64_t x551 = UINT64_MAX;
	int64_t x552 = INT64_MIN;
	int32_t t121 = 10517;

    t121 = (((x549-x550)&x551)>x552);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x553 = INT16_MIN;
	volatile int8_t x555 = INT8_MIN;
	volatile int64_t x556 = -1LL;
	volatile int32_t t122 = -18;

    t122 = (((x553-x554)&x555)>x556);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint64_t x557 = 22LLU;
	volatile uint16_t x558 = UINT16_MAX;
	uint32_t x559 = 8194626U;
	int16_t x560 = 9403;
	int32_t t123 = 1;

    t123 = (((x557-x558)&x559)>x560);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x561 = 51U;
	volatile uint8_t x562 = 73U;
	int32_t x564 = INT32_MIN;

    t124 = (((x561-x562)&x563)>x564);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x565 = 417285374LLU;
	static int32_t x566 = INT32_MIN;
	uint8_t x568 = 15U;
	int32_t t125 = -3817153;

    t125 = (((x565-x566)&x567)>x568);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x570 = 5015U;
	volatile int8_t x571 = 0;
	uint16_t x572 = 12804U;
	int32_t t126 = 0;

    t126 = (((x569-x570)&x571)>x572);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x577 = INT64_MIN;
	int16_t x578 = INT16_MIN;
	static int8_t x579 = INT8_MAX;
	int8_t x580 = -1;

    t127 = (((x577-x578)&x579)>x580);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x582 = 33U;
	volatile uint64_t x583 = UINT64_MAX;
	static uint64_t x584 = UINT64_MAX;
	static int32_t t128 = -51871782;

    t128 = (((x581-x582)&x583)>x584);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int64_t x585 = -1LL;
	uint32_t x586 = UINT32_MAX;
	int64_t x587 = 98716003215039128LL;
	static int8_t x588 = INT8_MIN;
	int32_t t129 = -1018568;

    t129 = (((x585-x586)&x587)>x588);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x589 = 0U;
	volatile uint32_t x590 = 123531001U;
	static int16_t x591 = 6;
	volatile int32_t x592 = INT32_MAX;
	volatile int32_t t130 = -31633294;

    t130 = (((x589-x590)&x591)>x592);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x594 = INT16_MIN;
	int64_t x595 = -1LL;
	int32_t x596 = INT32_MIN;
	volatile int32_t t131 = 224470503;

    t131 = (((x593-x594)&x595)>x596);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x597 = INT32_MIN;
	uint64_t x598 = UINT64_MAX;
	int32_t x600 = INT32_MIN;
	static int32_t t132 = -754952;

    t132 = (((x597-x598)&x599)>x600);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x601 = 2;
	uint8_t x602 = UINT8_MAX;
	uint64_t x603 = 2LLU;
	int32_t t133 = 0;

    t133 = (((x601-x602)&x603)>x604);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x605 = 0;
	int32_t x606 = -56589860;
	static uint32_t x607 = 965U;
	int8_t x608 = INT8_MAX;
	int32_t t134 = -12552;

    t134 = (((x605-x606)&x607)>x608);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x609 = INT32_MIN;
	int32_t x610 = -1;
	uint8_t x611 = UINT8_MAX;
	volatile uint8_t x612 = UINT8_MAX;
	volatile int32_t t135 = -1960;

    t135 = (((x609-x610)&x611)>x612);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x613 = INT32_MAX;
	uint16_t x614 = UINT16_MAX;
	static uint16_t x615 = UINT16_MAX;
	volatile uint64_t x616 = 34898551612LLU;
	int32_t t136 = -22678;

    t136 = (((x613-x614)&x615)>x616);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x618 = INT8_MIN;
	int32_t t137 = 54638;

    t137 = (((x617-x618)&x619)>x620);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x621 = 1608U;
	int8_t x622 = INT8_MIN;
	int16_t x623 = 1;
	int64_t x624 = -54653755985341LL;

    t138 = (((x621-x622)&x623)>x624);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x625 = INT32_MIN;
	int32_t x626 = INT32_MIN;
	int32_t x627 = 440916;
	uint16_t x628 = UINT16_MAX;
	static volatile int32_t t139 = 7431472;

    t139 = (((x625-x626)&x627)>x628);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint32_t x630 = UINT32_MAX;
	static uint16_t x632 = 3U;

    t140 = (((x629-x630)&x631)>x632);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x634 = 3;
	volatile int64_t x635 = INT64_MAX;
	static int32_t t141 = -7;

    t141 = (((x633-x634)&x635)>x636);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static int64_t x638 = 19LL;
	int8_t x639 = INT8_MIN;
	static int64_t x640 = -2092577339650035LL;
	int32_t t142 = 688831203;

    t142 = (((x637-x638)&x639)>x640);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x641 = INT32_MIN;
	int64_t x642 = -21980241893580LL;
	uint16_t x643 = 5U;
	volatile int32_t t143 = 908;

    t143 = (((x641-x642)&x643)>x644);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x645 = 101LLU;
	int16_t x646 = INT16_MIN;
	int16_t x647 = -1;
	int8_t x648 = INT8_MIN;
	volatile int32_t t144 = -362657564;

    t144 = (((x645-x646)&x647)>x648);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x649 = 1;
	volatile int32_t t145 = 9698417;

    t145 = (((x649-x650)&x651)>x652);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x657 = -1;
	int16_t x658 = 1;
	int32_t x659 = 164278550;
	uint64_t x660 = 0LLU;
	static volatile int32_t t146 = 5;

    t146 = (((x657-x658)&x659)>x660);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint8_t x665 = 2U;
	volatile int16_t x666 = INT16_MIN;
	static int8_t x667 = INT8_MIN;
	volatile int64_t x668 = INT64_MIN;
	volatile int32_t t147 = -56;

    t147 = (((x665-x666)&x667)>x668);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x670 = -1;
	int8_t x671 = -2;
	static volatile uint32_t x672 = 60231U;
	static volatile int32_t t148 = -865216;

    t148 = (((x669-x670)&x671)>x672);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x673 = INT8_MAX;
	static uint32_t x674 = 2737U;
	int8_t x675 = INT8_MIN;
	int8_t x676 = -1;
	int32_t t149 = -191458275;

    t149 = (((x673-x674)&x675)>x676);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x677 = -1;
	uint8_t x678 = 3U;
	volatile int16_t x680 = INT16_MIN;
	int32_t t150 = -870885;

    t150 = (((x677-x678)&x679)>x680);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x681 = -7005525823508872LL;
	static int32_t x683 = -1;
	static volatile int32_t t151 = 476;

    t151 = (((x681-x682)&x683)>x684);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x685 = 788U;
	uint8_t x686 = 115U;
	int8_t x687 = INT8_MAX;
	volatile int32_t t152 = -19;

    t152 = (((x685-x686)&x687)>x688);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x693 = -1;
	volatile int16_t x694 = INT16_MIN;
	static int32_t x696 = 4888;
	int32_t t153 = -4091765;

    t153 = (((x693-x694)&x695)>x696);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x697 = UINT64_MAX;
	uint32_t x698 = 370410U;
	volatile uint32_t x699 = UINT32_MAX;
	uint32_t x700 = 221U;

    t154 = (((x697-x698)&x699)>x700);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x701 = 10177203U;
	static volatile uint64_t x702 = 77015639066LLU;
	int8_t x704 = INT8_MAX;
	static int32_t t155 = 32;

    t155 = (((x701-x702)&x703)>x704);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x705 = 1165635LL;
	uint16_t x706 = 18U;
	int32_t x707 = -792989;
	int16_t x708 = INT16_MIN;
	int32_t t156 = -2;

    t156 = (((x705-x706)&x707)>x708);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x709 = INT32_MIN;
	uint32_t x712 = 5U;
	volatile int32_t t157 = -930305250;

    t157 = (((x709-x710)&x711)>x712);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x717 = UINT32_MAX;
	uint64_t x718 = UINT64_MAX;
	uint32_t x720 = 4155844U;
	int32_t t158 = 0;

    t158 = (((x717-x718)&x719)>x720);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x721 = INT64_MIN;
	int64_t x722 = -1LL;
	uint16_t x723 = UINT16_MAX;
	int16_t x724 = INT16_MIN;
	volatile int32_t t159 = 0;

    t159 = (((x721-x722)&x723)>x724);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int64_t x729 = 76488735974LL;
	int8_t x730 = -3;
	volatile int16_t x731 = INT16_MIN;
	int32_t x732 = 1;
	int32_t t160 = -3;

    t160 = (((x729-x730)&x731)>x732);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x733 = 0;
	int8_t x735 = -1;
	uint32_t x736 = UINT32_MAX;

    t161 = (((x733-x734)&x735)>x736);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x737 = -1;
	int32_t x738 = INT32_MAX;
	int16_t x740 = -12;

    t162 = (((x737-x738)&x739)>x740);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x741 = -135;
	uint32_t x742 = 72668U;
	int8_t x743 = 16;
	int8_t x744 = INT8_MIN;

    t163 = (((x741-x742)&x743)>x744);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint64_t x745 = UINT64_MAX;
	int8_t x746 = 0;
	uint64_t x747 = 28316LLU;
	int8_t x748 = INT8_MIN;
	int32_t t164 = 27;

    t164 = (((x745-x746)&x747)>x748);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x749 = INT64_MAX;
	int32_t x750 = 48884099;
	static int16_t x752 = INT16_MIN;
	int32_t t165 = 7959978;

    t165 = (((x749-x750)&x751)>x752);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x757 = INT16_MIN;
	int64_t x760 = INT64_MIN;
	static volatile int32_t t166 = -5;

    t166 = (((x757-x758)&x759)>x760);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile uint8_t x761 = 6U;
	static uint32_t x763 = 4481714U;
	static int8_t x764 = INT8_MAX;
	static volatile int32_t t167 = -442;

    t167 = (((x761-x762)&x763)>x764);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint64_t x765 = UINT64_MAX;
	int8_t x766 = 0;
	volatile int8_t x768 = 1;
	volatile int32_t t168 = -2975;

    t168 = (((x765-x766)&x767)>x768);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x770 = 118267530U;
	uint16_t x772 = UINT16_MAX;
	volatile int32_t t169 = 0;

    t169 = (((x769-x770)&x771)>x772);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x773 = UINT16_MAX;
	int8_t x775 = INT8_MIN;
	uint8_t x776 = UINT8_MAX;
	int32_t t170 = -13167;

    t170 = (((x773-x774)&x775)>x776);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x777 = 82381343137LLU;
	uint16_t x780 = UINT16_MAX;

    t171 = (((x777-x778)&x779)>x780);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint16_t x781 = 3133U;
	static int16_t x782 = 15;
	static int8_t x783 = -1;
	volatile int32_t t172 = -15962;

    t172 = (((x781-x782)&x783)>x784);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x785 = INT64_MIN;
	int16_t x786 = INT16_MIN;
	volatile int64_t x787 = INT64_MAX;
	uint16_t x788 = 0U;
	static volatile int32_t t173 = 885778677;

    t173 = (((x785-x786)&x787)>x788);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x789 = 4U;
	volatile int32_t x790 = -47559;
	int32_t x791 = -1;
	int16_t x792 = 0;
	volatile int32_t t174 = 6;

    t174 = (((x789-x790)&x791)>x792);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x793 = INT64_MAX;
	static uint8_t x794 = UINT8_MAX;
	uint64_t x796 = 54566LLU;
	int32_t t175 = 1;

    t175 = (((x793-x794)&x795)>x796);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x797 = 2LL;
	volatile int8_t x798 = INT8_MAX;
	volatile uint8_t x799 = UINT8_MAX;
	static int16_t x800 = -1;
	static volatile int32_t t176 = -31608702;

    t176 = (((x797-x798)&x799)>x800);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x801 = INT16_MIN;
	volatile int8_t x802 = INT8_MIN;
	volatile int64_t x803 = INT64_MIN;
	int16_t x804 = INT16_MIN;
	volatile int32_t t177 = 2;

    t177 = (((x801-x802)&x803)>x804);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x806 = INT64_MIN;
	uint16_t x807 = 82U;
	int8_t x808 = INT8_MAX;
	static volatile int32_t t178 = -5;

    t178 = (((x805-x806)&x807)>x808);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t t179 = 1;

    t179 = (((x809-x810)&x811)>x812);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x814 = -1LL;
	uint16_t x815 = 4926U;
	int8_t x816 = INT8_MAX;
	int32_t t180 = -248467;

    t180 = (((x813-x814)&x815)>x816);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x818 = INT16_MIN;
	uint32_t x819 = UINT32_MAX;
	volatile int32_t t181 = -39044260;

    t181 = (((x817-x818)&x819)>x820);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int64_t x822 = INT64_MIN;
	uint64_t x823 = 5793836LLU;
	volatile int32_t t182 = -163;

    t182 = (((x821-x822)&x823)>x824);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x829 = -1;
	volatile int32_t x831 = -1;
	static uint16_t x832 = 10692U;

    t183 = (((x829-x830)&x831)>x832);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x834 = INT16_MIN;
	int8_t x835 = INT8_MIN;
	int8_t x836 = -45;
	volatile int32_t t184 = -412;

    t184 = (((x833-x834)&x835)>x836);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x838 = -1LL;
	int32_t t185 = 68911034;

    t185 = (((x837-x838)&x839)>x840);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x841 = INT8_MIN;
	int32_t x842 = -10;
	int64_t x843 = INT64_MIN;
	volatile int32_t t186 = -425;

    t186 = (((x841-x842)&x843)>x844);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x849 = 17U;
	uint64_t x850 = 13844822188LLU;
	static int8_t x851 = INT8_MIN;
	uint64_t x852 = UINT64_MAX;
	volatile int32_t t187 = 918415688;

    t187 = (((x849-x850)&x851)>x852);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x853 = -1;
	uint32_t x854 = UINT32_MAX;
	volatile int32_t x855 = -2;
	volatile int8_t x856 = 23;
	static volatile int32_t t188 = -150;

    t188 = (((x853-x854)&x855)>x856);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x858 = 1U;
	int64_t x859 = 36418037LL;
	int32_t t189 = 126816777;

    t189 = (((x857-x858)&x859)>x860);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x861 = 94U;
	volatile int8_t x862 = INT8_MIN;
	int32_t x863 = 53154350;
	uint32_t x864 = 57265U;
	volatile int32_t t190 = 20277;

    t190 = (((x861-x862)&x863)>x864);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x865 = -1;
	static int8_t x866 = INT8_MIN;
	volatile uint16_t x867 = UINT16_MAX;
	volatile int16_t x868 = INT16_MAX;

    t191 = (((x865-x866)&x867)>x868);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x869 = -1;
	uint8_t x871 = 3U;
	int32_t x872 = INT32_MIN;
	volatile int32_t t192 = 17;

    t192 = (((x869-x870)&x871)>x872);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint32_t x873 = UINT32_MAX;
	uint64_t x874 = UINT64_MAX;
	static int16_t x875 = 1;
	int16_t x876 = 0;
	volatile int32_t t193 = -1986;

    t193 = (((x873-x874)&x875)>x876);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x877 = 174U;
	uint8_t x878 = 0U;
	int8_t x880 = -1;
	static volatile int32_t t194 = -366711;

    t194 = (((x877-x878)&x879)>x880);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x881 = INT8_MAX;
	uint8_t x883 = 3U;
	uint8_t x884 = 3U;
	int32_t t195 = -1;

    t195 = (((x881-x882)&x883)>x884);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x889 = 15918;
	int8_t x890 = INT8_MIN;
	int16_t x891 = -7696;
	int16_t x892 = INT16_MIN;
	int32_t t196 = -8591691;

    t196 = (((x889-x890)&x891)>x892);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x894 = -1;
	int16_t x896 = INT16_MAX;
	volatile int32_t t197 = -59;

    t197 = (((x893-x894)&x895)>x896);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x897 = -1LL;
	static volatile uint64_t x898 = UINT64_MAX;
	int8_t x900 = INT8_MIN;
	int32_t t198 = -186833;

    t198 = (((x897-x898)&x899)>x900);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x903 = INT16_MIN;
	static uint16_t x904 = 587U;

    t199 = (((x901-x902)&x903)>x904);

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

