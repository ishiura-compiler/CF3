
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

int64_t x1 = INT64_MAX;
int8_t x2 = INT8_MAX;
uint16_t x4 = UINT16_MAX;
static int16_t x6 = -38;
int64_t x8 = INT64_MAX;
int16_t x17 = 2252;
volatile int16_t x25 = INT16_MIN;
static int64_t x31 = INT64_MIN;
int32_t x37 = INT32_MIN;
int16_t x40 = INT16_MIN;
static uint64_t x43 = 7LLU;
int8_t x50 = -1;
static volatile int64_t t12 = -339LL;
int32_t x56 = -107157368;
int16_t x64 = INT16_MIN;
int32_t x66 = INT32_MIN;
volatile int32_t t17 = INT32_MAX;
int64_t x78 = 686532391LL;
int32_t x81 = INT32_MIN;
int32_t x82 = INT32_MIN;
volatile int32_t x86 = 1;
volatile int64_t x88 = INT64_MAX;
int32_t x89 = 1991427;
int16_t x94 = INT16_MIN;
uint32_t x99 = 4U;
int32_t x100 = 24394;
int32_t t24 = -343;
int64_t x102 = -251742044832134835LL;
int32_t x120 = -62;
volatile int64_t t29 = -408513885472613373LL;
volatile int64_t x121 = -1LL;
volatile int64_t x128 = INT64_MIN;
uint64_t x130 = UINT64_MAX;
volatile uint8_t x132 = 1U;
uint8_t x138 = UINT8_MAX;
int16_t x139 = INT16_MIN;
static int64_t x140 = -671894LL;
volatile int64_t t34 = INT64_MIN;
volatile int32_t x152 = 519131;
volatile int32_t t37 = 3;
uint32_t t38 = 987846745U;
static uint8_t x158 = 0U;
int8_t x159 = INT8_MIN;
volatile int8_t x162 = INT8_MIN;
int8_t x178 = INT8_MIN;
static volatile int8_t x180 = INT8_MAX;
static int32_t t45 = -13;
uint64_t x187 = UINT64_MAX;
int64_t x190 = 48053LL;
int32_t x192 = -377925398;
volatile uint32_t t47 = UINT32_MAX;
int32_t x193 = 5422;
static volatile uint16_t x194 = 53U;
uint8_t x196 = UINT8_MAX;
int16_t x197 = INT16_MIN;
uint32_t x200 = 811455U;
int64_t x213 = -17194347LL;
uint64_t x216 = 881LLU;
int64_t t53 = 573973326576228479LL;
int64_t x217 = -20LL;
static uint64_t x222 = UINT64_MAX;
int32_t x227 = 1514483;
uint8_t x228 = UINT8_MAX;
int16_t x232 = INT16_MIN;
uint8_t x236 = 59U;
uint64_t x238 = 29323LLU;
static volatile int8_t x243 = 5;
int16_t x248 = 7;
static int64_t x251 = -1LL;
volatile uint64_t x252 = 167305834410LLU;
int8_t x257 = -1;
volatile int32_t t65 = -11973;
static int32_t x268 = -15;
volatile uint32_t t66 = 386625630U;
static volatile uint32_t x275 = 178336U;
int64_t x279 = -1LL;
volatile int32_t t69 = 70157888;
int32_t x282 = -1;
volatile uint8_t x288 = 5U;
uint64_t x297 = UINT64_MAX;
int8_t x301 = -1;
static volatile int32_t t75 = -19;
static uint8_t x308 = 10U;
volatile uint8_t x309 = 1U;
static uint16_t x316 = 43U;
int16_t x321 = -1;
int64_t x323 = INT64_MIN;
volatile int32_t t80 = -1;
volatile int8_t x326 = INT8_MIN;
int64_t x327 = INT64_MIN;
volatile uint64_t x334 = UINT64_MAX;
int16_t x348 = -1;
int32_t t87 = 1;
int8_t x359 = -7;
int64_t x361 = -1LL;
int32_t x362 = 15044936;
int32_t x363 = INT32_MAX;
static int32_t x364 = INT32_MIN;
static int8_t x374 = INT8_MIN;
int32_t t93 = -992;
int16_t x377 = 1;
volatile int8_t x384 = INT8_MIN;
int32_t t97 = 125488394;
int32_t t98 = -92462;
int16_t x397 = INT16_MAX;
uint32_t x401 = 4U;
int32_t x403 = INT32_MIN;
int32_t x406 = INT32_MAX;
static int32_t x409 = -1291418;
int16_t x412 = INT16_MAX;
int32_t t102 = 9736;
static int16_t x415 = INT16_MAX;
int32_t t103 = 373629;
static int32_t t104 = 1;
uint64_t x423 = 955210996730LLU;
volatile int64_t x424 = 1943654431985LL;
static int8_t x433 = -1;
static int32_t x436 = INT32_MAX;
int8_t x438 = 2;
uint16_t x439 = 17U;
volatile int8_t x454 = INT8_MIN;
uint64_t x461 = UINT64_MAX;
int32_t t116 = -1;
int32_t x471 = INT32_MAX;
volatile int8_t x472 = -1;
int32_t x476 = -953048271;
volatile int64_t t119 = -4209518484LL;
int16_t x481 = 26;
int8_t x496 = -1;
static volatile int32_t x499 = 131396977;
int32_t t126 = -5778239;
volatile int16_t x510 = INT16_MIN;
static volatile int8_t x511 = INT8_MIN;
uint32_t x521 = UINT32_MAX;
int64_t x522 = -6737LL;
uint32_t x524 = 18800U;
int64_t x528 = INT64_MIN;
volatile int64_t x533 = INT64_MIN;
volatile int64_t t133 = -21413LL;
int16_t x537 = -1;
volatile int32_t t134 = -1;
static uint16_t x541 = UINT16_MAX;
uint8_t x542 = 1U;
int64_t x546 = INT64_MIN;
volatile int32_t x547 = -1;
static volatile int32_t t139 = 2544864;
int32_t x578 = INT32_MAX;
int32_t t144 = -13547;
uint8_t x583 = 18U;
int32_t t145 = 4666943;
static int64_t x597 = -108LL;
static volatile int32_t t150 = -233;
int64_t x606 = -1LL;
uint64_t x611 = UINT64_MAX;
volatile int32_t x616 = INT32_MIN;
volatile int8_t x617 = -1;
static uint8_t x626 = UINT8_MAX;
volatile uint16_t x629 = UINT16_MAX;
static int8_t x636 = 0;
static volatile int32_t t158 = -32132;
int16_t x638 = INT16_MIN;
int8_t x639 = INT8_MAX;
int64_t x653 = INT64_MAX;
volatile int16_t x655 = 1;
static uint8_t x656 = 1U;
int16_t x660 = -1;
int16_t x661 = INT16_MIN;
static int64_t x670 = INT64_MIN;
int16_t x681 = INT16_MIN;
static volatile int16_t x682 = -1;
int32_t x684 = 0;
int64_t x685 = -1LL;
static int32_t x691 = -1;
int16_t x696 = -1;
uint32_t x700 = 154924U;
static volatile int32_t t176 = 1;
volatile int8_t x712 = INT8_MIN;
volatile int32_t t177 = -75808;
int64_t x716 = -40LL;
int16_t x717 = INT16_MIN;
volatile int64_t x718 = INT64_MIN;
int16_t x720 = -822;
int16_t x726 = -1;
static volatile int32_t x735 = -1;
static volatile uint32_t x740 = UINT32_MAX;
int32_t x742 = 17644084;
uint8_t x744 = 3U;
int32_t t188 = -8585;
static uint16_t x758 = 51U;
volatile int8_t x760 = -16;
int32_t x761 = INT32_MIN;
int8_t x762 = -32;
uint64_t x765 = 24117043662LLU;
uint8_t x767 = 1U;
volatile int16_t x770 = -1;
int32_t x772 = INT32_MIN;
int32_t x776 = 8380788;
int8_t x777 = INT8_MIN;
int64_t x786 = INT64_MIN;
static int32_t t197 = 97028;
static int32_t t199 = -225127062;


