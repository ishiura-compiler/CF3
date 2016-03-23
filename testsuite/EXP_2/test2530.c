
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

int16_t x5 = INT16_MIN;
uint8_t x7 = UINT8_MAX;
uint32_t x9 = 1U;
volatile int64_t x10 = INT64_MAX;
static volatile int32_t x18 = INT32_MIN;
static int16_t x19 = INT16_MAX;
int32_t t4 = 21792;
int16_t x27 = INT16_MAX;
volatile int32_t t7 = -213;
int32_t x37 = INT32_MIN;
int16_t x43 = 1;
int16_t x46 = -1;
static volatile int64_t x52 = -1LL;
static int64_t x54 = -1LL;
int32_t x63 = 8621953;
volatile int64_t x67 = INT64_MIN;
uint64_t x68 = 423342352010LLU;
static int32_t x70 = 2753380;
int64_t x73 = INT64_MAX;
volatile int16_t x75 = -1;
int8_t x79 = INT8_MIN;
int32_t t19 = -23685;
int16_t x94 = 0;
int32_t x97 = INT32_MAX;
int64_t x98 = INT64_MAX;
volatile uint32_t x100 = UINT32_MAX;
static int16_t x102 = 7;
uint32_t x104 = 31701056U;
static int32_t t26 = -664941901;
int16_t x114 = 3024;
uint8_t x120 = 2U;
static volatile int32_t t29 = -216;
int8_t x132 = -1;
static volatile int16_t x133 = 3;
uint32_t x144 = 126344U;
volatile int64_t x145 = -1LL;
volatile uint64_t x147 = 577LLU;
int16_t x148 = 2377;
volatile int16_t x151 = -10;
int16_t x154 = 1986;
int32_t t38 = -1063;
static volatile int8_t x158 = -1;
uint8_t x163 = UINT8_MAX;
uint32_t x165 = UINT32_MAX;
static int32_t x171 = 758244;
uint32_t x173 = 0U;
static int16_t x182 = 1;
uint16_t x189 = 1U;
int32_t x197 = INT32_MIN;
uint16_t x200 = UINT16_MAX;
volatile int16_t x220 = INT16_MIN;
uint32_t x221 = 532544U;
volatile int32_t t55 = -5;
int64_t x229 = INT64_MIN;
int32_t x230 = 571660;
uint64_t x237 = UINT64_MAX;
int64_t x243 = INT64_MAX;
uint8_t x247 = UINT8_MAX;
int8_t x248 = -1;
int64_t x250 = -1LL;
int32_t t62 = -3416;
volatile int32_t t66 = 3266;
uint64_t x277 = 354LLU;
uint16_t x281 = UINT16_MAX;
uint64_t x285 = 182534LLU;
uint16_t x287 = 784U;
int32_t t72 = 13261;
int32_t x304 = INT32_MIN;
int64_t x313 = INT64_MIN;
volatile int16_t x317 = INT16_MAX;
static int64_t x331 = INT64_MIN;
int32_t t82 = -74835;
static int16_t x335 = 0;
int16_t x336 = INT16_MAX;
volatile uint8_t x344 = 122U;
uint64_t x345 = UINT64_MAX;
static int8_t x351 = -1;
volatile int16_t x353 = INT16_MAX;
volatile int32_t x358 = INT32_MAX;
uint16_t x359 = 55U;
uint32_t x361 = 253613506U;
int8_t x370 = INT8_MAX;
volatile uint16_t x373 = 20067U;
uint32_t x374 = UINT32_MAX;
uint16_t x380 = 11U;
int32_t x383 = -731;
volatile int32_t t96 = 22;
int32_t t97 = 5426;
int32_t x393 = -1;
uint32_t x397 = 14772594U;
int16_t x399 = INT16_MIN;
int32_t t99 = 3777844;
int32_t x404 = INT32_MIN;
static int32_t t102 = 60;
volatile int32_t t103 = 37;
uint32_t x427 = UINT32_MAX;
static int16_t x436 = INT16_MIN;
uint64_t x439 = 38578109LLU;
volatile int32_t t109 = 108;
int16_t x447 = -1;
uint8_t x452 = 3U;
int16_t x454 = -7;
volatile int32_t t114 = -587923;
int16_t x464 = INT16_MIN;
volatile uint64_t x465 = 3929729LLU;
static int32_t t116 = -251097;
int32_t x469 = INT32_MIN;
volatile int32_t x470 = INT32_MIN;
int32_t x472 = -1;
static int64_t x478 = -1LL;
uint32_t x487 = 27622U;
int64_t x491 = -1LL;
static volatile int32_t t122 = 1;
int8_t x493 = INT8_MAX;
int32_t t123 = 629;
volatile int32_t x498 = -677;
uint8_t x500 = 1U;
uint16_t x507 = 1U;
volatile int32_t t129 = -593;
int16_t x525 = INT16_MIN;
int8_t x531 = INT8_MIN;
static int32_t t132 = -2096;
int8_t x537 = INT8_MIN;
volatile int8_t x539 = 56;
int64_t x541 = -1LL;
int32_t t136 = -366265;
volatile int32_t x554 = INT32_MIN;
int8_t x557 = INT8_MIN;
static volatile int16_t x558 = INT16_MAX;
static int32_t x560 = INT32_MAX;
int32_t t139 = 0;
uint64_t x563 = 4184842180566911735LLU;
static volatile int32_t t140 = 96;
volatile int32_t t142 = 273232983;
volatile int16_t x574 = INT16_MIN;
uint16_t x580 = UINT16_MAX;
int32_t x583 = INT32_MIN;
volatile int16_t x589 = INT16_MIN;
int32_t x595 = -114291887;
int32_t t150 = 122;
static int8_t x608 = INT8_MIN;
int32_t t151 = 289451;
int32_t x609 = -314;
static uint16_t x615 = 1962U;
uint8_t x617 = UINT8_MAX;
static volatile int64_t x624 = INT64_MIN;
static int64_t x626 = 51694LL;
static volatile int32_t x632 = -1;
uint8_t x634 = 43U;
int8_t x642 = -1;
static int8_t x660 = INT8_MIN;
int32_t t164 = -1;
int16_t x661 = INT16_MAX;
uint8_t x663 = 1U;
volatile int32_t t165 = 0;
volatile int32_t t167 = 2;
int8_t x673 = -1;
volatile uint64_t x677 = 22984153436LLU;
int8_t x678 = 0;
int32_t t170 = -65046;
int64_t x685 = -2364LL;
volatile int32_t t171 = 350;
int32_t x696 = -1;
int32_t x698 = 26;
uint16_t x703 = 4382U;
static int32_t x705 = INT32_MAX;
int16_t x708 = INT16_MIN;
int32_t t177 = -8110;
int64_t x713 = INT64_MIN;
volatile int32_t x722 = 96493870;
static volatile uint8_t x726 = 17U;
volatile int32_t t182 = -13432;
int64_t x733 = -767878769724177LL;
int32_t t184 = 18;
static int64_t x742 = INT64_MIN;
uint64_t x745 = 3471664218702LLU;
uint8_t x751 = UINT8_MAX;
uint8_t x755 = 0U;
uint16_t x760 = 1233U;
int32_t x761 = INT32_MIN;
static int16_t x768 = INT16_MIN;
volatile uint16_t x771 = 21546U;
int32_t t192 = -31;
volatile uint32_t x777 = UINT32_MAX;
static uint16_t x778 = 29U;
int8_t x780 = INT8_MIN;
static int32_t t194 = -27510343;
static int8_t x781 = 6;
uint64_t x783 = 205758063043LLU;
uint32_t x787 = UINT32_MAX;
int32_t x790 = INT32_MAX;
volatile int32_t t198 = 7403211;
uint64_t x797 = 214396109572462LLU;


