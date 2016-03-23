
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

int64_t x3 = INT64_MIN;
uint8_t x7 = 46U;
int16_t x13 = INT16_MIN;
int32_t x15 = INT32_MIN;
volatile uint32_t x17 = 68U;
volatile int32_t t4 = 408;
int32_t x22 = INT32_MAX;
static volatile uint32_t x23 = 98U;
volatile int32_t t5 = 7;
static volatile int64_t x34 = -8922335818366811LL;
volatile uint64_t x40 = 933994151133085787LLU;
static uint16_t x42 = UINT16_MAX;
int16_t x43 = -1;
uint64_t x48 = UINT64_MAX;
int8_t x51 = 1;
volatile int32_t t13 = 12;
int32_t t14 = -763131396;
static uint16_t x63 = 1U;
int64_t x66 = INT64_MIN;
static int64_t x72 = INT64_MAX;
int8_t x76 = -61;
static int8_t x82 = -1;
volatile int32_t t20 = 1;
int8_t x85 = INT8_MIN;
uint64_t x100 = 122552919LLU;
uint16_t x105 = 95U;
volatile uint32_t x106 = 53237U;
volatile int32_t t28 = 3922;
static volatile int32_t t31 = 455610;
static uint8_t x140 = UINT8_MAX;
int32_t x149 = -1;
int16_t x152 = -1;
static int16_t x156 = 9;
static uint64_t x162 = UINT64_MAX;
static uint32_t x163 = 217141396U;
int32_t x164 = INT32_MIN;
int8_t x165 = INT8_MIN;
static int32_t x166 = INT32_MAX;
uint16_t x169 = 4U;
uint32_t x177 = 45322086U;
uint32_t x181 = 19653400U;
int16_t x182 = -24;
static volatile uint64_t x183 = 52676978LLU;
int32_t t45 = 1013096;
int64_t x189 = 859648456656077337LL;
int32_t x190 = -1;
int16_t x193 = INT16_MIN;
int32_t t49 = -4713;
int8_t x201 = INT8_MAX;
volatile int16_t x204 = 6;
int16_t x209 = INT16_MAX;
uint8_t x210 = 71U;
static int32_t t52 = -481842;
static int64_t x214 = -1LL;
uint64_t x215 = UINT64_MAX;
uint32_t x218 = 1267456U;
int32_t t54 = 823216;
volatile uint16_t x222 = 8U;
int32_t x223 = 600242175;
volatile uint64_t x224 = 173036LLU;
int32_t t55 = -24622731;
static volatile int32_t t56 = -16;
static int64_t x231 = INT64_MIN;
uint8_t x238 = 22U;
uint16_t x239 = UINT16_MAX;
int8_t x241 = 1;
volatile int32_t t60 = 10289899;
static uint16_t x251 = 0U;
int32_t x254 = 1029836;
int64_t x256 = INT64_MIN;
int8_t x258 = INT8_MIN;
int64_t x262 = INT64_MIN;
int32_t x264 = -1;
int64_t x266 = -1LL;
static int16_t x272 = 18;
int64_t x275 = INT64_MAX;
volatile uint32_t x279 = 234542605U;
int16_t x280 = -1;
int16_t x284 = -1;
int16_t x287 = INT16_MAX;
static uint16_t x288 = 4311U;
static int32_t x297 = -1;
static uint16_t x301 = UINT16_MAX;
int64_t x302 = INT64_MIN;
uint8_t x304 = 3U;
static volatile int32_t t75 = 7;
int32_t t76 = -31746;
volatile int32_t t78 = -7946;
static int16_t x318 = INT16_MIN;
static volatile int32_t t79 = 995335;
volatile int32_t t80 = -175360786;
int64_t x326 = INT64_MIN;
volatile int16_t x330 = 1662;
int32_t x337 = -3550;
int64_t x338 = INT64_MAX;
int64_t x342 = -1LL;
volatile uint8_t x361 = 4U;
int16_t x362 = 0;
uint64_t x367 = 12LLU;
int32_t t91 = 1240247;
static volatile uint8_t x372 = 13U;
static int8_t x386 = -21;
int16_t x387 = INT16_MAX;
int64_t x392 = -469303705LL;
int32_t x406 = INT32_MIN;
int32_t x408 = INT32_MIN;
int64_t x409 = INT64_MIN;
static int16_t x411 = INT16_MIN;
static volatile int32_t t102 = 492673722;
int16_t x413 = INT16_MIN;
static uint32_t x414 = 366545U;
int16_t x419 = INT16_MIN;
static int32_t t104 = 27;
static int16_t x423 = INT16_MAX;
volatile int32_t x428 = INT32_MIN;
int32_t t106 = -3941178;
volatile int32_t x438 = INT32_MAX;
int32_t x446 = INT32_MIN;
uint8_t x450 = 4U;
int32_t x456 = INT32_MIN;
static int32_t x461 = INT32_MIN;
static uint64_t x463 = UINT64_MAX;
volatile int32_t t115 = -190934309;
volatile uint8_t x466 = 5U;
uint64_t x467 = UINT64_MAX;
int32_t t117 = 4633257;
uint32_t x476 = UINT32_MAX;
volatile int32_t t119 = -3635541;
int32_t t120 = 5;
uint64_t x488 = 82LLU;
uint16_t x505 = UINT16_MAX;
volatile int64_t x517 = INT64_MAX;
int64_t x520 = INT64_MAX;
static volatile int32_t t131 = -1;
int64_t x529 = INT64_MAX;
volatile uint32_t x532 = 83U;
int8_t x533 = 0;
uint32_t x534 = 3015918U;
volatile int8_t x535 = -1;
int16_t x538 = INT16_MIN;
volatile int32_t t135 = 625544;
int32_t x548 = -1;
static int32_t x557 = -42;
static int32_t x564 = 21123573;
static volatile int32_t t140 = -97844414;
volatile int64_t x568 = INT64_MIN;
int8_t x569 = 39;
uint8_t x571 = UINT8_MAX;
int16_t x576 = INT16_MIN;
volatile int32_t t143 = 1;
int16_t x579 = INT16_MIN;
int16_t x583 = 0;
volatile int32_t t145 = 15400414;
volatile uint64_t x586 = 3998LLU;
int16_t x588 = INT16_MIN;
int16_t x597 = 33;
int8_t x600 = INT8_MIN;
int32_t x607 = INT32_MIN;
volatile uint64_t x608 = UINT64_MAX;
uint32_t x610 = 13290940U;
volatile uint64_t x617 = 45LLU;
volatile int64_t x627 = INT64_MAX;
uint64_t x628 = 57LLU;
volatile int16_t x629 = -2694;
int64_t x630 = INT64_MAX;
int8_t x633 = INT8_MIN;
static int32_t t159 = 272;
uint32_t x647 = 21429216U;
uint8_t x648 = 11U;
int8_t x650 = INT8_MAX;
volatile int32_t t162 = -5441834;
int16_t x665 = INT16_MAX;
volatile int32_t t166 = 8623;
int16_t x669 = -1;
volatile int32_t t167 = -13300994;
volatile int16_t x673 = INT16_MAX;
volatile int32_t x674 = INT32_MIN;
int16_t x675 = -87;
int32_t x677 = -1;
int8_t x682 = INT8_MIN;
int8_t x686 = INT8_MAX;
int32_t t172 = -15983;
volatile uint16_t x694 = UINT16_MAX;
int16_t x706 = 5;
int32_t x708 = INT32_MAX;
static uint32_t x710 = UINT32_MAX;
int16_t x714 = INT16_MIN;
int8_t x715 = INT8_MIN;
int32_t x718 = INT32_MAX;
int8_t x720 = INT8_MIN;
uint8_t x721 = 1U;
volatile int32_t t180 = 594;
uint8_t x725 = UINT8_MAX;
int32_t x729 = INT32_MIN;
volatile int16_t x730 = INT16_MIN;
int32_t x731 = INT32_MIN;
int16_t x741 = -60;
static int16_t x744 = INT16_MIN;
uint16_t x746 = 23326U;
int32_t t186 = 42176;
static int64_t x769 = 1622190LL;
uint32_t x775 = UINT32_MAX;
volatile int32_t x777 = 399;
int64_t x781 = INT64_MAX;
static volatile int32_t t195 = -9174;
int32_t x788 = INT32_MIN;
int16_t x791 = 131;
volatile uint16_t x792 = UINT16_MAX;
volatile int32_t t199 = 3925;


