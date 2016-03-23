
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
uint8_t x3 = UINT8_MAX;
int64_t x8 = -82LL;
int64_t x11 = INT64_MIN;
volatile uint32_t x12 = 185U;
int64_t x16 = INT64_MIN;
volatile int32_t x17 = INT32_MAX;
int64_t x20 = INT64_MIN;
uint64_t x22 = 7017933LLU;
static int8_t x26 = INT8_MAX;
static int16_t x27 = -153;
volatile int32_t t7 = -3;
int64_t x40 = -1LL;
volatile int64_t x43 = -2364529LL;
static volatile uint8_t x50 = UINT8_MAX;
volatile uint8_t x53 = 42U;
int8_t x55 = INT8_MIN;
int16_t x68 = -1;
static uint32_t x75 = 140071529U;
uint8_t x83 = 10U;
uint16_t x84 = 124U;
int32_t t22 = -147;
uint8_t x93 = 1U;
static int32_t x95 = -1;
int32_t x96 = -25193090;
uint16_t x98 = 1361U;
volatile int32_t t24 = 1;
uint64_t x105 = UINT64_MAX;
static int32_t x107 = INT32_MIN;
uint16_t x109 = UINT16_MAX;
uint8_t x110 = UINT8_MAX;
uint8_t x111 = UINT8_MAX;
volatile int8_t x116 = -1;
int64_t x122 = -1LL;
volatile int32_t t30 = -7;
static uint16_t x135 = UINT16_MAX;
static volatile int32_t t33 = 39545484;
int32_t x143 = 8442740;
int32_t t35 = 1072220;
int16_t x145 = INT16_MAX;
volatile int64_t x149 = INT64_MIN;
volatile int32_t t37 = -13;
uint16_t x158 = 29U;
static uint16_t x161 = 117U;
int8_t x164 = INT8_MIN;
volatile int32_t x168 = 495580982;
int16_t x169 = -1;
uint8_t x170 = 7U;
uint32_t x174 = 931198U;
volatile uint32_t x175 = UINT32_MAX;
int64_t x176 = INT64_MAX;
int32_t x181 = -845;
volatile int32_t t46 = 94;
int64_t x191 = INT64_MIN;
volatile int32_t x199 = INT32_MIN;
uint8_t x203 = 1U;
uint16_t x204 = 0U;
int32_t t50 = -1;
int8_t x205 = -1;
int16_t x211 = INT16_MAX;
static int32_t t53 = -11963307;
int8_t x222 = -18;
volatile int32_t t56 = -16;
volatile int32_t t57 = -210772062;
int32_t x234 = 152477180;
int8_t x236 = INT8_MIN;
static int32_t x237 = 10538;
uint8_t x239 = 1U;
uint64_t x244 = UINT64_MAX;
int64_t x248 = INT64_MAX;
int32_t x252 = -88;
int16_t x254 = -126;
static volatile uint32_t x257 = 4788U;
uint64_t x263 = 181074366777819LLU;
volatile int32_t t66 = -230819;
int16_t x278 = INT16_MIN;
volatile uint8_t x281 = UINT8_MAX;
volatile uint16_t x285 = UINT16_MAX;
int16_t x288 = -1;
int32_t x293 = INT32_MIN;
int8_t x297 = INT8_MAX;
uint32_t x298 = UINT32_MAX;
int32_t x300 = INT32_MIN;
uint16_t x306 = UINT16_MAX;
volatile int32_t x310 = 105;
uint64_t x313 = UINT64_MAX;
volatile int8_t x317 = INT8_MIN;
volatile int32_t t80 = 125692;
int32_t x326 = 967634304;
int8_t x329 = -12;
volatile int32_t x331 = INT32_MIN;
static volatile int64_t x332 = -1LL;
int8_t x335 = -1;
uint8_t x337 = 105U;
int32_t x343 = -1;
int64_t x348 = INT64_MIN;
int8_t x350 = INT8_MIN;
volatile int16_t x359 = INT16_MIN;
static int16_t x360 = -10;
static int8_t x362 = -11;
volatile int32_t x366 = INT32_MIN;
volatile int32_t t91 = 14;
int64_t x369 = INT64_MAX;
static int32_t x371 = 991;
static int32_t x376 = 36;
uint8_t x377 = UINT8_MAX;
uint8_t x383 = 18U;
uint8_t x384 = UINT8_MAX;
uint64_t x385 = UINT64_MAX;
int8_t x386 = -1;
static int64_t x391 = INT64_MIN;
volatile int32_t t97 = -1;
int32_t t98 = -9588663;
uint16_t x400 = 13775U;
uint64_t x407 = 35150120155LLU;
int64_t x410 = INT64_MIN;
int8_t x420 = -1;
static int8_t x422 = -52;
int16_t x426 = 32;
int16_t x429 = 7;
int16_t x431 = -1;
int8_t x433 = 22;
static uint8_t x435 = 0U;
volatile int32_t t108 = 0;
int64_t x441 = 1103331840LL;
volatile uint16_t x445 = UINT16_MAX;
volatile int32_t t111 = 12;
static int32_t t115 = -72750;
int32_t t116 = -80645;
int8_t x476 = 0;
volatile int32_t t119 = -10;
int64_t x504 = INT64_MAX;
volatile int32_t t127 = 2725;
static uint32_t x520 = 76567U;
uint16_t x521 = 1U;
volatile uint16_t x523 = 3U;
volatile int32_t t137 = 1566456;
int64_t x554 = 3434246540414027LL;
static int32_t t138 = -2768863;
static volatile int64_t x557 = INT64_MIN;
int16_t x561 = INT16_MIN;
int32_t x568 = -1;
volatile int16_t x572 = -1;
static uint32_t x574 = UINT32_MAX;
static int32_t x580 = -24984;
uint32_t x582 = UINT32_MAX;
volatile int8_t x585 = 1;
int32_t t146 = -326545811;
int32_t t148 = -20;
volatile int16_t x598 = INT16_MIN;
volatile int16_t x604 = INT16_MIN;
int8_t x606 = 6;
int8_t x607 = 0;
int8_t x610 = INT8_MIN;
int8_t x615 = 1;
static int32_t x623 = -2863;
static int32_t t155 = 0;
int8_t x634 = INT8_MIN;
static volatile int64_t x638 = 28220053110262520LL;
int16_t x641 = INT16_MIN;
static int32_t x651 = -77635692;
int16_t x652 = INT16_MAX;
int64_t x656 = -1782LL;
static uint32_t x657 = 6804U;
uint64_t x662 = UINT64_MAX;
int32_t x664 = 1;
uint32_t x665 = 14859331U;
int64_t x669 = -47765140244843677LL;
static volatile int16_t x671 = INT16_MIN;
uint32_t x673 = UINT32_MAX;
int64_t x678 = INT64_MIN;
volatile int32_t t169 = -222115;
int64_t x682 = 3511819LL;
int32_t x687 = INT32_MAX;
static uint32_t x688 = 2688U;
uint64_t x693 = 473906614695700944LLU;
volatile int16_t x695 = -1;
static int64_t x702 = -1LL;
uint32_t x703 = UINT32_MAX;
int32_t t176 = -106;
static volatile int16_t x713 = -7;
static uint32_t x714 = 2131U;
static int32_t x716 = INT32_MIN;
volatile int32_t t178 = 337;
int32_t x717 = 1;
static uint64_t x720 = 478678860LLU;
int16_t x722 = INT16_MIN;
volatile int32_t t180 = 54747419;
int64_t x728 = 7746056140LL;
static int64_t x729 = INT64_MIN;
int64_t x730 = 3277188472LL;
static int32_t t182 = -1615662;
int64_t x734 = 0LL;
int8_t x737 = INT8_MIN;
volatile int32_t x742 = 125261585;
uint8_t x745 = 4U;
int32_t x749 = 428204;
int8_t x752 = 2;
volatile int32_t x753 = INT32_MIN;
uint16_t x754 = 14084U;
volatile int32_t t188 = -9;
static int32_t t190 = 1181;
uint16_t x767 = 5U;
uint8_t x783 = 3U;
int32_t x788 = 12177;
static uint32_t x790 = UINT32_MAX;
int16_t x791 = -5064;
int16_t x792 = INT16_MIN;
int32_t t197 = -14;


