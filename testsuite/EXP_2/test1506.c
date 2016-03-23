
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

uint32_t x8 = 16U;
int8_t x9 = INT8_MIN;
int64_t x13 = INT64_MAX;
int32_t x17 = -826;
int32_t t4 = 297;
volatile int32_t x26 = INT32_MAX;
static int32_t t7 = 2742;
uint16_t x33 = 1U;
uint64_t x34 = UINT64_MAX;
int16_t x37 = INT16_MIN;
int32_t x45 = INT32_MAX;
static int8_t x47 = INT8_MIN;
static uint8_t x48 = UINT8_MAX;
int64_t x51 = -19LL;
static int32_t t12 = 9;
uint64_t x58 = 1283598LLU;
int32_t x59 = INT32_MAX;
volatile int64_t x70 = INT64_MAX;
uint64_t x81 = 5383515994LLU;
int16_t x87 = -1;
uint32_t x90 = 2917074U;
int32_t t22 = 4896448;
int8_t x93 = INT8_MIN;
volatile uint64_t x98 = 86879451110LLU;
volatile uint8_t x100 = 53U;
static uint8_t x103 = UINT8_MAX;
volatile int32_t t25 = -896394431;
int32_t x108 = INT32_MIN;
uint32_t x110 = UINT32_MAX;
volatile int32_t t27 = 37221;
int8_t x113 = INT8_MIN;
int16_t x116 = 947;
int64_t x117 = -1LL;
static int64_t x119 = INT64_MIN;
int64_t x121 = -1LL;
int16_t x129 = 1;
int64_t x130 = INT64_MIN;
uint64_t x134 = 6580961LLU;
uint32_t x135 = 395634178U;
int8_t x140 = INT8_MAX;
static int32_t t34 = -2352;
int64_t x141 = 128720973943LL;
volatile int16_t x143 = 303;
int8_t x146 = -1;
static int32_t x147 = INT32_MAX;
volatile int32_t x154 = -1;
int32_t x156 = INT32_MIN;
volatile int32_t t40 = -691164;
uint32_t x168 = UINT32_MAX;
int16_t x170 = INT16_MAX;
int64_t x182 = -5LL;
static int32_t x183 = INT32_MIN;
static int8_t x185 = -1;
int64_t x188 = INT64_MIN;
int32_t x190 = 2;
uint16_t x194 = 0U;
uint8_t x197 = UINT8_MAX;
int32_t x198 = 14274077;
static int64_t x201 = INT64_MIN;
uint8_t x203 = UINT8_MAX;
int16_t x208 = -1;
volatile int16_t x215 = INT16_MIN;
volatile int16_t x218 = INT16_MIN;
uint64_t x219 = 89139128LLU;
uint32_t x220 = UINT32_MAX;
int32_t t55 = -783540;
volatile int64_t x227 = INT64_MIN;
int32_t t56 = 61;
volatile int32_t t57 = 155073;
volatile uint16_t x235 = 14207U;
static int32_t t60 = -1420573;
int32_t t61 = 1964;
volatile int32_t x251 = INT32_MIN;
uint32_t x256 = 25215U;
volatile int32_t t64 = -58;
int32_t x264 = INT32_MAX;
int64_t x268 = INT64_MAX;
int16_t x269 = INT16_MAX;
int16_t x274 = INT16_MAX;
volatile int32_t t68 = -94670032;
int32_t x277 = INT32_MIN;
volatile int8_t x279 = -1;
int32_t t69 = 58407680;
volatile uint64_t x283 = UINT64_MAX;
int8_t x290 = INT8_MIN;
volatile int32_t t72 = -2;
volatile int16_t x293 = INT16_MIN;
volatile int32_t t74 = -25880;
volatile int64_t x303 = 1744632LL;
int8_t x304 = INT8_MIN;
static int16_t x306 = INT16_MAX;
int64_t x307 = -1LL;
int16_t x315 = -18;
int8_t x322 = INT8_MAX;
uint64_t x327 = UINT64_MAX;
int64_t x328 = INT64_MIN;
int8_t x334 = INT8_MIN;
int64_t x336 = 24025LL;
int32_t t83 = 24159150;
int16_t x344 = INT16_MAX;
volatile int32_t t86 = -1;
static uint8_t x349 = 59U;
int32_t x361 = INT32_MAX;
int16_t x363 = -1;
int64_t x376 = -1LL;
volatile int8_t x380 = -1;
volatile uint64_t x381 = 235034448LLU;
int32_t x384 = INT32_MAX;
uint8_t x389 = 1U;
static volatile int32_t x396 = INT32_MIN;
volatile uint16_t x397 = UINT16_MAX;
uint8_t x398 = 2U;
static uint64_t x401 = UINT64_MAX;
int32_t x407 = INT32_MAX;
volatile int8_t x409 = 1;
volatile int64_t x412 = INT64_MAX;
int32_t t104 = -2832017;
uint64_t x422 = UINT64_MAX;
int32_t t105 = 1890;
static volatile int64_t x426 = 1908785960LL;
int32_t t106 = -1005;
int64_t x432 = INT64_MIN;
int32_t x444 = -1;
static uint32_t x449 = UINT32_MAX;
volatile int8_t x455 = -1;
volatile int32_t t113 = 768040326;
uint64_t x465 = 61714265LLU;
int64_t x467 = -1LL;
int64_t x469 = INT64_MIN;
volatile uint8_t x477 = UINT8_MAX;
int32_t x482 = INT32_MIN;
volatile int32_t t121 = 1;
volatile int32_t t122 = -819;
static int8_t x496 = INT8_MIN;
int32_t t123 = 48084;
static uint16_t x508 = 2U;
int32_t t126 = -850980964;
int32_t t127 = -935;
static int32_t t129 = -34993;
int64_t x523 = INT64_MAX;
volatile int16_t x534 = INT16_MIN;
int32_t x538 = 294;
static volatile int16_t x546 = -1;
uint32_t x547 = 824703U;
static uint32_t x551 = 1U;
int32_t t140 = -2514;
uint32_t x570 = UINT32_MAX;
int64_t x575 = -2191010053LL;
int64_t x582 = -3LL;
volatile uint64_t x583 = UINT64_MAX;
uint64_t x584 = 83656155LLU;
int8_t x589 = -1;
int32_t t148 = -50274;
int32_t t149 = -38309050;
int32_t x603 = INT32_MAX;
int16_t x608 = -1;
static volatile int16_t x610 = -6159;
uint8_t x618 = 108U;
static uint16_t x632 = UINT16_MAX;
int16_t x641 = -58;
int64_t x644 = 429395898905463903LL;
int64_t x646 = INT64_MIN;
static int8_t x647 = INT8_MIN;
int64_t x648 = -1LL;
int64_t x658 = INT64_MAX;
volatile int32_t t164 = 28263;
int64_t x663 = 23LL;
volatile uint16_t x668 = 778U;
volatile int8_t x670 = -10;
static uint16_t x671 = 404U;
uint8_t x674 = 1U;
uint32_t x676 = UINT32_MAX;
static int16_t x695 = 40;
int64_t x696 = INT64_MIN;
volatile int32_t t173 = -48483;
int32_t x698 = INT32_MAX;
int32_t t175 = 258840542;
uint64_t x706 = 31LLU;
uint8_t x710 = 14U;
volatile int16_t x718 = INT16_MIN;
uint16_t x719 = UINT16_MAX;
volatile int32_t t180 = 1;
int8_t x740 = INT8_MIN;
int32_t x756 = -1;
int32_t t192 = 754146691;
int8_t x775 = -7;
uint32_t x777 = UINT32_MAX;
static int64_t x784 = INT64_MIN;
int32_t x799 = INT32_MIN;


