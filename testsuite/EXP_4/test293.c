
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

static int16_t x2 = INT16_MAX;
volatile int32_t x3 = INT32_MAX;
int16_t x5 = -1;
uint8_t x17 = 46U;
int32_t x20 = INT32_MIN;
int32_t t4 = -81349;
static int16_t x23 = INT16_MIN;
int16_t x31 = -1;
volatile uint32_t x32 = 350680930U;
int64_t x35 = INT64_MIN;
int64_t x40 = INT64_MIN;
int8_t x41 = INT8_MIN;
int32_t x53 = INT32_MAX;
int32_t t13 = INT32_MAX;
uint64_t x57 = 31759380932663976LLU;
int16_t x58 = INT16_MIN;
volatile uint64_t t14 = 19982LLU;
volatile uint32_t x63 = 13U;
int16_t x66 = INT16_MIN;
static uint8_t x68 = 1U;
int8_t x74 = INT8_MIN;
uint16_t x75 = UINT16_MAX;
static uint64_t x85 = 7449945146073100LLU;
volatile uint64_t t19 = 5601985182334LLU;
volatile int32_t x103 = INT32_MIN;
int16_t x104 = -2214;
uint32_t t24 = UINT32_MAX;
int32_t t26 = 34204112;
int64_t x121 = -1LL;
int32_t x126 = -1;
volatile int64_t t28 = -7LL;
int32_t t31 = 508748;
static int32_t x141 = -1;
uint8_t x145 = 15U;
static volatile int32_t x151 = INT32_MIN;
uint32_t x152 = 80495711U;
static int32_t t34 = INT32_MAX;
volatile int32_t x157 = -1;
int8_t x158 = -18;
uint32_t x160 = 3230136U;
int8_t x172 = INT8_MAX;
int32_t t39 = 204153;
volatile int8_t x174 = 5;
volatile int32_t t41 = 36726811;
int32_t t43 = -909798;
int16_t x193 = INT16_MIN;
volatile uint8_t x198 = 0U;
static uint32_t x202 = UINT32_MAX;
volatile uint32_t t46 = UINT32_MAX;
static int32_t x205 = -1;
volatile uint16_t x209 = 16176U;
volatile int32_t t48 = 1008777;
int16_t x213 = INT16_MAX;
uint16_t x219 = 910U;
volatile int16_t x229 = -1;
volatile int16_t x231 = INT16_MIN;
volatile int32_t t52 = -124199;
int16_t x234 = INT16_MIN;
static int32_t x239 = 0;
int32_t t54 = 62227398;
volatile int16_t x246 = -1;
int32_t x247 = INT32_MIN;
volatile uint64_t x250 = UINT64_MAX;
int32_t t59 = INT32_MAX;
int16_t x263 = INT16_MAX;
int16_t x264 = -2668;
volatile int32_t t62 = 0;
uint16_t x275 = 0U;
static int64_t t66 = -15LL;
volatile int16_t x290 = INT16_MAX;
int32_t t67 = -1126;
volatile int32_t t68 = 46;
uint8_t x300 = UINT8_MAX;
static volatile uint64_t x301 = UINT64_MAX;
int8_t x310 = INT8_MIN;
int8_t x318 = -1;
uint32_t x320 = UINT32_MAX;
int64_t x328 = -2922871LL;
uint16_t x335 = 1U;
int32_t t75 = 123923;
int32_t x340 = INT32_MAX;
int32_t x344 = 1;
volatile uint32_t t77 = 7583U;
static int16_t x353 = 7717;
uint32_t x359 = 57971777U;
int64_t x361 = INT64_MAX;
int16_t x367 = -1;
int16_t x375 = INT16_MIN;
uint64_t x378 = 115332827490296580LLU;
int8_t x382 = INT8_MIN;
int8_t x387 = INT8_MIN;
volatile uint16_t x388 = 2035U;
int16_t x389 = -576;
int32_t t89 = -50628;
int16_t x400 = -50;
volatile uint32_t t93 = 115U;
uint64_t x414 = 3LLU;
volatile int16_t x415 = 22;
volatile uint32_t x416 = 16858U;
volatile uint64_t t94 = 4330058808LLU;
int64_t x418 = -1LL;
uint8_t x420 = 91U;
uint8_t x421 = UINT8_MAX;
int32_t t96 = -8333217;
int32_t x443 = -1;
static uint32_t x449 = UINT32_MAX;
volatile int16_t x454 = -1679;
int32_t x455 = -1;
volatile int32_t t103 = 0;
uint16_t x465 = 0U;
volatile int8_t x475 = -1;
volatile uint32_t x479 = 0U;
volatile uint32_t x483 = UINT32_MAX;
int64_t x484 = INT64_MAX;
uint32_t x489 = 873106U;
volatile int32_t t112 = 1;
uint8_t x500 = 9U;
int8_t x504 = -1;
int32_t x506 = INT32_MIN;
volatile uint64_t t115 = 504923652LLU;
uint8_t x512 = 109U;
int16_t x514 = INT16_MIN;
static int64_t x542 = INT64_MIN;
uint64_t t123 = 11211LLU;
int64_t x550 = 274726386867189235LL;
uint64_t x551 = 79343125037438LLU;
int16_t x558 = -1;
volatile uint8_t x563 = 0U;
volatile int8_t x571 = INT8_MIN;
int32_t x572 = INT32_MIN;
volatile int64_t t129 = 0LL;
static int16_t x574 = 260;
volatile int32_t t130 = 0;
static uint8_t x581 = 0U;
static int8_t x584 = -6;
int32_t t132 = -48441;
int64_t x591 = -1LL;
int64_t x592 = INT64_MAX;
uint32_t x593 = UINT32_MAX;
volatile int64_t t135 = -3186734966LL;
uint64_t x605 = UINT64_MAX;
uint32_t x606 = UINT32_MAX;
volatile int32_t t138 = 3;
int16_t x613 = -1;
int32_t x616 = INT32_MIN;
static volatile int32_t t139 = -32905;
uint64_t x617 = 82758841LLU;
volatile int16_t x619 = INT16_MIN;
int8_t x621 = INT8_MIN;
uint64_t x624 = UINT64_MAX;
static volatile int32_t t141 = 346;
int64_t x626 = -1LL;
static int64_t x628 = -1LL;
volatile int32_t t142 = 541;
volatile uint32_t x631 = UINT32_MAX;
static volatile int16_t x633 = INT16_MIN;
int32_t t144 = 374811822;
int64_t x639 = INT64_MAX;
int64_t t145 = 454479LL;
static int8_t x641 = -1;
uint64_t x646 = 1038302828993LLU;
static volatile int16_t x648 = -1;
int64_t x655 = 242470LL;
static int8_t x659 = INT8_MIN;
int16_t x665 = -12;
uint8_t x669 = UINT8_MAX;
int32_t x674 = 79058;
int16_t x677 = 0;
int64_t x690 = 7353772571LL;
int16_t x695 = INT16_MIN;
static volatile int32_t t164 = -1;
volatile int64_t x725 = 535399279413870460LL;
volatile int32_t x732 = 14;
uint8_t x737 = UINT8_MAX;
volatile int64_t x738 = INT64_MIN;
volatile int8_t x739 = INT8_MIN;
volatile int32_t t169 = 94081;
volatile int32_t t170 = 2515;
volatile int8_t x746 = -1;
volatile int32_t t171 = -5;
volatile int32_t t172 = 53665503;
static volatile int32_t t175 = 0;
volatile int64_t t177 = -7LL;
volatile int64_t x776 = -30LL;
uint32_t x778 = 705109U;
static int8_t x781 = -1;
int64_t x782 = 2447341853206LL;
static int16_t x783 = INT16_MAX;
static volatile uint8_t x784 = 8U;
uint8_t x794 = 31U;
int8_t x795 = INT8_MIN;
int8_t x799 = -1;
uint32_t x800 = UINT32_MAX;
int16_t x803 = -1;
int32_t x806 = -3437742;
volatile int32_t t186 = 1972054;
int8_t x809 = INT8_MIN;
int16_t x813 = -10118;
static volatile int64_t x824 = -56083344LL;
int64_t x830 = INT64_MIN;
volatile int64_t x831 = -226664LL;
int8_t x839 = -1;
int32_t t194 = -65793;
volatile int32_t t195 = 21;
static int16_t x851 = INT16_MAX;
int64_t x855 = INT64_MAX;
volatile uint64_t x856 = 814LLU;