void f0(void) {
    	volatile int32_t x1 = INT32_MIN;
	uint32_t x2 = 173U;
	int64_t x3 = INT64_MIN;
	uint32_t x4 = UINT32_MAX;
	volatile int32_t t0 = 372;

    t0 = ((x1|(x2|x3))<=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x6 = -1;
	int32_t x8 = 196;
	int32_t t1 = 71;

    t1 = ((x5|(x6|x7))<=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x11 = INT16_MAX;
	volatile int16_t x12 = INT16_MIN;
	static int32_t t2 = 5531239;

    t2 = ((x9|(x10|x11))<=x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = -1;
	uint64_t x14 = UINT64_MAX;
	int16_t x15 = -1;
	static int8_t x16 = -1;
	volatile int32_t t3 = 360;

    t3 = ((x13|(x14|x15))<=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static int64_t x17 = INT64_MIN;
	static volatile int8_t x20 = -19;

    t4 = ((x17|(x18|x19))<=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x21 = 15908LL;
	static uint8_t x22 = 0U;
	int32_t x23 = -1;
	int16_t x24 = INT16_MAX;
	volatile int32_t t5 = -1011;

    t5 = ((x21|(x22|x23))<=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = -589LL;
	static volatile uint16_t x26 = 1727U;
	uint64_t x28 = 116532644686407008LLU;
	static volatile int32_t t6 = 5816;

    t6 = ((x25|(x26|x27))<=x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = 0;
	uint8_t x30 = UINT8_MAX;
	int8_t x31 = INT8_MAX;
	int16_t x32 = 3;

    t7 = ((x29|(x30|x31))<=x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x33 = 45LLU;
	volatile int8_t x34 = 0;
	uint32_t x35 = 1632848127U;
	volatile int32_t x36 = INT32_MIN;
	int32_t t8 = 8;

    t8 = ((x33|(x34|x35))<=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile uint8_t x38 = 16U;
	int64_t x39 = INT64_MIN;
	int64_t x40 = 119437313681900LL;
	int32_t t9 = -116;

    t9 = ((x37|(x38|x39))<=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = 6;
	int32_t x42 = -1;
	volatile int64_t x44 = -1LL;
	int32_t t10 = 0;

    t10 = ((x41|(x42|x43))<=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x45 = 1U;
	volatile uint8_t x47 = 27U;
	uint64_t x48 = UINT64_MAX;
	volatile int32_t t11 = 240;

    t11 = ((x45|(x46|x47))<=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = -7849900LL;
	int32_t x50 = INT32_MIN;
	int16_t x51 = -1;
	int32_t t12 = 12239;

    t12 = ((x49|(x50|x51))<=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = -29;
	volatile int64_t x55 = -1LL;
	int16_t x56 = INT16_MIN;
	volatile int32_t t13 = 24;

    t13 = ((x53|(x54|x55))<=x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = 28027216066LL;
	int16_t x58 = INT16_MIN;
	volatile int64_t x59 = INT64_MIN;
	static uint16_t x60 = UINT16_MAX;
	int32_t t14 = -247800;

    t14 = ((x57|(x58|x59))<=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = -1LL;
	int32_t x62 = -29;
	static int64_t x64 = 1LL;
	volatile int32_t t15 = -36;

    t15 = ((x61|(x62|x63))<=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = INT8_MIN;
	int16_t x66 = INT16_MIN;
	volatile int32_t t16 = -54385;

    t16 = ((x65|(x66|x67))<=x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = -1;
	static int32_t x71 = INT32_MAX;
	uint32_t x72 = 1848959U;
	volatile int32_t t17 = -1;

    t17 = ((x69|(x70|x71))<=x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x74 = 50U;
	int32_t x76 = -173087159;
	volatile int32_t t18 = -52839;

    t18 = ((x73|(x74|x75))<=x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x77 = UINT16_MAX;
	static uint64_t x78 = 349296LLU;
	static volatile int8_t x80 = INT8_MIN;

    t19 = ((x77|(x78|x79))<=x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile uint16_t x81 = 3U;
	int8_t x82 = INT8_MAX;
	uint8_t x83 = 93U;
	static int64_t x84 = -1LL;
	volatile int32_t t20 = -111089;

    t20 = ((x81|(x82|x83))<=x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x85 = UINT8_MAX;
	int64_t x86 = INT64_MIN;
	int64_t x87 = INT64_MIN;
	volatile uint16_t x88 = 15256U;
	volatile int32_t t21 = -256732071;

    t21 = ((x85|(x86|x87))<=x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int8_t x89 = -1;
	int16_t x90 = INT16_MAX;
	static int32_t x91 = -1;
	volatile uint32_t x92 = 104981616U;
	static volatile int32_t t22 = -131669422;

    t22 = ((x89|(x90|x91))<=x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x93 = INT32_MIN;
	int16_t x95 = INT16_MAX;
	uint16_t x96 = 2U;
	static int32_t t23 = -1073568426;

    t23 = ((x93|(x94|x95))<=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x99 = INT64_MIN;
	int32_t t24 = -3270;

    t24 = ((x97|(x98|x99))<=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x101 = 286446097LLU;
	static volatile uint16_t x103 = UINT16_MAX;
	static int32_t t25 = -2478915;

    t25 = ((x101|(x102|x103))<=x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint32_t x105 = 151063U;
	volatile int64_t x106 = -1LL;
	int64_t x107 = 19505LL;
	static int64_t x108 = 1632407108620LL;

    t26 = ((x105|(x106|x107))<=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x109 = UINT32_MAX;
	int64_t x110 = 20253077513272635LL;
	uint64_t x111 = 6689221LLU;
	uint16_t x112 = 26942U;
	int32_t t27 = -1;

    t27 = ((x109|(x110|x111))<=x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = -1;
	volatile int32_t x115 = -1;
	volatile int32_t x116 = INT32_MAX;
	volatile int32_t t28 = -104;

    t28 = ((x113|(x114|x115))<=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = INT16_MAX;
	int16_t x118 = -7180;
	static int32_t x119 = INT32_MAX;

    t29 = ((x117|(x118|x119))<=x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x121 = -1LL;
	static int64_t x122 = -1LL;
	uint32_t x123 = UINT32_MAX;
	static int8_t x124 = INT8_MIN;
	int32_t t30 = 221414153;

    t30 = ((x121|(x122|x123))<=x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x125 = INT32_MIN;
	static volatile int32_t x126 = INT32_MIN;
	volatile int8_t x127 = 12;
	int32_t x128 = INT32_MIN;
	volatile int32_t t31 = -102;

    t31 = ((x125|(x126|x127))<=x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x129 = 85687517531LLU;
	int8_t x130 = INT8_MIN;
	uint16_t x131 = UINT16_MAX;
	int32_t t32 = 0;

    t32 = ((x129|(x130|x131))<=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x134 = 606524275U;
	uint32_t x135 = UINT32_MAX;
	int32_t x136 = INT32_MIN;
	int32_t t33 = 7329514;

    t33 = ((x133|(x134|x135))<=x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x137 = INT64_MIN;
	int32_t x138 = 10034115;
	int8_t x139 = -42;
	static int8_t x140 = -45;
	volatile int32_t t34 = 88752;

    t34 = ((x137|(x138|x139))<=x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x141 = 53196223U;
	int8_t x142 = -16;
	int16_t x143 = INT16_MIN;
	int32_t t35 = 0;

    t35 = ((x141|(x142|x143))<=x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x146 = 63U;
	volatile int32_t t36 = 377390593;

    t36 = ((x145|(x146|x147))<=x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x149 = 7490U;
	int32_t x150 = -12258;
	uint8_t x152 = 118U;
	volatile int32_t t37 = 154;

    t37 = ((x149|(x150|x151))<=x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x153 = INT32_MIN;
	volatile uint16_t x155 = UINT16_MAX;
	static int32_t x156 = INT32_MIN;

    t38 = ((x153|(x154|x155))<=x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = -1;
	volatile uint32_t x159 = 11U;
	int16_t x160 = 327;
	int32_t t39 = 227858825;

    t39 = ((x157|(x158|x159))<=x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = INT16_MAX;
	int16_t x162 = INT16_MAX;
	int64_t x164 = 2LL;
	static int32_t t40 = 3742343;

    t40 = ((x161|(x162|x163))<=x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x166 = INT64_MAX;
	int64_t x167 = -13765459LL;
	int32_t x168 = -1;
	volatile int32_t t41 = -144;

    t41 = ((x165|(x166|x167))<=x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = INT32_MAX;
	int16_t x170 = INT16_MAX;
	static uint16_t x172 = UINT16_MAX;
	volatile int32_t t42 = 130213;

    t42 = ((x169|(x170|x171))<=x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x174 = INT16_MAX;
	int16_t x175 = INT16_MAX;
	volatile int16_t x176 = INT16_MIN;
	int32_t t43 = -3;

    t43 = ((x173|(x174|x175))<=x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x177 = 14;
	volatile uint8_t x178 = 9U;
	int16_t x179 = 55;
	volatile uint16_t x180 = 2U;
	int32_t t44 = 20537;

    t44 = ((x177|(x178|x179))<=x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x181 = -1;
	volatile int16_t x183 = INT16_MIN;
	uint32_t x184 = 0U;
	volatile int32_t t45 = 130249812;

    t45 = ((x181|(x182|x183))<=x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x185 = 857;
	volatile int8_t x186 = INT8_MAX;
	uint16_t x187 = 396U;
	static int64_t x188 = -904089650LL;
	int32_t t46 = 5391858;

    t46 = ((x185|(x186|x187))<=x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x190 = INT64_MAX;
	int32_t x191 = 10748111;
	int8_t x192 = INT8_MAX;
	volatile int32_t t47 = -4;

    t47 = ((x189|(x190|x191))<=x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x193 = -1LL;
	uint32_t x194 = 28792893U;
	int32_t x195 = INT32_MIN;
	int32_t x196 = -18895629;
	static volatile int32_t t48 = -295;

    t48 = ((x193|(x194|x195))<=x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x198 = INT16_MIN;
	uint16_t x199 = 8U;
	int32_t t49 = -617550;

    t49 = ((x197|(x198|x199))<=x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = INT16_MIN;
	static volatile int16_t x202 = -1;
	int8_t x203 = INT8_MIN;
	int32_t x204 = INT32_MIN;
	int32_t t50 = 58364192;

    t50 = ((x201|(x202|x203))<=x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = -1LL;
	uint16_t x206 = UINT16_MAX;
	uint16_t x207 = 40U;
	int16_t x208 = INT16_MIN;
	static volatile int32_t t51 = -369736609;

    t51 = ((x205|(x206|x207))<=x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = -1;
	uint64_t x210 = 291072407829LLU;
	int8_t x211 = 4;
	int16_t x212 = 718;
	int32_t t52 = -9;

    t52 = ((x209|(x210|x211))<=x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = -9;
	static volatile int32_t x214 = INT32_MIN;
	int16_t x215 = -1;
	int64_t x216 = 779621580028LL;
	static volatile int32_t t53 = -19;

    t53 = ((x213|(x214|x215))<=x216);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x217 = UINT64_MAX;
	int64_t x218 = 607192174079LL;
	volatile int64_t x219 = -13904215348642LL;
	volatile int32_t t54 = -2;

    t54 = ((x217|(x218|x219))<=x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x222 = 44U;
	volatile int32_t x223 = -1;
	int16_t x224 = -1;

    t55 = ((x221|(x222|x223))<=x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = -1LL;
	int8_t x226 = 4;
	int32_t x227 = INT32_MIN;
	int16_t x228 = INT16_MAX;
	int32_t t56 = -2;

    t56 = ((x225|(x226|x227))<=x228);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x231 = -1;
	uint64_t x232 = 23LLU;
	volatile int32_t t57 = 3939251;

    t57 = ((x229|(x230|x231))<=x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x233 = UINT16_MAX;
	volatile int64_t x234 = -3LL;
	int32_t x235 = 1880;
	static int32_t x236 = -1;
	static volatile int32_t t58 = 1;

    t58 = ((x233|(x234|x235))<=x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x238 = INT8_MAX;
	int64_t x239 = INT64_MIN;
	static int8_t x240 = INT8_MIN;
	volatile int32_t t59 = 39591883;

    t59 = ((x237|(x238|x239))<=x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x241 = 6925U;
	int8_t x242 = -1;
	uint16_t x244 = 202U;
	volatile int32_t t60 = -20197;

    t60 = ((x241|(x242|x243))<=x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x245 = INT32_MIN;
	int16_t x246 = 7770;
	int32_t t61 = -3381;

    t61 = ((x245|(x246|x247))<=x248);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x249 = -3081297;
	int64_t x251 = -28200299253794LL;
	uint32_t x252 = 1349U;

    t62 = ((x249|(x250|x251))<=x252);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = -1;
	int16_t x254 = INT16_MAX;
	int8_t x255 = -1;
	volatile int32_t x256 = -1;
	volatile int32_t t63 = -109;

    t63 = ((x253|(x254|x255))<=x256);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x257 = INT16_MIN;
	int16_t x258 = -8032;
	volatile uint64_t x259 = 43260283851386LLU;
	uint16_t x260 = UINT16_MAX;
	int32_t t64 = 397561;

    t64 = ((x257|(x258|x259))<=x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x261 = UINT8_MAX;
	int8_t x262 = -1;
	static int16_t x263 = -1;
	int64_t x264 = -1LL;
	int32_t t65 = 1;

    t65 = ((x261|(x262|x263))<=x264);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = -5;
	int8_t x266 = 12;
	int64_t x267 = INT64_MAX;
	int64_t x268 = INT64_MAX;

    t66 = ((x265|(x266|x267))<=x268);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x269 = 3;
	volatile uint16_t x270 = UINT16_MAX;
	int16_t x271 = -7623;
	uint8_t x272 = UINT8_MAX;
	volatile int32_t t67 = -55037;

    t67 = ((x269|(x270|x271))<=x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x273 = -1;
	static int16_t x274 = -1;
	int16_t x275 = INT16_MAX;
	uint16_t x276 = 12U;
	volatile int32_t t68 = 6303;

    t68 = ((x273|(x274|x275))<=x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x278 = -1;
	int8_t x279 = 1;
	int64_t x280 = -1LL;
	volatile int32_t t69 = 5441673;

    t69 = ((x277|(x278|x279))<=x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x282 = UINT8_MAX;
	int64_t x283 = INT64_MIN;
	volatile uint32_t x284 = 375U;
	static int32_t t70 = -250223;

    t70 = ((x281|(x282|x283))<=x284);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x286 = -1;
	int32_t x288 = INT32_MIN;
	int32_t t71 = 863176;

    t71 = ((x285|(x286|x287))<=x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = INT64_MIN;
	uint8_t x290 = 9U;
	int16_t x291 = 0;
	int64_t x292 = -1LL;

    t72 = ((x289|(x290|x291))<=x292);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x293 = INT8_MIN;
	static uint32_t x294 = 1912893885U;
	int64_t x295 = INT64_MAX;
	volatile int64_t x296 = INT64_MIN;
	volatile int32_t t73 = 1;

    t73 = ((x293|(x294|x295))<=x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x297 = -10;
	int8_t x298 = INT8_MAX;
	int32_t x299 = -225;
	volatile uint8_t x300 = 12U;
	volatile int32_t t74 = -167338;

    t74 = ((x297|(x298|x299))<=x300);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x301 = -24;
	int64_t x302 = -242036799570170LL;
	uint8_t x303 = UINT8_MAX;
	int32_t t75 = -56099512;

    t75 = ((x301|(x302|x303))<=x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x305 = 0U;
	int8_t x306 = INT8_MAX;
	uint32_t x307 = UINT32_MAX;
	uint16_t x308 = UINT16_MAX;
	int32_t t76 = -25;

    t76 = ((x305|(x306|x307))<=x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = INT8_MIN;
	int64_t x310 = -106256976043LL;
	volatile uint32_t x311 = 396016U;
	int8_t x312 = INT8_MIN;
	static volatile int32_t t77 = -16358;

    t77 = ((x309|(x310|x311))<=x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x314 = INT16_MIN;
	int64_t x315 = INT64_MAX;
	int8_t x316 = -18;
	static volatile int32_t t78 = -25159849;

    t78 = ((x313|(x314|x315))<=x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x318 = 0;
	static int8_t x319 = INT8_MIN;
	static int64_t x320 = INT64_MIN;
	volatile int32_t t79 = -1;

    t79 = ((x317|(x318|x319))<=x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x321 = INT32_MIN;
	int8_t x322 = INT8_MAX;
	static int16_t x323 = -73;
	uint16_t x324 = UINT16_MAX;
	volatile int32_t t80 = 3636;

    t80 = ((x321|(x322|x323))<=x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x325 = -1;
	int16_t x326 = INT16_MIN;
	int64_t x327 = 14514803624LL;
	static int8_t x328 = -3;
	volatile int32_t t81 = 7146357;

    t81 = ((x325|(x326|x327))<=x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = INT64_MIN;
	static uint32_t x330 = 26U;
	volatile int16_t x332 = INT16_MIN;

    t82 = ((x329|(x330|x331))<=x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = INT32_MIN;
	volatile int64_t x334 = -24233053398212704LL;
	volatile int32_t t83 = -373;

    t83 = ((x333|(x334|x335))<=x336);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x337 = UINT16_MAX;
	int64_t x338 = INT64_MAX;
	int64_t x339 = INT64_MAX;
	volatile uint16_t x340 = UINT16_MAX;
	int32_t t84 = 6070;

    t84 = ((x337|(x338|x339))<=x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x341 = 1U;
	int16_t x342 = -6;
	int32_t x343 = -1;
	int32_t t85 = 456468;

    t85 = ((x341|(x342|x343))<=x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x346 = UINT8_MAX;
	static uint64_t x347 = 120032963613348LLU;
	int64_t x348 = -1LL;
	volatile int32_t t86 = -1825318;

    t86 = ((x345|(x346|x347))<=x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x349 = UINT64_MAX;
	int8_t x350 = INT8_MAX;
	uint8_t x352 = UINT8_MAX;
	int32_t t87 = 649387810;

    t87 = ((x349|(x350|x351))<=x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x354 = -3;
	int8_t x355 = -1;
	int32_t x356 = 1;
	static volatile int32_t t88 = 184644774;

    t88 = ((x353|(x354|x355))<=x356);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x357 = INT32_MAX;
	int64_t x360 = INT64_MIN;
	volatile int32_t t89 = 123031699;

    t89 = ((x357|(x358|x359))<=x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x362 = INT16_MIN;
	static int32_t x363 = INT32_MIN;
	uint16_t x364 = UINT16_MAX;
	int32_t t90 = -225923603;

    t90 = ((x361|(x362|x363))<=x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = 2;
	uint64_t x366 = 76037LLU;
	int32_t x367 = INT32_MAX;
	static volatile int8_t x368 = 40;
	volatile int32_t t91 = -393490576;

    t91 = ((x365|(x366|x367))<=x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int8_t x369 = INT8_MIN;
	int16_t x371 = 465;
	uint64_t x372 = UINT64_MAX;
	volatile int32_t t92 = 436;

    t92 = ((x369|(x370|x371))<=x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x375 = UINT32_MAX;
	int32_t x376 = INT32_MIN;
	int32_t t93 = 3858;

    t93 = ((x373|(x374|x375))<=x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x377 = UINT32_MAX;
	static int8_t x378 = INT8_MAX;
	static volatile uint32_t x379 = 846802U;
	static volatile int32_t t94 = -1018015;

    t94 = ((x377|(x378|x379))<=x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int8_t x381 = -4;
	int16_t x382 = -288;
	int64_t x384 = INT64_MIN;
	volatile int32_t t95 = 73588103;

    t95 = ((x381|(x382|x383))<=x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x385 = -1;
	volatile int64_t x386 = -1395931041230970LL;
	int8_t x387 = 55;
	int16_t x388 = INT16_MIN;

    t96 = ((x385|(x386|x387))<=x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x389 = 141U;
	uint64_t x390 = 10575968897LLU;
	volatile int32_t x391 = INT32_MIN;
	uint64_t x392 = 29220516814LLU;

    t97 = ((x389|(x390|x391))<=x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x394 = INT16_MIN;
	int64_t x395 = -1LL;
	uint32_t x396 = 3U;
	int32_t t98 = 441;

    t98 = ((x393|(x394|x395))<=x396);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x398 = -3;
	static int16_t x400 = INT16_MIN;

    t99 = ((x397|(x398|x399))<=x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = INT8_MAX;
	uint16_t x402 = 14U;
	volatile uint64_t x403 = UINT64_MAX;
	static int32_t t100 = 0;

    t100 = ((x401|(x402|x403))<=x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x405 = 710183;
	uint16_t x406 = 119U;
	int8_t x407 = INT8_MIN;
	int8_t x408 = INT8_MIN;
	static volatile int32_t t101 = -625;

    t101 = ((x405|(x406|x407))<=x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x409 = INT32_MIN;
	int8_t x410 = INT8_MIN;
	volatile uint16_t x411 = UINT16_MAX;
	static int64_t x412 = INT64_MIN;

    t102 = ((x409|(x410|x411))<=x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int16_t x413 = 1916;
	int32_t x414 = INT32_MIN;
	volatile int64_t x415 = INT64_MAX;
	int8_t x416 = INT8_MIN;

    t103 = ((x413|(x414|x415))<=x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint32_t x417 = 15U;
	int64_t x418 = -1LL;
	uint8_t x419 = 48U;
	int16_t x420 = -12;
	int32_t t104 = 9490;

    t104 = ((x417|(x418|x419))<=x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint64_t x421 = UINT64_MAX;
	int64_t x422 = 89922053618021LL;
	int32_t x423 = 34950984;
	int32_t x424 = INT32_MIN;
	int32_t t105 = 1634;

    t105 = ((x421|(x422|x423))<=x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x425 = 11;
	uint64_t x426 = 159LLU;
	uint64_t x428 = UINT64_MAX;
	static int32_t t106 = 258535;

    t106 = ((x425|(x426|x427))<=x428);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x429 = -6;
	static int16_t x430 = INT16_MIN;
	static volatile int8_t x431 = INT8_MIN;
	volatile int8_t x432 = INT8_MIN;
	int32_t t107 = 5753;

    t107 = ((x429|(x430|x431))<=x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x433 = INT16_MAX;
	int32_t x434 = INT32_MIN;
	volatile int64_t x435 = INT64_MIN;
	volatile int32_t t108 = 1550606;

    t108 = ((x433|(x434|x435))<=x436);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = 48800310223LL;
	uint64_t x438 = UINT64_MAX;
	uint16_t x440 = 243U;

    t109 = ((x437|(x438|x439))<=x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x441 = -5582905LL;
	int32_t x442 = 60;
	uint64_t x443 = UINT64_MAX;
	int8_t x444 = INT8_MAX;
	static volatile int32_t t110 = 854452595;

    t110 = ((x441|(x442|x443))<=x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x445 = INT32_MIN;
	uint8_t x446 = 3U;
	volatile uint64_t x448 = UINT64_MAX;
	int32_t t111 = -8196;

    t111 = ((x445|(x446|x447))<=x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static int64_t x449 = INT64_MAX;
	int64_t x450 = INT64_MAX;
	int32_t x451 = -27448929;
	int32_t t112 = -4116798;

    t112 = ((x449|(x450|x451))<=x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int32_t x453 = -1;
	int32_t x455 = INT32_MAX;
	int8_t x456 = INT8_MAX;
	volatile int32_t t113 = -11;

    t113 = ((x453|(x454|x455))<=x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x457 = 6U;
	static int32_t x458 = INT32_MIN;
	uint16_t x459 = 1U;
	int16_t x460 = INT16_MIN;

    t114 = ((x457|(x458|x459))<=x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x461 = INT32_MIN;
	static int64_t x462 = INT64_MIN;
	int16_t x463 = INT16_MIN;
	static int32_t t115 = -716;

    t115 = ((x461|(x462|x463))<=x464);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint16_t x466 = 4720U;
	volatile int64_t x467 = INT64_MIN;
	uint32_t x468 = UINT32_MAX;

    t116 = ((x465|(x466|x467))<=x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x471 = 586LL;
	volatile int32_t t117 = 0;

    t117 = ((x469|(x470|x471))<=x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = -1;
	volatile uint16_t x474 = 5U;
	static int64_t x475 = INT64_MAX;
	int32_t x476 = -1;
	volatile int32_t t118 = -4696;

    t118 = ((x473|(x474|x475))<=x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x477 = INT32_MIN;
	static int32_t x479 = -1;
	int64_t x480 = INT64_MAX;
	int32_t t119 = 93357;

    t119 = ((x477|(x478|x479))<=x480);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x481 = 0U;
	uint64_t x482 = UINT64_MAX;
	static uint8_t x483 = 0U;
	uint16_t x484 = UINT16_MAX;
	volatile int32_t t120 = 90790;

    t120 = ((x481|(x482|x483))<=x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x485 = -1;
	int8_t x486 = -1;
	int8_t x488 = -1;
	volatile int32_t t121 = -483756677;

    t121 = ((x485|(x486|x487))<=x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x489 = -1;
	static uint64_t x490 = 13974437563LLU;
	static int64_t x492 = 3LL;

    t122 = ((x489|(x490|x491))<=x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile uint8_t x494 = 0U;
	uint16_t x495 = 5348U;
	int32_t x496 = INT32_MIN;

    t123 = ((x493|(x494|x495))<=x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x497 = INT8_MIN;
	volatile int32_t x499 = INT32_MIN;
	volatile int32_t t124 = 30301868;

    t124 = ((x497|(x498|x499))<=x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint64_t x501 = UINT64_MAX;
	static int32_t x502 = INT32_MIN;
	int64_t x503 = 929002722298729898LL;
	volatile int16_t x504 = 2418;
	int32_t t125 = -3038549;

    t125 = ((x501|(x502|x503))<=x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x505 = 55U;
	volatile int64_t x506 = -1LL;
	static int64_t x508 = -4015041495LL;
	static volatile int32_t t126 = 5;

    t126 = ((x505|(x506|x507))<=x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = -89LL;
	uint64_t x510 = 3618263521LLU;
	int32_t x511 = INT32_MIN;
	int8_t x512 = INT8_MAX;
	int32_t t127 = -1;

    t127 = ((x509|(x510|x511))<=x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x513 = 2;
	uint16_t x514 = UINT16_MAX;
	static uint64_t x515 = UINT64_MAX;
	static int16_t x516 = INT16_MIN;
	volatile int32_t t128 = -921057;

    t128 = ((x513|(x514|x515))<=x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = INT64_MIN;
	int16_t x518 = INT16_MIN;
	static int64_t x519 = -1LL;
	int16_t x520 = INT16_MIN;

    t129 = ((x517|(x518|x519))<=x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint64_t x521 = UINT64_MAX;
	int16_t x522 = -1;
	volatile int32_t x523 = INT32_MAX;
	uint32_t x524 = 12718U;
	volatile int32_t t130 = 26;

    t130 = ((x521|(x522|x523))<=x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x526 = 1U;
	uint8_t x527 = UINT8_MAX;
	volatile uint8_t x528 = UINT8_MAX;
	static int32_t t131 = 2;

    t131 = ((x525|(x526|x527))<=x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x529 = 706U;
	volatile uint64_t x530 = UINT64_MAX;
	static volatile int8_t x532 = INT8_MIN;

    t132 = ((x529|(x530|x531))<=x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x533 = 3;
	int16_t x534 = 0;
	volatile int32_t x535 = INT32_MIN;
	volatile int8_t x536 = -1;
	volatile int32_t t133 = -22;

    t133 = ((x533|(x534|x535))<=x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x538 = 4053241264LLU;
	int8_t x540 = INT8_MIN;
	volatile int32_t t134 = 39793533;

    t134 = ((x537|(x538|x539))<=x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x542 = 461533310656312494LL;
	int64_t x543 = INT64_MIN;
	static uint16_t x544 = 11629U;
	static volatile int32_t t135 = -8284265;

    t135 = ((x541|(x542|x543))<=x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x545 = 0LL;
	int16_t x546 = INT16_MIN;
	volatile int32_t x547 = 1404977;
	int64_t x548 = -1LL;

    t136 = ((x545|(x546|x547))<=x548);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x549 = INT64_MIN;
	int16_t x550 = 7198;
	static int32_t x551 = -1;
	uint64_t x552 = UINT64_MAX;
	volatile int32_t t137 = -173;

    t137 = ((x549|(x550|x551))<=x552);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile uint64_t x553 = UINT64_MAX;
	volatile int32_t x555 = INT32_MIN;
	volatile uint16_t x556 = 1762U;
	int32_t t138 = 23;

    t138 = ((x553|(x554|x555))<=x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint64_t x559 = 2142401289LLU;

    t139 = ((x557|(x558|x559))<=x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int64_t x561 = INT64_MAX;
	int32_t x562 = 24950244;
	uint16_t x564 = 1U;

    t140 = ((x561|(x562|x563))<=x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile uint32_t x565 = 640070757U;
	static volatile int64_t x566 = INT64_MAX;
	static uint64_t x567 = UINT64_MAX;
	uint64_t x568 = UINT64_MAX;
	volatile int32_t t141 = 625578;

    t141 = ((x565|(x566|x567))<=x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x569 = 24899535806377LLU;
	uint8_t x570 = 44U;
	uint16_t x571 = 93U;
	static int64_t x572 = INT64_MIN;

    t142 = ((x569|(x570|x571))<=x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = -1;
	static volatile int16_t x575 = 1460;
	volatile int32_t x576 = INT32_MIN;
	static int32_t t143 = -1;

    t143 = ((x573|(x574|x575))<=x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x577 = 1247033975822596056LLU;
	int16_t x578 = -1;
	volatile int8_t x579 = -1;
	int32_t t144 = 42751;

    t144 = ((x577|(x578|x579))<=x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x581 = 32811270188092105LLU;
	int64_t x582 = -1LL;
	int32_t x584 = 44;
	int32_t t145 = 310;

    t145 = ((x581|(x582|x583))<=x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x585 = -1;
	static uint64_t x586 = 1006LLU;
	int32_t x587 = -1;
	static int32_t x588 = INT32_MIN;
	int32_t t146 = -663849355;

    t146 = ((x585|(x586|x587))<=x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile uint32_t x590 = UINT32_MAX;
	static int8_t x591 = INT8_MIN;
	static uint8_t x592 = UINT8_MAX;
	static int32_t t147 = -2308590;

    t147 = ((x589|(x590|x591))<=x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = INT64_MAX;
	static int64_t x594 = INT64_MIN;
	int8_t x596 = INT8_MIN;
	int32_t t148 = -2;

    t148 = ((x593|(x594|x595))<=x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x597 = 49U;
	static volatile int8_t x598 = INT8_MIN;
	static int16_t x599 = INT16_MAX;
	static int8_t x600 = -1;
	int32_t t149 = 148544031;

    t149 = ((x597|(x598|x599))<=x600);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x601 = 220085694;
	volatile int16_t x602 = 6;
	uint64_t x603 = UINT64_MAX;
	int16_t x604 = INT16_MIN;

    t150 = ((x601|(x602|x603))<=x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x605 = INT8_MAX;
	int32_t x606 = INT32_MIN;
	int16_t x607 = -1;

    t151 = ((x605|(x606|x607))<=x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x610 = 416U;
	int64_t x611 = INT64_MAX;
	uint64_t x612 = 18204634LLU;
	int32_t t152 = 6296;

    t152 = ((x609|(x610|x611))<=x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x613 = INT8_MIN;
	int16_t x614 = -1;
	static uint8_t x616 = 125U;
	static volatile int32_t t153 = -9146;

    t153 = ((x613|(x614|x615))<=x616);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int64_t x618 = INT64_MIN;
	static int16_t x619 = -178;
	int32_t x620 = -27483;
	static volatile int32_t t154 = 14174287;

    t154 = ((x617|(x618|x619))<=x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x621 = 478U;
	int32_t x622 = INT32_MIN;
	uint16_t x623 = 3U;
	volatile int32_t t155 = 2;

    t155 = ((x621|(x622|x623))<=x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x625 = INT8_MIN;
	uint16_t x627 = 14717U;
	uint8_t x628 = 6U;
	static int32_t t156 = 600516909;

    t156 = ((x625|(x626|x627))<=x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x629 = 2;
	static uint32_t x630 = 234025292U;
	int8_t x631 = 10;
	int32_t t157 = 1006063339;

    t157 = ((x629|(x630|x631))<=x632);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint32_t x633 = 1159182996U;
	uint8_t x635 = 4U;
	static volatile int32_t x636 = 831556197;
	volatile int32_t t158 = 4063;

    t158 = ((x633|(x634|x635))<=x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x637 = 2003002383817779316LL;
	uint64_t x638 = 793274740903236LLU;
	int32_t x639 = -1;
	int16_t x640 = -749;
	int32_t t159 = 11313;

    t159 = ((x637|(x638|x639))<=x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x641 = UINT8_MAX;
	volatile uint64_t x643 = 282502LLU;
	uint8_t x644 = UINT8_MAX;
	int32_t t160 = -7;

    t160 = ((x641|(x642|x643))<=x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x645 = INT16_MAX;
	volatile int8_t x646 = 56;
	uint8_t x647 = UINT8_MAX;
	volatile int64_t x648 = -1LL;
	static int32_t t161 = 101;

    t161 = ((x645|(x646|x647))<=x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x649 = 3U;
	volatile int32_t x650 = -1;
	int16_t x651 = INT16_MIN;
	volatile uint32_t x652 = 492U;
	volatile int32_t t162 = -3201;

    t162 = ((x649|(x650|x651))<=x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = -1;
	static uint8_t x654 = UINT8_MAX;
	static int16_t x655 = 3;
	int8_t x656 = INT8_MIN;
	static int32_t t163 = 870;

    t163 = ((x653|(x654|x655))<=x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x657 = 18U;
	uint64_t x658 = 1451575494400057LLU;
	int8_t x659 = -33;

    t164 = ((x657|(x658|x659))<=x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint64_t x662 = 10224600005667LLU;
	static int32_t x664 = INT32_MAX;

    t165 = ((x661|(x662|x663))<=x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint8_t x665 = UINT8_MAX;
	uint8_t x666 = 41U;
	int64_t x667 = INT64_MIN;
	static uint16_t x668 = 2669U;
	volatile int32_t t166 = 14;

    t166 = ((x665|(x666|x667))<=x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x669 = 4U;
	int16_t x670 = -1;
	int32_t x671 = -155913091;
	int16_t x672 = -1;

    t167 = ((x669|(x670|x671))<=x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x674 = INT16_MIN;
	int64_t x675 = INT64_MAX;
	int8_t x676 = INT8_MIN;
	int32_t t168 = 0;

    t168 = ((x673|(x674|x675))<=x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x679 = 3U;
	volatile int32_t x680 = INT32_MIN;
	volatile int32_t t169 = -3106227;

    t169 = ((x677|(x678|x679))<=x680);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x681 = UINT64_MAX;
	static int32_t x682 = INT32_MIN;
	volatile uint8_t x683 = UINT8_MAX;
	int8_t x684 = INT8_MAX;

    t170 = ((x681|(x682|x683))<=x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x686 = INT64_MAX;
	int8_t x687 = 19;
	static uint64_t x688 = UINT64_MAX;

    t171 = ((x685|(x686|x687))<=x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x689 = INT8_MIN;
	int32_t x690 = INT32_MIN;
	int16_t x691 = 63;
	int16_t x692 = 2937;
	int32_t t172 = -2712518;

    t172 = ((x689|(x690|x691))<=x692);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x693 = 0;
	uint8_t x694 = UINT8_MAX;
	volatile int8_t x695 = -1;
	static volatile int32_t t173 = 44086;

    t173 = ((x693|(x694|x695))<=x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x697 = INT32_MAX;
	int64_t x699 = INT64_MAX;
	int64_t x700 = 85827LL;
	volatile int32_t t174 = 0;

    t174 = ((x697|(x698|x699))<=x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int16_t x701 = INT16_MIN;
	uint64_t x702 = UINT64_MAX;
	int16_t x704 = INT16_MIN;
	static volatile int32_t t175 = 56321740;

    t175 = ((x701|(x702|x703))<=x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x706 = INT32_MIN;
	static int16_t x707 = INT16_MIN;
	static volatile int32_t t176 = -117118146;

    t176 = ((x705|(x706|x707))<=x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x709 = 1;
	static int8_t x710 = INT8_MAX;
	int64_t x711 = -181469LL;
	uint16_t x712 = 1450U;

    t177 = ((x709|(x710|x711))<=x712);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x714 = INT8_MIN;
	int32_t x715 = INT32_MAX;
	int8_t x716 = INT8_MAX;
	int32_t t178 = 1006168934;

    t178 = ((x713|(x714|x715))<=x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x717 = INT64_MIN;
	volatile uint8_t x718 = 55U;
	uint64_t x719 = 310324132147584LLU;
	int16_t x720 = INT16_MIN;
	int32_t t179 = -658227;

    t179 = ((x717|(x718|x719))<=x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x721 = -1;
	uint8_t x723 = UINT8_MAX;
	volatile uint64_t x724 = 904LLU;
	volatile int32_t t180 = -8812940;

    t180 = ((x721|(x722|x723))<=x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = -1LL;
	uint32_t x727 = 1U;
	int64_t x728 = INT64_MAX;
	int32_t t181 = 112542;

    t181 = ((x725|(x726|x727))<=x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x729 = INT64_MIN;
	static volatile int8_t x730 = INT8_MIN;
	static int16_t x731 = INT16_MIN;
	int8_t x732 = INT8_MAX;

    t182 = ((x729|(x730|x731))<=x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x734 = UINT16_MAX;
	volatile int32_t x735 = -3148;
	uint16_t x736 = 25U;
	volatile int32_t t183 = -145059435;

    t183 = ((x733|(x734|x735))<=x736);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x737 = INT64_MAX;
	int32_t x738 = 57341561;
	static uint64_t x739 = UINT64_MAX;
	int8_t x740 = INT8_MIN;

    t184 = ((x737|(x738|x739))<=x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = 0;
	volatile uint8_t x743 = 1U;
	int32_t x744 = INT32_MAX;
	int32_t t185 = 54;

    t185 = ((x741|(x742|x743))<=x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x746 = 19;
	volatile uint64_t x747 = 1072919LLU;
	int8_t x748 = INT8_MIN;
	static int32_t t186 = -143;

    t186 = ((x745|(x746|x747))<=x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x749 = INT16_MAX;
	int32_t x750 = -1;
	volatile int64_t x752 = 4281492LL;
	int32_t t187 = 12898;

    t187 = ((x749|(x750|x751))<=x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x753 = UINT16_MAX;
	int32_t x754 = -6559;
	uint16_t x756 = 122U;
	static int32_t t188 = 23606;

    t188 = ((x753|(x754|x755))<=x756);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x757 = INT16_MIN;
	uint8_t x758 = 9U;
	static int64_t x759 = INT64_MIN;
	int32_t t189 = -609442748;

    t189 = ((x757|(x758|x759))<=x760);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x762 = INT64_MIN;
	int32_t x763 = -709;
	uint32_t x764 = 48588U;
	volatile int32_t t190 = 15;

    t190 = ((x761|(x762|x763))<=x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x765 = 6996;
	int64_t x766 = 5997004512416713LL;
	static int8_t x767 = INT8_MIN;
	volatile int32_t t191 = 2205116;

    t191 = ((x765|(x766|x767))<=x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x769 = UINT16_MAX;
	int64_t x770 = INT64_MIN;
	volatile int16_t x772 = -1;

    t192 = ((x769|(x770|x771))<=x772);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x773 = 8U;
	int8_t x774 = INT8_MIN;
	int16_t x775 = INT16_MIN;
	int8_t x776 = INT8_MIN;
	volatile int32_t t193 = -3;

    t193 = ((x773|(x774|x775))<=x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x779 = UINT32_MAX;

    t194 = ((x777|(x778|x779))<=x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x782 = 108476749LL;
	volatile int32_t x784 = 235;
	int32_t t195 = 14201;

    t195 = ((x781|(x782|x783))<=x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x785 = 1;
	volatile int8_t x786 = INT8_MIN;
	int64_t x788 = 3LL;
	int32_t t196 = 34947;

    t196 = ((x785|(x786|x787))<=x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x789 = INT16_MIN;
	uint64_t x791 = 426082003567LLU;
	int64_t x792 = -1LL;
	int32_t t197 = -2093109;

    t197 = ((x789|(x790|x791))<=x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x793 = UINT64_MAX;
	int32_t x794 = INT32_MIN;
	volatile uint64_t x795 = UINT64_MAX;
	uint16_t x796 = 19U;

    t198 = ((x793|(x794|x795))<=x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x798 = -4632;
	int8_t x799 = INT8_MIN;
	int32_t x800 = INT32_MAX;
	int32_t t199 = -453;

    t199 = ((x797|(x798|x799))<=x800);

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

