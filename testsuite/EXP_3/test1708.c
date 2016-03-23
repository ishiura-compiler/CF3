
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

static uint32_t x1 = UINT32_MAX;
int64_t x16 = INT64_MIN;
int32_t x19 = 7;
volatile int32_t t4 = 1247;
uint8_t x26 = UINT8_MAX;
int32_t x28 = -14841015;
volatile int32_t t6 = -2;
static uint8_t x31 = UINT8_MAX;
volatile int64_t x35 = INT64_MIN;
int32_t t8 = 6844058;
int64_t x37 = 159808LL;
static volatile int32_t x39 = INT32_MIN;
static int16_t x40 = -1;
uint64_t x41 = 450LLU;
static uint8_t x42 = 10U;
static int16_t x46 = 0;
static int16_t x47 = INT16_MIN;
volatile uint32_t x53 = 2774601U;
static int8_t x59 = 1;
static int64_t x62 = -6412300439635LL;
static volatile int64_t x72 = INT64_MIN;
uint32_t x73 = UINT32_MAX;
int8_t x83 = -1;
int16_t x86 = 8172;
int32_t x89 = -5;
static volatile int32_t t22 = -1150258;
int8_t x93 = INT8_MIN;
static int32_t x96 = INT32_MIN;
int16_t x100 = -1;
int32_t t24 = 2892;
int32_t t25 = -1841;
int64_t x106 = INT64_MAX;
int32_t x109 = INT32_MAX;
int64_t x111 = INT64_MIN;
static int32_t x117 = 0;
int8_t x118 = INT8_MIN;
static volatile int32_t x120 = INT32_MIN;
volatile uint64_t x123 = UINT64_MAX;
int64_t x129 = -487607916868279LL;
int64_t x130 = INT64_MIN;
int8_t x139 = INT8_MAX;
int32_t t34 = -1;
int64_t x141 = INT64_MIN;
static int16_t x144 = -1;
volatile int32_t t37 = -501;
int32_t x153 = -1;
int32_t t39 = -864970445;
int16_t x174 = INT16_MIN;
int32_t t43 = 379117;
int32_t x178 = INT32_MIN;
volatile int32_t x187 = INT32_MAX;
volatile int8_t x190 = -1;
int16_t x193 = INT16_MIN;
int64_t x194 = INT64_MIN;
volatile int32_t x196 = INT32_MAX;
volatile int32_t t48 = 7;
volatile int16_t x199 = -3;
int16_t x204 = INT16_MAX;
uint8_t x205 = UINT8_MAX;
int8_t x206 = INT8_MIN;
static int8_t x216 = INT8_MIN;
static int8_t x220 = INT8_MIN;
uint64_t x221 = 575016LLU;
int32_t t55 = 79;
int32_t t59 = -734197;
int16_t x244 = -4837;
int32_t x249 = 4394;
uint64_t x251 = 2157050700341696LLU;
int32_t x258 = -1;
int32_t x264 = INT32_MIN;
uint64_t x267 = 2000016004191LLU;
int16_t x281 = INT16_MIN;
int8_t x282 = -1;
int32_t t72 = 20452870;
volatile int64_t x302 = INT64_MIN;
uint16_t x303 = UINT16_MAX;
int16_t x304 = INT16_MAX;
volatile int32_t t75 = -20497252;
int32_t x313 = INT32_MIN;
int16_t x317 = INT16_MIN;
volatile int32_t t81 = -10107;
int16_t x332 = INT16_MIN;
int8_t x333 = INT8_MAX;
int32_t t84 = -13574443;
int32_t t85 = 1;
int64_t x354 = INT64_MIN;
uint32_t x356 = UINT32_MAX;
uint16_t x360 = 1U;
volatile int32_t x362 = INT32_MAX;
int32_t t91 = -8330;
volatile int32_t t92 = 28;
uint8_t x384 = 1U;
int32_t x385 = -1;
int8_t x394 = INT8_MIN;
int32_t t99 = -1708145;
int32_t x401 = -1;
int32_t x411 = 144573;
uint16_t x413 = 26U;
uint8_t x428 = 0U;
volatile int32_t t107 = 195;
uint8_t x433 = UINT8_MAX;
static int64_t x434 = -21545LL;
volatile int32_t x435 = INT32_MAX;
int32_t x438 = -354706;
static volatile int32_t t109 = -68900097;
int32_t x442 = -1;
static volatile int64_t x445 = INT64_MAX;
static uint8_t x453 = 12U;
int32_t x465 = INT32_MIN;
static int64_t x468 = -1LL;
uint16_t x470 = UINT16_MAX;
int64_t x472 = -56866LL;
int64_t x485 = INT64_MIN;
volatile int32_t x487 = 351989;
volatile int32_t t122 = 15591;
uint8_t x493 = 77U;
volatile uint8_t x494 = 98U;
volatile int8_t x495 = -1;
uint8_t x502 = 112U;
int64_t x503 = 10163528534872678LL;
volatile int32_t t126 = 109484;
int64_t x511 = INT64_MAX;
volatile int8_t x512 = -1;
static int32_t t127 = 7431370;
int8_t x526 = INT8_MIN;
static int32_t x530 = 1;
volatile int32_t x531 = -1;
volatile uint8_t x533 = 30U;
int64_t x536 = 151732LL;
static int64_t x543 = -989867585581LL;
static int16_t x548 = INT16_MAX;
static int32_t x549 = INT32_MIN;
static uint64_t x550 = 60891LLU;
int32_t t137 = -178757;
static int32_t x555 = 536603;
static int32_t t138 = 1879;
int32_t x557 = INT32_MAX;
volatile uint8_t x560 = 70U;
uint16_t x561 = UINT16_MAX;
int32_t t141 = 1373;
int32_t x572 = INT32_MIN;
int8_t x576 = INT8_MAX;
volatile uint16_t x577 = 212U;
int32_t t144 = -4;
static int8_t x581 = -1;
int8_t x582 = INT8_MAX;
int32_t t146 = -5;
uint32_t x590 = UINT32_MAX;
int32_t x598 = INT32_MAX;
uint8_t x601 = 106U;
static int8_t x608 = -1;
int32_t x612 = -1;
uint32_t x616 = 235U;
int32_t t154 = -1528129;
int8_t x621 = INT8_MAX;
volatile uint8_t x623 = 88U;
volatile int16_t x627 = INT16_MIN;
volatile uint16_t x628 = UINT16_MAX;
volatile int32_t t157 = -502;
volatile int32_t x636 = INT32_MAX;
int32_t t159 = -10851007;
int32_t t160 = 304;
static int32_t t162 = 9413;
uint16_t x663 = UINT16_MAX;
int16_t x664 = -1;
uint32_t x667 = 2589142U;
int16_t x673 = INT16_MIN;
uint16_t x676 = 548U;
volatile uint16_t x692 = UINT16_MAX;
int32_t t173 = 52;
int8_t x698 = INT8_MIN;
int16_t x700 = INT16_MIN;
int64_t x703 = 184LL;
int8_t x704 = -11;
int64_t x705 = 5493204620LL;
static uint8_t x709 = UINT8_MAX;
int32_t x714 = 1664328;
int16_t x718 = 3379;
int16_t x722 = -1;
int32_t x724 = INT32_MIN;
int8_t x729 = -1;
uint64_t x733 = 517414368703LLU;
uint64_t x734 = UINT64_MAX;
int32_t t183 = 315256;
int8_t x739 = -12;
static uint8_t x740 = UINT8_MAX;
uint8_t x749 = 13U;
int16_t x755 = -1;
uint8_t x758 = 30U;
static volatile uint16_t x761 = 24U;
uint8_t x763 = 3U;
static int8_t x766 = -1;
static uint8_t x772 = 4U;
volatile int8_t x773 = -12;
int32_t x778 = -1;
static uint8_t x784 = 9U;
static volatile int64_t x796 = 86949337LL;
int64_t x799 = -15429LL;


