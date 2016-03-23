
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
uint32_t x3 = 1605996U;
int32_t x4 = -8026401;
int16_t x5 = INT16_MAX;
int16_t x8 = INT16_MIN;
int16_t x10 = INT16_MIN;
int16_t x19 = -4;
int32_t t5 = 8644;
static int32_t x25 = INT32_MIN;
int16_t x28 = 232;
static volatile int32_t t6 = -59270;
int8_t x30 = -1;
static volatile int64_t x34 = INT64_MIN;
uint16_t x38 = UINT16_MAX;
uint32_t x42 = UINT32_MAX;
int16_t x45 = INT16_MIN;
volatile uint8_t x47 = 119U;
uint16_t x49 = UINT16_MAX;
volatile int16_t x53 = 663;
volatile int8_t x57 = INT8_MIN;
int32_t x65 = -2;
volatile int32_t t16 = 9548460;
int32_t x69 = INT32_MAX;
int32_t x74 = INT32_MAX;
volatile int16_t x78 = 7379;
int8_t x80 = INT8_MIN;
static uint64_t x81 = 883LLU;
uint64_t t20 = 181LLU;
int16_t x88 = 0;
int64_t x89 = -43134LL;
uint8_t x93 = 7U;
int16_t x94 = 2462;
int16_t x95 = -1;
uint8_t x98 = 2U;
int8_t x100 = INT8_MIN;
int32_t x103 = INT32_MAX;
int8_t x108 = INT8_MIN;
int16_t x109 = -1;
int8_t x111 = INT8_MAX;
uint16_t x114 = UINT16_MAX;
volatile uint64_t x121 = 24708109852LLU;
uint64_t x126 = UINT64_MAX;
static int32_t x128 = -57485;
int8_t x130 = INT8_MAX;
static volatile int8_t x131 = INT8_MIN;
uint32_t x132 = UINT32_MAX;
volatile int8_t x139 = INT8_MIN;
uint32_t x143 = 2640962U;
int16_t x146 = -1;
volatile int16_t x147 = 74;
volatile int64_t t37 = 3953891997LL;
volatile int16_t x153 = INT16_MIN;
int32_t t38 = 4445;
int64_t x157 = INT64_MAX;
volatile int64_t t39 = INT64_MAX;
int8_t x161 = INT8_MAX;
int8_t x162 = INT8_MAX;
volatile uint16_t x170 = UINT16_MAX;
int32_t x174 = -1;
uint32_t x177 = UINT32_MAX;
static int64_t x179 = INT64_MAX;
static int16_t x184 = 1;
int16_t x186 = -730;
static volatile int64_t x187 = -1LL;
int64_t x191 = INT64_MAX;
uint64_t x193 = 283856687708587809LLU;
volatile int32_t x195 = INT32_MIN;
uint32_t x196 = 89340U;
int64_t x197 = 2LL;
volatile int64_t t49 = 5830770535854892LL;
int32_t x202 = INT32_MIN;
uint32_t x205 = UINT32_MAX;
uint8_t x207 = 12U;
volatile uint16_t x211 = 3U;
volatile int64_t x214 = INT64_MIN;
static int32_t t53 = 7471026;
int8_t x219 = -1;
volatile uint64_t x224 = UINT64_MAX;
int32_t t55 = 421419290;
static int8_t x227 = -1;
volatile uint8_t x232 = 8U;
int16_t x236 = -1;
int64_t t58 = 24LL;
uint64_t x242 = 26580317LLU;
int32_t x246 = INT32_MIN;
int32_t x249 = 221625;
int8_t x250 = INT8_MAX;
int32_t x254 = -1;
static volatile int32_t t63 = 8;
int64_t x268 = INT64_MIN;
static int64_t t67 = INT64_MAX;
volatile uint32_t x275 = 34576764U;
uint64_t x276 = 245LLU;
int32_t x280 = 1;
static int32_t t69 = 286624;
uint32_t x284 = 501773U;
int16_t x291 = INT16_MIN;
uint16_t x296 = 1U;
volatile int64_t t74 = 4201470179535252LL;
volatile int8_t x303 = 0;
int64_t x305 = -1LL;
static int64_t x312 = 12127890283488745LL;
volatile uint8_t x319 = UINT8_MAX;
uint64_t x320 = UINT64_MAX;
volatile uint32_t x323 = UINT32_MAX;
uint32_t x327 = 617078U;
uint8_t x328 = 6U;
int32_t t81 = -1021;
static uint32_t x332 = 6U;
uint16_t x333 = 23U;
volatile int32_t x334 = INT32_MIN;
uint32_t x335 = 15724270U;
int8_t x337 = -1;
volatile int8_t x345 = INT8_MAX;
int8_t x347 = INT8_MIN;
int32_t t86 = -3;
volatile uint64_t t87 = 1411899LLU;
uint16_t x358 = 391U;
int64_t x360 = 20404903790090990LL;
volatile int32_t t89 = -2;
int32_t t91 = -60596503;
int8_t x375 = 19;
int32_t x376 = -1;
static uint8_t x377 = 45U;
uint8_t x379 = UINT8_MAX;
int8_t x381 = 0;
int64_t x383 = INT64_MIN;
int8_t x392 = -3;
int32_t x394 = 718892;
int8_t x395 = -1;
int32_t x408 = INT32_MIN;
uint16_t x412 = 307U;
volatile int32_t t102 = -2;
int8_t x416 = INT8_MIN;
int64_t x427 = -1LL;
uint16_t x431 = 163U;
uint8_t x443 = UINT8_MAX;
int32_t t110 = INT32_MAX;
volatile int64_t t111 = INT64_MAX;
static int32_t x450 = 8;
int64_t x453 = 16010120LL;
int32_t x455 = INT32_MIN;
static int32_t t114 = -277994200;
static volatile int8_t x468 = INT8_MIN;
int16_t x474 = INT16_MAX;
int16_t x480 = INT16_MIN;
volatile int64_t t119 = 235639408650LL;
volatile int16_t x487 = INT16_MIN;
static volatile uint64_t t124 = 117475957967LLU;
int64_t x501 = INT64_MAX;
static int16_t x502 = INT16_MIN;
int16_t x513 = -1;
static uint8_t x514 = UINT8_MAX;
uint16_t x520 = UINT16_MAX;
int64_t x521 = INT64_MAX;
int32_t x525 = INT32_MIN;
volatile int32_t x526 = INT32_MIN;
uint64_t x528 = UINT64_MAX;
static uint32_t x544 = 12U;
int32_t x546 = -1;
uint16_t x559 = 0U;
static uint8_t x569 = UINT8_MAX;
static int64_t x571 = -1LL;
uint64_t x582 = UINT64_MAX;
int16_t x584 = INT16_MIN;
volatile uint32_t x585 = 1997U;
volatile uint16_t x588 = 27054U;
int32_t t147 = -3334;
int8_t x601 = -1;
uint8_t x603 = 15U;
int64_t x606 = INT64_MIN;
volatile int32_t t151 = -657846970;
int32_t t152 = 6;
int8_t x614 = -1;
int64_t x619 = -1LL;
int8_t x623 = INT8_MAX;
static int64_t x632 = INT64_MIN;
static int8_t x634 = -1;
int32_t t158 = INT32_MAX;
uint8_t x639 = 6U;
volatile int64_t t159 = INT64_MAX;
int16_t x643 = INT16_MIN;
int64_t x645 = -491686329854LL;
int64_t x647 = INT64_MAX;
int32_t t162 = -7448266;
static int8_t x656 = INT8_MAX;
static uint16_t x659 = UINT16_MAX;
int32_t t164 = -340469;
uint64_t x661 = 1LLU;
int64_t x663 = 1695381740017LL;
static int16_t x665 = 50;
int8_t x666 = -1;
int32_t x668 = -63270076;
int8_t x677 = -3;
volatile int64_t x686 = INT64_MIN;
static uint8_t x691 = UINT8_MAX;
uint32_t x692 = 1441092603U;
uint64_t x693 = 13442890LLU;
int16_t x701 = INT16_MIN;
int8_t x709 = -7;
int64_t x710 = INT64_MIN;
volatile int32_t t177 = 0;
int32_t x715 = INT32_MIN;
uint64_t x716 = 1421325301094800LLU;
volatile uint64_t t178 = UINT64_MAX;
uint64_t x718 = 303174115925857LLU;
static volatile uint32_t t180 = UINT32_MAX;
volatile int64_t x731 = INT64_MAX;
static int32_t t182 = -1473013;
int32_t t183 = 22241;
int8_t x737 = -1;
static uint16_t x746 = UINT16_MAX;
int64_t x752 = INT64_MIN;
static uint16_t x753 = 90U;
int8_t x757 = -47;
int32_t t190 = 548;
volatile int8_t x767 = -1;
int8_t x771 = 9;
uint64_t x773 = UINT64_MAX;
static uint8_t x776 = 0U;
uint64_t t193 = UINT64_MAX;
static int32_t x778 = INT32_MAX;
static int64_t x788 = INT64_MIN;
volatile int64_t t197 = 620148LL;
uint16_t x799 = UINT16_MAX;
volatile int32_t x800 = 62;


