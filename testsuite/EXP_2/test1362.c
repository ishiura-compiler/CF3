
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

int64_t x1 = INT64_MIN;
int64_t x4 = INT64_MIN;
uint32_t t1 = 49699578U;
static uint32_t x17 = UINT32_MAX;
int32_t x20 = INT32_MAX;
static int8_t x23 = 1;
uint8_t x25 = 56U;
int16_t x26 = -20;
static int16_t x27 = INT16_MIN;
int8_t x39 = -1;
volatile int8_t x46 = INT8_MIN;
int64_t x51 = -28132847619964459LL;
int32_t x52 = 4184644;
volatile int8_t x64 = INT8_MIN;
static int16_t x68 = INT16_MIN;
uint16_t x70 = 10U;
volatile int16_t x80 = -1;
volatile int32_t x81 = 195;
int8_t x84 = -1;
int8_t x85 = -5;
static uint8_t x88 = 3U;
static volatile uint32_t x95 = 158772U;
static int64_t x99 = INT64_MIN;
int64_t x101 = INT64_MAX;
int16_t x110 = -1;
uint16_t x121 = 25397U;
volatile uint32_t x124 = 42285794U;
static uint32_t t28 = 52295815U;
static int8_t x126 = INT8_MIN;
uint32_t x128 = 271202U;
uint64_t x150 = 14004LLU;
static uint8_t x159 = 1U;
static volatile int32_t x167 = -5;
int32_t t40 = -192352932;
int32_t x173 = 0;
static int16_t x174 = -13264;
volatile int64_t t42 = 87846LL;
int32_t x183 = INT32_MIN;
int16_t x190 = -139;
volatile int16_t x199 = -1;
volatile int32_t t47 = 22;
int16_t x204 = -1;
volatile int64_t x210 = INT64_MAX;
uint8_t x211 = 0U;
uint16_t x212 = 258U;
static volatile int32_t x214 = INT32_MIN;
static int16_t x219 = -11;
uint16_t x226 = 68U;
uint8_t x227 = 62U;
uint64_t x242 = 927213412071643LLU;
volatile int64_t x253 = INT64_MIN;
int32_t x255 = -6;
volatile int32_t x257 = 2931696;
uint32_t t62 = 1029679U;
uint16_t x264 = 582U;
int8_t x267 = -1;
static uint32_t x277 = UINT32_MAX;
uint16_t x279 = UINT16_MAX;
int8_t x287 = INT8_MAX;
volatile int64_t t67 = 1015479591275164LL;
uint8_t x289 = 19U;
static int32_t x291 = INT32_MAX;
uint32_t x302 = 529886945U;
int32_t x304 = -1;
int32_t x309 = INT32_MAX;
uint64_t t73 = 25157675706LLU;
int8_t x317 = -1;
int32_t t74 = 453925100;
int16_t x321 = INT16_MIN;
int8_t x325 = 0;
uint32_t x327 = UINT32_MAX;
static int8_t x329 = INT8_MIN;
volatile uint16_t x338 = 2693U;
int32_t x342 = INT32_MAX;
int8_t x343 = -1;
uint16_t x345 = 68U;
uint32_t x358 = 3711U;
int32_t x359 = INT32_MIN;
static int8_t x363 = -3;
volatile uint64_t x366 = 582459884569332815LLU;
int64_t x368 = INT64_MAX;
int16_t x371 = 0;
int8_t x373 = 12;
int32_t x374 = INT32_MIN;
static volatile int32_t t88 = 1;
int16_t x377 = INT16_MIN;
int32_t t90 = 1;
int8_t x385 = INT8_MAX;
int64_t x386 = -1LL;
uint64_t t92 = 40274742933282LLU;
int64_t x394 = 49517765LL;
uint32_t x398 = 896297044U;
volatile int32_t t97 = 688035;
static volatile uint64_t t98 = 236503636392LLU;
uint32_t x419 = 757U;
static volatile int64_t x421 = -1LL;
uint16_t x423 = 3569U;
static int32_t t101 = -1183702;
volatile uint64_t t105 = 11LLU;
static int16_t x451 = INT16_MIN;
volatile int32_t x457 = INT32_MAX;
volatile uint16_t x460 = 15256U;
uint16_t x461 = 15U;
static volatile int32_t t110 = 1607082;
int64_t x465 = 42482683709LL;
static int32_t x470 = -1;
volatile int32_t x472 = -1;
uint8_t x474 = UINT8_MAX;
int32_t x479 = INT32_MAX;
uint64_t t114 = 210853313439890340LLU;
int8_t x481 = INT8_MIN;
int64_t x482 = INT64_MIN;
uint16_t x484 = UINT16_MAX;
int64_t t116 = 453414224917LL;
volatile int64_t t118 = 51019821836439449LL;
volatile int32_t t120 = 3163;
volatile int8_t x505 = INT8_MIN;
int16_t x512 = INT16_MIN;
uint16_t x519 = 12U;
static int32_t x520 = -1;
int64_t x521 = INT64_MAX;
uint16_t x525 = UINT16_MAX;
uint16_t x546 = 344U;
int64_t t131 = -19LL;
volatile uint8_t x551 = 2U;
static int8_t x552 = -24;
static int16_t x557 = -1;
volatile int16_t x558 = -3038;
int16_t x567 = INT16_MIN;
static volatile uint32_t t136 = 247570643U;
int64_t x573 = -1LL;
volatile int64_t x574 = INT64_MAX;
static uint16_t x577 = 5U;
int64_t t140 = -1LL;
int8_t x587 = -1;
uint32_t x588 = 426633384U;
volatile uint32_t x590 = 11U;
int8_t x591 = INT8_MIN;
int32_t x595 = -7810;
int8_t x598 = -1;
uint32_t x600 = 1745U;
uint64_t x608 = UINT64_MAX;
int8_t x610 = -1;
volatile int64_t t148 = 129205964209157677LL;
int32_t x620 = INT32_MAX;
int8_t x625 = -3;
static int8_t x629 = INT8_MAX;
int32_t x631 = INT32_MIN;
volatile uint64_t x633 = UINT64_MAX;
volatile int16_t x634 = INT16_MIN;
static volatile int8_t x636 = INT8_MIN;
volatile uint64_t t153 = 744992230101LLU;
static int32_t x637 = 524;
int8_t x646 = -1;
volatile int64_t t156 = 26256548257541692LL;
uint32_t x655 = 28412U;
int8_t x657 = -1;
int8_t x661 = INT8_MAX;
int16_t x665 = INT16_MIN;
static uint16_t x666 = 354U;
int8_t x668 = INT8_MIN;
int32_t x676 = -6299957;
int16_t x681 = INT16_MIN;
int32_t x687 = INT32_MIN;
int16_t x688 = INT16_MIN;
int16_t x694 = INT16_MAX;
int8_t x695 = INT8_MIN;
volatile int64_t t168 = -267487954746840091LL;
uint64_t x702 = UINT64_MAX;
volatile uint32_t t170 = 14982U;
int32_t x705 = -1;
uint8_t x710 = UINT8_MAX;
static volatile int8_t x724 = 1;
int32_t t175 = 919536524;
int8_t x725 = 1;
volatile int32_t x726 = INT32_MIN;
int32_t x740 = -19831;
static volatile int16_t x743 = 2;
volatile int16_t x754 = 3074;
volatile int64_t x768 = INT64_MIN;
int64_t t186 = 52333LL;
int64_t x771 = INT64_MIN;
int16_t x777 = INT16_MIN;
static int16_t x778 = INT16_MIN;
uint8_t x784 = 8U;
uint16_t x787 = 427U;
volatile int8_t x798 = 0;
int16_t x799 = -1;
static int16_t x800 = INT16_MIN;
static uint64_t x804 = 213131590687526LLU;
volatile int64_t t196 = -916621153294045771LL;
int64_t x809 = -2348550460LL;
static int32_t x810 = INT32_MIN;
volatile int8_t x811 = -1;
static uint32_t t198 = 29U;
uint64_t t199 = 681918749809LLU;


