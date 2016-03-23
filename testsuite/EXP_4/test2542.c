
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

static int16_t x4 = 1933;
volatile int32_t t1 = -6;
volatile int8_t x11 = INT8_MIN;
int32_t x24 = 243497;
volatile int64_t x32 = 51LL;
volatile int32_t t7 = -197;
int64_t x33 = -1LL;
volatile int64_t x37 = 1027579LL;
volatile int32_t t11 = 90;
static volatile int16_t x51 = 476;
uint64_t x52 = 10629471619LLU;
int8_t x53 = INT8_MAX;
int32_t x56 = -1;
volatile int32_t t13 = 15345;
static volatile uint8_t x61 = 40U;
volatile int8_t x64 = INT8_MAX;
static volatile int64_t x67 = INT64_MIN;
static uint8_t x74 = UINT8_MAX;
static int32_t x76 = INT32_MAX;
int32_t x80 = INT32_MIN;
int32_t x91 = INT32_MIN;
int64_t x93 = -42042LL;
int64_t x96 = 2691379955654233LL;
volatile int8_t x98 = 0;
volatile int16_t x102 = 104;
static uint8_t x103 = UINT8_MAX;
int64_t x105 = INT64_MAX;
volatile int16_t x109 = INT16_MIN;
int8_t x114 = INT8_MIN;
int64_t x116 = 7067990LL;
int8_t x118 = -1;
uint32_t x123 = UINT32_MAX;
static uint16_t x126 = 0U;
static int64_t x128 = INT64_MIN;
volatile int32_t t31 = -14605;
int64_t x140 = INT64_MAX;
int8_t x152 = -2;
uint64_t x154 = 6938712275979132726LLU;
uint8_t x172 = 43U;
volatile int16_t x173 = -505;
uint8_t x174 = 1U;
int64_t x178 = INT64_MIN;
volatile int32_t t44 = 832;
int8_t x181 = INT8_MAX;
static uint64_t x190 = UINT64_MAX;
int64_t x193 = -1LL;
volatile int8_t x202 = INT8_MIN;
static int8_t x207 = -11;
int16_t x209 = INT16_MIN;
static int32_t x210 = -21813;
int32_t x216 = INT32_MIN;
static uint16_t x220 = 4U;
int64_t x230 = -1LL;
uint32_t x234 = UINT32_MAX;
uint32_t x239 = UINT32_MAX;
uint16_t x242 = UINT16_MAX;
volatile int64_t x243 = -1LL;
uint32_t x249 = 213333U;
int32_t t62 = -3;
uint32_t x254 = UINT32_MAX;
static int64_t x257 = INT64_MIN;
int16_t x260 = 169;
int64_t x263 = INT64_MIN;
int32_t t67 = -1020491;
volatile int64_t x277 = -1LL;
volatile uint8_t x278 = 1U;
volatile int32_t t69 = -2;
static uint32_t x285 = 474477004U;
uint8_t x286 = UINT8_MAX;
static int8_t x288 = 0;
static volatile int32_t t71 = -34;
int16_t x291 = INT16_MIN;
static int32_t t74 = 913790009;
static int16_t x302 = INT16_MIN;
static volatile uint64_t x303 = UINT64_MAX;
static int32_t t77 = -182608176;
int64_t x313 = INT64_MIN;
volatile int16_t x314 = -248;
uint64_t x320 = 250730195473175LLU;
uint16_t x329 = UINT16_MAX;
int32_t x332 = INT32_MIN;
static int32_t x340 = -1;
volatile int32_t x342 = INT32_MIN;
static int32_t x346 = INT32_MIN;
int16_t x353 = INT16_MAX;
int8_t x358 = INT8_MAX;
volatile int32_t t89 = 93536045;
int8_t x361 = INT8_MAX;
volatile uint32_t x362 = 413027862U;
static int16_t x367 = INT16_MIN;
int32_t t91 = -423447;
int16_t x381 = -113;
volatile uint32_t x382 = 56U;
static uint8_t x394 = UINT8_MAX;
volatile int64_t x399 = INT64_MIN;
volatile int32_t t100 = -807747;
volatile uint32_t x405 = 24220U;
int8_t x406 = -1;
int32_t x417 = 1637961;
volatile uint32_t x421 = 4331220U;
int8_t x426 = INT8_MIN;
static volatile uint64_t x428 = 24LLU;
int16_t x430 = 0;
uint32_t x432 = 608874090U;
volatile uint32_t x433 = 318381U;
static int16_t x439 = -1;
volatile int64_t x442 = INT64_MAX;
uint8_t x450 = 4U;
static int8_t x451 = -39;
static int32_t x454 = INT32_MAX;
int64_t x462 = INT64_MIN;
static int16_t x480 = INT16_MAX;
int32_t t120 = 1341990;
int64_t x485 = INT64_MAX;
int64_t x487 = -3863010538127LL;
static volatile uint64_t x489 = 2859531621455079LLU;
int16_t x490 = INT16_MIN;
volatile int32_t t124 = -41320;
uint16_t x503 = 0U;
int16_t x511 = INT16_MAX;
volatile int8_t x513 = 0;
int8_t x514 = INT8_MAX;
static int8_t x515 = -1;
int8_t x518 = 0;
int8_t x521 = -21;
int64_t x523 = 37323LL;
int64_t x524 = -1LL;
uint16_t x527 = 62U;
volatile int32_t t131 = -3;
volatile int64_t x530 = INT64_MAX;
int16_t x533 = 26;
volatile int64_t x538 = 5264298740LL;
volatile int32_t t134 = 136;
int32_t t136 = -186824;
int64_t x550 = INT64_MIN;
static int32_t t137 = -216;
volatile uint8_t x556 = UINT8_MAX;
volatile int32_t x559 = INT32_MIN;
int32_t t139 = 666;
volatile uint16_t x564 = UINT16_MAX;
uint32_t x568 = 4929U;
volatile uint64_t x569 = 340982LLU;
int32_t t142 = -8188;
static int32_t t144 = -101937;
static volatile int16_t x583 = 8;
static int32_t t147 = 13903;
int8_t x593 = -1;
int64_t x594 = INT64_MAX;
int32_t x595 = 202;
uint16_t x602 = 107U;
static volatile int16_t x604 = -2;
int32_t x612 = INT32_MIN;
int16_t x616 = INT16_MAX;
static int32_t x617 = 386;
int32_t x622 = -1;
int32_t x630 = 5181768;
volatile int32_t x637 = -1;
int64_t x638 = INT64_MIN;
uint8_t x640 = UINT8_MAX;
int8_t x642 = INT8_MIN;
static int32_t x644 = -58968;
int64_t x650 = INT64_MIN;
static int16_t x652 = 0;
int32_t t162 = -1483021;
int64_t x657 = 293214168446LL;
uint32_t x662 = 15163U;
int64_t x664 = INT64_MIN;
volatile int32_t t165 = -70969026;
int64_t x665 = -1LL;
volatile int8_t x671 = INT8_MAX;
int16_t x673 = INT16_MIN;
uint8_t x674 = UINT8_MAX;
volatile int32_t t168 = -647052499;
int8_t x678 = -1;
static int32_t x679 = -2655;
int32_t t169 = 2921;
static volatile int32_t x682 = INT32_MIN;
uint16_t x688 = 31U;
volatile int32_t t171 = 1;
volatile int32_t t172 = 5945961;
uint8_t x699 = UINT8_MAX;
static volatile int32_t t174 = -5977;
static volatile int64_t x704 = -1LL;
static volatile int32_t t175 = 207;
int64_t x713 = INT64_MIN;
volatile int32_t t179 = 14;
volatile int32_t t181 = -32892;
volatile int32_t x731 = -1;
static int32_t x736 = INT32_MIN;
uint64_t x738 = 113788411035722LLU;
static int32_t t184 = 444;
volatile int64_t x745 = -1560026499LL;
volatile int32_t t186 = -37;
uint16_t x763 = 56U;
static uint32_t x773 = 20884U;
static volatile int16_t x774 = -1;
uint64_t x775 = 738468759634458LLU;
int32_t t193 = -1;
uint8_t x777 = 47U;
int32_t x782 = INT32_MAX;
volatile int64_t x783 = -1LL;
int16_t x793 = INT16_MIN;


