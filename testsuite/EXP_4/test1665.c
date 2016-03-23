
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

static volatile int8_t x1 = INT8_MAX;
int16_t x2 = INT16_MAX;
int8_t x8 = -1;
int64_t t1 = -5302211LL;
uint32_t x10 = UINT32_MAX;
int16_t x13 = INT16_MIN;
int8_t x14 = INT8_MIN;
int32_t t4 = 815676690;
int64_t x24 = INT64_MIN;
int64_t x37 = INT64_MIN;
int8_t x39 = INT8_MAX;
static uint64_t x41 = UINT64_MAX;
int16_t x43 = 3;
uint64_t t10 = UINT64_MAX;
static volatile int32_t t12 = -1;
static volatile uint64_t x62 = UINT64_MAX;
uint32_t x63 = UINT32_MAX;
volatile int32_t t15 = 117048129;
int32_t t16 = 4501901;
volatile uint8_t x70 = 44U;
uint16_t x73 = UINT16_MAX;
static uint32_t x74 = UINT32_MAX;
static int32_t t18 = -1;
static uint8_t x77 = 1U;
static volatile int8_t x81 = 5;
static int32_t x88 = -1;
int64_t x90 = INT64_MIN;
volatile int64_t x92 = -1LL;
uint32_t x94 = UINT32_MAX;
static uint8_t x98 = 16U;
static int8_t x104 = -14;
int64_t x105 = 3358818542LL;
static uint8_t x112 = UINT8_MAX;
int8_t x113 = INT8_MAX;
volatile int32_t t28 = -266728;
uint8_t x130 = UINT8_MAX;
int64_t x131 = INT64_MAX;
int32_t t32 = -101;
int16_t x139 = -5291;
uint16_t x147 = 0U;
int16_t x159 = INT16_MIN;
static int32_t t39 = 0;
static uint16_t x162 = 5U;
static int32_t t41 = 166317515;
uint16_t x172 = 2921U;
uint8_t x174 = UINT8_MAX;
static volatile int16_t x178 = INT16_MIN;
int16_t x180 = 25;
uint64_t x183 = UINT64_MAX;
int64_t t46 = INT64_MAX;
int32_t x189 = INT32_MAX;
volatile uint64_t x196 = 2LLU;
uint64_t x197 = 3LLU;
volatile int32_t t51 = 946334490;
volatile int16_t x212 = INT16_MAX;
int16_t x214 = -1;
int8_t x217 = -21;
int64_t x220 = INT64_MIN;
static volatile int8_t x223 = 33;
int64_t x224 = INT64_MIN;
int64_t x226 = -115447513571LL;
uint64_t x230 = 2LLU;
int64_t x232 = INT64_MIN;
int32_t t60 = 804443;
volatile uint8_t x250 = 50U;
int8_t x257 = -1;
volatile int32_t x258 = INT32_MIN;
uint16_t x262 = 11521U;
volatile int32_t t65 = 13990378;
static volatile uint16_t x278 = 142U;
static int32_t x285 = INT32_MAX;
uint64_t x286 = 771253212168745785LLU;
uint64_t x296 = 1025961737570LLU;
static int32_t x305 = -1806;
int32_t x310 = INT32_MIN;
static int16_t x312 = INT16_MIN;
int32_t x321 = INT32_MIN;
int32_t x324 = -125146319;
volatile int64_t x325 = INT64_MIN;
int16_t x327 = -1;
uint8_t x333 = 46U;
volatile uint16_t x334 = 985U;
int8_t x335 = INT8_MIN;
volatile uint32_t x342 = 290U;
static int32_t x349 = INT32_MAX;
static int16_t x354 = INT16_MAX;
static int16_t x364 = -8;
static volatile uint64_t t90 = 1513LLU;
uint16_t x365 = 106U;
uint64_t x367 = 967128383655197LLU;
int64_t x372 = INT64_MIN;
volatile uint32_t x373 = 427305241U;
volatile int32_t t94 = 7981;
int16_t x385 = -20;
uint8_t x391 = 3U;
int64_t x402 = INT64_MIN;
int32_t x410 = 854103566;
int64_t x411 = INT64_MIN;
volatile uint64_t x412 = 2686943LLU;
int8_t x413 = 5;
static uint8_t x415 = UINT8_MAX;
int8_t x424 = -1;
volatile int32_t x428 = -1;
static int32_t x432 = 5089568;
volatile int64_t t107 = INT64_MIN;
uint64_t x434 = UINT64_MAX;
uint16_t x435 = 1145U;
uint16_t x440 = 712U;
volatile uint16_t x443 = 1U;
int64_t t114 = INT64_MAX;
volatile uint8_t x468 = UINT8_MAX;
volatile int64_t t116 = INT64_MAX;
uint32_t t118 = 9372U;
uint32_t x478 = 25U;
int16_t x497 = INT16_MAX;
uint16_t x507 = 977U;
int8_t x509 = INT8_MIN;
int8_t x511 = INT8_MAX;
int32_t x512 = INT32_MIN;
volatile uint64_t t129 = UINT64_MAX;
uint8_t x522 = 14U;
static int64_t x523 = INT64_MIN;
int64_t x524 = 20LL;
static int32_t t130 = -28325;
int32_t t131 = -223894;
uint16_t x533 = UINT16_MAX;
int16_t x534 = -1;
uint16_t x538 = UINT16_MAX;
int64_t x539 = INT64_MIN;
static volatile int64_t x542 = INT64_MIN;
uint16_t x543 = UINT16_MAX;
volatile int32_t t135 = 3692301;
int32_t x547 = -1;
uint64_t x549 = UINT64_MAX;
static int8_t x552 = INT8_MAX;
int32_t x554 = -1;
int16_t x556 = INT16_MIN;
static uint32_t x560 = 189U;
int8_t x563 = 28;
volatile int64_t x570 = INT64_MIN;
volatile int64_t x575 = 73533110284479LL;
int8_t x578 = -1;
uint8_t x582 = UINT8_MAX;
static volatile int64_t t146 = -198LL;
int16_t x591 = 6;
volatile uint8_t x595 = UINT8_MAX;
int64_t x597 = INT64_MIN;
int16_t x600 = INT16_MAX;
int32_t x601 = INT32_MIN;
int64_t t151 = 17123LL;
int8_t x611 = -9;
volatile int16_t x615 = -1;
volatile int32_t t155 = -2494185;
volatile int32_t t156 = 2485;
volatile uint8_t x631 = 7U;
static int8_t x634 = INT8_MIN;
int32_t x638 = INT32_MAX;
volatile int16_t x650 = 0;
static int64_t x666 = -8627128585452043LL;
volatile int32_t t168 = -813051024;
static volatile int32_t t170 = -77399844;
static volatile uint8_t x686 = UINT8_MAX;
int16_t x693 = -1;
volatile int64_t x695 = 456652356579010LL;
int16_t x698 = -1;
static uint32_t x699 = 494U;
volatile int32_t t175 = 3404;
static int32_t x705 = INT32_MIN;
static uint16_t x708 = 1U;
int32_t t176 = 0;
int32_t t177 = -856260;
int64_t x716 = INT64_MIN;
volatile uint16_t x717 = 2043U;
uint64_t x721 = 31LLU;
static int8_t x724 = -8;
volatile int32_t t181 = INT32_MAX;
int8_t x733 = INT8_MIN;
volatile int32_t x735 = INT32_MIN;
uint32_t x738 = UINT32_MAX;
volatile int32_t t184 = 201930;
int32_t x744 = 41818431;
uint16_t x745 = 866U;
volatile int16_t x751 = 2;
int32_t t187 = 10030195;
volatile int32_t t188 = -629965;
static uint16_t x767 = UINT16_MAX;
volatile int32_t t191 = 691525194;
static volatile int16_t x770 = 3;
int8_t x771 = -1;
static int64_t x772 = INT64_MAX;
static uint32_t t193 = UINT32_MAX;
static int64_t x778 = INT64_MIN;
int16_t x781 = INT16_MIN;
uint8_t x782 = 3U;
volatile int16_t x784 = INT16_MIN;
volatile uint16_t x787 = 57U;
int8_t x791 = 1;


