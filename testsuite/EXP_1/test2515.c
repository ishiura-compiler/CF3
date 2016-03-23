
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

static int64_t x11 = -97244964LL;
int8_t x19 = 0;
int64_t x27 = INT64_MAX;
int8_t x34 = 6;
int16_t x35 = INT16_MIN;
static int32_t x39 = -3806215;
volatile int32_t x41 = INT32_MIN;
int32_t t10 = 11;
static int64_t x53 = INT64_MIN;
int16_t x56 = INT16_MIN;
int32_t t13 = 39078223;
uint64_t x57 = 2429LLU;
int64_t x60 = INT64_MIN;
static int32_t t15 = -13871317;
volatile int8_t x65 = -1;
int32_t x67 = 69554654;
uint32_t x74 = 479496U;
volatile int16_t x77 = 748;
static volatile int8_t x79 = -1;
int16_t x86 = INT16_MIN;
volatile int32_t t21 = -1496593;
int16_t x92 = INT16_MIN;
int8_t x93 = 1;
volatile int32_t t23 = -588;
uint32_t x106 = 41252U;
int64_t x107 = -1LL;
int16_t x112 = 3;
volatile uint64_t x123 = 69497164958223750LLU;
int8_t x125 = INT8_MIN;
static int8_t x130 = INT8_MAX;
uint8_t x138 = 5U;
int16_t x139 = INT16_MAX;
int8_t x155 = INT8_MIN;
int16_t x157 = -1;
int8_t x158 = INT8_MIN;
uint64_t x161 = 1LLU;
int8_t x163 = -1;
volatile int32_t t40 = 166699916;
static volatile int32_t t41 = 1070;
uint8_t x176 = UINT8_MAX;
int8_t x184 = INT8_MAX;
static volatile int32_t t45 = 1581983;
uint32_t x188 = 8821363U;
int16_t x189 = INT16_MIN;
int64_t x194 = INT64_MIN;
static uint64_t x196 = UINT64_MAX;
volatile int32_t x197 = 1025931929;
int32_t x198 = -21609591;
int16_t x200 = INT16_MAX;
uint16_t x201 = UINT16_MAX;
int32_t x205 = INT32_MIN;
uint64_t x212 = 6014710LLU;
volatile int64_t x215 = INT64_MIN;
int16_t x224 = -1;
uint32_t x226 = 254U;
static uint64_t x227 = 12071476680LLU;
int16_t x228 = 1354;
uint64_t x231 = 13651LLU;
int8_t x234 = INT8_MAX;
volatile uint8_t x236 = 86U;
static int32_t t60 = -56215;
int16_t x246 = INT16_MIN;
int8_t x248 = -1;
uint8_t x257 = 0U;
volatile int8_t x258 = -11;
volatile int8_t x259 = 18;
int16_t x267 = 40;
volatile uint8_t x273 = 45U;
uint64_t x274 = 13LLU;
volatile uint64_t x276 = 4304684923LLU;
volatile int16_t x287 = INT16_MAX;
int8_t x294 = INT8_MIN;
int16_t x296 = -1;
int32_t x299 = INT32_MAX;
static uint16_t x300 = UINT16_MAX;
int8_t x304 = INT8_MIN;
int32_t t78 = 9;
int64_t x338 = INT64_MAX;
int32_t t84 = 1369756;
uint32_t x341 = 8U;
int16_t x347 = 125;
int8_t x353 = INT8_MIN;
volatile int32_t t88 = 29205044;
int16_t x358 = -7016;
int64_t x363 = INT64_MIN;
int8_t x364 = -1;
volatile uint64_t x365 = UINT64_MAX;
int32_t t91 = 107178;
int64_t x374 = INT64_MIN;
int32_t x375 = INT32_MIN;
volatile uint8_t x397 = UINT8_MAX;
static volatile int32_t x398 = INT32_MIN;
uint32_t x399 = UINT32_MAX;
int32_t x405 = 14493180;
int32_t x410 = INT32_MAX;
int32_t x416 = -15;
int32_t t103 = -20088683;
uint16_t x431 = 2686U;
volatile uint64_t x444 = 45LLU;
volatile uint32_t x445 = 93058U;
int8_t x449 = -1;
int64_t x450 = INT64_MAX;
static volatile int32_t t112 = -365658;
static int32_t x459 = INT32_MAX;
volatile uint8_t x462 = UINT8_MAX;
int8_t x463 = -19;
int64_t x466 = INT64_MIN;
int64_t x467 = 14521516169444185LL;
volatile int32_t t119 = -126;
volatile int16_t x483 = INT16_MAX;
static volatile int32_t t120 = 257728897;
uint64_t x485 = UINT64_MAX;
uint8_t x490 = 105U;
static int32_t x492 = 6;
int32_t t122 = -14663;
int16_t x507 = INT16_MIN;
int32_t t127 = -28250;
static uint16_t x515 = 1696U;
static uint16_t x516 = 0U;
int64_t x518 = INT64_MIN;
static int8_t x526 = -1;
int16_t x532 = INT16_MIN;
int16_t x538 = INT16_MAX;
uint32_t x541 = 11482335U;
int16_t x545 = 481;
uint8_t x547 = 1U;
uint8_t x548 = 0U;
int32_t t136 = 50328012;
volatile int32_t t137 = 8;
int32_t x553 = INT32_MAX;
volatile uint32_t x554 = UINT32_MAX;
int16_t x555 = INT16_MAX;
static int64_t x556 = INT64_MAX;
volatile int64_t x560 = INT64_MIN;
static int64_t x562 = INT64_MIN;
int32_t x566 = INT32_MAX;
volatile int16_t x574 = 3169;
static int32_t x575 = INT32_MIN;
static int32_t t143 = -2;
static uint32_t x580 = 624U;
static volatile int16_t x583 = INT16_MIN;
int32_t x584 = INT32_MIN;
int32_t t145 = -1420;
uint8_t x586 = UINT8_MAX;
int32_t x590 = INT32_MIN;
volatile uint16_t x591 = 1527U;
int8_t x599 = INT8_MIN;
uint32_t x604 = 4067U;
static int64_t x606 = INT64_MIN;
volatile int16_t x608 = INT16_MIN;
uint16_t x609 = UINT16_MAX;
static int8_t x614 = INT8_MIN;
uint32_t x623 = UINT32_MAX;
int32_t x626 = INT32_MAX;
int32_t x638 = -10;
int8_t x642 = 0;
int32_t x644 = -628071243;
volatile uint16_t x652 = UINT16_MAX;
int32_t x656 = -594437843;
uint16_t x661 = 540U;
uint32_t x663 = 1U;
uint8_t x665 = UINT8_MAX;
int32_t x672 = -269;
volatile int32_t x674 = -1;
volatile int32_t t168 = -175698485;
volatile int16_t x677 = -1;
uint16_t x692 = 203U;
volatile int32_t t172 = 121504675;
volatile uint32_t x704 = 60U;
volatile int32_t t176 = -1078;
static volatile int32_t t177 = -40;
int16_t x714 = -11093;
uint8_t x717 = 21U;
int32_t x721 = -1;
static int32_t x724 = INT32_MAX;
uint32_t x726 = 18893768U;
static volatile int32_t t181 = 385176536;
static volatile int32_t x737 = -690299;
uint8_t x740 = UINT8_MAX;
volatile uint32_t x741 = UINT32_MAX;
int32_t x749 = -1;
int32_t t187 = 1828;
volatile int8_t x754 = -25;
volatile uint8_t x759 = 3U;
uint32_t x760 = 25U;
int16_t x762 = -3;
uint8_t x763 = 4U;
volatile int32_t t192 = -901;
int8_t x773 = 2;
int64_t x775 = 941278037952063778LL;
static uint32_t x777 = UINT32_MAX;
uint64_t x781 = UINT64_MAX;
int64_t x782 = INT64_MIN;
int16_t x787 = -1;
volatile int32_t t197 = 113210749;
int16_t x795 = 171;
int32_t t198 = -11961072;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	static int16_t x2 = -1;
	int8_t x3 = -1;
	static uint32_t x4 = UINT32_MAX;
	int32_t t0 = 172358;

    t0 = (((x1|x2)&x3)>x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MIN;
	static volatile int8_t x6 = 10;
	static uint16_t x7 = UINT16_MAX;
	int8_t x8 = 22;
	int32_t t1 = 107212;

    t1 = (((x5|x6)&x7)>x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = 202190;
	uint64_t x10 = UINT64_MAX;
	uint32_t x12 = 972687526U;
	int32_t t2 = 1;

    t2 = (((x9|x10)&x11)>x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint16_t x13 = UINT16_MAX;
	static volatile uint8_t x14 = 28U;
	static int8_t x15 = -1;
	uint8_t x16 = 3U;
	static int32_t t3 = -734;

    t3 = (((x13|x14)&x15)>x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MIN;
	static int32_t x18 = INT32_MIN;
	int64_t x20 = -1LL;
	static volatile int32_t t4 = 6028736;

    t4 = (((x17|x18)&x19)>x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x21 = INT16_MIN;
	int32_t x22 = -5133;
	int8_t x23 = -1;
	volatile int16_t x24 = INT16_MAX;
	int32_t t5 = -868560;

    t5 = (((x21|x22)&x23)>x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = -1LL;
	static int8_t x26 = -1;
	static int32_t x28 = 900564;
	volatile int32_t t6 = -8266;

    t6 = (((x25|x26)&x27)>x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MAX;
	static uint32_t x30 = UINT32_MAX;
	static uint64_t x31 = UINT64_MAX;
	int8_t x32 = INT8_MAX;
	static volatile int32_t t7 = 318;

    t7 = (((x29|x30)&x31)>x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x33 = 479278642U;
	uint64_t x36 = UINT64_MAX;
	int32_t t8 = 0;

    t8 = (((x33|x34)&x35)>x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x37 = 2U;
	int32_t x38 = 234829;
	uint64_t x40 = UINT64_MAX;
	volatile int32_t t9 = 31;

    t9 = (((x37|x38)&x39)>x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x42 = INT8_MIN;
	int16_t x43 = INT16_MIN;
	uint32_t x44 = UINT32_MAX;

    t10 = (((x41|x42)&x43)>x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x45 = 102;
	volatile uint32_t x46 = UINT32_MAX;
	volatile int32_t x47 = INT32_MAX;
	static uint16_t x48 = UINT16_MAX;
	int32_t t11 = 168;

    t11 = (((x45|x46)&x47)>x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x49 = -1;
	volatile uint32_t x50 = UINT32_MAX;
	volatile int64_t x51 = -1LL;
	volatile uint64_t x52 = 524452296850LLU;
	int32_t t12 = -7761479;

    t12 = (((x49|x50)&x51)>x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x54 = UINT16_MAX;
	static int64_t x55 = -1LL;

    t13 = (((x53|x54)&x55)>x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x58 = INT8_MIN;
	int16_t x59 = INT16_MIN;
	volatile int32_t t14 = 0;

    t14 = (((x57|x58)&x59)>x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x61 = INT8_MIN;
	uint64_t x62 = UINT64_MAX;
	int64_t x63 = INT64_MAX;
	uint64_t x64 = 13LLU;

    t15 = (((x61|x62)&x63)>x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x66 = INT64_MIN;
	int32_t x68 = INT32_MAX;
	volatile int32_t t16 = -3;

    t16 = (((x65|x66)&x67)>x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x69 = 6622600;
	uint64_t x70 = 5656994287672LLU;
	int16_t x71 = 12;
	int8_t x72 = INT8_MIN;
	int32_t t17 = 1;

    t17 = (((x69|x70)&x71)>x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = INT32_MIN;
	int16_t x75 = -2;
	uint64_t x76 = 197026618810151LLU;
	volatile int32_t t18 = -468663;

    t18 = (((x73|x74)&x75)>x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x78 = -287;
	int32_t x80 = 83789;
	static int32_t t19 = -1064274890;

    t19 = (((x77|x78)&x79)>x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = INT16_MAX;
	volatile uint16_t x82 = 31U;
	volatile int64_t x83 = 4859361416634978LL;
	int8_t x84 = -1;
	int32_t t20 = -609;

    t20 = (((x81|x82)&x83)>x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x85 = -1;
	int32_t x87 = 0;
	int64_t x88 = INT64_MIN;

    t21 = (((x85|x86)&x87)>x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile uint32_t x89 = UINT32_MAX;
	int16_t x90 = INT16_MIN;
	int8_t x91 = 49;
	static int32_t t22 = 1652579;

    t22 = (((x89|x90)&x91)>x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x94 = UINT16_MAX;
	volatile int32_t x95 = INT32_MAX;
	int8_t x96 = INT8_MIN;

    t23 = (((x93|x94)&x95)>x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x97 = -513606448;
	int16_t x98 = 0;
	uint8_t x99 = UINT8_MAX;
	int64_t x100 = INT64_MAX;
	int32_t t24 = -7;

    t24 = (((x97|x98)&x99)>x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = 256;
	volatile int64_t x102 = -1LL;
	int64_t x103 = 9LL;
	uint8_t x104 = 95U;
	int32_t t25 = 196061291;

    t25 = (((x101|x102)&x103)>x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x105 = -1;
	int32_t x108 = INT32_MIN;
	int32_t t26 = 250505;

    t26 = (((x105|x106)&x107)>x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = INT16_MIN;
	uint16_t x110 = 25U;
	uint8_t x111 = 55U;
	int32_t t27 = 1948467;

    t27 = (((x109|x110)&x111)>x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = INT8_MAX;
	volatile uint16_t x114 = UINT16_MAX;
	static int8_t x115 = -1;
	int32_t x116 = INT32_MIN;
	int32_t t28 = 1;

    t28 = (((x113|x114)&x115)>x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint64_t x117 = 2405523388162LLU;
	static uint16_t x118 = 1U;
	int8_t x119 = INT8_MIN;
	uint8_t x120 = UINT8_MAX;
	volatile int32_t t29 = 865755216;

    t29 = (((x117|x118)&x119)>x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = 13;
	int64_t x122 = INT64_MAX;
	uint64_t x124 = 22357284474016LLU;
	volatile int32_t t30 = -638;

    t30 = (((x121|x122)&x123)>x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x126 = -15;
	volatile uint64_t x127 = 1033678557LLU;
	int64_t x128 = 848709734912LL;
	volatile int32_t t31 = -490;

    t31 = (((x125|x126)&x127)>x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = -1;
	static int8_t x131 = INT8_MIN;
	static uint16_t x132 = UINT16_MAX;
	int32_t t32 = 59348;

    t32 = (((x129|x130)&x131)>x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = 0;
	uint32_t x134 = 2U;
	uint32_t x135 = 252U;
	static int64_t x136 = 933LL;
	int32_t t33 = -32948079;

    t33 = (((x133|x134)&x135)>x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x137 = -195;
	int32_t x140 = 553420391;
	int32_t t34 = -17484;

    t34 = (((x137|x138)&x139)>x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = -504888;
	volatile int32_t x142 = INT32_MAX;
	static volatile int64_t x143 = 410LL;
	static int8_t x144 = 1;
	volatile int32_t t35 = 3273768;

    t35 = (((x141|x142)&x143)>x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = -50;
	int32_t x146 = INT32_MIN;
	int64_t x147 = 13730456872754304LL;
	int32_t x148 = INT32_MIN;
	int32_t t36 = -74223;

    t36 = (((x145|x146)&x147)>x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x149 = 1;
	int64_t x150 = INT64_MAX;
	int64_t x151 = 838294380LL;
	int16_t x152 = 18;
	int32_t t37 = -20454;

    t37 = (((x149|x150)&x151)>x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x153 = INT64_MAX;
	int16_t x154 = INT16_MAX;
	int8_t x156 = INT8_MIN;
	volatile int32_t t38 = 84025303;

    t38 = (((x153|x154)&x155)>x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x159 = 37U;
	static int16_t x160 = -2;
	volatile int32_t t39 = 203566;

    t39 = (((x157|x158)&x159)>x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint16_t x162 = UINT16_MAX;
	int8_t x164 = INT8_MIN;

    t40 = (((x161|x162)&x163)>x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x165 = 238U;
	int16_t x166 = -1;
	uint64_t x167 = 584696188LLU;
	static uint32_t x168 = UINT32_MAX;

    t41 = (((x165|x166)&x167)>x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x169 = -1LL;
	static int8_t x170 = 1;
	int32_t x171 = INT32_MIN;
	int16_t x172 = -1;
	volatile int32_t t42 = -295558;

    t42 = (((x169|x170)&x171)>x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = 234;
	static volatile uint32_t x174 = UINT32_MAX;
	int32_t x175 = INT32_MIN;
	int32_t t43 = 1382307;

    t43 = (((x173|x174)&x175)>x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = INT32_MIN;
	int32_t x178 = -1;
	int16_t x179 = -1;
	static int64_t x180 = 16912106216LL;
	int32_t t44 = 3814;

    t44 = (((x177|x178)&x179)>x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = 6067744;
	int16_t x182 = INT16_MAX;
	uint8_t x183 = UINT8_MAX;

    t45 = (((x181|x182)&x183)>x184);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x185 = -1LL;
	static uint8_t x186 = 24U;
	uint16_t x187 = 7508U;
	volatile int32_t t46 = 3811801;

    t46 = (((x185|x186)&x187)>x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint64_t x190 = 4461952883LLU;
	volatile uint64_t x191 = UINT64_MAX;
	int16_t x192 = -18;
	static volatile int32_t t47 = -58330;

    t47 = (((x189|x190)&x191)>x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x193 = 0U;
	volatile uint16_t x195 = 3292U;
	int32_t t48 = -751;

    t48 = (((x193|x194)&x195)>x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x199 = -1135782175401555427LL;
	int32_t t49 = -1010909;

    t49 = (((x197|x198)&x199)>x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x202 = -1LL;
	int32_t x203 = 182674;
	volatile int32_t x204 = INT32_MIN;
	int32_t t50 = 161;

    t50 = (((x201|x202)&x203)>x204);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x206 = UINT8_MAX;
	static int16_t x207 = -1;
	uint16_t x208 = UINT16_MAX;
	volatile int32_t t51 = 185835;

    t51 = (((x205|x206)&x207)>x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x209 = UINT32_MAX;
	int16_t x210 = INT16_MAX;
	int8_t x211 = 21;
	volatile int32_t t52 = -1015;

    t52 = (((x209|x210)&x211)>x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = INT64_MIN;
	int8_t x214 = INT8_MIN;
	uint32_t x216 = 198792341U;
	static volatile int32_t t53 = -50685;

    t53 = (((x213|x214)&x215)>x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = 205041247;
	volatile uint64_t x218 = UINT64_MAX;
	uint16_t x219 = 0U;
	int8_t x220 = INT8_MIN;
	volatile int32_t t54 = 13;

    t54 = (((x217|x218)&x219)>x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x221 = 2027225703354LL;
	int16_t x222 = -1;
	int16_t x223 = -23;
	int32_t t55 = 30702658;

    t55 = (((x221|x222)&x223)>x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x225 = UINT64_MAX;
	volatile int32_t t56 = -1;

    t56 = (((x225|x226)&x227)>x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint8_t x229 = 31U;
	static int16_t x230 = INT16_MIN;
	int16_t x232 = INT16_MIN;
	volatile int32_t t57 = -6;

    t57 = (((x229|x230)&x231)>x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint64_t x233 = 253790LLU;
	int64_t x235 = -14LL;
	static int32_t t58 = -217851879;

    t58 = (((x233|x234)&x235)>x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int16_t x237 = INT16_MIN;
	int64_t x238 = 196LL;
	static volatile uint8_t x239 = 31U;
	volatile int64_t x240 = -1LL;
	volatile int32_t t59 = 1813072;

    t59 = (((x237|x238)&x239)>x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x241 = 67415365045823467LLU;
	static int16_t x242 = INT16_MIN;
	static uint8_t x243 = 52U;
	int64_t x244 = 21431293956463324LL;

    t60 = (((x241|x242)&x243)>x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = INT16_MIN;
	int64_t x247 = INT64_MIN;
	volatile int32_t t61 = -503;

    t61 = (((x245|x246)&x247)>x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x249 = INT32_MIN;
	int16_t x250 = 88;
	int8_t x251 = INT8_MAX;
	static int16_t x252 = INT16_MAX;
	int32_t t62 = -4665994;

    t62 = (((x249|x250)&x251)>x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = INT16_MAX;
	volatile int16_t x254 = INT16_MIN;
	int8_t x255 = -1;
	int64_t x256 = INT64_MIN;
	volatile int32_t t63 = 0;

    t63 = (((x253|x254)&x255)>x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x260 = 1;
	volatile int32_t t64 = -28;

    t64 = (((x257|x258)&x259)>x260);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x261 = -1;
	int32_t x262 = INT32_MAX;
	volatile uint16_t x263 = 290U;
	int8_t x264 = 39;
	int32_t t65 = -645;

    t65 = (((x261|x262)&x263)>x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = INT32_MAX;
	int8_t x266 = INT8_MIN;
	static uint32_t x268 = 1U;
	static volatile int32_t t66 = -53255606;

    t66 = (((x265|x266)&x267)>x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x269 = -741;
	int8_t x270 = 1;
	volatile int16_t x271 = -1;
	int16_t x272 = INT16_MIN;
	int32_t t67 = 108145;

    t67 = (((x269|x270)&x271)>x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x275 = INT16_MIN;
	int32_t t68 = -12831250;

    t68 = (((x273|x274)&x275)>x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint16_t x277 = UINT16_MAX;
	volatile int8_t x278 = 46;
	volatile int32_t x279 = 221176;
	static uint32_t x280 = 99U;
	volatile int32_t t69 = -4;

    t69 = (((x277|x278)&x279)>x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x281 = 3U;
	static int64_t x282 = 17284179179172LL;
	volatile int16_t x283 = INT16_MIN;
	static volatile uint8_t x284 = UINT8_MAX;
	static volatile int32_t t70 = -7;

    t70 = (((x281|x282)&x283)>x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x285 = INT64_MAX;
	static int8_t x286 = 1;
	uint16_t x288 = 220U;
	int32_t t71 = 146825073;

    t71 = (((x285|x286)&x287)>x288);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x289 = -1;
	int64_t x290 = INT64_MAX;
	int64_t x291 = INT64_MIN;
	int16_t x292 = INT16_MIN;
	static volatile int32_t t72 = -369696;

    t72 = (((x289|x290)&x291)>x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x293 = 6476U;
	static uint32_t x295 = 61U;
	volatile int32_t t73 = -221083;

    t73 = (((x293|x294)&x295)>x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x297 = -1;
	static uint32_t x298 = UINT32_MAX;
	volatile int32_t t74 = -86366;

    t74 = (((x297|x298)&x299)>x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x301 = INT32_MAX;
	uint8_t x302 = 5U;
	static int64_t x303 = INT64_MIN;
	volatile int32_t t75 = -52958;

    t75 = (((x301|x302)&x303)>x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x305 = -18;
	static uint16_t x306 = 3U;
	static int64_t x307 = 0LL;
	uint64_t x308 = 200929LLU;
	static volatile int32_t t76 = -1;

    t76 = (((x305|x306)&x307)>x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x309 = INT8_MAX;
	uint8_t x310 = 65U;
	uint32_t x311 = UINT32_MAX;
	uint8_t x312 = 2U;
	int32_t t77 = 55802828;

    t77 = (((x309|x310)&x311)>x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x313 = UINT16_MAX;
	uint32_t x314 = UINT32_MAX;
	int32_t x315 = INT32_MIN;
	int64_t x316 = INT64_MAX;

    t78 = (((x313|x314)&x315)>x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x317 = 470U;
	static int32_t x318 = INT32_MIN;
	volatile int16_t x319 = 0;
	static int64_t x320 = INT64_MIN;
	int32_t t79 = 872131;

    t79 = (((x317|x318)&x319)>x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x321 = 995734295752LLU;
	static uint32_t x322 = 7611188U;
	uint64_t x323 = 99LLU;
	uint32_t x324 = UINT32_MAX;
	volatile int32_t t80 = 129;

    t80 = (((x321|x322)&x323)>x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x325 = INT8_MAX;
	volatile int32_t x326 = INT32_MIN;
	uint16_t x327 = 171U;
	int16_t x328 = INT16_MAX;
	static volatile int32_t t81 = 232670;

    t81 = (((x325|x326)&x327)>x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x329 = 7U;
	uint32_t x330 = 6485U;
	int32_t x331 = 32330;
	int32_t x332 = INT32_MIN;
	static volatile int32_t t82 = 19337;

    t82 = (((x329|x330)&x331)>x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x333 = 88647365U;
	uint8_t x334 = 34U;
	uint64_t x335 = 5903410863539174LLU;
	uint16_t x336 = 30U;
	volatile int32_t t83 = 24;

    t83 = (((x333|x334)&x335)>x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x337 = -1;
	int64_t x339 = -1LL;
	volatile int16_t x340 = -13174;

    t84 = (((x337|x338)&x339)>x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x342 = UINT16_MAX;
	int8_t x343 = -57;
	uint16_t x344 = 15U;
	static int32_t t85 = -55029;

    t85 = (((x341|x342)&x343)>x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x345 = INT8_MIN;
	int64_t x346 = -1LL;
	static int32_t x348 = -13;
	int32_t t86 = -696598452;

    t86 = (((x345|x346)&x347)>x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x349 = INT64_MAX;
	static int32_t x350 = INT32_MIN;
	int64_t x351 = -233988901LL;
	uint64_t x352 = 37294257798LLU;
	volatile int32_t t87 = 3121;

    t87 = (((x349|x350)&x351)>x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x354 = -34586420LL;
	int16_t x355 = INT16_MIN;
	uint8_t x356 = UINT8_MAX;

    t88 = (((x353|x354)&x355)>x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x357 = INT32_MIN;
	int8_t x359 = -1;
	int16_t x360 = 0;
	volatile int32_t t89 = -202667;

    t89 = (((x357|x358)&x359)>x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x361 = 50201169856LLU;
	uint8_t x362 = 5U;
	int32_t t90 = -444183881;

    t90 = (((x361|x362)&x363)>x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x366 = UINT32_MAX;
	static int64_t x367 = INT64_MIN;
	int16_t x368 = INT16_MIN;

    t91 = (((x365|x366)&x367)>x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x369 = UINT64_MAX;
	uint32_t x370 = UINT32_MAX;
	int8_t x371 = INT8_MIN;
	static int32_t x372 = INT32_MAX;
	static volatile int32_t t92 = -16079;

    t92 = (((x369|x370)&x371)>x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x373 = 65;
	volatile int8_t x376 = 13;
	int32_t t93 = -15;

    t93 = (((x373|x374)&x375)>x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x377 = INT8_MIN;
	uint8_t x378 = 32U;
	int8_t x379 = -1;
	int16_t x380 = INT16_MIN;
	int32_t t94 = -29;

    t94 = (((x377|x378)&x379)>x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x381 = UINT8_MAX;
	int16_t x382 = 1832;
	static int32_t x383 = -237;
	int8_t x384 = 1;
	volatile int32_t t95 = -25858839;

    t95 = (((x381|x382)&x383)>x384);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x385 = INT64_MAX;
	volatile int64_t x386 = -1LL;
	volatile int64_t x387 = INT64_MAX;
	uint8_t x388 = UINT8_MAX;
	int32_t t96 = 375457;

    t96 = (((x385|x386)&x387)>x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint32_t x389 = UINT32_MAX;
	int8_t x390 = -1;
	static int64_t x391 = -104946992600LL;
	int32_t x392 = INT32_MIN;
	static volatile int32_t t97 = 12858715;

    t97 = (((x389|x390)&x391)>x392);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x393 = -62569499LL;
	volatile int32_t x394 = -49;
	volatile uint16_t x395 = 4U;
	static int32_t x396 = INT32_MAX;
	volatile int32_t t98 = 10449;

    t98 = (((x393|x394)&x395)>x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x400 = INT64_MAX;
	int32_t t99 = -16738;

    t99 = (((x397|x398)&x399)>x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x401 = 2521U;
	int8_t x402 = INT8_MIN;
	volatile int64_t x403 = -1LL;
	int64_t x404 = INT64_MIN;
	int32_t t100 = 5;

    t100 = (((x401|x402)&x403)>x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x406 = 15U;
	static volatile int16_t x407 = -41;
	uint16_t x408 = 15642U;
	int32_t t101 = -2752621;

    t101 = (((x405|x406)&x407)>x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = INT64_MAX;
	int32_t x411 = INT32_MIN;
	int8_t x412 = INT8_MIN;
	volatile int32_t t102 = -7622798;

    t102 = (((x409|x410)&x411)>x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x413 = -1;
	int8_t x414 = INT8_MAX;
	int16_t x415 = INT16_MIN;

    t103 = (((x413|x414)&x415)>x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = 3150478;
	int32_t x418 = 10;
	int32_t x419 = 0;
	int16_t x420 = INT16_MAX;
	volatile int32_t t104 = 0;

    t104 = (((x417|x418)&x419)>x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x421 = UINT32_MAX;
	int32_t x422 = INT32_MAX;
	static volatile int64_t x423 = INT64_MIN;
	uint64_t x424 = 1484161117LLU;
	static volatile int32_t t105 = 206382;

    t105 = (((x421|x422)&x423)>x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x425 = 187394451;
	volatile uint64_t x426 = 3635LLU;
	int8_t x427 = 17;
	volatile int16_t x428 = -346;
	int32_t t106 = -1;

    t106 = (((x425|x426)&x427)>x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x429 = INT32_MIN;
	uint16_t x430 = UINT16_MAX;
	int64_t x432 = INT64_MIN;
	volatile int32_t t107 = 7419586;

    t107 = (((x429|x430)&x431)>x432);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x433 = -4890LL;
	static int32_t x434 = INT32_MIN;
	int8_t x435 = INT8_MIN;
	int64_t x436 = INT64_MIN;
	int32_t t108 = -446;

    t108 = (((x433|x434)&x435)>x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x437 = INT8_MAX;
	static uint32_t x438 = UINT32_MAX;
	uint32_t x439 = UINT32_MAX;
	uint16_t x440 = 0U;
	volatile int32_t t109 = 723300;

    t109 = (((x437|x438)&x439)>x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x441 = -59652798478488LL;
	volatile uint8_t x442 = UINT8_MAX;
	volatile uint16_t x443 = 21U;
	static int32_t t110 = 11593123;

    t110 = (((x441|x442)&x443)>x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x446 = INT8_MIN;
	static int16_t x447 = INT16_MAX;
	static int8_t x448 = INT8_MIN;
	static int32_t t111 = 37;

    t111 = (((x445|x446)&x447)>x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x451 = -1;
	int16_t x452 = -39;

    t112 = (((x449|x450)&x451)>x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x453 = 12U;
	volatile uint8_t x454 = 1U;
	static volatile int32_t x455 = -790;
	uint64_t x456 = UINT64_MAX;
	static int32_t t113 = -31596403;

    t113 = (((x453|x454)&x455)>x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x457 = UINT16_MAX;
	int8_t x458 = -56;
	volatile uint8_t x460 = 1U;
	static volatile int32_t t114 = 3292;

    t114 = (((x457|x458)&x459)>x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x461 = UINT64_MAX;
	int8_t x464 = INT8_MIN;
	volatile int32_t t115 = -5932739;

    t115 = (((x461|x462)&x463)>x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x465 = INT16_MIN;
	int8_t x468 = INT8_MAX;
	volatile int32_t t116 = 13;

    t116 = (((x465|x466)&x467)>x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x469 = INT64_MAX;
	int64_t x470 = -1LL;
	int64_t x471 = INT64_MAX;
	uint64_t x472 = 136387416504LLU;
	int32_t t117 = -7354;

    t117 = (((x469|x470)&x471)>x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x473 = 216;
	static int8_t x474 = INT8_MIN;
	uint8_t x475 = 42U;
	int64_t x476 = -1LL;
	static int32_t t118 = 17237;

    t118 = (((x473|x474)&x475)>x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = -1LL;
	int8_t x478 = 0;
	int8_t x479 = 0;
	int32_t x480 = INT32_MIN;

    t119 = (((x477|x478)&x479)>x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = -4495926625322LL;
	uint8_t x482 = 1U;
	static uint8_t x484 = 75U;

    t120 = (((x481|x482)&x483)>x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x486 = -9765674336529914LL;
	volatile uint32_t x487 = 14939U;
	volatile uint32_t x488 = 3714U;
	volatile int32_t t121 = -2;

    t121 = (((x485|x486)&x487)>x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = INT32_MAX;
	static uint32_t x491 = 228U;

    t122 = (((x489|x490)&x491)>x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x493 = -1;
	uint8_t x494 = 1U;
	static int16_t x495 = -1;
	static uint64_t x496 = UINT64_MAX;
	static volatile int32_t t123 = 652325;

    t123 = (((x493|x494)&x495)>x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = INT32_MIN;
	int32_t x498 = -2676;
	int8_t x499 = -1;
	int8_t x500 = -1;
	int32_t t124 = 1568;

    t124 = (((x497|x498)&x499)>x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x501 = 101U;
	uint64_t x502 = 2598653205LLU;
	int8_t x503 = INT8_MIN;
	uint32_t x504 = UINT32_MAX;
	int32_t t125 = 2825;

    t125 = (((x501|x502)&x503)>x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x505 = INT32_MIN;
	int32_t x506 = INT32_MIN;
	int16_t x508 = 78;
	volatile int32_t t126 = 553;

    t126 = (((x505|x506)&x507)>x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x509 = 0U;
	volatile uint8_t x510 = 5U;
	static uint8_t x511 = 3U;
	static int8_t x512 = -1;

    t127 = (((x509|x510)&x511)>x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x513 = -9;
	volatile uint64_t x514 = UINT64_MAX;
	int32_t t128 = 54677;

    t128 = (((x513|x514)&x515)>x516);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = INT32_MAX;
	int8_t x519 = -1;
	int32_t x520 = INT32_MIN;
	volatile int32_t t129 = 144751;

    t129 = (((x517|x518)&x519)>x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = 1;
	int32_t x522 = -686876;
	uint8_t x523 = UINT8_MAX;
	static uint32_t x524 = UINT32_MAX;
	static volatile int32_t t130 = 139;

    t130 = (((x521|x522)&x523)>x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x525 = INT16_MIN;
	int32_t x527 = -1;
	static volatile int64_t x528 = INT64_MAX;
	int32_t t131 = 36601;

    t131 = (((x525|x526)&x527)>x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x529 = INT16_MIN;
	int8_t x530 = INT8_MIN;
	int16_t x531 = 6871;
	static int32_t t132 = 156157;

    t132 = (((x529|x530)&x531)>x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x533 = INT16_MIN;
	int8_t x534 = -3;
	static int8_t x535 = INT8_MIN;
	int16_t x536 = INT16_MIN;
	int32_t t133 = -3;

    t133 = (((x533|x534)&x535)>x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x537 = INT8_MIN;
	int64_t x539 = INT64_MIN;
	int8_t x540 = INT8_MAX;
	int32_t t134 = -46648;

    t134 = (((x537|x538)&x539)>x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int32_t x542 = INT32_MIN;
	uint64_t x543 = 300483LLU;
	int64_t x544 = -2618LL;
	int32_t t135 = -4582;

    t135 = (((x541|x542)&x543)>x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x546 = INT32_MIN;

    t136 = (((x545|x546)&x547)>x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x549 = INT8_MAX;
	static uint16_t x550 = UINT16_MAX;
	int8_t x551 = -1;
	int32_t x552 = 258920;

    t137 = (((x549|x550)&x551)>x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t t138 = 9288478;

    t138 = (((x553|x554)&x555)>x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = INT64_MIN;
	static volatile int16_t x558 = INT16_MIN;
	static int64_t x559 = INT64_MIN;
	static int32_t t139 = -693389072;

    t139 = (((x557|x558)&x559)>x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x561 = INT8_MIN;
	int32_t x563 = INT32_MAX;
	static int16_t x564 = -1;
	static volatile int32_t t140 = 246;

    t140 = (((x561|x562)&x563)>x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint8_t x565 = 38U;
	int32_t x567 = -308;
	int8_t x568 = -7;
	volatile int32_t t141 = -1;

    t141 = (((x565|x566)&x567)>x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x569 = INT32_MAX;
	volatile uint64_t x570 = 3051910564824003LLU;
	volatile uint64_t x571 = UINT64_MAX;
	int8_t x572 = INT8_MIN;
	int32_t t142 = -2;

    t142 = (((x569|x570)&x571)>x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint16_t x573 = UINT16_MAX;
	volatile int16_t x576 = -1;

    t143 = (((x573|x574)&x575)>x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x577 = 2831172042358915LLU;
	uint64_t x578 = 14004789219972357LLU;
	uint64_t x579 = 93278309LLU;
	volatile int32_t t144 = -6044747;

    t144 = (((x577|x578)&x579)>x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x581 = -160;
	int64_t x582 = INT64_MIN;

    t145 = (((x581|x582)&x583)>x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x585 = 1923U;
	uint16_t x587 = 12U;
	int16_t x588 = INT16_MIN;
	volatile int32_t t146 = 11;

    t146 = (((x585|x586)&x587)>x588);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x589 = -2;
	uint8_t x592 = 1U;
	volatile int32_t t147 = -2421;

    t147 = (((x589|x590)&x591)>x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x593 = INT8_MIN;
	static uint32_t x594 = UINT32_MAX;
	int16_t x595 = INT16_MIN;
	uint32_t x596 = 12945637U;
	int32_t t148 = 102;

    t148 = (((x593|x594)&x595)>x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = -1073388500;
	int16_t x598 = INT16_MIN;
	uint32_t x600 = 99464745U;
	volatile int32_t t149 = -6;

    t149 = (((x597|x598)&x599)>x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x601 = UINT32_MAX;
	uint16_t x602 = 10U;
	int32_t x603 = -1;
	volatile int32_t t150 = 2041597;

    t150 = (((x601|x602)&x603)>x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x605 = INT8_MAX;
	int64_t x607 = -1LL;
	volatile int32_t t151 = 12945;

    t151 = (((x605|x606)&x607)>x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x610 = INT64_MIN;
	static int32_t x611 = -1;
	int64_t x612 = INT64_MIN;
	int32_t t152 = -312617722;

    t152 = (((x609|x610)&x611)>x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x613 = 6U;
	volatile int64_t x615 = -685LL;
	volatile int8_t x616 = INT8_MIN;
	volatile int32_t t153 = -605;

    t153 = (((x613|x614)&x615)>x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x617 = -6;
	static int64_t x618 = -192LL;
	uint64_t x619 = 0LLU;
	int32_t x620 = INT32_MAX;
	volatile int32_t t154 = -30;

    t154 = (((x617|x618)&x619)>x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x621 = UINT8_MAX;
	int64_t x622 = INT64_MIN;
	volatile int8_t x624 = -1;
	static int32_t t155 = 118;

    t155 = (((x621|x622)&x623)>x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x625 = 7U;
	uint16_t x627 = 13984U;
	volatile int16_t x628 = INT16_MAX;
	volatile int32_t t156 = 6;

    t156 = (((x625|x626)&x627)>x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint64_t x629 = UINT64_MAX;
	int32_t x630 = -24;
	uint8_t x631 = 34U;
	int32_t x632 = -973906637;
	int32_t t157 = -704054;

    t157 = (((x629|x630)&x631)>x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x633 = 11U;
	volatile int64_t x634 = -23038LL;
	volatile uint64_t x635 = UINT64_MAX;
	int8_t x636 = INT8_MIN;
	static int32_t t158 = 2906;

    t158 = (((x633|x634)&x635)>x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile uint16_t x637 = 123U;
	int32_t x639 = INT32_MAX;
	int64_t x640 = 15484355LL;
	int32_t t159 = 207060;

    t159 = (((x637|x638)&x639)>x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x641 = -26;
	volatile uint32_t x643 = 243136U;
	volatile int32_t t160 = 403;

    t160 = (((x641|x642)&x643)>x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x645 = INT8_MAX;
	static uint16_t x646 = UINT16_MAX;
	int64_t x647 = INT64_MIN;
	uint8_t x648 = UINT8_MAX;
	int32_t t161 = 30;

    t161 = (((x645|x646)&x647)>x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int64_t x649 = INT64_MAX;
	uint64_t x650 = UINT64_MAX;
	volatile int32_t x651 = -80682335;
	volatile int32_t t162 = -28;

    t162 = (((x649|x650)&x651)>x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint32_t x653 = 645346602U;
	int8_t x654 = INT8_MAX;
	uint16_t x655 = UINT16_MAX;
	static volatile int32_t t163 = 19395;

    t163 = (((x653|x654)&x655)>x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x657 = UINT8_MAX;
	volatile int16_t x658 = INT16_MIN;
	uint32_t x659 = 101476517U;
	int64_t x660 = INT64_MAX;
	static volatile int32_t t164 = -814631;

    t164 = (((x657|x658)&x659)>x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x662 = INT64_MIN;
	int16_t x664 = INT16_MIN;
	int32_t t165 = 463;

    t165 = (((x661|x662)&x663)>x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x666 = 12464U;
	int32_t x667 = 96348;
	static int16_t x668 = -1;
	int32_t t166 = -268970206;

    t166 = (((x665|x666)&x667)>x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x669 = UINT32_MAX;
	int32_t x670 = INT32_MIN;
	int64_t x671 = -3559LL;
	static volatile int32_t t167 = 42288645;

    t167 = (((x669|x670)&x671)>x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = -1;
	volatile int32_t x675 = INT32_MIN;
	int32_t x676 = INT32_MAX;

    t168 = (((x673|x674)&x675)>x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x678 = 1U;
	volatile int8_t x679 = INT8_MAX;
	volatile int16_t x680 = INT16_MIN;
	int32_t t169 = 404096;

    t169 = (((x677|x678)&x679)>x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = 694;
	int16_t x682 = 3;
	uint64_t x683 = 124925301012LLU;
	static int64_t x684 = INT64_MAX;
	volatile int32_t t170 = -262;

    t170 = (((x681|x682)&x683)>x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x685 = -1;
	volatile uint8_t x686 = 95U;
	int8_t x687 = 3;
	int8_t x688 = 38;
	volatile int32_t t171 = 2;

    t171 = (((x685|x686)&x687)>x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint32_t x689 = UINT32_MAX;
	static int8_t x690 = INT8_MIN;
	int64_t x691 = INT64_MAX;

    t172 = (((x689|x690)&x691)>x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = INT8_MAX;
	uint64_t x694 = 214510896616LLU;
	uint16_t x695 = UINT16_MAX;
	uint16_t x696 = 13299U;
	int32_t t173 = 458978034;

    t173 = (((x693|x694)&x695)>x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x697 = UINT32_MAX;
	volatile int64_t x698 = INT64_MIN;
	int16_t x699 = -1;
	uint16_t x700 = 40U;
	int32_t t174 = 0;

    t174 = (((x697|x698)&x699)>x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = -1;
	static uint16_t x702 = UINT16_MAX;
	int16_t x703 = INT16_MAX;
	int32_t t175 = 2;

    t175 = (((x701|x702)&x703)>x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = INT16_MIN;
	static int8_t x706 = -27;
	volatile uint32_t x707 = 20U;
	int32_t x708 = INT32_MAX;

    t176 = (((x705|x706)&x707)>x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x709 = 24076U;
	int64_t x710 = 6077170752305LL;
	uint32_t x711 = 46U;
	int64_t x712 = -1LL;

    t177 = (((x709|x710)&x711)>x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x713 = 109U;
	int64_t x715 = INT64_MIN;
	static uint32_t x716 = 1198033U;
	volatile int32_t t178 = 74;

    t178 = (((x713|x714)&x715)>x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int16_t x718 = INT16_MAX;
	int32_t x719 = INT32_MAX;
	static volatile uint64_t x720 = 3872111416LLU;
	int32_t t179 = -1;

    t179 = (((x717|x718)&x719)>x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x722 = -1;
	int64_t x723 = -1LL;
	static volatile int32_t t180 = 33134470;

    t180 = (((x721|x722)&x723)>x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint64_t x725 = UINT64_MAX;
	int8_t x727 = INT8_MAX;
	int32_t x728 = -62;

    t181 = (((x725|x726)&x727)>x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x729 = -57;
	uint8_t x730 = 5U;
	static volatile int16_t x731 = INT16_MIN;
	int16_t x732 = INT16_MAX;
	int32_t t182 = 1711;

    t182 = (((x729|x730)&x731)>x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x733 = -1;
	static volatile int16_t x734 = 11;
	int16_t x735 = -583;
	static uint32_t x736 = 2U;
	volatile int32_t t183 = -3;

    t183 = (((x733|x734)&x735)>x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x738 = -1;
	int16_t x739 = -215;
	volatile int32_t t184 = -8362;

    t184 = (((x737|x738)&x739)>x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x742 = INT16_MIN;
	static volatile int32_t x743 = 427;
	static int64_t x744 = -1LL;
	volatile int32_t t185 = 81578;

    t185 = (((x741|x742)&x743)>x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = INT32_MAX;
	volatile int32_t x746 = INT32_MAX;
	uint64_t x747 = 12142697LLU;
	uint8_t x748 = UINT8_MAX;
	int32_t t186 = 1;

    t186 = (((x745|x746)&x747)>x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x750 = 4;
	volatile int16_t x751 = INT16_MIN;
	int64_t x752 = INT64_MIN;

    t187 = (((x749|x750)&x751)>x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x753 = 2495U;
	int64_t x755 = -1LL;
	int64_t x756 = INT64_MAX;
	volatile int32_t t188 = -5174;

    t188 = (((x753|x754)&x755)>x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint16_t x757 = 2039U;
	volatile int32_t x758 = INT32_MIN;
	int32_t t189 = -87;

    t189 = (((x757|x758)&x759)>x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int32_t x761 = INT32_MIN;
	int64_t x764 = 2516645530850LL;
	static volatile int32_t t190 = -11673432;

    t190 = (((x761|x762)&x763)>x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x765 = INT32_MAX;
	int64_t x766 = 185LL;
	int8_t x767 = INT8_MIN;
	static int8_t x768 = 0;
	int32_t t191 = 26;

    t191 = (((x765|x766)&x767)>x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x769 = INT16_MAX;
	int16_t x770 = INT16_MIN;
	volatile int32_t x771 = INT32_MIN;
	int32_t x772 = INT32_MIN;

    t192 = (((x769|x770)&x771)>x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x774 = INT8_MIN;
	uint8_t x776 = UINT8_MAX;
	int32_t t193 = -103767;

    t193 = (((x773|x774)&x775)>x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x778 = 1U;
	uint64_t x779 = 602944LLU;
	static int8_t x780 = -1;
	volatile int32_t t194 = -955;

    t194 = (((x777|x778)&x779)>x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x783 = INT64_MAX;
	int64_t x784 = 1LL;
	int32_t t195 = -10;

    t195 = (((x781|x782)&x783)>x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x785 = -1;
	volatile int64_t x786 = INT64_MIN;
	volatile int16_t x788 = INT16_MAX;
	int32_t t196 = 874;

    t196 = (((x785|x786)&x787)>x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x789 = 46053016648326LLU;
	volatile int16_t x790 = INT16_MIN;
	uint16_t x791 = UINT16_MAX;
	int64_t x792 = -366539885400073272LL;

    t197 = (((x789|x790)&x791)>x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint16_t x793 = 31938U;
	uint8_t x794 = 36U;
	uint32_t x796 = UINT32_MAX;

    t198 = (((x793|x794)&x795)>x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint16_t x797 = UINT16_MAX;
	int16_t x798 = -1;
	int16_t x799 = -1;
	int16_t x800 = INT16_MIN;
	volatile int32_t t199 = 843;

    t199 = (((x797|x798)&x799)>x800);

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