void f0(void) {
    	int8_t x2 = INT8_MIN;
	uint16_t x3 = UINT16_MAX;
	volatile int64_t t0 = -327LL;

    t0 = ((x1^(x2!=x3))/x4);

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = UINT32_MAX;
	int8_t x6 = INT8_MAX;
	volatile uint8_t x7 = 0U;
	int8_t x8 = INT8_MAX;

    t1 = ((x5^(x6!=x7))/x8);

    if (t1 != 33818640U) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint8_t x13 = 1U;
	volatile int16_t x14 = 158;
	uint16_t x15 = 9U;
	int8_t x16 = INT8_MIN;
	int32_t t2 = -1449;

    t2 = ((x13^(x14!=x15))/x16);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x18 = INT64_MIN;
	uint32_t x19 = 19459091U;
	static uint32_t t3 = 24014292U;

    t3 = ((x17^(x18!=x19))/x20);

    if (t3 != 2U) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x21 = INT8_MAX;
	int64_t x22 = INT64_MIN;
	int8_t x24 = 2;
	static int32_t t4 = 1047674685;

    t4 = ((x21^(x22!=x23))/x24);

    if (t4 != 63) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x28 = 15;
	volatile int32_t t5 = 2;

    t5 = ((x25^(x26!=x27))/x28);

    if (t5 != 3) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint32_t x29 = UINT32_MAX;
	int64_t x30 = 599409197899LL;
	uint64_t x31 = 66736430634393742LLU;
	int32_t x32 = 16998440;
	static uint32_t t6 = 28U;

    t6 = ((x29^(x30!=x31))/x32);

    if (t6 != 252U) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x33 = INT64_MAX;
	volatile int16_t x34 = 1978;
	int8_t x35 = INT8_MIN;
	static uint32_t x36 = UINT32_MAX;
	volatile int64_t t7 = 732LL;

    t7 = ((x33^(x34!=x35))/x36);

    if (t7 != 2147483648LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x37 = INT8_MIN;
	uint32_t x38 = 12U;
	uint16_t x40 = UINT16_MAX;
	static int32_t t8 = 395;

    t8 = ((x37^(x38!=x39))/x40);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x45 = INT8_MIN;
	uint64_t x47 = UINT64_MAX;
	static volatile uint16_t x48 = 66U;
	static volatile int32_t t9 = -14038;

    t9 = ((x45^(x46!=x47))/x48);

    if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x49 = -1;
	volatile uint32_t x50 = 301U;
	volatile int32_t t10 = -60;

    t10 = ((x49^(x50!=x51))/x52);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x53 = 1;
	int8_t x54 = INT8_MIN;
	int8_t x55 = INT8_MAX;
	int64_t x56 = INT64_MIN;
	int64_t t11 = 31813531987LL;

    t11 = ((x53^(x54!=x55))/x56);

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x57 = INT32_MIN;
	int32_t x58 = INT32_MAX;
	volatile int16_t x59 = INT16_MIN;
	uint8_t x60 = 6U;
	volatile int32_t t12 = 1039433784;

    t12 = ((x57^(x58!=x59))/x60);

    if (t12 != -357913941) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x61 = INT8_MAX;
	static volatile int16_t x62 = 11296;
	int16_t x63 = -1;
	volatile int32_t t13 = 2;

    t13 = ((x61^(x62!=x63))/x64);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint64_t x65 = UINT64_MAX;
	int32_t x66 = 59990;
	static int8_t x67 = -1;
	volatile uint64_t t14 = 3336LLU;

    t14 = ((x65^(x66!=x67))/x68);

    if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint16_t x69 = UINT16_MAX;
	int64_t x71 = 37017201271985808LL;
	int64_t x72 = INT64_MAX;
	int64_t t15 = -143041980LL;

    t15 = ((x69^(x70!=x71))/x72);

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x73 = INT64_MIN;
	int64_t x74 = -1LL;
	int32_t x75 = INT32_MAX;
	volatile uint64_t x76 = 1358LLU;
	uint64_t t16 = 7529257854274LLU;

    t16 = ((x73^(x74!=x75))/x76);

    if (t16 != 6791879261306904LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x77 = 724;
	int8_t x78 = 35;
	static volatile int32_t x79 = INT32_MAX;
	volatile int32_t t17 = 3;

    t17 = ((x77^(x78!=x79))/x80);

    if (t17 != -725) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x82 = UINT8_MAX;
	uint16_t x83 = 6U;
	int32_t t18 = 235569610;

    t18 = ((x81^(x82!=x83))/x84);

    if (t18 != -194) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x86 = UINT16_MAX;
	uint32_t x87 = 416370U;
	int32_t t19 = 67;

    t19 = ((x85^(x86!=x87))/x88);

    if (t19 != -2) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint32_t x89 = 22447U;
	static uint16_t x90 = UINT16_MAX;
	uint64_t x91 = 6755LLU;
	volatile int16_t x92 = -1;
	uint32_t t20 = 2009961123U;

    t20 = ((x89^(x90!=x91))/x92);

    if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x93 = INT8_MAX;
	int64_t x94 = INT64_MAX;
	uint32_t x96 = UINT32_MAX;
	uint32_t t21 = 31U;

    t21 = ((x93^(x94!=x95))/x96);

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x97 = -174;
	uint64_t x98 = 93LLU;
	static volatile int64_t x100 = INT64_MAX;
	volatile int64_t t22 = -1LL;

    t22 = ((x97^(x98!=x99))/x100);

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x102 = -1;
	uint8_t x103 = UINT8_MAX;
	static int8_t x104 = INT8_MIN;
	int64_t t23 = 234819661LL;

    t23 = ((x101^(x102!=x103))/x104);

    if (t23 != -72057594037927935LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x105 = INT16_MAX;
	int64_t x106 = 694341635LL;
	uint16_t x107 = 0U;
	uint32_t x108 = 65444728U;
	volatile uint32_t t24 = 813U;

    t24 = ((x105^(x106!=x107))/x108);

    if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int64_t x109 = -1LL;
	uint8_t x111 = UINT8_MAX;
	int32_t x112 = -1;
	int64_t t25 = 329371LL;

    t25 = ((x109^(x110!=x111))/x112);

    if (t25 != 2LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x113 = UINT64_MAX;
	static volatile int32_t x114 = -1;
	static int8_t x115 = INT8_MAX;
	int16_t x116 = INT16_MIN;
	static uint64_t t26 = 229LLU;

    t26 = ((x113^(x114!=x115))/x116);

    if (t26 != 1LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x117 = INT16_MIN;
	volatile uint16_t x118 = 10U;
	int16_t x119 = -4;
	int64_t x120 = -31283578990075252LL;
	static volatile int64_t t27 = 459LL;

    t27 = ((x117^(x118!=x119))/x120);

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x122 = 88U;
	int32_t x123 = -1;

    t28 = ((x121^(x122!=x123))/x124);

    if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x125 = 9;
	uint64_t x127 = UINT64_MAX;
	uint32_t t29 = 1202983118U;

    t29 = ((x125^(x126!=x127))/x128);

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x129 = -2247;
	volatile uint8_t x130 = 0U;
	uint16_t x131 = 3529U;
	int8_t x132 = -3;
	static volatile int32_t t30 = -2;

    t30 = ((x129^(x130!=x131))/x132);

    if (t30 != 749) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x133 = INT16_MIN;
	volatile int32_t x134 = -1;
	volatile int8_t x135 = -1;
	static int8_t x136 = INT8_MAX;
	volatile int32_t t31 = 3041;

    t31 = ((x133^(x134!=x135))/x136);

    if (t31 != -258) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x137 = INT8_MAX;
	int64_t x138 = INT64_MAX;
	static int32_t x139 = -1;
	int32_t x140 = -1;
	volatile int32_t t32 = 394264897;

    t32 = ((x137^(x138!=x139))/x140);

    if (t32 != -126) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x141 = INT16_MAX;
	int8_t x142 = INT8_MIN;
	int8_t x143 = INT8_MIN;
	int8_t x144 = INT8_MAX;
	int32_t t33 = 4480613;

    t33 = ((x141^(x142!=x143))/x144);

    if (t33 != 258) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x145 = INT64_MAX;
	volatile uint16_t x146 = UINT16_MAX;
	volatile uint8_t x147 = 55U;
	uint32_t x148 = UINT32_MAX;
	int64_t t34 = -332113LL;

    t34 = ((x145^(x146!=x147))/x148);

    if (t34 != 2147483648LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x149 = 15344U;
	int8_t x151 = -1;
	int64_t x152 = INT64_MAX;
	int64_t t35 = 468593821334305LL;

    t35 = ((x149^(x150!=x151))/x152);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x153 = -1;
	int16_t x154 = INT16_MIN;
	static int16_t x155 = -1;
	static volatile uint8_t x156 = 53U;
	int32_t t36 = 84346;

    t36 = ((x153^(x154!=x155))/x156);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x157 = UINT32_MAX;
	static uint8_t x158 = 30U;
	static uint64_t x160 = UINT64_MAX;
	static volatile uint64_t t37 = 128594777231590LLU;

    t37 = ((x157^(x158!=x159))/x160);

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x161 = 0;
	int32_t x162 = -7754975;
	static int16_t x163 = INT16_MIN;
	volatile int64_t x164 = INT64_MIN;
	int64_t t38 = 685121937LL;

    t38 = ((x161^(x162!=x163))/x164);

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x165 = INT64_MIN;
	volatile int8_t x166 = -1;
	uint64_t x168 = 414284110611536716LLU;
	volatile uint64_t t39 = 2131795871954669176LLU;

    t39 = ((x165^(x166!=x167))/x168);

    if (t39 != 22LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x169 = -153;
	static uint32_t x170 = 4115U;
	uint64_t x171 = 3LLU;
	volatile int8_t x172 = -1;

    t40 = ((x169^(x170!=x171))/x172);

    if (t40 != 154) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x175 = 30;
	int8_t x176 = -1;
	int32_t t41 = 3533;

    t41 = ((x173^(x174!=x175))/x176);

    if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x177 = INT64_MAX;
	uint64_t x178 = UINT64_MAX;
	volatile uint64_t x179 = 70206410274372860LLU;
	int8_t x180 = INT8_MAX;

    t42 = ((x177^(x178!=x179))/x180);

    if (t42 != 72624976668147840LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x181 = INT64_MIN;
	int8_t x182 = -1;
	static volatile int32_t x184 = INT32_MAX;
	static int64_t t43 = -510148082LL;

    t43 = ((x181^(x182!=x183))/x184);

    if (t43 != -4294967298LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x185 = -1LL;
	int16_t x186 = INT16_MIN;
	static uint64_t x187 = UINT64_MAX;
	int64_t x188 = -3044203768LL;
	volatile int64_t t44 = -6LL;

    t44 = ((x185^(x186!=x187))/x188);

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x189 = -1LL;
	static uint64_t x191 = UINT64_MAX;
	int8_t x192 = -1;
	int64_t t45 = -1814LL;

    t45 = ((x189^(x190!=x191))/x192);

    if (t45 != 2LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x193 = INT16_MIN;
	volatile int32_t x194 = INT32_MIN;
	volatile int16_t x195 = INT16_MAX;
	int32_t x196 = INT32_MIN;
	int32_t t46 = -57816;

    t46 = ((x193^(x194!=x195))/x196);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x197 = INT16_MAX;
	int64_t x198 = INT64_MIN;
	static int32_t x200 = -1;

    t47 = ((x197^(x198!=x199))/x200);

    if (t47 != -32766) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint16_t x201 = UINT16_MAX;
	static int64_t x202 = -11LL;
	int8_t x203 = 3;
	int32_t t48 = 3508597;

    t48 = ((x201^(x202!=x203))/x204);

    if (t48 != -65534) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x205 = -1LL;
	static int16_t x206 = INT16_MIN;
	int32_t x207 = INT32_MIN;
	uint8_t x208 = 3U;
	int64_t t49 = 112LL;

    t49 = ((x205^(x206!=x207))/x208);

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x209 = INT32_MAX;
	volatile int32_t t50 = 2788450;

    t50 = ((x209^(x210!=x211))/x212);

    if (t50 != 8323580) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x213 = -1;
	int64_t x215 = INT64_MIN;
	int16_t x216 = 2;
	int32_t t51 = 206;

    t51 = ((x213^(x214!=x215))/x216);

    if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x217 = 6U;
	int16_t x218 = INT16_MIN;
	uint8_t x220 = 4U;
	int32_t t52 = -2704266;

    t52 = ((x217^(x218!=x219))/x220);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int32_t x221 = INT32_MAX;
	int32_t x222 = 12324;
	int16_t x223 = INT16_MAX;
	static int32_t x224 = 303995;
	static int32_t t53 = -16;

    t53 = ((x221^(x222!=x223))/x224);

    if (t53 != 7064) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x225 = -1;
	static int8_t x228 = INT8_MIN;
	static int32_t t54 = -57;

    t54 = ((x225^(x226!=x227))/x228);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x229 = 449820675704203LLU;
	uint64_t x230 = 102282852610LLU;
	int8_t x231 = INT8_MIN;
	int16_t x232 = 10766;
	uint64_t t55 = 22765918LLU;

    t55 = ((x229^(x230!=x231))/x232);

    if (t55 != 41781597223LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x233 = UINT64_MAX;
	static int32_t x234 = INT32_MIN;
	int8_t x235 = -2;
	uint64_t x236 = 4072655869LLU;
	uint64_t t56 = 97987875LLU;

    t56 = ((x233^(x234!=x235))/x236);

    if (t56 != 4529413892LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x237 = 115U;
	volatile uint64_t x238 = UINT64_MAX;
	int64_t x239 = -2422482856LL;
	int16_t x240 = INT16_MIN;
	int32_t t57 = 15549588;

    t57 = ((x237^(x238!=x239))/x240);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x241 = -22;
	int64_t x243 = INT64_MIN;
	static int8_t x244 = INT8_MIN;
	static volatile int32_t t58 = 2384722;

    t58 = ((x241^(x242!=x243))/x244);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x245 = -1629;
	static int64_t x246 = -210695LL;
	uint16_t x247 = 6200U;
	static int64_t x248 = INT64_MIN;
	int64_t t59 = -13606LL;

    t59 = ((x245^(x246!=x247))/x248);

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x249 = INT64_MIN;
	static uint16_t x250 = 350U;
	uint32_t x251 = 7U;
	int8_t x252 = -1;
	volatile int64_t t60 = INT64_MAX;

    t60 = ((x249^(x250!=x251))/x252);

    if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x254 = INT32_MIN;
	int8_t x256 = -1;
	int64_t t61 = INT64_MAX;

    t61 = ((x253^(x254!=x255))/x256);

    if (t61 != INT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x258 = 1;
	uint64_t x259 = 258866335293LLU;
	uint32_t x260 = UINT32_MAX;

    t62 = ((x257^(x258!=x259))/x260);

    if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x261 = 124LL;
	uint32_t x262 = 16U;
	volatile int16_t x263 = INT16_MIN;
	int64_t t63 = 93673113352016LL;

    t63 = ((x261^(x262!=x263))/x264);

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x265 = -1;
	int8_t x266 = -1;
	int8_t x268 = -1;
	int32_t t64 = 62358510;

    t64 = ((x265^(x266!=x267))/x268);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x269 = INT8_MIN;
	int16_t x270 = INT16_MIN;
	uint16_t x271 = 4390U;
	int64_t x272 = INT64_MIN;
	volatile int64_t t65 = -905355847109134364LL;

    t65 = ((x269^(x270!=x271))/x272);

    if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x278 = -4;
	uint16_t x280 = 25U;
	uint32_t t66 = 102363U;

    t66 = ((x277^(x278!=x279))/x280);

    if (t66 != 171798691U) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x285 = INT64_MIN;
	static int8_t x286 = INT8_MIN;
	int32_t x288 = INT32_MIN;

    t67 = ((x285^(x286!=x287))/x288);

    if (t67 != 4294967295LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x290 = -23LL;
	int8_t x292 = INT8_MAX;
	int32_t t68 = -120252;

    t68 = ((x289^(x290!=x291))/x292);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int16_t x293 = INT16_MIN;
	static uint8_t x294 = 38U;
	static uint32_t x295 = 3319437U;
	static int8_t x296 = INT8_MIN;
	volatile int32_t t69 = 8130;

    t69 = ((x293^(x294!=x295))/x296);

    if (t69 != 255) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint32_t x301 = UINT32_MAX;
	int8_t x303 = INT8_MIN;
	uint32_t t70 = 4052U;

    t70 = ((x301^(x302!=x303))/x304);

    if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x305 = -19;
	static volatile int64_t x306 = INT64_MAX;
	static volatile uint64_t x307 = 799261724233353LLU;
	int8_t x308 = INT8_MIN;
	volatile int32_t t71 = -14007723;

    t71 = ((x305^(x306!=x307))/x308);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x310 = 15;
	uint16_t x311 = 755U;
	int16_t x312 = 151;
	volatile int32_t t72 = 1;

    t72 = ((x309^(x310!=x311))/x312);

    if (t72 != 14221746) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile uint64_t x313 = 16886863147724398LLU;
	int8_t x314 = -2;
	volatile uint16_t x315 = 687U;
	volatile uint8_t x316 = 1U;

    t73 = ((x313^(x314!=x315))/x316);

    if (t73 != 16886863147724399LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x318 = INT8_MIN;
	volatile int64_t x319 = INT64_MIN;
	int8_t x320 = INT8_MIN;

    t74 = ((x317^(x318!=x319))/x320);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x322 = UINT32_MAX;
	volatile int8_t x323 = INT8_MIN;
	static uint32_t x324 = UINT32_MAX;
	uint32_t t75 = 3792801U;

    t75 = ((x321^(x322!=x323))/x324);

    if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x326 = INT64_MAX;
	int32_t x328 = INT32_MAX;
	volatile int32_t t76 = 91;

    t76 = ((x325^(x326!=x327))/x328);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x330 = INT32_MAX;
	int16_t x331 = -1;
	int8_t x332 = -1;
	int32_t t77 = 1;

    t77 = ((x329^(x330!=x331))/x332);

    if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint16_t x333 = UINT16_MAX;
	static int32_t x334 = -1;
	int8_t x335 = INT8_MAX;
	volatile int32_t x336 = INT32_MIN;
	volatile int32_t t78 = 220834;

    t78 = ((x333^(x334!=x335))/x336);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x337 = INT64_MIN;
	int32_t x339 = INT32_MIN;
	uint16_t x340 = UINT16_MAX;
	int64_t t79 = -25871309717LL;

    t79 = ((x337^(x338!=x339))/x340);

    if (t79 != -140739635871744LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x341 = -3;
	volatile int64_t x344 = INT64_MAX;
	int64_t t80 = 27364691LL;

    t80 = ((x341^(x342!=x343))/x344);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x346 = 0LL;
	static uint64_t x347 = UINT64_MAX;
	int16_t x348 = INT16_MIN;
	int32_t t81 = -419846;

    t81 = ((x345^(x346!=x347))/x348);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x349 = 15436U;
	int32_t x350 = INT32_MIN;
	volatile uint32_t x351 = 7U;
	int8_t x352 = 3;
	volatile int32_t t82 = 11924825;

    t82 = ((x349^(x350!=x351))/x352);

    if (t82 != 5145) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x353 = 81U;
	static volatile int8_t x354 = -1;
	volatile int32_t x355 = 51;
	int64_t x356 = INT64_MAX;
	volatile int64_t t83 = -412962LL;

    t83 = ((x353^(x354!=x355))/x356);

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint16_t x357 = 18308U;
	volatile int8_t x360 = INT8_MAX;
	static int32_t t84 = 54;

    t84 = ((x357^(x358!=x359))/x360);

    if (t84 != 144) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x361 = INT8_MAX;
	static int32_t x362 = INT32_MIN;
	uint32_t x364 = UINT32_MAX;
	volatile uint32_t t85 = 1U;

    t85 = ((x361^(x362!=x363))/x364);

    if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint16_t x365 = 10U;
	static volatile int16_t x367 = -19;
	volatile int64_t t86 = 1687884LL;

    t86 = ((x365^(x366!=x367))/x368);

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x369 = INT32_MAX;
	int32_t x370 = -7404;
	static int64_t x372 = INT64_MAX;
	volatile int64_t t87 = 606181844197840LL;

    t87 = ((x369^(x370!=x371))/x372);

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x375 = -1LL;
	volatile int16_t x376 = -1;

    t88 = ((x373^(x374!=x375))/x376);

    if (t88 != -13) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint16_t x378 = 502U;
	static volatile int32_t x379 = 4173865;
	uint32_t x380 = 2820U;
	uint32_t t89 = 0U;

    t89 = ((x377^(x378!=x379))/x380);

    if (t89 != 1523026U) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x381 = -954;
	static int32_t x382 = INT32_MIN;
	int16_t x383 = INT16_MAX;
	uint16_t x384 = 2593U;

    t90 = ((x381^(x382!=x383))/x384);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x387 = -1;
	int8_t x388 = INT8_MAX;
	int32_t t91 = 2975147;

    t91 = ((x385^(x386!=x387))/x388);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x389 = 42;
	uint64_t x390 = 4LLU;
	int32_t x391 = INT32_MAX;
	uint64_t x392 = 1LLU;

    t92 = ((x389^(x390!=x391))/x392);

    if (t92 != 43LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x393 = INT64_MIN;
	static int32_t x395 = 11550;
	uint16_t x396 = 100U;
	volatile int64_t t93 = 4529733228222887LL;

    t93 = ((x393^(x394!=x395))/x396);

    if (t93 != -92233720368547758LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x397 = INT8_MAX;
	uint32_t x399 = 54U;
	uint16_t x400 = UINT16_MAX;
	int32_t t94 = 25787;

    t94 = ((x397^(x398!=x399))/x400);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x401 = 2U;
	int64_t x402 = 928LL;
	int16_t x403 = INT16_MIN;
	int16_t x404 = INT16_MIN;
	int32_t t95 = 7963;

    t95 = ((x401^(x402!=x403))/x404);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x405 = -17;
	uint64_t x406 = 215750028875LLU;
	uint8_t x407 = 39U;
	static int16_t x408 = -3105;
	int32_t t96 = 233654;

    t96 = ((x405^(x406!=x407))/x408);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x409 = -1;
	int32_t x410 = INT32_MAX;
	int32_t x411 = -1;
	uint16_t x412 = 4359U;

    t97 = ((x409^(x410!=x411))/x412);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x413 = 5297751068767619197LLU;
	uint32_t x414 = UINT32_MAX;
	int16_t x415 = 837;
	volatile int8_t x416 = -1;

    t98 = ((x413^(x414!=x415))/x416);

    if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x417 = 11;
	int64_t x418 = INT64_MIN;
	int8_t x420 = INT8_MAX;
	int32_t t99 = 526891;

    t99 = ((x417^(x418!=x419))/x420);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint32_t x422 = UINT32_MAX;
	int16_t x424 = 9376;
	volatile int64_t t100 = 224324710253147LL;

    t100 = ((x421^(x422!=x423))/x424);

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x425 = INT8_MIN;
	volatile int8_t x426 = -1;
	uint8_t x427 = 101U;
	volatile int16_t x428 = INT16_MAX;

    t101 = ((x425^(x426!=x427))/x428);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint8_t x429 = 3U;
	static int8_t x430 = INT8_MIN;
	uint64_t x431 = UINT64_MAX;
	uint32_t x432 = UINT32_MAX;
	uint32_t t102 = 8U;

    t102 = ((x429^(x430!=x431))/x432);

    if (t102 != 0U) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x433 = -1;
	volatile uint8_t x434 = UINT8_MAX;
	uint32_t x435 = 1780U;
	int16_t x436 = INT16_MIN;
	static volatile int32_t t103 = 56;

    t103 = ((x433^(x434!=x435))/x436);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x437 = 3674944089LLU;
	volatile uint8_t x438 = 28U;
	int16_t x439 = INT16_MIN;
	int32_t x440 = -7390362;
	static volatile uint64_t t104 = 421177692670LLU;

    t104 = ((x437^(x438!=x439))/x440);

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint8_t x441 = UINT8_MAX;
	static int8_t x442 = INT8_MAX;
	volatile int16_t x443 = -1;
	uint64_t x444 = 13LLU;

    t105 = ((x441^(x442!=x443))/x444);

    if (t105 != 19LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x445 = 0;
	int64_t x446 = 1966260LL;
	int8_t x447 = 1;
	volatile uint32_t x448 = 142974462U;
	uint32_t t106 = 32955572U;

    t106 = ((x445^(x446!=x447))/x448);

    if (t106 != 0U) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint16_t x449 = 1U;
	int64_t x450 = -1LL;
	static int8_t x452 = -12;
	int32_t t107 = -6992;

    t107 = ((x449^(x450!=x451))/x452);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x453 = INT16_MIN;
	volatile int32_t x454 = -3402509;
	volatile int8_t x455 = -1;
	static uint32_t x456 = 295U;
	static uint32_t t108 = 18U;

    t108 = ((x453^(x454!=x455))/x456);

    if (t108 != 14559100U) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x458 = -55;
	volatile int16_t x459 = 10923;
	volatile int32_t t109 = 115293;

    t109 = ((x457^(x458!=x459))/x460);

    if (t109 != 140763) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x462 = UINT8_MAX;
	int16_t x463 = -1;
	static uint16_t x464 = 5983U;

    t110 = ((x461^(x462!=x463))/x464);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x466 = 2521;
	static int32_t x467 = INT32_MIN;
	volatile int16_t x468 = INT16_MIN;
	volatile int64_t t111 = -20LL;

    t111 = ((x465^(x466!=x467))/x468);

    if (t111 != -1296468LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x469 = -1755282898654547358LL;
	static int8_t x471 = -1;
	int64_t t112 = 106965316108041881LL;

    t112 = ((x469^(x470!=x471))/x472);

    if (t112 != 1755282898654547358LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int64_t x473 = -80742200LL;
	volatile int16_t x475 = INT16_MAX;
	static uint8_t x476 = 16U;
	static volatile int64_t t113 = 685062050LL;

    t113 = ((x473^(x474!=x475))/x476);

    if (t113 != -5046387LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint64_t x477 = UINT64_MAX;
	static int32_t x478 = 2;
	uint8_t x480 = UINT8_MAX;

    t114 = ((x477^(x478!=x479))/x480);

    if (t114 != 72340172838076672LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint64_t x483 = 90962333048710LLU;
	volatile int32_t t115 = -12173;

    t115 = ((x481^(x482!=x483))/x484);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x485 = 214U;
	volatile int8_t x486 = 4;
	int8_t x487 = -1;
	int64_t x488 = INT64_MAX;

    t116 = ((x485^(x486!=x487))/x488);

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile uint64_t x489 = 1453352116114210040LLU;
	uint16_t x490 = 11386U;
	uint64_t x491 = UINT64_MAX;
	uint64_t x492 = UINT64_MAX;
	volatile uint64_t t117 = 279064906LLU;

    t117 = ((x489^(x490!=x491))/x492);

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int64_t x493 = -2028427259834LL;
	int64_t x494 = INT64_MIN;
	int64_t x495 = INT64_MAX;
	int16_t x496 = 1;

    t118 = ((x493^(x494!=x495))/x496);

    if (t118 != -2028427259833LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x497 = INT64_MIN;
	int64_t x498 = -1494415415849032940LL;
	int32_t x499 = -1;
	uint16_t x500 = 1U;
	static int64_t t119 = 60333058382LL;

    t119 = ((x497^(x498!=x499))/x500);

    if (t119 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x501 = INT32_MAX;
	int64_t x502 = INT64_MIN;
	int16_t x503 = INT16_MAX;
	volatile int16_t x504 = INT16_MIN;

    t120 = ((x501^(x502!=x503))/x504);

    if (t120 != -65535) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x506 = INT8_MAX;
	int64_t x507 = INT64_MIN;
	static int16_t x508 = INT16_MIN;
	int32_t t121 = 15;

    t121 = ((x505^(x506!=x507))/x508);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x509 = -1;
	int16_t x510 = INT16_MIN;
	static int16_t x511 = INT16_MAX;
	volatile int32_t t122 = 19335;

    t122 = ((x509^(x510!=x511))/x512);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x513 = 121U;
	volatile int16_t x514 = -1;
	volatile int16_t x515 = -187;
	uint32_t x516 = UINT32_MAX;
	static uint32_t t123 = 16405505U;

    t123 = ((x513^(x514!=x515))/x516);

    if (t123 != 0U) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x517 = 1229U;
	int8_t x518 = 39;
	volatile int32_t t124 = 61280;

    t124 = ((x517^(x518!=x519))/x520);

    if (t124 != -1228) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x522 = INT64_MAX;
	static volatile int8_t x523 = 5;
	volatile int64_t x524 = 6303LL;
	volatile int64_t t125 = -1LL;

    t125 = ((x521^(x522!=x523))/x524);

    if (t125 != 1463330483397552LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x526 = 0;
	volatile uint64_t x527 = 2939779573236344LLU;
	volatile int32_t x528 = INT32_MIN;
	static int32_t t126 = 20;

    t126 = ((x525^(x526!=x527))/x528);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x529 = 774255703U;
	uint16_t x530 = 151U;
	uint8_t x531 = 4U;
	static uint32_t x532 = UINT32_MAX;
	static uint32_t t127 = 129901U;

    t127 = ((x529^(x530!=x531))/x532);

    if (t127 != 0U) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x533 = INT8_MIN;
	static int32_t x534 = INT32_MIN;
	int64_t x535 = 83975846167366703LL;
	static uint8_t x536 = 12U;
	volatile int32_t t128 = -34743;

    t128 = ((x533^(x534!=x535))/x536);

    if (t128 != -10) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x537 = 13686LLU;
	uint64_t x538 = UINT64_MAX;
	int64_t x539 = 147318580497LL;
	volatile int8_t x540 = -1;
	volatile uint64_t t129 = 1721895467492774LLU;

    t129 = ((x537^(x538!=x539))/x540);

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint32_t x541 = 42362759U;
	int16_t x542 = INT16_MAX;
	uint8_t x543 = 2U;
	volatile int32_t x544 = INT32_MIN;
	volatile uint32_t t130 = 1U;

    t130 = ((x541^(x542!=x543))/x544);

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x545 = -6327062016039523LL;
	int16_t x547 = INT16_MIN;
	static int8_t x548 = INT8_MIN;

    t131 = ((x545^(x546!=x547))/x548);

    if (t131 != 49430172000308LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x549 = 2;
	int32_t x550 = -1;
	int32_t t132 = -109732881;

    t132 = ((x549^(x550!=x551))/x552);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint8_t x553 = 2U;
	int64_t x554 = INT64_MIN;
	int16_t x555 = INT16_MIN;
	uint64_t x556 = UINT64_MAX;
	volatile uint64_t t133 = 15828703220409080LLU;

    t133 = ((x553^(x554!=x555))/x556);

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x559 = -1;
	uint64_t x560 = UINT64_MAX;
	volatile uint64_t t134 = 17819760497332LLU;

    t134 = ((x557^(x558!=x559))/x560);

    if (t134 != 0LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x561 = 58U;
	static uint8_t x562 = UINT8_MAX;
	int32_t x563 = 1;
	int8_t x564 = INT8_MAX;
	int32_t t135 = -100;

    t135 = ((x561^(x562!=x563))/x564);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x565 = UINT32_MAX;
	int32_t x566 = INT32_MIN;
	int16_t x568 = 7817;

    t136 = ((x565^(x566!=x567))/x568);

    if (t136 != 549439U) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x569 = 1;
	static volatile uint32_t x570 = UINT32_MAX;
	int64_t x571 = 7783578091LL;
	volatile uint32_t x572 = UINT32_MAX;
	uint32_t t137 = 4147U;

    t137 = ((x569^(x570!=x571))/x572);

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x575 = -5LL;
	uint8_t x576 = 108U;
	int64_t t138 = -2931LL;

    t138 = ((x573^(x574!=x575))/x576);

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x578 = INT64_MAX;
	uint8_t x579 = UINT8_MAX;
	volatile int64_t x580 = -1LL;
	volatile int64_t t139 = 29LL;

    t139 = ((x577^(x578!=x579))/x580);

    if (t139 != -4LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x581 = 75U;
	int8_t x582 = 0;
	int8_t x583 = INT8_MIN;
	volatile int64_t x584 = INT64_MIN;

    t140 = ((x581^(x582!=x583))/x584);

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x585 = INT32_MAX;
	static uint16_t x586 = 950U;
	static uint32_t t141 = 58065178U;

    t141 = ((x585^(x586!=x587))/x588);

    if (t141 != 5U) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x589 = 91;
	int32_t x592 = INT32_MIN;
	static volatile int32_t t142 = 453264707;

    t142 = ((x589^(x590!=x591))/x592);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x593 = INT64_MIN;
	int32_t x594 = -492003711;
	int16_t x596 = -1;
	volatile int64_t t143 = INT64_MAX;

    t143 = ((x593^(x594!=x595))/x596);

    if (t143 != INT64_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x597 = 511U;
	int32_t x599 = -1;
	static volatile uint32_t t144 = 445935540U;

    t144 = ((x597^(x598!=x599))/x600);

    if (t144 != 0U) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x601 = UINT64_MAX;
	int64_t x602 = INT64_MAX;
	volatile uint16_t x603 = 4U;
	static int8_t x604 = INT8_MIN;
	volatile uint64_t t145 = 65245LLU;

    t145 = ((x601^(x602!=x603))/x604);

    if (t145 != 1LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x605 = INT32_MIN;
	int16_t x606 = INT16_MIN;
	int64_t x607 = INT64_MIN;
	static volatile uint64_t t146 = 115LLU;

    t146 = ((x605^(x606!=x607))/x608);

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x609 = -13LL;
	uint16_t x611 = UINT16_MAX;
	static int8_t x612 = INT8_MIN;
	int64_t t147 = 357287299276084LL;

    t147 = ((x609^(x610!=x611))/x612);

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x613 = 1U;
	uint64_t x614 = 1225656657491779LLU;
	uint64_t x615 = UINT64_MAX;
	static int64_t x616 = 18310343LL;

    t148 = ((x613^(x614!=x615))/x616);

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x617 = INT8_MIN;
	static uint32_t x618 = UINT32_MAX;
	int8_t x619 = INT8_MAX;
	int32_t t149 = -14164651;

    t149 = ((x617^(x618!=x619))/x620);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint16_t x621 = 3812U;
	volatile int64_t x622 = INT64_MIN;
	int16_t x623 = INT16_MAX;
	static int32_t x624 = INT32_MIN;
	int32_t t150 = 482601127;

    t150 = ((x621^(x622!=x623))/x624);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x626 = 618022;
	static uint32_t x627 = 55537U;
	volatile uint16_t x628 = UINT16_MAX;
	int32_t t151 = 252;

    t151 = ((x625^(x626!=x627))/x628);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x630 = -36;
	volatile int64_t x632 = INT64_MIN;
	int64_t t152 = -1023378LL;

    t152 = ((x629^(x630!=x631))/x632);

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint16_t x635 = 16070U;

    t153 = ((x633^(x634!=x635))/x636);

    if (t153 != 1LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x638 = 525382LLU;
	int16_t x639 = INT16_MIN;
	int32_t x640 = -1;
	int32_t t154 = 641451522;

    t154 = ((x637^(x638!=x639))/x640);

    if (t154 != -525) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x641 = UINT16_MAX;
	static int64_t x642 = INT64_MAX;
	int32_t x643 = -1;
	static uint32_t x644 = 15927814U;
	uint32_t t155 = 58U;

    t155 = ((x641^(x642!=x643))/x644);

    if (t155 != 0U) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x645 = INT64_MAX;
	uint16_t x647 = 3974U;
	static volatile uint8_t x648 = UINT8_MAX;

    t156 = ((x645^(x646!=x647))/x648);

    if (t156 != 36170086419038336LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x649 = 4338564;
	int8_t x650 = -26;
	uint32_t x651 = 28U;
	volatile uint16_t x652 = 83U;
	int32_t t157 = -33762;

    t157 = ((x649^(x650!=x651))/x652);

    if (t157 != 52271) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x653 = -551;
	int32_t x654 = INT32_MIN;
	int8_t x656 = INT8_MAX;
	static int32_t t158 = 7;

    t158 = ((x653^(x654!=x655))/x656);

    if (t158 != -4) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x658 = INT64_MIN;
	uint64_t x659 = 207LLU;
	int32_t x660 = INT32_MIN;
	static volatile int32_t t159 = -104174279;

    t159 = ((x657^(x658!=x659))/x660);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint64_t x662 = 3933LLU;
	static uint32_t x663 = 105779073U;
	int32_t x664 = INT32_MIN;
	volatile int32_t t160 = -7103;

    t160 = ((x661^(x662!=x663))/x664);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint8_t x667 = UINT8_MAX;
	int32_t t161 = 514285;

    t161 = ((x665^(x666!=x667))/x668);

    if (t161 != 255) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x669 = 411722503682007LLU;
	volatile uint32_t x670 = 14435U;
	int8_t x671 = INT8_MAX;
	uint16_t x672 = UINT16_MAX;
	uint64_t t162 = 26786425910LLU;

    t162 = ((x669^(x670!=x671))/x672);

    if (t162 != 6282482699LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x673 = -63917645220086858LL;
	int8_t x674 = INT8_MIN;
	int32_t x675 = -7652918;
	int64_t t163 = -43696854316LL;

    t163 = ((x673^(x674!=x675))/x676);

    if (t163 != 10145727220LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x677 = INT32_MAX;
	static uint8_t x678 = 76U;
	volatile uint16_t x679 = 33U;
	int32_t x680 = INT32_MAX;
	volatile int32_t t164 = -764129;

    t164 = ((x677^(x678!=x679))/x680);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint16_t x682 = 22U;
	volatile int64_t x683 = INT64_MIN;
	int16_t x684 = INT16_MAX;
	volatile int32_t t165 = -40685;

    t165 = ((x681^(x682!=x683))/x684);

    if (t165 != -1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x685 = UINT16_MAX;
	uint8_t x686 = 11U;
	static int32_t t166 = 27;

    t166 = ((x685^(x686!=x687))/x688);

    if (t166 != -1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x689 = 874;
	static volatile int32_t x690 = 1;
	int64_t x691 = -1315738226690355535LL;
	static int16_t x692 = -1;
	static volatile int32_t t167 = 2280813;

    t167 = ((x689^(x690!=x691))/x692);

    if (t167 != -875) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x693 = -103354904LL;
	int32_t x696 = -1;

    t168 = ((x693^(x694!=x695))/x696);

    if (t168 != 103354903LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x697 = INT8_MIN;
	static int32_t x698 = 26331999;
	int64_t x699 = -3LL;
	volatile int32_t x700 = -157670736;
	volatile int32_t t169 = 59;

    t169 = ((x697^(x698!=x699))/x700);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint32_t x701 = 4737U;
	int16_t x703 = INT16_MIN;
	volatile int8_t x704 = -5;

    t170 = ((x701^(x702!=x703))/x704);

    if (t170 != 0U) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x706 = -1;
	uint16_t x707 = 6415U;
	uint32_t x708 = 36U;
	volatile uint32_t t171 = 973891U;

    t171 = ((x705^(x706!=x707))/x708);

    if (t171 != 119304647U) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint8_t x709 = UINT8_MAX;
	uint32_t x711 = 1635422U;
	uint32_t x712 = 329461148U;
	uint32_t t172 = 331139622U;

    t172 = ((x709^(x710!=x711))/x712);

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x713 = INT32_MIN;
	int32_t x714 = INT32_MIN;
	static uint64_t x715 = UINT64_MAX;
	int32_t x716 = INT32_MAX;
	volatile int32_t t173 = 178911;

    t173 = ((x713^(x714!=x715))/x716);

    if (t173 != -1) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x717 = INT64_MIN;
	uint8_t x718 = 1U;
	int16_t x719 = INT16_MIN;
	int32_t x720 = INT32_MIN;
	int64_t t174 = -3478838624115LL;

    t174 = ((x717^(x718!=x719))/x720);

    if (t174 != 4294967295LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int16_t x721 = -32;
	int16_t x722 = -3;
	int32_t x723 = INT32_MAX;

    t175 = ((x721^(x722!=x723))/x724);

    if (t175 != -31) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x727 = -13831;
	static uint16_t x728 = 10533U;
	int32_t t176 = -742729721;

    t176 = ((x725^(x726!=x727))/x728);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x729 = INT32_MAX;
	uint16_t x730 = UINT16_MAX;
	static int32_t x731 = INT32_MIN;
	static uint32_t x732 = 62391U;
	uint32_t t177 = 171674209U;

    t177 = ((x729^(x730!=x731))/x732);

    if (t177 != 34419U) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x733 = UINT16_MAX;
	volatile int64_t x734 = -15LL;
	static int64_t x735 = -332LL;
	int8_t x736 = INT8_MIN;
	volatile int32_t t178 = -488;

    t178 = ((x733^(x734!=x735))/x736);

    if (t178 != -511) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x737 = 3U;
	volatile int16_t x738 = INT16_MAX;
	uint8_t x739 = UINT8_MAX;
	static volatile int32_t t179 = -10339;

    t179 = ((x737^(x738!=x739))/x740);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x741 = INT16_MAX;
	uint8_t x742 = 15U;
	int16_t x744 = -164;
	int32_t t180 = -178565;

    t180 = ((x741^(x742!=x743))/x744);

    if (t180 != -199) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x745 = 5157U;
	int64_t x746 = INT64_MIN;
	static int64_t x747 = -388487143LL;
	static uint16_t x748 = 6U;
	static int32_t t181 = -332;

    t181 = ((x745^(x746!=x747))/x748);

    if (t181 != 859) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x749 = INT32_MIN;
	uint16_t x750 = 6U;
	int16_t x751 = -5;
	int64_t x752 = INT64_MIN;
	int64_t t182 = -5LL;

    t182 = ((x749^(x750!=x751))/x752);

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int32_t x753 = -1;
	static int8_t x755 = -23;
	int8_t x756 = INT8_MIN;
	volatile int32_t t183 = -2347885;

    t183 = ((x753^(x754!=x755))/x756);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x757 = INT64_MIN;
	uint16_t x758 = 6U;
	static int8_t x759 = 36;
	uint16_t x760 = UINT16_MAX;
	volatile int64_t t184 = -178555LL;

    t184 = ((x757^(x758!=x759))/x760);

    if (t184 != -140739635871744LL) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x761 = -1;
	volatile int32_t x762 = 1590172;
	static int64_t x763 = -1LL;
	int64_t x764 = 29724369083444LL;
	volatile int64_t t185 = 19LL;

    t185 = ((x761^(x762!=x763))/x764);

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x765 = 3;
	static uint64_t x766 = 6544532635283786LLU;
	uint64_t x767 = UINT64_MAX;

    t186 = ((x765^(x766!=x767))/x768);

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x769 = 4U;
	static int16_t x770 = INT16_MIN;
	static int16_t x772 = INT16_MIN;
	int32_t t187 = 97102724;

    t187 = ((x769^(x770!=x771))/x772);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x773 = UINT64_MAX;
	static uint32_t x774 = UINT32_MAX;
	volatile uint32_t x775 = UINT32_MAX;
	uint16_t x776 = 295U;
	volatile uint64_t t188 = 3491LLU;

    t188 = ((x773^(x774!=x775))/x776);

    if (t188 != 62531335843083225LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint32_t x779 = 15U;
	int32_t x780 = 78582087;
	static volatile int32_t t189 = -1;

    t189 = ((x777^(x778!=x779))/x780);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x781 = 5;
	int8_t x782 = 1;
	volatile int32_t x783 = INT32_MAX;
	static volatile int32_t t190 = -63;

    t190 = ((x781^(x782!=x783))/x784);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint64_t x785 = UINT64_MAX;
	uint32_t x786 = UINT32_MAX;
	int8_t x788 = INT8_MAX;
	uint64_t t191 = 19280617309701451LLU;

    t191 = ((x785^(x786!=x787))/x788);

    if (t191 != 145249953336295682LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile uint16_t x789 = UINT16_MAX;
	uint16_t x790 = 2151U;
	int64_t x791 = INT64_MIN;
	uint8_t x792 = 1U;
	volatile int32_t t192 = -452;

    t192 = ((x789^(x790!=x791))/x792);

    if (t192 != 65534) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x793 = INT32_MIN;
	int32_t x794 = INT32_MAX;
	int64_t x795 = INT64_MAX;
	uint16_t x796 = 13U;
	volatile int32_t t193 = -46983483;

    t193 = ((x793^(x794!=x795))/x796);

    if (t193 != -165191049) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x797 = INT64_MIN;
	volatile int64_t t194 = -137856485240081LL;

    t194 = ((x797^(x798!=x799))/x800);

    if (t194 != 281474976710655LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x801 = INT8_MAX;
	int16_t x802 = INT16_MIN;
	int64_t x803 = 0LL;
	volatile uint64_t t195 = 28LLU;

    t195 = ((x801^(x802!=x803))/x804);

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x805 = INT64_MIN;
	int16_t x806 = 1;
	volatile int8_t x807 = INT8_MIN;
	int16_t x808 = INT16_MIN;

    t196 = ((x805^(x806!=x807))/x808);

    if (t196 != 281474976710655LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x812 = -258690383054LL;
	volatile int64_t t197 = 138751LL;

    t197 = ((x809^(x810!=x811))/x812);

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int32_t x813 = -87210342;
	volatile uint16_t x814 = UINT16_MAX;
	int16_t x815 = INT16_MIN;
	uint32_t x816 = 11U;

    t198 = ((x813^(x814!=x815))/x816);

    if (t198 != 382523359U) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x817 = 3U;
	int32_t x818 = INT32_MIN;
	int8_t x819 = INT8_MIN;
	uint64_t x820 = 1547LLU;

    t199 = ((x817^(x818!=x819))/x820);

    if (t199 != 0LLU) { NG(); } else { ; }
	
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