void f0(void) {
    	int64_t x1 = INT64_MIN;
	uint32_t x2 = 17234077U;
	uint8_t x3 = 0U;
	volatile int32_t t0 = -28;

    t0 = (x1==(x2^(x3|x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 97400419U;
	static uint32_t x6 = UINT32_MAX;
	volatile int16_t x7 = -18;
	uint64_t x8 = 102LLU;

    t1 = (x5==(x6^(x7|x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	static int64_t x10 = 390099356466010595LL;
	int16_t x12 = 1;
	int32_t t2 = 27406;

    t2 = (x9==(x10^(x11|x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MAX;
	int8_t x14 = 1;
	static int16_t x15 = -8;
	uint32_t x16 = 390636415U;
	volatile int32_t t3 = 61073;

    t3 = (x13==(x14^(x15|x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = UINT16_MAX;
	int64_t x18 = INT64_MIN;
	static int8_t x19 = INT8_MAX;
	static int16_t x20 = 93;
	volatile int32_t t4 = 310259;

    t4 = (x17==(x18^(x19|x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint16_t x21 = 871U;
	int32_t x22 = -1;
	int32_t x23 = -59778410;
	int32_t t5 = 240611241;

    t5 = (x21==(x22^(x23|x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MAX;
	volatile int32_t x26 = INT32_MAX;
	int8_t x27 = -1;
	volatile uint16_t x28 = 22341U;
	int32_t t6 = -498;

    t6 = (x25==(x26^(x27|x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = -12479;
	int32_t x30 = -8109849;
	uint16_t x31 = 45U;

    t7 = (x29==(x30^(x31|x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x34 = UINT16_MAX;
	int8_t x35 = INT8_MIN;
	uint8_t x36 = 1U;
	volatile int32_t t8 = -62;

    t8 = (x33==(x34^(x35|x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x38 = 873U;
	int32_t x39 = 9942790;
	uint16_t x40 = 7612U;
	int32_t t9 = -425977428;

    t9 = (x37==(x38^(x39|x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint64_t x41 = 2157805459853502645LLU;
	int64_t x42 = 63670921LL;
	volatile uint64_t x43 = UINT64_MAX;
	int64_t x44 = -1LL;
	volatile int32_t t10 = -695509;

    t10 = (x41==(x42^(x43|x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = 0;
	uint16_t x46 = 0U;
	int32_t x47 = INT32_MIN;
	int16_t x48 = 6145;

    t11 = (x45==(x46^(x47|x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x49 = -3;
	int16_t x50 = INT16_MIN;
	int32_t t12 = -204056450;

    t12 = (x49==(x50^(x51|x52)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x54 = 0U;
	volatile uint8_t x55 = 4U;

    t13 = (x53==(x54^(x55|x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint8_t x57 = UINT8_MAX;
	int32_t x58 = INT32_MIN;
	int8_t x59 = INT8_MIN;
	int32_t x60 = INT32_MAX;
	int32_t t14 = 1743512;

    t14 = (x57==(x58^(x59|x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x62 = 18726231742476985LLU;
	int8_t x63 = INT8_MAX;
	int32_t t15 = 3;

    t15 = (x61==(x62^(x63|x64)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint32_t x65 = 649362U;
	static volatile uint8_t x66 = 11U;
	int32_t x68 = INT32_MIN;
	volatile int32_t t16 = 54598397;

    t16 = (x65==(x66^(x67|x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x69 = INT8_MAX;
	uint16_t x70 = 4U;
	int64_t x71 = INT64_MIN;
	int64_t x72 = INT64_MAX;
	int32_t t17 = 40213120;

    t17 = (x69==(x70^(x71|x72)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint8_t x73 = 74U;
	int16_t x75 = INT16_MIN;
	int32_t t18 = 658033238;

    t18 = (x73==(x74^(x75|x76)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = -1010971LL;
	uint16_t x78 = UINT16_MAX;
	static volatile int8_t x79 = INT8_MAX;
	volatile int32_t t19 = 9280016;

    t19 = (x77==(x78^(x79|x80)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = -7628259;
	static int32_t x82 = INT32_MIN;
	int32_t x83 = INT32_MAX;
	uint16_t x84 = 8015U;
	int32_t t20 = -110918;

    t20 = (x81==(x82^(x83|x84)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x85 = 6920;
	static volatile uint32_t x86 = UINT32_MAX;
	static int8_t x87 = INT8_MIN;
	int64_t x88 = INT64_MIN;
	int32_t t21 = 1723;

    t21 = (x85==(x86^(x87|x88)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x89 = INT16_MAX;
	uint8_t x90 = 75U;
	int8_t x92 = INT8_MAX;
	int32_t t22 = -14859;

    t22 = (x89==(x90^(x91|x92)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x94 = INT8_MIN;
	int32_t x95 = 17824;
	volatile int32_t t23 = 1686;

    t23 = (x93==(x94^(x95|x96)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = INT16_MAX;
	int64_t x99 = INT64_MAX;
	uint8_t x100 = UINT8_MAX;
	int32_t t24 = 119;

    t24 = (x97==(x98^(x99|x100)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = INT32_MIN;
	volatile uint32_t x104 = UINT32_MAX;
	int32_t t25 = 24558;

    t25 = (x101==(x102^(x103|x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x106 = -5;
	static int32_t x107 = INT32_MAX;
	uint16_t x108 = 2U;
	int32_t t26 = -987;

    t26 = (x105==(x106^(x107|x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x110 = -1;
	static int64_t x111 = -146258LL;
	int16_t x112 = -4958;
	int32_t t27 = 963;

    t27 = (x109==(x110^(x111|x112)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x113 = UINT64_MAX;
	volatile int64_t x115 = INT64_MIN;
	int32_t t28 = -1;

    t28 = (x113==(x114^(x115|x116)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x117 = 13128910LLU;
	uint32_t x119 = 19359U;
	uint64_t x120 = UINT64_MAX;
	int32_t t29 = -12458;

    t29 = (x117==(x118^(x119|x120)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint16_t x121 = 739U;
	static int32_t x122 = -79194161;
	int16_t x124 = INT16_MIN;
	int32_t t30 = 17951914;

    t30 = (x121==(x122^(x123|x124)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = -31;
	static int32_t x127 = INT32_MAX;

    t31 = (x125==(x126^(x127|x128)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = 4689476157LL;
	uint8_t x130 = 0U;
	int64_t x131 = -1536087828582018LL;
	int64_t x132 = INT64_MAX;
	int32_t t32 = 125224;

    t32 = (x129==(x130^(x131|x132)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = -523478879;
	static int8_t x134 = INT8_MAX;
	uint8_t x135 = 1U;
	int8_t x136 = 0;
	volatile int32_t t33 = 2;

    t33 = (x133==(x134^(x135|x136)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x137 = INT8_MIN;
	uint16_t x138 = UINT16_MAX;
	int16_t x139 = INT16_MIN;
	volatile int32_t t34 = -13651463;

    t34 = (x137==(x138^(x139|x140)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x141 = 111312906;
	static int16_t x142 = 3902;
	int16_t x143 = INT16_MIN;
	int16_t x144 = INT16_MIN;
	volatile int32_t t35 = 498354;

    t35 = (x141==(x142^(x143|x144)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = INT64_MAX;
	int16_t x146 = -1;
	volatile int8_t x147 = -3;
	uint32_t x148 = 575U;
	volatile int32_t t36 = 356;

    t36 = (x145==(x146^(x147|x148)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = -1;
	volatile int8_t x150 = INT8_MIN;
	volatile uint64_t x151 = 66380LLU;
	volatile int32_t t37 = 32590560;

    t37 = (x149==(x150^(x151|x152)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x153 = -65151642059154151LL;
	int8_t x155 = 7;
	static uint8_t x156 = 0U;
	int32_t t38 = -525272507;

    t38 = (x153==(x154^(x155|x156)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = INT32_MIN;
	static uint64_t x158 = 1572288352084LLU;
	volatile int16_t x159 = INT16_MAX;
	volatile uint64_t x160 = 56101LLU;
	int32_t t39 = 45137;

    t39 = (x157==(x158^(x159|x160)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = -1;
	volatile int64_t x162 = INT64_MIN;
	uint8_t x163 = 10U;
	static uint16_t x164 = 61U;
	volatile int32_t t40 = -1;

    t40 = (x161==(x162^(x163|x164)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = 73752LL;
	volatile int16_t x166 = 3902;
	int16_t x167 = INT16_MAX;
	uint16_t x168 = 3U;
	volatile int32_t t41 = -1644581;

    t41 = (x165==(x166^(x167|x168)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = 14LL;
	volatile uint16_t x170 = 569U;
	volatile int16_t x171 = INT16_MAX;
	volatile int32_t t42 = -712742337;

    t42 = (x169==(x170^(x171|x172)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x175 = UINT16_MAX;
	int64_t x176 = INT64_MIN;
	int32_t t43 = -54998547;

    t43 = (x173==(x174^(x175|x176)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x177 = INT64_MIN;
	int8_t x179 = INT8_MIN;
	uint16_t x180 = UINT16_MAX;

    t44 = (x177==(x178^(x179|x180)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x182 = -152;
	volatile int32_t x183 = INT32_MIN;
	volatile int32_t x184 = INT32_MIN;
	int32_t t45 = 31488;

    t45 = (x181==(x182^(x183|x184)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = -1;
	int32_t x186 = INT32_MIN;
	static int32_t x187 = 0;
	volatile uint8_t x188 = 17U;
	int32_t t46 = 33;

    t46 = (x185==(x186^(x187|x188)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint8_t x189 = 53U;
	static uint16_t x191 = UINT16_MAX;
	uint32_t x192 = 97842U;
	volatile int32_t t47 = -792369;

    t47 = (x189==(x190^(x191|x192)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint64_t x194 = 23891834224194LLU;
	static uint64_t x195 = 257908650652077304LLU;
	static int16_t x196 = -1;
	int32_t t48 = 28869;

    t48 = (x193==(x194^(x195|x196)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x197 = INT32_MIN;
	int8_t x198 = INT8_MIN;
	static int64_t x199 = INT64_MIN;
	volatile int8_t x200 = -1;
	int32_t t49 = -249351;

    t49 = (x197==(x198^(x199|x200)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = 4161215;
	uint16_t x203 = 219U;
	int64_t x204 = -5760214384754LL;
	int32_t t50 = 1;

    t50 = (x201==(x202^(x203|x204)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = INT8_MIN;
	int32_t x206 = INT32_MIN;
	uint64_t x208 = 38695672420LLU;
	volatile int32_t t51 = -94513555;

    t51 = (x205==(x206^(x207|x208)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint16_t x211 = 26U;
	int16_t x212 = -11;
	static volatile int32_t t52 = 147015617;

    t52 = (x209==(x210^(x211|x212)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = 220938946611LL;
	static uint64_t x214 = 56584611383LLU;
	static volatile int64_t x215 = -1LL;
	volatile int32_t t53 = 985739250;

    t53 = (x213==(x214^(x215|x216)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x217 = INT16_MIN;
	int32_t x218 = INT32_MIN;
	uint16_t x219 = UINT16_MAX;
	int32_t t54 = -1953;

    t54 = (x217==(x218^(x219|x220)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x221 = INT64_MAX;
	int32_t x222 = INT32_MIN;
	int32_t x223 = -1;
	static int8_t x224 = INT8_MIN;
	int32_t t55 = -7833230;

    t55 = (x221==(x222^(x223|x224)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x225 = INT16_MAX;
	int16_t x226 = -18;
	uint64_t x227 = UINT64_MAX;
	volatile int64_t x228 = INT64_MIN;
	int32_t t56 = -12913;

    t56 = (x225==(x226^(x227|x228)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x229 = -1;
	uint16_t x231 = 12U;
	static int64_t x232 = -1LL;
	static volatile int32_t t57 = -87146;

    t57 = (x229==(x230^(x231|x232)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = 8053619338LL;
	volatile uint32_t x235 = 5U;
	static int8_t x236 = INT8_MAX;
	volatile int32_t t58 = 118;

    t58 = (x233==(x234^(x235|x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x237 = 17LLU;
	uint8_t x238 = 2U;
	volatile uint8_t x240 = 0U;
	volatile int32_t t59 = -664929380;

    t59 = (x237==(x238^(x239|x240)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x241 = 40;
	volatile int8_t x244 = -1;
	int32_t t60 = 1;

    t60 = (x241==(x242^(x243|x244)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = INT16_MAX;
	int16_t x246 = INT16_MAX;
	volatile uint64_t x247 = 8274626458LLU;
	uint8_t x248 = 0U;
	int32_t t61 = -1;

    t61 = (x245==(x246^(x247|x248)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x250 = 2;
	static int64_t x251 = -1LL;
	int16_t x252 = INT16_MIN;

    t62 = (x249==(x250^(x251|x252)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint16_t x253 = 720U;
	static uint32_t x255 = 46U;
	int16_t x256 = INT16_MIN;
	volatile int32_t t63 = 1048;

    t63 = (x253==(x254^(x255|x256)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x258 = 1;
	int16_t x259 = 7;
	int32_t t64 = -2056857;

    t64 = (x257==(x258^(x259|x260)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x261 = UINT16_MAX;
	int32_t x262 = -117440268;
	int8_t x264 = 1;
	volatile int32_t t65 = -7178;

    t65 = (x261==(x262^(x263|x264)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x265 = -2635;
	volatile uint16_t x266 = 0U;
	int16_t x267 = INT16_MIN;
	uint32_t x268 = 13801195U;
	int32_t t66 = 795994741;

    t66 = (x265==(x266^(x267|x268)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x269 = INT16_MAX;
	uint16_t x270 = 464U;
	static int8_t x271 = INT8_MAX;
	int32_t x272 = INT32_MAX;

    t67 = (x269==(x270^(x271|x272)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = -9;
	int16_t x274 = INT16_MIN;
	uint32_t x275 = 805U;
	int32_t x276 = INT32_MIN;
	int32_t t68 = 1792;

    t68 = (x273==(x274^(x275|x276)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint64_t x279 = UINT64_MAX;
	static volatile int16_t x280 = INT16_MIN;

    t69 = (x277==(x278^(x279|x280)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x281 = UINT64_MAX;
	int8_t x282 = 0;
	static int64_t x283 = INT64_MIN;
	int64_t x284 = 15228LL;
	volatile int32_t t70 = -7477;

    t70 = (x281==(x282^(x283|x284)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x287 = INT8_MAX;

    t71 = (x285==(x286^(x287|x288)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = INT64_MIN;
	static int64_t x290 = 28658112036LL;
	uint32_t x292 = UINT32_MAX;
	volatile int32_t t72 = 1;

    t72 = (x289==(x290^(x291|x292)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x293 = -1;
	int32_t x294 = INT32_MIN;
	int8_t x295 = INT8_MIN;
	volatile uint32_t x296 = 1642501U;
	int32_t t73 = 466515700;

    t73 = (x293==(x294^(x295|x296)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x297 = 282LLU;
	static int32_t x298 = -37975;
	int32_t x299 = -1;
	static int16_t x300 = -1;

    t74 = (x297==(x298^(x299|x300)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x301 = 26;
	int32_t x304 = -1;
	static int32_t t75 = 0;

    t75 = (x301==(x302^(x303|x304)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x305 = 136867;
	int16_t x306 = INT16_MIN;
	int16_t x307 = -1;
	uint8_t x308 = UINT8_MAX;
	int32_t t76 = -45092321;

    t76 = (x305==(x306^(x307|x308)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x309 = UINT16_MAX;
	int16_t x310 = -120;
	int64_t x311 = INT64_MIN;
	int32_t x312 = -1;

    t77 = (x309==(x310^(x311|x312)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x315 = 1;
	int64_t x316 = -1LL;
	static int32_t t78 = -289186;

    t78 = (x313==(x314^(x315|x316)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x317 = 2599U;
	int16_t x318 = 0;
	static volatile uint32_t x319 = 59714U;
	int32_t t79 = 337;

    t79 = (x317==(x318^(x319|x320)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x321 = INT64_MIN;
	int16_t x322 = -4;
	uint32_t x323 = 1307045786U;
	volatile int32_t x324 = -1;
	int32_t t80 = -1881;

    t80 = (x321==(x322^(x323|x324)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x325 = 6415U;
	static int16_t x326 = -1;
	int8_t x327 = INT8_MIN;
	int8_t x328 = -1;
	static volatile int32_t t81 = 13;

    t81 = (x325==(x326^(x327|x328)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x330 = 59;
	volatile int32_t x331 = -346;
	int32_t t82 = 26738387;

    t82 = (x329==(x330^(x331|x332)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x333 = 2U;
	static volatile int64_t x334 = -1LL;
	int64_t x335 = INT64_MAX;
	int16_t x336 = -1;
	int32_t t83 = -79;

    t83 = (x333==(x334^(x335|x336)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x337 = UINT8_MAX;
	int16_t x338 = -1;
	int64_t x339 = INT64_MIN;
	volatile int32_t t84 = -2444;

    t84 = (x337==(x338^(x339|x340)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint16_t x341 = 0U;
	int16_t x343 = INT16_MIN;
	uint16_t x344 = 687U;
	int32_t t85 = -2011295;

    t85 = (x341==(x342^(x343|x344)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint16_t x345 = 8121U;
	uint32_t x347 = UINT32_MAX;
	static volatile uint8_t x348 = 51U;
	static volatile int32_t t86 = -8627;

    t86 = (x345==(x346^(x347|x348)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = -1;
	int32_t x350 = INT32_MIN;
	volatile uint64_t x351 = 435LLU;
	uint64_t x352 = UINT64_MAX;
	volatile int32_t t87 = -1;

    t87 = (x349==(x350^(x351|x352)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x354 = INT32_MIN;
	int32_t x355 = INT32_MIN;
	static uint16_t x356 = 41U;
	volatile int32_t t88 = -75;

    t88 = (x353==(x354^(x355|x356)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x357 = 52203236U;
	static uint16_t x359 = 14248U;
	uint32_t x360 = 3335763U;

    t89 = (x357==(x358^(x359|x360)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x363 = INT32_MIN;
	int32_t x364 = -431786;
	int32_t t90 = 911854913;

    t90 = (x361==(x362^(x363|x364)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint8_t x365 = 2U;
	int64_t x366 = INT64_MIN;
	int16_t x368 = INT16_MIN;

    t91 = (x365==(x366^(x367|x368)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x369 = 21;
	int8_t x370 = INT8_MIN;
	static int8_t x371 = -7;
	uint64_t x372 = 123895LLU;
	volatile int32_t t92 = -29373290;

    t92 = (x369==(x370^(x371|x372)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x373 = -1;
	volatile int32_t x374 = -675;
	static uint64_t x375 = 30829LLU;
	int16_t x376 = 11;
	int32_t t93 = -163619;

    t93 = (x373==(x374^(x375|x376)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x377 = 6159187LLU;
	static int16_t x378 = -1;
	static volatile uint16_t x379 = 55U;
	int16_t x380 = INT16_MAX;
	int32_t t94 = -468405;

    t94 = (x377==(x378^(x379|x380)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x383 = -4779872LL;
	static int16_t x384 = INT16_MIN;
	static volatile int32_t t95 = 3515546;

    t95 = (x381==(x382^(x383|x384)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x385 = INT16_MAX;
	uint32_t x386 = UINT32_MAX;
	uint8_t x387 = 31U;
	uint32_t x388 = UINT32_MAX;
	int32_t t96 = -1453652;

    t96 = (x385==(x386^(x387|x388)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = 370;
	int8_t x390 = INT8_MAX;
	uint64_t x391 = UINT64_MAX;
	static uint16_t x392 = 3304U;
	int32_t t97 = -16;

    t97 = (x389==(x390^(x391|x392)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x393 = INT64_MAX;
	volatile uint8_t x395 = UINT8_MAX;
	volatile int16_t x396 = 195;
	int32_t t98 = -161;

    t98 = (x393==(x394^(x395|x396)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile uint64_t x397 = 13135LLU;
	uint32_t x398 = 3627U;
	static uint8_t x400 = 55U;
	volatile int32_t t99 = 1086990;

    t99 = (x397==(x398^(x399|x400)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x401 = 3U;
	int8_t x402 = -3;
	int32_t x403 = -496;
	volatile int8_t x404 = INT8_MAX;

    t100 = (x401==(x402^(x403|x404)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x407 = INT8_MIN;
	int32_t x408 = 143;
	volatile int32_t t101 = 329014;

    t101 = (x405==(x406^(x407|x408)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint64_t x409 = 2120434197734815LLU;
	int16_t x410 = -2744;
	volatile int32_t x411 = -944768;
	volatile int8_t x412 = INT8_MIN;
	int32_t t102 = 15663;

    t102 = (x409==(x410^(x411|x412)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x413 = INT64_MIN;
	int64_t x414 = INT64_MIN;
	uint64_t x415 = UINT64_MAX;
	int64_t x416 = -228736724745716LL;
	int32_t t103 = 469389;

    t103 = (x413==(x414^(x415|x416)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x418 = 19;
	int64_t x419 = -3220LL;
	volatile int16_t x420 = -200;
	int32_t t104 = -1487;

    t104 = (x417==(x418^(x419|x420)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x422 = -1;
	volatile uint32_t x423 = 1041350370U;
	static uint16_t x424 = 1822U;
	volatile int32_t t105 = 719546;

    t105 = (x421==(x422^(x423|x424)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x425 = -57313374;
	volatile int8_t x427 = -6;
	volatile int32_t t106 = -1010;

    t106 = (x425==(x426^(x427|x428)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = 14310417LL;
	uint32_t x431 = 0U;
	static volatile int32_t t107 = -887;

    t107 = (x429==(x430^(x431|x432)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int8_t x434 = -1;
	int64_t x435 = -12579834227194808LL;
	int8_t x436 = -1;
	int32_t t108 = 20410114;

    t108 = (x433==(x434^(x435|x436)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x437 = -1;
	uint8_t x438 = 15U;
	int16_t x440 = INT16_MIN;
	int32_t t109 = 12148259;

    t109 = (x437==(x438^(x439|x440)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x441 = INT32_MIN;
	static uint8_t x443 = 0U;
	int64_t x444 = INT64_MIN;
	int32_t t110 = 177;

    t110 = (x441==(x442^(x443|x444)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x445 = UINT32_MAX;
	volatile int8_t x446 = 27;
	int16_t x447 = INT16_MIN;
	volatile int8_t x448 = INT8_MAX;
	volatile int32_t t111 = 76548;

    t111 = (x445==(x446^(x447|x448)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x449 = -13;
	static int8_t x452 = 2;
	volatile int32_t t112 = -813;

    t112 = (x449==(x450^(x451|x452)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = INT32_MIN;
	static volatile int16_t x455 = 9178;
	int64_t x456 = INT64_MIN;
	volatile int32_t t113 = -49986989;

    t113 = (x453==(x454^(x455|x456)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x457 = 149824222U;
	volatile uint8_t x458 = 25U;
	uint16_t x459 = 1U;
	static volatile uint16_t x460 = 31U;
	static int32_t t114 = -26031975;

    t114 = (x457==(x458^(x459|x460)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x461 = 16396U;
	volatile uint32_t x463 = 2556U;
	uint64_t x464 = 1444646LLU;
	int32_t t115 = 27352;

    t115 = (x461==(x462^(x463|x464)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int32_t x465 = INT32_MIN;
	int8_t x466 = -1;
	uint64_t x467 = 11505LLU;
	static volatile int16_t x468 = -1;
	int32_t t116 = 595414;

    t116 = (x465==(x466^(x467|x468)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x469 = UINT8_MAX;
	static uint64_t x470 = 178993143474532289LLU;
	int16_t x471 = INT16_MAX;
	static int32_t x472 = -932296;
	int32_t t117 = -2363259;

    t117 = (x469==(x470^(x471|x472)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x473 = INT32_MIN;
	static uint32_t x474 = 28645U;
	static int16_t x475 = INT16_MAX;
	static int64_t x476 = -2LL;
	volatile int32_t t118 = 4029104;

    t118 = (x473==(x474^(x475|x476)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x477 = 0;
	uint16_t x478 = 671U;
	int64_t x479 = INT64_MAX;
	int32_t t119 = 3101;

    t119 = (x477==(x478^(x479|x480)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x481 = INT16_MIN;
	volatile int32_t x482 = INT32_MAX;
	int16_t x483 = -1;
	static int16_t x484 = 11;

    t120 = (x481==(x482^(x483|x484)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x486 = -12;
	volatile int16_t x488 = INT16_MIN;
	volatile int32_t t121 = -923444198;

    t121 = (x485==(x486^(x487|x488)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x491 = INT64_MIN;
	static int64_t x492 = INT64_MIN;
	volatile int32_t t122 = 454497285;

    t122 = (x489==(x490^(x491|x492)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x493 = 21U;
	static uint8_t x494 = UINT8_MAX;
	int64_t x495 = INT64_MIN;
	uint16_t x496 = 1U;
	static volatile int32_t t123 = 0;

    t123 = (x493==(x494^(x495|x496)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = INT64_MAX;
	static int8_t x498 = INT8_MAX;
	int16_t x499 = INT16_MAX;
	int16_t x500 = INT16_MIN;

    t124 = (x497==(x498^(x499|x500)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x501 = UINT32_MAX;
	uint64_t x502 = 4090392262760889408LLU;
	int16_t x504 = -1;
	int32_t t125 = -147535284;

    t125 = (x501==(x502^(x503|x504)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x505 = INT32_MIN;
	volatile int64_t x506 = 12480309235988LL;
	volatile uint8_t x507 = 16U;
	int16_t x508 = INT16_MIN;
	int32_t t126 = -96;

    t126 = (x505==(x506^(x507|x508)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x509 = UINT64_MAX;
	int8_t x510 = -1;
	uint64_t x512 = 217005183103005LLU;
	int32_t t127 = 97;

    t127 = (x509==(x510^(x511|x512)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint64_t x516 = UINT64_MAX;
	static int32_t t128 = 32678717;

    t128 = (x513==(x514^(x515|x516)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x517 = 6U;
	int64_t x519 = INT64_MAX;
	uint32_t x520 = UINT32_MAX;
	static volatile int32_t t129 = 5988043;

    t129 = (x517==(x518^(x519|x520)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x522 = INT64_MAX;
	volatile int32_t t130 = 4080926;

    t130 = (x521==(x522^(x523|x524)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x525 = -1;
	static int32_t x526 = INT32_MAX;
	static int64_t x528 = -1LL;

    t131 = (x525==(x526^(x527|x528)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = INT32_MIN;
	int64_t x531 = 1785LL;
	int32_t x532 = INT32_MAX;
	volatile int32_t t132 = 96;

    t132 = (x529==(x530^(x531|x532)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x534 = UINT8_MAX;
	static uint16_t x535 = 5626U;
	uint16_t x536 = UINT16_MAX;
	int32_t t133 = -767307850;

    t133 = (x533==(x534^(x535|x536)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x537 = 8U;
	volatile int32_t x539 = INT32_MAX;
	uint16_t x540 = 3640U;

    t134 = (x537==(x538^(x539|x540)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x541 = 5622846U;
	int32_t x542 = INT32_MIN;
	uint64_t x543 = 3LLU;
	uint16_t x544 = UINT16_MAX;
	int32_t t135 = 294;

    t135 = (x541==(x542^(x543|x544)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint8_t x545 = 5U;
	int8_t x546 = INT8_MIN;
	uint16_t x547 = UINT16_MAX;
	uint8_t x548 = 2U;

    t136 = (x545==(x546^(x547|x548)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x549 = -1;
	volatile int8_t x551 = -1;
	int32_t x552 = INT32_MAX;

    t137 = (x549==(x550^(x551|x552)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x553 = INT16_MIN;
	static int8_t x554 = 3;
	int16_t x555 = -30;
	volatile int32_t t138 = -1310;

    t138 = (x553==(x554^(x555|x556)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x557 = 15;
	volatile int32_t x558 = -1;
	int8_t x560 = 3;

    t139 = (x557==(x558^(x559|x560)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x561 = 1U;
	int32_t x562 = INT32_MIN;
	int32_t x563 = -3191899;
	static volatile int32_t t140 = 19102;

    t140 = (x561==(x562^(x563|x564)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x565 = -98;
	int8_t x566 = 0;
	int64_t x567 = INT64_MIN;
	static volatile int32_t t141 = -7;

    t141 = (x565==(x566^(x567|x568)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x570 = -132083003943774182LL;
	volatile int8_t x571 = INT8_MIN;
	volatile uint32_t x572 = UINT32_MAX;

    t142 = (x569==(x570^(x571|x572)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = INT32_MIN;
	uint8_t x574 = 87U;
	uint8_t x575 = 58U;
	int8_t x576 = INT8_MIN;
	volatile int32_t t143 = 40;

    t143 = (x573==(x574^(x575|x576)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x577 = 3923U;
	uint64_t x578 = 29426LLU;
	static uint32_t x579 = UINT32_MAX;
	volatile int32_t x580 = INT32_MAX;

    t144 = (x577==(x578^(x579|x580)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x581 = -1;
	int32_t x582 = INT32_MAX;
	static volatile int16_t x584 = 872;
	static volatile int32_t t145 = -50645;

    t145 = (x581==(x582^(x583|x584)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x585 = UINT16_MAX;
	volatile uint16_t x586 = UINT16_MAX;
	static volatile int32_t x587 = INT32_MIN;
	volatile uint64_t x588 = 257027LLU;
	volatile int32_t t146 = 30306226;

    t146 = (x585==(x586^(x587|x588)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint16_t x589 = 204U;
	uint16_t x590 = 1152U;
	int8_t x591 = 1;
	uint64_t x592 = 657831510864LLU;

    t147 = (x589==(x590^(x591|x592)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x596 = -1;
	volatile int32_t t148 = 122622;

    t148 = (x593==(x594^(x595|x596)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint32_t x597 = 15824759U;
	uint64_t x598 = 945349499031683LLU;
	uint16_t x599 = UINT16_MAX;
	static volatile int8_t x600 = -1;
	int32_t t149 = 45884;

    t149 = (x597==(x598^(x599|x600)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x601 = -1;
	volatile int64_t x603 = INT64_MAX;
	int32_t t150 = -1;

    t150 = (x601==(x602^(x603|x604)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int64_t x605 = 1055669505LL;
	uint16_t x606 = 188U;
	static uint64_t x607 = 8690931931LLU;
	uint32_t x608 = 0U;
	volatile int32_t t151 = -6;

    t151 = (x605==(x606^(x607|x608)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = INT32_MIN;
	volatile uint8_t x610 = UINT8_MAX;
	int16_t x611 = -13;
	volatile int32_t t152 = -34955522;

    t152 = (x609==(x610^(x611|x612)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x613 = INT64_MIN;
	int32_t x614 = INT32_MIN;
	static uint8_t x615 = 71U;
	int32_t t153 = 7419;

    t153 = (x613==(x614^(x615|x616)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x618 = 2994578U;
	static volatile int8_t x619 = INT8_MAX;
	volatile int16_t x620 = INT16_MIN;
	volatile int32_t t154 = 3455971;

    t154 = (x617==(x618^(x619|x620)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x621 = INT8_MAX;
	static volatile uint64_t x623 = 5882621LLU;
	int16_t x624 = INT16_MIN;
	static volatile int32_t t155 = -706340159;

    t155 = (x621==(x622^(x623|x624)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = INT32_MAX;
	static uint16_t x626 = 1U;
	uint64_t x627 = 1420039684LLU;
	uint8_t x628 = 115U;
	static volatile int32_t t156 = -1;

    t156 = (x625==(x626^(x627|x628)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint64_t x629 = 534LLU;
	volatile uint16_t x631 = 428U;
	int8_t x632 = 2;
	int32_t t157 = 642532117;

    t157 = (x629==(x630^(x631|x632)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = -499194588666897867LL;
	volatile int16_t x634 = INT16_MIN;
	uint64_t x635 = 936588192510214LLU;
	uint32_t x636 = 1924U;
	volatile int32_t t158 = 25605;

    t158 = (x633==(x634^(x635|x636)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x639 = -2943;
	int32_t t159 = 163014;

    t159 = (x637==(x638^(x639|x640)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x641 = -1;
	volatile int8_t x643 = 1;
	volatile int32_t t160 = -7692157;

    t160 = (x641==(x642^(x643|x644)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x645 = INT32_MAX;
	int64_t x646 = -133672295591357LL;
	int16_t x647 = 0;
	int64_t x648 = -7075874LL;
	int32_t t161 = -436939;

    t161 = (x645==(x646^(x647|x648)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x649 = INT32_MIN;
	volatile uint64_t x651 = 1530598842388162LLU;

    t162 = (x649==(x650^(x651|x652)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x653 = -1LL;
	int8_t x654 = -1;
	static int16_t x655 = -134;
	uint64_t x656 = 2212470183335048LLU;
	int32_t t163 = 112;

    t163 = (x653==(x654^(x655|x656)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x658 = UINT64_MAX;
	volatile int16_t x659 = 2;
	int32_t x660 = INT32_MIN;
	static volatile int32_t t164 = 15;

    t164 = (x657==(x658^(x659|x660)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x661 = -8548356744416164LL;
	int64_t x663 = 6LL;

    t165 = (x661==(x662^(x663|x664)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x666 = -2175;
	uint8_t x667 = 1U;
	uint16_t x668 = 329U;
	static volatile int32_t t166 = -219771398;

    t166 = (x665==(x666^(x667|x668)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x669 = 0U;
	int16_t x670 = -1;
	volatile int32_t x672 = -7593063;
	static volatile int32_t t167 = -60;

    t167 = (x669==(x670^(x671|x672)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x675 = -1;
	static uint64_t x676 = UINT64_MAX;

    t168 = (x673==(x674^(x675|x676)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = INT64_MIN;
	uint32_t x680 = UINT32_MAX;

    t169 = (x677==(x678^(x679|x680)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x681 = 23280U;
	int8_t x683 = 1;
	static volatile int64_t x684 = INT64_MIN;
	int32_t t170 = -1654;

    t170 = (x681==(x682^(x683|x684)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x685 = 65103878868272LLU;
	int64_t x686 = INT64_MIN;
	volatile int8_t x687 = -45;

    t171 = (x685==(x686^(x687|x688)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x689 = 85659775U;
	int64_t x690 = INT64_MIN;
	uint16_t x691 = 1U;
	int16_t x692 = -1;

    t172 = (x689==(x690^(x691|x692)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x693 = -1;
	uint64_t x694 = 3LLU;
	int16_t x695 = INT16_MAX;
	int32_t x696 = INT32_MIN;
	static volatile int32_t t173 = -59450984;

    t173 = (x693==(x694^(x695|x696)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x697 = -6339732966214053LL;
	volatile uint16_t x698 = UINT16_MAX;
	int16_t x700 = INT16_MAX;

    t174 = (x697==(x698^(x699|x700)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint16_t x701 = 3494U;
	static uint64_t x702 = 8354132473013895LLU;
	int64_t x703 = INT64_MIN;

    t175 = (x701==(x702^(x703|x704)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = INT16_MIN;
	int8_t x706 = INT8_MIN;
	int32_t x707 = -1;
	int16_t x708 = INT16_MIN;
	static int32_t t176 = -3010;

    t176 = (x705==(x706^(x707|x708)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = INT16_MAX;
	int64_t x710 = INT64_MIN;
	static int64_t x711 = -4580314610LL;
	uint16_t x712 = UINT16_MAX;
	volatile int32_t t177 = -18838703;

    t177 = (x709==(x710^(x711|x712)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x714 = INT32_MIN;
	static int16_t x715 = -1;
	static int32_t x716 = -477888;
	volatile int32_t t178 = 31;

    t178 = (x713==(x714^(x715|x716)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x717 = 8278165857827178LL;
	uint64_t x718 = UINT64_MAX;
	static uint8_t x719 = 4U;
	int32_t x720 = 46819;

    t179 = (x717==(x718^(x719|x720)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x721 = -1LL;
	int8_t x722 = INT8_MIN;
	volatile int64_t x723 = -138595973LL;
	uint32_t x724 = UINT32_MAX;
	volatile int32_t t180 = -6176;

    t180 = (x721==(x722^(x723|x724)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x725 = INT32_MIN;
	int8_t x726 = 1;
	uint8_t x727 = 16U;
	static volatile int32_t x728 = -1;

    t181 = (x725==(x726^(x727|x728)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x729 = 471424717967LL;
	volatile int64_t x730 = -1LL;
	int8_t x732 = INT8_MIN;
	static int32_t t182 = 491341;

    t182 = (x729==(x730^(x731|x732)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x733 = -1;
	static int16_t x734 = INT16_MAX;
	volatile uint16_t x735 = UINT16_MAX;
	int32_t t183 = 8034;

    t183 = (x733==(x734^(x735|x736)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x737 = INT64_MAX;
	int32_t x739 = INT32_MIN;
	uint16_t x740 = 49U;

    t184 = (x737==(x738^(x739|x740)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x741 = INT8_MIN;
	uint32_t x742 = UINT32_MAX;
	uint64_t x743 = 562130671735LLU;
	int8_t x744 = INT8_MIN;
	static int32_t t185 = 387820714;

    t185 = (x741==(x742^(x743|x744)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x746 = INT64_MIN;
	uint64_t x747 = 7803271297087477850LLU;
	uint16_t x748 = 421U;

    t186 = (x745==(x746^(x747|x748)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x749 = 18U;
	static int8_t x750 = INT8_MAX;
	static int8_t x751 = INT8_MIN;
	int32_t x752 = INT32_MIN;
	volatile int32_t t187 = 1;

    t187 = (x749==(x750^(x751|x752)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int8_t x753 = INT8_MIN;
	int64_t x754 = 23555512LL;
	volatile uint64_t x755 = 63829453629LLU;
	int8_t x756 = INT8_MIN;
	volatile int32_t t188 = 1667038;

    t188 = (x753==(x754^(x755|x756)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x757 = INT32_MAX;
	int64_t x758 = -1LL;
	int32_t x759 = INT32_MIN;
	int32_t x760 = INT32_MIN;
	static int32_t t189 = 1;

    t189 = (x757==(x758^(x759|x760)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x761 = INT16_MIN;
	uint16_t x762 = 50U;
	int32_t x764 = INT32_MIN;
	volatile int32_t t190 = 205950;

    t190 = (x761==(x762^(x763|x764)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x765 = UINT16_MAX;
	uint32_t x766 = 209064538U;
	volatile int8_t x767 = -34;
	uint16_t x768 = 2914U;
	int32_t t191 = 2613861;

    t191 = (x765==(x766^(x767|x768)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = 99950666894373LL;
	static int8_t x770 = -1;
	volatile int32_t x771 = 784;
	static volatile int64_t x772 = -1089111208969864302LL;
	static int32_t t192 = 35259;

    t192 = (x769==(x770^(x771|x772)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x776 = INT32_MIN;

    t193 = (x773==(x774^(x775|x776)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x778 = 0U;
	volatile int64_t x779 = 1868LL;
	int64_t x780 = 3682934LL;
	int32_t t194 = 2;

    t194 = (x777==(x778^(x779|x780)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x781 = INT32_MAX;
	int16_t x784 = 519;
	static volatile int32_t t195 = 4649924;

    t195 = (x781==(x782^(x783|x784)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x785 = INT16_MIN;
	int32_t x786 = INT32_MAX;
	int16_t x787 = INT16_MAX;
	static int16_t x788 = 1;
	volatile int32_t t196 = -52;

    t196 = (x785==(x786^(x787|x788)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = INT8_MAX;
	uint64_t x790 = 19LLU;
	uint16_t x791 = 161U;
	uint32_t x792 = 9U;
	static int32_t t197 = -1;

    t197 = (x789==(x790^(x791|x792)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint32_t x794 = UINT32_MAX;
	int64_t x795 = -1LL;
	int64_t x796 = INT64_MIN;
	volatile int32_t t198 = -233;

    t198 = (x793==(x794^(x795|x796)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x797 = 26;
	int64_t x798 = INT64_MAX;
	static int32_t x799 = -1;
	int64_t x800 = 4479174387117LL;
	int32_t t199 = -113;

    t199 = (x797==(x798^(x799|x800)));

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