void f0(void) {
    	volatile int16_t x3 = INT16_MIN;
	volatile int64_t t0 = INT64_MAX;

    t0 = (x1*(x2>(x3<=x4)));

    if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = -1996780114LL;
	static volatile int16_t x7 = INT16_MIN;
	int64_t t1 = -3227273967756467029LL;

    t1 = (x5*(x6>(x7<=x8)));

    if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x9 = INT16_MIN;
	static volatile int16_t x10 = INT16_MAX;
	volatile int8_t x11 = INT8_MAX;
	int32_t x12 = INT32_MIN;
	int32_t t2 = -824;

    t2 = (x9*(x10>(x11<=x12)));

    if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = 303U;
	static volatile int32_t x14 = INT32_MIN;
	int64_t x15 = -611719710LL;
	int16_t x16 = 0;
	int32_t t3 = 89809637;

    t3 = (x13*(x14>(x15<=x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x18 = 1643247174360LLU;
	uint64_t x19 = 22345LLU;
	int8_t x20 = INT8_MIN;
	int32_t t4 = -9154709;

    t4 = (x17*(x18>(x19<=x20)));

    if (t4 != 2252) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = 17;
	volatile int32_t x22 = 6893596;
	int8_t x23 = INT8_MIN;
	int32_t x24 = INT32_MIN;
	volatile int32_t t5 = -14093603;

    t5 = (x21*(x22>(x23<=x24)));

    if (t5 != 17) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int32_t x26 = -1;
	static uint8_t x27 = 1U;
	int64_t x28 = -787793041859710LL;
	int32_t t6 = 569772919;

    t6 = (x25*(x26>(x27<=x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x29 = 71U;
	int16_t x30 = -8161;
	int16_t x32 = INT16_MIN;
	volatile int32_t t7 = -46929;

    t7 = (x29*(x30>(x31<=x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x33 = INT16_MAX;
	uint32_t x34 = 1991U;
	static int16_t x35 = -1;
	uint64_t x36 = UINT64_MAX;
	int32_t t8 = -391;

    t8 = (x33*(x34>(x35<=x36)));

    if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x38 = 0;
	int32_t x39 = INT32_MIN;
	volatile int32_t t9 = 10634;

    t9 = (x37*(x38>(x39<=x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint64_t x41 = 9314951LLU;
	int8_t x42 = INT8_MIN;
	int32_t x44 = -12513407;
	uint64_t t10 = 3864150722LLU;

    t10 = (x41*(x42>(x43<=x44)));

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint64_t x45 = 40605612LLU;
	static int32_t x46 = 39398365;
	volatile int8_t x47 = INT8_MIN;
	int8_t x48 = 1;
	uint64_t t11 = 30929LLU;

    t11 = (x45*(x46>(x47<=x48)));

    if (t11 != 40605612LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = INT64_MAX;
	uint8_t x51 = 116U;
	int32_t x52 = INT32_MIN;

    t12 = (x49*(x50>(x51<=x52)));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = -1LL;
	int32_t x54 = -15569;
	int8_t x55 = -13;
	int64_t t13 = -211LL;

    t13 = (x53*(x54>(x55<=x56)));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = INT16_MIN;
	uint64_t x58 = UINT64_MAX;
	int64_t x59 = INT64_MAX;
	int32_t x60 = INT32_MAX;
	volatile int32_t t14 = 10;

    t14 = (x57*(x58>(x59<=x60)));

    if (t14 != -32768) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = UINT32_MAX;
	uint32_t x62 = 54U;
	int32_t x63 = INT32_MAX;
	volatile uint32_t t15 = UINT32_MAX;

    t15 = (x61*(x62>(x63<=x64)));

    if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	static int64_t x65 = 1419764052921LL;
	int64_t x67 = INT64_MIN;
	uint8_t x68 = UINT8_MAX;
	volatile int64_t t16 = -596103940768LL;

    t16 = (x65*(x66>(x67<=x68)));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = INT32_MAX;
	uint16_t x70 = UINT16_MAX;
	static int16_t x71 = INT16_MIN;
	int32_t x72 = -1;

    t17 = (x69*(x70>(x71<=x72)));

    if (t17 != INT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x73 = UINT16_MAX;
	uint32_t x74 = UINT32_MAX;
	volatile int16_t x75 = -2;
	static uint16_t x76 = UINT16_MAX;
	volatile int32_t t18 = 18054;

    t18 = (x73*(x74>(x75<=x76)));

    if (t18 != 65535) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = INT32_MIN;
	volatile int8_t x79 = 24;
	uint64_t x80 = UINT64_MAX;
	volatile int32_t t19 = INT32_MIN;

    t19 = (x77*(x78>(x79<=x80)));

    if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x83 = 475831971;
	int16_t x84 = -203;
	int32_t t20 = -1;

    t20 = (x81*(x82>(x83<=x84)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = -1;
	int32_t x87 = INT32_MAX;
	static int32_t t21 = 779638563;

    t21 = (x85*(x86>(x87<=x88)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x90 = -237363LL;
	int64_t x91 = INT64_MAX;
	volatile int8_t x92 = -1;
	volatile int32_t t22 = -6;

    t22 = (x89*(x90>(x91<=x92)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x93 = INT64_MAX;
	volatile int8_t x95 = INT8_MIN;
	int64_t x96 = INT64_MIN;
	int64_t t23 = 17896636598844538LL;

    t23 = (x93*(x94>(x95<=x96)));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = INT16_MIN;
	static int64_t x98 = 276432953LL;

    t24 = (x97*(x98>(x99<=x100)));

    if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = -1;
	int64_t x103 = INT64_MIN;
	int32_t x104 = -36;
	int32_t t25 = 312;

    t25 = (x101*(x102>(x103<=x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = INT16_MIN;
	int32_t x106 = INT32_MIN;
	uint64_t x107 = 29906863LLU;
	uint8_t x108 = UINT8_MAX;
	volatile int32_t t26 = 363033310;

    t26 = (x105*(x106>(x107<=x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = INT32_MIN;
	int16_t x110 = 4;
	int8_t x111 = INT8_MIN;
	uint8_t x112 = UINT8_MAX;
	int32_t t27 = INT32_MIN;

    t27 = (x109*(x110>(x111<=x112)));

    if (t27 != INT32_MIN) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x113 = 1;
	volatile int32_t x114 = -1;
	uint16_t x115 = 28U;
	volatile int32_t x116 = INT32_MIN;
	static int32_t t28 = 13183421;

    t28 = (x113*(x114>(x115<=x116)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x117 = -130250458LL;
	volatile int16_t x118 = INT16_MAX;
	static int32_t x119 = INT32_MIN;

    t29 = (x117*(x118>(x119<=x120)));

    if (t29 != -130250458LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint64_t x122 = 8203995959798981392LLU;
	int32_t x123 = INT32_MAX;
	int8_t x124 = 1;
	volatile int64_t t30 = -17622220455288518LL;

    t30 = (x121*(x122>(x123<=x124)));

    if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint8_t x125 = UINT8_MAX;
	uint64_t x126 = 4164782073862460248LLU;
	uint8_t x127 = 59U;
	volatile int32_t t31 = -1;

    t31 = (x125*(x126>(x127<=x128)));

    if (t31 != 255) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = INT64_MIN;
	int64_t x131 = 3702700732LL;
	int64_t t32 = INT64_MIN;

    t32 = (x129*(x130>(x131<=x132)));

    if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x133 = 1U;
	uint16_t x134 = 7868U;
	int32_t x135 = INT32_MIN;
	int64_t x136 = INT64_MAX;
	static volatile int32_t t33 = 11096698;

    t33 = (x133*(x134>(x135<=x136)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = INT64_MIN;

    t34 = (x137*(x138>(x139<=x140)));

    if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = 36;
	int32_t x142 = -46;
	volatile int16_t x143 = INT16_MAX;
	volatile int32_t x144 = INT32_MAX;
	static volatile int32_t t35 = 264;

    t35 = (x141*(x142>(x143<=x144)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x145 = UINT64_MAX;
	int64_t x146 = 747548824089277LL;
	int32_t x147 = INT32_MIN;
	int64_t x148 = -1LL;
	uint64_t t36 = UINT64_MAX;

    t36 = (x145*(x146>(x147<=x148)));

    if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x149 = 286U;
	static int32_t x150 = 724072670;
	static int8_t x151 = 1;

    t37 = (x149*(x150>(x151<=x152)));

    if (t37 != 286) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x153 = UINT32_MAX;
	volatile int64_t x154 = INT64_MIN;
	int32_t x155 = INT32_MIN;
	static int64_t x156 = -4743693LL;

    t38 = (x153*(x154>(x155<=x156)));

    if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x157 = 1U;
	uint8_t x160 = 22U;
	volatile int32_t t39 = 294596;

    t39 = (x157*(x158>(x159<=x160)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint32_t x161 = 788638U;
	volatile int16_t x163 = INT16_MAX;
	static uint64_t x164 = 40804580416LLU;
	volatile uint32_t t40 = 4266U;

    t40 = (x161*(x162>(x163<=x164)));

    if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = INT32_MIN;
	uint8_t x166 = 59U;
	int64_t x167 = INT64_MIN;
	uint64_t x168 = 3494999LLU;
	volatile int32_t t41 = INT32_MIN;

    t41 = (x165*(x166>(x167<=x168)));

    if (t41 != INT32_MIN) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = INT64_MAX;
	int8_t x170 = -1;
	volatile uint64_t x171 = UINT64_MAX;
	volatile int8_t x172 = -1;
	volatile int64_t t42 = -118596058082701963LL;

    t42 = (x169*(x170>(x171<=x172)));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = -1;
	static uint16_t x174 = 686U;
	volatile int8_t x175 = -1;
	int16_t x176 = INT16_MAX;
	int32_t t43 = -5710;

    t43 = (x173*(x174>(x175<=x176)));

    if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x177 = UINT16_MAX;
	int8_t x179 = INT8_MIN;
	int32_t t44 = 1985467;

    t44 = (x177*(x178>(x179<=x180)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x181 = 231;
	int32_t x182 = INT32_MIN;
	int16_t x183 = INT16_MAX;
	int32_t x184 = -1;

    t45 = (x181*(x182>(x183<=x184)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x185 = 79;
	volatile int8_t x186 = -1;
	int64_t x188 = INT64_MIN;
	int32_t t46 = 358;

    t46 = (x185*(x186>(x187<=x188)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x189 = UINT32_MAX;
	volatile int16_t x191 = -1;

    t47 = (x189*(x190>(x191<=x192)));

    if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x195 = INT16_MIN;
	int32_t t48 = -98228373;

    t48 = (x193*(x194>(x195<=x196)));

    if (t48 != 5422) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint8_t x198 = 102U;
	int64_t x199 = INT64_MIN;
	int32_t t49 = -664;

    t49 = (x197*(x198>(x199<=x200)));

    if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = INT32_MIN;
	int32_t x202 = INT32_MAX;
	int64_t x203 = INT64_MAX;
	volatile uint64_t x204 = UINT64_MAX;
	volatile int32_t t50 = INT32_MIN;

    t50 = (x201*(x202>(x203<=x204)));

    if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x205 = INT32_MIN;
	static int16_t x206 = INT16_MIN;
	int64_t x207 = 310423981874137577LL;
	uint64_t x208 = 5889073514975852LLU;
	static int32_t t51 = 823;

    t51 = (x205*(x206>(x207<=x208)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x209 = 0U;
	int64_t x210 = INT64_MIN;
	int64_t x211 = INT64_MIN;
	int32_t x212 = INT32_MIN;
	int32_t t52 = -18951546;

    t52 = (x209*(x210>(x211<=x212)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x214 = INT16_MIN;
	int16_t x215 = -1;

    t53 = (x213*(x214>(x215<=x216)));

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x218 = 49;
	int64_t x219 = INT64_MIN;
	volatile int32_t x220 = INT32_MIN;
	volatile int64_t t54 = 741503417723658265LL;

    t54 = (x217*(x218>(x219<=x220)));

    if (t54 != -20LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = INT8_MIN;
	static uint64_t x223 = 16173036161471120LLU;
	volatile int8_t x224 = -1;
	int32_t t55 = 2560781;

    t55 = (x221*(x222>(x223<=x224)));

    if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = 4;
	int64_t x226 = INT64_MAX;
	static int32_t t56 = 11891514;

    t56 = (x225*(x226>(x227<=x228)));

    if (t56 != 4) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x229 = INT64_MAX;
	int16_t x230 = INT16_MIN;
	int8_t x231 = 24;
	volatile int64_t t57 = -108332243711LL;

    t57 = (x229*(x230>(x231<=x232)));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x233 = 7036910639157392LL;
	int8_t x234 = -54;
	int64_t x235 = INT64_MIN;
	volatile int64_t t58 = 1607290853354LL;

    t58 = (x233*(x234>(x235<=x236)));

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = INT16_MIN;
	uint8_t x239 = UINT8_MAX;
	int32_t x240 = -1;
	volatile int32_t t59 = 12;

    t59 = (x237*(x238>(x239<=x240)));

    if (t59 != -32768) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x241 = INT16_MIN;
	int32_t x242 = INT32_MIN;
	int32_t x244 = -1;
	volatile int32_t t60 = 1086;

    t60 = (x241*(x242>(x243<=x244)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x245 = UINT8_MAX;
	int32_t x246 = INT32_MIN;
	uint8_t x247 = 2U;
	volatile int32_t t61 = 3356805;

    t61 = (x245*(x246>(x247<=x248)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x249 = INT16_MAX;
	static volatile int16_t x250 = 162;
	int32_t t62 = -82360;

    t62 = (x249*(x250>(x251<=x252)));

    if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = 3;
	int8_t x254 = INT8_MIN;
	int16_t x255 = INT16_MAX;
	uint32_t x256 = UINT32_MAX;
	volatile int32_t t63 = 0;

    t63 = (x253*(x254>(x255<=x256)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x258 = INT16_MAX;
	static int64_t x259 = -1LL;
	int64_t x260 = -1LL;
	volatile int32_t t64 = 5046773;

    t64 = (x257*(x258>(x259<=x260)));

    if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x261 = 361U;
	int32_t x262 = -1;
	uint64_t x263 = 45068703126990LLU;
	volatile uint16_t x264 = 1778U;

    t65 = (x261*(x262>(x263<=x264)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile uint32_t x265 = 12468U;
	int64_t x266 = -1LL;
	uint32_t x267 = 45200U;

    t66 = (x265*(x266>(x267<=x268)));

    if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x269 = INT16_MAX;
	int8_t x270 = INT8_MIN;
	volatile int8_t x271 = INT8_MIN;
	uint64_t x272 = 40137070383LLU;
	volatile int32_t t67 = -24848121;

    t67 = (x269*(x270>(x271<=x272)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x273 = INT64_MIN;
	volatile int8_t x274 = INT8_MAX;
	volatile uint8_t x276 = UINT8_MAX;
	volatile int64_t t68 = INT64_MIN;

    t68 = (x273*(x274>(x275<=x276)));

    if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = 6;
	int16_t x278 = INT16_MIN;
	volatile uint32_t x280 = 44332043U;

    t69 = (x277*(x278>(x279<=x280)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x281 = 83U;
	int64_t x283 = 130799238651LL;
	volatile int8_t x284 = -2;
	static int32_t t70 = 723;

    t70 = (x281*(x282>(x283<=x284)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x285 = -1;
	int16_t x286 = -5;
	static uint32_t x287 = UINT32_MAX;
	static int32_t t71 = 20074;

    t71 = (x285*(x286>(x287<=x288)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x289 = 1199;
	int8_t x290 = -1;
	static int8_t x291 = -1;
	static uint64_t x292 = 398LLU;
	volatile int32_t t72 = 2;

    t72 = (x289*(x290>(x291<=x292)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = INT32_MIN;
	int64_t x294 = INT64_MIN;
	int32_t x295 = INT32_MIN;
	int16_t x296 = -9;
	int32_t t73 = -4066;

    t73 = (x293*(x294>(x295<=x296)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x298 = 25167U;
	static int8_t x299 = INT8_MAX;
	static int32_t x300 = 1423;
	volatile uint64_t t74 = UINT64_MAX;

    t74 = (x297*(x298>(x299<=x300)));

    if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x302 = -1513;
	int32_t x303 = INT32_MIN;
	uint8_t x304 = 73U;

    t75 = (x301*(x302>(x303<=x304)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x305 = UINT32_MAX;
	uint32_t x306 = 857998488U;
	int16_t x307 = INT16_MAX;
	volatile uint32_t t76 = UINT32_MAX;

    t76 = (x305*(x306>(x307<=x308)));

    if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x310 = INT64_MIN;
	int32_t x311 = 178808427;
	int32_t x312 = INT32_MIN;
	volatile int32_t t77 = 2455512;

    t77 = (x309*(x310>(x311<=x312)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x313 = 60U;
	uint64_t x314 = UINT64_MAX;
	volatile uint8_t x315 = 32U;
	int32_t t78 = -15;

    t78 = (x313*(x314>(x315<=x316)));

    if (t78 != 60) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x317 = INT32_MIN;
	int8_t x318 = INT8_MIN;
	int16_t x319 = INT16_MIN;
	int64_t x320 = -1LL;
	volatile int32_t t79 = 809345432;

    t79 = (x317*(x318>(x319<=x320)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x322 = -1083638285482828197LL;
	uint32_t x324 = 232U;

    t80 = (x321*(x322>(x323<=x324)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = -1;
	int64_t x328 = INT64_MAX;
	static volatile int32_t t81 = -1;

    t81 = (x325*(x326>(x327<=x328)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = -12057;
	int16_t x330 = INT16_MAX;
	int8_t x331 = -1;
	int16_t x332 = -3;
	int32_t t82 = -143;

    t82 = (x329*(x330>(x331<=x332)));

    if (t82 != -12057) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint64_t x333 = 2381696LLU;
	static volatile uint32_t x335 = 3U;
	int32_t x336 = -1;
	uint64_t t83 = 491734527LLU;

    t83 = (x333*(x334>(x335<=x336)));

    if (t83 != 2381696LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x337 = 1533LLU;
	int64_t x338 = INT64_MAX;
	uint8_t x339 = 0U;
	volatile uint16_t x340 = 3U;
	volatile uint64_t t84 = 3283562855395LLU;

    t84 = (x337*(x338>(x339<=x340)));

    if (t84 != 1533LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x341 = -4;
	uint64_t x342 = UINT64_MAX;
	volatile int8_t x343 = INT8_MIN;
	int16_t x344 = INT16_MIN;
	volatile int32_t t85 = -41;

    t85 = (x341*(x342>(x343<=x344)));

    if (t85 != -4) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x345 = 12635U;
	static int8_t x346 = -1;
	int64_t x347 = INT64_MIN;
	static uint32_t t86 = 1U;

    t86 = (x345*(x346>(x347<=x348)));

    if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x349 = 58U;
	volatile int16_t x350 = -1;
	uint8_t x351 = 11U;
	static uint64_t x352 = UINT64_MAX;

    t87 = (x349*(x350>(x351<=x352)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x353 = 380LLU;
	volatile int16_t x354 = INT16_MIN;
	int32_t x355 = -1;
	uint64_t x356 = 11718565LLU;
	uint64_t t88 = 4267067270887LLU;

    t88 = (x353*(x354>(x355<=x356)));

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x357 = -1;
	uint64_t x358 = UINT64_MAX;
	static uint16_t x360 = 104U;
	static int32_t t89 = 99779315;

    t89 = (x357*(x358>(x359<=x360)));

    if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t t90 = -44598913LL;

    t90 = (x361*(x362>(x363<=x364)));

    if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x365 = UINT16_MAX;
	uint8_t x366 = 6U;
	int32_t x367 = INT32_MAX;
	int32_t x368 = INT32_MIN;
	static volatile int32_t t91 = 194;

    t91 = (x365*(x366>(x367<=x368)));

    if (t91 != 65535) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x369 = -1;
	int8_t x370 = INT8_MIN;
	volatile int8_t x371 = INT8_MAX;
	int16_t x372 = -1351;
	volatile int32_t t92 = -117221980;

    t92 = (x369*(x370>(x371<=x372)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x373 = -1;
	int64_t x375 = 96497777069392355LL;
	int32_t x376 = -12;

    t93 = (x373*(x374>(x375<=x376)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x378 = -5;
	int16_t x379 = -1;
	int32_t x380 = INT32_MIN;
	static volatile int32_t t94 = -1;

    t94 = (x377*(x378>(x379<=x380)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x381 = -1;
	int8_t x382 = -1;
	uint16_t x383 = 16575U;
	static int32_t t95 = 84283062;

    t95 = (x381*(x382>(x383<=x384)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x385 = INT16_MIN;
	static volatile uint32_t x386 = 25U;
	volatile int16_t x387 = INT16_MIN;
	int16_t x388 = -1;
	volatile int32_t t96 = 0;

    t96 = (x385*(x386>(x387<=x388)));

    if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = INT16_MAX;
	int16_t x390 = -1;
	volatile uint32_t x391 = 52U;
	volatile int64_t x392 = -1LL;

    t97 = (x389*(x390>(x391<=x392)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x393 = UINT8_MAX;
	int64_t x394 = INT64_MAX;
	int32_t x395 = INT32_MIN;
	static int32_t x396 = -37;

    t98 = (x393*(x394>(x395<=x396)));

    if (t98 != 255) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x398 = 79;
	int64_t x399 = -1LL;
	uint16_t x400 = 126U;
	static volatile int32_t t99 = 3;

    t99 = (x397*(x398>(x399<=x400)));

    if (t99 != 32767) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x402 = 91493670723171LLU;
	static volatile int8_t x404 = 16;
	volatile uint32_t t100 = 63294U;

    t100 = (x401*(x402>(x403<=x404)));

    if (t100 != 4U) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x405 = 227;
	uint8_t x407 = 1U;
	static int8_t x408 = 1;
	static volatile int32_t t101 = -168;

    t101 = (x405*(x406>(x407<=x408)));

    if (t101 != 227) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x410 = INT16_MAX;
	uint64_t x411 = 20009LLU;

    t102 = (x409*(x410>(x411<=x412)));

    if (t102 != -1291418) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x413 = INT16_MAX;
	static volatile uint8_t x414 = UINT8_MAX;
	uint64_t x416 = UINT64_MAX;

    t103 = (x413*(x414>(x415<=x416)));

    if (t103 != 32767) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int8_t x417 = 3;
	uint64_t x418 = UINT64_MAX;
	int16_t x419 = 10;
	volatile int32_t x420 = INT32_MIN;

    t104 = (x417*(x418>(x419<=x420)));

    if (t104 != 3) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = INT64_MIN;
	int16_t x422 = INT16_MAX;
	int64_t t105 = INT64_MIN;

    t105 = (x421*(x422>(x423<=x424)));

    if (t105 != INT64_MIN) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x425 = INT8_MAX;
	int8_t x426 = 0;
	volatile int32_t x427 = 181338;
	int8_t x428 = INT8_MIN;
	volatile int32_t t106 = 3;

    t106 = (x425*(x426>(x427<=x428)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint64_t x429 = UINT64_MAX;
	int32_t x430 = INT32_MIN;
	int16_t x431 = -1;
	int16_t x432 = INT16_MAX;
	uint64_t t107 = 154LLU;

    t107 = (x429*(x430>(x431<=x432)));

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint8_t x434 = 47U;
	volatile uint8_t x435 = 1U;
	volatile int32_t t108 = -1;

    t108 = (x433*(x434>(x435<=x436)));

    if (t108 != -1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x437 = UINT16_MAX;
	int32_t x440 = 2;
	int32_t t109 = 787039;

    t109 = (x437*(x438>(x439<=x440)));

    if (t109 != 65535) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x441 = 795;
	uint32_t x442 = UINT32_MAX;
	static volatile int16_t x443 = 2570;
	static int8_t x444 = -1;
	int32_t t110 = 1;

    t110 = (x441*(x442>(x443<=x444)));

    if (t110 != 795) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint8_t x445 = UINT8_MAX;
	volatile uint16_t x446 = 2U;
	uint64_t x447 = UINT64_MAX;
	uint8_t x448 = UINT8_MAX;
	volatile int32_t t111 = -7;

    t111 = (x445*(x446>(x447<=x448)));

    if (t111 != 255) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x449 = INT8_MIN;
	volatile uint32_t x450 = 230U;
	int64_t x451 = INT64_MIN;
	volatile int64_t x452 = 6720009606655LL;
	volatile int32_t t112 = -90953;

    t112 = (x449*(x450>(x451<=x452)));

    if (t112 != -128) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int64_t x453 = INT64_MAX;
	volatile int8_t x455 = INT8_MIN;
	static int8_t x456 = INT8_MIN;
	static int64_t t113 = 94LL;

    t113 = (x453*(x454>(x455<=x456)));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x457 = -24;
	volatile int64_t x458 = INT64_MIN;
	static int64_t x459 = INT64_MIN;
	int8_t x460 = INT8_MIN;
	volatile int32_t t114 = -1169;

    t114 = (x457*(x458>(x459<=x460)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x462 = INT8_MAX;
	int32_t x463 = -1;
	static int16_t x464 = INT16_MIN;
	uint64_t t115 = UINT64_MAX;

    t115 = (x461*(x462>(x463<=x464)));

    if (t115 != UINT64_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x465 = INT16_MAX;
	volatile int16_t x466 = 12;
	static uint16_t x467 = UINT16_MAX;
	uint64_t x468 = UINT64_MAX;

    t116 = (x465*(x466>(x467<=x468)));

    if (t116 != 32767) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x469 = INT32_MIN;
	volatile uint16_t x470 = 9U;
	volatile int32_t t117 = INT32_MIN;

    t117 = (x469*(x470>(x471<=x472)));

    if (t117 != INT32_MIN) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x473 = -1800640;
	int32_t x474 = INT32_MIN;
	volatile int32_t x475 = INT32_MIN;
	int32_t t118 = 0;

    t118 = (x473*(x474>(x475<=x476)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x477 = -7906LL;
	int16_t x478 = INT16_MAX;
	static int16_t x479 = INT16_MIN;
	static uint32_t x480 = UINT32_MAX;

    t119 = (x477*(x478>(x479<=x480)));

    if (t119 != -7906LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x482 = -1;
	uint16_t x483 = UINT16_MAX;
	uint32_t x484 = 1032738U;
	volatile int32_t t120 = -37952914;

    t120 = (x481*(x482>(x483<=x484)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x485 = UINT16_MAX;
	volatile int32_t x486 = INT32_MIN;
	uint64_t x487 = UINT64_MAX;
	uint8_t x488 = 20U;
	int32_t t121 = -66883036;

    t121 = (x485*(x486>(x487<=x488)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint8_t x489 = 3U;
	uint64_t x490 = 62113LLU;
	volatile uint64_t x491 = 3234944725032LLU;
	volatile int8_t x492 = 4;
	int32_t t122 = -1928206;

    t122 = (x489*(x490>(x491<=x492)));

    if (t122 != 3) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x493 = UINT8_MAX;
	uint32_t x494 = 14692499U;
	uint32_t x495 = UINT32_MAX;
	static int32_t t123 = -33090;

    t123 = (x493*(x494>(x495<=x496)));

    if (t123 != 255) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = -1;
	int8_t x498 = INT8_MAX;
	uint16_t x500 = 14491U;
	int32_t t124 = 29;

    t124 = (x497*(x498>(x499<=x500)));

    if (t124 != -1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x501 = 119454LLU;
	uint32_t x502 = 45355U;
	static uint32_t x503 = 785215U;
	uint8_t x504 = 0U;
	volatile uint64_t t125 = 485106LLU;

    t125 = (x501*(x502>(x503<=x504)));

    if (t125 != 119454LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x505 = 29898U;
	volatile uint8_t x506 = UINT8_MAX;
	int64_t x507 = -1LL;
	volatile uint64_t x508 = 515399607546567876LLU;

    t126 = (x505*(x506>(x507<=x508)));

    if (t126 != 29898) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint16_t x509 = UINT16_MAX;
	uint64_t x512 = UINT64_MAX;
	int32_t t127 = 1;

    t127 = (x509*(x510>(x511<=x512)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile uint32_t x513 = 501537244U;
	int32_t x514 = INT32_MIN;
	volatile int64_t x515 = -1LL;
	int64_t x516 = INT64_MAX;
	uint32_t t128 = 136304U;

    t128 = (x513*(x514>(x515<=x516)));

    if (t128 != 0U) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = INT32_MIN;
	int16_t x518 = INT16_MIN;
	int16_t x519 = INT16_MIN;
	int64_t x520 = -1LL;
	int32_t t129 = 11;

    t129 = (x517*(x518>(x519<=x520)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x523 = -1;
	static volatile uint32_t t130 = 1071395U;

    t130 = (x521*(x522>(x523<=x524)));

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x525 = 32U;
	static volatile int16_t x526 = INT16_MIN;
	static int16_t x527 = -3;
	volatile int32_t t131 = 1;

    t131 = (x525*(x526>(x527<=x528)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x529 = 90U;
	int64_t x530 = -1LL;
	volatile uint32_t x531 = 13U;
	int64_t x532 = INT64_MIN;
	volatile int32_t t132 = 9477;

    t132 = (x529*(x530>(x531<=x532)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x534 = INT16_MIN;
	uint16_t x535 = 4U;
	int8_t x536 = 0;

    t133 = (x533*(x534>(x535<=x536)));

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x538 = 29339384530LL;
	int64_t x539 = INT64_MIN;
	static int8_t x540 = -1;

    t134 = (x537*(x538>(x539<=x540)));

    if (t134 != -1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x543 = INT16_MIN;
	int8_t x544 = INT8_MIN;
	volatile int32_t t135 = -13955526;

    t135 = (x541*(x542>(x543<=x544)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint16_t x545 = UINT16_MAX;
	volatile uint16_t x548 = 68U;
	volatile int32_t t136 = -43417;

    t136 = (x545*(x546>(x547<=x548)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x549 = 483827762978675LL;
	static uint16_t x550 = 107U;
	int8_t x551 = INT8_MAX;
	static uint64_t x552 = UINT64_MAX;
	static int64_t t137 = -954371559085204LL;

    t137 = (x549*(x550>(x551<=x552)));

    if (t137 != 483827762978675LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint16_t x553 = 5U;
	uint32_t x554 = UINT32_MAX;
	int16_t x555 = 19;
	volatile int32_t x556 = -1;
	int32_t t138 = 126395;

    t138 = (x553*(x554>(x555<=x556)));

    if (t138 != 5) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x557 = UINT8_MAX;
	uint32_t x558 = 5140U;
	static int16_t x559 = INT16_MIN;
	volatile int16_t x560 = 5354;

    t139 = (x557*(x558>(x559<=x560)));

    if (t139 != 255) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x561 = -1;
	int32_t x562 = INT32_MAX;
	int64_t x563 = INT64_MIN;
	uint32_t x564 = 1677457U;
	static volatile int32_t t140 = 1;

    t140 = (x561*(x562>(x563<=x564)));

    if (t140 != -1) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile uint64_t x565 = 21921169844286707LLU;
	int16_t x566 = 2;
	volatile int8_t x567 = -27;
	int8_t x568 = 7;
	volatile uint64_t t141 = 270753947014LLU;

    t141 = (x565*(x566>(x567<=x568)));

    if (t141 != 21921169844286707LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = -1;
	volatile uint32_t x570 = 3U;
	uint32_t x571 = UINT32_MAX;
	static volatile uint64_t x572 = UINT64_MAX;
	volatile int32_t t142 = 179;

    t142 = (x569*(x570>(x571<=x572)));

    if (t142 != -1) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = INT16_MIN;
	uint16_t x574 = 2844U;
	uint16_t x575 = 11U;
	uint64_t x576 = 122474LLU;
	int32_t t143 = -235;

    t143 = (x573*(x574>(x575<=x576)));

    if (t143 != -32768) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x577 = 11400U;
	int64_t x579 = INT64_MIN;
	int64_t x580 = -1LL;

    t144 = (x577*(x578>(x579<=x580)));

    if (t144 != 11400) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x581 = -1;
	int32_t x582 = -4049;
	int64_t x584 = INT64_MIN;

    t145 = (x581*(x582>(x583<=x584)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x585 = INT64_MIN;
	static volatile uint64_t x586 = UINT64_MAX;
	static int8_t x587 = -1;
	static uint8_t x588 = 0U;
	volatile int64_t t146 = INT64_MIN;

    t146 = (x585*(x586>(x587<=x588)));

    if (t146 != INT64_MIN) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x589 = INT8_MIN;
	int32_t x590 = INT32_MIN;
	int32_t x591 = -27087;
	volatile int16_t x592 = INT16_MIN;
	static volatile int32_t t147 = -3554;

    t147 = (x589*(x590>(x591<=x592)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x593 = INT16_MIN;
	static int8_t x594 = -1;
	int16_t x595 = -1;
	volatile int16_t x596 = 873;
	static volatile int32_t t148 = -8068375;

    t148 = (x593*(x594>(x595<=x596)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x598 = 105890824031049LL;
	static volatile int64_t x599 = INT64_MIN;
	uint16_t x600 = 15959U;
	volatile int64_t t149 = 91451977LL;

    t149 = (x597*(x598>(x599<=x600)));

    if (t149 != -108LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x601 = -1;
	int32_t x602 = INT32_MIN;
	int8_t x603 = -1;
	uint16_t x604 = UINT16_MAX;

    t150 = (x601*(x602>(x603<=x604)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x605 = -1;
	int16_t x607 = -9358;
	static int64_t x608 = -1036930937268787LL;
	int32_t t151 = 2067934;

    t151 = (x605*(x606>(x607<=x608)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x609 = INT16_MAX;
	uint64_t x610 = UINT64_MAX;
	int32_t x612 = -1;
	int32_t t152 = 10429096;

    t152 = (x609*(x610>(x611<=x612)));

    if (t152 != 32767) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint8_t x613 = 0U;
	volatile int16_t x614 = INT16_MIN;
	int16_t x615 = -1;
	int32_t t153 = -7;

    t153 = (x613*(x614>(x615<=x616)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x618 = -1;
	static int8_t x619 = INT8_MAX;
	int32_t x620 = -19725;
	int32_t t154 = 103;

    t154 = (x617*(x618>(x619<=x620)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int64_t x621 = -1801LL;
	int16_t x622 = INT16_MIN;
	volatile int8_t x623 = 30;
	uint32_t x624 = 331U;
	int64_t t155 = 501457548LL;

    t155 = (x621*(x622>(x623<=x624)));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint16_t x625 = 11U;
	int16_t x627 = -1;
	int16_t x628 = INT16_MIN;
	int32_t t156 = 9796;

    t156 = (x625*(x626>(x627<=x628)));

    if (t156 != 11) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x630 = -13698203784228540LL;
	volatile uint64_t x631 = 354932360214402659LLU;
	static uint16_t x632 = 197U;
	int32_t t157 = -1368;

    t157 = (x629*(x630>(x631<=x632)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int8_t x633 = INT8_MIN;
	int8_t x634 = INT8_MIN;
	volatile uint16_t x635 = UINT16_MAX;

    t158 = (x633*(x634>(x635<=x636)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint32_t x637 = UINT32_MAX;
	int32_t x640 = INT32_MIN;
	static uint32_t t159 = 4567375U;

    t159 = (x637*(x638>(x639<=x640)));

    if (t159 != 0U) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x641 = INT32_MIN;
	volatile int32_t x642 = INT32_MAX;
	int16_t x643 = INT16_MAX;
	uint64_t x644 = 4907LLU;
	int32_t t160 = INT32_MIN;

    t160 = (x641*(x642>(x643<=x644)));

    if (t160 != INT32_MIN) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x645 = INT8_MIN;
	static int8_t x646 = -1;
	static int32_t x647 = INT32_MIN;
	static uint8_t x648 = UINT8_MAX;
	int32_t t161 = -3208;

    t161 = (x645*(x646>(x647<=x648)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x649 = -1;
	static uint8_t x650 = 77U;
	int32_t x651 = INT32_MIN;
	uint8_t x652 = 46U;
	int32_t t162 = 4867130;

    t162 = (x649*(x650>(x651<=x652)));

    if (t162 != -1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x654 = 0U;
	int64_t t163 = 85345299938LL;

    t163 = (x653*(x654>(x655<=x656)));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x657 = 13;
	static uint16_t x658 = 4069U;
	volatile int32_t x659 = INT32_MIN;
	int32_t t164 = -293873800;

    t164 = (x657*(x658>(x659<=x660)));

    if (t164 != 13) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x662 = 0U;
	volatile uint32_t x663 = 11U;
	uint16_t x664 = UINT16_MAX;
	static int32_t t165 = 73605993;

    t165 = (x661*(x662>(x663<=x664)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x665 = INT16_MAX;
	uint32_t x666 = 4U;
	static uint8_t x667 = 50U;
	uint32_t x668 = 28187U;
	static int32_t t166 = 667491;

    t166 = (x665*(x666>(x667<=x668)));

    if (t166 != 32767) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x669 = -1;
	int16_t x671 = -673;
	int32_t x672 = 364437;
	static int32_t t167 = -2689;

    t167 = (x669*(x670>(x671<=x672)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile uint32_t x673 = 193758U;
	uint32_t x674 = 1019U;
	uint64_t x675 = 48968973188095889LLU;
	volatile int64_t x676 = INT64_MAX;
	uint32_t t168 = 37865048U;

    t168 = (x673*(x674>(x675<=x676)));

    if (t168 != 193758U) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x677 = -616;
	volatile int64_t x678 = -186022500218989LL;
	uint16_t x679 = 842U;
	static volatile uint64_t x680 = UINT64_MAX;
	int32_t t169 = -980605;

    t169 = (x677*(x678>(x679<=x680)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x683 = 7804;
	int32_t t170 = -671069971;

    t170 = (x681*(x682>(x683<=x684)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile uint64_t x686 = UINT64_MAX;
	static int32_t x687 = -4146897;
	static int16_t x688 = INT16_MIN;
	static volatile int64_t t171 = 1205283748968416LL;

    t171 = (x685*(x686>(x687<=x688)));

    if (t171 != -1LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x689 = 1855LL;
	volatile uint64_t x690 = 847506045057601960LLU;
	int16_t x692 = 2031;
	int64_t t172 = -65606468LL;

    t172 = (x689*(x690>(x691<=x692)));

    if (t172 != 1855LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = INT8_MAX;
	uint32_t x694 = 983U;
	volatile uint64_t x695 = UINT64_MAX;
	static int32_t t173 = -71;

    t173 = (x693*(x694>(x695<=x696)));

    if (t173 != 127) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint16_t x697 = UINT16_MAX;
	volatile uint16_t x698 = 95U;
	int64_t x699 = INT64_MAX;
	static int32_t t174 = 463;

    t174 = (x697*(x698>(x699<=x700)));

    if (t174 != 65535) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x701 = UINT8_MAX;
	int8_t x702 = INT8_MIN;
	static int8_t x703 = 30;
	int64_t x704 = 804090938783499512LL;
	int32_t t175 = -101;

    t175 = (x701*(x702>(x703<=x704)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int32_t x705 = INT32_MIN;
	int64_t x706 = -26LL;
	static int32_t x707 = INT32_MIN;
	static volatile int32_t x708 = INT32_MAX;

    t176 = (x705*(x706>(x707<=x708)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x709 = INT8_MAX;
	static int32_t x710 = 715476;
	int16_t x711 = INT16_MIN;

    t177 = (x709*(x710>(x711<=x712)));

    if (t177 != 127) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x713 = INT32_MIN;
	uint64_t x714 = UINT64_MAX;
	uint8_t x715 = 55U;
	int32_t t178 = INT32_MIN;

    t178 = (x713*(x714>(x715<=x716)));

    if (t178 != INT32_MIN) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x719 = UINT8_MAX;
	static volatile int32_t t179 = -25362;

    t179 = (x717*(x718>(x719<=x720)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x721 = 18;
	int16_t x722 = 61;
	int64_t x723 = -1LL;
	volatile uint32_t x724 = 11U;
	volatile int32_t t180 = 284;

    t180 = (x721*(x722>(x723<=x724)));

    if (t180 != 18) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x725 = UINT8_MAX;
	int64_t x727 = -1LL;
	int64_t x728 = -1LL;
	int32_t t181 = -4312505;

    t181 = (x725*(x726>(x727<=x728)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x729 = INT32_MAX;
	int32_t x730 = INT32_MIN;
	int16_t x731 = INT16_MIN;
	int64_t x732 = INT64_MAX;
	int32_t t182 = -1;

    t182 = (x729*(x730>(x731<=x732)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = INT32_MIN;
	uint16_t x734 = 3U;
	int16_t x736 = INT16_MIN;
	int32_t t183 = INT32_MIN;

    t183 = (x733*(x734>(x735<=x736)));

    if (t183 != INT32_MIN) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x737 = INT32_MIN;
	uint64_t x738 = 3488429524335463LLU;
	int32_t x739 = INT32_MIN;
	int32_t t184 = INT32_MIN;

    t184 = (x737*(x738>(x739<=x740)));

    if (t184 != INT32_MIN) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x741 = 12;
	volatile int8_t x743 = 8;
	int32_t t185 = -56554;

    t185 = (x741*(x742>(x743<=x744)));

    if (t185 != 12) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x745 = UINT16_MAX;
	int32_t x746 = INT32_MIN;
	static volatile int16_t x747 = INT16_MAX;
	int16_t x748 = -3118;
	static volatile int32_t t186 = -64242;

    t186 = (x745*(x746>(x747<=x748)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x749 = INT64_MAX;
	int8_t x750 = -8;
	int32_t x751 = INT32_MIN;
	static volatile int64_t x752 = -1LL;
	int64_t t187 = 1056436LL;

    t187 = (x749*(x750>(x751<=x752)));

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x753 = 15934;
	int8_t x754 = -1;
	volatile int8_t x755 = INT8_MIN;
	int8_t x756 = 0;

    t188 = (x753*(x754>(x755<=x756)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x757 = INT8_MAX;
	int32_t x759 = INT32_MIN;
	int32_t t189 = -17415;

    t189 = (x757*(x758>(x759<=x760)));

    if (t189 != 127) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x763 = -1110323862587169644LL;
	int64_t x764 = INT64_MIN;
	int32_t t190 = 1;

    t190 = (x761*(x762>(x763<=x764)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint16_t x766 = 243U;
	int64_t x768 = INT64_MIN;
	static volatile uint64_t t191 = 5565LLU;

    t191 = (x765*(x766>(x767<=x768)));

    if (t191 != 24117043662LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int32_t x769 = 57538;
	volatile uint64_t x771 = UINT64_MAX;
	int32_t t192 = -6396;

    t192 = (x769*(x770>(x771<=x772)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint16_t x773 = 5080U;
	uint64_t x774 = UINT64_MAX;
	static volatile uint32_t x775 = 30494390U;
	volatile int32_t t193 = 0;

    t193 = (x773*(x774>(x775<=x776)));

    if (t193 != 5080) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x778 = -1;
	uint64_t x779 = 3479404653072LLU;
	int16_t x780 = INT16_MIN;
	int32_t t194 = -55163706;

    t194 = (x777*(x778>(x779<=x780)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x781 = UINT8_MAX;
	int32_t x782 = -20596758;
	uint32_t x783 = 640813567U;
	int64_t x784 = -30437494LL;
	static int32_t t195 = -3;

    t195 = (x781*(x782>(x783<=x784)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x785 = INT64_MIN;
	uint16_t x787 = UINT16_MAX;
	static int16_t x788 = -1;
	volatile int64_t t196 = 679593316LL;

    t196 = (x785*(x786>(x787<=x788)));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x789 = 54360;
	int8_t x790 = -1;
	volatile uint8_t x791 = UINT8_MAX;
	int32_t x792 = -1;

    t197 = (x789*(x790>(x791<=x792)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int32_t x793 = INT32_MAX;
	int8_t x794 = 1;
	int64_t x795 = -1LL;
	uint32_t x796 = 0U;
	static int32_t t198 = -188;

    t198 = (x793*(x794>(x795<=x796)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x797 = INT8_MIN;
	uint8_t x798 = UINT8_MAX;
	static uint32_t x799 = UINT32_MAX;
	uint64_t x800 = UINT64_MAX;

    t199 = (x797*(x798>(x799<=x800)));

    if (t199 != -128) { NG(); } else { ; }
	
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

