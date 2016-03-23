
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

int16_t x5 = INT16_MIN;
int32_t x6 = 115;
int16_t x20 = -113;
uint32_t x30 = UINT32_MAX;
int16_t x32 = INT16_MAX;
uint32_t t5 = 241989025U;
uint32_t x33 = 456498U;
int16_t x39 = INT16_MAX;
int8_t x41 = 18;
volatile int32_t x48 = INT32_MIN;
int32_t t10 = -157103;
static int8_t x53 = INT8_MIN;
int16_t x81 = INT16_MIN;
volatile int64_t t19 = 54394795240LL;
int64_t x89 = -1LL;
int16_t x100 = -31;
static int16_t x104 = INT16_MAX;
volatile int8_t x108 = -1;
int32_t x109 = -1489;
uint64_t t26 = 22870056658332LLU;
int16_t x122 = INT16_MIN;
static volatile uint32_t x133 = UINT32_MAX;
int8_t x136 = INT8_MIN;
uint32_t t31 = 174568898U;
volatile uint64_t x143 = UINT64_MAX;
volatile uint64_t t35 = 62836429LLU;
int64_t x159 = 13032478LL;
int16_t x161 = 6414;
volatile int32_t x167 = -1454;
int16_t x168 = INT16_MIN;
uint64_t x172 = 1135076364280LLU;
volatile int16_t x175 = 425;
volatile int32_t x179 = 0;
volatile int8_t x191 = INT8_MIN;
uint8_t x198 = 1U;
static int16_t x205 = -1;
int8_t x209 = -1;
uint64_t x211 = 83870502446LLU;
uint32_t x212 = 517649675U;
uint32_t x213 = 66436037U;
uint8_t x218 = UINT8_MAX;
volatile int32_t t51 = -56670;
int64_t x224 = INT64_MIN;
static volatile int64_t t52 = 6203LL;
static uint16_t x225 = 11346U;
int32_t x229 = 4018;
int8_t x231 = 1;
int64_t t54 = 25701975LL;
volatile int16_t x233 = INT16_MIN;
uint16_t x234 = UINT16_MAX;
int16_t x235 = 5425;
int16_t x239 = INT16_MIN;
int16_t x243 = -1;
uint32_t x246 = 16667542U;
int64_t x247 = -1LL;
static int64_t t58 = 52554736968712911LL;
int16_t x249 = 4;
int8_t x252 = -1;
static volatile int16_t x259 = INT16_MAX;
static volatile uint8_t x261 = UINT8_MAX;
int64_t x264 = INT64_MIN;
static int64_t x266 = INT64_MIN;
int16_t x275 = INT16_MIN;
volatile uint64_t t66 = 76784LLU;
static int32_t t67 = 30694;
int8_t x287 = INT8_MIN;
uint64_t x288 = 1LLU;
uint32_t x290 = UINT32_MAX;
volatile uint32_t x292 = UINT32_MAX;
uint8_t x299 = 126U;
uint64_t t70 = 437871876LLU;
int8_t x302 = 3;
volatile int32_t x304 = INT32_MAX;
int64_t t72 = -1760608238738LL;
uint16_t x309 = 6868U;
int32_t x310 = INT32_MIN;
int16_t x312 = 0;
static uint32_t x316 = 245757U;
uint8_t x320 = 103U;
static int32_t x321 = -1;
int8_t x322 = INT8_MIN;
int16_t x333 = INT16_MAX;
static int16_t x334 = 0;
int64_t t78 = 1203309578095635721LL;
int64_t x339 = INT64_MIN;
uint32_t x345 = UINT32_MAX;
int8_t x349 = INT8_MIN;
int8_t x363 = -1;
uint32_t x366 = 409U;
uint8_t x367 = 20U;
volatile uint32_t x368 = UINT32_MAX;
volatile uint32_t t85 = 5383U;
static volatile int64_t x371 = INT64_MAX;
volatile int64_t t86 = 132115501527615LL;
static int64_t x380 = 150081318258915LL;
int16_t x381 = -13;
static int32_t x383 = INT32_MIN;
uint64_t x385 = 570939231968035136LLU;
uint64_t x406 = UINT64_MAX;
uint16_t x408 = UINT16_MAX;
int32_t t94 = 734986;
volatile int64_t t95 = -4785206294047LL;
uint32_t x429 = UINT32_MAX;
int8_t x430 = INT8_MAX;
uint16_t x440 = UINT16_MAX;
int8_t x449 = INT8_MAX;
static int32_t x455 = INT32_MAX;
uint32_t x459 = UINT32_MAX;
int16_t x460 = INT16_MAX;
volatile int64_t t105 = -1LL;
int16_t x469 = -1;
static int8_t x473 = 17;
int8_t x476 = INT8_MIN;
uint16_t x484 = 11U;
volatile int16_t x500 = INT16_MIN;
uint32_t x502 = 55U;
static volatile uint32_t x510 = 122034016U;
int8_t x511 = 10;
volatile uint32_t t113 = 2370U;
int16_t x514 = INT16_MIN;
uint64_t x519 = 2954831596580885716LLU;
int8_t x522 = INT8_MAX;
static int32_t x523 = INT32_MIN;
int16_t x532 = -1;
uint32_t x533 = UINT32_MAX;
int16_t x540 = INT16_MAX;
int64_t t120 = -75LL;
int8_t x554 = INT8_MIN;
int16_t x563 = 924;
uint32_t t125 = 1003U;
uint16_t x573 = 21183U;
int8_t x577 = INT8_MAX;
uint32_t x593 = 70580U;
volatile int32_t x597 = 19897634;
uint32_t x600 = 8005U;
volatile uint32_t t132 = 129264928U;
int8_t x603 = INT8_MIN;
uint64_t x605 = 11799106LLU;
static int32_t x606 = INT32_MAX;
volatile uint8_t x608 = 58U;
volatile uint64_t t134 = 201598030517720417LLU;
volatile uint64_t t135 = 228071374472LLU;
static int16_t x615 = INT16_MAX;
uint8_t x618 = 34U;
static int16_t x620 = INT16_MIN;
uint8_t x623 = 97U;
int64_t x624 = -42225785023197LL;
uint32_t x629 = UINT32_MAX;
int32_t x631 = -3;
static uint64_t x634 = UINT64_MAX;
int16_t x639 = INT16_MAX;
uint64_t x646 = UINT64_MAX;
static volatile int16_t x649 = INT16_MAX;
int64_t x652 = 1LL;
int32_t x654 = INT32_MAX;
int32_t x657 = INT32_MAX;
int16_t x663 = -1;
uint64_t t148 = 185607646719LLU;
uint8_t x674 = UINT8_MAX;
static uint64_t x677 = 2667192516785238LLU;
volatile uint64_t x678 = 17898150546LLU;
static uint64_t t150 = 10431885344445675LLU;
uint32_t x681 = 26760300U;
int16_t x685 = -929;
volatile int32_t t152 = 2350;
uint16_t x694 = 3U;
volatile uint32_t t155 = 12011225U;
int64_t x701 = -1LL;
static int8_t x707 = INT8_MAX;
uint16_t x716 = UINT16_MAX;
uint32_t x726 = UINT32_MAX;
volatile uint64_t x734 = 282589205651198565LLU;
uint16_t x735 = UINT16_MAX;
int64_t x739 = -1LL;
static int64_t x747 = -1027955LL;
int16_t x756 = INT16_MIN;
int32_t x757 = -1;
volatile uint64_t x759 = UINT64_MAX;
int32_t x762 = -1;
volatile uint64_t x763 = 241LLU;
volatile int64_t x769 = INT64_MIN;
int16_t x782 = INT16_MIN;
int8_t x790 = INT8_MIN;
volatile uint16_t x793 = 0U;
uint32_t x795 = UINT32_MAX;
static volatile int32_t x796 = INT32_MAX;
int16_t x803 = 13;
int16_t x809 = -1;
volatile int8_t x810 = 7;
uint32_t x812 = UINT32_MAX;
uint8_t x819 = 17U;
static int16_t x820 = 54;
int8_t x821 = INT8_MIN;
volatile int8_t x825 = INT8_MIN;
static volatile int16_t x830 = -3;
uint16_t x832 = UINT16_MAX;
static uint64_t t186 = 1803436641799110LLU;
static int16_t x839 = 450;
uint8_t x846 = UINT8_MAX;
volatile int16_t x853 = 37;
uint64_t x859 = UINT64_MAX;
int16_t x860 = 1;
int8_t x865 = -8;
static volatile int64_t x868 = 10347903788814145LL;
volatile uint8_t x873 = 3U;
int16_t x886 = 1;
int16_t x891 = INT16_MAX;
static volatile int32_t x892 = INT32_MIN;
int64_t t198 = -336817724650750266LL;
int32_t x909 = -1;
uint32_t t199 = 4U;


