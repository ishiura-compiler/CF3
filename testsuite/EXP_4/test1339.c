
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

uint64_t x3 = 101LLU;
uint64_t x4 = 1340LLU;
uint16_t x7 = 35U;
int8_t x8 = INT8_MAX;
uint16_t x9 = UINT16_MAX;
int32_t x12 = INT32_MIN;
uint32_t x13 = UINT32_MAX;
int32_t t3 = -1;
int32_t t4 = -25;
uint16_t x23 = 847U;
int64_t x24 = -1LL;
volatile int32_t t5 = -52;
int64_t x25 = INT64_MIN;
int8_t x27 = INT8_MIN;
int32_t t7 = -228735;
int8_t x36 = 40;
volatile int32_t t9 = 20031;
static int8_t x41 = -1;
int8_t x43 = INT8_MIN;
uint64_t x44 = UINT64_MAX;
uint16_t x45 = UINT16_MAX;
volatile int16_t x48 = INT16_MIN;
uint8_t x51 = 0U;
int64_t x55 = -58LL;
int32_t t13 = 70026072;
int8_t x64 = -1;
volatile int16_t x71 = -1;
volatile int32_t t17 = -13;
int32_t x78 = 22252;
volatile int32_t t22 = 5382;
volatile int32_t x97 = INT32_MIN;
volatile int16_t x111 = -1;
volatile int16_t x120 = INT16_MAX;
volatile int8_t x124 = INT8_MAX;
int32_t t31 = 113551;
uint64_t x132 = UINT64_MAX;
int32_t x133 = -1;
static int32_t x137 = -1;
volatile uint32_t x139 = 39022914U;
uint8_t x142 = UINT8_MAX;
static uint64_t x145 = 105LLU;
int32_t x150 = -1;
uint8_t x154 = 5U;
volatile int32_t t38 = 151176;
uint64_t x159 = UINT64_MAX;
uint16_t x162 = 27446U;
int64_t x169 = -16354351LL;
static int32_t x177 = -101829;
uint64_t x179 = UINT64_MAX;
uint32_t x191 = 32U;
volatile uint8_t x197 = 27U;
int32_t t49 = -224;
uint16_t x207 = 1227U;
static int32_t x217 = 106;
int32_t x221 = 30631;
int8_t x222 = INT8_MIN;
static int8_t x223 = INT8_MIN;
int32_t t56 = -1234;
uint8_t x229 = UINT8_MAX;
int32_t x236 = INT32_MIN;
uint64_t x238 = 8374041324412LLU;
volatile int64_t x241 = INT64_MAX;
int32_t x243 = INT32_MIN;
int32_t x247 = -1;
uint8_t x249 = 5U;
static volatile int16_t x251 = -1;
int32_t x256 = 324;
static uint32_t x257 = 1183058U;
int32_t x264 = INT32_MIN;
int8_t x269 = 0;
int32_t x272 = INT32_MAX;
int32_t t67 = -77;
uint16_t x273 = UINT16_MAX;
int64_t x285 = 0LL;
volatile int32_t t71 = -1588436;
int64_t x295 = 204811LL;
volatile uint8_t x296 = 0U;
static int32_t t73 = 15105208;
int16_t x298 = 411;
static int64_t x301 = -4343406LL;
volatile int8_t x302 = 4;
volatile int32_t x307 = -3479924;
uint32_t x308 = 19341U;
int8_t x312 = INT8_MIN;
volatile int64_t x320 = -3044808LL;
int16_t x322 = 60;
static int32_t t80 = -1005;
uint8_t x331 = 2U;
static volatile int32_t x343 = INT32_MIN;
int32_t t85 = -12;
uint32_t x345 = 2U;
int16_t x347 = INT16_MAX;
uint16_t x350 = UINT16_MAX;
int32_t x352 = INT32_MIN;
int32_t x356 = INT32_MIN;
volatile int32_t t88 = -6447040;
static volatile int64_t x357 = INT64_MAX;
uint64_t x360 = 1032970962938700LLU;
int8_t x365 = INT8_MAX;
volatile int32_t x366 = INT32_MIN;
volatile int32_t x368 = INT32_MIN;
int8_t x371 = INT8_MIN;
static volatile int32_t t92 = 157509942;
static int64_t x374 = INT64_MAX;
int32_t t93 = 8675221;
static volatile int32_t t94 = -9;
volatile uint8_t x383 = 10U;
int32_t t95 = -1038887;
volatile int32_t t97 = 593614;
int8_t x397 = INT8_MIN;
int8_t x404 = 1;
static int64_t x405 = -214033242905LL;
uint8_t x407 = 2U;
uint64_t x408 = 1097339051504LLU;
uint8_t x412 = UINT8_MAX;
static int16_t x413 = INT16_MIN;
volatile int32_t x415 = -1;
static int16_t x416 = -371;
int64_t x418 = INT64_MIN;
volatile int32_t t106 = -5519351;
int16_t x429 = 0;
volatile int32_t x432 = INT32_MIN;
int16_t x438 = -1;
int32_t x443 = -42;
volatile int32_t t110 = 38950494;
static volatile int8_t x456 = 55;
int16_t x457 = 260;
int32_t t114 = -27;
uint8_t x465 = 96U;
static uint32_t x471 = 47U;
volatile uint64_t x473 = UINT64_MAX;
static uint32_t x480 = UINT32_MAX;
uint16_t x482 = 0U;
volatile int64_t x488 = 55491108540490243LL;
int32_t x491 = INT32_MIN;
uint8_t x492 = 44U;
int32_t t122 = -847782;
int64_t x493 = -1LL;
uint8_t x494 = UINT8_MAX;
volatile int32_t t123 = -413814341;
static volatile int8_t x500 = INT8_MAX;
static volatile int32_t t125 = 3071;
volatile int32_t t126 = -7;
int32_t t127 = 0;
int64_t x515 = 31268380LL;
volatile int32_t t128 = -1524045;
static volatile int32_t x517 = INT32_MIN;
volatile int16_t x532 = INT16_MIN;
int64_t x540 = 583LL;
int32_t x542 = INT32_MAX;
uint64_t x543 = 79185392331894587LLU;
int32_t x546 = INT32_MIN;
static uint16_t x549 = 7U;
static uint16_t x554 = 8038U;
static uint32_t x556 = 8428379U;
volatile int32_t t140 = 7114;
volatile int32_t t141 = -3;
int8_t x572 = 46;
static volatile int32_t t142 = -36;
volatile int8_t x575 = INT8_MIN;
volatile int32_t t143 = -681;
int16_t x579 = INT16_MAX;
static int16_t x581 = INT16_MIN;
uint16_t x582 = 624U;
volatile int32_t t146 = 149856;
static volatile uint32_t x589 = 1042U;
int16_t x591 = -1;
uint32_t x596 = UINT32_MAX;
uint64_t x599 = UINT64_MAX;
static int16_t x601 = INT16_MIN;
int16_t x610 = INT16_MIN;
static uint64_t x612 = 62749433150LLU;
int64_t x627 = 567635222LL;
uint8_t x631 = UINT8_MAX;
volatile int32_t t157 = 4354;
volatile int64_t x633 = INT64_MIN;
int64_t x640 = -4037087960310704686LL;
volatile int32_t t159 = 3;
int32_t t160 = -15861;
volatile int32_t t163 = -28;
int32_t t164 = -1384;
volatile uint64_t x665 = UINT64_MAX;
static volatile int32_t t167 = 370327;
volatile int64_t x676 = INT64_MIN;
uint32_t x681 = 31696205U;
int8_t x687 = INT8_MAX;
static int8_t x694 = -6;
int16_t x701 = INT16_MIN;
int32_t t175 = 2;
int16_t x706 = INT16_MAX;
uint8_t x712 = 5U;
static int32_t x715 = 176279853;
int16_t x716 = 745;
uint8_t x721 = UINT8_MAX;
volatile int32_t x723 = INT32_MIN;
uint32_t x730 = 1100682087U;
int16_t x734 = -527;
int16_t x744 = INT16_MIN;
int32_t x747 = INT32_MAX;
int64_t x751 = 339975LL;
volatile int32_t t187 = -43;
static volatile int8_t x756 = -1;
int32_t t189 = -2530374;
static int16_t x763 = -1;
int32_t t190 = -718;
static uint16_t x772 = 0U;
static int8_t x774 = INT8_MIN;
int32_t x775 = -1;
static volatile int32_t x784 = INT32_MIN;


