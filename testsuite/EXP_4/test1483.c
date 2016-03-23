
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

int64_t x1 = INT64_MIN;
int8_t x3 = -61;
uint64_t x6 = UINT64_MAX;
static volatile int8_t x11 = INT8_MIN;
int8_t x16 = INT8_MIN;
static uint8_t x36 = UINT8_MAX;
static int64_t x38 = 6757750778606LL;
int32_t x42 = INT32_MAX;
int64_t t10 = INT64_MIN;
uint64_t x47 = 5LLU;
static uint16_t x51 = UINT16_MAX;
volatile int64_t t14 = 2LL;
uint16_t x62 = 42U;
int64_t t15 = 0LL;
volatile uint32_t x66 = 43U;
uint32_t x68 = 0U;
volatile int32_t t16 = -416;
static volatile int8_t x69 = -1;
int32_t t17 = -6399;
int64_t x73 = INT64_MIN;
static int64_t x77 = INT64_MIN;
static volatile int64_t x80 = INT64_MIN;
volatile int64_t x85 = INT64_MIN;
int32_t x90 = INT32_MAX;
int16_t x91 = INT16_MIN;
int64_t x95 = 733279LL;
static int8_t x96 = INT8_MAX;
int16_t x97 = INT16_MIN;
uint64_t x99 = 19737887662LLU;
int16_t x103 = -1;
volatile uint16_t x108 = 3516U;
volatile uint8_t x109 = UINT8_MAX;
static uint64_t x112 = 4280083227037428LLU;
int16_t x122 = -14;
static int8_t x127 = INT8_MIN;
static volatile int32_t t31 = INT32_MIN;
int64_t x129 = INT64_MIN;
int32_t x138 = INT32_MIN;
volatile int64_t x141 = INT64_MIN;
uint16_t x151 = 2618U;
static volatile uint32_t t37 = UINT32_MAX;
static int32_t x155 = -7746;
volatile int8_t x157 = INT8_MIN;
int16_t x162 = INT16_MIN;
static volatile int64_t x165 = -891147567LL;
uint16_t x167 = UINT16_MAX;
uint8_t x168 = 2U;
volatile int32_t t42 = 8;
volatile int32_t x174 = 790519475;
int64_t x175 = 3LL;
int16_t x178 = -1;
static int64_t x186 = INT64_MIN;
uint64_t x196 = UINT64_MAX;
volatile int32_t t51 = -111689;
int16_t x211 = INT16_MIN;
uint8_t x219 = 0U;
static int32_t x220 = INT32_MAX;
uint8_t x225 = UINT8_MAX;
int64_t x228 = -23002LL;
int8_t x229 = -1;
volatile int64_t t59 = INT64_MIN;
static int64_t x243 = 127873LL;
volatile uint64_t x245 = 31193LLU;
static int64_t t62 = -422886085716501976LL;
int8_t x258 = -1;
uint64_t x259 = UINT64_MAX;
int16_t x263 = 9260;
volatile int8_t x265 = 3;
static int8_t x266 = 58;
volatile int32_t t68 = INT32_MIN;
static int8_t x279 = INT8_MAX;
uint64_t x280 = 15LLU;
volatile int32_t t69 = 1;
volatile uint32_t x285 = 117U;
uint64_t x288 = 2172020900254862473LLU;
volatile uint32_t t71 = 848905U;
volatile int32_t x295 = INT32_MAX;
int8_t x296 = -1;
static int32_t t74 = -14452322;
volatile int32_t t76 = -337184309;
uint32_t x311 = UINT32_MAX;
volatile int8_t x320 = INT8_MIN;
volatile int8_t x323 = -19;
int64_t t80 = -64626324970735179LL;
int16_t x325 = -354;
static uint64_t x327 = UINT64_MAX;
int32_t t81 = -2897;
int16_t x333 = INT16_MAX;
int64_t x334 = INT64_MIN;
uint64_t x336 = UINT64_MAX;
static int16_t x343 = INT16_MIN;
int16_t x347 = INT16_MAX;
int64_t x352 = INT64_MIN;
uint32_t x353 = 440183852U;
volatile uint32_t t88 = 285330U;
uint16_t x357 = 1100U;
volatile int16_t x358 = -1;
static volatile int64_t x364 = INT64_MAX;
uint64_t x365 = UINT64_MAX;
int8_t x366 = INT8_MAX;
volatile uint64_t t91 = UINT64_MAX;
int32_t t92 = 870;
int64_t x373 = INT64_MIN;
int64_t x376 = -1LL;
static uint16_t x381 = UINT16_MAX;
uint32_t x394 = 2889U;
static int64_t x395 = -1LL;
int32_t x396 = INT32_MAX;
uint32_t t98 = UINT32_MAX;
volatile int16_t x397 = INT16_MIN;
int32_t t99 = -7;
volatile uint32_t x405 = UINT32_MAX;
static uint16_t x412 = UINT16_MAX;
static int64_t t103 = -541LL;
int16_t x420 = INT16_MIN;
static int32_t t104 = -1;
int32_t x422 = INT32_MIN;
volatile int32_t t106 = -249214696;
static uint8_t x433 = 1U;
int64_t x444 = 13332LL;
uint32_t x457 = UINT32_MAX;
int32_t x464 = INT32_MIN;
int64_t x468 = INT64_MAX;
volatile int32_t t116 = 30277152;
int16_t x469 = -1;
uint8_t x477 = 58U;
int16_t x484 = -11970;
int32_t t120 = 232;
int32_t t121 = -12345132;
int64_t x490 = -1LL;
int32_t t124 = INT32_MIN;
int64_t x505 = INT64_MAX;
volatile int32_t x508 = INT32_MAX;
volatile int64_t t126 = INT64_MAX;
int8_t x513 = -1;
uint64_t x519 = 16LLU;
static int8_t x525 = -1;
volatile int32_t t131 = 14;
uint32_t x538 = 9U;
int8_t x541 = INT8_MIN;
int32_t x543 = INT32_MIN;
volatile int8_t x545 = INT8_MAX;
uint16_t x553 = UINT16_MAX;
volatile int8_t x563 = INT8_MIN;
uint64_t t140 = UINT64_MAX;
static volatile uint64_t x566 = 20LLU;
int32_t t141 = -51106148;
volatile int32_t t142 = -13482794;
int32_t x573 = -1;
int32_t x575 = INT32_MIN;
static int32_t t143 = 7534;
int8_t x587 = INT8_MIN;
int64_t x590 = -1LL;
volatile int32_t t147 = -13014;
int64_t x596 = INT64_MIN;
int16_t x601 = INT16_MIN;
static volatile uint32_t x609 = 1U;
int8_t x612 = 2;
uint8_t x615 = 1U;
int64_t x618 = INT64_MIN;
uint32_t x621 = 9832U;
uint32_t t155 = 27571258U;
static int64_t x628 = INT64_MIN;
volatile int32_t t156 = 1;
static int16_t x631 = -1;
int16_t x632 = INT16_MAX;
static uint16_t x635 = 412U;
int8_t x637 = INT8_MIN;
volatile int32_t x640 = INT32_MIN;
int8_t x642 = -62;
volatile int32_t t160 = 9995;
static volatile uint32_t x647 = UINT32_MAX;
int32_t t162 = 1;
int16_t x659 = INT16_MIN;
volatile int32_t t166 = 84963;
static int16_t x672 = -80;
uint64_t t167 = 98256714539726288LLU;
volatile int32_t t169 = -3248;
volatile int8_t x684 = -1;
uint8_t x688 = UINT8_MAX;
volatile int64_t x695 = INT64_MIN;
volatile uint32_t x696 = 102471U;
static uint32_t x698 = 1954U;
uint32_t x707 = UINT32_MAX;
int16_t x709 = 0;
volatile int64_t x710 = INT64_MIN;
uint32_t x712 = 0U;
uint32_t x726 = 343801976U;
uint32_t x734 = 5487177U;
volatile int32_t x748 = 86783;
uint64_t x749 = 2022471956996LLU;
uint64_t t187 = 1030227031242LLU;
int32_t t188 = -6506;
volatile uint32_t x765 = 3U;
int8_t x775 = INT8_MAX;
volatile int32_t x779 = -1;
int16_t x782 = INT16_MAX;
int64_t x786 = -66212062LL;
static uint16_t x788 = 893U;
int64_t x792 = INT64_MIN;
static volatile int16_t x798 = -822;