void f0(void) {
    	int16_t x1 = -1;
	volatile int64_t x2 = 71LL;
	uint8_t x3 = UINT8_MAX;
	volatile int64_t x4 = 21030492593837LL;
	int64_t t0 = -436942543207LL;

    t0 = (x1%(x2|(x3+x4)));

    if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x7 = UINT32_MAX;
	volatile uint64_t x8 = UINT64_MAX;
	volatile uint64_t t1 = 1224860485LLU;

    t1 = (x5%(x6|(x7+x8)));

    if (t1 != 4294934528LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MAX;
	static uint8_t x10 = 7U;
	uint32_t x11 = 124577U;
	int8_t x12 = INT8_MAX;
	volatile uint32_t t2 = 487042U;

    t2 = (x9%(x10|(x11+x12)));

    if (t2 != 32767U) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x17 = 1U;
	int8_t x18 = -1;
	volatile int16_t x19 = 2202;
	int32_t t3 = 87564247;

    t3 = (x17%(x18|(x19+x20)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x25 = -20;
	uint32_t x26 = 6843483U;
	uint32_t x27 = 27U;
	int64_t x28 = -91716726606LL;
	volatile int64_t t4 = -12283215741368LL;

    t4 = (x25%(x26|(x27+x28)));

    if (t4 != -20LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x29 = INT32_MAX;
	uint8_t x31 = 71U;

    t5 = (x29%(x30|(x31+x32)));

    if (t5 != 2147483647U) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x34 = INT16_MAX;
	uint8_t x35 = 1U;
	int16_t x36 = INT16_MAX;
	static uint32_t t6 = 34U;

    t6 = (x33%(x34|(x35+x36)));

    if (t6 != 63288U) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint64_t x37 = 2283903516557346025LLU;
	int32_t x38 = 40419261;
	uint64_t x40 = 8404316141782654LLU;
	uint64_t t7 = 2888LLU;

    t7 = (x37%(x38|(x39+x40)));

    if (t7 != 6333840842639382LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x42 = 489U;
	int16_t x43 = -1;
	uint16_t x44 = 16U;
	static uint32_t t8 = 13U;

    t8 = (x41%(x42|(x43+x44)));

    if (t8 != 18U) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x45 = INT32_MIN;
	uint8_t x46 = 31U;
	int16_t x47 = INT16_MAX;
	int32_t t9 = -5968;

    t9 = (x45%(x46|(x47+x48)));

    if (t9 != -32767) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint16_t x49 = 14182U;
	int16_t x50 = -467;
	uint16_t x51 = 7619U;
	uint16_t x52 = 1754U;

    t10 = (x49%(x50|(x51+x52)));

    if (t10 != 293) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x54 = -1LL;
	uint8_t x55 = UINT8_MAX;
	int8_t x56 = 33;
	static volatile int64_t t11 = -242644338760LL;

    t11 = (x53%(x54|(x55+x56)));

    if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x57 = 18U;
	volatile uint32_t x58 = UINT32_MAX;
	volatile uint8_t x59 = 0U;
	int8_t x60 = -1;
	uint32_t t12 = 25654U;

    t12 = (x57%(x58|(x59+x60)));

    if (t12 != 18U) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x61 = INT64_MIN;
	uint64_t x62 = 239570256LLU;
	int8_t x63 = INT8_MIN;
	uint64_t x64 = UINT64_MAX;
	uint64_t t13 = 21LLU;

    t13 = (x61%(x62|(x63+x64)));

    if (t13 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x65 = 128222467U;
	static int64_t x66 = -4559110739287428014LL;
	int8_t x67 = 26;
	uint16_t x68 = UINT16_MAX;
	int64_t t14 = -438641LL;

    t14 = (x65%(x66|(x67+x68)));

    if (t14 != 128222467LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x69 = INT32_MIN;
	static volatile int32_t x70 = -1;
	static int64_t x71 = INT64_MAX;
	int16_t x72 = -1;
	static volatile int64_t t15 = 1LL;

    t15 = (x69%(x70|(x71+x72)));

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x73 = 32U;
	volatile uint64_t x74 = 4073910437207LLU;
	volatile int16_t x75 = -1;
	static volatile int64_t x76 = -1LL;
	volatile uint64_t t16 = 32LLU;

    t16 = (x73%(x74|(x75+x76)));

    if (t16 != 32LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x77 = INT64_MAX;
	int64_t x78 = INT64_MIN;
	static uint16_t x79 = 679U;
	volatile int16_t x80 = INT16_MIN;
	volatile int64_t t17 = 234793241498LL;

    t17 = (x77%(x78|(x79+x80)));

    if (t17 != 1323LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x82 = INT8_MAX;
	static int32_t x83 = -1;
	int32_t x84 = -1;
	volatile int32_t t18 = -264295;

    t18 = (x81%(x82|(x83+x84)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x85 = INT32_MIN;
	int8_t x86 = INT8_MAX;
	static volatile int64_t x87 = INT64_MIN;
	int64_t x88 = INT64_MAX;

    t19 = (x85%(x86|(x87+x88)));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x90 = -458LL;
	uint8_t x91 = 3U;
	uint16_t x92 = UINT16_MAX;
	volatile int64_t t20 = -394867213483268LL;

    t20 = (x89%(x90|(x91+x92)));

    if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x93 = INT16_MIN;
	static int16_t x94 = INT16_MIN;
	volatile int64_t x95 = INT64_MIN;
	static int8_t x96 = INT8_MAX;
	volatile int64_t t21 = -52068909LL;

    t21 = (x93%(x94|(x95+x96)));

    if (t21 != -127LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x97 = -119966221;
	uint64_t x98 = 27921LLU;
	int16_t x99 = 90;
	uint64_t t22 = 3460597260262LLU;

    t22 = (x97%(x98|(x99+x100)));

    if (t22 != 27942LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x101 = INT8_MIN;
	int32_t x102 = INT32_MIN;
	int8_t x103 = -1;
	int32_t t23 = -272441038;

    t23 = (x101%(x102|(x103+x104)));

    if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint16_t x105 = 60U;
	static int8_t x106 = INT8_MIN;
	uint32_t x107 = 2287U;
	volatile uint32_t t24 = 601U;

    t24 = (x105%(x106|(x107+x108)));

    if (t24 != 60U) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x110 = 8721LL;
	uint32_t x111 = 870U;
	static int8_t x112 = -1;
	int64_t t25 = 0LL;

    t25 = (x109%(x110|(x111+x112)));

    if (t25 != -1489LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x113 = 653693LL;
	int32_t x114 = INT32_MAX;
	uint64_t x115 = 3523572LLU;
	int32_t x116 = -8100616;

    t26 = (x113%(x114|(x115+x116)));

    if (t26 != 653693LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x117 = INT16_MIN;
	static volatile uint8_t x118 = 0U;
	int8_t x119 = INT8_MAX;
	int8_t x120 = INT8_MIN;
	int32_t t27 = 28185260;

    t27 = (x117%(x118|(x119+x120)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int16_t x121 = INT16_MIN;
	uint16_t x123 = 83U;
	int8_t x124 = -6;
	int32_t t28 = -27;

    t28 = (x121%(x122|(x123+x124)));

    if (t28 != -77) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x125 = INT16_MAX;
	static int64_t x126 = -1LL;
	uint32_t x127 = UINT32_MAX;
	int8_t x128 = 0;
	int64_t t29 = 1812994359805615646LL;

    t29 = (x125%(x126|(x127+x128)));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x129 = 1206753;
	static volatile int8_t x130 = INT8_MIN;
	int32_t x131 = -1;
	uint8_t x132 = 52U;
	volatile int32_t t30 = -104778;

    t30 = (x129%(x130|(x131+x132)));

    if (t30 != 9) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x134 = -6;
	int16_t x135 = INT16_MAX;

    t31 = (x133%(x134|(x135+x136)));

    if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x137 = INT64_MAX;
	volatile int64_t x138 = INT64_MIN;
	uint32_t x139 = UINT32_MAX;
	volatile uint16_t x140 = 7193U;
	static volatile int64_t t32 = 86493789435867LL;

    t32 = (x137%(x138|(x139+x140)));

    if (t32 != 7191LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x141 = INT16_MIN;
	static volatile int8_t x142 = 50;
	static int8_t x144 = INT8_MIN;
	static uint64_t t33 = 31LLU;

    t33 = (x141%(x142|(x143+x144)));

    if (t33 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x145 = INT64_MIN;
	volatile uint8_t x146 = 4U;
	int8_t x147 = -1;
	static uint64_t x148 = 70950195414215LLU;
	volatile uint64_t t34 = 1392854528290LLU;

    t34 = (x145%(x146|(x147+x148)));

    if (t34 != 59483593198450LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x149 = 1797;
	uint64_t x150 = 680LLU;
	int8_t x151 = INT8_MIN;
	uint32_t x152 = 45995995U;

    t35 = (x149%(x150|(x151+x152)));

    if (t35 != 1797LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint16_t x157 = 1U;
	int16_t x158 = INT16_MAX;
	uint32_t x160 = 7750U;
	int64_t t36 = -612163577640349LL;

    t36 = (x157%(x158|(x159+x160)));

    if (t36 != 1LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x162 = 256U;
	uint64_t x163 = 4278547528730LLU;
	int16_t x164 = -84;
	volatile uint64_t t37 = 5249054725958726LLU;

    t37 = (x161%(x162|(x163+x164)));

    if (t37 != 6414LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x165 = INT16_MIN;
	uint32_t x166 = 12U;
	uint32_t t38 = 65089U;

    t38 = (x165%(x166|(x167+x168)));

    if (t38 != 1442U) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x169 = 3570U;
	uint32_t x170 = 432200566U;
	int32_t x171 = -417172734;
	uint64_t t39 = 4058263278LLU;

    t39 = (x169%(x170|(x171+x172)));

    if (t39 != 3570LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int8_t x173 = -1;
	static int16_t x174 = -1;
	static int8_t x176 = INT8_MIN;
	int32_t t40 = 937689;

    t40 = (x173%(x174|(x175+x176)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint32_t x177 = UINT32_MAX;
	uint32_t x178 = 1158U;
	int64_t x180 = INT64_MIN;
	volatile int64_t t41 = 0LL;

    t41 = (x177%(x178|(x179+x180)));

    if (t41 != 4294967295LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x181 = -1;
	static int32_t x182 = INT32_MIN;
	uint16_t x183 = 927U;
	int8_t x184 = -1;
	static int32_t t42 = 168211808;

    t42 = (x181%(x182|(x183+x184)));

    if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x185 = UINT16_MAX;
	int64_t x186 = INT64_MIN;
	volatile uint16_t x187 = 62U;
	volatile int16_t x188 = -1;
	int64_t t43 = 0LL;

    t43 = (x185%(x186|(x187+x188)));

    if (t43 != 65535LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint32_t x189 = 2356U;
	uint32_t x190 = UINT32_MAX;
	int32_t x192 = -1;
	volatile uint32_t t44 = 204686U;

    t44 = (x189%(x190|(x191+x192)));

    if (t44 != 2356U) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x193 = UINT64_MAX;
	static int64_t x194 = -1LL;
	uint16_t x195 = UINT16_MAX;
	static uint32_t x196 = 8269U;
	static volatile uint64_t t45 = 74779821153337716LLU;

    t45 = (x193%(x194|(x195+x196)));

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x197 = 2862;
	static int8_t x199 = INT8_MIN;
	uint8_t x200 = 1U;
	int32_t t46 = -395233831;

    t46 = (x197%(x198|(x199+x200)));

    if (t46 != 68) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x201 = -60;
	int8_t x202 = INT8_MAX;
	uint32_t x203 = 384U;
	int64_t x204 = -1LL;
	volatile int64_t t47 = 17884585320951LL;

    t47 = (x201%(x202|(x203+x204)));

    if (t47 != -60LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x206 = 5621U;
	volatile int32_t x207 = -2655881;
	int8_t x208 = -1;
	volatile int32_t t48 = -8084947;

    t48 = (x205%(x206|(x207+x208)));

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x210 = 12U;
	volatile uint64_t t49 = 244060787LLU;

    t49 = (x209%(x210|(x211+x212)));

    if (t49 != 10544693115LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x214 = INT64_MIN;
	int64_t x215 = 4439314LL;
	int32_t x216 = INT32_MAX;
	static int64_t t50 = 17430946096944406LL;

    t50 = (x213%(x214|(x215+x216)));

    if (t50 != 66436037LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x217 = 40U;
	static int16_t x219 = INT16_MIN;
	uint16_t x220 = 9421U;

    t51 = (x217%(x218|(x219+x220)));

    if (t51 != 40) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x221 = 0;
	int8_t x222 = INT8_MAX;
	uint16_t x223 = UINT16_MAX;

    t52 = (x221%(x222|(x223+x224)));

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x226 = INT8_MIN;
	int16_t x227 = INT16_MAX;
	static uint16_t x228 = 0U;
	int32_t t53 = -197715;

    t53 = (x225%(x226|(x227+x228)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x230 = INT32_MIN;
	int64_t x232 = -1LL;

    t54 = (x229%(x230|(x231+x232)));

    if (t54 != 4018LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x236 = INT8_MIN;
	int32_t t55 = -71890;

    t55 = (x233%(x234|(x235+x236)));

    if (t55 != -32768) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x237 = INT16_MIN;
	int32_t x238 = -18455682;
	static int32_t x240 = INT32_MAX;
	int32_t t56 = 129936;

    t56 = (x237%(x238|(x239+x240)));

    if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x241 = -1331923254619010LL;
	static volatile int8_t x242 = 2;
	volatile uint64_t x244 = UINT64_MAX;
	static volatile uint64_t t57 = 219322514987LLU;

    t57 = (x241%(x242|(x243+x244)));

    if (t57 != 18445412150454932606LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x245 = 2U;
	int8_t x248 = -1;

    t58 = (x245%(x246|(x247+x248)));

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x250 = 63431U;
	uint32_t x251 = 11U;
	uint32_t t59 = 100149U;

    t59 = (x249%(x250|(x251+x252)));

    if (t59 != 4U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x253 = UINT32_MAX;
	int8_t x254 = INT8_MIN;
	volatile int64_t x255 = -1LL;
	int8_t x256 = 1;
	volatile int64_t t60 = 143845247806LL;

    t60 = (x253%(x254|(x255+x256)));

    if (t60 != 127LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x257 = INT8_MIN;
	int8_t x258 = 0;
	uint64_t x260 = 1126455LLU;
	volatile uint64_t t61 = 82946LLU;

    t61 = (x257%(x258|(x259+x260)));

    if (t61 != 229032LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x262 = -1;
	int32_t x263 = INT32_MAX;
	static volatile int64_t t62 = -15741242LL;

    t62 = (x261%(x262|(x263+x264)));

    if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x265 = 46U;
	uint8_t x267 = 13U;
	uint32_t x268 = UINT32_MAX;
	volatile int64_t t63 = 516016312060803LL;

    t63 = (x265%(x266|(x267+x268)));

    if (t63 != 46LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint32_t x269 = 13U;
	int64_t x270 = INT64_MIN;
	int8_t x271 = INT8_MIN;
	int32_t x272 = 1676;
	int64_t t64 = -1464028472LL;

    t64 = (x269%(x270|(x271+x272)));

    if (t64 != 13LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x273 = 30U;
	static int32_t x274 = INT32_MIN;
	uint16_t x276 = 271U;
	static int32_t t65 = -2611938;

    t65 = (x273%(x274|(x275+x276)));

    if (t65 != 30) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x277 = -41850610374246LL;
	uint64_t x278 = 113591LLU;
	uint64_t x279 = UINT64_MAX;
	static volatile uint32_t x280 = 38U;

    t66 = (x277%(x278|(x279+x280)));

    if (t66 != 35296LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x281 = INT8_MAX;
	volatile int32_t x282 = -2184799;
	static int32_t x283 = -177468;
	volatile int8_t x284 = 31;

    t67 = (x281%(x282|(x283+x284)));

    if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x285 = UINT64_MAX;
	int16_t x286 = INT16_MAX;
	volatile uint64_t t68 = 10060LLU;

    t68 = (x285%(x286|(x287+x288)));

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x289 = UINT64_MAX;
	int16_t x291 = INT16_MIN;
	volatile uint64_t t69 = 226335842927926LLU;

    t69 = (x289%(x290|(x291+x292)));

    if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x297 = -1150;
	static uint64_t x298 = UINT64_MAX;
	uint16_t x300 = 11706U;

    t70 = (x297%(x298|(x299+x300)));

    if (t70 != 18446744073709550466LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x301 = -118;
	int8_t x303 = INT8_MIN;
	int32_t t71 = -6;

    t71 = (x301%(x302|(x303+x304)));

    if (t71 != -118) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x305 = -4491180305735409909LL;
	int64_t x306 = INT64_MIN;
	int16_t x307 = INT16_MAX;
	int16_t x308 = INT16_MIN;

    t72 = (x305%(x306|(x307+x308)));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x311 = UINT32_MAX;
	uint32_t t73 = 3738718U;

    t73 = (x309%(x310|(x311+x312)));

    if (t73 != 6868U) { NG(); } else { ; }
	
}

void f74(void) {
    	static int64_t x313 = INT64_MIN;
	uint64_t x314 = 84557000LLU;
	int8_t x315 = INT8_MAX;
	volatile uint64_t t74 = 438989LLU;

    t74 = (x313%(x314|(x315+x316)));

    if (t74 != 16727788LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x317 = -523713386963299LL;
	int8_t x318 = INT8_MIN;
	int64_t x319 = INT64_MIN;
	volatile int64_t t75 = 12672267609LL;

    t75 = (x317%(x318|(x319+x320)));

    if (t75 != -24LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint64_t x323 = 110141458265LLU;
	int64_t x324 = -29916393782527414LL;
	volatile uint64_t t76 = 3181581546096002LLU;

    t76 = (x321%(x322|(x323+x324)));

    if (t76 != 92LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x325 = INT64_MIN;
	static uint8_t x326 = UINT8_MAX;
	int16_t x327 = -1;
	int16_t x328 = INT16_MAX;
	static volatile int64_t t77 = -172937LL;

    t77 = (x325%(x326|(x327+x328)));

    if (t77 != -8LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x335 = -4;
	int64_t x336 = -1LL;

    t78 = (x333%(x334|(x335+x336)));

    if (t78 != 2LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x337 = -1;
	static uint64_t x338 = 45561656930839672LLU;
	uint16_t x340 = UINT16_MAX;
	volatile uint64_t t79 = 1018LLU;

    t79 = (x337%(x338|(x339+x340)));

    if (t79 != 9177810379923914752LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x341 = -1;
	int8_t x342 = INT8_MAX;
	volatile int8_t x343 = INT8_MAX;
	volatile int64_t x344 = INT64_MIN;
	static volatile int64_t t80 = -117866LL;

    t80 = (x341%(x342|(x343+x344)));

    if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint32_t x346 = UINT32_MAX;
	int16_t x347 = INT16_MIN;
	int8_t x348 = -1;
	static uint32_t t81 = 242304U;

    t81 = (x345%(x346|(x347+x348)));

    if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x350 = INT64_MAX;
	int16_t x351 = INT16_MIN;
	static int16_t x352 = -289;
	int64_t t82 = -126560104LL;

    t82 = (x349%(x350|(x351+x352)));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int32_t x353 = 72;
	static uint16_t x354 = 1717U;
	int64_t x355 = 7193LL;
	int16_t x356 = -13382;
	static int64_t t83 = -321601657608635LL;

    t83 = (x353%(x354|(x355+x356)));

    if (t83 != 72LL) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint64_t x361 = 3653860256505LLU;
	static uint32_t x362 = 7U;
	int8_t x364 = INT8_MIN;
	volatile uint64_t t84 = 844741350LLU;

    t84 = (x361%(x362|(x363+x364)));

    if (t84 != 3138164555LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x365 = 42;

    t85 = (x365%(x366|(x367+x368)));

    if (t85 != 42U) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x369 = INT16_MIN;
	volatile int64_t x370 = INT64_MAX;
	static int64_t x372 = INT64_MIN;

    t86 = (x369%(x370|(x371+x372)));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint16_t x373 = UINT16_MAX;
	int32_t x374 = -1;
	int16_t x375 = INT16_MIN;
	int8_t x376 = INT8_MIN;
	int32_t t87 = 786648611;

    t87 = (x373%(x374|(x375+x376)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x377 = 284364LLU;
	static int16_t x378 = 1;
	uint16_t x379 = UINT16_MAX;
	volatile uint64_t t88 = 943628385286817LLU;

    t88 = (x377%(x378|(x379+x380)));

    if (t88 != 284364LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int32_t x382 = INT32_MIN;
	static int16_t x384 = 5635;
	static volatile int32_t t89 = -2026;

    t89 = (x381%(x382|(x383+x384)));

    if (t89 != -13) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x386 = 151;
	uint16_t x387 = UINT16_MAX;
	static int64_t x388 = INT64_MIN;
	volatile uint64_t t90 = 3650065359192LLU;

    t90 = (x385%(x386|(x387+x388)));

    if (t90 != 570939231968035136LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x389 = INT64_MIN;
	int32_t x390 = -235146;
	int64_t x391 = -12LL;
	uint8_t x392 = 13U;
	volatile int64_t t91 = 422578247LL;

    t91 = (x389%(x390|(x391+x392)));

    if (t91 != -1408LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint16_t x397 = 13U;
	int32_t x398 = INT32_MIN;
	int8_t x399 = 2;
	int32_t x400 = INT32_MIN;
	int32_t t92 = 1989801;

    t92 = (x397%(x398|(x399+x400)));

    if (t92 != 13) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x405 = INT32_MIN;
	uint32_t x407 = 187U;
	static uint64_t t93 = 590196199022LLU;

    t93 = (x405%(x406|(x407+x408)));

    if (t93 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x409 = 2U;
	int16_t x410 = INT16_MIN;
	uint16_t x411 = 25U;
	int8_t x412 = -1;

    t94 = (x409%(x410|(x411+x412)));

    if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x413 = 394U;
	int16_t x414 = -6966;
	int64_t x415 = 3322LL;
	static uint32_t x416 = UINT32_MAX;

    t95 = (x413%(x414|(x415+x416)));

    if (t95 != 394LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x421 = -7347LL;
	volatile int32_t x422 = -1;
	static uint8_t x423 = 127U;
	static int32_t x424 = INT32_MIN;
	int64_t t96 = -62512696LL;

    t96 = (x421%(x422|(x423+x424)));

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x425 = INT8_MIN;
	volatile uint8_t x426 = UINT8_MAX;
	uint16_t x427 = 255U;
	static uint32_t x428 = UINT32_MAX;
	volatile uint32_t t97 = 1388112U;

    t97 = (x425%(x426|(x427+x428)));

    if (t97 != 128U) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x431 = INT8_MAX;
	uint8_t x432 = 1U;
	volatile uint32_t t98 = 14U;

    t98 = (x429%(x430|(x431+x432)));

    if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x437 = -775;
	uint8_t x438 = 1U;
	int8_t x439 = 8;
	volatile int32_t t99 = 520290;

    t99 = (x437%(x438|(x439+x440)));

    if (t99 != -775) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x441 = -1328476LL;
	uint32_t x442 = UINT32_MAX;
	int32_t x443 = -223592;
	int64_t x444 = -1LL;
	volatile int64_t t100 = 7769351450953LL;

    t100 = (x441%(x442|(x443+x444)));

    if (t100 != 0LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x445 = -1;
	volatile int32_t x446 = INT32_MAX;
	int64_t x447 = 94079815938LL;
	static volatile int32_t x448 = 52;
	int64_t t101 = -1600819LL;

    t101 = (x445%(x446|(x447+x448)));

    if (t101 != -1LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x450 = -16;
	int8_t x451 = INT8_MIN;
	uint16_t x452 = UINT16_MAX;
	volatile int32_t t102 = -186631;

    t102 = (x449%(x450|(x451+x452)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x453 = INT32_MIN;
	uint32_t x454 = 56698U;
	static uint64_t x456 = 49496LLU;
	uint64_t t103 = 7604494526550134003LLU;

    t103 = (x453%(x454|(x455+x456)));

    if (t103 != 2123275784LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int8_t x457 = INT8_MIN;
	uint16_t x458 = UINT16_MAX;
	uint32_t t104 = 26U;

    t104 = (x457%(x458|(x459+x460)));

    if (t104 != 65408U) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x465 = -27;
	static int16_t x466 = 27;
	int16_t x467 = 24;
	static int64_t x468 = 760363951723LL;

    t105 = (x465%(x466|(x467+x468)));

    if (t105 != -27LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x470 = INT32_MIN;
	volatile int32_t x471 = INT32_MIN;
	volatile uint64_t x472 = UINT64_MAX;
	volatile uint64_t t106 = 1502534194LLU;

    t106 = (x469%(x470|(x471+x472)));

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int16_t x474 = 5;
	int8_t x475 = INT8_MAX;
	static int32_t t107 = 14343;

    t107 = (x473%(x474|(x475+x476)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x481 = INT32_MAX;
	int64_t x482 = 7797LL;
	uint32_t x483 = 179444166U;
	volatile int64_t t108 = 15348048LL;

    t108 = (x481%(x482|(x483+x484)));

    if (t108 != 173580408LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x489 = INT16_MIN;
	volatile uint64_t x490 = 1LLU;
	int32_t x491 = INT32_MAX;
	uint64_t x492 = 24884526027616247LLU;
	volatile uint64_t t109 = 6599369019LLU;

    t109 = (x489%(x490|(x491+x492)));

    if (t109 != 7308695960496653LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x497 = 43722184596733828LL;
	int8_t x498 = -1;
	int8_t x499 = -1;
	volatile int64_t t110 = 32942691993743500LL;

    t110 = (x497%(x498|(x499+x500)));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x501 = -1LL;
	int64_t x503 = 3192727753968471LL;
	static uint16_t x504 = UINT16_MAX;
	volatile int64_t t111 = -12334908820026LL;

    t111 = (x501%(x502|(x503+x504)));

    if (t111 != -1LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x505 = INT32_MAX;
	int64_t x506 = INT64_MIN;
	volatile uint32_t x507 = UINT32_MAX;
	int32_t x508 = INT32_MAX;
	static volatile int64_t t112 = -62200LL;

    t112 = (x505%(x506|(x507+x508)));

    if (t112 != 2147483647LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x509 = INT32_MAX;
	int32_t x512 = 691;

    t113 = (x509%(x510|(x511+x512)));

    if (t113 != 72902706U) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x513 = INT64_MAX;
	uint8_t x515 = 29U;
	uint32_t x516 = UINT32_MAX;
	int64_t t114 = -692601323856801955LL;

    t114 = (x513%(x514|(x515+x516)));

    if (t114 != 535953799LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint8_t x517 = 0U;
	static int8_t x518 = -1;
	uint32_t x520 = 84U;
	volatile uint64_t t115 = 49883120LLU;

    t115 = (x517%(x518|(x519+x520)));

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x521 = INT32_MIN;
	int64_t x524 = -1LL;
	int64_t t116 = -38975153282034LL;

    t116 = (x521%(x522|(x523+x524)));

    if (t116 != -2147483648LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x525 = -1LL;
	static uint64_t x526 = UINT64_MAX;
	uint8_t x527 = 7U;
	int64_t x528 = -92106513046852654LL;
	static volatile uint64_t t117 = 1148132845449489LLU;

    t117 = (x525%(x526|(x527+x528)));

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x529 = INT8_MIN;
	int8_t x530 = INT8_MIN;
	static int16_t x531 = INT16_MAX;
	static int32_t t118 = -7937812;

    t118 = (x529%(x530|(x531+x532)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x534 = INT32_MIN;
	volatile int8_t x535 = -42;
	uint32_t x536 = UINT32_MAX;
	uint32_t t119 = 186245383U;

    t119 = (x533%(x534|(x535+x536)));

    if (t119 != 42U) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint8_t x537 = 7U;
	static int64_t x538 = -1LL;
	int8_t x539 = INT8_MAX;

    t120 = (x537%(x538|(x539+x540)));

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x545 = -1LL;
	uint32_t x546 = 997676U;
	uint32_t x547 = 12U;
	volatile uint32_t x548 = UINT32_MAX;
	int64_t t121 = 1175476446LL;

    t121 = (x545%(x546|(x547+x548)));

    if (t121 != -1LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint32_t x549 = 10495U;
	int8_t x550 = 7;
	static volatile int16_t x551 = -1;
	uint32_t x552 = UINT32_MAX;
	volatile uint32_t t122 = 3361002U;

    t122 = (x549%(x550|(x551+x552)));

    if (t122 != 10495U) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x553 = UINT8_MAX;
	volatile uint64_t x555 = 188867895722369LLU;
	static int32_t x556 = 6;
	static volatile uint64_t t123 = 3514169586728LLU;

    t123 = (x553%(x554|(x555+x556)));

    if (t123 != 255LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint32_t x557 = 161912U;
	uint32_t x558 = 316269965U;
	uint32_t x559 = 402661U;
	uint16_t x560 = 27796U;
	static uint32_t t124 = 1U;

    t124 = (x557%(x558|(x559+x560)));

    if (t124 != 161912U) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint32_t x561 = 16734527U;
	volatile uint16_t x562 = 1U;
	uint32_t x564 = 449U;

    t125 = (x561%(x562|(x563+x564)));

    if (t125 != 403U) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x565 = -1;
	uint16_t x566 = UINT16_MAX;
	static volatile int16_t x567 = 8074;
	uint64_t x568 = 66989176761733LLU;
	static uint64_t t126 = 4574LLU;

    t126 = (x565%(x566|(x567+x568)));

    if (t126 != 1452193756072LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x569 = 7973U;
	int16_t x570 = 332;
	int16_t x571 = -1;
	int32_t x572 = -1;
	volatile uint32_t t127 = 125701U;

    t127 = (x569%(x570|(x571+x572)));

    if (t127 != 7973U) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x574 = 266389201U;
	int16_t x575 = INT16_MIN;
	int16_t x576 = -1;
	volatile uint32_t t128 = 24U;

    t128 = (x573%(x574|(x575+x576)));

    if (t128 != 21183U) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x578 = UINT8_MAX;
	uint16_t x579 = UINT16_MAX;
	uint32_t x580 = UINT32_MAX;
	volatile uint32_t t129 = 4513U;

    t129 = (x577%(x578|(x579+x580)));

    if (t129 != 127U) { NG(); } else { ; }
	
}

void f130(void) {
    	static int16_t x585 = -1;
	static volatile uint16_t x586 = UINT16_MAX;
	volatile int32_t x587 = 51440;
	int32_t x588 = INT32_MIN;
	volatile int32_t t130 = -139;

    t130 = (x585%(x586|(x587+x588)));

    if (t130 != -1) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint64_t x594 = UINT64_MAX;
	volatile uint64_t x595 = UINT64_MAX;
	volatile int16_t x596 = -1;
	static uint64_t t131 = 10331075734754960LLU;

    t131 = (x593%(x594|(x595+x596)));

    if (t131 != 70580LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint8_t x598 = 9U;
	volatile uint32_t x599 = 3U;

    t132 = (x597%(x598|(x599+x600)));

    if (t132 != 3278U) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x601 = 17307106313846LL;
	int8_t x602 = INT8_MIN;
	uint16_t x604 = 15U;
	volatile int64_t t133 = -189LL;

    t133 = (x601%(x602|(x603+x604)));

    if (t133 != 101LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint64_t x607 = 141610552967475475LLU;

    t134 = (x605%(x606|(x607+x608)));

    if (t134 != 11799106LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x609 = UINT16_MAX;
	volatile int32_t x610 = INT32_MAX;
	volatile uint64_t x611 = 0LLU;
	int32_t x612 = 26334905;

    t135 = (x609%(x610|(x611+x612)));

    if (t135 != 65535LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x613 = INT16_MAX;
	int16_t x614 = 209;
	int16_t x616 = INT16_MIN;
	volatile int32_t t136 = -14858;

    t136 = (x613%(x614|(x615+x616)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x617 = 104U;
	volatile int64_t x619 = -916LL;
	volatile int64_t t137 = -16339301LL;

    t137 = (x617%(x618|(x619+x620)));

    if (t137 != 104LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x621 = 80737384;
	static int16_t x622 = -6;
	int64_t t138 = -3299LL;

    t138 = (x621%(x622|(x623+x624)));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x630 = INT64_MIN;
	uint64_t x632 = UINT64_MAX;
	uint64_t t139 = 11053025LLU;

    t139 = (x629%(x630|(x631+x632)));

    if (t139 != 4294967295LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x633 = INT16_MAX;
	uint32_t x635 = 1986U;
	int8_t x636 = 0;
	volatile uint64_t t140 = 17LLU;

    t140 = (x633%(x634|(x635+x636)));

    if (t140 != 32767LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int64_t x637 = -1LL;
	int16_t x638 = INT16_MIN;
	static int8_t x640 = INT8_MIN;
	volatile int64_t t141 = -41LL;

    t141 = (x637%(x638|(x639+x640)));

    if (t141 != -1LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x641 = UINT32_MAX;
	int32_t x642 = INT32_MAX;
	volatile uint16_t x643 = 7U;
	uint16_t x644 = UINT16_MAX;
	volatile uint32_t t142 = 101U;

    t142 = (x641%(x642|(x643+x644)));

    if (t142 != 1U) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int32_t x645 = INT32_MIN;
	uint64_t x647 = 8717540033LLU;
	int16_t x648 = INT16_MAX;
	uint64_t t143 = 1390908725981LLU;

    t143 = (x645%(x646|(x647+x648)));

    if (t143 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x650 = INT8_MIN;
	uint64_t x651 = 2102884LLU;
	volatile uint64_t t144 = 10585313173361LLU;

    t144 = (x649%(x650|(x651+x652)));

    if (t144 != 32767LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint8_t x653 = 63U;
	int16_t x655 = INT16_MAX;
	int16_t x656 = INT16_MIN;
	int32_t t145 = 893487;

    t145 = (x653%(x654|(x655+x656)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x658 = INT8_MIN;
	uint32_t x659 = 113969971U;
	uint8_t x660 = 39U;
	volatile uint32_t t146 = 7594318U;

    t146 = (x657%(x658|(x659+x660)));

    if (t146 != 2147483647U) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x661 = -25273LL;
	uint8_t x662 = 12U;
	static int8_t x664 = INT8_MAX;
	int64_t t147 = -233434760855LL;

    t147 = (x661%(x662|(x663+x664)));

    if (t147 != -73LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x669 = INT32_MIN;
	uint64_t x670 = 83LLU;
	volatile int64_t x671 = -1LL;
	int32_t x672 = -1;

    t148 = (x669%(x670|(x671+x672)));

    if (t148 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x673 = -1LL;
	int8_t x675 = INT8_MIN;
	int64_t x676 = INT64_MAX;
	volatile int64_t t149 = 1188587593568442LL;

    t149 = (x673%(x674|(x675+x676)));

    if (t149 != -1LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint32_t x679 = 2U;
	static int64_t x680 = INT64_MIN;

    t150 = (x677%(x678|(x679+x680)));

    if (t150 != 2667192516785238LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x682 = 37U;
	static int64_t x683 = INT64_MIN;
	int8_t x684 = INT8_MAX;
	int64_t t151 = -19403662858992LL;

    t151 = (x681%(x682|(x683+x684)));

    if (t151 != 26760300LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x686 = 247U;
	volatile int16_t x687 = -343;
	volatile int16_t x688 = 23;

    t152 = (x685%(x686|(x687+x688)));

    if (t152 != -134) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x689 = INT64_MIN;
	int64_t x690 = 14852288060495378LL;
	int32_t x691 = -61;
	uint32_t x692 = 1U;
	static int64_t t153 = -21612248466LL;

    t153 = (x689%(x690|(x691+x692)));

    if (t153 != -100588134098402LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x693 = INT8_MAX;
	volatile int16_t x695 = -5;
	int32_t x696 = INT32_MAX;
	volatile int32_t t154 = 1;

    t154 = (x693%(x694|(x695+x696)));

    if (t154 != 127) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x697 = 446;
	static int8_t x698 = INT8_MIN;
	uint32_t x699 = UINT32_MAX;
	int32_t x700 = INT32_MIN;

    t155 = (x697%(x698|(x699+x700)));

    if (t155 != 446U) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x702 = -143;
	static int16_t x703 = INT16_MIN;
	static uint8_t x704 = UINT8_MAX;
	volatile int64_t t156 = 1770123LL;

    t156 = (x701%(x702|(x703+x704)));

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint64_t x705 = UINT64_MAX;
	int64_t x706 = INT64_MIN;
	int8_t x708 = INT8_MIN;
	volatile uint64_t t157 = 7722LLU;

    t157 = (x705%(x706|(x707+x708)));

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x709 = -3;
	int64_t x710 = -1LL;
	static int32_t x711 = INT32_MAX;
	int32_t x712 = INT32_MIN;
	int64_t t158 = -1LL;

    t158 = (x709%(x710|(x711+x712)));

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x713 = INT32_MIN;
	uint16_t x714 = UINT16_MAX;
	uint16_t x715 = UINT16_MAX;
	int32_t t159 = 4;

    t159 = (x713%(x714|(x715+x716)));

    if (t159 != -16384) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x717 = INT64_MIN;
	uint8_t x718 = UINT8_MAX;
	volatile int32_t x719 = INT32_MIN;
	uint8_t x720 = 2U;
	int64_t t160 = 610LL;

    t160 = (x717%(x718|(x719+x720)));

    if (t160 != -130050LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x725 = INT8_MIN;
	static int32_t x727 = 4373300;
	static int16_t x728 = INT16_MIN;
	uint32_t t161 = 29U;

    t161 = (x725%(x726|(x727+x728)));

    if (t161 != 4294967168U) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x729 = INT32_MIN;
	static uint8_t x730 = UINT8_MAX;
	volatile int32_t x731 = -1;
	volatile int32_t x732 = 3612;
	int32_t t162 = -30;

    t162 = (x729%(x730|(x731+x732)));

    if (t162 != -794) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x733 = 6LLU;
	volatile uint16_t x736 = 5U;
	volatile uint64_t t163 = 242721011LLU;

    t163 = (x733%(x734|(x735+x736)));

    if (t163 != 6LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x737 = UINT64_MAX;
	int16_t x738 = INT16_MIN;
	int8_t x740 = -6;
	volatile uint64_t t164 = 346542037188540LLU;

    t164 = (x737%(x738|(x739+x740)));

    if (t164 != 6LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x741 = INT16_MIN;
	volatile uint8_t x742 = 0U;
	int8_t x743 = INT8_MIN;
	uint64_t x744 = 1454005LLU;
	uint64_t t165 = 6934864589LLU;

    t165 = (x741%(x742|(x743+x744)));

    if (t165 != 437777LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x745 = -1LL;
	uint32_t x746 = 100U;
	static int16_t x748 = -56;
	int64_t t166 = 1225LL;

    t166 = (x745%(x746|(x747+x748)));

    if (t166 != -1LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint8_t x753 = UINT8_MAX;
	int8_t x754 = 1;
	int32_t x755 = -1;
	int32_t t167 = 1542859;

    t167 = (x753%(x754|(x755+x756)));

    if (t167 != 255) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x758 = INT8_MIN;
	volatile uint8_t x760 = 2U;
	uint64_t t168 = 29324633912999LLU;

    t168 = (x757%(x758|(x759+x760)));

    if (t168 != 126LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x761 = -1;
	volatile uint64_t x764 = 465LLU;
	uint64_t t169 = 3584816530LLU;

    t169 = (x761%(x762|(x763+x764)));

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x765 = 34U;
	volatile int32_t x766 = -52945807;
	uint8_t x767 = 63U;
	int64_t x768 = -1LL;
	volatile int64_t t170 = 3332545641625LL;

    t170 = (x765%(x766|(x767+x768)));

    if (t170 != 34LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint16_t x770 = 13535U;
	int8_t x771 = INT8_MIN;
	uint64_t x772 = 285617LLU;
	uint64_t t171 = 11596LLU;

    t171 = (x769%(x770|(x771+x772)));

    if (t171 != 270189LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x773 = 72U;
	int16_t x774 = -1;
	static int8_t x775 = -1;
	int16_t x776 = INT16_MIN;
	int32_t t172 = -6;

    t172 = (x773%(x774|(x775+x776)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x781 = INT16_MIN;
	int16_t x783 = INT16_MAX;
	int32_t x784 = INT32_MIN;
	int32_t t173 = 59139532;

    t173 = (x781%(x782|(x783+x784)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x785 = 56;
	int64_t x786 = INT64_MIN;
	uint16_t x787 = 12U;
	volatile uint16_t x788 = 63U;
	int64_t t174 = -518443LL;

    t174 = (x785%(x786|(x787+x788)));

    if (t174 != 56LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x789 = -1;
	int64_t x791 = -23081725197LL;
	static int16_t x792 = INT16_MIN;
	int64_t t175 = -220531LL;

    t175 = (x789%(x790|(x791+x792)));

    if (t175 != -1LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x794 = 2586;
	volatile uint32_t t176 = 3166257U;

    t176 = (x793%(x794|(x795+x796)));

    if (t176 != 0U) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x797 = UINT64_MAX;
	volatile int32_t x798 = INT32_MIN;
	static volatile uint32_t x799 = 15897U;
	uint32_t x800 = 116177924U;
	uint64_t t177 = 5864804967LLU;

    t177 = (x797%(x798|(x799+x800)));

    if (t177 != 1531624785LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int32_t x801 = -50763;
	uint16_t x802 = 2037U;
	static int32_t x804 = 1;
	int32_t t178 = -55;

    t178 = (x801%(x802|(x803+x804)));

    if (t178 != -1635) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x805 = 52;
	static int64_t x806 = 7356031058LL;
	int32_t x807 = INT32_MAX;
	int32_t x808 = -6418945;
	static int64_t t179 = 13105LL;

    t179 = (x805%(x806|(x807+x808)));

    if (t179 != 52LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint8_t x811 = 1U;
	volatile uint32_t t180 = 1524750U;

    t180 = (x809%(x810|(x811+x812)));

    if (t180 != 3U) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint8_t x813 = UINT8_MAX;
	int16_t x814 = -12;
	int8_t x815 = INT8_MAX;
	static uint16_t x816 = 3850U;
	int32_t t181 = -208389;

    t181 = (x813%(x814|(x815+x816)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x817 = -27;
	uint64_t x818 = UINT64_MAX;
	uint64_t t182 = 26931791LLU;

    t182 = (x817%(x818|(x819+x820)));

    if (t182 != 18446744073709551589LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x822 = INT64_MIN;
	int64_t x823 = -1LL;
	int32_t x824 = INT32_MIN;
	static volatile int64_t t183 = -128877007422504129LL;

    t183 = (x821%(x822|(x823+x824)));

    if (t183 != -128LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint16_t x826 = UINT16_MAX;
	static uint16_t x827 = 18U;
	int64_t x828 = INT64_MIN;
	volatile int64_t t184 = 114940674825LL;

    t184 = (x825%(x826|(x827+x828)));

    if (t184 != -128LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x829 = -7651275989LL;
	uint64_t x831 = 468049169961134LLU;
	volatile uint64_t t185 = 31476658970729LLU;

    t185 = (x829%(x830|(x831+x832)));

    if (t185 != 18446744066058275627LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint8_t x833 = UINT8_MAX;
	int32_t x834 = INT32_MAX;
	int32_t x835 = 767732682;
	uint64_t x836 = UINT64_MAX;

    t186 = (x833%(x834|(x835+x836)));

    if (t186 != 255LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x837 = 343124429U;
	static uint32_t x838 = 4044U;
	int8_t x840 = 2;
	volatile uint32_t t187 = 0U;

    t187 = (x837%(x838|(x839+x840)));

    if (t187 != 3161U) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x841 = -1;
	uint32_t x842 = UINT32_MAX;
	static int8_t x843 = INT8_MIN;
	int16_t x844 = 185;
	uint32_t t188 = 0U;

    t188 = (x841%(x842|(x843+x844)));

    if (t188 != 0U) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x845 = INT8_MIN;
	volatile int8_t x847 = 1;
	uint32_t x848 = UINT32_MAX;
	static uint32_t t189 = 3U;

    t189 = (x845%(x846|(x847+x848)));

    if (t189 != 128U) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x854 = INT16_MAX;
	int16_t x855 = INT16_MIN;
	int8_t x856 = -1;
	static int32_t t190 = -14836;

    t190 = (x853%(x854|(x855+x856)));

    if (t190 != 37) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int16_t x857 = INT16_MIN;
	int32_t x858 = INT32_MIN;
	volatile uint64_t t191 = 5858966309172431LLU;

    t191 = (x857%(x858|(x859+x860)));

    if (t191 != 2147450880LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x866 = 381604284964840LLU;
	int16_t x867 = INT16_MIN;
	volatile uint64_t t192 = 3780977LLU;

    t192 = (x865%(x866|(x867+x868)));

    if (t192 != 1610322011732861LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x874 = 140980434LLU;
	int16_t x875 = INT16_MAX;
	int16_t x876 = -941;
	volatile uint64_t t193 = 1236933LLU;

    t193 = (x873%(x874|(x875+x876)));

    if (t193 != 3LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x885 = INT32_MAX;
	uint8_t x887 = UINT8_MAX;
	int8_t x888 = -59;
	volatile int32_t t194 = -20786299;

    t194 = (x885%(x886|(x887+x888)));

    if (t194 != 43) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint8_t x889 = 9U;
	int64_t x890 = INT64_MIN;
	volatile int64_t t195 = 20702LL;

    t195 = (x889%(x890|(x891+x892)));

    if (t195 != 9LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x893 = UINT16_MAX;
	uint8_t x894 = 0U;
	int8_t x895 = 7;
	int8_t x896 = -21;
	volatile int32_t t196 = -1;

    t196 = (x893%(x894|(x895+x896)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x901 = UINT32_MAX;
	int64_t x902 = INT64_MAX;
	int8_t x903 = INT8_MIN;
	volatile uint8_t x904 = 2U;
	int64_t t197 = -395LL;

    t197 = (x901%(x902|(x903+x904)));

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x905 = 22751U;
	int32_t x906 = -1;
	int64_t x907 = -1LL;
	volatile int64_t x908 = -5207641584324380LL;

    t198 = (x905%(x906|(x907+x908)));

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x910 = INT32_MIN;
	uint32_t x911 = 84760882U;
	static int8_t x912 = INT8_MIN;

    t199 = (x909%(x910|(x911+x912)));

    if (t199 != 2062722893U) { NG(); } else { ; }
	
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

