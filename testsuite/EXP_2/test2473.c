
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

volatile int32_t x1 = INT32_MIN;
int32_t x2 = 1;
int32_t x6 = INT32_MIN;
int64_t x12 = -1LL;
int64_t x16 = -1LL;
int16_t x21 = INT16_MIN;
volatile int32_t t6 = 45321507;
int32_t x30 = INT32_MAX;
int64_t x36 = -1LL;
int32_t x39 = 7780;
volatile int8_t x42 = -1;
uint8_t x44 = 1U;
volatile int64_t x48 = -1LL;
uint64_t x51 = UINT64_MAX;
static int32_t t13 = -72;
volatile int16_t x57 = INT16_MIN;
int32_t x60 = INT32_MIN;
int8_t x62 = 1;
uint64_t x65 = 3148774LLU;
static volatile int64_t x71 = INT64_MIN;
int8_t x75 = INT8_MIN;
static int32_t t18 = -47578;
volatile int32_t t19 = 13;
int8_t x86 = INT8_MIN;
int32_t x89 = INT32_MIN;
static int16_t x90 = 0;
static int16_t x91 = -42;
uint64_t x93 = 95269525LLU;
uint64_t x98 = 26074804LLU;
int64_t x99 = INT64_MAX;
int32_t x102 = INT32_MIN;
static volatile uint8_t x110 = 3U;
static uint8_t x111 = 44U;
int8_t x119 = -1;
int8_t x124 = INT8_MAX;
volatile int32_t t30 = 16;
static int16_t x125 = 1;
static int8_t x126 = -59;
static int32_t t31 = -3561;
int8_t x129 = INT8_MAX;
uint16_t x131 = 19U;
uint16_t x132 = UINT16_MAX;
volatile uint64_t x134 = 144694433530LLU;
int8_t x142 = -1;
static int32_t t35 = -25518809;
int16_t x153 = INT16_MIN;
volatile int64_t x156 = INT64_MIN;
volatile int32_t t38 = 14537567;
static volatile int32_t x158 = -1;
int16_t x161 = 46;
static int16_t x169 = INT16_MIN;
volatile uint64_t x170 = 1317425755480366LLU;
int64_t x171 = -2454102108553677176LL;
volatile int16_t x174 = INT16_MIN;
volatile int32_t t43 = 11786;
uint32_t x181 = 1498927996U;
uint32_t x184 = 487398U;
int16_t x192 = 389;
static uint32_t x195 = 67485U;
int32_t x198 = INT32_MIN;
int8_t x202 = -1;
static volatile int32_t t53 = 3791633;
int32_t x219 = -1;
int8_t x220 = INT8_MIN;
int64_t x221 = INT64_MIN;
int8_t x234 = -1;
volatile uint64_t x239 = 920265002242288391LLU;
int8_t x246 = -1;
static int16_t x248 = -1;
volatile int32_t t62 = -31046;
uint8_t x254 = 0U;
volatile int32_t t63 = 49012438;
int32_t x257 = -3232;
volatile int64_t x259 = INT64_MIN;
uint32_t x267 = UINT32_MAX;
int64_t x271 = -1702417LL;
volatile int32_t t67 = -51402;
volatile uint32_t x274 = 7005U;
volatile int32_t t68 = 432594362;
uint64_t x289 = UINT64_MAX;
int32_t t73 = -1;
volatile int16_t x297 = 19;
volatile int8_t x298 = -1;
int32_t x303 = -1;
int32_t x305 = INT32_MAX;
uint64_t x313 = UINT64_MAX;
volatile uint8_t x322 = UINT8_MAX;
volatile int32_t t80 = 1;
static int8_t x348 = INT8_MIN;
int8_t x357 = 9;
uint8_t x358 = 4U;
uint16_t x359 = 1U;
int16_t x360 = -1;
int8_t x361 = INT8_MIN;
int32_t t90 = -90;
static int8_t x379 = INT8_MAX;
int32_t t94 = 119277;
uint64_t x384 = UINT64_MAX;
volatile uint8_t x391 = UINT8_MAX;
volatile int32_t t97 = 330043;
uint32_t x394 = UINT32_MAX;
int32_t t98 = -963;
static int32_t x406 = INT32_MAX;
int64_t x413 = INT64_MIN;
static int32_t t106 = 2;
uint64_t x431 = 5LLU;
uint64_t x436 = 54998717LLU;
static int64_t x439 = 4LL;
volatile int8_t x443 = 18;
int16_t x445 = INT16_MAX;
int64_t x449 = INT64_MIN;
uint8_t x450 = 1U;
int8_t x452 = 0;
int8_t x453 = -1;
int16_t x454 = INT16_MIN;
int32_t x464 = INT32_MAX;
static int64_t x466 = -172209LL;
volatile int32_t t116 = -10414;
uint32_t x477 = 3261742U;
uint8_t x481 = 0U;
int32_t t121 = 4;
int16_t x492 = -403;
int32_t x494 = INT32_MAX;
uint32_t x499 = 171829U;
int32_t x508 = INT32_MIN;
volatile int32_t t126 = 2;
int8_t x509 = INT8_MIN;
int8_t x510 = INT8_MIN;
volatile int32_t t127 = 0;
static uint64_t x513 = 14275LLU;
static volatile int32_t x517 = INT32_MIN;
static int8_t x532 = -1;
static uint64_t x538 = 501254940LLU;
int32_t x541 = 608;
int32_t x542 = INT32_MIN;
volatile uint8_t x544 = UINT8_MAX;
uint8_t x545 = 7U;
volatile int8_t x547 = INT8_MAX;
int32_t x558 = -2392964;
int32_t x559 = INT32_MAX;
static uint16_t x560 = UINT16_MAX;
volatile int16_t x561 = 15;
static volatile int8_t x562 = INT8_MIN;
int16_t x568 = INT16_MIN;
int64_t x570 = -1LL;
volatile int64_t x577 = INT64_MAX;
uint32_t x583 = UINT32_MAX;
volatile int8_t x584 = INT8_MIN;
uint32_t x593 = 4392U;
int32_t x599 = -1;
int16_t x602 = -188;
static volatile int8_t x606 = -1;
int8_t x608 = 0;
uint32_t x610 = 18688U;
uint32_t x615 = 1U;
volatile int32_t t153 = -1252;
uint32_t x617 = 41099531U;
uint8_t x621 = 79U;
volatile int64_t x623 = -1LL;
static int64_t x629 = INT64_MIN;
int16_t x630 = INT16_MIN;
volatile int8_t x633 = INT8_MIN;
int16_t x634 = INT16_MIN;
uint8_t x637 = UINT8_MAX;
uint16_t x642 = UINT16_MAX;
int16_t x647 = INT16_MIN;
uint8_t x650 = 4U;
int8_t x652 = INT8_MAX;
static volatile int32_t t162 = -342;
int16_t x656 = 1;
int8_t x661 = -1;
static volatile int8_t x667 = -1;
int16_t x673 = -1;
uint16_t x682 = 300U;
static int8_t x683 = -7;
int32_t t170 = -16;
int8_t x686 = INT8_MIN;
int32_t t172 = 344481148;
volatile int8_t x693 = INT8_MIN;
int32_t x706 = -1;
int32_t x709 = INT32_MIN;
static int8_t x712 = INT8_MAX;
int8_t x714 = INT8_MAX;
static int8_t x719 = -1;
uint32_t x724 = 437287270U;
static int8_t x727 = -20;
uint64_t x735 = 28LLU;
volatile int32_t t183 = -185453283;
int64_t x741 = -1LL;
volatile int32_t t185 = 725027;
int64_t x753 = -1LL;
int16_t x755 = -1;
volatile int32_t t190 = 111895;
int32_t x765 = -1587;
int16_t x767 = -1;
uint32_t x769 = 118U;
int64_t x774 = 14562427689LL;
volatile uint8_t x782 = 2U;
int32_t t196 = -602008;
volatile uint32_t x790 = UINT32_MAX;
volatile int32_t t197 = -2025627;
static int32_t t199 = -463;