void f0(void) {
    	volatile int8_t x3 = -6;
	int64_t x4 = -1LL;
	int32_t t0 = 539;

    t0 = (x1|(x2!=(x3>x4)));

    if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MIN;
	int16_t x6 = INT16_MIN;
	int8_t x7 = INT8_MIN;

    t1 = (x5|(x6!=(x7>x8)));

    if (t1 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	volatile int16_t x11 = INT16_MAX;
	uint32_t x12 = 1U;
	volatile int32_t t2 = -2021752;

    t2 = (x9|(x10!=(x11>x12)));

    if (t2 != -127) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x15 = INT64_MIN;
	static int8_t x16 = -1;
	int32_t t3 = 326;

    t3 = (x13|(x14!=(x15>x16)));

    if (t3 != -32767) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = -1;
	uint8_t x18 = 7U;
	int32_t x19 = INT32_MAX;
	static uint16_t x20 = 12224U;

    t4 = (x17|(x18!=(x19>x20)));

    if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = INT64_MIN;
	static int8_t x22 = INT8_MIN;
	int8_t x23 = INT8_MIN;
	volatile int64_t t5 = -1178LL;

    t5 = (x21|(x22!=(x23>x24)));

    if (t5 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x25 = INT16_MIN;
	uint64_t x26 = 14061679274LLU;
	static uint64_t x27 = 24658282233LLU;
	uint8_t x28 = UINT8_MAX;
	static volatile int32_t t6 = -203436;

    t6 = (x25|(x26!=(x27>x28)));

    if (t6 != -32767) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = 1114687U;
	int32_t x30 = INT32_MIN;
	uint16_t x31 = UINT16_MAX;
	volatile int8_t x32 = INT8_MAX;
	uint32_t t7 = 1U;

    t7 = (x29|(x30!=(x31>x32)));

    if (t7 != 1114687U) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint16_t x33 = UINT16_MAX;
	uint64_t x34 = 389290LLU;
	int32_t x35 = -1;
	static int32_t x36 = INT32_MIN;
	int32_t t8 = 0;

    t8 = (x33|(x34!=(x35>x36)));

    if (t8 != 65535) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x38 = 32U;
	static int32_t x40 = 128204;
	int64_t t9 = -422018079317LL;

    t9 = (x37|(x38!=(x39>x40)));

    if (t9 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x42 = -83463790602LL;
	static int8_t x44 = INT8_MIN;

    t10 = (x41|(x42!=(x43>x44)));

    if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = INT32_MAX;
	uint8_t x46 = UINT8_MAX;
	int32_t x47 = INT32_MIN;
	uint32_t x48 = UINT32_MAX;
	volatile int32_t t11 = INT32_MAX;

    t11 = (x45|(x46!=(x47>x48)));

    if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint8_t x49 = UINT8_MAX;
	uint32_t x50 = 10147U;
	static uint32_t x51 = UINT32_MAX;
	uint16_t x52 = 4112U;

    t12 = (x49|(x50!=(x51>x52)));

    if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = -801;
	int8_t x54 = -1;
	uint64_t x55 = 2392530312247LLU;
	int8_t x56 = INT8_MIN;
	static volatile int32_t t13 = -1020512;

    t13 = (x53|(x54!=(x55>x56)));

    if (t13 != -801) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x57 = INT16_MAX;
	uint32_t x58 = 21563U;
	volatile uint8_t x59 = 1U;
	volatile int8_t x60 = INT8_MIN;
	int32_t t14 = 4;

    t14 = (x57|(x58!=(x59>x60)));

    if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = 1;
	int8_t x64 = 2;

    t15 = (x61|(x62!=(x63>x64)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = INT8_MAX;
	int64_t x66 = -25LL;
	int8_t x67 = -6;
	volatile int8_t x68 = INT8_MAX;

    t16 = (x65|(x66!=(x67>x68)));

    if (t16 != 127) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x69 = 1U;
	volatile int32_t x71 = -2921740;
	uint16_t x72 = UINT16_MAX;
	volatile uint32_t t17 = 111U;

    t17 = (x69|(x70!=(x71>x72)));

    if (t17 != 1U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x75 = 16U;
	volatile int16_t x76 = INT16_MAX;

    t18 = (x73|(x74!=(x75>x76)));

    if (t18 != 65535) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x78 = INT32_MIN;
	int32_t x79 = -1;
	int8_t x80 = INT8_MIN;
	int32_t t19 = -871606;

    t19 = (x77|(x78!=(x79>x80)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x82 = 32;
	static uint8_t x83 = UINT8_MAX;
	volatile int16_t x84 = INT16_MIN;
	volatile int32_t t20 = -482617374;

    t20 = (x81|(x82!=(x83>x84)));

    if (t20 != 5) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = -1;
	static uint64_t x86 = UINT64_MAX;
	int32_t x87 = -1;
	int32_t t21 = 161;

    t21 = (x85|(x86!=(x87>x88)));

    if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x89 = INT64_MAX;
	int64_t x91 = -1LL;
	volatile int64_t t22 = INT64_MAX;

    t22 = (x89|(x90!=(x91>x92)));

    if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x93 = 9043U;
	int8_t x95 = 0;
	static int16_t x96 = INT16_MIN;
	static uint32_t t23 = 217U;

    t23 = (x93|(x94!=(x95>x96)));

    if (t23 != 9043U) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = -2;
	uint16_t x99 = UINT16_MAX;
	volatile int8_t x100 = INT8_MAX;
	volatile int32_t t24 = 0;

    t24 = (x97|(x98!=(x99>x100)));

    if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint32_t x101 = UINT32_MAX;
	uint16_t x102 = 21095U;
	int8_t x103 = INT8_MAX;
	static uint32_t t25 = UINT32_MAX;

    t25 = (x101|(x102!=(x103>x104)));

    if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x106 = INT16_MIN;
	int8_t x107 = -1;
	uint8_t x108 = 25U;
	int64_t t26 = 1LL;

    t26 = (x105|(x106!=(x107>x108)));

    if (t26 != 3358818543LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x109 = INT16_MIN;
	volatile int16_t x110 = 6360;
	volatile int16_t x111 = INT16_MIN;
	volatile int32_t t27 = -3;

    t27 = (x109|(x110!=(x111>x112)));

    if (t27 != -32767) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x114 = -331994;
	volatile uint8_t x115 = 1U;
	int8_t x116 = INT8_MIN;

    t28 = (x113|(x114!=(x115>x116)));

    if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = INT32_MAX;
	int8_t x118 = INT8_MIN;
	int64_t x119 = INT64_MIN;
	static int32_t x120 = 28;
	volatile int32_t t29 = INT32_MAX;

    t29 = (x117|(x118!=(x119>x120)));

    if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = INT64_MIN;
	static int32_t x122 = INT32_MAX;
	int8_t x123 = -1;
	uint16_t x124 = 5U;
	volatile int64_t t30 = 6LL;

    t30 = (x121|(x122!=(x123>x124)));

    if (t30 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x125 = UINT32_MAX;
	int32_t x126 = INT32_MIN;
	volatile int32_t x127 = 925799808;
	static int16_t x128 = INT16_MIN;
	uint32_t t31 = UINT32_MAX;

    t31 = (x125|(x126!=(x127>x128)));

    if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x129 = 1020U;
	int32_t x132 = INT32_MIN;

    t32 = (x129|(x130!=(x131>x132)));

    if (t32 != 1021) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x133 = 3U;
	volatile uint8_t x134 = 24U;
	volatile int32_t x135 = -311;
	int8_t x136 = INT8_MIN;
	int32_t t33 = -1163;

    t33 = (x133|(x134!=(x135>x136)));

    if (t33 != 3) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = INT32_MIN;
	int64_t x138 = 232554LL;
	volatile int64_t x140 = INT64_MAX;
	volatile int32_t t34 = 1739;

    t34 = (x137|(x138!=(x139>x140)));

    if (t34 != -2147483647) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint64_t x141 = 437213633666LLU;
	volatile int16_t x142 = INT16_MIN;
	static int64_t x143 = INT64_MIN;
	int16_t x144 = INT16_MIN;
	static uint64_t t35 = 156LLU;

    t35 = (x141|(x142!=(x143>x144)));

    if (t35 != 437213633667LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x145 = UINT8_MAX;
	volatile uint16_t x146 = 18U;
	uint16_t x148 = 3U;
	int32_t t36 = -2005;

    t36 = (x145|(x146!=(x147>x148)));

    if (t36 != 255) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint8_t x149 = 30U;
	int64_t x150 = 73629655386LL;
	int16_t x151 = INT16_MIN;
	int8_t x152 = INT8_MIN;
	volatile int32_t t37 = 127652;

    t37 = (x149|(x150!=(x151>x152)));

    if (t37 != 31) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x153 = -10;
	int64_t x154 = INT64_MIN;
	volatile uint16_t x155 = 639U;
	static int8_t x156 = -1;
	volatile int32_t t38 = -1014195201;

    t38 = (x153|(x154!=(x155>x156)));

    if (t38 != -9) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint8_t x157 = UINT8_MAX;
	volatile uint16_t x158 = 0U;
	static uint32_t x160 = 120998U;

    t39 = (x157|(x158!=(x159>x160)));

    if (t39 != 255) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x161 = 1;
	int32_t x163 = INT32_MIN;
	int64_t x164 = INT64_MIN;
	int32_t t40 = 249;

    t40 = (x161|(x162!=(x163>x164)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = INT8_MIN;
	uint64_t x166 = UINT64_MAX;
	volatile int16_t x167 = -11;
	volatile int32_t x168 = INT32_MIN;

    t41 = (x165|(x166!=(x167>x168)));

    if (t41 != -127) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = INT32_MIN;
	volatile int32_t x170 = 1980248;
	int64_t x171 = INT64_MAX;
	int32_t t42 = 52;

    t42 = (x169|(x170!=(x171>x172)));

    if (t42 != -2147483647) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x173 = -106690;
	volatile int32_t x175 = -1;
	static volatile uint8_t x176 = 3U;
	int32_t t43 = 119642555;

    t43 = (x173|(x174!=(x175>x176)));

    if (t43 != -106689) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x177 = -5;
	int64_t x179 = 24130329375838LL;
	int32_t t44 = 32682;

    t44 = (x177|(x178!=(x179>x180)));

    if (t44 != -5) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = INT16_MIN;
	int32_t x182 = INT32_MIN;
	int32_t x184 = -1;
	int32_t t45 = 3471808;

    t45 = (x181|(x182!=(x183>x184)));

    if (t45 != -32767) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x185 = INT64_MAX;
	int8_t x186 = 36;
	int16_t x187 = 0;
	int16_t x188 = INT16_MAX;

    t46 = (x185|(x186!=(x187>x188)));

    if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint32_t x190 = 29112338U;
	volatile int32_t x191 = -2809446;
	int8_t x192 = -1;
	int32_t t47 = INT32_MAX;

    t47 = (x189|(x190!=(x191>x192)));

    if (t47 != INT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x193 = 16104108LLU;
	volatile int32_t x194 = INT32_MIN;
	int64_t x195 = INT64_MIN;
	static uint64_t t48 = 16991126871LLU;

    t48 = (x193|(x194!=(x195>x196)));

    if (t48 != 16104109LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x198 = 10752U;
	volatile uint32_t x199 = 20941775U;
	volatile int32_t x200 = INT32_MIN;
	static uint64_t t49 = 8420173466804LLU;

    t49 = (x197|(x198!=(x199>x200)));

    if (t49 != 3LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x201 = INT8_MIN;
	uint32_t x202 = UINT32_MAX;
	volatile int32_t x203 = 6256;
	int32_t x204 = INT32_MIN;
	volatile int32_t t50 = -30038996;

    t50 = (x201|(x202!=(x203>x204)));

    if (t50 != -127) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x205 = -61;
	int8_t x206 = INT8_MIN;
	static volatile int8_t x207 = INT8_MAX;
	int16_t x208 = 3;

    t51 = (x205|(x206!=(x207>x208)));

    if (t51 != -61) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int64_t x209 = -52014273018805LL;
	int64_t x210 = INT64_MAX;
	int16_t x211 = 405;
	volatile int64_t t52 = -156LL;

    t52 = (x209|(x210!=(x211>x212)));

    if (t52 != -52014273018805LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint32_t x213 = 0U;
	static int8_t x215 = INT8_MAX;
	int32_t x216 = INT32_MAX;
	uint32_t t53 = 3155985U;

    t53 = (x213|(x214!=(x215>x216)));

    if (t53 != 1U) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x218 = 2U;
	uint8_t x219 = 47U;
	volatile int32_t t54 = 2535;

    t54 = (x217|(x218!=(x219>x220)));

    if (t54 != -21) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x221 = 5U;
	static int64_t x222 = INT64_MIN;
	volatile int32_t t55 = -3615373;

    t55 = (x221|(x222!=(x223>x224)));

    if (t55 != 5) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = -1;
	int32_t x227 = INT32_MIN;
	uint16_t x228 = 267U;
	int32_t t56 = -116545215;

    t56 = (x225|(x226!=(x227>x228)));

    if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x229 = 293237852616689LLU;
	uint16_t x231 = 25059U;
	volatile uint64_t t57 = 20LLU;

    t57 = (x229|(x230!=(x231>x232)));

    if (t57 != 293237852616689LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x233 = 1014;
	int8_t x234 = INT8_MAX;
	uint16_t x235 = 92U;
	volatile int16_t x236 = -1;
	int32_t t58 = -61;

    t58 = (x233|(x234!=(x235>x236)));

    if (t58 != 1015) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x237 = -1;
	int32_t x238 = -1;
	uint64_t x239 = UINT64_MAX;
	static int64_t x240 = -1LL;
	static int32_t t59 = -545367579;

    t59 = (x237|(x238!=(x239>x240)));

    if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x241 = 0U;
	volatile int16_t x242 = 0;
	int64_t x243 = INT64_MIN;
	int32_t x244 = INT32_MAX;

    t60 = (x241|(x242!=(x243>x244)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint32_t x245 = 531945U;
	int16_t x246 = -1;
	static uint64_t x247 = 28461595255558LLU;
	volatile int8_t x248 = INT8_MIN;
	volatile uint32_t t61 = 1804049526U;

    t61 = (x245|(x246!=(x247>x248)));

    if (t61 != 531945U) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = INT8_MIN;
	volatile uint16_t x251 = UINT16_MAX;
	int64_t x252 = -1LL;
	int32_t t62 = 822999;

    t62 = (x249|(x250!=(x251>x252)));

    if (t62 != -127) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x253 = 2;
	int16_t x254 = INT16_MIN;
	volatile int16_t x255 = INT16_MAX;
	uint64_t x256 = 7472LLU;
	int32_t t63 = 2053798;

    t63 = (x253|(x254!=(x255>x256)));

    if (t63 != 3) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x259 = 0U;
	volatile uint64_t x260 = 11126756511583LLU;
	int32_t t64 = -167385222;

    t64 = (x257|(x258!=(x259>x260)));

    if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = INT8_MIN;
	uint64_t x263 = UINT64_MAX;
	uint16_t x264 = 15548U;

    t65 = (x261|(x262!=(x263>x264)));

    if (t65 != -127) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint64_t x265 = UINT64_MAX;
	int64_t x266 = -678141043114LL;
	uint8_t x267 = 0U;
	int16_t x268 = 696;
	static volatile uint64_t t66 = UINT64_MAX;

    t66 = (x265|(x266!=(x267>x268)));

    if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x269 = 138;
	volatile uint64_t x270 = 27223570723868668LLU;
	int32_t x271 = -386038;
	int32_t x272 = INT32_MIN;
	static int32_t t67 = -28306;

    t67 = (x269|(x270!=(x271>x272)));

    if (t67 != 139) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x273 = 174972096499575LLU;
	volatile int32_t x274 = INT32_MAX;
	uint16_t x275 = 31180U;
	uint16_t x276 = 2470U;
	volatile uint64_t t68 = 6LLU;

    t68 = (x273|(x274!=(x275>x276)));

    if (t68 != 174972096499575LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x277 = INT32_MIN;
	uint32_t x279 = 27237204U;
	uint8_t x280 = 2U;
	int32_t t69 = -2535079;

    t69 = (x277|(x278!=(x279>x280)));

    if (t69 != -2147483647) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = INT8_MIN;
	volatile int64_t x282 = INT64_MIN;
	int32_t x283 = INT32_MIN;
	int64_t x284 = -1770335LL;
	int32_t t70 = 31;

    t70 = (x281|(x282!=(x283>x284)));

    if (t70 != -127) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x287 = 5426U;
	volatile int32_t x288 = 684386;
	volatile int32_t t71 = INT32_MAX;

    t71 = (x285|(x286!=(x287>x288)));

    if (t71 != INT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint64_t x289 = 967720576LLU;
	static volatile uint64_t x290 = UINT64_MAX;
	int32_t x291 = INT32_MIN;
	static int64_t x292 = INT64_MAX;
	uint64_t t72 = 6668780969706754LLU;

    t72 = (x289|(x290!=(x291>x292)));

    if (t72 != 967720577LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x293 = UINT32_MAX;
	int32_t x294 = -15;
	volatile uint16_t x295 = 6076U;
	uint32_t t73 = UINT32_MAX;

    t73 = (x293|(x294!=(x295>x296)));

    if (t73 != UINT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x297 = 422660508;
	uint64_t x298 = 219128172817386334LLU;
	int64_t x299 = INT64_MAX;
	int16_t x300 = -5;
	static int32_t t74 = 19;

    t74 = (x297|(x298!=(x299>x300)));

    if (t74 != 422660509) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x301 = INT32_MIN;
	int8_t x302 = -1;
	static uint32_t x303 = 3U;
	static int16_t x304 = 190;
	static int32_t t75 = 25;

    t75 = (x301|(x302!=(x303>x304)));

    if (t75 != -2147483647) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x306 = INT16_MAX;
	static int64_t x307 = INT64_MAX;
	int64_t x308 = INT64_MAX;
	static int32_t t76 = 3211833;

    t76 = (x305|(x306!=(x307>x308)));

    if (t76 != -1805) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = -1;
	uint8_t x311 = UINT8_MAX;
	volatile int32_t t77 = 1;

    t77 = (x309|(x310!=(x311>x312)));

    if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x313 = -11754023511LL;
	int32_t x314 = INT32_MIN;
	static uint8_t x315 = 0U;
	static int64_t x316 = INT64_MAX;
	volatile int64_t t78 = -15686727388452431LL;

    t78 = (x313|(x314!=(x315>x316)));

    if (t78 != -11754023511LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x317 = INT16_MAX;
	int8_t x318 = -1;
	static uint64_t x319 = 5LLU;
	int64_t x320 = INT64_MIN;
	int32_t t79 = 15316868;

    t79 = (x317|(x318!=(x319>x320)));

    if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x322 = INT64_MIN;
	uint16_t x323 = UINT16_MAX;
	volatile int32_t t80 = -595021780;

    t80 = (x321|(x322!=(x323>x324)));

    if (t80 != -2147483647) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x326 = INT32_MIN;
	volatile int16_t x328 = INT16_MAX;
	volatile int64_t t81 = 130046868108902905LL;

    t81 = (x325|(x326!=(x327>x328)));

    if (t81 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x329 = 16016U;
	uint16_t x330 = UINT16_MAX;
	int8_t x331 = INT8_MAX;
	volatile int64_t x332 = INT64_MAX;
	volatile int32_t t82 = -1;

    t82 = (x329|(x330!=(x331>x332)));

    if (t82 != 16017) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint16_t x336 = 1494U;
	volatile int32_t t83 = 1;

    t83 = (x333|(x334!=(x335>x336)));

    if (t83 != 47) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x337 = INT64_MAX;
	uint8_t x338 = 6U;
	int32_t x339 = -41237;
	int16_t x340 = 2190;
	static int64_t t84 = INT64_MAX;

    t84 = (x337|(x338!=(x339>x340)));

    if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = 92LL;
	uint64_t x343 = 1LLU;
	int8_t x344 = INT8_MIN;
	volatile int64_t t85 = -499923490LL;

    t85 = (x341|(x342!=(x343>x344)));

    if (t85 != 93LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x345 = INT8_MIN;
	int32_t x346 = -1;
	static volatile int8_t x347 = -1;
	static uint32_t x348 = 250U;
	int32_t t86 = -3305553;

    t86 = (x345|(x346!=(x347>x348)));

    if (t86 != -127) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x350 = -1;
	uint64_t x351 = 23303496LLU;
	static int32_t x352 = INT32_MIN;
	volatile int32_t t87 = INT32_MAX;

    t87 = (x349|(x350!=(x351>x352)));

    if (t87 != INT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x353 = 4019U;
	static uint16_t x355 = 639U;
	int16_t x356 = -1;
	volatile int32_t t88 = 22410;

    t88 = (x353|(x354!=(x355>x356)));

    if (t88 != 4019) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x357 = 16802042754835475LLU;
	int32_t x358 = INT32_MAX;
	uint8_t x359 = 3U;
	static volatile int8_t x360 = INT8_MIN;
	uint64_t t89 = 0LLU;

    t89 = (x357|(x358!=(x359>x360)));

    if (t89 != 16802042754835475LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint64_t x361 = 60432736LLU;
	static volatile int64_t x362 = -1962959963884479039LL;
	uint16_t x363 = UINT16_MAX;

    t90 = (x361|(x362!=(x363>x364)));

    if (t90 != 60432737LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x366 = INT16_MAX;
	static uint8_t x368 = UINT8_MAX;
	volatile int32_t t91 = 0;

    t91 = (x365|(x366!=(x367>x368)));

    if (t91 != 107) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x369 = INT32_MAX;
	int64_t x370 = -1LL;
	volatile uint8_t x371 = 60U;
	int32_t t92 = INT32_MAX;

    t92 = (x369|(x370!=(x371>x372)));

    if (t92 != INT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x374 = 0;
	static int16_t x375 = INT16_MAX;
	int16_t x376 = INT16_MIN;
	uint32_t t93 = 181U;

    t93 = (x373|(x374!=(x375>x376)));

    if (t93 != 427305241U) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x377 = 30;
	static uint16_t x378 = UINT16_MAX;
	int16_t x379 = INT16_MIN;
	int32_t x380 = -1;

    t94 = (x377|(x378!=(x379>x380)));

    if (t94 != 31) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x381 = 247044578LLU;
	volatile int64_t x382 = INT64_MIN;
	int32_t x383 = INT32_MIN;
	static volatile uint64_t x384 = 1543470845599355LLU;
	volatile uint64_t t95 = 230647860324798372LLU;

    t95 = (x381|(x382!=(x383>x384)));

    if (t95 != 247044579LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x386 = -1LL;
	int16_t x387 = -1;
	static int32_t x388 = -739;
	int32_t t96 = 5953;

    t96 = (x385|(x386!=(x387>x388)));

    if (t96 != -19) { NG(); } else { ; }
	
}

void f97(void) {
    	static int32_t x389 = 29331467;
	uint8_t x390 = UINT8_MAX;
	int16_t x392 = INT16_MIN;
	int32_t t97 = -4;

    t97 = (x389|(x390!=(x391>x392)));

    if (t97 != 29331467) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x393 = -791697309LL;
	int16_t x394 = 6;
	uint8_t x395 = 2U;
	volatile uint8_t x396 = UINT8_MAX;
	static volatile int64_t t98 = 13984889LL;

    t98 = (x393|(x394!=(x395>x396)));

    if (t98 != -791697309LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x397 = INT8_MIN;
	static int16_t x398 = 361;
	int32_t x399 = -1;
	uint32_t x400 = 2491U;
	int32_t t99 = 8719;

    t99 = (x397|(x398!=(x399>x400)));

    if (t99 != -127) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = INT8_MAX;
	int64_t x403 = 1357992611769366LL;
	int8_t x404 = -1;
	int32_t t100 = -29888;

    t100 = (x401|(x402!=(x403>x404)));

    if (t100 != 127) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x405 = INT8_MAX;
	uint64_t x406 = UINT64_MAX;
	int16_t x407 = 7828;
	int64_t x408 = -165964LL;
	int32_t t101 = 29408879;

    t101 = (x405|(x406!=(x407>x408)));

    if (t101 != 127) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x409 = INT16_MIN;
	volatile int32_t t102 = 3943;

    t102 = (x409|(x410!=(x411>x412)));

    if (t102 != -32767) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x414 = -11;
	int32_t x416 = INT32_MIN;
	int32_t t103 = 235044;

    t103 = (x413|(x414!=(x415>x416)));

    if (t103 != 5) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x417 = 0U;
	static int64_t x418 = 8199095678115499LL;
	static int16_t x419 = INT16_MIN;
	uint64_t x420 = 11LLU;
	volatile int32_t t104 = -28678;

    t104 = (x417|(x418!=(x419>x420)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x421 = INT64_MIN;
	int16_t x422 = INT16_MAX;
	uint32_t x423 = 960U;
	int64_t t105 = 26LL;

    t105 = (x421|(x422!=(x423>x424)));

    if (t105 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x425 = -40029;
	int16_t x426 = INT16_MAX;
	volatile int64_t x427 = -1LL;
	static volatile int32_t t106 = 439;

    t106 = (x425|(x426!=(x427>x428)));

    if (t106 != -40029) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int64_t x429 = INT64_MIN;
	int16_t x430 = 0;
	int32_t x431 = -316606;

    t107 = (x429|(x430!=(x431>x432)));

    if (t107 != INT64_MIN) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x433 = INT64_MIN;
	int16_t x436 = -3560;
	volatile int64_t t108 = -1649605349238698667LL;

    t108 = (x433|(x434!=(x435>x436)));

    if (t108 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x437 = 2755U;
	volatile int8_t x438 = -1;
	volatile int32_t x439 = -95;
	volatile int32_t t109 = -242403;

    t109 = (x437|(x438!=(x439>x440)));

    if (t109 != 2755) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x441 = UINT16_MAX;
	volatile int64_t x442 = -1LL;
	volatile int32_t x444 = -1;
	volatile int32_t t110 = 3;

    t110 = (x441|(x442!=(x443>x444)));

    if (t110 != 65535) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint32_t x445 = 13635830U;
	uint32_t x446 = UINT32_MAX;
	static int32_t x447 = INT32_MIN;
	int16_t x448 = INT16_MIN;
	volatile uint32_t t111 = 1117U;

    t111 = (x445|(x446!=(x447>x448)));

    if (t111 != 13635831U) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x449 = -209439;
	int32_t x450 = 3378;
	int16_t x451 = -672;
	volatile int64_t x452 = INT64_MIN;
	volatile int32_t t112 = 521215;

    t112 = (x449|(x450!=(x451>x452)));

    if (t112 != -209439) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x453 = UINT16_MAX;
	volatile uint32_t x454 = UINT32_MAX;
	int8_t x455 = INT8_MAX;
	int64_t x456 = -1LL;
	static int32_t t113 = -535;

    t113 = (x453|(x454!=(x455>x456)));

    if (t113 != 65535) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int64_t x457 = INT64_MAX;
	int64_t x458 = INT64_MAX;
	volatile uint64_t x459 = UINT64_MAX;
	static int32_t x460 = -1;

    t114 = (x457|(x458!=(x459>x460)));

    if (t114 != INT64_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint8_t x461 = UINT8_MAX;
	volatile int32_t x462 = -1;
	uint16_t x463 = UINT16_MAX;
	int32_t x464 = -902304;
	volatile int32_t t115 = -51773;

    t115 = (x461|(x462!=(x463>x464)));

    if (t115 != 255) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x465 = INT64_MAX;
	int32_t x466 = -569471827;
	uint16_t x467 = UINT16_MAX;

    t116 = (x465|(x466!=(x467>x468)));

    if (t116 != INT64_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x469 = -1;
	volatile int16_t x470 = INT16_MAX;
	uint64_t x471 = 11961152254LLU;
	int32_t x472 = -1924;
	int32_t t117 = -33;

    t117 = (x469|(x470!=(x471>x472)));

    if (t117 != -1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x473 = 33979U;
	int64_t x474 = 1LL;
	int32_t x475 = -1;
	uint16_t x476 = 18U;

    t118 = (x473|(x474!=(x475>x476)));

    if (t118 != 33979U) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x477 = -1;
	int64_t x479 = INT64_MAX;
	static uint16_t x480 = UINT16_MAX;
	int32_t t119 = 34;

    t119 = (x477|(x478!=(x479>x480)));

    if (t119 != -1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x481 = UINT8_MAX;
	int16_t x482 = -1;
	int16_t x483 = 197;
	static int8_t x484 = -7;
	int32_t t120 = -43453;

    t120 = (x481|(x482!=(x483>x484)));

    if (t120 != 255) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = INT64_MIN;
	static int32_t x486 = INT32_MIN;
	int8_t x487 = 11;
	uint32_t x488 = UINT32_MAX;
	int64_t t121 = -1441799513409837LL;

    t121 = (x485|(x486!=(x487>x488)));

    if (t121 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x489 = 0U;
	static uint16_t x490 = 0U;
	int64_t x491 = INT64_MIN;
	uint64_t x492 = 6951003956774LLU;
	volatile uint32_t t122 = 1U;

    t122 = (x489|(x490!=(x491>x492)));

    if (t122 != 1U) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x493 = UINT64_MAX;
	uint64_t x494 = 2619692168630267LLU;
	volatile int16_t x495 = INT16_MIN;
	volatile int64_t x496 = INT64_MIN;
	static uint64_t t123 = UINT64_MAX;

    t123 = (x493|(x494!=(x495>x496)));

    if (t123 != UINT64_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint64_t x498 = 0LLU;
	int64_t x499 = -1LL;
	int16_t x500 = -18;
	volatile int32_t t124 = -5086;

    t124 = (x497|(x498!=(x499>x500)));

    if (t124 != 32767) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = INT32_MIN;
	int16_t x502 = INT16_MIN;
	int32_t x503 = -775;
	int16_t x504 = -173;
	volatile int32_t t125 = -1;

    t125 = (x501|(x502!=(x503>x504)));

    if (t125 != -2147483647) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = -1;
	volatile int16_t x506 = -392;
	uint16_t x508 = UINT16_MAX;
	static volatile int32_t t126 = -7754189;

    t126 = (x505|(x506!=(x507>x508)));

    if (t126 != -1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x510 = -2;
	volatile int32_t t127 = 2;

    t127 = (x509|(x510!=(x511>x512)));

    if (t127 != -127) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint64_t x513 = 3642620590LLU;
	uint32_t x514 = 309698802U;
	static uint64_t x515 = 9830085191623487LLU;
	static int32_t x516 = INT32_MIN;
	volatile uint64_t t128 = 16620773144LLU;

    t128 = (x513|(x514!=(x515>x516)));

    if (t128 != 3642620591LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x517 = UINT64_MAX;
	int32_t x518 = INT32_MIN;
	static uint8_t x519 = 0U;
	static uint8_t x520 = 0U;

    t129 = (x517|(x518!=(x519>x520)));

    if (t129 != UINT64_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = INT8_MIN;

    t130 = (x521|(x522!=(x523>x524)));

    if (t130 != -127) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x525 = UINT8_MAX;
	int16_t x526 = 667;
	int32_t x527 = -1;
	uint16_t x528 = UINT16_MAX;

    t131 = (x525|(x526!=(x527>x528)));

    if (t131 != 255) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x529 = 181827;
	uint8_t x530 = 6U;
	int64_t x531 = INT64_MAX;
	volatile uint64_t x532 = UINT64_MAX;
	static volatile int32_t t132 = 45039;

    t132 = (x529|(x530!=(x531>x532)));

    if (t132 != 181827) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x535 = INT32_MIN;
	int16_t x536 = INT16_MIN;
	volatile int32_t t133 = -1205;

    t133 = (x533|(x534!=(x535>x536)));

    if (t133 != 65535) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x537 = UINT8_MAX;
	volatile uint32_t x540 = 433523934U;
	static int32_t t134 = 1005074939;

    t134 = (x537|(x538!=(x539>x540)));

    if (t134 != 255) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = -470817891;
	static uint16_t x544 = 2U;

    t135 = (x541|(x542!=(x543>x544)));

    if (t135 != -470817891) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = INT32_MAX;
	uint32_t x546 = UINT32_MAX;
	uint64_t x548 = UINT64_MAX;
	int32_t t136 = INT32_MAX;

    t136 = (x545|(x546!=(x547>x548)));

    if (t136 != INT32_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x550 = UINT64_MAX;
	int32_t x551 = -1;
	volatile uint64_t t137 = UINT64_MAX;

    t137 = (x549|(x550!=(x551>x552)));

    if (t137 != UINT64_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = INT16_MIN;
	int64_t x555 = 1769LL;
	int32_t t138 = -412679095;

    t138 = (x553|(x554!=(x555>x556)));

    if (t138 != -32767) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint64_t x557 = UINT64_MAX;
	int16_t x558 = INT16_MIN;
	int8_t x559 = INT8_MAX;
	static uint64_t t139 = UINT64_MAX;

    t139 = (x557|(x558!=(x559>x560)));

    if (t139 != UINT64_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x561 = 221U;
	uint64_t x562 = UINT64_MAX;
	static int8_t x564 = -1;
	int32_t t140 = 7214;

    t140 = (x561|(x562!=(x563>x564)));

    if (t140 != 221) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x565 = -86169LL;
	uint16_t x566 = UINT16_MAX;
	int8_t x567 = INT8_MIN;
	static uint8_t x568 = UINT8_MAX;
	static volatile int64_t t141 = 1744LL;

    t141 = (x565|(x566!=(x567>x568)));

    if (t141 != -86169LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint32_t x569 = 5123090U;
	int32_t x571 = 0;
	volatile int32_t x572 = -1;
	uint32_t t142 = 580843U;

    t142 = (x569|(x570!=(x571>x572)));

    if (t142 != 5123091U) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x573 = 7;
	static int64_t x574 = INT64_MIN;
	volatile uint32_t x576 = UINT32_MAX;
	volatile int32_t t143 = 10728510;

    t143 = (x573|(x574!=(x575>x576)));

    if (t143 != 7) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = -1;
	uint64_t x579 = 274054956730LLU;
	static int32_t x580 = -8096;
	int32_t t144 = -1218;

    t144 = (x577|(x578!=(x579>x580)));

    if (t144 != -1) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = INT32_MAX;
	int8_t x583 = INT8_MAX;
	volatile int8_t x584 = INT8_MIN;
	volatile int32_t t145 = INT32_MAX;

    t145 = (x581|(x582!=(x583>x584)));

    if (t145 != INT32_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x585 = 57LL;
	static int16_t x586 = INT16_MAX;
	volatile uint32_t x587 = UINT32_MAX;
	volatile int32_t x588 = INT32_MAX;

    t146 = (x585|(x586!=(x587>x588)));

    if (t146 != 57LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x589 = -1;
	volatile uint16_t x590 = 5824U;
	int8_t x592 = INT8_MAX;
	volatile int32_t t147 = 426213;

    t147 = (x589|(x590!=(x591>x592)));

    if (t147 != -1) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = INT64_MAX;
	volatile int8_t x594 = INT8_MIN;
	int8_t x596 = INT8_MIN;
	volatile int64_t t148 = INT64_MAX;

    t148 = (x593|(x594!=(x595>x596)));

    if (t148 != INT64_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x598 = INT32_MAX;
	int8_t x599 = INT8_MIN;
	int64_t t149 = 1932LL;

    t149 = (x597|(x598!=(x599>x600)));

    if (t149 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x602 = -1;
	int16_t x603 = -1;
	uint64_t x604 = UINT64_MAX;
	static volatile int32_t t150 = 718;

    t150 = (x601|(x602!=(x603>x604)));

    if (t150 != -2147483647) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = INT64_MIN;
	static uint16_t x606 = 9U;
	int32_t x607 = INT32_MIN;
	volatile int16_t x608 = -10159;

    t151 = (x605|(x606!=(x607>x608)));

    if (t151 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x609 = UINT8_MAX;
	uint8_t x610 = 4U;
	int16_t x612 = 47;
	static int32_t t152 = -77677;

    t152 = (x609|(x610!=(x611>x612)));

    if (t152 != 255) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x613 = -1;
	static int8_t x614 = INT8_MIN;
	static int16_t x616 = -33;
	int32_t t153 = -1;

    t153 = (x613|(x614!=(x615>x616)));

    if (t153 != -1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x617 = -69818599522LL;
	uint16_t x618 = UINT16_MAX;
	static int32_t x619 = INT32_MIN;
	int32_t x620 = INT32_MIN;
	int64_t t154 = 16LL;

    t154 = (x617|(x618!=(x619>x620)));

    if (t154 != -69818599521LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x621 = -1;
	int16_t x622 = 501;
	volatile int8_t x623 = INT8_MIN;
	int8_t x624 = INT8_MIN;

    t155 = (x621|(x622!=(x623>x624)));

    if (t155 != -1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x625 = INT16_MAX;
	int16_t x626 = -1;
	uint64_t x627 = UINT64_MAX;
	int16_t x628 = -989;

    t156 = (x625|(x626!=(x627>x628)));

    if (t156 != 32767) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint8_t x629 = 69U;
	static volatile int8_t x630 = -1;
	uint8_t x632 = UINT8_MAX;
	int32_t t157 = -16023697;

    t157 = (x629|(x630!=(x631>x632)));

    if (t157 != 69) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = -3;
	int8_t x635 = 1;
	int8_t x636 = -1;
	volatile int32_t t158 = -117957;

    t158 = (x633|(x634!=(x635>x636)));

    if (t158 != -3) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x637 = INT64_MAX;
	static int16_t x639 = INT16_MAX;
	static volatile uint8_t x640 = UINT8_MAX;
	volatile int64_t t159 = INT64_MAX;

    t159 = (x637|(x638!=(x639>x640)));

    if (t159 != INT64_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x641 = -1;
	int8_t x642 = 1;
	int16_t x643 = -1;
	static uint32_t x644 = UINT32_MAX;
	int32_t t160 = -95;

    t160 = (x641|(x642!=(x643>x644)));

    if (t160 != -1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x645 = INT16_MAX;
	int32_t x646 = -1;
	int32_t x647 = INT32_MIN;
	int16_t x648 = -15;
	static volatile int32_t t161 = 211219534;

    t161 = (x645|(x646!=(x647>x648)));

    if (t161 != 32767) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x649 = 1439;
	int32_t x651 = INT32_MIN;
	int64_t x652 = 427530527LL;
	int32_t t162 = 41;

    t162 = (x649|(x650!=(x651>x652)));

    if (t162 != 1439) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x653 = -1333;
	int64_t x654 = INT64_MIN;
	int8_t x655 = INT8_MAX;
	uint32_t x656 = 2057627527U;
	volatile int32_t t163 = 59495653;

    t163 = (x653|(x654!=(x655>x656)));

    if (t163 != -1333) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x657 = INT64_MIN;
	volatile int16_t x658 = INT16_MAX;
	volatile uint8_t x659 = 125U;
	int64_t x660 = INT64_MAX;
	int64_t t164 = 1519741904531LL;

    t164 = (x657|(x658!=(x659>x660)));

    if (t164 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x661 = 1834U;
	uint32_t x662 = 1U;
	uint32_t x663 = UINT32_MAX;
	int64_t x664 = -1533457428817LL;
	volatile uint32_t t165 = 3U;

    t165 = (x661|(x662!=(x663>x664)));

    if (t165 != 1834U) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x665 = INT16_MAX;
	uint16_t x667 = UINT16_MAX;
	int64_t x668 = 1LL;
	static int32_t t166 = -2329;

    t166 = (x665|(x666!=(x667>x668)));

    if (t166 != 32767) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x669 = INT8_MAX;
	int32_t x670 = INT32_MIN;
	volatile int16_t x671 = INT16_MAX;
	static int64_t x672 = -190166713LL;
	volatile int32_t t167 = 18879;

    t167 = (x669|(x670!=(x671>x672)));

    if (t167 != 127) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x673 = UINT16_MAX;
	static volatile uint16_t x674 = UINT16_MAX;
	int64_t x675 = 920596507LL;
	int32_t x676 = -1246;

    t168 = (x673|(x674!=(x675>x676)));

    if (t168 != 65535) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x677 = 212LLU;
	uint64_t x678 = 113137LLU;
	volatile int64_t x679 = -1LL;
	volatile uint16_t x680 = 15543U;
	uint64_t t169 = 16954214LLU;

    t169 = (x677|(x678!=(x679>x680)));

    if (t169 != 213LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = -30079;
	int8_t x682 = INT8_MIN;
	int8_t x683 = 2;
	uint8_t x684 = 0U;

    t170 = (x681|(x682!=(x683>x684)));

    if (t170 != -30079) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x685 = UINT64_MAX;
	int16_t x687 = INT16_MAX;
	volatile uint16_t x688 = 3U;
	uint64_t t171 = UINT64_MAX;

    t171 = (x685|(x686!=(x687>x688)));

    if (t171 != UINT64_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x689 = INT64_MIN;
	int32_t x690 = INT32_MIN;
	int32_t x691 = -1;
	int16_t x692 = -1;
	int64_t t172 = -2273LL;

    t172 = (x689|(x690!=(x691>x692)));

    if (t172 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x694 = 83268578497830011LLU;
	static int8_t x696 = -1;
	int32_t t173 = 620327;

    t173 = (x693|(x694!=(x695>x696)));

    if (t173 != -1) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint8_t x697 = 0U;
	int32_t x700 = -139042;
	static int32_t t174 = -43727873;

    t174 = (x697|(x698!=(x699>x700)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x701 = INT8_MIN;
	int16_t x702 = INT16_MAX;
	volatile int64_t x703 = INT64_MIN;
	uint8_t x704 = UINT8_MAX;

    t175 = (x701|(x702!=(x703>x704)));

    if (t175 != -127) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x706 = INT16_MIN;
	int64_t x707 = -1LL;

    t176 = (x705|(x706!=(x707>x708)));

    if (t176 != -2147483647) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = INT16_MAX;
	volatile int8_t x710 = INT8_MIN;
	int32_t x711 = INT32_MIN;
	volatile int8_t x712 = INT8_MIN;

    t177 = (x709|(x710!=(x711>x712)));

    if (t177 != 32767) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = -3;
	static int32_t x714 = 2020;
	static uint32_t x715 = 9368896U;
	volatile int32_t t178 = -13869344;

    t178 = (x713|(x714!=(x715>x716)));

    if (t178 != -3) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int64_t x718 = 2146014874LL;
	int8_t x719 = INT8_MIN;
	static int16_t x720 = INT16_MIN;
	int32_t t179 = 7;

    t179 = (x717|(x718!=(x719>x720)));

    if (t179 != 2043) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x722 = -1;
	int8_t x723 = 0;
	volatile uint64_t t180 = 14913485839468852LLU;

    t180 = (x721|(x722!=(x723>x724)));

    if (t180 != 31LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int32_t x725 = INT32_MAX;
	int64_t x726 = INT64_MIN;
	int32_t x727 = -35647558;
	static int16_t x728 = INT16_MIN;

    t181 = (x725|(x726!=(x727>x728)));

    if (t181 != INT32_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x729 = INT32_MIN;
	volatile uint64_t x730 = 307209568630517LLU;
	int32_t x731 = -1;
	uint8_t x732 = 3U;
	static volatile int32_t t182 = -943;

    t182 = (x729|(x730!=(x731>x732)));

    if (t182 != -2147483647) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x734 = UINT32_MAX;
	uint64_t x736 = 39335954LLU;
	static int32_t t183 = 30941;

    t183 = (x733|(x734!=(x735>x736)));

    if (t183 != -127) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x737 = -2052;
	static int8_t x739 = INT8_MIN;
	static uint32_t x740 = UINT32_MAX;

    t184 = (x737|(x738!=(x739>x740)));

    if (t184 != -2051) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x741 = 6U;
	uint64_t x742 = 1927265179LLU;
	uint8_t x743 = UINT8_MAX;
	int32_t t185 = -114251562;

    t185 = (x741|(x742!=(x743>x744)));

    if (t185 != 7) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x746 = INT64_MAX;
	volatile int32_t x747 = INT32_MAX;
	static int32_t x748 = INT32_MIN;
	int32_t t186 = -29644;

    t186 = (x745|(x746!=(x747>x748)));

    if (t186 != 867) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x749 = 0;
	int8_t x750 = -3;
	uint8_t x752 = 0U;

    t187 = (x749|(x750!=(x751>x752)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile uint16_t x753 = UINT16_MAX;
	int8_t x754 = -23;
	int32_t x755 = -80522;
	volatile int8_t x756 = INT8_MIN;

    t188 = (x753|(x754!=(x755>x756)));

    if (t188 != 65535) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x757 = 13LLU;
	int16_t x758 = -7814;
	volatile uint64_t x759 = 32245837250590210LLU;
	int32_t x760 = INT32_MAX;
	static uint64_t t189 = 9172173725363531052LLU;

    t189 = (x757|(x758!=(x759>x760)));

    if (t189 != 13LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x761 = -1;
	int16_t x762 = -1;
	uint16_t x763 = 0U;
	volatile uint8_t x764 = 114U;
	volatile int32_t t190 = 776304984;

    t190 = (x761|(x762!=(x763>x764)));

    if (t190 != -1) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = INT8_MIN;
	static uint8_t x766 = 4U;
	int64_t x768 = INT64_MAX;

    t191 = (x765|(x766!=(x767>x768)));

    if (t191 != -127) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x769 = INT16_MAX;
	static int32_t t192 = -623;

    t192 = (x769|(x770!=(x771>x772)));

    if (t192 != 32767) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint32_t x773 = UINT32_MAX;
	int32_t x774 = -1;
	int8_t x775 = INT8_MIN;
	volatile uint8_t x776 = 11U;

    t193 = (x773|(x774!=(x775>x776)));

    if (t193 != UINT32_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x777 = INT8_MIN;
	int32_t x779 = 632966;
	uint8_t x780 = 1U;
	volatile int32_t t194 = -4;

    t194 = (x777|(x778!=(x779>x780)));

    if (t194 != -127) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x783 = INT8_MAX;
	volatile int32_t t195 = -30436716;

    t195 = (x781|(x782!=(x783>x784)));

    if (t195 != -32767) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x785 = 6U;
	static uint32_t x786 = 25U;
	static int16_t x788 = -1;
	int32_t t196 = 211;

    t196 = (x785|(x786!=(x787>x788)));

    if (t196 != 7) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x789 = INT16_MIN;
	int16_t x790 = 5;
	static volatile int64_t x792 = 317665143670LL;
	static int32_t t197 = -2259;

    t197 = (x789|(x790!=(x791>x792)));

    if (t197 != -32767) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x793 = INT16_MAX;
	int16_t x794 = INT16_MIN;
	volatile int8_t x795 = -17;
	static volatile int32_t x796 = INT32_MIN;
	int32_t t198 = 111074;

    t198 = (x793|(x794!=(x795>x796)));

    if (t198 != 32767) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int64_t x797 = INT64_MIN;
	volatile uint16_t x798 = UINT16_MAX;
	volatile int32_t x799 = -1;
	static int64_t x800 = INT64_MIN;
	int64_t t199 = -1878LL;

    t199 = (x797|(x798!=(x799>x800)));

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