void f0(void) {
    	uint8_t x2 = UINT8_MAX;
	volatile uint8_t x3 = UINT8_MAX;
	int16_t x4 = 460;
	int32_t t0 = 1;

    t0 = ((x1<=x2)^(x3>x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint16_t x5 = 767U;
	int64_t x6 = INT64_MIN;
	int32_t x7 = INT32_MIN;
	uint64_t x8 = 462030579373235LLU;
	volatile int32_t t1 = 6;

    t1 = ((x5<=x6)^(x7>x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = 191;
	volatile uint32_t x10 = 33133572U;
	uint16_t x11 = UINT16_MAX;
	static int64_t x12 = 424680450733940LL;
	int32_t t2 = 550616937;

    t2 = ((x9<=x10)^(x11>x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = -1;
	static int64_t x14 = INT64_MAX;
	int8_t x15 = INT8_MIN;
	int32_t t3 = -213158;

    t3 = ((x13<=x14)^(x15>x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = -1;
	volatile uint32_t x18 = 9963143U;
	static uint16_t x20 = UINT16_MAX;

    t4 = ((x17<=x18)^(x19>x20));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x21 = 3646;
	uint32_t x22 = 3725U;
	uint64_t x23 = UINT64_MAX;
	uint16_t x24 = 6344U;
	volatile int32_t t5 = 200;

    t5 = ((x21<=x22)^(x23>x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = 2082024213LLU;
	uint16_t x27 = 0U;

    t6 = ((x25<=x26)^(x27>x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = 3408950U;
	volatile int16_t x30 = INT16_MAX;
	int64_t x32 = INT64_MAX;
	int32_t t7 = 55737;

    t7 = ((x29<=x30)^(x31>x32));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MIN;
	volatile int64_t x34 = -14392830405LL;
	volatile uint32_t x36 = UINT32_MAX;

    t8 = ((x33<=x34)^(x35>x36));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x38 = INT32_MAX;
	volatile int32_t t9 = -2;

    t9 = ((x37<=x38)^(x39>x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x43 = -1;
	static uint16_t x44 = 0U;
	static int32_t t10 = 2;

    t10 = ((x41<=x42)^(x43>x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = INT64_MAX;
	int8_t x48 = INT8_MIN;
	volatile int32_t t11 = 1;

    t11 = ((x45<=x46)^(x47>x48));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint64_t x49 = UINT64_MAX;
	int32_t x50 = -306974;
	uint16_t x51 = UINT16_MAX;
	volatile int64_t x52 = INT64_MIN;
	int32_t t12 = 1105435;

    t12 = ((x49<=x50)^(x51>x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x54 = 17U;
	int32_t x55 = -1;
	static int8_t x56 = INT8_MIN;
	int32_t t13 = -239048049;

    t13 = ((x53<=x54)^(x55>x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint32_t x57 = UINT32_MAX;
	int32_t x58 = INT32_MAX;
	int16_t x60 = INT16_MAX;
	int32_t t14 = 12991312;

    t14 = ((x57<=x58)^(x59>x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = INT16_MIN;
	int16_t x63 = -1;
	int16_t x64 = INT16_MAX;
	volatile int32_t t15 = -158;

    t15 = ((x61<=x62)^(x63>x64));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = INT64_MIN;
	uint64_t x66 = UINT64_MAX;
	static int32_t x67 = -1;
	int16_t x68 = INT16_MIN;
	volatile int32_t t16 = 350078934;

    t16 = ((x65<=x66)^(x67>x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x69 = 320U;
	int8_t x70 = 10;
	static int64_t x71 = INT64_MIN;
	int32_t t17 = 1;

    t17 = ((x69<=x70)^(x71>x72));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x74 = INT32_MIN;
	static uint32_t x75 = 365U;
	int8_t x76 = INT8_MAX;
	volatile int32_t t18 = 10561464;

    t18 = ((x73<=x74)^(x75>x76));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x77 = UINT32_MAX;
	static int64_t x78 = 734897679876602LL;
	int32_t x79 = INT32_MIN;
	static uint32_t x80 = 186055U;
	volatile int32_t t19 = 14669333;

    t19 = ((x77<=x78)^(x79>x80));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = -1LL;
	int32_t x82 = INT32_MIN;
	static uint8_t x84 = UINT8_MAX;
	volatile int32_t t20 = -28;

    t20 = ((x81<=x82)^(x83>x84));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = INT32_MIN;
	int16_t x87 = 127;
	static uint8_t x88 = UINT8_MAX;
	volatile int32_t t21 = -258621;

    t21 = ((x85<=x86)^(x87>x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile uint8_t x90 = 114U;
	int32_t x91 = INT32_MIN;
	static uint64_t x92 = 318261220347351150LLU;

    t22 = ((x89<=x90)^(x91>x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x94 = -1LL;
	uint16_t x95 = 1343U;
	static volatile int32_t t23 = 123268;

    t23 = ((x93<=x94)^(x95>x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = 326211196240642LL;
	int8_t x98 = INT8_MIN;
	int8_t x99 = INT8_MIN;

    t24 = ((x97<=x98)^(x99>x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = -16;
	int8_t x102 = -1;
	int64_t x103 = INT64_MIN;
	static int64_t x104 = INT64_MIN;

    t25 = ((x101<=x102)^(x103>x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x105 = -1;
	volatile uint64_t x107 = 973078952827LLU;
	static int16_t x108 = INT16_MAX;
	static volatile int32_t t26 = 14435;

    t26 = ((x105<=x106)^(x107>x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x110 = INT16_MIN;
	int64_t x112 = 2LL;
	int32_t t27 = -925529393;

    t27 = ((x109<=x110)^(x111>x112));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x113 = 1014U;
	static volatile uint64_t x114 = 2331978LLU;
	volatile int16_t x115 = 1;
	uint64_t x116 = 526302120981LLU;
	int32_t t28 = -353;

    t28 = ((x113<=x114)^(x115>x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x119 = 570U;
	volatile int32_t t29 = -1206;

    t29 = ((x117<=x118)^(x119>x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile uint16_t x121 = 531U;
	int8_t x122 = 13;
	volatile int8_t x124 = -1;
	static volatile int32_t t30 = -305334;

    t30 = ((x121<=x122)^(x123>x124));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile uint64_t x125 = UINT64_MAX;
	int64_t x126 = 12228319341735LL;
	int16_t x127 = 4;
	int64_t x128 = 2LL;
	volatile int32_t t31 = 2393527;

    t31 = ((x125<=x126)^(x127>x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x131 = -1;
	int32_t x132 = -1;
	volatile int32_t t32 = -2434;

    t32 = ((x129<=x130)^(x131>x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x133 = INT32_MIN;
	volatile int8_t x134 = -1;
	int64_t x135 = INT64_MIN;
	uint32_t x136 = 11077429U;
	int32_t t33 = -2908;

    t33 = ((x133<=x134)^(x135>x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x137 = UINT16_MAX;
	int8_t x138 = INT8_MIN;
	static int8_t x140 = INT8_MAX;

    t34 = ((x137<=x138)^(x139>x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x142 = INT32_MIN;
	static int8_t x143 = INT8_MIN;
	int32_t t35 = -1774483;

    t35 = ((x141<=x142)^(x143>x144));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x145 = 0U;
	volatile uint16_t x146 = UINT16_MAX;
	static uint8_t x147 = 0U;
	static int16_t x148 = -1;
	static volatile int32_t t36 = -407570;

    t36 = ((x145<=x146)^(x147>x148));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = 1496126863267LL;
	uint16_t x150 = 81U;
	int16_t x151 = INT16_MIN;
	uint64_t x152 = UINT64_MAX;

    t37 = ((x149<=x150)^(x151>x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x154 = INT16_MIN;
	int8_t x155 = INT8_MAX;
	volatile uint8_t x156 = 7U;
	volatile int32_t t38 = 0;

    t38 = ((x153<=x154)^(x155>x156));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int32_t x157 = INT32_MAX;
	int32_t x158 = INT32_MIN;
	volatile int64_t x159 = INT64_MIN;
	static uint32_t x160 = 47U;

    t39 = ((x157<=x158)^(x159>x160));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = -739;
	volatile uint32_t x162 = 8U;
	int8_t x163 = INT8_MIN;
	static int32_t x164 = 673;
	int32_t t40 = 44530;

    t40 = ((x161<=x162)^(x163>x164));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = -1;
	int64_t x166 = 439592508370415LL;
	int64_t x167 = -1LL;
	static uint32_t x168 = 75066343U;
	int32_t t41 = -244;

    t41 = ((x165<=x166)^(x167>x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = 7;
	uint32_t x170 = UINT32_MAX;
	int64_t x171 = -1LL;
	static int16_t x172 = -394;
	volatile int32_t t42 = -76;

    t42 = ((x169<=x170)^(x171>x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = -2509;
	int16_t x175 = INT16_MAX;
	int16_t x176 = INT16_MIN;

    t43 = ((x173<=x174)^(x175>x176));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x177 = 13117U;
	static int32_t x179 = INT32_MIN;
	volatile int32_t x180 = INT32_MAX;
	static int32_t t44 = -37461;

    t44 = ((x177<=x178)^(x179>x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = INT64_MIN;
	int8_t x182 = INT8_MIN;
	uint16_t x183 = 4U;
	static int32_t x184 = -1;
	volatile int32_t t45 = -19912869;

    t45 = ((x181<=x182)^(x183>x184));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x185 = 13934U;
	uint32_t x186 = UINT32_MAX;
	uint16_t x188 = 887U;
	int32_t t46 = -30;

    t46 = ((x185<=x186)^(x187>x188));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x189 = INT16_MIN;
	int64_t x191 = INT64_MIN;
	uint16_t x192 = UINT16_MAX;
	int32_t t47 = -22410;

    t47 = ((x189<=x190)^(x191>x192));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x195 = INT64_MIN;

    t48 = ((x193<=x194)^(x195>x196));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = INT8_MIN;
	int32_t x198 = -145397385;
	static int32_t x200 = INT32_MIN;
	volatile int32_t t49 = 21;

    t49 = ((x197<=x198)^(x199>x200));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = INT32_MIN;
	int16_t x202 = 0;
	uint16_t x203 = 1273U;
	static volatile int32_t t50 = -466;

    t50 = ((x201<=x202)^(x203>x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x207 = -1;
	static uint64_t x208 = 13LLU;
	int32_t t51 = 452824;

    t51 = ((x205<=x206)^(x207>x208));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x209 = -3;
	uint16_t x210 = 137U;
	int16_t x211 = INT16_MAX;
	uint32_t x212 = UINT32_MAX;
	static int32_t t52 = -6;

    t52 = ((x209<=x210)^(x211>x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = INT64_MIN;
	uint16_t x214 = UINT16_MAX;
	uint32_t x215 = 1434851193U;
	volatile int32_t t53 = 0;

    t53 = ((x213<=x214)^(x215>x216));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x217 = INT32_MAX;
	static uint8_t x218 = 5U;
	static uint8_t x219 = 9U;
	volatile int32_t t54 = 0;

    t54 = ((x217<=x218)^(x219>x220));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x222 = 0;
	uint8_t x223 = UINT8_MAX;
	int16_t x224 = INT16_MIN;

    t55 = ((x221<=x222)^(x223>x224));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x225 = 2107385922226725LLU;
	volatile uint16_t x226 = 903U;
	int8_t x227 = -12;
	uint64_t x228 = UINT64_MAX;
	volatile int32_t t56 = 50277;

    t56 = ((x225<=x226)^(x227>x228));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x229 = INT32_MAX;
	static int8_t x230 = -15;
	uint8_t x231 = 30U;
	static int32_t x232 = INT32_MAX;
	int32_t t57 = -19871700;

    t57 = ((x229<=x230)^(x231>x232));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x233 = INT16_MAX;
	volatile int32_t x234 = 318829872;
	static uint64_t x235 = 32980438488187LLU;
	uint32_t x236 = 1543U;
	int32_t t58 = 135;

    t58 = ((x233<=x234)^(x235>x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = INT16_MAX;
	int32_t x238 = -1;
	int32_t x239 = 845427260;
	static volatile int8_t x240 = -1;

    t59 = ((x237<=x238)^(x239>x240));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = -246412LL;
	int8_t x242 = INT8_MIN;
	int64_t x243 = INT64_MIN;
	int32_t t60 = 12572904;

    t60 = ((x241<=x242)^(x243>x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x245 = UINT32_MAX;
	volatile int8_t x246 = INT8_MIN;
	int32_t x247 = INT32_MIN;
	static uint64_t x248 = UINT64_MAX;
	int32_t t61 = -69463390;

    t61 = ((x245<=x246)^(x247>x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x250 = INT64_MIN;
	uint32_t x252 = UINT32_MAX;
	static int32_t t62 = 12326;

    t62 = ((x249<=x250)^(x251>x252));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = -104LL;
	volatile int16_t x254 = -1;
	volatile int32_t x255 = INT32_MIN;
	static uint32_t x256 = 1091U;
	volatile int32_t t63 = 5;

    t63 = ((x253<=x254)^(x255>x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = 3;
	volatile int64_t x259 = INT64_MAX;
	volatile int32_t x260 = INT32_MIN;
	volatile int32_t t64 = -1;

    t64 = ((x257<=x258)^(x259>x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = INT8_MAX;
	uint16_t x262 = 9U;
	static int16_t x263 = INT16_MAX;
	int32_t t65 = 808834186;

    t65 = ((x261<=x262)^(x263>x264));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x265 = 13U;
	static volatile int32_t x266 = INT32_MAX;
	int16_t x268 = INT16_MIN;
	int32_t t66 = 15501;

    t66 = ((x265<=x266)^(x267>x268));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x269 = -1;
	uint8_t x270 = UINT8_MAX;
	int64_t x271 = INT64_MIN;
	volatile uint64_t x272 = UINT64_MAX;
	volatile int32_t t67 = 0;

    t67 = ((x269<=x270)^(x271>x272));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x273 = INT64_MIN;
	int64_t x274 = 1822LL;
	int64_t x275 = -1LL;
	int32_t x276 = INT32_MIN;
	int32_t t68 = -50;

    t68 = ((x273<=x274)^(x275>x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int64_t x277 = INT64_MAX;
	int32_t x278 = INT32_MIN;
	int64_t x279 = -9LL;
	static uint8_t x280 = 5U;
	int32_t t69 = 5;

    t69 = ((x277<=x278)^(x279>x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x283 = INT8_MAX;
	static int64_t x284 = -65849070986870390LL;
	volatile int32_t t70 = 3987;

    t70 = ((x281<=x282)^(x283>x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x285 = 1406181U;
	static uint32_t x286 = 221566037U;
	static int32_t x287 = INT32_MIN;
	int16_t x288 = INT16_MAX;
	volatile int32_t t71 = 2716670;

    t71 = ((x285<=x286)^(x287>x288));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint32_t x289 = 15U;
	int16_t x290 = -5;
	int8_t x291 = INT8_MAX;
	static uint16_t x292 = UINT16_MAX;

    t72 = ((x289<=x290)^(x291>x292));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x293 = UINT8_MAX;
	int32_t x294 = -1;
	int32_t x295 = INT32_MIN;
	uint32_t x296 = UINT32_MAX;
	volatile int32_t t73 = 88077407;

    t73 = ((x293<=x294)^(x295>x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x297 = -15;
	static int32_t x298 = INT32_MIN;
	static int32_t x299 = -193905850;
	uint8_t x300 = UINT8_MAX;
	volatile int32_t t74 = 30010;

    t74 = ((x297<=x298)^(x299>x300));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int64_t x301 = INT64_MAX;

    t75 = ((x301<=x302)^(x303>x304));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x305 = INT32_MIN;
	int8_t x306 = INT8_MIN;
	int64_t x307 = INT64_MAX;
	volatile int16_t x308 = -1;
	static int32_t t76 = -3839026;

    t76 = ((x305<=x306)^(x307>x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = INT8_MAX;
	uint64_t x310 = 7415127LLU;
	static int32_t x311 = -845;
	static uint32_t x312 = 19U;
	volatile int32_t t77 = -2099;

    t77 = ((x309<=x310)^(x311>x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x314 = INT16_MIN;
	volatile uint8_t x315 = 9U;
	uint8_t x316 = 1U;
	int32_t t78 = 911;

    t78 = ((x313<=x314)^(x315>x316));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x318 = 1;
	uint8_t x319 = UINT8_MAX;
	volatile int8_t x320 = INT8_MAX;
	volatile int32_t t79 = -1;

    t79 = ((x317<=x318)^(x319>x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x321 = 531;
	int64_t x322 = -9566438307LL;
	int64_t x323 = INT64_MAX;
	volatile int8_t x324 = INT8_MIN;
	static int32_t t80 = 22441337;

    t80 = ((x321<=x322)^(x323>x324));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x325 = INT32_MIN;
	int64_t x326 = INT64_MAX;
	static int64_t x327 = INT64_MIN;
	uint16_t x328 = UINT16_MAX;

    t81 = ((x325<=x326)^(x327>x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x329 = INT16_MAX;
	int8_t x330 = 30;
	int16_t x331 = 163;
	int32_t t82 = 1;

    t82 = ((x329<=x330)^(x331>x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x334 = -637645LL;
	int8_t x335 = INT8_MIN;
	int16_t x336 = INT16_MIN;
	volatile int32_t t83 = 139;

    t83 = ((x333<=x334)^(x335>x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x337 = INT32_MIN;
	int8_t x338 = INT8_MIN;
	int32_t x339 = INT32_MAX;
	int8_t x340 = 46;

    t84 = ((x337<=x338)^(x339>x340));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint8_t x341 = 43U;
	uint64_t x342 = 56LLU;
	uint8_t x343 = UINT8_MAX;
	volatile uint64_t x344 = 181342601615LLU;

    t85 = ((x341<=x342)^(x343>x344));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint16_t x345 = 21U;
	int16_t x346 = 1820;
	uint16_t x347 = UINT16_MAX;
	int64_t x348 = INT64_MAX;
	volatile int32_t t86 = -24133949;

    t86 = ((x345<=x346)^(x347>x348));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x349 = INT8_MAX;
	static int8_t x350 = INT8_MAX;
	int32_t x351 = INT32_MAX;
	int8_t x352 = INT8_MAX;
	volatile int32_t t87 = 3;

    t87 = ((x349<=x350)^(x351>x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x353 = INT16_MIN;
	uint8_t x355 = 10U;
	volatile int32_t t88 = -28830;

    t88 = ((x353<=x354)^(x355>x356));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x357 = INT64_MAX;
	volatile int32_t x358 = 15;
	int64_t x359 = INT64_MIN;
	static int32_t t89 = 8;

    t89 = ((x357<=x358)^(x359>x360));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x361 = -1;
	uint32_t x363 = 483455U;
	uint64_t x364 = 743583839LLU;
	int32_t t90 = -35452;

    t90 = ((x361<=x362)^(x363>x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x365 = INT8_MIN;
	static int16_t x366 = INT16_MIN;
	uint16_t x367 = UINT16_MAX;
	uint64_t x368 = 516382LLU;

    t91 = ((x365<=x366)^(x367>x368));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x369 = UINT32_MAX;
	volatile uint32_t x370 = 4U;
	int16_t x371 = 25;
	int16_t x372 = -1;

    t92 = ((x369<=x370)^(x371>x372));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x373 = -1;
	uint8_t x374 = UINT8_MAX;
	volatile int64_t x375 = INT64_MIN;
	volatile int64_t x376 = INT64_MIN;
	volatile int32_t t93 = 577325;

    t93 = ((x373<=x374)^(x375>x376));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x377 = UINT8_MAX;
	static int8_t x378 = 1;
	int64_t x379 = INT64_MIN;
	int32_t x380 = INT32_MIN;
	int32_t t94 = 2;

    t94 = ((x377<=x378)^(x379>x380));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = -10263527329377622LL;
	uint64_t x382 = 1709LLU;
	volatile int64_t x383 = INT64_MAX;
	int32_t t95 = 568;

    t95 = ((x381<=x382)^(x383>x384));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x386 = 183;
	uint32_t x387 = 1U;
	int16_t x388 = -1;
	volatile int32_t t96 = 14579;

    t96 = ((x385<=x386)^(x387>x388));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x389 = 67781117;
	volatile int16_t x390 = INT16_MIN;
	int16_t x391 = 2;
	static int16_t x392 = 2;
	volatile int32_t t97 = -965;

    t97 = ((x389<=x390)^(x391>x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x393 = INT64_MAX;
	volatile uint64_t x395 = UINT64_MAX;
	static int64_t x396 = INT64_MIN;
	volatile int32_t t98 = 966114022;

    t98 = ((x393<=x394)^(x395>x396));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x397 = INT16_MIN;
	uint8_t x398 = 26U;
	int64_t x399 = 55257204613948LL;
	int32_t x400 = -1;

    t99 = ((x397<=x398)^(x399>x400));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x402 = -2135;
	static int16_t x403 = -1;
	int32_t x404 = -1;
	int32_t t100 = -63;

    t100 = ((x401<=x402)^(x403>x404));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x405 = 77U;
	static int16_t x406 = 161;
	int64_t x407 = -1LL;
	int16_t x408 = 12092;
	volatile int32_t t101 = 1059290;

    t101 = ((x405<=x406)^(x407>x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = INT64_MIN;
	volatile uint32_t x410 = 0U;
	static int32_t x412 = -1;
	int32_t t102 = -20917603;

    t102 = ((x409<=x410)^(x411>x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x414 = UINT32_MAX;
	int8_t x415 = INT8_MIN;
	int64_t x416 = INT64_MIN;
	int32_t t103 = 44336;

    t103 = ((x413<=x414)^(x415>x416));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x417 = INT32_MIN;
	int8_t x418 = INT8_MIN;
	uint16_t x419 = 26574U;
	int32_t x420 = 37;
	int32_t t104 = 642090673;

    t104 = ((x417<=x418)^(x419>x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint8_t x421 = 8U;
	int32_t x422 = 1;
	int32_t x423 = INT32_MAX;
	int16_t x424 = INT16_MAX;
	volatile int32_t t105 = -567619421;

    t105 = ((x421<=x422)^(x423>x424));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x425 = INT16_MIN;
	volatile int32_t x426 = -1;
	volatile uint8_t x427 = UINT8_MAX;
	int32_t t106 = 7063;

    t106 = ((x425<=x426)^(x427>x428));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x429 = -48;
	int64_t x430 = -14824LL;
	int8_t x431 = INT8_MIN;
	volatile uint32_t x432 = 3U;

    t107 = ((x429<=x430)^(x431>x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x436 = -1;
	int32_t t108 = -1;

    t108 = ((x433<=x434)^(x435>x436));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = INT64_MAX;
	static int64_t x439 = INT64_MAX;
	uint16_t x440 = UINT16_MAX;

    t109 = ((x437<=x438)^(x439>x440));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = INT8_MIN;
	static uint64_t x443 = 119LLU;
	static int8_t x444 = -1;
	volatile int32_t t110 = -2;

    t110 = ((x441<=x442)^(x443>x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int64_t x446 = INT64_MAX;
	int8_t x447 = INT8_MIN;
	uint32_t x448 = 0U;
	int32_t t111 = -72;

    t111 = ((x445<=x446)^(x447>x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint64_t x449 = 4475908398478143LLU;
	int32_t x450 = -1;
	int32_t x451 = 61182953;
	volatile int16_t x452 = -315;
	static int32_t t112 = -1;

    t112 = ((x449<=x450)^(x451>x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x454 = -3;
	static volatile int32_t x455 = -1;
	uint64_t x456 = 90093LLU;
	int32_t t113 = 11;

    t113 = ((x453<=x454)^(x455>x456));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x457 = INT32_MIN;
	volatile int16_t x458 = INT16_MIN;
	static int64_t x459 = INT64_MAX;
	int32_t x460 = -1;
	static volatile int32_t t114 = -1202249;

    t114 = ((x457<=x458)^(x459>x460));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x461 = INT16_MIN;
	uint32_t x462 = 4720193U;
	uint32_t x463 = UINT32_MAX;
	int8_t x464 = INT8_MAX;
	static volatile int32_t t115 = 652129;

    t115 = ((x461<=x462)^(x463>x464));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x466 = -659263;
	volatile uint16_t x467 = 193U;
	volatile int32_t t116 = -12;

    t116 = ((x465<=x466)^(x467>x468));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = INT8_MIN;
	int64_t x471 = INT64_MIN;
	static int32_t t117 = -350750;

    t117 = ((x469<=x470)^(x471>x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x473 = 29;
	uint16_t x474 = UINT16_MAX;
	volatile uint16_t x475 = UINT16_MAX;
	static volatile uint8_t x476 = UINT8_MAX;
	static int32_t t118 = 891934;

    t118 = ((x473<=x474)^(x475>x476));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = -1LL;
	int8_t x478 = INT8_MIN;
	static uint64_t x479 = 15148795LLU;
	uint8_t x480 = 32U;
	int32_t t119 = 2;

    t119 = ((x477<=x478)^(x479>x480));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = 6698192912025LL;
	int64_t x482 = INT64_MAX;
	int64_t x483 = INT64_MAX;
	static int32_t x484 = -115307929;
	static int32_t t120 = 59789972;

    t120 = ((x481<=x482)^(x483>x484));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x486 = -7135846;
	volatile int32_t x488 = -1341987;
	static volatile int32_t t121 = -233943;

    t121 = ((x485<=x486)^(x487>x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x489 = -1;
	volatile int16_t x490 = 0;
	int64_t x491 = -1LL;
	volatile int16_t x492 = -1;

    t122 = ((x489<=x490)^(x491>x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x496 = INT8_MAX;
	volatile int32_t t123 = -23391593;

    t123 = ((x493<=x494)^(x495>x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x497 = 287739U;
	int16_t x498 = 4;
	uint8_t x499 = UINT8_MAX;
	int8_t x500 = -1;
	volatile int32_t t124 = -17;

    t124 = ((x497<=x498)^(x499>x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = INT32_MIN;
	volatile uint8_t x504 = 5U;
	int32_t t125 = -80598;

    t125 = ((x501<=x502)^(x503>x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint16_t x505 = 147U;
	int32_t x506 = -659392294;
	static int64_t x507 = -449518140686LL;
	int32_t x508 = INT32_MIN;

    t126 = ((x505<=x506)^(x507>x508));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x509 = 8;
	volatile int16_t x510 = INT16_MAX;

    t127 = ((x509<=x510)^(x511>x512));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x513 = 6U;
	uint16_t x514 = 5836U;
	static int16_t x515 = 2080;
	int8_t x516 = INT8_MIN;
	int32_t t128 = 12434354;

    t128 = ((x513<=x514)^(x515>x516));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x517 = INT16_MIN;
	int32_t x518 = INT32_MIN;
	int16_t x519 = -1;
	int8_t x520 = -1;
	volatile int32_t t129 = -54449241;

    t129 = ((x517<=x518)^(x519>x520));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x521 = INT16_MIN;
	static int64_t x522 = 2183059123871228881LL;
	uint8_t x523 = UINT8_MAX;
	volatile int16_t x524 = -1;
	volatile int32_t t130 = 2570745;

    t130 = ((x521<=x522)^(x523>x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x525 = -1;
	int64_t x527 = -344447791678LL;
	int16_t x528 = -30;
	int32_t t131 = 30525067;

    t131 = ((x525<=x526)^(x527>x528));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = -1;
	int64_t x532 = INT64_MIN;
	int32_t t132 = -2;

    t132 = ((x529<=x530)^(x531>x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x534 = UINT32_MAX;
	int8_t x535 = 15;
	volatile int32_t t133 = 4;

    t133 = ((x533<=x534)^(x535>x536));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = -3;
	static int8_t x538 = INT8_MIN;
	int64_t x539 = -1LL;
	int8_t x540 = -15;
	volatile int32_t t134 = 5;

    t134 = ((x537<=x538)^(x539>x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x541 = INT64_MIN;
	uint64_t x542 = UINT64_MAX;
	int64_t x544 = -21117155806LL;
	volatile int32_t t135 = 3;

    t135 = ((x541<=x542)^(x543>x544));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x545 = -6694219LL;
	int16_t x546 = -1;
	volatile int64_t x547 = 1565LL;
	int32_t t136 = -3;

    t136 = ((x545<=x546)^(x547>x548));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint8_t x551 = UINT8_MAX;
	static int64_t x552 = 25774451LL;

    t137 = ((x549<=x550)^(x551>x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x553 = -2;
	static int8_t x554 = INT8_MIN;
	static int32_t x556 = 134019;

    t138 = ((x553<=x554)^(x555>x556));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x558 = 1048LL;
	int32_t x559 = INT32_MAX;
	int32_t t139 = -104524;

    t139 = ((x557<=x558)^(x559>x560));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x562 = INT8_MIN;
	volatile int32_t x563 = -45;
	int64_t x564 = -1LL;
	int32_t t140 = 734684;

    t140 = ((x561<=x562)^(x563>x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x565 = INT64_MAX;
	volatile int64_t x566 = -1LL;
	int16_t x567 = INT16_MIN;
	static volatile uint32_t x568 = 619U;

    t141 = ((x565<=x566)^(x567>x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x569 = INT32_MIN;
	static int32_t x570 = INT32_MIN;
	static volatile int8_t x571 = INT8_MAX;
	volatile int32_t t142 = -115;

    t142 = ((x569<=x570)^(x571>x572));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int64_t x573 = INT64_MAX;
	int16_t x574 = INT16_MAX;
	uint16_t x575 = UINT16_MAX;
	static int32_t t143 = 4;

    t143 = ((x573<=x574)^(x575>x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x578 = UINT16_MAX;
	volatile int8_t x579 = INT8_MIN;
	uint8_t x580 = 105U;

    t144 = ((x577<=x578)^(x579>x580));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int16_t x583 = INT16_MIN;
	static int32_t x584 = INT32_MIN;
	static volatile int32_t t145 = 524;

    t145 = ((x581<=x582)^(x583>x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint16_t x585 = UINT16_MAX;
	uint8_t x586 = 1U;
	static int16_t x587 = -1;
	static volatile uint32_t x588 = UINT32_MAX;

    t146 = ((x585<=x586)^(x587>x588));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x589 = 3489375241516337578LLU;
	volatile int16_t x591 = 0;
	volatile uint32_t x592 = UINT32_MAX;
	volatile int32_t t147 = 120832;

    t147 = ((x589<=x590)^(x591>x592));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint16_t x593 = 1050U;
	int16_t x594 = -1;
	volatile uint64_t x595 = UINT64_MAX;
	volatile int8_t x596 = INT8_MIN;
	volatile int32_t t148 = -14428;

    t148 = ((x593<=x594)^(x595>x596));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x597 = 959713;
	uint8_t x599 = 51U;
	static int8_t x600 = 5;
	static volatile int32_t t149 = -80610;

    t149 = ((x597<=x598)^(x599>x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x602 = -9507783547194533LL;
	int16_t x603 = 314;
	int32_t x604 = INT32_MIN;
	int32_t t150 = -27953597;

    t150 = ((x601<=x602)^(x603>x604));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x605 = -1;
	static uint64_t x606 = UINT64_MAX;
	volatile int64_t x607 = INT64_MIN;
	int32_t t151 = 6;

    t151 = ((x605<=x606)^(x607>x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x609 = INT64_MIN;
	int16_t x610 = -1479;
	int32_t x611 = -5644846;
	static volatile int32_t t152 = 6;

    t152 = ((x609<=x610)^(x611>x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x613 = UINT32_MAX;
	static uint64_t x614 = 69LLU;
	volatile int16_t x615 = -5;
	int32_t t153 = 33263946;

    t153 = ((x613<=x614)^(x615>x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x617 = INT64_MIN;
	int32_t x618 = INT32_MAX;
	static int8_t x619 = -28;
	int32_t x620 = 375480875;

    t154 = ((x617<=x618)^(x619>x620));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x622 = UINT32_MAX;
	int8_t x624 = INT8_MAX;
	static volatile int32_t t155 = 230101;

    t155 = ((x621<=x622)^(x623>x624));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x625 = 51152865U;
	static volatile int8_t x626 = INT8_MIN;
	static int32_t t156 = 26539;

    t156 = ((x625<=x626)^(x627>x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x629 = 2U;
	int8_t x630 = INT8_MIN;
	int8_t x631 = -18;
	static int32_t x632 = INT32_MIN;

    t157 = ((x629<=x630)^(x631>x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x633 = 63050520LLU;
	int16_t x634 = INT16_MIN;
	int16_t x635 = 202;
	int32_t t158 = 1;

    t158 = ((x633<=x634)^(x635>x636));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x637 = 28968U;
	uint16_t x638 = 3454U;
	int8_t x639 = -12;
	uint64_t x640 = UINT64_MAX;

    t159 = ((x637<=x638)^(x639>x640));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x641 = INT64_MIN;
	int16_t x642 = -1;
	int32_t x643 = INT32_MIN;
	static int16_t x644 = 753;

    t160 = ((x641<=x642)^(x643>x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x645 = -1;
	uint64_t x646 = 696673715937490656LLU;
	int32_t x647 = -1864;
	int64_t x648 = 15835LL;
	volatile int32_t t161 = 2976;

    t161 = ((x645<=x646)^(x647>x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x649 = INT64_MIN;
	int16_t x650 = INT16_MIN;
	volatile int64_t x651 = 893342LL;
	uint64_t x652 = 1428LLU;

    t162 = ((x649<=x650)^(x651>x652));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint32_t x653 = 18948U;
	uint32_t x654 = UINT32_MAX;
	int32_t x655 = -1;
	volatile uint64_t x656 = 259257LLU;
	int32_t t163 = 4886;

    t163 = ((x653<=x654)^(x655>x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = INT64_MAX;
	static volatile uint64_t x658 = 20506275217405LLU;
	volatile int16_t x659 = -1;
	int16_t x660 = -276;
	int32_t t164 = -77192812;

    t164 = ((x657<=x658)^(x659>x660));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x661 = -1;
	uint16_t x662 = 72U;
	int32_t t165 = 24159;

    t165 = ((x661<=x662)^(x663>x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = -1;
	uint32_t x666 = 6U;
	uint16_t x668 = 2702U;
	volatile int32_t t166 = -6685894;

    t166 = ((x665<=x666)^(x667>x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int8_t x669 = -1;
	int64_t x670 = INT64_MAX;
	int16_t x671 = INT16_MIN;
	uint32_t x672 = 258U;
	volatile int32_t t167 = 1;

    t167 = ((x669<=x670)^(x671>x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x674 = 1;
	int64_t x675 = INT64_MIN;
	volatile int32_t t168 = -965420;

    t168 = ((x673<=x674)^(x675>x676));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x677 = UINT16_MAX;
	volatile int64_t x678 = 38178001104472LL;
	int64_t x679 = INT64_MIN;
	int8_t x680 = 1;
	volatile int32_t t169 = -6;

    t169 = ((x677<=x678)^(x679>x680));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x681 = INT32_MIN;
	int32_t x682 = INT32_MIN;
	int16_t x683 = INT16_MAX;
	int16_t x684 = 1;
	int32_t t170 = -499624268;

    t170 = ((x681<=x682)^(x683>x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x685 = INT16_MIN;
	uint32_t x686 = 423U;
	static int32_t x687 = 8304315;
	int64_t x688 = INT64_MIN;
	volatile int32_t t171 = 8901241;

    t171 = ((x685<=x686)^(x687>x688));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x689 = 663177;
	volatile uint8_t x690 = UINT8_MAX;
	uint32_t x691 = UINT32_MAX;
	static volatile int32_t t172 = -1;

    t172 = ((x689<=x690)^(x691>x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint8_t x693 = 73U;
	int64_t x694 = -1LL;
	int32_t x695 = INT32_MIN;
	static int8_t x696 = INT8_MAX;

    t173 = ((x693<=x694)^(x695>x696));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x697 = 29U;
	static uint16_t x699 = 15421U;
	static int32_t t174 = -105510307;

    t174 = ((x697<=x698)^(x699>x700));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x701 = 1U;
	volatile int32_t x702 = -1;
	int32_t t175 = -54666;

    t175 = ((x701<=x702)^(x703>x704));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x706 = 14288152;
	int64_t x707 = -1LL;
	volatile uint32_t x708 = 73U;
	int32_t t176 = -25302;

    t176 = ((x705<=x706)^(x707>x708));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x710 = -1LL;
	static int64_t x711 = INT64_MIN;
	static int16_t x712 = -542;
	volatile int32_t t177 = -19438075;

    t177 = ((x709<=x710)^(x711>x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x713 = INT64_MIN;
	int16_t x715 = -1;
	uint32_t x716 = UINT32_MAX;
	volatile int32_t t178 = -648;

    t178 = ((x713<=x714)^(x715>x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x717 = INT32_MAX;
	int64_t x719 = -29910990LL;
	int32_t x720 = INT32_MIN;
	volatile int32_t t179 = 1441;

    t179 = ((x717<=x718)^(x719>x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x721 = UINT64_MAX;
	static uint16_t x723 = 15965U;
	int32_t t180 = -11;

    t180 = ((x721<=x722)^(x723>x724));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x725 = UINT32_MAX;
	static int16_t x726 = INT16_MIN;
	static volatile uint8_t x727 = 7U;
	static uint64_t x728 = 1360054977496506055LLU;
	static volatile int32_t t181 = 9;

    t181 = ((x725<=x726)^(x727>x728));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x730 = UINT8_MAX;
	int16_t x731 = INT16_MAX;
	int32_t x732 = INT32_MIN;
	volatile int32_t t182 = 7;

    t182 = ((x729<=x730)^(x731>x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x735 = 3272638LLU;
	static uint8_t x736 = UINT8_MAX;

    t183 = ((x733<=x734)^(x735>x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint32_t x737 = 22U;
	static int32_t x738 = -1;
	static volatile int32_t t184 = -3;

    t184 = ((x737<=x738)^(x739>x740));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile int32_t x741 = INT32_MAX;
	int16_t x742 = INT16_MIN;
	int8_t x743 = -1;
	static uint16_t x744 = UINT16_MAX;
	static int32_t t185 = -384527;

    t185 = ((x741<=x742)^(x743>x744));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x745 = 7679361753787550LLU;
	uint8_t x746 = UINT8_MAX;
	int64_t x747 = -1LL;
	int16_t x748 = INT16_MIN;
	int32_t t186 = 5988;

    t186 = ((x745<=x746)^(x747>x748));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x750 = 1584957810451LLU;
	volatile uint16_t x751 = 3U;
	int16_t x752 = INT16_MAX;
	int32_t t187 = 27473;

    t187 = ((x749<=x750)^(x751>x752));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x753 = INT64_MIN;
	volatile int8_t x754 = INT8_MIN;
	uint8_t x756 = UINT8_MAX;
	static int32_t t188 = 62;

    t188 = ((x753<=x754)^(x755>x756));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x757 = INT64_MAX;
	static volatile int16_t x759 = -1;
	uint64_t x760 = 1287624259654LLU;
	int32_t t189 = -978;

    t189 = ((x757<=x758)^(x759>x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x762 = 1080U;
	uint64_t x764 = 30LLU;
	int32_t t190 = 14;

    t190 = ((x761<=x762)^(x763>x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile uint8_t x765 = 1U;
	uint16_t x767 = 12U;
	uint32_t x768 = UINT32_MAX;
	int32_t t191 = -10019633;

    t191 = ((x765<=x766)^(x767>x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x769 = INT16_MIN;
	volatile uint16_t x770 = UINT16_MAX;
	uint32_t x771 = UINT32_MAX;
	static int32_t t192 = -341710524;

    t192 = ((x769<=x770)^(x771>x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x774 = 0U;
	static int8_t x775 = INT8_MAX;
	int32_t x776 = -1208;
	int32_t t193 = 8744;

    t193 = ((x773<=x774)^(x775>x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x777 = UINT64_MAX;
	volatile int8_t x779 = INT8_MIN;
	volatile int64_t x780 = -1LL;
	int32_t t194 = -7396744;

    t194 = ((x777<=x778)^(x779>x780));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x781 = INT8_MIN;
	volatile uint32_t x782 = UINT32_MAX;
	volatile uint16_t x783 = 6057U;
	int32_t t195 = 62488;

    t195 = ((x781<=x782)^(x783>x784));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x785 = -1;
	uint32_t x786 = 321165U;
	uint32_t x787 = UINT32_MAX;
	int32_t x788 = INT32_MIN;
	static volatile int32_t t196 = 13337;

    t196 = ((x785<=x786)^(x787>x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x789 = INT64_MAX;
	static int16_t x790 = INT16_MIN;
	int8_t x791 = INT8_MIN;
	uint64_t x792 = 24018513LLU;
	volatile int32_t t197 = 671605;

    t197 = ((x789<=x790)^(x791>x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x793 = INT8_MIN;
	int64_t x794 = INT64_MIN;
	int8_t x795 = INT8_MIN;
	volatile int32_t t198 = -20;

    t198 = ((x793<=x794)^(x795>x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x797 = 242142044LL;
	static uint32_t x798 = 45U;
	static int8_t x800 = INT8_MIN;
	volatile int32_t t199 = 81325610;

    t199 = ((x797<=x798)^(x799>x800));

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