void f0(void) {
    	uint16_t x2 = UINT16_MAX;
	volatile int64_t x4 = -1LL;
	volatile int32_t t0 = 1;

    t0 = (((x1==x2)<=x3)==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -1;
	int64_t x6 = INT64_MAX;
	int64_t x7 = -1LL;
	volatile int32_t t1 = -57;

    t1 = (((x5==x6)<=x7)==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = 14805;
	int8_t x10 = INT8_MIN;
	int32_t t2 = 11755337;

    t2 = (((x9==x10)<=x11)==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x13 = -17;
	int16_t x14 = 4014;
	uint32_t x15 = UINT32_MAX;
	int32_t t3 = 544495998;

    t3 = (((x13==x14)<=x15)==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x18 = INT16_MIN;
	static int32_t x19 = 61613054;
	int32_t t4 = 19740900;

    t4 = (((x17==x18)<=x19)==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x21 = -1;
	int8_t x23 = INT8_MAX;
	static int32_t x24 = 174263;
	static int32_t t5 = -468533443;

    t5 = (((x21==x22)<=x23)==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x25 = INT16_MIN;
	static uint8_t x28 = 15U;
	static volatile int32_t t6 = -54;

    t6 = (((x25==x26)<=x27)==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = 6763U;
	int64_t x30 = 4457176946790LL;
	static uint8_t x31 = 9U;
	volatile int8_t x32 = INT8_MIN;

    t7 = (((x29==x30)<=x31)==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MIN;
	int64_t x34 = INT64_MAX;
	uint64_t x35 = 238LLU;
	static int8_t x36 = -1;
	int32_t t8 = 466805837;

    t8 = (((x33==x34)<=x35)==x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = INT32_MIN;
	uint8_t x38 = 4U;
	int64_t x39 = -1543251808913980LL;
	volatile int32_t t9 = 6;

    t9 = (((x37==x38)<=x39)==x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x41 = -1;
	int8_t x42 = -1;
	volatile uint64_t x44 = 4058888517283724425LLU;
	int32_t t10 = -671425340;

    t10 = (((x41==x42)<=x43)==x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = INT16_MIN;
	int8_t x46 = INT8_MAX;
	volatile int8_t x47 = 0;
	static int32_t x48 = 58666;
	static volatile int32_t t11 = -97908;

    t11 = (((x45==x46)<=x47)==x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = 74;
	uint64_t x51 = UINT64_MAX;
	static volatile int32_t x52 = -7;
	int32_t t12 = 52068;

    t12 = (((x49==x50)<=x51)==x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x54 = 82LLU;
	int8_t x56 = 0;
	int32_t t13 = 24;

    t13 = (((x53==x54)<=x55)==x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = -1LL;
	uint32_t x58 = 57076U;
	uint8_t x59 = 50U;
	static int16_t x60 = 1;
	int32_t t14 = -28;

    t14 = (((x57==x58)<=x59)==x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = 0;
	int64_t x62 = 69606LL;
	static int8_t x63 = INT8_MAX;
	static int16_t x64 = INT16_MAX;
	volatile int32_t t15 = -99787988;

    t15 = (((x61==x62)<=x63)==x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint32_t x65 = UINT32_MAX;
	uint64_t x66 = UINT64_MAX;
	int32_t x67 = INT32_MIN;
	volatile int32_t t16 = 78857738;

    t16 = (((x65==x66)<=x67)==x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x69 = -189867;
	int8_t x70 = -59;
	uint64_t x71 = 438838345877LLU;
	uint8_t x72 = 4U;
	volatile int32_t t17 = 221962;

    t17 = (((x69==x70)<=x71)==x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = INT64_MAX;
	int8_t x74 = INT8_MAX;
	int16_t x76 = -1;
	int32_t t18 = -2429355;

    t18 = (((x73==x74)<=x75)==x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x77 = 1252787U;
	volatile int16_t x78 = 20;
	int8_t x79 = INT8_MAX;
	int32_t x80 = 9;
	int32_t t19 = -13180717;

    t19 = (((x77==x78)<=x79)==x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = 1900;
	volatile int64_t x82 = INT64_MIN;
	int32_t t20 = -1;

    t20 = (((x81==x82)<=x83)==x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = INT8_MAX;
	int64_t x86 = INT64_MIN;
	uint8_t x87 = UINT8_MAX;
	uint8_t x88 = UINT8_MAX;
	static volatile int32_t t21 = 6999333;

    t21 = (((x85==x86)<=x87)==x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x89 = 59111553;
	volatile int8_t x90 = INT8_MAX;
	volatile int16_t x91 = 14353;
	static int8_t x92 = INT8_MIN;

    t22 = (((x89==x90)<=x91)==x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x94 = INT64_MIN;
	int32_t t23 = -459;

    t23 = (((x93==x94)<=x95)==x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = INT64_MIN;
	uint64_t x99 = UINT64_MAX;
	volatile int64_t x100 = INT64_MIN;

    t24 = (((x97==x98)<=x99)==x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x101 = UINT32_MAX;
	uint32_t x102 = UINT32_MAX;
	int8_t x103 = INT8_MIN;
	int32_t x104 = INT32_MAX;
	volatile int32_t t25 = 854;

    t25 = (((x101==x102)<=x103)==x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x106 = -1;
	int16_t x108 = INT16_MIN;
	volatile int32_t t26 = -290688133;

    t26 = (((x105==x106)<=x107)==x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x112 = INT8_MIN;
	volatile int32_t t27 = -426545;

    t27 = (((x109==x110)<=x111)==x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = INT32_MIN;
	int32_t x114 = -663687;
	int8_t x115 = -1;
	volatile int32_t t28 = -44703484;

    t28 = (((x113==x114)<=x115)==x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = INT16_MIN;
	uint64_t x118 = 64204LLU;
	static uint8_t x119 = 4U;
	volatile int32_t x120 = INT32_MIN;
	volatile int32_t t29 = -1;

    t29 = (((x117==x118)<=x119)==x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = 3806825;
	int8_t x123 = 1;
	static int16_t x124 = -552;

    t30 = (((x121==x122)<=x123)==x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = INT64_MIN;
	volatile int16_t x126 = 7818;
	int64_t x127 = INT64_MIN;
	uint16_t x128 = 442U;
	static int32_t t31 = 938304362;

    t31 = (((x125==x126)<=x127)==x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = INT8_MIN;
	volatile int64_t x130 = INT64_MAX;
	uint64_t x131 = UINT64_MAX;
	static int32_t x132 = -1;
	int32_t t32 = -10;

    t32 = (((x129==x130)<=x131)==x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x133 = UINT32_MAX;
	volatile uint64_t x134 = 629729527117310423LLU;
	static int32_t x136 = -425960;

    t33 = (((x133==x134)<=x135)==x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x137 = 2276U;
	volatile int64_t x138 = -20977517862747LL;
	uint64_t x139 = 73429615444LLU;
	int8_t x140 = INT8_MAX;
	volatile int32_t t34 = -1;

    t34 = (((x137==x138)<=x139)==x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = -8;
	int8_t x142 = -1;
	volatile int8_t x144 = INT8_MAX;

    t35 = (((x141==x142)<=x143)==x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x146 = INT8_MAX;
	uint64_t x147 = 172888720LLU;
	uint8_t x148 = 0U;
	volatile int32_t t36 = 3886055;

    t36 = (((x145==x146)<=x147)==x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x150 = INT64_MIN;
	uint32_t x151 = 0U;
	static volatile uint64_t x152 = 3816LLU;

    t37 = (((x149==x150)<=x151)==x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x153 = 226;
	int32_t x154 = -396;
	int64_t x155 = -1LL;
	volatile int8_t x156 = INT8_MAX;
	volatile int32_t t38 = -1;

    t38 = (((x153==x154)<=x155)==x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = INT32_MAX;
	volatile int16_t x159 = INT16_MIN;
	int8_t x160 = INT8_MAX;
	int32_t t39 = 9989;

    t39 = (((x157==x158)<=x159)==x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x162 = INT8_MIN;
	int16_t x163 = INT16_MAX;
	static int32_t t40 = -27;

    t40 = (((x161==x162)<=x163)==x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = INT16_MAX;
	int32_t x166 = -273;
	int64_t x167 = INT64_MIN;
	int32_t t41 = 65833727;

    t41 = (((x165==x166)<=x167)==x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x171 = 3854169U;
	static int16_t x172 = 0;
	volatile int32_t t42 = 11;

    t42 = (((x169==x170)<=x171)==x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x173 = UINT64_MAX;
	int32_t t43 = -834653552;

    t43 = (((x173==x174)<=x175)==x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x177 = 1362;
	int8_t x178 = INT8_MAX;
	static int8_t x179 = -1;
	volatile uint64_t x180 = 12801517LLU;
	int32_t t44 = 466631;

    t44 = (((x177==x178)<=x179)==x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x182 = -1;
	volatile int8_t x183 = INT8_MIN;
	uint64_t x184 = 13LLU;
	int32_t t45 = -4696;

    t45 = (((x181==x182)<=x183)==x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int32_t x185 = -4;
	int8_t x186 = INT8_MIN;
	static volatile int16_t x187 = -1;
	int64_t x188 = 132318602LL;

    t46 = (((x185==x186)<=x187)==x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = -17257238432986LL;
	volatile int32_t x190 = -1;
	uint8_t x192 = 62U;
	volatile int32_t t47 = -13207111;

    t47 = (((x189==x190)<=x191)==x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x193 = 31820U;
	int16_t x194 = -65;
	int64_t x195 = 976394208824645047LL;
	volatile int16_t x196 = 2583;
	volatile int32_t t48 = -1945561;

    t48 = (((x193==x194)<=x195)==x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x197 = 699763;
	int32_t x198 = INT32_MIN;
	static int64_t x200 = INT64_MAX;
	static volatile int32_t t49 = 1094934;

    t49 = (((x197==x198)<=x199)==x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x201 = 3U;
	volatile int16_t x202 = -253;

    t50 = (((x201==x202)<=x203)==x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x206 = INT8_MAX;
	int64_t x207 = INT64_MAX;
	int32_t x208 = -1;
	volatile int32_t t51 = 0;

    t51 = (((x205==x206)<=x207)==x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x209 = UINT8_MAX;
	int64_t x210 = INT64_MIN;
	uint8_t x212 = UINT8_MAX;
	volatile int32_t t52 = -967968;

    t52 = (((x209==x210)<=x211)==x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x213 = -10;
	int32_t x214 = -386;
	volatile int32_t x215 = -1;
	int8_t x216 = 1;

    t53 = (((x213==x214)<=x215)==x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = INT16_MAX;
	static int32_t x218 = INT32_MIN;
	uint32_t x219 = 11U;
	int16_t x220 = INT16_MAX;
	int32_t t54 = 0;

    t54 = (((x217==x218)<=x219)==x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint32_t x221 = UINT32_MAX;
	int64_t x223 = INT64_MIN;
	int16_t x224 = INT16_MIN;
	int32_t t55 = -6;

    t55 = (((x221==x222)<=x223)==x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x225 = -1;
	int32_t x226 = INT32_MIN;
	volatile int16_t x227 = -1;
	int16_t x228 = INT16_MIN;

    t56 = (((x225==x226)<=x227)==x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = 412274520312LL;
	uint16_t x230 = UINT16_MAX;
	uint32_t x231 = 47933U;
	uint16_t x232 = UINT16_MAX;

    t57 = (((x229==x230)<=x231)==x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = INT32_MIN;
	int8_t x235 = -1;
	int32_t t58 = 12750;

    t58 = (((x233==x234)<=x235)==x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x238 = 616;
	uint32_t x240 = 198930080U;
	volatile int32_t t59 = 125835;

    t59 = (((x237==x238)<=x239)==x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x241 = INT16_MIN;
	uint8_t x242 = 1U;
	int32_t x243 = INT32_MIN;
	int32_t t60 = -1;

    t60 = (((x241==x242)<=x243)==x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint32_t x245 = 9195717U;
	uint8_t x246 = 0U;
	volatile uint32_t x247 = UINT32_MAX;
	int32_t t61 = -20627;

    t61 = (((x245==x246)<=x247)==x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint32_t x249 = 4U;
	static int32_t x250 = INT32_MAX;
	int32_t x251 = -1;
	volatile int32_t t62 = 313300936;

    t62 = (((x249==x250)<=x251)==x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x253 = UINT32_MAX;
	static uint8_t x255 = UINT8_MAX;
	int64_t x256 = -109377267LL;
	int32_t t63 = -1;

    t63 = (((x253==x254)<=x255)==x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x258 = 16;
	static int64_t x259 = INT64_MIN;
	int32_t x260 = INT32_MAX;
	int32_t t64 = -62;

    t64 = (((x257==x258)<=x259)==x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = -1;
	uint8_t x262 = 19U;
	volatile uint64_t x264 = 29121711298LLU;
	volatile int32_t t65 = -591;

    t65 = (((x261==x262)<=x263)==x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x265 = 154316048062LL;
	static volatile uint8_t x266 = 6U;
	uint16_t x267 = UINT16_MAX;
	int8_t x268 = 46;

    t66 = (((x265==x266)<=x267)==x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x269 = 8830108U;
	static int16_t x270 = INT16_MAX;
	int64_t x271 = INT64_MIN;
	static int32_t x272 = INT32_MIN;
	static int32_t t67 = -46945;

    t67 = (((x269==x270)<=x271)==x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = INT32_MIN;
	int8_t x274 = INT8_MIN;
	uint32_t x275 = 518034U;
	uint8_t x276 = 8U;
	static volatile int32_t t68 = 1068931667;

    t68 = (((x273==x274)<=x275)==x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int8_t x277 = INT8_MIN;
	uint16_t x279 = UINT16_MAX;
	int64_t x280 = -1LL;
	int32_t t69 = -1365;

    t69 = (((x277==x278)<=x279)==x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x282 = INT32_MIN;
	static int64_t x283 = 596274323LL;
	int32_t x284 = INT32_MAX;
	volatile int32_t t70 = -52;

    t70 = (((x281==x282)<=x283)==x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x286 = 61560502798778531LL;
	static uint16_t x287 = UINT16_MAX;
	int32_t t71 = -4185;

    t71 = (((x285==x286)<=x287)==x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint32_t x289 = UINT32_MAX;
	int32_t x290 = INT32_MIN;
	volatile int64_t x291 = -3358751881337947LL;
	int8_t x292 = -4;
	volatile int32_t t72 = 4;

    t72 = (((x289==x290)<=x291)==x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x294 = -1;
	int16_t x295 = INT16_MIN;
	static int8_t x296 = -38;
	volatile int32_t t73 = -50876335;

    t73 = (((x293==x294)<=x295)==x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x299 = -3888;
	int32_t t74 = 1;

    t74 = (((x297==x298)<=x299)==x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x301 = 31LLU;
	int16_t x302 = INT16_MIN;
	static int8_t x303 = 1;
	int16_t x304 = 3578;
	int32_t t75 = -133346;

    t75 = (((x301==x302)<=x303)==x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x305 = 555U;
	int16_t x307 = -1;
	static int8_t x308 = -1;
	volatile int32_t t76 = -259278;

    t76 = (((x305==x306)<=x307)==x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x309 = 58;
	uint64_t x311 = UINT64_MAX;
	int8_t x312 = -10;
	static int32_t t77 = 22;

    t77 = (((x309==x310)<=x311)==x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x314 = INT8_MIN;
	uint32_t x315 = 388824U;
	uint16_t x316 = UINT16_MAX;
	volatile int32_t t78 = -2423786;

    t78 = (((x313==x314)<=x315)==x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x318 = INT8_MIN;
	static int32_t x319 = INT32_MIN;
	int16_t x320 = -7311;
	volatile int32_t t79 = -100;

    t79 = (((x317==x318)<=x319)==x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint16_t x321 = 251U;
	volatile uint64_t x322 = 22146020234292230LLU;
	int16_t x323 = -1;
	static volatile int64_t x324 = -1LL;

    t80 = (((x321==x322)<=x323)==x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint8_t x325 = UINT8_MAX;
	uint64_t x327 = 134527697343LLU;
	volatile uint32_t x328 = 97662U;
	int32_t t81 = -17852561;

    t81 = (((x325==x326)<=x327)==x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x330 = INT64_MAX;
	volatile int32_t t82 = -45;

    t82 = (((x329==x330)<=x331)==x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = 2421;
	int8_t x334 = INT8_MIN;
	int8_t x336 = -1;
	static int32_t t83 = 3447976;

    t83 = (((x333==x334)<=x335)==x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x338 = INT64_MIN;
	uint32_t x339 = 250U;
	uint64_t x340 = 201LLU;
	int32_t t84 = -502080217;

    t84 = (((x337==x338)<=x339)==x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint32_t x341 = UINT32_MAX;
	uint16_t x342 = 30712U;
	int16_t x344 = -1;
	volatile int32_t t85 = 730;

    t85 = (((x341==x342)<=x343)==x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x345 = 79837573LLU;
	int64_t x346 = INT64_MIN;
	static int64_t x347 = INT64_MIN;
	volatile int32_t t86 = 74444308;

    t86 = (((x345==x346)<=x347)==x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = -1;
	int16_t x351 = INT16_MIN;
	uint64_t x352 = UINT64_MAX;
	static int32_t t87 = 61405;

    t87 = (((x349==x350)<=x351)==x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = -5;
	volatile int64_t x354 = -60181847951513LL;
	int32_t x355 = -1347366;
	volatile int8_t x356 = 3;
	volatile int32_t t88 = 4513;

    t88 = (((x353==x354)<=x355)==x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x357 = 7383;
	volatile uint32_t x358 = 58U;
	static int32_t t89 = -4;

    t89 = (((x357==x358)<=x359)==x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x361 = 0;
	static volatile uint16_t x363 = 1U;
	int64_t x364 = INT64_MIN;
	int32_t t90 = 32837;

    t90 = (((x361==x362)<=x363)==x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int8_t x365 = -28;
	int8_t x367 = INT8_MIN;
	uint64_t x368 = UINT64_MAX;

    t91 = (((x365==x366)<=x367)==x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint64_t x370 = 1858LLU;
	static int8_t x372 = 12;
	int32_t t92 = -7021083;

    t92 = (((x369==x370)<=x371)==x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x373 = 9U;
	int8_t x374 = INT8_MIN;
	int16_t x375 = INT16_MAX;
	volatile int32_t t93 = 25020888;

    t93 = (((x373==x374)<=x375)==x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x378 = -93612017046784729LL;
	int16_t x379 = INT16_MIN;
	uint32_t x380 = UINT32_MAX;
	volatile int32_t t94 = -652;

    t94 = (((x377==x378)<=x379)==x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x381 = UINT64_MAX;
	uint8_t x382 = UINT8_MAX;
	volatile int32_t t95 = 2660;

    t95 = (((x381==x382)<=x383)==x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint16_t x387 = 119U;
	int64_t x388 = -8686921828LL;
	int32_t t96 = -558;

    t96 = (((x385==x386)<=x387)==x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x389 = INT8_MIN;
	static volatile int16_t x390 = 7995;
	int64_t x392 = INT64_MIN;

    t97 = (((x389==x390)<=x391)==x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x393 = 1U;
	volatile uint8_t x394 = UINT8_MAX;
	static uint64_t x395 = 28LLU;
	uint32_t x396 = 32619U;

    t98 = (((x393==x394)<=x395)==x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = -1;
	static int8_t x398 = -1;
	int8_t x399 = -40;
	volatile int32_t t99 = -3;

    t99 = (((x397==x398)<=x399)==x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x401 = INT8_MIN;
	int8_t x402 = -1;
	int8_t x403 = -1;
	int64_t x404 = INT64_MIN;
	volatile int32_t t100 = 104278;

    t100 = (((x401==x402)<=x403)==x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x405 = 499U;
	int64_t x406 = INT64_MAX;
	int8_t x408 = -1;
	volatile int32_t t101 = -77;

    t101 = (((x405==x406)<=x407)==x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int8_t x409 = INT8_MIN;
	volatile int32_t x411 = -5;
	volatile int32_t x412 = INT32_MAX;
	static int32_t t102 = 54740109;

    t102 = (((x409==x410)<=x411)==x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x413 = 20U;
	volatile int16_t x414 = 24;
	int32_t x415 = INT32_MAX;
	uint8_t x416 = 23U;
	volatile int32_t t103 = 16;

    t103 = (((x413==x414)<=x415)==x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint64_t x417 = 4727LLU;
	int32_t x418 = INT32_MIN;
	static uint64_t x419 = 18004750039839432LLU;
	volatile int32_t t104 = 113232;

    t104 = (((x417==x418)<=x419)==x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x421 = 0;
	static int64_t x423 = -1LL;
	static volatile uint8_t x424 = 36U;
	static int32_t t105 = 245963;

    t105 = (((x421==x422)<=x423)==x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x425 = 350364401557LL;
	uint32_t x427 = UINT32_MAX;
	int16_t x428 = INT16_MIN;
	volatile int32_t t106 = 10;

    t106 = (((x425==x426)<=x427)==x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x430 = 41U;
	int16_t x432 = -3213;
	static int32_t t107 = 211672438;

    t107 = (((x429==x430)<=x431)==x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x434 = -1;
	int8_t x436 = INT8_MAX;

    t108 = (((x433==x434)<=x435)==x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint64_t x437 = 11159136LLU;
	int32_t x438 = INT32_MIN;
	int16_t x439 = INT16_MIN;
	static uint32_t x440 = UINT32_MAX;
	int32_t t109 = -27601;

    t109 = (((x437==x438)<=x439)==x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x442 = INT8_MIN;
	int64_t x443 = -41501542110LL;
	int32_t x444 = -1;
	volatile int32_t t110 = 773991383;

    t110 = (((x441==x442)<=x443)==x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x446 = 10;
	int64_t x447 = -272989091620136424LL;
	volatile int32_t x448 = INT32_MAX;

    t111 = (((x445==x446)<=x447)==x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x449 = INT32_MAX;
	int16_t x450 = 19;
	volatile int64_t x451 = INT64_MAX;
	int8_t x452 = -1;
	volatile int32_t t112 = -3611;

    t112 = (((x449==x450)<=x451)==x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = -1;
	uint8_t x454 = UINT8_MAX;
	static int64_t x455 = 14172413281991LL;
	static int8_t x456 = 24;
	volatile int32_t t113 = 66017;

    t113 = (((x453==x454)<=x455)==x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x457 = 12U;
	volatile uint64_t x458 = UINT64_MAX;
	uint64_t x459 = 2156700517882LLU;
	int32_t x460 = -1;
	static volatile int32_t t114 = 38601;

    t114 = (((x457==x458)<=x459)==x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x461 = -1;
	uint32_t x462 = 131U;
	int16_t x463 = INT16_MAX;
	volatile int8_t x464 = INT8_MIN;

    t115 = (((x461==x462)<=x463)==x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint32_t x465 = 688275U;
	int64_t x466 = INT64_MIN;
	uint32_t x467 = 401339082U;
	uint8_t x468 = UINT8_MAX;

    t116 = (((x465==x466)<=x467)==x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x469 = -3;
	int16_t x470 = -1;
	static volatile int32_t x471 = -1;
	static int16_t x472 = 43;
	volatile int32_t t117 = 6019;

    t117 = (((x469==x470)<=x471)==x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x473 = INT16_MIN;
	volatile uint8_t x474 = 1U;
	int32_t x475 = INT32_MAX;
	volatile int32_t t118 = 25095663;

    t118 = (((x473==x474)<=x475)==x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x477 = INT8_MIN;
	int8_t x478 = INT8_MAX;
	volatile int8_t x479 = -1;
	int64_t x480 = INT64_MIN;

    t119 = (((x477==x478)<=x479)==x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint32_t x481 = 268569U;
	uint8_t x482 = 24U;
	uint16_t x483 = 1043U;
	static int64_t x484 = -1LL;
	volatile int32_t t120 = -845990;

    t120 = (((x481==x482)<=x483)==x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x485 = UINT16_MAX;
	int16_t x486 = INT16_MIN;
	int16_t x487 = INT16_MAX;
	static int8_t x488 = -1;
	int32_t t121 = -21282;

    t121 = (((x485==x486)<=x487)==x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x489 = INT8_MAX;
	uint32_t x490 = 12U;
	volatile uint64_t x491 = UINT64_MAX;
	static int64_t x492 = INT64_MIN;
	int32_t t122 = 178;

    t122 = (((x489==x490)<=x491)==x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x493 = INT16_MAX;
	int16_t x494 = 5978;
	volatile int16_t x495 = INT16_MAX;
	volatile uint64_t x496 = 64817225038101LLU;
	volatile int32_t t123 = 35;

    t123 = (((x493==x494)<=x495)==x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = -1LL;
	uint32_t x498 = UINT32_MAX;
	int32_t x499 = -1;
	volatile int64_t x500 = -23932074281246269LL;
	volatile int32_t t124 = -129748282;

    t124 = (((x497==x498)<=x499)==x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x501 = -176568LL;
	int64_t x502 = INT64_MIN;
	int32_t x503 = -1;
	int32_t t125 = 113710466;

    t125 = (((x501==x502)<=x503)==x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x505 = INT16_MIN;
	int16_t x506 = -1;
	volatile int16_t x507 = -1;
	volatile uint64_t x508 = 197LLU;
	static volatile int32_t t126 = -35;

    t126 = (((x505==x506)<=x507)==x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x509 = 1;
	int8_t x510 = INT8_MIN;
	int8_t x511 = INT8_MAX;
	volatile int8_t x512 = -1;

    t127 = (((x509==x510)<=x511)==x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = -51;
	static uint64_t x514 = 9574917002LLU;
	static int8_t x515 = 3;
	int16_t x516 = INT16_MIN;
	static volatile int32_t t128 = 1437;

    t128 = (((x513==x514)<=x515)==x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x517 = 267U;
	int16_t x518 = -3861;
	volatile uint8_t x519 = 99U;
	volatile int32_t t129 = -1796446;

    t129 = (((x517==x518)<=x519)==x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x522 = INT16_MIN;
	static int64_t x524 = 0LL;
	int32_t t130 = -121006669;

    t130 = (((x521==x522)<=x523)==x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = 0LL;
	static volatile int32_t x526 = INT32_MAX;
	int8_t x527 = -5;
	static uint32_t x528 = 59404981U;
	volatile int32_t t131 = 6532226;

    t131 = (((x525==x526)<=x527)==x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x529 = 1U;
	static int16_t x530 = INT16_MIN;
	uint64_t x531 = 2105734649053LLU;
	static uint32_t x532 = 805115826U;
	int32_t t132 = -529339;

    t132 = (((x529==x530)<=x531)==x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = INT32_MIN;
	static volatile uint32_t x534 = 16040583U;
	int32_t x535 = 57574;
	uint64_t x536 = 50012LLU;
	volatile int32_t t133 = -458316;

    t133 = (((x533==x534)<=x535)==x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x537 = 3716546LLU;
	volatile uint32_t x538 = 1357966U;
	static int32_t x539 = 1218;
	uint32_t x540 = UINT32_MAX;
	static volatile int32_t t134 = 31;

    t134 = (((x537==x538)<=x539)==x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x541 = 0;
	uint16_t x542 = UINT16_MAX;
	volatile uint8_t x543 = 1U;
	volatile int64_t x544 = 14008592206LL;
	int32_t t135 = -127776070;

    t135 = (((x541==x542)<=x543)==x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x545 = INT64_MIN;
	static int16_t x546 = 10;
	int64_t x547 = -1LL;
	static int16_t x548 = INT16_MIN;
	static volatile int32_t t136 = -2175;

    t136 = (((x545==x546)<=x547)==x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x549 = -218851LL;
	int16_t x550 = INT16_MIN;
	static uint8_t x551 = UINT8_MAX;
	static volatile uint16_t x552 = 139U;

    t137 = (((x549==x550)<=x551)==x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = 392;
	int64_t x555 = INT64_MAX;
	int8_t x556 = INT8_MIN;

    t138 = (((x553==x554)<=x555)==x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x558 = INT64_MIN;
	int64_t x559 = 22LL;
	int32_t x560 = -1;
	volatile int32_t t139 = 1344168;

    t139 = (((x557==x558)<=x559)==x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x562 = 1U;
	uint8_t x563 = UINT8_MAX;
	int16_t x564 = INT16_MIN;
	volatile int32_t t140 = -10797102;

    t140 = (((x561==x562)<=x563)==x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x565 = -1;
	static volatile int64_t x566 = INT64_MIN;
	static volatile int16_t x567 = INT16_MAX;
	static volatile int32_t t141 = -1302354;

    t141 = (((x565==x566)<=x567)==x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int32_t x569 = -257513737;
	int32_t x570 = -1;
	static volatile int8_t x571 = -1;
	volatile int32_t t142 = -583472971;

    t142 = (((x569==x570)<=x571)==x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x573 = 64151LLU;
	int32_t x575 = INT32_MAX;
	volatile int32_t x576 = INT32_MAX;
	volatile int32_t t143 = 30149;

    t143 = (((x573==x574)<=x575)==x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x577 = 0;
	uint16_t x578 = 7427U;
	static int8_t x579 = INT8_MIN;
	static volatile int32_t t144 = -13512388;

    t144 = (((x577==x578)<=x579)==x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x581 = INT16_MAX;
	int8_t x583 = -1;
	int64_t x584 = INT64_MAX;
	int32_t t145 = -10;

    t145 = (((x581==x582)<=x583)==x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x586 = -1LL;
	int8_t x587 = 5;
	volatile int64_t x588 = -350710LL;

    t146 = (((x585==x586)<=x587)==x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = 8;
	int8_t x590 = 22;
	int64_t x591 = 12LL;
	static int32_t x592 = INT32_MIN;
	int32_t t147 = 7692991;

    t147 = (((x589==x590)<=x591)==x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = INT8_MAX;
	volatile int32_t x594 = INT32_MIN;
	int32_t x595 = -1;
	volatile int16_t x596 = INT16_MIN;

    t148 = (((x593==x594)<=x595)==x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x597 = INT32_MAX;
	uint16_t x599 = 138U;
	int64_t x600 = -1LL;
	volatile int32_t t149 = 4;

    t149 = (((x597==x598)<=x599)==x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint16_t x601 = 149U;
	int32_t x602 = 700;
	volatile int16_t x603 = 45;
	volatile int32_t t150 = 332922063;

    t150 = (((x601==x602)<=x603)==x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = INT32_MIN;
	uint64_t x608 = 203353066LLU;
	volatile int32_t t151 = 31120;

    t151 = (((x605==x606)<=x607)==x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x609 = 0LL;
	int64_t x611 = -24767545190LL;
	volatile int16_t x612 = INT16_MIN;
	volatile int32_t t152 = 1;

    t152 = (((x609==x610)<=x611)==x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x613 = INT32_MAX;
	int16_t x614 = INT16_MIN;
	int16_t x616 = -1;
	static volatile int32_t t153 = -47;

    t153 = (((x613==x614)<=x615)==x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x617 = 5981U;
	int16_t x618 = -1;
	volatile int16_t x619 = -14;
	int16_t x620 = -1;
	static int32_t t154 = -3293719;

    t154 = (((x617==x618)<=x619)==x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x621 = UINT64_MAX;
	volatile uint16_t x622 = 4643U;
	volatile int8_t x624 = -27;

    t155 = (((x621==x622)<=x623)==x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x625 = INT16_MIN;
	int64_t x626 = -7LL;
	int32_t x627 = INT32_MIN;
	static int16_t x628 = -1;
	int32_t t156 = -25373743;

    t156 = (((x625==x626)<=x627)==x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x629 = INT8_MIN;
	static int64_t x630 = INT64_MIN;
	static uint8_t x631 = 42U;
	uint8_t x632 = 84U;
	volatile int32_t t157 = 7975;

    t157 = (((x629==x630)<=x631)==x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x633 = -14;
	static volatile int64_t x635 = INT64_MIN;
	static volatile int16_t x636 = 18;
	int32_t t158 = 178;

    t158 = (((x633==x634)<=x635)==x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x637 = INT16_MAX;
	int32_t x639 = 201654524;
	uint16_t x640 = 1491U;
	int32_t t159 = 381542553;

    t159 = (((x637==x638)<=x639)==x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x642 = INT32_MIN;
	int32_t x643 = INT32_MIN;
	volatile uint8_t x644 = UINT8_MAX;
	int32_t t160 = 4;

    t160 = (((x641==x642)<=x643)==x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x645 = -1011801;
	uint32_t x646 = 7006368U;
	int64_t x647 = INT64_MIN;
	int8_t x648 = INT8_MAX;
	volatile int32_t t161 = 35;

    t161 = (((x645==x646)<=x647)==x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x649 = INT16_MIN;
	int16_t x650 = INT16_MIN;
	static int32_t t162 = 4595;

    t162 = (((x649==x650)<=x651)==x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x653 = 31758676LL;
	int16_t x654 = INT16_MIN;
	static volatile int32_t x655 = INT32_MIN;
	volatile int32_t t163 = 19276009;

    t163 = (((x653==x654)<=x655)==x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x658 = 1;
	int16_t x659 = 10;
	int32_t x660 = INT32_MAX;
	volatile int32_t t164 = -2;

    t164 = (((x657==x658)<=x659)==x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x661 = 12051LLU;
	int64_t x663 = INT64_MIN;
	volatile int32_t t165 = -1065481;

    t165 = (((x661==x662)<=x663)==x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x666 = INT16_MIN;
	volatile uint8_t x667 = 49U;
	int16_t x668 = -1;
	int32_t t166 = -514431348;

    t166 = (((x665==x666)<=x667)==x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x670 = 1;
	volatile uint32_t x672 = UINT32_MAX;
	int32_t t167 = -1650;

    t167 = (((x669==x670)<=x671)==x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint32_t x674 = 252650763U;
	int16_t x675 = -1;
	uint8_t x676 = UINT8_MAX;
	volatile int32_t t168 = 218363;

    t168 = (((x673==x674)<=x675)==x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x677 = -5;
	int8_t x679 = INT8_MAX;
	volatile int32_t x680 = -1;

    t169 = (((x677==x678)<=x679)==x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x681 = 30978128473LLU;
	int16_t x683 = -1;
	int16_t x684 = -12909;
	int32_t t170 = -176222058;

    t170 = (((x681==x682)<=x683)==x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x685 = INT8_MIN;
	int64_t x686 = 146258432695065LL;
	int32_t t171 = 10;

    t171 = (((x685==x686)<=x687)==x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x689 = INT32_MIN;
	uint16_t x690 = UINT16_MAX;
	static volatile int16_t x691 = 175;
	static uint64_t x692 = UINT64_MAX;
	int32_t t172 = -193988;

    t172 = (((x689==x690)<=x691)==x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x694 = UINT8_MAX;
	uint64_t x696 = UINT64_MAX;
	volatile int32_t t173 = 5403068;

    t173 = (((x693==x694)<=x695)==x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = INT16_MIN;
	static int8_t x698 = INT8_MAX;
	int64_t x699 = -1LL;
	static volatile int64_t x700 = -1017LL;
	int32_t t174 = 6706483;

    t174 = (((x697==x698)<=x699)==x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x701 = -1;
	static int8_t x704 = 3;
	static int32_t t175 = -258;

    t175 = (((x701==x702)<=x703)==x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x705 = -1;
	int64_t x706 = INT64_MIN;
	uint32_t x707 = 79117U;
	uint64_t x708 = 9903381LLU;

    t176 = (((x705==x706)<=x707)==x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = INT16_MAX;
	volatile int64_t x710 = 5760001050409599LL;
	static volatile int16_t x711 = -1;
	volatile uint64_t x712 = 1475412025124469LLU;
	int32_t t177 = -2493954;

    t177 = (((x709==x710)<=x711)==x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x715 = INT16_MIN;

    t178 = (((x713==x714)<=x715)==x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x718 = INT32_MAX;
	uint64_t x719 = 20192034024LLU;
	int32_t t179 = 27;

    t179 = (((x717==x718)<=x719)==x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x721 = UINT32_MAX;
	int8_t x723 = INT8_MIN;
	static int64_t x724 = INT64_MAX;

    t180 = (((x721==x722)<=x723)==x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x725 = -1;
	static volatile int8_t x726 = -3;
	uint32_t x727 = 112465124U;
	int32_t t181 = 1311;

    t181 = (((x725==x726)<=x727)==x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x731 = INT64_MIN;
	int64_t x732 = INT64_MAX;

    t182 = (((x729==x730)<=x731)==x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x733 = 391U;
	int64_t x735 = INT64_MIN;
	int8_t x736 = INT8_MAX;
	volatile int32_t t183 = -50130;

    t183 = (((x733==x734)<=x735)==x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint64_t x738 = 732840401365LLU;
	int64_t x739 = INT64_MIN;
	int64_t x740 = -1LL;
	volatile int32_t t184 = -21;

    t184 = (((x737==x738)<=x739)==x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int32_t x741 = INT32_MIN;
	uint16_t x743 = 109U;
	int16_t x744 = -1;
	volatile int32_t t185 = 687;

    t185 = (((x741==x742)<=x743)==x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x746 = INT16_MIN;
	int64_t x747 = INT64_MIN;
	int16_t x748 = -1;
	volatile int32_t t186 = 83;

    t186 = (((x745==x746)<=x747)==x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x750 = INT32_MAX;
	int8_t x751 = -10;
	volatile int32_t t187 = 42;

    t187 = (((x749==x750)<=x751)==x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int64_t x755 = 1LL;
	int8_t x756 = -1;

    t188 = (((x753==x754)<=x755)==x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x757 = INT16_MIN;
	int32_t x758 = -13292589;
	int8_t x759 = INT8_MAX;
	int16_t x760 = -1;
	volatile int32_t t189 = 76668182;

    t189 = (((x757==x758)<=x759)==x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint32_t x761 = 1885U;
	volatile int32_t x762 = INT32_MIN;
	int64_t x763 = INT64_MIN;
	static uint16_t x764 = 56U;

    t190 = (((x761==x762)<=x763)==x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x765 = INT64_MIN;
	static int64_t x766 = 2046100LL;
	int64_t x768 = -1LL;
	int32_t t191 = -101068;

    t191 = (((x765==x766)<=x767)==x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x769 = UINT64_MAX;
	int32_t x770 = -1;
	uint8_t x771 = 8U;
	uint32_t x772 = 533U;
	volatile int32_t t192 = 301260764;

    t192 = (((x769==x770)<=x771)==x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x773 = UINT8_MAX;
	uint64_t x774 = 8529977534LLU;
	int32_t x775 = INT32_MIN;
	int8_t x776 = 6;
	int32_t t193 = 98;

    t193 = (((x773==x774)<=x775)==x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x777 = -1LL;
	uint32_t x778 = 136487185U;
	static int64_t x779 = INT64_MIN;
	volatile int16_t x780 = -3;
	volatile int32_t t194 = -4044385;

    t194 = (((x777==x778)<=x779)==x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x781 = -7;
	uint8_t x782 = UINT8_MAX;
	int64_t x784 = INT64_MAX;
	volatile int32_t t195 = -428870;

    t195 = (((x781==x782)<=x783)==x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x785 = 4;
	volatile uint8_t x786 = 7U;
	int16_t x787 = -1;
	int32_t t196 = -23;

    t196 = (((x785==x786)<=x787)==x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x789 = UINT64_MAX;

    t197 = (((x789==x790)<=x791)==x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x793 = INT64_MIN;
	static volatile int64_t x794 = 3286648244569LL;
	int8_t x795 = INT8_MIN;
	volatile int64_t x796 = INT64_MIN;
	volatile int32_t t198 = -6;

    t198 = (((x793==x794)<=x795)==x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x797 = INT32_MAX;
	int8_t x798 = -2;
	int16_t x799 = -37;
	volatile int64_t x800 = INT64_MIN;
	int32_t t199 = -1581834;

    t199 = (((x797==x798)<=x799)==x800);

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

