
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

int16_t x5 = 2;
volatile int8_t x6 = 0;
int16_t x8 = -190;
static int64_t x12 = -1LL;
int64_t x13 = 1LL;
int8_t x19 = INT8_MAX;
uint32_t x20 = UINT32_MAX;
static uint16_t x26 = 565U;
int16_t x30 = -1;
int64_t x49 = 1376576LL;
static int16_t x52 = INT16_MIN;
int64_t x66 = 196826LL;
int32_t t11 = -1002031;
static int32_t t12 = -3;
int8_t x75 = -1;
int8_t x84 = -1;
static volatile int32_t t17 = 65;
uint16_t x111 = UINT16_MAX;
static int32_t x112 = -9579;
int64_t x116 = INT64_MIN;
static volatile int32_t t19 = -121;
int8_t x118 = -2;
volatile int32_t t20 = -7217;
int8_t x122 = -1;
static int32_t x124 = -1;
volatile int16_t x128 = -1;
int8_t x131 = INT8_MIN;
int32_t x136 = -1;
int16_t x141 = INT16_MAX;
int32_t x143 = INT32_MIN;
static uint8_t x144 = UINT8_MAX;
int8_t x150 = -1;
int8_t x152 = 0;
int8_t x171 = 0;
static uint32_t x181 = 2275U;
int64_t x192 = -13277860LL;
static uint64_t x208 = UINT64_MAX;
static int8_t x210 = -21;
uint16_t x218 = UINT16_MAX;
int16_t x221 = INT16_MIN;
int64_t x224 = 516521800324409LL;
static volatile int32_t t41 = 31266;
uint8_t x230 = UINT8_MAX;
int16_t x231 = -1;
uint64_t x234 = UINT64_MAX;
static int32_t t44 = -23573161;
static uint16_t x246 = 653U;
int32_t x252 = 10080;
volatile int32_t t47 = 3;
int32_t x260 = 1;
int8_t x264 = -7;
int32_t t49 = -165134;
uint64_t x266 = UINT64_MAX;
static volatile uint16_t x270 = 19014U;
volatile int32_t t51 = -3380660;
static volatile int8_t x280 = -38;
volatile int32_t x281 = -1;
volatile uint32_t x282 = UINT32_MAX;
uint8_t x286 = 0U;
uint16_t x288 = UINT16_MAX;
static uint16_t x292 = UINT16_MAX;
static int16_t x296 = -253;
static int16_t x299 = INT16_MAX;
uint8_t x301 = 38U;
static volatile int32_t t58 = 50;
int32_t x305 = INT32_MIN;
volatile int32_t t59 = 352;
int16_t x309 = INT16_MAX;
int64_t x312 = INT64_MAX;
int32_t x313 = INT32_MIN;
volatile int64_t x314 = 0LL;
uint16_t x315 = 57U;
uint8_t x316 = 0U;
int16_t x318 = -1;
int32_t x320 = 6720;
uint8_t x326 = UINT8_MAX;
volatile int64_t x327 = INT64_MAX;
int8_t x336 = -1;
volatile int32_t t65 = -458;
int16_t x346 = INT16_MAX;
int32_t t66 = 1846556;
int32_t x359 = 3859;
volatile uint64_t x363 = UINT64_MAX;
uint16_t x365 = 1U;
int64_t x366 = 6251LL;
volatile uint32_t x370 = 1175891U;
static int64_t x371 = -1LL;
static uint32_t x383 = 10U;
uint16_t x384 = 4U;
volatile int32_t t73 = -358847;
static volatile int32_t t75 = 166024;
int16_t x397 = INT16_MAX;
volatile uint32_t x402 = 15262U;
int32_t x404 = -32425;
int8_t x413 = -1;
uint16_t x422 = 166U;
volatile int64_t x425 = -1LL;
volatile uint8_t x428 = 36U;
int64_t x429 = 3LL;
volatile int32_t t83 = 32798254;
int64_t x435 = -1LL;
volatile int32_t t84 = 19;
int16_t x438 = -1;
volatile int64_t x439 = -80536153068852943LL;
uint32_t x445 = 1043U;
volatile int64_t x447 = INT64_MAX;
int32_t t88 = -151811;
static volatile uint16_t x463 = 35U;
volatile int16_t x466 = INT16_MAX;
static int32_t t90 = 132791;
static uint32_t x478 = UINT32_MAX;
volatile int32_t t94 = -31;
volatile int32_t t95 = -175506;
static uint32_t x510 = 3918652U;
volatile int32_t t99 = -27676;
uint64_t x533 = UINT64_MAX;
uint8_t x534 = 12U;
volatile int32_t t104 = -62107908;
int16_t x545 = -41;
int64_t x546 = 1LL;
int64_t x547 = -85121LL;
int32_t x548 = -1;
uint64_t x551 = UINT64_MAX;
static int64_t x568 = INT64_MAX;
volatile int32_t t108 = -14110;
static uint16_t x575 = 1U;
static volatile int32_t t111 = 14848;
uint16_t x588 = UINT16_MAX;
volatile uint16_t x603 = 13U;
int32_t x614 = -44659;
static uint32_t x619 = 261193U;
int64_t x620 = -7518000343951505LL;
uint16_t x623 = 176U;
uint8_t x631 = 0U;
static volatile int32_t t121 = 4;
volatile int32_t t122 = 30;
static int64_t x637 = -1LL;
static int32_t x640 = INT32_MIN;
volatile uint64_t x649 = 2258212LLU;
static volatile int16_t x656 = 84;
volatile int32_t t125 = 0;
int64_t x662 = 258995LL;
int16_t x667 = -1;
int8_t x673 = INT8_MAX;
volatile int32_t t129 = 3129;
volatile int16_t x684 = INT16_MAX;
uint16_t x685 = 1U;
uint16_t x691 = 4926U;
int16_t x694 = INT16_MIN;
volatile uint32_t x695 = 9U;
int8_t x696 = INT8_MIN;
uint8_t x700 = 3U;
int32_t x709 = INT32_MIN;
volatile int32_t t136 = -64277;
static int8_t x717 = INT8_MIN;
volatile uint8_t x722 = 58U;
static uint16_t x725 = 11966U;
int16_t x730 = -1;
uint8_t x731 = UINT8_MAX;
static uint64_t x733 = 33313105LLU;
static int16_t x737 = -1;
uint8_t x746 = 43U;
int32_t t144 = 76786249;
int8_t x768 = -3;
static volatile int32_t t148 = -2625482;
volatile int32_t x777 = -1;
static int8_t x778 = INT8_MAX;
static int8_t x779 = -6;
uint64_t x781 = 414LLU;
int32_t x788 = -3832;
volatile int32_t t152 = 755728;
uint64_t x818 = 379LLU;
static uint64_t x823 = 30630227LLU;
int32_t t159 = 596;
volatile uint16_t x842 = 23U;
static uint32_t x844 = 155184880U;
volatile int32_t t161 = -700936;
uint64_t x846 = 5LLU;
int32_t x861 = INT32_MAX;
uint16_t x864 = 6413U;
int64_t x876 = 1020152413LL;
volatile int32_t x879 = INT32_MAX;
int16_t x886 = 613;
volatile int32_t t169 = 1;
int32_t t174 = 55002;
int16_t x921 = INT16_MIN;
static int32_t x932 = INT32_MAX;
int8_t x934 = INT8_MIN;
static uint32_t x938 = 16U;
static uint16_t x946 = 1U;
int8_t x962 = -1;
int32_t x963 = 7;
volatile int32_t t182 = -56302;
volatile int32_t x966 = INT32_MAX;
uint16_t x974 = UINT16_MAX;
uint8_t x976 = UINT8_MAX;
static volatile int32_t t184 = -14087;
int8_t x979 = INT8_MIN;
uint16_t x993 = 13971U;
uint32_t x994 = UINT32_MAX;
static volatile int32_t t188 = 229979890;
int32_t t189 = 12080;
int16_t x1009 = -1;
uint32_t x1012 = 0U;
int32_t t190 = -20680111;
int32_t x1020 = -235626385;
int64_t x1024 = -1LL;
static int16_t x1025 = -377;
uint16_t x1043 = UINT16_MAX;
static int64_t x1047 = INT64_MAX;
static int32_t t197 = 80696226;
int64_t x1062 = 13953LL;
static int32_t x1071 = -1;
uint16_t x1072 = 0U;