void f0(void) {
    	static volatile int32_t x2 = -1;
	int8_t x4 = 52;
	int64_t t0 = INT64_MIN;

    t0 = (x1|(x2==(x3==x4)));

    if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = -1;
	uint16_t x7 = UINT16_MAX;
	volatile uint32_t x8 = UINT32_MAX;
	int32_t t1 = -1;

    t1 = (x5|(x6==(x7==x8)));

    if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x9 = -1LL;
	int16_t x10 = 4;
	volatile int8_t x12 = INT8_MAX;
	int64_t t2 = 3743952LL;

    t2 = (x9|(x10==(x11==x12)));

    if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = 0U;
	uint16_t x14 = 1U;
	int16_t x15 = INT16_MAX;
	static int32_t t3 = 18;

    t3 = (x13|(x14==(x15==x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MAX;
	int16_t x18 = INT16_MIN;
	volatile int32_t x19 = 696;
	static int8_t x20 = 0;
	volatile int32_t t4 = -148016304;

    t4 = (x17|(x18==(x19==x20)));

    if (t4 != 32767) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint16_t x21 = UINT16_MAX;
	uint64_t x22 = 20LLU;
	static int32_t x23 = INT32_MIN;
	volatile int16_t x24 = -1;
	static volatile int32_t t5 = 781668;

    t5 = (x21|(x22==(x23==x24)));

    if (t5 != 65535) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = 2LLU;
	volatile int8_t x26 = INT8_MIN;
	uint64_t x27 = 4344LLU;
	int64_t x28 = -7857189780545539LL;
	volatile uint64_t t6 = 760LLU;

    t6 = (x25|(x26==(x27==x28)));

    if (t6 != 2LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int64_t x29 = -688450LL;
	int16_t x30 = INT16_MIN;
	int64_t x31 = -28LL;
	int16_t x32 = -10538;
	int64_t t7 = 11427567133077LL;

    t7 = (x29|(x30==(x31==x32)));

    if (t7 != -688450LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x33 = INT16_MAX;
	volatile int64_t x34 = INT64_MIN;
	volatile uint16_t x35 = UINT16_MAX;
	static volatile int32_t t8 = 16695828;

    t8 = (x33|(x34==(x35==x36)));

    if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x37 = 1;
	uint64_t x39 = 126LLU;
	int8_t x40 = INT8_MAX;
	int32_t t9 = 6;

    t9 = (x37|(x38==(x39==x40)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x41 = INT64_MIN;
	static volatile int16_t x43 = -7;
	int64_t x44 = -1LL;

    t10 = (x41|(x42==(x43==x44)));

    if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x45 = 12U;
	int64_t x46 = -1LL;
	static int16_t x48 = INT16_MIN;
	volatile int32_t t11 = 1;

    t11 = (x45|(x46==(x47==x48)));

    if (t11 != 12) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int32_t x49 = -667314393;
	int32_t x50 = INT32_MIN;
	static volatile int32_t x52 = INT32_MIN;
	volatile int32_t t12 = -1;

    t12 = (x49|(x50==(x51==x52)));

    if (t12 != -667314393) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = INT32_MAX;
	int16_t x54 = INT16_MAX;
	int64_t x55 = INT64_MAX;
	static int16_t x56 = -1;
	volatile int32_t t13 = INT32_MAX;

    t13 = (x53|(x54==(x55==x56)));

    if (t13 != INT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = -20430010LL;
	int64_t x58 = INT64_MIN;
	int64_t x59 = INT64_MAX;
	volatile int32_t x60 = -718920345;

    t14 = (x57|(x58==(x59==x60)));

    if (t14 != -20430010LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x61 = -1LL;
	static volatile uint8_t x63 = UINT8_MAX;
	int32_t x64 = INT32_MIN;

    t15 = (x61|(x62==(x63==x64)));

    if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x65 = UINT8_MAX;
	int32_t x67 = 3066598;

    t16 = (x65|(x66==(x67==x68)));

    if (t16 != 255) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x70 = 25U;
	static uint8_t x71 = UINT8_MAX;
	uint16_t x72 = UINT16_MAX;

    t17 = (x69|(x70==(x71==x72)));

    if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x74 = INT32_MIN;
	int32_t x75 = INT32_MAX;
	int16_t x76 = -11453;
	int64_t t18 = INT64_MIN;

    t18 = (x73|(x74==(x75==x76)));

    if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x78 = UINT64_MAX;
	int8_t x79 = INT8_MIN;
	int64_t t19 = INT64_MIN;

    t19 = (x77|(x78==(x79==x80)));

    if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = -3461512817339432431LL;
	int16_t x82 = INT16_MIN;
	int16_t x83 = 1;
	int16_t x84 = INT16_MAX;
	volatile int64_t t20 = -49586648399154657LL;

    t20 = (x81|(x82==(x83==x84)));

    if (t20 != -3461512817339432431LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x86 = -1;
	static volatile int16_t x87 = -1;
	uint8_t x88 = 2U;
	volatile int64_t t21 = INT64_MIN;

    t21 = (x85|(x86==(x87==x88)));

    if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = -10794;
	int64_t x92 = INT64_MIN;
	static int32_t t22 = -34374455;

    t22 = (x89|(x90==(x91==x92)));

    if (t22 != -10794) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint32_t x93 = 23634U;
	uint8_t x94 = UINT8_MAX;
	uint32_t t23 = 176972U;

    t23 = (x93|(x94==(x95==x96)));

    if (t23 != 23634U) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x98 = INT64_MAX;
	int16_t x100 = INT16_MIN;
	int32_t t24 = -16;

    t24 = (x97|(x98==(x99==x100)));

    if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = INT64_MAX;
	int32_t x102 = INT32_MIN;
	int32_t x104 = INT32_MAX;
	volatile int64_t t25 = INT64_MAX;

    t25 = (x101|(x102==(x103==x104)));

    if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x105 = 101U;
	static int16_t x106 = -1;
	int8_t x107 = INT8_MAX;
	volatile int32_t t26 = -456369;

    t26 = (x105|(x106==(x107==x108)));

    if (t26 != 101) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x110 = -15;
	uint16_t x111 = 131U;
	int32_t t27 = -1113;

    t27 = (x109|(x110==(x111==x112)));

    if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x113 = -1;
	volatile int16_t x114 = INT16_MIN;
	static int8_t x115 = INT8_MAX;
	volatile uint16_t x116 = UINT16_MAX;
	int32_t t28 = -20;

    t28 = (x113|(x114==(x115==x116)));

    if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x117 = UINT16_MAX;
	volatile uint64_t x118 = UINT64_MAX;
	int8_t x119 = 1;
	int16_t x120 = INT16_MAX;
	int32_t t29 = -28;

    t29 = (x117|(x118==(x119==x120)));

    if (t29 != 65535) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x121 = 7U;
	int32_t x123 = INT32_MIN;
	uint64_t x124 = UINT64_MAX;
	volatile uint32_t t30 = 7U;

    t30 = (x121|(x122==(x123==x124)));

    if (t30 != 7U) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = INT32_MIN;
	uint8_t x126 = 1U;
	int32_t x128 = INT32_MIN;

    t31 = (x125|(x126==(x127==x128)));

    if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x130 = INT16_MIN;
	static uint8_t x131 = 49U;
	uint16_t x132 = UINT16_MAX;
	volatile int64_t t32 = INT64_MIN;

    t32 = (x129|(x130==(x131==x132)));

    if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = INT8_MIN;
	uint32_t x134 = UINT32_MAX;
	volatile int8_t x135 = INT8_MIN;
	int16_t x136 = 7535;
	volatile int32_t t33 = -250648;

    t33 = (x133|(x134==(x135==x136)));

    if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x137 = INT64_MAX;
	uint64_t x139 = 2011LLU;
	static int16_t x140 = -1;
	volatile int64_t t34 = INT64_MAX;

    t34 = (x137|(x138==(x139==x140)));

    if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x142 = INT8_MIN;
	volatile int8_t x143 = -2;
	uint16_t x144 = 2U;
	static volatile int64_t t35 = INT64_MIN;

    t35 = (x141|(x142==(x143==x144)));

    if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x145 = INT64_MIN;
	int8_t x146 = INT8_MIN;
	volatile int64_t x147 = INT64_MIN;
	volatile int32_t x148 = 123685;
	int64_t t36 = INT64_MIN;

    t36 = (x145|(x146==(x147==x148)));

    if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x149 = UINT32_MAX;
	static uint8_t x150 = 0U;
	uint8_t x152 = 7U;

    t37 = (x149|(x150==(x151==x152)));

    if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x153 = -10662;
	int8_t x154 = -1;
	int32_t x156 = -539873377;
	volatile int32_t t38 = 47055567;

    t38 = (x153|(x154==(x155==x156)));

    if (t38 != -10662) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x158 = UINT32_MAX;
	int64_t x159 = -41745LL;
	int32_t x160 = 2;
	int32_t t39 = -9;

    t39 = (x157|(x158==(x159==x160)));

    if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x161 = INT16_MIN;
	uint32_t x163 = UINT32_MAX;
	static volatile int32_t x164 = INT32_MAX;
	volatile int32_t t40 = 14082790;

    t40 = (x161|(x162==(x163==x164)));

    if (t40 != -32768) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int32_t x166 = -190741;
	int64_t t41 = 855631433281LL;

    t41 = (x165|(x166==(x167==x168)));

    if (t41 != -891147567LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x169 = -397363922;
	int64_t x170 = INT64_MAX;
	int16_t x171 = INT16_MIN;
	uint64_t x172 = UINT64_MAX;

    t42 = (x169|(x170==(x171==x172)));

    if (t42 != -397363922) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = INT8_MAX;
	int32_t x176 = INT32_MIN;
	volatile int32_t t43 = -3043809;

    t43 = (x173|(x174==(x175==x176)));

    if (t43 != 127) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x177 = -1;
	int32_t x179 = -6767937;
	int64_t x180 = INT64_MAX;
	volatile int32_t t44 = -10019;

    t44 = (x177|(x178==(x179==x180)));

    if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x181 = UINT16_MAX;
	static int8_t x182 = INT8_MIN;
	uint8_t x183 = UINT8_MAX;
	int64_t x184 = INT64_MIN;
	int32_t t45 = -6634557;

    t45 = (x181|(x182==(x183==x184)));

    if (t45 != 65535) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x185 = INT64_MAX;
	static volatile uint64_t x187 = UINT64_MAX;
	uint64_t x188 = 4449588705LLU;
	static volatile int64_t t46 = INT64_MAX;

    t46 = (x185|(x186==(x187==x188)));

    if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint16_t x189 = 11U;
	volatile int8_t x190 = INT8_MIN;
	int32_t x191 = 25349609;
	int16_t x192 = INT16_MAX;
	volatile int32_t t47 = 364231;

    t47 = (x189|(x190==(x191==x192)));

    if (t47 != 11) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile uint64_t x193 = UINT64_MAX;
	int8_t x194 = -15;
	static int32_t x195 = INT32_MIN;
	uint64_t t48 = UINT64_MAX;

    t48 = (x193|(x194==(x195==x196)));

    if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = INT8_MIN;
	static volatile uint64_t x198 = 2796020416739166217LLU;
	int8_t x199 = -2;
	static uint32_t x200 = 869576U;
	volatile int32_t t49 = -3;

    t49 = (x197|(x198==(x199==x200)));

    if (t49 != -128) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x201 = 29391661U;
	uint32_t x202 = 11734815U;
	volatile uint64_t x203 = 91135290337695472LLU;
	int64_t x204 = -21LL;
	volatile uint32_t t50 = 1130870U;

    t50 = (x201|(x202==(x203==x204)));

    if (t50 != 29391661U) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x205 = INT8_MIN;
	int32_t x206 = INT32_MAX;
	int16_t x207 = INT16_MIN;
	int16_t x208 = 2;

    t51 = (x205|(x206==(x207==x208)));

    if (t51 != -128) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = INT64_MIN;
	volatile int64_t x210 = INT64_MIN;
	int16_t x212 = -134;
	int64_t t52 = INT64_MIN;

    t52 = (x209|(x210==(x211==x212)));

    if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x213 = UINT16_MAX;
	static uint16_t x214 = 22211U;
	int32_t x215 = INT32_MIN;
	static int64_t x216 = INT64_MIN;
	int32_t t53 = -7;

    t53 = (x213|(x214==(x215==x216)));

    if (t53 != 65535) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint8_t x217 = 40U;
	int8_t x218 = INT8_MIN;
	int32_t t54 = -23013;

    t54 = (x217|(x218==(x219==x220)));

    if (t54 != 40) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x221 = UINT8_MAX;
	int64_t x222 = INT64_MIN;
	uint64_t x223 = UINT64_MAX;
	uint8_t x224 = 41U;
	volatile int32_t t55 = 54;

    t55 = (x221|(x222==(x223==x224)));

    if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x226 = 665739289606606LL;
	int16_t x227 = INT16_MAX;
	int32_t t56 = -35;

    t56 = (x225|(x226==(x227==x228)));

    if (t56 != 255) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x230 = INT16_MIN;
	int32_t x231 = -1;
	volatile int8_t x232 = -6;
	int32_t t57 = -233419923;

    t57 = (x229|(x230==(x231==x232)));

    if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint8_t x233 = UINT8_MAX;
	static int8_t x234 = -2;
	int32_t x235 = INT32_MIN;
	volatile int32_t x236 = -11;
	static int32_t t58 = -4;

    t58 = (x233|(x234==(x235==x236)));

    if (t58 != 255) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x237 = INT64_MIN;
	int64_t x238 = INT64_MAX;
	int16_t x239 = INT16_MIN;
	uint8_t x240 = UINT8_MAX;

    t59 = (x237|(x238==(x239==x240)));

    if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x241 = 0;
	static volatile uint8_t x242 = UINT8_MAX;
	int64_t x244 = INT64_MAX;
	int32_t t60 = -12616516;

    t60 = (x241|(x242==(x243==x244)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x246 = -1;
	volatile int32_t x247 = -353;
	volatile int16_t x248 = INT16_MIN;
	volatile uint64_t t61 = 95LLU;

    t61 = (x245|(x246==(x247==x248)));

    if (t61 != 31193LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x249 = -1LL;
	int32_t x250 = -1;
	volatile int32_t x251 = 4082;
	volatile int32_t x252 = INT32_MIN;

    t62 = (x249|(x250==(x251==x252)));

    if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x253 = 6777507U;
	static uint16_t x254 = 6U;
	int8_t x255 = -1;
	int8_t x256 = 1;
	volatile uint32_t t63 = 16U;

    t63 = (x253|(x254==(x255==x256)));

    if (t63 != 6777507U) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int32_t x257 = INT32_MAX;
	int64_t x260 = -66LL;
	volatile int32_t t64 = INT32_MAX;

    t64 = (x257|(x258==(x259==x260)));

    if (t64 != INT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = -1;
	int32_t x262 = -1214616;
	volatile uint32_t x264 = 1U;
	int32_t t65 = -1740;

    t65 = (x261|(x262==(x263==x264)));

    if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x267 = -24125;
	int16_t x268 = INT16_MIN;
	int32_t t66 = 8768788;

    t66 = (x265|(x266==(x267==x268)));

    if (t66 != 3) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x269 = 0U;
	uint8_t x270 = 1U;
	volatile int16_t x271 = INT16_MAX;
	uint16_t x272 = 57U;
	volatile int32_t t67 = -219211366;

    t67 = (x269|(x270==(x271==x272)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x273 = INT32_MIN;
	int32_t x274 = INT32_MIN;
	uint64_t x275 = 121485912526LLU;
	uint32_t x276 = 866897274U;

    t68 = (x273|(x274==(x275==x276)));

    if (t68 != INT32_MIN) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = INT8_MAX;
	int64_t x278 = -1LL;

    t69 = (x277|(x278==(x279==x280)));

    if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = INT64_MIN;
	int64_t x282 = INT64_MIN;
	int64_t x283 = INT64_MIN;
	uint8_t x284 = 3U;
	volatile int64_t t70 = INT64_MIN;

    t70 = (x281|(x282==(x283==x284)));

    if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x286 = INT8_MIN;
	uint32_t x287 = 1896345609U;

    t71 = (x285|(x286==(x287==x288)));

    if (t71 != 117U) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x289 = 1U;
	uint32_t x290 = UINT32_MAX;
	volatile int32_t x291 = INT32_MIN;
	uint16_t x292 = UINT16_MAX;
	int32_t t72 = -1548785;

    t72 = (x289|(x290==(x291==x292)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x293 = INT64_MIN;
	volatile int64_t x294 = INT64_MIN;
	int64_t t73 = INT64_MIN;

    t73 = (x293|(x294==(x295==x296)));

    if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x297 = INT16_MIN;
	uint32_t x298 = UINT32_MAX;
	uint8_t x299 = 1U;
	uint16_t x300 = 26U;

    t74 = (x297|(x298==(x299==x300)));

    if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = 14594;
	int8_t x302 = 9;
	int16_t x303 = INT16_MAX;
	volatile int8_t x304 = 0;
	int32_t t75 = -397;

    t75 = (x301|(x302==(x303==x304)));

    if (t75 != 14594) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x305 = INT16_MAX;
	int64_t x306 = INT64_MIN;
	int8_t x307 = INT8_MIN;
	int16_t x308 = -1;

    t76 = (x305|(x306==(x307==x308)));

    if (t76 != 32767) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint32_t x309 = 1277740330U;
	static volatile uint32_t x310 = UINT32_MAX;
	int64_t x312 = -303LL;
	volatile uint32_t t77 = 582587789U;

    t77 = (x309|(x310==(x311==x312)));

    if (t77 != 1277740330U) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x313 = -1;
	static uint8_t x314 = UINT8_MAX;
	volatile int8_t x315 = INT8_MAX;
	int16_t x316 = INT16_MAX;
	static int32_t t78 = -1;

    t78 = (x313|(x314==(x315==x316)));

    if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x317 = -255922735;
	volatile int8_t x318 = 3;
	volatile int64_t x319 = -19147042055765869LL;
	volatile int32_t t79 = -58;

    t79 = (x317|(x318==(x319==x320)));

    if (t79 != -255922735) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x321 = -1LL;
	volatile int16_t x322 = 600;
	int32_t x324 = INT32_MIN;

    t80 = (x321|(x322==(x323==x324)));

    if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x326 = 5386U;
	int32_t x328 = 5;

    t81 = (x325|(x326==(x327==x328)));

    if (t81 != -354) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x329 = 19764732U;
	static int16_t x330 = INT16_MIN;
	static int64_t x331 = 331915LL;
	int64_t x332 = -17758LL;
	volatile uint32_t t82 = 2U;

    t82 = (x329|(x330==(x331==x332)));

    if (t82 != 19764732U) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x335 = 183710531372349LL;
	volatile int32_t t83 = -59753450;

    t83 = (x333|(x334==(x335==x336)));

    if (t83 != 32767) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x337 = INT32_MIN;
	int32_t x338 = -408;
	static uint32_t x339 = UINT32_MAX;
	volatile int16_t x340 = INT16_MAX;
	int32_t t84 = INT32_MIN;

    t84 = (x337|(x338==(x339==x340)));

    if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = -1;
	uint8_t x342 = 0U;
	uint64_t x344 = 98408LLU;
	volatile int32_t t85 = 124;

    t85 = (x341|(x342==(x343==x344)));

    if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x345 = 23U;
	int64_t x346 = INT64_MAX;
	int16_t x348 = INT16_MIN;
	int32_t t86 = 0;

    t86 = (x345|(x346==(x347==x348)));

    if (t86 != 23) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x349 = 11U;
	int32_t x350 = INT32_MIN;
	uint64_t x351 = 243353LLU;
	volatile int32_t t87 = 3;

    t87 = (x349|(x350==(x351==x352)));

    if (t87 != 11) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x354 = INT64_MIN;
	int64_t x355 = INT64_MAX;
	volatile int8_t x356 = 0;

    t88 = (x353|(x354==(x355==x356)));

    if (t88 != 440183852U) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x359 = 2596240402320518065LLU;
	int8_t x360 = -1;
	int32_t t89 = 3;

    t89 = (x357|(x358==(x359==x360)));

    if (t89 != 1100) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x361 = 14613966LLU;
	volatile uint8_t x362 = UINT8_MAX;
	static volatile uint16_t x363 = 487U;
	volatile uint64_t t90 = 7860094544855LLU;

    t90 = (x361|(x362==(x363==x364)));

    if (t90 != 14613966LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint8_t x367 = 90U;
	int16_t x368 = INT16_MAX;

    t91 = (x365|(x366==(x367==x368)));

    if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint8_t x369 = UINT8_MAX;
	static uint16_t x370 = 55U;
	int64_t x371 = 23606218989208LL;
	int16_t x372 = INT16_MIN;

    t92 = (x369|(x370==(x371==x372)));

    if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x374 = INT32_MIN;
	volatile int64_t x375 = -14704786141445367LL;
	volatile int64_t t93 = INT64_MIN;

    t93 = (x373|(x374==(x375==x376)));

    if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x377 = INT64_MIN;
	int64_t x378 = INT64_MAX;
	volatile int16_t x379 = 9869;
	int8_t x380 = -1;
	int64_t t94 = INT64_MIN;

    t94 = (x377|(x378==(x379==x380)));

    if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x382 = 29LL;
	int8_t x383 = INT8_MIN;
	int16_t x384 = -398;
	static volatile int32_t t95 = -1559426;

    t95 = (x381|(x382==(x383==x384)));

    if (t95 != 65535) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x385 = INT64_MIN;
	volatile uint64_t x386 = 1730LLU;
	int64_t x387 = INT64_MIN;
	int32_t x388 = -1;
	volatile int64_t t96 = INT64_MIN;

    t96 = (x385|(x386==(x387==x388)));

    if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = INT8_MAX;
	volatile int64_t x390 = 12534147011942LL;
	int64_t x391 = INT64_MIN;
	static int64_t x392 = INT64_MAX;
	volatile int32_t t97 = -311595;

    t97 = (x389|(x390==(x391==x392)));

    if (t97 != 127) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x393 = UINT32_MAX;

    t98 = (x393|(x394==(x395==x396)));

    if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x398 = -1331458;
	int64_t x399 = INT64_MIN;
	volatile int32_t x400 = INT32_MIN;

    t99 = (x397|(x398==(x399==x400)));

    if (t99 != -32768) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x401 = INT8_MIN;
	int8_t x402 = -1;
	uint64_t x403 = UINT64_MAX;
	volatile int32_t x404 = 30329;
	volatile int32_t t100 = 1;

    t100 = (x401|(x402==(x403==x404)));

    if (t100 != -128) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x406 = -1021;
	int32_t x407 = INT32_MAX;
	uint16_t x408 = 10U;
	volatile uint32_t t101 = UINT32_MAX;

    t101 = (x405|(x406==(x407==x408)));

    if (t101 != UINT32_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int16_t x409 = INT16_MIN;
	static int64_t x410 = INT64_MIN;
	int8_t x411 = -1;
	volatile int32_t t102 = 542876;

    t102 = (x409|(x410==(x411==x412)));

    if (t102 != -32768) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x413 = 32037LL;
	int32_t x414 = -1;
	static int8_t x415 = -7;
	static volatile int32_t x416 = -1;

    t103 = (x413|(x414==(x415==x416)));

    if (t103 != 32037LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x417 = INT16_MIN;
	volatile uint16_t x418 = 9139U;
	int8_t x419 = INT8_MIN;

    t104 = (x417|(x418==(x419==x420)));

    if (t104 != -32768) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x421 = UINT64_MAX;
	int32_t x423 = -500704;
	int16_t x424 = -21;
	static volatile uint64_t t105 = UINT64_MAX;

    t105 = (x421|(x422==(x423==x424)));

    if (t105 != UINT64_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint8_t x425 = 5U;
	int16_t x426 = -1;
	int16_t x427 = 44;
	int64_t x428 = INT64_MAX;

    t106 = (x425|(x426==(x427==x428)));

    if (t106 != 5) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x429 = -6;
	volatile int16_t x430 = 653;
	int64_t x431 = INT64_MIN;
	static int16_t x432 = 0;
	static int32_t t107 = 85;

    t107 = (x429|(x430==(x431==x432)));

    if (t107 != -6) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x434 = INT32_MIN;
	uint32_t x435 = 3182U;
	static int64_t x436 = INT64_MAX;
	volatile int32_t t108 = 1;

    t108 = (x433|(x434==(x435==x436)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = -1;
	int8_t x438 = INT8_MAX;
	int8_t x439 = -1;
	int16_t x440 = 15607;
	int32_t t109 = 0;

    t109 = (x437|(x438==(x439==x440)));

    if (t109 != -1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x441 = 1;
	int16_t x442 = -1;
	uint8_t x443 = 1U;
	int32_t t110 = -86;

    t110 = (x441|(x442==(x443==x444)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x445 = INT8_MIN;
	volatile int8_t x446 = INT8_MIN;
	static volatile int32_t x447 = -28;
	static int16_t x448 = -1;
	volatile int32_t t111 = -64567;

    t111 = (x445|(x446==(x447==x448)));

    if (t111 != -128) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x449 = -1;
	static int32_t x450 = -1;
	int32_t x451 = INT32_MAX;
	int32_t x452 = -52812116;
	volatile int32_t t112 = 18445;

    t112 = (x449|(x450==(x451==x452)));

    if (t112 != -1) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x453 = -1;
	volatile int16_t x454 = INT16_MAX;
	uint8_t x455 = 49U;
	int64_t x456 = -658124LL;
	volatile int32_t t113 = -155549376;

    t113 = (x453|(x454==(x455==x456)));

    if (t113 != -1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x458 = -19489370256602579LL;
	static volatile int64_t x459 = INT64_MAX;
	int64_t x460 = -1LL;
	uint32_t t114 = UINT32_MAX;

    t114 = (x457|(x458==(x459==x460)));

    if (t114 != UINT32_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x461 = 461393LLU;
	int64_t x462 = -1LL;
	static uint64_t x463 = 1733497470677431702LLU;
	uint64_t t115 = 15230029471614LLU;

    t115 = (x461|(x462==(x463==x464)));

    if (t115 != 461393LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x465 = UINT16_MAX;
	int64_t x466 = -1LL;
	int64_t x467 = INT64_MAX;

    t116 = (x465|(x466==(x467==x468)));

    if (t116 != 65535) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x470 = INT16_MIN;
	static volatile uint32_t x471 = UINT32_MAX;
	uint32_t x472 = UINT32_MAX;
	int32_t t117 = -25227656;

    t117 = (x469|(x470==(x471==x472)));

    if (t117 != -1) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x473 = -1;
	static volatile int16_t x474 = -1;
	int16_t x475 = 127;
	int8_t x476 = 0;
	int32_t t118 = -746136;

    t118 = (x473|(x474==(x475==x476)));

    if (t118 != -1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x478 = INT8_MIN;
	volatile int32_t x479 = -1;
	int64_t x480 = -1LL;
	static volatile int32_t t119 = 7865036;

    t119 = (x477|(x478==(x479==x480)));

    if (t119 != 58) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int16_t x481 = 1;
	int32_t x482 = 192845258;
	volatile int16_t x483 = INT16_MIN;

    t120 = (x481|(x482==(x483==x484)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint8_t x485 = 1U;
	int16_t x486 = INT16_MAX;
	volatile int16_t x487 = 43;
	uint16_t x488 = 56U;

    t121 = (x485|(x486==(x487==x488)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = -15685218;
	int64_t x491 = INT64_MAX;
	volatile int8_t x492 = INT8_MIN;
	volatile int32_t t122 = 120191072;

    t122 = (x489|(x490==(x491==x492)));

    if (t122 != -15685218) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x493 = INT8_MIN;
	int64_t x494 = -20115519LL;
	uint16_t x495 = 50U;
	static int8_t x496 = -1;
	volatile int32_t t123 = 12225812;

    t123 = (x493|(x494==(x495==x496)));

    if (t123 != -128) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x497 = INT32_MIN;
	int32_t x498 = INT32_MAX;
	int32_t x499 = -1;
	int16_t x500 = 0;

    t124 = (x497|(x498==(x499==x500)));

    if (t124 != INT32_MIN) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x501 = -367;
	static volatile int16_t x502 = INT16_MIN;
	uint32_t x503 = UINT32_MAX;
	int8_t x504 = -1;
	int32_t t125 = 40836;

    t125 = (x501|(x502==(x503==x504)));

    if (t125 != -367) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x506 = INT64_MIN;
	uint16_t x507 = UINT16_MAX;

    t126 = (x505|(x506==(x507==x508)));

    if (t126 != INT64_MAX) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x509 = 1118614231LL;
	uint16_t x510 = UINT16_MAX;
	int32_t x511 = 0;
	volatile int8_t x512 = INT8_MAX;
	int64_t t127 = 276611830LL;

    t127 = (x509|(x510==(x511==x512)));

    if (t127 != 1118614231LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x514 = INT32_MIN;
	int16_t x515 = 1575;
	static int8_t x516 = INT8_MIN;
	volatile int32_t t128 = 1696;

    t128 = (x513|(x514==(x515==x516)));

    if (t128 != -1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint64_t x517 = 127947770790641485LLU;
	volatile int16_t x518 = -1;
	int8_t x520 = -1;
	uint64_t t129 = 8893LLU;

    t129 = (x517|(x518==(x519==x520)));

    if (t129 != 127947770790641485LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x521 = -20629;
	volatile int32_t x522 = INT32_MAX;
	int32_t x523 = -1;
	int8_t x524 = INT8_MIN;
	int32_t t130 = -109;

    t130 = (x521|(x522==(x523==x524)));

    if (t130 != -20629) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x526 = 0U;
	int16_t x527 = -6609;
	static int32_t x528 = 12650231;

    t131 = (x525|(x526==(x527==x528)));

    if (t131 != -1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x529 = INT8_MIN;
	int8_t x530 = INT8_MAX;
	int32_t x531 = INT32_MIN;
	static uint16_t x532 = 79U;
	volatile int32_t t132 = -43450538;

    t132 = (x529|(x530==(x531==x532)));

    if (t132 != -128) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x533 = INT64_MIN;
	volatile uint8_t x534 = 122U;
	int8_t x535 = 1;
	volatile uint16_t x536 = 0U;
	int64_t t133 = INT64_MIN;

    t133 = (x533|(x534==(x535==x536)));

    if (t133 != INT64_MIN) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x537 = INT16_MAX;
	int16_t x539 = INT16_MAX;
	volatile int16_t x540 = INT16_MAX;
	static volatile int32_t t134 = -1438;

    t134 = (x537|(x538==(x539==x540)));

    if (t134 != 32767) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x542 = -387604075609LL;
	int8_t x544 = INT8_MIN;
	int32_t t135 = 60359;

    t135 = (x541|(x542==(x543==x544)));

    if (t135 != -128) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x546 = 3;
	static volatile uint16_t x547 = UINT16_MAX;
	int64_t x548 = -1LL;
	int32_t t136 = 61;

    t136 = (x545|(x546==(x547==x548)));

    if (t136 != 127) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x549 = INT32_MIN;
	static int32_t x550 = INT32_MIN;
	int16_t x551 = INT16_MAX;
	int32_t x552 = INT32_MIN;
	volatile int32_t t137 = INT32_MIN;

    t137 = (x549|(x550==(x551==x552)));

    if (t137 != INT32_MIN) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x554 = -1676;
	static volatile int32_t x555 = INT32_MIN;
	int32_t x556 = INT32_MAX;
	static int32_t t138 = -7279;

    t138 = (x553|(x554==(x555==x556)));

    if (t138 != 65535) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint64_t x557 = 195223064187634LLU;
	uint16_t x558 = 495U;
	uint16_t x559 = UINT16_MAX;
	uint32_t x560 = 7U;
	uint64_t t139 = 2401551631951LLU;

    t139 = (x557|(x558==(x559==x560)));

    if (t139 != 195223064187634LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint64_t x561 = UINT64_MAX;
	int8_t x562 = 0;
	static int32_t x564 = -1;

    t140 = (x561|(x562==(x563==x564)));

    if (t140 != UINT64_MAX) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x565 = 6305U;
	static volatile int16_t x567 = 1;
	volatile uint16_t x568 = 6017U;

    t141 = (x565|(x566==(x567==x568)));

    if (t141 != 6305) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x569 = -1;
	int32_t x570 = -3059770;
	volatile int16_t x571 = 0;
	static int8_t x572 = -1;

    t142 = (x569|(x570==(x571==x572)));

    if (t142 != -1) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint64_t x574 = 1390916919947LLU;
	uint32_t x576 = UINT32_MAX;

    t143 = (x573|(x574==(x575==x576)));

    if (t143 != -1) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int32_t x577 = 389341008;
	volatile int16_t x578 = INT16_MAX;
	int16_t x579 = -1;
	static int64_t x580 = INT64_MAX;
	int32_t t144 = 17739718;

    t144 = (x577|(x578==(x579==x580)));

    if (t144 != 389341008) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x581 = INT32_MIN;
	volatile int16_t x582 = -1;
	static int64_t x583 = INT64_MIN;
	static uint64_t x584 = 21029048LLU;
	static int32_t t145 = INT32_MIN;

    t145 = (x581|(x582==(x583==x584)));

    if (t145 != INT32_MIN) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x585 = 6;
	int8_t x586 = -3;
	volatile int16_t x588 = INT16_MAX;
	volatile int32_t t146 = -63642361;

    t146 = (x585|(x586==(x587==x588)));

    if (t146 != 6) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint8_t x589 = 10U;
	uint8_t x591 = 91U;
	int16_t x592 = 1;

    t147 = (x589|(x590==(x591==x592)));

    if (t147 != 10) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x593 = -1;
	uint64_t x594 = 91684355328LLU;
	uint16_t x595 = UINT16_MAX;
	int32_t t148 = 2332107;

    t148 = (x593|(x594==(x595==x596)));

    if (t148 != -1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint32_t x597 = 149664U;
	int32_t x598 = 7750066;
	volatile int64_t x599 = 100LL;
	uint32_t x600 = UINT32_MAX;
	uint32_t t149 = 12431U;

    t149 = (x597|(x598==(x599==x600)));

    if (t149 != 149664U) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x602 = -161;
	int8_t x603 = -60;
	int32_t x604 = INT32_MAX;
	volatile int32_t t150 = -21163;

    t150 = (x601|(x602==(x603==x604)));

    if (t150 != -32768) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = INT32_MIN;
	int64_t x606 = 105250LL;
	int8_t x607 = INT8_MAX;
	static uint8_t x608 = 0U;
	int32_t t151 = INT32_MIN;

    t151 = (x605|(x606==(x607==x608)));

    if (t151 != INT32_MIN) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x610 = UINT64_MAX;
	int16_t x611 = INT16_MAX;
	uint32_t t152 = 5U;

    t152 = (x609|(x610==(x611==x612)));

    if (t152 != 1U) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x613 = -6836158058LL;
	int64_t x614 = 19306749364853LL;
	uint64_t x616 = 789197961010329LLU;
	int64_t t153 = 7043LL;

    t153 = (x613|(x614==(x615==x616)));

    if (t153 != -6836158058LL) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint16_t x617 = 15U;
	int16_t x619 = INT16_MAX;
	int64_t x620 = INT64_MIN;
	int32_t t154 = 6;

    t154 = (x617|(x618==(x619==x620)));

    if (t154 != 15) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x622 = INT32_MAX;
	volatile uint32_t x623 = 17997U;
	static volatile uint64_t x624 = UINT64_MAX;

    t155 = (x621|(x622==(x623==x624)));

    if (t155 != 9832U) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x625 = -778;
	int16_t x626 = INT16_MAX;
	uint8_t x627 = 0U;

    t156 = (x625|(x626==(x627==x628)));

    if (t156 != -778) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x629 = INT8_MIN;
	int64_t x630 = 83LL;
	volatile int32_t t157 = 29160422;

    t157 = (x629|(x630==(x631==x632)));

    if (t157 != -128) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = INT8_MIN;
	int16_t x634 = INT16_MAX;
	int16_t x636 = INT16_MIN;
	int32_t t158 = 57;

    t158 = (x633|(x634==(x635==x636)));

    if (t158 != -128) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x638 = 45U;
	int64_t x639 = -29737376304120LL;
	int32_t t159 = -5846347;

    t159 = (x637|(x638==(x639==x640)));

    if (t159 != -128) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x641 = INT16_MIN;
	int16_t x643 = INT16_MIN;
	static int16_t x644 = -1;

    t160 = (x641|(x642==(x643==x644)));

    if (t160 != -32768) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = -1LL;
	uint16_t x646 = 38U;
	int8_t x648 = INT8_MIN;
	int64_t t161 = -104927331LL;

    t161 = (x645|(x646==(x647==x648)));

    if (t161 != -1LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = INT8_MIN;
	int16_t x650 = INT16_MIN;
	int32_t x651 = INT32_MIN;
	int32_t x652 = INT32_MIN;

    t162 = (x649|(x650==(x651==x652)));

    if (t162 != -128) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x653 = -1;
	int32_t x654 = INT32_MAX;
	int32_t x655 = INT32_MAX;
	uint8_t x656 = 13U;
	int32_t t163 = -973440896;

    t163 = (x653|(x654==(x655==x656)));

    if (t163 != -1) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint16_t x657 = 4U;
	uint32_t x658 = 57370309U;
	uint64_t x660 = UINT64_MAX;
	static volatile int32_t t164 = 3811192;

    t164 = (x657|(x658==(x659==x660)));

    if (t164 != 4) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x661 = -56;
	int32_t x662 = -343503;
	static uint32_t x663 = 148U;
	volatile int32_t x664 = INT32_MIN;
	volatile int32_t t165 = 671;

    t165 = (x661|(x662==(x663==x664)));

    if (t165 != -56) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = -5;
	uint16_t x666 = 7U;
	static int32_t x667 = INT32_MAX;
	static volatile uint8_t x668 = 1U;

    t166 = (x665|(x666==(x667==x668)));

    if (t166 != -5) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x669 = 118012LLU;
	int32_t x670 = 46699949;
	int32_t x671 = INT32_MIN;

    t167 = (x669|(x670==(x671==x672)));

    if (t167 != 118012LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x673 = 17U;
	uint64_t x674 = 24LLU;
	int16_t x675 = INT16_MAX;
	volatile int64_t x676 = -1443LL;
	int32_t t168 = -90033586;

    t168 = (x673|(x674==(x675==x676)));

    if (t168 != 17) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x677 = -1;
	uint16_t x678 = 669U;
	static int8_t x679 = INT8_MAX;
	int64_t x680 = -1LL;

    t169 = (x677|(x678==(x679==x680)));

    if (t169 != -1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x681 = -45;
	volatile uint64_t x682 = 7LLU;
	uint8_t x683 = 2U;
	int32_t t170 = -4981;

    t170 = (x681|(x682==(x683==x684)));

    if (t170 != -45) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x685 = -1;
	static uint16_t x686 = UINT16_MAX;
	int16_t x687 = INT16_MIN;
	int32_t t171 = 545894;

    t171 = (x685|(x686==(x687==x688)));

    if (t171 != -1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x689 = 101401465306LL;
	volatile int16_t x690 = -101;
	int16_t x691 = INT16_MIN;
	volatile int8_t x692 = -1;
	volatile int64_t t172 = 213LL;

    t172 = (x689|(x690==(x691==x692)));

    if (t172 != 101401465306LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x693 = 1843225425551LLU;
	int64_t x694 = INT64_MAX;
	static uint64_t t173 = 17724974LLU;

    t173 = (x693|(x694==(x695==x696)));

    if (t173 != 1843225425551LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x697 = INT8_MAX;
	uint8_t x699 = 71U;
	volatile int16_t x700 = INT16_MIN;
	int32_t t174 = -323983;

    t174 = (x697|(x698==(x699==x700)));

    if (t174 != 127) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x701 = INT64_MIN;
	volatile int16_t x702 = -1018;
	uint16_t x703 = 4U;
	static volatile int8_t x704 = INT8_MIN;
	static int64_t t175 = INT64_MIN;

    t175 = (x701|(x702==(x703==x704)));

    if (t175 != INT64_MIN) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int16_t x705 = INT16_MIN;
	static volatile int32_t x706 = -3;
	int64_t x708 = INT64_MAX;
	volatile int32_t t176 = 46;

    t176 = (x705|(x706==(x707==x708)));

    if (t176 != -32768) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x711 = -1;
	static volatile int32_t t177 = 9137;

    t177 = (x709|(x710==(x711==x712)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x713 = -1;
	uint32_t x714 = 2566260U;
	static int64_t x715 = INT64_MIN;
	int32_t x716 = -45;
	int32_t t178 = -28956;

    t178 = (x713|(x714==(x715==x716)));

    if (t178 != -1) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x717 = INT64_MIN;
	int32_t x718 = INT32_MIN;
	int64_t x719 = 8230791399LL;
	static int8_t x720 = INT8_MAX;
	int64_t t179 = INT64_MIN;

    t179 = (x717|(x718==(x719==x720)));

    if (t179 != INT64_MIN) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile uint32_t x721 = 16093539U;
	volatile int32_t x722 = -171087383;
	static uint8_t x723 = UINT8_MAX;
	volatile int16_t x724 = -1;
	volatile uint32_t t180 = 247954807U;

    t180 = (x721|(x722==(x723==x724)));

    if (t180 != 16093539U) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x725 = 565;
	int16_t x727 = INT16_MIN;
	int64_t x728 = INT64_MIN;
	int32_t t181 = 430825;

    t181 = (x725|(x726==(x727==x728)));

    if (t181 != 565) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x729 = INT8_MIN;
	volatile uint64_t x730 = UINT64_MAX;
	static int64_t x731 = -1LL;
	uint32_t x732 = 263625630U;
	volatile int32_t t182 = 62;

    t182 = (x729|(x730==(x731==x732)));

    if (t182 != -128) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x733 = -146142813739LL;
	int64_t x735 = 8860853960585LL;
	uint16_t x736 = 6U;
	int64_t t183 = -8871454LL;

    t183 = (x733|(x734==(x735==x736)));

    if (t183 != -146142813739LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x737 = 248;
	uint16_t x738 = UINT16_MAX;
	int32_t x739 = INT32_MIN;
	int64_t x740 = INT64_MIN;
	int32_t t184 = -9614155;

    t184 = (x737|(x738==(x739==x740)));

    if (t184 != 248) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x741 = INT8_MAX;
	static int16_t x742 = INT16_MAX;
	int64_t x743 = INT64_MIN;
	volatile int16_t x744 = -57;
	int32_t t185 = -25954775;

    t185 = (x741|(x742==(x743==x744)));

    if (t185 != 127) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x745 = 16542U;
	int16_t x746 = 1;
	volatile uint64_t x747 = UINT64_MAX;
	uint32_t t186 = 2000521U;

    t186 = (x745|(x746==(x747==x748)));

    if (t186 != 16542U) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x750 = 1;
	int16_t x751 = INT16_MIN;
	int32_t x752 = INT32_MAX;

    t187 = (x749|(x750==(x751==x752)));

    if (t187 != 2022471956996LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x753 = -1;
	volatile uint32_t x754 = UINT32_MAX;
	static int8_t x755 = INT8_MAX;
	uint32_t x756 = 135U;

    t188 = (x753|(x754==(x755==x756)));

    if (t188 != -1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint16_t x757 = UINT16_MAX;
	int64_t x758 = -1LL;
	volatile int8_t x759 = INT8_MAX;
	static uint8_t x760 = 1U;
	static volatile int32_t t189 = 61;

    t189 = (x757|(x758==(x759==x760)));

    if (t189 != 65535) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = INT32_MAX;
	volatile int32_t x762 = -1;
	volatile int64_t x763 = 35710550628773322LL;
	int32_t x764 = INT32_MIN;
	static volatile int32_t t190 = INT32_MAX;

    t190 = (x761|(x762==(x763==x764)));

    if (t190 != INT32_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x766 = INT64_MIN;
	static uint32_t x767 = 2172932U;
	volatile int16_t x768 = INT16_MIN;
	static volatile uint32_t t191 = 4U;

    t191 = (x765|(x766==(x767==x768)));

    if (t191 != 3U) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = -3345217469890446LL;
	uint32_t x770 = UINT32_MAX;
	static int64_t x771 = -1LL;
	uint64_t x772 = 3LLU;
	static volatile int64_t t192 = 17840026386914781LL;

    t192 = (x769|(x770==(x771==x772)));

    if (t192 != -3345217469890446LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint32_t x773 = 873410209U;
	uint8_t x774 = 13U;
	int64_t x776 = -5945977683LL;
	uint32_t t193 = 4434U;

    t193 = (x773|(x774==(x775==x776)));

    if (t193 != 873410209U) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = 1;
	int32_t x778 = 6;
	uint16_t x780 = 26U;
	volatile int32_t t194 = -2489271;

    t194 = (x777|(x778==(x779==x780)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x781 = UINT8_MAX;
	uint8_t x783 = 8U;
	static int16_t x784 = INT16_MIN;
	int32_t t195 = 851509;

    t195 = (x781|(x782==(x783==x784)));

    if (t195 != 255) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x785 = UINT8_MAX;
	static volatile uint8_t x787 = 15U;
	volatile int32_t t196 = 0;

    t196 = (x785|(x786==(x787==x788)));

    if (t196 != 255) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x789 = INT32_MAX;
	volatile uint32_t x790 = 27828U;
	int8_t x791 = INT8_MIN;
	static int32_t t197 = INT32_MAX;

    t197 = (x789|(x790==(x791==x792)));

    if (t197 != INT32_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x793 = INT64_MAX;
	int8_t x794 = -21;
	volatile uint64_t x795 = 132821435760934LLU;
	int64_t x796 = INT64_MAX;
	int64_t t198 = INT64_MAX;

    t198 = (x793|(x794==(x795==x796)));

    if (t198 != INT64_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x797 = -1;
	uint64_t x799 = UINT64_MAX;
	int16_t x800 = -1;
	static int32_t t199 = 280;

    t199 = (x797|(x798==(x799==x800)));

    if (t199 != -1) { NG(); } else { ; }
	
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