void f0(void) {
    	int64_t x1 = INT64_MIN;
	volatile int64_t t0 = 1295LL;

    t0 = (x1|(x2!=(x3<=x4)));

    if (t0 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x6 = UINT32_MAX;
	int16_t x7 = -69;
	int32_t t1 = 16875;

    t1 = (x5|(x6!=(x7<=x8)));

    if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x9 = INT32_MIN;
	static uint64_t x11 = 274303790917LLU;
	static volatile int16_t x12 = INT16_MIN;
	volatile int32_t t2 = -545792656;

    t2 = (x9|(x10!=(x11<=x12)));

    if (t2 != -2147483647) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = -1;
	int16_t x14 = INT16_MIN;
	int8_t x15 = INT8_MAX;
	uint32_t x16 = UINT32_MAX;
	volatile int32_t t3 = -5;

    t3 = (x13|(x14!=(x15<=x16)));

    if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = 694U;
	volatile uint16_t x18 = 7041U;
	int32_t x20 = INT32_MAX;
	volatile int32_t t4 = 0;

    t4 = (x17|(x18!=(x19<=x20)));

    if (t4 != 695) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = -1;
	uint16_t x22 = UINT16_MAX;
	int64_t x23 = -68LL;
	static int8_t x24 = 2;

    t5 = (x21|(x22!=(x23<=x24)));

    if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x26 = 240U;
	int8_t x27 = INT8_MIN;

    t6 = (x25|(x26!=(x27<=x28)));

    if (t6 != -2147483647) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = 2;
	static int32_t x31 = -1;
	int16_t x32 = INT16_MIN;
	int32_t t7 = -32423677;

    t7 = (x29|(x30!=(x31<=x32)));

    if (t7 != 3) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint8_t x33 = 10U;
	static uint16_t x35 = 58U;
	int16_t x36 = 0;
	int32_t t8 = 512726620;

    t8 = (x33|(x34!=(x35<=x36)));

    if (t8 != 11) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = 5938875668419676LLU;
	int32_t x39 = INT32_MIN;
	int64_t x40 = INT64_MIN;
	uint64_t t9 = 406687147905LLU;

    t9 = (x37|(x38!=(x39<=x40)));

    if (t9 != 5938875668419677LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = -28;
	uint64_t x43 = UINT64_MAX;
	static volatile int8_t x44 = INT8_MAX;
	static int32_t t10 = 681;

    t10 = (x41|(x42!=(x43<=x44)));

    if (t10 != -27) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x46 = 17U;
	volatile int64_t x48 = 1232703004318LL;
	int32_t t11 = 0;

    t11 = (x45|(x46!=(x47<=x48)));

    if (t11 != -32767) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x50 = INT32_MAX;
	int16_t x51 = 230;
	int64_t x52 = -4574464165835844321LL;
	int32_t t12 = -177882;

    t12 = (x49|(x50!=(x51<=x52)));

    if (t12 != 65535) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x54 = INT32_MAX;
	int8_t x55 = -1;
	uint8_t x56 = 1U;
	volatile int32_t t13 = 335209533;

    t13 = (x53|(x54!=(x55<=x56)));

    if (t13 != 663) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x58 = INT32_MIN;
	int64_t x59 = 266695LL;
	uint32_t x60 = UINT32_MAX;
	volatile int32_t t14 = 1301;

    t14 = (x57|(x58!=(x59<=x60)));

    if (t14 != -127) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x61 = INT64_MAX;
	uint32_t x62 = 9U;
	static uint8_t x63 = UINT8_MAX;
	uint8_t x64 = 0U;
	int64_t t15 = INT64_MAX;

    t15 = (x61|(x62!=(x63<=x64)));

    if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint64_t x66 = UINT64_MAX;
	static uint8_t x67 = 7U;
	int64_t x68 = INT64_MAX;

    t16 = (x65|(x66!=(x67<=x68)));

    if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x70 = -1;
	uint16_t x71 = UINT16_MAX;
	volatile int64_t x72 = INT64_MIN;
	volatile int32_t t17 = INT32_MAX;

    t17 = (x69|(x70!=(x71<=x72)));

    if (t17 != INT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = 119;
	int8_t x75 = 10;
	uint8_t x76 = UINT8_MAX;
	volatile int32_t t18 = -1870;

    t18 = (x73|(x74!=(x75<=x76)));

    if (t18 != 119) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x77 = UINT8_MAX;
	volatile int16_t x79 = -370;
	int32_t t19 = 228;

    t19 = (x77|(x78!=(x79<=x80)));

    if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x82 = 1705;
	static int8_t x83 = 9;
	uint16_t x84 = UINT16_MAX;

    t20 = (x81|(x82!=(x83<=x84)));

    if (t20 != 883LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x85 = -1LL;
	volatile int16_t x86 = 21;
	volatile uint16_t x87 = 0U;
	int64_t t21 = 43LL;

    t21 = (x85|(x86!=(x87<=x88)));

    if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x90 = INT8_MIN;
	volatile uint8_t x91 = UINT8_MAX;
	volatile int8_t x92 = INT8_MAX;
	volatile int64_t t22 = 1131LL;

    t22 = (x89|(x90!=(x91<=x92)));

    if (t22 != -43133LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x96 = 1;
	volatile int32_t t23 = -120;

    t23 = (x93|(x94!=(x95<=x96)));

    if (t23 != 7) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = INT32_MIN;
	static int16_t x99 = INT16_MAX;
	int32_t t24 = -506;

    t24 = (x97|(x98!=(x99<=x100)));

    if (t24 != -2147483647) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint8_t x101 = UINT8_MAX;
	int64_t x102 = INT64_MIN;
	uint32_t x104 = 76060876U;
	static volatile int32_t t25 = 1812;

    t25 = (x101|(x102!=(x103<=x104)));

    if (t25 != 255) { NG(); } else { ; }
	
}

void f26(void) {
    	static int16_t x105 = -223;
	uint64_t x106 = UINT64_MAX;
	int32_t x107 = INT32_MAX;
	int32_t t26 = -19223;

    t26 = (x105|(x106!=(x107<=x108)));

    if (t26 != -223) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x110 = INT64_MIN;
	uint32_t x112 = 1U;
	static volatile int32_t t27 = 54871877;

    t27 = (x109|(x110!=(x111<=x112)));

    if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x113 = 11U;
	volatile int64_t x115 = INT64_MAX;
	static int16_t x116 = INT16_MAX;
	volatile int32_t t28 = -1;

    t28 = (x113|(x114!=(x115<=x116)));

    if (t28 != 11) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = INT32_MIN;
	volatile int8_t x118 = -1;
	static int64_t x119 = INT64_MAX;
	int16_t x120 = INT16_MIN;
	volatile int32_t t29 = 459371;

    t29 = (x117|(x118!=(x119<=x120)));

    if (t29 != -2147483647) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x122 = INT16_MIN;
	static int16_t x123 = 1;
	volatile uint32_t x124 = UINT32_MAX;
	static uint64_t t30 = 163897LLU;

    t30 = (x121|(x122!=(x123<=x124)));

    if (t30 != 24708109853LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = -1;
	uint16_t x127 = 111U;
	int32_t t31 = 517032808;

    t31 = (x125|(x126!=(x127<=x128)));

    if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x129 = INT64_MAX;
	int64_t t32 = INT64_MAX;

    t32 = (x129|(x130!=(x131<=x132)));

    if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x133 = 56U;
	int32_t x134 = INT32_MAX;
	static uint16_t x135 = 11336U;
	static int64_t x136 = INT64_MIN;
	int32_t t33 = 3305;

    t33 = (x133|(x134!=(x135<=x136)));

    if (t33 != 57) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = -25;
	int64_t x138 = INT64_MAX;
	uint64_t x140 = UINT64_MAX;
	static volatile int32_t t34 = -162;

    t34 = (x137|(x138!=(x139<=x140)));

    if (t34 != -25) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = INT16_MIN;
	int64_t x142 = INT64_MIN;
	static int16_t x144 = INT16_MAX;
	volatile int32_t t35 = 1204;

    t35 = (x141|(x142!=(x143<=x144)));

    if (t35 != -32767) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint8_t x145 = 16U;
	int64_t x148 = INT64_MAX;
	int32_t t36 = 13;

    t36 = (x145|(x146!=(x147<=x148)));

    if (t36 != 17) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = INT64_MIN;
	int8_t x150 = INT8_MIN;
	static volatile int8_t x151 = INT8_MIN;
	int8_t x152 = INT8_MIN;

    t37 = (x149|(x150!=(x151<=x152)));

    if (t37 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x154 = 60986LLU;
	uint8_t x155 = 1U;
	uint64_t x156 = 1181890675723LLU;

    t38 = (x153|(x154!=(x155<=x156)));

    if (t38 != -32767) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x158 = INT32_MAX;
	static int32_t x159 = INT32_MIN;
	int16_t x160 = INT16_MAX;

    t39 = (x157|(x158!=(x159<=x160)));

    if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x163 = 1;
	volatile int8_t x164 = 0;
	int32_t t40 = 723807;

    t40 = (x161|(x162!=(x163<=x164)));

    if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = INT8_MAX;
	int32_t x166 = INT32_MIN;
	uint32_t x167 = 264U;
	static uint64_t x168 = UINT64_MAX;
	int32_t t41 = -2796284;

    t41 = (x165|(x166!=(x167<=x168)));

    if (t41 != 127) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x169 = INT8_MIN;
	static volatile int8_t x171 = INT8_MIN;
	volatile int16_t x172 = -1;
	int32_t t42 = -405918097;

    t42 = (x169|(x170!=(x171<=x172)));

    if (t42 != -127) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = INT64_MIN;
	volatile uint8_t x175 = UINT8_MAX;
	uint64_t x176 = UINT64_MAX;
	static volatile int64_t t43 = -169521LL;

    t43 = (x173|(x174!=(x175<=x176)));

    if (t43 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x178 = INT8_MAX;
	uint32_t x180 = 4U;
	uint32_t t44 = UINT32_MAX;

    t44 = (x177|(x178!=(x179<=x180)));

    if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x181 = 28U;
	int64_t x182 = INT64_MIN;
	static int64_t x183 = -1LL;
	static volatile int32_t t45 = -883529552;

    t45 = (x181|(x182!=(x183<=x184)));

    if (t45 != 29) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x185 = UINT16_MAX;
	uint8_t x188 = UINT8_MAX;
	int32_t t46 = -894346178;

    t46 = (x185|(x186!=(x187<=x188)));

    if (t46 != 65535) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x189 = INT64_MIN;
	volatile uint32_t x190 = UINT32_MAX;
	static uint8_t x192 = 2U;
	int64_t t47 = -38198477343LL;

    t47 = (x189|(x190!=(x191<=x192)));

    if (t47 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x194 = 68721381LL;
	volatile uint64_t t48 = 2111625940010899LLU;

    t48 = (x193|(x194!=(x195<=x196)));

    if (t48 != 283856687708587809LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x198 = UINT16_MAX;
	volatile uint64_t x199 = UINT64_MAX;
	volatile int64_t x200 = INT64_MIN;

    t49 = (x197|(x198!=(x199<=x200)));

    if (t49 != 3LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x201 = INT64_MIN;
	static uint8_t x203 = 24U;
	int32_t x204 = -1;
	int64_t t50 = 64837LL;

    t50 = (x201|(x202!=(x203<=x204)));

    if (t50 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x206 = INT16_MIN;
	volatile int64_t x208 = -1342784510651LL;
	static volatile uint32_t t51 = UINT32_MAX;

    t51 = (x205|(x206!=(x207<=x208)));

    if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x209 = INT16_MAX;
	int32_t x210 = INT32_MAX;
	uint64_t x212 = 3LLU;
	int32_t t52 = -122964;

    t52 = (x209|(x210!=(x211<=x212)));

    if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x213 = INT16_MIN;
	volatile int16_t x215 = INT16_MIN;
	uint32_t x216 = 797361016U;

    t53 = (x213|(x214!=(x215<=x216)));

    if (t53 != -32767) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = 301452830006992964LL;
	static uint64_t x218 = 271461475385405LLU;
	int32_t x220 = INT32_MAX;
	int64_t t54 = -2933045989100117793LL;

    t54 = (x217|(x218!=(x219<=x220)));

    if (t54 != 301452830006992965LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x221 = 2;
	int32_t x222 = 1065;
	uint32_t x223 = 101164U;

    t55 = (x221|(x222!=(x223<=x224)));

    if (t55 != 3) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = 13;
	static int16_t x226 = 0;
	int8_t x228 = -1;
	int32_t t56 = 145580;

    t56 = (x225|(x226!=(x227<=x228)));

    if (t56 != 13) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x229 = 6U;
	int8_t x230 = 55;
	static int8_t x231 = INT8_MAX;
	int32_t t57 = 489369320;

    t57 = (x229|(x230!=(x231<=x232)));

    if (t57 != 7) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = INT64_MIN;
	uint16_t x234 = UINT16_MAX;
	uint8_t x235 = 120U;

    t58 = (x233|(x234!=(x235<=x236)));

    if (t58 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint8_t x237 = UINT8_MAX;
	int8_t x238 = INT8_MIN;
	static uint64_t x239 = UINT64_MAX;
	static uint64_t x240 = UINT64_MAX;
	int32_t t59 = -11651;

    t59 = (x237|(x238!=(x239<=x240)));

    if (t59 != 255) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = INT64_MAX;
	uint16_t x243 = 83U;
	volatile uint32_t x244 = 63778U;
	volatile int64_t t60 = INT64_MAX;

    t60 = (x241|(x242!=(x243<=x244)));

    if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x245 = UINT8_MAX;
	uint16_t x247 = 17U;
	int16_t x248 = INT16_MAX;
	volatile int32_t t61 = -2;

    t61 = (x245|(x246!=(x247<=x248)));

    if (t61 != 255) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint8_t x251 = 78U;
	static int8_t x252 = INT8_MIN;
	volatile int32_t t62 = -15147;

    t62 = (x249|(x250!=(x251<=x252)));

    if (t62 != 221625) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x253 = 54;
	int64_t x255 = INT64_MIN;
	uint32_t x256 = UINT32_MAX;

    t63 = (x253|(x254!=(x255<=x256)));

    if (t63 != 55) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = INT32_MAX;
	int64_t x258 = INT64_MAX;
	static uint8_t x259 = 0U;
	int64_t x260 = INT64_MIN;
	volatile int32_t t64 = INT32_MAX;

    t64 = (x257|(x258!=(x259<=x260)));

    if (t64 != INT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint32_t x261 = UINT32_MAX;
	int32_t x262 = -1;
	volatile int16_t x263 = -997;
	uint8_t x264 = 0U;
	uint32_t t65 = UINT32_MAX;

    t65 = (x261|(x262!=(x263<=x264)));

    if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint64_t x265 = 62639831LLU;
	int64_t x266 = INT64_MIN;
	int64_t x267 = -1LL;
	uint64_t t66 = 7367071LLU;

    t66 = (x265|(x266!=(x267<=x268)));

    if (t66 != 62639831LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = INT64_MAX;
	static uint32_t x270 = 234U;
	static int16_t x271 = INT16_MIN;
	int8_t x272 = -1;

    t67 = (x269|(x270!=(x271<=x272)));

    if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = -5947;
	volatile int8_t x274 = INT8_MAX;
	int32_t t68 = 903;

    t68 = (x273|(x274!=(x275<=x276)));

    if (t68 != -5947) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int16_t x277 = -35;
	static volatile int32_t x278 = -1;
	static uint8_t x279 = 2U;

    t69 = (x277|(x278!=(x279<=x280)));

    if (t69 != -35) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x281 = INT16_MIN;
	int32_t x282 = -1;
	uint16_t x283 = 118U;
	int32_t t70 = 32482179;

    t70 = (x281|(x282!=(x283<=x284)));

    if (t70 != -32767) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x285 = 1850;
	int8_t x286 = INT8_MAX;
	volatile uint16_t x287 = UINT16_MAX;
	int32_t x288 = INT32_MAX;
	int32_t t71 = 15077391;

    t71 = (x285|(x286!=(x287<=x288)));

    if (t71 != 1851) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint32_t x289 = 490U;
	uint16_t x290 = 31777U;
	volatile uint64_t x292 = 2352829782387561161LLU;
	volatile uint32_t t72 = 15031U;

    t72 = (x289|(x290!=(x291<=x292)));

    if (t72 != 491U) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint8_t x293 = UINT8_MAX;
	int16_t x294 = -1;
	int64_t x295 = INT64_MIN;
	static int32_t t73 = -87995;

    t73 = (x293|(x294!=(x295<=x296)));

    if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int64_t x297 = -3789772324286LL;
	volatile int8_t x298 = INT8_MIN;
	uint8_t x299 = UINT8_MAX;
	uint8_t x300 = UINT8_MAX;

    t74 = (x297|(x298!=(x299<=x300)));

    if (t74 != -3789772324285LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int16_t x301 = -29;
	static uint16_t x302 = 9208U;
	int32_t x304 = -1;
	int32_t t75 = -48;

    t75 = (x301|(x302!=(x303<=x304)));

    if (t75 != -29) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x306 = INT8_MIN;
	uint8_t x307 = 0U;
	static volatile int16_t x308 = -1;
	volatile int64_t t76 = 3095LL;

    t76 = (x305|(x306!=(x307<=x308)));

    if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x309 = INT32_MIN;
	int8_t x310 = -1;
	volatile int32_t x311 = 7273785;
	int32_t t77 = -58383;

    t77 = (x309|(x310!=(x311<=x312)));

    if (t77 != -2147483647) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x313 = -16077;
	uint8_t x314 = 0U;
	static int16_t x315 = INT16_MIN;
	int16_t x316 = INT16_MIN;
	volatile int32_t t78 = 17532;

    t78 = (x313|(x314!=(x315<=x316)));

    if (t78 != -16077) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x317 = 9U;
	static int16_t x318 = INT16_MAX;
	int32_t t79 = 208457741;

    t79 = (x317|(x318!=(x319<=x320)));

    if (t79 != 9) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x321 = -567;
	int32_t x322 = INT32_MAX;
	int32_t x324 = INT32_MAX;
	int32_t t80 = 318777;

    t80 = (x321|(x322!=(x323<=x324)));

    if (t80 != -567) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x325 = 5U;
	static int8_t x326 = INT8_MIN;

    t81 = (x325|(x326!=(x327<=x328)));

    if (t81 != 5) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = -1009081623;
	int64_t x330 = INT64_MIN;
	uint64_t x331 = 6237963150LLU;
	volatile int32_t t82 = 524799517;

    t82 = (x329|(x330!=(x331<=x332)));

    if (t82 != -1009081623) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x336 = INT8_MIN;
	volatile int32_t t83 = 3088970;

    t83 = (x333|(x334!=(x335<=x336)));

    if (t83 != 23) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x338 = -1;
	uint32_t x339 = 245U;
	static volatile int16_t x340 = INT16_MIN;
	int32_t t84 = 13599261;

    t84 = (x337|(x338!=(x339<=x340)));

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int32_t x341 = -1;
	int64_t x342 = 53286LL;
	int16_t x343 = INT16_MAX;
	static int64_t x344 = -4649LL;
	int32_t t85 = 707961729;

    t85 = (x341|(x342!=(x343<=x344)));

    if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint16_t x346 = UINT16_MAX;
	uint16_t x348 = UINT16_MAX;

    t86 = (x345|(x346!=(x347<=x348)));

    if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint64_t x349 = 23514011LLU;
	static int32_t x350 = INT32_MAX;
	uint64_t x351 = 15190LLU;
	int16_t x352 = -1;

    t87 = (x349|(x350!=(x351<=x352)));

    if (t87 != 23514011LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x353 = 57U;
	int8_t x354 = 12;
	int32_t x355 = INT32_MIN;
	int8_t x356 = 2;
	volatile int32_t t88 = -4367;

    t88 = (x353|(x354!=(x355<=x356)));

    if (t88 != 57) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x357 = -16116;
	static volatile int32_t x359 = 2251211;

    t89 = (x357|(x358!=(x359<=x360)));

    if (t89 != -16115) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x361 = -1;
	uint8_t x362 = UINT8_MAX;
	int16_t x363 = INT16_MIN;
	volatile int16_t x364 = -1;
	static int32_t t90 = 7245;

    t90 = (x361|(x362!=(x363<=x364)));

    if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x365 = INT8_MAX;
	static int64_t x366 = -32LL;
	volatile int32_t x367 = INT32_MIN;
	volatile int16_t x368 = 190;

    t91 = (x365|(x366!=(x367<=x368)));

    if (t91 != 127) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x369 = 0;
	int32_t x370 = INT32_MAX;
	uint64_t x371 = 264605372910861178LLU;
	int64_t x372 = -1LL;
	int32_t t92 = -435453;

    t92 = (x369|(x370!=(x371<=x372)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x373 = INT64_MAX;
	volatile int32_t x374 = -575300331;
	volatile int64_t t93 = INT64_MAX;

    t93 = (x373|(x374!=(x375<=x376)));

    if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x378 = -1;
	static int16_t x380 = 582;
	volatile int32_t t94 = 0;

    t94 = (x377|(x378!=(x379<=x380)));

    if (t94 != 45) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x382 = 492U;
	int16_t x384 = -390;
	volatile int32_t t95 = -3747;

    t95 = (x381|(x382!=(x383<=x384)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = INT16_MIN;
	int32_t x386 = INT32_MAX;
	int32_t x387 = 63;
	int16_t x388 = -1741;
	int32_t t96 = -3266523;

    t96 = (x385|(x386!=(x387<=x388)));

    if (t96 != -32767) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = -527089449LL;
	int32_t x390 = -94709960;
	int16_t x391 = INT16_MIN;
	volatile int64_t t97 = -4LL;

    t97 = (x389|(x390!=(x391<=x392)));

    if (t97 != -527089449LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint16_t x393 = 7986U;
	int32_t x396 = INT32_MAX;
	int32_t t98 = 26;

    t98 = (x393|(x394!=(x395<=x396)));

    if (t98 != 7987) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x397 = -1;
	uint32_t x398 = UINT32_MAX;
	static volatile int64_t x399 = -1LL;
	int8_t x400 = INT8_MIN;
	volatile int32_t t99 = -1;

    t99 = (x397|(x398!=(x399<=x400)));

    if (t99 != -1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x401 = UINT16_MAX;
	static int16_t x402 = INT16_MIN;
	volatile uint64_t x403 = 681004048883570345LLU;
	uint64_t x404 = 631986794715498LLU;
	int32_t t100 = 2018;

    t100 = (x401|(x402!=(x403<=x404)));

    if (t100 != 65535) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x405 = -14366771LL;
	int32_t x406 = INT32_MIN;
	int64_t x407 = -24595618859729142LL;
	volatile int64_t t101 = -88097610517281LL;

    t101 = (x405|(x406!=(x407<=x408)));

    if (t101 != -14366771LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x409 = INT16_MIN;
	volatile uint32_t x410 = 14210695U;
	int8_t x411 = -23;

    t102 = (x409|(x410!=(x411<=x412)));

    if (t102 != -32767) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = 3;
	volatile uint32_t x414 = 2U;
	static int8_t x415 = INT8_MIN;
	static volatile int32_t t103 = -940;

    t103 = (x413|(x414!=(x415<=x416)));

    if (t103 != 3) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x417 = -6357023;
	volatile int16_t x418 = -98;
	volatile uint16_t x419 = 72U;
	int32_t x420 = INT32_MIN;
	volatile int32_t t104 = -160;

    t104 = (x417|(x418!=(x419<=x420)));

    if (t104 != -6357023) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x421 = INT64_MAX;
	uint16_t x422 = 28390U;
	volatile uint16_t x423 = 2424U;
	volatile int64_t x424 = INT64_MAX;
	volatile int64_t t105 = INT64_MAX;

    t105 = (x421|(x422!=(x423<=x424)));

    if (t105 != INT64_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = INT64_MAX;
	static volatile uint32_t x426 = UINT32_MAX;
	volatile uint8_t x428 = UINT8_MAX;
	int64_t t106 = INT64_MAX;

    t106 = (x425|(x426!=(x427<=x428)));

    if (t106 != INT64_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x429 = 1U;
	volatile uint8_t x430 = 1U;
	static int32_t x432 = -1;
	int32_t t107 = -480942;

    t107 = (x429|(x430!=(x431<=x432)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x433 = -44;
	int16_t x434 = 2;
	volatile uint8_t x435 = 5U;
	int32_t x436 = -1;
	static volatile int32_t t108 = -1799;

    t108 = (x433|(x434!=(x435<=x436)));

    if (t108 != -43) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x437 = 21U;
	uint16_t x438 = 84U;
	static int8_t x439 = 0;
	int8_t x440 = -1;
	int32_t t109 = 52644;

    t109 = (x437|(x438!=(x439<=x440)));

    if (t109 != 21) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x441 = INT32_MAX;
	int64_t x442 = -19384LL;
	int16_t x444 = INT16_MAX;

    t110 = (x441|(x442!=(x443<=x444)));

    if (t110 != INT32_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x445 = INT64_MAX;
	int32_t x446 = 95302;
	volatile int64_t x447 = 1322761585142LL;
	int8_t x448 = INT8_MAX;

    t111 = (x445|(x446!=(x447<=x448)));

    if (t111 != INT64_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x449 = 12;
	static int16_t x451 = INT16_MAX;
	int64_t x452 = INT64_MAX;
	int32_t t112 = 1011;

    t112 = (x449|(x450!=(x451<=x452)));

    if (t112 != 13) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x454 = -1;
	int64_t x456 = INT64_MIN;
	int64_t t113 = 193793393LL;

    t113 = (x453|(x454!=(x455<=x456)));

    if (t113 != 16010121LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x457 = INT8_MIN;
	uint64_t x458 = UINT64_MAX;
	int8_t x459 = INT8_MAX;
	int64_t x460 = -697056LL;

    t114 = (x457|(x458!=(x459<=x460)));

    if (t114 != -127) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x461 = 52U;
	int32_t x462 = INT32_MAX;
	static int64_t x463 = INT64_MAX;
	int64_t x464 = 1770LL;
	uint32_t t115 = 534749U;

    t115 = (x461|(x462!=(x463<=x464)));

    if (t115 != 53U) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x465 = INT16_MIN;
	volatile int16_t x466 = INT16_MIN;
	int32_t x467 = INT32_MAX;
	int32_t t116 = 1;

    t116 = (x465|(x466!=(x467<=x468)));

    if (t116 != -32767) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = INT16_MIN;
	static int64_t x470 = INT64_MAX;
	volatile int64_t x471 = 25472510392142550LL;
	volatile int8_t x472 = INT8_MIN;
	int32_t t117 = -46953;

    t117 = (x469|(x470!=(x471<=x472)));

    if (t117 != -32767) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x473 = -1;
	uint8_t x475 = 5U;
	int32_t x476 = INT32_MIN;
	int32_t t118 = -155;

    t118 = (x473|(x474!=(x475<=x476)));

    if (t118 != -1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = -4950673991LL;
	int8_t x478 = -5;
	int32_t x479 = 99641461;

    t119 = (x477|(x478!=(x479<=x480)));

    if (t119 != -4950673991LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = INT64_MIN;
	int64_t x482 = INT64_MIN;
	volatile int64_t x483 = INT64_MIN;
	static int16_t x484 = INT16_MAX;
	volatile int64_t t120 = -55321601737LL;

    t120 = (x481|(x482!=(x483<=x484)));

    if (t120 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x485 = INT8_MAX;
	int16_t x486 = INT16_MAX;
	uint8_t x488 = UINT8_MAX;
	volatile int32_t t121 = 1397;

    t121 = (x485|(x486!=(x487<=x488)));

    if (t121 != 127) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = 231208;
	int8_t x490 = INT8_MIN;
	static int64_t x491 = INT64_MIN;
	volatile int8_t x492 = -1;
	volatile int32_t t122 = 18582;

    t122 = (x489|(x490!=(x491<=x492)));

    if (t122 != 231209) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x493 = -1;
	uint16_t x494 = 118U;
	static int32_t x495 = -14;
	int32_t x496 = -1;
	volatile int32_t t123 = 78;

    t123 = (x493|(x494!=(x495<=x496)));

    if (t123 != -1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x497 = 24967996LLU;
	int32_t x498 = INT32_MIN;
	uint32_t x499 = 1U;
	volatile int8_t x500 = 1;

    t124 = (x497|(x498!=(x499<=x500)));

    if (t124 != 24967997LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x503 = -15;
	volatile int32_t x504 = INT32_MAX;
	volatile int64_t t125 = INT64_MAX;

    t125 = (x501|(x502!=(x503<=x504)));

    if (t125 != INT64_MAX) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x505 = 5575U;
	int32_t x506 = 9874143;
	volatile int64_t x507 = -36117665196190614LL;
	int16_t x508 = INT16_MIN;
	int32_t t126 = -1;

    t126 = (x505|(x506!=(x507<=x508)));

    if (t126 != 5575) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x509 = INT8_MIN;
	int8_t x510 = -1;
	int8_t x511 = INT8_MAX;
	static int8_t x512 = 11;
	volatile int32_t t127 = -3263;

    t127 = (x509|(x510!=(x511<=x512)));

    if (t127 != -127) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x515 = UINT64_MAX;
	volatile uint32_t x516 = 250911U;
	volatile int32_t t128 = -147;

    t128 = (x513|(x514!=(x515<=x516)));

    if (t128 != -1) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x517 = INT16_MIN;
	volatile int16_t x518 = -15;
	uint8_t x519 = 62U;
	int32_t t129 = 913;

    t129 = (x517|(x518!=(x519<=x520)));

    if (t129 != -32767) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x522 = -1LL;
	int8_t x523 = INT8_MAX;
	int8_t x524 = INT8_MAX;
	int64_t t130 = INT64_MAX;

    t130 = (x521|(x522!=(x523<=x524)));

    if (t130 != INT64_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x527 = INT16_MAX;
	volatile int32_t t131 = -210404082;

    t131 = (x525|(x526!=(x527<=x528)));

    if (t131 != -2147483647) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x529 = INT8_MIN;
	int64_t x530 = INT64_MAX;
	uint32_t x531 = 48U;
	static int64_t x532 = INT64_MIN;
	int32_t t132 = -106;

    t132 = (x529|(x530!=(x531<=x532)));

    if (t132 != -127) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = -1;
	volatile int8_t x534 = INT8_MIN;
	int16_t x535 = INT16_MIN;
	static int8_t x536 = INT8_MAX;
	static int32_t t133 = -1031;

    t133 = (x533|(x534!=(x535<=x536)));

    if (t133 != -1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x537 = UINT64_MAX;
	uint64_t x538 = 52178579863497LLU;
	int16_t x539 = INT16_MIN;
	int16_t x540 = INT16_MAX;
	static volatile uint64_t t134 = UINT64_MAX;

    t134 = (x537|(x538!=(x539<=x540)));

    if (t134 != UINT64_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x541 = 0U;
	int16_t x542 = -2291;
	static volatile uint16_t x543 = 10658U;
	int32_t t135 = 6101523;

    t135 = (x541|(x542!=(x543<=x544)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x545 = INT32_MIN;
	uint64_t x547 = UINT64_MAX;
	volatile int16_t x548 = 6787;
	static int32_t t136 = 4044307;

    t136 = (x545|(x546!=(x547<=x548)));

    if (t136 != -2147483647) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x549 = 108U;
	volatile int8_t x550 = INT8_MIN;
	uint16_t x551 = 2753U;
	int8_t x552 = INT8_MAX;
	int32_t t137 = -1;

    t137 = (x549|(x550!=(x551<=x552)));

    if (t137 != 109) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x553 = INT64_MIN;
	int64_t x554 = INT64_MIN;
	int64_t x555 = -6398LL;
	int64_t x556 = -360LL;
	volatile int64_t t138 = 2001222268014LL;

    t138 = (x553|(x554!=(x555<=x556)));

    if (t138 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x557 = -22;
	volatile uint8_t x558 = 1U;
	volatile uint32_t x560 = 4096869U;
	static int32_t t139 = 1837;

    t139 = (x557|(x558!=(x559<=x560)));

    if (t139 != -22) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x561 = INT8_MIN;
	static uint8_t x562 = 13U;
	uint64_t x563 = UINT64_MAX;
	volatile int16_t x564 = INT16_MAX;
	int32_t t140 = 17071;

    t140 = (x561|(x562!=(x563<=x564)));

    if (t140 != -127) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x565 = -1;
	int64_t x566 = 1903LL;
	int64_t x567 = -1LL;
	static int64_t x568 = 43026540526518LL;
	volatile int32_t t141 = 1049903;

    t141 = (x565|(x566!=(x567<=x568)));

    if (t141 != -1) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x570 = -1;
	uint32_t x572 = UINT32_MAX;
	volatile int32_t t142 = 25;

    t142 = (x569|(x570!=(x571<=x572)));

    if (t142 != 255) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x573 = UINT16_MAX;
	int32_t x574 = INT32_MIN;
	int8_t x575 = INT8_MIN;
	volatile uint16_t x576 = 406U;
	volatile int32_t t143 = -2;

    t143 = (x573|(x574!=(x575<=x576)));

    if (t143 != 65535) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint16_t x577 = 26U;
	static int32_t x578 = INT32_MIN;
	int16_t x579 = INT16_MIN;
	int16_t x580 = -1;
	int32_t t144 = -60;

    t144 = (x577|(x578!=(x579<=x580)));

    if (t144 != 27) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x581 = 1U;
	int64_t x583 = INT64_MIN;
	volatile int32_t t145 = 12344083;

    t145 = (x581|(x582!=(x583<=x584)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x586 = 146;
	int32_t x587 = -1;
	static uint32_t t146 = 3991U;

    t146 = (x585|(x586!=(x587<=x588)));

    if (t146 != 1997U) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = INT32_MIN;
	int64_t x590 = INT64_MIN;
	volatile int64_t x591 = 99LL;
	static int8_t x592 = INT8_MAX;

    t147 = (x589|(x590!=(x591<=x592)));

    if (t147 != -2147483647) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x593 = UINT32_MAX;
	int16_t x594 = -1;
	int8_t x595 = INT8_MIN;
	volatile int16_t x596 = -1;
	uint32_t t148 = UINT32_MAX;

    t148 = (x593|(x594!=(x595<=x596)));

    if (t148 != UINT32_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x597 = -239157634270184LL;
	uint16_t x598 = UINT16_MAX;
	uint8_t x599 = 63U;
	int32_t x600 = 2388;
	int64_t t149 = -7466558LL;

    t149 = (x597|(x598!=(x599<=x600)));

    if (t149 != -239157634270183LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x602 = 99U;
	int8_t x604 = -1;
	int32_t t150 = -3882416;

    t150 = (x601|(x602!=(x603<=x604)));

    if (t150 != -1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int8_t x605 = INT8_MIN;
	uint8_t x607 = 2U;
	volatile uint64_t x608 = 13LLU;

    t151 = (x605|(x606!=(x607<=x608)));

    if (t151 != -127) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x609 = 1U;
	volatile uint64_t x610 = UINT64_MAX;
	int16_t x611 = INT16_MIN;
	int16_t x612 = -1;

    t152 = (x609|(x610!=(x611<=x612)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x613 = 19U;
	static int8_t x615 = 19;
	int16_t x616 = INT16_MIN;
	int32_t t153 = 45208600;

    t153 = (x613|(x614!=(x615<=x616)));

    if (t153 != 19) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x617 = 26;
	int8_t x618 = INT8_MIN;
	int32_t x620 = INT32_MAX;
	volatile int32_t t154 = 22934001;

    t154 = (x617|(x618!=(x619<=x620)));

    if (t154 != 27) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x621 = -1;
	int64_t x622 = -1LL;
	int64_t x624 = -1LL;
	volatile int32_t t155 = -697741;

    t155 = (x621|(x622!=(x623<=x624)));

    if (t155 != -1) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int64_t x625 = -1LL;
	static int16_t x626 = INT16_MIN;
	uint8_t x627 = UINT8_MAX;
	int8_t x628 = INT8_MAX;
	int64_t t156 = 6LL;

    t156 = (x625|(x626!=(x627<=x628)));

    if (t156 != -1LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint16_t x629 = 10157U;
	static int16_t x630 = 79;
	int16_t x631 = INT16_MAX;
	volatile int32_t t157 = 3;

    t157 = (x629|(x630!=(x631<=x632)));

    if (t157 != 10157) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int32_t x633 = INT32_MAX;
	int16_t x635 = -10599;
	volatile int32_t x636 = INT32_MIN;

    t158 = (x633|(x634!=(x635<=x636)));

    if (t158 != INT32_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x637 = INT64_MAX;
	static int8_t x638 = 2;
	uint64_t x640 = 109178540728317072LLU;

    t159 = (x637|(x638!=(x639<=x640)));

    if (t159 != INT64_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x641 = -1;
	static uint32_t x642 = 699726U;
	int64_t x644 = -1LL;
	volatile int32_t t160 = 433561;

    t160 = (x641|(x642!=(x643<=x644)));

    if (t160 != -1) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x646 = INT64_MIN;
	uint32_t x648 = 437203U;
	volatile int64_t t161 = 5713LL;

    t161 = (x645|(x646!=(x647<=x648)));

    if (t161 != -491686329853LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x649 = 3U;
	uint16_t x650 = 26344U;
	int8_t x651 = INT8_MIN;
	volatile int8_t x652 = INT8_MAX;

    t162 = (x649|(x650!=(x651<=x652)));

    if (t162 != 3) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x653 = UINT32_MAX;
	int16_t x654 = 10;
	int8_t x655 = INT8_MIN;
	uint32_t t163 = UINT32_MAX;

    t163 = (x653|(x654!=(x655<=x656)));

    if (t163 != UINT32_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = -1;
	volatile uint64_t x658 = 229131194453918LLU;
	static uint32_t x660 = UINT32_MAX;

    t164 = (x657|(x658!=(x659<=x660)));

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x662 = -60;
	uint16_t x664 = UINT16_MAX;
	uint64_t t165 = 61682LLU;

    t165 = (x661|(x662!=(x663<=x664)));

    if (t165 != 1LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x667 = 121358U;
	volatile int32_t t166 = -42188;

    t166 = (x665|(x666!=(x667<=x668)));

    if (t166 != 51) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x669 = UINT8_MAX;
	uint64_t x670 = UINT64_MAX;
	uint32_t x671 = 214294U;
	volatile int16_t x672 = INT16_MAX;
	volatile int32_t t167 = -2243745;

    t167 = (x669|(x670!=(x671<=x672)));

    if (t167 != 255) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = 7;
	uint64_t x674 = 124771282392328LLU;
	uint64_t x675 = 229673425146107470LLU;
	int8_t x676 = INT8_MIN;
	volatile int32_t t168 = 25820;

    t168 = (x673|(x674!=(x675<=x676)));

    if (t168 != 7) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint64_t x678 = 3453486252120LLU;
	static int64_t x679 = INT64_MIN;
	uint64_t x680 = 5875LLU;
	int32_t t169 = 785131646;

    t169 = (x677|(x678!=(x679<=x680)));

    if (t169 != -3) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x681 = INT64_MAX;
	volatile uint8_t x682 = 105U;
	int16_t x683 = INT16_MIN;
	uint8_t x684 = 93U;
	volatile int64_t t170 = INT64_MAX;

    t170 = (x681|(x682!=(x683<=x684)));

    if (t170 != INT64_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile uint16_t x685 = 67U;
	int8_t x687 = INT8_MAX;
	uint32_t x688 = UINT32_MAX;
	int32_t t171 = 13130;

    t171 = (x685|(x686!=(x687<=x688)));

    if (t171 != 67) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x689 = 5267U;
	uint16_t x690 = 431U;
	volatile int32_t t172 = 12662914;

    t172 = (x689|(x690!=(x691<=x692)));

    if (t172 != 5267) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint8_t x694 = 4U;
	int32_t x695 = -1372;
	uint16_t x696 = 17U;
	uint64_t t173 = 107LLU;

    t173 = (x693|(x694!=(x695<=x696)));

    if (t173 != 13442891LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x697 = INT32_MIN;
	int16_t x698 = INT16_MAX;
	static int8_t x699 = INT8_MIN;
	static int8_t x700 = INT8_MAX;
	volatile int32_t t174 = -31055473;

    t174 = (x697|(x698!=(x699<=x700)));

    if (t174 != -2147483647) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x702 = INT8_MIN;
	static int16_t x703 = INT16_MIN;
	int64_t x704 = 1789801693LL;
	int32_t t175 = 32195;

    t175 = (x701|(x702!=(x703<=x704)));

    if (t175 != -32767) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = INT16_MIN;
	static volatile int64_t x706 = INT64_MIN;
	uint64_t x707 = 84175LLU;
	static int8_t x708 = 6;
	int32_t t176 = 0;

    t176 = (x705|(x706!=(x707<=x708)));

    if (t176 != -32767) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint32_t x711 = UINT32_MAX;
	uint8_t x712 = 23U;

    t177 = (x709|(x710!=(x711<=x712)));

    if (t177 != -7) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint64_t x713 = UINT64_MAX;
	int64_t x714 = INT64_MIN;

    t178 = (x713|(x714!=(x715<=x716)));

    if (t178 != UINT64_MAX) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x717 = INT32_MAX;
	int64_t x719 = INT64_MAX;
	int64_t x720 = INT64_MIN;
	volatile int32_t t179 = INT32_MAX;

    t179 = (x717|(x718!=(x719<=x720)));

    if (t179 != INT32_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x721 = UINT32_MAX;
	uint32_t x722 = 105U;
	int32_t x723 = INT32_MAX;
	volatile int64_t x724 = 102249932522LL;

    t180 = (x721|(x722!=(x723<=x724)));

    if (t180 != UINT32_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x725 = 43U;
	uint16_t x726 = UINT16_MAX;
	volatile int8_t x727 = -1;
	int64_t x728 = -11LL;
	volatile int32_t t181 = -91460;

    t181 = (x725|(x726!=(x727<=x728)));

    if (t181 != 43) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x729 = UINT8_MAX;
	static uint16_t x730 = UINT16_MAX;
	int64_t x732 = 0LL;

    t182 = (x729|(x730!=(x731<=x732)));

    if (t182 != 255) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x733 = UINT16_MAX;
	volatile uint8_t x734 = UINT8_MAX;
	int64_t x735 = -1LL;
	static int8_t x736 = -1;

    t183 = (x733|(x734!=(x735<=x736)));

    if (t183 != 65535) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x738 = -1LL;
	static int16_t x739 = INT16_MIN;
	int64_t x740 = -22548234LL;
	volatile int32_t t184 = -865;

    t184 = (x737|(x738!=(x739<=x740)));

    if (t184 != -1) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int64_t x741 = INT64_MAX;
	int64_t x742 = 35LL;
	int8_t x743 = -1;
	static int8_t x744 = INT8_MIN;
	int64_t t185 = INT64_MAX;

    t185 = (x741|(x742!=(x743<=x744)));

    if (t185 != INT64_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x745 = 1;
	static int16_t x747 = INT16_MAX;
	volatile uint32_t x748 = 45716624U;
	int32_t t186 = 233112;

    t186 = (x745|(x746!=(x747<=x748)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x749 = 1U;
	uint8_t x750 = UINT8_MAX;
	int16_t x751 = INT16_MIN;
	volatile int32_t t187 = 12339729;

    t187 = (x749|(x750!=(x751<=x752)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x754 = 657307619U;
	int32_t x755 = -100830;
	uint16_t x756 = UINT16_MAX;
	int32_t t188 = -130022;

    t188 = (x753|(x754!=(x755<=x756)));

    if (t188 != 91) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint32_t x758 = UINT32_MAX;
	volatile int64_t x759 = 411022071LL;
	int8_t x760 = 0;
	volatile int32_t t189 = -1806161;

    t189 = (x757|(x758!=(x759<=x760)));

    if (t189 != -47) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x761 = 49U;
	int16_t x762 = INT16_MIN;
	static int16_t x763 = 3829;
	static volatile int16_t x764 = INT16_MIN;

    t190 = (x761|(x762!=(x763<=x764)));

    if (t190 != 49) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = -8;
	int64_t x766 = 87LL;
	volatile int16_t x768 = INT16_MIN;
	static int32_t t191 = 154492015;

    t191 = (x765|(x766!=(x767<=x768)));

    if (t191 != -7) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x769 = 13676;
	static volatile uint32_t x770 = UINT32_MAX;
	uint8_t x772 = UINT8_MAX;
	volatile int32_t t192 = -217973;

    t192 = (x769|(x770!=(x771<=x772)));

    if (t192 != 13677) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x774 = INT64_MIN;
	int8_t x775 = -54;

    t193 = (x773|(x774!=(x775<=x776)));

    if (t193 != UINT64_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x777 = INT16_MAX;
	int32_t x779 = -2016293;
	uint32_t x780 = 1499500U;
	int32_t t194 = -7;

    t194 = (x777|(x778!=(x779<=x780)));

    if (t194 != 32767) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = INT16_MAX;
	static int32_t x782 = -162561257;
	int32_t x783 = -1;
	static int64_t x784 = INT64_MAX;
	int32_t t195 = 164754;

    t195 = (x781|(x782!=(x783<=x784)));

    if (t195 != 32767) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x785 = INT32_MIN;
	static uint8_t x786 = UINT8_MAX;
	uint64_t x787 = 118LLU;
	int32_t t196 = -8320;

    t196 = (x785|(x786!=(x787<=x788)));

    if (t196 != -2147483647) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x789 = INT64_MIN;
	static int8_t x790 = -1;
	volatile int16_t x791 = INT16_MIN;
	volatile uint16_t x792 = UINT16_MAX;

    t197 = (x789|(x790!=(x791<=x792)));

    if (t197 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x793 = -1;
	static int8_t x794 = -1;
	uint32_t x795 = 2753U;
	volatile int32_t x796 = INT32_MIN;
	int32_t t198 = -52162900;

    t198 = (x793|(x794!=(x795<=x796)));

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x797 = INT64_MIN;
	int16_t x798 = INT16_MAX;
	volatile int64_t t199 = 45826LL;

    t199 = (x797|(x798!=(x799<=x800)));

    if (t199 != -9223372036854775807LL) { NG(); } else { ; }
	
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