void f0(void) {
    	int32_t x7 = -1;
	volatile int32_t t0 = 24891;

    t0 = (((x5*x6)>x7)>x8);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x9 = 8U;
	static int16_t x10 = INT16_MAX;
	uint16_t x11 = UINT16_MAX;
	int32_t t1 = -38368436;

    t1 = (((x9*x10)>x11)>x12);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x14 = 7U;
	volatile int32_t x15 = -1;
	static int32_t x16 = INT32_MAX;
	int32_t t2 = 77273539;

    t2 = (((x13*x14)>x15)>x16);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x17 = INT8_MAX;
	volatile uint16_t x18 = 15021U;
	int32_t t3 = -3466;

    t3 = (((x17*x18)>x19)>x20);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x25 = 7342;
	int64_t x27 = INT64_MAX;
	static int64_t x28 = -1LL;
	int32_t t4 = -42530;

    t4 = (((x25*x26)>x27)>x28);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x29 = UINT16_MAX;
	int16_t x31 = INT16_MIN;
	static uint8_t x32 = 117U;
	int32_t t5 = -59244;

    t5 = (((x29*x30)>x31)>x32);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x37 = 30U;
	int16_t x38 = INT16_MIN;
	uint64_t x39 = 16780408594LLU;
	int8_t x40 = INT8_MIN;
	static volatile int32_t t6 = 87;

    t6 = (((x37*x38)>x39)>x40);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint64_t x41 = 8925534481356658LLU;
	volatile int64_t x42 = INT64_MIN;
	int16_t x43 = -3;
	int64_t x44 = -1LL;
	volatile int32_t t7 = 57021;

    t7 = (((x41*x42)>x43)>x44);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x50 = -443112;
	volatile int16_t x51 = INT16_MAX;
	static int32_t t8 = -252728049;

    t8 = (((x49*x50)>x51)>x52);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x53 = INT16_MIN;
	uint32_t x54 = UINT32_MAX;
	int8_t x55 = -1;
	volatile uint64_t x56 = 24103LLU;
	volatile int32_t t9 = -430727397;

    t9 = (((x53*x54)>x55)>x56);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x61 = -1;
	static volatile uint8_t x62 = UINT8_MAX;
	int16_t x63 = INT16_MAX;
	int8_t x64 = INT8_MAX;
	int32_t t10 = 1395;

    t10 = (((x61*x62)>x63)>x64);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x65 = INT16_MIN;
	int16_t x67 = 48;
	uint64_t x68 = UINT64_MAX;

    t11 = (((x65*x66)>x67)>x68);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x69 = INT8_MIN;
	int16_t x70 = -1;
	uint32_t x71 = UINT32_MAX;
	uint64_t x72 = 71301118773740935LLU;

    t12 = (((x69*x70)>x71)>x72);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x73 = 142643U;
	static uint64_t x74 = 518198161634050LLU;
	int32_t x76 = -1;
	volatile int32_t t13 = 3;

    t13 = (((x73*x74)>x75)>x76);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x77 = INT16_MIN;
	int16_t x78 = 9;
	int32_t x79 = INT32_MAX;
	int16_t x80 = INT16_MIN;
	int32_t t14 = -231102;

    t14 = (((x77*x78)>x79)>x80);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x81 = UINT64_MAX;
	int64_t x82 = -1986203166LL;
	int32_t x83 = INT32_MIN;
	int32_t t15 = 4825;

    t15 = (((x81*x82)>x83)>x84);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x93 = 15580902;
	int32_t x94 = -1;
	volatile int16_t x95 = -5145;
	int8_t x96 = INT8_MIN;
	int32_t t16 = 537;

    t16 = (((x93*x94)>x95)>x96);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x101 = UINT16_MAX;
	int16_t x102 = 1;
	int16_t x103 = INT16_MIN;
	int8_t x104 = INT8_MIN;

    t17 = (((x101*x102)>x103)>x104);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile uint64_t x109 = 142427940315605092LLU;
	int64_t x110 = INT64_MIN;
	volatile int32_t t18 = 294;

    t18 = (((x109*x110)>x111)>x112);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x113 = -1;
	volatile int64_t x114 = 57404859992901LL;
	int32_t x115 = INT32_MAX;

    t19 = (((x113*x114)>x115)>x116);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x117 = -1LL;
	int32_t x119 = INT32_MIN;
	int8_t x120 = INT8_MIN;

    t20 = (((x117*x118)>x119)>x120);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x121 = -9498555936352LL;
	int8_t x123 = INT8_MIN;
	volatile int32_t t21 = -57153661;

    t21 = (((x121*x122)>x123)>x124);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x125 = INT16_MAX;
	int64_t x126 = -1LL;
	uint32_t x127 = UINT32_MAX;
	volatile int32_t t22 = -1;

    t22 = (((x125*x126)>x127)>x128);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x129 = -1;
	int8_t x130 = -11;
	uint64_t x132 = UINT64_MAX;
	int32_t t23 = 74;

    t23 = (((x129*x130)>x131)>x132);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x133 = -1;
	int16_t x134 = 872;
	static volatile int8_t x135 = INT8_MIN;
	volatile int32_t t24 = -64421;

    t24 = (((x133*x134)>x135)>x136);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int16_t x142 = 211;
	int32_t t25 = -851;

    t25 = (((x141*x142)>x143)>x144);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x145 = 693;
	int8_t x146 = 54;
	int16_t x147 = -1;
	int32_t x148 = INT32_MAX;
	volatile int32_t t26 = 11;

    t26 = (((x145*x146)>x147)>x148);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x149 = -1;
	uint8_t x151 = 0U;
	volatile int32_t t27 = 30521;

    t27 = (((x149*x150)>x151)>x152);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x153 = -1;
	uint16_t x154 = 1U;
	uint64_t x155 = 50735740275921LLU;
	int8_t x156 = INT8_MIN;
	int32_t t28 = 175096;

    t28 = (((x153*x154)>x155)>x156);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x157 = -101;
	int32_t x158 = -1;
	static int8_t x159 = 48;
	static int16_t x160 = 12;
	int32_t t29 = -23170;

    t29 = (((x157*x158)>x159)>x160);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x161 = UINT8_MAX;
	uint16_t x162 = UINT16_MAX;
	volatile int8_t x163 = -1;
	static uint64_t x164 = 193670620717934085LLU;
	volatile int32_t t30 = 406;

    t30 = (((x161*x162)>x163)>x164);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x165 = -1;
	uint16_t x166 = 162U;
	volatile int16_t x167 = 4504;
	volatile int16_t x168 = INT16_MIN;
	int32_t t31 = -23909426;

    t31 = (((x165*x166)>x167)>x168);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x169 = -1;
	static uint32_t x170 = 21954U;
	int8_t x172 = INT8_MIN;
	int32_t t32 = -500660;

    t32 = (((x169*x170)>x171)>x172);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x173 = -1;
	static int8_t x174 = INT8_MAX;
	int64_t x175 = INT64_MIN;
	int16_t x176 = 7613;
	volatile int32_t t33 = 18;

    t33 = (((x173*x174)>x175)>x176);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x182 = INT16_MIN;
	int32_t x183 = -1;
	int8_t x184 = -1;
	int32_t t34 = -40427;

    t34 = (((x181*x182)>x183)>x184);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x189 = -1LL;
	int32_t x190 = 41688;
	int32_t x191 = INT32_MIN;
	volatile int32_t t35 = -5981635;

    t35 = (((x189*x190)>x191)>x192);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x197 = UINT8_MAX;
	int64_t x198 = -1LL;
	uint64_t x199 = 7LLU;
	int16_t x200 = INT16_MIN;
	volatile int32_t t36 = 263;

    t36 = (((x197*x198)>x199)>x200);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x205 = -1;
	uint16_t x206 = UINT16_MAX;
	volatile int32_t x207 = -2013315;
	volatile int32_t t37 = 1;

    t37 = (((x205*x206)>x207)>x208);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x209 = -1;
	int32_t x211 = -1;
	volatile int64_t x212 = INT64_MAX;
	volatile int32_t t38 = 2583712;

    t38 = (((x209*x210)>x211)>x212);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x213 = INT8_MAX;
	static int64_t x214 = -1LL;
	uint64_t x215 = 31475952394221434LLU;
	uint32_t x216 = UINT32_MAX;
	int32_t t39 = 11331846;

    t39 = (((x213*x214)>x215)>x216);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x217 = INT8_MAX;
	uint16_t x219 = 10773U;
	static int8_t x220 = INT8_MAX;
	int32_t t40 = -188739576;

    t40 = (((x217*x218)>x219)>x220);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x222 = 7;
	volatile int16_t x223 = -11023;

    t41 = (((x221*x222)>x223)>x224);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int16_t x229 = -1;
	volatile uint8_t x232 = 15U;
	volatile int32_t t42 = 28;

    t42 = (((x229*x230)>x231)>x232);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x233 = UINT8_MAX;
	int16_t x235 = 89;
	uint16_t x236 = 219U;
	int32_t t43 = 12;

    t43 = (((x233*x234)>x235)>x236);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x237 = INT32_MAX;
	static volatile int8_t x238 = -1;
	int16_t x239 = INT16_MIN;
	uint32_t x240 = 13351026U;

    t44 = (((x237*x238)>x239)>x240);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x245 = INT16_MIN;
	static uint32_t x247 = 44213U;
	uint16_t x248 = 3244U;
	static int32_t t45 = 161;

    t45 = (((x245*x246)>x247)>x248);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x249 = INT32_MIN;
	uint64_t x250 = 2114233167LLU;
	volatile int8_t x251 = -1;
	int32_t t46 = -1035927;

    t46 = (((x249*x250)>x251)>x252);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x253 = INT8_MIN;
	uint64_t x254 = 430821974389LLU;
	static int64_t x255 = INT64_MIN;
	static int16_t x256 = -1;

    t47 = (((x253*x254)>x255)>x256);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x257 = INT16_MAX;
	int32_t x258 = -1;
	volatile int32_t x259 = INT32_MIN;
	volatile int32_t t48 = -28;

    t48 = (((x257*x258)>x259)>x260);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x261 = -1LL;
	int16_t x262 = -5;
	volatile int16_t x263 = INT16_MIN;

    t49 = (((x261*x262)>x263)>x264);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x265 = -1;
	volatile int64_t x267 = 20LL;
	uint8_t x268 = 14U;
	int32_t t50 = 24313782;

    t50 = (((x265*x266)>x267)>x268);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile uint8_t x269 = UINT8_MAX;
	int16_t x271 = 8;
	uint64_t x272 = UINT64_MAX;

    t51 = (((x269*x270)>x271)>x272);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x277 = -676973237LL;
	volatile uint8_t x278 = UINT8_MAX;
	uint32_t x279 = 1824U;
	volatile int32_t t52 = -601517384;

    t52 = (((x277*x278)>x279)>x280);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x283 = UINT64_MAX;
	int8_t x284 = -1;
	int32_t t53 = -249983;

    t53 = (((x281*x282)>x283)>x284);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x285 = 1U;
	static uint16_t x287 = UINT16_MAX;
	int32_t t54 = 1940175;

    t54 = (((x285*x286)>x287)>x288);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint64_t x289 = UINT64_MAX;
	volatile uint8_t x290 = 3U;
	int16_t x291 = -96;
	volatile int32_t t55 = -480293686;

    t55 = (((x289*x290)>x291)>x292);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x293 = -1;
	static int8_t x294 = 27;
	int16_t x295 = INT16_MIN;
	volatile int32_t t56 = -64981;

    t56 = (((x293*x294)>x295)>x296);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x297 = UINT16_MAX;
	static uint16_t x298 = 1253U;
	int8_t x300 = 1;
	int32_t t57 = -1025945498;

    t57 = (((x297*x298)>x299)>x300);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x302 = INT16_MAX;
	int8_t x303 = -1;
	int16_t x304 = -1;

    t58 = (((x301*x302)>x303)>x304);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x306 = 219113U;
	uint8_t x307 = 7U;
	uint16_t x308 = 474U;

    t59 = (((x305*x306)>x307)>x308);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x310 = UINT64_MAX;
	volatile int8_t x311 = INT8_MAX;
	volatile int32_t t60 = 12239;

    t60 = (((x309*x310)>x311)>x312);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t t61 = 2543788;

    t61 = (((x313*x314)>x315)>x316);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x317 = -1;
	uint8_t x319 = 61U;
	volatile int32_t t62 = -1236;

    t62 = (((x317*x318)>x319)>x320);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x325 = UINT64_MAX;
	int16_t x328 = -2722;
	volatile int32_t t63 = 342;

    t63 = (((x325*x326)>x327)>x328);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile uint32_t x333 = 25544885U;
	uint32_t x334 = UINT32_MAX;
	int16_t x335 = 184;
	volatile int32_t t64 = -363;

    t64 = (((x333*x334)>x335)>x336);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x337 = 22U;
	uint32_t x338 = 990U;
	int16_t x339 = -1;
	static int16_t x340 = 1;

    t65 = (((x337*x338)>x339)>x340);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x345 = -1LL;
	static volatile int16_t x347 = INT16_MIN;
	volatile int64_t x348 = -1LL;

    t66 = (((x345*x346)>x347)>x348);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x349 = 7U;
	uint64_t x350 = UINT64_MAX;
	int64_t x351 = -124LL;
	int64_t x352 = -1LL;
	int32_t t67 = 200153;

    t67 = (((x349*x350)>x351)>x352);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x357 = -1;
	volatile uint32_t x358 = 69317U;
	volatile int32_t x360 = INT32_MIN;
	int32_t t68 = -1773;

    t68 = (((x357*x358)>x359)>x360);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint16_t x361 = 3U;
	int16_t x362 = INT16_MAX;
	int32_t x364 = -1;
	int32_t t69 = 1;

    t69 = (((x361*x362)>x363)>x364);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x367 = -1;
	uint32_t x368 = 266U;
	static volatile int32_t t70 = -1;

    t70 = (((x365*x366)>x367)>x368);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x369 = INT16_MAX;
	uint64_t x372 = 541290397782044LLU;
	volatile int32_t t71 = -459089;

    t71 = (((x369*x370)>x371)>x372);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x373 = INT16_MIN;
	int8_t x374 = INT8_MIN;
	int64_t x375 = -1LL;
	volatile int16_t x376 = INT16_MAX;
	int32_t t72 = 4327;

    t72 = (((x373*x374)>x375)>x376);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x381 = -1;
	int32_t x382 = -52424;

    t73 = (((x381*x382)>x383)>x384);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x385 = UINT64_MAX;
	int32_t x386 = -1;
	static int64_t x387 = INT64_MIN;
	int16_t x388 = 0;
	volatile int32_t t74 = -166;

    t74 = (((x385*x386)>x387)>x388);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x389 = 1701U;
	uint8_t x390 = 15U;
	static uint16_t x391 = 10850U;
	uint32_t x392 = 1946153289U;

    t75 = (((x389*x390)>x391)>x392);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x398 = -48;
	int16_t x399 = INT16_MAX;
	volatile uint16_t x400 = UINT16_MAX;
	volatile int32_t t76 = 15027;

    t76 = (((x397*x398)>x399)>x400);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x401 = UINT64_MAX;
	static uint8_t x403 = UINT8_MAX;
	int32_t t77 = 3927;

    t77 = (((x401*x402)>x403)>x404);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x405 = INT64_MIN;
	uint64_t x406 = 952450130639LLU;
	uint8_t x407 = 1U;
	static int32_t x408 = 14238361;
	static volatile int32_t t78 = -1;

    t78 = (((x405*x406)>x407)>x408);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x409 = 2U;
	int32_t x410 = -1;
	uint16_t x411 = UINT16_MAX;
	int8_t x412 = 1;
	static volatile int32_t t79 = -200360094;

    t79 = (((x409*x410)>x411)>x412);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x414 = 8072170U;
	volatile int64_t x415 = -149207LL;
	uint16_t x416 = 158U;
	int32_t t80 = -992166;

    t80 = (((x413*x414)>x415)>x416);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x421 = INT8_MIN;
	int16_t x423 = INT16_MAX;
	int64_t x424 = INT64_MIN;
	int32_t t81 = 2392;

    t81 = (((x421*x422)>x423)>x424);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x426 = INT64_MAX;
	static int8_t x427 = INT8_MIN;
	static int32_t t82 = -635;

    t82 = (((x425*x426)>x427)>x428);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x430 = INT8_MAX;
	int16_t x431 = INT16_MAX;
	uint64_t x432 = 10866279281LLU;

    t83 = (((x429*x430)>x431)>x432);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x433 = UINT8_MAX;
	int16_t x434 = INT16_MAX;
	int32_t x436 = INT32_MAX;

    t84 = (((x433*x434)>x435)>x436);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int16_t x437 = 0;
	int16_t x440 = INT16_MIN;
	static int32_t t85 = 14;

    t85 = (((x437*x438)>x439)>x440);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x446 = -1;
	int32_t x448 = -1;
	volatile int32_t t86 = -3507;

    t86 = (((x445*x446)>x447)>x448);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x449 = -52572634LL;
	int8_t x450 = INT8_MIN;
	int16_t x451 = 1;
	uint16_t x452 = UINT16_MAX;
	int32_t t87 = 3736;

    t87 = (((x449*x450)>x451)>x452);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x457 = 6087333;
	static volatile int8_t x458 = INT8_MIN;
	volatile int64_t x459 = -26622219850LL;
	int32_t x460 = 43267;

    t88 = (((x457*x458)>x459)>x460);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x461 = INT32_MIN;
	int64_t x462 = 0LL;
	volatile uint16_t x464 = UINT16_MAX;
	int32_t t89 = 617494202;

    t89 = (((x461*x462)>x463)>x464);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x465 = -1;
	uint32_t x467 = UINT32_MAX;
	static volatile int16_t x468 = INT16_MIN;

    t90 = (((x465*x466)>x467)>x468);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int8_t x469 = INT8_MIN;
	int8_t x470 = 0;
	uint32_t x471 = 7U;
	int64_t x472 = INT64_MIN;
	int32_t t91 = -891;

    t91 = (((x469*x470)>x471)>x472);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile uint8_t x477 = 2U;
	int64_t x479 = -677448944086886584LL;
	static int64_t x480 = 13644356434LL;
	static int32_t t92 = 1;

    t92 = (((x477*x478)>x479)>x480);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint64_t x481 = 7LLU;
	uint32_t x482 = 750U;
	int16_t x483 = -1;
	int64_t x484 = -11869216301LL;
	volatile int32_t t93 = 5831179;

    t93 = (((x481*x482)>x483)>x484);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x489 = 24930U;
	volatile int8_t x490 = 1;
	int16_t x491 = 1;
	uint32_t x492 = 2191443U;

    t94 = (((x489*x490)>x491)>x492);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x493 = INT16_MIN;
	static uint8_t x494 = 29U;
	uint8_t x495 = 3U;
	int8_t x496 = 47;

    t95 = (((x493*x494)>x495)>x496);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x497 = -1;
	int32_t x498 = INT32_MAX;
	static volatile int64_t x499 = 26LL;
	uint16_t x500 = 1U;
	int32_t t96 = 31329;

    t96 = (((x497*x498)>x499)>x500);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x501 = UINT64_MAX;
	volatile uint32_t x502 = 292635U;
	int16_t x503 = INT16_MIN;
	static uint8_t x504 = UINT8_MAX;
	int32_t t97 = 21318477;

    t97 = (((x501*x502)>x503)>x504);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x509 = -1LL;
	volatile int32_t x511 = INT32_MAX;
	volatile uint16_t x512 = 0U;
	volatile int32_t t98 = 1;

    t98 = (((x509*x510)>x511)>x512);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x517 = -1LL;
	static int8_t x518 = INT8_MIN;
	int64_t x519 = INT64_MIN;
	volatile uint64_t x520 = UINT64_MAX;

    t99 = (((x517*x518)>x519)>x520);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x521 = INT8_MAX;
	int8_t x522 = -1;
	uint16_t x523 = 269U;
	int8_t x524 = INT8_MIN;
	int32_t t100 = -62;

    t100 = (((x521*x522)>x523)>x524);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x525 = -14;
	static uint32_t x526 = UINT32_MAX;
	int8_t x527 = 1;
	uint64_t x528 = 6205807LLU;
	static volatile int32_t t101 = 107503251;

    t101 = (((x525*x526)>x527)>x528);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x529 = 29111975;
	uint64_t x530 = 115972190704501LLU;
	static int64_t x531 = INT64_MIN;
	uint64_t x532 = UINT64_MAX;
	int32_t t102 = -1335;

    t102 = (((x529*x530)>x531)>x532);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint8_t x535 = 26U;
	static uint8_t x536 = 4U;
	int32_t t103 = -2662945;

    t103 = (((x533*x534)>x535)>x536);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x541 = 11U;
	int16_t x542 = -1;
	int64_t x543 = -26456579LL;
	volatile int8_t x544 = INT8_MIN;

    t104 = (((x541*x542)>x543)>x544);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t t105 = 77;

    t105 = (((x545*x546)>x547)>x548);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x549 = 7;
	uint32_t x550 = UINT32_MAX;
	volatile int8_t x552 = INT8_MIN;
	volatile int32_t t106 = 759275;

    t106 = (((x549*x550)>x551)>x552);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x553 = -15870;
	static int8_t x554 = -1;
	volatile int64_t x555 = -1LL;
	uint8_t x556 = 66U;
	static volatile int32_t t107 = 65;

    t107 = (((x553*x554)>x555)>x556);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x565 = 1;
	uint64_t x566 = UINT64_MAX;
	static int16_t x567 = 182;

    t108 = (((x565*x566)>x567)>x568);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x573 = 88618LLU;
	static int64_t x574 = INT64_MIN;
	int64_t x576 = -7LL;
	volatile int32_t t109 = 170655787;

    t109 = (((x573*x574)>x575)>x576);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x577 = 1;
	int8_t x578 = 15;
	uint32_t x579 = UINT32_MAX;
	volatile int64_t x580 = INT64_MIN;
	static int32_t t110 = 214597806;

    t110 = (((x577*x578)>x579)>x580);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x581 = INT32_MIN;
	volatile int64_t x582 = -1LL;
	uint32_t x583 = 14263883U;
	int32_t x584 = INT32_MAX;

    t111 = (((x581*x582)>x583)>x584);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x585 = INT32_MIN;
	static int16_t x586 = 1;
	int8_t x587 = -18;
	static volatile int32_t t112 = -766270680;

    t112 = (((x585*x586)>x587)>x588);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint8_t x589 = UINT8_MAX;
	int32_t x590 = -1;
	int64_t x591 = -116167595464615983LL;
	static int64_t x592 = -1LL;
	int32_t t113 = 0;

    t113 = (((x589*x590)>x591)>x592);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x593 = 468858;
	volatile int16_t x594 = -3;
	uint32_t x595 = 9630123U;
	int64_t x596 = INT64_MIN;
	volatile int32_t t114 = -7849;

    t114 = (((x593*x594)>x595)>x596);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint8_t x601 = 0U;
	volatile int32_t x602 = INT32_MIN;
	int32_t x604 = -976171;
	volatile int32_t t115 = 0;

    t115 = (((x601*x602)>x603)>x604);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x605 = 4;
	int16_t x606 = 7806;
	uint64_t x607 = 32866304LLU;
	static int8_t x608 = INT8_MIN;
	volatile int32_t t116 = 2989197;

    t116 = (((x605*x606)>x607)>x608);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x613 = -58;
	uint64_t x615 = 4215120042187LLU;
	int16_t x616 = INT16_MIN;
	int32_t t117 = 3870;

    t117 = (((x613*x614)>x615)>x616);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x617 = 7U;
	int8_t x618 = -1;
	int32_t t118 = 86444;

    t118 = (((x617*x618)>x619)>x620);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x621 = 55974U;
	static int64_t x622 = -1LL;
	int32_t x624 = INT32_MAX;
	volatile int32_t t119 = 367290;

    t119 = (((x621*x622)>x623)>x624);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x625 = 1195;
	int8_t x626 = INT8_MIN;
	uint32_t x627 = UINT32_MAX;
	volatile uint32_t x628 = 1784U;
	int32_t t120 = 5170074;

    t120 = (((x625*x626)>x627)>x628);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x629 = 58313LLU;
	static int16_t x630 = -1;
	int8_t x632 = 28;

    t121 = (((x629*x630)>x631)>x632);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x633 = UINT16_MAX;
	int32_t x634 = 9;
	int64_t x635 = INT64_MIN;
	volatile int32_t x636 = INT32_MAX;

    t122 = (((x633*x634)>x635)>x636);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x638 = INT16_MIN;
	static int32_t x639 = -515;
	volatile int32_t t123 = -7127;

    t123 = (((x637*x638)>x639)>x640);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x650 = INT8_MAX;
	static volatile int16_t x651 = 1;
	volatile int16_t x652 = INT16_MAX;
	int32_t t124 = 16220;

    t124 = (((x649*x650)>x651)>x652);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x653 = 5U;
	uint8_t x654 = 35U;
	uint64_t x655 = 28042741433LLU;

    t125 = (((x653*x654)>x655)>x656);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x661 = INT32_MIN;
	int8_t x663 = -1;
	volatile uint64_t x664 = 541974209948LLU;
	int32_t t126 = 17134350;

    t126 = (((x661*x662)>x663)>x664);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x665 = 7636755028214LLU;
	uint32_t x666 = 63205U;
	uint16_t x668 = UINT16_MAX;
	volatile int32_t t127 = 335558970;

    t127 = (((x665*x666)>x667)>x668);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile uint32_t x669 = UINT32_MAX;
	static int16_t x670 = 0;
	int16_t x671 = INT16_MIN;
	int32_t x672 = INT32_MAX;
	int32_t t128 = -718909;

    t128 = (((x669*x670)>x671)>x672);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x674 = UINT8_MAX;
	int8_t x675 = -1;
	static int8_t x676 = -52;

    t129 = (((x673*x674)>x675)>x676);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x677 = 14958598680LLU;
	uint64_t x678 = UINT64_MAX;
	volatile int8_t x679 = -1;
	int8_t x680 = -21;
	static int32_t t130 = 12179662;

    t130 = (((x677*x678)>x679)>x680);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x681 = INT8_MAX;
	int8_t x682 = -1;
	int16_t x683 = -6;
	int32_t t131 = 7351;

    t131 = (((x681*x682)>x683)>x684);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x686 = INT32_MIN;
	static uint16_t x687 = 43U;
	static int64_t x688 = INT64_MIN;
	int32_t t132 = -309;

    t132 = (((x685*x686)>x687)>x688);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x689 = -1;
	static volatile uint64_t x690 = UINT64_MAX;
	int16_t x692 = INT16_MAX;
	int32_t t133 = -24;

    t133 = (((x689*x690)>x691)>x692);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint32_t x693 = UINT32_MAX;
	volatile int32_t t134 = -1;

    t134 = (((x693*x694)>x695)>x696);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x697 = 49604U;
	uint8_t x698 = UINT8_MAX;
	uint8_t x699 = UINT8_MAX;
	volatile int32_t t135 = 29957534;

    t135 = (((x697*x698)>x699)>x700);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x710 = 1;
	volatile int32_t x711 = -5281817;
	int32_t x712 = 108940072;

    t136 = (((x709*x710)>x711)>x712);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x718 = UINT16_MAX;
	volatile int16_t x719 = INT16_MIN;
	uint32_t x720 = UINT32_MAX;
	static volatile int32_t t137 = 13071;

    t137 = (((x717*x718)>x719)>x720);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x721 = -1;
	int64_t x723 = 1002LL;
	int8_t x724 = -1;
	int32_t t138 = -53;

    t138 = (((x721*x722)>x723)>x724);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x726 = 1596;
	int32_t x727 = INT32_MAX;
	int64_t x728 = 214LL;
	volatile int32_t t139 = 62;

    t139 = (((x725*x726)>x727)>x728);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x729 = INT32_MAX;
	volatile int8_t x732 = INT8_MAX;
	int32_t t140 = 5955;

    t140 = (((x729*x730)>x731)>x732);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x734 = 838LL;
	int16_t x735 = INT16_MAX;
	int32_t x736 = INT32_MAX;
	int32_t t141 = 7360593;

    t141 = (((x733*x734)>x735)>x736);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x738 = 152448324119LLU;
	static volatile uint8_t x739 = 0U;
	uint32_t x740 = 0U;
	volatile int32_t t142 = 82;

    t142 = (((x737*x738)>x739)>x740);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x741 = -1;
	int8_t x742 = 1;
	int16_t x743 = -1;
	int8_t x744 = -2;
	volatile int32_t t143 = 253030998;

    t143 = (((x741*x742)>x743)>x744);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x745 = -1;
	static int32_t x747 = INT32_MAX;
	uint8_t x748 = UINT8_MAX;

    t144 = (((x745*x746)>x747)>x748);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x749 = 390U;
	int8_t x750 = INT8_MIN;
	uint32_t x751 = 4U;
	int8_t x752 = 37;
	volatile int32_t t145 = -33436;

    t145 = (((x749*x750)>x751)>x752);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint64_t x761 = UINT64_MAX;
	int32_t x762 = -1;
	static int8_t x763 = INT8_MIN;
	uint16_t x764 = UINT16_MAX;
	volatile int32_t t146 = -2805692;

    t146 = (((x761*x762)>x763)>x764);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x765 = -1;
	static uint16_t x766 = 366U;
	int32_t x767 = INT32_MIN;
	int32_t t147 = 498217;

    t147 = (((x765*x766)>x767)>x768);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint16_t x769 = UINT16_MAX;
	static volatile int8_t x770 = -3;
	int8_t x771 = 28;
	uint8_t x772 = 1U;

    t148 = (((x769*x770)>x771)>x772);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x773 = 5;
	int16_t x774 = INT16_MIN;
	int64_t x775 = INT64_MAX;
	int16_t x776 = INT16_MAX;
	volatile int32_t t149 = -39905508;

    t149 = (((x773*x774)>x775)>x776);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile uint8_t x780 = 4U;
	int32_t t150 = 61;

    t150 = (((x777*x778)>x779)>x780);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x782 = 76792371;
	int16_t x783 = -1;
	static volatile int16_t x784 = 3;
	static int32_t t151 = 7238;

    t151 = (((x781*x782)>x783)>x784);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x785 = INT16_MIN;
	uint8_t x786 = 1U;
	int64_t x787 = INT64_MIN;

    t152 = (((x785*x786)>x787)>x788);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x789 = -1;
	int16_t x790 = INT16_MIN;
	int16_t x791 = -2283;
	volatile int8_t x792 = 0;
	int32_t t153 = -101322375;

    t153 = (((x789*x790)>x791)>x792);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x801 = -6814885563LL;
	volatile uint32_t x802 = 103944656U;
	uint16_t x803 = 496U;
	int64_t x804 = INT64_MIN;
	volatile int32_t t154 = -10780;

    t154 = (((x801*x802)>x803)>x804);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint16_t x805 = 1719U;
	int8_t x806 = INT8_MAX;
	uint32_t x807 = 1886U;
	uint64_t x808 = 133LLU;
	int32_t t155 = 26;

    t155 = (((x805*x806)>x807)>x808);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x817 = UINT8_MAX;
	volatile int32_t x819 = 173;
	uint16_t x820 = 0U;
	static int32_t t156 = -24967101;

    t156 = (((x817*x818)>x819)>x820);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x821 = 0U;
	int32_t x822 = -161;
	volatile uint32_t x824 = 6U;
	static int32_t t157 = 854994;

    t157 = (((x821*x822)>x823)>x824);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x825 = 329U;
	uint8_t x826 = 0U;
	static volatile int16_t x827 = INT16_MIN;
	int16_t x828 = INT16_MAX;
	int32_t t158 = 30441213;

    t158 = (((x825*x826)>x827)>x828);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x829 = 1905444;
	int32_t x830 = -1;
	int8_t x831 = INT8_MIN;
	int64_t x832 = INT64_MIN;

    t159 = (((x829*x830)>x831)>x832);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x837 = INT8_MIN;
	int16_t x838 = -1;
	int8_t x839 = INT8_MIN;
	volatile int8_t x840 = INT8_MIN;
	volatile int32_t t160 = 3889;

    t160 = (((x837*x838)>x839)>x840);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x841 = INT8_MIN;
	static int64_t x843 = -1LL;

    t161 = (((x841*x842)>x843)>x844);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x845 = -12;
	static int32_t x847 = INT32_MIN;
	int32_t x848 = INT32_MAX;
	static volatile int32_t t162 = -81;

    t162 = (((x845*x846)>x847)>x848);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x849 = INT16_MAX;
	int64_t x850 = 3504442LL;
	int32_t x851 = INT32_MIN;
	int16_t x852 = -60;
	static volatile int32_t t163 = -863;

    t163 = (((x849*x850)>x851)>x852);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x862 = -1LL;
	static int32_t x863 = -1;
	volatile int32_t t164 = -7676001;

    t164 = (((x861*x862)>x863)>x864);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x865 = -177261264;
	uint32_t x866 = 3U;
	static int8_t x867 = 0;
	uint32_t x868 = 21798U;
	int32_t t165 = -57502077;

    t165 = (((x865*x866)>x867)>x868);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x869 = INT16_MAX;
	volatile int16_t x870 = 1;
	uint64_t x871 = UINT64_MAX;
	volatile int8_t x872 = -1;
	static int32_t t166 = 4;

    t166 = (((x869*x870)>x871)>x872);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x873 = -53LL;
	static int8_t x874 = 2;
	int8_t x875 = INT8_MIN;
	static int32_t t167 = -92588;

    t167 = (((x873*x874)>x875)>x876);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x877 = INT32_MAX;
	static uint64_t x878 = 6578LLU;
	uint64_t x880 = 96363462618LLU;
	volatile int32_t t168 = -493771697;

    t168 = (((x877*x878)>x879)>x880);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x885 = -1;
	static int32_t x887 = INT32_MIN;
	int8_t x888 = 6;

    t169 = (((x885*x886)>x887)>x888);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int32_t x889 = -1;
	static uint8_t x890 = UINT8_MAX;
	int16_t x891 = -7;
	int8_t x892 = 18;
	volatile int32_t t170 = -567402;

    t170 = (((x889*x890)>x891)>x892);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x893 = UINT16_MAX;
	static int16_t x894 = INT16_MAX;
	int64_t x895 = -14697586309143113LL;
	static int64_t x896 = 3995465079054984LL;
	static int32_t t171 = 0;

    t171 = (((x893*x894)>x895)>x896);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x905 = -28520617795LL;
	uint32_t x906 = 125764598U;
	volatile int8_t x907 = -1;
	int8_t x908 = INT8_MAX;
	volatile int32_t t172 = -4400666;

    t172 = (((x905*x906)>x907)>x908);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x909 = -2085;
	uint32_t x910 = UINT32_MAX;
	static volatile int16_t x911 = INT16_MAX;
	static int64_t x912 = -373445914405LL;
	int32_t t173 = 15601584;

    t173 = (((x909*x910)>x911)>x912);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x913 = -1LL;
	int32_t x914 = -35578;
	int64_t x915 = INT64_MIN;
	uint32_t x916 = 0U;

    t174 = (((x913*x914)>x915)>x916);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint8_t x922 = 0U;
	volatile int8_t x923 = -1;
	volatile int16_t x924 = INT16_MIN;
	int32_t t175 = 59839;

    t175 = (((x921*x922)>x923)>x924);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint64_t x929 = 2LLU;
	int8_t x930 = INT8_MIN;
	static int8_t x931 = -1;
	static volatile int32_t t176 = -64509;

    t176 = (((x929*x930)>x931)>x932);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x933 = 1U;
	static int32_t x935 = 8;
	int64_t x936 = -1LL;
	static int32_t t177 = -293192594;

    t177 = (((x933*x934)>x935)>x936);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x937 = 70U;
	int64_t x939 = -2140786338066185220LL;
	int8_t x940 = -1;
	int32_t t178 = 2000235;

    t178 = (((x937*x938)>x939)>x940);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x945 = 112U;
	static uint64_t x947 = 2171518168LLU;
	int8_t x948 = INT8_MIN;
	int32_t t179 = -1015573484;

    t179 = (((x945*x946)>x947)>x948);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x953 = INT8_MAX;
	volatile int16_t x954 = INT16_MIN;
	uint8_t x955 = 86U;
	volatile int16_t x956 = -1;
	int32_t t180 = -26;

    t180 = (((x953*x954)>x955)>x956);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x957 = INT8_MIN;
	int64_t x958 = 30274995LL;
	uint16_t x959 = UINT16_MAX;
	static uint64_t x960 = 37139571373LLU;
	volatile int32_t t181 = -186918;

    t181 = (((x957*x958)>x959)>x960);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x961 = 5702212LLU;
	static int64_t x964 = -1LL;

    t182 = (((x961*x962)>x963)>x964);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x965 = 1;
	int64_t x967 = INT64_MAX;
	int16_t x968 = 591;
	int32_t t183 = 2007267;

    t183 = (((x965*x966)>x967)>x968);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x973 = 0;
	int32_t x975 = 6808;

    t184 = (((x973*x974)>x975)>x976);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint32_t x977 = 324241040U;
	volatile int32_t x978 = INT32_MAX;
	uint16_t x980 = 16120U;
	volatile int32_t t185 = 95759;

    t185 = (((x977*x978)>x979)>x980);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint32_t x985 = UINT32_MAX;
	int16_t x986 = INT16_MAX;
	int8_t x987 = -1;
	static int16_t x988 = INT16_MIN;
	volatile int32_t t186 = -111686575;

    t186 = (((x985*x986)>x987)>x988);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x995 = 215461;
	uint64_t x996 = 8601043153LLU;
	int32_t t187 = 26211;

    t187 = (((x993*x994)>x995)>x996);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1001 = -1;
	int32_t x1002 = -1;
	int16_t x1003 = INT16_MIN;
	uint8_t x1004 = UINT8_MAX;

    t188 = (((x1001*x1002)>x1003)>x1004);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint8_t x1005 = UINT8_MAX;
	int64_t x1006 = 73599LL;
	volatile uint32_t x1007 = 2697462U;
	int8_t x1008 = -1;

    t189 = (((x1005*x1006)>x1007)>x1008);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x1010 = -1LL;
	uint64_t x1011 = 108LLU;

    t190 = (((x1009*x1010)>x1011)>x1012);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x1017 = INT16_MIN;
	static uint64_t x1018 = UINT64_MAX;
	int64_t x1019 = 681439256191890LL;
	int32_t t191 = -224;

    t191 = (((x1017*x1018)>x1019)>x1020);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1021 = INT8_MAX;
	int8_t x1022 = 53;
	int64_t x1023 = INT64_MAX;
	int32_t t192 = 7385541;

    t192 = (((x1021*x1022)>x1023)>x1024);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x1026 = UINT64_MAX;
	int16_t x1027 = 2;
	volatile uint32_t x1028 = 14161794U;
	int32_t t193 = 138440;

    t193 = (((x1025*x1026)>x1027)>x1028);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile int64_t x1029 = -750379LL;
	static int16_t x1030 = 9;
	int16_t x1031 = INT16_MIN;
	volatile uint32_t x1032 = 20136750U;
	int32_t t194 = 16;

    t194 = (((x1029*x1030)>x1031)>x1032);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x1037 = INT64_MIN;
	uint64_t x1038 = 29240LLU;
	int64_t x1039 = INT64_MAX;
	volatile uint32_t x1040 = 1180U;
	int32_t t195 = -371;

    t195 = (((x1037*x1038)>x1039)>x1040);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x1041 = 105992656010LLU;
	volatile int64_t x1042 = INT64_MIN;
	int64_t x1044 = -4651545LL;
	volatile int32_t t196 = 70;

    t196 = (((x1041*x1042)>x1043)>x1044);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x1045 = 3U;
	uint64_t x1046 = 6670781LLU;
	static volatile int16_t x1048 = INT16_MAX;

    t197 = (((x1045*x1046)>x1047)>x1048);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x1061 = -1;
	static int16_t x1063 = INT16_MIN;
	volatile int16_t x1064 = INT16_MAX;
	volatile int32_t t198 = 12246104;

    t198 = (((x1061*x1062)>x1063)>x1064);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x1069 = INT8_MIN;
	static int16_t x1070 = INT16_MIN;
	int32_t t199 = 87806;

    t199 = (((x1069*x1070)>x1071)>x1072);

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