void f0(void) {
    	int16_t x3 = INT16_MAX;
	uint16_t x4 = 2U;
	int32_t t0 = 552947673;

    t0 = ((x1>(x2|x3))>x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x5 = -179392741;
	int16_t x7 = -1;
	int32_t x8 = INT32_MIN;
	int32_t t1 = -1699;

    t1 = ((x5>(x6|x7))>x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x9 = -15;
	int16_t x10 = INT16_MIN;
	int64_t x11 = INT64_MAX;
	static int32_t t2 = 14505124;

    t2 = ((x9>(x10|x11))>x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x13 = INT32_MAX;
	int8_t x14 = INT8_MIN;
	uint32_t x15 = UINT32_MAX;
	static volatile int32_t t3 = -2012;

    t3 = ((x13>(x14|x15))>x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x17 = INT32_MIN;
	int64_t x18 = 9LL;
	int32_t x19 = INT32_MAX;
	uint8_t x20 = 61U;
	volatile int32_t t4 = 2219856;

    t4 = ((x17>(x18|x19))>x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x22 = INT8_MIN;
	static int64_t x23 = INT64_MIN;
	int64_t x24 = INT64_MIN;
	volatile int32_t t5 = 29353;

    t5 = ((x21>(x22|x23))>x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = -84721981314967LL;
	int16_t x26 = INT16_MIN;
	int16_t x27 = INT16_MAX;
	uint64_t x28 = UINT64_MAX;

    t6 = ((x25>(x26|x27))>x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x29 = -1;
	int64_t x31 = INT64_MIN;
	uint32_t x32 = UINT32_MAX;
	volatile int32_t t7 = 0;

    t7 = ((x29>(x30|x31))>x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = UINT64_MAX;
	int64_t x34 = INT64_MIN;
	int32_t x35 = INT32_MIN;
	int32_t t8 = 62761820;

    t8 = ((x33>(x34|x35))>x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MIN;
	volatile uint32_t x38 = 160665U;
	uint32_t x40 = 293U;
	volatile int32_t t9 = 0;

    t9 = ((x37>(x38|x39))>x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = -807;
	uint8_t x43 = UINT8_MAX;
	static volatile int32_t t10 = 11999377;

    t10 = ((x41>(x42|x43))>x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = INT64_MIN;
	int16_t x46 = INT16_MIN;
	uint64_t x47 = UINT64_MAX;
	volatile int32_t t11 = 19354;

    t11 = ((x45>(x46|x47))>x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = INT64_MIN;
	volatile uint64_t x50 = UINT64_MAX;
	volatile uint8_t x52 = UINT8_MAX;
	int32_t t12 = 1966093;

    t12 = ((x49>(x50|x51))>x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x53 = 17U;
	uint32_t x54 = 553U;
	int16_t x55 = -8;
	uint16_t x56 = UINT16_MAX;

    t13 = ((x53>(x54|x55))>x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x58 = 601U;
	static int8_t x59 = INT8_MIN;
	static volatile int32_t t14 = 1;

    t14 = ((x57>(x58|x59))>x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = -1;
	int64_t x63 = -1LL;
	volatile int64_t x64 = INT64_MAX;
	volatile int32_t t15 = -6902449;

    t15 = ((x61>(x62|x63))>x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x66 = INT16_MIN;
	uint64_t x67 = 24893396LLU;
	volatile uint8_t x68 = 2U;
	int32_t t16 = 609;

    t16 = ((x65>(x66|x67))>x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x69 = UINT64_MAX;
	static int16_t x70 = INT16_MIN;
	int16_t x72 = 374;
	int32_t t17 = -1399850;

    t17 = ((x69>(x70|x71))>x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x73 = 2U;
	uint32_t x74 = 278U;
	int8_t x76 = -5;

    t18 = ((x73>(x74|x75))>x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x77 = 182U;
	uint16_t x78 = 28003U;
	static uint16_t x79 = 125U;
	static int16_t x80 = -8440;

    t19 = ((x77>(x78|x79))>x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x81 = INT64_MAX;
	int64_t x82 = INT64_MIN;
	int16_t x83 = INT16_MIN;
	static uint16_t x84 = UINT16_MAX;
	static volatile int32_t t20 = 125;

    t20 = ((x81>(x82|x83))>x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x85 = -1;
	static int32_t x87 = INT32_MIN;
	int8_t x88 = -1;
	volatile int32_t t21 = -1727018;

    t21 = ((x85>(x86|x87))>x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x92 = 0;
	int32_t t22 = -25381631;

    t22 = ((x89>(x90|x91))>x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x94 = INT8_MAX;
	int8_t x95 = -14;
	static uint8_t x96 = 20U;
	volatile int32_t t23 = -2316061;

    t23 = ((x93>(x94|x95))>x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x97 = 406U;
	int16_t x100 = INT16_MIN;
	static int32_t t24 = 3656;

    t24 = ((x97>(x98|x99))>x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint16_t x101 = 2U;
	uint32_t x103 = 4216U;
	int16_t x104 = -1;
	int32_t t25 = -7050466;

    t25 = ((x101>(x102|x103))>x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint32_t x105 = 1001556U;
	volatile int32_t x106 = INT32_MAX;
	uint8_t x107 = 7U;
	int8_t x108 = INT8_MAX;
	int32_t t26 = -208794020;

    t26 = ((x105>(x106|x107))>x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = INT64_MIN;
	int64_t x112 = 109851757LL;
	volatile int32_t t27 = 2;

    t27 = ((x109>(x110|x111))>x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = INT32_MIN;
	int16_t x114 = -5104;
	volatile int32_t x115 = 104;
	int8_t x116 = -63;
	int32_t t28 = 162534958;

    t28 = ((x113>(x114|x115))>x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x117 = UINT32_MAX;
	int8_t x118 = INT8_MIN;
	static int64_t x120 = INT64_MIN;
	volatile int32_t t29 = -1;

    t29 = ((x117>(x118|x119))>x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x121 = UINT8_MAX;
	int8_t x122 = INT8_MAX;
	uint32_t x123 = 2036120U;

    t30 = ((x121>(x122|x123))>x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x127 = -1;
	int16_t x128 = -16361;

    t31 = ((x125>(x126|x127))>x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x130 = INT16_MIN;
	volatile int32_t t32 = -57509;

    t32 = ((x129>(x130|x131))>x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = -1;
	uint8_t x135 = 1U;
	static int32_t x136 = -15;
	volatile int32_t t33 = 1381860;

    t33 = ((x133>(x134|x135))>x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = -1;
	int16_t x138 = -3;
	uint32_t x139 = 0U;
	volatile int64_t x140 = INT64_MIN;
	volatile int32_t t34 = 97335057;

    t34 = ((x137>(x138|x139))>x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint8_t x141 = 3U;
	int32_t x143 = INT32_MIN;
	int16_t x144 = INT16_MAX;

    t35 = ((x141>(x142|x143))>x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x145 = -580;
	int16_t x146 = INT16_MAX;
	int8_t x147 = INT8_MIN;
	uint32_t x148 = UINT32_MAX;
	static int32_t t36 = 15380024;

    t36 = ((x145>(x146|x147))>x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = INT32_MIN;
	uint32_t x150 = UINT32_MAX;
	volatile uint64_t x151 = 100LLU;
	uint32_t x152 = 702224500U;
	int32_t t37 = 1697;

    t37 = ((x149>(x150|x151))>x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x154 = INT64_MAX;
	volatile uint8_t x155 = 3U;

    t38 = ((x153>(x154|x155))>x156);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x157 = 2U;
	static uint64_t x159 = 49241189632647LLU;
	int8_t x160 = -1;
	int32_t t39 = 12183623;

    t39 = ((x157>(x158|x159))>x160);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x162 = 524U;
	volatile int8_t x163 = 1;
	uint64_t x164 = 6001566515769LLU;
	volatile int32_t t40 = -60;

    t40 = ((x161>(x162|x163))>x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x165 = INT64_MAX;
	int16_t x166 = INT16_MIN;
	static int64_t x167 = INT64_MIN;
	uint32_t x168 = 59258303U;
	int32_t t41 = 25;

    t41 = ((x165>(x166|x167))>x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x172 = UINT8_MAX;
	static int32_t t42 = -394585693;

    t42 = ((x169>(x170|x171))>x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int16_t x173 = INT16_MIN;
	static int64_t x175 = INT64_MIN;
	int64_t x176 = INT64_MAX;

    t43 = ((x173>(x174|x175))>x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x177 = 1983U;
	volatile int64_t x178 = INT64_MIN;
	int16_t x179 = -1;
	static volatile int16_t x180 = -1;
	static int32_t t44 = 1;

    t44 = ((x177>(x178|x179))>x180);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x182 = -1LL;
	uint64_t x183 = 27311322273467LLU;
	static volatile int32_t t45 = 620978;

    t45 = ((x181>(x182|x183))>x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile int16_t x185 = INT16_MIN;
	int32_t x186 = INT32_MIN;
	int16_t x187 = -1;
	int32_t x188 = INT32_MAX;
	int32_t t46 = -3428;

    t46 = ((x185>(x186|x187))>x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint32_t x189 = 16643U;
	static int32_t x190 = INT32_MAX;
	uint32_t x191 = UINT32_MAX;
	int32_t t47 = -16296;

    t47 = ((x189>(x190|x191))>x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = -1;
	static int32_t x194 = -170793401;
	volatile int16_t x196 = INT16_MIN;
	volatile int32_t t48 = -318663821;

    t48 = ((x193>(x194|x195))>x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x197 = UINT8_MAX;
	uint64_t x199 = UINT64_MAX;
	static int16_t x200 = INT16_MIN;
	int32_t t49 = -232412;

    t49 = ((x197>(x198|x199))>x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = -1;
	volatile uint8_t x203 = UINT8_MAX;
	static uint8_t x204 = 2U;
	static int32_t t50 = -16887;

    t50 = ((x201>(x202|x203))>x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = -1LL;
	int16_t x206 = 0;
	static int16_t x207 = INT16_MIN;
	static uint8_t x208 = 1U;
	volatile int32_t t51 = -21;

    t51 = ((x205>(x206|x207))>x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = INT32_MIN;
	static volatile int8_t x210 = -20;
	int16_t x211 = INT16_MAX;
	static int8_t x212 = -1;
	int32_t t52 = 193;

    t52 = ((x209>(x210|x211))>x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = INT32_MIN;
	int8_t x214 = -1;
	int32_t x215 = -19464;
	volatile uint8_t x216 = 1U;

    t53 = ((x213>(x214|x215))>x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x217 = -1;
	volatile uint8_t x218 = 57U;
	static volatile int32_t t54 = 62233;

    t54 = ((x217>(x218|x219))>x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x222 = INT8_MIN;
	int8_t x223 = -1;
	static int8_t x224 = -4;
	volatile int32_t t55 = -13;

    t55 = ((x221>(x222|x223))>x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int64_t x225 = INT64_MIN;
	volatile int64_t x226 = INT64_MIN;
	uint8_t x227 = UINT8_MAX;
	int16_t x228 = -1;
	volatile int32_t t56 = 1015;

    t56 = ((x225>(x226|x227))>x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x229 = 98U;
	volatile uint64_t x230 = 171671315325LLU;
	static volatile uint8_t x231 = 23U;
	int32_t x232 = INT32_MIN;
	int32_t t57 = 32;

    t57 = ((x229>(x230|x231))>x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x233 = INT8_MIN;
	static int64_t x235 = -1LL;
	int8_t x236 = INT8_MAX;
	static volatile int32_t t58 = -80;

    t58 = ((x233>(x234|x235))>x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x237 = 5405804;
	int16_t x238 = INT16_MIN;
	int8_t x240 = 0;
	volatile int32_t t59 = -706743;

    t59 = ((x237>(x238|x239))>x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x241 = -1;
	int64_t x242 = INT64_MIN;
	int32_t x243 = -1;
	int64_t x244 = -1LL;
	int32_t t60 = -487772;

    t60 = ((x241>(x242|x243))>x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint32_t x245 = 174013874U;
	int32_t x247 = INT32_MIN;
	static volatile int32_t t61 = 33305;

    t61 = ((x245>(x246|x247))>x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x249 = 306;
	volatile int16_t x250 = INT16_MIN;
	volatile int16_t x251 = -1;
	int8_t x252 = 1;

    t62 = ((x249>(x250|x251))>x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = 1LL;
	volatile uint64_t x255 = 104815LLU;
	volatile int32_t x256 = 64490845;

    t63 = ((x253>(x254|x255))>x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile uint64_t x258 = 2837999899038192712LLU;
	uint32_t x260 = 1620828450U;
	int32_t t64 = 32832;

    t64 = ((x257>(x258|x259))>x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x261 = INT16_MAX;
	uint8_t x262 = 12U;
	static int8_t x263 = INT8_MAX;
	volatile int64_t x264 = INT64_MAX;
	static int32_t t65 = 421078620;

    t65 = ((x261>(x262|x263))>x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x265 = -197201623629LL;
	int32_t x266 = INT32_MIN;
	static uint64_t x268 = 1LLU;
	static volatile int32_t t66 = -516835;

    t66 = ((x265>(x266|x267))>x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x269 = UINT32_MAX;
	static volatile int32_t x270 = INT32_MAX;
	static volatile int64_t x272 = -152LL;

    t67 = ((x269>(x270|x271))>x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = INT64_MAX;
	volatile int64_t x275 = -285LL;
	int32_t x276 = INT32_MIN;

    t68 = ((x273>(x274|x275))>x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint64_t x277 = 64356LLU;
	uint8_t x278 = UINT8_MAX;
	uint8_t x279 = UINT8_MAX;
	int16_t x280 = INT16_MIN;
	volatile int32_t t69 = 0;

    t69 = ((x277>(x278|x279))>x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = INT64_MIN;
	volatile int64_t x282 = INT64_MIN;
	uint8_t x283 = 0U;
	int32_t x284 = 348913404;
	volatile int32_t t70 = -507;

    t70 = ((x281>(x282|x283))>x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = -1;
	int16_t x286 = 14376;
	static int32_t x287 = INT32_MIN;
	static volatile uint32_t x288 = 8U;
	volatile int32_t t71 = 3479295;

    t71 = ((x285>(x286|x287))>x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x290 = UINT8_MAX;
	int16_t x291 = INT16_MIN;
	static int16_t x292 = INT16_MIN;
	volatile int32_t t72 = -988325;

    t72 = ((x289>(x290|x291))>x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x293 = 7U;
	static uint16_t x294 = UINT16_MAX;
	volatile int64_t x295 = INT64_MIN;
	volatile int8_t x296 = INT8_MIN;

    t73 = ((x293>(x294|x295))>x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x299 = 6929414U;
	static int32_t x300 = -1;
	int32_t t74 = 478247;

    t74 = ((x297>(x298|x299))>x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = INT64_MIN;
	uint32_t x302 = UINT32_MAX;
	uint16_t x304 = 3885U;
	int32_t t75 = -648;

    t75 = ((x301>(x302|x303))>x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x306 = -5;
	int8_t x307 = INT8_MIN;
	int8_t x308 = INT8_MIN;
	volatile int32_t t76 = 88468215;

    t76 = ((x305>(x306|x307))>x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x309 = INT32_MIN;
	static volatile int32_t x310 = -1;
	static volatile int8_t x311 = 1;
	int16_t x312 = INT16_MIN;
	static volatile int32_t t77 = 87187;

    t77 = ((x309>(x310|x311))>x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x314 = 27U;
	volatile int64_t x315 = -15454LL;
	int16_t x316 = -1;
	int32_t t78 = -37672;

    t78 = ((x313>(x314|x315))>x316);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x317 = 0U;
	uint16_t x318 = 69U;
	int8_t x319 = -1;
	static uint8_t x320 = 0U;
	volatile int32_t t79 = 241164;

    t79 = ((x317>(x318|x319))>x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x321 = 9344U;
	int16_t x323 = 16194;
	int32_t x324 = -61;

    t80 = ((x321>(x322|x323))>x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x325 = 2227817994733139915LLU;
	uint8_t x326 = 4U;
	int8_t x327 = -11;
	uint16_t x328 = 219U;
	volatile int32_t t81 = -27;

    t81 = ((x325>(x326|x327))>x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x329 = UINT16_MAX;
	uint16_t x330 = 1414U;
	int64_t x331 = INT64_MAX;
	int16_t x332 = 16343;
	int32_t t82 = -19;

    t82 = ((x329>(x330|x331))>x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x333 = 0;
	int64_t x334 = INT64_MAX;
	static volatile int8_t x335 = INT8_MIN;
	int8_t x336 = INT8_MIN;
	int32_t t83 = 7241;

    t83 = ((x333>(x334|x335))>x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = -1428226;
	int32_t x338 = INT32_MIN;
	volatile int8_t x339 = -1;
	static int64_t x340 = INT64_MIN;
	volatile int32_t t84 = -23404;

    t84 = ((x337>(x338|x339))>x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x341 = INT16_MIN;
	uint32_t x342 = UINT32_MAX;
	uint32_t x343 = UINT32_MAX;
	uint8_t x344 = 73U;
	static int32_t t85 = 144002;

    t85 = ((x341>(x342|x343))>x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint32_t x345 = UINT32_MAX;
	uint32_t x346 = 146U;
	uint64_t x347 = UINT64_MAX;
	volatile int32_t t86 = 15;

    t86 = ((x345>(x346|x347))>x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x349 = 7U;
	static int8_t x350 = -1;
	int8_t x351 = -3;
	static volatile int64_t x352 = INT64_MIN;
	static volatile int32_t t87 = -4366;

    t87 = ((x349>(x350|x351))>x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint8_t x353 = 2U;
	int32_t x354 = -3017;
	volatile int32_t x355 = -88150365;
	volatile int16_t x356 = -196;
	int32_t t88 = -1;

    t88 = ((x353>(x354|x355))>x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int32_t t89 = -119792856;

    t89 = ((x357>(x358|x359))>x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x362 = -1;
	static volatile uint16_t x363 = UINT16_MAX;
	int16_t x364 = -1;

    t90 = ((x361>(x362|x363))>x364);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = INT64_MIN;
	int64_t x366 = INT64_MIN;
	static int64_t x367 = INT64_MIN;
	uint64_t x368 = 960786LLU;
	int32_t t91 = 1920389;

    t91 = ((x365>(x366|x367))>x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x369 = 15808230LLU;
	volatile int32_t x370 = INT32_MIN;
	static uint16_t x371 = 3051U;
	int16_t x372 = -973;
	static int32_t t92 = 214;

    t92 = ((x369>(x370|x371))>x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x373 = -1;
	volatile int64_t x374 = -1LL;
	volatile int32_t x375 = INT32_MIN;
	int64_t x376 = INT64_MIN;
	volatile int32_t t93 = 6432492;

    t93 = ((x373>(x374|x375))>x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = -10;
	int64_t x378 = 1029146169LL;
	volatile int32_t x380 = INT32_MIN;

    t94 = ((x377>(x378|x379))>x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x381 = UINT8_MAX;
	uint8_t x382 = UINT8_MAX;
	static uint16_t x383 = UINT16_MAX;
	volatile int32_t t95 = -12577;

    t95 = ((x381>(x382|x383))>x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x385 = -1;
	volatile int8_t x386 = 8;
	volatile uint16_t x387 = 1847U;
	uint16_t x388 = UINT16_MAX;
	volatile int32_t t96 = -349;

    t96 = ((x385>(x386|x387))>x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = 0;
	static int8_t x390 = INT8_MIN;
	int64_t x392 = INT64_MAX;

    t97 = ((x389>(x390|x391))>x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x393 = INT8_MAX;
	int32_t x395 = INT32_MIN;
	uint8_t x396 = 1U;

    t98 = ((x393>(x394|x395))>x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = INT32_MIN;
	int16_t x398 = 517;
	int32_t x399 = 1;
	int16_t x400 = -1;
	int32_t t99 = -229;

    t99 = ((x397>(x398|x399))>x400);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x401 = INT64_MIN;
	int8_t x402 = INT8_MIN;
	int64_t x403 = 11LL;
	int32_t x404 = -1;
	volatile int32_t t100 = -29;

    t100 = ((x401>(x402|x403))>x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint8_t x405 = 1U;
	uint64_t x407 = 1764364483LLU;
	volatile int16_t x408 = INT16_MIN;
	volatile int32_t t101 = 48491689;

    t101 = ((x405>(x406|x407))>x408);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint64_t x409 = UINT64_MAX;
	static int16_t x410 = -11;
	int16_t x411 = -10;
	int32_t x412 = INT32_MIN;
	int32_t t102 = -77;

    t102 = ((x409>(x410|x411))>x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x414 = UINT16_MAX;
	uint8_t x415 = 37U;
	int64_t x416 = INT64_MIN;
	volatile int32_t t103 = 17;

    t103 = ((x413>(x414|x415))>x416);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x417 = INT32_MIN;
	uint32_t x418 = 119334208U;
	uint32_t x419 = 2U;
	volatile int16_t x420 = 7296;
	int32_t t104 = 2703989;

    t104 = ((x417>(x418|x419))>x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x421 = -3;
	static int16_t x422 = 1002;
	static int8_t x423 = -1;
	static int16_t x424 = -232;
	volatile int32_t t105 = 6092851;

    t105 = ((x421>(x422|x423))>x424);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x425 = INT8_MIN;
	static int32_t x426 = -48314036;
	volatile uint16_t x427 = UINT16_MAX;
	int8_t x428 = -3;

    t106 = ((x425>(x426|x427))>x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x429 = -183;
	volatile uint64_t x430 = 624352440LLU;
	uint64_t x432 = UINT64_MAX;
	int32_t t107 = -1644769;

    t107 = ((x429>(x430|x431))>x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint16_t x433 = UINT16_MAX;
	uint16_t x434 = UINT16_MAX;
	static int64_t x435 = INT64_MIN;
	volatile int32_t t108 = 15794;

    t108 = ((x433>(x434|x435))>x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile uint16_t x437 = UINT16_MAX;
	static int64_t x438 = -2006114910138LL;
	int64_t x440 = INT64_MIN;
	volatile int32_t t109 = 8;

    t109 = ((x437>(x438|x439))>x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x441 = INT16_MIN;
	int64_t x442 = INT64_MIN;
	volatile int8_t x444 = 1;
	volatile int32_t t110 = 47033009;

    t110 = ((x441>(x442|x443))>x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x446 = 4108U;
	volatile int16_t x447 = 348;
	int8_t x448 = INT8_MIN;
	int32_t t111 = -3;

    t111 = ((x445>(x446|x447))>x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint64_t x451 = UINT64_MAX;
	volatile int32_t t112 = -500094985;

    t112 = ((x449>(x450|x451))>x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x455 = 2U;
	int64_t x456 = -1LL;
	int32_t t113 = -1009;

    t113 = ((x453>(x454|x455))>x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x457 = INT16_MIN;
	volatile int64_t x458 = 1148LL;
	int8_t x459 = 0;
	int32_t x460 = INT32_MIN;
	int32_t t114 = 121275;

    t114 = ((x457>(x458|x459))>x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x461 = 29U;
	int16_t x462 = -307;
	static int8_t x463 = -8;
	static volatile int32_t t115 = 674424508;

    t115 = ((x461>(x462|x463))>x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x465 = INT16_MAX;
	static int8_t x467 = INT8_MAX;
	int32_t x468 = 111;

    t116 = ((x465>(x466|x467))>x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = INT8_MAX;
	uint8_t x470 = UINT8_MAX;
	int8_t x471 = INT8_MIN;
	int8_t x472 = -7;
	volatile int32_t t117 = -2871226;

    t117 = ((x469>(x470|x471))>x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x473 = -1;
	int16_t x474 = -5;
	int16_t x475 = -1;
	int16_t x476 = INT16_MAX;
	volatile int32_t t118 = -1;

    t118 = ((x473>(x474|x475))>x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x478 = INT64_MAX;
	uint16_t x479 = UINT16_MAX;
	int32_t x480 = 96023;
	volatile int32_t t119 = -114;

    t119 = ((x477>(x478|x479))>x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x482 = 12U;
	volatile uint16_t x483 = 658U;
	static int8_t x484 = INT8_MIN;
	int32_t t120 = -14335901;

    t120 = ((x481>(x482|x483))>x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = INT8_MAX;
	int16_t x486 = INT16_MAX;
	int32_t x487 = 5;
	static int64_t x488 = INT64_MIN;

    t121 = ((x485>(x486|x487))>x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x489 = INT64_MIN;
	static int8_t x490 = INT8_MAX;
	int64_t x491 = 17048996659517LL;
	volatile int32_t t122 = -114876;

    t122 = ((x489>(x490|x491))>x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x493 = 5;
	static int8_t x495 = INT8_MIN;
	int8_t x496 = -1;
	int32_t t123 = -905657897;

    t123 = ((x493>(x494|x495))>x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = 2807584440LL;
	int8_t x498 = -1;
	static uint8_t x500 = 82U;
	volatile int32_t t124 = -513162;

    t124 = ((x497>(x498|x499))>x500);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x501 = 27U;
	volatile int32_t x502 = -1;
	volatile int8_t x503 = INT8_MIN;
	int64_t x504 = -1LL;
	int32_t t125 = -1624942;

    t125 = ((x501>(x502|x503))>x504);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint8_t x505 = UINT8_MAX;
	uint32_t x506 = 1U;
	volatile int32_t x507 = INT32_MIN;

    t126 = ((x505>(x506|x507))>x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x511 = INT16_MIN;
	static int16_t x512 = INT16_MIN;

    t127 = ((x509>(x510|x511))>x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x514 = INT32_MIN;
	int16_t x515 = INT16_MIN;
	uint16_t x516 = 23U;
	int32_t t128 = 170;

    t128 = ((x513>(x514|x515))>x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x518 = 155LLU;
	volatile int16_t x519 = INT16_MIN;
	volatile uint32_t x520 = 7U;
	volatile int32_t t129 = 130556;

    t129 = ((x517>(x518|x519))>x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x521 = -1;
	volatile int32_t x522 = INT32_MIN;
	uint64_t x523 = 869229LLU;
	volatile int32_t x524 = INT32_MIN;
	int32_t t130 = -2006101;

    t130 = ((x521>(x522|x523))>x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x525 = 27;
	static int32_t x526 = 1;
	int16_t x527 = INT16_MAX;
	int8_t x528 = -6;
	int32_t t131 = 18240;

    t131 = ((x525>(x526|x527))>x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x529 = INT64_MIN;
	int16_t x530 = INT16_MAX;
	volatile uint32_t x531 = 14U;
	int32_t t132 = 119023;

    t132 = ((x529>(x530|x531))>x532);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x533 = 6U;
	static int64_t x534 = -434208LL;
	int8_t x535 = INT8_MAX;
	uint16_t x536 = 5U;
	static int32_t t133 = 202609932;

    t133 = ((x533>(x534|x535))>x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = INT16_MIN;
	static volatile uint16_t x539 = UINT16_MAX;
	int64_t x540 = INT64_MAX;
	volatile int32_t t134 = 434247976;

    t134 = ((x537>(x538|x539))>x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x543 = 6373;
	int32_t t135 = -102756002;

    t135 = ((x541>(x542|x543))>x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x546 = UINT32_MAX;
	static int8_t x548 = INT8_MIN;
	volatile int32_t t136 = -265;

    t136 = ((x545>(x546|x547))>x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x549 = -1LL;
	int32_t x550 = INT32_MAX;
	int16_t x551 = -1;
	uint64_t x552 = UINT64_MAX;
	volatile int32_t t137 = 1;

    t137 = ((x549>(x550|x551))>x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x553 = INT64_MAX;
	volatile int64_t x554 = 1134800599LL;
	volatile uint64_t x555 = 29954LLU;
	uint8_t x556 = 4U;
	int32_t t138 = -31;

    t138 = ((x553>(x554|x555))>x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x557 = -1;
	volatile int32_t t139 = -2557;

    t139 = ((x557>(x558|x559))>x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x563 = -19;
	int32_t x564 = -775562;
	int32_t t140 = 480869235;

    t140 = ((x561>(x562|x563))>x564);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x565 = 55;
	int8_t x566 = INT8_MAX;
	static int64_t x567 = INT64_MIN;
	volatile int32_t t141 = -62586515;

    t141 = ((x565>(x566|x567))>x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint8_t x569 = UINT8_MAX;
	uint32_t x571 = 210U;
	int64_t x572 = 3749350996271142LL;
	volatile int32_t t142 = 500712315;

    t142 = ((x569>(x570|x571))>x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x573 = -1LL;
	int8_t x574 = 1;
	static volatile int64_t x575 = -7908LL;
	uint64_t x576 = 17025251204757927LLU;
	volatile int32_t t143 = 5;

    t143 = ((x573>(x574|x575))>x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x578 = 1U;
	int16_t x579 = INT16_MIN;
	int32_t x580 = -225;
	int32_t t144 = 74195844;

    t144 = ((x577>(x578|x579))>x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x581 = 4291;
	volatile uint16_t x582 = 357U;
	static volatile int32_t t145 = -691286;

    t145 = ((x581>(x582|x583))>x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x585 = INT64_MIN;
	int32_t x586 = INT32_MAX;
	volatile int16_t x587 = -1;
	int8_t x588 = 0;
	volatile int32_t t146 = 939;

    t146 = ((x585>(x586|x587))>x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x589 = UINT64_MAX;
	volatile int16_t x590 = INT16_MIN;
	static volatile int32_t x591 = 1963;
	int16_t x592 = -1;
	volatile int32_t t147 = 12474;

    t147 = ((x589>(x590|x591))>x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x594 = -1;
	int32_t x595 = 8150;
	static int16_t x596 = INT16_MAX;
	volatile int32_t t148 = -127674;

    t148 = ((x593>(x594|x595))>x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = 1142174;
	int32_t x598 = 3385;
	int64_t x600 = -1LL;
	volatile int32_t t149 = -1710895;

    t149 = ((x597>(x598|x599))>x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x601 = -1LL;
	static volatile int16_t x603 = -1;
	volatile int64_t x604 = INT64_MIN;
	volatile int32_t t150 = -1014;

    t150 = ((x601>(x602|x603))>x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int16_t x605 = INT16_MIN;
	int64_t x607 = INT64_MIN;
	volatile int32_t t151 = -25431075;

    t151 = ((x605>(x606|x607))>x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = INT32_MIN;
	static int64_t x611 = INT64_MAX;
	volatile int8_t x612 = -1;
	volatile int32_t t152 = 3238222;

    t152 = ((x609>(x610|x611))>x612);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x613 = -19;
	int32_t x614 = INT32_MAX;
	int16_t x616 = INT16_MIN;

    t153 = ((x613>(x614|x615))>x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x618 = INT32_MIN;
	uint16_t x619 = UINT16_MAX;
	uint64_t x620 = UINT64_MAX;
	int32_t t154 = -2866;

    t154 = ((x617>(x618|x619))>x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x622 = UINT8_MAX;
	volatile int32_t x624 = -1;
	int32_t t155 = -18927;

    t155 = ((x621>(x622|x623))>x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static int32_t x625 = 1;
	int64_t x626 = -915738572856LL;
	int16_t x627 = INT16_MAX;
	uint64_t x628 = UINT64_MAX;
	int32_t t156 = 95;

    t156 = ((x625>(x626|x627))>x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x631 = UINT16_MAX;
	int64_t x632 = -659574749014317980LL;
	int32_t t157 = 3;

    t157 = ((x629>(x630|x631))>x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x635 = -1;
	volatile int16_t x636 = INT16_MIN;
	volatile int32_t t158 = 15165;

    t158 = ((x633>(x634|x635))>x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x638 = INT32_MIN;
	static volatile int64_t x639 = INT64_MIN;
	int8_t x640 = -5;
	static volatile int32_t t159 = -14058;

    t159 = ((x637>(x638|x639))>x640);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x641 = 0U;
	int8_t x643 = 36;
	int64_t x644 = -157741221LL;
	int32_t t160 = -198291;

    t160 = ((x641>(x642|x643))>x644);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x645 = UINT32_MAX;
	int8_t x646 = INT8_MIN;
	static volatile int8_t x648 = -1;
	volatile int32_t t161 = -483;

    t161 = ((x645>(x646|x647))>x648);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = INT8_MAX;
	int8_t x651 = -7;

    t162 = ((x649>(x650|x651))>x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint32_t x653 = UINT32_MAX;
	uint32_t x654 = 192896U;
	static uint32_t x655 = 3U;
	int32_t t163 = 34020;

    t163 = ((x653>(x654|x655))>x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x657 = 12U;
	static int16_t x658 = INT16_MAX;
	int32_t x659 = -752527;
	uint16_t x660 = UINT16_MAX;
	volatile int32_t t164 = -2734;

    t164 = ((x657>(x658|x659))>x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x662 = -1;
	int16_t x663 = -1;
	static uint32_t x664 = 2U;
	int32_t t165 = -157051;

    t165 = ((x661>(x662|x663))>x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x665 = INT16_MIN;
	int32_t x666 = INT32_MIN;
	static uint8_t x668 = UINT8_MAX;
	volatile int32_t t166 = -31981078;

    t166 = ((x665>(x666|x667))>x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = INT64_MIN;
	static int16_t x670 = -3;
	volatile int16_t x671 = INT16_MAX;
	static int16_t x672 = INT16_MIN;
	int32_t t167 = 6866451;

    t167 = ((x669>(x670|x671))>x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x674 = INT32_MAX;
	volatile int32_t x675 = 60434460;
	volatile int16_t x676 = INT16_MIN;
	volatile int32_t t168 = -104715;

    t168 = ((x673>(x674|x675))>x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = 156;
	volatile int64_t x678 = 0LL;
	uint8_t x679 = UINT8_MAX;
	uint32_t x680 = UINT32_MAX;
	volatile int32_t t169 = -3876;

    t169 = ((x677>(x678|x679))>x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = -1;
	uint16_t x684 = 9U;

    t170 = ((x681>(x682|x683))>x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x685 = 47;
	static uint16_t x687 = 7U;
	int32_t x688 = -1;
	int32_t t171 = -54;

    t171 = ((x685>(x686|x687))>x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile uint8_t x689 = 2U;
	int8_t x690 = -12;
	uint16_t x691 = UINT16_MAX;
	static int16_t x692 = INT16_MAX;

    t172 = ((x689>(x690|x691))>x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x694 = INT16_MAX;
	int16_t x695 = -1;
	uint64_t x696 = UINT64_MAX;
	volatile int32_t t173 = 1;

    t173 = ((x693>(x694|x695))>x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint32_t x697 = 1096777U;
	int64_t x698 = -1LL;
	int8_t x699 = -1;
	uint64_t x700 = 250205911958568LLU;
	static volatile int32_t t174 = -81046;

    t174 = ((x697>(x698|x699))>x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x701 = INT16_MAX;
	uint8_t x702 = UINT8_MAX;
	int8_t x703 = 0;
	int32_t x704 = INT32_MIN;
	int32_t t175 = 13;

    t175 = ((x701>(x702|x703))>x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x705 = INT64_MIN;
	int32_t x707 = INT32_MIN;
	uint16_t x708 = UINT16_MAX;
	static volatile int32_t t176 = 311;

    t176 = ((x705>(x706|x707))>x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x710 = INT16_MAX;
	static volatile uint32_t x711 = 13978674U;
	volatile int32_t t177 = -12632520;

    t177 = ((x709>(x710|x711))>x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x713 = INT32_MIN;
	int64_t x715 = 32746961LL;
	static uint64_t x716 = 4075LLU;
	int32_t t178 = -8;

    t178 = ((x713>(x714|x715))>x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x717 = 29U;
	static volatile int32_t x718 = INT32_MAX;
	volatile int8_t x720 = INT8_MIN;
	volatile int32_t t179 = -344;

    t179 = ((x717>(x718|x719))>x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x721 = 199U;
	volatile int8_t x722 = 0;
	int8_t x723 = INT8_MIN;
	int32_t t180 = -133772995;

    t180 = ((x721>(x722|x723))>x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x725 = INT32_MAX;
	static volatile int16_t x726 = INT16_MAX;
	static uint64_t x728 = 3171577139818LLU;
	int32_t t181 = -15;

    t181 = ((x725>(x726|x727))>x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x729 = -1;
	volatile int8_t x730 = -3;
	uint8_t x731 = UINT8_MAX;
	volatile int32_t x732 = 0;
	int32_t t182 = 19875;

    t182 = ((x729>(x730|x731))>x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = -1;
	volatile int8_t x734 = -1;
	static int64_t x736 = INT64_MAX;

    t183 = ((x733>(x734|x735))>x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x737 = -1;
	int8_t x738 = -1;
	int8_t x739 = 24;
	volatile int8_t x740 = 1;
	volatile int32_t t184 = -7912;

    t184 = ((x737>(x738|x739))>x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint8_t x742 = 0U;
	static int64_t x743 = -1LL;
	int8_t x744 = -1;

    t185 = ((x741>(x742|x743))>x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x745 = 12;
	int16_t x746 = INT16_MAX;
	volatile uint64_t x747 = 1129193780837754582LLU;
	volatile uint32_t x748 = 1115036U;
	volatile int32_t t186 = 137289;

    t186 = ((x745>(x746|x747))>x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x749 = 1;
	volatile int16_t x750 = INT16_MIN;
	uint64_t x751 = UINT64_MAX;
	int32_t x752 = -355896;
	int32_t t187 = 54733118;

    t187 = ((x749>(x750|x751))>x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x754 = -3964281LL;
	static volatile int64_t x756 = -32749LL;
	volatile int32_t t188 = 483;

    t188 = ((x753>(x754|x755))>x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x757 = INT32_MAX;
	int32_t x758 = INT32_MIN;
	volatile int8_t x759 = -1;
	static uint16_t x760 = 11774U;
	static int32_t t189 = -54;

    t189 = ((x757>(x758|x759))>x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint64_t x761 = UINT64_MAX;
	int64_t x762 = -1LL;
	int64_t x763 = -2450446459067LL;
	volatile uint8_t x764 = UINT8_MAX;

    t190 = ((x761>(x762|x763))>x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x766 = -31659;
	uint16_t x768 = 3429U;
	volatile int32_t t191 = 495;

    t191 = ((x765>(x766|x767))>x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x770 = 3U;
	uint32_t x771 = 69U;
	int32_t x772 = INT32_MIN;
	volatile int32_t t192 = 37;

    t192 = ((x769>(x770|x771))>x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x773 = INT32_MAX;
	static int8_t x775 = INT8_MAX;
	volatile uint8_t x776 = 12U;
	volatile int32_t t193 = 618135064;

    t193 = ((x773>(x774|x775))>x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x777 = 47U;
	static int16_t x778 = -1;
	uint64_t x779 = 25775870955LLU;
	int16_t x780 = 2;
	int32_t t194 = 67243011;

    t194 = ((x777>(x778|x779))>x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x781 = INT32_MIN;
	int64_t x783 = INT64_MAX;
	int64_t x784 = -645441969824951538LL;
	volatile int32_t t195 = -14188066;

    t195 = ((x781>(x782|x783))>x784);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = 98;
	int32_t x786 = INT32_MIN;
	volatile int64_t x787 = INT64_MAX;
	int64_t x788 = 3LL;

    t196 = ((x785>(x786|x787))>x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x789 = 351701;
	static int64_t x791 = INT64_MAX;
	volatile int16_t x792 = INT16_MIN;

    t197 = ((x789>(x790|x791))>x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x793 = 62;
	uint32_t x794 = 51U;
	int32_t x795 = INT32_MIN;
	int16_t x796 = 21;
	int32_t t198 = -9;

    t198 = ((x793>(x794|x795))>x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x797 = INT32_MIN;
	int32_t x798 = INT32_MIN;
	int32_t x799 = 40878285;
	uint8_t x800 = 2U;

    t199 = ((x797>(x798|x799))>x800);

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

