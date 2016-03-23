
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

int8_t x2 = -1;
uint32_t x5 = 66956U;
uint16_t x8 = 17U;
uint32_t x10 = 271U;
static int8_t x16 = -1;
static int16_t x22 = INT16_MIN;
uint16_t x27 = UINT16_MAX;
static volatile int64_t t8 = 7447LL;
int64_t x38 = 0LL;
uint8_t x39 = 123U;
int32_t t9 = 2;
volatile int16_t x47 = 0;
uint32_t x49 = 179U;
volatile int64_t t11 = -47044353130LL;
static uint8_t x53 = 0U;
int32_t x66 = -120277172;
volatile int64_t x70 = INT64_MAX;
int8_t x72 = 3;
int32_t x75 = -2;
uint32_t x83 = UINT32_MAX;
static int32_t x95 = -301875608;
uint8_t x96 = 28U;
volatile int64_t x104 = INT64_MAX;
int16_t x106 = INT16_MIN;
int32_t t25 = -31;
volatile int64_t x115 = INT64_MAX;
static int16_t x124 = INT16_MAX;
uint8_t x131 = UINT8_MAX;
int16_t x133 = INT16_MIN;
int64_t x135 = INT64_MAX;
volatile int8_t x136 = INT8_MAX;
volatile uint64_t x139 = 12557426LLU;
int32_t x150 = -2754;
volatile uint16_t x151 = 4883U;
int32_t x153 = INT32_MAX;
int32_t x157 = INT32_MIN;
int8_t x158 = 8;
volatile uint32_t x162 = UINT32_MAX;
static volatile int32_t t38 = 457818127;
static int32_t t39 = -137763030;
static int64_t x173 = INT64_MIN;
uint32_t x176 = 3U;
int64_t x184 = INT64_MAX;
int64_t t42 = 165LL;
int64_t x187 = -6919LL;
static int32_t t43 = 1;
uint8_t x190 = 60U;
volatile int8_t x200 = -1;
int64_t x207 = -311421024237525383LL;
int64_t t48 = -38LL;
int32_t x213 = -120918764;
static uint32_t x218 = 21328374U;
int8_t x221 = -1;
int32_t x225 = 1;
static uint16_t x227 = UINT16_MAX;
volatile int32_t t53 = -7219682;
volatile uint8_t x240 = 37U;
volatile int32_t t56 = 49228;
uint64_t x241 = 133666366911008LLU;
uint64_t x243 = 6379LLU;
uint32_t x249 = 16072990U;
int32_t x251 = INT32_MIN;
uint16_t x252 = 12035U;
volatile int32_t t60 = 32;
static int64_t x260 = -9830333LL;
volatile int16_t x266 = -3466;
uint32_t x270 = 1348U;
static int8_t x273 = INT8_MAX;
int32_t x274 = INT32_MIN;
uint16_t x277 = 8U;
static volatile int32_t x280 = -1;
static int8_t x283 = INT8_MAX;
int32_t x285 = INT32_MIN;
int32_t x286 = INT32_MIN;
volatile int32_t t69 = 41128;
static uint32_t x297 = 848U;
volatile uint16_t x309 = UINT16_MAX;
int8_t x311 = 0;
int32_t x313 = INT32_MIN;
int8_t x317 = 0;
static int64_t x322 = -476317LL;
int32_t x329 = 92862;
volatile int8_t x336 = INT8_MAX;
int32_t t78 = 16;
volatile int32_t t80 = 47140;
int16_t x351 = INT16_MIN;
uint8_t x354 = UINT8_MAX;
int32_t t83 = -389258;
uint8_t x372 = 3U;
volatile uint8_t x379 = 1U;
int16_t x391 = INT16_MIN;
static uint32_t x392 = 1862512533U;
volatile int32_t t90 = 44466;
int64_t x402 = INT64_MIN;
static volatile int32_t t93 = 13;
int16_t x415 = -58;
volatile uint8_t x420 = 4U;
int32_t x426 = INT32_MIN;
volatile int16_t x428 = -1;
volatile int32_t x431 = -107901820;
volatile uint32_t t99 = 1926U;
static int32_t x437 = INT32_MIN;
int8_t x447 = 1;
int8_t x452 = INT8_MIN;
uint64_t x457 = 244LLU;
uint64_t x465 = UINT64_MAX;
int64_t x468 = 24559265192LL;
static int16_t x470 = INT16_MIN;
static int32_t t107 = 14328398;
int16_t x473 = -9195;
uint8_t x474 = 1U;
int8_t x477 = INT8_MIN;
static volatile uint64_t t109 = 3588LLU;
int16_t x485 = 0;
int8_t x488 = INT8_MAX;
volatile uint8_t x489 = UINT8_MAX;
int8_t x493 = -1;
static int32_t x501 = INT32_MAX;
volatile int8_t x506 = 1;
volatile int8_t x521 = -9;
volatile uint8_t x523 = 5U;
int16_t x531 = INT16_MIN;
uint64_t x542 = 17868841LLU;
uint32_t x543 = 386571U;
uint64_t x545 = 29LLU;
uint32_t x549 = 412104U;
static uint16_t x552 = UINT16_MAX;
int8_t x560 = -1;
int64_t x563 = INT64_MIN;
int32_t x565 = INT32_MIN;
static int32_t x566 = INT32_MIN;
uint32_t x570 = UINT32_MAX;
uint64_t x578 = 101LLU;
volatile uint64_t x583 = 1318418515157352752LLU;
int64_t x587 = -1LL;
int8_t x588 = -1;
static volatile uint32_t x589 = UINT32_MAX;
static int64_t x591 = INT64_MIN;
uint16_t x593 = UINT16_MAX;
static volatile int32_t x597 = INT32_MAX;
volatile int16_t x598 = INT16_MIN;
int64_t x601 = INT64_MIN;
volatile int32_t t142 = 1;
uint8_t x617 = 24U;
volatile int32_t x624 = -499515645;
uint32_t x625 = 6U;
int64_t x628 = -1LL;
static uint8_t x629 = 29U;
int32_t x631 = 13215;
int16_t x642 = INT16_MIN;
int32_t x643 = -336804961;
volatile uint16_t x644 = UINT16_MAX;
int8_t x646 = INT8_MAX;
int32_t x647 = INT32_MIN;
uint32_t x648 = 312497552U;
int64_t x670 = INT64_MIN;
static int32_t t156 = -217870;
int16_t x673 = -1;
uint16_t x683 = UINT16_MAX;
int32_t t159 = 11;
int16_t x688 = -1;
int32_t t160 = -1;
volatile uint8_t x696 = UINT8_MAX;
volatile int16_t x702 = 0;
int64_t x704 = -1LL;
static int32_t x705 = INT32_MAX;
int16_t x706 = INT16_MIN;
static volatile uint32_t x708 = UINT32_MAX;
static int16_t x711 = -908;
uint64_t x712 = 9916218LLU;
static int32_t x713 = INT32_MIN;
int8_t x715 = INT8_MIN;
volatile uint64_t t167 = 235812LLU;
uint64_t x726 = 540224441628890516LLU;
uint8_t x728 = 0U;
volatile int32_t t168 = -169682325;
int64_t x733 = -26026967014LL;
int32_t t170 = 222;
static int64_t x738 = -1LL;
uint32_t x740 = 22804635U;
uint16_t x742 = 1U;
int16_t x750 = 12;
uint64_t x755 = 98661LLU;
int16_t x760 = 176;
int32_t x770 = 61372;
uint8_t x777 = 78U;
int8_t x780 = INT8_MAX;
int64_t x782 = -3449124193611526635LL;
int8_t x784 = 49;
static volatile int16_t x788 = -1;
uint8_t x789 = UINT8_MAX;
int64_t x794 = 30644990484LL;
static int8_t x798 = 1;
int16_t x800 = INT16_MAX;
static int32_t t185 = -36;
int8_t x805 = 1;
int64_t x811 = INT64_MIN;
static int32_t x818 = -1;
uint32_t x819 = 900946U;
int64_t x822 = -468069581862324274LL;
uint16_t x826 = 6914U;
int8_t x833 = -1;
int8_t x844 = INT8_MIN;
uint8_t x849 = UINT8_MAX;
uint8_t x851 = UINT8_MAX;
int32_t x854 = INT32_MIN;
volatile int64_t x859 = INT64_MIN;


