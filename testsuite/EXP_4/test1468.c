
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

int32_t x1 = INT32_MIN;
int32_t t0 = -20;
uint8_t x6 = UINT8_MAX;
uint8_t x11 = 0U;
int16_t x13 = -23;
uint32_t x20 = 570343493U;
static uint64_t x27 = UINT64_MAX;
int16_t x29 = INT16_MIN;
static volatile int64_t t10 = 3LL;
int32_t x46 = -1;
int8_t x48 = 8;
volatile int32_t t11 = -18;
uint64_t x50 = 27334468023722LLU;
int32_t t14 = -3370;
int64_t x62 = INT64_MIN;
static uint16_t x66 = 122U;
volatile int32_t x72 = -1862496;
int16_t x75 = -1;
int64_t t18 = 1881393960396240LL;
int8_t x78 = 1;
static volatile int32_t t19 = -132926355;
int32_t t20 = -41;
static int8_t x94 = 28;
static volatile int32_t t23 = 1;
volatile int16_t x104 = 16113;
uint64_t t25 = 2012LLU;
volatile int16_t x105 = INT16_MAX;
static int64_t x108 = 21850214652461LL;
volatile int32_t t26 = 52055;
int32_t x109 = 468568131;
volatile uint16_t x110 = 29525U;
static volatile int32_t t27 = -6;
static volatile int32_t x120 = INT32_MIN;
volatile uint32_t t29 = 455384514U;
static int64_t x123 = INT64_MAX;
int64_t x126 = -1LL;
volatile int64_t x128 = -1LL;
volatile int32_t t31 = 10144827;
uint16_t x131 = UINT16_MAX;
int64_t x133 = INT64_MIN;
static int64_t t33 = 31LL;
int64_t x138 = INT64_MIN;
static volatile int16_t x139 = 7412;
int64_t x140 = 60122754LL;
int32_t t34 = 0;
volatile int16_t x142 = INT16_MAX;
int32_t x157 = 1119640;
int16_t x159 = INT16_MIN;
int64_t t43 = 1963659500152911376LL;
volatile int32_t t46 = -13;
int8_t x189 = INT8_MAX;
int16_t x197 = -131;
int32_t t49 = -865;
int16_t x202 = INT16_MAX;
uint8_t x203 = UINT8_MAX;
volatile int64_t x207 = INT64_MAX;
volatile int32_t t51 = 94521055;
volatile int64_t x210 = INT64_MIN;
volatile uint8_t x213 = 22U;
volatile int64_t x217 = -224524LL;
static int32_t x219 = -3405;
uint64_t x220 = 41LLU;
static int16_t x221 = -2042;
int64_t x235 = -73390693082207898LL;
uint64_t x244 = 41431LLU;
uint8_t x256 = 7U;
int8_t x257 = 1;
int64_t x259 = 2356317869119424477LL;
int64_t x260 = -1LL;
int32_t t64 = -1758764;
int32_t x263 = INT32_MIN;
uint64_t t65 = 326073640220LLU;
int64_t t67 = 172LL;
volatile int32_t t68 = 0;
static int64_t x287 = -765335994075LL;
volatile int64_t x288 = INT64_MIN;
volatile int16_t x292 = -2967;
volatile int16_t x296 = -199;
uint32_t x300 = 3U;
uint16_t x308 = 5U;
uint64_t x313 = 1199584942441LLU;
int32_t x315 = INT32_MAX;
static uint16_t x317 = 15452U;
int64_t x320 = INT64_MAX;
volatile int64_t x334 = INT64_MAX;
int64_t x337 = INT64_MIN;
volatile uint32_t x342 = UINT32_MAX;
static int32_t x346 = INT32_MIN;
volatile int32_t x349 = -1;
volatile uint16_t x353 = 14179U;
int16_t x356 = 4059;
int64_t t89 = -101699987069LL;
static int64_t x361 = 1LL;
volatile uint64_t x367 = 6280LLU;
volatile uint16_t x372 = 7186U;
static int64_t t92 = 131LL;
int16_t x381 = 1739;
int8_t x384 = INT8_MIN;
static uint64_t t99 = 713LLU;
uint16_t x402 = 6297U;
int16_t x405 = INT16_MAX;
int8_t x409 = INT8_MIN;
volatile int32_t x420 = INT32_MIN;
uint64_t x422 = 255196LLU;
volatile uint32_t x425 = 334664234U;
uint64_t x428 = UINT64_MAX;
volatile int8_t x432 = INT8_MAX;
static volatile int32_t t107 = 36731582;
int64_t x435 = 3697582712005649LL;
volatile int32_t t108 = -289146580;
int16_t x437 = INT16_MIN;
static uint64_t x438 = 17657772LLU;
volatile int64_t x445 = INT64_MAX;
static int8_t x448 = 0;
static int16_t x450 = -1;
static volatile uint64_t x452 = UINT64_MAX;
uint16_t x455 = 9U;
static int64_t x462 = INT64_MAX;
int32_t x463 = INT32_MIN;
uint32_t t116 = 909080580U;
uint16_t x474 = UINT16_MAX;
volatile uint64_t t118 = 1487472570705669184LLU;
int32_t t120 = 1061222576;
int16_t x488 = -1;
int32_t x492 = INT32_MIN;
static int8_t x493 = INT8_MAX;
int16_t x497 = -1;
static int64_t x501 = INT64_MIN;
int64_t t125 = -53883LL;
uint64_t x511 = 1194344600428129LLU;
int8_t x523 = INT8_MAX;
static volatile uint16_t x529 = 1038U;
int32_t x531 = -359125224;
uint64_t x539 = UINT64_MAX;
uint16_t x540 = 0U;
volatile int32_t t134 = 1871064;
volatile int64_t x549 = INT64_MAX;
uint8_t x553 = 7U;
uint32_t x554 = 6448097U;
volatile int32_t t138 = 48;
uint8_t x557 = UINT8_MAX;
volatile int32_t t139 = -54454;
int16_t x565 = 226;
int32_t x568 = INT32_MIN;
static int64_t x571 = INT64_MIN;
static volatile uint8_t x575 = UINT8_MAX;
int64_t x580 = -1LL;
static uint32_t x603 = 122U;
uint16_t x606 = 8U;
int16_t x612 = INT16_MIN;
int8_t x619 = 2;
int16_t x623 = INT16_MIN;
int32_t t157 = -9891813;
int16_t x633 = 1;
static int16_t x634 = INT16_MAX;
int32_t x637 = 5846;
volatile int8_t x639 = INT8_MIN;
static volatile int32_t t159 = 1;
volatile int64_t x648 = INT64_MAX;
uint16_t x656 = 27U;
int64_t x663 = 2804940970LL;
static int32_t x667 = -12008;
uint8_t x675 = UINT8_MAX;
int64_t x678 = INT64_MIN;
int32_t x680 = INT32_MAX;
volatile uint8_t x683 = UINT8_MAX;
int32_t t171 = 1814576;
uint8_t x691 = 3U;
static uint16_t x693 = UINT16_MAX;
int32_t t174 = -7078;
uint64_t x704 = 23678334LLU;
int64_t x705 = INT64_MAX;
volatile int32_t t177 = 2288;
static uint16_t x714 = 3U;
uint16_t x718 = 3U;
uint8_t x723 = 0U;
int32_t x726 = 0;
static uint64_t x727 = 6680686LLU;
volatile uint16_t x728 = 30680U;
volatile int32_t t181 = -3597288;
int32_t t184 = 2911;
int64_t x751 = -1LL;
int16_t x754 = INT16_MAX;
static int16_t x756 = -5780;
int8_t x759 = 5;
int16_t x760 = INT16_MIN;
uint8_t x763 = 51U;
int64_t x767 = -1LL;
int32_t t191 = 6918;


