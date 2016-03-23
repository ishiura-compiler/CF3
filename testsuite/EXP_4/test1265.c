
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

static int8_t x2 = INT8_MAX;
int64_t x11 = INT64_MAX;
volatile int64_t x12 = INT64_MIN;
volatile int32_t x13 = INT32_MIN;
volatile int32_t t3 = 233681822;
static int64_t x17 = INT64_MIN;
int32_t x24 = 6160;
static int16_t x32 = INT16_MIN;
static int64_t x33 = INT64_MIN;
int16_t x37 = INT16_MAX;
int8_t x40 = INT8_MAX;
static volatile int32_t t9 = 15642709;
volatile int16_t x42 = INT16_MIN;
int16_t x61 = INT16_MIN;
int16_t x62 = 5;
int16_t x64 = -1;
int8_t x66 = -1;
static volatile int64_t x68 = 290539828931331LL;
int64_t x76 = -10512265678057LL;
volatile int32_t t19 = 32581;
int16_t x82 = INT16_MAX;
uint16_t x89 = 2U;
static int16_t x91 = 1566;
uint32_t x100 = UINT32_MAX;
uint8_t x103 = UINT8_MAX;
uint8_t x107 = UINT8_MAX;
int32_t x114 = 16;
uint16_t x119 = 6U;
static volatile uint32_t x124 = 267675U;
int16_t x126 = -1;
volatile int32_t x127 = INT32_MIN;
uint32_t x134 = 8289U;
volatile int32_t t33 = -3;
volatile int32_t x156 = INT32_MIN;
int16_t x161 = INT16_MIN;
int16_t x165 = INT16_MAX;
int16_t x176 = INT16_MIN;
volatile uint16_t x185 = UINT16_MAX;
volatile int16_t x186 = -821;
int8_t x197 = -1;
int32_t x199 = INT32_MIN;
volatile int32_t t49 = 35879477;
int32_t x206 = -1;
uint16_t x207 = 21315U;
volatile int64_t t51 = 5307046LL;
int8_t x209 = INT8_MIN;
int64_t x211 = INT64_MAX;
int8_t x213 = -1;
int8_t x215 = INT8_MAX;
static int32_t x216 = INT32_MAX;
int32_t t54 = -4;
volatile int64_t x221 = INT64_MAX;
volatile uint16_t x222 = 3U;
int16_t x223 = INT16_MIN;
int64_t x227 = INT64_MIN;
uint64_t x233 = UINT64_MAX;
uint64_t t58 = 254LLU;
int32_t x237 = 1899;
volatile int64_t x242 = -59LL;
int32_t x245 = INT32_MIN;
uint8_t x253 = UINT8_MAX;
volatile int8_t x256 = INT8_MIN;
int8_t x260 = 13;
int8_t x263 = 0;
volatile int32_t x268 = 11;
volatile int32_t t66 = 12;
volatile uint32_t x270 = 1616U;
volatile int32_t t67 = 212497;
volatile int32_t t68 = -6960453;
uint32_t x288 = 4056322U;
static volatile int8_t x290 = 0;
int32_t x293 = -7;
static uint64_t x295 = 251854746LLU;
uint64_t x299 = 30437LLU;
uint8_t x300 = 6U;
volatile int32_t t72 = -1032554032;
uint16_t x302 = 154U;
uint16_t x304 = 853U;
uint32_t x309 = UINT32_MAX;
int8_t x317 = -19;
static int16_t x323 = INT16_MAX;
int64_t x331 = -1LL;
int8_t x333 = 43;
volatile int64_t x335 = INT64_MIN;
int16_t x336 = -50;
int32_t x346 = 640888;
static int32_t t84 = 4742;
volatile int32_t x355 = INT32_MIN;
int64_t x361 = INT64_MIN;
int16_t x365 = INT16_MIN;
uint16_t x368 = 5603U;
int8_t x371 = 0;
uint16_t x373 = 3994U;
uint16_t x376 = 24579U;
int32_t t91 = 5;
uint16_t x381 = 118U;
volatile int32_t t92 = -481502;
int64_t x390 = -1LL;
int32_t x395 = INT32_MIN;
static volatile int8_t x400 = INT8_MIN;
volatile int16_t x404 = 1;
volatile int64_t x414 = INT64_MIN;
uint32_t x418 = 109280U;
int16_t x425 = -13;
int32_t x426 = INT32_MIN;
int8_t x428 = INT8_MIN;
int16_t x429 = INT16_MIN;
volatile int16_t x439 = -1;
int64_t x441 = -1LL;
int64_t x442 = INT64_MIN;
int32_t x446 = INT32_MIN;
volatile int32_t x449 = INT32_MIN;
int8_t x451 = -1;
volatile int64_t x453 = INT64_MIN;
int8_t x461 = -13;
int64_t x474 = INT64_MAX;
uint32_t x482 = 0U;
static volatile int8_t x485 = INT8_MIN;
int8_t x490 = INT8_MIN;
int16_t x491 = INT16_MIN;
volatile int32_t t119 = -79055520;
uint16_t x496 = 1429U;
volatile int8_t x497 = INT8_MAX;
int16_t x509 = INT16_MIN;
volatile int16_t x522 = 7699;
volatile int32_t t126 = 2;
int32_t t128 = 1465;
int64_t x542 = INT64_MIN;
uint16_t x543 = UINT16_MAX;
volatile int32_t t130 = 976;
int16_t x547 = -42;
int64_t x551 = -13LL;
int8_t x554 = -1;
uint32_t x556 = UINT32_MAX;
int8_t x558 = -1;
volatile uint32_t x563 = UINT32_MAX;
int64_t x564 = INT64_MIN;
int64_t x566 = -2LL;
uint64_t t136 = 898738LLU;
static uint32_t x571 = 1044522U;
int8_t x579 = INT8_MIN;
int16_t x580 = INT16_MIN;
int16_t x585 = -2870;
int8_t x589 = -1;
int16_t x594 = INT16_MIN;
volatile int32_t t144 = -28748909;
static int8_t x602 = INT8_MIN;
int16_t x605 = 4437;
uint64_t x610 = 99618971537LLU;
int64_t x625 = -1LL;
uint32_t x631 = 10U;
uint64_t x636 = 309049669677631488LLU;
volatile int32_t t153 = -278636502;
int16_t x639 = 351;
static int64_t x644 = -107855935780LL;
int8_t x645 = 0;
uint16_t x646 = UINT16_MAX;
static int64_t x653 = -4284368LL;
int32_t x654 = INT32_MAX;
int8_t x656 = INT8_MIN;
int16_t x661 = INT16_MIN;
uint16_t x667 = UINT16_MAX;
int8_t x677 = INT8_MIN;
static int32_t t164 = -49;
volatile int64_t x681 = 242399274679760LL;
static int16_t x684 = INT16_MAX;
volatile uint64_t t166 = 35800591352269338LLU;
int32_t x691 = INT32_MIN;
int32_t x693 = -8;
int32_t x695 = INT32_MIN;
int32_t x696 = INT32_MAX;
volatile int32_t t169 = -1;
uint32_t x703 = 190U;
volatile int16_t x704 = INT16_MIN;
uint16_t x706 = UINT16_MAX;
int32_t t171 = -2200;
uint16_t x711 = UINT16_MAX;
int32_t x717 = -699634;
static uint16_t x719 = 10U;
static volatile int16_t x724 = INT16_MAX;
int32_t x728 = 1146;
volatile int64_t t176 = 22846138894992957LL;
int8_t x731 = 1;
int8_t x734 = -1;
int8_t x736 = INT8_MIN;
volatile int32_t t178 = 1227;
static int32_t x744 = 35105088;
static int32_t t180 = -10134;
uint64_t x745 = UINT64_MAX;
uint16_t x749 = UINT16_MAX;
uint64_t x757 = 2066343888LLU;
int32_t x758 = INT32_MAX;
static int16_t x777 = INT16_MIN;
static int64_t x779 = INT64_MIN;
int32_t x781 = -1;
volatile int32_t t190 = -738;
volatile int16_t x789 = -1;
int16_t x790 = -1;
int32_t t191 = -171;
int8_t x797 = 0;
uint8_t x799 = UINT8_MAX;
uint8_t x806 = 0U;
int8_t x808 = INT8_MAX;
volatile int64_t t197 = -3039937678LL;
uint8_t x820 = 106U;
volatile uint8_t x823 = UINT8_MAX;