void f0(void) {
    	int64_t x1 = INT64_MIN;
	int64_t x3 = INT64_MIN;
	int8_t x4 = INT8_MIN;
	int32_t t0 = 117;

    t0 = (((x1|x2)==x3)-x4);

    if (t0 != 128) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x6 = INT64_MAX;
	int32_t x7 = 356546;
	int32_t t1 = 3;

    t1 = (((x5|x6)==x7)-x8);

    if (t1 != -17) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = 4244977;
	uint8_t x11 = UINT8_MAX;
	int16_t x12 = 1865;
	static int32_t t2 = 206025170;

    t2 = (((x9|x10)==x11)-x12);

    if (t2 != -1865) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int16_t x13 = -1;
	int64_t x14 = INT64_MAX;
	int16_t x15 = INT16_MIN;
	int32_t t3 = 480768;

    t3 = (((x13|x14)==x15)-x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = 520374;
	uint32_t x18 = 121452543U;
	static int32_t x19 = 2633024;
	static uint8_t x20 = UINT8_MAX;
	int32_t t4 = -2;

    t4 = (((x17|x18)==x19)-x20);

    if (t4 != -255) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = INT8_MIN;
	volatile uint16_t x23 = 0U;
	uint64_t x24 = 239004558LLU;
	uint64_t t5 = 41194607495LLU;

    t5 = (((x21|x22)==x23)-x24);

    if (t5 != 18446744073470547058LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MIN;
	uint32_t x26 = 6U;
	int64_t x28 = -1LL;
	int64_t t6 = 2548301LL;

    t6 = (((x25|x26)==x27)-x28);

    if (t6 != 1LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint32_t x29 = 6370232U;
	volatile int32_t x30 = INT32_MIN;
	static int8_t x31 = INT8_MIN;
	uint8_t x32 = 1U;
	int32_t t7 = -16719;

    t7 = (((x29|x30)==x31)-x32);

    if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x33 = -1LL;
	int32_t x34 = INT32_MIN;
	int32_t x35 = INT32_MIN;
	static int64_t x36 = INT64_MAX;

    t8 = (((x33|x34)==x35)-x36);

    if (t8 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x37 = UINT8_MAX;
	volatile int16_t x40 = INT16_MIN;

    t9 = (((x37|x38)==x39)-x40);

    if (t9 != 32768) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint16_t x45 = 1U;
	static volatile int32_t x46 = 5;
	int64_t x48 = -1LL;
	volatile int64_t t10 = 1558804500353566610LL;

    t10 = (((x45|x46)==x47)-x48);

    if (t10 != 1LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x50 = INT32_MAX;
	volatile int8_t x51 = 3;
	int64_t x52 = -1460399339449LL;

    t11 = (((x49|x50)==x51)-x52);

    if (t11 != 1460399339449LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x54 = -1;
	int16_t x55 = INT16_MAX;
	volatile int32_t x56 = -855280;
	volatile int32_t t12 = 803305;

    t12 = (((x53|x54)==x55)-x56);

    if (t12 != 855280) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x57 = INT32_MAX;
	volatile uint64_t x58 = 501239469LLU;
	int64_t x59 = INT64_MIN;
	uint32_t x60 = 16355U;
	uint32_t t13 = 1769U;

    t13 = (((x57|x58)==x59)-x60);

    if (t13 != 4294950941U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x61 = 2U;
	int64_t x62 = -335755LL;
	static int8_t x63 = INT8_MIN;
	static int8_t x64 = INT8_MIN;
	int32_t t14 = 33498;

    t14 = (((x61|x62)==x63)-x64);

    if (t14 != 128) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x65 = INT64_MIN;
	int32_t x67 = INT32_MAX;
	int16_t x68 = -82;
	int32_t t15 = 0;

    t15 = (((x65|x66)==x67)-x68);

    if (t15 != 82) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x69 = 36U;
	int8_t x71 = INT8_MAX;
	int32_t t16 = -441;

    t16 = (((x69|x70)==x71)-x72);

    if (t16 != -3) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x73 = INT16_MIN;
	volatile int16_t x74 = INT16_MIN;
	int8_t x76 = INT8_MIN;
	static volatile int32_t t17 = 3510538;

    t17 = (((x73|x74)==x75)-x76);

    if (t17 != 128) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x77 = INT16_MAX;
	static int8_t x78 = -1;
	int64_t x79 = -18529878917LL;
	uint8_t x80 = 61U;
	volatile int32_t t18 = 111;

    t18 = (((x77|x78)==x79)-x80);

    if (t18 != -61) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x81 = INT64_MAX;
	int32_t x82 = 24789810;
	int8_t x84 = 11;
	int32_t t19 = 5890515;

    t19 = (((x81|x82)==x83)-x84);

    if (t19 != -11) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x85 = 966U;
	int16_t x86 = INT16_MAX;
	uint32_t x87 = 91231356U;
	volatile uint16_t x88 = 3U;
	int32_t t20 = -381;

    t20 = (((x85|x86)==x87)-x88);

    if (t20 != -3) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x89 = 1;
	volatile int8_t x90 = INT8_MIN;
	int8_t x91 = INT8_MIN;
	static int16_t x92 = -1;
	volatile int32_t t21 = -200486;

    t21 = (((x89|x90)==x91)-x92);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x93 = INT32_MIN;
	int64_t x94 = 473236LL;
	volatile int32_t t22 = -129348508;

    t22 = (((x93|x94)==x95)-x96);

    if (t22 != -28) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x97 = INT8_MAX;
	int16_t x98 = INT16_MIN;
	static uint64_t x99 = 1072900950846LLU;
	int32_t x100 = -1;
	volatile int32_t t23 = 5817402;

    t23 = (((x97|x98)==x99)-x100);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x101 = 1923820212834117LLU;
	volatile int64_t x102 = INT64_MIN;
	uint8_t x103 = 4U;
	int64_t t24 = -262525538043478LL;

    t24 = (((x101|x102)==x103)-x104);

    if (t24 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x105 = INT8_MIN;
	uint16_t x107 = 1164U;
	int16_t x108 = -1;

    t25 = (((x105|x106)==x107)-x108);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x113 = -86246399;
	uint8_t x114 = 1U;
	uint64_t x116 = 1195729LLU;
	static uint64_t t26 = 821861260803217218LLU;

    t26 = (((x113|x114)==x115)-x116);

    if (t26 != 18446744073708355887LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x117 = -7442932238557610LL;
	volatile int64_t x118 = INT64_MIN;
	int8_t x119 = -11;
	volatile uint8_t x120 = UINT8_MAX;
	int32_t t27 = 132625;

    t27 = (((x117|x118)==x119)-x120);

    if (t27 != -255) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x121 = -14LL;
	static int64_t x122 = 3LL;
	uint16_t x123 = UINT16_MAX;
	int32_t t28 = -2929;

    t28 = (((x121|x122)==x123)-x124);

    if (t28 != -32767) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x125 = INT64_MIN;
	static int8_t x126 = -1;
	int32_t x127 = INT32_MAX;
	int32_t x128 = -456;
	int32_t t29 = 1;

    t29 = (((x125|x126)==x127)-x128);

    if (t29 != 456) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x129 = INT16_MAX;
	uint32_t x130 = 1544655U;
	volatile int16_t x132 = -6;
	int32_t t30 = 845168819;

    t30 = (((x129|x130)==x131)-x132);

    if (t30 != 6) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x134 = INT64_MAX;
	volatile int32_t t31 = -1;

    t31 = (((x133|x134)==x135)-x136);

    if (t31 != -127) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x137 = 53U;
	uint8_t x138 = 15U;
	uint16_t x140 = 28U;
	volatile int32_t t32 = 2637883;

    t32 = (((x137|x138)==x139)-x140);

    if (t32 != -28) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x141 = INT32_MIN;
	int64_t x142 = -17268948LL;
	int16_t x143 = -1;
	int16_t x144 = -164;
	static volatile int32_t t33 = -1;

    t33 = (((x141|x142)==x143)-x144);

    if (t33 != 164) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint8_t x145 = 10U;
	static int64_t x146 = INT64_MAX;
	static uint64_t x147 = 53LLU;
	int32_t x148 = INT32_MAX;
	int32_t t34 = -315079;

    t34 = (((x145|x146)==x147)-x148);

    if (t34 != -2147483647) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x149 = -11021027848548LL;
	volatile uint16_t x152 = 1071U;
	int32_t t35 = 7;

    t35 = (((x149|x150)==x151)-x152);

    if (t35 != -1071) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x154 = -1;
	static int8_t x155 = -1;
	volatile int8_t x156 = -1;
	volatile int32_t t36 = 173067038;

    t36 = (((x153|x154)==x155)-x156);

    if (t36 != 2) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x159 = 46;
	int8_t x160 = 13;
	int32_t t37 = -710421;

    t37 = (((x157|x158)==x159)-x160);

    if (t37 != -13) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int32_t x161 = INT32_MIN;
	int8_t x163 = -1;
	int8_t x164 = INT8_MAX;

    t38 = (((x161|x162)==x163)-x164);

    if (t38 != -126) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x169 = UINT16_MAX;
	int16_t x170 = -24;
	int32_t x171 = -1;
	int8_t x172 = INT8_MAX;

    t39 = (((x169|x170)==x171)-x172);

    if (t39 != -126) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x174 = INT32_MAX;
	uint8_t x175 = UINT8_MAX;
	volatile uint32_t t40 = 1071614U;

    t40 = (((x173|x174)==x175)-x176);

    if (t40 != 4294967293U) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x177 = 834754268693533068LLU;
	int8_t x178 = INT8_MIN;
	int32_t x179 = -1;
	uint32_t x180 = UINT32_MAX;
	volatile uint32_t t41 = 2555U;

    t41 = (((x177|x178)==x179)-x180);

    if (t41 != 1U) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x181 = INT16_MAX;
	uint64_t x182 = 148536151LLU;
	int32_t x183 = INT32_MIN;

    t42 = (((x181|x182)==x183)-x184);

    if (t42 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x185 = 1U;
	uint16_t x186 = UINT16_MAX;
	uint16_t x188 = 20828U;

    t43 = (((x185|x186)==x187)-x188);

    if (t43 != -20828) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int8_t x189 = INT8_MIN;
	static int16_t x191 = INT16_MIN;
	uint32_t x192 = 149228U;
	volatile uint32_t t44 = 52U;

    t44 = (((x189|x190)==x191)-x192);

    if (t44 != 4294818068U) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x193 = INT8_MAX;
	static int16_t x194 = INT16_MIN;
	uint32_t x195 = UINT32_MAX;
	int16_t x196 = -1;
	volatile int32_t t45 = 207705838;

    t45 = (((x193|x194)==x195)-x196);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint8_t x197 = UINT8_MAX;
	uint8_t x198 = 27U;
	int32_t x199 = -361281;
	volatile int32_t t46 = -93930412;

    t46 = (((x197|x198)==x199)-x200);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x201 = INT8_MAX;
	volatile int64_t x202 = INT64_MAX;
	static int64_t x203 = -506451833370349LL;
	static int8_t x204 = INT8_MIN;
	static volatile int32_t t47 = 73442;

    t47 = (((x201|x202)==x203)-x204);

    if (t47 != 128) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x205 = 1;
	static int64_t x206 = INT64_MAX;
	volatile int64_t x208 = -1LL;

    t48 = (((x205|x206)==x207)-x208);

    if (t48 != 1LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x209 = -1LL;
	int16_t x210 = INT16_MIN;
	static uint16_t x211 = 4511U;
	uint8_t x212 = 2U;
	int32_t t49 = -5797434;

    t49 = (((x209|x210)==x211)-x212);

    if (t49 != -2) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int16_t x214 = 1384;
	int16_t x215 = -1;
	int8_t x216 = INT8_MIN;
	int32_t t50 = -294209;

    t50 = (((x213|x214)==x215)-x216);

    if (t50 != 128) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x217 = -203295058LL;
	int32_t x219 = INT32_MIN;
	uint16_t x220 = 32150U;
	int32_t t51 = -8234422;

    t51 = (((x217|x218)==x219)-x220);

    if (t51 != -32150) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x222 = INT64_MIN;
	static volatile int16_t x223 = -13087;
	int16_t x224 = 364;
	volatile int32_t t52 = -7581;

    t52 = (((x221|x222)==x223)-x224);

    if (t52 != -364) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x226 = -1LL;
	volatile int32_t x228 = 22;

    t53 = (((x225|x226)==x227)-x228);

    if (t53 != -22) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x229 = INT64_MIN;
	int32_t x230 = INT32_MIN;
	volatile uint8_t x231 = 41U;
	static uint32_t x232 = UINT32_MAX;
	static volatile uint32_t t54 = 9723674U;

    t54 = (((x229|x230)==x231)-x232);

    if (t54 != 1U) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x233 = INT64_MIN;
	static volatile int16_t x234 = INT16_MAX;
	static volatile uint64_t x235 = UINT64_MAX;
	uint8_t x236 = UINT8_MAX;
	int32_t t55 = 67844;

    t55 = (((x233|x234)==x235)-x236);

    if (t55 != -255) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x237 = INT8_MIN;
	uint64_t x238 = UINT64_MAX;
	uint8_t x239 = UINT8_MAX;

    t56 = (((x237|x238)==x239)-x240);

    if (t56 != -37) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint32_t x242 = UINT32_MAX;
	static int32_t x244 = -1;
	static volatile int32_t t57 = -483583;

    t57 = (((x241|x242)==x243)-x244);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x245 = INT64_MAX;
	volatile uint16_t x246 = UINT16_MAX;
	static volatile uint64_t x247 = UINT64_MAX;
	uint16_t x248 = UINT16_MAX;
	volatile int32_t t58 = -23;

    t58 = (((x245|x246)==x247)-x248);

    if (t58 != -65535) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int16_t x250 = INT16_MAX;
	int32_t t59 = 659620;

    t59 = (((x249|x250)==x251)-x252);

    if (t59 != -12035) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x253 = INT16_MAX;
	int16_t x254 = 745;
	volatile int64_t x255 = -12LL;
	int32_t x256 = 30752472;

    t60 = (((x253|x254)==x255)-x256);

    if (t60 != -30752472) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint64_t x257 = UINT64_MAX;
	volatile uint8_t x258 = 119U;
	static int64_t x259 = -1471LL;
	int64_t t61 = -48153791447506959LL;

    t61 = (((x257|x258)==x259)-x260);

    if (t61 != 9830333LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x261 = INT8_MIN;
	static uint64_t x262 = 34LLU;
	volatile int8_t x263 = INT8_MAX;
	static int16_t x264 = -1;
	volatile int32_t t62 = 4303;

    t62 = (((x261|x262)==x263)-x264);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x265 = INT64_MAX;
	int32_t x267 = 462;
	static int8_t x268 = INT8_MAX;
	int32_t t63 = 1;

    t63 = (((x265|x266)==x267)-x268);

    if (t63 != -127) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x269 = 0U;
	volatile uint16_t x271 = 1U;
	static int16_t x272 = INT16_MIN;
	volatile int32_t t64 = -97961665;

    t64 = (((x269|x270)==x271)-x272);

    if (t64 != 32768) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint16_t x275 = UINT16_MAX;
	int16_t x276 = INT16_MAX;
	volatile int32_t t65 = -215;

    t65 = (((x273|x274)==x275)-x276);

    if (t65 != -32767) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x278 = -1LL;
	uint64_t x279 = 2234103103830539LLU;
	int32_t t66 = -630446;

    t66 = (((x277|x278)==x279)-x280);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x281 = INT64_MIN;
	volatile int8_t x282 = 0;
	int16_t x284 = 0;
	volatile int32_t t67 = 60321202;

    t67 = (((x281|x282)==x283)-x284);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x287 = INT32_MIN;
	volatile int8_t x288 = 0;
	volatile int32_t t68 = -991433;

    t68 = (((x285|x286)==x287)-x288);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint64_t x289 = 108LLU;
	int32_t x290 = -1;
	int8_t x291 = INT8_MIN;
	volatile int16_t x292 = INT16_MIN;

    t69 = (((x289|x290)==x291)-x292);

    if (t69 != 32768) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x298 = -31;
	uint8_t x299 = 113U;
	int64_t x300 = 31316042374713LL;
	volatile int64_t t70 = -68231729910351949LL;

    t70 = (((x297|x298)==x299)-x300);

    if (t70 != -31316042374713LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x301 = -1LL;
	volatile int16_t x302 = 971;
	static volatile int32_t x303 = INT32_MIN;
	volatile uint64_t x304 = 10679LLU;
	uint64_t t71 = 53480968885404839LLU;

    t71 = (((x301|x302)==x303)-x304);

    if (t71 != 18446744073709540937LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x305 = 104810024681LLU;
	volatile int64_t x306 = INT64_MAX;
	int32_t x307 = INT32_MIN;
	static int16_t x308 = INT16_MIN;
	static int32_t t72 = 8600601;

    t72 = (((x305|x306)==x307)-x308);

    if (t72 != 32768) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x310 = INT32_MIN;
	uint32_t x312 = 9741U;
	volatile uint32_t t73 = 146U;

    t73 = (((x309|x310)==x311)-x312);

    if (t73 != 4294957555U) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x314 = INT8_MIN;
	volatile int16_t x315 = 403;
	int16_t x316 = INT16_MAX;
	volatile int32_t t74 = -1;

    t74 = (((x313|x314)==x315)-x316);

    if (t74 != -32767) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint16_t x318 = 31062U;
	volatile uint16_t x319 = 149U;
	volatile int64_t x320 = INT64_MAX;
	volatile int64_t t75 = 6496046207842LL;

    t75 = (((x317|x318)==x319)-x320);

    if (t75 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x321 = 93450859LL;
	uint16_t x323 = 544U;
	int32_t x324 = 1533;
	static int32_t t76 = -8698317;

    t76 = (((x321|x322)==x323)-x324);

    if (t76 != -1533) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x330 = INT8_MIN;
	int32_t x331 = INT32_MIN;
	uint32_t x332 = 0U;
	volatile uint32_t t77 = 1599795U;

    t77 = (((x329|x330)==x331)-x332);

    if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x333 = UINT8_MAX;
	int8_t x334 = INT8_MIN;
	int64_t x335 = -1LL;

    t78 = (((x333|x334)==x335)-x336);

    if (t78 != -126) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x337 = 13393;
	volatile uint32_t x338 = 6044U;
	uint16_t x339 = 9U;
	int32_t x340 = INT32_MAX;
	int32_t t79 = 0;

    t79 = (((x337|x338)==x339)-x340);

    if (t79 != -2147483647) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x341 = -1;
	volatile int32_t x342 = INT32_MIN;
	uint32_t x343 = 0U;
	int16_t x344 = INT16_MIN;

    t80 = (((x341|x342)==x343)-x344);

    if (t80 != 32768) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x345 = 27223356LLU;
	int32_t x346 = 459878;
	uint8_t x347 = UINT8_MAX;
	int32_t x348 = 0;
	int32_t t81 = 123075;

    t81 = (((x345|x346)==x347)-x348);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x349 = 188;
	uint32_t x350 = 2024658U;
	int32_t x352 = INT32_MAX;
	static volatile int32_t t82 = -162550;

    t82 = (((x349|x350)==x351)-x352);

    if (t82 != -2147483647) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x353 = 16;
	volatile int16_t x355 = -1;
	uint16_t x356 = 14246U;

    t83 = (((x353|x354)==x355)-x356);

    if (t83 != -14246) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x365 = UINT8_MAX;
	int64_t x366 = INT64_MAX;
	static uint64_t x367 = 576965378775058LLU;
	int32_t x368 = -1;
	volatile int32_t t84 = 7472523;

    t84 = (((x365|x366)==x367)-x368);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x369 = -5293695610765934LL;
	int8_t x370 = INT8_MAX;
	volatile int32_t x371 = 96776;
	volatile int32_t t85 = 5021;

    t85 = (((x369|x370)==x371)-x372);

    if (t85 != -3) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x373 = -1;
	volatile int16_t x374 = INT16_MIN;
	int64_t x375 = -15230728094544922LL;
	int64_t x376 = -275LL;
	volatile int64_t t86 = -665776637742LL;

    t86 = (((x373|x374)==x375)-x376);

    if (t86 != 275LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x377 = -35;
	int8_t x378 = -23;
	int64_t x380 = 5695175709242LL;
	int64_t t87 = 7117246313389689LL;

    t87 = (((x377|x378)==x379)-x380);

    if (t87 != -5695175709242LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x381 = 891277748152055LLU;
	int64_t x382 = INT64_MIN;
	int16_t x383 = -2397;
	uint32_t x384 = 439293U;
	volatile uint32_t t88 = 30U;

    t88 = (((x381|x382)==x383)-x384);

    if (t88 != 4294528003U) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x389 = 0;
	uint16_t x390 = 14606U;
	volatile uint32_t t89 = 2995130U;

    t89 = (((x389|x390)==x391)-x392);

    if (t89 != 2432454763U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x393 = 33023419LLU;
	uint64_t x394 = 4140896LLU;
	static volatile int8_t x395 = INT8_MIN;
	uint8_t x396 = 23U;

    t90 = (((x393|x394)==x395)-x396);

    if (t90 != -23) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x397 = 16616280;
	int64_t x398 = INT64_MIN;
	static volatile int16_t x399 = INT16_MAX;
	static int8_t x400 = -1;
	int32_t t91 = -89;

    t91 = (((x397|x398)==x399)-x400);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x401 = -1LL;
	static int32_t x403 = 61661;
	volatile int16_t x404 = 218;
	volatile int32_t t92 = 989967581;

    t92 = (((x401|x402)==x403)-x404);

    if (t92 != -218) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x405 = INT8_MAX;
	uint8_t x406 = 53U;
	int16_t x407 = -1;
	int16_t x408 = -284;

    t93 = (((x405|x406)==x407)-x408);

    if (t93 != 284) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x409 = 413656LLU;
	volatile int32_t x410 = -116177714;
	uint16_t x411 = 464U;
	uint8_t x412 = 1U;
	volatile int32_t t94 = 424;

    t94 = (((x409|x410)==x411)-x412);

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x413 = INT64_MIN;
	int8_t x414 = -1;
	int32_t x416 = 1747525;
	volatile int32_t t95 = -8709;

    t95 = (((x413|x414)==x415)-x416);

    if (t95 != -1747525) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x417 = -1;
	uint16_t x418 = 13U;
	int16_t x419 = -1;
	static volatile int32_t t96 = 213450;

    t96 = (((x417|x418)==x419)-x420);

    if (t96 != -3) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x425 = INT32_MAX;
	int16_t x427 = 1;
	volatile int32_t t97 = -19365792;

    t97 = (((x425|x426)==x427)-x428);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x429 = 3202U;
	volatile int64_t x430 = INT64_MIN;
	uint32_t x432 = 12U;
	volatile uint32_t t98 = 143685632U;

    t98 = (((x429|x430)==x431)-x432);

    if (t98 != 4294967284U) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint32_t x433 = UINT32_MAX;
	volatile int32_t x434 = INT32_MIN;
	int16_t x435 = INT16_MIN;
	uint32_t x436 = UINT32_MAX;

    t99 = (((x433|x434)==x435)-x436);

    if (t99 != 1U) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x438 = INT64_MIN;
	static uint32_t x439 = 675029U;
	int8_t x440 = INT8_MIN;
	volatile int32_t t100 = 5818769;

    t100 = (((x437|x438)==x439)-x440);

    if (t100 != 128) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x441 = UINT16_MAX;
	uint64_t x442 = UINT64_MAX;
	uint8_t x443 = 4U;
	static uint8_t x444 = UINT8_MAX;
	int32_t t101 = 3;

    t101 = (((x441|x442)==x443)-x444);

    if (t101 != -255) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x445 = UINT64_MAX;
	volatile int16_t x446 = 401;
	int64_t x448 = INT64_MAX;
	int64_t t102 = 51711686216981LL;

    t102 = (((x445|x446)==x447)-x448);

    if (t102 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x449 = -1;
	int16_t x450 = -1;
	static int64_t x451 = INT64_MIN;
	int32_t t103 = 14;

    t103 = (((x449|x450)==x451)-x452);

    if (t103 != 128) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x453 = INT64_MIN;
	int8_t x454 = 5;
	uint16_t x455 = 15426U;
	volatile int32_t x456 = -1905;
	volatile int32_t t104 = -16404059;

    t104 = (((x453|x454)==x455)-x456);

    if (t104 != 1905) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x458 = INT64_MIN;
	volatile uint8_t x459 = UINT8_MAX;
	static int16_t x460 = INT16_MIN;
	volatile int32_t t105 = 891699;

    t105 = (((x457|x458)==x459)-x460);

    if (t105 != 32768) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint16_t x466 = 78U;
	int32_t x467 = -1;
	int64_t t106 = 1640096911804767593LL;

    t106 = (((x465|x466)==x467)-x468);

    if (t106 != -24559265191LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x469 = 0U;
	int8_t x471 = INT8_MIN;
	volatile uint8_t x472 = 41U;

    t107 = (((x469|x470)==x471)-x472);

    if (t107 != -41) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x475 = 1;
	static int8_t x476 = -2;
	static volatile int32_t t108 = -18;

    t108 = (((x473|x474)==x475)-x476);

    if (t108 != 2) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x478 = INT16_MAX;
	int64_t x479 = INT64_MIN;
	static uint64_t x480 = 387401LLU;

    t109 = (((x477|x478)==x479)-x480);

    if (t109 != 18446744073709164215LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x481 = INT8_MIN;
	int32_t x482 = INT32_MAX;
	uint16_t x483 = 11U;
	uint8_t x484 = 1U;
	volatile int32_t t110 = -439;

    t110 = (((x481|x482)==x483)-x484);

    if (t110 != -1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x486 = 36770144LLU;
	int8_t x487 = INT8_MIN;
	volatile int32_t t111 = 97385223;

    t111 = (((x485|x486)==x487)-x488);

    if (t111 != -127) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x490 = 188LLU;
	static int16_t x491 = -9;
	volatile int16_t x492 = -222;
	static int32_t t112 = -41;

    t112 = (((x489|x490)==x491)-x492);

    if (t112 != 222) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x494 = 2U;
	int8_t x495 = 4;
	uint16_t x496 = 28569U;
	volatile int32_t t113 = -427810280;

    t113 = (((x493|x494)==x495)-x496);

    if (t113 != -28569) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x497 = 15288;
	int16_t x498 = INT16_MIN;
	volatile int64_t x499 = -61983145983167466LL;
	uint32_t x500 = UINT32_MAX;
	uint32_t t114 = 66561858U;

    t114 = (((x497|x498)==x499)-x500);

    if (t114 != 1U) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x502 = 1110U;
	uint16_t x503 = UINT16_MAX;
	uint16_t x504 = 15735U;
	int32_t t115 = 556563866;

    t115 = (((x501|x502)==x503)-x504);

    if (t115 != -15735) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x505 = -1;
	volatile uint32_t x507 = 712158U;
	uint16_t x508 = 26U;
	volatile int32_t t116 = -13020912;

    t116 = (((x505|x506)==x507)-x508);

    if (t116 != -26) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x513 = INT64_MIN;
	static int16_t x514 = 0;
	int32_t x515 = -689;
	int32_t x516 = -1;
	int32_t t117 = -1647274;

    t117 = (((x513|x514)==x515)-x516);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x517 = INT32_MIN;
	uint8_t x518 = UINT8_MAX;
	uint8_t x519 = 15U;
	static int32_t x520 = -1;
	volatile int32_t t118 = 967401585;

    t118 = (((x517|x518)==x519)-x520);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x522 = 67362290LL;
	uint16_t x524 = 282U;
	volatile int32_t t119 = 10206;

    t119 = (((x521|x522)==x523)-x524);

    if (t119 != -282) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x525 = INT64_MAX;
	int16_t x526 = -2;
	int64_t x527 = -613367995157262727LL;
	static int8_t x528 = 24;
	volatile int32_t t120 = 22;

    t120 = (((x525|x526)==x527)-x528);

    if (t120 != -24) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x529 = 3;
	int32_t x530 = INT32_MAX;
	uint8_t x532 = UINT8_MAX;
	static volatile int32_t t121 = 121626907;

    t121 = (((x529|x530)==x531)-x532);

    if (t121 != -255) { NG(); } else { ; }
	
}

void f122(void) {
    	static int64_t x533 = -702054571387LL;
	int16_t x534 = INT16_MAX;
	static int64_t x535 = -16702932030LL;
	volatile uint32_t x536 = UINT32_MAX;
	uint32_t t122 = 1806729189U;

    t122 = (((x533|x534)==x535)-x536);

    if (t122 != 1U) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x537 = 512U;
	volatile int32_t x538 = -25;
	static int16_t x539 = INT16_MIN;
	int16_t x540 = INT16_MIN;
	volatile int32_t t123 = -15893;

    t123 = (((x537|x538)==x539)-x540);

    if (t123 != 32768) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x541 = INT8_MAX;
	uint16_t x544 = 23U;
	volatile int32_t t124 = -193;

    t124 = (((x541|x542)==x543)-x544);

    if (t124 != -23) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x546 = 51U;
	volatile int64_t x547 = INT64_MIN;
	static volatile int32_t x548 = -1;
	int32_t t125 = 121816;

    t125 = (((x545|x546)==x547)-x548);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x550 = -1LL;
	uint16_t x551 = 109U;
	volatile int32_t t126 = 664484071;

    t126 = (((x549|x550)==x551)-x552);

    if (t126 != -65535) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x553 = UINT32_MAX;
	volatile int32_t x554 = -1653;
	static int64_t x555 = INT64_MIN;
	volatile uint64_t x556 = 591261918LLU;
	uint64_t t127 = 48436254502885886LLU;

    t127 = (((x553|x554)==x555)-x556);

    if (t127 != 18446744073118289698LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x557 = 22U;
	int8_t x558 = -1;
	int16_t x559 = -1;
	volatile int32_t t128 = -46645655;

    t128 = (((x557|x558)==x559)-x560);

    if (t128 != 2) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x561 = -1;
	uint16_t x562 = 3964U;
	int8_t x564 = 1;
	int32_t t129 = -204316;

    t129 = (((x561|x562)==x563)-x564);

    if (t129 != -1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x567 = 11228U;
	int64_t x568 = INT64_MAX;
	static volatile int64_t t130 = 15987467716681LL;

    t130 = (((x565|x566)==x567)-x568);

    if (t130 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x569 = -1;
	int32_t x571 = -1;
	int32_t x572 = -1;
	int32_t t131 = 1543571;

    t131 = (((x569|x570)==x571)-x572);

    if (t131 != 2) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x573 = -1;
	int16_t x574 = 1;
	int16_t x575 = 319;
	int16_t x576 = 1048;
	int32_t t132 = -1257;

    t132 = (((x573|x574)==x575)-x576);

    if (t132 != -1048) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x577 = 1LLU;
	uint8_t x579 = 4U;
	uint16_t x580 = 1035U;
	static volatile int32_t t133 = 18;

    t133 = (((x577|x578)==x579)-x580);

    if (t133 != -1035) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x581 = INT64_MIN;
	volatile uint8_t x582 = UINT8_MAX;
	int8_t x584 = INT8_MIN;
	volatile int32_t t134 = -28;

    t134 = (((x581|x582)==x583)-x584);

    if (t134 != 128) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile uint16_t x585 = 0U;
	int16_t x586 = 94;
	static int32_t t135 = -496654;

    t135 = (((x585|x586)==x587)-x588);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x590 = 1;
	uint16_t x592 = 37U;
	volatile int32_t t136 = 5;

    t136 = (((x589|x590)==x591)-x592);

    if (t136 != -37) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x594 = INT32_MIN;
	static int32_t x595 = 86402;
	int8_t x596 = INT8_MAX;
	int32_t t137 = -27811302;

    t137 = (((x593|x594)==x595)-x596);

    if (t137 != -127) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x599 = 3U;
	uint64_t x600 = 19543345539479157LLU;
	uint64_t t138 = 774190978961LLU;

    t138 = (((x597|x598)==x599)-x600);

    if (t138 != 18427200728170072459LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x602 = -5;
	uint16_t x603 = 467U;
	static volatile int16_t x604 = -54;
	int32_t t139 = -1;

    t139 = (((x601|x602)==x603)-x604);

    if (t139 != 54) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x605 = 98028782U;
	static int8_t x606 = 2;
	int16_t x607 = 15;
	int16_t x608 = -172;
	volatile int32_t t140 = 1801;

    t140 = (((x605|x606)==x607)-x608);

    if (t140 != 172) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x609 = INT16_MIN;
	static uint16_t x610 = UINT16_MAX;
	uint32_t x611 = 55031172U;
	uint32_t x612 = 6U;
	volatile uint32_t t141 = 24225U;

    t141 = (((x609|x610)==x611)-x612);

    if (t141 != 4294967290U) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int32_t x613 = 13;
	int64_t x614 = -3594679556613265LL;
	static int64_t x615 = INT64_MAX;
	int8_t x616 = -1;

    t142 = (((x613|x614)==x615)-x616);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x618 = INT32_MAX;
	volatile int32_t x619 = INT32_MIN;
	volatile uint32_t x620 = UINT32_MAX;
	volatile uint32_t t143 = 61U;

    t143 = (((x617|x618)==x619)-x620);

    if (t143 != 1U) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x621 = INT32_MAX;
	uint64_t x622 = 51022078420497LLU;
	int64_t x623 = -28183668LL;
	int32_t t144 = -13406;

    t144 = (((x621|x622)==x623)-x624);

    if (t144 != 499515645) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x626 = 56U;
	uint16_t x627 = UINT16_MAX;
	int64_t t145 = -300654325LL;

    t145 = (((x625|x626)==x627)-x628);

    if (t145 != 1LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x630 = 58U;
	int16_t x632 = -1;
	int32_t t146 = -6;

    t146 = (((x629|x630)==x631)-x632);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x633 = -21561LL;
	static int8_t x634 = INT8_MIN;
	uint8_t x635 = 50U;
	int8_t x636 = INT8_MAX;
	int32_t t147 = 14799827;

    t147 = (((x633|x634)==x635)-x636);

    if (t147 != -127) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x637 = 314U;
	int32_t x638 = -14302536;
	uint16_t x639 = 8U;
	volatile uint16_t x640 = 1848U;
	int32_t t148 = 928;

    t148 = (((x637|x638)==x639)-x640);

    if (t148 != -1848) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x641 = -123;
	volatile int32_t t149 = 62;

    t149 = (((x641|x642)==x643)-x644);

    if (t149 != -65535) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x645 = -1;
	static volatile uint32_t t150 = 2U;

    t150 = (((x645|x646)==x647)-x648);

    if (t150 != 3982469744U) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x649 = INT16_MIN;
	int8_t x650 = INT8_MIN;
	volatile int32_t x651 = INT32_MIN;
	int64_t x652 = INT64_MAX;
	int64_t t151 = -59457070995774LL;

    t151 = (((x649|x650)==x651)-x652);

    if (t151 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile uint16_t x653 = 961U;
	volatile uint64_t x654 = UINT64_MAX;
	static uint16_t x655 = 491U;
	uint16_t x656 = 72U;
	static volatile int32_t t152 = 8897967;

    t152 = (((x653|x654)==x655)-x656);

    if (t152 != -72) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x657 = -1;
	int64_t x658 = INT64_MIN;
	int16_t x659 = -1;
	volatile int16_t x660 = -2;
	int32_t t153 = 39172;

    t153 = (((x657|x658)==x659)-x660);

    if (t153 != 3) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x661 = INT32_MAX;
	int16_t x662 = -858;
	volatile uint8_t x663 = 37U;
	static int16_t x664 = -1;
	int32_t t154 = 1;

    t154 = (((x661|x662)==x663)-x664);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x665 = -38450323LL;
	int64_t x666 = INT64_MIN;
	static int16_t x667 = 221;
	volatile uint32_t x668 = 187U;
	volatile uint32_t t155 = 59678U;

    t155 = (((x665|x666)==x667)-x668);

    if (t155 != 4294967109U) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint64_t x669 = 118LLU;
	volatile int64_t x671 = INT64_MAX;
	uint16_t x672 = 253U;

    t156 = (((x669|x670)==x671)-x672);

    if (t156 != -253) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x674 = UINT64_MAX;
	int8_t x675 = INT8_MAX;
	uint64_t x676 = 42368430764938LLU;
	volatile uint64_t t157 = 3112LLU;

    t157 = (((x673|x674)==x675)-x676);

    if (t157 != 18446701705278786678LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x677 = 15741638641663LLU;
	uint8_t x678 = 35U;
	uint16_t x679 = 7U;
	static int32_t x680 = INT32_MAX;
	int32_t t158 = 1423;

    t158 = (((x677|x678)==x679)-x680);

    if (t158 != -2147483647) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x681 = UINT32_MAX;
	int8_t x682 = -1;
	int32_t x684 = 7;

    t159 = (((x681|x682)==x683)-x684);

    if (t159 != -7) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x685 = -1;
	int16_t x686 = -5577;
	int8_t x687 = INT8_MIN;

    t160 = (((x685|x686)==x687)-x688);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x693 = INT8_MIN;
	int64_t x694 = 1955388858551957LL;
	int64_t x695 = INT64_MIN;
	int32_t t161 = 27461;

    t161 = (((x693|x694)==x695)-x696);

    if (t161 != -255) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x701 = 46738164U;
	static int16_t x703 = 14558;
	int64_t t162 = -964367LL;

    t162 = (((x701|x702)==x703)-x704);

    if (t162 != 1LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x707 = 0;
	uint32_t t163 = 6575U;

    t163 = (((x705|x706)==x707)-x708);

    if (t163 != 1U) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x709 = 31LL;
	int32_t x710 = INT32_MIN;
	uint64_t t164 = 7358LLU;

    t164 = (((x709|x710)==x711)-x712);

    if (t164 != 18446744073699635398LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x714 = 0;
	volatile int8_t x716 = INT8_MAX;
	volatile int32_t t165 = -159228;

    t165 = (((x713|x714)==x715)-x716);

    if (t165 != -127) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x717 = INT32_MIN;
	volatile uint8_t x718 = 29U;
	int8_t x719 = INT8_MIN;
	int8_t x720 = INT8_MAX;
	int32_t t166 = -38920921;

    t166 = (((x717|x718)==x719)-x720);

    if (t166 != -127) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x721 = -1LL;
	uint32_t x722 = 453021U;
	uint8_t x723 = 3U;
	uint64_t x724 = UINT64_MAX;

    t167 = (((x721|x722)==x723)-x724);

    if (t167 != 1LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint8_t x725 = 15U;
	int32_t x727 = 8680201;

    t168 = (((x725|x726)==x727)-x728);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x729 = -1;
	uint16_t x730 = 236U;
	int64_t x731 = INT64_MAX;
	int32_t x732 = 0;
	static volatile int32_t t169 = 136476795;

    t169 = (((x729|x730)==x731)-x732);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x734 = UINT64_MAX;
	int32_t x735 = INT32_MAX;
	static int16_t x736 = INT16_MIN;

    t170 = (((x733|x734)==x735)-x736);

    if (t170 != 32768) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int16_t x737 = INT16_MIN;
	static volatile int8_t x739 = -1;
	uint32_t t171 = 1518514U;

    t171 = (((x737|x738)==x739)-x740);

    if (t171 != 4272162662U) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x741 = INT16_MIN;
	volatile uint8_t x743 = 1U;
	int8_t x744 = -1;
	static volatile int32_t t172 = 23;

    t172 = (((x741|x742)==x743)-x744);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x745 = UINT16_MAX;
	static uint16_t x746 = 0U;
	int32_t x747 = -961;
	uint64_t x748 = 1LLU;
	volatile uint64_t t173 = UINT64_MAX;

    t173 = (((x745|x746)==x747)-x748);

    if (t173 != UINT64_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x749 = 2152U;
	int32_t x751 = 96138;
	uint16_t x752 = 8649U;
	volatile int32_t t174 = 799535;

    t174 = (((x749|x750)==x751)-x752);

    if (t174 != -8649) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x753 = INT8_MIN;
	static uint16_t x754 = 3U;
	int16_t x756 = 3;
	int32_t t175 = 199272001;

    t175 = (((x753|x754)==x755)-x756);

    if (t175 != -3) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x757 = 18;
	uint16_t x758 = UINT16_MAX;
	static int16_t x759 = INT16_MAX;
	volatile int32_t t176 = -1060273;

    t176 = (((x757|x758)==x759)-x760);

    if (t176 != -176) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x765 = INT32_MIN;
	uint32_t x766 = 45U;
	volatile uint64_t x767 = UINT64_MAX;
	static int32_t x768 = INT32_MAX;
	static volatile int32_t t177 = 6;

    t177 = (((x765|x766)==x767)-x768);

    if (t177 != -2147483647) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint8_t x769 = 107U;
	int16_t x771 = -1;
	static uint16_t x772 = UINT16_MAX;
	static int32_t t178 = -750;

    t178 = (((x769|x770)==x771)-x772);

    if (t178 != -65535) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x773 = INT16_MAX;
	static int8_t x774 = INT8_MIN;
	uint16_t x775 = 2U;
	uint64_t x776 = 372529623584592131LLU;
	uint64_t t179 = 7LLU;

    t179 = (((x773|x774)==x775)-x776);

    if (t179 != 18074214450124959485LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x778 = -1514177636LL;
	volatile int16_t x779 = INT16_MAX;
	static volatile int32_t t180 = 60641;

    t180 = (((x777|x778)==x779)-x780);

    if (t180 != -127) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x781 = -3859;
	static int32_t x783 = INT32_MIN;
	static volatile int32_t t181 = 508651176;

    t181 = (((x781|x782)==x783)-x784);

    if (t181 != -49) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x785 = UINT16_MAX;
	volatile uint32_t x786 = UINT32_MAX;
	static int16_t x787 = INT16_MAX;
	static int32_t t182 = -416;

    t182 = (((x785|x786)==x787)-x788);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x790 = 5055U;
	int16_t x791 = INT16_MAX;
	static uint8_t x792 = 0U;
	static int32_t t183 = -1;

    t183 = (((x789|x790)==x791)-x792);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint32_t x793 = 53608639U;
	static int16_t x795 = -1;
	static int16_t x796 = 6;
	static volatile int32_t t184 = -927850;

    t184 = (((x793|x794)==x795)-x796);

    if (t184 != -6) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x797 = INT32_MAX;
	int64_t x799 = 305403023511410LL;

    t185 = (((x797|x798)==x799)-x800);

    if (t185 != -32767) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint8_t x801 = 47U;
	uint8_t x802 = 2U;
	volatile uint16_t x803 = 2U;
	int16_t x804 = 27;
	volatile int32_t t186 = 572257;

    t186 = (((x801|x802)==x803)-x804);

    if (t186 != -27) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x806 = INT32_MAX;
	int32_t x807 = INT32_MAX;
	int64_t x808 = -11168364362780LL;
	volatile int64_t t187 = 148123728653604958LL;

    t187 = (((x805|x806)==x807)-x808);

    if (t187 != 11168364362781LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x809 = UINT16_MAX;
	int16_t x810 = -1;
	volatile int32_t x812 = -1;
	volatile int32_t t188 = 144;

    t188 = (((x809|x810)==x811)-x812);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x813 = INT16_MIN;
	uint8_t x814 = 0U;
	static int8_t x815 = -1;
	int16_t x816 = -3;
	int32_t t189 = 55226;

    t189 = (((x813|x814)==x815)-x816);

    if (t189 != 3) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x817 = 331486376576LL;
	int64_t x820 = -1875LL;
	volatile int64_t t190 = 117591339916LL;

    t190 = (((x817|x818)==x819)-x820);

    if (t190 != 1875LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x821 = UINT8_MAX;
	static int32_t x823 = -1;
	static int64_t x824 = INT64_MAX;
	int64_t t191 = -92752517708757048LL;

    t191 = (((x821|x822)==x823)-x824);

    if (t191 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x825 = -55;
	int16_t x827 = INT16_MAX;
	static int8_t x828 = -1;
	static int32_t t192 = 519516;

    t192 = (((x825|x826)==x827)-x828);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x829 = INT64_MIN;
	static uint64_t x830 = 543192018209LLU;
	int16_t x831 = -22;
	volatile uint16_t x832 = UINT16_MAX;
	volatile int32_t t193 = 927557;

    t193 = (((x829|x830)==x831)-x832);

    if (t193 != -65535) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x834 = INT32_MIN;
	uint64_t x835 = UINT64_MAX;
	int16_t x836 = -1;
	int32_t t194 = 1;

    t194 = (((x833|x834)==x835)-x836);

    if (t194 != 2) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x837 = INT16_MIN;
	int16_t x838 = 15034;
	int16_t x839 = INT16_MAX;
	int16_t x840 = INT16_MIN;
	static int32_t t195 = -150;

    t195 = (((x837|x838)==x839)-x840);

    if (t195 != 32768) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x841 = 2783;
	volatile uint16_t x842 = UINT16_MAX;
	uint8_t x843 = 14U;
	volatile int32_t t196 = 18853943;

    t196 = (((x841|x842)==x843)-x844);

    if (t196 != 128) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x850 = INT32_MIN;
	int32_t x852 = -248199;
	static volatile int32_t t197 = 12523661;

    t197 = (((x849|x850)==x851)-x852);

    if (t197 != 248199) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x853 = -1;
	int32_t x855 = INT32_MAX;
	static uint8_t x856 = UINT8_MAX;
	int32_t t198 = 174;

    t198 = (((x853|x854)==x855)-x856);

    if (t198 != -255) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x857 = 1U;
	static volatile uint16_t x858 = 7U;
	static volatile int16_t x860 = INT16_MIN;
	int32_t t199 = 282;

    t199 = (((x857|x858)==x859)-x860);

    if (t199 != 32768) { NG(); } else { ; }
	
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