void f0(void) {
    	int16_t x2 = 0;
	uint8_t x3 = 12U;
	int8_t x4 = 1;

    t0 = (x1&(x2!=(x3==x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x5 = INT8_MIN;
	int8_t x7 = INT8_MAX;
	uint32_t x8 = 458990U;
	volatile int32_t t1 = -1848251;

    t1 = (x5&(x6!=(x7==x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = UINT32_MAX;
	uint8_t x10 = 15U;
	volatile int64_t x12 = INT64_MIN;
	static volatile uint32_t t2 = 6U;

    t2 = (x9&(x10!=(x11==x12)));

    if (t2 != 1U) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x14 = -15;
	uint16_t x15 = 800U;
	int64_t x16 = INT64_MAX;
	volatile int32_t t3 = -769;

    t3 = (x13&(x14!=(x15==x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int64_t x17 = 261050147188374LL;
	volatile int8_t x18 = -11;
	volatile int8_t x19 = INT8_MAX;
	volatile int64_t t4 = -1141042263185662765LL;

    t4 = (x17&(x18!=(x19==x20)));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = -53;
	int8_t x22 = INT8_MAX;
	int8_t x23 = -1;
	int8_t x24 = INT8_MAX;
	static int32_t t5 = 33745;

    t5 = (x21&(x22!=(x23==x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x25 = -1;
	uint64_t x26 = 1007505552113225LLU;
	int64_t x28 = -1LL;
	int32_t t6 = 800358902;

    t6 = (x25&(x26!=(x27==x28)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x30 = 134927791U;
	int32_t x31 = INT32_MAX;
	uint16_t x32 = 5U;
	int32_t t7 = -22;

    t7 = (x29&(x30!=(x31==x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x33 = INT8_MAX;
	uint64_t x34 = 75274721LLU;
	uint32_t x35 = UINT32_MAX;
	volatile uint8_t x36 = 64U;
	int32_t t8 = -44;

    t8 = (x33&(x34!=(x35==x36)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint32_t x37 = 99U;
	int16_t x38 = -601;
	uint8_t x39 = 16U;
	int32_t x40 = INT32_MIN;
	uint32_t t9 = 27351U;

    t9 = (x37&(x38!=(x39==x40)));

    if (t9 != 1U) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x41 = INT64_MIN;
	uint32_t x42 = 0U;
	int8_t x43 = INT8_MAX;
	int64_t x44 = -66567LL;

    t10 = (x41&(x42!=(x43==x44)));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = INT8_MIN;
	uint32_t x47 = 13166670U;

    t11 = (x45&(x46!=(x47==x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = INT32_MAX;
	int8_t x51 = INT8_MIN;
	int16_t x52 = INT16_MAX;
	int32_t t12 = -22162;

    t12 = (x49&(x50!=(x51==x52)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = 27562U;
	volatile int32_t x54 = INT32_MAX;
	int64_t x55 = -451531845629573120LL;
	uint16_t x56 = 24U;
	static volatile int32_t t13 = 34084759;

    t13 = (x53&(x54!=(x55==x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = -1;
	static uint64_t x58 = 462LLU;
	int64_t x59 = -1LL;
	int64_t x60 = 352663789022698LL;

    t14 = (x57&(x58!=(x59==x60)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x61 = INT32_MIN;
	volatile int64_t x63 = INT64_MIN;
	volatile uint8_t x64 = 3U;
	int32_t t15 = -1;

    t15 = (x61&(x62!=(x63==x64)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x65 = 29U;
	volatile int32_t x67 = 259647002;
	int32_t x68 = INT32_MIN;
	volatile uint32_t t16 = 21212U;

    t16 = (x65&(x66!=(x67==x68)));

    if (t16 != 1U) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = -1;
	int16_t x70 = -8681;
	volatile int64_t x71 = -2711259389912LL;
	volatile int32_t t17 = 184781;

    t17 = (x69&(x70!=(x71==x72)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x73 = INT64_MIN;
	static int64_t x74 = 10370906818LL;
	int8_t x76 = INT8_MIN;

    t18 = (x73&(x74!=(x75==x76)));

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x77 = 0;
	static int32_t x79 = INT32_MIN;
	int32_t x80 = -37162;

    t19 = (x77&(x78!=(x79==x80)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint16_t x81 = 8U;
	static volatile int64_t x82 = -1LL;
	uint16_t x83 = UINT16_MAX;
	static int8_t x84 = INT8_MIN;

    t20 = (x81&(x82!=(x83==x84)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x85 = UINT16_MAX;
	int64_t x86 = -1LL;
	int64_t x87 = INT64_MAX;
	int8_t x88 = -1;
	int32_t t21 = 0;

    t21 = (x85&(x86!=(x87==x88)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x89 = INT64_MIN;
	uint16_t x90 = 1111U;
	uint64_t x91 = UINT64_MAX;
	volatile uint8_t x92 = 23U;
	static int64_t t22 = 15672936LL;

    t22 = (x89&(x90!=(x91==x92)));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint16_t x93 = UINT16_MAX;
	uint32_t x95 = 1285055U;
	int64_t x96 = -1LL;

    t23 = (x93&(x94!=(x95==x96)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x97 = 1U;
	volatile int32_t x98 = 19;
	int32_t x99 = 1;
	int32_t x100 = INT32_MAX;
	static int32_t t24 = -18623;

    t24 = (x97&(x98!=(x99==x100)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x101 = 36134156LLU;
	int64_t x102 = -1LL;
	uint32_t x103 = UINT32_MAX;

    t25 = (x101&(x102!=(x103==x104)));

    if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x106 = INT64_MIN;
	int8_t x107 = INT8_MAX;

    t26 = (x105&(x106!=(x107==x108)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x111 = INT16_MIN;
	uint16_t x112 = 11U;

    t27 = (x109&(x110!=(x111==x112)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x113 = 58;
	volatile int16_t x114 = 9252;
	volatile int16_t x115 = INT16_MAX;
	static uint64_t x116 = UINT64_MAX;
	volatile int32_t t28 = -1;

    t28 = (x113&(x114!=(x115==x116)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x117 = UINT32_MAX;
	int32_t x118 = -1;
	uint8_t x119 = 39U;

    t29 = (x117&(x118!=(x119==x120)));

    if (t29 != 1U) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = INT16_MAX;
	static volatile int16_t x122 = -59;
	volatile uint8_t x124 = 14U;
	int32_t t30 = 5373005;

    t30 = (x121&(x122!=(x123==x124)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = INT16_MAX;
	uint64_t x127 = UINT64_MAX;

    t31 = (x125&(x126!=(x127==x128)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint32_t x129 = 26295956U;
	volatile int16_t x130 = -14790;
	volatile uint8_t x132 = 78U;
	volatile uint32_t t32 = 1046128810U;

    t32 = (x129&(x130!=(x131==x132)));

    if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x134 = UINT8_MAX;
	int32_t x135 = INT32_MIN;
	volatile uint32_t x136 = 0U;

    t33 = (x133&(x134!=(x135==x136)));

    if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = INT16_MAX;

    t34 = (x137&(x138!=(x139==x140)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = 19292553293LL;
	int8_t x143 = -1;
	int8_t x144 = -1;
	int64_t t35 = -63242LL;

    t35 = (x141&(x142!=(x143==x144)));

    if (t35 != 1LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = 1788;
	volatile uint32_t x146 = 1334U;
	int16_t x147 = INT16_MIN;
	static int16_t x148 = -1;
	volatile int32_t t36 = 214289;

    t36 = (x145&(x146!=(x147==x148)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x149 = 16U;
	volatile int64_t x150 = INT64_MIN;
	uint32_t x151 = 12U;
	int64_t x152 = INT64_MIN;
	volatile int32_t t37 = -9270444;

    t37 = (x149&(x150!=(x151==x152)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x153 = 247LLU;
	uint32_t x154 = 1239842184U;
	static int16_t x155 = 55;
	static int8_t x156 = INT8_MIN;
	uint64_t t38 = 2LLU;

    t38 = (x153&(x154!=(x155==x156)));

    if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x158 = 7032;
	int32_t x160 = INT32_MIN;
	volatile int32_t t39 = 2234;

    t39 = (x157&(x158!=(x159==x160)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = -2669591LL;
	int16_t x162 = INT16_MIN;
	int8_t x163 = INT8_MIN;
	int32_t x164 = -7523806;
	int64_t t40 = -14384713580557LL;

    t40 = (x161&(x162!=(x163==x164)));

    if (t40 != 1LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x165 = 23619LLU;
	int64_t x166 = 4249346427893887323LL;
	uint16_t x167 = 18887U;
	int8_t x168 = 5;
	volatile uint64_t t41 = 82903065264665446LLU;

    t41 = (x165&(x166!=(x167==x168)));

    if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = -1;
	static int8_t x170 = INT8_MIN;
	int8_t x171 = INT8_MIN;
	static int32_t x172 = INT32_MIN;
	static volatile int32_t t42 = -60;

    t42 = (x169&(x170!=(x171==x172)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x173 = -1LL;
	volatile uint64_t x174 = 13LLU;
	static int64_t x175 = INT64_MIN;
	int64_t x176 = 18040263258LL;

    t43 = (x173&(x174!=(x175==x176)));

    if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x177 = 67847;
	volatile int64_t x178 = 727808535728LL;
	static int32_t x179 = -1;
	volatile int32_t x180 = 45403;
	static volatile int32_t t44 = 3839810;

    t44 = (x177&(x178!=(x179==x180)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x181 = INT32_MIN;
	static int32_t x182 = -1;
	volatile uint32_t x183 = UINT32_MAX;
	volatile int32_t x184 = 0;
	static int32_t t45 = -1081;

    t45 = (x181&(x182!=(x183==x184)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x185 = 18U;
	volatile int16_t x186 = INT16_MIN;
	int8_t x187 = -1;
	int64_t x188 = INT64_MIN;

    t46 = (x185&(x186!=(x187==x188)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x190 = 80306681945218LLU;
	int16_t x191 = -1;
	int8_t x192 = INT8_MAX;
	volatile int32_t t47 = 589605;

    t47 = (x189&(x190!=(x191==x192)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x193 = 877U;
	volatile int8_t x194 = INT8_MIN;
	uint32_t x195 = 606U;
	uint32_t x196 = 1170U;
	int32_t t48 = 165;

    t48 = (x193&(x194!=(x195==x196)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x198 = INT32_MIN;
	volatile int8_t x199 = INT8_MIN;
	uint32_t x200 = 3U;

    t49 = (x197&(x198!=(x199==x200)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x201 = INT64_MIN;
	static int32_t x204 = 60886;
	volatile int64_t t50 = -3828909467482438LL;

    t50 = (x201&(x202!=(x203==x204)));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x205 = INT16_MIN;
	static int16_t x206 = INT16_MIN;
	uint8_t x208 = UINT8_MAX;

    t51 = (x205&(x206!=(x207==x208)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int64_t x209 = INT64_MIN;
	static volatile int16_t x211 = INT16_MIN;
	uint64_t x212 = UINT64_MAX;
	int64_t t52 = 4400587565063LL;

    t52 = (x209&(x210!=(x211==x212)));

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x214 = -1;
	static int8_t x215 = 1;
	static uint8_t x216 = 107U;
	int32_t t53 = 83;

    t53 = (x213&(x214!=(x215==x216)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x218 = 59867525LLU;
	volatile int64_t t54 = -63615LL;

    t54 = (x217&(x218!=(x219==x220)));

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x222 = INT64_MIN;
	int64_t x223 = -7452892570LL;
	int64_t x224 = -1LL;
	volatile int32_t t55 = 47;

    t55 = (x221&(x222!=(x223==x224)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x225 = 1U;
	int8_t x226 = INT8_MAX;
	uint32_t x227 = 3901U;
	int64_t x228 = INT64_MIN;
	volatile int32_t t56 = 272;

    t56 = (x225&(x226!=(x227==x228)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = INT32_MIN;
	volatile uint16_t x230 = 15888U;
	int8_t x231 = INT8_MIN;
	volatile uint32_t x232 = UINT32_MAX;
	int32_t t57 = -390;

    t57 = (x229&(x230!=(x231==x232)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x233 = -24;
	volatile uint64_t x234 = 501LLU;
	uint32_t x236 = 78186540U;
	volatile int32_t t58 = 365621409;

    t58 = (x233&(x234!=(x235==x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x237 = UINT16_MAX;
	uint64_t x238 = 95LLU;
	uint8_t x239 = 26U;
	static uint16_t x240 = 23U;
	static int32_t t59 = -7;

    t59 = (x237&(x238!=(x239==x240)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x241 = UINT8_MAX;
	static int64_t x242 = -1LL;
	static int32_t x243 = INT32_MAX;
	volatile int32_t t60 = 454584304;

    t60 = (x241&(x242!=(x243==x244)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x245 = INT32_MIN;
	volatile uint16_t x246 = 7416U;
	volatile int16_t x247 = -5;
	static volatile uint32_t x248 = UINT32_MAX;
	int32_t t61 = 216066987;

    t61 = (x245&(x246!=(x247==x248)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x249 = -1;
	int32_t x250 = INT32_MIN;
	int32_t x251 = INT32_MIN;
	uint8_t x252 = 0U;
	int32_t t62 = -74083;

    t62 = (x249&(x250!=(x251==x252)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x253 = INT32_MAX;
	uint64_t x254 = 620LLU;
	volatile int32_t x255 = INT32_MAX;
	int32_t t63 = 14;

    t63 = (x253&(x254!=(x255==x256)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x258 = -1;

    t64 = (x257&(x258!=(x259==x260)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x261 = UINT64_MAX;
	int8_t x262 = INT8_MIN;
	int64_t x264 = INT64_MIN;

    t65 = (x261&(x262!=(x263==x264)));

    if (t65 != 1LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x265 = 10U;
	static uint32_t x266 = UINT32_MAX;
	uint16_t x267 = 167U;
	uint64_t x268 = 443LLU;
	volatile uint32_t t66 = 110865U;

    t66 = (x265&(x266!=(x267==x268)));

    if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x269 = -82687004528LL;
	int32_t x270 = INT32_MIN;
	uint8_t x271 = 113U;
	static uint32_t x272 = UINT32_MAX;

    t67 = (x269&(x270!=(x271==x272)));

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x273 = INT8_MIN;
	uint32_t x274 = 1841U;
	uint8_t x275 = 0U;
	int8_t x276 = INT8_MIN;

    t68 = (x273&(x274!=(x275==x276)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x277 = INT8_MAX;
	static volatile uint64_t x278 = 6312444379074242836LLU;
	volatile int32_t x279 = -1;
	static int64_t x280 = INT64_MIN;
	int32_t t69 = -115779323;

    t69 = (x277&(x278!=(x279==x280)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = -1LL;
	static volatile int32_t x282 = 473;
	static volatile int8_t x283 = -1;
	int8_t x284 = INT8_MIN;
	volatile int64_t t70 = -158LL;

    t70 = (x281&(x282!=(x283==x284)));

    if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x285 = 1959U;
	uint16_t x286 = 2U;
	static uint32_t t71 = 179017U;

    t71 = (x285&(x286!=(x287==x288)));

    if (t71 != 1U) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = -12;
	static int8_t x290 = 1;
	static int8_t x291 = INT8_MIN;
	int32_t t72 = 0;

    t72 = (x289&(x290!=(x291==x292)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint16_t x293 = 411U;
	static volatile int32_t x294 = INT32_MIN;
	volatile int64_t x295 = INT64_MIN;
	int32_t t73 = -6416380;

    t73 = (x293&(x294!=(x295==x296)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x297 = -1;
	int32_t x298 = -1934;
	uint16_t x299 = 12U;
	int32_t t74 = -100824;

    t74 = (x297&(x298!=(x299==x300)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = INT16_MIN;
	uint16_t x302 = 23U;
	int64_t x303 = INT64_MIN;
	int64_t x304 = INT64_MIN;
	int32_t t75 = -229829;

    t75 = (x301&(x302!=(x303==x304)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x305 = -1;
	static int16_t x306 = INT16_MIN;
	int16_t x307 = INT16_MAX;
	volatile int32_t t76 = 81;

    t76 = (x305&(x306!=(x307==x308)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = 423778LL;
	uint32_t x310 = UINT32_MAX;
	int32_t x311 = -1288296;
	volatile int32_t x312 = INT32_MIN;
	static int64_t t77 = 7619359LL;

    t77 = (x309&(x310!=(x311==x312)));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint16_t x314 = 3368U;
	int16_t x316 = -1;
	volatile uint64_t t78 = 23378896088702LLU;

    t78 = (x313&(x314!=(x315==x316)));

    if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x318 = INT8_MIN;
	int8_t x319 = INT8_MIN;
	volatile int32_t t79 = 111830287;

    t79 = (x317&(x318!=(x319==x320)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x321 = INT16_MIN;
	static int16_t x322 = INT16_MIN;
	static volatile int32_t x323 = INT32_MIN;
	int64_t x324 = INT64_MAX;
	static volatile int32_t t80 = -620374;

    t80 = (x321&(x322!=(x323==x324)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint64_t x325 = 7230171090939267072LLU;
	volatile uint16_t x326 = 5U;
	static int32_t x327 = -1;
	int32_t x328 = -9;
	static uint64_t t81 = 17293877745206201LLU;

    t81 = (x325&(x326!=(x327==x328)));

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint64_t x329 = UINT64_MAX;
	int64_t x330 = -50940777200LL;
	int8_t x331 = -1;
	int8_t x332 = 2;
	uint64_t t82 = 557557139993436LLU;

    t82 = (x329&(x330!=(x331==x332)));

    if (t82 != 1LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x333 = UINT32_MAX;
	static int16_t x335 = INT16_MIN;
	static int16_t x336 = -1;
	uint32_t t83 = 7429305U;

    t83 = (x333&(x334!=(x335==x336)));

    if (t83 != 1U) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x338 = -1LL;
	static uint16_t x339 = 123U;
	int16_t x340 = 27;
	int64_t t84 = 127972459741675263LL;

    t84 = (x337&(x338!=(x339==x340)));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = INT64_MAX;
	int8_t x343 = -1;
	static int8_t x344 = 1;
	static volatile int64_t t85 = 48747567689LL;

    t85 = (x341&(x342!=(x343==x344)));

    if (t85 != 1LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x345 = 928U;
	int64_t x347 = INT64_MIN;
	uint8_t x348 = 7U;
	static uint32_t t86 = 55U;

    t86 = (x345&(x346!=(x347==x348)));

    if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x350 = 3;
	static int32_t x351 = INT32_MAX;
	static uint16_t x352 = 234U;
	int32_t t87 = 48005222;

    t87 = (x349&(x350!=(x351==x352)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x354 = UINT16_MAX;
	int32_t x355 = INT32_MIN;
	static volatile int32_t t88 = -1;

    t88 = (x353&(x354!=(x355==x356)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x357 = -1LL;
	int64_t x358 = -14LL;
	static uint32_t x359 = 8U;
	uint8_t x360 = 6U;

    t89 = (x357&(x358!=(x359==x360)));

    if (t89 != 1LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x362 = INT8_MAX;
	uint16_t x363 = UINT16_MAX;
	volatile uint32_t x364 = 30655625U;
	static int64_t t90 = -141721127191637920LL;

    t90 = (x361&(x362!=(x363==x364)));

    if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = INT16_MIN;
	int8_t x366 = INT8_MIN;
	static volatile int16_t x368 = -1;
	volatile int32_t t91 = -1;

    t91 = (x365&(x366!=(x367==x368)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = -345424LL;
	int64_t x370 = INT64_MAX;
	int16_t x371 = 0;

    t92 = (x369&(x370!=(x371==x372)));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x373 = UINT64_MAX;
	uint32_t x374 = UINT32_MAX;
	static uint8_t x375 = 13U;
	uint8_t x376 = 54U;
	volatile uint64_t t93 = 150850941718835LLU;

    t93 = (x373&(x374!=(x375==x376)));

    if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x377 = INT8_MIN;
	volatile int16_t x378 = 8702;
	static uint32_t x379 = 1445924209U;
	int64_t x380 = INT64_MAX;
	int32_t t94 = -683;

    t94 = (x377&(x378!=(x379==x380)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x382 = -1931582684954LL;
	int8_t x383 = -2;
	static int32_t t95 = -82;

    t95 = (x381&(x382!=(x383==x384)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = -1;
	int16_t x386 = -1;
	static int32_t x387 = INT32_MIN;
	int16_t x388 = INT16_MAX;
	volatile int32_t t96 = -3387268;

    t96 = (x385&(x386!=(x387==x388)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x389 = 25018LLU;
	int64_t x390 = -1LL;
	static int16_t x391 = -1;
	int16_t x392 = -1;
	uint64_t t97 = 1002988645LLU;

    t97 = (x389&(x390!=(x391==x392)));

    if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x393 = INT8_MAX;
	volatile uint16_t x394 = 2U;
	static uint64_t x395 = UINT64_MAX;
	int32_t x396 = INT32_MIN;
	volatile int32_t t98 = -7;

    t98 = (x393&(x394!=(x395==x396)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint64_t x397 = 0LLU;
	int32_t x398 = INT32_MIN;
	int16_t x399 = INT16_MIN;
	volatile int16_t x400 = INT16_MIN;

    t99 = (x397&(x398!=(x399==x400)));

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x401 = -1;
	uint64_t x403 = 64707313LLU;
	int16_t x404 = -1;
	volatile int32_t t100 = -2054790;

    t100 = (x401&(x402!=(x403==x404)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x406 = -1LL;
	volatile int32_t x407 = -1;
	int64_t x408 = INT64_MIN;
	int32_t t101 = -961091;

    t101 = (x405&(x406!=(x407==x408)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x410 = -1;
	static uint8_t x411 = 37U;
	uint64_t x412 = 763406913306659LLU;
	volatile int32_t t102 = 5036;

    t102 = (x409&(x410!=(x411==x412)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x413 = INT32_MAX;
	int64_t x414 = INT64_MIN;
	static uint32_t x415 = 1595U;
	static int32_t x416 = -1;
	int32_t t103 = -27;

    t103 = (x413&(x414!=(x415==x416)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x417 = INT16_MIN;
	int32_t x418 = INT32_MIN;
	int64_t x419 = -1LL;
	volatile int32_t t104 = 19664;

    t104 = (x417&(x418!=(x419==x420)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x421 = 74;
	int64_t x423 = INT64_MIN;
	volatile int32_t x424 = -1;
	volatile int32_t t105 = 127221;

    t105 = (x421&(x422!=(x423==x424)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x426 = UINT64_MAX;
	uint32_t x427 = UINT32_MAX;
	volatile uint32_t t106 = 10U;

    t106 = (x425&(x426!=(x427==x428)));

    if (t106 != 0U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x429 = 2U;
	static int32_t x430 = 1227;
	static int8_t x431 = INT8_MAX;

    t107 = (x429&(x430!=(x431==x432)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x433 = INT8_MIN;
	static volatile uint16_t x434 = 653U;
	uint16_t x436 = UINT16_MAX;

    t108 = (x433&(x434!=(x435==x436)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x439 = -1;
	volatile int64_t x440 = INT64_MAX;
	static volatile int32_t t109 = -1;

    t109 = (x437&(x438!=(x439==x440)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x441 = INT16_MIN;
	int64_t x442 = -549191046368683155LL;
	int16_t x443 = INT16_MIN;
	volatile int8_t x444 = INT8_MAX;
	static volatile int32_t t110 = -1541921;

    t110 = (x441&(x442!=(x443==x444)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x446 = UINT64_MAX;
	int8_t x447 = INT8_MIN;
	volatile int64_t t111 = 4610997798LL;

    t111 = (x445&(x446!=(x447==x448)));

    if (t111 != 1LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x449 = UINT16_MAX;
	int8_t x451 = -1;
	volatile int32_t t112 = 3431909;

    t112 = (x449&(x450!=(x451==x452)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x453 = 738441346LLU;
	int8_t x454 = INT8_MIN;
	int32_t x456 = INT32_MIN;
	static uint64_t t113 = 15LLU;

    t113 = (x453&(x454!=(x455==x456)));

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x457 = INT16_MIN;
	int32_t x458 = 10;
	volatile int16_t x459 = INT16_MAX;
	uint32_t x460 = 30131U;
	int32_t t114 = -1;

    t114 = (x457&(x458!=(x459==x460)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x461 = 2871;
	volatile int32_t x464 = 1070940203;
	int32_t t115 = 352346607;

    t115 = (x461&(x462!=(x463==x464)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x465 = UINT32_MAX;
	int64_t x466 = INT64_MAX;
	int32_t x467 = INT32_MIN;
	volatile int8_t x468 = 3;

    t116 = (x465&(x466!=(x467==x468)));

    if (t116 != 1U) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x469 = -1;
	int64_t x470 = -1LL;
	uint16_t x471 = 840U;
	int16_t x472 = INT16_MIN;
	int32_t t117 = -15879161;

    t117 = (x469&(x470!=(x471==x472)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile uint64_t x473 = 1814647506317092LLU;
	static int16_t x475 = 2165;
	int8_t x476 = -1;

    t118 = (x473&(x474!=(x475==x476)));

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint32_t x477 = 3U;
	int16_t x478 = -33;
	uint8_t x479 = 0U;
	int16_t x480 = INT16_MIN;
	uint32_t t119 = 94005U;

    t119 = (x477&(x478!=(x479==x480)));

    if (t119 != 1U) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x481 = 3;
	int8_t x482 = -2;
	int8_t x483 = 0;
	int32_t x484 = -120;

    t120 = (x481&(x482!=(x483==x484)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x485 = -1;
	static int16_t x486 = -1;
	int32_t x487 = -1;
	volatile int32_t t121 = -207;

    t121 = (x485&(x486!=(x487==x488)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = INT32_MAX;
	int32_t x490 = INT32_MIN;
	volatile uint16_t x491 = 7433U;
	volatile int32_t t122 = 740951353;

    t122 = (x489&(x490!=(x491==x492)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x494 = INT16_MIN;
	int16_t x495 = -3320;
	uint32_t x496 = 16326489U;
	volatile int32_t t123 = -10;

    t123 = (x493&(x494!=(x495==x496)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x498 = UINT8_MAX;
	int32_t x499 = INT32_MIN;
	int16_t x500 = INT16_MIN;
	static int32_t t124 = -30;

    t124 = (x497&(x498!=(x499==x500)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x502 = 1;
	int32_t x503 = -376974404;
	int16_t x504 = -1;

    t125 = (x501&(x502!=(x503==x504)));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x505 = INT32_MIN;
	uint64_t x506 = 8229LLU;
	int64_t x507 = INT64_MIN;
	int8_t x508 = INT8_MIN;
	static volatile int32_t t126 = 256506;

    t126 = (x505&(x506!=(x507==x508)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = 10890915219LL;
	volatile int64_t x510 = 1LL;
	int64_t x512 = -1LL;
	int64_t t127 = -110218LL;

    t127 = (x509&(x510!=(x511==x512)));

    if (t127 != 1LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x513 = -4728841;
	static int8_t x514 = INT8_MAX;
	static int8_t x515 = -1;
	volatile uint16_t x516 = 36U;
	volatile int32_t t128 = 927;

    t128 = (x513&(x514!=(x515==x516)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = -61351385297LL;
	uint64_t x518 = 184803354563971LLU;
	int32_t x519 = INT32_MAX;
	volatile int8_t x520 = -18;
	int64_t t129 = -3091780LL;

    t129 = (x517&(x518!=(x519==x520)));

    if (t129 != 1LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x521 = -1;
	static uint8_t x522 = 5U;
	volatile int32_t x524 = INT32_MIN;
	static int32_t t130 = -96;

    t130 = (x521&(x522!=(x523==x524)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x525 = INT8_MIN;
	static int32_t x526 = -20686916;
	int32_t x527 = -127130;
	int16_t x528 = -6;
	volatile int32_t t131 = -714998;

    t131 = (x525&(x526!=(x527==x528)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x530 = 7;
	volatile int16_t x532 = INT16_MAX;
	int32_t t132 = 697828179;

    t132 = (x529&(x530!=(x531==x532)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint16_t x533 = 12895U;
	uint16_t x534 = 10U;
	int64_t x535 = -673LL;
	int16_t x536 = INT16_MAX;
	volatile int32_t t133 = -31;

    t133 = (x533&(x534!=(x535==x536)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x537 = INT32_MAX;
	int64_t x538 = INT64_MAX;

    t134 = (x537&(x538!=(x539==x540)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x541 = 8389;
	int8_t x542 = 0;
	volatile int64_t x543 = -1LL;
	uint8_t x544 = UINT8_MAX;
	int32_t t135 = -5987;

    t135 = (x541&(x542!=(x543==x544)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = -148838063;
	volatile int32_t x546 = -1;
	uint32_t x547 = 524U;
	int16_t x548 = INT16_MIN;
	int32_t t136 = -220170778;

    t136 = (x545&(x546!=(x547==x548)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x550 = INT32_MIN;
	static int8_t x551 = 2;
	int64_t x552 = 0LL;
	int64_t t137 = 983377LL;

    t137 = (x549&(x550!=(x551==x552)));

    if (t137 != 1LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x555 = INT32_MIN;
	uint16_t x556 = 35U;

    t138 = (x553&(x554!=(x555==x556)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x558 = 466;
	int16_t x559 = -1105;
	volatile int64_t x560 = INT64_MIN;

    t139 = (x557&(x558!=(x559==x560)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint64_t x561 = 2574047883188LLU;
	static int8_t x562 = -1;
	volatile uint16_t x563 = 21U;
	uint8_t x564 = UINT8_MAX;
	uint64_t t140 = 3LLU;

    t140 = (x561&(x562!=(x563==x564)));

    if (t140 != 0LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x566 = UINT64_MAX;
	static int64_t x567 = -1902LL;
	volatile int32_t t141 = 211912;

    t141 = (x565&(x566!=(x567==x568)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x569 = -62289109;
	int32_t x570 = -3803636;
	static uint64_t x572 = 1688512608126679LLU;
	int32_t t142 = -256;

    t142 = (x569&(x570!=(x571==x572)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x573 = -2;
	int32_t x574 = -1;
	int8_t x576 = INT8_MIN;
	static volatile int32_t t143 = -5118;

    t143 = (x573&(x574!=(x575==x576)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint64_t x577 = 1593500060LLU;
	volatile int64_t x578 = INT64_MIN;
	int64_t x579 = INT64_MIN;
	static volatile uint64_t t144 = 6LLU;

    t144 = (x577&(x578!=(x579==x580)));

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x581 = UINT8_MAX;
	uint32_t x582 = 84300U;
	static int8_t x583 = -14;
	uint16_t x584 = 0U;
	volatile int32_t t145 = -60136;

    t145 = (x581&(x582!=(x583==x584)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x585 = UINT64_MAX;
	volatile int64_t x586 = INT64_MIN;
	static int8_t x587 = -28;
	int32_t x588 = -2085;
	uint64_t t146 = 2279458979619929154LLU;

    t146 = (x585&(x586!=(x587==x588)));

    if (t146 != 1LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x589 = 266LL;
	uint64_t x590 = UINT64_MAX;
	int8_t x591 = 0;
	int64_t x592 = INT64_MIN;
	volatile int64_t t147 = -3766485531LL;

    t147 = (x589&(x590!=(x591==x592)));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x593 = -1LL;
	volatile int64_t x594 = INT64_MIN;
	uint8_t x595 = 1U;
	static int16_t x596 = 8;
	int64_t t148 = -14570675113697099LL;

    t148 = (x593&(x594!=(x595==x596)));

    if (t148 != 1LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = -572297455745809763LL;
	int64_t x598 = 585455162LL;
	int8_t x599 = -23;
	static int32_t x600 = INT32_MAX;
	volatile int64_t t149 = -2013349LL;

    t149 = (x597&(x598!=(x599==x600)));

    if (t149 != 1LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x601 = INT8_MIN;
	int64_t x602 = 270LL;
	int32_t x604 = -1;
	static volatile int32_t t150 = 333;

    t150 = (x601&(x602!=(x603==x604)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = -11794;
	static int64_t x607 = INT64_MIN;
	volatile uint16_t x608 = 10823U;
	int32_t t151 = -6;

    t151 = (x605&(x606!=(x607==x608)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x609 = INT64_MAX;
	int8_t x610 = -1;
	int16_t x611 = INT16_MIN;
	int64_t t152 = -22115445982959049LL;

    t152 = (x609&(x610!=(x611==x612)));

    if (t152 != 1LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x613 = -1;
	static int16_t x614 = 49;
	uint8_t x615 = 15U;
	int64_t x616 = INT64_MIN;
	static int32_t t153 = 30;

    t153 = (x613&(x614!=(x615==x616)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x617 = INT16_MIN;
	uint32_t x618 = 16886U;
	uint16_t x620 = 1335U;
	volatile int32_t t154 = -7588491;

    t154 = (x617&(x618!=(x619==x620)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x621 = INT8_MAX;
	uint32_t x622 = 73119727U;
	int16_t x624 = INT16_MAX;
	int32_t t155 = -691;

    t155 = (x621&(x622!=(x623==x624)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = INT64_MIN;
	uint64_t x626 = 134025048LLU;
	int8_t x627 = -1;
	static int32_t x628 = INT32_MIN;
	int64_t t156 = 77915187586LL;

    t156 = (x625&(x626!=(x627==x628)));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x629 = -22;
	int8_t x630 = INT8_MIN;
	static volatile int64_t x631 = INT64_MIN;
	int64_t x632 = -1LL;

    t157 = (x629&(x630!=(x631==x632)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x635 = INT16_MAX;
	int8_t x636 = 4;
	volatile int32_t t158 = -6469620;

    t158 = (x633&(x634!=(x635==x636)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x638 = -1;
	volatile int8_t x640 = INT8_MIN;

    t159 = (x637&(x638!=(x639==x640)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x641 = INT64_MAX;
	uint32_t x642 = UINT32_MAX;
	static int64_t x643 = INT64_MIN;
	int16_t x644 = INT16_MIN;
	volatile int64_t t160 = 7930LL;

    t160 = (x641&(x642!=(x643==x644)));

    if (t160 != 1LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x645 = INT16_MIN;
	int8_t x646 = -1;
	int32_t x647 = INT32_MAX;
	int32_t t161 = -601;

    t161 = (x645&(x646!=(x647==x648)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x649 = 23U;
	volatile uint32_t x650 = 1954U;
	int32_t x651 = 3;
	int16_t x652 = -6219;
	int32_t t162 = 1;

    t162 = (x649&(x650!=(x651==x652)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x653 = INT32_MIN;
	static uint64_t x654 = 3016765740096721LLU;
	uint8_t x655 = UINT8_MAX;
	volatile int32_t t163 = -30546379;

    t163 = (x653&(x654!=(x655==x656)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = INT8_MIN;
	volatile uint64_t x658 = UINT64_MAX;
	static int64_t x659 = -1LL;
	volatile int32_t x660 = INT32_MAX;
	int32_t t164 = 32497;

    t164 = (x657&(x658!=(x659==x660)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x661 = 113U;
	uint16_t x662 = UINT16_MAX;
	uint16_t x664 = 11645U;
	volatile uint32_t t165 = 363827U;

    t165 = (x661&(x662!=(x663==x664)));

    if (t165 != 1U) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x665 = INT16_MIN;
	volatile int8_t x666 = INT8_MIN;
	uint64_t x668 = 4749113388636LLU;
	int32_t t166 = 18853728;

    t166 = (x665&(x666!=(x667==x668)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x669 = -2916;
	uint64_t x670 = 2LLU;
	int16_t x671 = -1;
	static volatile int64_t x672 = -1LL;
	static int32_t t167 = -23197471;

    t167 = (x669&(x670!=(x671==x672)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x673 = INT16_MIN;
	int8_t x674 = INT8_MIN;
	int16_t x676 = INT16_MIN;
	static volatile int32_t t168 = 3334;

    t168 = (x673&(x674!=(x675==x676)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x677 = INT64_MAX;
	static uint64_t x679 = UINT64_MAX;
	volatile int64_t t169 = 103079LL;

    t169 = (x677&(x678!=(x679==x680)));

    if (t169 != 1LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x681 = -217425567LL;
	volatile int8_t x682 = -1;
	int32_t x684 = INT32_MIN;
	int64_t t170 = -3142LL;

    t170 = (x681&(x682!=(x683==x684)));

    if (t170 != 1LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x685 = 42;
	int16_t x686 = 22;
	int8_t x687 = INT8_MAX;
	int8_t x688 = -1;

    t171 = (x685&(x686!=(x687==x688)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x689 = UINT64_MAX;
	uint8_t x690 = 0U;
	int16_t x692 = INT16_MIN;
	uint64_t t172 = 136340626605670LLU;

    t172 = (x689&(x690!=(x691==x692)));

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x694 = INT64_MAX;
	int32_t x695 = 128202;
	uint16_t x696 = UINT16_MAX;
	int32_t t173 = -5354803;

    t173 = (x693&(x694!=(x695==x696)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x697 = -1506;
	uint8_t x698 = 1U;
	static uint32_t x699 = 309U;
	volatile int8_t x700 = INT8_MAX;

    t174 = (x697&(x698!=(x699==x700)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = INT8_MIN;
	uint32_t x702 = 176734194U;
	int16_t x703 = -1;
	int32_t t175 = 0;

    t175 = (x701&(x702!=(x703==x704)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint16_t x706 = 30942U;
	int16_t x707 = INT16_MAX;
	static int16_t x708 = INT16_MIN;
	static volatile int64_t t176 = 877493286820098991LL;

    t176 = (x705&(x706!=(x707==x708)));

    if (t176 != 1LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x709 = -1;
	static volatile int64_t x710 = INT64_MAX;
	static volatile int8_t x711 = INT8_MIN;
	int32_t x712 = 0;

    t177 = (x709&(x710!=(x711==x712)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint32_t x713 = 1U;
	uint8_t x715 = UINT8_MAX;
	uint8_t x716 = UINT8_MAX;
	uint32_t t178 = 13790U;

    t178 = (x713&(x714!=(x715==x716)));

    if (t178 != 1U) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint32_t x717 = 7667860U;
	int64_t x719 = INT64_MIN;
	volatile uint64_t x720 = 500250748LLU;
	volatile uint32_t t179 = 56977U;

    t179 = (x717&(x718!=(x719==x720)));

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x721 = INT16_MIN;
	uint32_t x722 = 3U;
	uint64_t x724 = UINT64_MAX;
	static int32_t t180 = 433350799;

    t180 = (x721&(x722!=(x723==x724)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x725 = 1;

    t181 = (x725&(x726!=(x727==x728)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x729 = 6338U;
	uint8_t x730 = 77U;
	static int8_t x731 = INT8_MIN;
	volatile int32_t x732 = INT32_MAX;
	uint32_t t182 = 2U;

    t182 = (x729&(x730!=(x731==x732)));

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x733 = 241073933680LL;
	int16_t x734 = -1;
	uint64_t x735 = 145933213031239LLU;
	int64_t x736 = INT64_MAX;
	int64_t t183 = -86571LL;

    t183 = (x733&(x734!=(x735==x736)));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x737 = INT32_MIN;
	int16_t x738 = 3;
	static uint64_t x739 = 3158858LLU;
	static volatile uint16_t x740 = UINT16_MAX;

    t184 = (x737&(x738!=(x739==x740)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x741 = -1;
	int8_t x742 = INT8_MIN;
	uint32_t x743 = 54144U;
	int64_t x744 = INT64_MIN;
	volatile int32_t t185 = -7547455;

    t185 = (x741&(x742!=(x743==x744)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x745 = 2U;
	int16_t x746 = -100;
	static int8_t x747 = INT8_MAX;
	int64_t x748 = INT64_MAX;
	volatile int32_t t186 = 125694;

    t186 = (x745&(x746!=(x747==x748)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint16_t x749 = 6U;
	int32_t x750 = INT32_MIN;
	uint32_t x752 = UINT32_MAX;
	volatile int32_t t187 = -308020550;

    t187 = (x749&(x750!=(x751==x752)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x753 = INT16_MIN;
	uint16_t x755 = UINT16_MAX;
	volatile int32_t t188 = -1;

    t188 = (x753&(x754!=(x755==x756)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x757 = 3046068U;
	uint8_t x758 = 6U;
	static uint32_t t189 = 59801U;

    t189 = (x757&(x758!=(x759==x760)));

    if (t189 != 0U) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x761 = INT16_MAX;
	int32_t x762 = 0;
	uint32_t x764 = 955U;
	static volatile int32_t t190 = -392807;

    t190 = (x761&(x762!=(x763==x764)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x765 = INT16_MIN;
	volatile int64_t x766 = 1LL;
	static int64_t x768 = INT64_MIN;

    t191 = (x765&(x766!=(x767==x768)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x769 = -1;
	volatile int64_t x770 = 42603201690LL;
	int32_t x771 = 27289;
	volatile int64_t x772 = INT64_MAX;
	int32_t t192 = 10;

    t192 = (x769&(x770!=(x771==x772)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x773 = INT64_MAX;
	volatile uint64_t x774 = 12631433681633878LLU;
	int8_t x775 = INT8_MAX;
	volatile int64_t x776 = INT64_MIN;
	volatile int64_t t193 = -422979776828039479LL;

    t193 = (x773&(x774!=(x775==x776)));

    if (t193 != 1LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint16_t x777 = 2845U;
	int64_t x778 = INT64_MIN;
	volatile int32_t x779 = -1;
	static int16_t x780 = INT16_MIN;
	volatile int32_t t194 = 6698;

    t194 = (x777&(x778!=(x779==x780)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x781 = -508052;
	int64_t x782 = INT64_MAX;
	int32_t x783 = 248881714;
	int8_t x784 = INT8_MIN;
	volatile int32_t t195 = 29152112;

    t195 = (x781&(x782!=(x783==x784)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x785 = 9U;
	int64_t x786 = INT64_MAX;
	int64_t x787 = -1LL;
	volatile int16_t x788 = 558;
	volatile int32_t t196 = -880128262;

    t196 = (x785&(x786!=(x787==x788)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x789 = INT32_MIN;
	uint32_t x790 = UINT32_MAX;
	int32_t x791 = -1;
	int64_t x792 = -1LL;
	volatile int32_t t197 = 103;

    t197 = (x789&(x790!=(x791==x792)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint64_t x793 = 946844756LLU;
	int8_t x794 = INT8_MAX;
	int32_t x795 = 5;
	static int16_t x796 = INT16_MAX;
	uint64_t t198 = 57961072LLU;

    t198 = (x793&(x794!=(x795==x796)));

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x797 = UINT16_MAX;
	volatile int64_t x798 = INT64_MIN;
	volatile int64_t x799 = INT64_MIN;
	int64_t x800 = INT64_MIN;
	volatile int32_t t199 = 1;

    t199 = (x797&(x798!=(x799==x800)));

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