void f0(void) {
    	int64_t x1 = 7166403LL;
	volatile int16_t x4 = INT16_MAX;
	int64_t t0 = -339662332LL;

    t0 = (x1|(x2!=(x3-x4)));

    if (t0 != 7166403LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x6 = -1;
	int64_t x7 = -1LL;
	uint32_t x8 = UINT32_MAX;
	volatile int32_t t1 = -1;

    t1 = (x5|(x6!=(x7-x8)));

    if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = 1690;
	int8_t x10 = -10;
	static volatile int64_t x11 = 80024531LL;
	uint32_t x12 = 81498627U;
	static volatile int32_t t2 = -183;

    t2 = (x9|(x10!=(x11-x12)));

    if (t2 != 1691) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint8_t x13 = 118U;
	int64_t x14 = INT64_MIN;
	volatile int32_t x15 = 1;
	int16_t x16 = 796;
	volatile int32_t t3 = 535764;

    t3 = (x13|(x14!=(x15-x16)));

    if (t3 != 119) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x18 = INT8_MIN;
	volatile int64_t x19 = INT64_MIN;

    t4 = (x17|(x18!=(x19-x20)));

    if (t4 != 47) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = -3;
	uint16_t x22 = UINT16_MAX;
	static volatile uint32_t x24 = 70U;
	volatile int32_t t5 = 9;

    t5 = (x21|(x22!=(x23-x24)));

    if (t5 != -3) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int64_t x25 = INT64_MAX;
	int32_t x26 = -765046405;
	uint16_t x27 = UINT16_MAX;
	uint8_t x28 = 0U;
	static int64_t t6 = INT64_MAX;

    t6 = (x25|(x26!=(x27-x28)));

    if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x29 = INT64_MIN;
	static uint8_t x30 = 0U;
	int64_t t7 = 4370173693285LL;

    t7 = (x29|(x30!=(x31-x32)));

    if (t7 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x33 = INT8_MIN;
	int8_t x34 = INT8_MAX;
	int32_t x36 = -1;
	static volatile int32_t t8 = 1066960;

    t8 = (x33|(x34!=(x35-x36)));

    if (t8 != -127) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MIN;
	static uint16_t x38 = 178U;
	int32_t x39 = -4;
	int32_t t9 = 1;

    t9 = (x37|(x38!=(x39-x40)));

    if (t9 != -127) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x42 = INT8_MIN;
	int64_t x43 = -1LL;
	static uint32_t x44 = UINT32_MAX;
	static int32_t t10 = -2335;

    t10 = (x41|(x42!=(x43-x44)));

    if (t10 != -127) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x45 = 61351;
	volatile int16_t x46 = 7;
	uint32_t x47 = 6822U;
	int16_t x48 = -2286;
	volatile int32_t t11 = 361;

    t11 = (x45|(x46!=(x47-x48)));

    if (t11 != 61351) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = -1;
	int16_t x50 = 2;
	uint16_t x51 = UINT16_MAX;
	static int8_t x52 = INT8_MIN;
	volatile int32_t t12 = -950474;

    t12 = (x49|(x50!=(x51-x52)));

    if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x54 = INT64_MIN;
	uint16_t x55 = 107U;
	uint8_t x56 = 6U;

    t13 = (x53|(x54!=(x55-x56)));

    if (t13 != INT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x59 = 596484471382LL;
	int64_t x60 = INT64_MAX;

    t14 = (x57|(x58!=(x59-x60)));

    if (t14 != 31759380932663977LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x61 = UINT16_MAX;
	int64_t x62 = -824294740960LL;
	volatile int64_t x64 = -1490493753267896LL;
	volatile int32_t t15 = 482491;

    t15 = (x61|(x62!=(x63-x64)));

    if (t15 != 65535) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = -503566352977196853LL;
	int32_t x67 = 1;
	volatile int64_t t16 = 41072153290LL;

    t16 = (x65|(x66!=(x67-x68)));

    if (t16 != -503566352977196853LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint16_t x69 = 1725U;
	volatile int16_t x70 = -1;
	uint8_t x71 = 1U;
	int64_t x72 = 15582430LL;
	static volatile int32_t t17 = 65513190;

    t17 = (x69|(x70!=(x71-x72)));

    if (t17 != 1725) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = -1;
	static int16_t x76 = INT16_MIN;
	static int32_t t18 = -4;

    t18 = (x73|(x74!=(x75-x76)));

    if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x86 = INT16_MIN;
	int8_t x87 = INT8_MAX;
	int8_t x88 = INT8_MIN;

    t19 = (x85|(x86!=(x87-x88)));

    if (t19 != 7449945146073101LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x89 = UINT32_MAX;
	int32_t x90 = INT32_MIN;
	int8_t x91 = -3;
	volatile uint64_t x92 = 3423499219LLU;
	static volatile uint32_t t20 = UINT32_MAX;

    t20 = (x89|(x90!=(x91-x92)));

    if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x93 = 5409513LLU;
	uint8_t x94 = UINT8_MAX;
	int64_t x95 = INT64_MIN;
	volatile uint64_t x96 = UINT64_MAX;
	uint64_t t21 = 11006078677517101LLU;

    t21 = (x93|(x94!=(x95-x96)));

    if (t21 != 5409513LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x101 = UINT16_MAX;
	int64_t x102 = INT64_MIN;
	volatile int32_t t22 = 118;

    t22 = (x101|(x102!=(x103-x104)));

    if (t22 != 65535) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint8_t x105 = UINT8_MAX;
	int64_t x106 = -531310293LL;
	volatile uint16_t x107 = 5307U;
	uint32_t x108 = 13U;
	volatile int32_t t23 = 1704020;

    t23 = (x105|(x106!=(x107-x108)));

    if (t23 != 255) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x109 = UINT32_MAX;
	int32_t x110 = INT32_MAX;
	uint64_t x111 = 3906160047666798LLU;
	int64_t x112 = INT64_MAX;

    t24 = (x109|(x110!=(x111-x112)));

    if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x113 = 17U;
	static uint8_t x114 = 64U;
	static int64_t x115 = -1LL;
	uint16_t x116 = UINT16_MAX;
	volatile int32_t t25 = -1272016;

    t25 = (x113|(x114!=(x115-x116)));

    if (t25 != 17) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x117 = 2;
	static uint32_t x118 = UINT32_MAX;
	int64_t x119 = -1LL;
	int16_t x120 = 353;

    t26 = (x117|(x118!=(x119-x120)));

    if (t26 != 3) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x122 = INT32_MAX;
	int16_t x123 = -68;
	volatile int8_t x124 = 0;
	int64_t t27 = 2706LL;

    t27 = (x121|(x122!=(x123-x124)));

    if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x125 = -1LL;
	int16_t x127 = -1761;
	int64_t x128 = INT64_MIN;

    t28 = (x125|(x126!=(x127-x128)));

    if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x129 = INT16_MIN;
	int32_t x130 = 3648;
	volatile int32_t x131 = INT32_MIN;
	int64_t x132 = INT64_MIN;
	static volatile int32_t t29 = -9090286;

    t29 = (x129|(x130!=(x131-x132)));

    if (t29 != -32767) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x133 = 1462LL;
	uint64_t x134 = 448218055111500990LLU;
	int16_t x135 = -726;
	int8_t x136 = 1;
	static volatile int64_t t30 = 127LL;

    t30 = (x133|(x134!=(x135-x136)));

    if (t30 != 1463LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x137 = 1U;
	uint8_t x138 = 1U;
	int8_t x139 = -1;
	static uint16_t x140 = UINT16_MAX;

    t31 = (x137|(x138!=(x139-x140)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x142 = -1;
	int8_t x143 = INT8_MAX;
	static volatile int8_t x144 = INT8_MIN;
	int32_t t32 = -80226;

    t32 = (x141|(x142!=(x143-x144)));

    if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x146 = 9209625070LL;
	uint16_t x147 = 0U;
	int8_t x148 = 1;
	volatile int32_t t33 = -1;

    t33 = (x145|(x146!=(x147-x148)));

    if (t33 != 15) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x149 = INT32_MAX;
	uint8_t x150 = 28U;

    t34 = (x149|(x150!=(x151-x152)));

    if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile uint32_t x153 = 6634U;
	uint16_t x154 = UINT16_MAX;
	uint32_t x155 = UINT32_MAX;
	uint16_t x156 = 35U;
	volatile uint32_t t35 = 12666U;

    t35 = (x153|(x154!=(x155-x156)));

    if (t35 != 6635U) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint16_t x159 = 48U;
	static int32_t t36 = 3;

    t36 = (x157|(x158!=(x159-x160)));

    if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x161 = INT8_MIN;
	static int64_t x162 = 43LL;
	int32_t x163 = -1;
	static uint16_t x164 = 8550U;
	int32_t t37 = -919837752;

    t37 = (x161|(x162!=(x163-x164)));

    if (t37 != -127) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x165 = INT32_MAX;
	int32_t x166 = INT32_MAX;
	int8_t x167 = -1;
	uint64_t x168 = UINT64_MAX;
	static int32_t t38 = INT32_MAX;

    t38 = (x165|(x166!=(x167-x168)));

    if (t38 != INT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x169 = -23708170;
	int64_t x170 = INT64_MIN;
	int64_t x171 = -821585461226665814LL;

    t39 = (x169|(x170!=(x171-x172)));

    if (t39 != -23708169) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x173 = INT64_MIN;
	int8_t x175 = -1;
	int8_t x176 = 0;
	static int64_t t40 = 344LL;

    t40 = (x173|(x174!=(x175-x176)));

    if (t40 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static int8_t x177 = 10;
	static uint8_t x178 = 1U;
	uint32_t x179 = 15U;
	static uint8_t x180 = UINT8_MAX;

    t41 = (x177|(x178!=(x179-x180)));

    if (t41 != 11) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x181 = 30U;
	volatile int16_t x182 = INT16_MIN;
	int64_t x183 = INT64_MIN;
	static int64_t x184 = INT64_MIN;
	volatile int32_t t42 = -3443;

    t42 = (x181|(x182!=(x183-x184)));

    if (t42 != 31) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint8_t x189 = UINT8_MAX;
	int32_t x190 = -1;
	int64_t x191 = INT64_MIN;
	static int32_t x192 = INT32_MIN;

    t43 = (x189|(x190!=(x191-x192)));

    if (t43 != 255) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x194 = 199;
	int32_t x195 = INT32_MAX;
	uint8_t x196 = 4U;
	int32_t t44 = -8;

    t44 = (x193|(x194!=(x195-x196)));

    if (t44 != -32767) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x197 = INT32_MIN;
	int8_t x199 = -3;
	uint16_t x200 = 3U;
	int32_t t45 = 227602809;

    t45 = (x197|(x198!=(x199-x200)));

    if (t45 != -2147483647) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint32_t x201 = UINT32_MAX;
	static uint16_t x203 = 10495U;
	static uint16_t x204 = UINT16_MAX;

    t46 = (x201|(x202!=(x203-x204)));

    if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x206 = -120;
	volatile int64_t x207 = -1LL;
	int16_t x208 = INT16_MIN;
	volatile int32_t t47 = 35;

    t47 = (x205|(x206!=(x207-x208)));

    if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x210 = INT16_MIN;
	int32_t x211 = INT32_MIN;
	static uint32_t x212 = 0U;

    t48 = (x209|(x210!=(x211-x212)));

    if (t48 != 16177) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile uint16_t x214 = UINT16_MAX;
	int16_t x215 = -1;
	uint64_t x216 = UINT64_MAX;
	int32_t t49 = 891;

    t49 = (x213|(x214!=(x215-x216)));

    if (t49 != 32767) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint64_t x217 = 3617LLU;
	static int64_t x218 = INT64_MAX;
	uint16_t x220 = UINT16_MAX;
	static uint64_t t50 = 3310386464190204LLU;

    t50 = (x217|(x218!=(x219-x220)));

    if (t50 != 3617LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint16_t x221 = 3U;
	int64_t x222 = 55252092LL;
	uint64_t x223 = UINT64_MAX;
	uint32_t x224 = 10593U;
	int32_t t51 = 1;

    t51 = (x221|(x222!=(x223-x224)));

    if (t51 != 3) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x230 = INT8_MAX;
	int16_t x232 = INT16_MIN;

    t52 = (x229|(x230!=(x231-x232)));

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint8_t x233 = 1U;
	static int32_t x235 = INT32_MIN;
	int8_t x236 = -1;
	int32_t t53 = 319060613;

    t53 = (x233|(x234!=(x235-x236)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x237 = -1;
	static uint8_t x238 = UINT8_MAX;
	static volatile int64_t x240 = INT64_MAX;

    t54 = (x237|(x238!=(x239-x240)));

    if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x241 = 71216175LLU;
	int64_t x242 = -1LL;
	uint64_t x243 = 127299654587LLU;
	static int16_t x244 = -75;
	uint64_t t55 = 8303185LLU;

    t55 = (x241|(x242!=(x243-x244)));

    if (t55 != 71216175LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x245 = 1370U;
	int8_t x248 = -1;
	volatile int32_t t56 = 4;

    t56 = (x245|(x246!=(x247-x248)));

    if (t56 != 1371) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int8_t x249 = -1;
	static int16_t x251 = -743;
	static volatile uint16_t x252 = UINT16_MAX;
	volatile int32_t t57 = -1;

    t57 = (x249|(x250!=(x251-x252)));

    if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x253 = 603;
	static uint64_t x254 = 446035676155963LLU;
	static uint8_t x255 = 6U;
	volatile uint16_t x256 = 53U;
	static volatile int32_t t58 = -391114;

    t58 = (x253|(x254!=(x255-x256)));

    if (t58 != 603) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x257 = INT32_MAX;
	uint16_t x258 = 22U;
	static int8_t x259 = INT8_MAX;
	static int16_t x260 = -124;

    t59 = (x257|(x258!=(x259-x260)));

    if (t59 != INT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x261 = UINT16_MAX;
	int32_t x262 = INT32_MAX;
	static volatile int32_t t60 = -12076;

    t60 = (x261|(x262!=(x263-x264)));

    if (t60 != 65535) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x265 = UINT16_MAX;
	static int32_t x266 = 618195683;
	int64_t x267 = INT64_MIN;
	int32_t x268 = -1;
	int32_t t61 = 90438062;

    t61 = (x265|(x266!=(x267-x268)));

    if (t61 != 65535) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x269 = 151855134;
	volatile int16_t x270 = INT16_MIN;
	static uint32_t x271 = 7U;
	uint64_t x272 = 11483621796LLU;

    t62 = (x269|(x270!=(x271-x272)));

    if (t62 != 151855135) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x273 = 0U;
	uint8_t x274 = 33U;
	int16_t x276 = 2300;
	int32_t t63 = 115869327;

    t63 = (x273|(x274!=(x275-x276)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int32_t x277 = 1365;
	uint16_t x278 = UINT16_MAX;
	int16_t x279 = -8083;
	int8_t x280 = INT8_MAX;
	static volatile int32_t t64 = 44610;

    t64 = (x277|(x278!=(x279-x280)));

    if (t64 != 1365) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x281 = -1;
	int64_t x282 = 104851871543432LL;
	static int16_t x283 = 2676;
	uint8_t x284 = 3U;
	int32_t t65 = 91825;

    t65 = (x281|(x282!=(x283-x284)));

    if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x285 = -1LL;
	int16_t x286 = INT16_MAX;
	static int16_t x287 = INT16_MAX;
	int8_t x288 = INT8_MAX;

    t66 = (x285|(x286!=(x287-x288)));

    if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x289 = 86U;
	static int8_t x291 = 23;
	int16_t x292 = INT16_MAX;

    t67 = (x289|(x290!=(x291-x292)));

    if (t67 != 87) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x293 = INT8_MIN;
	volatile int16_t x294 = INT16_MIN;
	int32_t x295 = 93;
	volatile int8_t x296 = 47;

    t68 = (x293|(x294!=(x295-x296)));

    if (t68 != -127) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x297 = 0;
	int32_t x298 = INT32_MIN;
	uint32_t x299 = 26U;
	volatile int32_t t69 = -2079;

    t69 = (x297|(x298!=(x299-x300)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x302 = 63610105711545926LLU;
	uint16_t x303 = UINT16_MAX;
	int64_t x304 = -30614LL;
	uint64_t t70 = UINT64_MAX;

    t70 = (x301|(x302!=(x303-x304)));

    if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x309 = INT16_MAX;
	static int64_t x311 = INT64_MAX;
	uint64_t x312 = 97839125545686LLU;
	volatile int32_t t71 = -111;

    t71 = (x309|(x310!=(x311-x312)));

    if (t71 != 32767) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x313 = INT32_MIN;
	uint8_t x314 = UINT8_MAX;
	int64_t x315 = -1LL;
	int32_t x316 = INT32_MIN;
	volatile int32_t t72 = -6;

    t72 = (x313|(x314!=(x315-x316)));

    if (t72 != -2147483647) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint32_t x317 = 18798466U;
	uint8_t x319 = UINT8_MAX;
	volatile uint32_t t73 = 129369U;

    t73 = (x317|(x318!=(x319-x320)));

    if (t73 != 18798467U) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x325 = -1;
	int16_t x326 = INT16_MIN;
	int32_t x327 = 18;
	volatile int32_t t74 = 14034257;

    t74 = (x325|(x326!=(x327-x328)));

    if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x333 = INT8_MIN;
	static int8_t x334 = 31;
	uint16_t x336 = UINT16_MAX;

    t75 = (x333|(x334!=(x335-x336)));

    if (t75 != -127) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int8_t x337 = INT8_MIN;
	uint32_t x338 = UINT32_MAX;
	int32_t x339 = INT32_MAX;
	int32_t t76 = 31532;

    t76 = (x337|(x338!=(x339-x340)));

    if (t76 != -127) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x341 = 9620896U;
	uint32_t x342 = 3637333U;
	int16_t x343 = INT16_MAX;

    t77 = (x341|(x342!=(x343-x344)));

    if (t77 != 9620897U) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x345 = -420144316;
	static int16_t x346 = INT16_MAX;
	int64_t x347 = -34630110875LL;
	uint8_t x348 = 8U;
	int32_t t78 = 160405;

    t78 = (x345|(x346!=(x347-x348)));

    if (t78 != -420144315) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint32_t x349 = 34964U;
	static volatile uint8_t x350 = 12U;
	uint16_t x351 = UINT16_MAX;
	int32_t x352 = -345283;
	uint32_t t79 = 1684688U;

    t79 = (x349|(x350!=(x351-x352)));

    if (t79 != 34965U) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint64_t x354 = 886655244952369816LLU;
	int64_t x355 = INT64_MAX;
	int8_t x356 = INT8_MAX;
	int32_t t80 = -823;

    t80 = (x353|(x354!=(x355-x356)));

    if (t80 != 7717) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x357 = INT8_MIN;
	int64_t x358 = INT64_MIN;
	uint16_t x360 = 3527U;
	static volatile int32_t t81 = 27495;

    t81 = (x357|(x358!=(x359-x360)));

    if (t81 != -127) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x362 = 4;
	int32_t x363 = -264018911;
	int8_t x364 = INT8_MIN;
	static int64_t t82 = INT64_MAX;

    t82 = (x361|(x362!=(x363-x364)));

    if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x365 = INT32_MAX;
	volatile uint8_t x366 = UINT8_MAX;
	uint64_t x368 = 3431618387109620LLU;
	volatile int32_t t83 = INT32_MAX;

    t83 = (x365|(x366!=(x367-x368)));

    if (t83 != INT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x369 = 15561426LL;
	int32_t x370 = 70950485;
	volatile int16_t x371 = 1;
	int8_t x372 = INT8_MIN;
	int64_t t84 = 159LL;

    t84 = (x369|(x370!=(x371-x372)));

    if (t84 != 15561427LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x373 = INT32_MAX;
	int16_t x374 = -1;
	static int32_t x376 = -1;
	volatile int32_t t85 = INT32_MAX;

    t85 = (x373|(x374!=(x375-x376)));

    if (t85 != INT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x377 = -10;
	int32_t x379 = 3;
	static volatile int16_t x380 = -1740;
	int32_t t86 = -49856;

    t86 = (x377|(x378!=(x379-x380)));

    if (t86 != -9) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x381 = 3U;
	volatile int8_t x383 = -1;
	int32_t x384 = -1;
	static volatile int32_t t87 = -9;

    t87 = (x381|(x382!=(x383-x384)));

    if (t87 != 3) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x385 = INT32_MIN;
	int64_t x386 = -1LL;
	static int32_t t88 = 623025715;

    t88 = (x385|(x386!=(x387-x388)));

    if (t88 != -2147483647) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x390 = 4994618848407LLU;
	volatile uint8_t x391 = 1U;
	int8_t x392 = INT8_MAX;

    t89 = (x389|(x390!=(x391-x392)));

    if (t89 != -575) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x393 = UINT32_MAX;
	int64_t x394 = 35765340LL;
	static uint16_t x395 = 1U;
	static volatile uint8_t x396 = 1U;
	static volatile uint32_t t90 = UINT32_MAX;

    t90 = (x393|(x394!=(x395-x396)));

    if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x397 = INT16_MIN;
	int16_t x398 = INT16_MIN;
	volatile int16_t x399 = INT16_MIN;
	volatile int32_t t91 = 848175;

    t91 = (x397|(x398!=(x399-x400)));

    if (t91 != -32767) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x405 = INT64_MIN;
	int8_t x406 = -1;
	static uint64_t x407 = 81621019295LLU;
	uint16_t x408 = 21U;
	int64_t t92 = 820LL;

    t92 = (x405|(x406!=(x407-x408)));

    if (t92 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint32_t x409 = 30101U;
	int64_t x410 = INT64_MAX;
	int32_t x411 = -1;
	uint32_t x412 = UINT32_MAX;

    t93 = (x409|(x410!=(x411-x412)));

    if (t93 != 30101U) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint64_t x413 = 293966LLU;

    t94 = (x413|(x414!=(x415-x416)));

    if (t94 != 293967LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x417 = -1;
	int16_t x419 = INT16_MIN;
	static volatile int32_t t95 = -1;

    t95 = (x417|(x418!=(x419-x420)));

    if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x422 = UINT32_MAX;
	volatile int16_t x423 = INT16_MIN;
	int32_t x424 = -14767137;

    t96 = (x421|(x422!=(x423-x424)));

    if (t96 != 255) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x425 = UINT16_MAX;
	uint64_t x426 = 4314LLU;
	int8_t x427 = INT8_MIN;
	int32_t x428 = -62732928;
	volatile int32_t t97 = 2918;

    t97 = (x425|(x426!=(x427-x428)));

    if (t97 != 65535) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x429 = UINT16_MAX;
	volatile int64_t x430 = INT64_MAX;
	static int16_t x431 = 3971;
	volatile int8_t x432 = INT8_MIN;
	int32_t t98 = 863307064;

    t98 = (x429|(x430!=(x431-x432)));

    if (t98 != 65535) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x433 = UINT16_MAX;
	int16_t x434 = INT16_MIN;
	int32_t x435 = 1;
	int64_t x436 = -2LL;
	volatile int32_t t99 = 125522;

    t99 = (x433|(x434!=(x435-x436)));

    if (t99 != 65535) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x441 = INT8_MIN;
	static volatile uint32_t x442 = 63173U;
	volatile int64_t x444 = -1LL;
	volatile int32_t t100 = 0;

    t100 = (x441|(x442!=(x443-x444)));

    if (t100 != -127) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x445 = INT8_MIN;
	uint8_t x446 = 42U;
	uint64_t x447 = 66153002LLU;
	int16_t x448 = INT16_MIN;
	volatile int32_t t101 = -15;

    t101 = (x445|(x446!=(x447-x448)));

    if (t101 != -127) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x450 = INT16_MIN;
	volatile int32_t x451 = 331123;
	int8_t x452 = INT8_MAX;
	static volatile uint32_t t102 = UINT32_MAX;

    t102 = (x449|(x450!=(x451-x452)));

    if (t102 != UINT32_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x453 = INT8_MAX;
	uint64_t x456 = UINT64_MAX;

    t103 = (x453|(x454!=(x455-x456)));

    if (t103 != 127) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x457 = -1LL;
	int64_t x458 = -904480823969254049LL;
	uint64_t x459 = 2LLU;
	uint8_t x460 = 5U;
	volatile int64_t t104 = -19569889619LL;

    t104 = (x457|(x458!=(x459-x460)));

    if (t104 != -1LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x461 = 10U;
	int32_t x462 = -1;
	volatile int8_t x463 = 45;
	volatile int32_t x464 = 12783581;
	volatile uint32_t t105 = 35723U;

    t105 = (x461|(x462!=(x463-x464)));

    if (t105 != 11U) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x466 = INT32_MIN;
	int32_t x467 = -1;
	int64_t x468 = INT64_MIN;
	int32_t t106 = 54197;

    t106 = (x465|(x466!=(x467-x468)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x473 = -8733;
	int32_t x474 = INT32_MIN;
	int64_t x476 = -1115319014580914177LL;
	volatile int32_t t107 = 7155591;

    t107 = (x473|(x474!=(x475-x476)));

    if (t107 != -8733) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x477 = 6U;
	int32_t x478 = INT32_MIN;
	uint8_t x480 = 15U;
	uint32_t t108 = 428U;

    t108 = (x477|(x478!=(x479-x480)));

    if (t108 != 7U) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x481 = INT8_MAX;
	static int32_t x482 = INT32_MIN;
	int32_t t109 = -7937326;

    t109 = (x481|(x482!=(x483-x484)));

    if (t109 != 127) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x485 = INT32_MIN;
	uint64_t x486 = 1LLU;
	static volatile int64_t x487 = INT64_MIN;
	uint64_t x488 = UINT64_MAX;
	int32_t t110 = -4;

    t110 = (x485|(x486!=(x487-x488)));

    if (t110 != -2147483647) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x490 = -593006LL;
	int8_t x491 = -1;
	int64_t x492 = -30LL;
	volatile uint32_t t111 = 229814623U;

    t111 = (x489|(x490!=(x491-x492)));

    if (t111 != 873107U) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x493 = INT32_MIN;
	volatile int8_t x494 = INT8_MAX;
	int16_t x495 = -1;
	int16_t x496 = 69;

    t112 = (x493|(x494!=(x495-x496)));

    if (t112 != -2147483647) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x497 = INT64_MIN;
	int64_t x498 = INT64_MAX;
	uint8_t x499 = UINT8_MAX;
	volatile int64_t t113 = -8816370846578LL;

    t113 = (x497|(x498!=(x499-x500)));

    if (t113 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int16_t x501 = 223;
	uint32_t x502 = UINT32_MAX;
	int8_t x503 = INT8_MIN;
	int32_t t114 = 7;

    t114 = (x501|(x502!=(x503-x504)));

    if (t114 != 223) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x505 = 15219LLU;
	int8_t x507 = INT8_MIN;
	int64_t x508 = INT64_MIN;

    t115 = (x505|(x506!=(x507-x508)));

    if (t115 != 15219LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x509 = 12035;
	int16_t x510 = INT16_MAX;
	uint8_t x511 = 0U;
	volatile int32_t t116 = 8433;

    t116 = (x509|(x510!=(x511-x512)));

    if (t116 != 12035) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x513 = 12U;
	static int64_t x515 = INT64_MIN;
	int16_t x516 = INT16_MIN;
	static volatile int32_t t117 = -206523;

    t117 = (x513|(x514!=(x515-x516)));

    if (t117 != 13) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x525 = INT64_MIN;
	uint32_t x526 = UINT32_MAX;
	static uint8_t x527 = 1U;
	int64_t x528 = -1537155872199371LL;
	int64_t t118 = -11316190098LL;

    t118 = (x525|(x526!=(x527-x528)));

    if (t118 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x529 = 92253LL;
	int16_t x530 = INT16_MIN;
	int16_t x531 = INT16_MAX;
	int32_t x532 = INT32_MAX;
	volatile int64_t t119 = -3048LL;

    t119 = (x529|(x530!=(x531-x532)));

    if (t119 != 92253LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x533 = -2;
	static int64_t x534 = INT64_MIN;
	int16_t x535 = INT16_MAX;
	static uint64_t x536 = UINT64_MAX;
	int32_t t120 = 7227148;

    t120 = (x533|(x534!=(x535-x536)));

    if (t120 != -1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x537 = INT8_MIN;
	int64_t x538 = -48LL;
	int8_t x539 = 1;
	int8_t x540 = -50;
	volatile int32_t t121 = -453496028;

    t121 = (x537|(x538!=(x539-x540)));

    if (t121 != -127) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x541 = 3590U;
	int16_t x543 = INT16_MIN;
	int32_t x544 = 116298;
	uint32_t t122 = 7069U;

    t122 = (x541|(x542!=(x543-x544)));

    if (t122 != 3591U) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x545 = 46497146730056LLU;
	static int64_t x546 = INT64_MAX;
	int8_t x547 = -7;
	uint64_t x548 = UINT64_MAX;

    t123 = (x545|(x546!=(x547-x548)));

    if (t123 != 46497146730057LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x549 = INT64_MIN;
	int8_t x552 = -1;
	static int64_t t124 = 110LL;

    t124 = (x549|(x550!=(x551-x552)));

    if (t124 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x553 = INT64_MIN;
	volatile int8_t x554 = -1;
	volatile uint16_t x555 = 2616U;
	static volatile uint16_t x556 = UINT16_MAX;
	static int64_t t125 = -2003LL;

    t125 = (x553|(x554!=(x555-x556)));

    if (t125 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint32_t x557 = 1U;
	uint8_t x559 = 3U;
	uint64_t x560 = UINT64_MAX;
	volatile uint32_t t126 = 1039144816U;

    t126 = (x557|(x558!=(x559-x560)));

    if (t126 != 1U) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x561 = INT16_MIN;
	int32_t x562 = INT32_MIN;
	int8_t x564 = INT8_MIN;
	volatile int32_t t127 = 2008;

    t127 = (x561|(x562!=(x563-x564)));

    if (t127 != -32767) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x565 = INT8_MIN;
	int64_t x566 = 16014778LL;
	static int32_t x567 = INT32_MAX;
	uint16_t x568 = 730U;
	volatile int32_t t128 = 1;

    t128 = (x565|(x566!=(x567-x568)));

    if (t128 != -127) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x569 = 2148098840838655LL;
	static volatile int16_t x570 = INT16_MIN;

    t129 = (x569|(x570!=(x571-x572)));

    if (t129 != 2148098840838655LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x573 = INT8_MIN;
	int8_t x575 = -1;
	uint16_t x576 = 1858U;

    t130 = (x573|(x574!=(x575-x576)));

    if (t130 != -127) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x577 = UINT32_MAX;
	static int8_t x578 = INT8_MIN;
	static int64_t x579 = INT64_MIN;
	static int32_t x580 = INT32_MIN;
	volatile uint32_t t131 = UINT32_MAX;

    t131 = (x577|(x578!=(x579-x580)));

    if (t131 != UINT32_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x582 = INT16_MIN;
	volatile uint64_t x583 = 3685948622583352LLU;

    t132 = (x581|(x582!=(x583-x584)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x589 = 2U;
	int64_t x590 = INT64_MAX;
	static int32_t t133 = 38911595;

    t133 = (x589|(x590!=(x591-x592)));

    if (t133 != 3) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x594 = UINT8_MAX;
	uint8_t x595 = 1U;
	uint64_t x596 = UINT64_MAX;
	volatile uint32_t t134 = UINT32_MAX;

    t134 = (x593|(x594!=(x595-x596)));

    if (t134 != UINT32_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x597 = -1LL;
	uint64_t x598 = 8351656883321LLU;
	volatile int8_t x599 = INT8_MAX;
	int64_t x600 = INT64_MAX;

    t135 = (x597|(x598!=(x599-x600)));

    if (t135 != -1LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x601 = -1LL;
	volatile uint16_t x602 = UINT16_MAX;
	int16_t x603 = INT16_MAX;
	int8_t x604 = INT8_MIN;
	volatile int64_t t136 = -157500314363072LL;

    t136 = (x601|(x602!=(x603-x604)));

    if (t136 != -1LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint16_t x607 = 2414U;
	static int32_t x608 = -1;
	uint64_t t137 = UINT64_MAX;

    t137 = (x605|(x606!=(x607-x608)));

    if (t137 != UINT64_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x609 = -1;
	int32_t x610 = -1;
	int32_t x611 = 202555;
	int8_t x612 = INT8_MIN;

    t138 = (x609|(x610!=(x611-x612)));

    if (t138 != -1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x614 = INT64_MIN;
	static uint64_t x615 = UINT64_MAX;

    t139 = (x613|(x614!=(x615-x616)));

    if (t139 != -1) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x618 = INT8_MIN;
	int32_t x620 = -48830;
	uint64_t t140 = 1747LLU;

    t140 = (x617|(x618!=(x619-x620)));

    if (t140 != 82758841LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x622 = 9739U;
	volatile uint16_t x623 = UINT16_MAX;

    t141 = (x621|(x622!=(x623-x624)));

    if (t141 != -127) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x625 = -1;
	static int64_t x627 = INT64_MIN;

    t142 = (x625|(x626!=(x627-x628)));

    if (t142 != -1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x629 = INT8_MAX;
	int16_t x630 = INT16_MIN;
	uint32_t x632 = 849U;
	int32_t t143 = -96;

    t143 = (x629|(x630!=(x631-x632)));

    if (t143 != 127) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x634 = 8U;
	static int32_t x635 = -60;
	static int32_t x636 = 8;

    t144 = (x633|(x634!=(x635-x636)));

    if (t144 != -32767) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x637 = 110LL;
	static volatile int32_t x638 = -627;
	volatile int64_t x640 = INT64_MAX;

    t145 = (x637|(x638!=(x639-x640)));

    if (t145 != 111LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x642 = INT32_MIN;
	static volatile int32_t x643 = -1;
	int16_t x644 = INT16_MIN;
	int32_t t146 = 1;

    t146 = (x641|(x642!=(x643-x644)));

    if (t146 != -1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x645 = UINT16_MAX;
	int8_t x647 = 2;
	static int32_t t147 = -3078;

    t147 = (x645|(x646!=(x647-x648)));

    if (t147 != 65535) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x653 = INT32_MAX;
	volatile uint64_t x654 = 1LLU;
	static uint32_t x656 = 149985800U;
	volatile int32_t t148 = INT32_MAX;

    t148 = (x653|(x654!=(x655-x656)));

    if (t148 != INT32_MAX) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x657 = 12;
	int64_t x658 = INT64_MAX;
	int16_t x660 = 1;
	int32_t t149 = 31129;

    t149 = (x657|(x658!=(x659-x660)));

    if (t149 != 13) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint64_t x661 = UINT64_MAX;
	static int32_t x662 = INT32_MIN;
	int16_t x663 = -3381;
	static volatile uint8_t x664 = 7U;
	volatile uint64_t t150 = UINT64_MAX;

    t150 = (x661|(x662!=(x663-x664)));

    if (t150 != UINT64_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x666 = 12;
	volatile uint16_t x667 = 23509U;
	static uint16_t x668 = UINT16_MAX;
	int32_t t151 = -1;

    t151 = (x665|(x666!=(x667-x668)));

    if (t151 != -11) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x670 = 3490151314656LLU;
	static uint16_t x671 = 14557U;
	static volatile uint16_t x672 = 7U;
	volatile int32_t t152 = -34122;

    t152 = (x669|(x670!=(x671-x672)));

    if (t152 != 255) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x673 = INT8_MAX;
	uint8_t x675 = 34U;
	int32_t x676 = -1;
	int32_t t153 = 750195;

    t153 = (x673|(x674!=(x675-x676)));

    if (t153 != 127) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint16_t x678 = 1U;
	int64_t x679 = INT64_MAX;
	uint8_t x680 = 1U;
	volatile int32_t t154 = 2350887;

    t154 = (x677|(x678!=(x679-x680)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x681 = INT8_MAX;
	static uint64_t x682 = UINT64_MAX;
	int8_t x683 = -1;
	volatile int32_t x684 = INT32_MIN;
	int32_t t155 = -2465;

    t155 = (x681|(x682!=(x683-x684)));

    if (t155 != 127) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x685 = INT32_MAX;
	int8_t x686 = 0;
	static uint64_t x687 = UINT64_MAX;
	volatile int32_t x688 = INT32_MIN;
	volatile int32_t t156 = INT32_MAX;

    t156 = (x685|(x686!=(x687-x688)));

    if (t156 != INT32_MAX) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile uint32_t x689 = UINT32_MAX;
	uint32_t x691 = 588U;
	uint8_t x692 = 17U;
	volatile uint32_t t157 = UINT32_MAX;

    t157 = (x689|(x690!=(x691-x692)));

    if (t157 != UINT32_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x693 = INT8_MIN;
	static uint16_t x694 = 16522U;
	int32_t x696 = INT32_MIN;
	volatile int32_t t158 = 19;

    t158 = (x693|(x694!=(x695-x696)));

    if (t158 != -127) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x697 = -1;
	int8_t x698 = 1;
	int8_t x699 = -1;
	int8_t x700 = 2;
	int32_t t159 = 0;

    t159 = (x697|(x698!=(x699-x700)));

    if (t159 != -1) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x701 = -1;
	static uint8_t x702 = UINT8_MAX;
	volatile int32_t x703 = 3085798;
	uint8_t x704 = 22U;
	volatile int32_t t160 = 6;

    t160 = (x701|(x702!=(x703-x704)));

    if (t160 != -1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x705 = INT8_MIN;
	int8_t x706 = 1;
	int32_t x707 = -309223;
	int16_t x708 = INT16_MAX;
	volatile int32_t t161 = 26961937;

    t161 = (x705|(x706!=(x707-x708)));

    if (t161 != -127) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x709 = INT16_MAX;
	volatile uint32_t x710 = UINT32_MAX;
	static volatile int16_t x711 = INT16_MIN;
	uint64_t x712 = UINT64_MAX;
	volatile int32_t t162 = 3;

    t162 = (x709|(x710!=(x711-x712)));

    if (t162 != 32767) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x713 = INT16_MIN;
	int32_t x714 = -1;
	uint64_t x715 = UINT64_MAX;
	volatile int8_t x716 = INT8_MAX;
	int32_t t163 = 1303;

    t163 = (x713|(x714!=(x715-x716)));

    if (t163 != -32767) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x717 = -1;
	static int8_t x718 = INT8_MIN;
	uint8_t x719 = UINT8_MAX;
	int32_t x720 = 1481;

    t164 = (x717|(x718!=(x719-x720)));

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x721 = INT64_MIN;
	int16_t x722 = INT16_MIN;
	int16_t x723 = INT16_MIN;
	uint16_t x724 = UINT16_MAX;
	int64_t t165 = 46488187906LL;

    t165 = (x721|(x722!=(x723-x724)));

    if (t165 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint8_t x726 = UINT8_MAX;
	volatile int32_t x727 = INT32_MIN;
	int64_t x728 = -913LL;
	int64_t t166 = 90143193661464LL;

    t166 = (x725|(x726!=(x727-x728)));

    if (t166 != 535399279413870461LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x729 = UINT32_MAX;
	uint64_t x730 = UINT64_MAX;
	uint8_t x731 = UINT8_MAX;
	uint32_t t167 = UINT32_MAX;

    t167 = (x729|(x730!=(x731-x732)));

    if (t167 != UINT32_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x733 = INT32_MIN;
	volatile uint64_t x734 = 13377820775671LLU;
	static int8_t x735 = INT8_MIN;
	int8_t x736 = INT8_MIN;
	static volatile int32_t t168 = 2116;

    t168 = (x733|(x734!=(x735-x736)));

    if (t168 != -2147483647) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x740 = -946;

    t169 = (x737|(x738!=(x739-x740)));

    if (t169 != 255) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x741 = -1;
	volatile uint16_t x742 = 5784U;
	uint64_t x743 = 1LLU;
	uint16_t x744 = 96U;

    t170 = (x741|(x742!=(x743-x744)));

    if (t170 != -1) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x745 = INT8_MIN;
	uint16_t x747 = 1U;
	uint16_t x748 = 6U;

    t171 = (x745|(x746!=(x747-x748)));

    if (t171 != -127) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x749 = -1;
	volatile int32_t x750 = 101;
	volatile int64_t x751 = INT64_MIN;
	uint64_t x752 = 1127346219647340929LLU;

    t172 = (x749|(x750!=(x751-x752)));

    if (t172 != -1) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x753 = INT16_MAX;
	static uint64_t x754 = UINT64_MAX;
	volatile uint16_t x755 = UINT16_MAX;
	volatile int8_t x756 = 4;
	volatile int32_t t173 = -314161834;

    t173 = (x753|(x754!=(x755-x756)));

    if (t173 != 32767) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x757 = INT64_MIN;
	int32_t x758 = INT32_MIN;
	int64_t x759 = -350023074851567017LL;
	int32_t x760 = INT32_MAX;
	volatile int64_t t174 = 1177542302LL;

    t174 = (x757|(x758!=(x759-x760)));

    if (t174 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x761 = INT32_MIN;
	uint16_t x762 = UINT16_MAX;
	static uint32_t x763 = 111267285U;
	uint8_t x764 = 2U;

    t175 = (x761|(x762!=(x763-x764)));

    if (t175 != -2147483647) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x765 = -4335968744975997626LL;
	volatile int16_t x766 = INT16_MAX;
	int16_t x767 = -4;
	int64_t x768 = INT64_MIN;
	int64_t t176 = -6930LL;

    t176 = (x765|(x766!=(x767-x768)));

    if (t176 != -4335968744975997625LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x769 = -1LL;
	int32_t x770 = INT32_MAX;
	volatile int32_t x771 = 1742511;
	static int8_t x772 = INT8_MIN;

    t177 = (x769|(x770!=(x771-x772)));

    if (t177 != -1LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x773 = 177977486U;
	int32_t x774 = 4408658;
	int32_t x775 = -1;
	volatile uint32_t t178 = 3786325U;

    t178 = (x773|(x774!=(x775-x776)));

    if (t178 != 177977487U) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x777 = INT8_MAX;
	int8_t x779 = INT8_MIN;
	static volatile int32_t x780 = -298597;
	volatile int32_t t179 = 87;

    t179 = (x777|(x778!=(x779-x780)));

    if (t179 != 127) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t t180 = 7;

    t180 = (x781|(x782!=(x783-x784)));

    if (t180 != -1) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x785 = 3824;
	int8_t x786 = -1;
	uint64_t x787 = 0LLU;
	uint32_t x788 = 1225045363U;
	volatile int32_t t181 = 2013;

    t181 = (x785|(x786!=(x787-x788)));

    if (t181 != 3825) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x789 = INT16_MIN;
	int32_t x790 = INT32_MAX;
	int32_t x791 = INT32_MIN;
	uint32_t x792 = UINT32_MAX;
	static int32_t t182 = 96766;

    t182 = (x789|(x790!=(x791-x792)));

    if (t182 != -32767) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x793 = -299;
	uint8_t x796 = 1U;
	volatile int32_t t183 = -10;

    t183 = (x793|(x794!=(x795-x796)));

    if (t183 != -299) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x797 = 25542541169095LL;
	volatile int64_t x798 = INT64_MAX;
	static int64_t t184 = 5144200418110109LL;

    t184 = (x797|(x798!=(x799-x800)));

    if (t184 != 25542541169095LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x801 = INT32_MAX;
	uint8_t x802 = 31U;
	static uint16_t x804 = 0U;
	int32_t t185 = INT32_MAX;

    t185 = (x801|(x802!=(x803-x804)));

    if (t185 != INT32_MAX) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x805 = INT16_MIN;
	int16_t x807 = 3366;
	int16_t x808 = -657;

    t186 = (x805|(x806!=(x807-x808)));

    if (t186 != -32767) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint16_t x810 = 12124U;
	int16_t x811 = -4;
	int16_t x812 = INT16_MIN;
	int32_t t187 = 2;

    t187 = (x809|(x810!=(x811-x812)));

    if (t187 != -127) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x814 = 539U;
	volatile int64_t x815 = -1LL;
	int32_t x816 = 104352;
	int32_t t188 = 42;

    t188 = (x813|(x814!=(x815-x816)));

    if (t188 != -10117) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x817 = -2244550258377040441LL;
	static int8_t x818 = -14;
	static int16_t x819 = INT16_MAX;
	static volatile int8_t x820 = 1;
	int64_t t189 = -1551586943680617LL;

    t189 = (x817|(x818!=(x819-x820)));

    if (t189 != -2244550258377040441LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x821 = INT8_MIN;
	int16_t x822 = INT16_MIN;
	static uint32_t x823 = 5036938U;
	volatile int32_t t190 = 21654;

    t190 = (x821|(x822!=(x823-x824)));

    if (t190 != -127) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x825 = 0U;
	static int64_t x826 = INT64_MIN;
	static uint32_t x827 = UINT32_MAX;
	uint16_t x828 = UINT16_MAX;
	volatile int32_t t191 = -281;

    t191 = (x825|(x826!=(x827-x828)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x829 = -1311;
	static uint64_t x832 = UINT64_MAX;
	static int32_t t192 = 0;

    t192 = (x829|(x830!=(x831-x832)));

    if (t192 != -1311) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x833 = -1;
	int8_t x834 = INT8_MIN;
	volatile int64_t x835 = -297259001794402LL;
	uint8_t x836 = 1U;
	volatile int32_t t193 = -1521410;

    t193 = (x833|(x834!=(x835-x836)));

    if (t193 != -1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x837 = INT8_MAX;
	uint64_t x838 = 546913747090309260LLU;
	int8_t x840 = INT8_MAX;

    t194 = (x837|(x838!=(x839-x840)));

    if (t194 != 127) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x841 = INT32_MIN;
	int8_t x842 = INT8_MIN;
	uint64_t x843 = 17305286747323LLU;
	int16_t x844 = -574;

    t195 = (x841|(x842!=(x843-x844)));

    if (t195 != -2147483647) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x845 = UINT32_MAX;
	uint16_t x846 = 566U;
	int8_t x847 = INT8_MIN;
	int8_t x848 = INT8_MAX;
	static uint32_t t196 = UINT32_MAX;

    t196 = (x845|(x846!=(x847-x848)));

    if (t196 != UINT32_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x849 = INT32_MAX;
	int16_t x850 = 12617;
	uint32_t x852 = 205456277U;
	volatile int32_t t197 = INT32_MAX;

    t197 = (x849|(x850!=(x851-x852)));

    if (t197 != INT32_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x853 = INT64_MIN;
	uint8_t x854 = 0U;
	static volatile int64_t t198 = -1LL;

    t198 = (x853|(x854!=(x855-x856)));

    if (t198 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x857 = UINT64_MAX;
	int64_t x858 = -735LL;
	volatile int64_t x859 = INT64_MIN;
	int64_t x860 = INT64_MIN;
	static uint64_t t199 = UINT64_MAX;

    t199 = (x857|(x858!=(x859-x860)));

    if (t199 != UINT64_MAX) { NG(); } else { ; }
	
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