void f0(void) {
    	volatile uint32_t x1 = 1163170U;
	static int64_t x3 = INT64_MIN;
	uint64_t x4 = UINT64_MAX;
	uint32_t t0 = 29658353U;

    t0 = (x1%(x2!=(x3!=x4)));

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint16_t x5 = 405U;
	volatile int16_t x6 = INT16_MIN;
	uint8_t x7 = UINT8_MAX;
	volatile uint16_t x8 = 1036U;
	volatile int32_t t1 = -23;

    t1 = (x5%(x6!=(x7!=x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = UINT8_MAX;
	int32_t x10 = -1;
	static int32_t t2 = 5722264;

    t2 = (x9%(x10!=(x11!=x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint16_t x14 = 1914U;
	uint32_t x15 = 15704994U;
	volatile int8_t x16 = -1;

    t3 = (x13%(x14!=(x15!=x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x18 = INT32_MIN;
	int16_t x19 = INT16_MAX;
	static uint64_t x20 = UINT64_MAX;
	static volatile int64_t t4 = 32LL;

    t4 = (x17%(x18!=(x19!=x20)));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = UINT16_MAX;
	volatile int32_t x22 = INT32_MAX;
	static int32_t x23 = INT32_MIN;
	int32_t t5 = 796789266;

    t5 = (x21%(x22!=(x23!=x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = -2;
	volatile uint32_t x26 = 1808124313U;
	int32_t x27 = INT32_MAX;
	static uint8_t x28 = 3U;
	int32_t t6 = 1;

    t6 = (x25%(x26!=(x27!=x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = 0;
	static uint32_t x30 = 14967572U;
	int64_t x31 = INT64_MAX;
	volatile int32_t t7 = -14798;

    t7 = (x29%(x30!=(x31!=x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint16_t x34 = UINT16_MAX;
	int32_t x35 = 1059565190;
	int64_t x36 = INT64_MAX;
	int64_t t8 = -88LL;

    t8 = (x33%(x34!=(x35!=x36)));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x38 = UINT32_MAX;
	int16_t x39 = -1;

    t9 = (x37%(x38!=(x39!=x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint8_t x41 = 30U;
	static uint32_t x43 = 1297082U;
	int64_t x44 = INT64_MIN;
	static int32_t t10 = -143655359;

    t10 = (x41%(x42!=(x43!=x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int8_t x45 = 1;
	static int16_t x46 = -1;
	uint32_t x47 = UINT32_MAX;
	uint32_t x48 = 1521531214U;
	volatile int32_t t11 = 110;

    t11 = (x45%(x46!=(x47!=x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x49 = -8522;
	int8_t x50 = INT8_MIN;
	int8_t x51 = INT8_MIN;
	int8_t x52 = -1;
	volatile int32_t t12 = 0;

    t12 = (x49%(x50!=(x51!=x52)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = -1LL;
	static uint16_t x54 = 238U;
	volatile int64_t x55 = 15064032449678LL;
	uint8_t x56 = 7U;
	int64_t t13 = 168045296539LL;

    t13 = (x53%(x54!=(x55!=x56)));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int8_t x57 = INT8_MAX;
	static volatile int16_t x58 = INT16_MAX;
	int8_t x59 = INT8_MAX;
	uint8_t x60 = 21U;
	int32_t t14 = -1268890;

    t14 = (x57%(x58!=(x59!=x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x63 = INT32_MAX;
	int32_t t15 = -2485;

    t15 = (x61%(x62!=(x63!=x64)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x65 = 0;
	volatile int64_t x67 = INT64_MIN;
	int32_t t16 = -250;

    t16 = (x65%(x66!=(x67!=x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = INT16_MIN;
	static int64_t x70 = INT64_MIN;
	int16_t x71 = -1;
	static uint16_t x72 = 3516U;
	volatile int32_t t17 = -201;

    t17 = (x69%(x70!=(x71!=x72)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = -1;
	int32_t x74 = INT32_MAX;
	int8_t x75 = INT8_MAX;
	int32_t t18 = -21768;

    t18 = (x73%(x74!=(x75!=x76)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = INT32_MAX;
	int64_t x78 = -1LL;
	int8_t x79 = 0;
	int16_t x80 = INT16_MAX;

    t19 = (x77%(x78!=(x79!=x80)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x81 = 16222911U;
	uint64_t x83 = UINT64_MAX;
	int8_t x84 = -1;
	uint32_t t20 = 77037372U;

    t20 = (x81%(x82!=(x83!=x84)));

    if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x85 = INT64_MAX;
	int64_t x86 = 6914LL;
	uint16_t x87 = 60U;
	int32_t x88 = 443;
	int64_t t21 = 507LL;

    t21 = (x85%(x86!=(x87!=x88)));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x90 = UINT16_MAX;
	int32_t x92 = 88368085;
	volatile int32_t t22 = -29;

    t22 = (x89%(x90!=(x91!=x92)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = INT64_MIN;
	volatile int16_t x94 = 2;
	int32_t x95 = -1;
	uint64_t x96 = UINT64_MAX;
	volatile int64_t t23 = 13LL;

    t23 = (x93%(x94!=(x95!=x96)));

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = INT64_MIN;
	int32_t x98 = 3048379;
	static int8_t x99 = INT8_MIN;
	int64_t t24 = -7796LL;

    t24 = (x97%(x98!=(x99!=x100)));

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint8_t x101 = UINT8_MAX;
	static int32_t x102 = -1;
	volatile int16_t x104 = INT16_MAX;
	int32_t t25 = 1314;

    t25 = (x101%(x102!=(x103!=x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x105 = 1064540440;
	int16_t x106 = INT16_MIN;
	static int64_t x108 = -1LL;
	static volatile int32_t t26 = -331;

    t26 = (x105%(x106!=(x107!=x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = INT64_MIN;
	static int64_t x110 = -1LL;
	int32_t x111 = INT32_MIN;
	static int32_t x112 = 17604117;
	static int64_t t27 = 87810LL;

    t27 = (x109%(x110!=(x111!=x112)));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x113 = 2876672LLU;
	uint8_t x115 = 31U;
	int32_t x116 = 95264;
	volatile uint64_t t28 = 16552713LLU;

    t28 = (x113%(x114!=(x115!=x116)));

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x117 = -1LL;
	uint8_t x118 = UINT8_MAX;
	int8_t x120 = INT8_MIN;
	volatile int64_t t29 = 85687760476LL;

    t29 = (x117%(x118!=(x119!=x120)));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x121 = INT8_MIN;
	int8_t x122 = 0;
	static uint16_t x123 = UINT16_MAX;
	int32_t t30 = -72238;

    t30 = (x121%(x122!=(x123!=x124)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x125 = -10573670;
	uint64_t x128 = UINT64_MAX;
	volatile int32_t t31 = 127;

    t31 = (x125%(x126!=(x127!=x128)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint32_t x129 = 1492U;
	uint16_t x130 = UINT16_MAX;
	static int8_t x131 = INT8_MIN;
	int64_t x132 = INT64_MIN;
	volatile uint32_t t32 = 87U;

    t32 = (x129%(x130!=(x131!=x132)));

    if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x133 = 5446U;
	uint16_t x135 = 11U;
	static int16_t x136 = INT16_MIN;

    t33 = (x133%(x134!=(x135!=x136)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x137 = INT32_MAX;
	volatile int32_t x138 = 16;
	int64_t x139 = INT64_MIN;
	int64_t x140 = INT64_MAX;
	volatile int32_t t34 = 1003;

    t34 = (x137%(x138!=(x139!=x140)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x141 = INT16_MAX;
	int32_t x142 = INT32_MAX;
	int16_t x143 = INT16_MAX;
	uint32_t x144 = UINT32_MAX;
	int32_t t35 = -34;

    t35 = (x141%(x142!=(x143!=x144)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = INT8_MAX;
	uint16_t x146 = 3811U;
	static uint8_t x147 = 3U;
	int16_t x148 = -1;
	static int32_t t36 = 8431;

    t36 = (x145%(x146!=(x147!=x148)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x149 = UINT16_MAX;
	int64_t x150 = -1LL;
	static int16_t x151 = INT16_MIN;
	int64_t x152 = INT64_MIN;
	static int32_t t37 = -65240;

    t37 = (x149%(x150!=(x151!=x152)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint8_t x153 = UINT8_MAX;
	uint64_t x154 = 107LLU;
	int64_t x155 = -2LL;
	volatile int32_t t38 = 4466223;

    t38 = (x153%(x154!=(x155!=x156)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x157 = 204142;
	volatile int16_t x158 = 424;
	static uint16_t x159 = UINT16_MAX;
	volatile int64_t x160 = -16423346076531450LL;
	volatile int32_t t39 = 59;

    t39 = (x157%(x158!=(x159!=x160)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x162 = 208093LLU;
	uint32_t x163 = 19244298U;
	static volatile uint64_t x164 = UINT64_MAX;
	volatile int32_t t40 = 0;

    t40 = (x161%(x162!=(x163!=x164)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x166 = INT8_MIN;
	int32_t x167 = INT32_MIN;
	uint8_t x168 = 2U;
	int32_t t41 = -37356;

    t41 = (x165%(x166!=(x167!=x168)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = INT16_MIN;
	int8_t x170 = -2;
	static int64_t x171 = -73LL;
	uint32_t x172 = 152U;
	static volatile int32_t t42 = 6962422;

    t42 = (x169%(x170!=(x171!=x172)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint8_t x173 = 1U;
	int16_t x174 = -11;
	int8_t x175 = -11;
	int32_t t43 = -3;

    t43 = (x173%(x174!=(x175!=x176)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x177 = -1;
	uint8_t x178 = 70U;
	int16_t x179 = INT16_MIN;
	uint64_t x180 = UINT64_MAX;
	volatile int32_t t44 = -2;

    t44 = (x177%(x178!=(x179!=x180)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = 15078733;
	volatile uint8_t x182 = 31U;
	volatile uint64_t x183 = UINT64_MAX;
	uint16_t x184 = 22U;
	volatile int32_t t45 = 15190903;

    t45 = (x181%(x182!=(x183!=x184)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x187 = INT64_MIN;
	uint64_t x188 = 1691098139LLU;
	volatile int32_t t46 = -375470175;

    t46 = (x185%(x186!=(x187!=x188)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x189 = -1;
	uint64_t x190 = 299LLU;
	uint32_t x191 = 36072U;
	int8_t x192 = INT8_MIN;
	static volatile int32_t t47 = -102834625;

    t47 = (x189%(x190!=(x191!=x192)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint16_t x193 = 115U;
	int64_t x194 = INT64_MIN;
	int16_t x195 = -52;
	int8_t x196 = 28;
	static int32_t t48 = -1588;

    t48 = (x193%(x194!=(x195!=x196)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x198 = UINT32_MAX;
	int64_t x200 = 68837LL;

    t49 = (x197%(x198!=(x199!=x200)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = INT8_MIN;
	volatile int64_t x202 = INT64_MAX;
	int32_t x203 = INT32_MAX;
	uint8_t x204 = 69U;
	volatile int32_t t50 = 32411;

    t50 = (x201%(x202!=(x203!=x204)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = INT64_MIN;
	int16_t x208 = INT16_MIN;

    t51 = (x205%(x206!=(x207!=x208)));

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x210 = -1LL;
	volatile uint64_t x212 = 11609944426LLU;
	volatile int32_t t52 = -108;

    t52 = (x209%(x210!=(x211!=x212)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x214 = INT64_MIN;
	static volatile int32_t t53 = -20;

    t53 = (x213%(x214!=(x215!=x216)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x217 = UINT8_MAX;
	static uint32_t x218 = UINT32_MAX;
	int32_t x219 = -1;
	int8_t x220 = INT8_MIN;

    t54 = (x217%(x218!=(x219!=x220)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x224 = INT16_MIN;
	static int64_t t55 = -98635028398250LL;

    t55 = (x221%(x222!=(x223!=x224)));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = -1;
	int64_t x226 = -1LL;
	int32_t x228 = -5392704;
	int32_t t56 = 15305084;

    t56 = (x225%(x226!=(x227!=x228)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x229 = -19;
	int8_t x230 = -52;
	volatile int16_t x231 = -1;
	int32_t x232 = -2140;
	volatile int32_t t57 = 129580;

    t57 = (x229%(x230!=(x231!=x232)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int64_t x234 = 517546LL;
	int64_t x235 = INT64_MIN;
	int16_t x236 = INT16_MIN;

    t58 = (x233%(x234!=(x235!=x236)));

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x238 = INT16_MAX;
	uint32_t x239 = 13335U;
	int64_t x240 = INT64_MIN;
	int32_t t59 = 0;

    t59 = (x237%(x238!=(x239!=x240)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint16_t x241 = 16879U;
	int16_t x243 = INT16_MIN;
	uint16_t x244 = 14569U;
	volatile int32_t t60 = 1;

    t60 = (x241%(x242!=(x243!=x244)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint32_t x246 = UINT32_MAX;
	volatile int32_t x247 = INT32_MIN;
	static int8_t x248 = -14;
	int32_t t61 = 8907;

    t61 = (x245%(x246!=(x247!=x248)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = -63;
	uint8_t x250 = UINT8_MAX;
	int16_t x251 = -1;
	int64_t x252 = -1LL;
	int32_t t62 = -1;

    t62 = (x249%(x250!=(x251!=x252)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint32_t x254 = UINT32_MAX;
	int32_t x255 = 9024247;
	volatile int32_t t63 = 36291;

    t63 = (x253%(x254!=(x255!=x256)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint8_t x257 = 1U;
	int16_t x258 = INT16_MIN;
	int8_t x259 = -1;
	int32_t t64 = -180532;

    t64 = (x257%(x258!=(x259!=x260)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = -1;
	uint64_t x262 = 32000LLU;
	volatile int16_t x264 = -249;
	static volatile int32_t t65 = 219;

    t65 = (x261%(x262!=(x263!=x264)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = INT8_MIN;
	int32_t x266 = -65390255;
	volatile uint16_t x267 = 165U;

    t66 = (x265%(x266!=(x267!=x268)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x269 = -198588906;
	int64_t x271 = 2827157148009LL;
	static int8_t x272 = -7;

    t67 = (x269%(x270!=(x271!=x272)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x273 = 3U;
	int16_t x274 = INT16_MIN;
	int64_t x275 = -116302050201806LL;
	int32_t x276 = INT32_MAX;

    t68 = (x273%(x274!=(x275!=x276)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x285 = INT16_MIN;
	volatile int16_t x286 = 8191;
	uint8_t x287 = UINT8_MAX;
	int32_t t69 = -7803527;

    t69 = (x285%(x286!=(x287!=x288)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x289 = UINT8_MAX;
	static int64_t x291 = -1LL;
	int32_t x292 = INT32_MAX;
	volatile int32_t t70 = 9;

    t70 = (x289%(x290!=(x291!=x292)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x294 = UINT8_MAX;
	static volatile int64_t x296 = -1LL;
	volatile int32_t t71 = -1524446;

    t71 = (x293%(x294!=(x295!=x296)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x297 = -1;
	static uint64_t x298 = 1115522109906266523LLU;

    t72 = (x297%(x298!=(x299!=x300)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile uint8_t x301 = 96U;
	volatile uint8_t x303 = 0U;
	volatile int32_t t73 = -705;

    t73 = (x301%(x302!=(x303!=x304)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x305 = 136888U;
	int16_t x306 = INT16_MAX;
	static uint32_t x307 = UINT32_MAX;
	int16_t x308 = 13;
	volatile uint32_t t74 = 2585731U;

    t74 = (x305%(x306!=(x307!=x308)));

    if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x310 = 25;
	int16_t x311 = INT16_MIN;
	volatile int32_t x312 = INT32_MIN;
	uint32_t t75 = 1870615U;

    t75 = (x309%(x310!=(x311!=x312)));

    if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x313 = 51U;
	int32_t x314 = INT32_MIN;
	uint64_t x315 = UINT64_MAX;
	int64_t x316 = -1LL;
	int32_t t76 = 77;

    t76 = (x313%(x314!=(x315!=x316)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x318 = INT64_MAX;
	int64_t x319 = INT64_MIN;
	volatile uint16_t x320 = 3U;
	static int32_t t77 = -102;

    t77 = (x317%(x318!=(x319!=x320)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x321 = 66627931U;
	int64_t x322 = INT64_MIN;
	volatile uint32_t x324 = UINT32_MAX;
	uint32_t t78 = 0U;

    t78 = (x321%(x322!=(x323!=x324)));

    if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x325 = INT32_MAX;
	uint32_t x326 = 133711U;
	int64_t x327 = INT64_MIN;
	static int16_t x328 = INT16_MIN;
	static volatile int32_t t79 = 0;

    t79 = (x325%(x326!=(x327!=x328)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint32_t x329 = 59U;
	static int64_t x330 = INT64_MIN;
	static int16_t x332 = INT16_MIN;
	static uint32_t t80 = 2795205U;

    t80 = (x329%(x330!=(x331!=x332)));

    if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x334 = INT32_MAX;
	int32_t t81 = -561492;

    t81 = (x333%(x334!=(x335!=x336)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x337 = UINT8_MAX;
	int16_t x338 = INT16_MAX;
	volatile uint16_t x339 = 8128U;
	uint32_t x340 = UINT32_MAX;
	volatile int32_t t82 = -27;

    t82 = (x337%(x338!=(x339!=x340)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x341 = UINT8_MAX;
	int16_t x342 = INT16_MIN;
	uint16_t x343 = 3231U;
	int32_t x344 = INT32_MIN;
	int32_t t83 = -81;

    t83 = (x341%(x342!=(x343!=x344)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x345 = 5722U;
	static volatile uint8_t x347 = 94U;
	volatile int16_t x348 = -1;

    t84 = (x345%(x346!=(x347!=x348)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x349 = INT64_MAX;
	int32_t x350 = 6;
	int32_t x351 = 360;
	volatile int64_t x352 = INT64_MAX;
	int64_t t85 = -12972615716403224LL;

    t85 = (x349%(x350!=(x351!=x352)));

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x353 = 10177U;
	int16_t x354 = INT16_MIN;
	int16_t x356 = INT16_MAX;
	uint32_t t86 = 21816198U;

    t86 = (x353%(x354!=(x355!=x356)));

    if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x362 = -1;
	static uint16_t x363 = 1164U;
	uint8_t x364 = 14U;
	volatile int64_t t87 = 729704704580LL;

    t87 = (x361%(x362!=(x363!=x364)));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x366 = INT32_MIN;
	static int64_t x367 = 5LL;
	volatile int32_t t88 = -13184;

    t88 = (x365%(x366!=(x367!=x368)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x369 = -1LL;
	static uint16_t x370 = 33U;
	volatile uint32_t x372 = 1U;
	static volatile int64_t t89 = 31153LL;

    t89 = (x369%(x370!=(x371!=x372)));

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x374 = 49U;
	static volatile uint16_t x375 = UINT16_MAX;
	volatile int32_t t90 = -11221174;

    t90 = (x373%(x374!=(x375!=x376)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x377 = INT8_MIN;
	volatile int16_t x378 = -1;
	int64_t x379 = -332045040204060LL;
	volatile int8_t x380 = INT8_MIN;

    t91 = (x377%(x378!=(x379!=x380)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x382 = 669735169U;
	uint32_t x383 = UINT32_MAX;
	static int64_t x384 = -1LL;

    t92 = (x381%(x382!=(x383!=x384)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint64_t x385 = 330744706083590058LLU;
	int32_t x386 = 0;
	int16_t x387 = -13;
	uint64_t x388 = 11176813LLU;
	uint64_t t93 = 4949517LLU;

    t93 = (x385%(x386!=(x387!=x388)));

    if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x389 = -1;
	int64_t x391 = -1LL;
	int16_t x392 = INT16_MAX;
	int32_t t94 = -2785956;

    t94 = (x389%(x390!=(x391!=x392)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x393 = -9;
	int32_t x394 = -3814;
	volatile int8_t x396 = INT8_MIN;
	int32_t t95 = -32;

    t95 = (x393%(x394!=(x395!=x396)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x397 = 52;
	uint32_t x398 = 23035358U;
	int8_t x399 = INT8_MIN;
	int32_t t96 = -806730589;

    t96 = (x397%(x398!=(x399!=x400)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x401 = 1U;
	int64_t x402 = INT64_MIN;
	volatile int16_t x403 = INT16_MAX;
	volatile int32_t t97 = -1392;

    t97 = (x401%(x402!=(x403!=x404)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x405 = INT8_MAX;
	static uint16_t x406 = 22795U;
	int32_t x407 = INT32_MIN;
	int8_t x408 = INT8_MIN;
	int32_t t98 = 123109;

    t98 = (x405%(x406!=(x407!=x408)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x409 = INT64_MAX;
	volatile int16_t x410 = -31;
	int16_t x411 = 2283;
	int8_t x412 = INT8_MIN;
	volatile int64_t t99 = 440110LL;

    t99 = (x409%(x410!=(x411!=x412)));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x413 = INT64_MIN;
	int8_t x415 = 0;
	uint8_t x416 = 25U;
	int64_t t100 = 0LL;

    t100 = (x413%(x414!=(x415!=x416)));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x417 = -1;
	volatile int8_t x419 = INT8_MIN;
	int64_t x420 = INT64_MIN;
	int32_t t101 = 7632;

    t101 = (x417%(x418!=(x419!=x420)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x421 = UINT16_MAX;
	uint8_t x422 = UINT8_MAX;
	int64_t x423 = INT64_MIN;
	uint16_t x424 = 6U;
	int32_t t102 = 82;

    t102 = (x421%(x422!=(x423!=x424)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x427 = 269942160LLU;
	static volatile int32_t t103 = -115472757;

    t103 = (x425%(x426!=(x427!=x428)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x430 = 9;
	uint16_t x431 = 16U;
	int32_t x432 = 4293104;
	static volatile int32_t t104 = 7733;

    t104 = (x429%(x430!=(x431!=x432)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x433 = -1LL;
	int8_t x434 = INT8_MAX;
	int16_t x435 = -1;
	static int64_t x436 = -18745932860719LL;
	int64_t t105 = -182909LL;

    t105 = (x433%(x434!=(x435!=x436)));

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x437 = -46;
	int32_t x438 = INT32_MAX;
	volatile int16_t x440 = -1;
	volatile int32_t t106 = 3;

    t106 = (x437%(x438!=(x439!=x440)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x443 = 1445328413204300929LLU;
	uint8_t x444 = UINT8_MAX;
	int64_t t107 = 987853117930543263LL;

    t107 = (x441%(x442!=(x443!=x444)));

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint16_t x445 = 7U;
	int16_t x447 = -1;
	int64_t x448 = INT64_MIN;
	volatile int32_t t108 = 5;

    t108 = (x445%(x446!=(x447!=x448)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x450 = -1;
	int64_t x452 = INT64_MIN;
	int32_t t109 = -1;

    t109 = (x449%(x450!=(x451!=x452)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x454 = INT64_MIN;
	int64_t x455 = -1LL;
	int32_t x456 = INT32_MAX;
	int64_t t110 = -15823554226476LL;

    t110 = (x453%(x454!=(x455!=x456)));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x457 = -3018;
	int8_t x458 = -1;
	static int16_t x459 = INT16_MIN;
	int64_t x460 = -50289504LL;
	int32_t t111 = 297;

    t111 = (x457%(x458!=(x459!=x460)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x462 = -7;
	int64_t x463 = INT64_MIN;
	static uint16_t x464 = UINT16_MAX;
	volatile int32_t t112 = -79632996;

    t112 = (x461%(x462!=(x463!=x464)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x465 = 993989;
	int32_t x466 = INT32_MIN;
	int16_t x467 = -1;
	int64_t x468 = INT64_MIN;
	static volatile int32_t t113 = -548;

    t113 = (x465%(x466!=(x467!=x468)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x469 = INT8_MIN;
	uint64_t x470 = UINT64_MAX;
	int64_t x471 = INT64_MAX;
	int64_t x472 = -29467749407LL;
	static int32_t t114 = 3;

    t114 = (x469%(x470!=(x471!=x472)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint8_t x473 = 15U;
	int8_t x475 = 8;
	static int32_t x476 = -1;
	volatile int32_t t115 = -10648;

    t115 = (x473%(x474!=(x475!=x476)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x477 = UINT32_MAX;
	int64_t x478 = -26809156LL;
	int32_t x479 = INT32_MAX;
	volatile uint16_t x480 = 2328U;
	volatile uint32_t t116 = 933779U;

    t116 = (x477%(x478!=(x479!=x480)));

    if (t116 != 0U) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x481 = UINT32_MAX;
	int64_t x483 = -1022750624574LL;
	int16_t x484 = -114;
	volatile uint32_t t117 = 3587003U;

    t117 = (x481%(x482!=(x483!=x484)));

    if (t117 != 0U) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x486 = 0U;
	volatile uint8_t x487 = UINT8_MAX;
	int16_t x488 = INT16_MIN;
	int32_t t118 = -374;

    t118 = (x485%(x486!=(x487!=x488)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x489 = INT8_MAX;
	int16_t x492 = 899;

    t119 = (x489%(x490!=(x491!=x492)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x493 = UINT8_MAX;
	volatile int64_t x494 = INT64_MAX;
	uint64_t x495 = UINT64_MAX;
	int32_t t120 = 0;

    t120 = (x493%(x494!=(x495!=x496)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x498 = 67U;
	uint32_t x499 = UINT32_MAX;
	static int64_t x500 = INT64_MIN;
	volatile int32_t t121 = 1368026;

    t121 = (x497%(x498!=(x499!=x500)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x505 = INT32_MIN;
	static int64_t x506 = INT64_MIN;
	int64_t x507 = INT64_MAX;
	volatile int32_t x508 = -22;
	volatile int32_t t122 = 0;

    t122 = (x505%(x506!=(x507!=x508)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x510 = 23;
	static uint16_t x511 = 3U;
	int32_t x512 = INT32_MIN;
	int32_t t123 = 3388;

    t123 = (x509%(x510!=(x511!=x512)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x517 = 4U;
	static int64_t x518 = INT64_MAX;
	uint16_t x519 = UINT16_MAX;
	static int32_t x520 = INT32_MAX;
	static int32_t t124 = -64969;

    t124 = (x517%(x518!=(x519!=x520)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x521 = INT64_MIN;
	int16_t x523 = INT16_MAX;
	int64_t x524 = -10LL;
	volatile int64_t t125 = 31050325685414209LL;

    t125 = (x521%(x522!=(x523!=x524)));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x525 = UINT16_MAX;
	volatile int16_t x526 = -28;
	static int64_t x527 = INT64_MIN;
	static uint8_t x528 = 2U;

    t126 = (x525%(x526!=(x527!=x528)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x529 = INT8_MAX;
	int8_t x530 = INT8_MIN;
	int32_t x531 = INT32_MIN;
	int16_t x532 = -1;
	volatile int32_t t127 = -3;

    t127 = (x529%(x530!=(x531!=x532)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x533 = INT8_MIN;
	volatile int32_t x534 = INT32_MIN;
	uint64_t x535 = UINT64_MAX;
	static uint8_t x536 = UINT8_MAX;

    t128 = (x533%(x534!=(x535!=x536)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x537 = INT64_MIN;
	int16_t x538 = INT16_MAX;
	volatile int16_t x539 = 5;
	volatile int64_t x540 = INT64_MIN;
	volatile int64_t t129 = -18075130864LL;

    t129 = (x537%(x538!=(x539!=x540)));

    if (t129 != 0LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static int16_t x541 = 77;
	uint8_t x544 = 11U;

    t130 = (x541%(x542!=(x543!=x544)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x545 = 0U;
	static int64_t x546 = INT64_MIN;
	volatile int8_t x548 = -1;
	int32_t t131 = -8040;

    t131 = (x545%(x546!=(x547!=x548)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x549 = 525096366LL;
	static uint8_t x550 = 8U;
	uint8_t x552 = 11U;
	int64_t t132 = -8435813479497LL;

    t132 = (x549%(x550!=(x551!=x552)));

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x553 = UINT32_MAX;
	int16_t x555 = -1;
	uint32_t t133 = 4U;

    t133 = (x553%(x554!=(x555!=x556)));

    if (t133 != 0U) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x557 = -1;
	int32_t x559 = -120189;
	uint64_t x560 = 15415254LLU;
	static int32_t t134 = -98899;

    t134 = (x557%(x558!=(x559!=x560)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x561 = INT64_MAX;
	int16_t x562 = INT16_MAX;
	int64_t t135 = -154LL;

    t135 = (x561%(x562!=(x563!=x564)));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x565 = 286083400269LLU;
	int16_t x567 = INT16_MIN;
	int32_t x568 = INT32_MAX;

    t136 = (x565%(x566!=(x567!=x568)));

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x569 = -12881;
	uint64_t x570 = 11168512910147461LLU;
	int64_t x572 = INT64_MIN;
	static volatile int32_t t137 = -125216;

    t137 = (x569%(x570!=(x571!=x572)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x573 = INT16_MAX;
	int16_t x574 = -1;
	uint16_t x575 = 26U;
	static uint8_t x576 = UINT8_MAX;
	int32_t t138 = 2249041;

    t138 = (x573%(x574!=(x575!=x576)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x577 = -1;
	int64_t x578 = -1LL;
	volatile int32_t t139 = 37;

    t139 = (x577%(x578!=(x579!=x580)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x581 = 4182;
	static uint64_t x582 = 51LLU;
	int16_t x583 = -366;
	volatile uint8_t x584 = UINT8_MAX;
	volatile int32_t t140 = -1323105;

    t140 = (x581%(x582!=(x583!=x584)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x586 = -16;
	int32_t x587 = INT32_MAX;
	static uint8_t x588 = UINT8_MAX;
	volatile int32_t t141 = 64450;

    t141 = (x585%(x586!=(x587!=x588)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x590 = INT32_MAX;
	int16_t x591 = -1;
	int64_t x592 = 68614579744550LL;
	int32_t t142 = -32592;

    t142 = (x589%(x590!=(x591!=x592)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x593 = 105U;
	static uint32_t x595 = UINT32_MAX;
	volatile int64_t x596 = INT64_MIN;
	volatile int32_t t143 = -253;

    t143 = (x593%(x594!=(x595!=x596)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x597 = INT16_MIN;
	volatile int32_t x598 = INT32_MIN;
	static uint16_t x599 = 10U;
	uint16_t x600 = 7657U;

    t144 = (x597%(x598!=(x599!=x600)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x601 = INT64_MIN;
	int16_t x603 = -1;
	static int64_t x604 = INT64_MIN;
	static volatile int64_t t145 = 89448860LL;

    t145 = (x601%(x602!=(x603!=x604)));

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x606 = 2;
	int32_t x607 = INT32_MIN;
	volatile uint64_t x608 = UINT64_MAX;
	int32_t t146 = -1;

    t146 = (x605%(x606!=(x607!=x608)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x609 = 1404253LLU;
	static uint8_t x611 = 0U;
	int64_t x612 = INT64_MIN;
	volatile uint64_t t147 = 206179LLU;

    t147 = (x609%(x610!=(x611!=x612)));

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x613 = UINT16_MAX;
	uint32_t x614 = 797495010U;
	int8_t x615 = -1;
	volatile int32_t x616 = INT32_MIN;
	volatile int32_t t148 = 28005016;

    t148 = (x613%(x614!=(x615!=x616)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x617 = -7LL;
	int16_t x618 = INT16_MIN;
	int64_t x619 = INT64_MAX;
	volatile int16_t x620 = INT16_MIN;
	volatile int64_t t149 = 2019301356LL;

    t149 = (x617%(x618!=(x619!=x620)));

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x621 = -1LL;
	int64_t x622 = -819279493LL;
	int16_t x623 = -250;
	uint32_t x624 = 2748U;
	int64_t t150 = -16587775637412341LL;

    t150 = (x621%(x622!=(x623!=x624)));

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x626 = INT8_MAX;
	static volatile int16_t x627 = INT16_MIN;
	static uint8_t x628 = UINT8_MAX;
	volatile int64_t t151 = 4588691442699065321LL;

    t151 = (x625%(x626!=(x627!=x628)));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x629 = 560452958457613LLU;
	uint64_t x630 = UINT64_MAX;
	int32_t x632 = 7596;
	static volatile uint64_t t152 = 82007365LLU;

    t152 = (x629%(x630!=(x631!=x632)));

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x633 = 213260108;
	uint64_t x634 = UINT64_MAX;
	volatile int32_t x635 = -1;

    t153 = (x633%(x634!=(x635!=x636)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint32_t x637 = UINT32_MAX;
	int16_t x638 = INT16_MAX;
	uint16_t x640 = UINT16_MAX;
	volatile uint32_t t154 = 3U;

    t154 = (x637%(x638!=(x639!=x640)));

    if (t154 != 0U) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x641 = INT16_MIN;
	int32_t x642 = INT32_MAX;
	static int64_t x643 = -1LL;
	volatile int32_t t155 = -7167046;

    t155 = (x641%(x642!=(x643!=x644)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x647 = INT32_MIN;
	int64_t x648 = -1619735200188364LL;
	static int32_t t156 = -41767804;

    t156 = (x645%(x646!=(x647!=x648)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x649 = -14;
	int32_t x650 = -147496;
	static int16_t x651 = 9593;
	static int64_t x652 = -993042818760296692LL;
	volatile int32_t t157 = 0;

    t157 = (x649%(x650!=(x651!=x652)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x655 = -1;
	int64_t t158 = 1668368083180LL;

    t158 = (x653%(x654!=(x655!=x656)));

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x657 = INT8_MIN;
	uint32_t x658 = 1272U;
	volatile int8_t x659 = INT8_MAX;
	volatile uint16_t x660 = 3496U;
	volatile int32_t t159 = 1317;

    t159 = (x657%(x658!=(x659!=x660)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x662 = INT64_MIN;
	uint16_t x663 = 55U;
	int16_t x664 = -1;
	static int32_t t160 = -52197;

    t160 = (x661%(x662!=(x663!=x664)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x665 = INT16_MIN;
	int8_t x666 = INT8_MIN;
	int8_t x668 = INT8_MAX;
	static volatile int32_t t161 = -2;

    t161 = (x665%(x666!=(x667!=x668)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x669 = 1U;
	static int32_t x670 = INT32_MAX;
	uint8_t x671 = UINT8_MAX;
	int32_t x672 = INT32_MAX;
	int32_t t162 = 12322;

    t162 = (x669%(x670!=(x671!=x672)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x673 = UINT16_MAX;
	int32_t x674 = INT32_MIN;
	int16_t x675 = INT16_MIN;
	volatile uint64_t x676 = UINT64_MAX;
	volatile int32_t t163 = -33112622;

    t163 = (x673%(x674!=(x675!=x676)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint8_t x678 = UINT8_MAX;
	int8_t x679 = INT8_MIN;
	static uint16_t x680 = 2505U;

    t164 = (x677%(x678!=(x679!=x680)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x682 = UINT32_MAX;
	int32_t x683 = INT32_MIN;
	volatile int64_t t165 = -4666162LL;

    t165 = (x681%(x682!=(x683!=x684)));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x685 = 6570377487LLU;
	int8_t x686 = INT8_MIN;
	int32_t x687 = -1;
	int8_t x688 = INT8_MIN;

    t166 = (x685%(x686!=(x687!=x688)));

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x689 = INT32_MIN;
	volatile uint8_t x690 = 0U;
	volatile uint32_t x692 = 814038554U;
	volatile int32_t t167 = -9;

    t167 = (x689%(x690!=(x691!=x692)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x694 = UINT64_MAX;
	static int32_t t168 = -11027;

    t168 = (x693%(x694!=(x695!=x696)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x697 = 737;
	uint8_t x698 = UINT8_MAX;
	uint64_t x699 = 162859LLU;
	static uint16_t x700 = UINT16_MAX;

    t169 = (x697%(x698!=(x699!=x700)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x701 = INT32_MIN;
	uint16_t x702 = UINT16_MAX;
	volatile int32_t t170 = -243;

    t170 = (x701%(x702!=(x703!=x704)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint16_t x705 = UINT16_MAX;
	uint32_t x707 = 265018991U;
	uint64_t x708 = 1802151895727149LLU;

    t171 = (x705%(x706!=(x707!=x708)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x709 = 666U;
	volatile int32_t x710 = INT32_MAX;
	int32_t x712 = INT32_MAX;
	static volatile int32_t t172 = -23;

    t172 = (x709%(x710!=(x711!=x712)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint8_t x713 = 3U;
	int32_t x714 = -1;
	int32_t x715 = INT32_MIN;
	int32_t x716 = INT32_MAX;
	volatile int32_t t173 = 784556;

    t173 = (x713%(x714!=(x715!=x716)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x718 = 8216920;
	uint8_t x720 = 5U;
	int32_t t174 = -1328466;

    t174 = (x717%(x718!=(x719!=x720)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x721 = 482151787785432406LLU;
	volatile int32_t x722 = INT32_MIN;
	uint16_t x723 = 25887U;
	volatile uint64_t t175 = 6LLU;

    t175 = (x721%(x722!=(x723!=x724)));

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x725 = INT64_MAX;
	static uint32_t x726 = 154U;
	static uint32_t x727 = 1285U;

    t176 = (x725%(x726!=(x727!=x728)));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x729 = 1767U;
	int64_t x730 = -1LL;
	uint16_t x732 = 16U;
	static volatile uint32_t t177 = 34387570U;

    t177 = (x729%(x730!=(x731!=x732)));

    if (t177 != 0U) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x733 = -1;
	static int8_t x735 = INT8_MAX;

    t178 = (x733%(x734!=(x735!=x736)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x737 = 612066U;
	int8_t x738 = INT8_MIN;
	int64_t x739 = INT64_MAX;
	int32_t x740 = 980035;
	uint32_t t179 = 2U;

    t179 = (x737%(x738!=(x739!=x740)));

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x741 = INT32_MIN;
	uint32_t x742 = UINT32_MAX;
	static int8_t x743 = 61;

    t180 = (x741%(x742!=(x743!=x744)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint8_t x746 = UINT8_MAX;
	uint8_t x747 = UINT8_MAX;
	volatile uint8_t x748 = 117U;
	static uint64_t t181 = 58569039LLU;

    t181 = (x745%(x746!=(x747!=x748)));

    if (t181 != 0LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint32_t x750 = 251U;
	uint32_t x751 = 18515U;
	static uint8_t x752 = UINT8_MAX;
	volatile int32_t t182 = 1;

    t182 = (x749%(x750!=(x751!=x752)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x753 = -1;
	static volatile int16_t x754 = -1;
	uint32_t x755 = 81U;
	static uint64_t x756 = 1119480099328089LLU;
	int32_t t183 = -90;

    t183 = (x753%(x754!=(x755!=x756)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x759 = 1841963901440LL;
	static int16_t x760 = 0;
	volatile uint64_t t184 = 17358LLU;

    t184 = (x757%(x758!=(x759!=x760)));

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x761 = UINT64_MAX;
	int64_t x762 = INT64_MIN;
	uint64_t x763 = 33361458543323134LLU;
	int16_t x764 = INT16_MAX;
	volatile uint64_t t185 = 20302640452LLU;

    t185 = (x761%(x762!=(x763!=x764)));

    if (t185 != 0LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x765 = -1;
	int8_t x766 = INT8_MIN;
	volatile int32_t x767 = -1;
	static volatile int8_t x768 = -1;
	int32_t t186 = -507;

    t186 = (x765%(x766!=(x767!=x768)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x773 = INT8_MAX;
	int16_t x774 = -1;
	volatile uint8_t x775 = UINT8_MAX;
	uint32_t x776 = UINT32_MAX;
	volatile int32_t t187 = 31247241;

    t187 = (x773%(x774!=(x775!=x776)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x778 = 6;
	int16_t x780 = 12334;
	int32_t t188 = -47002;

    t188 = (x777%(x778!=(x779!=x780)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x782 = 0U;
	volatile int8_t x783 = INT8_MIN;
	uint64_t x784 = UINT64_MAX;
	volatile int32_t t189 = 392098;

    t189 = (x781%(x782!=(x783!=x784)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile uint16_t x785 = 11U;
	uint32_t x786 = 7037018U;
	int8_t x787 = INT8_MAX;
	int64_t x788 = 580911LL;

    t190 = (x785%(x786!=(x787!=x788)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint64_t x791 = 2540469525329LLU;
	volatile int32_t x792 = INT32_MIN;

    t191 = (x789%(x790!=(x791!=x792)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x793 = 404U;
	uint32_t x794 = 1554U;
	uint16_t x795 = 0U;
	static int16_t x796 = -8;
	volatile int32_t t192 = -1037341898;

    t192 = (x793%(x794!=(x795!=x796)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x798 = INT16_MAX;
	static volatile int16_t x800 = 30;
	static volatile int32_t t193 = 254800977;

    t193 = (x797%(x798!=(x799!=x800)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x801 = UINT8_MAX;
	uint64_t x802 = 6LLU;
	uint32_t x803 = 29U;
	volatile int32_t x804 = INT32_MAX;
	static int32_t t194 = -5163836;

    t194 = (x801%(x802!=(x803!=x804)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x805 = -1;
	uint64_t x807 = UINT64_MAX;
	volatile int32_t t195 = 13397431;

    t195 = (x805%(x806!=(x807!=x808)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x809 = INT32_MIN;
	uint32_t x810 = 41724U;
	int64_t x811 = INT64_MAX;
	int8_t x812 = -14;
	static volatile int32_t t196 = 502979522;

    t196 = (x809%(x810!=(x811!=x812)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x813 = INT64_MIN;
	volatile int8_t x814 = -1;
	static int8_t x815 = INT8_MIN;
	int32_t x816 = INT32_MIN;

    t197 = (x813%(x814!=(x815!=x816)));

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x817 = UINT16_MAX;
	static int32_t x818 = 9;
	volatile int16_t x819 = INT16_MAX;
	static int32_t t198 = -5;

    t198 = (x817%(x818!=(x819!=x820)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x821 = 6U;
	static uint16_t x822 = UINT16_MAX;
	static uint64_t x824 = 140342236138868460LLU;
	int32_t t199 = 11378912;

    t199 = (x821%(x822!=(x823!=x824)));

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

