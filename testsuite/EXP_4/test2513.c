
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

uint16_t x3 = 2002U;
int16_t x4 = -18;
int32_t x5 = 422334;
int32_t x9 = -1;
int32_t x10 = INT32_MIN;
int16_t x12 = -1;
uint64_t x18 = UINT64_MAX;
static int32_t x20 = -1;
static volatile int32_t t5 = 305823019;
int64_t x27 = INT64_MAX;
static volatile int32_t x40 = 24904613;
uint16_t x43 = UINT16_MAX;
static int16_t x44 = 2150;
volatile uint8_t x45 = 0U;
static volatile int32_t t11 = 61;
int8_t x52 = -9;
volatile int8_t x53 = -1;
int64_t x54 = 42195976917005LL;
volatile int16_t x55 = INT16_MAX;
int32_t t13 = 102878;
volatile int32_t x61 = INT32_MIN;
uint16_t x65 = 11U;
uint8_t x66 = UINT8_MAX;
int16_t x67 = INT16_MIN;
int32_t t16 = -861607;
volatile int32_t t18 = 94;
int64_t x90 = INT64_MIN;
volatile int64_t x97 = INT64_MIN;
static int32_t x100 = -1;
int32_t t24 = 9;
int32_t t26 = -2304894;
volatile int64_t x111 = INT64_MAX;
volatile int64_t x117 = INT64_MIN;
int32_t t30 = 9875495;
volatile int32_t t32 = -49316;
int32_t x134 = 0;
static int32_t t33 = 3;
uint32_t x138 = 12U;
static int8_t x143 = INT8_MIN;
volatile int32_t t37 = 999162685;
volatile int32_t x155 = 4;
volatile int32_t t39 = -466052;
uint32_t x161 = UINT32_MAX;
int8_t x164 = 20;
int32_t x172 = 69134142;
int8_t x175 = -1;
int64_t x177 = INT64_MAX;
int32_t x179 = -5;
int32_t t45 = 58;
static int64_t x185 = INT64_MAX;
volatile int32_t t46 = 456674666;
uint8_t x189 = 3U;
static volatile int8_t x190 = INT8_MIN;
int8_t x191 = 1;
static uint64_t x195 = 30757888879LLU;
int16_t x210 = INT16_MIN;
int8_t x211 = -1;
int32_t x212 = INT32_MIN;
volatile int32_t t52 = 62359;
uint64_t x213 = UINT64_MAX;
int16_t x216 = -1;
int64_t x222 = -2LL;
static volatile int64_t x224 = 13LL;
uint16_t x226 = UINT16_MAX;
static volatile int64_t x227 = -11004470LL;
static volatile int16_t x233 = 0;
volatile int32_t t58 = -141768794;
uint64_t x239 = 13049153972LLU;
uint32_t x240 = 56607U;
static int32_t t59 = -1916123;
volatile int32_t t61 = 66;
uint16_t x253 = 1U;
volatile int32_t t64 = -1931637;
volatile int32_t t65 = 0;
volatile int16_t x266 = INT16_MIN;
uint32_t x267 = 5132255U;
volatile int8_t x270 = 0;
volatile int32_t t68 = -8;
int32_t x278 = -1;
int8_t x280 = 1;
static int64_t x287 = INT64_MAX;
int32_t t71 = 309;
int64_t x290 = -1LL;
int32_t x292 = INT32_MAX;
uint8_t x294 = 80U;
int32_t x304 = 960739;
volatile int8_t x306 = INT8_MIN;
volatile int32_t t82 = 89758871;
volatile uint8_t x334 = UINT8_MAX;
int8_t x346 = INT8_MAX;
uint64_t x347 = 129878352005LLU;
static uint16_t x349 = 0U;
int32_t x351 = INT32_MIN;
int32_t x352 = INT32_MIN;
int32_t x358 = INT32_MAX;
static int64_t x360 = -1LL;
uint64_t x361 = 195826534LLU;
int64_t x364 = INT64_MAX;
int64_t x367 = INT64_MIN;
static volatile uint32_t x368 = UINT32_MAX;
static int16_t x373 = INT16_MIN;
int32_t x385 = 0;
uint64_t x392 = UINT64_MAX;
uint32_t x396 = 13U;
static int32_t t98 = 1070;
static int16_t x401 = INT16_MIN;
int8_t x411 = INT8_MIN;
static volatile int32_t t102 = -25;
uint16_t x413 = UINT16_MAX;
static int16_t x414 = INT16_MIN;
volatile int32_t t103 = 97;
volatile int8_t x420 = -1;
volatile int32_t t104 = -12;
uint64_t x424 = UINT64_MAX;
static int8_t x432 = -1;
int32_t t107 = 23;
volatile int16_t x434 = INT16_MIN;
int64_t x438 = -1LL;
int64_t x439 = 606LL;
uint8_t x440 = 5U;
static int16_t x447 = INT16_MIN;
uint64_t x448 = 718952409970463030LLU;
volatile int64_t x451 = INT64_MAX;
int16_t x465 = 0;
int16_t x466 = INT16_MAX;
int32_t x468 = -24999523;
uint32_t x472 = 4U;
volatile int32_t x475 = INT32_MIN;
int32_t t118 = -1577543;
volatile int64_t x480 = -1LL;
static int8_t x481 = INT8_MIN;
int32_t x483 = INT32_MIN;
static int16_t x486 = INT16_MIN;
volatile int32_t t123 = 3449;
uint8_t x505 = 1U;
int16_t x510 = -1;
static volatile int8_t x518 = INT8_MAX;
volatile int8_t x521 = 7;
volatile int64_t x530 = -1LL;
static int8_t x533 = -1;
int64_t x536 = -148633536LL;
static int32_t t133 = -255657390;
int32_t t135 = -840711;
volatile int64_t x545 = INT64_MIN;
int32_t t136 = -38317331;
volatile int16_t x551 = -2;
volatile int32_t x556 = -1;
uint16_t x558 = 19780U;
volatile int32_t t142 = 1;
uint16_t x592 = 4240U;
uint32_t x594 = 4551U;
int32_t t148 = 1051744271;
int64_t x597 = INT64_MAX;
volatile uint64_t x601 = UINT64_MAX;
int8_t x602 = 12;
int8_t x604 = INT8_MIN;
volatile uint16_t x605 = 1665U;
static int64_t x608 = -279657328884LL;
volatile int32_t t151 = -927;
int32_t x619 = INT32_MIN;
int32_t t154 = 32062;
int16_t x630 = -1;
int64_t x634 = INT64_MIN;
uint8_t x635 = 10U;
volatile int8_t x637 = -1;
int64_t x643 = -1LL;
int64_t x644 = -13685195619219039LL;
static int8_t x645 = INT8_MIN;
uint8_t x646 = 0U;
int64_t x651 = INT64_MAX;
volatile int32_t t162 = -423988602;
int32_t x653 = 743000748;
volatile uint32_t x654 = 53629U;
int16_t x658 = INT16_MIN;
int16_t x659 = 477;
uint64_t x660 = 52586575090LLU;
int32_t x663 = 217830;
int16_t x667 = INT16_MAX;
static volatile int16_t x669 = INT16_MIN;
int32_t t168 = -1426;
static int32_t t169 = 15;
volatile int32_t t170 = 414;
static uint32_t x690 = 783557513U;
int32_t t172 = -102312;
int8_t x693 = INT8_MIN;
volatile int32_t t173 = 162352;
uint32_t x699 = 21U;
int64_t x702 = 61LL;
int16_t x714 = -253;
uint32_t x715 = UINT32_MAX;
volatile int32_t t179 = -260135;
volatile int32_t t182 = 490352952;
int64_t x734 = 103030769487602630LL;
int8_t x736 = INT8_MIN;
uint8_t x746 = UINT8_MAX;
int32_t x747 = -309;
int16_t x750 = INT16_MIN;
volatile int32_t x767 = 126;
static uint64_t x768 = 293775800223425LLU;
int16_t x772 = 605;
uint8_t x777 = 2U;
volatile int32_t t194 = -131665;
int32_t t195 = 58106669;
int64_t x787 = -1LL;
int16_t x788 = -1;
uint64_t x798 = 26582659LLU;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	volatile int64_t x2 = INT64_MIN;
	static volatile int32_t t0 = -41935;

    t0 = (x1!=(x2&(x3|x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x6 = 31900U;
	int32_t x7 = INT32_MIN;
	static int32_t x8 = INT32_MAX;
	int32_t t1 = 53395;

    t1 = (x5!=(x6&(x7|x8)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x11 = INT64_MAX;
	int32_t t2 = 488557;

    t2 = (x9!=(x10&(x11|x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = UINT16_MAX;
	int64_t x14 = INT64_MIN;
	int8_t x15 = INT8_MIN;
	uint16_t x16 = 170U;
	volatile int32_t t3 = -3328324;

    t3 = (x13!=(x14&(x15|x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = -1;
	int64_t x19 = 12499075409126LL;
	volatile int32_t t4 = 43379;

    t4 = (x17!=(x18&(x19|x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = INT8_MIN;
	volatile int16_t x22 = -51;
	volatile int32_t x23 = 118;
	uint16_t x24 = UINT16_MAX;

    t5 = (x21!=(x22&(x23|x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int16_t x25 = INT16_MIN;
	static int16_t x26 = INT16_MIN;
	static int32_t x28 = INT32_MIN;
	volatile int32_t t6 = -7;

    t6 = (x25!=(x26&(x27|x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 586U;
	static uint64_t x30 = 3306321LLU;
	uint64_t x31 = 15728827LLU;
	int16_t x32 = INT16_MIN;
	volatile int32_t t7 = 2979296;

    t7 = (x29!=(x30&(x31|x32)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = UINT16_MAX;
	static int32_t x34 = 78831626;
	static uint32_t x35 = 393647263U;
	volatile int64_t x36 = 3LL;
	volatile int32_t t8 = -2789061;

    t8 = (x33!=(x34&(x35|x36)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x37 = 26U;
	static int16_t x38 = INT16_MAX;
	static int16_t x39 = 5;
	int32_t t9 = -229149;

    t9 = (x37!=(x38&(x39|x40)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x41 = INT64_MIN;
	static int32_t x42 = -1;
	static volatile int32_t t10 = 29;

    t10 = (x41!=(x42&(x43|x44)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x46 = INT32_MIN;
	volatile uint64_t x47 = 6475919637314468LLU;
	int32_t x48 = 394;

    t11 = (x45!=(x46&(x47|x48)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile uint64_t x49 = 8874161858333LLU;
	int64_t x50 = INT64_MIN;
	uint16_t x51 = 0U;
	static volatile int32_t t12 = 1;

    t12 = (x49!=(x50&(x51|x52)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x56 = INT32_MIN;

    t13 = (x53!=(x54&(x55|x56)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = INT8_MIN;
	int16_t x58 = 18;
	static int64_t x59 = -1LL;
	int8_t x60 = INT8_MIN;
	int32_t t14 = -23;

    t14 = (x57!=(x58&(x59|x60)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x62 = INT16_MAX;
	int16_t x63 = 2;
	int16_t x64 = 1;
	int32_t t15 = -1;

    t15 = (x61!=(x62&(x63|x64)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x68 = 841615650LLU;

    t16 = (x65!=(x66&(x67|x68)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = INT8_MAX;
	int8_t x70 = INT8_MAX;
	volatile int32_t x71 = -1;
	int32_t x72 = INT32_MAX;
	int32_t t17 = 21;

    t17 = (x69!=(x70&(x71|x72)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = INT32_MIN;
	int64_t x74 = 73878759521LL;
	uint32_t x75 = 90924U;
	uint16_t x76 = UINT16_MAX;

    t18 = (x73!=(x74&(x75|x76)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x77 = INT32_MAX;
	int16_t x78 = INT16_MAX;
	volatile uint16_t x79 = UINT16_MAX;
	volatile int32_t x80 = -3165;
	int32_t t19 = -402565442;

    t19 = (x77!=(x78&(x79|x80)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = INT16_MIN;
	uint16_t x82 = UINT16_MAX;
	int64_t x83 = -10LL;
	int16_t x84 = INT16_MIN;
	volatile int32_t t20 = -81;

    t20 = (x81!=(x82&(x83|x84)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x85 = -1LL;
	int32_t x86 = -2844232;
	uint16_t x87 = 96U;
	uint32_t x88 = 36179327U;
	volatile int32_t t21 = -17009018;

    t21 = (x85!=(x86&(x87|x88)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = -94;
	static uint8_t x91 = 3U;
	int16_t x92 = 0;
	volatile int32_t t22 = -255;

    t22 = (x89!=(x90&(x91|x92)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile uint32_t x93 = 47572005U;
	int32_t x94 = INT32_MAX;
	int32_t x95 = -1;
	uint32_t x96 = 9U;
	static volatile int32_t t23 = 5;

    t23 = (x93!=(x94&(x95|x96)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x98 = 618LLU;
	volatile int64_t x99 = -2477790977691100490LL;

    t24 = (x97!=(x98&(x99|x100)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = INT8_MIN;
	int8_t x102 = INT8_MIN;
	volatile int16_t x103 = INT16_MAX;
	uint32_t x104 = 15543594U;
	int32_t t25 = -120;

    t25 = (x101!=(x102&(x103|x104)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = 763;
	uint32_t x106 = UINT32_MAX;
	int64_t x107 = -181341446293387820LL;
	int64_t x108 = -1LL;

    t26 = (x105!=(x106&(x107|x108)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = -14;
	int16_t x110 = INT16_MAX;
	uint16_t x112 = UINT16_MAX;
	int32_t t27 = 11900481;

    t27 = (x109!=(x110&(x111|x112)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = 32050830316143LL;
	int64_t x114 = 27LL;
	int64_t x115 = -1LL;
	volatile int32_t x116 = INT32_MIN;
	volatile int32_t t28 = 5;

    t28 = (x113!=(x114&(x115|x116)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x118 = -1LL;
	volatile int64_t x119 = INT64_MIN;
	int8_t x120 = INT8_MAX;
	volatile int32_t t29 = -3004988;

    t29 = (x117!=(x118&(x119|x120)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x121 = 1U;
	static int64_t x122 = INT64_MIN;
	uint64_t x123 = 28LLU;
	static int16_t x124 = -1;

    t30 = (x121!=(x122&(x123|x124)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = -1LL;
	int8_t x126 = -12;
	uint32_t x127 = UINT32_MAX;
	int64_t x128 = INT64_MAX;
	int32_t t31 = -103912;

    t31 = (x125!=(x126&(x127|x128)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int64_t x129 = INT64_MIN;
	uint32_t x130 = 0U;
	static int64_t x131 = INT64_MAX;
	volatile int64_t x132 = 1903871996289954LL;

    t32 = (x129!=(x130&(x131|x132)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x133 = INT8_MIN;
	volatile int64_t x135 = INT64_MIN;
	int32_t x136 = INT32_MIN;

    t33 = (x133!=(x134&(x135|x136)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x137 = 752699U;
	int32_t x139 = INT32_MIN;
	volatile int8_t x140 = -30;
	volatile int32_t t34 = -152593;

    t34 = (x137!=(x138&(x139|x140)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = INT16_MIN;
	static uint32_t x142 = 5U;
	int8_t x144 = INT8_MAX;
	static volatile int32_t t35 = 16302;

    t35 = (x141!=(x142&(x143|x144)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x145 = 53749360U;
	uint64_t x146 = 715184LLU;
	volatile int16_t x147 = INT16_MIN;
	static int8_t x148 = 5;
	volatile int32_t t36 = -971832142;

    t36 = (x145!=(x146&(x147|x148)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint16_t x149 = 1501U;
	int16_t x150 = INT16_MIN;
	volatile int32_t x151 = INT32_MAX;
	int64_t x152 = 171LL;

    t37 = (x149!=(x150&(x151|x152)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x153 = INT64_MIN;
	uint8_t x154 = 3U;
	uint8_t x156 = 1U;
	int32_t t38 = 189676420;

    t38 = (x153!=(x154&(x155|x156)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int32_t x157 = INT32_MIN;
	static int16_t x158 = INT16_MIN;
	uint8_t x159 = UINT8_MAX;
	int64_t x160 = INT64_MAX;

    t39 = (x157!=(x158&(x159|x160)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint16_t x162 = 8U;
	volatile int64_t x163 = INT64_MIN;
	volatile int32_t t40 = 191789;

    t40 = (x161!=(x162&(x163|x164)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = -1;
	uint8_t x166 = UINT8_MAX;
	int64_t x167 = -1LL;
	int16_t x168 = INT16_MIN;
	volatile int32_t t41 = -958721;

    t41 = (x165!=(x166&(x167|x168)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile uint64_t x169 = 4662257074306986027LLU;
	uint64_t x170 = 28809317915434308LLU;
	uint16_t x171 = UINT16_MAX;
	int32_t t42 = 0;

    t42 = (x169!=(x170&(x171|x172)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x173 = 925605795;
	static volatile uint16_t x174 = 9421U;
	uint64_t x176 = 98941967LLU;
	int32_t t43 = -10170;

    t43 = (x173!=(x174&(x175|x176)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x178 = 6993057058LL;
	int64_t x180 = INT64_MAX;
	volatile int32_t t44 = -1;

    t44 = (x177!=(x178&(x179|x180)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x181 = 2748U;
	int64_t x182 = INT64_MIN;
	int32_t x183 = INT32_MAX;
	static uint16_t x184 = 452U;

    t45 = (x181!=(x182&(x183|x184)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x186 = UINT64_MAX;
	int8_t x187 = INT8_MIN;
	int64_t x188 = 128267828621LL;

    t46 = (x185!=(x186&(x187|x188)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x192 = -1;
	static int32_t t47 = 107599587;

    t47 = (x189!=(x190&(x191|x192)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = 2;
	uint16_t x194 = UINT16_MAX;
	static int32_t x196 = INT32_MAX;
	int32_t t48 = 59916;

    t48 = (x193!=(x194&(x195|x196)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x197 = -1;
	int8_t x198 = INT8_MAX;
	static uint64_t x199 = 4112746418LLU;
	int16_t x200 = -42;
	volatile int32_t t49 = 34325798;

    t49 = (x197!=(x198&(x199|x200)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x201 = 147859;
	uint32_t x202 = UINT32_MAX;
	volatile int16_t x203 = -7;
	volatile uint64_t x204 = UINT64_MAX;
	int32_t t50 = 1231;

    t50 = (x201!=(x202&(x203|x204)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x205 = INT64_MIN;
	uint32_t x206 = 346544777U;
	int16_t x207 = -668;
	int64_t x208 = -33591346937633556LL;
	int32_t t51 = 11;

    t51 = (x205!=(x206&(x207|x208)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x209 = 63;

    t52 = (x209!=(x210&(x211|x212)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int16_t x214 = 617;
	int64_t x215 = INT64_MAX;
	volatile int32_t t53 = -4732;

    t53 = (x213!=(x214&(x215|x216)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x217 = UINT8_MAX;
	uint32_t x218 = UINT32_MAX;
	volatile int8_t x219 = INT8_MIN;
	static int8_t x220 = -44;
	int32_t t54 = 3286;

    t54 = (x217!=(x218&(x219|x220)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x221 = 361667513942LLU;
	uint16_t x223 = UINT16_MAX;
	static int32_t t55 = -48221342;

    t55 = (x221!=(x222&(x223|x224)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int64_t x225 = -1LL;
	static uint8_t x228 = 4U;
	volatile int32_t t56 = -38696;

    t56 = (x225!=(x226&(x227|x228)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = -1;
	int16_t x230 = -1881;
	static int64_t x231 = 65830743406LL;
	int32_t x232 = 471309026;
	volatile int32_t t57 = -58035651;

    t57 = (x229!=(x230&(x231|x232)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x234 = 43143158415LL;
	uint64_t x235 = UINT64_MAX;
	static int8_t x236 = INT8_MIN;

    t58 = (x233!=(x234&(x235|x236)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint32_t x237 = 249497U;
	uint8_t x238 = 2U;

    t59 = (x237!=(x238&(x239|x240)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x241 = -1;
	volatile uint16_t x242 = 21U;
	int8_t x243 = -3;
	int64_t x244 = INT64_MAX;
	volatile int32_t t60 = -8;

    t60 = (x241!=(x242&(x243|x244)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x245 = -96;
	volatile int8_t x246 = 7;
	uint16_t x247 = UINT16_MAX;
	uint32_t x248 = UINT32_MAX;

    t61 = (x245!=(x246&(x247|x248)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint32_t x249 = UINT32_MAX;
	uint64_t x250 = 1705058030276248LLU;
	static uint8_t x251 = 0U;
	volatile int8_t x252 = INT8_MIN;
	int32_t t62 = -29747;

    t62 = (x249!=(x250&(x251|x252)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x254 = 155496619U;
	int16_t x255 = INT16_MAX;
	int8_t x256 = INT8_MIN;
	volatile int32_t t63 = 48;

    t63 = (x253!=(x254&(x255|x256)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x257 = INT64_MIN;
	volatile uint16_t x258 = 1U;
	int16_t x259 = INT16_MIN;
	int16_t x260 = -1;

    t64 = (x257!=(x258&(x259|x260)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x261 = UINT16_MAX;
	int8_t x262 = INT8_MIN;
	uint16_t x263 = 1817U;
	static uint64_t x264 = 6078252530077623LLU;

    t65 = (x261!=(x262&(x263|x264)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x265 = INT32_MIN;
	uint64_t x268 = 17227LLU;
	volatile int32_t t66 = 60267871;

    t66 = (x265!=(x266&(x267|x268)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x269 = INT16_MIN;
	volatile int64_t x271 = INT64_MIN;
	uint64_t x272 = 179641853410LLU;
	int32_t t67 = -1377;

    t67 = (x269!=(x270&(x271|x272)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile uint32_t x273 = 183U;
	int32_t x274 = -1;
	int8_t x275 = INT8_MIN;
	int64_t x276 = 2332LL;

    t68 = (x273!=(x274&(x275|x276)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint16_t x277 = UINT16_MAX;
	int8_t x279 = INT8_MIN;
	volatile int32_t t69 = -9545888;

    t69 = (x277!=(x278&(x279|x280)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = 17;
	int32_t x282 = -16489;
	uint16_t x283 = 7U;
	uint16_t x284 = UINT16_MAX;
	int32_t t70 = -1608;

    t70 = (x281!=(x282&(x283|x284)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x285 = UINT8_MAX;
	volatile uint8_t x286 = UINT8_MAX;
	static volatile int8_t x288 = INT8_MAX;

    t71 = (x285!=(x286&(x287|x288)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = -1LL;
	int64_t x291 = 161551110767602238LL;
	volatile int32_t t72 = 27977;

    t72 = (x289!=(x290&(x291|x292)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = 4474423;
	uint64_t x295 = UINT64_MAX;
	int16_t x296 = -1;
	int32_t t73 = -207066469;

    t73 = (x293!=(x294&(x295|x296)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x297 = INT16_MAX;
	int8_t x298 = INT8_MIN;
	static int16_t x299 = INT16_MAX;
	uint64_t x300 = 454956217812309LLU;
	volatile int32_t t74 = 137223383;

    t74 = (x297!=(x298&(x299|x300)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint8_t x301 = 3U;
	volatile int64_t x302 = INT64_MIN;
	int64_t x303 = INT64_MIN;
	volatile int32_t t75 = -172556;

    t75 = (x301!=(x302&(x303|x304)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x305 = -44;
	int8_t x307 = INT8_MIN;
	int32_t x308 = INT32_MAX;
	int32_t t76 = 213020499;

    t76 = (x305!=(x306&(x307|x308)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = INT8_MIN;
	int16_t x310 = INT16_MIN;
	uint32_t x311 = 1U;
	static int16_t x312 = 2019;
	volatile int32_t t77 = 602934;

    t77 = (x309!=(x310&(x311|x312)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = 234;
	uint16_t x314 = UINT16_MAX;
	uint32_t x315 = 10745582U;
	static volatile uint64_t x316 = 72639574240287LLU;
	volatile int32_t t78 = -3;

    t78 = (x313!=(x314&(x315|x316)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x317 = UINT32_MAX;
	uint32_t x318 = 32U;
	uint16_t x319 = UINT16_MAX;
	static uint32_t x320 = 894U;
	int32_t t79 = -4175303;

    t79 = (x317!=(x318&(x319|x320)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint8_t x321 = 26U;
	static int16_t x322 = INT16_MAX;
	static int32_t x323 = -1;
	int64_t x324 = INT64_MAX;
	volatile int32_t t80 = 0;

    t80 = (x321!=(x322&(x323|x324)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x325 = 0;
	volatile int8_t x326 = INT8_MAX;
	int16_t x327 = -1;
	int64_t x328 = 2561426694273828635LL;
	volatile int32_t t81 = 189873910;

    t81 = (x325!=(x326&(x327|x328)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = -382854500278715LL;
	int32_t x330 = -8;
	static int16_t x331 = INT16_MIN;
	static int16_t x332 = INT16_MIN;

    t82 = (x329!=(x330&(x331|x332)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x333 = INT64_MAX;
	static volatile int32_t x335 = INT32_MIN;
	volatile uint64_t x336 = 54949304782392LLU;
	static int32_t t83 = 30;

    t83 = (x333!=(x334&(x335|x336)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = 57;
	volatile int16_t x338 = -1;
	int16_t x339 = 1;
	uint64_t x340 = UINT64_MAX;
	static int32_t t84 = 289355;

    t84 = (x337!=(x338&(x339|x340)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = -1158880520413269LL;
	int64_t x342 = INT64_MAX;
	static int32_t x343 = INT32_MAX;
	int16_t x344 = 1177;
	static int32_t t85 = -123541477;

    t85 = (x341!=(x342&(x343|x344)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x345 = INT8_MAX;
	volatile int8_t x348 = INT8_MAX;
	static volatile int32_t t86 = 3148080;

    t86 = (x345!=(x346&(x347|x348)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x350 = -1;
	static int32_t t87 = -3;

    t87 = (x349!=(x350&(x351|x352)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x353 = -1;
	static uint8_t x354 = 1U;
	volatile uint16_t x355 = 15U;
	volatile int16_t x356 = 2579;
	int32_t t88 = 28831;

    t88 = (x353!=(x354&(x355|x356)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x357 = INT16_MIN;
	int16_t x359 = INT16_MIN;
	int32_t t89 = 670;

    t89 = (x357!=(x358&(x359|x360)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x362 = 4U;
	uint32_t x363 = 2U;
	static int32_t t90 = 3;

    t90 = (x361!=(x362&(x363|x364)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x365 = 28321U;
	static int64_t x366 = 149630851440048LL;
	static int32_t t91 = 195791;

    t91 = (x365!=(x366&(x367|x368)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x369 = 6U;
	int32_t x370 = INT32_MAX;
	uint64_t x371 = 452146LLU;
	uint64_t x372 = 1044252415742858LLU;
	int32_t t92 = -840219;

    t92 = (x369!=(x370&(x371|x372)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x374 = 326;
	static uint8_t x375 = 9U;
	int16_t x376 = 1;
	static volatile int32_t t93 = -303124626;

    t93 = (x373!=(x374&(x375|x376)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint64_t x377 = 760873250LLU;
	int8_t x378 = -1;
	uint32_t x379 = 0U;
	static int16_t x380 = INT16_MAX;
	volatile int32_t t94 = -4;

    t94 = (x377!=(x378&(x379|x380)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x381 = INT32_MIN;
	int16_t x382 = INT16_MIN;
	uint8_t x383 = UINT8_MAX;
	int32_t x384 = INT32_MIN;
	int32_t t95 = 24065814;

    t95 = (x381!=(x382&(x383|x384)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x386 = 1U;
	int32_t x387 = INT32_MAX;
	static volatile int64_t x388 = INT64_MIN;
	volatile int32_t t96 = -63688580;

    t96 = (x385!=(x386&(x387|x388)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x389 = -1;
	int8_t x390 = INT8_MIN;
	uint64_t x391 = 5008LLU;
	int32_t t97 = 38;

    t97 = (x389!=(x390&(x391|x392)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x393 = INT64_MAX;
	int16_t x394 = INT16_MIN;
	int8_t x395 = INT8_MIN;

    t98 = (x393!=(x394&(x395|x396)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x397 = INT8_MAX;
	int16_t x398 = INT16_MAX;
	int32_t x399 = INT32_MIN;
	uint64_t x400 = UINT64_MAX;
	volatile int32_t t99 = 0;

    t99 = (x397!=(x398&(x399|x400)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint8_t x402 = 48U;
	uint64_t x403 = 228LLU;
	volatile int16_t x404 = INT16_MIN;
	int32_t t100 = 22932;

    t100 = (x401!=(x402&(x403|x404)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x405 = INT64_MIN;
	static uint8_t x406 = UINT8_MAX;
	uint8_t x407 = UINT8_MAX;
	int32_t x408 = 584;
	volatile int32_t t101 = 725735749;

    t101 = (x405!=(x406&(x407|x408)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x409 = INT16_MAX;
	int64_t x410 = INT64_MIN;
	int16_t x412 = 499;

    t102 = (x409!=(x410&(x411|x412)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x415 = 2;
	static volatile uint8_t x416 = UINT8_MAX;

    t103 = (x413!=(x414&(x415|x416)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x417 = INT64_MAX;
	int64_t x418 = INT64_MIN;
	volatile int8_t x419 = 1;

    t104 = (x417!=(x418&(x419|x420)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint32_t x421 = 1U;
	int64_t x422 = INT64_MIN;
	static int8_t x423 = INT8_MIN;
	volatile int32_t t105 = -1687;

    t105 = (x421!=(x422&(x423|x424)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int32_t x425 = INT32_MIN;
	int32_t x426 = -1605674;
	volatile int8_t x427 = -1;
	static int32_t x428 = -17751;
	int32_t t106 = -1;

    t106 = (x425!=(x426&(x427|x428)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x429 = UINT16_MAX;
	int8_t x430 = -1;
	int32_t x431 = INT32_MIN;

    t107 = (x429!=(x430&(x431|x432)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x433 = 31;
	static volatile int16_t x435 = INT16_MIN;
	uint16_t x436 = UINT16_MAX;
	volatile int32_t t108 = -495;

    t108 = (x433!=(x434&(x435|x436)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x437 = INT16_MIN;
	int32_t t109 = -6924;

    t109 = (x437!=(x438&(x439|x440)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x441 = INT16_MAX;
	static int8_t x442 = -1;
	uint32_t x443 = UINT32_MAX;
	static int32_t x444 = -1808179;
	static volatile int32_t t110 = 1135;

    t110 = (x441!=(x442&(x443|x444)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x445 = INT8_MIN;
	static int64_t x446 = INT64_MIN;
	int32_t t111 = -433;

    t111 = (x445!=(x446&(x447|x448)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x449 = INT16_MIN;
	int16_t x450 = -16358;
	int16_t x452 = -64;
	static int32_t t112 = -6252;

    t112 = (x449!=(x450&(x451|x452)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x453 = -667563029;
	int16_t x454 = 143;
	static uint8_t x455 = UINT8_MAX;
	static uint64_t x456 = UINT64_MAX;
	int32_t t113 = 664520710;

    t113 = (x453!=(x454&(x455|x456)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x457 = -1LL;
	volatile uint32_t x458 = UINT32_MAX;
	static volatile uint32_t x459 = 83U;
	uint32_t x460 = 39718U;
	volatile int32_t t114 = 157830699;

    t114 = (x457!=(x458&(x459|x460)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x461 = INT32_MIN;
	int16_t x462 = 2;
	int32_t x463 = INT32_MIN;
	uint64_t x464 = 593576LLU;
	volatile int32_t t115 = 200379194;

    t115 = (x461!=(x462&(x463|x464)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint16_t x467 = 21261U;
	int32_t t116 = -544493;

    t116 = (x465!=(x466&(x467|x468)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x469 = UINT32_MAX;
	static int32_t x470 = INT32_MIN;
	volatile int8_t x471 = -1;
	int32_t t117 = 0;

    t117 = (x469!=(x470&(x471|x472)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x473 = INT64_MIN;
	int64_t x474 = INT64_MAX;
	int64_t x476 = -1LL;

    t118 = (x473!=(x474&(x475|x476)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x477 = 10;
	uint16_t x478 = 347U;
	uint8_t x479 = UINT8_MAX;
	volatile int32_t t119 = 353070;

    t119 = (x477!=(x478&(x479|x480)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x482 = INT16_MIN;
	volatile uint64_t x484 = 9313882LLU;
	static int32_t t120 = -536944;

    t120 = (x481!=(x482&(x483|x484)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x485 = INT8_MIN;
	uint16_t x487 = 6U;
	int8_t x488 = 3;
	volatile int32_t t121 = 358;

    t121 = (x485!=(x486&(x487|x488)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x489 = INT8_MIN;
	int8_t x490 = -1;
	static int64_t x491 = 4370005LL;
	static int8_t x492 = -2;
	volatile int32_t t122 = 14462284;

    t122 = (x489!=(x490&(x491|x492)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x493 = UINT8_MAX;
	uint16_t x494 = UINT16_MAX;
	uint32_t x495 = UINT32_MAX;
	static uint64_t x496 = 67243LLU;

    t123 = (x493!=(x494&(x495|x496)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = 250;
	uint32_t x498 = 5744103U;
	static int16_t x499 = -417;
	uint64_t x500 = 58385816358678621LLU;
	static volatile int32_t t124 = 1803;

    t124 = (x497!=(x498&(x499|x500)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x501 = 24U;
	int16_t x502 = 11;
	int8_t x503 = INT8_MAX;
	uint64_t x504 = 357683912LLU;
	static int32_t t125 = 909;

    t125 = (x501!=(x502&(x503|x504)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x506 = 378004616U;
	volatile int64_t x507 = INT64_MIN;
	int32_t x508 = INT32_MAX;
	volatile int32_t t126 = -15;

    t126 = (x505!=(x506&(x507|x508)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x509 = -1;
	volatile uint16_t x511 = UINT16_MAX;
	int8_t x512 = 6;
	static int32_t t127 = -5627;

    t127 = (x509!=(x510&(x511|x512)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x513 = 210U;
	uint32_t x514 = 1072577U;
	static int64_t x515 = INT64_MAX;
	uint32_t x516 = 2782801U;
	static volatile int32_t t128 = 183152;

    t128 = (x513!=(x514&(x515|x516)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int64_t x517 = -1LL;
	int16_t x519 = INT16_MAX;
	int32_t x520 = -1084;
	int32_t t129 = 1086;

    t129 = (x517!=(x518&(x519|x520)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x522 = 38;
	int8_t x523 = -1;
	volatile uint64_t x524 = UINT64_MAX;
	int32_t t130 = 209;

    t130 = (x521!=(x522&(x523|x524)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x525 = -1758040058708865LL;
	uint16_t x526 = UINT16_MAX;
	uint16_t x527 = 1U;
	int8_t x528 = INT8_MIN;
	int32_t t131 = 109;

    t131 = (x525!=(x526&(x527|x528)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x529 = 3U;
	uint8_t x531 = UINT8_MAX;
	volatile int32_t x532 = INT32_MAX;
	volatile int32_t t132 = -69;

    t132 = (x529!=(x530&(x531|x532)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x534 = -1;
	static int16_t x535 = 573;

    t133 = (x533!=(x534&(x535|x536)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x537 = INT16_MIN;
	int8_t x538 = INT8_MIN;
	static uint32_t x539 = 6072468U;
	int8_t x540 = INT8_MIN;
	volatile int32_t t134 = 69786798;

    t134 = (x537!=(x538&(x539|x540)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = INT32_MIN;
	int32_t x542 = INT32_MIN;
	volatile int64_t x543 = 15882LL;
	volatile uint32_t x544 = 7U;

    t135 = (x541!=(x542&(x543|x544)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x546 = 5;
	int16_t x547 = INT16_MIN;
	uint32_t x548 = UINT32_MAX;

    t136 = (x545!=(x546&(x547|x548)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint8_t x549 = 23U;
	int32_t x550 = -18742;
	uint32_t x552 = 14253251U;
	volatile int32_t t137 = 0;

    t137 = (x549!=(x550&(x551|x552)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x553 = INT16_MIN;
	int32_t x554 = INT32_MIN;
	static uint8_t x555 = 2U;
	volatile int32_t t138 = -991554;

    t138 = (x553!=(x554&(x555|x556)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint8_t x557 = UINT8_MAX;
	static int16_t x559 = INT16_MAX;
	int64_t x560 = INT64_MAX;
	int32_t t139 = 1;

    t139 = (x557!=(x558&(x559|x560)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x561 = -1051690LL;
	int16_t x562 = INT16_MAX;
	uint16_t x563 = UINT16_MAX;
	int8_t x564 = -1;
	volatile int32_t t140 = 2620525;

    t140 = (x561!=(x562&(x563|x564)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = INT8_MAX;
	uint32_t x566 = 1382200940U;
	uint8_t x567 = 45U;
	uint16_t x568 = UINT16_MAX;
	int32_t t141 = -638215;

    t141 = (x565!=(x566&(x567|x568)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x569 = 2U;
	volatile int32_t x570 = -10728681;
	static volatile uint16_t x571 = 12U;
	int64_t x572 = 734108007963482LL;

    t142 = (x569!=(x570&(x571|x572)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x573 = -1;
	volatile int32_t x574 = INT32_MIN;
	uint16_t x575 = UINT16_MAX;
	int8_t x576 = INT8_MAX;
	volatile int32_t t143 = -37;

    t143 = (x573!=(x574&(x575|x576)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x577 = -221493593226517589LL;
	uint8_t x578 = UINT8_MAX;
	int16_t x579 = -1;
	volatile int64_t x580 = -1LL;
	int32_t t144 = -13773;

    t144 = (x577!=(x578&(x579|x580)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x581 = INT8_MAX;
	int8_t x582 = INT8_MAX;
	static uint64_t x583 = 15LLU;
	int8_t x584 = -18;
	int32_t t145 = 36;

    t145 = (x581!=(x582&(x583|x584)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x585 = -1;
	volatile int16_t x586 = 1;
	int16_t x587 = INT16_MIN;
	static int64_t x588 = INT64_MIN;
	volatile int32_t t146 = -5;

    t146 = (x585!=(x586&(x587|x588)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x589 = INT64_MAX;
	volatile int8_t x590 = INT8_MIN;
	int16_t x591 = -1000;
	volatile int32_t t147 = -58140601;

    t147 = (x589!=(x590&(x591|x592)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x593 = 589277551338493475LL;
	uint8_t x595 = UINT8_MAX;
	volatile int8_t x596 = INT8_MIN;

    t148 = (x593!=(x594&(x595|x596)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x598 = UINT16_MAX;
	uint8_t x599 = 55U;
	uint64_t x600 = 41606238LLU;
	int32_t t149 = -983846;

    t149 = (x597!=(x598&(x599|x600)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x603 = INT8_MAX;
	static volatile int32_t t150 = 354385760;

    t150 = (x601!=(x602&(x603|x604)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x606 = -1LL;
	uint64_t x607 = 7654767405513LLU;

    t151 = (x605!=(x606&(x607|x608)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x609 = UINT64_MAX;
	int64_t x610 = 301172LL;
	int64_t x611 = INT64_MIN;
	int32_t x612 = INT32_MIN;
	static int32_t t152 = 525030;

    t152 = (x609!=(x610&(x611|x612)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x613 = 5694679LLU;
	int64_t x614 = INT64_MIN;
	int8_t x615 = INT8_MIN;
	uint64_t x616 = 16599390408290LLU;
	int32_t t153 = 604737876;

    t153 = (x613!=(x614&(x615|x616)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x617 = 5599393544LLU;
	int32_t x618 = -1;
	volatile int16_t x620 = INT16_MAX;

    t154 = (x617!=(x618&(x619|x620)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x621 = 70U;
	int8_t x622 = -49;
	static uint32_t x623 = UINT32_MAX;
	int32_t x624 = INT32_MAX;
	int32_t t155 = -3777562;

    t155 = (x621!=(x622&(x623|x624)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x625 = INT64_MAX;
	uint16_t x626 = UINT16_MAX;
	volatile int32_t x627 = INT32_MIN;
	int8_t x628 = 0;
	volatile int32_t t156 = -1;

    t156 = (x625!=(x626&(x627|x628)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x629 = -1LL;
	int64_t x631 = INT64_MIN;
	uint64_t x632 = UINT64_MAX;
	int32_t t157 = -70820406;

    t157 = (x629!=(x630&(x631|x632)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x633 = INT8_MIN;
	volatile int32_t x636 = 26;
	static volatile int32_t t158 = -3;

    t158 = (x633!=(x634&(x635|x636)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x638 = -4032888053996048748LL;
	uint64_t x639 = 4964263630LLU;
	int64_t x640 = INT64_MAX;
	int32_t t159 = 0;

    t159 = (x637!=(x638&(x639|x640)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x641 = 3U;
	static uint16_t x642 = 9603U;
	int32_t t160 = 2;

    t160 = (x641!=(x642&(x643|x644)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x647 = 7U;
	int16_t x648 = INT16_MIN;
	volatile int32_t t161 = 4672;

    t161 = (x645!=(x646&(x647|x648)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = INT64_MAX;
	uint32_t x650 = UINT32_MAX;
	int64_t x652 = -1LL;

    t162 = (x649!=(x650&(x651|x652)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x655 = 1U;
	uint32_t x656 = 2943U;
	volatile int32_t t163 = 1299;

    t163 = (x653!=(x654&(x655|x656)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x657 = 1312;
	int32_t t164 = 36194;

    t164 = (x657!=(x658&(x659|x660)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = INT64_MIN;
	int32_t x662 = -1;
	int32_t x664 = INT32_MIN;
	int32_t t165 = -2193859;

    t165 = (x661!=(x662&(x663|x664)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x665 = INT32_MIN;
	volatile uint64_t x666 = 8783804275470998975LLU;
	int64_t x668 = INT64_MAX;
	volatile int32_t t166 = 6355;

    t166 = (x665!=(x666&(x667|x668)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x670 = INT16_MIN;
	uint8_t x671 = 57U;
	int16_t x672 = INT16_MIN;
	int32_t t167 = -1;

    t167 = (x669!=(x670&(x671|x672)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x673 = 89U;
	int32_t x674 = 2298;
	int16_t x675 = 2222;
	uint32_t x676 = 134142803U;

    t168 = (x673!=(x674&(x675|x676)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x677 = INT8_MIN;
	int8_t x678 = INT8_MIN;
	int64_t x679 = -1LL;
	int64_t x680 = -1LL;

    t169 = (x677!=(x678&(x679|x680)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = INT32_MIN;
	int64_t x682 = INT64_MIN;
	volatile int8_t x683 = 29;
	uint64_t x684 = UINT64_MAX;

    t170 = (x681!=(x682&(x683|x684)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x685 = 7562721968863873LLU;
	int32_t x686 = INT32_MIN;
	int16_t x687 = INT16_MIN;
	static int64_t x688 = INT64_MAX;
	volatile int32_t t171 = -11999132;

    t171 = (x685!=(x686&(x687|x688)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x689 = UINT16_MAX;
	static int16_t x691 = -1;
	int64_t x692 = -1LL;

    t172 = (x689!=(x690&(x691|x692)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x694 = INT64_MIN;
	static int32_t x695 = INT32_MIN;
	static int8_t x696 = -1;

    t173 = (x693!=(x694&(x695|x696)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x697 = 1;
	volatile uint8_t x698 = UINT8_MAX;
	static volatile int16_t x700 = -1;
	int32_t t174 = 1;

    t174 = (x697!=(x698&(x699|x700)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x701 = 4354U;
	uint64_t x703 = 3633259326845122731LLU;
	volatile int8_t x704 = INT8_MIN;
	static int32_t t175 = 7;

    t175 = (x701!=(x702&(x703|x704)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x705 = INT8_MAX;
	volatile int8_t x706 = INT8_MIN;
	uint8_t x707 = UINT8_MAX;
	static volatile int16_t x708 = INT16_MIN;
	static volatile int32_t t176 = -26841;

    t176 = (x705!=(x706&(x707|x708)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x709 = 44;
	static int32_t x710 = -1;
	static int16_t x711 = INT16_MAX;
	static int64_t x712 = INT64_MIN;
	int32_t t177 = -40636;

    t177 = (x709!=(x710&(x711|x712)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint32_t x713 = 259891264U;
	int64_t x716 = INT64_MIN;
	volatile int32_t t178 = -92188;

    t178 = (x713!=(x714&(x715|x716)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x717 = 0U;
	static int64_t x718 = INT64_MAX;
	int8_t x719 = INT8_MAX;
	volatile int32_t x720 = INT32_MIN;

    t179 = (x717!=(x718&(x719|x720)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x721 = -1;
	int32_t x722 = -51254534;
	int64_t x723 = 111899952LL;
	static uint8_t x724 = 1U;
	volatile int32_t t180 = 57;

    t180 = (x721!=(x722&(x723|x724)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x725 = INT8_MIN;
	volatile uint32_t x726 = 600476U;
	uint32_t x727 = 650708658U;
	uint64_t x728 = 224914LLU;
	volatile int32_t t181 = 156;

    t181 = (x725!=(x726&(x727|x728)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x729 = INT8_MAX;
	uint8_t x730 = UINT8_MAX;
	static int64_t x731 = 16797999LL;
	volatile int64_t x732 = -1LL;

    t182 = (x729!=(x730&(x731|x732)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x733 = INT16_MAX;
	static int64_t x735 = -9367LL;
	int32_t t183 = -199174095;

    t183 = (x733!=(x734&(x735|x736)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x737 = UINT64_MAX;
	int64_t x738 = 688LL;
	int32_t x739 = -1;
	int64_t x740 = INT64_MAX;
	static volatile int32_t t184 = -198446;

    t184 = (x737!=(x738&(x739|x740)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x741 = -1LL;
	static int16_t x742 = INT16_MIN;
	static int64_t x743 = -1LL;
	static int16_t x744 = -762;
	int32_t t185 = -58983;

    t185 = (x741!=(x742&(x743|x744)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x745 = 0;
	volatile int64_t x748 = -98693LL;
	volatile int32_t t186 = -585637;

    t186 = (x745!=(x746&(x747|x748)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x749 = UINT8_MAX;
	static uint8_t x751 = 22U;
	int16_t x752 = -1;
	static int32_t t187 = -154905477;

    t187 = (x749!=(x750&(x751|x752)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x753 = UINT16_MAX;
	int8_t x754 = INT8_MAX;
	int32_t x755 = -1;
	int8_t x756 = INT8_MAX;
	volatile int32_t t188 = -916;

    t188 = (x753!=(x754&(x755|x756)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = INT64_MIN;
	static int16_t x758 = -1;
	int16_t x759 = INT16_MIN;
	static volatile int64_t x760 = INT64_MIN;
	volatile int32_t t189 = -8011;

    t189 = (x757!=(x758&(x759|x760)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x761 = -1LL;
	uint64_t x762 = 126758547LLU;
	static int16_t x763 = INT16_MAX;
	int64_t x764 = -1LL;
	static int32_t t190 = -1;

    t190 = (x761!=(x762&(x763|x764)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x765 = -7939847036130LL;
	volatile int16_t x766 = -1;
	volatile int32_t t191 = 232651;

    t191 = (x765!=(x766&(x767|x768)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x769 = -17958427719900175LL;
	int64_t x770 = INT64_MAX;
	uint8_t x771 = UINT8_MAX;
	volatile int32_t t192 = -881539238;

    t192 = (x769!=(x770&(x771|x772)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x773 = INT8_MIN;
	static volatile int64_t x774 = INT64_MIN;
	uint64_t x775 = 55LLU;
	volatile uint32_t x776 = 335593231U;
	volatile int32_t t193 = -290792;

    t193 = (x773!=(x774&(x775|x776)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint64_t x778 = UINT64_MAX;
	int16_t x779 = -245;
	static volatile int32_t x780 = INT32_MIN;

    t194 = (x777!=(x778&(x779|x780)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = INT16_MIN;
	static volatile int32_t x782 = INT32_MAX;
	static int16_t x783 = -1;
	static volatile int64_t x784 = 1793678970LL;

    t195 = (x781!=(x782&(x783|x784)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x785 = -1LL;
	static uint8_t x786 = UINT8_MAX;
	int32_t t196 = -556;

    t196 = (x785!=(x786&(x787|x788)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = INT8_MIN;
	int32_t x790 = INT32_MIN;
	volatile int64_t x791 = INT64_MAX;
	int16_t x792 = -1;
	int32_t t197 = 1;

    t197 = (x789!=(x790&(x791|x792)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x793 = -58128650;
	int32_t x794 = -1;
	int64_t x795 = INT64_MIN;
	int8_t x796 = -1;
	int32_t t198 = -9424317;

    t198 = (x793!=(x794&(x795|x796)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x797 = INT32_MAX;
	static volatile int32_t x799 = INT32_MIN;
	int64_t x800 = INT64_MAX;
	volatile int32_t t199 = -1;

    t199 = (x797!=(x798&(x799|x800)));

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