void f0(void) {
    	int8_t x1 = -19;
	int16_t x2 = 1270;
	int8_t x3 = 8;
	int32_t x4 = INT32_MIN;
	int32_t t0 = -1;

    t0 = ((x1<=(x2==x3))==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = -37848362931858806LL;
	int64_t x6 = -587957LL;
	uint16_t x7 = UINT16_MAX;
	int32_t t1 = -970758324;

    t1 = ((x5<=(x6==x7))==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x10 = 4;
	uint32_t x11 = 0U;
	volatile uint16_t x12 = 9U;
	volatile int32_t t2 = -184276494;

    t2 = ((x9<=(x10==x11))==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x14 = -11960;
	int64_t x15 = INT64_MAX;
	int16_t x16 = INT16_MIN;
	int32_t t3 = -44;

    t3 = ((x13<=(x14==x15))==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint16_t x18 = 1U;
	static int8_t x19 = INT8_MAX;
	int8_t x20 = INT8_MAX;

    t4 = ((x17<=(x18==x19))==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = INT64_MIN;
	int64_t x22 = 20LL;
	int32_t x23 = -1;
	uint16_t x24 = 23314U;
	volatile int32_t t5 = -44;

    t5 = ((x21<=(x22==x23))==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = 9;
	int32_t x27 = 10283568;
	int32_t x28 = -1;
	int32_t t6 = -36769490;

    t6 = ((x25<=(x26==x27))==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint8_t x29 = 4U;
	int16_t x30 = 0;
	int8_t x31 = 5;
	int64_t x32 = INT64_MIN;

    t7 = ((x29<=(x30==x31))==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x35 = INT8_MIN;
	uint8_t x36 = UINT8_MAX;
	static volatile int32_t t8 = 3976058;

    t8 = ((x33<=(x34==x35))==x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x38 = INT16_MIN;
	uint16_t x39 = 11436U;
	int32_t x40 = 0;
	volatile int32_t t9 = -97;

    t9 = ((x37<=(x38==x39))==x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x41 = 43U;
	int32_t x42 = INT32_MIN;
	int64_t x43 = INT64_MIN;
	static int64_t x44 = INT64_MAX;
	static int32_t t10 = -126974;

    t10 = ((x41<=(x42==x43))==x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x46 = UINT8_MAX;
	static volatile int32_t t11 = -453300905;

    t11 = ((x45<=(x46==x47))==x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = -3300449;
	uint8_t x50 = 14U;
	uint64_t x52 = 1380848LLU;

    t12 = ((x49<=(x50==x51))==x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x53 = 576364LLU;
	int8_t x54 = -6;
	volatile uint16_t x55 = UINT16_MAX;
	volatile int16_t x56 = -1;
	int32_t t13 = 5576;

    t13 = ((x53<=(x54==x55))==x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x57 = INT16_MIN;
	static int16_t x60 = 1;
	int32_t t14 = 819432838;

    t14 = ((x57<=(x58==x59))==x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = INT8_MIN;
	static volatile int16_t x62 = INT16_MIN;
	int32_t x63 = -78023902;
	uint8_t x64 = 2U;
	static volatile int32_t t15 = 3416805;

    t15 = ((x61<=(x62==x63))==x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x65 = -1;
	volatile int8_t x66 = INT8_MIN;
	static int32_t x67 = INT32_MIN;
	volatile int8_t x68 = 0;
	int32_t t16 = 64540704;

    t16 = ((x65<=(x66==x67))==x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x69 = 7792U;
	volatile int8_t x71 = -1;
	int16_t x72 = INT16_MIN;
	static volatile int32_t t17 = -1109;

    t17 = ((x69<=(x70==x71))==x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x73 = 224U;
	int16_t x74 = 3;
	uint32_t x75 = 65446U;
	int64_t x76 = INT64_MIN;
	volatile int32_t t18 = 0;

    t18 = ((x73<=(x74==x75))==x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = INT16_MAX;
	int64_t x78 = -1LL;
	static uint64_t x79 = UINT64_MAX;
	volatile int32_t x80 = -1014237916;
	int32_t t19 = -190;

    t19 = ((x77<=(x78==x79))==x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x82 = -898;
	int32_t x83 = INT32_MIN;
	static int32_t x84 = 45;
	int32_t t20 = 36;

    t20 = ((x81<=(x82==x83))==x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x85 = -2509337511238LL;
	uint8_t x86 = 1U;
	int8_t x88 = -1;
	volatile int32_t t21 = -45677656;

    t21 = ((x85<=(x86==x87))==x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint32_t x89 = UINT32_MAX;
	int32_t x91 = 1;
	static uint64_t x92 = 252331LLU;

    t22 = ((x89<=(x90==x91))==x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x94 = 1093370U;
	volatile uint8_t x95 = 31U;
	int16_t x96 = -1;
	volatile int32_t t23 = 4944;

    t23 = ((x93<=(x94==x95))==x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = 5;
	uint16_t x99 = 8454U;
	int32_t t24 = 0;

    t24 = ((x97<=(x98==x99))==x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int64_t x101 = INT64_MIN;
	int16_t x102 = INT16_MIN;
	int16_t x104 = -1;

    t25 = ((x101<=(x102==x103))==x104);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = -1;
	volatile int64_t x106 = INT64_MAX;
	int32_t x107 = INT32_MIN;
	static int32_t t26 = -4;

    t26 = ((x105<=(x106==x107))==x108);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = INT64_MIN;
	int32_t x111 = 869;
	volatile uint16_t x112 = 17U;

    t27 = ((x109<=(x110==x111))==x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x114 = INT8_MIN;
	static int32_t x115 = INT32_MIN;
	volatile int32_t t28 = -339;

    t28 = ((x113<=(x114==x115))==x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x118 = 1453LL;
	int8_t x120 = INT8_MAX;
	int32_t t29 = 20178;

    t29 = ((x117<=(x118==x119))==x120);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x122 = INT32_MIN;
	static int8_t x123 = INT8_MAX;
	static uint32_t x124 = 536301U;
	int32_t t30 = -326455881;

    t30 = ((x121<=(x122==x123))==x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x125 = 118878290113799973LLU;
	static int32_t x126 = INT32_MIN;
	uint64_t x127 = 278111452LLU;
	volatile int16_t x128 = -57;
	int32_t t31 = 663266;

    t31 = ((x125<=(x126==x127))==x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x131 = -1;
	uint16_t x132 = UINT16_MAX;
	volatile int32_t t32 = 11966;

    t32 = ((x129<=(x130==x131))==x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = 14406;
	uint64_t x136 = 15LLU;
	int32_t t33 = 47533;

    t33 = ((x133<=(x134==x135))==x136);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = INT16_MIN;
	int64_t x138 = -31251LL;
	int16_t x139 = -253;

    t34 = ((x137<=(x138==x139))==x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x142 = INT32_MIN;
	int8_t x144 = 0;
	static volatile int32_t t35 = 26;

    t35 = ((x141<=(x142==x143))==x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = INT16_MAX;
	uint8_t x148 = UINT8_MAX;
	int32_t t36 = -273;

    t36 = ((x145<=(x146==x147))==x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x149 = INT16_MAX;
	static int8_t x150 = -1;
	int16_t x151 = 863;
	int32_t x152 = INT32_MIN;
	int32_t t37 = 651186;

    t37 = ((x149<=(x150==x151))==x152);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = -1;
	volatile uint16_t x155 = 432U;
	volatile int32_t t38 = -1810;

    t38 = ((x153<=(x154==x155))==x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = INT64_MIN;
	uint64_t x158 = 369812954909LLU;
	int8_t x159 = INT8_MIN;
	int8_t x160 = -4;
	int32_t t39 = 148083;

    t39 = ((x157<=(x158==x159))==x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint8_t x161 = 32U;
	int32_t x162 = -2508;
	uint16_t x163 = UINT16_MAX;
	uint32_t x164 = UINT32_MAX;

    t40 = ((x161<=(x162==x163))==x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x165 = UINT64_MAX;
	int16_t x166 = 233;
	int16_t x167 = -1;
	int32_t t41 = -12;

    t41 = ((x165<=(x166==x167))==x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = -3;
	static uint32_t x171 = 1746U;
	volatile int64_t x172 = -31913LL;
	volatile int32_t t42 = -58001;

    t42 = ((x169<=(x170==x171))==x172);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x173 = UINT16_MAX;
	int64_t x174 = 3831588925447590LL;
	int16_t x175 = 25;
	uint16_t x176 = UINT16_MAX;
	volatile int32_t t43 = 0;

    t43 = ((x173<=(x174==x175))==x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = INT64_MIN;
	int8_t x178 = -22;
	int8_t x179 = -1;
	int8_t x180 = -1;
	static int32_t t44 = 5;

    t44 = ((x177<=(x178==x179))==x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x181 = 0;
	int16_t x184 = 6;
	volatile int32_t t45 = 228;

    t45 = ((x181<=(x182==x183))==x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x186 = -1156046;
	int32_t x187 = -1;
	static volatile int32_t t46 = 14407;

    t46 = ((x185<=(x186==x187))==x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x189 = 4U;
	int32_t x191 = -1;
	int8_t x192 = -1;
	int32_t t47 = -20;

    t47 = ((x189<=(x190==x191))==x192);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x193 = INT64_MIN;
	int16_t x195 = -1;
	volatile uint32_t x196 = 101251U;
	static volatile int32_t t48 = -1;

    t48 = ((x193<=(x194==x195))==x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x199 = UINT64_MAX;
	static volatile int16_t x200 = -1;
	int32_t t49 = 15916751;

    t49 = ((x197<=(x198==x199))==x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x202 = UINT16_MAX;
	uint64_t x204 = 328LLU;
	volatile int32_t t50 = -23979568;

    t50 = ((x201<=(x202==x203))==x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x205 = INT8_MAX;
	uint8_t x206 = UINT8_MAX;
	static int32_t x207 = INT32_MIN;
	volatile int32_t t51 = -168;

    t51 = ((x205<=(x206==x207))==x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x209 = 350840U;
	int64_t x210 = -1LL;
	uint16_t x211 = 378U;
	int32_t x212 = INT32_MIN;
	volatile int32_t t52 = 5272;

    t52 = ((x209<=(x210==x211))==x212);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = INT8_MAX;
	static int16_t x214 = -654;
	uint64_t x216 = 1635185687295845LLU;
	static volatile int32_t t53 = -26257;

    t53 = ((x213<=(x214==x215))==x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint16_t x217 = 18U;
	int32_t t54 = 6;

    t54 = ((x217<=(x218==x219))==x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x221 = -134693411;
	uint32_t x222 = UINT32_MAX;
	int64_t x223 = -2LL;
	static int8_t x224 = -1;

    t55 = ((x221<=(x222==x223))==x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x225 = -1;
	static int64_t x226 = INT64_MIN;
	static int32_t x228 = 601;

    t56 = ((x225<=(x226==x227))==x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile uint16_t x229 = 16U;
	volatile int16_t x230 = INT16_MAX;
	int8_t x231 = -1;
	int16_t x232 = -1;

    t57 = ((x229<=(x230==x231))==x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = INT32_MIN;
	static volatile int16_t x234 = INT16_MIN;
	volatile int32_t x236 = 61;
	static volatile int32_t t58 = -31055771;

    t58 = ((x233<=(x234==x235))==x236);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x237 = INT32_MIN;
	volatile int64_t x238 = 8164338182LL;
	int32_t x239 = INT32_MIN;
	int32_t x240 = INT32_MIN;
	volatile int32_t t59 = -24;

    t59 = ((x237<=(x238==x239))==x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x241 = 6U;
	int8_t x242 = INT8_MAX;
	int64_t x243 = INT64_MAX;
	volatile int32_t x244 = INT32_MAX;

    t60 = ((x241<=(x242==x243))==x244);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile uint16_t x245 = 57U;
	int16_t x246 = INT16_MIN;
	int32_t x247 = -1;
	int64_t x248 = -1LL;

    t61 = ((x245<=(x246==x247))==x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int64_t x249 = INT64_MIN;
	int64_t x250 = INT64_MIN;
	int8_t x252 = INT8_MIN;
	volatile int32_t t62 = 90;

    t62 = ((x249<=(x250==x251))==x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = -6;
	uint64_t x254 = 1LLU;
	static uint64_t x255 = 59749228500370LLU;
	volatile int32_t t63 = 857;

    t63 = ((x253<=(x254==x255))==x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x257 = 4252;
	uint8_t x258 = 6U;
	int8_t x259 = -9;
	int16_t x260 = -1;

    t64 = ((x257<=(x258==x259))==x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = INT8_MAX;
	volatile int16_t x262 = 14;
	int8_t x263 = 6;
	volatile int32_t t65 = 245762129;

    t65 = ((x261<=(x262==x263))==x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x265 = 2;
	int32_t x266 = 119574146;
	uint64_t x267 = UINT64_MAX;
	volatile int32_t t66 = 129130;

    t66 = ((x265<=(x266==x267))==x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x270 = INT8_MAX;
	static uint32_t x271 = UINT32_MAX;
	uint16_t x272 = 1358U;
	int32_t t67 = 1547;

    t67 = ((x269<=(x270==x271))==x272);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x273 = UINT32_MAX;
	int32_t x275 = INT32_MIN;
	volatile uint16_t x276 = 130U;

    t68 = ((x273<=(x274==x275))==x276);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x278 = UINT8_MAX;
	int32_t x280 = INT32_MIN;

    t69 = ((x277<=(x278==x279))==x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x281 = INT8_MIN;
	uint64_t x282 = UINT64_MAX;
	volatile uint8_t x284 = 7U;
	int32_t t70 = 47896;

    t70 = ((x281<=(x282==x283))==x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x285 = INT64_MAX;
	static int64_t x286 = 42LL;
	uint32_t x287 = 56325U;
	static int64_t x288 = -2686709106969074LL;
	int32_t t71 = 160724164;

    t71 = ((x285<=(x286==x287))==x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int16_t x289 = INT16_MIN;
	int64_t x291 = -38175624283LL;
	uint16_t x292 = 21151U;

    t72 = ((x289<=(x290==x291))==x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x294 = 994U;
	static int32_t x295 = INT32_MAX;
	static int8_t x296 = -4;
	static int32_t t73 = 0;

    t73 = ((x293<=(x294==x295))==x296);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x297 = INT32_MIN;
	static volatile uint64_t x298 = 431852966718354374LLU;
	static volatile int64_t x299 = 8722416637167831LL;
	uint64_t x300 = 14LLU;

    t74 = ((x297<=(x298==x299))==x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x301 = UINT8_MAX;
	uint32_t x302 = 116U;
	int32_t t75 = 9208;

    t75 = ((x301<=(x302==x303))==x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x305 = 10;
	volatile int64_t x308 = INT64_MIN;
	volatile int32_t t76 = 0;

    t76 = ((x305<=(x306==x307))==x308);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = INT64_MAX;
	volatile uint32_t x310 = 3574U;
	volatile uint8_t x311 = 21U;
	int16_t x312 = INT16_MIN;
	volatile int32_t t77 = -32891;

    t77 = ((x309<=(x310==x311))==x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x313 = -61384352864440LL;
	volatile int8_t x314 = -1;
	uint8_t x316 = UINT8_MAX;
	static volatile int32_t t78 = -327386802;

    t78 = ((x313<=(x314==x315))==x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x317 = INT32_MIN;
	uint64_t x318 = 103LLU;
	volatile int16_t x319 = -20;
	int16_t x320 = INT16_MIN;
	static volatile int32_t t79 = -445366102;

    t79 = ((x317<=(x318==x319))==x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x321 = INT8_MIN;
	volatile uint32_t x323 = 3170587U;
	int32_t x324 = INT32_MAX;
	volatile int32_t t80 = 210276728;

    t80 = ((x321<=(x322==x323))==x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int16_t x325 = INT16_MAX;
	volatile int32_t x326 = INT32_MIN;
	volatile int32_t t81 = 899661;

    t81 = ((x325<=(x326==x327))==x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x329 = 41U;
	uint8_t x330 = UINT8_MAX;
	int8_t x331 = -1;
	int8_t x332 = INT8_MIN;
	static int32_t t82 = 217539856;

    t82 = ((x329<=(x330==x331))==x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x333 = -1LL;
	uint8_t x335 = 9U;

    t83 = ((x333<=(x334==x335))==x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = 133547702LL;
	int64_t x338 = 7037LL;
	int16_t x339 = INT16_MAX;
	int8_t x340 = INT8_MIN;
	volatile int32_t t84 = 3005;

    t84 = ((x337<=(x338==x339))==x340);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x341 = INT16_MIN;
	volatile int16_t x342 = 18;
	uint32_t x343 = 28850404U;
	int32_t t85 = 27;

    t85 = ((x341<=(x342==x343))==x344);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x345 = -96;
	int8_t x346 = INT8_MAX;
	volatile int16_t x347 = INT16_MAX;
	static uint32_t x348 = 130U;

    t86 = ((x345<=(x346==x347))==x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x350 = 3692U;
	static uint64_t x351 = UINT64_MAX;
	int64_t x352 = INT64_MIN;
	int32_t t87 = -1292;

    t87 = ((x349<=(x350==x351))==x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x353 = 6584385257850LLU;
	static uint64_t x354 = 2097234299666174LLU;
	volatile int8_t x355 = 0;
	uint16_t x356 = 12790U;
	volatile int32_t t88 = 10260;

    t88 = ((x353<=(x354==x355))==x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x357 = -3708;
	int8_t x358 = INT8_MIN;
	int16_t x359 = INT16_MIN;
	int16_t x360 = INT16_MAX;
	static volatile int32_t t89 = -7;

    t89 = ((x357<=(x358==x359))==x360);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x362 = -14;
	int32_t x364 = -1;
	volatile int32_t t90 = 91326043;

    t90 = ((x361<=(x362==x363))==x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x365 = INT64_MIN;
	int8_t x366 = 5;
	uint64_t x367 = 5LLU;
	int8_t x368 = -1;
	int32_t t91 = -116;

    t91 = ((x365<=(x366==x367))==x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = -1772;
	int32_t x370 = -1;
	int32_t x371 = INT32_MAX;
	volatile uint16_t x372 = 10954U;
	volatile int32_t t92 = 15;

    t92 = ((x369<=(x370==x371))==x372);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x373 = UINT32_MAX;
	int8_t x374 = -1;
	int64_t x375 = 32473736991113727LL;
	volatile int32_t t93 = 30659019;

    t93 = ((x373<=(x374==x375))==x376);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x377 = INT16_MIN;
	static int16_t x378 = INT16_MIN;
	int16_t x379 = -246;
	int32_t t94 = 171910328;

    t94 = ((x377<=(x378==x379))==x380);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x382 = 1102485327080968LLU;
	int16_t x383 = -175;
	volatile int32_t t95 = 1;

    t95 = ((x381<=(x382==x383))==x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x385 = 126U;
	int32_t x386 = -1;
	int8_t x387 = -11;
	int8_t x388 = INT8_MIN;
	int32_t t96 = 437843675;

    t96 = ((x385<=(x386==x387))==x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x390 = INT16_MIN;
	static int64_t x391 = INT64_MAX;
	static uint16_t x392 = 70U;
	volatile int32_t t97 = -121461;

    t97 = ((x389<=(x390==x391))==x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x393 = -1;
	static int16_t x394 = -129;
	int32_t x395 = 376912524;
	volatile int32_t t98 = -1;

    t98 = ((x393<=(x394==x395))==x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint8_t x399 = 46U;
	int32_t x400 = -1;
	volatile int32_t t99 = -509;

    t99 = ((x397<=(x398==x399))==x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x402 = UINT16_MAX;
	static volatile uint8_t x403 = UINT8_MAX;
	static int64_t x404 = INT64_MAX;
	static volatile int32_t t100 = 419870107;

    t100 = ((x401<=(x402==x403))==x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x405 = 1;
	uint8_t x406 = 32U;
	int32_t x408 = 216;
	volatile int32_t t101 = -1648599;

    t101 = ((x405<=(x406==x407))==x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x410 = 230316931;
	volatile int64_t x411 = -1LL;
	int32_t t102 = -1077;

    t102 = ((x409<=(x410==x411))==x412);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x413 = 0;
	uint64_t x414 = 32LLU;
	static volatile uint16_t x415 = UINT16_MAX;
	int16_t x416 = INT16_MIN;
	volatile int32_t t103 = 176883;

    t103 = ((x413<=(x414==x415))==x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x417 = INT8_MIN;
	int32_t x418 = INT32_MAX;
	int64_t x419 = INT64_MAX;
	int64_t x420 = -1LL;

    t104 = ((x417<=(x418==x419))==x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = -1;
	int16_t x423 = INT16_MIN;
	int64_t x424 = INT64_MIN;

    t105 = ((x421<=(x422==x423))==x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x425 = -8;
	int32_t x427 = INT32_MAX;
	static int64_t x428 = INT64_MIN;

    t106 = ((x425<=(x426==x427))==x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint8_t x429 = 101U;
	static uint16_t x430 = UINT16_MAX;
	uint64_t x431 = 505403337LLU;
	int32_t t107 = 109211375;

    t107 = ((x429<=(x430==x431))==x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x433 = INT16_MIN;
	int8_t x434 = INT8_MIN;
	int64_t x435 = INT64_MIN;
	static int16_t x436 = INT16_MIN;
	int32_t t108 = -243;

    t108 = ((x433<=(x434==x435))==x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = 545453184;
	int32_t x438 = INT32_MAX;
	uint8_t x439 = 0U;
	int8_t x440 = INT8_MIN;
	int32_t t109 = 27254612;

    t109 = ((x437<=(x438==x439))==x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x441 = INT64_MIN;
	int8_t x442 = INT8_MIN;
	volatile int64_t x443 = 7LL;
	volatile int32_t t110 = 5289606;

    t110 = ((x441<=(x442==x443))==x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x445 = UINT64_MAX;
	int32_t x446 = 215;
	int16_t x447 = -2;
	static uint32_t x448 = 29111U;
	int32_t t111 = -6143253;

    t111 = ((x445<=(x446==x447))==x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x450 = -1LL;
	int64_t x451 = -1LL;
	static int16_t x452 = INT16_MAX;
	volatile int32_t t112 = -360492;

    t112 = ((x449<=(x450==x451))==x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = -774634;
	int64_t x454 = 343119843LL;
	uint64_t x456 = UINT64_MAX;

    t113 = ((x453<=(x454==x455))==x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x457 = -1;
	int8_t x458 = INT8_MAX;
	static uint16_t x459 = 144U;
	int32_t x460 = 1;
	int32_t t114 = 231093046;

    t114 = ((x457<=(x458==x459))==x460);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x461 = 3987328490299015LLU;
	volatile uint64_t x462 = UINT64_MAX;
	volatile uint32_t x463 = 1145876366U;
	volatile uint16_t x464 = 201U;
	volatile int32_t t115 = 2065807;

    t115 = ((x461<=(x462==x463))==x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x466 = 703536LLU;
	uint64_t x468 = 76LLU;
	static volatile int32_t t116 = -13;

    t116 = ((x465<=(x466==x467))==x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x470 = -1LL;
	int8_t x471 = INT8_MAX;
	static int32_t x472 = INT32_MAX;
	volatile int32_t t117 = 1;

    t117 = ((x469<=(x470==x471))==x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x473 = 8324581U;
	uint64_t x474 = 910491612082414LLU;
	int8_t x475 = INT8_MIN;
	static int64_t x476 = -71114LL;
	int32_t t118 = -12393;

    t118 = ((x473<=(x474==x475))==x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x478 = 1U;
	int8_t x479 = INT8_MAX;
	volatile uint32_t x480 = 6187U;
	int32_t t119 = -49866562;

    t119 = ((x477<=(x478==x479))==x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint32_t x481 = UINT32_MAX;
	int8_t x483 = 1;
	int16_t x484 = INT16_MIN;
	volatile int32_t t120 = -19383;

    t120 = ((x481<=(x482==x483))==x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile uint8_t x485 = UINT8_MAX;
	static uint32_t x486 = 52U;
	uint16_t x487 = 0U;
	int8_t x488 = 3;

    t121 = ((x485<=(x486==x487))==x488);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = INT32_MAX;
	int16_t x490 = -565;
	uint32_t x491 = UINT32_MAX;
	int8_t x492 = INT8_MIN;

    t122 = ((x489<=(x490==x491))==x492);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x493 = 7U;
	volatile uint64_t x494 = UINT64_MAX;
	int8_t x495 = -16;

    t123 = ((x493<=(x494==x495))==x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = -695;
	int32_t x498 = INT32_MIN;
	static volatile int16_t x499 = INT16_MIN;
	int8_t x500 = 1;
	int32_t t124 = -3629;

    t124 = ((x497<=(x498==x499))==x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = INT32_MIN;
	int8_t x502 = -7;
	int16_t x503 = INT16_MIN;
	volatile int64_t x504 = -1814300885LL;
	volatile int32_t t125 = 645;

    t125 = ((x501<=(x502==x503))==x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x505 = INT32_MAX;
	uint16_t x506 = UINT16_MAX;
	int64_t x507 = INT64_MIN;

    t126 = ((x505<=(x506==x507))==x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x509 = UINT64_MAX;
	uint32_t x510 = 58238U;
	int32_t x511 = INT32_MIN;
	int16_t x512 = INT16_MAX;

    t127 = ((x509<=(x510==x511))==x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile uint64_t x513 = 75880124529767510LLU;
	int32_t x514 = INT32_MIN;
	int32_t x515 = INT32_MIN;
	uint16_t x516 = 58U;
	volatile int32_t t128 = -17609465;

    t128 = ((x513<=(x514==x515))==x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x517 = -1;
	int16_t x518 = INT16_MAX;
	uint64_t x519 = 26637481502LLU;
	volatile uint64_t x520 = UINT64_MAX;

    t129 = ((x517<=(x518==x519))==x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x521 = 13129U;
	int32_t x522 = INT32_MIN;
	static volatile int8_t x524 = -1;
	volatile int32_t t130 = -549766;

    t130 = ((x521<=(x522==x523))==x524);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x525 = 383U;
	int64_t x526 = INT64_MIN;
	static uint32_t x527 = 1U;
	volatile int32_t x528 = 11649993;
	volatile int32_t t131 = 58329;

    t131 = ((x525<=(x526==x527))==x528);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x529 = 3LL;
	int16_t x530 = INT16_MIN;
	int8_t x531 = INT8_MIN;
	volatile int32_t x532 = INT32_MAX;
	static int32_t t132 = -1751857;

    t132 = ((x529<=(x530==x531))==x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x533 = INT64_MIN;
	uint32_t x535 = 14376U;
	volatile int8_t x536 = INT8_MIN;
	volatile int32_t t133 = -21569;

    t133 = ((x533<=(x534==x535))==x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x537 = UINT64_MAX;
	volatile int64_t x539 = 163326495LL;
	uint16_t x540 = 0U;
	volatile int32_t t134 = 32215619;

    t134 = ((x537<=(x538==x539))==x540);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x541 = INT8_MAX;
	uint32_t x542 = UINT32_MAX;
	int64_t x543 = -835715840248LL;
	uint16_t x544 = UINT16_MAX;
	static volatile int32_t t135 = 12939;

    t135 = ((x541<=(x542==x543))==x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x545 = 2U;
	int16_t x548 = 4;
	static volatile int32_t t136 = 1511;

    t136 = ((x545<=(x546==x547))==x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = INT8_MIN;
	static int16_t x550 = INT16_MIN;
	volatile int32_t x552 = INT32_MAX;
	volatile int32_t t137 = -17;

    t137 = ((x549<=(x550==x551))==x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x553 = 4098;
	volatile int16_t x554 = 3;
	int8_t x555 = -61;
	int8_t x556 = -1;
	static volatile int32_t t138 = -7;

    t138 = ((x553<=(x554==x555))==x556);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x557 = -1;
	static volatile uint16_t x558 = UINT16_MAX;
	int32_t x559 = INT32_MIN;
	int32_t x560 = -1;
	int32_t t139 = 487178627;

    t139 = ((x557<=(x558==x559))==x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x561 = 5782244LL;
	int64_t x562 = INT64_MAX;
	uint64_t x563 = 1016LLU;
	static volatile int64_t x564 = 55028292971116697LL;

    t140 = ((x561<=(x562==x563))==x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x565 = 76LLU;
	volatile int16_t x566 = -1;
	uint32_t x567 = 10852426U;
	static int64_t x568 = -1LL;
	volatile int32_t t141 = 378;

    t141 = ((x565<=(x566==x567))==x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x569 = 1U;
	int32_t x571 = INT32_MIN;
	int32_t x572 = INT32_MIN;
	volatile int32_t t142 = -312853101;

    t142 = ((x569<=(x570==x571))==x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x573 = -789;
	uint32_t x574 = 955U;
	int8_t x576 = INT8_MAX;
	volatile int32_t t143 = 13664383;

    t143 = ((x573<=(x574==x575))==x576);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = 176;
	static volatile int32_t x578 = INT32_MIN;
	int32_t x579 = 36084622;
	uint32_t x580 = 242U;
	volatile int32_t t144 = 0;

    t144 = ((x577<=(x578==x579))==x580);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x581 = INT8_MIN;
	volatile int32_t t145 = 1074;

    t145 = ((x581<=(x582==x583))==x584);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x585 = INT16_MAX;
	uint64_t x586 = 241203924898LLU;
	uint8_t x587 = 0U;
	uint32_t x588 = 534234U;
	volatile int32_t t146 = 4520;

    t146 = ((x585<=(x586==x587))==x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x590 = 60392925LL;
	int64_t x591 = 281789263977776LL;
	volatile int32_t x592 = -1;
	volatile int32_t t147 = -37;

    t147 = ((x589<=(x590==x591))==x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = 26;
	int32_t x594 = 32118616;
	int32_t x595 = INT32_MAX;
	uint8_t x596 = UINT8_MAX;

    t148 = ((x593<=(x594==x595))==x596);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = -1;
	uint32_t x598 = UINT32_MAX;
	static int8_t x599 = -1;
	uint64_t x600 = UINT64_MAX;

    t149 = ((x597<=(x598==x599))==x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x601 = INT64_MAX;
	uint16_t x602 = UINT16_MAX;
	int16_t x604 = 28;
	volatile int32_t t150 = 31974602;

    t150 = ((x601<=(x602==x603))==x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x605 = INT64_MAX;
	static uint64_t x606 = 186480521503LLU;
	volatile uint64_t x607 = 224875336208913208LLU;
	volatile int32_t t151 = -892;

    t151 = ((x605<=(x606==x607))==x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x609 = UINT8_MAX;
	static uint8_t x611 = 11U;
	uint8_t x612 = 1U;
	volatile int32_t t152 = 5;

    t152 = ((x609<=(x610==x611))==x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint16_t x613 = 39U;
	uint64_t x614 = 60267413691LLU;
	uint32_t x615 = 105844U;
	static volatile int8_t x616 = 20;
	static volatile int32_t t153 = 7416;

    t153 = ((x613<=(x614==x615))==x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x617 = INT8_MIN;
	uint8_t x619 = UINT8_MAX;
	volatile int8_t x620 = INT8_MIN;
	int32_t t154 = 2558;

    t154 = ((x617<=(x618==x619))==x620);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile uint64_t x621 = 108683901426631LLU;
	uint16_t x622 = 1332U;
	static int64_t x623 = INT64_MIN;
	int32_t x624 = INT32_MIN;
	static int32_t t155 = -535;

    t155 = ((x621<=(x622==x623))==x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = -56LL;
	int8_t x626 = -1;
	volatile int8_t x627 = -14;
	int32_t x628 = 13929;
	int32_t t156 = -277605005;

    t156 = ((x625<=(x626==x627))==x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x629 = -1;
	volatile int32_t x630 = 10009;
	int16_t x631 = INT16_MIN;
	volatile int32_t t157 = -7832728;

    t157 = ((x629<=(x630==x631))==x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = 1;
	int64_t x634 = -682055646LL;
	volatile uint32_t x635 = UINT32_MAX;
	int16_t x636 = 0;
	static volatile int32_t t158 = -14;

    t158 = ((x633<=(x634==x635))==x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x637 = UINT32_MAX;
	static volatile uint32_t x638 = UINT32_MAX;
	volatile uint64_t x639 = 21002463827428751LLU;
	static int8_t x640 = INT8_MIN;
	static volatile int32_t t159 = -313054;

    t159 = ((x637<=(x638==x639))==x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x642 = INT64_MIN;
	volatile int32_t x643 = -1;
	int32_t t160 = -1180;

    t160 = ((x641<=(x642==x643))==x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint32_t x645 = UINT32_MAX;
	int32_t t161 = 55382221;

    t161 = ((x645<=(x646==x647))==x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = -3799LL;
	int8_t x650 = -16;
	static int32_t x651 = INT32_MAX;
	static uint8_t x652 = UINT8_MAX;
	static int32_t t162 = 2263614;

    t162 = ((x649<=(x650==x651))==x652);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint8_t x653 = 1U;
	uint32_t x654 = UINT32_MAX;
	volatile int64_t x655 = INT64_MIN;
	volatile uint16_t x656 = UINT16_MAX;
	volatile int32_t t163 = 16123;

    t163 = ((x653<=(x654==x655))==x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = INT64_MAX;
	int8_t x659 = INT8_MIN;
	int16_t x660 = INT16_MIN;

    t164 = ((x657<=(x658==x659))==x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x661 = -1;
	int32_t x662 = INT32_MIN;
	int16_t x664 = INT16_MAX;
	volatile int32_t t165 = -1639108;

    t165 = ((x661<=(x662==x663))==x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = INT8_MAX;
	int32_t x666 = INT32_MAX;
	int64_t x667 = 1LL;
	int32_t t166 = -22873;

    t166 = ((x665<=(x666==x667))==x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x669 = -1;
	int64_t x672 = INT64_MAX;
	static int32_t t167 = -995;

    t167 = ((x669<=(x670==x671))==x672);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x673 = INT32_MIN;
	uint64_t x675 = 1286627594LLU;
	int32_t t168 = 2;

    t168 = ((x673<=(x674==x675))==x676);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x677 = -10;
	static int8_t x678 = INT8_MIN;
	int32_t x679 = -1;
	uint8_t x680 = 6U;
	volatile int32_t t169 = -729141;

    t169 = ((x677<=(x678==x679))==x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = INT32_MAX;
	int8_t x682 = 0;
	uint16_t x683 = 4U;
	volatile int64_t x684 = INT64_MIN;
	volatile int32_t t170 = -1;

    t170 = ((x681<=(x682==x683))==x684);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x685 = 34U;
	int64_t x686 = INT64_MIN;
	volatile uint64_t x687 = 226114002LLU;
	int64_t x688 = 3LL;
	volatile int32_t t171 = 88218465;

    t171 = ((x685<=(x686==x687))==x688);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int8_t x689 = INT8_MIN;
	int64_t x690 = -1LL;
	int64_t x691 = -343LL;
	int32_t x692 = INT32_MIN;
	volatile int32_t t172 = -6875;

    t172 = ((x689<=(x690==x691))==x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = INT8_MIN;
	int8_t x694 = INT8_MIN;

    t173 = ((x693<=(x694==x695))==x696);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x697 = UINT64_MAX;
	int8_t x699 = -26;
	int16_t x700 = 199;
	static int32_t t174 = -169;

    t174 = ((x697<=(x698==x699))==x700);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile uint32_t x701 = UINT32_MAX;
	static int16_t x702 = INT16_MIN;
	static int64_t x703 = 478780045LL;
	static int8_t x704 = INT8_MIN;

    t175 = ((x701<=(x702==x703))==x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x705 = 0U;
	volatile int32_t x707 = INT32_MIN;
	volatile uint8_t x708 = 1U;
	static int32_t t176 = -5412744;

    t176 = ((x705<=(x706==x707))==x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x709 = -1311;
	uint32_t x711 = 2307799U;
	static volatile int16_t x712 = INT16_MIN;
	static volatile int32_t t177 = 8136;

    t177 = ((x709<=(x710==x711))==x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x713 = INT64_MAX;
	int8_t x714 = -1;
	static int32_t x715 = -1;
	int8_t x716 = INT8_MIN;
	static volatile int32_t t178 = 4046;

    t178 = ((x713<=(x714==x715))==x716);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x717 = INT8_MAX;
	static uint64_t x720 = 58764080482419LLU;
	volatile int32_t t179 = 447803;

    t179 = ((x717<=(x718==x719))==x720);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x721 = INT64_MIN;
	int8_t x722 = -1;
	uint8_t x723 = UINT8_MAX;
	uint32_t x724 = 284324394U;

    t180 = ((x721<=(x722==x723))==x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x725 = INT32_MIN;
	uint64_t x726 = 25970435667075913LLU;
	static int16_t x727 = INT16_MIN;
	volatile int16_t x728 = -1;
	int32_t t181 = 115342145;

    t181 = ((x725<=(x726==x727))==x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x729 = INT16_MIN;
	int8_t x730 = INT8_MAX;
	int16_t x731 = -1205;
	static int16_t x732 = -2717;
	volatile int32_t t182 = 14;

    t182 = ((x729<=(x730==x731))==x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x733 = 187423053066759LLU;
	uint64_t x734 = 925622534LLU;
	static int64_t x735 = INT64_MIN;
	int16_t x736 = INT16_MAX;
	volatile int32_t t183 = 1;

    t183 = ((x733<=(x734==x735))==x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = -1;
	static int32_t x738 = 461;
	int64_t x739 = INT64_MIN;
	volatile int32_t t184 = 72;

    t184 = ((x737<=(x738==x739))==x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x741 = INT8_MIN;
	int32_t x742 = 284;
	static uint32_t x743 = UINT32_MAX;
	volatile int8_t x744 = -1;
	volatile int32_t t185 = -4734446;

    t185 = ((x741<=(x742==x743))==x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint32_t x745 = UINT32_MAX;
	int64_t x746 = -1LL;
	uint32_t x747 = UINT32_MAX;
	uint32_t x748 = 0U;
	static volatile int32_t t186 = -2054;

    t186 = ((x745<=(x746==x747))==x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint32_t x749 = 731U;
	int8_t x750 = -3;
	volatile uint16_t x751 = 1U;
	int32_t x752 = 1;
	int32_t t187 = -99031868;

    t187 = ((x749<=(x750==x751))==x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = INT8_MAX;
	uint16_t x754 = UINT16_MAX;
	int16_t x755 = -967;
	volatile int32_t t188 = 86;

    t188 = ((x753<=(x754==x755))==x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = INT64_MIN;
	static uint32_t x758 = UINT32_MAX;
	uint64_t x759 = 118233886643LLU;
	int64_t x760 = -1LL;
	volatile int32_t t189 = 8346;

    t189 = ((x757<=(x758==x759))==x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x761 = -11556LL;
	static volatile uint64_t x762 = 17753521966673LLU;
	uint64_t x763 = UINT64_MAX;
	static uint32_t x764 = 11183213U;
	int32_t t190 = -7307356;

    t190 = ((x761<=(x762==x763))==x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x765 = 0;
	volatile int32_t x766 = -1;
	volatile uint64_t x767 = 1960686989LLU;
	volatile int32_t x768 = -108524;
	static int32_t t191 = 679539376;

    t191 = ((x765<=(x766==x767))==x768);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = -1LL;
	volatile uint8_t x770 = 104U;
	int8_t x771 = -1;
	uint32_t x772 = UINT32_MAX;

    t192 = ((x769<=(x770==x771))==x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x773 = INT8_MAX;
	static volatile int32_t x774 = 15360615;
	int32_t x776 = -400462317;
	static volatile int32_t t193 = 32430916;

    t193 = ((x773<=(x774==x775))==x776);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x778 = INT16_MIN;
	int64_t x779 = -14574657LL;
	static uint32_t x780 = 10U;
	int32_t t194 = -8940460;

    t194 = ((x777<=(x778==x779))==x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x781 = INT16_MAX;
	int8_t x782 = 2;
	int32_t x783 = INT32_MIN;
	int32_t t195 = 2557;

    t195 = ((x781<=(x782==x783))==x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = -5LL;
	volatile int8_t x786 = 0;
	uint8_t x787 = 53U;
	volatile int32_t x788 = 201;
	int32_t t196 = 89232299;

    t196 = ((x785<=(x786==x787))==x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x789 = INT32_MIN;
	volatile int8_t x790 = -1;
	int8_t x791 = INT8_MIN;
	int32_t x792 = INT32_MIN;
	volatile int32_t t197 = 15314;

    t197 = ((x789<=(x790==x791))==x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x793 = 15878;
	uint8_t x794 = 0U;
	uint16_t x795 = UINT16_MAX;
	volatile int64_t x796 = INT64_MAX;
	volatile int32_t t198 = 110;

    t198 = ((x793<=(x794==x795))==x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x797 = INT32_MIN;
	volatile int16_t x798 = INT16_MIN;
	uint16_t x800 = 5U;
	volatile int32_t t199 = 4349326;

    t199 = ((x797<=(x798==x799))==x800);

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