void f0(void) {
    	int8_t x1 = -1;
	volatile int8_t x2 = -1;
	volatile int32_t t0 = 13964396;

    t0 = (x1>(x2&(x3!=x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = -1LL;
	static int8_t x6 = INT8_MIN;
	static volatile int32_t t1 = -5939146;

    t1 = (x5>(x6&(x7!=x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x10 = INT16_MIN;
	uint32_t x11 = UINT32_MAX;
	static int32_t t2 = -236;

    t2 = (x9>(x10&(x11!=x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x14 = INT16_MIN;
	int64_t x15 = INT64_MIN;
	static int64_t x16 = -661356282LL;

    t3 = (x13>(x14&(x15!=x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -1;
	uint32_t x18 = 3U;
	static volatile int8_t x19 = -1;
	uint8_t x20 = 0U;

    t4 = (x17>(x18&(x19!=x20)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = 125U;
	volatile uint32_t x22 = 25U;

    t5 = (x21>(x22&(x23!=x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x26 = UINT64_MAX;
	uint64_t x28 = 4961778550006LLU;
	int32_t t6 = 508912;

    t6 = (x25>(x26&(x27!=x28)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MIN;
	static int64_t x30 = INT64_MIN;
	int8_t x31 = 3;
	int32_t x32 = INT32_MIN;

    t7 = (x29>(x30&(x31!=x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint32_t x33 = UINT32_MAX;
	static volatile int16_t x34 = INT16_MIN;
	uint16_t x35 = UINT16_MAX;
	volatile int32_t t8 = -2704;

    t8 = (x33>(x34&(x35!=x36)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x37 = INT64_MIN;
	int32_t x38 = INT32_MAX;
	uint32_t x39 = 3066336U;
	volatile int16_t x40 = -1;

    t9 = (x37>(x38&(x39!=x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x42 = 41234U;
	int32_t t10 = -42602004;

    t10 = (x41>(x42&(x43!=x44)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x46 = 50U;
	uint16_t x47 = 23808U;
	volatile int32_t t11 = -3553;

    t11 = (x45>(x46&(x47!=x48)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x49 = 188U;
	volatile int32_t x50 = INT32_MAX;
	int64_t x52 = INT64_MAX;
	static volatile int32_t t12 = 0;

    t12 = (x49>(x50&(x51!=x52)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint32_t x53 = 305660U;
	int8_t x54 = -1;
	int64_t x56 = INT64_MIN;

    t13 = (x53>(x54&(x55!=x56)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = INT16_MIN;
	uint16_t x58 = 39U;
	static uint8_t x59 = 54U;
	static int16_t x60 = INT16_MAX;
	int32_t t14 = 4008;

    t14 = (x57>(x58&(x59!=x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = -1;
	int32_t x62 = INT32_MIN;
	int64_t x63 = -1LL;
	volatile int32_t t15 = 7;

    t15 = (x61>(x62&(x63!=x64)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x65 = -32917653;
	static int32_t x66 = INT32_MAX;
	volatile int32_t x67 = INT32_MIN;
	uint16_t x68 = UINT16_MAX;
	volatile int32_t t16 = -20;

    t16 = (x65>(x66&(x67!=x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = INT16_MIN;
	uint32_t x70 = 6140981U;
	volatile int64_t x72 = INT64_MAX;

    t17 = (x69>(x70&(x71!=x72)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = 14U;
	int64_t x74 = -39323LL;
	int16_t x75 = INT16_MIN;
	volatile int32_t x76 = INT32_MIN;
	static int32_t t18 = 63685267;

    t18 = (x73>(x74&(x75!=x76)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x77 = -60;
	static int32_t x79 = 185305;
	int64_t x80 = INT64_MAX;
	volatile int32_t t19 = 121;

    t19 = (x77>(x78&(x79!=x80)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x81 = 134281824210938667LLU;
	static volatile int16_t x82 = -2992;
	volatile uint16_t x83 = 18488U;
	int64_t x84 = -6826220699LL;
	int32_t t20 = 1013127;

    t20 = (x81>(x82&(x83!=x84)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = -1;
	static int64_t x86 = INT64_MAX;
	int32_t x87 = -1;
	int32_t x88 = INT32_MIN;
	int32_t t21 = -1;

    t21 = (x85>(x86&(x87!=x88)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x89 = 595LLU;
	int32_t x90 = -1;
	int8_t x91 = 0;
	uint16_t x92 = UINT16_MAX;

    t22 = (x89>(x90&(x91!=x92)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = INT8_MAX;
	volatile int16_t x94 = 8183;
	volatile int16_t x95 = INT16_MAX;
	int32_t x96 = INT32_MIN;
	int32_t t23 = 0;

    t23 = (x93>(x94&(x95!=x96)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x98 = 3U;
	int16_t x99 = INT16_MAX;
	int16_t x100 = 332;
	int32_t t24 = 59159;

    t24 = (x97>(x98&(x99!=x100)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint8_t x101 = 79U;
	volatile int32_t x102 = INT32_MAX;
	volatile int64_t x103 = INT64_MAX;
	uint8_t x104 = UINT8_MAX;
	int32_t t25 = -1;

    t25 = (x101>(x102&(x103!=x104)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile uint16_t x105 = 1662U;
	static int16_t x106 = INT16_MAX;
	int64_t x107 = INT64_MIN;
	int64_t x108 = INT64_MIN;
	volatile int32_t t26 = -98;

    t26 = (x105>(x106&(x107!=x108)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x109 = INT16_MAX;
	int8_t x110 = -1;
	int8_t x112 = INT8_MIN;
	volatile int32_t t27 = 19;

    t27 = (x109>(x110&(x111!=x112)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x113 = -1;
	volatile int32_t x114 = INT32_MIN;
	static uint32_t x115 = 1792U;
	volatile uint8_t x116 = 1U;
	volatile int32_t t28 = 0;

    t28 = (x113>(x114&(x115!=x116)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint8_t x117 = 1U;
	uint16_t x118 = 7U;
	int16_t x119 = INT16_MIN;
	int32_t t29 = -288132;

    t29 = (x117>(x118&(x119!=x120)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = -1LL;
	int32_t x122 = 2446938;
	uint64_t x123 = UINT64_MAX;
	volatile int32_t t30 = 3779;

    t30 = (x121>(x122&(x123!=x124)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x125 = 1470U;
	volatile uint16_t x126 = 1963U;
	volatile uint64_t x127 = 23638463743LLU;
	static volatile int32_t x128 = -1;

    t31 = (x125>(x126&(x127!=x128)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint8_t x129 = UINT8_MAX;
	int64_t x130 = 84LL;
	int64_t x131 = INT64_MIN;
	int32_t t32 = 387651;

    t32 = (x129>(x130&(x131!=x132)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x134 = 16217U;
	static int16_t x135 = INT16_MIN;
	uint16_t x136 = 1U;
	int32_t t33 = 2282;

    t33 = (x133>(x134&(x135!=x136)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x138 = -224;
	int64_t x140 = INT64_MIN;
	int32_t t34 = -17182;

    t34 = (x137>(x138&(x139!=x140)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x141 = 7941906U;
	int8_t x143 = 2;
	static volatile int32_t x144 = INT32_MIN;
	volatile int32_t t35 = -451164;

    t35 = (x141>(x142&(x143!=x144)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x146 = 2008;
	int16_t x147 = INT16_MIN;
	int32_t x148 = -55;
	volatile int32_t t36 = -2983762;

    t36 = (x145>(x146&(x147!=x148)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint16_t x149 = 407U;
	int16_t x151 = -805;
	int64_t x152 = 740781790LL;
	int32_t t37 = -783756288;

    t37 = (x149>(x150&(x151!=x152)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = INT32_MAX;
	static volatile uint8_t x155 = 17U;
	volatile uint64_t x156 = UINT64_MAX;

    t38 = (x153>(x154&(x155!=x156)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x157 = -2322LL;
	volatile int32_t x158 = -1;
	int32_t x160 = -9904490;
	volatile int32_t t39 = 204057;

    t39 = (x157>(x158&(x159!=x160)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x161 = 31163892LLU;
	static uint64_t x163 = UINT64_MAX;
	int32_t x164 = INT32_MIN;
	volatile int32_t t40 = 562162063;

    t40 = (x161>(x162&(x163!=x164)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x165 = INT64_MAX;
	int16_t x166 = 10;
	int16_t x167 = 2167;
	int32_t x168 = INT32_MIN;
	int32_t t41 = 0;

    t41 = (x165>(x166&(x167!=x168)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x170 = INT32_MIN;
	static volatile int8_t x171 = 25;
	int64_t x172 = INT64_MIN;
	static volatile int32_t t42 = 712521013;

    t42 = (x169>(x170&(x171!=x172)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = INT16_MAX;
	int8_t x174 = INT8_MIN;
	volatile uint8_t x175 = UINT8_MAX;
	int16_t x176 = 1;
	volatile int32_t t43 = -23491799;

    t43 = (x173>(x174&(x175!=x176)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint64_t x178 = UINT64_MAX;
	int8_t x180 = 4;
	volatile int32_t t44 = 28239;

    t44 = (x177>(x178&(x179!=x180)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = INT32_MIN;
	uint32_t x182 = 1963671U;
	int64_t x183 = INT64_MIN;
	int64_t x184 = INT64_MIN;
	int32_t t45 = 1;

    t45 = (x181>(x182&(x183!=x184)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x185 = -656268;
	volatile int32_t x186 = INT32_MIN;
	volatile int64_t x187 = -1LL;
	volatile int32_t x188 = INT32_MIN;
	int32_t t46 = -13476;

    t46 = (x185>(x186&(x187!=x188)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = INT16_MIN;
	int32_t x190 = -696;
	int64_t x192 = 131324079928LL;
	volatile int32_t t47 = -12669323;

    t47 = (x189>(x190&(x191!=x192)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = 0;
	int32_t x194 = INT32_MIN;
	static int64_t x195 = INT64_MIN;
	volatile int32_t x196 = 76599541;
	int32_t t48 = 95;

    t48 = (x193>(x194&(x195!=x196)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x198 = INT16_MAX;
	int32_t x199 = INT32_MIN;
	static int16_t x200 = -1;

    t49 = (x197>(x198&(x199!=x200)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x201 = -1;
	int64_t x202 = -1LL;
	int32_t x203 = INT32_MIN;
	int16_t x204 = 310;
	int32_t t50 = -25338886;

    t50 = (x201>(x202&(x203!=x204)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x205 = -1;
	uint64_t x206 = UINT64_MAX;
	volatile int8_t x208 = 11;
	static int32_t t51 = -137429158;

    t51 = (x205>(x206&(x207!=x208)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = -17669487703853176LL;
	uint8_t x210 = UINT8_MAX;
	int8_t x211 = 9;
	uint32_t x212 = 598792U;
	static int32_t t52 = -3181;

    t52 = (x209>(x210&(x211!=x212)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x213 = 0LLU;
	volatile int32_t x214 = 24;
	int16_t x215 = -1;
	int8_t x216 = -1;
	volatile int32_t t53 = -17;

    t53 = (x213>(x214&(x215!=x216)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x218 = 0;
	int8_t x219 = INT8_MIN;
	static uint16_t x220 = UINT16_MAX;
	volatile int32_t t54 = 4247215;

    t54 = (x217>(x218&(x219!=x220)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x224 = 72543;
	volatile int32_t t55 = -1928406;

    t55 = (x221>(x222&(x223!=x224)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x225 = INT32_MIN;
	int64_t x226 = INT64_MIN;
	int32_t x227 = 437998857;
	uint32_t x228 = UINT32_MAX;

    t56 = (x225>(x226&(x227!=x228)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x230 = 54935;
	uint64_t x231 = 59144810326985LLU;
	int32_t x232 = INT32_MIN;
	volatile int32_t t57 = 146949;

    t57 = (x229>(x230&(x231!=x232)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint8_t x233 = 2U;
	int32_t x234 = -26044437;
	volatile int32_t x235 = INT32_MAX;
	static volatile int32_t t58 = -101;

    t58 = (x233>(x234&(x235!=x236)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x237 = 150LLU;
	uint64_t x239 = 4208790LLU;
	int16_t x240 = INT16_MAX;
	volatile int32_t t59 = -851;

    t59 = (x237>(x238&(x239!=x240)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x242 = 249470106980758LL;
	int16_t x244 = 0;
	int32_t t60 = 1856415;

    t60 = (x241>(x242&(x243!=x244)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = -1;
	int64_t x246 = -1LL;
	static volatile int64_t x248 = -1LL;
	volatile int32_t t61 = -252847750;

    t61 = (x245>(x246&(x247!=x248)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x250 = 39283474LLU;
	int16_t x252 = INT16_MAX;
	static volatile int32_t t62 = -1;

    t62 = (x249>(x250&(x251!=x252)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x253 = INT16_MAX;
	int64_t x254 = INT64_MIN;
	int16_t x255 = -163;
	static volatile int32_t t63 = -259142;

    t63 = (x253>(x254&(x255!=x256)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x258 = -1331;
	int16_t x259 = INT16_MIN;
	int32_t x260 = -1;
	volatile int32_t t64 = -1;

    t64 = (x257>(x258&(x259!=x260)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint32_t x261 = UINT32_MAX;
	int8_t x262 = -1;
	volatile int16_t x263 = -1;
	int32_t t65 = 0;

    t65 = (x261>(x262&(x263!=x264)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = INT32_MIN;
	int64_t x266 = INT64_MAX;
	int64_t x267 = -1LL;
	static int32_t x268 = INT32_MIN;
	volatile int32_t t66 = 141985;

    t66 = (x265>(x266&(x267!=x268)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x270 = INT64_MAX;
	static uint8_t x271 = 13U;

    t67 = (x269>(x270&(x271!=x272)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x274 = -1;
	int16_t x275 = -2602;
	uint16_t x276 = 89U;
	int32_t t68 = 4969;

    t68 = (x273>(x274&(x275!=x276)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x277 = INT8_MIN;
	int8_t x278 = -1;
	int32_t x279 = INT32_MAX;
	int32_t x280 = -18;
	volatile int32_t t69 = -942;

    t69 = (x277>(x278&(x279!=x280)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x281 = 23U;
	int32_t x282 = INT32_MIN;
	uint8_t x283 = UINT8_MAX;
	static int8_t x284 = -1;
	static volatile int32_t t70 = 23849160;

    t70 = (x281>(x282&(x283!=x284)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x286 = -2;
	int16_t x287 = -1;
	int64_t x288 = INT64_MIN;

    t71 = (x285>(x286&(x287!=x288)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int32_t x289 = -1;
	static int16_t x290 = -18;
	int64_t x291 = -1LL;
	volatile int64_t x292 = -1LL;
	volatile int32_t t72 = 251;

    t72 = (x289>(x290&(x291!=x292)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x293 = -1;
	uint8_t x294 = 6U;

    t73 = (x293>(x294&(x295!=x296)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = -1;
	uint16_t x299 = UINT16_MAX;
	int32_t x300 = -66001539;
	volatile int32_t t74 = -832893710;

    t74 = (x297>(x298&(x299!=x300)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x303 = -88;
	uint8_t x304 = 13U;
	volatile int32_t t75 = 1810;

    t75 = (x301>(x302&(x303!=x304)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = INT16_MIN;
	int32_t x306 = -1;
	volatile int32_t t76 = -1;

    t76 = (x305>(x306&(x307!=x308)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x309 = 25U;
	volatile uint64_t x310 = 77188LLU;
	int16_t x311 = -1;
	volatile int32_t t77 = 8962;

    t77 = (x309>(x310&(x311!=x312)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int8_t x313 = -8;
	uint8_t x314 = UINT8_MAX;
	volatile uint32_t x315 = 4U;
	int16_t x316 = 6;
	static int32_t t78 = 49;

    t78 = (x313>(x314&(x315!=x316)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x317 = UINT8_MAX;
	int8_t x318 = INT8_MIN;
	static int8_t x319 = -18;
	int32_t t79 = 108482;

    t79 = (x317>(x318&(x319!=x320)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x321 = -1LL;
	uint32_t x323 = 2950U;
	int16_t x324 = -1;

    t80 = (x321>(x322&(x323!=x324)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x325 = UINT64_MAX;
	int64_t x326 = INT64_MAX;
	volatile int8_t x327 = INT8_MAX;
	uint8_t x328 = 11U;
	static volatile int32_t t81 = 1;

    t81 = (x325>(x326&(x327!=x328)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint64_t x329 = UINT64_MAX;
	uint8_t x330 = 89U;
	uint8_t x332 = 1U;
	static int32_t t82 = 0;

    t82 = (x329>(x330&(x331!=x332)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x333 = 23492711LL;
	static uint8_t x334 = UINT8_MAX;
	int8_t x335 = -10;
	int64_t x336 = INT64_MAX;
	volatile int32_t t83 = -52007;

    t83 = (x333>(x334&(x335!=x336)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = INT8_MIN;
	int8_t x338 = INT8_MIN;
	int64_t x339 = -1LL;
	static uint64_t x340 = 175LLU;
	static int32_t t84 = 4515643;

    t84 = (x337>(x338&(x339!=x340)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = 4543321424923LL;
	int16_t x342 = 1;
	int8_t x344 = -1;

    t85 = (x341>(x342&(x343!=x344)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x346 = -2;
	static int8_t x348 = -2;
	volatile int32_t t86 = 1;

    t86 = (x345>(x346&(x347!=x348)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x349 = INT16_MIN;
	static volatile uint64_t x351 = 1LLU;
	volatile int32_t t87 = 7;

    t87 = (x349>(x350&(x351!=x352)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x353 = INT32_MIN;
	uint16_t x354 = 113U;
	int16_t x355 = INT16_MAX;

    t88 = (x353>(x354&(x355!=x356)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x358 = INT8_MIN;
	volatile int16_t x359 = 0;
	int32_t t89 = -421764121;

    t89 = (x357>(x358&(x359!=x360)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x361 = INT16_MIN;
	static int16_t x362 = INT16_MAX;
	uint8_t x363 = UINT8_MAX;
	uint16_t x364 = UINT16_MAX;
	int32_t t90 = 5674;

    t90 = (x361>(x362&(x363!=x364)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile uint64_t x367 = UINT64_MAX;
	volatile int32_t t91 = -2;

    t91 = (x365>(x366&(x367!=x368)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint8_t x369 = 3U;
	static int16_t x370 = INT16_MIN;
	uint16_t x372 = UINT16_MAX;

    t92 = (x369>(x370&(x371!=x372)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x373 = INT8_MIN;
	int8_t x375 = -1;
	uint32_t x376 = 1224048U;

    t93 = (x373>(x374&(x375!=x376)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint32_t x377 = UINT32_MAX;
	int32_t x378 = INT32_MIN;
	int16_t x379 = 493;
	int16_t x380 = -1;

    t94 = (x377>(x378&(x379!=x380)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = -125323LL;
	int32_t x382 = INT32_MIN;
	int32_t x384 = INT32_MAX;

    t95 = (x381>(x382&(x383!=x384)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x385 = UINT8_MAX;
	uint16_t x386 = UINT16_MAX;
	int64_t x387 = 1LL;
	int16_t x388 = INT16_MIN;
	static volatile int32_t t96 = 54365;

    t96 = (x385>(x386&(x387!=x388)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = INT64_MIN;
	int64_t x390 = -5LL;
	int32_t x391 = 183119327;
	int32_t x392 = INT32_MIN;

    t97 = (x389>(x390&(x391!=x392)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = 11896;
	int32_t x394 = 310017;
	static uint16_t x395 = 14776U;
	int8_t x396 = -1;
	volatile int32_t t98 = -7535415;

    t98 = (x393>(x394&(x395!=x396)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x398 = INT64_MIN;
	int32_t x399 = INT32_MAX;
	int16_t x400 = -1;
	static int32_t t99 = 2;

    t99 = (x397>(x398&(x399!=x400)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x401 = INT64_MIN;
	volatile int16_t x402 = 1;
	uint64_t x403 = 5434642654257LLU;
	int32_t t100 = -138;

    t100 = (x401>(x402&(x403!=x404)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint8_t x406 = 5U;
	static int32_t t101 = 5;

    t101 = (x405>(x406&(x407!=x408)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x409 = 1939473687784200097LLU;
	int16_t x410 = 3900;
	int64_t x411 = -6321800694504LL;
	int32_t t102 = 13860575;

    t102 = (x409>(x410&(x411!=x412)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x414 = INT32_MIN;
	int32_t t103 = 60;

    t103 = (x413>(x414&(x415!=x416)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint16_t x417 = 1484U;
	static int64_t x419 = 646LL;
	int16_t x420 = -1;
	int32_t t104 = -171977104;

    t104 = (x417>(x418&(x419!=x420)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint8_t x421 = UINT8_MAX;
	static int32_t x422 = INT32_MIN;
	int16_t x423 = INT16_MAX;
	volatile uint64_t x424 = UINT64_MAX;
	volatile int32_t t105 = 6;

    t105 = (x421>(x422&(x423!=x424)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x425 = 0;
	uint32_t x426 = 1U;
	static uint32_t x427 = 1909369763U;
	static int8_t x428 = INT8_MIN;

    t106 = (x425>(x426&(x427!=x428)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x430 = INT16_MAX;
	int8_t x431 = INT8_MIN;
	int32_t t107 = -3361;

    t107 = (x429>(x430&(x431!=x432)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x433 = INT16_MAX;
	uint8_t x434 = UINT8_MAX;
	int16_t x435 = INT16_MAX;
	static uint32_t x436 = 1495953U;
	volatile int32_t t108 = 0;

    t108 = (x433>(x434&(x435!=x436)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x437 = -345890;
	volatile uint64_t x439 = 11889587LLU;
	static int32_t x440 = INT32_MIN;
	int32_t t109 = 17364;

    t109 = (x437>(x438&(x439!=x440)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x441 = 13U;
	volatile int16_t x442 = 2;
	int64_t x444 = 0LL;

    t110 = (x441>(x442&(x443!=x444)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint32_t x445 = UINT32_MAX;
	int64_t x446 = INT64_MIN;
	int16_t x447 = INT16_MIN;
	uint8_t x448 = 119U;
	volatile int32_t t111 = 639560395;

    t111 = (x445>(x446&(x447!=x448)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x449 = -1;
	static int64_t x450 = 54266169566LL;
	uint16_t x451 = 438U;
	int64_t x452 = 107011443LL;
	volatile int32_t t112 = -3569854;

    t112 = (x449>(x450&(x451!=x452)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = INT32_MIN;
	uint32_t x454 = 2387346U;
	static int16_t x455 = INT16_MAX;
	volatile int32_t t113 = -163938926;

    t113 = (x453>(x454&(x455!=x456)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x458 = 3401LL;
	int64_t x459 = INT64_MAX;
	uint64_t x460 = UINT64_MAX;

    t114 = (x457>(x458&(x459!=x460)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x461 = -1;
	uint32_t x462 = 2403U;
	static uint16_t x463 = UINT16_MAX;
	uint16_t x464 = 50U;
	int32_t t115 = 229068930;

    t115 = (x461>(x462&(x463!=x464)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int32_t x466 = INT32_MAX;
	volatile int64_t x467 = INT64_MIN;
	volatile int16_t x468 = -1;
	int32_t t116 = 38691;

    t116 = (x465>(x466&(x467!=x468)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = -1;
	volatile uint32_t x470 = 167556290U;
	static uint64_t x472 = 503873684221LLU;
	volatile int32_t t117 = -923553;

    t117 = (x469>(x470&(x471!=x472)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x474 = INT8_MAX;
	volatile int8_t x475 = INT8_MIN;
	int8_t x476 = INT8_MIN;
	volatile int32_t t118 = 2017473;

    t118 = (x473>(x474&(x475!=x476)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x477 = 183207;
	volatile uint32_t x478 = UINT32_MAX;
	volatile int16_t x479 = -1;
	int32_t t119 = -12224644;

    t119 = (x477>(x478&(x479!=x480)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = INT64_MIN;
	uint16_t x483 = 341U;
	int32_t x484 = -674;
	static volatile int32_t t120 = -4835;

    t120 = (x481>(x482&(x483!=x484)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = INT8_MIN;
	int32_t x486 = -1;
	int16_t x487 = INT16_MAX;
	volatile int32_t t121 = 2;

    t121 = (x485>(x486&(x487!=x488)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x489 = INT16_MAX;
	uint8_t x490 = UINT8_MAX;

    t122 = (x489>(x490&(x491!=x492)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x495 = INT64_MAX;
	int32_t x496 = INT32_MIN;

    t123 = (x493>(x494&(x495!=x496)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x497 = INT16_MIN;
	uint64_t x498 = UINT64_MAX;
	uint8_t x499 = 0U;
	int32_t t124 = -719876308;

    t124 = (x497>(x498&(x499!=x500)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = -2781;
	volatile int8_t x502 = INT8_MIN;
	uint8_t x503 = 16U;
	uint16_t x504 = 464U;

    t125 = (x501>(x502&(x503!=x504)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x505 = INT8_MAX;
	int16_t x506 = INT16_MIN;
	int64_t x507 = INT64_MIN;
	int64_t x508 = -1531LL;

    t126 = (x505>(x506&(x507!=x508)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x509 = -1;
	int8_t x510 = -15;
	int32_t x511 = INT32_MIN;
	int16_t x512 = INT16_MAX;

    t127 = (x509>(x510&(x511!=x512)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int32_t x513 = INT32_MIN;
	volatile uint8_t x514 = 81U;
	volatile int8_t x516 = INT8_MIN;

    t128 = (x513>(x514&(x515!=x516)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x518 = INT32_MIN;
	int32_t x519 = INT32_MIN;
	int64_t x520 = INT64_MAX;
	static volatile int32_t t129 = -849;

    t129 = (x517>(x518&(x519!=x520)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x521 = -45;
	volatile uint16_t x522 = 0U;
	static int16_t x523 = INT16_MIN;
	static int64_t x524 = INT64_MAX;
	int32_t t130 = -60268;

    t130 = (x521>(x522&(x523!=x524)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x525 = INT8_MAX;
	static int16_t x526 = INT16_MIN;
	uint32_t x527 = UINT32_MAX;
	int8_t x528 = INT8_MIN;
	int32_t t131 = 358;

    t131 = (x525>(x526&(x527!=x528)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x529 = -1LL;
	volatile uint8_t x530 = UINT8_MAX;
	static int64_t x531 = -1LL;
	int32_t t132 = -133991;

    t132 = (x529>(x530&(x531!=x532)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x533 = INT16_MIN;
	int64_t x534 = -1LL;
	uint32_t x535 = 1780051184U;
	uint16_t x536 = 26230U;
	int32_t t133 = -676;

    t133 = (x533>(x534&(x535!=x536)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x537 = 16U;
	int64_t x538 = INT64_MAX;
	volatile int8_t x539 = 1;
	int32_t t134 = 954;

    t134 = (x537>(x538&(x539!=x540)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint8_t x541 = 5U;
	uint32_t x544 = 15753U;
	volatile int32_t t135 = -26;

    t135 = (x541>(x542&(x543!=x544)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x545 = 47U;
	int16_t x547 = -4;
	int32_t x548 = INT32_MIN;
	static int32_t t136 = 6261;

    t136 = (x545>(x546&(x547!=x548)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x550 = 1682696;
	static int64_t x551 = -1LL;
	int32_t x552 = -1;
	volatile int32_t t137 = 44985;

    t137 = (x549>(x550&(x551!=x552)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint8_t x553 = 59U;
	int16_t x555 = -1;
	static volatile int32_t t138 = 0;

    t138 = (x553>(x554&(x555!=x556)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x557 = INT16_MAX;
	int16_t x558 = INT16_MIN;
	int64_t x559 = -14278058195887LL;
	static int8_t x560 = -1;
	int32_t t139 = 2471176;

    t139 = (x557>(x558&(x559!=x560)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint16_t x561 = 12U;
	static uint32_t x562 = 104U;
	static int64_t x563 = -861983062852068066LL;
	int8_t x564 = INT8_MIN;

    t140 = (x561>(x562&(x563!=x564)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = -1;
	uint32_t x566 = 15996647U;
	int8_t x567 = -1;
	volatile int64_t x568 = INT64_MIN;

    t141 = (x565>(x566&(x567!=x568)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = -1;
	int64_t x570 = 1748601126LL;
	volatile uint8_t x571 = 2U;

    t142 = (x569>(x570&(x571!=x572)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint32_t x573 = 758U;
	uint32_t x574 = 17054168U;
	volatile uint16_t x576 = UINT16_MAX;

    t143 = (x573>(x574&(x575!=x576)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x577 = -12;
	int16_t x578 = INT16_MIN;
	uint64_t x580 = 3878079155750993LLU;
	int32_t t144 = -203633;

    t144 = (x577>(x578&(x579!=x580)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint32_t x583 = 234150U;
	uint32_t x584 = 58405234U;
	static int32_t t145 = -8;

    t145 = (x581>(x582&(x583!=x584)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x585 = -1;
	int8_t x586 = INT8_MIN;
	int8_t x587 = -1;
	int8_t x588 = 14;

    t146 = (x585>(x586&(x587!=x588)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile uint32_t x590 = 13101771U;
	int64_t x592 = INT64_MAX;
	int32_t t147 = 35;

    t147 = (x589>(x590&(x591!=x592)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = 1750930069LL;
	uint32_t x594 = 348927966U;
	uint32_t x595 = 15798U;
	int32_t t148 = 985118434;

    t148 = (x593>(x594&(x595!=x596)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = 124402487040705LL;
	int8_t x598 = INT8_MAX;
	int8_t x600 = -13;
	static volatile int32_t t149 = 1;

    t149 = (x597>(x598&(x599!=x600)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint16_t x602 = 118U;
	int8_t x603 = -1;
	uint32_t x604 = 59305U;
	volatile int32_t t150 = -17;

    t150 = (x601>(x602&(x603!=x604)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x605 = 26U;
	uint16_t x606 = 109U;
	uint8_t x607 = 1U;
	static uint16_t x608 = UINT16_MAX;
	volatile int32_t t151 = -121;

    t151 = (x605>(x606&(x607!=x608)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint64_t x609 = 3550842752878778414LLU;
	uint32_t x611 = UINT32_MAX;
	int32_t t152 = -768316;

    t152 = (x609>(x610&(x611!=x612)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x613 = -1;
	static int32_t x614 = -2;
	volatile int64_t x615 = INT64_MIN;
	int64_t x616 = INT64_MAX;
	static int32_t t153 = -124515452;

    t153 = (x613>(x614&(x615!=x616)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x617 = -1;
	int8_t x618 = INT8_MIN;
	uint64_t x619 = 756869175LLU;
	int8_t x620 = INT8_MIN;
	int32_t t154 = -897930802;

    t154 = (x617>(x618&(x619!=x620)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x621 = -1LL;
	uint8_t x622 = 2U;
	int32_t x623 = -120394226;
	static int8_t x624 = -1;
	int32_t t155 = 225741662;

    t155 = (x621>(x622&(x623!=x624)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = INT32_MIN;
	uint32_t x626 = 974156U;
	uint64_t x628 = 2090474LLU;
	volatile int32_t t156 = -1;

    t156 = (x625>(x626&(x627!=x628)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x629 = INT16_MAX;
	int8_t x630 = -1;
	int64_t x632 = -1LL;

    t157 = (x629>(x630&(x631!=x632)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x634 = 1204498LLU;
	int8_t x635 = INT8_MAX;
	int8_t x636 = INT8_MIN;
	int32_t t158 = -1251;

    t158 = (x633>(x634&(x635!=x636)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x637 = 9U;
	uint8_t x638 = UINT8_MAX;
	static int32_t x639 = INT32_MAX;

    t159 = (x637>(x638&(x639!=x640)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x641 = -1;
	static int16_t x642 = -1;
	int8_t x643 = -1;
	int64_t x644 = INT64_MIN;

    t160 = (x641>(x642&(x643!=x644)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x645 = 3;
	volatile int64_t x646 = -68255622814750LL;
	int64_t x647 = INT64_MAX;
	int8_t x648 = 0;
	static int32_t t161 = -8101;

    t161 = (x645>(x646&(x647!=x648)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = INT8_MAX;
	volatile uint64_t x650 = UINT64_MAX;
	volatile uint16_t x651 = 182U;
	uint32_t x652 = 765U;
	int32_t t162 = 25589400;

    t162 = (x649>(x650&(x651!=x652)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x653 = INT16_MAX;
	static uint32_t x654 = UINT32_MAX;
	int8_t x655 = INT8_MIN;
	static int32_t x656 = INT32_MIN;

    t163 = (x653>(x654&(x655!=x656)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x657 = UINT8_MAX;
	int32_t x658 = -1;
	int8_t x659 = -1;
	int32_t x660 = -1;

    t164 = (x657>(x658&(x659!=x660)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x661 = INT16_MIN;
	uint16_t x662 = UINT16_MAX;
	uint64_t x663 = 64272791717970LLU;
	int16_t x664 = INT16_MIN;
	int32_t t165 = 65958980;

    t165 = (x661>(x662&(x663!=x664)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int32_t x666 = -5;
	int64_t x667 = 80LL;
	int32_t x668 = 9605;
	int32_t t166 = 59;

    t166 = (x665>(x666&(x667!=x668)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x669 = UINT16_MAX;
	volatile int8_t x670 = -1;
	volatile uint8_t x671 = 125U;
	volatile int64_t x672 = INT64_MAX;

    t167 = (x669>(x670&(x671!=x672)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x673 = UINT32_MAX;
	int8_t x674 = 63;
	static int16_t x675 = 49;
	static volatile int32_t t168 = -35;

    t168 = (x673>(x674&(x675!=x676)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int64_t x677 = -1LL;
	int32_t x678 = INT32_MIN;
	int32_t x679 = -1;
	int64_t x680 = INT64_MIN;
	volatile int32_t t169 = 6;

    t169 = (x677>(x678&(x679!=x680)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x682 = UINT8_MAX;
	uint8_t x683 = 0U;
	volatile uint32_t x684 = 2617U;
	volatile int32_t t170 = 48713978;

    t170 = (x681>(x682&(x683!=x684)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x685 = INT32_MIN;
	int16_t x686 = INT16_MAX;
	int16_t x688 = -1;
	volatile int32_t t171 = -2757698;

    t171 = (x685>(x686&(x687!=x688)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x689 = -5;
	volatile uint32_t x690 = 55878991U;
	int32_t x691 = INT32_MIN;
	volatile int8_t x692 = -5;
	static volatile int32_t t172 = 22;

    t172 = (x689>(x690&(x691!=x692)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x693 = INT64_MAX;
	int16_t x695 = -659;
	volatile uint16_t x696 = UINT16_MAX;
	static volatile int32_t t173 = -85;

    t173 = (x693>(x694&(x695!=x696)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x697 = 3022U;
	volatile int64_t x698 = INT64_MIN;
	int32_t x699 = -1;
	int64_t x700 = -1LL;
	static int32_t t174 = 0;

    t174 = (x697>(x698&(x699!=x700)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x702 = 3U;
	static uint8_t x703 = UINT8_MAX;
	uint8_t x704 = 13U;

    t175 = (x701>(x702&(x703!=x704)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x705 = INT64_MAX;
	int8_t x707 = INT8_MIN;
	int16_t x708 = -1;
	volatile int32_t t176 = -14976819;

    t176 = (x705>(x706&(x707!=x708)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint32_t x709 = 41153563U;
	uint64_t x710 = 216909051668LLU;
	volatile int64_t x711 = -1182596036452613LL;
	int32_t t177 = 155574944;

    t177 = (x709>(x710&(x711!=x712)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x713 = INT16_MAX;
	uint64_t x714 = 58LLU;
	volatile int32_t t178 = -915769;

    t178 = (x713>(x714&(x715!=x716)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint16_t x717 = 193U;
	uint32_t x718 = UINT32_MAX;
	uint32_t x719 = 19U;
	uint8_t x720 = 3U;
	volatile int32_t t179 = 48733;

    t179 = (x717>(x718&(x719!=x720)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x722 = UINT64_MAX;
	static int32_t x724 = 540856;
	volatile int32_t t180 = 4443;

    t180 = (x721>(x722&(x723!=x724)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x725 = -1LL;
	uint8_t x726 = UINT8_MAX;
	int64_t x727 = INT64_MIN;
	static int16_t x728 = INT16_MIN;
	volatile int32_t t181 = -11;

    t181 = (x725>(x726&(x727!=x728)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint8_t x729 = 3U;
	static uint8_t x731 = 16U;
	int16_t x732 = INT16_MIN;
	volatile int32_t t182 = -1;

    t182 = (x729>(x730&(x731!=x732)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x733 = INT64_MIN;
	int64_t x735 = INT64_MAX;
	int8_t x736 = -1;
	int32_t t183 = -453;

    t183 = (x733>(x734&(x735!=x736)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x737 = -1;
	static uint64_t x738 = 367803237187709LLU;
	static uint8_t x739 = UINT8_MAX;
	static int8_t x740 = -1;
	int32_t t184 = 8423;

    t184 = (x737>(x738&(x739!=x740)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x741 = -1;
	uint64_t x742 = 4927LLU;
	static int8_t x743 = INT8_MIN;
	int32_t t185 = -71;

    t185 = (x741>(x742&(x743!=x744)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint8_t x745 = 25U;
	int64_t x746 = INT64_MIN;
	uint32_t x748 = UINT32_MAX;
	volatile int32_t t186 = 1103952;

    t186 = (x745>(x746&(x747!=x748)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int32_t x749 = -1;
	volatile int64_t x750 = -1LL;
	static int16_t x752 = -6112;

    t187 = (x749>(x750&(x751!=x752)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x753 = INT32_MIN;
	uint8_t x754 = UINT8_MAX;
	uint64_t x755 = 28372225341LLU;
	volatile int32_t t188 = 177;

    t188 = (x753>(x754&(x755!=x756)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = -37;
	uint8_t x758 = UINT8_MAX;
	uint8_t x759 = 0U;
	int64_t x760 = -3244135008993805983LL;

    t189 = (x757>(x758&(x759!=x760)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = INT8_MAX;
	uint16_t x762 = 15U;
	static int8_t x764 = -1;

    t190 = (x761>(x762&(x763!=x764)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x765 = INT8_MAX;
	static int32_t x766 = INT32_MIN;
	uint32_t x767 = 3981601U;
	int32_t x768 = INT32_MIN;
	int32_t t191 = 7;

    t191 = (x765>(x766&(x767!=x768)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = -1LL;
	int16_t x770 = INT16_MAX;
	static volatile uint32_t x771 = UINT32_MAX;
	int32_t t192 = -12;

    t192 = (x769>(x770&(x771!=x772)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x773 = INT64_MAX;
	int16_t x776 = INT16_MAX;
	static int32_t t193 = -501;

    t193 = (x773>(x774&(x775!=x776)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = INT8_MIN;
	volatile int64_t x778 = -1LL;
	volatile int64_t x779 = 92449856864239268LL;
	uint16_t x780 = 6492U;
	volatile int32_t t194 = 40600302;

    t194 = (x777>(x778&(x779!=x780)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x781 = 168;
	int32_t x782 = -1;
	uint64_t x783 = 421575LLU;
	static int32_t t195 = -3290505;

    t195 = (x781>(x782&(x783!=x784)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int32_t x785 = 45;
	int16_t x786 = 5384;
	int8_t x787 = INT8_MIN;
	int16_t x788 = INT16_MIN;
	int32_t t196 = -10272534;

    t196 = (x785>(x786&(x787!=x788)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = 0;
	uint8_t x790 = 22U;
	volatile int32_t x791 = INT32_MIN;
	uint32_t x792 = 7U;
	volatile int32_t t197 = -1188;

    t197 = (x789>(x790&(x791!=x792)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x793 = 69;
	int16_t x794 = -1;
	int8_t x795 = 18;
	int16_t x796 = -34;
	volatile int32_t t198 = 0;

    t198 = (x793>(x794&(x795!=x796)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x797 = -1;
	static volatile uint32_t x798 = 5250802U;
	static int64_t x799 = -1LL;
	int16_t x800 = -1;
	volatile int32_t t199 = -96880;

    t199 = (x797>(x798&(x799!=x800)));

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