void f0(void) {
    	int32_t x1 = INT32_MAX;
	static uint64_t x2 = UINT64_MAX;
	static uint16_t x4 = 25156U;
	static volatile int32_t t0 = 9;

    t0 = (x1>(x2^(x3>x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MIN;
	volatile int16_t x6 = INT16_MIN;
	int32_t x8 = INT32_MIN;
	volatile int32_t t1 = 0;

    t1 = (x5>(x6^(x7>x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = -1;
	static int64_t x10 = 8229515019LL;
	volatile int8_t x11 = 6;
	int8_t x12 = INT8_MIN;
	static volatile int32_t t2 = 1;

    t2 = (x9>(x10^(x11>x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x14 = 11U;
	uint32_t x16 = 10U;
	volatile int32_t t3 = -146601;

    t3 = (x13>(x14^(x15>x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x18 = 82560722LLU;
	int64_t x19 = INT64_MIN;
	uint32_t x20 = 32U;

    t4 = (x17>(x18^(x19>x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = INT8_MIN;
	uint64_t x24 = 818335886342LLU;

    t5 = (x21>(x22^(x23>x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MIN;
	uint64_t x26 = 3298LLU;
	int64_t x27 = INT64_MIN;
	static uint16_t x28 = 0U;
	int32_t t6 = 1;

    t6 = (x25>(x26^(x27>x28)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = UINT16_MAX;
	int64_t x30 = -2144358894316LL;
	int16_t x31 = INT16_MIN;
	uint64_t x32 = 8192558766LLU;
	volatile int32_t t7 = -117554978;

    t7 = (x29>(x30^(x31>x32)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = INT32_MIN;
	static volatile int16_t x35 = -9;
	int32_t x36 = 27378211;
	volatile int32_t t8 = 0;

    t8 = (x33>(x34^(x35>x36)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x37 = -188916LL;
	static volatile uint16_t x38 = 184U;
	int64_t x39 = -5944395560797269LL;
	static volatile int32_t t9 = 293410859;

    t9 = (x37>(x38^(x39>x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = INT16_MAX;
	int16_t x44 = INT16_MIN;
	int32_t t10 = 25081457;

    t10 = (x41>(x42^(x43>x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x45 = 0;
	uint8_t x46 = 62U;
	int8_t x47 = INT8_MAX;
	int32_t t11 = 19474321;

    t11 = (x45>(x46^(x47>x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x49 = 1167150787638LLU;
	uint16_t x50 = 22U;
	static uint8_t x52 = 19U;
	static int32_t t12 = -11986;

    t12 = (x49>(x50^(x51>x52)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x53 = -406;
	int32_t x54 = -521148;
	static volatile int16_t x55 = INT16_MIN;
	int64_t x56 = 43159136LL;

    t13 = (x53>(x54^(x55>x56)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint16_t x57 = 2U;
	int32_t x58 = 35;
	volatile int64_t x59 = -5008543539LL;
	volatile uint32_t x60 = UINT32_MAX;

    t14 = (x57>(x58^(x59>x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = -1LL;
	static int32_t x62 = INT32_MAX;
	int8_t x64 = INT8_MIN;
	volatile int32_t t15 = 1081762;

    t15 = (x61>(x62^(x63>x64)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x65 = 2;
	int32_t x67 = 31680;
	uint8_t x68 = 23U;
	volatile int32_t t16 = -2281;

    t16 = (x65>(x66^(x67>x68)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x69 = UINT16_MAX;
	static uint32_t x70 = UINT32_MAX;
	uint32_t x71 = UINT32_MAX;
	static int32_t t17 = 4894;

    t17 = (x69>(x70^(x71>x72)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x73 = INT8_MIN;
	int32_t x74 = 10793427;
	int16_t x75 = INT16_MIN;
	volatile int32_t t18 = 491831988;

    t18 = (x73>(x74^(x75>x76)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = -30027209LL;
	int32_t x78 = -1;
	int64_t x79 = INT64_MAX;
	static int64_t x80 = -1LL;
	int32_t t19 = 6997091;

    t19 = (x77>(x78^(x79>x80)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = INT16_MAX;
	int64_t x83 = INT64_MIN;
	int32_t x84 = INT32_MIN;

    t20 = (x81>(x82^(x83>x84)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x86 = -1;
	int32_t x87 = -1;
	int16_t x88 = INT16_MIN;
	int32_t t21 = -58208097;

    t21 = (x85>(x86^(x87>x88)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x89 = -1;
	int32_t x90 = -1;
	volatile int64_t x91 = -1LL;
	int16_t x92 = -1;
	int32_t t22 = -855;

    t22 = (x89>(x90^(x91>x92)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int64_t x93 = -30250039LL;
	int8_t x94 = INT8_MAX;
	static int8_t x95 = -1;
	static uint32_t x96 = 65823894U;
	int32_t t23 = 44281;

    t23 = (x93>(x94^(x95>x96)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = -1;
	volatile int64_t x98 = -1LL;
	int8_t x99 = INT8_MIN;
	volatile int32_t t24 = 67864;

    t24 = (x97>(x98^(x99>x100)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = INT32_MIN;
	int8_t x102 = 0;
	int64_t x103 = 34034009945LL;
	int8_t x104 = 13;
	volatile int32_t t25 = -658168;

    t25 = (x101>(x102^(x103>x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x107 = 0;
	volatile int16_t x108 = INT16_MAX;
	volatile int32_t t26 = 952612;

    t26 = (x105>(x106^(x107>x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x109 = 5;
	static uint64_t x110 = UINT64_MAX;
	int16_t x111 = INT16_MIN;
	int32_t x112 = INT32_MIN;
	static int32_t t27 = -2148;

    t27 = (x109>(x110^(x111>x112)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x113 = 5985966225509083366LLU;
	int64_t x114 = INT64_MIN;
	uint64_t x115 = 217466LLU;
	volatile uint64_t x116 = UINT64_MAX;

    t28 = (x113>(x114^(x115>x116)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = -1;
	volatile int64_t x118 = 14076728LL;
	uint64_t x119 = 4053371164262346221LLU;
	int8_t x120 = INT8_MAX;
	static int32_t t29 = 15;

    t29 = (x117>(x118^(x119>x120)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = INT16_MIN;
	int16_t x122 = INT16_MIN;
	int8_t x123 = 0;
	int8_t x124 = 19;
	static volatile int32_t t30 = 5201845;

    t30 = (x121>(x122^(x123>x124)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = -4;
	int32_t x126 = INT32_MIN;
	uint8_t x127 = 6U;
	volatile uint8_t x128 = UINT8_MAX;

    t31 = (x125>(x126^(x127>x128)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = 48;
	static int64_t x130 = INT64_MIN;
	volatile int32_t x131 = -113;
	int16_t x132 = -246;
	volatile int32_t t32 = -7578;

    t32 = (x129>(x130^(x131>x132)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x133 = UINT16_MAX;
	static int32_t x134 = INT32_MAX;
	static int16_t x135 = -1;
	uint8_t x136 = UINT8_MAX;
	volatile int32_t t33 = -9;

    t33 = (x133>(x134^(x135>x136)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x137 = INT64_MIN;
	static int16_t x138 = 30;
	int8_t x139 = INT8_MAX;
	int32_t t34 = -6341;

    t34 = (x137>(x138^(x139>x140)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x141 = UINT64_MAX;
	uint64_t x142 = UINT64_MAX;
	volatile uint32_t x143 = 140058U;
	uint8_t x144 = 0U;
	int32_t t35 = 49;

    t35 = (x141>(x142^(x143>x144)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x145 = -5;
	volatile int16_t x146 = INT16_MAX;
	int16_t x147 = -1;
	int16_t x148 = -1;
	int32_t t36 = -31;

    t36 = (x145>(x146^(x147>x148)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x150 = -6;
	volatile uint32_t x151 = 956445742U;
	static int32_t t37 = 6485;

    t37 = (x149>(x150^(x151>x152)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = -6;
	uint8_t x154 = UINT8_MAX;
	uint64_t x155 = 999659008973LLU;
	volatile int32_t t38 = 0;

    t38 = (x153>(x154^(x155>x156)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x157 = INT64_MIN;
	volatile int16_t x158 = -1;
	int8_t x159 = -49;
	int64_t x160 = INT64_MAX;
	static int32_t t39 = 18;

    t39 = (x157>(x158^(x159>x160)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint32_t x161 = UINT32_MAX;
	volatile int32_t t40 = 30497588;

    t40 = (x161>(x162^(x163>x164)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x167 = UINT16_MAX;
	static int32_t x168 = INT32_MIN;
	int32_t t41 = -26781;

    t41 = (x165>(x166^(x167>x168)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x170 = INT32_MAX;
	int8_t x171 = INT8_MIN;
	volatile int8_t x172 = -1;
	volatile int32_t t42 = -2;

    t42 = (x169>(x170^(x171>x172)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x173 = INT32_MAX;
	volatile uint8_t x174 = 1U;
	uint32_t x175 = 40029554U;
	int8_t x176 = INT8_MAX;
	int32_t t43 = 501;

    t43 = (x173>(x174^(x175>x176)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x178 = INT8_MIN;
	static uint16_t x179 = 406U;
	int8_t x180 = INT8_MIN;
	volatile int32_t t44 = 207705;

    t44 = (x177>(x178^(x179>x180)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x184 = 10661245LLU;

    t45 = (x181>(x182^(x183>x184)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x185 = INT64_MAX;
	static int16_t x186 = INT16_MIN;
	int32_t x187 = INT32_MIN;
	uint32_t x188 = 1U;
	volatile int32_t t46 = 13;

    t46 = (x185>(x186^(x187>x188)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x191 = 22U;
	volatile int32_t x192 = -1;
	int32_t t47 = 2465209;

    t47 = (x189>(x190^(x191>x192)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x194 = -1;
	static uint8_t x195 = 19U;
	int8_t x196 = -1;
	int32_t t48 = 137372;

    t48 = (x193>(x194^(x195>x196)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x197 = 51U;
	volatile int64_t x198 = 43LL;
	static int16_t x199 = INT16_MAX;
	int32_t x200 = INT32_MIN;

    t49 = (x197>(x198^(x199>x200)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x202 = INT64_MIN;
	int64_t x203 = INT64_MIN;
	volatile int32_t t50 = -1111;

    t50 = (x201>(x202^(x203>x204)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x205 = 187639251LLU;
	int8_t x206 = -39;
	volatile uint32_t x207 = UINT32_MAX;
	uint8_t x208 = 2U;
	int32_t t51 = 1091;

    t51 = (x205>(x206^(x207>x208)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x211 = -44707372436358193LL;
	uint64_t x212 = 4LLU;

    t52 = (x209>(x210^(x211>x212)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x213 = UINT8_MAX;
	static uint16_t x216 = UINT16_MAX;
	volatile int32_t t53 = -5440;

    t53 = (x213>(x214^(x215>x216)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x217 = INT64_MIN;
	int64_t x219 = 4039465LL;
	int64_t x220 = -1LL;

    t54 = (x217>(x218^(x219>x220)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x221 = -1;

    t55 = (x221>(x222^(x223>x224)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint16_t x225 = UINT16_MAX;
	int16_t x226 = 8;
	int64_t x227 = 33007716928565LL;
	volatile int16_t x228 = INT16_MIN;

    t56 = (x225>(x226^(x227>x228)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x229 = -60;
	volatile uint64_t x230 = 1242LLU;
	uint32_t x232 = 4383U;
	volatile int32_t t57 = -68025;

    t57 = (x229>(x230^(x231>x232)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = -965588;
	int8_t x234 = 0;
	static int8_t x235 = 0;
	uint32_t x236 = UINT32_MAX;
	int32_t t58 = -1123;

    t58 = (x233>(x234^(x235>x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x237 = -1;
	int16_t x240 = INT16_MIN;
	volatile int32_t t59 = -7871;

    t59 = (x237>(x238^(x239>x240)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x242 = 35;
	int64_t x243 = INT64_MAX;
	uint8_t x244 = 2U;

    t60 = (x241>(x242^(x243>x244)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x245 = 4U;
	int16_t x246 = INT16_MIN;
	static int16_t x247 = 1;
	uint16_t x248 = 987U;
	volatile int32_t t61 = 1310;

    t61 = (x245>(x246^(x247>x248)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x249 = 39;
	int64_t x250 = -7687006804664LL;
	volatile int8_t x252 = 7;
	static int32_t t62 = 66039;

    t62 = (x249>(x250^(x251>x252)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x253 = UINT64_MAX;
	int32_t x255 = -5452;
	int32_t t63 = -6081241;

    t63 = (x253>(x254^(x255>x256)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x257 = -872;
	int8_t x259 = INT8_MIN;
	uint32_t x260 = 6109U;
	volatile int32_t t64 = 663483;

    t64 = (x257>(x258^(x259>x260)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x261 = INT32_MAX;
	volatile uint64_t x263 = 7722170617829251LLU;
	static int32_t t65 = 7658668;

    t65 = (x261>(x262^(x263>x264)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x265 = INT16_MAX;
	uint16_t x267 = UINT16_MAX;
	static int32_t x268 = -1;
	volatile int32_t t66 = -114788835;

    t66 = (x265>(x266^(x267>x268)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x269 = -6;
	int16_t x270 = INT16_MIN;
	int64_t x271 = INT64_MAX;
	static volatile int32_t t67 = -47;

    t67 = (x269>(x270^(x271>x272)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint16_t x273 = 30U;
	int16_t x274 = INT16_MIN;
	static volatile int16_t x276 = INT16_MAX;
	static volatile int32_t t68 = -704097445;

    t68 = (x273>(x274^(x275>x276)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint16_t x277 = 206U;
	volatile int16_t x278 = 3;
	static int32_t t69 = 2093;

    t69 = (x277>(x278^(x279>x280)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint16_t x281 = UINT16_MAX;
	volatile int8_t x282 = INT8_MAX;
	uint16_t x283 = 0U;
	volatile int32_t t70 = -1973;

    t70 = (x281>(x282^(x283>x284)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = 4;
	int32_t x286 = -1;
	volatile int32_t t71 = 358;

    t71 = (x285>(x286^(x287>x288)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x289 = 1508891553371LLU;
	uint8_t x290 = UINT8_MAX;
	volatile int32_t x291 = INT32_MIN;
	int64_t x292 = -1LL;
	int32_t t72 = -135976;

    t72 = (x289>(x290^(x291>x292)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint16_t x293 = 118U;
	int16_t x294 = -1;
	uint64_t x295 = UINT64_MAX;
	int16_t x296 = INT16_MIN;
	int32_t t73 = 34;

    t73 = (x293>(x294^(x295>x296)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x298 = -2;
	static int64_t x299 = INT64_MIN;
	static int64_t x300 = -1LL;
	int32_t t74 = 232072019;

    t74 = (x297>(x298^(x299>x300)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x303 = -4125480061990361LL;

    t75 = (x301>(x302^(x303>x304)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x305 = INT32_MIN;
	static int8_t x306 = INT8_MIN;
	uint64_t x307 = UINT64_MAX;
	static uint64_t x308 = 698967721616474511LLU;

    t76 = (x305>(x306^(x307>x308)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = -253LL;
	int8_t x310 = -1;
	uint64_t x311 = 684725413950LLU;
	static volatile uint64_t x312 = 10636728287LLU;
	volatile int32_t t77 = 99709785;

    t77 = (x309>(x310^(x311>x312)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x313 = 12U;
	uint32_t x314 = 46190U;
	volatile int16_t x315 = -1;
	static uint64_t x316 = UINT64_MAX;

    t78 = (x313>(x314^(x315>x316)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x317 = 108060U;
	int16_t x319 = INT16_MAX;
	int32_t x320 = 634;

    t79 = (x317>(x318^(x319>x320)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x321 = 0;
	static uint64_t x322 = UINT64_MAX;
	uint32_t x323 = 353503U;
	int16_t x324 = -1;

    t80 = (x321>(x322^(x323>x324)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x325 = INT8_MIN;
	volatile int16_t x327 = -73;
	static int16_t x328 = INT16_MIN;
	int32_t t81 = 2632912;

    t81 = (x325>(x326^(x327>x328)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int16_t x329 = INT16_MIN;
	int64_t x331 = INT64_MIN;
	static volatile int16_t x332 = INT16_MIN;
	volatile int32_t t82 = -63999690;

    t82 = (x329>(x330^(x331>x332)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = INT16_MAX;
	int16_t x334 = 7557;
	int32_t x335 = INT32_MAX;
	int64_t x336 = INT64_MIN;
	volatile int32_t t83 = 24652475;

    t83 = (x333>(x334^(x335>x336)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x339 = INT8_MAX;
	int16_t x340 = INT16_MIN;
	volatile int32_t t84 = 86741;

    t84 = (x337>(x338^(x339>x340)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x341 = INT16_MIN;
	volatile uint16_t x343 = 13330U;
	volatile int8_t x344 = 0;
	static volatile int32_t t85 = -231;

    t85 = (x341>(x342^(x343>x344)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x345 = INT8_MAX;
	int32_t x346 = INT32_MAX;
	int64_t x347 = -280675895913747LL;
	int16_t x348 = 3;
	int32_t t86 = -15649;

    t86 = (x345>(x346^(x347>x348)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x349 = -1;
	uint16_t x350 = UINT16_MAX;
	volatile int32_t x351 = INT32_MAX;
	static uint8_t x352 = 89U;
	int32_t t87 = 3062;

    t87 = (x349>(x350^(x351>x352)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int8_t x353 = INT8_MIN;
	static volatile int16_t x354 = INT16_MIN;
	static int64_t x355 = 38736LL;
	uint64_t x356 = UINT64_MAX;
	volatile int32_t t88 = 16929;

    t88 = (x353>(x354^(x355>x356)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = INT8_MAX;
	static uint32_t x358 = 3371U;
	int64_t x359 = -1250474558695208629LL;
	uint16_t x360 = UINT16_MAX;
	int32_t t89 = -853410192;

    t89 = (x357>(x358^(x359>x360)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x363 = 194U;
	volatile uint32_t x364 = 170U;
	volatile int32_t t90 = 9062527;

    t90 = (x361>(x362^(x363>x364)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x365 = INT64_MIN;
	static int16_t x366 = 3736;
	int8_t x368 = INT8_MIN;

    t91 = (x365>(x366^(x367>x368)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x369 = INT16_MAX;
	int8_t x370 = INT8_MAX;
	uint16_t x371 = 2U;
	volatile int32_t t92 = -51;

    t92 = (x369>(x370^(x371>x372)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x373 = INT32_MIN;
	static int64_t x374 = 1859377166815LL;
	uint32_t x375 = 321371U;
	static int8_t x376 = INT8_MAX;
	int32_t t93 = -358040245;

    t93 = (x373>(x374^(x375>x376)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x377 = INT8_MIN;
	int8_t x378 = INT8_MIN;
	volatile int8_t x379 = -1;
	uint16_t x380 = UINT16_MAX;
	int32_t t94 = 0;

    t94 = (x377>(x378^(x379>x380)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x381 = UINT8_MAX;
	uint64_t x382 = 1620457084341LLU;
	volatile int8_t x383 = -37;
	static int16_t x384 = INT16_MAX;
	int32_t t95 = 4533261;

    t95 = (x381>(x382^(x383>x384)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x385 = INT64_MAX;
	static uint16_t x388 = UINT16_MAX;
	int32_t t96 = 225701709;

    t96 = (x385>(x386^(x387>x388)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x389 = -8654;
	static uint8_t x390 = 14U;
	static int64_t x391 = INT64_MIN;
	static volatile int32_t t97 = 16;

    t97 = (x389>(x390^(x391>x392)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x393 = -1;
	uint16_t x394 = 1U;
	static int8_t x395 = -1;
	volatile uint8_t x396 = 1U;
	volatile int32_t t98 = 110315662;

    t98 = (x393>(x394^(x395>x396)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x397 = INT16_MIN;
	volatile int64_t x398 = -2055190901LL;
	static uint32_t x399 = UINT32_MAX;
	int8_t x400 = INT8_MIN;
	volatile int32_t t99 = -676;

    t99 = (x397>(x398^(x399>x400)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint16_t x401 = 16U;
	static int16_t x402 = 11338;
	int32_t x403 = 55731787;
	volatile uint32_t x404 = UINT32_MAX;
	volatile int32_t t100 = -2;

    t100 = (x401>(x402^(x403>x404)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x405 = UINT8_MAX;
	uint16_t x407 = 1U;
	volatile int32_t t101 = -13;

    t101 = (x405>(x406^(x407>x408)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int64_t x410 = INT64_MIN;
	int8_t x412 = INT8_MIN;

    t102 = (x409>(x410^(x411>x412)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x415 = INT32_MAX;
	static int64_t x416 = -1LL;
	volatile int32_t t103 = -231233;

    t103 = (x413>(x414^(x415>x416)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile uint16_t x417 = 0U;
	uint32_t x418 = 33513106U;
	int32_t x420 = 50819360;

    t104 = (x417>(x418^(x419>x420)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x421 = 1;
	int8_t x422 = INT8_MIN;
	volatile int64_t x424 = INT64_MAX;
	volatile int32_t t105 = 3;

    t105 = (x421>(x422^(x423>x424)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint16_t x425 = UINT16_MAX;
	volatile int32_t x426 = INT32_MIN;
	int8_t x427 = -9;

    t106 = (x425>(x426^(x427>x428)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x429 = 1636U;
	int32_t x430 = INT32_MIN;
	int64_t x431 = INT64_MIN;
	static int64_t x432 = -29LL;
	int32_t t107 = 51;

    t107 = (x429>(x430^(x431>x432)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x433 = 3U;
	uint32_t x434 = 0U;
	uint64_t x435 = 485654LLU;
	int64_t x436 = -3163569675853847784LL;
	volatile int32_t t108 = 58;

    t108 = (x433>(x434^(x435>x436)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x437 = 23;
	int64_t x439 = INT64_MIN;
	uint64_t x440 = UINT64_MAX;
	volatile int32_t t109 = -358;

    t109 = (x437>(x438^(x439>x440)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x441 = INT32_MAX;
	int16_t x442 = -28;
	int16_t x443 = INT16_MIN;
	int32_t x444 = 34;
	volatile int32_t t110 = -119566;

    t110 = (x441>(x442^(x443>x444)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = -12;
	volatile uint8_t x447 = 16U;
	uint32_t x448 = 3U;
	int32_t t111 = -8;

    t111 = (x445>(x446^(x447>x448)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint32_t x449 = 16891U;
	uint32_t x451 = 1756153894U;
	static uint64_t x452 = 2051198LLU;
	volatile int32_t t112 = -105716;

    t112 = (x449>(x450^(x451>x452)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint32_t x453 = 659U;
	int16_t x454 = -9;
	volatile int32_t x455 = -130550021;
	volatile int32_t t113 = -15218952;

    t113 = (x453>(x454^(x455>x456)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x457 = -1;
	uint64_t x458 = 153835567084LLU;
	volatile int32_t x459 = INT32_MIN;
	int64_t x460 = INT64_MIN;
	static volatile int32_t t114 = 326115675;

    t114 = (x457>(x458^(x459>x460)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x462 = -39444;
	volatile int32_t x464 = INT32_MAX;

    t115 = (x461>(x462^(x463>x464)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x465 = INT16_MAX;
	uint64_t x468 = 2LLU;
	volatile int32_t t116 = -221626151;

    t116 = (x465>(x466^(x467>x468)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x469 = -1LL;
	int32_t x470 = INT32_MIN;
	volatile int8_t x471 = 0;
	uint64_t x472 = 12650LLU;

    t117 = (x469>(x470^(x471>x472)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x473 = 4795;
	int64_t x474 = INT64_MIN;
	volatile int16_t x475 = -3;
	int32_t t118 = 343070;

    t118 = (x473>(x474^(x475>x476)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = 45040746780358714LL;
	uint8_t x478 = UINT8_MAX;
	static int64_t x479 = INT64_MIN;
	volatile uint8_t x480 = 21U;

    t119 = (x477>(x478^(x479>x480)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint16_t x481 = 3U;
	int8_t x482 = 39;
	volatile int16_t x483 = INT16_MIN;
	uint8_t x484 = UINT8_MAX;

    t120 = (x481>(x482^(x483>x484)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x485 = -29;
	int64_t x486 = INT64_MAX;
	int32_t x487 = INT32_MAX;
	static int32_t t121 = -980980039;

    t121 = (x485>(x486^(x487>x488)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = 0;
	int16_t x490 = INT16_MIN;
	volatile uint16_t x491 = UINT16_MAX;
	static uint16_t x492 = UINT16_MAX;
	int32_t t122 = -56;

    t122 = (x489>(x490^(x491>x492)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = INT64_MAX;
	volatile uint8_t x494 = 78U;
	int32_t x495 = INT32_MIN;
	int16_t x496 = -5140;
	static int32_t t123 = -1;

    t123 = (x493>(x494^(x495>x496)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x497 = INT16_MIN;
	uint8_t x498 = 18U;
	volatile int64_t x499 = -1LL;
	volatile uint64_t x500 = UINT64_MAX;
	static int32_t t124 = -48252731;

    t124 = (x497>(x498^(x499>x500)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int16_t x501 = INT16_MIN;
	static volatile uint8_t x502 = UINT8_MAX;
	volatile int64_t x503 = INT64_MAX;
	int64_t x504 = -1LL;
	int32_t t125 = 2;

    t125 = (x501>(x502^(x503>x504)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x506 = INT64_MIN;
	static uint16_t x507 = UINT16_MAX;
	int64_t x508 = INT64_MIN;
	int32_t t126 = -1;

    t126 = (x505>(x506^(x507>x508)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x509 = -14;
	static int64_t x510 = -7269526295LL;
	int16_t x511 = INT16_MIN;
	uint8_t x512 = 5U;
	static int32_t t127 = 25452;

    t127 = (x509>(x510^(x511>x512)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x513 = INT8_MAX;
	volatile int8_t x514 = -1;
	volatile int64_t x515 = -1LL;
	static int32_t x516 = INT32_MIN;
	volatile int32_t t128 = 11225989;

    t128 = (x513>(x514^(x515>x516)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint8_t x518 = UINT8_MAX;
	int8_t x519 = INT8_MIN;
	volatile int32_t t129 = 136;

    t129 = (x517>(x518^(x519>x520)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint64_t x521 = UINT64_MAX;
	volatile uint32_t x522 = UINT32_MAX;
	static volatile int8_t x523 = INT8_MIN;
	int8_t x524 = 3;
	static volatile int32_t t130 = -7;

    t130 = (x521>(x522^(x523>x524)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = INT64_MIN;
	int32_t x526 = INT32_MIN;
	volatile int8_t x527 = INT8_MIN;
	int64_t x528 = -1LL;

    t131 = (x525>(x526^(x527>x528)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x530 = INT32_MIN;
	volatile int32_t x531 = INT32_MIN;
	volatile int32_t t132 = -829852788;

    t132 = (x529>(x530^(x531>x532)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x536 = 4924U;
	volatile int32_t t133 = -93173;

    t133 = (x533>(x534^(x535>x536)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int32_t x537 = INT32_MAX;
	volatile int16_t x539 = 5177;
	uint16_t x540 = 6666U;
	int32_t t134 = -4819568;

    t134 = (x537>(x538^(x539>x540)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint16_t x541 = 435U;
	static int32_t x542 = INT32_MIN;
	volatile uint64_t x543 = 38LLU;
	int32_t x544 = -1;

    t135 = (x541>(x542^(x543>x544)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x545 = UINT8_MAX;
	volatile int32_t x546 = INT32_MIN;
	static int8_t x547 = -1;
	static int32_t t136 = -952480;

    t136 = (x545>(x546^(x547>x548)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x549 = 53;
	static uint16_t x550 = 1329U;
	static int16_t x551 = 14;
	uint8_t x552 = UINT8_MAX;
	int32_t t137 = 16510285;

    t137 = (x549>(x550^(x551>x552)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x553 = 7348047U;
	int8_t x554 = -1;
	static int32_t x555 = INT32_MIN;
	volatile int16_t x556 = 0;
	static volatile int32_t t138 = -120752369;

    t138 = (x553>(x554^(x555>x556)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint64_t x558 = UINT64_MAX;
	int64_t x559 = INT64_MAX;
	uint64_t x560 = 9LLU;
	volatile int32_t t139 = 82762;

    t139 = (x557>(x558^(x559>x560)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x561 = INT16_MIN;
	uint16_t x562 = 2791U;
	static int16_t x563 = -1;

    t140 = (x561>(x562^(x563>x564)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint8_t x565 = 9U;
	int32_t x566 = INT32_MAX;
	int64_t x567 = -122664LL;
	volatile int32_t t141 = 6861267;

    t141 = (x565>(x566^(x567>x568)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x570 = 29727;
	int16_t x572 = -1;
	static volatile int32_t t142 = 588;

    t142 = (x569>(x570^(x571>x572)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x573 = INT64_MAX;
	int16_t x574 = INT16_MIN;
	static volatile int8_t x575 = INT8_MIN;

    t143 = (x573>(x574^(x575>x576)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = -1;
	uint8_t x578 = 34U;
	int16_t x580 = INT16_MIN;
	int32_t t144 = 4;

    t144 = (x577>(x578^(x579>x580)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int64_t x581 = INT64_MIN;
	volatile int16_t x582 = -1;
	int16_t x584 = INT16_MIN;

    t145 = (x581>(x582^(x583>x584)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x585 = INT64_MIN;
	int32_t x587 = -14834748;
	int32_t t146 = 14039503;

    t146 = (x585>(x586^(x587>x588)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = -1;
	int64_t x590 = INT64_MAX;
	int64_t x591 = INT64_MAX;
	int32_t x592 = INT32_MIN;
	volatile int32_t t147 = 11101;

    t147 = (x589>(x590^(x591>x592)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x593 = -26752761;
	uint64_t x594 = UINT64_MAX;
	uint16_t x595 = UINT16_MAX;
	int8_t x596 = INT8_MAX;
	int32_t t148 = 741315415;

    t148 = (x593>(x594^(x595>x596)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x598 = -14;
	int32_t x599 = INT32_MAX;
	volatile int32_t t149 = -94609738;

    t149 = (x597>(x598^(x599>x600)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint32_t x601 = UINT32_MAX;
	uint64_t x602 = 22433032LLU;
	int8_t x603 = INT8_MIN;
	uint64_t x604 = UINT64_MAX;
	volatile int32_t t150 = -25082806;

    t150 = (x601>(x602^(x603>x604)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x605 = -27;
	static int16_t x606 = INT16_MAX;
	static int32_t t151 = 8345;

    t151 = (x605>(x606^(x607>x608)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x609 = INT16_MIN;
	uint16_t x611 = UINT16_MAX;
	volatile int16_t x612 = -116;
	int32_t t152 = 11206;

    t152 = (x609>(x610^(x611>x612)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x613 = INT64_MAX;
	int64_t x614 = 4LL;
	int16_t x615 = INT16_MAX;
	int32_t x616 = INT32_MAX;
	volatile int32_t t153 = 448397;

    t153 = (x613>(x614^(x615>x616)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint32_t x618 = UINT32_MAX;
	static volatile uint64_t x619 = 43939904276LLU;
	static uint64_t x620 = 4026LLU;
	int32_t t154 = -92;

    t154 = (x617>(x618^(x619>x620)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x621 = 128524U;
	uint64_t x622 = 2906613LLU;
	static uint8_t x623 = 12U;
	int8_t x624 = 10;
	volatile int32_t t155 = -17172;

    t155 = (x621>(x622^(x623>x624)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x625 = INT8_MIN;
	int64_t x626 = INT64_MIN;
	volatile int32_t t156 = 2922;

    t156 = (x625>(x626^(x627>x628)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x631 = 0U;
	volatile int64_t x632 = INT64_MAX;
	int32_t t157 = -9090;

    t157 = (x629>(x630^(x631>x632)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x634 = 1U;
	uint32_t x635 = 1819U;
	uint16_t x636 = 837U;
	volatile int32_t t158 = -119036479;

    t158 = (x633>(x634^(x635>x636)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x637 = -1;
	static int32_t x638 = -1;
	int8_t x639 = 0;
	int64_t x640 = INT64_MIN;

    t159 = (x637>(x638^(x639>x640)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x641 = 504;
	int16_t x642 = 5;
	int64_t x643 = -4062768LL;
	int8_t x644 = INT8_MIN;
	int32_t t160 = 762215;

    t160 = (x641>(x642^(x643>x644)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x645 = INT8_MIN;
	uint8_t x646 = 2U;
	volatile int32_t t161 = 43847402;

    t161 = (x645>(x646^(x647>x648)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x649 = -1;
	int8_t x651 = -1;
	volatile uint32_t x652 = 873405345U;

    t162 = (x649>(x650^(x651>x652)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x653 = -1;
	int16_t x654 = INT16_MIN;
	int16_t x655 = INT16_MIN;
	int8_t x656 = INT8_MAX;
	static int32_t t163 = 116725514;

    t163 = (x653>(x654^(x655>x656)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = INT64_MIN;
	uint16_t x658 = 5068U;
	uint16_t x659 = UINT16_MAX;
	static int32_t x660 = -1;
	int32_t t164 = -8;

    t164 = (x657>(x658^(x659>x660)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x661 = UINT32_MAX;
	uint8_t x662 = 29U;
	volatile int16_t x663 = INT16_MIN;
	int64_t x664 = INT64_MIN;
	int32_t t165 = -9426158;

    t165 = (x661>(x662^(x663>x664)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint64_t x666 = 1006012752823871606LLU;
	static int64_t x667 = -107655723789944LL;
	uint16_t x668 = 739U;

    t166 = (x665>(x666^(x667>x668)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x670 = UINT32_MAX;
	volatile int32_t x671 = -9392925;
	static uint16_t x672 = UINT16_MAX;

    t167 = (x669>(x670^(x671>x672)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint64_t x676 = UINT64_MAX;
	static volatile int32_t t168 = -266784055;

    t168 = (x673>(x674^(x675>x676)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x678 = 12;
	uint16_t x679 = UINT16_MAX;
	static int16_t x680 = INT16_MIN;
	volatile int32_t t169 = 12;

    t169 = (x677>(x678^(x679>x680)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x681 = -102;
	uint32_t x683 = UINT32_MAX;
	int8_t x684 = -11;
	int32_t t170 = 1;

    t170 = (x681>(x682^(x683>x684)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x685 = INT16_MAX;
	static int32_t x687 = INT32_MIN;
	volatile int32_t x688 = 347002;
	static int32_t t171 = -13;

    t171 = (x685>(x686^(x687>x688)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int32_t x689 = -1;
	volatile int8_t x690 = INT8_MIN;
	volatile int32_t x691 = INT32_MAX;
	int32_t x692 = -78;

    t172 = (x689>(x690^(x691>x692)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = -1;
	uint8_t x695 = UINT8_MAX;
	uint32_t x696 = 1085316680U;
	int32_t t173 = 533446315;

    t173 = (x693>(x694^(x695>x696)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint32_t x697 = UINT32_MAX;
	int64_t x698 = 60044LL;
	static int8_t x699 = INT8_MIN;
	static volatile int8_t x700 = -1;
	int32_t t174 = 986117407;

    t174 = (x697>(x698^(x699>x700)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x701 = UINT8_MAX;
	int64_t x702 = INT64_MAX;
	int16_t x703 = INT16_MAX;
	uint8_t x704 = 0U;
	static int32_t t175 = 12774690;

    t175 = (x701>(x702^(x703>x704)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x705 = -1;
	int8_t x707 = -28;
	static int32_t t176 = -400808;

    t176 = (x705>(x706^(x707>x708)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = INT16_MAX;
	uint32_t x711 = UINT32_MAX;
	int8_t x712 = -1;
	static volatile int32_t t177 = 0;

    t177 = (x709>(x710^(x711>x712)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x713 = -762;
	volatile int64_t x716 = INT64_MIN;
	int32_t t178 = 12;

    t178 = (x713>(x714^(x715>x716)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint32_t x717 = 31483282U;
	int32_t x719 = 40257;
	volatile int32_t t179 = 6665;

    t179 = (x717>(x718^(x719>x720)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x722 = INT64_MIN;
	int32_t x723 = INT32_MIN;
	uint8_t x724 = UINT8_MAX;

    t180 = (x721>(x722^(x723>x724)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint16_t x726 = 17333U;
	int32_t x727 = -1;
	volatile uint64_t x728 = UINT64_MAX;
	volatile int32_t t181 = 752836142;

    t181 = (x725>(x726^(x727>x728)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x732 = -6983;
	static int32_t t182 = -1;

    t182 = (x729>(x730^(x731>x732)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x733 = 60;
	int8_t x734 = -1;
	uint32_t x735 = 138504U;
	static uint32_t x736 = 3732U;
	volatile int32_t t183 = 10913938;

    t183 = (x733>(x734^(x735>x736)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x737 = -1;
	static uint64_t x738 = 65678054413394941LLU;
	uint8_t x739 = UINT8_MAX;
	volatile int8_t x740 = INT8_MIN;
	static int32_t t184 = 6408;

    t184 = (x737>(x738^(x739>x740)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x742 = INT64_MAX;
	volatile int8_t x743 = -11;
	volatile int32_t t185 = -167989034;

    t185 = (x741>(x742^(x743>x744)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x745 = INT16_MIN;
	volatile uint8_t x747 = 5U;
	int64_t x748 = 13526767397252864LL;

    t186 = (x745>(x746^(x747>x748)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = INT32_MIN;
	uint32_t x750 = UINT32_MAX;
	int8_t x751 = INT8_MIN;
	volatile int8_t x752 = INT8_MIN;
	int32_t t187 = 4537;

    t187 = (x749>(x750^(x751>x752)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x753 = INT64_MIN;
	uint64_t x754 = UINT64_MAX;
	uint16_t x755 = UINT16_MAX;
	int16_t x756 = 46;
	volatile int32_t t188 = 712;

    t188 = (x753>(x754^(x755>x756)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = INT8_MAX;
	uint16_t x758 = 1309U;
	int32_t x759 = INT32_MIN;
	uint16_t x760 = 3U;
	static int32_t t189 = -76610;

    t189 = (x757>(x758^(x759>x760)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x761 = INT16_MIN;
	static volatile uint16_t x762 = UINT16_MAX;
	uint8_t x763 = 19U;
	static int16_t x764 = INT16_MIN;
	static volatile int32_t t190 = -358;

    t190 = (x761>(x762^(x763>x764)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x765 = -1LL;
	static uint32_t x766 = 659221U;
	volatile int8_t x767 = INT8_MIN;
	int8_t x768 = INT8_MIN;
	int32_t t191 = -440;

    t191 = (x765>(x766^(x767>x768)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint32_t x770 = 495724U;
	int64_t x771 = INT64_MIN;
	uint16_t x772 = 225U;
	int32_t t192 = 131361050;

    t192 = (x769>(x770^(x771>x772)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x773 = INT16_MIN;
	int16_t x774 = INT16_MIN;
	volatile int16_t x776 = INT16_MAX;
	int32_t t193 = -1;

    t193 = (x773>(x774^(x775>x776)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x778 = INT32_MAX;
	int64_t x779 = INT64_MAX;
	int64_t x780 = INT64_MIN;
	static volatile int32_t t194 = 791;

    t194 = (x777>(x778^(x779>x780)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint32_t x782 = UINT32_MAX;
	uint64_t x783 = UINT64_MAX;
	int16_t x784 = -1;

    t195 = (x781>(x782^(x783>x784)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint64_t x785 = 71LLU;
	int64_t x786 = -627637960940447904LL;
	int64_t x787 = -1LL;
	volatile int32_t t196 = 96189;

    t196 = (x785>(x786^(x787>x788)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x789 = INT16_MIN;
	uint16_t x790 = 48U;
	int32_t t197 = 610625;

    t197 = (x789>(x790^(x791>x792)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int8_t x793 = INT8_MIN;
	int8_t x794 = -1;
	int64_t x795 = INT64_MIN;
	int64_t x796 = -1LL;
	int32_t t198 = -5;

    t198 = (x793>(x794^(x795>x796)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x797 = UINT16_MAX;
	int32_t x798 = 5491;
	uint16_t x799 = UINT16_MAX;
	int8_t x800 = -1;

    t199 = (x797>(x798^(x799>x800)));

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

